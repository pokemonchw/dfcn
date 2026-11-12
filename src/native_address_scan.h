#pragma once

// Shared address-only discovery. Host readers supply image sections and
// symbolic anchors; text capture and translation never select a scanner.
#include <algorithm>
#include <cstdint>
#include <cstring>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

namespace dfcn::address_runtime {
struct Range { uint32_t begin = 0, end = 0, native = 0; };
struct Byte { uint32_t address = 0; unsigned char reference = 0, native = 0; };
struct Fixup { uint32_t offset, width, next, target, kind; };
struct Pattern {
    uint32_t reference = 0, flags = 0;
    std::vector<unsigned char> raw, mask;
    std::vector<Fixup> fixups;
    uint32_t owner = 0;
};
struct Vtable { uint32_t reference; std::string name; std::vector<uint32_t> slots; };
struct Import { uint32_t reference; std::string library, symbol; uint32_t extent = 8; };
struct PatternConflicts : std::runtime_error {
    std::vector<std::pair<uint32_t, uint32_t>> rejected;
    explicit PatternConflicts(std::vector<std::pair<uint32_t, uint32_t>> values)
        : std::runtime_error("Native instruction candidates conflict with established operand identities"),
          rejected(std::move(values)) {}
};
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
    uint32_t size = 0;
    uint32_t ui_settings_tail_shift = 0;
    std::vector<Range> ranges;
    std::vector<Byte> bytes;
    std::vector<uint32_t> missing;
    std::string message;
};

template <typename Catalog>
inline bool complete_spans(State &state, const Catalog &catalog) {
    state.missing.clear();
    for (const auto &[reference, length] : catalog.required) {
        const auto begin = resolve(state.ranges, reference);
        auto found = std::upper_bound(state.ranges.begin(), state.ranges.end(), reference,
            [](uint32_t value, const Range &range) { return value < range.begin; });
        if (found == state.ranges.begin()) { state.missing.push_back(reference); continue; }
        --found;
        if (!begin || uint64_t(reference) + length > found->end ||
            uint64_t(begin) + length > state.size) state.missing.push_back(reference);
    }
    state.complete = state.missing.empty();
    return state.complete;
}

// Conflicting graph evidence invalidates discovery. No nearest-address or
// global relocation delta is ever used to fill an unresolved resource.
class Bindings {
    std::map<uint32_t, Range> ranges_;
public:
    bool compatible(uint32_t begin, uint32_t length, uint32_t native) const {
        auto at = ranges_.upper_bound(begin);
        if (at != ranges_.begin()) --at;
        for (; at != ranges_.end() && uint64_t(at->second.begin) < uint64_t(begin) + length; ++at) {
            const auto &range = at->second;
            if (range.end > begin && int64_t(range.native) - range.begin != int64_t(native) - begin)
                return false;
        }
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
    const auto *section = image.section(address, pattern.raw.size());
    const auto *bytes = image.read(address, pattern.raw.size());
    if (!section || !bytes || ((pattern.flags & 1) && !(section->flags & Image::execute_flag)) ||
        ((pattern.flags & 4) && (section->flags & (Image::execute_flag | Image::write_flag)))) return false;
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
inline State scan(const Image &image, const Catalog &catalog,
        const std::vector<std::pair<uint32_t, uint32_t>> &global_layouts = {}, bool infer_global_roots = false,
        const std::vector<Range> &global_field_layouts = {},
        const std::vector<Range> &reviewed_ranges = {}, const std::vector<Byte> &reviewed_bytes = {}) {
    State state; state.edition = 3; state.size = image.size;
    const auto field_offset = [&](uint32_t object, uint32_t reference) {
        const auto relocated = resolve(global_field_layouts, reference);
        return uint64_t(relocated ? relocated : reference) - object;
    };
    Bindings bindings;
    for (const auto &range : reviewed_ranges)
        bindings.add(range.begin, range.end - range.begin, range.native);
    std::unordered_map<uint32_t, std::set<uint32_t>> hints;
    std::set<uint32_t> code_targets;
    for (const auto &pattern : catalog.patterns)
        if (pattern.flags & 1) code_targets.insert(pattern.reference);
    for (const auto &pattern : catalog.patterns)
        for (const auto &fixup : pattern.fixups) if (fixup.kind & 0x100) code_targets.insert(fixup.target);

    std::vector<const Pattern *> whole_patterns;
    for (const auto &pattern : catalog.patterns)
        if (pattern.flags & 2) whole_patterns.push_back(&pattern);
    std::vector<uint32_t> owners(catalog.patterns.size());
    for (size_t index = 0; index < catalog.patterns.size(); ++index) {
        const auto &pattern = catalog.patterns[index];
        owners[index] = pattern.owner ? pattern.owner : pattern.reference;
        for (const auto *whole : whole_patterns) if (
            whole->reference <= pattern.reference &&
            uint64_t(pattern.reference) + pattern.raw.size() <= uint64_t(whole->reference) + whole->raw.size()) {
            owners[index] = whole->reference; break;
        }
    }

    struct TableCandidate { const Vtable *source; uint32_t address; };
    std::vector<TableCandidate> tables;
    for (const auto &table : catalog.vtables) {
        const auto candidates = image.find_vtables(table.name);
        if (candidates.size() != 1 || !image.read(candidates[0], table.slots.size() * 8)) continue;
        tables.push_back({&table, candidates[0]});
        for (size_t slot = 0; slot < table.slots.size(); ++slot) {
            if (!table.slots[slot]) continue; // ELF external/pure-virtual slot.
            code_targets.insert(table.slots[slot]);
            uint64_t target = 0;
            std::memcpy(&target, image.read(candidates[0] + static_cast<uint32_t>(slot * 8), 8), 8);
            if (target >= image.preferred_base && target - image.preferred_base < image.size)
                hints[table.slots[slot]].insert(static_cast<uint32_t>(target - image.preferred_base));
        }
    }
    for (const auto &entry : catalog.imports) {
        const auto address = image.import_slot(entry.library, entry.symbol);
        if (address) bindings.add(entry.reference, entry.extent, address);
    }

    // A shared exact eight-byte anchor index scans each file-backed section
    // once. Whole unwind functions instead use .pdata length buckets.
    struct Anchor { uint32_t offset = 0; uint64_t key = 0; bool valid = false; };
    std::vector<Anchor> anchors(catalog.patterns.size());
    std::unordered_map<uint64_t, std::vector<uint32_t>> hits;
    std::unordered_map<uint32_t, std::vector<uint32_t>> functions;
    for (const auto &function : image.functions)
        functions[function.end - function.begin].push_back(function.begin);
    for (size_t index = 0; index < catalog.patterns.size(); ++index) {
        const auto &pattern = catalog.patterns[index];
        if (pattern.flags & (2 | 8)) continue;
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
    if (!hits.empty()) for (const auto &section : image.sections) {
        if (section.flags & Image::write_flag) continue;
        const auto count = std::min(section.raw_size, section.end - section.begin);
        const auto *bytes = image.read(section.begin, count);
        if (!bytes || count < 8) continue;
        for (uint32_t offset = 0; offset <= count - 8; ++offset) {
            uint64_t key; std::memcpy(&key, bytes + offset, 8);
            auto found = hits.find(key);
            if (found != hits.end() && found->second.size() < 513)
                found->second.push_back(section.begin + offset);
        }
    }

    std::vector<std::vector<uint32_t>> candidates(catalog.patterns.size());
    std::vector<uint32_t> selected(catalog.patterns.size());
    for (size_t index = 0; index < catalog.patterns.size(); ++index) {
        const auto &pattern = catalog.patterns[index];
        const auto append = [&](uint32_t address) {
            if (pattern_matches(image, pattern, address)) candidates[index].push_back(address);
        };
        if (pattern.flags & 8) {
            // Complete short leaf bodies need a proven RTTI slot or caller.
            // Their bytes alone do not identify a function globally.
        } else if (pattern.flags & 2) {
            const auto found = functions.find(static_cast<uint32_t>(pattern.raw.size()));
            if (found != functions.end()) for (auto address : found->second) append(address);
        } else if (anchors[index].valid) {
            const auto &matches = hits.at(anchors[index].key);
            if (matches.size() <= 512) for (auto match : matches)
                if (match >= anchors[index].offset) append(match - anchors[index].offset);
        }
        auto &values = candidates[index];
        std::sort(values.begin(), values.end()); values.erase(std::unique(values.begin(), values.end()), values.end());
    }

    std::unordered_map<uint32_t, std::map<uint32_t, std::set<uint32_t>>> data_evidence;
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : reviewed_bytes) changes.emplace(byte.address, byte);
    bool progress = true;
    while (progress) {
        progress = false;
        for (size_t index = 0; index < catalog.patterns.size(); ++index) {
            if (selected[index]) continue;
            const auto &pattern = catalog.patterns[index];
            auto &values = candidates[index];
            const bool has_exact_bytes = std::find(pattern.mask.begin(), pattern.mask.end(), 0) != pattern.mask.end();
            // RTTI slots and already established callers can distinguish tiny
            // duplicate methods, but a nominated method must still match code.
            auto hinted = hints.find(pattern.reference);
            if (hinted != hints.end() && hinted->second.size() == 1) {
                const auto address = *hinted->second.begin();
                if (pattern_matches(image, pattern, address) &&
                    std::find(values.begin(), values.end(), address) == values.end()) values.push_back(address);
            }
            std::vector<uint32_t> viable;
            for (auto address : values) {
                if (hinted != hints.end() && !hinted->second.empty() && !hinted->second.count(address)) continue;
                const auto established = bindings.lookup(pattern.reference);
                if (established && established != address) continue;
                if ((pattern.flags & 16) && !bindings.compatible(pattern.reference,
                        static_cast<uint32_t>(pattern.raw.size()), address)) continue;
                bool valid = true;
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
                }
                if (valid) viable.push_back(address);
            }
            if (viable.size() != 1) continue;
            const auto address = viable[0]; selected[index] = address;
            bindings.add(pattern.reference, static_cast<uint32_t>(pattern.raw.size()), address);
            progress = true;
            const auto *bytes = image.read(address, pattern.raw.size());
            for (size_t offset = 0; offset < pattern.raw.size(); ++offset) if (pattern.raw[offset] != bytes[offset]) {
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
                if (!code_targets.count(fixup.target)) {
                    data_evidence[fixup.target][target].insert(owners[index]);
                    for (const auto &[object, extent] : global_layouts) if (infer_global_roots)
                        if (fixup.target >= object && fixup.target - object < extent && target >= field_offset(object, fixup.target))
                            data_evidence[object][static_cast<uint32_t>(target - field_offset(object, fixup.target))].insert(owners[index]);
                }
            }
        }
        for (const auto &[reference, evidence] : data_evidence) {
            // A lone owner does not establish a global. In particular, a
            // changed constructor can repeat an unchanged initialization
            // block for a different member. Apply the two-owner rule before
            // allowing that tentative observation to contradict a binding.
            const auto qualified = std::count_if(evidence.begin(), evidence.end(),
                [](const auto &entry) { return entry.second.size() >= 2; });
            if (!qualified) continue;
            if (qualified != 1) {
                std::string message = "Conflicting global address evidence at " + std::to_string(reference) + ":";
                for (const auto &[candidate, sources] : evidence) {
                    message += " " + std::to_string(candidate) + "(" + std::to_string(sources.size()) + ") owners:";
                    size_t count = 0;
                    for (const auto owner : sources) {
                        message += " " + std::to_string(owner);
                        if (++count == 4) break;
                    }
                }
                throw std::runtime_error(message);
            }
            const auto &[target, owners] = *std::find_if(evidence.begin(), evidence.end(),
                [](const auto &entry) { return entry.second.size() >= 2; });
            for (const auto &[object, extent] : global_layouts) if (reference >= object && reference - object < extent) {
                const auto base = bindings.lookup(object);
                if (base && uint64_t(base) + field_offset(object, reference) != target)
                    throw std::runtime_error("Native global object layout changed at " + std::to_string(reference));
            }
            // Globals have no stable value to scan. Require two independently
            // identified code producers to agree on their RIP operand target.
            if (owners.size() >= 2 && bindings.add(reference, 1, target)) progress = true;
        }
        for (const auto &table : tables) {
            bool valid = true;
            for (size_t slot = 0; slot < table.source->slots.size(); ++slot) {
                if (!table.source->slots[slot]) continue;
                uint64_t pointer; std::memcpy(&pointer, image.read(table.address + static_cast<uint32_t>(slot * 8), 8), 8);
                const auto target = bindings.lookup(table.source->slots[slot]);
                if (!target || pointer != image.preferred_base + target) { valid = false; break; }
            }
            if (valid && bindings.add(table.source->reference, static_cast<uint32_t>(table.source->slots.size() * 8),
                                     table.address)) progress = true;
        }
    }

    // Revisit every admitted operand after the graph closes: a later anchor
    // must not silently contradict an earlier unique byte match.
    std::vector<std::pair<uint32_t, uint32_t>> rejected;
    for (size_t index = 0; index < selected.size(); ++index) if (selected[index]) {
        const auto &pattern = catalog.patterns[index];
        for (const auto &fixup : pattern.fixups) {
            const auto expected = bindings.lookup(fixup.target);
            if (expected && expected != operand_target(image, pattern, selected[index], fixup)) {
                rejected.emplace_back(pattern.reference, static_cast<uint32_t>(pattern.raw.size()));
                break;
            }
        }
    }
    if (!rejected.empty()) throw PatternConflicts(std::move(rejected));
    state.ranges = bindings.export_ranges();
    for (const auto &[reference, byte] : changes) { (void)reference; state.bytes.push_back(byte); }
    complete_spans(state, catalog);
    return state;
}

} // namespace dfcn::address_runtime
