// AF1190's sensory HUD draws labels and values separately. Its spoor list
// mixes addchar (N/S/E/W) and addst (diagonals), so text captures alone cannot
// own every direction. Native source: data/extracted/adventure-tracking-hud.
void Overlay::append_adventure_tracking_hud_matches(
        std::vector<std::string> &rows, std::vector<Match> &matches,
        int only_y, const unsigned char *screen_override) const {
    const auto base = native_history_profile_base();
    if (!base) return;
    const auto address = [base](uintptr_t rva) { return native_ui_semantic_address(rva); };
    const auto append = [&](int x, int y, std::string_view source,
                            const std::string &target, int width, int rule) {
        if (x < 0 || y < 0 || y >= gps_->dimy || source.empty() ||
                source.size() > static_cast<size_t>(gps_->dimx - x) ||
                (only_y >= 0 && only_y != y) ||
                rows[y].compare(x, source.size(), source) != 0) return;
        for (size_t i = 0; i < source.size(); ++i) {
            bool top = false;
            const auto *cell = cell_at(x + static_cast<int>(i), y, &top);
            if (!cell || (cell[0] ? cell[0] : ' ') != static_cast<unsigned char>(source[i]) ||
                    (screen_override && screen_override !=
                        (top ? gps_->screen_top : gps_->screen))) return;
        }
        const int end = x + static_cast<int>(source.size());
        std::erase_if(matches, [&](const Match &match) {
            return match.y == y && match.x < end && x < match.x + match.length;
        });
        Match match{x, y, end - x, rule, target, std::string(source)};
        match.layout_x = x;
        match.layout_y = y;
        match.layout_length = std::min(width, gps_->dimx - x);
        match.layout_clip_right = x + match.layout_length;
        match.layout_left = true;
        matches.push_back(std::move(match));
        std::fill(rows[y].begin() + x, rows[y].begin() + end, ' ');
    };
    for (const bool top : {false, true}) {
        const auto *grid = top ? gps_->screen_top : gps_->screen;
        if (!grid || (screen_override && screen_override != grid)) continue;
        const auto draws = captured_native_drawn_text_view(top);
        for (const auto &label : draws) {
            const bool tracks = label.native_caller == address(0xb0008c);
            if (!tracks && label.native_caller != address(0xb00156)) continue;
            if (label.draw_grid != grid || label.draw_dimx != gps_->dimx ||
                    label.draw_dimy != gps_->dimy || label.x < 0 || label.y < 0 ||
                    label.x >= gps_->dimx || label.y >= gps_->dimy) continue;
            const std::string_view prefix = tracks ? "Tracks Visible: " : "Strongest Odor: ";
            if (label.source != prefix) continue;
            std::string source = label.source;
            const uintptr_t value_writer = address(tracks ? 0xb000cd : 0xb00221);
            for (const auto &value : draws) {
                if (value.native_caller != value_writer || value.draw_grid != grid ||
                        value.draw_dimx != gps_->dimx || value.draw_dimy != gps_->dimy ||
                        value.x != label.x + static_cast<int>(label.source.size()) ||
                        value.y != label.y) continue;
                source += value.source;
                break;
            }
            std::optional<std::string> target;
            if (tracks) {
                if (const auto heading = exact_literal_translation("Tracks Visible:"))
                    target = *heading + source.substr(prefix.size());
            } else {
                std::vector<int> colors;
                target = translate_help_paragraph(trim_view(source), {}, colors, true);
                // Empty native NAME[0] still draws the label. Unrecognized
                // mod odors retain their authored value with a Chinese label.
                if (!target) {
                    if (const auto heading = exact_literal_translation("Strongest Odor:"))
                        target = *heading + native_text_to_utf8(
                            std::string_view(source).substr(prefix.size()));
                }
            }
            if (!target) continue;
            append(label.x, label.y, source, *target,
                static_cast<int>(source.size()), kUiMessageRule);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            if (!flags) continue;
            constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
            const auto half = flags[static_cast<size_t>(label.x) * gps_->dimy + label.y]
                & (upper | lower);
            const int mate = half == upper ? label.y + 1 : half == lower ? label.y - 1 : -1;
            if (mate >= 0 && mate < gps_->dimy &&
                    (flags[static_cast<size_t>(label.x) * gps_->dimy + mate] & (upper | lower)) ==
                        (half == upper ? lower : upper))
                append(label.x, mate, source, *target,
                    static_cast<int>(source.size()), kUiMessageRule);
        }
    }

    uint32_t display = 0;
    std::array<int16_t, 9> positions{};
    const uintptr_t records = address(0x2643c00);
    if (gps_->dimx < 11 || !records ||
            !native_history_copy(address(0x2643bb8), display) || !(display & 1) ||
            !native_history_copy(address(0x2643bc0), positions) ||
            positions.front() == -30000) return;
    static constexpr std::array<std::string_view, 8> directions{
        "N", "S", "E", "NE", "W", "NW", "SE", "SW"};
    std::vector<std::string_view> bearings;
    for (size_t i = 0; i < positions.size(); ++i) {
        if (positions[i] == -30000) continue;
        uint16_t flags = 0;
        if (!native_history_copy(records - 8 + i * 16, flags)) return;
        bearings.push_back((flags & 2) ? directions[(flags & 0x1c) >> 2] : "");
    }
    // Native list origin is (1,1), or (1,11) below the other compass.
    // The shared top edge uses junction glyphs, not top corner glyphs.
    // Read the complete side/bottom frame and native slot order instead.
    const NativePanelBorders borders(*gps_);
    for (const int top : {0, 10}) {
        if (top + 10 >= gps_->dimy || !borders.at(0, top + 10, 6) ||
                !borders.at(10, top + 10, 8)) continue;
        bool intact = true;
        for (int i = 1; i < 10; ++i) {
            if (!borders.at(0, top + i, 3) || !borders.at(10, top + i, 5) ||
                    !borders.at(i, top + 10, 7)) intact = false;
        }
        if (!intact) continue;
        for (size_t i = 0; i < bearings.size(); ++i) {
            const auto bearing = bearings[i];
            const int y = top + 1 + static_cast<int>(i);
            for (int x = 2; x < 10; ++x) {
                const char expected = x >= 3 && x < 3 + static_cast<int>(bearing.size())
                    ? bearing[static_cast<size_t>(x - 3)] : ' ';
                const auto ch = visible_char_at(x, y);
                if ((ch ? ch : ' ') != expected) intact = false;
            }
        }
        if (!intact) continue;
        for (size_t i = 0; i < bearings.size(); ++i) {
            if (bearings[i].empty()) continue;
            const auto target = exact_literal_translation(
                "Adventure compass: " + std::string(bearings[i]));
            if (target)
                append(3, top + 1 + static_cast<int>(i), bearings[i], *target,
                    4, kAdventureCompassRule);
        }
    }
}
