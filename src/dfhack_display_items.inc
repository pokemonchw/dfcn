// internal/caravan/pedestal.lua, AssignItems. Coordinates are relative to
// the draggable Window body. Widget widths, gaps and bottom anchors are
// independent of the number of visible choices and the location tier.
std::vector<SDL_Rect> display_item_windows;
{
    constexpr std::string_view scope = "DFHack GUI Display items: ";
    constexpr std::string_view title = "Assign items for display";
    constexpr std::string_view total = "Total value of assigned items:";
    constexpr std::string_view instructions =
        "Click to assign/unassign. Shift click to assign/unassign a range.";
    const auto windows = native_dfhack_window_geometry(dfhack_context_rows);
    for (int ty = 0; ty + 22 < gps_->dimy; ++ty) {
        const auto title_at = dfhack_context_rows[ty].find(title);
        if (title_at == std::string::npos) continue;
        const int top = ty + 2, header = top + 9, list = header + 2;
        const auto search_at = dfhack_context_rows[top].find("Search:");
        if (search_at == std::string::npos || search_at < 28) continue;
        const int left = static_cast<int>(search_at) - 26;
        if (dfhack_context_rows[header].compare(left, 6, "status") != 0 ||
                dfhack_context_rows[header].compare(left + 24, 5, "value") != 0 ||
                dfhack_context_rows[header].compare(left + 31, 4, "name") != 0) continue;
        // Graphical skins can omit CP437 rails. The fixed list header, total
        // and branded bottom edge independently identify the same bounds.
        int bottom = 0, right = 0;
        for (const auto &window : windows) {
            if (window.frame.y == ty && window.frame.x == left - 2 &&
                    window.title_x == static_cast<int>(title_at) && window.title_length == title.size()) {
                bottom = ty + window.frame.h - 1;
                right = window.frame.x + window.frame.w - 1;
                break;
            }
        }
        if (!right) {
            for (int y = list; y + 7 < gps_->dimy; ++y) {
                if (dfhack_context_rows[y].compare(left, total.size(), total) != 0) continue;
                const auto brand = dfhack_context_rows[y + 7].find("DFHack", left);
                if (brand == std::string::npos || brand + 7 >= static_cast<size_t>(gps_->dimx)) continue;
                bottom = y + 7;
                right = static_cast<int>(brand) + 7;
                break;
            }
        }
        if (right <= left + 31 || bottom - 9 < list ||
                dfhack_context_rows[bottom - 7].compare(left, total.size(), total) != 0) continue;
        display_item_windows.push_back({left - 2, ty, right - left + 3, bottom - ty + 1});
        dfhack_auxiliary_regions.push_back(display_item_windows.back());
        const auto field = [&](int x, int y, std::string_view source, int end) {
            end = std::min(end, right);
            if (x < end) auxiliary_literal(x, y, source, end, false, scope);
        };
        const auto keyed = [&](int x, int y, int end, std::string_view caption) {
            end = std::min(end, right);
            const auto at = dfhack_context_rows[y].find(caption, x);
            if (at == std::string::npos || at + caption.size() > static_cast<size_t>(end)) return;
            field(static_cast<int>(at), y, caption, static_cast<int>(at + caption.size()));
        };
        const auto sort = [&](int x, int y, int end) {
            for (std::string_view word : {"status", "value", "name"}) {
                const auto at = dfhack_context_rows[y].find(word, x);
                if (at == std::string::npos || at + word.size() > static_cast<size_t>(end)) continue;
                const auto arrow = static_cast<unsigned char>(dfhack_context_rows[y][at + word.size()]);
                const bool directed = arrow == 30 || arrow == 31;
                const auto target = exact_literal_translation(std::string(scope) + std::string(word));
                if (target) auxiliary_field(static_cast<int>(at), y,
                    std::string_view(dfhack_context_rows[y]).substr(at, word.size() + directed),
                    end, *target + (directed ? (arrow == 30 ? "↑" : "↓") : ""));
            }
        };
        auxiliary_literal(static_cast<int>(title_at), ty, title,
            static_cast<int>(title_at + title.size()), true, scope);
        keyed(left, top, left + 21, "Sort by:");
        sort(left, top, left + 21);
        field(left + 26, top, "Search:", left + 33);
        const int filters = top + 3;
        for (const int offset : {1, 20}) {
            const int x = left + offset, end = std::min(right, x + 18);
            keyed(x, filters, end, offset == 1 ? "Min quality:" : "Max quality:");
            // CycleHotkeyLabel indents its second row by four cells. The
            // final characters of +Finely Crafted+ are outside its widget.
            for (std::string_view option : {"Ordinary", "-Well Crafted-", "+Finely Crafted+",
                    "*Superior*", "\xf0" "Exceptional" "\xf0", "\x0f" "Masterful" "\x0f", "Artifact"}) {
                if (end <= x + 4) continue;
                const auto visible = option.substr(0, end - x - 4);
                if (dfhack_context_rows[filters + 1].compare(x + 4, visible.size(), visible) != 0) continue;
                const auto marked = split_item_designation(option);
                if (const auto name = exact_literal_translation(std::string(scope) + std::string(marked.item)))
                    auxiliary_field(x + 4, filters + 1, visible, end, marked.prefix + *name + marked.suffix);
                break;
            }
        }
        const auto toggle = [&](int x, int y, int end, std::string_view caption, int gap) {
            end = std::min(right, end);
            const auto at = dfhack_context_rows[y].find(caption, x);
            if (at == std::string::npos || at + caption.size() > static_cast<size_t>(end)) return;
            const int value = static_cast<int>(at + caption.size()) + gap;
            field(static_cast<int>(at), y, caption, value - gap);
            for (std::string_view option : {"Yes", "No"}) field(value, y, option, end);
        };
        toggle(left + 41, filters, left + 71, "Hide unreachable items:", 1);
        toggle(left + 41, filters + 1, left + 71, "Hide forbidden items:", 3);
        toggle(left + 41, filters + 3, left + 71, "Hide written items:", 5);
        sort(left, header, left + 7);
        sort(left + 24, header, left + 30);
        sort(left + 31, header, std::min(right, left + 36));
        field(left, bottom - 7, total, left + static_cast<int>(total.size()));
        field(left + 7, bottom - 6, "Expected location tier:", left + 30);
        for (std::string_view tier : {"Meeting Hall", "Guildhall", "Grand Guildhall", "Temple Complex", "Temple"}) {
            if (trim_view(std::string_view(dfhack_context_rows[bottom - 6]).substr(left + 31, right - left - 31)) == tier)
                field(left + 31, bottom - 6, tier, right);
        }
        keyed(left, bottom - 4, left + 33, "Select all/none");
        toggle(left + 33, bottom - 4, left + 67, "See inside containers:", 1);
        field(left, bottom - 2, instructions, right);
        const auto pause = dfhack_context_rows[bottom].find("PAUSE FORCED", left);
        if (pause != std::string::npos && pause + 12 < static_cast<size_t>(right))
            gui_literal(static_cast<int>(pause), bottom, "PAUSE FORCED", static_cast<int>(pause + 12), "Frame status");

        const int name_x = left + 31;
        const bool scrollbar = dfhack_context_rows[list].compare(right - 2, 2, "/\\") == 0 &&
            dfhack_context_rows[bottom - 9].compare(right - 2, 2, "\\/") == 0;
        for (int y = list; y <= bottom - 9; ++y) {
            if (only_y >= 0 && only_y != y) continue;
            const auto &row = dfhack_context_rows[y];
            const auto status = trim_view(std::string_view(row).substr(left, 18));
            if (y == list + 2 && status == "No matches") { field(left, y, status, right); continue; }
            if (!status.empty() && status != "Unknown" && status != "Assigned here" &&
                    status != "Assigned elsewhere") continue;
            if (!status.empty()) field(left, y, status, left + 18);
            if (trim_view(std::string_view(row).substr(left + 20, 9)).empty()) continue;
            int end = right - (scrollbar ? 2 : 0);
            if (end <= name_x) continue;
            auto band = std::string_view(row).substr(name_x, end - name_x);
            auto visible = band.substr(0, band.find_last_not_of(' ') + 1);
            if (visible.empty()) continue;
            std::shared_ptr<const NativeDfhackDisplayItem> item;
            auto full = lookup_native_dfhack_display_item(gps_, name_x, y, visible, item);
            if (!full && !scrollbar && visible.size() + 2 >= band.size() && band.size() > 2) {
                // A graphics-only scrollbar can overwrite the last two
                // glyphs of an otherwise captured Painter:string.
                const auto prefix = band.substr(0, band.size() - 2);
                const auto ink = prefix.substr(0, prefix.find_last_not_of(' ') + 1);
                full = lookup_native_dfhack_display_item(gps_, name_x, y, ink, item);
                if (full) { visible = ink; end -= 2; }
            }
            if (!full && band.back() != ' ') continue;
            const auto complete = full.value_or(std::string(visible));
            auto result = translate_dfhack_display_item(complete, item.get());
            if (!result.usable() || !contains_cjk_utf8(result.target)) continue;
            Match match{name_x, y, static_cast<int>(visible.size()), kFortressItemCaptionRule,
                result.target, std::string(visible)};
            match.native_hover_untranslated = result.has_untranslated();
            match.translation_result = std::make_shared<const TranslationResult>(std::move(result));
            match.native_item_caption_source = complete;
            match.layout_x = name_x;
            match.layout_y = y;
            match.layout_length = end - name_x;
            match.layout_clip_right = end;
            match.layout_left = match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
            dfhack_auxiliary_matches.push_back(std::move(match));
        }
    }
}
