// The task-detail selectors search complete creature, color and plant captions.
// Their temporary captions also serve as native sort keys, so matching changes
// only the find result and retains every native availability/order decision.
enum class NativeJobDetailsSearchKind { Creature, Color, Plant };
struct NativeJobDetailsSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static NativeCallHook g_native_job_details_search_hook;
static NativeSearchFoldFn g_native_job_details_search_fold = nullptr;
struct NativeJobDetailsSearchCaption {
    const NativeString *term = nullptr;
    std::array<char, 65536> source{};
    size_t length = 0;
};
// Trivial TLS leaves no owning destructor registered against a reloadable core.
static thread_local NativeJobDetailsSearchCaption g_native_job_details_search_caption;

static void capture_native_job_details_search_query(NativeString *query) {
    g_native_job_details_search_caption.term = nullptr;
    g_native_job_details_search_caption.length = 0;
    fold_native_search_query(query, g_native_job_details_search_fold);
}

static void capture_native_job_details_search_term(NativeString *term,
        const NativeString *query_string) {
    NativeInputCallbackScope callback;
    auto &caption = g_native_job_details_search_caption;
    caption.term = nullptr;
    caption.length = 0;
    try {
        std::string_view query, source;
        if (g_overlay.translation_enabled() &&
            native_string_view(query_string, &query, 4096) && !query.empty() &&
            native_string_view(term, &source, caption.source.size()) &&
            source.find('\0') == std::string_view::npos) {
            std::memcpy(caption.source.data(), source.data(), source.size());
            caption.term = term;
            caption.length = source.size();
        }
    } catch (...) {}
    if (g_native_job_details_search_fold)
        callback.call_native([&] { g_native_job_details_search_fold(term); });
}

template<NativeJobDetailsSearchKind Kind>
static size_t capture_native_job_details_search_find(const char *text,
        size_t length, const NativeString *term,
        const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    auto &caption = g_native_job_details_search_caption;
    const bool complete = caption.term == term;
    caption.term = nullptr;
    const size_t result = native_search_byte_find(text, length, 0,
                                                 query_text, query_length);
    if (result != SIZE_MAX) return result;
    try {
        if (!complete || !g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string source(caption.source.data(), caption.length);
        const std::string_view query(query_text, query_length);
        bool match = false;
        if constexpr (Kind == NativeJobDetailsSearchKind::Creature)
            match = g_overlay.translated_search_matches(source, query);
        else if constexpr (Kind == NativeJobDetailsSearchKind::Color)
            match = g_overlay.translated_color_search_matches(source, query);
        else
            match = g_overlay.translated_plant_search_matches(source, query);
        if (match) return 0;
    } catch (...) {}
    return result;
}

template<NativeJobDetailsSearchKind Kind>
static size_t capture_native_job_details_search_native_find(
        const NativeString *term, const NativeString *query) {
    std::string_view text, needle;
    if (!native_string_view(term, &text, 65536) ||
        !native_string_view(query, &needle, 4096)) return SIZE_MAX;
    return capture_native_job_details_search_find<Kind>(
        text.data(), text.size(), term, needle.data(), needle.size());
}

#ifdef _WIN32
// 53.17's clothing selector calls NativeString::find(term, query, start).
// The verified caller supplies start == 0 and no longer passes C-string views.
static size_t capture_native_job_details_search_clothing_find_5317(
        const NativeString *term, const NativeString *query, size_t start) {
    if (start == 0)
        return capture_native_job_details_search_native_find<NativeJobDetailsSearchKind::Creature>(
            term, query);
    g_native_job_details_search_caption.term = nullptr;
    std::string_view text, needle;
    if (!native_string_view(term, &text, 65536) ||
        !native_string_view(query, &needle, 4096)) return SIZE_MAX;
    return native_search_byte_find(text.data(), text.size(), start, needle.data(), needle.size());
}
#include "native_job_details_search_profile_pe.inc"
#else
#include "native_job_details_search_profile_elf.inc"
#endif

static bool native_job_details_search_hook_active() {
    return g_native_job_details_search_hook.active();
}

static void uninstall_native_job_details_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_job_details_search_hook.uninstall("Native task-detail caption search")) {
        g_native_job_details_search_fold = nullptr;
        g_native_job_details_search_caption.term = nullptr;
        g_native_job_details_search_caption.length = 0;
    }
}

static bool install_native_job_details_search_hook() {
    if (g_native_job_details_search_hook.installed) return true;
    if (native_job_details_search_hook_active()) {
        uninstall_native_job_details_search_hook();
        if (native_job_details_search_hook_active()) return false;
    }
    NativeJobDetailsSearchProfile profile;
#ifdef _WIN32
    if (!resolve_native_job_details_search_profile_pe(profile) || !profile.fold) return false;
#else
    if (!resolve_native_job_details_search_profile_elf(profile) || !profile.fold) return false;
#endif
    g_native_job_details_search_fold = profile.fold;
    if (!g_native_job_details_search_hook.install(profile.base, profile.calls,
                                                 "Native task-detail caption search")) {
        uninstall_native_job_details_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated and pinyin task-detail clothing-size, dye, mixed-dye and plant search; native sorting preserved");
    return true;
}
