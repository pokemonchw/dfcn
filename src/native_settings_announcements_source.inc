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
    std::vector<NativeSettingsText> texts;
};

static NativeSettingsFrame g_native_settings_frame;

namespace native_settings_source {

static uintptr_t field(uintptr_t object, std::string_view type, size_t legacy, size_t width = 1) {
    return native_history_object_field(object, type, legacy, width);
}

// Both configured 53.16 PE editions have these MSVC widget field layouts.
// The existing image binding translates every vtable/global RVA separately.
// Constructor: 234ad0, announcement row builder: 235e60.
static bool type(uintptr_t widget, uintptr_t reference_vtable) {
    uintptr_t vtable = 0;
#ifdef _WIN32
    return widget && native_history_copy(widget, vtable) &&
        vtable == native_reference_address(native_history_profile_base(), reference_vtable);
#else
    const char *symbol = nullptr;
    switch (reference_vtable) {
    case 0x15eefd0: symbol = "_ZTVN7widgets4tabsE"; break;
    case 0x15eef08: symbol = "_ZTVN7widgets11scroll_rowsE"; break;
    case 0x1785978: symbol = "_ZTVN7widgets11multifilterE"; break;
    case 0x1785d60: symbol = "_ZTVN7widgets11multifilter12indiv_filterE"; break;
    case 0x1785bd0: symbol = "_ZTVN7widgets5tableE"; break;
    case 0x1785ca8: symbol = "_ZTVN7widgets13better_buttonE"; break;
    default: return false;
    }
    const auto table = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, symbol));
    return table && native_history_copy(widget, vtable) && vtable == table + 2 * sizeof(uintptr_t);
#endif
}

static bool rect(uintptr_t widget, SDL_Rect &result, bool visible = true) {
    std::array<int32_t, 4> bounds{};
    uint8_t flags = 0;
    if (!widget || !native_history_copy(field(widget, "widget", 0x10, sizeof(int32_t)), bounds) ||
            !native_history_copy(field(widget, "widget", 0xa0), flags) ||
            (visible && (flags & 3) != 3) ||
            bounds[0] < -4096 || bounds[1] < -4096 ||
            bounds[2] > 4096 || bounds[3] > 4096 ||
            bounds[2] < bounds[0] || bounds[3] < bounds[1]) return false;
    result = {bounds[0], bounds[1], bounds[2] - bounds[0] + 1,
        bounds[3] - bounds[1] + 1};
    return true;
}

static bool vector(uintptr_t address, size_t stride, size_t maximum,
        std::vector<uintptr_t> &records) {
    std::array<uintptr_t, 3> span{};
    if (!native_history_copy(address, span) || span[0] > span[1] ||
            span[1] > span[2] || (span[1] - span[0]) % stride ||
            (span[1] - span[0]) / stride > maximum ||
            (!span[0] && span[1])) return false;
    records.clear();
    records.reserve((span[1] - span[0]) / stride);
    for (uintptr_t at = span[0]; at != span[1]; at += stride) records.push_back(at);
    return true;
}

static bool children(uintptr_t widget, std::vector<uintptr_t> &result,
        size_t maximum = 1024, size_t offset = 0x160) {
    std::vector<uintptr_t> records;
    const auto address = offset == 0x150 ? field(widget, "multifilter", offset, 24)
        : field(widget, "widget_container", offset, 24);
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

static bool intersects(const SDL_Rect &left, const SDL_Rect &right) {
    return left.x < right.x + right.w && right.x < left.x + left.w &&
        left.y < right.y + right.h && right.y < left.y + left.h;
}

static bool text(uintptr_t widget, NativeSettingsTextKind kind,
        int column, const SDL_Rect &clip, NativeSettingsText &out) {
    SDL_Rect box{};
    std::string shown;
    std::array<int16_t, 2> colors{};
    uint8_t bright = 0;
    if (!rect(widget, box) || !intersects(box, clip) ||
            !native_history_copy_string(field(widget, "widget_text", 0x150, 32), shown) ||
            shown.empty() || shown.size() > 1024 ||
            !native_history_copy(field(widget, "widget_text", 0x170, sizeof(int16_t)), colors) ||
            !native_history_copy(field(widget, "widget_text", 0x174), bright)) return false;
    out.kind = kind;
    out.widget = widget;
    out.rect = box;
    out.glyph = {box.x, box.y, static_cast<int>(shown.size()), 1};
    out.clip = clip;
    out.source = std::move(shown);
    out.drawn_source = out.source;
    out.column = column;
    out.fg = colors[0];
    out.bg = colors[1];
    out.bright = bright != 0;
    return true;
}

static void tabs(uintptr_t widget, const SDL_Rect &clip, NativeSettingsFrame &frame) {
    static constexpr std::array<std::string_view, 6> sources = {
        "Video", "Audio", "Game", "Keybindings", "Announcements", "Difficulty"};
    SDL_Rect box{};
    std::vector<uintptr_t> labels, rows;
    if (!type(widget, 0x15eefd0) || !rect(widget, box) ||
            !vector(field(widget, "widget_tabs", 0x180, 24), 32, sources.size(), labels) ||
            !vector(field(widget, "widget_tabs", 0x198, 24), 16, sources.size(), rows)) return;
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
            NativeSettingsText item;
            item.kind = NativeSettingsTextKind::Tab;
            item.widget = widget;
            item.column = static_cast<int>(index);
            item.source = sources[index];
            item.drawn_source = label;
            item.rect = {x, y, static_cast<int>(label.size()) + 4, 2};
            item.glyph = {x + 2, y + (graphical ? 0 : 1),
                static_cast<int>(label.size()), graphical ? 2 : 1};
            item.clip = clip;
            item.enabled = frame.page == static_cast<int>(index);
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
    if (!type(widget, 0x1785978) || !rect(widget, gutter) || !children(widget, groups, 2, 0x150) ||
            groups.size() != 2) return;
    for (size_t group = 0; group < groups.size(); ++group) {
        const uintptr_t filter = groups[group];
        if (!type(filter, 0x1785d60)) continue;
        int32_t selected = -1;
        if (!native_history_copy(field(filter, "widget_filter", 0x1b8, 4), selected)) continue;
        (group == 0 ? frame.filter_category : frame.filter_flag) = selected;
        std::vector<uintptr_t> options;
        const size_t entry_size = native_history_filter_entry_size();
        if (!vector(field(filter, "widget_filter", 0x1a0, 24), entry_size,
                group == 0 ? 4 : 8, options)) continue;
        options.insert(options.begin(), field(filter, "widget_filter", 0x150, 16));
        for (size_t index = 0; index < options.size(); ++index) {
            uintptr_t label = 0;
            NativeSettingsText item;
            const int semantic = static_cast<int>(index) - 1;
            if (!native_history_copy(options[index], label) ||
                    !text(label, group == 0 ? NativeSettingsTextKind::FilterCategory :
                        NativeSettingsTextKind::FilterFlag, semantic, clip, item)) continue;
            item.enabled = selected == semantic;
            item.mask = group && semantic >= 0 ? uint32_t(1) << semantic : 0;
            item.rect.w = std::max(1, gutter.x + gutter.w - item.rect.x);
            // The second filter object can have an empty rect; its label
            // objects still own valid absolute geometry and remain visible.
            frame.texts.push_back(std::move(item));
        }
    }
}

static void table(uintptr_t widget, const SDL_Rect &clip, NativeSettingsFrame &frame) {
    if (!type(widget, 0x1785bd0)) return;
    uintptr_t header = 0, entries = 0;
    std::vector<uintptr_t> columns, rows;
    SDL_Rect viewport{}, name_column{};
    if (!native_history_copy(field(widget, "widget_table", 0x178, 8), header) ||
            !native_history_copy(field(widget, "widget_table", 0x188, 8), entries) ||
            !type(entries, 0x15eef08) || !rect(entries, viewport) ||
            !children(header, columns, 9) || columns.size() != 9 ||
            !rect(columns[0], name_column) || !children(entries, rows, 1024)) return;
    native_history_copy(field(entries, "widget_scroll_rows", 0x180, 4), frame.scroll);
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
    const uintptr_t flags = native_history_named_global("d_init", "announcements.flags", sizeof(uint32_t));
#ifdef _WIN32
    const uintptr_t truth_type = native_reference_address(native_history_profile_base(), 0x1615fe8);
    if (!flags || !truth_type) return;
#else
    if (!flags) return;
#endif
    for (uintptr_t row : rows) {
        SDL_Rect row_box{};
        std::vector<uintptr_t> cells;
        if (!rect(row, row_box) || !intersects(row_box, viewport) ||
                !children(row, cells, 9) || cells.size() != 9) continue;
        std::array<NativeSettingsText, 8> buttons;
        int32_t event = -1;
        bool complete = true;
        for (size_t column = 0; column < buttons.size(); ++column) {
            const uintptr_t button = cells[column + 1];
            uintptr_t predicate = 0, predicate_type = 0;
            std::array<uint32_t, 2> identity{};
            uint32_t state = 0;
            SDL_Rect box{};
            if (!type(button, 0x1785ca8) || !rect(button, box)) {
                complete = false;
                break;
            }
#ifdef _WIN32
            if (
                    !native_history_copy(button + 0x248, predicate) ||
                    !native_history_copy(predicate, predicate_type) || predicate_type != truth_type ||
                    !native_history_copy(predicate + 8, identity)) {
                complete = false;
                break;
            }
#else
            // libstdc++ keeps this trivial two-int lambda in std::function's
            // inline storage. The table/row/button chain establishes its owner.
            predicate = native_history_object_member(button, "widget_better_button", "check_truth", 32);
            if (!native_history_copy(predicate, identity) ||
                    !native_history_copy(predicate + 24, predicate_type) || !predicate_type) {
                complete = false;
                break;
            }
#endif
            if (
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
        NativeSettingsText name;
        if (text(cells[0], NativeSettingsTextKind::AnnouncementName, -1, viewport, name)) {
            name.event_id = event;
            name.rect.x = name_column.x;
            name.rect.w = name_column.w;
            // 244bd0 creates an ordinary widget_text (0x180 bytes), whose
            // +0x150 string is the event caption supplied by 749ee0.
            frame.texts.push_back(std::move(name));
        }
        for (NativeSettingsText &button : buttons)
            frame.texts.push_back(std::move(button));
    }
}

} // namespace native_settings_source

static void native_settings_capture(void *settings) {
    NativeSettingsFrame frame;
    const auto *graphics = native_graphics();
    frame.settings = reinterpret_cast<uintptr_t>(settings);
    uint8_t open = 0;
    if (!frame.settings || !graphics ||
            !native_history_copy(frame.settings, open) || !open ||
            !native_history_copy(frame.settings + 0x20, frame.page) ||
            !native_history_copy(frame.settings + 4, frame.context)) {
        g_native_settings_frame = std::move(frame);
        return;
    }
    frame.active = true;
    frame.dimx = graphics->dimx;
    frame.dimy = graphics->dimy;
    try {
      if (frame.page == 4) {
        using namespace native_settings_source;
        const SDL_Rect screen{0, 0, frame.dimx, frame.dimy};
        SDL_Rect root_box{};
        std::vector<uintptr_t> root, pages, content;
        const uintptr_t container = frame.settings + 0x28;
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
            if (children(root[0], pages, 6) && pages.size() > 4 &&
                    children(pages[4], content, 4) && content.size() >= 2) {
                table(content[0], screen, frame);
                filters(content[1], screen, frame);
            }
        }
      }
    } catch (...) {
        frame.texts.clear();
    }
    // Keep active/page even if an individual widget snapshot was unavailable:
    // the owning page must never silently fall back to screen-text inference.
    g_native_settings_frame = std::move(frame);
}
