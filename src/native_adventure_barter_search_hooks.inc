// Adventure barter has two independent queries and the game's own grouped
// item/container availability flags. Only its complete temporary captions
// enter the same item matcher used for rendered item names and Stocks.
struct NativeAdventureBarterSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static NativeCallHook g_native_adventure_barter_search_hook;
static NativeSearchFoldFn g_native_adventure_barter_search_fold = nullptr;

static void capture_native_adventure_barter_search_query(NativeString *query) {
    prepare_native_search_facts(query);
    fold_native_search_query(query, g_native_adventure_barter_search_fold);
}

static void capture_native_adventure_barter_search_term(NativeString *term,
        const NativeString *query) {
    prepare_native_inlined_search_term(term, query, g_native_adventure_barter_search_fold,
        [](std::string_view source, std::string_view needle) {
            return g_overlay.translated_item_search_matches(source, needle, true);
        });
}
#ifdef _WIN32
#include "native_adventure_barter_search_profile_pe.inc"
#else
#include "native_adventure_barter_search_profile_elf.inc"
#endif

static bool native_adventure_barter_search_hook_active() {
    return g_native_adventure_barter_search_hook.active();
}

static void uninstall_native_adventure_barter_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_adventure_barter_search_hook.uninstall("Native adventure barter search"))
        g_native_adventure_barter_search_fold = nullptr;
}

static bool install_native_adventure_barter_search_hook() {
    if (g_native_adventure_barter_search_hook.installed) return true;
    if (native_adventure_barter_search_hook_active()) {
        uninstall_native_adventure_barter_search_hook();
        if (native_adventure_barter_search_hook_active()) return false;
    }
    NativeAdventureBarterSearchProfile profile;
    if (!resolve_native_adventure_barter_search_profile(profile) || !profile.fold) return false;
    append_native_search_caption_observers(profile.base, profile.calls,
        reinterpret_cast<const void *>(&capture_native_adventure_barter_search_term));
    g_native_adventure_barter_search_fold = profile.fold;
    if (!g_native_adventure_barter_search_hook.install(profile.base, profile.calls,
                                                     "Native adventure barter search")) {
        uninstall_native_adventure_barter_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated two-sided adventure barter item and container search");
    return true;
}
