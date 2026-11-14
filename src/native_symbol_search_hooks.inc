// The image creator owns its catalogs, ordering, eligibility and result IDs.
// Replace only query folding and candidate comparison, including offscreen
// records and catalogs that were already cached before a core reload.
using NativeSymbolObjectFn = const void *(*)(const void *);
struct NativeSymbolSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
    size_t key = 0, second_key = 0, figure_name = 0, artifact_name = 0;
    NativeSymbolObjectFn figure_unit = nullptr, unit_name = nullptr;
    NativeLegendsSearchNameFn name = nullptr;
    NativeLegendsSearchGlossFn gloss = nullptr;
    NativeSearchDestroyFn destroy = nullptr;
    size_t action_transitive = 0;
    void (*action)(NativeString *, int32_t, bool) = nullptr;
};
static void capture_native_symbol_search_query(NativeString *);
static void capture_native_symbol_creature_term(NativeString *, const NativeString *);
template<SymbolCaptionKind Kind>
static bool capture_native_symbol_search_match(const void *, const NativeString *);
#include "native_symbol_search_profile.inc"

static NativeCallHook g_native_symbol_search_hook;
static NativeSymbolSearchProfile g_native_symbol_search;

static void capture_native_symbol_search_query(NativeString *query) {
    fold_native_search_query(query, g_native_symbol_search.fold);
}

static void capture_native_symbol_creature_term(NativeString *term, const NativeString *query) {
    NativeInputCallbackScope callback;
    std::string original;
    try {
        std::string_view source, needle;
        if (g_overlay.translation_enabled() &&
            native_string_view(query, &needle, 4096) && !needle.empty() &&
            native_string_view(term, &source, 65536)) original.assign(source);
    } catch (...) {}
    // Preserve generated species spelling before CP437 folding. Only the
    // disposable comparison string is changed, never the RAW or result IDs.
    prepare_native_inlined_search_term(term, query, g_native_symbol_search.fold,
        [&](std::string_view, std::string_view needle) {
            return g_overlay.translated_symbol_search_matches(original, needle,
                SymbolCaptionKind::Creature);
        });
}

static bool native_symbol_identity_source(uintptr_t record, SymbolCaptionKind kind,
        std::string &source) {
    const auto &profile = g_native_symbol_search;
    uintptr_t object = 0;
    if (!native_history_copy(record, object) || !object) return false;
    const void *name = nullptr;
    if (kind == SymbolCaptionKind::Figure) {
        const void *unit = profile.figure_unit(reinterpret_cast<const void *>(object));
        name = unit ? profile.unit_name(unit) :
            reinterpret_cast<const void *>(object + profile.figure_name);
    } else {
        name = reinterpret_cast<const void *>(object + profile.artifact_name);
    }
    if (!name) return false;
    NativeSearchString native_name(profile.destroy), native_gloss(profile.destroy);
    profile.name(name, &native_name.value);
    profile.gloss(name, &native_gloss.value, true, false);
    std::string_view spelling, gloss;
    if (!native_string_view(&native_name.value, &spelling, 65536) ||
        !native_string_view(&native_gloss.value, &gloss, 65536)) return false;
    if (spelling.empty()) {
        // Same fixed native caption as the unnamed artifact row.
        if (kind != SymbolCaptionKind::Artifact) return false;
        source = "Untitled/unnamed";
    } else {
        source.assign(spelling);
        if (!gloss.empty()) source.append(", \"").append(gloss).append("\"");
    }
    return source.find('\0') == std::string::npos;
}

template<SymbolCaptionKind Kind>
static bool capture_native_symbol_search_match(const void *candidate,
        const NativeString *query_string) {
    NativeInputCallbackScope callback;
    try {
        const auto record = reinterpret_cast<uintptr_t>(candidate);
        const auto &profile = g_native_symbol_search;
        std::string_view query, key;
        if (!record || !native_string_view(query_string, &query, 4096) ||
            !native_string_view(reinterpret_cast<const NativeString *>(record + profile.key),
                &key, 65536)) return false;
        // Keep the native English/empty-query contract. Named records have
        // both native and translated-language English keys; neither is edited.
        bool native_hit=native_search_byte_find(key.data(), key.size(), 0, query.data(), query.size()) != SIZE_MAX;
        constexpr bool identity = Kind == SymbolCaptionKind::Figure || Kind == SymbolCaptionKind::Artifact;
        if constexpr (identity) {
            std::string_view second;
            if (native_string_view(reinterpret_cast<const NativeString *>(record + profile.second_key),
                    &second, 65536) && native_search_byte_find(second.data(), second.size(), 0,
                        query.data(), query.size()) != SIZE_MAX) native_hit=true;
        }
        if (!g_overlay.translation_enabled() || query.empty()) return native_hit;
        SearchNativeHitScope native_scope(native_hit);
        std::string source;
        if constexpr (identity) {
            // Rebuild the exact display name from the native identity. The
            // permanent sort keys have already lost case and CP437 accents.
            if (!native_symbol_identity_source(record, Kind, source)) return false;
        } else if constexpr (Kind == SymbolCaptionKind::Action) {
            int32_t verb = -1;
            bool transitive = false;
            NativeSearchString caption(profile.destroy);
            std::string_view text;
            if (!native_history_copy(record, verb) ||
                !native_history_copy(record + profile.action_transitive, transitive)) return false;
            profile.action(&caption.value, verb, transitive);
            if (!native_string_view(&caption.value, &text, 65536)) return false;
            // Preserve the native X/Y placeholders and dictionary case;
            // the cached simplified key has converted them to x/y.
            source.assign(text);
        } else {
            source.assign(key);
        }
        return g_overlay.translated_symbol_search_matches(source, query, Kind);
    } catch (...) {
        // No translation/allocation exception may cross the game's ABI.
        return false;
    }
}

static bool native_symbol_search_hook_active() {
    return g_native_symbol_search_hook.active();
}

static void uninstall_native_symbol_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_symbol_search_hook.uninstall("Native image creator translated search"))
        g_native_symbol_search = {};
}

static bool install_native_symbol_search_hook() {
    if (g_native_symbol_search_hook.installed) return true;
    if (native_symbol_search_hook_active()) {
        uninstall_native_symbol_search_hook();
        if (native_symbol_search_hook_active()) return false;
    }
    NativeSymbolSearchProfile profile;
    if (!resolve_native_symbol_search_profile(profile) || !profile.fold ||
        !profile.figure_unit || !profile.unit_name || !profile.name || !profile.gloss ||
        !profile.action) return false;
    g_native_symbol_search = std::move(profile);
    if (!g_native_symbol_search_hook.install(g_native_symbol_search.base,
            g_native_symbol_search.calls, "Native image creator translated search")) {
        uninstall_native_symbol_search_hook();
        return false;
    }
    log_line("INFO", "Enabled complete image creator translated search: creatures/castes, figures, plants, trees, shapes, items, artifacts and actions; native catalog order and selection preserved");
    return true;
}
