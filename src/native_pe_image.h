#pragma once

// Startup discovery reads the executable on disk. No PE-derived address in this
// reader is ever dereferenced in the running process.
#ifdef _WIN32
#include <windows.h>
#include <bcrypt.h>
#include <algorithm>
#include <array>
#include <cctype>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <limits>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace dfcn::pe_runtime {

inline std::array<unsigned char, 32> sha256(const unsigned char *data, std::size_t size) {
    struct Handles {
        BCRYPT_ALG_HANDLE algorithm = nullptr;
        BCRYPT_HASH_HANDLE hash = nullptr;
        std::vector<unsigned char> object;
        ~Handles() {
            if (hash) BCryptDestroyHash(hash);
            if (algorithm) BCryptCloseAlgorithmProvider(algorithm, 0);
        }
    } handles;
    auto require = [](NTSTATUS result) {
        if (result < 0) throw std::runtime_error("Windows SHA-256 operation failed");
    };
    if (size && !data) throw std::runtime_error("Missing SHA-256 input");
    require(BCryptOpenAlgorithmProvider(&handles.algorithm, BCRYPT_SHA256_ALGORITHM, nullptr, 0));
    DWORD object_size = 0, result_size = 0;
    require(BCryptGetProperty(handles.algorithm, BCRYPT_OBJECT_LENGTH,
        reinterpret_cast<PUCHAR>(&object_size), sizeof(object_size), &result_size, 0));
    if (result_size != sizeof(object_size) || !object_size)
        throw std::runtime_error("Invalid Windows SHA-256 object size");
    handles.object.resize(object_size);
    require(BCryptCreateHash(handles.algorithm, &handles.hash, handles.object.data(), object_size, nullptr, 0, 0));
    while (size) {
        const auto count = static_cast<ULONG>((std::min)(size,
            static_cast<std::size_t>((std::numeric_limits<ULONG>::max)())));
        require(BCryptHashData(handles.hash, const_cast<PUCHAR>(data), count, 0));
        data += count;
        size -= count;
    }
    std::array<unsigned char, 32> digest{};
    require(BCryptFinishHash(handles.hash, digest.data(), static_cast<ULONG>(digest.size()), 0));
    return digest;
}

inline std::string hex_digest(const std::array<unsigned char, 32> &digest) {
    constexpr char digits[] = "0123456789abcdef";
    std::string result(digest.size() * 2, '0');
    for (std::size_t i = 0; i < digest.size(); ++i) {
        result[i * 2] = digits[digest[i] >> 4];
        result[i * 2 + 1] = digits[digest[i] & 15];
    }
    return result;
}

struct Section {
    std::uint32_t begin = 0, end = 0, raw = 0, raw_size = 0, flags = 0;
};
struct Function { std::uint32_t begin = 0, end = 0, owner = 0, unwind = 0; };

class Image {
public:
    static constexpr uint32_t execute_flag = IMAGE_SCN_MEM_EXECUTE;
    static constexpr uint32_t write_flag = IMAGE_SCN_MEM_WRITE;
    std::vector<unsigned char> file;
    std::vector<Section> sections;
    std::vector<Function> functions;
    // The second member is the unrebased 64-bit value at a DIR64 relocation.
    std::vector<std::pair<std::uint32_t, std::uint64_t>> relocations;
    std::array<unsigned char, 32> digest{};
    std::uint64_t preferred_base = 0;
    std::uint32_t timestamp = 0, size = 0;

    explicit Image(const std::filesystem::path &path) {
        std::ifstream input(path, std::ios::binary | std::ios::ate);
        if (!input) throw std::runtime_error("Cannot open the game executable");
        const auto length = input.tellg();
        if (length <= 0 || static_cast<std::uint64_t>(length) > UINT32_MAX)
            throw std::runtime_error("Invalid game executable file size");
        file.resize(static_cast<std::size_t>(length));
        input.seekg(0);
        if (!input.read(reinterpret_cast<char *>(file.data()), static_cast<std::streamsize>(file.size())))
            throw std::runtime_error("Cannot read the complete game executable");

        const auto dos = file_value<IMAGE_DOS_HEADER>(0);
        if (dos.e_magic != IMAGE_DOS_SIGNATURE || dos.e_lfanew < static_cast<LONG>(sizeof(dos)))
            throw std::runtime_error("Invalid game executable DOS header");
        const auto nt_offset = static_cast<std::size_t>(dos.e_lfanew);
        if (file_value<DWORD>(nt_offset) != IMAGE_NT_SIGNATURE)
            throw std::runtime_error("Invalid game executable PE signature");
        const auto header = file_value<IMAGE_FILE_HEADER>(nt_offset + sizeof(DWORD));
        if (header.Machine != IMAGE_FILE_MACHINE_AMD64 || !header.NumberOfSections ||
            header.NumberOfSections > 96 || header.SizeOfOptionalHeader < sizeof(IMAGE_OPTIONAL_HEADER64))
            throw std::runtime_error("The game executable is not an AMD64 PE64 image");
        const auto optional_offset = nt_offset + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER);
        const auto optional = file_value<IMAGE_OPTIONAL_HEADER64>(optional_offset);
        if (optional.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC || !optional.SizeOfImage ||
            !optional.SizeOfHeaders || optional.SizeOfHeaders > optional.SizeOfImage ||
            optional.SizeOfHeaders > file.size() ||
            optional.NumberOfRvaAndSizes > IMAGE_NUMBEROF_DIRECTORY_ENTRIES ||
            optional.ImageBase > UINT64_MAX - optional.SizeOfImage)
            throw std::runtime_error("Invalid game executable PE64 optional header");
        preferred_base = optional.ImageBase;
        timestamp = header.TimeDateStamp;
        size = optional.SizeOfImage;
        headers_size_ = optional.SizeOfHeaders;
        for (unsigned i = 0; i < optional.NumberOfRvaAndSizes; ++i)
            directories_[i] = optional.DataDirectory[i];
        const auto table_offset = optional_offset + header.SizeOfOptionalHeader;
        const auto table_size = static_cast<std::size_t>(header.NumberOfSections) * sizeof(IMAGE_SECTION_HEADER);
        if (table_offset > headers_size_ || table_size > headers_size_ - table_offset)
            throw std::runtime_error("Game executable section table is outside its headers");
        for (unsigned i = 0; i < header.NumberOfSections; ++i) {
            const auto native = file_value<IMAGE_SECTION_HEADER>(table_offset + i * sizeof(IMAGE_SECTION_HEADER));
            const auto extent = (std::max)(native.Misc.VirtualSize, native.SizeOfRawData);
            const std::uint64_t end = std::uint64_t(native.VirtualAddress) + extent;
            if (end > size || end > UINT32_MAX || native.VirtualAddress < headers_size_ ||
                native.PointerToRawData > file.size() ||
                native.SizeOfRawData > file.size() - native.PointerToRawData ||
                (native.SizeOfRawData && native.PointerToRawData < headers_size_))
                throw std::runtime_error("Game executable section is outside its image or file");
            sections.push_back({native.VirtualAddress, static_cast<std::uint32_t>(end),
                native.PointerToRawData, native.SizeOfRawData, native.Characteristics});
        }
        std::sort(sections.begin(), sections.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
        for (std::size_t i = 1; i < sections.size(); ++i)
            if (sections[i].begin < sections[i - 1].end)
                throw std::runtime_error("Overlapping game executable sections");
        digest = sha256(file.data(), file.size());
    }

    // A saved entry certificate may name an import tail. Loading that cache
    // needs the bounded import directory, not the full discovery indexes.
    void prepare_imports() {
        if (imports_prepared_) return;
        imports_.clear();
        parse_imports();
        imports_prepared_ = true;
    }

    // Fresh discovery (including ABI evidence on reviewed images) also needs
    // unwind ownership, relocation and RTTI indexes.
    void prepare_scan() {
        if (scan_prepared_) return;
        functions.clear();
        relocations.clear();
        vtables_.clear();
        parse_functions();
        parse_relocations();
        prepare_imports();
        index_vtables();
        scan_prepared_ = true;
    }

    const Section *section(std::uint32_t rva, std::size_t count = 1) const {
        auto found = std::upper_bound(sections.begin(), sections.end(), rva,
            [](std::uint32_t address, const auto &item) { return address < item.begin; });
        if (found == sections.begin()) return nullptr;
        --found;
        return rva < found->end && count <= found->end - rva ? &*found : nullptr;
    }

    const unsigned char *read(std::uint32_t rva, std::size_t length) const {
        if (rva < headers_size_ && length <= headers_size_ - rva &&
            rva <= file.size() && length <= file.size() - rva)
            return file.data() + rva;
        const auto *owner = section(rva, length);
        if (!owner) return nullptr;
        const auto delta = rva - owner->begin;
        if (delta > owner->raw_size || length > owner->raw_size - delta) return nullptr;
        const std::uint64_t offset = std::uint64_t(owner->raw) + delta;
        return offset <= file.size() && length <= file.size() - offset
            ? file.data() + static_cast<std::size_t>(offset) : nullptr;
    }

    std::vector<std::uint32_t> find_vtables(const std::string &decorated_name) const {
        const auto found = vtables_.find(decorated_name);
        return found == vtables_.end() ? std::vector<std::uint32_t>{} : found->second;
    }
    bool rtti_catalog_complete() const {
        return scan_prepared_ && !vtables_.empty();
    }

    std::uint32_t import_slot(std::string library, const std::string &symbol) const {
        lower_ascii(library);
        const auto found = imports_.find(library + '\0' + symbol);
        return found == imports_.end() ? 0 : found->second;
    }

    std::string version() const {
        if (const auto resource = resource_version(); !resource.empty()) return resource;
        constexpr char title[] = "Dwarf Fortress";
        auto found = file.begin();
        while ((found = std::search(found, file.end(), title, title + sizeof(title) - 1)) != file.end()) {
            const auto remaining = static_cast<std::size_t>(file.end() - found);
            const auto limit = (std::min)(remaining, std::size_t(96));
            for (std::size_t i = sizeof(title) - 1; i < limit; ++i) {
                const auto ch = found[i];
                if (ch < 32 || ch > 126) break;
                if (ch < '0' || ch > '9') continue;
                std::size_t end = i;
                while (end < limit && found[end] >= '0' && found[end] <= '9') ++end;
                if (end + 1 >= limit || found[end] != '.' || found[end + 1] < '0' || found[end + 1] > '9')
                    continue;
                ++end;
                while (end < limit && ((found[end] >= '0' && found[end] <= '9') || found[end] == '.')) ++end;
                return std::string(found + static_cast<std::ptrdiff_t>(i), found + static_cast<std::ptrdiff_t>(end));
            }
            ++found;
        }
        return {};
    }

private:
    bool scan_prepared_ = false;
    bool imports_prepared_ = false;
    std::uint32_t headers_size_ = 0;
    std::array<IMAGE_DATA_DIRECTORY, IMAGE_NUMBEROF_DIRECTORY_ENTRIES> directories_{};
    std::unordered_map<std::string, std::vector<std::uint32_t>> vtables_;
    std::unordered_map<std::string, std::uint32_t> imports_;

    template <typename T> T file_value(std::size_t offset) const {
        if (offset > file.size() || sizeof(T) > file.size() - offset)
            throw std::runtime_error("Truncated game executable header");
        T value{};
        std::memcpy(&value, file.data() + offset, sizeof(value));
        return value;
    }
    template <typename T> T value(std::uint32_t rva) const {
        const auto *data = read(rva, sizeof(T));
        if (!data) throw std::runtime_error("Game executable data has no file backing");
        T result{};
        std::memcpy(&result, data, sizeof(result));
        return result;
    }
    const unsigned char *directory(unsigned index) const {
        const auto &entry = directories_[index];
        if (!entry.VirtualAddress && !entry.Size) return nullptr;
        const auto *data = read(entry.VirtualAddress, entry.Size);
        if (!entry.VirtualAddress || !entry.Size || !data)
            throw std::runtime_error("Invalid game executable data directory");
        return data;
    }
    std::string string_at(std::uint32_t rva, std::size_t maximum = 4096) const {
        const auto *owner = section(rva);
        if (!owner) return {};
        const auto delta = rva - owner->begin;
        if (delta >= owner->raw_size) return {};
        const auto count = (std::min)(maximum, (std::min)(static_cast<std::size_t>(owner->end - rva),
            static_cast<std::size_t>(owner->raw_size - delta)));
        const auto *data = read(rva, count);
        if (!data) return {};
        const auto *end = static_cast<const unsigned char *>(std::memchr(data, 0, count));
        return end ? std::string(reinterpret_cast<const char *>(data), reinterpret_cast<const char *>(end))
                   : std::string{};
    }
    static void lower_ascii(std::string &text) {
        for (auto &ch : text)
            if (ch >= 'A' && ch <= 'Z') ch = static_cast<char>(ch + ('a' - 'A'));
    }

    void parse_functions() {
        const auto *data = directory(IMAGE_DIRECTORY_ENTRY_EXCEPTION);
        if (!data) return;
        const auto &entry = directories_[IMAGE_DIRECTORY_ENTRY_EXCEPTION];
        if (entry.Size % 12) throw std::runtime_error("Invalid game executable runtime function table size");
        std::vector<std::uint32_t> unwind_entries;
        for (std::size_t offset = 0; offset < entry.Size; offset += 12) {
            std::uint32_t begin = 0, end = 0, unwind = 0;
            std::memcpy(&begin, data + offset, 4);
            std::memcpy(&end, data + offset + 4, 4);
            std::memcpy(&unwind, data + offset + 8, 4);
            const auto *owner = begin < end ? section(begin, end - begin) : nullptr;
            if (!owner || !(owner->flags & IMAGE_SCN_MEM_EXECUTE) || !read(unwind, 4) ||
                (!functions.empty() && begin < functions.back().end))
                throw std::runtime_error("Invalid game executable runtime function range");
            functions.push_back({begin, end, begin, unwind});
            unwind_entries.push_back(unwind);
        }
        // A split MSVC routine can have several disjoint .pdata records. The
        // chained unwind record proves their common entry; address proximity
        // or a reference fragment's byte offset supplies no such identity.
        for (std::size_t index = 0; index < functions.size(); ++index) {
            std::size_t current = index;
            for (std::size_t depth = 0; ; ++depth) {
                if (depth >= 64) throw std::runtime_error("Cyclic or excessive game unwind chain");
                const auto unwind = unwind_entries[current];
                const auto *header = read(unwind, 4);
                if (!header || (header[0] & 7) != 1) throw std::runtime_error("Unsupported game unwind metadata");
                if (!(header[0] & (4 << 3))) break;
                if (header[0] & (3 << 3)) throw std::runtime_error("Conflicting game unwind flags");
                const auto *chain = read(unwind + 4 + ((std::uint32_t(header[2]) + 1) & ~1u) * 2, 12);
                if (!chain) throw std::runtime_error("Truncated game unwind chain");
                std::array<std::uint32_t, 3> parent{};
                std::memcpy(parent.data(), chain, 12);
                const auto found = std::lower_bound(functions.begin(), functions.end(), parent[0],
                    [](const auto &function, std::uint32_t value) { return function.begin < value; });
                if (found == functions.end() || found->begin != parent[0] || found->end != parent[1])
                    throw std::runtime_error("Game unwind chain has no exact parent function");
                current = static_cast<std::size_t>(found - functions.begin());
                if (unwind_entries[current] != parent[2])
                    throw std::runtime_error("Game unwind chain has inconsistent parent metadata");
            }
            functions[index].owner = functions[current].begin;
        }
    }

    void parse_relocations() {
        const auto *data = directory(IMAGE_DIRECTORY_ENTRY_BASERELOC);
        if (!data) return;
        const auto &entry = directories_[IMAGE_DIRECTORY_ENTRY_BASERELOC];
        std::size_t cursor = 0;
        while (cursor < entry.Size) {
            if (entry.Size - cursor < 8) throw std::runtime_error("Truncated game executable relocation block");
            std::uint32_t page = 0, block_size = 0;
            std::memcpy(&page, data + cursor, 4);
            std::memcpy(&block_size, data + cursor + 4, 4);
            if ((page & 4095) || page >= size || block_size < 8 || block_size > entry.Size - cursor || (block_size & 1))
                throw std::runtime_error("Invalid game executable relocation block");
            for (std::size_t offset = 8; offset < block_size; offset += 2) {
                std::uint16_t fixup = 0;
                std::memcpy(&fixup, data + cursor + offset, 2);
                const auto type = fixup >> 12;
                if (!type) continue;
                const std::uint64_t rva = std::uint64_t(page) + (fixup & 4095);
                if (type != IMAGE_REL_BASED_DIR64 || rva > UINT32_MAX || !section(static_cast<std::uint32_t>(rva), 8))
                    throw std::runtime_error("Invalid game executable AMD64 relocation");
                relocations.emplace_back(static_cast<std::uint32_t>(rva), value<std::uint64_t>(static_cast<std::uint32_t>(rva)));
            }
            cursor += block_size;
        }
        std::sort(relocations.begin(), relocations.end());
        for (std::size_t i = 1; i < relocations.size(); ++i)
            if (relocations[i].first == relocations[i - 1].first)
                throw std::runtime_error("Duplicate game executable relocation");
    }

    void parse_imports() {
        const auto *data = directory(IMAGE_DIRECTORY_ENTRY_IMPORT);
        if (!data) return;
        const auto &entry = directories_[IMAGE_DIRECTORY_ENTRY_IMPORT];
        for (std::size_t offset = 0; offset + sizeof(IMAGE_IMPORT_DESCRIPTOR) <= entry.Size;
             offset += sizeof(IMAGE_IMPORT_DESCRIPTOR)) {
            IMAGE_IMPORT_DESCRIPTOR descriptor{};
            std::memcpy(&descriptor, data + offset, sizeof(descriptor));
            if (!descriptor.OriginalFirstThunk && !descriptor.TimeDateStamp && !descriptor.ForwarderChain &&
                !descriptor.Name && !descriptor.FirstThunk) return;
            auto library = string_at(descriptor.Name);
            if (library.empty() || !descriptor.FirstThunk)
                throw std::runtime_error("Invalid game executable import descriptor");
            lower_ascii(library);
            const auto thunk = descriptor.OriginalFirstThunk ? descriptor.OriginalFirstThunk : descriptor.FirstThunk;
            for (std::uint64_t index = 0;; ++index) {
                const std::uint64_t lookup_rva = std::uint64_t(thunk) + index * 8;
                const std::uint64_t slot_rva = std::uint64_t(descriptor.FirstThunk) + index * 8;
                if (lookup_rva > UINT32_MAX || slot_rva > UINT32_MAX || !read(static_cast<std::uint32_t>(slot_rva), 8))
                    throw std::runtime_error("Invalid game executable import thunk range");
                const auto lookup = value<std::uint64_t>(static_cast<std::uint32_t>(lookup_rva));
                if (!lookup) break;
                std::string symbol;
                if (lookup & IMAGE_ORDINAL_FLAG64) {
                    if (lookup & ~(IMAGE_ORDINAL_FLAG64 | std::uint64_t(0xffff)))
                        throw std::runtime_error("Invalid game executable import ordinal");
                    symbol = std::to_string(lookup & 0xffff);
                } else {
                    if (lookup > UINT32_MAX - 2 || !read(static_cast<std::uint32_t>(lookup), 2))
                        throw std::runtime_error("Invalid game executable import name address");
                    symbol = string_at(static_cast<std::uint32_t>(lookup) + 2);
                    if (symbol.empty()) throw std::runtime_error("Invalid game executable import name");
                }
                imports_.try_emplace(library + '\0' + symbol, static_cast<std::uint32_t>(slot_rva));
            }
        }
        throw std::runtime_error("Unterminated game executable import directory");
    }

    void index_vtables() {
        for (const auto &owner : sections) {
            if (!(owner.flags & IMAGE_SCN_MEM_READ) || (owner.flags & (IMAGE_SCN_MEM_WRITE | IMAGE_SCN_MEM_EXECUTE)))
                continue;
            const std::uint64_t end = (std::min)(std::uint64_t(owner.end), std::uint64_t(owner.begin) + owner.raw_size);
            for (std::uint64_t slot = (std::uint64_t(owner.begin) + 7) & ~std::uint64_t(7); slot + 16 <= end; slot += 8) {
                const auto address = value<std::uint64_t>(static_cast<std::uint32_t>(slot));
                if (address < preferred_base || address - preferred_base > UINT32_MAX) continue;
                const auto col_rva = static_cast<std::uint32_t>(address - preferred_base);
                const auto *col = read(col_rva, 24);
                if (!col) continue;
                std::uint32_t signature = 0, offset = 0, descriptor = 0, self = 0;
                std::memcpy(&signature, col, 4);
                std::memcpy(&offset, col + 4, 4);
                std::memcpy(&descriptor, col + 12, 4);
                std::memcpy(&self, col + 20, 4);
                if (signature != 1 || offset || self != col_rva || descriptor > UINT32_MAX - 16 || !read(descriptor, 16))
                    continue;
                const auto name = string_at(descriptor + 16, 2048);
                if (name.empty()) continue;
                vtables_[name].push_back(static_cast<std::uint32_t>(slot + 8));
            }
        }
    }

    std::string resource_version() const {
        const auto &entry = directories_[IMAGE_DIRECTORY_ENTRY_RESOURCE];
        if (!entry.VirtualAddress || entry.Size < sizeof(IMAGE_RESOURCE_DIRECTORY)) return {};
        const auto *data = read(entry.VirtualAddress, entry.Size);
        if (!data) return {};
        auto children = [&](std::uint32_t offset) {
            std::vector<IMAGE_RESOURCE_DIRECTORY_ENTRY> result;
            if (offset > entry.Size || sizeof(IMAGE_RESOURCE_DIRECTORY) > entry.Size - offset) return result;
            IMAGE_RESOURCE_DIRECTORY header{};
            std::memcpy(&header, data + offset, sizeof(header));
            const std::size_t count = std::size_t(header.NumberOfNamedEntries) + header.NumberOfIdEntries;
            const std::size_t begin = std::size_t(offset) + sizeof(header);
            if (count > (entry.Size - begin) / sizeof(IMAGE_RESOURCE_DIRECTORY_ENTRY)) return result;
            result.resize(count);
            if (count) std::memcpy(result.data(), data + begin, count * sizeof(IMAGE_RESOURCE_DIRECTORY_ENTRY));
            return result;
        };
        for (const auto &type : children(0)) {
            if (type.NameIsString || type.Id != 16 || !type.DataIsDirectory) continue;
            for (const auto &name : children(type.OffsetToDirectory)) {
                if (!name.DataIsDirectory) continue;
                for (const auto &language : children(name.OffsetToDirectory)) {
                    if (language.DataIsDirectory || language.OffsetToData > entry.Size ||
                        sizeof(IMAGE_RESOURCE_DATA_ENTRY) > entry.Size - language.OffsetToData) continue;
                    IMAGE_RESOURCE_DATA_ENTRY leaf{};
                    std::memcpy(&leaf, data + language.OffsetToData, sizeof(leaf));
                    const auto *blob = read(leaf.OffsetToData, leaf.Size);
                    if (!blob || leaf.Size < 6) continue;
                    std::uint16_t length = 0, value_length = 0;
                    std::memcpy(&length, blob, 2);
                    std::memcpy(&value_length, blob + 2, 2);
                    if (length > leaf.Size || length < 6 || value_length < 52) continue;
                    constexpr char16_t key[] = u"VS_VERSION_INFO";
                    constexpr std::size_t key_size = sizeof(key);
                    if (length < 6 + key_size || std::memcmp(blob + 6, key, key_size)) continue;
                    constexpr std::size_t value_offset = (6 + key_size + 3) & ~std::size_t(3);
                    if (length < value_offset + 52) continue;
                    std::uint32_t signature = 0, high = 0, low = 0;
                    std::memcpy(&signature, blob + value_offset, 4);
                    std::memcpy(&high, blob + value_offset + 8, 4);
                    std::memcpy(&low, blob + value_offset + 12, 4);
                    if (signature != 0xfeef04bd || (!high && !low)) continue;
                    return std::to_string(high >> 16) + "." + std::to_string(high & 0xffff) + "." +
                        std::to_string(low >> 16) + "." + std::to_string(low & 0xffff);
                }
            }
        }
        return {};
    }
};

} // namespace dfcn::pe_runtime
#endif
