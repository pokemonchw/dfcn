// Every existing Legends search field shares Unicode editing, translated
// matching and hook lifetime. Native adapters only supply complete sources
// and verified call boundaries, independently of visible list rows.
using NativeLegendsSearchFindFn = size_t (*)(const char *, size_t, size_t,
                                            const char *, size_t);
using NativeLegendsSearchFoldFn = void (*)(NativeString *);
using NativeLegendsSearchNameFn = void (*)(const void *, NativeString *);
using NativeLegendsSearchGlossFn = void (*)(const void *, NativeString *, bool, bool);
struct NativeLegendsSearchSources {
    std::array<ptrdiff_t, 9> names{}, glosses{};
    ptrdiff_t species = 0, ordinal = 0;
    NativeSearchDestroyFn destroy = nullptr;
    NativeLegendsSearchNameFn site_type = nullptr;
    NativeLegendsSearchFoldFn capitalize = nullptr;
    void (*population)(void *, NativeString *, int32_t, int32_t) = nullptr;
    std::array<uintptr_t, 14> structure_labels{};
    std::array<uintptr_t, 3> dungeon_labels{}, underground_labels{};
};
struct NativeLegendsSearchProfile {
    uintptr_t base = 0;
    NativeLegendsSearchFindFn find = nullptr;
    NativeLegendsSearchFoldFn fold = nullptr;
    NativeLegendsSearchNameFn name = nullptr;
    NativeLegendsSearchGlossFn gloss = nullptr;
    std::vector<NativeCall> calls;
    NativeLegendsSearchSources sources;
};
static void capture_native_legends_search_query_fold(NativeString *);
static void capture_native_legends_search_term_fold(NativeString *, const NativeString *);
static void capture_native_legends_search_name(const void *, NativeString *);
static void capture_native_legends_search_gloss(const void *, NativeString *, bool, bool);
static size_t capture_native_legends_search_descriptor_find(const char *, size_t,
        const void *, const char *, size_t);
#define DFCN_LEGENDS_SEARCH_DECLARE(name) \
    static size_t capture_native_legends_search_##name##_find(const char *, size_t, \
        const void *, const char *, size_t, const void *);
DFCN_LEGENDS_SEARCH_DECLARE(figure)
DFCN_LEGENDS_SEARCH_DECLARE(site)
DFCN_LEGENDS_SEARCH_DECLARE(artifact)
DFCN_LEGENDS_SEARCH_DECLARE(written)
DFCN_LEGENDS_SEARCH_DECLARE(region)
DFCN_LEGENDS_SEARCH_DECLARE(entity)
DFCN_LEGENDS_SEARCH_DECLARE(building)
DFCN_LEGENDS_SEARCH_DECLARE(underground)
DFCN_LEGENDS_SEARCH_DECLARE(population)
#undef DFCN_LEGENDS_SEARCH_DECLARE
#include "native_legends_search_profile.inc"

static NativeCallHook g_native_legends_search_hook;
static NativeLegendsSearchFindFn g_real_native_legends_search_find = nullptr;
static NativeLegendsSearchFoldFn g_real_native_legends_search_fold = nullptr;
static NativeLegendsSearchNameFn g_real_native_legends_search_name = nullptr;
static NativeLegendsSearchGlossFn g_real_native_legends_search_gloss = nullptr;
static NativeLegendsSearchSources g_native_legends_search_sources;
#include "native_legends_search_sources.inc"

static void capture_native_legends_search_query_fold(NativeString *text) {
    fold_native_search_query(text, g_real_native_legends_search_fold);
}

static void capture_native_legends_search_term_fold(NativeString *text,
                                                    const NativeString *query_string) {
    fold_native_search_term(text, query_string, g_real_native_legends_search_fold);
}

static void capture_native_legends_search_name(const void *name, NativeString *output) {
    NativeInputCallbackScope callback;
    // Builders leave output untouched for unnamed records. These call sites
    // reuse scratch strings, so start empty rather than borrowing the last row.
    native_string_set_length(output, 0);
    if (g_real_native_legends_search_name)
        callback.call_native([&] { g_real_native_legends_search_name(name, output); });
}

static void capture_native_legends_search_gloss(const void *name, NativeString *output,
                                                bool capitalized, bool mode) {
    NativeInputCallbackScope callback;
    (void)capitalized;
    native_string_set_length(output, 0);
    // Display uses capitalized glosses. Legacy queries still run the original
    // fold afterwards; translated queries retain the display grammar's case.
    if (g_real_native_legends_search_gloss)
        callback.call_native([&] { g_real_native_legends_search_gloss(name, output, true, mode); });
}

static size_t match_native_legends_search(const char *native_text, size_t native_length,
        const void *frame, const char *query_text, size_t query_length,
        const void *screen, LegendsSearchKind kind, NativeInputCallbackScope &callback) {
    // The relay substitutes a source frame for the original zero start. The
    // sixth argument supplies the native list owner without changing its data.
    const size_t result = g_real_native_legends_search_find
        ? callback.call_native([&] {
            return g_real_native_legends_search_find(native_text, native_length, 0,
                query_text, query_length);
        })
        : SIZE_MAX;
    try {
        if (!g_overlay.translation_enabled() || !frame || !screen || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        std::string source, description;
        NativeHistoryName site_name;
        if (native_legends_search_source(kind, frame, screen, source, description,
                kind == LegendsSearchKind::Site ? &site_name : nullptr)) {
            SearchDescriptor d;d.kind=SearchCandidateKind::NamedEntity;d.domain="legends";
            d.candidate_id={reinterpret_cast<uintptr_t>(screen),reinterpret_cast<uintptr_t>(frame),0,0};
            SearchDescriptorScope scope(d);
            return g_overlay.translated_legends_search_matches(source, description, query, kind,
                site_name.site_id >= 0 ? &site_name : nullptr)?0:SIZE_MAX;
        }
    } catch (...) {
        // Never unwind translation/allocation failures through the game.
    }
    // Native code owns list identity, eligibility, ordering, scrolling,
    // selection and restoration when the query is cleared.
    return result;
}

#define DFCN_LEGENDS_SEARCH_CALLBACK(name, kind) \
    static size_t capture_native_legends_search_##name##_find(const char *text, size_t length, \
            const void *frame, const char *query, size_t query_length, const void *screen) { \
        NativeInputCallbackScope callback; \
        return match_native_legends_search(text, length, frame, query, query_length, \
                                           screen, LegendsSearchKind::kind, callback); \
    }
DFCN_LEGENDS_SEARCH_CALLBACK(figure, Figure)
DFCN_LEGENDS_SEARCH_CALLBACK(site, Site)
DFCN_LEGENDS_SEARCH_CALLBACK(artifact, Artifact)
DFCN_LEGENDS_SEARCH_CALLBACK(written, WrittenContent)
DFCN_LEGENDS_SEARCH_CALLBACK(region, Region)
DFCN_LEGENDS_SEARCH_CALLBACK(entity, Entity)
DFCN_LEGENDS_SEARCH_CALLBACK(building, Building)
DFCN_LEGENDS_SEARCH_CALLBACK(underground, Underground)
DFCN_LEGENDS_SEARCH_CALLBACK(population, Population)
#undef DFCN_LEGENDS_SEARCH_CALLBACK

static size_t capture_native_legends_search_descriptor_find(const char *native_text,
        size_t native_length, const void *descriptor,
        const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    const size_t result = g_real_native_legends_search_find
        ? callback.call_native([&] {
            return g_real_native_legends_search_find(native_text, native_length, 0,
                query_text, query_length);
        })
        : SIZE_MAX;
    try {
        if (!g_overlay.translation_enabled() || !descriptor || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        std::vector<std::string_view> sources;
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        if (native_legends_search_descriptors(descriptor, sources)) {
            SearchDescriptor d;d.kind=SearchCandidateKind::TextRecord;d.domain="legends";
            d.candidate_id.record=reinterpret_cast<uintptr_t>(descriptor);SearchDescriptorScope scope(d);
            {
                SearchTextCollectionScope collect(d);
                for (const auto source : sources)g_overlay.translated_legends_search_matches({},source,query,LegendsSearchKind::Figure);
            }
            return search_association_match(d,query).accepted?0:SIZE_MAX;
        }
    } catch (...) {}
    return result;
}

static bool native_legends_search_hook_active() {
    return g_native_legends_search_hook.active();
}

static void uninstall_native_legends_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_legends_search_hook.uninstall("Native Legends translated search")) {
        g_real_native_legends_search_find = nullptr;
        g_real_native_legends_search_fold = nullptr;
        g_real_native_legends_search_name = nullptr;
        g_real_native_legends_search_gloss = nullptr;
        g_native_legends_search_sources = {};
    }
}

static bool install_native_legends_search_hook() {
    if (g_native_legends_search_hook.installed) return true;
    if (native_legends_search_hook_active()) {
        uninstall_native_legends_search_hook();
        if (native_legends_search_hook_active()) return false;
    }
    NativeLegendsSearchProfile profile;
    if (!resolve_native_legends_search_profile(profile)) return false;
    if (profile.calls.empty() || !profile.find || !profile.fold || !profile.name ||
        !profile.gloss || !profile.sources.site_type || !profile.sources.capitalize ||
        !profile.sources.population) return false;
    g_real_native_legends_search_find = profile.find;
    g_real_native_legends_search_fold = profile.fold;
    g_real_native_legends_search_name = profile.name;
    g_real_native_legends_search_gloss = profile.gloss;
    g_native_legends_search_sources = profile.sources;
    if (!g_native_legends_search_hook.install(profile.base, profile.calls,
                                             "Native Legends translated search")) {
        uninstall_native_legends_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search for all nine native Legends search catalogs");
    return true;
}
