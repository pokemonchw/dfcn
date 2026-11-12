// Notification producers own complete live report/markup records and their
// drawn rows. Keep their private grid out of page discovery and the global
// announcement-history recovery used by the full Reports window.
std::vector<Match> Overlay::find_native_notification_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || gps_->dimx <= 0 || gps_->dimx > 1000 ||
            gps_->dimy <= 0 || gps_->dimy > 1000 || trie_.empty()) return result;
    constexpr int only_y = -1;
    const unsigned char *screen_override = nullptr;
    std::vector<std::string> screen_rows(gps_->dimy, std::string(gps_->dimx, ' '));
    // The private grid owns these rectangles only. Sampling the rest of the
    // screen cannot contribute a notification and multiplied cell lookups by
    // the whole display area whenever a list changed.
    for (const auto &frame : g_native_notification_layer.frames)
        for (int y = std::max(0, frame.y);
                y < std::min(gps_->dimy, frame.y + frame.h); ++y)
            for (int x = std::max(0, frame.x);
                    x < std::min(gps_->dimx, frame.x + frame.w); ++x) {
                const auto ch = visible_char_at(x, y);
                if (ch) screen_rows[y][x] = static_cast<char>(ch);
            }
    std::vector<Match> untranslated_help_rows;

    // These existing readers use the live popup's markup or each alert's
    // complete parent, not a historical opening-word match. They retain the
    // original address proofs, palettes, repeat counts and visible viewport.
    append_embark_introduction_matches(screen_rows, result, only_y, false);
#include "adventure_divine_popup.inc"
#include "adventure_announcements.inc"
#include "adventure_reading_rows.inc"

    // The alert renderers emit these fixed instructions as ordinary addst
    // captions. Translate their complete catalog paragraph directly: the
    // generic UI-message reader also queries all announcement history.
    const NativePanelBorders borders(*gps_);
    for (int y = 0; y < gps_->dimy; ++y) {
        for (const auto instruction : native_announcement_instructions) {
            const size_t at = screen_rows[y].find(instruction);
            if (at == std::string::npos ||
                    !has_word_boundaries(screen_rows[y], at, at + instruction.size())) continue;
            const int x = static_cast<int>(at);
            const int length = static_cast<int>(instruction.size());
            std::vector<int> colors;
            colors.reserve(instruction.size());
            for (int column = x; column < x + length; ++column) {
                bool top = false;
                const auto *cell = cell_at(column, y, &top);
                colors.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
            }
            std::vector<int> target_colors;
            auto translated = translate_help_paragraph_result(instruction, colors,
                target_colors, true);
            const auto panel = native_panel_interior(borders, *gps_, x, x + length, y);
            int right = panel ? panel->x + panel->w : gps_->dimx;
            if (!panel) for (const auto &frame : g_native_notification_layer.frames)
                if (x >= frame.x && y >= frame.y && y < frame.y + frame.h &&
                        x + length <= frame.x + frame.w)
                    right = std::min(right, frame.x + frame.w - 1);
            Match row{x, y, length, kUiMessageRule, {}, std::string(instruction)};
            const size_t first = result.size();
            if (translated.usable() && translated.changed() &&
                    append_bounded_paragraph({row}, translated.target, screen_rows,
                        result, only_y, right, right, target_colors, false, x)) {
                const auto metadata = std::make_shared<const TranslationResult>(std::move(translated));
                for (size_t index = first; index < result.size(); ++index)
                    result[index].translation_result = metadata;
            } else {
                // A failed complete instruction keeps its original glyphs;
                // noun/template matches cannot consume individual fragments.
                std::fill_n(screen_rows[y].begin() + x, length, ' ');
            }
            break;
        }
    }

    // All remaining ink belongs to this component's interface controls.
    // The complete record readers already reserved translated and unknown
    // report rows, so UI literals/templates cannot reclaim their fragments.
    append_native_info_grid_matches(screen_rows, result, only_y, false);
    if (announcement_popup_region) {
        const auto &body = *announcement_popup_region;
        std::erase_if(result, [&](const Match &match) {
            return match.y >= body.y && match.y < body.y + body.h &&
                match.x < body.x + body.w &&
                body.x < match.x + std::max(1, match.length);
        });
        result.insert(result.end(),
            std::make_move_iterator(announcement_popup_matches.begin()),
            std::make_move_iterator(announcement_popup_matches.end()));
    }
    return result;
}
