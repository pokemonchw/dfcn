// Native executable signatures, import lookup and calling-convention arguments.
// Rich capture dispatch and the hook lifetime are shared in native_rich_hooks.inc.
#ifdef _WIN32
static bool resolve_native_rich_profile(NativeRichProfile &profile) {
    const auto *base = reinterpret_cast<const unsigned char *>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return false;
    const bool version_5317 = native_pe_5317();
    static constexpr uintptr_t wrap_rva = 0x00858550;
    static constexpr uintptr_t draw_rva = 0x00ad9790;
    static constexpr std::array<unsigned char, 16> wrap_entry{{
        0x48, 0x89, 0x5c, 0x24, 0x18, 0x55, 0x56, 0x57,
        0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    }};
    static constexpr std::array<unsigned char, 15> draw_entry{{
        0x48, 0x89, 0x5c, 0x24, 0x08, 0x48, 0x89, 0x6c,
        0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18,
    }};
    // The empty-source path used for scroll padding: source.size at +0x10,
    // game allocation of 0x602 bytes, color array at +0x301, vector end/capacity
    // at +8/+0x10, and native vector growth when no unused slot remains.
    static constexpr std::array<unsigned char, 68> blank_append{{
        0x48, 0x83, 0x7a, 0x10, 0x00, 0x75, 0x42,
        0xb9, 0x02, 0x06, 0x00, 0x00, 0xe8, 0xf7, 0x10, 0xce, 0x00,
        0x48, 0x89, 0x44, 0x24, 0x30, 0xc6, 0x00, 0x00,
        0xc6, 0x80, 0x01, 0x03, 0x00, 0x00, 0x00,
        0x48, 0x8b, 0x57, 0x08, 0x48, 0x3b, 0x57, 0x10, 0x74, 0x0d,
        0x48, 0x89, 0x02, 0x48, 0x83, 0x47, 0x08, 0x08,
        0xe9, 0x22, 0x05, 0x00, 0x00,
        0x4c, 0x8d, 0x44, 0x24, 0x30, 0x48, 0x8b, 0xcf,
        0xe8, 0x04, 0x86, 0x81, 0xff,
    }};
    static constexpr std::array<unsigned char, 7> health_tab{{
        0x41, 0x39, 0x9d, 0x7c, 0x1c, 0x00, 0x00,
    }};
    static constexpr std::array<unsigned char, 7> health_sources{{
        0x49, 0x8d, 0x8d, 0x88, 0x1c, 0x00, 0x00,
    }};
    static constexpr std::array<unsigned char, 7> personality_sources{{
        0x49, 0x8d, 0x8d, 0x90, 0x1a, 0x00, 0x00,
    }};
    // Both supported PE renderers load their personality box vector from the
    // sheet saved at caller RSP+0xb260 before iterating the colored rows.
    static constexpr std::array<unsigned char, 14> personality_draw_boxes{{
        0x48, 0x8b, 0x84, 0x24, 0x60, 0xb2, 0x00, 0x00,
        0x48, 0x05, 0xa8, 0x1a, 0x00, 0x00,
    }};
    // The input handler saves its sheet at entry RSP+8. Six pushes and
    // LEA RBP,[RSP-0x2f] put that saved argument at RBP+0x67.
    static constexpr std::array<unsigned char, 19> thought_input_frame{{
        0x48, 0x89, 0x4c, 0x24, 0x08, 0x55, 0x53, 0x57,
        0x41, 0x54, 0x41, 0x55, 0x41, 0x57, 0x48, 0x8d,
        0x6c, 0x24, 0xd1,
    }};
    // Only the recent-thought input loop borrows R15 for its source iterator,
    // then restores the sheet from the saved argument after wrapping.
    static constexpr std::array<unsigned char, 3> thought_input_iterator{{
        0x4c, 0x8b, 0xff,
    }};
    static constexpr std::array<unsigned char, 4> thought_input_restore{{
        0x4c, 0x8b, 0x7d, 0x67,
    }};
    profile.base = reinterpret_cast<uintptr_t>(base);
    profile.wrap = reinterpret_cast<NativeKnowledgeWrapFn>(native_pe_address(profile.base, wrap_rva));
    profile.draw = reinterpret_cast<NativeKnowledgeDrawFn>(native_pe_address(profile.base, draw_rva));
    // MOV [RSP+0x18],RBX is one complete, non-relative instruction.
    // Capture at the native entry; call sites only add character-page ownership.
    profile.entry_address = const_cast<unsigned char *>(base + native_pe_rva(wrap_rva));
    profile.entry_prefix.assign(wrap_entry.begin(), wrap_entry.begin() + 5);
    // The draw entry likewise begins with one complete MOV [RSP+0x08],RBX.
    profile.draw_entry_address = const_cast<unsigned char *>(base + native_pe_rva(draw_rva));
    profile.draw_entry_prefix.assign(draw_entry.begin(), draw_entry.begin() + 5);
    profile.signatures = {
        {wrap_rva, {wrap_entry.begin(), wrap_entry.end()}},
        {draw_rva, {draw_entry.begin(), draw_entry.end()}},
        {0x858588, {blank_append.begin(), blank_append.end()}},
        // 53.17's character mouse handler retains its sheet in RDI rather
        // than R13. These are complete instructions from that profile;
        // the field offsets and the native box/source ownership are unchanged.
        {0x1b2b77, version_5317
            ? std::vector<unsigned char>{0x39,0x9f,0x7c,0x1c,0x00,0x00}
            : std::vector<unsigned char>(health_tab.begin(), health_tab.end())},
        {0x1b2ba9, version_5317
            ? std::vector<unsigned char>{0x48,0x8d,0x8f,0x88,0x1c,0x00,0x00}
            : std::vector<unsigned char>(health_sources.begin(), health_sources.end())},
        {0x1b791f, version_5317
            ? std::vector<unsigned char>{0x48,0x8d,0x8f,0x90,0x1a,0x00,0x00}
            : std::vector<unsigned char>(personality_sources.begin(), personality_sources.end())},
        {0x17f2a0, {personality_draw_boxes.begin(), personality_draw_boxes.end()}},
        {0x8d97b0, {thought_input_frame.begin(), thought_input_frame.end()}},
        {0x8dafc7, {thought_input_iterator.begin(), thought_input_iterator.end()}},
        {0x8db00f, {thought_input_restore.begin(), thought_input_restore.end()}}};
    static constexpr std::array<uintptr_t, 35> wrap_calls{{
        0x16906d, 0x16ca53, 0x16da60, 0x17cb6d, 0x17d9e2, 0x17e10b, 0x17f070,
        0x1b2c87, 0x1b31fb, 0x1b67f7, 0x1b7167, 0x1b7577, 0x1b79c7,
        0x87106e, 0x87118b, 0x8712e4, 0x87143d, 0x871596, 0x871681,
        0x871795, 0x871998, 0x871ac8, 0x871cdc, 0x871dae, 0x871eae,
        0x872170, 0x87220b, 0x8722cc, 0x872353,
        0x8da0d5, 0x8da2a9, 0x8dacf6, 0x8dafe5, 0x8db1a6, 0x8db366,
    }};
    static constexpr std::array<uintptr_t, 8> draw_calls{{
        0x1692ee, 0x16ce90, 0x16de9d, 0x17cfaa,
        0x17de1f, 0x17e548, 0x17f4ad, 0x872b3d,
    }};
    for (uintptr_t address : wrap_calls) {
        profile.call_signatures.push_back({address,wrap_rva});
        std::vector<unsigned char> argument;
        const bool health = address == 0x16ca53 || address == 0x1b2c87 || address == 0x8da0d5;
        const bool personality = address == 0x17f070 || address == 0x1b79c7 || address == 0x8db366;
        // The intervening character-page calls use the same sheet argument.
        // Their exact live box/source pair selects recent thoughts or memories;
        // other character documents retain generic capture, never guessed prose.
        const bool thought_render = address == 0x16906d || address == 0x17cb6d ||
            address == 0x17d9e2 || address == 0x17e10b;
        const bool thought_mouse = address == 0x1b67f7 || address == 0x1b7167 || address == 0x1b7577;
        const bool thought_input = address == 0x8dacf6 || address == 0x8dafe5 || address == 0x8db1a6;
        if (!health && !personality && !thought_render && !thought_mouse && !thought_input) continue;
        const auto kind = address == 0x16906d ? NativeRichCallKind::OverviewThoughts
            : health ? NativeRichCallKind::Health
            : personality ? NativeRichCallKind::Personality : NativeRichCallKind::Thoughts;
        // Preserve RCX/RDX; the third argument is the native sheet in R8.
        if (address == 0x16ca53 || address == 0x17f070 || thought_render)
            argument = {0x4c,0x8b,0x84,0x24,0x68,0xb2,0x00,0x00};
        else if (address == 0x1b2c87 || address == 0x1b79c7 || thought_mouse)
            argument = version_5317
                ? std::vector<unsigned char>{0x4c,0x8b,0xc7}  // R8 = RDI.
                : std::vector<unsigned char>{0x4d,0x8b,0xc5}; // R8 = R13.
        else if (address == 0x8dafe5)
            argument = {0x4c,0x8b,0x45,0x67}; // R8 = [RBP+0x67]; R15 holds the source iterator.
        else
            argument = {0x4d,0x8b,0xc7}; // R8 = R15, input handler.
        profile.calls.push_back({address,wrap_rva,kind,std::move(argument)});
    }
    for (uintptr_t address : draw_calls) {
        profile.call_signatures.push_back({address,draw_rva});
        if (address == 0x1692ee || address == 0x17de1f || address == 0x17e548 ||
            address == 0x17f4ad) {
            // The render frame retains the sheet at caller RSP+0xb260.
            // Preserve graphics/text/colors; CALL adds eight bytes before
            // this relay loads the fourth argument into R9.
            profile.calls.push_back({address,draw_rva,
                address == 0x1692ee ? NativeRichCallKind::OverviewThoughtsDraw :
                address == 0x17f4ad ? NativeRichCallKind::PersonalityDraw : NativeRichCallKind::ThoughtsDraw,
                {0x4c,0x8b,0x8c,0x24,0x68,0xb2,0x00,0x00}});
        }
    }
    if (!native_pe_bytes(wrap_rva, profile.entry_prefix) ||
        !native_pe_bytes(draw_rva, profile.draw_entry_prefix)) return false;
    for (auto &signature : profile.signatures) {
        // The three explicit 53.17 opcode signatures above already use its
        // register allocation. Relocate their reference coordinates without
        // applying the old profile's byte substitutions a second time.
        const bool native_mouse_signature = version_5317 &&
            (signature.address == 0x1b2b77 || signature.address == 0x1b2ba9 ||
                signature.address == 0x1b791f);
        if (!native_mouse_signature &&
                !native_pe_bytes(signature.address, signature.bytes)) return false;
        signature.address = native_pe_rva(signature.address);
        if (!signature.address) return false;
    }
    for (auto &signature : profile.call_signatures) {
        signature.address = native_pe_rva(signature.address);
        signature.target = native_pe_rva(signature.target);
        if (!signature.address || !signature.target) return false;
    }
    for (auto &site : profile.calls) {
        site.address = native_pe_rva(site.address);
        site.target = native_pe_rva(site.target);
        if (!site.address || !site.target) return false;
    }
    return true;
}
#else
static bool resolve_native_rich_profile(NativeRichProfile &profile) {
    ModuleBuildId module;
    dl_iterate_phdr(find_main_build_id, &module);
    const bool steam = module.found && elf_runtime::supported() && elf_runtime::state().edition != 2;
    const bool classic = module.found && elf_runtime::supported() && elf_runtime::state().edition == 2;
    if (!steam && !classic) {
        log_line("ERROR", "Unsupported dwarfort build for rich-text capture");
        return false;
    }
    const uintptr_t wrap_va = steam ? 0x115dd20 : 0x115d580;
    const std::vector<uintptr_t> signatures = steam ? std::vector<uintptr_t>{
        0x136fa91, 0x136fab8, 0x136faf8, 0x136fe5d, 0x1370277, 0x13702c7,
        0x13bb2cf, 0x13bbee8, 0x13bc5f1, 0x13be596, 0x13be9ca, 0x13c04c3,
        0x13e461f, 0x13e779a, 0x13eef27, 0x13ef0d5, 0x13f43a6, 0x13f589c, 0x13fdaad,
    } : std::vector<uintptr_t>{
        0x117f456, 0x118015f, 0x118031e, 0x11804d1, 0x11806bd, 0x1180732, 0x11807ba,
        0x118091a, 0x1180aa4, 0x1180ba5, 0x1180c1b, 0x1180d7b, 0x1180f42, 0x1180fbf,
        0x118104d, 0x11810ca, 0x136ec71, 0x136ec98, 0x136ecd8, 0x136f03d, 0x136f457,
        0x136f4a7, 0x13ba4af, 0x13bb0c8, 0x13bb7d1, 0x13bd776, 0x13bdbaa, 0x13bf6a3,
        0x13e37ff, 0x13e697a, 0x13ee107, 0x13ee2b5, 0x13f3586, 0x13f4a7c, 0x13fcc8d,
    };
    profile.base = module.base;
    const uintptr_t native_wrap = elf_runtime::automatic() ? native_reference_va(wrap_va) : wrap_va;
    if (!native_wrap) return false;
    auto *entry = reinterpret_cast<unsigned char *>(module.base + native_wrap);
    for (uintptr_t address : signatures) profile.call_signatures.push_back({address,wrap_va});
    // The Steam wrapper's entry bytes are read from its validated live image,
    // never guessed from another distribution. Relocate only complete PUSH
    // register instructions, which have no PC-relative address or branch.
    // Preserve a native ENDBR64 before the detour. The official 84ba build
    // begins ENDBR64; PUSH R15; PUSH R14; PUSH R13; PUSH R12.
    static constexpr std::array<unsigned char, 4> endbr{{0xf3, 0x0f, 0x1e, 0xfa}};
    unsigned char *patch_at = entry;
    if (std::memcmp(entry, endbr.data(), endbr.size()) == 0) patch_at += endbr.size();
    size_t prefix_size = 0;
    while (prefix_size < 5) {
        const unsigned char opcode = patch_at[prefix_size];
        if (opcode >= 0x50 && opcode <= 0x57) {
            ++prefix_size;
        } else if (opcode == 0x41 && patch_at[prefix_size + 1] >= 0x50 &&
                   patch_at[prefix_size + 1] <= 0x57) {
            prefix_size += 2;
        } else {
            log_line("ERROR", "Rich-text entry has no safely relocatable register-push prefix");
            return false;
        }
    }
    profile.entry_address = patch_at;
    profile.entry_prefix.assign(patch_at, patch_at + prefix_size);
    static constexpr const char *draw_symbol = "_ZN9graphicst12addcoloredstEPKcS1_";
    PatchSearch draw_search{draw_symbol};
    dl_iterate_phdr(find_main_import_slot, &draw_search);
    void *draw = dlsym(RTLD_DEFAULT, draw_symbol);
    if (!draw_search.slot || !draw) {
        log_line("ERROR", "Cannot resolve complete rich-text draw import");
        return false;
    }
    enum SheetArgument { R14, R15, RenderFrame, SavedR14 };
    const std::array<std::vector<unsigned char>, 4> sheet_arguments{{
        {0x4c, 0x89, 0xf2}, // RDX = R14.
        {0x4c, 0x89, 0xfa}, // RDX = R15.
        {0x48, 0x8b, 0x95, 0x78, 0xfd, 0xff, 0xff}, // RDX = [RBP-0x288].
        {0x48, 0x8b, 0x54, 0x24, 0x38}, // RDX = caller [RSP+0x30], plus CALL return address.
    }};
    // Bind the live sheet at EACH call, not once per enclosing handler.
    // Recent-thought rewrap saves R14 at caller [RSP+0x30], then reuses R14D
    // for a screen coordinate. Passing R14 at 0x136fe5d caused the 2026-09-18
    // crash: sheet=0x54, vector header read at 0x1854. The saved sheet in the
    // crash dump owns exactly the current source/box pair. The relay tail-
    // jumps without changing RSP, so its slot is [RSP+0x38], not +0x30.
    // Require the native spill, reuse and restore instructions before hooking.
    profile.signatures.push_back({steam ? 0x136eaccu : 0x136dcacu,
        {0x4c, 0x89, 0x74, 0x24, 0x30, 0x45, 0x89, 0xe6}});
    profile.signatures.push_back({steam ? 0x136eaf3u : 0x136dcd3u,
        {0x4c, 0x8b, 0x74, 0x24, 0x30}});
    struct CharacterCallBinding {
        uintptr_t steam, classic;
        NativeRichCallKind kind;
        SheetArgument sheet;
    };
    const std::array<CharacterCallBinding, 18> character_calls{{
        {0x136fa91, 0x136ec71, NativeRichCallKind::Health, R14},
        {0x136fab8, 0x136ec98, NativeRichCallKind::Personality, R14},
        {0x13bb2cf, 0x13ba4af, NativeRichCallKind::Health, R15},
        {0x13be596, 0x13bd776, NativeRichCallKind::Personality, R15},
        {0x13e461f, 0x13e37ff, NativeRichCallKind::Health, RenderFrame},
        {0x13e779a, 0x13e697a, NativeRichCallKind::Personality, RenderFrame},
        {0x136faf8, 0x136ecd8, NativeRichCallKind::Thoughts, R14},
        {0x136fe5d, 0x136f03d, NativeRichCallKind::Thoughts, SavedR14},
        {0x1370277, 0x136f457, NativeRichCallKind::Thoughts, R14},
        {0x13702c7, 0x136f4a7, NativeRichCallKind::Thoughts, R14},
        {0x13bbee8, 0x13bb0c8, NativeRichCallKind::Thoughts, R15},
        {0x13bc5f1, 0x13bb7d1, NativeRichCallKind::Thoughts, R15},
        {0x13be9ca, 0x13bdbaa, NativeRichCallKind::Thoughts, R15},
        {0x13c04c3, 0x13bf6a3, NativeRichCallKind::Thoughts, R15},
        {0x13eef27, 0x13ee107, NativeRichCallKind::Thoughts, RenderFrame},
        {0x13ef0d5, 0x13ee2b5, NativeRichCallKind::Thoughts, RenderFrame},
        {0x13f43a6, 0x13f3586, NativeRichCallKind::Thoughts, RenderFrame},
        {0x13f589c, 0x13f4a7c, NativeRichCallKind::Thoughts, RenderFrame},
    }};
    profile.wrap = reinterpret_cast<NativeKnowledgeWrapFn>(entry);
    profile.draw = reinterpret_cast<NativeKnowledgeDrawFn>(draw);
    profile.draw_slot = draw_search.slot;
    for (const auto &call : character_calls)
        profile.calls.push_back({steam ? call.steam : call.classic, wrap_va,
            call.kind, sheet_arguments[call.sheet]});
    if (elf_runtime::automatic()) {
        for (auto &signature : profile.signatures) {
            if (!native_reference_bytes(signature.address, signature.bytes)) return false;
            signature.address = native_reference_va(signature.address);
            if (!signature.address) return false;
        }
        for (auto &signature : profile.call_signatures) {
            signature.address = native_reference_va(signature.address);
            signature.target = native_reference_va(signature.target);
            if (!signature.address || !signature.target) return false;
        }
        for (auto &call : profile.calls) {
            call.address = native_reference_va(call.address);
            call.target = native_reference_va(call.target);
            if (!call.address || !call.target) return false;
        }
    }
    return true;
}
#endif
