// One identity contract for every native producer and retained-page recovery.
// Generated profiles pair canonical event kinds with their RTTI tables. ELF's
// existing identity profile additionally retains getter instruction evidence.
struct NativeHistoryEventIdentityProfile {
    uintptr_t vtable, get_type, get_sentence;
    int32_t native_type;
    size_t type_code_size;
    std::array<uint8_t, 10> type_code;
};
#ifdef _WIN32
#include "native_history_event_profiles.inc"
#else
#include "native_history_event_profiles_elf.inc"
#endif

static uintptr_t native_history_event_identity_base() {
    static const uintptr_t image = []() -> uintptr_t {
        const uintptr_t base = native_history_profile_base();
        const size_t sentence_slot = native_history_abi::history_method("getSentence", 0xd0).slot;
        const auto *type_method = native_history_abi::method(native_history_abi::history_event_type,
            native_history_abi::semantic_id("getType"));
        if (!type_method && !native_history_abi::snapshot().reference_identity) return 0;
        if (type_method && (type_method->parameter_shape !=
                native_history_abi::semantic_id("history_event_type()") || type_method->argument_count)) return 0;
        if (!base || base > UINTPTR_MAX - sentence_slot) return 0;
#ifdef _WIN32
        // A discovered image identifies events by its verified RTTI table and
        // the source semantic profile below. Enum ordinals and getType's tiny
        // immediate-return body may change between releases. Its validated
        // parameter contract is required, but executing/comparing that getter
        // is unnecessary for this RTTI-based identity lookup.
        return base;
#else
        const size_t type_slot = type_method ? type_method->slot : 0;
        for (const auto &profile : native_history_event_identity_profiles) {
            uintptr_t type_entry = 0, sentence_entry = 0;
            std::array<uint8_t, 10> type_code{};
            if (!profile.type_code_size || profile.type_code_size > type_code.size() ||
                profile.vtable > UINTPTR_MAX - base - sentence_slot ||
                profile.get_type > UINTPTR_MAX - base ||
                profile.get_sentence > UINTPTR_MAX - base ||
                !native_history_copy(native_reference_address(base, profile.vtable) + type_slot, type_entry) ||
                !native_history_copy(native_reference_address(base, profile.vtable) + sentence_slot, sentence_entry) ||
                type_entry != native_reference_address(base, profile.get_type) ||
                sentence_entry != native_reference_address(base, profile.get_sentence) ||
                !native_history_copy_bytes(type_entry, type_code.data(), profile.type_code_size) ||
                std::memcmp(type_code.data(), profile.type_code.data(), profile.type_code_size) != 0)
                return 0;
        }
        return base;
#endif
    }();
    return image;
}

static bool capture_native_history_event_identity(const void *event, int32_t &native_type) {
    native_type = -1;
    const uintptr_t base = native_history_event_identity_base();
    uintptr_t table = 0;
    if (!base || !native_history_copy(reinterpret_cast<uintptr_t>(event), table) || table < base)
        return false;
    const uintptr_t rva = table - base;
    // The linker may order vtables differently in the two Windows editions.
    // Keep lookup ordered by this image's resolved addresses, without changing
    // the generated reference profiles or their semantic event identities.
    static const auto identities = [] {
        std::array<std::pair<uintptr_t, int32_t>,
            std::size(native_history_event_identity_profiles)> values{};
        for (size_t i = 0; i < values.size(); ++i) {
            const auto &profile = native_history_event_identity_profiles[i];
            values[i] = {native_reference_rva(profile.vtable), profile.native_type};
        }
        std::sort(values.begin(), values.end(),
            [](const auto &left, const auto &right) { return left.first < right.first; });
        return values;
    }();
    const auto found = std::lower_bound(identities.begin(), identities.end(), rva,
        [](const auto &identity, uintptr_t value) { return identity.first < value; });
    if (found == identities.end() || found->first != rva) return false;
    native_type = found->second;
    return true;
}
