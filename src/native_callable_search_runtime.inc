// Included after native_rebase_entry_evidence. Like entry certificates, live
// permission is process-local and is checked before any of our native patches.
static std::vector<const address_runtime::CallableSearchBinding *> g_native_live_callable_searches;

static void prepare_native_callable_search_certificates(const address_runtime::State &state, uintptr_t base) {
    g_native_live_callable_searches.clear();
    constexpr const char *label = "Native callable search live evidence";
    for (const auto &binding : state.callable_searches) {
        const auto recorded = [&](uint32_t address, size_t count) -> const unsigned char * {
            auto found = std::upper_bound(binding.evidence.begin(), binding.evidence.end(), address,
                [](uint32_t location, const auto &span) { return location < span.address; });
            if (found == binding.evidence.begin()) return nullptr;
            --found;
            const auto offset = uint64_t(address) - found->address;
            if (offset > found->bytes.size() || count > found->bytes.size() - offset) return nullptr;
            return found->bytes.data() + static_cast<size_t>(offset);
        };
        pe_runtime::entry_prefix_detail::HeaderDependencies headers;
        bool valid = pe_runtime::entry_prefix_detail::header_dependencies(recorded, state.size, headers);
        NativePatchPages pages;
        const auto page_size = native_patch_page_size();
        uint32_t failed = binding.predicate;
        for (const auto &span : binding.evidence) {
            if (!valid) break;
            failed = span.address;
            auto expected = span.bytes;
            valid = native_rebase_entry_evidence(binding, base, span.address, expected) &&
                collect_native_patch_pages(pages, base + span.address, expected.size(), page_size, false, label);
            if (!valid) break;
            const auto *actual = reinterpret_cast<const unsigned char *>(base + span.address);
            for (size_t i = 0; i < expected.size(); ++i) {
                if (actual[i] == expected[i]) continue;
                const auto address = span.address + static_cast<uint32_t>(i);
                if (headers.header(address) && !headers.required(address)) continue;
                failed = address; valid = false; break;
            }
        }
        // The immutable lookup table proves the imported symbol. The live IAT
        // must still dispatch to that loaded CRT export, not an arbitrary
        // returning hook. No library is loaded or executable code invoked.
        for (const auto slot : binding.throw_slots) {
            if (!valid) break;
            failed = slot;
            valid = collect_native_patch_pages(pages, base + slot, sizeof(uintptr_t), page_size, false, label);
            if (!valid) break;
            uintptr_t target = 0; std::memcpy(&target, reinterpret_cast<const void *>(base + slot), sizeof(target));
            valid = false;
            for (const auto *library : pe_runtime::callable_exception_detail::throw_libraries) {
                const auto module = GetModuleHandleA(library);
                const auto symbol = module ? GetProcAddress(module, "_CxxThrowException") : nullptr;
                if (symbol && target == reinterpret_cast<uintptr_t>(symbol)) { valid = true; break; }
            }
        }
        if (valid) g_native_live_callable_searches.push_back(&binding);
        else {
            std::ostringstream message;
            message << label << ": contract=0x" << std::hex << binding.contract << " dependency=0x" << failed
                << "; leaving native search active";
            log_line("WARN", message.str());
        }
    }
}

static bool native_callable_search_live_ready(const address_runtime::CallableSearchBinding *binding) {
    return binding && std::find(g_native_live_callable_searches.begin(),
        g_native_live_callable_searches.end(), binding) != g_native_live_callable_searches.end();
}
