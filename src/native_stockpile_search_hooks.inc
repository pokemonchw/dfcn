// The stockpile filter owns traversal, visibility, result counts and selection.
// Only its substring comparison changes; captions and sort keys stay intact.
struct NativeStockpileSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static void capture_native_stockpile_search_query_fold(NativeString *);
static size_t capture_native_stockpile_search_find(const char *, size_t,
    const NativeString *, const char *, size_t, int32_t);
#include "native_stockpile_search_profile.inc"

static NativeCallHook g_native_stockpile_search_hook;
static NativeSearchFoldFn g_native_stockpile_search_fold = nullptr;

static void capture_native_stockpile_search_query_fold(NativeString *text) {
    fold_native_search_query(text, g_native_stockpile_search_fold);
}

static size_t capture_native_stockpile_search_find(const char *text, size_t length,
        const NativeString *caption, const char *query_text, size_t query_length,
        int32_t native_mode) {
    NativeInputCallbackScope callback;
    const size_t result = native_search_byte_find(text, length, 0, query_text, query_length);
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        std::string_view source;
        if (!native_string_view(caption, &source, 65536) || source.empty() ||
            source.find('\0') != std::string_view::npos) return result;
        const auto kind = native_stockpile_caption_kind(native_mode);
        const auto descriptor=search_native_stockpile_column(native_mode,reinterpret_cast<uintptr_t>(caption));
        if(descriptor.kind==SearchCandidateKind::MaterialChoice)refresh_native_search_world(false,true,true);
        else if(descriptor.kind!=SearchCandidateKind::PropertyChoice)refresh_native_search_world();
        SearchDescriptorScope descriptor_scope(descriptor);
        return g_overlay.translated_stockpile_search_matches(source, query, kind) ? 0 : SIZE_MAX;
    } catch (...) {
        // Never unwind translation/allocation failures through native frames.
    }
    return result;
}

static bool native_stockpile_search_hook_active() {
    return g_native_stockpile_search_hook.active();
}

static void uninstall_native_stockpile_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_stockpile_search_hook.uninstall("Native stockpile translated search")) {
        g_native_stockpile_search_fold = nullptr;
    }
}

static bool install_native_stockpile_search_hook() {
    if (g_native_stockpile_search_hook.installed) return true;
    if (native_stockpile_search_hook_active()) {
        uninstall_native_stockpile_search_hook();
        if (native_stockpile_search_hook_active()) return false;
    }
    NativeStockpileSearchProfile profile;
    if (!resolve_native_stockpile_search_profile(profile) || !profile.fold) return false;
    g_native_stockpile_search_fold = profile.fold;
    if (!g_native_stockpile_search_hook.install(profile.base, profile.calls,
            "Native stockpile translated search")) {
        uninstall_native_stockpile_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search over complete stockpile setting captions; native sorting and toggles preserved");
    return true;
}
