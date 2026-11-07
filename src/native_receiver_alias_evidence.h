#pragma once
#include "native_frame_discovery.h"
#include "native_frame_registers.h"
#include <type_traits>

// A typed receiver load may use a different nonvolatile register in another
// build. This changes neither arbitrary register operands nor stack slots.
// The complete owner CFG must still prove that the selected register contains
// the incoming RCX at the exact matched instruction.
namespace dfcn::pe_runtime::receiver_alias_detail {
using namespace address_runtime;
using namespace display_decode;
inline constexpr uint16_t nonvolatile = (1u << 3) | (1u << 5) | (1u << 6) | (1u << 7) |
    (1u << 12) | (1u << 13) | (1u << 14) | (1u << 15);
inline bool load(const std::vector<unsigned char> &raw, unsigned &base, unsigned &width) {
    if ((raw.size() != 4 && raw.size() != 7) || (raw[0] & 0xf8) != 0x48 || raw[1] != 0x8b ||
            (raw[2] & 7) == 4) return false;
    const auto mode = raw[2] >> 6;
    width = mode == 1 ? 1 : mode == 2 ? 4 : 0;
    base = (raw[2] & 7) + ((raw[0] & 1) ? 8 : 0);
    return width && raw.size() == 3 + width && (nonvolatile & (1u << base));
}
struct Owner {
    std::map<uint32_t, uint16_t> incoming;
    unsigned base = 16;
    bool valid = false;
};
template<typename Image> class Cache {
    const Image &image_;
    std::map<uint32_t, Owner> owners_;
    Owner discover(uint32_t owner) const {
        Owner result;
        std::map<uint32_t, Instruction> code;
        for (const auto &[begin, end] : frame_detail::logical_regions(image_, owner)) {
            std::vector<Instruction> rows;
            if (!decode(image_, begin, end, rows)) return result;
            for (auto &row : rows) if (!code.emplace(row.address, std::move(row)).second) return result;
        }
        if (!code.count(owner)) return result;
        result.incoming.emplace(owner, 1u << 1);
        std::vector<uint32_t> pending{owner};
        size_t updates = 0;
        while (!pending.empty()) {
            if (++updates > code.size() * 17) return {};
            const auto at = pending.back(); pending.pop_back();
            const auto &instruction = code.at(at); const auto &op = instruction.decoded;
            const auto before = result.incoming.at(at);
            uint16_t after = before;
            for (unsigned reg = 0; reg < 16; ++reg) if (writes_gpr(op, reg)) after &= ~(1u << reg);
            if ((op.opcode == 0x8b || op.opcode == 0x89) && op.modrm_mod == 3 && op.rex_w && !op.p_67) {
                const auto reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
                const auto destination = op.opcode == 0x8b ? reg : rm, source = op.opcode == 0x8b ? rm : reg;
                if (before & (1u << source)) after |= 1u << destination;
            }
            std::vector<uint32_t> successors;
            const auto next = at + op.len;
            const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
            const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
            if (op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc) {
                // Terminal paths do not poison a cold path reached directly
                // from an earlier branch after the epilogue in file order.
            } else if (jump || conditional) {
                const int32_t delta = (op.flags & F_IMM8) ? static_cast<int8_t>(op.imm.imm8) :
                    static_cast<int32_t>(op.imm.imm32);
                successors.push_back(next + delta);
                if (conditional) successors.push_back(next);
            } else if ((op.opcode == 0xff && op.modrm_reg >= 4) || op.opcode == 0xca ||
                    op.opcode == 0xcb || op.opcode == 0xcf) return {};
            else successors.push_back(next);
            for (const auto target : successors) {
                if (!code.count(target)) return {};
                const auto old = result.incoming.find(target);
                const auto merged = old == result.incoming.end() ? after : uint16_t(old->second & after);
                if (old == result.incoming.end() || old->second != merged) {
                    result.incoming[target] = merged;
                    pending.push_back(target);
                }
            }
        }
        // Pick one unambiguous stable receiver alias from the straight entry
        // path. Matching later still checks its path-sensitive live value.
        uint32_t at = owner;
        for (size_t steps = 0; steps < 128 && code.count(at); ++steps) {
            const auto &op = code.at(at).decoded;
            const auto aliases = result.incoming.at(at) & nonvolatile;
            if (aliases && !(aliases & (aliases - 1))) {
                for (unsigned reg = 0; reg < 16; ++reg) if (aliases & (1u << reg)) result.base = reg;
                break;
            }
            if (op.opcode == 0xe8 || op.opcode == 0xe9 || op.opcode == 0xeb ||
                    (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                    (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                    (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
                    op.opcode == 0xc2 || op.opcode == 0xc3 || (op.opcode == 0xff && op.modrm_reg >= 2)) break;
            at += op.len;
        }
        result.valid = result.base < 16 && (result.base & 7) != 4;
        return result;
    }
public:
    explicit Cache(const Image &image) : image_(image) {}
    const Owner &get(uint32_t owner) {
        const auto found = owners_.find(owner);
        return found == owners_.end() ? owners_.emplace(owner, discover(owner)).first->second : found->second;
    }
};
template<typename Evidence>
inline auto sites_for(const Evidence &evidence, const Pattern &pattern) {
    using Site = typename std::decay_t<decltype(evidence.receiver_aliases)>::value_type;
    std::vector<Site> result;
    for (const auto &site : evidence.receiver_aliases) {
        if (site.owner != pattern.owner || site.reference < pattern.reference ||
                uint64_t(site.reference) + site.raw.size() > uint64_t(pattern.reference) + pattern.raw.size()) continue;
        const auto offset = site.reference - pattern.reference;
        if (std::memcmp(pattern.raw.data() + offset, site.raw.data(), site.raw.size()))
            throw std::runtime_error("Canonical caller and receiver alias bytes disagree");
        result.push_back(site);
    }
    return result;
}
template<typename Image, typename Sites>
inline bool normalize(Cache<Image> &cache, const State &state, uint32_t owner, const Sites &sites, Pattern &pattern) {
    if (sites.empty()) return true;
    if (!owner) return false;
    const auto &native = cache.get(owner);
    if (!native.valid) return false;
    for (const auto &site : sites) {
        unsigned base = 16, width = 0;
        if (!load(site.raw, base, width) || base != site.base || site.displacement != 3 || width != site.width) return false;
        const auto offset = site.reference - pattern.reference;
        if (std::any_of(pattern.mask.begin() + offset, pattern.mask.begin() + offset + site.raw.size(),
                       [](unsigned char value) { return value != 0; })) return false;
        const native_history_abi::FieldBinding *field = nullptr;
        for (const auto &candidate : state.semantic_fields) if (candidate.type == site.type && candidate.member == site.member) {
            if (field) return false;
            field = &candidate;
        }
        int32_t displacement = frame_detail::displacement(site.raw.data() + 3, width);
        if (field) {
            if (uint64_t(site.delta) + 8 > field->size || uint64_t(field->offset) + site.delta > INT32_MAX) return false;
            displacement = static_cast<int32_t>(field->offset + site.delta);
        } else if (state.edition != 1 && state.edition != 2) return false;
        if (width == 1 && (displacement < INT8_MIN || displacement > INT8_MAX)) return false;
        pattern.raw[offset] = (site.raw[0] & 0xfe) | (native.base >= 8 ? 1 : 0);
        pattern.raw[offset + 2] = (site.raw[2] & 0xf8) | (native.base & 7);
        std::memcpy(pattern.raw.data() + offset + 3, &displacement, width);
    }
    return true;
}
template<typename Image, typename Sites, typename Coordinates>
inline bool matches(Cache<Image> &cache, uint32_t owner, const Sites &sites, const Coordinates &coordinates) {
    if (sites.empty()) return true;
    const auto &native = cache.get(owner);
    if (!native.valid) return false;
    for (const auto &site : sites) {
        const auto target = coordinates.find(site.reference);
        if (target == coordinates.end()) return false;
        const auto value = native.incoming.find(target->second);
        if (value == native.incoming.end() || !(value->second & (1u << native.base))) return false;
    }
    return true;
}
} // namespace dfcn::pe_runtime::receiver_alias_detail
