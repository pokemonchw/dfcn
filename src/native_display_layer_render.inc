// display_interfacest owns the native assignment picker, including its inline
// frame stores, category counts, search field and concrete-item checkboxes.
// Its render ABI is (display, tick, screen_left, screen_right).
static NativeEntryHook g_native_display_draw_hook;
static NativeCallHook g_native_display_item_calls;
static NativeUiLayerTarget g_native_display_target;
static uintptr_t g_native_display_owner = 0;

static std::optional<NativeTradeItemCaption> capture_native_display_item_caption(
        uintptr_t string_owner, std::string_view shortened) {
    if (!g_native_display_write_graphics || !string_owner) return std::nullopt;
    try {
        const auto &pending = native_trade_item_pending();
        if (pending.string_owner != string_owner) return std::nullopt;
        if (pending.epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
                !native_trade_item_draw_source(pending.caption.source, shortened))
            return std::nullopt;
        // addst may register its submitted source and then replace that row
        // with its clipped visible span. Both writes retain the same item;
        // the next formatter or this component's draw scope expires it.
        return pending.caption;
    } catch (...) { return std::nullopt; }
}

using NativeDisplayDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);

static void native_display_draw(void *display, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDisplayDrawFn>(g_native_display_draw_hook.original);
    if (!original) return;
    TranslationStateScope translation;
    auto &layer = g_native_display_layer;
    auto *gps = native_graphics();
    bool isolate = reinterpret_cast<uintptr_t>(display) == g_native_display_owner &&
        gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_display_write_graphics && !g_native_stocks_write_graphics &&
        !g_native_info_write_graphics && !g_native_squads_write_graphics &&
        !g_native_help_write_graphics && !native_dfhack_layer_write_active(gps) &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    const auto *settings = native_ui_settings_source();
    const int left = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_left) + 4, 0, gps->dimx)) : 0;
    const int right = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_right) - 28, -1, gps->dimx - 1)) : -1;
    int grid_y = gps ? gps->dimy : 0;
#ifdef _WIN32
    if (settings) std::memcpy(&grid_y,
        reinterpret_cast<const unsigned char *>(settings) + 0x18, sizeof(grid_y));
#else
    if (settings) grid_y = settings->display.grid_y;
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
        callback.call_native([&] { original(display, tick, screen_left, screen_right); });
        return;
    }
    g_native_display_background_grid = gps->screen;
    g_native_display_background_graphics = gps;
    g_native_display_panel = {left, 4, right - left + 1, bottom - 3};
    // Unlike Stocks, the display component has assignment identity at +10;
    // its filtered type vector/current type are consequently at +40/+58.
    std::array<uintptr_t, 2> types{};
#ifdef _WIN32
    const auto type_list = reinterpret_cast<uintptr_t>(display) + 0x40;
    const auto current_type = reinterpret_cast<uintptr_t>(display) + 0x58;
    const auto item_height = reinterpret_cast<uintptr_t>(display) + 0x170;
#else
    const auto type_list = native_history_named_global("gamest",
        "main_interface.assign_display_item.filtered_type_list", 24);
    const auto current_type = native_history_named_global("gamest",
        "main_interface.assign_display_item.current_type", 2);
    const auto item_height = native_history_named_global("gamest",
        "main_interface.assign_display_item.i_height", 4);
#endif
    if (type_list) std::memcpy(types.data(), reinterpret_cast<const void *>(type_list), sizeof(types));
    const size_t count = types[1] >= types[0] ? (types[1] - types[0]) / sizeof(int16_t) : 0;
    const int split = left + (right - left + 1) / 3;
    const int category_rows = std::max(0, (grid_y - 11) / 3);
    if (current_type) std::memcpy(&g_native_display_current_type,
        reinterpret_cast<const void *>(current_type), sizeof(g_native_display_current_type));
    g_native_display_category_right = split - (count > static_cast<size_t>(category_rows) ? 4 : 2);
    int32_t item_rows = 0;
    if (item_height) std::memcpy(&item_rows, reinterpret_cast<const void *>(item_height), sizeof(item_rows));
    g_native_display_content_right = right - (item_rows > category_rows * 3 - 3 ? 4 : 2);
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    NativeUiGridBinding output(gps, *layer.foreground.graphics());
    NativeInfoCapturedTextScope captions(g_native_display_text);
    struct WriteScope {
        const graphicst *previous = g_native_display_write_graphics;
        explicit WriteScope(const graphicst *graphics) {
            try { native_trade_item_pending() = {}; } catch (...) {}
            g_native_display_write_graphics = graphics;
        }
        ~WriteScope() {
            try { native_trade_item_pending() = {}; } catch (...) {}
            g_native_display_write_graphics = previous;
        }
    } writing(gps);
    callback.call_native([&] { original(display, tick, screen_left, screen_right); });
    layer.foreground.graphics()->top_in_use = gps->top_in_use;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static void uninstall_native_display_layer_hook();

static bool install_native_display_layer_hook() {
    if (g_native_display_draw_hook.installed && g_native_display_item_calls.installed) return true;
    if (g_native_display_draw_hook.active() || g_native_display_item_calls.active()) {
        uninstall_native_display_layer_hook();
        if (g_native_display_draw_hook.active() || g_native_display_item_calls.active()) return false;
    }
    constexpr const char *label = "Native display assignment component draw entry";
#ifdef _WIN32
    const auto base = native_history_profile_base();
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x382d60));
    const auto owner = native_reference_address(base, 0x18a2ac8);
    std::vector<unsigned char> prefix{
        0x40,0x55,0x53,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56,0x41,0x57};
    // The complete reference calls admit the five text-role identities to
    // the PE seed and map their instruction bytes for Classic as well.
    std::vector<NativeCaptionSignature> captions{
        {0x383191, {0xe8,0xca,0x67,0x75,0x00}},
        {0x383cc6, {0xe8,0x95,0x5c,0x75,0x00}},
        {0x384083, {0xe8,0xd8,0x58,0x75,0x00}},
        {0x383739, {0xe8,0x22,0x62,0x75,0x00}},
        {0x3832ca, {0xe8,0x91,0x66,0x75,0x00}},
    };
    if (!native_reference_bytes(0x382d60, prefix)) return false;
    std::array<uintptr_t, 5> callers{};
    for (size_t i = 0; i < captions.size(); ++i) {
        auto &caption = captions[i];
        const auto address = native_reference_address(base, caption.address);
        if (!address || !native_reference_bytes(caption.address, caption.bytes)) return false;
        callers[i] = address + caption.bytes.size();
    }
    // The formatter runs before this renderer's inline resize and dot stores.
    // The owned-caption consumer binds its complete source to the same live
    // NativeString and epoch. Leave addst calls available to color mods; their
    // native caller identities above are reference resources, not patches.
    std::vector<NativeCall> item_calls{
        {0x383fd3, 0xc65450, reinterpret_cast<const void *>(&capture_native_trade_item_name)},
    };
    if (!native_reference_calls(item_calls, 0)) return false;
#else
    if (!native_elf_5317_address(0xd7c190)) return true;
    const auto base = elf_runtime::state().executable.bias;
    auto *draw = reinterpret_cast<unsigned char *>(native_elf_5317_address(0xd7c190));
    const auto owner = native_history_named_global("gamest",
        "main_interface.assign_display_item.open", 1);
    const std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x55};
    // Native addst returns: category, grouped item, concrete item, search,
    // and the empty category's count. Their SysV sources precede clipping.
    const std::array<uintptr_t, 5> caller_sites{
        0xd7d129, 0xd7e6b3, 0xd7e19c, 0xd7c8ae, 0xd7d2f4};
    std::array<uintptr_t, 5> callers{};
    for (size_t i = 0; i < caller_sites.size(); ++i)
        callers[i] = native_elf_5317_address(caller_sites[i]) + 5;
    const std::vector<NativeCall> item_calls{
        {native_elf_5317_address(0xd7e168) - base, native_elf_5317_address(0xe70480) - base,
            reinterpret_cast<const void *>(&capture_native_trade_item_name)},
    };
#endif
    if (!owner || !draw || !g_native_trade_item_name ||
            !g_native_display_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_display_draw), {}, label)) return false;
    g_native_display_owner = owner;
    g_native_display_category_caller = callers[0];
    g_native_display_group_caller = callers[1];
    g_native_display_item_caller = callers[2];
    g_native_display_filter_caller = callers[3];
    g_native_display_empty_count_caller = callers[4];
    if (!g_native_display_item_calls.install(base, item_calls, "Native display assignment item source") ||
            !g_native_display_draw_hook.install(label)) {
        uninstall_native_display_layer_hook();
        return false;
    }
    log_line("INFO", "Redirected the entire display assignment picker to its private output layer");
    return true;
}

static void native_display_present_layer(SDL_Renderer *renderer,
        void (*draw_display)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_display_layer, g_native_display_target, renderer, draw_display);
}

static void uninstall_native_display_layer_hook() {
    g_native_display_item_calls.uninstall("Native display assignment item source restore");
    g_native_display_draw_hook.uninstall("Native display assignment draw entry restore");
    if (!g_native_display_draw_hook.active() && !g_native_display_item_calls.active()) {
        g_native_display_owner = 0;
        g_native_display_category_caller = g_native_display_group_caller = g_native_display_item_caller = 0;
        g_native_display_filter_caller = g_native_display_empty_count_caller = 0;
        g_native_display_target.release();
        native_display_begin_frame();
        g_native_display_layer = {};
        g_native_display_text = {};
    }
}
static bool native_display_layer_hook_active() {
    return g_native_display_draw_hook.active() || g_native_display_item_calls.active();
}
