// Adventure-log filters restore the native candidate
// vector, folds disposable search keys, then runs an inlined substring search.
// No native records, list identities or selection logic are replaced.
static NativeCallHook g_native_journal_search_hook;
static NativeSearchFoldFn g_native_journal_search_fold = nullptr;
struct NativeJournalSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
};

static bool native_journal_search_input(const NativeString *query) {
    const uintptr_t screen = native_current_viewscreen();
    // A typed current owner keeps other text boxes unchanged. The generated
    // ABI layout supplies the exact filter_str copied by the bindings below.
    return screen && native_history_object_is(screen, "viewscreen_adventure_logst") &&
        reinterpret_cast<uintptr_t>(query) == native_history_object_member(screen,
            "viewscreen_adventure_logst", "filter_str", sizeof(NativeString));
}

static void capture_native_journal_search_query(NativeString *query) {
    fold_native_search_query(query, g_native_journal_search_fold);
}

#include "native_journal_agreement_search.inc"

template<JournalSearchKind Kind>
static void capture_native_journal_search_term(NativeString *term,
        const NativeString *query_string, const NativeString *display_source) {
    NativeInputCallbackScope callback;
    std::string source;
    try {
        std::string_view query, caption;
        if (g_overlay.translation_enabled() &&
            native_string_view(query_string, &query, 4096) &&
            !query.empty() &&
            native_string_view(display_source, &caption, 65536)) source.assign(caption);
    } catch (...) {}
    prepare_native_inlined_search_term(term, query_string, g_native_journal_search_fold,
        [&](std::string_view, std::string_view query) {
            if constexpr (Kind == JournalSearchKind::Agreement) {
                SearchDescriptor descriptor;descriptor.kind=SearchCandidateKind::TextRecord;descriptor.domain="journal";
                descriptor.original_caption=native_text_to_utf8(source);descriptor.candidate_id.record=reinterpret_cast<uintptr_t>(display_source);
                {
                    SearchTextCollectionScope collect(descriptor);
                    if(!source.empty())g_overlay.translated_journal_search_matches(source,query,Kind);
                    native_journal_agreement_search_matches(display_source,query);
                }
                return search_association_match(descriptor,query).accepted;
            }
            if (!source.empty() &&
                    g_overlay.translated_journal_search_matches(source, query, Kind)) return true;
            return false;
        });
}

#ifdef _WIN32
#include "native_journal_search_profile_pe.inc"
#endif

static bool native_journal_search_hook_active() {
    return g_native_journal_search_hook.active();
}

static void uninstall_native_journal_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_journal_search_hook.uninstall("Native adventure journal search"))
        g_native_journal_search_fold = nullptr;
}

static bool install_native_journal_search_hook() {
    if (g_native_journal_search_hook.installed) return true;
    if (native_journal_search_hook_active()) {
        uninstall_native_journal_search_hook();
        if (native_journal_search_hook_active()) return false;
    }
    NativeJournalSearchProfile profile;
#ifdef _WIN32
    if (!resolve_native_journal_search_profile_pe(profile)) return false;
#else
    // This binding belongs to the installed 53.17 ELF. The old filter was
    // absent from the retained 53.16 instruction seed, so relocating its RVA
    // cannot establish the call sites or their live register arguments.
    const uintptr_t base = native_history_profile_base();
    const uintptr_t fold = native_elf_5317_address(0x426d50);
    if (!base || !fold) {
        report_native_patch_error("ERROR", "Adventure journal search", "unsupported native filter image");
        return false;
    }
    const auto signature = [](uintptr_t va, const std::vector<unsigned char> &expected) {
        const uintptr_t address = native_elf_5317_address(va);
        std::vector<unsigned char> observed(expected.size());
        return address && native_history_copy_bytes(address, observed.data(), observed.size()) &&
            observed == expected;
    };
    // R12 owns filter_str at +2a8 and the event vector at +598. The working
    // query is RSP+70; the relay return address makes its callback RSI=RSP+78.
    if (!signature(0x17e6b60, {0xf3,0x0f,0x1e,0xfa,0x41,0x57,0x41,0x56,0x41,0x55,
                0x41,0x54,0x49,0x89,0xfc,0x55,0x53,0x48,0x81,0xec,0xe8,0,0,0}) ||
            !signature(0x17e6b78, {0x48,0x8b,0xb7,0xa8,0x02,0,0,0x48,0x8b,0x97,0xb0,0x02,0,0}) ||
            !signature(0x17e6bc2, {0x48,0x89,0xef,0xe8,0x86,0x01,0xc4,0xfe,
                0x66,0x41,0x83,0xbc,0x24,0x76,0x02,0,0,0x08}) ||
            !signature(0x17e7fdc, {0x48,0x8b,0x4c,0x24,0x08,0x48,0x8b,0x50,0x30,
                0x48,0x89,0x8c,0x24,0xb0,0,0,0,0x48,0x8b,0x70,0x28}) ||
            !signature(0x17e7f50, {0x49,0x8d,0xbc,0x24,0x98,0x05,0,0}) ||
            !signature(0x17e7fd0, {0x48,0x8b,0x4c,0x24,0x18,0x4c,0x89,0xf7,0x48,0x8b,0x04,0x08})) {
        report_native_patch_error("ERROR", "Adventure journal search", "native filter signature differs");
        return false;
    }
    profile.base = base;
    profile.fold = reinterpret_cast<NativeSearchFoldFn>(fold);
    profile.calls = {
        {native_elf_5317_address(0x17e6bc5) - base, fold - base,
            reinterpret_cast<const void *>(&capture_native_journal_search_query)},
        // Event summary+68 supplies the complete display text, rather than
        // the index at list_name+28. Other tabs retain their full list name.
        {native_elf_5317_address(0x17e7ffc) - base, fold - base,
            reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Event>),
            {0x48,0x8d,0x74,0x24,0x78,0x49,0x8b,0x94,0x24,0x98,0x05,0,0,
             0x48,0x8b,0x4c,0x24,0x20,0x48,0x8b,0x14,0x0a,0x48,0x83,0xc2,0x68}},
        {native_elf_5317_address(0x17e7bc7) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Agreement>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e8237) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Person>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e7507) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Site>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e7767) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Group>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e7977) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Region>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e7dd7) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Creature>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e7007) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Artifact>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e7284) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Actor>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e8804) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Organization>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e6cbb) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::Plot>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
        {native_elf_5317_address(0x17e6cef) - base, fold - base, reinterpret_cast<const void *>(&capture_native_journal_search_term<JournalSearchKind::PlotOrganization>), {0x48,0x8d,0x74,0x24,0x78,0x48,0x89,0xfa}},
    };
#endif
    g_native_journal_search_fold = profile.fold;
    if (!g_native_journal_search_hook.install(profile.base, profile.calls,
                                              "Native adventure journal search")) {
        uninstall_native_journal_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated and pinyin adventure journal search across all native tabs");
    return true;
}
