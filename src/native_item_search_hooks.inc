// Matching and hook lifetime are shared. The native profile supplies the
// complete, unmodified item name at the game's existing substring boundary.
using NativeItemSearchFindFn = size_t (*)(const char *, size_t, size_t,
                                         const char *, size_t);
struct NativeItemSearchProfile {
    uintptr_t base = 0;
    NativeItemSearchFindFn find = nullptr;
    std::vector<NativeCall> calls;
    uintptr_t fold_offset = 0;
};
static size_t capture_native_item_search_find(const char *, size_t,
        const NativeString *, const char *, size_t);
static void capture_native_item_search_term(NativeString *, const NativeString *, const NativeString *);
#include "native_item_search_profile.inc"

static NativeCallHook g_native_item_search_hook;
static NativeItemSearchFindFn g_real_native_item_search_find = nullptr;
static NativeSearchFoldFn g_native_item_search_fold = nullptr;

static void capture_native_item_search_term(NativeString *term,
        const NativeString *source, const NativeString *query) {
    prepare_native_inlined_search_term(term, query, g_native_item_search_fold,
        [&](std::string_view text, std::string_view needle) {
            return capture_native_item_search_find(text.data(), text.size(), source,
                needle.data(), needle.size()) != SIZE_MAX;
        });
}

static size_t capture_native_item_search_find(const char *native_text,
        size_t native_length, const NativeString *original_name,
        const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    // The profile replaces the known zero start position with original_name.
    // Restore zero for the original call, retaining native English matching
    // and the empty-query result exactly as before.
    const size_t native_result = g_real_native_item_search_find
        ? callback.call_native([&] {
            return g_real_native_item_search_find(native_text, native_length, 0,
                query_text, query_length);
        })
        : SIZE_MAX;
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return native_result;
        const std::string_view query(query_text, query_length);
        search_native_query_hint()=query;SearchNativeHitScope native_hit(native_result!=SIZE_MAX);
        std::string_view source;
        if (native_string_view(original_name, &source, 65536) && !source.empty()) {
            auto descriptor = take_native_search_caption(reinterpret_cast<uintptr_t>(original_name), source);
            std::unique_ptr<SearchDescriptorScope> scope;
            if (descriptor) {
                scope = std::make_unique<SearchDescriptorScope>(*descriptor);
            }
            return g_overlay.translated_item_search_matches(source, query) ? 0 : SIZE_MAX;
        }
    } catch (...) {
        // Translation/allocation failures must not escape through the game ABI.
    }
    // The caller consumes only match versus npos and updates its own item
    // availability flag, categories, selection and scrolling.
    return native_result;
}

static bool native_item_search_hook_active() {
    return g_native_item_search_hook.active();
}

static void uninstall_native_item_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_item_search_hook.uninstall("Native item translated search")) {
        g_real_native_item_search_find = nullptr;
        g_native_item_search_fold = nullptr;
    }
}

static bool install_native_item_search_hook() {
    if (g_native_item_search_hook.installed) return true;
    if (native_item_search_hook_active()) {
        uninstall_native_item_search_hook();
        if (native_item_search_hook_active()) return false;
    }
    NativeItemSearchProfile profile;
    if (!resolve_native_item_search_profile(profile)) return false;
    // The PE original-name producer above has the same public item-caption
    // ABI as all abstract item filters.
    append_native_search_caption_observers(profile.base, profile.calls,
        reinterpret_cast<const void *>(&capture_native_item_search_term));
    if (profile.calls.empty() || !profile.find) return false;
    g_real_native_item_search_find = profile.find;
    g_native_item_search_fold = profile.fold_offset
        ? reinterpret_cast<NativeSearchFoldFn>(native_reference_address(profile.base, profile.fold_offset)) : nullptr;
    if (!g_native_item_search_hook.install(profile.base, profile.calls,
                                           "Native item translated search")) {
        uninstall_native_item_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search over complete embark item names");
    return true;
}
