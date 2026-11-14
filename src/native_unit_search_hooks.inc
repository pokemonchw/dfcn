// Native profiles supply the roster's existing name/job comparison calls.
// Input, matching, translation caches and hook lifetime are shared policy.
using NativeUnitSearchFindFn = size_t (*)(const char *, size_t, size_t,
                                         const char *, size_t);
using NativeUnitSearchFoldFn = void (*)(NativeString *);
struct NativeUnitSearchProfile {
    uintptr_t base = 0;
    NativeUnitSearchFindFn find = nullptr;
    NativeUnitSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static size_t capture_native_unit_search_find(const char *, size_t, size_t,
                                              const char *, size_t);
static size_t capture_native_unit_search_job_find(const char *, size_t, size_t,
                                                  const char *, size_t);
static void capture_native_unit_search_query_fold(NativeString *);
static void capture_native_unit_search_name_fold(NativeString *, const NativeString *);
static void capture_native_unit_search_term(NativeString *, const NativeString *);
static bool capture_native_unit_search_job_reject(const NativeString *, const NativeString *);
#include "native_unit_search_profile.inc"

static NativeCallHook g_native_unit_search_hook;
static NativeUnitSearchFindFn g_real_native_unit_search_find = nullptr;
static NativeUnitSearchFoldFn g_real_native_unit_search_fold = nullptr;
struct NativeUnitSearchIdentity {
    std::string source, folded;
    std::optional<std::string> target;
    std::optional<SearchDescriptor> descriptor;
};
static NativeUnitSearchIdentity &native_unit_search_identity() {
    return reloadable_thread_state<NativeUnitSearchIdentity, struct UnitSearchIdentityTag>();
}

static void capture_native_unit_search_query_fold(NativeString *text) {
    fold_native_search_query(text, g_real_native_unit_search_fold);
}

static void capture_native_unit_search_name_fold(NativeString *text,
                                                 const NativeString *query_string) {
    auto &identity = native_unit_search_identity();
    identity = {};
    try {
        std::string_view source;
        if (native_string_view(text, &source, 65536)) {
            identity.source.assign(source);
            identity.target = native_unit_identity_source_target(source,
                reinterpret_cast<uintptr_t>(text));
            std::string_view query;
            if(g_overlay.translation_enabled() && native_string_view(query_string,&query,4096) && !query.empty()) {
                prepare_native_search_facts(query_string,false);
                identity.descriptor=search_native_unit(source,reinterpret_cast<uintptr_t>(text));
            }
        }
    } catch (...) { identity = {}; }
    fold_native_search_term(text, query_string, g_real_native_unit_search_fold);
    try {
        std::string_view folded;
        if (native_string_view(text, &folded, 65536)) identity.folded.assign(folded);
    } catch (...) { identity = {}; }
}

static size_t match_native_unit_search(const char *text, size_t length, size_t start,
        const char *query_text, size_t query_length, bool activity) {
    NativeInputCallbackScope callback;
    const size_t result = g_real_native_unit_search_find
        ? callback.call_native([&] {
            return g_real_native_unit_search_find(text, length, start, query_text, query_length);
        })
        : SIZE_MAX;
    try {
        if (start != 0 || !text || length == 0 || length > 65536 ||
            !query_text || query_length == 0 || query_length > 4096 ||
            !g_overlay.translation_enabled()) return result;
        const std::string_view query(query_text, query_length);
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        if (!activity) {
            const auto &identity = native_unit_search_identity();
            if (std::string_view(text, length) == identity.folded) {
                std::unique_ptr<SearchDescriptorScope> scope;
                if(identity.descriptor)scope=std::make_unique<SearchDescriptorScope>(*identity.descriptor);
                return g_overlay.translated_unit_search_matches(identity.source, query, false)
                    ? 0 : SIZE_MAX;
            }
        }
        return g_overlay.translated_unit_search_matches(std::string_view(text, length), query, activity)?0:SIZE_MAX;
    } catch (...) {
        // Never unwind through the game's predicate or change its records.
    }
    return result;
}

static size_t capture_native_unit_search_find(const char *text, size_t length,
        size_t start, const char *query, size_t query_length) {
    NativeInputCallbackScope callback;
    return match_native_unit_search(text, length, start, query, query_length, false);
}

static size_t capture_native_unit_search_job_find(const char *text, size_t length,
        size_t start, const char *query, size_t query_length) {
    NativeInputCallbackScope callback;
    return match_native_unit_search(text, length, start, query, query_length, true);
}

static void capture_native_unit_search_term(NativeString *term, const NativeString *query) {
    NativeInputCallbackScope callback;
    std::string source;
    try {
        std::string_view view;
        if (native_string_view(term, &view, 65536)) source.assign(view);
    } catch (...) {}
    prepare_native_inlined_search_term(term, query, g_real_native_unit_search_fold,
        [&](std::string_view, std::string_view needle) {
            return match_native_unit_search(source.data(), source.size(), 0,
                needle.data(), needle.size(), false) != SIZE_MAX;
        });
}

static bool capture_native_unit_search_job_reject(const NativeString *query,
                                                  const NativeString *job) {
    NativeInputCallbackScope callback;
    std::string_view text, needle;
    if (!native_string_view(job, &text, 65536) ||
        !native_string_view(query, &needle, 4096)) return true;
    return match_native_unit_search(text.data(), text.size(), 0,
        needle.data(), needle.size(), true) == SIZE_MAX;
}

static bool native_unit_search_hook_active() {
    return g_native_unit_search_hook.active();
}

static void uninstall_native_unit_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_unit_search_hook.uninstall("Native unit translated search")) {
        g_real_native_unit_search_find = nullptr;
        g_real_native_unit_search_fold = nullptr;
    }
}

static bool install_native_unit_search_hook() {
    if (g_native_unit_search_hook.installed) return true;
    if (native_unit_search_hook_active()) {
        uninstall_native_unit_search_hook();
        if (native_unit_search_hook_active()) return false;
    }
    NativeUnitSearchProfile profile;
    if (!resolve_native_unit_search_profile(profile)) return false;
    if (profile.calls.empty() || !profile.find || !profile.fold) return false;
    g_real_native_unit_search_find = profile.find;
    g_real_native_unit_search_fold = profile.fold;
    if (!g_native_unit_search_hook.install(profile.base, profile.calls,
                                           "Native unit translated search")) {
        uninstall_native_unit_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated creature roster name, profession and job search");
    return true;
}
