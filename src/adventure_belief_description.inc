// A retained background tooltip can redraw its cached rows without another
// paragraph call. Its own native row writer and a complete current frame
// recover every deity/religion production without rebuilding the game's cache.
        const auto belief_base = native_history_profile_base();
        const auto belief_writer = native_reference_address(belief_base,
#ifdef _WIN32
            0x62d711
#else
            // setupadventurest draws the +0x1330 description cache built by
            // 0x10a6520; its religion producer also fills the retained IDs.
            0xd1a7cb
#endif
        );
        const auto &belief_cache = adventure_belief_cache;
        const auto belief_draws = belief_cache ? captured_native_drawn_text_rows()
            : std::vector<NativeDrawnTextRow>{};
        const NativePanelBorders belief_borders(*gps_);
        std::vector<SDL_Rect> belief_panels;
        const auto belief_cache_row = [&](const NativeDrawnTextRow &draw) {
            return belief_cache ? std::find_if(belief_cache->rows.begin(), belief_cache->rows.end(),
                [&](const auto &row) { return row.address == draw.address && row.source == draw.source; })
                : std::vector<NativeAdventureBeliefCacheRow>::const_iterator{};
        };
        const auto belief_draw_is_current = [&](const NativeDrawnTextRow &draw) {
            if (!belief_cache || !belief_writer || draw.native_caller != belief_writer ||
                    !draw.address || !draw.draw_grid ||
                    draw.draw_grid != gps_->screen || draw.draw_dimx != gps_->dimx ||
                    draw.draw_dimy != gps_->dimy || draw.x < 0 || draw.y < 0 ||
                    draw.x >= gps_->dimx || draw.y >= gps_->dimy || draw.source.empty() ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x) ||
                    belief_cache_row(draw) == belief_cache->rows.end()) return false;
            // The retained row loop calls base addst, even when other UI uses
            // screen_top. Read its actual bytes: earlier phrase matches have
            // already erased portions of screen_rows, and graphical copy
            // bookkeeping can hide these logical bytes during Present.
            for (size_t i = 0; i < draw.source.size(); ++i) {
                const size_t tile = static_cast<size_t>(draw.x + static_cast<int>(i)) *
                    gps_->dimy + draw.y;
                const unsigned char actual = draw.draw_grid[tile * 8];
                if ((actual ? actual : ' ') !=
                        static_cast<unsigned char>(draw.source[i])) return false;
            }
            return true;
        };
        constexpr uint32_t belief_upper = 1u << 3, belief_lower = 1u << 4;
        const auto belief_row_half = [&](const NativeTextCardRow &row) {
            uint32_t half = UINT32_MAX;
            for (size_t i = 0; i < row.source.size(); ++i) {
                if (row.source[i] == ' ') continue;
                bool top = false;
                cell_at(row.x + static_cast<int>(i), row.y, &top);
                const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                const uint32_t current = flags
                    ? flags[static_cast<size_t>(row.x + static_cast<int>(i)) * gps_->dimy + row.y] &
                        (belief_upper | belief_lower) : 0;
                if (current == (belief_upper | belief_lower) ||
                    (half != UINT32_MAX && half != current)) return UINT32_MAX;
                half = current;
            }
            return half;
        };
        for (const auto &anchor : belief_draws) {
            if (!belief_draw_is_current(anchor)) continue;
            const int cache_top = anchor.y - static_cast<int>(
                belief_cache_row(anchor) - belief_cache->rows.begin());
            // This strict reader requires all four current sides. A clipped
            // card or neighbouring control cannot lend missing source text.
            const auto panel = native_panel_interior_with_occluder(belief_borders, *gps_,
                SDL_Rect{anchor.x, anchor.y, 1, 1});
            if (!panel || cache_top != panel->y || std::any_of(belief_panels.begin(), belief_panels.end(),
                    [&](const SDL_Rect &other) {
                        return other.x == panel->x && other.y == panel->y &&
                            other.w == panel->w && other.h == panel->h;
                    })) continue;
            belief_panels.push_back(*panel);
            const auto card = capture_panel_text_card(*panel);
            if (!card) continue;
            std::vector<Match> rows, duplicates;
            bool intact = true;
            // A complete cache may extend below the native clip. Every row
            // that the renderer did draw must still be present; blank holes
            // in another widget cannot stand in for those intended lines.
            for (size_t line = 0; line < belief_cache->rows.size() &&
                    cache_top + static_cast<int>(line) < panel->y + panel->h; ++line) {
                const auto &cached = belief_cache->rows[line];
                if (trim_view(cached.source).empty()) continue;
                if (std::none_of(belief_draws.begin(), belief_draws.end(), [&](const auto &draw) {
                        return draw.x == anchor.x && draw.y == cache_top + static_cast<int>(line) &&
                            draw.draw_epoch == anchor.draw_epoch && draw.address == cached.address &&
                            draw.source == cached.source && belief_draw_is_current(draw);
                    })) { intact = false; break; }
            }
            if (!intact) continue;
            for (size_t line = 0; line < card->rows.size(); ++line) {
                const auto &native = card->rows[line];
                const uint32_t half = belief_row_half(native);
                // addst can write both physical halves in one call. Its
                // source address then belongs to the upper draw, while the
                // exact bytes and complementary flags prove the lower copy.
                const int draw_y = half == belief_lower && line > 0 &&
                    card->rows[line - 1].y + 1 == native.y &&
                    card->rows[line - 1].x == native.x &&
                    card->rows[line - 1].source == native.source &&
                    belief_row_half(card->rows[line - 1]) == belief_upper
                    ? card->rows[line - 1].y : native.y;
                if (std::none_of(belief_draws.begin(), belief_draws.end(),
                        [&](const NativeDrawnTextRow &draw) {
                            const auto ink = trim_view(draw.source);
                            return belief_draw_is_current(draw) && draw.y == draw_y &&
                                draw.x == anchor.x &&
                                draw.draw_epoch == anchor.draw_epoch &&
                                draw.y == cache_top + static_cast<int>(
                                    belief_cache_row(draw) - belief_cache->rows.begin()) &&
                                draw.x + static_cast<int>(ink.data() - draw.source.data()) == native.x &&
                                ink == native.source;
                        })) {
                    intact = false;
                    break;
                }
                for (size_t i = 0; i < native.source.size(); ++i) {
                    if (native.source[i] == ' ') continue;
                    bool top = false;
                    const auto *cell = cell_at(native.x + static_cast<int>(i), native.y, &top);
                    const size_t tile = static_cast<size_t>(native.x + static_cast<int>(i)) *
                        gps_->dimy + native.y;
                    // Each physical font half must remain visible on the
                    // same base layer as its proven cached addst source.
                    if (!cell || top || gps_->screen[tile * 8] !=
                            static_cast<unsigned char>(native.source[i]) ||
                            (screen_override && screen_override != gps_->screen)) intact = false;
                }
                if (!intact) break;
                Match row{native.x, native.y, static_cast<int>(native.source.size()),
                    kAdventureBackgroundDescriptionRule, {}, native.source};
                row.layout_foreground_rgb = native.foregrounds.front();
                if (half == belief_lower && line > 0 && !rows.empty() &&
                    card->rows[line - 1].y + 1 == native.y &&
                    card->rows[line - 1].x == native.x &&
                    card->rows[line - 1].source == native.source &&
                    belief_row_half(card->rows[line - 1]) == belief_upper) {
                    rows.back().native_split_text = true;
                    rows.back().native_split_top_y = rows.back().y;
                    row.native_split_text = row.native_split_duplicate = true;
                    row.native_split_top_y = rows.back().y;
                    duplicates.push_back(std::move(row));
                    continue;
                }
                if (half == belief_lower || half == UINT32_MAX ||
                    (line > 0 && belief_row_half(card->rows[line - 1]) == belief_upper &&
                        !rows.back().native_split_text)) {
                    intact = false;
                    break;
                }
                rows.push_back(std::move(row));
            }
            if (!intact || rows.empty() ||
                (belief_row_half(card->rows.back()) == belief_upper && !rows.back().native_split_text))
                continue;
            std::string target;
            for (const auto &paragraph : belief_cache->paragraphs) {
                // The producer can retain a bare name/creature or an
                // unpunctuated religion when its entity/deity is missing.
                // The selected character sheet owns the complete cache,
                // including rows clipped by the screen's native bottom.
                // Its dedicated grammar accounts for every cached word.
                const auto translated = translate_adventure_belief_source(paragraph);
                if (!translated) { intact = false; break; }
                if (!target.empty()) target += "\n\n";
                target += *translated;
            }
            if (!intact || target.empty()) continue;
            const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
            const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
            const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
            const SDL_Rect clip{origin_x + panel->x * tile_w, origin_y + panel->y * tile_h,
                panel->w * tile_w, panel->h * tile_h};
            for (Match &row : rows) row.layout_native_clip = clip;
            std::vector<Match> replacements;
            const int left = rows.front().x, right = panel->x + panel->w;
            // One clear precedes the complete Chinese document, including
            // any English previously missed by immediate glyph suppression.
            // Its strict interior clip preserves all four native frame sides.
            rows.front().graphical_clear_x = left;
            rows.front().graphical_clear_y = rows.front().y;
            rows.front().graphical_clear_width = right - left;
            rows.front().graphical_clear_height = card->rows.back().y - rows.front().y + 1;
            if (!append_bounded_paragraph(std::move(rows), target, screen_rows, replacements,
                    only_y, right, right, {}, false, left)) continue;
            for (Match &row : duplicates) {
                std::fill_n(screen_rows[row.y].begin() + row.x, row.length, ' ');
                if (only_y < 0 || row.y == only_y) replacements.push_back(std::move(row));
            }
            // Only the complete successful card supersedes earlier spans,
            // including translated continuation rows without native bytes.
            std::erase_if(result, [&](const Match &match) {
                return std::any_of(card->rows.begin(), card->rows.end(), [&](const auto &row) {
                        return match.y == row.y && match.x < row.x + static_cast<int>(row.source.size()) &&
                            row.x < match.x + match.length;
                    }) || (match.length == 0 && match.layout_reflowed_paragraph &&
                        match.layout_y >= panel->y && match.layout_y < panel->y + panel->h &&
                        match.layout_x < right && match.layout_x + match.layout_length > panel->x);
            });
            result.insert(result.end(), std::make_move_iterator(replacements.begin()),
                std::make_move_iterator(replacements.end()));
            for (const auto &row : card->rows)
                std::fill_n(owned[row.y].begin() + row.x, row.source.size(), true);
        }
