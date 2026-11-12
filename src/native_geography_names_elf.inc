#ifndef _WIN32
static NativeEntryHook g_native_geography_english_hook;

struct NativeGeographyPending {
    const NativeString *source = nullptr;
    uint64_t epoch = 0;
    std::string formatted;
    NativeGeographyNameFact fact;
};

static NativeGeographyPending &native_geography_pending() {
    return reloadable_thread_state<NativeGeographyPending, struct GeographyPendingTag>();
}

static int native_geography_object_kind(uintptr_t object) {
    struct Catalog {
        uintptr_t world = 0;
        std::array<uintptr_t, 4> stamp{};
        std::unordered_set<uintptr_t> rivers, peaks;
    };
    auto &cache = reloadable_thread_state<Catalog, struct GeographyObjectCatalogTag>();
    uintptr_t world = 0;
    NativeBorrowedVector<uintptr_t> rivers, peaks;
    if (!object || !native_history_copy(native_history_global(0x24ebb58), world) || !world ||
            !native_history_read_vector(native_history_object_member(world, "world_data", "rivers"), rivers) ||
            !native_history_read_vector(native_history_object_member(world, "world_data", "mountain_peaks"), peaks) ||
            !rivers.valid(1048576) || !peaks.valid(1048576)) return 0;
    const std::array<uintptr_t, 4> stamp{reinterpret_cast<uintptr_t>(rivers.begin), rivers.size(),
        reinterpret_cast<uintptr_t>(peaks.begin), peaks.size()};
    if (cache.world != world || cache.stamp != stamp) {
        cache = {}; cache.world = world; cache.stamp = stamp;
        for (size_t i = 0; i < rivers.size(); ++i) cache.rivers.insert(native_history_vector_at(rivers, i));
        for (size_t i = 0; i < peaks.size(); ++i) cache.peaks.insert(native_history_vector_at(peaks, i));
    }
    return cache.rivers.contains(object) ? 1 : cache.peaks.contains(object) ? 2 : 0;
}

static void capture_native_geography_english(const void *name, NativeString *output,
        bool capitalized, bool unused) {
    NativeInputCallbackScope callback;
    auto &pending = native_geography_pending();
    pending = {};
    try { forget_native_squad_alias(reinterpret_cast<uintptr_t>(output)); } catch (...) {}
    const auto original = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(g_native_geography_english_hook.original);
    if (!original) return;
    callback.call_native([&] { original(name, output, capitalized, unused); });
    try {
        const uintptr_t object = reinterpret_cast<uintptr_t>(name);
        if (native_squad_generated_field(object)) {
            NativeHistoryName snapshot;
            std::string_view formatted;
            if (native_string_view(output, &formatted, 65536) &&
                    capture_native_history_name(native_history_profile_base(), object, snapshot))
                remember_native_squad_generated(reinterpret_cast<uintptr_t>(output), formatted, std::move(snapshot));
        }
        const int kind = native_geography_object_kind(object);
        if (!kind) return;
        std::string_view formatted;
        if (!native_string_view(output, &formatted, 4096) || formatted.empty()) return;
        NativeGeographyNameFact fact;
        if (kind == 1) {
            auto identity = capture_native_river_identity(object);
            if (!identity) return;
            fact.river = NativeRiverNameFact{std::move(*identity), RiverDisplayField::English, std::string(formatted)};
        } else {
            uintptr_t bytes = 0;
            int32_t count = 0;
            uint8_t flags = 0;
            const auto field = native_history_object_member(object, "world_mountain_peak", "flags", 8);
            if (!field || !native_history_copy(field, bytes) || !bytes ||
                    !native_history_copy(field + 8, count) || count <= 0 ||
                    !native_history_copy(bytes, flags) || !(flags & 1)) return;
            NativeVolcanoNameFact volcano;
            if (!capture_native_history_name(native_history_profile_base(), object, volcano.name, nullptr, true) ||
                    !volcano.name.has_name) return;
            volcano.complete_source.assign(formatted);
            fact.volcano = std::move(volcano);
        }
        pending.source = output;
        pending.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        pending.formatted.assign(formatted);
        pending.fact = std::move(fact);
    } catch (...) { pending = {}; }
}

static NativeGeographyNameFact take_native_geography_name_fact(const NativeString *source) {
    auto &pending = native_geography_pending();
    if (pending.source != source) return {};
    auto captured = std::move(pending);
    pending = {};
    std::string_view complete;
    if (captured.epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
            !native_string_view(source, &complete, 4096) || captured.formatted.empty() ||
            !complete.ends_with(captured.formatted)) return {};
    if (captured.fact.river) captured.fact.river->complete_source.assign(complete);
    if (captured.fact.volcano) captured.fact.volcano->complete_source.assign(complete);
    return std::move(captured.fact);
}

static bool install_native_geography_name_hook() {
    if (g_native_geography_english_hook.installed) return true;
    auto *entry = reinterpret_cast<unsigned char *>(native_elf_history_address(0x12c58d0));
    // EnglishName's public ABI is unchanged; retain complete CET/push entry
    // instructions rather than any caller's register or stack arrangement.
    std::array<unsigned char, 6> prefix{};
    if (!entry || !native_history_copy_bytes(reinterpret_cast<uintptr_t>(entry), prefix.data(), prefix.size()) ||
            std::memcmp(prefix.data(), "\xf3\x0f\x1e\xfa", 4)) return false;
    const size_t size = prefix[4] >= 0x50 && prefix[4] <= 0x57 ? 5 :
        prefix[4] == 0x41 && prefix[5] >= 0x50 && prefix[5] <= 0x57 ? 6 : 0;
    if (!size) return false;
    return g_native_geography_english_hook.prepare(entry, {prefix.begin(), prefix.begin() + size},
            reinterpret_cast<const void *>(&capture_native_geography_english), {}, "Native geography name source") &&
        g_native_geography_english_hook.install("Native geography name source");
}
#else
static NativeGeographyNameFact take_native_geography_name_fact(const NativeString *) { return {}; }
#endif
