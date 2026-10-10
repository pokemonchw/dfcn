// The tribute/spoils renderer submits each count and complete item or animal
// description in one addst call. Claim those native fields before any generic
// word or item reader can separate their articles, materials and quantities.
void Overlay::append_world_spoils_items(std::vector<std::string> &rows,
        std::vector<Match> &matches, std::vector<Match> &untranslated,
        int only_y, const unsigned char *screen_override) const {
#ifdef _WIN32
    if (!gps_) return;
    const uintptr_t base = native_history_profile_base();
    if (!base) return;
    // PE 53.16 world render: get_number + item description at a82c10, or
    // get_number + creature description at aa3bd0, then one complete draw.
    const uintptr_t item_writer = native_pe_address(base, 0x1d0957);
    const uintptr_t animal_writer = native_pe_address(base, 0x1d0a6c);
    const std::array batches{captured_native_drawn_text_rows(false),
        captured_native_drawn_text_rows(true)};
    const NativePanelBorders borders(*gps_);
    constexpr uint32_t upper = 1u << 3, lower_half = 1u << 4;
    for (const auto &batch : batches) for (const auto &draw : batch) {
        const bool animal = animal_writer && draw.native_caller == animal_writer;
        if ((!animal && (!item_writer || draw.native_caller != item_writer)) ||
                draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 ||
                draw.y >= gps_->dimy || draw.source.empty() ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                (screen_override && screen_override != draw.draw_grid)) continue;
        const auto panel = native_panel_interior(borders, *gps_,
            SDL_Rect{draw.x, draw.y, 1, 1});
        if (!panel) continue;
        int right = panel->x + panel->w;
        if (draw.draw_clip) right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
        const auto scrollbars = native_vertical_scrollbar_spans(*gps_, *panel);
        for (const auto &bar : scrollbars)
            if (draw.y >= bar.y && draw.y < bar.y + bar.h && bar.x > draw.x)
                right = std::min(right, bar.x);
        if (right <= draw.x) continue;
        size_t length = std::min(draw.source.size(), static_cast<size_t>(right - draw.x));
        while (length && draw.source[length - 1] == ' ') --length;
        if (!length) continue;
        const auto row_half = [&](int y) -> uint32_t {
            if (y < panel->y || y >= panel->y + panel->h || y < 0 || y >= gps_->dimy ||
                    rows[y].compare(draw.x, length, draw.source, 0, length) != 0)
                return UINT32_MAX;
            uint32_t half = UINT32_MAX;
            const auto *flags = draw.top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            for (size_t offset = 0; offset < length; ++offset) {
                if (draw.source[offset] == ' ') continue;
                bool top = false;
                const int x = draw.x + static_cast<int>(offset);
                const auto *cell = cell_at(x, y, &top);
                if (!cell || top != draw.top_layer || cell[0] !=
                        static_cast<unsigned char>(draw.source[offset])) return UINT32_MAX;
                const uint32_t current = flags
                    ? flags[static_cast<size_t>(x) * gps_->dimy + y] & (upper | lower_half) : 0;
                if (current == (upper | lower_half) ||
                        (half != UINT32_MAX && current != half)) return UINT32_MAX;
                half = current;
            }
            return half;
        };
        const uint32_t half = row_half(draw.y);
        if (half == UINT32_MAX) continue;
        const int primary_y = half == lower_half ? draw.y - 1 : draw.y;
        const bool split = half == upper || half == lower_half;
        const bool paired = !split || (row_half(primary_y) == upper &&
            row_half(primary_y + 1) == lower_half);
        const std::string complete = draw.complete_source.empty() ? draw.source : draw.complete_source;
        auto target = paired ? translate_fortress_item_caption(complete) : std::nullopt;
        if (paired && !target && animal) {
            // Livestock uses the same native number producer, followed by a
            // full RAW creature label. Prefer its longest valid count prefix.
            for (size_t at = complete.rfind(' '); at != std::string::npos;
                    at = at ? complete.rfind(' ', at - 1) : std::string::npos) {
                const auto count = translate_announcement_number(std::string_view(complete).substr(0, at));
                if (!count) continue;
                const auto creature = translate_creature_label(std::string_view(complete).substr(at + 1));
                if (creature) target = *count + " × " + *creature;
                break;
            }
        }
        const auto append = [&](int y, bool duplicate) {
            Match item{draw.x, y, static_cast<int>(length), kWorldSiteRowRule,
                target ? *target : native_text_to_utf8(complete), draw.source.substr(0, length)};
            item.native_hover_untranslated = !target;
            if (!target) item.native_help_review_source = complete;
            item.layout_x = draw.x;
            item.layout_y = paired ? primary_y : y;
            item.layout_length = right - draw.x;
            item.layout_clip_right = right;
            item.layout_left = true;
            item.layout_ellipsize = true;
            item.layout_foreground_rgb = draw.foreground_rgb;
            if (split && paired) {
                item.native_split_text = true;
                item.native_split_top_y = primary_y;
                item.layout_pixel_y = gps_->tile_pixel_y / 2;
            }
            std::fill_n(rows[y].begin() + draw.x, length, ' ');
            if (only_y >= 0 && only_y != y) return;
            if (!paired) {
                item.native_help_source_only = true;
                untranslated.push_back(std::move(item));
            } else {
                if (duplicate) {
                    item.target.clear();
                    item.native_split_duplicate = true;
                }
                matches.push_back(std::move(item));
            }
        };
        if (paired) {
            append(primary_y, false);
            if (split) append(primary_y + 1, true);
        } else append(draw.y, false);
    }
#else
    // This source binding is only established for the supported PE images.
    // ELF captions retain their existing route until its callers are known.
    (void)rows; (void)matches; (void)untranslated; (void)only_y; (void)screen_override;
#endif
}
