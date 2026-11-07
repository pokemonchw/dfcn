#pragma once
#include "native_frame_discovery.h"
#include "native_frame_registers.h"
#include "native_history_abi.h"
#include <array>
#include <iterator>
#include <functional>

// A virtual slot is meaningful only after the receiver, argument origins and
// named target contract have been proved in an independently located caller.
namespace dfcn::pe_runtime::method_call_detail {
using namespace address_runtime;
using namespace display_decode;
struct Contract {
    uint32_t site, width, owner, type, method, slot, shape, arguments, frame, ready, frame_end;
    Pattern pattern;
    Pattern context;
    uint32_t call;
};
struct SuffixFeature {
    uint32_t identity, owner, append, constructor, cleanup, tag;
    std::vector<std::pair<uint32_t, std::vector<unsigned char>>> texts;
    std::vector<Range> spans;
};
struct Evidence {
    std::vector<Contract> calls;
    std::vector<SuffixFeature> features;
    auto begin() const { return calls.begin(); }
    auto end() const { return calls.end(); }
    size_t size() const { return calls.size(); }
};
inline Evidence read(const std::vector<unsigned char> &blob) {
    Evidence result;
    if (blob.empty()) return result;
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    const auto version = reader.number();
    if (std::memcmp(magic, "DFCNMC01", 8) || version < 1 || version > 3)
        throw std::runtime_error("Unsupported named method-call evidence");
    result.calls.resize(reader.count()); std::set<uint32_t> sites;
    for (auto &entry : result.calls) {
        entry.site = reader.number(); entry.width = reader.number(); entry.owner = reader.number();
        entry.type = reader.number(); entry.method = reader.number(); entry.slot = reader.number();
        entry.shape = reader.number(); entry.arguments = reader.number();
        entry.frame = reader.number(); entry.ready = reader.number(); entry.frame_end = reader.number();
        auto &pattern = entry.pattern;
        pattern.reference = reader.number(); entry.call = reader.number(); pattern.owner = entry.owner;
        pattern.raw = reader.blob(); pattern.mask = reader.blob();
        if (!entry.site || entry.width < 5 || entry.width > 64 || !entry.owner || !entry.type || !entry.method ||
                entry.slot % 8 || entry.shape != native_history_abi::sentence_shape || entry.arguments != 4 ||
                (entry.frame && ((entry.frame & 0xff) != 5 || (entry.frame & ~0x1ffu) ||
                    entry.ready < entry.owner || entry.frame_end <= entry.ready)) ||
                pattern.raw.empty() || pattern.raw.size() > 4096 || pattern.raw.size() != pattern.mask.size() ||
                entry.site < pattern.reference || uint64_t(entry.site) + entry.width !=
                    uint64_t(pattern.reference) + pattern.raw.size() || entry.call >= pattern.raw.size() ||
                entry.site > pattern.reference + entry.call || !sites.insert(entry.site).second)
            throw std::runtime_error("Invalid named method-call source contract");
        pattern.fixups.resize(reader.count()); std::vector<bool> described(pattern.raw.size());
        for (auto &fixup : pattern.fixups) {
            fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if ((fixup.width != 1 && fixup.width != 4 && fixup.width != 8) ||
                    uint64_t(fixup.offset) + fixup.width > pattern.raw.size() || fixup.next > pattern.raw.size())
                throw std::runtime_error("Invalid named method-call relocation");
            for (uint32_t at = fixup.offset; at < fixup.offset + fixup.width; ++at) described[at] = true;
        }
        for (size_t at = 0; at < pattern.mask.size(); ++at)
            if (pattern.mask[at] > 1 || (pattern.mask[at] && !described[at]))
                throw std::runtime_error("Unexplained named method-call wildcard");
        if (version >= 2) {
            auto &context = entry.context;
            context.reference = reader.number(); context.raw = reader.blob(); context.owner = entry.owner;
            if (!context.reference || context.raw.empty() || context.raw.size() > 8192 ||
                    entry.site < context.reference || uint64_t(entry.site) + entry.width >
                    uint64_t(context.reference) + context.raw.size())
                throw std::runtime_error("Invalid named method-call surrounding context");
            context.fixups.resize(reader.count());
            for (auto &fixup : context.fixups) {
                fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
                if ((fixup.width != 1 && fixup.width != 4 && fixup.width != 8) ||
                        uint64_t(fixup.offset) + fixup.width > context.raw.size() || fixup.next > context.raw.size())
                    throw std::runtime_error("Invalid named method-call context relocation");
            }
        }
    }
    if (version >= 3) {
        result.features.resize(reader.count()); std::set<uint32_t> identities, owned;
        for (auto &feature : result.features) {
            feature.identity = reader.number(); feature.owner = reader.number();
            feature.append = reader.number(); feature.constructor = reader.number();
            feature.cleanup = reader.number(); feature.tag = reader.number();
            if (!feature.identity || !feature.owner || !feature.append || !feature.constructor ||
                    !feature.cleanup || !feature.tag || !identities.insert(feature.identity).second)
                throw std::runtime_error("Invalid return suffix feature identity");
            feature.texts.resize(reader.count());
            for (auto &[site, text] : feature.texts) {
                site = reader.number(); text = reader.blob();
                if (!site || text.size() < 8 || text.size() > 256 || text.back() ||
                        !std::all_of(text.begin(), text.end() - 1, [](unsigned char c) { return c >= 32 && c <= 126; }))
                    throw std::runtime_error("Invalid return suffix base text evidence");
            }
            feature.spans.resize(reader.count()); uint32_t previous_end = 0;
            for (auto &span : feature.spans) {
                span.begin = reader.number(); const auto width = reader.number(); span.native = 0;
                if (!span.begin || width < 5 || width > 64 || uint64_t(span.begin) + width > UINT32_MAX ||
                        span.begin < previous_end || !owned.insert(span.begin).second)
                    throw std::runtime_error("Invalid return suffix hook ownership");
                span.end = span.begin + width; previous_end = span.end;
            }
            if (feature.texts.empty() || feature.spans.empty())
                throw std::runtime_error("Empty return suffix feature contract");
            for (const auto &call : result.calls) for (const auto &span : feature.spans)
                if (call.site >= span.begin && call.site < span.end &&
                        (call.site != span.begin || call.site + call.width != span.end || call.owner != feature.owner))
                    throw std::runtime_error("A return suffix feature does not own its complete named call");
        }
    }
    reader.finish(); return result;
}
inline bool contract(const State &state, const Contract &source, native_history_abi::MethodBinding &target) {
    if (state.edition == 1 || state.edition == 2) {
        target = {source.type, source.method, source.slot, source.shape, source.arguments}; return true;
    }
    bool found = false;
    for (const auto &method : state.semantic_methods) if (method.type == source.type && method.method == source.method) {
        if (found) return false;
        target = method; found = true;
    }
    return found && !(target.slot % 8) &&
        ((target.parameter_shape == native_history_abi::sentence_shape && target.argument_count == 4) ||
         (target.parameter_shape == native_history_abi::sentence_context_shape && target.argument_count == 2));
}
inline bool decode_pattern(const Pattern &pattern, std::vector<Instruction> &code) {
    for (uint32_t at = 0; at < pattern.raw.size();) {
        unsigned char bounded[32]{};
        const auto available = (std::min)(size_t(16), pattern.raw.size() - at);
        std::memcpy(bounded, pattern.raw.data() + at, available);
        hde64s op{}; hde64_disasm(bounded, &op);
        if (!op.len || op.len > available || (op.flags & F_ERROR)) return false;
        code.push_back({pattern.reference + at, op,
            std::vector<unsigned char>(bounded, bounded + op.len)});
        at += op.len;
    }
    return !code.empty();
}
inline bool decode_source(const Contract &entry, std::vector<Instruction> &code) {
    return decode_pattern(entry.pattern, code) && code.back().address == entry.pattern.reference + entry.call;
}
inline uint32_t displacement_width(const hde64s &op) {
    return op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
}
inline uint32_t displacement_position(const hde64s &op) {
    return op.len - immediate_width(op) - displacement_width(op);
}
inline int32_t displacement(const Instruction &instruction) {
    return frame_detail::displacement(instruction.bytes.data() + displacement_position(instruction.decoded),
        displacement_width(instruction.decoded));
}
inline unsigned memory_base(const hde64s &op) {
    if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || op.p_67) return 16;
    if (op.flags & F_SIB) {
        if (op.sib_index != 4 || op.rex_x || (op.modrm_mod == 0 && op.sib_base == 5)) return 16;
        return op.sib_base + (op.rex_b ? 8 : 0);
    }
    if (op.modrm_mod == 0 && op.modrm_rm == 5) return 16;
    return op.modrm_rm + (op.rex_b ? 8 : 0);
}
inline bool indirect_call(const hde64s &op) { return op.opcode == 0xff && op.modrm_reg == 2; }
inline bool receiver_move_prefix(const unsigned char *bytes, size_t size) {
    if (size != 3) return false;
    unsigned char bounded[32]{}; std::memcpy(bounded, bytes, size);
    hde64s op{}; hde64_disasm(bounded, &op);
    if (op.len != size || op.flags & F_ERROR || !op.rex_w || op.modrm_mod != 3) return false;
    return (op.opcode == 0x8b && op.modrm_reg + (op.rex_r ? 8 : 0) == 1) ||
        (op.opcode == 0x89 && op.modrm_rm + (op.rex_b ? 8 : 0) == 1);
}
inline bool boundary(const hde64s &op) {
    return op.opcode == 0xe8 || op.opcode == 0xe9 || op.opcode == 0xeb ||
        (op.opcode >= 0x70 && op.opcode <= 0x7f) || (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
        (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
        op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
        (op.opcode == 0xff && op.modrm_reg >= 2);
}
// Only these two side-effect-free argument preparations become obsolete when
// the independently proved target declaration removes the two bool arguments.
inline unsigned optional_argument(const Instruction &instruction) {
    const auto &op = instruction.decoded;
    const auto reg = op.modrm_reg + (op.rex_r ? 8 : 0);
    if ((op.opcode >= 0xb0 && op.opcode <= 0xbf && (op.opcode & 7) == 1 && op.rex_b) ||
            (op.opcode == 0x0f && op.opcode2 == 0xb6 && reg == 9 && op.modrm_mod == 3) ||
            ((op.opcode == 0x8a || op.opcode == 0x8b) && reg == 9 && op.modrm_mod == 3)) return 1;
    if (((op.opcode == 0xc6 && op.modrm_reg == 0) || op.opcode == 0x88) && memory_base(op) == 4 &&
            displacement(instruction) == 0x20) return 2;
    return 0;
}
inline bool writes_value(const hde64s &op, unsigned value) {
    if (op.opcode >= 0xb0 && op.opcode <= 0xbf) return (op.opcode & 7) + (op.rex_b ? 8 : 0) == value;
    if (op.opcode == 0x8b || op.opcode == 0x8a || op.opcode == 0x8d ||
            (op.opcode == 0x0f && (op.opcode2 == 0xb6 || op.opcode2 == 0xb7)))
        return op.modrm_reg + (op.rex_r ? 8 : 0) == value;
    return (op.opcode == 0x89 || op.opcode == 0x88) && op.modrm_mod == 3 &&
        op.modrm_rm + (op.rex_b ? 8 : 0) == value;
}
inline bool reads_value(const hde64s &op, unsigned value) {
    if (boundary(op)) return true;
    if (op.opcode >= 0xb0 && op.opcode <= 0xbf) return false;
    const auto base = memory_base(op);
    if (base == value) return true;
    if (op.flags & F_SIB) {
        if ((op.sib_index != 4 || op.rex_x) && op.sib_index + (op.rex_x ? 8 : 0) == value) return true;
    }
    const auto reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
    if (op.opcode == 0x8b || op.opcode == 0x8a || op.opcode == 0x8d ||
            (op.opcode == 0x0f && (op.opcode2 == 0xb6 || op.opcode2 == 0xb7)))
        return op.modrm_mod == 3 && rm == value;
    if (op.opcode == 0x89 || op.opcode == 0x88) return reg == value;
    if (op.opcode == 0xc6 || op.opcode == 0xc7) return false;
    return true; // Unknown uses retain their input-producing instruction.
}
inline unsigned prepared_arguments(const std::vector<Instruction> &code, size_t begin = 0) {
    unsigned result = 0;
    for (size_t at = begin; at < code.size(); ++at) {
        const auto &instruction = code[at]; const auto &op = instruction.decoded;
        const auto argument = optional_argument(instruction);
        if (writes_value(op, 9)) result &= ~1u;
        if (memory_base(op) == 4 && displacement(instruction) == 0x20 &&
                (op.opcode == 0x88 || op.opcode == 0x89 || op.opcode == 0xc6 || op.opcode == 0xc7)) result &= ~2u;
        result |= argument;
    }
    return result;
}
inline size_t argument_begin(const std::vector<Instruction> &source) {
    size_t begin = 0;
    for (size_t at = 0; at + 1 < source.size(); ++at)
        if (source[at].decoded.opcode == 0xe8 || indirect_call(source[at].decoded)) begin = at + 1;
    return begin;
}
inline std::vector<size_t> retained(const std::vector<Instruction> &source, bool context_only) {
    std::vector<bool> omitted(source.size());
    const auto begin = argument_begin(source);
    if (context_only) for (size_t at = begin; at < source.size(); ++at) {
        const auto argument = optional_argument(source[at]);
        if (!argument) continue;
        bool local_argument = true;
        for (size_t next = at + 1; next + 1 < source.size(); ++next) {
            const auto &op = source[next].decoded;
            if ((argument == 1 && (reads_value(op, 9) || writes_value(op, 9))) ||
                    (argument == 2 && memory_base(op) == 4 && displacement(source[next]) == 0x20)) {
                local_argument = false; break;
            }
        }
        if (!local_argument) continue;
        omitted[at] = true;
        const auto &store = source[at].decoded;
        if (argument != 2 || store.opcode != 0x88) continue;
        const unsigned value = store.modrm_reg + (store.rex_r ? 8 : 0);
        size_t definition = at;
        for (size_t prior = at; prior-- > begin;) {
            if (reads_value(source[prior].decoded, value) && !writes_value(source[prior].decoded, value)) break;
            if (writes_value(source[prior].decoded, value)) { definition = prior; break; }
        }
        if (definition == at) continue;
        const auto &load = source[definition].decoded;
        // The incoming fifth bool may have been loaded into ECX solely for
        // its outgoing stack slot. Remove that read only when a complete
        // def-use chain ends here and RCX is overwritten before the real call.
        if (load.opcode != 0x0f || load.opcode2 != 0xb6 || memory_base(load) != 4) continue;
        bool unused = true, overwritten = false;
        for (size_t next = definition + 1; next < source.size(); ++next) {
            if (next == at) continue;
            const auto &op = source[next].decoded;
            if (next > at && writes_value(op, value) && !reads_value(op, value)) { overwritten = true; break; }
            if (reads_value(op, value) || writes_value(op, value)) { unused = false; break; }
        }
        if (unused && overwritten) omitted[definition] = true;
    }
    std::vector<size_t> result;
    for (size_t at = 0; at < source.size(); ++at) if (!omitted[at]) result.push_back(at);
    return result;
}
struct Value {
    std::string origin, receiver;
    unsigned kind = 0; // 1 pointer, 2 vtable, 3 named method.
    bool defined = false;
};
struct Flow { size_t slot_instruction = 0; bool valid = false; uint32_t failure = 0, address = 0; };
inline Flow receiver_flow(const std::vector<Instruction> &code, uint32_t slot) {
    std::array<Value, 16> registers;
    for (size_t at = 0; at < registers.size(); ++at) registers[at] = {"r" + std::to_string(at), {}, 1, false};
    size_t slot_instruction = SIZE_MAX;
    for (size_t at = 0; at < code.size(); ++at) {
        const auto &instruction = code[at]; const auto &op = instruction.decoded;
        const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
        const auto base = memory_base(op);
        if (indirect_call(op)) {
            if (at + 1 != code.size()) return {0, false, 0x100, instruction.address};
            Value method;
            if (op.modrm_mod == 3) method = registers[rm];
            else if (base < 16 && registers[base].kind == 2 && displacement(instruction) == int32_t(slot)) {
                method = {{}, registers[base].receiver, 3, true}; slot_instruction = at;
            }
            const bool valid = method.kind == 3 && !method.receiver.empty() &&
                method.receiver == registers[1].origin && registers[2].defined && registers[8].defined &&
                registers[2].kind == 1 && registers[8].kind == 1 &&
                !registers[2].origin.empty() && !registers[8].origin.empty() &&
                registers[2].origin != registers[8].origin && slot_instruction != SIZE_MAX;
            const uint32_t failure = (method.kind != 3 ? 1u : 0u) |
                (method.receiver.empty() || method.receiver != registers[1].origin ? 2u : 0u) |
                (!registers[2].defined ? 4u : 0u) | (!registers[8].defined ? 8u : 0u) |
                (registers[2].kind != 1 ? 16u : 0u) | (registers[8].kind != 1 ? 32u : 0u) |
                (registers[2].origin.empty() || registers[8].origin.empty() ||
                    registers[2].origin == registers[8].origin ? 64u : 0u) |
                (slot_instruction == SIZE_MAX ? 128u : 0u);
            return {slot_instruction, valid, failure, instruction.address};
        }
        if (op.opcode == 0xe8) {
            for (unsigned value : {0u, 1u, 2u, 8u, 9u, 10u, 11u}) registers[value] = {};
            registers[0] = {"return" + std::to_string(at), {}, 1, true};
            continue;
        }
        // The complete opcode and independently mapped branch destination
        // are checked by equivalent(); this records its fallthrough path.
        if ((op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f)) continue;
        if (boundary(op) || frame_detail::writes_rsp(op)) return {0, false, 0x200, instruction.address};
        if (op.opcode == 0x8b && op.rex_w) {
            if (op.modrm_mod == 3) { registers[reg] = registers[rm]; registers[reg].defined = true; }
            else if (base < 16 && registers[base].kind) {
                const auto offset = displacement(instruction);
                const auto origin = "m(" + registers[base].origin + "," + std::to_string(offset) + ")";
                if (registers[base].kind == 2 && offset == int32_t(slot)) {
                    registers[reg] = {origin, registers[base].receiver, 3, true}; slot_instruction = at;
                } else if (offset == 0) registers[reg] = {origin, registers[base].origin, 2, true};
                else registers[reg] = {origin, {}, 1, true};
            } else registers[reg] = {};
        } else if (op.opcode == 0x89 && op.rex_w && op.modrm_mod == 3) {
            registers[rm] = registers[reg]; registers[rm].defined = true;
        } else if (op.opcode == 0x8d && op.rex_w) {
            if (base < 16 && registers[base].kind)
                registers[reg] = {"a(" + registers[base].origin + "," + std::to_string(displacement(instruction)) + ")", {}, 1, true};
            else registers[reg] = {};
        } else if (op.opcode >= 0xb0 && op.opcode <= 0xbf) {
            registers[(op.opcode & 7) + (op.rex_b ? 8 : 0)] = {};
        } else if (op.flags & F_MODRM) {
            // Memory stores/flag updates do not create a pointer. Register
            // arithmetic and partial writes invalidate its prior provenance.
            if (op.modrm_mod == 3 && op.opcode != 0x39 && op.opcode != 0x3b && op.opcode != 0x85 &&
                    !((op.opcode == 0x80 || op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 7))
                registers[rm] = {};
            if (op.opcode == 0x8a || op.opcode == 0x8b || op.opcode == 0x63 || op.opcode == 0x03 ||
                    op.opcode == 0x2b || op.opcode == 0x33 || op.opcode == 0x23 || op.opcode == 0x0b ||
                    (op.opcode == 0x0f && ((op.opcode2 >= 0x40 && op.opcode2 <= 0x4f) || op.opcode2 == 0xaf ||
                     op.opcode2 == 0xb6 || op.opcode2 == 0xb7 || op.opcode2 == 0xbe || op.opcode2 == 0xbf)))
                registers[reg] = {};
        }
    }
    return {};
}
template<typename Image>
inline uint32_t caller_owner(const Image &image, const State &state, const Contract &entry) {
    auto owner = resolve(state.function_owners, entry.owner);
    if (owner || (state.edition != 1 && state.edition != 2)) return owner;
    owner = state.edition == 1 ? entry.owner : resolve(state.ranges, entry.owner);
    const auto site = state.edition == 1 ? entry.site : resolve(state.ranges, entry.site);
    const auto function = frame_detail::function_at(image, site, entry.width);
    if (!site || function == image.functions.end()) return 0;
    const auto actual = function->owner ? function->owner : function->begin;
    return !owner || owner == actual ? actual : 0;
}
template<typename Image>
inline bool reviewed_call(const Image &image, const State &state, const Contract &entry,
        const native_history_abi::MethodBinding &method, const std::map<uint32_t, Byte> &changes,
        uint32_t &site) {
    if (state.edition != 1 && state.edition != 2) return false;
    const auto reference = entry.pattern.reference;
    const auto length = static_cast<uint32_t>(entry.pattern.raw.size());
    const auto native = state.edition == 1 ? reference : resolve(state.ranges, reference);
    if (!native || (!length) || (state.edition == 2 &&
            resolve(state.ranges, reference + length - 1) != uint64_t(native) + length - 1)) return false;
    const auto *section = image.section(native, length);
    const auto *data = image.read(native, length);
    if (!section || !(section->flags & Image::execute_flag) || !data) return false;
    for (uint32_t at = 0; at < length; ++at) {
        if (state.edition == 2 && resolve(state.ranges, reference + at) != uint64_t(native) + at) return false;
        auto expected = entry.pattern.raw[at];
        const auto change = changes.find(reference + at);
        if (change != changes.end()) {
            if (change->second.reference != expected) return false;
            expected = change->second.native;
        }
        if (data[at] != expected) return false;
    }
    // Exact packaged identities already determine the consumed instruction
    // coordinate. No candidate uniqueness is inferred from a partly decoded
    // function. Decode the complete admitted preparation and require every
    // instruction to belong to its actual logical unwind owner instead.
    Pattern actual; actual.reference = native; actual.raw.assign(data, data + length);
    std::vector<Instruction> source, code;
    if (!decode_source(entry, source) || !decode_pattern(actual, code) || code.size() != source.size() ||
            code.back().address != native + entry.call || !receiver_flow(source, entry.slot).valid ||
            !receiver_flow(code, method.slot).valid || method.argument_count != 4 ||
            prepared_arguments(source, argument_begin(source)) != 3 ||
            prepared_arguments(code, argument_begin(code)) != 3) return false;
    const auto owner = caller_owner(image, state, entry);
    if (!owner) return false;
    for (const auto &instruction : code) {
        const auto function = frame_detail::function_at(image, instruction.address, instruction.bytes.size());
        if (function == image.functions.end() || (function->owner ? function->owner : function->begin) != owner) return false;
    }
    site = native + entry.site - reference;
    return (state.edition == 1 || resolve(state.ranges, entry.site) == site) &&
        uint64_t(site) + entry.width == uint64_t(native) + length;
}
template<typename Image>
inline bool target_frame(const Image &image, uint32_t instruction, uint32_t base,
        const frame_detail::TargetRbpFrame &rbp) {
    if (base == 4) { int32_t origin; return frame_detail::stack_origin(image, instruction, origin); }
    if (base != 5) return false;
    if (rbp.valid && instruction >= rbp.ready && instruction < rbp.end) return true;
    auto function = frame_detail::function_at(image, instruction);
    if (function == image.functions.end()) return false;
    const auto *unwind = image.read(function->unwind, 4);
    return unwind && (unwind[0] & 7) == 1 && (unwind[3] & 15) == 5 &&
        instruction >= uint64_t(function->begin) + unwind[1];
}
template<typename Image>
inline bool equivalent(const Image &image, const State &state, const Contract &entry,
        const Instruction &source, const Instruction &target, bool slot_operand, uint32_t target_slot,
        const frame_detail::TargetRbpFrame &rbp,
        const std::map<uint32_t, uint32_t> &local_instructions,
        std::map<std::pair<unsigned, int32_t>, int32_t> &locals,
        std::map<std::pair<unsigned, int32_t>, int32_t> &inverse) {
    const auto &left = source.decoded, &right = target.decoded;
    const auto left_base = memory_base(left), right_base = memory_base(right);
    const bool frame = left_base == right_base && ((left_base == 4 && target_frame(image, target.address, 4, rbp)) ||
        (left_base == 5 && (entry.frame & 0xff) == 5 && source.address >= entry.ready &&
            source.address < entry.frame_end && target_frame(image, target.address, 5, rbp)));
    const auto ld = displacement_width(left), rd = displacement_width(right);
    const auto lp = displacement_position(left), rp = displacement_position(right);
    const auto offset = source.address - entry.pattern.reference;
    std::vector<unsigned char> a = source.bytes, b = target.bytes;
    std::vector<bool> remove_a(a.size()), remove_b(b.size());
    if (slot_operand || frame) {
        if (!ld || !rd || left.modrm_mod == 3 || right.modrm_mod == 3 || left_base != right_base) return false;
        if (slot_operand) {
            if (displacement(source) != int32_t(entry.slot) || displacement(target) != int32_t(target_slot)) return false;
        } else {
            const auto original = displacement(source), actual = displacement(target);
            const auto [one, added] = locals.emplace(std::pair{left_base, original}, actual);
            const auto [two, unique] = inverse.emplace(std::pair{left_base, actual}, original);
            if ((!added && one->second != actual) || (!unique && two->second != original)) return false;
        }
        for (uint32_t byte = 0; byte < ld; ++byte) remove_a[lp + byte] = true;
        for (uint32_t byte = 0; byte < rd; ++byte) remove_b[rp + byte] = true;
        // ModR/M disp8 and disp32 are the same addressing operation. Every
        // prefix, register, opcode, scale, immediate and other byte is retained.
        const auto lm = lp - ((left.flags & F_SIB) ? 2u : 1u);
        const auto rm = rp - ((right.flags & F_SIB) ? 2u : 1u);
        if (lm >= a.size() || rm >= b.size()) return false;
        a[lm] &= 0x3f; b[rm] &= 0x3f;
    }
    for (const auto &fixup : entry.pattern.fixups) {
        if (fixup.offset < offset || fixup.offset >= offset + source.bytes.size()) continue;
        if (source.bytes.size() != target.bytes.size() || fixup.offset + fixup.width > offset + source.bytes.size()) return false;
        auto relocated = fixup; relocated.offset -= offset;
        if (relocated.next) {
            if (relocated.next < offset || relocated.next > offset + source.bytes.size()) return false;
            relocated.next -= offset;
        }
        Pattern instruction; instruction.reference = source.address; instruction.raw = source.bytes;
        auto expected = resolve(state.ranges, fixup.target);
        if (!expected && !(fixup.kind & 0x100)) {
            const auto local = local_instructions.find(fixup.target);
            if (local != local_instructions.end()) expected = local->second;
        }
        if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
        if ((fixup.target && !expected) || operand_target(image, instruction, target.address, relocated) != expected) return false;
        for (uint32_t byte = 0; byte < fixup.width; ++byte)
            remove_a[relocated.offset + byte] = remove_b[relocated.offset + byte] = true;
    }
    std::vector<unsigned char> fixed_a, fixed_b;
    for (size_t at = 0; at < a.size(); ++at) if (!remove_a[at]) fixed_a.push_back(a[at]);
    for (size_t at = 0; at < b.size(); ++at) if (!remove_b[at]) fixed_b.push_back(b[at]);
    return fixed_a == fixed_b;
}
struct Anchor {
    uint32_t source, source_end, target, target_end;
    bool identity;
};
inline bool conditional(const hde64s &op) {
    return (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
        (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
}
inline uint32_t branch_destination(const Instruction &instruction) {
    const auto &op = instruction.decoded;
    if ((op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xeb)
        return instruction.address + op.len + static_cast<int8_t>(op.imm.imm8);
    if (op.opcode == 0xe9 || conditional(op))
        return instruction.address + op.len + static_cast<int32_t>(op.imm.imm32);
    return 0;
}
inline bool reaches(const std::map<uint32_t, const Instruction *> &code, uint32_t from, uint32_t to) {
    std::vector<uint32_t> pending{from}; std::set<uint32_t> visited;
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (address == to) return true;
        if (!visited.insert(address).second) continue;
        if (visited.size() > 8192) return false;
        const auto found = code.find(address);
        if (found == code.end()) continue;
        const auto &instruction = *found->second; const auto &op = instruction.decoded;
        // Crossing a different virtual operation cannot establish which named
        // call owns this interval. Direct, independently identifiable helpers
        // may be inlined between releases and remain ordinary CFG edges.
        if (indirect_call(op) || op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                (op.opcode == 0xff && op.modrm_reg >= 4) ||
                (op.opcode >= 0xe0 && op.opcode <= 0xe3)) continue;
        if (const auto target = branch_destination(instruction)) pending.push_back(target);
        if (op.opcode != 0xe9 && op.opcode != 0xeb) pending.push_back(address + op.len);
    }
    return false;
}
template<typename Image>
inline bool surrounding_anchor(const Image &image, const State &state, const Contract &entry,
        const std::vector<Instruction> &context, size_t first,
        const std::map<uint32_t, Byte> &changes, const std::map<uint32_t, const Instruction *> &actual,
        Anchor &result) {
    const auto reference = context[first].address;
    const auto native = resolve(state.ranges, reference);
    if (!native || !actual.count(native)) return false;
    bool identity = false; uint32_t end = reference;
    for (size_t at = first; at < context.size() && end - reference < 8; ++at) {
        const auto &instruction = context[at];
        if (instruction.address != end) return false;
        const auto target = native + instruction.address - reference;
        const auto found = actual.find(target);
        if (found == actual.end() || found->second->bytes.size() != instruction.bytes.size()) return false;
        const auto *bytes = image.read(target, instruction.bytes.size());
        if (!bytes) return false;
        std::vector<bool> relocated(instruction.bytes.size());
        const auto offset = instruction.address - entry.context.reference;
        for (const auto &fixup : entry.context.fixups) {
            if (fixup.offset < offset || fixup.offset >= offset + instruction.bytes.size()) continue;
            if (fixup.offset + fixup.width > offset + instruction.bytes.size()) return false;
            auto relative = fixup; relative.offset -= offset;
            if (relative.next) {
                if (relative.next < offset || relative.next > offset + instruction.bytes.size()) return false;
                relative.next -= offset;
            }
            auto expected = resolve(state.ranges, fixup.target);
            if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
            if (!expected) return false;
            Pattern source; source.reference = instruction.address; source.raw = instruction.bytes;
            if (operand_target(image, source, target, relative) != expected) return false;
            for (uint32_t byte = 0; byte < fixup.width; ++byte) relocated[relative.offset + byte] = true;
            identity |= ((fixup.kind & 0x100) && instruction.decoded.opcode == 0xe8) ||
                (!(fixup.kind & 0x100) && (fixup.target < entry.context.reference ||
                 fixup.target >= uint64_t(entry.context.reference) + entry.context.raw.size()));
        }
        for (size_t byte = 0; byte < instruction.bytes.size(); ++byte) {
            const auto address = instruction.address + static_cast<uint32_t>(byte);
            if (resolve(state.ranges, address) != target + byte) return false;
            if (relocated[byte]) continue;
            auto expected = instruction.bytes[byte];
            const auto change = changes.find(address);
            if (change != changes.end()) {
                if (change->second.reference != expected) return false;
                expected = change->second.native;
            }
            if (bytes[byte] != expected) return false;
        }
        end += static_cast<uint32_t>(instruction.bytes.size());
    }
    if (end - reference < 8 || (reference < entry.site + entry.width && end > entry.site)) return false;
    result = {reference, end, native, native + end - reference, identity}; return true;
}
template<typename Image>
inline bool local_identity_anchor(const Image &image, const State &state, const Contract &entry,
        const std::vector<Instruction> &context, size_t first,
        const std::vector<std::vector<Instruction>> &fragments,
        const frame_detail::TargetRbpFrame &frame, Anchor &result) {
    const auto reference = context[first].address;
    uint32_t end = reference; size_t last = first; bool identity = false;
    for (; last < context.size() && last - first < 8; ++last) {
        const auto &instruction = context[last];
        if (instruction.address != end || indirect_call(instruction.decoded)) return false;
        const auto offset = instruction.address - entry.context.reference;
        for (const auto &fixup : entry.context.fixups)
            if (offset <= fixup.offset && fixup.offset < offset + instruction.bytes.size() &&
                    (((fixup.kind & 0x100) && instruction.decoded.opcode == 0xe8) ||
                     (!(fixup.kind & 0x100) && (fixup.target < entry.context.reference ||
                      fixup.target >= uint64_t(entry.context.reference) + entry.context.raw.size())))) {
                const auto mapped = resolve(state.ranges, fixup.target);
                if (mapped || ((fixup.kind & 0x100) && resolve(state.function_owners, fixup.target))) identity = true;
            }
        end += static_cast<uint32_t>(instruction.bytes.size());
        if (end - reference >= 8 && identity) { ++last; break; }
        if (boundary(instruction.decoded)) return false;
    }
    if (!identity || end - reference < 8 || last == first ||
            (reference < entry.site + entry.width && end > entry.site)) return false;
    Contract local = entry; local.pattern = entry.context;
    const size_t length = last - first;
    std::map<uint32_t, Anchor> candidates;
    for (const auto &fragment : fragments) for (size_t at = 0; at + length <= fragment.size(); ++at) {
        if (fragment[at].decoded.opcode != context[first].decoded.opcode) continue;
        std::map<std::pair<unsigned, int32_t>, int32_t> locals, inverse;
        const std::map<uint32_t, uint32_t> no_branch_guesses;
        bool valid = true;
        for (size_t index = 0; index < length; ++index) {
            const auto &actual = fragment[at + index];
            if ((index && fragment[at + index - 1].address + fragment[at + index - 1].bytes.size() != actual.address) ||
                    !equivalent(image, state, local, context[first + index], actual, false, 0,
                        frame, no_branch_guesses, locals, inverse)) { valid = false; break; }
        }
        if (valid) {
            const auto &tail = fragment[at + length - 1];
            candidates.emplace(fragment[at].address, Anchor{reference, end, fragment[at].address,
                tail.address + static_cast<uint32_t>(tail.bytes.size()), true});
        }
    }
    if (candidates.size() != 1) return false;
    result = candidates.begin()->second; return true;
}
template<typename Image>
inline bool formatted_output_anchor(const Image &image, const State &state, const Contract &entry,
        const std::vector<Instruction> &preparation, const std::map<uint32_t, const Instruction *> &source,
        const std::map<uint32_t, const Instruction *> &actual, const frame_detail::TargetRbpFrame &frame) {
    using Local = std::pair<unsigned, int32_t>;
    const Local unknown{16, 0};
    const auto output = [&](const std::vector<Instruction> &code, bool native) -> Local {
        for (size_t at = code.size() - 1; at-- > 0;) {
            const auto &instruction = code[at]; const auto &op = instruction.decoded;
            if (boundary(op) || frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) return unknown;
            if (!writes_gpr(op, 2)) continue;
            const auto base = memory_base(op);
            if (op.opcode != 0x8d || !op.rex_w || op.modrm_reg + (op.rex_r ? 8 : 0) != 2 ||
                    (base != 4 && base != 5)) return unknown;
            if (native ? !target_frame(image, instruction.address, base, frame) :
                    (base == 5 && ((entry.frame & 0xff) != 5 || instruction.address < entry.ready ||
                     instruction.address >= entry.frame_end))) return unknown;
            return {base, displacement(instruction)};
        }
        return unknown;
    };
    std::vector<Instruction> original;
    if (preparation.empty() || !decode_source(entry, original)) return false;
    const auto left_output = output(original, false), right_output = output(preparation, true);
    if (left_output == unknown || right_output == unknown) return false;
    const auto sink = [&](const auto &code, uint32_t address, Local object,
                          std::array<const Instruction *, 6> &result) {
        for (auto &instruction : result) {
            const auto found = code.find(address);
            if (found == code.end()) return false;
            instruction = found->second;
            address += instruction->decoded.len;
        }
        const auto member = [&](size_t at, int32_t offset) {
            return memory_base(result[at]->decoded) == object.first &&
                int64_t(displacement(*result[at])) == int64_t(object.second) + offset;
        };
        const auto reg = [](const hde64s &op) { return op.modrm_reg + (op.rex_r ? 8 : 0); };
        const auto &a = result[0]->decoded, &b = result[1]->decoded, &c = result[2]->decoded;
        const auto &d = result[3]->decoded, &move = result[4]->decoded;
        const auto destination = move.opcode == 0x8b ? move.modrm_rm + (move.rex_b ? 8 : 0) : reg(move);
        return a.opcode == 0x8d && a.rex_w && reg(a) == 2 && member(0, 0) &&
            b.opcode == 0x83 && b.rex_w && b.modrm_reg == 7 && b.imm.imm8 == 15 && member(1, 24) &&
            c.opcode == 0x0f && c.opcode2 == 0x47 && c.rex_w && reg(c) == 2 && member(2, 0) &&
            d.opcode == 0x8b && d.rex_w && reg(d) == 8 && member(3, 16) &&
            receiver_move_prefix(result[4]->bytes.data(), result[4]->bytes.size()) &&
            (destination == 3 || destination == 6 || destination == 7 || destination >= 12) &&
            result[5]->decoded.opcode == 0xe8;
    };
    std::array<const Instruction *, 6> left{}, right{};
    if (!sink(source, entry.site + entry.width, left_output, left) ||
            !sink(actual, preparation.back().address + preparation.back().decoded.len, right_output, right)) return false;
    // A complete native string data/size selection consumes the exact output
    // object just passed to the formatter. Its append helper is independently
    // identified. Only the append destination's nonvolatile register may be
    // allocated differently; no formatter slot, operand or frame is guessed.
    const auto offset = left.back()->address - entry.context.reference;
    const auto helper = std::find_if(entry.context.fixups.begin(), entry.context.fixups.end(), [&](const auto &fixup) {
        return (fixup.kind & 0x100) && fixup.offset >= offset &&
            fixup.offset + fixup.width <= offset + left.back()->bytes.size();
    });
    if (helper == entry.context.fixups.end() ||
            (!resolve(state.ranges, helper->target) && !resolve(state.function_owners, helper->target))) return false;
    Contract local = entry; local.pattern = entry.context;
    std::map<std::pair<unsigned, int32_t>, int32_t> locals, inverse;
    const std::map<uint32_t, uint32_t> no_branch_guesses;
    for (size_t at = 0; at < left.size(); ++at)
        if (at != 4 && !equivalent(image, state, local, *left[at], *right[at], false, 0,
                frame, no_branch_guesses, locals, inverse)) return false;
    return true;
}

template<typename Image>
inline std::map<uint32_t, std::vector<unsigned char>> anchored_calls(const Image &image, const State &state,
        const Contract &entry, const native_history_abi::MethodBinding &method,
        const std::vector<std::vector<Instruction>> &fragments, const std::map<uint32_t, Byte> &changes,
        std::string &diagnostic) {
    std::map<uint32_t, std::vector<unsigned char>> result;
    if (entry.context.raw.empty()) return result;
    std::vector<Instruction> context;
    if (!decode_pattern(entry.context, context)) return result;
    std::map<uint32_t, const Instruction *> source, actual;
    for (const auto &instruction : context) source.emplace(instruction.address, &instruction);
    for (const auto &fragment : fragments) for (const auto &instruction : fragment)
        actual.emplace(instruction.address, &instruction);
    const auto owner = caller_owner(image, state, entry);
    const auto frame = frame_detail::target_rbp_frame(image, owner);
    std::vector<Anchor> before, after;
    for (size_t at = 0; at < context.size(); ++at) {
        Anchor anchor;
        if (!surrounding_anchor(image, state, entry, context, at, changes, actual, anchor) &&
                !local_identity_anchor(image, state, entry, context, at, fragments, frame, anchor)) continue;
        if (anchor.source_end <= entry.site && reaches(source, anchor.source_end, entry.pattern.reference + entry.call))
            before.push_back(anchor);
        if (anchor.source >= entry.site + entry.width && reaches(source, entry.site + entry.width, anchor.source))
            after.push_back(anchor);
    }
    if (before.empty()) {
        diagnostic = "context anchors " + std::to_string(before.size()) + "/" + std::to_string(after.size());
        return result;
    }
    // Prefer adjacent independent evidence, but require real paths in both
    // images. Address ordering alone never grants a call binding.
    if (before.size() > 12) before.erase(before.begin(), before.end() - 12);
    if (after.size() > 12) after.resize(12);
    size_t virtuals = 0, receivers = 0, arguments_ready = 0, prefixes = 0, incoming = 0, outgoing = 0;
    for (const auto &fragment : fragments) for (size_t last = 0; last < fragment.size(); ++last) {
        if (!indirect_call(fragment[last].decoded)) continue;
        ++virtuals;
        size_t first = last;
        while (first && last - first < 32 &&
                fragment[first - 1].address + fragment[first - 1].bytes.size() == fragment[first].address &&
                !boundary(fragment[first - 1].decoded)) --first;
        std::vector<Instruction> preparation(fragment.begin() + first, fragment.begin() + last + 1);
        if (!receiver_flow(preparation, method.slot).valid) continue;
        ++receivers;
        const unsigned arguments = prepared_arguments(preparation);
        if (method.argument_count == 4 && arguments != 3) continue;
        ++arguments_ready;
        const auto end = fragment[last].address + static_cast<uint32_t>(fragment[last].bytes.size());
        if (end < entry.width) continue;
        const auto site = end - entry.width;
        if (!actual.count(site)) continue;
        // A complete MOV RCX,GPR is replayed from the proved native bytes by
        // native_reference_calls. Its actual source GPR was just traced to
        // this method's receiver. Other prefixes retain their exact contract.
        const auto prefix = entry.pattern.reference + entry.call - entry.site;
        if (fragment[last].address - site != prefix) continue;
        const auto *prefix_bytes = image.read(site, prefix);
        const auto *original_prefix = entry.pattern.raw.data() + entry.site - entry.pattern.reference;
        if (prefix && (!prefix_bytes || (std::memcmp(prefix_bytes, original_prefix, prefix) &&
                !(receiver_move_prefix(original_prefix, prefix) && receiver_move_prefix(prefix_bytes, prefix))))) continue;
        ++prefixes;
        bool interior_branch = false;
        for (const auto &[address, instruction] : actual) {
            (void)address;
            const auto destination = branch_destination(*instruction);
            if (destination > site && destination < end) { interior_branch = true; break; }
        }
        if (interior_branch) continue;
        bool proved = false;
        const bool output_sink = formatted_output_anchor(image, state, entry, preparation, source, actual, frame);
        if (output_sink) ++outgoing;
        for (const auto &right : after) if (reaches(actual, end, right.target)) ++outgoing;
        for (const auto &left : before) {
            if (!reaches(actual, left.target_end, fragment[last].address)) continue;
            ++incoming;
            if (output_sink) { proved = true; break; }
            for (const auto &right : after) if ((left.identity || right.identity) &&
                    reaches(actual, end, right.target)) { proved = true; break; }
            if (proved) break;
        }
        if (!proved) continue;
        if (const auto *bytes = image.read(site, entry.width))
            result.emplace(site, std::vector<unsigned char>(bytes, bytes + entry.width));
    }
    diagnostic = "context anchors " + std::to_string(before.size()) + "/" + std::to_string(after.size()) +
        ", virtual/receiver/arguments/prefix " + std::to_string(virtuals) + "/" + std::to_string(receivers) +
        "/" + std::to_string(arguments_ready) + "/" + std::to_string(prefixes) +
        ", connected incoming/outgoing " + std::to_string(incoming) + "/" + std::to_string(outgoing);
    if (!before.empty() && !after.empty()) {
        std::ostringstream anchors; anchors << std::hex << "; closest anchors 0x" << before.back().source << "->0x"
            << before.back().target << "/0x" << after.front().source << "->0x" << after.front().target;
        diagnostic += anchors.str();
    }
    return result;
}
// An absent suffix is a positive control-flow result. The caller must contain
// every source base-text variant, and every native continuation must reach the
// same independently identified announcement constructor without a formatter,
// append, unknown call or write to the output string.
template<typename Image>
inline bool absent_suffix(const Image &image, const State &state, const SuffixFeature &feature,
        std::string &diagnostic) {
    const auto identity = [&](uint32_t reference) {
        const auto address = resolve(state.ranges, reference);
        return address ? address : resolve(state.function_owners, reference);
    };
    const auto owner = resolve(state.function_owners, feature.owner);
    const auto append = identity(feature.append), constructor = identity(feature.constructor), cleanup = identity(feature.cleanup);
    if (!owner || !append || !constructor || !cleanup) {
        std::ostringstream message; message << "caller/append/announcement/cleanup identity unresolved: " << std::hex
            << feature.owner << "->" << owner << ", " << feature.append << "->" << append << ", "
            << feature.constructor << "->" << constructor << ", " << feature.cleanup << "->" << cleanup;
        diagnostic = message.str(); return false;
    }
    std::vector<Instruction> instructions;
    for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
        std::vector<Instruction> region;
        DecodeFailure failure;
        if (!decode(image, begin, end, region, nullptr, &failure)) {
            std::ostringstream message; message << "caller CFG undecoded at 0x" << std::hex
                << failure.address << " " << failure.reason;
            diagnostic = message.str(); return false;
        }
        instructions.insert(instructions.end(), std::make_move_iterator(region.begin()), std::make_move_iterator(region.end()));
    }
    if (instructions.empty()) { diagnostic = "caller has no decoded instructions"; return false; }
    std::map<uint32_t, const Instruction *> code;
    for (const auto &instruction : instructions) code.emplace(instruction.address, &instruction);
    const auto rbp = frame_detail::target_rbp_frame(image, owner);
    using Local = std::pair<unsigned, int32_t>;
    const Local unknown{16, 0};
    const auto local = [&](const Instruction &instruction, unsigned destination) -> Local {
        const auto &op = instruction.decoded;
        const auto base = memory_base(op);
        if (op.opcode != 0x8d || !op.rex_w || op.modrm_reg + (op.rex_r ? 8 : 0) != destination ||
                !target_frame(image, instruction.address, base, rbp)) return unknown;
        return {base, displacement(instruction)};
    };
    const auto direct = [](const Instruction &instruction) -> uint32_t {
        return instruction.decoded.opcode == 0xe8 ?
            instruction.address + instruction.decoded.len + static_cast<int32_t>(instruction.decoded.imm.imm32) : 0;
    };
    std::map<std::vector<unsigned char>, size_t> expected, observed;
    for (const auto &[site, text] : feature.texts) { (void)site; ++expected[text]; }
    std::set<uint32_t> closed_sinks;
    for (const auto &instruction : instructions) {
        const auto &op = instruction.decoded;
        if (op.opcode != 0x8d || !op.rex_w || op.modrm_reg + (op.rex_r ? 8 : 0) != 2 ||
                op.modrm_mod != 0 || op.modrm_rm != 5 || (op.flags & F_SIB) || op.p_67) continue;
        const auto text_address = instruction.address + op.len + static_cast<int32_t>(op.disp.disp32);
        const std::vector<unsigned char> *text = nullptr;
        for (const auto &[candidate, count] : expected) {
            (void)count;
            const auto *section = image.section(text_address, candidate.size());
            const auto *data = image.read(text_address, candidate.size());
            if (section && !(section->flags & (Image::write_flag | Image::execute_flag)) && data &&
                    !std::memcmp(data, candidate.data(), candidate.size())) { text = &candidate; break; }
        }
        if (!text) continue;
        // The source contract names a literal append into a local native
        // string. Observe all occurrences of that literal in this caller;
        // an unclassified occurrence prevents an absence claim.
        auto next = code.find(instruction.address + op.len);
        Local output = unknown;
        std::set<uint32_t> preparation;
        while (next != code.end() && preparation.size() < 16 && preparation.insert(next->first).second) {
            const auto &current = *next->second;
            const auto &decoded = current.decoded;
            if (direct(current) == append) break;
            if (const auto value = local(current, 1); value != unknown) {
                if (output != unknown) break;
                output = value;
            } else if (decoded.opcode == 0xe9 || decoded.opcode == 0xeb) {
                // The literal remains in RDX across an actual direct edge to
                // shared append preparation. No register or memory write is
                // skipped, and cycles or undecoded destinations are refused.
                next = code.find(branch_destination(current));
                continue;
            } else if (decoded.opcode != 0x90 && !(decoded.opcode == 0x0f && decoded.opcode2 == 0x1f)) break;
            next = code.find(next->first + decoded.len);
        }
        if (output == unknown || next == code.end() || direct(*next->second) != append) {
            std::ostringstream reason;
            reason << "base literal 0x" << std::hex << instruction.address
                << " has no proved local-string append path at 0x" << (next == code.end() ? 0 : next->first)
                << "; RBP=" << rbp.valid << " [0x" << rbp.ready << ",0x" << rbp.end << ')';
            if (!rbp.valid) reason << " " << rbp.failure.reason;
            diagnostic = reason.str(); return false;
        }
        ++observed[*text];
        using Node = std::tuple<uint32_t, unsigned, int32_t>;
        std::map<Node, unsigned> visits;
        std::function<bool(uint32_t, Local)> close = [&](uint32_t address, Local rcx) {
            const Node node{address, rcx.first, rcx.second};
            auto &mark = visits[node];
            if (mark) return mark == 2;
            if (visits.size() > 128) return false;
            mark = 1;
            const auto found = code.find(address);
            if (found == code.end()) return false;
            const auto &current = *found->second; const auto &decoded = current.decoded;
            const auto following = address + decoded.len;
            if (direct(current) == constructor) {
                const auto after = code.find(following);
                if (rcx == unknown || rcx == output || after == code.end()) return false;
                const auto &store = after->second->decoded;
                if (store.opcode != 0xc7 || store.modrm_reg != 0 || store.rex_w ||
                        Local{memory_base(store), displacement(*after->second)} != rcx ||
                        store.imm.imm32 != feature.tag) return false;
                closed_sinks.insert(address); mark = 2; return true;
            }
            if (const auto value = local(current, 1); value != unknown) rcx = value;
            else if (direct(current) == cleanup) {
                if (rcx == unknown || rcx == output) return false;
                rcx = unknown;
            } else if (decoded.opcode == 0x90 || (decoded.opcode == 0x0f && decoded.opcode2 == 0x1f)) {
                // Architecturally defined NOP, including its ignored address.
            } else if (const auto destination = branch_destination(current)) {
                const bool result = close(destination, rcx) &&
                    ((decoded.opcode == 0xe9 || decoded.opcode == 0xeb) || close(following, rcx));
                if (result) mark = 2;
                return result;
            } else return false;
            const bool result = close(following, rcx);
            if (result) mark = 2;
            return result;
        };
        if (!close(next->first + next->second->decoded.len, unknown)) {
            diagnostic = "base message continuation is not a closed suffix-free announcement path"; return false;
        }
    }
    if (observed != expected || closed_sinks.empty()) {
        diagnostic = "native base-message variants do not cover the complete source feature"; return false;
    }
    for (const auto &span : feature.spans) for (const auto &range : state.ranges)
        if (range.begin < span.end && span.begin < range.end) {
            diagnostic = "an owned suffix hook already has positive instruction evidence"; return false;
        }
    diagnostic = std::to_string(feature.texts.size()) + " base-message paths closed at " +
        std::to_string(closed_sinks.size()) + " independently identified announcement sinks";
    return true;
}
} // namespace dfcn::pe_runtime::method_call_detail

namespace dfcn::pe_runtime {
inline void complete_method_calls(address_runtime::State &state, const std::vector<unsigned char> &blob,
        const std::vector<method_call_detail::SuffixFeature> &additional_features = {}) {
    state.missing_method_calls.clear();
    const auto evidence = method_call_detail::read(blob);
    std::vector<address_runtime::Range> expected_absent;
    std::set<uint32_t> recognized;
    auto features = evidence.features;
    features.insert(features.end(), additional_features.begin(), additional_features.end());
    for (const auto &feature : features)
        if (std::binary_search(state.absent_features.begin(), state.absent_features.end(), feature.identity)) {
            recognized.insert(feature.identity);
            expected_absent.insert(expected_absent.end(), feature.spans.begin(), feature.spans.end());
        }
    std::sort(expected_absent.begin(), expected_absent.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
    if (recognized.size() != state.absent_features.size() || expected_absent.size() != state.absent_spans.size())
        throw std::runtime_error("Unrecognized cached absent native feature");
    for (size_t at = 0; at < expected_absent.size(); ++at)
        if (expected_absent[at].begin != state.absent_spans[at].begin ||
                expected_absent[at].end != state.absent_spans[at].end || state.absent_spans[at].native)
            throw std::runtime_error("Cached absent feature does not own its complete hook span");
    for (const auto &entry : evidence) {
        if (std::any_of(expected_absent.begin(), expected_absent.end(), [&](const auto &span) {
                return span.begin == entry.site && span.end == entry.site + entry.width;
            })) continue;
        native_history_abi::MethodBinding method;
        const auto begin = address_runtime::resolve(state.ranges, entry.site);
        if (!method_call_detail::contract(state, entry, method) || !begin ||
                address_runtime::resolve(state.ranges, entry.site + entry.width - 1) != begin + entry.width - 1 ||
                !std::binary_search(state.proven_method_calls.begin(), state.proven_method_calls.end(), entry.site))
            state.missing_method_calls.push_back(entry.site);
    }
}
template<typename Image>
inline void discover_method_calls(const Image &image, const std::vector<unsigned char> &blob,
        address_runtime::State &state, address_runtime::Progress report = {}) {
    using namespace method_call_detail;
    const auto evidence = read(blob); state.proven_method_calls.clear();
    state.absent_features.clear(); state.absent_spans.clear();
    Bindings bindings;
    for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    std::map<uint32_t, std::vector<std::vector<Instruction>>> scopes;
    std::map<uint32_t, DecodeFailure> incomplete_scopes;
    std::map<uint32_t, frame_detail::TargetRbpFrame> frames;
    for (const auto &entry : evidence) {
        uint32_t owner = 0;
        const auto missing = [&](const char *reason) {
            if (report) { std::ostringstream message; message << "Named method call 0x" << std::hex << entry.site
                << " (caller 0x" << entry.owner << " -> 0x" << owner << "): " << reason; report(message.str()); }
        };
        native_history_abi::MethodBinding method;
        if (!contract(state, entry, method)) { missing("target parameter contract is unresolved"); continue; }
        uint32_t reviewed = 0;
        if (reviewed_call(image, state, entry, method, changes, reviewed) &&
                bindings.compatible(entry.site, entry.width, reviewed)) {
            bindings.add(entry.site, entry.width, reviewed);
            state.proven_method_calls.push_back(entry.site);
            continue;
        }
        owner = caller_owner(image, state, entry);
        if (!owner) { missing("caller function identity is unresolved"); continue; }
        if (!frames.count(owner)) frames.emplace(owner, frame_detail::target_rbp_frame(image, owner));
        auto found = scopes.find(owner);
        if (found == scopes.end()) {
            auto &fragments = scopes[owner];
            for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
                // Decode across the already proved CHAININFO region so an
                // inline switch table can refer to case blocks in another
                // physical unwind fragment of this same logical method.
                std::vector<Instruction> code;
                DecodeFailure failure;
                if (!decode(image, begin, end, code, nullptr, &failure)) {
                    fragments.clear(); incomplete_scopes.emplace(owner, failure); break;
                }
                if (code.empty()) continue;
                if (!fragments.empty() && fragments.back().back().address + fragments.back().back().bytes.size() ==
                        code.front().address) {
                    fragments.back().insert(fragments.back().end(), std::make_move_iterator(code.begin()),
                        std::make_move_iterator(code.end()));
                } else fragments.push_back(std::move(code));
            }
            found = scopes.find(owner);
        }
        if (incomplete_scopes.count(owner) || found->second.empty()) {
            std::ostringstream reason; reason << "complete caller instruction boundaries unresolved";
            if (const auto failed = incomplete_scopes.find(owner); failed != incomplete_scopes.end())
                reason << " at 0x" << std::hex << failed->second.address << " " << failed->second.reason;
            missing(reason.str().c_str()); continue;
        }
        std::vector<Instruction> source;
        if (!decode_source(entry, source)) throw std::runtime_error("Undecodable named method-call source");
        const auto source_flow = receiver_flow(source, entry.slot);
        if (!source_flow.valid) {
            std::ostringstream reason; reason << "source receiver/argument provenance is not established at 0x"
                << std::hex << source_flow.address << " (missing proof mask 0x" << source_flow.failure << ")";
            missing(reason.str().c_str()); continue;
        }
        const auto kept = retained(source, method.argument_count == 2);
        const unsigned optional = prepared_arguments(source, argument_begin(source));
        if (optional != 3 || kept.empty()) { missing("source extra-argument provenance is not established"); continue; }
        std::map<uint32_t, std::vector<unsigned char>> matches;
        size_t longest = 0; uint32_t closest_source = 0, closest_target = 0;
        for (const auto &fragment : found->second) {
            std::set<uint32_t> destinations;
            for (const auto &instruction : fragment) {
                const auto &op = instruction.decoded;
                if ((op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xeb ||
                        (op.opcode >= 0xe0 && op.opcode <= 0xe3))
                    destinations.insert(instruction.address + op.len + static_cast<int8_t>(op.imm.imm8));
                else if (op.opcode == 0xe9 || (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f))
                    destinations.insert(instruction.address + op.len + static_cast<int32_t>(op.imm.imm32));
            }
            for (size_t last = kept.size() - 1; last < fragment.size(); ++last) {
                if (!indirect_call(fragment[last].decoded)) continue;
                const size_t first = last + 1 - kept.size();
                std::vector<Instruction> target(fragment.begin() + first, fragment.begin() + last + 1);
                const auto target_flow = receiver_flow(target, method.slot);
                if (!target_flow.valid || kept[target_flow.slot_instruction] != source_flow.slot_instruction) continue;
                bool valid = true; uint32_t site = 0;
                std::map<std::pair<unsigned, int32_t>, int32_t> locals, inverse;
                std::map<uint32_t, uint32_t> local_instructions;
                for (size_t at = 0; at < kept.size(); ++at)
                    local_instructions.emplace(source[kept[at]].address, target[at].address);
                for (size_t at = 0; at < kept.size(); ++at) {
                    const auto &original = source[kept[at]], &actual = target[at];
                    if ((at && target[at - 1].address + target[at - 1].bytes.size() != actual.address) ||
                            !equivalent(image, state, entry, original, actual, kept[at] == source_flow.slot_instruction,
                                method.slot, frames.at(owner), local_instructions, locals, inverse)) { valid = false; break; }
                    if (at + 1 > longest) {
                        longest = at + 1; closest_source = original.address; closest_target = actual.address;
                    }
                    if (original.address == entry.site) site = actual.address;
                }
                if (!valid || !site || uint64_t(target.back().address) + target.back().bytes.size() != uint64_t(site) + entry.width)
                    continue;
                const auto branch = destinations.upper_bound(site);
                if (branch != destinations.end() && *branch < site + entry.width) continue;
                if (!bindings.compatible(entry.site, entry.width, site)) continue;
                const auto *bytes = image.read(site, entry.width);
                if (bytes) matches.emplace(site, std::vector<unsigned char>(bytes, bytes + entry.width));
            }
        }
        std::string surrounding_diagnostic;
        if (matches.empty()) {
            auto surrounding = anchored_calls(image, state, entry, method, found->second, changes, surrounding_diagnostic);
            for (auto &[site, bytes] : surrounding) if (bindings.compatible(entry.site, entry.width, site))
                matches.emplace(site, std::move(bytes));
        }
        if (matches.size() != 1) {
            if (matches.empty()) {
                std::ostringstream reason; reason << "no complete target preparation satisfies the named contract; exact "
                    << longest << "/" << kept.size() << " through 0x" << std::hex << closest_source << " -> 0x"
                    << closest_target << "; RBP " << frames.at(owner).valid << " [0x" << frames.at(owner).ready
                    << ",0x" << frames.at(owner).end << ") at 0x" << frames.at(owner).failure.address << " "
                    << frames.at(owner).failure.reason << " reg=" << frames.at(owner).failure.reg << "; " << surrounding_diagnostic;
                missing(reason.str().c_str());
            } else missing("multiple target preparations satisfy the named contract");
            continue;
        }
        const auto &[site, bytes] = *matches.begin();
        bindings.add(entry.site, entry.width, site);
        const auto offset = entry.site - entry.pattern.reference;
        for (uint32_t at = 0; at < entry.width; ++at) if (entry.pattern.raw[offset + at] != bytes[at]) {
            const Byte byte{entry.site + at, entry.pattern.raw[offset + at], bytes[at]};
            const auto [previous, inserted] = changes.emplace(byte.address, byte);
            if (!inserted && (previous->second.reference != byte.reference || previous->second.native != byte.native))
                throw std::runtime_error("Conflicting named method-call patch bytes");
        }
        state.proven_method_calls.push_back(entry.site);
    }
    state.ranges = bindings.export_ranges(); state.bytes.clear();
    for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
    std::sort(state.proven_method_calls.begin(), state.proven_method_calls.end());
    for (const auto &feature : evidence.features) {
        std::string diagnostic;
        if (absent_suffix(image, state, feature, diagnostic)) {
            state.absent_features.push_back(feature.identity);
            state.absent_spans.insert(state.absent_spans.end(), feature.spans.begin(), feature.spans.end());
            if (report) report("Native return suffix feature absent: " + diagnostic);
        } else if (report) report("Native return suffix feature retained: " + diagnostic);
    }
    std::sort(state.absent_features.begin(), state.absent_features.end());
    std::sort(state.absent_spans.begin(), state.absent_spans.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
    complete_method_calls(state, blob);
    if (report) report("Native discovery: proved " + std::to_string(state.proven_method_calls.size()) +
        "/" + std::to_string(evidence.size()) + " named virtual calls with receiver and argument contracts");
}
} // namespace dfcn::pe_runtime
