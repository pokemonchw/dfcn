// Complete native producer: extracted/load-game-mod-dialog. Both PE editions
// draw three headings, a separate authored name/version row, and either one
// or five buttons. Reserve these fields before generic words or prose can
// interpret an authored mod name (e.g. "Statues") as an ordinary item.
std::vector<SDL_Rect> Overlay::capture_load_game_mod_dialog(
        std::vector<std::string> &rows, std::vector<Match> &matches,
        const unsigned char *screen_override) const {
    std::vector<SDL_Rect> owned;
    constexpr std::array<std::string_view, 3> headings{
        "Failed to find compatible mod:", "Failed to install mod:",
        "Newer compatible version of mod detected:"};
    const NativePanelBorders borders(*gps_);
    const int tw = gps_->tile_pixel_x, th = gps_->tile_pixel_y;
    if (tw <= 0 || th <= 0) return owned;
    const int ox = (gps_->screen_pixel_x - gps_->dimx * tw) / 2;
    const int oy = (gps_->screen_pixel_y - gps_->dimy * th) / 2;
    // Both raw-file and graphics preparation append the saved mod's display
    // name after a fixed status prefix. That value has the same authored
    // identity as the popup name even while no dialog is open.
    for (bool top : {false, true}) {
        const auto *grid = top ? gps_->screen_top : gps_->screen;
        if (!grid || (screen_override && screen_override != grid)) continue;
        const auto snapshot = captured_native_drawn_text_snapshot(top);
        for (const auto &prefix : *snapshot) {
            if (prefix.source != "Loading object files...  " &&
                    prefix.source != "Preparing graphics...  ") continue;
            const int left = prefix.x + static_cast<int>(prefix.source.size());
            if (prefix.x < 0 || prefix.y < 0 || prefix.y >= gps_->dimy ||
                    left >= gps_->dimx || prefix.draw_grid != grid ||
                    prefix.draw_dimx != gps_->dimx || prefix.draw_dimy != gps_->dimy ||
                    rows[prefix.y].compare(prefix.x, prefix.source.size(), prefix.source) != 0)
                continue;
            const auto name = std::find_if(snapshot->begin(), snapshot->end(), [&](const auto &draw) {
                return draw.x == left && draw.y == prefix.y &&
                    draw.draw_grid == grid && draw.draw_epoch == prefix.draw_epoch &&
                    draw.sequence > prefix.sequence && !draw.source.empty();
            });
            if (name == snapshot->end()) continue;
            const auto length = std::min(name->source.size(), static_cast<size_t>(gps_->dimx - left));
            if (rows[name->y].compare(left, length, name->source, 0, length) != 0) continue;
            owned.push_back({left, name->y, static_cast<int>(length), 1});
            std::fill_n(rows[name->y].begin() + left, length, ' ');
            if (contains_cjk_utf8(name->source)) {
                Match match{left, name->y, static_cast<int>(length), kUiMessageRule,
                    native_text_to_utf8(name->source), name->source.substr(0, length)};
                match.layout_x = left;
                match.layout_length = gps_->dimx - left;
                match.layout_clip_right = gps_->dimx;
                match.layout_left = true;
                match.layout_prepared = true;
                match.layout_line_height_pixels = th;
                matches.push_back(std::move(match));
            }
        }
    }
    for (int y = 2; y + 4 < gps_->dimy; ++y) {
        for (size_t kind = 0; kind < headings.size(); ++kind) {
            const auto heading = headings[kind];
            const auto at = rows[y].find(heading);
            if (at == std::string::npos) continue;
            const int x = static_cast<int>(at);
            bool top = false;
            cell_at(x, y, &top);
            const auto *grid = top ? gps_->screen_top : gps_->screen;
            if (!grid || (screen_override && screen_override != grid)) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                x, x + static_cast<int>(heading.size()), y);
            if (!panel || x != panel->x + 1 || y != panel->y + 1 ||
                    panel->h != 7 || panel->w != (kind == 2 ? 83 : 69)) continue;
            const int right = panel->x + panel->w - 1;
            const auto snapshot = captured_native_drawn_text_snapshot(top);
            const auto &draws = *snapshot;
            const auto anchor = std::find_if(draws.begin(), draws.end(), [&](const auto &draw) {
                return draw.source == heading && draw.x == x && draw.y == y &&
                    draw.draw_grid == grid && draw.draw_dimx == gps_->dimx &&
                    draw.draw_dimy == gps_->dimy && draw.native_caller;
            });
            const auto append = [&](int left, int row_y, std::string source,
                                    std::string target, int layout_right, bool button) {
                if (source.empty()) return;
                Match match{left, row_y, static_cast<int>(source.size()),
                    kUiMessageRule, std::move(target), std::move(source)};
                owned.push_back({left, row_y, match.length, 1});
                std::fill_n(rows[row_y].begin() + left, match.length, ' ');
                if (match.target.empty()) return; // authored ASCII retains native ink
                match.layout_x = left;
                match.layout_length = layout_right - left;
                match.layout_clip_right = layout_right;
                match.layout_left = !button;
                match.layout_prepared = true;
                match.layout_line_height_pixels = th;
                match.layout_native_clip = SDL_Rect{ox + left * tw, oy + row_y * th,
                    (layout_right - left) * tw, th};
                matches.push_back(std::move(match));
            };
            const auto lookup = [&](std::string_view source) {
                return exact_literal_translation("Load game mod dialog: " + std::string(source));
            };
            const auto title = lookup(heading);
            if (!title) continue;

            // Each part below is its own addst call. Use the original caller
            // relationship, not a substring search inside a user-authored name
            // or version. PE 53.17 Steam/classic have identical body offsets.
            std::string detail(rows[y + 1].substr(x, right - x));
            detail.resize(detail.find_last_not_of(' ') == std::string::npos
                ? 0 : detail.find_last_not_of(' ') + 1);
            std::string target;
            if (kind == 2 && anchor != draws.end()) {
                struct Replacement { int x; size_t length; std::string target; };
                std::vector<Replacement> replacements;
                for (const auto &[offset, literal] :
                        std::array<std::pair<uintptr_t, std::string_view>, 3>{{
                            {0xfe, " (save uses "}, {0x173, ", not found"}, {0x1dc, ")"}}}) {
                    const auto part = std::find_if(draws.begin(), draws.end(), [&](const auto &draw) {
                        return draw.native_caller == anchor->native_caller + offset &&
                            draw.draw_grid == anchor->draw_grid &&
                            draw.draw_epoch == anchor->draw_epoch && draw.y == y + 1 &&
                            draw.source == literal && draw.x >= x &&
                            draw.x + static_cast<int>(literal.size()) <= x + static_cast<int>(detail.size()) &&
                            detail.compare(draw.x - x, literal.size(), literal) == 0;
                    });
                    if (part != draws.end()) {
                        if (const auto translated = lookup(literal))
                            replacements.push_back({part->x - x, literal.size(), *translated});
                    }
                }
                // The candidate-null branch prints only the name and space.
                // The normal branch always has the opener and closing bracket;
                // the missing-saved-version suffix is independently optional.
                if (replacements.size() >= 2 && replacements.front().x >= 0 &&
                        replacements.back().target == "）") {
                    size_t cursor = 0;
                    for (const auto &part : replacements) {
                        target += native_text_to_utf8(std::string_view(detail).substr(cursor, part.x - cursor));
                        target += part.target;
                        cursor = part.x + part.length;
                    }
                    target += native_text_to_utf8(std::string_view(detail).substr(cursor));
                }
            }
            if (target.empty() && contains_cjk_utf8(detail)) target = native_text_to_utf8(detail);
            append(x, y, std::string(heading), *title, right, false);
            append(x, y + 1, std::move(detail), std::move(target), right, false);

            // Text offsets and allocations come from the same renderer and
            // input branches. Keep every button in its original native skin.
            const std::array<std::string_view, 5> labels{
                "Update", "Update all", "Don't update", "Don't update any", "Back to title"};
            const std::array<int, 5> starts{2, 13, 28, 45, 66};
            const std::array<int, 5> widths{6, 10, 12, 16, 13};
            for (size_t index = kind == 2 ? 0 : 4; index < labels.size(); ++index) {
                const auto label = labels[index];
                const int left = kind == 2 ? x + starts[index] : x + 27;
                const int row_y = y + 4;
                if (left + static_cast<int>(label.size()) > gps_->dimx ||
                        rows[row_y].compare(left, label.size(), label) != 0) continue;
                if (const auto translated = lookup(label))
                    append(left, row_y, std::string(label), *translated,
                        left + widths[index], true);
            }
            return owned;
        }
    }
    return owned;
}
