#include "native_patch_platform.h"

static void report_native_patch_error(const char *level, const char *label,
        const char *operation, unsigned long error = 0) noexcept {
    try {
        std::string message = std::string(label) + ": " + operation;
        if (error) message += " (native error " + std::to_string(error) + ")";
        log_line(level, message);
    } catch (...) {}
}

static void report_native_branch_error(const char *label, uintptr_t instruction,
        uintptr_t target) noexcept {
    try {
        log_line("ERROR", std::string(label) + ": rel32 branch out of range; instruction=" +
            std::to_string(instruction) + "; target=" + std::to_string(target));
    } catch (...) {}
}

struct NativePatchPage {
    NativePatchProtection protection = 0;
    bool writable = false;
};
using NativePatchPages = std::map<uintptr_t, NativePatchPage>;

static bool collect_native_patch_pages(NativePatchPages &pages, uintptr_t address,
        size_t size, size_t page_size, bool executable, const char *label) {
    if (!address || !size || !page_size || size > UINTPTR_MAX - address) {
        report_native_patch_error("ERROR", label, "invalid patch extent");
        return false;
    }
    const uintptr_t first = address & ~(page_size - 1);
    const uintptr_t last = (address + size - 1) & ~(page_size - 1);
    for (uintptr_t page = first;; page += page_size) {
        if (!pages.contains(page)) {
            NativePatchProtection protection = 0;
            unsigned long error = 0;
            if (!native_patch_page_protection(page, page_size, protection, error) ||
                !native_patch_readable(protection) || (executable && !native_patch_executable(protection))) {
                report_native_patch_error("ERROR", label, "inaccessible patch page", error);
                return false;
            }
            pages.emplace(page, NativePatchPage{protection});
        }
        if (page == last) break;
    }
    return true;
}

static void restore_native_patch_pages(const NativePatchPages &pages,
        size_t page_size, const char *label) noexcept {
    for (const auto &[address, page] : pages) {
        if (!page.writable) continue;
        unsigned long error = 0;
        if (!native_patch_protect(reinterpret_cast<void *>(address), page_size, page.protection, error))
            report_native_patch_error("WARN", label, "page protection restore failed", error);
    }
}

static bool make_native_patch_pages_writable(NativePatchPages &pages,
        size_t page_size, const char *label) noexcept {
    for (auto &[address, page] : pages) {
        unsigned long error = 0;
        if (!native_patch_protect(reinterpret_cast<void *>(address), page_size,
                                  native_patch_writable(page.protection), error)) {
            restore_native_patch_pages(pages, page_size, label);
            report_native_patch_error("ERROR", label, "page write protection failed", error);
            return false;
        }
        page.writable = true;
    }
    return true;
}

struct NativeCodePatch {
    unsigned char *address = nullptr;
    std::vector<unsigned char> original, replacement;
    mutable bool cache_pending = false;
};

static bool native_code_patches_pending(const std::vector<NativeCodePatch> &patches) {
    return std::any_of(patches.begin(), patches.end(), [](const auto &patch) { return patch.cache_pending; });
}

static bool flush_native_code_patches(const std::vector<NativeCodePatch> &patches,
        const char *label) noexcept {
    bool flushed = true;
    for (const auto &patch : patches) {
        if (!patch.cache_pending) continue;
        unsigned long error = 0;
        if (native_patch_flush(patch.address, patch.original.size(), error)) {
            patch.cache_pending = false;
        } else {
            report_native_patch_error("ERROR", label, "instruction cache flush failed", error);
            flushed = false;
        }
    }
    return flushed;
}

static bool write_native_code_patches(const std::vector<NativeCodePatch> &patches,
        bool install, const char *label, bool *installed_state = nullptr,
        bool executable = true) {
    const size_t page_size = native_patch_page_size();
    NativePatchPages pages;
    std::map<uintptr_t, uintptr_t> ranges;
    for (const auto &patch : patches) {
        const auto &expected = install ? patch.original : patch.replacement;
        const uintptr_t address = reinterpret_cast<uintptr_t>(patch.address);
        if (patch.original.size() != patch.replacement.size() ||
            !collect_native_patch_pages(pages, address, expected.size(), page_size, executable, label)) return false;
        const uintptr_t end = address + expected.size();
        const auto next = ranges.lower_bound(address);
        if ((next != ranges.end() && next->first < end) ||
            (next != ranges.begin() && std::prev(next)->second > address)) {
            report_native_patch_error("ERROR", label, "overlapping code patches");
            return false;
        }
        ranges.emplace(address, end);
        if (std::memcmp(patch.address, expected.data(), expected.size()) != 0) {
            report_native_patch_error("ERROR", label, "code ownership/signature mismatch");
            return false;
        }
    }
    if (patches.empty() || !make_native_patch_pages_writable(pages, page_size, label)) return false;
    // Every allocation, range/signature check and page change precedes the
    // first write. Track ownership before flushing or restoring protection.
    for (const auto &patch : patches) {
        const auto &bytes = install ? patch.replacement : patch.original;
        std::memcpy(patch.address, bytes.data(), bytes.size());
        patch.cache_pending = true;
    }
    if (installed_state) *installed_state = install;
    const bool flushed = flush_native_code_patches(patches, label);
    restore_native_patch_pages(pages, page_size, label);
    return flushed;
}

// Every branch must reach its own stub. Being close to the midpoint of a
// group does not guarantee reachability from its first and last call sites.
// Constrain the entire allocation to their common interval, with room for
// instruction lengths and relocated operands at either end.
struct NativeRelayRange {
    uintptr_t minimum = 0, maximum = UINTPTR_MAX;
    void include(uintptr_t address) noexcept {
        constexpr uintptr_t reach = 0x7ffe0000;
        minimum = std::max(minimum, address > reach ? address - reach : 0);
        maximum = std::min(maximum, address <= UINTPTR_MAX - reach ? address + reach : UINTPTR_MAX);
    }
};

static void *allocate_native_relay(const NativeRelayRange &range, size_t requested_size,
        size_t *allocated_size, const char *label) noexcept {
    const size_t page_size = native_patch_page_size();
    if (!allocated_size || !page_size || !requested_size || requested_size > SIZE_MAX - page_size + 1) {
        report_native_patch_error("ERROR", label, "invalid relay allocation size");
        return nullptr;
    }
    *allocated_size = (requested_size + page_size - 1) & ~(page_size - 1);
    if (range.minimum >= range.maximum || *allocated_size > range.maximum - range.minimum) {
        *allocated_size = 0;
        report_native_patch_error("ERROR", label, "no relay interval reachable from every branch");
        return nullptr;
    }
    unsigned long error = 0;
    void *memory = native_patch_allocate_between(range.minimum, range.maximum, *allocated_size, error);
    if (!memory) {
        *allocated_size = 0;
        report_native_patch_error("ERROR", label, "allocation inside the common branch interval failed", error);
    }
    return memory;
}

static bool seal_native_relay(void *relay, size_t size, const char *label) noexcept {
    unsigned long error = 0;
    if (!native_patch_protect(relay, size, native_patch_relay_protection(), error)) {
        report_native_patch_error("ERROR", label, "relay protection failed", error);
        return false;
    }
    if (!native_patch_flush(relay, size, error)) {
        report_native_patch_error("ERROR", label, "relay cache flush failed", error);
        return false;
    }
    return true;
}

static bool release_native_relay(void *&relay, size_t &size, const char *label) noexcept {
    if (!relay) return true;
    unsigned long error = 0;
    if (!native_patch_release(relay, size, error)) {
        report_native_patch_error("ERROR", label, "relay release failed", error);
        return false;
    }
    relay = nullptr;
    size = 0;
    return true;
}

struct NativeRelayGuard {
    void *&relay;
    size_t &size;
    const bool &installed;
    const char *label;
    bool committed = false;
    ~NativeRelayGuard() {
        if (!committed && !installed) release_native_relay(relay, size, label);
    }
};

// Both supported native ABIs use this register-preserving x86-64 jump.
static void emit_native_absolute_jump(unsigned char *destination, const void *target) {
    destination[0] = 0xff;
    destination[1] = 0x25;
    std::memset(destination + 2, 0, 4);
    const uintptr_t address = reinterpret_cast<uintptr_t>(target);
    std::memcpy(destination + 6, &address, sizeof(address));
}

static bool native_relative_branch(unsigned char *instruction, unsigned char opcode,
        const void *target) {
    const intptr_t distance = reinterpret_cast<intptr_t>(target) - reinterpret_cast<intptr_t>(instruction + 5);
    if (distance < INT32_MIN || distance > INT32_MAX) return false;
    instruction[0] = opcode;
    const int32_t relative = static_cast<int32_t>(distance);
    std::memcpy(instruction + 1, &relative, sizeof(relative));
    return true;
}

struct NativeCall {
    uintptr_t va, target;
    const void *wrapper;
    std::vector<unsigned char> prefix{};
    // A verified, complete inline operation may be replaced by an ABI call.
    // Empty retains the ordinary rel32 call/target identity check. Adapters
    // must establish instruction boundaries, no interior branch targets,
    // caller stack space and the absence of live volatile registers/flags.
    std::vector<unsigned char> inline_original{};
    // Verified ABI result adaptation immediately after the replacement CALL.
    // Relative operands are relative to that original instruction address;
    // this permits an inlined expression to retain its native continuations.
    std::vector<unsigned char> suffix{};
};

struct NativeCallHook {
    std::vector<NativeCodePatch> patches;
    void *relay = nullptr;
    size_t relay_size = 0;
    bool installed = false;
    bool active() const { return installed || relay != nullptr; }

    bool install(uintptr_t base, const std::vector<NativeCall> &calls, const char *label) {
        if (installed) return flush_native_code_patches(patches, label);
        if (!flush_native_code_patches(patches, label)) return false;
        if (!release_native_relay(relay, relay_size, label)) return false;
        patches.clear();
        constexpr size_t relay_stride = 64;
        constexpr size_t jump_bytes = 14;
        if (calls.empty() || calls.size() > SIZE_MAX / relay_stride) return false;
        NativeRelayRange range;
        const size_t page_size = native_patch_page_size();
        NativePatchPages readable_pages;
        for (const auto &call : calls) {
            const size_t extent = call.inline_original.empty() ? 5 : call.inline_original.size();
            if (call.va > UINTPTR_MAX - base || call.target > UINTPTR_MAX - base || !call.wrapper ||
                call.prefix.size() > relay_stride - jump_bytes || extent < 5 || extent > 4096 ||
                call.suffix.size() > extent - 5 ||
                !collect_native_patch_pages(readable_pages,
                    base + call.va, extent, page_size, true, label)) return false;
            const auto *address = reinterpret_cast<const unsigned char *>(base + call.va);
            if (!call.inline_original.empty()) {
                if (std::memcmp(address, call.inline_original.data(), extent) != 0) {
                    report_native_patch_error("ERROR", label, "native inline operation identity mismatch");
                    return false;
                }
            } else {
                int32_t relative = 0;
                std::memcpy(&relative, address + 1, sizeof(relative));
                if (address[0] != 0xe8 || reinterpret_cast<uintptr_t>(address + 5 + relative) != base + call.target) {
                    report_native_patch_error("ERROR", label, "native call identity mismatch");
                    return false;
                }
            }
            if (extent > UINTPTR_MAX - (base + call.va)) {
                report_native_patch_error("ERROR", label, "native call extent overflow");
                return false;
            }
            range.include(base + call.va);
        }
        relay = allocate_native_relay(range, calls.size() * relay_stride, &relay_size, label);
        if (!relay) return false;
        NativeRelayGuard guard{relay, relay_size, installed, label};
        auto *memory = static_cast<unsigned char *>(relay);
        patches.reserve(calls.size());
        for (size_t i = 0; i < calls.size(); ++i) {
            const auto &call = calls[i];
            auto *stub = memory + i * relay_stride;
            std::copy(call.prefix.begin(), call.prefix.end(), stub);
            emit_native_absolute_jump(stub + call.prefix.size(), call.wrapper);
            auto *address = reinterpret_cast<unsigned char *>(base + call.va);
            const intptr_t distance = reinterpret_cast<intptr_t>(stub) - reinterpret_cast<intptr_t>(address + 5);
            if (distance < INT32_MIN || distance > INT32_MAX) {
                report_native_branch_error(label, reinterpret_cast<uintptr_t>(address),
                    reinterpret_cast<uintptr_t>(stub));
                return false;
            }
            const size_t extent = call.inline_original.empty() ? 5 : call.inline_original.size();
            NativeCodePatch patch{address, {}, std::vector<unsigned char>(extent, 0x90)};
            patch.original.assign(address, address + extent);
            patch.replacement[0] = 0xe8;
            const int32_t relative = static_cast<int32_t>(distance);
            std::memcpy(patch.replacement.data() + 1, &relative, sizeof(relative));
            std::copy(call.suffix.begin(), call.suffix.end(), patch.replacement.begin() + 5);
            patches.push_back(std::move(patch));
        }
        if (!seal_native_relay(relay, relay_size, label)) return false;
        if (!write_native_code_patches(patches, true, label, &installed)) return false;
        guard.committed = true;
        return true;
    }

    bool uninstall(const char *label) {
        if (installed && !write_native_code_patches(patches, false, label, &installed)) return false;
        if (!flush_native_code_patches(patches, label)) return false;
        if (!release_native_relay(relay, relay_size, label)) return false;
        patches.clear();
        return true;
    }
};

// Profiles describe only verified instruction bytes and their relative
// operands. Trampoline construction and the two-phase publish are shared.
struct NativeRelativeFixup {
    size_t displacement_offset, instruction_end;
    uintptr_t target;
};

#ifdef _WIN32
struct NativeEntryInstruction {
    size_t source = 0, length = 0, output = 0, emitted = 0, displacement = 0;
    enum Kind { Plain, Rip, Call, Jump, Conditional } kind = Plain;
    uintptr_t target = 0;
    unsigned condition = 0;
};

static bool native_entry_instruction(const unsigned char *bytes, size_t available,
        uintptr_t address, NativeEntryInstruction &instruction) {
    unsigned char bounded[32]{};
    if (!available) return false;
    std::memcpy(bounded, bytes, (std::min)(available, size_t{16}));
    // ENDBR64 is a position-independent landing pad, including on decoders
    // whose opcode tables predate CET.
    if (available >= 4 && !std::memcmp(bytes, "\xf3\x0f\x1e\xfa", 4)) {
        instruction.length = instruction.emitted = 4; return true;
    }
    display_decode::hde64s decoded{};
    display_decode::hde64_disasm(bounded, &decoded);
    if (!decoded.len || decoded.len > available || (decoded.flags & F_ERROR)) return false;
    instruction.length = instruction.emitted = decoded.len;
    if (decoded.flags & F_RELATIVE) {
        if (decoded.p_66 || decoded.p_67 || decoded.p_lock || decoded.p_rep || decoded.p_seg || decoded.rex)
            return false;
        int64_t relative = 0;
        if ((decoded.opcode == 0xe8 || decoded.opcode == 0xe9) && decoded.len == 5) {
            instruction.kind = decoded.opcode == 0xe8 ? NativeEntryInstruction::Call : NativeEntryInstruction::Jump;
            relative = static_cast<int32_t>(decoded.imm.imm32);
        } else if (decoded.opcode == 0xeb && decoded.len == 2) {
            instruction.kind = NativeEntryInstruction::Jump;
            relative = static_cast<int8_t>(decoded.imm.imm8);
        } else if (decoded.opcode >= 0x70 && decoded.opcode <= 0x7f && decoded.len == 2) {
            instruction.kind = NativeEntryInstruction::Conditional;
            instruction.condition = decoded.opcode & 15;
            relative = static_cast<int8_t>(decoded.imm.imm8);
        } else if (decoded.opcode == 0x0f && decoded.opcode2 >= 0x80 && decoded.opcode2 <= 0x8f && decoded.len == 6) {
            instruction.kind = NativeEntryInstruction::Conditional;
            instruction.condition = decoded.opcode2 & 15;
            relative = static_cast<int32_t>(decoded.imm.imm32);
        } else return false; // LOOP/JCXZ/XBEGIN need different state-preserving rewrites.
        instruction.emitted = instruction.kind == NativeEntryInstruction::Conditional ? 6 : 5;
        instruction.displacement = decoded.len - display_decode::immediate_width(decoded);
        instruction.target = address + decoded.len + relative;
    } else if ((decoded.flags & F_MODRM) && decoded.modrm_mod == 0 && decoded.modrm_rm == 5 && !decoded.p_67) {
        if (!(decoded.flags & F_DISP32)) return false;
        instruction.kind = NativeEntryInstruction::Rip;
        instruction.displacement = decoded.len - display_decode::immediate_width(decoded) - 4;
        instruction.target = address + decoded.len + static_cast<int32_t>(decoded.disp.disp32);
    }
    return true;
}

static bool native_entry_relocation_plan(uintptr_t address, const std::vector<unsigned char> &prefix,
        const std::vector<NativeRelativeFixup> &fixups, std::vector<NativeEntryInstruction> &instructions,
        NativeRelayRange &range, size_t &length, const char *label) {
    length = 0;
    for (size_t at = 0; at < prefix.size();) {
        NativeEntryInstruction instruction;
        instruction.source = at; instruction.output = length;
        if (!native_entry_instruction(prefix.data() + at, prefix.size() - at, address + at, instruction)) {
            report_native_patch_error("ERROR", label, "entry contains an unsupported or partial instruction");
            return false;
        }
        at += instruction.length; length += instruction.emitted;
        instructions.push_back(instruction);
    }
    for (const auto &instruction : instructions) {
        if (instruction.kind == NativeEntryInstruction::Plain) continue;
        if (instruction.target >= address && instruction.target < address + prefix.size()) {
            if (instruction.kind == NativeEntryInstruction::Rip || instruction.kind == NativeEntryInstruction::Call ||
                    std::none_of(instructions.begin(), instructions.end(), [&](const auto &other) {
                        return address + other.source == instruction.target;
                    })) {
                report_native_patch_error("ERROR", label, "entry relocation has an unsupported internal target");
                return false;
            }
        } else range.include(instruction.target);
    }
    // Retain the reviewed operand identity checks. The decoder additionally
    // discovers every relative operand, so an omitted fixup cannot corrupt it.
    for (const auto &fixup : fixups) {
        const auto instruction = std::find_if(instructions.begin(), instructions.end(), [&](const auto &value) {
            return value.source + value.length == fixup.instruction_end &&
                value.source + value.displacement == fixup.displacement_offset &&
                value.displacement + 4 <= value.length && value.kind != NativeEntryInstruction::Plain;
        });
        if (instruction == instructions.end() || instruction->target != fixup.target) {
            report_native_patch_error("ERROR", label, "relative operand identity mismatch");
            return false;
        }
    }
    return true;
}

static bool emit_native_entry_relocation(unsigned char *destination, uintptr_t source,
        const std::vector<unsigned char> &prefix, const std::vector<NativeEntryInstruction> &instructions,
        const char *label) {
    for (const auto &instruction : instructions) {
        auto *output = destination + instruction.output;
        std::memcpy(output, prefix.data() + instruction.source, instruction.length);
        if (instruction.kind == NativeEntryInstruction::Plain) continue;
        auto target = instruction.target;
        if (target >= source && target < source + prefix.size()) {
            const auto found = std::find_if(instructions.begin(), instructions.end(), [&](const auto &value) {
                return source + value.source == target;
            });
            if (found == instructions.end()) return false;
            target = reinterpret_cast<uintptr_t>(destination + found->output);
        }
        size_t displacement = instruction.displacement;
        if (instruction.kind == NativeEntryInstruction::Conditional) {
            output[0] = 0x0f; output[1] = static_cast<unsigned char>(0x80 | instruction.condition); displacement = 2;
        } else if (instruction.kind == NativeEntryInstruction::Call || instruction.kind == NativeEntryInstruction::Jump) {
            output[0] = instruction.kind == NativeEntryInstruction::Call ? 0xe8 : 0xe9; displacement = 1;
        }
        const intptr_t distance = static_cast<intptr_t>(target) -
            reinterpret_cast<intptr_t>(output + instruction.emitted);
        if (distance < INT32_MIN || distance > INT32_MAX) {
            report_native_branch_error(label, reinterpret_cast<uintptr_t>(output), target); return false;
        }
        const int32_t relative = static_cast<int32_t>(distance);
        std::memcpy(output + displacement, &relative, sizeof(relative));
    }
    return true;
}
#endif

#include "native_entry_prefix_runtime.inc"

struct NativeEntryHook {
    std::vector<NativeCodePatch> patches;
    void *relay = nullptr;
    size_t relay_size = 0;
    void *original = nullptr;
    bool installed = false;
    bool active() const { return installed || relay != nullptr; }

#ifdef _WIN32
    bool prepare_discovered(uint32_t reference, uint32_t reference_table,
            std::string_view type, std::string_view method, std::string_view signature,
            uint32_t arguments, const void *wrapper, const char *label) {
        const auto &state = pe_runtime::state();
        if (!pe_runtime::usable(state) || !wrapper) return false;
        const auto entry = address_runtime::resolve(state.function_owners, reference);
        const auto table = native_pe_rva(reference_table);
        const auto *abi = native_history_abi::method(native_history_abi::semantic_id(type),
            native_history_abi::semantic_id(method));
        const auto certificate = std::find_if(state.entry_prefixes.begin(), state.entry_prefixes.end(),
            [&](const auto &value) { return value.reference == reference; });
        const auto *live = native_live_entry_prefix(reference);
        if (!entry || !table || !abi || abi->parameter_shape != native_history_abi::semantic_id(signature) ||
                abi->argument_count != arguments || abi->slot % sizeof(void *) ||
                uint64_t(table) + abi->slot + sizeof(void *) > state.size ||
                certificate == state.entry_prefixes.end() || !live || live->native != entry ||
                !pe_runtime::entry_prefix_detail::contract(state, *certificate) ||
                certificate->native != entry || certificate->table_reference != reference_table ||
                certificate->table != table || certificate->slot != abi->slot ||
                certificate->type != native_history_abi::semantic_id(type) ||
                certificate->method != native_history_abi::semantic_id(method)) {
            report_native_patch_error("ERROR", label, "entry identity or method ABI unavailable"); return false;
        }
        const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
        if (!base) return false;
        // The sealed original virtual slot names this independently proved
        // native body. A live DFHack wrapper stays in the original call chain;
        // its address and bytes never become a patch candidate here.
        const uintptr_t target = base + entry;
        DWORD64 owner = 0;
        const auto *function = RtlLookupFunctionEntry(target, &owner, nullptr);
        if (!function || owner != base || function->BeginAddress != entry ||
                function->EndAddress <= entry || function->EndAddress > state.size ||
                function->EndAddress > certificate->end || function->UnwindData != certificate->unwind ||
                uint64_t(entry) + live->prefix.size() > function->EndAddress) {
            report_native_patch_error("ERROR", label, "entry lacks an exact bounded unwind function"); return false;
        }
        // Complete CFG/EH/table dependencies were checked before our display
        // selectors changed the body. Only the certified prefix is moved;
        // prepare still checks all live prefix bytes and every relocation.
        return prepare(reinterpret_cast<unsigned char *>(target), live->prefix, wrapper, {}, label);
    }
#endif

    bool prepare(unsigned char *address, const std::vector<unsigned char> &prefix,
            const void *wrapper, const std::vector<NativeRelativeFixup> &fixups,
            const char *label) {
        if (installed) return false;
        if (!flush_native_code_patches(patches, label)) return false;
        if (!release_native_relay(relay, relay_size, label)) return false;
        original = nullptr;
        patches.clear();
        if (!wrapper || prefix.size() < 5 || prefix.size() > 4096) return false;
        NativePatchPages readable_pages;
        if (!collect_native_patch_pages(readable_pages, reinterpret_cast<uintptr_t>(address),
                prefix.size(), native_patch_page_size(), true, label) ||
            std::memcmp(address, prefix.data(), prefix.size()) != 0) {
            report_native_patch_error("ERROR", label, "entry signature mismatch");
            return false;
        }
        NativeRelayRange range;
        range.include(reinterpret_cast<uintptr_t>(address));
        range.include(reinterpret_cast<uintptr_t>(address + prefix.size()));
        size_t relocated_length = prefix.size();
#ifdef _WIN32
        std::vector<NativeEntryInstruction> instructions;
        if (!native_entry_relocation_plan(reinterpret_cast<uintptr_t>(address), prefix, fixups,
                instructions, range, relocated_length, label)) return false;
#else
        std::map<size_t, size_t> operands;
        for (const auto &fixup : fixups) {
            if (fixup.instruction_end > prefix.size() || fixup.displacement_offset > fixup.instruction_end ||
                fixup.instruction_end - fixup.displacement_offset < sizeof(int32_t)) return false;
            int32_t original_relative = 0;
            std::memcpy(&original_relative, prefix.data() + fixup.displacement_offset, sizeof(original_relative));
            if (reinterpret_cast<uintptr_t>(address + fixup.instruction_end + original_relative) != fixup.target) {
                report_native_patch_error("ERROR", label, "relative operand identity mismatch");
                return false;
            }
            const auto next = operands.lower_bound(fixup.displacement_offset);
            if ((next != operands.end() && next->first < fixup.displacement_offset + 4) ||
                (next != operands.begin() && std::prev(next)->second > fixup.displacement_offset)) return false;
            operands.emplace(fixup.displacement_offset, fixup.displacement_offset + 4);
            range.include(fixup.target);
        }
#endif
        relay = allocate_native_relay(range, relocated_length + 64, &relay_size, label);
        if (!relay) return false;
        NativeRelayGuard guard{relay, relay_size, installed, label};
        auto *memory = static_cast<unsigned char *>(relay);
        emit_native_absolute_jump(memory, wrapper);
        auto *trampoline = memory + 32;
        static constexpr std::array<unsigned char, 4> endbr{{0xf3, 0x0f, 0x1e, 0xfa}};
        std::copy(endbr.begin(), endbr.end(), trampoline);
#ifdef _WIN32
        if (!emit_native_entry_relocation(trampoline + endbr.size(), reinterpret_cast<uintptr_t>(address),
                prefix, instructions, label)) return false;
#else
        std::copy(prefix.begin(), prefix.end(), trampoline + endbr.size());
        for (const auto &fixup : fixups) {
            const intptr_t distance = static_cast<intptr_t>(fixup.target) -
                reinterpret_cast<intptr_t>(trampoline + endbr.size() + fixup.instruction_end);
            if (distance < INT32_MIN || distance > INT32_MAX) {
                report_native_branch_error(label,
                    reinterpret_cast<uintptr_t>(trampoline + endbr.size() + fixup.displacement_offset), fixup.target);
                return false;
            }
            const int32_t relative = static_cast<int32_t>(distance);
            std::memcpy(trampoline + endbr.size() + fixup.displacement_offset, &relative, sizeof(relative));
        }
#endif
        if (!native_relative_branch(trampoline + endbr.size() + relocated_length, 0xe9, address + prefix.size())) {
            report_native_branch_error(label,
                reinterpret_cast<uintptr_t>(trampoline + endbr.size() + relocated_length),
                reinterpret_cast<uintptr_t>(address + prefix.size()));
            return false;
        }
        const intptr_t distance = reinterpret_cast<intptr_t>(memory) - reinterpret_cast<intptr_t>(address + 5);
        if (distance < INT32_MIN || distance > INT32_MAX) {
            report_native_branch_error(label, reinterpret_cast<uintptr_t>(address),
                reinterpret_cast<uintptr_t>(memory));
            return false;
        }
        NativeCodePatch patch{address, prefix, std::vector<unsigned char>(prefix.size(), 0x90)};
        patch.replacement[0] = 0xe9;
        const int32_t relative = static_cast<int32_t>(distance);
        std::memcpy(patch.replacement.data() + 1, &relative, sizeof(relative));
        patches.push_back(std::move(patch));
        if (!seal_native_relay(relay, relay_size, label)) return false;
        original = trampoline;
        guard.committed = true;
        return true;
    }

    bool install(const char *label) {
        if (installed) return flush_native_code_patches(patches, label);
        if (!relay || !original || patches.empty()) return false;
        return write_native_code_patches(patches, true, label, &installed);
    }

    bool uninstall(const char *label) {
        if (installed && !write_native_code_patches(patches, false, label, &installed)) return false;
        if (!flush_native_code_patches(patches, label)) return false;
        if (!release_native_relay(relay, relay_size, label)) return false;
        original = nullptr;
        patches.clear();
        return true;
    }
};

static bool write_native_import_slot(void **slot, void *expected, void *desired,
        const char *label, bool *installed_state = nullptr, bool install = true) {
    if (!slot || reinterpret_cast<uintptr_t>(slot) % std::atomic_ref<void *>::required_alignment != 0) return false;
    const size_t page_size = native_patch_page_size();
    NativePatchPages pages;
    if (!collect_native_patch_pages(pages, reinterpret_cast<uintptr_t>(slot), sizeof(*slot),
                                     page_size, false, label)) return false;
    std::atomic_ref<void *> cell(*slot);
    if (cell.load(std::memory_order_acquire) != expected) {
        report_native_patch_error("ERROR", label, "import ownership mismatch");
        return false;
    }
    if (!make_native_patch_pages_writable(pages, page_size, label)) return false;
    const bool exchanged = cell.compare_exchange_strong(expected, desired, std::memory_order_acq_rel);
    if (exchanged && installed_state) *installed_state = install;
    restore_native_patch_pages(pages, page_size, label);
    if (!exchanged) report_native_patch_error("ERROR", label, "import changed during replacement");
    return exchanged;
}

struct NativeImportHook {
    void **slot = nullptr;
    void *original = nullptr;
    void *replacement = nullptr;
    bool installed = false;
    bool active() const { return installed; }

    bool install(const char *label) {
        if (installed) return true;
        if (!slot || !replacement || reinterpret_cast<uintptr_t>(slot) %
                std::atomic_ref<void *>::required_alignment != 0) return false;
        if (!original) original = std::atomic_ref<void *>(*slot).load(std::memory_order_acquire);
        if (original == replacement) {
            report_native_patch_error("ERROR", label, "untracked callback already owns the import");
            return false;
        }
        return write_native_import_slot(slot, original, replacement, label, &installed, true);
    }

    bool uninstall(const char *label) {
        if (!installed) return true;
        if (!slot) return false;
        if (std::atomic_ref<void *>(*slot).load(std::memory_order_acquire) == original) {
            installed = false;
            return true;
        }
        return write_native_import_slot(slot, replacement, original, label, &installed, false);
    }
};
