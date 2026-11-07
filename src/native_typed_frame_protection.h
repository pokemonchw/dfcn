#pragma once
#include "native_bounded_argument_discovery.h"
#include "native_argument_alias_evidence.h"
#include "native_method_call_discovery.h"

// Prove the lifetime and extent of address-taken local strings before keeping
// an unrelated receiver spill across their calls. All coordinates are relative
// to the independently proved entry RSP; an equal displacement is no contract.
namespace dfcn::pe_runtime::typed_frame_detail {
using namespace display_decode;
struct Value {
    enum Kind : unsigned { unknown, number, frame, allocation, string_size, string_capacity, string_buffer, static_cstring } kind = unknown;
    int64_t low = 0, high = 0;
    uint32_t identity = 0, extent = 0;
    bool operator==(const Value &) const = default;
};
inline Value merge_value(Value a, const Value &b) {
    if (a == b) return a;
    if (a.kind == Value::number && b.kind == Value::number) {
        const int64_t low = (std::min)(a.low, b.low), high = (std::max)(a.high, b.high);
        // Ordinary interval hulls grow one unit per loop iteration. Widen to
        // the smallest aligned binary interval containing both operands.
        // Each strict expansion removes at least one fixed prefix bit, so
        // this domain has finite height while e.g. sizes 5 and 9 still prove
        // the useful (overapproximating) bound [0, 15]. Outside the supported
        // unsigned scalar domain, discard the value rather than inventing a
        // tighter bound or retaining a pointer-like integer.
        if (low < 0 || high > UINT32_MAX) return {};
        uint64_t different = static_cast<uint64_t>(low) ^ static_cast<uint64_t>(high), mask = 0;
        while (different) { mask = (mask << 1) | 1; different >>= 1; }
        return {Value::number, static_cast<int64_t>(static_cast<uint64_t>(low) & ~mask),
            static_cast<int64_t>(static_cast<uint64_t>(high) | mask)};
    }
    return {};
}
struct Cell { uint32_t width = 0; Value value; bool operator==(const Cell &) const = default; };
struct Values {
    std::array<Value, 16> registers{};
    std::map<int32_t, Cell> slots;
    std::set<int32_t> strings;
    bool operator==(const Values &) const = default;
};
inline bool valid_string_storage(const Values &values, int64_t object) {
    if (object < INT32_MIN || object + 32 > INT32_MAX) return false;
    if (values.strings.count(static_cast<int32_t>(object))) return true;
    const auto size = values.slots.find(static_cast<int32_t>(object + 16));
    const auto capacity = values.slots.find(static_cast<int32_t>(object + 24));
    if (size == values.slots.end() || capacity == values.slots.end() || size->second.width != 8 ||
            capacity->second.width != 8 || size->second.value.kind != Value::number ||
            capacity->second.value.kind != Value::number || size->second.value.low < 0 ||
            size->second.value.high > capacity->second.value.low) return false;
    if (capacity->second.value.low == 15 && capacity->second.value.high == 15) return true;
    const auto data = values.slots.find(static_cast<int32_t>(object));
    return capacity->second.value.low > 15 && data != values.slots.end() && data->second.width == 8 &&
        data->second.value.kind == Value::allocation && !data->second.value.low && !data->second.value.high &&
        uint64_t(capacity->second.value.high) + 1 <= data->second.value.extent;
}
inline Values merge(const Values &a, const Values &b) {
    auto result = a;
    const auto same_metadata_constant = [](const Value &symbolic, const Value &constant, const Values &values) {
        if ((symbolic.kind != Value::string_size && symbolic.kind != Value::string_capacity) ||
                constant.kind != Value::number || constant.low != constant.high ||
                !valid_string_storage(values, symbolic.low)) return false;
        const auto at = values.slots.find(static_cast<int32_t>(symbolic.low + (symbolic.kind == Value::string_size ? 16 : 24)));
        return at != values.slots.end() && at->second.width == 8 && at->second.value == constant;
    };
    for (unsigned n = 0; n < 16; ++n) {
        if (same_metadata_constant(a.registers[n], b.registers[n], b)) result.registers[n] = a.registers[n];
        else if (same_metadata_constant(b.registers[n], a.registers[n], a)) result.registers[n] = b.registers[n];
        else result.registers[n] = merge_value(a.registers[n], b.registers[n]);
    }
    for (auto at = result.slots.begin(); at != result.slots.end();) {
        const auto other = b.slots.find(at->first);
        if (other == b.slots.end() || other->second.width != at->second.width) at = result.slots.erase(at);
        else {
            at->second.value = merge_value(at->second.value, other->second.value);
            if (at->second.value.kind == Value::unknown) at = result.slots.erase(at); else ++at;
        }
    }
    // One predecessor may construct an empty inline string directly while
    // another uses the complete copy-constructor family. Preserve only the
    // shared representation guarantee, not invented size/capacity values.
    std::set<int32_t> candidates = a.strings;
    candidates.insert(b.strings.begin(), b.strings.end());
    result.strings.clear();
    for (const auto object : candidates)
        if (valid_string_storage(a, object) && valid_string_storage(b, object)) result.strings.insert(object);
    return result;
}
inline void invalidate_string_values(Values &values, int64_t begin, uint32_t width) {
    // Metadata and the selected buffer name the current contents of one
    // object. A later reconstruction at the same address must not revive
    // values loaded from its previous lifetime.
    const auto invalid = [&](const Value &value) {
        return (value.kind == Value::string_size || value.kind == Value::string_capacity ||
                value.kind == Value::string_buffer) && (width == UINT32_MAX ||
                (value.low < begin + width && value.low + 32 > begin));
    };
    for (auto &value : values.registers) if (invalid(value)) value = {};
    for (auto at = values.slots.begin(); at != values.slots.end();)
        if (invalid(at->second.value)) at = values.slots.erase(at); else ++at;
}
inline void erase(Values &values, int64_t begin, uint32_t width) {
    invalidate_string_values(values, begin, width);
    for (auto at = values.strings.begin(); at != values.strings.end();)
        if (width == UINT32_MAX || (*at < begin + width && int64_t(*at) + 32 > begin)) at = values.strings.erase(at);
        else ++at;
    for (auto at = values.slots.begin(); at != values.slots.end();) {
        if (width == UINT32_MAX || (at->first < begin + width && int64_t(at->first) + at->second.width > begin))
            at = values.slots.erase(at);
        else ++at;
    }
}
struct Protection {
    bool valid = false;
    uint32_t failure = 0;
    const char *reason = "";
    std::vector<std::pair<int32_t, uint32_t>> escaped;
    std::set<uint32_t> heap_writes;
    bool private_slot(int32_t slot) const {
        if (!valid) return false;
        for (const auto &[begin, width] : escaped)
            if (int64_t(slot) < int64_t(begin) + width && int64_t(slot) + 8 > begin) return false;
        return true;
    }
};

// A bounded callee may return one of its caller-local arguments. This narrow
// contract is useful only when every continuation overwrites the whole return
// register before reading it. Partial AL/AX writes and read/modify/write
// arithmetic are not kills; an unclassified use rejects the certificate.
template<typename Graph, typename Bounded> bool discarded_return(const Graph &graph, uint32_t first, Bounded &bounded) {
    std::set<uint32_t> visited;
    std::vector<uint32_t> pending{first};
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (!visited.insert(address).second) continue;
        const auto found = graph.code.find(address);
        if (found == graph.code.end()) return false;
        const auto &op = found->second.decoded;
        const auto next = address + op.len;
        if (op.opcode == 0xe8) {
            const auto callee = int64_t(next) + static_cast<int32_t>(op.imm.imm32);
            if (callee <= 0 || callee > UINT32_MAX || !bounded.ignores_incoming_rax(static_cast<uint32_t>(callee))) return false;
            pending.push_back(next); // It may preserve the alias; do not kill it.
            continue;
        }
        const auto reg = op.modrm_reg + (op.rex_r ? 8u : 0u), rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        if (conditional || jump) {
            const auto target = int64_t(next) + ((op.flags & F_IMM8) ? int64_t(static_cast<int8_t>(op.imm.imm8)) :
                int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (target < graph.owner || target >= graph.end) return false;
            pending.push_back(static_cast<uint32_t>(target));
            if (conditional) pending.push_back(next);
            continue;
        }
        const bool memory = (op.flags & F_MODRM) && op.modrm_mod != 3;
        if (memory && (method_call_detail::memory_base(op) == 0 || ((op.flags & F_SIB) &&
                !(op.sib_index == 4 && !op.rex_x) && op.sib_index + (op.rex_x ? 8u : 0u) == 0))) return false;
        const bool xmm = op.opcode == 0x0f && (op.opcode2 == 0x10 || op.opcode2 == 0x11 ||
            op.opcode2 == 0x28 || op.opcode2 == 0x29 || op.opcode2 == 0x57 || op.opcode2 == 0x6f || op.opcode2 == 0x7f);
        if (xmm && !op.p_67 && !op.p_lock && !op.p_seg && !writes_gpr(op, 0)) {
            pending.push_back(next); continue; // XMM0 is not the RAX alias.
        }
        if (op.p_66 || op.p_67 || op.p_lock || op.p_rep || op.p_seg) return false;
        if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && reg == 0 && rm == 0) continue;
        if (op.opcode == 0xb8 && !op.rex_b) continue; // EAX writes zero-extend.
        if ((op.opcode == 0x8b || op.opcode == 0x8d) && reg == 0 && (op.modrm_mod != 3 || rm != 0)) continue;
        if (op.opcode == 0x0f && (op.opcode2 == 0xb6 || op.opcode2 == 0xb7) && reg == 0 &&
                (op.modrm_mod != 3 || (rm != 0 && !(op.opcode2 == 0xb6 && !(op.flags & F_PREFIX_REX) && rm == 4)))) continue;
        if (op.opcode == 0x89 && op.modrm_mod == 3 && rm == 0 && reg != 0) continue;
        // Only explicit, non-implicit register operations are traversed.
        const bool ordinary = op.opcode == 0x90 || op.opcode == 0x8b || op.opcode == 0x89 || op.opcode == 0x8d ||
            op.opcode == 0x39 || op.opcode == 0x3b ||
            op.opcode == 0x85 || op.opcode == 0x81 || op.opcode == 0x83 ||
            op.opcode == 0xc7 || op.opcode == 0x2b ||
            (op.opcode == 0xff && op.modrm_reg <= 1);
        if (!ordinary || writes_gpr(op, 0)) return false;
        if (op.flags & F_MODRM) {
            if ((!group_operand(op) && reg == 0) || (op.modrm_mod == 3 && rm == 0)) return false;
        }
        pending.push_back(next);
    }
    return true;
}

// Recognize a complete local-string SSO selector and follow its selected
// pointer until the actual read-only byte comparison or a full overwrite.
// This is only the use-shape gate; transfer() separately proves the object,
// capacity selector and comparison length from the same local string.
template<typename Graph, typename Bounded>
bool local_string_buffer_use(const Graph &graph, uint32_t first, unsigned argument, Bounded &bounded) {
    if (argument != 1 && argument != 2) return false;
    const auto initial = graph.code.find(first);
    if (initial == graph.code.end()) return false;
    const auto compare = graph.code.find(first + initial->second.decoded.len);
    if (compare == graph.code.end()) return false;
    const auto &cmp = compare->second.decoded;
    if (!cmp.rex_w || cmp.p_66 || (cmp.opcode != 0x83 && cmp.opcode != 0x81) ||
            cmp.modrm_reg != 7 || ((cmp.opcode == 0x83 ? cmp.imm.imm8 : cmp.imm.imm32) != 15)) return false;
    const auto select = graph.code.find(compare->first + cmp.len);
    if (select == graph.code.end()) return false;
    const auto &cmov = select->second.decoded;
    if (cmov.opcode != 0x0f || cmov.opcode2 != 0x47 || !cmov.rex_w || cmov.modrm_mod == 3 ||
            cmov.modrm_reg + (cmov.rex_r ? 8u : 0u) != argument ||
            method_call_detail::memory_base(cmov) != method_call_detail::memory_base(initial->second.decoded) ||
            method_call_detail::displacement(select->second) != method_call_detail::displacement(initial->second)) return false;
    bool compared = false;
    std::set<uint32_t> visited;
    std::vector<uint32_t> pending{select->first + cmov.len};
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (!visited.insert(address).second) continue;
        const auto found = graph.code.find(address);
        if (found == graph.code.end()) return false;
        const auto &op = found->second.decoded;
        const auto next = address + op.len;
        if (op.opcode == 0xe8) {
            const auto callee = int64_t(next) + static_cast<int32_t>(op.imm.imm32);
            if (callee <= 0 || callee > UINT32_MAX || !bounded.byte_compare(static_cast<uint32_t>(callee))) return false;
            compared = true; continue;
        }
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        if (conditional || jump) {
            const auto target = int64_t(next) + ((op.flags & F_IMM8) ? int64_t(static_cast<int8_t>(op.imm.imm8)) :
                int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (target < graph.owner || target >= graph.end) return false;
            pending.push_back(static_cast<uint32_t>(target));
            if (conditional) pending.push_back(next);
            continue;
        }
        if (op.p_66 || op.p_67 || op.p_lock || op.p_rep || op.p_seg) return false;
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8u : 0u), rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
        const bool mem = (op.flags & F_MODRM) && op.modrm_mod != 3;
        if (mem && (method_call_detail::memory_base(op) == argument || ((op.flags & F_SIB) &&
                !(op.sib_index == 4 && !op.rex_x) && op.sib_index + (op.rex_x ? 8u : 0u) == argument))) return false;
        if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && reg == argument && rm == argument) continue;
        if (op.opcode >= 0xb8 && op.opcode <= 0xbf && op.opcode - 0xb8 + (op.rex_b ? 8u : 0u) == argument) continue;
        if ((op.opcode == 0x8b || op.opcode == 0x8d) && reg == argument && (op.modrm_mod != 3 || rm != argument)) continue;
        if (op.opcode == 0x89 && op.modrm_mod == 3 && rm == argument && reg != argument) continue;
        const bool ordinary = op.opcode == 0x90 || op.opcode == 0x8b || op.opcode == 0x89 || op.opcode == 0x8d ||
            op.opcode == 0x39 || op.opcode == 0x3b || op.opcode == 0x85 || op.opcode == 0x81 ||
            op.opcode == 0x83 || op.opcode == 0xc7;
        if (!ordinary || writes_gpr(op, argument)) return false;
        if ((op.flags & F_MODRM) && ((!group_operand(op) && reg == argument) || (op.modrm_mod == 3 && rm == argument))) return false;
        pending.push_back(next);
    }
    return compared;
}

template<typename Graph, typename Origin, typename Bounded>
Protection protect(const Graph &graph, Origin origin, Bounded &bounded) {
    Protection result;
    const auto reject = [&](uint32_t address, const char *reason) {
        Protection value; value.failure = address; value.reason = reason; return value;
    };
    std::map<uint32_t, std::set<uint32_t>> predecessors;
    for (const auto &[address, row] : graph.code) {
        const auto &op = row.decoded; const auto next = address + op.len;
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) || (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        if (conditional || jump) {
            const int64_t destination = int64_t(next) + ((op.flags & F_IMM8) ? int64_t(static_cast<int8_t>(op.imm.imm8)) :
                int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (destination >= graph.owner && destination < graph.end)
                predecessors[static_cast<uint32_t>(destination)].insert(address);
        }
        const bool indirect = op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5);
        if (const auto edges = graph.flow.indirect_edges.find(address); edges != graph.flow.indirect_edges.end())
            for (const auto destination : edges->second) predecessors[destination].insert(address);
        if (!jump && !indirect && op.opcode != 0xc2 && op.opcode != 0xc3 && op.opcode != 0xcc &&
                !(op.opcode == 0x0f && op.opcode2 == 0x0b) && !graph.flow.nonreturning_calls.count(address))
            predecessors[next].insert(address);
    }
    for (const auto &[address, row] : graph.code) {
        const auto &op = row.decoded;
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        const auto frame = [&](unsigned r) { return (r == 4 || r == 5) && bool(origin(address, op.len, r)); };
        if (op.opcode == 0x89 || op.opcode == 0x8b) {
            const auto from = op.opcode == 0x89 ? reg : op.modrm_mod == 3 ? rm : 16u;
            if (frame(from)) {
                const auto to = op.opcode == 0x89 ? rm : reg;
                const auto after = origin(address + op.len, 1, to);
                if (!op.rex_w || op.modrm_mod != 3 || to != 5 || !after || after != origin(address, op.len, from))
                    return reject(address, "frame address copy has no bounded lifetime");
            }
        }
        if (op.opcode != 0x8d) continue;
        const auto base = method_call_detail::memory_base(op);
        if ((op.flags & F_SIB) && !(op.sib_index == 4 && !op.rex_x) &&
                (frame(op.sib_base + (op.rex_b ? 8 : 0)) || frame(op.sib_index + (op.rex_x ? 8 : 0))))
            return reject(address, "indexed frame address has no finite extent");
        if (!frame(base)) continue;
        if (!op.rex_w) return reject(address, "local address was truncated by a narrow LEA");
        const int64_t object = int64_t(*origin(address, op.len, base)) + method_call_detail::displacement(row);
        if (reg == 5 && object >= INT32_MIN && object <= INT32_MAX &&
                origin(address + op.len, 1, 5) == std::optional<int32_t>(static_cast<int32_t>(object))) continue;
        if (!argument_alias_detail::parameter_register(reg))
            return reject(address, "local address is not a direct bounded argument");
        uint32_t previous = address, at = address + op.len;
        bool consumed = false;
        while (graph.code.count(at) && predecessors[at] == std::set<uint32_t>{previous}) {
            const auto &next = graph.code.at(at); const auto &value = next.decoded;
            if (value.opcode == 0xe8) {
                const int64_t callee = int64_t(at) + value.len + static_cast<int32_t>(value.imm.imm32);
                if (callee > 0 && callee <= UINT32_MAX) consumed = bounded.bounded_call(static_cast<uint32_t>(callee), reg).proved;
                break;
            }
            // Only ordinary straight-line argument setup may separate the
            // address definition from its certified consumer.
            const bool setup = value.opcode == 0x8d || value.opcode == 0x89 || value.opcode == 0x8b ||
                value.opcode == 0xc7 || value.opcode == 0x31 || value.opcode == 0x33 ||
                (value.opcode >= 0xb8 && value.opcode <= 0xbf) || value.opcode == 0x90;
            const unsigned r = value.modrm_reg + (value.rex_r ? 8 : 0), m = value.modrm_rm + (value.rex_b ? 8 : 0);
            if (!setup || writes_gpr(value, reg) || ((value.flags & F_MODRM) &&
                    ((!group_operand(value) && r == reg) || (value.modrm_mod == 3 ? m == reg :
                    method_call_detail::memory_base(value) == reg)))) break;
            previous = at; at += value.len;
        }
        if (!consumed && !local_string_buffer_use(graph, address, reg, bounded))
            return reject(address, "local argument has no unique immediate bounded consumer");
    }
    std::map<uint32_t, Values> incoming;
    incoming.emplace(graph.owner, Values{});
    std::vector<uint32_t> pending{graph.owner};
    for (const auto entry : graph.external_entries) {
        if (entry != graph.owner) return reject(entry, "local lifetime has an independent entry");
    }
    const auto register_value = [&](const Values &values, uint32_t address, uint32_t length, unsigned reg) {
        if (reg == 4 || reg == 5) {
            if (const auto value = origin(address, length, reg)) return Value{Value::frame, *value, *value, 0, 0};
            return Value{};
        }
        return reg < 16 ? values.registers[reg] : Value{};
    };
    const auto memory = [&](const Values &values, const Instruction &row) {
        if ((row.decoded.flags & F_SIB) && !(row.decoded.sib_index == 4 && !row.decoded.rex_x)) return Value{};
        const auto base = method_call_detail::memory_base(row.decoded);
        auto value = register_value(values, row.address, row.decoded.len, base);
        if (value.kind != Value::frame && value.kind != Value::allocation) return Value{};
        const auto delta = method_call_detail::displacement(row);
        value.low += delta; value.high += delta;
        return value;
    };
    const auto valid_string = [&](const Values &values, uint32_t address, uint32_t length, int64_t object) {
        const auto rsp = origin(address, length, 4);
        if (!rsp || object < int64_t(*rsp) + 32 || object + 32 > 0 || object < INT32_MIN || object + 32 > INT32_MAX)
            return false;
        return valid_string_storage(values, object);
    };
    // The same transfer is used during convergence and for final certificates;
    // no optimistic intermediate state is published.
    const auto transfer = [&](uint32_t address, const Values &before, bool certify, Protection &proof) {
        const auto &row = graph.code.at(address); const auto &op = row.decoded;
        auto after = before;
        const auto next = address + op.len;
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        const auto arg = [&](unsigned r) { return register_value(before, address, op.len, r); };
        const bool plain = !op.p_66 && !op.p_67 && !op.p_lock && !op.p_rep && !op.p_seg;
        for (unsigned r = 0; r < 16; ++r) if (writes_gpr(op, r)) after.registers[r] = {};
        const auto location = memory(before, row);
        const bool mem = (op.flags & F_MODRM) && op.modrm_mod != 3;
        const auto width = access_width(op);
        if (plain && op.opcode >= 0xb8 && op.opcode <= 0xbf) {
            const auto value = op.rex_w ? int64_t(op.imm.imm64) : int64_t(op.imm.imm32);
            after.registers[op.opcode - 0xb8 + (op.rex_b ? 8 : 0)] = {Value::number, value, value};
        }
        if (plain && (op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && reg == rm)
            after.registers[reg] = {Value::number, 0, 0};
        if (plain && (op.opcode == 0x89 || op.opcode == 0x8b) && op.modrm_mod == 3) {
            auto value = arg(op.opcode == 0x89 ? reg : rm);
            if (!op.rex_w && (value.kind != Value::number || value.low < 0 || value.high > UINT32_MAX)) value = {};
            after.registers[op.opcode == 0x89 ? rm : reg] = value;
        }
        if (plain && op.rex_w && op.opcode == 0x8d && mem) after.registers[reg] = location;
        if (plain && op.rex_w && op.opcode == 0x8d && op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB)) {
            const auto target = int64_t(next) + method_call_detail::displacement(row);
            if (target > 0 && target <= UINT32_MAX && bounded.static_cstring(static_cast<uint32_t>(target)))
                after.registers[reg] = {Value::static_cstring, target, target};
        }
        if (plain && op.opcode == 0x8b && mem && location.kind == Value::frame &&
                location.low >= INT32_MIN && location.high <= INT32_MAX) {
            const auto stored = before.slots.find(static_cast<int32_t>(location.low));
            if (stored != before.slots.end() && stored->second.width == width)
                after.registers[reg] = stored->second.value;
            if (op.rex_w && location.low == location.high) {
                const bool size = valid_string(before, address, op.len, location.low - 16);
                const bool capacity = valid_string(before, address, op.len, location.low - 24);
                if (size != capacity) {
                    const auto object = location.low - (size ? 16 : 24);
                    after.registers[reg] = {size ? Value::string_size : Value::string_capacity, object, object};
                } else if (size) after.registers[reg] = {}; // Overlapping meanings are not a certificate.
            }
        }
        if (plain && op.rex_w && op.opcode == 0x0f && op.opcode2 == 0x47 && mem &&
                location.kind == Value::frame && location.low == location.high &&
                arg(reg).kind == Value::frame && arg(reg).low == location.low && arg(reg).high == location.high &&
                valid_string(before, address, op.len, location.low) && predecessors[address].size() == 1) {
            const auto previous = graph.code.find(*predecessors[address].begin());
            if (previous != graph.code.end() && previous->first + previous->second.decoded.len == address) {
                const auto &cmp = previous->second.decoded;
                bool same_capacity = false;
                if (cmp.rex_w && !cmp.p_66 && (cmp.opcode == 0x81 || cmp.opcode == 0x83) && cmp.modrm_reg == 7 &&
                        (cmp.opcode == 0x83 ? cmp.imm.imm8 : cmp.imm.imm32) == 15) {
                    if (cmp.modrm_mod == 3) {
                        const auto capacity = arg(cmp.modrm_rm + (cmp.rex_b ? 8u : 0u));
                        same_capacity = capacity.kind == Value::string_capacity && capacity.low == location.low;
                    } else {
                        const auto capacity = memory(before, previous->second);
                        same_capacity = capacity.kind == Value::frame && capacity.low == location.low + 24 &&
                            capacity.high == capacity.low;
                    }
                }
                if (same_capacity) after.registers[reg] = {Value::string_buffer, location.low, location.low};
            }
        }
        if (plain && op.modrm_mod == 3 && (op.opcode == 0x81 || op.opcode == 0x83) &&
                (op.modrm_reg == 0 || op.modrm_reg == 5)) {
            auto value = arg(rm);
            int64_t delta = op.opcode == 0x83 ? int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32));
            if (op.modrm_reg == 5) delta = -delta;
            if ((value.kind == Value::number || value.kind == Value::frame || value.kind == Value::allocation) &&
                    value.low >= INT32_MIN && value.high <= INT32_MAX &&
                    value.low + delta >= INT32_MIN && value.high + delta <= INT32_MAX &&
                    (op.rex_w || (value.kind == Value::number && value.low + delta >= 0 && value.high + delta <= UINT32_MAX))) {
                value.low += delta; value.high += delta; after.registers[rm] = value;
            }
        }
        if (mem && op.opcode != 0x8d && !memory_read_only(op)) {
            if (location.kind == Value::frame && location.low >= INT32_MIN && location.high <= INT32_MAX) {
                erase(after, location.low, width);
                Value stored;
                if (plain && op.opcode == 0x89) stored = arg(reg);
                if (plain && op.opcode == 0xc7 && !op.modrm_reg) {
                    const int64_t value = op.rex_w ? int64_t(static_cast<int32_t>(op.imm.imm32)) : int64_t(op.imm.imm32);
                    stored = {Value::number, value, value};
                }
                // A saved local address would require tracking a second alias
                // lifetime, not merely allowing the original bounded call.
                if (certify && (stored.kind == Value::frame || stored.kind == Value::string_buffer)) {
                    proof.failure = address; proof.reason = "local address was stored or exported";
                }
                if (width == 8 && stored.kind != Value::unknown)
                    after.slots[static_cast<int32_t>(location.low)] = {width, stored};
            } else if (location.kind == Value::allocation && location.low >= 0 && width != UINT32_MAX &&
                    uint64_t(location.high) + width <= location.extent) {
                if (certify) proof.heap_writes.insert(address);
            } else {
                // Unknown stores cannot manufacture scalar/string facts.
                erase(after, 0, UINT32_MAX);
            }
            if (certify && plain && op.opcode == 0x89 &&
                    (arg(reg).kind == Value::frame || arg(reg).kind == Value::string_buffer) && location.kind != Value::frame) {
                proof.failure = address; proof.reason = "local address was exported through memory";
            }
        }
        const bool call = op.opcode == 0xe8 || (op.opcode == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 3));
        if (call) {
            const int64_t destination = op.opcode == 0xe8 ? int64_t(next) + static_cast<int32_t>(op.imm.imm32) : 0;
            const auto callee = destination > 0 && destination <= UINT32_MAX ? static_cast<uint32_t>(destination) : 0;
            bool has_local = false, read_only = true, discard_result = false;
            uint16_t required_arguments = 0, proved_arguments = 0, required_static_cstrings = 0;
            std::vector<std::pair<int64_t, uint32_t>> pointees;
            std::vector<int32_t> constructed;
            for (const unsigned r : {1u, 2u, 8u, 9u}) {
                const auto value = arg(r);
                if (value.kind == Value::string_buffer) {
                    has_local = true;
                    const auto length = arg(8);
                    bool within = length.kind == Value::string_size && length.low == value.low;
                    if (length.kind == Value::number && length.low >= 0) {
                        const auto size = before.slots.find(static_cast<int32_t>(value.low + 16));
                        within = size != before.slots.end() && size->second.width == 8 &&
                            size->second.value.kind == Value::number && length.high <= size->second.value.low;
                    }
                    const bool proved = (r == 1 || r == 2) && bounded.byte_compare(callee) && within &&
                        valid_string(before, address, op.len, value.low);
                    if (certify && !proved) {
                        proof.failure = address; proof.reason = "local string buffer comparison has no matching bounded length";
                    }
                    if (certify && proved) proof.escaped.emplace_back(static_cast<int32_t>(value.low), 32);
                    if (!proved) { read_only = false; erase(after, value.low, UINT32_MAX); }
                    continue;
                }
                if (value.kind != Value::frame) continue;
                has_local = true;
                const auto contract = bounded.bounded_call(callee, r);
                required_arguments |= contract.required_arguments;
                required_static_cstrings |= contract.required_static_cstrings;
                discard_result |= contract.discard_return;
                const auto rsp = origin(address, op.len, 4);
                const bool local_extent = rsp && value.low == value.high && value.low >= int64_t(*rsp) + 32 &&
                    value.low >= INT32_MIN && value.low + contract.extent <= 0;
                const bool proved = contract.proved && local_extent &&
                    ((contract.extent == 32 && contract.requires_valid_string_storage &&
                        valid_string(before, address, op.len, value.low)) ||
                     ((contract.extent == 16 || (contract.extent == 32 && contract.constructs_valid_string)) &&
                        contract.write_only && !contract.requires_valid_string_storage));
                if (proved) {
                    proved_arguments |= static_cast<uint16_t>(1u << r);
                    pointees.emplace_back(value.low, contract.extent);
                    if (contract.constructs_valid_string) constructed.push_back(static_cast<int32_t>(value.low));
                }
                if (certify && !proved) {
                    proof.failure = address; proof.reason = "address-taken local has no complete parameter extent/storage contract";
                }
                if (certify && proved) proof.escaped.emplace_back(static_cast<int32_t>(value.low), contract.extent);
                if (!contract.proved || !contract.read_only) {
                    read_only = false;
                    erase(after, value.low, contract.proved ? contract.extent : UINT32_MAX);
                }
            }
            if (certify && (proved_arguments & required_arguments) != required_arguments) {
                proof.failure = address; proof.reason = "bounded call has an unproved companion argument";
            }
            if (certify) for (unsigned r = 0; r < 16; ++r) if (required_static_cstrings & (1u << r)) {
                const auto value = arg(r);
                if (value.kind != Value::static_cstring || value.low != value.high || value.low <= 0 ||
                        value.low > UINT32_MAX || !bounded.static_cstring(static_cast<uint32_t>(value.low))) {
                    proof.failure = address; proof.reason = "bounded call has no complete read-only C string argument";
                }
            }
            if (certify) for (size_t a = 0; a < pointees.size(); ++a)
                for (size_t b = a + 1; b < pointees.size(); ++b)
                    if (pointees[a].first < pointees[b].first + pointees[b].second &&
                            pointees[b].first < pointees[a].first + pointees[a].second) {
                        proof.failure = address; proof.reason = "bounded input and output local intervals overlap";
                    }
            if (certify && discard_result && !discarded_return(graph, next, bounded)) {
                proof.failure = address; proof.reason = "bounded output return alias is consumed before a complete overwrite";
            }
            // An unknown call may free a retained allocation. A certified
            // read-only local-string call cannot consume or export it.
            if (!has_local || !read_only) {
                for (auto &value : after.registers) if (value.kind == Value::allocation) value = {};
                for (auto at = after.slots.begin(); at != after.slots.end();)
                    if (at->second.value.kind == Value::allocation) at = after.slots.erase(at); else ++at;
                after.strings.clear();
                invalidate_string_values(after, 0, UINT32_MAX);
            }
            if (const auto rsp = origin(address, op.len, 4)) erase(after, *rsp, 32);
            else erase(after, 0, UINT32_MAX);
            for (const auto object : constructed) after.strings.insert(object);
            const auto bytes = arg(1);
            if (callee && bytes.kind == Value::number && bytes.low > 0 && bytes.high <= UINT32_MAX &&
                    bounded.valid_string_allocator(callee))
                after.registers[0] = {Value::allocation, 0, 0, address, static_cast<uint32_t>(bytes.low)};
        }
        if (certify) {
            // Indexed frame addresses have no finite pointee extent in this
            // analysis. The actual RBP definition is admitted only by origins.
            if (op.opcode == 0x8d && mem) {
                const auto base = method_call_detail::memory_base(op);
                bool indexed_frame = false;
                if ((op.flags & F_SIB) && !(op.sib_index == 4 && !op.rex_x)) {
                    const auto b = op.sib_base + (op.rex_b ? 8 : 0), i = op.sib_index + (op.rex_x ? 8 : 0);
                    indexed_frame = arg(b).kind == Value::frame || arg(i).kind == Value::frame;
                }
                if (indexed_frame || ((base == 4 || base == 5) && location.kind != Value::frame)) {
                    proof.failure = address; proof.reason = "local address has no bounded frame origin";
                }
            }
            if (op.opcode >= 0x50 && op.opcode <= 0x57 &&
                    (arg(op.opcode - 0x50 + (op.rex_b ? 8 : 0)).kind == Value::frame ||
                     arg(op.opcode - 0x50 + (op.rex_b ? 8 : 0)).kind == Value::string_buffer)) {
                proof.failure = address; proof.reason = "local address escaped through PUSH";
            }
        }
        return after;
    };
    size_t rounds = 0;
    while (!pending.empty()) {
        if (++rounds > graph.code.size() * 128) return reject(graph.owner, "local lifetime did not converge");
        const auto address = pending.back(); pending.pop_back();
        if (!graph.code.count(address)) return reject(address, "local lifetime leaves complete CFG");
        Protection unused;
        const auto after = transfer(address, incoming.at(address), false, unused);
        const auto &op = graph.code.at(address).decoded; const auto next = address + op.len;
        const bool condition = (op.opcode >= 0x70 && op.opcode <= 0x7f) || (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        std::vector<uint32_t> edges;
        if (condition || jump) {
            const int64_t destination = int64_t(next) + ((op.flags & F_IMM8) ? int64_t(static_cast<int8_t>(op.imm.imm8)) :
                int64_t(static_cast<int32_t>(op.imm.imm32)));
            if (destination >= graph.owner && destination < graph.end) edges.push_back(static_cast<uint32_t>(destination));
        }
        const bool indirect = op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5);
        if (indirect) {
            const auto found = graph.flow.indirect_edges.find(address);
            if (found == graph.flow.indirect_edges.end()) return reject(address, "local lifetime has unproved indirect edges");
            edges.insert(edges.end(), found->second.begin(), found->second.end());
        }
        const bool terminal = jump || indirect || op.opcode == 0xc3 || op.opcode == 0xc2 || op.opcode == 0xcc ||
            (op.opcode == 0x0f && op.opcode2 == 0x0b) || graph.flow.nonreturning_calls.count(address);
        if (!terminal) edges.push_back(next);
        for (const auto edge : edges) {
            const auto found = incoming.find(edge);
            const auto value = found == incoming.end() ? after : merge(found->second, after);
            if (found == incoming.end() || !(found->second == value)) { incoming[edge] = value; pending.push_back(edge); }
        }
    }
    for (const auto &[address, values] : incoming) {
        transfer(address, values, true, result);
        if (result.failure) return result;
    }
    std::sort(result.escaped.begin(), result.escaped.end());
    result.escaped.erase(std::unique(result.escaped.begin(), result.escaped.end()), result.escaped.end());
    result.valid = true; return result;
}
} // namespace dfcn::pe_runtime::typed_frame_detail
