// Counterintelligence keeps separate complete actor, organization and plot
// catalogs. Share their display grammar with the journal and leave native
// candidate traversal, selection and organization-chart construction intact.
struct NativeJusticeSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};
static void capture_native_justice_search_query(NativeString *);
template<JournalSearchKind Kind>
static void capture_native_justice_search_term(NativeString *, const NativeString *);
#ifdef _WIN32
template<JournalSearchKind Kind>
static void capture_native_justice_plot_search_term(NativeString *, const NativeString *, uintptr_t);
#include "native_justice_search_profile_pe.inc"
#else
#include "native_justice_search_profile_elf.inc"
#endif

static NativeCallHook g_native_justice_search_hook;
static NativeSearchFoldFn g_native_justice_search_fold = nullptr;

static void capture_native_justice_search_query(NativeString *query) {
    fold_native_search_query(query, g_native_justice_search_fold);
}

template<JournalSearchKind Kind>
static void capture_native_justice_search_term(NativeString *term,
        const NativeString *query) {
    // The filter just copied the complete list_name/organization_name here.
    // Its clipped p_list_name and persistent simplified key are never used.
    prepare_native_inlined_search_term(term, query, g_native_justice_search_fold,
        [&](std::string_view source, std::string_view needle) {
            return g_overlay.translated_journal_search_matches(source, needle, Kind);
        });
}

#ifdef _WIN32
template<JournalSearchKind Kind>
static std::optional<NativeJusticePlotCaption> native_justice_search_plot_caption(
        uintptr_t plot, std::string_view copied) {
    static_assert(Kind == JournalSearchKind::Plot || Kind == JournalSearchKind::PlotOrganization);
    const uintptr_t base = native_history_profile_base();
    if (!base || !plot || plot > UINTPTR_MAX - 0x90 || copied.empty()) return std::nullopt;
    constexpr bool organization = Kind == JournalSearchKind::PlotOrganization;
    const uintptr_t source_address = plot + (organization ? 0x70 : 0);
    std::string current;
    if (!native_history_copy_string(source_address, current) || current != copied)
        return std::nullopt;
    if constexpr (organization) {
        // +70 is the producer's shortened personal-name string. The same
        // native relationship recovery used by its draw owns the full name
        // and the exact language_name identity for translated searches.
        return native_justice_plot_caption(native_reference_address(base, 0x4776fa),
            source_address, current);
    } else {
        if (auto caption = native_justice_plot_caption(
                native_reference_address(base, 0x477471), plot + 0x40, current))
            return caption;
        // A query can run before the renderer's first lazy +00 -> +40 copy.
        // The verified source is +00 in this filter; its agreement still
        // supplies exactly the same target-kind distinction as the drawer.
        NativeJusticePlotCaption caption;
        caption.field = NativeJusticePlotField::Title;
        caption.complete_source = std::move(current);
        uintptr_t agreement = 0, detail = 0, data = 0;
        NativeBorrowedVector<uintptr_t> details;
        int32_t type = -1, entity = -1, figure = -1;
        if (native_history_copy(plot + 0x60, agreement) && agreement &&
                agreement <= UINTPTR_MAX - 0x40 &&
                native_history_read_vector(agreement + 0x28, details) &&
                details.size() && details.size() <= 65536 &&
                (detail = native_history_vector_at(details, 0)) &&
                detail <= UINTPTR_MAX - 0x1c &&
                native_history_copy(detail + 0x18, type) && type == 10 &&
                native_history_copy(detail + 0x10, data) && data &&
                data <= UINTPTR_MAX - 0x14 &&
                native_history_copy(data + 0x10, entity) &&
                native_history_copy(data + 0xc, figure)) {
            if (entity != -1) caption.sabotage_person = false;
            else if (figure != -1) caption.sabotage_person = true;
        }
        return caption;
    }
}

template<JournalSearchKind Kind>
static void capture_native_justice_plot_search_term(NativeString *term,
        const NativeString *query, uintptr_t plot) {
    // The relay passes the candidate selected by the existing native loop.
    // Only its disposable folded key receives the translated match result.
    prepare_native_inlined_search_term(term, query, g_native_justice_search_fold,
        [&](std::string_view source, std::string_view needle) {
            const auto caption = native_justice_search_plot_caption<Kind>(plot, source);
            return caption ? g_overlay.translated_journal_search_matches(
                caption->complete_source, needle, Kind, &*caption)
                : g_overlay.translated_journal_search_matches(source, needle, Kind);
        });
}
#endif

static bool native_justice_search_hook_active() {
    return g_native_justice_search_hook.active();
}

static void uninstall_native_justice_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_justice_search_hook.uninstall("Native counterintelligence search"))
        g_native_justice_search_fold = nullptr;
}

static bool install_native_justice_search_hook() {
    if (g_native_justice_search_hook.installed) return true;
    if (native_justice_search_hook_active()) {
        uninstall_native_justice_search_hook();
        if (native_justice_search_hook_active()) return false;
    }
    NativeJusticeSearchProfile profile;
    if (!resolve_native_justice_search_profile(profile) || !profile.fold) return false;
    g_native_justice_search_fold = profile.fold;
    if (!g_native_justice_search_hook.install(profile.base, profile.calls,
                                             "Native counterintelligence search")) {
        uninstall_native_justice_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated counterintelligence actor, organization and plot search");
    return true;
}
