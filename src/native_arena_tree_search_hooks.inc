// The tree picker owns the complete plant catalog, result pointers, selection
// and scrolling. Translate only its existing name comparison; the query copy
// must also bypass the native single-byte case converter for UTF-8 input.
struct NativeArenaTreeSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static void capture_native_arena_tree_search_query(NativeString *);
static size_t capture_native_arena_tree_search_find(const char *, size_t,
    const NativeString *, const char *, size_t);
#ifdef _WIN32
#include "native_arena_tree_search_profile.inc"
#else
static void capture_native_arena_tree_search_term(NativeString *, const NativeString *);
#include "native_arena_tree_search_profile_elf.inc"
#endif

static NativeCallHook g_native_arena_tree_search_hook;
static NativeSearchFoldFn g_native_arena_tree_search_fold = nullptr;

#ifndef _WIN32
static void capture_native_arena_tree_search_term(NativeString *term,
        const NativeString *query) {
    prepare_native_inlined_search_term(term, query, g_native_arena_tree_search_fold,
        [](std::string_view source, std::string_view needle) {
            return g_overlay.translated_plant_search_matches(source, needle);
        });
}
#endif

static void capture_native_arena_tree_search_query(NativeString *query) {
    fold_native_search_query(query, g_native_arena_tree_search_fold);
    prepare_native_search_facts(query,false);
}

static size_t capture_native_arena_tree_search_find(const char *text, size_t length,
        const NativeString *original_name, const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    // The native caller uses a zero start position. Its relay supplies the
    // original plant name in that argument, retaining case and legacy accents.
    const size_t result = native_search_byte_find(text, length, 0, query_text, query_length);
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            !query_length || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        refresh_native_search_world(false,false);
        std::string_view source;
        if (native_string_view(original_name, &source, 65536))
            return g_overlay.translated_plant_search_matches(source, query)?0:SIZE_MAX;
    } catch (...) {
        // Translation/allocation failures must not cross the native game ABI.
    }
    return result;
}

static bool native_arena_tree_search_hook_active() {
    return g_native_arena_tree_search_hook.active();
}

static void uninstall_native_arena_tree_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_arena_tree_search_hook.uninstall("Native Arena tree translated search"))
        g_native_arena_tree_search_fold = nullptr;
}

static bool install_native_arena_tree_search_hook() {
    if (g_native_arena_tree_search_hook.installed) return true;
    if (native_arena_tree_search_hook_active()) {
        uninstall_native_arena_tree_search_hook();
        if (native_arena_tree_search_hook_active()) return false;
    }
    NativeArenaTreeSearchProfile profile;
    if (!resolve_native_arena_tree_search_profile(profile) || !profile.fold) return false;
    g_native_arena_tree_search_fold = profile.fold;
    if (!g_native_arena_tree_search_hook.install(profile.base, profile.calls,
            "Native Arena tree translated search")) {
        uninstall_native_arena_tree_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search over complete Arena tree names");
    return true;
}
