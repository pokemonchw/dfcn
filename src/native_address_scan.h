#pragma once

// Shared address-only discovery. Host readers supply image sections and
// symbolic anchors; text capture and translation never select a scanner.
#include <algorithm>
#include <cstdint>
#include <cstring>
#include <functional>
#include <map>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>
#include "native_history_abi.h"

namespace dfcn::address_runtime {
using Progress = std::function<void(const std::string &)>;
using RejectedCandidates = std::set<std::pair<size_t, uint32_t>>;
struct CandidateConflict : std::runtime_error {
    RejectedCandidates candidates;
    CandidateConflict(std::string message, RejectedCandidates values)
        : std::runtime_error(std::move(message)), candidates(std::move(values)) {}
};
struct Range { uint32_t begin = 0, end = 0, native = 0; };
struct Byte { uint32_t address = 0; unsigned char reference = 0, native = 0; };
// kind low bits describe the address operand; high 16 bits carry the decoded
// memory-access width. An address-only LEA has access width zero.
struct Fixup { uint32_t offset, width, next, target, kind; };
struct Pattern {
    uint32_t reference = 0, flags = 0;
    std::vector<unsigned char> raw, mask;
    std::vector<Fixup> fixups;
    uint32_t owner = 0;
};
inline uint32_t pattern_span(const Pattern &pattern) {
    // Immutable object contents can identify a reviewed root without proving
    // that their canonical interior layout or bytes are identical.
    return (pattern.flags & 32) ? 1 : static_cast<uint32_t>(pattern.raw.size());
}
struct Vtable {
    uint32_t reference;
    std::string name;
    std::vector<uint32_t> slots;
    uint32_t flags = 0; // 1: generated layout type identity, no direct slot/hook consumer.
};
struct Import { uint32_t reference; std::string library, symbol; uint32_t extent = 8; };
struct FieldSpec { uint32_t object = 0, offset = 0, width = 0, flags = 0; };
struct FieldBinding {
    uint32_t object = 0, offset = 0, native_offset = 0, width = 0, sources = 0, flags = 0;
};
struct InitialEvidence {
    // Caller must pin this semantic evidence to the complete target image
    // identity. Function entries grant scope only, never a body-wide delta.
    std::vector<Range> roots, function_owners, virtual_tables;
    std::vector<FieldBinding> fields;
    std::vector<uint64_t> absent_fields;
};
struct DisplaySite {
    uint32_t address = 0, field = 0, target = 0, displacement = 0, flags = 0;
    std::vector<unsigned char> instruction;
};
struct FrameOperandBinding {
    uint32_t reference = 0, owner = 0, native_instruction = 0;
    int32_t stack_offset = 0; // Relative to the proved target entry RSP.
    uint32_t access_width = 0; // Zero denotes an address-only LEA anchor.
};
struct InlineResizeBinding {
    uint32_t reference = 0, owner = 0, native_instruction = 0, length = 0;
    uint32_t frame_register = 0, width_register = 0;
    int32_t object_displacement = 0;
    uint32_t flags = 0;
};
struct CallableSearchBinding {
    uint32_t contract = 0, predicate = 0, invoker_call = 0, fold_call = 0;
    uint32_t name_find = 0, job_find = 0, query_fold = 0;
    uint32_t fold_target = 0, find_target = 0, argument_shape = 0, capture_offset = 0;
};
struct RecipeBinding {
    uint32_t contract = 0, owner = 0, mode = 0, width = 0, paragraph_target = 0;
    std::vector<uint32_t> paragraph_calls;
};
struct OutputRegionBinding {
    uint32_t owner = 0, begin = 0, end = 0, callee = 0;
    uint32_t native_owner = 0, native_begin = 0, native_end = 0, native_callee = 0;
};
struct EntryEvidenceSpan {
    uint32_t address = 0;
    std::vector<unsigned char> bytes;
};
struct EntryPrefixBinding {
    uint32_t reference = 0, native = 0, end = 0, unwind = 0;
    uint32_t table_reference = 0, table = 0, type = 0, method = 0;
    uint32_t slot = 0, parameter_shape = 0, argument_count = 0;
    uint64_t preferred_base = 0;
    std::vector<unsigned char> prefix;
    // Immutable reads used by complete CFG/EH proof, including the indexes
    // which supplied unwind ownership and named import identities.
    std::vector<EntryEvidenceSpan> evidence;
    std::vector<std::pair<uint32_t, uint64_t>> relocations;
    // Named import tail transfers are terminals, but their loader-written IAT
    // targets must also be ruled out as live entries into the moved prefix.
    std::vector<uint32_t> imported_tail_slots;
};
inline std::string layout_conflict_message(uint32_t reference, uint32_t target,
        uint32_t object, uint32_t base, size_t sources) {
    std::ostringstream message;
    message << "reference=0x" << std::hex << reference
        << " target=0x" << target << " object=0x" << object << " base=0x" << base
        << " expected=0x" << (uint64_t(base) + reference - object)
        << std::dec << " independent_sources=" << sources;
    return message.str();
}
inline uint32_t resolve(const std::vector<Range> &ranges, uint32_t reference) {
    auto found = std::upper_bound(ranges.begin(), ranges.end(), reference,
        [](uint32_t value, const Range &range) { return value < range.begin; });
    if (found == ranges.begin()) return 0;
    --found;
    return reference < found->end ? found->native + reference - found->begin : 0;
}

struct State {
    unsigned edition = 0;
    bool complete = false;
    // The image identity and every published binding have passed discovery's
    // structural contracts. Missing resources keep complete false, without
    // invalidating the independently proved resources in this state.
    bool validated = false;
    uint32_t size = 0;
    std::vector<Range> ranges;
    std::vector<Byte> bytes;
    std::vector<uint32_t> missing;
    std::vector<FieldBinding> fields;
    std::vector<Range> graphics_fields;
    // These entries identify unwind-function scope only. They do not authorize
    // rebasing unmatched instructions or invoking an unproved virtual ABI.
    std::vector<Range> function_owners;
    std::vector<uint32_t> missing_fields;
    std::vector<native_history_abi::FieldBinding> semantic_fields;
    std::vector<native_history_abi::MethodBinding> semantic_methods;
    std::vector<native_history_abi::TypeBinding> semantic_types;
    std::vector<native_history_abi::EnumBinding> semantic_enums;
    std::vector<uint64_t> missing_semantic_fields, missing_semantic_methods;
    std::vector<uint64_t> missing_graphics_tokens;
    // Reference vtable coordinates whose type is provably absent from the
    // complete target RTTI image. No address is synthesized for these entries.
    std::vector<uint32_t> absent_types;
    std::vector<uint64_t> absent_fields;
    std::vector<DisplaySite> display_sites;
    std::vector<uint32_t> missing_display_scopes;
    std::vector<FrameOperandBinding> frame_operands;
    std::vector<uint32_t> missing_frame_operands;
    std::vector<uint32_t> missing_method_calls;
    std::vector<uint32_t> proven_method_calls;
    std::vector<uint32_t> absent_features;
    std::vector<Range> absent_spans;
    std::vector<InlineResizeBinding> inline_resizes;
    std::vector<uint32_t> missing_inline_resizes;
    std::vector<CallableSearchBinding> callable_searches;
    std::vector<uint32_t> missing_callable_searches;
    std::vector<RecipeBinding> workshop_recipes;
    std::vector<uint32_t> missing_workshop_recipes;
    // A private output producer may start only after complete native CFG
    // proof establishes its unique normal restoring boundary.
    std::vector<OutputRegionBinding> output_regions;
    std::vector<uint32_t> missing_output_regions;
    // Optional entry patch certificates. These never grant a method ABI or
    // mark ordinary address resources complete. Live verification is local
    // to one installation attempt and is deliberately not serialized here.
    std::vector<EntryPrefixBinding> entry_prefixes;
    // Per-discovery reporting only; these do not participate in cache or
    // address completeness and never carry evidence between image scans.
    std::set<uint32_t> reported_caller_decode_failures;
    std::string message;
};

template <typename Catalog>
inline bool complete_spans(State &state, const Catalog &catalog) {
    state.missing.clear();
    uint32_t previous_absent_end = 0;
    for (const auto &span : state.absent_spans) {
        if (!span.begin || span.end <= span.begin || span.native || span.begin < previous_absent_end)
            throw std::runtime_error("Invalid proved-absent feature span");
        previous_absent_end = span.end;
        auto bound = std::lower_bound(state.ranges.begin(), state.ranges.end(), span.begin,
            [](const Range &range, uint32_t value) { return range.end <= value; });
        if (bound != state.ranges.end() && bound->begin < span.end)
            throw std::runtime_error("Absent native feature acquired an address binding");
    }
    for (const auto &[reference, length] : catalog.required) {
        auto absent = std::upper_bound(state.absent_spans.begin(), state.absent_spans.end(), reference,
            [](uint32_t value, const Range &span) { return value < span.begin; });
        if (absent != state.absent_spans.begin() &&
                uint64_t(reference) + length <= std::prev(absent)->end) continue;
        if (length <= 8 && std::binary_search(state.absent_types.begin(), state.absent_types.end(), reference)) {
            const auto type = std::find_if(catalog.vtables.begin(), catalog.vtables.end(),
                [&](const auto &table) { return table.reference == reference; });
            if (type == catalog.vtables.end() || type->flags != 1 || type->slots.size() != 1)
                throw std::runtime_error("Required native type cannot be marked absent");
            if (resolve(state.ranges, reference)) throw std::runtime_error("Absent native type acquired an address binding");
            continue;
        }
        const auto begin = resolve(state.ranges, reference);
        auto found = std::upper_bound(state.ranges.begin(), state.ranges.end(), reference,
            [](uint32_t value, const Range &range) { return value < range.begin; });
        if (found == state.ranges.begin()) { state.missing.push_back(reference); continue; }
        --found;
        if (!begin || uint64_t(reference) + length > found->end ||
            uint64_t(begin) + length > state.size) state.missing.push_back(reference);
    }
    state.complete = state.missing.empty() && state.missing_fields.empty() &&
        state.missing_semantic_fields.empty() && state.missing_semantic_methods.empty() && state.missing_graphics_tokens.empty() &&
        state.missing_display_scopes.empty() && state.missing_frame_operands.empty() && state.missing_method_calls.empty() &&
        state.missing_inline_resizes.empty() && state.missing_callable_searches.empty() &&
        state.missing_workshop_recipes.empty();
    return state.complete;
}

inline bool complete_fields(State &state, const std::vector<FieldSpec> &specs) {
    state.missing_fields.clear();
    state.graphics_fields.clear();
    std::map<std::pair<uint32_t, uint32_t>, const FieldBinding *> indexed;
    for (const auto &field : state.fields)
        if (!indexed.emplace(std::pair{field.object, field.offset}, &field).second)
            throw std::runtime_error("Duplicate native field binding");
    for (const auto &spec : specs) {
        const auto identity = (uint64_t(spec.object) << 32) | spec.offset;
        if (std::binary_search(state.absent_fields.begin(), state.absent_fields.end(), identity)) {
            if (indexed.count({spec.object, spec.offset})) throw std::runtime_error("Absent native field acquired a binding");
            continue;
        }
        const auto base = resolve(state.ranges, spec.object);
        const auto found = indexed.find({spec.object, spec.offset});
        const auto *field = found == indexed.end() ? nullptr : found->second;
        if (!field || field->width != spec.width || field->flags != spec.flags || field->sources < 2 ||
                ((spec.flags & 2) && field->native_offset != spec.offset) || !base ||
                uint64_t(base) + field->native_offset + field->width > state.size) {
            if (spec.flags & 1) state.missing_fields.push_back(spec.object + spec.offset);
        } else if (spec.flags & 4) {
            state.graphics_fields.push_back({spec.object + spec.offset, spec.object + spec.offset + spec.width,
                base + field->native_offset});
        }
    }
    std::sort(state.graphics_fields.begin(), state.graphics_fields.end(),
        [](const auto &left, const auto &right) { return left.begin < right.begin; });
    state.complete = state.missing.empty() && state.missing_fields.empty() &&
        state.missing_semantic_fields.empty() && state.missing_semantic_methods.empty() && state.missing_graphics_tokens.empty() &&
        state.missing_display_scopes.empty() && state.missing_frame_operands.empty() && state.missing_method_calls.empty() &&
        state.missing_inline_resizes.empty() && state.missing_callable_searches.empty() &&
        state.missing_workshop_recipes.empty();
    return state.complete;
}

// Conflicting graph evidence invalidates discovery. No nearest-address or
// global relocation delta is ever used to fill an unresolved resource.
class Bindings {
    std::map<uint32_t, Range> ranges_;
public:
    bool compatible(uint32_t begin, uint32_t length, uint32_t native) const {
        if (!begin || !native || !length || uint64_t(begin) + length > UINT32_MAX ||
                uint64_t(native) + length > UINT32_MAX) return false;
        const uint32_t end = begin + length;
        auto at = ranges_.lower_bound(begin);
        if (at != ranges_.begin() && std::prev(at)->second.end > begin) --at;
        for (; at != ranges_.end() && at->second.begin < end; ++at)
            if (at->second.end > begin && int64_t(at->second.native) - at->second.begin != int64_t(native) - begin)
                return false;
        return true;
    }
    uint32_t lookup(uint32_t reference) const {
        auto found = ranges_.upper_bound(reference);
        if (found == ranges_.begin()) return 0;
        --found;
        const auto &range = found->second;
        return reference < range.end ? range.native + reference - range.begin : 0;
    }
    bool add(uint32_t begin, uint32_t length, uint32_t native) {
        if (!begin || !native || !length || uint64_t(begin) + length > UINT32_MAX ||
            uint64_t(native) + length > UINT32_MAX) throw std::runtime_error("Invalid discovered span");
        uint32_t end = begin + length;
        const int64_t delta = int64_t(native) - begin;
        auto at = ranges_.lower_bound(begin);
        if (at != ranges_.begin()) {
            auto before = std::prev(at);
            if (before->second.end >= begin) at = before;
        }
        bool changed = true;
        while (at != ranges_.end() && at->second.begin <= end) {
            const auto &existing = at->second;
            const auto existing_delta = int64_t(existing.native) - existing.begin;
            if (existing.end < begin) { ++at; continue; }
            if (existing_delta != delta) {
                if (existing.end == begin || existing.begin == end) { ++at; continue; }
                throw std::runtime_error("Conflicting native address evidence at " + std::to_string(begin));
            }
            if (existing.begin <= begin && existing.end >= end) changed = false;
            begin = std::min(begin, existing.begin); end = std::max(end, existing.end);
            at = ranges_.erase(at);
        }
        ranges_.emplace(begin, Range{begin, end, static_cast<uint32_t>(int64_t(begin) + delta)});
        return changed;
    }
    std::vector<Range> export_ranges() const {
        std::vector<Range> result;
        for (const auto &[key, range] : ranges_) { (void)key; result.push_back(range); }
        return result;
    }
};

template <typename Image>
inline bool pattern_matches(const Image &image, const Pattern &pattern, uint32_t address) {
    // Short CFG components are evidence only for the closed variable-length
    // caller matcher. Never turn an isolated component into an address range.
    // Source-only recovered bodies retain unresolved callee references.
    // They supply canonical CFG instructions, never an initial whole-body
    // identity for the installed image.
    // Consumed-call prefixes are not complete blocks. Only the scoped CALL
    // matcher may use them, and it publishes no interior address range.
    if (pattern.flags & (512u | 1024u | 2048u)) return false;
    const auto *section = image.section(address, pattern.raw.size());
    const auto *bytes = image.read(address, pattern.raw.size());
    if (!section || !bytes || ((pattern.flags & 1) && !(section->flags & Image::execute_flag)) ||
        ((pattern.flags & 4) && (section->flags & (Image::execute_flag | Image::write_flag)))) return false;
    if ((pattern.flags & 128) && address != section->begin) {
        const auto *before = image.read(address - 1, 1);
        if (!before || *before) return false;
    }
    for (size_t offset = 0; offset < pattern.raw.size(); ++offset)
        if (!pattern.mask[offset] && bytes[offset] != pattern.raw[offset]) return false;
    return true;
}

template <typename Image>
inline uint32_t operand_target(const Image &image, const Pattern &pattern,
                               uint32_t address, const Fixup &fixup) {
    const auto *bytes = image.read(address + fixup.offset, fixup.width);
    if (!bytes) return UINT32_MAX;
    int64_t value = 0;
    const auto kind = fixup.kind & 0xff;
    if (kind == 2) {
        uint64_t absolute = 0; std::memcpy(&absolute, bytes, 8);
        if (absolute < image.preferred_base || absolute - image.preferred_base >= image.size) return UINT32_MAX;
        value = static_cast<int64_t>(absolute - image.preferred_base);
    } else if (kind == 1) {
        uint32_t relative = 0; std::memcpy(&relative, bytes, 4); value = relative;
    } else {
        if (fixup.width == 1) value = static_cast<int8_t>(*bytes);
        else if (fixup.width == 4) { int32_t relative = 0; std::memcpy(&relative, bytes, 4); value = relative; }
        else return UINT32_MAX;
        value += int64_t(address) + fixup.next;
    }
    (void)pattern;
    // MSVC switch dispatch can explicitly load __ImageBase (reference RVA 0).
    // Zero is a legitimate operand target here, never a discovered resource.
    return value >= 0 && value < image.size &&
        (value == 0 || image.section(static_cast<uint32_t>(value))) ? static_cast<uint32_t>(value) : UINT32_MAX;
}

template <typename Image, typename Catalog>
inline State scan_once(const Image &image, const Catalog &catalog,
        const std::vector<std::pair<uint32_t, uint32_t>> &global_layouts = {}, bool infer_global_roots = false,
        const std::vector<FieldSpec> &field_specs = {}, bool semantic_vtables = false,
        const InitialEvidence &initial = {}, const Progress &report = {},
        const RejectedCandidates &rejected = {}) {
    if (report) report("Native discovery: applying roots, field declarations and RTTI anchors");
    State state; state.edition = 3; state.size = image.size;
    Bindings bindings;
    std::unordered_map<uint32_t, std::set<uint32_t>> hints;
    std::unordered_map<uint32_t, std::set<uint32_t>> function_hints;
    std::unordered_map<uint32_t, std::set<uint32_t>> method_candidates;
    // An admitted branch constrains any later block containing its reference
    // destination, even when that destination is inside rather than at the
    // start of the block. These edges belong to this solve only.
    std::map<uint32_t, std::set<uint32_t>> incoming_code;
    std::vector<const FieldSpec *> indexed_fields;
    for (const auto &field : field_specs) indexed_fields.push_back(&field);
    std::sort(indexed_fields.begin(), indexed_fields.end(), [](const auto *left, const auto *right) {
        return uint64_t(left->object) + left->offset < uint64_t(right->object) + right->offset;
    });
    const auto field_spec = [&](uint32_t reference) -> const FieldSpec * {
        auto found = std::upper_bound(indexed_fields.begin(), indexed_fields.end(), reference,
            [](uint32_t value, const auto *field) { return value < uint64_t(field->object) + field->offset; });
        if (found == indexed_fields.begin()) return nullptr;
        const auto *field = *std::prev(found);
        return uint64_t(reference) < uint64_t(field->object) + field->offset + field->width ? field : nullptr;
    };
    const auto function_at = [&](uint32_t address, size_t length) {
        auto found = std::upper_bound(image.functions.begin(), image.functions.end(), address,
            [](uint32_t value, const auto &function) { return value < function.begin; });
        if (found == image.functions.begin()) return image.functions.end();
        --found;
        return uint64_t(address) + length <= found->end ? found : image.functions.end();
    };
    const auto logical_owner = [](const auto &function) -> uint32_t {
        if constexpr (requires { function.owner; }) return function.owner ? function.owner : function.begin;
        else return function.begin;
    };
    std::unordered_map<uint32_t, std::vector<size_t>> logical_fragments;
    for (size_t index = 0; index < image.functions.size(); ++index)
        logical_fragments[logical_owner(image.functions[index])].push_back(index);
    for (const auto &root : initial.roots) {
        if (!root.begin || root.end != uint64_t(root.begin) + 1 || !image.section(root.native))
            throw std::runtime_error("Invalid identity-pinned semantic root");
        bindings.add(root.begin, 1, root.native);
    }
    for (const auto &owner : initial.function_owners) {
        const auto *section = image.section(owner.native);
        const auto function = function_at(owner.native, 1);
        if (!owner.begin || owner.end != uint64_t(owner.begin) + 1 || !section ||
                !(section->flags & Image::execute_flag) ||
                (function != image.functions.end() && function->begin != owner.native))
            throw std::runtime_error("Invalid identity-pinned semantic function scope");
        hints[owner.begin].insert(owner.native);
        function_hints[owner.begin].insert(function == image.functions.end() ? owner.native : logical_owner(*function));
    }
    // A table-wide range is admitted only from an image-pinned declaration
    // whose producer compared every semantic slot and its calling shape.
    // Function-owner evidence alone never grants this contiguous mapping.
    for (const auto &table : initial.virtual_tables) {
        const auto length = table.end > table.begin ? uint64_t(table.end) - table.begin : 0;
        const auto *section = image.section(table.native, static_cast<size_t>(length));
        if (!table.begin || table.end <= table.begin || (length & 7) || length > 32768 ||
                !section || (section->flags & (Image::execute_flag | Image::write_flag)))
            throw std::runtime_error("Invalid identity-pinned semantic virtual table");
        for (uint32_t offset = 0; offset < length; offset += 8) {
            const auto *bytes = image.read(table.native + offset, 8);
            uint64_t pointer = 0;
            if (bytes) std::memcpy(&pointer, bytes, 8);
            if (pointer < image.preferred_base || pointer - image.preferred_base >= image.size)
                throw std::runtime_error("Invalid identity-pinned semantic virtual method");
            const auto *code = image.section(static_cast<uint32_t>(pointer - image.preferred_base));
            if (!code || !(code->flags & Image::execute_flag))
                throw std::runtime_error("Non-executable identity-pinned semantic virtual method");
        }
        bindings.add(table.begin, static_cast<uint32_t>(length), table.native);
    }
    for (const auto &field : initial.fields) {
        const auto *spec = field_spec(field.object + field.offset);
        const auto root = bindings.lookup(field.object);
        const uint64_t target = uint64_t(root) + field.native_offset;
        if (!spec || spec->object != field.object || spec->offset != field.offset || spec->width != field.width ||
                spec->flags != field.flags || field.sources < 2 || !root ||
                target + field.width > image.size || !image.section(static_cast<uint32_t>(target), field.width) ||
                ((field.flags & 2) && field.native_offset != field.offset))
            throw std::runtime_error("Invalid identity-pinned semantic field span");
        bindings.add(field.object + field.offset, field.width, static_cast<uint32_t>(target));
        state.fields.push_back(field);
    }
    state.absent_fields = initial.absent_fields;
    std::sort(state.absent_fields.begin(), state.absent_fields.end());
    state.absent_fields.erase(std::unique(state.absent_fields.begin(), state.absent_fields.end()), state.absent_fields.end());
    for (auto identity : state.absent_fields) {
        const auto object = static_cast<uint32_t>(identity >> 32), offset = static_cast<uint32_t>(identity);
        const auto *spec = field_spec(object + offset);
        if (!object || !spec || spec->object != object || spec->offset != offset || bindings.lookup(object + offset))
            throw std::runtime_error("Invalid identity-pinned absent field");
    }
    std::set<uint32_t> code_targets;
    for (const auto &pattern : catalog.patterns)
        if (pattern.flags & 1) code_targets.insert(pattern.reference);
    for (const auto &pattern : catalog.patterns)
        for (const auto &fixup : pattern.fixups) if (fixup.kind & 0x100) code_targets.insert(fixup.target);

    std::map<uint32_t, uint32_t> whole_ends;
    for (const auto &pattern : catalog.patterns) if (pattern.flags & 2)
        whole_ends[pattern.reference] = (std::max)(whole_ends[pattern.reference],
            pattern.reference + static_cast<uint32_t>(pattern.raw.size()));
    std::vector<std::pair<uint32_t, uint32_t>> whole_intervals(whole_ends.begin(), whole_ends.end());
    std::vector<uint32_t> owners(catalog.patterns.size());
    for (size_t index = 0; index < catalog.patterns.size(); ++index) {
        const auto &pattern = catalog.patterns[index];
        owners[index] = pattern.owner ? pattern.owner : pattern.reference;
        if (!pattern.owner) {
            auto whole = std::upper_bound(whole_intervals.begin(), whole_intervals.end(), pattern.reference,
                [](uint32_t address, const auto &interval) { return address < interval.first; });
            if (whole != whole_intervals.begin()) {
                --whole;
                if (uint64_t(pattern.reference) + pattern.raw.size() <= whole->second)
                    owners[index] = whole->first;
            }
        }
    }

    struct TableCandidate { const Vtable *source; uint32_t address; };
    std::vector<TableCandidate> tables;
    for (const auto &table : catalog.vtables) {
        const auto candidates = image.find_vtables(table.name);
        if (semantic_vtables && table.flags == 1 && table.slots.size() == 1 && candidates.empty()) {
            if constexpr (requires { image.rtti_catalog_complete(); image.file; }) {
                // An unindexed secondary table or a residual type descriptor
                // is not proof of absence. Search the whole immutable file for
                // the complete decorated name, including its terminator.
                std::string needle = table.name; needle.push_back('\0');
                if (image.rtti_catalog_complete() &&
                        std::search(image.file.begin(), image.file.end(), needle.begin(), needle.end()) == image.file.end())
                    state.absent_types.push_back(table.reference);
            }
        }
        if (candidates.size() != 1 || !image.read(candidates[0], semantic_vtables ? 8 : table.slots.size() * 8)) continue;
        // RTTI proves the address of the type's table independently of the
        // identity and ordering of its virtual functions. A one-byte root
        // cannot satisfy a caller's contiguous multi-slot resource contract.
        if (semantic_vtables) bindings.add(table.reference, (table.flags & 1) ? 8 : 1, candidates[0]);
        if (semantic_vtables && (table.flags & 2)) continue; // Required identity, no method-slot contract.
        tables.push_back({&table, candidates[0]});
        std::set<uint32_t> actual_methods;
        if (semantic_vtables) for (uint32_t slot = 0; slot < 4096; ++slot) {
            const auto *bytes = image.read(candidates[0] + slot * 8, 8);
            if (!bytes) break;
            uint64_t target = 0; std::memcpy(&target, bytes, 8);
            if (target < image.preferred_base || target - image.preferred_base >= image.size) break;
            const auto address = static_cast<uint32_t>(target - image.preferred_base);
            const auto *section = image.section(address);
            if (!section || !(section->flags & Image::execute_flag)) break;
            actual_methods.insert(address);
        }
        for (size_t slot = 0; slot < table.slots.size(); ++slot) {
            if (!table.slots[slot]) continue; // ELF external/pure-virtual slot.
            code_targets.insert(table.slots[slot]);
            if (semantic_vtables) {
                method_candidates[table.slots[slot]].insert(actual_methods.begin(), actual_methods.end());
                continue;
            }
            uint64_t target = 0;
            std::memcpy(&target, image.read(candidates[0] + static_cast<uint32_t>(slot * 8), 8), 8);
            if (target >= image.preferred_base && target - image.preferred_base < image.size) {
                hints[table.slots[slot]].insert(static_cast<uint32_t>(target - image.preferred_base));
                const auto address = static_cast<uint32_t>(target - image.preferred_base);
                const auto function = function_at(address, 1);
                function_hints[table.slots[slot]].insert(function == image.functions.end() ? address : logical_owner(*function));
            }
        }
    }
    std::sort(state.absent_types.begin(), state.absent_types.end());
    state.absent_types.erase(std::unique(state.absent_types.begin(), state.absent_types.end()), state.absent_types.end());
    for (const auto &entry : catalog.imports) {
        const auto address = image.import_slot(entry.library, entry.symbol);
        if (address) bindings.add(entry.reference, entry.extent, address);
    }

    // A shared exact eight-byte anchor index scans each file-backed section
    // once. Whole unwind functions instead use .pdata length buckets.
    if (report) report("Native discovery: indexing exact anchors for " + std::to_string(catalog.patterns.size()) + " patterns");
    struct Anchor { uint32_t offset = 0; uint64_t key = 0; bool valid = false; };
    std::vector<Anchor> anchors(catalog.patterns.size());
    std::unordered_map<uint64_t, std::vector<uint32_t>> hits;
    std::unordered_map<uint32_t, std::vector<uint32_t>> literal_hits;
    std::unordered_map<uint32_t, std::vector<uint32_t>> functions;
    for (const auto &function : image.functions)
        functions[function.end - function.begin].push_back(function.begin);
    for (size_t index = 0; index < catalog.patterns.size(); ++index) {
        const auto &pattern = catalog.patterns[index];
        if (pattern.flags & (2u | 512u | 2048u)) continue;
        if ((pattern.flags & 32) && pattern.raw.size() >= 5 && pattern.raw.size() < 8) {
            uint32_t key; std::memcpy(&key, pattern.raw.data(), 4);
            literal_hits.try_emplace(key);
            continue;
        }
        size_t run = 0, best = 0, begin = 0;
        for (size_t offset = 0; offset < pattern.raw.size(); ++offset) {
            run = pattern.mask[offset] ? 0 : run + 1;
            if (run > best) { best = run; begin = offset + 1 - run; }
        }
        if (best < 8) continue;
        auto &anchor = anchors[index]; anchor.offset = static_cast<uint32_t>(begin); anchor.valid = true;
        std::memcpy(&anchor.key, pattern.raw.data() + begin, 8);
        hits.try_emplace(anchor.key);
    }
    if (!literal_hits.empty()) for (const auto &section : image.sections) {
        if (section.flags & (Image::write_flag | Image::execute_flag)) continue;
        const auto count = std::min(section.raw_size, section.end - section.begin);
        const auto *bytes = image.read(section.begin, count);
        if (!bytes || count < 4) continue;
        for (uint32_t offset = 0; offset <= count - 4; ++offset) {
            uint32_t key; std::memcpy(&key, bytes + offset, 4);
            auto found = literal_hits.find(key);
            if (found != literal_hits.end() && found->second.size() < 513)
                found->second.push_back(section.begin + offset);
        }
    }
    const auto index_exact_anchors = [&](auto &keys) {
        if (keys.empty()) return;
        for (const auto &section : image.sections) {
            if (section.flags & Image::write_flag) continue;
            const auto count = std::min(section.raw_size, section.end - section.begin);
            const auto *bytes = image.read(section.begin, count);
            if (!bytes || count < 8) continue;
            for (uint32_t offset = 0; offset <= count - 8; ++offset) {
                uint64_t key; std::memcpy(&key, bytes + offset, 8);
                auto found = keys.find(key);
                if (found != keys.end() && found->second.size() < 513)
                    found->second.push_back(section.begin + offset);
            }
        }
    };
    index_exact_anchors(hits);

    // A long exact run can begin with ubiquitous alignment bytes or a common
    // prologue. Its first window exceeding the candidate cap says nothing
    // about the complete pattern. Try other fixed windows from that same
    // pattern, without trimming bytes or relaxing any operand/owner proof.
    std::vector<size_t> saturated_anchors;
    for (size_t index = 0; index < anchors.size(); ++index)
        if (anchors[index].valid && hits.at(anchors[index].key).size() > 512)
            saturated_anchors.push_back(index);
    const size_t initially_saturated = saturated_anchors.size();
    size_t recovered_anchors = 0, exhausted_anchors = 0, anchor_batch = 0;
    while (!saturated_anchors.empty()) {
        struct RankedAnchor { Anchor anchor; unsigned score; };
        std::unordered_map<uint64_t, std::vector<uint32_t>> new_keys;
        std::vector<size_t> pending;
        pending.reserve(saturated_anchors.size());
        for (const size_t index : saturated_anchors) {
            const auto &pattern = catalog.patterns[index];
            Anchor indexed;
            size_t indexed_count = 513, run = 0;
            std::vector<RankedAnchor> batch;
            batch.reserve(8);
            for (size_t at = 0; at < pattern.raw.size(); ++at) {
                run = pattern.mask[at] ? 0 : run + 1;
                if (run < 8) continue;
                const size_t offset = at - 7;
                uint64_t key; std::memcpy(&key, pattern.raw.data() + offset, 8);
                const auto known = hits.find(key);
                if (known != hits.end()) {
                    if (known->second.size() < indexed_count) {
                        indexed = {static_cast<uint32_t>(offset), key, true};
                        indexed_count = known->second.size();
                        // Zero hits already excludes this complete pattern.
                        if (!indexed_count) break;
                    }
                    continue;
                }
                if (std::any_of(batch.begin(), batch.end(),
                        [&](const auto &candidate) { return candidate.anchor.key == key; })) continue;
                unsigned distinct = 0, transitions = 0;
                for (size_t byte = 0; byte < 8; ++byte) {
                    bool repeated = false;
                    for (size_t before = 0; before < byte; ++before)
                        if (pattern.raw[offset + before] == pattern.raw[offset + byte]) {
                            repeated = true; break;
                        }
                    distinct += !repeated;
                    if (byte && pattern.raw[offset + byte - 1] != pattern.raw[offset + byte])
                        ++transitions;
                }
                // Diversity only orders work. Every still-saturated pattern
                // eventually tries all its distinct fixed windows.
                const RankedAnchor candidate{{static_cast<uint32_t>(offset), key, true},
                    distinct * 16 + transitions};
                const auto place = std::find_if(batch.begin(), batch.end(), [&](const auto &other) {
                    return candidate.score > other.score ||
                        (candidate.score == other.score && candidate.anchor.offset < other.anchor.offset);
                });
                if (place == batch.end() && batch.size() == 8) continue;
                batch.insert(place, candidate);
                if (batch.size() > 8) batch.pop_back();
            }
            if (indexed.valid) {
                anchors[index] = indexed;
                ++recovered_anchors;
            } else if (batch.empty()) {
                // Keep the existing scoped-search path available. No finite
                // retry count is used to declare a pattern incompatible.
                ++exhausted_anchors;
            } else {
                pending.push_back(index);
                for (const auto &candidate : batch) new_keys.try_emplace(candidate.anchor.key);
            }
        }
        saturated_anchors = std::move(pending);
        if (new_keys.empty()) break;
        if (report) report("Native discovery: saturated exact anchors batch " +
            std::to_string(++anchor_batch) + "; patterns=" + std::to_string(saturated_anchors.size()) +
            " fixed windows=" + std::to_string(new_keys.size()));
        index_exact_anchors(new_keys);
        hits.merge(new_keys);
    }
    if (report && initially_saturated)
        report("Native discovery: exact anchor retries resolved=" + std::to_string(recovered_anchors) +
            " exhausted=" + std::to_string(exhausted_anchors));

    std::vector<std::vector<uint32_t>> candidates(catalog.patterns.size());
    std::vector<uint32_t> selected(catalog.patterns.size());
    std::vector<uint32_t> scoped_searches(catalog.patterns.size()), hinted_searches(catalog.patterns.size());
    std::vector<bool> methods_expanded(catalog.patterns.size());
    if (report) report("Native discovery: matching initial instruction candidates");
    for (size_t index = 0; index < catalog.patterns.size(); ++index) {
        const auto &pattern = catalog.patterns[index];
        if (pattern.flags & (512u | 1024u | 2048u)) continue;
        const auto owner_hint = function_hints.find(owners[index]);
        const auto known_owner = (pattern.flags & 1) && owner_hint != function_hints.end() &&
            owner_hint->second.size() == 1 ? *owner_hint->second.begin() : 0;
        const auto append = [&](uint32_t address) {
            if (known_owner) {
                const auto function = function_at(address, pattern.raw.size());
                const auto scope = function == image.functions.end() ?
                    (pattern.reference == owners[index] ? address : 0) : logical_owner(*function);
                if (scope != known_owner) return;
            }
            if (pattern_matches(image, pattern, address)) candidates[index].push_back(address);
        };
        if (pattern.flags & 2) {
            if (known_owner) {
                const auto fragments = logical_fragments.find(known_owner);
                if (fragments != logical_fragments.end()) for (const auto fragment : fragments->second) {
                    const auto &function = image.functions[fragment];
                    if (function.end - function.begin == pattern.raw.size()) append(function.begin);
                }
            } else {
                const auto found = functions.find(static_cast<uint32_t>(pattern.raw.size()));
                if (found != functions.end()) for (auto address : found->second) append(address);
            }
        } else if (anchors[index].valid) {
            const auto &matches = hits.at(anchors[index].key);
            if (matches.size() <= 512) for (auto match : matches)
                if (match >= anchors[index].offset) append(match - anchors[index].offset);
        } else if ((pattern.flags & 32) && pattern.raw.size() >= 5 && pattern.raw.size() < 8) {
            uint32_t key; std::memcpy(&key, pattern.raw.data(), 4);
            const auto &matches = literal_hits.at(key);
            // The short key only locates candidates. The complete literal,
            // including its terminator, must still uniquely match in data.
            if (matches.size() <= 512) for (auto match : matches) append(match);
        }
        auto &values = candidates[index];
        std::sort(values.begin(), values.end()); values.erase(std::unique(values.begin(), values.end()), values.end());
        if (report && (index + 1) % 10000 == 0)
            report("Native discovery: initial candidates " + std::to_string(index + 1) + "/" +
                std::to_string(catalog.patterns.size()));
    }

    std::map<uint32_t, std::map<uint32_t, std::set<uint32_t>>> data_evidence;
    std::map<std::pair<uint32_t, uint32_t>, std::vector<size_t>> data_witnesses;
    std::map<uint32_t, Byte> changes;
    using LayoutConflict = std::tuple<uint32_t, uint32_t, uint32_t, uint32_t>;
    std::map<LayoutConflict, std::set<uint32_t>> layout_conflicts;
    struct RootWitness { size_t pattern; uint32_t address, function_hint; };
    struct RootEvidence { std::set<uint32_t> owners; std::vector<RootWitness> witnesses; };
    std::vector<RootWitness> root_witnesses;
    struct OwnerWitness { size_t pattern; uint32_t address, entry; };
    std::vector<OwnerWitness> owner_witnesses;
    std::map<const FieldSpec *, size_t> published_fields;
    for (size_t index = 0; index < state.fields.size(); ++index) {
        const auto &field = state.fields[index];
        const auto *spec = field_spec(field.object + field.offset);
        if (!published_fields.emplace(spec, index).second)
            throw std::runtime_error("Duplicate identity-pinned semantic field");
    }
    std::set<uint32_t> unproved_field_widths;
    std::string pending_field_conflict;
    std::string pending_global_conflict;
    std::string root_conflict_message;
    size_t round = 0, matched_patterns = 0;
    bool progress = true;
    while (progress) {
        ++round;
        if (report) report("Native address graph round " + std::to_string(round) + ": " +
            std::to_string(matched_patterns) + "/" + std::to_string(catalog.patterns.size()) + " patterns matched");
        progress = false;
        // Recompute rejected evidence against the current graph. An earlier
        // ambiguous candidate must not outlive the anchors that disprove it.
        layout_conflicts.clear();
        std::map<uint32_t, std::map<uint32_t, RootEvidence>> root_evidence;
        std::map<uint32_t, std::map<uint32_t, std::vector<OwnerWitness>>> owner_evidence;
        root_conflict_message.clear();
        for (size_t index = 0; index < catalog.patterns.size(); ++index) {
            if (selected[index]) continue;
            const auto &pattern = catalog.patterns[index];
            if (pattern.flags & (512u | 1024u | 2048u)) continue;
            auto &values = candidates[index];
            const bool has_exact_bytes = std::find(pattern.mask.begin(), pattern.mask.end(), 0) != pattern.mask.end();
            // RTTI slots and already established callers can distinguish tiny
            // duplicate methods, but a nominated method must still match code.
            auto hinted = hints.find(pattern.reference);
            if (hinted != hints.end() && hinted->second.size() == 1) {
                const auto address = *hinted->second.begin();
                if (hinted_searches[index] != address) {
                    hinted_searches[index] = address;
                    if (pattern_matches(image, pattern, address) &&
                        std::find(values.begin(), values.end(), address) == values.end()) values.push_back(address);
                }
            }
            const auto owner_hint = function_hints.find(owners[index]);
            const bool owner_known = owner_hint != function_hints.end() && owner_hint->second.size() == 1;
            const auto methods = method_candidates.find(owners[index]);
            // A vtable contributes a named class's method candidates, never an
            // ordinal assumption. Short exact blocks can establish the owner
            // even when compiler changes alter the complete function length.
            if (!methods_expanded[index] && pattern.reference == owners[index] && methods != method_candidates.end()) {
                methods_expanded[index] = true;
                for (auto address : methods->second)
                    if (pattern_matches(image, pattern, address) &&
                            std::find(values.begin(), values.end(), address) == values.end()) values.push_back(address);
            }
            if ((pattern.flags & 8) && owner_known &&
                    scoped_searches[index] != *owner_hint->second.begin() &&
                    (!anchors[index].valid || hits.at(anchors[index].key).size() > 512)) {
                scoped_searches[index] = *owner_hint->second.begin();
                const auto fragments = logical_fragments.find(*owner_hint->second.begin());
                if (fragments != logical_fragments.end()) for (const auto fragment : fragments->second) {
                    const auto &function = image.functions[fragment];
                    for (uint64_t address = function.begin; address + pattern.raw.size() <= function.end; ++address) {
                        if (anchors[index].valid) {
                            uint64_t key = 0;
                            const auto *bytes = image.read(static_cast<uint32_t>(address) + anchors[index].offset, 8);
                            if (!bytes) continue;
                            std::memcpy(&key, bytes, 8);
                            if (key != anchors[index].key) continue;
                        }
                        if (pattern_matches(image, pattern, static_cast<uint32_t>(address)) &&
                                std::find(values.begin(), values.end(), address) == values.end())
                            values.push_back(static_cast<uint32_t>(address));
                    }
                }
            }
            std::vector<uint32_t> viable;
            size_t unconstrained_count = 0;
            uint32_t unconstrained_address = 0;
            bool unconstrained_layout_ready = true;
            std::vector<LayoutConflict> unique_conflicts;
            for (auto address : values) {
                if (rejected.count({index, address})) continue;
                if (hinted != hints.end() && !hinted->second.empty() && !hinted->second.count(address)) continue;
                if (!bindings.compatible(pattern.reference, pattern_span(pattern), address)) continue;
                bool incoming_match = true;
                const uint64_t reference_end = uint64_t(pattern.reference) + pattern.raw.size();
                for (auto incoming = incoming_code.lower_bound(pattern.reference);
                        incoming != incoming_code.end() && incoming->first < reference_end; ++incoming) {
                    const auto target = uint64_t(address) + incoming->first - pattern.reference;
                    if (incoming->second.size() != 1 || *incoming->second.begin() != target) {
                        incoming_match = false; break;
                    }
                }
                if (!incoming_match) continue;
                const auto function = function_at(address, pattern.raw.size());
                if (pattern.flags & 1) {
                    const auto scope = function == image.functions.end() ?
                        (pattern.reference == owners[index] ? address : 0) : logical_owner(*function);
                    if (owner_known && scope != *owner_hint->second.begin()) continue;
                    if (methods != method_candidates.end() && !methods->second.count(scope)) continue;
                    if ((pattern.owner || (pattern.flags & 2)) && pattern.reference == owners[index] &&
                            function != image.functions.end() &&
                            logical_owner(*function) != address) continue;
                }
                bool valid = true, layout_ready = true;
                if ((pattern.flags & 8) && !owner_known) layout_ready = false;
                std::vector<LayoutConflict> conflicts;
                for (const auto &fixup : pattern.fixups) {
                    const auto target = operand_target(image, pattern, address, fixup);
                    const auto expected = bindings.lookup(fixup.target);
                    const auto *target_section = image.section(target);
                    if (target == UINT32_MAX || (!fixup.target && target != 0) ||
                        ((fixup.kind & 0x200) && !expected) ||
                        (!has_exact_bytes && fixup.target && !expected) || (expected && expected != target) ||
                        (code_targets.count(fixup.target) && (!target_section || !(target_section->flags & Image::execute_flag)))) {
                        valid = false; break;
                    }
                    if ((fixup.kind & 0x100) && fixup.target >= pattern.reference &&
                            uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size() &&
                            uint64_t(target) != uint64_t(address) + fixup.target - pattern.reference) {
                        valid = false; break;
                    }
                    for (const auto &[object, extent] : global_layouts) {
                        if (fixup.target <= object || fixup.target - object >= extent) continue;
                        const auto base = bindings.lookup(object);
                        // PE roots must be established independently before
                        // a field-bearing candidate can publish code, hints
                        // or operand bytes. Otherwise a unique weak match can
                        // poison discovery before the root becomes known.
                        // ELF may derive symbolic roots from field evidence.
                        if (!base && !infer_global_roots) layout_ready = false;
                        const auto *field = field_spec(fixup.target);
                        if (base && (!field || (field->flags & 2)) &&
                                uint64_t(base) + fixup.target - object != target)
                            conflicts.emplace_back(fixup.target, target, object, base);
                    }
                }
                if (!valid) continue;
                if ((pattern.flags & 16) && function != image.functions.end())
                    owner_evidence[owners[index]][logical_owner(*function)].push_back({index, address, logical_owner(*function)});
                ++unconstrained_count;
                unconstrained_address = address;
                unconstrained_layout_ready = layout_ready;
                unique_conflicts = std::move(conflicts);
                if (layout_ready && unique_conflicts.empty()) viable.push_back(address);
            }
            // A layout rejection is strong evidence only when the remaining
            // byte/call graph already identifies one candidate. Two distinct
            // owning functions must still agree before declaring an ABI change.
            if (unconstrained_count == 1)
                for (const auto &conflict : unique_conflicts)
                    layout_conflicts[conflict].insert(owners[index]);
            if (!infer_global_roots && unconstrained_count == 1 && !unconstrained_layout_ready &&
                    (pattern.flags & 1)) {
                // A mixed root/field pattern need not wait on its own root.
                // Its function identity must already be anchored: either an
                // exact complete unwind function or a unique RTTI/direct-CALL
                // target. Generic branch hints do not establish a function.
                bool whole_function = false;
                if ((pattern.flags & 2) && owners[index] == pattern.reference) {
                    const auto bucket = functions.find(static_cast<uint32_t>(pattern.raw.size()));
                    whole_function = bucket != functions.end() &&
                        std::find(bucket->second.begin(), bucket->second.end(), unconstrained_address) != bucket->second.end();
                }
                uint32_t function_hint = 0;
                const auto named = function_hints.find(owners[index]);
                if (named != function_hints.end() && named->second.size() == 1) {
                    const auto entry = *named->second.begin();
                    if (owners[index] == pattern.reference && entry == unconstrained_address)
                        function_hint = entry;
                    else if (owners[index] != pattern.reference) {
                        const auto function = function_at(unconstrained_address, pattern.raw.size());
                        if (function != image.functions.end() && logical_owner(*function) == entry &&
                                function->begin <= unconstrained_address &&
                                uint64_t(unconstrained_address) + pattern.raw.size() <= function->end)
                            function_hint = entry;
                    }
                }
                if (whole_function || function_hint) {
                    for (const auto &[object, extent] : global_layouts) {
                        (void)extent;
                        if (bindings.lookup(object)) continue;
                        for (const auto &fixup : pattern.fixups) if (fixup.target == object) {
                            const auto target = operand_target(image, pattern, unconstrained_address, fixup);
                            auto &evidence = root_evidence[object][target];
                            const auto function = function_at(unconstrained_address, pattern.raw.size());
                            evidence.owners.insert(function == image.functions.end() ?
                                unconstrained_address : logical_owner(*function));
                            evidence.witnesses.push_back({index, unconstrained_address,
                                whole_function ? 0 : function_hint});
                        }
                    }
                }
            }
            if (viable.size() != 1) continue;
            const auto address = viable[0]; selected[index] = address;
            ++matched_patterns;
            bindings.add(pattern.reference, pattern_span(pattern), address);
            if ((pattern.flags & 2) && pattern.reference == owners[index]) {
                const auto function = function_at(address, pattern.raw.size());
                if (function != image.functions.end() && function->begin == address &&
                        function->end - function->begin == pattern.raw.size())
                    function_hints[owners[index]].insert(logical_owner(*function));
            }
            progress = true;
            const auto *bytes = image.read(address, pattern.raw.size());
            for (size_t offset = 0; !(pattern.flags & 32) && offset < pattern.raw.size(); ++offset) if (pattern.raw[offset] != bytes[offset]) {
                const auto reference = pattern.reference + static_cast<uint32_t>(offset);
                const Byte byte{reference, pattern.raw[offset], bytes[offset]};
                auto [at, inserted] = changes.emplace(reference, byte);
                if (!inserted && (at->second.reference != byte.reference || at->second.native != byte.native))
                    throw std::runtime_error("Conflicting relocated operand bytes");
            }
            for (const auto &fixup : pattern.fixups) {
                const auto target = operand_target(image, pattern, address, fixup);
                if (!fixup.target) continue;
                hints[fixup.target].insert(target);
                if (fixup.kind & 0x100) incoming_code[fixup.target].insert(target);
                if ((pattern.flags & 1) && (fixup.kind & 0x100) && !(fixup.kind & 0xff) &&
                        fixup.width == 4 && fixup.offset && fixup.next == fixup.offset + 4 &&
                        pattern.raw[fixup.offset - 1] == 0xe8) {
                    const auto function = function_at(target, 1);
                    function_hints[fixup.target].insert(function == image.functions.end() ? target : logical_owner(*function));
                }
            }
        }
        // Two disjoint exact instruction blocks are required to identify a
        // changed function. This grants only its scope, not a linear relocation
        // of its unmatched body, its vtable slot, or a calling convention.
        for (const auto &[owner, alternatives] : owner_evidence) {
            std::map<size_t, std::vector<OwnerWitness>> witnesses_by_pattern;
            for (const auto &[entry, witnesses] : alternatives)
                for (const auto &witness : witnesses) witnesses_by_pattern[witness.pattern].push_back(witness);
            std::set<uint32_t> identified_scopes;
            std::map<uint32_t, std::vector<OwnerWitness>> identity_witnesses;
            std::map<size_t, std::set<uint32_t>> semantic_targets;
            for (const auto &[index, witnesses] : witnesses_by_pattern) {
                const auto &pattern = catalog.patterns[index];
                auto &external_targets = semantic_targets[index];
                for (const auto &fixup : pattern.fixups) {
                    if (!fixup.target || fixup.target == owner || !bindings.lookup(fixup.target)) continue;
                    // Branches within the same function are graph constraints,
                    // not independent semantic identities. Calls and data
                    // require two distinct established target identities.
                    if ((fixup.kind & 0x100) && !(!(fixup.kind & 0xff) && fixup.width == 4 &&
                            fixup.offset && fixup.next == fixup.offset + 4 &&
                            pattern.raw[fixup.offset - 1] == 0xe8)) continue;
                    external_targets.insert(fixup.target);
                }
                if (witnesses.size() == 1 && external_targets.size() >= 2) {
                    identified_scopes.insert(witnesses.front().entry);
                    identity_witnesses[witnesses.front().entry].push_back(witnesses.front());
                }
            }
            // Repeated generic blocks in unrelated functions cannot veto a
            // unique semantic identity. Conflicting independent identities
            // remain unresolved; never select an owner by vote count.
            if (identified_scopes.size() > 1) continue;
            std::map<uint32_t, std::vector<OwnerWitness>> confirmed;
            for (const auto &[entry, witnesses] : alternatives) {
                if (!identified_scopes.empty() && !identified_scopes.count(entry)) continue;
                std::map<size_t, size_t> occurrences;
                for (const auto &witness : witnesses) ++occurrences[witness.pattern];
                std::vector<size_t> by_begin;
                for (size_t at = 0; at < witnesses.size(); ++at)
                    if (occurrences[witnesses[at].pattern] == 1 &&
                            semantic_targets.at(witnesses[at].pattern).size() >= 2) by_begin.push_back(at);
                auto by_end = by_begin;
                std::sort(by_begin.begin(), by_begin.end(), [&](size_t left, size_t right) {
                    return catalog.patterns[witnesses[left].pattern].reference <
                        catalog.patterns[witnesses[right].pattern].reference;
                });
                const auto reference_end = [&](size_t at) {
                    const auto &pattern = catalog.patterns[witnesses[at].pattern];
                    return uint64_t(pattern.reference) + pattern.raw.size();
                };
                std::sort(by_end.begin(), by_end.end(), [&](size_t left, size_t right) {
                    return reference_end(left) < reference_end(right);
                });
                struct SemanticIntervals {
                    size_t earliest = SIZE_MAX, latest = SIZE_MAX;
                    uint64_t earliest_end = UINT64_MAX;
                    uint32_t latest_begin = 0;
                };
                std::map<std::set<uint32_t>, SemanticIntervals> semantic_intervals;
                size_t consumed = 0;
                for (auto current : by_begin) {
                    const auto &right = catalog.patterns[witnesses[current].pattern];
                    const auto &right_targets = semantic_targets.at(witnesses[current].pattern);
                    while (consumed < by_end.size() && reference_end(by_end[consumed]) <= right.reference) {
                        const auto previous = by_end[consumed++];
                        const auto &left = catalog.patterns[witnesses[previous].pattern];
                        auto &intervals = semantic_intervals[semantic_targets.at(witnesses[previous].pattern)];
                        const auto native_end = uint64_t(witnesses[previous].address) + left.raw.size();
                        if (native_end < intervals.earliest_end) {
                            intervals.earliest_end = native_end; intervals.earliest = previous;
                        }
                        if (intervals.latest == SIZE_MAX || witnesses[previous].address > intervals.latest_begin) {
                            intervals.latest_begin = witnesses[previous].address; intervals.latest = previous;
                        }
                    }
                    for (const auto &[left_targets, intervals] : semantic_intervals) {
                        // Two copies of the same render/global sequence are
                        // not independent function identities, even when the
                        // instruction ranges are disjoint. Each context must
                        // contribute a proved external identity absent from
                        // the other context; subset/superset copies cannot
                        // bootstrap an unrelated caller's function scope.
                        if (std::includes(left_targets.begin(), left_targets.end(), right_targets.begin(), right_targets.end()) ||
                                std::includes(right_targets.begin(), right_targets.end(), left_targets.begin(), left_targets.end())) continue;
                        const auto other = intervals.earliest_end <= witnesses[current].address ? intervals.earliest :
                            uint64_t(intervals.latest_begin) >= uint64_t(witnesses[current].address) + right.raw.size() ? intervals.latest : SIZE_MAX;
                        if (other != SIZE_MAX) {
                            confirmed[entry] = {witnesses[other], witnesses[current]}; break;
                        }
                    }
                    if (confirmed.count(entry)) break;
                }
            }
            if (confirmed.size() != 1) continue;
            const auto &[entry, witnesses] = *confirmed.begin();
            if (function_hints[owner].insert(entry).second) {
                hints[owner].insert(entry);
                owner_witnesses.insert(owner_witnesses.end(), witnesses.begin(), witnesses.end());
                if (const auto identity = identity_witnesses.find(entry); identity != identity_witnesses.end())
                    owner_witnesses.insert(owner_witnesses.end(), identity->second.begin(), identity->second.end());
                progress = true;
            }
        }
        // A selected data pattern or an isolated short byte match is not an
        // independently identified global producer. Rebuild these votes after
        // the current owner graph, and count actual native functions so two
        // overlapping reference contexts cannot inflate a single producer.
        data_evidence.clear(); data_witnesses.clear(); pending_global_conflict.clear();
        for (size_t index = 0; index < selected.size(); ++index) if (selected[index]) {
            const auto &pattern = catalog.patterns[index];
            if (!(pattern.flags & 1)) continue;
            const auto function = function_at(selected[index], pattern.raw.size());
            if (function == image.functions.end()) continue;
            const auto hint = function_hints.find(owners[index]);
            const bool named = hint != function_hints.end() && hint->second.size() == 1 &&
                *hint->second.begin() == logical_owner(*function);
            const bool whole = (pattern.flags & 2) && pattern.reference == owners[index] &&
                selected[index] == function->begin && function->end - function->begin == pattern.raw.size();
            if (!named && !whole) continue;
            bool consistent = true;
            for (const auto &fixup : pattern.fixups) {
                const auto expected = bindings.lookup(fixup.target);
                if (expected && expected != operand_target(image, pattern, selected[index], fixup)) {
                    consistent = false; break;
                }
            }
            if (!consistent) continue; // The final graph audit still rejects this selected pattern.
            const auto record = [&](uint32_t reference, uint32_t target) {
                data_evidence[reference][target].insert(logical_owner(*function));
                auto &witnesses = data_witnesses[{reference, target}];
                if (witnesses.size() < 8 && std::find(witnesses.begin(), witnesses.end(), index) == witnesses.end())
                    witnesses.push_back(index);
            };
            for (const auto &fixup : pattern.fixups) {
                if (!fixup.target || code_targets.count(fixup.target)) continue;
                const auto target = operand_target(image, pattern, selected[index], fixup);
                if (target == UINT32_MAX) continue;
                record(fixup.target, target);
                for (const auto &[object, extent] : global_layouts) if (infer_global_roots)
                    if (fixup.target >= object && fixup.target - object < extent && target >= fixup.target - object)
                        record(object, target - (fixup.target - object));
            }
        }
        std::set<uint32_t> competing_roots;
        for (auto &[object, evidence] : root_evidence) {
            const auto committed = data_evidence.find(object);
            if (committed != data_evidence.end())
                for (const auto &[target, sources] : committed->second)
                    evidence[target].owners.insert(sources.begin(), sources.end());
            if (evidence.size() != 1) {
                competing_roots.insert(object);
                if (root_conflict_message.empty()) {
                    std::ostringstream message;
                    message << "Conflicting native global root evidence: object=0x" << std::hex << object;
                    for (const auto &[target, sources] : evidence)
                        message << " target=0x" << target << " independent_sources=" << std::dec
                            << sources.owners.size() << std::hex;
                    root_conflict_message = message.str();
                }
                continue;
            }
            const auto &[target, sources] = *evidence.begin();
            if (sources.owners.size() >= 2 && bindings.add(object, 1, target)) {
                progress = true;
                root_witnesses.insert(root_witnesses.end(), sources.witnesses.begin(), sources.witnesses.end());
            }
        }
        for (const auto &[reference, evidence] : data_evidence) {
            if (competing_roots.count(reference)) continue;
            // Declared member spans are committed below from function-identity
            // evidence as a unit; a raw RIP target is not a width proof.
            const auto *declared_field = field_spec(reference);
            if (declared_field && reference != declared_field->object) continue;
            if (evidence.size() != 1) {
                const auto strong = std::count_if(evidence.begin(), evidence.end(),
                    [](const auto &alternative) { return alternative.second.size() >= 2; });
                size_t alternatives = 0;
                std::ostringstream diagnostic;
                diagnostic << "Conflicting global address evidence: reference=0x" << std::hex << reference
                    << " bound=0x" << bindings.lookup(reference) << " candidates=" << std::dec << evidence.size();
                for (const auto &[target, sources] : evidence) {
                    if (alternatives++ == 8) { diagnostic << " ..."; break; }
                    diagnostic << " [target=0x" << std::hex << target << " independent_sources=" << std::dec
                        << sources.size() << " functions=" << std::hex;
                    size_t shown = 0;
                    for (auto source : sources) { if (shown++ == 4) break; diagnostic << "0x" << source << ','; }
                    const auto witnesses = data_witnesses.find({reference, target});
                    if (witnesses != data_witnesses.end()) for (auto index : witnesses->second) {
                        const auto &pattern = catalog.patterns[index];
                        diagnostic << " pattern=0x" << pattern.reference << " owner=0x" << owners[index]
                            << " native=0x" << selected[index] << " flags=0x" << pattern.flags;
                    }
                    diagnostic << ']';
                }
                if (strong >= 2) throw std::runtime_error(diagnostic.str());
                if (pending_global_conflict.empty()) pending_global_conflict = diagnostic.str();
                // Keep the reference unresolved. A single producer cannot
                // establish an ABI contradiction or choose a competing target.
                continue;
            }
            const auto &[target, owners] = *evidence.begin();
            for (const auto &[object, extent] : global_layouts) if (reference >= object && reference - object < extent) {
                const auto base = bindings.lookup(object);
                const auto *field = field_spec(reference);
                if (base && (!field || (field->flags & 2)) && uint64_t(base) + reference - object != target)
                    throw std::runtime_error("Native global object layout changed: " +
                        layout_conflict_message(reference, target, object, base, owners.size()));
            }
            // Globals have no stable value to scan. Require two independently
            // identified code producers to agree on their RIP operand target.
            if (owners.size() >= 2 && bindings.add(reference, 1, target)) progress = true;
        }
        struct MemberEvidence {
            std::set<uint32_t> owners;
            std::vector<std::pair<uint32_t, uint32_t>> coverage;
        };
        std::map<const FieldSpec *, std::map<uint32_t, MemberEvidence>> member_evidence;
        unproved_field_widths.clear();
        pending_field_conflict.clear();
        for (size_t index = 0; index < selected.size(); ++index) if (selected[index]) {
            const auto &pattern = catalog.patterns[index];
            const auto function = function_at(selected[index], pattern.raw.size());
            if (!(pattern.flags & 1) || function == image.functions.end()) continue;
            const auto hint = function_hints.find(owners[index]);
            const bool named = hint != function_hints.end() && hint->second.size() == 1 &&
                *hint->second.begin() == logical_owner(*function);
            const bool whole = (pattern.flags & 2) && pattern.reference == owners[index] &&
                function->begin == selected[index] && function->end - function->begin == pattern.raw.size();
            if (!named && !whole) continue;
            for (const auto &fixup : pattern.fixups) {
                const auto target = operand_target(image, pattern, selected[index], fixup);
                const auto access_width = fixup.kind >> 16;
                if (target == UINT32_MAX) continue;
                const auto add = [&](const FieldSpec *spec) {
                    const auto first = spec->object + spec->offset;
                    const auto reference = (std::max)(fixup.target, first);
                    const auto inside = reference - first;
                    const auto base = bindings.lookup(spec->object);
                    const uint64_t actual = uint64_t(target) + reference - fixup.target;
                    if (!base || actual < inside || actual - inside < base || actual > UINT32_MAX) return;
                    const auto start = static_cast<uint32_t>(actual - inside);
                    const auto *section = image.section(start, spec->width);
                    if (!section || section != image.section(base) || !(section->flags & Image::write_flag)) return;
                    if ((spec->flags & 2) && start - base != spec->offset) return;
                    auto &evidence = member_evidence[spec][start];
                    evidence.owners.insert(logical_owner(*function));
                    if (access_width) {
                        const auto end = static_cast<uint32_t>((std::min)(uint64_t(first) + spec->width,
                            uint64_t(fixup.target) + access_width) - first);
                        if (end > inside) evidence.coverage.emplace_back(inside, end);
                    }
                };
                if (!access_width) {
                    if (const auto *spec = field_spec(fixup.target)) add(spec);
                    continue;
                }
                auto spec = std::upper_bound(indexed_fields.begin(), indexed_fields.end(), fixup.target,
                    [](uint32_t value, const auto *field) { return value < uint64_t(field->object) + field->offset; });
                if (spec != indexed_fields.begin()) {
                    const auto *before = *std::prev(spec);
                    if (uint64_t(before->object) + before->offset + before->width > fixup.target) --spec;
                }
                for (; spec != indexed_fields.end() &&
                        uint64_t((*spec)->object) + (*spec)->offset < uint64_t(fixup.target) + access_width; ++spec) add(*spec);
            }
        }
        for (const auto &spec : field_specs) {
            const auto base = bindings.lookup(spec.object);
            if (!base) continue;
            const auto observed = member_evidence.find(&spec);
            if (observed == member_evidence.end()) continue;
            const auto &evidence = observed->second;
            if (evidence.size() > 1) {
                // A single producer is not enough to turn a competing short
                // block into a fatal ABI conclusion. Preserve every competing
                // address and publish none until the field is unambiguous.
                size_t strong = 0;
                for (const auto &[target, sources] : evidence) {
                    (void)target;
                    if (sources.owners.size() >= 2) ++strong;
                }
                const auto diagnostic = "Conflicting native field relocation: " +
                    layout_conflict_message(spec.object + spec.offset, evidence.begin()->first, spec.object, base,
                        evidence.begin()->second.owners.size()) + " competing_targets=" + std::to_string(evidence.size());
                if (strong >= 2) throw std::runtime_error(diagnostic);
                if (pending_field_conflict.empty()) pending_field_conflict = diagnostic;
                continue;
            }
            if (evidence.size() != 1 || evidence.begin()->second.owners.size() < 2) continue;
            const auto &[target, sources] = *evidence.begin();
            auto coverage = sources.coverage;
            std::sort(coverage.begin(), coverage.end());
            uint32_t covered = 0;
            for (const auto &[begin, end] : coverage) {
                if (begin > covered) break;
                covered = (std::max)(covered, end);
            }
            const bool address_only = !spec.flags && spec.width == 1;
            if (!address_only && covered < spec.width) {
                unproved_field_widths.insert(spec.object + spec.offset);
                continue;
            }
            if (bindings.add(spec.object + spec.offset, spec.width, target)) progress = true;
            if (published_fields.emplace(&spec, state.fields.size()).second)
                state.fields.push_back({spec.object, spec.offset, target - base,
                    spec.width, static_cast<uint32_t>(sources.owners.size()), spec.flags});
        }
        for (const auto &table : tables) {
            bool valid = true;
            for (size_t slot = 0; slot < table.source->slots.size(); ++slot) {
                if (!table.source->slots[slot]) continue;
                const auto *slot_bytes = image.read(table.address + static_cast<uint32_t>(slot * 8), 8);
                if (!slot_bytes) { valid = false; break; }
                uint64_t pointer; std::memcpy(&pointer, slot_bytes, 8);
                const auto target = bindings.lookup(table.source->slots[slot]);
                if (!target || pointer != image.preferred_base + target) { valid = false; break; }
            }
            if (valid && bindings.add(table.source->reference, static_cast<uint32_t>(table.source->slots.size() * 8),
                                     table.address)) progress = true;
        }
        if (report) report("Native address graph round " + std::to_string(round) + " complete: " +
            std::to_string(matched_patterns) + " patterns, " + std::to_string(state.fields.size()) +
            " field bindings; " + (progress ? "continuing" : "converged"));
    }

    if (!root_conflict_message.empty()) throw std::runtime_error(root_conflict_message);
    for (const auto &[conflict, sources] : layout_conflicts) if (sources.size() >= 2) {
        const auto &[reference, target, object, base] = conflict;
        throw std::runtime_error("Native global object layout changed: " +
            layout_conflict_message(reference, target, object, base, sources.size()));
    }

    // Revisit every admitted operand after the graph closes: a later anchor
    // must not silently contradict an earlier unique byte match.
    if (report) report("Native discovery: validating the converged operand graph");
    const auto operand_conflict = [&](const char *label, size_t index, uint32_t address,
                                      const Fixup &fixup, uint32_t expected) {
        const auto &pattern = catalog.patterns[index];
        const auto function = function_at(address, pattern.raw.size());
        std::ostringstream detail;
        detail << label << ": pattern=0x" << std::hex << pattern.reference << " owner=0x" << owners[index]
            << " native=0x" << address << " native_owner=0x"
            << (function == image.functions.end() ? 0 : logical_owner(*function)) << " flags=0x" << pattern.flags
            << " fixup=0x" << fixup.offset << " kind=0x" << fixup.kind << " reference=0x" << fixup.target
            << " expected=0x" << expected << " actual=0x" << operand_target(image, pattern, address, fixup);
        for (const auto &root : initial.roots) if (root.begin == fixup.target)
            detail << " source=pinned-root";
        for (const auto &table : initial.virtual_tables)
            if (fixup.target >= table.begin && fixup.target < table.end) detail << " source=pinned-vtable";
        if (const auto *spec = field_spec(fixup.target)) {
            detail << " field_object=0x" << spec->object << " field_offset=0x" << spec->offset;
            const auto published = published_fields.find(spec);
            if (published != published_fields.end()) {
                const auto &field = state.fields[published->second];
                detail << " field_native_offset=0x" << field.native_offset << " field_sources=" << std::dec
                    << field.sources << std::hex;
            }
        }
        const auto data = data_witnesses.find({fixup.target, expected});
        if (data != data_witnesses.end()) {
            size_t shown = 0;
            for (auto source : data->second) {
                if (shown++ == 4) break;
                detail << " producer_pattern=0x" << catalog.patterns[source].reference
                    << " producer_owner=0x" << owners[source] << " producer_native=0x" << selected[source];
            }
        }
        size_t shown = 0;
        for (size_t source = 0; source < selected.size() && shown < 4; ++source) if (selected[source]) {
            const auto &candidate = catalog.patterns[source];
            if (fixup.target >= candidate.reference &&
                    uint64_t(fixup.target) < uint64_t(candidate.reference) + pattern_span(candidate)) {
                detail << " bound_pattern=0x" << candidate.reference << " bound_native=0x" << selected[source]
                    << " bound_owner=0x" << owners[source];
                ++shown;
            }
        }
        return detail.str();
    };
    RejectedCandidates invalid_candidates;
    std::string first_operand_conflict;
    const auto retractable = [&](size_t index, uint32_t address) {
        const auto &pattern = catalog.patterns[index];
        if (!(pattern.flags & 1)) return false;
        const auto function = function_at(address, pattern.raw.size());
        return !((pattern.flags & 2) && pattern.reference == owners[index] &&
            function != image.functions.end() && function->begin == address &&
            function->end - function->begin == pattern.raw.size());
    };
    const auto reject_operand = [&](const char *label, size_t index, uint32_t address,
                                    const Fixup &fixup, uint32_t expected) {
        RejectedCandidates implicated;
        if (retractable(index, address)) implicated.emplace(index, address);
        // A competing short block may have manufactured the expected mapping.
        // Retract both weak sides rather than selecting a winner by scan order.
        for (size_t source = 0; source < selected.size(); ++source) if (selected[source]) {
            const auto &pattern = catalog.patterns[source];
            if (fixup.target >= pattern.reference &&
                    uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size() &&
                    uint64_t(selected[source]) + fixup.target - pattern.reference == expected &&
                    retractable(source, selected[source])) implicated.emplace(source, selected[source]);
        }
        const auto detail = operand_conflict(label, index, address, fixup, expected);
        // Complete unwind-function evidence and pinned declarations are never
        // weakened to make discovery finish. Such a contradiction is fatal.
        if (implicated.empty()) throw std::runtime_error(detail);
        invalid_candidates.insert(implicated.begin(), implicated.end());
        if (first_operand_conflict.empty()) first_operand_conflict = detail;
    };
    const auto scope_conflict = [&](const char *label, size_t index, uint32_t address, uint32_t expected) {
        const auto owner = owners[index];
        const auto &pattern = catalog.patterns[index];
        std::ostringstream detail;
        detail << label << ": owner=0x" << std::hex << owner << " expected=0x" << expected
            << " witness_pattern=0x" << pattern.reference << " witness_native=0x" << address
            << " witness_flags=0x" << pattern.flags << " candidates=";
        if (const auto hint = function_hints.find(owner); hint != function_hints.end())
            for (auto entry : hint->second) detail << "0x" << entry << ',';
        for (const auto &pin : initial.function_owners) if (pin.begin == owner)
            detail << " pinned_scope=0x" << pin.native;
        size_t count = 0;
        for (const auto &witness : owner_witnesses) if (owners[witness.pattern] == owner && count++ < 8)
            detail << " block=0x" << catalog.patterns[witness.pattern].reference
                << "@0x" << witness.address << "->0x" << witness.entry;
        count = 0;
        for (size_t source = 0; source < selected.size(); ++source) if (selected[source]) {
            const auto &producer = catalog.patterns[source];
            if ((producer.flags & 2) && producer.reference == owner) {
                const auto function = function_at(selected[source], producer.raw.size());
                detail << " whole=0x" << producer.reference << "@0x" << selected[source]
                    << "->0x" << (function == image.functions.end() ? 0 : logical_owner(*function));
            }
            if (count >= 16 || !(producer.flags & 1)) continue;
            for (const auto &fixup : producer.fixups) if (fixup.target == owner && (fixup.kind & 0x100) &&
                    !(fixup.kind & 0xff) && fixup.width == 4 && fixup.offset &&
                    fixup.next == fixup.offset + 4 && producer.raw[fixup.offset - 1] == 0xe8) {
                const auto target = operand_target(image, producer, selected[source], fixup);
                const auto function = function_at(target, 1);
                detail << " caller=0x" << producer.reference << "@0x" << selected[source]
                    << "+0x" << fixup.offset - 1 << " flags=0x" << producer.flags << " callee=0x" << target
                    << " scope=0x" << (function == image.functions.end() ? target : logical_owner(*function));
                if (++count == 16) break;
            }
        }
        return detail.str();
    };
    for (const auto &witness : owner_witnesses) {
        const auto hint = function_hints.find(owners[witness.pattern]);
        if (hint == function_hints.end() || hint->second.size() != 1 || *hint->second.begin() != witness.entry)
            throw std::runtime_error(scope_conflict("Native function scope lost its unique instruction anchors",
                witness.pattern, witness.address, witness.entry));
        const auto &pattern = catalog.patterns[witness.pattern];
        for (const auto &fixup : pattern.fixups) {
            const auto expected = bindings.lookup(fixup.target);
            if (expected && expected != operand_target(image, pattern, witness.address, fixup))
                reject_operand("Native function anchor disagrees with an established address",
                    witness.pattern, witness.address, fixup, expected);
        }
    }
    for (const auto &witness : root_witnesses) {
        const auto &pattern = catalog.patterns[witness.pattern];
        if (witness.function_hint) {
            const auto hint = function_hints.find(owners[witness.pattern]);
            if (hint == function_hints.end() || hint->second.size() != 1 ||
                    *hint->second.begin() != witness.function_hint)
                throw std::runtime_error(scope_conflict("Native global root lost its unique function anchor",
                    witness.pattern, witness.address, witness.function_hint));
        }
        for (const auto &fixup : pattern.fixups) {
            const auto expected = bindings.lookup(fixup.target);
            if (expected && expected != operand_target(image, pattern, witness.address, fixup))
                reject_operand("Native global root evidence disagrees with an established address",
                    witness.pattern, witness.address, fixup, expected);
        }
    }
    for (size_t index = 0; index < selected.size(); ++index) if (selected[index]) {
        const auto &pattern = catalog.patterns[index];
        for (const auto &fixup : pattern.fixups) {
            const auto expected = bindings.lookup(fixup.target);
            if (expected && expected != operand_target(image, pattern, selected[index], fixup))
                reject_operand("Native operand graph disagrees with an established address",
                    index, selected[index], fixup, expected);
        }
    }
    if (!invalid_candidates.empty())
        throw CandidateConflict(first_operand_conflict, std::move(invalid_candidates));
    state.ranges = bindings.export_ranges();
    for (const auto &[reference, entries] : function_hints) if (entries.size() == 1) {
        const auto entry = *entries.begin();
        const auto function = function_at(entry, 1);
        if (function != image.functions.end() && function->begin == entry)
            state.function_owners.push_back({reference, reference + 1, entry});
    }
    std::sort(state.function_owners.begin(), state.function_owners.end(),
        [](const auto &left, const auto &right) { return left.begin < right.begin; });
    for (const auto &[reference, byte] : changes) { (void)reference; state.bytes.push_back(byte); }
    complete_spans(state, catalog);
    complete_fields(state, field_specs);
    if (!state.complete && !layout_conflicts.empty()) {
        const auto &[conflict, sources] = *layout_conflicts.begin();
        const auto &[reference, target, object, base] = conflict;
        state.message = "Rejected global-field candidate: " +
            layout_conflict_message(reference, target, object, base, sources.size());
    }
    if (!unproved_field_widths.empty()) {
        std::ostringstream message;
        message << "Instruction anchors without complete field-width coverage=" << unproved_field_widths.size()
            << "; first RVAs:" << std::hex;
        size_t count = 0;
        for (auto reference : unproved_field_widths) {
            if (count++ == 12) break;
            message << " 0x" << reference;
        }
        if (!state.message.empty()) state.message += "; ";
        state.message += message.str();
    }
    if (!pending_field_conflict.empty()) {
        if (!state.message.empty()) state.message += "; ";
        state.message += pending_field_conflict;
    }
    if (!pending_global_conflict.empty()) {
        if (!state.message.empty()) state.message += "; ";
        state.message += pending_global_conflict;
    }
    return state;
}

template <typename Image, typename Catalog>
inline State scan(const Image &image, const Catalog &catalog,
        const std::vector<std::pair<uint32_t, uint32_t>> &global_layouts = {}, bool infer_global_roots = false,
        const std::vector<FieldSpec> &field_specs = {}, bool semantic_vtables = false,
        const InitialEvidence &initial = {}, const Progress &report = {}) {
    RejectedCandidates rejected;
    size_t attempts = 0;
    for (;;) {
        try {
            return scan_once(image, catalog, global_layouts, infer_global_roots,
                field_specs, semantic_vtables, initial, report, rejected);
        } catch (const CandidateConflict &conflict) {
            const auto previous = rejected.size();
            rejected.insert(conflict.candidates.begin(), conflict.candidates.end());
            if (rejected.size() == previous || ++attempts > 64)
                throw std::runtime_error(std::string("Native candidate graph cannot converge safely: ") + conflict.what());
            if (report) report("Native discovery: withdrawing " + std::to_string(rejected.size() - previous) +
                " contradicted short-block candidates and rebuilding all derived evidence from pinned declarations; " +
                conflict.what());
            // scan_once owns every derived range, hint, field vote and operand
            // byte. None survives this restart, including indirect dependants.
        }
    }
}

} // namespace dfcn::address_runtime
