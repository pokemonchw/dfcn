// Freeze the output actually measured for this document. A later page pass
// may retain the record while changing its text or box; membership alone is
// therefore insufficient authorization to remove the document's sources.
static NativeAdventureHoverPaint::Output native_adventure_hover_output(const Match &match) {
    NativeAdventureHoverPaint::Output result;
    result.target = match.target; result.source = match.source;
    result.geometry = {match.x, match.y, match.length, match.rule,
        match.layout_x, match.layout_y, match.layout_box_pixel_x, match.layout_box_pixel_width,
        match.layout_pixel_y, match.layout_length, match.layout_clip_right,
        match.layout_line_height_pixels, match.layout_foreground_rgb,
        match.graphical_clear_x, match.graphical_clear_y, match.graphical_clear_width,
        match.graphical_clear_height, match.graphical_clear_background_rgb};
    if (match.layout_native_clip) {
        const auto &clip = *match.layout_native_clip;
        result.clip = {clip.x, clip.y, clip.w, clip.h};
    }
    const std::array flags{match.layout_native_clip.has_value(), match.layout_prepared,
        match.layout_fixed_baseline, match.layout_left, match.layout_right,
        match.layout_ellipsize, match.layout_clip_is_occlusion, match.layout_reflowed_paragraph,
        match.native_help_source_only, match.native_split_text, match.native_split_duplicate,
        match.native_hover_background, match.native_dfhack_foreground, match.native_squads_foreground,
        match.language_converted, bool(match.legends_flow), bool(match.native_help_background_frames),
        bool(match.native_help_occluder), match.graphical_auto_foreground};
    for (size_t index = 0; index < flags.size(); ++index)
        if (flags[index]) result.flags |= uint32_t{1} << index;
    result.justified = match.layout_justified_parts;
    result.foregrounds = match.layout_glyph_foreground_rgb;
    return result;
}

// The three retained attribute/skill documents are semantic owners. Border
// and clip evidence only bound their output; neither identifies a tooltip.
void Overlay::append_adventure_hover_documents(std::vector<std::string> &rows,
        std::vector<Match> &matches, std::vector<Match> &untranslated,
        int only_y, const unsigned char *raw) const {
#ifdef _WIN32
    if (!native_ui_input_read_ || only_y >= 0 || !gps_ || !face_ ||
            gps_->dimx <= 0 || gps_->dimy <= 0 ||
            rows.size() != static_cast<size_t>(gps_->dimy) ||
            gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0 ||
            NativeTooltipPageScope::active || g_native_toolbar_tooltip ||
            captured_native_tooltip_widget(*gps_)) return;
    const uintptr_t owner = native_current_viewscreen();
    uint64_t epoch = 0, revision = 0;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        epoch = g_native_drawn_text_epoch; revision = g_native_drawn_text_revision;
    }
    const std::array snapshots{captured_native_drawn_text_snapshot(false),
        captured_native_drawn_text_snapshot(true)};
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        if (!epoch || epoch != g_native_drawn_text_epoch || revision != g_native_drawn_text_revision) return;
    }
    const auto current = [&](const NativeDrawnTextRow &draw) {
        return draw.draw_epoch == epoch && draw.draw_dimx == gps_->dimx && draw.draw_dimy == gps_->dimy &&
            draw.draw_grid && draw.draw_grid == (draw.top_layer ? gps_->screen_top : gps_->screen) &&
            (!raw || raw == draw.draw_grid) && (!draw.top_layer || gps_->top_in_use) &&
            draw.x >= 0 && draw.x < gps_->dimx && draw.y >= 0 && draw.y < gps_->dimy &&
            draw.source.size() <= static_cast<size_t>(gps_->dimx - draw.x);
    };
    std::array<std::unordered_map<size_t, uint64_t>, 2> latest;
    for (const auto &snapshot : snapshots) for (const auto &draw : *snapshot) {
        if (!current(draw)) continue;
        for (size_t i = 0; i < draw.source.size(); ++i) {
            const int x = draw.x + static_cast<int>(i);
            if (draw.draw_clip && (x < draw.draw_clip->x ||
                    x >= int64_t(draw.draw_clip->x) + draw.draw_clip->w ||
                    draw.y < draw.draw_clip->y || draw.y >= int64_t(draw.draw_clip->y) + draw.draw_clip->h)) continue;
            auto &sequence = latest[draw.top_layer ? 1 : 0][size_t(x) * gps_->dimy + draw.y];
            sequence = std::max(sequence, draw.sequence);
        }
    }
    struct Group {
        std::shared_ptr<const NativeAdventureHoverDocument> document;
        std::vector<const NativeDrawnTextRow *> rows, observed;
        bool conflict = false, top = false;
    };
    std::map<const NativeAdventureHoverDocument *, Group> groups;
    for (const auto &snapshot : snapshots) for (const auto &draw : *snapshot) {
        const auto &document = draw.adventure_hover_document;
        if (!document || document->screen != owner || document->epoch != epoch ||
                !draw.completed_draw || draw.draw_owner != owner || !draw.sequence ||
                !current(draw) || draw.source.empty() || draw.editable_text ||
                draw.info_title_authored || draw.squad_alias_target || draw.unit_identity_pending) continue;
        const auto row = std::find_if(document->rows.begin(), document->rows.end(),
            [&](const auto &entry) { return entry.address == draw.address; });
        if (row == document->rows.end()) continue;
        bool owned = draw.draw_clip && draw.x >= draw.draw_clip->x && draw.y >= draw.draw_clip->y &&
            int64_t(draw.x) + draw.source.size() <= int64_t(draw.draw_clip->x) + draw.draw_clip->w &&
            draw.y < int64_t(draw.draw_clip->y) + draw.draw_clip->h;
        for (size_t i = 0; owned && i < draw.source.size(); ++i) {
            const size_t at = (size_t(draw.x) + i) * gps_->dimy + draw.y;
            const auto writer = latest[draw.top_layer ? 1 : 0].find(at);
            const unsigned char expected = static_cast<unsigned char>(draw.source[i]);
            bool visible_top = false;
            const auto *cell = cell_at(draw.x + static_cast<int>(i), draw.y, &visible_top);
            owned = writer != latest[draw.top_layer ? 1 : 0].end() && writer->second == draw.sequence &&
                draw.draw_grid[at * 8] == expected && cell && (cell[0] ? cell[0] : ' ') == expected &&
                (expected == ' ' || visible_top == draw.top_layer);
        }
        if (!owned) continue;
        auto &group = groups[document.get()];
        if (!group.document) {
            group.document = document; group.top = draw.top_layer;
            group.rows.resize(document->rows.size());
        }
        group.observed.push_back(&draw);
        const size_t index = static_cast<size_t>(row - document->rows.begin());
        if (group.top != draw.top_layer || group.rows[index] ||
                row->source != draw.complete_source || draw.source != row->source) group.conflict = true;
        group.rows[index] = &draw;
    }
    const NativePanelBorders borders(*gps_);
    const NativeBitmapFontTextures fonts(!groups.empty());
    using Texture = NativeDfhackLayerTexture;
    const std::array<std::array<const Texture *, 5>, 2> textures{{
        {gps_->screentexpos, gps_->screentexpos_lower, gps_->screentexpos_anchored,
            gps_->screentexpos_anchored_x, gps_->screentexpos_anchored_y},
        {gps_->screentexpos_top, gps_->screentexpos_top_lower, gps_->screentexpos_top_anchored,
            gps_->screentexpos_top_anchored_x, gps_->screentexpos_top_anchored_y}
    }};
    for (auto &[identity, group] : groups) {
        (void)identity;
        const auto &document = *group.document;
        // Reserve every individually proved source even if the complete
        // document is clipped or translation is unavailable. Generic word
        // matching must not claim the surviving fragments of that document.
        std::vector<Match> source_rows;
        const auto overlaps = [&](const Match &match) {
            return std::any_of(group.observed.begin(), group.observed.end(), [&](const auto *draw) {
                return draw && draw->y == match.y && match.x < draw->x + int(draw->source.size()) &&
                    draw->x < int64_t(match.x) + native_match_source_length(match);
            });
        };
        std::erase_if(matches, overlaps);
        std::erase_if(untranslated, overlaps);
        for (const auto *draw : group.observed) {
            Match keep{draw->x, draw->y, static_cast<int>(draw->source.size()),
                kToolbarTooltipBodyRule, {}, draw->source};
            keep.native_help_source_only = true;
            source_rows.push_back(keep);
            std::fill_n(rows[draw->y].begin() + draw->x, draw->source.size(), ' ');
        }
        const auto preserve = [&] {
            untranslated.insert(untranslated.end(), source_rows.begin(), source_rows.end());
        };
        if (group.conflict || source_rows.empty()) { preserve(); continue; }
        int left = -1, top = -1, last_x = -1;
        std::optional<SDL_Rect> clip;
        bool valid = true;
        std::string source;
        for (size_t index = 0; index < document.rows.size(); ++index) {
            if (index) source.push_back('\n');
            source += document.rows[index].source;
            const auto *draw = group.rows[index];
            if (!draw) {
                if (!document.rows[index].source.empty()) valid = false;
                continue;
            }
            if (draw->native_half_writer) valid = false;
            const int row_zero = draw->y - static_cast<int>(index);
            if (left < 0) { left = draw->x; top = row_zero; clip = draw->draw_clip; }
            else if (left != draw->x || top != row_zero || !clip ||
                    clip->x != draw->draw_clip->x || clip->y != draw->draw_clip->y ||
                    clip->w != draw->draw_clip->w || clip->h != draw->draw_clip->h) valid = false;
            last_x = std::max(last_x, draw->x + static_cast<int>(draw->source.size()));
        }
        const int bottom = top + static_cast<int>(document.rows.size());
        if (!valid || !clip || left < 0 || top < 0 || bottom > gps_->dimy || last_x <= left ||
                top < clip->y || bottom > int64_t(clip->y) + clip->h) { preserve(); continue; }
        const auto panel = native_panel_interior_with_occluder(borders, *gps_,
            SDL_Rect{left, top, last_x - left, bottom - top});
        if (!panel) { preserve(); continue; }
        const int right = static_cast<int>(std::min<int64_t>(panel->x + panel->w, int64_t(clip->x) + clip->w));
        if (left < panel->x || right < last_x || right <= left) { preserve(); continue; }
        const auto translated = translate_toolbar_tooltip_result(source);
        const std::string target = tooltip_translation_cache_target_;
        if (target.empty() || target == source) { preserve(); continue; }
        const auto translation = std::make_shared<const TranslationResult>(translated);
        Match language;
        language.source = source; language.target = target; language.translation_result = translation;
        const DisplayLanguageScope language_scope(&language);
        std::vector<std::string> lines;
        std::vector<std::vector<int>> line_colors;
        int pixels = 0;
        const int line_height = native_text_row_height(gps_);
        if (line_height <= 0 || !measure_paragraph_layout(target, right - left, {}, {},
                lines, line_colors, pixels) || lines.empty() ||
                int64_t(lines.size()) * line_height > int64_t(bottom - top) * gps_->tile_pixel_y) {
            preserve(); continue;
        }
        auto paint = std::make_shared<NativeAdventureHoverPaint>();
        paint->document = group.document; paint->top = group.top; paint->revision = revision;
        paint->grid = group.top ? gps_->screen_top : gps_->screen;
        paint->dimx = gps_->dimx; paint->dimy = gps_->dimy;
        std::unordered_map<size_t, uint64_t> owned;
        for (const auto *draw : group.rows) if (draw) {
            paint->sources.push_back({draw->x, draw->y, draw->source});
            for (size_t i = 0; i < draw->source.size(); ++i)
                owned[(size_t(draw->x) + i) * gps_->dimy + draw->y] = draw->sequence;
        }
        const auto *flags = group.top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        for (int y = top; valid && y < bottom; ++y) for (int x = left; valid && x < right; ++x) {
            const size_t at = size_t(x) * gps_->dimy + y;
            NativeAdventureHoverPaint::Cell saved;
            saved.at = at;
            std::copy_n(paint->grid + at * 8, 8, saved.bytes.begin());
            saved.flags = flags ? flags[at] : 0;
            const auto expected = saved.bytes[0];
            const auto writer = latest[group.top ? 1 : 0].find(at);
            if (!owned.contains(at) && ((expected && expected != ' ') || writer != latest[group.top ? 1 : 0].end()))
                valid = false;
            bool visible_top = false;
            const auto *visible = cell_at(x, y, &visible_top);
            if (!visible || (expected && expected != ' ' ?
                    visible_top != group.top || visible[0] != expected : visible[0] && visible[0] != ' ')) valid = false;
            if (saved.flags & ((1u << 3) | (1u << 4))) valid = false;
            for (size_t slot = 0; slot < 5; ++slot) {
                const auto texture = textures[group.top ? 1 : 0][slot];
                saved.textures[slot] = texture ? static_cast<uint64_t>(texture[at]) : 0;
                if (slot < 3 && saved.textures[slot] && !fonts.contains(texture[at], expected)) valid = false;
            }
            if (saved.textures[2] && (saved.textures[3] || saved.textures[4])) valid = false;
            paint->cells.push_back(std::move(saved));
        }
        if (!valid) { preserve(); continue; }
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            valid = g_native_drawn_text_epoch == epoch && g_native_drawn_text_revision == revision;
        }
        if (!valid || native_current_viewscreen() != owner) { preserve(); continue; }
        const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
        const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
        const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
        const SDL_Rect pixels_clip{origin_x + left * tile_w, origin_y + top * tile_h,
            (right - left) * tile_w, (bottom - top) * tile_h};
        int foreground = 0xffffff;
        for (const auto *draw : group.rows) if (draw && draw->foreground_rgb >= 0) {
            foreground = draw->foreground_rgb; break;
        }
        std::vector<Match> replacement = source_rows;
        for (auto &row : replacement) row.native_help_source_only = false;
        for (size_t line = 0; line < lines.size(); ++line) {
            const int offset = static_cast<int>(line) * line_height;
            Match output{left, top + offset / tile_h, 0, kToolbarTooltipBodyRule, std::move(lines[line]), {}};
            output.layout_x = left; output.layout_y = top + offset / tile_h;
            output.layout_pixel_y = offset % tile_h; output.layout_length = right - left;
            replacement.push_back(std::move(output));
        }
        paint->match_count = replacement.size();
        for (auto &row : replacement) {
            row.native_adventure_hover_paint = paint; row.native_captured_span = true;
            row.translation_result = translation; row.language_converted = config_.language == "zh-Hant";
            row.layout_native_clip = pixels_clip; row.layout_prepared = true;
            row.layout_fixed_baseline = true; row.layout_left = true;
            row.layout_reflowed_paragraph = true; row.layout_line_height_pixels = line_height;
            row.layout_foreground_rgb = foreground;
            if (!row.target.empty()) {
                row.native_adventure_hover_output = paint->outputs.size();
                paint->outputs.push_back(native_adventure_hover_output(row));
            }
            matches.push_back(std::move(row));
        }
    }
#else
    (void)rows; (void)matches; (void)untranslated; (void)only_y; (void)raw;
#endif
}

// Independent page readers can revisit raw cells after the working rows were
// reserved. A completed document's exact sources keep those readers from
// masking fragments if the final document transaction later has to decline.
static void native_reserve_adventure_hover_sources(std::vector<Match> &matches,
        const std::vector<std::shared_ptr<const NativeAdventureHoverPaint>> *retained = nullptr) {
    std::set<const NativeAdventureHoverPaint *> paints;
    if (retained) for (const auto &paint : *retained) if (paint) paints.insert(paint.get());
    for (const auto &match : matches)
        if (match.native_adventure_hover_paint) paints.insert(match.native_adventure_hover_paint.get());
    std::erase_if(matches, [&](const Match &match) {
        if (match.native_adventure_hover_paint) return false;
        const int length = native_match_source_length(match);
        if (length <= 0) return false;
        for (const auto *paint : paints) for (const auto &span : paint->sources)
            if (match.y == span.y && int64_t(match.x) < int64_t(span.x) + span.source.size() &&
                    int64_t(span.x) < int64_t(match.x) + length) return true;
        return false;
    });
}

static void native_mask_adventure_hover_documents(NativeUiLayerGrid &input,
        const graphicst &gps, std::vector<Match> &matches,
        std::vector<unsigned char> &base_suppression, std::vector<unsigned char> &top_suppression) {
    std::set<const NativeAdventureHoverPaint *> visited;
    std::set<const NativeAdventureHoverPaint *> rejected;
    for (const auto &match : matches) {
        const auto &paint = match.native_adventure_hover_paint;
        if (!paint || match.native_adventure_hover_masked || !visited.insert(paint.get()).second) continue;
        const size_t members = static_cast<size_t>(std::count_if(matches.begin(), matches.end(),
            [&](const Match &row) { return row.native_adventure_hover_paint.get() == paint.get(); }));
        bool valid = paint->match_count && members == paint->match_count &&
            paint->document && paint->document->screen == native_current_viewscreen() &&
            paint->dimx == gps.dimx && paint->dimy == gps.dimy && input.dimx == gps.dimx && input.dimy == gps.dimy &&
            paint->grid == (paint->top ? gps.screen_top : gps.screen) && (!paint->top || gps.top_in_use);
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            valid = valid && paint->document->epoch == g_native_drawn_text_epoch &&
                paint->revision == g_native_drawn_text_revision;
        }
        for (const auto &span : paint->sources) {
            const auto count = std::count_if(matches.begin(), matches.end(), [&](const Match &row) {
                return row.native_adventure_hover_paint.get() == paint.get() &&
                    !row.native_help_source_only && row.x == span.x && row.y == span.y &&
                    row.length == static_cast<int>(span.source.size()) && row.source == span.source;
            });
            if (count != 1) valid = false;
        }
        std::vector<bool> output_seen(paint->outputs.size(), false);
        if (output_seen.empty()) valid = false;
        for (const auto &row : matches) {
            if (row.native_adventure_hover_paint.get() != paint.get()) continue;
            const size_t index = row.native_adventure_hover_output;
            if (index == ~size_t{0}) {
                if (!row.target.empty()) valid = false;
                continue;
            }
            if (index >= output_seen.size() || output_seen[index] || row.target.empty() ||
                    native_adventure_hover_output(row) != paint->outputs[index]) { valid = false; continue; }
            output_seen[index] = true;
        }
        if (!std::all_of(output_seen.begin(), output_seen.end(), [](bool seen) { return seen; })) valid = false;
        auto &plane = input.planes[paint->top ? 1 : 0];
        for (const auto &cell : paint->cells) {
            if (!valid || cell.at >= plane.flags.size() || cell.at * 8 + 8 > plane.screen.size() ||
                    plane.flags[cell.at] != cell.flags ||
                    !std::equal(cell.bytes.begin(), cell.bytes.end(), plane.screen.begin() + cell.at * 8)) {
                valid = false; break;
            }
            for (size_t slot = 0; slot < 5; ++slot)
                if (cell.at >= plane.textures[slot].size() ||
                        static_cast<uint64_t>(plane.textures[slot][cell.at]) != cell.textures[slot]) valid = false;
            const auto &other = input.planes[paint->top ? 0 : 1];
            if (gps.top_in_use && other.screen[cell.at * 8] && other.screen[cell.at * 8] != ' ' &&
                    native_ui_top_layer_at(*input.graphics(), cell.at) != paint->top) valid = false;
        }
        if (!valid) { rejected.insert(paint.get()); continue; }
        auto &suppression = paint->top ? top_suppression : base_suppression;
        for (const auto &span : paint->sources) for (size_t byte = 0; byte < span.source.size(); ++byte) {
            const unsigned char ch = static_cast<unsigned char>(span.source[byte]);
            if (!ch || ch == ' ') continue;
            const size_t at = (size_t(span.x) + byte) * gps.dimy + span.y;
            suppression[at] = ch; plane.screen[at * 8] = ' ';
            for (size_t slot : {size_t{0}, size_t{1}, size_t{2}}) plane.textures[slot][at] = 0;
        }
    }
    std::erase_if(matches, [&](const Match &match) {
        return match.native_adventure_hover_paint && rejected.contains(match.native_adventure_hover_paint.get());
    });
    for (auto &match : matches)
        if (match.native_adventure_hover_paint && visited.contains(match.native_adventure_hover_paint.get()))
            match.native_adventure_hover_masked = true;
}
