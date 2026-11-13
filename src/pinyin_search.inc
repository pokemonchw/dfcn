// Search original and displayed captions with one policy for every picker.
// No query text or source game record is rewritten here.
struct PinyinReading {
    uint32_t codepoint;
    const char *readings;
};
#include "../third_party/pinyin-data/pinyin_data.inc"

static const PinyinReading *search_pinyin_readings(uint32_t codepoint) {
    const auto found = std::lower_bound(std::begin(pinyin_readings),
        std::end(pinyin_readings), codepoint,
        [](const PinyinReading &entry, uint32_t value) {
            return entry.codepoint < value;
        });
    return found != std::end(pinyin_readings) && found->codepoint == codepoint
        ? found : nullptr;
}

// Accept untoned spelling, tone-marked spelling, and the usual v/u:/ü forms.
// Apostrophes and hyphens separate syllables rather than interrupting them.
static std::string normalize_search_pinyin(std::string_view text) {
    std::string normalized;
    normalized.reserve(text.size());
    for (size_t cursor = 0; cursor < text.size();) {
        const auto decoded = decode_utf8_at(text, cursor);
        if (!decoded) return {};
        uint32_t cp = decoded->first;
        const auto original = text.substr(cursor, decoded->second);
        cursor += decoded->second;
        if ((cp <= 0x7f && std::isspace(static_cast<unsigned char>(cp))) ||
            cp == 0x3000 || cp == '\'' || cp == '-' || cp == 0x2019 ||
            cp == 0xb7 || cp == 0x30fb) continue;
        if (cp == 0x308 && !normalized.empty() && normalized.back() == 'u') {
            normalized.back() = 'v';
            continue;
        }
        if (cp == ':' && !normalized.empty() && normalized.back() == 'u') {
            normalized.back() = 'v';
            continue;
        }
        if (cp == 0x300 || cp == 0x301 || cp == 0x302 ||
            cp == 0x304 || cp == 0x30c) continue;
        switch (cp) {
        case 0x100: case 0x101: case 0xc1: case 0xe1:
        case 0x1cd: case 0x1ce: case 0xc0: case 0xe0: cp = 'a'; break;
        case 0x112: case 0x113: case 0xc9: case 0xe9:
        case 0x11a: case 0x11b: case 0xc8: case 0xe8:
        case 0xca: case 0xea: case 0x1ebe: case 0x1ebf:
        case 0x1ec0: case 0x1ec1: cp = 'e'; break;
        case 0x12a: case 0x12b: case 0xcd: case 0xed:
        case 0x1cf: case 0x1d0: case 0xcc: case 0xec: cp = 'i'; break;
        case 0x14c: case 0x14d: case 0xd3: case 0xf3:
        case 0x1d1: case 0x1d2: case 0xd2: case 0xf2: cp = 'o'; break;
        case 0x16a: case 0x16b: case 0xda: case 0xfa:
        case 0x1d3: case 0x1d4: case 0xd9: case 0xf9: cp = 'u'; break;
        case 0xdc: case 0xfc: case 0x1d5: case 0x1d6:
        case 0x1d7: case 0x1d8: case 0x1d9: case 0x1da:
        case 0x1db: case 0x1dc: cp = 'v'; break;
        case 0x1e3e: case 0x1e3f: cp = 'm'; break;
        case 0x143: case 0x144: case 0x147: case 0x148:
        case 0x1f8: case 0x1f9: cp = 'n'; break;
        default: break;
        }
        if (cp >= 0xff01 && cp <= 0xff5e) cp -= 0xfee0;
        if (cp >= 'A' && cp <= 'Z') cp += 'a' - 'A';
        if (cp <= 0x7f) normalized.push_back(static_cast<char>(cp));
        else normalized.append(original);
    }
    return normalized;
}

struct PinyinSearchUnit {
    uint32_t begin, packed;
    uint32_t length() const { return packed & 7; }
    const char *readings() const {
        const uint32_t entry = packed >> 3;
        return entry ? pinyin_readings[entry - 1].readings : nullptr;
    }
};
struct PinyinSearchIndex {
    std::string literal, full, initials;
    std::vector<PinyinSearchUnit> units;
    bool has_pinyin = false, multiple_readings = false;
    uint32_t letters = 0;
    std::array<uint64_t, 11> letter_pairs{};
    size_t bytes() const {
        return literal.capacity() + full.capacity() + initials.capacity() +
            units.capacity() * sizeof(PinyinSearchUnit);
    }
    void add_letter_pair(unsigned first, unsigned second) {
        const unsigned bit = first * 26 + second;
        letter_pairs[bit / 64] |= uint64_t{1} << (bit % 64);
    }
};

static PinyinSearchIndex make_search_pinyin_index(std::string_view text) {
    PinyinSearchIndex index;
    index.literal.reserve(text.size());
    index.full.reserve(text.size());
    index.initials.reserve(text.size());
    for (size_t cursor = 0; cursor < text.size();) {
        const auto decoded = decode_utf8_at(text, cursor);
        if (!decoded) return {};
        const auto literal = text.substr(cursor, decoded->second);
        cursor += decoded->second;
        const auto *entry = search_pinyin_readings(decoded->first);
        const char *readings = entry ? entry->readings : nullptr;
        if (!readings && literal.empty()) continue;
        const auto reading_id = entry ? static_cast<uint32_t>(entry - std::begin(pinyin_readings) + 1) : 0;
        index.units.push_back({static_cast<uint32_t>(index.literal.size()),
            (reading_id << 3) | static_cast<uint32_t>(literal.size())});
        index.literal.append(literal);
        if (readings) {
            const std::string_view choices(readings);
            const size_t end = choices.find(' ');
            index.full.append(choices.substr(0, end));
            index.initials.push_back(choices.front());
            index.has_pinyin = true;
            index.multiple_readings |= end != std::string_view::npos;
        } else {
            index.full.append(literal);
            index.initials.append(literal);
        }
    }
    uint32_t previous_full = 0, previous_initial = 0;
    for (const auto &unit : index.units) {
        uint32_t starts = 0, ends = 0;
        const auto collect = [&](std::string_view spelling) {
            if (spelling.empty()) return;
            const auto letter = [](unsigned char byte) { return byte >= 'a' && byte <= 'z'; };
            if (letter(spelling.front())) starts |= uint32_t{1} << (spelling.front() - 'a');
            if (letter(spelling.back())) ends |= uint32_t{1} << (spelling.back() - 'a');
            for (size_t at = 0; at < spelling.size(); ++at) {
                if (!letter(spelling[at])) continue;
                index.letters |= uint32_t{1} << (spelling[at] - 'a');
                if (at && letter(spelling[at - 1]))
                    index.add_letter_pair(spelling[at - 1] - 'a', spelling[at] - 'a');
            }
        };
        if (const auto *readings = unit.readings()) {
            std::string_view choices(readings);
            while (!choices.empty()) {
                const size_t end = choices.find(' ');
                collect(choices.substr(0, end));
                if (end == std::string_view::npos) break;
                choices.remove_prefix(end + 1);
            }
        } else collect(std::string_view(index.literal).substr(unit.begin, unit.length()));
        for (unsigned first = 0; first < 26; ++first) {
            if (!((previous_full | previous_initial) & (uint32_t{1} << first))) continue;
            for (unsigned second = 0; second < 26; ++second)
                if (starts & (uint32_t{1} << second)) index.add_letter_pair(first, second);
        }
        previous_full = ends;
        previous_initial = unit.readings() ? starts : ends;
    }
    return index;
}

#include "search_similarity.inc"
#include "search_item_taxonomy.inc"

struct PinyinSearchQuery {
    std::string literal, phonetic;
    std::vector<size_t> failure;
    std::vector<std::array<uint32_t, 26>> transitions;
    uint64_t generation = 0;
    uint32_t letters = 0;
    std::array<uint64_t, 11> letter_pairs{};
    bool mixed = false, phonetic_search = false;
    SearchSimilarityQuery similarity;
    mutable SearchItemTaxonomy::Query item_query;
    mutable std::unique_ptr<PinyinSearchQuery> item_qualifier;
    mutable uint64_t item_revision = UINT64_MAX;
    const SearchItemTaxonomy::Query &items(const SearchItemTaxonomy &taxonomy) const {
        if (item_revision != taxonomy.revision) {
            item_query = taxonomy.query(similarity.semantic_source);
            item_qualifier.reset();
            if (!item_query.qualifier.empty()) {
                item_qualifier = std::make_unique<PinyinSearchQuery>();
                item_qualifier->assign(item_query.qualifier);
            }
            item_revision = taxonomy.revision;
        }
        return item_query;
    }
    void assign(std::string_view source) {
        item_revision = UINT64_MAX;
        std::string compact = lower(compact_translated_search_text(source));
        const std::string normalized = normalize_search_pinyin(compact);
        const bool next_mixed = std::any_of(normalized.begin(), normalized.end(),
            [](unsigned char byte) { return byte > 0x7f; });
        const bool next_phonetic_search = std::any_of(normalized.begin(), normalized.end(),
            [](unsigned char byte) { return byte >= 'a' && byte <= 'z'; });
        static std::atomic<uint64_t> next_generation{1};
        generation = next_generation.fetch_add(1, std::memory_order_relaxed);
        literal = std::move(compact);
        phonetic = normalized;
        mixed = next_mixed;
        phonetic_search = next_phonetic_search;
        similarity.assign(phonetic, source);
        letters = 0;
        letter_pairs.fill(0);
        for (size_t at = 0; at < phonetic.size(); ++at) {
            const unsigned char byte = phonetic[at];
            if (byte < 'a' || byte > 'z') continue;
            letters |= uint32_t{1} << (byte - 'a');
            if (at && phonetic[at - 1] >= 'a' && phonetic[at - 1] <= 'z') {
                const unsigned bit = (phonetic[at - 1] - 'a') * 26 + byte - 'a';
                letter_pairs[bit / 64] |= uint64_t{1} << (bit % 64);
            }
        }
        failure.assign(phonetic.size(), 0);
        for (size_t i = 1, prefix = 0; i < phonetic.size(); ++i) {
            while (prefix && phonetic[i] != phonetic[prefix]) prefix = failure[prefix - 1];
            if (phonetic[i] == phonetic[prefix]) ++prefix;
            failure[i] = prefix;
        }
        transitions.clear();
        if (phonetic_search) {
            transitions.resize(phonetic.size());
            for (size_t state = 0; state < phonetic.size(); ++state)
                for (unsigned letter = 0; letter < 26; ++letter)
                    transitions[state][letter] = phonetic[state] == 'a' + letter
                        ? static_cast<uint32_t>(state + 1)
                        : state ? transitions[failure[state - 1]][letter] : 0;
        }
    }
    size_t advance(size_t state, unsigned char byte) const {
        if (byte >= 'a' && byte <= 'z') return transitions[state][byte - 'a'];
        while (state && static_cast<unsigned char>(phonetic[state]) != byte)
            state = failure[state - 1];
        if (static_cast<unsigned char>(phonetic[state]) == byte) ++state;
        return state;
    }
};

struct PinyinSearchScratch {
    std::vector<size_t> states, next, seen;
};

static PinyinSearchScratch &search_pinyin_scratch() {
    return reloadable_thread_state<PinyinSearchScratch, struct PinyinSearchScratchTag>();
}

// Each character branches into its readings, then equal query-prefix states
// merge. This supports every pronunciation without enumerating whole names.
static bool match_search_pinyin_readings(const PinyinSearchIndex &index,
        const PinyinSearchQuery &query, bool initials) {
    auto &scratch = search_pinyin_scratch();
    auto &states = scratch.states;
    auto &next = scratch.next;
    auto &seen = scratch.seen;
    states.assign(1, 0);
    next.clear();
    seen.assign(query.phonetic.size(), 0);
    size_t generation = 0;
    for (const auto &unit : index.units) {
        next.clear();
        ++generation;
        const auto consume = [&](std::string_view spelling) {
            for (size_t state : states) {
                for (unsigned char byte : spelling) {
                    state = query.advance(state, byte);
                    if (state == query.phonetic.size()) return true;
                }
                if (seen[state] != generation) {
                    seen[state] = generation;
                    next.push_back(state);
                }
            }
            return false;
        };
        if (const auto *readings = unit.readings()) {
            std::string_view choices(readings);
            while (!choices.empty()) {
                const size_t end = choices.find(' ');
                const auto spelling = choices.substr(0, end);
                if (consume(initials ? spelling.substr(0, 1) : spelling)) return true;
                if (end == std::string_view::npos) break;
                choices.remove_prefix(end + 1);
            }
            // A mixed Chinese/pinyin query can retain literal characters.
            if (query.mixed && consume(std::string_view(index.literal).substr(
                    unit.begin, unit.length()))) return true;
        } else if (consume(std::string_view(index.literal).substr(unit.begin, unit.length()))) {
            return true;
        }
        states.swap(next);
    }
    return false;
}

// Minimum edit-distance rows merge at character boundaries, preserving every
// pronunciation without an exponential enumeration of polyphonic names.
static bool fuzzy_search_pinyin_readings(const PinyinSearchIndex &index,
        const PinyinSearchQuery &query, bool initials) {
    const auto &needle = query.similarity;
    if (!needle.edits || needle.text.empty()) return false;
    unsigned absent_letters = 0;
    for (const uint32_t cp : needle.text)
        if (cp >= 'a' && cp <= 'z' && !(index.letters & (uint32_t{1} << (cp - 'a'))))
            if (++absent_letters > needle.edits) return false;
    auto &scratch = search_edit_scratch();
    const size_t width = needle.text.size();
    auto &previous = scratch.previous;
    auto &branch = scratch.branch;
    auto &merged = scratch.merged;
    auto &next = scratch.next;
    previous.resize(width + 1);
    std::iota(previous.begin(), previous.end(), 0u);
    merged.resize(width + 1);
    next.resize(width + 1);
    const unsigned ceiling = needle.edits + 1;
    for (const auto &unit : index.units) {
        std::fill(merged.begin(), merged.end(), ceiling);
        const auto consume = [&](std::string_view spelling) {
            branch = previous;
            for (size_t at = 0; at < spelling.size();) {
                const auto cp = decode_utf8_at(spelling, at);
                if (!cp) return false;
                at += cp->second;
                next[0] = 0;
                for (size_t q = 1; q <= width; ++q)
                    next[q] = std::min({branch[q] + 1, next[q - 1] + 1,
                        branch[q - 1] + (cp->first != needle.text[q - 1]), ceiling});
                if (next[width] <= needle.edits) return true;
                branch.swap(next);
            }
            for (size_t q = 0; q <= width; ++q)
                merged[q] = std::min(merged[q], branch[q]);
            return false;
        };
        if (const auto *readings = unit.readings()) {
            std::string_view choices(readings);
            while (!choices.empty()) {
                const size_t end = choices.find(' ');
                const auto spelling = choices.substr(0, end);
                if (consume(initials ? spelling.substr(0, 1) : spelling)) return true;
                if (end == std::string_view::npos) break;
                choices.remove_prefix(end + 1);
            }
            if (query.mixed && consume(std::string_view(index.literal).substr(
                    unit.begin, unit.length()))) return true;
        } else if (consume(std::string_view(index.literal).substr(unit.begin, unit.length()))) {
            return true;
        }
        previous.swap(merged);
    }
    return false;
}

// Catalog records own their normalized text and lazily built pronunciation
// index. A second whole-world cache must not evict these during every scan.
enum class SearchMatchRank { Exact, Substring, Spelling, Related };

struct PreparedSearchText {
    std::string literal, normalized, semantic_source;
    std::unique_ptr<PinyinSearchIndex> pinyin;
    std::unique_ptr<SearchSimilarityIndex> similarity;
    bool ascii = true;
    uint64_t query_generation = 0;
    bool matched = false;
    std::vector<uint32_t> item_concepts;
    uint64_t item_revision = UINT64_MAX;
    bool item_concepts_prepared = false;

    explicit PreparedSearchText(std::string_view target)
        : literal(lower(compact_translated_search_text(target))), semantic_source(target) {
        ascii = std::all_of(literal.begin(), literal.end(),
            [](unsigned char byte) { return byte < 0x80; });
        normalized = normalize_search_pinyin(literal);
    }
    size_t bytes() const {
        return literal.capacity() + normalized.capacity() + semantic_source.capacity() +
            item_concepts.capacity() * sizeof(uint32_t) +
            (pinyin ? sizeof(PinyinSearchIndex) + pinyin->bytes() : 0) +
            (similarity ? sizeof(SearchSimilarityIndex) + similarity->bytes() : 0);
    }
    // A finite native catalog owns these query-independent fields for its
    // lifetime. Prepare them before filtering, without the general text
    // cache's byte-budget eviction/rebuild path.
    void prepare_catalog_index() {
        const auto &taxonomy = search_item_taxonomy();
        item_concepts = taxonomy.recognize(semantic_source);
        item_revision = taxonomy.revision;
        item_concepts_prepared = true;
        if (!ascii && !pinyin)
            pinyin = std::make_unique<PinyinSearchIndex>(make_search_pinyin_index(normalized));
        if (!similarity) {
            similarity = std::make_unique<SearchSimilarityIndex>();
            similarity->add(normalized);
            if (pinyin && pinyin->has_pinyin) {
                similarity->add(pinyin->full);
                similarity->add(pinyin->initials);
            }
        }
        if (const auto *model = search_semantic_model(); model && !similarity->ann) {
            auto tree = std::make_unique<SearchAnnTree>();
            tree->add(*model, semantic_source, true);
            tree->finish();
            similarity->ann = std::move(tree);
        }
    }
    bool matches(const PinyinSearchQuery &query) {
        const auto &taxonomy = search_item_taxonomy();
        if (item_revision != taxonomy.revision) {
            item_concepts.clear();
            item_revision = taxonomy.revision;
            item_concepts_prepared = false;
            query_generation = 0;
        }
        // Fuzzy thresholds and cosine neighbours are not monotonic when the
        // query grows. Cache only an identical query, including prior misses.
        if (query_generation && query_generation == query.generation) return matched;
        const auto &intent = query.items(taxonomy);
        std::optional<bool> typed;
        if (!intent.concepts.empty()) {
            if (!item_concepts_prepared) {
                item_concepts = taxonomy.recognize(semantic_source);
                item_concepts_prepared = true;
            }
            typed = taxonomy.match(item_concepts, intent);
        }
        bool result = typed ? *typed : compute_match(query) || compute_similarity_match(query);
        if (result && query.item_qualifier) result = matches(*query.item_qualifier);
        query_generation = query.generation;
        matched = result;
        return result;
    }
    bool compute_match(const PinyinSearchQuery &query) {
        if (literal.empty() || (ascii && query.mixed)) return false;
        if (literal.find(query.literal) != std::string::npos) return true;
        if (query.phonetic.empty()) return false;
        if (normalized.find(query.phonetic) != std::string::npos) return true;
        if (ascii) return false;
        if (!query.phonetic_search)
            return normalized.find(query.phonetic) != std::string::npos;
        if (!pinyin) pinyin = std::make_unique<PinyinSearchIndex>(
            make_search_pinyin_index(normalized));
        if (!pinyin->has_pinyin) return false;
        if (pinyin->full.find(query.phonetic) != std::string::npos ||
            pinyin->initials.find(query.phonetic) != std::string::npos) return true;
        if (!pinyin->multiple_readings && !query.mixed) return false;
        // Necessary conditions across ALL readings, including full spelling,
        // initials and character boundaries. Reject impossible candidates
        // before running the branching matcher, without dropping any reading.
        if (query.letters & ~pinyin->letters) return false;
        for (size_t at = 0; at < query.letter_pairs.size(); ++at)
            if (query.letter_pairs[at] & ~pinyin->letter_pairs[at]) return false;
        return match_search_pinyin_readings(*pinyin, query, false) ||
            match_search_pinyin_readings(*pinyin, query, true);
    }
    SearchMatchRank rank(const PinyinSearchQuery &query) {
        if (query.literal.empty() || literal.empty()) return SearchMatchRank::Related;
        if (literal == query.literal ||
                (!query.phonetic.empty() && normalized == query.phonetic))
            return SearchMatchRank::Exact;
        if (literal.find(query.literal) != std::string::npos ||
                (!query.phonetic.empty() &&
                 normalized.find(query.phonetic) != std::string::npos))
            return SearchMatchRank::Substring;
        if (compute_match(query) ||
                search_ordered_compound_matches(search_codepoints(normalized), query.similarity))
            return SearchMatchRank::Spelling;
        // This is applied only to admitted results. Fuzzy and semantic
        // retrieval must not tie with a complete literal or pinyin match.
        return SearchMatchRank::Related;
    }
    bool compute_similarity_match(const PinyinSearchQuery &query) {
        if (literal.empty() || query.phonetic.empty()) return false;
        // The first keystroke usually permits no edits. Exact/pinyin matching
        // has already run; without a semantic model only the ordered Chinese
        // compound channel remains. Avoid constructing unused pronunciation
        // and fuzzy indexes for every offscreen candidate on that cold scan.
        if (!similarity && !query.similarity.edits) {
            if (search_ordered_compound_matches(search_codepoints(normalized),
                    query.similarity)) return true;
            if (!query.similarity.semantic_index()) return false;
        }
        if (!similarity) {
            auto index = std::make_unique<SearchSimilarityIndex>();
            index->add(normalized);
            if (!ascii) {
                if (!pinyin) pinyin = std::make_unique<PinyinSearchIndex>(
                    make_search_pinyin_index(normalized));
                if (pinyin->has_pinyin) {
                    index->add(pinyin->full);
                    index->add(pinyin->initials);
                }
            }
            similarity = std::move(index);
        }
        if (similarity->matches(query.similarity, semantic_source)) return true;
        return pinyin && pinyin->has_pinyin && query.phonetic_search &&
            (pinyin->multiple_readings || query.mixed) &&
            (fuzzy_search_pinyin_readings(*pinyin, query, false) ||
             fuzzy_search_pinyin_readings(*pinyin, query, true));
    }
};

struct WorkOrderSearchEntry {
    std::vector<PreparedSearchText> fields;

    WorkOrderSearchEntry(std::string_view source, const std::optional<std::string> &target) {
        fields.reserve(target && *target != source ? 2 : 1);
        fields.emplace_back(source);
        if (target && *target != source) fields.emplace_back(*target);
        for (auto &field : fields) field.prepare_catalog_index();
    }
    bool matches(const PinyinSearchQuery &query, bool native_match) {
        const auto &taxonomy = search_item_taxonomy();
        const auto &intent = query.items(taxonomy);
        const auto typed = taxonomy.match(fields.front().item_concepts, intent);
        // Match the same complete item identity before accepting native
        // substring hits. A material/size qualifier still constrains both
        // bilingual captions rather than being dropped after an item hit.
        if (typed && (!*typed || intent.qualifier.empty())) return *typed;
        if (native_match) return true;
        for (auto &field : fields)
            if (field.matches(query)) return true;
        return false;
    }
    SearchMatchRank rank(const PinyinSearchQuery &query) {
        auto result = SearchMatchRank::Related;
        for (auto &field : fields) result = std::min(result, field.rank(query));
        return result;
    }
};

static bool match_prepared_search_text(PreparedSearchText &text,
        const PinyinSearchQuery &query, size_t &retained_bytes, size_t maximum_bytes) {
    const size_t before = text.bytes();
    const bool had_index = text.pinyin != nullptr;
    const bool had_similarity = text.similarity != nullptr;
    const bool had_ann = text.similarity && text.similarity->ann;
    const bool result = text.matches(query);
    if (text.bytes() > before && text.bytes() - before > maximum_bytes -
            std::min(maximum_bytes, retained_bytes)) {
        if (!had_similarity) text.similarity.reset();
        else if (!had_ann) text.similarity->ann.reset();
        if (!had_index) text.pinyin.reset();
    }
    retained_bytes += text.bytes() - before;
    return result;
}

struct SearchTextHash {
    using is_transparent = void;
    size_t operator()(std::string_view text) const noexcept {
        return std::hash<std::string_view>{}(text);
    }
};

struct PinyinSearchCache {
    PinyinSearchQuery query;
    std::string query_source;
    std::unordered_map<std::string, PreparedSearchText, SearchTextHash, std::equal_to<>> texts;
    size_t bytes = 0;
};

static PinyinSearchCache &search_pinyin_cache() {
    // Declare the thread-state tag once. Identically named local tags in
    // different functions are distinct types and would create separate caches.
    return reloadable_thread_state<PinyinSearchCache, struct PinyinSearchCacheTag>();
}

static const PinyinSearchQuery &translated_search_query(std::string_view query) {
    if (query.size() > 4096) query = {};
    auto &cache = search_pinyin_cache();
    if (cache.query_source != query) {
        cache.query.assign(query);
        cache.query_source.assign(query);
    }
    return cache.query;
}

// Native English substring hits must observe the same whole-item distinction
// as Chinese, pinyin and semantic hits. Empty/unknown queries keep native rules.
static std::optional<bool> translated_search_item_decision(
        std::string_view target, std::string_view query) {
    if (target.empty() || target.size() > 65536 || query.empty() || query.size() > 4096)
        return std::nullopt;
    TranslationStateScope translation_scope;
    const auto &taxonomy = search_item_taxonomy();
    const auto &intent = translated_search_query(query).items(taxonomy);
    if (intent.concepts.empty()) return std::nullopt;
    const auto decision = taxonomy.match(taxonomy.recognize(native_text_to_utf8(target)), intent);
    // An object match cannot bypass untranslated material/size constraints.
    // Let the complete bilingual adapter resolve those against both captions.
    if (decision && *decision && !intent.qualifier.empty()) return std::nullopt;
    return decision;
}

static bool translated_search_text_matches(std::string_view target, std::string_view query) {
    if (target.empty() || target.size() > 65536 || query.empty() || query.size() > 4096)
        return false;
    auto &cache = search_pinyin_cache();
    const auto &prepared = translated_search_query(query);
    if (prepared.literal.empty()) return false;
    // Cross-language semantic matches need not share script or characters.
    constexpr size_t maximum_bytes = 64u * 1024u * 1024u;
    if (auto found = cache.texts.find(target); found != cache.texts.end())
        return match_prepared_search_text(found->second, prepared, cache.bytes, maximum_bytes);
    PreparedSearchText text(target);
    const size_t cost = sizeof(PreparedSearchText) + sizeof(std::string) +
        target.size() + text.bytes() + 4 * sizeof(void *);
    // Retain the working set when a full scan reaches the budget. FIFO
    // eviction here made large catalogs rebuild the entire cache each keypress.
    if (cache.bytes + cost > maximum_bytes) return text.matches(prepared);
    auto inserted = cache.texts.emplace(std::string(target), std::move(text)).first;
    cache.bytes += cost;
    return match_prepared_search_text(inserted->second, prepared, cache.bytes, maximum_bytes);
}
