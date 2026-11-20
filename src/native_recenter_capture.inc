// The follow branches resize their local string inline and overwrite its
// last three bytes with dots. Capture the actual formatter before that edit.
struct NativeRecenterPending {
    uintptr_t owner = 0;
    uint64_t epoch = 0;
    std::shared_ptr<NativeRecenterFollow> follow;
};
static NativeRecenterPending &native_recenter_pending() {
    return reloadable_thread_state<NativeRecenterPending, struct RecenterPendingTag>();
}
static NativeCallHook g_recenter_calls;
static NativeUnitIdentityFormatFn g_recenter_unit_name = nullptr;
static NativeTradeItemNameFn g_recenter_item_name = nullptr;

static void remember_recenter_follow(const NativeString *output,
        std::shared_ptr<NativeRecenterFollow> follow) {
    native_recenter_pending() = {reinterpret_cast<uintptr_t>(output),
        g_embark_item_capture_epoch.load(std::memory_order_acquire), std::move(follow)};
}

template<bool Unavailable>
static void capture_recenter_unit(void *unit, NativeString *output, bool option) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_recenter_unit_name(unit, output, option); });
    try {
        native_recenter_pending() = {};
        auto follow = std::make_shared<NativeRecenterFollow>();
        const auto owner = reinterpret_cast<uintptr_t>(output);
        if (!native_history_copy_string(owner, follow->name)) return;
        follow->marked = Unavailable;
        remember_recenter_follow(output, follow);
        follow->unit = native_unit_identity_source_binding(follow->name, owner);
    } catch (...) {}
}

template<bool HiddenTile>
static void capture_recenter_item(void *item, NativeString *output, bool generic, int32_t mode) {
    NativeInputCallbackScope callback;
    // The second branch uses bit 4 as it was before the formatter ran.
    uint32_t flags = 0;
    if (!HiddenTile) native_history_copy(reinterpret_cast<uintptr_t>(item) + 0x10, flags);
    callback.call_native([&] { g_recenter_item_name(item, output, generic, mode); });
    try {
        native_recenter_pending() = {};
        auto follow = std::make_shared<NativeRecenterFollow>();
        if (!native_history_copy_string(reinterpret_cast<uintptr_t>(output), follow->name)) return;
        follow->marked = HiddenTile || (flags & 0x10);
        remember_recenter_follow(output, follow);
        NativeTradeItemCaption caption;
        caption.source = follow->name;
        populate_native_trade_item_fields(reinterpret_cast<uintptr_t>(item), caption);
        follow->item = std::move(caption);
    } catch (...) {}
}

static void capture_recenter_draw(NativeDrawnTextRow &row) {
    const auto field = recenter_draw(row.native_caller);
    if (field == RecenterDraw::Other) return;
    row.caption_source = true;
    if (field == RecenterDraw::Item || field == RecenterDraw::Unit) {
        auto pending = std::exchange(native_recenter_pending(), NativeRecenterPending{});
        if (pending.owner != row.address || pending.epoch != row.draw_epoch || !pending.follow)
            return;
        std::string complete = pending.follow->name;
        if (pending.follow->marked)
            complete += field == RecenterDraw::Item ? " (hidden)" : " (not possible)";
        if (native_trade_item_draw_source(complete, row.source))
            row.recenter_follow = std::move(pending.follow);
        return;
    }
    if (field != RecenterDraw::Name && field != RecenterDraw::Overwrite &&
            field != RecenterDraw::Clear) return;
    native_recenter_pending() = {};
    if (field != RecenterDraw::Name || (row.source != "Wagon arrival location" &&
            row.source != "Unnamed recenter location")) return;
    // At this draw the temporary is rbp-20 = rsp+e0. The loop index and
    // component pointer are still at rsp+40 and rsp+58 respectively.
    int32_t index = -1, editing_index = -1;
    uintptr_t panel = 0;
    uint8_t editing = 0;
    if (row.address < 0xa0 || !native_history_copy(row.address - 0xa0, index) || index < 0 ||
            !native_history_copy(row.address - 0x88, panel) || panel != recenter_panel_state() ||
            !native_history_copy(panel + 0x10, editing) ||
            !native_history_copy(panel + 0xc, editing_index) || (editing && editing_index == index))
        return;
    const auto base = native_history_profile_base();
    const auto slots = base + (native_pe_classic_5317() ? 0x23b5fe0 : 0x23bc0e0);
    uintptr_t record = 0;
    if (index < 16) record = slots + 0x38 * index;
    else {
        NativeBorrowedVector<uintptr_t> extra;
        if (!native_history_read_vector(slots + 16 * 0x38, extra)) return;
        record = native_history_vector_at(extra, index - 16);
    }
    std::string stored;
    if (!record || !native_history_copy_string(record, stored)) return;
    if (stored.empty() && row.source == "Unnamed recenter location")
        row.recenter_name = RecenterName::Unnamed;
    else if (index == 0 && row.source == "Wagon arrival location" && stored == row.source)
        row.recenter_name = RecenterName::Wagon;
}

static bool install_recenter_follow_hooks() {
    if (!native_pe_5317()) return true;
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    const bool classic = native_pe_classic_5317();
    const uintptr_t unit = classic ? 0x1344290 : 0x1349540;
    const uintptr_t item = classic ? 0xc79f60 : 0xc7d140;
    const uintptr_t shift = classic ? 0x70 : 0;
    g_recenter_unit_name = reinterpret_cast<NativeUnitIdentityFormatFn>(base + unit);
    g_recenter_item_name = reinterpret_cast<NativeTradeItemNameFn>(base + item);
    return g_recenter_calls.install(base, {
        {0x1dfb31 - shift, unit, reinterpret_cast<const void *>(&capture_recenter_unit<false>)},
        {0x1dfb42 - shift, unit, reinterpret_cast<const void *>(&capture_recenter_unit<true>)},
        {0x1df977 - shift, item, reinterpret_cast<const void *>(&capture_recenter_item<true>)},
        {0x1df98e - shift, item, reinterpret_cast<const void *>(&capture_recenter_item<false>)},
    }, "Recenter follow captions");
}
