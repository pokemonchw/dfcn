#pragma once

// Version selection and discovery are separate from the feature profiles.
// A complete address catalog must exist before any native ABI is accessed.
#ifdef _WIN32
#include "native_pe_resolver.h"
namespace dfcn {
inline unsigned native_pe_edition() {
    const auto &state = pe_runtime::state();
    return state.complete ? state.edition : 0u;
}
inline bool native_pe_supported() { return native_pe_edition() != 0; }
inline bool native_pe_classic() { return native_pe_edition() == 2; }
inline bool native_pe_relocated() { return native_pe_supported() && native_pe_edition() != 1; }
inline bool native_pe_steam_5317() {
    const auto &state = pe_runtime::state();
    return state.complete && state.ui_settings_tail_shift == 8;
}
inline size_t native_pe_init_field_offset(size_t reference) {
    const auto &state = pe_runtime::state();
    // Two inserted volume fields split media into a +4 span and a +8
    // tail. Display flags/grid and the actual native object root stay put.
    if (!state.complete || !state.ui_settings_tail_shift || reference < 0x78 || reference >= 0x3964)
        return reference;
    return reference + (reference < 0x88 ? 4 : state.ui_settings_tail_shift);
}
inline uintptr_t native_pe_rva(uintptr_t address) {
    const auto &state = pe_runtime::state();
    if (!state.complete || !address || address > UINT32_MAX) return 0;
    if (state.edition == 1) return address < state.size ? address : 0;
    return pe_runtime::resolve(state.ranges, static_cast<uint32_t>(address));
}
inline uintptr_t native_pe_address(uintptr_t base, uintptr_t reference) {
    const uintptr_t offset = native_pe_rva(reference);
    return base && offset && offset <= UINTPTR_MAX - base ? base + offset : 0;
}
inline bool native_pe_bytes(uintptr_t reference, std::vector<unsigned char> &expected) {
    const auto &state = pe_runtime::state();
    if (!state.complete || reference > UINT32_MAX || expected.size() > UINT32_MAX - reference) return false;
    if (state.edition == 1) return reference && reference + expected.size() <= state.size;
    if (expected.empty()) return native_pe_rva(reference) != 0;
    const uintptr_t first = native_pe_rva(reference);
    auto span = std::upper_bound(state.ranges.begin(), state.ranges.end(), reference,
        [](uintptr_t value, const auto &range) { return value < range.begin; });
    if (!first || span == state.ranges.begin() || reference + expected.size() > std::prev(span)->end) return false;
    auto found = std::lower_bound(state.bytes.begin(), state.bytes.end(), reference,
        [](const auto &byte, uintptr_t value) { return byte.address < value; });
    for (; found != state.bytes.end() && found->address < reference + expected.size(); ++found) {
        auto &value = expected[found->address - reference];
        if (value != found->reference) return false;
        value = found->native;
    }
    return true;
}
inline bool native_pe_match(uintptr_t base, uintptr_t reference, const unsigned char *bytes, size_t count) {
    std::vector<unsigned char> expected(bytes, bytes + count);
    const uintptr_t address = native_pe_address(base, reference);
    return address && native_pe_bytes(reference, expected) &&
        std::memcmp(reinterpret_cast<const void *>(address), expected.data(), expected.size()) == 0;
}
} // namespace dfcn
#endif
