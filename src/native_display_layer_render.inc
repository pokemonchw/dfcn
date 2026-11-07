// display_interfacest owns the native assignment picker, including its inline
// frame stores, category counts, search field and concrete-item checkboxes.
// Its PE render ABI is (display, tick, screen_left, screen_right).
static NativeEntryHook g_native_display_draw_hook;
static NativeCallHook g_native_display_item_calls;
static NativeUiLayerTarget g_native_display_target;
static uintptr_t g_native_display_owner = 0;
static NativeTradeItemNameFn g_native_display_item_name = nullptr;

// This formatter belongs to the display picker even when the independent
// trade/barter capture transaction could not install all of its call sites.
static void capture_native_display_item_name(void *item, NativeString *output,
        bool generic, int32_t mode) {
    NativeInputCallbackScope callback;
    try { native_trade_item_pending() = {}; } catch (...) {}
    const auto original = g_native_display_item_name;
    if (!original) return;
    callback.call_native([&] { original(item, output, generic, mode); });
    try {
        NativeTradeItemPending pending;
        pending.string_owner = reinterpret_cast<uintptr_t>(output);
        pending.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        if (!item || !output ||
                !native_history_copy_string(pending.string_owner, pending.caption.source) ||
                pending.caption.source.empty() || pending.caption.source.size() > 4096 ||
                pending.caption.source.find('\0') != std::string::npos ||
                pending.caption.source.find_first_of("\r\n") != std::string::npos) return;
        try {
            populate_native_trade_item_fields(reinterpret_cast<uintptr_t>(item), pending.caption);
        } catch (...) { pending.caption.semantic_name = false; }
        native_trade_item_pending() = std::move(pending);
    } catch (...) {
        try { native_trade_item_pending() = {}; } catch (...) {}
    }
}

static std::optional<NativeTradeItemCaption> capture_native_display_item_caption(
        uintptr_t string_owner, std::string_view shortened) {
    if (!g_native_display_write_graphics || !string_owner) return std::nullopt;
    try {
        const auto &pending = native_trade_item_pending();
        if (pending.producer) return std::nullopt;
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

#ifdef _WIN32
using NativeDisplayDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);
DFCN_NATIVE_RECEIVER(0x382d60, "assign_display_item_interfacest")

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
    native_ui_settings_read_member(settings, 0x18, grid_y);
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
    // Each translated role borrows only its named native layout. Missing
    // category or item metadata leaves that role native, not the whole page.
    std::array<uintptr_t, 3> types{};
    const bool categories = native_object_read_member(display,
        {0x40, "assign_display_item_interfacest", "filtered_type_list"}, types) &&
        types[0] <= types[1] && types[1] <= types[2] &&
        (types[1] - types[0]) % sizeof(int16_t) == 0 &&
        (types[2] - types[0]) % sizeof(int16_t) == 0 &&
        (types[2] - types[0]) / sizeof(int16_t) <= 65536;
    const size_t count = categories ? (types[1] - types[0]) / sizeof(int16_t) : 0;
    const int split = left + (right - left + 1) / 3;
    const int category_rows = std::max(0, (grid_y - 11) / 3);
    g_native_display_current_type = -1;
    native_object_read_member(display,
        {0x58, "assign_display_item_interfacest", "current_type"}, g_native_display_current_type);
    g_native_display_category_right = categories ?
        split - (count > static_cast<size_t>(category_rows) ? 4 : 2) : 0;
    int32_t item_rows = 0;
    const bool items = native_object_read_member(display,
        {0x170, "assign_display_item_interfacest", "i_height"}, item_rows) && item_rows >= 0;
    g_native_display_content_right = items ? right - (item_rows > category_rows * 3 - 3 ? 4 : 2) : 0;
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    std::optional<NativeUiGridBinding> output;
    if (!native_ui_bind_grid(output, gps, *layer.foreground.graphics())) {
        layer.ready = false;
        g_native_display_background_grid = nullptr;
        g_native_display_background_graphics = nullptr;
        callback.call_native([&] { original(display, tick, screen_left, screen_right); });
        return;
    }
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
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}
#endif

static void uninstall_native_display_layer_hook();

static bool install_native_display_layer_hook() {
#ifdef _WIN32
    if (g_native_display_draw_hook.installed) return true;
    if (g_native_display_draw_hook.active() || g_native_display_item_calls.active()) {
        uninstall_native_display_layer_hook();
        if (g_native_display_draw_hook.active() || g_native_display_item_calls.active()) return false;
    }
    constexpr const char *label = "Native display assignment component draw entry";
    const auto base = native_history_profile_base();
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x382d60));
    const auto owner = native_reference_address(base, 0x18a2ac8);
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_display_layer_hook(); }
    } guard;
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
    if (!owner || !draw || !native_reference_bytes(0x382d60, prefix) ||
            !g_native_display_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_display_draw), {}, label)) {
        log_line("WARN", "Native display assignment: complete draw entry binding unavailable");
        return false;
    }
    std::array<uintptr_t, 5> callers{};
    size_t resolved_roles = 0;
    for (size_t i = 0; i < captions.size(); ++i) {
        auto &caption = captions[i];
        const auto address = native_reference_address(base, caption.address);
        if (!address || !native_reference_bytes(caption.address, caption.bytes)) continue;
        callers[i] = address + caption.bytes.size();
        ++resolved_roles;
    }
    // The formatter runs before this renderer's inline resize and dot stores.
    // The owned-caption consumer binds its complete source to the same live
    // NativeString and epoch. Leave addst calls available to color mods; their
    // native caller identities above are reference resources, not patches.
    std::vector<NativeCall> item_calls{
        {0x383fd3, 0xc65450, reinterpret_cast<const void *>(&capture_native_display_item_name)},
    };
    g_native_display_owner = owner;
    g_native_display_category_caller = callers[0];
    g_native_display_group_caller = callers[1];
    g_native_display_item_caller = callers[2];
    g_native_display_filter_caller = callers[3];
    g_native_display_empty_count_caller = callers[4];
    bool item_capture = false;
    try {
        g_native_display_item_name = reinterpret_cast<NativeTradeItemNameFn>(
            native_reference_address(base, 0xc65450));
        item_capture = g_native_display_item_name && native_reference_calls(item_calls, 0) &&
            g_native_display_item_calls.install(base, item_calls, "Native display assignment item source");
    } catch (...) {}
    if (!item_capture) {
        if (!g_native_display_item_calls.uninstall("Native display assignment item source restore") ||
                g_native_display_item_calls.active()) return false;
        g_native_display_item_name = nullptr;
    }
    if (!g_native_display_draw_hook.install(label)) return false;
    guard.committed = true;
    log_line("INFO", "Enabled native display assignment layer: " + std::to_string(resolved_roles) +
        "/5 caption roles; typed item capture " + (item_capture ? "enabled" : "deferred"));
#endif
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
        g_native_display_item_name = nullptr;
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
