// Capture the native Escape renderer at its complete entry. Its save,
// timeline, confirmation and ordinary action branches share this owner.
static NativeUiLayerTarget g_native_pause_target;
#ifdef _WIN32
static NativeEntryHook g_native_pause_draw_hook;
static uintptr_t g_native_pause_owner = 0;
using NativePauseDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);

struct NativeHelpIndexLayout {
    std::vector<NativeHelpIndexPanel> panels;
    std::optional<SDL_Rect> intro;
};

template<typename T>
static bool native_pause_read(uintptr_t owner, native_history_abi::FieldOffset field,
        T &value) noexcept {
    try { return native_history_copy(field.address(owner, 0, sizeof(T), sizeof(T)), value); }
    catch (...) { return false; }
}

static std::optional<NativePauseCompactMenu> native_pause_compact_layout(void *menu,
        const graphicst &gps, int32_t screen_left, int32_t screen_right) {
    // The verified options_interfacest owner selects its ordinary branch
    // only after these save/help/confirmation flags. Its mode-5 constructor
    // writes actions 14 and 15 and leaves the paragraph vector empty.
    const uintptr_t owner = reinterpret_cast<uintptr_t>(menu);
    int32_t mode = -1;
    const auto abort_context = native_history_abi::enum_value(
        "options_context_type", "ABORT_FROM_STARTING_GAME", 5);
    if (!abort_context || !native_pause_read(owner, {4, "options_interfacest", "context"}, mode) ||
            mode != *abort_context) return std::nullopt;
    using native_history_abi::FieldOffset;
    static constexpr std::array guards{
        FieldOffset{0xc8, "options_interfacest", "do_manual_save"},
        FieldOffset{0xe9, "options_interfacest", "doing_help"},
        FieldOffset{0xa0, "options_interfacest", "confirm_manual_overwrite"},
        FieldOffset{0xa1, "options_interfacest", "entering_timeline"},
        FieldOffset{0x78, "options_interfacest", "entering_manual_folder"},
        FieldOffset{0x40, "options_interfacest", "fort_retirement_confirm"},
        FieldOffset{0x41, "options_interfacest", "adv_retirement_confirm"},
        FieldOffset{0x42, "options_interfacest", "fort_abandon_confirm"},
        FieldOffset{0x43, "options_interfacest", "adv_abandon_confirm"},
        FieldOffset{0x44, "options_interfacest", "fort_quit_without_saving_confirm"},
        FieldOffset{0x45, "options_interfacest", "adv_quit_without_saving_confirm"}};
    for (const auto &field : guards) {
        uint8_t active = 0;
        if (!native_pause_read(owner, field, active) || active) return std::nullopt;
    }
    NativeBorrowedVector<uintptr_t> paragraphs;
    NativeBorrowedVector<int32_t> actions;
    if (!native_pause_read(owner, {0x28, "options_interfacest", "text.text"}, paragraphs) ||
            !native_pause_read(owner, {0x48, "options_interfacest", "option"}, actions)) return std::nullopt;
    const auto return_title = native_history_abi::enum_value("main_menu_option_type", "RETURN_TO_TITLE", 14);
    const auto continue_game = native_history_abi::enum_value("main_menu_option_type", "CONTINUE", 15);
    std::array<int32_t, 2> action_ids{};
    if (!return_title || !continue_game || *return_title == *continue_game ||
            !paragraphs.valid(65536) || paragraphs.size() ||
            !actions.valid(2) || actions.size() != action_ids.size() ||
            !native_history_copy_bytes(reinterpret_cast<uintptr_t>(actions.begin),
                action_ids.data(), sizeof(action_ids)) ||
            action_ids != std::array<int32_t, 2>{*return_title, *continue_game}) return std::nullopt;

    // PE 0x1e1722..0x1e17e4: empty prose plus two actions gives height 12;
    // the outer frame is centre +/-31 and each button is centre +/-22.
    // Caption rows start at top+5 and advance by three (0x1e2111).
    const int64_t center = (int64_t(screen_left) + screen_right) / 2;
    const int64_t left = center - 31, right = center + 31;
    const int64_t top = int64_t(gps.dimy) / 2 - 6, bottom = top + 12;
    if (screen_right < screen_left || left < 0 || right >= gps.dimx ||
            top < 0 || bottom >= gps.dimy) return std::nullopt;
    NativePauseCompactMenu layout;
    for (size_t index = 0; index < layout.buttons.size(); ++index)
        layout.buttons[index] = SDL_Rect{static_cast<int>(center - 21),
            static_cast<int>(top + 5 + 3 * index), 43, 1};
    // The renderer omits the music inset when fewer than eight rows remain
    // (0x1e2162). Its frame spans bottom+1..bottom+4; only two rows are text.
    if (bottom <= int64_t(gps.dimy) - 8)
        layout.soundtrack = SDL_Rect{static_cast<int>(left + 1),
            static_cast<int>(bottom + 2), 61, 2};
    return layout;
}

static void capture_native_pause_ending_body(void *menu) {
    g_native_pause_ending_body.reset();
    try {
        // PE 53.16 options_interfacest: mode +0x4, title +0x8 and the
        // paragraph's vector<string *> +0x28. Modes 1/9/10 are fortress
        // ended/adventurer retired/adventurer dead. The render's row-count
        // and row loops read exactly this vector (0x1e1939..0x1e1a84).
        const uintptr_t owner = reinterpret_cast<uintptr_t>(menu);
        NativePauseEndingBody body;
        int32_t mode = -1;
        if (!native_pause_read(owner, {4, "options_interfacest", "context"}, mode)) return;
        using native_history_abi::enum_value;
        const std::array modes{
            std::pair{enum_value("options_context_type", "MAIN_DWARF_GAME_OVER", 1), 1},
            std::pair{enum_value("options_context_type", "MAIN_ADVENTURE_GAME_OVER_RETIRED", 9), 9},
            std::pair{enum_value("options_context_type", "MAIN_ADVENTURE_GAME_OVER_ABANDONED", 10), 10}};
        for (const auto &[native, canonical] : modes) if (native && *native == mode) {
            if (body.mode != -1) return;
            body.mode = canonical;
        }
        if (body.mode == -1) return;
        NativeBorrowedVector<uintptr_t> rows;
        const native_history_abi::FieldOffset title{8, "options_interfacest", "header"};
        if (!native_pause_read(owner, {0x28, "options_interfacest", "text.text"}, rows) ||
                !rows.valid(65536) || !rows.size() ||
                !native_history_copy_string(title.address(owner, 0, sizeof(NativeString), sizeof(NativeString)), body.title)) return;
        body.rows.reserve(rows.size());
        body.row_addresses.reserve(rows.size());
        for (size_t row = 0; row < rows.size(); ++row) {
            uintptr_t address = 0;
            std::string source;
            if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(rows.begin + row),
                    &address, sizeof(address)) || !address ||
                    !native_history_copy_string(address, source)) return;
            body.rows.push_back(std::move(source));
            body.row_addresses.push_back(address);
        }
        g_native_pause_ending_body = std::move(body);
    } catch (...) {}
}

static std::optional<NativeHelpIndexLayout> native_help_index_layout(void *menu,
        const graphicst &gps, int32_t screen_left, int32_t screen_right) {
    // options_interfacest renders manual-save progress before doing_help.
    // Its actual branch owns the directory, independently of translated
    // headings, visible skins or the page below the menu.
    const uintptr_t owner = reinterpret_cast<uintptr_t>(menu);
    uint8_t saving = 0, help = 0;
    if (!native_pause_read(owner, {0xc8, "options_interfacest", "do_manual_save"}, saving) || saving ||
            !native_pause_read(owner, {0xe9, "options_interfacest", "doing_help"}, help) || !help) return std::nullopt;
    NativeBorrowedVector<uintptr_t> intro;
    int32_t height = 0;
    if (!native_pause_read(owner, {0xf0, "options_interfacest", "doing_help_box.word"}, intro) ||
            !intro.valid(65536) ||
            !native_pause_read(owner, {0x124, "options_interfacest", "doing_help_box.max_y"}, height)) return std::nullopt;
    const int64_t top = intro.size() ? int64_t(height) + 12 : 8;
    if (top < 0 || top >= gps.dimy) return std::nullopt;
    std::array<int64_t, 2> left{{int64_t(screen_left) + 5, int64_t(screen_right) - 69}};
    std::array<int64_t, 2> right{{int64_t(screen_left) + 45, int64_t(screen_right) - 29}};
    const int64_t gap = left[1] - right[0] - 10;
    if (gap > 0) {
        const int64_t shift = gap / 3;
        left[0] += shift; right[0] += shift;
        left[1] -= shift; right[1] -= shift;
    }
    NativeHelpIndexLayout layout;
    static constexpr std::array entry_fields{
        native_history_abi::FieldOffset{0x130, "options_interfacest", "guide_context"},
        native_history_abi::FieldOffset{0x150, "options_interfacest", "popup_context"}};
    for (size_t i = 0; i < left.size(); ++i) {
        NativeBorrowedVector<int32_t> entries;
        if (!native_pause_read(owner, entry_fields[i], entries) || !entries.valid(65536)) return std::nullopt;
        const int count = static_cast<int>(entries.size());
        const int64_t bottom = std::min<int64_t>(gps.dimy - 4, top + count * 3 + 4);
        if (left[i] < 0 || right[i] >= gps.dimx || left[i] >= right[i] ||
                bottom <= top + 2) return std::nullopt;
        const int capacity = std::max(0, static_cast<int>((bottom - top - 4) / 3));
        NativeHelpIndexPanel panel;
        panel.frame = {static_cast<int>(left[i]), static_cast<int>(top),
            static_cast<int>(right[i] - left[i] + 1), static_cast<int>(bottom - top + 1)};
        panel.heading_y = static_cast<int>(top + 2);
        // Native titles start on the button's left cap; translated text
        // uses its padded interior, shared by captions and status rows.
        panel.caption_left = static_cast<int>(left[i] + 3);
        panel.caption_right = static_cast<int>(right[i] - (count > capacity ? 4 : 2));
        panel.first_caption_y = static_cast<int>(top + 5);
        panel.visible_entries = std::min(count, capacity);
        layout.panels.push_back(panel);
    }
    if (intro.size()) {
        const int64_t x = int64_t(screen_left) +
            (int64_t(screen_left) + screen_right) / 2 - 32;
        const int64_t bottom = int64_t(height) + 10;
        if (x < 0 || x + 64 >= gps.dimx || bottom < 8 || bottom >= gps.dimy)
            return std::nullopt;
        layout.intro = SDL_Rect{static_cast<int>(x), 8, 65, static_cast<int>(bottom - 8 + 1)};
    }
    return layout;
}

static void native_pause_draw(void *menu, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativePauseDrawFn>(g_native_pause_draw_hook.original);
    if (!original) return;
    if (reinterpret_cast<uintptr_t>(menu) != g_native_pause_owner) {
        callback.call_native([&] { original(menu, tick, screen_left, screen_right); });
        return;
    }
    TranslationStateScope translation;
    g_native_pause_ending_body.reset();
    g_native_pause_compact_menu.reset();
    auto *gps = native_graphics();
    const auto help_index = gps
        ? native_help_index_layout(menu, *gps, screen_left, screen_right) : std::nullopt;
    auto &layer = help_index ? g_native_help_layer : g_native_pause_layer;
    bool isolate = gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_pause_write_graphics && !g_native_info_write_graphics &&
        !g_native_stocks_write_graphics && !native_notification_write_active(gps) &&
        !g_native_display_write_graphics &&
        !g_native_squads_write_graphics &&
        !g_native_tooltip_output && !native_private_ui_write_active(gps) &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    if (isolate) {
        try {
            if (!layer.ready) {
                layer.foreground.prepare(*gps);
                layer.foreground.clear();
                // Each branch computes its own panel or dialog bounds. An
                // empty full-screen output preserves all actual stores
                // without inheriting any fortress or notification cells.
                layer.frames = {{0, 0, gps->dimx, gps->dimy}};
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(menu, tick, screen_left, screen_right); });
        return;
    }
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    if (help_index) {
        layer.index_panels = help_index->panels;
        layer.index_intro = help_index->intro;
        // The directory and its optional introduction share the tutorial
        // output layer. Sparse native stores, including both borders and
        // scrollbars, are painted once from this private grid.
        layer.frames = {{0, 0, gps->dimx, gps->dimy}};
        std::optional<NativeUiGridBinding> output;
        if (!native_ui_bind_grid(output, gps, *layer.foreground.graphics())) {
            layer.ready = false;
            callback.call_native([&] { original(menu, tick, screen_left, screen_right); });
            return;
        }
        struct WriteScope {
            const graphicst *previous = g_native_help_write_graphics;
            explicit WriteScope(const graphicst *graphics) { g_native_help_write_graphics = graphics; }
            ~WriteScope() { g_native_help_write_graphics = previous; }
        } writing(gps);
        callback.call_native([&] { original(menu, tick, screen_left, screen_right); });
        native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
            layer.foreground.graphics()->top_in_use);
        layer.ready = true;
        NativeUiReadScope::invalidate_reads();
        return;
    }
    std::optional<NativeUiGridBinding> output;
    if (!native_ui_bind_grid(output, gps, *layer.foreground.graphics())) {
        layer.ready = false;
        callback.call_native([&] { original(menu, tick, screen_left, screen_right); });
        return;
    }
    NativeInfoCapturedTextScope captions(g_native_pause_text);
    NativePauseWriteScope writing(gps);
    const auto compact_menu = native_pause_compact_layout(menu, *gps, screen_left, screen_right);
    callback.call_native([&] { original(menu, tick, screen_left, screen_right); });
    capture_native_pause_ending_body(menu);
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    layer.ready = true;
    g_native_pause_compact_menu = compact_menu;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_pause_layer_hook() {
    if (g_native_pause_draw_hook.installed) return true;
    constexpr const char *label = "Native Escape menu complete draw entry";
    const auto base = native_history_profile_base();
    const auto owner = native_reference_address(base, 0x18a72a0);
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x1ddd50));
    // The configured PE editions begin with one position-independent store:
    // MOV [RSP+0x10], RBX. RCX owns the menu; EDX/R8D/R9D carry its render
    // tick and screen edges. No incoming stack arguments are consumed.
    std::vector<unsigned char> prefix{0x48, 0x89, 0x5c, 0x24, 0x10};
    if (!owner || !draw || !native_reference_bytes(0x1ddd50, prefix) ||
            !g_native_pause_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_pause_draw), {}, label)) return false;
    g_native_pause_owner = owner;
    return g_native_pause_draw_hook.install(label);
}

static void uninstall_native_pause_layer_hook() {
    g_native_pause_draw_hook.uninstall("Native Escape menu draw entry restore");
    if (!g_native_pause_draw_hook.active()) {
        g_native_pause_owner = 0;
        g_native_pause_target.release();
        native_pause_begin_frame();
        g_native_pause_layer = {};
        g_native_pause_text = {};
    }
}
static bool native_pause_layer_hook_active() { return g_native_pause_draw_hook.active(); }
#else
// These PE bindings have no corresponding established ELF owner.
static bool install_native_pause_layer_hook() { return true; }
static void uninstall_native_pause_layer_hook() {
    g_native_pause_target.release();
    native_pause_begin_frame();
}
static bool native_pause_layer_hook_active() { return false; }
#endif

static void native_pause_present_layer(SDL_Renderer *renderer,
        void (*draw_pause)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_pause_layer, g_native_pause_target, renderer, draw_pause);
}
