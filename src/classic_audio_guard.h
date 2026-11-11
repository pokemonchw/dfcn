#pragma once

#include <string>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstring>
#endif

namespace dfcn::audio {

// Classic 53.17 repeatedly submits absent optional banks to FMOD's synchronous
// worker. Preserve its normal missing-file result without entering that wait.
// This belongs to the resident loader: it must also work when the translation
// core cannot initialize, and it never supplies audio assets of its own.
class ClassicBankGuard {
public:
    using Report = void (*)(const char *, const std::string &);

#ifdef _WIN32
private:
    using LoadBankFn = int (*)(void *, const char *, unsigned int, void **);
    inline static std::atomic<LoadBankFn> original_{nullptr};
    inline static std::atomic_bool active_{false};
    inline static constexpr char symbol_[] =
        "?loadBankFile@System@Studio@FMOD@@QEAA?AW4FMOD_RESULT@@PEBDIPEAPEAVBank@23@@Z";
    LoadBankFn *slot_ = nullptr;
    Report report_ = nullptr;
    bool installed_ = false;
    bool protection_pending_ = false;
    DWORD original_protection_ = 0;

    static bool readable(const void *pointer, std::size_t bytes) noexcept {
        MEMORY_BASIC_INFORMATION region{};
        if (!pointer || !VirtualQuery(pointer, &region, sizeof(region)) ||
                region.State != MEM_COMMIT || (region.Protect & (PAGE_GUARD | PAGE_NOACCESS)))
            return false;
        const auto address = reinterpret_cast<std::uintptr_t>(pointer);
        const auto base = reinterpret_cast<std::uintptr_t>(region.BaseAddress);
        return address >= base && address - base < region.RegionSize &&
            bytes <= region.RegionSize - (address - base);
    }

    static LoadBankFn *find_import(bool &applicable) noexcept {
        applicable = false;
        auto *base = reinterpret_cast<unsigned char *>(GetModuleHandleW(nullptr));
        if (!readable(base, sizeof(IMAGE_DOS_HEADER))) return nullptr;
        const auto *dos = reinterpret_cast<const IMAGE_DOS_HEADER *>(base);
        if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew <= 0 ||
                dos->e_lfanew > 0x100000) return nullptr;
        const auto *nt = reinterpret_cast<const IMAGE_NT_HEADERS64 *>(base + dos->e_lfanew);
        if (!readable(nt, sizeof(*nt)) || nt->Signature != IMAGE_NT_SIGNATURE ||
                nt->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64 ||
                nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
                nt->FileHeader.TimeDateStamp != 0x6aea11a5 ||
                nt->OptionalHeader.SizeOfImage != 0x0272d000) return nullptr;
        applicable = true;
        if (nt->OptionalHeader.NumberOfRvaAndSizes <= IMAGE_DIRECTORY_ENTRY_IMPORT)
            return nullptr;
        const auto size = nt->OptionalHeader.SizeOfImage;
        const auto at = [&](DWORD rva, std::size_t bytes) -> unsigned char * {
            return rva < size && bytes <= size - rva && readable(base + rva, bytes)
                ? base + rva : nullptr;
        };
        const auto directory = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
        auto *imports = reinterpret_cast<const IMAGE_IMPORT_DESCRIPTOR *>(
            at(directory.VirtualAddress, directory.Size));
        if (!directory.VirtualAddress || !imports) return nullptr;
        for (std::size_t index = 0; index < directory.Size / sizeof(*imports); ++index) {
            const auto &entry = imports[index];
            if (!entry.Name) break;
            constexpr char library[] = "fmodstudio.dll";
            const auto *name = reinterpret_cast<const char *>(at(entry.Name, sizeof(library)));
            if (!name || _strnicmp(name, library, sizeof(library)) ||
                    !entry.OriginalFirstThunk || !entry.FirstThunk) continue;
            for (std::size_t item = 0; item < size / sizeof(IMAGE_THUNK_DATA64); ++item) {
                const auto offset = item * sizeof(IMAGE_THUNK_DATA64);
                if (entry.OriginalFirstThunk >= size || entry.FirstThunk >= size ||
                        offset > size - entry.OriginalFirstThunk ||
                        offset > size - entry.FirstThunk) break;
                const auto *named = reinterpret_cast<const IMAGE_THUNK_DATA64 *>(at(
                    entry.OriginalFirstThunk + static_cast<DWORD>(offset), sizeof(IMAGE_THUNK_DATA64)));
                auto *loaded = reinterpret_cast<IMAGE_THUNK_DATA64 *>(at(
                    entry.FirstThunk + static_cast<DWORD>(offset), sizeof(IMAGE_THUNK_DATA64)));
                if (!named || !loaded || !named->u1.AddressOfData) break;
                if (IMAGE_SNAP_BY_ORDINAL64(named->u1.Ordinal) || named->u1.AddressOfData > MAXDWORD)
                    continue;
                const auto *import_name = at(static_cast<DWORD>(named->u1.AddressOfData),
                    offsetof(IMAGE_IMPORT_BY_NAME, Name) + sizeof(symbol_));
                if (import_name && !std::memcmp(import_name + offsetof(IMAGE_IMPORT_BY_NAME, Name),
                        symbol_, sizeof(symbol_)))
                    return reinterpret_cast<LoadBankFn *>(&loaded->u1.Function);
            }
        }
        return nullptr;
    }

    static bool known_path(const char *filename) noexcept {
        constexpr const char *paths[]{
            "data/sound/audio/banks/Desktop/Master.bank",
            "data/sound/audio/banks/Desktop/Master.strings.bank",
            "data/sound/audio/banks/Desktop/ambiance.bank",
            "data/sound/audio/banks/Desktop/cards.bank",
            "data/sound/audio/banks/Desktop/SFX.bank",
            "data/sound/audio/banks/Desktop/user-interface.bank",
            "data/sound/audio/banks/Desktop/songs.bank",
        };
        for (const auto *path : paths)
            if (!std::strcmp(filename, path)) return true;
        return false;
    }

    static int load_bank(void *system, const char *filename, unsigned int flags, void **bank) noexcept {
        const auto original = original_.load(std::memory_order_acquire);
        // original_ is published before the IAT pointer and retained forever.
        const DWORD incoming_error = GetLastError();
        if (active_.load(std::memory_order_acquire) && system && filename && bank &&
                flags == 0 && known_path(filename)) {
            const DWORD attributes = GetFileAttributesA(filename);
            const DWORD error = GetLastError();
            if (attributes == INVALID_FILE_ATTRIBUTES &&
                    (error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND)) {
                *bank = nullptr;
                SetLastError(incoming_error);
                return 18; // FMOD_ERR_FILE_NOTFOUND, matching FMOD's native failure.
            }
        }
        SetLastError(incoming_error);
        return original(system, filename, flags, bank);
    }

    void report(const char *message) const noexcept {
        if (!report_) return;
        try {
            report_("WARN", std::string("Classic audio guard: ") + message);
        } catch (...) {}
    }

    bool write(bool install) noexcept {
        if (!slot_ || (!install && !installed_ && !protection_pending_)) return !install;
        DWORD previous = 0;
        if (!VirtualProtect(slot_, sizeof(*slot_), PAGE_READWRITE, &previous)) {
            report("cannot make the FMOD import writable");
            return false;
        }
        if (!protection_pending_) original_protection_ = previous;
        protection_pending_ = true;
        const auto original = original_.load(std::memory_order_acquire);
        const LoadBankFn wrapper = &load_bank;
        const auto desired = install ? wrapper : original;
        auto expected = install ? original : wrapper;
        const bool changed = std::atomic_ref<LoadBankFn>(*slot_).compare_exchange_strong(
            expected, desired, std::memory_order_acq_rel);
        const bool owned = changed || expected == desired;
        if (owned) installed_ = install;
        DWORD ignored = 0;
        const bool restored = VirtualProtect(slot_, sizeof(*slot_), original_protection_, &ignored);
        if (restored) protection_pending_ = false;
        if (!owned) report("the FMOD import ownership changed");
        if (!restored) report("cannot restore the FMOD import protection");
        return owned && restored;
    }

public:
    bool initialize(Report reporter) noexcept {
        report_ = reporter;
        if (!slot_) {
            bool applicable = false;
            auto *slot = find_import(applicable);
            if (!applicable) return true;
            const auto fmod = GetModuleHandleW(L"fmodstudio.dll");
            const auto original = fmod ? reinterpret_cast<LoadBankFn>(GetProcAddress(fmod, symbol_)) : nullptr;
            if (!slot || !original || reinterpret_cast<std::uintptr_t>(slot) %
                    std::atomic_ref<LoadBankFn>::required_alignment ||
                    std::atomic_ref<LoadBankFn>(*slot).load(std::memory_order_acquire) != original) {
                report("the original FMOD bank import is unavailable");
                return false;
            }
            // A caller can retain the wrapper address before entering it.
            // Pinning also covers that gap during shutdown/initialization rollback.
            HMODULE resident = nullptr;
            if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_PIN,
                    reinterpret_cast<LPCWSTR>(&load_bank), &resident)) {
                report("cannot retain the resident callback image");
                return false;
            }
            original_.store(original, std::memory_order_release);
            slot_ = slot;
        }
        active_.store(true, std::memory_order_release);
        if (write(true)) return true;
        active_.store(false, std::memory_order_release);
        write(false);
        return false;
    }

    bool shutdown() noexcept {
        active_.store(false, std::memory_order_release);
        // Keep forwarding fields alive even if a third party owns the slot or
        // a callback fetched before detachment has not entered the wrapper yet.
        return write(false);
    }
#else
    bool initialize(Report) noexcept { return true; }
    bool shutdown() noexcept { return true; }
#endif
};

} // namespace dfcn::audio
