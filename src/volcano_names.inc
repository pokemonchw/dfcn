std::string VolcanoNames::folded(std::string_view source) {
    std::string result(source);
    for (auto &ch : result) if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
    return result;
}

bool VolcanoNames::load(const std::filesystem::path &directory) {
    const auto path = directory / "volcano-name-heads.tsv";
    std::ifstream input(path, std::ios::binary);
    error_.clear();
    if (!input) { error_ = "Cannot open " + path.filename().string(); return false; }
    std::unordered_map<std::string, std::string> next;
    std::string line;
    size_t number = 0;
    bool header = false;
    while (std::getline(input, line)) {
        ++number;
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (number == 1 && line.starts_with("\xef\xbb\xbf")) line.erase(0, 3);
        if (line.empty() || line.front() == '#') continue;
        if (!header) {
            if (line != "word_id\tsuffix") {
                error_ = "Invalid volcano-name-heads.tsv header"; return false;
            }
            header = true;
            continue;
        }
        const auto tab = line.find('\t');
        if (tab == std::string::npos || tab == 0 || tab + 1 == line.size() ||
                line.find('\t', tab + 1) != std::string::npos ||
                !next.emplace(line.substr(0, tab), line.substr(tab + 1)).second) {
            error_ = "Invalid volcano-name-heads.tsv row " + std::to_string(number);
            return false;
        }
    }
    if (!header || next.empty() || input.bad()) {
        error_ = "Incomplete volcano-name-heads.tsv"; return false;
    }
    suffixes_ = std::move(next);
    surface_cache_.clear();
    return true;
}

void VolcanoNames::set_forms(const EnglishForms &forms) {
    forms_.clear();
    surface_cache_.clear();
    // Include untranslated WORDs and homographs too. Missing Chinese senses
    // must never make an ambiguous English spelling appear unambiguous.
    for (const auto &[id, variants] : forms)
        for (size_t pos = 0; pos < variants.size(); ++pos) {
            if (variants[pos].empty()) continue;
            forms_[folded(variants[pos])].push_back(
                NativeHistoryWord{id, static_cast<int16_t>(pos), true, variants[pos]});
        }
}

std::optional<VolcanoNames::Structure> VolcanoNames::structure(const NativeHistoryName &name) {
    const auto present = [&](size_t slot) { return !name.words[slot].id.empty(); };
    // Ordinary mountains share type 19; the caller still establishes the
    // real volcano context. Authored names do not enter procedural grammar.
    if (!name.has_name || name.type != 19 || !name.first_name.empty() ||
            !name.nickname.empty() || present(0) || present(1) || !present(5))
        return std::nullopt;
    for (const auto &construction : constructions_)
        if (present(2) == (construction.adjective_count >= 1) &&
                present(3) == (construction.adjective_count == 2) &&
                present(4) == construction.hyphenated &&
                present(6) == construction.has_complement)
            return construction;
    return std::nullopt;
}

std::optional<NativeHistoryName> VolcanoNames::resolve_surface(std::string_view source) const {
    source = trim_view(source);
    if (source.empty() || source.size() > 256 ||
            !std::all_of(source.begin(), source.end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                    ch == ' ' || ch == '-' || ch == '\'';
            })) return std::nullopt;
    const std::string text = folded(source);
    if (!text.starts_with("the ")) return std::nullopt;
    if (const auto cached = surface_cache_.find(text); cached != surface_cache_.end())
        return cached->second;

    using Slots = std::array<NativeHistoryWord, 7>;
    using Parses = std::vector<Slots>;
    const auto same = [](const Slots &a, const Slots &b) {
        for (size_t slot = 0; slot < a.size(); ++slot) {
            if (a[slot].id != b[slot].id) return false;
            const int left = a[slot].part_of_speech, right = b[slot].part_of_speech;
            // Equal singular/plural spellings of one WORD have exactly the
            // same Chinese meaning here. They do not create a second reading.
            if (left != right && !(left >= 0 && left <= 1 && right >= 0 && right <= 1))
                return false;
        }
        return true;
    };
    const auto add = [&](Parses &to, Slots slots) {
        if (to.size() < 2 && std::none_of(to.begin(), to.end(),
                [&](const Slots &other) { return same(slots, other); }))
            to.push_back(std::move(slots));
    };
    constexpr unsigned noun = (1u << 0) | (1u << 1);
    constexpr unsigned adjective = 1u << 2;
    constexpr unsigned hyphen = noun | adjective | (1u << 3);
    constexpr unsigned complement = noun | (1u << 8);
    const auto forms = [&](std::string_view value, unsigned allowed, bool head = false) {
        std::vector<const NativeHistoryWord *> result;
        const auto found = forms_.find(std::string(value));
        if (found != forms_.end()) for (const auto &word : found->second)
            if ((allowed & (1u << unsigned(word.part_of_speech))) &&
                    (!head || suffixes_.contains(word.id))) result.push_back(&word);
        return result;
    };
    const auto nucleus = [&](std::string_view value, bool hyphenated) {
        Parses result;
        if (!hyphenated) {
            for (const auto *word : forms(value, noun, true)) {
                Slots slots{};
                slots[5] = *word;
                add(result, std::move(slots));
            }
            return result;
        }
        // A raw form can contain a hyphen. Preserve every complete licensed
        // parse; never assume the last visible hyphen must be the H-N join.
        for (size_t cut = value.find('-'); cut != std::string_view::npos;
                cut = value.find('-', cut + 1)) {
            const auto left = forms(value.substr(0, cut), hyphen);
            const auto right = forms(value.substr(cut + 1), noun, true);
            for (const auto *a : left) for (const auto *b : right) {
                Slots slots{};
                slots[4] = *a;
                slots[5] = *b;
                add(result, std::move(slots));
                if (result.size() == 2) return result;
            }
        }
        return result;
    };
    const auto base = [&](std::string_view value, const Structure &construction) {
        // Select exactly the A1/A2 slots of this production before parsing
        // its N or H-N. Raw WORD forms may themselves contain spaces.
        std::function<Parses(std::string_view, size_t)> adjectives;
        adjectives = [&](std::string_view remaining, size_t slot) -> Parses {
            if (slot == 2 + construction.adjective_count)
                return nucleus(remaining, construction.hyphenated);
            Parses result;
            for (size_t cut = remaining.find(' '); cut != std::string_view::npos;
                    cut = remaining.find(' ', cut + 1)) {
                const auto choices = forms(remaining.substr(0, cut), adjective);
                if (choices.empty()) continue;
                const auto tails = adjectives(remaining.substr(cut + 1), slot + 1);
                for (const auto *word : choices) for (const auto &tail : tails) {
                    Slots slots = tail;
                    slots[slot] = *word;
                    add(result, std::move(slots));
                    if (result.size() == 2) return result;
                }
            }
            return result;
        };
        return adjectives(value, 2);
    };
    const auto body = std::string_view(text).substr(4);
    Parses candidates;
    for (const auto &construction : constructions_) {
        if (candidates.size() == 2) break;
        if (!construction.has_complement) {
            for (auto slots : base(body, construction)) add(candidates, std::move(slots));
            continue;
        }
        for (size_t cut = body.find(" of "); candidates.size() < 2 && cut != std::string_view::npos;
                cut = body.find(" of ", cut + 1)) {
            const auto owners = forms(body.substr(cut + 4), complement);
            if (owners.empty()) continue;
            const auto heads = base(body.substr(0, cut), construction);
            for (const auto &head : heads) for (const auto *owner : owners) {
                Slots slots = head;
                slots[6] = *owner;
                add(candidates, std::move(slots));
            }
        }
    }
    std::optional<NativeHistoryName> result;
    if (candidates.size() == 1) {
        NativeHistoryName name;
        name.has_name = true;
        name.type = 19;
        name.words = std::move(candidates.front());
        if (structure(name)) result = std::move(name);
    }
    if (surface_cache_.size() >= 4096) surface_cache_.clear();
    surface_cache_.emplace(text, result);
    return result;
}

std::optional<std::string> VolcanoNames::compose(const NativeHistoryName &name,
        const EnglishCharacterNames &lexicon, const WordRenderer &meaning) const {
    const auto present = [&](size_t slot) { return !name.words[slot].id.empty(); };
    const auto construction = structure(name);
    if (!construction) return std::nullopt;
    constexpr std::array<unsigned, 7> allowed{0, 0, 0x004, 0x004, 0x00f, 0x003, 0x103};
    std::array<std::string, 7> meanings;
    for (size_t slot = 2; slot < name.words.size(); ++slot) if (present(slot)) {
        const auto &word = name.words[slot];
        const int pos = word.part_of_speech;
        if (!word.has_form || word.english_form.empty() || pos < 0 || pos > 8 ||
                !(allowed[slot] & (1u << unsigned(pos)))) return std::nullopt;
        meanings[slot] = meaning(word);
        if (pos == 2) {
            const auto senses = lexicon.resolve_native_senses(
                word.id, word.part_of_speech, word.english_form, meanings[slot]);
            const auto surface = lexicon.translate_adjective(senses, meanings[slot]);
            if (!surface.text.empty()) meanings[slot] = surface.text;
        }
        // Unknown mod words retain their own English form and their slot.
        // A missing gloss cannot silently erase an adjective, H or Q.
        if (meanings[slot].empty()) meanings[slot] = word.english_form;
    }
    const auto suffix = suffixes_.find(name.words[5].id);
    const std::string head = suffix == suffixes_.end()
        ? meanings[5] + "火山" : suffix->second;
    // H belongs inside the nominal compound, even when H's POS is ADJ.
    // Independent A1/A2 retain their order and modify that complete nominal.
    const std::string nominal = construction->hyphenated ? meanings[4] + head : head;
    std::string modifiers;
    for (size_t slot = 2; slot < 2 + construction->adjective_count; ++slot)
        modifiers += meanings[slot];
    const std::string phrase = modifiers + nominal;
    // All six of-constructions retain the genitive marker, for both noun
    // and gerund Q. No short-name exception removes this relationship.
    return construction->has_complement ? meanings[6] + "之" + phrase : phrase;
}

std::optional<std::string> Overlay::localize_volcano_name(const NativeHistoryName &name) const {
    return volcano_names_.compose(name, english_character_names_,
        [&](const NativeHistoryWord &word) -> std::string {
            const int pos = word.part_of_speech;
            const char *part = pos == 0 || pos == 1 ? "NOUN" : pos == 2 ? "ADJ" :
                pos == 3 ? "PREFIX" : pos >= 4 && pos <= 8 ? "VERB" : nullptr;
            if (!part) return {};
            const auto found = procedural_word_senses_.find(word.id + '\t' + part);
            return found == procedural_word_senses_.end() ? "" : found->second;
        });
}

std::string Overlay::translate_volcano_text(std::string_view source,
        const NativeHistoryName *identity) const {
    source = trim_view(source);
    if (identity) {
        const auto complete = reconstruct_site_english_name(*identity);
        // Authored portions are data, including names resembling known WORDs.
        if (!identity->first_name.empty() || !identity->nickname.empty())
            return native_text_to_utf8(complete ? std::string_view(*complete) : source);
        // The native draw supplies its actual peak, not a text-based lookup.
        // Its slots remain authoritative when the display string is clipped.
        if (const auto localized = localize_volcano_name(*identity)) return *localized;
        // A known identity cannot be replaced by another surface analysis.
        return native_text_to_utf8(complete ? std::string_view(*complete) : source);
    }
    if (source.empty()) return {};
    if (const auto parsed = volcano_names_.resolve_surface(source))
        if (const auto localized = localize_volcano_name(*parsed)) return *localized;
    return native_text_to_utf8(source);
}
