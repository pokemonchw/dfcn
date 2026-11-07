#pragma once
#include "native_address_scan.h"
#include "native_display_discovery.h"
#include "native_frame_registers.h"

namespace dfcn::pe_runtime {
namespace argument_guard_detail {
using display_decode::Instruction;
struct Guard {
    uint32_t argument = 0, value = 0, upper = 0, end = 0;
};
inline unsigned reg(const display_decode::hde64s &op) { return op.modrm_reg + (op.rex_r ? 8 : 0); }
inline unsigned rm(const display_decode::hde64s &op) { return op.modrm_rm + (op.rex_b ? 8 : 0); }
inline uint32_t branch(const Instruction &instruction, unsigned condition) {
    const auto &op = instruction.decoded;
    if (op.rex || op.p_66 || op.p_67 || op.p_rep || op.p_lock || op.p_seg) return 0;
    int64_t relative = 0;
    if (op.opcode == 0x70 + condition && op.len == 2) relative = static_cast<int8_t>(op.imm.imm8);
    else if (op.opcode == 0x0f && op.opcode2 == 0x80 + condition && op.len == 6)
        relative = static_cast<int32_t>(op.imm.imm32);
    else return 0;
    const auto target = int64_t(instruction.address) + op.len + relative;
    return target > 0 && target <= UINT32_MAX ? static_cast<uint32_t>(target) : 0;
}
inline bool read(const std::vector<Instruction> &code, size_t first, Guard &guard) {
    if (first + 6 > code.size()) return false;
    for (size_t at = first + 1; at < first + 6; ++at)
        if (code[at - 1].address + code[at - 1].decoded.len != code[at].address) return false;
    const auto &load = code[first].decoded;
    if (load.len != 4 || load.opcode != 0x0f || load.opcode2 != 0xbf || load.rex_w ||
            load.p_66 || load.p_67 || load.p_rep || load.p_lock || load.p_seg ||
            load.modrm_mod != 0 || (load.flags & F_SIB) || load.modrm_rm == 5) return false;
    const auto argument = rm(load), value = reg(load);
    if ((argument != 1 && argument != 2 && argument != 8 && argument != 9) || argument == value) return false;
    const auto &test = code[first + 1].decoded;
    if (test.opcode != 0x85 || !test.p_66 || test.rex_w || test.modrm_mod != 3 ||
            reg(test) != value || rm(test) != value || test.p_rep || test.p_lock || test.p_seg || test.p_67) return false;
    const auto failure = branch(code[first + 2], 8);
    const auto &constant = code[first + 3].decoded;
    if (!failure || constant.opcode < 0xb8 || constant.opcode > 0xbf || constant.rex_w ||
            constant.p_66 || constant.p_67 || constant.p_rep || constant.p_lock || constant.p_seg ||
            !(constant.flags & F_IMM32) || constant.imm.imm32 == 0 || constant.imm.imm32 > INT16_MAX) return false;
    const unsigned bound = constant.opcode - 0xb8 + (constant.rex_b ? 8 : 0);
    if (bound == value || bound == argument) return false;
    const auto &compare = code[first + 4].decoded;
    if (!compare.p_66 || compare.rex_w || compare.p_67 || compare.p_rep || compare.p_lock || compare.p_seg ||
            compare.modrm_mod != 3 ||
            !((compare.opcode == 0x3b && reg(compare) == value && rm(compare) == bound) ||
              (compare.opcode == 0x39 && rm(compare) == value && reg(compare) == bound)) ||
            branch(code[first + 5], 13) != failure) return false;
    guard = {argument, value, constant.imm.imm32, code[first + 5].address + code[first + 5].decoded.len};
    return true;
}
inline bool entry_argument(const std::vector<Instruction> &code, size_t first, const Guard &guard) {
    if (code.empty()) return false;
    const auto address = code[first].address;
    for (const auto &instruction : code) {
        const auto &op = instruction.decoded;
        if (instruction.address < address && display_decode::writes_gpr(op, guard.argument)) return false;
        const bool short_branch = (op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xeb ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3);
        const bool long_branch = op.opcode == 0xe9 || (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        if (op.opcode == 0xff && op.modrm_reg >= 4) return false;
        if (!short_branch && !long_branch) continue;
        const auto target = int64_t(instruction.address) + op.len + (short_branch ?
            int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
        // No later path may enter a partly executed entry guard. Earlier
        // conditional exits are fine; they preserve the incoming argument.
        if (target >= code.front().address && target < guard.end &&
                (instruction.address >= address || target > address)) return false;
    }
    return true;
}
inline std::vector<Instruction> source_code(const address_runtime::Pattern &pattern) {
    std::vector<Instruction> code;
    for (size_t at = 0; at < pattern.raw.size();) {
        unsigned char bounded[32]{};
        const auto available = (std::min)(size_t(16), pattern.raw.size() - at);
        std::memcpy(bounded, pattern.raw.data() + at, available);
        display_decode::hde64s op{}; display_decode::hde64_disasm(bounded, &op);
        if (!op.len || op.len > available || (op.flags & F_ERROR)) return {};
        Instruction instruction;
        instruction.address = pattern.reference + static_cast<uint32_t>(at);
        instruction.decoded = op;
        instruction.bytes.assign(pattern.raw.begin() + at, pattern.raw.begin() + at + op.len);
        code.push_back(std::move(instruction));
        at += op.len;
    }
    return code;
}
} // namespace argument_guard_detail

// Preserve a signed scalar argument's entry range guard when only the
// compiler's temporary destination register changes. Both sides must prove
// the complete lower/upper-bound branches over the untouched incoming
// argument, inside an independently mapped function. This does not authorize
// arbitrary register renaming or a change in the argument's type or offset.
template<typename Image, typename Catalog>
inline void discover_argument_guards(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace address_runtime;
    using namespace argument_guard_detail;
    Bindings bindings;
    for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    std::map<uint32_t, std::vector<Instruction>> source, target;
    size_t added = 0;
    for (const auto &[reference, length] : catalog.required) {
        if (length != 4 || (bindings.lookup(reference) && bindings.lookup(reference + 3))) continue;
        const Pattern *owner = nullptr;
        for (const auto &pattern : catalog.patterns)
            if ((pattern.flags & 3) == 3 && pattern.reference == pattern.owner &&
                    reference >= pattern.reference && uint64_t(reference) + 4 <= uint64_t(pattern.reference) + pattern.raw.size()) {
                if (owner) { owner = nullptr; break; }
                owner = &pattern;
            }
        if (!owner) continue;
        const auto native = resolve(state.function_owners, owner->owner);
        if (!native || bindings.lookup(owner->owner) != native) continue;
        if (!source.count(owner->owner)) source.emplace(owner->owner, source_code(*owner));
        const auto &original = source.at(owner->owner);
        const auto entry = std::lower_bound(original.begin(), original.end(), reference,
            [](const auto &instruction, uint32_t value) { return instruction.address < value; });
        Guard wanted;
        if (entry == original.end() || entry->address != reference ||
                !read(original, entry - original.begin(), wanted) ||
                !entry_argument(original, entry - original.begin(), wanted)) continue;
        if (!target.count(native)) {
            auto &code = target[native];
            for (const auto &[begin, end] : frame_detail::logical_regions(image, native)) {
                std::vector<Instruction> part;
                if (!display_decode::decode(image, begin, end, part)) { code.clear(); break; }
                code.insert(code.end(), part.begin(), part.end());
            }
            std::sort(code.begin(), code.end(), [](const auto &a, const auto &b) { return a.address < b.address; });
        }
        const auto &actual = target.at(native);
        std::vector<uint32_t> candidates;
        for (size_t at = 0; at < actual.size(); ++at) {
            Guard found;
            if (read(actual, at, found) && found.argument == wanted.argument && found.upper == wanted.upper &&
                    entry_argument(actual, at, found)) candidates.push_back(actual[at].address);
        }
        if (candidates.size() != 1 || !bindings.compatible(reference, 4, candidates.front())) continue;
        const auto *bytes = image.read(candidates.front(), 4);
        if (!bytes) continue;
        added += bindings.add(reference, 4, candidates.front());
        for (uint32_t at = 0; at < 4; ++at) if (entry->bytes[at] != bytes[at]) {
            const Byte byte{reference + at, entry->bytes[at], bytes[at]};
            const auto [found, inserted] = changes.emplace(byte.address, byte);
            if (!inserted && (found->second.reference != byte.reference || found->second.native != byte.native))
                throw std::runtime_error("Conflicting native argument guard bytes");
        }
    }
    state.ranges = bindings.export_ranges(); state.bytes.clear();
    for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
    if (report && added) report("Native discovery: proved " + std::to_string(added) + " scalar entry argument guards");
}
} // namespace dfcn::pe_runtime
