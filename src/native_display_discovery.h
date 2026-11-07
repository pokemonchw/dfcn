#pragma once
#include "native_address_scan.h"
#include <windows.h>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <initializer_list>

namespace dfcn::display_decode {
#include "../compat/hde64/hde64.c"
struct Instruction { uint32_t address; hde64s decoded; std::vector<unsigned char> bytes; };
inline uint32_t immediate_width(const hde64s &value) {
    return ((value.flags & F_IMM8) ? 1 : 0) + ((value.flags & F_IMM16) ? 2 : 0) +
        ((value.flags & F_IMM32) ? 4 : 0) + ((value.flags & F_IMM64) ? 8 : 0);
}
inline uint32_t access_width(const hde64s &value) {
    const auto op = value.opcode;
    if (op == 0x8d) return 0;
    if (op == 0x0f) {
        const auto second = value.opcode2;
        if ((second >= 0x90 && second <= 0x9f) || second == 0xb6 || second == 0xbe) return 1;
        if (second == 0xb7 || second == 0xbf) return 2;
        if (second == 0x10 || second == 0x11) return value.p_rep == 0xf3 ? 4 : value.p_rep == 0xf2 ? 8 : 16;
        if (second == 0x28 || second == 0x29) return 16;
        if (second == 0x6f || second == 0x7f) return value.p_66 || value.p_rep == 0xf3 ? 16 : 8;
        if (second == 0x7e && value.p_rep == 0xf3) return 8;
        if (second == 0x6e || second == 0x7e) return value.rex_w ? 8 : 4;
        if (second == 0xb0 || second == 0xc0) return 1;
        if ((second >= 0x40 && second <= 0x4f) || second == 0xaf || second == 0xb1 ||
                second == 0xc1) return value.rex_w ? 8 : value.p_66 ? 2 : 4;
        return UINT32_MAX;
    }
    if ((op <= 0x3b && (op & 7) <= 3) || op == 0x63 || (op >= 0x80 && op <= 0x8b) ||
            op == 0xc6 || op == 0xc7 || op == 0xf6 || op == 0xf7 || op == 0xfe) {
        if (op == 0x63) return 4;
        if (!(op & 1) && op != 0x82) return 1;
        return value.rex_w ? 8 : value.p_66 ? 2 : 4;
    }
    return UINT32_MAX;
}
inline bool group_operand(const hde64s &value) {
    const auto op = value.opcode;
    return (op >= 0x80 && op <= 0x83) || (op >= 0xc0 && op <= 0xc1) ||
        op == 0xc6 || op == 0xc7 || (op >= 0xd0 && op <= 0xd3) ||
        op == 0xf6 || op == 0xf7 || op == 0xfe || op == 0xff ||
        (op == 0x0f && ((value.opcode2 >= 0x71 && value.opcode2 <= 0x73) || value.opcode2 == 0xba));
}
inline bool byte_register_operand(const hde64s &value) {
    if (value.opcode == 0x0f) return value.opcode2 == 0xb0 || value.opcode2 == 0xc0;
    return !group_operand(value) && access_width(value) == 1;
}

inline bool writes_gpr(const hde64s &op, unsigned wanted) {
    const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
    const bool rex = (op.flags & F_PREFIX_REX) != 0;
    const auto byte = [&](unsigned value) { return !rex && value >= 4 && value < 8 ? value - 4 : value; };
    const bool destination = op.modrm_mod == 3 && rm == wanted;
    const bool byte_destination = op.modrm_mod == 3 && byte(rm) == wanted;
    const auto code = op.opcode;
    if (code == 0xe8 || (code == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 3)))
        return wanted <= 2 || (wanted >= 8 && wanted <= 11); // Windows x64 call-clobbered GPRs.
    if (code >= 0x50 && code <= 0x5f)
        return wanted == 4 || (code >= 0x58 && code - 0x58 + (op.rex_b ? 8 : 0) == wanted);
    if (code == 0x68 || code == 0x6a || code == 0x9c || code == 0x9d || code == 0xc2 || code == 0xc3) return wanted == 4;
    if (code == 0xc8 || code == 0xc9) return wanted == 4 || wanted == 5;
    if (code == 0x98) return wanted == 0;
    if (code == 0x99) return wanted == 2;
    if (code >= 0x90 && code <= 0x97)
        return (code != 0x90 || op.rex_b) ? wanted == 0 || code - 0x90 + (op.rex_b ? 8 : 0) == wanted : false;
    if (code >= 0xb0 && code <= 0xb7) return byte(code - 0xb0 + (op.rex_b ? 8 : 0)) == wanted;
    if (code >= 0xb8 && code <= 0xbf) return code - 0xb8 + (op.rex_b ? 8 : 0) == wanted;
    if (code >= 0xe0 && code <= 0xe2) return wanted == 1;
    if (code == 0xe3 || code == 0xe9 || code == 0xeb || code == 0xcc || code == 0x9b || code == 0x9e ||
            code == 0xf5 || (code >= 0xf8 && code <= 0xfd) || (code >= 0x70 && code <= 0x7f)) return false;
    if (code == 0x9f || code == 0xa0 || code == 0xa1) return wanted == 0;
    if (code == 0xa2 || code == 0xa3 || code == 0xa8 || code == 0xa9) return false;
    if ((code >= 0xa4 && code <= 0xa7) || (code >= 0xaa && code <= 0xaf))
        return (op.p_rep && wanted == 1) || (wanted == 6 && (code <= 0xa7 || code == 0xac || code == 0xad)) ||
            (wanted == 7 && (code <= 0xab || code >= 0xae)) || (wanted == 0 && (code == 0xac || code == 0xad));
    if (code <= 0x3d && (code & 7) >= 4 && (code & 7) <= 5) return code < 0x38 && wanted == 0;
    if (!(op.flags & F_MODRM)) {
        if (code == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) return false;
        if (code == 0x0f && op.opcode2 >= 0xc8 && op.opcode2 <= 0xcf)
            return op.opcode2 - 0xc8 + (op.rex_b ? 8 : 0) == wanted;
        return true;
    }
    if (code <= 0x3b && (code & 7) <= 3)
        return code >= 0x38 ? false : code & 2 ? ((code & 1) ? reg == wanted : byte(reg) == wanted) :
            ((code & 1) ? destination : byte_destination);
    if (code == 0x63 || code == 0x69 || code == 0x6b || code == 0x8b || code == 0x8d) return reg == wanted;
    if (code == 0x8a) return byte(reg) == wanted;
    if (code == 0x88 || code == 0xc6) return byte_destination;
    if (code == 0x89 || code == 0x8c || code == 0x8f || code == 0xc7) return destination;
    if (code == 0x86) return byte_destination || byte(reg) == wanted;
    if (code == 0x87) return destination || reg == wanted;
    if (code >= 0x80 && code <= 0x83)
        return op.modrm_reg != 7 && ((code == 0x80 || code == 0x82) ? byte_destination : destination);
    if (code == 0x84 || code == 0x85 || code == 0x8e) return false;
    if (code == 0xc0 || code == 0xd0 || code == 0xd2) return byte_destination;
    if (code == 0xc1 || code == 0xd1 || code == 0xd3) return destination;
    if (code == 0xf6 || code == 0xf7)
        return op.modrm_reg >= 4 ? wanted == 0 || (code == 0xf7 && wanted == 2) :
            (op.modrm_reg == 2 || op.modrm_reg == 3) && (code == 0xf6 ? byte_destination : destination);
    if (code == 0xfe || code == 0xff) return op.modrm_reg <= 1 && (code == 0xfe ? byte_destination : destination);
    if (code >= 0xd8 && code <= 0xdf) return code == 0xdf && op.modrm == 0xe0 && wanted == 0;
    if (code != 0x0f) return true;
    const auto second = op.opcode2;
    if ((second >= 0x40 && second <= 0x4f) || second == 0xaf || second == 0xb6 || second == 0xb7 ||
            second == 0xb8 || second == 0xbc || second == 0xbd || second == 0xbe || second == 0xbf ||
            second == 0x2c || second == 0x2d || second == 0x50 || second == 0xc5 || second == 0xd7) return reg == wanted;
    if (second >= 0x90 && second <= 0x9f) return byte_destination;
    if (second == 0x7e) return op.p_rep != 0xf3 && destination;
    if (second == 0xb0 || second == 0xc0) return byte_destination || (second == 0xc0 ? byte(reg) == wanted : wanted == 0);
    if (second == 0xb1 || second == 0xc1) return destination || (second == 0xc1 ? reg == wanted : wanted == 0);
    if (second == 0xa4 || second == 0xa5 || second == 0xab || second == 0xac || second == 0xad ||
            second == 0xb3 || second == 0xbb) return destination;
    if (second == 0xba) return op.modrm_reg >= 5 && destination;
    if (second == 0xc7) return (op.modrm_reg == 1 && (wanted == 0 || wanted == 2)) ||
        (op.modrm_reg >= 6 && destination);
    if (second == 0x1f || second == 0xa3) return false;
    if ((second >= 0x10 && second <= 0x17) || (second >= 0x28 && second <= 0x2f) ||
            (second >= 0x51 && second <= 0x76) || second == 0x7c || second == 0x7d || second == 0x7f ||
            second == 0xc2 || second == 0xc4 || second == 0xc6 || second >= 0xd0) return false;
    return true;
}
struct DecodeFailure { uint32_t address = 0; const char *reason = ""; unsigned reg = 0; };
struct ControlFlow {
    // Populated only after the complete region has passed switch/CFG proof.
    std::map<uint32_t, std::vector<uint32_t>> indirect_edges;
    std::set<uint32_t> nonreturning_calls;
    std::map<uint32_t, uint32_t> data_ranges;
    std::map<uint32_t, std::vector<uint32_t>> rva_tables;
};
inline bool memory_read_only(const hde64s &op) {
    const auto code = op.opcode;
    if (code == 0x8a || code == 0x8b || code == 0x63 || code == 0x69 || code == 0x6b ||
            code == 0x38 || code == 0x39 || code == 0x3a || code == 0x3b || code == 0x84 || code == 0x85) return true;
    if (code <= 0x33 && (code & 7) >= 2 && (code & 7) <= 3) return true;
    if (code >= 0x80 && code <= 0x83) return op.modrm_reg == 7;
    if (code == 0xf6 || code == 0xf7) return op.modrm_reg <= 1 || op.modrm_reg >= 4;
    if (code == 0xff) return op.modrm_reg >= 2;
    if (code != 0x0f) return false;
    const auto second = op.opcode2;
    return (second >= 0x40 && second <= 0x4f) || second == 0xb6 || second == 0xb7 ||
        second == 0xbe || second == 0xbf || second == 0xaf || second == 0xbc || second == 0xbd ||
        second == 0x10 || second == 0x12 || second == 0x14 || second == 0x15 || second == 0x16 ||
        second == 0x28 || second == 0x2a || second == 0x2c || second == 0x2d || second == 0x2e || second == 0x2f ||
        (second >= 0x51 && second <= 0x6f) || (second == 0x7e && op.p_rep == 0xf3) || second == 0x1f;
}
template<typename Image>
inline bool rbp_from_body_rsp(const Image &image, uint32_t entry, int32_t &delta) {
    const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), entry,
        [](const auto &value, uint32_t address) { return value.begin < address; });
    if (function == image.functions.end() || function->begin != entry) return false;
    const auto *header = image.read(function->unwind, 4);
    if (!header || (header[0] & 7) != 1 || (header[0] & (4 << 3)) || !header[1] ||
            uint64_t(entry) + header[1] > function->end) return false;
    uint32_t alias = 0;
    int32_t displacement = 0;
    for (uint32_t address = entry; address < entry + header[1];) {
        const auto available = (std::min)(uint32_t(15), entry + header[1] - address);
        const auto *bytes = image.read(address, available);
        if (!bytes) return false;
        unsigned char bounded[32]{}; std::memcpy(bounded, bytes, available);
        hde64s op{}; hde64_disasm(bounded, &op);
        if (!op.len || op.len > available || (op.flags & F_ERROR)) return false;
        const bool lea = op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_reg == 5 && !op.rex_r &&
            op.modrm_mod != 3 && (op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b && op.sib_index == 4 && !op.rex_x;
        if (lea) {
            if (alias) return false;
            alias = address;
            displacement = op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
                op.flags & F_DISP8 ? int32_t(static_cast<int8_t>(op.disp.disp8)) : 0;
        } else if (alias && writes_gpr(op, 5)) return false;
        if ((op.opcode >= 0x70 && op.opcode <= 0x7f) || (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
                op.opcode == 0xe9 || op.opcode == 0xeb || op.opcode == 0xc2 || op.opcode == 0xc3 ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
                (op.opcode == 0xff && op.modrm_reg >= 4)) return false;
        address += op.len;
    }
    if (!alias) return false;
    const uint32_t count = header[2];
    const auto *codes = image.read(function->unwind + 4, count * 2);
    if (!codes && count) return false;
    int64_t total = 0, before = 0;
    for (uint32_t at = 0; at < count;) {
        const auto operation = codes[at * 2 + 1] & 15, info = codes[at * 2 + 1] >> 4;
        uint32_t slots = 1, bytes = 0;
        if (!operation) bytes = 8;
        else if (operation == 1) {
            slots = !info ? 2 : info == 1 ? 3 : 0;
            if (!slots || at + slots > count) return false;
            if (!info) { uint16_t value; std::memcpy(&value, codes + at * 2 + 2, 2); bytes = uint32_t(value) * 8; }
            else std::memcpy(&bytes, codes + at * 2 + 2, 4);
        } else if (operation == 2) bytes = info * 8 + 8;
        else if (operation == 3) { if (info) return false; }
        else if (operation == 4 || operation == 8) slots = 2;
        else if (operation == 5 || operation == 9) slots = 3;
        else return false;
        if (at + slots > count || codes[at * 2] > header[1]) return false;
        total += bytes;
        if (codes[at * 2] <= alias - entry) before += bytes;
        at += slots;
    }
    const auto value = int64_t(displacement) + total - before;
    if (value < INT32_MIN || value > INT32_MAX) return false;
    delta = static_cast<int32_t>(value); return true;
}
template<typename Image>
inline bool throws_length_error(const Image &image, uint32_t entry, uint32_t import_slot) {
    if (!import_slot) return false;
    const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), entry,
        [](const auto &value, uint32_t address) { return value.begin < address; });
    if (function == image.functions.end() || function->begin != entry ||
            (function->owner ? function->owner : function->begin) != entry) return false;
    // Recognize the actual straight-line MSVC wrapper, rather than declaring
    // an arbitrary call before a table to be nonreturning. The imported
    // _Xlength_error contract always throws; no branch may bypass that call.
    for (uint32_t address = entry; address < function->end && address - entry < 128;) {
        const auto available = (std::min)(uint32_t(15), function->end - address);
        const auto *bytes = image.read(address, available);
        if (!bytes) return false;
        unsigned char bounded[32]{};
        std::memcpy(bounded, bytes, available);
        hde64s op{}; hde64_disasm(bounded, &op);
        if (!op.len || op.len > available || (op.flags & F_ERROR) || op.p_67 || op.p_lock) return false;
        if (op.opcode == 0xff && (op.modrm_reg == 2 || op.modrm_reg == 4) &&
                op.modrm_mod == 0 && op.modrm_rm == 5)
            return int64_t(address) + op.len + static_cast<int32_t>(op.disp.disp32) == import_slot;
        const bool setup = op.opcode == 0x8d || op.opcode == 0x89 || op.opcode == 0x8b ||
            (op.opcode >= 0xb8 && op.opcode <= 0xbf) || op.opcode == 0x90 ||
            (op.opcode == 0x0f && op.opcode2 == 0x1f) ||
            ((op.opcode == 0x81 || op.opcode == 0x83) && op.rex_w && op.modrm == 0xec && !op.rex_b);
        if (!setup) return false;
        address += op.len;
    }
    return false;
}
// Complete x64 CRT cookie-failure family. Every relocation below is checked
// against an actual named import, a complete callee, or the same static error
// record/context. No exception dispatcher or parent-frame address is forwarded
// to the OS context helper. Both branches terminate this process: INT 29, or
// GetCurrentProcess -> TerminateProcess after the default exception filter.
template<typename Image>
inline bool gs_cookie_failure(const Image &image, uint32_t failure) {
    const auto exact = [&](uint32_t address, const char *expected, size_t size) {
        const auto *raw = image.read(address, size);
        return raw && !std::memcmp(raw, expected, size);
    };
    const auto family = [&](uint32_t address, const char *expected, size_t size,
            std::initializer_list<uint32_t> operands, const char *unwind, size_t unwind_size) {
        const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), address,
            [](const auto &part, uint32_t point) { return part.begin < point; });
        if (!address || function == image.functions.end() || function->begin != address ||
                function->end != uint64_t(address) + size || (function->owner && function->owner != address) ||
                !exact(function->unwind, unwind, unwind_size)) return false;
        const auto *raw = image.read(address, size);
        if (!raw) return false;
        for (size_t i = 0; i < size; ++i) {
            bool operand = false;
            for (const auto offset : operands) if (i >= offset && i < uint64_t(offset) + 4) operand = true;
            if (!operand && raw[i] != static_cast<unsigned char>(expected[i])) return false;
        }
        return true;
    };
    const auto target = [&](uint32_t address, uint32_t operand, uint32_t after) {
        const auto *raw = image.read(address + operand, 4);
        if (!raw) return uint32_t(0);
        int32_t displacement; std::memcpy(&displacement, raw, 4);
        const auto result = int64_t(address) + after + displacement;
        return result > 0 && result < image.size ? static_cast<uint32_t>(result) : 0u;
    };
    const auto imported = [&](uint32_t address, uint32_t operand, uint32_t after, const char *symbol) {
        const auto slot = image.import_slot("KERNEL32.dll", symbol);
        return slot && target(address, operand, after) == slot;
    };
    const auto writable = [&](uint32_t address, size_t size) {
        const auto *section = address ? image.section(address, size) : nullptr;
        return section && (section->flags & Image::write_flag) && !(section->flags & Image::execute_flag);
    };
    static constexpr char report[] =
        "\x48\x89\x4c\x24\x08\x48\x83\xec\x38\xb9\x17\x00\x00\x00\xff\x15\x00\x00\x00\x00"
        "\x85\xc0\x74\x07\xb9\x02\x00\x00\x00\xcd\x29\x48\x8d\x0d\x00\x00\x00\x00\xe8\x00\x00\x00\x00"
        "\x48\x8b\x44\x24\x38\x48\x89\x05\x00\x00\x00\x00\x48\x8d\x44\x24\x38\x48\x83\xc0\x08"
        "\x48\x89\x05\x00\x00\x00\x00\x48\x8b\x05\x00\x00\x00\x00\x48\x89\x05\x00\x00\x00\x00"
        "\x48\x8b\x44\x24\x40\x48\x89\x05\x00\x00\x00\x00\xc7\x05\x00\x00\x00\x00\x09\x04\x00\xc0"
        "\xc7\x05\x00\x00\x00\x00\x01\x00\x00\x00\xc7\x05\x00\x00\x00\x00\x01\x00\x00\x00"
        "\xb8\x08\x00\x00\x00\x48\x6b\xc0\x00\x48\x8d\x0d\x00\x00\x00\x00\x48\xc7\x04\x01\x02\x00\x00\x00"
        "\xb8\x08\x00\x00\x00\x48\x6b\xc0\x00\x48\x8b\x0d\x00\x00\x00\x00\x48\x89\x4c\x04\x20"
        "\xb8\x08\x00\x00\x00\x48\x6b\xc0\x01\x48\x8b\x0d\x00\x00\x00\x00\x48\x89\x4c\x04\x20"
        "\x48\x8d\x0d\x00\x00\x00\x00\xe8\x00\x00\x00\x00\x90\x48\x83\xc4\x38\xc3";
    if (!family(failure, report, sizeof(report) - 1,
            {16,34,39,51,67,74,81,93,99,109,119,139,163,184,196,201},
            "\x01\x09\x01\x00\x09\x62\x00\x00", 8) ||
            !imported(failure, 16, 20, "IsProcessorFeaturePresent")) return false;
    const auto context = target(failure, 34, 38);
    const auto record = target(failure, 99, 107);
    const auto cookie = target(failure, 163, 167), complement = target(failure, 184, 188);
    if (!writable(context, 0x4d0) || !writable(record, 0x98) ||
            !writable(cookie, 8) || !writable(complement, 8) ||
            (uint64_t(context) < uint64_t(record) + 0x98 && uint64_t(record) < uint64_t(context) + 0x4d0) ||
            target(failure, 51, 55) != context + 0xf8 || target(failure, 67, 71) != context + 0x98 ||
            target(failure, 74, 78) != context + 0xf8 || target(failure, 81, 85) != record + 0x10 ||
            target(failure, 93, 97) != context + 0x80 || target(failure, 109, 117) != record + 4 ||
            target(failure, 119, 127) != record + 0x18 || target(failure, 139, 143) != record + 0x20)
        return false;
    const auto pointers = target(failure, 196, 200);
    const auto *raw_pointers = image.read(pointers, 16);
    uint64_t exception_record = 0, exception_context = 0;
    if (!raw_pointers) return false;
    std::memcpy(&exception_record, raw_pointers, 8); std::memcpy(&exception_context, raw_pointers + 8, 8);
    if (exception_record != image.preferred_base + record || exception_context != image.preferred_base + context)
        return false;
    const auto capture = target(failure, 39, 43), terminate = target(failure, 201, 205);
    static constexpr char capture_body[] =
        "\x40\x53\x56\x57\x48\x83\xec\x40\x48\x8b\xd9\xff\x15\x00\x00\x00\x00"
        "\x48\x8b\xb3\xf8\x00\x00\x00\x33\xff\x45\x33\xc0\x48\x8d\x54\x24\x60\x48\x8b\xce"
        "\xff\x15\x00\x00\x00\x00\x48\x85\xc0\x74\x39\x48\x83\x64\x24\x38\x00"
        "\x48\x8d\x4c\x24\x68\x48\x8b\x54\x24\x60\x4c\x8b\xc8\x48\x89\x4c\x24\x30\x4c\x8b\xc6"
        "\x48\x8d\x4c\x24\x70\x48\x89\x4c\x24\x28\x33\xc9\x48\x89\x5c\x24\x20\xff\x15\x00\x00\x00\x00"
        "\xff\xc7\x83\xff\x02\x7c\xb1\x48\x83\xc4\x40\x5f\x5e\x5b\xc3";
    if (!family(capture, capture_body, sizeof(capture_body) - 1, {13,39,94},
            "\x01\x08\x04\x00\x08\x72\x04\x70\x03\x60\x02\x30", 12) ||
            !imported(capture, 13, 17, "RtlCaptureContext") ||
            !imported(capture, 39, 43, "RtlLookupFunctionEntry") ||
            !imported(capture, 94, 98, "RtlVirtualUnwind")) return false;
    static constexpr char terminate_body[] =
        "\x40\x53\x48\x83\xec\x20\x48\x8b\xd9\x33\xc9\xff\x15\x00\x00\x00\x00"
        "\x48\x8b\xcb\xff\x15\x00\x00\x00\x00\xff\x15\x00\x00\x00\x00"
        "\x48\x8b\xc8\xba\x09\x04\x00\xc0\x48\x83\xc4\x20\x5b\x48\xff\x25\x00\x00\x00\x00";
    return family(terminate, terminate_body, sizeof(terminate_body) - 1, {13,22,28,48},
            "\x01\x06\x02\x00\x06\x32\x02\x30", 8) &&
        imported(terminate, 13, 17, "SetUnhandledExceptionFilter") &&
        imported(terminate, 22, 26, "UnhandledExceptionFilter") &&
        imported(terminate, 28, 32, "GetCurrentProcess") &&
        imported(terminate, 48, 52, "TerminateProcess");
}

// Dead-code elimination needs an exhaustive list of exception entries, not
// merely the normal entry point. This supports the complete cookie-only GS
// handler and FH4 functions without catch/separated-code maps. A GS handler
// must return ContinueSearch; an unwind-only cleanup must return to the
// unwinder, rather than supply a catch continuation into the parent's body.
// Only complete terminal cleanup families below extend that existing contract.
template<typename Image>
inline bool no_eh_continuations(const Image &image, uint32_t begin, uint32_t end, DecodeFailure *failure = nullptr) {
    if (failure) *failure = {};
    const auto reject_action = [&](uint32_t action, const char *reason) {
        if (failure) *failure = {action, reason, 0};
        return false;
    };
    const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), begin,
        [](const auto &value, uint32_t address) { return value.begin < address; });
    if (function == image.functions.end() || function->begin != begin ||
            (function->owner && function->owner != begin)) return false;
    uint32_t extent = begin;
    for (const auto &fragment : image.functions) {
        if ((fragment.owner ? fragment.owner : fragment.begin) != begin) continue;
        if (fragment.begin != extent || fragment.end > end) return false;
        extent = fragment.end;
    }
    if (extent != end) return false;
    const auto *header = image.read(function->unwind, 4);
    if (!header || (header[0] & 7) != 1 || (header[0] >> 3) > 3) return false;
    if (!(header[0] >> 3)) return true;
    const auto *tail = image.read(function->unwind + 4 + ((uint32_t(header[2]) + 1) & ~1u) * 2, 8);
    if (!tail) return false;
    uint32_t handler, descriptor;
    std::memcpy(&handler, tail, 4); std::memcpy(&descriptor, tail + 4, 4);
    const auto exact = [&](uint32_t address, const char *bytes, size_t count) {
        const auto *actual = image.read(address, count);
        return actual && !std::memcmp(actual, bytes, count);
    };
    const auto relative = [&](uint32_t address, unsigned size) {
        const auto *bytes = image.read(address, size);
        if (!bytes) return uint32_t(0);
        int32_t displacement; std::memcpy(&displacement, bytes + size - 4, 4);
        const auto target = int64_t(address) + size + displacement;
        return target > 0 && target < image.size ? static_cast<uint32_t>(target) : 0u;
    };
    const auto cookie_check = [&](uint32_t check, bool sealed_extent = false) {
        // This complete helper reads the dispatcher and its GS metadata; its
        // only writes are its own PUSH/POP. The tail checker receives just the
        // computed cookie, never an exception-context continuation address.
        static constexpr char helper[] =
            "\x40\x53\x45\x8b\x18\x48\x8b\xda\x41\x83\xe3\xf8\x4c\x8b\xc9\x41\xf6\x00\x04"
            "\x4c\x8b\xd1\x74\x13\x41\x8b\x40\x08\x4d\x63\x50\x04\xf7\xd8\x4c\x03\xd1\x48\x63\xc8"
            "\x4c\x23\xd1\x49\x63\xc3\x4a\x8b\x14\x10\x48\x8b\x43\x10\x8b\x48\x08\x48\x8b\x43\x08"
            "\xf6\x44\x01\x03\x0f\x74\x0b\x0f\xb6\x44\x01\x03\x83\xe0\xf0\x4c\x03\xc8\x4c\x33\xca"
            "\x49\x8b\xc9\x5b\xe9";
        if (!check || !exact(check, helper, sizeof(helper) - 1)) return false;
        const auto cookie = relative(check + sizeof(helper) - 2, 5);
        static constexpr char body[] =
            "\x75\x10\x48\xc1\xc1\x10\x66\xf7\xc1\xff\xff\x75\x01\xc3\x48\xc1\xc9\x10\xe9";
        if (sealed_extent) {
            const auto independent = [&](uint32_t address, uint32_t length, const char *unwind, size_t unwind_size) {
                const auto part = std::lower_bound(image.functions.begin(), image.functions.end(), address,
                    [](const auto &value, uint32_t point) { return value.begin < point; });
                return address && part != image.functions.end() && part->begin == address &&
                    part->end == uint64_t(address) + length && (!part->owner || part->owner == address) &&
                    exact(part->unwind, unwind, unwind_size);
            };
            if (!independent(check, sizeof(helper) - 1 + 4, "\x01\x02\x01\x00\x02\x30\x00\x00", 8) ||
                    !independent(cookie, 30, "\x01\x00\x00\x00", 4)) return false;
        }
        return cookie && exact(cookie, "\x48\x3b\x0d", 3) &&
            exact(cookie + 7, body, sizeof(body) - 1) &&
            image.section(relative(cookie, 7), 8) && relative(cookie + 25, 5) &&
            (!sealed_extent || gs_cookie_failure(image, relative(cookie + 25, 5)));
    };
    // __GSHandlerCheck has no FH4 descriptor. HandlerData begins with the GS
    // cookie offset/flags (and optional aligned-frame operands). The complete
    // body checks that cookie and always returns ExceptionContinueSearch=1;
    // it cannot introduce a catch or normal continuation into this owner.
    static constexpr char gs_prefix[] =
        "\x48\x83\xec\x28\x4d\x8b\x41\x38\x48\x8b\xca\x49\x8b\xd1\xe8";
    static constexpr char gs_suffix[] = "\xb8\x01\x00\x00\x00\x48\x83\xc4\x28\xc3";
    if (exact(handler, gs_prefix, sizeof(gs_prefix) - 1) &&
            exact(handler + 19, gs_suffix, sizeof(gs_suffix) - 1)) {
        const auto entry = std::lower_bound(image.functions.begin(), image.functions.end(), handler,
            [](const auto &value, uint32_t address) { return value.begin < address; });
        if (entry == image.functions.end() || entry->begin != handler || entry->end != handler + 29 ||
                (entry->owner && entry->owner != handler) ||
                !exact(entry->unwind, "\x01\x04\x01\x00\x04\x42\x00\x00", 8))
            return reject_action(handler, "GS handler has no complete independent unwind entry");
        const auto gs_data = function->unwind + 4 + ((uint32_t(header[2]) + 1) & ~1u) * 2 + 4;
        if (!image.read(gs_data, (descriptor & 4) ? 12 : 4) || !cookie_check(relative(handler + 14, 5), true))
            return reject_action(handler, "GS handler cookie metadata or complete checker is unavailable");
        return true;
    }
    const auto fh4 = image.import_slot("vcruntime140_1.dll", "__CxxFrameHandler4");
    if (!fh4) return false;
    const auto thunk = [&](uint32_t address) {
        const auto *bytes = image.read(address, 6);
        if (!bytes || bytes[0] != 0xff || bytes[1] != 0x25) return false;
        int32_t displacement; std::memcpy(&displacement, bytes + 2, 4);
        return int64_t(address) + 6 + displacement == fh4;
    };
    if (!thunk(handler)) {
        // MSVC __GSHandlerCheck_EH4: preserves the four handler arguments,
        // checks the cookie using HandlerData+4, then forwards the original
        // dispatcher to the independently imported FH4 routine. Only the two
        // call displacements vary; no unclassified handler is inferred from
        // the appearance of one import reference.
        static constexpr char prefix[] =
            "\x48\x8b\xc4\x48\x89\x58\x08\x48\x89\x68\x10\x48\x89\x70\x18\x48\x89\x78\x20"
            "\x41\x56\x48\x83\xec\x20\x49\x8b\x59\x38\x48\x8b\xf2\x4d\x8b\xf0\x48\x8b\xe9"
            "\x49\x8b\xd1\x48\x8b\xce\x49\x8b\xf9\x4c\x8d\x43\x04\xe8";
        static constexpr char middle[] =
            "\x8b\x45\x04\x24\x66\xf6\xd8\xb8\x01\x00\x00\x00\x45\x1b\xc0\x41\xf7\xd8"
            "\x44\x03\xc0\x44\x85\x43\x04\x74\x11\x4c\x8b\xcf\x4d\x8b\xc6\x48\x8b\xd6\x48\x8b\xcd\xe8";
        static constexpr char suffix[] =
            "\x48\x8b\x5c\x24\x30\x48\x8b\x6c\x24\x38\x48\x8b\x74\x24\x40\x48\x8b\x7c\x24\x48"
            "\x48\x83\xc4\x20\x41\x5e\xc3";
        constexpr uint32_t first_call = sizeof(prefix) - 2;
        constexpr uint32_t second_call = sizeof(prefix) - 1 + 4 + sizeof(middle) - 2;
        if (!exact(handler, prefix, sizeof(prefix) - 1) ||
                !exact(handler + first_call + 5, middle, sizeof(middle) - 1) ||
                !exact(handler + second_call + 5, suffix, sizeof(suffix) - 1) ||
                !thunk(relative(handler + second_call, 5))) return false;
        if (!cookie_check(relative(handler + first_call, 5))) return false;
    }
    const auto *info = image.read(descriptor, 1);
    // No catch handler, separated body, try-block map, or reserved format.
    if (!info || (*info & (1 | 2 | 16 | 128))) return false;
    const auto independent_extent = [&](uint32_t action, uint32_t length, bool frame) {
        if (!action || !length || uint64_t(action) + length > image.size ||
                (action < end && uint64_t(action) + length > begin)) return false;
        const auto *section = image.section(action, length);
        if (!section || !(section->flags & Image::execute_flag)) return false;
        auto entry = std::upper_bound(image.functions.begin(), image.functions.end(), action,
            [](uint32_t address, const auto &value) { return address < value.begin; });
        if (entry != image.functions.begin()) {
            const auto previous = std::prev(entry);
            if (previous->end > action) {
                if (previous->begin != action || previous->end != uint64_t(action) + length ||
                        (previous->owner && previous->owner != action)) return false;
                // The frame cleanup families save RBP and reserve exactly
                // 32 bytes before treating incoming RDX as establisher frame.
                return !frame || exact(previous->unwind, "\x01\x06\x02\x00\x06\x32\x02\x50", 8);
            }
        }
        return !frame && (entry == image.functions.end() || uint64_t(action) + length <= entry->begin);
    };
    std::function<bool(uint32_t, std::set<uint32_t> &)> object_action;
    object_action = [&](uint32_t action, std::set<uint32_t> &visited) {
        if (!action || (action >= begin && action < end) || !visited.insert(action).second || visited.size() > 16)
            return false;
        const auto entry = std::lower_bound(image.functions.begin(), image.functions.end(), action,
            [](const auto &value, uint32_t address) { return value.begin < address; });
        if (entry != image.functions.end() && entry->begin == action &&
                (!entry->owner || entry->owner == action)) return true;
        const auto *raw = image.read(action, 5);
        if (!raw) return false;
        if (raw[0] == 0xe9)
            return independent_extent(action, 5, false) && object_action(relative(action, 5), visited);
        // A sized-delete leaf may end in the CRT free import's pure thunk.
        const auto free_slot = image.import_slot("api-ms-win-crt-heap-l1-1-0.dll", "free");
        if (free_slot && raw[0] == 0xff && raw[1] == 0x25 && independent_extent(action, 6, false) &&
                relative(action, 6) == free_slot) return true;
        // Complete shared_ptr release leaf. Both conditional exits reach the
        // final RET. The other terminal is an ordinary virtual destructor
        // tail call: RCX was replaced by the control-block pointer, no parent
        // frame or continuation address is returned/passed to that dispatch.
        if (independent_extent(action, 32, false) && exact(action, "\x48\x8b\x49", 3) &&
                !(raw[3] & 7) && raw[3] <= 0x78 && exact(action + 4,
                    "\x48\x85\xc9\x74\x16\xb8\xff\xff\xff\xff\xf0\x0f\xc1\x41\x0c"
                    "\x83\xf8\x01\x75\x07\x48\x8b\x01\x48\xff\x60\x08\xc3", 28)) return true;
        // Complete nullable owned-pointer sized-delete leaf. The non-null
        // branch tail-calls a separately identified release entry.
        if (independent_extent(action, 20, false) && exact(action, "\x48\x8b\x49", 3) &&
                !(raw[3] & 7) && raw[3] <= 0x78 &&
                exact(action + 4, "\x48\x85\xc9\x74\x0a\xba", 6) &&
                exact(action + 14, "\xe9", 1) && exact(action + 19, "\xc3", 1))
            return object_action(relative(action + 14, 5), visited);
        return false;
    };
    const auto frame_action = [&](uint32_t action) {
        std::set<uint32_t> visited{action};
        const auto *raw = image.read(action, 12);
        if (!raw || (action >= begin && action < end)) return false;
        // A noexcept cleanup may consist solely of the named CRT terminate
        // thunk. It cannot inject a continuation into the parent frame.
        const auto terminate_slot = image.import_slot("vcruntime140.dll", "__std_terminate");
        if (terminate_slot && independent_extent(action, 6, false) &&
                exact(action, "\xff\x25", 2) && relative(action, 6) == terminate_slot) return true;
        if (exact(action, "\x40\x55\x48\x83\xec\x20\x48\x8b\xea", 9)) {
            // Conditional cleanup: test one construction-state bit, clear
            // that same bit, destroy the named frame-local, then RET. The
            // sole branch goes directly to the complete stack epilogue.
            const auto *body = image.read(action, 41);
            if (body && independent_extent(action, 41, true) &&
                    exact(action + 9, "\x8b\x45", 2) && !(body[11] & 3) &&
                    exact(action + 12, "\x83\xe0", 2) && body[14] && body[14] < 0x80 &&
                    !(body[14] & (body[14] - 1)) &&
                    exact(action + 15, "\x85\xc0\x74\x10\x83\x65", 6) && body[21] == body[11] &&
                    body[22] == static_cast<unsigned char>(~body[14]) &&
                    exact(action + 23, "\x48\x8d\x8d", 3) && exact(action + 30, "\xe8", 1) &&
                    exact(action + 35, "\x48\x83\xc4\x20\x5d\xc3", 6))
                return object_action(relative(action + 30, 5), visited);
            // Allocation cleanup: load the owned object from the establisher
            // frame, pass its concrete size to delete, then restore/RET.
            if (independent_extent(action, 32, true) && exact(action + 9, "\xba", 1) &&
                    exact(action + 14, "\x48\x8b\x8d", 3) && exact(action + 21, "\xe8", 1) &&
                    exact(action + 26, "\x48\x83\xc4\x20\x5d\xc3", 6))
                return object_action(relative(action + 21, 5), visited);
            // The same complete allocation cleanup with a signed disp8
            // frame slot. The shorter encoding does not change its ABI.
            if (independent_extent(action, 29, true) && exact(action + 9, "\xba", 1) &&
                    exact(action + 14, "\x48\x8b\x4d", 3) && exact(action + 18, "\xe8", 1) &&
                    exact(action + 23, "\x48\x83\xc4\x20\x5d\xc3", 6))
                return object_action(relative(action + 18, 5), visited);
            return false;
        }
        // Leaf cleanup: pass one frame-local subobject to an independent
        // destructor by tail call. No branch can re-enter the parent's CFG.
        if (!exact(action, "\x48\x8d\x8a", 3)) return false;
        uint32_t tail = 7;
        if (exact(action + tail, "\x48\x83\xc1", 3)) tail += 4;
        return independent_extent(action, tail + 5, false) && exact(action + tail, "\xe9", 1) &&
            object_action(relative(action + tail, 5), visited);
    };
    uint32_t cursor = descriptor + 1;
    const auto number = [&](uint32_t &at, uint32_t &value) {
        const auto *first = image.read(at, 1);
        if (!first) return false;
        unsigned count = 1;
        while (count <= 4 && (*first & ((1u << count) - 1)) != (1u << (count - 1)) - 1) ++count;
        // The reserved/wide form is deliberately not guessed.
        if (count > 4) return false;
        const auto *bytes = image.read(at, count);
        if (!bytes) return false;
        value = 0; for (unsigned i = 0; i < count; ++i) value |= uint32_t(bytes[i]) << (8 * i);
        value >>= count; at += count; return true;
    };
    uint32_t ignored = 0;
    if ((*info & 4) && !number(cursor, ignored)) return false;
    uint32_t unwind = 0, ipmap = 0;
    if (*info & 8) {
        const auto *bytes = image.read(cursor, 4); if (!bytes) return false;
        std::memcpy(&unwind, bytes, 4); cursor += 4;
    }
    const auto *ip = image.read(cursor, 4); if (!ip) return false;
    std::memcpy(&ipmap, ip, 4);
    uint32_t count = 0;
    if (unwind) {
        cursor = unwind;
        if (!number(cursor, count) || count > 65536) return false;
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t packed = 0, object = 0;
            if (!number(cursor, packed)) return false;
            const auto kind = packed & 3;
            if (!kind) continue;
            const auto *bytes = image.read(cursor, 4); if (!bytes) return false;
            uint32_t action; std::memcpy(&action, bytes, 4); cursor += 4;
            if (kind == 3) {
                if (!frame_action(action))
                    return reject_action(action, "FH4 frame cleanup has no complete terminal-path certificate");
                continue;
            }
            if (!number(cursor, object) || (action >= begin && action < end)) return false;
            std::set<uint32_t> visited;
            if (!object_action(action, visited))
                return reject_action(action, "FH4 object cleanup has no independent terminal entry");
        }
    }
    cursor = ipmap;
    uint32_t ips = 0, offset = 0;
    if (!ipmap || !number(cursor, ips) || ips > 65536) return false;
    for (uint32_t i = 0; i < ips; ++i) {
        uint32_t delta = 0, state = 0;
        if (!number(cursor, delta) || !number(cursor, state) || state > count ||
                uint64_t(begin) + offset + delta > end) return false;
        offset += delta;
    }
    return true;
}
template<typename Image>
inline bool decode(const Image &image, uint32_t begin, uint32_t end, std::vector<Instruction> &result,
        std::set<uint32_t> *targets = nullptr, DecodeFailure *failure = nullptr, ControlFlow *flow = nullptr) {
    // MSVC may include RVA jump tables in a .pdata range after its code.
    // Skip only tables proved by a bounded indexed load -> image-base add ->
    // indirect jump. Treating arbitrary undecodable bytes as padding would
    // hide genuine instructions, while linear decoding treats data as code.
    const size_t first = result.size();
    if (failure) *failure = {};
    if (flow) *flow = {};
    const auto reject = [&](uint32_t address, const char *reason, unsigned reg = 0) {
        if (failure) *failure = {address, reason, reg};
        return false;
    };
    std::map<uint32_t, uint32_t> tables;
    std::map<uint32_t, uint32_t> deferred_tables;
    std::set<uint32_t> deferred_jumps;
    std::set<uint32_t> entries;
    std::set<uint32_t> nonreturning_calls;
    std::map<uint32_t, bool> nonreturning_targets;
    const uint32_t length_error = image.import_slot("msvcp140.dll", "?_Xlength_error@std@@YAXPEBD@Z");
    bool falls_through = true;
    const auto reg = [](const hde64s &op) { return unsigned(op.modrm_reg + (op.rex_r ? 8 : 0)); };
    const auto rm = [](const hde64s &op) { return unsigned(op.modrm_rm + (op.rex_b ? 8 : 0)); };
    struct LocalIndex {
        bool valid = false;
        int32_t displacement = 0, bias = 0;
        bool operator==(const LocalIndex &) const = default;
    };
    const auto local_index = [&](size_t before, unsigned wanted) {
        LocalIndex value;
        if (before <= first) return value;
        size_t at = before - 1;
        const auto &add = result[at].decoded;
        if (!add.rex_w && !add.p_66 &&
                (((add.opcode == 0x81 || add.opcode == 0x83) && add.modrm_mod == 3 && !add.modrm_reg && rm(add) == wanted) ||
                 (add.opcode == 0x05 && wanted == 0))) {
            value.bias = add.opcode == 0x83 ? int32_t(static_cast<int8_t>(add.imm.imm8)) : static_cast<int32_t>(add.imm.imm32);
            if (at == first) return LocalIndex{};
            --at;
        }
        const auto &load = result[at].decoded;
        if (load.opcode != 0x8b || load.rex_w || load.p_66 || load.p_67 || load.p_seg || reg(load) != wanted ||
                !load.modrm_mod || load.modrm_mod == 3 || (load.flags & F_SIB) || load.modrm_rm != 5 || load.rex_b)
            return LocalIndex{};
        for (size_t cursor = at; cursor < before; ++cursor)
            if (cursor + 1 < result.size() && uint64_t(result[cursor].address) + result[cursor].decoded.len != result[cursor + 1].address)
                return LocalIndex{};
        value.displacement = load.flags & F_DISP32 ? static_cast<int32_t>(load.disp.disp32) :
            load.flags & F_DISP8 ? int32_t(static_cast<int8_t>(load.disp.disp8)) : 0;
        value.valid = true; return value;
    };
    struct Dispatch {
        size_t load = 0, jump = 0;
        uint32_t guard = 0, index_entry = 0, maximum = 0;
        unsigned base = 0, index = 0;
        LocalIndex local;
        std::vector<uint32_t> targets;
    };
    std::vector<Dispatch> dispatches;
    uint32_t unbounded_table = 0;
    const auto image_base = [&](const Instruction &instruction, unsigned wanted) {
        const auto &op = instruction.decoded;
        return op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_mod == 0 &&
            op.modrm_rm == 5 && reg(op) == wanted &&
            int64_t(instruction.address) + op.len + static_cast<int32_t>(op.disp.disp32) == 0;
    };
    const auto admit_table = [&](uint32_t table, uint32_t length) {
        if (!length || table < begin || uint64_t(table) + length > end) return false;
        auto next = tables.lower_bound(table);
        if (next != tables.end() && next->first == table) return next->second == table + length;
        if ((next != tables.end() && next->first < uint64_t(table) + length) ||
                (next != tables.begin() && std::prev(next)->second > table)) return false;
        tables.emplace(table, table + length); return true;
    };
    const auto table_after_jump = [&]() {
        unbounded_table = 0;
        size_t at = result.size();
        if (at - first < 3) return true;
        const auto &jump = result[--at].decoded;
        if (jump.opcode != 0xff || jump.modrm_mod != 3 || jump.modrm_reg != 4) return true;
        const size_t jump_at = at;
        const unsigned destination = rm(jump);
        const auto &add = result[--at].decoded;
        if (add.opcode != 0x03 || !add.rex_w || add.modrm_mod != 3 || reg(add) != destination ||
                rm(add) == destination) return true;
        const unsigned add_base = rm(add);
        if (at == first) return true;
        --at;
        const bool loaded_add_base = image_base(result[at], add_base);
        if (loaded_add_base) {
            if (at == first) return false;
            --at;
        }
        const auto &load = result[at].decoded;
        if (load.opcode != 0x8b || load.rex_w || load.p_66 || load.p_67 || load.modrm_mod != 2 ||
                !(load.flags & F_SIB) || load.sib_scale != 2 || reg(load) != destination) return true;
        const unsigned base = load.sib_base + (load.rex_b ? 8 : 0);
        if (!loaded_add_base && base != add_base) return false;
        const size_t load_at = at;
        unbounded_table = load.disp.disp32;
        unsigned index = load.sib_index + (load.rex_x ? 8 : 0);
        if (index == 4 || index == base || at == first) return false;
        uint32_t selector_table = 0;
        --at;
        const auto &selector = result[at].decoded;
        if (selector.opcode == 0x0f && selector.opcode2 == 0xb6 && !selector.rex_w && !selector.p_66 &&
                !selector.p_67 && selector.modrm_mod == 2 && (selector.flags & F_SIB) &&
                !selector.sib_scale && reg(selector) == index) {
            const unsigned a = selector.sib_base + (selector.rex_b ? 8 : 0);
            const unsigned b = selector.sib_index + (selector.rex_x ? 8 : 0);
            if ((selector.sib_index == 4 && !selector.rex_x) || (a != base && b != base) || a == b) return false;
            index = a == base ? b : a;
            selector_table = selector.disp.disp32;
            unbounded_table = 0; // No inferred extent for an unproved selector table.
            if (at == first) return false;
            --at;
        }
        bool had_base = false, had_extend = false;
        const hde64s *stack_index = nullptr;
        const auto plain_rsp = [](const hde64s &op) {
            return !op.p_67 && !op.p_seg && op.modrm_mod != 3 && (op.flags & F_SIB) &&
                op.sib_base == 4 && !op.rex_b && op.sib_index == 4 && !op.rex_x;
        };
        const auto displacement = [](const hde64s &op) {
            return op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
                op.flags & F_DISP8 ? int32_t(static_cast<int8_t>(op.disp.disp8)) : 0;
        };
        for (;;) {
            const auto &op = result[at].decoded;
            if (!had_base && image_base(result[at], base)) had_base = true;
            else if (!had_extend && (op.opcode == 0x63 || op.opcode == 0x8b) && op.rex_w &&
                    op.modrm_mod == 3 && reg(op) == index) {
                index = rm(op); had_extend = true;
            } else if (!had_extend && ((op.opcode == 0x63 && op.rex_w) || (op.opcode == 0x8b && !op.rex_w && !op.p_66)) &&
                    reg(op) == index && plain_rsp(op)) {
                // CMP dword [rsp+slot], bound; JA default; MOVSXD index,
                // [rsp+slot] is the stack-spilled form of the same guard.
                // The only admitted intervening instruction is image-base
                // LEA, so neither RSP nor that slot can change in between.
                stack_index = &op; had_extend = true;
            } else if (!had_extend && op.opcode == 0x98 && op.rex_w && index == 0) had_extend = true;
            else break;
            if (at == first) return false;
            --at;
        }
        const size_t above_at = at;
        const auto &above = result[at].decoded;
        if (!(above.opcode == 0x77 || (above.opcode == 0x0f && above.opcode2 == 0x87)) || at == first) return false;
        --at;
        // MSVC schedules independent loads and image-base LEA between CMP
        // and JA. Preserve the guard only across instructions that neither
        // alter flags nor write its index/RSP or any memory.
        for (unsigned skipped = 0; skipped < 8; ++skipped) {
            const auto &op = result[at].decoded;
            const bool move = op.opcode == 0x8b || op.opcode == 0x8d ||
                (op.opcode >= 0xb8 && op.opcode <= 0xbf) || op.opcode == 0x90 ||
                (op.opcode == 0x0f && op.opcode2 == 0x1f);
            if (!move || op.p_lock || op.p_seg || op.p_67 || writes_gpr(op, index) || writes_gpr(op, 4)) break;
            if (at == first) return false;
            --at;
        }
        const auto &compare = result[at].decoded;
        if (compare.p_66 || compare.rex_w) return false;
        int64_t maximum = -1;
        if (stack_index) {
            if (base == 4) return false;
            if ((compare.opcode == 0x83 || compare.opcode == 0x81) && compare.modrm_reg == 7 &&
                    plain_rsp(compare) && displacement(compare) == displacement(*stack_index))
                maximum = compare.opcode == 0x83 ? static_cast<int8_t>(compare.imm.imm8) :
                    static_cast<int32_t>(compare.imm.imm32);
        } else if ((compare.opcode == 0x83 || compare.opcode == 0x81) && compare.modrm_mod == 3 &&
                compare.modrm_reg == 7 && rm(compare) == index)
            maximum = compare.opcode == 0x83 ? static_cast<int8_t>(compare.imm.imm8) : static_cast<int32_t>(compare.imm.imm32);
        else if (compare.opcode == 0x3d && index == 0) maximum = static_cast<int32_t>(compare.imm.imm32);
        else if (compare.modrm_mod == 3 && at > first &&
                ((compare.opcode == 0x3b && reg(compare) == index) || (compare.opcode == 0x39 && rm(compare) == index))) {
            const auto bound = compare.opcode == 0x3b ? rm(compare) : reg(compare);
            const auto &constant = result[at - 1].decoded;
            if (bound != index && constant.opcode >= 0xb8 && constant.opcode <= 0xbf && !constant.rex_w && !constant.p_66 &&
                    constant.opcode - 0xb8 + (constant.rex_b ? 8 : 0) == bound) {
                maximum = static_cast<int32_t>(constant.imm.imm32); --at;
            }
        }
        const uint32_t table = load.disp.disp32;
        if (maximum < 0 || maximum > 65535) return false;
        for (size_t cursor = at; cursor < jump_at; ++cursor)
            if (uint64_t(result[cursor].address) + result[cursor].decoded.len != result[cursor + 1].address) return false;
        uint32_t count = static_cast<uint32_t>(maximum + 1);
        if (selector_table) {
            if (selector_table < begin || uint64_t(selector_table) + count > end) return false;
            const auto *selector_bytes = image.read(selector_table, count);
            if (!selector_bytes) return false;
            unsigned largest = 0;
            for (uint32_t i = 0; i < count; ++i) largest = (std::max)(largest, unsigned(selector_bytes[i]));
            if (!admit_table(selector_table, count)) return false;
            count = largest + 1;
        }
        if (table < begin || uint64_t(table) + uint64_t(count) * 4 > end) return false;
        const auto *bytes = image.read(table, count * 4);
        if (!bytes) return false;
        std::vector<uint32_t> destinations;
        for (uint32_t index = 0; index < count; ++index) {
            uint32_t target; std::memcpy(&target, bytes + index * 4, 4);
            if (target < begin || target >= table) return false;
            destinations.push_back(target);
        }
        if (!admit_table(table, count * 4)) return false;
        entries.insert(destinations.begin(), destinations.end());
        dispatches.push_back({load_at, jump_at, result[at].address, result[above_at + 1].address,
            static_cast<uint32_t>(maximum), base, index, stack_index ? LocalIndex{} : local_index(at, index),
            std::move(destinations)});
        return true;
    };
    for (uint32_t address = begin; address < end;) {
        if (const auto table = tables.find(address); table != tables.end()) {
            if (falls_through) return reject(address, "fallthrough reaches switch table");
            address = table->second;
            continue;
        }
        if (auto table = deferred_tables.find(address); table != deferred_tables.end()) {
            // This is only a candidate data interval. Its size is NOT a
            // switch bound and none of its entries authorizes a branch.
            // Accept it only after the entire CFG proves its dispatch dead.
            const auto next = tables.upper_bound(address);
            if (falls_through || next == tables.end() || next->first <= address ||
                    (next->first - address) % 4 || next->first - address > 65536 * 4)
                return reject(address, "unproved switch data extent");
            const auto *bytes = image.read(address, next->first - address);
            if (!bytes) return reject(address, "unbacked deferred switch data");
            for (uint32_t offset = 0; offset < next->first - address; offset += 4) {
                uint32_t target; std::memcpy(&target, bytes + offset, 4);
                if (target < begin || target >= address)
                    return reject(address + offset, "unclassified bytes between switch tables");
            }
            table->second = next->first;
            address = next->first; continue;
        }
        unsigned char bounded[32]{};
        const auto available = (std::min)(uint32_t(16), end - address);
        const auto *bytes = image.read(address, available);
        if (!bytes) return reject(address, "instruction bytes are not backed by the image");
        std::memcpy(bounded, bytes, available);
        hde64s instruction{};
        hde64_disasm(bounded, &instruction);
        if (!instruction.len || instruction.len > available || (instruction.flags & F_ERROR))
            return reject(address, "invalid or incomplete machine instruction");
        result.push_back({address, instruction, {bytes, bytes + instruction.len}});
        if (!table_after_jump()) {
            if (unbounded_table <= address || unbounded_table >= end)
                return reject(address, "unproved bounded switch dispatch");
            deferred_tables.emplace(unbounded_table, 0);
            deferred_jumps.insert(address);
        }
        if (instruction.opcode == 0xe8 && length_error) {
            const auto target = int64_t(address) + instruction.len + static_cast<int32_t>(instruction.imm.imm32);
            if (target >= 0 && target < image.size) {
                const auto callee = static_cast<uint32_t>(target);
                auto found = nonreturning_targets.find(callee);
                if (found == nonreturning_targets.end())
                    found = nonreturning_targets.emplace(callee, throws_length_error(image, callee, length_error)).first;
                if (found->second) nonreturning_calls.insert(address);
            }
        }
        if ((instruction.opcode >= 0x70 && instruction.opcode <= 0x7f) ||
                (instruction.opcode >= 0xe0 && instruction.opcode <= 0xe3) ||
                (instruction.opcode == 0x0f && instruction.opcode2 >= 0x80 && instruction.opcode2 <= 0x8f) ||
                instruction.opcode == 0xe9 || instruction.opcode == 0xeb) {
            const int64_t displacement = instruction.flags & F_IMM8 ? static_cast<int8_t>(instruction.imm.imm8) :
                static_cast<int32_t>(instruction.imm.imm32);
            const int64_t target = int64_t(address) + instruction.len + displacement;
            if (target >= begin && target < end) entries.insert(static_cast<uint32_t>(target));
        }
        const bool padding = instruction.opcode == 0x90 ||
            (instruction.opcode == 0x0f && instruction.opcode2 == 0x1f);
        if (!padding) falls_through = !(instruction.opcode == 0xc3 || instruction.opcode == 0xc2 ||
            instruction.opcode == 0xcc || instruction.opcode == 0xe9 || instruction.opcode == 0xeb ||
            nonreturning_calls.count(address) || (instruction.opcode == 0xff && instruction.modrm_reg == 4));
        address += instruction.len;
    }
    for (auto entry : entries) {
        const auto found = std::lower_bound(result.begin() + first, result.end(), entry,
            [](const auto &instruction, uint32_t address) { return instruction.address < address; });
        if (found == result.end() || found->address != entry) return reject(entry, "branch target is not an instruction boundary");
    }
    std::vector<bool> reachable;
    if (!dispatches.empty() || !deferred_jumps.empty()) {
        std::unordered_map<uint32_t, size_t> positions;
        for (size_t at = first; at < result.size(); ++at) positions.emplace(result[at].address, at);
        std::vector<std::vector<size_t>> predecessors(result.size());
        const auto edge = [&](size_t source, int64_t target) {
            if (target < begin || target >= end) return;
            const auto found = positions.find(static_cast<uint32_t>(target));
            if (found != positions.end()) predecessors[found->second].push_back(source);
        };
        for (size_t at = first; at < result.size(); ++at) {
            const auto &instruction = result[at];
            const auto &op = instruction.decoded;
            const bool short_branch = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode >= 0xe0 && op.opcode <= 0xe3) || op.opcode == 0xeb;
            const bool near_branch = op.opcode == 0xe9 ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
            if (short_branch || near_branch)
                edge(at, int64_t(instruction.address) + op.len + (short_branch ?
                    int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32))));
            if (op.opcode != 0xe9 && op.opcode != 0xeb && op.opcode != 0xc2 && op.opcode != 0xc3 && op.opcode != 0xcc &&
                    !nonreturning_calls.count(instruction.address) &&
                    !(op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5)) &&
                    !(op.opcode == 0x0f && op.opcode2 == 0x0b))
                edge(at, int64_t(instruction.address) + op.len);
        }
        for (const auto &dispatch : dispatches)
            for (const auto target : dispatch.targets) edge(dispatch.jump, target);
        if (!deferred_jumps.empty()) {
            if (!no_eh_continuations(image, begin, end))
                return reject(*deferred_jumps.begin(), "unproved exception continuation roots for deferred switch");
            for (const auto &[table, finish] : deferred_tables) {
                if (!finish) return reject(table, "deferred switch table was not completely classified");
                const auto *bytes = image.read(table, finish - table);
                for (uint32_t offset = 0; offset < finish - table; offset += 4) {
                    uint32_t target; std::memcpy(&target, bytes + offset, 4);
                    if (!positions.count(target))
                        return reject(target, "deferred switch data is not composed of instruction RVAs");
                }
            }
            std::vector<std::vector<size_t>> successors(result.size());
            for (size_t at = first; at < predecessors.size(); ++at)
                for (const auto predecessor : predecessors[at]) successors[predecessor].push_back(at);
            std::vector<size_t> pending{first};
            // A local label whose address escapes is another entry. Include
            // RIP-relative address materializations and absolute relocations,
            // even if their enclosing instruction is itself not yet reachable.
            for (size_t at = first; at < result.size(); ++at) {
                const auto &instruction = result[at]; const auto &op = instruction.decoded;
                if (op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_mod == 0 && op.modrm_rm == 5) {
                    const auto target = int64_t(instruction.address) + op.len + static_cast<int32_t>(op.disp.disp32);
                    if (target >= begin && target < end) {
                        const auto found = positions.find(static_cast<uint32_t>(target));
                        if (found == positions.end()) return reject(instruction.address, "local code address points into deferred data");
                        pending.push_back(found->second);
                    }
                }
                if (op.opcode == 0xe8) {
                    const auto target = int64_t(instruction.address) + op.len + static_cast<int32_t>(op.imm.imm32);
                    if (target >= begin && target < end) {
                        const auto found = positions.find(static_cast<uint32_t>(target));
                        if (found == positions.end()) return reject(instruction.address, "local call target is not an instruction");
                        pending.push_back(found->second);
                    }
                }
            }
            for (const auto &[address, value] : image.relocations) {
                (void)address;
                if (value < image.preferred_base + begin || value >= image.preferred_base + end) continue;
                const auto found = positions.find(static_cast<uint32_t>(value - image.preferred_base));
                if (found == positions.end()) return reject(static_cast<uint32_t>(value - image.preferred_base),
                    "absolute code reference points into deferred data");
                pending.push_back(found->second);
            }
            for (const auto &fragment : image.functions)
                if ((fragment.owner ? fragment.owner : fragment.begin) == begin) {
                    const auto found = positions.find(fragment.begin);
                    if (found == positions.end()) return reject(fragment.begin, "unwind fragment has no decoded entry");
                    pending.push_back(found->second);
                }
            reachable.resize(result.size());
            while (!pending.empty()) {
                const auto at = pending.back(); pending.pop_back();
                if (reachable[at]) continue;
                reachable[at] = true;
                const auto &instruction = result[at]; const auto &op = instruction.decoded;
                if (deferred_jumps.count(instruction.address))
                    return reject(instruction.address, "reachable unproved bounded switch dispatch");
                if (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5) &&
                        std::none_of(dispatches.begin(), dispatches.end(), [&](const auto &dispatch) { return dispatch.jump == at; }))
                    return reject(instruction.address, "unproved reachable indirect edge during dead-code analysis");
                const bool short_branch = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                    (op.opcode >= 0xe0 && op.opcode <= 0xe3) || op.opcode == 0xeb;
                const bool near_branch = op.opcode == 0xe9 ||
                    (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
                if (short_branch || near_branch) {
                    const auto target = int64_t(instruction.address) + op.len + (short_branch ?
                        int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
                    if (target < begin || target >= end) {
                        const auto entry = std::lower_bound(image.functions.begin(), image.functions.end(), target,
                            [](const auto &value, int64_t address) { return value.begin < address; });
                        if (entry == image.functions.end() || entry->begin != target ||
                                (entry->owner && entry->owner != entry->begin))
                            return reject(instruction.address, "external branch is not an independent function entry");
                    }
                }
                const bool terminal = op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
                    op.opcode == 0xe9 || op.opcode == 0xeb || nonreturning_calls.count(instruction.address) ||
                    (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5)) ||
                    (op.opcode == 0x0f && op.opcode2 == 0x0b);
                if (!terminal && !positions.count(instruction.address + op.len))
                    return reject(instruction.address, "reachable fallthrough leaves decoded instructions");
                pending.insert(pending.end(), successors[at].begin(), successors[at].end());
            }
            for (size_t at = first; at < predecessors.size(); ++at) {
                auto &incoming = predecessors[at];
                incoming.erase(std::remove_if(incoming.begin(), incoming.end(),
                    [&](size_t source) { return !reachable[source]; }), incoming.end());
            }
            for (auto at = entries.begin(); at != entries.end();)
                if (!reachable[positions.at(*at)]) at = entries.erase(at); else ++at;
        }
        std::set<size_t> proved_dispatches;
        int32_t rbp_delta = 0;
        bool rbp_delta_read = false, rbp_delta_valid = false;
        const auto shared_index = [&](const Dispatch &dispatch, size_t entry_at) {
            if (!dispatch.local.valid) return false;
            if (!rbp_delta_read) {
                rbp_delta_read = true;
                rbp_delta_valid = rbp_from_body_rsp(image, begin, rbp_delta);
            }
            if (!rbp_delta_valid) return false;
            const auto stable_slot = [&](const Instruction &instruction) {
                const auto &op = instruction.decoded;
                if (writes_gpr(op, 4) || writes_gpr(op, 5)) return false;
                if (op.rex_w && op.modrm_mod == 3 &&
                        ((op.opcode == 0x8b && (rm(op) == 4 || rm(op) == 5)) ||
                         (op.opcode == 0x89 && (reg(op) == 4 || reg(op) == 5)))) return false;
                if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || memory_read_only(op)) return true;
                bool stack = false;
                int64_t offset = op.flags & F_DISP32 ? int64_t(static_cast<int32_t>(op.disp.disp32)) :
                    op.flags & F_DISP8 ? int64_t(static_cast<int8_t>(op.disp.disp8)) : 0;
                if ((op.flags & F_SIB) && op.sib_base == 4 && !op.rex_b) {
                    if (op.sib_index != 4 || op.rex_x || op.p_67) return false;
                    offset -= rbp_delta; stack = true;
                } else if (!(op.flags & F_SIB) && op.modrm_mod && op.modrm_rm == 5 && !op.rex_b) {
                    if (op.p_67) return false;
                    stack = true;
                } else if ((op.flags & F_SIB) &&
                        ((op.sib_base == 5 && !op.rex_b) || (op.sib_index == 5 && !op.rex_x))) return false;
                if (!stack) return true;
                // An address to this slot (or a lower, unbounded stack
                // buffer) may escape through a subsequent call. Other
                // direct writes must have a known, disjoint access width.
                if (op.opcode == 0x8d) return offset > int64_t(dispatch.local.displacement) + 3;
                const auto width = access_width(op);
                return width != UINT32_MAX && (offset >= int64_t(dispatch.local.displacement) + 4 ||
                    offset + width <= dispatch.local.displacement);
            };
            for (const auto predecessor : predecessors[entry_at]) {
                const auto &incoming = result[predecessor];
                const auto &op = incoming.decoded;
                const bool own_guard = predecessor + 1 == entry_at &&
                    (op.opcode == 0x77 || (op.opcode == 0x0f && op.opcode2 == 0x87));
                if (own_guard) {
                    const auto jump_target = int64_t(incoming.address) + op.len + (op.flags & F_IMM8 ?
                        int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
                    if (jump_target == result[entry_at].address) return false;
                    continue;
                }
                if ((op.opcode != 0xe9 && op.opcode != 0xeb) ||
                        !(local_index(predecessor, dispatch.index) == dispatch.local)) return false;
                std::vector<size_t> pending{predecessor};
                std::set<size_t> visited;
                bool bounded = false;
                while (!pending.empty()) {
                    const auto at = pending.back(); pending.pop_back();
                    if (!visited.insert(at).second) continue;
                    const auto prior = std::find_if(dispatches.begin(), dispatches.end(), [&](const auto &value) {
                        return value.jump == at && proved_dispatches.count(at) && value.local == dispatch.local &&
                            value.maximum <= dispatch.maximum;
                    });
                    if (prior != dispatches.end()) { bounded = true; continue; }
                    if (!stable_slot(result[at]) || predecessors[at].empty()) return false;
                    pending.insert(pending.end(), predecessors[at].begin(), predecessors[at].end());
                }
                if (!bounded) return false;
            }
            return !predecessors[entry_at].empty();
        };
        for (const auto &dispatch : dispatches) {
            if (!reachable.empty() && !reachable[dispatch.jump]) continue;
            // No branch may enter after the checked bound (or its adjacent
            // constant definition) and bypass part of the index expression.
            for (auto interior = entries.upper_bound(dispatch.guard);
                    interior != entries.end() && *interior <= result[dispatch.jump].address; ++interior) {
                const auto location = positions.find(*interior);
                if (*interior != dispatch.index_entry || location == positions.end() ||
                        !shared_index(dispatch, location->second))
                    return reject(*interior, "branch bypasses switch bound or index expression");
            }
            std::vector<size_t> pending = predecessors[dispatch.load];
            std::set<size_t> visited;
            bool defined = false;
            if (pending.empty()) return reject(result[dispatch.load].address, "switch image base has no predecessor", dispatch.base);
            while (!pending.empty()) {
                const auto at = pending.back(); pending.pop_back();
                if (!visited.insert(at).second) continue;
                if (image_base(result[at], dispatch.base)) { defined = true; continue; }
                if (writes_gpr(result[at].decoded, dispatch.base) || predecessors[at].empty())
                    return reject(result[at].address, "switch image base is clobbered or has no definition", dispatch.base);
                pending.insert(pending.end(), predecessors[at].begin(), predecessors[at].end());
            }
            if (!defined) return reject(result[dispatch.load].address, "switch image base has no proved LEA definition", dispatch.base);
            proved_dispatches.insert(dispatch.jump);
        }
    }
    if (flow) {
        *flow = {};
        for (const auto &dispatch : dispatches) {
            // Keep the complete, decoded data inventory even when a switch
            // is unreachable. The reference producer must authenticate its
            // RVA bytes too; this does not grant an executable CFG edge.
            flow->rva_tables.emplace(result[dispatch.load].decoded.disp.disp32, dispatch.targets);
            if (reachable.empty() || reachable[dispatch.jump]) {
                flow->indirect_edges.emplace(result[dispatch.jump].address, dispatch.targets);
            }
        }
        flow->nonreturning_calls = nonreturning_calls;
        flow->data_ranges = tables;
        for (const auto &[table, finish] : deferred_tables) {
            // The complete CFG above proved these dispatches unreachable,
            // with no unaccounted exception continuation, and authenticated
            // every data item as a decoded instruction RVA. Preserve that
            // data inventory for reviewed source-byte correspondence too;
            // none of these destinations becomes an executable edge.
            const auto *bytes = image.read(table, finish - table);
            if (!bytes) return reject(table, "unbacked authenticated deferred switch data");
            std::vector<uint32_t> destinations;
            for (uint32_t offset = 0; offset < finish - table; offset += 4) {
                uint32_t destination; std::memcpy(&destination, bytes + offset, 4);
                destinations.push_back(destination);
            }
            flow->rva_tables.emplace(table, std::move(destinations));
            flow->data_ranges.emplace(table, finish);
        }
    }
    if (!reachable.empty()) {
        size_t output = first;
        for (size_t at = first; at < result.size(); ++at)
            if (reachable[at]) { if (at != output) result[output] = std::move(result[at]); ++output; }
        result.resize(output);
    }
    if (targets) targets->insert(entries.begin(), entries.end());
    return true;
}
struct AffineIndex {
    int64_t constant = 0;
    std::map<uint64_t, int64_t> terms;
    bool valid = true;
};
inline AffineIndex scaled(AffineIndex value, int64_t scale) {
    if (!value.valid || std::abs(value.constant) > INT32_MAX || std::abs(scale) > 4096) return {0, {}, false};
    value.constant *= scale;
    for (auto &[symbol, coefficient] : value.terms) {
        (void)symbol;
        if (std::abs(coefficient) > 4096) return {0, {}, false};
        coefficient *= scale;
    }
    return value;
}
inline AffineIndex sum(AffineIndex left, const AffineIndex &right) {
    left.valid &= right.valid;
    left.constant += right.constant;
    for (const auto &[symbol, coefficient] : right.terms) {
        auto &value = left.terms[symbol]; value += coefficient;
        if (!value) left.terms.erase(symbol);
    }
    if (left.terms.size() > 4 || std::abs(left.constant) > INT32_MAX) left.valid = false;
    return left;
}
// Recover only integer affine expressions inside one straight-line block.
// Unknown definitions become independent symbols; neither an index value nor
// a memory displacement is guessed. In particular (3*i + c)*8 retains c.
inline AffineIndex affine_index(const std::vector<Instruction> &instructions, size_t before,
        unsigned reg, const std::set<uint32_t> &entries, unsigned depth = 0) {
    const auto unknown = [&](size_t at) { return AffineIndex{0, {{(uint64_t(at) << 4) | reg, 1}}, true}; };
    if (depth >= 16) return {0, {}, false};
    for (size_t distance = 0; before && distance < 32; ++distance) {
        if (entries.count(instructions[before].address)) return unknown(before);
        const auto index = --before;
        const auto &op = instructions[index].decoded;
        if (index + 1 < instructions.size() && instructions[index].address + op.len != instructions[index + 1].address)
            return unknown(index + 1);
        const auto explicit_reg = op.modrm_reg + (op.rex_r ? 8u : 0u);
        const auto rm = op.modrm_rm + (op.rex_b ? 8u : 0u);
        const auto value = [&](unsigned operand) { return affine_index(instructions, index, operand, entries, depth + 1); };
        if ((op.opcode == 0x8b || op.opcode == 0x8d || op.opcode == 0x63) && (op.flags & F_MODRM)) {
            if (explicit_reg != reg) continue;
            if (!op.rex_w || op.opcode == 0x63) return unknown(index + 1);
            if (op.opcode == 0x8b) return op.modrm_mod == 3 ? value(rm) : unknown(index + 1);
            if (op.modrm_mod == 3 || (op.modrm_mod == 0 && op.modrm_rm == 5) || op.p_67)
                return unknown(index + 1);
            AffineIndex result;
            result.constant = op.flags & F_DISP32 ? static_cast<int32_t>(op.disp.disp32) :
                op.flags & F_DISP8 ? static_cast<int8_t>(op.disp.disp8) : 0;
            if (!(op.flags & F_SIB)) return sum(result, value(rm));
            if (!(op.modrm_mod == 0 && op.sib_base == 5))
                result = sum(result, value(op.sib_base + (op.rex_b ? 8 : 0)));
            if (op.sib_index != 4 || op.rex_x)
                result = sum(result, scaled(value(op.sib_index + (op.rex_x ? 8 : 0)), 1 << op.sib_scale));
            return result;
        }
        if ((op.opcode == 0x03 || op.opcode == 0x2b) && op.modrm_mod == 3) {
            if (explicit_reg != reg) continue;
            if (!op.rex_w) return unknown(index + 1);
            return sum(value(reg), scaled(value(rm), op.opcode == 0x03 ? 1 : -1));
        }
        if ((op.opcode == 0x01 || op.opcode == 0x29) && op.modrm_mod == 3) {
            if (rm != reg) continue;
            if (!op.rex_w) return unknown(index + 1);
            return sum(value(reg), scaled(value(explicit_reg), op.opcode == 0x01 ? 1 : -1));
        }
        if (op.opcode >= 0xb8 && op.opcode <= 0xbf) {
            if (unsigned(op.opcode - 0xb8 + (op.rex_b ? 8 : 0)) != reg) continue;
            if (op.p_66) return unknown(index + 1);
            const uint64_t immediate = op.rex_w ? op.imm.imm64 : op.imm.imm32;
            return immediate <= INT32_MAX ? AffineIndex{static_cast<int64_t>(immediate), {}, true} : unknown(index + 1);
        }
        if (op.opcode == 0x89 && op.modrm_mod != 3) continue; // Store only.
        if (op.opcode == 0x90 || (op.opcode == 0x0f && op.opcode2 == 0x1f)) continue;
        // Includes calls, partial writes, implicit-register operations, and
        // control-flow boundaries. Their result is a fresh unknown value.
        return unknown(index + 1);
    }
    return unknown(before);
}
// Only the independently identified update_all scope can authorize a native
// cache base. Every use of the preserved base register must address a proven
// cached_texturest member until its restore/overwrite; escaping it is refused.
inline bool cache_base(const std::vector<Instruction> &instructions, size_t first,
                       const address_runtime::State &state, std::string &reason) {
    const auto &lea = instructions[first].decoded;
    const unsigned reg = lea.modrm_reg + (lea.rex_r ? 8 : 0);
    if (reg != 3 && reg != 5 && reg != 6 && reg != 7 && reg < 12) return false;
    std::vector<std::pair<uint32_t, uint32_t>> texture;
    constexpr uint32_t reference = static_cast<uint32_t>(offsetof(graphicst, tex));
    for (const auto &field : state.fields)
        if (field.object == 0x0264a3f0 && field.offset >= reference &&
                field.offset < reference + sizeof(graphicst::tex) && field.sources >= 2)
            texture.emplace_back(field.native_offset, field.native_offset + field.width);
    if (texture.empty()) { reason = "no independently bound cached-texture members"; return false; }
    std::set<uint32_t> entries;
    for (const auto &instruction : instructions) {
        const auto &op = instruction.decoded;
        if ((op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xe9 || op.opcode == 0xeb ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f)) {
            const auto delta = op.flags & F_IMM8 ? static_cast<int8_t>(op.imm.imm8) : static_cast<int32_t>(op.imm.imm32);
            entries.insert(static_cast<uint32_t>(int64_t(instruction.address) + op.len + delta));
        }
    }
    bool used = false;
    std::vector<size_t> pending{first + 1};
    std::vector<bool> visited(instructions.size());
    while (!pending.empty()) {
        const auto index = pending.back(); pending.pop_back();
        if (index >= instructions.size()) return false;
        if (visited[index]) continue;
        visited[index] = true;
        const auto &op = instructions[index].decoded;
        const unsigned explicit_reg = op.modrm_reg + (op.rex_r ? 8 : 0);
        if (op.opcode >= 0x58 && op.opcode <= 0x5f && unsigned(op.opcode - 0x58 + (op.rex_b ? 8 : 0)) == reg)
            continue; // This path restores the caller's register.
        if (op.opcode >= 0xb8 && op.opcode <= 0xbf && unsigned(op.opcode - 0xb8 + (op.rex_b ? 8 : 0)) == reg) {
            if (op.p_66 && !op.rex_w) return false;
            continue; // A complete immediate overwrite ends this definition.
        }
        if (op.opcode >= 0x50 && op.opcode <= 0x57 && unsigned(op.opcode - 0x50 + (op.rex_b ? 8 : 0)) == reg)
            return false; // The cache base must not escape to the stack.
        if (op.opcode == 0xc2 || op.opcode == 0xc3) continue;
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f) ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        if (conditional || jump) {
            const auto displacement = op.flags & F_IMM8 ? static_cast<int8_t>(op.imm.imm8) :
                static_cast<int64_t>(static_cast<int32_t>(op.imm.imm32));
            const auto target = int64_t(instructions[index].address) + op.len + displacement;
            const auto found = std::lower_bound(instructions.begin(), instructions.end(), target,
                [](const auto &instruction, int64_t address) { return instruction.address < address; });
            if (found == instructions.end() || found->address != target ||
                    static_cast<size_t>(found - instructions.begin()) <= first) return false;
            pending.push_back(static_cast<size_t>(found - instructions.begin()));
            if (jump) continue;
        }
        if (!(op.flags & F_MODRM)) {
            // Calls preserve this nonvolatile register under the already
            // established Windows ABI. Refuse implicit string/base users.
            if ((op.opcode >= 0xa4 && op.opcode <= 0xaf) || op.opcode == 0xd7 ||
                    (op.opcode >= 0x6c && op.opcode <= 0x6f) || op.opcode == 0xc8 ||
                    (op.opcode == 0xc9 && reg == 5) ||
                    (op.opcode >= 0x91 && op.opcode <= 0x97 && unsigned(op.opcode - 0x90 + (op.rex_b ? 8 : 0)) == reg) ||
                    (op.opcode >= 0xb0 && op.opcode <= 0xb7 && unsigned(op.opcode - 0xb0 + (op.rex_b ? 8 : 0)) == reg)) return false;
            pending.push_back(index + 1); continue;
        }
        if (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5)) return false;
        const bool overwrites = !group_operand(op) && explicit_reg == reg &&
            (op.opcode == 0x8b || op.opcode == 0x8d) && (op.rex_w || !op.p_66);
        if (op.modrm_mod == 3) {
            const auto rm = op.modrm_rm + (op.rex_b ? 8 : 0);
            if (overwrites && rm != reg) continue;
            if (rm == reg || (!group_operand(op) && explicit_reg == reg)) return false;
            pending.push_back(index + 1); continue;
        }
        if (!group_operand(op) && explicit_reg == reg && !overwrites) return false;
        const unsigned base = (op.flags & F_SIB ? op.sib_base : op.modrm_rm) + (op.rex_b ? 8 : 0);
        const unsigned offset_reg = op.sib_index + (op.rex_x ? 8 : 0);
        if ((op.flags & F_SIB) && offset_reg == reg) return false;
        if (base == reg) {
            const int64_t displacement = (op.flags & F_DISP32) ? static_cast<int32_t>(op.disp.disp32) :
                (op.flags & F_DISP8) ? static_cast<int8_t>(op.disp.disp8) : 0;
            AffineIndex address{displacement, {}, true};
            if ((op.flags & F_SIB) && (op.sib_index != 4 || op.rex_x))
                address = sum(address, scaled(affine_index(instructions, index, offset_reg, entries), 1 << op.sib_scale));
            constexpr auto stride = sizeof(graphicst::tex[0]);
            const bool cache_index = address.valid && std::all_of(address.terms.begin(), address.terms.end(),
                [&](const auto &term) { return term.second % static_cast<int64_t>(stride) == 0; });
            if (!cache_index || address.constant < 0 || std::none_of(texture.begin(), texture.end(), [&](const auto &field) {
                    return address.constant >= field.first && address.constant < field.second;
                })) {
                std::ostringstream detail;
                detail << "indexed member has no cached-texture proof at 0x" << std::hex << instructions[index].address
                    << " constant=0x" << address.constant << " terms=" << address.terms.size();
                reason = detail.str(); return false;
            }
            used = true;
        }
        if (overwrites) continue;
        pending.push_back(index + 1);
    }
    return used;
}
} // namespace dfcn::display_decode

namespace dfcn::pe_runtime {
template<typename Image>
inline void discover_display_inputs(const Image &image, const std::vector<unsigned char> &blob,
                                    address_runtime::State &state) {
    state.display_sites.clear(); state.missing_display_scopes.clear();
    if (blob.empty()) { state.missing_display_scopes.push_back(0); return; }
    size_t cursor = 0;
    const auto number = [&]() {
        if (cursor > blob.size() || blob.size() - cursor < 4) throw std::runtime_error("Truncated display scope catalog");
        uint32_t value; std::memcpy(&value, blob.data() + cursor, 4); cursor += 4; return value;
    };
    if (number() != 1) throw std::runtime_error("Unsupported display scope catalog");
    const auto count = number();
    if (!count || count > 4096 || blob.size() != 8 + uint64_t(count) * 8)
        throw std::runtime_error("Invalid display scope count");
    const auto graphics = address_runtime::resolve(state.ranges, 0x0264a3f0);
    uint32_t graphics_extent = 0;
    for (const auto &type : state.semantic_types)
        if (type.type == native_history_abi::semantic_id("graphic")) graphics_extent = type.size;
    if (!graphics_extent) for (const auto &field : state.fields)
        if (field.object == 0x0264a3f0)
            graphics_extent = (std::max)(graphics_extent, field.native_offset + field.width);
    size_t diagnostics = 0;
    const auto explain = [&](uint32_t reference, uint32_t entry, const std::string &reason) {
        if (diagnostics++ >= 12) return;
        std::ostringstream message;
        message << "Unresolved display scope: reference=0x" << std::hex << reference
            << " native=0x" << entry << " " << reason;
        if (!state.message.empty()) state.message += "; ";
        state.message += message.str();
    };
    for (uint32_t scope = 0; scope < count; ++scope) {
        const auto reference = number(), flags = number();
        if (!reference || (flags & ~1u)) throw std::runtime_error("Invalid display scope identity");
        auto entry = address_runtime::resolve(state.function_owners, reference);
        if (!entry) entry = address_runtime::resolve(state.ranges, reference);
        auto function = std::lower_bound(image.functions.begin(), image.functions.end(), entry,
            [](const auto &value, uint32_t address) { return value.begin < address; });
        std::vector<display_decode::Instruction> instructions;
        if (!graphics || !entry || function == image.functions.end() || function->begin != entry) {
            state.missing_display_scopes.push_back(reference);
            explain(reference, entry, !graphics ? "graphics root is unresolved" : "function entry is unresolved");
            continue;
        }
        bool decoded = true;
        display_decode::DecodeFailure decode_failure;
        const auto owner = function->owner ? function->owner : function->begin;
        std::vector<std::pair<uint32_t, uint32_t>> regions;
        for (const auto &fragment : image.functions) {
            if ((fragment.owner ? fragment.owner : fragment.begin) != owner) continue;
            // A CHAININFO boundary can separate a switch dispatch from its
            // inline table. Consecutive extents with the same proved unwind
            // owner form one code region, so table evidence survives that
            // boundary without admitting bytes from another function.
            if (!regions.empty() && regions.back().second == fragment.begin)
                regions.back().second = fragment.end;
            else regions.emplace_back(fragment.begin, fragment.end);
        }
        for (const auto &[begin, end] : regions) {
            if (!display_decode::decode(image, begin, end, instructions, nullptr, &decode_failure)) { decoded = false; break; }
        }
        if (!decoded) {
            state.missing_display_scopes.push_back(reference);
            std::ostringstream message;
            message << "decoder rejected instruction=0x" << std::hex << decode_failure.address
                << " " << decode_failure.reason << " register=" << std::dec << decode_failure.reg;
            explain(reference, entry, message.str());
            continue;
        }
        std::vector<address_runtime::DisplaySite> sites;
        bool valid = true;
        std::string failure;
        for (size_t index = 0; index < instructions.size(); ++index) {
            const auto &instruction = instructions[index];
            const auto &op = instruction.decoded;
            const auto reject = [&](const char *reason, uint32_t target = 0) {
                valid = false;
                if (!failure.empty()) return;
                std::ostringstream message;
                message << reason << " instruction=0x" << std::hex << instruction.address
                    << " opcode=0x" << unsigned(op.opcode);
                if (op.opcode == 0x0f) message << "/0x" << unsigned(op.opcode2);
                if (target) message << " target=0x" << target << " graphics_offset=0x" << target - graphics;
                failure = message.str();
            };
            if (!(op.flags & F_MODRM) || op.modrm_mod != 0 || op.modrm_rm != 5 || op.p_67) continue;
            const int64_t address = int64_t(instruction.address) + op.len + static_cast<int32_t>(op.disp.disp32);
            if (address < graphics || address >= image.size) continue;
            const auto offset = static_cast<uint32_t>(address - graphics);
            std::vector<const address_runtime::FieldBinding *> fields;
            for (const auto &field : state.fields)
                if (field.object == 0x0264a3f0 && offset >= field.native_offset &&
                        uint64_t(offset) < uint64_t(field.native_offset) + field.width) fields.push_back(&field);
            if (fields.empty()) {
                // Non-graphics globals in the same renderer remain untouched;
                // a reference inside the proven graphics extent is unresolved.
                if (offset < graphics_extent) reject("graphics member is unmapped", static_cast<uint32_t>(address));
                continue;
            }
            if (fields.size() != 1 || op.p_lock || op.p_seg || op.len < 6 || op.len > 10 ||
                    (op.opcode == 0x8d && (!op.rex_w || op.p_66))) {
                reject(fields.size() != 1 ? "graphics member is ambiguous" : "unsupported operand encoding",
                    static_cast<uint32_t>(address)); continue;
            }
            const auto *field = fields.front();
            const auto width = display_decode::access_width(op);
            const auto inside = offset - field->native_offset;
            const bool address_only = !(field->flags & 4);
            // Address-only resources retain their original native target; a
            // one-byte identity contract does not authorize snapshot copying.
            if (width == UINT32_MAX || (!address_only && width && width > field->width - inside) ||
                    (width && !image.section(static_cast<uint32_t>(address), width))) {
                reject(width == UINT32_MAX ? "unproved memory access width" : "member-width contract is insufficient",
                    static_cast<uint32_t>(address)); continue;
            }
            const auto displacement = op.len - display_decode::immediate_width(op) - 4;
            const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0);
            if ((!display_decode::group_operand(op) && reg == 4) ||
                    (!op.rex && op.modrm_reg >= 4 && display_decode::byte_register_operand(op))) {
                reject("register cannot be preserved by selector", static_cast<uint32_t>(address)); continue;
            }
            size_t prefix = 0;
            while (prefix < instruction.bytes.size() && (instruction.bytes[prefix] == 0x66 ||
                    instruction.bytes[prefix] == 0xf2 || instruction.bytes[prefix] == 0xf3)) ++prefix;
            if (prefix < instruction.bytes.size() && (instruction.bytes[prefix] & 0xf0) == 0x40) ++prefix;
            if (prefix + (op.opcode == 0x0f ? 2 : 1) + 1 != displacement) {
                reject("unsupported selector prefix layout", static_cast<uint32_t>(address)); continue;
            }
            uint32_t role = address_only ? 1u : 0u;
            if (op.opcode == 0x8d && !offset && (flags & 1)) {
                std::string reason;
                if (!display_decode::cache_base(instructions, index, state, reason)) {
                    reject(("native cache-base use is unproved: " + reason).c_str(), static_cast<uint32_t>(address)); continue;
                }
                role = 1;
            }
            sites.push_back({instruction.address, field->offset + inside, static_cast<uint32_t>(address),
                displacement, role, instruction.bytes});
        }
        if (!valid || sites.empty()) {
            state.missing_display_scopes.push_back(reference);
            explain(reference, entry, failure.empty() ? "no proved graphics RIP operands" : failure);
        }
        else state.display_sites.insert(state.display_sites.end(), sites.begin(), sites.end());
    }
    std::sort(state.display_sites.begin(), state.display_sites.end(), [](const auto &left, const auto &right) {
        return left.address < right.address;
    });
    state.display_sites.erase(std::unique(state.display_sites.begin(), state.display_sites.end(), [](const auto &a, const auto &b) {
        if (a.address != b.address) return false;
        if (a.instruction != b.instruction || a.target != b.target || a.field != b.field || a.flags != b.flags)
            throw std::runtime_error("Conflicting native display selector");
        return true;
    }), state.display_sites.end());
    if (!state.missing_display_scopes.empty()) state.complete = false;
}
} // namespace dfcn::pe_runtime
