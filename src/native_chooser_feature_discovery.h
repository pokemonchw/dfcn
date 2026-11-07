#pragma once
#include "native_inline_resize_discovery.h"
#include "native_method_call_discovery.h"
#include <optional>

namespace dfcn::pe_runtime::chooser_feature_detail {
using namespace address_runtime;
using namespace display_decode;
using Code = inline_resize_detail::Code;
struct Contract {
    uint32_t identity, owner, primary, draw, draw_next, grow, append, grow_next, cleanup, begin, end;
    Pattern footer;
    std::vector<Range> spans;
    std::vector<uint32_t> resizes;
};
struct RowContract {
    uint32_t identity, owner, primary, draw, draw_next, resize, constructor, cleanup;
    uint32_t frame; int32_t object;
    uint32_t header, latch, begin, construction_end, draw_receiver;
    std::vector<uint32_t> calls, writes, resizes;
    std::vector<std::pair<uint32_t, uint32_t>> roles;
    std::vector<Range> spans;
    uint32_t literal_method, literal_kind;
    std::vector<unsigned char> literal;
    std::vector<std::vector<unsigned char>> literal_variants;
};
inline std::vector<Contract> read(const std::vector<unsigned char> &blob, std::vector<RowContract> *rows = nullptr) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    const auto version = reader.number();
    if (std::memcmp(magic, "DFCNCF01", 8) || (version != 1 && version != 2 && version != 3))
        throw std::runtime_error("Unsupported chooser suffix evidence");
    std::vector<Contract> result(reader.count(64)); std::set<uint32_t> identities;
    for (auto &entry : result) {
        entry.identity = reader.number(); entry.owner = reader.number(); entry.primary = reader.number();
        entry.draw = reader.number(); entry.draw_next = reader.number(); entry.grow = reader.number(); entry.append = reader.number();
        entry.grow_next = reader.number(); entry.cleanup = reader.number(); entry.begin = reader.number(); entry.end = reader.number();
        entry.footer.reference = reader.number(); entry.footer.owner = entry.owner; entry.footer.raw = reader.blob();
        entry.footer.mask.assign(entry.footer.raw.size(), 0xff);
        entry.footer.fixups.resize(reader.count(1024));
        for (auto &fixup : entry.footer.fixups) {
            fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if (fixup.width != 4 || uint64_t(fixup.offset) + fixup.width > entry.footer.raw.size() || !fixup.target ||
                    fixup.next > entry.footer.raw.size()) throw std::runtime_error("Invalid chooser footer operand");
            std::fill_n(entry.footer.mask.begin() + fixup.offset, fixup.width, 0);
        }
        entry.spans.resize(reader.count(4096)); uint32_t previous = entry.begin;
        for (auto &span : entry.spans) {
            span = {reader.number(), reader.number(), 0};
            if (span.begin < previous || span.begin == entry.begin || span.end <= span.begin || span.end > entry.end)
                throw std::runtime_error("Invalid chooser suffix ownership");
            previous = span.end;
        }
        entry.resizes.resize(reader.count(64));
        for (auto &reference : entry.resizes) reference = reader.number();
        if (!entry.identity || !identities.insert(entry.identity).second || !entry.owner || !entry.append || !entry.cleanup ||
                !(entry.owner < entry.primary && entry.primary < entry.grow && entry.grow < entry.draw) ||
                uint64_t(entry.draw) + 5 != entry.begin || entry.begin >= entry.end || entry.end > entry.footer.reference ||
                entry.grow_next > 255 || entry.draw_next > 255 || entry.footer.raw.empty() || entry.footer.raw.size() > 512 ||
                entry.spans.empty() || entry.resizes.size() < 2 || !std::is_sorted(entry.resizes.begin(), entry.resizes.end()) ||
                std::adjacent_find(entry.resizes.begin(), entry.resizes.end()) != entry.resizes.end())
            throw std::runtime_error("Invalid chooser suffix contract");
    }
    if (version >= 2) for (auto count = reader.count(64); count; --count) {
        RowContract row{};
        row.identity = reader.number(); row.owner = reader.number(); row.primary = reader.number();
        row.draw = reader.number(); row.draw_next = reader.number(); row.resize = reader.number();
        row.constructor = reader.number(); row.cleanup = reader.number(); row.frame = reader.number();
        row.object = static_cast<int32_t>(reader.number()); row.header = reader.number(); row.latch = reader.number();
        row.begin = reader.number(); row.construction_end = reader.number(); row.draw_receiver = reader.number();
        const auto numbers = [&](auto &values) {
            values.resize(reader.count(4096));
            for (auto &value : values) value = reader.number();
            if (!std::is_sorted(values.begin(), values.end()) ||
                    std::adjacent_find(values.begin(), values.end()) != values.end())
                throw std::runtime_error("Duplicate or unordered chooser row roles");
        };
        numbers(row.calls);
        row.roles.resize(reader.count(64));
        for (auto &role : row.roles) {
            role = {reader.number(), reader.number()};
            if (!role.first || (role.second != 1 && role.second != 2))
                throw std::runtime_error("Invalid chooser row output argument");
        }
        if (!std::is_sorted(row.roles.begin(), row.roles.end()) ||
                std::adjacent_find(row.roles.begin(), row.roles.end()) != row.roles.end())
            throw std::runtime_error("Duplicate or unordered chooser row output roles");
        numbers(row.writes);
        row.spans.resize(reader.count(4096)); uint32_t previous = row.draw + 5;
        for (auto &span : row.spans) {
            span = {reader.number(), reader.number(), 0};
            if (span.begin <= row.draw + 5 || span.begin < previous || span.end <= span.begin || span.end > row.latch)
                throw std::runtime_error("Invalid chooser row suffix ownership");
            previous = span.end;
        }
        numbers(row.resizes);
        row.literal_method = reader.number(); row.literal_kind = reader.number(); row.literal = reader.blob(256);
        if (version >= 3) {
            row.literal_variants.resize(reader.count(8));
            for (auto &value : row.literal_variants) {
                value = reader.blob(256);
                if (row.literal_kind != 2 || value == row.literal || value.size() < 2 || value.back() ||
                        std::find(value.begin(), std::prev(value.end()), 0) != std::prev(value.end()))
                    throw std::runtime_error("Invalid chooser UI literal variant");
            }
            if (!std::is_sorted(row.literal_variants.begin(), row.literal_variants.end()) ||
                    std::adjacent_find(row.literal_variants.begin(), row.literal_variants.end()) != row.literal_variants.end())
                throw std::runtime_error("Duplicate or unordered chooser UI literal variants");
        }
        if (!row.identity || !identities.insert(row.identity).second || !row.owner || !row.resize ||
                !row.constructor || !row.cleanup || !row.literal_method || !row.draw_receiver || row.draw_next > 255 ||
                (row.frame != 4 && row.frame != 5) || (row.literal_kind != 1 && row.literal_kind != 2) ||
                row.literal.size() < 2 || row.literal.back() ||
                std::find(row.literal.begin(), std::prev(row.literal.end()), 0) != std::prev(row.literal.end()) ||
                !(row.owner < row.header && row.header <= row.begin && row.begin < row.construction_end &&
                  row.construction_end < row.primary && row.primary < row.draw && row.draw < row.latch) ||
                row.roles.empty() || row.calls.empty() || row.spans.empty() || row.resizes.size() != 2)
            throw std::runtime_error("Invalid complete chooser row contract");
        if (rows) rows->push_back(std::move(row));
    }
    reader.finish(); return result;
}
inline std::vector<method_call_detail::SuffixFeature> absence_contracts(const std::vector<unsigned char> &blob) {
    std::vector<method_call_detail::SuffixFeature> result;
    std::vector<RowContract> rows;
    for (const auto &entry : read(blob, &rows)) {
        method_call_detail::SuffixFeature feature{};
        feature.identity = entry.identity; feature.owner = entry.owner; feature.spans = entry.spans;
        result.push_back(std::move(feature));
    }
    for (const auto &entry : rows) {
        method_call_detail::SuffixFeature feature{};
        feature.identity = entry.identity; feature.owner = entry.owner; feature.spans = entry.spans;
        result.push_back(std::move(feature));
    }
    return result;
}
inline bool covered(const std::vector<Range> &spans, uint32_t reference, uint32_t width) {
    return std::any_of(spans.begin(), spans.end(), [&](const auto &span) {
        return span.begin <= reference && uint64_t(reference) + width <= span.end;
    });
}
inline bool overlaps(const State &state, const Contract &entry) {
    for (const auto &span : entry.spans) for (const auto &range : state.ranges)
        if (range.begin < span.end && span.begin < range.end) return true;
    return false;
}
inline bool nop(const Instruction &instruction) {
    return instruction.decoded.opcode == 0x90 ||
        (instruction.decoded.opcode == 0x0f && instruction.decoded.opcode2 == 0x1f);
}
inline const Instruction *previous(const Code &code, uint32_t address) {
    auto at = code.lower_bound(address);
    if (at == code.begin()) return nullptr;
    --at;
    return at->first + at->second.decoded.len == address ? &at->second : nullptr;
}
// A complete leaf can retain its instruction/branch graph while a named
// receiver member moves. The caller supplies the independently bound global
// object as RCX; only a real MOV alias of that entry value can authorize a
// member displacement. All other bytes, including indexed expressions and
// every branch, remain exact. No register numbering or target offset is a
// release-specific default.
template<typename Image>
inline bool receiver_leaf(const Image &image, const State &state, const Pattern &pattern,
        uint32_t native, uint32_t object, std::string &failure) {
    const auto reject = [&](const char *why) { failure = why; return false; };
    if (pattern.flags != 17 || pattern.reference != pattern.owner || pattern.raw.empty() ||
            pattern.raw.size() > 65536 || !resolve(state.ranges, object)) return reject("no complete receiver leaf contract");
    const auto *section = image.section(native, pattern.raw.size());
    const auto *actual = image.read(native, pattern.raw.size());
    if (!section || !(section->flags & Image::execute_flag) || !actual) return reject("receiver leaf leaves executable storage");
    std::vector<Instruction> code;
    if (!method_call_detail::decode_pattern(pattern, code)) return reject("receiver source leaf has an undecoded instruction");
    std::vector<unsigned char> expected = pattern.raw;
    std::array<bool, 16> aliases{}; aliases[1] = true;
    bool branched = false; uint32_t alias_prefix_end = 0; size_t members = 0;
    for (size_t index = 0; index < code.size(); ++index) {
        const auto &instruction = code[index]; const auto &op = instruction.decoded;
        if (op.opcode == 0xe8 || (op.opcode == 0xff && op.modrm_reg >= 2))
            return reject("receiver leaf contains an unproved call or indirect edge");
        if (const auto branch = method_call_detail::branch_destination(instruction)) {
            if (branch < pattern.reference || branch >= uint64_t(pattern.reference) + pattern.raw.size() ||
                    std::none_of(code.begin(), code.end(), [&](const auto &row) { return row.address == branch; }))
                return reject("receiver leaf has an external or unaligned edge");
            if (!branched) alias_prefix_end = instruction.address;
            // Entry aliases are established only by the straight-line prefix.
            // Re-entering it could copy a clobbered RCX into a retained alias;
            // the remaining-arm write proof below cannot authorize that path.
            if (branch < alias_prefix_end)
                return reject("receiver leaf re-enters its entry alias prefix");
            if (!branched) {
                // At a join keep only entry aliases whose register is never
                // overwritten on any remaining arm. A textual predecessor
                // alone cannot establish an alias across a branch.
                for (unsigned reg = 0; reg < 16; ++reg) if (aliases[reg])
                    for (size_t after = index; after < code.size(); ++after)
                        if (method_call_detail::writes_gpr(code[after].decoded, reg)) { aliases[reg] = false; break; }
                branched = true;
            }
        }
        const auto base = method_call_detail::memory_base(op);
        if (base < 16 && aliases[base] && op.modrm_mod != 3) {
            const auto width = op.opcode == 0x8d ? 0u : access_width(op);
            const auto offset = method_call_detail::displacement(instruction);
            const auto displacement_width = method_call_detail::displacement_width(op);
            if (offset < 0 || width == UINT32_MAX || (displacement_width != 1 && displacement_width != 4))
                return reject("receiver member has no exact bounded operand");
            std::optional<uint32_t> translated;
            for (const auto &field : state.fields) {
                if (field.object != object || field.sources < 2 || uint32_t(offset) < field.offset ||
                        (width ? uint64_t(offset) + width > uint64_t(field.offset) + field.width : uint32_t(offset) != field.offset)) continue;
                const uint64_t value = uint64_t(field.native_offset) + uint32_t(offset) - field.offset;
                if (value > INT32_MAX || (translated && *translated != value)) return reject("receiver member identity is ambiguous");
                translated = static_cast<uint32_t>(value);
            }
            if (!translated || (displacement_width == 1 && *translated > INT8_MAX))
                return reject("receiver member has no compatible discovered field");
            const auto at = instruction.address - pattern.reference + method_call_detail::displacement_position(op);
            const int32_t value = static_cast<int32_t>(*translated);
            std::memcpy(expected.data() + at, &value, displacement_width); ++members;
        }
        const bool copy = !branched && op.rex_w && op.modrm_mod == 3 && (op.opcode == 0x8b || op.opcode == 0x89);
        const auto destination = op.opcode == 0x89 ? inline_resize_detail::rm(op) : inline_resize_detail::reg(op);
        const auto origin = op.opcode == 0x89 ? inline_resize_detail::reg(op) : inline_resize_detail::rm(op);
        const bool copied = copy && aliases[origin];
        for (unsigned reg = 0; reg < 16; ++reg) if (method_call_detail::writes_gpr(op, reg)) aliases[reg] = false;
        if (copy) aliases[destination] = copied;
    }
    if (!members) return reject("receiver leaf has no discovered member evidence");
    for (const auto &fixup : pattern.fixups) {
        const auto target = inline_resize_callee(state, fixup.target);
        if (!target || fixup.width != 4 || fixup.offset + 4 > expected.size() || (fixup.kind & 0xff) != 0)
            return reject("receiver leaf has an unresolved external operand");
        const int64_t value = int64_t(target) - native - fixup.next;
        if (value < INT32_MIN || value > INT32_MAX) return reject("receiver leaf operand is out of range");
        const int32_t relative = static_cast<int32_t>(value);
        std::memcpy(expected.data() + fixup.offset, &relative, 4);
    }
    if (std::memcmp(expected.data(), actual, expected.size())) return reject("complete typed receiver leaf differs");
    return true;
}
template<typename Image>
inline std::set<uint32_t> footer_sites(const Image &image, const State &state, const Contract &entry,
        const Code &code, const frame_detail::TargetRbpFrame &frame, const std::vector<Pattern> &patterns,
        std::string &diagnostic) {
    std::vector<Instruction> source;
    if (!method_call_detail::decode_pattern(entry.footer, source)) return {};
    source.erase(std::remove_if(source.begin(), source.end(), nop), source.end());
    if (source.empty()) return {};
    method_call_detail::Contract contract{}; contract.pattern = entry.footer;
    std::set<uint32_t> result;
    size_t furthest = 0;
    for (auto first = code.begin(); first != code.end(); ++first) {
        auto at = first; bool matches = true;
        std::map<std::pair<unsigned, int32_t>, int32_t> locals, inverse;
        for (size_t index = 0; index < source.size(); ++index) {
            const auto &instruction = source[index];
            while (at != code.end() && nop(at->second)) {
                const auto next = code.find(at->first + at->second.decoded.len);
                at = next;
            }
            bool same = at != code.end() && method_call_detail::equivalent(image, state, contract, instruction, at->second,
                false, 0, frame, {}, locals, inverse);
            std::string leaf_failure;
            if (!same && index && index + 1 == source.size() && instruction.decoded.opcode == 0xe8 &&
                    at != code.end() && at->second.decoded.opcode == 0xe8) {
                const auto callee = inline_resize_detail::direct_target(instruction);
                const auto target = inline_resize_detail::direct_target(at->second);
                const auto known = inline_resize_callee(state, callee);
                const auto &receiver = source[index - 1]; const auto &op = receiver.decoded;
                const auto position = receiver.address - entry.footer.reference + method_call_detail::displacement_position(op);
                const auto global = std::find_if(entry.footer.fixups.begin(), entry.footer.fixups.end(),
                    [&](const auto &value) { return value.offset == position && value.width == 4 && !(value.kind & 0x1ff); });
                const auto leaf = std::find_if(patterns.begin(), patterns.end(),
                    [&](const auto &value) { return value.reference == callee && value.flags == 17 &&
                        value.reference == value.owner; });
                if (!known && op.opcode == 0x8d && op.rex_w && inline_resize_detail::reg(op) == 1 &&
                        op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB) && !op.p_67 &&
                        global != entry.footer.fixups.end() && leaf != patterns.end())
                    same = receiver_leaf(image, state, *leaf, target, global->target, leaf_failure);
            }
            if (!same) {
                if (index >= furthest) {
                    furthest = index; std::ostringstream reason;
                    reason << "matched " << index << '/' << source.size() << " footer instructions; source=0x" << std::hex
                        << instruction.address << " target=0x" << (at == code.end() ? 0 : at->first);
                    if (!leaf_failure.empty()) reason << "; " << leaf_failure;
                    diagnostic = reason.str();
                }
                matches = false; break;
            }
            at = code.find(at->first + at->second.decoded.len);
        }
        if (matches && !nop(first->second)) result.insert(first->first);
    }
    return result;
}
// All paths from this particular name draw must end in the independently
// identified footer. Unknown calls, output, stores, cycles and exits refuse
// absence. The sole permitted call destroys the very same native string.
inline bool closed_suffix(const Code &code, uint32_t start, uint32_t footer, uint32_t cleanup,
        const inline_resize_detail::Operation &object) {
    using namespace inline_resize_detail;
    using Node = std::tuple<uint32_t, bool, bool>;
    std::map<Node, unsigned> visits;
    std::function<bool(uint32_t, bool, bool)> visit = [&](uint32_t address, bool owns, bool cleaned) {
        if (address == footer) return cleaned;
        const Node key{address, owns, cleaned}; auto &mark = visits[key];
        if (mark) return mark == 2;
        if (visits.size() > 128) return false;
        mark = 1;
        const auto found = code.find(address); if (found == code.end()) return false;
        const auto &instruction = found->second; const auto &op = instruction.decoded;
        if (frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) return false;
        if (const auto destination = method_call_detail::branch_destination(instruction)) {
            const bool good = visit(destination, owns, cleaned) &&
                ((op.opcode == 0xe9 || op.opcode == 0xeb) || visit(address + op.len, owns, cleaned));
            if (good) mark = 2;
            return good;
        }
        if (op.opcode == 0xe8) {
            if (cleaned || !owns || direct_target(instruction) != cleanup) return false;
            cleaned = true; owns = false;
        } else if (nop(instruction)) {
        } else if (op.opcode == 0x8d && op.rex_w && reg(op) == 1 && !cleaned) {
            uint32_t base; int32_t offset;
            if (!local(op, base, offset) || base != object.frame || offset != object.object) return false;
            owns = true;
        } else {
            if (!cleaned || !(op.flags & F_MODRM)) return false;
            // Footer coordinates may be computed in registers or reloaded
            // from this function's proven frame. No memory effect is allowed.
            if (op.modrm_mod != 3) {
                uint32_t base; int32_t offset;
                if (op.opcode != 0x8d && (op.opcode != 0x8b || !local(op, base, offset))) return false;
            } else if (op.opcode != 0x8b && op.opcode != 0x89 && op.opcode != 0x03 && op.opcode != 0x2b &&
                    op.opcode != 0x81 && op.opcode != 0x83 &&
                    !(op.opcode == 0xff && op.modrm_reg <= 1)) return false;
        }
        const bool good = visit(address + op.len, owns, cleaned);
        if (good) mark = 2;
        return good;
    };
    return visit(start, false, false);
}
// The alternative arm belongs to the same width comparison and joins the
// same dots/draw sequence. Its actual RCX/RDX/R8 arguments are proved here;
// its source CALL key therefore receives an instruction binding, unlike an
// interchangeable inline observer configuration key.
inline uint32_t grow_arm(const Code &code, uint32_t shrink, const inline_resize_detail::Operation &object,
        uint32_t append, uint32_t draw, uint32_t draw_target, const std::set<uint32_t> &targets) {
    using namespace inline_resize_detail;
    const auto *branch = previous(code, shrink);
    const auto *compare = branch ? previous(code, branch->address) : nullptr;
    if (!branch || !compare || branch->decoded.opcode != 0x77 || compare->decoded.opcode != 0x3b ||
            !compare->decoded.rex_w || compare->decoded.modrm_mod != 3 || reg(compare->decoded) != object.width ||
            rm(compare->decoded) != 1) return 0;
    // Follow the straight predecessor chain to the actual size read. All
    // intervening instructions must preserve RCX; a CALL is always a clobber.
    bool size = false; uint32_t size_at = 0; auto before = previous(code, compare->address);
    for (unsigned count = 0; before && count < 32; ++count) {
        const auto &op = before->decoded; uint32_t base; int32_t offset;
        if (op.opcode == 0x8b && op.rex_w && reg(op) == 1 && local(op, base, offset) &&
                base == object.frame && int64_t(offset) == int64_t(object.object) + 16) {
            size = true; size_at = before->address; break;
        }
        if (op.opcode == 0xe8 || (op.opcode == 0xff && op.modrm_reg >= 2) ||
                frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) break;
        if (op.flags & F_MODRM) {
            const bool read = op.opcode == 0x39 || op.opcode == 0x3b || op.opcode == 0x85 ||
                ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 7);
            if (!read && (reg(op) == 1 || (op.modrm_mod == 3 && rm(op) == 1))) break;
        } else if (op.opcode == 0xb9 || op.opcode == 0x59) break;
        before = previous(code, before->address);
    }
    if (!size) return 0;
    const auto alternate = targets.upper_bound(size_at);
    if (alternate != targets.end() && *alternate <= compare->address) return 0;
    auto at = code.find(method_call_detail::branch_destination(*branch));
    const auto take = [&](auto predicate) {
        if (at == code.end() || !predicate(at->second.decoded)) return false;
        at = code.find(at->first + at->second.decoded.len); return true;
    };
    if (!take([&](const auto &op) { return op.opcode == 0x8b && op.rex_w && op.modrm_mod == 3 &&
            reg(op) == 2 && rm(op) == object.width; }) ||
        !take([&](const auto &op) {
            if (op.opcode != 0x2b || !op.rex_w || reg(op) != 2) return false;
            if (op.modrm_mod == 3) return rm(op) == 1;
            uint32_t base; int32_t offset;
            return local(op, base, offset) && base == object.frame && int64_t(offset) == int64_t(object.object) + 16;
        }) ||
        !take([&](const auto &op) { return (op.opcode == 0x31 || op.opcode == 0x33) && !op.rex_w &&
            op.modrm_mod == 3 && reg(op) == 8 && rm(op) == 8; }) ||
        !take([&](const auto &op) { uint32_t base; int32_t offset; return op.opcode == 0x8d && op.rex_w && reg(op) == 1 &&
            local(op, base, offset) && base == object.frame && offset == object.object; }) ||
        at == code.end() || direct_target(at->second) != append) return 0;
    const auto after = code.find(shrink + object.length);
    if (after == code.end() || (after->second.decoded.opcode != 0xeb && after->second.decoded.opcode != 0xe9) ||
            method_call_detail::branch_destination(after->second) != at->first + at->second.decoded.len ||
            !reaches_draw(code, at->first + at->second.decoded.len, draw, draw_target, object)) return 0;
    return at->first;
}
} // namespace dfcn::pe_runtime::chooser_feature_detail

namespace dfcn::pe_runtime {
inline void complete_chooser_features(address_runtime::State &state, const std::vector<unsigned char> &blob,
        const std::vector<unsigned char> &inline_blob) {
    using namespace chooser_feature_detail;
    const auto specs = inline_resize_detail::read(inline_blob);
    for (const auto &entry : read(blob)) {
        if (!std::binary_search(state.absent_features.begin(), state.absent_features.end(), entry.identity)) continue;
        const auto primary = std::find_if(state.inline_resizes.begin(), state.inline_resizes.end(),
            [&](const auto &value) { return value.reference == entry.primary; });
        if (primary == state.inline_resizes.end() || primary->owner != inline_resize_function(state, entry.owner) ||
                !resolve(state.ranges, entry.draw) ||
                resolve(state.ranges, entry.draw + 5) != resolve(state.ranges, entry.draw) + 5 ||
                !resolve(state.ranges, entry.grow) || overlaps(state, entry))
            throw std::runtime_error("Chooser absence lost its positive name/grow/draw ownership");
        for (const auto reference : entry.resizes) {
            const auto source = std::find_if(specs.begin(), specs.end(), [&](const auto &spec) { return spec.reference == reference; });
            if (source == specs.end() || !covered(entry.spans, reference, static_cast<uint32_t>(source->original.size())) ||
                    !covered(state.absent_spans, reference, static_cast<uint32_t>(source->original.size())) ||
                    std::any_of(state.inline_resizes.begin(), state.inline_resizes.end(),
                        [&](const auto &binding) { return binding.reference == reference; }))
                throw std::runtime_error("Chooser absence contradicts an owned inline operation");
        }
    }
}
template<typename Image, typename Catalog>
inline void discover_chooser_features(const Image &image, const Catalog &catalog, address_runtime::State &state,
        const address_runtime::Progress &report = {}) {
    using namespace chooser_feature_detail;
    using namespace inline_resize_detail;
    const auto specs = inline_resize_detail::read(catalog.inline_resizes);
    for (const auto &entry : chooser_feature_detail::read(catalog.chooser_features)) {
        if (overlaps(state, entry)) continue; // A present suffix keeps all ordinary contracts.
        const auto source = std::find_if(specs.begin(), specs.end(), [&](const auto &spec) { return spec.reference == entry.primary; });
        if (source == specs.end()) throw std::runtime_error("Chooser main name has no inline contract");
        const auto owner = inline_resize_function(state, entry.owner), callee = inline_resize_callee(state, source->callee);
        const auto producer = inline_resize_callee(state, source->producer), cleanup = inline_resize_callee(state, entry.cleanup);
        const auto append = inline_resize_callee(state, entry.append);
        const auto reject = [&](const std::string &reason) { if (report) {
            std::ostringstream message; message << "Chooser suffix unresolved: owner=0x" << std::hex << entry.owner
                << "->0x" << owner << ' ' << reason; report(message.str()); } };
        if (!owner || !callee || !producer || !cleanup || !append) { reject("unmapped name/cleanup/append identity"); continue; }
        chooser_feature_detail::Code code; std::set<uint32_t> targets; bool valid = true;
        for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
            std::vector<Instruction> region;
            if (!decode(image, begin, end, region, &targets)) { valid = false; break; }
            for (auto &instruction : region) code.emplace(instruction.address, std::move(instruction));
        }
        if (!valid || code.empty()) { reject("incomplete logical owner CFG"); continue; }
        const auto frame = frame_detail::target_rbp_frame(image, owner);
        std::string footer_diagnostic;
        const auto sinks = footer_sites(image, state, entry, code, frame, catalog.patterns, footer_diagnostic);
        if (sinks.size() != 1) { reject("footer identities have " + std::to_string(sinks.size()) + " candidates; " + footer_diagnostic); continue; }
        struct Match { InlineResizeBinding resize; uint32_t draw, grow; };
        std::vector<Match> matches;
        for (const auto &[address, instruction] : code) {
            if (instruction.decoded.opcode != 0x89) continue;
            const auto function = frame_detail::function_at(image, address);
            if (function == image.functions.end()) continue;
            const auto size = (std::min)(uint32_t(128), function->end - address);
            const auto object = operation(image.read(address, size), size);
            if (!object || (object.frame == 5 && (!frame.valid || address < frame.ready || address + object.length > frame.end))) continue;
            const auto interior = targets.upper_bound(address);
            if (interior != targets.end() && *interior < address + object.length) continue;
            if (!producer_role(code, address, object, producer, source->argument)) continue;
            const auto draws = paired_draws(image, code, address + object.length, callee, object, source->flags & 1);
            if (draws.size() != 1) continue;
            const auto draw = *draws.begin();
            if (!closed_suffix(code, draw + code.at(draw).decoded.len, *sinks.begin(), cleanup, object)) continue;
            const auto grow = grow_arm(code, address, object, append, draw, callee, targets);
            if (!grow) continue;
            matches.push_back({{entry.primary, owner, address, object.length, object.frame, object.width, object.object, source->flags}, draw, grow});
        }
        if (matches.size() != 1) { reject("closed name/grow/footer paths=" + std::to_string(matches.size())); continue; }
        const auto &match = matches.front();
        const auto old = std::find_if(state.inline_resizes.begin(), state.inline_resizes.end(),
            [&](const auto &value) { return value.reference == entry.primary; });
        if (old != state.inline_resizes.end() && old->native_instruction != match.resize.native_instruction)
            throw std::runtime_error("Chooser name identity contradicts its inline binding");
        for (const auto &value : state.inline_resizes)
            if ((value.native_instruction == match.resize.native_instruction && value.reference != entry.primary) ||
                    std::binary_search(entry.resizes.begin(), entry.resizes.end(), value.reference))
                throw std::runtime_error("Chooser suffix absence contradicts a positive inline binding");
        Bindings bindings;
        for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
        std::map<uint32_t, Byte> changes;
        for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
        const auto bind_call = [&](uint32_t reference, uint32_t native, uint32_t target) {
            if (!bindings.compatible(reference, 5, native)) throw std::runtime_error("Chooser call contradicts instruction evidence");
            bindings.add(reference, 5, native);
            std::array<unsigned char, 5> original{0xe8}; const int32_t displacement = target - reference - 5;
            std::memcpy(original.data() + 1, &displacement, 4);
            const auto &actual = code.at(native).bytes;
            for (unsigned at = 0; at < 5; ++at) if (original[at] != actual[at]) {
                const Byte byte{reference + at, original[at], actual[at]};
                const auto [found, inserted] = changes.emplace(byte.address, byte);
                if (!inserted && (found->second.reference != byte.reference || found->second.native != byte.native))
                    throw std::runtime_error("Chooser call bytes contradict existing evidence");
            }
        };
        bind_call(entry.draw, match.draw, source->callee); bind_call(entry.grow, match.grow, entry.append);
        const auto bind_return = [&](uint32_t reference, uint32_t native, unsigned char original) {
            if (!bindings.compatible(reference, 1, native)) throw std::runtime_error("Chooser caller return boundary conflicts");
            bindings.add(reference, 1, native);
            const auto actual = code.at(native).bytes.front();
            if (original == actual) return;
            const Byte byte{reference, original, actual}; const auto [found, inserted] = changes.emplace(reference, byte);
            if (!inserted && (found->second.reference != original || found->second.native != actual))
                throw std::runtime_error("Chooser caller return byte contradicts existing evidence");
        };
        // These are caller identities, independently meaningful even when
        // the instruction executed after the CALL changes between releases.
        // Publish one boundary byte, never the following source instruction.
        bind_return(entry.draw + 5, match.draw + 5, static_cast<unsigned char>(entry.draw_next));
        bind_return(entry.grow + 5, match.grow + 5, static_cast<unsigned char>(entry.grow_next));
        state.ranges = bindings.export_ranges(); state.bytes.clear();
        for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
        if (old == state.inline_resizes.end()) state.inline_resizes.push_back(match.resize);
        state.absent_features.push_back(entry.identity);
        state.absent_spans.insert(state.absent_spans.end(), entry.spans.begin(), entry.spans.end());
        std::sort(state.inline_resizes.begin(), state.inline_resizes.end(), [](const auto &a, const auto &b) { return a.reference < b.reference; });
        std::sort(state.absent_features.begin(), state.absent_features.end());
        std::sort(state.absent_spans.begin(), state.absent_spans.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
        if (report) report("Native chooser suffix: one formatter/name/grow/draw path closes at the independently identified footer; " +
            std::to_string(entry.resizes.size()) + " separate second-line resize contracts proved absent");
    }
}
} // namespace dfcn::pe_runtime
