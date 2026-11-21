// The four Objects lists own generated names, quoted glosses and claims.
// Recenter/view buttons suffice here; ordinary item state actions do not.
void Overlay::append_fortress_object_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y,
        const unsigned char *screen_override) const {
    if (!config_.compositional_rules || !gps_ || !gps_->screen) return;
    std::vector<std::string> source_rows(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) source_rows[y][x] = static_cast<char>(cell[0]);
        }
    int tabs_y = -1;
    std::optional<SDL_Rect> panel;
    const NativePanelBorders borders(*gps_);
    for (int y = 0; y < gps_->dimy && !panel; ++y) {
        const auto &row = source_rows[y];
        const auto artifacts = row.find("Artifacts"), symbols = row.find("Symbols");
        const auto named = row.find("Named objects"), written = row.find("Written content");
        if (!(artifacts < symbols && symbols < named && named < written) ||
                written == std::string::npos) continue;
        panel = native_panel_interior(borders, *gps_, static_cast<int>(artifacts),
            static_cast<int>(written + std::string_view("Written content").size()), y);
        if (panel) tabs_y = y;
    }
    if (!panel) return;
    int panel_right = panel->x + panel->w;
    const int bottom = panel->y + panel->h;
    for (const auto &bar : native_vertical_scrollbar_spans(*gps_, *panel))
        panel_right = std::min(panel_right, bar.x);
    const auto draws = std::array{captured_native_drawn_text_view(),
        captured_native_drawn_text_view(true)};
    const auto captures = captured_clipped_captions();
    constexpr uint32_t top_half = 1u << 3, bottom_half = 1u << 4;
    constexpr uint32_t half_mask = top_half | bottom_half;
    struct Field {
        int x, y, end, height, color;
        uint32_t half;
        bool top_layer;
        std::string source;
    };
    const auto physical_field = [&](int x, int y, int right) -> std::optional<Field> {
        if (x < panel->x || x >= right || y <= tabs_y || y >= bottom ||
                static_cast<unsigned char>(source_rows[y][x]) <= ' ' ||
                is_cp437_box_separator(source_rows[y], x))
            return std::nullopt;
        bool top = false;
        const auto *first = cell_at(x, y, &top);
        if (!first) return std::nullopt;
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const uint32_t half = flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] & half_mask : 0;
        if (half == half_mask) return std::nullopt;
        const int color = (first[1] << 16) | (first[2] << 8) | first[3];
        // Item-coloring mods can leave the quotes in the UI color while
        // recoloring the name. The quotes, not a foreground change, bound
        // this field; layer, font-half and action boundaries still apply.
        const bool quoted = source_rows[y][x] == '"';
        int end = x;
        for (; end < right; ++end) {
            const unsigned char ch = source_rows[y][end];
            if (native_item_action_at(*gps_, end, y) ||
                    native_item_action_at(*gps_, end + 1, y)) break;
            if (ch == ' ') continue;
            if (ch < ' ' || is_cp437_box_separator(source_rows[y], end)) break;
            bool layer = false;
            const auto *cell = cell_at(end, y, &layer);
            const uint32_t current = flags ? flags[static_cast<size_t>(end) * gps_->dimy + y] & half_mask : 0;
            if (!cell || layer != top || current != half ||
                    (!quoted && ((cell[1] << 16) | (cell[2] << 8) | cell[3]) != color)) break;
            if (quoted && end > x && ch == '"') { ++end; break; }
        }
        while (end > x && source_rows[y][end - 1] == ' ') --end;
        if (end <= x) return std::nullopt;
        return Field{x, y, end, 1, color, half, top, source_rows[y].substr(x, end - x)};
    };
    const auto logical_field = [&](int x, int y, int right) -> std::optional<Field> {
        auto field = physical_field(x, y, right);
        if (!field || !field->half) return field;
        const auto mate = physical_field(x, y + (field->half == top_half ? 1 : -1), right);
        if (!mate || mate->end != field->end || mate->source != field->source ||
                mate->top_layer != field->top_layer || mate->color != field->color ||
                mate->half != (field->half == top_half ? bottom_half : top_half))
            return field;
        if (field->half == bottom_half) field = mate;
        field->height = 2;
        return field;
    };
    const auto complete_source = [&](const Field &field) {
        for (const auto &plane : draws) for (const auto &draw : plane) {
            const size_t inset = draw.source.find_first_not_of(' ');
            if (inset == std::string::npos || draw.x + static_cast<int>(inset) != field.x ||
                    draw.y < field.y || draw.y >= field.y + field.height ||
                    draw.top_layer != field.top_layer ||
                    trim_view(std::string_view(draw.source).substr(inset)) != field.source ||
                    draw.complete_source.empty()) continue;
            return trim(draw.complete_source);
        }
        for (const auto &capture : captures)
            if (capture.x == field.x && capture.y >= field.y &&
                    capture.y < field.y + field.height &&
                    trim_view(capture.visible) == field.source && !capture.complete.empty())
                return trim(capture.complete);
        return field.source;
    };
    const auto claim = [&](const Field &field, int right,
                           const std::optional<std::string> &target) {
        bool representative = false;
        for (int y = field.y; y < field.y + field.height; ++y) {
            auto &row = rows[y];
            if (row.compare(field.x, field.source.size(), field.source) != 0) continue;
            bool owns = true;
            for (int x = field.x; owns && x < field.end; ++x) {
                if (field.source[x - field.x] == ' ') continue;
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                owns = cell && top == field.top_layer &&
                    (!screen_override || screen_override == (top ? gps_->screen_top : gps_->screen));
            }
            if (!owns) continue;
            std::fill_n(row.begin() + field.x, field.end - field.x, ' ');
            std::erase_if(matches, [&](const Match &part) {
                return part.y == y && part.x < field.end && part.x + part.length > field.x;
            });
            if (only_y >= 0 && only_y != y) continue;
            Match match{field.x, y, field.end - field.x, kFortressItemCaptionRule,
                target ? *target : native_text_to_utf8(complete_source(field)), field.source};
            match.native_hover_untranslated = !target;
            match.layout_x = field.x;
            match.layout_y = field.y;
            match.layout_length = right - field.x;
            match.layout_clip_right = right;
            match.layout_left = true;
            match.layout_foreground_rgb = field.color;
            if (field.height == 2) {
                match.native_split_text = true;
                match.native_split_top_y = field.y;
                match.native_split_duplicate = representative;
                match.layout_pixel_y = gps_->tile_pixel_y / 2;
                if (representative) match.target.clear();
            }
            if (!match.target.empty() && field.source.front() == '"') {
                const size_t body = field.source.find_first_not_of(' ', 1);
                std::vector<uint32_t> codepoints;
                if (body != std::string::npos && field.source[body] != '"' &&
                        decode_utf8(match.target, codepoints) && !codepoints.empty()) {
                    bool top = false;
                    const auto *cell = cell_at(field.x + static_cast<int>(body), y, &top);
                    const int body_color = cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3]
                                               : field.color;
                    match.layout_foreground_rgb = body_color;
                    match.layout_glyph_foreground_rgb.assign(codepoints.size(), body_color);
                    if (codepoints.front() == '"' || codepoints.front() == 0x201c)
                        match.layout_glyph_foreground_rgb.front() = field.color;
                    if (codepoints.back() == '"' || codepoints.back() == 0x201d) {
                        const auto *closing = field.source.size() > 1 && field.source.back() == '"'
                            ? cell_at(field.end - 1, y, &top) : nullptr;
                        match.layout_glyph_foreground_rgb.back() = closing
                            ? (closing[1] << 16) | (closing[2] << 8) | closing[3] : field.color;
                    }
                }
            }
            representative = true;
            matches.push_back(std::move(match));
        }
    };
    const auto is_claim = [](std::string_view value) {
        return value.ends_with("'s family heirloom") || value.ends_with("'s family treasure") ||
            value.starts_with("Treasure of ") || value.starts_with("Heirloom of ") ||
            value.starts_with("Sacred to ") || value.starts_with("Symbol of ");
    };
    // A claim can contain native spacing or several addst pieces. The whole
    // color field owns its spaces, including the generated owner and suffix.
    for (int y = tabs_y + 1; y < bottom; ++y) {
        for (int x = panel->x; x < panel_right; ++x) {
            auto field = logical_field(x, y, panel_right);
            if (!field) continue;
            x = field->end - 1;
            if (field->y != y) continue;
            std::string complete = complete_source(*field);
            if (!is_claim(complete)) complete = normalize_utterance(field->source);
            if (!is_claim(complete)) continue;
            const auto target = memoize_identity_translation('I', complete, [&] {
                return translate_legends_text("Fortress item claim: " + complete, false, false);
            });
            claim(*field, panel_right, target);
        }
    }
    for (int y = tabs_y + 1; y < bottom; ++y) {
        const auto quote_x = source_rows[y].find('"', panel->x);
        if (quote_x == std::string::npos || quote_x >= static_cast<size_t>(panel_right)) continue;
        int right = panel_right;
        for (int row : {y - 1, y - 2, y, y + 1}) {
            if (row <= tabs_y || row >= bottom) continue;
            for (int x = static_cast<int>(quote_x); x < right; ++x)
                if (native_item_action_at(*gps_, x, row)) { right = x - 1; break; }
        }
        auto quote = logical_field(static_cast<int>(quote_x), y, right);
        if (!quote || quote->y != y || quote->source.front() != '"') continue;
        const auto closing = quote->source.find('"', 1);
        if (closing != std::string::npos) {
            quote->source.resize(closing + 1);
            quote->end = quote->x + static_cast<int>(quote->source.size());
        }
        std::string complete_quote = complete_source(*quote);
        if (complete_quote.size() < 2 || complete_quote.front() != '"' || complete_quote.back() != '"')
            complete_quote = quote->source;
        const auto gloss = complete_quote.size() >= 2 && complete_quote.back() == '"'
            ? std::string_view(complete_quote).substr(1, complete_quote.size() - 2) : std::string_view{};
        std::optional<Field> title;
        for (int x : {quote->x - 1, quote->x}) {
            auto candidate = logical_field(x, y - 1, right);
            if (candidate && candidate->y + candidate->height == y &&
                    candidate->source.front() != '"' && !is_claim(normalize_utterance(candidate->source))) {
                title = std::move(candidate);
                break;
            }
        }
        std::optional<std::string> title_target, quote_target;
        if (title) {
            const std::string complete = complete_source(*title);
            right = std::min(right, title->end < right ? [&] {
                for (int x = title->end; x < right; ++x)
                    if (source_rows[title->y][x] != ' ') return x;
                return right;
            }() : right);
            // The native/gloss pair establishes an artifact identity, rather
            // than a person's spelling or a material lifted out of its name.
            if (!gloss.empty()) {
                const std::string pair = complete + ", \"" + std::string(gloss) + "\"";
                const auto target = memoize_identity_translation('A', pair, [&] {
                    return translate_legends_artifact_identity(pair);
                });
                if (target) {
                    const size_t separator = target->find("，“");
                    if (separator != std::string::npos) {
                        title_target = target->substr(0, separator);
                        quote_target = target->substr(separator + std::string_view("，").size());
                    }
                }
            }
            if (!title_target) title_target = memoize_identity_translation('a', complete, [&] {
                return translate_procedural_fragment(complete, false, false, {},
                    ProceduralFragmentContext::native_item_name);
            });
            claim(*title, right, title_target);
        }
        if (!quote_target && !gloss.empty()) {
            auto target = title ? std::nullopt : translate_world_artifact_name(gloss);
            if (!target) target = memoize_identity_translation('B', gloss, [&] {
                return translate_legends_book(gloss);
            });
            if (target) quote_target = "“" + *target + "”";
        }
        claim(*quote, right, quote_target);
    }
}
