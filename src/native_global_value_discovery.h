#pragma once
#include "native_global_value_evidence.h"
#include "native_typed_member_discovery.h"

namespace dfcn::pe_runtime::global_value_detail {
using namespace address_runtime;
using namespace display_decode;
using Values = std::array<uint32_t, 16>;
struct Analysis { std::map<uint32_t, Values> incoming; bool valid = false; };

template<typename Root, typename Callable>
inline Analysis analyze(const typed_member_detail::Graph &graph, Root root, Callable callable) {
    Analysis result;
    if (!graph.code.count(graph.owner)) return result;
    std::set<uint32_t> pending{graph.owner};
    result.incoming.emplace(graph.owner, Values{});
    for (const auto entry : graph.external_entries) {
        if (!graph.code.count(entry)) return {};
        result.incoming[entry] = {}; pending.insert(entry);
    }
    // Finite must-value lattice: unseen -> one exact root -> unknown.
    // Constants can be generated only by an actual RIP-relative LEA.
    while (!pending.empty()) {
        const auto address = *pending.begin(); pending.erase(pending.begin());
        const auto found = graph.code.find(address);
        if (found == graph.code.end()) return {};
        const auto &row = found->second; const auto &op = row.decoded;
        const uint32_t next = address + op.len;
        const auto before = result.incoming.at(address); auto after = before;
        for (unsigned reg = 0; reg < 16; ++reg) if (writes_gpr(op, reg)) after[reg] = 0;
        const bool plain = !op.p_66 && !op.p_67 && !op.p_rep && !op.p_lock && !op.p_seg;
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        if (plain && op.rex_w && (op.opcode == 0x89 || op.opcode == 0x8b) && op.modrm_mod == 3)
            after[op.opcode == 0x89 ? rm : reg] = before[op.opcode == 0x89 ? reg : rm];
        if (plain && op.rex_w && op.opcode == 0x8d && op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB)) {
            const int64_t value = int64_t(next) + static_cast<int32_t>(op.disp.disp32);
            after[reg] = value > 0 && value <= UINT32_MAX ? root(static_cast<uint32_t>(value)) : 0;
        }
        const bool call = op.opcode == 0xe8 || (op.opcode == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 3));
        if (call) {
            const int64_t destination = int64_t(next) + static_cast<int32_t>(op.imm.imm32);
            const bool abi = op.opcode == 0xe8 && destination > 0 && destination <= UINT32_MAX &&
                callable(static_cast<uint32_t>(destination));
            // Only an independently admitted callable Win64 entry retains
            // the ABI's nonvolatile registers. Unknown/indirect calls kill
            // every root; they are not inferred from this prospective match.
            if (!abi) after = {};
            else for (const auto volatile_reg : {0u, 1u, 2u, 8u, 9u, 10u, 11u}) after[volatile_reg] = 0;
        }
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        std::vector<uint32_t> successors;
        if (conditional || jump) {
            const int64_t destination = int64_t(next) + ((op.flags & F_IMM8) ?
                int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (destination >= graph.owner && destination < graph.end) successors.push_back(static_cast<uint32_t>(destination));
            else if (conditional) return {}; // No unclassified alternate entry/exit.
        }
        const bool indirect = op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5);
        if (indirect) {
            const auto edges = graph.flow.indirect_edges.find(address);
            if (edges == graph.flow.indirect_edges.end() || edges->second.empty()) return {};
            successors.insert(successors.end(), edges->second.begin(), edges->second.end());
        }
        if (op.opcode == 0xca || op.opcode == 0xcb || op.opcode == 0xcf) return {};
        const bool terminal = jump || indirect || op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
            (op.opcode == 0x0f && op.opcode2 == 0x0b) || graph.flow.nonreturning_calls.count(address);
        if (!terminal) successors.push_back(next);
        for (const auto successor : successors) {
            if (!graph.code.count(successor)) return {};
            const auto previous = result.incoming.find(successor);
            auto merged = after;
            if (previous != result.incoming.end()) for (unsigned reg = 0; reg < 16; ++reg)
                if (previous->second[reg] != merged[reg]) merged[reg] = 0;
            if (previous == result.incoming.end() || previous->second != merged) {
                result.incoming[successor] = merged; pending.insert(successor);
            }
        }
    }
    result.valid = true; return result;
}

template<typename Image, typename Catalog> class Cache final : public Evidence {
    const Image &image_;
    const Catalog &catalog_;
    bool loaded_ = false;
    std::map<uint32_t, typed_member_detail::Graph> source_;
    argument_alias_detail::Cache<Image> target_cache_;
    typed_member_detail::TargetView<Image> target_;
    std::map<uint32_t, uint32_t> roots_, native_roots_, callables_, native_callables_;
    std::map<uint32_t, Analysis> source_values_, target_values_;
    std::map<uint32_t, uint32_t> source_entries_; // Full reviewed body/leaf lengths.
    std::set<uint32_t> source_leaves_;
    std::set<std::tuple<uint32_t, uint32_t, uint32_t, uint32_t>> field_specs_;
    void load() {
        if (loaded_) return;
        loaded_ = true;
        const auto frames = frame_detail::read(catalog_.frame_semantics);
        source_ = typed_member_detail::graphs(catalog_, frames.typed_source_graphs);
    }
public:
    Cache(const Image &image, const Catalog &catalog) : image_(image), catalog_(catalog),
        target_cache_(image), target_(image, target_cache_) {
        std::set<uint32_t> source_bodies;
        for (const auto &pattern : catalog.patterns) if (pattern.owner == pattern.reference &&
                ((pattern.flags & 2) || pattern.flags == 17)) {
            if (pattern.flags & 2) {
                const bool first_body = source_bodies.insert(pattern.owner).second;
                if (first_body) source_entries_[pattern.owner] = static_cast<uint32_t>(pattern.raw.size());
                else source_entries_[pattern.owner] = (std::max)(source_entries_[pattern.owner], static_cast<uint32_t>(pattern.raw.size()));
                source_leaves_.erase(pattern.owner);
            } else if (!source_bodies.count(pattern.owner)) {
                source_entries_[pattern.owner] = (std::max)(source_entries_[pattern.owner], static_cast<uint32_t>(pattern.raw.size()));
                source_leaves_.insert(pattern.owner);
            }
        }
        for (const auto &spec : catalog.field_specs) field_specs_.emplace(spec.object, spec.offset, spec.width, spec.flags);
    }
    void refresh(const State &state) {
        std::map<uint32_t, uint32_t> roots, native_roots, callables, native_callables;
        std::set<uint32_t> ambiguous_roots, ambiguous_calls;
        for (const auto &field : state.fields) {
            if (field.sources < 2 || !field_specs_.count({field.object, field.offset, field.width, field.flags})) continue;
            const auto actual = resolve(state.ranges, field.object);
            if (!actual || !image_.section(actual, 1)) continue;
            roots.emplace(field.object, actual);
            const auto [old, inserted] = native_roots.emplace(actual, field.object);
            if (!inserted && old->second != field.object) ambiguous_roots.insert(actual);
        }
        for (const auto native : ambiguous_roots) {
            native_roots.erase(native);
            for (auto at = roots.begin(); at != roots.end();) if (at->second == native) at = roots.erase(at); else ++at;
        }
        // Scope alone cannot authorize a call's ABI. Require an independently
        // mapped entry byte and a complete reviewed canonical body/leaf.
        for (const auto &[reference, length] : source_entries_) {
            const auto actual = resolve(state.ranges, reference);
            const auto *section = actual ? image_.section(actual, 1) : nullptr;
            if (!section || !(section->flags & Image::execute_flag)) continue;
            const auto function = std::lower_bound(image_.functions.begin(), image_.functions.end(), actual,
                [](const auto &value, uint32_t address) { return value.begin < address; });
            const bool unwind_entry = function != image_.functions.end() && function->begin == actual && function->owner == actual;
            bool complete_leaf = false;
            if (source_leaves_.count(reference) && length && actual) {
                auto range = std::upper_bound(state.ranges.begin(), state.ranges.end(), reference,
                    [](uint32_t value, const auto &entry) { return value < entry.begin; });
                const auto *before = image_.read(actual - 1, 1);
                const auto *last = image_.read(actual + length - 1, 1);
                if (range != state.ranges.begin()) {
                    --range;
                    complete_leaf = range->begin <= reference && uint64_t(reference) + length <= range->end &&
                        uint64_t(range->native) + reference - range->begin == actual && before && *before == 0xcc &&
                        last && *last == 0xc3;
                }
            }
            if (!unwind_entry && !complete_leaf) continue;
            callables.emplace(reference, actual);
            const auto [old, inserted] = native_callables.emplace(actual, reference);
            if (!inserted && old->second != reference) ambiguous_calls.insert(actual);
        }
        for (const auto native : ambiguous_calls) {
            native_callables.erase(native);
            for (auto at = callables.begin(); at != callables.end();) if (at->second == native) at = callables.erase(at); else ++at;
        }
        if (roots != roots_ || callables != callables_) { source_values_.clear(); target_values_.clear(); }
        roots_ = std::move(roots); native_roots_ = std::move(native_roots);
        callables_ = std::move(callables); native_callables_ = std::move(native_callables);
    }
    Operand operand(bool target, uint32_t owner, uint32_t address, const hde64s &op) override {
        auto result = form(op);
        if (!result.shape()) return result;
        if (op.opcode != 0x8d) {
            const auto reg = op.modrm_reg + (op.rex_r ? 8u : 0u), rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
            const auto source = op.opcode == 0x89 ? reg : rm;
            // The admitted adaptation starts from a saved-register MOV.
            // Other full-width MOVs still remain potential candidates; lack
            // of a supported provenance model must not make them disappear.
            if (!(0xf0e8u & (1u << source))) return result;
        }
        load();
        const typed_member_detail::Graph *graph = nullptr;
        if (target) graph = target_.graph(owner);
        else if (const auto found = source_.find(owner); found != source_.end()) graph = &found->second;
        if (!graph) return result;
        const auto row = graph->code.find(address);
        if (row == graph->code.end()) return result;
        const auto &actual = row->second.decoded;
        if (actual.len != op.len || actual.opcode != op.opcode || actual.rex != op.rex || actual.modrm != op.modrm ||
                actual.disp.disp32 != op.disp.disp32 || actual.p_66 != op.p_66 || actual.p_67 != op.p_67 ||
                actual.p_rep != op.p_rep || actual.p_lock != op.p_lock || actual.p_seg != op.p_seg) return result;
        auto &values = target ? target_values_ : source_values_;
        if (!values.count(owner)) values.emplace(owner, analyze(*graph,
            [&](uint32_t address) -> uint32_t {
                if (target) { const auto found = native_roots_.find(address); return found == native_roots_.end() ? 0 : found->second; }
                return roots_.count(address) ? address : 0;
            }, [&](uint32_t callee) { return target ? native_callables_.count(callee) != 0 : callables_.count(callee) != 0; }));
        const auto &analysis = values.at(owner);
        const auto incoming = analysis.incoming.find(address);
        if (!analysis.valid || incoming == analysis.incoming.end()) return result;
        if (op.opcode == 0x8d) {
            const int64_t value = int64_t(address) + op.len + static_cast<int32_t>(op.disp.disp32);
            if (value <= 0 || value > UINT32_MAX) return result;
            if (target) { const auto found = native_roots_.find(static_cast<uint32_t>(value));
                if (found != native_roots_.end()) result.root = found->second;
            } else if (roots_.count(static_cast<uint32_t>(value))) result.root = static_cast<uint32_t>(value);
        } else {
            const auto reg = op.modrm_reg + (op.rex_r ? 8u : 0u), rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
            result.root = incoming->second[op.opcode == 0x89 ? reg : rm];
        }
        return result;
    }
};
} // namespace dfcn::pe_runtime::global_value_detail
