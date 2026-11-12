// Native adapters locate the search/sort boundary and provide field offsets.
// Keyword lookup and ranking share the catalog used by the visible UI.
using NativeConversationCompareFn = int (*)(const void *, const void *);
using NativeConversationSortFn = void (*)(void *, size_t, size_t, NativeConversationCompareFn);
using NativeConversationIteratorFn = void *(*)(void *, void *, const void *);
using NativeConversationDrawFn = void (*)(void *, int32_t, int32_t, int32_t);
struct NativeConversationSearchLayout {
    size_t query = 0, keywords = 0, score = 0, captions = 0, entries = 0;
};
struct NativeConversationSearchProfile {
    uintptr_t base = 0;
    NativeConversationSortFn sort = nullptr;
    NativeConversationIteratorFn iterator = nullptr;
    std::vector<NativeCall> calls;
    NativeConversationSearchLayout layout;
    NativeConversationDrawFn draw = nullptr;
    NativeSearchFoldFn choice_query_fold = nullptr;
};
static void capture_native_conversation_sort(void *, size_t, void *, NativeConversationCompareFn);
static void *capture_native_conversation_draw_begin(void *, void *, const void *);
static void capture_native_conversation_draw(void *, int32_t, int32_t, int32_t);
static void capture_native_choice_search_query(NativeString *);
static size_t capture_native_identity_search_find(const char *, size_t,
    const NativeString *, const char *, size_t);
static size_t capture_native_adventure_action_search_find(const char *, size_t,
    const NativeString *, const char *, size_t);
#include "native_conversation_search_profile.inc"

static NativeCallHook g_native_conversation_search_hook;
static NativeConversationSortFn g_real_native_conversation_sort = nullptr;
static NativeConversationIteratorFn g_real_native_conversation_iterator = nullptr;
static NativeConversationDrawFn g_real_native_conversation_draw = nullptr;
static NativeSearchFoldFn g_native_choice_query_fold = nullptr;
static NativeConversationSearchLayout g_native_conversation_search_layout;
static const void *g_native_conversation_draw_context = nullptr;
static const void *g_native_conversation_draw_entries = nullptr;
static size_t g_native_conversation_draw_count = SIZE_MAX;

static void capture_native_choice_search_query(NativeString *query) {
    fold_native_search_query(query, g_native_choice_query_fold);
}

template<bool AdventureAction>
static size_t match_native_choice_caption(const char *text, size_t length,
        const NativeString *caption, const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    // The relay borrows the complete display caption in the native zero-start
    // argument. Keep English/empty-query behavior and the caller's npos contract.
    const size_t result = native_search_byte_find(text, length, 0, query_text, query_length);
    if (result != SIZE_MAX) return result;
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        std::string_view source;
        if (native_string_view(caption, &source, 65536) && !source.empty()) {
            if constexpr (AdventureAction) {
                const auto choice = capture_native_performance_choice(
                    reinterpret_cast<uintptr_t>(caption));
                if (g_overlay.translated_adventure_action_matches(
                        source, query, choice ? &*choice : nullptr)) return 0;
            } else {
                if (g_overlay.translated_search_matches(source, query)) return 0;
            }
        }
    } catch (...) {
        // Translation failures must not unwind through the native filter.
    }
    // Native code traverses all choices, removes misses from its result vector,
    // and resets scrolling. No translated labels or IDs enter game records.
    return result;
}

static size_t capture_native_identity_search_find(const char *text, size_t length,
        const NativeString *caption, const char *query_text, size_t query_length) {
    return match_native_choice_caption<false>(text, length, caption, query_text, query_length);
}

static size_t capture_native_adventure_action_search_find(const char *text, size_t length,
        const NativeString *caption, const char *query_text, size_t query_length) {
    return match_native_choice_caption<true>(text, length, caption, query_text, query_length);
}

// The native chooser wraps a complete caption into entry+captions before
// sorting. Its renderer subsequently clips those rows and suppresses keywords
// that do not fit. Copy the original vectors at this shared boundary so the
// overlay can translate every word without reconstructing missing screen text.
static bool join_native_conversation_strings(const unsigned char *entry,
        size_t offset, size_t maximum_parts, char separator, std::string &joined) {
    const auto parts = NativeBorrowedVector<const NativeString *>::read(entry + offset);
    if (!parts.valid(maximum_parts)) return false;
    for (size_t i = 0; i < parts.size(); ++i) {
        std::string_view part;
        if (!native_string_view(parts.begin[i], &part, 4096)) return false;
        while (!part.empty() && (part.front() == ' ' || part.front() == '\t' ||
                part.front() == '\r' || part.front() == '\n')) part.remove_prefix(1);
        while (!part.empty() && (part.back() == ' ' || part.back() == '\t' ||
                part.back() == '\r' || part.back() == '\n')) part.remove_suffix(1);
        if (part.empty() && separator != '\n') continue;
        if (joined.size() + part.size() + 1 > 65536) return false;
        if (separator == '\n' ? i != 0 : !joined.empty()) joined.push_back(separator);
        joined.append(part);
    }
    return true;
}

static std::optional<std::string> capture_native_conversation_artifact_name(
        const unsigned char *entry) {
    // SPREAD_RUMOR: both PE dispatchers use choice+8 as entity_event*.
    // Its type getter (reference bbb20) reads +24; rumor 25..33 all
    // carry their artifact ID at +0. Missing destination objects can leave
    // only keywords, so preserve the original name before unique-word loss.
    uintptr_t choice = 0, rumor = 0;
    int32_t type = -1, rumor_type = -1, artifact_id = -1;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(entry), choice) ||
            !choice || choice > UINTPTR_MAX - 0x10 ||
            !native_history_copy(choice, type) || type != 13 ||
            !native_history_copy(choice + 8, rumor) ||
            !rumor || rumor > UINTPTR_MAX - 0x28 ||
            !native_history_copy(rumor + 0x24, rumor_type) ||
            rumor_type < 25 || rumor_type > 33 ||
            !native_history_copy(rumor, artifact_id) || artifact_id < 0) return std::nullopt;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t artifact = native_history_find_subject(
        base, NativeHistoryObjectKind::Artifact, artifact_id);
    NativeHistoryName snapshot;
    if (!artifact || artifact > UINTPTR_MAX - 8 ||
            !capture_native_history_name(base, artifact + 8, snapshot) ||
            !snapshot.has_name) return std::nullopt;
    std::string original;
    if (!capture_native_history_original_name(base, artifact + 8, original)) return std::nullopt;
    const auto formatter = native_history_page_address(NativeHistoryPageSymbol::Name);
    if (!formatter) return std::nullopt;
    NativeInputCallbackScope callback;
    NativeHistoryPageString english;
    callback.call_native([&] {
        reinterpret_cast<void (*)(const void *, NativeString *, bool, bool)>(formatter)(
            reinterpret_cast<const void *>(artifact + 8), &english.value, false, false);
    });
    std::string_view translated_name;
    if (!native_string_view(&english.value, &translated_name, 65536) ||
            translated_name.empty()) return std::nullopt;
    // Match the tokenizer's original-language then English order exactly.
    if (original.empty() || original == translated_name) return std::string(translated_name);
    return original + ", \"" + std::string(translated_name) + "\"";
}

static bool capture_native_existing_conversation_collection(
        const unsigned char *entry, std::string_view caption) {
    // Both configured PE constructors store talk_choice* at outer entry+0.
    // Its type is a DWORD at +0; emotion +18 and circumstance/data/subdata
    // +20/+24/+28 feed the five emotion constructors' shared event formatter.
    // Copy the actual bound object through guarded reads before using its ID.
    uintptr_t choice = 0;
    int32_t type = -1;
    std::array<int32_t, 3> circumstance{};
    if (!native_history_copy(reinterpret_cast<uintptr_t>(entry), choice) ||
            !choice || choice > UINTPTR_MAX - 0x2c ||
            !native_history_copy(choice, type) || type < 66 || type > 70 ||
            !native_history_copy(choice + 0x20, circumstance) ||
            circumstance[0] != 233 || circumstance[1] < 0) return false;
    const std::string source = normalize_utterance(caption);
    const size_t event = source.find(" during ");
    if (event == std::string::npos) return false;
    return remember_native_conversation_collection_source(
        source.substr(event + 1), circumstance[1]);
}

static bool capture_native_conversation_choices(void *raw_entries, size_t count) {
    const auto invalid = [] {
        g_overlay.clear_conversation_choices();
        return false;
    };
    if (count == 0) {
        g_overlay.clear_conversation_choices();
        return true;
    }
    if (!raw_entries || count > 4096) return invalid();
    const auto &layout = g_native_conversation_search_layout;
    const auto *entries = static_cast<unsigned char *const *>(raw_entries);
    std::vector<std::pair<std::string, std::string>> choices;
    std::vector<std::pair<std::string, std::string>> artifact_names;
    choices.reserve(count);
    size_t total_bytes = 0;
    bool collection_changed = false;
    for (size_t i = 0; i < count; ++i) {
        const auto *entry = entries[i];
        if (!entry) return invalid();
        std::string caption, keywords;
        if (!join_native_conversation_strings(entry, layout.captions, 1024, '\n', caption) ||
            !join_native_conversation_strings(entry, layout.keywords, 256, ' ', keywords)) return invalid();
        total_bytes += caption.size() + keywords.size();
        if (total_bytes > (1u << 22)) return invalid();
        collection_changed |= capture_native_existing_conversation_collection(entry, caption);
        if (const auto artifact = capture_native_conversation_artifact_name(entry))
            artifact_names.emplace_back(keywords, *artifact);
        choices.emplace_back(std::move(caption), std::move(keywords));
    }
    // Equal displayed text can acquire a different typed collection binding.
    // Clear the existing semantic cache before recapturing that same content.
    if (collection_changed) g_overlay.clear_conversation_choices();
    g_overlay.capture_conversation_choices(choices, artifact_names);
    return true;
}

static void observe_native_conversation_draw(const void *context) {
    NativeInputCallbackScope callback;
    try {
        if (context) {
            const auto entries = NativeBorrowedVector<unsigned char *>::read(
                static_cast<const unsigned char *>(context) +
                g_native_conversation_search_layout.entries);
            // An open chooser need not be rebuilt or sorted after hot reload.
            // Recover that existing list at its first actual draw. Sorting
            // still refreshes changed content even if allocation is reused.
            if (!entries.valid(4096)) {
                g_native_conversation_draw_context = nullptr;
                g_overlay.clear_conversation_choices();
            } else if (context != g_native_conversation_draw_context ||
                 entries.begin != g_native_conversation_draw_entries ||
                 entries.size() != g_native_conversation_draw_count) {
                g_native_conversation_draw_context = nullptr;
                if (capture_native_conversation_choices(entries.begin, entries.size())) {
                    g_native_conversation_draw_context = context;
                    g_native_conversation_draw_entries = entries.begin;
                    g_native_conversation_draw_count = entries.size();
                }
            }
        }
    } catch (...) {
        g_native_conversation_draw_context = nullptr;
        g_overlay.clear_conversation_choices();
    }
}

static void capture_native_conversation_draw(void *context,
        int32_t x, int32_t y, int32_t width) {
    NativeInputCallbackScope callback;
    observe_native_conversation_draw(context);
    if (g_real_native_conversation_draw)
        callback.call_native([&] { g_real_native_conversation_draw(context, x, y, width); });
}

static void *capture_native_conversation_draw_begin(void *iterator, void *begin,
                                                    const void *context) {
    NativeInputCallbackScope callback;
    observe_native_conversation_draw(context);
    // The verified native iterator constructor ignores its third argument.
    // Preserve its destination, source pointer and exact return value.
    return g_real_native_conversation_iterator
        ? callback.call_native([&] {
            return g_real_native_conversation_iterator(iterator, begin, nullptr);
        }) : iterator;
}

static void rank_translated_conversation_choices(void *raw_entries, size_t count,
                                                const void *context) {
    if (!context || !raw_entries || count == 0 || count > 4096 ||
        !g_overlay.translation_enabled()) return;
    const auto &layout = g_native_conversation_search_layout;
    const auto *query_string = reinterpret_cast<const NativeString *>(
        static_cast<const unsigned char *>(context) + layout.query);
    std::string_view query;
    if (!native_string_view(query_string, &query, 4096) || query.empty()) return;

    const auto *entries = static_cast<unsigned char *const *>(raw_entries);
    std::vector<unsigned char *> matches;
    matches.reserve(count);
    int32_t maximum = INT32_MIN;
    for (size_t i = 0; i < count; ++i) {
        auto *entry = entries[i];
        if (!entry) continue;
        int32_t score = 0;
        std::memcpy(&score, entry + layout.score, sizeof(score));
        maximum = std::max(maximum, score);
        const auto words = NativeBorrowedVector<const NativeString *>::read(entry + layout.keywords);
        if (!words.valid(256) || words.size() == 0) continue;
        std::string keywords;
        bool complete = true;
        for (size_t word = 0; word < words.size(); ++word) {
            std::string_view text;
            if (!native_string_view(words.begin[word], &text, 4096) || text.empty() ||
                keywords.size() + text.size() + 1 > 16384) {
                complete = false;
                break;
            }
            if (!keywords.empty()) keywords.push_back(' ');
            keywords.append(text);
        }
        if (complete && g_overlay.translated_conversation_keywords_match(keywords, query))
            matches.push_back(entry);
    }
    // Finish every lookup/allocation before mutating native scores. The
    // original comparator retains native order for equally matching choices.
    if (matches.empty()) return;
    const int32_t promoted = maximum < INT32_MAX ? maximum + 1 : maximum;
    for (auto *entry : matches)
        std::memcpy(entry + layout.score, &promoted, sizeof(promoted));
}

static void capture_native_conversation_sort(void *entries, size_t count,
        void *context, NativeConversationCompareFn compare) {
    NativeInputCallbackScope callback;
    // Name evidence must already describe this menu when Chinese ranking
    // starts. Publishing identical records or a different order preserves
    // their cached translations; never clear a valid snapshot preemptively.
    try { capture_native_conversation_choices(entries, count); } catch (...) {
        g_overlay.clear_conversation_choices();
    }
    try { rank_translated_conversation_choices(entries, count, context); } catch (...) {}
    // Keep the game's allocator, comparator, selection identities and sort.
    if (g_real_native_conversation_sort)
        callback.call_native([&] {
            g_real_native_conversation_sort(entries, count, sizeof(void *), compare);
        });
    // Final native order is also the order used by letter hotkeys and scrolling.
    g_native_conversation_draw_context = nullptr;
    try {
        if (capture_native_conversation_choices(entries, count)) {
            // The next draw sees this exact list; it does not need another
            // full copy or a second cache invalidation after every keystroke.
            g_native_conversation_draw_context = context;
            g_native_conversation_draw_entries = entries;
            g_native_conversation_draw_count = count;
        }
    } catch (...) {
        g_overlay.clear_conversation_choices();
    }
}

static bool native_conversation_search_hook_active() {
    return g_native_conversation_search_hook.active();
}

static void uninstall_native_conversation_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_conversation_search_hook.uninstall("Native conversation keyword search")) {
        g_overlay.clear_conversation_choices();
        g_real_native_conversation_sort = nullptr;
        g_real_native_conversation_iterator = nullptr;
        g_real_native_conversation_draw = nullptr;
        g_native_choice_query_fold = nullptr;
        g_native_conversation_draw_context = nullptr;
        g_native_conversation_draw_entries = nullptr;
        g_native_conversation_draw_count = SIZE_MAX;
        g_native_conversation_search_layout = {};
    }
}

static bool install_native_conversation_search_hook() {
    if (g_native_conversation_search_hook.installed) return true;
    if (native_conversation_search_hook_active()) {
        uninstall_native_conversation_search_hook();
        if (native_conversation_search_hook_active()) return false;
    }
    NativeConversationSearchProfile profile;
    if (!resolve_native_conversation_search_profile(profile)) return false;
    if (profile.calls.empty() || !profile.sort || (!profile.iterator && !profile.draw)) return false;
    g_real_native_conversation_sort = profile.sort;
    g_real_native_conversation_iterator = profile.iterator;
    g_real_native_conversation_draw = profile.draw;
    g_native_choice_query_fold = profile.choice_query_fold;
    g_native_conversation_search_layout = profile.layout;
    if (!g_native_conversation_search_hook.install(profile.base, profile.calls,
                                                  "Native conversation keyword search")) {
        uninstall_native_conversation_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated conversation keyword ranking");
    if (g_native_choice_query_fold) {
        log_line("INFO", "Enabled translated identity chooser search, including professions");
        log_line("INFO", "Enabled translated adventure action chooser search over complete captions");
    }
    return true;
}
