// Every existing Legends search field shares Unicode editing, translated
// matching and hook lifetime. Native adapters only supply complete sources
// and verified call boundaries, independently of visible list rows.
using NativeLegendsSearchFindFn = size_t (*)(const char *, size_t, size_t,
                                            const char *, size_t);
using NativeLegendsSearchFoldFn = void (*)(NativeString *);
using NativeLegendsSearchNameFn = void (*)(const void *, NativeString *);
using NativeLegendsSearchGlossFn = void (*)(const void *, NativeString *, bool, bool);
using NativeLegendsSearchSpeciesFn = void (*)(int32_t, NativeString *, int32_t, int32_t);
struct NativeLegendsSearchSources {
    std::array<ptrdiff_t, 9> names{}, glosses{};
    ptrdiff_t species = 0, ordinal = 0;
    NativeSearchDestroyFn destroy = nullptr;
    NativeLegendsSearchNameFn site_type = nullptr;
    NativeLegendsSearchFoldFn capitalize = nullptr;
    void (*population)(void *, NativeString *, int32_t, int32_t) = nullptr;
    std::array<const char *, 14> structure_labels{};
    std::array<const char *, 3> dungeon_labels{}, underground_labels{};
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
#ifdef _WIN32
static void capture_native_legends_search_term_fold(NativeString *);
#else
static void capture_native_legends_search_term_fold(NativeString *, const NativeString *);
#endif
static void capture_native_legends_search_name(const void *, NativeString *);
static void capture_native_legends_search_gloss(const void *, NativeString *, bool, bool);
static void capture_native_legends_search_species(int32_t, NativeString *, int32_t, int32_t);
static size_t capture_native_legends_search_descriptor_find(const char *, size_t,
        const void *, const char *, size_t);
#ifdef _WIN32
#define DFCN_LEGENDS_SEARCH_DECLARE(name) \
    static size_t capture_native_legends_search_##name##_find(const char *, size_t, \
        size_t, const char *, size_t);
#else
#define DFCN_LEGENDS_SEARCH_DECLARE(name) \
    static size_t capture_native_legends_search_##name##_find(const char *, size_t, \
        const void *, const char *, size_t, const void *);
#endif
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
static NativeLegendsSearchSpeciesFn g_real_native_legends_search_species = nullptr;
static NativeLegendsSearchSources g_native_legends_search_sources;
#include "native_legends_search_context.inc"
#include "native_legends_search_sources.inc"

static void capture_native_legends_search_query_fold(NativeString *text) {
#ifdef _WIN32
    auto &context = native_legends_search_context();
    context = {};
    context.query = text;
    context.screen = native_history_legends_screen();
#endif
    fold_native_search_query(text, g_real_native_legends_search_fold);
}

static void capture_native_legends_search_term_fold(NativeString *text
#ifndef _WIN32
        , const NativeString *query_string
#endif
        ) {
#ifdef _WIN32
    const NativeString *query_string = native_legends_search_context().query;
#endif
    fold_native_search_term(text, query_string, g_real_native_legends_search_fold);
}

static void capture_native_legends_search_name(const void *name, NativeString *output) {
    NativeInputCallbackScope callback;
#ifdef _WIN32
    auto &context = native_legends_search_context();
    context.name = reinterpret_cast<uintptr_t>(name);
    context.name_text = output;
    context.gloss_text = nullptr;
    context.species_text = nullptr;
    context.current = {};
#endif
    // Builders leave output untouched for unnamed records. These call sites
    // reuse scratch strings, so start empty rather than borrowing the last row.
    native_string_set_length(output, 0);
    if (g_real_native_legends_search_name)
        callback.call_native([&] { g_real_native_legends_search_name(name, output); });
}

static void capture_native_legends_search_gloss(const void *name, NativeString *output,
                                                bool capitalized, bool mode) {
    NativeInputCallbackScope callback;
#ifdef _WIN32
    auto &context = native_legends_search_context();
    context.gloss_text = context.name == reinterpret_cast<uintptr_t>(name) ? output : nullptr;
#endif
    (void)capitalized;
    native_string_set_length(output, 0);
    // Display uses capitalized glosses. Legacy queries still run the original
    // fold afterwards; translated queries retain the display grammar's case.
    if (g_real_native_legends_search_gloss)
        callback.call_native([&] { g_real_native_legends_search_gloss(name, output, true, mode); });
}

static void capture_native_legends_search_species(int32_t race, NativeString *output,
        int32_t flags, int32_t caste) {
    NativeInputCallbackScope callback;
    if (g_real_native_legends_search_species)
        callback.call_native([&] { g_real_native_legends_search_species(race, output, flags, caste); });
#ifdef _WIN32
    native_legends_search_context().species_text = output;
#endif
}

static size_t match_native_legends_search(const char *native_text, size_t native_length,
        const void *frame, const char *query_text, size_t query_length,
        const void *screen, LegendsSearchKind kind, NativeInputCallbackScope &callback,
        size_t start = 0) {
    // Windows retains the original find arguments. Its captured formatter
    // objects supply the context that the ELF adapter passes explicitly.
    const size_t result = g_real_native_legends_search_find
        ? callback.call_native([&] {
            return g_real_native_legends_search_find(native_text, native_length, start,
                query_text, query_length);
        })
        : SIZE_MAX;
    if (result != SIZE_MAX)
        return native_search_item_result(result, native_text, native_length, query_text, query_length);
    try {
        if (!g_overlay.translation_enabled() || start || !query_text ||
            query_length == 0 || query_length > 4096) return result;
#ifdef _WIN32
        if (!native_legends_search_current(native_text, native_length, query_text, query_length)) return result;
        screen = reinterpret_cast<const void *>(native_legends_search_context().screen);
#else
        if (!frame || !screen) return result;
#endif
        const std::string_view query(query_text, query_length);
        std::string source, description;
        NativeHistoryName site_name;
        if (native_legends_search_source(kind, frame, screen, source, description,
                kind == LegendsSearchKind::Site ? &site_name : nullptr) &&
            g_overlay.translated_legends_search_matches(source, description, query, kind,
                site_name.site_id >= 0 ? &site_name : nullptr))
            return 0;
    } catch (...) {
        // Never unwind translation/allocation failures through the game.
    }
    // Native code owns list identity, eligibility, ordering, scrolling,
    // selection and restoration when the query is cleared.
    return result;
}

#ifdef _WIN32
#define DFCN_LEGENDS_SEARCH_CALLBACK(name, kind) \
    static size_t capture_native_legends_search_##name##_find(const char *text, size_t length, \
            size_t start, const char *query, size_t query_length) { \
        NativeInputCallbackScope callback; \
        return match_native_legends_search(text, length, nullptr, query, query_length, \
                                           nullptr, LegendsSearchKind::kind, callback, start); \
    }
#else
#define DFCN_LEGENDS_SEARCH_CALLBACK(name, kind) \
    static size_t capture_native_legends_search_##name##_find(const char *text, size_t length, \
            const void *frame, const char *query, size_t query_length, const void *screen) { \
        NativeInputCallbackScope callback; \
        return match_native_legends_search(text, length, frame, query, query_length, \
                                           screen, LegendsSearchKind::kind, callback); \
    }
#endif
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
#ifdef _WIN32
    const size_t start = reinterpret_cast<uintptr_t>(descriptor);
#else
    constexpr size_t start = 0;
#endif
    const size_t result = g_real_native_legends_search_find
        ? callback.call_native([&] {
            return g_real_native_legends_search_find(native_text, native_length, start,
                query_text, query_length);
        })
        : SIZE_MAX;
    if (result != SIZE_MAX)
        return native_search_item_result(result, native_text, native_length, query_text, query_length);
    try {
#ifdef _WIN32
        if (start || !native_legends_search_current(native_text, native_length, query_text, query_length, true)) return result;
        descriptor = reinterpret_cast<const void *>(native_legends_search_figure_descriptor());
#endif
        if (!g_overlay.translation_enabled() || !descriptor || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        std::vector<std::string_view> sources;
        if (native_legends_search_descriptors(descriptor, sources)) {
            for (const auto source : sources)
                if (g_overlay.translated_legends_search_matches(
                        {}, source, query, LegendsSearchKind::Figure)) return 0;
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
        g_real_native_legends_search_species = nullptr;
        g_native_legends_search_sources = {};
#ifdef _WIN32
        native_legends_search_context() = {};
#endif
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
#ifdef _WIN32
    g_real_native_legends_search_species = reinterpret_cast<NativeLegendsSearchSpeciesFn>(
        native_reference_address(profile.base, 0xaa3bd0));
    if (!g_real_native_legends_search_species) return false;
#endif
    g_native_legends_search_sources = profile.sources;
    if (!g_native_legends_search_hook.install(profile.base, profile.calls,
                                             "Native Legends translated search")) {
        uninstall_native_legends_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search for all nine native Legends search catalogs");
    return true;
}
