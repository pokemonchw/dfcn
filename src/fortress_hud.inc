// The current world_site owns both HUD name fields. Keep the native-language
// row phonetic, and send the English-name row through the site translator
// before generic personal-name/compound rules can consume either field.
void Overlay::append_fortress_site_name(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool /*raw_layer*/) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy) ||
            (only_y >= 0 && only_y > 3)) return;
    const int header_rows = std::min(5, gps_->dimy);
    std::vector<std::string> context(rows.begin(), rows.begin() + header_rows);
    // Earlier readers may have claimed a rank or part of the native row.
    // The composed HUD supplies context; each raw layer still owns only
    // its exact surviving source bytes below.
    for (int y = 0; y < header_rows; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            context[y][x] = ch ? static_cast<char>(ch) : ' ';
        }
    for (int y = 0; y <= 2 && y + 2 < gps_->dimy; ++y) {
        std::vector<int> populations;
        for (const std::string_view label : {"Pop", "Population"})
            for (size_t at = context[y].find(label); at != std::string::npos;
                    at = context[y].find(label, at + label.size()))
                if (has_word_boundaries(context[y], at, at + label.size()))
                    populations.push_back(static_cast<int>(at));
        const auto ranks = split_text_fields(context[y + 2]);
        for (const int population : populations) {
            for (const auto &rank : ranks) {
                if (rank.end >= population || !translate_fortress_status(rank.text)) continue;
                const int left = rank.start, right = population - 1;
                if (left >= right) continue;
                NativeHistoryName name;
                std::string english;
                if (!capture_current_fortress_site_name(name, english)) return;
                const std::string full_english = english;
                // 3f30d3 shortens only the English field to 18 bytes, with
                // its last three bytes replaced by dots. Preserve the real
                // complete identity instead of parsing that clipped gloss.
                if (english.size() >= 19) {
                    english.resize(18);
                    english.replace(15, 3, "...");
                }
                const std::array<std::string, 2> sources{name.native_name, english};
                auto place = translate_english_site_name(full_english, &name,
                    site_name_attribute_suffix(name));
                const std::array<std::string, 2> targets{
                    site_name_full_transliteration(name), place.value_or(std::string{})};
                for (size_t field = 0; field < sources.size(); ++field) {
                    const int row_y = y + static_cast<int>(field);
                    const int length = std::min<int>(sources[field].size(), right - left);
                    if (length <= 0 || targets[field].empty() ||
                            lower_native_name(context[row_y].substr(left, length)) !=
                            lower_native_name(sources[field].substr(0, length))) continue;
                    const std::string source = context[row_y].substr(left, length);
                    // Raw-layer suppression must own only this layer's same
                    // source bytes, never a popup that covers the HUD.
                    if (rows[row_y].compare(left, length, source) != 0) continue;
                    std::fill_n(rows[row_y].begin() + left, length, ' ');
                    if (only_y >= 0 && only_y != row_y) continue;
                    Match match{left, row_y, length, kFortressSiteNameRule,
                        targets[field], source};
                    match.layout_x = left;
                    match.layout_y = row_y;
                    match.layout_length = right - left;
                    match.layout_left = true;
                    match.layout_clip_right = right;
                    match.layout_prepared = true;
                    matches.push_back(std::move(match));
                }
                return;
            }
        }
    }
}

// RAW names belong to the mod that supplied them. Complete reviewed names
// or build aliases admit translations; reserve every other native field
// before word/item/generated-name readers can translate fragments. Captured
// draws also retain the full identity of a clipped picture caption.
std::vector<SDL_Rect> Overlay::preserve_mod_workshop_names(
        std::vector<std::string> &rows) const {
    std::vector<SDL_Rect> regions;
    const auto names = native_mod_workshop_names();
    if (!gps_ || !names || names->empty()) return regions;
    const auto context = rows;
    const auto known_name = [&](std::string_view source) {
        source = trim_view(source);
        if (!names->contains(lower(std::string(source)))) return false;
        if (exact_literal_translation("Build menu: " + std::string(source))) return false;
        return !exact_literal_translation(source);
    };
    const auto reserve = [&](int left, int right, int y) {
        if (left >= right || y < 0 || y >= static_cast<int>(rows.size())) return;
        const SDL_Rect region{left, y, right - left, 1};
        if (std::any_of(regions.begin(), regions.end(), [&](const SDL_Rect &other) {
                return other.y == y && other.x <= left && other.x + other.w >= right;
            })) return;
        regions.push_back(region);
        std::fill(rows[y].begin() + left, rows[y].begin() + right, ' ');
    };
    for (int y = 0; y < static_cast<int>(context.size()); ++y)
        for (const auto &field : split_text_fields(context[y]))
            if (known_name(field.text)) reserve(field.start, field.end, y);

    auto popups = native_text_overlay_frames(*gps_);
    if (const auto popup = native_toolbar_tooltip_frame()) popups.push_back(*popup);
    const auto covered = [&](int x, int y) {
        return std::any_of(popups.begin(), popups.end(), [&](const SDL_Rect &popup) {
            return x >= popup.x && x < popup.x + popup.w &&
                y >= popup.y && y < popup.y + popup.h;
        });
    };
    const std::array draw_snapshots{captured_native_drawn_text_snapshot(),
        captured_native_drawn_text_snapshot(true)};
    std::vector<NativeDrawnTextRow> overwritten_draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        overwritten_draws = g_native_overwritten_text_rows;
    }
    const std::array<const std::vector<NativeDrawnTextRow> *, 3> draw_layers{
        draw_snapshots[0].get(), draw_snapshots[1].get(), &overwritten_draws};
    std::vector<const NativeDrawnTextRow *> draws;
    for (const auto *layer : draw_layers)
        for (const auto &draw : *layer) draws.push_back(&draw);
    const uint64_t epoch = captured_native_drawn_text_epoch();
    for (const auto *draw_source : draws) {
        const auto &draw = *draw_source;
        if (draw.draw_epoch != epoch || draw.draw_dimx != gps_->dimx ||
                draw.draw_dimy != gps_->dimy || draw.unit_identity_owner ||
                draw.info_title_authored || draw.fortress_labor_caption) continue;
        const auto source = trim_view(draw.source);
        const auto complete = draw.complete_source.empty()
            ? source : trim_view(draw.complete_source);
        if (source.empty() || !known_name(complete)) continue;
        const int first = draw.x + static_cast<int>(source.data() - draw.source.data());
        int left = std::max(0, first);
        int right = std::min(gps_->dimx, first + static_cast<int>(source.size()));
        if (draw.draw_clip) {
            const auto &clip = *draw.draw_clip;
            if (draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
            left = std::max(left, clip.x);
            right = std::min(right, clip.x + clip.w);
        }
        if (left >= right || draw.y < 0 || draw.y >= gps_->dimy) continue;
        std::array<int, 2> physical_rows{draw.y, -1};
        bool top = false;
        if (cell_at(left, draw.y, &top)) {
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const size_t tile = static_cast<size_t>(left) * gps_->dimy + draw.y;
            const uint32_t half = flags ? flags[tile] & ((1u << 3) | (1u << 4)) : 0;
            if (half == (1u << 3)) physical_rows[1] = draw.y + 1;
            if (half == (1u << 4)) physical_rows[1] = draw.y - 1;
        }
        for (const int y : physical_rows) {
            if (y < 0 || y >= gps_->dimy) continue;
            bool intact = true, ink = false;
            for (int x = left; x < right; ++x) {
                if (covered(x, y)) continue;
                const char expected = source[static_cast<size_t>(x - first)];
                if (context[y][x] != expected) { intact = false; break; }
                ink |= expected != ' ';
            }
            if (!intact || !ink) continue;
            for (int x = left; x < right;) {
                while (x < right && covered(x, y)) ++x;
                const int start = x;
                while (x < right && !covered(x, y)) ++x;
                reserve(start, x, y);
            }
        }
    }
    return regions;
}

void Overlay::layout_fortress_picture_caption(SDL_Renderer *renderer,
        const std::vector<Match *> &parts, int left, int right,
        std::string_view primary_source) {
    // The same scoped alias entry serves intact and hover-covered primary
    // captions. Activities/secondary columns never receive building aliases.
    // Material selection reuses this picture skin: its closed prompt panel
    // owns the material meaning, even when a name also names a workshop.
    if (parts.size() == 1 && !primary_source.empty()) {
        if (auto target = exact_literal_translation(
                "Build menu: " + std::string(trim_view(primary_source)))) {
            bool material_selection = false;
            constexpr std::string_view prompt = "Select material.";
            const NativePanelBorders borders(*gps_);
            const Match &caption = *parts.front();
            // UI-message matches are temporarily detached during ordinary
            // picture layout. Read the visible native prompt so this proof
            // also works before those matches return for the hover pass.
            std::string row(gps_->dimx, ' ');
            for (int y = 0; y < caption.y && !material_selection; ++y) {
                for (int x = 0; x < gps_->dimx; ++x) {
                    const auto ch = visible_char_at(x, y);
                    row[x] = ch ? static_cast<char>(ch) : ' ';
                }
                for (size_t at = row.find(prompt); at != std::string::npos;
                     at = row.find(prompt, at + prompt.size())) {
                    if ((at > 0 && ascii_word_byte(row[at - 1])) ||
                        (at + prompt.size() < row.size() &&
                         ascii_word_byte(row[at + prompt.size()]))) continue;
                    const auto panel = native_panel_interior(borders, *gps_,
                        static_cast<int>(at), static_cast<int>(at + prompt.size()), y);
                    if (panel && caption.x >= panel->x &&
                        caption.x + caption.length <= panel->x + panel->w &&
                        caption.y < panel->y + panel->h) {
                        material_selection = true;
                        break;
                    }
                }
            }
            if (!material_selection) parts.front()->target = std::move(*target);
        }
    }
    layout_fortress_text_rows(renderer, {parts}, left, right);
    for (Match *label : parts) {
        // Half-text flags still own vertical centering, never font size.
        label->layout_y = label->y;
        label->layout_pixel_y = 0;
    }
}

// Recover one complete, currently visible native field, not an arbitrary
// nearby translation. A blank row, frame or untranslated byte stops grouping;
// a second column is never included. Matches still own all source glyphs.
std::vector<Match *> Overlay::fortress_text_row(int left, int y) {
    if (left < 0 || left >= gps_->dimx || y < 0 || y >= gps_->dimy) return {};
    const auto blank = [](unsigned char ch) { return ch == 0 || ch == ' '; };
    if (blank(visible_char_at(left, y)) ||
        (left > 0 && !blank(visible_char_at(left - 1, y)))) return {};
    std::string native(gps_->dimx, ' ');
    for (int x = left; x < gps_->dimx; ++x) {
        const unsigned char ch = visible_char_at(x, y);
        native[x] = ch ? ch : ' ';
    }
    int right = left;
    while (right < gps_->dimx) {
        const unsigned char ch = native[right];
        if (ch < ' ' || is_cp437_box_separator(native, right) ||
            (ch == ' ' && right + 1 < gps_->dimx && native[right + 1] == ' ')) break;
        ++right;
    }
    while (right > left && native[right - 1] == ' ') --right;
    if (right == left) return {};

    std::vector<Match *> parts;
    for (Match &match : prepared_matches_) {
        if (match.y != y || match.x >= right || match.x + match.length <= left) continue;
        if (match.x < left || match.x + match.length > right || match.target.empty() ||
            match.native_split_text || match.native_split_duplicate || match.legends_flow)
            return {};
        parts.push_back(&match);
    }
    std::sort(parts.begin(), parts.end(), [](const Match *a, const Match *b) {
        return a->x < b->x;
    });
    if (parts.empty() || parts.front()->x != left) return {};
    int cursor = left;
    for (const Match *part : parts) {
        if (part->x < cursor) return {};
        while (cursor < part->x && native[cursor] == ' ') ++cursor;
        if (cursor != part->x) return {};
        cursor += part->length;
    }
    if (cursor != right) return {};
    return parts;
}

// Use the fixed UI font inside each native card/list/control text region.
// Multi-match rows advance by translated glyph widths inside that same region.
// Keep each match/color/source mask separate; this is layout, not a glossary.
void Overlay::layout_fortress_text_rows(SDL_Renderer *renderer,
        const std::vector<std::vector<Match *>> &rows, int left, int right,
        bool /*preserve_complete*/, bool preserve_alignment,
        const std::vector<Match *> &moving_fields) {
    // Sharing the widest native span must not draw through another column
    // or a frame beside a shorter row. Source suppression does not expand.
    // A classic caption can overwrite only part of its horizontal border.
    // Keep that row's remaining edge, without imposing a short status row's
    // caption opening on every longer name. All rows still share one left
    // margin and one font, measured against their respective live bounds.
    std::vector<int> row_rights(rows.size(), right);
    for (size_t i = 0; i < rows.size(); ++i) {
        const auto &row = rows[i];
        if (row.empty()) return;
        // This box was validated against the native draw and all exposed
        // skin/field bytes. Tooltip text is NOT a new background column.
        const auto &box = row.front()->native_picture_caption_box;
        if (box && std::all_of(row.begin(), row.end(), [&](const Match *part) {
                const auto &other = part->native_picture_caption_box;
                return other && other->x == box->x && other->y == box->y &&
                    other->w == box->w && other->h == box->h;
            })) continue;
        for (int x = row.back()->x + row.back()->length; x < right; ++x) {
            const unsigned char ch = visible_char_at(x, row.back()->y);
            if (ch && ch != ' ') {
                // A complete widget can relocate several owned columns at
                // once. Their original ink is suppressed, so it must not
                // truncate the neighbouring column's new display box.
                const bool moving = std::any_of(moving_fields.begin(), moving_fields.end(),
                    [&](const Match *part) {
                        return part->y == row.back()->y && x >= part->x &&
                            x < part->x + part->length;
                    });
                if (!moving) { row_rights[i] = x; break; }
            }
        }
    }
    const int tile_h = gps_->tile_pixel_y;
    const int padding = config_.horizontal_padding;
    const auto row_width = [&](size_t i) {
        return (row_rights[i] - left) * gps_->tile_pixel_x - 2 * padding;
    };
    if (rows.empty() || std::any_of(row_rights.begin(), row_rights.end(), [&](int end) {
            return (end - left) * gps_->tile_pixel_x <= 2 * padding;
        })) return;
    const int pixels = unified_font_pixels();
    std::vector<std::vector<int>> advances;
    for (size_t i = 0; i < rows.size(); ++i) {
        const auto &row = rows[i];
        const int width = row_width(i), row_right = row_rights[i];
        std::vector<int> row_advances;
        for (Match *part : row) {
            const DisplayLanguageScope language_scope(part);
            // Preserve the fixed UI size for every colored run.
            part->layout_x = left;
            part->layout_length = row_right - left;
            // A composed native row already owns its frame alignment. Keep
            // it while fitting the shared font; fragmented list rows still
            // use the ordinary left-to-right packing below.
            if (!preserve_alignment || row.size() != 1) part->layout_left = true;
            part->layout_prepared = true;
            part->layout_line_height_pixels = tile_h;
            part->layout_clip_right = part->layout_clip_right < 0 ? row_right
                : std::min(row_right, part->layout_clip_right);
            if (part->layout_glyph_foreground_rgb.empty()) {
                int foreground = part->layout_foreground_rgb;
                if (foreground < 0) {
                    foreground = 0xffffff;
                    for (int x = part->x; x < part->x + part->length; ++x) {
                        bool top = false;
                        const auto *cell = cell_at(x, part->y, &top);
                        if (cell && cell[0] && cell[0] != ' ') {
                            foreground = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                            break;
                        }
                    }
                }
                // Preserve the complete run's color mapping even when the
                // native field cannot display all of its translated glyphs.
                part->layout_glyph_foreground_rgb = colored_match_foregrounds(*part, foreground);
            }
            const auto *glyph = get_glyph_texture(renderer, part->target, width);
            if (!glyph || !glyph->texture) return;
            row_advances.push_back(glyph->width);
        }
        advances.push_back(std::move(row_advances));
    }
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * gps_->tile_pixel_x) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    for (size_t i = 0; i < rows.size(); ++i) {
        const int row_right = row_rights[i];
        const int region_x = origin_x + left * gps_->tile_pixel_x;
        const int region_width = (row_right - left) * gps_->tile_pixel_x;
        int offset = 0;
        for (size_t j = 0; j < rows[i].size(); ++j) {
            Match &part = *rows[i][j];
            part.layout_x = left;
            part.layout_length = row_right - left;
            if (!preserve_alignment || rows[i].size() != 1) part.layout_left = true;
            part.layout_box_pixel_x = rows[i].size() == 1 ? -1
                : region_x + offset;
            // Each color fragment can use the remaining native field. Its
            // English source span never becomes a separate display budget.
            part.layout_box_pixel_width = rows[i].size() == 1 ? 0
                : std::max(1, region_width - offset);
            part.layout_clip_right = part.layout_clip_right < 0 ? row_right
                : std::min(row_right, part.layout_clip_right);
            part.layout_prepared = true;
            part.layout_line_height_pixels = tile_h;
            const bool native_baseline = part.native_split_text && !part.layout_fixed_baseline;
            const int text_y = native_baseline ? part.native_split_top_y
                : part.layout_y >= 0 ? part.layout_y : part.y;
            const int pixel_y = native_baseline ? tile_h / 2 : part.layout_pixel_y;
            part.layout_native_clip = SDL_Rect{region_x,
                origin_y + text_y * tile_h + pixel_y, region_width, tile_h};
            offset += advances[i][j];
        }
    }
}

// Recover the actual native caption, never a dictionary completion of the
// visible prefix. The draw hook records its complete three-row button BEFORE
// the tooltip overwrites that same grid. Current exposed skin and text must
// still agree; no previous-frame translated labels or menu-width guesses.
void Overlay::append_hover_picture_captions(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, const unsigned char *raw) const {
    auto popups = native_text_overlay_frames(*gps_);
    if (const auto popup = native_toolbar_tooltip_frame()) popups.push_back(*popup);
    if (popups.empty()) return;
    const auto occluders = std::make_shared<const std::vector<SDL_Rect>>(popups);
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto covered = [&](int x, int y) {
        return std::any_of(popups.begin(), popups.end(), [&](const SDL_Rect &popup) {
            return x >= popup.x && x < popup.x + popup.w &&
                y >= popup.y && y < popup.y + popup.h;
        });
    };
    const std::array draw_snapshots{captured_native_drawn_text_snapshot(),
        captured_native_drawn_text_snapshot(true)};
    std::vector<NativeDrawnTextRow> overwritten_draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        overwritten_draws = g_native_overwritten_text_rows;
    }
    const std::array<const std::vector<NativeDrawnTextRow> *, 3> draw_layers{
        draw_snapshots[0].get(), draw_snapshots[1].get(), &overwritten_draws};
    std::vector<const NativeDrawnTextRow *> draws;
    for (const auto *layer : draw_layers)
        for (const auto &draw : *layer) draws.push_back(&draw);
    std::set<std::tuple<int, int, std::string>> owners;
    std::set<std::tuple<int, int, std::string>> physical_rows;
    for (const auto *draw_source : draws) {
        const auto &draw = *draw_source;
        // Labor and barter retain their complete typed fields. Generic hover
        // recovery must not reinterpret their authored names or reply rows.
        if (draw.fortress_labor_caption ||
                draw.adventure_barter_field != NativeAdventureBarterField::None ||
                !draw.picture_frame ||
                (only_y >= 0 && draw.y != only_y)) continue;
        const auto &frame = *draw.picture_frame;
        const SDL_Rect &button = frame.text;
        if (frame.dimx != gps_->dimx || frame.dimy != gps_->dimy ||
            frame.classic != classic ||
            std::none_of(popups.begin(), popups.end(), [&](const SDL_Rect &popup) {
                return SDL_HasIntersection(&frame.proof, &popup);
            }) ||
            (classic && frame.anchors.size() != frame.cells.size()) ||
            (classic ? frame.cells.size() : frame.lower.size()) !=
                static_cast<size_t>(frame.proof.w * frame.proof.h)) continue;
        const auto text = trim_view(draw.source);
        if (text.empty()) continue;
        const int first = draw.x + static_cast<int>(text.data() - draw.source.data());
        const int last = first + static_cast<int>(text.size());
        if (first < button.x || last > button.x + button.w ||
            draw.y < button.y || draw.y >= button.y + button.h) continue;
        bool intact = true;
        int exposed_skin = 0;
        size_t index = 0;
        for (int y = frame.proof.y; intact && y < frame.proof.y + frame.proof.h; ++y) {
            for (int x = frame.proof.x; x < frame.proof.x + frame.proof.w; ++x, ++index) {
                if (covered(x, y)) continue;
                const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                const bool top = native_ui_top_layer_at(*gps_, tile);
                const auto *lower = top ? gps_->screentexpos_top_lower : gps_->screentexpos_lower;
                if (classic) {
                    const auto *screen = top ? gps_->screen_top : gps_->screen;
                    const auto *primary = top ? gps_->screentexpos_top : gps_->screentexpos;
                    const auto *anchored = top ? gps_->screentexpos_top_anchored : gps_->screentexpos_anchored;
                    const long anchor = anchored ? anchored[tile] : 0;
                    // Native picture artwork also records anchored IDs on
                    // its CP437 frame. Keep its captured identity outside
                    // the text box; never admit artwork over the caption.
                    const bool picture_artwork = x < button.x &&
                        anchor == frame.anchors[index];
                    if (!screen || (primary && primary[tile]) || (lower && lower[tile]) ||
                        (anchor && !picture_artwork) ||
                        anchor != frame.anchors[index]) { intact = false; break; }
                    // Capture can precede the native text draw. Its middle
                    // strip keeps the background; exposed borders retain
                    // their glyph and both colors. Source text is proved below.
                    const bool caption = y == button.y + 1 &&
                        x >= button.x && x < button.x + button.w;
                    if (caption && is_cp437_box_drawing_byte(screen[tile * 8])) {
                        intact = false;
                        break;
                    }
                    const size_t first_channel = caption ? 4 : 0;
                    const auto &saved = frame.cells[index];
                    if (!std::equal(saved.begin() + first_channel, saved.end(),
                            screen + tile * 8 + first_channel)) { intact = false; break; }
                } else if (!lower || lower[tile] != frame.lower[index]) {
                    intact = false;
                    break;
                }
                ++exposed_skin;
            }
        }
        if (!intact || !exposed_skin) continue;
        int foreground = -1, half = -1;
        constexpr uint32_t half_mask = (1u << 3) | (1u << 4);
        for (int x = first; x < last; ++x) {
            if (covered(x, draw.y)) continue;
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            const unsigned char expected = text[static_cast<size_t>(x - first)];
            const size_t tile = static_cast<size_t>(x) * gps_->dimy + draw.y;
            const auto visible = raw ? (cell ? cell[0] : 0) : visible_char_at(x, draw.y);
            if ((visible ? visible : ' ') != expected ||
                (raw && (raw[tile * 8] ? raw[tile * 8] : ' ') != expected)) {
                intact = false;
                break;
            }
            if (expected == ' ') continue;
            if (!cell) { intact = false; break; }
            const int color = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const int current_half = flags ? flags[tile] & half_mask : 0;
            // Multi-colored/multi-field controls remain with their typed
            // record owner. A picture skin alone never joins their columns.
            if ((foreground >= 0 && foreground != color) || (half >= 0 && half != current_half)) {
                intact = false;
                break;
            }
            foreground = color;
            half = current_half;
        }
        if (!intact || foreground < 0) continue;
        // Existing typed rows (items, workers, costs, place names...) retain
        // their own identity and column grammar even under the same skin.
        if (std::any_of(matches.begin(), matches.end(), [&](const Match &part) {
                return part.rule < 0 && part.rule != kToolbarTooltipBodyRule &&
                    part.rule != kToolbarTooltipKeyRule && part.y == draw.y &&
                    part.x <= first && part.x + part.length >= last;
            })) continue;
        const std::string_view complete = draw.complete_source.empty()
            ? text : trim_view(draw.complete_source);
        auto target = exact_literal_translation(complete);
        if (!target) target = translate_fortress_item_caption(complete);
        if (!target) target = translate_ui_message_capture(complete, false);
        if (!target || target->empty() || !contains_cjk_utf8(*target)) continue;
        bool primary = draw.y == button.y + 1;
        int right = button.x + button.w;
        // Preserve neighbouring fields even when THEY are inside the popup.
        // Their current native draws, not translated fragments, bound this one.
        for (const auto *other_source : draws) {
            const auto &other = *other_source;
            if (!other.picture_frame) continue;
            const auto &other_box = other.picture_frame->text;
            if (other_box.x != button.x || other_box.y != button.y ||
                other_box.w != button.w || other_box.h != button.h) continue;
            if (other.y != draw.y || trim_view(other.source).empty()) continue;
            if (other.x < draw.x) primary = false;
            if (other.x >= last && other.x < right && other.x > first) right = other.x;
        }
        for (int x = last; x < right; ++x) {
            if (covered(x, draw.y)) continue;
            const auto ch = visible_char_at(x, draw.y);
            if ((ch && ch != ' ') || native_foreground_picture_at(*gps_, x, draw.y)) {
                right = x;
                break;
            }
        }
        if (right < last) continue;
        // A source may be retained in both native layers or in the overwritten
        // registry. It must not erase the owner already recovered from the
        // same physical row. Split-font partners still own separate rows.
        if (!physical_rows.emplace(first, draw.y, std::string(text)).second) continue;
        const bool split = half == (1u << 3) || half == (1u << 4);
        const int top_y = draw.y - (half == (1u << 4) ? 1 : 0);
        const bool owner = owners.emplace(first, split ? top_y : draw.y, std::string(text)).second;
        // The native caption remains one field even if the popup cuts it
        // into several visible strips. Keep its identity for page layout;
        // suppression and drawing use the occluders to protect foreground ink.
        std::erase_if(matches, [&](const Match &part) {
            if (part.rule == kToolbarTooltipBodyRule || part.rule == kToolbarTooltipKeyRule ||
                part.y != draw.y) return false;
            for (int x = std::max(first, part.x); x < std::min(last, part.x + part.length); ++x)
                if (!covered(x, draw.y)) return true;
            return false;
        });
        Match match{first, draw.y, last - first, kHoverPictureCaptionRule,
            owner ? *target : std::string{}, std::string(text)};
        match.native_hover_background = true;
        match.native_help_background_frames = occluders;
        match.graphical_clear_x = first;
        match.graphical_clear_y = std::max(0, top_y);
        match.graphical_clear_width = owner ? last - first : 0;
        match.graphical_clear_height = owner
            ? std::min(gps_->dimy, top_y + (split ? 2 : 1)) - match.graphical_clear_y : 0;
        match.native_picture_caption_box = SDL_Rect{first, button.y, right - first, button.h};
        if (primary) match.native_picture_caption_source = std::string(text);
        match.layout_x = first;
        match.layout_y = std::max(0, top_y);
        match.layout_length = right - first;
        match.layout_left = true;
        match.layout_pixel_y = split ? (top_y < 0
            ? -((gps_->tile_pixel_y + 1) / 2) : gps_->tile_pixel_y / 2) : 0;
        match.layout_foreground_rgb = foreground;
        match.native_split_text = split;
        match.native_split_top_y = split ? top_y : -1;
        match.native_split_duplicate = !owner;
        for (int x = first; x < last; ++x)
            if (!covered(x, draw.y)) rows[draw.y][x] = ' ';
        matches.push_back(std::move(match));
    }
}

// Same-layer popups destroy source bytes as well as border evidence. Recover
// complete native draws for ordinary captions too, without a page-name or
// picture-button requirement. Exposed bytes prove the draw; the foreground
// frames mask its ink without splitting its identity or layout rectangle.
void Overlay::append_hover_text_captions(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, const unsigned char *raw) const {
    auto frames = native_text_overlay_frames(*gps_);
    if (const auto card = native_toolbar_tooltip_frame()) frames.push_back(*card);
    if (frames.empty()) return;
    const auto covered = [&](int x, int y) {
        return std::any_of(frames.begin(), frames.end(), [&](const SDL_Rect &frame) {
            return x >= frame.x && x < frame.x + frame.w &&
                y >= frame.y && y < frame.y + frame.h;
        });
    };
    std::vector<NativeDrawnTextRow> draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        draws = g_native_drawn_text_rows;
        draws.insert(draws.end(), g_native_drawn_top_text_rows.begin(), g_native_drawn_top_text_rows.end());
        draws.insert(draws.end(), g_native_overwritten_text_rows.begin(), g_native_overwritten_text_rows.end());
    }
    const auto occluders = std::make_shared<const std::vector<SDL_Rect>>(frames);
    std::set<std::tuple<int, int, std::string>> owners;
    for (const auto &draw : draws) {
        // Keep Labor and barter fields with their typed owners even when a
        // popup hides source cells that the page reader can no longer claim.
        if (draw.fortress_labor_caption ||
                draw.adventure_barter_field != NativeAdventureBarterField::None ||
                !draw.caption_source || draw.picture_frame ||
                draw.y < 0 || draw.y >= gps_->dimy ||
            (only_y >= 0 && only_y != draw.y)) continue;
        const auto source = trim_view(draw.source);
        if (source.empty()) continue;
        const int first = draw.x + static_cast<int>(source.data() - draw.source.data());
        const int last = first + static_cast<int>(source.size());
        if (first < 0 || last > gps_->dimx) continue;
        bool hidden = false, intact = true;
        int foreground = -1, half = -1;
        for (int x = first; x < last; ++x) {
            if (covered(x, draw.y)) { hidden = true; continue; }
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            const auto ch = static_cast<unsigned char>(source[x - first]);
            const size_t tile = static_cast<size_t>(x) * gps_->dimy + draw.y;
            const auto visible = raw ? raw[tile * 8] : visible_char_at(x, draw.y);
            if (!cell || (visible ? visible : ' ') != ch || rows[draw.y][x] != static_cast<char>(ch)) {
                intact = false;
                break;
            }
            if (ch == ' ') continue;
            const int color = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const int current_half = flags ? flags[tile] & ((1u << 3) | (1u << 4)) : 0;
            if ((foreground >= 0 && foreground != color) || (half >= 0 && half != current_half)) {
                intact = false;
                break;
            }
            foreground = color;
            half = current_half;
        }
        if (!intact || !hidden || foreground < 0) continue;
        const auto complete = draw.complete_source.empty() ? source : trim_view(draw.complete_source);
        auto target = exact_literal_translation(complete);
        std::vector<int> target_foregrounds;
        bool ui_message = false;
        if (!target) {
            // hP literals belong to the UI-message catalog, not the ordinary
            // exact capture index. Require this complete native draw to match
            // one message; an exposed suffix cannot complete it by itself.
            target = translate_help_paragraph(complete,
                std::vector<int>(complete.size(), foreground), target_foregrounds,
                true, -1, true);
            ui_message = target.has_value();
        }
        if (!target) target = translate_ui_message_capture(complete, false);
        if (!target || target->empty() || !contains_cjk_utf8(*target)) continue;
        // Recovery exists precisely because covered source cells may no
        // longer contain this draw. Never require those cells a second time
        // or downgrade the label to detached hover fragments when they fail.
        const bool split = half == (1u << 3) || half == (1u << 4);
        const int top_y = draw.y - (half == (1u << 4) ? 1 : 0);
        const bool owner = owners.emplace(first, top_y, std::string(source)).second;
        Match match{first, draw.y, last - first, ui_message ? kUiMessageRule : -2,
            owner ? *target : std::string{}, std::string(source)};
        match.native_hover_background = true;
        match.native_help_background_frames = occluders;
        match.layout_x = first;
        match.layout_y = std::max(0, top_y);
        match.layout_length = last - first;
        match.layout_left = ui_message;
        match.layout_pixel_y = split ? (top_y < 0
            ? -((gps_->tile_pixel_y + 1) / 2) : gps_->tile_pixel_y / 2) : 0;
        match.layout_foreground_rgb = foreground;
        if (owner) match.layout_glyph_foreground_rgb = std::move(target_foregrounds);
        match.native_split_text = split;
        match.native_split_top_y = split ? top_y : -1;
        match.native_split_duplicate = !owner;
        match.graphical_clear_x = first;
        match.graphical_clear_y = std::max(0, top_y);
        match.graphical_clear_width = owner ? last - first : 0;
        match.graphical_clear_height = owner
            ? std::min(gps_->dimy, top_y + (split ? 2 : 1)) - match.graphical_clear_y : 0;
        for (int x = first; x < last; ++x)
            if (!covered(x, draw.y)) rows[draw.y][x] = ' ';
        matches.push_back(std::move(match));
    }
}

// Within the build menu, ownership comes from the native selection skin,
// not the parent captions. DF collapses ancestor menus to picture-only columns
// when another level opens; no ancestor text or learned geometry survives
// that transition reliably. Discover the visible buttons afresh each frame.
void Overlay::layout_fortress_build_menu(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;

    // Diplomacy uses the same picture skins for candidates, but its position
    // list and per-candidate annotations are independent native fields.
    // Never give those rows the build menu's shared caption inset.
    constexpr std::string_view elevation_prompt = "Elevate whom?";
    const NativePanelBorders elevation_borders(*gps_);
    for (int y = 0; y < gps_->dimy; ++y) {
        std::string row(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            row[x] = ch ? static_cast<char>(ch) : ' ';
        }
        const size_t at = row.find(elevation_prompt);
        if (at != std::string::npos && native_panel_interior(elevation_borders, *gps_,
                static_cast<int>(at), static_cast<int>(at + elevation_prompt.size()), y)) {
            fortress_build_menu_geometry_ = {};
            return;
        }
    }

    // Item pickers reuse these picture-button skins. Their item names and
    // point costs already have independent columns; packing them as a build
    // caption would override that grid with adjacent pixel boxes.
    ItemPickerSignature item_picker;
    for (const Match &match : prepared_matches_)
        item_picker.observe(match.source);
    // Creature tables and their Overall training picture list also own
    // independent name/status columns. Do not truncate or consume either
    // field before the creature-page pass can place those columns.
    if (item_picker.complete() || fortress_creature_tabs_y() >= 0) {
        fortress_build_menu_geometry_ = {};
        return;
    }

    // The zone location picker has two-line picture records whose right
    // cap is covered by LOCATION_DETAILS (main[181]). Keep that exception
    // inside the current prompt's closed panel, including in classic mode.
    int location_prompt_y = -1;
    const auto location_panel = capture_fortress_location_picker(location_prompt_y);

    std::optional<SDL_Rect> places_panel;
    int places_tabs_y = -1;
    {
        // The graphical list also paints its action buttons over the caption
        // strip's right cap. Match the same Places boundary used when owning
        // complete names, so both display modes use the full name column.
        std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
        places_panel = capture_fortress_places_panel(context, places_tabs_y);
    }

    struct Part { Match *match; int first, last; };
    struct Field {
        int first, last, y;
        std::vector<Part> parts;
    };
    struct Button {
        int left, right, y, text_left;
        std::vector<Field> fields;
        bool location_record = false;
    };
    std::vector<Button> buttons;
    int inset = gps_->dimx;
    for (int y = 1; y + 1 < gps_->dimy; ++y) {
        for (int x = 0; x < gps_->dimx;) {
            int next_x = x + 1;
            const bool places_row = places_panel && y - 1 > places_tabs_y &&
                y + 1 < places_panel->y + places_panel->h &&
                x >= places_panel->x && x < places_panel->x + places_panel->w;
            const bool location_row = location_panel && y - 1 > location_prompt_y &&
                y + 1 < location_panel->y + location_panel->h &&
                x >= location_panel->x && x < location_panel->x + location_panel->w;
            const auto rect = native_picture_caption_rect(
                *gps_, x, y, false, &next_x, places_row || location_row,
                nullptr, places_row, false, location_row ? 181 : -1, false, true);
            if (!rect) { x = next_x; continue; }
            const auto &record_panel = location_row ? location_panel : places_panel;
            if ((places_row || location_row) && (rect->x < record_panel->x ||
                    rect->x + rect->w > record_panel->x + record_panel->w)) {
                x = next_x;
                continue;
            }
            const int first = rect->x, last = first + rect->w;
            int text_left = first;
            while (text_left < last) {
                const unsigned char ch = visible_char_at(text_left, y);
                if (ch && ch != ' ') break;
                ++text_left;
            }
            if (text_left != last) {
                inset = std::min(inset, text_left - first);
                buttons.push_back({first, last, y, text_left, {}, location_row});
            }
            x = last;
        }
    }
    const size_t native_button_count = buttons.size();
    // A picture-button skin does not imply a single caption. Places uses
    // this same skin for a building-name column and an independent activity
    // column, with the queued-task count on the following row. Discover the
    // native fields BEFORE assigning translations, including untranslated
    // fields and both physical halves of a split caption. Translation
    // coverage must never remove a column boundary.
    for (Button &button : buttons) {
        for (int y = button.y - 1; y <= button.y + 1; ++y) {
            std::string native(button.right - button.left, ' ');
            for (int x = button.left; x < button.right; ++x) {
                const auto ch = visible_char_at(x, y);
                native[x - button.left] = ch ? static_cast<char>(ch) : ' ';
            }
            // A captured Places field establishes its own native boundary:
            // authored names can contain multiple spaces, while siege ammo
            // and job columns may have only one space between them.
            for (const Match &match : prepared_matches_) {
                if (match.rule != kFortressPlaceNameRule || match.y != y ||
                    match.x < button.left || match.length <= 0 ||
                    match.x + match.length > button.right ||
                    match.source.size() != static_cast<size_t>(match.length) ||
                    native.compare(match.x - button.left, match.length, match.source) != 0)
                    continue;
                const std::string_view text = trim_view(match.source);
                if (text.empty()) continue;
                const int first = match.x + static_cast<int>(text.data() - match.source.data());
                button.fields.push_back({first, first + static_cast<int>(text.size()), y, {}});
                std::fill_n(native.begin() + match.x - button.left, match.length, ' ');
            }
            for (const auto &field : split_text_fields(native))
                button.fields.push_back({button.left + field.start,
                    button.left + field.end, y, {}});
        }
    }
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate ||
            match.rule == kFortressItemCaptionRule || match.rule == kFortressLaborWorkerRule ||
            match.rule == kFortressFarmFieldRule ||
            match.rule == kFortressStandingOrderRule ||
            match.rule == kFortressAmmunitionChoiceRule ||
            match.rule == kFortressKitchenCaptionRule || match.rule == kFortressKitchenFoodRule ||
            match.rule == kFortressStoneCaptionRule || match.rule == kFortressStoneNameRule ||
            match.rule == kFortressStoneUsesRule ||
            match.rule == kFortressNoblePositionRule || match.rule == kFortressNobleHolderRule ||
            match.rule == kFortressNobleRoomRule ||
            match.rule == kFortressDepotFieldRule ||
            match.rule == kCharacterRelationRowRule ||
            match.rule == kCharacterRoomStatusRule ||
            ((match.rule == kCharacterInventoryItemRule ||
              match.rule == kCharacterInventoryLocationRule) && match.native_picture_caption_box) ||
            // A restored page marks every caption as hover background for
            // clipping, including buttons wholly outside the tooltip. Its
            // scoped grid still supplies the complete native button/field
            // geometry, so those captions need the ordinary layout below.
            // Only isolated recovery on the composed grid keeps its own box.
            (match.native_hover_background && !NativeTooltipPageScope::active) ||
            match.legends_flow || match.x < 0 ||
            match.y < 0 || match.y >= gps_->dimy || match.length <= 0 ||
            match.length > gps_->dimx - match.x ||
            match.source.size() != static_cast<size_t>(match.length)) continue;
        const std::string_view source = trim_view(match.source);
        if (source.empty()) continue;
        // Padding may belong to a longer dictionary rule (e.g. ` furniture`),
        // but never to the icon gutter or the caption's horizontal origin.
        const int start = match.x + static_cast<int>(source.data() - match.source.data());
        const int end = start + static_cast<int>(source.size());
        const bool fold_case = match.rule >= 0 &&
            static_cast<size_t>(match.rule) < rules_.size() &&
            rules_[static_cast<size_t>(match.rule)].case_insensitive;
        std::string native;
        for (int x = start; x < end; ++x) native.push_back(visible_char_at(x, match.y));
        if (!template_literal_at(native, 0, source, fold_case)) continue;
        const auto button = std::find_if(buttons.begin(), buttons.end(), [&](const Button &b) {
            return match.y >= b.y - 1 && match.y <= b.y + 1 &&
                start >= b.left && end <= b.right;
        });
        if (button == buttons.end()) continue;
        const auto field = std::find_if(button->fields.begin(), button->fields.end(),
            [&](const Field &f) {
                return f.y == match.y && start >= f.first && end <= f.last;
            });
        if (field != button->fields.end()) field->parts.push_back({&match, start, end});
    }
    // Pack fragments only WITHIN one complete field, never across the
    // native padding between columns. Unknown fields keep their original
    // text and still bound their neighbours. A discarded half-font duplicate
    // likewise retains its physical boundary without being drawn again.
    for (Button &button : buttons) {
        for (Field &field : button.fields) {
            std::sort(field.parts.begin(), field.parts.end(),
                [](const Part &a, const Part &b) { return a.first < b.first; });
            int cursor = field.first;
            bool complete = true;
            for (const Part &part : field.parts) {
                if (part.first < cursor) { complete = false; break; }
                while (cursor < part.first) {
                    const auto ch = visible_char_at(cursor, field.y);
                    if (ch && ch != ' ') break;
                    ++cursor;
                }
                if (cursor != part.first) { complete = false; break; }
                cursor = part.last;
            }
            if (!complete || cursor != field.last) field.parts.clear();
        }
    }
    std::erase_if(buttons, [&](const Button &button) {
        // Item pickers share this skin, but their point cost or material
        // distance is an independent column, not part of a build caption.
        // Recognize the row even if its heading is covered or detached as a
        // UI message. Packing first would also ellipsize/erase later fields
        // before their own layout can restore the native column geometry.
        for (const Field &field : button.fields)
            if (std::any_of(field.parts.begin(), field.parts.end(), [this](const Part &part) {
                    const Match &match = *part.match;
                    return is_embark_point_cost(match.source) ||
                        (match.rule >= 0 && static_cast<size_t>(match.rule) < rules_.size() &&
                         rules_[static_cast<size_t>(match.rule)].numeric_template &&
                         rules_[static_cast<size_t>(match.rule)].source == "Dist: {d}");
                })) return true;
        return std::none_of(button.fields.begin(), button.fields.end(),
            [](const Field &field) { return !field.parts.empty(); });
    });
    if (buttons.empty()) {
        fortress_build_menu_geometry_ = {};
        return;
    }

    // Opening a child menu or scrolling another label into view must not
    // change any font. Use the same fixed-size, ellipsizing row layout as
    // inventory, item details and hover cards, with this control's own box.
    const int pixels = std::clamp(static_cast<int>(gps_->tile_pixel_y * config_.font_scale),
        1, gps_->tile_pixel_y);
    size_t captions = 0;
    std::set<std::pair<int, int>> columns;
    for (const Button &button : buttons) {
        for (const Field &field : button.fields) {
            if (field.parts.empty()) continue;
            // Material rows put All and None in one frame, separated by a
            // single native space. They are independent clickable actions,
            // not fragments of one caption to pack by translated ink width.
            if (field.parts.size() == 2 &&
                field.parts[0].match->source == "All" &&
                field.parts[1].match->source == "None") {
                for (const Part &part : field.parts)
                    layout_fortress_text_rows(renderer, {{part.match}}, part.first, part.last);
                captions += field.parts.size();
                continue;
            }
            // Name and type are drawn at the same native inset (PE 53.16:
            // 0x3bbae8 and 0x3bc077). Both retain that list-local margin;
            // unrelated build controls must not supply a different inset.
            const int first = field.first == button.text_left && !button.location_record
                ? button.left + inset : field.first;
            int right = button.right;
            // The middle row supplies the native column starts. Continuation
            // rows use those same boundaries without pulling their first
            // field back to the building-name column. Also reserve any
            // additional fields on this row, even when they are untranslated.
            for (const Field &other : button.fields)
                if ((other.y == button.y || other.y == field.y) &&
                    other.first > field.first)
                    right = std::min(right, other.first);
            // Recenter/inspect and other foreground artwork can be painted
            // over the same row shading. That artwork is not spare text width.
            for (int x = field.last; x < right; ++x) {
                for (int y = button.y - 1; y <= button.y + 1; ++y) {
                    if (native_foreground_picture_at(*gps_, x, y)) {
                        right = x;
                        break;
                    }
                }
            }
            if (first >= right || field.last > right) continue;
            columns.emplace(first, right);
            std::vector<Match *> parts;
            for (const Part &part : field.parts) parts.push_back(part.match);
            const std::string_view primary_source = !button.location_record && field.y == button.y &&
                field.first == button.text_left && parts.size() == 1
                ? std::string_view(parts.front()->source) : std::string_view{};
            layout_fortress_picture_caption(renderer, parts, first, right, primary_source);
            captions += parts.size();
        }
    }
    const std::array<int, 3> geometry{{static_cast<int>(buttons.size()),
        static_cast<int>(columns.size()), pixels}};
    if (fortress_build_menu_geometry_ != geometry) {
        log_line("INFO", "Activated fortress picture-button layout: buttons=" +
            std::to_string(buttons.size()) + "/" + std::to_string(native_button_count) +
            "; captions=" + std::to_string(captions) +
            "; columns=" + std::to_string(columns.size()) +
            "; fixed font=" + std::to_string(pixels) + "px");
        fortress_build_menu_geometry_ = geometry;
    }
}

void Overlay::layout_fortress_date(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    int top = -1, stocks_x = -1;
    for (const Match &population : prepared_matches_) {
        if ((population.source != "Pop" && population.source != "Population") ||
            population.y < 0 || population.y > 2) continue;
        // The three-row HUD button centers Stocks one row below Pop on
        // Native. Requiring equal rows silently disables the whole date card.
        for (const Match &stocks : prepared_matches_)
            if (stocks.source == "Stocks" &&
                (stocks.y == population.y || stocks.y == population.y + 1) &&
                stocks.x > population.x) {
                top = population.y;
                stocks_x = stocks.x;
            }
    }
    if (top < 0) return;
    // English identifiers only. Retain the dictionary's date, complete
    // season and formatted year targets, including TSV overrides.
    const auto is_date = [](std::string_view source) {
        size_t digits = 0;
        int day = 0;
        while (digits < source.size() && source[digits] >= '0' && source[digits] <= '9') {
            if (digits == 2) return false;
            day = day * 10 + source[digits++] - '0';
        }
        if (day < 1 || day > 28 || source.size() < digits + 4) return false;
        const auto ordinal = source.substr(digits, 2);
        if ((ordinal != "st" && ordinal != "nd" && ordinal != "rd" && ordinal != "th") ||
            source[digits + 2] != ' ') return false;
        for (std::string_view month : {"Granite", "Slate", "Felsite", "Hematite",
                "Malachite", "Galena", "Limestone", "Sandstone", "Timber", "Moonstone",
                "Opal", "Obsidian"})
            if (source.substr(digits + 3) == month) return true;
        return false;
    };
    const auto is_season = [](std::string_view source) {
        for (std::string_view prefix : {"early ", "mid-", "late "}) {
            if (!source.starts_with(prefix)) continue;
            const auto season = source.substr(prefix.size());
            return season == "spring" || season == "summer" ||
                season == "autumn" || season == "winter";
        }
        return false;
    };
    const auto is_year = [](std::string_view source) {
        return source.starts_with("year ") && source.size() > 5 &&
            std::all_of(source.begin() + 5, source.end(),
                [](char ch) { return ch >= '0' && ch <= '9'; });
    };
    for (Match &candidate : prepared_matches_) {
        if (candidate.y != top || candidate.x <= stocks_x || candidate.target.empty()) continue;
        const int left = candidate.x;
        std::vector<std::vector<Match *>> rows;
        int right = left;
        for (int y = top; y < top + 3; ++y) {
            auto row = fortress_text_row(left, y);
            if (row.empty()) break;
            const int end = row.back()->x + row.back()->length;
            std::string source;
            for (int x = left; x < end; ++x) source.push_back(visible_char_at(x, y));
            const bool expected = y == top ? is_date(source)
                : (y == top + 1 ? is_season(lower(source)) : is_year(lower(source)));
            if (!expected) break;
            right = std::max(right, end);
            rows.push_back(std::move(row));
        }
        if (rows.size() != 3) continue;
        // Chinese order is year, season, month/day. Move display rows only:
        // source ownership, glyph suppression and the date button stay put.
        // Set the final rows before the shared layout derives their clips;
        // clipping at the original rows hides the swapped date and year.
        for (size_t row = 0; row < rows.size(); ++row)
            for (Match *part : rows[row]) {
                part->layout_y = top + 2 - static_cast<int>(row);
                part->layout_pixel_y = 0;
            }
        layout_fortress_text_rows(renderer, rows, left, right);
        return;
    }
}
