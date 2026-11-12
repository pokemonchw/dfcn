// The decompiled workquota renderer constructs one complete workshop field
// per addst. Its stored count, editor, zero explanation and color warning
// have separate producers; building::getName owns the assigned-shop branch.
// Both PE editions and their frame operands are retained in
// data/extracted/work-order-shops, independently of the runtime text grid.
static std::optional<NativeWorkOrderShopCaption> capture_native_work_order_shop_caption(
        uintptr_t caller, uintptr_t source) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !caller || !source) return std::nullopt;
    using Kind = NativeWorkOrderShopCaption::Kind;
    struct Site { uintptr_t address; Kind kind; ptrdiff_t column_slot; };
    const Site sites[]{
        {native_pe_address(base, 0x393d18), Kind::Unlimited, -0x110},
        {native_pe_address(base, 0x393f47), Kind::Limit, -0x158},
        {native_pe_address(base, 0x393fd8), Kind::Explanation, -0x110},
        {native_pe_address(base, 0x39452d), Kind::ColorWarning, -0xf0},
        {native_pe_address(base, 0x39476b), Kind::Building, -0xf0},
    };
    const auto found = std::find_if(std::begin(sites), std::end(sites),
        [&](const Site &site) { return site.address && site.address == caller; });
    if (found == std::end(sites)) return std::nullopt;
    int32_t column = -1;
    std::string_view visible;
    if (source < static_cast<uintptr_t>(-found->column_slot) ||
            !native_history_copy(source + found->column_slot, column) ||
            column < 0 || column > 1000 ||
            !native_string_view(reinterpret_cast<const NativeString *>(source), &visible, 4096))
        return std::nullopt;
    NativeWorkOrderShopCaption caption;
    caption.kind = found->kind;
    // The native right-hand ENTER/INCREASE/DECREASE_AMOUNT controls are
    // at column+20/+24/+28. The left count's split position is unrelated.
    caption.right = column + 20;
    caption.complete_source.assign(visible);
    if (caption.kind == Kind::Limit && visible.ends_with(" shop(s) max"))
        caption.kind = Kind::Editing;
    if (caption.kind != Kind::Building) return caption;

    // source is rbp+0x98; rbp-0x60 retains this exact manager_order*. The
    // native renderer looks up its building_id (+0x64) in world.buildings.
    // Recover that owner rather than guessing custom names from spelling.
    caption.authored = true;
    uintptr_t order = 0, building = 0;
    int32_t id = -1;
    if (source < 0xf8 || !native_history_copy(source - 0xf8, order) ||
            !order || !native_history_copy(order + 0x64, id) ||
            !native_history_find_structure_id(native_pe_address(base, 0x23edf10),
                0x50, id, building) || !building)
        return caption;
    std::string name;
    if (!native_history_copy_string(building + 0xd0, name)) return caption;
    if (!name.empty()) {
        caption.complete_source = std::move(name);
        return caption;
    }
    // getName's original default branch also supplies custom RAW workshop
    // names and item-backed instrument/tool names. Reuse that formatter in
    // a native-owned scratch string so inline ellipsis cannot lose its tail.
    uintptr_t vtable = 0, getter = 0;
    const auto &image = pe_runtime::state();
    if (!native_history_copy(building, vtable) ||
            !native_history_copy(vtable + 0x188, getter) ||
            getter < base || getter - base >= image.size)
        return caption;
    NativeHistoryPageString output;
    NativeHistoryCallbackScope callback;
    reinterpret_cast<void (*)(void *, NativeString *)>(getter)(
        reinterpret_cast<void *>(building), &output.value);
    std::string_view complete;
    if (!native_string_view(&output.value, &complete, 4096) || complete.empty())
        return caption;
    caption.authored = false;
    caption.complete_source.assign(complete);
    return caption;
#else
    using Kind = NativeWorkOrderShopCaption::Kind;
    struct Site { uintptr_t address; Kind kind; size_t source_offset; };
    const Site sites[]{
        {native_elf_5317_address(0xd9719c), Kind::Unlimited, 0xf0},
        {native_elf_5317_address(0xd95d95), Kind::Limit, 0x110},
        {native_elf_5317_address(0xd98045), Kind::Explanation, 0xf0},
        {native_elf_5317_address(0xd96476), Kind::ColorWarning, 0xf0},
        {native_elf_5317_address(0xd959d9), Kind::Building, 0xf0},
    };
    const auto site = std::find_if(std::begin(sites), std::end(sites),
        [&](const Site &entry) { return entry.address && entry.address == caller; });
    if (site == std::end(sites)) return std::nullopt;
    const uintptr_t frame = source + site->source_offset;
    if (frame < 0x1cc || frame < source) return std::nullopt;
    int32_t column = -1;
    uintptr_t order = 0;
    NativeWorkOrderShopCaption caption;
    caption.kind = site->kind;
    if (!native_history_copy(frame - 0x1cc, column) || column < 0 || column > 1000 ||
            !native_history_copy(frame - 0x190, order) || !order ||
            !native_history_copy_string(source, caption.complete_source) ||
            caption.complete_source.empty() || caption.complete_source.size() > 65536) return std::nullopt;
    caption.right = column + 20;
    if (caption.kind == Kind::Limit && caption.complete_source.ends_with(" shop(s) max"))
        caption.kind = Kind::Editing;
    if (caption.kind != Kind::Building) return caption;
    caption.authored = true;
    uintptr_t building = 0;
    int32_t id = -1;
    if (!native_history_copy(native_history_object_member(order, "manager_order", "workshop_id", 4), id) ||
            !native_history_find_structure_id(native_history_global(0x23edf10), 0x50, id, building) || !building)
        return caption;
    std::string authored;
    if (!native_history_copy_string(native_history_object_member(building, "building", "name", 32), authored))
        return caption;
    if (!authored.empty()) {
        caption.complete_source = std::move(authored);
        return caption;
    }
    uintptr_t table = 0, getter = 0;
    const auto &image = elf_runtime::state().executable;
    if (!native_history_copy(building, table) || !native_history_copy(table + 0x188, getter) ||
            getter < image.bias + 0x400000 || getter >= image.bias + 0x2200000) return caption;
    NativeHistoryPageString output;
    NativeHistoryCallbackScope callback;
    reinterpret_cast<void (*)(void *, NativeString *)>(getter)(reinterpret_cast<void *>(building), &output.value);
    std::string_view complete;
    if (native_string_view(&output.value, &complete, 65536) && !complete.empty()) {
        caption.authored = false;
        caption.complete_source.assign(complete);
    }
    return caption;
#endif
}
