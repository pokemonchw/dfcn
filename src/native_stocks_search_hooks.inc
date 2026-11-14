// Both native Stocks filters (category availability and current item groups)
// share this boundary. The game owns full traversal, counts and selection.
struct NativeStocksSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static void capture_native_stocks_search_query(NativeString *);
static void capture_native_stocks_search_term(NativeString *, const NativeString *);
#include "native_stocks_search_profile.inc"

static NativeCallHook g_native_stocks_search_hook;
static NativeSearchFoldFn g_native_stocks_search_fold = nullptr;

static void capture_native_stocks_search_query(NativeString *query) {
    prepare_native_search_facts(query);
    fold_native_search_query(query, g_native_stocks_search_fold);
}

static void capture_native_stocks_search_term(NativeString *term,
        const NativeString *query_string) {
    NativeInputCallbackScope callback;
    // Keep display spelling before the native CP437 simplifier mutates its
    // disposable key. Generated names must not be translated from that key.
    std::string source;
    try {
        std::string_view query, caption;
        if (g_overlay.translation_enabled() &&
            native_string_view(query_string, &query, 4096) &&
            !query.empty() &&
            native_string_view(term, &caption, 65536)) source.assign(caption);
    } catch (...) {}
    prepare_native_inlined_search_term(term, query_string, g_native_stocks_search_fold,
        [&](std::string_view, std::string_view query) {
            return !source.empty() &&
                g_overlay.translated_stocks_search_matches(source, query);
        });
}

static bool native_stocks_search_hook_active() {
    return g_native_stocks_search_hook.active();
}

static void uninstall_native_stocks_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_stocks_search_hook.uninstall("Native Stocks translated search"))
        g_native_stocks_search_fold = nullptr;
}

static bool install_native_stocks_search_hook() {
    if (g_native_stocks_search_hook.installed) return true;
    if (native_stocks_search_hook_active()) {
        uninstall_native_stocks_search_hook();
        if (native_stocks_search_hook_active()) return false;
    }
    NativeStocksSearchProfile profile;
    if (!resolve_native_stocks_search_profile(profile)) return false;
    append_native_search_caption_observers(profile.base, profile.calls,
        reinterpret_cast<const void *>(&capture_native_stocks_search_term));
    g_native_stocks_search_fold = profile.fold;
    if (!g_native_stocks_search_hook.install(profile.base, profile.calls,
                                            "Native Stocks translated search")) {
        uninstall_native_stocks_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated Stocks search over all native categories and item groups");
    return true;
}
