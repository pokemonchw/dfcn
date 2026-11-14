// Compatibility vocabulary helpers. Identity, query plans and relationships
// live in search_association.inc; translation namespaces are never item enums.
struct SearchItemTaxonomy {
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
};

// Only model token coverage uses this tokenizer. It cannot assert an alias,
// native identity or constraint, and never splits an unknown Han run into
// single-character evidence.
static std::vector<std::string> search_semantic_query_words(std::string_view text) {
    struct Vocabulary {
        uint64_t revision = UINT64_MAX;
        std::unordered_set<std::string> words;
    };
    auto &vocabulary = reloadable_thread_state<Vocabulary, struct SearchCoverageWordsTag>();
    const auto revision = RULESETS.resource_revision();
    if (vocabulary.revision != revision) {
        vocabulary.words.clear();
        for (const auto &noun : RULESETS.search_item_nouns()) {
            vocabulary.words.insert(lower(noun.source));
            vocabulary.words.insert(noun.target);
        }
        for (const auto &word : RULESETS.search_lexical_sources()) {
            vocabulary.words.insert(lower(word.source));
            vocabulary.words.insert(word.target);
        }
        vocabulary.revision = revision;
    }
    const auto source = lower(std::string(text));
    const auto longest = [&](size_t at) {
        size_t found = 0;
        for (size_t end = at; end < source.size() && end - at < 96;) {
            const auto cp = decode_utf8_at(source, end);
            if (!cp || !search_semantic_word_character(cp->first)) break;
            end += cp->second;
            if (vocabulary.words.contains(source.substr(at, end - at))) found = end - at;
        }
        return found;
    };
    std::vector<std::string> result;
    for (size_t at = 0; at < source.size();) {
        const auto cp = decode_utf8_at(source, at);
        if (!cp) break;
        if (!search_semantic_word_character(cp->first)) { at += cp->second; continue; }
        size_t length = longest(at);
        if (!length) {
            length = cp->second;
            while (at + length < source.size()) {
                const auto next = decode_utf8_at(source, at + length);
                if (!next || !search_semantic_word_character(next->first) || longest(at + length)) break;
                length += next->second;
            }
        }
        result.push_back(source.substr(at, length));
        at += length;
    }
    return result;
}