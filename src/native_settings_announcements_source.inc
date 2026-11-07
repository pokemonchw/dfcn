// Settings is a modal main_interface member, including while the underlying
// viewscreen remains viewscreen_titlest. The native render argument owns this
// snapshot; no screen character, translated caption or guessed page anchor is
// used to identify the page, its controls, or its announcement events.
enum class NativeSettingsTextKind {
    Tab, Done, FilterCategory, FilterFlag, ColumnHeader,
    AnnouncementName, AnnouncementToggle,
};

struct NativeSettingsText {
    NativeSettingsTextKind kind = NativeSettingsTextKind::ColumnHeader;
    uintptr_t widget = 0;
    SDL_Rect rect{};       // Available layout box, in native absolute tiles.
    SDL_Rect glyph{};      // Actual native English glyph footprint.
    SDL_Rect clip{};
    std::string source;
    std::string drawn_source;
    int event_id = -1;
    int column = -1;
    int fg = 7;
    int bg = 0;
    uint32_t mask = 0;
    bool enabled = false;
    bool bright = true;
    int split_height = 1;
};

struct NativeSettingsFrame {
    bool active = false;
    int page = -1;
    int context = -1;
    int dimx = 0;
    int dimy = 0;
    uintptr_t settings = 0;
    int scroll = 0;
    int filter_category = -1;
    int filter_flag = -1;
    // The public page/column identities use our six semantic settings roles;
    // native child indices follow the actual settings.tab vector instead.
    std::vector<int> tab_kinds;
    std::vector<NativeSettingsText> texts;
};

static NativeSettingsFrame g_native_settings_frame;

#ifdef _WIN32
namespace native_settings_source {

static uintptr_t member(uintptr_t object, native_history_abi::FieldOffset field,
        size_t width) noexcept {
    return reinterpret_cast<uintptr_t>(native_object_member_address(
        reinterpret_cast<const void *>(object), field, width));
}

static std::array<std::optional<int32_t>, 6> tab_values() {
    return {{
        native_history_abi::enum_value("settings_tab_type", "VIDEO", 0),
        native_history_abi::enum_value("settings_tab_type", "AUDIO", 1),
        native_history_abi::enum_value("settings_tab_type", "GAME", 2),
        native_history_abi::enum_value("settings_tab_type", "KEYBINDINGS", 3),
        native_history_abi::enum_value("settings_tab_type", "ANNOUNCEMENTS", 4),
        native_history_abi::enum_value("settings_tab_type", "DIFFICULTY", 5)
    }};
}

static int tab_kind(int32_t value, const std::array<std::optional<int32_t>, 6> &values) {
    int result = -1;
    for (size_t i = 0; i < values.size(); ++i)
        if (values[i] && *values[i] == value) {
            if (result >= 0) return -1;
            result = static_cast<int>(i);
        }
    return result;
}

// A vtable proves the widget kind; its named fields independently prove the
// memory layout. Neither a canonical vtable RVA nor a matching caption grants
// permission to read the reference object's member offsets.
static bool type(uintptr_t widget, uintptr_t reference_vtable) {
    uintptr_t vtable = 0;
    return widget && native_history_copy(widget, vtable) &&
        vtable == native_reference_address(native_history_profile_base(), reference_vtable);
}

static bool rect(uintptr_t widget, SDL_Rect &result, bool visible = true) {
    std::array<int32_t, 4> bounds{};
    uint8_t flags = 0;
    static constexpr std::array<native_history_abi::FieldOffset, 4> edges{{
        {0x10, "widget", "rect.x1"}, {0x14, "widget", "rect.y1"},
        {0x18, "widget", "rect.x2"}, {0x1c, "widget", "rect.y2"}
    }};
    if (!widget) return false;
    for (size_t i = 0; i < edges.size(); ++i)
        if (!native_history_copy(member(widget, edges[i], sizeof(bounds[i])), bounds[i])) return false;
    if (!native_history_copy(member(widget, {0xa0, "widget", "flag"}, sizeof(flags)), flags)) return false;
    if (visible) {
        const auto active = native_history_abi::enum_value("widget_flag", "VISIBILITY_ACTIVE", 1);
        const auto shown = native_history_abi::enum_value("widget_flag", "VISIBILITY_VISIBLE", 2);
        if (!active || !shown || *active <= 0 || *shown <= 0 ||
                (*active | *shown) > UINT8_MAX ||
                (flags & (*active | *shown)) != (*active | *shown)) return false;
    }
    if (bounds[0] < -4096 || bounds[1] < -4096 ||
            bounds[2] > 4096 || bounds[3] > 4096 ||
            bounds[2] < bounds[0] || bounds[3] < bounds[1]) return false;
    result = {bounds[0], bounds[1], bounds[2] - bounds[0] + 1,
        bounds[3] - bounds[1] + 1};
    return true;
}

static bool vector(uintptr_t address, size_t stride, size_t maximum,
        std::vector<uintptr_t> &records) {
    std::array<uintptr_t, 3> span{};
    if (!address || !stride || !native_history_copy(address, span) || span[0] > span[1] ||
            span[1] > span[2] || (span[1] - span[0]) % stride ||
            (span[2] - span[0]) % stride ||
            (span[1] - span[0]) / stride > maximum ||
            (!span[0] && span[1])) return false;
    records.clear();
    records.reserve((span[1] - span[0]) / stride);
    for (uintptr_t at = span[0]; at != span[1]; at += stride) records.push_back(at);
    return true;
}

static bool shared_children(uintptr_t address, std::vector<uintptr_t> &result,
        size_t maximum) {
    std::vector<uintptr_t> records;
    if (!vector(address, 16, maximum, records)) return false;
    result.clear();
    result.reserve(records.size());
    for (uintptr_t address : records) {
        uintptr_t child = 0;
        if (!native_history_copy(address, child) || !child) return false;
        result.push_back(child);
    }
    return true;
}

static bool children(uintptr_t widget, std::vector<uintptr_t> &result,
        size_t maximum = 1024) {
    return shared_children(member(widget, {0x160, "widget_container", "children"}, 24),
        result, maximum);
}

static bool intersects(const SDL_Rect &left, const SDL_Rect &right) {
    return left.x < right.x + right.w && right.x < left.x + left.w &&
        left.y < right.y + right.h && right.y < left.y + left.h;
}

static bool text(uintptr_t widget, NativeSettingsTextKind kind,
        int column, const SDL_Rect &clip, NativeSettingsText &out) {
    SDL_Rect box{};
    std::string shown;
    int16_t fg = 7, bg = 0;
    uint8_t bright = 0;
    if (!rect(widget, box) || !intersects(box, clip) ||
            !native_history_copy_string(member(widget, {0x150, "widget_text", "str"}, 32), shown) ||
            shown.empty() || shown.size() > 1024 ||
            !native_history_copy(member(widget, {0x170, "widget_text", "fg"}, sizeof(fg)), fg) ||
            !native_history_copy(member(widget, {0x172, "widget_text", "bg"}, sizeof(bg)), bg) ||
            !native_history_copy(member(widget, {0x174, "widget_text", "bright"}, sizeof(bright)), bright)) return false;
    out.kind = kind;
    out.widget = widget;
    out.rect = box;
    out.glyph = {box.x, box.y, static_cast<int>(shown.size()), 1};
    out.clip = clip;
    out.source = std::move(shown);
    out.drawn_source = out.source;
    out.column = column;
    out.fg = fg;
    out.bg = bg;
    out.bright = bright != 0;
    return true;
}

static void tabs(uintptr_t widget, const SDL_Rect &clip, NativeSettingsFrame &frame) {
    static constexpr std::array<std::string_view, 6> sources = {
        "Video", "Audio", "Game", "Keybindings", "Announcements", "Difficulty"};
    SDL_Rect box{};
    std::vector<uintptr_t> labels, rows;
    if (!type(widget, 0x15eefd0) || !rect(widget, box) ||
            !vector(member(widget, {0x180, "widget_tabs", "tab_labels"}, 24), 32, 64, labels) ||
            labels.size() != frame.tab_kinds.size() ||
            !vector(member(widget, {0x198, "widget_tabs", "rows"}, 24), 16, 64, rows)) return;
    const bool graphical = !native_ui_classic().value_or(false);
    int y = box.y;
    for (uintptr_t row : rows) {
        std::array<uintptr_t, 2> range{};
        if (!native_history_copy(row, range) || range[0] > range[1] ||
                range[1] >= labels.size()) return;
        int x = box.x;
        for (size_t index = range[0]; index <= range[1]; ++index) {
            std::string label;
            if (!native_history_copy_string(labels[index], label) || label.size() > 80) return;
            const int semantic = frame.tab_kinds[index];
            if (semantic < 0 || semantic >= static_cast<int>(sources.size())) {
                x += static_cast<int>(label.size()) + 4;
                continue;
            }
            NativeSettingsText item;
            item.kind = NativeSettingsTextKind::Tab;
            item.widget = widget;
            item.column = semantic;
            item.source = sources[semantic];
            item.drawn_source = label;
            item.rect = {x, y, static_cast<int>(label.size()) + 4, 2};
            item.glyph = {x + 2, y + (graphical ? 0 : 1),
                static_cast<int>(label.size()), graphical ? 2 : 1};
            item.clip = clip;
            item.enabled = frame.page == semantic;
            item.fg = graphical && item.enabled ? 0 : 7;
            item.bright = graphical ? !item.enabled : item.enabled;
            item.split_height = graphical ? 2 : 1;
            // Native graphical tabs paint one caption in two halves, flags
            // 8 and 16 (1417f00), rather than two independently placed labels.
            frame.texts.push_back(std::move(item));
            x += static_cast<int>(label.size()) + 4;
        }
        y -= 2;
    }
}

static void filters(uintptr_t widget, const SDL_Rect &clip, NativeSettingsFrame &frame) {
    std::vector<uintptr_t> groups;
    SDL_Rect gutter{};
    if (!type(widget, 0x1785978) || !rect(widget, gutter) ||
            !shared_children(member(widget, {0x150, "multifilter", "filters"}, 24), groups, 2) ||
            groups.size() != 2) return;
    const size_t entry_size = native_history_abi::type_size(
        native_history_abi::semantic_id("filter_entry"), 0x50);
    for (size_t group = 0; group < groups.size(); ++group) {
        const uintptr_t filter = groups[group];
        if (!type(filter, 0x1785d60)) continue;
        int32_t selected = -1;
        if (!native_history_copy(member(filter, {0x1b8, "widget_filter", "filter_idx"}, sizeof(selected)), selected)) continue;
        (group == 0 ? frame.filter_category : frame.filter_flag) = selected;
        const auto capture_label = [&](uintptr_t address, int semantic) {
            uintptr_t label = 0;
            NativeSettingsText item;
            if (!native_history_copy(address, label) ||
                    !text(label, group == 0 ? NativeSettingsTextKind::FilterCategory :
                        NativeSettingsTextKind::FilterFlag, semantic, clip, item)) return;
            item.enabled = selected == semantic;
            item.mask = group && semantic >= 0 ? uint32_t(1) << semantic : 0;
            item.rect.w = std::max(1, gutter.x + gutter.w - item.rect.x);
            // The second filter object can have an empty rect; its label
            // objects still own valid absolute geometry and remain visible.
            frame.texts.push_back(std::move(item));
        };
        // Only the label is consumed; the embedded filter's unrelated set
        // layout must not gate this control or the separately owned options.
        capture_label(member(filter, {0x150, "widget_filter", "all_filter.label"},
            sizeof(uintptr_t)), -1);
        if (!entry_size || entry_size > 4096) continue;
        std::vector<uintptr_t> options;
        if (!vector(member(filter, {0x1a0, "widget_filter", "filters"}, 24),
                entry_size, group == 0 ? 4 : 8, options)) continue;
        for (size_t index = 0; index < options.size(); ++index)
            capture_label(member(options[index], {0, "filter_entry", "label"},
                sizeof(uintptr_t)), static_cast<int>(index));
    }
}

static void table(uintptr_t widget, const SDL_Rect &clip, NativeSettingsFrame &frame) {
    if (!type(widget, 0x1785bd0)) return;
    uintptr_t header = 0, entries = 0;
    std::vector<uintptr_t> columns, rows;
    SDL_Rect viewport{}, name_column{};
    if (!native_history_copy(member(widget, {0x178, "widget_table", "labels"}, sizeof(header)), header) ||
            !native_history_copy(member(widget, {0x188, "widget_table", "entries"}, sizeof(entries)), entries) ||
            !type(entries, 0x15eef08) || !rect(entries, viewport) ||
            !children(header, columns, 9) || columns.size() != 9 ||
            !rect(columns[0], name_column)) return;
    native_history_copy(member(entries, {0x180, "widget_scroll_rows", "scroll"}, sizeof(frame.scroll)), frame.scroll);
    static constexpr std::array<std::string_view, 9> headings = {
        "Name", "Popup", "Pause", "Recenter", "Adv", "Fort", "Report", "Report (Active)", "Alert"};
    for (size_t index = 0; index < columns.size(); ++index) {
        NativeSettingsText item;
        if (!text(columns[index], NativeSettingsTextKind::ColumnHeader,
                static_cast<int>(index) - 1, clip, item)) continue;
        item.source = headings[index];
        // A wide heading (Recenter or Report Active) must not move its center
        // away from the five-tile button in that native table column. The
        // original glyph footprint remains separate and can be fully erased.
        if (index > 0) item.rect.w = 5;
        if (index == 7 && item.rect.h > 1) {
            // This one native multiline header is wrapped into these two
            // semantic lines by 14198c0; preserve both erase footprints.
            item.source = "Report";
            item.drawn_source = item.source;
            item.glyph.w = 6;
            frame.texts.push_back(item);
            item.source = "(Active)";
            item.drawn_source = item.source;
            item.glyph.y += 1;
            item.glyph.w = 8;
        }
        frame.texts.push_back(std::move(item));
    }
    if (!children(entries, rows, 1024)) return;
    const uintptr_t flags = native_reference_address(native_history_profile_base(), 0x2390ca0);
    const uintptr_t truth_type = native_reference_address(native_history_profile_base(), 0x1615fe8);
    // check_truth is a std::function with a private closure, not a declared
    // widget member pointer. Only the exact reference ABI authorizes its
    // retained internal offsets; a mapped vtable alone does not do so.
    const bool closure_layout = native_history_abi::snapshot().reference_identity && flags && truth_type;
    for (uintptr_t row : rows) {
        SDL_Rect row_box{};
        std::vector<uintptr_t> cells;
        if (!rect(row, row_box) || !intersects(row_box, viewport) ||
                !children(row, cells, 9) || cells.size() != 9) continue;
        NativeSettingsText name;
        if (text(cells[0], NativeSettingsTextKind::AnnouncementName, -1, viewport, name)) {
            name.rect.x = name_column.x;
            name.rect.w = name_column.w;
            // The first column's native text owns the announcement caption
            // independently of the eight optional predicate closures.
            frame.texts.push_back(std::move(name));
        }
        if (!closure_layout) continue;
        std::array<NativeSettingsText, 8> buttons;
        int32_t event = -1;
        bool complete = true;
        for (size_t column = 0; column < buttons.size(); ++column) {
            const uintptr_t button = cells[column + 1];
            uintptr_t predicate = 0, predicate_type = 0;
            std::array<uint32_t, 2> identity{};
            uint32_t state = 0;
            SDL_Rect box{};
            if (!type(button, 0x1785ca8) || !rect(button, box) ||
                    !native_history_copy(button + 0x248, predicate) ||
                    !native_history_copy(predicate, predicate_type) || predicate_type != truth_type ||
                    !native_history_copy(predicate + 8, identity) ||
                    identity[0] >= 4096 || identity[1] != (uint32_t(1) << column) ||
                    !native_history_copy(flags + identity[0] * 4, state) ||
                    (event >= 0 && event != static_cast<int32_t>(identity[0]))) {
                complete = false;
                break;
            }
            event = static_cast<int32_t>(identity[0]);
            NativeSettingsText &item = buttons[column];
            item.kind = NativeSettingsTextKind::AnnouncementToggle;
            item.widget = button;
            item.event_id = event;
            item.column = static_cast<int>(column);
            item.mask = identity[1];
            item.enabled = (state & item.mask) != 0;
            item.source = item.enabled ? "Yes" : "No";
            item.drawn_source = item.source;
            item.rect = {box.x + 1, box.y + 1, std::max(1, box.w - 2), std::max(1, box.h - 2)};
            item.glyph = { (box.x + box.x + box.w - 1) / 2 - static_cast<int>(item.source.size()) / 2,
                (box.y + box.y + box.h - 1) / 2, static_cast<int>(item.source.size()), 1 };
            item.clip = viewport;
        }
        if (!complete) continue;
        for (NativeSettingsText &button : buttons)
            frame.texts.push_back(std::move(button));
    }
}

} // namespace native_settings_source
#endif

static void native_settings_capture(void *settings) {
    NativeSettingsFrame frame;
#ifdef _WIN32
    using namespace native_settings_source;
    const auto *graphics = native_graphics();
    frame.settings = reinterpret_cast<uintptr_t>(settings);
    uint8_t open = 0;
    int32_t native_page = -1;
    if (!frame.settings || !graphics ||
            !native_history_copy(member(frame.settings, {0, "main_interface_settings", "open"}, sizeof(open)), open) || !open ||
            !native_history_copy(member(frame.settings, {0x20, "main_interface_settings", "current_mode"}, sizeof(native_page)), native_page)) {
        g_native_settings_frame = std::move(frame);
        return;
    }
    native_history_copy(member(frame.settings, {4, "main_interface_settings", "context"}, sizeof(frame.context)), frame.context);
    frame.active = true;
    frame.dimx = graphics->dimx;
    frame.dimy = graphics->dimy;
    try {
      const auto values = tab_values();
      frame.page = tab_kind(native_page, values);
      if (frame.page == 4) {
        std::vector<uintptr_t> tab_records;
        if (vector(member(frame.settings, {8, "main_interface_settings", "tab"}, 24), 4, 64, tab_records)) {
            for (const uintptr_t record : tab_records) {
                int32_t value = -1;
                if (!native_history_copy(record, value)) { frame.tab_kinds.clear(); break; }
                frame.tab_kinds.push_back(tab_kind(value, values));
            }
        }
        const SDL_Rect screen{0, 0, frame.dimx, frame.dimy};
        SDL_Rect root_box{};
        std::vector<uintptr_t> root, pages, content;
        const uintptr_t container = member(frame.settings,
            {0x28, "main_interface_settings", "container_widget"}, sizeof(uintptr_t));
        if (rect(container, root_box) && children(container, root, 4) &&
                !root.empty() && type(root[0], 0x15eefd0)) {
            tabs(root[0], screen, frame);
            NativeSettingsText done;
            done.kind = NativeSettingsTextKind::Done;
            done.widget = frame.settings;
            done.source = "Done";
            done.drawn_source = done.source;
            done.rect = {root_box.x + root_box.w - 11, root_box.y + 2, 8, 3};
            done.glyph = {root_box.x + root_box.w - 9, root_box.y + 3, 4, 1};
            done.clip = screen;
            frame.texts.push_back(std::move(done));
            const auto page = std::find(frame.tab_kinds.begin(), frame.tab_kinds.end(), 4);
            const bool unique_page = page != frame.tab_kinds.end() &&
                std::find(std::next(page), frame.tab_kinds.end(), 4) == frame.tab_kinds.end();
            const size_t page_index = static_cast<size_t>(page - frame.tab_kinds.begin());
            if (unique_page && children(root[0], pages, 64) &&
                    pages.size() == frame.tab_kinds.size() &&
                    children(pages[page_index], content, 4) && content.size() >= 2) {
                table(content[0], screen, frame);
                filters(content[1], screen, frame);
            }
        }
      }
    } catch (...) {
        frame.texts.clear();
    }
#else
    (void)settings;
#endif
    // Keep active/page even if an individual widget snapshot was unavailable:
    // the owning page must never silently fall back to screen-text inference.
    g_native_settings_frame = std::move(frame);
}
