#pragma once
#include "native_method_call_discovery.h"
#include <optional>

namespace dfcn::pe_runtime::callable_search_detail {
using namespace address_runtime;
using namespace display_decode;
struct Contract {
    uint32_t identity, owner, query_call, fold, find, item, unit, type, member, offset, capture;
    std::string predicate_name, query_name;
};
inline std::vector<Contract> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    if (std::memcmp(magic, "DFCNCS01", 8) || reader.number() != 1)
        throw std::runtime_error("Unsupported callable-search evidence");
    std::vector<Contract> result(reader.count(64)); std::set<uint32_t> ids;
    for (auto &entry : result) {
        entry = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(),
            reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), {}, {}};
        for (auto *name : {&entry.predicate_name, &entry.query_name}) {
            const auto bytes = reader.blob(); name->assign(bytes.begin(), bytes.end());
            if (name->empty() || name->size() > 4096 || name->find('\0') != std::string::npos)
                throw std::runtime_error("Invalid callable-search RTTI declaration");
        }
        if (!entry.identity || !entry.owner || !entry.query_call || !entry.fold || !entry.find ||
                !entry.item || !entry.unit || !entry.type || !entry.member || entry.capture != 8 ||
                entry.offset > 1024 * 1024 || !ids.insert(entry.identity).second)
            throw std::runtime_error("Invalid callable-search contract");
    }
    reader.finish(); return result;
}
inline uint32_t mapped(const State &state, uint32_t reference) {
    return state.edition == 1 && reference < state.size ? reference : resolve(state.ranges, reference);
}
struct Value {
    std::string base;
    int64_t offset = 0;
    bool operator==(const Value &) const = default;
    explicit operator bool() const { return !base.empty(); }
};
inline Value add(Value value, int64_t offset) {
    if (offset && value.base.starts_with("choice[")) return {};
    if (value) value.offset += offset;
    return value;
}
inline std::string key(const Value &value) {
    return value ? value.base + ":" + std::to_string(value.offset) : std::string{};
}
inline Value memory(const Value &address) { return address ? Value{"[" + key(address) + "]", 0} : Value{}; }
inline std::string string_key(const Value &value) {
    if (!value) return {};
    if (!value.offset && value.base.starts_with("choice[") && value.base.back() == ']')
        return value.base.substr(7, value.base.size() - 8);
    if (!value.offset && value.base.size() > 2 && value.base.front() == '[' && value.base.back() == ']')
        return value.base.substr(1, value.base.size() - 2);
    return key(value);
}
inline Value merge_value(const Value &left, const Value &right) {
    if (left == right) return left;
    const auto object = string_key(left);
    // This value can be used only as a byte-data argument; it cannot be
    // dereferenced or advanced to claim another native object/member.
    if (!object.empty() && object == string_key(right)) return {"choice[" + object + "]", 0};
    return {};
}
struct Flow {
    std::array<Value, 16> reg;
    std::map<std::string, Value> stored;
    std::set<std::string> formatted, folded;
};
inline bool join(Flow &destination, const Flow &source) {
    bool changed = false;
    for (unsigned at = 0; at < 16; ++at)
        if (destination.reg[at] && destination.reg[at] != source.reg[at]) {
            const auto value = merge_value(destination.reg[at], source.reg[at]);
            if (value != destination.reg[at]) { destination.reg[at] = value; changed = true; }
        }
    for (auto at = destination.stored.begin(); at != destination.stored.end();) {
        const auto other = source.stored.find(at->first);
        if (other == source.stored.end() || other->second != at->second) { at = destination.stored.erase(at); changed = true; }
        else ++at;
    }
    for (auto *items : {&destination.formatted, &destination.folded}) {
        const auto &other = items == &destination.formatted ? source.formatted : source.folded;
        for (auto at = items->begin(); at != items->end();)
            if (!other.count(*at)) { at = items->erase(at); changed = true; } else ++at;
    }
    return changed;
}
inline int64_t immediate(const hde64s &op) {
    if (op.flags & F_IMM64) return static_cast<int64_t>(op.imm.imm64);
    if (op.flags & F_IMM32) return static_cast<int32_t>(op.imm.imm32);
    if (op.flags & F_IMM16) return static_cast<int16_t>(op.imm.imm16);
    return static_cast<int8_t>(op.imm.imm8);
}
inline Value address(const Flow &flow, const Instruction &instruction) {
    const auto base = method_call_detail::memory_base(instruction.decoded);
    if (base >= 16) return {};
    return add(flow.reg[base], method_call_detail::displacement(instruction));
}
inline Value load(const Flow &flow, const Value &at, uint32_t width, uint32_t instruction,
        bool query, uint32_t capture) {
    if (!at || width != 8 || at.base.starts_with("choice[")) return {};
    if ((at.base == "capture" && at.offset == 0 && !query) ||
            (at.base == "closure" && at.offset == capture && query)) return {"widget", 0};
    const auto found = flow.stored.find(key(at));
    if (found != flow.stored.end()) return found->second;
    (void)instruction;
    return memory(at);
}
inline void invalidate_string(Flow &flow, const Value &object) {
    if (!object) return;
    for (int at = 0; at < 32; ++at) flow.stored.erase(key(add(object, at)));
}
struct Targets { uint32_t fold, find, item, unit; };
inline uint32_t direct_target(const Instruction &instruction) {
    if (instruction.decoded.opcode != 0xe8 || instruction.decoded.len != 5) return 0;
    return instruction.address + 5 + static_cast<int32_t>(instruction.decoded.imm.imm32);
}
inline bool formatter(const Flow &flow, uint32_t target, const Targets &targets) {
    return (target == targets.item || target == targets.unit) &&
        flow.reg[1] == memory({"argument", 0}) && flow.reg[2].base == "stack" &&
        flow.reg[8] == Value{"constant", 0} &&
        (target != targets.item || flow.reg[9] == Value{"constant", -1});
}
inline bool comparison(const Flow &flow, uint32_t offset, std::string &text) {
    const Value query{"widget", offset};
    text = string_key(flow.reg[1]);
    const auto needle = string_key(flow.reg[9]);
    if (text.empty() || needle != key(query) || flow.reg[8] != Value{"constant", 0} ||
            !flow.reg[2] || flow.reg[2].offset || flow.reg[2].base.front() != '[') return false;
    // A data pointer (inline or heap) and length must name the same native
    // string. Merely being two calls to std::string::find is insufficient.
    const auto colon = text.rfind(':');
    if (colon == std::string::npos) return false;
    int64_t displacement = 0;
    try { displacement = std::stoll(text.substr(colon + 1)); } catch (...) { return false; }
    const Value object{text.substr(0, colon), displacement};
    const auto fifth = flow.stored.find(key(add(flow.reg[4], 32)));
    return flow.reg[2] == memory(add(object, 16)) && fifth != flow.stored.end() &&
        fifth->second == memory(add(query, 16));
}
inline Flow transfer(Flow flow, const Instruction &instruction, const Targets &targets,
        bool query, uint32_t capture) {
    const auto &op = instruction.decoded;
    const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
    const auto at = address(flow, instruction);
    if (const auto target = direct_target(instruction)) {
        const auto argument = flow.reg[1];
        if (formatter(flow, target, targets)) {
            invalidate_string(flow, flow.reg[2]); flow.formatted.insert(key(flow.reg[2]));
        } else if (target == targets.fold && flow.formatted.count(key(argument))) {
            invalidate_string(flow, argument); flow.folded.insert(key(argument));
        } else if (target != targets.find) {
            // Unknown calls cannot preserve a local string they receive.
            for (const auto index : {1u, 2u, 8u, 9u}) if (flow.reg[index].base == "stack") {
                flow.formatted.erase(key(flow.reg[index])); flow.folded.erase(key(flow.reg[index]));
                invalidate_string(flow, flow.reg[index]);
            }
        }
        for (const auto index : {0u, 1u, 2u, 8u, 9u, 10u, 11u}) flow.reg[index] = {};
        flow.reg[0] = {"return@" + std::to_string(instruction.address), 0}; return flow;
    }
    if (op.opcode >= 0x50 && op.opcode <= 0x57) { flow.reg[4] = add(flow.reg[4], -8); return flow; }
    if (op.opcode >= 0x58 && op.opcode <= 0x5f) {
        flow.reg[(op.opcode & 7) + (op.rex_b ? 8 : 0)] = {}; flow.reg[4] = add(flow.reg[4], 8); return flow;
    }
    if (op.opcode == 0x8d && op.rex_w) {
        flow.reg[reg] = at ? at : Value{"opaque-address@" + std::to_string(instruction.address), 0}; return flow;
    }
    if (op.opcode == 0x8b) {
        flow.reg[reg] = op.rex_w ? (op.modrm_mod == 3 ? flow.reg[rm] : load(flow, at, 8, instruction.address, query, capture)) : Value{};
        // A loop-carried native node pointer may have several origins. Its
        // contents remain opaque, but subsequent data/length reads can still
        // prove that the same string is supplied to the known comparator.
        if (op.rex_w && op.modrm_mod != 3 && !flow.reg[reg])
            flow.reg[reg] = {"opaque-load@" + std::to_string(instruction.address), 0};
        return flow;
    }
    if (op.opcode == 0x89 || op.opcode == 0x88) {
        const Value value = op.rex_w ? flow.reg[reg] : Value{};
        if (op.modrm_mod == 3) flow.reg[rm] = value;
        else if (at) { if (value) flow.stored[key(at)] = value; else flow.stored.erase(key(at)); }
        return flow;
    }
    if (op.opcode >= 0xb8 && op.opcode <= 0xbf) {
        flow.reg[(op.opcode & 7) + (op.rex_b ? 8 : 0)] = {"constant", immediate(op)}; return flow;
    }
    if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && reg == rm) {
        flow.reg[reg] = {"constant", 0}; return flow;
    }
    if ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_mod == 3 &&
            (op.modrm_reg == 0 || op.modrm_reg == 5)) {
        flow.reg[rm] = op.rex_w ? add(flow.reg[rm], (op.modrm_reg == 5 ? -1 : 1) * immediate(op)) : Value{};
        return flow;
    }
    if (op.opcode == 0x0f && op.opcode2 >= 0x40 && op.opcode2 <= 0x4f) {
        const auto other = op.modrm_mod == 3 ? flow.reg[rm] : load(flow, at, access_width(op), instruction.address, query, capture);
        // MSVC small-string selection changes pointer storage, not the
        // semantic string. Other conditional values need exact equality.
        flow.reg[reg] = merge_value(flow.reg[reg], other);
        return flow;
    }
    if (method_call_detail::boundary(op) || op.opcode == 0x90 || op.opcode == 0x39 || op.opcode == 0x3b ||
            op.opcode == 0x38 || op.opcode == 0x3a || op.opcode == 0x84 || op.opcode == 0x85 ||
            ((op.opcode >= 0x80 && op.opcode <= 0x83) && op.modrm_reg == 7)) return flow;
    if (op.opcode == 0xc6 || op.opcode == 0xc7) {
        if (op.modrm_mod == 3) flow.reg[rm] = {"constant", immediate(op)};
        else if (at) flow.stored.erase(key(at));
        return flow;
    }
    if (op.flags & F_MODRM) {
        if (op.opcode == 0x0f) {
            if (op.opcode2 == 0xaf || op.opcode2 == 0xb6 || op.opcode2 == 0xb7 || op.opcode2 == 0xbe || op.opcode2 == 0xbf)
                flow.reg[reg] = {};
            else if (op.opcode2 >= 0x90 && op.opcode2 <= 0x9f && op.modrm_mod == 3) flow.reg[rm] = {};
        } else if (op.opcode == 0x8a || op.opcode == 0x63 || (op.opcode <= 0x3b && (op.opcode & 2))) flow.reg[reg] = {};
        else if (op.modrm_mod == 3) flow.reg[rm] = {};
        else if (at) flow.stored.erase(key(at));
    }
    return flow;
}
struct Analysis { uint32_t fold = 0, name = 0, job = 0; bool valid = false; std::string failure; };
template<typename Image>
inline Analysis analyze(const Image &image, uint32_t owner, uint32_t offset,
        const Targets &targets, bool query, uint32_t capture) {
    const auto reject = [](uint32_t address, const std::string &reason) {
        std::ostringstream message; message << reason << " at 0x" << std::hex << address;
        return Analysis{0, 0, 0, false, message.str()};
    };
    std::map<uint32_t, Instruction> code;
    for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
        if (end <= begin || end - begin > 65536) return reject(begin, "oversized callable scope");
        std::vector<Instruction> decoded;
        if (!display_decode::decode(image, begin, end, decoded)) return reject(begin, "incomplete callable decode");
        for (auto &instruction : decoded) code.emplace(instruction.address, std::move(instruction));
    }
    if (!code.count(owner) || code.size() > 4096) return reject(owner, "callable has no complete bounded scope");
    Flow entry; entry.reg[1] = {query ? "closure" : "capture", 0};
    entry.reg[2] = {"argument", 0}; entry.reg[4] = {"stack", 0};
    std::map<uint32_t, Flow> incoming{{owner, entry}}; std::vector<uint32_t> pending{owner};
    size_t updates = 0;
    while (!pending.empty()) {
        if (++updates > code.size() * 64) return reject(owner, "callable flow did not converge");
        const auto current = pending.back(); pending.pop_back();
        const auto found = code.find(current); if (found == code.end()) return reject(current, "callable CFG leaves scope");
        const auto &instruction = found->second; const auto &op = instruction.decoded;
        const auto after = transfer(incoming.at(current), instruction, targets, query, capture);
        if (op.opcode == 0xc3 || op.opcode == 0xc2 || op.opcode == 0xcc) continue;
        if (op.opcode == 0xff && op.modrm_reg >= 2) {
            // MSVC's checked string deallocation has an imported, explicitly
            // nonreturning invalid-parameter arm. This closes that arm; it
            // does not grant arbitrary indirect calls a fall-through edge.
            const auto invalid = image.import_slot("api-ms-win-crt-runtime-l1-1-0.dll",
                "_invalid_parameter_noinfo_noreturn");
            if (op.modrm_reg == 2 && op.modrm_mod == 0 && op.modrm_rm == 5 && invalid &&
                    int64_t(current) + op.len + static_cast<int32_t>(op.disp.disp32) == invalid) continue;
            return reject(current, "unresolved callable transfer");
        }
        std::vector<uint32_t> next;
        if (const auto destination = method_call_detail::branch_destination(instruction)) next.push_back(destination);
        if (op.opcode != 0xe9 && op.opcode != 0xeb) next.push_back(current + op.len);
        for (const auto address : next) {
            if (!code.count(address)) return reject(address, "callable CFG leaves decoded scope");
            const auto [at, inserted] = incoming.emplace(address, after);
            if (inserted || join(at->second, after)) pending.push_back(address);
        }
    }
    std::set<uint32_t> folds, names, jobs, items, units;
    for (const auto &[address, flow] : incoming) {
        const auto target = direct_target(code.at(address));
        if (target == targets.fold) {
            if (query ? flow.reg[1] != Value{"widget", offset} : !flow.formatted.count(key(flow.reg[1])))
                return reject(address, "fold has no typed query/formatted string: " + key(flow.reg[1]));
            folds.insert(address);
        } else if (!query && (target == targets.item || target == targets.unit)) {
            if (!formatter(flow, target, targets)) return reject(address, "formatter does not consume original candidate and local output");
            (target == targets.item ? items : units).insert(address);
        } else if (!query && target == targets.find) {
            std::string text;
            if (!comparison(flow, offset, text)) return reject(address, "find data/length/query contract differs: " +
                key(flow.reg[1]) + "," + key(flow.reg[2]) + "," + key(flow.reg[9]));
            (flow.folded.count(text) ? names : jobs).insert(address);
        }
    }
    if (folds.size() != 1 || (!query && (names.size() != 1 || jobs.size() != 1 || items.size() != 1 || units.size() != 1)))
        return reject(owner, "callable role counts fold/name/job/item/unit=" + std::to_string(folds.size()) + "/" +
            std::to_string(names.size()) + "/" + std::to_string(jobs.size()) + "/" +
            std::to_string(items.size()) + "/" + std::to_string(units.size()));
    return {*folds.begin(), query ? 0 : *names.begin(), query ? 0 : *jobs.begin(), true};
}
template<typename Image>
inline std::set<uint32_t> table_functions(const Image &image, uint32_t table) {
    std::set<uint32_t> result;
    const auto *bytes = image.read(table, 6 * 8); if (!bytes) return {};
    for (unsigned index = 0; index < 6; ++index) {
        uint64_t pointer; std::memcpy(&pointer, bytes + index * 8, 8);
        if (pointer < image.preferred_base || pointer - image.preferred_base >= image.size) return {};
        const auto address = static_cast<uint32_t>(pointer - image.preferred_base);
        const auto *section = image.section(address, 1);
        if (!section || !(section->flags & Image::execute_flag)) return {};
        result.insert(address);
    }
    return result;
}
template<typename Image>
inline std::pair<uint32_t, uint32_t> invoker(const Image &image, uint32_t entry, uint32_t capture) {
    const auto function = frame_detail::function_at(image, entry);
    if (function == image.functions.end() || function->begin != entry || function->end != uint64_t(entry) + 31) return {};
    const auto *bytes = image.read(entry, 31); if (!bytes) return {};
    const unsigned char fixed[]{0x48,0x83,0xec,0,0x0f,0x10,0x02,0x48,0x83,0xc1,0,
        0x48,0x8d,0x54,0x24,0,0x0f,0x29,0x44,0x24,0,0xe8,0,0,0,0,0x48,0x83,0xc4,0,0xc3};
    for (unsigned at = 0; at < sizeof(fixed); ++at)
        if (at != 3 && at != 10 && at != 15 && at != 20 && !(at >= 22 && at <= 25) && at != 29 && bytes[at] != fixed[at]) return {};
    if (bytes[10] != capture || bytes[3] != bytes[29] || bytes[15] != bytes[20] ||
            bytes[15] < 32 || uint32_t(bytes[15]) + 16 > bytes[3]) return {};
    int32_t relative; std::memcpy(&relative, bytes + 22, 4);
    const auto target = entry + 26 + relative;
    const auto predicate = frame_detail::function_at(image, target);
    if (predicate == image.functions.end() || predicate->begin != target ||
            (predicate->owner && predicate->owner != target)) return {};
    return {entry + 21, target};
}
} // namespace dfcn::pe_runtime::callable_search_detail

namespace dfcn::pe_runtime {
template<typename Image, typename Catalog>
inline void discover_callable_searches(const Image &image, const Catalog &catalog, address_runtime::State &state,
        address_runtime::Progress report = {}) {
    using namespace callable_search_detail;
    state.callable_searches.clear(); state.missing_callable_searches.clear();
    for (const auto &entry : read(catalog.callable_search)) {
        const Targets targets{mapped(state, entry.fold), mapped(state, entry.find), mapped(state, entry.item), mapped(state, entry.unit)};
        uint32_t offset = UINT32_MAX;
        if (state.edition == 1 || state.edition == 2) offset = entry.offset;
        else for (const auto &field : state.semantic_fields)
            if (field.type == entry.type && field.member == entry.member && field.size == 32) offset = field.offset;
        std::vector<CallableSearchBinding> candidates;
        std::string failure;
        const std::string variant = "@_NV?$variant@PEAVunitst@@PEAVitemst@@@std@@@std@@";
        const std::string pair = "@_NU?$pair@PEAX_N@std@@@std@@";
        if (targets.fold && targets.find && targets.item && targets.unit && offset != UINT32_MAX &&
                entry.predicate_name.ends_with(variant) && image.rtti_catalog_complete()) {
            std::set<uint32_t> query_calls;
            for (const auto table : image.find_vtables(entry.query_name))
                for (const auto function : table_functions(image, table)) {
                    const auto result = analyze(image, function, offset, targets, true, entry.capture);
                    if (result.valid) query_calls.insert(result.fold);
                    else if (result.failure.find("fold has") != std::string::npos) failure = result.failure;
                }
            if (query_calls.size() == 1) for (uint32_t shape = 1; shape <= 2; ++shape) {
                const auto name = shape == 1 ? entry.predicate_name :
                    entry.predicate_name.substr(0, entry.predicate_name.size() - variant.size()) + pair;
                for (const auto table : image.find_vtables(name)) for (const auto function : table_functions(image, table)) {
                    const auto [call, predicate] = invoker(image, function, entry.capture);
                    if (!call) continue;
                    const auto result = analyze(image, predicate, offset, targets, false, entry.capture);
                    if (!result.valid) { failure = result.failure; continue; }
                    candidates.push_back({entry.identity, predicate, call, result.fold, result.name, result.job,
                        *query_calls.begin(), targets.fold, targets.find, shape, entry.capture});
                }
            }
        }
        if (candidates.size() == 1) {
            state.callable_searches.push_back(candidates.front());
            if (report) { std::ostringstream message; message << "Native callable search proved: 0x" << std::hex
                << entry.owner << " -> 0x" << candidates.front().predicate << " argument-shape=" << std::dec
                << candidates.front().argument_shape; report(message.str()); }
        } else {
            state.missing_callable_searches.push_back(entry.identity);
            if (report) { std::ostringstream message; message << "Native callable search unresolved: 0x" << std::hex
                << entry.owner << " helper=" << targets.fold << "/" << targets.find << "/" << targets.item << "/"
                << targets.unit << " query-offset=" << offset << " complete candidates=" << std::dec << candidates.size()
                << (failure.empty() ? "" : "; " + failure); report(message.str()); }
        }
    }
    std::sort(state.callable_searches.begin(), state.callable_searches.end(), [](const auto &a, const auto &b) { return a.contract < b.contract; });
    std::sort(state.missing_callable_searches.begin(), state.missing_callable_searches.end());
}
inline bool complete_callable_searches(address_runtime::State &state, const std::vector<unsigned char> &blob) {
    using namespace callable_search_detail;
    state.missing_callable_searches.clear();
    std::set<uint32_t> admitted;
    for (const auto &entry : read(blob)) {
        const auto at = std::lower_bound(state.callable_searches.begin(), state.callable_searches.end(), entry.identity,
            [](const auto &binding, uint32_t identity) { return binding.contract < identity; });
        bool valid = at != state.callable_searches.end() && at->contract == entry.identity &&
            at->capture_offset == entry.capture && (at->argument_shape == 1 || at->argument_shape == 2) &&
            at->fold_target == mapped(state, entry.fold) && at->find_target == mapped(state, entry.find);
        if (valid) {
            std::set<uint32_t> calls;
            for (auto address : {at->invoker_call, at->fold_call, at->name_find, at->job_find, at->query_fold})
                if (!address || uint64_t(address) + 5 > state.size || !calls.insert(address).second) valid = false;
            if (!at->predicate || at->predicate >= state.size || !at->fold_target || !at->find_target) valid = false;
        }
        if (valid) admitted.insert(entry.identity); else state.missing_callable_searches.push_back(entry.identity);
    }
    for (const auto &binding : state.callable_searches)
        if (!admitted.count(binding.contract)) return false;
    std::sort(state.missing_callable_searches.begin(), state.missing_callable_searches.end());
    return state.missing_callable_searches.empty();
}
} // namespace dfcn::pe_runtime
