#pragma once
#include "native_method_call_discovery.h"

namespace dfcn::pe_runtime::typed_leaf_detail {
using namespace address_runtime;
using namespace display_decode;
using namespace method_call_detail;
struct Value {
    enum Kind : unsigned { unknown, number, object } kind = unknown;
    int64_t low = 0, high = 0;
    bool operator==(const Value &) const = default;
};
using Values = std::array<Value, 16>;
inline Value join(const Value &a, const Value &b) {
    if (a.kind == Value::unknown || a.kind != b.kind) return {};
    return {a.kind, (std::min)(a.low, b.low), (std::max)(a.high, b.high)};
}
inline Value add(Value a, Value b) {
    if (!a.kind || !b.kind || (a.kind == Value::object && b.kind == Value::object) ||
            a.low < INT32_MIN || a.high > INT32_MAX || b.low < INT32_MIN || b.high > INT32_MAX) return {};
    const int64_t low = a.low + b.low, high = a.high + b.high;
    if (low < INT32_MIN || high > INT32_MAX) return {};
    return {a.kind == Value::object || b.kind == Value::object ? Value::object : Value::number, low, high};
}
struct Memory { Value value; bool receiver = false; };
inline Memory memory(const Instruction &row, const Values &values) {
    const auto &op = row.decoded;
    if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || op.p_67) return {};
    if (!(op.flags & F_SIB) && !op.modrm_mod && op.modrm_rm == 5) return {};
    const auto base = (op.flags & F_SIB) ? op.sib_base + (op.rex_b ? 8 : 0) : op.modrm_rm + (op.rex_b ? 8 : 0);
    auto value = ((op.flags & F_SIB) && !op.modrm_mod && op.sib_base == 5) ? Value{Value::number, 0, 0} : values[base];
    bool receiver = value.kind == Value::object;
    if ((op.flags & F_SIB) && !(op.sib_index == 4 && !op.rex_x)) {
        auto index = values[op.sib_index + (op.rex_x ? 8 : 0)];
        receiver |= index.kind == Value::object;
        if (index.kind == Value::object) {
            if (op.sib_scale) return {{}, receiver};
        } else {
            if (index.kind != Value::number || index.low < 0 || index.high > INT32_MAX / 8) return {{}, receiver};
            index.low *= 1u << op.sib_scale; index.high *= 1u << op.sib_scale;
        }
        value = add(value, index);
    }
    const auto delta = displacement(row);
    value = add(value, {Value::number, delta, delta});
    return {value, receiver};
}
inline std::optional<int32_t> field_delta(const State &state, uint32_t root, const Value &member, uint32_t width) {
    if (member.kind != Value::object || member.low < 0 || !width || width == UINT32_MAX) return {};
    std::optional<int32_t> result;
    for (const auto &field : state.fields) {
        if (field.object != root || field.sources < 2 || member.low < field.offset ||
                uint64_t(member.high) + width > uint64_t(field.offset) + field.width) continue;
        const int64_t delta = int64_t(field.native_offset) - field.offset;
        if (delta < INT32_MIN || delta > INT32_MAX || (result && *result != delta)) return {};
        result = static_cast<int32_t>(delta);
    }
    return result;
}

// The caller supplies the proved global receiver. Every direct or indexed
// access derived from it is bounded by one independently admitted named field;
// no numeric displacement is treated as an object identity on its own.
inline std::optional<Pattern> adapt(const Pattern &source, uint32_t root, const State &state) {
    if (source.flags != 17 || source.reference != source.owner || source.raw.size() < 8) return {};
    std::vector<Instruction> rows;
    if (!decode_pattern(source, rows) || rows.empty() || rows.back().decoded.opcode != 0xc3) return {};
    std::map<uint32_t, size_t> positions;
    for (size_t n = 0; n < rows.size(); ++n) positions.emplace(rows[n].address, n);
    std::map<uint32_t, Values> incoming;
    Values entry{}; entry[1] = {Value::object, 0, 0}; incoming.emplace(source.reference, entry);
    Pattern result = source;
    unsigned members = 0;
    for (size_t n = 0; n < rows.size(); ++n) {
        const auto &row = rows[n]; const auto &op = row.decoded;
        const auto found = incoming.find(row.address);
        if (found == incoming.end()) return {}; // Do not hide an independent code entry.
        const auto before = found->second; auto after = before;
        const auto next = row.address + op.len;
        if (op.p_67 || op.p_lock || op.p_seg || op.opcode == 0xe8 || op.opcode == 0xc2 ||
                (op.opcode == 0xff && op.modrm_reg >= 2) || op.opcode == 0xcc) return {};
        for (unsigned reg = 0; reg < 16; ++reg) if (writes_gpr(op, reg)) after[reg] = {};
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        const auto location = memory(row, before);
        // Do not discard receiver provenance through an unmodelled register
        // operation and then mistake later accesses for unrelated memory.
        const bool move = op.opcode == 0x89 || op.opcode == 0x8b;
        const bool sum = op.opcode == 0x01 || op.opcode == 0x03;
        const bool compare = op.opcode == 0x39 || op.opcode == 0x3b ||
            ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 7);
        const bool immediate = op.opcode >= 0xb8 && op.opcode <= 0xbf;
        const bool supported = move || sum || compare || immediate || op.opcode == 0x8d ||
            op.opcode == 0x63 || op.opcode == 0x88 || op.opcode == 0xc7 || op.opcode == 0xc1 ||
            op.opcode == 0xc3 || op.opcode == 0xe9 || op.opcode == 0xeb || conditional(op) ||
            ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 4) ||
            (op.opcode == 0xf6 && op.modrm_reg == 0) ||
            (op.opcode == 0x0f && (op.opcode2 == 0xaf || op.opcode2 == 0xb6));
        if (!supported) return {};
        if ((op.flags & F_MODRM) && op.modrm_mod == 3) {
            const bool reads_reg = !group_operand(op) && before[reg].kind == Value::object;
            const bool reads_rm = before[rm].kind == Value::object;
            if ((reads_reg || reads_rm) && !compare &&
                    !((move || sum) && op.rex_w && !op.p_66 && !op.p_rep)) return {};
        } else if ((op.flags & F_MODRM) && before[reg].kind == Value::object &&
                (op.opcode == 0x89 || op.opcode == 0x88 || op.opcode == 0x03 ||
                    (op.opcode == 0x0f && op.opcode2 == 0xaf))) {
            // Neither an escaping receiver store nor arithmetic with an
            // unbounded loaded integer is part of this leaf contract.
            return {};
        }
        if (location.receiver) {
            if (location.value.kind != Value::object) return {};
            if (op.opcode == 0x8d) {
                // Indexed receiver arithmetic is retained exactly. A displaced
                // member-address LEA needs its own named address contract.
                if (!op.rex_w || displacement(row)) return {};
                after[reg] = location.value;
            } else {
                const auto delta = field_delta(state, root, location.value, access_width(op));
                if (!delta) return {};
                ++members;
                if (*delta) {
                    const auto width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
                    const auto offset = row.address - source.reference + displacement_position(op);
                    const int64_t value = displacement(row) + *delta;
                    if (!width || uint64_t(offset) + width > result.raw.size() ||
                            (width == 1 && (value < INT8_MIN || value > INT8_MAX)) || value < INT32_MIN || value > INT32_MAX)
                        return {};
                    for (uint32_t b = 0; b < width; ++b) if (source.mask[offset + b]) return {};
                    const auto encoded = static_cast<int32_t>(value);
                    std::memcpy(result.raw.data() + offset, &encoded, width);
                }
            }
        }
        const bool plain = !op.p_66 && !op.p_rep;
        if (plain && (op.opcode == 0x89 || op.opcode == 0x8b) && op.modrm_mod == 3) {
            auto value = before[op.opcode == 0x89 ? reg : rm];
            if (!op.rex_w && (value.kind != Value::number || value.low < 0 || value.high > UINT32_MAX)) value = {};
            after[op.opcode == 0x89 ? rm : reg] = value;
        }
        if (plain && op.opcode >= 0xb8 && op.opcode <= 0xbf) {
            const int64_t value = op.rex_w ? int64_t(op.imm.imm64) : int64_t(op.imm.imm32);
            after[op.opcode - 0xb8 + (op.rex_b ? 8 : 0)] = {Value::number, value, value};
        }
        if (plain && op.opcode == 0x8d && !location.receiver && location.value.kind == Value::number)
            after[reg] = location.value;
        if (plain && (op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_mod == 3 && op.modrm_reg == 4) {
            const uint64_t mask = op.opcode == 0x83 ? uint64_t(int64_t(static_cast<int8_t>(op.imm.imm8))) : op.imm.imm32;
            if (mask <= INT32_MAX && before[rm].kind != Value::object) after[rm] = {Value::number, 0, static_cast<int64_t>(mask)};
        }
        if (plain && (op.opcode == 0x01 || op.opcode == 0x03) && op.modrm_mod == 3) {
            auto value = add(before[reg], before[rm]);
            if ((before[reg].kind == Value::object || before[rm].kind == Value::object) &&
                    value.kind != Value::object) return {};
            if (!op.rex_w && value.kind == Value::object) return {};
            after[op.opcode == 0x01 ? rm : reg] = value;
        }
        const auto destination = branch_destination(row);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        std::vector<uint32_t> edges;
        if (destination) {
            // Acyclic leaves give a complete finite receiver proof, including
            // both arms; loops are deferred rather than approximated here.
            if (destination <= row.address || !positions.count(destination)) return {};
            edges.push_back(destination);
        }
        if (!jump && op.opcode != 0xc3) edges.push_back(next);
        for (const auto edge : edges) {
            if (!positions.count(edge)) return {};
            if (rows[positions.at(edge)].decoded.opcode == 0xc3) {
                incoming.try_emplace(edge, Values{});
                continue;
            }
            const auto previous = incoming.find(edge);
            if (previous == incoming.end()) incoming.emplace(edge, after);
            else for (unsigned r = 0; r < 16; ++r) {
                if ((previous->second[r].kind == Value::object) != (after[r].kind == Value::object))
                    return {}; // An ambiguous receiver alias is not an unrelated pointer.
                previous->second[r] = join(previous->second[r], after[r]);
            }
        }
    }
    return members >= 2 ? std::optional<Pattern>(std::move(result)) : std::nullopt;
}

template<typename Image> bool boundary(const Image &image, uint32_t address, size_t extent) {
    if (!address || extent < 8 || uint64_t(address) + extent >= image.size) return false;
    const auto *before = image.read(address - 1, 1), *after = image.read(address + static_cast<uint32_t>(extent), 1);
    const auto *section = image.section(address, extent);
    if (!before || !after || *before != 0xcc || *after != 0xcc || !section || !(section->flags & Image::execute_flag)) return false;
    auto at = std::lower_bound(image.functions.begin(), image.functions.end(), address,
        [](const auto &function, uint32_t value) { return function.begin < value; });
    if (at != image.functions.end() && at->begin < uint64_t(address) + extent) return false;
    return at == image.functions.begin() || std::prev(at)->end <= address;
}

template<typename Image> bool matches(const Image &image, const Pattern &adapted, uint32_t address, const State &state) {
    if (!boundary(image, address, adapted.raw.size()) || !pattern_matches(image, adapted, address)) return false;
    std::vector<bool> accounted(adapted.raw.size());
    for (const auto &fixup : adapted.fixups) {
        if (uint64_t(fixup.offset) + fixup.width > adapted.raw.size()) return false;
        uint32_t expected = 0;
        if ((fixup.kind & 0x100) && fixup.target >= adapted.reference &&
                uint64_t(fixup.target) < uint64_t(adapted.reference) + adapted.raw.size())
            expected = address + fixup.target - adapted.reference;
        else if (fixup.target) {
            expected = resolve(state.ranges, fixup.target);
            if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
            if (!expected) return false;
        }
        if (operand_target(image, adapted, address, fixup) != expected) return false;
        std::fill_n(accounted.begin() + fixup.offset, fixup.width, true);
    }
    for (size_t n = 0; n < adapted.raw.size(); ++n) if (adapted.mask[n] && !accounted[n]) return false;
    return true;
}
} // namespace dfcn::pe_runtime::typed_leaf_detail
