#pragma once
#include "native_entry_prefix_discovery.h"

// A noreturn edge is an ABI fact about an independently identified import,
// not a consequence of padding or of reaching the end of a pdata record.
namespace dfcn::pe_runtime::callable_exception_detail {
using namespace display_decode;
inline constexpr const char *throw_libraries[]{"vcruntime140.dll", "vcruntime140_1.dll"};
template<typename Image> inline bool throw_import(const Image &image, uint32_t slot) {
    if (!slot) return false;
    for (const auto *library : throw_libraries)
        if (image.import_slot(library, "_CxxThrowException") == slot) return true;
    return false;
}
template<typename Image> inline bool immutable(const Image &image, uint32_t at, size_t count) {
    const auto *section = image.section(at, count);
    return section && !(section->flags & (Image::write_flag | Image::execute_flag)) && image.read(at, count);
}
template<typename Image> inline bool instruction(const Image &image, uint32_t at,
        uint32_t end, Instruction &result) {
    if (at >= end) return false;
    std::array<unsigned char, 32> bytes{};
    const auto length = (std::min)(uint32_t(15), end - at);
    const auto *raw = image.read(at, length);
    if (!raw) return false;
    std::memcpy(bytes.data(), raw, length);
    hde64s op{}; hde64_disasm(bytes.data(), &op);
    if (!op.len || op.len > length || (op.flags & F_ERROR) || op.p_lock || op.p_rep ||
            op.p_seg || op.p_66 || op.p_67) return false;
    result = {at, op, {raw, raw + op.len}};
    return true;
}
inline uint32_t relative(uint32_t at, const hde64s &op, int32_t displacement) {
    const int64_t result = int64_t(at) + op.len + displacement;
    return result > 0 && result <= UINT32_MAX ? static_cast<uint32_t>(result) : 0;
}
inline int32_t displacement(const hde64s &op) {
    if (op.flags & F_DISP8) return static_cast<int8_t>(op.disp.disp8);
    if (op.flags & F_DISP32) return static_cast<int32_t>(op.disp.disp32);
    return 0;
}
inline unsigned base_register(const hde64s &op) {
    if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || op.p_67 ||
            (op.modrm_mod == 0 && op.modrm_rm == 5)) return 16;
    if (op.modrm_rm == 4) {
        if (op.sib_index != 4 || op.rex_x || (op.modrm_mod == 0 && op.sib_base == 5)) return 16;
        return op.sib_base + (op.rex_b ? 8 : 0);
    }
    return op.modrm_rm + (op.rex_b ? 8 : 0);
}
template<typename Image> inline uint32_t import_thunk(const Image &image, uint32_t at) {
    std::set<uint32_t> seen;
    for (unsigned depth = 0; at && depth < 4 && seen.insert(at).second; ++depth) {
        const auto *section = image.section(at, 6);
        Instruction row;
        if (!section || !(section->flags & Image::execute_flag) ||
                !instruction(image, at, at + 6, row)) return 0;
        const auto &op = row.decoded;
        const auto function = frame_detail::function_at(image, at);
        if (function != image.functions.end() && (function->begin != at || function->end != at + op.len ||
                function->owner && function->owner != at)) return 0;
        if (function != image.functions.end()) {
            const auto *unwind = image.read(function->unwind, 4);
            if (!unwind || unwind[0] != 1 || unwind[1] || unwind[2] || unwind[3]) return 0;
        }
        if (op.opcode == 0xe9 && op.len == 5) { at = relative(at, op, static_cast<int32_t>(op.imm.imm32)); continue; }
        if (op.opcode != 0xff || op.modrm_mod != 0 || op.modrm_reg != 4 || op.modrm_rm != 5 ||
                op.rex || op.len != 6) return 0;
        const auto slot = relative(at, op, static_cast<int32_t>(op.disp.disp32));
        return throw_import(image, slot) ? slot : 0;
    }
    return 0;
}

struct Value { enum Kind { unknown, zero, local, address } kind = unknown; int64_t offset = 0; };
inline bool volatile_register(unsigned reg) { return reg == 0 || reg == 1 || reg == 2 || (reg >= 8 && reg <= 11); }
template<typename Image> inline bool exception_vtable(const Image &image, uint32_t table) {
    if (!immutable(image, table, 16)) return false;
    const auto *bytes = image.read(table, 16);
    for (unsigned slot = 0; slot < 2; ++slot) {
        uint64_t pointer; std::memcpy(&pointer, bytes + slot * 8, 8);
        if (pointer < image.preferred_base || pointer - image.preferred_base >= image.size) return false;
        const auto *part = image.section(static_cast<uint32_t>(pointer - image.preferred_base), 1);
        const auto relocation = std::lower_bound(image.relocations.begin(), image.relocations.end(), table + slot * 8,
            [](const auto &value, uint32_t address) { return value.first < address; });
        if (!part || !(part->flags & Image::execute_flag) || relocation == image.relocations.end() ||
                relocation->first != table + slot * 8 || relocation->second != pointer) return false;
    }
    return true;
}
// A complete leaf constructs one 24-byte exception: a static vptr followed
// by two zero words. No incoming secondary argument or caller memory escapes.
template<typename Image> inline bool constructor(const Image &image, uint32_t entry) {
    const auto *section = image.section(entry, 1);
    if (!section || !(section->flags & Image::execute_flag)) return false;
    const auto function = frame_detail::function_at(image, entry);
    uint32_t end = (std::min)(section->end, entry + 96);
    if (function != image.functions.end()) {
        if (function->begin != entry || function->end > end || function->owner && function->owner != entry) return false;
        const auto *unwind = image.read(function->unwind, 4);
        if (!unwind || unwind[0] != 1 || unwind[1] || unwind[2] || unwind[3]) return false;
        end = function->end;
    } else {
        const auto *before = entry ? image.read(entry - 1, 1) : nullptr;
        if (!before || *before != 0xcc) return false;
        for (const auto &candidate : image.functions)
            if (candidate.begin > entry && candidate.begin < end) end = candidate.begin;
    }
    std::array<Value, 16> registers{}; registers[1] = {Value::local, 0};
    std::array<bool, 16> vector_zero{};
    std::array<unsigned char, 24> writes{};
    bool vptr = false;
    for (uint32_t at = entry; at < end;) {
        Instruction row; if (!instruction(image, at, end, row)) return false;
        const auto &op = row.decoded;
        const auto reg = op.modrm_reg + (op.rex_r ? 8u : 0u), rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
        if (op.opcode == 0xc3) {
            if (registers[0].kind != Value::local || registers[0].offset || !vptr ||
                    !std::all_of(writes.begin(), writes.end(), [](auto value) { return value == 1; })) return false;
            if (function != image.functions.end()) return at + op.len == end;
            const auto *after = image.read(at + op.len, 1);
            return after && *after == 0xcc;
        }
        if (op.opcode == 0x8d && op.rex_w && op.modrm_mod == 0 && op.modrm_rm == 5) {
            if (!volatile_register(reg)) return false;
            const auto target = relative(at, op, static_cast<int32_t>(op.disp.disp32));
            if (!target || !exception_vtable(image, target)) return false;
            registers[reg] = {Value::address, target};
        } else if (op.opcode == 0x0f && op.opcode2 == 0x57 && op.modrm_mod == 3 && reg == rm) {
            if (reg > 5) return false;
            vector_zero[reg] = true;
        } else if (op.opcode == 0x8b && op.rex_w && op.modrm_mod == 3 && volatile_register(reg)) registers[reg] = registers[rm];
        else if ((op.opcode == 0x89 && op.rex_w && op.modrm_mod != 3) ||
                (op.opcode == 0x0f && op.opcode2 == 0x11 && op.modrm_mod != 3)) {
            const auto base = base_register(op);
            if (base >= 16 || registers[base].kind != Value::local) return false;
            const auto offset = registers[base].offset + displacement(op);
            const unsigned width = op.opcode == 0x89 ? 8 : 16;
            const bool pointer = op.opcode == 0x89 && registers[reg].kind == Value::address;
            if (offset < 0 || offset + width > 24 || (pointer ? offset != 0 :
                    (op.opcode != 0x0f || !vector_zero[reg] || offset != 8))) return false;
            for (unsigned i = 0; i < width; ++i) if (++writes[static_cast<size_t>(offset) + i] != 1) return false;
            vptr |= pointer;
        } else return false;
        at += op.len;
    }
    return false;
}
// Only the immutable throwing descriptors are relevant to this terminal ABI.
// Catch/copy/destructor addresses are never published as callable contracts;
// the CRT export, not their names or return behavior, establishes noreturn.
template<typename Image> inline bool throw_information(const Image &image, uint32_t at) {
    if (!immutable(image, at, 16)) return false;
    uint32_t info[4]; std::memcpy(info, image.read(at, 16), 16);
    const auto executable = [&](uint32_t address) {
        const auto *part = image.section(address, 1);
        return address && part && (part->flags & Image::execute_flag);
    };
    if (info[0] || !executable(info[1]) || info[2] || !immutable(image, info[3], 4)) return false;
    uint32_t count; std::memcpy(&count, image.read(info[3], 4), 4);
    if (!count || count > 8 || !immutable(image, info[3], 4 + size_t(count) * 4)) return false;
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t address; std::memcpy(&address, image.read(info[3] + 4 + i * 4, 4), 4);
        if (!immutable(image, address, 28)) return false;
        uint32_t type[7]; std::memcpy(type, image.read(address, 28), 28);
        // Exact object extent and nonvirtual, unadjusted catchable subobjects.
        // TypeDescriptor contents may be loader-written; no name is consumed.
        if (type[0] || !image.section(type[1], 16) || type[2] || type[3] != UINT32_MAX ||
                type[4] || type[5] != 24 || !executable(type[6])) return false;
    }
    return true;
}
template<typename Image> inline uint32_t prove(const Image &image, uint32_t entry) {
    const auto function = frame_detail::function_at(image, entry);
    if (function == image.functions.end() || function->begin != entry || function->owner && function->owner != entry ||
            function->end <= entry || function->end - entry > 128 ||
            frame_detail::logical_regions(image, entry).size() != 1 ||
            !image.read(entry, function->end - entry)) return 0;
    Instruction first;
    if (!instruction(image, entry, function->end, first)) return 0;
    const auto &alloc = first.decoded;
    if (alloc.opcode != 0x83 || alloc.modrm_mod != 3 || alloc.modrm_reg != 5 || alloc.modrm_rm != 4 ||
            !alloc.rex_w || alloc.rex_b || alloc.rex_r || !(alloc.flags & F_IMM8)) return 0;
    const uint32_t frame = alloc.imm.imm8;
    if (frame < 56 || frame > 120 || frame % 16 != 8) return 0;
    // Match the complete simple-alloc UNWIND_INFO. No EH/CHAIN handler can
    // restore this wrapper at another continuation or bypass its terminal.
    const auto *unwind = image.read(function->unwind, 8);
    if (!unwind || unwind[0] != 1 || unwind[1] != alloc.len || unwind[2] != 1 || unwind[3] ||
            unwind[4] != alloc.len || unwind[5] != (((frame - 8) / 8) << 4 | 2) || unwind[6] || unwind[7]) return 0;
    std::array<Value, 16> registers{}; registers[4] = {Value::local, 0};
    std::array<bool, 16> vector_zero{};
    int64_t constructed = -1;
    uint32_t terminal_slot = 0;
    for (uint32_t at = entry + alloc.len; at < function->end;) {
        Instruction row; if (!instruction(image, at, function->end, row)) return 0;
        const auto &op = row.decoded;
        const auto reg = op.modrm_reg + (op.rex_r ? 8u : 0u), rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
        if (terminal_slot) { if (op.opcode != 0xcc || op.len != 1) return 0; at += op.len; continue; }
        if (op.opcode == 0x8d && op.rex_w && op.modrm_mod != 3) {
            if (!volatile_register(reg)) return 0;
            const auto base = base_register(op);
            if (base < 16 && registers[base].kind == Value::local)
                registers[reg] = {Value::local, registers[base].offset + displacement(op)};
            else if (op.modrm_mod == 0 && op.modrm_rm == 5)
                registers[reg] = {Value::address, relative(at, op, static_cast<int32_t>(op.disp.disp32))};
            else return 0;
        } else if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && reg == rm && volatile_register(reg))
            registers[reg] = {Value::zero, 0};
        else if (op.opcode == 0x0f && op.opcode2 == 0x57 && op.modrm_mod == 3 && reg == rm && reg <= 5)
            vector_zero[reg] = true;
        else if ((op.opcode == 0x89 && op.rex_w && op.modrm_mod != 3) ||
                (op.opcode == 0x0f && op.opcode2 == 0x11 && op.modrm_mod != 3)) {
            const auto base = base_register(op);
            const unsigned width = op.opcode == 0x89 ? 8 : 16;
            if (base >= 16 || registers[base].kind != Value::local || constructed >= 0 ||
                    (op.opcode == 0x89 ? registers[reg].kind != Value::zero : !vector_zero[reg])) return 0;
            const auto offset = registers[base].offset + displacement(op);
            if (offset < 32 || offset + width > frame) return 0;
        } else if (op.opcode == 0xe8 && op.len == 5) {
            const auto target = relative(at, op, static_cast<int32_t>(op.imm.imm32));
            if (registers[1].kind != Value::local || registers[1].offset < 32 || registers[1].offset + 24 > frame) return 0;
            if (constructed < 0) {
                if (!constructor(image, target)) return 0;
                constructed = registers[1].offset;
            } else {
                if (registers[1].offset != constructed || registers[2].kind != Value::address ||
                        !throw_information(image, static_cast<uint32_t>(registers[2].offset)) ||
                        !(terminal_slot = import_thunk(image, target))) return 0;
            }
            for (const auto index : {0u, 1u, 2u, 8u, 9u, 10u, 11u}) registers[index] = {};
            vector_zero.fill(false);
        } else return 0;
        // A locally derived pointer must never overwrite the actual RSP.
        if (registers[4].kind != Value::local || registers[4].offset) return 0;
        at += op.len;
    }
    return terminal_slot;
}
} // namespace dfcn::pe_runtime::callable_exception_detail
