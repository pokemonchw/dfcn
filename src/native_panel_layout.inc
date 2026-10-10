struct NativeCollapsedHelpPanel {
    SDL_Rect frame;
    SDL_Rect title;
};

// A matching or layout traversal reads one current native grid. Independent
// field owners share its widget and border proofs only inside this traversal,
// never across raw/composited passes, frames, renderer changes or hot reload.
// Snapshot-row and explicitly clipped widget reads retain their own proof.
class NativePanelReadScope {
public:
    const graphicst *gps;
    const int dimx, dimy;
    std::vector<std::array<uint32_t, 16>> cells;
    std::map<std::array<int, 7>, std::optional<SDL_Rect>> frames;
    std::vector<int> picture_rights;
    std::vector<uint8_t> item_actions;
    std::vector<uint8_t> item_anchor_candidates;
    std::vector<std::pair<int, int>> item_anchor_positions;
    std::optional<std::array<std::vector<int>, 256>> main_button_first_glyph;
    struct MainButtonSpans {
        uint64_t revision = 0;
        const unsigned char *screen = nullptr, *screen_top = nullptr;
        bool top_in_use = false;
        std::vector<SDL_Rect> spans;
    };
    std::optional<MainButtonSpans> main_button_spans;
    std::optional<std::vector<NativeCollapsedHelpPanel>> collapsed_help_panels;
    std::optional<std::vector<SDL_Rect>> help_frames;
    std::optional<std::vector<SDL_Rect>> announcement_frames;
    std::optional<std::vector<SDL_Rect>> overlay_frames;
    inline static thread_local NativePanelReadScope *active = nullptr;

    explicit NativePanelReadScope(const graphicst *graphics)
        : gps(graphics), dimx(graphics ? graphics->dimx : 0),
          dimy(graphics ? graphics->dimy : 0), previous_(active) { active = this; }
    ~NativePanelReadScope() { active = previous_; }
    NativePanelReadScope(const NativePanelReadScope &) = delete;
    NativePanelReadScope &operator=(const NativePanelReadScope &) = delete;

    bool contains(const graphicst &graphics, int x, int y) const {
        return gps == &graphics && dimx == graphics.dimx && dimy == graphics.dimy &&
            dimx > 0 && dimx <= 1000 && dimy > 0 && dimy <= 1000 &&
            x >= 0 && x < dimx && y >= 0 && y < dimy;
    }
private:
    NativePanelReadScope *previous_;
};

// Read only the currently visible native texture layer. A foreground widget
// must never borrow controls from a covered background panel.
static bool native_ui_texture_at(const graphicst &gps, int x, int y, int32_t texture) {
    if (texture <= 0 || x < 0 || y < 0 || x >= gps.dimx || y >= gps.dimy) return false;
    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
    const bool top = native_ui_top_layer_at(gps, at);
    const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
    const auto *lower = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
    return (primary && primary[at] == texture) || (lower && lower[at] == texture);
}

// init-owned skins are texture IDs in graphical mode, but packed CP437 and
// palette indices in classic mode. add_lower_tile writes the latter directly
// into the character grid, so an empty texture layer is not a missing widget.
// Keep that representation difference below the common closed-frame readers.
static bool native_ui_skin_at(const graphicst &gps, int x, int y, int32_t skin,
        bool classic, bool caption = false, bool native_draw = false,
        bool picture_artwork = false, bool utf8_caption = false) {
    if (!classic) return native_ui_texture_at(gps, x, y, skin);
    if (skin < 0 || skin > 0x7fff || x < 0 || y < 0 ||
        x >= gps.dimx || y >= gps.dimy) return false;
    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
    const bool top = !native_draw && native_ui_top_layer_at(gps, at);
    const auto *screen = top ? gps.screen_top : gps.screen;
    const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
    const auto *lower = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
    const auto *anchored = top ? gps.screentexpos_top_anchored : gps.screentexpos_anchored;
    if (!screen || (primary && primary[at]) || (lower && lower[at]) ||
        (!picture_artwork && anchored && anchored[at])) return false;
    const auto *cell = screen + at * 8;
    const int foreground = ((skin >> 8) & 7) + ((skin & 0x4000) ? 8 : 0);
    const int background = (skin >> 11) & 7;
    if (!std::equal(cell + 4, cell + 7, gps.uccolor[background])) return false;
    // A caption replaces the blank centre's glyph/foreground. The complete
    // four sides still have to match the current skin and palette exactly.
    // Typed input readers may prove a box-range byte belongs to UTF-8 inside
    // their already bounded text field; layer/background checks still apply.
    if (caption && (skin & 0xff) == ' ')
        return utf8_caption || !is_cp437_box_drawing_byte(cell[0]);
    return cell[0] == (skin & 0xff) &&
        std::equal(cell + 1, cell + 4, gps.uccolor[foreground]);
}

void Overlay::draw_native_border_repairs(SDL_Renderer *renderer) {
    if (native_border_repairs_.empty() || !gps_) return;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const auto *target = SDL_GetRenderTarget(renderer);
    for (auto &repair : native_border_repairs_) {
        repair.drawn = false;
        const auto find_glyph = [&](const std::array<unsigned char, 7> &cell) {
            return std::find_if(native_border_glyphs_.begin(), native_border_glyphs_.end(),
                [&](const NativeBorderGlyph &sample) {
                return native_border_glyph_epoch_ == composite_read_epoch_ &&
                    sample.texture_id == repair.texture_id &&
                    (repair.texture_id != 0 || sample.cell == cell) &&
                    sample.renderer == renderer &&
                    sample.copy.render_target == target && sample.copy.texture &&
                    sample.copy.destination.w == tile_w && sample.copy.destination.h == tile_h;
            });
        };
        auto glyph = find_glyph(repair.cell);
        bool mirror = false;
        if (glyph == native_border_glyphs_.end() && repair.texture_id == 0) {
            // Every left corner of a two-line list may be overwritten by
            // its caption. The opposite corner still supplies the same live
            // native font, foreground and background. Mirror that exact
            // sample; never recolor another palette or invent a line style.
            auto opposite = repair.cell;
            switch (opposite[0]) {
            case 0xc0: opposite[0] = 0xd9; break;
            case 0xd9: opposite[0] = 0xc0; break;
            case 0xda: opposite[0] = 0xbf; break;
            case 0xbf: opposite[0] = 0xda; break;
            case 0xc8: opposite[0] = 0xbc; break;
            case 0xbc: opposite[0] = 0xc8; break;
            case 0xc9: opposite[0] = 0xbb; break;
            case 0xbb: opposite[0] = 0xc9; break;
            default: break;
            }
            if (opposite[0] != repair.cell[0]) {
                glyph = find_glyph(opposite);
                mirror = glyph != native_border_glyphs_.end();
            }
        }
        if (glyph == native_border_glyphs_.end()) {
            static bool logged = false;
            if (!logged) {
                logged = true;
                log_line("WARN", "Native border repair has no current-frame glyph sample");
            }
            continue;
        }
        // Atlas textures are reused by later native draws. Replay the exact
        // sampled border colors, alpha and blend, then restore the state that
        // was active at Present so the repair cannot tint subsequent content.
        NativeBorderTextureState previous;
        if (!previous.capture(glyph->copy.texture)) continue;
        if (!glyph->texture_state.apply(glyph->copy.texture)) {
            previous.apply(glyph->copy.texture);
            continue;
        }
        repair.drawn = true;
        for (int y = repair.cells.y; y < repair.cells.y + repair.cells.h; ++y)
            for (int x = repair.cells.x; x < repair.cells.x + repair.cells.w; ++x) {
                const SDL_Rect destination{origin_x + x * tile_w, origin_y + y * tile_h,
                    tile_w, tile_h};
                const int copied = mirror
                    ? SDL_RenderCopyEx(renderer, glyph->copy.texture,
                        glyph->copy.has_source ? &glyph->copy.source : nullptr, &destination,
                        0.0, nullptr, SDL_FLIP_HORIZONTAL)
                    : SDL_RenderCopy(renderer, glyph->copy.texture,
                        glyph->copy.has_source ? &glyph->copy.source : nullptr, &destination);
                if (copied != 0) repair.drawn = false;
            }
        previous.apply(glyph->copy.texture);
    }
}

// Complete three-by-three control, with y at its middle row. The same
// current skin establishes both record ownership and text clipping bounds.
static bool native_square_button_at(const graphicst &gps, int x, int y,
        const int32_t (*skin)[3]) {
    const bool classic = native_ui_classic().value_or(false);
    for (int orientation = 0; orientation < (classic ? 2 : 1); ++orientation) {
        bool complete = true;
        for (int dx = 0; dx < 3 && complete; ++dx)
            for (int dy = 0; dy < 3; ++dy)
                if (!native_ui_skin_at(gps, x + dx, y + dy - 1,
                        orientation ? skin[dy][dx] : skin[dx][dy], classic)) {
                    complete = false;
                    break;
                }
        if (complete) return true;
    }
    return false;
}

// These controls can overwrite a previously drawn caption's suffix. Share
// their complete skin proof between field bounds and classic text ownership.
static bool native_caption_action_button_at(const graphicst &gps, int x, int y) {
    const int32_t (*actions[])[3] = {
        native_texture_button_stocks_recenter(gps),
        native_texture_button_stocks_view_item(gps),
        native_texture_building_jobs_repeat(gps),
        native_texture_building_jobs_repeat_active(gps),
        native_texture_building_jobs_do_now(gps),
        native_texture_building_jobs_do_now_active(gps),
        native_texture_building_jobs_suspended(gps),
        native_texture_building_jobs_suspended_active(gps),
        native_texture_building_jobs_remove(gps),
    };
    for (const auto *skin : actions)
        if (native_square_button_at(gps, x, y, skin)) return true;
    return false;
}

// Assign-to-depot rows share five live skins: selected, unselected, already
// in the depot, being brought, and prohibited. The caption's middle strip
// remains identifiable when scrolling clips a button's upper/lower row.
static bool native_trade_assignment_at(const graphicst &gps, int x, int y) {
    for (const auto &skin : native_texture_button_assign_trade(gps)) {
        if (native_ui_texture_at(gps, x, y, skin[0][1]) &&
            native_ui_texture_at(gps, x + 1, y, skin[1][1]) &&
            native_ui_texture_at(gps, x + 2, y, skin[2][1])) return true;
    }
    return false;
}

// Embark, reclaim and caravan requests use the same four-column selection
// box. This is widget geometry, independent of the screen or item vocabulary.
static bool native_selection_box_at(const graphicst &gps, int x, int y, bool classic) {
    if (x < 0 || y < 0 || x + 4 > gps.dimx || y + 3 > gps.dimy) return false;
    const int32_t (*skins[])[3] = {native_texture_embark_selected(gps),
        native_texture_embark_not_selected(gps)};
    for (const auto *skin : skins) {
        bool complete = true;
        for (int dx = 0; dx < 4 && complete; ++dx)
            for (int dy = 0; dy < 3; ++dy)
                if (!native_ui_skin_at(gps, x + dx, y + dy, skin[dx][dy],
                        classic)) {
                    complete = false;
                    break;
                }
        if (complete) return true;
    }
    return false;
}

// Return the visible runs of the rightmost vertical scrollbar inside a panel.
// A rail/arrow/thumb row is a native pair of textures, not two spare text
// columns. Two consecutive matching rows prove the control even if a tooltip
// covers one cap. Keep the runs separate so a foreground widget cannot lend
// its covered scrollbar to another row. The 53.16 chooser draws this control
// at 0x14086d926 through draw_scrollbar's live-graphics branch 0x14140fa16.
static std::vector<SDL_Rect> native_vertical_scrollbar_spans(
        const graphicst &gps, const SDL_Rect &panel) {
    std::array<std::array<int32_t, 2>, 23> skins{};
    size_t count = 0;
    const auto add = [&](int32_t left, int32_t right) {
        if (left > 0 && right > 0) skins[count++] = {left, right};
    };
    const auto &track = native_texture_scrollbar(gps);
    for (int row = 0; row < 3; ++row) add(track[0][row], track[1][row]);
    const int32_t *const strips[] = {
        native_texture_scrollbar_up_hover(gps),
        native_texture_scrollbar_up_pressed(gps),
        native_texture_scrollbar_down_hover(gps),
        native_texture_scrollbar_down_pressed(gps),
        native_texture_scrollbar_top_scroller(gps),
        native_texture_scrollbar_top_scroller_hover(gps),
        native_texture_scrollbar_bottom_scroller(gps),
        native_texture_scrollbar_bottom_scroller_hover(gps),
        native_texture_scrollbar_blank_scroller(gps),
        native_texture_scrollbar_blank_scroller_hover(gps),
        native_texture_scrollbar_center_scroller(gps),
        native_texture_scrollbar_center_scroller_hover(gps),
    };
    for (const auto *strip : strips) add(strip[0], strip[1]);
    const int32_t (*const thumbs[])[2] = {
        native_texture_scrollbar_small_scroller(gps),
        native_texture_scrollbar_small_scroller_hover(gps),
        native_texture_scrollbar_offcenter_scroller(gps),
        native_texture_scrollbar_offcenter_scroller_hover(gps),
    };
    for (const auto *thumb : thumbs)
        for (int row = 0; row < 2; ++row) add(thumb[0][row], thumb[1][row]);
    std::vector<SDL_Rect> spans;
    const int left = std::max(0, panel.x);
    const int right = std::min(gps.dimx, panel.x + panel.w);
    const int top = std::max(0, panel.y);
    const int bottom = std::min(gps.dimy, panel.y + panel.h);
    // Title/About widgets read their scrollbar from init, not graphicst.
    // Both sources feed the same pair/run traversal and clipping geometry.
    const auto settings = native_ui_settings();
    const auto pair_at = [&](int x, int y) {
        for (size_t at = 0; at < count; ++at)
            if (native_ui_skin_at(gps, x, y, skins[at][0], settings && settings->classic) &&
                native_ui_skin_at(gps, x + 1, y, skins[at][1], settings && settings->classic)) return true;
        if (settings)
            for (const auto &pair : settings->scrollbar_skins)
                if (pair[0] > 0 && pair[1] > 0 &&
                    native_ui_skin_at(gps, x, y, pair[0], settings->classic) &&
                    native_ui_skin_at(gps, x + 1, y, pair[1], settings->classic)) return true;
        return false;
    };
    for (int x = right - 2; x >= left; --x) {
        int run = -1;
        for (int y = top; y <= bottom; ++y) {
            if (y < bottom && pair_at(x, y)) {
                if (run < 0) run = y;
            } else if (run >= 0) {
                if (y - run >= 2) spans.push_back({x, run, 2, y - run});
                run = -1;
            }
        }
        if (!spans.empty()) break;
    }
    return spans;
}

// Native FILTER/NAME fields share a left cap and repeated
// text strip, followed by a four-column icon cap. Recognize the entire live
// control, including empty/unfocused fields, without inspecting its text.
// Older ViewBase pages use graphicst's current skins. Widget-based textboxes
// have a separate init-owned atlas and are read by the helper below.
static std::optional<SDL_Rect> native_textbox_rect_at(const graphicst &gps,
        int left, int top) {
    const auto &skin = native_texture_button_filter(gps);
    const auto &name_skin = native_texture_button_filter_name(gps);
    if (left < 0 || left >= gps.dimx || top < 0 || top + 3 > gps.dimy ||
        skin[0][1] == skin[1][1]) return std::nullopt;
    if (!native_ui_texture_at(gps, left, top + 1, skin[0][1])) {
        // Reject non-sides before reading settings when callers scan a pane.
        if (skin[0][1] <= 0 || skin[0][1] > 0x7fff) return std::nullopt;
        const size_t at = static_cast<size_t>(left) * gps.dimy + top + 1;
        const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
        if (!screen || screen[at * 8] != (skin[0][1] & 0xff)) return std::nullopt;
    }
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    if (!native_ui_skin_at(gps, left, top + 1, skin[0][1], classic))
        return std::nullopt;
    // Classic input replaces the middle strip's blank glyphs. Its untouched
    // upper edge still ends at the icon cap, regardless of the query text.
    const int strip_row = classic ? 0 : 1;
    int cap = left + 1;
    while (cap < gps.dimx && native_ui_skin_at(gps, cap, top + strip_row,
            skin[1][strip_row], classic)) ++cap;
    if (cap <= left + 1 || cap + 4 > gps.dimx) return std::nullopt;
    std::string input;
    if (classic) {
        input.reserve(cap - left - 1);
        for (int x = left + 1; x < cap; ++x) {
            const size_t at = static_cast<size_t>(x) * gps.dimy + top + 1;
            const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
            if (!screen) return std::nullopt;
            input.push_back(screen[at * 8]);
        }
    }
    for (int row = 0; row < 3; ++row) {
        if (!native_ui_skin_at(gps, left, top + row, skin[0][row], classic))
            return std::nullopt;
        for (int x = left + 1; x < cap; ++x) {
            const bool utf8_caption = classic && row == 1 &&
                !is_cp437_box_separator(input, static_cast<size_t>(x - left - 1));
            if (!native_ui_skin_at(gps, x, top + row, skin[1][row], classic,
                    row == 1, false, false, utf8_caption))
                return std::nullopt;
        }
    }
    for (bool name : {false, true}) {
        bool complete = true;
        for (int column = 0; column < 4 && complete; ++column)
            for (int row = 0; row < 3; ++row) {
                const int32_t part = name ? name_skin[column][row] : skin[column + 2][row];
                if (!native_ui_skin_at(gps, cap + column, top + row, part, classic)) {
                    complete = false;
                    break;
                }
            }
        if (complete) return SDL_Rect{left, top, cap + 4 - left, 3};
    }
    return std::nullopt;
}

// widgets::textbox FILTER/NAME (53.16 PE 0x1414191e0) reads init's atlas.
// Its four-cell right cap can start with the same upper-edge glyph as the
// text strip in classic mode. Locate the complete cap before proving the
// fill instead of walking that edge until the first different cell.
static std::optional<SDL_Rect> native_widget_textbox_rect_at(
        const graphicst &gps, int left, int top, const NativeUiSettings &settings) {
    const auto &skin = settings.texpos_button_filter;
    const bool classic = settings.classic;
    if (left < 0 || left + 6 > gps.dimx || top < 0 || top + 3 > gps.dimy ||
            skin[0][1] <= 0 || skin[0][1] == skin[1][1]) return std::nullopt;
    for (int row = 0; row < 3; ++row)
        if (!native_ui_skin_at(gps, left, top + row, skin[0][row], classic)) return std::nullopt;
    for (int cap = left + 2; cap + 4 <= gps.dimx; ++cap) {
        bool matched = false;
        for (bool name : {false, true}) {
            bool complete = true;
            for (int column = 0; column < 4 && complete; ++column)
                for (int row = 0; row < 3; ++row) {
                    const int32_t part = name ? settings.texpos_button_filter_name[column][row]
                        : skin[column + 2][row];
                    if (part < 0 || (!classic && part == 0) ||
                            !native_ui_skin_at(gps, cap + column, top + row, part, classic)) {
                        complete = false;
                        break;
                    }
                }
            matched |= complete;
        }
        if (!matched) continue;
        std::string input;
        if (classic) {
            for (int x = left + 1; x < cap; ++x) {
                const size_t at = static_cast<size_t>(x) * gps.dimy + top + 1;
                const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
                if (!screen) return std::nullopt;
                input.push_back(screen[at * 8]);
            }
        }
        bool complete = true;
        for (int x = left + 1; x < cap && complete; ++x)
            for (int row = 0; row < 3; ++row) {
                const bool utf8_caption = classic && row == 1 &&
                    !is_cp437_box_separator(input, static_cast<size_t>(x - left - 1));
                if (!native_ui_skin_at(gps, x, top + row, skin[1][row], classic,
                        row == 1, false, false, utf8_caption)) {
                    complete = false;
                    break;
                }
            }
        if (complete) return SDL_Rect{left, top, cap + 4 - left, 3};
    }
    return std::nullopt;
}

// Main-toolbar/list actions are four columns by three rows, stored [x][y].
// Their icon artwork may look like the generic three-column +/- buttons,
// but neither the skin nor the widget bounds are interchangeable. Validate
// the entire current widget, including its lower-layer tiles.
template <typename Skin>
static bool native_main_button_skin_at(const graphicst &gps, int x, int y,
        const Skin (&skin)[4][3], bool classic, bool picture_artwork = false) {
    if (x < 0 || y < 1 || x + 4 > gps.dimx || y + 1 >= gps.dimy) return false;
    for (int dx = 0; dx < 4; ++dx)
        for (int dy = 0; dy < 3; ++dy)
            // Some unused entries are entirely zero. They are not controls,
            // even when the unused part of the screen also contains zeros.
            if (skin[dx][dy] <= 0 || !native_ui_skin_at(gps,
                    x + dx, y + dy - 1, skin[dx][dy], classic,
                    false, false, picture_artwork)) return false;
    return true;
}

static bool native_main_button_at(const graphicst &gps, int x, int y, int kind,
        bool picture_artwork = false) {
    const auto &buttons = native_texture_button_main(gps);
    if (kind < 0 || kind >= static_cast<int>(std::size(buttons)) ||
            x < 0 || y < 1 || x + 4 > gps.dimx || y + 1 >= gps.dimy) return false;
    const auto &skin = buttons[kind];
    if (!native_ui_texture_at(gps, x, y - 1, skin[0][0])) {
        // List readers probe many cells. Reject non-corners before copying
        // the current UI settings, just as the texture path did originally.
        if (skin[0][0] <= 0 || skin[0][0] > 0x7fff) return false;
        const size_t at = static_cast<size_t>(x) * gps.dimy + y - 1;
        const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
        if (!screen || screen[at * 8] != (skin[0][0] & 0xff)) return false;
    }
    const auto settings = native_ui_settings();
    return native_main_button_skin_at(gps, x, y, skin,
        settings && settings->classic, picture_artwork);
}

// In classic mode these controls contain CP437 artwork such as MD, T!, ==
// and adjacent bytes that can resemble UTF-8. They are complete native icon
// skins, not translatable labels. Establish their ownership from all twelve
// live cells; caption/rectangle buttons and actual shortcut prose remain text.
static std::vector<SDL_Rect> native_main_button_spans(const graphicst &gps) {
    if (!native_ui_classic().value_or(false) || !gps.screen ||
            gps.dimx < 4 || gps.dimy < 3) return {};
    auto *cache = NativePanelReadScope::active;
    if (cache && !cache->contains(gps, 0, 0)) cache = nullptr;
    const uint64_t revision = NativeUiReadScope::read_revision;
    if (cache && cache->main_button_spans) {
        const auto &saved = *cache->main_button_spans;
        if (saved.revision == revision && saved.screen == gps.screen &&
                saved.screen_top == gps.screen_top && saved.top_in_use == gps.top_in_use)
            return saved.spans;
    }
    const auto &buttons = native_texture_button_main(gps);
    // The atlas is fixed inside this synchronous traversal. Share only its
    // necessary first-byte filter; every scan still proves the complete live
    // skin, including current palette colors and visible-layer ownership.
    std::optional<std::array<std::vector<int>, 256>> local_index;
    auto &index = cache ? cache->main_button_first_glyph : local_index;
    if (!index) {
        index.emplace();
        for (size_t kind = 0; kind < std::size(buttons); ++kind) {
            const int32_t first = buttons[kind][0][0];
            if (first > 0 && first <= 0x7fff && (first & 0xff))
                (*index)[first & 0xff].push_back(static_cast<int>(kind));
        }
    }
    const auto &by_first_glyph = *index;
    std::vector<SDL_Rect> spans;
    for (int x = 0; x + 4 <= gps.dimx; ++x)
        for (int top = 0; top + 3 <= gps.dimy; ++top) {
            const size_t at = static_cast<size_t>(x) * gps.dimy + top;
            const auto *screen = native_ui_top_layer_at(gps, at)
                ? gps.screen_top : gps.screen;
            if (!screen) continue;
            for (int kind : by_first_glyph[screen[at * 8]]) {
                if (!native_main_button_skin_at(gps, x, top + 1, buttons[kind], true))
                    continue;
                spans.push_back({x, top, 4, 3});
                break;
            }
        }
    // Background views and temporary grid masking invalidate read_revision.
    // Never reuse a proof across those views or outside this panel traversal.
    if (cache) cache->main_button_spans = NativePanelReadScope::MainButtonSpans{
        revision, gps.screen, gps.screen_top, gps.top_in_use, spans};
    return spans;
}

// WORK_ORDERS_ACTIVE through WORK_ORDERS_NOT_VALIDATED are button_main
// entries 281..286 (53.16's token parser maps WORK_ORDERS_READY at
// 0x1410fd4ec to 284). These independent status controls precede order
// captions in both the fortress and workshop lists; all six states share
// geometry, including the unchecked and temporarily waiting variants.
static bool native_work_order_status_at(const graphicst &gps, int x, int y) {
    for (int kind = 281; kind <= 286; ++kind)
        if (native_main_button_at(gps, x, y, kind)) return true;
    return false;
}

// A work-order record always has a complete four-column status icon, but
// its background is NOT an identity or boundary: the current order header
// has no rectangle at all (53.16 ELF: status 0xd88397, title 0xd8857f,
// count 0xd89c6b), whereas the remaining list rows do. Use the same record
// envelope for both. The caller anchors the current native title inside it
// and stops before the independent repeat description. The editable count
// can be empty or hidden and is not evidence for the title's identity.
// ENTER_AMOUNT/INCREASE_AMOUNT/DECREASE_AMOUNT (299..301), when present,
// start at F+6/F+10/F+14; F reserves the validation slot after the title.
static std::optional<SDL_Rect> native_work_order_record_rect(
        const graphicst &gps, const SDL_Rect &panel, int icon, int top) {
    if (icon < panel.x || top < panel.y || top + 3 > panel.y + panel.h)
        return std::nullopt;
    if (!native_work_order_status_at(gps, icon, top + 1)) return std::nullopt;
    const int left = icon + 4;
    int right = panel.x + panel.w;
    for (int amount = left + 7; amount + 12 <= panel.x + panel.w; ++amount) {
        if (native_main_button_at(gps, amount, top + 1, 299) &&
            native_main_button_at(gps, amount + 4, top + 1, 300) &&
            native_main_button_at(gps, amount + 8, top + 1, 301)) {
            right = amount - 6;
            break;
        }
    }
    if (right <= left) return std::nullopt;
    return SDL_Rect{left, top, right - left, 3};
}

// Workshop job controls are seven fixed three-cell slots. Slot zero is an
// optional active-worker icon; repeat/quota, do-now, suspend and remove stay
// in slots 1, 2, 5 and 6. Read complete live skins, not the first occupied
// texture, so changing job state cannot change the caption's width.
struct NativeWorkshopTaskBounds {
    SDL_Rect source;
    int text_right;
};

static std::optional<NativeWorkshopTaskBounds> native_workshop_task_bounds(
        const graphicst &gps, const SDL_Rect &panel, int top) {
    if (top < panel.y || top + 3 > panel.y + panel.h) return std::nullopt;
    const auto button = [&](int x, const int32_t (*skin)[3]) {
        for (int dx = 0; dx < 3; ++dx)
            for (int dy = 0; dy < 3; ++dy)
                if (!native_ui_texture_at(gps, x + dx, top + dy, skin[dx][dy])) return false;
        return true;
    };
    for (int repeat = panel.x + 4; repeat + 18 <= panel.x + panel.w; ++repeat) {
        if (!(button(repeat, native_texture_building_jobs_repeat(gps)) ||
              button(repeat, native_texture_building_jobs_repeat_active(gps)) ||
              button(repeat, native_texture_building_jobs_quota(gps)))) continue;
        if (!(button(repeat + 3, native_texture_building_jobs_do_now(gps)) ||
              button(repeat + 3, native_texture_building_jobs_do_now_active(gps))) ||
            !(button(repeat + 12, native_texture_building_jobs_suspended(gps)) ||
              button(repeat + 12, native_texture_building_jobs_suspended_active(gps))) ||
            !button(repeat + 15, native_texture_building_jobs_remove(gps))) continue;
        const int text_right = repeat - 3;
        // Native caption clipping can leave its last two source glyphs in
        // the unused worker slot. Own those bytes too, while the translation
        // always stops before the slot, including when its icon is absent.
        const int source_right = button(text_right, native_texture_building_jobs_active(gps))
            ? text_right : repeat;
        return NativeWorkshopTaskBounds{{panel.x, top, source_right - panel.x, 3}, text_right};
    }
    return std::nullopt;
}

// ViewBase::draw_sort_widget uses init's current four-cell strips, not the
// legacy sort handles on graphicst. The full strip establishes a column.
static std::vector<int> native_sort_columns(const graphicst &gps, int y,
        const NativeUiSettings &settings) {
    const int32_t *skins[] = {settings.texpos_sort_ascending_active,
        settings.texpos_sort_ascending_inactive, settings.texpos_sort_descending_active,
        settings.texpos_sort_descending_inactive};
    std::vector<int> columns;
    for (int x = 0; x + 3 < gps.dimx; ++x) {
        for (const auto *skin : skins) {
            bool complete = true;
            for (int dx = 0; dx < 4; ++dx)
                complete = complete && native_ui_skin_at(
                    gps, x + dx, y, skin[dx], settings.classic);
            if (complete) { columns.push_back(x); x += 3; break; }
        }
    }
    return columns;
}

static std::optional<std::pair<int, int>> native_sort_caption_span(
        const graphicst &gps, int first, int last, int y,
        const NativeUiSettings &settings) {
    const int32_t *skins[] = {settings.texpos_sort_text_active, settings.texpos_sort_text_inactive};
    for (const auto *skin : skins) {
        // Classic sort-text caps and fill are the SAME blank skin. Its
        // extent cannot be discovered by walking blank cells. Bind the
        // caption to draw_sort_widget's complete four-cell arrow instead
        // (ViewBase.cpp: caption starts at sx+5), and own only its proven
        // source span. Do not absorb the next sort control or empty screen.
        if (skin[0] == skin[1] && skin[1] == skin[2]) {
            const auto columns = native_sort_columns(gps, y, settings);
            const auto arrow = std::find(columns.begin(), columns.end(), first - 5);
            if (arrow == columns.end() || first >= last ||
                (std::next(arrow) != columns.end() && last > *std::next(arrow)) ||
                !native_ui_skin_at(gps, first - 1, y, skin[0], settings.classic)) continue;
            bool complete = true;
            for (int x = first; x < last; ++x)
                complete &= native_ui_skin_at(gps, x, y, skin[1], settings.classic, true);
            if (complete) return {{first, last}};
            continue;
        }
        if (!native_ui_skin_at(gps, first, y, skin[1], settings.classic, true)) continue;
        int left = first, right = first;
        while (left > 0 && native_ui_skin_at(gps, left, y, skin[1], settings.classic, true)) --left;
        while (right < gps.dimx && native_ui_skin_at(gps, right, y, skin[1], settings.classic, true)) ++right;
        // draw_sort_widget starts text one cell after the left cap, but its
        // final source glyph can occupy the right cap (World name, Folder,
        // Last played all do). last is exclusive: include that source cell
        // in recognition while keeping translated text inside the caps.
        if (last <= right + 1 && native_ui_skin_at(gps, left, y, skin[0], settings.classic) &&
            native_ui_skin_at(gps, right, y, skin[2], settings.classic)) return {{left + 1, right}};
    }
    return std::nullopt;
}

// A type selector has its own left/right arrow strips. Only its text strip
// is a caption box; arrows are controls, not part of the replacement mask.
static std::optional<std::pair<int, int>> native_type_filter_span(
        const graphicst &gps, int first, int last, int y) {
    if (first < 0 || first >= last || last > gps.dimx || y < 0 || y >= gps.dimy)
        return std::nullopt;
    const auto settings = native_ui_settings();
    if (!settings) return std::nullopt;
    const bool classic = settings->classic;
    const auto &text = native_texture_type_filter_text(gps);
    const auto &left_arrow = native_texture_type_filter_left(gps);
    const auto &right_arrow = native_texture_type_filter_right(gps);
    const auto arrow_at = [&](int x, const auto &skin) {
        for (int dx = 0; dx < 3; ++dx)
            if (!native_ui_skin_at(gps, x + dx, y, skin[dx], classic)) return false;
        return true;
    };
    if (!native_ui_skin_at(gps, first, y, text[1], classic, true)) return std::nullopt;
    if (text[0] == text[1] && text[1] == text[2]) {
        // Classic text caps and fill are identical black spaces. The two
        // complete arrow strips establish the selector, not an unbounded
        // run of blank cells. Accept a caption's first glyph so its complete
        // source can be read even when a one-cell gap adjoins the arrows.
        for (int left = first - 1; left >= 3; --left) {
            if (!native_ui_skin_at(gps, left, y, text[0], classic)) break;
            if (!arrow_at(left - 3, left_arrow)) continue;
            for (int x = left + 1; x < last; ++x)
                if (!native_ui_skin_at(gps, x, y, text[1], classic, true))
                    return std::nullopt;
            for (int right = last; right + 3 < gps.dimx; ++right) {
                if (native_ui_skin_at(gps, right, y, text[2], classic) &&
                    arrow_at(right + 1, right_arrow)) return {{left + 1, right}};
                if (!native_ui_skin_at(gps, right, y, text[1], classic, true)) break;
            }
            return std::nullopt;
        }
        return std::nullopt;
    }
    int left = first, right = first;
    while (left > 0 && native_ui_skin_at(gps, left, y, text[1], classic, true)) --left;
    while (right < gps.dimx && native_ui_skin_at(gps, right, y, text[1], classic, true)) ++right;
    if (right < last || !native_ui_skin_at(gps, left, y, text[0], classic) ||
        !native_ui_skin_at(gps, right, y, text[2], classic))
        return std::nullopt;
    // All three cells of each arrow must belong to this selector.
    if (!arrow_at(left - 3, left_arrow) || !arrow_at(right + 1, right_arrow))
        return std::nullopt;
    return {{left + 1, right}};
}

// A picture box can be wider than three cells. Return its exclusive right
// edge from the full middle strip, including both sides; no saved texture IDs.
struct NativeItemRowClip {
    SDL_Rect bounds{};
    int dimx = 0, dimy = 0;
    bool top_layer = false;
};

static bool native_item_row_layer_at(const graphicst &gps, int x, int y, bool top) {
    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
    if (native_ui_top_layer_at(gps, at) == top) return true;
    // A black space on screen_top is transparent to the composite reader.
    // Allow it only over an equally empty base cell, never over a background
    // glyph, colored fill or artwork that could lend the foreground a frame.
    if (!top || !gps.screen ||
        (gps.screentexpos && gps.screentexpos[at]) ||
        (gps.screentexpos_lower && gps.screentexpos_lower[at]) ||
        (gps.screentexpos_anchored && gps.screentexpos_anchored[at])) return false;
    const auto *cell = gps.screen + at * 8;
    return (cell[0] == 0 || cell[0] == ' ') &&
        cell[4] == 0 && cell[5] == 0 && cell[6] == 0;
}

// Ordinary callers keep requiring closed frames. Only a closed item panel,
// a complete sibling item and both scrollbar caps can establish this clip.
// All surviving cells must remain on that item's visible layer.
static bool native_item_row_skin_at(const graphicst &gps, int x, int y,
        int32_t skin, bool classic, const NativeItemRowClip *clip,
        bool picture_artwork = false) {
    if (clip) {
        const auto &bounds = clip->bounds;
        if (clip->dimx != gps.dimx || clip->dimy != gps.dimy ||
            bounds.h < 2 || x < bounds.x || x >= bounds.x + bounds.w) return false;
        if (y < bounds.y || y >= bounds.y + bounds.h) return true;
        if (x < 0 || y < 0 || x >= gps.dimx || y >= gps.dimy ||
            !native_item_row_layer_at(gps, x, y, clip->top_layer)) return false;
    }
    return native_ui_skin_at(gps, x, y, skin, classic, false, false, picture_artwork);
}

// Picture boxes and item actions each require one specific cell before
// their full skin can match. Index those necessary cells once per native-grid
// traversal. A candidate is never ownership: the original readers still prove
// every accepted frame, palette and layer. Clipped readers bypass this filter.
static NativePanelReadScope *native_item_anchor_index(const graphicst &gps) {
    auto *cache = NativePanelReadScope::active;
    if (!cache || !cache->contains(gps, 0, 0)) return nullptr;
    if (!cache->item_anchor_candidates.empty()) return cache;
    const bool classic = native_ui_classic().value_or(false);
    std::array<uint8_t, 256> glyphs{};
    std::unordered_map<long, uint8_t> textures;
    const auto add = [&](int32_t skin, uint8_t kind) {
        if (classic) {
            if (skin >= 0 && skin <= 0x7fff) glyphs[skin & 0xff] |= kind;
        } else if (skin > 0) textures[skin] |= kind;
    };
    const int32_t (*pictures[])[3] = {
        native_texture_button_picture_box(gps),
        native_texture_button_picture_box_selected(gps),
        native_texture_button_picture_box_highlighted(gps),
        native_texture_button_picture_box_sel_highlighted(gps),
        native_texture_button_picture_box_light(gps),
        native_texture_button_picture_box_dark(gps),
    };
    for (const auto *skin : pictures) {
        add(skin[0][1], 1);
        // Transposing the classic skin changes the necessary left cell;
        // the reversed-column orientation leaves column zero unchanged.
        if (classic) add(skin[1][0], 1);
    }
    const int32_t (*states[])[3] = {
        native_texture_button_stocks_forbid(gps), native_texture_button_stocks_forbid_active(gps),
        native_texture_button_stocks_dump(gps), native_texture_button_stocks_dump_active(gps),
        native_texture_button_stocks_melt(gps), native_texture_button_stocks_melt_active(gps),
        native_texture_button_stocks_hide(gps), native_texture_button_stocks_hide_active(gps),
    };
    for (const auto *skin : states)
        if (skin[1][1] > 0) add(skin[1][1], 2 | 4);
    const int32_t (*compact[])[2] = {
        native_texture_button_short_forbid(gps), native_texture_button_short_forbid_active(gps),
        native_texture_button_short_dump(gps), native_texture_button_short_dump_active(gps),
        native_texture_button_short_melt(gps), native_texture_button_short_melt_active(gps),
        native_texture_button_short_hide(gps), native_texture_button_short_hide_active(gps),
    };
    for (const auto *skin : compact) {
        add(skin[1][0], 2 | 4);
        add(skin[1][1], 2 | 4);
    }
    // The general item reader also accepts role markers, recenter and
    // inspect. Their three-row skins all require the same middle cell,
    // including the classic transposed orientation. The compact task
    // marker can meet the caption on either of its two rows.
    const int32_t (*actions[])[3] = {
        native_texture_building_item_incorporated(gps),
        native_texture_button_stocks_recenter(gps), native_texture_button_stocks_view_item(gps),
        native_texture_button_inventory_item(gps)[0],
        native_texture_building_item_task(gps), native_texture_building_item_trade(gps),
        native_texture_building_item_animal(gps), native_texture_building_item_bait(gps),
        native_texture_building_item_loaded(gps), native_texture_building_item_dead(gps),
        native_texture_building_item_other(gps),
    };
    for (const auto *skin : actions)
        if (skin[1][1] > 0) add(skin[1][1], 4);
    const auto &task = native_texture_building_short_item_task(gps);
    add(task[1][0], 4);
    add(task[1][1], 4);
    std::vector<uint8_t> candidates(static_cast<size_t>(gps.dimx) * gps.dimy);
    std::vector<std::pair<int, int>> positions;
    for (int x = 0; x < gps.dimx; ++x)
        for (int y = 0; y < gps.dimy; ++y) {
            const size_t at = static_cast<size_t>(x) * gps.dimy + y;
            const bool top = native_ui_top_layer_at(gps, at);
            uint8_t kinds = 0;
            if (classic) {
                const auto *screen = top ? gps.screen_top : gps.screen;
                if (screen) kinds = glyphs[screen[at * 8]];
            } else {
                const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
                const auto *lower = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
                for (long texture : {primary ? primary[at] : 0, lower ? lower[at] : 0}) {
                    if (texture <= 0) continue;
                    if (const auto found = textures.find(texture); found != textures.end())
                        kinds |= found->second;
                }
            }
            candidates[at] = kinds;
            // Recenter/inspect also belong to creature rows. Only pictures
            // and item-state actions establish possible item-panel ownership.
            if (kinds & 3) positions.emplace_back(x, y);
        }
    cache->item_anchor_positions.swap(positions);
    cache->item_anchor_candidates.swap(candidates);
    return cache;
}

static bool native_item_anchors_in(const graphicst &gps, const SDL_Rect &area) {
    const auto *index = native_item_anchor_index(gps);
    if (!index) return true;
    return std::any_of(index->item_anchor_positions.begin(), index->item_anchor_positions.end(),
        [&](const auto &position) {
            return position.first >= area.x && position.first < area.x + area.w &&
                position.second >= area.y && position.second < area.y + area.h;
        });
}

static int read_native_picture_box_right(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip) {
    const int32_t (*skins[])[3] = {
        native_texture_button_picture_box(gps),
        native_texture_button_picture_box_selected(gps),
        native_texture_button_picture_box_highlighted(gps),
        native_texture_button_picture_box_sel_highlighted(gps),
        native_texture_button_picture_box_light(gps),
        native_texture_button_picture_box_dark(gps),
    };
    const bool classic = native_ui_classic().value_or(false);
    if (classic || clip) {
        // In classic mode the item picture replaces the blank centre, while
        // all four sides remain CP437/palette cells. A middle-strip texture
        // query cannot see either the frame or its icon. Prove the complete
        // current frame. Native anchored artwork covers the whole picture
        // box; subsequent CP437 frame draws retain those IDs even on the
        // four sides. Match every border glyph and color while allowing
        // that metadata, just as the joined picture-caption reader does.
        for (const auto *skin : skins) {
            for (int orientation = 0; orientation < 3; ++orientation) {
                const auto tile = [&](int column, int row) {
                    if (orientation == 1) return skin[row][column];
                    if (orientation == 2 && column > 0) column = 3 - column;
                    return skin[column][row];
                };
                const auto at = [&](int column, int row, int part, int band) {
                    return native_item_row_skin_at(gps, column, row,
                        tile(part, band), classic, clip, true);
                };
                if (!at(x, y, 0, 1) || !at(x, y - 1, 0, 0) ||
                    !at(x, y + 1, 0, 2)) continue;
                for (int right = x + 1; right < gps.dimx; ++right) {
                    if (right > x + 1 && at(right, y, 2, 1) &&
                        at(right, y - 1, 2, 0) && at(right, y + 1, 2, 2))
                        return right + 1;
                    if (!at(right, y - 1, 1, 0) || !at(right, y + 1, 1, 2)) break;
                }
            }
        }
        return -1;
    }
    for (const auto *skin : skins) {
        if (!native_ui_texture_at(gps, x, y, skin[0][1])) continue;
        int right = x + 1;
        while (right < gps.dimx && native_ui_texture_at(gps, right, y, skin[1][1])) ++right;
        if (right > x + 1 && native_ui_texture_at(gps, right, y, skin[2][1])) return right + 1;
    }
    return -1;
}

static int native_picture_box_right(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip = nullptr) {
    auto *cache = NativePanelReadScope::active;
    if (clip || !cache || !cache->contains(gps, x, y))
        return read_native_picture_box_right(gps, x, y, clip);
    if (const auto *index = native_item_anchor_index(gps);
            index && !(index->item_anchor_candidates[static_cast<size_t>(x) * gps.dimy + y] & 1))
        return -1;
    if (cache->picture_rights.empty())
        cache->picture_rights.resize(static_cast<size_t>(cache->dimx) * cache->dimy);
    auto &right = cache->picture_rights[static_cast<size_t>(x) * cache->dimy + y];
    // A proven right edge is positive; -1 is an equally reusable absence.
    if (right == 0) right = read_native_picture_box_right(gps, x, y, nullptr);
    return right;
}

static bool native_item_action_at(const graphicst &gps, int x, int y,
    const NativeItemRowClip *clip);
static bool native_inventory_action_at(const graphicst &gps, int x, int y,
    const NativeItemRowClip *clip = nullptr);

// One picture-button skin contract for both live layout and native source
// capture. native_draw reads the active write grid, before it is composited
// into screen_top; it is not a different widget/translation implementation.
static std::optional<SDL_Rect> native_picture_caption_rect(
        const graphicst &gps, int x, int y, bool native_draw = false, int *next_x = nullptr,
        bool bottom_caption = false, std::array<int32_t, 9> *matched_skin = nullptr,
        bool item_action_edge = false, bool material_amount_edge = false,
        int main_action_edge = -1, bool inventory_action_edge = false) {
    if (x < 0 || x >= gps.dimx || y < 1 || y + 1 >= gps.dimy) return std::nullopt;
    const auto amount_edge = [&](int left) {
        if (!material_amount_edge || native_draw) return false;
        // The material chooser paints a continuous picture/caption strip,
        // then overlays its decrement control on the strip (53.16 Windows:
        // 0x140382990..0x140382b2b). That complete control replaces the right
        // cap of the name/distance area. Only its typed caller accepts it.
        const int32_t (*skins[])[3] = {
            native_texture_button_subtract(gps),
            native_texture_button_subtract_hover(gps),
            native_texture_button_subtract_pressed(gps),
            native_texture_button_subtract_invalid(gps),
        };
        return std::any_of(std::begin(skins), std::end(skins), [&](const auto *skin) {
            return native_square_button_at(gps, left, y, skin);
        });
    };
    const auto action_edge = [&](int left, int *width = nullptr) {
        if (native_draw || left < 0) return false;
        // Location records end at a complete four-column main action, not
        // the three-column inventory Inspect skin. Only a caller owning
        // that list may accept the action in place of the caption's cap.
        if (main_action_edge >= 0 &&
            native_main_button_at(gps, left, y, main_action_edge)) {
            if (width) *width = 4;
            return true;
        }
        if (!item_action_edge || left + 3 > gps.dimx) return false;
        // Inventory captions join directly to the independently coloured
        // Inspect action: its left cap replaces the caption's right cap.
        // Prove the complete current action on one visible layer, including
        // graphical top/bottom rows, before accepting that shared boundary.
        const NativeItemRowClip clip{{0, 0, gps.dimx, gps.dimy}, gps.dimx, gps.dimy,
            native_ui_top_layer_at(gps, static_cast<size_t>(left) * gps.dimy + y)};
        const bool found = inventory_action_edge
            ? native_inventory_action_at(gps, left + 1, y, &clip)
            : native_item_action_at(gps, left + 1, y, &clip);
        if (found && width) *width = 3;
        return found;
    };
    // The current leaf uses normal/selected buttons; ancestor menus use
    // light/dark building-selection buttons. These are states of the same
    // control, not different layout scopes. Normal buttons additionally need
    // their adjoining native picture box so unrelated text inputs and plain
    // rectangular actions do not enter this menu layout.
    struct Skin { const int32_t (*tiles)[3]; bool picture_required; };
    const Skin skins[] = {
        {native_texture_button_rectangle(gps), true},
        {native_texture_button_rectangle_selected(gps), true},
        {native_texture_button_rectangle_light(gps), false},
        {native_texture_button_rectangle_dark(gps), false},
        // Work-detail lists switch to the category skin when selected.
        // Its classic double border is distinct from rectangle_selected;
        // every state still requires the complete adjoining picture box.
        {native_texture_button_category_rectangle(gps), true},
        {native_texture_button_category_rectangle_selected(gps), true},
        {native_texture_button_category_rectangle_on(gps), true},
        {native_texture_button_category_rectangle_on_selected(gps), true},
        {native_texture_button_category_rectangle_off(gps), true},
        {native_texture_button_category_rectangle_off_selected(gps), true},
    };
    const int32_t (*pictures[])[3] = {
        native_texture_button_picture_box(gps),
        native_texture_button_picture_box_selected(gps),
        native_texture_button_picture_box_highlighted(gps),
        native_texture_button_picture_box_sel_highlighted(gps),
        native_texture_button_picture_box_light(gps),
        native_texture_button_picture_box_dark(gps),
    };
    const auto classic = native_ui_classic();
    if (classic && *classic) {
        const auto has_skin = [&](int column, int row, int32_t skin,
                bool caption = false, bool picture_artwork = false,
                bool utf8_caption = false) {
            return native_ui_skin_at(gps, column, row, skin, true, caption,
                native_draw, picture_artwork, utf8_caption);
        };
        const auto tile = [](const int32_t (*skin)[3], int orientation, int column, int row) {
            if (orientation == 1) return skin[row][column];
            if (orientation == 2 && column > 0) column = 3 - column;
            return skin[column][row];
        };
        // Text overwrites the blank middle cells in classic mode. Discover
        // the span on the unmodified upper edge instead of walking blanks or
        // testing texture IDs against packed CP437/palette values.
        const auto picture_edge = [&](int right) {
            for (const auto *picture : pictures) {
                for (int orientation = 0; orientation < 3; ++orientation) {
                    const auto column_at = [&](int column, int part) {
                        for (int row = 0; row < 3; ++row)
                            if (!has_skin(column, y + row - 1,
                                    tile(picture, orientation, part, row), false, true)) return false;
                        return true;
                    };
                    if (!column_at(right, 2)) continue;
                    // add_anchored_tile records the icon across its whole
                    // picture box even in classic mode. add_lower_tile then
                    // writes the CP437 frame without clearing those IDs.
                    // Permit that artwork only within the complete picture
                    // frame; caption cells still reject graphical overlays.
                    for (int left = right - 1; left >= 0; --left) {
                        if (left < right - 1 && column_at(left, 0)) return true;
                        if (!has_skin(left, y - 1, tile(picture, orientation, 1, 0), false, true) ||
                            !has_skin(left, y + 1, tile(picture, orientation, 1, 2), false, true)) break;
                    }
                }
            }
            return false;
        };
        for (const Skin &skin : skins) {
            for (int orientation = 0; orientation < 3; ++orientation) {
                const auto part = [&](int column, int row) {
                    return tile(skin.tiles, orientation, column, row);
                };
                if ((part(1, 1) & 0xff) != ' ' ||
                    !has_skin(x, y - 1, part(1, 0))) continue;
                int first = x, last = x + 1;
                while (first > 0 && has_skin(first - 1, y - 1, part(1, 0))) --first;
                while (last < gps.dimx && has_skin(last, y - 1, part(1, 0))) ++last;
                const auto column_at = [&](int column, int section) {
                    for (int row = 0; row < 3; ++row)
                        if (!has_skin(column, y + row - 1, part(section, row))) return false;
                    return true;
                };
                bool divider = true;
                for (int row = 0; row < 3; ++row)
                    divider &= has_skin(last, y + row - 1,
                        native_texture_button_rectangle_divider(gps)[row]);
                if (!column_at(last, 2) && !divider && !action_edge(last) &&
                    !amount_edge(last)) continue;
                // A saved/custom caption can already contain UTF-8. Its
                // continuation bytes overlap CP437 borders, so classify
                // them within this upper-edge-bounded field, not one byte
                // at a time. Use the same write/composite layer as has_skin;
                // actual borders, colours and artwork remain mandatory.
                const auto caption_row = [&](int row) {
                    std::string text(last - first, ' ');
                    for (int column = first; column < last; ++column) {
                        const size_t at = static_cast<size_t>(column) * gps.dimy + row;
                        const bool top = !native_draw && native_ui_top_layer_at(gps, at);
                        const auto *screen = top ? gps.screen_top : gps.screen;
                        if (screen) text[column - first] = screen[at * 8];
                    }
                    return text;
                };
                const std::string middle_text = caption_row(y);
                const std::string bottom_text = bottom_caption ? caption_row(y + 1) : "";
                bool complete = true;
                for (int column = first; column < last; ++column) {
                    const size_t offset = static_cast<size_t>(column - first);
                    if (!has_skin(column, y - 1, part(1, 0)) ||
                        !has_skin(column, y, part(1, 1), true, false,
                            !is_cp437_box_separator(middle_text, offset)) ||
                        (!has_skin(column, y + 1, part(1, 2)) &&
                         !(bottom_caption && has_skin(column, y + 1, part(1, 1), true,
                             false, !is_cp437_box_separator(bottom_text, offset))))) {
                        complete = false;
                        break;
                    }
                }
                if (!complete) continue;
                // display_picture_box joins its right side directly to the
                // rectangle fill; other renderers insert a separate left
                // cap. Preserve both contracts and their picture identity.
                const bool left_cap = column_at(first - 1, 0);
                const bool adjoining_picture = picture_edge(first - 1) ||
                    (left_cap && picture_edge(first - 2));
                // Classic light/selected rectangles share their characters
                // with toolbar icons and ordinary actions. Only the complete
                // adjoining picture identifies this caption layout.
                if (!adjoining_picture) continue;
                if (matched_skin)
                    for (int row = 0; row < 3; ++row)
                        for (int column = 0; column < 3; ++column)
                            (*matched_skin)[row * 3 + column] = part(column, row);
                if (next_x) *next_x = std::max(*next_x, last);
                return SDL_Rect{first, y - 1, last - first, 3};
            }
        }
        return std::nullopt;
    }
    const auto has_skin = [&](int x, int y, int32_t texture) {
        if (texture <= 0 || x < 0 || y < 0 || x >= gps.dimx || y >= gps.dimy)
            return false;
        const size_t at = static_cast<size_t>(x) * gps.dimy + y;
        const bool top = !native_draw && native_ui_top_layer_at(gps, at);
        const long *tiles = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
        return tiles && tiles[at] == texture;
    };
    const auto picture_edge = [&](int x, int y) {
        for (const auto *picture : pictures) {
            if ((has_skin(x, y - 1, picture[2][0]) &&
                 has_skin(x, y, picture[2][1]) &&
                 has_skin(x, y + 1, picture[2][2])) ||
                (has_skin(x, y - 1, picture[0][2]) &&
                 has_skin(x, y, picture[1][2]) &&
                 has_skin(x, y + 1, picture[2][2]))) return true;
        }
        return false;
    };
    // Native ViewBase has two nine-slice orientations. Its picture-box
    // renderer also repeats rectangle[2][row] and caps with [1][row], the
    // reverse of a usual horizontal nine-slice. Describe all native drawing
    // contracts here instead of inferring a control from one centre texture.
    struct Strip {
        int32_t middle, top, bottom, right, left;
        bool picture_required;
        std::array<int32_t, 9> normalized;
    };
    // Most calls are a full-screen search, including map and ordinary text
    // cells. Reject those from the actual middle tile before constructing
    // any normalized nine-slice. The reversed orientation uses [2][1],
    // unlike the other two orientations' [1][1].
    const size_t caption_at = static_cast<size_t>(x) * gps.dimy + y;
    const bool caption_top = !native_draw && native_ui_top_layer_at(gps, caption_at);
    const long *caption_tiles = caption_top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
    const long caption_texture = caption_tiles ? caption_tiles[caption_at] : 0;
    if (caption_texture <= 0) return std::nullopt;
    const auto foreground_edge = [&](int left) {
        if (native_draw || (!item_action_edge && !material_amount_edge &&
                main_action_edge < 0)) return false;
        const size_t at = static_cast<size_t>(left) * gps.dimy + y;
        if (native_ui_top_layer_at(gps, at) != caption_top) return false;
        const auto *primary = caption_top ? gps.screentexpos_top : gps.screentexpos;
        // Blank caption cells retain their lower fill but no primary tile.
        // Probe the complete control only after finding foreground artwork.
        if (!primary || primary[at] <= 0) return false;
        int width = 0;
        if (!action_edge(left, &width)) {
            if (!amount_edge(left)) return false;
            width = 3;
        }
        for (int column = left; column < left + width; ++column)
            for (int row = y - 1; row <= y + 1; ++row)
                if (native_ui_top_layer_at(gps,
                        static_cast<size_t>(column) * gps.dimy + row) != caption_top)
                    return false;
        return true;
    };
    for (const Skin &skin : skins) {
        const auto *tiles = skin.tiles;
        for (int orientation = 0; orientation < 3; ++orientation) {
            if (caption_texture != tiles[orientation == 2 ? 2 : 1][1]) continue;
            std::array<int32_t, 9> normalized{};
            for (int row = 0; row < 3; ++row) {
                for (int column = 0; column < 3; ++column) {
                    const int source_column = orientation == 2 && column > 0
                        ? 3 - column : column;
                    normalized[row * 3 + column] = orientation == 1
                        ? tiles[row][column] : tiles[source_column][row];
                }
            }
            const Strip strip{normalized[4], normalized[1], normalized[7],
                normalized[5], normalized[3], skin.picture_required || orientation == 2,
                normalized};
            int first = x, last = x + 1;
            while (first > 0 && has_skin(first - 1, y, strip.middle)) --first;
            bool covered_cap = false;
            while (last < gps.dimx && has_skin(last, y, strip.middle)) {
                // add_tile keeps the rectangle's lower fill beneath list
                // actions. Stop at the complete foreground control instead
                // of following the retained fill through its artwork.
                if (foreground_edge(last)) { covered_cap = true; break; }
                ++last;
            }
            if (next_x) *next_x = std::max(*next_x, last);
            if (!covered_cap && last != gps.dimx && !has_skin(last, y, strip.right) &&
                !has_skin(last, y, native_texture_button_rectangle_divider(gps)[1]) &&
                !action_edge(last) && !amount_edge(last)) continue;
            bool complete = true;
            for (int at = first; at < last; ++at) {
                if (!has_skin(at, y - 1, strip.top) || !has_skin(at, y + 1, strip.bottom)) {
                    complete = false;
                    break;
                }
            }
            if (!complete) continue;
            if ((strip.picture_required || item_action_edge || main_action_edge >= 0) &&
                !picture_edge(first - 1, y) &&
                !(has_skin(first - 1, y, strip.left) && picture_edge(first - 2, y))) continue;
            if (matched_skin) *matched_skin = strip.normalized;
            return SDL_Rect{first, y - 1, last - first, 3};
        }
    }
    return std::nullopt;
}

static std::optional<NativePictureCaptionFrame> capture_native_picture_caption_frame(
        const graphicst &gps, int x, int y) {
    if (gps.dimx <= 0 || gps.dimx > 1000 ||
        gps.dimy <= 0 || gps.dimy > 1000) return std::nullopt;
    const bool classic = native_ui_classic().value_or(false);
    if (classic ? !gps.screen : !gps.screentexpos_lower) return std::nullopt;
    if (classic) {
        if (x < 0 || x >= gps.dimx || y < 0 || y >= gps.dimy) return std::nullopt;
        // Every accepted classic caption first proves an untouched upper
        // edge at this x. Most native prose draws cannot have that edge at
        // any of their three possible middle rows. Reject those draws before
        // repeating the full skin/palette/frame walk for each orientation.
        // Use the same live rectangle family as native_picture_caption_rect;
        // no glyph or skin handle survives this native draw callback.
        const int32_t (*skins[])[3] = {
            native_texture_button_rectangle(gps),
            native_texture_button_rectangle_selected(gps),
            native_texture_button_rectangle_light(gps),
            native_texture_button_rectangle_dark(gps),
            native_texture_button_category_rectangle(gps),
            native_texture_button_category_rectangle_selected(gps),
            native_texture_button_category_rectangle_on(gps),
            native_texture_button_category_rectangle_on_selected(gps),
            native_texture_button_category_rectangle_off(gps),
            native_texture_button_category_rectangle_off_selected(gps),
        };
        std::array<bool, 256> upper_glyphs{};
        for (const auto *skin : skins)
            for (int orientation = 0; orientation < 3; ++orientation) {
                const int32_t middle = skin[orientation == 2 ? 2 : 1][1];
                const int32_t upper = orientation == 1 ? skin[0][1]
                    : skin[orientation == 2 ? 2 : 1][0];
                if ((middle & 0xff) == ' ' && upper >= 0 && upper <= 0x7fff)
                    upper_glyphs[upper & 0xff] = true;
            }
        bool possible = false;
        for (const int middle : {y, y - 1, y + 1}) {
            if (middle < 1 || middle + 1 >= gps.dimy) continue;
            const size_t at = static_cast<size_t>(x) * gps.dimy + middle - 1;
            if (upper_glyphs[gps.screen[at * 8]]) { possible = true; break; }
        }
        if (!possible) return std::nullopt;
    }
    std::optional<SDL_Rect> text;
    // Captions may occupy either physical half or a continuation row of
    // the same three-row button. Geometry still uses the one skin contract.
    for (const int middle : {y, y - 1, y + 1}) {
        text = native_picture_caption_rect(gps, x, middle, true);
        // Item actions can replace the caption's right cap. Their complete
        // three-row skin still proves its original bounds before a tooltip.
        if (!text) text = native_picture_caption_rect(gps, x, middle, false,
            nullptr, false, nullptr, true);
        if (text) break;
    }
    if (!text) return std::nullopt;
    NativePictureCaptionFrame frame;
    frame.text = *text;
    frame.dimx = gps.dimx;
    frame.dimy = gps.dimy;
    frame.classic = classic;
    const int left = std::max(0, text->x - 2);
    const int right = std::min(gps.dimx, text->x + text->w + 1);
    frame.proof = {left, text->y, right - left, text->h};
    for (int py = frame.proof.y; py < frame.proof.y + frame.proof.h; ++py) {
        for (int px = left; px < right; ++px) {
            const size_t at = static_cast<size_t>(px) * gps.dimy + py;
            if (classic) {
                std::array<unsigned char, 7> cell;
                std::copy_n(gps.screen + at * 8, cell.size(), cell.begin());
                frame.cells.push_back(cell);
                frame.anchors.push_back(gps.screentexpos_anchored
                    ? gps.screentexpos_anchored[at] : 0);
            } else {
                frame.lower.push_back(gps.screentexpos_lower[at]);
            }
        }
    }
    return frame;
}

// Read one complete three-row button, with the skin normalized to row-major
// NW/N/NE, W/center/E, SW/S/SE. Intro buttons live in init, not graphicst;
// both native sources must use this same closed-frame recognition.
static std::optional<SDL_Rect> native_nineslice_button_text_rect(
        const graphicst &gps, int first, int last, int y,
        const std::array<int32_t, 9> &skin, bool classic = false,
        bool bottom_caption = false, bool left_caption = false,
        bool picture_artwork = false, bool native_draw = false) {
    if (first < 0 || last <= first || last > gps.dimx ||
        y < 0 || y >= gps.dimy) return std::nullopt;
    const int32_t middle = skin[4];
    if (middle <= 0 || skin[3] == middle || skin[5] == middle) return std::nullopt;
    // Category icons retain their anchored metadata when classic mode paints
    // the CP437 frame over them. Only that typed caller permits the artwork;
    // the current glyphs, palette and complete frame still have to match.
    const auto has_skin = [&](int x, int row, int32_t part, bool caption = false,
            bool utf8_caption = false) {
        return native_ui_skin_at(gps, x, row, part, classic, caption,
            native_draw, picture_artwork, utf8_caption);
    };
    for (int caption_row = 0; caption_row < 3; ++caption_row) {
        const int top = y - caption_row;
        // Find the width on the upper edge, which is not overwritten by a
        // classic caption. The same complete nine-slice validation follows
        // for texture-backed and character-backed buttons.
        if (top < 0 || top + 3 > gps.dimy) continue;
        // Name candidates and material lists start text on the left cap.
        // Only typed callers accept overwritten middle-row ink; the
        // complete upper/lower corners and opposite side still prove it.
        const int probe = left_caption && caption_row == 1 &&
            has_skin(first, top, skin[0]) ? first + 1 : first;
        if (!has_skin(probe, top, skin[1])) continue;
        int left = probe, right = probe;
        while (left > 0 && has_skin(left, top, skin[1])) --left;
        while (right < gps.dimx && has_skin(right, top, skin[1])) ++right;
        if (left > first || (left == first && !left_caption) ||
            right < last || right >= gps.dimx) continue;
        // Authored captions keep UTF-8 bytes in the classic character grid.
        // Read them inside the proven upper-edge span so continuation bytes
        // in CP437's border range cannot reject the whole save/name card.
        // Use has_skin's same layer; corners, sides and palette stay strict.
        const int caption_left = left_caption ? left : left + 1;
        const auto caption_text = [&](int row) {
            std::string text;
            if (!classic) return text;
            text.assign(right - caption_left, ' ');
            for (int x = caption_left; x < right; ++x) {
                const size_t at = static_cast<size_t>(x) * gps.dimy + row;
                const bool top_layer = !native_draw && native_ui_top_layer_at(gps, at);
                const auto *screen = top_layer ? gps.screen_top : gps.screen;
                if (screen) text[x - caption_left] = screen[at * 8];
            }
            return text;
        };
        const std::string middle_text = caption_text(top + 1);
        const std::string bottom_text = bottom_caption ? caption_text(top + 2) : "";
        const auto utf8_caption_at = [&](int x, int row) {
            return classic && (row == 1 || (row == 2 && bottom_caption)) &&
                !is_cp437_box_separator(row == 1 ? middle_text : bottom_text,
                    static_cast<size_t>(x - caption_left));
        };
        bool complete = true;
        for (int row = 0; row < 3 && complete; ++row) {
            // Two-line civilization records start both caption rows on the
            // left cap in classic mode. Only the caller opting into BOTH
            // caption exceptions may cover the lower-left corner as well.
            const bool covered_left = left_caption && classic &&
                (row == 1 || (row == 2 && bottom_caption)) &&
                caption_row == 1 && left == first &&
                has_skin(left, top + row, skin[4], true, utf8_caption_at(left, row));
            if ((!has_skin(left, top + row, skin[row * 3]) &&
                 !covered_left) ||
                !has_skin(right, top + row, skin[row * 3 + 2])) {
                complete = false;
                break;
            }
            for (int x = left + 1; x < right; ++x) {
                if (!has_skin(x, top + row, skin[row * 3 + 1],
                        row == 1, utf8_caption_at(x, row))) {
                    // The native two-line save card draws full-font text on
                    // its lower edge in classic mode (53.16: 0x15b9b21,
                    // 0x15ba12c). Only typed callers may accept those lost
                    // edge cells. Corners, sides and the entire upper edge
                    // still prove this exact skin; a foreign frame does not.
                    if (bottom_caption && row == 2 &&
                        has_skin(x, top + row, skin[4], true,
                            utf8_caption_at(x, row))) continue;
                    complete = false;
                    break;
                }
            }
        }
        if (complete) return SDL_Rect{left + 1, top, right - left - 1, 3};
    }
    return std::nullopt;
}

// World creation and the title menus use the same init-owned nine-slice
// family as the welcome modal. The green confirmation skin alone misses
// every selected/unselected option and the neutral/red footer actions.
static std::optional<SDL_Rect> native_intro_button_text_rect(
        const graphicst &gps, int first, int last, int y,
        const NativeUiSettings &settings, bool bottom_caption = false,
        std::array<int32_t, 9> *matched_skin = nullptr, bool left_caption = false) {
    const std::array<int32_t, 9> *skins[] = {
        &settings.texpos_neutral_intro_button,
        &settings.texpos_confirm_intro_button,
        &settings.texpos_cancel_intro_button,
        &settings.texpos_selected_intro_button,
        &settings.texpos_unselected_intro_button,
    };
    for (const auto *skin : skins) {
        if (const auto rect = native_nineslice_button_text_rect(
                gps, first, last, y, *skin, settings.classic, bottom_caption, left_caption)) {
            if (matched_skin) *matched_skin = *skin;
            return rect;
        }
    }
    return std::nullopt;
}

static std::optional<SDL_Rect> native_intro_button_text_rect(
        const graphicst &gps, int first, int last, int y,
        bool bottom_caption = false, std::array<int32_t, 9> *matched_skin = nullptr) {
    const auto settings = native_ui_settings();
    return settings ? native_intro_button_text_rect(
                        gps, first, last, y, *settings, bottom_caption, matched_skin)
                    : std::nullopt;
}

// Complete controls and caption-only queries share one skin catalogue and
// orientation walk. Full rectangles require all nine slices; a caller that
// only needs horizontal ownership can also accept the native picture strip.
// x/width exclude side caps. A complete rectangle includes all three rows.
static std::optional<SDL_Rect> native_button_text_rect(
        const graphicst &gps, int first, int last, int y,
        bool bottom_caption = false, std::array<int32_t, 9> *matched_skin = nullptr,
        bool allow_caption_strip = false, bool left_caption = false,
        bool native_draw = false) {
    if (first < 0 || last <= first || last > gps.dimx ||
        y < 0 || y >= gps.dimy) return std::nullopt;
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    // Every complete rectangle first proves one upper-edge cell at this
    // column (or its next column for an overwritten left caption cap).
    // Read those few cells once before trying the entire skin catalogue;
    // ordinary prose otherwise repeats the same layer reads for each skin
    // and orientation, even though none can begin a button here.
    struct Probe {
        const unsigned char *cell = nullptr;
        long primary = 0, lower = 0, anchored = 0;
        bool texture_matches(int32_t skin) const {
            return skin > 0 && (primary == skin || lower == skin);
        }
    };
    const auto read_probe = [&](int x, int row) {
        Probe probe;
        if (x < 0 || x >= gps.dimx || row < 0 || row >= gps.dimy) return probe;
        const size_t at = static_cast<size_t>(x) * gps.dimy + row;
        const bool top = !native_draw && native_ui_top_layer_at(gps, at);
        const auto *screen = top ? gps.screen_top : gps.screen;
        const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
        const auto *lower = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
        const auto *anchored = top ? gps.screentexpos_top_anchored : gps.screentexpos_anchored;
        probe.cell = screen ? screen + at * 8 : nullptr;
        probe.primary = primary ? primary[at] : 0;
        probe.lower = lower ? lower[at] : 0;
        probe.anchored = anchored ? anchored[at] : 0;
        return probe;
    };
    const std::array<Probe, 3> upper_probes{
        read_probe(first, y), read_probe(first, y - 1), read_probe(first, y - 2)};
    const Probe after_left_cap = left_caption ? read_probe(first + 1, y - 1) : Probe{};
    if (!classic && std::all_of(upper_probes.begin(), upper_probes.end(),
            [](const Probe &probe) { return probe.primary <= 0 && probe.lower <= 0; }) &&
        (!left_caption || (after_left_cap.primary <= 0 && after_left_cap.lower <= 0)))
        return std::nullopt;
    const auto skin_matches = [&](const Probe &probe, int32_t skin) {
        if (!classic) return probe.texture_matches(skin);
        if (skin < 0 || skin > 0x7fff || !probe.cell ||
            probe.primary || probe.lower || probe.anchored) return false;
        const int foreground = ((skin >> 8) & 7) + ((skin & 0x4000) ? 8 : 0);
        const int background = (skin >> 11) & 7;
        return probe.cell[0] == (skin & 0xff) &&
            std::equal(probe.cell + 1, probe.cell + 4, gps.uccolor[foreground]) &&
            std::equal(probe.cell + 4, probe.cell + 7, gps.uccolor[background]);
    };
    const auto possible_frame = [&](int32_t upper_left, int32_t upper_middle,
                                    int32_t left, int32_t middle, int32_t right) {
        if (middle <= 0 || left == middle || right == middle) return false;
        for (int caption_row = 0; caption_row < 3; ++caption_row) {
            const int top = y - caption_row;
            if (top < 0 || top + 3 > gps.dimy) continue;
            const auto &probe = upper_probes[caption_row];
            const bool covered_left = left_caption && caption_row == 1 &&
                skin_matches(probe, upper_left);
            if (skin_matches(covered_left ? after_left_cap : probe, upper_middle)) return true;
        }
        return false;
    };
    if (settings) {
        const std::array<int32_t, 9> *intro_skins[] = {
            &settings->texpos_neutral_intro_button,
            &settings->texpos_confirm_intro_button,
            &settings->texpos_cancel_intro_button,
            &settings->texpos_selected_intro_button,
            &settings->texpos_unselected_intro_button,
        };
        for (const auto *skin : intro_skins) {
            if (!possible_frame((*skin)[0], (*skin)[1], (*skin)[3], (*skin)[4], (*skin)[5]))
                continue;
            if (const auto intro = native_nineslice_button_text_rect(
                    gps, first, last, y, *skin, classic, bottom_caption, left_caption,
                    false, native_draw)) {
                if (matched_skin) *matched_skin = *skin;
                return intro;
            }
        }
    }
    const int32_t (*skins[])[3] = {
        native_texture_button_rectangle(gps), native_texture_button_rectangle_selected(gps),
        native_texture_button_rectangle_light(gps), native_texture_button_rectangle_dark(gps),
        native_texture_button_category_rectangle(gps),
        native_texture_button_category_rectangle_selected(gps),
        native_texture_button_category_rectangle_on(gps),
        native_texture_button_category_rectangle_on_selected(gps),
        native_texture_button_category_rectangle_off(gps),
        native_texture_button_category_rectangle_off_selected(gps),
        native_texture_button_horizontal_option_active(gps),
        native_texture_button_horizontal_option_inactive(gps),
        native_texture_button_horizontal_option_remove(gps),
        native_texture_button_horizontal_option_confirm(gps),
    };
    for (const auto *skin : skins) {
        for (int orientation = 0; orientation < 3; ++orientation) {
            // Native drawing orders: [column][row], [row][column], [0,2,1][row].
            const auto tile = [&](int column, int row) {
                if (orientation == 1) return skin[row][column];
                if (orientation == 2 && column > 0) column = 3 - column;
                return skin[column][row];
            };
            const int32_t left_skin = tile(0, 1), middle_skin = tile(1, 1),
                right_skin = tile(2, 1);
            const bool frame_candidate = possible_frame(tile(0, 0), tile(1, 0),
                left_skin, middle_skin, right_skin);
            // The caption-strip fallback always uses texture IDs, including
            // when the complete-frame path is reading classic glyph skins.
            const bool strip_candidate = allow_caption_strip && left_skin != middle_skin &&
                middle_skin != right_skin && upper_probes[0].texture_matches(middle_skin);
            if (!frame_candidate && !strip_candidate) continue;
            std::array<int32_t, 9> normalized;
            for (int row = 0; row < 3; ++row)
                for (int column = 0; column < 3; ++column)
                    normalized[row * 3 + column] = tile(column, row);
            // Prepare-for-journey uses graphicst's horizontal-option skin
            // (53.16 ELF: 0x1f2e3b8), not init's intro buttons. In classic
            // mode add_tile/add_lower_tile writes CP437/palette cells, not
            // texture IDs. Caption ownership must use this same complete
            // reader, or button text gets merged with the prose below it.
            if (frame_candidate) {
                if (const auto rect = native_nineslice_button_text_rect(
                        gps, first, last, y, normalized, classic, bottom_caption, left_caption,
                        false, native_draw)) {
                    if (matched_skin) *matched_skin = normalized;
                    return rect;
                }
            }
            if (!strip_candidate) continue;
            const std::array<int32_t, 3> strip = {
                normalized[3], normalized[4], normalized[5]};
            // Picture buttons can omit a rectangle cap or have clipped rows.
            // Keep their texture-strip proof, never a bare occupied-tile run
            // that could combine two neighbouring buttons.
            if (strip[0] == strip[1] || strip[1] == strip[2] ||
                !native_ui_texture_at(gps, first, y, strip[1])) continue;
            int left = first, right = first;
            while (left > 0 && native_ui_texture_at(gps, left, y, strip[1])) --left;
            while (right < gps.dimx && native_ui_texture_at(gps, right, y, strip[1])) ++right;
            if (right < last || !native_ui_texture_at(gps, right, y, strip[2])) continue;
            const bool rectangle_left = native_ui_texture_at(gps, left, y, strip[0]);
            // ViewBase::display_picture_box joins picture_box[2][row]
            // directly to rectangle[2][row] fill. There is no rectangle left
            // cap in that contract. Other picture buttons insert one cap.
            // Require the complete adjoining picture strip, not a lone tile.
            bool picture_left = false;
            for (int x = left - 2; x >= 0 && !picture_left; --x) {
                const int picture_right = native_picture_box_right(gps, x, y);
                picture_left = picture_right == left + 1 ||
                    (rectangle_left && picture_right == left);
            }
            if (rectangle_left || picture_left) {
                if (matched_skin) *matched_skin = normalized;
                return SDL_Rect{left + 1, y, right - left - 1, 1};
            }
        }
    }
    return std::nullopt;
}

// Character social tabs share one ordered band in matching and layout.
// Military and Thoughts depend on the character/page; the three remaining
// captions establish the band in either graphical or classic tab frames.
static std::vector<LogicalTextField> character_social_tab_fields(std::string_view row) {
    constexpr std::string_view first = "Relations";
    const auto caption_at = [&](size_t at, std::string_view caption) {
        return at <= row.size() && row.substr(at, caption.size()) == caption &&
            (has_word_boundaries(row, at, at + caption.size()) ||
             is_ascii_tab_caption(row, at, at + caption.size()));
    };
    for (size_t start = row.find(first); start != std::string_view::npos;
            start = row.find(first, start + 1)) {
        if (!caption_at(start, first)) continue;
        std::vector<LogicalTextField> fields{{static_cast<int>(start),
            static_cast<int>(start + first.size()), std::string(first)}};
        size_t cursor = start + first.size();
        const auto take = [&](std::string_view caption) {
            while (cursor < row.size()) {
                const char ch = row[cursor];
                if (ch != ' ' && ch != '/' && ch != '\\' && ch != '_' && ch != '-' &&
                        !is_cp437_box_separator(row, cursor)) break;
                ++cursor;
            }
            if (!caption_at(cursor, caption)) return false;
            fields.push_back({static_cast<int>(cursor),
                static_cast<int>(cursor + caption.size()), std::string(caption)});
            cursor += caption.size();
            return true;
        };
        if (!take("Groups")) continue;
        take("Military");
        take("Thoughts");
        if (take("Personality")) return fields;
    }
    return {};
}

// Classic SHORT_TAB/SHORT_SUBTAB skins use CP437 196 for the upper rail
// and underscores on the caption row. The native draw starts at left + 2
// and can overwrite the right underscore (e.g. /_Work details\). Retain
// both sloping sides and their colours, then return the whole interior
// between the lower slopes, including the left underscore's padding cell.
// Installed 53.16 graphics_classic.txt defines these skin cells; Windows
// 0x140171684..0x140171711 sets the four tab bounds and 0x140171baa..0x140171bd2
// places each caption at left + 2, through the cell before the lower '\\'.
static std::optional<std::pair<int, int>> native_classic_tab_text_span(
        const graphicst &gps, int x, int y) {
    if (x < 2 || x >= gps.dimx - 2 || y < 1 || y >= gps.dimy)
        return std::nullopt;
    if (!native_ui_classic().value_or(false)) return std::nullopt;
    const bool layer = native_ui_top_layer_at(gps,
        static_cast<size_t>(x) * gps.dimy + y);
    const auto cell_at = [&](int column, int row) -> const unsigned char * {
        if (column < 0 || column >= gps.dimx || row < 0 || row >= gps.dimy)
            return nullptr;
        const size_t tile = static_cast<size_t>(column) * gps.dimy + row;
        if (native_ui_top_layer_at(gps, tile) != layer) return nullptr;
        const auto *screen = layer ? gps.screen_top : gps.screen;
        return screen ? screen + tile * 8 : nullptr;
    };
    const auto *edge = cell_at(x, y - 1);
    if (!edge || edge[0] != 196) return std::nullopt;
    const auto frame_at = [&](int column, int row, unsigned char glyph) {
        const auto *cell = cell_at(column, row);
        return cell && cell[0] == glyph &&
            std::equal(cell + 1, cell + 7, edge + 1);
    };
    int left = x, right = x + 1;
    while (frame_at(left - 1, y - 1, 196)) --left;
    while (frame_at(right, y - 1, 196)) ++right;
    if (!frame_at(left - 1, y - 1, '/') ||
        !frame_at(right, y - 1, '\\') ||
        !frame_at(left - 2, y, '/') || !frame_at(left - 1, y, '_') ||
        !frame_at(right + 1, y, '\\'))
        return std::nullopt;
    for (int column = left - 1; column <= right; ++column) {
        const auto *cell = cell_at(column, y);
        if (!cell || !std::equal(cell + 4, cell + 7, edge + 4))
            return std::nullopt;
    }
    return {{left - 1, right + 1}};
}

static std::optional<std::pair<int, int>> native_button_text_span(
        const graphicst &gps, int first, int last, int y) {
    const auto rect = native_button_text_rect(
        gps, first, last, y, false, nullptr, true);
    if (!rect) return std::nullopt;
    return {{rect->x, rect->x + rect->w}};
}

// Work-order traits paint a four-column checkbox OVER the rectangle's
// lower tiles. The ordinary nine-slice reader correctly rejects that broken
// skin. Recognize both complete widgets instead, and return only the caption
// area so translated text never covers the checkbox or changes its hitbox.
static std::optional<SDL_Rect> native_work_order_trait_text_rect(
        const graphicst &gps, int left, int top, int maximum_right,
        std::array<int32_t, 9> *matched_skin = nullptr) {
    if (left < 0 || top < 0 || top + 3 > gps.dimy || maximum_right > gps.dimx)
        return std::nullopt;
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto &rectangle = native_texture_button_rectangle(gps);
    const auto &buttons = native_texture_button_main(gps);
    for (int orientation = 0; orientation < (classic ? 3 : 1); ++orientation) {
        const auto tile = [&](int column, int row) {
            if (orientation == 1) return rectangle[row][column];
            if (orientation == 2 && column > 0) column = 3 - column;
            return rectangle[column][row];
        };
        const auto at = [&](int x, int row, int column, bool caption = false) {
            return native_ui_skin_at(gps, x, top + row, tile(column, row),
                classic, caption);
        };
        // Classic labels replace the middle-row blank cells and can also
        // overwrite the left side. The untouched corners/rails and complete
        // checkbox still prove the same control as the graphical textures.
        if (!at(left, 0, 0) || !at(left, 2, 0) ||
            (!at(left, 1, 0) && !(classic && at(left, 1, 1, true)))) continue;
        const int strip_row = classic ? 0 : 1;
        int checkbox = left + 1;
        while (checkbox < maximum_right && at(checkbox, strip_row, 1)) ++checkbox;
        if (checkbox <= left + 1 || checkbox + 4 >= maximum_right) continue;
        bool checked_skin = false;
        for (const int state : {INTERFACE_BUTTON_MAIN_WORK_ORDERS_ADJECTIVE_SELECTED,
                               INTERFACE_BUTTON_MAIN_WORK_ORDERS_ADJECTIVE_NOT_SELECTED}) {
            checked_skin |= native_main_button_skin_at(
                gps, checkbox, top + 1, buttons[state], classic);
        }
        if (!checked_skin) continue;
        int right = checkbox + 4;
        while (right < maximum_right && at(right, strip_row, 1)) ++right;
        if (right >= maximum_right) continue;
        bool complete = true;
        for (int row = 0; row < 3 && complete; ++row) {
            if (!at(right, row, 2)) { complete = false; break; }
            for (int x = left + 1; x < right; ++x) {
                if (x >= checkbox && x < checkbox + 4) continue;
                if (!at(x, row, 1, row == 1)) { complete = false; break; }
            }
        }
        if (!complete) continue;
        if (matched_skin)
            for (int row = 0; row < 3; ++row)
                for (int column = 0; column < 3; ++column)
                    (*matched_skin)[row * 3 + column] = tile(column, row);
        return SDL_Rect{left, top, checkbox - left - 1, 3};
    }
    return std::nullopt;
}

struct NativeCategoryButton {
    SDL_Rect interior;
    bool toggle;
    bool selected;
};

struct NativeStockpileSettingButton {
    NativeCategoryButton button;
    int status_left = -1;
};

// Category selectors and stockpile filters share geometry, but only the
// latter have on/off skins. Keep the semantic distinction alongside the
// complete frame instead of treating every icon column as a task chooser.
static std::optional<NativeCategoryButton> native_category_button_frame(
        const graphicst &gps, int first, int last, int y) {
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const int32_t (*skins[])[3] = {
        native_texture_button_category_rectangle(gps),
        native_texture_button_category_rectangle_selected(gps),
        native_texture_button_category_rectangle_on(gps),
        native_texture_button_category_rectangle_on_selected(gps),
        native_texture_button_category_rectangle_off(gps),
        native_texture_button_category_rectangle_off_selected(gps),
    };
    for (size_t state = 0; state < std::size(skins); ++state) {
        const auto *skin = skins[state];
        for (int orientation = 0; orientation < 2; ++orientation) {
            std::array<int32_t, 9> normalized;
            for (int row = 0; row < 3; ++row)
                for (int column = 0; column < 3; ++column)
                    normalized[row * 3 + column] = orientation
                        ? skin[row][column] : skin[column][row];
            if (const auto button = native_nineslice_button_text_rect(
                    gps, first, last, y, normalized, classic, false, false, true))
                return NativeCategoryButton{*button, state >= 2, state % 2 != 0};
        }
    }
    return std::nullopt;
}

// Stockpile categories/filters overlay a separate four-column status button
// on the last four fill columns, leaving the category's right cap intact.
// In classic mode it replaces those CP437 rails; a normal nine-slice frame
// cannot span it. PE 53.16: category 0x37fed0, filter 0x380980;
// STOCKPILE_ON/PARTIAL/OFF are button_main[408/409/410] (parser 0x10fd02d).
static std::optional<NativeStockpileSettingButton> native_stockpile_setting_button_frame(
        const graphicst &gps, int first, int last, int y) {
    const auto status_at = [&](int x, int middle) {
        for (int kind = 408; kind <= 410; ++kind)
            if (native_main_button_at(gps, x, middle, kind, true)) return true;
        return false;
    };
    if (const auto button = native_category_button_frame(gps, first, last, y)) {
        const int status = button->interior.x + button->interior.w - 4;
        return NativeStockpileSettingButton{*button,
            status >= last && status_at(status, button->interior.y + 1) ? status : -1};
    }
    const auto settings = native_ui_settings();
    if (!settings || !settings->classic || first < 0 || last <= first ||
        last > gps.dimx || y < 1 || y + 1 >= gps.dimy) return std::nullopt;
    const int32_t (*skins[])[3] = {
        native_texture_button_category_rectangle(gps),
        native_texture_button_category_rectangle_selected(gps),
        native_texture_button_category_rectangle_on(gps),
        native_texture_button_category_rectangle_on_selected(gps),
        native_texture_button_category_rectangle_off(gps),
        native_texture_button_category_rectangle_off_selected(gps),
    };
    for (size_t state = 0; state < std::size(skins); ++state) {
        for (int orientation = 0; orientation < 2; ++orientation) {
            const auto at = [&](int x, int row, int column, int band) {
                const int32_t skin = orientation ? skins[state][band][column]
                    : skins[state][column][band];
                return native_ui_skin_at(gps, x, row, skin, true,
                    column == 1 && band == 1, false, true);
            };
            if (!at(first, y - 1, 1, 0)) continue;
            int left = first, status = first;
            while (left > 0 && at(left, y - 1, 1, 0)) --left;
            while (status < gps.dimx && at(status, y - 1, 1, 0)) ++status;
            const int right = status + 4;
            if (left >= first || status < last || right >= gps.dimx ||
                !status_at(status, y)) continue;
            bool complete = true;
            for (int band = 0; band < 3 && complete; ++band) {
                const int row = y - 1 + band;
                if (!at(left, row, 0, band) || !at(right, row, 2, band)) {
                    complete = false;
                    break;
                }
                for (int x = left + 1; x < status; ++x)
                    if (!at(x, row, 1, band)) { complete = false; break; }
            }
            if (complete) return NativeStockpileSettingButton{
                {{left + 1, y - 1, right - left - 1, 3}, state >= 2, state % 2 != 0}, status};
        }
    }
    return std::nullopt;
}

// Category rows place an anchored icon over their ordinary category skin;
// they do not draw a picture-box frame. Its cell width depends on the current
// tile aspect ratio. Anchor ownership supplies that width without assuming a
// square cell grid or treating the first English glyph as a widget boundary.
static std::optional<SDL_Rect> native_category_button_text_rect(
        const graphicst &gps, int first, int last, int y) {
    const auto frame = native_category_button_frame(gps, first, last, y);
    if (!frame) return std::nullopt;
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto *button = &frame->interior;
    const auto top_at = [&](int x, int row) {
        const size_t at = static_cast<size_t>(x) * gps.dimy + row;
        return native_ui_top_layer_at(gps, at);
    };
    const int left = button->x - 1, top = button->y;
    const int right = button->x + button->w, bottom = top + button->h;
    const bool layer = top_at(left, top);
    const auto *anchors = layer ? gps.screentexpos_top_anchored : gps.screentexpos_anchored;
    const auto *flags = layer ? gps.screentexpos_top_flag : gps.screentexpos_flag;
    const auto *screen = layer ? gps.screen_top : gps.screen;
    if (!anchors || !flags || !screen) return std::nullopt;
    const size_t root = static_cast<size_t>(left) * gps.dimy + top;
    const long texture = anchors[root];
    if (texture <= 0 || (flags[root] & (1u << 2))) return std::nullopt;
    const auto same_anchor = [&](int x, int row) {
        if (x < 0 || x >= gps.dimx || row < 0 || row >= gps.dimy ||
            top_at(x, row) != layer) return false;
        const size_t at = static_cast<size_t>(x) * gps.dimy + row;
        if (anchors[at] != texture ||
            (!classic && screen[at * 8] && screen[at * 8] != ' '))
            return false;
        // ANCHOR_SUBORDINATE is bit 2; six-bit x/y offsets begin at
        // bits 6/12. Equal artwork in a neighbouring row is another
        // icon, not an extension of this one's rectangular block.
        const uint32_t flag = flags[at];
        const int root_x = x - ((flag & (1u << 2)) ? int((flag >> 6) & 63) : 0);
        const int root_y = row - ((flag & (1u << 2)) ? int((flag >> 12) & 63) : 0);
        return root_x == left && root_y == top;
    };
    int icon_right = left;
    while (icon_right < right && same_anchor(icon_right, top)) ++icon_right;
    const int text_left = icon_right + 1;
    if (icon_right <= left || text_left > first || text_left >= right) return std::nullopt;
    bool complete = true;
    for (int row = top; row < bottom && complete; ++row) {
        for (int x = left; x < icon_right; ++x)
            if (!same_anchor(x, row)) { complete = false; break; }
        if (same_anchor(icon_right, row)) complete = false;
    }
    for (int x = left; x < icon_right && complete; ++x)
        if (same_anchor(x, bottom)) complete = false;
    if (complete) return SDL_Rect{text_left, top, right - text_left, button->h};
    return std::nullopt;
}

// Foreground pictures stop a text column. Lower-layer row shading is not a
// control and must not shorten the budget to the current English name.
static bool native_foreground_picture_at(const graphicst &gps, int x, int y) {
    if (x < 0 || x >= gps.dimx || y < 0 || y >= gps.dimy) return false;
    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
    const bool top = native_ui_top_layer_at(gps, at);
    const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
    const auto *anchored = top ? gps.screentexpos_top_anchored : gps.screentexpos_anchored;
    return (primary && primary[at] > 0) || (anchored && anchored[at] > 0);
}

// Recenter and inspect are shared with creature rows. Only the state actions
// establish that a record belongs to an item rather than to a named unit.
static bool native_item_action_skin_at(const graphicst &gps, int x, int y,
        const int32_t (*skin)[3], bool classic, const NativeItemRowClip *clip = nullptr) {
    if (skin[1][1] <= 0) return false;
    if (!classic && !clip)
        return native_ui_texture_at(gps, x - 1, y, skin[0][1]) &&
            native_ui_texture_at(gps, x, y, skin[1][1]) &&
            native_ui_texture_at(gps, x + 1, y, skin[2][1]);
    // A coloured B/F/D/H in terrain or text is not an item action. In the
    // character grid require its entire three-row skin on the visible layer.
    for (int orientation = 0; orientation < 2; ++orientation) {
        if (!native_item_row_skin_at(gps, x, y, skin[1][1], classic, clip)) return false;
        bool complete = true;
        for (int dx = 0; dx < 3 && complete; ++dx)
            for (int dy = 0; dy < 3; ++dy)
                if (!native_item_row_skin_at(gps, x - 1 + dx, y - 1 + dy,
                        orientation ? skin[dy][dx] : skin[dx][dy], classic, clip)) {
                    complete = false;
                    break;
                }
        if (complete) return true;
    }
    return false;
}

// Either row of a compact control can share the title baseline. Establish
// its full six-cell skin before using the left cap as a caption boundary.
static bool native_short_item_action_skin_at(const graphicst &gps, int x, int y,
        const int32_t (*skin)[2], bool classic) {
    for (int row = 0; row < 2; ++row) {
        if (!native_ui_skin_at(gps, x, y, skin[1][row], classic)) continue;
        bool complete = true;
        for (int dx = 0; dx < 3 && complete; ++dx)
            for (int dy = 0; dy < 2; ++dy)
                if (!native_ui_skin_at(gps, x - 1 + dx, y - row + dy, skin[dx][dy], classic)) {
                    complete = false;
                    break;
                }
        if (complete) return true;
    }
    return false;
}

static bool read_native_item_state_action_at(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip) {
    const bool classic = native_ui_classic().value_or(false);
    const int32_t (*skins[])[3] = {
        native_texture_button_stocks_forbid(gps), native_texture_button_stocks_forbid_active(gps),
        native_texture_button_stocks_dump(gps), native_texture_button_stocks_dump_active(gps),
        native_texture_button_stocks_melt(gps), native_texture_button_stocks_melt_active(gps),
        native_texture_button_stocks_hide(gps), native_texture_button_stocks_hide_active(gps),
    };
    for (const auto *skin : skins)
        if (native_item_action_skin_at(gps, x, y, skin, classic, clip)) return true;
    // Item sheets draw the compact 3-by-2 state controls, not the Stocks
    // 3-by-3 controls. The native Linux item-sheet branch at 0x13ea2d2..
    // 0x13ea9bc reads button_short_* (gps + 0xb054..0xb113). Their absence
    // here used to reject the WHOLE description/containment panel before
    // its existing sentence grammar had a chance to translate anything.
    // Both rows can contain a caption baseline; validate all six current
    // tiles, including the other row, instead of accepting a loose icon.
    const int32_t (*compact_skins[])[2] = {
        native_texture_button_short_forbid(gps), native_texture_button_short_forbid_active(gps),
        native_texture_button_short_dump(gps), native_texture_button_short_dump_active(gps),
        native_texture_button_short_melt(gps), native_texture_button_short_melt_active(gps),
        native_texture_button_short_hide(gps), native_texture_button_short_hide_active(gps),
    };
    for (const auto *skin : compact_skins)
        if (native_short_item_action_skin_at(gps, x, y, skin, classic)) return true;
    return false;
}

static bool native_item_state_action_at(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip = nullptr) {
    auto *cache = NativePanelReadScope::active;
    if (clip || !cache || !cache->contains(gps, x, y))
        return read_native_item_state_action_at(gps, x, y, clip);
    if (const auto *index = native_item_anchor_index(gps);
            index && !(index->item_anchor_candidates[static_cast<size_t>(x) * gps.dimy + y] & 2))
        return false;
    if (cache->item_actions.empty())
        cache->item_actions.resize(static_cast<size_t>(cache->dimx) * cache->dimy);
    auto &proof = cache->item_actions[static_cast<size_t>(x) * cache->dimy + y];
    if (proof & 1) return (proof & 2) != 0;
    const bool found = read_native_item_state_action_at(gps, x, y, nullptr);
    proof |= static_cast<uint8_t>(1 | (found ? 2 : 0));
    return found;
}

// This role marker belongs to the same row as the item actions. Match the
// complete current skin, not a workshop title, caption spelling or fixed
// screen position: materials incorporated into any building share this role.
static bool native_building_material_at(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip = nullptr) {
    const auto &skin = native_texture_building_item_incorporated(gps);
    const bool classic = native_ui_classic().value_or(false);
    if (classic || clip)
        return native_item_action_skin_at(gps, x, y, skin, classic, clip);
    for (int dx = 0; dx < 3; ++dx)
        for (int dy = 0; dy < 3; ++dy)
            if (!native_ui_texture_at(gps, x - 1 + dx, y - 1 + dy, skin[dx][dy]))
                return false;
    return true;
}

static bool read_native_item_action_at(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip) {
    if (native_building_material_at(gps, x, y, clip)) return true;
    if (native_item_state_action_at(gps, x, y, clip)) return true;
    const bool classic = native_ui_classic().value_or(false);
    // Detail sheets use the two-row task marker at PE 53.16 gps+0xaddc,
    // not the three-row building-list marker. Like the latter it establishes
    // only a boundary; it does not prove a state action or a material role.
    if (native_short_item_action_skin_at(gps, x, y,
            native_texture_building_short_item_task(gps), classic)) return true;
    const int32_t (*skins[])[3] = {
        native_texture_button_stocks_recenter(gps), native_texture_button_stocks_view_item(gps),
        // ADVENTURE_INVENTORY_ITEM_DETAILS is slot 0 of the native
        // inventory-action atlas, distinct from the fortress Stocks skin.
        native_texture_button_inventory_item(gps)[0],
        // Building roles end the name before the ordinary action strip.
        // Ignoring T or another role puts its frame in the caption source or
        // mistakes it for a second picture, falling back to fragment layout.
        // Like recenter, these only establish boundaries: "other" shares the
        // generic subtract skin. F/D/M/H or the incorporated role must still
        // prove item ownership. Only incorporated implies a material name.
        native_texture_building_item_task(gps), native_texture_building_item_trade(gps),
        native_texture_building_item_animal(gps), native_texture_building_item_bait(gps),
        native_texture_building_item_loaded(gps), native_texture_building_item_dead(gps),
        native_texture_building_item_other(gps),
    };
    for (const auto *skin : skins)
        if (native_item_action_skin_at(gps, x, y, skin, classic, clip)) return true;
    return false;
}

static bool native_item_action_at(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip = nullptr) {
    auto *cache = NativePanelReadScope::active;
    if (clip || !cache || !cache->contains(gps, x, y))
        return read_native_item_action_at(gps, x, y, clip);
    if (const auto *index = native_item_anchor_index(gps);
            index && !(index->item_anchor_candidates[static_cast<size_t>(x) * gps.dimy + y] & 4))
        return false;
    if (cache->item_actions.empty())
        cache->item_actions.resize(static_cast<size_t>(cache->dimx) * cache->dimy);
    auto &proof = cache->item_actions[static_cast<size_t>(x) * cache->dimy + y];
    if (proof & 4) return (proof & 8) != 0;
    const bool found = read_native_item_action_at(gps, x, y, nullptr);
    proof |= static_cast<uint8_t>(4 | (found ? 8 : 0));
    return found;
}

// A typed information title can be drawn before its right-hand controls.
// Prove the complete current control before discarding a covered suffix;
// unlike an item-row classifier, this takes the control's LEFT column.
static bool native_info_title_action_button_at(const graphicst &gps, int left, int row) {
    const bool classic = native_ui_classic().value_or(false);
    // The item sheet uses both states of each 3-by-2 action, plus its task
    // marker. Either of the two rows may share the title's baseline.
    const int32_t (*compact[])[2] = {
        native_texture_button_short_forbid(gps), native_texture_button_short_forbid_active(gps),
        native_texture_button_short_dump(gps), native_texture_button_short_dump_active(gps),
        native_texture_button_short_melt(gps), native_texture_button_short_melt_active(gps),
        native_texture_button_short_hide(gps), native_texture_button_short_hide_active(gps),
        native_texture_building_short_item_task(gps),
    };
    for (const auto *skin : compact)
        if (native_short_item_action_skin_at(gps, left + 1, row, skin, classic)) return true;
    // PE 53.16: 0x1837cb is rename; 0x1554ed/0x1554a5 are the
    // inactive/active item-follow camera. All are twelve-cell controls.
    const auto &large_sheet = native_texture_button_large_unit_sheet(gps);
    // Three-row controls intersect this actual caption row only when their
    // middle is at row-1, row or row+1. Compact controls already check their
    // two possible rows above and must not inherit this extra displacement.
    for (int middle = row - 1; middle <= row + 1; ++middle) {
        if (native_caption_action_button_at(gps, left, middle)) return true;
        for (const int kind : {0, 2, 3})
            if (native_main_button_skin_at(gps, left, middle, large_sheet[kind], classic)) return true;
        // The building remove control at 0x183911 belongs to the separate
        // building-sheet atlas, despite looking like another compact action.
        if (native_main_button_skin_at(gps, left, middle,
                native_texture_button_building_sheet(gps)[2], classic)) return true;
    }
    return false;
}

// Character inventory assignment markers precede Inspect and replace the
// caption's right cap too. Source capture and lower-edge repair must accept
// the same complete control, including its current palette and visible layer.
static bool native_inventory_action_at(const graphicst &gps, int x, int y,
        const NativeItemRowClip *clip) {
    const bool classic = native_ui_classic().value_or(false);
    for (const auto &skin : native_texture_button_unit_sheet(gps))
        if (native_item_action_skin_at(gps, x, y, skin, classic, clip)) return true;
    return native_item_action_at(gps, x, y, clip);
}

// Collapsed help keeps a three-row HELP_BORDER frame, without HELP_CORNER.
// Its reveal and close controls replace the upper-right six columns across
// the top two rows. Prove those complete live controls and every remaining
// edge before sharing the bounded title with matching and composition.
static std::vector<NativeCollapsedHelpPanel> native_collapsed_help_panels(
        const graphicst &gps) {
    auto *cache = NativePanelReadScope::active;
    if (cache && cache->gps == &gps && cache->collapsed_help_panels)
        return *cache->collapsed_help_panels;
    std::vector<NativeCollapsedHelpPanel> panels;
    const auto settings = native_ui_settings();
    const auto &border = native_texture_help_border(gps);
    const auto &reveal = native_texture_help_reveal(gps);
    const auto &close = native_texture_help_close(gps);
    const auto tile = [&](int x, int y, int32_t skin) {
        return native_ui_skin_at(gps, x, y, skin, settings && settings->classic);
    };
    for (int bottom = 2; bottom < gps.dimy; ++bottom) {
        const int top = bottom - 2;
        for (int left = 0; left + 7 < gps.dimx; ++left) {
            if (!tile(left, bottom, border[0][2])) continue;
            int right = left + 1;
            while (right < gps.dimx && tile(right, bottom, border[1][2])) ++right;
            if (right < left + 7 || right >= gps.dimx ||
                !tile(right, bottom, border[2][2])) continue;
            bool complete = tile(left, top, border[0][0]) &&
                tile(left, top + 1, border[0][1]);
            for (int x = left + 1; complete && x < right - 5; ++x)
                complete = tile(x, top, border[1][0]);
            for (int dx = 0; complete && dx < 3; ++dx)
                for (int dy = 0; complete && dy < 2; ++dy)
                    complete = tile(right - 5 + dx, top + dy, reveal[dx][dy]) &&
                        tile(right - 2 + dx, top + dy, close[dx][dy]);
            if (!complete) continue;
            panels.push_back({{left, top, right - left + 1, 3},
                {left + 1, top + 1, right - left - 6, 1}});
            left = right;
        }
    }
    if (cache && cache->gps == &gps) cache->collapsed_help_panels = panels;
    return panels;
}

// Shared recognition of the CURRENT native panel skin. Parts use row-major
// nine-slice order: NW/N/NE, W/interior/E, SW/S/SE. Texture arrays on graphicst
// use [x][y], as the existing native help-frame reader does.
// A tutorial's verified artwork and connected sides establish an occluder
// before any text matcher runs. Background widgets can then recover their
// own frame even when the help dialog covers part of its horizontal edge.
static std::vector<SDL_Rect> native_help_overlay_frames(const graphicst &gps) {
    auto *cache = NativePanelReadScope::active;
    if (cache && cache->gps == &gps && cache->help_frames) return *cache->help_frames;
    std::vector<SDL_Rect> frames;
    for (const NativeCollapsedHelpPanel &panel : native_collapsed_help_panels(gps))
        frames.push_back(panel.frame);
    const auto settings = native_ui_settings();
    const auto &border = native_texture_help_border(gps);
    const auto &corner = native_texture_help_corner(gps);
    const int width = static_cast<int>(std::size(corner));
    const int height = static_cast<int>(std::size(corner[0]));
    const auto tile = [&](int x, int y, int32_t skin) {
        return native_ui_skin_at(gps, x, y, skin, settings && settings->classic);
    };
    for (int bottom = height; bottom < gps.dimy; ++bottom) {
        for (int left = 0; left + width < gps.dimx; ++left) {
            if (!tile(left, bottom, border[0][2])) continue;
            int right = left + 1;
            while (right < gps.dimx && tile(right, bottom, border[1][2])) ++right;
            if (right <= left + width || right >= gps.dimx ||
                !tile(right, bottom, border[2][2])) continue;
            for (int top = bottom - height; top >= 0; --top) {
                bool complete = true;
                for (int dx = 0; complete && dx < width; ++dx)
                    for (int dy = 0; complete && dy < height; ++dy)
                        complete = tile(left + dx, top + dy, corner[dx][dy]);
                if (!complete) continue;
                for (int y = top + height; complete && y < bottom; ++y)
                    complete = tile(left, y, border[0][1]) && tile(right, y, border[2][1]);
                if (complete) frames.push_back({left, top, right - left + 1, bottom - top + 1});
                break;
            }
        }
    }
    if (cache && cache->gps == &gps) cache->help_frames = frames;
    return frames;
}

// Occlusion is a property of the native frame, not of its translated words.
// In particular, short picture-button tips need the same layer separation as
// multi-line help, even when their text has no tooltip-catalog entry.
static std::vector<SDL_Rect> native_announcement_overlay_frames(const graphicst &gps);
static std::vector<SDL_Rect> native_unit_chooser_overlay_frames(const graphicst &gps);
static std::vector<SDL_Rect> native_text_overlay_frames(const graphicst &gps) {
    auto *cache = NativePanelReadScope::active;
    if (cache && cache->gps == &gps && cache->overlay_frames) return *cache->overlay_frames;
    auto frames = native_help_overlay_frames(gps);
    const auto announcements = native_announcement_overlay_frames(gps);
    frames.insert(frames.end(), announcements.begin(), announcements.end());
    const auto choosers = native_unit_chooser_overlay_frames(gps);
    frames.insert(frames.end(), choosers.begin(), choosers.end());
    if (const auto widget = captured_native_tooltip_widget(gps)) frames.push_back(widget->bounds);
    // HOVER_RECTANGLE is also used for ordinary floating panels. Its skin
    // alone does not establish an occluder or authorize clipping page text.
    if (cache && cache->gps == &gps) cache->overlay_frames = frames;
    return frames;
}

class NativePanelBorders {
public:
    explicit NativePanelBorders(const graphicst &gps, bool require_classic_skin = false) : gps_(gps) {
        if (const auto settings = native_ui_settings()) {
            require_classic_skin_ = require_classic_skin && settings->classic;
            nine_ = {{
                settings->texpos_border_nw, settings->texpos_border_n,
                settings->texpos_border_ne, settings->texpos_border_w,
                settings->texpos_border_interior, settings->texpos_border_e,
                settings->texpos_border_sw, settings->texpos_border_s,
                settings->texpos_border_se,
            }};
        }
    }

    bool at(int x, int y, int part,
            std::optional<std::string_view> source_row = std::nullopt,
            std::optional<std::pair<int, int>> text_columns = std::nullopt) const {
        if (x < 0 || x >= gps_.dimx || y < 0 || y >= gps_.dimy ||
            part < 0 || part >= 9) return false;
        // Scrollbar CP437 blocks beside a vertical edge can accidentally form
        // valid UTF-8 bytes. A typed item viewport instead proves the exact
        // live border glyph AND palette; do not let the general text-boundary
        // heuristic combine two native widgets. Keep this proof out of the
        // ordinary border cache and all untyped text/snapshot readers.
        if (require_classic_skin_ && !source_row)
            return nine_[part] > 0 && native_ui_skin_at(gps_, x, y, nine_[part], true);
        auto *cache = NativePanelReadScope::active;
        const int first = std::max({0, x - 3, text_columns ? text_columns->first : 0});
        const int end = std::min({gps_.dimx, x + 4,
            text_columns ? text_columns->second : gps_.dimx});
        if (source_row || !cache || cache->gps != &gps_ || first > x || end <= x)
            return read_at(x, y, part, source_row, text_columns);
        if (cache->cells.empty())
            cache->cells.resize(static_cast<size_t>(gps_.dimx) * gps_.dimy);
        // The CP437/UTF-8 proof reads at most three neighbours on either
        // side. Preserve both exact encoding boundaries in the cache key:
        // a map byte outside a candidate frame must not join its border.
        const size_t variant = static_cast<size_t>((x - first) * 4 + end - x - 1);
        auto &proof = cache->cells[static_cast<size_t>(x) * gps_.dimy + y][variant];
        const uint32_t bit = 1u << part;
        if (proof & bit) return (proof & (bit << 9)) != 0;
        const bool found = read_at(x, y, part, source_row, text_columns);
        proof |= bit | (found ? bit << 9 : 0);
        return found;
    }

    template <typename ReadFrame>
    std::optional<SDL_Rect> closed_frame(int left, int right, int row,
            const std::optional<SDL_Rect> &occluder, ReadFrame &&read) const {
        if (require_classic_skin_) return read();
        auto *cache = NativePanelReadScope::active;
        if (!cache || cache->gps != &gps_) return read();
        const std::array<int, 7> key{left, right, row,
            occluder ? occluder->x : -1, occluder ? occluder->y : -1,
            occluder ? occluder->w : -1, occluder ? occluder->h : -1};
        if (const auto found = cache->frames.find(key); found != cache->frames.end())
            return found->second;
        const auto result = read();
        cache->frames.emplace(key, result);
        return result;
    }

private:
    bool read_at(int x, int y, int part,
            std::optional<std::string_view> source_row,
            std::optional<std::pair<int, int>> text_columns) const {
        const size_t tile = static_cast<size_t>(x) * gps_.dimy + y;
        const bool top = native_ui_top_layer_at(gps_, tile);
        const auto *primary = top ? gps_.screentexpos_top : gps_.screentexpos;
        const auto *lower = top ? gps_.screentexpos_top_lower : gps_.screentexpos_lower;
        const auto contains = [](long texture, const auto &variants) {
            return texture > 0 && std::find(std::begin(variants),
                std::end(variants), texture) != std::end(variants);
        };
        const auto corner = [&](long texture, const auto &variants) {
            return std::any_of(std::begin(variants), std::end(variants),
                [&](const auto &variant) { return contains(texture, variant); });
        };
        const auto texture_matches = [&](long texture) {
            if (texture <= 0) return false;
            // Character attribute/skill hover cards use this separate skin;
            // the native draw writes its nine slices into screentexpos_lower.
            // Their complete frame must own both tooltip text and list clipping.
            if (texture == nine_[static_cast<size_t>(part)] ||
                texture == native_texture_help_border(gps_)[part % 3][part / 3] ||
                texture == native_texture_hover_rectangle(gps_)[part % 3][part / 3])
                return true;
            // Adventure journal records have their own nine-slice skins,
            // including separate pinned/selected variants. The native draw
            // stores these in the lower layer just like other framed prose.
            // They do not use the generic outer-panel border texture IDs.
            if (texture == native_texture_adventure_log_pinned_active(gps_)[part % 3][part / 3] ||
                texture == native_texture_adventure_log_pinned_inactive(gps_)[part % 3][part / 3] ||
                texture == native_texture_adventure_log_item_active(gps_)[part % 3][part / 3] ||
                texture == native_texture_adventure_log_item_inactive(gps_)[part % 3][part / 3])
                return true;
            switch (part) {
            case 0: return corner(texture, native_texture_border_top_left(gps_));
            case 1: return contains(texture, native_texture_border_top(gps_));
            case 2: return corner(texture, native_texture_border_top_right(gps_));
            case 3: return contains(texture, native_texture_border_left(gps_));
            case 5: return contains(texture, native_texture_border_right(gps_));
            case 6: return corner(texture, native_texture_border_bottom_left(gps_));
            case 7: return contains(texture, native_texture_border_bottom(gps_));
            case 8: return corner(texture, native_texture_border_bottom_right(gps_));
            default: return false;
            }
        };
        if ((primary && texture_matches(primary[tile])) ||
            (lower && texture_matches(lower[tile]))) return true;

        // A populated top layer owns this cell even if it has only a texture.
        // Do not recover a hidden ASCII border from the inactive base layer.
        const auto *screen = top ? gps_.screen_top : gps_.screen;
        const unsigned char ch = source_row
            ? (static_cast<size_t>(x) < source_row->size()
                ? static_cast<unsigned char>((*source_row)[static_cast<size_t>(x)]) : 0)
            : (screen ? screen[tile * 8] : 0);
        if (!is_cp437_box_drawing_byte(ch)) return false;
        // Authored names occupy adjacent UTF-8 byte cells. A continuation
        // such as 0xba is not a CP437 vertical edge: accepting it makes the
        // containing panel fail its closed-frame check and drops every field
        // on that row out of layout. Use the shared text-boundary classifier
        // for all panels, not a task-name or per-page exception. Actual border
        // textures above remain authoritative, including ASCII-mode skins.
        // A candidate closed frame is also an encoding boundary: bytes
        // outside it cannot be the lead/tail of text inside it. In classic
        // embark maps, terrain 0xe2 0x8c beside a 0xb3 left edge otherwise
        // looks like one valid UTF-8 character and rejects the entire modal.
        // Keep full Unicode context within the candidate frame, including
        // snapshot rows; ordinary field reads still use the complete row.
        const int first = std::max({0, x - 3, text_columns ? text_columns->first : 0});
        const int end = std::min({gps_.dimx, x + 4,
            text_columns ? text_columns->second : gps_.dimx});
        if (first > x || end <= x) return false;
        std::array<char, 7> context{};
        for (int column = first; column < end; ++column) {
            if (source_row) {
                context[static_cast<size_t>(column - first)] =
                    static_cast<size_t>(column) < source_row->size()
                        ? (*source_row)[static_cast<size_t>(column)] : ' ';
            } else {
                const size_t neighbour = static_cast<size_t>(column) * gps_.dimy + y;
                // An occluded lead/tail cannot lend bytes to a foreground glyph.
                context[static_cast<size_t>(column - first)] =
                    native_ui_top_layer_at(gps_, neighbour) == top
                        ? static_cast<char>(screen[neighbour * 8]) : ' ';
            }
        }
        const auto text = std::string_view(context.data(), static_cast<size_t>(end - first));
        const size_t offset = static_cast<size_t>(x - first);
        if (!is_cp437_box_separator(text, offset)) return false;
        switch (part) {
        case 0: return ch == 0xda || ch == 0xc9;
        case 1: case 7: return ch == 0xc4 || ch == 0xcd;
        case 2: return ch == 0xbf || ch == 0xbb;
        case 3: case 5: return ch == 0xb3 || ch == 0xba;
        case 6: return ch == 0xc0 || ch == 0xc8;
        case 8: return ch == 0xd9 || ch == 0xbc;
        default: return false;
        }
    }

private:
    const graphicst &gps_;
    std::array<int32_t, 9> nine_{};
    bool require_classic_skin_ = false;
};

// Return logical grid coordinates of the interior, excluding every border
// cell. The complete source rectangle must be inside this frame.
// Both sides, all corners and the visible horizontal edges must close;
// neighbouring widgets or a lone redraw strip cannot infer a panel width.
static std::optional<SDL_Rect> native_panel_interior_with_occluder(
        const NativePanelBorders &borders, const graphicst &gps,
        const SDL_Rect &source,
        std::optional<SDL_Rect> occluding_frame = std::nullopt) {
    if (source.x <= 0 || source.y <= 0 || source.w <= 0 || source.h <= 0 ||
        source.x >= gps.dimx || source.y >= gps.dimy ||
        source.w >= gps.dimx - source.x || source.h >= gps.dimy - source.y)
        return std::nullopt;
    const int first_x = source.x, last_x = source.x + source.w;
    const int row = source.y + source.h / 2;
    if (occluding_frame &&
        (occluding_frame->x < 0 || occluding_frame->y < 0 ||
         occluding_frame->w <= 0 || occluding_frame->h <= 0 ||
         occluding_frame->x >= gps.dimx || occluding_frame->y >= gps.dimy ||
         occluding_frame->w > gps.dimx - occluding_frame->x ||
         occluding_frame->h > gps.dimy - occluding_frame->y)) return std::nullopt;
    const auto occluded = [&](int x, int y) {
        return occluding_frame && x >= occluding_frame->x &&
            x < occluding_frame->x + occluding_frame->w &&
            y >= occluding_frame->y && y < occluding_frame->y + occluding_frame->h;
    };
    const auto edge = [&](int x, int y, int part, int left, int right) {
        return borders.at(x, y, part, std::nullopt, std::pair{left, right + 1});
    };
    const auto horizontal = [&](int left, int right, int y, int part) {
        for (int x = left + 1; x < right; ++x) {
            if (edge(x, y, part, left, right)) continue;
            // The caller verifies this currently visible foreground frame,
            // including its border; it is never a screenshot guess or cache.
            // Only horizontal edge cells inside it may be hidden.
            if (!occluded(x, y)) return false;
        }
        return true;
    };
    const auto closed = [&](int left, int right) -> std::optional<SDL_Rect> {
        int top = row - 1;
        for (; top >= 0; --top) {
            if (edge(left, top, 0, left, right) && edge(right, top, 2, left, right) &&
                horizontal(left, right, top, 1)) break;
            if (!edge(left, top, 3, left, right) || !edge(right, top, 5, left, right))
                return std::nullopt;
        }
        if (top < 0) return std::nullopt;
        int bottom = row + 1;
        for (; bottom < gps.dimy; ++bottom) {
            const bool left_hidden = occluded(left, bottom);
            const bool right_hidden = occluded(right, bottom);
            const bool left_corner = !left_hidden && edge(left, bottom, 6, left, right);
            const bool right_corner = !right_hidden && edge(right, bottom, 8, left, right);
            // A current closed foreground frame can hide a side and its bottom
            // corner. The other corner must still establish the actual height.
            if ((left_corner || right_corner) &&
                (left_corner || left_hidden) && (right_corner || right_hidden) &&
                horizontal(left, right, bottom, 7)) break;
            if ((!left_hidden && !edge(left, bottom, 3, left, right)) ||
                (!right_hidden && !edge(right, bottom, 5, left, right)))
                return std::nullopt;
        }
        if (bottom >= gps.dimy) return std::nullopt;
        return SDL_Rect{left + 1, top + 1, right - left - 1, bottom - top - 1};
    };

    // In classic mode a row-button side is also a CP437 panel side. Its
    // caption can overwrite the top edge, so the nearest pair need not form
    // any closed frame. Try enclosing pairs without borrowing partial edges
    // from those controls. The normal nearest-frame path still exits first.
    for (int left = first_x - 1; left >= 0; --left) {
        if (!edge(left, row, 3, left, gps.dimx - 1)) continue;
        for (int right = last_x; right < gps.dimx; ++right) {
            if (!edge(right, row, 5, left, right)) continue;
            const auto panel = borders.closed_frame(left, right, row, occluding_frame,
                [&] { return closed(left, right); });
            // The cached proof describes a frame, not ownership of a source.
            // Recheck every caller's full height before accepting it.
            if (panel && panel->y <= source.y &&
                panel->y + panel->h >= source.y + source.h) return panel;
        }
    }
    return std::nullopt;
}

// Both PE editions use all three instructions. The first belongs to the
// two hover paths; the others belong to alert/all/unit report views. See
// data/extracted/fortress-alert-ui for the complete native dispatch. These
// frames share foreground ownership, regardless of which report produced
// their text (including the tutorial's direct report allocator).
static constexpr std::array<std::string_view, 6> native_announcement_instructions = {
    "Left click for recenter and expand options.  Right click to dismiss.",
    "Left click for recenter and expand options. Right click to dismiss.",
    "You can recenter on certain announcements.  Right click to close.",
    "You can recenter on certain announcements. Right click to close.",
    "Select a report to view the full text.  Right click to close.",
    "Select a report to view the full text. Right click to close."};

// The alert flyout shares its border artwork with ordinary panels. Its
// native callsite rectangle, or its complete interaction instruction and
// closed current frame, establish the foreground owner independently of
// translated report words.
static std::vector<SDL_Rect> native_announcement_overlay_frames(const graphicst &gps) {
    auto *cache = NativePanelReadScope::active;
    if (cache && cache->gps == &gps && cache->announcement_frames)
        return *cache->announcement_frames;
    std::vector<SDL_Rect> frames;
    if (!gps.screen || gps.dimx <= 0 || gps.dimx > 1000 ||
            gps.dimy <= 0 || gps.dimy > 1000) return frames;
    // The popup callsite and both hover row-count callsites already retained
    // their exact current native rectangles before the clear. Those draw
    // owners remain valid when a clipped/covered edge prevents a closed
    // artwork frame from being found. Background page views omit them.
    if (!NativeTooltipPageScope::active)
        for (const auto &saved : native_announcement_backgrounds(gps)) {
            if (!saved) continue;
            const auto &bounds = saved->bounds;
            if (bounds.x < 0 || bounds.y < 0 || bounds.w <= 0 || bounds.h <= 0 ||
                    bounds.x > gps.dimx - bounds.w || bounds.y > gps.dimy - bounds.h)
                continue;
            frames.push_back(bounds);
        }
    const NativePanelBorders borders(gps);
    std::string row(static_cast<size_t>(gps.dimx), ' ');
    for (int y = 1; y < gps.dimy - 1; ++y) {
        for (int x = 0; x < gps.dimx; ++x) {
            const size_t at = static_cast<size_t>(x) * gps.dimy + y;
            const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
            row[x] = screen && screen[at * 8] ? static_cast<char>(screen[at * 8]) : ' ';
        }
        size_t x = std::string::npos;
        std::string_view instruction;
        for (const auto candidate : native_announcement_instructions) {
            x = row.find(candidate);
            if (x != std::string::npos) { instruction = candidate; break; }
        }
        if (instruction.empty()) continue;
        // Use the closed-frame primitive: the public panel reader can itself
        // borrow these occluders when proving a partially covered page.
        const auto panel = native_panel_interior_with_occluder(borders, gps,
            SDL_Rect{static_cast<int>(x), y, static_cast<int>(instruction.size()), 1});
        if (!panel) continue;
        const SDL_Rect frame{panel->x - 1, panel->y - 1, panel->w + 2, panel->h + 2};
        if (std::none_of(frames.begin(), frames.end(), [&](const SDL_Rect &other) {
                return other.x == frame.x && other.y == frame.y &&
                    other.w == frame.w && other.h == frame.h;
            })) frames.push_back(frame);
    }
    if (cache && cache->gps == &gps) cache->announcement_frames = frames;
    return frames;
}

static std::optional<SDL_Rect> native_panel_interior(
        const NativePanelBorders &borders, const graphicst &gps,
        const SDL_Rect &source,
        std::optional<SDL_Rect> occluding_frame = std::nullopt) {
    if (auto panel = native_panel_interior_with_occluder(borders, gps, source, occluding_frame))
        return panel;
    // All widget owners share the same foreground geometry. A help card
    // covering the upper edge must not invalidate distant footer paragraphs,
    // tables, tabs or controls in the otherwise intact background panel.
    for (const auto &frame : native_text_overlay_frames(gps)) {
        if (source.x >= frame.x && source.y >= frame.y &&
            source.x + source.w <= frame.x + frame.w &&
            source.y + source.h <= frame.y + frame.h) continue;
        if (auto panel = native_panel_interior_with_occluder(borders, gps, source, frame))
            return panel;
    }
    return std::nullopt;
}

static std::optional<SDL_Rect> native_panel_interior(
        const NativePanelBorders &borders, const graphicst &gps,
        int first_x, int last_x, int row,
        std::optional<SDL_Rect> occluding_frame = std::nullopt) {
    return native_panel_interior(borders, gps,
        SDL_Rect{first_x, row, last_x - first_x, 1}, occluding_frame);
}

// Building item lists clip their three-row records manually rather than
// changing graphicst::clipy. The native scrollbar spans the same inclusive
// top/bottom rows (PE 53.16 0x19e070..0x19e12f). Require BOTH actual arrow
// caps: a partially covered scrollbar run cannot invent a viewport edge.
static std::optional<NativeItemRowClip> native_item_list_clip(
        const graphicst &gps, const NativePanelBorders &borders,
        int picture, int strip_right, int y) {
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const NativePanelBorders skin_borders(gps, true);
    const auto panel = native_panel_interior(classic ? skin_borders : borders,
        gps, picture, strip_right, y);
    if (!panel) return std::nullopt;
    const auto cap_at = [&](int x, int row, bool bottom) {
        const auto pair = [&](int32_t left, int32_t right) {
            return left > 0 && right > 0 && native_ui_skin_at(gps, x, row, left, classic) &&
                native_ui_skin_at(gps, x + 1, row, right, classic);
        };
        const auto &track = native_texture_scrollbar(gps);
        if (pair(track[0][bottom ? 2 : 0], track[1][bottom ? 2 : 0])) return true;
        const auto *hover = bottom ? native_texture_scrollbar_down_hover(gps)
            : native_texture_scrollbar_up_hover(gps);
        const auto *pressed = bottom ? native_texture_scrollbar_down_pressed(gps)
            : native_texture_scrollbar_up_pressed(gps);
        if (pair(hover[0], hover[1]) || pair(pressed[0], pressed[1])) return true;
        if (settings)
            for (int index : {bottom ? 2 : 0, bottom ? 5 : 3, bottom ? 6 : 4})
                if (pair(settings->scrollbar_skins[index][0],
                        settings->scrollbar_skins[index][1])) return true;
        return false;
    };
    for (const auto &scroll : native_vertical_scrollbar_spans(gps, *panel)) {
        if (scroll.x < strip_right || scroll.h < 3 ||
            y <= scroll.y || y >= scroll.y + scroll.h - 1 ||
            !cap_at(scroll.x, scroll.y, false) ||
            !cap_at(scroll.x, scroll.y + scroll.h - 1, true)) continue;
        const bool top = native_ui_top_layer_at(gps,
            static_cast<size_t>(picture) * gps.dimy + y);
        bool same_layer = true;
        for (int row = y - 1; row <= y + 1 && same_layer; ++row)
            for (int x = picture; x < strip_right; ++x)
                if (!native_item_row_layer_at(gps, x, row, top))
                    same_layer = false;
        for (int row = scroll.y; row < scroll.y + scroll.h && same_layer; ++row)
            for (int x = scroll.x; x < scroll.x + scroll.w; ++x)
                if (native_ui_top_layer_at(gps, static_cast<size_t>(x) * gps.dimy + row) != top)
                    same_layer = false;
        if (same_layer)
            return NativeItemRowClip{{picture, scroll.y, scroll.x - picture, scroll.h},
                gps.dimx, gps.dimy, top};
    }
    return std::nullopt;
}

// Item sheets share the picture/Weight heading. Fortress sheets also place
// compact item controls beside the title; those cells never belong to its
// source or layout budget. Read current composed glyphs even when a matching
// pass has already reserved the title.
template <typename ReadChar>
static std::optional<SDL_Rect> native_item_detail_heading(
        const graphicst &gps, const SDL_Rect &panel, ReadChar &&read_char) {
    const int right = panel.x + panel.w;
    const int middle = panel.y + 1;
    if (panel.h < 3 || panel.x < 0 || right <= panel.x || right > gps.dimx ||
        panel.y < 0 || middle + 1 >= gps.dimy) return std::nullopt;
    // Weight is required for every accepted heading. Most callers are
    // rejecting ordinary panels, so establish that cheap text condition
    // before probing picture skins at every column. Keep the current rows
    // for the exact picture-relative caption proof below.
    std::array<std::string, 2> weight_rows;
    bool possible_weight = false;
    for (int row = middle; row <= middle + 1; ++row) {
        auto &caption = weight_rows[static_cast<size_t>(row - middle)];
        caption.reserve(static_cast<size_t>(panel.w));
        for (int x = panel.x; x < right; ++x) {
            const unsigned char ch = read_char(x, row);
            caption.push_back(ch ? ch : ' ');
        }
        possible_weight = possible_weight || caption.find("Weight:") != std::string::npos;
    }
    if (!possible_weight) return std::nullopt;
    for (int picture = panel.x; picture < right; ++picture) {
        const int picture_right = native_picture_box_right(gps, picture, middle);
        if (picture_right <= picture || picture_right >= right) continue;
        for (int row = middle; row <= middle + 1; ++row) {
            const auto weight = trim_view(std::string_view(
                weight_rows[static_cast<size_t>(row - middle)]).substr(
                    static_cast<size_t>(picture_right - panel.x)));
            if (!weight.starts_with("Weight:") ||
                trim_view(weight.substr(7)).empty()) continue;
            // Native item sheets put the title on the picture's middle row
            // when no Owner is present; with an Owner, the title moves up and
            // Owner occupies that middle row. Weight stays below both. The
            // same arrangement is used with the wider, six-row item picture.
            // PE 53.16: 0x1548a7/0x1548d1, Owner 0x154a38, Weight 0x154be5.
            // A blank first row therefore cannot reject the entire sheet.
            for (int title_y = panel.y; title_y < row; ++title_y) {
                int title_right = right;
                for (int x = picture_right + 1; x + 1 < right; ++x)
                    if (native_item_action_at(gps, x, title_y)) {
                        title_right = x - 1;
                        break;
                    }
                int title = picture_right;
                while (title < title_right && (!read_char(title, title_y) ||
                                        read_char(title, title_y) == ' ')) ++title;
                if (title < title_right)
                    return SDL_Rect{title, title_y, title_right - title, row - title_y + 1};
            }
        }
    }
    return std::nullopt;
}

// A detail sheet can reach the viewport bottom or have its side interrupted
// by the body scroll gutter. Its complete top edge, current picture/Weight
// band and surviving sides still establish the heading. Keep this exception
// local to item sheets; ordinary panels continue to require all four sides.
template <typename ReadChar>
static std::optional<SDL_Rect> native_item_detail_panel(
        const NativePanelBorders &borders, const graphicst &gps,
        int picture, int picture_right, int middle, ReadChar &&read_char) {
    if (const auto panel = native_panel_interior(
            borders, gps, picture, picture_right, middle)) return panel;
    const NativePanelBorders skin_borders(gps, true);
    for (int left = picture - 1; left >= 0; --left) {
        if (!skin_borders.at(left, middle, 3)) continue;
        for (int right = picture_right; right < gps.dimx; ++right) {
            if (!skin_borders.at(right, middle, 5)) continue;
            int top = middle - 1;
            while (top >= 0 && skin_borders.at(left, top, 3) &&
                    skin_borders.at(right, top, 5)) --top;
            if (top < 0 || !skin_borders.at(left, top, 0) ||
                !skin_borders.at(right, top, 2)) continue;
            bool complete_top = true;
            for (int x = left + 1; x < right; ++x)
                if (!skin_borders.at(x, top, 1)) {
                    complete_top = false;
                    break;
                }
            if (!complete_top) continue;
            // Item-picture tabs step the right edge inward below Owner.
            // Follow the continuous left edge so Weight remains inside the
            // heading; the current picture/Weight proof below is mandatory.
            int bottom = middle + 1;
            while (bottom < gps.dimy && skin_borders.at(left, bottom, 3)) ++bottom;
            const SDL_Rect panel{left + 1, top + 1,
                right - left - 1, bottom - top - 1};
            if (native_item_detail_heading(gps, panel, read_char)) return panel;
        }
    }
    return std::nullopt;
}


// Every character sheet has Overview/Items/Health. Animals can end there;
// other characters add Skills, with Rooms/Labor in fortress mode. Matching,
// suppression and layout share this ordered band and its actual last caption.
static std::vector<LogicalTextField> character_information_tab_fields(
        std::string_view row) {
    static constexpr std::array<std::string_view, 6> captions = {{
        "Overview", "Items", "Health", "Skills", "Rooms", "Labor",
    }};
    std::vector<LogicalTextField> fields;
    size_t cursor = 0;
    for (size_t index = 0; index < captions.size(); ++index) {
        const auto caption = captions[index];
        size_t at = row.find(caption, cursor);
        while (at != std::string_view::npos &&
               !(has_word_boundaries(row, at, at + caption.size()) ||
                 is_ascii_tab_caption(row, at, at + caption.size())))
            at = row.find(caption, at + 1);
        if (at == std::string_view::npos) {
            if (index < 3) return {};
            break;
        }
        cursor = at + caption.size();
        fields.push_back({static_cast<int>(at), static_cast<int>(cursor),
            std::string(caption)});
    }
    return fields;
}

// Skills owns five separate captions. Keep their source spans separate even
// when native tab padding is narrower than an ordinary text-field separator.
static std::vector<LogicalTextField> character_skill_tab_fields(
        std::string_view row) {
    static constexpr std::array<std::string_view, 5> captions = {{
        "Labor", "Combat", "Social", "Other skills", "Knowledge",
    }};
    std::vector<LogicalTextField> fields;
    size_t cursor = 0;
    for (const auto caption : captions) {
        size_t at = row.find(caption, cursor);
        while (at != std::string_view::npos &&
               !(has_word_boundaries(row, at, at + caption.size()) ||
                 is_ascii_tab_caption(row, at, at + caption.size())))
            at = row.find(caption, at + 1);
        if (at == std::string_view::npos) return {};
        cursor = at + caption.size();
        fields.push_back({static_cast<int>(at), static_cast<int>(cursor),
            std::string(row.substr(at, caption.size()))});
    }
    return fields;
}

struct CharacterSummaryGrid {
    int left;
    int divider;
    int right; // Exclusive; outer frame is not part of the summary.
    int top;
    int bottom; // Footer separator; the quote below is full-width.
};

static std::optional<CharacterSummaryGrid> find_character_summary_grid(
        const graphicst &gps, int first_tab_x, int last_tab_end, int content_top) {
    // Read the CURRENT native border tiles, not SDL redraw rectangles or the
    // screen edge. The fortress sheet ends before the minimap/elevation UI;
    // the same widget can also be wider or sit beside the embark citizen list.
    const long horizontal = native_texture_interior_border_w_e(gps);
    const long vertical = native_texture_interior_border_n_s(gps);
    const long crossing = native_texture_interior_border_n_s_w_e(gps);
    const long footer = native_texture_interior_border_n_w_e(gps);
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    if (horizontal <= 0 || vertical <= 0 || crossing <= 0 || footer <= 0 ||
        first_tab_x < 0 || last_tab_end > gps.dimx ||
        first_tab_x >= last_tab_end || content_top < 0 || content_top >= gps.dimy)
        return std::nullopt;
    auto texture_at = [&](int x, int y) -> long {
        const size_t tile = static_cast<size_t>(x) * gps.dimy + y;
        const bool top = native_ui_top_layer_at(gps, tile);
        const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
        const auto *lower = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
        // Interior dividers use add_tile(); tab/panel backgrounds use
        // add_lower_tile(). Looking only at the lower layer loses the grid.
        if (primary && primary[tile]) return primary[tile];
        return lower ? lower[tile] : 0;
    };
    const auto border_at = [&](int x, int y, long skin) {
        // Classic add_tile writes the packed glyph/palette skin into the
        // character layer. Its empty texture arrays still contain a complete
        // summary grid; use the same live borders in either display mode.
        return classic ? native_ui_skin_at(gps, x, y, skin, true)
            : texture_at(x, y) == skin;
    };
    auto horizontal_at = [&](int x, int y) {
        return border_at(x, y, horizontal) || border_at(x, y, crossing) ||
            border_at(x, y, footer);
    };
    std::array<std::optional<std::vector<NativeDrawnTextRow>>, 2> drawn_rows;
    const auto text_overwrites_space = [&](int left, int divider, int y) {
        // addst also erases tiles for spaces inside a long skill caption.
        // The blank is evidence only when its current draw still agrees
        // with the visible prefix on the same layer; an empty/covered panel
        // must not borrow a preceding frame's grid.
        for (size_t layer = 0; layer < drawn_rows.size(); ++layer) {
            const bool top = layer != 0;
            if (!native_item_row_layer_at(gps, divider, y, top)) continue;
            if (!drawn_rows[layer]) drawn_rows[layer] = captured_native_drawn_text_rows(top);
            const auto *screen = top ? gps.screen_top : gps.screen;
            const auto *flags = top ? gps.screentexpos_top_flag : gps.screentexpos_flag;
            if (!screen) continue;
            for (const auto &draw : *drawn_rows[layer]) {
                if (draw.x < left || draw.x > divider || draw.y < 0 || draw.y >= gps.dimy ||
                    draw.source.size() <= static_cast<size_t>(divider - draw.x) ||
                    draw.source[divider - draw.x] != ' ') continue;
                if (draw.y != y) {
                    if (!flags || !native_item_row_layer_at(gps, draw.x, draw.y, top)) continue;
                    const auto half_at = [&](int row) {
                        return flags[static_cast<size_t>(draw.x) * gps.dimy + row] &
                            ((1u << 3) | (1u << 4));
                    };
                    const auto half = half_at(draw.y);
                    const int mate = half == (1u << 3) ? draw.y + 1
                        : half == (1u << 4) ? draw.y - 1 : -1;
                    if (y != mate || half_at(y) !=
                        (half == (1u << 3) ? (1u << 4) : (1u << 3))) continue;
                }
                bool current = true, text = false;
                for (int x = draw.x; x <= divider; ++x) {
                    const unsigned char actual = screen[
                        (static_cast<size_t>(x) * gps.dimy + y) * 8];
                    const unsigned char expected = draw.source[x - draw.x];
                    if (!native_item_row_layer_at(gps, x, y, top) ||
                        (actual ? actual : ' ') != expected ||
                        native_foreground_picture_at(gps, x, y) ||
                        native_item_action_at(gps, x, y)) {
                        current = false;
                        break;
                    }
                    text = text || expected > ' ';
                }
                if (current && text) return true;
                // A 29-byte skill fills the native left cell exactly. Its
                // separately colored " (Rusty)" then starts ON the divider;
                // the right need overwrites every letter, leaving only the
                // status's leading space. Prove that space with the adjacent
                // current skill draw instead of requiring a prefix within
                // the status itself.
                if (!current || draw.x != divider) continue;
                const auto status = lower(trim(draw.source));
                if (status != "(rusty)" && status != "(v rusty)" &&
                    status != "(very rusty)") continue;
                for (const auto &skill : *drawn_rows[layer]) {
                    if (&skill == &draw) break;
                    if (skill.y != draw.y || skill.x < left || skill.x >= divider ||
                        skill.source.size() != static_cast<size_t>(divider - skill.x) ||
                        !is_ranked_skill_source(skill.source)) continue;
                    bool intact = true;
                    for (int x = skill.x; x < divider; ++x) {
                        const unsigned char actual = screen[
                            (static_cast<size_t>(x) * gps.dimy + y) * 8];
                        if (!native_item_row_layer_at(gps, x, y, top) ||
                            actual != static_cast<unsigned char>(skill.source[x - skill.x]) ||
                            native_foreground_picture_at(gps, x, y) ||
                            native_item_action_at(gps, x, y)) {
                            intact = false;
                            break;
                        }
                    }
                    if (intact) return true;
                }
            }
        }
        return false;
    };
    std::optional<CharacterSummaryGrid> grid;
    int separators = 0;
    int previous_y = content_top - 1;
    for (int y = content_top; y < gps.dimy; ++y) {
        if (!horizontal_at(first_tab_x, y)) continue;
        int left = first_tab_x, right = first_tab_x + 1;
        while (left > 0 && horizontal_at(left - 1, y)) --left;
        while (right < gps.dimx && horizontal_at(right, y)) ++right;
        if (right < last_tab_end) continue;
        int divider = -1;
        for (int x = left; x < right; ++x) {
            if (border_at(x, y, horizontal)) continue;
            if (divider >= 0) return std::nullopt;
            divider = x;
        }
        if (divider <= left || divider >= right - 1) return std::nullopt;
        if (!grid) grid = CharacterSummaryGrid{left, divider, right, content_top, y};
        if (grid->left != left || grid->divider != divider || grid->right != right)
            return std::nullopt;
        int vertical_rows = 0;
        for (int row = previous_y + 1; row < y; ++row) {
            if (border_at(divider, row, vertical)) { ++vertical_rows; continue; }
            // A long summary identity can draw over the middle border. The
            // four complete horizontal separators still establish the grid;
            // accept visible text or a space proven by its current draw,
            // never an unexplained blank or a foreground picture/control.
            // addst() removes the primary border but leaves the panel's
            // lower background intact. texture_at() also returns that lower
            // layer, so a nonzero result does not itself mean occlusion.
            const size_t at = static_cast<size_t>(divider) * gps.dimy + row;
            const bool top = native_ui_top_layer_at(gps, at);
            const auto *screen = top ? gps.screen_top : gps.screen;
            const unsigned char ch = screen ? screen[at * 8] : 0;
            if (native_foreground_picture_at(gps, divider, row) ||
                native_item_action_at(gps, divider, row) ||
                ch == 0x7f || is_cp437_box_drawing_byte(ch) ||
                (ch <= ' ' && !((ch == 0 || ch == ' ') &&
                    text_overwrites_space(left, divider, row))))
                return std::nullopt;
        }
        if (vertical_rows == 0) return std::nullopt;
        ++separators;
        if (border_at(divider, y, footer)) {
            if (separators != 4) return std::nullopt;
            grid->bottom = y;
            return grid;
        }
        if (separators >= 4) return std::nullopt;
        previous_y = y;
    }
    return std::nullopt;
}
