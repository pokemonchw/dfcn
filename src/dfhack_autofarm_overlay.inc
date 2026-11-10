// plugins/autofarm.lua owns a titleless 57x22 medium-frame cover. Its
// managed-farm heading and two complete button captions establish ownership
// independently of the native farm sheet or the overlay's screen position.
{
    constexpr std::string_view autofarm_cover_scope = "DFHack GUI Autofarm overlay: ";
    constexpr std::string_view managed = "This farm is managed by autofarm";
    constexpr std::string_view planting = "Now planting: ";
    constexpr std::string_view instructions =
        "Crops are chosen automatically based on your configured stock thresholds. "
        "Manual crop selection will be overridden.";
    constexpr std::string_view all_fallow =
        "All seasons are fallow: no plantable seeds available, or all crops are above their thresholds.";
    const auto cover_texts = native_dfhack_overlay_texts(gps_);
    for (const auto &window : native_dfhack_window_geometry(dfhack_context_rows)) {
        const auto &frame = window.frame;
        if (window.title_length != 0 || frame.w != 57 || frame.h != 22) continue;
        // Panel's frame contributes one cell, then each child has l=2.
        const int left = frame.x + 3, right = frame.x + frame.w - 3;
        const int heading_y = frame.y + 2, planting_y = frame.y + 3;
        const int prose_y = frame.y + 4, fallow_y = frame.y + 7;
        const int configure_y = frame.y + 16, manual_y = frame.y + 17;
        const int wrap_right = right - 3;
        if (dfhack_context_rows[heading_y].compare(left, managed.size(), managed) != 0 ||
                read_row(heading_y).compare(left, managed.size(), managed) != 0 ||
                dfhack_context_rows[planting_y].compare(left, planting.size(), planting) != 0)
            continue;

        struct CoverButton { int y; std::string_view caption; int caption_x = 0; };
        std::array<CoverButton, 2> buttons{{
            {configure_y, "configure autofarm", 0},
            {manual_y, "manage this farm manually", 0},
        }};
        bool complete_buttons = true;
        for (auto &button : buttons) {
            const auto band = std::string_view(dfhack_context_rows[button.y]).substr(left, right - left);
            if (band.size() < 4 || band.front() != '[' || band.back() != ']') {
                complete_buttons = false; break;
            }
            const auto label = band.substr(1, band.size() - 2);
            const size_t separator = label.find(": ");
            if (separator == std::string_view::npos || separator == 0) {
                complete_buttons = false; break;
            }
            std::string key(label.substr(0, separator));
            std::replace(key.begin(), key.end(), '-', '+');
            const auto caption_band = label.substr(separator + 2);
            if (!is_keybinding_code(key) || !caption_band.starts_with(button.caption) ||
                    !trim_view(caption_band.substr(button.caption.size())).empty() ||
                    read_row(button.y).compare(left, band.size(), band) != 0) {
                complete_buttons = false; break;
            }
            button.caption_x = left + 1 + static_cast<int>(separator) + 2;
        }
        if (!complete_buttons) continue;

        dfhack_auxiliary_regions.push_back(frame);
        const auto cover_literal = [&](int x, int y, std::string_view source, int end) {
            auxiliary_literal(x, y, source, end, false, autofarm_cover_scope);
        };
        cover_literal(left, heading_y, managed, right);
        for (const auto &button : buttons)
            cover_literal(button.caption_x, button.y, button.caption, right - 1);

        // The crop name is a separate LIGHTCYAN token. Painter captures its
        // complete raw name before viewport clipping; without that capture,
        // require a visible trailing blank rather than infer a name prefix.
        const int crop_x = left + static_cast<int>(planting.size());
        const int crop_right = frame.x + frame.w - 1;
        const auto crop_band = std::string_view(dfhack_context_rows[planting_y]).substr(
            crop_x, crop_right - crop_x);
        const auto crop_visible = trim_view(crop_band);
        std::optional<std::string> crop_source;
        if (!crop_visible.empty() && crop_visible.data() == crop_band.data()) {
            for (const auto &text : cover_texts) {
                if (text.overlay_name != "autofarm.farm_cover" || text.view_id != "now_planting" ||
                        text.role != NativeDfhackOverlayTextRole::Text ||
                        text.y != planting_y || text.full_x != crop_x || text.visible_offset != 0 ||
                        text.full.empty() || !std::string_view(text.full).starts_with(crop_visible))
                    continue;
                crop_source = text.full;
                break;
            }
            if (!crop_source && crop_visible.size() < crop_band.size())
                crop_source = std::string(crop_visible);
        }
        cover_literal(left, planting_y, planting, crop_x);
        if (crop_source) {
            auto target = exact_literal_translation(std::string(autofarm_cover_scope) + *crop_source);
            if (!target) target = translate_plant_name(*crop_source);
            if (!target) target = exact_literal_translation(*crop_source);
            if (target && contains_cjk_utf8(*target) &&
                    read_row(planting_y).compare(crop_x, crop_visible.size(), crop_visible) == 0) {
                std::vector<Match> rows{{crop_x, planting_y, static_cast<int>(crop_visible.size()),
                    kDfhackHotkeysHintRule, {}, std::string(crop_visible)}};
                rows.front().layout_native_clip = auxiliary_pixels(
                    {crop_x, planting_y, crop_right - crop_x, 1});
                append_bounded_paragraph(std::move(rows), *target, screen_rows,
                    dfhack_auxiliary_matches, only_y, crop_right, crop_right, {}, false, crop_x);
            }
        }

        // Only the stock-threshold instructions use text_to_wrap. Reproduce
        // WrappedLabel's own width (its frame minus three scrollbar columns)
        // and require every complete authored line before translating prose.
        const auto expected = dfhack_help_native_wrap(instructions, wrap_right - left);
        std::vector<Match> prose;
        bool complete_prose = !expected.empty() &&
            expected.size() <= static_cast<size_t>(fallow_y - prose_y);
        for (size_t line = 0; complete_prose && line < expected.size(); ++line) {
            const int y = prose_y + static_cast<int>(line);
            const auto ink = trim_view(expected[line]);
            const auto band = std::string_view(dfhack_context_rows[y]).substr(left, wrap_right - left);
            if (ink.empty() || trim_view(band) != ink ||
                    read_row(y).compare(left, ink.size(), ink) != 0) {
                complete_prose = false; break;
            }
            prose.push_back({left, y, static_cast<int>(ink.size()),
                kDfhackHotkeysHintRule, {}, std::string(ink)});
        }
        if (complete_prose) if (const auto target = exact_literal_translation(
                std::string(autofarm_cover_scope) + std::string(instructions))) {
            prose.front().layout_native_clip = auxiliary_pixels(
                {left, prose_y, wrap_right - left, fallow_y - prose_y});
            append_bounded_paragraph(std::move(prose), *target, screen_rows,
                dfhack_auxiliary_matches, only_y, wrap_right, wrap_right, {}, false, left);
        }

        // Despite its WrappedLabel class, fallow_note has no text_to_wrap:
        // render() calls setText with one long string. Recover that exact
        // authored branch from its clipped field, then use the warning's
        // empty allocation above the two buttons for the Chinese paragraph.
        const auto warning_visible = all_fallow.substr(0, static_cast<size_t>(right - left));
        if (dfhack_context_rows[fallow_y].compare(left, warning_visible.size(), warning_visible) == 0 &&
                read_row(fallow_y).compare(left, warning_visible.size(), warning_visible) == 0) {
            if (const auto target = exact_literal_translation(
                    std::string(autofarm_cover_scope) + std::string(all_fallow))) {
                bool clear_below = true;
                for (int y = fallow_y + 1; clear_below && y < configure_y; ++y)
                    clear_below = trim_view(std::string_view(dfhack_context_rows[y]).substr(
                        left, right - left)).empty();
                if (clear_below) {
                    std::vector<Match> rows{{left, fallow_y, static_cast<int>(warning_visible.size()),
                        kDfhackHotkeysHintRule, {}, std::string(warning_visible)}};
                    rows.front().layout_native_clip = auxiliary_pixels(
                        {left, fallow_y, right - left, configure_y - fallow_y});
                    append_bounded_paragraph(std::move(rows), *target, screen_rows,
                        dfhack_auxiliary_matches, only_y, right, right, {}, false, left);
                }
            }
        }
    }
}
