// Display assignments, depot hauling and both sides of trade have independent
// filters. Hook their disposable complete captions, preserving native item
// eligibility, container traversal, category flags and selection identity.
struct NativeItemPickerSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static NativeCallHook g_native_item_picker_search_hook;
static NativeSearchFoldFn g_native_item_picker_search_fold = nullptr;

static void capture_native_item_picker_search_query(NativeString *query) {
    prepare_native_search_facts(query);
    fold_native_search_query(query, g_native_item_picker_search_fold);
}
static void capture_native_item_picker_search_term(NativeString *term,
        const NativeString *query) {
    prepare_native_inlined_search_term(term, query, g_native_item_picker_search_fold,
        [](std::string_view source, std::string_view needle) {
            return g_overlay.translated_item_search_matches(source, needle, true);
        });
}
#ifdef _WIN32
#include "native_item_picker_search_profile_pe.inc"
#else
#include "native_item_picker_search_profile_elf.inc"
#endif

static bool native_item_picker_search_hook_active() {
    return g_native_item_picker_search_hook.active();
}
static void uninstall_native_item_picker_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_item_picker_search_hook.uninstall("Native item picker translated search"))
        g_native_item_picker_search_fold = nullptr;
}
static bool install_native_item_picker_search_hook() {
    if (g_native_item_picker_search_hook.installed) return true;
    if (native_item_picker_search_hook_active()) {
        uninstall_native_item_picker_search_hook();
        if (native_item_picker_search_hook_active()) return false;
    }
    NativeItemPickerSearchProfile profile;
    if (!resolve_native_item_picker_search_profile(profile)) return false;
    append_native_search_caption_observers(profile.base, profile.calls,
        reinterpret_cast<const void *>(&capture_native_item_picker_search_term));
    g_native_item_picker_search_fold = profile.fold;
    if (!g_native_item_picker_search_hook.install(profile.base, profile.calls,
            "Native item picker translated search")) {
        uninstall_native_item_picker_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated display assignment, depot hauling and two-sided trade search");
    return true;
}
