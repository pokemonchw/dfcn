// Host ABI binding only. Capture, translation and layout remain shared.
static bool resolve_native_announcement_binding(NativeAnnouncementBinding &binding) {
#ifdef _WIN32
    const auto executable = native_history_profile_base();
    if (!executable || !native_pe_supported()) return false;
    auto *base = reinterpret_cast<unsigned char *>(executable);
    // DF 53.16: announcement manager, const native string&, event parameters&.
    // The entry's first complete instruction is position independent. The
    // event type is an int16 at parameters+0, validated against 356 by DF.
    const unsigned char type_read[] = {0x41,0x0f,0xbf,0x08};
    if (!native_pe_match(executable, 0xe3c70, type_read, sizeof(type_read))) return false;
    binding.entry = base + native_pe_rva(0xe3c20);
    binding.prefix = {0x48,0x89,0x5c,0x24,0x20};
    if (!native_pe_bytes(0xe3c20, binding.prefix)) return false;
    // The LISP formatter mutates one NativeString& in RCX. Remember both
    // sides so repeated S/s never destroys words such as pass or possess.
    // Calls: 0x1a6d33, 0x1a700a and the NPC wrapper at 0x685380; ret 0x67bc4c.
    const unsigned char speech_prologue[] = {
        0x48,0x89,0x5c,0x24,0x10,0x48,0x89,0x74,0x24,0x18,
        0x48,0x89,0x7c,0x24,0x20,0x55,0x41,0x54};
    if (!native_pe_match(executable, 0x67b6c0, speech_prologue, sizeof(speech_prologue))) return false;
    binding.speech_entry = base + native_pe_rva(0x67b6c0);
    binding.speech_prefix = {0x48,0x89,0x5c,0x24,0x10};
    if (!native_pe_bytes(0x67b6c0, binding.speech_prefix)) return false;
    // Steam 883f40 / classic 8817c0 is the compact Announcements/Done
    // renderer. Its caller at b03540..b03555 supplies RCX(owner), EDX,
    // R8D and R9D; the complete body consumes no incoming stack arguments.
    // 884302..88430c selects entry::str or entry.parent->report::text.
    const unsigned char log_prologue[] = {
        0x48,0x89,0x5c,0x24,0x10,0x55,0x56,0x57,
        0x41,0x54,0x41,0x55,0x41,0x56,0x41,0x57};
    const unsigned char log_parent_text[] = {
        0x4c,0x39,0x4a,0x10,0x77,0x08,0x48,0x8b,0x52,0x20,0x48,0x83,0xc2,0x08};
    if (!native_pe_match(executable, 0x883f40, log_prologue, sizeof(log_prologue)) ||
        !native_pe_match(executable, 0x884302, log_parent_text, sizeof(log_parent_text))) return false;
    binding.log_entry = base + native_pe_rva(0x883f40);
    binding.log_prefix = {0x48,0x89,0x5c,0x24,0x10};
    if (!native_pe_bytes(0x883f40, binding.log_prefix)) return false;
#else
    ModuleBuildId module;
    dl_iterate_phdr(find_main_build_id, &module);
    if (!module.found || !native_validate_game()) {
        log_line("ERROR", "Unsupported native executable for announcement source capture");
        return false;
    }
    auto *base = reinterpret_cast<unsigned char *>(module.base);
    // DF 53.16 Steam ELF: (handler*, const string&, announcement_infost&).
    // 17ea0a5 reads int16 type from RDX; 17ea0b2 reads RSI string length;
    // 17ea25b..17ea26c copies the entire source to report::text at +8.
    // Keep ENDBR64 at the original indirect-call entry; relocate three PUSHes.
    const unsigned char type_read[] = {0x48,0x0f,0xbf,0x02,0x48,0x89,0xd5,0x66,0x3d,0x63,0x01};
    const auto type_va = native_reference_va(0x17ea0a5);
    const auto entry_va = native_reference_va(0x17ea074);
    const auto speech_va = native_reference_va(0x1031354);
    if (!type_va || !entry_va || !speech_va ||
        std::memcmp(base + type_va, type_read, sizeof(type_read)) != 0) return false;
    binding.entry = base + entry_va;
    binding.prefix = {0x41,0x57,0x41,0x56,0x41,0x55};
    // 1031350 mutates the single string& in RDI. Its two native searches
    // (1031362/103145e) use "S"/"s" before inserting the lisp spelling.
    // PUSH R15; MOV R8D,1 are complete position-independent instructions.
    binding.speech_entry = base + speech_va;
    binding.speech_prefix = {0x41,0x57,0x41,0xb8,0x01,0x00,0x00,0x00};
    // 1c2e136 draws the live adventure announcements owner with four
    // SysV register arguments. 1154881 selects entry.parent->report::text.
    const auto log_va = native_reference_va(0x1154220);
    const auto log_parent_va = native_reference_va(0x1154881);
    const unsigned char log_parent_text[] = {0x48,0x8b,0x76,0x20,0x48,0x83,0xc6,0x08};
    if (!log_va || !log_parent_va ||
        std::memcmp(base + log_parent_va, log_parent_text, sizeof(log_parent_text))) return false;
    binding.log_entry = base + log_va;
    binding.log_prefix = {0xf3,0x0f,0x1e,0xfa,0x41,0x57};
#endif
    return true;
}
