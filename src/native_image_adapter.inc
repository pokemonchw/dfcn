#ifdef _WIN32
static void **find_iat_slot(HMODULE module, const char *library_name,
                            const char *symbol_name) {
    if (!module) return nullptr;
    auto *base = reinterpret_cast<unsigned char *>(module);
    auto *dos = reinterpret_cast<IMAGE_DOS_HEADER *>(base);
    if (dos->e_magic != IMAGE_DOS_SIGNATURE) return nullptr;
    auto *nt = reinterpret_cast<IMAGE_NT_HEADERS64 *>(base + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE ||
        nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC) {
        return nullptr;
    }
    const auto &directory =
        nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
    if (!directory.VirtualAddress || !directory.Size) return nullptr;
    auto *descriptor = reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR *>(
        base + directory.VirtualAddress);
    for (; descriptor->Name; ++descriptor) {
        const char *name = reinterpret_cast<const char *>(base + descriptor->Name);
        if (_stricmp(name, library_name) != 0) continue;
        if (!descriptor->OriginalFirstThunk || !descriptor->FirstThunk) return nullptr;
        auto *original = reinterpret_cast<IMAGE_THUNK_DATA64 *>(
            base + descriptor->OriginalFirstThunk);
        auto *loaded = reinterpret_cast<IMAGE_THUNK_DATA64 *>(
            base + descriptor->FirstThunk);
        for (; original->u1.AddressOfData; ++original, ++loaded) {
            if (IMAGE_SNAP_BY_ORDINAL64(original->u1.Ordinal)) continue;
            auto *by_name = reinterpret_cast<IMAGE_IMPORT_BY_NAME *>(
                base + original->u1.AddressOfData);
            if (std::strcmp(reinterpret_cast<const char *>(by_name->Name),
                            symbol_name) == 0) {
                return reinterpret_cast<void **>(&loaded->u1.Function);
            }
        }
    }
    return nullptr;
}

static bool validate_indirect_call(uintptr_t return_address, void **expected_slot) {
    if (!return_address || !expected_slot) return false;
    const auto *call = reinterpret_cast<const unsigned char *>(return_address - 6);
    if (call[0] != 0xff || call[1] != 0x15) return false;
    std::int32_t displacement = 0;
    std::memcpy(&displacement, call + 2, sizeof(displacement));
    return return_address + displacement == reinterpret_cast<uintptr_t>(expected_slot);
}

static bool native_validate_game() {
    const auto &binding = pe_runtime::state();
    static const bool reported = [&binding] {
        log_line(binding.complete ? "INFO" : pe_runtime::usable(binding) ? "WARN" : "ERROR", binding.message);
        return true;
    }();
    (void)reported;
    const auto *base = reinterpret_cast<const unsigned char *>(GetModuleHandleW(nullptr));
    if (!base) return false;
    const auto *dos = reinterpret_cast<const IMAGE_DOS_HEADER *>(base);
    if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew <= 0) return false;
    const auto *nt = reinterpret_cast<const IMAGE_NT_HEADERS64 *>(base + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE || nt->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64 ||
        nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
        !native_pe_supported()) {
        log_line("ERROR", "Unsupported native game build; refusing graphics/texture ABI access");
        return false;
    }
    return true;
}

#else
static uintptr_t normalize_dynamic_pointer(uintptr_t base, uintptr_t ptr) {
    // glibc normally relocates DT_* pointer values in the in-memory dynamic
    // table. The fallback handles loaders that leave them module-relative.
    return ptr >= base ? ptr : base + ptr;
}

struct PatchSearch {
    const char *symbol = nullptr;
    void **slot = nullptr;
};

struct ModuleBuildId {
    bool found = false;
    std::string value;
    uintptr_t base = 0;
};

static size_t align_note(size_t value) {
    return (value + 3u) & ~size_t(3u);
}

static int read_module_build_id(dl_phdr_info *info, ModuleBuildId *result) {
    result->found = true;
    result->base = info->dlpi_addr;
    const uintptr_t base = info->dlpi_addr;
    for (ElfW(Half) i = 0; i < info->dlpi_phnum; ++i) {
        const ElfW(Phdr) &ph = info->dlpi_phdr[i];
        if (ph.p_type != PT_NOTE) continue;
        const unsigned char *cursor = reinterpret_cast<const unsigned char *>(base + ph.p_vaddr);
        const unsigned char *end = cursor + ph.p_memsz;
        while (cursor + sizeof(ElfW(Nhdr)) <= end) {
            const auto *note = reinterpret_cast<const ElfW(Nhdr) *>(cursor);
            cursor += sizeof(ElfW(Nhdr));
            const size_t name_size = align_note(note->n_namesz);
            const size_t desc_size = align_note(note->n_descsz);
            if (cursor + name_size + desc_size > end) break;
            const char *note_name = reinterpret_cast<const char *>(cursor);
            const unsigned char *description = cursor + name_size;
            if (note->n_type == NT_GNU_BUILD_ID && note->n_namesz >= 3 &&
                std::memcmp(note_name, "GNU", 3) == 0) {
                static constexpr char hex[] = "0123456789abcdef";
                result->value.reserve(note->n_descsz * 2);
                for (size_t j = 0; j < note->n_descsz; ++j) {
                    result->value.push_back(hex[description[j] >> 4]);
                    result->value.push_back(hex[description[j] & 0x0f]);
                }
                return 1;
            }
            cursor += name_size + desc_size;
        }
    }
    return 1;
}

static int find_game_build_id(dl_phdr_info *info, size_t, void *opaque) {
    const char *name = info->dlpi_name ? info->dlpi_name : "";
    const char *base_name = std::strrchr(name, '/');
    base_name = base_name ? base_name + 1 : name;
    if (std::strcmp(base_name, "libg_src_lib.so") != 0) return 0;
    return read_module_build_id(
        info, static_cast<ModuleBuildId *>(opaque));
}

static int find_main_build_id(dl_phdr_info *info, size_t, void *opaque) {
    const char *name = info->dlpi_name ? info->dlpi_name : "";
    const char *base_name = std::strrchr(name, '/');
    base_name = base_name ? base_name + 1 : name;
    // glibc normally reports an empty dlpi_name for the main ET_EXEC image.
    // Accept its installed filename as well so alternate launchers do not
    // change how the verified executable is found.
    if (*base_name != '\0' && std::strcmp(base_name, "dwarfort") != 0)
        return 0;
    return read_module_build_id(
        info, static_cast<ModuleBuildId *>(opaque));
}

static int find_module_import_slot(dl_phdr_info *info, void *opaque, const char *module_name) {
    const char *name = info->dlpi_name ? info->dlpi_name : "";
    const char *base_name = std::strrchr(name, '/');
    base_name = base_name ? base_name + 1 : name;
    if (module_name ? std::strcmp(base_name, module_name) != 0 :
        (*base_name != '\0' && std::strcmp(base_name, "dwarfort") != 0)) return 0;

    const uintptr_t base = info->dlpi_addr;
    const ElfW(Dyn) *dynamic = nullptr;
    int dynamic_count = 0;
    for (ElfW(Half) i = 0; i < info->dlpi_phnum; ++i) {
        const ElfW(Phdr) &ph = info->dlpi_phdr[i];
        if (ph.p_type != PT_DYNAMIC) continue;
        dynamic = reinterpret_cast<const ElfW(Dyn) *>(base + ph.p_vaddr);
        dynamic_count = static_cast<int>(ph.p_memsz / sizeof(ElfW(Dyn)));
        break;
    }
    if (!dynamic) return 0;

    const char *strtab = nullptr;
    const ElfW(Sym) *symtab = nullptr;
    const ElfW(Rela) *rela = nullptr;
    size_t rela_size = 0;
    int plt_rela_type = DT_RELA;
    for (int i = 0; i < dynamic_count && dynamic[i].d_tag != DT_NULL; ++i) {
        switch (dynamic[i].d_tag) {
        case DT_STRTAB:
            strtab = reinterpret_cast<const char *>(
                normalize_dynamic_pointer(base, dynamic[i].d_un.d_ptr));
            break;
        case DT_SYMTAB:
            symtab = reinterpret_cast<const ElfW(Sym) *>(
                normalize_dynamic_pointer(base, dynamic[i].d_un.d_ptr));
            break;
        case DT_JMPREL:
            rela = reinterpret_cast<const ElfW(Rela) *>(
                normalize_dynamic_pointer(base, dynamic[i].d_un.d_ptr));
            break;
        case DT_PLTRELSZ: rela_size = dynamic[i].d_un.d_val; break;
        case DT_PLTREL: plt_rela_type = dynamic[i].d_un.d_val; break;
        default: break;
        }
    }
    if (!strtab || !symtab || !rela || !rela_size ||
        plt_rela_type != DT_RELA) {
        return 0;
    }
    const size_t count = rela_size / sizeof(ElfW(Rela));
    for (size_t i = 0; i < count; ++i) {
        const size_t symbol_index = ELF64_R_SYM(rela[i].r_info);
        const char *symbol_name = strtab + symtab[symbol_index].st_name;
        auto *search = static_cast<PatchSearch *>(opaque);
        if (!search->symbol ||
            std::strcmp(symbol_name, search->symbol) != 0) {
            continue;
        }
        search->slot = reinterpret_cast<void **>(base + rela[i].r_offset);
        return 1;
    }
    return 0;
}

static int find_main_import_slot(dl_phdr_info *info, size_t, void *opaque) {
    return find_module_import_slot(info, opaque, nullptr);
}
static int find_present_slot(dl_phdr_info *info, size_t, void *opaque) {
    return find_module_import_slot(info, opaque, "libg_src_lib.so");
}

static bool native_validate_game() {
    const auto &binding = elf_runtime::state();
    static const bool reported = [&binding] {
        log_line(binding.complete ? "INFO" : "ERROR", binding.message);
        return true;
    }();
    (void)reported;
    return binding.complete;
}

#endif

#include "native_reference_binding.inc"
