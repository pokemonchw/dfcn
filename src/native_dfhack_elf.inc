#ifndef _WIN32
// Official DFHack 53.17-r1 ELF: exported API boundaries and SysV link ABI.
// References are analyzed on disk; this adapter never loads an absent plugin.
static void *native_dfhack_elf_module() noexcept {
    static std::atomic<void *> module{nullptr};
    if (auto *loaded = module.load(std::memory_order_acquire)) return loaded;
    auto *entry = dlsym(RTLD_DEFAULT, "_ZN6DFHack4Core15active_instanceE");
    Dl_info image{};
    if (!entry || !dladdr(entry, &image) || !image.dli_fname) return nullptr;
    struct ImageIdentity { uintptr_t base; ModuleBuildId build; } identity{
        reinterpret_cast<uintptr_t>(image.dli_fbase), {}};
    dl_iterate_phdr([](dl_phdr_info *info, size_t, void *opaque) {
        auto &value = *static_cast<ImageIdentity *>(opaque);
        return info->dlpi_addr == value.base ? read_module_build_id(info, &value.build) : 0;
    }, &identity);
    if (!identity.build.found ||
            identity.build.value != "1a509e396567ba10150db6aeeb20bc1c73aeaa77") return nullptr;
    auto *loaded = dlopen(image.dli_fname, RTLD_NOW | RTLD_NOLOAD);
    if (!loaded) return nullptr;
    void *expected = nullptr;
    if (!module.compare_exchange_strong(expected, loaded, std::memory_order_release)) {
        dlclose(loaded);
        return expected;
    }
    return loaded;
}

static bool native_dfhack_elf_entry(NativeEntryHook &hook, void *module,
        const char *symbol, const void *callback, const char *label) {
    if (hook.installed) return true;
    auto *entry = static_cast<unsigned char *>(dlsym(module, symbol));
    std::array<unsigned char, 6> bytes{};
    if (!entry || !native_history_copy(reinterpret_cast<uintptr_t>(entry), bytes) ||
            std::memcmp(bytes.data(), "\xf3\x0f\x1e\xfa", 4)) return false;
    size_t count = bytes[4] >= 0x50 && bytes[4] <= 0x57 ? 5 :
        bytes[4] == 0x41 && bytes[5] >= 0x50 && bytes[5] <= 0x57 ? 6 : 0;
    std::vector<unsigned char> prefix;
    std::vector<NativeRelativeFixup> fixups;
    if (count) prefix.assign(bytes.begin(), bytes.begin() + count);
    else {
        std::array<unsigned char, 11> extended{};
        if (!native_history_copy(reinterpret_cast<uintptr_t>(entry), extended)) return false;
        if (extended[4] == 0x48 && extended[5] == 0x83 && extended[6] == 0xec) count = 8;
        else if (extended[4] == 0x48 && extended[5] == 0x8b && (extended[6] & 0xc7) == 5) {
            count = 11;
            int32_t relative = 0;
            std::memcpy(&relative, extended.data() + 7, 4);
            fixups.push_back({7,11,reinterpret_cast<uintptr_t>(entry + 11 + relative)});
        }
        prefix.assign(extended.begin(), extended.begin() + count);
    }
    return count && (hook.original || hook.prepare(entry, prefix, callback, fixups, label)) && hook.install(label);
}

static bool native_dfhack_register_elf_relay(unsigned char *memory,
        size_t code_size, size_t restored, size_t allocation, const char *label) {
    using Register = void (*)(void *);
    const auto register_frame = reinterpret_cast<Register>(dlsym(RTLD_DEFAULT, "__register_frame"));
    if (!register_frame || restored < 8 || restored - 8 > 255) return false;
    // Process-owned .eh_frame permits exceptions from native render methods
    // to cross the resident relay after this reloadable core has detached.
    auto *frame = memory + 0x100;
    std::vector<unsigned char> bytes(4, 0);
    const auto word = [&](uint32_t value) {
        const auto *data = reinterpret_cast<const unsigned char *>(&value);
        bytes.insert(bytes.end(), data, data + 4);
    };
    word(0);
    const unsigned char cie[]{1,'z','R',0,1,0x78,16,1,0x1b,0x0c,7,8,0x90,1};
    bytes.insert(bytes.end(), std::begin(cie), std::end(cie));
    while (bytes.size() % 4) bytes.push_back(0);
    const uint32_t cie_size = bytes.size() - 4;
    std::memcpy(bytes.data(), &cie_size, 4);
    const size_t fde = bytes.size();
    word(0); word(static_cast<uint32_t>(fde + 4));
    const int64_t relative = reinterpret_cast<intptr_t>(memory) -
        reinterpret_cast<intptr_t>(frame + bytes.size());
    if (relative < INT32_MIN || relative > INT32_MAX) return false;
    word(static_cast<uint32_t>(relative)); word(static_cast<uint32_t>(code_size));
    bytes.insert(bytes.end(), {0,0x48,0x0e,16,0x02,
        static_cast<unsigned char>(restored - 8),0x0e,8});
    while (bytes.size() % 4) bytes.push_back(0);
    const uint32_t fde_size = bytes.size() - fde - 4;
    std::memcpy(bytes.data() + fde, &fde_size, 4);
    word(0);
    std::memcpy(frame, bytes.data(), bytes.size());
    if (!seal_native_relay(memory, allocation, label)) return false;
    register_frame(frame);
    return true;
}
#endif
