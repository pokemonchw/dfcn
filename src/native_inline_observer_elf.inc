// An inline ELF observation preserves all integer/XMM registers and flags.
// Its process-owned gate covers the helper's entire return path; detached
// relays and relocated native instructions contain no reloadable core address.
struct NativeInlineRegisters {
    uintptr_t r15,r14,r13,r12,r11,r10,r9,r8,rdi,rsi,rbp,rbx,rdx,rcx,rax,flags;
    uintptr_t stack() const { return reinterpret_cast<uintptr_t>(this) + sizeof(*this); }
};
using NativeInlineObserveFn = void (*)(const NativeInlineRegisters *) noexcept;
struct NativeInlineObserverContext { uintptr_t helper = 0; uint32_t active = 0, reserved = 0; };

struct NativeInlineObserverHook {
    NativeEntryHook entry;
    void *observer = nullptr;
    size_t observer_size = 0;
    NativeInlineObserverContext *context = nullptr;

    bool active() const {
        return entry.installed || native_code_patches_pending(entry.patches) ||
            (context && (std::atomic_ref<uintptr_t>(context->helper).load(std::memory_order_seq_cst) ||
                std::atomic_ref<uint32_t>(context->active).load(std::memory_order_seq_cst)));
    }

    bool install(unsigned char *site, std::vector<unsigned char> prefix,
            NativeInlineObserveFn callback, const char *label,
            const std::vector<NativeRelativeFixup> &fixups = {}) {
        if (!callback) return false;
        if (!context) {
            auto owned = std::make_unique<NativeInlineObserverContext>();
            NativeRelayRange range;
            range.include(reinterpret_cast<uintptr_t>(site));
            observer = allocate_native_relay(range, 0x400, &observer_size, label);
            if (!observer) return false;
            if (!entry.prepare(site, prefix, observer, fixups, label)) {
                release_native_relay(observer, observer_size, label);
                return false;
            }
            std::vector<unsigned char> code;
            const auto emit = [&](std::initializer_list<unsigned char> bytes) { code.insert(code.end(), bytes); };
            const auto load_context = [&] {
                emit({0x49,0xba});
                const auto pointer = reinterpret_cast<uintptr_t>(owned.get());
                const auto *bytes = reinterpret_cast<const unsigned char *>(&pointer);
                code.insert(code.end(), bytes, bytes + sizeof(pointer));
            };
            emit({0xf3,0x0f,0x1e,0xfa});
            emit({0x9c,0x50,0x51,0x52,0x53,0x55,0x56,0x57});
            emit({0x41,0x50,0x41,0x51,0x41,0x52,0x41,0x53,0x41,0x54,0x41,0x55,0x41,0x56,0x41,0x57});
            emit({0x48,0x81,0xec,0x00,0x01,0x00,0x00});
            const auto xmm = [&](bool restore) {
                for (unsigned index = 0; index < 16; ++index) {
                    emit({0xf3});
                    if (index >= 8) emit({0x44});
                    emit({0x0f,static_cast<unsigned char>(restore ? 0x6f : 0x7f),
                        static_cast<unsigned char>(0x84 | ((index & 7) << 3)),0x24});
                    const uint32_t offset = index * 16;
                    const auto *bytes = reinterpret_cast<const unsigned char *>(&offset);
                    code.insert(code.end(), bytes, bytes + 4);
                }
            };
            xmm(false);
            load_context();
            emit({0xf0,0x41,0xff,0x42,0x08,0x49,0x8b,0x02,0x48,0x85,0xc0,0x74,0x0a});
            emit({0x48,0x8d,0xbc,0x24,0x00,0x01,0x00,0x00,0xff,0xd0});
            load_context();
            emit({0xf0,0x41,0xff,0x4a,0x08});
            xmm(true);
            emit({0x48,0x81,0xc4,0x00,0x01,0x00,0x00});
            emit({0x41,0x5f,0x41,0x5e,0x41,0x5d,0x41,0x5c,0x41,0x5b,0x41,0x5a,0x41,0x59,0x41,0x58});
            emit({0x5f,0x5e,0x5d,0x5b,0x5a,0x59,0x58,0x9d});
            const size_t jump = code.size();
            code.resize(jump + 14);
            emit_native_absolute_jump(code.data() + jump, entry.original);
            if (code.size() > observer_size) return false;
            std::memcpy(observer, code.data(), code.size());
            if (!seal_native_relay(observer, observer_size, label)) return false;
            context = owned.release();
        }
        if (!entry.install(label)) return false;
        std::atomic_ref<uintptr_t>(context->helper).store(reinterpret_cast<uintptr_t>(callback), std::memory_order_seq_cst);
        return true;
    }

    bool uninstall(const char *label) {
        if (context) std::atomic_ref<uintptr_t>(context->helper).store(0, std::memory_order_seq_cst);
        if (entry.installed && !write_native_code_patches(entry.patches, false, label, &entry.installed)) return false;
        return flush_native_code_patches(entry.patches, label);
    }
};
