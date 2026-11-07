// Native entry discovery only; editing, search and hook lifetimes are shared.
#ifdef _WIN32
static bool prepare_native_arena_input_profile(uintptr_t base, NativeArenaContext &arena) {
    static constexpr std::array<unsigned char, 5> filter_prefix{{0x48, 0x89, 0x5c, 0x24, 0x10}};
    static constexpr std::array<unsigned char, 7> picker_reference{{0x48, 0x8d, 0x1d, 0xb1, 0xe1, 0xfe, 0x00}};
    if (!native_pe_match(base, 0x000f7ec0, filter_prefix.data(), filter_prefix.size()) ||
        !native_pe_match(base, 0x008b9f70, picker_reference.data(), picker_reference.size())) return false;
    NativeArenaContext candidate{
        reinterpret_cast<unsigned char *>(native_pe_address(base, 0x018a8110)),
        reinterpret_cast<unsigned char *>(native_pe_address(base, 0x024eca68)),
        reinterpret_cast<NativeArenaFilterFn>(native_pe_address(base, 0x000f7ec0))};
    if (!native_arena_context_available(candidate)) return false;
    arena = candidate;
    return true;
}

static bool prepare_native_input_profile(NativeInputProfile &profile) {
    const HMODULE module = GetModuleHandleW(nullptr);
    const uintptr_t base = reinterpret_cast<uintptr_t>(module);
    if (!base || !native_pe_supported()) return false;
    profile.entry = reinterpret_cast<unsigned char *>(native_pe_address(base, 0x00c39700));
    profile.prefix = {0x40, 0x53, 0x56, 0x57, 0x41, 0x56};
    if (!profile.entry || !native_pe_bytes(0x00c39700, profile.prefix)) return false;
    static constexpr unsigned char ui_text_call[]{0xe8, 0x5b, 0x0c, 0x00, 0x00, 0x84, 0xc0};
    if (!native_pe_match(base, 0x00c38aa0, ui_text_call, sizeof(ui_text_call))) return false;
    profile.ui_text_input_return = reinterpret_cast<const void *>(native_pe_address(base, 0x00c38aa5));
    if (!profile.ui_text_input_return) return false;
    void **start = find_iat_slot(module, "SDL2.dll", "SDL_StartTextInput");
    if (!start) return false;
    profile.start_slots.push_back(start);
    // The shared editor and IME own their own entry/import contracts. Arena
    // search may bind only after its separate code and complete layout proof.
    profile.arena = {};
    try { (void)prepare_native_arena_input_profile(base, profile.arena); }
    catch (...) { profile.arena = {}; }
    return true;
}
#else
struct NativeElfArenaImage {
    struct Region { uintptr_t begin, end; };
    std::vector<Region> code, data;
};
static int find_elf_arena_regions(dl_phdr_info *info, size_t, void *opaque) {
    const char *name = info->dlpi_name ? info->dlpi_name : "";
    const char *filename = std::strrchr(name, '/');
    filename = filename ? filename + 1 : name;
    if (*filename && std::strcmp(filename, "dwarfort") != 0) return 0;
    auto &image = *static_cast<NativeElfArenaImage *>(opaque);
    for (ElfW(Half) i = 0; i < info->dlpi_phnum; ++i) {
        const auto &segment = info->dlpi_phdr[i];
        if (segment.p_type != PT_LOAD || !(segment.p_flags & PF_R)) continue;
        const uintptr_t begin = info->dlpi_addr + segment.p_vaddr;
        if (segment.p_flags & PF_X) image.code.push_back({begin, begin + segment.p_memsz});
        if (segment.p_flags & PF_W) image.data.push_back({begin, begin + segment.p_memsz});
    }
    return 1;
}
static bool elf_arena_contains(const std::vector<NativeElfArenaImage::Region> &regions,
        uintptr_t address, size_t length) {
    for (const auto &region : regions)
        if (address >= region.begin && address <= region.end && length <= region.end - address) return true;
    return false;
}
static uintptr_t elf_arena_relative(uintptr_t instruction, size_t displacement_offset, size_t length) {
    int32_t displacement = 0;
    std::memcpy(&displacement, reinterpret_cast<const void *>(instruction + displacement_offset), 4);
    return instruction + length + displacement;
}
static bool locate_native_arena_profile(NativeArenaContext &context) {
    ModuleBuildId module;
    dl_iterate_phdr(find_main_build_id, &module);
    if (!module.found || !elf_runtime::supported()) return false;
    NativeElfArenaImage image;
    dl_iterate_phdr(find_elf_arena_regions, &image);
    // Verified 53.16 filter semantics: copy both complete int16 ID vectors,
    // clear the selection, then filter by the query at picker + 0x18.
    // Resolve relocations instead of sharing absolute addresses across builds.
    // Official 84ba image: filter 0x14b0000, name builder 0x12ae840,
    // picker reference 0x138de0f -> 0x26f6fc0, raws 0x2818630.
    static constexpr unsigned char filter_prefix[] = {
        0xf3,0x0f,0x1e,0xfa,0x41,0x57,0x48,0x8d,0x77,0x68,0x41,0x56,0x41,0x55,0x41,0x54,
        0x55,0x53,0x48,0x89,0xfb,0x48,0x81,0xec,0xa8,0,0,0,0x64,0x48,0x8b,0x04,0x25,0x28,0,0,0,
        0x48,0x89,0x84,0x24,0x98,0,0,0,0x31,0xc0,0xc6,0x87,0x9c,0,0,0,0,
        0x48,0x8d,0x47,0x38,0xc7,0x87,0x98,0,0,0,0,0,0,0,0x48,0x89,0xc7,0x48,0x89,0x44,0x24,0x40};
    uintptr_t filter = 0;
    for (const auto &region : image.code) {
        const auto *begin = reinterpret_cast<const unsigned char *>(region.begin);
        const auto *end = reinterpret_cast<const unsigned char *>(region.end);
        const auto *found = std::search(begin, end, std::begin(filter_prefix), std::end(filter_prefix));
        if (found == end) continue;
        if (filter || std::search(found + 1, end, std::begin(filter_prefix), std::end(filter_prefix)) != end) return false;
        filter = reinterpret_cast<uintptr_t>(found);
    }
    if (!filter || !elf_arena_contains(image.code, filter, 0x143)) return false;
    static constexpr unsigned char second_copy[] = {0x48,0x8d,0x43,0x50,0x48,0x8d,0xb3,0x80,0,0,0};
    static constexpr unsigned char name_call[] = {0x0f,0xbf,0x3c,0x28,0x48,0x89,0x4c,0x24,0x70,0x0f,0xbf,0x0c,0x2a,0x31,0xd2,0xe8};
    if (std::memcmp(reinterpret_cast<const void *>(filter + 0x51), second_copy, sizeof(second_copy)) ||
        std::memcmp(reinterpret_cast<const void *>(filter + 0x12f), name_call, sizeof(name_call))) return false;
    const uintptr_t name_function = elf_arena_relative(filter + 0x13e, 1, 5);
    if (!elf_arena_contains(image.code, name_function, 0x135)) return false;
    static constexpr unsigned char name_prefix[] = {0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xf5,0x53,0x48,0x83,0xec,8,
        0x48,0x8b,6,0x48,0xc7,0x46,8,0,0,0,0,0xc6,0,0,0x66,0x83,0xf9,0xff};
    static constexpr unsigned char caste_layout[] = {0x48,0x8b,0xb0,0x78,1,0,0,0x48,0x8b,0x80,0x80,1,0,0};
    if (std::memcmp(reinterpret_cast<const void *>(name_function), name_prefix, sizeof(name_prefix)) ||
        std::memcmp(reinterpret_cast<const void *>(name_function + 0xdc), caste_layout, sizeof(caste_layout)) ||
        std::memcmp(reinterpret_cast<const void *>(name_function + 0xad), "\x48\x8b\x15", 3)) return false;
    const uintptr_t raws = elf_arena_relative(name_function + 0xad, 3, 7);
    if (!elf_arena_contains(image.data, raws, sizeof(NativeBorrowedVector<unsigned char *>))) return false;
    // This native input branch clears handled keys, loads the picker in RDI,
    // and calls the verified filter. The other max-35 picker has a different
    // element layout and cannot satisfy the filter checks above.
    static constexpr unsigned char picker_suffix[] = {0x48,0xc7,0x45,0x28,0,0,0,0,0x48,0x89,0x45,0x18,0x48,0x89,0x45,0x20,0xe8};
    uintptr_t picker = 0;
    for (const auto &region : image.code) {
        for (uintptr_t p = region.begin; p + 28 <= region.end; ++p) {
            if (std::memcmp(reinterpret_cast<const void *>(p), "\x48\x8d\x3d", 3) ||
                std::memcmp(reinterpret_cast<const void *>(p + 7), picker_suffix, sizeof(picker_suffix)) ||
                elf_arena_relative(p + 23, 1, 5) != filter) continue;
            const uintptr_t candidate = elf_arena_relative(p, 3, 7);
            if (picker || !elf_arena_contains(image.data, candidate, 0xa0)) return false;
            picker = candidate;
        }
    }
    if (!picker) return false;
    context = {reinterpret_cast<unsigned char *>(picker), reinterpret_cast<const void *>(raws),
        reinterpret_cast<NativeArenaFilterFn>(filter)};
    return true;
}


static bool prepare_native_input_profile(NativeInputProfile &profile) {
    static constexpr const char *symbol =
        "_Z19standardstringentryRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEijRSt3setIlSt4lessIlESaIlEEPKc";
    PatchSearch library{symbol}, main{symbol};
    dl_iterate_phdr(find_present_slot, &library);
    dl_iterate_phdr(find_main_import_slot, &main);
    profile.original = reinterpret_cast<NativeTextInputFn>(dlsym(RTLD_DEFAULT, symbol));
    if (!library.slot || !profile.original) return false;
    // The library's four-argument overload calls its five-argument export
    // through this import. Include a direct main import when it exists.
    profile.text_slots.push_back(library.slot);
    if (main.slot && main.slot != library.slot) profile.text_slots.push_back(main.slot);
    PatchSearch library_start{"SDL_StartTextInput"}, main_start{"SDL_StartTextInput"};
    dl_iterate_phdr(find_present_slot, &library_start);
    dl_iterate_phdr(find_main_import_slot, &main_start);
    if (library_start.slot) profile.start_slots.push_back(library_start.slot);
    if (main_start.slot && main_start.slot != library_start.slot) profile.start_slots.push_back(main_start.slot);
    // Some SDL backends start input without a game-owned import. The common
    // text-entry callback also refreshes the SDL input rectangle on every edit.
    NativeArenaContext arena;
    profile.arena = {};
    try {
        if (locate_native_arena_profile(arena) && native_arena_context_available(arena)) profile.arena = arena;
    } catch (...) { profile.arena = {}; }
    return true;
}
#endif
