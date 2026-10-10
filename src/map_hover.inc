// Native map records and rendered documents establish source ownership.
// Their live frame bounds the text, but the shared rectangle skin alone
// cannot turn an arbitrary interface panel into a map text card.
static size_t map_hover_conflict_identity_offset(std::string_view source) {
    // A conflict indicator and the unit caption can be separate native draws
    // on one hover row. Only the game's finite conflict labels own this split.
    for (const std::string_view level : {"Encounter", "Horseplay", "Training",
            "Brawl", "Non-lethal", "Lethal", "No Quarter"}) {
        if (source.starts_with(level) && source.substr(level.size()).starts_with(": ") &&
                source.size() > level.size() + 2)
            return level.size() + 2;
    }
    return 0;
}

static std::optional<NativeDrawnTextRow> native_map_hover_card_draw_for_row(
        const graphicst &gps, const Match &row, int right) {
    if (auto drawn = native_map_hover_draw_for_row(gps, row, right)) return drawn;
    const size_t identity_at = map_hover_conflict_identity_offset(row.source);
    if (!identity_at || row.x < 0 || row.y < 0 || row.y >= gps.dimy ||
            row.x >= gps.dimx || row.source.size() > static_cast<size_t>(gps.dimx - row.x))
        return std::nullopt;
    Match identity{row.x + static_cast<int>(identity_at), row.y,
        static_cast<int>(row.source.size() - identity_at), kMapHoverPhraseRule, {},
        row.source.substr(identity_at)};
    auto drawn = native_map_hover_draw_for_row(gps, identity, right);
    if (!drawn || drawn->map_hover.kind != NativeMapHoverKind::Unit) return std::nullopt;
    // The finite conflict indicator is a separate colored native draw. Its
    // current bytes accompany this actual formatter-owned unit identity.
    for (size_t byte = 0; byte < identity_at; ++byte) {
        const size_t at = (static_cast<size_t>(row.x) + byte) * gps.dimy + row.y;
        const auto *grid = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
        if (!grid || (grid[at * 8] ? grid[at * 8] : ' ') !=
                static_cast<unsigned char>(row.source[byte])) return std::nullopt;
    }
    const auto prefix = row.source.substr(0, identity_at);
    drawn->x = row.x;
    drawn->source.insert(0, prefix);
    if (!drawn->complete_source.empty()) drawn->complete_source.insert(0, prefix);
    return drawn;
}

// A shared frame skin cannot grant prose ownership. Keep only the actual
// producer's row address and text, then prove its current draw independently
// of vocabulary, translation coverage or a retained capture's epoch.
class NativeMapCardSources {
    struct Draw {
        int x = 0, y = 0, dimx = 0, dimy = 0;
        std::string source;
        uintptr_t address = 0;
        const unsigned char *grid = nullptr;
        bool top_layer = false;
        std::optional<SDL_Rect> clip;
        bool document_owned = false;
    };
    const graphicst &gps_;
    bool ready_ = false;
    std::array<std::vector<Draw>, 2> draws_;

    void prepare() {
        if (ready_) return;
        ready_ = true;
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            const std::array batches{&g_native_drawn_text_rows, &g_native_drawn_top_text_rows};
            for (size_t layer = 0; layer < batches.size(); ++layer)
                for (const auto &draw : *batches[layer]) {
                    if (!draw.address || draw.source.empty() || !draw.draw_grid ||
                            draw.draw_dimx != gps_.dimx || draw.draw_dimy != gps_.dimy)
                        continue;
                    draws_[layer].push_back({draw.x, draw.y, draw.draw_dimx, draw.draw_dimy,
                        draw.source, draw.address, draw.draw_grid, draw.top_layer, draw.draw_clip});
                }
        }
        {
            std::lock_guard<std::mutex> lock(g_native_paragraph_mutex);
            for (auto &batch : draws_)
                for (auto &draw : batch) {
                    const NativeParagraphRowKey key{draw.address,
                        std::hash<std::string_view>{}(draw.source)};
                    const auto found = g_native_paragraph_row_index.find(key);
                    if (found == g_native_paragraph_row_index.end()) continue;
                    for (const auto *capture : found->second) {
                        const size_t count = std::min(capture->row_addresses.size(),
                            capture->wrapped_lines.size());
                        for (size_t line = 0; line < count; ++line)
                            if (capture->row_addresses[line] == draw.address &&
                                    capture->wrapped_lines[line] == draw.source) {
                                draw.document_owned = true;
                                break;
                            }
                        if (draw.document_owned) break;
                    }
                }
        }
        const auto own_announcement = [&](const auto &paragraphs) {
            std::unordered_multimap<uintptr_t, std::string_view> sources;
            for (const auto &paragraph : paragraphs)
                for (const auto &row : paragraph.rows)
                    if (row.address && !row.source.empty()) sources.emplace(row.address, row.source);
            for (auto &batch : draws_)
                for (auto &draw : batch) {
                    if (draw.document_owned) continue;
                    const auto [first, last] = sources.equal_range(draw.address);
                    for (auto at = first; at != last; ++at)
                        if (at->second == draw.source) {
                            draw.document_owned = true;
                            break;
                        }
                }
        };
        own_announcement(native_adventure_announcement_paragraphs());
        own_announcement(native_announcement_log_paragraphs());
        own_announcement(native_fortress_alert_paragraphs());
        bool current = false, previous_current = false;
        std::vector<NativeKnowledgeDraw> previous;
        const auto rich = captured_native_knowledge_draws(&current, &previous, &previous_current);
        const auto own_rich = [&](const auto &rows) {
            for (const auto &row : rows) {
                if (!row.document || row.line < 0 || row.dimx != gps_.dimx ||
                        row.dimy != gps_.dimy || row.screen == 0) continue;
                const size_t line = static_cast<size_t>(row.line);
                const auto &document = *row.document;
                if (line >= document.rows.size() || line >= document.row_addresses.size() ||
                        !document.row_addresses[line]) continue;
                const auto &source = document.rows[line];
                if (row.x < row.clip[0] || row.x > row.clip[1] ||
                        row.y < row.clip[2] || row.y > row.clip[3]) continue;
                for (auto &draw : draws_[0])
                    if (!draw.top_layer && draw.x == row.x && draw.y == row.y &&
                            reinterpret_cast<uintptr_t>(draw.grid) == row.screen &&
                            draw.address == document.row_addresses[line] && draw.source == source)
                        draw.document_owned = true;
            }
        };
        own_rich(rich);
        own_rich(previous);
    }

public:
    explicit NativeMapCardSources(const graphicst &gps) : gps_(gps) {}

    bool owns_document_row(const Match &row, int right) {
        if (row.x < 0 || row.x >= gps_.dimx || row.y < 0 || row.y >= gps_.dimy ||
                row.source.empty() || right <= row.x || right > gps_.dimx ||
                row.source.size() > static_cast<size_t>(right - row.x)) return false;
        prepare();
        const size_t first = static_cast<size_t>(row.x) * gps_.dimy + row.y;
        const bool read_top = native_ui_top_layer_at(gps_, first);
        const auto *grid = read_top ? gps_.screen_top : gps_.screen;
        if (!grid) return false;
        const auto origin = native_text_grid_origin(gps_, first, read_top);
        const auto &batch = draws_[origin.top_layer ? 1 : 0];
        for (auto at = batch.rbegin(); at != batch.rend(); ++at) {
            const auto &draw = *at;
            if (!draw.document_owned || draw.x < 0 || draw.x > row.x || draw.y != row.y ||
                    draw.top_layer != origin.top_layer || draw.grid != origin.grid) continue;
            if (draw.clip && (row.x < draw.clip->x || row.y < draw.clip->y ||
                    int64_t(row.x) + static_cast<int64_t>(row.source.size()) >
                        int64_t(draw.clip->x) + draw.clip->w ||
                    int64_t(row.y) >= int64_t(draw.clip->y) + draw.clip->h)) continue;
            const size_t offset = static_cast<size_t>(row.x - draw.x);
            if (offset > draw.source.size() || std::any_of(draw.source.begin(),
                    draw.source.begin() + offset, [](unsigned char ch) { return ch != ' '; }))
                continue;
            const auto visible = trim_view(std::string_view(draw.source).substr(
                offset, static_cast<size_t>(right - row.x)));
            if (visible != row.source) continue;
            bool intact = true;
            for (size_t byte = 0; byte < row.source.size(); ++byte) {
                const size_t cell = (static_cast<size_t>(row.x) + byte) * gps_.dimy + row.y;
                const bool top = native_ui_top_layer_at(gps_, cell);
                const auto byte_origin = native_text_grid_origin(gps_, cell, top);
                if (top != read_top || byte_origin.grid != origin.grid ||
                        byte_origin.top_layer != origin.top_layer ||
                        (grid[cell * 8] ? grid[cell * 8] : ' ') !=
                            static_cast<unsigned char>(row.source[byte])) {
                    intact = false;
                    break;
                }
            }
            if (intact) return true;
        }
        return false;
    }
};

std::optional<NativeTextCard> Overlay::capture_map_hover_card(
        std::vector<std::string> &rows, const unsigned char *screen_override) const {
    if (gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return std::nullopt;
    int header_y = -1, population_x = -1, stocks_x = -1;
    for (int y = 0; y < std::min(3, gps_->dimy); ++y) {
        std::string context(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            context[x] = ch ? ch : ' ';
        }
        for (std::string_view label : {"Pop", "Population", "Stocks"}) {
            const size_t at = context.find(label);
            if (at == std::string::npos ||
                !has_word_boundaries(context, at, at + label.size())) continue;
            if (label == "Stocks") stocks_x = static_cast<int>(at);
            else { header_y = y; population_x = static_cast<int>(at); }
        }
    }
    // Arena uses the same map captions but has neither the fortress counters
    // nor the adventure gait/time footer. Read its actual game type and active
    // map screen so its map card reaches the shared whole-row layout.
    const bool arena = native_arena_map_screen();
    const bool fortress = !arena && header_y >= 0 && stocks_x > population_x;
    const bool adventure = !fortress && !arena;
    const auto current_row = [&](int y) {
        std::string source(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            source[x] = ch ? static_cast<char>(ch) : ' ';
        }
        return source;
    };
    int adventure_footer = -1;
    int adventure_footer_left = -1, adventure_footer_right = -1;
    if (adventure) {
        // The live adventure HUD pairs a gait caption with its decimal time
        // multiplier directly below it. Gaits come from creature definitions;
        // do not restrict this to a glossary of Walk/Crawl or screenshot pixels.
        for (int y = std::max(0, gps_->dimy - 4); y + 1 < gps_->dimy; ++y) {
            const auto captions = split_text_fields(current_row(y));
            const auto values = split_text_fields(current_row(y + 1));
            for (const auto &caption : captions) {
                if (caption.start >= gps_->dimx / 2 || caption.text.empty() ||
                    !std::isalpha(static_cast<unsigned char>(caption.text.front())) ||
                    !std::all_of(caption.text.begin(), caption.text.end(), [](unsigned char ch) {
                        return std::isalpha(ch) || ch == ' ' || ch == '-' || ch == '\'';
                    })) continue;
                for (const auto &value : values) {
                    const size_t dot = value.text.find('.');
                    if (value.start != caption.start || dot == std::string::npos ||
                        dot == 0 || value.text.size() != dot + 4 ||
                        !std::all_of(value.text.begin(), value.text.end(), [](unsigned char ch) {
                            return std::isdigit(ch) || ch == '.';
                        }) || value.text.find('.', dot + 1) != std::string::npos) continue;
                    adventure_footer = y;
                    adventure_footer_left = caption.start;
                    adventure_footer_right = std::max(caption.end, value.end);
                    break;
                }
            }
        }
        if (adventure_footer < 0) return std::nullopt;
    }

    std::optional<NativeToolbarTooltip> tooltip;
    if (!fortress) {
        std::vector<std::string> context;
        context.reserve(gps_->dimy);
        for (int y = 0; y < gps_->dimy; ++y)
            context.push_back(current_row(y));
        tooltip = find_toolbar_tooltip(context);
    }

    const NativePanelBorders borders(*gps_);
    const auto ui_settings = native_ui_settings();
    // Both fortress card shapes use the hover skin. Display mode only
    // determines whether that skin is packed characters or texture IDs.
    const auto floating_border = [&](int x, int y, int part) {
        return arena || fortress ? ui_settings && native_ui_skin_at(*gps_, x, y,
            native_texture_hover_rectangle(*gps_)[part % 3][part / 3], ui_settings->classic)
            : borders.at(x, y, part);
    };
    int hud_right = gps_->dimx - 1;
    if (fortress) {
        // The controls' middle right edge is not the HUD edge: only the
        // outer panel continues through all three HUD content rows.
        hud_right = stocks_x + static_cast<int>(std::string_view("Stocks").size());
        while (hud_right < gps_->dimx) {
            bool edge = true;
            for (int y = header_y; y < header_y + 3; ++y)
                edge = edge && borders.at(hud_right, y, 5, std::nullopt,
                    std::pair{0, hud_right + 1});
            if (edge) break;
            ++hud_right;
        }
        if (hud_right >= gps_->dimx) hud_right = -1;
    }
    std::optional<SDL_Rect> interior;
    // An attached fortress hover hangs below the HUD and shares its right border.
    // Its left edge may cross Stocks at a different UI scale/window width;
    // the actual HUD edge, not a minimum text x, identifies this attachment.
    // Its top can be open into the HUD: the HUD bottom turns down at the
    // hover's left edge, while the outer right side continues unbroken.
    // Validate that whole connection as well as the sides/bottom.
    // PE 53.16's help.open + MINIMIZED branch (0x3f9356..0x3f958f)
    // instead draws a closed hover at row 7, with its right edge 37 columns
    // inside the HUD's right end. This occurs in either display mode.
    // Read that skin's edges independently of the attached HUD's geometry.
    // Adventure and Arena also use freestanding frames. A long item stack
    // can extend beside the bottom HUD and have its bottom edge clipped by
    // the viewport; the HUD is context,
    // not a full-width boundary. All modes share the same row composition.
    const int first_top = fortress ? header_y + 2 : arena ? 0 : 1;
    const int last_top = fortress ? std::max(header_y + 5, 7)
        : arena ? gps_->dimy - 3 : adventure_footer - 3;
    const int bottom_limit = gps_->dimy;
    NativeMapCardSources sources(*gps_);
    for (int top = first_top; top <= last_top && top + 2 < bottom_limit; ++top) {
        for (int left = 0; left + 2 < gps_->dimx; ++left) {
            const bool closed_fortress = fortress && floating_border(left, top, 0);
            const bool attached_fortress = fortress && !closed_fortress;
            if (attached_fortress && (hud_right < 0 || left + 2 > hud_right)) continue;
            // The arena shares dwarfmode's 0x3f9594 hover renderer. Its
            // attached form starts with JOIN_W_S, not an ordinary NW corner;
            // requiring NW here discarded the entire card before translation.
            const bool arena_join = arena && ui_settings && native_ui_skin_at(
                *gps_, left, top, native_texture_hover_rectangle_join_w_s(*gps_),
                ui_settings->classic);
            if (!attached_fortress && !arena_join && !floating_border(left, top, 0)) continue;
            if (!(arena || closed_fortress ? floating_border(left, top + 1, 3)
                    : borders.at(left, top + 1, 3, std::nullopt,
                        std::pair{left, gps_->dimx}))) continue;
            int right = attached_fortress ? hud_right : left + 2;
            if (!attached_fortress)
                while (right < gps_->dimx && !floating_border(right, top + 1, 5)) ++right;
            const auto border = [&](int x, int y, int part) {
                return arena || closed_fortress ? floating_border(x, y, part)
                    : borders.at(x, y, part, std::nullopt, std::pair{left, right + 1});
            };
            if (right >= gps_->dimx || !border(right, top + 1, 5)) continue;
            if (arena_join) {
                if (!native_ui_skin_at(*gps_, right, top,
                        native_texture_hover_rectangle_join_e_se(*gps_),
                        ui_settings->classic)) continue;
            } else if (!attached_fortress && !floating_border(right, top, 2)) continue;
            bool closed = true;
            bool fortress_join = false;
            for (int x = left + 1; x < right; ++x)
                if (!border(x, top, 1) && !border(x, top, 7)) {
                    // The attached renderer leaves this band to the HUD.
                    // Both dedicated joins plus the current sides/bottom
                    // establish ownership even when the top band is open.
                    const unsigned char ch = visible_char_at(x, top);
                    if (arena_join && (!ch || ch == ' ')) continue;
                    closed = false;
                    break;
                }
            // Native fortress hover (53.16 Windows 0x3f9594) uses the
            // dedicated join_w_s / join_e_se skins here, not ordinary NE/E.
            // In classic mode these are packed glyph+palette values; in
            // graphics mode they are texture IDs on the current UI layer.
            if (!closed && attached_fortress && ui_settings && top == header_y + 3 &&
                native_ui_skin_at(*gps_, left, top,
                    native_texture_hover_rectangle_join_w_s(*gps_), ui_settings->classic) &&
                native_ui_skin_at(*gps_, right, top,
                    native_texture_hover_rectangle_join_e_se(*gps_), ui_settings->classic)) {
                // The open top is proved by the CURRENT HUD bottom, not by
                // a terrain word, translated width, or a previous frame.
                int hud_left = left - 1;
                while (hud_left >= 0 && borders.at(hud_left, top, 7)) --hud_left;
                closed = hud_left >= 0 && hud_left < population_x &&
                    borders.at(hud_left, top, 6, std::nullopt,
                        std::pair{hud_left, right + 1});
                for (int y = header_y; closed && y < top; ++y)
                    closed = borders.at(hud_left, y, 3, std::nullopt,
                        std::pair{hud_left, right + 1});
                for (int x = left + 1; closed && x < right; ++x) {
                    const unsigned char ch = visible_char_at(x, top);
                    closed = !ch || ch == ' ';
                }
                fortress_join = closed;
            }
            if (!closed) continue;
            // Adventure spoor appends direction/party ownership after sizing
            // the hover frame. The resulting draw can overwrite its right
            // edge. Accept that edge only when the captured native caption
            // and every current visible byte prove the overflowing row;
            // the top, left edge and closed bottom still delimit the card.
            const auto spoor_overwrites_right = [&](int y) {
                if (!adventure) return false;
                const auto native = current_row(y);
                const auto band = std::string_view(native).substr(left + 1, right - left - 1);
                const auto visible = trim_view(band);
                if (!visible.starts_with("Track/Spoor: ")) return false;
                const int x = left + 1 + static_cast<int>(visible.data() - band.data());
                const auto drawn = native_drawn_text_for_row(
                    Match{x, y, static_cast<int>(visible.size()),
                        kMapHoverPhraseRule, {}, std::string(visible)}, right);
                if (!drawn || x + static_cast<int>(drawn->size()) <= right) return false;
                const size_t count = std::min(drawn->size(),
                    static_cast<size_t>(gps_->dimx - x));
                return native.compare(x, count, *drawn, 0, count) == 0;
            };
            int bottom = top + 2;
            for (; bottom < bottom_limit; ++bottom) {
                if (border(left, bottom, 6) && border(right, bottom, 8)) {
                    for (int x = left + 1; x < right; ++x)
                        if (!border(x, bottom, 7)) { closed = false; break; }
                    break;
                }
                if (!border(left, bottom, 3) ||
                    (!border(right, bottom, 5) && !spoor_overwrites_right(bottom))) {
                    closed = false;
                    break;
                }
            }
            if (!closed) continue;
            if (bottom == bottom_limit) {
                // An offscreen bottom is valid only for the actual hover
                // skin, with its entire visible top and both sides intact.
                // The generic border reader also accepts ordinary panels
                // and classic map glyphs; those cannot prove a clipped card.
                if (!ui_settings) continue;
                const auto &skin = native_texture_hover_rectangle(*gps_);
                const auto hover_border = [&](int x, int y, int part) {
                    return native_ui_skin_at(*gps_, x, y,
                        skin[part % 3][part / 3], ui_settings->classic);
                };
                // The attached joins and their current HUD connection were
                // established above. A long fortress item stack can clip its
                // bottom too; it still owns complete rows at the same margin.
                closed = arena_join || fortress_join ||
                    (hover_border(left, top, 0) && hover_border(right, top, 2));
                for (int x = left + 1; closed && !arena_join && !fortress_join && x < right; ++x)
                    closed = hover_border(x, top, 1);
                for (int y = top + 1; closed && y < bottom; ++y)
                    closed = hover_border(left, y, 3) && hover_border(right, y, 5);
                if (!closed) continue;
            }
            SDL_Rect candidate{left + 1, top + 1, right - left - 1, bottom - top - 1};
            // The surviving gait and time multiplier remain HUD fields even
            // when a tall card reaches the same rows elsewhere on screen.
            if (adventure && bottom > adventure_footer &&
                candidate.x < adventure_footer_right && right > adventure_footer_left)
                continue;
            if (tooltip && tooltip->left <= right && tooltip->right >= left &&
                tooltip->top <= bottom && tooltip->bottom >= top) continue;
            // A foreground subwindow invalidates this background card. Never
            // replay a hidden card just because two outer sides survive.
            for (int y = candidate.y; closed && y < bottom; ++y)
                for (int x = candidate.x; x < right; ++x)
                    if (borders.at(x, y, 0) || borders.at(x, y, 2) ||
                        borders.at(x, y, 3) || borders.at(x, y, 5) ||
                        borders.at(x, y, 6) || borders.at(x, y, 8) ||
                        native_picture_box_right(*gps_, x, y) > x ||
                        native_item_action_at(*gps_, x, y) ||
                        native_work_order_status_at(*gps_, x, y) ||
                        native_textbox_rect_at(*gps_, x, y)) {
                        // Building/item detail panels also attach below the
                        // HUD and share its right edge. Their picture boxes
                        // and action strips make them interactive panels, not
                        // map hover prose. In particular retain the native
                        // caption inset after the wagon/item picture. Filter
                        // and name fields also make a panel interactive, even
                        // with no query/results. Never move their placeholder,
                        // edited text or cursor to the outer panel's left edge.
                        // Work-order lists use four-column status icons rather
                        // than caption buttons. Their complete twelve-cell
                        // skins identify an interactive list even when its
                        // outer frame shares the map hover's rectangle skin.
                        closed = false;
                        break;
                    }
            if (!closed) continue;
            // Fortress selectors can share the HUD edge just like Adventure
            // dialogs. Reject each complete button, not only a whole-row span
            // that can accidentally join two neighbouring controls.
            for (int y = candidate.y; closed && y < bottom; ++y) {
                const auto source = current_row(y).substr(candidate.x, candidate.w);
                for (const auto &field : split_text_fields(source)) {
                    if (native_button_text_rect(*gps_, candidate.x + field.start,
                            candidate.x + field.end, y)) {
                        closed = false;
                        break;
                    }
                }
            }
            if (!closed) continue;
            // Many unrelated tabs, empty lists and dialogs share this skin.
            // Require a producer-owned source for EVERY nonblank content row
            // before selecting the frame or restoring any semantic claims.
            // A map draw keeps unknown/modded text owned; actual paragraph
            // row identities preserve speech, announcements and wrapped prose.
            // Ordinary addst captions never grant whole-panel ownership.
            bool owned_ink = false;
            for (int y = candidate.y; closed && y < bottom; ++y) {
                const auto native = current_row(y);
                const auto band = std::string_view(native).substr(candidate.x, candidate.w);
                const auto ink = trim_view(band);
                if (ink.empty()) continue;
                const int x = candidate.x + static_cast<int>(ink.data() - band.data());
                const Match row{x, y, static_cast<int>(ink.size()),
                    kMapHoverPhraseRule, {}, std::string(ink)};
                closed = native_map_hover_card_draw_for_row(*gps_, row, right).has_value() ||
                    sources.owns_document_row(row, right);
                owned_ink = true;
            }
            if (!closed || !owned_ink) continue;
            if (!interior || candidate.w * candidate.h < interior->w * interior->h)
                interior = candidate;
        }
    }
    if (!interior) return std::nullopt;

    NativeTextCard card;
    card.interior = *interior;
    const auto clipped_captions = captured_clipped_captions();
    for (int y = interior->y; y < interior->y + interior->h; ++y) {
        std::string source(interior->w, ' ');
        std::vector<int> colors(interior->w, 0xffffff);
        for (int column = 0; column < interior->w; ++column) {
            const int x = interior->x + column;
            bool top = false;
            const auto *active = cell_at(x, y, &top);
            const auto *cell = screen_override
                ? screen_override + (static_cast<size_t>(x) * gps_->dimy + y) * 8
                : active;
            // Producer identities established this card before row recovery.
            // A raw-layer suppression pass may own only matching bytes from
            // that layer, never the inactive map or an older popup.
            const unsigned char ch = cell && active && cell[0] == active[0] ? cell[0] : 0;
            source[column] = ch ? ch : ' ';
            if (active) colors[column] = (active[1] << 16) | (active[2] << 8) | active[3];
            rows[y][x] = source[column];
        }
        const size_t first = source.find_first_not_of(' ');
        if (first == std::string::npos) continue;
        size_t end = source.find_last_not_of(' ') + 1;
        const int first_x = interior->x + static_cast<int>(first);
        const int edge_x = interior->x + interior->w;
        std::string complete_source;
        // Hover names are drawn before the graphical frame. Recover the
        // actual complete draw at this position, rather than treating the
        // last word inside the frame as a complete personal name. Verify
        // the prefix and every surviving suffix byte before owning it.
        const std::string visible = source.substr(first, end - first);
        const Match physical{first_x, y, static_cast<int>(visible.size()),
            kMapHoverPhraseRule, {}, visible};
        auto map_drawn = native_map_hover_card_draw_for_row(*gps_, physical, edge_x);
        const size_t conflict_identity_at = map_hover_conflict_identity_offset(visible);
        const auto drawn = map_drawn ? std::optional<std::string>(map_drawn->source)
            : native_drawn_text_for_row(physical, edge_x);
        auto drawn_source = drawn ? std::string_view(*drawn) : std::string_view{};
        // Native wrapped lines retain trailing padding. It is not clipped
        // text: restoring it would change the identity of an already-owned
        // paragraph row and allow the same prose to be laid out twice.
        while (!drawn_source.empty() && drawn_source.back() == ' ')
            drawn_source.remove_suffix(1);
        bool uniform = true;
        for (size_t i = first; i < end; ++i)
            if (source[i] != ' ' && colors[i] != colors[first]) uniform = false;
        if (uniform && drawn_source.size() > visible.size() &&
            drawn_source.starts_with(visible) && !drawn_source.ends_with("...")) {
            const size_t physical_end = std::min(
                first + drawn_source.size(), static_cast<size_t>(gps_->dimx - interior->x));
            std::string tail;
            std::vector<int> tail_colors;
            bool current = true;
            for (size_t i = end; i < physical_end; ++i) {
                const int x = interior->x + static_cast<int>(i);
                const unsigned char expected = drawn_source[i - first];
                bool top = false;
                const auto *active = cell_at(x, y, &top);
                const auto *cell = screen_override
                    ? screen_override + (static_cast<size_t>(x) * gps_->dimy + y) * 8
                    : active;
                const int color = active
                    ? (active[1] << 16) | (active[2] << 8) | active[3] : -1;
                if (active && (active[0] ? active[0] : ' ') == expected &&
                    (expected == ' ' || color == colors[first])) {
                    // A raw-layer pass may suppress only its own matching
                    // bytes; a different layer still gets the full meaning.
                    tail += cell && (cell[0] ? cell[0] : ' ') == expected
                        ? static_cast<char>(expected) : ' ';
                } else if (x == edge_x && borders.at(x, y, 5)) {
                    // The frame may overwrite one original letter. A blank
                    // in the physical mask leaves that border untouched.
                    tail += ' ';
                } else {
                    current = false;
                    break;
                }
                tail_colors.push_back(colors[first]);
            }
            if (current) {
                source.resize(end);
                colors.resize(end);
                source += tail;
                colors.insert(colors.end(), tail_colors.begin(), tail_colors.end());
                end = source.size();
                complete_source = drawn_source;
                for (size_t i = first; i < end; ++i)
                    rows[y][interior->x + static_cast<int>(i)] = source[i];
            }
        }
        // The native spoor caption can fill the card and put its final byte
        // on the graphical right border. Own that actual current glyph only
        // when it completes the structured source; never invent a missing
        // suffix or enlarge the translated text box beyond the inner frame.
        const std::string_view caption(source.data() + first, end - first);
        if (map_drawn && map_drawn->map_hover.kind == NativeMapHoverKind::Spoor &&
            complete_source.empty() && end == static_cast<size_t>(interior->w) &&
            edge_x < gps_->dimx &&
            caption.starts_with("Track/Spoor: ") && !translate_map_track(caption)) {
            bool top = false;
            const auto *active = cell_at(edge_x, y, &top);
            const auto *edge = screen_override
                ? screen_override + (static_cast<size_t>(edge_x) * gps_->dimy + y) * 8
                : active;
            if (active && edge && edge[0] == active[0] &&
                ((edge[0] >= 'a' && edge[0] <= 'z') || (edge[0] >= 'A' && edge[0] <= 'Z'))) {
                const int color = (active[1] << 16) | (active[2] << 8) | active[3];
                const std::string complete = std::string(caption) + static_cast<char>(edge[0]);
                if (color == colors[end - 1] && translate_map_track(complete)) {
                    source.push_back(static_cast<char>(edge[0]));
                    colors.push_back(color);
                    rows[y][edge_x] = static_cast<char>(edge[0]);
                    ++end;
                }
            }
        }
        // The spoor formatter shortens the noun before it appends directions.
        // Its captured original is not a prefix expansion: the native helper
        // deletes vowels. Pair it with this current draw's physical bytes,
        // including any suffix recovered around the frame above.
        if (uniform) {
            const std::string semantic = complete_source.empty()
                ? source.substr(first, end - first) : complete_source;
            for (const auto &capture : clipped_captions) {
                if (capture.x == first_x && capture.y == y &&
                    capture.visible == semantic && !capture.complete.empty()) {
                    complete_source = capture.complete;
                    break;
                }
            }
        }
        card.rows.push_back({first_x, y,
            source.substr(first, end - first),
            std::vector<int>(colors.begin() + first, colors.begin() + end),
            std::move(complete_source)});
        if (map_drawn) {
            auto &row = card.rows.back();
            row.map_hover = map_drawn->map_hover;
            row.unit_identity_target = map_drawn->unit_identity_target;
            if (!map_drawn->complete_source.empty())
                row.complete_source = map_drawn->complete_source;
            else if (drawn_source.size() > visible.size())
                row.complete_source = drawn_source;
        } else if (conflict_identity_at) {
            // Colored/cached hover rows need not retain the lookinfost draw.
            // This finite level plus a complete actor article still owns a
            // unit field inside the already established native hover frame.
            const auto identity = trim_view(std::string_view(visible).substr(conflict_identity_at));
            if (identity.starts_with("The ") || identity.starts_with("the ") ||
                    identity.starts_with("A ") || identity.starts_with("a ") ||
                    identity.starts_with("An ") || identity.starts_with("an ") ||
                    native_unit_identity_source_target(identity))
                card.rows.back().map_hover.kind = NativeMapHoverKind::Unit;
        }
    }
    if (adventure) {
        // The adventure HUD also uses these closed frames for centered
        // announcements. Read the live row before translation, including in
        // raw-layer suppression passes, so both paths keep the same alignment.
        // One grid cell of asymmetry is the native integer-centering roundoff.
        // Edge-filling hover labels provide no evidence of centered layout.
        for (auto &row : card.rows) {
            const std::string native = current_row(row.y);
            const std::string_view band(native.data() + interior->x, interior->w);
            const auto text = trim_view(band);
            if (text.empty()) continue;
            const int inset_left = static_cast<int>(text.data() - band.data());
            const int inset_right = interior->w - inset_left - static_cast<int>(text.size());
            row.centered = inset_left > 1 && inset_right > 1 &&
                std::abs(inset_left - inset_right) <= 1;
        }
    }
    return card.rows.empty() ? std::nullopt : std::optional(std::move(card));
}

// Both the compact spoor caption and the tracking paragraph carry the same
// footwear/anatomy noun. Keep their sizes, species and body sides in the
// existing typed grammars, outside generic prose/voice adjective matching.
std::optional<std::string> Overlay::translate_map_track_noun(std::string_view source,
        bool liquid_print) const {
    if (!config_.compositional_rules) return std::nullopt;
    source = trim_view(source);
    const auto scoped = [&](std::string_view text, const char *ns) {
        std::vector<size_t> origins;
        return RULESETS.translate_with_origins(native_text_to_utf8(text), ns, origins);
    };
    const auto part = [&](std::string_view text) -> std::optional<std::string> {
        const std::string noun = native_text_to_utf8(text);
        auto name = RULESETS.translate_anatomy(noun);
        if (!name) name = RULESETS.translate_equipment_name(noun, true);
        if (!name) name = translate_inventory_item_name(text, -1, -1);
        return name;
    };
    const auto sided_part = [&](std::string_view text) -> std::optional<std::string> {
        if (auto name = part(text)) return name;
        const size_t space = text.find(' ');
        if (space == std::string_view::npos) return std::nullopt;
        auto side = scoped(text.substr(0, space), "::map_hover::track_side");
        if (!side) return std::nullopt;
        auto name = part(trim_view(text.substr(space + 1)));
        return name ? std::optional(*side + *name) : std::nullopt;
    };
    const auto marked_part = [&](std::string_view text) -> std::optional<std::string> {
        // A liquid print's first field is a deposited substance. Resolve
        // that boundary before equipment qualifiers can consume its name.
        if (!liquid_print)
            if (auto name = sided_part(text)) return name;
        // Native 0x407b33..0x407e92 and 0x408254..0x40839a prepend
        // a complete liquid material to an item or anatomical part. Try
        // semantic word boundaries, never translate those words separately.
        for (size_t at = text.rfind(' '); at != std::string_view::npos;
             at = at ? text.rfind(' ', at - 1) : std::string_view::npos) {
            const auto name = sided_part(trim_view(text.substr(at + 1)));
            if (!name) continue;
            const auto material = translate_material_name(text.substr(0, at));
            if (material) return liquid_print
                ? *name + "留下的" + *material : *material + *name;
        }
        // The native liquid branch can omit an unavailable body-part name.
        // Only a print permits this complete material-only tail.
        if (liquid_print) {
            if (auto material = translate_material_name(text)) return material;
            return sided_part(text);
        }
        return std::nullopt;
    };
    for (size_t at = source.find("'s "); at != std::string_view::npos;
         at = source.find("'s ", at + 3)) {
        const auto owner = scoped(source.substr(0, at + 2), "::map_hover::track_owner");
        if (!owner) continue;
        if (auto name = marked_part(trim_view(source.substr(at + 3)))) return *owner + *name;
    }
    return marked_part(source);
}

// The native adventure formatter emits one description followed by compass
// components and optional ownership. A slash inside Track/Spoor is part of
// the label; only the suffix fields carry directions. Resolve complete item
// and anatomy names before composing the reviewed display templates.
std::optional<std::string> Overlay::translate_map_track(std::string_view source) const {
    constexpr std::string_view prefix = "Track/Spoor:";
    if (!source.starts_with(prefix)) return std::nullopt;
    source.remove_prefix(prefix.size());
    if (!source.empty() && source.front() != ' ') return std::nullopt;
    source = trim_view(source);
    const auto term = [&](std::string_view key) -> std::optional<std::string> {
        const auto found = map_track_translations_.find(std::string(key));
        if (found == map_track_translations_.end() || found->second.empty()) return std::nullopt;
        return found->second;
    };
    const auto wrap = [&](std::string_view key, const std::string &value)
            -> std::optional<std::string> {
        auto target = term(key);
        if (!target) return std::nullopt;
        const size_t at = target->find("{s}");
        if (at == std::string::npos || target->find("{s}", at + 3) != std::string::npos)
            return std::nullopt;
        target->replace(at, 3, value);
        return target;
    };
    const size_t first_slash = source.find('/');
    const auto description = trim_view(source.substr(0, first_slash));
    // The native subtype default writes no description, then still appends
    // its direction and ownership fields. Translate that actual empty branch
    // through the same header without inventing a spoor noun.
    auto translated = description.empty()
        ? std::optional<std::string>(std::string{}) : term(description);
    if (!translated && config_.compositional_rules) {
        for (std::string_view suffix : {" imprint", " print"}) {
            if (!description.ends_with(suffix)) continue;
            // Both footwear and bare feet can leave impressions or liquid
            // prints. Existing scoped grammars retain size, side and species
            // anatomy without guessing names from generic English fragments.
            auto name = translate_map_track_noun(
                description.substr(0, description.size() - suffix.size()),
                suffix == " print");
            if (name) translated = wrap(std::string("{s}") + std::string(suffix), *name);
            break;
        }
    }
    if (!translated) return std::nullopt;
    size_t slash = first_slash;
    while (slash != std::string_view::npos) {
        const size_t next = source.find('/', slash + 1);
        const auto field = trim_view(source.substr(slash + 1,
            next == std::string_view::npos ? next : next - slash - 1));
        std::optional<std::string> value;
        if (field == "yours or companion's") {
            // Ownership is the final optional native component.
            if (next != std::string_view::npos) return std::nullopt;
            value = term(field);
        } else {
            // Expand abbreviations to existing dictionary keys, never add
            // global translations for the single-letter keyboard labels.
            static constexpr std::array<std::pair<std::string_view, std::string_view>, 8>
                compass = {{{"N", "north"}, {"S", "south"}, {"E", "east"}, {"W", "west"},
                    {"NE", "NE"}, {"NW", "NW"}, {"SE", "SE"}, {"SW", "SW"}}};
            for (const auto &[native, key] : compass)
                if (field == native) { value = exact_literal_translation(key); break; }
        }
        if (!value || value->empty()) return std::nullopt;
        *translated += "/" + *value;
        slash = next;
    }
    return wrap("Track/Spoor: {s}", *translated);
}

std::optional<std::string> Overlay::translate_arena_numbered_creature(
        std::string_view source) const {
    if (!config_.compositional_rules) return std::nullopt;
    source = trim_view(source);
    // Arena assigns a species/caste followed by its decimal instance number.
    // Its name formatter can preserve that whole string as a language-less
    // name. Share this grammar with the earlier formatter-owned draw pass.
    // A dead unit's caption keeps the same numbered identity as an owner.
    // Parse that identity before handing the complete body noun to the typed
    // grammar; a personal-name parser cannot own "Alligator 8" and a generic
    // word matcher would scatter "fifth left front toe" across the grid.
    const size_t owner_at = source.find("'s ");
    const auto identity = source.substr(0, owner_at);
    const size_t number_at = identity.rfind(' ');
    if (number_at == std::string_view::npos || number_at == 0 ||
            number_at + 1 == identity.size() ||
            !std::all_of(identity.begin() + number_at + 1, identity.end(),
                [](unsigned char ch) { return ch >= '0' && ch <= '9'; }) ||
            !native_arena_map_screen()) return std::nullopt;
    const auto species = translate_creature_descriptor(identity.substr(0, number_at), true);
    if (!species) return std::nullopt;
    const std::string unit = *species + std::string(identity.substr(number_at));
    if (owner_at == std::string_view::npos) return unit;

    auto body_source = trim_view(source.substr(owner_at + 3));
    if (body_source.empty()) return std::nullopt;
    // Whole corpses/remains already own their damage and quantity wrappers.
    if (auto body = translate_corpsepiece_item_name(body_source))
        return unit + "的" + *body;

    const auto scoped = [](std::string_view text, const char *context) {
        std::vector<size_t> origins;
        return RULESETS.translate_with_origins(native_text_to_utf8(text), context, origins);
    };
    std::string condition;
    for (const auto &[prefix, context] : {
            std::pair<std::string_view, const char *>{"rotten ", "::items::corpsepiece::^0"},
            {"mangled ", "::items::corpse::mangled"}}) {
        if (!body_source.starts_with(prefix)) continue;
        const auto target = scoped(prefix, context);
        if (!target) return std::nullopt;
        condition += *target;
        body_source.remove_prefix(prefix.size());
    }
    // Anatomy owns side/ordinal/owner-chain order. The body-component grammar
    // also admits complete tissue/material names without treating their words
    // as independent UI labels.
    auto body = RULESETS.translate_anatomy(native_text_to_utf8(body_source));
    if (!body) body = scoped(body_source, "::items::corpsepiece::part");
    return body ? std::optional(unit + "的" + condition + *body) : std::nullopt;
}

// Recovered from the installed PE 53.16 constructor at RVA 0x406860.
// Its 16-way table at 0x4084e0 selects item, terrain, unit, building,
// vermin, flow, campfire, item/deposit, item, fire, water, magma, spoor,
// sound, remembered and sensed. Static branches live in local-overrides;
// dynamic fields use complete, typed grammars shared with their other views.
std::optional<std::string> Overlay::translate_map_hover_phrase(std::string_view source,
        const NativeMapHoverContext &context,
        const std::optional<std::string> &unit_target) const {
    source = trim_view(source);
    if (source.empty()) return std::nullopt;
    const auto scoped = [&](std::string_view text, const char *ns) -> std::optional<std::string> {
        if (!config_.compositional_rules) return std::nullopt;
        std::vector<size_t> origins;
        return RULESETS.translate_with_origins(native_text_to_utf8(text), ns, origins);
    };
    const auto item = [&] { return translate_fortress_item_caption(source); };
    // A successful native kind owns both success and failure. An unknown
    // term cannot switch from terrain/material into a personal-name parser.
    switch (context.kind) {
    case NativeMapHoverKind::None:
    case NativeMapHoverKind::Unknown:
        return std::nullopt;
    case NativeMapHoverKind::Item:
    case NativeMapHoverKind::BuildingItem:
        return item();
    case NativeMapHoverKind::Terrain:
        if (config_.compositional_rules)
            if (auto target = RULESETS.translate_tile_description(native_text_to_utf8(source)))
                return target;
        return exact_literal_translation(source);
    case NativeMapHoverKind::Unit: {
        std::string prefix;
        const size_t conflict_identity_at = map_hover_conflict_identity_offset(source);
        if (conflict_identity_at) {
            const auto level = exact_literal_translation(source.substr(0, conflict_identity_at - 2));
            if (!level) return std::nullopt;
            prefix = *level + "：";
            source = trim_view(source.substr(conflict_identity_at));
        }
        if (unit_target) return prefix + *unit_target;
        if (auto target = native_unit_identity_source_target(source)) return prefix + *target;
        if (auto target = translate_arena_numbered_creature(source)) return prefix + *target;
        if (auto target = scoped(source, "::map_hover::unit")) return prefix + *target;
        // Adventure's formatter puts species and profession before the name.
        // The native Unit kind licenses the complete identity grammar; a
        // name-only parser would preserve this whole caption as authored text.
        // Normalize only the formatter's capitalized article, keeping the
        // selected name, accents and nickname spelling intact.
        std::string identity(source);
        if (identity.starts_with("The ") || identity.starts_with("A ") ||
                identity.starts_with("An "))
            identity.front() = static_cast<char>(std::tolower(
                static_cast<unsigned char>(identity.front())));
        if (auto target = translate_legends_actor(identity, 0, true)) return prefix + *target;
        // A failed conflict actor must not be declared an authored name by
        // the name-only fallback, which would leave its whole role in English.
        if (conflict_identity_at) return std::nullopt;
        return translate_unit_identity(source, true);
    }
    case NativeMapHoverKind::Building:
        return translate_info_panel_title(NativeInfoTitleKind::Building, source);
    case NativeMapHoverKind::Vermin: {
        // Native lookinfo_verminst::item_id, colony flag and count select
        // the same finite productions used by the game's formatter.
        if (context.data[1] != -1) return item();
        std::string_view prefix;
        if (static_cast<uint32_t>(context.data[2]) & 2u) prefix = "a colony of ";
        else if (context.data[3] >= 50) prefix = "a swarm of ";
        else if (context.data[3] >= 10) prefix = "many ";
        if (!prefix.empty()) {
            if (!source.starts_with(prefix)) return std::nullopt;
            auto species = scoped(source.substr(prefix.size()), "::creatures::name::plural");
            if (!species) return std::nullopt;
            if (auto literal = exact_literal_translation(source)) return literal;
            return RULESETS.compose_bound_rule("::map_hover",
                std::string(prefix) + "{::creatures::name::plural}",
                {{"::creatures::name::plural", *species}});
        }
        if (context.data[3] > 1) return scoped(source, "::creatures::name::plural");
        if (auto target = scoped(source, "::creatures::caste::singular")) return target;
        return scoped(source, "::creatures::name::singular");
    }
    case NativeMapHoverKind::Flow: {
        const int16_t flow = static_cast<int16_t>(static_cast<uint32_t>(context.data[0]) & 0xffffu);
        switch (flow) {
        case 3: // MaterialDust: native matter-state powder noun.
        case 9: // MaterialGas: native gaseous material noun.
            return config_.compositional_rules ? translate_material_name(source) : std::nullopt;
        case 10: { // MaterialVapor: native state noun followed by vapor.
            // The lookinfo constructor uses " vapor"; Adventure's direct
            // look-list renderer uses " Vapor" for the same typed field.
            // Both retain the complete material state name before the suffix.
            constexpr std::string_view suffix = " vapor";
            if (!source.ends_with(suffix) && !source.ends_with(" Vapor"))
                return std::nullopt;
            const auto material = scoped(source.substr(0, source.size() - suffix.size()), "::materials");
            if (!material) return std::nullopt;
            return RULESETS.compose_bound_rule("::map_hover", "{::materials} vapor",
                {{"::materials", *material}});
        }
        case 13: // ItemCloud can contain a typed item's complete caption.
            if (auto literal = exact_literal_translation(source)) return literal;
            return context.data[2] >= 0 ? item() : std::nullopt;
        case 0: case 1: case 2: case 4: case 5: case 6: case 7: case 8: case 11: case 12:
            return exact_literal_translation(source);
        default:
            return std::nullopt;
        }
    }
    case NativeMapHoverKind::Spatter:
        if (context.data[0] != -1) return item();
        if (auto target = scoped(source, "::health::contaminant")) return target;
        // Adventure omits the quantity prefix outside the native 1/2/3
        // deposit branches, but still formats the entire material noun.
        if (config_.compositional_rules)
            if (auto target = translate_material_name(source)) return target;
        return exact_literal_translation(source);
    case NativeMapHoverKind::Water:
    case NativeMapHoverKind::Magma: {
        const uint32_t flags = static_cast<uint32_t>(context.data[0]);
        const int16_t amount = static_cast<int16_t>(static_cast<uint32_t>(context.data[1]) & 0xffffu);
        if (amount < 0 || amount > 7) return std::nullopt;
        std::string_view liquid;
        if (context.kind == NativeMapHoverKind::Water) {
            if (flags & 2u) liquid = flags & 1u ? "Stagnant salt water" : "Salt water";
            else liquid = flags & 1u ? "Stagnant water" : "Water";
        } else liquid = flags & 1u ? "Magma" : "Lava";
        // The direct Adventure look list submits the liquid name, amount
        // and closing measurement separately. Their verified native callers
        // retain the same record, so a clipped row can still translate each
        // complete field without treating a prefix as a whole liquid caption.
        switch (context.fragment) {
        case NativeMapHoverFragment::LiquidPrefix:
            if (source != std::string(liquid) + " [") return std::nullopt;
            if (auto target = exact_literal_translation(liquid)) return *target + " [";
            return std::nullopt;
        case NativeMapHoverFragment::LiquidAmount:
            return source == std::to_string(amount)
                ? std::optional<std::string>(std::string(source)) : std::nullopt;
        case NativeMapHoverFragment::LiquidSuffix:
            return source == "/7]"
                ? std::optional<std::string>(std::string(source)) : std::nullopt;
        case NativeMapHoverFragment::Complete:
            break;
        }
        const std::string measurement = " [" + std::to_string(amount) + "/7]";
        if (source != std::string(liquid) + measurement) return std::nullopt;
        if (auto target = exact_literal_translation(liquid)) return *target + measurement;
        return std::nullopt;
    }
    case NativeMapHoverKind::Spoor:
        if (auto target = translate_map_track(source)) return target;
        return exact_literal_translation(source);
    case NativeMapHoverKind::Campfire:
    case NativeMapHoverKind::Fire:
    case NativeMapHoverKind::Sound:
    case NativeMapHoverKind::MemoryMap:
    case NativeMapHoverKind::ExtraSense:
        return exact_literal_translation(source);
    }
    return std::nullopt;
}

void Overlay::append_map_hover_phrases(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    // The tracking popup wraps its description and compass sentences before
    // drawing. Resolve connected prose through the shared complete UI catalog
    // BEFORE a material or item row consumes one fragment of the sentence.
    // Blank lines, margins and the live frame bound each candidate; headings
    // and compact item/unit captions retain their ordinary row layout.
    std::unordered_set<int> paragraph_rows =
        append_adventure_travel_status_paragraphs(card, rows, matches, only_y);
    const int right = card.interior.x + card.interior.w;
    // Card discovery reads the live grid again. Keep a complete typed row
    // already claimed before the general readers instead of adding a second
    // translation after restoring its original bytes. Row composition below
    // can still give that existing match the card's common layout.
    for (const auto &row : card.rows)
        if (row.map_hover.kind != NativeMapHoverKind::None &&
            std::any_of(matches.begin(), matches.end(), [&](const Match &match) {
                return match.rule == kMapHoverPhraseRule && match.x == row.x &&
                    match.y == row.y && match.length == static_cast<int>(row.source.size()) &&
                    match.source == row.source;
            })) {
            paragraph_rows.insert(row.y);
            std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        }
    // Card capture restores the active layer after the earlier document pass.
    // Keep paragraphs that pass already owns, including empty reflow tails,
    // instead of laying them out again or restoring their original English.
    for (const auto &row : card.rows)
        if (row.map_hover.kind == NativeMapHoverKind::None &&
            native_paragraph_owns_card_row(matches, row)) {
            paragraph_rows.insert(row.y);
            std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        }
    for (size_t begin = 0; begin < card.rows.size(); ++begin) {
        const auto &first = card.rows[begin];
        if (first.map_hover.kind != NativeMapHoverKind::None) continue;
        if (paragraph_rows.contains(first.y)) continue;
        // Fortress engraving cards recover their complete logical rows here,
        // after the visible-grid item pass. These are artwork paragraphs,
        // not independent hover nouns or ordinary help-catalog messages.
        const bool engraving = first.source.starts_with("Engraved on the wall is ") ||
            first.source.starts_with("Engraved on the floor is ") ||
            first.source.starts_with("Engraved is ");
        std::string source, best_target;
        TranslationResult best_translation;
        std::vector<int> colors, best_colors;
        std::vector<Match> spans, best_spans;
        size_t best_end = begin;
        for (size_t end = begin; end < card.rows.size(); ++end) {
            const auto &row = card.rows[end];
            if (row.map_hover.kind != NativeMapHoverKind::None ||
                row.x != first.x || row.y != first.y + static_cast<int>(end - begin) ||
                row.centered || row.x + static_cast<int>(row.source.size()) > right ||
                (!row.complete_source.empty() && row.complete_source != row.source) ||
                rows[row.y].compare(row.x, row.source.size(), row.source) != 0) break;
            if (!source.empty()) {
                source += ' ';
                colors.push_back(colors.back());
            }
            source += row.source;
            colors.insert(colors.end(), row.foregrounds.begin(), row.foregrounds.end());
            spans.push_back({row.x, row.y, static_cast<int>(row.source.size()),
                kUiMessageRule, {}, row.source});
            // A terminal sentence mark is required even for single-line
            // messages. Native draws can retain spaces after the full stop;
            // those still belong to the physical span, not the sentence end.
            // A short title must not absorb the following label.
            const auto sentence_source = trim_view(source);
            if (sentence_source.empty() || std::string_view(".!?").find(sentence_source.back()) ==
                    std::string_view::npos) continue;
            std::vector<int> target_colors;
            TranslationResult translation;
            if (engraving) translation = translate_item_description_source_display(source, true);
            const auto target = engraving
                ? (translation.usable() ? std::optional<std::string>(translation.target) : std::nullopt)
                : translate_help_paragraph(source, colors, target_colors, true);
            if (!target || target->empty()) continue;
            best_target = *target;
            best_translation = std::move(translation);
            best_colors = std::move(target_colors);
            best_spans = spans;
            best_end = end;
        }
        // An engraving owns the whole connected description; an unfinished
        // historical tail must not be reinterpreted as independent hover nouns.
        const size_t first_match = matches.size();
        if ((engraving && best_spans.size() != spans.size()) || best_spans.empty() ||
                !append_bounded_paragraph(std::move(best_spans),
                best_target, rows, matches, only_y, right, right, best_colors)) continue;
        if (best_translation.usable()) attach_item_display_result(matches, first_match, best_translation);
        for (size_t end = begin; end <= best_end; ++end)
            paragraph_rows.insert(card.rows[end].y);
        begin = best_end;
    }
    for (const auto &row : card.rows) {
        if (paragraph_rows.contains(row.y)) continue;
        // A submitted message may already own this complete physical row,
        // including a continuation whose translated output is now empty.
        if (rows[row.y].compare(row.x, row.source.size(), row.source) != 0) continue;
        // Native kind owns colored captions too. A color change cannot send
        // the remaining words back into generic item/person matching.
        std::string normalized;
        bool space = false;
        for (unsigned char ch : row.complete_source.empty() ? row.source : row.complete_source) {
            if (ch == ' ') { space = true; continue; }
            if (space && !normalized.empty()) normalized += ' ';
            normalized += static_cast<char>(ch);
            space = false;
        }
        // Tracking titles and bearings are independent catalog fields without
        // sentence punctuation. Resolve only their complete fixed UI entry;
        // an unknown row retains the same native ownership and layout below.
        std::vector<int> target_colors;
        auto target = row.map_hover.kind == NativeMapHoverKind::None
            ? translate_help_paragraph(row.source, row.foregrounds,
                target_colors, true, -1, true)
            : translate_map_hover_phrase(normalized, row.map_hover,
                row.unit_identity_target);
        // Typed item/unit parsers can preserve an authored name or nickname
        // in Latin letters. Their field binding remains a complete result.
        const bool authored_field = row.map_hover.kind == NativeMapHoverKind::Unit ||
            row.map_hover.kind == NativeMapHoverKind::Item ||
            row.map_hover.kind == NativeMapHoverKind::BuildingItem ||
            row.map_hover.kind == NativeMapHoverKind::Building ||
            (row.map_hover.kind == NativeMapHoverKind::Spatter && row.map_hover.data[0] != -1) ||
            (row.map_hover.kind == NativeMapHoverKind::Vermin && row.map_hover.data[1] != -1) ||
            (row.map_hover.kind == NativeMapHoverKind::Flow &&
                (static_cast<uint32_t>(row.map_hover.data[0]) & 0xffffu) == 13u &&
                row.map_hover.data[2] >= 0);
        const bool untranslated = !target || target->empty() ||
            (!authored_field && !item_description_translation_complete(target));
        if (untranslated) {
            // Every native caption owns the complete row, even when a mod
            // introduces unknown vocabulary. Preserve it visibly as one noun
            // rather than declaring a translated prefix to be a success.
            target = native_text_to_utf8(row.complete_source.empty()
                ? row.source : row.complete_source);
        }
        if (!target || target->empty() || target->find("[C:") != std::string::npos ||
            target->find_first_of("\r\n") != std::string::npos) continue;
        Match match{row.x, row.y, static_cast<int>(row.source.size()),
            kMapHoverPhraseRule, std::move(*target), row.source};
        match.layout_foreground_rgb = row.foregrounds.front();
        if (!untranslated) match.layout_glyph_foreground_rgb = std::move(target_colors);
        match.native_hover_untranslated = untranslated;
        if (untranslated) match.native_help_review_source = row.complete_source.empty()
            ? row.source : row.complete_source;
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
    }
}

// The verified lookinfost draw already owns an entire typed caption. Keep
// that ownership even when HUD/frame discovery cannot reconstruct the card,
// rather than letting generic literals consume only its material/type words.
void Overlay::append_native_map_hover_phrases(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, NativeMapHoverKind only_kind) const {
    const auto settings = native_ui_settings();
    const auto append = [&](const auto &draws) {
        for (const auto &draw : draws) {
            if ((only_kind != NativeMapHoverKind::None && draw.map_hover.kind != only_kind) ||
                    draw.map_hover.kind < NativeMapHoverKind::Item ||
                    draw.source.empty() || draw.x < 0 || draw.y < 0 ||
                    draw.y >= gps_->dimy || (only_y >= 0 && draw.y != only_y)) continue;
            const auto source = trim_view(draw.source);
            if (source.empty()) continue;
            const int x = draw.x + static_cast<int>(source.data() - draw.source.data());
            if (x >= gps_->dimx || source.size() > static_cast<size_t>(gps_->dimx - x) ||
                    rows[draw.y].compare(x, source.size(), source) != 0) continue;
            const int end = x + static_cast<int>(source.size());
            Match physical{x, draw.y, end - x, kMapHoverPhraseRule, {}, std::string(source)};
            // The existing reader proves the current source bytes, layer and
            // draw grid, so a retained or covered caption cannot claim a popup.
            const auto owned = native_map_hover_draw_for_row(*gps_, physical, end);
            if (!owned || owned->map_hover.kind < NativeMapHoverKind::Item) continue;
            NativeTextCard card;
            card.interior = {x, draw.y, end - x, 1};
            NativeTextCardRow row{x, draw.y, physical.source, {}};
            for (int at = x; at < end; ++at) {
                bool top = false;
                const auto *cell = cell_at(at, draw.y, &top);
                row.foregrounds.push_back(cell
                    ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
            }
            row.complete_source = owned->complete_source;
            row.map_hover = owned->map_hover;
            row.unit_identity_target = owned->unit_identity_target;
            card.rows.push_back(std::move(row));
            const size_t first = matches.size();
            append_map_hover_phrases(card, rows, matches, only_y);
            // The source origin remains authoritative without an outer-card
            // layout. Expand only to its current native hover side, if present.
            int right = end;
            if (settings) {
                const int limit = owned->draw_clip
                    ? std::min(gps_->dimx, owned->draw_clip->x + owned->draw_clip->w)
                    : gps_->dimx;
                for (int at = end; at < limit; ++at) {
                    if (native_ui_skin_at(*gps_, at, draw.y,
                            native_texture_hover_rectangle(*gps_)[2][1], settings->classic)) {
                        right = at;
                        break;
                    }
                    const auto ch = visible_char_at(at, draw.y);
                    if (ch && ch != ' ') break;
                }
            }
            for (size_t at = first; at < matches.size(); ++at) {
                auto &match = matches[at];
                match.layout_x = x;
                match.layout_y = draw.y;
                match.layout_length = right - x;
                match.layout_clip_right = right;
                match.layout_left = true;
                match.layout_font_pixels = std::clamp(
                    static_cast<int>(gps_->tile_pixel_y * config_.font_scale), 1, gps_->tile_pixel_y);
                match.layout_lock_font_pixels = true;
            }
        }
    };
    append(captured_native_map_hover_caption_rows());
    append(captured_native_map_hover_caption_rows(true));
}

void Overlay::layout_map_hover(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    std::vector<std::vector<Match *>> rows;
    int left = -1, right = -1;
    for (Match &match : prepared_matches_) {
        if (match.rule != kMapHoverRowRule || match.target.empty()) continue;
        left = match.layout_x;
        right = left + match.layout_length;
        rows.push_back({&match});
    }
    if (rows.empty()) return;
    layout_fortress_text_rows(renderer, rows, left, right, true, true);
    static bool logged = false;
    if (!logged) {
        log_line("INFO", "Activated whole map hover layout: columns=" +
            std::to_string(left) + ".." + std::to_string(right) + "; rows=" +
            std::to_string(rows.size()) + "; fixed font=" +
            std::to_string(rows.front().front()->layout_font_pixels) + "px");
        logged = true;
    }
}
