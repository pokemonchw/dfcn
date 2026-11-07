#pragma once

#ifdef _WIN32
#include "native_pe_image.h"
#include "native_address_scan.h"
#include "native_history_abi_discovery.h"
#include "native_graphics_discovery.h"
#include "native_history_abi.h"
#include "native_display_discovery.h"
#include "native_call_discovery.h"
#include "native_callable_search_discovery.h"
#include "native_text_draw_discovery.h"
#include "native_workshop_recipe_discovery.h"
#include "native_chooser_feature_discovery.h"
#include "native_optional_panel_discovery.h"
#include "native_entry_discovery.h"
#include "native_argument_guard_discovery.h"
#include "native_frame_discovery.h"
#include "native_literal_scope_discovery.h"
#include "native_method_call_discovery.h"
#include "native_typed_receiver_discovery.h"
#include "native_typed_member_discovery.h"
#include "native_global_value_discovery.h"
#include "native_chooser_row_discovery.h"
#include "native_inline_resize_discovery.h"
#include "native_output_region_discovery.h"
#include "native_entry_prefix_discovery.h"
#include "runtime_paths.h"
#include <algorithm>
#include <array>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <unordered_map>
#include <vector>

// The resolver owns executable identities and address discovery. Feature
// profiles retain their reference coordinates and their memory ownership checks.
namespace dfcn::pe_runtime {

using namespace address_runtime;

inline bool usable(const State &state) noexcept {
    return state.validated && state.edition >= 1 && state.edition <= 3 && state.size != 0;
}

// Discovery semantics are part of cache ownership, independently of seed data.
inline constexpr uint32_t discovery_revision = 54;

struct Profile {
    std::string label;
    std::array<unsigned char, 32> digest{};
    uint32_t timestamp = 0, size = 0;
    std::vector<Range> ranges;
    std::vector<Byte> bytes;
};
struct Catalog {
    uint32_t schema = 1;
    std::vector<std::pair<uint32_t, uint32_t>> required;
    std::vector<Profile> known;
    std::vector<Pattern> patterns;
    std::vector<Vtable> vtables;
    std::vector<Import> imports;
    std::vector<FieldSpec> field_specs;
    std::vector<unsigned char> history_semantics, graphics_tokens;
    std::vector<unsigned char> display_scopes, frame_semantics, method_calls, inline_resizes, callable_search;
    std::vector<unsigned char> text_draws, workshop_recipes, chooser_features, optional_panels;
    std::array<unsigned char, 32> digest{};
};
inline bool complete_state(State &state, const Catalog &catalog);

class Reader {
    std::vector<unsigned char> data_;
    size_t cursor_ = 0;
    void unseal() {
        if (data_.size() < 32) throw std::runtime_error("Truncated address cache digest");
        const auto payload_size = data_.size() - 32;
        const auto digest = sha256(data_.data(), payload_size);
        if (std::memcmp(digest.data(), data_.data() + payload_size, digest.size()))
            throw std::runtime_error("Address cache digest mismatch");
        data_.resize(payload_size);
    }
public:
    explicit Reader(const std::filesystem::path &path, bool sealed = false) {
        std::ifstream input(path, std::ios::binary | std::ios::ate);
        if (!input) throw std::runtime_error("Cannot open address data: " + runtime::utf8(path));
        const auto length = input.tellg();
        if (length < 0 || length > 128 * 1024 * 1024)
            throw std::runtime_error("Invalid address data size");
        data_.resize(static_cast<size_t>(length));
        input.seekg(0);
        if (!data_.empty() && !input.read(reinterpret_cast<char *>(data_.data()), length))
            throw std::runtime_error("Cannot read address data");
        if (sealed) unseal();
    }
    explicit Reader(std::vector<unsigned char> data, bool sealed)
        : data_(std::move(data)) { if (sealed) unseal(); }
    const std::vector<unsigned char> &data() const { return data_; }
    void rewind() { cursor_ = 0; }
    void read(void *destination, size_t length) {
        if (length > data_.size() - cursor_) throw std::runtime_error("Truncated address data");
        if (length) std::memcpy(destination, data_.data() + cursor_, length);
        cursor_ += length;
    }
    uint32_t number() { uint32_t value; read(&value, sizeof(value)); return value; }
    uint32_t count(uint32_t maximum = 1000000) {
        const auto value = number();
        if (value > maximum) throw std::runtime_error("Invalid address data count");
        return value;
    }
    std::vector<unsigned char> blob(uint32_t maximum = 16 * 1024 * 1024) {
        std::vector<unsigned char> value(count(maximum));
        read(value.data(), value.size());
        return value;
    }
    std::string string() {
        const auto value = blob(4096);
        return {value.begin(), value.end()};
    }
    uint32_t magic(const char *expected, uint32_t maximum_schema = 1) {
        char actual[8]; read(actual, sizeof(actual));
        const auto schema = number();
        if (std::memcmp(actual, expected, 8) || !schema || schema > maximum_schema)
            throw std::runtime_error("Unsupported address data schema");
        return schema;
    }
    void finish() const {
        if (cursor_ != data_.size()) throw std::runtime_error("Unexpected address data suffix");
    }
};

inline void read_bindings(Reader &reader, std::vector<Range> &ranges, std::vector<Byte> &bytes) {
    ranges.resize(reader.count());
    uint32_t previous = 0;
    for (auto &range : ranges) {
        range = {reader.number(), reader.number(), reader.number()};
        if (!range.begin || range.end <= range.begin || range.begin < previous ||
            !range.native || uint64_t(range.native) + range.end - range.begin > UINT32_MAX)
            throw std::runtime_error("Invalid address range");
        previous = range.end;
    }
    bytes.resize(reader.count(8000000));
    previous = 0;
    for (size_t index = 0; index < bytes.size(); ++index) {
        auto &byte = bytes[index];
        byte.address = reader.number();
        reader.read(&byte.reference, 1); reader.read(&byte.native, 1);
        if (!byte.address || (index && byte.address <= previous))
            throw std::runtime_error("Invalid relocated operand order");
        previous = byte.address;
    }
}

inline std::vector<std::pair<uint32_t, uint32_t>> read_required(Reader &reader, uint32_t *schema = nullptr) {
    std::vector<std::pair<uint32_t, uint32_t>> spans;
    const auto version = reader.magic("DFCNPE01", 13);
    if (schema) *schema = version;
    const auto required = reader.count();
    for (uint32_t index = 0; index < required; ++index) {
        const auto reference = reader.number(), length = reader.number();
        if (!reference || !length || uint64_t(reference) + length > UINT32_MAX)
            throw std::runtime_error("Invalid required address span");
        spans.emplace_back(reference, length);
    }
    return spans;
}

inline Catalog load_catalog(Reader reader) {
    Catalog catalog;
    catalog.digest = sha256(reader.data().data(), reader.data().size());
    catalog.required = read_required(reader, &catalog.schema);
    catalog.known.resize(reader.count(32));
    for (auto &profile : catalog.known) {
        profile.label = reader.string(); reader.read(profile.digest.data(), profile.digest.size());
        profile.timestamp = reader.number(); profile.size = reader.number();
        read_bindings(reader, profile.ranges, profile.bytes);
    }
    catalog.patterns.resize(reader.count(500000));
    for (auto &pattern : catalog.patterns) {
        pattern.reference = reader.number(); pattern.flags = reader.number();
        if (catalog.schema >= 2) pattern.owner = reader.number();
        pattern.raw = reader.blob(); pattern.mask = reader.blob();
        if (!pattern.reference || pattern.raw.empty() || pattern.mask.size() != pattern.raw.size() ||
            uint64_t(pattern.reference) + pattern.raw.size() > UINT32_MAX ||
            (pattern.flags & ~(catalog.schema >= 2 ? 4031u : 7u)) || !(pattern.flags & 5u) ||
            ((pattern.flags & 2048u) && pattern.flags != 2057u) ||
            ((pattern.flags & 1024u) && (pattern.flags != 1027u || pattern.owner != pattern.reference)) ||
            ((pattern.flags & 256u) && pattern.flags != 265u && pattern.flags != 777u) ||
            ((pattern.flags & 512u) && pattern.flags != 777u) ||
            ((pattern.flags & 128u) && !(pattern.flags & 32u)) ||
            ((pattern.flags & 32u) && ((pattern.flags != 36 && pattern.flags != 164) || pattern.owner)) ||
            ((pattern.flags & 24u) && (!(pattern.flags & 1) || !pattern.owner)))
            throw std::runtime_error("Invalid scan pattern");
        for (auto byte : pattern.mask) if (byte > 1) throw std::runtime_error("Invalid scan mask");
        pattern.fixups.resize(reader.count(100000));
        for (auto &fixup : pattern.fixups) {
            fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            const auto kind = fixup.kind & 0xff;
            const auto access_width = fixup.kind >> 16;
            if ((fixup.width != 1 && fixup.width != 4 && fixup.width != 8) || kind > 2 ||
                ((fixup.kind & 0xffff) & ~0x103u) ||
                (access_width && (catalog.schema < 4 || access_width > 64 ||
                    (access_width & (access_width - 1)) || (fixup.kind & 0x100) || kind != 0)) ||
                uint64_t(fixup.offset) + fixup.width > pattern.raw.size() || fixup.next > pattern.raw.size() ||
                (kind == 1 && fixup.width != 4) || (kind == 2 && fixup.width != 8))
                throw std::runtime_error("Invalid address operand");
        }
        if ((pattern.flags & 32u) && (!pattern.fixups.empty() || pattern.raw.size() < 5 ||
                pattern.raw.back() != 0 || std::find(pattern.raw.begin(), std::prev(pattern.raw.end()), 0) != std::prev(pattern.raw.end()) ||
                std::find(pattern.mask.begin(), pattern.mask.end(), 1) != pattern.mask.end()))
            throw std::runtime_error("Invalid immutable root identity");
    }
    catalog.vtables.resize(reader.count(100000));
    for (auto &table : catalog.vtables) {
        table.reference = reader.number();
        if (catalog.schema >= 4) table.flags = reader.number();
        table.name = reader.string();
        table.slots.resize(reader.count(4096));
        for (auto &slot : table.slots) slot = reader.number();
        if (!table.reference || table.name.empty() || table.slots.empty() ||
                (table.flags & ~3u) || ((table.flags & 2) && !(table.flags & 1)) ||
                ((table.flags & 1) && table.slots.size() != 1))
            throw std::runtime_error("Invalid RTTI anchor");
    }
    catalog.imports.resize(reader.count(100000));
    for (auto &entry : catalog.imports) {
        entry.reference = reader.number(); entry.library = reader.string(); entry.symbol = reader.string();
    }
    if (catalog.schema >= 2) {
        catalog.field_specs.resize(reader.count());
        std::set<std::pair<uint32_t, uint32_t>> identities;
        for (auto &field : catalog.field_specs) {
            field = {reader.number(), reader.number(), reader.number(), reader.number()};
            if (!field.object || !field.width || uint64_t(field.object) + field.offset + field.width > UINT32_MAX ||
                    (field.flags & ~7u) || !identities.emplace(field.object, field.offset).second)
                throw std::runtime_error("Invalid native field specification");
        }
        auto ordered = catalog.field_specs;
        std::sort(ordered.begin(), ordered.end(), [](const auto &left, const auto &right) {
            return uint64_t(left.object) + left.offset < uint64_t(right.object) + right.offset;
        });
        for (size_t index = 1; index < ordered.size(); ++index)
            if (uint64_t(ordered[index - 1].object) + ordered[index - 1].offset + ordered[index - 1].width >
                    uint64_t(ordered[index].object) + ordered[index].offset)
                throw std::runtime_error("Overlapping native field specifications");
    }
    if (catalog.schema >= 3) {
        // This aggregate contains thousands of typed functions; the 16 MiB
        // limit remains appropriate for one pattern, not the whole catalog.
        // Reader's 128 MiB total file limit still bounds the combined seed.
        catalog.history_semantics = reader.blob(96 * 1024 * 1024);
        catalog.graphics_tokens = reader.blob();
    }
    if (catalog.schema >= 5) catalog.display_scopes = reader.blob();
    if (catalog.schema >= 6) catalog.frame_semantics = reader.blob(64 * 1024 * 1024);
    if (catalog.schema >= 7) catalog.method_calls = reader.blob();
    if (catalog.schema >= 8) catalog.inline_resizes = reader.blob();
    if (catalog.schema >= 9) catalog.callable_search = reader.blob();
    if (catalog.schema >= 10) catalog.text_draws = reader.blob();
    if (catalog.schema >= 11) catalog.workshop_recipes = reader.blob();
    if (catalog.schema >= 12) catalog.chooser_features = reader.blob();
    if (catalog.schema >= 13) catalog.optional_panels = reader.blob();
    reader.finish();
    return catalog;
}

inline Catalog load_catalog(const std::filesystem::path &path) {
    return load_catalog(Reader(path));
}

inline State scan(const Image &image, const Catalog &catalog, const address_runtime::Progress &report = {}) {
    if (report) report("Native discovery: reading image-pinned semantic declarations");
    const auto declared = catalog.schema >= 3
        ? native_history_abi::target_layout(image, catalog.history_semantics)
        : address_runtime::InitialEvidence{};
    auto result = address_runtime::scan(image, catalog, {
        {0x0264a3f0, static_cast<uint32_t>(sizeof(graphicst))},
        {0x023cd770, 0x3958},
        {0x02390290, 0x360},
    }, false, catalog.field_specs, catalog.schema >= 2, declared, report);
    auto literal_scopes = discover_literal_scopes(image, catalog, result, report);
    global_value_detail::Cache<Image, Catalog> global_values(image, catalog);
    const auto variable_callers = [&](const Progress &output) {
        global_values.refresh(result);
        discover_variable_call_boundaries(image, catalog, result, output, &global_values);
    };
    const auto covered_code = [](const State &state) {
        uint64_t covered = 0;
        for (const auto &range : state.ranges) covered += uint64_t(range.end) - range.begin;
        return covered;
    };
    for (size_t round = 1;; ++round) {
        const auto previous_scopes = result.function_owners.size();
        const auto previous_coverage = covered_code(result);
        if (report) report("Native discovery: resolving caller contexts, round " + std::to_string(round));
        const auto typed_scopes = discover_typed_receiver_scopes(image, catalog, result, report);
        literal_scopes.insert(typed_scopes.begin(), typed_scopes.end());
        discover_owned_entry_prefixes(image, catalog, result, report, literal_scopes);
        discover_argument_guards(image, catalog, result, report);
        discover_call_boundaries(image, catalog, result, report);
        variable_callers(report);
        // Each pass only adds proved entries or instruction boundaries. New
        // caller identities can authorize another context on the next pass.
        if (result.function_owners.size() == previous_scopes && covered_code(result) == previous_coverage) break;
    }
    // Later typed/frame/feature passes can publish identities needed by an
    // earlier pass. Remember the last ordinary caller fixed point, not the
    // final number of unresolved resources.
    auto dependency_generation = std::make_pair(covered_code(result), result.function_owners.size());
    auto semantic_scopes = result.function_owners.size();
    std::set<std::string> semantic_diagnostics;
    const auto refresh_semantics = [&](const Progress &output) {
        auto semantic = native_history_abi::discover(image, result, catalog.history_semantics);
        for (const auto &diagnostic : semantic.diagnostics) {
            if (!semantic_diagnostics.insert(diagnostic).second) continue;
            if (!result.message.empty()) result.message += "; ";
            result.message += diagnostic;
            if (output) output("Native discovery: " + diagnostic);
        }
        result.semantic_fields = std::move(semantic.fields);
        result.semantic_methods = std::move(semantic.methods);
        result.semantic_types = std::move(semantic.types);
        result.semantic_enums = std::move(semantic.enums);
        result.missing_semantic_fields = std::move(semantic.missing_fields);
        result.missing_semantic_methods = std::move(semantic.missing_methods);
        semantic_scopes = result.function_owners.size();
    };
    if (catalog.schema >= 3) {
        if (report) report("Native discovery: finalizing graphics token layout");
        discover_graphics_tokens(image, catalog.graphics_tokens, result);
        if (report) report("Native discovery: finalizing semantic fields and method ABI");
        refresh_semantics(report);
    }
    if (!result.semantic_fields.empty() && catalog.schema >= 6) {
        const auto frames = frame_detail::read(catalog.frame_semantics);
        const bool typed_callers = !frames.receiver_sites.empty() || !frames.receiver_aliases.empty() ||
            (!frames.typed_source_graphs.empty() && !frames.typed_members.empty()) ||
            std::any_of(frames.blocks.begin(), frames.blocks.end(),
                [](const auto &block) { return !block.members.empty(); });
        if (typed_callers) for (size_t round = 1;; ++round) {
            const auto previous_scopes = result.function_owners.size();
            const auto previous_coverage = covered_code(result);
            if (report) report("Native discovery: resolving typed caller contexts, round " + std::to_string(round));
            const auto typed_scopes = discover_typed_receiver_scopes(image, catalog, result, report);
            literal_scopes.insert(typed_scopes.begin(), typed_scopes.end());
            discover_owned_entry_prefixes(image, catalog, result, report, literal_scopes);
            discover_typed_members(image, catalog, result, frames, report);
            if (catalog.schema >= 10) discover_text_draws(image, catalog, result, report);
            discover_call_boundaries(image, catalog, result, report);
            variable_callers(report);
            if (result.function_owners.size() == previous_scopes && covered_code(result) == previous_coverage) break;
        }
    }
    if (catalog.schema >= 6) for (size_t round = 1;; ++round) {
        const auto previous_scopes = result.function_owners.size();
        const auto previous_coverage = covered_code(result);
        const auto previous_operands = result.frame_operands.size();
        if (report) report("Native discovery: resolving frame and caller graph, round " + std::to_string(round));
        discover_frame_operands(image, catalog.frame_semantics, result, report);
        if (catalog.schema >= 10) discover_text_draws(image, catalog, result, report);
        if (catalog.schema >= 8) discover_inline_resizes(image, catalog, result, report);
        if (covered_code(result) != previous_coverage) {
            discover_call_boundaries(image, catalog, result, report);
            variable_callers(report);
        }
        if (result.function_owners.size() == previous_scopes && covered_code(result) == previous_coverage &&
                result.frame_operands.size() == previous_operands) break;
    }
    std::set<std::string> closure_diagnostics;
    Progress closure_report;
    if (report) closure_report = [&](const std::string &message) {
        if (closure_diagnostics.insert(message).second) report(message);
    };
    std::unique_ptr<frame_detail::Evidence> closure_frames;
    bool closure_typed_callers = false;
    for (size_t round = 1;; ++round) {
        // Method discovery clears absence certificates. Rebuild inline
        // bindings next, then every feature certificate that owns them.
        if (catalog.schema >= 7) discover_method_calls(image, catalog.method_calls, result, closure_report);
        if (catalog.schema >= 8) discover_inline_resizes(image, catalog, result, closure_report);
        if (catalog.schema >= 12) discover_chooser_features(image, catalog, result, closure_report);
        if (catalog.schema >= 12) discover_chooser_rows(image, catalog, result, closure_report);
        if (catalog.schema >= 9) discover_callable_searches(image, catalog, result, closure_report);
        if (catalog.schema >= 11) discover_workshop_recipes(image, catalog, result, closure_report);
        if (catalog.schema >= 13) discover_optional_panels(image, catalog, result, closure_report);
        const auto current = std::make_pair(covered_code(result), result.function_owners.size());
        if (current.first <= dependency_generation.first && current.second <= dependency_generation.second) break;
        // Take the snapshot before retrying: identities published by this
        // sweep must themselves reach every earlier consumer on the next one.
        dependency_generation = current;
        if (report) report("Native discovery: resolving cross-stage dependencies, round " + std::to_string(round));
        // Refresh before every consumer, including typed receiver scopes.
        // New scopes can supply fields; unresolved enum/type contracts also
        // consume call/case identities. The ordered feature passes above run
        // once more after this sweep before the next no-growth decision.
        if (catalog.schema >= 3 && (result.function_owners.size() > semantic_scopes ||
                !result.missing_semantic_fields.empty() || !result.missing_semantic_methods.empty()))
            refresh_semantics(closure_report);
        const auto typed_scopes = discover_typed_receiver_scopes(image, catalog, result, closure_report);
        literal_scopes.insert(typed_scopes.begin(), typed_scopes.end());
        discover_owned_entry_prefixes(image, catalog, result, closure_report, literal_scopes);
        discover_argument_guards(image, catalog, result, closure_report);
        discover_call_boundaries(image, catalog, result, closure_report);
        variable_callers(closure_report);
        if (catalog.schema >= 6) {
            if (!closure_frames) {
                closure_frames = std::make_unique<frame_detail::Evidence>(frame_detail::read(catalog.frame_semantics));
                closure_typed_callers = !closure_frames->receiver_sites.empty() || !closure_frames->receiver_aliases.empty() ||
                    (!closure_frames->typed_source_graphs.empty() && !closure_frames->typed_members.empty()) ||
                    std::any_of(closure_frames->blocks.begin(), closure_frames->blocks.end(),
                        [](const auto &block) { return !block.members.empty(); });
            }
            if (closure_typed_callers && !result.semantic_fields.empty())
                discover_typed_members(image, catalog, result, *closure_frames, closure_report);
            if (catalog.schema >= 10) discover_text_draws(image, catalog, result, closure_report);
            discover_frame_operands(image, catalog.frame_semantics, result, closure_report);
        }
        discover_call_boundaries(image, catalog, result, closure_report);
        variable_callers(closure_report);
    }
    if (catalog.schema >= 5) {
        if (report) report("Native discovery: decoding target display selectors");
        discover_display_inputs(image, catalog.display_scopes, result);
    }
    discover_output_regions(image, catalog, result, report);
    discover_entry_prefixes(image, result, report);
    if (report) report("Native discovery: assembling required address and layout resources");
    complete_state(result, catalog);
    result.validated = true;
    return result;
}

inline void write_number(std::ostream &output, uint32_t value) {
    output.write(reinterpret_cast<const char *>(&value), sizeof(value));
}
inline void write_bindings(std::ostream &output, const State &state) {
    write_number(output, static_cast<uint32_t>(state.ranges.size()));
    for (const auto &range : state.ranges) {
        write_number(output, range.begin); write_number(output, range.end); write_number(output, range.native);
    }
    write_number(output, static_cast<uint32_t>(state.bytes.size()));
    for (const auto &byte : state.bytes) {
        write_number(output, byte.address); output.put(static_cast<char>(byte.reference)); output.put(static_cast<char>(byte.native));
    }
}

inline void read_fields(Reader &reader, State &state) {
    state.fields.resize(reader.count());
    for (auto &field : state.fields) {
        field = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
        if (!field.object || !field.width || field.sources < 2 || (field.flags & ~7u) ||
                uint64_t(field.object) + field.offset + field.width > UINT32_MAX ||
                uint64_t(field.native_offset) + field.width > state.size)
            throw std::runtime_error("Invalid cached native field binding");
    }
    state.function_owners.resize(reader.count());
    uint32_t previous = 0;
    for (auto &owner : state.function_owners) {
        owner = {reader.number(), reader.number(), reader.number()};
        if (!owner.begin || owner.begin <= previous || owner.end != uint64_t(owner.begin) + 1 ||
                !owner.native || owner.native >= state.size)
            throw std::runtime_error("Invalid cached function scope");
        previous = owner.begin;
    }
    state.semantic_fields.resize(reader.count());
    std::set<uint64_t> identities;
    for (auto &field : state.semantic_fields) {
        field = {reader.number(), reader.number(), reader.number(), reader.number()};
        if (!field.type || !field.member || !field.size || uint64_t(field.offset) + field.size > UINT32_MAX ||
                !identities.insert(native_history_abi::key(field.type, field.member)).second)
            throw std::runtime_error("Invalid cached semantic field");
    }
    state.semantic_methods.resize(reader.count());
    identities.clear();
    for (auto &method : state.semantic_methods) {
        method = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
        if (!method.type || !method.method || method.slot % 8 || method.slot > 65536 ||
                !method.parameter_shape || method.argument_count > 32 ||
                !identities.insert(native_history_abi::key(method.type, method.method)).second)
            throw std::runtime_error("Invalid cached semantic method");
    }
    state.semantic_types.resize(reader.count());
    identities.clear();
    for (auto &type : state.semantic_types) {
        type = {reader.number(), reader.number(), reader.number()};
        if (!type.type || !type.size || !type.alignment || (type.alignment & (type.alignment - 1)) ||
                type.alignment > 4096 || !identities.insert(type.type).second)
            throw std::runtime_error("Invalid cached semantic type");
    }
    state.semantic_enums.resize(reader.count());
    identities.clear();
    for (auto &value : state.semantic_enums) {
        value = {reader.number(), reader.number(), static_cast<int32_t>(reader.number())};
        if (!value.type || !value.token || !identities.insert(native_history_abi::key(value.type, value.token)).second)
            throw std::runtime_error("Invalid cached semantic enum token");
    }
    for (auto *missing : {&state.missing_semantic_fields, &state.missing_semantic_methods}) {
        missing->resize(reader.count());
        for (auto &identity : *missing) {
            const auto low = reader.number(), high = reader.number();
            identity = (uint64_t(high) << 32) | low;
            // A missing construction extent uses (type, 0); methods always
            // require a nonzero method identity.
            if (!high || (!low && missing == &state.missing_semantic_methods))
                throw std::runtime_error("Invalid cached missing semantic identity");
        }
    }
    state.missing_graphics_tokens.resize(reader.count());
    for (auto &identity : state.missing_graphics_tokens) {
        const auto low = reader.number(), high = reader.number();
        identity = (uint64_t(high) << 32) | low;
        if (!high) throw std::runtime_error("Invalid cached missing graphics token identity");
    }
    state.absent_types.resize(reader.count());
    previous = 0;
    for (auto &reference : state.absent_types) {
        reference = reader.number();
        if (!reference || reference <= previous) throw std::runtime_error("Invalid cached absent native type");
        previous = reference;
    }
    state.absent_fields.resize(reader.count());
    uint64_t previous_field = 0;
    for (auto &identity : state.absent_fields) {
        const auto low = reader.number(), high = reader.number(); identity = (uint64_t(high) << 32) | low;
        if (!high || identity <= previous_field) throw std::runtime_error("Invalid cached absent native field");
        previous_field = identity;
    }
    state.display_sites.resize(reader.count(100000));
    previous = 0;
    for (auto &site : state.display_sites) {
        site.address = reader.number(); site.field = reader.number(); site.target = reader.number();
        site.displacement = reader.number(); site.flags = reader.number(); site.instruction = reader.blob(15);
        if (!site.address || site.address <= previous || site.instruction.size() < 6 || site.displacement < 2 ||
                site.displacement + 4 > site.instruction.size() || (site.flags & ~1u) ||
                uint64_t(site.address) + site.instruction.size() > state.size || site.target >= state.size)
            throw std::runtime_error("Invalid cached display selector");
        previous = site.address;
    }
    state.missing_display_scopes.resize(reader.count(4096));
    for (auto &reference : state.missing_display_scopes) reference = reader.number();
    state.frame_operands.resize(reader.count(65536));
    previous = 0;
    for (auto &operand : state.frame_operands) {
        operand = {reader.number(), reader.number(), reader.number(), static_cast<int32_t>(reader.number()), reader.number()};
        if (!operand.reference || operand.reference <= previous || !operand.owner || operand.owner >= state.size || !operand.native_instruction ||
                operand.native_instruction >= state.size || operand.access_width > 32)
            throw std::runtime_error("Invalid cached frame operand");
        previous = operand.reference;
    }
    state.missing_frame_operands.resize(reader.count(65536));
    for (auto &reference : state.missing_frame_operands) reference = reader.number();
    state.missing_method_calls.resize(reader.count(65536));
    for (auto &reference : state.missing_method_calls) reference = reader.number();
    state.proven_method_calls.resize(reader.count(65536));
    previous = 0;
    for (auto &reference : state.proven_method_calls) {
        reference = reader.number();
        if (!reference || reference <= previous) throw std::runtime_error("Invalid cached virtual call proof");
        previous = reference;
    }
    state.absent_features.resize(reader.count(65536));
    previous = 0;
    for (auto &feature : state.absent_features) {
        feature = reader.number();
        if (!feature || feature <= previous) throw std::runtime_error("Invalid cached absent feature");
        previous = feature;
    }
    state.absent_spans.resize(reader.count(65536));
    previous = 0;
    for (auto &span : state.absent_spans) {
        span = {reader.number(), reader.number(), reader.number()};
        if (!span.begin || span.begin < previous || span.end <= span.begin || span.native)
            throw std::runtime_error("Invalid cached absent feature span");
        previous = span.end;
    }
    state.inline_resizes.resize(reader.count(65536));
    previous = 0;
    for (auto &resize : state.inline_resizes) {
        resize = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number(),
            static_cast<int32_t>(reader.number()), reader.number()};
        if (!resize.reference || resize.reference <= previous || !resize.owner || resize.owner >= state.size ||
                !resize.native_instruction || !resize.length || resize.length > 128 ||
                uint64_t(resize.native_instruction) + resize.length > state.size ||
                resize.frame_register > 15 || resize.width_register > 15 || (resize.flags & ~31u) ||
                !inline_resize_detail::valid_forms(resize.flags))
            throw std::runtime_error("Invalid cached inline string resize");
        previous = resize.reference;
    }
    state.missing_inline_resizes.resize(reader.count(65536));
    for (auto &reference : state.missing_inline_resizes) reference = reader.number();
    state.callable_searches.resize(reader.count(65536));
    previous = 0;
    for (auto &search : state.callable_searches) {
        search = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number(),
            reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
        if (!search.contract || search.contract <= previous || !search.predicate || search.predicate >= state.size ||
                !search.invoker_call || uint64_t(search.invoker_call) + 5 > state.size ||
                !search.fold_call || uint64_t(search.fold_call) + 5 > state.size ||
                !search.name_find || uint64_t(search.name_find) + 5 > state.size ||
                !search.job_find || uint64_t(search.job_find) + 5 > state.size ||
                !search.query_fold || uint64_t(search.query_fold) + 5 > state.size ||
                !search.fold_target || search.fold_target >= state.size ||
                !search.find_target || search.find_target >= state.size || !search.argument_shape)
            throw std::runtime_error("Invalid cached callable search contract");
        previous = search.contract;
    }
    state.missing_callable_searches.resize(reader.count(65536));
    for (auto &reference : state.missing_callable_searches) reference = reader.number();
    state.workshop_recipes.resize(reader.count(65536));
    previous = 0;
    for (auto &recipe : state.workshop_recipes) {
        recipe = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), {}};
        recipe.paragraph_calls.resize(reader.count(65536));
        uint32_t previous_call = 0;
        for (auto &call : recipe.paragraph_calls) {
            call = reader.number();
            if (!call || call <= previous_call || uint64_t(call) + 5 > state.size)
                throw std::runtime_error("Invalid cached workshop paragraph call");
            previous_call = call;
        }
        if (!recipe.contract || recipe.contract <= previous || !recipe.owner || recipe.owner >= state.size ||
                (recipe.mode != 1 && recipe.mode != 2) || !recipe.width ||
                !recipe.paragraph_target || recipe.paragraph_target >= state.size)
            throw std::runtime_error("Invalid cached workshop recipe contract");
        previous = recipe.contract;
    }
    state.missing_workshop_recipes.resize(reader.count(65536));
    for (auto &reference : state.missing_workshop_recipes) reference = reader.number();
    state.output_regions.resize(reader.count(65536));
    for (auto &region : state.output_regions) {
        region = {reader.number(), reader.number(), reader.number(), reader.number(),
            reader.number(), reader.number(), reader.number(), reader.number()};
    }
    complete_output_regions(state);
    state.entry_prefixes.resize(reader.count(16));
    uint32_t previous_entry = 0;
    for (auto &entry : state.entry_prefixes) {
        entry.reference = reader.number(); entry.native = reader.number();
        entry.end = reader.number(); entry.unwind = reader.number();
        entry.table_reference = reader.number(); entry.table = reader.number();
        entry.type = reader.number(); entry.method = reader.number();
        entry.slot = reader.number(); entry.parameter_shape = reader.number(); entry.argument_count = reader.number();
        const auto base_low = reader.number(), base_high = reader.number();
        entry.preferred_base = uint64_t(base_low) | (uint64_t(base_high) << 32);
        entry.prefix = reader.blob(32);
        if (entry.reference <= previous_entry) throw std::runtime_error("Unordered cached entry CFG contract");
        previous_entry = entry.reference;
        entry.evidence.resize(reader.count(1000000));
        uint32_t previous_end = 0;
        size_t total = 0;
        bool owns_prefix = false;
        for (auto &span : entry.evidence) {
            span.address = reader.number(); span.bytes = reader.blob(16u * 1024u * 1024u);
            total += span.bytes.size();
            if (span.bytes.empty() || span.address < previous_end ||
                    uint64_t(span.address) + span.bytes.size() > state.size || total > 16u * 1024u * 1024u)
                throw std::runtime_error("Invalid cached entry CFG dependency span");
            previous_end = span.address + static_cast<uint32_t>(span.bytes.size());
            if (span.address <= entry.native && uint64_t(entry.native) + entry.prefix.size() <= previous_end) {
                owns_prefix = std::equal(entry.prefix.begin(), entry.prefix.end(), span.bytes.begin() + entry.native - span.address);
            }
        }
        entry.relocations.resize(reader.count(1000000));
        uint32_t previous_relocation_end = 0;
        for (auto &[address, value] : entry.relocations) {
            address = reader.number();
            const auto low = reader.number(), high = reader.number();
            value = uint64_t(low) | (uint64_t(high) << 32);
            if (!address || address < previous_relocation_end || uint64_t(address) + 8 > state.size)
                throw std::runtime_error("Invalid cached entry CFG relocation");
            previous_relocation_end = address + 8;
        }
        entry.imported_tail_slots.resize(reader.count(1));
        for (auto &slot : entry.imported_tail_slots) slot = reader.number();
        if (!owns_prefix || !entry_prefix_detail::contract(state, entry))
            throw std::runtime_error("Invalid cached entry CFG identity or prefix");
    }
}
inline void write_fields(std::ostream &output, const State &state) {
    write_number(output, static_cast<uint32_t>(state.fields.size()));
    for (const auto &field : state.fields) {
        write_number(output, field.object); write_number(output, field.offset); write_number(output, field.native_offset);
        write_number(output, field.width); write_number(output, field.sources); write_number(output, field.flags);
    }
    write_number(output, static_cast<uint32_t>(state.function_owners.size()));
    for (const auto &owner : state.function_owners) {
        write_number(output, owner.begin); write_number(output, owner.end); write_number(output, owner.native);
    }
    write_number(output, static_cast<uint32_t>(state.semantic_fields.size()));
    for (const auto &field : state.semantic_fields) {
        write_number(output, field.type); write_number(output, field.member);
        write_number(output, field.offset); write_number(output, field.size);
    }
    write_number(output, static_cast<uint32_t>(state.semantic_methods.size()));
    for (const auto &method : state.semantic_methods) {
        write_number(output, method.type); write_number(output, method.method); write_number(output, method.slot);
        write_number(output, method.parameter_shape); write_number(output, method.argument_count);
    }
    write_number(output, static_cast<uint32_t>(state.semantic_types.size()));
    for (const auto &type : state.semantic_types) {
        write_number(output, type.type); write_number(output, type.size); write_number(output, type.alignment);
    }
    write_number(output, static_cast<uint32_t>(state.semantic_enums.size()));
    for (const auto &value : state.semantic_enums) {
        write_number(output, value.type); write_number(output, value.token);
        write_number(output, static_cast<uint32_t>(value.value));
    }
    for (const auto *missing : {&state.missing_semantic_fields, &state.missing_semantic_methods}) {
        write_number(output, static_cast<uint32_t>(missing->size()));
        for (auto identity : *missing) {
            write_number(output, static_cast<uint32_t>(identity));
            write_number(output, static_cast<uint32_t>(identity >> 32));
        }
    }
    write_number(output, static_cast<uint32_t>(state.missing_graphics_tokens.size()));
    for (auto identity : state.missing_graphics_tokens) {
        write_number(output, static_cast<uint32_t>(identity));
        write_number(output, static_cast<uint32_t>(identity >> 32));
    }
    write_number(output, static_cast<uint32_t>(state.absent_types.size()));
    for (auto reference : state.absent_types) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.absent_fields.size()));
    for (auto identity : state.absent_fields) {
        write_number(output, static_cast<uint32_t>(identity)); write_number(output, static_cast<uint32_t>(identity >> 32));
    }
    write_number(output, static_cast<uint32_t>(state.display_sites.size()));
    for (const auto &site : state.display_sites) {
        write_number(output, site.address); write_number(output, site.field); write_number(output, site.target);
        write_number(output, site.displacement); write_number(output, site.flags);
        write_number(output, static_cast<uint32_t>(site.instruction.size()));
        output.write(reinterpret_cast<const char *>(site.instruction.data()), site.instruction.size());
    }
    write_number(output, static_cast<uint32_t>(state.missing_display_scopes.size()));
    for (auto reference : state.missing_display_scopes) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.frame_operands.size()));
    for (const auto &operand : state.frame_operands) {
        write_number(output, operand.reference); write_number(output, operand.owner);
        write_number(output, operand.native_instruction); write_number(output, static_cast<uint32_t>(operand.stack_offset));
        write_number(output, operand.access_width);
    }
    write_number(output, static_cast<uint32_t>(state.missing_frame_operands.size()));
    for (auto reference : state.missing_frame_operands) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.missing_method_calls.size()));
    for (auto reference : state.missing_method_calls) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.proven_method_calls.size()));
    for (auto reference : state.proven_method_calls) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.absent_features.size()));
    for (auto feature : state.absent_features) write_number(output, feature);
    write_number(output, static_cast<uint32_t>(state.absent_spans.size()));
    for (const auto &span : state.absent_spans) {
        write_number(output, span.begin); write_number(output, span.end); write_number(output, span.native);
    }
    write_number(output, static_cast<uint32_t>(state.inline_resizes.size()));
    for (const auto &resize : state.inline_resizes) {
        write_number(output, resize.reference); write_number(output, resize.owner);
        write_number(output, resize.native_instruction); write_number(output, resize.length);
        write_number(output, resize.frame_register); write_number(output, resize.width_register);
        write_number(output, static_cast<uint32_t>(resize.object_displacement)); write_number(output, resize.flags);
    }
    write_number(output, static_cast<uint32_t>(state.missing_inline_resizes.size()));
    for (auto reference : state.missing_inline_resizes) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.callable_searches.size()));
    for (const auto &search : state.callable_searches) {
        write_number(output, search.contract); write_number(output, search.predicate);
        write_number(output, search.invoker_call); write_number(output, search.fold_call);
        write_number(output, search.name_find); write_number(output, search.job_find); write_number(output, search.query_fold);
        write_number(output, search.fold_target); write_number(output, search.find_target);
        write_number(output, search.argument_shape); write_number(output, search.capture_offset);
    }
    write_number(output, static_cast<uint32_t>(state.missing_callable_searches.size()));
    for (auto reference : state.missing_callable_searches) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.workshop_recipes.size()));
    for (const auto &recipe : state.workshop_recipes) {
        write_number(output, recipe.contract); write_number(output, recipe.owner);
        write_number(output, recipe.mode); write_number(output, recipe.width); write_number(output, recipe.paragraph_target);
        write_number(output, static_cast<uint32_t>(recipe.paragraph_calls.size()));
        for (auto call : recipe.paragraph_calls) write_number(output, call);
    }
    write_number(output, static_cast<uint32_t>(state.missing_workshop_recipes.size()));
    for (auto reference : state.missing_workshop_recipes) write_number(output, reference);
    write_number(output, static_cast<uint32_t>(state.output_regions.size()));
    for (const auto &region : state.output_regions) {
        write_number(output, region.owner); write_number(output, region.begin);
        write_number(output, region.end); write_number(output, region.callee);
        write_number(output, region.native_owner); write_number(output, region.native_begin);
        write_number(output, region.native_end); write_number(output, region.native_callee);
    }
    write_number(output, static_cast<uint32_t>(state.entry_prefixes.size()));
    for (const auto &entry : state.entry_prefixes) {
        write_number(output, entry.reference); write_number(output, entry.native);
        write_number(output, entry.end); write_number(output, entry.unwind);
        write_number(output, entry.table_reference); write_number(output, entry.table);
        write_number(output, entry.type); write_number(output, entry.method);
        write_number(output, entry.slot); write_number(output, entry.parameter_shape); write_number(output, entry.argument_count);
        write_number(output, static_cast<uint32_t>(entry.preferred_base));
        write_number(output, static_cast<uint32_t>(entry.preferred_base >> 32));
        write_number(output, static_cast<uint32_t>(entry.prefix.size()));
        output.write(reinterpret_cast<const char *>(entry.prefix.data()), static_cast<std::streamsize>(entry.prefix.size()));
        write_number(output, static_cast<uint32_t>(entry.evidence.size()));
        for (const auto &span : entry.evidence) {
            write_number(output, span.address); write_number(output, static_cast<uint32_t>(span.bytes.size()));
            output.write(reinterpret_cast<const char *>(span.bytes.data()), static_cast<std::streamsize>(span.bytes.size()));
        }
        write_number(output, static_cast<uint32_t>(entry.relocations.size()));
        for (const auto &[address, value] : entry.relocations) {
            write_number(output, address); write_number(output, static_cast<uint32_t>(value));
            write_number(output, static_cast<uint32_t>(value >> 32));
        }
        write_number(output, static_cast<uint32_t>(entry.imported_tail_slots.size()));
        for (const auto slot : entry.imported_tail_slots) write_number(output, slot);
    }
}
inline bool complete_state(State &state, const Catalog &catalog) {
    complete_frame_operands(state, catalog.frame_semantics);
    complete_chooser_features(state, catalog.chooser_features, catalog.inline_resizes);
    complete_chooser_rows(state, catalog.chooser_features, catalog.inline_resizes);
    auto features = workshop_recipe_detail::absence_contracts(catalog.workshop_recipes);
    const auto chooser = chooser_feature_detail::absence_contracts(catalog.chooser_features);
    features.insert(features.end(), chooser.begin(), chooser.end());
    const auto panels = optional_panel_detail::absence_contracts(catalog.optional_panels);
    features.insert(features.end(), panels.begin(), panels.end());
    complete_method_calls(state, catalog.method_calls, features);
    complete_inline_resizes(state, catalog.inline_resizes);
    complete_callable_searches(state, catalog.callable_search);
    complete_workshop_recipes(state, catalog.workshop_recipes);
    for (auto reference : state.absent_types) {
        const auto table = std::find_if(catalog.vtables.begin(), catalog.vtables.end(), [&](const auto &value) {
            return value.reference == reference;
        });
        if (table == catalog.vtables.end() || !(table->flags & 1) || table->slots.size() != 1 ||
                resolve(state.ranges, reference))
            throw std::runtime_error("Absent native type is not an identity-only resource");
    }
    complete_spans(state, catalog);
    complete_fields(state, catalog.field_specs);
    const bool output_complete = complete_output_regions(state);
    state.complete = state.complete && output_complete;
    return state.complete;
}

inline size_t known_profile_index(const Image &image, const Catalog &catalog) {
    for (size_t index = 0; index < catalog.known.size(); ++index) {
        const auto &profile = catalog.known[index];
        if (image.digest == profile.digest && image.timestamp == profile.timestamp && image.size == profile.size)
            return index;
    }
    return catalog.known.size();
}

// Both the normal address-data compiler and the running core produce the
// consumed ABI bindings from the same reviewed image identity and metadata.
// Return incomplete evidence to the caller so production diagnostics retain
// every unresolved resource instead of silently accepting a packaged SHA.
inline State prepare_known(Image &image, const Catalog &catalog, size_t index,
                           const address_runtime::Progress &report = {}) {
    if (index >= catalog.known.size() || known_profile_index(image, catalog) != index)
        throw std::runtime_error("Packaged address data does not own this executable");
    const auto &profile = catalog.known[index];
    State state;
    state.size = image.size;
    state.edition = static_cast<unsigned>(index + 1);
    state.ranges = profile.ranges;
    state.bytes = profile.bytes;
    for (const auto &field : catalog.field_specs) {
        const auto root = resolve(state.ranges, field.object);
        const auto address = resolve(state.ranges, field.object + field.offset);
        // The two reviewed images own the compiled baseline ABI. Their
        // required-resource maps need not enumerate each graphics member.
        const auto baseline_extent = field.object == 0x0264a3f0 ? sizeof(graphicst) :
            field.object == 0x023cd770 ? size_t(0x3958) : field.object == 0x02390290 ? size_t(0x360) : 0;
        if ((state.edition == 1 || state.edition == 2) && baseline_extent && root &&
                uint64_t(field.offset) + field.width <= baseline_extent &&
                uint64_t(root) + field.offset + field.width <= state.size &&
                image.section(root + field.offset, field.width)) {
            state.fields.push_back({field.object, field.offset, field.offset, field.width, UINT32_MAX, field.flags});
            continue;
        }
        const auto end = resolve(state.ranges, field.object + field.offset + field.width - 1);
        if (root && address >= root && end == uint64_t(address) + field.width - 1)
            state.fields.push_back({field.object, field.offset, address - root, field.width, UINT32_MAX, field.flags});
    }
    // Reviewed coordinates still require actual unwind/function scopes for
    // the consumed frame, named-call and inline-operation contracts.
    image.prepare_scan();
    if (catalog.schema >= 6) {
        if (report) report("Native discovery: preparing consumed ABI contracts for " + profile.label);
        discover_frame_operands(image, catalog.frame_semantics, state, report);
    }
    if (catalog.schema >= 7) discover_method_calls(image, catalog.method_calls, state, report);
    if (catalog.schema >= 8) discover_inline_resizes(image, catalog, state, report);
    if (catalog.schema >= 12) discover_chooser_features(image, catalog, state, report);
    if (catalog.schema >= 12) discover_chooser_rows(image, catalog, state, report);
    if (catalog.schema >= 9) discover_callable_searches(image, catalog, state, report);
    if (catalog.schema >= 11) discover_workshop_recipes(image, catalog, state, report);
    if (catalog.schema >= 13) discover_optional_panels(image, catalog, state, report);
    discover_output_regions(image, catalog, state, report);
    complete_state(state, catalog);
    state.validated = true;
    state.message = "Game address table: " + profile.label;
    return state;
}

// Windows unloads the core on Shift+F5 reactivation. Keep only a sealed byte
// snapshot in an OS mapping, never a core-owned object, pointer or callback.
// One successfully published handle deliberately lives until process exit;
// every subsequent core closes its own temporary handle and mapped views.
class ProcessCache {
    struct Handle {
        HANDLE value = nullptr;
        ~Handle() { if (value) CloseHandle(value); }
    };
    struct View {
        void *value = nullptr;
        ~View() { if (value) UnmapViewOfFile(value); }
    };
    std::wstring name_;
    uintptr_t base_;
    uint32_t timestamp_, size_;
    static constexpr uint32_t maximum_size = 128 * 1024 * 1024;
public:
    ProcessCache(uintptr_t base, uint32_t timestamp, uint32_t size,
                 const std::array<unsigned char, 32> &seed)
        : base_(base), timestamp_(timestamp), size_(size) {
        FILETIME birth{}, exit{}, kernel{}, user{};
        if (!GetProcessTimes(GetCurrentProcess(), &birth, &exit, &kernel, &user)) return;
        const uint64_t created = (uint64_t(birth.dwHighDateTime) << 32) | birth.dwLowDateTime;
        const auto digest = hex_digest(seed);
        // Bump this revision when discovery rules or the snapshot format change.
        name_ = L"Local\\DFCN.NativeAddresses." + std::to_wstring(discovery_revision) + L"." +
            std::to_wstring(GetCurrentProcessId()) + L"." +
            std::to_wstring(created) + L"." + std::to_wstring(base_) + L"." +
            std::to_wstring(timestamp_) + L"." + std::to_wstring(size_) + L"." +
            std::wstring(digest.begin(), digest.end());
    }

    bool load(State &state) const {
        try {
            if (name_.empty()) return false;
            Handle handle{OpenFileMappingW(FILE_MAP_READ, FALSE, name_.c_str())};
            if (!handle.value) return false;
            View header{MapViewOfFile(handle.value, FILE_MAP_READ, 0, 0, sizeof(uint32_t))};
            if (!header.value) return false;
            const auto length = std::atomic_ref<uint32_t>(*static_cast<uint32_t *>(header.value))
                .load(std::memory_order_acquire);
            if (length < sizeof(uint32_t) + 32 || length > maximum_size) return false;
            View view{MapViewOfFile(handle.value, FILE_MAP_READ, 0, 0, length)};
            if (!view.value) return false;
            const auto *data = static_cast<const unsigned char *>(view.value);
            Reader reader(std::vector<unsigned char>(data + sizeof(uint32_t), data + length), true);
            reader.magic("DFCNPM54");
            const auto low = reader.number(), high = reader.number();
            if (((uint64_t(high) << 32) | low) != base_ || reader.number() != timestamp_ ||
                reader.number() != size_) return false;
            State candidate;
            candidate.size = size_;
            candidate.edition = reader.count(3);
            candidate.complete = reader.count(1) != 0;
            candidate.validated = reader.count(1) != 0;
            read_bindings(reader, candidate.ranges, candidate.bytes);
            read_fields(reader, candidate);
            candidate.missing.resize(reader.count());
            for (auto &reference : candidate.missing) {
                reference = reader.number();
                if (!reference) return false;
            }
            const auto message = reader.blob(65536);
            candidate.message.assign(message.begin(), message.end());
            reader.finish();
            if (candidate.complete && (!usable(candidate) || !candidate.missing.empty())) return false;
            if (candidate.validated && !usable(candidate)) return false;
            if (!candidate.validated && (!candidate.ranges.empty() || !candidate.fields.empty() ||
                    !candidate.semantic_fields.empty() || !candidate.semantic_methods.empty())) return false;
            for (const auto &range : candidate.ranges)
                if (uint64_t(range.native) + range.end - range.begin > size_) return false;
            for (const auto &byte : candidate.bytes)
                if (!resolve(candidate.ranges, byte.address)) return false;
            candidate.message = "Game address table reused from process cache; " + candidate.message;
            state = std::move(candidate);
            return true;
        } catch (const std::exception &) { return false; }
    }

    bool save(const State &state) const {
        try {
            if (name_.empty() || state.size != size_ || state.message.size() > 65536) return false;
            if ((state.validated || state.complete) && !usable(state)) return false;
            if (!state.validated && (!state.ranges.empty() || !state.fields.empty() ||
                    !state.semantic_fields.empty() || !state.semantic_methods.empty())) return false;
            std::ostringstream output(std::ios::binary | std::ios::out);
            output.write("DFCNPM54", 8); write_number(output, 1);
            write_number(output, static_cast<uint32_t>(base_));
            write_number(output, static_cast<uint32_t>(uint64_t(base_) >> 32));
            write_number(output, timestamp_); write_number(output, size_);
            write_number(output, state.edition); write_number(output, state.complete ? 1 : 0);
            write_number(output, state.validated ? 1 : 0);
            write_bindings(output, state);
            write_fields(output, state);
            write_number(output, static_cast<uint32_t>(state.missing.size()));
            for (const auto reference : state.missing) write_number(output, reference);
            write_number(output, static_cast<uint32_t>(state.message.size()));
            output.write(state.message.data(), static_cast<std::streamsize>(state.message.size()));
            if (!output) return false;
            const auto payload = output.str();
            if (payload.size() > maximum_size - sizeof(uint32_t) - 32) return false;
            const auto digest = sha256(reinterpret_cast<const unsigned char *>(payload.data()), payload.size());
            const auto length = static_cast<uint32_t>(sizeof(uint32_t) + payload.size() + digest.size());
            Handle handle{CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0,
                length, name_.c_str())};
            if (!handle.value || GetLastError() == ERROR_ALREADY_EXISTS) return false;
            View view{MapViewOfFile(handle.value, FILE_MAP_WRITE, 0, 0, length)};
            if (!view.value) return false;
            auto *data = static_cast<unsigned char *>(view.value);
            std::memcpy(data + sizeof(uint32_t), payload.data(), payload.size());
            std::memcpy(data + sizeof(uint32_t) + payload.size(), digest.data(), digest.size());
            std::atomic_ref<uint32_t>(*static_cast<uint32_t *>(view.value))
                .store(length, std::memory_order_release);
            handle.value = nullptr; // OS releases this one retained handle at game exit.
            return true;
        } catch (const std::exception &) { return false; }
    }
};

inline void save_cache(const std::filesystem::path &path, const Image &image,
                       const Catalog &catalog, const State &state) {
    if (!usable(state) || state.size != image.size)
        throw std::runtime_error("Cannot cache unvalidated native address evidence");
    if (state.message.size() > 1048576)
        throw std::runtime_error("Native address diagnostics exceed cache capacity");
    std::error_code error;
    std::filesystem::create_directories(path.parent_path(), error);
    if (error) throw std::runtime_error("Cannot create address cache directory: " + error.message());
    const auto candidate = std::filesystem::path(path.wstring() + L".publish");
    try {
        std::ostringstream output(std::ios::binary | std::ios::out);
        output.write("DFCNPC54", 8); write_number(output, 1);
        output.write(reinterpret_cast<const char *>(catalog.digest.data()), catalog.digest.size());
        output.write(reinterpret_cast<const char *>(image.digest.data()), image.digest.size());
        write_number(output, image.size);
        write_bindings(output, state);
        write_fields(output, state);
        write_number(output, state.complete ? 1 : 0);
        write_number(output, static_cast<uint32_t>(state.missing.size()));
        for (auto reference : state.missing) write_number(output, reference);
        write_number(output, static_cast<uint32_t>(state.message.size()));
        output.write(state.message.data(), static_cast<std::streamsize>(state.message.size()));
        if (!output) throw std::runtime_error("Cannot finish address cache");
        const auto payload = output.str();
        const auto digest = sha256(reinterpret_cast<const unsigned char *>(payload.data()), payload.size());
        std::ofstream file(candidate, std::ios::binary | std::ios::trunc);
        file.write(payload.data(), static_cast<std::streamsize>(payload.size()));
        file.write(reinterpret_cast<const char *>(digest.data()), digest.size());
        file.close();
        if (!file) throw std::runtime_error("Cannot finish address cache file");
        if (!MoveFileExW(candidate.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::runtime_error("Cannot publish address cache (Windows " + std::to_string(GetLastError()) + ")");
    } catch (...) {
        std::filesystem::remove(candidate, error); throw;
    }
}

inline bool load_cache(const std::filesystem::path &path, Image &image,
                       const Catalog &catalog, State &state) {
    try {
        Reader reader(path, true); reader.magic("DFCNPC54");
        std::array<unsigned char, 32> seed{}, binary{};
        reader.read(seed.data(), seed.size()); reader.read(binary.data(), binary.size());
        if (seed != catalog.digest || binary != image.digest || reader.number() != image.size) return false;
        State candidate;
        const auto index = known_profile_index(image, catalog);
        candidate.edition = index < 2 && index < catalog.known.size() ? static_cast<unsigned>(index + 1) : 3;
        candidate.size = image.size;
        read_bindings(reader, candidate.ranges, candidate.bytes);
        read_fields(reader, candidate);
        const bool stored_complete = reader.count(1) != 0;
        std::vector<uint32_t> stored_missing(reader.count());
        for (auto &reference : stored_missing) {
            reference = reader.number();
            if (!reference) return false;
        }
        const auto message = reader.blob(1048576);
        candidate.message.assign(message.begin(), message.end());
        reader.finish();
        for (const auto &range : candidate.ranges)
            if (uint64_t(range.native) + range.end - range.begin > image.size ||
                !image.section(range.native, range.end - range.begin)) return false;
        // This is runtime cache ownership, not a separate build-time check.
        for (const auto &byte : candidate.bytes) {
            const auto address = resolve(candidate.ranges, byte.address);
            const auto *actual = image.read(address, 1);
            if (!actual || *actual != byte.native) return false;
        }
        for (const auto &entry : candidate.entry_prefixes) {
            const auto *slot = image.read(entry.table + entry.slot, 8);
            uint64_t body = 0; if (slot) std::memcpy(&body, slot, 8);
            if (entry.preferred_base != image.preferred_base || !slot || body != image.preferred_base + entry.native)
                return false;
            for (const auto &span : entry.evidence) {
                const auto *actual = image.read(span.address, span.bytes.size());
                if (!actual || std::memcmp(actual, span.bytes.data(), span.bytes.size())) return false;
            }
            for (const auto &[address, value] : entry.relocations) {
                const auto *actual = image.read(address, 8);
                uint64_t pointer = 0; if (actual) std::memcpy(&pointer, actual, 8);
                if (!actual || pointer != value) return false;
            }
            // Image construction deliberately leaves discovery indexes empty.
            // Resolve only the imports needed by this certificate; otherwise a
            // valid disk cache would be rejected and trigger a full UI-thread
            // scan before native_validate_game can return.
            if (!entry.imported_tail_slots.empty()) image.prepare_imports();
            for (const auto slot : entry.imported_tail_slots)
                if (!entry_prefix_detail::imported_tail_identity(image, slot)) return false;
        }
        if (complete_state(candidate, catalog) != stored_complete || candidate.missing != stored_missing) return false;
        candidate.validated = true;
        state = std::move(candidate);
        return true;
    } catch (const std::exception &) { return false; }
}

inline State prepare() {
    State state;
    native_history_abi::publish({}, {}, false);
    std::string image_identity;
    try {
        const auto *base = reinterpret_cast<const unsigned char *>(GetModuleHandleW(nullptr));
        if (!base) throw std::runtime_error("Cannot locate the running game image");
        const auto *dos = reinterpret_cast<const IMAGE_DOS_HEADER *>(base);
        if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew <= 0 || dos->e_lfanew > 4096)
            throw std::runtime_error("Invalid running game image");
        const auto *nt = reinterpret_cast<const IMAGE_NT_HEADERS64 *>(base + dos->e_lfanew);
        if (nt->Signature != IMAGE_NT_SIGNATURE || nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
            nt->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64 || !nt->OptionalHeader.SizeOfImage)
            throw std::runtime_error("Invalid running game PE64 image");
        Reader seed(runtime::data_path() / "native-addresses/pe-seed.bin");
        const auto seed_digest = sha256(seed.data().data(), seed.data().size());
        const auto catalog = load_catalog(seed);
        ProcessCache process_cache(reinterpret_cast<uintptr_t>(base), nt->FileHeader.TimeDateStamp,
            nt->OptionalHeader.SizeOfImage, seed_digest);
        if (process_cache.load(state)) {
            State coverage = state;
            if (complete_state(coverage, catalog) == state.complete) {
                state = std::move(coverage);
                if (usable(state)) native_history_abi::publish(state.semantic_fields, state.semantic_methods,
                    state.edition == 1 || state.edition == 2, state.semantic_types, state.semantic_enums);
                return state;
            }
        }
        // Use the same seed bytes for the process key and discovery, even if a
        // new package is published while this core is being initialized.
        std::vector<wchar_t> filename(32768);
        const auto length = GetModuleFileNameW(nullptr, filename.data(), static_cast<DWORD>(filename.size()));
        if (!length || length >= filename.size()) throw std::runtime_error("Cannot locate the running game executable");
        Image image(std::filesystem::path(std::wstring(filename.data(), length)));
        const auto identity = hex_digest(image.digest);
        const auto version = image.version();
        std::ostringstream details;
        details << "version=" << (version.empty() ? "unknown" : version)
            << " PE timestamp=0x" << std::hex << image.timestamp << " size=0x" << image.size
            << " SHA256=" << identity;
        image_identity = details.str();
        if (nt->FileHeader.TimeDateStamp != image.timestamp || nt->OptionalHeader.SizeOfImage != image.size)
            throw std::runtime_error("Running game image differs from its executable file");
        state = {};
        state.size = image.size;
        const auto retain = [&process_cache](State &value) {
            if (usable(value)) native_history_abi::publish(value.semantic_fields, value.semantic_methods,
                value.edition == 1 || value.edition == 2, value.semantic_types, value.semantic_enums);
            if (!process_cache.save(value)) value.message += "; process address cache could not be retained";
        };
        const auto cache = runtime::data_path() / "native-addresses/cache" /
            (identity + "-r" + std::to_string(discovery_revision) + "-" + hex_digest(catalog.digest) + ".bin");
        if (load_cache(cache, image, catalog, state)) {
            state.message = "Game address table loaded from version cache: " + image_identity +
                (state.message.empty() ? "" : "; " + state.message);
            retain(state);
            return state;
        }
        const auto known = known_profile_index(image, catalog);
        if (known < catalog.known.size()) {
            state = prepare_known(image, catalog, known);
            if (!usable(state)) throw std::runtime_error("Packaged address evidence was not validated");
            if (!state.complete) state.message += "; partial catalog: unresolved resources remain unavailable";
            state.message += "; " + image_identity;
            try { save_cache(cache, image, catalog, state); state.message += "; saved " + runtime::utf8(cache); }
            catch (const std::exception &error) { state.message += "; cache write failed: " + std::string(error.what()); }
            retain(state);
            return state;
        }
        try {
            image.prepare_scan();
            state = scan(image, catalog);
        } catch (const std::runtime_error &error) {
            // These failures come from immutable PE/seed evidence. Remember
            // the refusal for this process; transient file/allocation failures
            // outside discovery remain retryable on the next core reload.
            state = {}; state.size = image.size; state.edition = 3;
            complete_state(state, catalog);
            state.message = "Game address scan refused: " + std::string(error.what()) +
                "; " + image_identity + "; native hooks remain disabled";
            retain(state);
            return state;
        }
        const auto prefix = "Game version has no packaged address table; automatic PE scan " + image_identity;
        const auto scan_message = state.message;
        state.message = prefix + "; resolved " + std::to_string(catalog.required.size() - state.missing.size()) +
            "/" + std::to_string(catalog.required.size()) + " required resources; unresolved fields=" +
            std::to_string(state.missing_fields.size()) + "; unresolved semantic fields=" +
            std::to_string(state.missing_semantic_fields.size()) + "; unresolved semantic methods=" +
            std::to_string(state.missing_semantic_methods.size()) + "; unresolved graphics tokens=" +
            std::to_string(state.missing_graphics_tokens.size());
        if (!scan_message.empty()) state.message += "; " + scan_message;
        if (!state.complete) {
            std::ostringstream missing;
            missing << "; unresolved RVAs:" << std::hex;
            for (size_t index = 0; index < std::min<size_t>(state.missing.size(), 16); ++index)
                missing << " 0x" << state.missing[index];
            if (!state.missing_fields.empty()) missing << "; unresolved field RVAs:";
            for (size_t index = 0; index < std::min<size_t>(state.missing_fields.size(), 16); ++index)
                missing << " 0x" << state.missing_fields[index];
            state.message += missing.str() + "; partial catalog: only proved native resources are available";
        }
        try { save_cache(cache, image, catalog, state); state.message += "; saved " + runtime::utf8(cache); }
        catch (const std::exception &error) { state.message += "; cache write failed: " + std::string(error.what()); }
        retain(state);
    } catch (const std::exception &error) {
        state.complete = false; state.validated = false;
        native_history_abi::publish({}, {}, false);
        state.message = "Game address resolution failed: " + std::string(error.what());
        if (!image_identity.empty()) state.message += "; " + image_identity;
    }
    return state;
}

inline const State &state() {
    static const State value = prepare();
    return value;
}
} // namespace dfcn::pe_runtime
#endif
