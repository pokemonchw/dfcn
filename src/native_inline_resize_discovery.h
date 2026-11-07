#pragma once
#include "native_frame_discovery.h"
#include "native_frame_registers.h"

namespace dfcn::pe_runtime::inline_resize_detail {
struct Operation {
    uint32_t length = 0, frame = 0, width = 0;
    int32_t object = 0;
    uint32_t constant_width = 0, zero_register = 16;
    explicit operator bool() const { return length != 0; }
};
inline unsigned reg(const display_decode::hde64s &op) { return op.modrm_reg + (op.rex_r ? 8 : 0); }
inline unsigned rm(const display_decode::hde64s &op) { return op.modrm_rm + (op.rex_b ? 8 : 0); }
inline bool local(const display_decode::hde64s &op, uint32_t &base, int32_t &offset) {
    using namespace display_decode;
    if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || op.p_67) return false;
    if (op.flags & F_SIB) {
        if (op.sib_base != 4 || op.rex_b || op.sib_index != 4 || op.rex_x) return false;
        base = 4;
    } else {
        if (op.modrm_rm != 5 || op.rex_b || op.modrm_mod == 0) return false;
        base = 5;
    }
    offset = op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
        op.flags & F_DISP8 ? static_cast<int8_t>(op.disp.disp8) : 0;
    return true;
}
inline Operation operation(const unsigned char *bytes, size_t size) {
    using namespace display_decode;
    if (!bytes) return {};
    std::array<hde64s, 5> ops{};
    size_t cursor = 0;
    for (auto &op : ops) {
        unsigned char bounded[32]{};
        const auto available = (std::min)(size_t(15), size - cursor);
        if (!available) return {};
        std::memcpy(bounded, bytes + cursor, available);
        hde64_disasm(bounded, &op);
        if (!op.len || op.len > available || (op.flags & F_ERROR) || op.p_lock || op.p_rep || op.p_66 || op.p_seg) return {};
        cursor += op.len;
    }
    uint32_t frame = 0, other = 0; int32_t length = 0, object = 0, capacity = 0, buffer = 0;
    const auto &store = ops[0], &address = ops[1], &compare = ops[2], &select = ops[3], &zero = ops[4];
    if (store.opcode != 0x89 || !store.rex_w || !local(store, frame, length) || reg(store) == 0 || reg(store) == 4 || reg(store) == 5 ||
            address.opcode != 0x8d || !address.rex_w || reg(address) != 0 || !local(address, other, object) || other != frame ||
            compare.opcode != 0x83 || !compare.rex_w || compare.modrm_reg != 7 || compare.imm.imm8 != 15 ||
            !local(compare, other, capacity) || other != frame ||
            select.opcode != 0x0f || select.opcode2 != 0x47 || !select.rex_w || reg(select) != 0 ||
            !local(select, other, buffer) || other != frame ||
            int64_t(object) + 16 != length || int64_t(object) + 24 != capacity || buffer != object ||
            zero.p_67) return {};
    // An optimized fixed-width shrink can use [RAX+constant] and a preserved
    // zero register. This shape is incomplete evidence by itself: discovery
    // additionally proves the width and zero definitions on every predecessor.
    if ((zero.opcode == 0x88 || (zero.opcode == 0xc6 && !zero.modrm_reg && !zero.imm.imm8)) &&
            (zero.modrm_mod == 1 || zero.modrm_mod == 2) && !(zero.flags & F_SIB) &&
            zero.modrm_rm == 0 && !zero.rex_b) {
        const auto end = zero.flags & F_DISP32 ? static_cast<int32_t>(zero.disp.disp32) :
            static_cast<int8_t>(zero.disp.disp8);
        if (end <= 0) return {};
        const auto source = zero.opcode == 0x88 ? reg(zero) : 16u;
        if (zero.opcode == 0x88 && !zero.rex && source >= 4) return {}; // AH..BH are not GPR low bytes.
        return {static_cast<uint32_t>(cursor), frame, reg(store), object, static_cast<uint32_t>(end), source};
    }
    if (zero.opcode != 0xc6 || zero.modrm_reg != 0 || zero.modrm_mod != 0 || !(zero.flags & F_SIB) ||
            zero.sib_scale || zero.imm.imm8 != 0) return {};
    const unsigned a = zero.sib_base + (zero.rex_b ? 8 : 0), b = zero.sib_index + (zero.rex_x ? 8 : 0);
    if (!((a == 0 && b == reg(store)) || (b == 0 && a == reg(store))) ||
            (zero.sib_index == 4 && !zero.rex_x) || (zero.sib_base == 5 && zero.modrm_mod == 0)) return {};
    return {static_cast<uint32_t>(cursor), frame, reg(store), object};
}
inline Operation canonical_operation(const unsigned char *bytes, size_t size) {
    const auto result = operation(bytes, size);
    if (!result || result.length != size || result.constant_width) return {};
    size_t cursor = 0;
    for (unsigned index = 0; index < 4; ++index) {
        // Keep this source admission boundary identical to the producer's
        // literal parser. The target decoder can additionally discover a
        // local at RSP+0 using the shorter displacement-free encoding.
        if ((bytes[cursor] & 0xf8) != 0x48) return {};
        unsigned char bounded[32]{};
        std::memcpy(bounded, bytes + cursor, (std::min)(size_t(15), size - cursor));
        display_decode::hde64s op{}; display_decode::hde64_disasm(bounded, &op);
        if ((op.modrm_mod != 1 && op.modrm_mod != 2) || op.rex_b || op.rex_x) return {};
        cursor += op.len;
    }
    return result;
}
inline constexpr uint32_t call_form = 4;
inline constexpr uint32_t constant_end_form = 8;
inline constexpr uint32_t guard_form = 16;
inline constexpr uint32_t operation_forms = call_form | constant_end_form | guard_form;
inline bool valid_forms(uint32_t flags) {
    return !((flags & call_form) && (flags & (constant_end_form | guard_form))) &&
        !((flags & guard_form) && (flags & constant_end_form));
}
struct ResizeGuard { uint32_t width = 0, compare = 0, length = 0; int32_t displacement = 0; };
inline ResizeGuard resize_guard(const unsigned char *bytes, size_t size) {
    using namespace display_decode;
    if (!bytes || size < 5 || size > 16) return {};
    unsigned char bounded[32]{}; std::memcpy(bounded, bytes, size);
    hde64s compare{}, branch{}; hde64_disasm(bounded, &compare);
    if (compare.flags & F_ERROR || !compare.len || compare.len >= size || compare.opcode != 0x3b ||
            !compare.rex_w || compare.modrm_mod != 3 || rm(compare) != 1 || reg(compare) == 0 ||
            reg(compare) == 4 || reg(compare) == 5 || compare.p_66 || compare.p_67 || compare.p_lock || compare.p_rep || compare.p_seg) return {};
    hde64_disasm(bounded + compare.len, &branch);
    if (branch.flags & F_ERROR || !branch.len || compare.len + branch.len != size || branch.rex ||
            branch.p_66 || branch.p_67 || branch.p_lock || branch.p_rep || branch.p_seg ||
            !(branch.opcode == 0x77 || (branch.opcode == 0x0f && branch.opcode2 == 0x87))) return {};
    return {reg(compare), compare.len, static_cast<uint32_t>(size), branch.opcode == 0x77 ?
        static_cast<int8_t>(branch.imm.imm8) : static_cast<int32_t>(branch.imm.imm32)};
}
struct Spec {
    uint32_t reference, owner, draw, callee, flags;
    std::vector<unsigned char> original;
    uint32_t producer = 0, argument = 0, resize = 0, source_width = 0;
};
inline std::vector<Spec> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    const auto version = reader.number();
    if (std::memcmp(magic, "DFCNIR01", 8) || !version || version > 3)
        throw std::runtime_error("Unsupported native inline resize evidence");
    std::vector<Spec> result(reader.count(4096));
    std::set<uint32_t> seen;
    for (auto &spec : result) {
        spec = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.blob()};
        if (version >= 2) { spec.producer = reader.number(); spec.argument = reader.number(); spec.resize = reader.number(); }
        if (version >= 3) spec.source_width = reader.number();
        const auto source = operation(spec.original.data(), spec.original.size());
        const bool call = version >= 3 && spec.original.size() == 5 && spec.original.front() == 0xe8;
        int32_t displacement = 0;
        if (call) std::memcpy(&displacement, spec.original.data() + 1, 4);
        if (!spec.reference || !spec.owner || !spec.draw || !spec.callee || (spec.flags & ~3u) ||
                (call ? (!spec.resize || spec.reference + 5 + displacement != spec.resize) :
                    (!source || source.length != spec.original.size() || source.constant_width || spec.source_width)) ||
                !seen.insert(spec.reference).second ||
                (spec.producer && (spec.argument < 1 || spec.argument > 2 || !spec.resize)) ||
                (!spec.producer && spec.argument))
            throw std::runtime_error("Invalid native inline resize contract");
    }
    reader.finish(); return result;
}
inline bool writes_rdx(const display_decode::hde64s &op) {
    using namespace display_decode;
    if (op.opcode >= 0xb8 && op.opcode <= 0xbf) return op.opcode - 0xb8 + (op.rex_b ? 8 : 0) == 2;
    if (op.opcode >= 0x58 && op.opcode <= 0x5f) return op.opcode - 0x58 + (op.rex_b ? 8 : 0) == 2;
    if (op.opcode == 0x99 || op.opcode == 0x9a || op.opcode == 0xc8 || op.opcode == 0xc9) return true;
    if (!(op.flags & F_MODRM)) return false;
    if (op.opcode == 0x39 || op.opcode == 0x3b || op.opcode == 0x85 ||
            ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 7)) return false;
    if (op.opcode == 0x89) return op.modrm_mod == 3 && rm(op) == 2;
    if (op.opcode == 0x8b || op.opcode == 0x8d || op.opcode == 0x63) return reg(op) == 2;
    if (op.opcode == 0xf7 && op.modrm_reg >= 4) return true; // MUL/DIV write implicit RDX.
    // Conservative for unfamiliar operand classes; losing a candidate is
    // preferable to retaining RDX through an unproved definition.
    return reg(op) == 2 || (op.modrm_mod == 3 && rm(op) == 2);
}
inline bool reaches_draw(const std::map<uint32_t, display_decode::Instruction> &code,
        uint32_t start, uint32_t draw, uint32_t callee, const Operation &object) {
    using namespace display_decode;
    std::vector<std::pair<uint32_t, bool>> pending{{start, false}};
    std::set<std::pair<uint32_t, bool>> visited;
    bool reached = false;
    while (!pending.empty()) {
        auto [address, owns] = pending.back(); pending.pop_back();
        if (!visited.emplace(address, owns).second) continue;
        if (visited.size() > 512) return false;
        const auto found = code.find(address);
        if (found == code.end()) continue;
        const auto &op = found->second.decoded;
        if (address == draw) {
            const int64_t target = int64_t(address) + op.len + static_cast<int32_t>(op.imm.imm32);
            if (op.opcode != 0xe8 || !owns || target != callee) return false;
            reached = true; continue;
        }
        if (op.opcode == 0xe8 || op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                (op.opcode == 0xff && op.modrm_reg >= 2) || (op.opcode >= 0xe0 && op.opcode <= 0xe3)) continue;
        // A new frame invalidates the retained local-object identity.
        if (frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) continue;
        if (op.opcode == 0x8d && op.rex_w && reg(op) == 2) {
            uint32_t base = 0; int32_t offset = 0;
            owns = local(op, base, offset) && base == object.frame && offset == object.object;
        } else if (writes_rdx(op)) owns = false;
        const bool short_branch = op.opcode >= 0x70 && op.opcode <= 0x7f;
        const bool near_branch = op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f;
        if (short_branch || near_branch || op.opcode == 0xe9 || op.opcode == 0xeb) {
            const int64_t displacement = short_branch || op.opcode == 0xeb ?
                int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32));
            const auto target = int64_t(address) + op.len + displacement;
            if (target > 0 && target <= UINT32_MAX) pending.emplace_back(static_cast<uint32_t>(target), owns);
            if (op.opcode == 0xe9 || op.opcode == 0xeb) continue;
        }
        pending.emplace_back(address + op.len, owns);
    }
    return reached;
}
using Code = std::map<uint32_t, display_decode::Instruction>;
inline uint32_t direct_target(const display_decode::Instruction &instruction) {
    if (instruction.decoded.opcode != 0xe8) return 0;
    const auto target = int64_t(instruction.address) + instruction.decoded.len +
        static_cast<int32_t>(instruction.decoded.imm.imm32);
    return target > 0 && target <= UINT32_MAX ? static_cast<uint32_t>(target) : 0;
}
inline bool argument_local(const Code &code, uint32_t call, unsigned wanted, Operation &object,
        const std::set<uint32_t> *entries = nullptr) {
    auto at = code.find(call);
    for (unsigned count = 0; at != code.begin() && at != code.end() && count < 24; ++count) {
        if (entries && entries->contains(at->first)) return false;
        const auto next = at--; const auto &instruction = at->second; const auto &op = instruction.decoded;
        if (uint64_t(instruction.address) + op.len != next->first) return false;
        if (op.opcode == 0xe8 || op.opcode == 0xe9 || op.opcode == 0xeb || op.opcode == 0xc3 ||
                (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
                (op.opcode == 0xff && op.modrm_reg >= 2) || frame_detail::writes_rsp(op) ||
                frame_detail::frame_writes_rbp(op)) return false;
        if (op.opcode == 0x8d && op.rex_w && reg(op) == wanted)
            return local(op, object.frame, object.object);
        if (display_decode::writes_gpr(op, wanted)) return false;
    }
    return false;
}
inline bool zero_argument(const Code &code, uint32_t call, unsigned wanted,
        const std::set<uint32_t> *entries = nullptr) {
    auto at = code.find(call);
    for (unsigned count = 0; at != code.begin() && at != code.end() && count < 24; ++count) {
        if (entries && entries->contains(at->first)) return false;
        const auto next = at--; const auto &instruction = at->second; const auto &op = instruction.decoded;
        if (uint64_t(instruction.address) + op.len != next->first) return false;
        if (op.opcode == 0xe8 || (op.opcode == 0xff && op.modrm_reg >= 2) ||
                frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) return false;
        if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && !op.p_66 &&
                reg(op) == wanted && rm(op) == wanted) return true;
        if (op.opcode >= 0xb8 && op.opcode <= 0xbf && !op.p_66 &&
                op.opcode - 0xb8 + (op.rex_b ? 8u : 0u) == wanted)
            return !(op.rex_w ? op.imm.imm64 : op.imm.imm32);
        if (display_decode::writes_gpr(op, wanted) || op.opcode == 0xe9 || op.opcode == 0xeb ||
                (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f)) return false;
    }
    return false;
}
inline bool constant_register(const Code &code, const std::set<uint32_t> &entries,
        uint32_t address, unsigned wanted, uint64_t expected) {
    auto at = code.find(address);
    const bool preserved = wanted == 3 || wanted == 5 || wanted == 6 || wanted == 7 || wanted >= 12;
    for (unsigned count = 0; at != code.begin() && at != code.end() && count < 128; ++count) {
        // A join can bring a different value. This proof uses only one actual
        // fallthrough chain, ending at a complete constant definition.
        if (entries.contains(at->first)) return false;
        const auto next = at--; const auto &instruction = at->second; const auto &op = instruction.decoded;
        if (uint64_t(instruction.address) + op.len != next->first) return false;
        if (op.opcode == 0xe8 || (op.opcode == 0xff && op.modrm_reg == 2)) {
            if (!preserved) return false;
            continue;
        }
        if (op.opcode == 0xe9 || op.opcode == 0xeb || op.opcode == 0xc2 || op.opcode == 0xc3 ||
                (op.opcode == 0xff && op.modrm_reg >= 4) ||
                (op.opcode >= 0xe0 && op.opcode <= 0xe3)) return false;
        if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && !op.p_66 &&
                reg(op) == wanted && rm(op) == wanted) return expected == 0;
        if (op.opcode >= 0xb8 && op.opcode <= 0xbf && !op.p_66 &&
                op.opcode - 0xb8 + (op.rex_b ? 8u : 0u) == wanted)
            return (op.rex_w ? op.imm.imm64 : op.imm.imm32) == expected;
        if (display_decode::writes_gpr(op, wanted)) return false;
    }
    return false;
}
inline bool producer_role(const Code &code, uint32_t start, const Operation &object,
        uint32_t producer, unsigned argument, const std::set<uint32_t> *entries = nullptr) {
    std::map<uint32_t, std::vector<uint32_t>> predecessors;
    for (const auto &[address, instruction] : code) {
        const auto &op = instruction.decoded;
        const bool short_branch = (op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xeb;
        const bool near_branch = op.opcode == 0xe9 || (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        if (short_branch || near_branch) {
            const auto target = int64_t(address) + op.len + (short_branch ?
                int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (target > 0 && target <= UINT32_MAX && code.contains(static_cast<uint32_t>(target)))
                predecessors[static_cast<uint32_t>(target)].push_back(address);
        }
        if (op.opcode != 0xe9 && op.opcode != 0xeb && op.opcode != 0xc2 && op.opcode != 0xc3 && op.opcode != 0xcc &&
                !(op.opcode == 0xff && op.modrm_reg >= 4) && code.contains(address + op.len))
            predecessors[address + op.len].push_back(address);
    }
    std::vector<uint32_t> pending = predecessors[start]; std::set<uint32_t> visited;
    std::set<std::pair<uint32_t, unsigned>> roles;
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (!visited.insert(address).second) continue;
        if (visited.size() > 4096) return false;
        const auto &instruction = code.at(address); const auto &op = instruction.decoded;
        if (op.opcode == 0xe8) {
            for (unsigned reg = 1; reg <= 2; ++reg) {
                Operation passed;
                if (argument_local(code, address, reg, passed, entries) && passed.frame == object.frame && passed.object == object.object)
                    roles.emplace(direct_target(instruction), reg);
            }
            continue;
        }
        if ((op.opcode == 0xff && op.modrm_reg >= 2) || (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) continue;
        uint32_t frame = 0; int32_t offset = 0;
        if (local(op, frame, offset) && frame == object.frame && op.opcode != 0x8d && !display_decode::memory_read_only(op)) {
            const auto width = display_decode::access_width(op);
            if (width == UINT32_MAX || (int64_t(offset) < int64_t(object.object) + 32 &&
                    int64_t(offset) + width > object.object)) continue;
        }
        const auto &before = predecessors[address]; pending.insert(pending.end(), before.begin(), before.end());
    }
    return roles.size() == 1 && roles.contains({producer, argument});
}
template<typename Image>
inline bool string_subscript(const Image &image, uint32_t address) {
    // Complete, side-effect-free MSVC string::operator[]: both SSO branches
    // return data()+index. No target address or release identity is assumed.
    static constexpr unsigned char bytes[]{0x48,0x83,0x79,0x18,0x0f,0x76,0x07,0x48,0x8b,0x01,
        0x48,0x03,0xc2,0xc3,0x48,0x8d,0x04,0x11,0xc3};
    const auto *actual = image.read(address, sizeof(bytes));
    return actual && !std::memcmp(actual, bytes, sizeof(bytes));
}
template<typename Image>
inline bool string_resize_call(const Image &image, uint32_t address) {
    // The complete shrinking arm stores the actual RDX length, selects the
    // SSO/heap buffer and writes its terminator. The growing arm remains the
    // original independently identified native function.
    static constexpr unsigned char bytes[]{0x48,0x8b,0x41,0x10,0x48,0x3b,0xd0,0x77,0x13,
        0x48,0x89,0x51,0x10,0x48,0x83,0x79,0x18,0x0f,0x76,0x03,0x48,0x8b,0x09,
        0xc6,0x04,0x11,0x00,0xc3};
    const auto *actual = image.read(address, sizeof(bytes));
    return actual && !std::memcmp(actual, bytes, sizeof(bytes));
}
template<typename Image>
inline std::set<uint32_t> paired_draws(const Image &image, const Code &code, uint32_t start,
        uint32_t callee, const Operation &object, bool plain, const std::set<uint32_t> *entries = nullptr) {
    using namespace display_decode;
    using Step = std::array<uint32_t, 3>; // instruction, owned RDX, dot count
    std::vector<Step> pending{{start, 0, 0}}; std::set<Step> visited;
    std::set<uint32_t> draws;
    while (!pending.empty()) {
        const auto step = pending.back(); pending.pop_back();
        if (!visited.insert(step).second) continue;
        if (visited.size() > 4096) return {};
        const auto found = code.find(step[0]); if (found == code.end()) continue;
        const auto &instruction = found->second; const auto &op = instruction.decoded;
        bool owns = step[1]; unsigned dots = step[2];
        if (op.opcode == 0xe8) {
            const auto target = direct_target(instruction);
            if (target == callee && owns && (plain || dots == 3)) draws.insert(instruction.address);
            else if (dots < 3 && string_subscript(image, target)) {
                Operation passed;
                const auto next = code.find(instruction.address + op.len);
                if (argument_local(code, instruction.address, 1, passed, entries) && passed.frame == object.frame &&
                        passed.object == object.object && next != code.end()) {
                    const auto &store = next->second.decoded;
                    if (store.opcode == 0xc6 && store.modrm_mod == 0 && !store.modrm_reg &&
                            !(store.flags & F_SIB) && store.modrm_rm == 0 && !store.rex_b && store.imm.imm8 == '.')
                        pending.push_back({next->first + store.len, 0, dots + 1});
                }
            }
            continue;
        }
        if (op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                (op.opcode == 0xff && op.modrm_reg >= 2) || (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) continue;
        uint32_t written_frame; int32_t written_offset;
        if (op.opcode != 0x8d && local(op, written_frame, written_offset) && written_frame == object.frame && !memory_read_only(op)) {
            const auto width = access_width(op);
            if (width == UINT32_MAX || (int64_t(written_offset) < int64_t(object.object) + 32 &&
                    int64_t(written_offset) + width > object.object)) continue;
        }
        if (op.opcode == 0x8d && op.rex_w && reg(op) == 2) {
            uint32_t base; int32_t offset;
            owns = local(op, base, offset) && base == object.frame && offset == object.object;
        } else if (writes_rdx(op)) owns = false;
        const bool indexed_dot = op.modrm_mod == 1 && (op.flags & F_SIB) && !op.sib_scale &&
            static_cast<int8_t>(op.disp.disp8) == int(dots) - 3;
        const auto dot_offset = op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
            static_cast<int8_t>(op.disp.disp8);
        const bool constant_dot = object.constant_width >= 3 && (op.modrm_mod == 1 || op.modrm_mod == 2) &&
            !(op.flags & F_SIB) && !op.modrm_rm && !op.rex_b &&
            int64_t(dot_offset) == int64_t(object.constant_width) - 3 + dots;
        if (dots < 3 && op.opcode == 0xc6 && op.modrm_reg == 0 && op.imm.imm8 == '.' && !op.p_67 &&
                (indexed_dot || constant_dot)) {
            const auto a = op.sib_base + (op.rex_b ? 8u : 0u), b = op.sib_index + (op.rex_x ? 8u : 0u);
            auto at = found;
            std::array<const Instruction *, 3> selection{}; bool contiguous = true;
            for (auto &part : selection) {
                if (at == code.begin()) { contiguous = false; break; }
                if (entries && entries->contains(at->first)) { contiguous = false; break; }
                const auto next = at--; part = &at->second;
                if (at->first + part->decoded.len != next->first) { contiguous = false; break; }
            }
            if (contiguous && (constant_dot || (a == 0 && b == object.width) || (b == 0 && a == object.width))) {
                const auto &select = selection[0]->decoded, &compare = selection[1]->decoded, &address = selection[2]->decoded;
                uint32_t frame; int32_t offset;
                const bool selected = select.opcode == 0x0f && select.opcode2 == 0x47 && select.rex_w && !reg(select) &&
                    local(select, frame, offset) && frame == object.frame && offset == object.object;
                const bool capacity = compare.opcode == 0x83 && compare.rex_w && compare.modrm_reg == 7 && compare.imm.imm8 == 15 &&
                    local(compare, frame, offset) && frame == object.frame && int64_t(offset) == int64_t(object.object) + 24;
                const bool buffer = address.opcode == 0x8d && address.rex_w && !reg(address) &&
                    local(address, frame, offset) && frame == object.frame && offset == object.object;
                if (selected && capacity && buffer) ++dots;
            }
        }
        const bool short_branch = (op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xeb;
        const bool near_branch = op.opcode == 0xe9 || (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        if (short_branch || near_branch) {
            const auto target = int64_t(instruction.address) + op.len + (short_branch ?
                int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (target > 0 && target <= UINT32_MAX) pending.push_back({static_cast<uint32_t>(target), owns, dots});
            if (op.opcode == 0xe9 || op.opcode == 0xeb) continue;
        }
        pending.push_back({instruction.address + op.len, owns, dots});
    }
    return draws;
}
} // namespace dfcn::pe_runtime::inline_resize_detail

namespace dfcn::pe_runtime {
inline uint32_t inline_resize_function(const address_runtime::State &state, uint32_t reference) {
    const auto owner = address_runtime::resolve(state.function_owners, reference);
    if (owner) return owner;
    if (state.edition == 1) return reference; // Exact canonical executable identity.
    return state.edition == 2 ? address_runtime::resolve(state.ranges, reference) : 0;
}
inline uint32_t inline_resize_callee(const address_runtime::State &state, uint32_t reference) {
    const auto entry = address_runtime::resolve(state.ranges, reference);
    const auto scope = address_runtime::resolve(state.function_owners, reference);
    if (entry && scope && entry != scope)
        throw std::runtime_error("Inline resize callee entry contradicts its function identity");
    // Leaf functions can have an independently proved code entry without a
    // PE unwind scope. Only the containing caller needs a logical owner.
    if (entry || scope) return entry ? entry : scope;
    return state.edition == 1 ? reference : 0;
}
inline void complete_inline_resizes(address_runtime::State &state, const std::vector<unsigned char> &blob) {
    const auto specs = inline_resize_detail::read(blob);
    state.missing_inline_resizes.clear();
    std::set<uint32_t> seen;
    for (const auto &binding : state.inline_resizes)
        if (!seen.insert(binding.reference).second) throw std::runtime_error("Duplicate native inline resize binding");
    for (const auto &spec : specs) {
        const auto found = std::find_if(state.inline_resizes.begin(), state.inline_resizes.end(),
            [&](const auto &binding) { return binding.reference == spec.reference; });
        const bool absent = std::any_of(state.absent_spans.begin(), state.absent_spans.end(), [&](const auto &span) {
            return span.begin <= spec.reference && uint64_t(spec.reference) + spec.original.size() <= span.end;
        });
        if (absent) {
            // complete_method_calls validates the complete named ownership
            // contract for every absent span; chooser completion additionally
            // retains the positive main-name/resize/grow/draw proof.
            if (found != state.inline_resizes.end()) throw std::runtime_error("Absent inline operation acquired a native binding");
            continue;
        }
        const bool call = found != state.inline_resizes.end() && (found->flags & inline_resize_detail::call_form);
        const bool source_call = spec.original.size() == 5 && spec.original.front() == 0xe8;
        const bool constant_end = found != state.inline_resizes.end() && (found->flags & inline_resize_detail::constant_end_form);
        const bool guard = found != state.inline_resizes.end() && (found->flags & inline_resize_detail::guard_form);
        if (found == state.inline_resizes.end() || !found->owner || !found->native_instruction ||
                found->length < 5 || found->length > 128 ||
                (call ? ((!spec.producer && !source_call) || !spec.resize || constant_end || found->length != 5 || found->frame_register != 1 ||
                    found->width_register != 2 || found->object_displacement) :
                    ((found->frame_register != 4 && found->frame_register != 5) || found->width_register > 15 ||
                     found->width_register == 0 || found->width_register == 4 || found->width_register == 5)) ||
                (guard && !source_call) || !inline_resize_detail::valid_forms(found->flags) ||
                (found->flags & ~inline_resize_detail::operation_forms) != spec.flags ||
                inline_resize_function(state, spec.owner) != found->owner)
            state.missing_inline_resizes.push_back(spec.reference);
    }
}
template<typename Image, typename Catalog>
inline void discover_inline_resizes(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace address_runtime;
    using namespace inline_resize_detail;
    const auto &blob = catalog.inline_resizes;
    state.inline_resizes.clear();
    struct Scope {
        bool valid = false;
        display_decode::DecodeFailure failure;
        std::map<uint32_t, display_decode::Instruction> code;
        std::set<uint32_t> targets;
        frame_detail::TargetRbpFrame frame;
    };
    std::map<uint32_t, Scope> scopes;
    const auto specs = read(blob);
    std::map<uint32_t, std::vector<InlineResizeBinding>> matches;
    std::map<std::pair<uint32_t, uint32_t>, uint32_t> paired;
    std::map<uint32_t, const Spec *> declarations;
    for (const auto &spec : specs) declarations.emplace(spec.reference, &spec);
    std::map<std::array<uint32_t, 6>, std::vector<uint32_t>> groups;
    for (const auto &spec : specs) {
        const auto draw = state.edition == 1 ? spec.draw : resolve(state.ranges, spec.draw);
        groups[{spec.owner, draw ? spec.draw : 0, spec.callee, spec.flags,
            draw ? 0 : spec.producer, draw ? 0 : spec.argument}].push_back(spec.reference);
    }
    for (const auto &spec : specs) {
        const auto owner = inline_resize_function(state, spec.owner);
        const auto draw = state.edition == 1 ? spec.draw : resolve(state.ranges, spec.draw);
        const auto callee = inline_resize_callee(state, spec.callee);
        const auto producer = spec.producer ? inline_resize_callee(state, spec.producer) : 0;
        const auto resize = spec.resize ? inline_resize_callee(state, spec.resize) : 0;
        const bool source_call = spec.original.size() == 5 && spec.original.front() == 0xe8;
        const bool role_ready = spec.producer && producer && resize;
        const auto diagnostic = [&](const std::string &reason) {
            if (!report) return;
            std::ostringstream message;
            message << "Inline resize unresolved: reference=0x" << std::hex << spec.reference
                << " owner=0x" << spec.owner << "->0x" << owner
                << " draw=0x" << spec.draw << "->0x" << draw
                << " callee=0x" << spec.callee << "->0x" << callee
                << " formatter=0x" << spec.producer << "->0x" << producer
                << " resize=0x" << spec.resize << "->0x" << resize << ' ' << reason;
            report(message.str());
        };
        if (!owner || !callee || (!draw && !role_ready)) {
            diagnostic("missing mapped owner/draw/formatter/resize dependency"); continue;
        }
        const auto native_owner = frame_detail::function_at(image, owner);
        if (native_owner == image.functions.end() || native_owner->begin != owner ||
                (native_owner->owner ? native_owner->owner : native_owner->begin) != owner) {
            diagnostic("mapped owner is not a logical unwind entry"); continue;
        }
        auto [entry, inserted] = scopes.try_emplace(owner);
        auto &scope = entry->second;
        if (inserted) {
            bool valid = true;
            for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
                std::vector<display_decode::Instruction> code;
                if (!display_decode::decode(image, begin, end, code, &scope.targets, &scope.failure)) {
                    valid = false; break;
                }
                for (auto &instruction : code) scope.code.emplace(instruction.address, std::move(instruction));
            }
            scope.valid = valid && !scope.code.empty();
            scope.frame = frame_detail::target_rbp_frame(image, owner);
        }
        if (!scope.valid) {
            std::ostringstream reason;
            reason << "scope decode failed at 0x" << std::hex << scope.failure.address
                << ": " << scope.failure.reason << " register=" << std::dec << scope.failure.reg;
            diagnostic(reason.str()); continue;
        }
        std::vector<InlineResizeBinding> candidates;
        size_t shapes = 0, frames = 0, branches = 0;
        for (const auto &[address, instruction] : scope.code) {
            const bool call = (role_ready || (source_call && draw && resize)) &&
                instruction.decoded.opcode == 0xe8 && direct_target(instruction) == resize;
            if (!call && instruction.decoded.opcode != 0x89) continue;
            const auto function = frame_detail::function_at(image, address);
            if (function == image.functions.end()) continue;
            const auto available = (std::min)(uint32_t(128), function->end - address);
            Operation target;
            if (call) {
                if (!string_resize_call(image, resize) || !argument_local(scope.code, address, 1, target, &scope.targets) ||
                        !zero_argument(scope.code, address, 8, &scope.targets)) continue;
                target.length = instruction.decoded.len; target.width = 2;
            } else target = operation(image.read(address, available), available);
            if (!target || !scope.code.contains(address + target.length)) continue;
            if (target.constant_width && (!constant_register(scope.code, scope.targets, address,
                    target.width, target.constant_width) || (target.zero_register < 16 &&
                    !constant_register(scope.code, scope.targets, address, target.zero_register, 0)))) continue;
            ++shapes;
            // The complete store/select/terminator expression establishes
            // the width register's role. The relay reads that actual register,
            // so register allocation need not agree with the reference image.
            if (target.frame == 5 && (!scope.frame.valid || address < scope.frame.ready ||
                    uint64_t(address) + target.length > scope.frame.end)) continue;
            ++frames;
            const auto branch = scope.targets.upper_bound(address);
            if (branch != scope.targets.end() && *branch < uint64_t(address) + target.length) continue;
            ++branches;
            // An independently identified draw retains the original proof:
            // complete inline resize followed by this exact string at that
            // exact CALL. New formatter metadata is not an extra prerequisite.
            bool accepted = draw && !call && reaches_draw(scope.code, address + target.length, draw, callee, target);
            if (!accepted && draw && call && source_call) {
                const auto draws = paired_draws(image, scope.code, address + target.length, callee, target, spec.flags & 1, &scope.targets);
                accepted = draws.size() == 1 && draws.contains(draw);
            }
            uint32_t paired_draw = accepted ? draw : 0;
            if (!accepted && role_ready && producer_role(scope.code, address, target, producer, spec.argument, &scope.targets)) {
                const auto draws = paired_draws(image, scope.code, address + target.length, callee, target, spec.flags & 1, &scope.targets);
                accepted = draws.size() == 1 && (!draw || draws.contains(draw));
                if (accepted) paired_draw = *draws.begin();
            }
            if (!accepted) continue;
            paired.emplace(std::pair{spec.reference, address}, paired_draw);
            candidates.push_back({spec.reference, owner, address, target.length, call ? 1u : target.frame,
                call ? 2u : target.width, call ? 0 : target.object,
                spec.flags | (call ? call_form : 0u) | (target.constant_width ? constant_end_form : 0u)});
        }
        if (candidates.empty()) {
            std::ostringstream reason;
            reason << "candidates shape/frame/branch/draw=" << shapes << '/' << frames
                << '/' << branches << '/' << candidates.size() << "; rbp=" << scope.frame.valid
                << " [0x" << std::hex << scope.frame.ready << ",0x" << scope.frame.end << ')';
            for (const auto &candidate : candidates) reason << " candidate=0x" << candidate.native_instruction;
            diagnostic(reason.str());
        }
        matches.emplace(spec.reference, std::move(candidates));
    }
    std::set<uint32_t> claimed;
    std::map<uint32_t, uint32_t> draw_bindings;
    // Publish independently paired draws first. A formatter role can then
    // identify the complete remaining equivalent operation set without
    // claiming an operation already tied to a different known draw.
    for (bool established : {true, false}) for (const auto &[key, references] : groups) {
        if (bool(key[1]) != established) continue;
        const auto first = matches.find(references.front());
        if (first == matches.end() || first->second.empty()) continue;
        const auto unclaimed = [&](const auto &values) {
            std::vector<InlineResizeBinding> result;
            for (const auto &value : values)
                if (!claimed.contains(value.native_instruction)) result.push_back(value);
            return result;
        };
        const auto candidates = unclaimed(first->second);
        bool identical = candidates.size() == references.size();
        for (auto reference : references) {
            const auto found = matches.find(reference);
            if (found == matches.end()) { identical = false; break; }
            const auto remaining = unclaimed(found->second);
            if (remaining.size() != candidates.size()) { identical = false; break; }
            for (size_t at = 0; at < candidates.size(); ++at) {
                const auto &left = candidates[at], &right = remaining[at];
                if (left.owner != right.owner || left.native_instruction != right.native_instruction ||
                        left.length != right.length || left.frame_register != right.frame_register ||
                        left.width_register != right.width_register || left.object_displacement != right.object_displacement ||
                        left.flags != right.flags) { identical = false; break; }
            }
        }
        if (!identical) {
            if (report) {
                std::ostringstream message;
                message << "Inline resize unresolved operation group: owner=0x" << std::hex << key[0]
                    << " draw=0x" << key[1] << std::dec << " source=" << references.size()
                    << " target=" << candidates.size() << "; candidates=" << std::hex;
                for (const auto &candidate : candidates) message << " 0x" << candidate.native_instruction;
                report(message.str());
            }
            continue;
        }
        // Equivalent observer configurations do not identify the individual
        // source branches. Publish a draw correspondence only when the whole
        // accepted group has one source draw and one actual draw, independently
        // of the arbitrary order used to install equivalent resize observers.
        std::set<uint32_t> source_draws, native_draws;
        for (auto reference : references) {
            source_draws.insert(declarations.at(reference)->draw);
            for (const auto &candidate : candidates)
                native_draws.insert(paired.at({reference, candidate.native_instruction}));
        }
        if (source_draws.size() == 1 && native_draws.size() == 1) {
            const auto [entry, inserted] = draw_bindings.emplace(*source_draws.begin(), *native_draws.begin());
            if (!inserted && entry->second != *native_draws.begin())
                throw std::runtime_error("Inline resize groups disagree on their unique native draw");
        }
        // Equal operations feeding the same draw can occupy separate native
        // branches. Install every independently proved operation exactly once.
        // These keys identify equivalent observer configurations only; they do
        // not publish an instruction correspondence into state.ranges.
        for (size_t at = 0; at < references.size(); ++at) {
            auto binding = candidates[at];
            binding.reference = references[at];
            if (!claimed.insert(binding.native_instruction).second)
                throw std::runtime_error("Two inline resize groups claim the same native operation");
            state.inline_resizes.push_back(binding);
        }
    }
    std::sort(state.inline_resizes.begin(), state.inline_resizes.end(),
        [](const auto &left, const auto &right) { return left.reference < right.reference; });
    std::map<uint32_t, uint32_t> owners;
    for (const auto &binding : state.inline_resizes)
        if (!owners.emplace(binding.native_instruction, binding.reference).second)
            throw std::runtime_error("Two native caption resize contracts claim the same operation");
    Bindings bindings;
    for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    size_t published = 0;
    for (const auto &[reference, native] : draw_bindings) {
        // Reuse retained, reviewed source CALL boundaries. A source return
        // address needs only its first byte, never an assumed body-wide delta.
        std::vector<unsigned char> original;
        uint32_t source_callee = 0;
        for (const auto &spec : specs) if (spec.draw == reference) {
            if (source_callee && source_callee != spec.callee)
                throw std::runtime_error("Inline resize declarations disagree on their draw callee");
            source_callee = spec.callee;
        }
        for (const auto &pattern : catalog.patterns) {
            if (!(pattern.flags & 1) || reference < pattern.reference ||
                    uint64_t(reference) + 6 > uint64_t(pattern.reference) + pattern.raw.size()) continue;
            const auto offset = reference - pattern.reference;
            if (pattern.raw[offset] != 0xe8 || !std::any_of(pattern.fixups.begin(), pattern.fixups.end(),
                    [&](const auto &fixup) { return (fixup.kind & 0x100) && !(fixup.kind & 0xff) &&
                        fixup.width == 4 && fixup.offset == offset + 1 && fixup.next == offset + 5 &&
                        fixup.target == source_callee; })) continue;
            const std::vector<unsigned char> bytes(pattern.raw.begin() + offset, pattern.raw.begin() + offset + 6);
            if (!original.empty() && original != bytes)
                throw std::runtime_error("Inline draw has conflicting retained source bytes");
            original = bytes;
        }
        if (original.empty()) continue;
        const display_decode::Instruction *call = nullptr, *next = nullptr;
        for (const auto &[owner, scope] : scopes) {
            (void)owner;
            const auto found = scope.code.find(native), following = scope.code.find(native + 5);
            if (scope.valid && found != scope.code.end() && following != scope.code.end()) {
                call = &found->second; next = &following->second; break;
            }
        }
        if (!call || !next || call->decoded.len != 5 ||
                direct_target(*call) != inline_resize_callee(state, source_callee)) continue;
        if (!bindings.compatible(reference, 6, native))
            throw std::runtime_error("Inline resize draw contradicts an existing instruction binding");
        published += bindings.add(reference, 6, native);
        for (uint32_t at = 0; at < 6; ++at) {
            const auto actual = at < 5 ? call->bytes[at] : next->bytes.front();
            if (original[at] == actual) continue;
            const Byte byte{reference + at, original[at], actual};
            const auto [found, inserted] = changes.emplace(byte.address, byte);
            if (!inserted && (found->second.reference != byte.reference || found->second.native != byte.native))
                throw std::runtime_error("Inline resize draw contradicts existing source bytes");
        }
    }
    state.ranges = bindings.export_ranges(); state.bytes.clear();
    for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
    if (report && published) report("Native inline resize: proved " + std::to_string(published) +
        " unique draw CALL and return boundaries");
    complete_inline_resizes(state, blob);
    if (report) report("Native inline caption resize: " + std::to_string(state.inline_resizes.size()) +
        " discovered; " + std::to_string(state.missing_inline_resizes.size()) + " required missing");
}
} // namespace dfcn::pe_runtime
