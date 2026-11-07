#pragma once
#include "native_address_scan.h"
#include "native_frame_discovery.h"
#include <iterator>

namespace dfcn::pe_runtime {
namespace output_region_detail {
using namespace address_runtime;
using namespace display_decode;

struct Spec { uint32_t owner, begin, end, callee, receiver; };
// Canonical consumer declarations, never target-version coordinates. Both
// endpoints must already have independent complete CALL/ABI evidence.
inline constexpr Spec specs[]{{0x3d6950, 0x3d8bad, 0x3ddefd, 0xbb120, 0x264a3f0}};

inline bool branch(const hde64s &op) {
    return (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
        (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
        (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
}
inline uint32_t span(const State &state, uint32_t reference, uint32_t length) {
    const auto found = std::upper_bound(state.ranges.begin(), state.ranges.end(), reference,
        [](uint32_t value, const Range &range) { return value < range.begin; });
    if (found == state.ranges.begin()) return 0;
    const auto &range = *std::prev(found);
    return uint64_t(reference) + length <= range.end ? range.native + reference - range.begin : 0;
}
inline uint32_t owner(const State &state, uint32_t reference) {
    if (const auto native = resolve(state.function_owners, reference)) return native;
    // Exact packaged identity only chooses coordinates. It does not exempt
    // the baseline from the complete actual CFG and EH proof below.
    if (state.edition == 1) return reference < state.size ? reference : 0;
    return state.edition == 2 ? resolve(state.ranges, reference) : 0;
}
inline bool binding(const State &state, const Spec &spec, const OutputRegionBinding &value) {
    return value.owner == spec.owner && value.begin == spec.begin && value.end == spec.end &&
        value.callee == spec.callee && value.native_owner == owner(state, spec.owner) &&
        value.native_begin == span(state, spec.begin, 5) && value.native_end == span(state, spec.end, 5) &&
        value.native_callee == span(state, spec.callee, 1) && value.native_owner &&
        value.native_begin && value.native_end && value.native_callee && span(state, spec.receiver, 1) &&
        value.native_begin != value.native_end &&
        value.native_begin >= value.native_owner && value.native_end >= value.native_owner &&
        uint64_t(value.native_begin) + 5 <= state.size && uint64_t(value.native_end) + 5 <= state.size;
}
template<typename Catalog>
inline bool source_call(const Catalog &catalog, const Spec &spec, uint32_t reference) {
    for (const auto &pattern : catalog.patterns) {
        if (!(pattern.flags & 1) || pattern.owner != spec.owner || reference < pattern.reference ||
                uint64_t(reference) + 5 > uint64_t(pattern.reference) + pattern.raw.size()) continue;
        const auto at = reference - pattern.reference;
        if (at < 7 || pattern.raw[at] != 0xe8 || pattern.raw[at - 7] != 0x48 ||
                pattern.raw[at - 6] != 0x8d || pattern.raw[at - 5] != 0x0d) continue;
        const bool receiver = std::any_of(pattern.fixups.begin(), pattern.fixups.end(), [&](const auto &fixup) {
            return fixup.offset == at - 4 && fixup.next == at && fixup.width == 4 &&
                fixup.kind == 0 && fixup.target == spec.receiver;
        });
        if (!receiver) continue;
        for (const auto &fixup : pattern.fixups)
            if (fixup.offset == at + 1 && fixup.next == at + 5 && fixup.width == 4 &&
                    fixup.kind == 0x100 && fixup.target == spec.callee) return true;
    }
    return false;
}

// Loops may enter their first cursor through a shared register-setup prefix.
// Such a prefix must have no CALL, memory write, stack mutation or escape.
// In particular, an earlier unobserved raster write can never become private
// merely because some later cursor happens to use the same destination.
inline bool setup_only(const hde64s &op) {
    if (op.p_lock || op.p_rep || op.p_seg || op.p_67 || writes_gpr(op, 4)) return false;
    if (branch(op) || op.opcode == 0xe9 || op.opcode == 0xeb || op.opcode == 0x90 ||
            (op.opcode == 0x0f && op.opcode2 == 0x1f)) return true;
    if (op.opcode >= 0xb8 && op.opcode <= 0xbf) return true;
    if (op.opcode == 0x8d || op.opcode == 0x8b || op.opcode == 0x8a || op.opcode == 0x63) return true;
    if (op.opcode == 0x89 || op.opcode == 0x88) return op.modrm_mod == 3;
    if (op.opcode == 0x38 || op.opcode == 0x39 || op.opcode == 0x3a || op.opcode == 0x3b ||
            op.opcode == 0x84 || op.opcode == 0x85) return true;
    if (op.opcode >= 0x80 && op.opcode <= 0x83) return op.modrm_mod == 3 || op.modrm_reg == 7;
    if (op.opcode <= 0x33 && (op.opcode & 7) <= 3)
        return op.modrm_mod == 3 || (op.opcode & 7) >= 2;
    if (op.opcode == 0x0f && ((op.opcode2 >= 0x40 && op.opcode2 <= 0x4f) ||
            op.opcode2 == 0xb6 || op.opcode2 == 0xb7 || op.opcode2 == 0xbe || op.opcode2 == 0xbf)) return true;
    return false;
}

template<typename Image, typename Catalog>
inline bool prove(const Image &image, const Catalog &catalog, const State &state,
        const Spec &spec, OutputRegionBinding &value, DecodeFailure &failure) {
    const auto reject = [&](uint32_t address, const char *reason) {
        failure = {address, reason, 0}; return false;
    };
    value = {spec.owner, spec.begin, spec.end, spec.callee, owner(state, spec.owner),
        span(state, spec.begin, 5), span(state, spec.end, 5), span(state, spec.callee, 1)};
    if (!binding(state, spec, value) || !source_call(catalog, spec, spec.begin) ||
            !source_call(catalog, spec, spec.end))
        return reject(spec.begin, "output region lacks independently owned endpoint calls");
    const auto regions = frame_detail::logical_regions(image, value.native_owner);
    if (regions.size() != 1 || regions.front().first != value.native_owner)
        return reject(value.native_owner, "output region has no single complete logical owner");
    const auto limit = regions.front().second;
    if (!no_eh_continuations(image, value.native_owner, limit, &failure)) return false;
    std::vector<Instruction> rows;
    ControlFlow flow;
    if (!decode(image, value.native_owner, limit, rows, nullptr, &failure, &flow)) return false;
    std::map<uint32_t, const Instruction *> code;
    for (const auto &row : rows) if (!code.emplace(row.address, &row).second)
        return reject(row.address, "output region instructions overlap");
    const auto endpoint = [&](uint32_t address) {
        const auto found = code.find(address);
        const auto receiver = address >= 7 ? code.find(address - 7) : code.end();
        return found != code.end() && receiver != code.end() && receiver->second->bytes.size() == 7 &&
            receiver->second->bytes[0] == 0x48 && receiver->second->bytes[1] == 0x8d &&
            receiver->second->bytes[2] == 0x0d &&
            int64_t(address) + static_cast<int32_t>(receiver->second->decoded.disp.disp32) == span(state, spec.receiver, 1) &&
            found->second->decoded.opcode == 0xe8 && found->second->decoded.len == 5 &&
            int64_t(address) + 5 + static_cast<int32_t>(found->second->decoded.imm.imm32) == value.native_callee;
    };
    if (!code.count(value.native_owner) || !endpoint(value.native_begin) || !endpoint(value.native_end))
        return reject(value.native_begin, "output region endpoint is not its independently identified native call");
    std::map<uint32_t, std::vector<uint32_t>> edges, reverse;
    std::map<uint32_t, const char *> invalid;
    std::set<uint32_t> normal_exits, abnormal_exits, escaping;
    for (const auto &[address, row] : code) {
        const auto &op = row->decoded;
        const auto next = address + op.len;
        const bool conditional = branch(op), jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        const bool indirect = op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5);
        const auto edge = [&](int64_t destination) {
            if (destination >= value.native_owner && destination < limit && code.count(uint32_t(destination))) {
                edges[address].push_back(uint32_t(destination));
                reverse[uint32_t(destination)].push_back(address);
            } else invalid.emplace(address, "output region branch leaves its complete decoded owner");
        };
        if (conditional || jump) edge(int64_t(next) + ((op.flags & F_IMM8) ?
            int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32))));
        else if (indirect) {
            const auto proved = flow.indirect_edges.find(address);
            if (proved == flow.indirect_edges.end() || proved->second.empty())
                invalid.emplace(address, "output region has an unproved indirect exit");
            else for (const auto target : proved->second) edge(target);
        }
        const bool normal = op.opcode == 0xc2 || op.opcode == 0xc3;
        const bool abnormal = op.opcode == 0xcc || (op.opcode == 0x0f && op.opcode2 == 0x0b) ||
            flow.nonreturning_calls.count(address);
        if (normal) normal_exits.insert(address);
        if (abnormal) abnormal_exits.insert(address);
        if (op.opcode == 0xca || op.opcode == 0xcb || op.opcode == 0xcf)
            invalid.emplace(address, "output region has an unsupported return");
        if (!conditional && !jump && !indirect && !normal && !abnormal) edge(next);
        else if (conditional) edge(next);
        int64_t label = -1;
        if (op.opcode == 0xe8) label = int64_t(next) + static_cast<int32_t>(op.imm.imm32);
        if (op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_mod == 0 && op.modrm_rm == 5)
            label = int64_t(next) + static_cast<int32_t>(op.disp.disp32);
        if (label > value.native_owner && label < limit) escaping.insert(uint32_t(label));
    }
    for (const auto &[address, pointer] : image.relocations) {
        (void)address;
        if (pointer > image.preferred_base + value.native_owner && pointer < image.preferred_base + limit)
            escaping.insert(uint32_t(pointer - image.preferred_base));
    }
    for (const auto endpoint_address : {value.native_begin, value.native_end}) {
        if (escaping.count(endpoint_address) || reverse[endpoint_address].empty() ||
                std::any_of(reverse[endpoint_address].begin(), reverse[endpoint_address].end(),
                    [&](uint32_t before) { return before != endpoint_address - 7; }))
            return reject(endpoint_address, "output region endpoint can bypass its actual graphics receiver");
    }
    const auto walk = [&](uint32_t root, uint32_t stop) {
        std::set<uint32_t> reached;
        std::vector<uint32_t> pending{root};
        while (!pending.empty()) {
            const auto at = pending.back(); pending.pop_back();
            if (at == stop || !reached.insert(at).second) continue;
            const auto found = edges.find(at);
            if (found != edges.end()) pending.insert(pending.end(), found->second.begin(), found->second.end());
        }
        return reached;
    };
    const auto active = walk(value.native_begin, value.native_end);
    auto inactive = walk(value.native_owner, value.native_begin);
    bool reaches_end = false, reaches_begin = false;
    for (const auto at : inactive) for (const auto next : edges[at]) if (next == value.native_begin) reaches_begin = true;
    if (!reaches_begin) return reject(value.native_begin, "output region start is unreachable from its native owner");
    // Address-taken interior labels are additional possible entries, not
    // evidence that an ordinary entry path ran the ownership hook first.
    for (const auto label : escaping) {
        if (!code.count(label)) return reject(label, "output region escaping entry has no complete decoded body");
        const auto entered = walk(label, value.native_begin);
        inactive.insert(entered.begin(), entered.end());
    }
    for (const auto at : active) {
        if (!code.count(at)) return reject(at, "output region has no complete instruction");
        if (const auto bad = invalid.find(at); bad != invalid.end()) return reject(at, bad->second);
        if (normal_exits.count(at)) return reject(at, "output region normal return bypasses its restoring call");
        if (escaping.count(at)) return reject(at, "output region has an escaping interior entry");
        for (const auto next : edges[at]) if (next == value.native_end) reaches_end = true;
    }
    if (!reaches_end) return reject(value.native_end, "output region restoring call is not reachable");
    // Every active node has a path to restore (or a proved nonreturning
    // termination). A closed sink loop cannot certify a completed frame.
    std::set<uint32_t> terminating{value.native_end};
    std::vector<uint32_t> pending{value.native_end};
    for (const auto at : abnormal_exits) if (active.count(at)) {
        terminating.insert(at); pending.push_back(at);
    }
    while (!pending.empty()) {
        const auto at = pending.back(); pending.pop_back();
        for (const auto before : reverse[at]) if (active.count(before) && terminating.insert(before).second)
            pending.push_back(before);
    }
    for (const auto at : active) if (!terminating.count(at))
        return reject(at, "output region has a closed path without restoration or termination");
    // An outside predecessor may share a loop's setup instructions, but it
    // must run the start hook before any effect. It cannot enter half-drawn.
    std::set<uint32_t> shared;
    for (const auto at : active) if (inactive.count(at)) shared.insert(at);
    for (const auto at : shared) {
        if (!setup_only(code.at(at)->decoded) || edges[at].empty())
            return reject(at, "output region can enter an output effect after bypassing its start");
        for (const auto next : edges[at]) if (next != value.native_begin && !shared.count(next))
            return reject(at, "output region shared setup bypasses its first cursor");
    }
    return true;
}
} // namespace output_region_detail

inline bool complete_output_regions(address_runtime::State &state) {
    using namespace output_region_detail;
    std::set<uint32_t> seen;
    for (const auto &value : state.output_regions) {
        const auto spec = std::find_if(std::begin(specs), std::end(specs), [&](const auto &candidate) {
            return candidate.begin == value.begin;
        });
        if (spec == std::end(specs) || !seen.insert(value.begin).second || !binding(state, *spec, value))
            throw std::runtime_error("Invalid cached closed native output region");
    }
    state.missing_output_regions.clear();
    for (const auto &spec : specs) if (!seen.count(spec.begin)) state.missing_output_regions.push_back(spec.begin);
    return state.missing_output_regions.empty();
}

template<typename Image, typename Catalog>
inline void discover_output_regions(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    state.output_regions.clear();
    for (const auto &spec : output_region_detail::specs) {
        address_runtime::OutputRegionBinding binding;
        display_decode::DecodeFailure failure;
        if (output_region_detail::prove(image, catalog, state, spec, binding, failure))
            state.output_regions.push_back(binding);
        else if (report) {
            std::ostringstream message;
            message << "Native output region unavailable: owner=0x" << std::hex << spec.owner <<
                " start=0x" << spec.begin << " instruction=0x" << failure.address << " " << failure.reason;
            report(message.str());
        }
    }
    complete_output_regions(state);
}
} // namespace dfcn::pe_runtime
