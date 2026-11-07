#pragma once
#include "native_frame_discovery.h"
#include "native_frame_registers.h"

// Entry-argument identities are dataflow facts, not interchangeable register
// names. Both the production reference reader and the target scanner use this
// same complete CFG/EH analysis. Only a register-to-register MOV into an
// unchanged Win64 argument register may use its result during CALL matching.
namespace dfcn::pe_runtime::argument_alias_detail {
using namespace address_runtime;
using namespace display_decode;
inline constexpr uint16_t nonvolatile = 0xf0e8;
inline bool parameter_register(unsigned reg) { return reg == 1 || reg == 2 || reg == 8 || reg == 9; }
inline bool move(const std::vector<unsigned char> &raw, unsigned &destination, unsigned &source) {
    if (raw.size() != 3 || (raw[0] & 0xf8) != 0x48 || (raw[2] >> 6) != 3 ||
            (raw[1] != 0x89 && raw[1] != 0x8b)) return false;
    const unsigned reg = ((raw[2] >> 3) & 7) + ((raw[0] & 4) ? 8 : 0);
    const unsigned rm = (raw[2] & 7) + ((raw[0] & 1) ? 8 : 0);
    destination = raw[1] == 0x89 ? rm : reg;
    source = raw[1] == 0x89 ? reg : rm;
    return parameter_register(destination) && (nonvolatile & (1u << source));
}
struct Owner {
    using Values = std::array<unsigned char, 16>;
    static constexpr int64_t unknown_origin = INT64_MAX;
    using Origins = std::array<int64_t, 2>; // RSP and RBP relative to entry RSP.
    std::map<uint32_t, Instruction> code;
    std::map<uint32_t, Values> incoming;
    std::map<uint32_t, Origins> origins;
    std::array<unsigned, 4> saved{16, 16, 16, 16};
    ControlFlow flow;
    std::set<uint32_t> external_entries;
    uint32_t end = 0;
    DecodeFailure failure;
    bool valid = false;
    unsigned argument(uint32_t address, unsigned reg) const {
        const auto found = incoming.find(address);
        return valid && reg < 16 && found != incoming.end() ? found->second[reg] : 0;
    }
    std::optional<int32_t> origin(uint32_t address, unsigned reg) const {
        const auto found = origins.find(address);
        if (!valid || (reg != 4 && reg != 5) || found == origins.end()) return {};
        const auto value = found->second[reg - 4];
        return value >= INT32_MIN && value <= INT32_MAX ?
            std::optional<int32_t>(static_cast<int32_t>(value)) : std::nullopt;
    }
};
template<typename Image> class Cache {
    const Image &image_;
    std::map<uint32_t, Owner> owners_;
    Owner discover(uint32_t owner) const {
        Owner result;
        const auto reject = [](uint32_t address, const char *reason) {
            Owner value; value.failure = {address, reason, 0}; return value;
        };
        const auto regions = frame_detail::logical_regions(image_, owner);
        // An unknown exception continuation can inject a different register
        // state. No source or target is treated as EH-free by omission.
        if (regions.size() != 1 || regions.front().first != owner)
            return reject(owner, "entry arguments have no single complete logical region");
        if (!no_eh_continuations(image_, owner, regions.front().second, &result.failure))
            return result.failure.address ? reject(result.failure.address, result.failure.reason) :
                reject(owner, "entry arguments have unproved exception continuation roots");
        std::vector<Instruction> rows;
        ControlFlow flow;
        if (!decode(image_, owner, regions.front().second, rows, nullptr, &result.failure, &flow)) return result;
        for (auto &row : rows) if (!result.code.emplace(row.address, std::move(row)).second)
            return reject(row.address, "entry argument instructions overlap");
        if (!result.code.count(owner)) return reject(owner, "entry argument root was not decoded");
        const auto end = regions.front().second;
        result.end = end;
        result.flow = flow;
        std::map<uint32_t, std::vector<uint32_t>> successors;
        std::map<uint32_t, const char *> invalid_edges;
        std::set<uint32_t> external_entries;
        const auto branch = [](const hde64s &op) {
            return (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        };
        const auto independent = [&](uint32_t target) {
            const auto found = std::lower_bound(image_.functions.begin(), image_.functions.end(), target,
                [](const auto &function, uint32_t value) { return function.begin < value; });
            return found != image_.functions.end() && found->begin == target &&
                (!found->owner || found->owner == target);
        };
        for (const auto &[address, instruction] : result.code) {
            const auto &op = instruction.decoded;
            const auto next = address + op.len;
            const bool conditional = branch(op), jump = op.opcode == 0xe9 || op.opcode == 0xeb;
            if (conditional || jump) {
                const int64_t target = int64_t(next) + ((op.flags & F_IMM8) ?
                    int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
                if (target <= 0 || target >= image_.size)
                    invalid_edges.emplace(address, "argument CFG branch leaves image");
                else if (target >= owner && target < end) {
                    if (!result.code.count(static_cast<uint32_t>(target)))
                        invalid_edges.emplace(address, "argument CFG branch has no decoded destination");
                    else successors[address].push_back(static_cast<uint32_t>(target));
                } else if (!independent(static_cast<uint32_t>(target)))
                    invalid_edges.emplace(address, "argument CFG tail is not an independent function");
            } else if (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5)) {
                const auto proved = flow.indirect_edges.find(address);
                if (proved == flow.indirect_edges.end() || proved->second.empty())
                    invalid_edges.emplace(address, "argument CFG indirect edge was not proved");
                else for (const auto target : proved->second)
                    if (!result.code.count(target))
                        invalid_edges.emplace(address, "argument CFG switch destination was not decoded");
                    else successors[address].push_back(target);
            } else if (op.opcode == 0xca || op.opcode == 0xcb || op.opcode == 0xcf)
                invalid_edges.emplace(address, "argument CFG has an unsupported return");
            const bool terminal = jump || op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                (op.opcode == 0x0f && op.opcode2 == 0x0b) || flow.nonreturning_calls.count(address) ||
                (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5));
            if (!terminal) {
                if (!result.code.count(next))
                    invalid_edges.emplace(address, "argument CFG fallthrough leaves decoded code");
                else successors[address].push_back(next);
            }
            int64_t escaped = -1;
            if (op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_mod == 0 && op.modrm_rm == 5)
                escaped = int64_t(next) + static_cast<int32_t>(op.disp.disp32);
            if (op.opcode == 0xe8) escaped = int64_t(next) + static_cast<int32_t>(op.imm.imm32);
            if (escaped >= owner && escaped < end) {
                if (!result.code.count(static_cast<uint32_t>(escaped))) return reject(address, "argument CFG escaping label was not decoded");
                if (escaped != owner) external_entries.insert(static_cast<uint32_t>(escaped));
            }
        }
        for (const auto &[address, value] : image_.relocations) {
            (void)address;
            if (value < image_.preferred_base + owner || value >= image_.preferred_base + end) continue;
            const auto target = static_cast<uint32_t>(value - image_.preferred_base);
            if (!result.code.count(target)) return reject(target, "argument CFG absolute label was not decoded");
            // A pointer to the function entry has the declared incoming ABI.
            // An escaping interior label has no such argument guarantee.
            if (target != owner) external_entries.insert(target);
        }
        result.external_entries = external_entries;
        // The affine RBP definition also replays the actual straight
        // prologue against every unwind stack allocation. Merely finding a
        // frame-register nibble does not authorize a stack-coordinate map.
        const auto frame = frame_detail::target_rbp_frame(image_, owner);
        const auto function = frame_detail::function_at(image_, owner);
        const auto *unwind = function == image_.functions.end() ? nullptr : image_.read(function->unwind, 4);
        const uint32_t prologue_end = unwind ? owner + unwind[1] : owner;
        const bool affine_frame = frame.valid && frame.origin_known && unwind && function->begin == owner;
        Owner::Values entry{};
        entry[1] = 1; entry[2] = 2; entry[8] = 3; entry[9] = 4;
        result.incoming.emplace(owner, entry);
        result.origins.emplace(owner, Owner::Origins{affine_frame ? 0 : Owner::unknown_origin, Owner::unknown_origin});
        std::vector<uint32_t> pending{owner};
        for (const auto address : external_entries) {
            result.incoming[address] = {};
            result.origins[address] = {Owner::unknown_origin, Owner::unknown_origin};
            pending.push_back(address);
        }
        size_t updates = 0;
        while (!pending.empty()) {
            if (++updates > result.code.size() * 65) return reject(owner, "argument CFG dataflow did not converge");
            const auto address = pending.back(); pending.pop_back();
            // Decoding retains padding after a return so the production
            // reader can still prove every source byte. Padding before an
            // inline switch table has no executable fallthrough unless a
            // real CFG edge or escaping label reaches it. EH continuations
            // were ruled out above; every reachable edge must remain closed.
            if (const auto invalid = invalid_edges.find(address); invalid != invalid_edges.end())
                return reject(address, invalid->second);
            const auto &instruction = result.code.at(address); const auto &op = instruction.decoded;
            const auto before = result.incoming.at(address);
            auto after = before;
            const auto previous_origins = result.origins.at(address);
            auto after_origins = previous_origins;
            if (writes_gpr(op, 4)) after_origins[0] = Owner::unknown_origin;
            if (writes_gpr(op, 5)) after_origins[1] = Owner::unknown_origin;
            if (affine_frame && address < prologue_end) {
                const auto allocation_before = frame_detail::prologue_allocation(image_, *function, address - owner);
                const auto allocation_after = frame_detail::prologue_allocation(image_, *function, address + op.len - owner);
                if (allocation_before && allocation_after && previous_origins[0] == -*allocation_before) {
                    after_origins[0] = -*allocation_after;
                    if (address + op.len == frame.ready) after_origins[1] = frame.rsp_offset;
                }
            }
            for (unsigned reg = 0; reg < 16; ++reg) if (writes_gpr(op, reg)) after[reg] = 0;
            if ((op.opcode == 0x89 || op.opcode == 0x8b) && op.modrm_mod == 3 && op.rex_w &&
                    !op.p_66 && !op.p_67 && !op.p_rep && !op.p_lock && !op.p_seg) {
                const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
                after[op.opcode == 0x89 ? rm : reg] = before[op.opcode == 0x89 ? reg : rm];
            }
            for (const auto next : successors[address]) {
                const auto previous = result.incoming.find(next);
                auto merged = after;
                auto merged_origins = after_origins;
                if (previous != result.incoming.end()) for (unsigned reg = 0; reg < 16; ++reg)
                    if (merged[reg] != previous->second[reg]) merged[reg] = 0;
                const auto previous_frame = result.origins.find(next);
                if (previous_frame != result.origins.end()) for (unsigned base = 0; base < 2; ++base)
                    if (merged_origins[base] != previous_frame->second[base]) merged_origins[base] = Owner::unknown_origin;
                if (previous == result.incoming.end() || previous->second != merged ||
                        previous_frame == result.origins.end() || previous_frame->second != merged_origins) {
                    result.incoming[next] = merged;
                    result.origins[next] = merged_origins;
                    pending.push_back(next);
                }
            }
        }
        // Select one alias per argument on the straight entry path. Later
        // uses are still required to carry that argument on every CFG path.
        uint32_t address = owner;
        for (size_t steps = 0; steps < 128 && result.code.count(address); ++steps) {
            const auto state = result.incoming.find(address);
            if (state == result.incoming.end()) return reject(address, "argument CFG entry path was not reached");
            for (unsigned arg = 1; arg <= 4; ++arg) if (result.saved[arg - 1] == 16) {
                uint16_t aliases = 0;
                for (unsigned reg = 0; reg < 16; ++reg)
                    if ((nonvolatile & (1u << reg)) && state->second[reg] == arg) aliases |= 1u << reg;
                if (aliases && !(aliases & (aliases - 1)))
                    for (unsigned reg = 0; reg < 16; ++reg) if (aliases & (1u << reg)) result.saved[arg - 1] = reg;
            }
            const auto &op = result.code.at(address).decoded;
            if (op.opcode == 0xe8 || op.opcode == 0xe9 || op.opcode == 0xeb || branch(op) ||
                    op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                    (op.opcode == 0xff && op.modrm_reg >= 2)) break;
            address += op.len;
        }
        result.valid = true;
        return result;
    }
public:
    explicit Cache(const Image &image) : image_(image) {}
    const Owner &get(uint32_t owner) {
        const auto found = owners_.find(owner);
        return found == owners_.end() ? owners_.emplace(owner, discover(owner)).first->second : found->second;
    }
};
struct Site {
    uint32_t reference = 0, owner = 0, argument = 0, source = 0, destination = 0;
    std::vector<unsigned char> raw;
};
inline std::vector<Site> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob);
    char magic[8]; reader.take(magic, 8);
    if (std::memcmp(magic, "DFCNAA01", 8) || reader.number() != 1)
        throw std::runtime_error("Unsupported native entry-argument evidence");
    std::vector<Site> result(reader.count(1000000));
    uint32_t previous = 0;
    for (auto &site : result) {
        site = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.blob()};
        unsigned destination = 16, source = 16;
        if (!site.reference || site.reference <= previous || !site.owner || site.reference < site.owner ||
                site.argument < 1 || site.argument > 4 || !move(site.raw, destination, source) ||
                site.source != source || site.destination != destination)
            throw std::runtime_error("Invalid native entry-argument site");
        previous = site.reference;
    }
    reader.finish(); return result;
}
inline std::vector<Site> sites_for(const std::vector<Site> &sites, const Pattern &pattern) {
    std::vector<Site> result;
    auto at = std::lower_bound(sites.begin(), sites.end(), pattern.reference,
        [](const auto &site, uint32_t address) { return site.reference < address; });
    for (; at != sites.end() && uint64_t(at->reference) < uint64_t(pattern.reference) + pattern.raw.size(); ++at) {
        const auto &site = *at;
        if (site.owner != pattern.owner ||
                uint64_t(site.reference) + site.raw.size() > uint64_t(pattern.reference) + pattern.raw.size()) continue;
        if (std::memcmp(pattern.raw.data() + site.reference - pattern.reference, site.raw.data(), site.raw.size()))
            throw std::runtime_error("Canonical caller and entry-argument bytes disagree");
        result.push_back(site);
    }
    return result;
}
template<typename Image>
inline bool normalize(Cache<Image> &cache, uint32_t owner, std::vector<Site> &sites, Pattern &pattern) {
    if (sites.empty()) return true;
    if (!owner) return false;
    const auto &native = cache.get(owner);
    if (!native.valid) return false;
    std::vector<Site> changed;
    for (const auto &site : sites) {
        const auto reg = native.saved[site.argument - 1];
        if (reg >= 16) return false;
        const auto offset = site.reference - pattern.reference;
        if (std::any_of(pattern.mask.begin() + offset, pattern.mask.begin() + offset + site.raw.size(),
                [](unsigned char byte) { return byte != 0; })) return false;
        if (reg == site.source) continue;
        if (site.raw[1] == 0x8b) {
            pattern.raw[offset] = (site.raw[0] & 0xfe) | (reg >= 8 ? 1 : 0);
            pattern.raw[offset + 2] = (site.raw[2] & 0xf8) | (reg & 7);
        } else {
            pattern.raw[offset] = (site.raw[0] & 0xfb) | (reg >= 8 ? 4 : 0);
            pattern.raw[offset + 2] = (site.raw[2] & 0xc7) | ((reg & 7) << 3);
        }
        changed.push_back(site);
    }
    sites = std::move(changed);
    return true;
}
template<typename Image, typename Coordinates>
inline bool matches(Cache<Image> &cache, uint32_t owner, const std::vector<Site> &sites, const Coordinates &coordinates) {
    if (sites.empty()) return true;
    const auto &native = cache.get(owner);
    if (!native.valid) return false;
    for (const auto &site : sites) {
        const auto target = coordinates.find(site.reference);
        if (target == coordinates.end() || native.argument(target->second, native.saved[site.argument - 1]) != site.argument)
            return false;
        const auto instruction = native.code.find(target->second);
        unsigned destination = 16, source = 16;
        if (instruction == native.code.end() || !move(instruction->second.bytes, destination, source) ||
                destination != site.destination || source != native.saved[site.argument - 1]) return false;
    }
    return true;
}
} // namespace dfcn::pe_runtime::argument_alias_detail
