// AF1190's action queue has 28 switch inputs, including shared cases and
// the Move/Charge and Nock/Load subbranches. Bind the actual addst callers,
// not the spelling of a word or an assumed screen corner. Both configured
// PE editions and the complete switch are retained in
// data/extracted/adventure-action-panel.
void Overlay::append_adventure_action_panel_matches(
        std::vector<std::string> &rows, std::vector<Match> &matches,
        int only_y, const unsigned char *screen_override) const {
    const auto base = native_history_profile_base();
    if (!base) return;
    struct Writer {
        uintptr_t rva;
        std::string_view source;
        bool direction = false;
    };
    static constexpr Writer writers[] = {
        {0xafef6f, "Charge", true}, {0xafefa2, "Move", true},
        {0xaff1ac, " to act"}, {0xaff205, "Attack", true},
        {0xaff37b, "Jump"}, {0xaff3c9, "Push Object"},
        {0xaff417, "Hold"}, {0xaff465, "Mount"},
        {0xaff4b3, "Dismount"}, {0xaff501, "Lead animal"},
        {0xaff54f, "Stop leading animal"}, {0xaff59d, "Release"},
        {0xaff5eb, "Unsteady"}, {0xaff639, "Regaining balance"},
        {0xaff687, "Climb"}, {0xaff6d5, "Suck Blood"},
        {0xaff723, "Job"}, {0xaff771, "Talk"},
        {0xaff7bf, "Parry"}, {0xaff80d, "Block"},
        {0xaff85b, "Dodge", true}, {0xaff92d, "Recover"},
        {0xaff97b, "Stand Up"}, {0xaff9c9, "Lie Down"},
        {0xaffa8e, "Nock ammo"}, {0xaffa8e, "Load ammo"},
        {0xaffb4e, "Shoot weapon"}, {0xaffb9c, "Throw item"},
        {0xaffc0e, "and more"},
    };
    const auto address = [base](uintptr_t rva) {
        return native_ui_semantic_address(rva);
    };
    uintptr_t first_writer = UINTPTR_MAX, last_writer = 0;
    for (const auto &writer : writers) if (const auto at = address(writer.rva)) {
        first_writer = std::min(first_writer, at); last_writer = std::max(last_writer, at);
    }
    if (!first_writer || !last_writer) return;
    const auto direction_target = [&](std::string_view source) -> std::optional<std::string> {
        std::string_view bearing = source;
        char height = 0;
        if (!bearing.empty() && (bearing.back() == '+' || bearing.back() == '-')) {
            height = bearing.back();
            bearing.remove_suffix(1);
        }
        static constexpr std::string_view bearings[]{"N", "S", "E", "W", "NE", "NW", "SE", "SW"};
        std::string target;
        if (!bearing.empty()) {
            if (std::find(std::begin(bearings), std::end(bearings), bearing) == std::end(bearings))
                return std::nullopt;
            const auto translated = exact_literal_translation("Adventure compass: " + std::string(bearing));
            if (!translated) return std::nullopt;
            target = *translated;
        }
        if (height) {
            const auto translated = exact_literal_translation(
                std::string("Adventure action queue: ") + height);
            if (!translated) return std::nullopt;
            target += *translated;
        }
        return target.empty() ? std::nullopt : std::optional<std::string>{std::move(target)};
    };
    for (const bool top : {false, true}) {
        const auto *grid = top ? gps_->screen_top : gps_->screen;
        if (!grid || (screen_override && screen_override != grid)) continue;
        const auto draws = captured_native_drawn_text_view(top);
        for (const auto &draw : draws) {
            if (draw.native_caller < first_writer || draw.native_caller > last_writer ||
                    draw.draw_grid != grid || draw.draw_dimx != gps_->dimx ||
                    draw.draw_dimy != gps_->dimy || draw.x < 0 || draw.y < 0 ||
                    draw.x >= gps_->dimx || draw.y >= gps_->dimy) continue;
            const auto writer = std::find_if(std::begin(writers), std::end(writers),
                [&](const Writer &entry) {
                    return draw.source == entry.source && draw.native_caller == address(entry.rva);
                });
            if (writer == std::end(writers)) continue;
            const auto target = exact_literal_translation(
                "Adventure action queue: " + std::string(trim_view(draw.source)));
            if (!target || target->empty()) continue;
            // The renderer advances one row per action and uses ordinary
            // addst. Retained half-font flags from covered widgets do not
            // create a second row for this draw.
            const int y = draw.y;
            if (only_y >= 0 && only_y != y) continue;
            {
                int native_right = gps_->dimx;
                if (draw.draw_clip) {
                    if (draw.x < draw.draw_clip->x || y < draw.draw_clip->y ||
                            y >= draw.draw_clip->y + draw.draw_clip->h) continue;
                    native_right = std::min(native_right, draw.draw_clip->x + draw.draw_clip->w);
                }
                const auto owned_byte = [&](int x, unsigned char expected) {
                    if (x < 0 || x >= native_right) return false;
                    bool layer = false;
                    const auto *cell = cell_at(x, y, &layer);
                    const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                    return cell && layer == top &&
                        (cell[0] ? cell[0] : ' ') == expected &&
                        (grid[tile * 8] ? grid[tile * 8] : ' ') == expected;
                };
                int length = 0;
                while (length < static_cast<int>(draw.source.size()) &&
                        owned_byte(draw.x + length, static_cast<unsigned char>(draw.source[length])) &&
                        rows[y][draw.x + length] == draw.source[length]) ++length;
                if (!length || trim_view(std::string_view(draw.source).substr(0, length)).empty()) continue;
                // Only the actual native clip can shorten a source. A later
                // foreground overwrite inside that clip does not authorize
                // translating an arbitrary surviving prefix.
                if (length < static_cast<int>(draw.source.size()) && draw.x + length != native_right) continue;
                // Long native labels can write past their own frame. Erase
                // their complete current ink, but fit Chinese inside it.
                int right = std::min(gps_->dimx, draw.x + (writer->direction ? 8 : 14));
                if (writer->rva == 0xaff1ac)
                    right = std::min(right, draw.x + static_cast<int>(draw.source.size()));
                if (length < static_cast<int>(draw.source.size())) right = std::min(right, draw.x + length);
                if (draw.draw_clip) right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
                if (writer->rva == 0xaffa8e) {
                    // The count is a separate native draw, right-aligned at
                    // x=14. It is never ammunition text or a translated name.
                    for (const auto &count : draws)
                        if (count.native_caller == address(0xaffaf3) && count.y == draw.y &&
                                count.draw_grid == grid && count.draw_epoch == draw.draw_epoch &&
                                count.x > draw.x && count.x + static_cast<int>(count.source.size()) == draw.x + 13)
                            right = std::min(right, count.x - 1);
                }
                if (right <= draw.x) continue;
                const auto append = [&](int x, std::string source, const std::string &translated,
                                        int layout_left, int layout_right, bool align_right) {
                    const int end = x + static_cast<int>(source.size());
                    std::erase_if(matches, [&](const Match &match) {
                        return match.y == y && match.x < end && x < match.x + match.length;
                    });
                    Match match{x, y, end - x, kAdventureActionPanelRule, translated, source};
                    match.layout_x = layout_left;
                    match.layout_y = y;
                    match.layout_length = layout_right - layout_left;
                    match.layout_clip_right = layout_right;
                    match.layout_left = !align_right;
                    match.layout_right = align_right;
                    match.layout_fixed_baseline = true;
                    matches.push_back(std::move(match));
                    std::fill(rows[y].begin() + x, rows[y].begin() + end, ' ');
                };
                append(draw.x, draw.source.substr(0, length), *target, draw.x, right, false);
                if (!writer->direction || length != static_cast<int>(draw.source.size())) continue;
                // These three producers use addchar, so no captured string
                // exists for the bearing. Its owner, offset and grammar come
                // from the switch above, not an English-looking map glyph.
                const int direction_x = draw.x + 11;
                const int direction_right = draw.x + 14;
                if (direction_right > gps_->dimx || (draw.draw_clip &&
                        direction_right > draw.draw_clip->x + draw.draw_clip->w)) continue;
                std::string source;
                bool intact = true;
                for (int x = direction_x; x < direction_right; ++x) {
                    const unsigned char ch = visible_char_at(x, y);
                    if (!owned_byte(x, ch ? ch : ' ')) { intact = false; break; }
                    source.push_back(ch ? static_cast<char>(ch) : ' ');
                }
                const std::string bearing(trim_view(source));
                const auto translated = direction_target(bearing);
                if (!intact || bearing.empty() || source.front() == ' ' || !translated) continue;
                // The unused gap belongs to this same native queue row. Do
                // not relocate Chinese ink through a foreground field.
                for (int x = draw.x + 8; x < direction_x; ++x)
                    if (!owned_byte(x, ' ')) intact = false;
                if (!intact || rows[y].compare(direction_x, bearing.size(), bearing) != 0) continue;
                append(direction_x, bearing, *translated, draw.x + 8, direction_right, true);
            }
        }
    }
}

void Overlay::layout_adventure_action_panel(SDL_Renderer *renderer) {
    for (auto &match : prepared_matches_) {
        if (match.rule != kAdventureActionPanelRule || match.target.empty()) continue;
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x,
            match.layout_x + match.layout_length, true, true);
    }
}
