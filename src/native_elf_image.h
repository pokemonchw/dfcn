#pragma once

#ifndef _WIN32
#include <elf.h>
#include <algorithm>
#include <array>
#include <bit>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

namespace dfcn::elf_runtime {

inline std::array<unsigned char, 32> sha256(const unsigned char *data, size_t size) {
    static constexpr uint32_t constants[]{
        0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
        0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
        0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
        0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
        0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
        0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
        0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
        0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
    std::array<uint32_t, 8> hash{0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,
        0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};
    const auto block = [&](const unsigned char *bytes) {
        uint32_t words[64]{};
        for (size_t i = 0; i < 16; ++i)
            for (size_t j = 0; j < 4; ++j) words[i] = (words[i] << 8) | bytes[i * 4 + j];
        for (size_t i = 16; i < 64; ++i) {
            const auto a = words[i - 15], b = words[i - 2];
            words[i] = words[i - 16] + (std::rotr(a, 7) ^ std::rotr(a, 18) ^ (a >> 3)) +
                words[i - 7] + (std::rotr(b, 17) ^ std::rotr(b, 19) ^ (b >> 10));
        }
        auto [a,b,c,d,e,f,g,h] = hash;
        for (size_t i = 0; i < 64; ++i) {
            const auto t = h + (std::rotr(e, 6) ^ std::rotr(e, 11) ^ std::rotr(e, 25)) +
                ((e & f) ^ (~e & g)) + constants[i] + words[i];
            const auto u = (std::rotr(a, 2) ^ std::rotr(a, 13) ^ std::rotr(a, 22)) +
                ((a & b) ^ (a & c) ^ (b & c));
            h=g; g=f; f=e; e=d+t; d=c; c=b; b=a; a=t+u;
        }
        const uint32_t values[]{a,b,c,d,e,f,g,h};
        for (size_t i = 0; i < 8; ++i) hash[i] += values[i];
    };
    const size_t full = size / 64;
    for (size_t i = 0; i < full; ++i) block(data + i * 64);
    std::array<unsigned char, 128> tail{};
    const size_t rest = size % 64, length = rest < 56 ? 64 : 128;
    if (rest) std::memcpy(tail.data(), data + full * 64, rest);
    tail[rest] = 0x80;
    const uint64_t bits = uint64_t(size) * 8;
    for (size_t i = 0; i < 8; ++i) tail[length - 1 - i] = static_cast<unsigned char>(bits >> (8 * i));
    block(tail.data());
    if (length == 128) block(tail.data() + 64);
    std::array<unsigned char, 32> result{};
    for (size_t i = 0; i < 32; ++i) result[i] = static_cast<unsigned char>(hash[i / 4] >> (24 - 8 * (i % 4)));
    return result;
}

inline std::string hex_digest(const std::array<unsigned char, 32> &digest) {
    constexpr char digits[] = "0123456789abcdef";
    std::string result;
    for (auto byte : digest) { result += digits[byte >> 4]; result += digits[byte & 15]; }
    return result;
}

struct Section { uint32_t begin, end, raw, raw_size, flags; };
struct Function { uint32_t begin, end; };
struct Symbol { uint32_t address, size; unsigned type; };

// Disk-only ELF reader. Addresses are ELF virtual coordinates, never pointers
// into the process. Apply local dynamic relocations only to the file snapshot.
class Image {
    std::vector<unsigned char> file_;
    std::vector<Elf64_Shdr> headers_;
    std::unordered_map<std::string, Symbol> symbols_;
    std::unordered_map<std::string, uint32_t> imports_;
    const unsigned char *file_bytes(uint64_t offset, uint64_t count) const {
        if (offset > file_.size() || count > file_.size() - offset)
            throw std::runtime_error("ELF data extends beyond its file");
        return file_.data() + offset;
    }
    template <typename T> T value(uint64_t offset) const {
        T result; std::memcpy(&result, file_bytes(offset, sizeof(T)), sizeof(T)); return result;
    }
    std::string string(const Elf64_Shdr &table, uint32_t offset) const {
        if (offset >= table.sh_size) throw std::runtime_error("Invalid ELF string offset");
        const auto *begin = file_bytes(table.sh_offset + offset, table.sh_size - offset);
        const auto *end = static_cast<const unsigned char *>(std::memchr(begin, 0, table.sh_size - offset));
        if (!end) throw std::runtime_error("Unterminated ELF string");
        return {reinterpret_cast<const char *>(begin), reinterpret_cast<const char *>(end)};
    }
public:
    static constexpr uint32_t execute_flag = PF_X, write_flag = PF_W;
    uint64_t preferred_base = 0;
    uint32_t size = 0;
    std::string build_id;
    std::array<unsigned char, 32> digest{};
    std::vector<Section> sections;
    std::vector<Function> functions;

    explicit Image(const std::filesystem::path &path) {
        std::ifstream input(path, std::ios::binary | std::ios::ate);
        if (!input) throw std::runtime_error("Cannot open native ELF image: " + path.string());
        const auto length = input.tellg();
        if (length <= 0 || uint64_t(length) > 512 * 1024 * 1024)
            throw std::runtime_error("Invalid native ELF file size");
        file_.resize(static_cast<size_t>(length)); input.seekg(0);
        if (!input.read(reinterpret_cast<char *>(file_.data()), length)) throw std::runtime_error("Cannot read native ELF image");
        digest = sha256(file_.data(), file_.size());
        const auto header = value<Elf64_Ehdr>(0);
        if (std::memcmp(header.e_ident, ELFMAG, SELFMAG) || header.e_ident[EI_CLASS] != ELFCLASS64 ||
            header.e_ident[EI_DATA] != ELFDATA2LSB || header.e_machine != EM_X86_64 ||
            (header.e_type != ET_EXEC && header.e_type != ET_DYN) || header.e_phentsize != sizeof(Elf64_Phdr) ||
            !header.e_phnum || header.e_phnum > 128 || header.e_shentsize != sizeof(Elf64_Shdr) ||
            !header.e_shnum || header.e_shstrndx >= header.e_shnum)
            throw std::runtime_error("Expected a native x86-64 ELF executable or library");
        for (size_t i = 0; i < header.e_phnum; ++i) {
            const auto ph = value<Elf64_Phdr>(header.e_phoff + i * sizeof(Elf64_Phdr));
            if (ph.p_type == PT_LOAD) {
                if (ph.p_vaddr > UINT32_MAX || ph.p_memsz > UINT32_MAX - ph.p_vaddr || ph.p_filesz > ph.p_memsz ||
                    ph.p_offset > UINT32_MAX || ph.p_filesz > UINT32_MAX) throw std::runtime_error("Invalid ELF load segment");
                file_bytes(ph.p_offset, ph.p_filesz);
                sections.push_back({uint32_t(ph.p_vaddr), uint32_t(ph.p_vaddr + ph.p_memsz),
                    uint32_t(ph.p_offset), uint32_t(ph.p_filesz), ph.p_flags});
                size = std::max(size, uint32_t(ph.p_vaddr + ph.p_memsz));
            }
            if (ph.p_type == PT_NOTE) {
                uint64_t cursor = ph.p_offset, end = cursor + ph.p_filesz;
                file_bytes(cursor, ph.p_filesz);
                while (cursor <= end && sizeof(Elf64_Nhdr) <= end - cursor) {
                    const auto note = value<Elf64_Nhdr>(cursor); cursor += sizeof(note);
                    const uint64_t names = (uint64_t(note.n_namesz) + 3) & ~uint64_t(3);
                    const uint64_t desc = (uint64_t(note.n_descsz) + 3) & ~uint64_t(3);
                    if (names > end - cursor || desc > end - cursor - names) break;
                    if (note.n_type == NT_GNU_BUILD_ID && note.n_namesz == 4 &&
                        !std::memcmp(file_bytes(cursor, 4), "GNU", 4)) {
                        constexpr char digits[] = "0123456789abcdef";
                        for (size_t j = 0; j < note.n_descsz; ++j) {
                            const auto byte = *file_bytes(cursor + names + j, 1);
                            build_id += digits[byte >> 4]; build_id += digits[byte & 15];
                        }
                    }
                    cursor += names + desc;
                }
            }
        }
        std::sort(sections.begin(), sections.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
        for (size_t i = 1; i < sections.size(); ++i)
            if (sections[i].begin < sections[i - 1].end) throw std::runtime_error("Overlapping ELF load segments");
        for (size_t i = 0; i < header.e_shnum; ++i) headers_.push_back(value<Elf64_Shdr>(header.e_shoff + i * sizeof(Elf64_Shdr)));
        for (const auto &table : headers_) if (table.sh_type == SHT_DYNSYM) {
            if (table.sh_link >= headers_.size() || table.sh_entsize != sizeof(Elf64_Sym) || table.sh_size % sizeof(Elf64_Sym))
                throw std::runtime_error("Invalid ELF dynamic symbol table");
            for (uint64_t offset = 0; offset < table.sh_size; offset += sizeof(Elf64_Sym)) {
                const auto symbol = value<Elf64_Sym>(table.sh_offset + offset);
                if (!symbol.st_name || symbol.st_shndx == SHN_UNDEF || symbol.st_shndx >= headers_.size() ||
                    symbol.st_value > UINT32_MAX || symbol.st_size > UINT32_MAX) continue;
                symbols_.emplace(string(headers_[table.sh_link], symbol.st_name),
                    Symbol{uint32_t(symbol.st_value), uint32_t(symbol.st_size), ELF64_ST_TYPE(symbol.st_info)});
            }
        }
        // Resolve RELATIVE and locally defined symbol pointers in the disk
        // snapshot so PIE vtables and RTTI have the same coordinate contract.
        for (const auto &table : headers_) if (table.sh_type == SHT_RELA) {
            if (table.sh_entsize != sizeof(Elf64_Rela) || table.sh_size % sizeof(Elf64_Rela) || table.sh_link >= headers_.size())
                throw std::runtime_error("Invalid ELF relocation table");
            const auto &symbols = headers_[table.sh_link];
            if (symbols.sh_type != SHT_DYNSYM || symbols.sh_link >= headers_.size()) continue;
            for (uint64_t offset = 0; offset < table.sh_size; offset += sizeof(Elf64_Rela)) {
                const auto relocation = value<Elf64_Rela>(table.sh_offset + offset);
                if (relocation.r_offset > UINT32_MAX) continue;
                const auto type = ELF64_R_TYPE(relocation.r_info), index = ELF64_R_SYM(relocation.r_info);
                if (index >= symbols.sh_size / sizeof(Elf64_Sym)) throw std::runtime_error("Invalid ELF relocation symbol");
                const auto symbol = value<Elf64_Sym>(symbols.sh_offset + index * sizeof(Elf64_Sym));
                const auto name = string(headers_[symbols.sh_link], symbol.st_name);
                if (type == R_X86_64_JUMP_SLOT || type == R_X86_64_GLOB_DAT)
                    imports_.emplace("got:" + name, uint32_t(relocation.r_offset));
                uint64_t target = 0;
                if (type == R_X86_64_RELATIVE && relocation.r_addend >= 0) target = uint64_t(relocation.r_addend);
                else if ((type == R_X86_64_64 || type == R_X86_64_GLOB_DAT) && symbol.st_shndx != SHN_UNDEF)
                    target = symbol.st_value + relocation.r_addend;
                if (target && target < size && read(uint32_t(relocation.r_offset), 8)) {
                    const auto *owner = section(uint32_t(relocation.r_offset), 8);
                    std::memcpy(file_.data() + owner->raw + relocation.r_offset - owner->begin, &target, 8);
                }
            }
        }
        // An ELF PLT entry's RIP-relative jump names its GOT symbol. This
        // remains valid when import ordering and Steam-only imports change.
        for (const auto &table : headers_) {
            const auto name = string(headers_[header.e_shstrndx], table.sh_name);
            if (name != ".plt.sec" && name != ".plt" && name != ".plt.got") continue;
            if (table.sh_addr > UINT32_MAX || table.sh_size > UINT32_MAX - table.sh_addr) continue;
            for (uint32_t offset = 0; offset + 6 <= table.sh_size; offset += 16) {
                const auto entry = uint32_t(table.sh_addr) + offset;
                for (uint32_t prefix = 0; prefix <= 5; ++prefix) {
                    const auto *bytes = read(entry + prefix, 6);
                    if (!bytes || bytes[0] != 0xff || bytes[1] != 0x25) continue;
                    int32_t displacement; std::memcpy(&displacement, bytes + 2, 4);
                    const int64_t slot = int64_t(entry) + prefix + 6 + displacement;
                    for (const auto &[symbol, got] : imports_) if (symbol.starts_with("got:") && int64_t(got) == slot) {
                        if (name == ".plt.sec") plt_[symbol.substr(4)] = entry;
                        else plt_.emplace(symbol.substr(4), entry);
                    }
                }
            }
        }
    }
    const Section *section(uint32_t address, size_t count = 1) const {
        auto at = std::upper_bound(sections.begin(), sections.end(), address,
            [](uint32_t key, const auto &item) { return key < item.begin; });
        if (at == sections.begin()) return nullptr;
        --at; return address < at->end && count <= at->end - address ? &*at : nullptr;
    }
    const unsigned char *read(uint32_t address, size_t count) const {
        const auto *owner = section(address, count);
        if (!owner || address - owner->begin > owner->raw_size || count > owner->raw_size - (address - owner->begin)) return nullptr;
        return file_.data() + owner->raw + address - owner->begin;
    }
    uint64_t pointer(uint32_t address) const {
        uint64_t result = 0;
        if (const auto *bytes = read(address, 8)) std::memcpy(&result, bytes, 8);
        return result;
    }
    std::vector<uint32_t> find_vtables(const std::string &name) const {
        if (!vtables_indexed_) {
            std::unordered_map<uint32_t, std::string> types;
            for (const auto &s : sections) if (!(s.flags & PF_X))
                for (uint32_t p = s.begin; uint64_t(p) + 16 <= uint64_t(s.begin) + s.raw_size; p += 8) {
                    const auto address = pointer(p + 8);
                    if (address > UINT32_MAX) continue;
                    const auto *owner = section(uint32_t(address));
                    const auto *bytes = read(uint32_t(address), 1);
                    if (!owner || (owner->flags & PF_W) || !bytes ||
                        (bytes[0] != 'N' && (bytes[0] < '0' || bytes[0] > '9'))) continue;
                    const auto length = std::min<size_t>(4096, owner->raw_size - (address - owner->begin));
                    const auto *end = static_cast<const unsigned char *>(std::memchr(bytes, 0, length));
                    if (!end || end == bytes) continue;
                    bool valid = true;
                    for (const auto *at = bytes; at != end; ++at)
                        if (!((*at >= '0' && *at <= '9') || (*at >= 'A' && *at <= 'Z') ||
                              (*at >= 'a' && *at <= 'z') || *at == '_')) { valid = false; break; }
                    if (valid) types.emplace(p, std::string(reinterpret_cast<const char *>(bytes), size_t(end - bytes)));
                }
            for (const auto &s : sections) if (!(s.flags & PF_X))
                for (uint32_t p = s.begin; uint64_t(p) + 24 <= uint64_t(s.begin) + s.raw_size; p += 8) {
                    if (pointer(p)) continue;
                    bool has_code = false, invalid = false;
                    for (uint32_t slot = 0; slot < 4; ++slot) {
                        const auto method = pointer(p + 16 + slot * 8);
                        if (!method) continue; // Unresolved external virtual method.
                        const auto *code = method <= UINT32_MAX ? section(uint32_t(method)) : nullptr;
                        if (!code || !(code->flags & PF_X)) { invalid = true; break; }
                        has_code = true;
                    }
                    if (invalid || !has_code) continue;
                    const auto target = pointer(p + 8);
                    if (target > UINT32_MAX) continue;
                    const auto at = types.find(uint32_t(target));
                    if (at != types.end()) vtables_[at->second].push_back(p + 16);
                }
            vtables_indexed_ = true;
        }
        const auto at = vtables_.find(name);
        return at == vtables_.end() ? std::vector<uint32_t>{} : at->second;
    }
    uint32_t import_slot(const std::string &kind, const std::string &name) const {
        if (kind == "object") {
            const auto at = symbols_.find(name);
            return at != symbols_.end() && at->second.type == STT_OBJECT &&
                section(at->second.address, at->second.size) ? at->second.address : 0;
        }
        const auto &source = kind == "plt" ? plt_ : imports_;
        const auto at = source.find(kind == "plt" ? name : "got:" + name);
        return at == source.end() ? 0 : at->second;
    }
    const Symbol *symbol(const std::string &name) const {
        const auto at = symbols_.find(name); return at == symbols_.end() ? nullptr : &at->second;
    }
private:
    std::unordered_map<std::string, uint32_t> plt_;
    mutable bool vtables_indexed_ = false;
    mutable std::unordered_map<std::string, std::vector<uint32_t>> vtables_;
};
} // namespace dfcn::elf_runtime
#endif
