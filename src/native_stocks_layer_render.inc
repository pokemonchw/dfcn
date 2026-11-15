// stocks_interfacest::render receives (stocks, tick, screen_left, screen_right)
// on both native ABIs. Its inline frame fill and every child store must run
// after rebinding gps; captions retain their actual component writers.
static NativeEntryHook g_native_stocks_draw_hook;
static NativeCallHook g_native_stocks_item_calls;
static NativeCallHook g_native_stocks_caption_calls;
static NativeCaptionDrawFn g_native_stocks_caption_draw = nullptr;
static NativeUiLayerTarget g_native_stocks_target;
static uintptr_t g_native_stocks_owner = 0;
static std::optional<NativeTradeItemCaption> capture_native_stocks_item_caption(
        uintptr_t caller, uintptr_t string_owner, std::string_view shortened) {
    if (!g_native_stocks_write_graphics || !string_owner ||
            (caller != g_native_stocks_group_caller && caller != g_native_stocks_item_caller))
        return std::nullopt;
    try {
        const bool group = caller == g_native_stocks_group_caller;
#ifdef _WIN32
        // Both PE editions keep the group string at RBP+98 and the item
        // string at RBP+78. The live draw frame still owns its Stocks pointer
        // and iterators; no earlier formatter hook is needed for identity.
        if (string_owner < (group ? 0x98u : 0x78u) + 0x38u) return std::nullopt;
        const uintptr_t frame = string_owner - (group ? 0x98 : 0x78);
        const uintptr_t owner_slot = frame - 0x20;
        const uintptr_t cursor_slot = group ? frame + 0x18 : frame - 0x38;
#else
        // SysV uses RBP-60 for both strings. Its amount and item iterators
        // have independent frame slots, regardless of the visible spelling.
        if (string_owner < 0xc8 || string_owner > UINTPTR_MAX - 0x60) return std::nullopt;
        const uintptr_t frame = string_owner + 0x60;
        const uintptr_t owner_slot = frame - 0xd0;
        const uintptr_t cursor_slot = group ? frame - 0x128 : frame - 0xf0;
#endif
        uintptr_t owner = 0, cursor = 0;
        uint8_t open = 0;
        int16_t type = -1;
        if (!native_history_copy(owner_slot, owner) || owner != g_native_stocks_owner ||
                !owner || owner > UINTPTR_MAX - 0x240 ||
                !native_history_copy(owner, open) || open != 1 ||
                !native_history_copy(owner + 0x38, type) || type < 0 || type > 92 ||
                !native_history_copy(cursor_slot, cursor)) return std::nullopt;
        const auto member = [&](size_t pe_offset, const char *name) {
#ifdef _WIN32
            // MSVC's vector<bool> is 32 bytes: the actual Stocks vectors
            // start at +158/+170/+188/+1a0/+1b8, not the SysV +160 layout.
            (void)name;
            return owner + pe_offset;
#else
            (void)pe_offset;
            return native_history_object_member(owner, "stocks_interfacest", name, 24);
#endif
        };
        const auto cursor_index = [](const auto &values, uintptr_t at) -> std::optional<size_t> {
            const uintptr_t first = reinterpret_cast<uintptr_t>(values.begin);
            const uintptr_t last = reinterpret_cast<uintptr_t>(values.end);
            const size_t width = sizeof(*values.begin);
            if (!values.valid(262144) || at < first || at >= last || (at - first) % width)
                return std::nullopt;
            return (at - first) / width;
        };
        NativeTradeItemCaption caption;
        if (group) {
            NativeBorrowedVector<int32_t> amounts, subtypes, materials, indices;
            const auto read_group_vector = [&](size_t offset, const char *name, auto &values) {
                return native_history_copy(member(offset, name), values) && values.valid(262144);
            };
            if (!read_group_vector(0x1b8, "current_type_a_amount", amounts))
                return std::nullopt;
            const auto index = cursor_index(amounts, cursor);
            if (!index ||
                    !read_group_vector(0x170, "current_type_a_subtype", subtypes) ||
                    !read_group_vector(0x188, "current_type_a_subcat1", materials) ||
                    !read_group_vector(0x1a0, "current_type_a_subcat2", indices) ||
                    subtypes.size() != amounts.size() || materials.size() != amounts.size() ||
                    indices.size() != amounts.size()) return std::nullopt;
            const auto read_group_value = [&](const auto &values, int32_t &value) {
                return native_history_copy(reinterpret_cast<uintptr_t>(values.begin) +
                    *index * sizeof(int32_t), value);
            };
            caption.owner = owner;
            caption.id = static_cast<int32_t>(*index);
            caption.type = type;
            if (!read_group_value(subtypes, caption.subtype) ||
                    !read_group_value(materials, caption.material) ||
                    !read_group_value(indices, caption.material_index) ||
                    !read_group_value(amounts, caption.count)) return std::nullopt;
            if (caption.subtype < -1 || caption.subtype > INT16_MAX ||
                    caption.material < -1 || caption.material > 658 ||
                    caption.material_index < -1 || caption.count < 1) return std::nullopt;
            caption.typed_identity = true;
            populate_native_builtin_bar_material(caption);
        } else {
            NativeBorrowedVector<uintptr_t> items;
            if (!native_history_read_vector(member(0x158, "current_type_i_list"), items))
                return std::nullopt;
            const auto index = cursor_index(items, cursor);
            if (!index || !populate_native_trade_item_fields(
                    native_history_vector_at(items, *index), caption) || caption.type != type)
                return std::nullopt;
        }
        if (!native_history_copy_string(string_owner, caption.source) || caption.source.empty() ||
                caption.source.size() > 4096 || caption.source.find('\0') != std::string::npos ||
                caption.source.find_first_of("\r\n") != std::string::npos)
            return std::nullopt;
        if (!native_trade_item_draw_source(caption.source, shortened)) return std::nullopt;
        // Formatter capture is supplementary evidence for unabridged names.
        // It cannot supply or replace the identity read from this draw frame.
        const auto &pending = native_trade_item_pending();
        if (!group && pending.string_owner == string_owner && pending.caption.owner == caption.owner &&
                pending.epoch == g_embark_item_capture_epoch.load(std::memory_order_acquire) &&
                native_trade_item_draw_source(pending.caption.source, caption.source))
            caption.source = pending.caption.source;
        return caption;
    } catch (...) { return std::nullopt; }
}

using NativeStocksDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);

template<bool Group>
static void capture_native_stocks_producer_caption(graphicst *graphics,
        const NativeString *source, NativeJustification just, int width) {
    // Bind identity at the two Stocks producer calls, before an addst entry
    // wrapper can replace the caller or publish a text-only record. The
    // outer capture publishes last, retaining the tuple read from this frame.
    capture_native_stocks_caption(graphics, source, width, false,
        Group ? g_native_stocks_group_caller : g_native_stocks_item_caller, [&] {
            if (const auto original = g_native_stocks_caption_draw)
                original(graphics, source, just, width);
        });
}

static void native_stocks_draw(void *stocks, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeStocksDrawFn>(g_native_stocks_draw_hook.original);
    if (!original) return;
    TranslationStateScope translation;
    auto &layer = g_native_stocks_layer;
    auto *gps = native_graphics();
    bool isolate = reinterpret_cast<uintptr_t>(stocks) == g_native_stocks_owner &&
        gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_stocks_write_graphics && !g_native_info_write_graphics &&
        !g_native_display_write_graphics &&
        !g_native_squads_write_graphics &&
        !g_native_help_write_graphics && !native_dfhack_layer_write_active(gps) &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    const auto *settings = native_ui_settings_source();
    const int left = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_left) + 4, 0, gps->dimx)) : 0;
    const int right = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_right) - 28, -1, gps->dimx - 1)) : -1;
#ifdef _WIN32
    int grid_y = gps ? gps->dimy : 0;
    // init.display.grid_y is a native 32-bit field at +0x18 in both PE editions.
    if (settings) std::memcpy(&grid_y,
        reinterpret_cast<const unsigned char *>(settings) + 0x18, sizeof(grid_y));
#else
    const int grid_y = settings ? settings->display.grid_y : gps ? gps->dimy : 0;
#endif
    const int bottom = gps ? std::min(gps->dimy - 1, grid_y - 4) : -1;
    isolate = isolate && left <= right && bottom >= 4;
    if (isolate) {
        try {
            if (!layer.ready) {
                layer.foreground.prepare(*gps);
                layer.foreground.clear();
                layer.frames = {{left, 4, right - left + 1, bottom - 3}};
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(stocks, tick, screen_left, screen_right); });
        return;
    }
    g_native_stocks_background_grid = gps->screen;
    g_native_stocks_background_graphics = gps;
    g_native_stocks_panel = {left, 4, right - left + 1, bottom - 3};
    // These are the native category width/scrollbar branch, independent of
    // translated labels, filtering results or screenshot pixel coordinates.
    std::array<uintptr_t, 2> types{};
    std::memcpy(types.data(), static_cast<unsigned char *>(stocks) + 0x20, sizeof(types));
    const size_t count = types[1] >= types[0] ? (types[1] - types[0]) / sizeof(int16_t) : 0;
    const int split = left + (right - left + 1) / 3;
    std::memcpy(&g_native_stocks_current_type,
        static_cast<unsigned char *>(stocks) + 0x38, sizeof(g_native_stocks_current_type));
    g_native_stocks_category_right = split - (count > static_cast<size_t>(
        std::max(0, (grid_y - 11) / 3)) ? 4 : 2);
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    NativeUiGridBinding output(gps, *layer.foreground.graphics());
    NativeInfoCapturedTextScope captions(g_native_stocks_text);
    struct WriteScope {
        const graphicst *previous = g_native_stocks_write_graphics;
        explicit WriteScope(const graphicst *graphics) {
            try { native_trade_item_pending() = {}; } catch (...) {}
            g_native_stocks_write_graphics = graphics;
        }
        ~WriteScope() {
            try { native_trade_item_pending() = {}; } catch (...) {}
            g_native_stocks_write_graphics = previous;
        }
    } writing(gps);
    callback.call_native([&] { original(stocks, tick, screen_left, screen_right); });
    layer.foreground.graphics()->top_in_use = gps->top_in_use;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static void uninstall_native_stocks_layer_hook();

static bool install_native_stocks_layer_hook() {
    if (g_native_stocks_draw_hook.installed) return true;
    if (g_native_stocks_draw_hook.active() || g_native_stocks_item_calls.active() ||
            g_native_stocks_caption_calls.active()) {
        uninstall_native_stocks_layer_hook();
        if (g_native_stocks_draw_hook.active() || g_native_stocks_item_calls.active() ||
                g_native_stocks_caption_calls.active()) return false;
    }
    constexpr const char *label = "Native Stocks component draw entry";
    const auto base = native_history_profile_base();
#ifdef _WIN32
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x3a1690));
    const auto owner = native_reference_address(base, 0x18a2710);
    std::vector<unsigned char> prefix{
        0x40,0x55,0x53,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56,0x41,0x57};
    // These identities also distinguish categories and authored search text.
    std::vector<NativeCaptionSignature> captions{
        {0x3a1ac6, {0xe8,0x95,0x7e,0x73,0x00}},
        {0x3a2c30, {0xe8,0x2b,0x6d,0x73,0x00}},
        {0x3a267a, {0xe8,0xe1,0x72,0x73,0x00}},
        {0x3a20c2, {0xe8,0x99,0x78,0x73,0x00}},
    };
    if (!native_reference_bytes(0x3a1690, prefix)) return false;
    std::array<uintptr_t, 4> callers{};
    for (size_t i = 0; i < captions.size(); ++i) {
        auto &caption = captions[i];
        const auto address = native_reference_address(base, caption.address);
        if (!address || !native_reference_bytes(caption.address, caption.bytes)) return false;
        callers[i] = address + caption.bytes.size();
    }
    // Optional pre-shortening names supplement the draw-frame identity.
    // Their absence must not disable the memory-owned Stocks layer.
    std::vector<NativeCall> item_calls{
        {0x3a2b6f, 0xc65450, reinterpret_cast<const void *>(&capture_native_trade_item_name)},
    };
    if (!native_reference_calls(item_calls, 0)) item_calls.clear();
    std::vector<NativeCall> caption_calls{
        {0x3a267a, 0xad9960, reinterpret_cast<const void *>(&capture_native_stocks_producer_caption<true>)},
        {0x3a2c30, 0xad9960, reinterpret_cast<const void *>(&capture_native_stocks_producer_caption<false>)},
    };
    if (!native_reference_calls(caption_calls, 0)) return false;
#else
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x979fb0));
    const auto owner = native_reference_address(base, 0x22f7408);
    std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xe5};
    std::vector<NativeCall> captions{
        {0x97afc9, 0x25170, nullptr},
        {0x97bf34, 0x25170, nullptr},
        {0x97c879, 0x25170, nullptr},
        {0x97a6cb, 0x25170, nullptr},
    };
    if (!native_reference_bytes(0xd79fb0, prefix) ||
            !native_reference_calls(captions, 0x400000)) return false;
    const std::array<uintptr_t, 4> callers{
        base + captions[0].va + 5, base + captions[1].va + 5,
        base + captions[2].va + 5, base + captions[3].va + 5};
    std::vector<NativeCall> item_calls{
        {0x97bf00, 0xa68020, reinterpret_cast<const void *>(&capture_native_trade_item_name)},
    };
    if (!native_reference_calls(item_calls, 0x400000)) item_calls.clear();
    std::vector<NativeCall> caption_calls{
        {0x97c879, 0x25170, reinterpret_cast<const void *>(&capture_native_stocks_producer_caption<true>)},
        {0x97bf34, 0x25170, reinterpret_cast<const void *>(&capture_native_stocks_producer_caption<false>)},
    };
    if (!native_reference_calls(caption_calls, 0x400000)) return false;
#endif
    if (!owner || !draw || !g_native_stocks_draw_hook.prepare(draw, prefix,
            reinterpret_cast<const void *>(&native_stocks_draw), {}, label)) return false;
    g_native_stocks_owner = owner;
    g_native_stocks_category_caller = callers[0];
    g_native_stocks_item_caller = callers[1];
    g_native_stocks_group_caller = callers[2];
    g_native_stocks_filter_caller = callers[3];
    g_native_stocks_caption_draw = reinterpret_cast<NativeCaptionDrawFn>(base + caption_calls[0].target);
    if (!g_native_stocks_caption_calls.install(base, caption_calls, "Native Stocks typed caption producers")) {
        uninstall_native_stocks_layer_hook();
        return false;
    }
    if (!item_calls.empty() && g_native_trade_item_name)
        g_native_stocks_item_calls.install(base, item_calls, "Native Stocks complete item name");
    if (!g_native_stocks_draw_hook.install(label)) {
        uninstall_native_stocks_layer_hook();
        return false;
    }
    log_line("INFO", "Redirected the entire Stocks window to its private output layer");
    return true;
}

static void native_stocks_present_layer(SDL_Renderer *renderer,
        void (*draw_stocks)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_stocks_layer, g_native_stocks_target, renderer, draw_stocks);
}

static void uninstall_native_stocks_layer_hook() {
    g_native_stocks_caption_calls.uninstall("Native Stocks caption producers restore");
    g_native_stocks_item_calls.uninstall("Native Stocks item identity restore");
    g_native_stocks_draw_hook.uninstall("Native Stocks draw entry restore");
    if (!g_native_stocks_draw_hook.active() && !g_native_stocks_item_calls.active() &&
            !g_native_stocks_caption_calls.active()) {
        g_native_stocks_caption_draw = nullptr;
        g_native_stocks_owner = 0;
        g_native_stocks_category_caller = g_native_stocks_group_caller = g_native_stocks_item_caller = 0;
        g_native_stocks_filter_caller = 0;
        g_native_stocks_target.release();
        native_stocks_begin_frame();
        g_native_stocks_layer = {};
        g_native_stocks_text = {};
    }
}
static bool native_stocks_layer_hook_active() {
    return g_native_stocks_draw_hook.active() || g_native_stocks_item_calls.active() ||
        g_native_stocks_caption_calls.active();
}
