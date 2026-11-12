// Linux 53.16 unit formatters and their selected language_name calls.
// SysV passes the same typed arguments in RDI/RSI/RDX/RCX/R8. Native
// strings own their allocation; the additional MSVC destructor is absent.
static void capture_native_unit_reference_capitalization(NativeString *output) {
    NativeInputCallbackScope callback;
    auto *call = g_native_unit_identity_call;
    try {
        std::string_view source;
        if (call && call->reference_output == output &&
                native_string_view(output, &source, 262144))
            call->reference_before_capitalization.assign(source);
    } catch (...) {}
    callback.call_native([&] { g_native_unit_identity_hooks.capitalize(output); });
}

template<NativeUnitReferencePartKind Kind>
static void observe_native_unit_reference_buffer(uintptr_t owner, uintptr_t buffer,
        bool tail = false, bool deferred = false) noexcept {
    auto *call = g_native_unit_identity_call;
    if (!call || reinterpret_cast<uintptr_t>(call->reference_output) != owner) return;
    try {
        std::string value;
        std::string_view output;
        if (!native_history_copy_string(buffer, value) || value.empty() ||
                !native_string_view(call->reference_output, &output, 262144)) return;
        if (tail && value.size() > output.size()) { call->reference_failed = true; return; }
        const size_t count = call->reference_spans.size();
        record_native_unit_reference_part<Kind>(call->reference_output, value.data(), value.size());
        if (call->reference_spans.size() == count + 1)
            call->reference_spans.back().first = deferred ? SIZE_MAX :
                tail ? output.size() - value.size() : output.size();
    } catch (...) { call->reference_failed = true; }
}

static void observe_native_unit_reference_name(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Name>(r->rbp, r->stack()+0xc0, true);
}
static void observe_native_unit_reference_species(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Species>(r->rbp, r->stack()+0xa0);
}
static void observe_native_unit_reference_caste(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Species>(r->rbp, r->stack()+0xc0);
}
static void observe_native_unit_reference_role(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Role>(r->rbp, r->stack()+0x80);
}
static void observe_native_unit_reference_curse(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Curse>(r->rbp,
        native_history_object_field(r->rbx,"unit",0x840));
}
static void observe_native_unit_movement_role(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Role>(r->r15, r->rbp-0x80, false, true);
}
static void observe_native_unit_movement_name(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Name>(r->r15, r->rbp-0x60, false, true);
}
static void observe_native_unit_movement_curse(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Curse>(r->r15,
        native_history_object_field(r->r14,"unit",0x840));
}
static void observe_native_unit_movement_curse_prefix(const NativeInlineRegisters *r) noexcept {
    observe_native_unit_reference_buffer<NativeUnitReferencePartKind::Curse>(r->r15,
        native_history_object_field(r->r14,"unit",0x880));
}

static bool install_native_unit_identity_hooks() {
    auto &hooks = g_native_unit_identity_hooks;
    if (hooks.names.installed && std::all_of(hooks.entries.begin(), hooks.entries.end(),
            [](const auto &entry) { return entry.installed; })) return true;
    if (native_unit_identity_hooks_active()) {
        uninstall_native_unit_identity_hooks();
        if (native_unit_identity_hooks_active()) return false;
    }
    hooks.base = native_history_profile_base();
    if (!hooks.base) return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_unit_identity_hooks(); }
    } guard;
    const std::vector<NativeSearchSignature> signatures{
        {0x771ba0,{0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xe5}},
        {0x772c90,{0xf3,0x0f,0x1e,0xfa,0x41,0x57}},
        {0x7626e0,{0xf3,0x0f,0x1e,0xfa,0x41,0x57}},
        {0x7a3630,{0xf3,0x0f,0x1e,0xfa,0x41,0x57}},
        {0x7a53d0,{0xf3,0x0f,0x1e,0xfa,0x41,0x57}},
        {0x7676a0,{0xf3,0x0f,0x1e,0xfa,0x41,0x57}},
        {0x76ca30,{0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xe5}},
        {0x772da2,{0xe8,0x29,0x2b,0x75,0x00}},
        {0x772f06,{0xe8,0x85,0xcf,0x74,0x00}},
        {0x7628e3,{0xe8,0xa8,0xd5,0x75,0x00}},
        {0x7a5827,{0xe8,0x64,0xa6,0x71,0x00}},
        {0x7a61e1,{0xe8,0xaa,0x9c,0x71,0x00}},
        {0x76cbc1,{0xe8,0x2a,0x54,0x0d,0x01}},
        {0x768015,{0xe8,0x76,0x7e,0x75,0x00}},
        {0x7683af,{0xe8,0xdc,0x7a,0x75,0x00}},
        {0x7697fc,{0xe8,0x8f,0x66,0x75,0x00}},
        {0x769a56,{0xe8,0x35,0x64,0x75,0x00}},
        {0x769d7c,{0xe8,0x0f,0x61,0x75,0x00}},
        {0x769ddc,{0xe8,0xaf,0x60,0x75,0x00}},
        {0x76cce5,{0xe8,0xa6,0x31,0x75,0x00}},
        {0x76e693,{0xe8,0xf8,0x17,0x75,0x00}},
    };
    std::string failure;
    if (!native_search_signatures_match(hooks.base, signatures, failure)) {
        report_native_patch_error("ERROR", "Native unit identity", failure.c_str());
        return false;
    }
    hooks.name = reinterpret_cast<NativeUnitIdentityNameFn>(native_reference_address(hooks.base,0xebfe90));
    hooks.english_name = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(native_reference_address(hooks.base,0xec58d0));
    hooks.selected_name = reinterpret_cast<const void *(*)(const void *)>(native_reference_address(hooks.base,0x1841ff0));
    hooks.capitalize = reinterpret_cast<NativeUnitIdentityCapitalizeFn>(dlsym(RTLD_DEFAULT,
        "_Z28capitalize_string_first_wordRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"));
    hooks.assign = [](NativeString *output, const char *source, size_t length) {
        return &output->assign(source, length);
    };
    hooks.append = [](NativeString *output, const char *source, size_t length) {
        return &output->append(source, length);
    };
    if (!hooks.name || !hooks.english_name || !hooks.selected_name || !hooks.capitalize) return false;
    struct Entry { uintptr_t rva; std::vector<unsigned char> prefix; const void *wrapper; };
    const Entry entries[]{
        {0x771ba0,{0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xe5},reinterpret_cast<const void *>(&capture_native_unit_identity_format<0>)},
        {0x772c90,{0xf3,0x0f,0x1e,0xfa,0x41,0x57},reinterpret_cast<const void *>(&capture_native_unit_identity_format<1>)},
        {0x7626e0,{0xf3,0x0f,0x1e,0xfa,0x41,0x57},reinterpret_cast<const void *>(&capture_native_unit_identity_name_only)},
        {0x7a3630,{0xf3,0x0f,0x1e,0xfa,0x41,0x57},reinterpret_cast<const void *>(&capture_native_unit_identity_format<3>)},
        {0x7a53d0,{0xf3,0x0f,0x1e,0xfa,0x41,0x57},reinterpret_cast<const void *>(&capture_native_unit_identity_format<4>)},
        {0x7676a0,{0xf3,0x0f,0x1e,0xfa,0x41,0x57},reinterpret_cast<const void *>(&capture_native_unit_reference)},
        {0x76ca30,{0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xe5},reinterpret_cast<const void *>(&capture_native_unit_movement_reference)},
    };
    for (size_t i = 0; i < std::size(entries); ++i) {
        const auto &entry = entries[i];
        auto prefix = entry.prefix;
        if (!native_reference_bytes(0x400000+entry.rva, prefix) ||
            !hooks.entries[i].prepare(reinterpret_cast<unsigned char *>(
                native_reference_address(hooks.base,entry.rva)), prefix, entry.wrapper, {},
                "Native unit identity formatter")) return false;
    }
    std::vector<NativeCall> names{
        {0xdbe101,0xec58d0,reinterpret_cast<const void *>(&capture_native_companion_english_name),{}},
        {0x772da2,0xec58d0,reinterpret_cast<const void *>(&capture_native_unit_identity_english_name),{}},
        {0x772f06,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x7628e3,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_quoted_name),{0x41,0x0f,0xb6,0xd5}},
        {0x7a5827,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_quoted_name),{0x0f,0xb6,0x54,0x24,0x08}},
        {0x7a61e1,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_quoted_name),{0xba,0x01,0x00,0x00,0x00}},
        {0x76cbc1,0x1841ff0,reinterpret_cast<const void *>(&capture_native_unit_movement_selected_name),{}},
        {0x768015,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x7683af,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x7697fc,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x769a56,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x769d7c,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x769ddc,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x76cce5,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_identity_name),{}},
        {0x76e693,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_movement_direct_name),{}},
        {0x76b645,0xec58d0,reinterpret_cast<const void *>(&capture_native_unit_reference_entity_name),{}},
        {0x7683c7,0x437660,reinterpret_cast<const void *>(&capture_native_unit_reference_part<NativeUnitReferencePartKind::Name>),{}},
        {0x769814,0x437660,reinterpret_cast<const void *>(&capture_native_unit_reference_part<NativeUnitReferencePartKind::Name>),{}},
        {0x769a6e,0x437660,reinterpret_cast<const void *>(&capture_native_unit_reference_part<NativeUnitReferencePartKind::Name>),{}},
        {0x769d94,0x437660,reinterpret_cast<const void *>(&capture_native_unit_reference_part<NativeUnitReferencePartKind::Name>),{}},
        {0x769df4,0x437660,reinterpret_cast<const void *>(&capture_native_unit_reference_part<NativeUnitReferencePartKind::Name>),{}},
        {0x767dd8,0x437660,reinterpret_cast<const void *>(&capture_native_unit_reference_part<NativeUnitReferencePartKind::Curse>),{}},
        {0xfebbe7,0xec58d0,reinterpret_cast<const void *>(&capture_native_unit_header_english_name),{}},
        {0xff3cfb,0xec58d0,reinterpret_cast<const void *>(&capture_native_unit_header_english_name),{}},
        {0xfd8418,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_header_creation_name),{}},
        {0xff1430,0xebfe90,reinterpret_cast<const void *>(&capture_native_unit_header_creation_name),{}},
        {0xd24181,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        // Barter capitalizes the same reference before appending ': '.
        // These are RVAs; the extracted native call VAs include 0x400000.
        {0x11d2ba3,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11d38e2,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11d3a7c,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11d3aa4,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11cf4a8,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11cf5ed,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11cf7ce,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x11cf977,0x24f90,reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization),{}},
        {0x76d81b,0x24f90,reinterpret_cast<const void *>(&capture_native_unit_reference_capitalization),{}},
        {0x76e32f,0x24f90,reinterpret_cast<const void *>(&capture_native_unit_reference_capitalization),{}},
    };
    if (!native_reference_calls(names,0x400000)) return false;
    if (const uintptr_t header = native_elf_5317_address(0x13f992c)) {
        // 53.17 draws the selected unit's English gloss here, followed by
        // independent quote stores and addst at 0x13f9a97. The relocated
        // 53.16 sites above belong to assignment/relation rows in this image.
        // RAX owns the unit, RDI is unit.name (+8), and ECX is fixed false.
        // Supply that owner in RCX; the wrapper restores the native bool.
        std::erase_if(names, [](const NativeCall &call) {
            return call.wrapper == reinterpret_cast<const void *>(
                &capture_native_unit_header_english_name);
        });
        names.push_back({header - hooks.base,
            reinterpret_cast<uintptr_t>(hooks.english_name) - hooks.base,
            reinterpret_cast<const void *>(&capture_native_unit_header_english_name),
            {0x48,0x89,0xc1}});
    }
    if (!hooks.names.install(hooks.base,names,"Native unit identity name source")) return false;
    struct Observation { uintptr_t rva; std::vector<unsigned char> prefix; NativeInlineObserveFn callback; };
    const Observation observations[]{
        {0x76805d,{0x48,0x8b,0xbc,0x24,0xc0,0,0,0,0x4c,0x39,0xef},&observe_native_unit_reference_name},
        {0x767a24,{0x4c,0x8b,0x84,0x24,0xa8,0,0,0,0x4d,0x85,0xc0},&observe_native_unit_reference_species},
        // Foreign-race references format and capitalize a separate caste
        // noun before appending the occupation. Capture this selected RAW
        // field too, keeping the preceding article as its own literal.
        {0x7681c8,{0x4c,0x8b,0x84,0x24,0xc8,0,0,0},&observe_native_unit_reference_caste},
        // The no-curse branch at 0x767da8 enters at 0x767b65, after
        // the output-buffer load. Observe the shared role load so neither
        // native path lands inside the replacement jump.
        {0x767b65,{0x48,0x8b,0x8c,0x24,0x80,0,0,0},&observe_native_unit_reference_role},
        {0x767b16,{0x48,0x8b,0x8b,0x40,0x08,0,0,0x4d,0x8d,0x2c,0x30},&observe_native_unit_reference_curse},
        {0x76cd18,{0x48,0x8b,0x7d,0x80,0x4c,0x39,0xe7},&observe_native_unit_movement_role},
        {0x76ccea,{0x48,0x83,0x7d,0xa8,0,0x48,0x8b,0x45,0x88},&observe_native_unit_movement_name},
        {0x76d064,{0x4d,0x8b,0x8e,0x40,0x08,0,0,0x49,0x8d,0x1c,0x30},&observe_native_unit_movement_curse},
        {0x76d493,{0x49,0x8b,0x8e,0x80,0x08,0,0,0x4c,0x01,0xc3},&observe_native_unit_movement_curse_prefix},
    };
    hooks.observers.resize(std::size(observations));
    for (size_t i=0; i<std::size(observations); ++i) {
        auto prefix = observations[i].prefix;
        if (!native_reference_bytes(observations[i].rva+0x400000,prefix) ||
            !hooks.observers[i].install(reinterpret_cast<unsigned char *>(
                native_reference_address(hooks.base,observations[i].rva)),
                prefix,observations[i].callback,"Native unit reference field")) return false;
    }
    for (auto &entry : hooks.entries)
        if (!entry.install("Native unit identity formatter")) return false;
    guard.committed = true;
    return true;
}
