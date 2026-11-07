#pragma once
#include "native_frame_registers.h"
#include <cctype>
#include <iterator>

namespace dfcn::pe_runtime::entry_prefix_detail {
using namespace address_runtime;
using namespace display_decode;

struct Spec {
    uint32_t reference, table;
    const char *type, *method, *shape;
    uint32_t arguments;
};
// These are the actual prepare_discovered consumers, not all known bodies.
// Coordinates identify source contracts; target entries come only from the
// independent owner, RTTI table and named method bindings below.
inline constexpr Spec specs[]{
    {0x8e1c40, 0x16bf0f0, "renderer_2d_base", "do_blank_screen_fill", "void()", 0},
    {0x8e1c80, 0x16bf0f0, "renderer_2d_base", "update_all", "void()", 0},
};

template<typename Image>
inline bool imported_tail_identity(const Image &image, uint32_t slot) {
    return slot && slot == image.import_slot("SDL2.dll", "SDL_RenderClear");
}

// A loaded PE can have different bookkeeping fields without changing the
// indexes used by this proof. Describe only the header fields we consume;
// the complete section table and every non-header dependency remain exact.
// Both new journals and old whole-header cache records use this definition.
struct HeaderDependencies {
    std::vector<std::pair<uint32_t, uint32_t>> fields;
    uint32_t nt = 0, nt_end = 0;
    std::array<IMAGE_DATA_DIRECTORY, 3> directories{};

    bool header(uint32_t address) const {
        return address < sizeof(IMAGE_DOS_HEADER) || (address >= nt && address < nt_end);
    }
    bool required(uint32_t address) const {
        return std::any_of(fields.begin(), fields.end(), [&](const auto &field) {
            return address >= field.first && address < field.second;
        });
    }
};

template<typename Read>
inline bool header_dependencies(const Read &read, uint32_t image_size, HeaderDependencies &result) {
    result = {};
    const auto field = [&](uint64_t address, auto &value) {
        if (address > image_size || sizeof(value) > uint64_t(image_size) - address)
            return false;
        const auto *bytes = read(static_cast<uint32_t>(address), sizeof(value));
        if (!bytes) return false;
        std::memcpy(&value, bytes, sizeof(value));
        result.fields.emplace_back(static_cast<uint32_t>(address), static_cast<uint32_t>(address + sizeof(value)));
        return true;
    };
    WORD dos_magic = 0; LONG nt_offset = 0;
    if (!field(offsetof(IMAGE_DOS_HEADER, e_magic), dos_magic) || dos_magic != IMAGE_DOS_SIGNATURE ||
            !field(offsetof(IMAGE_DOS_HEADER, e_lfanew), nt_offset) || nt_offset < LONG(sizeof(IMAGE_DOS_HEADER)) ||
            uint64_t(nt_offset) + sizeof(IMAGE_NT_HEADERS64) > image_size) return false;
    result.nt = static_cast<uint32_t>(nt_offset);
    result.nt_end = result.nt + sizeof(IMAGE_NT_HEADERS64);
    const uint64_t file = uint64_t(result.nt) + offsetof(IMAGE_NT_HEADERS64, FileHeader);
    const uint64_t optional = uint64_t(result.nt) + offsetof(IMAGE_NT_HEADERS64, OptionalHeader);
    DWORD signature = 0, size = 0, headers = 0, directories = 0;
    WORD machine = 0, sections = 0, optional_size = 0, magic = 0;
    if (!field(uint64_t(result.nt) + offsetof(IMAGE_NT_HEADERS64, Signature), signature) || signature != IMAGE_NT_SIGNATURE ||
            !field(file + offsetof(IMAGE_FILE_HEADER, Machine), machine) || machine != IMAGE_FILE_MACHINE_AMD64 ||
            !field(file + offsetof(IMAGE_FILE_HEADER, NumberOfSections), sections) || !sections || sections > 96 ||
            !field(file + offsetof(IMAGE_FILE_HEADER, SizeOfOptionalHeader), optional_size) || optional_size < sizeof(IMAGE_OPTIONAL_HEADER64) ||
            !field(optional + offsetof(IMAGE_OPTIONAL_HEADER64, Magic), magic) || magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
            !field(optional + offsetof(IMAGE_OPTIONAL_HEADER64, SizeOfImage), size) || size != image_size ||
            !field(optional + offsetof(IMAGE_OPTIONAL_HEADER64, SizeOfHeaders), headers) || !headers || headers > image_size ||
            !field(optional + offsetof(IMAGE_OPTIONAL_HEADER64, NumberOfRvaAndSizes), directories) ||
            directories <= IMAGE_DIRECTORY_ENTRY_BASERELOC || directories > IMAGE_NUMBEROF_DIRECTORY_ENTRIES) return false;
    constexpr unsigned indexes[]{IMAGE_DIRECTORY_ENTRY_IMPORT, IMAGE_DIRECTORY_ENTRY_EXCEPTION, IMAGE_DIRECTORY_ENTRY_BASERELOC};
    for (size_t i = 0; i < std::size(indexes); ++i) {
        auto &directory = result.directories[i];
        if (!field(optional + offsetof(IMAGE_OPTIONAL_HEADER64, DataDirectory) +
                uint64_t(indexes[i]) * sizeof(IMAGE_DATA_DIRECTORY), directory) ||
                (!directory.VirtualAddress != !directory.Size) ||
                uint64_t(directory.VirtualAddress) + directory.Size > image_size) return false;
    }
    const uint64_t table = optional + optional_size;
    const uint64_t table_size = uint64_t(sections) * sizeof(IMAGE_SECTION_HEADER);
    if (table > headers || table_size > headers - table || !read(static_cast<uint32_t>(table), static_cast<size_t>(table_size)))
        return false;
    result.fields.emplace_back(static_cast<uint32_t>(table), static_cast<uint32_t>(table + table_size));
    return true;
}

// Negative evidence only: a byte candidate outside this owner is never
// published as an instruction/address binding. Rejecting an ambiguous
// candidate is conservative. Runtime repeats this over the current main-PE
// executable sections, so an unrelated extension's legitimate code patch
// does not require byte-for-byte equality of the entire text section.
template<typename Sections, typename Read>
inline bool external_reference_veto(const Sections &sections, uint32_t execute_flag,
        uint32_t image_size, uint64_t image_base, uint32_t begin, uint32_t end, size_t prefix_size,
        bool mapped, const Read &read, DecodeFailure &failure) {
    const auto interior = [&](int64_t target) { return target > begin && target < int64_t(begin) + prefix_size; };
    for (const auto &section : sections) {
        if (!(section.flags & execute_flag)) continue;
        if (section.end <= section.begin || section.end > image_size) return false;
        const auto size = mapped ? section.end - section.begin :
            (std::min)(section.raw_size, section.end - section.begin);
        if (!size) continue;
        const auto *bytes = read(section.begin, size);
        if (!bytes) { failure = {section.begin, "external entry reference section is unreadable", 0}; return false; }
        for (uint32_t offset = 0; offset < size; ++offset) {
            const auto address = section.begin + offset;
            if (address >= begin && address < end) continue;
            const auto left = size - offset;
            const auto *raw = bytes + offset;
            bool candidate = false;
            if (left >= 2 && (raw[0] == 0xeb || (raw[0] >= 0x70 && raw[0] <= 0x7f) ||
                    (raw[0] >= 0xe0 && raw[0] <= 0xe3)))
                candidate = interior(int64_t(address) + 2 + static_cast<int8_t>(raw[1]));
            if (left >= 5 && (raw[0] == 0xe8 || raw[0] == 0xe9)) {
                int32_t displacement; std::memcpy(&displacement, raw + 1, 4);
                candidate |= interior(int64_t(address) + 5 + displacement);
            }
            if (left >= 3 && (raw[0] == 0xe8 || raw[0] == 0xe9)) {
                // Also reject a possible operand-size-overridden relative
                // encoding; an unknown prefix cannot establish safety.
                int16_t displacement; std::memcpy(&displacement, raw + 1, 2);
                candidate |= interior(int64_t(address) + 3 + displacement);
            }
            if (left >= 6 && raw[0] == 0x0f && raw[1] >= 0x80 && raw[1] <= 0x8f) {
                int32_t displacement; std::memcpy(&displacement, raw + 2, 4);
                candidate |= interior(int64_t(address) + 6 + displacement);
            }
            if (left >= 4 && raw[0] == 0x0f && raw[1] >= 0x80 && raw[1] <= 0x8f) {
                int16_t displacement; std::memcpy(&displacement, raw + 2, 2);
                candidate |= interior(int64_t(address) + 4 + displacement);
            }
            if (left >= 6 && raw[0] == 0x8d && (raw[1] & 0xc7) == 5) {
                // Opcode-relative end is unchanged by a preceding REX or
                // segment prefix. Also veto 32-bit/overridden LEA lookalikes;
                // an unproved width cannot grant a positive entry witness.
                int32_t displacement; std::memcpy(&displacement, raw + 2, 4);
                candidate |= interior(int64_t(address) + 6 + displacement);
            }
            if (left >= 4) {
                // MSVC also stores switch targets as image-relative DWORDs
                // inside executable sections. This does not interpret an
                // arbitrary constant as a real switch; it can only refuse.
                uint32_t rva; std::memcpy(&rva, raw, 4);
                candidate |= interior(rva);
            }
            if (left >= 8) {
                // A live extension can embed a new absolute jump literal
                // without adding a loader DIR64 record (FF25/movabs stubs).
                uint64_t pointer; std::memcpy(&pointer, raw, 8);
                candidate |= pointer > image_base + begin && pointer < image_base + begin + prefix_size;
            }
            if (candidate) {
                failure = {address, "possible external reference enters patch prefix interior", 0};
                return false;
            }
        }
    }
    return true;
}

template<typename Image> class EvidenceImage {
    const Image &source_;
    mutable std::map<uint32_t, uint32_t> reads_;
    void record(uint32_t begin, uint32_t end) const {
        auto next = reads_.lower_bound(begin);
        if (next != reads_.begin() && std::prev(next)->second >= begin) {
            --next; begin = next->first; end = (std::max)(end, next->second);
            next = reads_.erase(next);
        }
        while (next != reads_.end() && next->first <= end) {
            end = (std::max)(end, next->second); next = reads_.erase(next);
        }
        reads_.emplace(begin, end);
    }
    std::string string(uint32_t address) const {
        std::string result;
        for (uint32_t i = 0; i < 4096 && uint64_t(address) + i < size; ++i) {
            const auto *byte = read(address + i, 1);
            if (!byte) return {};
            if (!*byte) return result;
            result.push_back(static_cast<char>(*byte));
        }
        return {};
    }
    IMAGE_DATA_DIRECTORY directory(unsigned index) const {
        HeaderDependencies dependencies;
        if (!header_dependencies([&](uint32_t address, size_t count) { return read(address, count); }, size, dependencies)) return {};
        switch (index) {
            case IMAGE_DIRECTORY_ENTRY_IMPORT: return dependencies.directories[0];
            case IMAGE_DIRECTORY_ENTRY_EXCEPTION: return dependencies.directories[1];
            case IMAGE_DIRECTORY_ENTRY_BASERELOC: return dependencies.directories[2];
            default: return {};
        }
    }
public:
    static constexpr uint32_t execute_flag = Image::execute_flag, write_flag = Image::write_flag;
    const decltype(Image::sections) &sections;
    const decltype(Image::functions) &functions;
    const decltype(Image::relocations) &relocations;
    uint64_t preferred_base;
    uint32_t size;
    explicit EvidenceImage(const Image &source) : source_(source), sections(source.sections),
        functions(source.functions), relocations(source.relocations), preferred_base(source.preferred_base), size(source.size) {}
    auto section(uint32_t address, size_t count = 1) const { return source_.section(address, count); }
    const unsigned char *read(uint32_t address, size_t count) const {
        if (!count || uint64_t(address) + count > size) return nullptr;
        const auto *part = source_.section(address, count);
        // A value read from mutable globals cannot be a persistent CFG fact.
        if (part && (part->flags & write_flag)) return nullptr;
        const auto *bytes = source_.read(address, count);
        if (bytes) record(address, static_cast<uint32_t>(address + count));
        return bytes;
    }
    uint32_t import_slot(std::string library, const std::string &symbol) const {
        const auto wanted = source_.import_slot(library, symbol);
        if (!wanted) return 0;
        std::transform(library.begin(), library.end(), library.begin(), [](unsigned char c) { return char(std::tolower(c)); });
        const auto imports = directory(IMAGE_DIRECTORY_ENTRY_IMPORT);
        if (!imports.VirtualAddress || imports.Size < sizeof(IMAGE_IMPORT_DESCRIPTOR)) return 0;
        for (uint32_t offset = 0; offset + sizeof(IMAGE_IMPORT_DESCRIPTOR) <= imports.Size;
                offset += sizeof(IMAGE_IMPORT_DESCRIPTOR)) {
            const auto *raw = read(imports.VirtualAddress + offset, sizeof(IMAGE_IMPORT_DESCRIPTOR));
            if (!raw) return 0;
            IMAGE_IMPORT_DESCRIPTOR entry; std::memcpy(&entry, raw, sizeof(entry));
            if (!entry.Name) return 0;
            auto name = string(entry.Name);
            std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c) { return char(std::tolower(c)); });
            if (name != library) continue;
            // The loader overwrites IAT values. Only the independent immutable
            // original-name table may certify their declared symbol identity.
            if (!entry.OriginalFirstThunk || wanted < entry.FirstThunk || (wanted - entry.FirstThunk) % 8) return 0;
            const auto offset64 = uint64_t(entry.OriginalFirstThunk) + wanted - entry.FirstThunk;
            if (offset64 > UINT32_MAX) return 0;
            const auto *lookup = read(static_cast<uint32_t>(offset64), 8);
            uint64_t value = 0; if (lookup) std::memcpy(&value, lookup, 8);
            if (!lookup || !value || value > UINT32_MAX - 2 || (value & IMAGE_ORDINAL_FLAG64)) return 0;
            if (!read(static_cast<uint32_t>(value), 2) || string(static_cast<uint32_t>(value) + 2) != symbol) return 0;
            return wanted;
        }
        return 0;
    }
    bool indexes() const {
        const auto exception = directory(IMAGE_DIRECTORY_ENTRY_EXCEPTION);
        if (!exception.VirtualAddress || !exception.Size || exception.Size % 12 ||
                !read(exception.VirtualAddress, exception.Size)) return false;
        const auto relocation = directory(IMAGE_DIRECTORY_ENTRY_BASERELOC);
        if ((!relocation.VirtualAddress != !relocation.Size) ||
                (relocation.Size && !read(relocation.VirtualAddress, relocation.Size))) return false;
        // All fragment ownership came from these CHAININFO flags/parents.
        // Keep the complete index, so a previously unexamined fragment cannot
        // silently join this owner in the running image.
        for (const auto &function : functions) {
            const auto *header = read(function.unwind, 4);
            if (!header || (header[0] & 7) != 1) return false;
            if (header[0] & (4 << 3)) {
                const auto length = 4 + ((uint32_t(header[2]) + 1) & ~1u) * 2 + 12;
                if (!read(function.unwind, length)) return false;
            }
        }
        return true;
    }
    bool seal(EntryPrefixBinding &result) const {
        // Do not split a DIR64 operand at a journal edge. Its complete original
        // value is needed for exact ASLR-aware live comparison.
        for (const auto &[address, value] : relocations) {
            (void)value;
            auto next = reads_.lower_bound(address);
            if ((next != reads_.end() && next->first < uint64_t(address) + 8) ||
                    (next != reads_.begin() && std::prev(next)->second > address))
                if (!read(address, 8)) return false;
        }
        size_t total = 0;
        for (const auto &[begin, end] : reads_) {
            total += end - begin;
            if (total > 16u * 1024u * 1024u) return false;
            const auto *raw = source_.read(begin, end - begin);
            if (!raw) return false;
            result.evidence.push_back({begin, {raw, raw + end - begin}});
        }
        result.relocations = relocations;
        result.preferred_base = preferred_base;
        return true;
    }
};

inline bool contract(const State &state, const EntryPrefixBinding &value) {
    const auto spec = std::find_if(std::begin(specs), std::end(specs), [&](const auto &item) {
        return item.reference == value.reference;
    });
    if (spec == std::end(specs) || value.table_reference != spec->table ||
            value.type != native_history_abi::semantic_id(spec->type) ||
            value.method != native_history_abi::semantic_id(spec->method) ||
            value.parameter_shape != native_history_abi::semantic_id(spec->shape) ||
            value.argument_count != spec->arguments || value.slot % 8 || value.slot > 65536 ||
            !value.native || value.end <= value.native || value.end > state.size || !value.unwind ||
            uint64_t(value.unwind) + 4 > state.size || !value.table ||
            uint64_t(value.table) + value.slot + 8 > state.size || !value.preferred_base ||
            value.preferred_base > UINT64_MAX - state.size ||
            value.prefix.size() < 5 || value.prefix.size() > 32 ||
            uint64_t(value.native) + value.prefix.size() > value.end || value.evidence.empty() ||
            value.imported_tail_slots.size() > 1 ||
            resolve(state.function_owners, value.reference) != value.native ||
            resolve(state.ranges, value.table_reference) != value.table) return false;
    for (const auto slot : value.imported_tail_slots)
        if (!slot || slot % 8 || uint64_t(slot) + 8 > state.size) return false;
    const auto method = std::find_if(state.semantic_methods.begin(), state.semantic_methods.end(), [&](const auto &item) {
        return item.type == value.type && item.method == value.method;
    });
    return method != state.semantic_methods.end() && method->slot == value.slot &&
        method->parameter_shape == value.parameter_shape && method->argument_count == value.argument_count;
}

template<typename Image>
inline bool prove(const Image &image, const State &state, const Spec &spec,
        EntryPrefixBinding &value, DecodeFailure &failure) {
    const auto reject = [&](uint32_t address, const char *reason) { failure = {address, reason, 0}; return false; };
    value.reference = spec.reference; value.table_reference = spec.table;
    value.native = resolve(state.function_owners, spec.reference); value.table = resolve(state.ranges, spec.table);
    value.type = native_history_abi::semantic_id(spec.type); value.method = native_history_abi::semantic_id(spec.method);
    value.parameter_shape = native_history_abi::semantic_id(spec.shape); value.argument_count = spec.arguments;
    const auto method = std::find_if(state.semantic_methods.begin(), state.semantic_methods.end(), [&](const auto &item) {
        return item.type == value.type && item.method == value.method;
    });
    if (!value.native || !value.table || method == state.semantic_methods.end() ||
            method->parameter_shape != value.parameter_shape || method->argument_count != value.argument_count ||
            method->slot % 8 || method->slot > 65536)
        return reject(spec.reference, "entry lacks independent owner/table/method ABI identity");
    value.slot = method->slot;
    if (uint64_t(value.table) + value.slot + 8 > image.size) return false;
    const auto *slot = image.read(value.table + value.slot, 8);
    uint64_t body = 0; if (slot) std::memcpy(&body, slot, 8);
    if (!slot || body != image.preferred_base + value.native)
        return reject(value.native, "original virtual slot does not name this native body");
    const auto regions = frame_detail::logical_regions(image, value.native);
    if (regions.size() != 1 || regions.front().first != value.native ||
            regions.front().second - value.native > 2u * 1024u * 1024u)
        return reject(value.native, "entry has no complete contiguous logical unwind owner");
    value.end = regions.front().second;
    const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), value.native,
        [](const auto &item, uint32_t address) { return item.begin < address; });
    if (function == image.functions.end() || function->begin != value.native ||
            (function->owner && function->owner != value.native)) return false;
    value.unwind = function->unwind;
    EvidenceImage<Image> observed(image);
    if (!observed.indexes() || !no_eh_continuations(observed, value.native, value.end, &failure))
        return reject(failure.address ? failure.address : value.native,
            failure.address ? failure.reason : "entry has unproved unwind or exception continuations");
    std::vector<Instruction> rows;
    std::set<uint32_t> entries;
    ControlFlow flow;
    if (!decode(observed, value.native, value.end, rows, &entries, &failure, &flow)) return false;
    std::map<uint32_t, const Instruction *> code;
    for (const auto &row : rows) if (!code.emplace(row.address, &row).second) return false;
    uint32_t next = value.native;
    while (next - value.native < 5) {
        const auto at = code.find(next);
        if (at == code.end()) return reject(next, "entry prefix is not a complete executable instruction");
        const auto &op = at->second->decoded;
        const bool control = op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
            op.opcode == 0xe9 || op.opcode == 0xeb || (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
            (op.opcode == 0x0f && (op.opcode2 == 0x0b || (op.opcode2 >= 0x80 && op.opcode2 <= 0x8f))) ||
            (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5));
        if (control || flow.nonreturning_calls.count(next))
            return reject(next, "entry terminates before a complete patch prefix");
        value.prefix.insert(value.prefix.end(), at->second->bytes.begin(), at->second->bytes.end());
        next += op.len;
    }
    const auto interior = [&](int64_t address) {
        return address > value.native && address < int64_t(value.native) + value.prefix.size();
    };
    for (const auto entry : entries) if (interior(entry)) return reject(entry, "branch enters patch prefix interior");
    for (const auto &[address, targets] : flow.rva_tables)
        for (const auto target : targets) if (interior(target)) return reject(address, "switch table names patch prefix interior");
    std::map<uint32_t, std::vector<uint32_t>> edges;
    std::set<uint32_t> roots{value.native};
    std::map<uint32_t, const char *> invalid;
    const auto independent = [&](int64_t target) {
        const auto found = std::lower_bound(image.functions.begin(), image.functions.end(), target,
            [](const auto &item, int64_t address) { return item.begin < address; });
        return found != image.functions.end() && found->begin == target && (!found->owner || found->owner == target);
    };
    for (const auto &fragment : image.functions) if ((fragment.owner ? fragment.owner : fragment.begin) == value.native) {
        if (interior(fragment.begin) || !code.count(fragment.begin)) return reject(fragment.begin, "unwind fragment enters patch data");
        roots.insert(fragment.begin);
    }
    for (const auto &[address, pointer] : image.relocations) {
        (void)address;
        if (pointer >= image.preferred_base + value.native && pointer < image.preferred_base + value.end) {
            const auto target = static_cast<uint32_t>(pointer - image.preferred_base);
            if (interior(target) || !code.count(target)) return reject(target, "absolute entry escapes into patch data");
            roots.insert(target);
        }
    }
    for (const auto &[address, row] : code) {
        const auto &op = row->decoded; const auto after = address + op.len;
        const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
            (op.opcode >= 0xe0 && op.opcode <= 0xe3) ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
        const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
        const bool indirect = op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5);
        const auto edge = [&](int64_t target, bool tail) {
            if (interior(target)) { invalid.emplace(address, "control flow enters overwritten prefix"); return; }
            if (target >= value.native && target < value.end && code.count(static_cast<uint32_t>(target)))
                edges[address].push_back(static_cast<uint32_t>(target));
            else if (!tail || !independent(target)) invalid.emplace(address, "entry control flow has an unproved destination");
        };
        if (conditional || jump) edge(int64_t(after) + ((op.flags & F_IMM8) ?
            int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32))), true);
        if (indirect) {
            const auto targets = flow.indirect_edges.find(address);
            if (targets != flow.indirect_edges.end() && !targets->second.empty()) {
                for (const auto target : targets->second) edge(target, false);
            } else {
                // Complete RIP-relative FF /4 tail forwarding to this named
                // SDL entry is an external terminal, not a switch or a target
                // inside the owner. No arbitrary indirect transfer is allowed.
                const auto &raw = row->bytes;
                const bool plain = (raw.size() == 6 && raw[0] == 0xff && raw[1] == 0x25) ||
                    (raw.size() == 7 && raw[0] == 0x48 && raw[1] == 0xff && raw[2] == 0x25);
                const int64_t slot = int64_t(after) + static_cast<int32_t>(op.disp.disp32);
                if (plain && slot > 0 && slot <= UINT32_MAX &&
                        imported_tail_identity(observed, static_cast<uint32_t>(slot))) {
                    value.imported_tail_slots.push_back(static_cast<uint32_t>(slot));
                } else invalid.emplace(address, "entry has an unproved indirect edge");
            }
        }
        int64_t escaped = -1;
        if (op.opcode == 0xe8) escaped = int64_t(after) + static_cast<int32_t>(op.imm.imm32);
        if (op.opcode == 0x8d && op.rex_w && !op.p_67 && op.modrm_mod == 0 && op.modrm_rm == 5)
            escaped = int64_t(after) + static_cast<int32_t>(op.disp.disp32);
        if (interior(escaped)) return reject(address, "entry interior is an escaping call or address");
        if (escaped >= value.native && escaped < value.end) {
            if (!code.count(static_cast<uint32_t>(escaped))) return reject(address, "entry escaping label is not decoded");
            roots.insert(static_cast<uint32_t>(escaped));
        }
        if (op.opcode == 0xca || op.opcode == 0xcb || op.opcode == 0xcf)
            invalid.emplace(address, "entry has an unsupported return");
        const bool terminal = jump || indirect || op.opcode == 0xc2 || op.opcode == 0xc3 || op.opcode == 0xcc ||
            (op.opcode == 0x0f && op.opcode2 == 0x0b) || flow.nonreturning_calls.count(address);
        if (!terminal) {
            // The entry's own ordinary fallthrough remains in the trampoline.
            if (code.count(after)) edges[address].push_back(after);
            else invalid.emplace(address, "entry CFG fallthrough leaves decoded code");
        }
    }
    std::vector<uint32_t> pending(roots.begin(), roots.end());
    std::set<uint32_t> reached;
    while (!pending.empty()) {
        const auto address = pending.back(); pending.pop_back();
        if (!reached.insert(address).second) continue;
        if (const auto bad = invalid.find(address); bad != invalid.end()) return reject(address, bad->second);
        if (!code.count(address)) return reject(address, "entry CFG root is not decoded");
        const auto &successors = edges[address];
        pending.insert(pending.end(), successors.begin(), successors.end());
    }
    if (!external_reference_veto(image.sections, Image::execute_flag, image.size, image.preferred_base, value.native, value.end,
            value.prefix.size(), false, [&](uint32_t address, size_t count) { return image.read(address, count); }, failure)) return false;
    std::sort(value.imported_tail_slots.begin(), value.imported_tail_slots.end());
    value.imported_tail_slots.erase(std::unique(value.imported_tail_slots.begin(), value.imported_tail_slots.end()),
        value.imported_tail_slots.end());
    return observed.seal(value) && contract(state, value);
}
} // namespace dfcn::pe_runtime::entry_prefix_detail

namespace dfcn::pe_runtime {
template<typename Image>
inline void discover_entry_prefixes(const Image &image, address_runtime::State &state,
        const address_runtime::Progress &report = {}) {
    state.entry_prefixes.clear();
    // Baselines still use their explicitly reviewed entry prefixes. This
    // certificate is required by the discovered-ABI consumers only.
    if (state.edition <= 2) return;
    for (const auto &spec : entry_prefix_detail::specs) {
        address_runtime::EntryPrefixBinding value;
        display_decode::DecodeFailure failure;
        if (entry_prefix_detail::prove(image, state, spec, value, failure))
            state.entry_prefixes.push_back(std::move(value));
        else {
            std::ostringstream message;
            message << "Unresolved native entry CFG: reference=0x" << std::hex << spec.reference <<
                " instruction=0x" << failure.address << " " << failure.reason;
            if (!state.message.empty()) state.message += "; ";
            state.message += message.str();
            if (report) report(message.str());
        }
    }
    if (report) report("Native entry CFG certificates: " + std::to_string(state.entry_prefixes.size()) +
        "/" + std::to_string(std::size(entry_prefix_detail::specs)));
}
} // namespace dfcn::pe_runtime
