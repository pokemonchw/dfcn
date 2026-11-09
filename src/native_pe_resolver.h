#pragma once

#ifdef _WIN32
#include "native_pe_image.h"
#include "native_address_scan.h"
#include "runtime_paths.h"
#include <algorithm>
#include <array>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <unordered_map>
#include <vector>

// The resolver owns executable identities and address discovery. Feature
// profiles retain their reference coordinates and their memory ownership checks.
namespace dfcn::pe_runtime {

using namespace address_runtime;

struct Profile {
    std::string label;
    std::array<unsigned char, 32> digest{};
    uint32_t timestamp = 0, size = 0;
    std::vector<Range> ranges;
    std::vector<Byte> bytes;
};
struct Catalog {
    std::vector<std::pair<uint32_t, uint32_t>> required;
    std::vector<Profile> known;
    std::vector<Pattern> patterns;
    std::vector<Vtable> vtables;
    std::vector<Import> imports;
    std::array<unsigned char, 32> digest{};
};

class Reader {
    std::vector<unsigned char> data_;
    size_t cursor_ = 0;
    void unseal() {
        if (data_.size() < 32) throw std::runtime_error("Truncated address cache digest");
        const auto payload_size = data_.size() - 32;
        const auto digest = sha256(data_.data(), payload_size);
        if (std::memcmp(digest.data(), data_.data() + payload_size, digest.size()))
            throw std::runtime_error("Address cache digest mismatch");
        data_.resize(payload_size);
    }
public:
    explicit Reader(const std::filesystem::path &path, bool sealed = false) {
        std::ifstream input(path, std::ios::binary | std::ios::ate);
        if (!input) throw std::runtime_error("Cannot open address data: " + runtime::utf8(path));
        const auto length = input.tellg();
        if (length < 0 || length > 128 * 1024 * 1024)
            throw std::runtime_error("Invalid address data size");
        data_.resize(static_cast<size_t>(length));
        input.seekg(0);
        if (!data_.empty() && !input.read(reinterpret_cast<char *>(data_.data()), length))
            throw std::runtime_error("Cannot read address data");
        if (sealed) unseal();
    }
    explicit Reader(std::vector<unsigned char> data, bool sealed)
        : data_(std::move(data)) { if (sealed) unseal(); }
    const std::vector<unsigned char> &data() const { return data_; }
    void rewind() { cursor_ = 0; }
    void read(void *destination, size_t length) {
        if (length > data_.size() - cursor_) throw std::runtime_error("Truncated address data");
        if (length) std::memcpy(destination, data_.data() + cursor_, length);
        cursor_ += length;
    }
    uint32_t number() { uint32_t value; read(&value, sizeof(value)); return value; }
    uint32_t count(uint32_t maximum = 1000000) {
        const auto value = number();
        if (value > maximum) throw std::runtime_error("Invalid address data count");
        return value;
    }
    std::vector<unsigned char> blob(uint32_t maximum = 16 * 1024 * 1024) {
        std::vector<unsigned char> value(count(maximum));
        read(value.data(), value.size());
        return value;
    }
    std::string string() {
        const auto value = blob(4096);
        return {value.begin(), value.end()};
    }
    void magic(const char *expected) {
        char actual[8]; read(actual, sizeof(actual));
        if (std::memcmp(actual, expected, 8) || number() != 1)
            throw std::runtime_error("Unsupported address data schema");
    }
    void finish() const {
        if (cursor_ != data_.size()) throw std::runtime_error("Unexpected address data suffix");
    }
};

inline void read_bindings(Reader &reader, std::vector<Range> &ranges, std::vector<Byte> &bytes) {
    ranges.resize(reader.count());
    uint32_t previous = 0;
    for (auto &range : ranges) {
        range = {reader.number(), reader.number(), reader.number()};
        if (!range.begin || range.end <= range.begin || range.begin < previous ||
            !range.native || uint64_t(range.native) + range.end - range.begin > UINT32_MAX)
            throw std::runtime_error("Invalid address range");
        previous = range.end;
    }
    bytes.resize(reader.count(8000000));
    previous = 0;
    for (size_t index = 0; index < bytes.size(); ++index) {
        auto &byte = bytes[index];
        byte.address = reader.number();
        reader.read(&byte.reference, 1); reader.read(&byte.native, 1);
        if (!byte.address || (index && byte.address <= previous))
            throw std::runtime_error("Invalid relocated operand order");
        previous = byte.address;
    }
}

inline std::vector<std::pair<uint32_t, uint32_t>> read_required(Reader &reader) {
    std::vector<std::pair<uint32_t, uint32_t>> spans;
    reader.magic("DFCNPE01");
    const auto required = reader.count();
    for (uint32_t index = 0; index < required; ++index) {
        const auto reference = reader.number(), length = reader.number();
        if (!reference || !length || uint64_t(reference) + length > UINT32_MAX)
            throw std::runtime_error("Invalid required address span");
        spans.emplace_back(reference, length);
    }
    return spans;
}

inline Catalog load_catalog(Reader reader) {
    Catalog catalog;
    catalog.digest = sha256(reader.data().data(), reader.data().size());
    catalog.required = read_required(reader);
    catalog.known.resize(reader.count(32));
    for (auto &profile : catalog.known) {
        profile.label = reader.string(); reader.read(profile.digest.data(), profile.digest.size());
        profile.timestamp = reader.number(); profile.size = reader.number();
        read_bindings(reader, profile.ranges, profile.bytes);
    }
    catalog.patterns.resize(reader.count(100000));
    for (auto &pattern : catalog.patterns) {
        pattern.reference = reader.number(); pattern.flags = reader.number();
        pattern.raw = reader.blob(); pattern.mask = reader.blob();
        if (!pattern.reference || pattern.raw.empty() || pattern.mask.size() != pattern.raw.size() ||
            uint64_t(pattern.reference) + pattern.raw.size() > UINT32_MAX ||
            (pattern.flags & ~31u) || !(pattern.flags & 5u) ||
            ((pattern.flags & 8u) && (!(pattern.flags & 1u) || (pattern.flags & 2u))))
            throw std::runtime_error("Invalid scan pattern");
        for (auto byte : pattern.mask) if (byte > 1) throw std::runtime_error("Invalid scan mask");
        pattern.fixups.resize(reader.count(100000));
        for (auto &fixup : pattern.fixups) {
            fixup = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number()};
            const auto kind = fixup.kind & 0xff;
            if ((fixup.width != 1 && fixup.width != 4 && fixup.width != 8) || kind > 2 || (fixup.kind & ~0x103u) ||
                uint64_t(fixup.offset) + fixup.width > pattern.raw.size() || fixup.next > pattern.raw.size() ||
                (kind == 1 && fixup.width != 4) || (kind == 2 && fixup.width != 8))
                throw std::runtime_error("Invalid address operand");
        }
    }
    catalog.vtables.resize(reader.count(100000));
    for (auto &table : catalog.vtables) {
        table.reference = reader.number(); table.name = reader.string();
        table.slots.resize(reader.count(4096));
        for (auto &slot : table.slots) slot = reader.number();
        if (!table.reference || table.name.empty() || table.slots.empty())
            throw std::runtime_error("Invalid RTTI anchor");
    }
    catalog.imports.resize(reader.count(100000));
    for (auto &entry : catalog.imports) {
        entry.reference = reader.number(); entry.library = reader.string(); entry.symbol = reader.string();
    }
    reader.finish();
    return catalog;
}

inline Catalog load_catalog(const std::filesystem::path &path) {
    return load_catalog(Reader(path));
}

inline uint32_t ui_settings_tail_shift(const Image &image) {
    // The 53.17 Steam audio update grows init's media settings by eight
    // bytes. Independent unchanged callers establish both the real init
    // root and the shifted font/widget fields. Restrict this layout to the
    // exact reviewed image; an arbitrary new version must still be resolved.
    return hex_digest(image.digest) ==
        "3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16" ? 8u : 0u;
}

#include "native_pe_5317_bindings.inc"

inline void adapt_required(Catalog &catalog, uint32_t settings_shift) {
    if (settings_shift != 8) return;
    // Profiles with explicit 53.17 opcodes consume their actual instruction
    // lengths: the mouse CMP loses a REX prefix; clothing search constructs
    // its caption before NativeString::find. Keep the interleaved calls as
    // separate resources and preserve both 53.16 editions' original extents.
    for (auto &[reference, length] : catalog.required) {
        if (reference == 0x1b2b77 && length == 7) length = 6;
        if (reference == 0x8b9daf && length == 101) length = 63;
        if (reference == 0x8b9e3a && length == 95) length = 35;
        if (reference == 0x8b9e99 && length == 65) length = 11;
    }
}

inline State scan(const Image &image, const Catalog &catalog) {
    const auto shift = ui_settings_tail_shift(image);
    std::vector<Range> fields;
    // DFHack/df-structures 94e27cc: volume_ui_fort precedes the old
    // time_between_songs_fort (+0x78); volume_ui_adv precedes the old
    // title_music_str (+0x88). The following input/font/widget tail gains 8.
    if (shift) {
        fields.push_back({0x023cd7e8, 0x023cd7f8, 0x023cd7ec});
        fields.push_back({0x023cd7f8, 0x023d10d4, 0x023cd7f8 + shift});
    }
    const std::vector<Range> reviewed_ranges = shift
        ? std::vector<Range>(std::begin(kSteam5317Ranges), std::end(kSteam5317Ranges)) : std::vector<Range>{};
    const std::vector<Byte> reviewed_bytes = shift
        ? std::vector<Byte>(std::begin(kSteam5317Bytes), std::end(kSteam5317Bytes)) : std::vector<Byte>{};
    auto result = address_runtime::scan(image, catalog, {
        {0x0264a3f0, static_cast<uint32_t>(sizeof(graphicst))},
        {0x023cd770, 0x3964},
    }, false, fields, reviewed_ranges, reviewed_bytes);
    result.ui_settings_tail_shift = shift;
    return result;
}

inline void write_number(std::ostream &output, uint32_t value) {
    output.write(reinterpret_cast<const char *>(&value), sizeof(value));
}
inline void write_bindings(std::ostream &output, const State &state) {
    write_number(output, static_cast<uint32_t>(state.ranges.size()));
    for (const auto &range : state.ranges) {
        write_number(output, range.begin); write_number(output, range.end); write_number(output, range.native);
    }
    write_number(output, static_cast<uint32_t>(state.bytes.size()));
    for (const auto &byte : state.bytes) {
        write_number(output, byte.address); output.put(static_cast<char>(byte.reference)); output.put(static_cast<char>(byte.native));
    }
}

// Windows unloads the core on Shift+F5 reactivation. Keep only a sealed byte
// snapshot in an OS mapping, never a core-owned object, pointer or callback.
// One successfully published handle deliberately lives until process exit;
// every subsequent core closes its own temporary handle and mapped views.
class ProcessCache {
    struct Handle {
        HANDLE value = nullptr;
        ~Handle() { if (value) CloseHandle(value); }
    };
    struct View {
        void *value = nullptr;
        ~View() { if (value) UnmapViewOfFile(value); }
    };
    std::wstring name_;
    uintptr_t base_;
    uint32_t timestamp_, size_;
    static constexpr uint32_t maximum_size = 128 * 1024 * 1024;
public:
    ProcessCache(uintptr_t base, uint32_t timestamp, uint32_t size,
                 const std::array<unsigned char, 32> &seed)
        : base_(base), timestamp_(timestamp), size_(size) {
        FILETIME birth{}, exit{}, kernel{}, user{};
        if (!GetProcessTimes(GetCurrentProcess(), &birth, &exit, &kernel, &user)) return;
        const uint64_t created = (uint64_t(birth.dwHighDateTime) << 32) | birth.dwLowDateTime;
        const auto digest = hex_digest(seed);
        // Bump this revision when discovery rules or the snapshot format change.
        name_ = L"Local\\DFCN.NativeAddresses.3." + std::to_wstring(GetCurrentProcessId()) + L"." +
            std::to_wstring(created) + L"." + std::to_wstring(base_) + L"." +
            std::to_wstring(timestamp_) + L"." + std::to_wstring(size_) + L"." +
            std::wstring(digest.begin(), digest.end());
    }

    bool load(State &state) const {
        try {
            if (name_.empty()) return false;
            Handle handle{OpenFileMappingW(FILE_MAP_READ, FALSE, name_.c_str())};
            if (!handle.value) return false;
            View header{MapViewOfFile(handle.value, FILE_MAP_READ, 0, 0, sizeof(uint32_t))};
            if (!header.value) return false;
            const auto length = std::atomic_ref<uint32_t>(*static_cast<uint32_t *>(header.value))
                .load(std::memory_order_acquire);
            if (length < sizeof(uint32_t) + 32 || length > maximum_size) return false;
            View view{MapViewOfFile(handle.value, FILE_MAP_READ, 0, 0, length)};
            if (!view.value) return false;
            const auto *data = static_cast<const unsigned char *>(view.value);
            Reader reader(std::vector<unsigned char>(data + sizeof(uint32_t), data + length), true);
            reader.magic("DFCNPM03");
            const auto low = reader.number(), high = reader.number();
            if (((uint64_t(high) << 32) | low) != base_ || reader.number() != timestamp_ ||
                reader.number() != size_) return false;
            State candidate;
            candidate.size = size_;
            candidate.edition = reader.count(3);
            candidate.complete = reader.count(1) != 0;
            candidate.ui_settings_tail_shift = reader.count(8);
            if (candidate.ui_settings_tail_shift != 0 && candidate.ui_settings_tail_shift != 8) return false;
            read_bindings(reader, candidate.ranges, candidate.bytes);
            candidate.missing.resize(reader.count());
            for (auto &reference : candidate.missing) {
                reference = reader.number();
                if (!reference) return false;
            }
            const auto message = reader.blob(65536);
            candidate.message.assign(message.begin(), message.end());
            reader.finish();
            if (candidate.complete && (!candidate.edition || !candidate.missing.empty())) return false;
            for (const auto &range : candidate.ranges)
                if (uint64_t(range.native) + range.end - range.begin > size_) return false;
            for (const auto &byte : candidate.bytes)
                if (!resolve(candidate.ranges, byte.address)) return false;
            candidate.message = "Game address table reused from process cache; " + candidate.message;
            state = std::move(candidate);
            return true;
        } catch (const std::exception &) { return false; }
    }

    bool save(const State &state) const {
        try {
            if (name_.empty() || state.size != size_ || state.message.size() > 65536) return false;
            std::ostringstream output(std::ios::binary | std::ios::out);
            output.write("DFCNPM03", 8); write_number(output, 1);
            write_number(output, static_cast<uint32_t>(base_));
            write_number(output, static_cast<uint32_t>(uint64_t(base_) >> 32));
            write_number(output, timestamp_); write_number(output, size_);
            write_number(output, state.edition); write_number(output, state.complete ? 1 : 0);
            write_number(output, state.ui_settings_tail_shift);
            write_bindings(output, state);
            write_number(output, static_cast<uint32_t>(state.missing.size()));
            for (const auto reference : state.missing) write_number(output, reference);
            write_number(output, static_cast<uint32_t>(state.message.size()));
            output.write(state.message.data(), static_cast<std::streamsize>(state.message.size()));
            if (!output) return false;
            const auto payload = output.str();
            if (payload.size() > maximum_size - sizeof(uint32_t) - 32) return false;
            const auto digest = sha256(reinterpret_cast<const unsigned char *>(payload.data()), payload.size());
            const auto length = static_cast<uint32_t>(sizeof(uint32_t) + payload.size() + digest.size());
            Handle handle{CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0,
                length, name_.c_str())};
            if (!handle.value || GetLastError() == ERROR_ALREADY_EXISTS) return false;
            View view{MapViewOfFile(handle.value, FILE_MAP_WRITE, 0, 0, length)};
            if (!view.value) return false;
            auto *data = static_cast<unsigned char *>(view.value);
            std::memcpy(data + sizeof(uint32_t), payload.data(), payload.size());
            std::memcpy(data + sizeof(uint32_t) + payload.size(), digest.data(), digest.size());
            std::atomic_ref<uint32_t>(*static_cast<uint32_t *>(view.value))
                .store(length, std::memory_order_release);
            handle.value = nullptr; // OS releases this one retained handle at game exit.
            return true;
        } catch (const std::exception &) { return false; }
    }
};

inline void save_cache(const std::filesystem::path &path, const Image &image,
                       const Catalog &catalog, const State &state) {
    std::error_code error;
    std::filesystem::create_directories(path.parent_path(), error);
    if (error) throw std::runtime_error("Cannot create address cache directory: " + error.message());
    const auto candidate = std::filesystem::path(path.wstring() + L".publish");
    try {
        std::ostringstream output(std::ios::binary | std::ios::out);
        output.write("DFCNPC03", 8); write_number(output, 1);
        output.write(reinterpret_cast<const char *>(catalog.digest.data()), catalog.digest.size());
        output.write(reinterpret_cast<const char *>(image.digest.data()), image.digest.size());
        write_number(output, image.size);
        write_number(output, state.ui_settings_tail_shift);
        write_bindings(output, state);
        if (!output) throw std::runtime_error("Cannot finish address cache");
        const auto payload = output.str();
        const auto digest = sha256(reinterpret_cast<const unsigned char *>(payload.data()), payload.size());
        std::ofstream file(candidate, std::ios::binary | std::ios::trunc);
        file.write(payload.data(), static_cast<std::streamsize>(payload.size()));
        file.write(reinterpret_cast<const char *>(digest.data()), digest.size());
        file.close();
        if (!file) throw std::runtime_error("Cannot finish address cache file");
        if (!MoveFileExW(candidate.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::runtime_error("Cannot publish address cache (Windows " + std::to_string(GetLastError()) + ")");
    } catch (...) {
        std::filesystem::remove(candidate, error); throw;
    }
}

inline bool load_cache(const std::filesystem::path &path, const Image &image,
                       const Catalog &catalog, State &state) {
    try {
        Reader reader(path, true); reader.magic("DFCNPC03");
        std::array<unsigned char, 32> seed{}, binary{};
        reader.read(seed.data(), seed.size()); reader.read(binary.data(), binary.size());
        if (seed != catalog.digest || binary != image.digest || reader.number() != image.size) return false;
        state.edition = 3; state.size = image.size;
        state.ui_settings_tail_shift = reader.count(8);
        if (state.ui_settings_tail_shift != ui_settings_tail_shift(image)) return false;
        read_bindings(reader, state.ranges, state.bytes); reader.finish();
        for (const auto &range : state.ranges)
            if (uint64_t(range.native) + range.end - range.begin > image.size ||
                !image.section(range.native, range.end - range.begin)) return false;
        // This is runtime cache ownership, not a separate build-time check.
        for (const auto &byte : state.bytes) {
            const auto address = resolve(state.ranges, byte.address);
            const auto *actual = image.read(address, 1);
            if (!actual || *actual != byte.native) return false;
        }
        return complete_spans(state, catalog);
    } catch (const std::exception &) { return false; }
}

inline State prepare() {
    State state;
    try {
        const auto *base = reinterpret_cast<const unsigned char *>(GetModuleHandleW(nullptr));
        if (!base) throw std::runtime_error("Cannot locate the running game image");
        const auto *dos = reinterpret_cast<const IMAGE_DOS_HEADER *>(base);
        if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew <= 0 || dos->e_lfanew > 4096)
            throw std::runtime_error("Invalid running game image");
        const auto *nt = reinterpret_cast<const IMAGE_NT_HEADERS64 *>(base + dos->e_lfanew);
        if (nt->Signature != IMAGE_NT_SIGNATURE || nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
            nt->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64 || !nt->OptionalHeader.SizeOfImage)
            throw std::runtime_error("Invalid running game PE64 image");
        Reader seed(runtime::data_path() / "native-addresses/pe-seed.bin");
        const auto seed_digest = sha256(seed.data().data(), seed.data().size());
        ProcessCache process_cache(reinterpret_cast<uintptr_t>(base), nt->FileHeader.TimeDateStamp,
            nt->OptionalHeader.SizeOfImage, seed_digest);
        if (process_cache.load(state)) {
            Catalog current;
            current.required = read_required(seed);
            adapt_required(current, state.ui_settings_tail_shift);
            State coverage = state;
            if (complete_spans(coverage, current) == state.complete) return state;
        }
        // Use the same seed bytes for the process key and discovery, even if a
        // new package is published while this core is being initialized.
        seed.rewind();
        auto catalog = load_catalog(std::move(seed));
        std::vector<wchar_t> filename(32768);
        const auto length = GetModuleFileNameW(nullptr, filename.data(), static_cast<DWORD>(filename.size()));
        if (!length || length >= filename.size()) throw std::runtime_error("Cannot locate the running game executable");
        Image image(std::filesystem::path(std::wstring(filename.data(), length)));
        if (nt->FileHeader.TimeDateStamp != image.timestamp || nt->OptionalHeader.SizeOfImage != image.size)
            throw std::runtime_error("Running game image differs from its executable file");
        adapt_required(catalog, ui_settings_tail_shift(image));
        state = {};
        state.size = image.size;
        const auto retain = [&process_cache](State &value) {
            if (!process_cache.save(value)) value.message += "; process address cache could not be retained";
        };
        const auto identity = hex_digest(image.digest);
        const auto version = image.version();
        const auto version_label = version.empty() ? std::string{} : "version=" + version + " ";
        for (size_t index = 0; index < catalog.known.size(); ++index) {
            const auto &profile = catalog.known[index];
            if (image.digest != profile.digest || image.timestamp != profile.timestamp || image.size != profile.size) continue;
            state.edition = static_cast<unsigned>(index + 1);
            state.ranges = profile.ranges; state.bytes = profile.bytes;
            complete_spans(state, catalog);
            if (!state.complete) throw std::runtime_error("Packaged address table is incomplete for " + profile.label);
            state.message = "Game address table: " + profile.label + " SHA256=" + identity;
            retain(state);
            return state;
        }
        const auto cache = runtime::data_path() / "native-addresses/cache" /
            (identity + "-" + hex_digest(catalog.digest) + ".bin");
        if (load_cache(cache, image, catalog, state)) {
            state.message = "Game address table loaded from version cache: " + version_label + "SHA256=" + identity;
            retain(state);
            return state;
        }
        try {
            image.prepare_scan();
            state = scan(image, catalog);
        } catch (const std::runtime_error &error) {
            // These failures come from immutable PE/seed evidence. Remember
            // the refusal for this process; transient file/allocation failures
            // outside discovery remain retryable on the next core reload.
            state = {}; state.size = image.size; state.edition = 3;
            complete_spans(state, catalog);
            state.message = "Game address scan refused: " + std::string(error.what()) +
                "; native hooks remain disabled";
            retain(state);
            return state;
        }
        const auto prefix = "Game version has no packaged address table; automatic PE scan " + version_label + "SHA256=" + identity;
        state.message = prefix + "; resolved " + std::to_string(catalog.required.size() - state.missing.size()) +
            "/" + std::to_string(catalog.required.size()) + " required resources";
        if (!state.complete) {
            std::ostringstream missing;
            missing << "; unresolved RVAs:" << std::hex;
            for (size_t index = 0; index < std::min<size_t>(state.missing.size(), 16); ++index)
                missing << " 0x" << state.missing[index];
            state.message += missing.str() + "; native hooks remain disabled";
        }
        try { save_cache(cache, image, catalog, state); state.message += "; saved " + runtime::utf8(cache); }
        catch (const std::exception &error) { state.message += "; cache write failed: " + std::string(error.what()); }
        retain(state);
    } catch (const std::exception &error) {
        state.complete = false; state.message = "Game address resolution failed: " + std::string(error.what());
    }
    return state;
}

inline const State &state() {
    static const State value = prepare();
    return value;
}
} // namespace dfcn::pe_runtime
#endif
