#pragma once
#include "native_chooser_feature_discovery.h"
#include "native_typed_member_discovery.h"
#include "native_bounded_argument_discovery.h"

namespace dfcn::pe_runtime::chooser_row_detail {
using namespace address_runtime;
using namespace display_decode;
using namespace inline_resize_detail;
using chooser_feature_detail::RowContract;

inline bool same_object(const Operation &a, const Operation &b) {
    return a.frame == b.frame && a.object == b.object;
}
inline uint32_t rip(const Instruction &row) {
    const auto &op = row.decoded;
    if (!(op.flags & F_MODRM) || op.modrm_mod || op.modrm_rm != 5 || (op.flags & F_SIB) || op.p_67) return 0;
    const auto value = int64_t(row.address) + op.len + static_cast<int32_t>(op.disp.disp32);
    return value > 0 && value <= UINT32_MAX ? static_cast<uint32_t>(value) : 0;
}
template<typename Image> inline bool imported(const Image &image, uint32_t address,
        std::string_view library, std::string_view symbol) {
    const auto slot = image.import_slot(std::string(library), std::string(symbol));
    if (!slot) return false;
    std::set<uint32_t> seen;
    for (unsigned depth = 0; address && depth < 8 && seen.insert(address).second; ++depth) {
        const auto *raw = image.read(address, 6); if (!raw) return false;
        int32_t delta = 0;
        if (raw[0] == 0xff && raw[1] == 0x25) {
            std::memcpy(&delta, raw + 2, 4);
            return int64_t(address) + 6 + delta == slot;
        }
        if (raw[0] != 0xe9) return false;
        std::memcpy(&delta, raw + 1, 4);
        const auto next = int64_t(address) + 5 + delta;
        if (next <= 0 || next > UINT32_MAX) return false;
        address = static_cast<uint32_t>(next);
    }
    return false;
}
template<typename Image> inline bool invalid_parameter(const Image &image, const Code &code, uint32_t address) {
    const auto found = code.find(address); if (found == code.end()) return false;
    const auto &op = found->second.decoded;
    const auto slot = image.import_slot("api-ms-win-crt-runtime-l1-1-0.dll", "_invalid_parameter_noinfo_noreturn");
    return slot && op.opcode == 0xff && op.modrm_reg == 2 && rip(found->second) == slot;
}
template<typename Image> inline bool literal_at(const Image &image, uint32_t address,
        const std::vector<unsigned char> &value, uint32_t offset, uint32_t width) {
    if (offset >= value.size() || width > value.size() - offset) return false;
    const auto *section = image.section(address, width); const auto *raw = image.read(address, width);
    return section && !(section->flags & (Image::execute_flag | 0x80000000u)) && raw &&
        !std::memcmp(raw, value.data() + offset, width);
}
template<typename Image, typename View>
inline bool read_only_lookup(const Image &image, View &view, uint32_t entry) {
    // A complete nullable-member / sorted-vector lookup. It consumes only
    // RCX, reads the two member pointers and ID, and returns a found pointer
    // or null. Its sole store saves RBX into its own newly allocated 8-byte
    // stack slot, restored on every path that changes RBX. There is no CALL,
    // tail transfer, output argument, global write or escaped stack pointer.
    // This certifies effects only; it grants no source/target entry mapping
    // and no formatter/name role. The actual owner still proves those roles.
    Pattern pattern{};
    pattern.raw = bounded_argument_detail::bytes(
        "4883ec084c8b99300100004d85db747a4d8b5b584d85db7471458b5b304183fbff7467"
        "488b15000000004533c948891c24488b1d00000000482bd348c1fa0383ea017837"
        "0f1f40000f1f840000000000428d040ad1f84863c84c8b04cb458b10453bd37419"
        "8d48ff0f4ecaffc0453bd38bd1440f4ec8443bc97ed54533c0488b1c24498bc0"
        "4883c408c333c04883c408c3");
    std::vector<Instruction> expected;
    const auto *graph = view.graph(entry);
    if (!graph || graph->owner != entry || graph->end != uint64_t(entry) + pattern.raw.size() ||
            !graph->flow.indirect_edges.empty() || !graph->flow.nonreturning_calls.empty() ||
            !method_call_detail::decode_pattern(pattern, expected) || graph->code.size() != expected.size()) return false;
    for (auto external : graph->external_entries) if (external != entry) return false;
    std::vector<uint32_t> vector_slots;
    for (const auto &row : expected) {
        const auto found = graph->code.find(entry + row.address);
        if (found == graph->code.end() || found->second.bytes.size() != row.bytes.size()) return false;
        const auto &actual = found->second;
        auto bytes = row.bytes;
        if (rip(row)) {
            const auto address = rip(actual);
            const auto *section = image.section(address, 8);
            // These are live vector slots, possibly in zero-initialized PE
            // data with no file bytes. Effect proof needs readable mapped
            // storage, not the runtime pointer values. Literal-byte proofs
            // elsewhere still require complete immutable file contents.
            if (!address || !section || !(section->flags & IMAGE_SCN_MEM_READ) ||
                    (section->flags & (Image::execute_flag | IMAGE_SCN_MEM_DISCARDABLE))) return false;
            const auto position = method_call_detail::displacement_position(row.decoded);
            if (method_call_detail::displacement_width(row.decoded) != 4 || position + 4 > bytes.size()) return false;
            std::copy_n(actual.bytes.begin() + position, 4, bytes.begin() + position);
            vector_slots.push_back(address);
        }
        if (bytes != actual.bytes) return false;
    }
    // Both loads must describe the same native vector, in end/begin order.
    return vector_slots.size() == 2 && uint64_t(vector_slots[1]) + 8 == vector_slots[0] &&
        image.section(vector_slots[1], 16);
}
// The complete strlen wrapper preserves RCX/RDX and forwards exactly the
// computed count in R8 to one real tail callee. A direct ptr/count call is
// equivalent only when its actual constant count is that literal's length.
// This does not infer append/assign semantics from the tail address.
template<typename Image> inline uint32_t cstring_tail(const Image &image, uint32_t wrapper) {
    static constexpr unsigned char prefix[]{0x49,0xc7,0xc0,0xff,0xff,0xff,0xff,
        0x66,0x0f,0x1f,0x84,0x00,0,0,0,0,0x49,0xff,0xc0,0x42,0x80,0x3c,0x02,0,0x75,0xf6,0xe9};
    const auto *raw = image.read(wrapper, sizeof(prefix) + 4);
    const auto *section = image.section(wrapper, sizeof(prefix) + 4);
    if (!raw || !section || !(section->flags & Image::execute_flag) || std::memcmp(raw, prefix, sizeof(prefix))) return 0;
    int32_t delta; std::memcpy(&delta, raw + sizeof(prefix), 4);
    const auto target = int64_t(wrapper) + sizeof(prefix) + 4 + delta;
    return target > 0 && target <= UINT32_MAX ? static_cast<uint32_t>(target) : 0;
}
template<typename Image> inline uint32_t resize_grow(const Image &image, uint32_t resize) {
    if (!string_resize_call(image, resize)) return 0;
    const auto *raw = image.read(resize + 28, 8);
    if (!raw || raw[0] != 0x48 || raw[1] != 0x2b || raw[2] != 0xd0 || raw[3] != 0xe9) return 0;
    int32_t delta; std::memcpy(&delta, raw + 4, 4);
    const auto target = int64_t(resize) + 36 + delta;
    return target > 0 && target <= UINT32_MAX ? static_cast<uint32_t>(target) : 0;
}
inline bool literal_argument(const Code &code, uint32_t call, const std::set<uint32_t> &entries,
        uint32_t &address) {
    auto at = code.find(call);
    for (unsigned count = 0; at != code.begin() && at != code.end() && count < 24; ++count) {
        if (entries.contains(at->first)) return false;
        const auto next = at--; const auto &row = at->second; const auto &op = row.decoded;
        if (at->first + op.len != next->first || op.opcode == 0xe8 ||
                method_call_detail::branch_destination(row) || (op.opcode == 0xff && op.modrm_reg >= 2)) return false;
        if (op.opcode == 0x8d && op.rex_w && reg(op) == 2) { address = rip(row); return address != 0; }
        if (writes_gpr(op, 2) || frame_detail::writes_rsp(op) || frame_detail::frame_writes_rbp(op)) return false;
    }
    return false;
}
template<typename Image> inline bool length_error(const Image &image, uint32_t address) {
    const auto *raw = image.read(address, 18);
    if (!raw || std::memcmp(raw, "\x48\x83\xec\x28\x48\x8d\x0d", 7) || raw[11] != 0xff || raw[12] != 0x15)
        return false;
    // The complete expression is 18 bytes: LEA's disp32, FF15's disp32, INT3.
    if (raw[17] != 0xcc) return false;
    int32_t delta; std::memcpy(&delta, raw + 13, 4);
    const auto slot = image.import_slot("msvcp140.dll", "?_Xlength_error@std@@YAXPEBD@Z");
    return slot && int64_t(address) + 17 + delta == slot;
}
template<typename Image, typename View, typename Bounds>
inline bool pointer_count_method(const Image &image, View &view, Bounds &bounds, uint32_t entry, unsigned kind) {
    // Full methods, not prefixes: every normal/error edge and all storage
    // effects are accounted for. The only incoming values consumed by either
    // body are RCX/string, RDX/read-only bytes and R8/count.
    const std::string_view assign =
        "48895c241048896c2418565741574883ec20488b6918498bf04c8bfa488bd94c3bc57721488bf94883fd0f7603488b3948897110488bcfe800000000c6043700e9a500000048bfffffffffffffff7f483bf70f87af000000488bce4c897424404883c90f483bcf771f488bd5488bc748d1ea482bc2483be8770e488d042a488bf9483bc8480f42f8488d4f01e8000000004c8bc648897310498bd748897b18488bc84c8bf0e80000000041c60436004883fd0f762d488b0b488d55014881fa0010000072184c8b41f84883c227492bc8488d41f84883f81f7726498bc8e8000000004c89334c8b742440488b6c2450488bc3488b5c24484883c420415f5f5ec3ff1500000000cce800000000cc";
    const std::string_view append =
        "48895c2418555657415541564883ec20488b6918498bf04c8b7110488bc5492bc64c8bea488bf94c3bc077294b8d040648894110488bc14883fd0f7603488b014a8d1c30488bcbe800000000c6043300e9f2000000"
        "48bbffffffffffffff7f488bc3492bc6483bc60f82ed0000004c896424504f8d2406498bcc4c897c24584883c90f483bcb771f488bd5488bc348d1ea482bc2483be8770e488d042a488bd9483bc8480f42d8488d4b01e800000000"
        "4c8967104c8bf848895f184d8bc6488bc84d8d24064883fd0f7654488b1f488bd3e8000000004c8bc6498bd5498bcce800000000488d550141c60434004881fa001000007218488b4bf84883c227482bd9488d43f84883f81f770d488bd9488bcbe800000000eb22ff1500000000cc"
        "488bd7e8000000004c8bc6498bd5498bcce80000000041c60434004c893f4c8b6424504c8b7c2458488b5c2460488bc74883c420415e415d5f5e5dc3e800000000cc";
    Pattern source{}; source.raw = bounded_argument_detail::bytes(kind == 1 ? append : assign);
    std::vector<Instruction> expected;
    const auto *graph = view.graph(entry);
    if (!graph || graph->owner != entry || graph->end != uint64_t(entry) + source.raw.size() ||
            !method_call_detail::decode_pattern(source, expected)) return false;
    for (auto external : graph->external_entries) if (external != entry) return false;
    unsigned calls = 0;
    for (const auto &row : expected) {
        const auto found = graph->code.find(entry + row.address); if (found == graph->code.end()) return false;
        const auto &actual = found->second; const auto &op = row.decoded;
        if (actual.bytes.size() != row.bytes.size()) return false;
        auto bytes = row.bytes;
        if (op.opcode == 0xe8) {
            const auto target = direct_target(actual); const auto index = calls++;
            const auto last = kind == 1 ? 7u : 4u;
            bool valid = false;
            if (index == 0) valid = imported(image, target, "vcruntime140.dll", "memmove");
            else if (index == 1) valid = bounds.valid_string_allocator(target);
            else if (index == (kind == 1 ? 4u : 3u)) valid = bounds.owned_heap_release(target);
            else if (index == last) valid = length_error(image, target);
            else if (index < last) valid = imported(image, target, "vcruntime140.dll", "memcpy");
            if (!valid) return false;
            std::copy_n(actual.bytes.begin() + 1, 4, bytes.begin() + 1);
        } else if (op.opcode == 0xff && op.modrm_reg == 2) {
            if (!invalid_parameter(image, graph->code, actual.address)) return false;
            std::copy_n(actual.bytes.begin() + 2, 4, bytes.begin() + 2);
        }
        if (bytes != actual.bytes) return false;
    }
    return calls == (kind == 1 ? 8u : 5u);
}

// Recognize a complete compiler expression, normalizing only its owned local
// displacement and unrelated frame reload slots. Branches, register roles,
// constants, all memory effects and calls are otherwise exact. Calls are
// certified independently; RIP data must be bytes of the source-owned literal.
// External conditional edges are only the named CRT nonreturning failure.
template<typename Image, typename Call>
inline uint32_t family(const Image &image, const Code &code, uint32_t start, std::string_view encoded,
        const Operation &object, const std::vector<unsigned char> &literal,
        const std::set<uint32_t> &unstructured_entries, Call call) {
    if (object.frame != 5 || object.object < INT8_MIN || object.object + 24 > INT8_MAX) return 0;
    const auto raw = bounded_argument_detail::bytes(encoded);
    Pattern pattern{}; pattern.raw = raw; pattern.reference = 0;
    std::vector<Instruction> expected;
    if (!method_call_detail::decode_pattern(pattern, expected)) return 0;
    const auto end = uint64_t(start) + raw.size(); if (end > UINT32_MAX) return 0;
    const auto entry = unstructured_entries.lower_bound(start);
    if (entry != unstructured_entries.end() && *entry < end) return 0;
    std::map<std::pair<uint32_t, int32_t>, std::pair<uint32_t, int32_t>> locals, inverse;
    unsigned calls = 0;
    for (const auto &source : expected) {
        const auto found = code.find(start + source.address); if (found == code.end()) return 0;
        const auto &native = found->second; const auto &op = source.decoded;
        if (native.decoded.len != op.len) return 0;
        auto bytes = source.bytes;
        const auto copy_operand = [&](unsigned position, unsigned width) {
            if (position + width > bytes.size()) return false;
            std::copy_n(native.bytes.begin() + position, width, bytes.begin() + position); return true;
        };
        const auto displacement = method_call_detail::displacement_position(op);
        const auto displacement_width = method_call_detail::displacement_width(op);
        if (op.opcode == 0xe8) {
            if (!call(calls++, direct_target(native)) || !copy_operand(1, 4)) return 0;
        } else if (const auto destination = method_call_detail::branch_destination(source)) {
            const auto target = method_call_detail::branch_destination(native);
            if (destination > raw.size()) {
                if (!invalid_parameter(image, code, target)) return 0;
                if (!copy_operand(op.len - ((op.flags & F_IMM8) ? 1u : 4u), (op.flags & F_IMM8) ? 1u : 4u)) return 0;
            } else if (target != start + destination) return 0;
        } else if (rip(source)) {
            const auto offset = static_cast<int32_t>(op.disp.disp32);
            const auto width = op.opcode == 0x8d ? static_cast<uint32_t>(literal.size()) : access_width(op);
            if (offset < 0 || width == UINT32_MAX || !literal_at(image, rip(native), literal, offset, width) ||
                    !copy_operand(displacement, displacement_width)) return 0;
        } else {
            uint32_t frame, native_frame; int32_t offset, native_offset;
            if (local(op, frame, offset)) {
                if (!local(native.decoded, native_frame, native_offset) || frame != native_frame) return 0;
                if (frame == 5 && offset >= -0x60 && offset < -0x40) {
                    if (native_offset != object.object + offset + 0x60) return 0;
                } else {
                    const auto key = std::pair{frame, offset}, value = std::pair{native_frame, native_offset};
                    const auto [left, inserted] = locals.emplace(key, value);
                    const auto [right, reverse] = inverse.emplace(value, key);
                    if (left->second != value || right->second != key) return 0;
                }
                if (!copy_operand(displacement, displacement_width)) return 0;
            }
        }
        if (bytes != native.bytes) return 0;
    }
    // No outside transfer can enter half an allocation, copy, or release.
    for (const auto &[address, instruction] : code) {
        const auto target = method_call_detail::branch_destination(instruction);
        if (target > start && target < end && (address < start || address >= end)) return 0;
    }
    return static_cast<uint32_t>(end);
}
template<typename Image> inline uint32_t initialized(const Image &image, const Code &code,
        uint32_t start, const Operation &object, const std::set<uint32_t> &unstructured_entries) {
    return family(image, code, start,
        "0f57c00f1145a048c745b00000000048c745b80f000000c645a000", object, {}, unstructured_entries,
        [](unsigned, uint32_t) { return false; });
}
template<typename Image, typename Bounds>
inline uint32_t assigned_literal(const Image &image, const Code &code, uint32_t start,
        const Operation &object, const std::vector<unsigned char> &literal,
        const std::set<uint32_t> &unstructured_entries, Bounds &bounds) {
    // Complete constant-19-byte assign: capacity arm copies into the current
    // SSO/heap buffer; allocation arm proves aligned allocator provenance,
    // writes all 19 source bytes and NUL, checks/frees the old heap allocation,
    // and transfers the new buffer to this same string. No branch is omitted.
    if (literal.size() != 20) return 0;
    return family(image, code, start,
        "488b45b84883f8137233488d5da04883f80f480f475da048c745b01300000041b813000000488d1500000000488bcbe800000000c6431300e9a6000000"
        "488b5db8488bcb48d1e9488bc6482bc1483bd87605488bfeeb10488d0419bf1f000000483bc7480f47f8488d4f01e800000000488bf0"
        "48c745b01300000048897db80f1005000000000f11000fb70d10000000668948100fb60d12000000884812c64013004883fb0f7632"
        "488d5301488b4da0488bc14881fa0010000072194883c227488b49f8482bc14883c0f84883f81f0f8769010000e800000000488b7c2470488975a0",
        object, literal, unstructured_entries, [&](unsigned index, uint32_t target) {
            if (index == 0) return imported(image, target, "vcruntime140.dll", "memmove");
            if (index == 1) return bounds.valid_string_allocator(target);
            return index == 2 && bounds.owned_heap_release(target);
        });
}
template<typename Image, typename Bounds>
inline uint32_t destroyed_inline(const Image &image, const Code &code, uint32_t start,
        const Operation &object, const std::set<uint32_t> &unstructured_entries, Bounds &bounds) {
    // This form consumes only the owned string's capacity and heap pointer.
    // Its short-string arm joins after free and the actual local reloads.
    const auto first = code.find(start); if (first == code.end()) return 0;
    auto branch = code.find(start + first->second.decoded.len);
    if (branch == code.end()) return 0;
    branch = code.find(branch->first + branch->second.decoded.len);
    if (branch == code.end() || branch->second.decoded.opcode != 0x76) return 0;
    const auto join = method_call_detail::branch_destination(branch->second);
    // The template's SSO continuation includes the two harmless reloads. They
    // are still matched in full, with independent local-slot correspondence.
    const auto end = family(image, code, start,
        "488b55b84883fa0f763648ffc2488b4da0488bc14881fa0010000072154883c227488b49f8482bc14883c0f84883f81f7750"
        "e800000000448b4c24484c8b5d90", object, {}, unstructured_entries,
        [&](unsigned index, uint32_t target) { return index == 0 && bounds.owned_heap_release(target); });
    return end && end == join ? end : 0;
}
} // namespace dfcn::pe_runtime::chooser_row_detail
