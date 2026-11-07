#pragma once
#include "native_method_call_discovery.h"
#include "native_typed_leaf_discovery.h"

namespace dfcn::pe_runtime::typed_receiver_detail {
using namespace address_runtime;
using namespace display_decode;
using namespace method_call_detail;

inline bool direct_operand(const Pattern &pattern, const Fixup &fixup) {
    return (fixup.kind & 0x100) && !(fixup.kind & 0xff) && fixup.width == 4 && fixup.offset &&
        fixup.next == fixup.offset + 4 && fixup.next <= pattern.raw.size() &&
        pattern.raw[fixup.offset - 1] == 0xe8;
}

template<typename Image>
inline uint32_t typed_global(const Image &image, const State &state, uint32_t reference) {
    uint32_t result = 0;
    for (const auto &field : state.fields) {
        if (field.sources < 2 || uint64_t(field.object) + field.offset != reference) continue;
        const auto root = resolve(state.ranges, field.object);
        const uint64_t address = uint64_t(root) + field.native_offset;
        if (!root || address > UINT32_MAX || !image.section(static_cast<uint32_t>(address), field.width)) continue;
        if (result && result != address) return 0;
        result = static_cast<uint32_t>(address);
    }
    return result && resolve(state.ranges, reference) == result ? result : 0;
}

inline uint32_t receiver(const std::vector<Instruction> &code, const Pattern &pattern) {
    if (code.size() < 3) return 0;
    for (size_t at = code.size() - 1; at-- > 0;) {
        const auto &instruction = code[at]; const auto &op = instruction.decoded;
        if (boundary(op)) return 0;
        if (!writes_gpr(op, 1)) continue;
        if (op.opcode != 0x8d || !op.rex_w || op.modrm_reg + (op.rex_r ? 8 : 0) != 1 ||
                op.modrm_mod || op.modrm_rm != 5 || op.p_67 || (op.flags & F_SIB)) return 0;
        const auto position = instruction.address - pattern.reference + displacement_position(op);
        const auto operand = std::find_if(pattern.fixups.begin(), pattern.fixups.end(), [&](const auto &fixup) {
            return fixup.offset == position && fixup.width == 4 && !(fixup.kind & 0x1ff);
        });
        return operand == pattern.fixups.end() ? 0 : operand->target;
    }
    return 0;
}

inline bool same_branch(const Instruction &source, const Instruction &target,
        const std::map<uint32_t, uint32_t> &coordinates) {
    const auto &left = source.decoded, &right = target.decoded;
    const auto kind = [](const hde64s &op) -> unsigned {
        if (op.opcode >= 0x70 && op.opcode <= 0x7f) return 1 + (op.opcode & 15);
        if (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) return 1 + (op.opcode2 & 15);
        return op.opcode == 0xe9 || op.opcode == 0xeb ? 17 : 0;
    };
    if (!kind(left) || kind(left) != kind(right) || left.p_66 || right.p_66 || left.p_67 || right.p_67 ||
            left.p_lock || right.p_lock || left.p_rep || right.p_rep || left.p_seg || right.p_seg || left.rex || right.rex)
        return false;
    const auto destination = coordinates.find(branch_destination(source));
    return destination != coordinates.end() && destination->second == branch_destination(target);
}
} // namespace dfcn::pe_runtime::typed_receiver_detail

namespace dfcn::pe_runtime {
// A receiver's named global field and a different, independently identified
// preceding callee locate a complete caller interval. Its actual final E8
// also proves the callee's entry when it lands exactly at the unwind start.
// Only that address is published here; entry bytes still require the normal
// independent prefix proof, and no callee interior is translated by a delta.
template<typename Image, typename Catalog>
inline std::set<uint32_t> discover_typed_receiver_scopes(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace typed_receiver_detail;
    std::map<uint32_t, const Pattern *> whole;
    std::map<uint32_t, const Pattern *> leaves;
    for (const auto &pattern : catalog.patterns)
        if ((pattern.flags & 2) && pattern.reference == pattern.owner) whole.emplace(pattern.owner, &pattern);
        else if (pattern.flags == 17 && pattern.reference == pattern.owner &&
                !resolve(state.function_owners, pattern.owner)) leaves.emplace(pattern.owner, &pattern);
    // _leaf_blocks emits exactly 17. Bit 16 also marks reachable blocks
    // inside unwind functions (25); those cannot replace a whole callee.
    for (const auto &[owner, pattern] : whole) { (void)pattern; leaves.erase(owner); }
    std::set<uint32_t> needed;
    for (const auto &[reference, length] : catalog.required) {
        (void)length;
        auto at = whole.upper_bound(reference);
        if (at == whole.begin()) continue;
        const auto &[owner, pattern] = *--at;
        if (uint64_t(reference) < uint64_t(pattern->reference) + pattern->raw.size() &&
                !resolve(state.function_owners, owner)) needed.insert(owner);
    }
    const auto frames = frame_detail::read(catalog.frame_semantics);
    struct Scope { bool valid = true; std::vector<std::vector<Instruction>> fragments; frame_detail::TargetRbpFrame frame; };
    std::map<uint32_t, Scope> scopes;
    std::map<uint32_t, std::set<uint32_t>> evidence;
    std::map<std::pair<uint32_t, uint32_t>, std::optional<Pattern>> leaf_patterns;
    size_t contexts = 0;
    for (const auto &[owner, parent] : whole) {
        const auto native_owner = resolve(state.function_owners, owner);
        if (!native_owner) continue;
        std::vector<const Fixup *> calls;
        for (const auto &fixup : parent->fixups) if (direct_operand(*parent, fixup)) calls.push_back(&fixup);
        std::sort(calls.begin(), calls.end(), [](const auto *a, const auto *b) { return a->offset < b->offset; });
        for (size_t index = 1; index < calls.size(); ++index) {
            const auto &call = *calls[index], &previous = *calls[index - 1];
            const auto leaf = leaves.find(call.target);
            if (((!needed.count(call.target) || !whole.count(call.target)) && leaf == leaves.end()) || call.target == owner ||
                    call.offset <= previous.offset || call.next - previous.offset + 1 > 192) continue;
            const auto independent = resolve(state.ranges, previous.target) ? resolve(state.ranges, previous.target) :
                resolve(state.function_owners, previous.target);
            if (!independent || previous.target == call.target) continue;
            const auto begin = previous.offset - 1, end = call.next;
            Contract context{};
            context.owner = owner;
            context.pattern.reference = parent->reference + begin;
            context.pattern.owner = owner;
            context.pattern.raw.assign(parent->raw.begin() + begin, parent->raw.begin() + end);
            context.pattern.mask.assign(parent->mask.begin() + begin, parent->mask.begin() + end);
            for (auto fixup : parent->fixups) if (fixup.offset >= begin && fixup.offset + fixup.width <= end) {
                if (fixup.offset == call.offset) continue; // This is the unknown callee, never an identity anchor.
                if (fixup.next && (fixup.next < begin || fixup.next > end)) continue;
                fixup.offset -= begin;
                if (fixup.next) fixup.next -= begin;
                context.pattern.fixups.push_back(fixup);
            }
            const auto source_frame = frames.frame_registers.find(owner);
            if (source_frame != frames.frame_registers.end()) {
                context.frame = source_frame->second[0];
                context.ready = source_frame->second[1]; context.frame_end = source_frame->second[2];
            }
            std::vector<Instruction> source;
            if (!decode_pattern(context.pattern, source) || source.size() < 4 || source.size() > 48 ||
                    source.front().decoded.opcode != 0xe8 || source.back().decoded.opcode != 0xe8) continue;
            const auto root = receiver(source, context.pattern);
            const auto native_root = root ? typed_global(image, state, root) : 0;
            if (!native_root) continue;
            const Pattern *adapted_leaf = nullptr;
            if (leaf != leaves.end()) {
                const auto key = std::make_pair(call.target, root);
                auto adapted = leaf_patterns.find(key);
                if (adapted == leaf_patterns.end()) adapted = leaf_patterns.emplace(key,
                    typed_leaf_detail::adapt(*leaf->second, root, state)).first;
                if (!adapted->second) continue;
                adapted_leaf = &*adapted->second;
            }
            ++contexts;
            auto [found, inserted] = scopes.try_emplace(native_owner);
            auto &scope = found->second;
            if (inserted) {
                for (const auto &[a, b] : frame_detail::logical_regions(image, native_owner)) {
                    std::vector<Instruction> code;
                    if (!decode(image, a, b, code)) { scope.valid = false; break; }
                    scope.fragments.push_back(std::move(code));
                }
                scope.valid &= !scope.fragments.empty();
                scope.frame = frame_detail::target_rbp_frame(image, native_owner);
            }
            if (!scope.valid) continue; // A decoded prefix cannot prove candidate uniqueness.
            for (const auto &fragment : scope.fragments) for (size_t first = 0; first + source.size() <= fragment.size(); ++first) {
                if (fragment[first].decoded.opcode != 0xe8) continue;
                const auto &last = fragment[first + source.size() - 1];
                if (last.decoded.opcode != 0xe8) continue;
                const auto callee = uint32_t(int64_t(last.address) + last.decoded.len + static_cast<int32_t>(last.decoded.imm.imm32));
                const auto function = frame_detail::function_at(image, callee);
                if (!adapted_leaf && (function == image.functions.end() || function->begin != callee ||
                        (function->owner ? function->owner : function->begin) != callee)) continue;
                std::map<uint32_t, uint32_t> coordinates;
                bool valid = true;
                for (size_t at = 0; at < source.size(); ++at) {
                    const auto &actual = fragment[first + at];
                    if (at && fragment[first + at - 1].address + fragment[first + at - 1].decoded.len != actual.address) {
                        valid = false; break;
                    }
                    coordinates.emplace(source[at].address, actual.address);
                }
                if (!valid) continue;
                coordinates.emplace(source.back().address + source.back().decoded.len, last.address + last.decoded.len);
                std::map<std::pair<unsigned, int32_t>, int32_t> locals, inverse;
                for (size_t at = 0; valid && at + 1 < source.size(); ++at) {
                    const auto &left = source[at], &right = fragment[first + at];
                    if (branch_destination(left)) valid = same_branch(left, right, coordinates);
                    else valid = equivalent(image, state, context, left, right, false, 0,
                        scope.frame, coordinates, locals, inverse);
                }
                if (valid && (!adapted_leaf || typed_leaf_detail::matches(image, *adapted_leaf, callee, state)))
                    evidence[call.target].insert(callee);
            }
        }
    }
    std::set<uint32_t> added;
    std::vector<Range> additions;
    Bindings entry_bindings;
    for (const auto &range : state.ranges)
        entry_bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> entry_bytes;
    for (const auto &byte : state.bytes) entry_bytes.emplace(byte.address, byte);
    for (const auto &[reference, targets] : evidence) {
        if (targets.size() != 1 || resolve(state.function_owners, reference)) continue;
        const auto native = *targets.begin();
        const auto source = whole.find(reference), leaf = leaves.find(reference);
        const auto *pattern = source != whole.end() ? source->second : leaf != leaves.end() ? leaf->second : nullptr;
        const uint32_t width = leaf != leaves.end() ? static_cast<uint32_t>(leaf->second->raw.size()) : 1u;
        const auto function = frame_detail::function_at(image, native);
        const auto *actual = image.read(native, width);
        if (!pattern || pattern->raw.empty() || !actual) continue;
        if (leaf != leaves.end()) {
            if (!typed_leaf_detail::boundary(image, native, width)) continue;
        } else if (function == image.functions.end() || function->begin != native ||
                (function->owner ? function->owner : function->begin) != native) continue;
        // This is not promotion from a body hint or a matching prologue:
        // every candidate was reached by the final, real E8 of the complete
        // typed-receiver interval above, and competing callees remain fatal
        // to uniqueness. A one-byte address cannot satisfy a wider prefix.
        // INT3-bounded, unwind-free leaves additionally passed their complete
        // body, every relocation and all receiver-derived member accesses.
        // Only those leaves can publish interior bytes here.
        if (!entry_bindings.compatible(reference, width, native))
            throw std::runtime_error("Typed receiver call contradicts an established native entry");
        entry_bindings.add(reference, width, native);
        for (uint32_t offset = 0; offset < width; ++offset) if (actual[offset] != pattern->raw[offset]) {
            const Byte byte{reference + offset, pattern->raw[offset], actual[offset]};
            const auto [position, inserted] = entry_bytes.emplace(reference + offset, byte);
            if (!inserted && (position->second.reference != byte.reference ||
                    position->second.native != byte.native))
                throw std::runtime_error("Typed receiver call contradicts native entry bytes");
        }
        additions.push_back({reference, reference + 1, native});
        added.insert(reference);
        if (report) {
            std::ostringstream message;
            message << "Native typed-global caller scope: 0x" << std::hex << reference << " -> 0x" << *targets.begin();
            if (leaf != leaves.end()) message << "; complete receiver leaf " << std::dec << width << " bytes";
            report(message.str());
        }
    }
    state.function_owners.insert(state.function_owners.end(), additions.begin(), additions.end());
    std::sort(state.function_owners.begin(), state.function_owners.end(),
        [](const auto &left, const auto &right) { return left.begin < right.begin; });
    state.ranges = entry_bindings.export_ranges();
    state.bytes.clear();
    for (const auto &[reference, byte] : entry_bytes) state.bytes.push_back(byte);
    if (report) report("Native discovery: " + std::to_string(added.size()) +
        " typed-global receiver scopes from " + std::to_string(contexts) + " independently anchored caller intervals");
    if (report && !leaf_patterns.empty()) {
        const auto proved = std::count_if(leaf_patterns.begin(), leaf_patterns.end(),
            [](const auto &entry) { return entry.second.has_value(); });
        report("Native discovery: " + std::to_string(proved) + " complete typed leaf field contracts from " +
            std::to_string(leaf_patterns.size()) + " independently supplied global receivers");
    }
    return added;
}
} // namespace dfcn::pe_runtime
