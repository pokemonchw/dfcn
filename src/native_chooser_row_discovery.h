#pragma once
#include "native_chooser_row_strings.h"

namespace dfcn::pe_runtime::chooser_row_detail {
using Predecessors = std::map<uint32_t, std::set<uint32_t>>;
inline Predecessors predecessors(const Code &code, const ControlFlow &flow) {
    Predecessors result;
    for (const auto &[address, row] : code) {
        const auto &op = row.decoded;
        if (const auto target = method_call_detail::branch_destination(row)) result[target].insert(address);
        if (const auto indirect = flow.indirect_edges.find(address); indirect != flow.indirect_edges.end())
            for (auto target : indirect->second) result[target].insert(address);
        if (op.opcode != 0xe9 && op.opcode != 0xeb && op.opcode != 0xc3 && op.opcode != 0xc2 && op.opcode != 0xcc &&
                !(op.opcode == 0xff && op.modrm_reg >= 4) && !flow.nonreturning_calls.contains(address) &&
                code.contains(address + op.len)) result[address + op.len].insert(address);
    }
    return result;
}
inline bool constant_on_predecessors(const Code &code, const Predecessors &before,
        uint32_t start, unsigned wanted, uint64_t value) {
    std::set<uint32_t> seen; std::vector<uint32_t> pending{start}; size_t definitions = 0;
    while (!pending.empty()) {
        const auto at = pending.back(); pending.pop_back();
        if (!seen.insert(at).second) continue;
        if (seen.size() > 8192) return false;
        const auto parents = before.find(at);
        if (parents == before.end() || parents->second.empty()) return false;
        for (auto pc : parents->second) {
            const auto found = code.find(pc); if (found == code.end()) return false;
            const auto &op = found->second.decoded;
            if (op.opcode >= 0xb8 && op.opcode <= 0xbf && !op.p_66 &&
                    op.opcode - 0xb8 + (op.rex_b ? 8u : 0u) == wanted) {
                if ((op.rex_w ? op.imm.imm64 : op.imm.imm32) != value) return false;
                ++definitions; continue;
            }
            if (writes_gpr(op, wanted)) return false;
            if ((op.opcode == 0xe8 || (op.opcode == 0xff && op.modrm_reg == 2)) &&
                    !(argument_alias_detail::nonvolatile & (1u << wanted))) return false;
            pending.push_back(pc);
        }
    }
    return definitions != 0;
}
inline bool same_reload_before(const Code &code, const Predecessors &before,
        const argument_alias_detail::Owner &scope, uint32_t join, const Instruction &reload) {
    const auto &load = reload.decoded;
    uint32_t frame; int32_t offset;
    if (load.opcode != 0x8b || load.p_66 || load.p_67 || load.p_lock || load.p_rep || load.p_seg ||
            !local(load, frame, offset) || reg(load) == 4 || reg(load) == 5) return false;
    const auto base = scope.origin(reload.address, frame);
    if (!base) return false;
    const int64_t slot = int64_t(*base) + offset;
    const auto wanted = reg(load), width = load.rex_w ? 8u : 4u;
    std::map<uint32_t, unsigned> marks;
    std::function<bool(uint32_t)> incoming = [&](uint32_t at) {
        auto &mark = marks[at]; if (mark) return mark == 2;
        if (marks.size() > 4096) return false;
        mark = 1;
        const auto parents = before.find(at);
        if (parents == before.end() || parents->second.empty()) return false;
        for (auto pc : parents->second) {
            const auto found = code.find(pc); if (found == code.end()) return false;
            const auto &op = found->second.decoded;
            if (op.p_lock || op.p_rep || op.p_seg || op.p_67 || frame_detail::writes_rsp(op) ||
                    frame_detail::frame_writes_rbp(op) || op.opcode == 0xe8 ||
                    (op.opcode == 0xff && op.modrm_reg >= 2)) return false;
            uint32_t other_frame; int32_t other_offset;
            const bool stack = local(op, other_frame, other_offset);
            const auto other_base = stack ? scope.origin(pc, other_frame) : std::optional<int32_t>{};
            const bool same = other_base && int64_t(*other_base) + other_offset == slot && access_width(op) == width;
            if (same && !op.p_66 && op.opcode == 0x8b && reg(op) == wanted) continue;
            if (same && !op.p_66 && op.opcode == 0x89 && reg(op) == wanted) {
                // A DWORD reload zeroes the upper half. The store alone only
                // equates low bits, so its unique immediate predecessor must
                // independently establish the same zero-extended GPR value.
                if (width == 4) {
                    const auto prior = before.find(pc);
                    if (prior == before.end() || prior->second.size() != 1) return false;
                    const auto row = code.find(*prior->second.begin());
                    if (row == code.end() || row->first + row->second.decoded.len != pc) return false;
                    const auto &definition = row->second.decoded;
                    if (definition.rex_w || definition.p_66 || definition.p_67 || definition.p_lock ||
                            definition.p_rep || definition.p_seg ||
                            (definition.opcode != 0x8d && definition.opcode != 0x8b) || reg(definition) != wanted) return false;
                }
                continue;
            }
            if (writes_gpr(op, wanted)) return false;
            if ((op.flags & F_MODRM) && op.modrm_mod != 3 && op.opcode != 0x8d && !memory_read_only(op)) {
                const auto bytes = access_width(op);
                if (!other_base || !bytes || bytes == UINT32_MAX) return false;
                const int64_t left = int64_t(*other_base) + other_offset;
                if (left < slot + width && slot < left + bytes) return false;
            }
            // No implicit memory write may hide an alias of the reload slot.
            if ((op.opcode >= 0xa0 && op.opcode <= 0xaf) || (op.opcode >= 0x6c && op.opcode <= 0x6f) ||
                    op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc) return false;
            if (!incoming(pc)) return false;
        }
        mark = 2; return true;
    };
    return incoming(join);
}
struct Loop { uint32_t header = 0, latch = 0; std::set<uint32_t> members; };
inline std::vector<Loop> natural_loops(const Code &code, const Predecessors &before,
        const argument_alias_detail::Owner &scope, uint32_t initialization, uint32_t draw) {
    std::vector<Loop> result;
    for (const auto &[latch, row] : code) {
        const auto header = method_call_detail::branch_destination(row);
        if (!header || header > initialization || initialization >= draw || draw >= latch || !code.contains(header)) continue;
        // Some compilers let the initial entry skip one loop-header reload.
        // Accept that shape only when all incoming paths already carry the
        // exact same full GPR value as the reload; no instruction is ignored.
        uint32_t initial_join = 0;
        const auto &prefix = code.at(header);
        const auto following = header + prefix.decoded.len;
        if (following < initialization && code.contains(following)) {
            const auto parents = before.find(following);
            if (parents != before.end() && std::any_of(parents->second.begin(), parents->second.end(),
                    [&](auto pc) { return pc < header; }) && same_reload_before(code, before, scope, following, prefix))
                initial_join = following;
        }
        Loop loop{header, latch, {header}}; std::vector<uint32_t> pending{latch}; bool valid = true;
        while (!pending.empty()) {
            const auto pc = pending.back(); pending.pop_back();
            if (!loop.members.insert(pc).second) continue;
            if (pc < header || pc > latch || loop.members.size() > 8192 || !code.contains(pc)) { valid = false; break; }
            const auto parents = before.find(pc);
            if (parents == before.end() || parents->second.empty()) { valid = false; break; }
            for (auto parent : parents->second)
                if (!(pc == initial_join && parent < header)) pending.push_back(parent);
        }
        if (!valid || !loop.members.contains(initialization) || !loop.members.contains(draw)) continue;
        for (auto pc : loop.members) if (pc != header) {
            const auto parents = before.find(pc);
            if (parents == before.end()) { valid = false; break; }
            for (auto parent : parents->second)
                if (!loop.members.contains(parent) && !(pc == initial_join && parent < header)) valid = false;
        }
        if (valid) result.push_back(std::move(loop));
    }
    std::sort(result.begin(), result.end(), [](const auto &a, const auto &b) {
        return std::tuple{a.members.size(), a.header, a.latch} < std::tuple{b.members.size(), b.header, b.latch};
    });
    return result;
}
inline bool ordinary(const Instruction &row, const Operation &object, bool construction,
        const std::set<uint32_t> &writes, const argument_alias_detail::Owner &scope) {
    const auto &op = row.decoded;
    if (op.p_lock || op.p_rep || op.p_seg || op.p_67 || frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) return false;
    if (op.opcode == 0x90 || (op.opcode == 0x0f && op.opcode2 == 0x1f && !op.modrm_reg)) return true;
    if (op.opcode >= 0xb0 && op.opcode <= 0xbf) return true;
    if (op.opcode == 0x98) return true;
    if (!(op.flags & F_MODRM)) return false;
    if ((op.opcode == 0xc6 || op.opcode == 0xc7) && op.modrm_reg) return false;
    const bool allowed = op.opcode == 0x8b || op.opcode == 0x89 || op.opcode == 0x8d || op.opcode == 0x63 ||
        op.opcode == 0x03 || op.opcode == 0x01 || op.opcode == 0x2b || op.opcode == 0x29 || op.opcode == 0x39 ||
        op.opcode == 0x3b || op.opcode == 0x85 || op.opcode == 0x81 || op.opcode == 0x83 || op.opcode == 0x31 ||
        op.opcode == 0x33 || op.opcode == 0xd1 || op.opcode == 0xc1 || op.opcode == 0xc6 || op.opcode == 0xc7 ||
        (op.opcode == 0xff && op.modrm_reg <= 1) ||
        (op.opcode == 0x0f && ((op.opcode2 >= 0x40 && op.opcode2 <= 0x4f) || op.opcode2 == 0xb6 || op.opcode2 == 0xb7));
    if (!allowed) return false;
    if (op.modrm_mod == 3 || op.opcode == 0x8d) return true;
    uint32_t frame; int32_t offset;
    const bool stack = local(op, frame, offset);
    if (memory_read_only(op)) return construction || stack;
    const auto width = access_width(op);
    if (!width || width == UINT32_MAX) return false;
    if (stack) {
        const auto base = scope.origin(row.address, frame), owned = scope.origin(row.address, object.frame);
        if (!base || !owned) return false;
        const int64_t left = int64_t(*base) + offset, right = int64_t(*owned) + object.object;
        return left + width <= right || left >= right + 32;
    }
    return construction && op.opcode == 0x89 && !op.rex_w && !op.p_66 && width == 4 && writes.contains(rip(row));
}
inline uint32_t clip_entry(const Code &code, uint32_t shrink, const Operation &object) {
    const auto *before = chooser_feature_detail::previous(code, shrink);
    for (unsigned count = 0; before && count < 32; ++count) {
        const auto &op = before->decoded; uint32_t frame; int32_t offset;
        if (op.opcode == 0x8b && op.rex_w && reg(op) == 1 && local(op, frame, offset) &&
                frame == object.frame && int64_t(offset) == int64_t(object.object) + 16) return before->address;
        if (op.opcode == 0xe8 || (op.opcode == 0xff && op.modrm_reg >= 2) ||
                frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) return 0;
        before = chooser_feature_detail::previous(code, before->address);
    }
    return 0;
}
template<typename Image, typename View, typename Bounds>
inline bool name_production(const Image &image, View &view, Bounds &bounds, const State &state,
        const RowContract &source, const Code &code, const Predecessors &before, const std::set<uint32_t> &entries,
        const std::set<uint32_t> &unstructured_entries, const argument_alias_detail::Owner &scope, const Operation &object,
        uint32_t initialization, uint32_t start, uint32_t finish, uint32_t &failure_site, uint32_t &failure_call,
        const char *&failure_reason) {
    failure_site = failure_call = 0;
    failure_reason = "independent write or formatter identity";
    std::set<uint32_t> allowed, writes; std::set<std::pair<uint32_t, unsigned>> roles, observed;
    for (auto call : source.calls) if (const auto target = inline_resize_callee(state, call)) allowed.insert(target);
    for (auto reference : source.writes) {
        std::set<uint32_t> targets;
        if (const auto direct = resolve(state.ranges, reference)) targets.insert(direct);
        for (const auto &field : state.fields) {
            const uint64_t begin = uint64_t(field.object) + field.offset;
            if (field.sources < 2 || reference < begin || uint64_t(reference) + 4 > begin + field.width) continue;
            const auto root = resolve(state.ranges, field.object);
            const uint64_t target = uint64_t(root) + field.native_offset + reference - begin;
            if (root && target <= UINT32_MAX) targets.insert(static_cast<uint32_t>(target));
        }
        if (targets.size() != 1) return false;
        writes.insert(*targets.begin());
    }
    for (const auto &[callee, argument] : source.roles) {
        const auto target = inline_resize_callee(state, callee); if (!target) return false;
        roles.emplace(target, argument);
    }
    const auto wrapper = inline_resize_callee(state, source.literal_method);
    // Alternatives are explicit static UI roles in this source-owned row;
    // they never rewrite, trim or classify a generated/user-authored name.
    std::vector<const std::vector<unsigned char> *> literals{&source.literal};
    for (const auto &value : source.literal_variants) literals.push_back(&value);
    std::set<uint32_t> visited; std::vector<uint32_t> pending{start}; bool reached = false, literal = false;
    while (!pending.empty()) {
        const auto pc = pending.back(); pending.pop_back();
        if (pc == finish) { reached = true; continue; }
        if (!visited.insert(pc).second) continue;
        failure_site = pc; failure_call = 0;
        failure_reason = "unclassified instruction or construction escape";
        if (visited.size() > 4096 || pc < start || pc >= finish) return false;
        const auto found = code.find(pc); if (found == code.end()) return false;
        const auto &row = found->second; const auto &op = row.decoded;
        if (source.literal_kind == 2) {
            uint32_t end = 0;
            for (const auto *value : literals) {
                const auto candidate = assigned_literal(image, code, pc, object, *value, unstructured_entries, bounds);
                if (candidate && end) return false;
                if (candidate) end = candidate;
            }
            if (end) {
                failure_reason = "literal assignment predecessor constant or extent";
                if (!constant_on_predecessors(code, before, pc, 6, INT64_MAX) || end > finish) return false;
                for (auto at = code.lower_bound(pc); at != code.end() && at->first < end; ++at) visited.insert(at->first);
                literal = true; pending.push_back(end); continue;
            }
        }
        if (op.opcode == 0xe8) {
            const auto target = direct_target(row); Operation passed;
            failure_call = target;
            failure_reason = "owned formatter or literal arguments";
            bool owns = false;
            for (unsigned argument : {1u, 2u, 8u, 9u}) if (argument_local(code, pc, argument, passed, &entries) && same_object(passed, object)) {
                if (owns) return false;
                owns = true;
                if (roles.contains({target, argument})) observed.emplace(target, argument);
                else if (argument == 1) {
                    uint32_t data = 0;
                    if (!literal_argument(code, pc, entries, data)) return false;
                    const std::vector<unsigned char> *value = nullptr;
                    for (const auto *candidate : literals) if (literal_at(image, data, *candidate, 0, candidate->size())) {
                        if (value) return false;
                        value = candidate;
                    }
                    if (!value) return false;
                    const auto tail = target == wrapper ? cstring_tail(image, target) : 0;
                    if (tail ? !pointer_count_method(image, view, bounds, tail, source.literal_kind) :
                            (!constant_register(code, entries, pc, 8, value->size() - 1) ||
                             !pointer_count_method(image, view, bounds, target, source.literal_kind))) return false;
                    literal = true;
                } else return false;
            }
            if (!owns && !allowed.contains(target) && !read_only_lookup(image, view, target)) {
                failure_reason = "unproved non-output callee effects"; return false;
            }
        } else if (const auto target = method_call_detail::branch_destination(row)) {
            pending.push_back(target);
            if (op.opcode == 0xe9 || op.opcode == 0xeb) continue;
        } else if (!ordinary(row, object, true, writes, scope)) return false;
        pending.push_back(pc + op.len);
    }
    // Incoming edges may enter the whole lifetime or its known row loop, but
    // never bypass construction and inject a string into a production arm.
    for (auto pc : visited) {
        failure_site = pc; failure_call = 0; failure_reason = "external construction entry";
        const auto parents = before.find(pc); if (parents == before.end()) return false;
        for (auto parent : parents->second)
            if (!visited.contains(parent) && !(parent >= initialization && parent < start)) return false;
    }
    failure_site = finish; failure_call = 0; failure_reason = "construction end bypass";
    const auto incoming = before.find(finish);
    if (incoming == before.end()) return false;
    for (auto parent : incoming->second)
        if (!visited.contains(parent) && !(parent >= initialization && parent < start)) return false;
    failure_reason = !reached ? "construction end unreachable" : !literal ? "required UI literal role absent" :
        "required formatter roles incomplete";
    return reached && literal && observed == roles;
}
template<typename Image, typename Bounds>
inline bool closed_row(const Image &image, Bounds &bounds, const Code &code, const Loop &loop,
        const std::set<uint32_t> &entries, const std::set<uint32_t> &unstructured_entries,
        const argument_alias_detail::Owner &scope, uint32_t draw, uint32_t cleanup, const Operation &object) {
    using Node = std::pair<uint32_t, bool>; std::map<Node, unsigned> marks;
    size_t backedges = 0, exits = 0;
    std::function<bool(uint32_t, bool)> visit = [&](uint32_t pc, bool cleaned) {
        if (pc == loop.header) { if (cleaned) ++backedges; return cleaned; }
        if (!loop.members.contains(pc)) { if (cleaned) ++exits; return cleaned; }
        auto &mark = marks[{pc, cleaned}]; if (mark) return mark == 2;
        if (marks.size() > 512) return false;
        mark = 1;
        const auto found = code.find(pc); if (found == code.end()) return false;
        const auto &row = found->second; const auto &op = row.decoded;
        if (!cleaned) if (const auto end = destroyed_inline(image, code, pc, object, unstructured_entries, bounds)) {
            if (!visit(end, true)) return false;
            mark = 2; return true;
        }
        if (const auto target = method_call_detail::branch_destination(row)) {
            if (!visit(target, cleaned) || ((op.opcode != 0xe9 && op.opcode != 0xeb) && !visit(pc + op.len, cleaned))) return false;
        } else if (op.opcode == 0xe8) {
            Operation passed;
            if (cleaned || direct_target(row) != cleanup || !bounds.bounded_call(cleanup, 1).proved ||
                    !argument_local(code, pc, 1, passed, &entries) || !same_object(passed, object) || !visit(pc + op.len, true)) return false;
        } else if (!ordinary(row, object, false, {}, scope) || !visit(pc + op.len, cleaned)) return false;
        mark = 2; return true;
    };
    return visit(draw + 5, false) && backedges && exits;
}
} // namespace dfcn::pe_runtime::chooser_row_detail

namespace dfcn::pe_runtime {
inline void complete_chooser_rows(address_runtime::State &state, const std::vector<unsigned char> &blob,
        const std::vector<unsigned char> &inline_blob) {
    using namespace chooser_feature_detail;
    std::vector<RowContract> rows; read(blob, &rows);
    const auto specs = inline_resize_detail::read(inline_blob);
    for (const auto &row : rows) {
        if (!std::binary_search(state.absent_features.begin(), state.absent_features.end(), row.identity)) continue;
        const auto found = std::find_if(state.inline_resizes.begin(), state.inline_resizes.end(),
            [&](const auto &value) { return value.reference == row.primary; });
        if (found == state.inline_resizes.end() || found->owner != inline_resize_function(state, row.owner) ||
                !(found->flags & inline_resize_detail::guard_form) ||
                !resolve(state.ranges, row.draw) || resolve(state.ranges, row.draw + 5) != resolve(state.ranges, row.draw) + 5)
            throw std::runtime_error("Chooser row absence lost its complete name/resize/draw contract");
        for (auto reference : row.resizes) {
            const auto source = std::find_if(specs.begin(), specs.end(), [&](const auto &value) { return value.reference == reference; });
            if (source == specs.end() || !covered(row.spans, reference, source->original.size()) ||
                    !covered(state.absent_spans, reference, source->original.size()) ||
                    std::any_of(state.inline_resizes.begin(), state.inline_resizes.end(),
                        [&](const auto &value) { return value.reference == reference; }))
                throw std::runtime_error("Chooser row absence contradicts a positive status resize");
        }
        for (const auto &span : row.spans) for (const auto &range : state.ranges)
            if (range.begin < span.end && span.begin < range.end)
                throw std::runtime_error("Chooser row absence contradicts a positive status instruction");
    }
}

template<typename Image, typename Catalog>
inline void discover_chooser_rows(const Image &image, const Catalog &catalog, address_runtime::State &state,
        const address_runtime::Progress &report = {}) {
    using namespace chooser_row_detail;
    std::vector<RowContract> rows; chooser_feature_detail::read(catalog.chooser_features, &rows);
    const auto specs = inline_resize_detail::read(catalog.inline_resizes);
    argument_alias_detail::Cache<Image> cache(image);
    typed_member_detail::TargetView<Image> view(image, cache);
    bounded_argument_detail::Cache<typed_member_detail::TargetView<Image>> bounds(view);
    for (const auto &row : rows) {
        const auto reject = [&](const std::string &reason) { if (report) {
            std::ostringstream message; message << "Chooser row unresolved: source=0x" << std::hex << row.primary << ' ' << reason;
            report(message.str());
        } };
        bool overlaps = false;
        for (const auto &span : row.spans) for (const auto &range : state.ranges)
            if (range.begin < span.end && span.begin < range.end) overlaps = true;
        if (overlaps) continue; // Positive status evidence always vetoes absence.
        const auto spec = std::find_if(specs.begin(), specs.end(), [&](const auto &value) { return value.reference == row.primary; });
        if (spec == specs.end() || spec->owner != row.owner || spec->draw != row.draw || spec->resize != row.resize)
            throw std::runtime_error("Chooser row and canonical inline evidence disagree");
        const auto owner = inline_resize_function(state, row.owner), draw_target = inline_resize_callee(state, spec->callee);
        const auto constructor = inline_resize_callee(state, row.constructor), cleanup = inline_resize_callee(state, row.cleanup);
        const auto resize = inline_resize_callee(state, row.resize), receiver = resolve(state.ranges, row.draw_receiver);
        const auto grow = resize ? resize_grow(image, resize) : 0;
        if (!owner || !draw_target || !grow || !receiver) { reject("unmapped independent resize/draw identity"); continue; }
        const auto &scope = cache.get(owner);
        if (!scope.valid) { reject(std::string("logical CFG/EH contract: ") + scope.failure.reason); continue; }
        const auto &code = scope.code;
        const auto before = predecessors(code, scope.flow);
        std::set<uint32_t> entries = scope.external_entries, unstructured_entries = scope.external_entries;
        for (const auto &[address, targets] : scope.flow.indirect_edges) {
            (void)address; unstructured_entries.insert(targets.begin(), targets.end());
        }
        for (const auto &[pc, parents] : before) {
            for (auto parent : parents) if (parent + code.at(parent).decoded.len != pc) entries.insert(pc);
        }
        const auto frame = frame_detail::target_rbp_frame(image, owner);
        struct Match { InlineResizeBinding guard, shrink; uint32_t draw; };
        std::vector<Match> matches;
        size_t shapes = 0, productions = 0, loops = 0;
        std::vector<std::string> name_failures;
        for (const auto &[pc, instruction] : code) {
            if (instruction.decoded.opcode != 0x89) continue;
            const auto function = frame_detail::function_at(image, pc);
            if (function == image.functions.end()) continue;
            const auto size = (std::min)(uint32_t(128), function->end - pc);
            const auto object = operation(image.read(pc, size), size);
            if (!object || object.constant_width || object.frame != 5 || !frame.valid || pc < frame.ready || pc + object.length > frame.end) continue;
            const auto interior = entries.upper_bound(pc);
            if (interior != entries.end() && *interior < pc + object.length) continue;
            const auto draws = paired_draws(image, code, pc + object.length, draw_target, object, spec->flags & 1, &entries);
            if (draws.size() != 1) continue;
            const auto draw = *draws.begin();
            const auto *draw_receiver = chooser_feature_detail::previous(code, draw);
            if (!draw_receiver || draw_receiver->decoded.opcode != 0x8d || !draw_receiver->decoded.rex_w ||
                    reg(draw_receiver->decoded) != 1 || rip(*draw_receiver) != receiver ||
                    !zero_argument(code, draw, 9, &entries)) continue;
            if (!chooser_feature_detail::grow_arm(code, pc, object, grow, draw, draw_target, entries)) continue;
            const auto *branch = chooser_feature_detail::previous(code, pc);
            const auto *compare = branch ? chooser_feature_detail::previous(code, branch->address) : nullptr;
            if (!compare || !branch) continue;
            const auto guard_length = pc - compare->address;
            const auto guard = resize_guard(image.read(compare->address, guard_length), guard_length);
            if (!guard.length || guard.width != object.width || entries.contains(branch->address)) continue;
            const auto finish = clip_entry(code, pc, object);
            if (!finish || finish >= compare->address) continue;
            ++shapes;
            for (auto init = code.lower_bound(finish > 2048 ? finish - 2048 : 0); init != code.end() && init->first < finish; ++init) {
                uint32_t after = initialized(image, code, init->first, object, unstructured_entries);
                if (!after && direct_target(init->second) == constructor) {
                    Operation passed;
                    static constexpr unsigned char body[]{0x0f,0x57,0xc0,0x48,0x8b,0xc1,0x0f,0x11,0x01,
                        0x48,0xc7,0x41,0x10,0,0,0,0,0x48,0xc7,0x41,0x18,0x0f,0,0,0,0xc6,0x01,0,0xc3};
                    const auto *actual = image.read(constructor, sizeof(body));
                    if (actual && !std::memcmp(actual, body, sizeof(body)) &&
                            argument_local(code, init->first, 1, passed, &entries) && same_object(passed, object)) after = init->first + 5;
                }
                if (!after || after >= finish) continue;
                uint32_t failure_site = 0, failure_call = 0; const char *failure_reason = "";
                if (!name_production(image, view, bounds, state, row, code, before, entries,
                        unstructured_entries, scope, object, init->first, after, finish, failure_site, failure_call, failure_reason)) {
                    std::ostringstream detail;
                    detail << "name init=0x" << std::hex << init->first << " draw=0x" << draw <<
                        " instruction=0x" << failure_site << ' ' << failure_reason;
                    if (failure_call) {
                        detail << " callee=0x" << failure_call;
                        const auto &callee = cache.get(failure_call);
                        if (!callee.valid) detail << " logical CFG/EH: " << callee.failure.reason;
                    }
                    name_failures.push_back(detail.str());
                    continue;
                }
                ++productions;
                const auto candidates = natural_loops(code, before, scope, init->first, draw);
                if (candidates.empty() || (candidates.size() > 1 && candidates[0].members.size() == candidates[1].members.size())) continue;
                const auto &loop = candidates.front();
                if (std::any_of(scope.external_entries.begin(), scope.external_entries.end(),
                        [&](auto entry) { return loop.members.contains(entry); })) continue;
                std::set<uint32_t> text_calls;
                for (auto address : loop.members) if (direct_target(code.at(address)) == draw_target) text_calls.insert(address);
                if (text_calls != std::set<uint32_t>{draw} ||
                        !closed_row(image, bounds, code, loop, entries, unstructured_entries, scope, draw, cleanup, object)) continue;
                ++loops;
                matches.push_back({{row.primary, owner, compare->address, guard.length, object.frame, object.width,
                    object.object, spec->flags | guard_form},
                    {row.primary, owner, pc, object.length, object.frame, object.width,
                        object.object, spec->flags}, draw});
            }
        }
        if (matches.size() != 1) {
            std::ostringstream reason;
            reason << "complete resize/name/loop candidates=" << shapes << '/' << productions << '/' << loops;
            if (!productions) for (const auto &failure : name_failures) reject(failure);
            reject(reason.str()); continue;
        }
        const auto &match = matches.front();
        const auto same_operation = [](const InlineResizeBinding &left, const InlineResizeBinding &right) {
            return left.reference == right.reference && left.owner == right.owner &&
                left.native_instruction == right.native_instruction && left.length == right.length &&
                left.frame_register == right.frame_register && left.width_register == right.width_register &&
                left.object_displacement == right.object_displacement && left.flags == right.flags;
        };
        const auto overlaps_operation = [](const InlineResizeBinding &left, const InlineResizeBinding &right) {
            return uint64_t(left.native_instruction) < uint64_t(right.native_instruction) + right.length &&
                uint64_t(right.native_instruction) < uint64_t(left.native_instruction) + left.length;
        };
        for (const auto &other : state.inline_resizes) {
            // A previous closed row publishes its draw identity. On the next
            // pass ordinary inline discovery can therefore identify this
            // exact shrink body independently. The full row above proves
            // that body, its preceding guard, both arms and the same draw;
            // normalize only that identical contract to the stronger guard.
            if (std::binary_search(row.resizes.begin(), row.resizes.end(), other.reference) ||
                    (other.reference == row.primary && !same_operation(other, match.guard) &&
                        !same_operation(other, match.shrink)) ||
                    (other.reference != row.primary && (overlaps_operation(other, match.guard) ||
                        overlaps_operation(other, match.shrink))))
                throw std::runtime_error("Chooser row certificate conflicts with a positive resize operation");
        }
        Bindings bindings;
        for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
        if (!bindings.compatible(row.draw, 6, match.draw)) throw std::runtime_error("Chooser row draw contradicts known instruction identity");
        bindings.add(row.draw, 6, match.draw);
        std::map<uint32_t, Byte> changes;
        for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
        std::array<unsigned char, 6> original{0xe8, 0, 0, 0, 0, static_cast<unsigned char>(row.draw_next)};
        const int32_t displacement = spec->callee - row.draw - 5;
        std::memcpy(original.data() + 1, &displacement, 4);
        for (unsigned at = 0; at < 6; ++at) {
            const auto actual = at < 5 ? code.at(match.draw).bytes[at] : code.at(match.draw + 5).bytes.front();
            if (original[at] == actual) continue;
            Byte value{row.draw + at, original[at], actual};
            const auto [old, inserted] = changes.emplace(value.address, value);
            if (!inserted && (old->second.reference != value.reference || old->second.native != value.native))
                throw std::runtime_error("Chooser row source/target draw bytes conflict");
        }
        state.ranges = bindings.export_ranges(); state.bytes.clear();
        for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
        const auto primary = std::find_if(state.inline_resizes.begin(), state.inline_resizes.end(),
            [&](const auto &other) { return other.reference == row.primary; });
        if (primary == state.inline_resizes.end()) state.inline_resizes.push_back(match.guard);
        else *primary = match.guard;
        if (!std::binary_search(state.absent_features.begin(), state.absent_features.end(), row.identity)) {
            state.absent_features.push_back(row.identity);
            state.absent_spans.insert(state.absent_spans.end(), row.spans.begin(), row.spans.end());
        }
        std::sort(state.inline_resizes.begin(), state.inline_resizes.end(), [](const auto &a, const auto &b) { return a.reference < b.reference; });
        std::sort(state.absent_features.begin(), state.absent_features.end());
        std::sort(state.absent_spans.begin(), state.absent_spans.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
        if (report) report("Native chooser row: complete name/resize arms/draw/destruction/backedge; two status rows proved absent");
    }
}
} // namespace dfcn::pe_runtime
