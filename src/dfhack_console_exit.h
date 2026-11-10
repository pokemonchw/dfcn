#pragma once

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <mutex>
#include <string>

namespace dfcn::dfhack {

// Older DFHack consoles need their pending input cancelled before FreeConsole.
// Consoles with a native wakeup must publish it before joining the reader.
class ConsoleExit {
public:
    using Report = void (*)(const char *, const std::string &);

private:
    using ReadFn = BOOL (WINAPI *)(HANDLE, PINPUT_RECORD, DWORD, LPDWORD);
    using CancelFn = BOOL (WINAPI *)(HANDLE);
    struct Reader {
        HANDLE thread = nullptr;
        Reader *next = nullptr;
    };
    inline static std::atomic<ConsoleExit *> instance_{nullptr};
    ReadFn original_ = nullptr;
    ReadFn *slot_ = nullptr;
    CancelFn cancel_ = nullptr;
    void **core_slot_ = nullptr;
    Report report_ = nullptr;
    bool installed_ = false, protection_pending_ = false;
    bool native_shutdown_wakes_reader_ = false;
    DWORD original_protection_ = 0;
    std::atomic_bool exiting_{false};
    std::mutex mutex_;
    std::condition_variable returned_;
    Reader *readers_ = nullptr;

    static bool readable(const void *pointer, size_t bytes) noexcept {
        MEMORY_BASIC_INFORMATION region{};
        if (!pointer || !VirtualQuery(pointer, &region, sizeof(region)) ||
                region.State != MEM_COMMIT || (region.Protect & (PAGE_GUARD | PAGE_NOACCESS))) return false;
        const auto address = reinterpret_cast<uintptr_t>(pointer);
        const auto base = reinterpret_cast<uintptr_t>(region.BaseAddress);
        return address >= base && address - base < region.RegionSize &&
            bytes <= region.RegionSize - (address - base);
    }

    static ReadFn *find_import(HMODULE module) noexcept {
        auto *base = reinterpret_cast<unsigned char *>(module);
        if (!readable(base, sizeof(IMAGE_DOS_HEADER))) return nullptr;
        auto *dos = reinterpret_cast<const IMAGE_DOS_HEADER *>(base);
        if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew <= 0 || dos->e_lfanew > 0x100000)
            return nullptr;
        auto *nt = reinterpret_cast<const IMAGE_NT_HEADERS64 *>(base + dos->e_lfanew);
        if (!readable(nt, sizeof(*nt)) || nt->Signature != IMAGE_NT_SIGNATURE ||
                nt->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64 ||
                nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
                nt->OptionalHeader.NumberOfRvaAndSizes <= IMAGE_DIRECTORY_ENTRY_IMPORT) return nullptr;
        const auto size = nt->OptionalHeader.SizeOfImage;
        const auto at = [&](DWORD rva, size_t bytes) -> unsigned char * {
            return rva < size && bytes <= size - rva && readable(base + rva, bytes) ? base + rva : nullptr;
        };
        const auto directory = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
        auto *imports = reinterpret_cast<const IMAGE_IMPORT_DESCRIPTOR *>(at(directory.VirtualAddress, directory.Size));
        if (!directory.VirtualAddress || !imports) return nullptr;
        for (size_t index = 0; index < directory.Size / sizeof(*imports); ++index) {
            const auto &entry = imports[index];
            if (!entry.Name) break;
            if (!entry.OriginalFirstThunk || !entry.FirstThunk) continue;
            for (size_t item = 0; item < size / sizeof(IMAGE_THUNK_DATA64); ++item) {
                const auto offset = item * sizeof(IMAGE_THUNK_DATA64);
                if (offset > size || entry.OriginalFirstThunk >= size || entry.FirstThunk >= size ||
                        offset > size - entry.OriginalFirstThunk || offset > size - entry.FirstThunk) break;
                auto *name = reinterpret_cast<const IMAGE_THUNK_DATA64 *>(at(
                    entry.OriginalFirstThunk + static_cast<DWORD>(offset), sizeof(IMAGE_THUNK_DATA64)));
                auto *field = reinterpret_cast<IMAGE_THUNK_DATA64 *>(at(
                    entry.FirstThunk + static_cast<DWORD>(offset), sizeof(IMAGE_THUNK_DATA64)));
                if (!name || !field || !name->u1.AddressOfData) break;
                if (IMAGE_SNAP_BY_ORDINAL64(name->u1.Ordinal) || name->u1.AddressOfData > MAXDWORD) continue;
                constexpr char symbol[] = "ReadConsoleInputA";
                auto *named = at(static_cast<DWORD>(name->u1.AddressOfData),
                    offsetof(IMAGE_IMPORT_BY_NAME, Name) + sizeof(symbol));
                if (named && !std::memcmp(named + offsetof(IMAGE_IMPORT_BY_NAME, Name), symbol, sizeof(symbol)))
                    return reinterpret_cast<ReadFn *>(&field->u1.Function);
            }
        }
        return nullptr;
    }

    static bool calls_kernel(const unsigned char *entry, size_t offset, const char *name) noexcept {
        if (!readable(entry, offset + 6) || entry[offset] != 0xff || entry[offset + 1] != 0x15)
            return false;
        int32_t relative = 0;
        std::memcpy(&relative, entry + offset + 2, sizeof(relative));
        const auto *slot = entry + offset + 6 + relative;
        FARPROC function = nullptr;
        if (!readable(slot, sizeof(function))) return false;
        std::memcpy(&function, slot, sizeof(function));
        const auto kernel = GetModuleHandleW(L"kernel32.dll");
        return kernel && function && function == GetProcAddress(kernel, name);
    }

    bool bind_native_reader(HMODULE module) noexcept {
        core_slot_ = reinterpret_cast<void **>(GetProcAddress(module,
            "?active_instance@Core@DFHack@@0PEAV12@EA"));
        auto *shutdown = reinterpret_cast<const unsigned char *>(GetProcAddress(module,
            "?Shutdown@Core@DFHack@@AEAAHXZ"));
        const auto console_shutdown = reinterpret_cast<const unsigned char *>(GetProcAddress(module,
            "?shutdown@Console@DFHack@@QEAA_NXZ"));
        // These releases obtain Private at Core+0x1250 and join its first
        // thread. In r3 Shutdown keeps Core in RBX, adds an exit-state store,
        // and uses LEA for Core.console; the old RCX/ADD probe rejected it.
        struct ShutdownProfile {
            size_t private_at, thread_at, console_at, join_at;
            unsigned char private_load[7], console_address[7];
            bool wakes_reader;
        };
        constexpr ShutdownProfile profiles[]{
            {0x27, 0x38, 0x3e, 0x4f,
                {0x48,0x8b,0x81,0x50,0x12,0,0},
                {0x48,0x81,0xc1,0xb8,0x11,0,0}, false}, // 53.16-r2
            {0x2c, 0x3d, 0x43, 0x54,
                {0x48,0x8b,0x83,0x50,0x12,0,0},
                {0x48,0x8d,0x8b,0xb8,0x11,0,0}, true}, // 53.16-r3 / 53.17-r1
        };
        constexpr unsigned char thread_id[]{0x83,0x78,0x08,0x00};
        constexpr unsigned char join_load[]{0x48,0x8b,0x8b,0x50,0x12,0,0};
        if (!readable(core_slot_, sizeof(void *)) || !console_shutdown) return false;
        const unsigned char *join = nullptr;
        bool wakes_reader = false;
        for (const auto &profile : profiles) {
            const size_t console_call = profile.console_at + sizeof(profile.console_address);
            const size_t join_call = profile.join_at + sizeof(join_load);
            if (!readable(shutdown, join_call + 5) ||
                    std::memcmp(shutdown + profile.private_at,
                        profile.private_load, sizeof(profile.private_load)) ||
                    std::memcmp(shutdown + profile.thread_at, thread_id, sizeof(thread_id)) ||
                    std::memcmp(shutdown + profile.console_at,
                        profile.console_address, sizeof(profile.console_address)) ||
                    std::memcmp(shutdown + profile.join_at, join_load, sizeof(join_load)) ||
                    shutdown[console_call] != 0xe8 || shutdown[join_call] != 0xe8) continue;
            int32_t relative = 0;
            std::memcpy(&relative, shutdown + console_call + 1, sizeof(relative));
            if (shutdown + console_call + 5 + relative != console_shutdown) continue;
            std::memcpy(&relative, shutdown + join_call + 1, sizeof(relative));
            join = shutdown + join_call + 5 + relative;
            wakes_reader = profile.wakes_reader;
            break;
        }
        constexpr unsigned char join_id[]{0x83,0x79,0x08,0x00};
        constexpr unsigned char join_copy[]{0x0f,0x10,0x07,0x33,0xd2,0x48,0x8d,0x4c,0x24,0x20,
            0x0f,0x29,0x44,0x24,0x20};
        if (!readable(join, 0x39) || std::memcmp(join + 6, join_id, sizeof(join_id)) ||
                std::memcmp(join + 0x25, join_copy, sizeof(join_copy))) return false;
        if (wakes_reader) {
            // r3 signals an exit event; 53.17-r1 publishes an atomic exit flag
            // and writes a focus event to wake ReadConsoleInputA. Both must
            // reach native shutdown before the reader is joined.
            constexpr unsigned char signal_event[]{
                0x48,0x8b,0x43,0x18, 0x48,0x8b,0x48,0x28,
                0x48,0x85,0xc9, 0x74,0x06, 0xff,0x15};
            constexpr unsigned char exit_flag[]{
                0x48,0x8b,0x51,0x18, 0xb8,0x01,0,0,0,
                0x48,0x8b,0xd9, 0x86,0x42,0x28};
            constexpr unsigned char focus_event[]{
                0xb8,0x10,0,0,0, 0x41,0xb8,0x01,0,0,0,
                0x66,0x89,0x44,0x24,0x28, 0x48,0x8b,0x49,0x18};
            const bool event_wakeup = readable(console_shutdown, 0x39) &&
                !std::memcmp(console_shutdown + 0x26, signal_event, sizeof(signal_event)) &&
                calls_kernel(console_shutdown, 0x33, "SetEvent");
            const bool input_wakeup = readable(console_shutdown, 0x7f) &&
                !std::memcmp(console_shutdown + 0x19, exit_flag, sizeof(exit_flag)) &&
                !std::memcmp(console_shutdown + 0x65, focus_event, sizeof(focus_event)) &&
                calls_kernel(console_shutdown, 0x79, "WriteConsoleInputA");
            if (!event_wakeup && !input_wakeup) return false;
        }
        native_shutdown_wakes_reader_ = wakes_reader;
        return true;
    }

    HANDLE native_reader_lease() const noexcept {
        void *core = nullptr, *thread = nullptr;
        if (!readable(core_slot_, sizeof(core))) return nullptr;
        std::memcpy(&core, core_slot_, sizeof(core));
        if (!core || !readable(static_cast<unsigned char *>(core) + 0x1250, sizeof(thread))) return nullptr;
        std::memcpy(&thread, static_cast<unsigned char *>(core) + 0x1250, sizeof(thread));
        if (!readable(thread, 16)) return nullptr;
        HANDLE native = nullptr;
        DWORD identity = 0;
        std::memcpy(&native, thread, sizeof(native));
        std::memcpy(&identity, static_cast<unsigned char *>(thread) + 8, sizeof(identity));
        if (!native || !identity || identity == GetCurrentThreadId()) return nullptr;
        HANDLE lease = nullptr;
        if (!DuplicateHandle(GetCurrentProcess(), native, GetCurrentProcess(), &lease,
                0, FALSE, DUPLICATE_SAME_ACCESS)) return nullptr;
        const DWORD actual = GetThreadId(lease);
        if (actual != identity || actual == GetCurrentThreadId()) {
            CloseHandle(lease);
            return nullptr;
        }
        return lease;
    }

    void report(const char *message) const {
        if (report_) report_("ERROR", std::string("DFHack console exit: ") + message);
    }

    bool write(bool install) {
        if (!slot_ || (!install && !installed_ && !protection_pending_)) return !install;
        DWORD previous = 0;
        if (!VirtualProtect(slot_, sizeof(*slot_), PAGE_READWRITE, &previous)) {
            report("cannot make the console import writable");
            return false;
        }
        if (!protection_pending_) original_protection_ = previous;
        protection_pending_ = true;
        const auto wrapper = &read_input;
        const auto desired = install ? wrapper : original_;
        auto expected = install ? original_ : wrapper;
        std::atomic_ref<ReadFn> field(*slot_);
        const bool changed = field.compare_exchange_strong(expected, desired, std::memory_order_acq_rel);
        const bool owned = changed || expected == desired;
        if (owned) installed_ = install;
        DWORD ignored = 0;
        const bool restored = VirtualProtect(slot_, sizeof(*slot_), original_protection_, &ignored);
        if (restored) protection_pending_ = false;
        if (!owned) report("the console import ownership changed");
        if (!restored) report("cannot restore the console import protection");
        return owned && restored;
    }

    static BOOL aborted(LPDWORD count, DWORD error = ERROR_OPERATION_ABORTED) noexcept {
        if (count) *count = 0;
        SetLastError(error);
        return FALSE;
    }

    static BOOL WINAPI read_input(HANDLE input, PINPUT_RECORD records, DWORD length, LPDWORD count) noexcept {
        auto *self = instance_.load(std::memory_order_acquire);
        if (!self || self->exiting_.load(std::memory_order_acquire)) return aborted(count);
        const DWORD incoming_error = GetLastError();
        Reader reader;
        // A private handle remains valid until the reader is removed under
        // mutex_. CancelSynchronousIo requires THREAD_TERMINATE access, which
        // DuplicateHandle retains from the current-thread pseudo handle.
        if (!DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(),
                &reader.thread, 0, FALSE, DUPLICATE_SAME_ACCESS)) {
            if (self->exiting_.load(std::memory_order_acquire)) return aborted(count);
            SetLastError(incoming_error);
            return self->original_(input, records, length, count);
        }
        try {
            std::lock_guard<std::mutex> lock(self->mutex_);
            if (self->exiting_.load(std::memory_order_acquire)) {
                CloseHandle(reader.thread);
                return aborted(count);
            }
            reader.next = self->readers_;
            self->readers_ = &reader;
        } catch (...) {
            CloseHandle(reader.thread);
            if (self->exiting_.load(std::memory_order_acquire)) return aborted(count);
            SetLastError(incoming_error);
            return self->original_(input, records, length, count);
        }
        SetLastError(incoming_error);
        const BOOL result = self->original_(input, records, length, count);
        const DWORD native_error = GetLastError();
        {
            std::lock_guard<std::mutex> lock(self->mutex_);
            auto **entry = &self->readers_;
            while (*entry && *entry != &reader) entry = &(*entry)->next;
            if (*entry) *entry = reader.next;
            CloseHandle(reader.thread);
        }
        self->returned_.notify_all();
        SetLastError(native_error);
        return result;
    }

public:
    bool needs_shutdown_hook() const noexcept { return !native_shutdown_wakes_reader_; }

    bool initialize(HMODULE module, Report reporter) {
        report_ = reporter;
        if (native_shutdown_wakes_reader_) return true;
        if (slot_) return installed_;
        if (!bind_native_reader(module)) {
            report("native console shutdown interfaces are unavailable");
            return false;
        }
        // Newer consoles own both waking and joining their reader. Leave the
        // input import untouched and let native shutdown publish its wakeup.
        if (native_shutdown_wakes_reader_) return true;
        const auto kernel = GetModuleHandleW(L"kernel32.dll");
        original_ = kernel ? reinterpret_cast<ReadFn>(GetProcAddress(kernel, "ReadConsoleInputA")) : nullptr;
        cancel_ = kernel ? reinterpret_cast<CancelFn>(GetProcAddress(kernel, "CancelSynchronousIo")) : nullptr;
        slot_ = find_import(module);
        if (!original_ || !cancel_ || !slot_ || reinterpret_cast<uintptr_t>(slot_) %
                std::atomic_ref<ReadFn>::required_alignment ||
                std::atomic_ref<ReadFn>(*slot_).load(std::memory_order_acquire) != original_) {
            slot_ = nullptr;
            report("native console input interfaces are unavailable");
            return false;
        }
        ConsoleExit *expected = nullptr;
        if (!instance_.compare_exchange_strong(expected, this, std::memory_order_acq_rel) && expected != this) {
            slot_ = nullptr;
            report("another console input observer is already registered");
            return false;
        }
        if (write(true)) return true;
        write(false);
        return false;
    }

    void begin_shutdown() {
        if (native_shutdown_wakes_reader_) return;
        const DWORD incoming_error = GetLastError();
        exiting_.store(true, std::memory_order_release);
        const HANDLE native = native_reader_lease();
        struct NativeLease {
            HANDLE handle;
            ~NativeLease() { if (handle) CloseHandle(handle); }
        } lease{native};
        bool native_returned = !native;
        for (;;) {
            // DFHack initialized its console before this import observer.
            // Its first input can already be pending without a Reader entry.
            // The duplicated native thread handle also covers that first read.
            if (!native_returned) {
                cancel_(native);
                native_returned = WaitForSingleObject(native, 0) == WAIT_OBJECT_0;
            }
            std::unique_lock<std::mutex> lock(mutex_);
            if (!readers_ && native_returned) break;
            // A registered read may not have entered the kernel yet. Retry
            // cancellation; ERROR_NOT_FOUND does not mean that reader left.
            for (auto *reader = readers_; reader; reader = reader->next) cancel_(reader->thread);
            // Native input may need this mutex before its thread can return.
            // Neither its handle wait nor cancellation holds the reader lock.
            if (!native_returned) {
                lock.unlock();
                native_returned = WaitForSingleObject(native, 2) == WAIT_OBJECT_0;
            } else {
                returned_.wait_for(lock, std::chrono::milliseconds(2), [&] { return readers_ == nullptr; });
            }
        }
        if (lease.handle) {
            CloseHandle(lease.handle);
            lease.handle = nullptr;
        }
        SetLastError(incoming_error);
    }

    bool detach() {
        // Old calls can still return through the resident wrapper after an
        // initialization rollback. Keep its forwarding fields and context.
        return write(false);
    }
};

} // namespace dfcn::dfhack
#endif
