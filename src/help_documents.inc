// Included inside find_matches after append_setup_paragraph is available.
// Scope the catalog to connected native help frames and catalogued help modals.
// No resolution-specific line dictionary, popup hiding or tutorial skipping.
    if (!help_trie_.empty() && face_ && gps_->tile_pixel_x > 0 && gps_->tile_pixel_y > 0) {
        // A help frame and its text need not occupy the same native layer.
        // In classic mode add_top_lower_tile writes the border to screen,
        // while top_addst writes prose to screen_top. Build ONE current
        // logical document for both early glyph suppression and final draw;
        // each mask projects its exact source bytes onto the actual layer.
        // This also avoids recovering a separate raw-layer version at Present.
        std::vector<std::string> help_rows(gps_->dimy, std::string(gps_->dimx, ' '));
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                help_rows[y][x] = cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
            }
        // Raw help recovery must respect the earlier typed background writer,
        // just as it respects the announcement document below. Re-reading its
        // original glyphs must not send a religion through the help grammar.
        mask_adventure_background_rows(help_rows);
        // Okay modals also admit complete quoted divine guidance. This raw
        // read must keep the live markup popup's prior ownership; otherwise
        // its help fragments produce a second, differently inset paragraph.
        if (!NativeHelpForegroundScope::active) mask_announcement_popup(help_rows);
        // The dedicated arrival reader already owns these native runs. This
        // raw-grid recovery must not recreate the same modal as a flat help
        // paragraph after the announcement reader has yielded ownership.
        for (const Match &match : result) {
            if (match.rule != kEmbarkIntroductionRule || match.length <= 0 ||
                    match.y < 0 || match.y >= gps_->dimy || match.x < 0 ||
                    match.x + match.length > gps_->dimx) continue;
            std::fill_n(help_rows[match.y].begin() + match.x, match.length, ' ');
        }
        const auto claim_source = [&](int x, int y, int length) {
            std::fill_n(help_rows[y].begin() + x, length, ' ');
            std::fill_n(screen_rows[y].begin() + x, length, ' ');
        };
        const auto preserve_source = [&](std::vector<Match> rows, std::string source) {
            if (rows.empty()) return;
            auto preserved = preserve_native_translation(source, "help-paragraph");
            preserved.owner = "native-help-document";
            const auto metadata = std::make_shared<const dfcn::TranslationResult>(std::move(preserved));
            rows.front().native_help_review_source = std::move(source);
            for (Match &row : rows) {
                row.translation_result = metadata;
                row.native_help_source_only = true;
                row.rule = kHelpDocumentRule;
                // This changes matching scratch space only. Source-only
                // matches never enter suppression or translated drawing.
                claim_source(row.x, row.y, row.length);
                untranslated_help_rows.push_back(std::move(row));
            }
        };
        const auto field_foregrounds = [&](int x, int y, int length) {
            std::vector<int> colors;
            colors.reserve(static_cast<size_t>(length));
            for (int i = 0; i < length; ++i) {
                bool top = false;
                const auto *cell = cell_at(x + i, y, &top);
                colors.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3]
                    : (gps_->uccolor[7][0] << 16) | (gps_->uccolor[7][1] << 8) |
                        gps_->uccolor[7][2]);
            }
            return colors;
        };
        const auto settings = native_ui_settings();
        const auto tile_is = [&](int x, int y, int32_t skin) {
            // HELP_BORDER (and the help index's HOVER_RECTANGLE) is a live
            // skin, not always a texture ID. graphics_classic.txt declares
            // ASCII_RECTANGLE skins whose packed CP437/palette values are
            // written into screen cells. Share the native skin reader used
            // by other controls instead of missing the entire document and
            // letting generic word rules translate isolated prose fragments.
            return native_ui_skin_at(*gps_, x, y, skin, settings && settings->classic);
        };
        const auto skin_at = [&](int x, int y, int sx, int sy) {
            return tile_is(x, y, native_texture_help_border(*gps_)[sx][sy]);
        };
        const auto &corner = native_texture_help_corner(*gps_);
        const int corner_width = static_cast<int>(std::size(corner));
        const int corner_height = static_cast<int>(std::size(corner[0]));
        const auto help_corner_at = [&](int left, int top) {
            if (left < 0 || top < 0 || left + corner_width > gps_->dimx ||
                top + corner_height > gps_->dimy) return false;
            for (int dx = 0; dx < corner_width; ++dx)
                for (int dy = 0; dy < corner_height; ++dy)
                    if (!tile_is(left + dx, top + dy, corner[dx][dy])) return false;
            return true;
        };
        // The directory renderer supplies complete caption slots. Consume
        // each row once, including unknown captions, before any word matcher
        // can turn an English label's width into its translated display box.
        const auto append_index_row = [&](int left, int right, int y,
                int display_left, int display_right, bool centered, bool owned_slot) {
            left = std::max(0, left);
            right = std::min(gps_->dimx, right);
            if (y < 0 || y >= gps_->dimy || left >= right ||
                    display_left < 0 || display_right > gps_->dimx ||
                    display_left >= display_right) return;
            std::string band = help_rows[y].substr(left, right - left);
            if (owned_slot && settings && settings->classic) {
                const int32_t (*skins[])[3] = {
                    native_texture_button_rectangle(*gps_),
                    native_texture_button_rectangle_selected(*gps_),
                    native_texture_button_rectangle_light(*gps_),
                    native_texture_button_rectangle_dark(*gps_),
                };
                // A status replaces part of the native button's lower rail.
                // Empty classic rails remain skin, rather than prose.
                for (int at = 0; at < right - left; ++at)
                    for (const auto *skin : skins)
                        for (int sx = 0; sx < 3; ++sx)
                            for (int sy = 0; sy < 3; ++sy)
                                if (native_ui_skin_at(*gps_, left + at, y,
                                        skin[sx][sy], true)) band[at] = ' ';
            }
            const auto source = trim_view(band);
            if (source.empty()) {
                if (owned_slot) claim_source(left, y, right - left);
                return;
            }
            const int x = left + static_cast<int>(source.data() - band.data());
            std::vector<int> colors;
            auto translated = translate_help_paragraph_result(source,
                field_foregrounds(x, y, static_cast<int>(source.size())), colors);
            Match match{x, y, static_cast<int>(source.size()),
                kHelpIndexRule, {}, std::string(source)};
            match.layout_x = display_left;
            match.layout_length = display_right - display_left;
            match.layout_clip_right = display_right;
            match.layout_left = !centered;
            if (translated.usable() && contains_cjk_utf8(translated.target)) {
                match.target = translated.target;
                match.layout_glyph_foreground_rgb = std::move(colors);
                match.translation_result =
                    std::make_shared<const dfcn::TranslationResult>(std::move(translated));
                if (only_y < 0 || only_y == y) result.push_back(std::move(match));
            } else {
                auto preserved = preserve_native_translation(source, "help-index");
                preserved.owner = "native-help-index";
                match.translation_result =
                    std::make_shared<const dfcn::TranslationResult>(std::move(preserved));
                match.native_help_source_only = true;
                match.native_help_review_source = source;
                untranslated_help_rows.push_back(std::move(match));
            }
            if (owned_slot) claim_source(left, y, right - left);
            else claim_source(x, y, static_cast<int>(source.size()));
        };
        const bool native_index = NativeHelpForegroundScope::active &&
            !g_native_help_layer.index_panels.empty();
        if (native_index) {
            for (const auto &panel : g_native_help_layer.index_panels) {
                const int panel_left = panel.frame.x + 1;
                const int panel_right = panel.frame.x + panel.frame.w - 1;
                append_index_row(panel_left, panel_right, panel.heading_y,
                    panel_left, panel_right, true, true);
                for (int entry = 0; entry < panel.visible_entries; ++entry) {
                    const int y = panel.first_caption_y + entry * 3;
                    append_index_row(panel.caption_left - 1, panel.caption_right, y,
                        panel.caption_left, panel.caption_right, false, true);
                    append_index_row(panel.caption_left - 1, panel.caption_right, y + 1,
                        panel.caption_left, panel.caption_right, false, true);
                }
            }
        }
        // Older native owners still prove the two connected hover frames.
        // Include their headings here too: the help layer has no generic
        // dictionary pass to recover them after its document pass finishes.
        for (int y = 0; !native_index && y < gps_->dimy; ++y) {
            const size_t first = help_rows[y].find("Interactive tutorial");
            const size_t second = help_rows[y].find("Information and guides");
            if (first == std::string::npos || second == std::string::npos || first >= second)
                continue;
            const auto &skin = native_texture_hover_rectangle(*gps_);
            for (const auto &[at, length] : {std::pair{first, size_t{20}},
                                           std::pair{second, size_t{22}}}) {
                int left = static_cast<int>(at) - 1;
                int right = static_cast<int>(at + length);
                while (left >= 0 && !tile_is(left, y, skin[0][1])) --left;
                while (right < gps_->dimx && !tile_is(right, y, skin[2][1])) ++right;
                if (left < 0 || right >= gps_->dimx) continue;
                int bottom = y + 1;
                while (bottom < gps_->dimy && tile_is(left, bottom, skin[0][1]) &&
                       tile_is(right, bottom, skin[2][1])) ++bottom;
                if (bottom >= gps_->dimy || !tile_is(left, bottom, skin[0][2]) ||
                    !tile_is(right, bottom, skin[2][2])) continue;
                append_index_row(static_cast<int>(at), static_cast<int>(at + length), y,
                    left + 1, right, true, false);
                for (int row_y = y + 1; row_y < bottom; ++row_y) {
                    const std::string band = help_rows[row_y].substr(left + 1, right - left - 1);
                    for (const auto &field : split_text_fields(band)) {
                        const int x = left + 1 + field.start;
                        std::vector<int> colors;
                        const auto target = translate_help_paragraph(field.text,
                            field_foregrounds(x, row_y, field.end - field.start), colors);
                        if (!target || !contains_cjk_utf8(*target)) {
                            preserve_source({Match{x, row_y, field.end - field.start,
                                kHelpDocumentRule, {}, field.text}}, field.text);
                            continue;
                        }
                        Match match{x, row_y, field.end - field.start,
                            kHelpIndexRule, *target, field.text};
                        match.layout_glyph_foreground_rgb = std::move(colors);
                        match.layout_x = x;
                        match.layout_length = right - x;
                        match.layout_left = true;
                        claim_source(x, row_y, match.length);
                        if (only_y < 0 || only_y == row_y) result.push_back(std::move(match));
                    }
                }
            }
            break;
        }
        std::vector<SDL_Rect> help_panels;
        const auto append_help_panel = [&](const SDL_Rect &panel) {
            if (panel.x < 0 || panel.y < 0 || panel.w <= 0 || panel.h <= 0 ||
                    panel.x + panel.w > gps_->dimx || panel.y + panel.h > gps_->dimy ||
                    std::any_of(help_panels.begin(), help_panels.end(),
                        [&](const SDL_Rect &known) {
                            return known.x == panel.x && known.y == panel.y &&
                                known.w == panel.w && known.h == panel.h;
                        })) return;
            help_panels.push_back(panel);
        };
        if (NativeHelpForegroundScope::active && g_native_help_layer.index_intro) {
            // The directory's opening prose uses HOVER_RECTANGLE rather
            // than HELP_BORDER. Its native owner supplies the complete frame;
            // the ordinary paragraph pass below retains all wrapped rows.
            const auto &frame = *g_native_help_layer.index_intro;
            append_help_panel({frame.x + 1, frame.y + 1, frame.w - 2, frame.h - 2});
        }
        const auto collapsed_panels = native_collapsed_help_panels(*gps_);
        for (const auto &panel : collapsed_panels)
            append_help_panel({panel.frame.x + 1, panel.frame.y + 1,
                panel.frame.w - 2, panel.frame.h - 2});
        for (int bottom = 2; bottom < gps_->dimy; ++bottom) {
            for (int left = 0; left + 8 < gps_->dimx; ++left) {
                if (!skin_at(left, bottom, 0, 2)) continue;
                int right = left + 1;
                while (right < gps_->dimx && skin_at(right, bottom, 1, 2)) ++right;
                if (right < left + 8 || !skin_at(right, bottom, 2, 2)) continue;
                // The help overview has a plain HELP_BORDER rectangle,
                // without the HELP_CORNER artwork used by tutorial pages.
                // Prove all four connected edges before handing its wrapped
                // paragraphs to the same catalog, colors and bounded fitter.
                int plain_top = bottom - 1;
                while (plain_top >= 0 && skin_at(left, plain_top, 0, 1) &&
                        skin_at(right, plain_top, 2, 1)) --plain_top;
                bool plain_frame = plain_top >= 0 && plain_top + 1 < bottom &&
                    skin_at(left, plain_top, 0, 0) && skin_at(right, plain_top, 2, 0);
                for (int x = left + 1; plain_frame && x < right; ++x)
                    plain_frame = skin_at(x, plain_top, 1, 0);
                if (plain_frame) {
                    // Classic skins can share the same CP437/palette bytes
                    // (notably pinned adventure log cards). Require the first
                    // complete paragraph to belong to the help catalog before
                    // owning any text, including untranslated later paragraphs.
                    std::string introduction;
                    for (int y = plain_top + 1; y < bottom; ++y) {
                        const std::string_view band(help_rows[y].data() + left + 1,
                            static_cast<size_t>(right - left - 1));
                        const std::string_view line = trim_view(band);
                        if (line.empty()) {
                            if (!introduction.empty()) break;
                            continue;
                        }
                        if (!introduction.empty()) introduction.push_back(' ');
                        introduction.append(line);
                    }
                    std::vector<int> colors;
                    const auto known = translate_help_paragraph(introduction,
                        std::vector<int>(introduction.size(), 0), colors);
                    if (known && contains_cjk_utf8(*known)) {
                        append_help_panel({left + 1, plain_top + 1,
                            right - left - 1, bottom - plain_top - 1});
                        left = right;
                        continue;
                    }
                }
                // Close/hide controls replace the upper-right border on
                // dismissible help pages. The first interruption of that
                // side is therefore NOT necessarily the panel's top. Bind
                // the origin to the complete HELP_CORNER instead, using the
                // same reader that separates the heading from its artwork.
                int top = bottom - corner_height;
                while (top >= 0 && !help_corner_at(left, top)) --top;
                if (top < 0) continue;
                // Both sides below the corner must connect it to this exact
                // bottom edge, not to another help frame in the same column.
                bool sides = true;
                for (int y = top + corner_height; y < bottom; ++y)
                    if (!skin_at(left, y, 0, 1) || !skin_at(right, y, 2, 1)) sides = false;
                if (!sides) continue;
                append_help_panel({left + 1, top + 1, right - left - 1, bottom - top - 1});
                left = right;
            }
        }
        // World creation's welcome and adventure introductions use the
        // ordinary modal border, not the tutorial's help skin. Require a
        // closed panel, its native Okay button and a catalogued first
        // paragraph before owning prose. That paragraph may wrap across rows.
        // The underlying world settings (or another arbitrary Okay dialog)
        // must not become help text. No title translations or wrap widths
        // are duplicated here; both remain owned by the shared catalog/layout.
        const NativePanelBorders borders(*gps_);
        for (int y = 1; y + 1 < gps_->dimy; ++y) {
            for (size_t at = help_rows[y].find("Okay"); at != std::string::npos;
                    at = help_rows[y].find("Okay", at + 1)) {
                const int x = static_cast<int>(at);
                if (!has_word_boundaries(help_rows[y], at, at + 4)) continue;
                const auto button = native_button_text_rect(*gps_, x, x + 4, y);
                if (!button) continue;
                // A classic button has real CP437 sides and corners, just
                // like its enclosing modal. Starting at the caption returns
                // the button's one-row interior instead of the document.
                // Enclose the WHOLE verified widget, including both caps;
                // texture and character skins then use the same panel scan.
                const auto panel = native_panel_interior(borders, *gps_,
                    button->x - 1, button->x + button->w + 1, button->y + 1);
                if (!panel || button->y < panel->y ||
                    button->y + button->h > panel->y + panel->h ||
                    std::any_of(help_panels.begin(), help_panels.end(),
                        [&](const SDL_Rect &known) {
                            return known.x == panel->x && known.y == panel->y &&
                                known.w == panel->w && known.h == panel->h;
                        })) continue;
                std::string introduction;
                for (int title_y = panel->y; title_y < button->y; ++title_y) {
                    const std::string_view band(help_rows[title_y].data() + panel->x,
                        static_cast<size_t>(panel->w));
                    const std::string_view title = trim_view(band);
                    if (title.empty()) {
                        if (!introduction.empty()) break;
                        continue;
                    }
                    if (!introduction.empty()) introduction.push_back(' ');
                    introduction.append(title);
                }
                std::vector<int> colors;
                const auto known = translate_help_paragraph(introduction,
                    std::vector<int>(introduction.size(), 0), colors);
                if (known && contains_cjk_utf8(*known)) append_help_panel(*panel);
            }
        }
        // The help skin overwrites background text in the composed grid.
        // Recover only actual current native draws with intact exposed bytes,
        // then translate the complete caption before generic word matching.
        // The hidden suffix is evidence from the draw, never a catalog guess.
        if (!help_panels.empty() && !NativeHelpForegroundScope::active) {
            const std::array background_draws{captured_native_drawn_text_view(false),
                captured_native_drawn_text_view(true)};
            for (const SDL_Rect &panel : help_panels) {
                const SDL_Rect frame{panel.x - 1, panel.y - 1, panel.w + 2, panel.h + 2};
                for (size_t layer = 0; layer < background_draws.size(); ++layer) {
                    // The shared graphical read view retains the complete
                    // base layer and its ordinary widget/paragraph layout.
                    // Recover fragments only for overwritten top-layer text;
                    // otherwise this fallback would replace the full match
                    // with the old clipped-source layout during composition.
                    if (layer == 0 && NativeUiReadScope::active && settings &&
                        !settings->classic) continue;
                    // A wrapped description is one translation, even when
                    // the help card covers only the end of its first line.
                    // Join rows by the native wrap record and current draws,
                    // never by completing a dictionary prefix.
                    std::map<std::pair<int, int>, const NativeDrawnTextRow *> positions;
                    std::unordered_multimap<std::string, const NativeDrawnTextRow *> starts;
                    for (const auto &row : background_draws[layer]) {
                        positions[{row.x, row.y}] = &row;
                        starts.emplace(row.source, &row);
                    }
                    std::vector<std::pair<NativeParagraphCapture, const NativeDrawnTextRow *>> paragraphs;
                    {
                        std::lock_guard<std::mutex> lock(g_native_paragraph_mutex);
                        for (const auto &capture : g_native_paragraph_captures) {
                            if (capture.wrapped_lines.size() < 2 ||
                                capture.wrapped_lines.size() > static_cast<size_t>(gps_->dimy) ||
                                capture.paragraph_width <= 0) continue;
                            const auto [first, last] = starts.equal_range(capture.wrapped_lines.front());
                            for (auto it = first; it != last; ++it)
                                paragraphs.emplace_back(capture, it->second);
                        }
                    }
                    for (const auto &[capture, first] : paragraphs) {
                        if (first->x < 0 || first->y < 0 ||
                            capture.paragraph_width > gps_->dimx - first->x ||
                            capture.wrapped_lines.size() > static_cast<size_t>(gps_->dimy - first->y)) continue;
                        const int right = first->x + capture.paragraph_width;
                        bool intact = true, covered = false;
                        int foreground = -1;
                        std::vector<Match> complete, exposed;
                        for (size_t line = 0; intact && line < capture.wrapped_lines.size(); ++line) {
                            const int y = first->y + static_cast<int>(line);
                            const auto &source = capture.wrapped_lines[line];
                            const auto at = positions.find({first->x, y});
                            if (at == positions.end() || at->second->source != source ||
                                source.size() > static_cast<size_t>(capture.paragraph_width) ||
                                (capture.row_addresses.size() == capture.wrapped_lines.size() &&
                                 at->second->address != capture.row_addresses[line])) { intact = false; break; }
                            const auto ink = trim_view(source);
                            if (ink.empty()) { intact = false; break; }
                            const int x = first->x + static_cast<int>(ink.data() - source.data());
                            const int end = x + static_cast<int>(ink.size());
                            complete.push_back({x, y, end - x, kUiMessageRule, {}, std::string(ink)});
                            const bool crossing = y >= frame.y && y < frame.y + frame.h &&
                                x < frame.x + frame.w && end > frame.x;
                            covered = covered || crossing;
                            const auto expose = [&](int begin, int stop) {
                                if (begin >= stop) return;
                                for (int column = begin; column < stop; ++column) {
                                    bool top = false;
                                    const auto *cell = cell_at(column, y, &top);
                                    const char expected = source[column - first->x];
                                    if (!cell || (expected != ' ' && top != (layer != 0)) ||
                                        (cell[0] ? static_cast<char>(cell[0]) : ' ') != expected ||
                                        screen_rows[y][column] != expected ||
                                        (screen_override && screen_override !=
                                            (layer ? gps_->screen_top : gps_->screen))) { intact = false; return; }
                                    if (foreground < 0 && expected != ' ')
                                        foreground = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                                }
                                exposed.push_back({begin, y, stop - begin, kUiMessageRule, {},
                                    source.substr(begin - first->x, stop - begin)});
                            };
                            if (crossing) {
                                expose(x, std::min(end, frame.x));
                                expose(std::max(x, frame.x + frame.w), end);
                            } else expose(x, end);
                        }
                        if (!intact || !covered || foreground < 0 || exposed.empty()) continue;
                        std::vector<int> colors;
                        const auto paragraph_result = translate_help_paragraph_result(capture.source,
                            std::vector<int>(capture.source.size(), foreground), colors, true);
                        if (!paragraph_result.usable() || !contains_cjk_utf8(paragraph_result.target)) continue;
                        const auto metadata = std::make_shared<const dfcn::TranslationResult>(paragraph_result);
                        auto scratch = screen_rows;
                        std::vector<Match> layout, untranslated;
                        if (!append_ui_message_paragraph(scratch, layout, untranslated, -1,
                                complete, right, paragraph_result.target, colors, std::nullopt,
                                capture.source, -1, false, 0, frame)) continue;
                        // Output rows keep the full paragraph's geometry.
                        // Only exposed source spans may suppress or clear ink.
                        for (auto &row : layout) {
                            row.translation_result = metadata;
                            row.x = first->x;
                            row.length = 0;
                            row.source.clear();
                            row.native_hover_background = true;
                            row.native_help_occluder = frame;
                        }
                        for (auto &span : exposed) {
                            span.translation_result = metadata;
                            span.native_hover_background = true;
                            span.native_help_occluder = frame;
                            span.graphical_clear_x = span.x;
                            span.graphical_clear_y = span.y;
                            span.graphical_clear_width = span.length;
                            span.graphical_clear_height = 1;
                            std::fill_n(screen_rows[span.y].begin() + span.x, span.length, ' ');
                            if (only_y < 0 || only_y == span.y) result.push_back(std::move(span));
                        }
                        for (auto &row : layout)
                            if (only_y < 0 || only_y == row.y) result.push_back(std::move(row));
                    }
                    for (const auto &draw : background_draws[layer]) {
                        if (draw.x < 0 || draw.x >= gps_->dimx || draw.source.empty() ||
                            draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x) ||
                            draw.y < frame.y || draw.y >= frame.y + frame.h) continue;
                        const int end = draw.x + static_cast<int>(draw.source.size());
                        if (end <= frame.x || draw.x >= frame.x + frame.w) continue;
                        std::vector<Match> exposed;
                        bool intact = true;
                        int foreground = -1;
                        const auto expose = [&](int first, int last) {
                            if (first >= last) return;
                            for (int x = first; x < last; ++x) {
                                bool top = false;
                                const auto *cell = cell_at(x, draw.y, &top);
                                const char expected = draw.source[x - draw.x];
                                if (!cell || top != (layer != 0) ||
                                    (cell[0] ? static_cast<char>(cell[0]) : ' ') != expected ||
                                    screen_rows[draw.y][x] != expected ||
                                    (screen_override && screen_override !=
                                        (top ? gps_->screen_top : gps_->screen))) {
                                    intact = false;
                                    return;
                                }
                                if (expected != ' ' && foreground < 0)
                                    foreground = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                            }
                            Match span{first, draw.y, last - first, kUiMessageRule, {},
                                draw.source.substr(first - draw.x, last - first)};
                            span.native_hover_background = true;
                            span.native_help_occluder = frame;
                            span.graphical_clear_x = first;
                            span.graphical_clear_y = draw.y;
                            span.graphical_clear_width = last - first;
                            span.graphical_clear_height = 1;
                            exposed.push_back(std::move(span));
                        };
                        expose(draw.x, std::min(end, frame.x));
                        expose(std::max(draw.x, frame.x + frame.w), end);
                        if (!intact || foreground < 0 || exposed.empty()) continue;
                        std::vector<int> colors;
                        const auto paragraph_result = translate_help_paragraph_result(draw.source,
                            std::vector<int>(draw.source.size(), foreground), colors, true);
                        if (!paragraph_result.usable() || !contains_cjk_utf8(paragraph_result.target)) continue;
                        const auto metadata = std::make_shared<const dfcn::TranslationResult>(paragraph_result);
                        // Recover layout from the COMPLETE native ink span,
                        // including its original inset and centering. The
                        // exposed fragment is suppression evidence only; it
                        // must never become a new left-aligned paragraph box.
                        const auto ink = trim_view(draw.source);
                        if (ink.empty()) continue;
                        const int ink_x = draw.x + static_cast<int>(ink.data() - draw.source.data());
                        Match complete{ink_x, draw.y, static_cast<int>(ink.size()),
                            kUiMessageRule, {}, std::string(ink)};
                        auto layout_screen = screen_rows;
                        std::vector<Match> layout, untranslated;
                        if (!append_ui_message_paragraph(layout_screen, layout, untranslated,
                                -1, {complete}, ink_x + complete.length, paragraph_result.target, colors,
                                std::nullopt, draw.source, -1, false, 0, frame) ||
                                layout.size() != 1) continue;
                        Match translated = std::move(layout.front());
                        translated.translation_result = metadata;
                        const Match &first = exposed.front();
                        translated.x = first.x;
                        translated.length = first.length;
                        translated.source = first.source;
                        translated.native_hover_background = true;
                        translated.native_help_occluder = frame;
                        translated.graphical_clear_x = first.graphical_clear_x;
                        translated.graphical_clear_y = first.graphical_clear_y;
                        translated.graphical_clear_width = first.graphical_clear_width;
                        translated.graphical_clear_height = first.graphical_clear_height;
                        exposed.front() = std::move(translated);
                        for (size_t i = 0; i < exposed.size(); ++i) {
                            Match &span = exposed[i];
                            std::fill_n(screen_rows[span.y].begin() + span.x, span.length, ' ');
                            if (only_y < 0 || only_y == span.y) result.push_back(std::move(span));
                        }
                    }
                }
            }
        }
        for (const SDL_Rect &panel : help_panels) {
            const int left = panel.x - 1, right = panel.x + panel.w;
            const int top = panel.y - 1, bottom = panel.y + panel.h;
            const auto collapsed = std::find_if(collapsed_panels.begin(), collapsed_panels.end(),
                [&](const NativeCollapsedHelpPanel &known) {
                    return known.frame.x == left && known.frame.y == top &&
                        known.frame.w == panel.w + 2 && known.frame.h == panel.h + 2;
                });
            // HELP_CORNER is artwork, including the '?' glyphs and its
            // internal border in classic mode. It shares rows with the
            // heading but is not part of that text. Verify the whole live
            // skin before excluding its cells; never strip question marks
            // or infer a title from a particular English label.
            const bool has_corner = left + corner_width < right &&
                top + corner_height <= bottom && help_corner_at(left, top);
            const auto heading_row = [&](int y) {
                // A collapsed guide is entirely a caption, including long
                // titles or titles ending in punctuation. Plain one-row help
                // frames have already been scoped by their catalogued text.
                return panel.h == 1 || (has_corner && y < top + corner_height);
            };
            const auto text_left = [&](int y) {
                return has_corner && heading_row(y) ? left + corner_width : left + 1;
            };
            const auto text_right = [&](int y) {
                return collapsed != collapsed_panels.end() && y == collapsed->title.y
                    ? collapsed->title.x + collapsed->title.w : right;
            };
            const auto decoration = [](unsigned char ch) {
                return ch < 0x20 || (ch >= 0x7f && !is_cp437_latin_letter_byte(ch));
            };
            // The dismiss option uses UNIT_SELECTOR_ASSIGNED/UNASSIGNED
            // beside its caption. In classic mode the frame and >< artwork
            // are characters, so leaving them in the document makes text_row
            // reject the whole caption. Exclude only a complete native skin
            // from this text copy; the original grid still paints the control.
            std::vector<bool> control_rows(static_cast<size_t>(gps_->dimy), false);
            const auto &buttons = native_texture_button_main(*gps_);
            for (int middle = top + 2; middle + 1 < bottom; ++middle) {
                for (int x = left + 1; x + 4 <= right; ++x) {
                    if (!native_main_button_skin_at(*gps_, x, middle,
                            buttons[450], settings && settings->classic) &&
                        !native_main_button_skin_at(*gps_, x, middle,
                            buttons[451], settings && settings->classic)) continue;
                    for (int y = middle - 1; y <= middle + 1; ++y) {
                        std::fill_n(help_rows[y].begin() + x, 4, ' ');
                        control_rows[static_cast<size_t>(y)] = true;
                    }
                    x += 3;
                }
            }
            // Native tutorial goals share this frame but are individual
            // columns with large checkmark graphics, not paragraph rows.
            // The build catalog marks exactly these complete fields O.
            // Claim them before prose collection without claiming icons
            // or combining two horizontally adjacent objectives.
            std::vector<bool> objective_rows(static_cast<size_t>(gps_->dimy), false);
            for (int row_y = top + 1; row_y < bottom; ++row_y) {
                if (panel.h == 1) continue;
                const int row_left = text_left(row_y);
                for (int x = row_left; x < right; ++x) {
                    const auto &row = help_rows[row_y];
                    if (row[x] == ' ' || decoration(row[x]) ||
                        (x > row_left && row[x - 1] != ' ' && !decoration(row[x - 1])) ||
                        (x > row_left + 1 && row[x - 1] == ' ' &&
                            row[x - 2] != ' ' && !decoration(row[x - 2]))) continue;
                    size_t best_end = static_cast<size_t>(x);
                    for (int index : help_objective_rules_) {
                        const Rule &rule = rules_[static_cast<size_t>(index)];
                        size_t end = static_cast<size_t>(x);
                        if (rule.string_template || rule.numeric_template) {
                            std::vector<std::string> captures;
                            if (!match_template(rule, std::string_view(row).substr(0, right),
                                    x, &end, &captures)) continue;
                        } else {
                            if (!template_literal_at(row, x, rule.source, rule.case_insensitive)) continue;
                            end += rule.source.size();
                        }
                        if (end > static_cast<size_t>(right) || end <= best_end) continue;
                        // A complete field ends at padding, a graphic, or
                        // the frame. A single space before another word
                        // still belongs to prose and cannot end a goal.
                        if (end < static_cast<size_t>(right) &&
                            row[end] != ' ' && !decoration(row[end])) continue;
                        if (end + 1 < static_cast<size_t>(right) && row[end] == ' ' &&
                            row[end + 1] != ' ' && !decoration(row[end + 1])) continue;
                        best_end = end;
                    }
                    if (best_end == static_cast<size_t>(x)) continue;
                    objective_rows[static_cast<size_t>(row_y)] = true;
                    const int length = static_cast<int>(best_end) - x;
                    const std::string source = row.substr(x, length);
                    std::vector<int> colors;
                    const auto target = translate_help_paragraph(source,
                        field_foregrounds(x, row_y, length), colors);
                    if (!target || !contains_cjk_utf8(*target)) {
                        preserve_source({Match{x, row_y, length,
                            kHelpDocumentRule, {}, source}}, source);
                    } else {
                        int field_right = static_cast<int>(best_end);
                        while (field_right < right && row[field_right] == ' ') {
                            bool top_layer = false;
                            cell_at(field_right, row_y, &top_layer);
                            const size_t tile = static_cast<size_t>(field_right) * gps_->dimy + row_y;
                            const long *graphic = top_layer ? gps_->screentexpos_top : gps_->screentexpos;
                            // The checkmark is a foreground tile and must
                            // keep its own slot even when its text byte is blank.
                            if (graphic && graphic[tile] > 0) break;
                            ++field_right;
                        }
                        Match match{x, row_y, length, kHelpDocumentRule, *target, source};
                        match.layout_glyph_foreground_rgb = std::move(colors);
                        match.layout_x = x;
                        match.layout_y = row_y;
                        match.layout_length = field_right - x;
                        match.layout_clip_right = field_right;
                        match.layout_left = true;
                        claim_source(x, row_y, length);
                        if (only_y < 0 || only_y == row_y) result.push_back(std::move(match));
                    }
                    x = static_cast<int>(best_end) - 1;
                }
            }
            const auto text_row = [&](int y) -> std::optional<Match> {
                if (objective_rows[static_cast<size_t>(y)]) return std::nullopt;
                const auto &row = help_rows[y];
                int begin = text_left(y), end = text_right(y);
                while (begin < end && (row[begin] == ' ' || decoration(row[begin]))) ++begin;
                while (end > begin && (row[end - 1] == ' ' || decoration(row[end - 1]))) --end;
                if (begin == end) return std::nullopt;
                const std::string text = row.substr(begin, end - begin);
                if (std::any_of(text.begin(), text.end(), decoration)) return std::nullopt;
                return Match{begin, y, end - begin, kHelpDocumentRule, {}, text};
            };
            for (int y = top + 1; y < bottom;) {
                auto first = text_row(y);
                if (!first) { ++y; continue; }
                const bool heading = heading_row(y);
                std::vector<Match> rows;
                std::string source;
                std::vector<int> source_foregrounds;
                do {
                    if (!source.empty()) {
                        source.push_back(' ');
                        source_foregrounds.push_back(source_foregrounds.back());
                    }
                    source += first->source;
                    const auto colors = field_foregrounds(first->x, first->y, first->length);
                    source_foregrounds.insert(source_foregrounds.end(), colors.begin(), colors.end());
                    rows.push_back(std::move(*first));
                    ++y;
                    first = y < bottom ? text_row(y) : std::nullopt;
                } while (first && !heading && !heading_row(y));
                // Isolated titles and navigation retain their native
                // centers/click targets. Body paragraphs share the full
                // inner width, not the last short English line's width.
                // A verified corner establishes the heading band even for
                // titles ending in '?' or '!'. Keep native half-font rows
                // separate for the shared half-font normalization pass.
                const bool caption = heading || (rows.size() == 1 && source.size() < 80 &&
                    source.find_first_of(".!?") == std::string::npos);
                if (caption) {
                    for (const auto &field : split_text_fields(source)) {
                        std::vector<int> colors;
                        const auto label = translate_help_paragraph(field.text,
                            std::vector<int>(source_foregrounds.begin() + field.start,
                                source_foregrounds.begin() + field.end), colors);
                        if (!label) {
                            preserve_source({Match{rows.front().x + field.start, rows.front().y,
                                field.end - field.start, kHelpDocumentRule, {}, field.text}}, field.text);
                            continue;
                        }
                        Match match{rows.front().x + field.start, rows.front().y,
                            field.end - field.start, kHelpDocumentRule, *label, field.text};
                        match.layout_glyph_foreground_rgb = std::move(colors);
                        if (collapsed != collapsed_panels.end())
                            match.layout_clip_right = text_right(match.y);
                        claim_source(match.x, match.y, match.length);
                        if (only_y < 0 || only_y == match.y) result.push_back(std::move(match));
                    }
                } else {
                    std::vector<int> target_foregrounds;
                    const auto paragraph_result = translate_help_paragraph_result(source,
                        source_foregrounds, target_foregrounds);
                    bool fitted = false;
                    if (paragraph_result.usable() && contains_cjk_utf8(paragraph_result.target)) {
                        const auto metadata = std::make_shared<const dfcn::TranslationResult>(paragraph_result);
                        const size_t first_output = result.size();
                        auto slots = rows;
                        // Use available paragraph space before shrinking
                        // text. Keep a blank separator before the next
                        // paragraph/control, and never borrow its rows.
                        int blank_end = y;
                        while (blank_end < bottom && !objective_rows[blank_end] &&
                            !control_rows[blank_end] &&
                            std::all_of(help_rows[blank_end].begin() + text_left(blank_end),
                                help_rows[blank_end].begin() + right,
                                [](char ch) { return ch == ' '; })) ++blank_end;
                        for (int blank = y; blank + 1 < blank_end; ++blank)
                            slots.push_back({rows.front().x, blank, 0,
                                kHelpDocumentRule, {}, {}});
                        // Suppression is committed only after every
                        // translated glyph fits the measured text box.
                        fitted = append_setup_paragraph(std::move(slots), paragraph_result.target,
                            right, right, target_foregrounds);
                        if (fitted) {
                            for (size_t at = first_output; at < result.size(); ++at)
                                result[at].translation_result = metadata;
                            for (const auto &row : rows) claim_source(row.x, row.y, row.length);
                        }
                    }
                    if (!fitted) preserve_source(std::move(rows), std::move(source));
                }
            }
        }
    }
