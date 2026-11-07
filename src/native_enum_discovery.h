#pragma once

#include "native_history_abi.h"
#include "native_address_scan.h"
#include <algorithm>
#include <cstring>
#include <map>
#include <set>

namespace dfcn::native_history_abi::enum_discovery {

struct Fixup { uint32_t at, width, end, target, kind; };
struct Segment { uint32_t reference; std::vector<unsigned char> raw, mask; std::vector<Fixup> fixups; };
struct Switch {
    uint32_t type, segment, bound, table, parent;
    std::vector<std::pair<uint32_t, uint32_t>> cases;
};
struct Flag { uint32_t type, token, segment, parent, value; };
class Reader {
    const std::vector<unsigned char> &data_;
    size_t at_ = 0;
public:
    explicit Reader(const std::vector<unsigned char> &data) : data_(data) {}
    uint32_t number() {
        if (data_.size() - at_ < 4) throw std::runtime_error("Truncated enum dispatch evidence");
        uint32_t value; std::memcpy(&value, data_.data() + at_, 4); at_ += 4; return value;
    }
    uint32_t count(uint32_t maximum) {
        const auto value = number();
        if (value > maximum) throw std::runtime_error("Invalid enum dispatch evidence count");
        return value;
    }
    std::vector<unsigned char> blob() {
        const auto size = count(1048576);
        if (size > data_.size() - at_) throw std::runtime_error("Truncated enum dispatch bytes");
        std::vector<unsigned char> result(data_.begin() + at_, data_.begin() + at_ + size);
        at_ += size; return result;
    }
    void finish() const {
        if (at_ != data_.size()) throw std::runtime_error("Unexpected enum dispatch suffix");
    }
};
inline uint32_t number(const unsigned char *bytes) {
    uint32_t result; std::memcpy(&result, bytes, 4); return result;
}

template <typename Image, typename State>
inline void discover(const Image &image, const State &state, const std::vector<unsigned char> &blob,
        std::vector<EnumBinding> &bindings, std::vector<std::string> &diagnostics) {
    if (blob.empty()) return;
    Reader reader(blob);
    if (reader.number() != 1) throw std::runtime_error("Unsupported enum dispatch evidence");
    const auto owner = reader.number(), prefix_index = reader.number(), outer_index = reader.number();
    std::vector<Segment> segments(reader.count(64));
    for (auto &segment : segments) {
        segment.reference = reader.number(); segment.raw = reader.blob(); segment.mask = reader.blob();
        if (segment.raw.empty() || segment.mask.size() != segment.raw.size())
            throw std::runtime_error("Invalid enum dispatch segment");
        segment.fixups.resize(reader.count(1024));
        for (auto &fixup : segment.fixups) {
            fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            if ((fixup.width != 1 && fixup.width != 4 && fixup.width != 8) ||
                    uint64_t(fixup.at) + fixup.width > segment.raw.size())
                throw std::runtime_error("Invalid enum dispatch relocation");
        }
    }
    std::vector<Switch> switches(reader.count(64));
    for (auto &entry : switches) {
        entry.type = reader.number(); entry.segment = reader.number(); entry.bound = reader.number();
        entry.table = reader.number(); entry.parent = reader.number();
        entry.cases.resize(reader.count(1024));
        for (auto &item : entry.cases) { item.first = reader.number(); item.second = reader.number(); }
        if (entry.segment >= segments.size() || entry.bound >= segments[entry.segment].raw.size() ||
                uint64_t(entry.table) + 4 > segments[entry.segment].raw.size())
            throw std::runtime_error("Invalid enum switch operand");
    }
    std::vector<Flag> flags(reader.count(64));
    for (auto &entry : flags) {
        entry = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
        if (entry.segment >= segments.size() || outer_index >= segments.size() ||
                uint64_t(entry.value) + 4 > segments[outer_index].raw.size())
            throw std::runtime_error("Invalid enum flag operand");
    }
    const auto combined_segment = reader.number(), and_offset = reader.number(), compare_offset = reader.number();
    reader.finish();
    if (prefix_index >= segments.size() || outer_index >= segments.size() ||
            combined_segment >= segments.size() || and_offset >= segments[combined_segment].raw.size() ||
            compare_offset >= segments[combined_segment].raw.size() || segments[prefix_index].reference != owner)
        throw std::runtime_error("Invalid enum dispatch root");
    const auto bound = [&](uint32_t type, uint32_t token) {
        return std::any_of(bindings.begin(), bindings.end(), [&](const auto &value) {
            return value.type == type && value.token == token;
        });
    };
    bool missing = false;
    for (const auto &entry : switches) for (const auto &[token, reference] : entry.cases)
        missing |= !bound(entry.type, token);
    for (const auto &entry : flags) missing |= !bound(entry.type, entry.token);
    if (!missing) return;
    const auto resolve = [&](uint32_t reference) {
        auto value = address_runtime::resolve(state.ranges, reference);
        if (!value) value = address_runtime::resolve(state.function_owners, reference);
        return value;
    };
    const auto target_owner = resolve(owner);
    const auto function = std::lower_bound(image.functions.begin(), image.functions.end(), target_owner,
        [](const auto &value, uint32_t address) { return value.begin < address; });
    if (!target_owner || function == image.functions.end() || function->begin != target_owner) return;
    std::vector<uint32_t> addresses(segments.size());
    std::vector<const unsigned char *> bytes(segments.size());
    const auto match = [&](uint32_t index, uint32_t address, uint32_t dynamic_table) {
        const auto &segment = segments[index];
        if (address < function->begin || uint64_t(address) + segment.raw.size() > function->end) return false;
        const auto *actual = image.read(address, segment.raw.size());
        if (!actual) return false;
        for (size_t at = 0; at < segment.raw.size(); ++at)
            if (!segment.mask[at] && actual[at] != segment.raw[at]) return false;
        for (const auto &fixup : segment.fixups) {
            if (fixup.at == dynamic_table) continue; // read and validate all target case entries below
            uint64_t value = 0;
            std::memcpy(&value, actual + fixup.at, fixup.width);
            if ((fixup.kind & 3) == 0) {
                const int64_t displacement = fixup.width == 1 ? static_cast<int8_t>(value) : static_cast<int32_t>(value);
                const int64_t target = int64_t(address) + fixup.end + displacement;
                if (target < 0 || target >= image.size) return false;
                value = static_cast<uint32_t>(target);
            } else if ((fixup.kind & 3) == 2) {
                if (value < image.preferred_base) return false;
                value -= image.preferred_base;
            }
            const auto expected = fixup.target ? resolve(fixup.target) : 0;
            if ((fixup.target && !expected) || value != expected) return false;
        }
        addresses[index] = address; bytes[index] = actual; return true;
    };
    if (!match(prefix_index, target_owner, UINT32_MAX)) return;
    const auto outer_address = target_owner + static_cast<uint32_t>(segments[prefix_index].raw.size());
    std::map<uint32_t, uint32_t> named_cases;
    std::vector<EnumBinding> discovered;
    for (const auto &entry : switches) {
        uint32_t address = outer_address;
        if (entry.parent) {
            const auto parent = named_cases.find(entry.parent);
            if (parent == named_cases.end()) continue;
            address = parent->second;
        }
        if (!match(entry.segment, address, entry.table)) continue;
        const auto count = uint32_t(bytes[entry.segment][entry.bound]) + 1;
        const auto table = number(bytes[entry.segment] + entry.table);
        const auto *targets = image.read(table, count * 4);
        if (!targets) continue;
        std::map<uint32_t, std::vector<uint32_t>> indices;
        bool valid = true;
        for (uint32_t index = 0; index < count; ++index) {
            const auto target = number(targets + index * 4);
            if (target < function->begin || target >= function->end) { valid = false; break; }
            indices[target].push_back(index);
        }
        if (!valid) continue;
        for (const auto &[token, reference] : entry.cases) {
            const auto target = resolve(reference);
            const auto found = indices.find(target);
            if (!target || found == indices.end() || found->second.size() != 1) continue;
            discovered.push_back({entry.type, token, static_cast<int32_t>(found->second.front())});
            if (!entry.parent) named_cases.emplace(token, target);
        }
    }
    std::vector<std::pair<Flag, uint32_t>> flag_values;
    if (bytes[outer_index]) for (const auto &entry : flags) {
        const auto parent = named_cases.find(entry.parent);
        if (parent == named_cases.end() || !match(entry.segment, parent->second, UINT32_MAX)) continue;
        const auto value = number(bytes[outer_index] + entry.value);
        if (!value || value > INT32_MAX || (value & (value - 1))) continue;
        flag_values.emplace_back(entry, value);
    }
    uint32_t combined = 0;
    for (const auto &[entry, value] : flag_values) if (entry.segment == combined_segment) combined |= value;
    const bool combined_valid = bytes[combined_segment] && combined &&
        bytes[combined_segment][and_offset] == combined && bytes[combined_segment][compare_offset] == combined;
    for (const auto &[entry, value] : flag_values)
        if (entry.segment != combined_segment || combined_valid)
            discovered.push_back({entry.type, entry.token, static_cast<int32_t>(value)});
    size_t added = 0;
    for (const auto &entry : discovered) {
        const auto existing = std::find_if(bindings.begin(), bindings.end(), [&](const auto &value) {
            return value.type == entry.type && value.token == entry.token;
        });
        if (existing != bindings.end()) {
            if (existing->value != entry.value) throw std::runtime_error("Conflicting native enum dispatch evidence");
        } else { bindings.push_back(entry); ++added; }
    }
    if (added) diagnostics.push_back("Recovered " + std::to_string(added) +
        " native enum values from typed dispatch/case evidence at " + std::to_string(target_owner));
}

} // namespace dfcn::native_history_abi::enum_discovery
