#ifdef _WIN32
// Scan certificates are serialized; permission to consume them in this live
// process is not. Verify before any of our body/selector patches are installed.
struct NativeLiveEntryPrefix {
    const address_runtime::State *state = nullptr;
    uint32_t reference = 0, native = 0;
    std::vector<unsigned char> prefix;
};
static std::vector<NativeLiveEntryPrefix> g_native_live_entry_prefixes;

template<typename Recorded>
static bool native_live_external_entry_references(uintptr_t base, const address_runtime::State &state,
        const address_runtime::EntryPrefixBinding &entry, NativePatchPages &pages, size_t page_size, uint32_t &failed,
        const Recorded &recorded) {
    constexpr const char *label = "Native entry CFG live ownership";
    const auto read = [&](uint32_t address, size_t count) -> const unsigned char * {
        if (!count || uint64_t(address) + count > state.size ||
                !collect_native_patch_pages(pages, base + address, count, page_size, false, label)) return nullptr;
        return reinterpret_cast<const unsigned char *>(base + address);
    };
    const auto *dos_bytes = read(0, sizeof(IMAGE_DOS_HEADER));
    if (!dos_bytes) return false;
    IMAGE_DOS_HEADER dos; std::memcpy(&dos, dos_bytes, sizeof(dos));
    if (dos.e_magic != IMAGE_DOS_SIGNATURE || dos.e_lfanew <= 0) return false;
    const auto *nt_bytes = read(static_cast<uint32_t>(dos.e_lfanew), sizeof(IMAGE_NT_HEADERS64));
    if (!nt_bytes) return false;
    IMAGE_NT_HEADERS64 nt; std::memcpy(&nt, nt_bytes, sizeof(nt));
    if (nt.Signature != IMAGE_NT_SIGNATURE || nt.OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC ||
            nt.OptionalHeader.SizeOfImage != state.size || !nt.FileHeader.NumberOfSections ||
            nt.FileHeader.NumberOfSections > 96) return false;
    const uint64_t table = uint64_t(dos.e_lfanew) + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER) + nt.FileHeader.SizeOfOptionalHeader;
    if (table > UINT32_MAX) return false;
    const auto *table_bytes = read(static_cast<uint32_t>(table), size_t(nt.FileHeader.NumberOfSections) * sizeof(IMAGE_SECTION_HEADER));
    if (!table_bytes) return false;
    std::vector<pe_runtime::Section> sections;
    for (unsigned index = 0; index < nt.FileHeader.NumberOfSections; ++index) {
        IMAGE_SECTION_HEADER part; std::memcpy(&part, table_bytes + size_t(index) * sizeof(part), sizeof(part));
        const auto extent = (std::max)(part.Misc.VirtualSize, part.SizeOfRawData);
        if (uint64_t(part.VirtualAddress) + extent > state.size) return false;
        sections.push_back({part.VirtualAddress, part.VirtualAddress + extent,
            part.PointerToRawData, part.SizeOfRawData, part.Characteristics});
    }
    display_decode::DecodeFailure failure;
    const auto classified = [&](uint32_t address, uint32_t width) {
        const std::pair<uint32_t, uint32_t> key{address, width};
        const auto found = std::lower_bound(entry.external_literal_boundaries.begin(),
            entry.external_literal_boundaries.end(), key, [](const auto &value, const auto &wanted) {
                return std::pair{value.candidate, value.width} < wanted;
            });
        uint32_t length = 0;
        return found != entry.external_literal_boundaries.end() &&
            found->candidate == address && found->width == width &&
            pe_runtime::entry_prefix_detail::external_literal_encoding(*found, state.size, recorded, length);
    };
    bool valid = pe_runtime::entry_prefix_detail::external_reference_veto(sections, IMAGE_SCN_MEM_EXECUTE,
        state.size, base, entry.native, entry.end, entry.prefix.size(), true, read, failure, classified);
    // The complete sealed caller has already matched the live image. Recheck
    // negative external-entry evidence for each classified instruction too;
    // a new extension cannot make its SIB bytes an alternate executable entry.
    std::set<uint32_t> checked;
    for (const auto &value : entry.external_literal_boundaries) {
        if (!valid) break;
        if (!checked.insert(value.instruction).second) continue;
        uint32_t length = 0;
        valid = pe_runtime::entry_prefix_detail::external_literal_encoding(value, state.size, recorded, length) &&
            pe_runtime::entry_prefix_detail::external_reference_veto(sections, IMAGE_SCN_MEM_EXECUTE,
                state.size, base, value.instruction, value.instruction + length, length, true, read, failure,
                [](uint32_t, uint32_t) { return false; }, true);
    }
    if (!valid && failure.address) failed = failure.address;
    return valid;
}

template<typename Certificate>
static bool native_rebase_entry_evidence(const Certificate &entry,
        uintptr_t base, uint32_t address, std::vector<unsigned char> &bytes) {
    const uint64_t end = uint64_t(address) + bytes.size();
    auto at = std::lower_bound(entry.relocations.begin(), entry.relocations.end(), address,
        [](const auto &value, uint32_t location) { return uint64_t(value.first) + 8 <= location; });
    for (; at != entry.relocations.end() && at->first < end; ++at) {
        if (at->first < address || uint64_t(at->first) + 8 > end) return false;
        uint64_t original = 0;
        const auto offset = at->first - address;
        std::memcpy(&original, bytes.data() + offset, 8);
        if (original != at->second) return false;
        const uint64_t relocated = original + uint64_t(base) - entry.preferred_base;
        std::memcpy(bytes.data() + offset, &relocated, 8);
    }
    return true;
}

#include "native_callable_search_runtime.inc"

static void prepare_native_entry_prefix_certificates() noexcept {
    g_native_live_entry_prefixes.clear();
    g_native_live_callable_searches.clear();
    try {
        const auto &state = pe_runtime::state();
        if (!pe_runtime::usable(state)) return;
        const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
        if (!base) return;
        try { prepare_native_callable_search_certificates(state, base); }
        catch (...) {
            g_native_live_callable_searches.clear();
            try { log_line("WARN", "Native callable search live evidence unavailable; retaining native search"); } catch (...) {}
        }
        const auto page_size = native_patch_page_size();
        for (const auto &entry : state.entry_prefixes) {
            constexpr const char *label = "Native entry CFG live ownership";
            bool accepted = pe_runtime::entry_prefix_detail::contract(state, entry);
            NativePatchPages pages;
            uint32_t failed = entry.native;
            bool byte_difference = false;
            unsigned expected_byte = 0, actual_byte = 0;
            pe_runtime::entry_prefix_detail::HeaderDependencies headers;
            // Derive every header boundary and required field from the sealed
            // certificate, never from mutable live bytes. This accepts both
            // whole-header spans and field-only journals.
            const auto recorded = [&](uint32_t address, size_t count) -> const unsigned char * {
                auto found = std::upper_bound(entry.evidence.begin(), entry.evidence.end(), address,
                    [](uint32_t location, const auto &span) { return location < span.address; });
                if (found == entry.evidence.begin()) return nullptr;
                --found;
                const auto offset = uint64_t(address) - found->address;
                if (offset > found->bytes.size() || count > found->bytes.size() - offset) return nullptr;
                return found->bytes.data() + static_cast<size_t>(offset);
            };
            const bool header_ready = pe_runtime::entry_prefix_detail::header_dependencies(recorded, state.size, headers);
            accepted = accepted && header_ready;
            std::vector<std::pair<uint32_t, uint32_t>> classified_rows;
            for (const auto &boundary : entry.external_literal_boundaries) {
                if (!accepted) break;
                uint32_t length = 0;
                accepted = pe_runtime::entry_prefix_detail::external_literal_encoding(
                    boundary, state.size, recorded, length);
                if (accepted) classified_rows.emplace_back(boundary.instruction, boundary.instruction + length);
            }
            for (const auto &span : entry.evidence) {
                if (!accepted) break;
                auto expected = span.bytes;
                failed = span.address;
                accepted = native_rebase_entry_evidence(entry, base, span.address, expected) &&
                    collect_native_patch_pages(pages, base + span.address, expected.size(),
                        page_size, false, label);
                if (!accepted) break;
                const auto *actual = reinterpret_cast<const unsigned char *>(base + span.address);
                if (std::memcmp(actual, expected.data(), expected.size()) == 0) continue;
                for (size_t i = 0; i < expected.size(); ++i) {
                    if (actual[i] == expected[i]) continue;
                    const auto address = span.address + static_cast<uint32_t>(i);
                    if (headers.header(address) && !headers.required(address)) continue;
                    accepted = false;
                    failed = address;
                    byte_difference = true;
                    expected_byte = expected[i]; actual_byte = actual[i];
                    break;
                }
            }
            // A loader or another extension may replace a vtable entry with
            // its own wrapper. That is not permission to patch the wrapper.
            // It is safe to keep the independently certified native body in
            // that chain, provided no actual absolute label enters its middle.
            for (const auto &[address, original] : entry.relocations) {
                (void)original;
                if (!accepted) break;
                failed = address;
                accepted = collect_native_patch_pages(pages, base + address, sizeof(uint64_t),
                    page_size, false, label);
                if (!accepted) break;
                uint64_t pointer = 0;
                std::memcpy(&pointer, reinterpret_cast<const void *>(base + address), 8);
                if (pointer > base + entry.native && pointer < base + entry.native + entry.prefix.size()) accepted = false;
                for (const auto &[begin, end] : classified_rows)
                    if (pointer >= base + begin && pointer < base + end) accepted = false;
            }
            for (const auto address : entry.imported_tail_slots) {
                if (!accepted) break;
                failed = address;
                accepted = collect_native_patch_pages(pages, base + address, sizeof(uint64_t),
                    page_size, false, label);
                if (!accepted) break;
                uint64_t pointer = 0;
                std::memcpy(&pointer, reinterpret_cast<const void *>(base + address), 8);
                if (!pointer || (pointer > base + entry.native &&
                        pointer < base + entry.native + entry.prefix.size())) accepted = false;
                for (const auto &[begin, end] : classified_rows)
                    if (pointer >= base + begin && pointer < base + end) accepted = false;
            }
            auto prefix = entry.prefix;
            if (accepted) accepted = native_live_external_entry_references(base, state, entry, pages, page_size, failed, recorded);
            if (accepted) accepted = native_rebase_entry_evidence(entry, base, entry.native, prefix);
            if (accepted) {
                g_native_live_entry_prefixes.push_back({&state, entry.reference, entry.native, std::move(prefix)});
            } else {
                std::ostringstream message;
                message << label << ": reference=0x" << std::hex << entry.reference <<
                    " dependency=0x" << failed;
                if (!header_ready) message << " incomplete sealed PE header contract";
                if (byte_difference) message << " expected-byte=0x" << expected_byte << " actual-byte=0x" << actual_byte;
                message << "; leaving this entry native";
                log_line("WARN", message.str());
            }
        }
    } catch (const std::exception &error) {
        try { log_line("WARN", std::string("Native entry CFG live ownership: ") + error.what()); } catch (...) {}
    } catch (...) {
        try { log_line("WARN", "Native entry CFG live ownership could not be prepared"); } catch (...) {}
    }
}

static const NativeLiveEntryPrefix *native_live_entry_prefix(uint32_t reference) {
    const auto &state = pe_runtime::state();
    const auto found = std::find_if(g_native_live_entry_prefixes.begin(), g_native_live_entry_prefixes.end(),
        [&](const auto &value) { return value.state == &state && value.reference == reference; });
    return found == g_native_live_entry_prefixes.end() ? nullptr : &*found;
}
#endif
