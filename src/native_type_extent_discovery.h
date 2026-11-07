#pragma once

#include "native_history_abi.h"
#include "native_address_scan.h"
#include <array>
#include <cstring>
#include <set>

namespace dfcn::native_history_abi {
namespace extent_detail {
class Reader {
    const std::vector<unsigned char> &bytes_;
    size_t at_ = 0;
public:
    explicit Reader(const std::vector<unsigned char> &bytes) : bytes_(bytes) {}
    void take(void *destination, size_t length) {
        if (length > bytes_.size() - at_) throw std::runtime_error("Truncated native type extent evidence");
        if (length) std::memcpy(destination, bytes_.data() + at_, length);
        at_ += length;
    }
    uint32_t number() { uint32_t value; take(&value, sizeof(value)); return value; }
    std::vector<unsigned char> blob() {
        const auto length = number();
        if (length > 1024 * 1024) throw std::runtime_error("Oversized native type extent function");
        std::vector<unsigned char> value(length); take(value.data(), value.size()); return value;
    }
    void finish() const {
        if (at_ != bytes_.size()) throw std::runtime_error("Unexpected native type extent suffix");
    }
};

template<typename Image>
std::set<uint32_t> table_functions(const Image &image, uint32_t table) {
    std::set<uint32_t> result;
    if (!table) return result;
    for (uint32_t slot = 0; slot < 4096 * 8; slot += 8) {
        if (uint64_t(table) + slot + 8 > image.size) break;
        const auto *bytes = image.read(table + slot, 8);
        if (!bytes) break;
        uint64_t pointer; std::memcpy(&pointer, bytes, 8);
        if (pointer < image.preferred_base || pointer - image.preferred_base >= image.size) break;
        const auto rva = static_cast<uint32_t>(pointer - image.preferred_base);
        const auto *section = image.section(rva);
        if (!section || !(section->flags & Image::execute_flag)) break;
        result.insert(rva);
    }
    return result;
}
} // namespace extent_detail

// A member's final byte is only a lower bound on sizeof. This producer instead
// reads the actual target sizeof argument of an authenticated sized deleting
// destructor. The call must retain the proved delete-callee identity and the
// complete wrapper contract; no old object size or vtable slot is assumed.
template<typename Image, typename AddressState>
std::vector<TypeBinding> discover_type_extents(const Image &image, const AddressState &state,
        const std::vector<unsigned char> &blob, const std::vector<FieldBinding> &fields) {
    std::vector<TypeBinding> result;
    if (blob.empty()) return result;
    extent_detail::Reader reader(blob);
    std::array<unsigned char, 8> magic{}; reader.take(magic.data(), magic.size());
    if (std::memcmp(magic.data(), "DFCNTE01", magic.size()) || reader.number() != 1)
        throw std::runtime_error("Unsupported native type extent evidence");
    const auto count = reader.number();
    if (count > 100000) throw std::runtime_error("Too many native type extent declarations");
    std::set<uint32_t> identities;
    for (uint32_t index = 0; index < count; ++index) {
        const auto type = reader.number(), table_reference = reader.number(), owner_reference = reader.number();
        const auto delete_reference = reader.number(), size_at = reader.number(), size_width = reader.number();
        const auto call_at = reader.number(), call_end = reader.number(), source_size = reader.number();
        const auto raw = reader.blob(), mask = reader.blob();
        if (!type || !identities.insert(type).second || !table_reference || !owner_reference || !delete_reference ||
                raw.empty() || raw.size() != mask.size() || !size_at || size_width != 4 ||
                uint64_t(size_at) + 4 > raw.size() || raw[size_at - 1] != 0xba ||
                !call_at || call_end != uint64_t(call_at) + 4 || call_end > raw.size() || raw[call_at - 1] != 0xe8 ||
                !source_size || source_size > 16 * 1024 * 1024)
            throw std::runtime_error("Invalid sized destructor extent evidence");
        uint32_t encoded_size; std::memcpy(&encoded_size, raw.data() + size_at, 4);
        int32_t source_call; std::memcpy(&source_call, raw.data() + call_at, 4);
        if (encoded_size != source_size || int64_t(owner_reference) + call_end + source_call != delete_reference)
            throw std::runtime_error("Inconsistent source sized destructor operand");
        for (size_t at = 0; at < mask.size(); ++at)
            if (mask[at] > 1 || (at >= size_at && at < size_at + 4 && !mask[at]))
                throw std::runtime_error("Invalid sized destructor instruction mask");
        const auto table = address_runtime::resolve(state.ranges, table_reference);
        auto deletion = address_runtime::resolve(state.function_owners, delete_reference);
        if (!deletion) deletion = address_runtime::resolve(state.ranges, delete_reference);
        if (!table || !deletion) continue;
        auto candidates = extent_detail::table_functions(image, table);
        auto owner = address_runtime::resolve(state.function_owners, owner_reference);
        if (!owner) owner = address_runtime::resolve(state.ranges, owner_reference);
        if (owner) {
            if (!candidates.count(owner)) continue;
            candidates = {owner};
        }
        std::set<std::pair<uint32_t, uint32_t>> matches;
        for (const auto candidate : candidates) {
            const auto scope = std::lower_bound(image.functions.begin(), image.functions.end(), candidate,
                [](const auto &function, uint32_t address) { return function.begin < address; });
            if (scope == image.functions.end() || scope->begin != candidate || scope->end - scope->begin != raw.size()) continue;
            const auto *bytes = image.read(candidate, raw.size());
            if (!bytes) continue;
            bool same = true;
            for (size_t at = 0; at < raw.size(); ++at)
                if (!mask[at] && bytes[at] != raw[at]) { same = false; break; }
            if (!same) continue;
            int32_t actual_call; std::memcpy(&actual_call, bytes + call_at, 4);
            if (int64_t(candidate) + call_end + actual_call != deletion) continue;
            uint32_t extent; std::memcpy(&extent, bytes + size_at, 4);
            if (extent < 8 || extent > 16 * 1024 * 1024 || extent % 8)
                throw std::runtime_error("Invalid target sized destructor extent");
            matches.emplace(candidate, extent);
        }
        if (matches.size() != 1) continue;
        const auto extent = matches.begin()->second;
        for (const auto &field : fields)
            if (field.type == type && uint64_t(field.offset) + field.size > extent)
                throw std::runtime_error("Target allocation size contradicts a discovered member");
        // This is the ordinary sized-delete overload, without align_val_t.
        // Allocate at the ABI's full ordinary-allocation alignment; a changed
        // over-aligned overload has a different wrapper/callee contract.
        result.push_back({type, extent, 16});
    }
    reader.finish();
    return result;
}
} // namespace dfcn::native_history_abi
