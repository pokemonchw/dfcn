#pragma once
#include "native_chooser_feature_discovery.h"

namespace dfcn::pe_runtime::optional_panel_detail {
using namespace address_runtime;
using namespace display_decode;
using Code = std::map<uint32_t, Instruction>;
struct Contract {
    uint32_t identity, owner, begin, end, guard, guard_end, tail, resume_anchor,
        resume_end, successor, successor_end, selector, frame_ready, frame_end;
    std::array<Pattern, 4> blocks;
    std::vector<uint32_t> incoming;
    std::vector<Range> spans;
};
inline std::vector<Contract> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    if (std::memcmp(magic, "DFCNPF01", 8) || reader.number() != 1)
        throw std::runtime_error("Unsupported native optional-panel evidence");
    std::vector<Contract> result(reader.count(64)); std::set<uint32_t> identities;
    for (auto &entry : result) {
        entry.identity = reader.number(); entry.owner = reader.number();
        entry.begin = reader.number(); entry.end = reader.number();
        entry.guard = reader.number(); entry.guard_end = reader.number(); entry.tail = reader.number();
        entry.resume_anchor = reader.number(); entry.resume_end = reader.number();
        entry.successor = reader.number(); entry.successor_end = reader.number(); entry.selector = reader.number();
        entry.frame_ready = reader.number(); entry.frame_end = reader.number();
        const std::array<uint32_t, 4> starts{entry.guard, entry.tail, entry.end, entry.successor};
        const std::array<uint32_t, 4> ends{entry.guard_end, entry.begin, entry.resume_end, entry.successor_end};
        for (size_t index = 0; index < entry.blocks.size(); ++index) {
            auto &block = entry.blocks[index]; block.reference = reader.number(); block.owner = entry.owner;
            block.raw = reader.blob();
            if (block.reference != starts[index] || block.raw.empty() || block.raw.size() > 1024 ||
                    uint64_t(block.reference) + block.raw.size() != ends[index])
                throw std::runtime_error("Invalid optional-panel source boundary");
        }
        entry.incoming.resize(reader.count(64));
        for (auto &address : entry.incoming) address = reader.number();
        entry.spans.resize(reader.count(4096)); uint32_t previous = entry.begin;
        for (auto &span : entry.spans) {
            span = {reader.number(), reader.number(), 0};
            if (span.begin < previous || span.end <= span.begin || span.end > entry.end)
                throw std::runtime_error("Invalid optional-panel resource ownership");
            previous = span.end;
        }
        if (!entry.identity || !identities.insert(entry.identity).second || !entry.owner || !entry.selector ||
                !(entry.owner < entry.guard && entry.guard < entry.guard_end && entry.guard_end <= entry.tail &&
                  entry.tail < entry.begin && entry.begin < entry.end && entry.end <= entry.resume_anchor &&
                  entry.resume_anchor < entry.resume_end && entry.resume_end <= entry.successor &&
                  entry.successor < entry.successor_end) || entry.frame_ready > entry.guard ||
                entry.frame_end < entry.successor_end || entry.incoming.size() < 2 || entry.spans.empty() ||
                std::any_of(entry.incoming.begin(), entry.incoming.end(), [&](uint32_t address) {
                    return address < entry.guard || address >= entry.guard_end;
                }) ||
                !std::is_sorted(entry.incoming.begin(), entry.incoming.end()) ||
                std::adjacent_find(entry.incoming.begin(), entry.incoming.end()) != entry.incoming.end())
            throw std::runtime_error("Invalid optional-panel control-flow contract");
    }
    reader.finish(); return result;
}
inline std::vector<method_call_detail::SuffixFeature> absence_contracts(const std::vector<unsigned char> &blob) {
    std::vector<method_call_detail::SuffixFeature> result;
    for (const auto &entry : read(blob)) {
        method_call_detail::SuffixFeature feature{};
        feature.identity = entry.identity; feature.owner = entry.owner; feature.spans = entry.spans;
        result.push_back(std::move(feature));
    }
    return result;
}
struct Match {
    std::map<uint32_t, uint32_t> branches, instructions;
    std::map<int32_t, int32_t> locals;
};
inline bool relation(std::map<uint32_t, uint32_t> &values, uint32_t source, uint32_t native) {
    const auto [found, inserted] = values.emplace(source, native);
    return inserted || found->second == native;
}
inline uint32_t branch_kind(const hde64s &op) {
    if (op.p_66 || op.p_67 || op.p_lock || op.p_rep || op.p_seg || op.rex) return UINT32_MAX;
    if (op.len == 2 && op.opcode >= 0x70 && op.opcode <= 0x7f) return op.opcode & 15;
    if (op.len == 6 && op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f)
        return op.opcode2 & 15;
    if ((op.opcode == 0xeb && op.len == 2) || (op.opcode == 0xe9 && op.len == 5)) return 16;
    return UINT32_MAX;
}
template<typename Image>
inline bool block(const Image &image, const State &state, const Contract &entry,
        const Pattern &source, const Code &code, uint32_t start,
        const frame_detail::TargetRbpFrame &frame, Match &match) {
    std::vector<Instruction> original;
    if (!method_call_detail::decode_pattern(source, original)) return false;
    uint32_t cursor = start;
    for (const auto &instruction : original) {
        const auto found = code.find(cursor);
        if (found == code.end()) return false;
        const auto &actual = found->second; const auto &op = instruction.decoded; const auto &target = actual.decoded;
        const auto branch = method_call_detail::branch_destination(instruction);
        if (!branch && instruction.bytes.size() != actual.bytes.size()) return false;
        auto expected = instruction.bytes;
        const auto mask = [&](uint32_t offset, uint32_t width) {
            if (uint64_t(offset) + width > expected.size()) return false;
            std::copy_n(actual.bytes.begin() + offset, width, expected.begin() + offset); return true;
        };
        if (branch) {
            const auto destination = method_call_detail::branch_destination(actual);
            const auto kind = branch_kind(op);
            // Short and near encodings preserve the exact branch condition.
            // Its independently decoded destination still belongs to this
            // complete owner and participates in the same closed-edge proof.
            if (kind == UINT32_MAX || branch_kind(target) != kind || !destination ||
                    !code.count(destination) || !relation(match.branches, branch, destination)) return false;
            expected = actual.bytes;
        } else if (op.opcode == 0xe8) {
            const auto callee = instruction.address + op.len + static_cast<int32_t>(op.imm.imm32);
            const auto mapped = resolve(state.ranges, callee);
            if (!mapped || target.opcode != 0xe8 ||
                    actual.address + target.len + static_cast<int32_t>(target.imm.imm32) != mapped ||
                    !mask(op.len - 4, 4)) return false;
        } else if ((op.flags & F_MODRM) && op.modrm_mod == 0 && op.modrm_rm == 5 && !op.p_67) {
            const auto source_address = instruction.address + op.len + static_cast<int32_t>(op.disp.disp32);
            const auto target_address = actual.address + target.len + static_cast<int32_t>(target.disp.disp32);
            const auto mapped = resolve(state.ranges, source_address);
            // The continuation has an independent global receiver/callee
            // anchor after its narrow scalar selector. A not-yet-mapped
            // selector is compared structurally, never published as a field
            // or used by a consumer. All other RIP identities are mandatory.
            const bool selector = source.reference == entry.end && instruction.address < entry.resume_anchor &&
                source_address == entry.selector && op.p_66 && op.opcode == 0x39 && op.modrm_reg == 0;
            if ((mapped ? mapped != target_address : !selector) ||
                    !image.section(target_address, selector ? 2 : 1) ||
                    !(target.flags & F_DISP32) || !mask(method_call_detail::displacement_position(op), 4)) return false;
        } else if ((op.flags & F_MODRM) && (op.modrm_mod == 1 || op.modrm_mod == 2) &&
                op.modrm_rm == 5 && !op.rex_b) {
            if (!frame.valid || cursor < frame.ready || uint64_t(cursor) + target.len > frame.end ||
                    target.modrm_mod != op.modrm_mod || target.modrm_rm != 5 || target.rex_b) return false;
            const auto left = method_call_detail::displacement(instruction);
            const auto right = method_call_detail::displacement(actual);
            for (const auto &[source_local, native_local] : match.locals)
                if (native_local == right && source_local != left) return false;
            const auto [position, inserted] = match.locals.emplace(left, right);
            if ((!inserted && position->second != right) ||
                    !mask(method_call_detail::displacement_position(op), method_call_detail::displacement_width(op))) return false;
        }
        if (expected != actual.bytes || !relation(match.instructions, instruction.address, cursor)) return false;
        cursor += target.len;
    }
    return relation(match.instructions, source.reference + static_cast<uint32_t>(source.raw.size()), cursor);
}
inline bool closed_trade(const Code &code, uint32_t start, uint32_t tail,
        uint32_t resume, uint32_t successor) {
    std::vector<uint32_t> pending{start}; std::set<uint32_t> seen; bool reaches_tail = false;
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (address == successor || address == resume) continue;
        if (address < start || address >= resume || !seen.insert(address).second) {
            if (seen.count(address)) continue;
            return false;
        }
        const auto found = code.find(address); if (found == code.end()) return false;
        reaches_tail |= address == tail;
        const auto &instruction = found->second; const auto &op = instruction.decoded;
        if (op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                (op.opcode == 0xff && op.modrm_reg >= 4) || (op.opcode >= 0xe0 && op.opcode <= 0xe3)) return false;
        if (const auto target = method_call_detail::branch_destination(instruction)) pending.push_back(target);
        if (op.opcode != 0xe9 && op.opcode != 0xeb) pending.push_back(address + op.len);
    }
    return reaches_tail;
}
template<typename Image>
inline bool no_table_entry(const Image &image, uint32_t owner, uint32_t entry, const Code &code) {
    for (const auto &[address, value] : image.relocations) {
        (void)address;
        if (value == image.preferred_base + entry) return false;
    }
    for (const auto &[first, last] : frame_detail::logical_regions(image, owner)) {
        const auto *raw = image.read(first, last - first); if (!raw) return false;
        for (uint32_t at = 0; uint64_t(at) + 4 <= last - first; ++at) {
            uint32_t value; std::memcpy(&value, raw + at, 4);
            if (value != entry) continue;
            const auto address = first + at;
            auto row = code.upper_bound(address);
            if (row != code.begin()) {
                --row;
                const auto &op = row->second.decoded;
                const auto destination = op.opcode == 0xe8 ?
                    row->first + op.len + static_cast<int32_t>(op.imm.imm32) :
                    method_call_detail::branch_destination(row->second);
                // The complete decoder already proved this instruction's
                // boundary. Opcode/relative-operand bytes are not an RVA
                // table entry; its actual edge must still target elsewhere.
                if (destination && destination != entry &&
                        uint64_t(address) + 4 <= uint64_t(row->first) + op.len) continue;
            }
            return false;
        }
    }
    return true;
}
} // namespace dfcn::pe_runtime::optional_panel_detail

namespace dfcn::pe_runtime {
template<typename Image, typename Catalog>
inline void discover_optional_panels(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace optional_panel_detail;
    for (const auto &entry : read(catalog.optional_panels)) {
        const bool overlap = std::any_of(entry.spans.begin(), entry.spans.end(), [&](const auto &span) {
            return std::any_of(state.ranges.begin(), state.ranges.end(), [&](const auto &range) {
                return range.begin < span.end && span.begin < range.end;
            });
        });
        // A present feature keeps its ordinary code contracts. Missing one
        // resource never becomes evidence that its native feature is absent.
        if (overlap || std::binary_search(state.absent_features.begin(), state.absent_features.end(), entry.identity)) continue;
        const auto reject = [&](const std::string &reason) {
            if (report) report("Native optional panel unresolved: " + std::to_string(entry.identity) + " " + reason);
        };
        const auto owner = state.edition == 1 ? entry.owner : resolve(state.function_owners, entry.owner);
        if (!owner) { reject("native owner unavailable"); continue; }
        Code code; std::set<uint32_t> targets; bool decoded = true;
        for (const auto &[first, last] : frame_detail::logical_regions(image, owner)) {
            std::vector<Instruction> region;
            if (!display_decode::decode(image, first, last, region, &targets)) { decoded = false; break; }
            for (auto &instruction : region) code.emplace(instruction.address, std::move(instruction));
        }
        if (!decoded || code.empty()) { reject("logical owner CFG is incomplete"); continue; }
        const auto frame = frame_detail::target_rbp_frame(image, owner);
        if (!frame.valid) { reject("native frame provenance unavailable"); continue; }
        std::vector<Instruction> tail_source;
        if (!method_call_detail::decode_pattern(entry.blocks[1], tail_source) || tail_source.empty()) {
            reject("source tail has no complete instruction boundaries"); continue;
        }
        std::vector<Match> matches;
        for (const auto &[address, instruction] : code) {
            (void)instruction; Match match;
            if (!block(image, state, entry, entry.blocks[0], code, address, frame, match)) continue;
            const auto resume_at = match.branches.find(entry.begin);
            if (resume_at == match.branches.end()) continue;
            const auto resume = resume_at->second;
            const auto guard_finish = match.instructions.at(entry.guard_end);
            // Walk whole native instructions back from the proved resume
            // boundary. A changed branch width is not a source-byte delta.
            auto tail_at = code.find(resume);
            uint32_t tail = resume; bool complete_tail = tail_at != code.end();
            for (size_t index = 0; complete_tail && index < tail_source.size(); ++index) {
                if (tail_at == code.begin()) { complete_tail = false; break; }
                --tail_at;
                if (uint64_t(tail_at->first) + tail_at->second.decoded.len != tail) {
                    complete_tail = false; break;
                }
                tail = tail_at->first;
            }
            if (!complete_tail || tail <= guard_finish ||
                    !block(image, state, entry, entry.blocks[1], code, tail, frame, match) ||
                    match.instructions.at(entry.begin) != resume ||
                    !block(image, state, entry, entry.blocks[2], code, resume, frame, match)) continue;
            const auto successor_at = match.branches.find(entry.successor);
            if (successor_at == match.branches.end() ||
                    !block(image, state, entry, entry.blocks[3], code, successor_at->second, frame, match)) continue;
            bool consistent_endpoints = true;
            for (const auto &[source, native] : match.branches) {
                const auto local = match.instructions.find(source);
                const auto mapped = resolve(state.ranges, source);
                if ((local != match.instructions.end() && local->second != native) ||
                        (mapped && mapped != native)) {
                    consistent_endpoints = false; break;
                }
            }
            if (!consistent_endpoints) continue;
            std::set<uint32_t> expected_edges;
            for (auto incoming : entry.incoming) {
                const auto at = match.instructions.find(incoming);
                if (at != match.instructions.end()) expected_edges.insert(at->second);
            }
            std::set<uint32_t> actual_edges;
            for (const auto &[at, row] : code) {
                const auto &op = row.decoded;
                const auto destination = op.opcode == 0xe8 ?
                    at + op.len + static_cast<int32_t>(op.imm.imm32) : method_call_detail::branch_destination(row);
                if (destination == resume) actual_edges.insert(at);
            }
            if (expected_edges.size() != entry.incoming.size() || actual_edges != expected_edges ||
                    !no_table_entry(image, owner, resume, code) ||
                    !closed_trade(code, guard_finish,
                        tail, resume, successor_at->second)) continue;
            matches.push_back(std::move(match));
        }
        if (matches.size() != 1) { reject("complete guarded trade/continuation paths=" + std::to_string(matches.size())); continue; }
        state.absent_features.push_back(entry.identity);
        state.absent_spans.insert(state.absent_spans.end(), entry.spans.begin(), entry.spans.end());
        std::sort(state.absent_features.begin(), state.absent_features.end());
        std::sort(state.absent_spans.begin(), state.absent_spans.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
        if (report) report("Native optional panel: every owned incoming edge reaches the independently identified continuation; " +
            std::to_string(entry.spans.size()) + " panel resources proved absent");
    }
}
} // namespace dfcn::pe_runtime
