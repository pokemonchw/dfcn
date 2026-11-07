#pragma once
#include <iterator>

#include "native_address_scan.h"
#include "native_display_discovery.h"
#include "native_frame_discovery.h"
#include "native_frame_registers.h"
#include "native_receiver_alias_evidence.h"
#include "native_argument_alias_evidence.h"
#include "native_global_value_evidence.h"

namespace dfcn::pe_runtime {
namespace caller_detail {
inline bool alignment_nop(const display_decode::hde64s &op,
        const std::vector<unsigned char> &bytes) {
    // Only complete architectural NOPs may change padding width. In
    // particular F3 90 is PAUSE, and REX 90 can exchange a real register.
    if (!op.len || op.len != bytes.size() || (op.flags & F_ERROR) || op.rex ||
            op.p_67 || op.p_rep || op.p_lock || op.p_seg) return false;
    size_t at = 0;
    while (at < bytes.size() && bytes[at] == 0x66) ++at;
    if (at + 1 == bytes.size() && bytes[at] == 0x90) return true;
    return at + 2 < bytes.size() && bytes[at] == 0x0f && bytes[at + 1] == 0x1f &&
        op.opcode == 0x0f && op.opcode2 == 0x1f && (op.flags & F_MODRM) && !op.modrm_reg;
}
inline std::vector<frame_detail::Member> members_for(const frame_detail::Evidence &frames,
        const address_runtime::Pattern &pattern) {
    std::map<uint32_t, frame_detail::Member> unique;
    const auto append = [&](uint32_t owner, uint32_t reference, const std::vector<unsigned char> &raw,
                            const frame_detail::Member &member) {
        if (owner != pattern.owner) return;
        const auto load = uint64_t(reference) + member.load;
        const auto instruction = uint64_t(reference) + member.instruction;
        const auto end = uint64_t(reference) + member.displacement + member.width;
        if (load < pattern.reference || end > uint64_t(pattern.reference) + pattern.raw.size()) return;
        const auto length = static_cast<size_t>(end - load);
        if (std::memcmp(pattern.raw.data() + load - pattern.reference, raw.data() + member.load, length))
            throw std::runtime_error("Canonical caller and typed receiver evidence disagree");
        auto translated = member;
        translated.load = static_cast<uint32_t>(load - pattern.reference);
        translated.instruction = static_cast<uint32_t>(instruction - pattern.reference);
        translated.displacement = static_cast<uint32_t>(uint64_t(reference) + member.displacement - pattern.reference);
        const auto [found, inserted] = unique.emplace(translated.instruction, translated);
        if (!inserted && (found->second.load != translated.load || found->second.type != translated.type ||
                found->second.member != translated.member || found->second.source_slot != translated.source_slot ||
                found->second.displacement != translated.displacement || found->second.width != translated.width))
            throw std::runtime_error("Conflicting canonical caller receiver identity");
    };
    for (const auto &block : frames.blocks)
        for (const auto &member : block.members)
            append(block.pattern.owner, block.pattern.reference, block.pattern.raw, member);
    for (const auto &site : frames.receiver_sites) append(site.owner, site.reference, site.raw, site.member);
    std::vector<frame_detail::Member> result;
    for (const auto &[instruction, member] : unique) { (void)instruction; result.push_back(member); }
    return result;
}
inline bool semantic_operand(const address_runtime::Pattern &pattern, const address_runtime::Fixup &fixup) {
    // A proved local branch is a graph constraint, not an independent
    // external identity. It must not bootstrap another branch by itself.
    return !(fixup.kind & 0x100) || (!(fixup.kind & 0xff) && fixup.width == 4 && fixup.offset &&
        fixup.next == fixup.offset + 4 && pattern.raw[fixup.offset - 1] == 0xe8);
}
// A compiler can inline one occurrence of a common operation and leave a
// different occurrence as a CALL. Target-side uniqueness alone then selects
// the wrong source object. Require the consumed context to distinguish its
// source occurrence as well, before target matching can publish any evidence.
class CanonicalContexts {
    using Pattern = address_runtime::Pattern;
    using Fixup = address_runtime::Fixup;
    struct Row {
        uint32_t address = 0, offset = 0, stack_at = 0, stack_width = 0, base = 0, branch = 0;
        int32_t stack = 0;
        display_decode::hde64s op{};
        std::vector<unsigned char> bytes, mask, shape;
        std::vector<Fixup> fixups;
        global_value_detail::Operand global;
        bool nop = false;
    };
    std::map<uint32_t, const Pattern *> owners_;
    std::map<std::tuple<const Pattern *, std::vector<unsigned char>, bool>, bool> results_;
    static uint32_t branch(const display_decode::hde64s &op) {
        if (op.rex || op.p_66 || op.p_67 || op.p_rep || op.p_lock || op.p_seg) return 0;
        if (op.opcode >= 0x70 && op.opcode <= 0x7f && op.len == 2) return 1 + (op.opcode & 15);
        if (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f && op.len == 6)
            return 1 + (op.opcode2 & 15);
        return (op.opcode == 0xeb && op.len == 2) || (op.opcode == 0xe9 && op.len == 5) ? 17u : 0u;
    }
    bool decode(const Pattern &pattern, uint32_t offset, Row &row) const {
        if (offset >= pattern.raw.size()) return false;
        const auto available = (std::min)(size_t(16), pattern.raw.size() - offset);
        unsigned char bounded[32]{}; std::memcpy(bounded, pattern.raw.data() + offset, available);
        display_decode::hde64_disasm(bounded, &row.op);
        if (!row.op.len || row.op.len > available || (row.op.flags & F_ERROR)) return false;
        row.address = pattern.reference + offset; row.offset = offset;
        row.bytes.assign(pattern.raw.begin() + offset, pattern.raw.begin() + offset + row.op.len);
        const auto &op = row.op;
        row.nop = alignment_nop(op, row.bytes);
        if (!row.nop && (op.flags & F_MODRM) && op.modrm_mod != 3 && !op.p_67) {
            if ((op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b && op.sib_index == 4 && !op.rex_x)
                row.base = 4;
            else if (!(op.flags & F_SIB) && op.modrm_rm == 5 && !op.rex_b && op.modrm_mod)
                row.base = 5;
        }
        if (row.base) {
            row.stack_width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
            row.stack_at = op.len - display_decode::immediate_width(op) - row.stack_width;
            row.stack = frame_detail::displacement(row.bytes.data() + row.stack_at, row.stack_width);
        }
        row.branch = branch(op);
        return true;
    }
    static std::vector<unsigned char> normalized(const Row &row) {
        if (row.nop) return {0x90};
        if (row.branch) return {static_cast<unsigned char>(row.branch)};
        return row.base ? frame_detail::stack_encoding(row.bytes, row.op,
            row.stack_at, row.stack_width, true) : row.bytes;
    }
public:
    template<typename Catalog>
    CanonicalContexts(const Catalog &catalog, const frame_detail::Evidence &) {
        for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) && pattern.owner == pattern.reference) {
            const auto [found, inserted] = owners_.emplace(pattern.owner, &pattern);
            if (!inserted) {
                const auto width = (std::min)(found->second->raw.size(), pattern.raw.size());
                if (std::memcmp(found->second->raw.data(), pattern.raw.data(), width))
                    throw std::runtime_error("Canonical caller source bodies disagree");
                if (pattern.raw.size() > found->second->raw.size()) found->second = &pattern;
            }
        }
    }
    bool unique(const Pattern &pattern, const Pattern &adapted, global_value_detail::Evidence *globals = nullptr) {
        if (pattern.raw.size() != adapted.raw.size() || pattern.mask.size() != pattern.raw.size() ||
                adapted.mask.size() != pattern.raw.size()) return false;
        auto mutable_bytes = pattern.mask;
        for (size_t at = 0; at < mutable_bytes.size(); ++at)
            if (pattern.raw[at] != adapted.raw[at] || adapted.mask[at]) mutable_bytes[at] = 1;
        const auto key = std::tuple{&pattern, mutable_bytes, globals != nullptr};
        if (const auto cached = results_.find(key); cached != results_.end()) return cached->second;
        const auto found = owners_.find(pattern.owner);
        if (found == owners_.end()) return results_[key] = false;
        const auto &whole = *found->second;
        std::vector<Row> source;
        for (uint32_t at = 0; at < pattern.raw.size();) {
            Row row;
            if (!decode(pattern, at, row)) return results_[key] = false;
            row.mask.assign(mutable_bytes.begin() + at, mutable_bytes.begin() + at + row.op.len);
            for (const auto &fixup : pattern.fixups) if (fixup.offset >= at && fixup.offset < at + row.op.len) {
                if (uint64_t(fixup.offset) + fixup.width > at + row.op.len) return results_[key] = false;
                auto relative = fixup; relative.offset -= at;
                if (relative.next) relative.next -= at;
                row.fixups.push_back(relative);
            }
            if (row.base) row.mask = frame_detail::stack_encoding(row.mask, row.op,
                row.stack_at, row.stack_width, true, true);
            if (row.branch) row.mask = {0};
            if (row.nop) {
                if (!row.fixups.empty()) return results_[key] = false;
                row.mask = {0};
            }
            if (globals) row.global = globals->operand(false, pattern.owner, row.address, row.op);
            row.shape = normalized(row);
            at += row.op.len; source.push_back(std::move(row));
        }
        if (source.empty()) return results_[key] = false;
        size_t matches = 0; bool original = false;
        // Search every possible byte start in the complete source owner.
        // A data-like extra match is conservative ambiguity, never evidence
        // for a unique code identity. No incomplete source decode can hide
        // a second occurrence behind an inline table or cold block.
        for (uint32_t start = 0; start < whole.raw.size(); ++start) {
            const auto first = whole.raw[start];
            if (!source.front().global.root && !source.front().nop && (source.front().branch ? !(first == 0x0f || first == 0xe9 || first == 0xeb ||
                    (first >= 0x70 && first <= 0x7f)) :
                    (!source.front().mask.front() && first != source.front().bytes.front()))) continue;
            // After an unchanged instruction prefix, the opcode is also
            // unchanged by stack displacement or branch-width adaptation.
            if (!source.front().global.root && !source.front().nop && !source.front().branch && source.front().bytes.size() > 1 && !source.front().mask[1] &&
                    ((first >= 0x40 && first <= 0x4f) || first == 0x66 || first == 0xf2 || first == 0xf3 || first == 0x0f) &&
                    (start + 1 >= whole.raw.size() || whole.raw[start + 1] != source.front().bytes[1])) continue;
            uint32_t cursor = start; bool match = true;
            std::map<uint32_t, uint32_t> instructions, destinations;
            for (const auto &left : source) {
                Row right;
                if (!decode(whole, cursor, right) || left.nop != right.nop ||
                        bool(left.base) != bool(right.base) || left.branch != right.branch) { match = false; break; }
                if (left.global.root) {
                    const auto value = globals->operand(false, pattern.owner, right.address, right.op);
                    // Unknown reaching values remain possible source matches.
                    // They cannot be discarded to manufacture uniqueness.
                    if (value.destination != left.global.destination || (value.root && value.root != left.global.root)) {
                        match = false; break;
                    }
                } else {
                    const auto &expected = left.shape;
                    const auto actual = normalized(right);
                    if (expected.size() != actual.size() || left.mask.size() != expected.size()) { match = false; break; }
                    for (size_t byte = 0; byte < expected.size(); ++byte)
                        if (!left.mask[byte] && expected[byte] != actual[byte]) { match = false; break; }
                    if (!match) break;
                }
                // This is an ambiguity veto, not an address proof. Treat all
                // RSP/RBP locals and actually adapted operand bytes as a
                // conservative superset of the target matcher's equivalence.
                // The target matcher must still prove frame origins, slot
                // overlap/bijection and typed register/member identities.
                if (left.branch) {
                    const auto destination = [](const Row &row) {
                        const auto width = row.op.len == 2 ? 1u : 4u;
                        return row.address + row.op.len + frame_detail::displacement(row.bytes.data() + row.op.len - width, width);
                    };
                    const auto [entry, fresh] = destinations.emplace(destination(left), destination(right));
                    if (!fresh && entry->second != destination(right)) { match = false; break; }
                } else for (const auto &fixup : left.fixups) {
                    if (left.global.root && left.op.opcode == 0x8d && fixup.target == left.global.root &&
                            fixup.width == 4 && fixup.offset == left.op.len - 4 && fixup.next == left.op.len) continue;
                    uint32_t target = 0;
                    if (left.op.opcode == 0xe8 && right.op.opcode == 0xe8)
                        target = right.address + right.op.len + static_cast<int32_t>(right.op.imm.imm32);
                    else if ((right.op.flags & F_MODRM) && right.op.modrm_mod == 0 && right.op.modrm_rm == 5 && !right.op.p_67)
                        target = right.address + right.op.len + static_cast<int32_t>(right.op.disp.disp32);
                    else {
                        auto position = fixup.offset;
                        if (left.base && position >= left.stack_at + left.stack_width)
                            position = position - left.stack_width + right.stack_width -
                                uint32_t(bool(left.op.flags & F_SIB)) + uint32_t(bool(right.op.flags & F_SIB));
                        for (const auto &operand : whole.fixups) if (operand.offset == cursor + position && operand.width == fixup.width) {
                            target = operand.target; break;
                        }
                    }
                    if (target != fixup.target) { match = false; break; }
                }
                if (!match) break;
                instructions.emplace(left.address, right.address); cursor += right.op.len;
            }
            for (const auto &[reference, target] : destinations) if (instructions.count(reference) && instructions.at(reference) != target)
                match = false;
            if (match) {
                original |= whole.reference + start == pattern.reference;
                if (++matches > 1) return results_[key] = false;
            }
        }
        return results_[key] = matches == 1 && original;
    }
};
struct Diagnostics {
    struct Count { size_t contexts = 0, shapes = 0, frames = 0, unresolved = 0, contradicted = 0, identities = 0, unique = 0, source_ambiguous = 0; std::string example; };
    std::map<uint32_t, size_t> missing;
    std::map<uint32_t, Count> counts;
    template<typename Catalog>
    Diagnostics(const Catalog &catalog, const address_runtime::State &state) {
        std::vector<const address_runtime::Pattern *> whole;
        for (const auto &pattern : catalog.patterns) if (pattern.flags & 2) whole.push_back(&pattern);
        std::sort(whole.begin(), whole.end(), [](auto left, auto right) { return left->reference < right->reference; });
        for (const auto &[reference, length] : catalog.required) {
            if (address_runtime::resolve(state.ranges, reference) && address_runtime::resolve(state.ranges, reference + length - 1)) continue;
            auto found = std::upper_bound(whole.begin(), whole.end(), reference,
                [](uint32_t value, auto pattern) { return value < pattern->reference; });
            if (found == whole.begin()) continue;
            const auto &pattern = **--found;
            if (uint64_t(reference) < uint64_t(pattern.reference) + pattern.raw.size()) ++missing[pattern.owner];
        }
    }
    void operand(uint32_t owner, uint32_t pattern, uint32_t native, const address_runtime::Fixup &fixup,
                 uint32_t expected, uint32_t actual) {
        auto &count = counts[owner];
        expected ? ++count.contradicted : ++count.unresolved;
        if (!count.example.empty()) return;
        std::ostringstream message;
        message << " source=0x" << std::hex << pattern << " native=0x" << native << " operand=0x" << fixup.target
            << " kind=0x" << fixup.kind << " expected=0x" << expected << " actual=0x" << actual;
        count.example = message.str();
    }
    void frame(uint32_t owner, const display_decode::DecodeFailure &failure) {
        auto &count = counts[owner];
        ++count.frames;
        if (!count.example.empty()) return;
        std::ostringstream message;
        message << " frame-instruction=0x" << std::hex << failure.address << " " << failure.reason
            << " register=" << std::dec << failure.reg;
        count.example = message.str();
    }
    void report(const char *phase, const address_runtime::Progress &output) const {
        if (!output) return;
        std::vector<std::pair<uint32_t, size_t>> ordered(missing.begin(), missing.end());
        std::sort(ordered.begin(), ordered.end(), [](const auto &a, const auto &b) { return a.second > b.second; });
        size_t shown = 0;
        for (const auto &[owner, resources] : ordered) {
            const auto found = counts.find(owner);
            if (found == counts.end() || (!found->second.contexts && !found->second.source_ambiguous)) continue;
            const auto &value = found->second;
            std::ostringstream message;
            message << "Native " << phase << " contexts: owner=0x" << std::hex << owner << std::dec
                << " missing=" << resources << " considered=" << value.contexts << " matching-shape=" << value.shapes
                << " rejected-frame=" << value.frames << " unresolved-operand=" << value.unresolved
                << " conflicting-operand=" << value.contradicted << " insufficient-identities=" << value.identities
                << " unique=" << value.unique << " source-not-unique=" << value.source_ambiguous << value.example;
            output(message.str());
            if (++shown == 8) break;
        }
    }
};
struct BranchSeeds {
    struct Edge { uint32_t reference, native; };
    struct Witness { uint32_t reference, source_length, native, native_length; };
    std::vector<const address_runtime::Pattern *> whole;
    std::map<uint32_t, std::map<uint32_t, std::vector<Witness>>> evidence;
    template<typename Catalog> explicit BranchSeeds(const Catalog &catalog) {
        for (const auto &pattern : catalog.patterns) if (pattern.flags & 2) whole.push_back(&pattern);
        std::sort(whole.begin(), whole.end(), [](auto left, auto right) { return left->reference < right->reference; });
    }
    const address_runtime::Pattern *source(uint32_t reference) const {
        auto found = std::upper_bound(whole.begin(), whole.end(), reference,
            [](uint32_t value, auto pattern) { return value < pattern->reference; });
        if (found == whole.begin()) return nullptr;
        const auto *pattern = *--found;
        return uint64_t(reference) < uint64_t(pattern->reference) + pattern->raw.size() ? pattern : nullptr;
    }
    int continuation_byte(const address_runtime::Pattern &pattern, uint32_t offset) const {
        if (offset < pattern.raw.size()) return pattern.raw[offset];
        const auto reference = pattern.reference + offset;
        const auto *whole = source(reference);
        return whole && whole->owner == pattern.owner ? whole->raw[reference - whole->reference] : -1;
    }
    bool padding(uint32_t reference) const {
        const auto *whole = source(reference);
        if (!whole) return false;
        const auto offset = reference - whole->reference;
        const auto available = (std::min)(size_t(15), whole->raw.size() - offset);
        unsigned char bounded[32]{};
        std::memcpy(bounded, whole->raw.data() + offset, available);
        display_decode::hde64s op{}; display_decode::hde64_disasm(bounded, &op);
        return op.len && op.len <= available && !(op.flags & F_ERROR) && alignment_nop(op,
            std::vector<unsigned char>(whole->raw.begin() + offset, whole->raw.begin() + offset + op.len));
    }
    uint32_t local_fallthrough(const address_runtime::Pattern &pattern) const {
        if (!(pattern.flags & 512)) return 0;
        display_decode::hde64s last{};
        for (size_t at = 0; at < pattern.raw.size();) {
            const auto available = (std::min)(size_t(15), pattern.raw.size() - at);
            unsigned char bounded[32]{}; std::memcpy(bounded, pattern.raw.data() + at, available);
            display_decode::hde64_disasm(bounded, &last);
            if (!last.len || last.len > available || (last.flags & F_ERROR)) return 0;
            at += last.len;
        }
        if (last.opcode == 0xe9 || last.opcode == 0xeb || last.opcode == 0xc2 || last.opcode == 0xc3 ||
                last.opcode == 0xca || last.opcode == 0xcb || last.opcode == 0xcf ||
                (last.opcode == 0xff && last.modrm_reg >= 4)) return 0;
        const auto end = static_cast<uint32_t>(uint64_t(pattern.reference) + pattern.raw.size());
        const auto *whole = source(end);
        return whole && whole->owner == pattern.owner ? end : 0;
    }
    bool local_jump(const address_runtime::Pattern &pattern, const address_runtime::Fixup &fixup) const {
        if (!(fixup.kind & 0x100) || (fixup.kind & 0xff) || !fixup.offset ||
                (fixup.width != 1 && fixup.width != 4) || fixup.next != fixup.offset + fixup.width) return false;
        const auto opcode = pattern.raw[fixup.offset - 1];
        const bool direct = fixup.width == 1 ? opcode == 0xeb || (opcode >= 0x70 && opcode <= 0x7f) :
            opcode == 0xe9 || (opcode >= 0x80 && opcode <= 0x8f && fixup.offset >= 2 && pattern.raw[fixup.offset - 2] == 0x0f);
        const auto *destination = source(fixup.target);
        return direct && destination && destination->owner == pattern.owner;
    }
    void record(const address_runtime::Pattern &pattern, uint32_t native, uint32_t native_length,
                const std::vector<Edge> &edges) {
        for (const auto &edge : edges) evidence[edge.reference][edge.native].push_back(
            {pattern.reference, static_cast<uint32_t>(pattern.raw.size()), native, native_length});
    }
    template<typename Image>
    size_t publish(const Image &image, address_runtime::Bindings &bindings, std::map<uint32_t, address_runtime::Byte> &changes) const {
        size_t added = 0;
        for (const auto &[reference, alternatives] : evidence) {
            if (alternatives.size() != 1 || bindings.lookup(reference) || padding(reference)) continue;
            const auto &[native, witnesses] = *alternatives.begin();
            bool independent = false;
            for (size_t left = 0; left < witnesses.size() && !independent; ++left)
                for (size_t right = left + 1; right < witnesses.size(); ++right) {
                    const auto &a = witnesses[left], &b = witnesses[right];
                    if ((uint64_t(a.reference) + a.source_length <= b.reference || uint64_t(b.reference) + b.source_length <= a.reference) &&
                            (uint64_t(a.native) + a.native_length <= b.native || uint64_t(b.native) + b.native_length <= a.native)) {
                        independent = true; break;
                    }
                }
            const auto *pattern = source(reference);
            const auto *actual = image.read(native, 1);
            if (!independent || !pattern || !actual || !bindings.compatible(reference, 1, native)) continue;
            // Only the landing instruction's identity is proved. Its operand
            // bytes, following instructions and stack layout remain unbound.
            added += bindings.add(reference, 1, native);
            const auto original = pattern->raw[reference - pattern->reference];
            if (original != *actual) {
                const address_runtime::Byte byte{reference, original, *actual};
                const auto [entry, inserted] = changes.emplace(reference, byte);
                if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                    throw std::runtime_error("Conflicting native branch landing evidence");
            }
        }
        return added;
    }
};
struct LandingSeeds {
    std::map<uint32_t, std::set<uint32_t>> wanted;
    struct Identity { unsigned char source; std::set<uint32_t> natives; };
    std::map<uint32_t, Identity> proven;
    template<typename Catalog>
    LandingSeeds(const Catalog &catalog, const address_runtime::State &state, const BranchSeeds &branches) {
        std::map<uint32_t, uint32_t> required;
        for (const auto &[reference, width] : catalog.required)
            if (!address_runtime::resolve(state.ranges, reference) ||
                    !address_runtime::resolve(state.ranges, reference + width - 1)) required.emplace(reference, width);
        for (const auto &pattern : catalog.patterns) {
            if (!(pattern.flags & 8) || (pattern.flags & 2048u) || !pattern.owner ||
                    !address_runtime::resolve(state.function_owners, pattern.owner)) continue;
            bool consumed = false;
            for (const auto &fixup : pattern.fixups) if ((fixup.kind & 0x100) && !(fixup.kind & 0xff) &&
                    fixup.width == 4 && fixup.offset && fixup.next == fixup.offset + 4 && pattern.raw[fixup.offset - 1] == 0xe8) {
                const auto call = pattern.reference + fixup.offset - 1;
                const auto entry = required.find(call), next = required.find(call + 5);
                if ((entry != required.end() && entry->second <= 5) ||
                        (next != required.end() && next->second == 1)) consumed = true;
            }
            if (!consumed) continue;
            for (const auto &fixup : pattern.fixups)
                if (branches.local_jump(pattern, fixup) && !address_runtime::resolve(state.ranges, fixup.target) &&
                        (fixup.target < pattern.reference || uint64_t(fixup.target) >= uint64_t(pattern.reference) + pattern.raw.size()))
                    wanted[pattern.owner].insert(fixup.target);
            if (const auto next = branches.local_fallthrough(pattern))
                if (!address_runtime::resolve(state.ranges, next)) wanted[pattern.owner].insert(next);
        }
        // A landing context may branch to another landing before it reaches
        // a consumed call. Retain that whole dependency closure; otherwise
        // independently recognizable blocks in a local cycle never enter
        // the matcher at all.
        std::vector<const address_runtime::Pattern *> contexts;
        for (const auto &pattern : catalog.patterns)
            if ((pattern.flags & 9) == 9 && !(pattern.flags & 2048u) && wanted.count(pattern.owner)) contexts.push_back(&pattern);
        std::sort(contexts.begin(), contexts.end(), [](auto left, auto right) { return left->reference < right->reference; });
        std::vector<uint64_t> maximum_end;
        for (const auto *pattern : contexts) maximum_end.push_back((std::max)(
            maximum_end.empty() ? uint64_t(0) : maximum_end.back(), uint64_t(pattern->reference) + pattern->raw.size()));
        std::vector<std::pair<uint32_t, uint32_t>> pending;
        for (const auto &[owner, addresses] : wanted)
            for (const auto address : addresses) pending.emplace_back(owner, address);
        std::set<const address_runtime::Pattern *> expanded;
        for (size_t index = 0; index < pending.size(); ++index) {
            const auto [owner, address] = pending[index];
            auto stop = std::upper_bound(contexts.begin(), contexts.end(), address,
                [](uint32_t value, auto pattern) { return value < pattern->reference; }) - contexts.begin();
            while (stop && maximum_end[stop - 1] > address) {
                const auto &pattern = *contexts[--stop];
                if (pattern.owner != owner || uint64_t(address) >= uint64_t(pattern.reference) + pattern.raw.size() ||
                        !expanded.insert(&pattern).second) continue;
                for (const auto &fixup : pattern.fixups)
                    if (branches.local_jump(pattern, fixup) && !address_runtime::resolve(state.ranges, fixup.target) &&
                            (fixup.target < pattern.reference || uint64_t(fixup.target) >= uint64_t(pattern.reference) + pattern.raw.size()) &&
                            wanted[owner].insert(fixup.target).second) pending.emplace_back(owner, fixup.target);
                if (const auto next = branches.local_fallthrough(pattern))
                    if (!address_runtime::resolve(state.ranges, next) && wanted[owner].insert(next).second)
                        pending.emplace_back(owner, next);
            }
        }
    }
    std::vector<uint32_t> offsets(const address_runtime::Pattern &pattern) const {
        std::vector<uint32_t> result;
        const auto owner = wanted.find(pattern.owner);
        if (owner == wanted.end()) return result;
        for (auto at = owner->second.lower_bound(pattern.reference); at != owner->second.end() &&
                uint64_t(*at) < uint64_t(pattern.reference) + pattern.raw.size(); ++at)
            result.push_back(*at - pattern.reference);
        return result;
    }
    void record(uint32_t reference, uint32_t native, unsigned char source) {
        const auto [entry, inserted] = proven.emplace(reference, Identity{source, {}});
        if (!inserted && entry->second.source != source)
            throw std::runtime_error("Canonical branch landing bytes disagree");
        entry->second.natives.insert(native);
    }
    template<typename Image>
    size_t publish(const Image &image, address_runtime::Bindings &bindings,
                   std::map<uint32_t, address_runtime::Byte> &changes) const {
        size_t count = 0;
        for (const auto &[reference, proof] : proven) {
            if (proof.natives.size() != 1) continue;
            const auto native = *proof.natives.begin();
            const auto *actual = image.read(native, 1);
            if (!actual || !bindings.compatible(reference, 1, native)) continue;
            count += bindings.add(reference, 1, native);
            if (proof.source != *actual) {
                const address_runtime::Byte byte{reference, proof.source, *actual};
                const auto [entry, inserted] = changes.emplace(reference, byte);
                if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                    throw std::runtime_error("Independent branch landing bytes disagree");
            }
        }
        return count;
    }
};
}

// A changed caller frame must not make a stable call/return boundary disappear.
// These scoped patterns retain opcodes, registers, object offsets and constants;
// only decoded RSP or independently proved RBP-frame displacements may differ. All relocated
// operands must already have independent identities. Publish call instructions
// and their return boundary only, never the surrounding frame-dependent bytes.
template <typename Image, typename Catalog>
inline void discover_call_boundaries(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace address_runtime;
    using namespace display_decode;
    struct StackOperand { uint32_t at, width, base, instruction; int32_t source; };
    struct Candidate {
        Pattern pattern;
        const Pattern *original;
        std::vector<unsigned char> mask;
        std::vector<StackOperand> stack;
        std::vector<uint32_t> calls;
        std::vector<uint32_t> instructions;
        std::vector<uint32_t> landings;
        std::vector<frame_detail::Member> members;
        std::vector<frame_detail::ReceiverAliasSite> aliases;
        std::vector<argument_alias_detail::Site> arguments;
        uint32_t owner, anchor, frame_ready, frame_end;
        uint64_t key;
    };
    std::vector<Candidate> patterns;
    caller_detail::Diagnostics diagnostics(catalog, state);
    caller_detail::BranchSeeds branch_seeds(catalog);
    caller_detail::LandingSeeds landing_seeds(catalog, state, branch_seeds);
    const auto frames = frame_detail::read(catalog.frame_semantics);
    caller_detail::CanonicalContexts canonical_contexts(catalog, frames);
    frame_member_detail::ShadowCache receiver_cache(image, report);
    receiver_alias_detail::Cache receiver_aliases(image);
    argument_alias_detail::Cache argument_aliases(image);
    const auto argument_sites = argument_alias_detail::read(frames.argument_aliases);
    std::map<uint32_t, frame_detail::TargetRbpFrame> target_frames;
    std::unordered_map<uint64_t, std::vector<uint32_t>> hits;
    const auto source_value = [](const unsigned char *bytes, uint32_t width) {
        if (width == 1) return int32_t(static_cast<int8_t>(*bytes));
        int32_t value; std::memcpy(&value, bytes, 4); return value;
    };
    const auto required = [&](uint32_t call) {
        for (const auto &[reference, length] : catalog.required)
            if ((reference == call && length <= 5) || (reference == call + 5 && length == 1)) {
                if (!resolve(state.ranges, reference) || !resolve(state.ranges, reference + length - 1)) return true;
            }
        return false;
    };
    for (const auto &original : catalog.patterns) for (const bool remap_arguments : {false, true}) {
        if (!(original.flags & 1) || !(original.flags & 8) || (original.flags & (512u | 2048u)) ||
                original.raw.size() > 1024 || !original.owner) continue;
        auto arguments = remap_arguments ? argument_alias_detail::sites_for(argument_sites, original) :
            std::vector<argument_alias_detail::Site>{};
        if (remap_arguments && arguments.empty()) continue;
        auto pattern = original;
        auto members = state.semantic_fields.empty() ? std::vector<frame_detail::Member>{} : caller_detail::members_for(frames, pattern);
        if (!members.empty() && !frame_member_detail::normalize(state, members, pattern)) continue;
        const auto owner = resolve(state.function_owners, pattern.owner);
        auto aliases = receiver_alias_detail::sites_for(frames, original);
        if (!receiver_alias_detail::normalize(receiver_aliases, state, owner, aliases, pattern)) continue;
        if (remap_arguments && (!argument_alias_detail::normalize(argument_aliases, owner, arguments, pattern) || arguments.empty())) continue;
        Candidate candidate{pattern, &original, pattern.mask, {}, {}, {}, landing_seeds.offsets(pattern),
            std::move(members), std::move(aliases), std::move(arguments), owner, 0, 0, UINT32_MAX, 0};
        const auto source_frame = frames.frame_registers.find(pattern.owner);
        bool rbp_frame = source_frame != frames.frame_registers.end() && (source_frame->second[0] & 0xff) == 5;
        const auto target_function = frame_detail::function_at(image, owner);
        if (rbp_frame && target_function != image.functions.end()) {
            auto frame = target_frames.find(owner);
            if (frame == target_frames.end()) frame = target_frames.emplace(owner, frame_detail::target_rbp_frame(image, owner)).first;
            rbp_frame = frame->second.valid;
            if (rbp_frame) { candidate.frame_ready = frame->second.ready; candidate.frame_end = frame->second.end; }
        } else if (owner) rbp_frame = false;
        for (const auto &fixup : pattern.fixups)
            if ((fixup.kind & 0x100) && !(fixup.kind & 0xff) && fixup.width == 4 && fixup.offset &&
                    fixup.next == fixup.offset + 4 && pattern.raw[fixup.offset - 1] == 0xe8 &&
                    (!owner || required(pattern.reference + fixup.offset - 1))) candidate.calls.push_back(fixup.offset - 1);
        if (candidate.calls.empty() && candidate.landings.empty()) continue;
        bool decoded = true;
        std::vector<bool> described(pattern.raw.size());
        for (const auto &fixup : pattern.fixups)
            for (uint32_t at = fixup.offset; at < fixup.offset + fixup.width; ++at) described[at] = true;
        for (uint32_t at = 0; at < pattern.raw.size();) {
            unsigned char bounded[32]{};
            const auto available = (std::min)(size_t(16), pattern.raw.size() - at);
            std::memcpy(bounded, pattern.raw.data() + at, available);
            hde64s op{}; hde64_disasm(bounded, &op);
            if (!op.len || op.len > available || (op.flags & F_ERROR)) { decoded = false; break; }
            candidate.instructions.push_back(at);
            const bool rsp = (op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b &&
                op.sib_index == 4 && !op.rex_x;
            const bool rbp = rbp_frame && !(op.flags & F_SIB) && op.modrm_rm == 5 && !op.rex_b &&
                uint64_t(pattern.reference) + at >= source_frame->second[1] &&
                uint64_t(pattern.reference) + at + op.len <= source_frame->second[2];
            if ((op.modrm_mod == 1 || op.modrm_mod == 2) && !op.p_67 && (rsp || rbp)) {
                const auto width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
                if (width) {
                    const auto position = at + op.len - immediate_width(op) - width;
                    candidate.stack.push_back({position, width, rsp ? 4u : 5u, at,
                        source_value(pattern.raw.data() + position, width)});
                    std::fill_n(candidate.mask.begin() + position, width, 1);
                    std::fill_n(described.begin() + position, width, true);
                }
            }
            at += op.len;
        }
        for (size_t at = 0; decoded && at < candidate.mask.size(); ++at)
            if (candidate.mask[at] && !described[at]) decoded = false;
        candidate.landings.erase(std::remove_if(candidate.landings.begin(), candidate.landings.end(), [&](uint32_t at) {
            return !std::binary_search(candidate.instructions.begin(), candidate.instructions.end(), at);
        }), candidate.landings.end());
        if (!decoded || (candidate.calls.empty() && candidate.landings.empty()) ||
                (candidate.stack.empty() && candidate.members.empty() && candidate.aliases.empty() &&
                    candidate.arguments.empty() && candidate.landings.empty())) continue;
        size_t run = 0, best = 0, fixed = 0;
        for (uint32_t at = 0; at < candidate.mask.size(); ++at) {
            if (candidate.mask[at]) run = 0;
            else { ++fixed; if (++run > best) { best = run; candidate.anchor = at + 1 - run; } }
        }
        // Complete producer-proved CFG blocks have both structural
        // boundaries. Cropped instruction windows keep the higher floor.
        if (best < 8 || fixed < ((candidate.owner && (pattern.flags & 256)) ? 16u : 24u)) continue;
        if (!canonical_contexts.unique(original, pattern)) {
            ++diagnostics.counts[pattern.owner].source_ambiguous;
            continue;
        }
        std::memcpy(&candidate.key, pattern.raw.data() + candidate.anchor, 8);
        hits.try_emplace(candidate.key);
        ++diagnostics.counts[pattern.owner].contexts;
        patterns.push_back(std::move(candidate));
    }
    if (patterns.empty()) return;
    for (const auto &section : image.sections) {
        if (!(section.flags & Image::execute_flag)) continue;
        const auto length = (std::min)(section.raw_size, section.end - section.begin);
        const auto *bytes = image.read(section.begin, length);
        if (!bytes || length < 8) continue;
        for (uint32_t at = 0; at <= length - 8; ++at) {
            uint64_t key; std::memcpy(&key, bytes + at, 8);
            const auto found = hits.find(key);
            if (found != hits.end() && found->second.size() <= 4096) found->second.push_back(section.begin + at);
        }
    }
    Bindings bindings;
    for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    struct Call { uint32_t native; const Pattern *pattern; uint32_t offset; int continuation; };
    std::map<uint32_t, std::map<uint32_t, Call>> calls;
    struct OwnerWitness { uint32_t reference, native, length; };
    std::map<uint32_t, std::map<uint32_t, std::vector<OwnerWitness>>> owner_witnesses;
    std::map<uint32_t, std::set<uint32_t>> instruction_boundaries;
    std::map<uint32_t, DecodeFailure> scope_failures;
    std::map<uint32_t, std::vector<std::pair<uint32_t, uint32_t>>> regions;
    const auto owner_regions = [&](uint32_t owner) -> const auto & {
        auto found = regions.find(owner);
        if (found == regions.end()) found = regions.emplace(owner, frame_detail::logical_regions(image, owner)).first;
        return found->second;
    };
    const auto boundaries_for = [&](uint32_t owner, uint32_t reference_owner = 0) -> const auto & {
        auto found = instruction_boundaries.find(owner);
        if (found == instruction_boundaries.end()) {
            auto &known = instruction_boundaries[owner];
            for (const auto &[begin, end] : owner_regions(owner)) {
                std::vector<Instruction> code;
                DecodeFailure failure;
                // Adjacent CHAININFO fragments are one continuous code
                // region. Their inline jump table may reside in the next
                // fragment; the physical unwind split is not a code gap.
                if (!decode(image, begin, end, code, nullptr, &failure)) {
                    scope_failures.emplace(owner, failure);
                    // Uniqueness is a property of the complete proved
                    // scope, never of the prefix decoded before failure.
                    known.clear();
                    break;
                }
                for (const auto &instruction : code) known.insert(instruction.address);
            }
            found = instruction_boundaries.find(owner);
        }
        if (report && reference_owner && diagnostics.missing.count(reference_owner) && scope_failures.count(owner) &&
                state.reported_caller_decode_failures.insert(owner).second) {
            const auto &failure = scope_failures.at(owner);
            std::ostringstream detail;
            detail << "Native required caller scope decode incomplete: reference=0x" << std::hex << reference_owner
                << " owner=0x" << owner << " instruction=0x" << failure.address << " " << failure.reason
                << " register=" << std::dec << failure.reg;
            report(detail.str());
        }
        return found->second;
    };
    const auto branch_boundary = [&](uint32_t address, uint32_t owner) {
        const auto function = frame_detail::function_at(image, address);
        if (function == image.functions.end() || (function->owner ? function->owner : function->begin) != owner) return false;
        return boundaries_for(owner).count(address) != 0;
    };
    const auto accept_context = [&](const Candidate &candidate, uint32_t native) {
        const auto &pattern = candidate.pattern;
        for (const auto offset : candidate.landings)
            landing_seeds.record(pattern.reference + offset, native + offset, candidate.original->raw[offset]);
        for (const auto offset : candidate.calls) {
            const auto reference = pattern.reference + offset, actual = native + offset;
            if (!bindings.compatible(reference, 5, actual)) continue;
            const auto continuation = boundaries_for(candidate.owner).count(actual + 5) ?
                branch_seeds.continuation_byte(*candidate.original, offset + 5) : -1;
            calls[reference].emplace(actual, Call{actual, candidate.original, offset, continuation});
        }
    };
    struct Context {
        const Candidate *candidate;
        std::vector<uint32_t> matches;
        std::map<uint32_t, std::vector<caller_detail::BranchSeeds::Edge>> edges;
    };
    std::map<uint32_t, std::vector<Context>> contexts;
    for (const auto &candidate : patterns) {
        const auto &pattern = candidate.pattern;
        const auto &positions = hits.at(candidate.key);
        if (positions.size() > 4096) continue;
        std::vector<uint32_t> matches;
        std::map<uint32_t, std::vector<caller_detail::BranchSeeds::Edge>> pending_edges;
        for (auto hit : positions) {
            if (hit < candidate.anchor) continue;
            const auto address = hit - candidate.anchor;
            auto function = std::upper_bound(image.functions.begin(), image.functions.end(), address,
                [](uint32_t value, const auto &entry) { return value < entry.begin; });
            if (function == image.functions.begin()) continue;
            --function;
            const auto native_owner = function->owner ? function->owner : function->begin;
            if (address < function->begin || address >= function->end ||
                    (candidate.owner && native_owner != candidate.owner)) continue;
            const auto &owner_sections = owner_regions(native_owner);
            if (std::none_of(owner_sections.begin(), owner_sections.end(), [&](const auto &region) {
                    return address >= region.first && uint64_t(address) + pattern.raw.size() <= region.second;
                }) || !boundaries_for(native_owner, candidate.owner ? pattern.owner : 0).count(address)) continue;
            const auto *bytes = image.read(address, pattern.raw.size());
            if (!bytes) continue;
            bool valid = true;
            for (size_t at = 0; at < pattern.raw.size(); ++at)
                if (!candidate.mask[at] && bytes[at] != pattern.raw[at]) { valid = false; break; }
            if (!valid) continue;
            for (const auto at : candidate.instructions) {
                const auto established = bindings.lookup(pattern.reference + at);
                if (!boundaries_for(native_owner).count(address + at) ||
                        (established && established != address + at)) { valid = false; break; }
            }
            if (!valid || (!candidate.members.empty() && !frame_member_detail::matches(
                    image, native_owner, address, pattern, candidate.members, &receiver_cache))) continue;
            if (!candidate.aliases.empty() || !candidate.arguments.empty()) {
                std::map<uint32_t, uint32_t> coordinates;
                for (const auto at : candidate.instructions) coordinates.emplace(pattern.reference + at, address + at);
                if (!receiver_alias_detail::matches(receiver_aliases, native_owner, candidate.aliases, coordinates)) continue;
                if (!argument_alias_detail::matches(argument_aliases, native_owner, candidate.arguments, coordinates)) continue;
            }
            ++diagnostics.counts[pattern.owner].shapes;
            auto frame_ready = candidate.frame_ready, frame_end = candidate.frame_end;
            if (!candidate.owner && std::any_of(candidate.stack.begin(), candidate.stack.end(),
                    [](const auto &operand) { return operand.base == 5; })) {
                auto frame = target_frames.find(native_owner);
                if (frame == target_frames.end()) frame = target_frames.emplace(native_owner,
                    frame_detail::target_rbp_frame(image, native_owner)).first;
                if (!frame->second.valid) { diagnostics.frame(pattern.owner, frame->second.failure); continue; }
                frame_ready = frame->second.ready; frame_end = frame->second.end;
            }
            std::map<std::pair<uint32_t, int32_t>, int32_t> stack;
            std::map<std::pair<uint32_t, int32_t>, int32_t> inverse_stack;
            for (const auto &operand : candidate.stack) {
                if (operand.base == 5 && (address + operand.instruction < frame_ready ||
                        address + operand.instruction >= frame_end)) { valid = false; break; }
                const auto target = source_value(bytes + operand.at, operand.width);
                const auto [entry, inserted] = stack.emplace(std::pair{operand.base, operand.source}, target);
                if (!inserted && entry->second != target) { valid = false; break; }
                const auto [inverse, unique] = inverse_stack.emplace(std::pair{operand.base, target}, operand.source);
                if (!unique && inverse->second != operand.source) { valid = false; break; }
            }
            std::set<uint32_t> identities;
            std::vector<caller_detail::BranchSeeds::Edge> edges;
            for (const auto &fixup : pattern.fixups) {
                const auto actual = operand_target(image, pattern, address, fixup);
                uint32_t expected = 0;
                if ((fixup.kind & 0x100) && fixup.target >= pattern.reference &&
                        uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size())
                    expected = address + fixup.target - pattern.reference;
                else {
                    expected = bindings.lookup(fixup.target);
                    if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
                    if (expected && caller_detail::semantic_operand(pattern, fixup)) identities.insert(fixup.target);
                }
                if (!expected && candidate.owner && branch_seeds.local_jump(pattern, fixup) &&
                        branch_boundary(actual, candidate.owner)) {
                    diagnostics.operand(pattern.owner, pattern.reference, address, fixup, expected, actual);
                    edges.push_back({fixup.target, actual});
                    continue;
                }
                if ((fixup.target && !expected) || actual != expected) {
                    diagnostics.operand(pattern.owner, pattern.reference, address, fixup, expected, actual);
                    valid = false; break;
                }
            }
            if (valid && identities.size() < 2) ++diagnostics.counts[pattern.owner].identities;
            if (valid && identities.size() >= 2) {
                matches.push_back(address);
                pending_edges.emplace(address, std::move(edges));
            }
        }
        if (candidate.owner && !matches.empty())
            contexts[candidate.owner].push_back({&candidate, matches, pending_edges});
        if (matches.size() != 1) continue;
        ++diagnostics.counts[pattern.owner].unique;
        if (!pending_edges.at(matches.front()).empty()) {
            branch_seeds.record(pattern, matches.front(), static_cast<uint32_t>(pattern.raw.size()), pending_edges.at(matches.front()));
            continue;
        }
        if (!candidate.owner) {
            const auto function = frame_detail::function_at(image, matches.front());
            if (function != image.functions.end()) {
                const auto owner = function->owner ? function->owner : function->begin;
                owner_witnesses[pattern.owner][owner].push_back({pattern.reference, matches.front(),
                    static_cast<uint32_t>(pattern.raw.size())});
            }
            continue;
        }
        // This point is reached only after a unique complete context with
        // two independent external identities and no unresolved CFG edge.
        // Its interior instruction identity does not authorize a byte delta.
        accept_context(candidate, matches.front());
    }
    size_t joined_contexts = 0;
    for (const auto &[owner, group] : contexts) {
        const auto &boundaries = boundaries_for(owner);
        const auto coordinate = [&](const Candidate &candidate, uint32_t native, uint32_t reference) {
            if (reference < candidate.pattern.reference) return uint32_t(0);
            const auto offset = reference - candidate.pattern.reference;
            if (std::binary_search(candidate.instructions.begin(), candidate.instructions.end(), offset))
                return native + offset;
            // The end of a matched E8 is a semantic return boundary even
            // when the following instruction changed across versions.
            if (offset == candidate.pattern.raw.size() && offset >= 5 &&
                    candidate.pattern.raw[offset - 5] == 0xe8 &&
                    std::binary_search(candidate.instructions.begin(), candidate.instructions.end(), offset - 5) &&
                    branch_seeds.continuation_byte(*candidate.original, offset) >= 0 && boundaries.count(native + offset))
                return native + offset;
            return uint32_t(0);
        };
        for (const auto &anchor : group) {
            if (anchor.matches.size() != 1) continue;
            const auto native = anchor.matches.front();
            const auto &pending = anchor.edges.at(native);
            if (pending.empty()) continue;
            const auto &left = *anchor.candidate;
            for (const auto &other : group) {
                if (&anchor == &other) continue;
                const auto &right = *other.candidate;
                const auto begin = (std::max)(left.pattern.reference, right.pattern.reference);
                const auto end = (std::min)(uint64_t(left.pattern.reference) + left.pattern.raw.size(),
                    uint64_t(right.pattern.reference) + right.pattern.raw.size());
                if (end <= begin || end - begin < 5) continue;
                const auto predicted = int64_t(native) + int64_t(right.pattern.reference) - left.pattern.reference;
                if (predicted <= 0 || predicted > UINT32_MAX ||
                        std::find(other.matches.begin(), other.matches.end(), uint32_t(predicted)) == other.matches.end()) continue;
                const auto actual = static_cast<uint32_t>(predicted);
                // Both contexts were matched independently before using
                // this relation. Require complete shared instructions;
                // a byte overlap or an unresolved branch alone is not an
                // independent anchor for choosing the second context.
                size_t shared_bytes = 0;
                bool compatible = true;
                for (size_t index = 0; index < left.instructions.size(); ++index) {
                    const auto offset = left.instructions[index];
                    const auto source = left.pattern.reference + offset;
                    if (source < begin || source >= end) continue;
                    const auto next = index + 1 < left.instructions.size() ? left.instructions[index + 1] :
                        static_cast<uint32_t>(left.pattern.raw.size());
                    if (uint64_t(left.pattern.reference) + next > end) continue;
                    if (coordinate(right, actual, source) != native + offset) { compatible = false; break; }
                    shared_bytes += next - offset;
                }
                if (shared_bytes < 5 || !compatible) continue;
                for (const auto &edge : pending)
                    if (coordinate(right, actual, edge.reference) != edge.native) { compatible = false; break; }
                if (!compatible) continue;
                for (const auto &edge : other.edges.at(actual))
                    if (coordinate(left, native, edge.reference) != edge.native) { compatible = false; break; }
                if (!compatible) continue;
                // The unique context, the complete overlap, and every
                // pending edge now describe one closed component. Only
                // its calls and named boundaries are published.
                accept_context(left, native);
                accept_context(right, actual);
                for (const auto &edge : pending) {
                    const auto *source = branch_seeds.source(edge.reference);
                    if (source) landing_seeds.record(edge.reference, edge.native,
                        source->raw[edge.reference - source->reference]);
                }
                for (const auto &edge : other.edges.at(actual)) {
                    const auto *source = branch_seeds.source(edge.reference);
                    if (source) landing_seeds.record(edge.reference, edge.native,
                        source->raw[edge.reference - source->reference]);
                }
                ++joined_contexts;
                break;
            }
        }
    }
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    size_t added = 0;
    for (const auto &[reference, candidates] : calls) {
        if (candidates.size() != 1) continue;
        const auto &call = candidates.begin()->second;
        const auto *bytes = image.read(call.native, 5);
        if (!bytes) continue;
        const auto *raw = call.pattern->raw.data() + call.offset;
        if (!bindings.compatible(reference, 5, call.native)) continue;
        added += bindings.add(reference, 5, call.native);
        for (uint32_t at = 0; at < 5; ++at) if (raw[at] != bytes[at]) {
            const Byte byte{reference + at, raw[at], bytes[at]};
            const auto [entry, inserted] = changes.emplace(byte.address, byte);
            if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                throw std::runtime_error("Conflicting scoped native call operand");
        }
        if (call.continuation >= 0)
            landing_seeds.record(reference + 5, call.native + 5, static_cast<unsigned char>(call.continuation));
    }
    const auto branches_added = branch_seeds.publish(image, bindings, changes) + landing_seeds.publish(image, bindings, changes);
    state.ranges = bindings.export_ranges();
    state.bytes.clear();
    for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
    size_t owners_added = 0;
    for (const auto &[reference, alternatives] : owner_witnesses) {
        if (alternatives.size() != 1 || resolve(state.function_owners, reference)) continue;
        const auto &[native, witnesses] = *alternatives.begin();
        bool independent = false;
        for (size_t left = 0; left < witnesses.size() && !independent; ++left)
            for (size_t right = left + 1; right < witnesses.size(); ++right) {
                const auto &a = witnesses[left], &b = witnesses[right];
                const bool source_disjoint = uint64_t(a.reference) + a.length <= b.reference ||
                    uint64_t(b.reference) + b.length <= a.reference;
                const bool native_disjoint = uint64_t(a.native) + a.length <= b.native ||
                    uint64_t(b.native) + b.length <= a.native;
                if (source_disjoint && native_disjoint) { independent = true; break; }
            }
        if (!independent) continue;
        // This is scope identity only. Two complete caller contexts do not
        // authorize entry ABI bytes or a delta for the rest of the function.
        state.function_owners.push_back({reference, reference + 1, native});
        std::sort(state.function_owners.begin(), state.function_owners.end(),
            [](const auto &left, const auto &right) { return left.begin < right.begin; });
        ++owners_added;
    }
    if (report) report("Native discovery: recovered " + std::to_string(added) +
        " call boundaries across independently identified caller-frame changes; " +
        std::to_string(owners_added) + " new scopes proved by independent caller contexts; " +
        std::to_string(branches_added) + " branch landings proved by independent contexts; " +
        std::to_string(joined_contexts) + " closed overlapping caller components");
    diagnostics.report("fixed-width caller", report);
}

} // namespace dfcn::pe_runtime

namespace dfcn::pe_runtime {
// Compare complete instructions when a stack displacement or direct branch
// changes encoding width. The source/target correspondence is explicit; no source
// byte offset is added to a target function or shifted by an inferred delta.
template <typename Image, typename Catalog>
inline void discover_variable_call_boundaries(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {},
        global_value_detail::Evidence *globals = nullptr) {
    using namespace address_runtime;
    using namespace display_decode;
    struct Stack { uint32_t base = 0, at = 0, width = 0; int32_t value = 0; };
    struct SourceInstruction {
        uint32_t offset = 0;
        hde64s op{};
        std::vector<unsigned char> bytes, mask;
        std::vector<Fixup> fixups;
        Stack stack;
        std::optional<int32_t> stack_coordinate;
        uint32_t branch = 0;
        global_value_detail::Operand global;
        bool nop = false;
    };
    struct Scope {
        std::vector<Instruction> code;
        std::unordered_map<uint64_t, std::vector<size_t>> starts;
    };
    const auto branch_kind = [](const hde64s &op) -> uint32_t {
        if (op.rex || op.p_66 || op.p_67 || op.p_rep || op.p_lock || op.p_seg) return 0;
        if (op.opcode >= 0x70 && op.opcode <= 0x7f && op.len == 2) return 1 + (op.opcode & 15);
        if (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f && op.len == 6)
            return 1 + (op.opcode2 & 15);
        if ((op.opcode == 0xeb && op.len == 2) || (op.opcode == 0xe9 && op.len == 5)) return 17;
        return 0;
    };
    const auto key = [&](const hde64s &op, const std::vector<unsigned char> &bytes) {
        if (caller_detail::alignment_nop(op, bytes)) return uint64_t(1) << 62;
        if (const auto branch = branch_kind(op)) return (uint64_t(1) << 63) | branch;
        // This is an index only. Matching below still requires either equal
        // physical bases or complete source/target entry-RSP provenance.
        const bool stack_index = (op.flags & F_MODRM) && op.modrm_mod != 3 && !op.p_67 &&
            (((op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b && op.sib_index == 4 && !op.rex_x) ||
             (!(op.flags & F_SIB) && op.modrm_rm == 5 && !op.rex_b && op.modrm_mod));
        const auto modrm = stack_index ? (op.modrm & 56) | 5 : op.modrm & 63;
        return uint64_t(op.opcode) | (uint64_t(op.opcode2) << 8) | (uint64_t(op.rex) << 16) |
            (uint64_t(op.p_66) << 24) | (uint64_t(op.p_rep) << 32) |
            (uint64_t(bool(op.flags & F_MODRM)) << 40) | (uint64_t(modrm) << 41) |
            (uint64_t(!stack_index && bool(op.flags & F_SIB)) << 47) | (uint64_t(stack_index ? 0 : op.sib) << 48);
    };
    const auto stack_operand = [](const hde64s &op, const std::vector<unsigned char> &bytes, bool rbp) {
        Stack result;
        if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || op.p_67) return result;
        if ((op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b && op.sib_index == 4 && !op.rex_x)
            result.base = 4;
        else if (rbp && !(op.flags & F_SIB) && op.modrm_rm == 5 && !op.rex_b && op.modrm_mod != 0)
            result.base = 5;
        if (!result.base) return result;
        result.width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
        result.at = op.len - immediate_width(op) - result.width;
        result.value = frame_detail::displacement(bytes.data() + result.at, result.width);
        return result;
    };
    const auto stack_width = [](const hde64s &op) {
        return op.opcode == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 4) ? 8u : access_width(op);
    };
    const auto normalized = [](const std::vector<unsigned char> &bytes, const hde64s &op,
            const Stack &stack, uint32_t branch, bool unified) {
        if (caller_detail::alignment_nop(op, bytes)) return std::vector<unsigned char>{0x90};
        if (branch) return std::vector<unsigned char>{static_cast<unsigned char>(branch), 0, 0, 0, 0};
        return stack.base ? frame_detail::stack_encoding(bytes, op, stack.at, stack.width, unified) : bytes;
    };
    const auto frames = frame_detail::read(catalog.frame_semantics);
    caller_detail::CanonicalContexts canonical_contexts(catalog, frames);
    frame_member_detail::ShadowCache receiver_cache(image, report);
    receiver_alias_detail::Cache receiver_aliases(image);
    argument_alias_detail::Cache argument_aliases(image);
    const auto argument_sites = argument_alias_detail::read(frames.argument_aliases);
    std::map<uint32_t, frame_detail::TargetRbpFrame> target_frames;
    std::map<uint32_t, Scope> scopes;
    Bindings bindings;
    for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    const auto required = [&](uint32_t call) {
        for (const auto &[reference, length] : catalog.required)
            if ((reference == call && length <= 5) || (reference == call + 5 && length == 1))
                if (!bindings.lookup(reference) || !bindings.lookup(reference + length - 1)) return true;
        return false;
    };
    struct Call { uint32_t native; const Pattern *pattern; uint32_t offset; int continuation; };
    std::map<uint32_t, std::map<uint32_t, Call>> calls;
    caller_detail::BranchSeeds branch_seeds(catalog);
    caller_detail::LandingSeeds landing_seeds(catalog, state, branch_seeds);
    size_t considered = 0, global_contexts = 0, global_source_ambiguous = 0,
        global_target_ambiguous = 0, global_unproved = 0, global_accepted = 0;
    struct StackAccess {
        uint32_t base = 0, width = 0;
        int32_t source = 0, native = 0;
    };
    struct ClosedContext {
        const Pattern *original = nullptr;
        uint32_t native = 0, native_length = 0;
        std::map<uint32_t, uint32_t> coordinates;
        std::map<uint32_t, uint32_t> instruction_widths;
        std::set<uint32_t> identities, fixed_bytes;
        std::vector<StackAccess> stack;
        bool component_safe = true;
        bool cross_base = false;
        std::vector<caller_detail::BranchSeeds::Edge> edges;
        std::vector<caller_detail::BranchSeeds::Edge> links;
        std::vector<std::pair<uint32_t, Call>> calls;
        std::vector<std::tuple<uint32_t, uint32_t, unsigned char>> landings;
    };
    std::map<uint32_t, std::vector<ClosedContext>> closed_contexts;
    const auto accept_context = [&](const ClosedContext &context) {
        for (const auto &[reference, native, original] : context.landings)
            landing_seeds.record(reference, native, original);
        for (const auto &[reference, call] : context.calls) calls[reference].emplace(call.native, call);
    };
    caller_detail::Diagnostics diagnostics(catalog, state);
    for (const auto &original : catalog.patterns) for (const bool remap_arguments : {false, true})
            for (const bool global_values : {false, true}) {
        // Value materialization equivalence is initially confined to real
        // consumed CALL prefixes. It is never a CFG/landing/scope witness.
        if (global_values && (!globals || remap_arguments || !(original.flags & 2048u))) continue;
        if (!(original.flags & 1) || !(original.flags & 8) || !original.owner || original.raw.size() > 1024) continue;
        auto arguments = remap_arguments ? argument_alias_detail::sites_for(argument_sites, original) :
            std::vector<argument_alias_detail::Site>{};
        if (remap_arguments && arguments.empty()) continue;
        auto pattern = original;
        const auto members = state.semantic_fields.empty() ? std::vector<frame_detail::Member>{} : caller_detail::members_for(frames, pattern);
        if (!members.empty() && !frame_member_detail::normalize(state, members, pattern)) continue;
        const auto owner = resolve(state.function_owners, pattern.owner);
        if (!owner) continue;
        const auto aliases = receiver_alias_detail::sites_for(frames, original);
        if (!receiver_alias_detail::normalize(receiver_aliases, state, owner, aliases, pattern)) continue;
        if (remap_arguments && (!argument_alias_detail::normalize(argument_aliases, owner, arguments, pattern) || arguments.empty())) continue;
        auto landings = (pattern.flags & 2048u) ? std::vector<uint32_t>{} : landing_seeds.offsets(pattern);
        std::set<uint32_t> consumed_calls;
        for (const auto &fixup : pattern.fixups)
            if ((fixup.kind & 0x100) && !(fixup.kind & 0xff) && fixup.width == 4 && fixup.offset &&
                    fixup.next == fixup.offset + 4 && pattern.raw[fixup.offset - 1] == 0xe8 &&
                    required(pattern.reference + fixup.offset - 1)) consumed_calls.insert(fixup.offset - 1);
        if (consumed_calls.empty() && landings.empty()) continue;
        const auto source_frame = frames.frame_registers.find(pattern.owner);
        std::vector<SourceInstruction> source;
        bool valid = true, has_stack = false, has_branch = false, has_nop = false, has_global = false;
        size_t fixed = 0;
        for (uint32_t at = 0; at < pattern.raw.size();) {
            unsigned char bounded[32]{};
            const auto available = (std::min)(size_t(16), pattern.raw.size() - at);
            std::memcpy(bounded, pattern.raw.data() + at, available);
            hde64s op{}; hde64_disasm(bounded, &op);
            if (!op.len || op.len > available || (op.flags & F_ERROR)) { valid = false; break; }
            // A caller-only prefix is straight-line preparation ending at
            // a consumed CALL/return instruction. It cannot contribute a
            // hidden branch, terminal, indirect transfer or closure edge.
            if ((pattern.flags & 2048u) && (branch_kind(op) ||
                    (op.opcode == 0xff && op.modrm_reg >= 2) ||
                    (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                    op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xca ||
                    op.opcode == 0xcb || op.opcode == 0xcc || op.opcode == 0xcf ||
                    op.opcode == 0xf4 || (op.opcode == 0x0f && op.opcode2 == 0x0b))) {
                valid = false; break;
            }
            SourceInstruction instruction;
            instruction.offset = at; instruction.op = op;
            instruction.bytes.assign(pattern.raw.begin() + at, pattern.raw.begin() + at + op.len);
            instruction.mask.assign(pattern.mask.begin() + at, pattern.mask.begin() + at + op.len);
            instruction.nop = caller_detail::alignment_nop(op, instruction.bytes);
            has_nop |= instruction.nop;
            const bool rbp = frame_detail::origin(frames, pattern.owner, pattern.reference + at, op.len, 5).has_value() ||
                (source_frame != frames.frame_registers.end() && (source_frame->second[0] & 0xff) == 5 &&
                 uint64_t(pattern.reference) + at >= source_frame->second[1] &&
                 uint64_t(pattern.reference) + at + op.len <= source_frame->second[2]);
            if (!instruction.nop) instruction.stack = stack_operand(op, instruction.bytes, rbp);
            if (instruction.stack.base) {
                has_stack = true;
                std::fill_n(instruction.mask.begin() + instruction.stack.at, instruction.stack.width, 1);
                const auto origin = frame_detail::origin(frames, pattern.owner,
                    pattern.reference + at, op.len, instruction.stack.base);
                if (origin) {
                    const auto coordinate = int64_t(*origin) + instruction.stack.value;
                    if (coordinate >= INT32_MIN && coordinate <= INT32_MAX)
                        instruction.stack_coordinate = static_cast<int32_t>(coordinate);
                }
            }
            for (const auto &fixup : pattern.fixups) if (fixup.offset >= at && fixup.offset < at + op.len) {
                if (uint64_t(fixup.offset) + fixup.width > at + op.len ||
                        (fixup.next && fixup.next != at + op.len)) { valid = false; break; }
                instruction.fixups.push_back({fixup.offset - at, fixup.width,
                    fixup.next ? fixup.next - at : 0, fixup.target, fixup.kind});
            }
            if (instruction.nop && !instruction.fixups.empty()) { valid = false; break; }
            if (global_values) {
                instruction.global = globals->operand(false, original.owner, original.reference + at, op);
                if (instruction.global.root) {
                    // Only the exact global-address operand can disappear
                    // when LEA is replaced with an already-reaching MOV.
                    const bool address_operand = op.opcode == 0x8d && instruction.fixups.size() == 1 &&
                        instruction.fixups.front().target == instruction.global.root &&
                        instruction.fixups.front().width == 4 && instruction.fixups.front().offset == op.len - 4 &&
                        instruction.fixups.front().next == op.len && !(instruction.fixups.front().kind & 0x100);
                    if ((op.opcode == 0x8d && !address_operand) || (op.opcode != 0x8d && !instruction.fixups.empty())) {
                        valid = false; break;
                    }
                    has_global = true;
                }
            }
            if (const auto branch = branch_kind(op)) {
                const auto width = op.len == 2 ? 1u : 4u;
                if (instruction.fixups.size() == 1) {
                    const auto &fixup = instruction.fixups.front();
                    if ((fixup.kind & 0x100) && !(fixup.kind & 0xff) && fixup.width == width &&
                            fixup.offset == op.len - width && fixup.next == op.len) {
                        instruction.branch = branch; has_branch = true;
                    }
                }
            }
            for (uint32_t byte = 0; valid && byte < op.len; ++byte) if (instruction.mask[byte]) {
                const bool stack_byte = instruction.stack.base && byte >= instruction.stack.at &&
                    byte < instruction.stack.at + instruction.stack.width;
                if (!stack_byte && std::none_of(instruction.fixups.begin(), instruction.fixups.end(),
                        [&](const auto &fixup) { return byte >= fixup.offset && byte < fixup.offset + fixup.width; })) valid = false;
            }
            if (!instruction.nop && !instruction.global.root) fixed += std::count(instruction.mask.begin(), instruction.mask.end(), 0);
            source.push_back(std::move(instruction)); at += op.len;
        }
        landings.erase(std::remove_if(landings.begin(), landings.end(), [&](uint32_t at) {
            return std::none_of(source.begin(), source.end(), [&](const auto &instruction) {
                return instruction.offset == at && !instruction.nop;
            });
        }), landings.end());
        if (!valid || (global_values && !has_global) || (consumed_calls.empty() && landings.empty()) ||
                (!has_stack && !has_branch && !has_nop && members.empty() && aliases.empty() && arguments.empty() && landings.empty() && !has_global) ||
                fixed < ((pattern.flags & 256) ? 16u : 24u) || source.empty()) continue;
        if (global_values) ++global_contexts;
        if (!canonical_contexts.unique(original, pattern, global_values ? globals : nullptr)) {
            if (global_values) ++global_source_ambiguous;
            ++diagnostics.counts[pattern.owner].source_ambiguous;
            continue;
        }
        ++considered;
        ++diagnostics.counts[pattern.owner].contexts;
        if (!target_frames.count(owner)) target_frames.emplace(owner, frame_detail::target_rbp_frame(image, owner));
        const auto &target_frame = target_frames.at(owner);
        if (!target_frame.valid && std::any_of(source.begin(), source.end(), [](const auto &value) { return value.stack.base == 5; })) {
            diagnostics.frame(pattern.owner, target_frame.failure);
            continue;
        }
        if (!scopes.count(owner)) {
            auto &scope = scopes[owner];
            for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
                std::vector<Instruction> code;
                DecodeFailure failure;
                if (!decode(image, begin, end, code, nullptr, &failure)) {
                    if (report && diagnostics.missing.count(pattern.owner) &&
                            state.reported_caller_decode_failures.insert(owner).second) {
                        std::ostringstream detail;
                        detail << "Native required variable caller scope decode incomplete: reference=0x" << std::hex << pattern.owner
                            << " owner=0x" << owner
                            << " region=0x" << begin << "..0x" << end << " instruction=0x"
                            << failure.address << " " << failure.reason << " register=" << std::dec << failure.reg;
                        report(detail.str());
                    }
                    scope.code.clear();
                    break;
                }
                scope.code.insert(scope.code.end(), std::make_move_iterator(code.begin()), std::make_move_iterator(code.end()));
            }
            std::sort(scope.code.begin(), scope.code.end(), [](const auto &left, const auto &right) { return left.address < right.address; });
            for (size_t at = 0; at < scope.code.size(); ++at)
                scope.starts[key(scope.code[at].decoded, scope.code[at].bytes)].push_back(at);
        }
        const auto &scope = scopes.at(owner);
        std::vector<size_t> candidates;
        if (source.front().global.root) {
            for (size_t at = 0; at < scope.code.size(); ++at)
                if (global_value_detail::form(scope.code[at].decoded).destination == source.front().global.destination)
                    candidates.push_back(at);
        } else {
            const auto starts = scope.starts.find(key(source.front().op, source.front().bytes));
            if (starts == scope.starts.end()) continue;
            candidates = starts->second;
        }
        std::vector<size_t> accepted;
        std::set<size_t> unresolved_globals;
        std::map<size_t, std::vector<caller_detail::BranchSeeds::Edge>> pending_edges;
        std::map<size_t, std::vector<caller_detail::BranchSeeds::Edge>> local_links;
        std::map<size_t, std::set<uint32_t>> external_identities;
        std::map<size_t, bool> unified_frames;
        for (const auto first : candidates) {
            if (first + source.size() > scope.code.size()) continue;
            std::vector<Stack> target_stack;
            std::vector<std::optional<int32_t>> target_coordinates;
            bool unified = has_stack;
            const auto &native_origins = argument_aliases.get(owner);
            for (size_t index = 0; index < source.size(); ++index) {
                const auto &right = scope.code[first + index];
                const auto rbp_origin = native_origins.origin(right.address, 5);
                const bool rbp = rbp_origin || (target_frame.valid && right.address >= target_frame.ready &&
                    uint64_t(right.address) + right.decoded.len <= target_frame.end);
                const auto actual = caller_detail::alignment_nop(right.decoded, right.bytes) ? Stack{} :
                    stack_operand(right.decoded, right.bytes, rbp);
                target_stack.push_back(actual);
                std::optional<int32_t> coordinate;
                if (actual.base) {
                    const auto origin = native_origins.origin(right.address, actual.base);
                    if (origin) {
                        const auto value = int64_t(*origin) + actual.value;
                        if (value >= INT32_MIN && value <= INT32_MAX) coordinate = static_cast<int32_t>(value);
                    }
                }
                target_coordinates.push_back(coordinate);
                if (source[index].stack.base || actual.base)
                    unified &= source[index].stack_coordinate.has_value() && coordinate.has_value() &&
                        !source[index].op.p_seg && !right.decoded.p_seg;
            }
            std::map<std::pair<uint32_t, int32_t>, int32_t> stack, inverse;
            std::map<uint32_t, uint32_t> instructions;
            bool match = true, complete_globals = true;
            for (size_t index = 0; index < source.size(); ++index) {
                const auto &left = source[index]; const auto &right = scope.code[first + index];
                if (index && scope.code[first + index - 1].address + scope.code[first + index - 1].decoded.len != right.address) { match = false; break; }
                if (left.nop != caller_detail::alignment_nop(right.decoded, right.bytes)) { match = false; break; }
                const auto &native_stack = target_stack[index];
                if (bool(left.stack.base) != bool(native_stack.base) ||
                        (!unified && left.stack.base != native_stack.base)) { match = false; break; }
                const auto native_branch = left.branch ? branch_kind(right.decoded) : 0;
                if (left.branch != native_branch) { match = false; break; }
                if (left.global.root) {
                    const auto value = globals->operand(true, owner, right.address, right.decoded);
                    if (value.destination != left.global.destination || (value.root && value.root != left.global.root)) {
                        match = false; break;
                    }
                    // A shape-compatible unknown value remains a candidate,
                    // but can never publish evidence, even if it is unique.
                    complete_globals &= value.root == left.global.root;
                } else {
                    const auto left_bytes = normalized(left.bytes, left.op, left.stack, left.branch, unified);
                    const auto right_bytes = normalized(right.bytes, right.decoded, native_stack, native_branch, unified);
                    auto mask = left.mask;
                    if (left.stack.base) mask = frame_detail::stack_encoding(mask, left.op,
                        left.stack.at, left.stack.width, unified, true);
                    if (left.branch) mask = {0, 1, 1, 1, 1};
                    if (left.nop) mask = {0};
                    if (left_bytes.size() != right_bytes.size()) { match = false; break; }
                    for (size_t byte = 0; byte < left_bytes.size(); ++byte)
                        if (!mask[byte] && left_bytes[byte] != right_bytes[byte]) { match = false; break; }
                    if (!match) break;
                }
                const auto established = left.nop ? 0 : bindings.lookup(pattern.reference + left.offset);
                if (established && established != right.address) { match = false; break; }
                if (left.stack.base) {
                    if (unified && (stack_width(left.op) == UINT32_MAX ||
                            stack_width(left.op) != stack_width(right.decoded))) { match = false; break; }
                    const auto base = unified ? 16u : left.stack.base;
                    const auto source_slot = unified ? *left.stack_coordinate : left.stack.value;
                    const auto target_slot = unified ? *target_coordinates[index] : native_stack.value;
                    const auto [forward, added] = stack.emplace(std::pair{base, source_slot}, target_slot);
                    const auto [backward, unique] = inverse.emplace(std::pair{base, target_slot}, source_slot);
                    if ((!added && forward->second != target_slot) || (!unique && backward->second != source_slot)) { match = false; break; }
                }
                instructions.emplace(pattern.reference + left.offset, right.address);
            }
            if (!match) continue;
            if (!members.empty()) {
                const auto begin = scope.code[first].address;
                const auto &last = scope.code[first + source.size() - 1];
                const auto length = last.address + last.decoded.len - begin;
                const auto *actual = image.read(begin, length);
                if (!actual) continue;
                Pattern target_pattern;
                target_pattern.raw.assign(actual, actual + length);
                std::vector<frame_detail::Member> target_members;
                for (const auto &member : members) {
                    const auto load = instructions.find(pattern.reference + member.load);
                    const auto field = instructions.find(pattern.reference + member.instruction);
                    if (load == instructions.end() || field == instructions.end()) { match = false; break; }
                    auto translated = member;
                    translated.load = load->second - begin;
                    translated.instruction = field->second - begin;
                    translated.displacement = translated.instruction + member.displacement - member.instruction;
                    target_members.push_back(translated);
                }
                // The instruction comparison above already matched the
                // exact target member offset. Check its actual receiver
                // lineage using the explicit variable-width correspondence.
                if (!match || !frame_member_detail::matches(image, owner, begin, target_pattern, target_members, &receiver_cache)) continue;
            }
            if (!receiver_alias_detail::matches(receiver_aliases, owner, aliases, instructions)) continue;
            if (!argument_alias_detail::matches(argument_aliases, owner, arguments, instructions)) continue;
            ++diagnostics.counts[pattern.owner].shapes;
            std::set<uint32_t> identities;
            std::vector<caller_detail::BranchSeeds::Edge> edges;
            std::vector<caller_detail::BranchSeeds::Edge> links;
            for (size_t index = 0; match && index < source.size(); ++index) {
                const auto &left = source[index]; const auto &right = scope.code[first + index];
                const auto &native_stack = target_stack[index];
                if (left.global.root) {
                    const auto value = globals->operand(true, owner, right.address, right.decoded);
                    if (value.root == left.global.root) identities.insert(left.global.root);
                }
                for (const auto &fixup : left.fixups) {
                    if (left.global.root) continue; // Exact root handled by value proof, not a displaced physical operand.
                    auto actual_fixup = fixup;
                    if (left.branch) {
                        actual_fixup.width = right.decoded.len == 2 ? 1u : 4u;
                        actual_fixup.offset = right.decoded.len - actual_fixup.width;
                    } else if (left.stack.base && fixup.offset >= left.stack.at + left.stack.width)
                        actual_fixup.offset = fixup.offset - (left.stack.at + left.stack.width) + native_stack.at + native_stack.width;
                    if (actual_fixup.next) actual_fixup.next = right.decoded.len;
                    const auto actual = operand_target(image, pattern, right.address, actual_fixup);
                    uint32_t expected = 0;
                    if ((fixup.kind & 0x100) && fixup.target >= pattern.reference &&
                            uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size()) {
                        if (instructions.count(fixup.target)) expected = instructions.at(fixup.target);
                    } else {
                        expected = bindings.lookup(fixup.target);
                        if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
                        auto whole_fixup = fixup;
                        whole_fixup.offset += left.offset;
                        if (whole_fixup.next) whole_fixup.next += left.offset;
                        if (expected && caller_detail::semantic_operand(pattern, whole_fixup)) identities.insert(fixup.target);
                    }
                    auto source_fixup = fixup;
                    source_fixup.offset += left.offset;
                    if (source_fixup.next) source_fixup.next += left.offset;
                    if (branch_seeds.local_jump(pattern, source_fixup)) links.push_back({fixup.target, actual});
                    const auto destination = std::lower_bound(scope.code.begin(), scope.code.end(), actual,
                        [](const auto &instruction, uint32_t value) { return instruction.address < value; });
                    if (!expected && branch_seeds.local_jump(pattern, source_fixup) &&
                            destination != scope.code.end() && destination->address == actual) {
                        diagnostics.operand(pattern.owner, pattern.reference, scope.code[first].address, fixup, expected, actual);
                        edges.push_back({fixup.target, actual});
                        continue;
                    }
                    if ((fixup.target && !expected) || actual != expected) {
                        diagnostics.operand(pattern.owner, pattern.reference, scope.code[first].address, fixup, expected, actual);
                        match = false; break;
                    }
                }
            }
            if (match) if (const auto next = branch_seeds.local_fallthrough(pattern)) {
                const auto &last = scope.code[first + source.size() - 1];
                const auto actual = last.address + last.decoded.len;
                const auto following = std::lower_bound(scope.code.begin(), scope.code.end(), actual,
                    [](const auto &instruction, uint32_t value) { return instruction.address < value; });
                const auto known = bindings.lookup(next);
                if (following == scope.code.end() || following->address != actual || (known && known != actual)) match = false;
                else {
                    links.push_back({next, actual});
                    if (!known) edges.push_back({next, actual});
                }
            }
            if (match && identities.size() < 2) ++diagnostics.counts[pattern.owner].identities;
            if (match) {
                accepted.push_back(first);
                if (!complete_globals) unresolved_globals.insert(first);
                pending_edges.emplace(first, std::move(edges));
                local_links.emplace(first, std::move(links));
                external_identities.emplace(first, std::move(identities));
                unified_frames.emplace(first, unified);
            }
        }
        if (accepted.size() != 1) {
            if (global_values && accepted.size() > 1) ++global_target_ambiguous;
            continue;
        }
        if (unresolved_globals.count(accepted.front())) { if (global_values) ++global_unproved; continue; }
        if (global_values) ++global_accepted;
        ++diagnostics.counts[pattern.owner].unique;
        ClosedContext context;
        context.original = &original;
        context.native = scope.code[accepted.front()].address;
        const auto &last = scope.code[accepted.front() + source.size() - 1];
        context.native_length = last.address + last.decoded.len - context.native;
        context.edges = pending_edges.at(accepted.front());
        context.links = local_links.at(accepted.front());
        context.identities = external_identities.at(accepted.front());
        const bool unified = unified_frames.at(accepted.front());
        const auto &native_origins = argument_aliases.get(owner);
        for (size_t index = 0; index < source.size(); ++index) {
            const auto &left = source[index]; const auto &right = scope.code[accepted.front() + index];
            // Padding participates in sequence matching, never in address,
            // identity-byte, stack or overlap evidence.
            if (left.nop) continue;
            const auto reference = pattern.reference + left.offset;
            context.coordinates.emplace(reference, right.address);
            context.instruction_widths.emplace(reference, left.op.len);
            // Count actual fixed opcode/operand bytes once in the component.
            // Encoding-width ModRM bits and branch-displacement bytes are
            // normalization evidence, not additional fixed-byte witnesses.
            const auto modrm = left.stack.base ? left.stack.at - 1 - ((left.op.flags & F_SIB) ? 1 : 0) : UINT32_MAX;
            for (uint32_t byte = 0; byte < left.bytes.size(); ++byte)
                if (!left.global.root && !left.mask[byte] && byte != modrm &&
                        !(unified && (left.op.flags & F_SIB) && byte == modrm + 1) && (!left.branch || byte == 0))
                    context.fixed_bytes.insert(reference + byte);
            if (writes_gpr(left.op, 4) || writes_gpr(right.decoded, 4) ||
                    writes_gpr(left.op, 5) || writes_gpr(right.decoded, 5)) context.component_safe = false;
            if ((branch_kind(left.op) && !left.branch) ||
                    (left.op.opcode == 0xff && left.op.modrm_reg >= 4) ||
                    (left.op.opcode >= 0xe0 && left.op.opcode <= 0xe3) ||
                    left.op.opcode == 0xca || left.op.opcode == 0xcb || left.op.opcode == 0xcf)
                context.component_safe = false;
            const auto indexed_stack = [](const hde64s &op, bool rbp) {
                if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || !(op.flags & F_SIB)) return false;
                const auto base = op.sib_base + (op.rex_b ? 8 : 0);
                return (base == 4 || (rbp && base == 5)) && (op.sib_index != 4 || op.rex_x);
            };
            if (indexed_stack(left.op, source_frame != frames.frame_registers.end()) ||
                    indexed_stack(right.decoded, target_frame.valid)) context.component_safe = false;
            if (left.stack.base) {
                const bool rbp = native_origins.origin(right.address, 5).has_value() ||
                    (target_frame.valid && right.address >= target_frame.ready &&
                     uint64_t(right.address) + right.decoded.len <= target_frame.end);
                const auto actual = stack_operand(right.decoded, right.bytes, rbp);
                const auto width = stack_width(left.op), native_width = stack_width(right.decoded);
                if (width == UINT32_MAX || width != native_width) context.component_safe = false;
                // LEA proves an address point, not the extent of a local.
                const auto target_origin = native_origins.origin(right.address, actual.base);
                const auto target_coordinate = unified ? static_cast<int32_t>(int64_t(*target_origin) + actual.value) : actual.value;
                context.stack.push_back({unified ? 16u : left.stack.base, width == UINT32_MAX ? 0u : (std::max)(1u, width),
                    unified ? *left.stack_coordinate : left.stack.value, target_coordinate});
                context.cross_base |= left.stack.base != actual.base;
            }
        }
        for (size_t index = 0; index < source.size(); ++index) if (
                std::binary_search(landings.begin(), landings.end(), source[index].offset))
            context.landings.emplace_back(pattern.reference + source[index].offset,
                scope.code[accepted.front() + index].address, original.raw[source[index].offset]);
        for (size_t index = 0; index < source.size(); ++index) if (consumed_calls.count(source[index].offset)) {
            const auto &instruction = scope.code[accepted.front() + index];
            if (instruction.decoded.opcode != 0xe8 || instruction.decoded.len != 5) continue;
            const auto reference = pattern.reference + source[index].offset;
            const auto next = std::lower_bound(scope.code.begin(), scope.code.end(), instruction.address + 5,
                [](const auto &entry, uint32_t address) { return entry.address < address; });
            const auto source_continuation = branch_seeds.continuation_byte(original, source[index].offset + 5);
            const bool return_boundary = next != scope.code.end() && next->address == instruction.address + 5;
            const bool nonpadding_return = return_boundary &&
                !caller_detail::alignment_nop(next->decoded, next->bytes) && !branch_seeds.padding(reference + 5);
            // MSVC can place an exact one-byte NOP at an EH call return.
            // The independently matched complete E8 already determines that
            // PC. Preserve its caller identity without treating padding as
            // a neighboring instruction or a branch-component witness.
            const bool exact_nop_return = return_boundary && source_continuation == 0x90 &&
                next->decoded.len == 1 && next->bytes.size() == 1 && next->bytes.front() == 0x90;
            const auto continuation = nonpadding_return || exact_nop_return ? source_continuation : -1;
            context.calls.emplace_back(reference, Call{instruction.address, &original, source[index].offset, continuation});
            if (nonpadding_return && continuation >= 0)
                context.coordinates.emplace(reference + 5, instruction.address + 5);
        }
        closed_contexts[owner].push_back(std::move(context));
    }
    size_t closed_count = 0, weak_count = 0, closed_weak_count = 0, unsafe_count = 0,
        augmented_count = 0, conflicting_components = 0;
    for (const auto &[owner, contexts] : closed_contexts) {
        (void)owner;
        std::set<size_t> eligible;
        std::map<uint32_t, std::set<uint32_t>> forward, inverse;
        for (size_t index = 0; index < contexts.size(); ++index) {
            // Caller-only prefixes cannot lend their interior coordinates
            // to a CFG component or participate in component closure.
            if (contexts[index].original->flags & 2048u) continue;
            eligible.insert(index);
            for (const auto &[reference, native] : contexts[index].coordinates) {
                forward[reference].insert(native);
                inverse[native].insert(reference);
            }
        }
        // Every context has exactly one match over the complete actual owner.
        // This uniqueness was established before considering another block's
        // branches. Weak contexts are retained as candidates only; they cannot
        // record a branch witness or publish a call on their own.
        for (auto at = eligible.begin(); at != eligible.end();) {
            bool coherent = true;
            for (const auto &[reference, native] : contexts[*at].coordinates)
                if (forward.at(reference).size() != 1 || inverse.at(native).size() != 1) { coherent = false; break; }
            if (!coherent) at = eligible.erase(at); else ++at;
        }
        const auto components = [&](const std::set<size_t> &included) {
            std::map<uint32_t, std::vector<size_t>> coordinates, instructions;
            std::map<size_t, std::set<size_t>> adjacent;
            for (const auto index : included) {
                for (const auto &[reference, native] : contexts[index].coordinates) coordinates[reference].push_back(index);
                for (const auto &[reference, width] : contexts[index].instruction_widths) instructions[reference].push_back(index);
            }
            std::map<std::pair<size_t, size_t>, size_t> overlap;
            for (const auto &[reference, owners] : instructions)
                for (size_t left = 0; left < owners.size(); ++left)
                    for (size_t right = left + 1; right < owners.size(); ++right) {
                        const auto a = owners[left], b = owners[right];
                        if (contexts[a].instruction_widths.at(reference) != contexts[b].instruction_widths.at(reference)) continue;
                        overlap[{a, b}] += contexts[a].instruction_widths.at(reference);
                    }
            // Sharing complete instructions connects independently matched
            // contexts; a partial byte overlap never does.
            for (const auto &[pair, width] : overlap) if (width >= 5) {
                adjacent[pair.first].insert(pair.second); adjacent[pair.second].insert(pair.first);
            }
            for (const auto index : included) for (const auto &edge : contexts[index].links) {
                const auto targets = coordinates.find(edge.reference);
                if (targets == coordinates.end()) continue;
                for (const auto target : targets->second) if (target != index &&
                        contexts[target].coordinates.at(edge.reference) == edge.native) {
                    adjacent[index].insert(target); adjacent[target].insert(index);
                }
            }
            std::vector<std::vector<size_t>> result;
            std::set<size_t> remaining = included;
            while (!remaining.empty()) {
                std::vector<size_t> group{*remaining.begin()}; remaining.erase(group.front());
                for (size_t at = 0; at < group.size(); ++at)
                    for (const auto next : adjacent[group[at]]) if (remaining.erase(next)) group.push_back(next);
                result.push_back(std::move(group));
            }
            return result;
        };
        std::string stack_conflict;
        const auto stack_contract = [&](const std::vector<size_t> &group, bool &safe) {
            std::set<std::tuple<uint32_t, int32_t, int32_t, uint32_t>> unique;
            std::set<uint32_t> bases;
            bool cross_base = false;
            std::map<std::pair<uint32_t, int32_t>, int32_t> forward_stack, inverse_stack;
            for (const auto index : group) {
                safe = safe && contexts[index].component_safe;
                cross_base |= contexts[index].cross_base;
                for (const auto &access : contexts[index].stack) {
                    bases.insert(access.base);
                    const auto [forward, inserted] = forward_stack.emplace(std::pair{access.base, access.source}, access.native);
                    const auto [inverse, unique_target] = inverse_stack.emplace(std::pair{access.base, access.native}, access.source);
                    if ((!inserted && forward->second != access.native) ||
                            (!unique_target && inverse->second != access.source)) {
                        std::ostringstream detail;
                        detail << "base=" << access.base << " source=0x" << std::hex << uint32_t(access.source)
                            << " target=0x" << uint32_t(access.native) << " previous-target=0x" << uint32_t(forward->second)
                            << " previous-source=0x" << uint32_t(inverse->second);
                        stack_conflict = detail.str(); return false;
                    }
                    unique.emplace(access.base, access.source, access.native, (std::max)(1u, access.width));
                }
            }
            // Frame v9 uses base 16 exclusively for actual entry-RSP byte
            // coordinates on both images. A cross-base proof may not mix
            // those coordinates with a neighbour's unproved physical base.
            if (cross_base && (bases.size() != 1 || !bases.count(16))) {
                stack_conflict = "cross-base component lacks complete entry-RSP origins";
                return false;
            }
            if (bases.size() > 1) safe = false;
            std::vector<StackAccess> accesses;
            for (const auto &[base, source, native, width] : unique) accesses.push_back({base, width, source, native});
            const auto intervals_agree = [&](bool target) {
                const auto start = [target](const StackAccess &access) { return int64_t(target ? access.native : access.source); };
                std::sort(accesses.begin(), accesses.end(), [&](const auto &left, const auto &right) {
                    return std::pair{left.base, start(left)} < std::pair{right.base, start(right)};
                });
                for (size_t left = 0; left < accesses.size(); ++left)
                    for (size_t right = left + 1; right < accesses.size() && accesses[left].base == accesses[right].base &&
                            start(accesses[right]) < start(accesses[left]) + accesses[left].width; ++right)
                        if (int64_t(accesses[left].native) - accesses[left].source !=
                                int64_t(accesses[right].native) - accesses[right].source) {
                            std::ostringstream detail;
                            detail << "overlap-base=" << accesses[left].base << " source=0x" << std::hex
                                << uint32_t(accesses[left].source) << "+0x" << accesses[left].width << "->0x"
                                << uint32_t(accesses[left].native) << " other=0x" << uint32_t(accesses[right].source)
                                << "+0x" << accesses[right].width << "->0x" << uint32_t(accesses[right].native);
                            stack_conflict = detail.str(); return false;
                        }
                return true;
            };
            return intervals_agree(false) && intervals_agree(true);
        };
        // A disagreement is evidence against the component, including its
        // strong contexts. Unsupported weak evidence is merely ineligible for
        // the new combined proof and does not erase an independent strong one.
        bool reported_stack_conflict = false;
        for (const auto &group : components(eligible)) {
            bool safe = true;
            if (!stack_contract(group, safe)) {
                for (const auto index : group) eligible.erase(index);
                ++conflicting_components;
                if (!reported_stack_conflict && report && diagnostics.missing.count(contexts[group.front()].original->owner)) {
                    std::ostringstream detail;
                    detail << "Native caller component rejected: owner=0x" << std::hex
                        << contexts[group.front()].original->owner << " " << stack_conflict;
                    report(detail.str()); reported_stack_conflict = true;
                }
            }
        }
        for (size_t index = 0; index < contexts.size(); ++index) {
            const auto &context = contexts[index];
            if (!(context.original->flags & 2048u) || context.identities.size() < 2 ||
                    !context.edges.empty() || !context.links.empty()) continue;
            // Reuse the exact same interval/overlap and entry-RSP contract
            // as complete contexts, but publish only consumed E8/return
            // boundaries. The truncated tail is never a closed CFG edge.
            bool safe = true;
            if (stack_contract({index}, safe) && safe)
                for (const auto &[reference, call] : context.calls) calls[reference].emplace(call.native, call);
        }
        const auto closed = [&](std::set<size_t> included) {
            bool changed = true;
            while (changed) {
                changed = false;
                std::map<uint32_t, uint32_t> available;
                for (const auto index : included)
                    available.insert(contexts[index].coordinates.begin(), contexts[index].coordinates.end());
                for (auto at = included.begin(); at != included.end();) {
                    bool complete = true;
                    for (const auto &edge : contexts[*at].edges) {
                        const auto known = bindings.lookup(edge.reference);
                        const auto found = available.find(edge.reference);
                        if (known ? known != edge.native : found == available.end() || found->second != edge.native) {
                            complete = false; break;
                        }
                    }
                    if (!complete) { at = included.erase(at); changed = true; } else ++at;
                }
            }
            return included;
        };
        const auto publish = [&](size_t index) {
            const auto &context = contexts[index];
            accept_context(context);
            for (const auto &edge : context.edges) {
                const auto *source = branch_seeds.source(edge.reference);
                if (source && !branch_seeds.padding(edge.reference))
                    landing_seeds.record(edge.reference, edge.native, source->raw[edge.reference - source->reference]);
            }
        };
        std::set<size_t> strong, combined;
        for (const auto index : eligible) {
            const auto &context = contexts[index];
            if (context.identities.size() >= 2 && !(context.original->flags & 512)) {
                strong.insert(index);
                if (!context.edges.empty()) branch_seeds.record(*context.original, context.native,
                    context.native_length, context.edges);
            } else ++weak_count;
            if (context.component_safe) combined.insert(index); else ++unsafe_count;
        }
        // Preserve the existing independent proof, even when a neighbouring
        // weak context cannot close. Branches never select its unique match.
        const auto independent = closed(std::move(strong));
        for (const auto index : independent) {
            publish(index);
            if (!contexts[index].edges.empty()) ++closed_count;
        }
        combined = closed(std::move(combined));
        for (const auto index : combined) if (contexts[index].identities.size() < 2) ++closed_weak_count;
        for (const auto &group : components(combined)) {
            bool safe = true, anchored = false, weak = false, component_only = false;
            std::set<uint32_t> identities, bytes;
            for (const auto index : group) {
                const auto &context = contexts[index];
                anchored = anchored || context.identities.size() >= 2;
                weak = weak || context.identities.size() < 2 || (context.original->flags & 512);
                component_only |= bool(context.original->flags & 512);
                identities.insert(context.identities.begin(), context.identities.end());
                bytes.insert(context.fixed_bytes.begin(), context.fixed_bytes.end());
            }
            if (!weak || (!anchored && !component_only) || identities.size() < 2 || bytes.size() < 64 ||
                    !stack_contract(group, safe) || !safe) continue;
            for (const auto index : group) if (!independent.count(index)) publish(index);
            ++augmented_count;
        }
    }
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    size_t added = 0;
    for (const auto &[reference, alternatives] : calls) {
        if (alternatives.size() != 1) continue;
        const auto &call = alternatives.begin()->second;
        if (!bindings.compatible(reference, 5, call.native)) continue;
        const auto *actual = image.read(call.native, 5);
        if (!actual) continue;
        const auto *source = call.pattern->raw.data() + call.offset;
        added += bindings.add(reference, 5, call.native);
        for (uint32_t index = 0; index < 5; ++index) if (source[index] != actual[index]) {
            const Byte byte{reference + index, source[index], actual[index]};
            const auto [entry, inserted] = changes.emplace(byte.address, byte);
            if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                throw std::runtime_error("Conflicting instruction-wise native call binding");
        }
        if (call.continuation >= 0)
            landing_seeds.record(reference + 5, call.native + 5, static_cast<unsigned char>(call.continuation));
    }
    const auto branches_added = branch_seeds.publish(image, bindings, changes) + landing_seeds.publish(image, bindings, changes);
    state.ranges = bindings.export_ranges(); state.bytes.clear();
    for (const auto &[reference, byte] : changes) { (void)reference; state.bytes.push_back(byte); }
    if (report) report("Native discovery: instruction-wise caller matching recovered " + std::to_string(added) +
        " call boundaries from " + std::to_string(considered) + " decoded caller contexts; " +
        std::to_string(branches_added) + " independently proved branch landings; " +
        std::to_string(closed_count) + " independently unique contexts with closed local edges; " +
        std::to_string(weak_count) + " unique weak candidates (" + std::to_string(closed_weak_count) +
        " closed); " + std::to_string(unsafe_count) + " unproved stack/control contexts; " + std::to_string(augmented_count) +
        " closed anchored components; " + std::to_string(conflicting_components) + " conflicting stack components rejected");
    if (report && global_contexts) report("Native named-global caller values: contexts=" + std::to_string(global_contexts) +
        " source-ambiguous=" + std::to_string(global_source_ambiguous) + " target-ambiguous=" +
        std::to_string(global_target_ambiguous) + " unresolved-value=" + std::to_string(global_unproved) +
        " uniquely-proved-contexts=" + std::to_string(global_accepted));
    diagnostics.report("variable-width caller", report);
}
} // namespace dfcn::pe_runtime
