#pragma once
#include "native_frame_discovery.h"

namespace dfcn::pe_runtime {
// Literal identities can locate a caller whose stack allocation changed so
// extensively that no complete byte-shaped block survives. This only grants
// the unwind scope; every consumed instruction still needs its own proof.
template<typename Image, typename Catalog>
inline std::set<uint32_t> discover_literal_scopes(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace address_runtime;
    using namespace display_decode;
    struct Literal {
        const Pattern *pattern = nullptr;
        uint32_t native = 0;
        std::set<uint32_t> source_owners;
        std::map<uint32_t, std::set<uint32_t>> references;
        bool outside_unwind = false;
    };
    std::map<uint32_t, Literal> literals;
    for (const auto &pattern : catalog.patterns) {
        if (!(pattern.flags & 32) || !(pattern.flags & 4) || pattern.raw.size() < 16 ||
                pattern.raw.size() > 4096 || pattern.raw.back() || !pattern.fixups.empty() ||
                std::any_of(pattern.mask.begin(), pattern.mask.end(), [](auto byte) { return byte != 0; }) ||
                std::find(pattern.raw.begin(), std::prev(pattern.raw.end()), 0) != std::prev(pattern.raw.end())) continue;
        const auto native = resolve(state.ranges, pattern.reference);
        const auto *section = image.section(native, pattern.raw.size());
        const auto *bytes = image.read(native, pattern.raw.size());
        if (!native || !section || (section->flags & (Image::write_flag | Image::execute_flag)) ||
                !bytes || std::memcmp(bytes, pattern.raw.data(), pattern.raw.size())) continue;
        literals.emplace(pattern.reference, Literal{&pattern, native, {}, {}, false});
    }
    // Only complete retained basic blocks establish the canonical RIP load.
    // A constant which merely happens to resemble a displacement is not a use.
    for (const auto &pattern : catalog.patterns) {
        if (!(pattern.flags & 8) || (pattern.flags & 2048u) || !pattern.owner) continue;
        for (size_t at = 0; at < pattern.raw.size();) {
            hde64s op{};
            if (!frame_member_detail::decode_one(pattern.raw.data() + at, pattern.raw.size() - at, op)) break;
            if (op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_mod == 0 && op.modrm_rm == 5 &&
                    (op.flags & F_DISP32) && !(op.flags & F_SIB)) {
                const auto position = at + op.len - 4;
                for (const auto &fixup : pattern.fixups) {
                    if (fixup.offset != position || fixup.width != 4 || fixup.next != at + op.len || fixup.kind) continue;
                    const auto found = literals.find(fixup.target);
                    if (found != literals.end()) found->second.source_owners.insert(pattern.owner);
                }
            }
            at += op.len;
        }
    }
    std::map<uint32_t, std::vector<Literal *>> targets;
    for (auto &[reference, literal] : literals) {
        if (literal.source_owners.size() != 1 || resolve(state.function_owners, *literal.source_owners.begin())) continue;
        targets[literal.native].push_back(&literal);
    }
    if (targets.empty()) return {};
    // This byte search only proposes xrefs. Each proposal must subsequently
    // be an instruction boundary in a completely decoded native owner.
    for (const auto &section : image.sections) {
        if (!(section.flags & Image::execute_flag) || section.raw_size < 7) continue;
        const auto *bytes = image.read(section.begin, section.raw_size);
        if (!bytes) continue;
        for (uint32_t at = 0; uint64_t(at) + 7 <= section.raw_size; ++at) {
            if ((bytes[at] != 0x48 && bytes[at] != 0x4c) || bytes[at + 1] != 0x8d ||
                    (bytes[at + 2] & 0xc7) != 5) continue;
            int32_t displacement = 0; std::memcpy(&displacement, bytes + at + 3, 4);
            const auto address = section.begin + at;
            const auto target = int64_t(address) + 7 + displacement;
            if (target <= 0 || target >= image.size) continue;
            const auto wanted = targets.find(static_cast<uint32_t>(target));
            if (wanted == targets.end()) continue;
            const auto function = frame_detail::function_at(image, address, 7);
            for (auto *literal : wanted->second) {
                if (function == image.functions.end()) literal->outside_unwind = true;
                else literal->references[function->owner ? function->owner : function->begin].insert(address);
            }
        }
    }
    struct Scope { bool complete = true; std::set<uint32_t> instructions; };
    std::map<uint32_t, Scope> scopes;
    std::map<uint32_t, std::map<uint32_t, std::vector<const Literal *>>> evidence;
    for (const auto &[reference, literal] : literals) {
        if (literal.outside_unwind || literal.source_owners.size() != 1 ||
                resolve(state.function_owners, *literal.source_owners.begin())) continue;
        std::set<uint32_t> owners;
        bool complete = true;
        for (const auto &[owner, references] : literal.references) {
            auto [entry, inserted] = scopes.try_emplace(owner);
            auto &scope = entry->second;
            if (inserted) for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
                std::vector<Instruction> code;
                if (!decode(image, begin, end, code)) { scope.complete = false; scope.instructions.clear(); break; }
                for (const auto &instruction : code) scope.instructions.insert(instruction.address);
            }
            if (!scope.complete) { complete = false; break; }
            if (std::any_of(references.begin(), references.end(), [&](auto address) {
                    return scope.instructions.count(address) != 0;
                })) owners.insert(owner);
        }
        if (complete && owners.size() == 1)
            evidence[*literal.source_owners.begin()][*owners.begin()].push_back(&literal);
    }
    size_t added = 0;
    std::set<uint32_t> scope_only;
    std::vector<Range> additions;
    for (const auto &[reference, alternatives] : evidence) {
        if (alternatives.size() != 1 || resolve(state.function_owners, reference)) continue;
        const auto &[native, witnesses] = *alternatives.begin();
        bool independent = false;
        for (size_t left = 0; left < witnesses.size() && !independent; ++left)
            for (size_t right = left + 1; right < witnesses.size(); ++right) {
                const auto &a = witnesses[left]->pattern->raw, &b = witnesses[right]->pattern->raw;
                if (std::search(a.begin(), std::prev(a.end()), b.begin(), std::prev(b.end())) == std::prev(a.end()) &&
                        std::search(b.begin(), std::prev(b.end()), a.begin(), std::prev(a.end())) == std::prev(b.end())) {
                    independent = true; break;
                }
            }
        if (!independent) continue;
        additions.push_back({reference, reference + 1, native});
        scope_only.insert(reference);
        ++added;
    }
    state.function_owners.insert(state.function_owners.end(), additions.begin(), additions.end());
    std::sort(state.function_owners.begin(), state.function_owners.end(),
        [](const auto &left, const auto &right) { return left.begin < right.begin; });
    if (report && added) report("Native discovery: proved " + std::to_string(added) +
        " function scopes from independent complete literal identities");
    return scope_only;
}
} // namespace dfcn::pe_runtime
