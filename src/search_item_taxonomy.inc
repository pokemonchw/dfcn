// Native kinds, bilingual noun productions and RAW subtypes own identity.
// Aligned words own compound paraphrases; learned vectors own uncertain
// synonyms. Only a completely resolved query can impose a type exclusion.
struct SearchItemTaxonomy {
    struct Concept {
        std::string kind, name;
        std::vector<std::string> names;
        std::vector<uint32_t> parents, ancestors;
        std::vector<std::vector<uint32_t>> phrases;
        bool category = false, attribute = false, facet = false;
    };
    struct Word {
        std::string english;
        std::vector<std::string> chinese, forms;
    };
    struct Trie {
        std::map<unsigned char, uint32_t> next;
        std::vector<uint32_t> concepts;
    };
    struct Query {
        std::vector<uint32_t> concepts;
        std::string qualifier;
        bool certain = false;
    };
    struct SemanticCatalog {
        SearchAnnTree tree;
        std::vector<uint32_t> owners;
    };
    std::vector<Concept> concepts;
    std::vector<Trie> trie{1};
    std::vector<Word> words;
    std::unordered_map<std::string, uint32_t> identities, word_ids;
    std::unordered_map<std::string, std::vector<uint32_t>> literal_queries, phonetic_queries;
    std::vector<std::pair<std::string, uint32_t>> polyphonic_aliases;
    std::vector<std::pair<std::string, std::string>> alignments;
    std::vector<std::string> noun_suffixes;
    std::vector<std::string> suffix_forms;
    std::unordered_set<std::string> semantic_words;
    mutable std::unique_ptr<SemanticCatalog> semantic;
    uint64_t revision = 0;

    static std::string key(std::string_view text) {
        return normalize_search_pinyin(lower(compact_translated_search_text(text)));
    }
    static void append_unique(std::vector<uint32_t> &values, uint32_t value) {
        if (std::find(values.begin(), values.end(), value) == values.end())
            values.push_back(value);
    }
    static bool han_word(std::string_view text) {
        const auto chars = search_codepoints(text);
        return !chars.empty() && chars.size() <= 16 &&
            std::all_of(chars.begin(), chars.end(), search_han);
    }
    static std::vector<std::string> split(std::string_view value, char delimiter) {
        std::vector<std::string> result;
        while (!value.empty()) {
            const auto end = value.find(delimiter);
            auto part = trim(std::string(value.substr(0, end)));
            if (!part.empty()) result.push_back(std::move(part));
            if (end == std::string_view::npos) break;
            value.remove_prefix(end + 1);
        }
        return result;
    }
    static std::vector<std::string> english_words(std::string_view text) {
        auto result = split(lower(std::string(text)), ' ');
        if (result.empty() || result.size() > 12) return {};
        for (const auto &word : result)
            if (!std::all_of(word.begin(), word.end(), [](unsigned char c) {
                    return (c >= 'a' && c <= 'z') || c == '-' || c == '\'';
                })) return {};
        return result;
    }
    uint32_t concept_for(std::string_view identity, std::string_view kind,
            std::string_view name, bool category = false) {
        const auto found = identities.find(std::string(identity));
        if (found != identities.end()) return found->second;
        const auto id = static_cast<uint32_t>(concepts.size());
        identities.emplace(identity, id);
        Concept entry;
        entry.kind = kind;
        entry.name = name;
        entry.category = category;
        concepts.push_back(std::move(entry));
        return id;
    }
    uint32_t kind_for(std::string_view kind) {
        return concept_for("type:" + std::string(kind), kind, kind, true);
    }
    void parent(uint32_t child, uint32_t ancestor) {
        if (child != ancestor) append_unique(concepts[child].parents, ancestor);
    }
    void alias(uint32_t id, std::string_view spelling) {
        const std::string word = lower(trim(std::string(spelling)));
        if (word.empty()) return;
        auto &names = concepts[id].names;
        if (std::find(names.begin(), names.end(), word) != names.end()) return;
        names.push_back(word);
        append_unique(literal_queries[key(word)], id);
        uint32_t node = 0;
        for (const unsigned char byte : word) {
            const auto found = trie[node].next.find(byte);
            if (found == trie[node].next.end()) {
                const auto child = static_cast<uint32_t>(trie.size());
                trie[node].next.emplace(byte, child);
                trie.emplace_back();
                node = child;
            } else node = found->second;
        }
        append_unique(trie[node].concepts, id);
        const auto pinyin = make_search_pinyin_index(key(word));
        if (pinyin.has_pinyin) {
            append_unique(phonetic_queries[pinyin.full], id);
            append_unique(phonetic_queries[pinyin.initials], id);
            if (pinyin.multiple_readings) polyphonic_aliases.emplace_back(word, id);
        }
    }
    // Every native kind exists independently of the supplemental family data.
    void load_relations() {
        std::ifstream input(runtime::data_path() / "search-concepts.tsv");
        for (std::string line; std::getline(input, line);) {
            if (line.empty() || line.front() == '#') continue;
            const auto fields = split(line, '\t');
            if (fields.size() != 3) continue;
            if (fields[0] == "group") {
                const auto id = concept_for("group:" + fields[1], fields[1], fields[1], true);
                concepts[id].facet = true;
                for (const auto &name : split(fields[2], '|')) alias(id, name);
            } else if (fields[0] == "kinds") {
                const auto id = concept_for("group:" + fields[1], fields[1], fields[1], true);
                for (const auto &kind : split(fields[2], '|')) parent(kind_for(kind), id);
            } else if (fields[0] == "attribute") {
                concepts[kind_for(fields[1])].attribute = true;
            } else if (fields[0] == "suffix" && fields[1] == "zh-noun") {
                noun_suffixes = split(fields[2], '|');
            }
        }
    }
    struct RawNoun {
        std::string kind, singular, plural;
        bool wearable = false, protection = false, metal_protection = false;
    };
    static std::vector<RawNoun> raw_nouns() {
        std::vector<RawNoun> result;
        // Collect vocabulary from installed/local extensions as well. The
        // native list still owns availability and the actual candidate set.
        for (const auto directory : {"data/vanilla", "data/installed_mods", "mods"}) {
            const auto root = runtime::game_directory() / directory;
            std::error_code error;
            for (fs::directory_iterator package(root, error), end; !error && package != end;
                    package.increment(error)) {
                std::error_code files_error;
                for (fs::directory_iterator file(package->path() / "objects", files_error), files_end;
                        !files_error && file != files_end; file.increment(files_error)) {
                    if (file->path().extension() != ".txt") continue;
                    std::ifstream input(file->path(), std::ios::binary);
                    const std::string raw{std::istreambuf_iterator<char>(input),
                        std::istreambuf_iterator<char>()};
                    if (raw.find("[OBJECT:ITEM]") == std::string::npos) continue;
                    RawNoun noun;
                    const auto finish = [&] {
                        if (!noun.kind.empty() && !noun.singular.empty()) result.push_back(noun);
                    };
                    for (size_t at = raw.find('['); at != std::string::npos;
                            at = raw.find('[', at + 1)) {
                        const auto close = raw.find(']', at + 1);
                        if (close == std::string::npos) break;
                        const std::string_view tag(raw.data() + at + 1, close - at - 1);
                        if (tag.starts_with("ITEM_") && tag.find(':') != std::string_view::npos) {
                            finish();
                            noun = {};
                            noun.kind = lower(std::string(tag.substr(5, tag.find(':') - 5)));
                        } else if (tag.starts_with("NAME:")) {
                            const auto fields = split(tag.substr(5), ':');
                            if (!fields.empty()) noun.singular = lower(fields[0]);
                            noun.plural = fields.size() > 1 ? lower(fields[1]) : noun.singular;
                        } else if (tag.starts_with("ARMORLEVEL:")) {
                            noun.protection = tag.substr(11) != "0";
                        } else if (tag.starts_with("LAYER:")) {
                            noun.wearable = true;
                        } else if (tag == "METAL_ARMOR_LEVELS") {
                            noun.metal_protection = true;
                        }
                    }
                    finish();
                }
            }
        }
        return result;
    }
    uint32_t word_for(std::string_view english) {
        const std::string normalized = lower(std::string(english));
        const auto found = word_ids.find(normalized);
        if (found != word_ids.end()) return found->second;
        const auto id = static_cast<uint32_t>(words.size());
        word_ids.emplace(normalized, id);
        words.push_back({normalized, {}, {key(normalized)}});
        return id;
    }
    bool chinese_word(uint32_t id, std::string_view chinese) {
        if (!han_word(chinese)) return false;
        auto &aliases = words[id].chinese;
        if (std::find(aliases.begin(), aliases.end(), chinese) != aliases.end()) return false;
        aliases.emplace_back(chinese);
        return true;
    }
    void prepare_words() {
        for (auto &entry : concepts)
            for (const auto &name : entry.names) {
                const auto parts = english_words(name);
                if (parts.empty()) continue;
                std::vector<uint32_t> phrase;
                for (const auto &part : parts) phrase.push_back(word_for(part));
                if (std::find(entry.phrases.begin(), entry.phrases.end(), phrase) == entry.phrases.end())
                    entry.phrases.push_back(phrase);
                for (const auto &translated : entry.names) {
                    if (!han_word(translated)) continue;
                    alignments.emplace_back(name, translated);
                    if (phrase.size() == 1) chinese_word(phrase.front(), translated);
                }
            }
        const auto add_pair = [&](std::string_view source, std::string_view target) {
            const auto found = word_ids.find(lower(std::string(source)));
            if (found != word_ids.end()) chinese_word(found->second, target);
        };
        for (const auto &[source, target] : RULESETS.search_word_equivalents()) {
            add_pair(source, target);
            if (han_word(target)) semantic_words.insert(target);
        }
        std::ifstream glossary(runtime::data_path() / "procedural-terms.tsv");
        for (std::string line; std::getline(glossary, line);) {
            if (line.empty() || line.front() == '#') continue;
            const auto fields = split(line, '\t');
            if (fields.size() >= 2) add_pair(fields[0], fields[1]);
        }
        // Recover remaining constituents from aligned complete nouns.
        // Prefix/suffix evidence licenses a word sense in the vocabulary;
        // translations and user-authored names are never changed.
        for (unsigned pass = 0; pass < 8; ++pass) {
            bool changed = false;
            for (const auto &[source, target] : alignments) {
                const auto parts = english_words(source);
                if (parts.size() < 2) continue;
                struct Span { size_t first, last, begin, end; };
                std::vector<Span> pending{{0, parts.size(), 0, target.size()}};
                std::set<std::array<size_t, 4>> seen;
                while (!pending.empty()) {
                    const auto span = pending.back();
                    pending.pop_back();
                    if (!seen.insert({span.first, span.last, span.begin, span.end}).second) continue;
                    if (span.begin >= span.end) continue;
                    const std::string_view text(target.data() + span.begin, span.end - span.begin);
                    if (span.last - span.first == 1) {
                        changed |= chinese_word(word_ids.at(parts[span.first]), text);
                        continue;
                    }
                    for (const auto &form : words[word_ids.at(parts[span.first])].chinese)
                        if (text.starts_with(form))
                            pending.push_back({span.first + 1, span.last, span.begin + form.size(), span.end});
                    for (const auto &form : words[word_ids.at(parts[span.last - 1])].chinese)
                        if (text.ends_with(form))
                            pending.push_back({span.first, span.last - 1, span.begin, span.end - form.size()});
                }
            }
            if (!changed) break;
        }
        for (auto &word : words) {
            const auto add_form = [&](std::string value) {
                if (!value.empty() && std::find(word.forms.begin(), word.forms.end(), value) == word.forms.end())
                    word.forms.push_back(std::move(value));
            };
            for (const auto &form : word.chinese) {
                add_form(key(form));
                const auto pinyin = make_search_pinyin_index(key(form));
                add_form(pinyin.full);
                add_form(pinyin.initials);
                semantic_words.insert(form);
            }
        }
        // Inflections share a lexical word only when its base is actually
        // present in this vocabulary; never strip arbitrary English endings.
        for (auto &word : words) {
            std::vector<std::string> bases;
            if (word.english.ends_with("ies"))
                bases.push_back(word.english.substr(0, word.english.size() - 3) + "y");
            if (word.english.ends_with("es"))
                bases.push_back(word.english.substr(0, word.english.size() - 2));
            if (word.english.ends_with('s'))
                bases.push_back(word.english.substr(0, word.english.size() - 1));
            for (const auto &base : bases)
                if (const auto found = word_ids.find(base); found != word_ids.end()) {
                    words[found->second].forms.push_back(key(word.english));
                    word.forms.push_back(key(base));
                    break;
                }
        }
        for (const auto &suffix : noun_suffixes) {
            const auto pinyin = make_search_pinyin_index(suffix);
            for (const auto &form : {suffix, pinyin.full, pinyin.initials})
                if (!form.empty()) suffix_forms.push_back(form);
        }
    }
    void add_head_categories() {
        // A native enum is not a complete lexical hierarchy: battle axes and
        // tool axes still share the noun "axe". Derive noun-head parents from
        // every bilingual compound, rather than listing individual weapons.
        const auto base_word = [&](uint32_t id) {
            const auto &name = words[id].english;
            std::vector<std::string> bases;
            if (name.ends_with("ies")) bases.push_back(name.substr(0, name.size() - 3) + "y");
            if (name.ends_with("es")) bases.push_back(name.substr(0, name.size() - 2));
            if (name.ends_with('s')) bases.push_back(name.substr(0, name.size() - 1));
            for (const auto &base : bases)
                if (const auto found = word_ids.find(base); found != word_ids.end()) return found->second;
            return id;
        };
        std::unordered_map<uint32_t, uint32_t> heads;
        const size_t nouns = concepts.size();
        for (uint32_t id = 0; id < nouns; ++id) {
            if (concepts[id].category) continue;
            // Copy because creating a head can reallocate the concept array.
            const auto phrases = concepts[id].phrases;
            const auto names = concepts[id].names;
            for (const auto &phrase : phrases) {
                if (phrase.size() < 2) continue;
                const auto word = phrase.back(), base = base_word(word);
                const auto head = concept_for("head:" + words[base].english,
                    "@head", words[base].english, true);
                heads[base] = head;
                parent(id, head);
                alias(head, words[word].english);
                alias(head, words[base].english);
                for (const auto &form : words[word].chinese)
                    for (const auto &name : names)
                        if (han_word(name) && name.ends_with(form) && name != form) {
                            alias(head, form);
                            break;
                        }
            }
        }
        for (uint32_t id = 0; id < nouns; ++id)
            for (const auto &phrase : concepts[id].phrases) {
                if (phrase.empty()) continue;
                const auto found = heads.find(base_word(phrase.back()));
                if (found != heads.end()) parent(id, found->second);
            }
    }
    explicit SearchItemTaxonomy(uint64_t version) : revision(version) {
        const auto item = concept_for("group:item", "item", "item", true);
        load_relations();
        const auto vocabulary = RULESETS.search_item_nouns();
        std::unordered_map<std::string, std::vector<uint32_t>> native_ids;
        for (const auto &noun : vocabulary) {
            const auto type = kind_for(noun.kind);
            parent(type, item);
            const auto id = noun.category ? type :
                concept_for(noun.kind + ":" + key(noun.target), noun.kind, noun.target);
            parent(id, type);
            alias(id, noun.source);
            alias(id, noun.target);
            if (!noun.category) append_unique(native_ids[lower(noun.source)], id);
        }
        for (const auto &noun : raw_nouns()) {
            const auto type = kind_for(noun.kind);
            parent(type, item);
            auto ids = native_ids[noun.singular];
            if (ids.empty()) {
                const auto id = concept_for(noun.kind + ":" + key(noun.singular), noun.kind, noun.singular);
                ids.push_back(id);
                alias(id, noun.singular);
                alias(id, noun.plural);
            }
            for (const auto id : ids) {
                parent(id, type);
                alias(id, noun.singular);
                alias(id, noun.plural);
                if (noun.wearable) {
                    const auto facet = identities.find(noun.protection ? "group:armor" : "group:clothing");
                    if (facet != identities.end()) parent(id, facet->second);
                    if (noun.metal_protection) {
                        const auto armor = identities.find("group:armor");
                        if (armor != identities.end()) parent(id, armor->second);
                    }
                }
            }
        }
        prepare_words();
        add_head_categories();
        for (uint32_t id = 0; id < concepts.size(); ++id) {
            auto &entry = concepts[id];
            entry.ancestors = entry.parents;
            for (size_t at = 0; at < entry.ancestors.size(); ++at)
                for (const auto parent_id : concepts[entry.ancestors[at]].parents)
                    if (parent_id != id) append_unique(entry.ancestors, parent_id);
            for (const auto parent_id : entry.ancestors)
                entry.attribute = entry.attribute || concepts[parent_id].attribute;
        }
    }
    // Complete lexical words, not tokenizer fragments or individual unknown
    // Han characters, are the units used by semantic query coverage.
    std::vector<std::string> query_words(std::string_view text) const {
        const std::string normalized = lower(std::string(text));
        std::vector<std::string> result;
        const auto longest = [&](size_t at) {
            size_t found = 0;
            for (size_t end = at; end < normalized.size() && end - at < 48;) {
                const auto cp = decode_utf8_at(normalized, end);
                if (!cp || !search_han(cp->first)) break;
                end += cp->second;
                if (semantic_words.contains(normalized.substr(at, end - at))) found = end - at;
            }
            return found;
        };
        for (size_t at = 0; at < normalized.size();) {
            const auto cp = decode_utf8_at(normalized, at);
            if (!cp) break;
            if (!search_semantic_word_character(cp->first)) { at += cp->second; continue; }
            if (search_han(cp->first)) {
                if (!result.empty() && std::any_of(noun_suffixes.begin(), noun_suffixes.end(),
                        [&](const auto &suffix) { return normalized.substr(at) == suffix; })) break;
                size_t length = longest(at);
                if (!length) {
                    length = cp->second;
                    while (at + length < normalized.size()) {
                        const auto next = decode_utf8_at(normalized, at + length);
                        if (!next || !search_han(next->first) || longest(at + length)) break;
                        length += next->second;
                    }
                }
                result.push_back(normalized.substr(at, length));
                at += length;
            } else {
                size_t end = at + cp->second;
                while (end < normalized.size()) {
                    const auto next = decode_utf8_at(normalized, end);
                    if (!next || search_han(next->first) ||
                            (!search_semantic_word_character(next->first) && next->first != '-')) break;
                    end += next->second;
                }
                result.push_back(normalized.substr(at, end - at));
                at = end;
            }
        }
        return result;
    }
    bool phrase_matches(std::string_view text, const std::vector<uint32_t> &phrase) const {
        std::vector<size_t> positions{0}, next;
        for (size_t part = 0; part < phrase.size(); ++part) {
            next.clear();
            const auto &word = words[phrase[part]];
            for (const auto at : positions) {
                const auto consume = [&](std::string_view form) {
                    if (form.empty() || !text.substr(at).starts_with(form)) return;
                    const size_t end = at + form.size();
                    next.push_back(end);
                    // Nominal suffixes belong to a recognized final noun.
                    // Never delete arbitrary trailing Han characters.
                    if (part + 1 == phrase.size())
                        for (const auto &ending : suffix_forms)
                            if (text.substr(end) == ending) next.push_back(text.size());
                    if (part + 1 < phrase.size() && text.substr(end).starts_with("的"))
                        next.push_back(end + std::string_view("的").size());
                };
                for (const auto &form : word.forms) consume(form);
            }
            std::sort(next.begin(), next.end());
            next.erase(std::unique(next.begin(), next.end()), next.end());
            positions.swap(next);
            if (positions.empty()) return false;
        }
        return std::find(positions.begin(), positions.end(), text.size()) != positions.end();
    }
    void finish_query(Query &result) const {
        if (std::any_of(result.concepts.begin(), result.concepts.end(),
                [&](uint32_t id) { return concepts[id].facet; }))
            std::erase_if(result.concepts, [&](uint32_t id) { return !concepts[id].facet; });
    }
    const SemanticCatalog *semantic_catalog() const {
        if (semantic) return semantic.get();
        const auto *model = search_semantic_model();
        if (!model) return nullptr;
        auto catalog = std::make_unique<SemanticCatalog>();
        for (uint32_t id = 0; id < concepts.size(); ++id)
            for (const auto &name : concepts[id].names) {
                catalog->tree.add(*model, name, false);
                catalog->owners.resize(catalog->tree.points.size(), id);
            }
        catalog->tree.finish();
        semantic = std::move(catalog);
        return semantic.get();
    }
    Query query(std::string_view text, bool use_semantic = true, bool qualifiers = true) const {
        Query result;
        const auto normalized = key(text);
        const auto characters = search_codepoints(normalized);
        const bool han = std::any_of(characters.begin(), characters.end(), search_han);
        if (characters.empty() || (!han && characters.size() < 2)) return result;
        if (const auto found = literal_queries.find(normalized); found != literal_queries.end())
            result.concepts = found->second;
        else {
            if (const auto found = phonetic_queries.find(normalized); found != phonetic_queries.end())
                result.concepts = found->second;
            if (!han && normalized.size() < 64)
                for (const auto &[alias, id] : polyphonic_aliases)
                    if (SearchSemanticPronunciations::matches(alias, normalized, false) ||
                            SearchSemanticPronunciations::matches(alias, normalized, true))
                        append_unique(result.concepts, id);
        }
        if (result.concepts.empty() && characters.size() <= 64)
            for (uint32_t id = 0; id < concepts.size(); ++id)
                for (const auto &phrase : concepts[id].phrases)
                    if (phrase_matches(normalized, phrase)) {
                        append_unique(result.concepts, id);
                        break;
                    }
        if (!result.concepts.empty()) {
            result.certain = true;
            finish_query(result);
            return result;
        }
        // Resolve the longest object phrase at the end, retaining the entire
        // prefix as an independent constraint. No material/action/size word
        // may be dropped just because the object name was recognized.
        if (qualifiers && characters.size() <= 64) {
            for (size_t at = 0; at < text.size();) {
                const auto cp = decode_utf8_at(text, at);
                if (!cp) break;
                at += cp->second;
                if (at == text.size()) break;
                if (!search_han(cp->first) && !std::isspace(static_cast<unsigned char>(text[at - 1])))
                    continue;
                auto tail = query(text.substr(at), false, false);
                if (tail.concepts.empty() || !tail.certain) continue;
                tail.qualifier = trim(std::string(text.substr(0, at)));
                if (!tail.qualifier.empty()) return tail;
            }
        }
        if (!use_semantic || characters.size() < 2 || characters.size() > 64) return result;
        if (han && characters.size() <= 2 &&
                std::any_of(characters.begin(), characters.end(), [](uint32_t cp) {
                    return cp == 0x4e4b || cp == 0x7684 || cp == 0x4e0e || cp == 0x53ca;
                })) return result;
        const auto *catalog = semantic_catalog();
        if (!catalog) return result;
        const auto *model = search_semantic_model();
        SearchAnnTree requested;
        requested.add_query(*model, text, query_words(text));
        if (requested.points.empty()) return result;
        // Resolve a complete query against bilingual concept prototypes.
        // Ambiguous ANN neighbours add candidates but never veto spelling.
        std::vector<std::pair<float, uint32_t>> neighbours;
        const auto &point = requested.points.front();
        catalog->tree.matches(point.vector, 0.28f, [&](const SearchAnnTree::Point &found) {
            if (requested.covered_by(point, catalog->tree, found)) {
                const size_t ordinal = static_cast<size_t>(&found - catalog->tree.points.data());
                neighbours.emplace_back(search_cosine_distance(point.vector, found.vector),
                    catalog->owners[ordinal]);
            }
            return false;
        }, 512);
        if (!neighbours.empty()) {
            const float best = std::min_element(neighbours.begin(), neighbours.end())->first;
            for (const auto &[distance, id] : neighbours)
                if (distance <= best + 0.035f) append_unique(result.concepts, id);
        }
        return result;
    }
    std::vector<uint32_t> recognize(std::string_view source) const {
        const std::string text = lower(std::string(source));
        std::vector<uint32_t> result;
        const auto letter = [](unsigned char byte) {
            return byte < 128 && (std::isalnum(byte) || byte == '_');
        };
        for (size_t at = 0; at < text.size();) {
            uint32_t node = 0;
            size_t longest = at;
            const std::vector<uint32_t> *matched = nullptr;
            for (size_t end = at; end < text.size(); ++end) {
                const auto found = trie[node].next.find(static_cast<unsigned char>(text[end]));
                if (found == trie[node].next.end()) break;
                node = found->second;
                if (trie[node].concepts.empty()) continue;
                if (letter(text[at]) && at && letter(text[at - 1])) continue;
                if (letter(text[end]) && end + 1 < text.size() && letter(text[end + 1])) continue;
                longest = end + 1;
                matched = &trie[node].concepts;
            }
            if (matched) {
                for (const auto id : *matched) append_unique(result, id);
                at = longest;
            } else {
                const auto cp = decode_utf8_at(text, at);
                at += cp ? cp->second : 1;
            }
        }
        return result;
    }
    bool specializes(uint32_t candidate, uint32_t requested) const {
        if (candidate == requested) return true;
        const auto &a = concepts[candidate], &b = concepts[requested];
        if (std::find(a.ancestors.begin(), a.ancestors.end(), requested) != a.ancestors.end())
            return true;
        if (a.kind != b.kind) return false;
        for (const auto &long_name : a.names)
            for (const auto &short_name : b.names) {
                if (!long_name.ends_with(short_name)) continue;
                const size_t prefix = long_name.size() - short_name.size();
                if (!prefix || long_name[prefix - 1] == ' ' ||
                        static_cast<unsigned char>(short_name.front()) >= 128) return true;
            }
        return false;
    }
    std::optional<bool> match(const std::vector<uint32_t> &candidate, const Query &query) const {
        if (query.concepts.empty() || candidate.empty()) return std::nullopt;
        for (const auto requested : query.concepts)
            for (const auto id : candidate)
                if (specializes(id, requested)) return true;
        if (!query.certain || std::any_of(query.concepts.begin(), query.concepts.end(),
                [&](uint32_t id) { return concepts[id].attribute; })) return std::nullopt;
        return false;
    }
};

static const SearchItemTaxonomy &search_item_taxonomy() {
    TranslationStateScope state;
    struct Cache { std::unique_ptr<SearchItemTaxonomy> taxonomy; };
    // Native input and SDL preparation share one immutable vocabulary. A
    // private translator still owns its own domain and resource revision.
    static const unsigned char tag = 0;
    auto &cache = domain_cache<Cache>(&tag);
    const auto revision = RULESETS.resource_revision();
    if (!cache.taxonomy || cache.taxonomy->revision != revision)
        cache.taxonomy = std::make_unique<SearchItemTaxonomy>(revision);
    return *cache.taxonomy;
}

static std::vector<std::string> search_semantic_query_words(std::string_view text) {
    return search_item_taxonomy().query_words(text);
}
