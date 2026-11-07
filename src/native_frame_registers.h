#pragma once
#include "native_display_discovery.h"
#include <array>
#include <optional>

namespace dfcn::pe_runtime::frame_detail {
struct TargetRbpFrame {
    uint32_t ready = 0, end = 0;
    int32_t rsp_offset = 0;
    bool valid = false, origin_known = false;
    display_decode::DecodeFailure failure;
};

template<typename Image>
inline std::vector<std::pair<uint32_t, uint32_t>> logical_regions(const Image &image, uint32_t owner) {
    std::vector<std::pair<uint32_t, uint32_t>> result;
    for (const auto &function : image.functions) {
        if ((function.owner ? function.owner : function.begin) != owner) continue;
        if (!result.empty() && result.back().second == function.begin) result.back().second = function.end;
        else result.emplace_back(function.begin, function.end);
    }
    return result;
}

// Register operands in SIMD instructions are not integer registers. In
// particular restoring XMM5 must not end the live RBP stack alias.
inline bool frame_writes_rbp(const display_decode::hde64s &op) {
    using namespace display_decode;
    const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0);
    const unsigned rm = op.modrm_rm + (op.rex_b ? 8 : 0);
    const bool integer_rm = op.modrm_mod == 3 && rm == 5;
    const bool byte_rm = integer_rm && op.rex;
    const bool byte_reg = reg == 5 && op.rex;
    const auto code = op.opcode;
    if (code == 0xc8 || code == 0xc9) return true;
    if (code >= 0x58 && code <= 0x5f) return code - 0x58 + (op.rex_b ? 8 : 0) == 5;
    if (code >= 0x90 && code <= 0x97) return code - 0x90 + (op.rex_b ? 8 : 0) == 5;
    if (code >= 0xb0 && code <= 0xb7) return op.rex && code - 0xb0 + (op.rex_b ? 8 : 0) == 5;
    if (code >= 0xb8 && code <= 0xbf) return code - 0xb8 + (op.rex_b ? 8 : 0) == 5;
    if (code == 0x0f && op.opcode2 >= 0xc8 && op.opcode2 <= 0xcf)
        return op.opcode2 - 0xc8 + (op.rex_b ? 8 : 0) == 5;
    if (!(op.flags & F_MODRM)) return false;
    if (code <= 0x3b && (code & 7) <= 3) {
        if (code >= 0x38) return false; // CMP only reads its operands.
        return code & 2 ? ((code & 1) ? reg == 5 : byte_reg) : ((code & 1) ? integer_rm : byte_rm);
    }
    if (code == 0x63 || code == 0x69 || code == 0x6b || code == 0x8b || code == 0x8d) return reg == 5;
    if (code == 0x8a) return byte_reg;
    if (code == 0x88 || code == 0xc6) return byte_rm;
    if (code == 0x89 || code == 0x8c || code == 0x8f || code == 0xc7) return integer_rm;
    if (code == 0x86) return byte_rm || byte_reg;
    if (code == 0x87) return integer_rm || reg == 5;
    if (code >= 0x80 && code <= 0x83)
        return op.modrm_reg != 7 && ((code == 0x80 || code == 0x82) ? byte_rm : integer_rm);
    if (code == 0x84 || code == 0x85 || code == 0x8e) return false;
    if (code == 0xc0 || code == 0xd0 || code == 0xd2) return byte_rm;
    if (code == 0xc1 || code == 0xd1 || code == 0xd3) return integer_rm;
    if (code == 0xf6 || code == 0xf7)
        return (op.modrm_reg == 2 || op.modrm_reg == 3) && (code == 0xf6 ? byte_rm : integer_rm);
    if (code == 0xfe || code == 0xff)
        return op.modrm_reg <= 1 && (code == 0xfe ? byte_rm : integer_rm);
    if (code >= 0xd8 && code <= 0xdf) return false; // x87 operands.
    if (code != 0x0f) return reg == 5 || integer_rm; // Unknown operand semantics end the proof.
    const auto second = op.opcode2;
    if ((second >= 0x40 && second <= 0x4f) || second == 0xaf || second == 0xb6 || second == 0xb7 ||
            second == 0xb8 || second == 0xbc || second == 0xbd || second == 0xbe || second == 0xbf ||
            second == 0x2c || second == 0x2d || second == 0x50 || second == 0xc5 || second == 0xd7)
        return reg == 5;
    if (second >= 0x90 && second <= 0x9f) return byte_rm;
    if (second == 0x7e) return op.p_rep != 0xf3 && integer_rm; // MOVD/Q to a GPR, or MOVQ to XMM.
    if (second == 0xb0 || second == 0xc0) return byte_rm || (second == 0xc0 && byte_reg);
    if (second == 0xb1 || second == 0xc1) return integer_rm || (second == 0xc1 && reg == 5);
    if (second == 0xa4 || second == 0xa5 || second == 0xab || second == 0xac || second == 0xad ||
            second == 0xb3 || second == 0xbb) return integer_rm;
    if (second == 0xba) return op.modrm_reg >= 5 && integer_rm;
    if (second == 0xc7) return op.modrm_reg >= 6 && integer_rm;
    if (second == 0x1f || second == 0xa3) return false;
    if ((second >= 0x10 && second <= 0x17) || (second >= 0x28 && second <= 0x2f) ||
            (second >= 0x51 && second <= 0x76) || second == 0x7c || second == 0x7d || second == 0x7f ||
            second == 0xc2 || second == 0xc4 || second == 0xc6 || second >= 0xd0) return false;
    return reg == 5 || integer_rm;
}

template<typename Image, typename Function>
inline std::optional<int64_t> prologue_allocation(const Image &image, const Function &function, uint32_t offset) {
    const auto *header = image.read(function.unwind, 4);
    if (!header || (header[0] & 7) != 1 || (header[0] & (4 << 3))) return {};
    const auto count = header[2];
    const auto *codes = image.read(function.unwind + 4, uint32_t(count) * 2);
    if (!codes && count) return {};
    int64_t allocation = 0;
    for (uint32_t at = 0; at < count;) {
        const uint32_t end = codes[at * 2], operation = codes[at * 2 + 1] & 15, info = codes[at * 2 + 1] >> 4;
        uint32_t slots = 1, bytes = 0;
        if (operation == 0) bytes = 8;
        else if (operation == 1) {
            slots = info == 0 ? 2 : info == 1 ? 3 : 0;
            if (!slots || at + slots > count) return {};
            if (!info) { uint16_t value; std::memcpy(&value, codes + at * 2 + 2, 2); bytes = uint32_t(value) * 8; }
            else std::memcpy(&bytes, codes + at * 2 + 2, 4);
        } else if (operation == 2) bytes = info * 8 + 8;
        else if (operation == 3) { if (info) return {}; }
        else if (operation == 4 || operation == 8) slots = 2;
        else if (operation == 5 || operation == 9) slots = 3;
        else return {};
        if (at + slots > count || end > header[1]) return {};
        if (end <= offset) allocation += bytes;
        at += slots;
    }
    return allocation;
}

template<typename Image>
inline TargetRbpFrame target_rbp_frame(const Image &image, uint32_t owner) {
    using namespace display_decode;
    TargetRbpFrame result;
    const auto reject = [&](uint32_t address, const char *reason) {
        result.failure = {address, reason, 5}; return result;
    };
    auto function = std::lower_bound(image.functions.begin(), image.functions.end(), owner,
        [](const auto &value, uint32_t address) { return value.begin < address; });
    if (function == image.functions.end() || function->begin != owner || function->end <= owner)
        return reject(owner, "RBP owner entry is not identified");
    const auto *header = image.read(function->unwind, 4);
    if (!header || (header[0] & 7) != 1 || !header[1] || uint64_t(owner) + header[1] > function->end)
        return reject(owner, "RBP prologue has no complete unwind description");
    const auto regions = logical_regions(image, owner);
    const auto region = std::find_if(regions.begin(), regions.end(), [&](const auto &value) { return value.first == owner; });
    if (region == regions.end()) return reject(owner, "RBP logical owner region is absent");
    std::vector<Instruction> code;
    if (!decode(image, owner, region->second, code, nullptr, &result.failure)) return result;
    const uint32_t prologue_end = owner + header[1];
    std::array<std::optional<int64_t>, 16> origins{};
    int64_t rbp_origin = 0;
    size_t alias = code.size();
    for (size_t at = 0; at < code.size() && code[at].address < prologue_end; ++at) {
        const auto &op = code[at].decoded;
        const auto before = prologue_allocation(image, *function, code[at].address - owner);
        const auto after = prologue_allocation(image, *function, code[at].address + op.len - owner);
        if (!before || !after) return reject(code[at].address, "RBP prologue allocation is unavailable");
        origins[4] = -*before;
        if ((op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xe9 || op.opcode == 0xeb ||
                op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
                (op.opcode == 0xff && op.modrm_reg >= 4)) return reject(code[at].address, "branch interrupts RBP prologue proof");
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        unsigned destination = 16;
        std::optional<int64_t> value;
        if (op.rex_w && op.modrm_mod == 3 && (op.opcode == 0x8b || op.opcode == 0x89)) {
            destination = op.opcode == 0x8b ? reg : rm;
            value = origins[op.opcode == 0x8b ? rm : reg];
        } else if (op.opcode == 0x8d && op.rex_w && !op.p_67 && !op.p_seg && op.modrm_mod != 3) {
            unsigned base = 16;
            if (op.flags & F_SIB) {
                if (op.sib_index == 4 && !op.rex_x && !(op.modrm_mod == 0 && op.sib_base == 5))
                    base = op.sib_base + (op.rex_b ? 8 : 0);
            } else if (!(op.modrm_mod == 0 && op.modrm_rm == 5)) base = rm;
            const int64_t displacement = op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
                op.flags & F_DISP8 ? static_cast<int8_t>(op.disp.disp8) : 0;
            destination = reg;
            if (base < 16 && origins[base]) value = *origins[base] + displacement;
        } else if (op.rex_w && op.modrm_mod == 3 && (op.opcode == 0x81 || op.opcode == 0x83) &&
                (op.modrm_reg == 0 || op.modrm_reg == 5)) {
            destination = rm;
            const int64_t immediate = op.opcode == 0x83 ? static_cast<int8_t>(op.imm.imm8) : static_cast<int32_t>(op.imm.imm32);
            if (origins[rm]) value = *origins[rm] + (op.modrm_reg == 5 ? -immediate : immediate);
        }
        if (writes_gpr(op, 4)) {
            const bool push = op.opcode >= 0x50 && op.opcode <= 0x57;
            const bool subtract = op.rex_w && op.modrm_mod == 3 &&
                ((rm == 4 && ((op.opcode == 0x81 || op.opcode == 0x83) ? op.modrm_reg == 5 : op.opcode == 0x29)) ||
                 (op.opcode == 0x2b && reg == 4));
            if ((!push && !subtract) || *after <= *before || (push && *after - *before != 8) ||
                    (subtract && value && *value != -*after))
                return reject(code[at].address, "RSP write disagrees with unwind allocation");
        } else if (*after != *before) return reject(code[at].address, "Unwind allocation has no actual stack operation");
        for (unsigned index = 0; index < 16; ++index) if (writes_gpr(op, index)) origins[index].reset();
        if (destination < 16) origins[destination] = value;
        bool registered_move = false;
        if ((op.opcode == 0x8b || op.opcode == 0x89) && destination == 5 && value && (header[3] & 15) == 5) {
            const auto complete_allocation = prologue_allocation(image, *function, header[1]);
            const auto *codes = image.read(function->unwind + 4, uint32_t(header[2]) * 2);
            unsigned definitions = 0;
            for (uint32_t index = 0; codes && index < header[2];) {
                const unsigned operation = codes[index * 2 + 1] & 15, info = codes[index * 2 + 1] >> 4;
                if (operation == 3 && !info && codes[index * 2] == code[at].address + op.len - owner) ++definitions;
                const auto slots = operation == 1 ? (info ? 3u : 2u) :
                    (operation == 4 || operation == 8) ? 2u : (operation == 5 || operation == 9) ? 3u : 1u;
                index += slots; // prologue_allocation already validated every slot and operation.
            }
            registered_move = complete_allocation && definitions == 1 &&
                *value == -*complete_allocation + int64_t(header[3] >> 4) * 16;
            if (!registered_move) return reject(code[at].address, "MOV RBP definition disagrees with registered unwind frame");
        }
        const bool affine_move = (op.opcode == 0x8b || op.opcode == 0x89) && (header[3] & 15) == 0;
        if (destination == 5 && value && (op.opcode == 0x8d || registered_move || affine_move)) {
            if (alias != code.size()) return reject(code[at].address, "multiple RBP stack aliases in prologue");
            alias = at; rbp_origin = *value;
        } else if (alias != code.size() && frame_writes_rbp(op))
            return reject(code[at].address, "RBP alias is clobbered inside prologue");
    }
    if (alias == code.size()) return reject(owner, "RBP stack alias definition is absent from prologue");
    result.ready = code[alias].address + code[alias].decoded.len;
    result.end = region->second;
    bool clobbers_terminate = true;
    for (size_t at = alias + 1; at < code.size(); ++at)
        if (frame_writes_rbp(code[at].decoded)) {
            result.end = (std::min)(result.end, code[at].address);
            // MSVC can place live cold blocks after the main epilogue. An
            // actual RBP clobber immediately followed by RET cannot reach
            // those blocks, regardless of their increasing byte addresses.
            clobbers_terminate &= at + 1 < code.size() &&
                code[at].address + code[at].decoded.len == code[at + 1].address &&
                (code[at + 1].decoded.opcode == 0xc3 || code[at + 1].decoded.opcode == 0xc2);
        }
    if (result.end <= result.ready) return reject(result.end, "RBP stack alias has no live interval");
    // A later path that restores RBP cannot jump back into the claimed live
    // interval. Likewise no path may repeat only part of the prologue.
    for (const auto &instruction : code) {
        const auto &op = instruction.decoded;
        const bool branch8 = (op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xeb ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3);
        const bool branch32 = op.opcode == 0xe9 || (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        if (!branch8 && !branch32) continue;
        const int64_t target = int64_t(instruction.address) + op.len +
            (branch8 ? int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
        if ((instruction.address >= result.ready && target >= owner && target < result.ready) ||
                (!clobbers_terminate && instruction.address >= result.end && target >= result.ready && target < result.end))
            return reject(instruction.address, "branch enters a partial or already-restored RBP lifetime");
    }
    // The defining base may be an earlier copy of entry RSP, rather than
    // the RSP value at its definition. Only the proved affine origin is applicable.
    const auto normalized = rbp_origin;
    result.origin_known = normalized >= INT32_MIN && normalized <= INT32_MAX;
    if (result.origin_known) result.rsp_offset = static_cast<int32_t>(normalized);
    result.valid = true;
    return result;
}
} // namespace dfcn::pe_runtime::frame_detail
