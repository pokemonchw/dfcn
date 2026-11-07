#pragma once

#include "native_history_abi.h"
#include "native_address_scan.h"
#include "native_enum_discovery.h"
#include "native_type_extent_discovery.h"
#include <array>
#include <cstring>
#include <map>
#include <set>

namespace dfcn::native_history_abi {

struct Discovery {
    std::vector<FieldBinding> fields;
    std::vector<MethodBinding> methods;
    std::vector<TypeBinding> types;
    std::vector<EnumBinding> enums;
    std::vector<uint64_t> missing_fields, missing_methods;
    std::vector<uint64_t> unresolved_fields, unresolved_methods;
    std::vector<std::string> diagnostics;
};

namespace discovery_detail {
struct Field { uint32_t member, offset, size, child_type, flags; std::string name; };
struct Method { uint32_t method, slot, shape, arguments, function, flags; };
struct Type {
    uint32_t type, parent, table, flags;
    std::string name;
    std::vector<Field> fields;
    std::vector<Method> methods;
};
struct Operand {
    uint32_t type, member, end, delta, width, displacement, displacement_width, flags;
};
struct Function {
    uint32_t owner;
    std::vector<unsigned char> raw, mask;
    std::vector<Operand> operands;
};

inline bool nested_member_paths(std::string_view left, std::string_view right) {
    const auto contains = [](std::string_view parent, std::string_view child) {
        return child.size() > parent.size() && child.starts_with(parent) && child[parent.size()] == '.';
    };
    return left == right || contains(left, right) || contains(right, left);
}

inline bool unambiguous_member_operand(const Type &type, const Operand &operand) {
    const auto selected = std::find_if(type.fields.begin(), type.fields.end(), [&](const auto &field) {
        return field.member == operand.member;
    });
    if (selected == type.fields.end()) return false;
    const uint64_t begin = uint64_t(selected->offset) + operand.delta;
    const uint64_t end = begin + operand.width;
    std::vector<const Field *> candidates;
    for (const auto &field : type.fields) {
        if (field.offset > begin || uint64_t(field.offset) + field.size < end) continue;
        // A zero-width operand is LEA: it names a beginning, not the empty
        // range at the end of the preceding member.
        if (!operand.width && field.offset != begin) continue;
        candidates.push_back(&field);
    }
    for (size_t index = 0; index < candidates.size(); ++index)
        for (size_t other = index + 1; other < candidates.size(); ++other)
            if (!nested_member_paths(candidates[index]->name, candidates[other]->name)) return false;
    return true;
}

// A displacement into a union proves a physical range, not the active named
// alternative. Keep that evidence separate until the target declarations have
// independently confirmed that the same aliases still share one range.
inline std::vector<const Field *> shared_member_storage(const Type &type, const Operand &operand) {
    const auto selected = std::find_if(type.fields.begin(), type.fields.end(), [&](const auto &field) {
        return field.member == operand.member;
    });
    if (selected == type.fields.end() || !operand.width) return {};
    const uint64_t begin = uint64_t(selected->offset) + operand.delta;
    const uint64_t end = begin + operand.width;
    std::vector<const Field *> candidates, leaves;
    for (const auto &field : type.fields)
        if (field.offset <= begin && uint64_t(field.offset) + field.size >= end) candidates.push_back(&field);
    for (const auto *field : candidates) {
        const bool parent = std::any_of(candidates.begin(), candidates.end(), [&](const auto *other) {
            return other->name.size() > field->name.size() && other->name.starts_with(field->name) &&
                other->name[field->name.size()] == '.';
        });
        if (!parent) leaves.push_back(field);
    }
    if (leaves.size() < 2 || std::any_of(leaves.begin(), leaves.end(), [&](const auto *field) {
            return field->offset != selected->offset || field->size != selected->size;
        })) return {};
    return leaves;
}
struct Root { uint32_t reference, target, kind; std::string name; };
struct TargetType {
    uint32_t type, table, size, alignment;
    std::vector<FieldBinding> fields;
    std::vector<MethodBinding> methods;
};
struct Profile {
    std::array<unsigned char, 32> digest;
    uint32_t timestamp, size;
    std::string source, revision;
    std::vector<Root> roots;
    std::vector<address_runtime::FieldBinding> fields;
    std::vector<uint64_t> absent_fields;
    std::vector<TargetType> types;
    std::vector<EnumBinding> enums;
};
struct Enum { uint32_t type, token, value, flags; };
struct Evidence {
    std::vector<Type> types;
    std::vector<Enum> enums;
    std::vector<Function> functions;
    std::vector<Profile> profiles;
    std::vector<unsigned char> type_extents, enum_code;
};

class Reader {
    const std::vector<unsigned char> &data_;
    size_t cursor_ = 0;
public:
    explicit Reader(const std::vector<unsigned char> &data) : data_(data) {}
    void take(void *value, size_t length) {
        if (length > data_.size() - cursor_) throw std::runtime_error("Truncated semantic ABI evidence");
        if (length) std::memcpy(value, data_.data() + cursor_, length);
        cursor_ += length;
    }
    uint32_t number() { uint32_t value; take(&value, sizeof(value)); return value; }
    uint32_t count(uint32_t maximum = 1000000) {
        const auto value = number();
        if (value > maximum) throw std::runtime_error("Invalid semantic ABI evidence count");
        return value;
    }
    std::vector<unsigned char> blob(uint32_t maximum = 16 * 1024 * 1024) {
        std::vector<unsigned char> value(count(maximum));
        take(value.data(), value.size()); return value;
    }
    std::string string() { const auto value = blob(4096); return {value.begin(), value.end()}; }
    void finish() {
        if (cursor_ != data_.size()) throw std::runtime_error("Unexpected semantic ABI evidence suffix");
    }
};

inline Evidence read(const std::vector<unsigned char> &blob) {
    Evidence result;
    if (blob.empty()) return result;
    Reader reader(blob);
    char magic[8]; reader.take(magic, sizeof(magic));
    if (std::memcmp(magic, "DFCNHA01", sizeof(magic)) || reader.number() != 8)
        throw std::runtime_error("Unsupported semantic ABI evidence schema");
    result.types.resize(reader.count(100000));
    std::map<uint32_t, std::set<uint32_t>> fields;
    for (auto &type : result.types) {
        type.type = reader.number(); type.parent = reader.number(); type.table = reader.number();
        type.flags = reader.number();
        type.name = reader.string();
        if (!type.type || type.name.empty() || type.flags > 1 || !fields.emplace(type.type, std::set<uint32_t>{}).second)
            throw std::runtime_error("Invalid semantic native type");
        type.fields.resize(reader.count());
        for (auto &field : type.fields) {
            field = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.string()};
            if (!field.member || !field.size || (field.flags & ~3u) || field.name.empty() || uint64_t(field.offset) + field.size > UINT32_MAX ||
                    !fields[type.type].insert(field.member).second)
                throw std::runtime_error("Invalid semantic native member");
        }
        type.methods.resize(reader.count(4096));
        std::set<uint32_t> methods;
        for (auto &method : type.methods) {
            method = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if (!method.method || !method.shape || method.slot % 8 || method.slot > 65536 ||
                    method.arguments > 32 || (method.flags & ~3u) || !methods.insert(method.method).second)
                throw std::runtime_error("Invalid semantic native method");
        }
    }
    std::set<uint64_t> enum_keys;
    for (uint32_t remaining = reader.count(100000); remaining; --remaining) {
        const auto type = reader.number();
        if (!type) throw std::runtime_error("Invalid semantic native enum type");
        for (uint32_t members = reader.count(); members; --members) {
            Enum item{type, reader.number(), reader.number(), reader.number()};
            if (!item.token || item.flags > 1 || !enum_keys.insert(key(type, item.token)).second)
                throw std::runtime_error("Invalid semantic native enum token");
            result.enums.push_back(item);
        }
    }
    result.functions.resize(reader.count(100000));
    std::set<uint32_t> owners;
    for (auto &function : result.functions) {
        function.owner = reader.number(); function.raw = reader.blob(); function.mask = reader.blob();
        if (!function.owner || function.raw.empty() || function.raw.size() != function.mask.size() ||
                uint64_t(function.owner) + function.raw.size() > UINT32_MAX || !owners.insert(function.owner).second)
            throw std::runtime_error("Invalid semantic reference function");
        for (const auto byte : function.mask)
            if (byte > 1) throw std::runtime_error("Invalid semantic instruction mask");
        function.operands.resize(reader.count());
        for (auto &operand : function.operands) {
            operand = {reader.number(), reader.number(), reader.number(), reader.number(),
                reader.number(), reader.number(), reader.number(), reader.number()};
            const auto owner = fields.find(operand.type);
            if (owner == fields.end() || !owner->second.count(operand.member) || operand.flags > 1 ||
                    !operand.end || operand.end > function.raw.size() ||
                    (operand.displacement_width != 0 && operand.displacement_width != 1 && operand.displacement_width != 4) ||
                    uint64_t(operand.displacement) + operand.displacement_width > operand.end)
                throw std::runtime_error("Invalid typed member operand");
            for (uint32_t at = 0; at < operand.displacement_width; ++at)
                if (!function.mask[operand.displacement + at])
                    throw std::runtime_error("Unmasked typed member operand");
        }
    }
    result.profiles.resize(reader.count(1000));
    for (auto &profile : result.profiles) {
        reader.take(profile.digest.data(), profile.digest.size());
        profile.timestamp = reader.number(); profile.size = reader.number();
        profile.source = reader.string(); profile.revision = reader.string();
        if (!profile.size || profile.source.empty() || profile.revision.empty())
            throw std::runtime_error("Invalid image-owned ABI identity");
        profile.roots.resize(reader.count());
        for (auto &root : profile.roots) {
            root = {reader.number(), reader.number(), reader.number(), reader.string()};
            if (!root.reference || !root.target || root.target >= profile.size || root.kind > 1 || root.name.empty())
                throw std::runtime_error("Invalid image-owned ABI root");
        }
        profile.fields.resize(reader.count());
        for (auto &field : profile.fields) {
            field = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if (!field.object || !field.width || field.sources != UINT32_MAX ||
                    uint64_t(field.offset) + field.width > UINT32_MAX || uint64_t(field.native_offset) + field.width > UINT32_MAX)
                throw std::runtime_error("Invalid image-owned global member");
        }
        profile.absent_fields.resize(reader.count());
        for (auto &field : profile.absent_fields) {
            const auto object = reader.number(), offset = reader.number();
            field = key(object, offset);
            if (!object) throw std::runtime_error("Invalid image-owned absent member");
        }
        profile.types.resize(reader.count(100000));
        std::set<uint32_t> unique_types;
        for (auto &type : profile.types) {
            type.type = reader.number(); type.table = reader.number();
            type.size = reader.number(); type.alignment = reader.number();
            if (!fields.count(type.type) || !unique_types.insert(type.type).second || !type.size ||
                    type.alignment > 4096 || (type.alignment & (type.alignment - 1)))
                throw std::runtime_error("Invalid image-owned type layout");
            type.fields.resize(reader.count());
            std::set<uint32_t> unique_fields, unique_methods;
            for (auto &field : type.fields) {
                field = {type.type, reader.number(), reader.number(), reader.number()};
                if (!fields[type.type].count(field.member) || !unique_fields.insert(field.member).second ||
                        !field.size || uint64_t(field.offset) + field.size > type.size)
                    throw std::runtime_error("Invalid image-owned typed member");
            }
            type.methods.resize(reader.count(4096));
            for (auto &method : type.methods) {
                method = {type.type, reader.number(), reader.number(), reader.number(), reader.number()};
                if (!method.method || !unique_methods.insert(method.method).second || method.slot % 8 ||
                        method.slot > 65536 || !method.parameter_shape || method.argument_count > 32)
                    throw std::runtime_error("Invalid image-owned method contract");
            }
        }
        profile.enums.resize(reader.count());
        std::set<uint64_t> unique_enums;
        for (auto &entry : profile.enums) {
            entry.type = reader.number(); entry.token = reader.number();
            const auto value = reader.number();
            std::memcpy(&entry.value, &value, sizeof(value));
            const auto identity = key(entry.type, entry.token);
            if (!enum_keys.count(identity) || !unique_enums.insert(identity).second)
                throw std::runtime_error("Invalid image-owned enum contract");
        }
    }
    result.type_extents = reader.blob();
    result.enum_code = reader.blob();
    reader.finish();
    return result;
}

inline std::string decorated_name(const std::string &name) {
    std::vector<std::string> parts;
    size_t begin = 0, end;
    while ((end = name.find("::", begin)) != std::string::npos) {
        parts.push_back(name.substr(begin, end - begin)); begin = end + 2;
    }
    parts.push_back(name.substr(begin));
    std::string result;
    for (auto part = parts.rbegin(); part != parts.rend(); ++part) {
        if (!result.empty()) result += '@';
        result += *part;
    }
    return result;
}

template<typename Image>
inline const Profile *profile_for(const Image &image, const Evidence &evidence) {
    const Profile *result = nullptr;
    for (const auto &profile : evidence.profiles) {
        if (profile.digest != image.digest || profile.timestamp != image.timestamp || profile.size != image.size) continue;
        if (result) throw std::runtime_error("Ambiguous image-owned ABI declarations");
        for (const auto &root : profile.roots) {
            if (!image.section(root.target)) throw std::runtime_error("Image-owned ABI root is outside image");
            if (!root.kind) continue;
            const auto decorated = decorated_name(root.name);
            auto candidates = image.find_vtables(".?AV" + decorated + "@@");
            const auto structs = image.find_vtables(".?AU" + decorated + "@@");
            candidates.insert(candidates.end(), structs.begin(), structs.end());
            if (std::find(candidates.begin(), candidates.end(), root.target) == candidates.end())
                throw std::runtime_error("Image-owned ABI RTTI differs: " + root.name);
        }
        result = &profile;
    }
    return result;
}

template<typename Image>
inline uint32_t method_function(const Image &image, uint32_t table, uint32_t slot) {
    if (!table || uint64_t(table) + slot + 8 > image.size) return 0;
    const auto *pointer = image.read(table + slot, 8);
    if (!pointer) return 0;
    uint64_t absolute; std::memcpy(&absolute, pointer, sizeof(absolute));
    if (absolute < image.preferred_base || absolute - image.preferred_base >= image.size) return 0;
    const auto address = static_cast<uint32_t>(absolute - image.preferred_base);
    const auto *section = image.section(address);
    return section && (section->flags & Image::execute_flag) ? address : 0;
}

inline int64_t displacement(const unsigned char *bytes, uint32_t width) {
    if (!width) return 0;
    if (width == 1) return static_cast<int8_t>(*bytes);
    int32_t value; std::memcpy(&value, bytes, sizeof(value)); return value;
}
struct Vote {
    std::set<uint32_t> owners;
    std::vector<std::pair<uint32_t, uint32_t>> coverage;
    std::map<uint32_t, std::vector<std::pair<uint32_t, uint32_t>>> owner_coverage;
};
inline bool covers(Vote &vote, uint32_t length) {
    std::sort(vote.coverage.begin(), vote.coverage.end());
    uint32_t end = 0;
    for (const auto &[first, last] : vote.coverage) {
        if (first > end) return false;
        end = (std::max)(end, last);
        if (end >= length) return true;
    }
    return false;
}
} // namespace discovery_detail

// Exact image-owned declarations seed roots and measured member ranges before
// instruction discovery. The executable digest is checked again at runtime;
// a release label is never sufficient to activate these declarations.
template<typename Image>
inline address_runtime::InitialEvidence target_layout(const Image &image,
        const std::vector<unsigned char> &blob) {
    using namespace discovery_detail;
    address_runtime::InitialEvidence result;
    const auto evidence = read(blob);
    const auto *profile = profile_for(image, evidence);
    if (!profile) return result;
    for (const auto &root : profile->roots)
        result.roots.push_back({root.reference, root.reference + 1, root.target});
    result.fields = profile->fields;
    result.absent_fields = profile->absent_fields;
    std::map<uint32_t, const Type *> sources;
    for (const auto &type : evidence.types) sources.emplace(type.type, &type);
    std::map<uint32_t, uint32_t> owners;
    std::set<uint32_t> ambiguous_owners;
    std::map<uint32_t, uint32_t> certified_entries;
    std::set<uint32_t> uncertified_entries;
    for (const auto &type : profile->types) {
        const auto source = sources.find(type.type);
        if (source == sources.end()) continue;
        bool same_slots = type.table && source->second->table &&
            type.methods.size() == source->second->methods.size();
        uint32_t extent = 0;
        for (const auto &method : source->second->methods) {
            const auto target = std::find_if(type.methods.begin(), type.methods.end(), [&](const auto &value) {
                return value.method == method.method;
            });
            if (target == type.methods.end()) {
                same_slots = false;
                if (method.function) uncertified_entries.insert(method.function);
                continue;
            }
            const auto function = method_function(image, type.table, target->slot);
            if (type.table && !function) throw std::runtime_error("Image-owned method slot is not executable");
            same_slots &= target->slot == method.slot && target->parameter_shape == method.shape &&
                target->argument_count == method.arguments;
            extent = (std::max)(extent, method.slot + 8);
            if (method.function) {
                if (!function || target->parameter_shape != method.shape || target->argument_count != method.arguments)
                    uncertified_entries.insert(method.function);
                else {
                    const auto [entry, inserted] = certified_entries.emplace(method.function, function);
                    if (!inserted && entry->second != function) uncertified_entries.insert(method.function);
                }
            }
            if (!method.function || !function) continue;
            const auto unwind = std::lower_bound(image.functions.begin(), image.functions.end(), function,
                [](const auto &value, uint32_t address) { return value.begin < address; });
            if (unwind == image.functions.end() || unwind->begin != function) continue;
            const auto [found, inserted] = owners.emplace(method.function, function);
            if (!inserted && found->second != function) ambiguous_owners.insert(method.function);
        }
        if (same_slots && extent)
            result.virtual_tables.push_back({source->second->table, source->second->table + extent, type.table});
    }
    for (const auto &[reference, native] : owners)
        if (!ambiguous_owners.count(reference)) result.function_owners.push_back({reference, reference + 1, native});
    // Exact declarations certify this method entry and calling convention,
    // never its body layout. Shared source implementations must agree across
    // every declared method before even this one-byte entry is published.
    for (const auto &[reference, native] : certified_entries)
        if (!uncertified_entries.count(reference) && !ambiguous_owners.count(reference))
            result.roots.push_back({reference, reference + 1, native});
    return result;
}

// The source has already proved register provenance with an intersected CFG.
// A target prefix must retain every opcode, register and relative branch up to
// the member use. Only declared relocation/field operands may change. This is
// intentionally stricter than using a familiar displacement in a similar body.
template<typename Image, typename AddressState>
inline Discovery discover(const Image &image, const AddressState &state,
                          const std::vector<unsigned char> &blob) {
    using namespace discovery_detail;
    if (blob.empty()) throw std::runtime_error("Missing semantic native ABI discovery evidence");
    const auto evidence = read(blob);
    Discovery result;
    const auto *profile = profile_for(image, evidence);
    std::map<uint64_t, std::map<uint32_t, Vote>> votes, certified_votes, storage_votes;
    std::map<uint32_t, uint32_t> complete_functions, resolved_owners;
    std::map<uint32_t, const Type *> types;
    std::map<uint32_t, const TargetType *> target_types;
    for (const auto &type : evidence.types) types.emplace(type.type, &type);
    if (profile) for (const auto &type : profile->types) target_types.emplace(type.type, &type);
    const auto absent = [&](const Type &type) {
        return type.table && std::binary_search(state.absent_types.begin(), state.absent_types.end(), type.table);
    };
    const auto certified_owner = [&](const Type &type, uint32_t reference, uint32_t target) {
        const auto declared = target_types.find(type.type);
        if (declared == target_types.end()) return false;
        for (const auto &method : type.methods) {
            if (method.function != reference) continue;
            for (const auto &actual : declared->second->methods)
                if (actual.method == method.method && actual.parameter_shape == method.shape &&
                        actual.argument_count == method.arguments &&
                        method_function(image, declared->second->table, actual.slot) == target) return true;
        }
        return false;
    };
    const auto independently_covers = [&](const Vote &vote, uint32_t width) {
        std::set<uint32_t> target_functions;
        for (const auto &[owner, ranges] : vote.owner_coverage) {
            Vote individual;
            individual.coverage = ranges;
            const auto target = resolved_owners.find(owner);
            if (target != resolved_owners.end() && covers(individual, width)) target_functions.insert(target->second);
        }
        return target_functions.size() >= 2;
    };
    for (const auto &function : evidence.functions) {
        uint32_t target = address_runtime::resolve(state.function_owners, function.owner);
        if (!target) target = address_runtime::resolve(state.ranges, function.owner);
        if (!target) continue;
        const auto owner = std::lower_bound(image.functions.begin(), image.functions.end(), target,
            [](const auto &value, uint32_t address) { return value.begin < address; });
        if (owner == image.functions.end() || owner->begin != target) continue;
        const size_t length = (std::min)(function.raw.size(), size_t(owner->end - owner->begin));
        const auto *bytes = image.read(target, length);
        if (!bytes) continue;
        resolved_owners.emplace(function.owner, target);
        size_t prefix = 0;
        while (prefix < length && (function.mask[prefix] || bytes[prefix] == function.raw[prefix])) ++prefix;
        if (prefix == function.raw.size() && prefix == owner->end - owner->begin)
            complete_functions.emplace(function.owner, target);
        for (const auto &operand : function.operands) {
            if (operand.end > prefix) continue;
            const auto type = types.find(operand.type);
            if (type == types.end()) continue;
            const auto field = std::find_if(type->second->fields.begin(), type->second->fields.end(),
                [&](const auto &value) { return value.member == operand.member; });
            if (field == type->second->fields.end() || operand.delta > field->size ||
                    operand.width > field->size - operand.delta) continue;
            // Older seed sections attached every overlapping union name to
            // one machine operand. Multiple owners repeat the same ambiguous
            // physical access; they do not prove an active union alternative.
            if (operand.flags ? shared_member_storage(*type->second, operand).empty() :
                    !unambiguous_member_operand(*type->second, operand)) continue;
            // Check source annotation too; corrupt metadata must not invent an
            // address even when its bytes happen to match an installed image.
            const int64_t reference = displacement(function.raw.data() + operand.displacement,
                operand.displacement_width) - operand.delta;
            const int64_t actual = displacement(bytes + operand.displacement,
                operand.displacement_width) - operand.delta;
            if (reference != field->offset || actual < 0 || uint64_t(actual) + field->size > UINT32_MAX)
                throw std::runtime_error("Inconsistent typed member displacement");
            const auto add_vote = [&](auto &collection) {
                auto &vote = collection[key(operand.type, operand.member)][static_cast<uint32_t>(actual)];
                vote.owners.insert(function.owner);
                vote.coverage.emplace_back(operand.delta, operand.delta + operand.width);
                vote.owner_coverage[function.owner].emplace_back(operand.delta, operand.delta + operand.width);
            };
            const bool certified = certified_owner(*type->second, function.owner, target);
            if (operand.flags) {
                if (certified) add_vote(storage_votes);
            } else {
                add_vote(votes);
                if (certified) add_vote(certified_votes);
            }
        }
    }
    std::map<uint64_t, FieldBinding> discovered_fields, certified_fields;
    for (const auto &type : evidence.types) {
        if (absent(type)) continue;
        for (const auto &field : type.fields) {
            const auto identity = key(type.type, field.member);
            const auto found = votes.find(identity);
            if (found == votes.end()) continue;
            if (found->second.size() != 1)
                throw std::runtime_error("Conflicting semantic native field: " + type.name + ":" + std::to_string(field.member));
            auto &[offset, vote] = *found->second.begin();
            if (vote.owners.size() < 2 || !covers(vote, field.size)) continue;
            discovered_fields.emplace(identity, FieldBinding{type.type, field.member, offset, field.size});
            const auto strong = certified_votes.find(identity);
            if (strong != certified_votes.end() && strong->second.size() == 1) {
                auto &[strong_offset, strong_vote] = *strong->second.begin();
                if (strong_offset == offset && independently_covers(strong_vote, field.size))
                    certified_fields.emplace(identity, FieldBinding{type.type, field.member, offset, field.size});
            }
        }
    }

    // Exact-image declarations may establish an alias relationship without
    // supplying its physical coordinate. The coordinate itself still needs
    // two different, ABI-identified virtual method bodies and full coverage.
    for (auto &[identity, offsets] : storage_votes) {
        const auto type = types.find(static_cast<uint32_t>(identity >> 32));
        if (type == types.end() || absent(*type->second)) continue;
        const auto declared = target_types.find(type->first);
        if (declared == target_types.end()) continue;
        const auto member = static_cast<uint32_t>(identity);
        const auto field = std::find_if(type->second->fields.begin(), type->second->fields.end(),
            [&](const auto &value) { return value.member == member; });
        if (field == type->second->fields.end()) continue;
        const Operand span{type->first, member, 0, 0, field->size, 0, 0, 1};
        const auto aliases = shared_member_storage(*type->second, span);
        if (aliases.empty()) continue;
        bool same_storage = true;
        uint32_t declared_offset = UINT32_MAX;
        for (const auto *alias : aliases) {
            const auto actual = std::find_if(declared->second->fields.begin(), declared->second->fields.end(),
                [&](const auto &value) { return value.member == alias->member; });
            if (actual == declared->second->fields.end() || actual->size != alias->size ||
                    (declared_offset != UINT32_MAX && actual->offset != declared_offset)) {
                same_storage = false; break;
            }
            declared_offset = actual->offset;
        }
        if (!same_storage) continue;
        if (offsets.size() != 1)
            throw std::runtime_error("Conflicting semantic union storage: " + type->second->name + "." + field->name);
        auto &[offset, vote] = *offsets.begin();
        if (!independently_covers(vote, field->size)) continue;
        for (const auto *alias : aliases) {
            const auto alias_key = key(type->first, alias->member);
            const FieldBinding binding{type->first, alias->member, offset, alias->size};
            for (auto *bindings : {&discovered_fields, &certified_fields}) {
                const auto [found, inserted] = bindings->emplace(alias_key, binding);
                if (!inserted && (found->second.offset != binding.offset || found->second.size != binding.size))
                    throw std::runtime_error("Conflicting named and shared semantic member: " + type->second->name + "." + alias->name);
            }
            certified_votes[alias_key] = offsets;
        }
    }

    // A contradicted declaration is invalid for the entire object. Do not
    // repair one leaf and continue using the same stale document for its
    // neighbours or allocation size. Only independently measured fields are
    // retained; missing required fields and type sizes remain hard failures.
    std::set<uint32_t> stale_types;
    if (profile) for (const auto &type : profile->types) for (const auto &field : type.fields) {
        const auto identity = key(type.type, field.member);
        const auto found = discovered_fields.find(identity);
        if (found == discovered_fields.end() || (found->second.offset == field.offset && found->second.size == field.size)) continue;
        const auto source = types.find(type.type);
        const Field *member = nullptr;
        if (source != types.end()) for (const auto &candidate : source->second->fields)
            if (candidate.member == field.member) { member = &candidate; break; }
        std::string detail = (source == types.end() ? std::to_string(type.type) : source->second->name) + "." +
            (member ? member->name : std::to_string(field.member)) +
            " reference=" + std::to_string(member ? member->offset : 0) +
            " declared=" + std::to_string(field.offset) + "/" + std::to_string(field.size) +
            " instruction=" + std::to_string(found->second.offset) + "/" + std::to_string(found->second.size);
        if (!certified_fields.count(identity))
            throw std::runtime_error("Image-owned member differs from instruction evidence: " + detail);
        const auto strong = certified_votes.find(identity);
        if (strong != certified_votes.end()) for (const auto owner : strong->second.begin()->second.owners)
            detail += " method=" + std::to_string(owner) + "->" + std::to_string(resolved_owners.at(owner));
        stale_types.insert(type.type);
        result.diagnostics.push_back("Discarded stale image-owned type layout: " + detail);
    }
    for (auto iterator = discovered_fields.begin(); iterator != discovered_fields.end();) {
        if (stale_types.count(iterator->second.type) && !certified_fields.count(iterator->first))
            iterator = discovered_fields.erase(iterator);
        else ++iterator;
    }
    // An embedded object has two independent contracts: where its address is
    // formed in the parent, and where its own members are accessed. Compose
    // those measured coordinates instead of carrying the reference compound's
    // size or applying its relocation to every following field.
    bool progress = true;
    while (progress) {
        progress = false;
        for (const auto &type : evidence.types) for (const auto &aggregate : type.fields) {
            if (absent(type) || stale_types.count(type.type)) continue;
            const auto child = types.find(aggregate.child_type);
            if (child == types.end()) continue;
            const auto located = votes.find(key(type.type, aggregate.member));
            if (located == votes.end() || located->second.size() != 1 ||
                    located->second.begin()->second.owners.size() < 2) continue;
            const auto base = located->second.begin()->first;
            uint32_t extent = 0;
            bool complete = true;
            for (const auto &member : child->second->fields) {
                const auto binding = discovered_fields.find(key(child->first, member.member));
                if (binding == discovered_fields.end()) { complete = false; continue; }
                if (uint64_t(base) + binding->second.offset + binding->second.size > UINT32_MAX)
                    throw std::runtime_error("Embedded semantic field address overflow");
                extent = (std::max)(extent, binding->second.offset + binding->second.size);
                const auto name = aggregate.name + "." + member.name;
                const auto flattened = std::find_if(type.fields.begin(), type.fields.end(), [&](const auto &field) {
                    return field.name == name && uint64_t(aggregate.offset) + member.offset == field.offset;
                });
                if (flattened == type.fields.end()) continue;
                const FieldBinding value{type.type, flattened->member,
                    base + binding->second.offset, binding->second.size};
                const auto [found, inserted] = discovered_fields.emplace(key(type.type, flattened->member), value);
                if (!inserted && (found->second.offset != value.offset || found->second.size != value.size))
                    throw std::runtime_error("Conflicting embedded semantic field");
                progress |= inserted;
            }
            if (complete && extent) {
                const FieldBinding value{type.type, aggregate.member, base, extent};
                const auto [found, inserted] = discovered_fields.emplace(key(type.type, aggregate.member), value);
                if (!inserted && (found->second.offset != value.offset || found->second.size < value.size))
                    throw std::runtime_error("Conflicting embedded semantic object extent");
                progress |= inserted;
            }
        }
    }
    for (const auto &type : evidence.types) {
        if (absent(type)) continue;
        for (const auto &field : type.fields) {
            const auto identity = key(type.type, field.member);
            const auto binding = discovered_fields.find(identity);
            if (binding == discovered_fields.end()) {
                if (field.flags & 1) result.missing_fields.push_back(identity);
                if (field.flags & 2) result.unresolved_fields.push_back(identity);
            }
            else result.fields.push_back(binding->second);
        }
        const auto table = address_runtime::resolve(state.ranges, type.table);
        std::map<uint32_t, std::vector<uint32_t>> slots;
        // Stop at the actual end of this target vtable. Its slot count is not
        // inherited from the reference XML because methods can be inserted.
        if (table) for (uint32_t slot = 0; slot < 4096 * 8; slot += 8) {
            if (uint64_t(table) + slot + 8 > image.size) break;
            const auto *pointer = image.read(table + slot, 8);
            if (!pointer) break;
            uint64_t absolute; std::memcpy(&absolute, pointer, sizeof(absolute));
            if (absolute < image.preferred_base || absolute - image.preferred_base >= image.size) break;
            const auto address = static_cast<uint32_t>(absolute - image.preferred_base);
            const auto *section = image.section(address);
            if (!section || !(section->flags & Image::execute_flag)) break;
            slots[address].push_back(slot);
        }
        for (const auto &method : type.methods) {
            const auto identity = key(type.type, method.method);
            const auto function = complete_functions.find(method.function);
            if (function == complete_functions.end()) {
                if (method.flags & 1) result.missing_methods.push_back(identity);
                if (method.flags & 2) result.unresolved_methods.push_back(identity);
                continue;
            }
            const auto slot = slots.find(function->second);
            if (slot == slots.end() || slot->second.size() != 1) {
                if (method.flags & 1) result.missing_methods.push_back(identity);
                if (method.flags & 2) result.unresolved_methods.push_back(identity);
                continue;
            }
            result.methods.push_back({type.type, method.method, slot->second.front(), method.shape, method.arguments});
        }
    }
    // Official declarations are admitted for this exact PE identity and their
    // primary vtables were verified above. They also supply changed parameter
    // shapes; a matching method name does not inherit the source signature.
    if (profile) {
        result.enums = profile->enums;
        for (const auto &type : profile->types) {
            if (type.alignment && !stale_types.count(type.type)) result.types.push_back({type.type, type.size, type.alignment});
            for (const auto &field : type.fields) {
                if (stale_types.count(type.type)) continue;
                const auto found = std::find_if(result.fields.begin(), result.fields.end(), [&](const auto &value) {
                    return value.type == field.type && value.member == field.member;
                });
                if (found == result.fields.end()) result.fields.push_back(field);
                else if (found->offset != field.offset || found->size != field.size) {
                    const auto source = types.find(type.type);
                    const Field *member = nullptr;
                    if (source != types.end()) for (const auto &candidate : source->second->fields)
                        if (candidate.member == field.member) { member = &candidate; break; }
                    throw std::runtime_error("Image-owned member differs from instruction evidence: " +
                        (source == types.end() ? std::to_string(type.type) : source->second->name) + "." +
                        (member ? member->name : std::to_string(field.member)) +
                        " reference=" + std::to_string(member ? member->offset : 0) +
                        " declared=" + std::to_string(field.offset) + "/" + std::to_string(field.size) +
                        " instruction=" + std::to_string(found->offset) + "/" + std::to_string(found->size));
                }
            }
            for (const auto &method : type.methods) {
                if (type.table && !method_function(image, type.table, method.slot))
                    throw std::runtime_error("Image-owned semantic method slot is not executable");
                const auto found = std::find_if(result.methods.begin(), result.methods.end(), [&](const auto &value) {
                    return value.type == method.type && value.method == method.method;
                });
                if (found == result.methods.end()) result.methods.push_back(method);
                else if (found->slot != method.slot)
                    throw std::runtime_error("Image-owned method differs from instruction evidence");
                else *found = method; // no-op bodies do not encode unused parameters
            }
        }
        const auto remove_bound = [](auto &missing, const auto &bindings, auto member) {
            missing.erase(std::remove_if(missing.begin(), missing.end(), [&](uint64_t value) {
                return std::any_of(bindings.begin(), bindings.end(), [&](const auto &binding) {
                    return key(binding.type, binding.*member) == value;
                });
            }), missing.end());
        };
        remove_bound(result.missing_fields, result.fields, &FieldBinding::member);
        remove_bound(result.unresolved_fields, result.fields, &FieldBinding::member);
        remove_bound(result.missing_methods, result.methods, &MethodBinding::method);
        remove_bound(result.unresolved_methods, result.methods, &MethodBinding::method);
    }
    enum_discovery::discover(image, state, evidence.enum_code, result.enums, result.diagnostics);
    for (const auto &type : discover_type_extents(image, state, evidence.type_extents, result.fields)) {
        const auto found = std::find_if(result.types.begin(), result.types.end(), [&](const auto &value) {
            return value.type == type.type;
        });
        if (found == result.types.end()) result.types.push_back(type);
        else if (found->size != type.size)
            throw std::runtime_error("Image-owned type size differs from native allocation evidence");
    }
    for (const auto &item : evidence.enums) {
        if (item.flags && std::none_of(result.enums.begin(), result.enums.end(), [&](const auto &value) {
                return value.type == item.type && value.token == item.token;
            })) result.missing_fields.push_back(key(item.type, item.token));
    }
    for (const auto &type : evidence.types) {
        if (!type.flags || absent(type)) continue;
        if (std::none_of(result.types.begin(), result.types.end(), [&](const auto &value) { return value.type == type.type; }))
            result.missing_fields.push_back(key(type.type, 0));
    }
    // Required base-pointer calls are certified by the concrete overrides.
    // The abstract base's own vtable need not occur in the image, and a tiny
    // inherited no-op cannot certify the other implementations' conventions.
    const auto history = types.find(history_event_type);
    if (history != types.end()) for (const auto &method : history->second->methods) {
        if (!(method.flags & 1)) continue;
        const auto identity = method.method;
        bool all_overrides = true, found_override = false;
        MethodBinding common{};
        for (const auto &type : evidence.types) {
            if (absent(type) || type.type == history_event_type) continue;
            uint32_t parent = type.type;
            std::set<uint32_t> visited;
            while (parent && parent != history_event_type && visited.insert(parent).second) {
                const auto found = types.find(parent);
                parent = found == types.end() ? 0 : found->second->parent;
            }
            if (parent != history_event_type) continue;
            const auto binding = std::find_if(result.methods.begin(), result.methods.end(), [&](const auto &value) {
                return value.type == type.type && value.method == identity;
            });
            if (binding == result.methods.end() || (found_override &&
                    (binding->slot != common.slot || binding->parameter_shape != common.parameter_shape ||
                     binding->argument_count != common.argument_count))) {
                all_overrides = false; break;
            }
            common = *binding; found_override = true;
        }
        result.methods.erase(std::remove_if(result.methods.begin(), result.methods.end(), [&](const auto &binding) {
            return binding.type == history_event_type && binding.method == identity;
        }), result.methods.end());
        if (all_overrides && found_override) {
            common.type = history_event_type;
            result.methods.push_back(common);
            const auto value = key(history_event_type, identity);
            for (auto *missing : {&result.missing_methods, &result.unresolved_methods})
                missing->erase(std::remove(missing->begin(), missing->end(), value), missing->end());
        } else {
            result.missing_methods.push_back(key(history_event_type, identity));
        }
    }
    std::sort(result.missing_fields.begin(), result.missing_fields.end());
    result.missing_fields.erase(std::unique(result.missing_fields.begin(), result.missing_fields.end()), result.missing_fields.end());
    std::sort(result.missing_methods.begin(), result.missing_methods.end());
    result.missing_methods.erase(std::unique(result.missing_methods.begin(), result.missing_methods.end()), result.missing_methods.end());
    return result;
}

} // namespace dfcn::native_history_abi
