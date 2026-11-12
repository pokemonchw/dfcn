// Paragraph entry descriptors. Capture and installation are shared.
#ifdef _WIN32
// PE entry/ABI discovery only. Relocation and lifecycle use NativeEntryHook.
static bool resolve_native_paragraph_binding(NativeParagraphBinding &binding) {
    auto *base = reinterpret_cast<unsigned char *>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return false;
    constexpr uintptr_t entry_rva = 0x008e7310;
    std::vector<unsigned char> prefix{0x45, 0x85, 0xc0, 0x0f, 0x8e, 0x17, 0x01, 0x00, 0x00};
    const std::array<unsigned char, 9> string_fields{{0x4c, 0x8b, 0x43, 0x10, 0x48, 0x83, 0x7b, 0x18, 0x0f}};
    const std::array<unsigned char, 18> append_fields{{
        0x49, 0x8b, 0x57, 0x08, 0x49, 0x3b, 0x57, 0x10, 0x74, 0x0a,
        0x48, 0x89, 0x1a, 0x49, 0x83, 0x47, 0x08, 0x08}};
    if (!native_pe_bytes(entry_rva, prefix) ||
        std::memcmp(base + native_pe_rva(entry_rva), prefix.data(), prefix.size()) != 0 ||
        !native_pe_match(reinterpret_cast<uintptr_t>(base), 0x8e736d,
            string_fields.data(), string_fields.size()) ||
        !native_pe_match(reinterpret_cast<uintptr_t>(base), 0x8e75f7,
            append_fields.data(), append_fields.size())) {
        log_line("ERROR", "Native paragraph entry/row ABI validation failed");
        return false;
    }
    binding.entry = base + native_pe_rva(entry_rva);
    binding.prefix = prefix;
    // test r8d,r8d; jle 0x8e7430. Preserve the complete conditional branch.
    binding.fixups = {{5, 9, native_pe_address(reinterpret_cast<uintptr_t>(base), 0x8e7430)}};
    return true;
}
static bool resolve_native_paragraph_vector_binding(NativeParagraphBinding &binding) {
    auto *base = reinterpret_cast<unsigned char *>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return false;
    constexpr uintptr_t entry_rva = 0x008e7440;
    std::vector<unsigned char> prefix{0x45, 0x85, 0xc0, 0x0f, 0x8e, 0xcc, 0x02, 0x00, 0x00};
    const std::array<unsigned char, 14> vector_fields{{
        0x48, 0x8b, 0x12, 0x49, 0x8b, 0x45, 0x08, 0x48, 0x2b, 0xc2,
        0x48, 0xc1, 0xf8, 0x03}};
    const std::array<unsigned char, 14> string_fields{{
        0x4a, 0x8b, 0x14, 0x22, 0x48, 0x83, 0x7a, 0x18, 0x0f, 0x76,
        0x03, 0x48, 0x8b, 0x12}};
    const std::array<unsigned char, 18> append_fields{{
        0x49, 0x8b, 0x57, 0x08, 0x49, 0x3b, 0x57, 0x10, 0x74, 0x0a,
        0x48, 0x89, 0x1a, 0x49, 0x83, 0x47, 0x08, 0x08}};
    if (!native_pe_bytes(entry_rva, prefix) ||
        std::memcmp(base + native_pe_rva(entry_rva), prefix.data(), prefix.size()) != 0 ||
        !native_pe_match(reinterpret_cast<uintptr_t>(base), 0x8e7499,
            vector_fields.data(), vector_fields.size()) ||
        !native_pe_match(reinterpret_cast<uintptr_t>(base), 0x8e74e4,
            string_fields.data(), string_fields.size()) ||
        !native_pe_match(reinterpret_cast<uintptr_t>(base), 0x8e76c8,
            append_fields.data(), append_fields.size())) {
        log_line("ERROR", "Native paragraph vector entry/row ABI validation failed");
        return false;
    }
    binding.entry = base + native_pe_rva(entry_rva);
    binding.prefix = prefix;
    // The same edition mapping resolves Classic 0x8e4cb0 and its return.
    binding.fixups = {{5, 9, native_pe_address(reinterpret_cast<uintptr_t>(base), 0x8e7715)}};
    return true;
}
#else
// ELF import discovery only. Binding and lifecycle use NativeImportHook.
static bool resolve_native_paragraph_binding(NativeParagraphBinding &binding) {
    static constexpr const char *symbol =
        "_ZN17curses_text_boxst13add_paragraphERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi";
    PatchSearch search{symbol};
    dl_iterate_phdr(find_main_import_slot, &search);
    binding.import_slot = search.slot;
    binding.original = dlsym(RTLD_DEFAULT, symbol);
    if (!binding.import_slot || !binding.original) {
        log_line("ERROR", "Cannot resolve native paragraph import");
        return false;
    }
    return true;
}
static bool resolve_native_paragraph_vector_binding(NativeParagraphBinding &binding) {
    constexpr const char *symbol = "_ZN17curses_text_boxst13add_paragraphER12stringvectsti";
    binding.entry = reinterpret_cast<unsigned char *>(dlsym(RTLD_DEFAULT, symbol));
    const std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    if (!binding.entry || std::memcmp(binding.entry, prefix.data(), prefix.size())) return false;
    binding.prefix = prefix;
    return true;
}
#endif
