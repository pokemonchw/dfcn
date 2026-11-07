#pragma once

// A reviewed source receiver contract consumed by the normal seed producer.
// It grants no address or target field access on its own.
#define DFCN_NATIVE_RECEIVER(reference, type)
// A source object-method contract whose target RCX must additionally be
// witnessed through the actual named compound/global CALL chain.
#define DFCN_NATIVE_COMPOUND_RECEIVER(reference, type)
#define DFCN_NATIVE_CHOOSER_SUFFIX(name, owner, primary, grow, footer, anchor, end)
#define DFCN_NATIVE_CHOOSER_ROW(name, owner, primary, begin, construction_end, literal_kind)
#define DFCN_NATIVE_CHOOSER_LITERAL_VARIANT(name, canonical, alternate)
#define DFCN_NATIVE_OPTIONAL_PANEL(name, owner, begin, end, guard, guard_end, tail, resume_anchor, resume_end, successor, successor_end, selector)

// Version selection and discovery are separate from the feature profiles.
// A validated catalog may be partial. Every access still needs its own
// published binding; completeness is a diagnostic, never an identity fallback.
#ifdef _WIN32
#include "native_pe_resolver.h"
namespace dfcn {
inline unsigned native_pe_edition() {
    const auto &state = pe_runtime::state();
    return pe_runtime::usable(state) ? state.edition : 0u;
}
inline bool native_pe_usable() { return pe_runtime::usable(pe_runtime::state()); }
inline bool native_pe_supported() { return native_pe_usable(); }
inline bool native_pe_classic() { return native_pe_edition() == 2; }
inline bool native_pe_relocated() { return native_pe_supported() && native_pe_edition() != 1; }
inline bool native_pe_output_region(uint32_t owner, uint32_t begin, uint32_t end, uint32_t callee) {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state)) return false;
    const auto &specs = pe_runtime::output_region_detail::specs;
    const auto spec = std::find_if(std::begin(specs), std::end(specs), [&](const auto &value) {
        return value.owner == owner && value.begin == begin && value.end == end && value.callee == callee;
    });
    if (spec == std::end(specs)) return false;
    return std::any_of(state.output_regions.begin(), state.output_regions.end(), [&](const auto &value) {
        return value.owner == owner && value.begin == begin && value.end == end && value.callee == callee &&
            pe_runtime::output_region_detail::binding(state, *spec, value);
    });
}
inline const address_runtime::RecipeBinding *native_pe_workshop_recipe(
        std::string_view name, std::string_view, std::string_view,
        uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state)) return nullptr;
    const auto identity = native_history_abi::semantic_id(name);
    const auto found = std::lower_bound(state.workshop_recipes.begin(), state.workshop_recipes.end(), identity,
        [](const auto &entry, uint32_t key) { return entry.contract < key; });
    return found != state.workshop_recipes.end() && found->contract == identity ? &*found : nullptr;
}
inline const address_runtime::CallableSearchBinding *native_pe_callable_search(
        std::string_view name, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state)) return nullptr;
    const auto identity = native_history_abi::semantic_id(name);
    const auto found = std::lower_bound(state.callable_searches.begin(), state.callable_searches.end(), identity,
        [](const auto &entry, uint32_t key) { return entry.contract < key; });
    return found != state.callable_searches.end() && found->contract == identity ? &*found : nullptr;
}
// These source anchors describe the native text feature to the normal seed
// producer. Positive absence requires every native return-message path to
// omit the suffix. Missing evidence only leaves the affected hook unavailable;
// it never becomes a declaration that the feature is absent.
inline bool native_pe_return_suffix_feature(std::string_view name,
        std::initializer_list<uint32_t>, std::initializer_list<uint32_t>,
        std::initializer_list<uintptr_t> callees) {
    const auto &state = pe_runtime::state();
    const auto feature = native_history_abi::semantic_id(name);
    return pe_runtime::usable(state) && std::all_of(callees.begin(), callees.end(), [](uintptr_t value) { return value != 0; }) &&
        !std::binary_search(state.absent_features.begin(), state.absent_features.end(), feature);
}
inline bool native_pe_feature_span_absent(std::string_view name, uint32_t reference, uint32_t width) {
    const auto &state = pe_runtime::state();
    return pe_runtime::usable(state) && std::binary_search(state.absent_features.begin(), state.absent_features.end(),
        native_history_abi::semantic_id(name)) &&
        std::any_of(state.absent_spans.begin(), state.absent_spans.end(), [&](const auto &span) {
            return span.begin <= reference && uint64_t(reference) + width <= span.end;
        });
}
inline bool native_pe_chooser_span_absent(uint32_t reference, uint32_t width) {
    for (const auto name : {"location_chooser.detail_rows", "location_chooser.guild_status", "location_chooser.faith_status"})
        if (native_pe_feature_span_absent(name, reference, width)) return true;
    return false;
}
inline uintptr_t native_pe_rva(uintptr_t address) {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state) || !address || address > UINT32_MAX) return 0;
    const auto native = pe_runtime::resolve(state.ranges, static_cast<uint32_t>(address));
    return native < state.size ? native : 0;
}
inline uintptr_t native_pe_address(uintptr_t base, uintptr_t reference) {
    const uintptr_t offset = native_pe_rva(reference);
    return base && offset && offset <= UINTPTR_MAX - base ? base + offset : 0;
}
// A type tag is compared with an object's vptr; no virtual slot is read or
// called through this result. The normal seed records this distinct contract.
inline uintptr_t native_pe_type_identity(uintptr_t base, uintptr_t reference) {
    return native_pe_address(base, reference);
}
// Each reference names an evidenced stack operand, not a reusable frame
// slot. Both offsets are normalized to the same native function entry RSP.
inline uintptr_t native_pe_frame_relative(uintptr_t object, uint32_t anchor,
        uint32_t member, uint32_t width, std::string_view = {}) {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state) || !object || !anchor || !member || !width) return 0;
    const pe_runtime::FrameOperandBinding *source = nullptr, *field = nullptr;
    for (const auto &binding : state.frame_operands) {
        if (binding.reference == anchor) {
            if (source) return 0;
            source = &binding;
        }
        if (binding.reference == member) {
            if (field) return 0;
            field = &binding;
        }
    }
    if (!source || !field || !source->owner || source->owner != field->owner ||
            source->access_width != 0 || field->access_width < width) return 0;
    const int64_t distance = static_cast<int64_t>(field->stack_offset) - source->stack_offset;
    uintptr_t result = object;
    if (distance < 0) {
        if (static_cast<uint64_t>(-distance) >= object) return 0;
        result -= static_cast<uintptr_t>(-distance);
    } else {
        if (static_cast<uint64_t>(distance) > UINTPTR_MAX - object) return 0;
        result += static_cast<uintptr_t>(distance);
    }
    return width <= UINTPTR_MAX - result ? result : 0;
}
inline bool native_pe_bytes(uintptr_t reference, std::vector<unsigned char> &expected) {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state) || reference > UINT32_MAX || expected.size() > UINT32_MAX - reference) return false;
    if (expected.empty()) return native_pe_rva(reference) != 0;
    const uintptr_t first = native_pe_rva(reference);
    auto span = std::upper_bound(state.ranges.begin(), state.ranges.end(), reference,
        [](uintptr_t value, const auto &range) { return value < range.begin; });
    if (!first || span == state.ranges.begin() || reference + expected.size() > std::prev(span)->end) return false;
    auto found = std::lower_bound(state.bytes.begin(), state.bytes.end(), reference,
        [](const auto &byte, uintptr_t value) { return byte.address < value; });
    const auto first_change = found;
    for (; found != state.bytes.end() && found->address < reference + expected.size(); ++found)
        if (expected[found->address - reference] != found->reference) return false;
    for (auto change = first_change; change != found; ++change)
        expected[change->address - reference] = change->native;
    return true;
}
inline bool native_pe_match(uintptr_t base, uintptr_t reference, const unsigned char *bytes, size_t count) {
    std::vector<unsigned char> expected(bytes, bytes + count);
    const uintptr_t address = native_pe_address(base, reference);
    return address && native_pe_bytes(reference, expected) &&
        std::memcmp(reinterpret_cast<const void *>(address), expected.data(), expected.size()) == 0;
}
} // namespace dfcn
#endif
