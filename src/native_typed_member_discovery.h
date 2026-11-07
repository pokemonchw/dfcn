#pragma once
#include "native_call_discovery.h"
#include "native_method_call_discovery.h"
#include "native_typed_frame_protection.h"

// A field displacement belongs to an object, not to an instruction shape.
// This pass retains the complete source and target CFG, follows the actual
// RCX value through named embedded objects, and adapts only that named field.
namespace dfcn::pe_runtime::typed_member_detail {
using namespace address_runtime;
using namespace display_decode;
struct Field { uint32_t id, source, target, size, flags; };
struct Child { uint32_t type, source, target; };
struct Type { uint32_t source_size, target_size; std::vector<Field> fields; std::vector<Child> children; };
struct Root { uint32_t source, target, type; };
struct Layout { std::map<uint32_t, Type> types; std::vector<Root> roots; std::map<uint32_t, uint32_t> receivers; };
struct Graph {
    uint32_t owner = 0, end = 0;
    std::map<uint32_t, Instruction> code;
    ControlFlow flow;
    std::set<uint32_t> external_entries;
};
inline void magic(frame_detail::Reader &reader, const char *expected) {
    char value[8]; reader.take(value, 8);
    if (std::memcmp(value, expected, 8) || reader.number() != 1)
        throw std::runtime_error("Unsupported typed member evidence");
}
template<typename Image> Layout layout(const Image &image, const std::vector<unsigned char> &blob) {
    Layout result;
    if (blob.empty()) return result;
    frame_detail::Reader reader(blob); magic(reader, "DFCNTM01");
    const auto profiles = reader.count(64); bool matched = false;
    for (uint32_t p = 0; p < profiles; ++p) {
        std::array<unsigned char, 32> digest{}; reader.take(digest.data(), digest.size());
        const auto timestamp = reader.number(), size = reader.number();
        const bool selected = digest == image.digest && timestamp == image.timestamp && size == image.size;
        Layout candidate;
        for (uint32_t n = reader.count(); n; --n) {
            const auto id = reader.number(); Type type{reader.number(), reader.number(), {}, {}};
            if (!id || !type.source_size || !type.target_size) throw std::runtime_error("Invalid typed object extent");
            std::set<uint32_t> ids;
            for (uint32_t f = reader.count(); f; --f) {
                Field value{reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
                if (!value.id || !value.size || value.flags > 1 || !ids.insert(value.id).second ||
                        uint64_t(value.source) + value.size > type.source_size ||
                        uint64_t(value.target) + value.size > type.target_size)
                    throw std::runtime_error("Invalid named member declaration");
                type.fields.push_back(value);
            }
            for (uint32_t c = reader.count(); c; --c) {
                Child child{reader.number(), reader.number(), reader.number()};
                if (!child.type || child.source >= type.source_size || child.target >= type.target_size)
                    throw std::runtime_error("Invalid embedded object declaration");
                type.children.push_back(child);
            }
            if (!candidate.types.emplace(id, std::move(type)).second)
                throw std::runtime_error("Duplicate typed object declaration");
        }
        for (uint32_t n = reader.count(); n; --n) {
            Root root{reader.number(), reader.number(), reader.number()};
            if (!root.source || !root.target || !candidate.types.count(root.type) ||
                    (selected && !image.section(root.target, candidate.types.at(root.type).target_size)))
                throw std::runtime_error("Invalid image-owned typed root");
            candidate.roots.push_back(root);
        }
        for (uint32_t n = reader.count(); n; --n) {
            const auto owner = reader.number(), type = reader.number();
            if (!owner || !candidate.types.count(type) || !candidate.receivers.emplace(owner, type).second)
                throw std::runtime_error("Invalid source compound receiver contract");
        }
        for (const auto &[id, type] : candidate.types) for (const auto &child : type.children) {
            (void)id;
            const auto found = candidate.types.find(child.type);
            if (found == candidate.types.end() || uint64_t(child.source) + found->second.source_size > type.source_size ||
                    uint64_t(child.target) + found->second.target_size > type.target_size)
                throw std::runtime_error("Embedded object exceeds its declared owner");
        }
        if (selected) {
            if (matched) throw std::runtime_error("Duplicate image-owned typed profile");
            matched = true; result = std::move(candidate);
        }
    }
    reader.finish(); return result;
}
template<typename Catalog> std::map<uint32_t, Graph> graphs(const Catalog &catalog,
        const std::vector<unsigned char> &blob) {
    std::map<uint32_t, Graph> result;
    if (blob.empty()) return result;
    std::map<uint32_t, const Pattern *> bodies;
    for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) && pattern.reference == pattern.owner) {
        const auto [at, inserted] = bodies.emplace(pattern.owner, &pattern);
        if (!inserted) {
            const auto shared = (std::min)(at->second->raw.size(), pattern.raw.size());
            if (std::memcmp(at->second->raw.data(), pattern.raw.data(), shared))
                throw std::runtime_error("Typed logical source bodies disagree");
            if (pattern.raw.size() > at->second->raw.size()) at->second = &pattern;
        }
    }
    frame_detail::Reader reader(blob); magic(reader, "DFCNTG01");
    for (uint32_t n = reader.count(); n; --n) {
        Graph graph; graph.owner = reader.number(); const auto extent = reader.number();
        const auto body = bodies.find(graph.owner);
        if (!extent || uint64_t(graph.owner) + extent > UINT32_MAX || body == bodies.end() ||
                body->second->raw.size() != extent) throw std::runtime_error("Typed CFG has no complete source body");
        graph.end = graph.owner + extent;
        uint32_t previous = graph.owner;
        for (uint32_t c = reader.count(4000000); c; --c) {
            Instruction row{}; row.address = reader.number(); row.bytes = reader.blob(15);
            if (row.bytes.empty() || row.address < previous || uint64_t(row.address) + row.bytes.size() > graph.end ||
                    std::memcmp(body->second->raw.data() + row.address - graph.owner, row.bytes.data(), row.bytes.size()))
                throw std::runtime_error("Typed CFG differs from reviewed source instructions");
            unsigned char bounded[32]{}; std::memcpy(bounded, row.bytes.data(), row.bytes.size());
            hde64_disasm(bounded, &row.decoded);
            if ((row.decoded.flags & F_ERROR) || row.decoded.len != row.bytes.size())
                throw std::runtime_error("Typed CFG source instruction is incomplete");
            previous = row.address + row.decoded.len;
            graph.code.emplace(row.address, std::move(row));
        }
        if (!graph.code.count(graph.owner)) throw std::runtime_error("Typed CFG has no entry instruction");
        for (uint32_t c = reader.count(); c; --c) {
            const auto address = reader.number(); auto &targets = graph.flow.indirect_edges[address];
            if (!graph.code.count(address)) throw std::runtime_error("Typed CFG switch has no source instruction");
            for (uint32_t e = reader.count(); e; --e) {
                const auto target = reader.number();
                if (!graph.code.count(target)) throw std::runtime_error("Typed CFG switch leaves source code");
                targets.push_back(target);
            }
        }
        for (uint32_t c = reader.count(); c; --c) {
            const auto address = reader.number();
            if (!graph.code.count(address)) throw std::runtime_error("Typed CFG terminal has no instruction");
            graph.flow.nonreturning_calls.insert(address);
        }
        for (uint32_t c = reader.count(); c; --c) {
            const auto address = reader.number();
            if (!graph.code.count(address)) throw std::runtime_error("Typed CFG external entry has no instruction");
            graph.external_entries.insert(address);
        }
        if (!result.emplace(graph.owner, std::move(graph)).second) throw std::runtime_error("Duplicate typed source CFG");
    }
    reader.finish(); return result;
}
template<typename Catalog> class SourceView {
    const Catalog &catalog_;
    const std::map<uint32_t, Graph> &graphs_;
    std::vector<const Pattern *> spans_;
    std::vector<uint64_t> maximum_ends_;
public:
    SourceView(const Catalog &catalog, const std::map<uint32_t, Graph> &graphs) : catalog_(catalog), graphs_(graphs) {
        for (const auto &pattern : catalog.patterns) if (!pattern.raw.empty()) spans_.push_back(&pattern);
        std::sort(spans_.begin(), spans_.end(), [](const auto *a, const auto *b) { return a->reference < b->reference; });
        uint64_t end = 0;
        for (const auto *pattern : spans_) {
            end = (std::max)(end, uint64_t(pattern->reference) + pattern->raw.size()); maximum_ends_.push_back(end);
        }
    }
    const Graph *graph(uint32_t address) const {
        const auto found = graphs_.find(address); return found == graphs_.end() ? nullptr : &found->second;
    }
    const unsigned char *read(uint32_t address, size_t width) const {
        const uint64_t end = uint64_t(address) + width;
        auto at = std::upper_bound(spans_.begin(), spans_.end(), address,
            [](uint32_t value, const auto *pattern) { return value < pattern->reference; });
        const unsigned char *result = nullptr;
        while (at != spans_.begin()) {
            const auto index = static_cast<size_t>(at - spans_.begin() - 1);
            if (maximum_ends_[index] < end) break;
            const auto *pattern = *--at;
            if (uint64_t(pattern->reference) + pattern->raw.size() < end) continue;
            const auto *candidate = pattern->raw.data() + address - pattern->reference;
            if (result && std::memcmp(result, candidate, width)) return nullptr;
            result = candidate;
        }
        return result;
    }
    uint32_t import_slot(std::string_view library, std::string_view symbol) const {
        const auto lower = [](std::string_view value) {
            std::string result(value);
            for (auto &c : result) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
            return result;
        };
        uint32_t result = 0;
        for (const auto &entry : catalog_.imports) if (lower(entry.library) == lower(library) && entry.symbol == symbol) {
            if (result && result != entry.reference) return 0;
            result = entry.reference;
        }
        return result;
    }
    bool static_cstring(uint32_t address) const {
        for (const auto *pattern : spans_) {
            if (!(pattern->flags & 4) || address < pattern->reference ||
                    uint64_t(address) >= uint64_t(pattern->reference) + pattern->raw.size()) continue;
            // An identity-only literal proves the immutable object at its
            // reviewed root, never canonical coordinates inside its payload.
            if ((pattern->flags & 32) && address != pattern->reference) continue;
            const auto begin = static_cast<size_t>(address - pattern->reference);
            const auto zero = std::find(pattern->raw.begin() + begin, pattern->raw.end(), 0);
            if (zero == pattern->raw.end()) continue;
            const auto size = static_cast<size_t>(zero - pattern->raw.begin() - begin) + 1;
            if (pattern->mask.size() != pattern->raw.size() ||
                    std::any_of(pattern->mask.begin() + begin, pattern->mask.begin() + begin + size,
                        [](unsigned char value) { return value != 0; })) continue;
            const auto *actual = read(address, size);
            if (actual && !std::memcmp(actual, pattern->raw.data() + begin, size)) return true;
        }
        return false;
    }
};
template<typename Image> class TargetView {
    const Image &image_;
    argument_alias_detail::Cache<Image> &cache_;
    std::map<uint32_t, Graph> graphs_;
public:
    TargetView(const Image &image, argument_alias_detail::Cache<Image> &cache) : image_(image), cache_(cache) {}
    const Graph *graph(uint32_t address) {
        if (const auto found = graphs_.find(address); found != graphs_.end()) return &found->second;
        const auto &proof = cache_.get(address);
        if (!proof.valid) return nullptr;
        return &graphs_.emplace(address, Graph{address, proof.end, proof.code, proof.flow, proof.external_entries}).first->second;
    }
    const unsigned char *read(uint32_t address, size_t width) const { return image_.read(address, width); }
    bool static_cstring(uint32_t address) const {
        const auto *section = image_.section(address);
        if (!section || (section->flags & (Image::write_flag | Image::execute_flag))) return false;
        const auto end = (std::min)(uint64_t(section->end), uint64_t(section->begin) + section->raw_size);
        if (address >= end) return false;
        const auto *raw = image_.read(address, static_cast<size_t>(end - address));
        return raw && std::memchr(raw, 0, static_cast<size_t>(end - address));
    }
    uint32_t import_slot(std::string_view library, std::string_view symbol) const {
        return image_.import_slot(std::string(library), std::string(symbol));
    }
};
inline uint32_t root_type(const Layout &layout, uint32_t address, bool target) {
    uint32_t result = 0;
    for (const auto &root : layout.roots) if ((target ? root.target : root.source) == address) {
        if (result && result != root.type) return 0;
        result = root.type;
    }
    return result;
}
inline uint32_t child_type(const Layout &layout, uint32_t type, int64_t offset, bool target) {
    const auto found = layout.types.find(type);
    if (found == layout.types.end() || offset < 0) return 0;
    if (!offset) return type; // An unchanged pointer is not evidence of a downcast.
    uint32_t result = 0;
    for (const auto &child : found->second.children) if ((target ? child.target : child.source) == offset) {
        if (result && result != child.type) return 0;
        result = child.type;
    }
    return result;
}
struct Values {
    std::array<uint32_t, 16> registers{};
    std::map<int32_t, uint32_t> slots;
    bool private_spills = true;
    bool operator==(const Values &) const = default;
};
struct Analysis { std::map<uint32_t, Values> incoming; std::map<uint32_t, std::set<uint32_t>> calls; bool valid = false; };
inline Values merge(const Values &left, const Values &right) {
    Values value = left;
    value.private_spills = left.private_spills && right.private_spills;
    for (unsigned reg = 0; reg < 16; ++reg) if (left.registers[reg] != right.registers[reg]) value.registers[reg] = 0;
    for (auto at = value.slots.begin(); at != value.slots.end();) {
        const auto other = right.slots.find(at->first);
        if (other == right.slots.end() || other->second != at->second) at = value.slots.erase(at); else ++at;
    }
    if (!value.private_spills) value.slots.clear();
    return value;
}
template<typename Origin> Analysis analyze(const Graph &graph, const Layout &layout, uint32_t entry_type,
        bool target, Origin origin, const typed_frame_detail::Protection &protection) {
    Analysis result;
    const auto private_slot = [&](int32_t address) {
        return protection.private_slot(address);
    };
    Values entry; entry.registers[1] = entry_type;
    entry.private_spills = protection.valid;
    result.incoming.emplace(graph.owner, entry);
    std::vector<uint32_t> pending{graph.owner};
    for (const auto address : graph.external_entries) {
        Values unknown; unknown.private_spills = false;
        result.incoming[address] = unknown; pending.push_back(address);
    }
    size_t iterations = 0;
    while (!pending.empty()) {
        if (++iterations > graph.code.size() * 128) return {};
        const auto address = pending.back(); pending.pop_back();
        const auto row = graph.code.find(address);
        if (row == graph.code.end()) return {};
        const auto &instruction = row->second; const auto &op = instruction.decoded;
        const auto next = address + op.len;
        const auto before = result.incoming.at(address); auto after = before;
        for (unsigned reg = 0; reg < 16; ++reg) if (writes_gpr(op, reg)) after.registers[reg] = 0;
        const bool plain = !op.p_66 && !op.p_67 && !op.p_lock && !op.p_rep && !op.p_seg;
        const auto base = method_call_detail::memory_base(op);
        const auto displacement = method_call_detail::displacement(instruction);
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        std::optional<int32_t> slot;
        if (base == 4 || base == 5) if (const auto frame = origin(address, op.len, base)) {
            const int64_t value = int64_t(*frame) + displacement;
            if (value >= INT32_MIN && value <= INT32_MAX) slot = static_cast<int32_t>(value);
        }
        if (plain && op.rex_w && (op.opcode == 0x89 || op.opcode == 0x8b) && op.modrm_mod == 3)
            after.registers[op.opcode == 0x89 ? rm : reg] = before.registers[op.opcode == 0x89 ? reg : rm];
        if (plain && op.rex_w && op.opcode == 0x8b && op.modrm_mod != 3 && slot && before.private_spills) {
            const auto saved = before.slots.find(*slot);
            if (saved != before.slots.end() && private_slot(*slot)) after.registers[reg] = saved->second;
        }
        if ((op.flags & F_MODRM) && op.modrm_mod != 3 && op.opcode != 0x8d && !memory_read_only(op)) {
            const bool image_owned = base < 16 && before.registers[base];
            const bool absolute = !op.p_67 && op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB);
            if (!slot && !image_owned && !absolute && !protection.heap_writes.count(address)) {
                // An indexed/aliased store has no proved byte extent. It
                // must not leave a historical receiver spill live.
                after.slots.clear(); after.private_spills = false;
            }
            if (slot) {
                const auto width = access_width(op);
                for (auto at = after.slots.begin(); at != after.slots.end();) {
                    if (width == UINT32_MAX || (int64_t(at->first) < int64_t(*slot) + width && int64_t(at->first) + 8 > *slot))
                        at = after.slots.erase(at); else ++at;
                }
                if (plain && op.rex_w && op.opcode == 0x89 && before.registers[reg] && private_slot(*slot) && after.private_spills)
                    after.slots[*slot] = before.registers[reg];
            }
        }
        if (op.opcode == 0xa4 || op.opcode == 0xa5 || op.opcode == 0xaa || op.opcode == 0xab ||
                op.opcode == 0x6c || op.opcode == 0x6d || op.opcode == 0xc8) {
            after.slots.clear(); after.private_spills = false;
        }
        if (plain && op.rex_w && op.opcode == 0x8d) {
            if (op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB)) {
                const int64_t value = int64_t(next) + displacement;
                if (value > 0 && value <= UINT32_MAX) after.registers[reg] = root_type(layout, static_cast<uint32_t>(value), target);
            } else if (base < 16 && before.registers[base])
                after.registers[reg] = child_type(layout, before.registers[base], displacement, target);
        }
        if (plain && op.rex_w && ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_mod == 3 && !op.modrm_reg)) {
            const auto offset = op.opcode == 0x83 ? int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32));
            after.registers[rm] = child_type(layout, before.registers[rm], offset, target);
        }
        const bool call = op.opcode == 0xe8 || (op.opcode == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 3));
        if (call) {
            for (const unsigned volatile_reg : {0u, 1u, 2u, 8u, 9u, 10u, 11u}) after.registers[volatile_reg] = 0;
            if (const auto rsp = origin(address, op.len, 4)) {
                for (auto at = after.slots.begin(); at != after.slots.end();) {
                    if (int64_t(at->first) < int64_t(*rsp) + 32 && int64_t(at->first) + 8 > *rsp) at = after.slots.erase(at); else ++at;
                }
            } else { after.slots.clear(); after.private_spills = false; }
        }
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3) || (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        std::vector<uint32_t> successors;
        if (conditional || jump) {
            const int64_t destination = int64_t(next) + ((op.flags & F_IMM8) ?
                int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (destination >= graph.owner && destination < graph.end) successors.push_back(static_cast<uint32_t>(destination));
        }
        const bool indirect = op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5);
        if (indirect) {
            const auto edges = graph.flow.indirect_edges.find(address);
            if (edges == graph.flow.indirect_edges.end()) return {};
            successors.insert(successors.end(), edges->second.begin(), edges->second.end());
        }
        const bool terminal = jump || indirect || op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
            (op.opcode == 0x0f && op.opcode2 == 0x0b) || graph.flow.nonreturning_calls.count(address);
        if (!terminal) successors.push_back(next);
        for (const auto successor : successors) {
            if (!graph.code.count(successor)) return {};
            const auto old = result.incoming.find(successor);
            const auto value = old == result.incoming.end() ? after : merge(old->second, after);
            if (old == result.incoming.end() || !(old->second == value)) { result.incoming[successor] = value; pending.push_back(successor); }
        }
    }
    // Collect only the fixed point, never an optimistic intermediate state.
    for (const auto &[address, value] : result.incoming) {
        const auto &op = graph.code.at(address).decoded;
        if (op.opcode == 0xe8) {
            const int64_t callee = int64_t(address) + op.len + static_cast<int32_t>(op.imm.imm32);
            if (callee > 0 && callee <= UINT32_MAX) result.calls[static_cast<uint32_t>(callee)].insert(value.registers[1]);
        }
    }
    result.valid = true; return result;
}
inline std::optional<int32_t> field_offset(const Layout &layout, uint32_t type, int32_t offset, uint32_t width) {
    const auto found = layout.types.find(type);
    if (found == layout.types.end() || offset < 0 || width == UINT32_MAX) return {};
    std::optional<int32_t> result;
    for (const auto &field : found->second.fields) {
        if ((field.flags & 1) && (width || uint32_t(offset) != field.source)) continue;
        if (uint32_t(offset) < field.source || uint64_t(offset) + (width ? width : 1) > uint64_t(field.source) + field.size) continue;
        const auto value = int64_t(field.target) + offset - field.source;
        if (value > INT32_MAX || (result && *result != value)) return {};
        result = static_cast<int32_t>(value);
    }
    return result;
}
} // namespace dfcn::pe_runtime::typed_member_detail

namespace dfcn::pe_runtime {
template<typename Image, typename Catalog>
inline void discover_typed_members(const Image &image, const Catalog &catalog, address_runtime::State &state,
        const frame_detail::Evidence &frames, const address_runtime::Progress &report = {}) {
    using namespace address_runtime;
    using namespace typed_member_detail;
    const auto declared = layout(image, frames.typed_members);
    if (declared.types.empty() || frames.typed_source_graphs.empty()) return;
    const auto source = graphs(catalog, frames.typed_source_graphs);
    argument_alias_detail::Cache<Image> target_cache(image);
    SourceView<Catalog> source_view(catalog, source);
    TargetView<Image> target_view(image, target_cache);
    bounded_argument_detail::Cache<SourceView<Catalog>> source_bounds(source_view);
    bounded_argument_detail::Cache<TargetView<Image>> target_bounds(target_view);
    std::map<uint32_t, typed_frame_detail::Protection> source_protection, target_protection;
    std::map<uint32_t, uint32_t> native_owners, reverse_owners;
    std::map<uint32_t, Graph> target;
    std::set<uint32_t> root_owners;
    for (const auto &[owner, graph] : source) {
        auto native = resolve(state.function_owners, owner);
        if (!native) native = resolve(state.ranges, owner);
        if (!native) continue;
        native_owners.emplace(owner, native);
        const auto [old, fresh] = reverse_owners.emplace(native, owner);
        if (!fresh && old->second != owner) old->second = 0;
        for (const auto &[address, row] : graph.code) {
            const auto &op = row.decoded;
            if (op.opcode != 0x8d || !op.rex_w || op.p_67 || op.p_seg ||
                    op.modrm_mod || op.modrm_rm != 5 || (op.flags & F_SIB)) continue;
            const int64_t value = int64_t(address) + op.len + static_cast<int32_t>(op.disp.disp32);
            if (value > 0 && value <= UINT32_MAX && root_type(declared, static_cast<uint32_t>(value), false)) {
                root_owners.insert(owner); break;
            }
        }
    }
    for (auto at = native_owners.begin(); at != native_owners.end();) {
        if (!reverse_owners.at(at->second)) { target.erase(at->first); at = native_owners.erase(at); }
        else ++at;
    }
    using Analyses = std::map<uint32_t, Analysis>;
    Analyses before, after;
    std::map<uint32_t, uint32_t> entry_types;
    bool stable = false;
    for (size_t round = 0; round <= native_owners.size() * 2 + 1; ++round) {
        before.clear(); after.clear();
        std::map<uint32_t, std::set<uint32_t>> proposed;
        for (const auto &[owner, native] : native_owners) {
            const auto entry = entry_types.find(owner);
            if (entry == entry_types.end() && !root_owners.count(owner)) continue;
            const auto type = entry == entry_types.end() ? 0 : entry->second;
            const auto &proof = target_cache.get(native);
            if (!proof.valid) continue;
            if (!target.count(owner)) target.emplace(owner, Graph{native, proof.end, proof.code, proof.flow, proof.external_entries});
            const auto source_origin = [&](uint32_t address, uint32_t length, unsigned base) {
                return frame_detail::origin(frames, owner, address, length, base);
            };
            const auto target_origin = [&](uint32_t address, uint32_t, unsigned base) { return target_cache.get(native).origin(address, base); };
            if (!source_protection.count(owner)) {
                source_protection.emplace(owner, typed_frame_detail::protect(source.at(owner), source_origin, source_bounds));
                target_protection.emplace(owner, typed_frame_detail::protect(target.at(owner), target_origin, target_bounds));
                if (report && declared.receivers.count(owner)) for (const auto &item : {
                        std::pair<const char *, const typed_frame_detail::Protection *>("source", &source_protection.at(owner)),
                        std::pair<const char *, const typed_frame_detail::Protection *>("target", &target_protection.at(owner))}) {
                    if (!item.second->valid) {
                        char detail[100]{}; std::snprintf(detail, sizeof(detail), " owner=0x%x at=0x%x: ", owner, item.second->failure);
                        report(std::string("Native typed private spill unavailable: ") + item.first + detail + item.second->reason);
                    }
                }
            }
            auto left = analyze(source.at(owner), declared, type, false, source_origin, source_protection.at(owner));
            auto right = analyze(target.at(owner), declared, type, true, target_origin, target_protection.at(owner));
            if (!left.valid || !right.valid) continue;
            for (const auto &[callee, types] : left.calls) {
                const auto actual = native_owners.find(callee);
                const auto contract = declared.receivers.find(callee);
                if (actual == native_owners.end() || contract == declared.receivers.end() ||
                        types.size() != 1 || !*types.begin() || *types.begin() != contract->second) continue;
                const auto calls = right.calls.find(actual->second);
                // The independently identified caller and callee must agree
                // on their actual RCX object. Names alone do not type a call.
                if (calls == right.calls.end() || calls->second != types) continue;
                proposed[callee].insert(types.begin(), types.end());
            }
            before.emplace(owner, std::move(left)); after.emplace(owner, std::move(right));
        }
        std::map<uint32_t, uint32_t> next;
        for (const auto &[owner, types] : proposed) if (types.size() == 1) next.emplace(owner, *types.begin());
        if (next == entry_types) { stable = true; break; }
        entry_types = std::move(next);
    }
    if (!stable) {
        if (report) report("Native typed members deferred: receiver CALL graph did not reach an unambiguous fixed point");
        return;
    }
    Bindings bindings;
    for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    caller_detail::CanonicalContexts source_contexts(catalog, frames);
    size_t adapted_count = 0, published = 0;
    const auto falls_through = [](const Graph &graph, const Instruction &row) {
        const auto &op = row.decoded;
        return op.opcode != 0xe9 && op.opcode != 0xeb && op.opcode != 0xc2 && op.opcode != 0xc3 &&
            op.opcode != 0xcc && !(op.opcode == 0x0f && op.opcode2 == 0x0b) &&
            !(op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5)) &&
            !graph.flow.nonreturning_calls.count(row.address);
    };
    const auto proved_instruction = [&](const Graph &actual, const Instruction &row) -> const Instruction * {
        const auto native = bindings.lookup(row.address);
        const auto found = actual.code.find(native);
        if (!native || found == actual.code.end() || found->second.bytes.size() != row.bytes.size()) return nullptr;
        for (uint32_t byte = 0; byte < row.bytes.size(); ++byte)
            if (bindings.lookup(row.address + byte) != native + byte) return nullptr;
        return &found->second;
    };
    for (const auto &original : catalog.patterns) {
        if (!(original.flags & 1) || (original.flags & (2u | 2048u)) || !before.count(original.owner) || original.raw.empty()) continue;
        bool complete = true;
        for (uint32_t byte = 0; byte < original.raw.size(); ++byte)
            if (!bindings.lookup(original.reference + byte)) { complete = false; break; }
        if (complete) continue;
        const auto &source_graph = source.at(original.owner), &target_graph = target.at(original.owner);
        const auto &left_flow = before.at(original.owner), &right_flow = after.at(original.owner);
        Pattern pattern = original;
        struct Member { uint32_t offset, type, base; int32_t displacement; uint32_t position, width; };
        std::vector<Member> members;
        std::vector<uint32_t> boundaries;
        bool valid = true;
        for (uint32_t at = 0; at < pattern.raw.size();) {
            const auto found = source_graph.code.find(pattern.reference + at);
            if (found == source_graph.code.end() || uint64_t(at) + found->second.bytes.size() > pattern.raw.size() ||
                    std::memcmp(pattern.raw.data() + at, found->second.bytes.data(), found->second.bytes.size())) { valid = false; break; }
            const auto &instruction = found->second; const auto &op = instruction.decoded;
            boundaries.push_back(at);
            const auto incoming = left_flow.incoming.find(instruction.address);
            const auto base = method_call_detail::memory_base(op);
            const auto width = method_call_detail::displacement_width(op);
            if (incoming != left_flow.incoming.end() && base < 16 && base != 4 && width &&
                    !op.p_67 && !op.p_seg && incoming->second.registers[base]) {
                const auto type = incoming->second.registers[base];
                const auto source_offset = method_call_detail::displacement(instruction);
                const auto actual = field_offset(declared, type, source_offset, access_width(op));
                if (actual && *actual != source_offset) {
                    const auto position = at + method_call_detail::displacement_position(op);
                    if ((width == 1 && (*actual < INT8_MIN || *actual > INT8_MAX)) ||
                            std::any_of(pattern.fixups.begin(), pattern.fixups.end(), [&](const auto &fixup) {
                                return fixup.offset < position + width && uint64_t(fixup.offset) + fixup.width > position;
                            })) { valid = false; break; }
                    for (uint32_t b = 0; b < width; ++b) {
                        if (pattern.mask[position + b]) { valid = false; break; }
                        pattern.raw[position + b] = static_cast<unsigned char>(static_cast<uint32_t>(*actual) >> (b * 8));
                    }
                    members.push_back({at, type, base, *actual, position, width});
                }
            }
            at += op.len;
        }
        if (!valid || members.empty() || !source_contexts.unique(original, pattern)) continue;
        ++adapted_count;
        std::vector<uint32_t> matches;
        for (const auto &[address, first] : target_graph.code) {
            (void)first;
            if (uint64_t(address) + pattern.raw.size() > target_graph.end ||
                    !bindings.compatible(pattern.reference, static_cast<uint32_t>(pattern.raw.size()), address) ||
                    !pattern_matches(image, pattern, address)) continue;
            bool match = true, anchored = false;
            std::set<uint32_t> identities;
            for (const auto offset : boundaries) {
                const auto row = target_graph.code.find(address + offset);
                const auto source_row = source_graph.code.find(pattern.reference + offset);
                if (row == target_graph.code.end() || row->second.decoded.len != source_row->second.decoded.len) { match = false; break; }
                const auto bound = bindings.lookup(pattern.reference + offset);
                if (bound) {
                    if (bound != address + offset) { match = false; break; }
                    anchored = true;
                }
            }
            if (!match) continue;
            if (!anchored) {
                // An entirely unbound member interval may sit between two
                // independently proved instructions. Authenticate both real
                // fallthrough edges, including complete instruction mappings;
                // adjacency of arbitrary byte ranges is not an anchor.
                auto preceding = source_graph.code.lower_bound(pattern.reference);
                const auto following = source_graph.code.find(pattern.reference + static_cast<uint32_t>(pattern.raw.size()));
                if (preceding != source_graph.code.begin() && following != source_graph.code.end()) {
                    --preceding;
                    const auto *native_before = proved_instruction(target_graph, preceding->second);
                    const auto *native_after = proved_instruction(target_graph, following->second);
                    const auto &source_last = source_graph.code.at(pattern.reference + boundaries.back());
                    const auto &native_last = target_graph.code.at(address + boundaries.back());
                    anchored = native_before && native_after &&
                        preceding->first + preceding->second.decoded.len == pattern.reference &&
                        native_before->address + native_before->decoded.len == address &&
                        native_after->address == address + pattern.raw.size() &&
                        falls_through(source_graph, preceding->second) && falls_through(target_graph, *native_before) &&
                        falls_through(source_graph, source_last) && falls_through(target_graph, native_last);
                }
            }
            for (const auto &member : members) {
                const auto values = right_flow.incoming.find(address + member.offset);
                if (values == right_flow.incoming.end() || values->second.registers[member.base] != member.type ||
                        method_call_detail::displacement(target_graph.code.at(address + member.offset)) != member.displacement) {
                    match = false; break;
                }
            }
            if (!match) continue;
            for (const auto &fixup : pattern.fixups) {
                const auto actual = operand_target(image, pattern, address, fixup);
                uint32_t expected = 0;
                const bool local = fixup.target >= pattern.reference &&
                    uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size() &&
                    std::binary_search(boundaries.begin(), boundaries.end(), fixup.target - pattern.reference);
                if (local) expected = address + fixup.target - pattern.reference;
                else {
                    expected = bindings.lookup(fixup.target);
                    if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
                }
                // __ImageBase is the sole valid zero-RVA operand identity.
                if ((!expected && fixup.target) || actual != expected) { match = false; break; }
                if (!local && expected && caller_detail::semantic_operand(pattern, fixup)) identities.insert(fixup.target);
            }
            if (match && (anchored || identities.size() >= 2)) matches.push_back(address);
            if (matches.size() > 1) break;
        }
        if (matches.size() != 1) continue;
        const auto native = matches.front(); const auto *bytes = image.read(native, pattern.raw.size());
        if (!bytes) continue;
        // Check all existing byte evidence before committing the span.
        for (uint32_t at = 0; at < pattern.raw.size(); ++at) {
            const auto previous = changes.find(pattern.reference + at);
            if (previous != changes.end() && (previous->second.reference != original.raw[at] || previous->second.native != bytes[at])) {
                valid = false; break;
            }
        }
        if (!valid) continue;
        bindings.add(pattern.reference, static_cast<uint32_t>(pattern.raw.size()), native);
        for (uint32_t at = 0; at < pattern.raw.size(); ++at) if (original.raw[at] != bytes[at])
            changes[pattern.reference + at] = {pattern.reference + at, original.raw[at], bytes[at]};
        ++published;
    }
    state.ranges = bindings.export_ranges(); state.bytes.clear();
    for (const auto &[address, value] : changes) { (void)address; state.bytes.push_back(value); }
    if (report) report("Native typed members: " + std::to_string(entry_types.size()) + " RCX object contracts; " +
        std::to_string(adapted_count) + " complete contexts; " + std::to_string(published) + " bound contexts");
}
} // namespace dfcn::pe_runtime
