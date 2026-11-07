#pragma once
#include <array>
#include <optional>
#include "native_address_scan.h"
#include "native_display_discovery.h"
#include "native_frame_registers.h"

namespace dfcn::pe_runtime::frame_detail {
struct Pair { uint32_t anchor, member, width; };
struct Operand { uint32_t instruction, length, displacement, width, base, access, flags; };
struct Member { uint32_t instruction, displacement, width, load, type, member, source_slot; };
inline bool member_encoding(const std::vector<unsigned char> &raw, const Member &member) {
    using namespace display_decode;
    if (!member.type || !member.member || member.source_slot != 8 ||
            (member.width != 1 && member.width != 4) || member.load >= member.instruction ||
            member.instruction >= raw.size() || uint64_t(member.displacement) + member.width > raw.size()) return false;
    const auto decode = [&](uint32_t at, hde64s &op) {
        unsigned char bytes[32]{};
        const auto size = (std::min)(size_t(15), raw.size() - at);
        std::memcpy(bytes, raw.data() + at, size); hde64_disasm(bytes, &op);
        return op.len && op.len <= size && !(op.flags & F_ERROR) && !op.p_66 && !op.p_67 &&
            !op.p_lock && !op.p_rep && !op.p_seg;
    };
    hde64s load{}, field{};
    if (!decode(member.load, load) || load.opcode != 0x8b || !load.rex_w || load.modrm_mod == 3 ||
            !(load.flags & F_SIB) || load.sib_base != 4 || load.rex_b || load.sib_index != 4 || load.rex_x ||
            uint64_t(member.load) + load.len != member.instruction || !decode(member.instruction, field) ||
            !field.rex_w || field.rex_x) return false;
    const auto reg = unsigned(load.modrm_reg + (load.rex_r ? 8 : 0));
    if (reg == 4) return false;
    const bool accumulator = reg == 0 && field.opcode == 0x05 && !field.rex_r && !field.rex_b &&
        field.len == 6 && member.width == 4 && member.displacement == member.instruction + 2;
    const bool immediate = (field.opcode == 0x81 || field.opcode == 0x83) && field.modrm_mod == 3 &&
        !field.modrm_reg && !field.rex_r && unsigned(field.modrm_rm + (field.rex_b ? 8 : 0)) == reg &&
        member.width == (field.opcode == 0x83 ? 1u : 4u) && field.len == member.width + 3 &&
        member.displacement == member.instruction + 3;
    // Preserve the already supported accumulator LEA representation.
    const bool lea = reg == 0 && field.opcode == 0x8d && field.modrm == 0x80 && !field.rex_r && !field.rex_b &&
        field.len == 7 && member.width == 4 && member.displacement == member.instruction + 3;
    return accumulator || immediate || lea;
}
struct Block { address_runtime::Pattern pattern; std::vector<Operand> operands; std::vector<Member> members; };
struct MemberSite { uint32_t reference, owner; std::vector<unsigned char> raw; Member member; };
struct ReceiverAliasSite {
    uint32_t reference, owner, type, member, delta, base, displacement, width;
    std::vector<unsigned char> raw;
};
struct Origins {
    uint32_t owner = 0, begin = 0, end = 0;
    int32_t rsp = 0, rbp = 0;
    uint32_t flags = 0;
};
struct Evidence {
    std::vector<Pair> pairs;
    std::vector<Block> blocks;
    std::map<uint32_t, std::array<uint32_t, 3>> frame_registers; // owner -> register/flags, ready, first clobber.
    std::vector<MemberSite> receiver_sites; // Independent typed pairs, never additional Frame CFG blocks.
    std::vector<ReceiverAliasSite> receiver_aliases;
    std::vector<unsigned char> argument_aliases; // Exact-reference, complete CFG entry-argument facts.
    std::map<uint32_t, std::vector<Origins>> origins; // Proved entry-RSP coordinates, including CFG joins.
    std::vector<unsigned char> typed_source_graphs, typed_members;
};
class Reader {
    const std::vector<unsigned char> &data_; size_t cursor_ = 0;
public:
    explicit Reader(const std::vector<unsigned char> &data) : data_(data) {}
    void take(void *value, size_t size) {
        if (size > data_.size() - cursor_) throw std::runtime_error("Truncated native frame evidence");
        if (size) std::memcpy(value, data_.data() + cursor_, size);
        cursor_ += size;
    }
    uint32_t number() { uint32_t value; take(&value, 4); return value; }
    uint32_t count(uint32_t limit = 65536) {
        const auto value = number();
        if (value > limit) throw std::runtime_error("Oversized native frame evidence");
        return value;
    }
    std::vector<unsigned char> blob(uint32_t maximum = 1024 * 1024) {
        std::vector<unsigned char> value(count(maximum)); take(value.data(), value.size()); return value;
    }
    void finish() const {
        if (cursor_ != data_.size()) throw std::runtime_error("Unexpected native frame evidence suffix");
    }
};
inline Evidence read(const std::vector<unsigned char> &blob) {
    Evidence evidence;
    if (blob.empty()) return evidence;
    Reader reader(blob); char magic[8]; reader.take(magic, 8);
    const auto version = reader.number();
    if (std::memcmp(magic, "DFCNFR01", 8) || !version || version > 11)
        throw std::runtime_error("Unsupported native frame evidence");
    evidence.pairs.resize(reader.count());
    std::set<std::pair<uint32_t, uint32_t>> pairs;
    for (auto &pair : evidence.pairs) {
        pair = {reader.number(), reader.number(), reader.number()};
        if (!pair.anchor || !pair.member || pair.anchor == pair.member || !pair.width || pair.width > 32 ||
                !pairs.emplace(pair.anchor, pair.member).second)
            throw std::runtime_error("Invalid native frame requirement");
    }
    evidence.blocks.resize(reader.count());
    std::set<uint32_t> references;
    for (auto &block : evidence.blocks) {
        auto &pattern = block.pattern;
        pattern.reference = reader.number(); pattern.owner = reader.number(); pattern.flags = 9;
        pattern.raw = reader.blob(); pattern.mask = reader.blob();
        if (!pattern.reference || !pattern.owner || pattern.raw.empty() || pattern.raw.size() != pattern.mask.size() ||
                uint64_t(pattern.reference) + pattern.raw.size() > UINT32_MAX || !references.insert(pattern.reference).second)
            throw std::runtime_error("Invalid native frame instruction block");
        std::vector<bool> described(pattern.raw.size());
        pattern.fixups.resize(reader.count());
        for (auto &fixup : pattern.fixups) {
            fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if ((fixup.width != 1 && fixup.width != 4 && fixup.width != 8) ||
                    uint64_t(fixup.offset) + fixup.width > pattern.raw.size() || fixup.next > pattern.raw.size())
                throw std::runtime_error("Invalid native frame relocation");
            for (uint32_t at = fixup.offset; at < fixup.offset + fixup.width; ++at) described[at] = true;
        }
        block.operands.resize(reader.count());
        std::set<uint32_t> sites;
        for (auto &operand : block.operands) {
            operand = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if (!operand.length || operand.length > 15 || uint64_t(operand.instruction) + operand.length > pattern.raw.size() ||
                    (operand.width != 0 && operand.width != 1 && operand.width != 4) ||
                    (operand.base != 4 && !(version >= 11 && operand.base == 5)) ||
                    operand.displacement < operand.instruction ||
                    uint64_t(operand.displacement) + operand.width > uint64_t(operand.instruction) + operand.length ||
                    operand.access > 64 || operand.flags > (version >= 4 ? 2u : 1u) ||
                    bool(operand.flags) != (operand.access == 0) ||
                    (operand.flags == 2 && (operand.base != 4 || operand.length != 5 || operand.width ||
                        operand.displacement != operand.instruction || pattern.raw[operand.instruction] != 0xe8)) ||
                    !sites.insert(operand.instruction).second)
                throw std::runtime_error("Invalid native frame stack operand");
            for (uint32_t at = operand.displacement; at < operand.displacement + operand.width; ++at) described[at] = true;
        }
        for (size_t at = 0; at < pattern.mask.size(); ++at)
            if (pattern.mask[at] > 1 || (pattern.mask[at] && !described[at]))
                throw std::runtime_error("Unexplained native frame wildcard");
        if (version >= 5) {
            block.members.resize(reader.count());
            std::set<uint32_t> members;
            for (auto &member : block.members) {
                member = {reader.number(), reader.number(), reader.number(), reader.number(),
                    reader.number(), reader.number(), reader.number()};
                if (!member_encoding(pattern.raw, member) ||
                        !members.insert(member.instruction).second)
                    throw std::runtime_error("Invalid typed frame receiver member");
            }
        }
    }
    if (version >= 2) {
        const auto count = reader.count();
        for (uint32_t at = 0; at < count; ++at) {
            const auto owner = reader.number(), reg = reader.number(), ready = reader.number();
            const auto end = version >= 3 ? reader.number() : UINT32_MAX;
            if (!owner || !(reg & 15) || (reg & ~0x10fu) || ready < owner || end <= ready ||
                    !evidence.frame_registers.emplace(owner, std::array<uint32_t, 3>{reg, ready, end}).second)
                throw std::runtime_error("Invalid canonical frame-register contract");
        }
    }
    if (version >= 6) {
        evidence.receiver_sites.resize(reader.count());
        std::set<uint32_t> references;
        for (auto &site : evidence.receiver_sites) {
            site.reference = reader.number(); site.owner = reader.number(); site.raw = reader.blob();
            auto &member = site.member;
            member = {reader.number(), reader.number(), reader.number(), reader.number(),
                reader.number(), reader.number(), reader.number()};
            const auto &raw = site.raw;
            if (!site.reference || !site.owner || uint64_t(site.reference) + raw.size() > UINT32_MAX ||
                    !references.insert(site.reference).second || raw.size() < 8 || raw.size() > 15 ||
                    member.load || uint64_t(member.displacement) + member.width != raw.size() ||
                    !member_encoding(raw, member))
                throw std::runtime_error("Invalid independent typed receiver site");
        }
    }
    if (version >= 7) {
        evidence.receiver_aliases.resize(reader.count());
        std::set<uint32_t> references;
        for (auto &site : evidence.receiver_aliases) {
            site = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(),
                reader.number(), reader.number(), reader.number(), reader.blob()};
            const auto &raw = site.raw;
            const auto mode = raw.size() >= 3 ? raw[2] >> 6 : 0;
            const auto base = raw.size() >= 3 ? (raw[2] & 7) + ((raw[0] & 1) ? 8 : 0) : 16;
            if (!site.reference || !site.owner || !site.type || !site.member ||
                    uint64_t(site.reference) + raw.size() > UINT32_MAX || !references.insert(site.reference).second ||
                    (raw.size() != 4 && raw.size() != 7) || (raw[0] & 0xf8) != 0x48 || raw[1] != 0x8b ||
                    site.displacement != 3 || site.width != (mode == 1 ? 1u : mode == 2 ? 4u : 0u) ||
                    raw.size() != 3 + site.width || site.base != unsigned(base) ||
                    !(uint16_t(0xf0e8) & (1u << site.base)) || (site.base & 7) == 4)
                throw std::runtime_error("Invalid typed nonvolatile receiver load");
        }
    }
    if (version >= 8) evidence.argument_aliases = reader.blob(16 * 1024 * 1024);
    if (version >= 9) {
        const auto count = reader.count(1000000);
        for (uint32_t at = 0; at < count; ++at) {
            Origins value{reader.number(), reader.number(), reader.number(),
                static_cast<int32_t>(reader.number()), static_cast<int32_t>(reader.number()), reader.number()};
            auto &owner = evidence.origins[value.owner];
            if (!value.owner || value.begin < value.owner || value.end <= value.begin ||
                    !value.flags || (value.flags & ~3u) || (!owner.empty() && owner.back().end > value.begin))
                throw std::runtime_error("Invalid canonical stack-origin interval");
            owner.push_back(value);
        }
    }
    if (version >= 10) {
        evidence.typed_source_graphs = reader.blob(64 * 1024 * 1024);
        evidence.typed_members = reader.blob(64 * 1024 * 1024);
    }
    reader.finish(); return evidence;
}
inline std::optional<int32_t> origin(const Evidence &evidence, uint32_t owner,
        uint32_t address, uint32_t length, unsigned base) {
    if ((base != 4 && base != 5) || !length) return {};
    const auto found = evidence.origins.find(owner);
    if (found == evidence.origins.end()) return {};
    const auto &intervals = found->second;
    auto at = std::upper_bound(intervals.begin(), intervals.end(), address,
        [](uint32_t value, const auto &interval) { return value < interval.begin; });
    if (at == intervals.begin()) return {};
    --at;
    if (address < at->begin || uint64_t(address) + length > at->end || !(at->flags & (1u << (base - 4)))) return {};
    return base == 4 ? at->rsp : at->rbp;
}
// Called only after both operands have independently proved stack bases.
// Width changes remove only the displacement; an entry-RSP proof additionally
// permits the equivalent no-index RSP/RBP addressing encodings to be compared.
inline std::vector<unsigned char> stack_encoding(std::vector<unsigned char> bytes,
        const display_decode::hde64s &op, uint32_t displacement, uint32_t width,
        bool unified, bool mask = false) {
    const bool sib = (op.flags & F_SIB) != 0;
    const auto modrm = displacement - 1 - (sib ? 1 : 0);
    if (!mask) bytes[modrm] = unified ? (bytes[modrm] & 0x38) | 5 : bytes[modrm] & 63;
    bytes.erase(bytes.begin() + displacement, bytes.begin() + displacement + width);
    if (unified && sib) bytes.erase(bytes.begin() + modrm + 1);
    return bytes;
}
inline int32_t displacement(const unsigned char *bytes, uint32_t width) {
    if (!width) return 0;
    if (width == 1) return static_cast<int8_t>(*bytes);
    int32_t value; std::memcpy(&value, bytes, 4); return value;
}
template<typename Image>
inline auto function_at(const Image &image, uint32_t address, size_t width = 1) {
    auto found = std::upper_bound(image.functions.begin(), image.functions.end(), address,
        [](uint32_t value, const auto &function) { return value < function.begin; });
    if (found == image.functions.begin()) return image.functions.end();
    --found;
    return address >= found->begin && uint64_t(address) + width <= found->end ? found : image.functions.end();
}
template<typename Image>
inline bool stack_origin(const Image &image, uint32_t instruction, int32_t &origin) {
    auto function = function_at(image, instruction);
    if (function == image.functions.end()) return false;
    int64_t allocation = 0;
    for (unsigned depth = 0; depth < 64; ++depth) {
        const auto *header = image.read(function->unwind, 4);
        if (!header || (header[0] & 7) != 1 || instruction < uint64_t(function->begin) + header[1]) return false;
        const auto count = header[2];
        const auto *codes = image.read(function->unwind + 4, uint32_t(count) * 2);
        if (!codes && count) return false;
        for (uint32_t at = 0; at < count;) {
            const auto operation = codes[at * 2 + 1] & 15, info = codes[at * 2 + 1] >> 4;
            uint32_t slots = 1;
            if (operation == 0) allocation += 8;
            else if (operation == 1) {
                slots = info == 0 ? 2 : info == 1 ? 3 : 0;
                if (!slots || at + slots > count) return false;
                uint32_t value = 0;
                if (info == 0) { uint16_t small; std::memcpy(&small, codes + at * 2 + 2, 2); value = uint32_t(small) * 8; }
                else std::memcpy(&value, codes + at * 2 + 2, 4);
                allocation += value;
            } else if (operation == 2) allocation += info * 8 + 8;
            else if (operation == 3) { if (info) return false; }
            else if (operation == 4 || operation == 8) slots = 2;
            else if (operation == 5 || operation == 9) slots = 3;
            else return false; // Machine frames and unknown unwind operations are not ordinary locals.
            if (at + slots > count || allocation > INT32_MAX) return false;
            at += slots;
        }
        if (!(header[0] & (4 << 3))) { origin = static_cast<int32_t>(-allocation); return true; }
        const auto *chain = image.read(function->unwind + 4 + ((uint32_t(count) + 1) & ~1u) * 2, 12);
        if (!chain) return false;
        uint32_t parent; std::memcpy(&parent, chain, 4);
        function = function_at(image, parent);
        if (function == image.functions.end() || function->begin != parent) return false;
        // Every ancestor prologue is already active in its chained body.
        instruction = function->end;
    }
    return false;
}
inline bool stack_operand(const display_decode::hde64s &op) {
    using namespace display_decode;
    return (op.flags & F_MODRM) && op.modrm_mod != 3 && (op.flags & F_SIB) &&
        op.sib_base == 4 && !op.rex_b && op.sib_index == 4 && !op.rex_x && !op.p_67;
}
// Keep stack_operand's existing RSP-only contract for shadow-slot consumers.
// Frame operands additionally accept an actual, independently proved RBP base.
inline unsigned frame_memory_base(const display_decode::hde64s &op) {
    using namespace display_decode;
    if (!(op.flags & F_MODRM) || op.modrm_mod == 3 || op.rex_b) return 0;
    if (op.flags & F_SIB) {
        if (!op.modrm_mod && op.sib_base == 5) return 0;
        return op.sib_base == 4 || op.sib_base == 5 ? op.sib_base : 0;
    }
    return op.modrm_mod && op.modrm_rm == 5 ? 5 : 0;
}
inline unsigned frame_operand_base(const display_decode::hde64s &op) {
    if (op.p_67 || op.p_seg || ((op.flags & F_SIB) && (op.sib_index != 4 || op.rex_x))) return 0;
    return frame_memory_base(op);
}
inline bool writes_rsp(const display_decode::hde64s &op);
template<typename Image> class TargetOrigins {
    const Image &image_;
    std::map<uint32_t, TargetRbpFrame> rbp_;
    struct FixedRsp {
        bool valid = false;
        std::vector<std::pair<uint32_t, uint32_t>> exits;
    };
    std::map<uint32_t, FixedRsp> fixed_;
    FixedRsp fixed_rsp(uint32_t owner) {
        using namespace display_decode;
        FixedRsp result;
        const auto &frame = rbp(owner);
        const auto function = function_at(image_, owner);
        if (!frame.valid || !frame.origin_known || function == image_.functions.end() || function->begin != owner) return result;
        const auto *header = image_.read(function->unwind, 4);
        if (!header) return result;
        std::map<uint32_t, Instruction> code;
        for (const auto &[begin, end] : logical_regions(image_, owner)) {
            std::vector<Instruction> rows;
            if (!decode(image_, begin, end, rows)) return result;
            for (auto &row : rows) code.emplace(row.address, std::move(row));
        }
        const auto restore = [](const hde64s &op) {
            if (op.p_66 || op.p_67 || op.p_seg || op.p_lock || op.p_rep) return false;
            if (op.opcode >= 0x58 && op.opcode <= 0x5f) {
                const auto reg = op.opcode - 0x58 + (op.rex_b ? 8 : 0);
                return reg == 3 || reg == 5 || reg == 6 || reg == 7 || reg >= 12;
            }
            if (!op.rex_w) return false;
            if ((op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_mod == 3 &&
                    !op.modrm_reg && op.modrm_rm == 4 && !op.rex_b)
                return op.opcode == 0x83 ? static_cast<int8_t>(op.imm.imm8) > 0 : static_cast<int32_t>(op.imm.imm32) > 0;
            return op.opcode == 0x8d && op.modrm_reg == 4 && !op.rex_r && frame_operand_base(op) == 5;
        };
        for (const auto &[address, instruction] : code) {
            if (address < uint64_t(owner) + header[1] || !writes_gpr(instruction.decoded, 4)) continue;
            auto at = code.find(address);
            uint32_t end = 0;
            while (at != code.end()) {
                const auto &op = at->second.decoded;
                if (op.opcode == 0xc3 || op.opcode == 0xc2) { end = at->first + op.len; break; }
                if (!restore(op)) return result;
                const auto next = at->first + op.len;
                ++at;
                if (at == code.end() || at->first != next) return result;
            }
            if (!end) return result;
            result.exits.emplace_back(address, end);
        }
        // Every post-prologue RSP mutation terminates in a real contiguous
        // epilogue. No such path can rejoin an operand's live frame interval.
        result.valid = true;
        return result;
    }
public:
    explicit TargetOrigins(const Image &image) : image_(image) {}
    const TargetRbpFrame &rbp(uint32_t owner) {
        auto found = rbp_.find(owner);
        if (found == rbp_.end()) {
            TargetRbpFrame frame;
            const auto regions = logical_regions(image_, owner);
            if (regions.size() == 1 && regions.front().first == owner &&
                    display_decode::no_eh_continuations(image_, owner, regions.front().second))
                frame = target_rbp_frame(image_, owner);
            found = rbp_.emplace(owner, std::move(frame)).first;
        }
        return found->second;
    }
    std::optional<int32_t> get(uint32_t owner, uint32_t address, uint32_t width, unsigned base, bool fixed = false) {
        const auto function = function_at(image_, address, width);
        if (!width || function == image_.functions.end() ||
                (function->owner ? function->owner : function->begin) != owner) return {};
        if (base == 4) {
            if (fixed) {
                auto found = fixed_.find(owner);
                if (found == fixed_.end()) found = fixed_.emplace(owner, fixed_rsp(owner)).first;
                if (!found->second.valid || std::any_of(found->second.exits.begin(), found->second.exits.end(),
                        [&](const auto &exit) { return address < exit.second && uint64_t(address) + width > exit.first; })) return {};
            }
            int32_t value = 0;
            return stack_origin(image_, address, value) ? std::optional<int32_t>(value) : std::nullopt;
        }
        if (base != 5) return {};
        const auto &frame = rbp(owner);
        if (!frame.valid || !frame.origin_known || address < frame.ready ||
                uint64_t(address) + width > frame.end) return {};
        return frame.rsp_offset;
    }
};
inline bool writes_rsp(const display_decode::hde64s &op) {
    using namespace display_decode;
    const auto destination = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
    if ((op.opcode >= 0x50 && op.opcode <= 0x5f) || op.opcode == 0x68 || op.opcode == 0x6a ||
            op.opcode == 0xc8 || op.opcode == 0xc9 || op.opcode == 0x9c || op.opcode == 0x9d) return true;
    if (op.opcode >= 0x91 && op.opcode <= 0x97 && op.opcode - 0x90 + (op.rex_b ? 8 : 0) == 4) return true;
    if (op.opcode >= 0xb0 && op.opcode <= 0xb7 && op.opcode - 0xb0 + (op.rex_b ? 8 : 0) == 4) return true;
    if (op.opcode >= 0xb8 && op.opcode <= 0xbf) return op.opcode - 0xb8 + (op.rex_b ? 8 : 0) == 4;
    if (!(op.flags & F_MODRM)) return false;
    if (op.modrm_mod == 3 && rm == 4 && op.opcode != 0x39 && op.opcode != 0x3b && op.opcode != 0x85 &&
            !((op.opcode == 0x80 || op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 7)) return true;
    return destination == 4 && (op.opcode == 0x8b || op.opcode == 0x8d || op.opcode == 0x63 ||
        op.opcode == 0x03 || op.opcode == 0x2b || op.opcode == 0x33 || op.opcode == 0x23 || op.opcode == 0x0b ||
        (op.opcode == 0x0f && ((op.opcode2 >= 0x40 && op.opcode2 <= 0x4f) || op.opcode2 == 0xaf ||
            op.opcode2 == 0xb6 || op.opcode2 == 0xb7 || op.opcode2 == 0xbe || op.opcode2 == 0xbf)));
}
template<typename Image>
inline bool stable_path(const Image &image, const address_runtime::FrameOperandBinding &member,
        const address_runtime::FrameOperandBinding &anchor, const std::map<uint32_t, display_decode::Instruction> &code,
        TargetOrigins<Image> &origins, bool rbp_evidence, std::string *failure = nullptr) {
    using namespace display_decode;
    const auto reject = [&](uint32_t address, const char *reason) {
        if (failure) {
            std::ostringstream message;
            message << reason << " instruction=0x" << std::hex << address;
            *failure = message.str();
        }
        return false;
    };
    if (rbp_evidence) {
        const auto boundary = [&](const address_runtime::FrameOperandBinding &binding, bool is_anchor) {
            const auto at = code.find(binding.native_instruction);
            if (at == code.end()) return false;
            const auto &op = at->second.decoded;
            const bool call_anchor = is_anchor && op.opcode == 0xe8 && op.len == 5;
            const auto base = call_anchor ? 4u : frame_operand_base(op);
            const auto origin = origins.get(binding.owner, at->first, op.len, base, true);
            if (!origin) return false;
            const auto width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
            const auto offset = call_anchor ? 0 : displacement(at->second.bytes.data() +
                op.len - immediate_width(op) - width, width);
            return int64_t(*origin) + offset == binding.stack_offset;
        };
        if (!boundary(member, false) || !boundary(anchor, true))
            return reject(anchor.native_instruction, "frame pair has no consistent entry-RSP origins");
    }
    const auto start = code.find(member.native_instruction);
    if (start == code.end()) return reject(member.native_instruction, "member instruction is outside the decoded scope");
    const auto first = member.native_instruction + start->second.decoded.len;
    std::vector<uint32_t> pending{first};
    std::set<uint32_t> visited, clobbers;
    std::map<uint32_t, std::vector<uint32_t>> predecessors;
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (address == anchor.native_instruction || address == member.native_instruction) continue;
        if (!visited.insert(address).second) continue;
        if (visited.size() > 65536) return reject(address, "frame path exceeds the bounded instruction graph");
        const auto instruction = code.find(address);
        if (instruction == code.end()) return reject(address, "frame path leaves the decoded instruction graph");
        const auto &op = instruction->second.decoded;
        const auto function = function_at(image, address, op.len);
        if (function == image.functions.end() || (function->owner ? function->owner : function->begin) != member.owner)
            return reject(address, "frame path leaves its unwind owner");
        if (op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc) continue;
        if (rbp_evidence ? (writes_gpr(op, 4) || writes_gpr(op, 5)) : writes_rsp(op)) clobbers.insert(address);
        if (rbp_evidence && (op.flags & F_SIB) && op.sib_index == 5 && !op.rex_x) {
            // The proved frame pointer may also escape as a scaled index
            // with an unrelated base, including address-size truncation.
            clobbers.insert(address);
        }
        const auto base = frame_memory_base(op);
        const bool frame_memory = rbp_evidence ? (base == 4 || base == 5) : stack_operand(op);
        if (frame_memory && !frame_operand_base(op)) {
            // An indexed/truncated frame alias cannot establish a disjoint
            // write or address escape; it may touch the protected local.
            clobbers.insert(address);
        } else if (frame_memory) {
            const auto origin = origins.get(member.owner, address, op.len, base, rbp_evidence);
            if (!origin) return reject(address, "frame path has no proved stack origin");
            const auto width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
            const auto offset = int64_t(*origin) + displacement(instruction->second.bytes.data() +
                op.len - immediate_width(op) - width, width);
            const auto access = access_width(op);
            // An address of this slot could escape to a callee. Memory writes
            // or unknown access semantics cannot preserve its live value.
            const bool reads_only = op.opcode == 0x8b || op.opcode == 0x63 || op.opcode == 0x3b ||
                op.opcode == 0x39 || op.opcode == 0x85 ||
                ((op.opcode == 0x80 || op.opcode == 0x81 || op.opcode == 0x83) && op.modrm_reg == 7) ||
                (op.opcode == 0x0f && (op.opcode2 == 0xb6 || op.opcode2 == 0xb7 || op.opcode2 == 0xbe || op.opcode2 == 0xbf));
            if (offset < int64_t(member.stack_offset) + member.access_width &&
                    offset + (access == UINT32_MAX ? 64 : (std::max)(1u, access)) > member.stack_offset &&
                    (op.opcode == 0x8d || !reads_only)) clobbers.insert(address);
        }
        const bool short_branch = op.opcode >= 0x70 && op.opcode <= 0x7f;
        const bool near_branch = op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f;
        if (short_branch || near_branch || op.opcode == 0xe9 || op.opcode == 0xeb) {
            const int64_t relative = short_branch || op.opcode == 0xeb ? static_cast<int8_t>(op.imm.imm8) : static_cast<int32_t>(op.imm.imm32);
            const auto target = int64_t(address) + op.len + relative;
            if (target <= 0 || target >= image.size) return reject(address, "frame branch is outside the image");
            predecessors[static_cast<uint32_t>(target)].push_back(address);
            pending.push_back(static_cast<uint32_t>(target));
            if (op.opcode == 0xe9 || op.opcode == 0xeb) continue;
        } else if ((op.opcode == 0xff && op.modrm_reg >= 4) || (op.opcode >= 0xe0 && op.opcode <= 0xe3))
            return reject(address, "frame path has an unresolved indirect branch");
        predecessors[address + op.len].push_back(address);
        pending.push_back(address + op.len); // ABI calls balance their return address.
    }
    // Paths which return without executing this callback do not consume the
    // slot. Preserve liveness on every proved path that can reach the anchor;
    // a loop which encounters the same member again starts a fresh lifetime.
    pending = {anchor.native_instruction};
    visited.clear();
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (!visited.insert(address).second) continue;
        if (clobbers.count(address)) return reject(address, "frame slot or stack is modified on a path to the anchor");
        const auto found = predecessors.find(address);
        if (found != predecessors.end())
            pending.insert(pending.end(), found->second.begin(), found->second.end());
    }
    return visited.count(first) != 0 || reject(first, "frame member has no path to its anchor");
}
} // namespace dfcn::pe_runtime::frame_detail

#include "native_frame_member_evidence.h"

namespace dfcn::pe_runtime {
inline void complete_frame_operands(address_runtime::State &state, const std::vector<unsigned char> &blob) {
    const auto evidence = frame_detail::read(blob);
    state.missing_frame_operands.clear();
    std::map<uint32_t, const address_runtime::FrameOperandBinding *> bindings;
    for (const auto &binding : state.frame_operands)
        if (!bindings.emplace(binding.reference, &binding).second) throw std::runtime_error("Duplicate native frame operand");
    for (const auto &pair : evidence.pairs) {
        const auto anchor = bindings.find(pair.anchor), member = bindings.find(pair.member);
        if (anchor == bindings.end() || anchor->second->access_width || member == bindings.end() ||
                member->second->access_width < pair.width || !anchor->second->owner ||
                anchor->second->owner != member->second->owner) {
            state.missing_frame_operands.push_back(pair.anchor);
            state.missing_frame_operands.push_back(pair.member);
        }
    }
    std::sort(state.missing_frame_operands.begin(), state.missing_frame_operands.end());
    state.missing_frame_operands.erase(std::unique(state.missing_frame_operands.begin(), state.missing_frame_operands.end()), state.missing_frame_operands.end());
}
template<typename Image>
inline void discover_frame_operands(const Image &image, const std::vector<unsigned char> &blob,
        address_runtime::State &state, const address_runtime::Progress &report = {}) {
    using namespace address_runtime;
    using namespace display_decode;
    const auto evidence = frame_detail::read(blob);
    state.frame_operands.clear();
    const auto reviewed_coordinate = [&](uint32_t reference) {
        // Edition 1 is the exact canonical executable identity. Its shipped
        // ranges only enumerate consumers, not every intermediate CFG edge.
        if (state.edition == 1 && reference && reference < image.size) return reference;
        return resolve(state.ranges, reference);
    };
    frame_member_detail::ShadowCache receiver_cache(image, report);
    frame_detail::TargetOrigins<Image> target_origins(image);
    std::map<uint32_t, std::map<uint32_t, Instruction>> scopes;
    std::map<uint32_t, std::set<uint32_t>> matches;
    std::map<uint32_t, uint32_t> local;
    for (const auto &block : evidence.blocks) {
        auto pattern = block.pattern;
        if (!frame_member_detail::normalize(state, block.members, pattern)) continue;
        auto owner = resolve(state.function_owners, pattern.owner);
        if (!owner && (state.edition == 1 || state.edition == 2)) owner = resolve(state.ranges, pattern.owner);
        const auto function = frame_detail::function_at(image, owner);
        if (function == image.functions.end()) continue;
        owner = function->owner ? function->owner : function->begin;
        if (!scopes.count(owner)) {
            auto &code = scopes[owner];
            for (const auto &region : frame_detail::logical_regions(image, owner)) {
                std::vector<Instruction> instructions;
                DecodeFailure failure;
                if (!decode(image, region.first, region.second, instructions, nullptr, &failure)) {
                    // Uniqueness within a decoded prefix is not uniqueness
                    // within this function. Never retain partial scopes.
                    code.clear();
                    if (report) {
                        std::ostringstream message;
                        message << "Native frame scope rejected: owner=0x" << std::hex << owner
                            << " instruction=0x" << failure.address << " " << failure.reason;
                        report(message.str());
                    }
                    break;
                }
                for (auto &instruction : instructions) code.emplace(instruction.address, std::move(instruction));
            }
        }
        const auto regions = frame_detail::logical_regions(image, owner);
        for (const auto &[address, instruction] : scopes.at(owner)) {
            if (std::none_of(regions.begin(), regions.end(), [&](const auto &region) {
                    return address >= region.first && uint64_t(address) + pattern.raw.size() <= region.second;
                }) || !pattern_matches(image, pattern, address)) continue;
            if (!frame_member_detail::matches(image, owner, address, pattern, block.members, &receiver_cache)) continue;
            bool valid = true;
            for (uint32_t at = 0; valid && at < pattern.raw.size();) {
                unsigned char bounded[32]{};
                const auto available = (std::min)(size_t(15), pattern.raw.size() - at);
                std::memcpy(bounded, pattern.raw.data() + at, available);
                hde64s op{}; hde64_disasm(bounded, &op);
                if (!op.len || op.len > available || (op.flags & F_ERROR)) { valid = false; break; }
                const auto known = reviewed_coordinate(pattern.reference + at);
                if (known && known != address + at) valid = false;
                at += op.len;
            }
            if (!valid) continue;
            const bool rbp_operands = std::any_of(block.operands.begin(), block.operands.end(),
                [](const auto &operand) { return operand.base == 5; });
            std::map<int64_t, int64_t> stack, inverse_stack;
            for (const auto &operand : block.operands) {
                const auto target = scopes.at(owner).find(address + operand.instruction);
                if (target == scopes.at(owner).end()) { valid = false; break; }
                const auto &op = target->second.decoded;
                if (operand.flags == 2) {
                    if (op.opcode != 0xe8 || op.len != 5 ||
                            reviewed_coordinate(pattern.reference + operand.instruction) != target->first)
                        valid = false;
                    if (!valid) break;
                    continue;
                }
                const auto width = op.flags & F_DISP32 ? 4u : op.flags & F_DISP8 ? 1u : 0u;
                if (frame_detail::frame_operand_base(op) != operand.base || op.len != operand.length || width != operand.width ||
                        operand.instruction + op.len - immediate_width(op) - width != operand.displacement ||
                        (operand.base == 5 && operand.flags == 1 && !op.rex_w) ||
                        access_width(op) != operand.access || bool(op.opcode == 0x8d) != bool(operand.flags & 1)) { valid = false; break; }
                int64_t source = frame_detail::displacement(pattern.raw.data() + operand.displacement, operand.width);
                const auto *native = image.read(address + operand.displacement, operand.width ? operand.width : 1);
                if (!native) { valid = false; break; }
                int64_t value = frame_detail::displacement(native, operand.width);
                if (rbp_operands) {
                    // Mixed base encodings are compared only as proved
                    // entry-RSP coordinates, never by equal displacements.
                    const auto source_origin = frame_detail::origin(evidence, pattern.owner,
                        pattern.reference + operand.instruction, operand.length, operand.base);
                    const auto native_origin = target_origins.get(owner, target->first, op.len, operand.base, true);
                    if (!source_origin || !native_origin) { valid = false; break; }
                    source += *source_origin; value += *native_origin;
                    if (source < INT32_MIN || source > INT32_MAX || value < INT32_MIN || value > INT32_MAX) {
                        valid = false; break;
                    }
                }
                const auto [forward, inserted] = stack.emplace(source, value);
                const auto [backward, unique] = inverse_stack.emplace(value, source);
                if ((!inserted && forward->second != value) || (!unique && backward->second != source)) { valid = false; break; }
            }
            if (valid) matches[pattern.reference].insert(address);
        }
    }
    std::map<uint32_t, size_t> shape_counts;
    for (const auto &[reference, candidates] : matches) shape_counts.emplace(reference, candidates.size());
    const auto unconstrained = matches;
    std::map<uint32_t, const frame_detail::Block *> source_blocks;
    for (const auto &block : evidence.blocks) source_blocks.emplace(block.pattern.reference, &block);
    const auto source_block = [&](uint32_t reference) -> const frame_detail::Block * {
        auto found = source_blocks.upper_bound(reference);
        if (found == source_blocks.begin()) return nullptr;
        const auto *block = std::prev(found)->second;
        if (uint64_t(reference) >= uint64_t(block->pattern.reference) + block->pattern.raw.size()) return nullptr;
        uint32_t at = 0;
        while (at < reference - block->pattern.reference) {
            hde64s op{};
            if (!frame_member_detail::decode_one(block->pattern.raw.data() + at, block->pattern.raw.size() - at, op)) return nullptr;
            at += op.len;
        }
        return at == reference - block->pattern.reference ? block : nullptr;
    };
    const auto external_target = [&](const Fixup &fixup) {
        auto expected = reviewed_coordinate(fixup.target);
        if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
        return expected;
    };
    for (const auto &block : evidence.blocks) {
        const auto &pattern = block.pattern;
        auto &candidates = matches[pattern.reference];
        for (auto at = candidates.begin(); at != candidates.end();) {
            bool valid = true;
            for (const auto &fixup : pattern.fixups) {
                const auto expected = external_target(fixup);
                if ((expected || !fixup.target) && operand_target(image, pattern, *at, fixup) != expected) {
                    valid = false; break;
                }
            }
            if (valid) ++at;
            else at = candidates.erase(at);
        }
    }
    // An unresolved branch outside the retained context cannot identify a
    // block. Remove its dependent blocks before forming a proof component;
    // a neighbouring, independently closed draw/resize CFG remains usable.
    std::set<uint32_t> eligible;
    for (const auto &[reference, block] : source_blocks)
        if (!matches[reference].empty()) eligible.insert(reference);
    bool excluded = true;
    while (excluded) {
        excluded = false;
        for (auto at = eligible.begin(); at != eligible.end();) {
            bool closed = true;
            for (const auto &fixup : source_blocks.at(*at)->pattern.fixups) {
                if (!fixup.target || external_target(fixup)) continue;
                const auto *target = source_block(fixup.target);
                if (!target || !eligible.count(target->pattern.reference)) { closed = false; break; }
            }
            if (!closed) { at = eligible.erase(at); excluded = true; }
            else ++at;
        }
    }
    // Adjacent source blocks have a real fall-through edge only when their
    // final instruction permits it. Retain that edge when shrinking the
    // candidate sets; a repeated draw cannot identify itself by stack shape.
    std::map<uint32_t, uint32_t> fallthrough;
    std::map<uint32_t, uint32_t> previous_fallthrough;
    for (const auto &block : evidence.blocks) {
        const auto &pattern = block.pattern;
        const auto next = source_blocks.find(pattern.reference + static_cast<uint32_t>(pattern.raw.size()));
        if (next == source_blocks.end() || next->second->pattern.owner != pattern.owner) continue;
        hde64s last{};
        bool valid = true;
        for (size_t at = 0; at < pattern.raw.size();) {
            if (!frame_member_detail::decode_one(pattern.raw.data() + at, pattern.raw.size() - at, last)) { valid = false; break; }
            at += last.len;
        }
        if (valid && last.opcode != 0xc2 && last.opcode != 0xc3 && last.opcode != 0xcc &&
                last.opcode != 0xe9 && last.opcode != 0xeb && !(last.opcode == 0xff && last.modrm_reg >= 4))
            fallthrough.emplace(pattern.reference, next->first);
    }
    for (const auto &[previous, next] : fallthrough) previous_fallthrough.emplace(next, previous);
    bool narrowed = true;
    while (narrowed) {
        narrowed = false;
        for (const auto &block : evidence.blocks) {
            const auto &pattern = block.pattern;
            if (!eligible.count(pattern.reference)) continue;
            auto &candidates = matches[pattern.reference];
            for (auto candidate = candidates.begin(); candidate != candidates.end();) {
                bool valid = true;
                for (const auto &fixup : pattern.fixups) {
                    const auto actual = operand_target(image, pattern, *candidate, fixup);
                    const auto expected = external_target(fixup);
                    if (expected || !fixup.target) { if (actual != expected) { valid = false; break; } }
                    else if (const auto *target = source_block(fixup.target)) {
                        const auto delta = fixup.target - target->pattern.reference;
                        if (actual < delta || !matches[target->pattern.reference].count(actual - delta)) { valid = false; break; }
                    }
                }
                const auto next = fallthrough.find(pattern.reference);
                if (valid && next != fallthrough.end() && eligible.count(next->second) &&
                        !matches[next->second].count(*candidate + pattern.raw.size())) valid = false;
                if (!valid) { candidate = candidates.erase(candidate); narrowed = true; }
                else ++candidate;
            }
            // Keep both sides of a CFG relation. This is only a proposal:
            // publication below requires the entire constraint component.
            if (candidates.empty()) continue;
            for (const auto &fixup : pattern.fixups) {
                if (external_target(fixup) || !fixup.target) continue;
                const auto *target = source_block(fixup.target);
                if (!target || target->pattern.reference == pattern.reference) continue;
                const auto delta = fixup.target - target->pattern.reference;
                std::set<uint32_t> supported;
                for (const auto address : candidates) {
                    const auto actual = operand_target(image, pattern, address, fixup);
                    if (actual >= delta) supported.insert(actual - delta);
                }
                auto &targets = matches[target->pattern.reference];
                for (auto at = targets.begin(); at != targets.end();) {
                    if (!supported.count(*at)) { at = targets.erase(at); narrowed = true; }
                    else ++at;
                }
            }
            const auto next = fallthrough.find(pattern.reference);
            if (next != fallthrough.end() && eligible.count(next->second)) {
                auto &targets = matches[next->second];
                for (auto at = targets.begin(); at != targets.end();) {
                    if (*at < pattern.raw.size() || !candidates.count(*at - pattern.raw.size())) {
                        at = targets.erase(at); narrowed = true;
                    } else ++at;
                }
            }
        }
    }
    // Resolve pair-local branch edges to a previously unique semantic block;
    // these temporary coordinates never become general code-address ranges.
    bool changed = true;
    while (changed) {
        changed = false;
        for (const auto &block : evidence.blocks) {
            const auto &pattern = block.pattern;
            std::set<uint32_t> viable;
            const auto next = fallthrough.find(pattern.reference);
            const auto previous = previous_fallthrough.find(pattern.reference);
            const bool located_next = next != fallthrough.end() && local.count(next->second);
            const bool located_previous = previous != previous_fallthrough.end() && local.count(previous->second);
            if (state.edition != 1 && state.edition != 2 && pattern.fixups.empty() &&
                    std::count(pattern.mask.begin(), pattern.mask.end(), 0) < 12 &&
                    !located_next && !located_previous) continue;
            const auto original = unconstrained.find(pattern.reference);
            if (original == unconstrained.end()) continue;
            for (const auto address : original->second) {
                bool valid = true, ready = true;
                // Only already proved coordinates constrain this pass. A
                // fall-through edge fixes its adjacent complete block even
                // when the same call/stack shape occurs elsewhere in the
                // function; unrelated unresolved CFG branches cannot veto it.
                if (located_next && uint64_t(address) + pattern.raw.size() != local.at(next->second)) continue;
                if (located_previous && uint64_t(local.at(previous->second)) +
                        source_blocks.at(previous->second)->pattern.raw.size() != address) continue;
                for (const auto &fixup : pattern.fixups) {
                    const auto actual = operand_target(image, pattern, address, fixup);
                    auto expected = reviewed_coordinate(fixup.target);
                    if (!expected && (fixup.kind & 0x100)) expected = resolve(state.function_owners, fixup.target);
                    if ((fixup.kind & 0x100) && fixup.target >= pattern.reference &&
                            uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size())
                        expected = address + fixup.target - pattern.reference;
                    if (!expected) if (const auto *target = source_block(fixup.target)) {
                        const auto entry = local.find(target->pattern.reference);
                        if (entry != local.end()) expected = entry->second + fixup.target - target->pattern.reference;
                    }
                    if (fixup.target && !expected) { ready = false; continue; }
                    if (actual != expected) { valid = false; break; }
                }
                if (valid && ready) viable.insert(address);
            }
            if (viable.size() != 1) continue;
            const auto address = *viable.begin();
            const auto [entry, inserted] = local.emplace(pattern.reference, address);
            if (!inserted && entry->second != address) throw std::runtime_error("Conflicting native frame block identity");
            changed |= inserted;
        }
    }
    // A closed CFG component can be uniquely located even when its blocks
    // depend on one another. Every edge and external operand must agree,
    // and the component must carry an independent identity proof. These
    // bindings remain local to consumed frame operands.
    std::map<uint32_t, uint32_t> joint;
    for (const auto &[reference, candidates] : matches)
        if (eligible.count(reference) && candidates.size() == 1) joint.emplace(reference, *candidates.begin());
    bool removed = true;
    while (removed) {
        removed = false;
        for (auto entry = joint.begin(); entry != joint.end();) {
            const auto &pattern = source_blocks.at(entry->first)->pattern;
            bool valid = true;
            for (const auto &fixup : pattern.fixups) {
                auto expected = external_target(fixup);
                if (!expected && fixup.target) if (const auto *target = source_block(fixup.target)) {
                    const auto mapped = joint.find(target->pattern.reference);
                    if (mapped != joint.end()) expected = mapped->second + fixup.target - target->pattern.reference;
                }
                if ((fixup.target && !expected) || operand_target(image, pattern, entry->second, fixup) != expected) { valid = false; break; }
            }
            const auto next = fallthrough.find(entry->first);
            if (valid && next != fallthrough.end() && eligible.count(next->second)) {
                const auto target = joint.find(next->second);
                valid = target != joint.end() && uint64_t(entry->second) + pattern.raw.size() == target->second;
            }
            if (!valid) { entry = joint.erase(entry); removed = true; }
            else ++entry;
        }
    }
    std::map<uint32_t, std::set<uint32_t>> neighbors;
    for (const auto &[reference, block] : source_blocks) {
        if (!eligible.count(reference)) continue;
        const auto &pattern = block->pattern;
        const auto connect = [&](uint32_t target) {
            if (eligible.count(target)) { neighbors[reference].insert(target); neighbors[target].insert(reference); }
        };
        for (const auto &fixup : pattern.fixups) if (!external_target(fixup))
            if (const auto *target = source_block(fixup.target)) connect(target->pattern.reference);
        const auto next = fallthrough.find(reference);
        if (next != fallthrough.end()) connect(next->second);
    }
    std::set<uint32_t> anchored;
    for (const auto anchor : eligible) {
        if (anchored.count(anchor)) continue;
        std::vector<uint32_t> pending{anchor};
        std::set<uint32_t> component;
        bool complete = true;
        while (!pending.empty()) {
            const auto reference = pending.back(); pending.pop_back();
            if (!component.insert(reference).second) continue;
            complete &= joint.count(reference) != 0;
            if (joint.count(reference) && local.count(reference) && joint.at(reference) != local.at(reference))
                throw std::runtime_error("Closed native frame component conflicts with an independently proved block");
            const auto found = neighbors.find(reference);
            if (found != neighbors.end()) pending.insert(pending.end(), found->second.begin(), found->second.end());
        }
        anchored.insert(component.begin(), component.end());
        bool established = std::any_of(component.begin(), component.end(), [&](auto reference) { return local.count(reference); });
        if (complete || established) {
            // The complete component itself can be the independent witness.
            // Candidate sets above started with the entire decoded owner,
            // and used only these closed operands and CFG edges. Require
            // several known semantic operands, substantial exact code and
            // one coherent stack-slot bijection across every block.
            std::set<uint32_t> identities;
            const auto &coordinates = complete ? joint : local;
            const bool rbp_component = std::any_of(component.begin(), component.end(), [&](auto reference) {
                if (!coordinates.count(reference)) return false;
                const auto &operands = source_blocks.at(reference)->operands;
                return std::any_of(operands.begin(), operands.end(), [](const auto &operand) { return operand.base == 5; });
            });
            std::map<int64_t, int64_t> stack, inverse;
            std::vector<std::array<int64_t, 3>> accesses;
            size_t fixed = 0;
            bool coherent = true;
            for (const auto reference : component) {
                if (!coordinates.count(reference)) continue;
                const auto &block = *source_blocks.at(reference);
                const auto &pattern = block.pattern;
                const auto address = coordinates.at(reference);
                fixed += std::count(pattern.mask.begin(), pattern.mask.end(), 0);
                for (const auto &fixup : pattern.fixups)
                    if (fixup.target && external_target(fixup) && !source_block(fixup.target) &&
                            (!(fixup.kind & 0x100) || (!(fixup.kind & 0xff) && fixup.width == 4 && fixup.offset &&
                                fixup.next == fixup.offset + 4 && pattern.raw[fixup.offset - 1] == 0xe8)))
                        identities.insert(fixup.target);
                for (const auto &operand : block.operands) {
                    if (operand.flags == 2) continue;
                    int64_t source = frame_detail::displacement(pattern.raw.data() + operand.displacement, operand.width);
                    const auto *bytes = image.read(address + operand.displacement, operand.width ? operand.width : 1);
                    if (!bytes) { coherent = false; break; }
                    int64_t target = frame_detail::displacement(bytes, operand.width);
                    if (rbp_component) {
                        const auto source_origin = frame_detail::origin(evidence, pattern.owner,
                            pattern.reference + operand.instruction, operand.length, operand.base);
                        const auto function = frame_detail::function_at(image, address + operand.instruction, operand.length);
                        const auto owner = function == image.functions.end() ? 0 :
                            (function->owner ? function->owner : function->begin);
                        const auto native_origin = target_origins.get(owner, address + operand.instruction,
                            operand.length, operand.base, true);
                        if (!source_origin || !native_origin) { coherent = false; break; }
                        source += *source_origin; target += *native_origin;
                        if (source < INT32_MIN || source > INT32_MAX || target < INT32_MIN || target > INT32_MAX) {
                            coherent = false; break;
                        }
                    }
                    const auto [a, first] = stack.emplace(source, target);
                    const auto [b, second] = inverse.emplace(target, source);
                    if ((!first && a->second != target) || (!second && b->second != source)) { coherent = false; break; }
                    const auto width = (std::max)(1u, operand.access);
                    for (const auto &other : accesses) {
                        const bool source_overlap = int64_t(source) < other[0] + other[2] && other[0] < int64_t(source) + width;
                        const bool target_overlap = int64_t(target) < other[1] + other[2] && other[1] < int64_t(target) + width;
                        if ((source_overlap || target_overlap) && int64_t(source) - other[0] != int64_t(target) - other[1]) {
                            coherent = false; break;
                        }
                    }
                    if (!coherent) break;
                    accesses.push_back({source, target, width});
                }
                for (size_t at = 0; coherent && at < pattern.raw.size();) {
                    hde64s op{};
                    if (!frame_member_detail::decode_one(pattern.raw.data() + at, pattern.raw.size() - at, op) ||
                            (rbp_component ? (writes_gpr(op, 4) || writes_gpr(op, 5)) : frame_detail::writes_rsp(op))) {
                        coherent = false; break;
                    }
                    at += op.len;
                }
                if (!coherent) break;
            }
            if (!coherent) {
                // An independent address witness does not waive the source
                // stack-alias contract for other blocks joined to it. The
                // earlier local pass is tentative until this component is
                // coherent; neither its calls nor frame operands may leak.
                for (const auto reference : component) local.erase(reference);
                established = false;
                complete = false;
            } else established |= complete && fixed >= 64 && identities.size() >= 2;
        }
        if (complete && established) for (const auto reference : component) local.emplace(reference, joint.at(reference));
        else if (report) {
            std::ostringstream message;
            message << "Native frame component " << (complete ? "lacks independent identity" : "incomplete")
                << ": anchor=0x" << std::hex << anchor
                << std::dec << " blocks=" << component.size() << " pending=";
            size_t count = 0;
            for (const auto reference : component) if (!joint.count(reference)) {
                message << "0x" << std::hex << reference << std::dec << "(shape="
                    << shape_counts[reference] << ",cfg=" << matches[reference].size() << ") ";
                if (++count == 8) break;
            }
            report(message.str());
        }
    }
    // A proved complete frame context also proves its E8 instruction and
    // return address. Publish only those instruction identities; changed
    // stack displacements never authorize a surrounding code-range delta.
    Bindings call_bindings;
    for (const auto &range : state.ranges) call_bindings.add(range.begin, range.end - range.begin, range.native);
    std::map<uint32_t, Byte> call_bytes;
    for (const auto &byte : state.bytes) call_bytes.emplace(byte.address, byte);
    size_t calls_added = 0;
    const auto record_bytes = [&](uint32_t reference, const unsigned char *source, const unsigned char *target, uint32_t length) {
        for (uint32_t at = 0; at < length; ++at) if (source[at] != target[at]) {
            const Byte byte{reference + at, source[at], target[at]};
            const auto [entry, inserted] = call_bytes.emplace(byte.address, byte);
            if (!inserted && (entry->second.reference != byte.reference || entry->second.native != byte.native))
                throw std::runtime_error("Conflicting native frame-context call bytes");
        }
    };
    for (const auto &[reference, native] : local) {
        const auto &pattern = source_blocks.at(reference)->pattern;
        for (const auto &fixup : pattern.fixups) {
            if (!(fixup.kind & 0x100) || (fixup.kind & 0xff) || fixup.width != 4 || !fixup.offset ||
                    fixup.next != fixup.offset + 4 || pattern.raw[fixup.offset - 1] != 0xe8) continue;
            const auto at = fixup.offset - 1;
            const auto expected = external_target(fixup);
            if (!expected || operand_target(image, pattern, native, fixup) != expected) continue;
            const auto *bytes = image.read(native + at, 5);
            if (!bytes || bytes[0] != 0xe8 || !call_bindings.compatible(reference + at, 5, native + at)) continue;
            calls_added += call_bindings.add(reference + at, 5, native + at);
            record_bytes(reference + at, pattern.raw.data() + at, bytes, 5);
            const auto *continuation = source_block(reference + at + 5);
            const auto function = frame_detail::function_at(image, native + at + 5);
            if (!continuation || function == image.functions.end()) continue;
            const auto owner = function->owner ? function->owner : function->begin;
            if (!scopes.count(owner) || !scopes.at(owner).count(native + at + 5) ||
                    !call_bindings.compatible(reference + at + 5, 1, native + at + 5)) continue;
            const auto *next = image.read(native + at + 5, 1);
            if (!next) continue;
            calls_added += call_bindings.add(reference + at + 5, 1, native + at + 5);
            record_bytes(reference + at + 5, continuation->pattern.raw.data() +
                reference + at + 5 - continuation->pattern.reference, next, 1);
        }
    }
    state.ranges = call_bindings.export_ranges();
    state.bytes.clear();
    for (const auto &[address, byte] : call_bytes) state.bytes.push_back(byte);
    if (report && calls_added) report("Native frame contexts: proved " + std::to_string(calls_added) + " call/return boundaries");
    std::map<uint32_t, FrameOperandBinding> discovered;
    std::map<uint32_t, uint32_t> discovered_bases;
    for (const auto &block : evidence.blocks) {
        const auto &pattern = block.pattern;
        const auto found = local.find(pattern.reference);
        if (found == local.end()) continue;
        const auto address = found->second;
        const auto function = frame_detail::function_at(image, address);
        if (function == image.functions.end()) continue;
        const auto owner = function->owner ? function->owner : function->begin;
        for (const auto &operand : block.operands) {
            if (operand.base == 5 && !frame_detail::origin(evidence, pattern.owner,
                    pattern.reference + operand.instruction, operand.length, 5)) continue;
            const auto origin = target_origins.get(owner, address + operand.instruction, operand.length, operand.base);
            if (!origin) continue;
            const auto *bytes = image.read(address + operand.displacement, operand.width ? operand.width : 1);
            if (!bytes) continue;
            const auto offset = int64_t(*origin) + frame_detail::displacement(bytes, operand.width);
            if (offset < INT32_MIN || offset > INT32_MAX) continue;
            FrameOperandBinding binding{pattern.reference + operand.instruction, owner,
                address + operand.instruction, static_cast<int32_t>(offset), operand.access};
            const auto [entry, inserted] = discovered.emplace(binding.reference, binding);
            if (!inserted && (entry->second.native_instruction != binding.native_instruction || entry->second.stack_offset != binding.stack_offset))
                throw std::runtime_error("Conflicting native frame operand identity");
            const auto [base, unique_base] = discovered_bases.emplace(binding.reference, operand.base);
            if (!unique_base && base->second != operand.base)
                throw std::runtime_error("Conflicting native frame operand base");
        }
    }
    std::set<uint32_t> accepted;
    std::map<std::pair<uint32_t, uint32_t>, std::string> path_failures;
    for (const auto &pair : evidence.pairs) {
        const auto anchor = discovered.find(pair.anchor), member = discovered.find(pair.member);
        if (anchor == discovered.end() || member == discovered.end() || anchor->second.owner != member->second.owner ||
                anchor->second.access_width || member->second.access_width < pair.width) continue;
        if (frame_detail::stable_path(image, member->second, anchor->second, scopes.at(anchor->second.owner),
                target_origins, discovered_bases.at(pair.anchor) == 5 || discovered_bases.at(pair.member) == 5,
                &path_failures[{pair.anchor, pair.member}])) {
            accepted.insert(pair.anchor); accepted.insert(pair.member);
        }
    }
    for (const auto reference : accepted) state.frame_operands.push_back(discovered.at(reference));
    complete_frame_operands(state, blob);
    if (report) report("Native discovery: proved " + std::to_string(state.frame_operands.size()) +
        " consumed frame operands; " + std::to_string(state.missing_frame_operands.size()) + " unresolved");
    if (report && !state.missing_frame_operands.empty()) {
        size_t reported = 0;
        for (const auto &pair : evidence.pairs) {
            if (accepted.count(pair.anchor) && accepted.count(pair.member)) continue;
            std::ostringstream message;
            message << "Native frame pair: anchor=0x" << std::hex << pair.anchor << " member=0x" << pair.member;
            for (const auto reference : {pair.anchor, pair.member}) {
                const auto block = std::find_if(evidence.blocks.begin(), evidence.blocks.end(), [&](const auto &value) {
                    return reference >= value.pattern.reference &&
                        uint64_t(reference) < uint64_t(value.pattern.reference) + value.pattern.raw.size();
                });
                if (block == evidence.blocks.end()) message << " source-block=missing";
                else message << " source-block=0x" << block->pattern.reference << std::dec
                    << " shape-candidates=" << shape_counts[block->pattern.reference]
                    << " cfg-candidates=" << matches[block->pattern.reference].size() << std::hex
                    << " bound=0x" << (local.count(block->pattern.reference) ? local.at(block->pattern.reference) : 0);
            }
            message << " anchor-operand=" << (discovered.count(pair.anchor) ? "proved" : "missing")
                << " member-operand=" << (discovered.count(pair.member) ? "proved" : "missing");
            const auto path = path_failures.find({pair.anchor, pair.member});
            if (path != path_failures.end() && !path->second.empty()) message << " path=" << path->second;
            std::set<std::pair<uint32_t, uint32_t>> unresolved;
            const auto begin = (std::min)(pair.anchor, pair.member);
            const auto end = uint64_t((std::max)(pair.anchor, pair.member)) + 512;
            for (const auto &block : evidence.blocks) {
                const auto &pattern = block.pattern;
                if (uint64_t(pattern.reference) + pattern.raw.size() + 512 < begin || pattern.reference > end) continue;
                for (const auto &fixup : pattern.fixups)
                    if (fixup.target && !external_target(fixup) && !source_block(fixup.target))
                        unresolved.emplace(fixup.target, fixup.kind);
            }
            if (!unresolved.empty()) {
                message << " exterior-operands=";
                size_t count = 0;
                for (const auto &[target, kind] : unresolved) {
                    message << "0x" << std::hex << target << "/0x" << kind << " ";
                    if (++count == 12) break;
                }
            }
            report(message.str());
            if (++reported == 8) break;
        }
    }
}
} // namespace dfcn::pe_runtime
