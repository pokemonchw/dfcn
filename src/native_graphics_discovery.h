#pragma once

#include "native_address_scan.h"
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace dfcn::pe_runtime {
namespace graphics_discovery_detail {

struct Token {
    std::vector<std::string> aliases;
    bool present = false;
    bool declared = false, declared_absent = false;
    address_runtime::FieldBinding declaration{};
    // Comparator identity is part of the producer: unrelated boolean APIs
    // cannot manufacture agreement merely by loading the same integer.
    std::map<uint32_t, std::map<uint32_t, std::set<uint32_t>>> votes;
    uint32_t index = 0;
    bool resolved = false;
};
struct Array {
    uint32_t object = 0, offset = 0, stride = 0;
    std::vector<Token> tokens;
};
class Reader {
    const std::vector<unsigned char> &data_;
    size_t at_ = 0;
public:
    explicit Reader(const std::vector<unsigned char> &data) : data_(data) {}
    uint32_t number() {
        if (data_.size() - at_ < 4) throw std::runtime_error("Truncated graphics token metadata");
        uint32_t value; std::memcpy(&value, data_.data() + at_, 4); at_ += 4; return value;
    }
    uint32_t count(uint32_t maximum) {
        const auto value = number();
        if (value > maximum) throw std::runtime_error("Invalid graphics token metadata count");
        return value;
    }
    std::string string() {
        const auto length = count(4096);
        if (!length || length > data_.size() - at_)
            throw std::runtime_error("Invalid graphics token name");
        std::string result(reinterpret_cast<const char *>(data_.data() + at_), length);
        at_ += length;
        if (result.find('\0') != std::string::npos)
            throw std::runtime_error("Embedded terminator in graphics token name");
        return result;
    }
    void finish() const {
        if (at_ != data_.size()) throw std::runtime_error("Unexpected graphics token metadata suffix");
    }
};

inline std::vector<Array> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    Reader reader(blob);
    const auto version = reader.number();
    if (version != 1 && version != 2)
        throw std::runtime_error("Unsupported graphics token metadata schema");
    std::vector<Array> arrays(reader.count(128));
    std::vector<std::pair<uint32_t, uint32_t>> extents;
    for (auto &array : arrays) {
        array.object = reader.number(); array.offset = reader.number(); array.stride = reader.number();
        array.tokens.resize(reader.count(65536));
        const uint64_t begin = uint64_t(array.object) + array.offset;
        const uint64_t end = begin + uint64_t(array.stride) * array.tokens.size();
        if (!array.object || !array.stride || array.stride > 4096 || array.tokens.empty() || end > UINT32_MAX)
            throw std::runtime_error("Invalid graphics token array extent");
        extents.emplace_back(static_cast<uint32_t>(begin), static_cast<uint32_t>(end));
        for (auto &token : array.tokens) {
            const auto aliases = version == 1 ? 1u : reader.count(16);
            if (!aliases) throw std::runtime_error("Graphics token has no lexical identity");
            std::set<std::string> unique;
            for (uint32_t index = 0; index < aliases; ++index) {
                auto alias = reader.string();
                if (!unique.insert(alias).second) throw std::runtime_error("Duplicate graphics token alias");
                token.aliases.push_back(std::move(alias));
            }
        }
    }
    std::sort(extents.begin(), extents.end());
    for (size_t index = 1; index < extents.size(); ++index)
        if (extents[index].first < extents[index - 1].second)
            throw std::runtime_error("Overlapping graphics token arrays");
    reader.finish();
    return arrays;
}

inline uint32_t number(const unsigned char *bytes) {
    uint32_t value; std::memcpy(&value, bytes, 4); return value;
}
inline int32_t displacement(const unsigned char *bytes) {
    int32_t value; std::memcpy(&value, bytes, 4); return value;
}
struct Comparison { uint32_t token = 0, comparator = 0, index = 0; size_t length = 0; };

// These complete MSVC producer sequences carry the token through RDX, the
// same stack string through RCX, and the comparator result through AL/EAX to
// the conditional enum assignment. No nearby immediate is treated as an ID.
template <typename Image>
inline bool comparison(const Image &image, const unsigned char *bytes, size_t size,
                       uint32_t address, Comparison &result) {
    if (size < 27 || bytes[0] != 0x48 || bytes[1] != 0x8d || bytes[2] != 0x15) return false;
    const int64_t token = int64_t(address) + 7 + displacement(bytes + 3);
    if (token <= 0 || token >= image.size) return false;
    size_t at = 7;
    int64_t string_stack = 0;
    if (size >= at + 5 && !std::memcmp(bytes + at, "\x48\x8d\x4c\x24", 4)) {
        string_stack = static_cast<int8_t>(bytes[at + 4]); at += 5;
    } else if (size >= at + 8 && !std::memcmp(bytes + at, "\x48\x8d\x8c\x24", 4)) {
        string_stack = displacement(bytes + at + 4); at += 8;
    } else return false;
    if (size < at + 5 || bytes[at] != 0xe8) return false;
    const int64_t comparator = int64_t(address) + at + 5 + displacement(bytes + at + 1);
    if (comparator <= 0 || comparator >= image.size) return false;
    const auto *code = image.section(static_cast<uint32_t>(comparator));
    if (!code || !(code->flags & Image::execute_flag)) return false;
    at += 5;
    uint32_t index = 0;
    if (size >= at + 10 && bytes[at] == 0xb9 &&
            !std::memcmp(bytes + at + 5, "\x84\xc0\x0f\x45\xd9", 5)) {
        index = number(bytes + at + 1); at += 10;
    } else {
        if (size < at + 7 || std::memcmp(bytes + at, "\x0f\xb6\xc0\x85\xc0\x74", 6))
            return false;
        const auto skipped = bytes[at + 6]; at += 7;
        int64_t enum_stack = 0;
        if (skipped == 8 && size >= at + 8 && !std::memcmp(bytes + at, "\xc7\x44\x24", 3)) {
            enum_stack = static_cast<int8_t>(bytes[at + 3]);
            index = number(bytes + at + 4); at += 8;
        } else if (skipped == 11 && size >= at + 11 && !std::memcmp(bytes + at, "\xc7\x84\x24", 3)) {
            enum_stack = displacement(bytes + at + 3);
            index = number(bytes + at + 7); at += 11;
        } else return false;
        // The result cannot overwrite the live MSVC string passed to the
        // comparator. Both stack displacements belong to this same sequence.
        if (enum_stack < string_stack + 32 && string_stack < enum_stack + 4) return false;
    }
    if (index >= 65536) return false;
    result = {static_cast<uint32_t>(token), static_cast<uint32_t>(comparator), index, at};
    return true;
}

template <typename Image>
inline void collect(const Image &image, std::vector<Array> &arrays) {
    struct Alias { Token *token; const std::string *name; };
    std::vector<Alias> aliases, short_aliases;
    std::unordered_map<uint64_t, std::vector<size_t>> prefixes;
    for (auto &array : arrays) for (auto &token : array.tokens) {
        if (token.declared || token.declared_absent) continue;
        for (const auto &name : token.aliases) {
        if (name.size() < 8) { short_aliases.push_back({&token, &name}); continue; }
        uint64_t prefix; std::memcpy(&prefix, name.data(), sizeof(prefix));
        prefixes[prefix].push_back(aliases.size()); aliases.push_back({&token, &name});
        }
    }
    if (aliases.empty() && short_aliases.empty()) return;
    std::unordered_map<uint32_t, std::vector<Token *>> locations;
    const auto found = [&](size_t offset, const Alias &alias) {
        const auto &name = *alias.name;
        if (offset >= image.file.size() || name.size() >= image.file.size() - offset ||
                std::memcmp(image.file.data() + offset, name.data(), name.size()) ||
                image.file[offset + name.size()]) return;
        alias.token->present = true;
        // Existence is established over the complete PE, including unmapped
        // overlay data. Only a file-backed RVA can receive code-xref evidence.
        for (const auto &section : image.sections) {
            if (offset < section.raw || offset - section.raw >= section.raw_size ||
                    name.size() + 1 > section.raw_size - (offset - section.raw)) continue;
            const auto address = section.begin + static_cast<uint32_t>(offset - section.raw);
            auto &tokens = locations[address];
            if (std::find(tokens.begin(), tokens.end(), alias.token) == tokens.end()) tokens.push_back(alias.token);
            break;
        }
    };
    for (size_t at = 0; at + 8 <= image.file.size(); ++at) {
        uint64_t prefix; std::memcpy(&prefix, image.file.data() + at, sizeof(prefix));
        const auto hit = prefixes.find(prefix);
        if (hit != prefixes.end()) for (const auto index : hit->second) found(at, aliases[index]);
    }
    for (const auto &alias : short_aliases) {
        const auto &name = *alias.name;
        auto at = image.file.begin();
        while ((at = std::search(at, image.file.end(), name.begin(), name.end())) != image.file.end()) {
            found(static_cast<size_t>(at - image.file.begin()), alias); ++at;
        }
    }
    for (const auto &function : image.functions) {
        const auto size = function.end - function.begin;
        const auto *bytes = image.read(function.begin, size);
        if (!bytes) continue;
        for (size_t at = 0; at + 27 <= size; ++at) {
            if (bytes[at] != 0x48 || bytes[at + 1] != 0x8d || bytes[at + 2] != 0x15) continue;
            Comparison value;
            if (!comparison(image, bytes + at, size - at, function.begin + static_cast<uint32_t>(at), value)) continue;
            const auto tokens = locations.find(value.token);
            if (tokens != locations.end()) for (auto *token : tokens->second)
                token->votes[value.index][value.comparator].insert(function.begin);
            at += value.length - 1;
        }
    }
    for (auto &array : arrays) for (auto &token : array.tokens) {
        if (token.votes.size() != 1) continue;
        const auto &[index, comparators] = *token.votes.begin();
        for (const auto &[comparator, owners] : comparators) if (owners.size() >= 2) {
            token.index = index; token.resolved = true; break;
        }
    }
}
} // namespace graphics_discovery_detail

template <typename Image>
inline void discover_graphics_tokens(const Image &image, const std::vector<unsigned char> &blob,
                                     address_runtime::State &state) {
    using namespace graphics_discovery_detail;
    auto arrays = read(blob);
    if (arrays.empty()) return;
    // An exact image-identity layout provider has already matched canonical
    // member paths and enum names. Retain that independent declaration proof;
    // the parser producer is needed only for images without those bindings.
    const std::set<uint64_t> absent(state.absent_fields.begin(), state.absent_fields.end());
    for (auto &array : arrays) {
        const uint64_t end = uint64_t(array.offset) + uint64_t(array.stride) * array.tokens.size();
        for (const auto &field : state.fields) {
            if (field.sources != UINT32_MAX || field.object != array.object ||
                    field.offset < array.offset || field.offset >= end) continue;
            if ((field.offset - array.offset) % array.stride || field.width != array.stride || field.flags != 4)
                throw std::runtime_error("Declared graphics enum element has an incompatible extent");
            auto &token = array.tokens[(field.offset - array.offset) / array.stride];
            if (token.declared) throw std::runtime_error("Duplicated declared graphics enum element");
            token.declared = true; token.declaration = field;
        }
        for (uint32_t index = 0; index < array.tokens.size(); ++index) {
            auto &token = array.tokens[index];
            token.declared_absent = absent.contains((uint64_t(array.object) << 32) |
                (array.offset + index * array.stride));
            if (token.declared && token.declared_absent)
                throw std::runtime_error("Absent graphics enum element acquired a declared binding");
        }
    }
    collect(image, arrays);
    for (const auto &array : arrays) {
        const uint64_t end = uint64_t(array.offset) + uint64_t(array.stride) * array.tokens.size();
        std::map<uint32_t, std::set<uint32_t>> bases;
        for (const auto &field : state.fields) {
            if (field.object != array.object || field.offset < array.offset || field.offset >= end ||
                    field.sources < 2 || !field.width) continue;
            const auto index = (field.offset - array.offset) / array.stride;
            const auto delta = (field.offset - array.offset) % array.stride;
            const auto &token = array.tokens[index];
            if (!token.resolved || field.width > array.stride - delta) continue;
            const uint64_t displacement = uint64_t(token.index) * array.stride + delta;
            if (field.native_offset < displacement) continue;
            bases[field.native_offset - static_cast<uint32_t>(displacement)].insert(index);
        }
        // The copied layout never inherits an enum's old ordinal. Independent
        // element references must establish the same actual array origin.
        const bool confirmed = bases.size() == 1 && bases.begin()->second.size() >= 2;
        const uint32_t base = confirmed ? bases.begin()->first : 0;
        const auto object = address_runtime::resolve(state.ranges, array.object);
        std::erase_if(state.fields, [&](const auto &field) {
            return field.object == array.object && field.offset < end &&
                uint64_t(field.offset) + field.width > array.offset;
        });
        std::erase_if(state.missing_graphics_tokens, [&](uint64_t key) {
            return static_cast<uint32_t>(key >> 32) == array.object &&
                static_cast<uint32_t>(key) >= array.offset && static_cast<uint32_t>(key) < end;
        });
        for (uint32_t index = 0; index < array.tokens.size(); ++index) {
            const auto &token = array.tokens[index];
            const auto offset = array.offset + index * array.stride;
            if (token.declared_absent) continue;
            if (token.declared) {
                const uint64_t address = uint64_t(object) + token.declaration.native_offset;
                const auto *section = object && address + array.stride <= image.size
                    ? image.section(static_cast<uint32_t>(address), array.stride) : nullptr;
                if (section && (section->flags & Image::write_flag)) state.fields.push_back(token.declaration);
                else state.missing_graphics_tokens.push_back((uint64_t(array.object) << 32) | offset);
                continue;
            }
            if (!token.present) continue;
            const uint64_t native_offset = uint64_t(base) + uint64_t(token.index) * array.stride;
            const uint64_t address = uint64_t(object) + native_offset;
            const auto *section = object && address + array.stride <= image.size
                ? image.section(static_cast<uint32_t>(address), array.stride) : nullptr;
            if (!token.resolved || !confirmed || !section || !(section->flags & Image::write_flag)) {
                state.missing_graphics_tokens.push_back((uint64_t(array.object) << 32) | offset);
                continue;
            }
            state.fields.push_back({array.object, offset, static_cast<uint32_t>(native_offset),
                array.stride, 2, 4});
        }
    }
    std::sort(state.missing_graphics_tokens.begin(), state.missing_graphics_tokens.end());
    state.missing_graphics_tokens.erase(std::unique(state.missing_graphics_tokens.begin(),
        state.missing_graphics_tokens.end()), state.missing_graphics_tokens.end());
    if (!state.missing_graphics_tokens.empty()) state.complete = false;
}
} // namespace dfcn::pe_runtime
