// The Kitchen food predicate owns its type/permission filters and removes
// rejected records before native sorting. Extend only its text comparison;
// the complete food name is still borrowed from the current native entry.
struct NativeKitchenSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static void capture_native_kitchen_search_query_fold(NativeString *);
static size_t capture_native_kitchen_search_find(const char *, size_t,
    const NativeString *, const char *, size_t);
#ifdef _WIN32
#include "native_kitchen_search_profile_pe.inc"
#else
static NativeString *capture_native_kitchen_search_simplified(
    NativeString *, NativeString *, const void *);
#include "native_kitchen_search_profile_elf.inc"
#endif

static NativeCallHook g_native_kitchen_search_hook;
static NativeSearchFoldFn g_native_kitchen_search_fold = nullptr;

#ifndef _WIN32
static NativeString *capture_native_kitchen_search_simplified(NativeString *output,
        NativeString *source, const void *closure) {
    NativeInputCallbackScope callback;
    using SimplifiedFn = NativeString *(*)(NativeString *, NativeString *);
    static const auto original = reinterpret_cast<SimplifiedFn>(dlsym(RTLD_DEFAULT,
        "_Z17simplified_stringNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"));
    if (!original) return output;
    std::string spelling;
    try {
        std::string_view borrowed;
        if (native_string_view(source, &borrowed, 65536)) spelling.assign(borrowed);
    } catch (...) {}
    NativeString *result = callback.call_native([&] { return original(output, source); });
    try {
        uintptr_t owner = 0;
        if (native_history_copy(reinterpret_cast<uintptr_t>(closure), owner) && owner) {
            const auto *query = reinterpret_cast<const NativeString *>(owner + 0x240);
            // Returning the native value can move from the by-value argument.
            // Retain its spelling before forwarding; only the disposable
            // simplified key enters the native find.
            std::string_view needle, folded;
            if (g_overlay.translation_enabled() &&
                    !spelling.empty() &&
                    native_string_view(query, &needle, 4096) && !needle.empty() &&
                    native_string_view(output, &folded, 65536)) {
                const bool accepted=g_overlay.translated_kitchen_search_matches(spelling,needle);
                if(accepted!=(folded.find(needle)!=std::string_view::npos))output->assign(accepted?needle:std::string_view{});
            }
        }
    } catch (...) {}
    return result;
}
#endif

static void capture_native_kitchen_search_query_fold(NativeString *query) {
    prepare_native_search_facts(query);
    fold_native_search_query(query, g_native_kitchen_search_fold);
}

static size_t capture_native_kitchen_search_find(const char *text, size_t length,
        const NativeString *caption, const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    const size_t result = native_search_byte_find(text, length, 0, query_text, query_length);
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        std::string_view source;
        if (!native_string_view(caption, &source, 65536) || source.empty() ||
            source.find('\0') != std::string_view::npos) return result;
        // Use the same food noun and RAW-use tag boundaries as the displayed
        // Kitchen field, including literal, pinyin and initials matching.
        return g_overlay.translated_kitchen_search_matches(source,
                std::string_view(query_text, query_length))?0:SIZE_MAX;
    } catch (...) {
        // Allocation/translation failures retain the original native result.
    }
    return result;
}

static bool native_kitchen_search_hook_active() {
    return g_native_kitchen_search_hook.active();
}

static void uninstall_native_kitchen_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_kitchen_search_hook.uninstall("Native Kitchen translated search"))
        g_native_kitchen_search_fold = nullptr;
}

static bool install_native_kitchen_search_hook() {
    if (g_native_kitchen_search_hook.installed) return true;
    if (native_kitchen_search_hook_active()) {
        uninstall_native_kitchen_search_hook();
        if (native_kitchen_search_hook_active()) return false;
    }
    NativeKitchenSearchProfile profile;
    if (!resolve_native_kitchen_search_profile(profile) || !profile.fold) return false;
    g_native_kitchen_search_fold = profile.fold;
    if (!g_native_kitchen_search_hook.install(profile.base, profile.calls,
            "Native Kitchen translated search")) {
        uninstall_native_kitchen_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated Kitchen food search; native type, cooking/brewing permission and sorting preserved");
    return true;
}
