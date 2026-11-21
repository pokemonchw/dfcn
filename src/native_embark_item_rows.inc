// Both prepare renderers format an abstract description. The selected loop
// obtains its arguments from item virtuals and the candidate loop reads its
// 12-byte tuple directly. No native object is retained after its draw.
struct EmbarkPendingItem {
    const NativeString *destination = nullptr;
    uint64_t epoch = 0;
    NativeEmbarkListItem item;
};
static EmbarkPendingItem &embark_pending_item() {
    return reloadable_thread_state<EmbarkPendingItem, struct EmbarkPendingItemTag>();
}
using EmbarkChoiceNameFn = void (*)(const void *, NativeString *);
static EmbarkChoiceNameFn g_embark_choice_name = nullptr;
static NativeHistoryItemFn g_embark_selected_name = nullptr;
static bool populate_native_builtin_bar_material(NativeTradeItemCaption &caption);

static bool read_embark_item_noun(uintptr_t address, NativeEmbarkListItem &item) {
    if (!native_history_copy_string(address, item.name) || item.name.empty()) return false;
    if (item.type == 0 && item.material > 0 && item.material <= 18) {
        NativeTradeItemCaption bar;
        bar.type = item.type;
        bar.subtype = item.subtype;
        bar.material = item.material;
        bar.material_index = item.material_index;
        if (populate_native_builtin_bar_material(bar) && bar.material_prefix.empty() &&
                bar.material_state == item.name) item.builtin_solid_id = std::move(bar.material_id);
    }
    return true;
}

static void capture_embark_selected_name(NativeString *output, int16_t type, int16_t subtype,
        int16_t material, int32_t index, int32_t number_form, int32_t flags,
        bool append, void *materials, int32_t shape, int32_t item_id,
        bool historical, int32_t extra1, int32_t extra2) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_embark_selected_name(output, type, subtype, material, index, number_form, flags,
            append, materials, shape, item_id, historical, extra1, extra2);
    });
    try {
        auto &pending = embark_pending_item();
        pending = {};
        // The selected-vector iterator at RBP-10 points at the item* slot.
        // The native renderer uses its getStackSize() before formatting RBP+4c8.
        const uintptr_t address = reinterpret_cast<uintptr_t>(output);
        if (address < 0x4d8) return;
        const auto dest = address - 0x260;
        NativeEmbarkListItem item{type, subtype, material, index};
        uintptr_t slot = 0, object = 0;
        if (!native_history_copy(address - 0x4d8, slot) || !native_history_copy(slot, object) ||
                !object || !read_embark_item_noun(address, item)) return;
        if (!native_history_page_getter(object, 0x478, item.count)) {
            // A custom getter may have a non-leaf implementation. The native
            // renderer already saved its exact result in its quantity buffer.
            std::string prefix;
            if (!native_history_copy_string(dest, prefix)) return;
            item.count = 1;
            if (!prefix.empty()) {
                if (prefix.back() != ' ') return;
                const char *end = prefix.data() + prefix.size() - 1;
                const auto parsed = std::from_chars(prefix.data(), end, item.count);
                if (parsed.ec != std::errc{} || parsed.ptr != end || item.count <= 1) return;
            }
        }
        item.count = std::max(1, item.count);
        pending = {reinterpret_cast<const NativeString *>(dest),
            g_embark_item_capture_epoch.load(std::memory_order_acquire), std::move(item)};
    } catch (...) {}
}

static void capture_embark_choice_name(const void *choice, NativeString *output) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_embark_choice_name(choice, output); });
    try {
        auto &pending = embark_pending_item();
        pending = {};
        struct Choice { int16_t type, subtype, material, padding; int32_t index; } record;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(choice), record)) return;
        NativeEmbarkListItem item{record.type, record.subtype, record.material, record.index};
        if (!read_embark_item_noun(reinterpret_cast<uintptr_t>(output), item)) return;
        pending = {output, g_embark_item_capture_epoch.load(std::memory_order_acquire), std::move(item)};
    } catch (...) {}
}

static void draw_native_embark_list_item(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width, uintptr_t caller) {
    NativeInputCallbackScope callback;
    try {
        auto stored = std::exchange(embark_pending_item(), {});
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        std::string_view visible;
        if (graphics && graphics->screen && width == 0 && graphics->screenx >= graphics->clipx[0] &&
                graphics->screeny >= graphics->clipy[0] && graphics->screeny <= graphics->clipy[1] &&
                native_string_view(source, &visible, 4096) && !visible.empty()) {
            // Even a failed producer read owns these cells. Its empty item
            // preserves DF's label instead of offering it to a word matcher.
            if (stored.destination != source || stored.epoch != epoch) stored.item = {};
            remember_native_drawn_text_row(graphics->screenx, graphics->screeny, visible,
                reinterpret_cast<uintptr_t>(source), graphics, false, {}, NativeInfoTitleKind::None,
                false, -1, NativeCivilizationField::None, false, -1, std::nullopt, epoch, {},
                NativeLocationPickerField::None, std::nullopt, std::nullopt,
                NativeTravelBuildingField::None, caller, std::nullopt, std::nullopt, std::move(stored.item));
        }
    } catch (...) {}
    // Use the entry trampoline so the generic addst observer cannot replace
    // this typed draw by a second untyped draw at the same coordinate.
    const auto draw = g_native_clipped_caption_hooks.draw
        ? g_native_clipped_caption_hooks.draw : g_native_caption_hooks.draw;
    if (draw) callback.call_native([&] { draw(graphics, source, just, width); });
}
