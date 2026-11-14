// Name-creator searches use the same input callback and frame lifecycle on
// every host. Source tables are the game's complete, already ordered legal
// choices for the active component, not the currently visible/filtered rows.
#include "native_name_search_adapter.inc"

struct NameEditorSearchState {
    uintptr_t creator = 0;
    NativeNameSearchSnapshot source;
    std::vector<int32_t> words, parts;
    std::unordered_set<uint64_t> native_matches;
    uint64_t revision = 0;
    bool cached = false, error_reported = false;
};
static NameEditorSearchState g_name_editor_search;

static void clear_name_editor_search() {
    TranslationStateScope translation_scope;
    g_name_editor_search = {};
}

static void report_name_editor_search_error(const char *reason) {
    if (g_name_editor_search.error_reported) return;
    g_name_editor_search.error_reported = true;
    log_line("ERROR", std::string("Name editor translated search: ") + reason);
}

static void capture_name_editor_search_input(NativeString *target, int maximum,
        unsigned int flags) {
    TranslationStateScope translation_scope;
    // First-name editing is a different native string (max 39, flags 0x17).
    // Require both the complete naming widget and its actual search input.
    if (!g_overlay.translation_enabled() || !g_overlay.name_editor_visible() ||
        maximum != 10 || flags != 0x0b) return;
    const uintptr_t creator = native_name_search_owner(target);
    NativeNameSearchSnapshot source;
    if (!creator || !native_name_search_read(creator, source)) {
        report_name_editor_search_error("cannot bind the active query and complete word table");
        return;
    }
    if (g_name_editor_search.creator != creator) clear_name_editor_search();
    g_name_editor_search.creator = creator;
}

static void apply_pending_name_editor_search() {
    TranslationStateScope translation_scope;
    auto &state = g_name_editor_search;
    if (!state.creator) return;
    if (!g_overlay.translation_enabled() || !g_overlay.name_editor_visible()) {
        clear_name_editor_search();
        return;
    }
    try {
        NativeNameSearchSnapshot source;
        if (!native_name_search_read(state.creator, source)) {
            report_name_editor_search_error("active query or candidate storage is unavailable");
            return;
        }
        // Clearing the query restores all entries through the native filter.
        // Every nonempty query also searches the translated word spellings.
        if (source.query.empty()) {
            state.cached = false;
            state.native_matches.clear();
            return;
        }
        const uint64_t revision = g_overlay.name_editor_search_revision();
        const bool native_changed = !state.cached ||
            source.query != state.source.query || source.slot != state.source.slot ||
            source.name != state.source.name || source.language != state.source.language ||
            source.raws.begin != state.source.raws.begin ||
            source.native_words.begin != state.source.native_words.begin ||
            source.words != state.source.words || source.parts != state.source.parts;
        const bool changed = native_changed || state.revision != revision;
        if (changed) {
            const auto candidate_key = [](int32_t word, int32_t part) {
                return (uint64_t(uint32_t(word)) << 32) | uint32_t(part);
            };
            if (native_changed) {
                // Native edits/slot changes rebuild this output from the full
                // legal word table. Keep that exact English/POS result set;
                // later translation revisions must not snapshot our own list.
                state.native_matches.clear();
                for (size_t i = 0; i < source.output_words.size(); ++i)
                    state.native_matches.insert(candidate_key(
                        source.output_words.begin[i], source.output_parts.begin[i]));
            }
            std::vector<int32_t> words, parts;
            words.reserve(source.words.size());
            parts.reserve(source.parts.size());
            for (size_t i = 0; i < source.words.size(); ++i) {
                std::string id, english, native_word;
                if (!native_name_search_word(source, i, id, english, native_word)) {
                    report_name_editor_search_error("cannot read a complete WORD/POS candidate");
                    return;
                }
                SearchNativeHitScope native_hit(state.native_matches.contains(candidate_key(source.words[i],source.parts[i])));
                if (!g_overlay.translated_name_editor_search_matches(id, english,
                        native_word, source.parts[i], source.query)) continue;
                words.push_back(source.words[i]);
                parts.push_back(source.parts[i]);
            }
            state.words = std::move(words);
            state.parts = std::move(parts);
            state.revision = revision;
            state.cached = true;
        }
        const bool same_result = source.output_words.size() == state.words.size() &&
            source.output_parts.size() == state.parts.size() &&
            (state.words.empty() || (std::memcmp(source.output_words.begin, state.words.data(),
                state.words.size() * sizeof(int32_t)) == 0 &&
             std::memcmp(source.output_parts.begin, state.parts.data(),
                state.parts.size() * sizeof(int32_t)) == 0));
        // Do not reset scrolling on unchanged frames. Native edits and slot
        // changes reset it themselves; a changed translation result starts
        // at the top without changing any selected name component.
        if (!same_result && !native_name_search_publish(source, state.words, state.parts, 0)) {
            report_name_editor_search_error("native result capacity or publication fields are invalid");
            return;
        }
        if (changed) log_line("INFO", "Name editor translated search matched " +
            std::to_string(state.words.size()) + " of " + std::to_string(source.words.size()) + " candidates");
        state.source = std::move(source);
        state.error_reported = false;
    } catch (...) {
        report_name_editor_search_error("candidate translation failed; no partial list was published");
    }
}
