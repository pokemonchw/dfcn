// The announcement popup uses markup word layout, not add_paragraph.
// Steam e9f40 / classic e9ed0 draws this queue's first complete string and
// its richbox tokens (ea17c / ea10c). Read the live owner even when it was
// constructed before capture began; no submission history is required.
    std::vector<Match> announcement_popup_matches;
    std::optional<SDL_Rect> announcement_popup_region;
    const auto mask_announcement_popup = [&](std::vector<std::string> &rows) {
        if (!announcement_popup_region) return;
        const auto &body = *announcement_popup_region;
        for (int y = body.y; y < body.y + body.h; ++y)
            std::fill_n(rows[y].begin() + body.x, body.w, ' ');
    };
    {
        if (const auto popup = native_announcement_popup(); popup && popup->width <= gps_->dimx) {
            const auto &words = popup->words;
            // Graphical map tiles can cover a popup glyph in the completed
            // composite without changing the popup's native word bytes.
            // Read its source from the current native layer; the live queue,
            // word coordinates and four frame corners still prove ownership.
            // Keep this recovery local to the popup, since ordinary page text
            // must continue to respect graphical occlusion.
            std::map<int, std::string> native_rows;
            const auto native_row = [&](int y) -> const std::string & {
                const auto [row, added] = native_rows.try_emplace(y,
                    static_cast<size_t>(gps_->dimx), ' ');
                if (added) {
                    for (int x = 0; x < gps_->dimx; ++x) {
                        bool top = false;
                        const auto *cell = cell_at(x, y, &top);
                        row->second[x] = cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
                    }
                }
                return row->second;
            };
            auto draws = captured_native_drawn_text_rows();
            auto upper_draws = captured_native_drawn_text_rows(true);
            draws.insert(draws.end(), std::make_move_iterator(upper_draws.begin()),
                std::make_move_iterator(upper_draws.end()));
            std::unordered_multimap<uintptr_t, const NativeDrawnTextRow *> by_address;
            for (const auto &draw : draws) {
                if (!draw.address || draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                        draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy)
                    continue;
                bool top = screen_override && screen_override == gps_->screen_top;
                if (!screen_override) cell_at(draw.x, draw.y, &top);
                const size_t at = static_cast<size_t>(draw.x) * gps_->dimy + draw.y;
                // Foreground/background views can contain copied cells from
                // both native layers. Their buffer pointer is not the draw's
                // identity; use the original grid recorded for this cell.
                const auto native = native_text_grid_origin(*gps_, at, top);
                if (draw.draw_grid == native.grid && draw.top_layer == native.top_layer)
                    by_address.emplace(draw.address, &draw);
            }
            std::vector<std::pair<int, int>> origins;
            const auto add_origin = [&](int x, int y) {
                const std::pair origin{x, y};
                if (std::find(origins.begin(), origins.end(), origin) == origins.end())
                    origins.push_back(origin);
            };
            for (const auto &word : words) {
                const auto [first, last] = by_address.equal_range(word.identity);
                for (auto at = first; at != last; ++at) {
                    const auto &draw = *at->second;
                    if (draw.source == word.source && !word.source.empty())
                        add_origin(draw.x - word.x, draw.y - word.y);
                }
            }
            // Present advances the draw registry even when native strings
            // are retained or only partly redrawn. Recover placement from
            // the LIVE markup's longest visible word at the renderer's exact
            // centered Y (e9f9c..e9fb1), then prove every word and frame below.
            // This also handles a popup constructed before capture began.
            const int native_top = popup->grid_height / 2 - (popup->max_y + 8) / 2;
            const int text_top = native_top + 2;
            const NativeHistoryToken *anchor = nullptr;
            for (const auto &word : words)
                if (text_top + word.y >= 0 && text_top + word.y < gps_->dimy &&
                        (!anchor || word.source.size() > anchor->source.size())) anchor = &word;
            if (anchor) {
                const auto &row = native_row(text_top + anchor->y);
                for (size_t at = row.find(anchor->source); at != std::string::npos;
                        at = row.find(anchor->source, at + 1))
                    add_origin(static_cast<int>(at) - anchor->x, text_top);
            }
            const NativePanelBorders borders(*gps_);
            for (const auto &origin : origins) {
                if (!announcement_popup_matches.empty()) break;
                const int left = origin.first, right = left + popup->width;
                if (left < 0 || right > gps_->dimx || origin.second != text_top) continue;
                const int frame_left = left - (popup->portrait ? 14 : 2);
                const int frame_right = frame_left + (popup->portrait ? 65 : 53);
                const int frame_bottom = native_top +
                    std::max(popup->max_y + 8, popup->portrait ? 10 : 0) - 1;
                if (frame_left < 0 || frame_right >= gps_->dimx || native_top < 0 ||
                        frame_bottom >= gps_->dimy ||
                        !borders.at(frame_left, native_top, 0) ||
                        !borders.at(frame_right, native_top, 2) ||
                        !borders.at(frame_left, frame_bottom, 6) ||
                        !borders.at(frame_right, frame_bottom, 8)) continue;
                bool intact = true;
                std::map<int, std::pair<int, int>> row_extents;
                for (const auto &word : words) {
                    const int x = left + word.x, y = origin.second + word.y;
                    if (word.source.empty() || x >= right || y < 0 || y >= gps_->dimy) continue;
                    const size_t exposed = std::min(word.source.size(), static_cast<size_t>(right - x));
                    if (native_row(y).compare(x, exposed, word.source, 0, exposed) != 0) {
                        intact = false;
                        break;
                    }
                    for (size_t i = 0; i < exposed; ++i) {
                        if (word.source[i] == ' ') continue;
                        bool top = false;
                        cell_at(x + static_cast<int>(i), y, &top);
                        if (screen_override && screen_override != (top ? gps_->screen_top : gps_->screen))
                            intact = false;
                    }
                    const auto [row, added] = row_extents.try_emplace(y, std::pair{x, x + static_cast<int>(exposed)});
                    if (!added) {
                        row->second.first = std::min(row->second.first, x);
                        row->second.second = std::max(row->second.second, x + static_cast<int>(exposed));
                    }
                }
                if (intact && !row_extents.empty()) {
                    std::vector<Match> rows;
                    const int first_y = std::max(0, origin.second);
                    const int last_y = std::min(gps_->dimy, origin.second + popup->max_y + 1);
                    for (int y = first_y; y < last_y; ++y) {
                        const auto extent = row_extents.find(y);
                        const int x = extent == row_extents.end() ? left : extent->second.first;
                        const int length = extent == row_extents.end() ? 0 : extent->second.second - x;
                        rows.push_back({x, y, length, kUiMessageRule, {}, native_row(y).substr(x, length)});
                    }
                    bool top = false;
                    const auto &first = row_extents.begin()->second;
                    const auto *cell = cell_at(first.first, row_extents.begin()->first, &top);
                    const int foreground = cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
                    const auto complete = native_announcement_display_source(popup->source);
                    // Markup has already mapped its palette to RGB. The
                    // popup sets use_old_16_colors=0 and draws these bytes
                    // directly. Preserve them across paragraph reflow.
                    std::vector<int> source_colors(complete.size(), foreground);
                    size_t source_at = 0;
                    bool same_source = true;
                    for (const auto &word : words) {
                        const int color = word.color;
                        for (const unsigned char ch : word.source) {
                            if (native_prose_space(ch)) continue;
                            while (source_at < complete.size() && native_prose_space(
                                    static_cast<unsigned char>(complete[source_at])))
                                source_colors[source_at++] = color;
                            if (source_at == complete.size() ||
                                    static_cast<unsigned char>(complete[source_at]) != ch) {
                                same_source = false;
                                break;
                            }
                            source_colors[source_at++] = color;
                        }
                        if (!same_source) break;
                    }
                    while (source_at < complete.size() && native_prose_space(
                            static_cast<unsigned char>(complete[source_at]))) ++source_at;
                    std::vector<int> colors;
                    const auto target = same_source && source_at == complete.size()
                        ? translate_complete_announcement(complete, source_colors, colors)
                        : std::optional<std::string>{};
                    std::optional<NativeParagraphViewport> viewport;
                    if (first_y != origin.second || last_y != origin.second + popup->max_y + 1)
                        viewport = NativeParagraphViewport{first_y - origin.second, popup->max_y + 1};
                    // Native body ends above the three-row confirmation
                    // button. Preserve that real viewport independently of
                    // how many rows the English words happen to occupy.
                    const int body_bottom = frame_bottom - 3;
                    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
                    const int pixel_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
                    const int pixel_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
                    const SDL_Rect body{left, first_y, popup->width, body_bottom - first_y};
                    for (auto &row : rows) {
                        row.native_announcement_popup = true;
                        row.layout_native_clip = SDL_Rect{pixel_x + left * tile_w,
                            pixel_y + first_y * tile_h, body.w * tile_w, body.h * tile_h};
                    }
                    // Clear the complete flat text field before repainting,
                    // including any retained Chinese from a prior layout.
                    rows.front().graphical_clear_x = body.x;
                    rows.front().graphical_clear_y = body.y;
                    rows.front().graphical_clear_width = body.w;
                    rows.front().graphical_clear_height = body.h;
                    rows.front().graphical_clear_flat_background = true;
                    if (target && append_bounded_paragraph(std::move(rows), *target,
                            screen_rows, announcement_popup_matches, only_y, right, right,
                            colors, false, left, viewport, {}, popup->max_y + 1)) {
                        announcement_popup_region = body;
                        mask_announcement_popup(screen_rows);
                    }
                }
            }
        }
    }
