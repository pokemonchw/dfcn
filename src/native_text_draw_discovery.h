#pragma once
#include "native_method_call_discovery.h"
#include "native_frame_member_evidence.h"
#include <array>
#include <optional>

namespace dfcn::pe_runtime::text_draw_detail {
using namespace address_runtime;
using namespace display_decode;
struct Contract {
    uint32_t reference, owner, callee, receiver, continuation;
    std::vector<unsigned char> original, text;
};
inline std::vector<Contract> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    if (std::memcmp(magic, "DFCNTD01", 8) || reader.number() != 1)
        throw std::runtime_error("Unsupported native text-draw evidence");
    std::vector<Contract> result(reader.count(65536));
    uint32_t previous = 0;
    for (auto &entry : result) {
        entry = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.blob(), reader.blob()};
        if (!entry.reference || entry.reference <= previous || !entry.owner || !entry.callee || !entry.receiver ||
                entry.continuation > 256 || entry.original.size() != 5 || entry.original.front() != 0xe8 ||
                entry.text.empty() || entry.text.size() > 15 || std::any_of(entry.text.begin(), entry.text.end(),
                    [](unsigned char byte) { return byte < 32 || byte > 126; }))
            throw std::runtime_error("Invalid native text-draw contract");
        int32_t relative; std::memcpy(&relative, entry.original.data() + 1, 4);
        if (entry.reference + 5 + relative != entry.callee)
            throw std::runtime_error("Native text-draw callee differs from source bytes");
        previous = entry.reference;
    }
    reader.finish();
    return result;
}
inline bool rip(const hde64s &op) {
    return (op.flags & F_MODRM) && op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB) &&
        !op.p_67 && !op.p_seg;
}
inline unsigned reg(const hde64s &op) { return op.modrm_reg + (op.rex_r ? 8 : 0); }
inline unsigned rm(const hde64s &op) { return op.modrm_rm + (op.rex_b ? 8 : 0); }
inline uint32_t direct(const Instruction &instruction) {
    return instruction.decoded.opcode == 0xe8 ? instruction.address + instruction.decoded.len +
        static_cast<int32_t>(instruction.decoded.imm.imm32) : 0;
}
template<typename Image>
inline std::optional<int32_t> local(const Image &image, const Instruction &instruction,
                                   const frame_detail::TargetRbpFrame &frame) {
    if (instruction.decoded.p_seg) return {};
    const auto base = method_call_detail::memory_base(instruction.decoded);
    int32_t origin = 0;
    if (base == 4) {
        if (!frame_detail::stack_origin(image, instruction.address, origin)) return {};
    } else if (base == 5 && frame.valid && frame.origin_known && instruction.address >= frame.ready &&
               instruction.address < frame.end) origin = frame.rsp_offset;
    else return {};
    const auto value = int64_t(origin) + method_call_detail::displacement(instruction);
    if (value < INT32_MIN || value > INT32_MAX) return {};
    return static_cast<int32_t>(value);
}
struct Value {
    std::array<int, 16> bytes;
    Value() { bytes.fill(-1); }
};
struct Text { uint32_t receiver = 0; std::vector<unsigned char> bytes; };
inline std::vector<unsigned char> code_bytes(std::string_view text) {
    std::vector<unsigned char> result;
    const auto digit = [](char value) { return value <= '9' ? value - '0' : value - 'a' + 10; };
    for (size_t at = 0; at + 1 < text.size(); at += 2) result.push_back(static_cast<unsigned char>(digit(text[at]) * 16 + digit(text[at + 1])));
    return result;
}
template<typename Image>
inline unsigned short_constructor(const Image &image, uint32_t target, unsigned depth = 0) {
    if (depth > 1) return 0;
    const auto function = frame_detail::function_at(image, target);
    if (function == image.functions.end() || function->begin != target) return 0;
    static const auto length = code_bytes("48896c2410488974241848897c242041564883ec2048bdffffffffffffff7f498bf84c8bf2488bf14c3bc50f87810000004983f80f77174c89411048c741180f000000e800000000c6043700eb4e");
    static const auto nul = code_bytes("40534883ec2033c00f57c00f110148894110488bd94889411849c7c0ffffffff49ffc04238040275f7e800000000488bc34883c4205bc3");
    static const auto epilogue = code_bytes("488b6c2438488b742440488b7c24484883c420415ec3");
    const auto matches = [&](const auto &expected, size_t relocation) -> const unsigned char * {
        if (uint64_t(target) + expected.size() > function->end) return nullptr;
        const auto *raw = image.read(target, expected.size()); if (!raw) return nullptr;
        for (size_t at = 0; at < expected.size(); ++at)
            if (!(at >= relocation && at < relocation + 4) && raw[at] != expected[at]) return nullptr;
        return raw;
    };
    if (const auto *raw = matches(length, 0x44)) {
        int32_t relative; std::memcpy(&relative, raw + 0x44, 4);
        const auto copy = target + 0x48 + relative;
        const auto *thunk = image.read(copy, 6);
        const auto imported = image.import_slot("vcruntime140.dll", "memcpy");
        const auto finish = int64_t(target) + length.size() + static_cast<int8_t>(raw[length.size() - 1]);
        if (thunk && thunk[0] == 0xff && thunk[1] == 0x25 && imported && finish >= target &&
                finish + epilogue.size() <= function->end) {
            std::memcpy(&relative, thunk + 2, 4);
            const auto *last = image.read(static_cast<uint32_t>(finish), epilogue.size());
            if (int64_t(copy) + 6 + relative == imported && last && std::equal(epilogue.begin(), epilogue.end(), last)) return 1;
        }
    }
    if (const auto *raw = matches(nul, 0x2a)) {
        int32_t relative; std::memcpy(&relative, raw + 0x2a, 4);
        if (short_constructor(image, target + 0x2e + relative, depth + 1) == 1) return 2;
    }
    return 0;
}
template<typename Image>
inline std::vector<unsigned char> constructed_text(const Image &image, const std::vector<Instruction> &code,
        size_t call, const std::set<uint32_t> &entries, int32_t output, const frame_detail::TargetRbpFrame &frame) {
    const auto target = direct(code[call]); if (!target) return {};
    const auto kind = short_constructor(image, target); if (!kind) return {};
    std::optional<int32_t> object;
    uint32_t literal = 0, length = 0;
    bool seen_object = false, seen_literal = false, seen_length = false;
    for (size_t distance = 1; distance <= 16 && distance <= call; ++distance) {
        const auto &instruction = code[call - distance]; const auto &op = instruction.decoded;
        if (instruction.address + op.len != code[call - distance + 1].address || method_call_detail::boundary(op)) break;
        if (!seen_object && writes_gpr(op, 1)) {
            seen_object = true;
            if (op.opcode == 0x8d && op.rex_w && reg(op) == 1) object = local(image, instruction, frame);
        }
        if (!seen_literal && writes_gpr(op, 2)) {
            seen_literal = true;
            if (op.opcode == 0x8d && op.rex_w && reg(op) == 2 && rip(op))
                literal = instruction.address + op.len + static_cast<int32_t>(op.disp.disp32);
        }
        if (!seen_length && writes_gpr(op, 8)) {
            seen_length = true;
            if (op.opcode == 0xb8 && op.rex_b && !op.rex_w && !op.p_66) length = op.imm.imm32;
        }
        if (entries.count(instruction.address)) break;
    }
    if (!object || *object != output || !literal || (kind == 1 && (!length || length > 15))) return {};
    const auto count = kind == 1 ? length : 16;
    const auto *section = image.section(literal, count); const auto *bytes = image.read(literal, count);
    if (!section || (section->flags & (Image::execute_flag | Image::write_flag)) || !bytes) return {};
    if (kind == 2) {
        const auto *zero = std::find(bytes, bytes + 16, static_cast<unsigned char>(0));
        if (zero == bytes + 16) return {};
        length = static_cast<uint32_t>(zero - bytes);
    }
    if (!length || length > 15 || std::any_of(bytes, bytes + length, [](unsigned char value) { return value < 32 || value > 126; })) return {};
    return {bytes, bytes + length};
}
template<typename Image>
inline Text constant_text(const Image &image, const std::vector<Instruction> &code, size_t call,
        const std::set<uint32_t> &entries, const frame_detail::TargetRbpFrame &frame) {
    std::optional<int32_t> output;
    uint32_t receiver = 0;
    for (size_t distance = 1; distance <= 16 && distance <= call; ++distance) {
        const auto &instruction = code[call - distance]; const auto &op = instruction.decoded;
        if (instruction.address + op.len != code[call - distance + 1].address) break;
        if (method_call_detail::boundary(op)) break;
        if (!output && writes_gpr(op, 2)) {
            if (op.opcode != 0x8d || !op.rex_w || reg(op) != 2) return {};
            output = local(image, instruction, frame);
            if (!output) return {};
        }
        if (!receiver && writes_gpr(op, 1)) {
            if (op.opcode != 0x8d || !op.rex_w || reg(op) != 1 || !rip(op)) return {};
            receiver = instruction.address + op.len + static_cast<int32_t>(op.disp.disp32);
        }
        if (entries.count(instruction.address)) break;
    }
    if (!output || !receiver) return {};
    size_t begin = call;
    while (begin && call - begin < 128 && !entries.count(code[begin].address)) {
        const auto &previous = code[begin - 1];
        if (method_call_detail::boundary(previous.decoded) || previous.decoded.opcode == 0xcc ||
                previous.address + previous.decoded.len != code[begin].address) break;
        --begin;
    }
    std::array<Value, 16> gpr, xmm;
    std::array<int, 32> object; object.fill(-1);
    if (begin && !entries.count(code[begin].address)) {
        const auto text = constructed_text(image, code, begin - 1, entries, *output, frame);
        if (!text.empty()) {
            std::copy(text.begin(), text.end(), object.begin()); object[text.size()] = 0;
            for (size_t at = 0; at < 8; ++at) {
                object[16 + at] = (uint64_t(text.size()) >> (at * 8)) & 255;
                object[24 + at] = at ? 0 : 15;
            }
        }
    }
    const auto constant = [](uint64_t value, unsigned width) {
        Value result;
        for (unsigned at = 0; at < width; ++at) result.bytes[at] = (value >> (at * 8)) & 255;
        return result;
    };
    const auto low = [](const Value &value, unsigned width) {
        Value result;
        for (unsigned at = 0; at < width; ++at) result.bytes[at] = value.bytes[at];
        return result;
    };
    const auto immutable = [&](const Instruction &instruction, unsigned width) {
        Value result;
        if (!rip(instruction.decoded) || !width || width > 16) return result;
        const auto address = instruction.address + instruction.decoded.len +
            static_cast<int32_t>(instruction.decoded.disp.disp32);
        const auto *section = image.section(address, width); const auto *bytes = image.read(address, width);
        if (section && !(section->flags & (Image::execute_flag | Image::write_flag)) && bytes)
            for (unsigned at = 0; at < width; ++at) result.bytes[at] = bytes[at];
        return result;
    };
    for (size_t index = begin; index < call; ++index) {
        const auto &instruction = code[index]; const auto &op = instruction.decoded;
        if (writes_gpr(op, 4)) return {};
        if ((op.opcode >= 0xa2 && op.opcode <= 0xa5) || op.opcode == 0xaa || op.opcode == 0xab ||
                op.opcode == 0x6c || op.opcode == 0x6d) {
            // String/moffs stores have no ModRM address to check for overlap.
            object.fill(-1); continue;
        }
        const auto old_gpr = gpr, old_xmm = xmm;
        for (unsigned value = 0; value < 16; ++value) if (writes_gpr(op, value)) gpr[value] = {};
        const auto width = op.rex_w ? 8u : op.p_66 ? 2u : 4u;
        const bool memory = (op.flags & F_MODRM) && op.modrm_mod != 3;
        if (op.opcode >= 0xb8 && op.opcode <= 0xbf) {
            const auto destination = op.opcode - 0xb8 + (op.rex_b ? 8 : 0);
            gpr[destination] = constant(op.rex_w ? op.imm.imm64 : op.p_66 ? op.imm.imm16 : op.imm.imm32, width);
            if (width == 4) for (unsigned at = 4; at < 8; ++at) gpr[destination].bytes[at] = 0;
        } else if ((op.opcode == 0x31 || op.opcode == 0x33) && op.modrm_mod == 3 && reg(op) == rm(op)) {
            gpr[reg(op)] = constant(0, width == 4 ? 8 : width);
        } else if (op.opcode == 0x8b || op.opcode == 0x89) {
            if (!memory) gpr[op.opcode == 0x8b ? reg(op) : rm(op)] =
                low(old_gpr[op.opcode == 0x8b ? rm(op) : reg(op)], width);
            else if (op.opcode == 0x8b) gpr[reg(op)] = immutable(instruction, width);
            if ((!memory || op.opcode == 0x8b) && width == 4) {
                const auto destination = op.opcode == 0x8b ? reg(op) : rm(op);
                for (unsigned at = 4; at < 8; ++at) gpr[destination].bytes[at] = 0;
            }
        } else if (op.opcode == 0x0f && (op.opcode2 == 0xb6 || op.opcode2 == 0xb7)) {
            const auto loaded = op.opcode2 == 0xb6 ? 1u : 2u;
            gpr[reg(op)] = memory ? immutable(instruction, loaded) : low(old_gpr[rm(op)], loaded);
            for (unsigned at = loaded; at < (width == 4 ? 8 : width); ++at) gpr[reg(op)].bytes[at] = 0;
        }
        bool simd_store = false;
        unsigned simd_width = 0;
        if (op.opcode == 0x0f) {
            const auto second = op.opcode2;
            if ((second == 0x57 || (second == 0xef && op.p_66)) && op.modrm_mod == 3 && reg(op) == rm(op))
                xmm[reg(op)].bytes.fill(0);
            else if (second == 0x10 || second == 0x28 || (second == 0x6f && (op.p_66 || op.p_rep == 0xf3))) {
                simd_width = access_width(op);
                xmm[reg(op)] = memory ? immutable(instruction, simd_width) : old_xmm[rm(op)];
                for (unsigned at = simd_width; at < 16; ++at) xmm[reg(op)].bytes[at] = -1;
            } else if (second == 0x11 || second == 0x29 || (second == 0x7f && (op.p_66 || op.p_rep == 0xf3))) {
                simd_width = access_width(op); simd_store = memory;
                if (!memory) xmm[rm(op)] = low(old_xmm[reg(op)], simd_width);
            } else if (second != 0xb6 && second != 0xb7 && second != 0x1f) {
                // Unclassified SIMD transformations cannot preserve known
                // bytes merely because they use the same register number.
                for (auto &value : xmm) value = {};
            }
        }
        if (!memory || op.opcode == 0x8d || frame_member_detail::reads_memory_only(op)) continue;
        const auto destination = local(image, instruction, frame);
        if (!destination) {
            if (!rip(op)) object.fill(-1);
            continue;
        }
        const auto offset = int64_t(*destination) - *output;
        const auto stored_width = simd_store ? simd_width : access_width(op);
        if (!stored_width || stored_width > 16) { object.fill(-1); continue; }
        if (offset >= 32 || offset + stored_width <= 0) continue;
        Value value;
        if (op.opcode == 0x89 || (op.opcode == 0x88 && (op.rex || reg(op) < 4))) value = old_gpr[reg(op)];
        else if (op.opcode == 0xc6 && !op.modrm_reg) value = constant(op.imm.imm8, 1);
        else if (op.opcode == 0xc7 && !op.modrm_reg) value = constant(op.rex_w ?
            static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(op.imm.imm32))) :
            op.p_66 ? op.imm.imm16 : op.imm.imm32, stored_width);
        else if (simd_store) value = old_xmm[reg(op)];
        for (auto at = (std::max)(int64_t(0), offset); at < (std::min)(int64_t(32), offset + stored_width); ++at)
            object[at] = value.bytes[at - offset];
    }
    uint64_t size = 0, capacity = 0;
    for (unsigned at = 0; at < 8; ++at) {
        if (object[16 + at] < 0 || object[24 + at] < 0) return {};
        size |= uint64_t(object[16 + at]) << (at * 8);
        capacity |= uint64_t(object[24 + at]) << (at * 8);
    }
    if (!size || size > 15 || capacity != 15 || object[size] != 0) return {};
    Text result{receiver, {}};
    for (unsigned at = 0; at < size; ++at) {
        if (object[at] < 32 || object[at] > 126) return {};
        result.bytes.push_back(static_cast<unsigned char>(object[at]));
    }
    return result;
}
} // namespace dfcn::pe_runtime::text_draw_detail

namespace dfcn::pe_runtime {
template<typename Image, typename Catalog>
inline void discover_text_draws(const Image &image, const Catalog &catalog, address_runtime::State &state,
        address_runtime::Progress report = {}) {
    using namespace text_draw_detail;
    struct Scope { std::vector<Instruction> code; std::set<uint32_t> entries; frame_detail::TargetRbpFrame frame; bool valid = true; };
    std::map<uint32_t, Scope> scopes;
    Bindings bindings; for (const auto &range : state.ranges) bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> changes; for (const auto &byte : state.bytes) changes.emplace(byte.address, byte);
    const auto mapped = [&](uint32_t reference) { const auto result = bindings.lookup(reference);
        return result ? result : resolve(state.function_owners, reference); };
    size_t recovered = 0, unresolved = 0, ambiguous = 0;
    for (const auto &entry : read(catalog.text_draws)) {
        const auto owner = resolve(state.function_owners, entry.owner), callee = mapped(entry.callee);
        const auto receiver = bindings.lookup(entry.receiver);
        if (!owner || !callee || !receiver) continue;
        if (!scopes.count(owner)) {
            auto &scope = scopes[owner]; scope.frame = frame_detail::target_rbp_frame(image, owner);
            for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
                std::vector<Instruction> code; DecodeFailure failure;
                if (!decode(image, begin, end, code, &scope.entries, &failure)) {
                    if (report && state.reported_caller_decode_failures.insert(owner).second) {
                        std::ostringstream message;
                        message << "Native text-draw scope rejected: owner=0x" << std::hex << owner
                            << " instruction=0x" << failure.address << " reason=" << failure.reason;
                        report(message.str());
                    }
                    scope.valid = false; scope.code.clear(); break;
                }
                scope.code.insert(scope.code.end(), std::make_move_iterator(code.begin()), std::make_move_iterator(code.end()));
            }
        }
        const auto &scope = scopes.at(owner); if (!scope.valid) continue;
        std::vector<size_t> candidates;
        for (size_t index = 0; index < scope.code.size(); ++index) if (direct(scope.code[index]) == callee) {
            const auto value = constant_text(image, scope.code, index, scope.entries, scope.frame);
            if (value.receiver == receiver && value.bytes == entry.text) candidates.push_back(index);
        }
        if (candidates.size() != 1) { ++unresolved; ambiguous += candidates.size() > 1; continue; }
        const auto index = candidates.front(); const auto &call = scope.code[index];
        if (!bindings.compatible(entry.reference, 5, call.address))
            throw std::runtime_error("Complete text value disagrees with a native draw address");
        recovered += bindings.add(entry.reference, 5, call.address);
        for (uint32_t at = 0; at < 5; ++at) if (entry.original[at] != call.bytes[at]) {
            const Byte value{entry.reference + at, entry.original[at], call.bytes[at]};
            const auto [old, added] = changes.emplace(value.address, value);
            if (!added && (old->second.reference != value.reference || old->second.native != value.native))
                throw std::runtime_error("Complete text value disagrees with native call bytes");
        }
        if (entry.continuation && index + 1 < scope.code.size() && scope.code[index + 1].address == call.address + 5) {
            if (!bindings.compatible(entry.reference + 5, 1, call.address + 5))
                throw std::runtime_error("Complete text value disagrees with native draw continuation");
            bindings.add(entry.reference + 5, 1, call.address + 5);
            const auto source = static_cast<unsigned char>(entry.continuation - 1), target = scope.code[index + 1].bytes.front();
            if (source != target) {
                const Byte value{entry.reference + 5, source, target};
                const auto [old, added] = changes.emplace(value.address, value);
                if (!added && (old->second.reference != source || old->second.native != target))
                    throw std::runtime_error("Complete text value disagrees with native continuation bytes");
            }
        }
    }
    state.ranges = bindings.export_ranges(); state.bytes.clear();
    for (const auto &[address, byte] : changes) { (void)address; state.bytes.push_back(byte); }
    if (report) report("Native discovery: " + std::to_string(recovered) + " calls proved by complete constant text values; " +
        std::to_string(unresolved) + " unmatched values, " + std::to_string(ambiguous) + " ambiguous values");
}
} // namespace dfcn::pe_runtime
