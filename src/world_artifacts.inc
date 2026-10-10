// World-map artifacts and missing citizens share two-line clickable records.
// The first line is an item/name or figure identity; the second is its last
// known holder or location. Their closed native row skin excludes the scrollbar
// and owns the hitbox. Physical source spans stay separate from the output.
static bool world_artifact_status(std::string_view source) {
    source = trim_view(source);
    return source.starts_with("Last held by ") || source.starts_with("Last in ") ||
        source == "Last known to be traveling" || source == "Location unknown";
}

bool Overlay::append_world_artifact_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    bool owned = false;
    // Read the active logical layer both at glyph suppression and Present.
    // The mask writer checks each owned byte against the layer being drawn.
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) context[y][x] = cell[0];
        }
    const NativePanelBorders borders(*gps_);
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto captures = captured_clipped_captions();
    const auto complete_source = [&](int x, int y, std::string_view visible) {
        for (const auto &capture : captures)
            if (capture.x == x && capture.y == y && capture.visible == visible)
                return capture.complete;
        return std::string(visible);
    };
    const auto first_row_under_search = [&](const LogicalTextField &title,
            const LogicalTextField &status, int y, const SDL_Rect &panel,
            std::array<int32_t, 9> &skin) -> std::optional<SDL_Rect> {
        // DFHack's world/ARTIFACTS sort overlay is a one-row BannerPanel.
        // Its [key: Search: ...] field replaces the first record's upper
        // edge. A complete adjacent record supplies the skin and width;
        // only the actual bracketed search span may cover that upper edge.
        const int top = y - 2;
        const int panel_right = panel.x + panel.w;
        if (top != panel.y || y + 3 >= panel.y + panel.h || y + 3 >= gps_->dimy)
            return std::nullopt;
        const auto header = std::string_view(context[top]).substr(panel.x, panel.w);
        const size_t opening = header.find('[');
        const size_t separator = opening == std::string_view::npos
            ? std::string_view::npos : header.find(": Search:", opening + 1);
        const size_t closing = header.rfind(']');
        if (opening == std::string_view::npos || separator == std::string_view::npos ||
                closing == std::string_view::npos || separator <= opening + 1 ||
                closing <= separator + std::string_view(": Search:").size() ||
                header.find(':', opening + 1) != separator) return std::nullopt;
        const auto key = header.substr(opening + 1, separator - opening - 1);
        if (!std::all_of(key.begin(), key.end(), [](unsigned char ch) {
                return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                    (ch >= '0' && ch <= '9') || ch == '+' || ch == '-';
            })) return std::nullopt;
        const int search_left = panel.x + static_cast<int>(opening);
        const int search_right = panel.x + static_cast<int>(closing) + 1;
        if (search_left > title.start || search_right <= status.start)
            return std::nullopt;
        for (const auto &next_status : split_text_fields(context[y + 3])) {
            if (next_status.start != status.start ||
                    !world_artifact_status(complete_source(
                        next_status.start, y + 3, next_status.text))) continue;
            const auto next_panel = native_panel_interior(borders, *gps_,
                next_status.start, next_status.end, y + 3);
            if (!next_panel || next_panel->x != panel.x || next_panel->y != panel.y ||
                    next_panel->w != panel.w || next_panel->h != panel.h) continue;
            const auto next_titles = split_text_fields(context[y + 2].substr(
                title.start, panel_right - title.start));
            if (next_titles.empty() || next_titles.front().start != 0 ||
                    world_artifact_status(next_titles.front().text)) continue;
            const int next_title_end = title.start + next_titles.front().end;
            std::array<int32_t, 9> next_skin{};
            const auto next = native_button_text_rect(*gps_, title.start,
                next_title_end, y + 2, true, &next_skin, false, true);
            if (!next || next->x != status.start || next->y != top + 3 || next->h != 3 ||
                    next->x - 1 < panel.x || next->x + next->w >= panel_right ||
                    next->y + next->h > panel.y + panel.h ||
                    next_status.end > next->x + next->w ||
                    title.end > next->x + next->w || status.end > next->x + next->w ||
                    search_right >= next->x + next->w) continue;
            SDL_Rect first{next->x, top, next->w, next->h};
            bool complete = true;
            for (int row = 0; row < 3 && complete; ++row) {
                for (int x = first.x - 1; x <= first.x + first.w; ++x) {
                    if (row == 0 && x >= search_left && x < search_right) continue;
                    const int column = x == first.x - 1 ? 0
                        : x == first.x + first.w ? 2 : 1;
                    if (native_ui_skin_at(*gps_, x, top + row,
                            next_skin[row * 3 + column], classic, row == 1 && column == 1))
                        continue;
                    // The native title covers its left cap; the status
                    // covers only the lower interior, exactly as the ordinary
                    // two-line reader's explicit caption exceptions permit.
                    const bool caption = classic &&
                        ((row == 1 && column == 0) ||
                         (row == 2 && column == 1 && x < status.end));
                    if (!caption || !native_ui_skin_at(*gps_, x, top + row,
                            next_skin[4], classic, true)) {
                        complete = false;
                        break;
                    }
                }
            }
            if (!complete) continue;
            skin = next_skin;
            return first;
        }
        return std::nullopt;
    };
    for (int y = 1; y < gps_->dimy; ++y) {
        // Inspect all fields, since sibling panes can share the same row.
        for (const auto &field : split_text_fields(context[y])) {
            if (!world_artifact_status(complete_source(field.start, y, field.text))) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                field.start, field.end, y);
            if (!panel || field.start <= panel->x) continue;
            // The title starts ON the left cap; the status starts one cell
            // later ON the lower edge. Probe the title with both explicit
            // caption exceptions, then validate every surviving skin cell.
            // Reading this as a read-only text card rejects its own frame.
            const int title_x = field.start - 1;
            const auto titles = split_text_fields(context[y - 1].substr(
                title_x, panel->x + panel->w - title_x));
            if (titles.empty() || titles.front().start != 0 ||
                world_artifact_status(titles.front().text)) continue;
            LogicalTextField title = titles.front();
            title.start += title_x;
            title.end += title_x;
            std::array<int32_t, 9> skin{};
            auto button = native_button_text_rect(*gps_, title.start,
                title.end, y - 1, true, &skin, false, true);
            if (!button) button = first_row_under_search(title, field, y, *panel, skin);
            if (!button || button->x != field.start || button->y + 2 != y ||
                button->x - 1 < panel->x ||
                button->x + button->w >= panel->x + panel->w ||
                button->y < panel->y || button->y + button->h > panel->y + panel->h ||
                field.end > button->x + button->w) continue;
            bool complete_skin = native_ui_skin_at(*gps_, button->x - 1, y,
                skin[6], classic);
            for (int x = button->x; x < button->x + button->w && complete_skin; ++x) {
                if (x >= title.end) {
                    bool top = false;
                    const auto *cell = cell_at(x, y - 1, &top);
                    if ((cell && cell[0] && cell[0] != ' ') ||
                        !native_ui_skin_at(*gps_, x, y - 1, skin[4], classic, true))
                        complete_skin = false;
                }
                if (x >= field.end && !native_ui_skin_at(*gps_, x, y, skin[7], classic))
                    complete_skin = false;
            }
            if (!complete_skin) continue;
            owned = true;
            const std::array<LogicalTextField, 2> fields = {title, field};
            for (size_t index = 0; index < fields.size(); ++index) {
                const auto &text = fields[index];
                NativeTextCardRow row;
                row.x = text.start;
                row.y = y - 1 + static_cast<int>(index);
                row.source = text.text;
                if (only_y >= 0 && only_y != row.y) {
                    std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
                    continue;
                }
                const std::string complete = complete_source(row.x, row.y, row.source);
                const std::string source = normalize_utterance(complete);
                // The row is a complete native field. Keep its final result,
                // including an unsupported name, across raw/composite passes
                // and subsequent frames. The book parser's work memo belongs
                // to one call and cannot provide that reuse on its own.
                auto target = memoize_item_translation(
                    std::string(index == 1 ? "world-artifact-status:" : "world-artifact-title:") + source,
                    [&]() -> std::optional<std::string> {
                        TranslationWorkScope work;
                        std::optional<std::string> target;
                        if (index == 1) {
                            // Capture before native ellipsizing, then parse the
                            // whole species/caste/name, not Adept as a skill rating.
                            // Native Linux 53.16 uses resize at 0x1431cc5 followed
                            // by addst at 0x142fee6, already served by shared hooks.
                            target = translate_legends_text("World artifact: " + source, false, false);
                        } else if (const size_t species_at = source.rfind(" the ");
                                   species_at != std::string::npos && species_at > 0 &&
                                   translate_creature_descriptor(
                                       std::string_view(source).substr(species_at + 5), true)) {
                            // Missing citizens use the same Last in/status button as
                            // artifacts, but their title is a figure, not an item.
                            // Resolve the complete name/epithet/species with the shared
                            // {n} the {s} backtracking before book and item fallbacks.
                            target = translate_legends_text(source, true, true);
                        } else if (source.starts_with("the ") || source.starts_with("a ") ||
                                   source.starts_with("an ")) {
                            // This typed item parser removes the article, retains
                            // designation marks, and resolves the material + weapon
                            // noun together (pike = the weapon, not the fish).
                            target = translate_legends_item(source);
                        } else {
                            if (split_generated_name_identity(source) || split_repeated_title_identity(source))
                                target = translate_legends_artifact_identity(source);
                            // This list mixes ordinary artifacts with written works.
                            // Resolve the shared BOOK_ART/BOOK_INSTRUCTION grammar
                            // before the proper-name fallback, just like Codices and
                            // written-item descriptions. Otherwise Question and
                            // Explorations Of become phonetic name components, while
                            // a complete title ending in '?' is rejected altogether.
                            // The book resolver already falls back to the same typed
                            // generated-name parser for ordinary artifact names.
                            if (!target) target = translate_legends_book(source);
                            if (!target) target = translate_legends_item(source);
                        }
                        if (target && (target->empty() || target->find("[C:") != std::string::npos ||
                                target->find_first_of("\r\n") != std::string::npos)) target.reset();
                        return target;
                    });
                Match match{row.x, row.y, static_cast<int>(row.source.size()),
                    kWorldArtifactRowRule, target ? *target : cp437_to_utf8(complete), row.source};
                match.native_hover_untranslated = !target;
                if (!target) match.native_help_review_source = complete;
                // Both lines share the inner left edge and fit inside the
                // three-row button. Only physical text owns suppression;
                // the translated baseline no longer crosses the lower edge.
                match.native_picture_caption_box = *button;
                match.layout_x = button->x;
                match.layout_y = button->y + static_cast<int>(index);
                match.layout_pixel_y = (button->h - 2) * gps_->tile_pixel_y / 2;
                match.layout_fixed_baseline = true;
                match.layout_length = button->w;
                match.layout_clip_right = button->x + button->w;
                match.layout_left = true;
                bool top = false;
                const auto *cell = cell_at(row.x, row.y, &top);
                match.layout_foreground_rgb = cell ?
                    (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
                match.layout_font_pixels = std::clamp(
                    static_cast<int>(gps_->tile_pixel_y * config_.font_scale), 1, gps_->tile_pixel_y);
                match.layout_lock_font_pixels = true;
                match.layout_line_height_pixels = gps_->tile_pixel_y;
                // Raw card readers can already have queued this caption.
                // Reserving screen_rows prevents later dictionary matches,
                // but does not retire those earlier display records. The
                // complete two-line button owns both source rows exclusively.
                std::erase_if(matches, [&](const Match &prior) {
                    return prior.y == match.y && prior.x < match.x + match.length &&
                        match.x < prior.x + prior.length;
                });
                std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
                matches.push_back(std::move(match));
            }
        }
    }
    return owned;
}

std::optional<NativeTextCard> Overlay::capture_world_artifact_description_card(
        int footer_x, int footer_end, int footer_y) const {
    const auto lines = native_world_artifact_description_lines();
    if (!lines || lines->empty()) return std::nullopt;
    const auto opening = normalize_utterance(lines->front());
    if (!opening.starts_with("This is ") && !opening.starts_with("These are "))
        return std::nullopt;
    const auto settings = native_ui_settings();
    if (!settings) return std::nullopt;
    const auto &skin = native_texture_hover_rectangle(*gps_);
    const auto edge = [&](int x, int y, int column, int row) {
        return native_ui_skin_at(*gps_, x, y, skin[column][row], settings->classic);
    };
    // Locate the surviving footer sides, then the left corners. Text may
    // cover ONLY the opposite edge, never lend a missing corner or top/bottom.
    for (int left = footer_x - 1; left >= 0; --left) {
        if (!edge(left, footer_y, 0, 1)) continue;
        int top = footer_y - 1, bottom = footer_y + 1;
        while (top >= 0 && edge(left, top, 0, 1)) --top;
        while (bottom < gps_->dimy && edge(left, bottom, 0, 1)) ++bottom;
        if (!edge(left, top, 0, 0) || !edge(left, bottom, 0, 2)) continue;
        for (int right = footer_end; right < gps_->dimx; ++right) {
            if (!edge(right, footer_y, 2, 1) || !edge(right, top, 2, 0) ||
                    !edge(right, bottom, 2, 2)) continue;
            bool frame = true;
            for (int x = left + 1; x < right && frame; ++x)
                frame = edge(x, top, 1, 0) && edge(x, bottom, 1, 2);
            if (!frame) continue;
            auto card = capture_panel_text_card({left + 1, top + 1,
                right - left - 1, bottom - top - 1});
            if (!card || card->rows.size() < 2 || card->rows.back().y != footer_y ||
                    card->rows.front().y != top + 1) continue;
            const int text_x = card->rows.front().x;
            size_t count = 1;
            while (count < card->rows.size() && card->rows[count].x == text_x &&
                    card->rows[count].y == card->rows[count - 1].y + 1) ++count;
            // Both native world-map draws display the first eight cached
            // lines (ELF 0x143ad13..0x143ad67). Recover hidden tails only when
            // that whole viewport agrees, never from a lone matching opening.
            if (count != std::min<size_t>(8, lines->size()) ||
                    count >= card->rows.size() ||
                    card->rows[count].y <= card->rows[count - 1].y + 1) continue;
            for (size_t at = 0; at < count && frame; ++at) {
                auto &row = card->rows[at];
                const auto &line = (*lines)[at];
                const size_t width = static_cast<size_t>(right - text_x);
                if (trim_view(std::string_view(line).substr(0, width)) != row.source ||
                        line.size() > static_cast<size_t>(gps_->dimx - text_x)) {
                    frame = false;
                    break;
                }
                std::vector<int> colors;
                for (size_t i = 0; i < line.size(); ++i) {
                    bool top_layer = false;
                    const int x = text_x + static_cast<int>(i);
                    const auto *cell = cell_at(x, row.y, &top_layer);
                    const int rgb = cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
                    if (!cell || cell[0] != static_cast<unsigned char>(line[i]) ||
                            (line[i] != ' ' && rgb != row.foregrounds.front()) ||
                            // The native description draw explicitly sets
                            // background palette 0 in both display modes.
                            // Graphical skin values are texture IDs.
                            !std::equal(cell + 4, cell + 7, gps_->uccolor[0])) {
                        frame = false;
                        break;
                    }
                    colors.push_back(rgb);
                }
                if (!frame) break;
                // Includes proven trailing spaces: those too can erase the
                // classic right edge. The full source span owns suppression.
                row.source = line;
                row.foregrounds = std::move(colors);
            }
            if (!frame) continue;
            for (int y = top + 1; y < bottom && frame; ++y) {
                if (edge(right, y, 2, 1)) continue;
                const auto row = std::find_if(card->rows.begin(),
                    card->rows.begin() + count, [&](const auto &text) {
                        return text.y == y && text.x <= right &&
                            text.x + static_cast<int>(text.source.size()) > right;
                    });
                frame = row != card->rows.begin() + count;
            }
            if (!frame) continue;
            // The native wrapper retains each separating space at the end
            // of its emitted row. Concatenation preserves that exact source.
            for (const auto &line : *lines) card->paragraph_source += line;
            return card;
        }
    }
    return std::nullopt;
}

size_t Overlay::append_world_artifact_description(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    if (card.rows.empty()) return 0;
    const auto opening = normalize_utterance(card.rows.front().source);
    if (!opening.starts_with("This is ") && !opening.starts_with("These are ")) return 0;
    // The caller has already identified the closed world-map information
    // frame. Its first contiguous text block is item prose; the separated
    // mission/accessibility footer remains an ordinary world-map fact.
    const int left = card.rows.front().x;
    const int right = card.interior.x + card.interior.w;
    size_t end = 1;
    while (end < card.rows.size() && card.rows[end].x == left &&
            card.rows[end].y == card.rows[end - 1].y + 1) ++end;
    std::vector<Match> paragraph;
    std::string source;
    for (size_t at = 0; at < end; ++at) {
        const auto &row = card.rows[at];
        paragraph.push_back({row.x, row.y, static_cast<int>(row.source.size()),
            kWorldArtifactDescriptionRule, {}, row.source});
        paragraph.back().layout_foreground_rgb = row.foregrounds.front();
        if (!source.empty()) source += ' ';
        source += row.source;
    }
    // Native Linux 53.16 builds this description at 0x140a4bd and wraps
    // it with add_paragraph at 0x140a4d1. The shared capture supplies all
    // text, including letters covered by the frame and any hidden tail.
    std::vector<std::string> native_lines;
    if (!card.paragraph_source.empty()) {
        source = card.paragraph_source;
    } else if (auto complete = native_source_for_rows(paragraph, right, &native_lines)) {
        source = std::move(*complete);
        for (size_t at = 0; at < paragraph.size(); ++at) {
            auto &row = paragraph[at];
            const auto native = trim_view(native_lines[at]);
            const size_t edge = static_cast<size_t>(right - row.x);
            // A native wrapped word can leave its final glyph ON the frame
            // (e.g. the s in rollers). Claim just that proven source glyph,
            // not the frame texture or anything in the neighbouring list.
            bool top = false;
            const auto *cell = cell_at(right, row.y, &top);
            if (native.size() > edge && cell && cell[0] != ' ' &&
                    cell[0] == static_cast<unsigned char>(native[edge]) &&
                    !is_cp437_box_separator(rows[row.y], right)) {
                row.source.assign(native.substr(0, edge + 1));
                row.length = static_cast<int>(row.source.size());
            }
        }
    }
    const auto mark_frame = [&](size_t begin) {
        if (card.paragraph_source.empty()) return;
        for (size_t at = begin; at < matches.size(); ++at)
            matches[at].native_picture_caption_box = card.interior;
    };
    const size_t match_begin = matches.size();
    const auto translation = translate_item_description_source_display(source, true);
    if (translation.usable() && translation.changed()) {
        auto slots = paragraph;
        // Use the frame's unused body space when the complete Chinese text
        // needs more lines than the English excerpt. Keep one blank line
        // before the native footer; never shrink or move the adjacent list.
        const int bottom = end < card.rows.size() ? card.rows[end].y - 1
            : card.interior.y + card.interior.h;
        for (int y = paragraph.back().y + 1; y < bottom; ++y) {
            slots.push_back({left, y, right - left, kWorldArtifactDescriptionRule,
                {}, std::string(static_cast<size_t>(right - left), ' ')});
            slots.back().layout_foreground_rgb = paragraph.front().layout_foreground_rgb;
        }
        if (append_bounded_paragraph(std::move(slots), translation.target, rows, matches,
                only_y, right, right)) {
            attach_item_display_result(matches, match_begin, translation);
            mark_frame(match_begin);
            return end;
        }
    }
    // Unknown productions remain one reviewable document, not a collection
    // of guessed names and isolated Chinese words. No partial success may
    // silently discard an inscription, title, event, power or quality tail.
    for (size_t at = 0; at < paragraph.size(); ++at) {
        auto &row = paragraph[at];
        row.target = cp437_to_utf8(row.source);
        row.native_hover_untranslated = true;
        if (at == 0) row.native_help_review_source = source;
        row.layout_x = left;
        row.layout_y = row.y;
        row.layout_length = right - left;
        row.layout_clip_right = right;
        row.layout_left = true;
        row.layout_font_pixels = std::clamp(
            static_cast<int>(gps_->tile_pixel_y * config_.font_scale), 1, gps_->tile_pixel_y);
        row.layout_lock_font_pixels = true;
        std::fill_n(rows[row.y].begin() + row.x, row.length, ' ');
        if (only_y < 0 || row.y == only_y) matches.push_back(std::move(row));
    }
    mark_frame(match_begin);
    return end;
}

void Overlay::layout_world_artifact_rows(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    // Generic page layout runs while these independent records are detached.
    // A raw caption recovered in that pass must not paint the same source
    // again when the typed records are restored with their inset baselines.
    std::vector<SDL_Rect> owned_rows;
    for (const Match &match : prepared_matches_)
        if (match.rule == kWorldArtifactRowRule && match.native_picture_caption_box)
            owned_rows.push_back({match.x, match.y, match.length, 1});
    std::erase_if(prepared_matches_, [&](const Match &match) {
        if (match.rule == kWorldArtifactRowRule) return false;
        return std::any_of(owned_rows.begin(), owned_rows.end(), [&](const SDL_Rect &row) {
            return match.y == row.y && match.x < row.x + row.w &&
                row.x < match.x + match.length;
        });
    });
    const auto settings = native_ui_settings();
    if (settings && settings->classic) {
        // Description lines can overwrite two cells, including the side
        // itself. Suppression owns both proven bytes; only the actual side
        // is restored, using the current native hover skin and glyph atlas.
        for (const Match &line : prepared_matches_) {
            if (line.rule != kWorldArtifactDescriptionRule || line.native_split_duplicate ||
                    !line.native_picture_caption_box) continue;
            const auto &box = *line.native_picture_caption_box;
            const int right = box.x + box.w;
            if (line.x + line.length <= right) continue;
            const int32_t skin = native_texture_hover_rectangle(*gps_)[2][1];
            NativeBorderRepair border;
            border.cells = {right, line.y, 1, 1};
            border.cell[0] = static_cast<unsigned char>(skin & 0xff);
            const int foreground = ((skin >> 8) & 7) + ((skin & 0x4000) ? 8 : 0);
            const int background = (skin >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, border.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, border.cell.begin() + 4);
            native_border_repairs_.push_back(border);
        }
        for (const Match &title : prepared_matches_) {
            if (title.rule != kWorldArtifactRowRule || title.native_split_duplicate ||
                !title.native_picture_caption_box) continue;
            const auto &box = *title.native_picture_caption_box;
            if (title.x != box.x - 1 || title.y != box.y + 1) continue;
            const auto status = std::find_if(prepared_matches_.begin(), prepared_matches_.end(),
                [&](const Match &part) {
                    // Capture has already proved the complete status. Its
                    // visible source may itself be ellipsized on narrow UIs.
                    return part.rule == kWorldArtifactRowRule && !part.native_split_duplicate &&
                        part.x == title.x + 1 && part.y == title.y + 1 &&
                        part.native_picture_caption_box &&
                        part.native_picture_caption_box->x == box.x &&
                        part.native_picture_caption_box->y == box.y &&
                        part.native_picture_caption_box->w == box.w &&
                        part.native_picture_caption_box->h == box.h;
                });
            if (status == prepared_matches_.end()) continue;
            std::array<int32_t, 9> skin{};
            auto button = native_button_text_rect(*gps_, title.x,
                title.x + title.length, title.y, true, &skin, false, true);
            if (!button) {
                // Capture has already proved the Search-covered first row.
                // Its adjacent complete row supplies this frame's live skin
                // for the two overwritten caption edges, never the search.
                for (const Match &next_title : prepared_matches_) {
                    if (next_title.rule != kWorldArtifactRowRule || next_title.native_split_duplicate ||
                            next_title.x != title.x || next_title.y != title.y + 3 ||
                            !next_title.native_picture_caption_box) continue;
                    const auto &next_box = *next_title.native_picture_caption_box;
                    if (next_box.x != box.x || next_box.y != box.y + 3 ||
                            next_box.w != box.w || next_box.h != box.h) continue;
                    const auto next = native_button_text_rect(*gps_, next_title.x,
                        next_title.x + next_title.length, next_title.y, true, &skin, false, true);
                    if (next && next->x == next_box.x && next->y == next_box.y &&
                            next->w == next_box.w && next->h == next_box.h) button = box;
                    break;
                }
            }
            if (!button || title.x != button->x - 1 || title.y != button->y + 1) continue;
            const auto repair = [&](SDL_Rect cells, int part) {
                NativeBorderRepair border;
                border.cells = cells;
                border.cell[0] = static_cast<unsigned char>(skin[part] & 0xff);
                const int foreground = ((skin[part] >> 8) & 7) +
                    ((skin[part] & 0x4000) ? 8 : 0);
                const int background = (skin[part] >> 11) & 7;
                std::copy_n(gps_->uccolor[foreground], 3, border.cell.begin() + 1);
                std::copy_n(gps_->uccolor[background], 3, border.cell.begin() + 4);
                native_border_repairs_.push_back(border);
            };
            repair({title.x, title.y, 1, 1}, 3);
            repair({status->x, status->y, status->length, 1}, 7);
        }
    }
    for (Match &match : prepared_matches_) {
        if (match.rule != kWorldArtifactRowRule || match.target.empty() ||
            match.native_split_duplicate) continue;
        // Translate the complete captured name FIRST. If it still cannot fit,
        // the shared fixed-size fitter adds a Chinese ellipsis at a codepoint
        // boundary; scrolling never makes the entire list's font shrink.
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x, match.layout_clip_right);
    }
}
