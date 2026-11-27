// Farm records share a picture strip, but their two status draws are
// independent of the building name and the complete RAW crop caption.
void Overlay::append_fortress_farm_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            context[y][x] = ch ? static_cast<char>(ch) : ' ';
        }
    int tabs_y = -1;
    const auto panel = capture_fortress_places_panel(context, tabs_y);
    if (!panel || !fortress_farm_plots_selected(context, *panel, tabs_y) ||
            (only_y >= 0 && (only_y <= tabs_y ||
                only_y >= panel->y + panel->h))) return;
    std::vector<NativeDrawnTextRow> draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        draws = g_native_drawn_text_rows;
        draws.insert(draws.end(), g_native_drawn_top_text_rows.begin(),
            g_native_drawn_top_text_rows.end());
        draws.insert(draws.end(), g_native_overwritten_text_rows.begin(),
            g_native_overwritten_text_rows.end());
    }
    std::sort(draws.begin(), draws.end(), [](const auto &a, const auto &b) {
        return a.sequence > b.sequence;
    });
    const auto color_at = [&](int x, int y) {
        bool top = false;
        const auto *cell = cell_at(x, y, &top);
        return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
    };
    const auto digit = [](unsigned char ch) { return ch >= '0' && ch <= '9'; };
    struct Field {
        const NativeDrawnTextRow *draw;
        SDL_Rect box;
        int right;
    };
    std::vector<Field> fields;
    for (const auto &draw : draws) {
        if (draw.source.empty() || draw.x < panel->x || draw.y <= tabs_y ||
                draw.x >= panel->x + panel->w || draw.y >= panel->y + panel->h ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                draw.foreground_rgb < 0) continue;
        std::optional<SDL_Rect> box;
        const bool crop = native_farm_crop_caller(draw.native_caller);
        // The native crop draw is always at record top+2. Start from that
        // record's middle, so a repeated skin cannot select a neighbour.
        for (int middle : {draw.y, draw.y - 1, draw.y + 1}) {
            if (crop && middle != draw.y - 1) continue;
            const auto candidate = native_picture_caption_rect(*gps_, draw.x,
                middle, false, nullptr, true, nullptr, true);
            if (candidate && candidate->x >= panel->x && candidate->y > tabs_y &&
                    candidate->x + candidate->w <= panel->x + panel->w &&
                    candidate->y + candidate->h <= panel->y + panel->h &&
                    draw.y >= candidate->y + 1 &&
                    draw.y < candidate->y + candidate->h) {
                box = candidate;
                break;
            }
        }
        if (!box) continue;
        int right = box->x + box->w;
        for (int x = draw.x; x < right; ++x)
            for (int y = box->y; y < box->y + box->h; ++y)
                if (native_foreground_picture_at(*gps_, x, y)) {
                    right = x;
                    break;
                }
        if (right > draw.x) fields.push_back({&draw, *box, right});
    }
    struct Status { int x, y, end, right, color; std::string target; };
    std::vector<Status> statuses;
    const auto translate_status = [&](std::string_view source)
            -> std::optional<std::string> {
        if (source == "Leave fallow") return exact_literal_translation(source);
        for (int index : candidate_template_rules(source)) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.source != "{d} planted" && rule.source != "{d} to harvest")
                continue;
            size_t end = 0;
            std::vector<std::string> captures;
            if (!match_template(rule, source, 0, &end, &captures) ||
                    end != source.size()) continue;
            bool complete = false;
            auto target = translate_template_captures(rule, captures, &complete);
            if (complete && !target.empty()) return target;
        }
        return std::nullopt;
    };
    for (const auto &field : fields) {
        const auto &draw = *field.draw;
        if (native_farm_name_caller(draw.native_caller))
            continue;
        const auto text = trim_view(draw.source);
        if (text.empty()) continue;
        int x = draw.x + static_cast<int>(text.data() - draw.source.data());
        const bool count_draw = std::all_of(text.begin(), text.end(), digit);
        const bool whole_draw = translate_status(text).has_value();
        const bool suffix_draw = text == "planted" || text == "to harvest";
        if (!count_draw && !whole_draw && !suffix_draw) continue;
        if (suffix_draw) {
            // addst may write the number and its literal suffix separately.
            // The captured suffix owns its start; equal-colored native digits
            // immediately before its one separator space complete that field.
            if (x <= field.box.x || context[draw.y][x - 1] != ' ') continue;
            int first = x - 1;
            while (first > field.box.x && digit(context[draw.y][first - 1]) &&
                    color_at(first - 1, draw.y) == draw.foreground_rgb) --first;
            if (first == x - 1) continue;
            x = first;
        }
        int end = x;
        if (text == "Leave fallow") {
            end += static_cast<int>(text.size());
            if (end > field.right) continue;
        } else {
            while (end < field.right && digit(context[draw.y][end]) &&
                    color_at(end, draw.y) == draw.foreground_rgb) ++end;
            if (end == x) continue;
            const std::string_view remaining(context[draw.y].data() + end,
                static_cast<size_t>(field.right - end));
            if (remaining.starts_with(" planted")) end += 8;
            else if (remaining.starts_with(" to harvest")) end += 11;
            else continue;
        }
        bool current = true;
        for (int at = x; at < end; ++at) {
            bool top = false;
            const auto *cell = cell_at(at, draw.y, &top);
            if (!cell || top != draw.top_layer ||
                    (context[draw.y][at] != ' ' &&
                     color_at(at, draw.y) != draw.foreground_rgb)) current = false;
        }
        // The draw must actually own the number or the recognized suffix,
        // rather than merely lie near similarly worded authored text.
        const int proof_x = draw.x + static_cast<int>(text.data() - draw.source.data());
        const int proof_length = count_draw ? static_cast<int>(text.size()) :
            suffix_draw ? static_cast<int>(text.size()) : end - x;
        if (!current || proof_x < x || proof_x + proof_length > end ||
                context[draw.y].compare(proof_x, proof_length, text, 0,
                    static_cast<size_t>(proof_length)) != 0) continue;
        const auto target = translate_status(std::string_view(context[draw.y]).substr(x, end - x));
        if (!target || std::any_of(statuses.begin(), statuses.end(), [&](const Status &status) {
                return status.x == x && status.y == draw.y;
            })) continue;
        statuses.push_back({x, draw.y, end, field.right, draw.foreground_rgb, *target});
    }
    std::set<std::tuple<int, int, int>> claimed;
    const auto claim = [&](int x, int y, std::string_view source, std::string_view target,
            int right, int color, int rule) {
        if (source.empty() || x < panel->x || right <= x ||
                source.size() > static_cast<size_t>(right - x)) return;
        constexpr uint32_t half_mask = (1u << 3) | (1u << 4);
        bool top = false;
        cell_at(x, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const auto half = flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] & half_mask : 0;
        const int mate = half == (1u << 3) ? y + 1 : half == (1u << 4) ? y - 1 : -1;
        bool split = mate >= panel->y && mate < panel->y + panel->h && flags &&
            context[mate].compare(x, source.size(), source) == 0;
        for (size_t offset = 0; split && offset < source.size(); ++offset) {
            const size_t tile = static_cast<size_t>(x + offset) * gps_->dimy;
            bool mate_top = false;
            cell_at(x + static_cast<int>(offset), mate, &mate_top);
            split = mate_top == top && (flags[tile + y] & half_mask) == half &&
                (flags[tile + mate] & half_mask) ==
                    (half == (1u << 3) ? (1u << 4) : (1u << 3)) &&
                (source[offset] == ' ' || color_at(x + static_cast<int>(offset), mate) == color);
        }
        const auto emit = [&](int row_y) {
            if ((only_y >= 0 && row_y != only_y) ||
                    !claimed.emplace(x, row_y, rule).second) return;
            const auto emit_span = [&](int first, int length, bool complete) {
                Match match{first, row_y, length, rule,
                    complete ? std::string(target) : std::string{},
                    std::string(source.substr(static_cast<size_t>(first - x), length))};
                match.layout_x = x;
                match.layout_y = row_y;
                match.layout_length = right - x;
                match.layout_clip_right = right;
                match.layout_left = true;
                match.layout_foreground_rgb = color;
                match.layout_fixed_baseline = !split;
                if (split) {
                    match.native_split_text = true;
                    match.native_split_top_y = std::min(y, mate);
                }
                matches.push_back(std::move(match));
                std::fill_n(rows[row_y].begin() + first, length, ' ');
            };
            if (rows[row_y].compare(x, source.size(), source) == 0)
                emit_span(x, static_cast<int>(source.size()), true);
            else if (raw_layer)
                for (size_t offset = 0; offset < source.size();) {
                    while (offset < source.size() && rows[row_y][x + offset] != source[offset]) ++offset;
                    const size_t first = offset;
                    while (offset < source.size() && rows[row_y][x + offset] == source[offset]) ++offset;
                    if (first < offset) emit_span(x + static_cast<int>(first),
                        static_cast<int>(offset - first), false);
                }
        };
        emit(y);
        if (split) emit(mate);
    };
    for (const auto &status : statuses)
        claim(status.x, status.y,
            std::string_view(context[status.y]).substr(status.x, status.end - status.x),
            status.target, status.right, status.color, kFortressFarmFieldRule);
    const auto translate_crop = [&](std::string_view source) -> std::optional<std::string> {
        if (auto target = translate_plant_name(source)) return target;
        // RAW tag suffixes can retain extra spaces from earlier script runs.
        // Resolve the plant and each complete bracketed tag in their typed
        // namespaces, rather than sending individual words to the UI trie.
        const size_t suffix = source.find(" [");
        if (suffix == std::string_view::npos) return std::nullopt;
        auto target = translate_plant_name(trim_view(source.substr(0, suffix)));
        if (!target) return std::nullopt;
        for (size_t at = suffix; at < source.size();) {
            if (source[at] != ' ') return std::nullopt;
            while (at < source.size() && source[at] == ' ') ++at;
            if (at == source.size()) break;
            if (source[at] != '[') return std::nullopt;
            const size_t end = source.find(']', at + 1);
            if (end == std::string_view::npos) return std::nullopt;
            const auto tag = source.substr(at, end + 1 - at);
            std::vector<size_t> origins;
            auto translated = RULESETS.translate_with_origins(native_text_to_utf8(tag),
                "::item_tagger::tags::tag", origins);
            if (!translated) translated = exact_literal_translation(tag);
            *target += " " + (translated ? *translated : native_text_to_utf8(tag));
            at = end + 1;
        }
        return target;
    };
    for (const auto &field : fields) {
        const auto &draw = *field.draw;
        const bool name = native_farm_name_caller(draw.native_caller);
        const bool crop = native_farm_crop_caller(draw.native_caller);
        if (!name && draw.y != field.box.y + field.box.h - 1) continue;
        const auto visible = trim_view(draw.source);
        const auto complete = trim_view(draw.complete_source.empty()
            ? std::string_view(draw.source) : std::string_view(draw.complete_source));
        if (visible.empty() || complete.empty()) continue;
        const int x = draw.x + static_cast<int>(visible.data() - draw.source.data());
        int right = field.right;
        for (const auto &status : statuses)
            if (status.y == draw.y && status.x > x && status.x < right)
                right = status.x;
        int length = 0;
        while (length < static_cast<int>(visible.size()) && x + length < right) {
            bool top = false;
            const auto *cell = cell_at(x + length, draw.y, &top);
            if (!cell || top != draw.top_layer ||
                    context[draw.y][x + length] != visible[static_cast<size_t>(length)] ||
                    (visible[static_cast<size_t>(length)] != ' ' &&
                     color_at(x + length, draw.y) != draw.foreground_rgb)) break;
            ++length;
        }
        while (length > 0 && visible[static_cast<size_t>(length - 1)] == ' ') --length;
        if (!length) continue;
        bool top = false;
        cell_at(x, draw.y, &top);
        if (top != draw.top_layer) continue;
        std::optional<std::string> target;
        if (name) {
            if (!draw.info_title_authored_bytes && (complete == "Farm Plot" || complete == "Farm plot"))
                target = exact_literal_translation("Farm plot");
            if (!target) target = native_text_to_utf8(complete);
        } else {
            target = translate_crop(complete);
            // A RAW name still belongs to the crop when its extension has
            // no translation. Keep it whole instead of translating a tag's
            // "cook" as the unrelated occupation.
            if (!target && crop) target = native_text_to_utf8(complete);
        }
        if (!target || target->empty() || target->find("[C:") != std::string::npos ||
                target->find_first_of("\r\n") != std::string::npos) continue;
        claim(x, draw.y, visible.substr(0, static_cast<size_t>(length)), *target,
            right, draw.foreground_rgb, name ? kFortressPlaceNameRule : kFortressFarmFieldRule);
    }
}

void Overlay::layout_fortress_farm_rows(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer) return;
    for (Match &match : prepared_matches_) {
        if (match.rule != kFortressFarmFieldRule || match.target.empty() ||
                match.native_split_duplicate || match.layout_x < 0 ||
                match.layout_clip_right <= match.layout_x) continue;
        const bool fixed_baseline = match.layout_fixed_baseline;
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x,
            match.layout_clip_right);
        match.layout_y = match.y;
        match.layout_pixel_y = 0;
        match.layout_fixed_baseline = fixed_baseline;
    }
}
