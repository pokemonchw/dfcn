// Real world_river provenance, shared by the worldgen, embark and travel
// name writers. No text lookup or name.type heuristic establishes identity.
static std::optional<RiverNameIdentity> capture_native_river_identity(uintptr_t river) {
    const uintptr_t base = native_history_profile_base();
    uintptr_t world = 0;
    NativeBorrowedVector<uintptr_t> rivers, words;
    if (!base || !river ||
        !native_history_copy(native_history_global(0x24ebb58), world) || !world ||
        !native_history_read_vector(native_history_object_member(world, "world_data", "rivers"), rivers) ||
        !rivers.valid(1048576) ||
        !native_history_read_vector(native_history_global(0x24ed770), words)) return {};

    std::string world_name, save_dir;
    if (!capture_native_history_original_name(base, world, world_name)) return {};
    native_history_copy_string(native_history_global(0x23d14f0 + 0x26d468), save_dir);
    std::string world_key = std::to_string(world) + ":" + std::to_string(
        reinterpret_cast<uintptr_t>(rivers.begin)) + ":" + std::to_string(
        reinterpret_cast<uintptr_t>(words.begin)) + ":" + std::to_string(rivers.size()) +
        ":" + std::to_string(world_name.size()) +
        ":" + world_name + ":" + save_dir;
    int16_t stage = 0;
    const bool final = native_history_copy(native_history_global(0x23d14f0 + 0x11a670), stage) &&
        (stage == -1 || stage == 10); // world_generatorst::None / Done.
    struct Entry { size_t index; };
    struct Cache {
        std::string world;
        bool finalized = false;
        std::unordered_map<uintptr_t, Entry> rivers;
    };
    static Cache cache;
    static std::mutex mutex;
    std::lock_guard<std::mutex> lock(mutex);
    if (cache.world != world_key || cache.finalized != final) {
        cache = {}; cache.world = world_key; cache.finalized = final;
    }
    size_t index = SIZE_MAX;
    auto cached = cache.rivers.find(river);
    if (cached != cache.rivers.end() &&
        native_history_vector_at(rivers, cached->second.index) == river) index = cached->second.index;
    else for (size_t i = 0; i < rivers.size(); ++i)
        if (native_history_vector_at(rivers, i) == river) { index = i; break; }
    if (index == SIZE_MAX) return {};
    RiverNameIdentity result;
    result.world_key = std::move(world_key); result.index = index; result.finalized = final;
    // Keep all seven raw slots, including malformed or hidden constituents.
    if (!capture_native_history_name(base, river, result.name, nullptr, true) ||
        !result.name.has_name) return {};
    capture_native_history_original_name(base, river, result.name.native_name);
    // This object has no current display segment. Do not promote its maximum
    // flow to the category of a Brook/Stream caption. The owning draw supplies
    // its native category label; absent that evidence the generic is neutral.
    if (final) {
        if (cache.rivers.size() >= 65536) cache.rivers.clear();
        cache.rivers.insert_or_assign(river, Entry{index});
    }
    return result;
}

// The paired formatter/draw calls belong to the same native renderer. Buffer
// identity is used only until that exact draw; subsequent buffer reuse cannot
// inherit this provenance. The published row contains owned values only.
struct NativeRiverPending {
    const NativeString *buffer = nullptr;
    uint64_t epoch = 0;
    NativeRiverNameFact fact;
};
static NativeRiverPending &native_river_pending() {
    // The captured identity owns strings. A thread-exit destructor would hold
    // the core DLL after shutdown and block Shift+F5 from loading it again.
    // Keep ownership in this core and only a trivial pointer in the TLS slot.
    return reloadable_thread_state<NativeRiverPending, struct NativeRiverPendingTag>();
}

static void capture_native_river_english(const void *river, NativeString *output,
        bool capitalized, bool unused) {
    NativeInputCallbackScope callback;
    auto &pending = native_river_pending();
    pending = {};
    const uintptr_t base = native_history_profile_base();
#ifdef _WIN32
    const auto original = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(
        native_pe_address(base, 0xa946e0));
#else
    const auto original = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(
        native_elf_history_address(0x12c58d0));
#endif
    if (original) callback.call_native([&] { original(river, output, capitalized, unused); });
    try {
        auto identity = capture_native_river_identity(reinterpret_cast<uintptr_t>(river));
        // The original caller already proves a river field. A provisional
        // world/catalog read may fail without losing the formatter's WORD/POS.
        // Keep those meanings; only stable identity/size requires the catalog.
        if (!identity) {
            RiverNameIdentity provisional;
            if (capture_native_history_name(base, reinterpret_cast<uintptr_t>(river),
                    provisional.name, nullptr, true) && provisional.name.has_name)
                identity = std::move(provisional);
        }
        std::string_view full;
        if (native_string_view(output, &full, 4096) && !full.empty()) {
            pending.buffer = output;
            pending.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            pending.fact = {
                identity.value_or(RiverNameIdentity{}), RiverDisplayField::English, std::string(full)};
        }
    } catch (...) {}
}

static void capture_native_river_name_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width) {
    graphics = native_graphics_view(graphics);
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    NativeInputCallbackScope callback;
    auto &state = native_river_pending();
    auto pending = std::move(state);
    state = {};
    const bool owned = pending.buffer == source &&
        pending.epoch == g_embark_item_capture_epoch.load(std::memory_order_acquire);
    NativeRiverNameFactScope scope(owned ? &pending.fact : nullptr);
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { native_graphics_call(original, graphics, source, just, width); });
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, {},
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

static bool append_native_river_name_calls(std::vector<NativeCall> &calls) {
#ifdef _WIN32
    // Verified worldgen, adventure, detailed embark and coarse embark producers.
    std::vector<NativeCall> river_calls{
        {0xdfe524, 0xa946e0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0xdfe5d8, 0xad9960, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
        {0x80fb2f, 0xa946e0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x80fbdf, 0xad9960, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
        {0x1049ee6, 0xa946e0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x1049fa2, 0xad9960, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
        {0x104dcad, 0xa946e0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x104dd69, 0xad9960, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
    };
    if (!native_reference_calls(river_calls, 0)) return false;
#else
    // ELF 53.16: travel, worldgen hover, detailed embark, coarse embark.
    // Each formatter's RDI is the object returned by c558d0(world,x,y,&segment).
    const std::vector<NativeCall> river_calls{
        {0x125fee0, 0x12c58d0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x125ff13, 0x425170, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
        {0x1deca5a, 0x12c58d0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x1deca91, 0x425170, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
        {0x1f4d4f0, 0x12c58d0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x1f4d525, 0x425170, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
        {0x1f4ea2d, 0x12c58d0, reinterpret_cast<const void *>(&capture_native_river_english)},
        {0x1f4ea62, 0x425170, reinterpret_cast<const void *>(&capture_native_river_name_draw)},
    };
#endif
    calls.insert(calls.end(), river_calls.begin(), river_calls.end());
    return true;
}
