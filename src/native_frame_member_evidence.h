#pragma once
#include "native_address_scan.h"
#include "native_display_discovery.h"
#include "native_frame_registers.h"

// Included after frame_detail's unwind and stack-operand helpers. Members is
// deliberately structural so frame blocks and call blocks share this proof.
namespace dfcn::pe_runtime::frame_member_detail {
struct ShadowCache {
    const void *image = nullptr;
    std::map<std::pair<uint32_t, uint32_t>, bool> lifetimes;
    address_runtime::Progress report;
    template<typename Image> explicit ShadowCache(const Image &value, const address_runtime::Progress &progress = {})
        : image(&value), report(progress) {}
};
inline bool ordinary(const display_decode::hde64s &op) {
    return !(op.flags & F_ERROR) && !op.p_66 && !op.p_67 &&
        !op.p_lock && !op.p_rep && !op.p_seg;
}
inline bool decode_one(const unsigned char *bytes, size_t available, display_decode::hde64s &op) {
    if (!bytes || !available) return false;
    unsigned char bounded[32]{};
    available = (std::min)(size_t(15), available);
    std::memcpy(bounded, bytes, available);
    display_decode::hde64_disasm(bounded, &op);
    return op.len && op.len <= available && !(op.flags & F_ERROR);
}
inline int32_t offset(const display_decode::hde64s &op) {
    return op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
        op.flags & F_DISP8 ? static_cast<int8_t>(op.disp.disp8) : 0;
}
inline bool receiver_load(const display_decode::hde64s &op) {
    return ordinary(op) && op.opcode == 0x8b && op.rex_w &&
        unsigned(op.modrm_reg + (op.rex_r ? 8 : 0)) != 4 && frame_detail::stack_operand(op);
}
template<typename Member>
inline bool member_shape(const address_runtime::Pattern &pattern, const Member &member) {
    return frame_detail::member_encoding(pattern.raw, {member.instruction, member.displacement,
        member.width, member.load, member.type, member.member, member.source_slot});
}
template<typename Members>
inline bool normalize(const address_runtime::State &state, const Members &members, address_runtime::Pattern &pattern) {
    if (pattern.raw.size() != pattern.mask.size()) return false;
    for (const auto &member : members) {
        if (!member_shape(pattern, member)) return false;
        for (uint32_t at = member.displacement; at < member.displacement + member.width; ++at)
            if (pattern.mask[at]) return false;
        const native_history_abi::FieldBinding *field = nullptr;
        for (const auto &candidate : state.semantic_fields)
            if (candidate.type == member.type && candidate.member == member.member) {
                if (field || !candidate.size || candidate.offset > INT32_MAX ||
                        (member.width == 1 && candidate.offset > INT8_MAX)) return false;
                field = &candidate;
            }
        if (!field) {
            // These editions are admitted only by exact executable identity
            // and share the canonical object ABI. Their prepare path need
            // not materialize every named field. Preserve the exact source
            // operand; matches still proves the target receiver and lifetime.
            if (state.edition == 1 || state.edition == 2) continue;
            return false;
        }
        // This is an exact, typed operand replacement, not a new wildcard.
        std::memcpy(pattern.raw.data() + member.displacement, &field->offset, member.width);
    }
    return true;
}

template<typename Image>
inline bool origin_before(const Image &image, uint32_t address, int32_t &origin) {
    const auto function = frame_detail::function_at(image, address);
    if (function == image.functions.end()) return false;
    const auto *header = image.read(function->unwind, 4);
    if (!header || (header[0] & 7) != 1) return false;
    if (address >= uint64_t(function->begin) + header[1])
        return frame_detail::stack_origin(image, address, origin);
    if (header[0] & (4 << 3)) return false;
    const auto count = uint32_t(header[2]);
    const auto *codes = image.read(function->unwind + 4, count * 2);
    if (!codes && count) return false;
    int64_t allocated = 0;
    for (uint32_t at = 0; at < count;) {
        const auto operation = codes[at * 2 + 1] & 15, info = codes[at * 2 + 1] >> 4;
        uint32_t slots = 1, bytes = 0;
        if (!operation) bytes = 8;
        else if (operation == 1) {
            slots = !info ? 2 : info == 1 ? 3 : 0;
            if (!slots || at + slots > count) return false;
            if (!info) { uint16_t small; std::memcpy(&small, codes + at * 2 + 2, 2); bytes = uint32_t(small) * 8; }
            else std::memcpy(&bytes, codes + at * 2 + 2, 4);
        } else if (operation == 2) bytes = info * 8 + 8;
        else if (operation == 3) { if (info) return false; }
        else if (operation == 4 || operation == 8) slots = 2;
        else if (operation == 5 || operation == 9) slots = 3;
        else return false;
        if (at + slots > count || codes[at * 2] > header[1]) return false;
        if (codes[at * 2] <= address - function->begin) allocated += bytes;
        at += slots;
    }
    if (allocated > INT32_MAX) return false;
    origin = -static_cast<int32_t>(allocated); return true;
}
inline bool reads_memory_only(const display_decode::hde64s &op) {
    const auto code = op.opcode;
    if (code == 0x8a || code == 0x8b || code == 0x63 || code == 0x69 || code == 0x6b ||
            code == 0x38 || code == 0x39 || code == 0x3a || code == 0x3b || code == 0x84 || code == 0x85) return true;
    if (code <= 0x33 && (code & 7) >= 2 && (code & 7) <= 3) return true;
    if (code >= 0x80 && code <= 0x83) return op.modrm_reg == 7;
    if (code == 0xf6 || code == 0xf7) return op.modrm_reg <= 1 || op.modrm_reg >= 4;
    if (code == 0xff) return op.modrm_reg >= 2;
    if (code != 0x0f) return false;
    const auto second = op.opcode2;
    return (second >= 0x40 && second <= 0x4f) || second == 0xb6 || second == 0xb7 ||
        second == 0xbe || second == 0xbf || second == 0xaf || second == 0xbc || second == 0xbd ||
        second == 0x10 || second == 0x12 || second == 0x14 || second == 0x15 || second == 0x16 ||
        second == 0x28 || second == 0x2a || second == 0x2c || second == 0x2d || second == 0x2e || second == 0x2f ||
        (second >= 0x51 && second <= 0x6f) ||
        second == 0x6e || second == 0x6f || (second == 0x7e && op.p_rep == 0xf3) || second == 0x1f;
}
template<typename Image>
inline bool shadow_lifetime(const Image &image, uint32_t owner, uint32_t slot, std::string *failure = nullptr) {
    using namespace display_decode;
    const auto reject = [&](uint32_t address, const char *reason) {
        if (failure) {
            std::ostringstream message;
            message << reason << " instruction=0x" << std::hex << address;
            *failure = message.str();
        }
        return false;
    };
    const auto entry = frame_detail::function_at(image, owner);
    if (entry == image.functions.end() || entry->begin != owner ||
            (entry->owner ? entry->owner : entry->begin) != owner || slot != 8)
        return reject(owner, "receiver owner or home slot is not established");
    const auto *header = image.read(entry->unwind, 4);
    if (!header || (header[0] & 7) != 1 || !header[1]) return reject(owner, "receiver prologue has no unwind description");
    uint32_t saved = 0;
    for (uint32_t address = owner; address < uint64_t(owner) + header[1];) {
        hde64s op{};
        if (!decode_one(image.read(address, (std::min)(uint32_t(15), entry->end - address)),
                (std::min)(uint32_t(15), entry->end - address), op) || !ordinary(op))
            return reject(address, "receiver prologue instruction is not classified");
        if (op.opcode == 0x89 && frame_detail::stack_operand(op)) {
            const auto width = access_width(op);
            const auto begin = int64_t(offset(op));
            if (op.rex_w && !op.rex_r && op.modrm_reg == 1 && begin == slot) { saved = address; break; }
            if (width == UINT32_MAX || (begin < int64_t(slot) + 8 && begin + width > slot))
                return reject(address, "receiver home slot is overwritten before its save");
        } else if (op.opcode != 0x90 && !(op.opcode == 0x0f && op.opcode2 == 0x1f)) {
            // Before this store, no changed receiver, stack pointer, branch,
            // call or unclassified operation may replace the actual inputs.
            return reject(address, "receiver or stack can change before the home-slot save");
        }
        address += op.len;
    }
    if (!saved) return reject(owner, "receiver home-slot save is absent");
    const auto rbp = frame_detail::target_rbp_frame(image, owner);
    for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
        std::vector<Instruction> code;
        // A switch dispatch and its inline table may straddle adjacent
        // CHAININFO entries. Decode the complete contiguous owner region.
        DecodeFailure decode_failure;
        if (!decode(image, begin, end, code, nullptr, &decode_failure))
            return reject(decode_failure.address, decode_failure.reason);
        for (const auto &instruction : code) {
            if (instruction.address == saved) continue;
            const auto &op = instruction.decoded;
            // An unrestricted copy of RSP creates a stack alias whose later
            // writes cannot be justified by an explicit local displacement.
            if (op.rex_w && op.modrm_mod == 3 &&
                    ((op.opcode == 0x8b && op.modrm_rm == 4 && !op.rex_b) ||
                     (op.opcode == 0x89 && op.modrm_reg == 4 && !op.rex_r)))
                return reject(instruction.address, "unrestricted stack alias may escape the receiver home slot");
            if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || reads_memory_only(op)) continue;
            int64_t start = 0;
            if ((op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b) {
                if ((op.sib_index != 4 || op.rex_x) || op.p_67)
                    return reject(instruction.address, "indexed or address-size stack write is not bounded");
                int32_t origin = 0;
                if (!origin_before(image, instruction.address, origin))
                    return reject(instruction.address, "stack origin is not proved");
                start = int64_t(origin) + offset(op);
            } else if (!(op.flags & F_SIB) && op.modrm_rm == 5 && op.modrm_mod && !op.rex_b &&
                    rbp.valid && instruction.address >= rbp.ready && instruction.address < rbp.end) {
                if (!rbp.origin_known || op.p_67) return reject(instruction.address, "frame alias origin is not proved");
                start = int64_t(rbp.rsp_offset) + offset(op);
            } else continue;
            const auto width = op.opcode == 0x8d ? 1u : access_width(op);
            if (width == UINT32_MAX) return reject(instruction.address, "stack write width is not classified");
            if (start < int64_t(slot) + 8 && start + width > slot)
                return reject(instruction.address, "receiver home slot is overwritten or its address escapes");
        }
    }
    return true;
}
template<typename Image, typename Members>
inline bool matches(const Image &image, uint32_t owner, uint32_t candidate,
        const address_runtime::Pattern &pattern, const Members &members, ShadowCache *cache = nullptr) {
    if (cache && cache->image != &image) return false;
    std::set<uint32_t> slots;
    for (const auto &member : members) {
        if (!member_shape(pattern, member) || uint64_t(candidate) + pattern.raw.size() > UINT32_MAX) return false;
        const auto address = candidate + member.load;
        const auto function = frame_detail::function_at(image, address);
        if (function == image.functions.end() || (function->owner ? function->owner : function->begin) != owner) return false;
        display_decode::hde64s load{}, source_load{};
        if (!decode_one(image.read(address, (std::min)(uint32_t(15), function->end - address)),
                (std::min)(uint32_t(15), function->end - address), load) || !receiver_load(load) ||
                uint64_t(member.load) + load.len != member.instruction ||
                !decode_one(pattern.raw.data() + member.load, pattern.raw.size() - member.load, source_load) ||
                unsigned(load.modrm_reg + (load.rex_r ? 8 : 0)) !=
                    unsigned(source_load.modrm_reg + (source_load.rex_r ? 8 : 0))) return false;
        int32_t origin = 0;
        if (!frame_detail::stack_origin(image, address, origin) || int64_t(origin) + offset(load) != member.source_slot) return false;
        display_decode::hde64s operation{};
        if (!decode_one(pattern.raw.data() + member.instruction, pattern.raw.size() - member.instruction, operation)) return false;
        const auto *actual = image.read(candidate + member.instruction, operation.len);
        if (!actual || std::memcmp(actual, pattern.raw.data() + member.instruction, operation.len)) return false;
        slots.insert(member.source_slot);
    }
    for (const auto slot : slots) {
        if (cache) {
            const auto key = std::make_pair(owner, slot);
            auto found = cache->lifetimes.find(key);
            if (found == cache->lifetimes.end()) {
                std::string failure;
                const bool valid = shadow_lifetime(image, owner, slot, &failure);
                found = cache->lifetimes.emplace(key, valid).first;
                if (!valid && cache->report) {
                    std::ostringstream message;
                    message << "Typed receiver shadow unresolved: owner=0x" << std::hex << owner
                        << " slot=0x" << slot << " " << failure;
                    cache->report(message.str());
                }
            }
            if (!found->second) return false;
        } else if (!shadow_lifetime(image, owner, slot)) return false;
    }
    return true;
}
} // namespace dfcn::pe_runtime::frame_member_detail
