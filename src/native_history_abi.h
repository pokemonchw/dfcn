#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

// Semantic keys describe the reference program. Only the image resolver may
// publish target coordinates from instruction evidence or declarations whose
// image identity has been independently verified against the installed EXE.
namespace dfcn::native_history_abi {

constexpr uint32_t semantic_id(std::string_view name) {
    uint32_t value = 2166136261u;
    for (const unsigned char byte : name) value = (value ^ byte) * 16777619u;
    return value;
}

constexpr uint32_t generated_id(std::string_view name) {
    uint32_t value = 2166136261u;
    // The layout generator prefixes every C++ identifier with f_. The source
    // identity retains the XML spelling, including nested member paths.
    bool beginning = true;
    for (size_t i = 0; i < name.size(); ++i) {
        if (beginning && name.substr(i, 2) == "f_") i += 2;
        if (i == name.size()) break;
        const auto byte = static_cast<unsigned char>(name[i]);
        value = (value ^ byte) * 16777619u;
        beginning = byte == '.';
    }
    return value;
}

struct FieldSpec {
    uint32_t type, member;
    uint32_t reference, size;
    const char *name, *storage;
};
struct MethodSpec {
    uint32_t type, method, reference_slot, parameter_shape, argument_count;
    const char *name, *signature;
};
struct TypeSpec {
    uint32_t type, parent;
    const char *name, *original;
    uint32_t reference_table, reference_size;
    const FieldSpec *fields;
    size_t field_count;
    const MethodSpec *methods;
    size_t method_count;
};

struct FieldBinding {
    uint32_t type = 0, member = 0, offset = 0, size = 0;
};
struct MethodBinding {
    uint32_t type = 0, method = 0, slot = 0, parameter_shape = 0, argument_count = 0;
};
struct TypeBinding { uint32_t type = 0, size = 0, alignment = 0; };
struct EnumBinding { uint32_t type = 0, token = 0; int32_t value = 0; };
struct Snapshot {
    bool reference_identity = true;
    std::vector<FieldBinding> fields;
    std::vector<MethodBinding> methods;
    std::vector<TypeBinding> types;
    std::vector<EnumBinding> enums;
};

inline Snapshot &snapshot() {
    static Snapshot value;
    return value;
}
constexpr uint64_t key(uint32_t type, uint32_t member) {
    return (uint64_t(type) << 32) | member;
}

// Called once before any hook is installed, including when a sealed address
// cache is restored. A failed publication leaves the preceding map intact.
inline void publish(std::vector<FieldBinding> fields,
                    std::vector<MethodBinding> methods, bool reference_identity = false,
                    std::vector<TypeBinding> types = {}, std::vector<EnumBinding> enums = {}) {
    std::sort(fields.begin(), fields.end(), [](const auto &a, const auto &b) {
        return key(a.type, a.member) < key(b.type, b.member);
    });
    std::sort(methods.begin(), methods.end(), [](const auto &a, const auto &b) {
        return key(a.type, a.method) < key(b.type, b.method);
    });
    std::sort(types.begin(), types.end(), [](const auto &a, const auto &b) { return a.type < b.type; });
    std::sort(enums.begin(), enums.end(), [](const auto &a, const auto &b) {
        return key(a.type, a.token) < key(b.type, b.token);
    });
    uint64_t previous = 0;
    bool first = true;
    for (const auto &field : fields) {
        const auto identity = key(field.type, field.member);
        if (!field.type || !field.member || !field.size ||
            uint64_t(field.offset) + field.size > UINT32_MAX || (!first && identity <= previous))
            throw std::runtime_error("Invalid or duplicated discovered native field");
        previous = identity; first = false;
    }
    previous = 0; first = true;
    for (const auto &method : methods) {
        const auto identity = key(method.type, method.method);
        if (!method.type || !method.method || method.slot % sizeof(uintptr_t) ||
            method.slot > 65536 || !method.parameter_shape || method.argument_count > 32 ||
            (!first && identity <= previous))
            throw std::runtime_error("Invalid or duplicated discovered native method");
        previous = identity; first = false;
    }
    previous = 0;
    for (const auto &type : types) {
        if (!type.type || type.type <= previous || !type.size || !type.alignment ||
                (type.alignment & (type.alignment - 1)) || type.alignment > 4096)
            throw std::runtime_error("Invalid or duplicated discovered native type");
        previous = type.type;
    }
    previous = 0; first = true;
    for (const auto &entry : enums) {
        const auto identity = key(entry.type, entry.token);
        if (!entry.type || !entry.token || (!first && identity <= previous))
            throw std::runtime_error("Invalid or duplicated discovered native enum");
        previous = identity; first = false;
    }
    snapshot() = {reference_identity, std::move(fields), std::move(methods), std::move(types), std::move(enums)};
}

inline std::optional<int32_t> enum_value(std::string_view type, std::string_view token, int32_t reference) {
#ifdef _WIN32
    const auto identity = key(semantic_id(type), semantic_id(token));
    const auto &entries = snapshot().enums;
    const auto found = std::lower_bound(entries.begin(), entries.end(), identity,
        [](const auto &entry, uint64_t value) { return key(entry.type, entry.token) < value; });
    if (found != entries.end() && key(found->type, found->token) == identity) return found->value;
    if (!snapshot().reference_identity) return std::nullopt;
#endif
    return reference;
}

inline const TypeBinding *type(uint32_t identity) {
    const auto &types = snapshot().types;
    const auto found = std::lower_bound(types.begin(), types.end(), identity,
        [](const auto &entry, uint32_t value) { return entry.type < value; });
    return found != types.end() && found->type == identity ? &*found : nullptr;
}
inline size_t type_size(uint32_t identity, size_t reference) {
#ifdef _WIN32
    if (const auto *binding = type(identity)) return binding->size;
    if (!snapshot().reference_identity) return 0;
#endif
    return reference;
}

inline const FieldBinding *field(uint32_t type, uint32_t member) {
    const auto &fields = snapshot().fields;
    const auto identity = key(type, member);
    auto found = std::lower_bound(fields.begin(), fields.end(), identity,
        [](const auto &entry, uint64_t value) { return key(entry.type, entry.member) < value; });
    return found != fields.end() && key(found->type, found->member) == identity ? &*found : nullptr;
}
inline const MethodBinding *method(uint32_t type, uint32_t name) {
    const auto &methods = snapshot().methods;
    const auto identity = key(type, name);
    auto found = std::lower_bound(methods.begin(), methods.end(), identity,
        [](const auto &entry, uint64_t value) { return key(entry.type, entry.method) < value; });
    return found != methods.end() && key(found->type, found->method) == identity ? &*found : nullptr;
}

struct FieldOffset {
    size_t reference = 0;
    uint32_t type = 0, member = 0;
    constexpr FieldOffset(size_t value = 0) : reference(value) {}
    constexpr FieldOffset(size_t value, std::string_view owner, std::string_view path)
        : reference(value), type(generated_id(owner)), member(generated_id(path)) {}
    size_t runtime() const {
        if (!type && !member && reference == SIZE_MAX) return reference;
#ifdef _WIN32
        if (const auto *binding = field(type, member)) return binding->offset;
        if (!snapshot().reference_identity)
            throw std::runtime_error("Unresolved semantic native field " + std::to_string(type) + ":" + std::to_string(member));
#endif
        return reference;
    }
    constexpr operator size_t() const {
        return std::is_constant_evaluated() ? reference : runtime();
    }
    bool contains(size_t delta, size_t width, size_t reference_size) const {
#ifdef _WIN32
        if (const auto *binding = field(type, member))
            return delta <= binding->size && width <= binding->size - delta;
        if (!snapshot().reference_identity) return false;
#endif
        return delta <= reference_size && width <= reference_size - delta;
    }
    uintptr_t address(uintptr_t object, size_t delta, size_t width, size_t reference_size) const {
        if (!object || !width || !contains(delta, width, reference_size)) return 0;
        const auto offset = runtime();
        if (offset > UINTPTR_MAX - object || delta > UINTPTR_MAX - object - offset) return 0;
        const auto result = object + offset + delta;
        return width <= UINTPTR_MAX - result ? result : 0;
    }
};

inline constexpr uint32_t history_event_type = semantic_id("history_event");
inline constexpr uint32_t sentence_shape = semantic_id(
    "void(pointer<stl-string>,pointer<history_event_context>,bool,bool)");
inline constexpr uint32_t sentence_context_shape = semantic_id(
    "void(pointer<stl-string>,pointer<history_event_context>)");

inline MethodBinding history_method(std::string_view name, uint32_t reference_slot) {
#ifdef _WIN32
    if (const auto *binding = method(history_event_type, semantic_id(name))) return *binding;
    if (!snapshot().reference_identity)
        throw std::runtime_error("Unresolved history method contract: " + std::string(name));
#endif
    return {history_event_type, semantic_id(name), reference_slot, sentence_shape, 4};
}

} // namespace dfcn::native_history_abi
