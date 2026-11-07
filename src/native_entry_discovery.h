#pragma once
#include <iterator>
#include "native_display_discovery.h"

namespace dfcn::pe_runtime {

namespace entry_detail {
inline bool saved_register_push(const display_decode::hde64s &op, uint32_t &reg) {
    if (op.opcode < 0x50 || op.opcode > 0x57 || op.p_66 || op.p_67 || op.p_lock || op.p_rep || op.p_seg ||
            (op.rex && op.rex != 0x41) || op.len != (op.rex ? 2u : 1u)) return false;
    reg = op.opcode - 0x50 + (op.rex_b ? 8 : 0);
    return reg == 3 || reg == 5 || reg == 6 || reg == 7 || reg >= 12;
}
template<typename Image, typename Function>
inline bool unwind_push(const Image &image, const Function &function, uint32_t after, uint32_t reg) {
    const auto *header = image.read(function.unwind, 4);
    if (!header || (header[0] & 7) != 1 || (header[0] & (4 << 3)) || after > header[1]) return false;
    const auto count = uint32_t(header[2]);
    const auto *codes = image.read(function.unwind + 4, count * 2);
    if (!codes && count) return false;
    bool found = false;
    for (uint32_t at = 0; at < count;) {
        const uint32_t offset = codes[at * 2], operation = codes[at * 2 + 1] & 15, info = codes[at * 2 + 1] >> 4;
        uint32_t slots = 1;
        if (operation == 0 && offset == after) {
            if (found || info != reg) return false;
            found = true;
        }
        if (operation == 1) slots = info == 0 ? 2 : info == 1 ? 3 : 0;
        else if (operation == 4 || operation == 8) slots = 2;
        else if (operation == 5 || operation == 9) slots = 3;
        else if (operation > 3) return false;
        if (!slots || at + slots > count || offset > header[1]) return false;
        at += slots;
    }
    return found;
}
} // namespace entry_detail

// Function ownership is established from independent body anchors. A changed
// frame allocation later in the prologue must not discard an unchanged entry
// prefix. A compiler may choose different nonvolatile registers to save;
// permit only same-length PUSH substitutions individually certified by the
// actual unwind table. Argument homes and all other bytes remain exact.
template<typename Image, typename Catalog>
inline void discover_owned_entry_prefixes(const Image &image, const Catalog &catalog,
        address_runtime::State &state, const address_runtime::Progress &report = {},
        const std::set<uint32_t> &scope_only = {}) {
    using namespace address_runtime;
    Bindings bindings;
    for (const auto &range : state.ranges)
        bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    std::set<uint32_t> address_only;
    for (const auto &[reference, length] : catalog.required)
        if (length == 1 && !bindings.lookup(reference) && resolve(state.function_owners, reference))
            address_only.insert(reference);
    std::map<uint32_t, std::set<std::pair<uint32_t, uint32_t>>> callers;
    for (const auto &pattern : catalog.patterns) {
        if (!(pattern.flags & 1)) continue;
        for (const auto &fixup : pattern.fixups) {
            if (!address_only.count(fixup.target) || !(fixup.kind & 0x100) || (fixup.kind & 0xff) ||
                    fixup.width != 4 || !fixup.offset || fixup.next != fixup.offset + 4 ||
                    fixup.next > pattern.raw.size() || pattern.raw[fixup.offset - 1] != 0xe8) continue;
            const auto reference = pattern.reference + fixup.offset - 1;
            const auto native = bindings.lookup(reference);
            if (!native) continue;
            bool complete = true;
            for (uint32_t at = 1; at < 5; ++at)
                if (bindings.lookup(reference + at) != native + at) { complete = false; break; }
            const auto *bytes = complete ? image.read(native, 5) : nullptr;
            if (!bytes || bytes[0] != 0xe8) continue;
            int32_t relative = 0;
            std::memcpy(&relative, bytes + 1, 4);
            const auto target = int64_t(native) + 5 + relative;
            if (target != resolve(state.function_owners, fixup.target)) continue;
            callers[fixup.target].emplace(reference, native);
        }
    }
    size_t added = 0;
    for (const auto &pattern : catalog.patterns) {
        if (!(pattern.flags & 1) || !(pattern.flags & 2) || pattern.owner != pattern.reference) continue;
        const auto native = resolve(state.function_owners, pattern.owner);
        if (!native) continue;
        const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), native,
            [](const auto &entry, uint32_t address) { return entry.begin < address; });
        if (function == image.functions.end() || function->begin != native ||
                (function->owner && function->owner != native)) continue;
        // A bare callable address does not consume an entry instruction
        // signature. Two distinct, already mapped E8 instructions can prove
        // the real entry even when the compiler changed its first opcode.
        // Body ownership alone cannot do this: an inlined body may belong
        // to a larger function. Both actual calls must reach this entry.
        const auto witnesses = callers.find(pattern.reference);
        bool callable = false;
        if (address_only.count(pattern.reference) && witnesses != callers.end())
            for (auto left = witnesses->second.begin(); left != witnesses->second.end() && !callable; ++left)
                for (auto right = std::next(left); right != witnesses->second.end(); ++right)
                    if ((uint64_t(left->first) + 5 <= right->first || uint64_t(right->first) + 5 <= left->first) &&
                            (uint64_t(left->second) + 5 <= right->second || uint64_t(right->second) + 5 <= left->second)) {
                        callable = true; break;
                    }
        if (callable && !pattern.raw.empty() && bindings.compatible(pattern.reference, 1, native)) {
            const auto *actual = image.read(native, 1);
            if (actual) {
                added += bindings.add(pattern.reference, 1, native);
                if (*actual != pattern.raw.front()) {
                    const Byte byte{pattern.reference, pattern.raw.front(), *actual};
                    const auto [entry, inserted] = changes.emplace(byte.address, byte);
                    if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                        throw std::runtime_error("Conflicting native callable entry identity");
                }
            }
        }
        // Literal uses identify the enclosing body even when a compiler
        // inlines it. Only a separately mapped entry (for example, an actual
        // proved CALL target, including the exact-unwind E8 destination of
        // a complete typed-receiver caller interval) can promote such a
        // scope to an entry prefix. The unchanged instructions below remain
        // necessary even after that address identity has been established.
        if (scope_only.count(pattern.owner) && resolve(state.ranges, pattern.reference) != native) continue;
        const auto limit = (std::min)({pattern.raw.size(), size_t(function->end - native), size_t(128)});
        const auto *bytes = image.read(native, static_cast<uint32_t>(limit));
        if (!bytes) continue;
        const auto *unwind = image.read(function->unwind, 4);
        std::vector<Byte> substitutions;
        uint32_t length = 0;
        while (length < limit) {
            if (!substitutions.empty() && (!unwind || length >= unwind[1])) break;
            unsigned char bounded[32]{};
            const auto available = (std::min)(size_t(16), limit - length);
            std::memcpy(bounded, pattern.raw.data() + length, available);
            display_decode::hde64s op{};
            display_decode::hde64_disasm(bounded, &op);
            if (!substitutions.empty() && uint64_t(length) + op.len > unwind[1]) break;
            if (!op.len || op.len > available || (op.flags & F_ERROR) ||
                    op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                    op.opcode == 0xe8 || op.opcode == 0xe9 || op.opcode == 0xeb ||
                    (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                    (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                    (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
                    (op.opcode == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 4)) ||
                    ((op.flags & F_MODRM) && op.modrm_mod == 0 && op.modrm_rm == 5)) break;
            if (std::any_of(pattern.fixups.begin(), pattern.fixups.end(), [&](const auto &fixup) {
                    return fixup.offset < length + op.len && fixup.offset + fixup.width > length;
                })) break;
            if (std::memcmp(bytes + length, bounded, op.len)) {
                unsigned char target[32]{};
                std::memcpy(target, bytes + length, available);
                display_decode::hde64s actual{};
                display_decode::hde64_disasm(target, &actual);
                uint32_t source_reg = 0, target_reg = 0;
                if ((actual.flags & F_ERROR) || actual.len != op.len ||
                        !entry_detail::saved_register_push(op, source_reg) ||
                        !entry_detail::saved_register_push(actual, target_reg) ||
                        !entry_detail::unwind_push(image, *function, length + actual.len, target_reg)) break;
                for (uint32_t at = 0; at < op.len; ++at) if (bounded[at] != target[at])
                    substitutions.push_back({pattern.reference + length + at, bounded[at], target[at]});
            }
            length += op.len;
        }
        if (length < 5 || !bindings.compatible(pattern.reference, length, native)) continue;
        added += bindings.add(pattern.reference, length, native);
        for (const auto &byte : substitutions) {
            const auto [entry, inserted] = changes.emplace(byte.address, byte);
            if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                throw std::runtime_error("Conflicting native unwind-certified entry bytes");
        }
    }
    state.ranges = bindings.export_ranges();
    state.bytes.clear();
    for (const auto &[address, byte] : changes) state.bytes.push_back(byte);
    if (report) report("Native discovery: recovered " + std::to_string(added) +
        " entry bindings in independently identified functions");
}

} // namespace dfcn::pe_runtime
