// Date fields are complete native writers, including signed prehistory years.
// Return their row in the native month/day, season, year card.
static int native_topbar_date_field(std::string_view source) {
    size_t digits = 0;
    int day = 0;
    while (digits < source.size() && source[digits] >= '0' && source[digits] <= '9') {
        if (digits == 2) break;
        day = day * 10 + source[digits++] - '0';
    }
    if (day >= 1 && day <= 28 && source.size() >= digits + 4) {
        const auto ordinal = source.substr(digits, 2);
        if ((ordinal == "st" || ordinal == "nd" || ordinal == "rd" || ordinal == "th") &&
                source[digits + 2] == ' ')
            for (const std::string_view month : {"Granite", "Slate", "Felsite", "Hematite",
                    "Malachite", "Galena", "Limestone", "Sandstone", "Timber", "Moonstone",
                    "Opal", "Obsidian"})
                if (source.substr(digits + 3) == month) return 0;
    }
    const std::string folded = lower(std::string(source));
    for (const std::string_view prefix : {"early ", "mid-", "late "}) {
        if (!folded.starts_with(prefix)) continue;
        const std::string_view season = std::string_view(folded).substr(prefix.size());
        if (season == "spring" || season == "summer" ||
                season == "autumn" || season == "winter") return 1;
    }
    if (folded.starts_with("year ")) {
        auto year = std::string_view(folded).substr(5);
        if (!year.empty() && (year.front() == '-' || year.front() == '+')) year.remove_prefix(1);
        if (!year.empty() && std::all_of(year.begin(), year.end(),
                [](char ch) { return ch >= '0' && ch <= '9'; })) return 2;
    }
    return -1;
}

// The producer's private capture owns the panel and every original string.
// Screen cells are paint output, never evidence for admitting a field or for
// obtaining its translation source. In particular, Pop/Stocks are independent
// labels, not anchors on which the rest of the header depends.
std::vector<Match> Overlay::find_native_topbar_matches(int only_y,
        const unsigned char *screen_override) const {
    std::vector<Match> result;
    const auto &panel = g_native_topbar_panel;
    if (!gps_ || !gps_->screen || !native_topbar_foreground_view(gps_) ||
            gps_->dimx <= 0 || gps_->dimx > 1000 || gps_->dimy <= 0 || gps_->dimy > 1000 ||
            panel.x < 0 || panel.y < 0 || panel.w <= 0 || panel.h <= 0 ||
            panel.w > gps_->dimx - panel.x || panel.h > gps_->dimy - panel.y ||
            (only_y >= 0 && (only_y < panel.y || only_y >= panel.y + panel.h)) ||
            (screen_override && screen_override != gps_->screen &&
                screen_override != gps_->screen_top)) return result;

    uint64_t epoch = 0;
    std::vector<NativeDrawnTextRow> draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        epoch = g_native_drawn_text_epoch;
        for (const auto *plane : {&g_native_drawn_text_rows, &g_native_drawn_top_text_rows})
            draws.insert(draws.end(), plane->begin(), plane->end());
    }
    NativeHistoryName site;
    std::string english;
    const bool have_site = capture_current_fortress_site_name(site, english);
    std::array<std::string, 2> names{};
    if (have_site) {
        names[0] = site_name_full_transliteration(site);
        if (auto place = translate_english_site_name(english, &site,
                site_name_attribute_suffix(site)))
            names[1] = *place;
    }
    std::array<size_t, 3> date_fields{};
    date_fields.fill(SIZE_MAX);
    for (const auto &draw : draws) {
        const auto *grid = draw.top_layer ? gps_->screen_top : gps_->screen;
        if (!draw.caption_source || draw.editable_text || draw.draw_epoch != epoch ||
                draw.draw_grid != grid || draw.draw_dimx != gps_->dimx ||
                draw.draw_dimy != gps_->dimy || draw.source.empty() ||
                draw.x < panel.x || draw.x >= panel.x + panel.w ||
                draw.y < panel.y || draw.y >= panel.y + panel.h ||
                (only_y >= 0 && draw.y != only_y) ||
                (screen_override && screen_override != grid)) continue;
        const std::string &complete = draw.complete_source.empty()
            ? draw.source : draw.complete_source;
        const int site_row = native_topbar_site_row(draw.native_caller);
        std::optional<std::string> target;
        int rule_index = -2;
        std::shared_ptr<const TranslationResult> metadata;
        if (site_row >= 0 && site_row < 2) {
            // Resolve the actual fortress_site object, including its full
            // English gloss before the game replaces the suffix with dots.
            // A site called Food or Outpost still belongs to this name writer.
            if (have_site && !names[site_row].empty()) target = names[site_row];
            rule_index = kFortressSiteNameRule;
        } else if (site_row == 2) {
            target = translate_fortress_status(complete);
            rule_index = kUiMessageRule;
        } else {
            const bool date = native_topbar_date_field(complete) >= 0;
            bool literal = false;
            for (const std::string_view label : {"Population", "Pop", "Stocks", "Food",
                    "Drink", "Seeds", "Meat", "Fish", "Plant", "Other", "None", "ALERT"})
                literal |= complete == label;
            if (!literal && !date) continue;
            target = exact_literal_translation(complete);
            if (!target && date) {
                for (const int index : candidate_template_rules(complete)) {
                    const auto &rule = rules_[index];
                    std::vector<std::string> captures;
                    size_t end = 0;
                    if (!match_template(rule, complete, 0, &end, &captures) || end != complete.size())
                        continue;
                    auto translated = translate_template_captures_display(rule, captures, complete);
                    if (!translated.usable() || !translated.changed()) continue;
                    target = translated.target;
                    rule_index = index;
                    metadata = std::make_shared<TranslationResult>(std::move(translated));
                    break;
                }
            }
        }
        if (!target || target->empty() || *target == complete) continue;
        int left = draw.x;
        int right = draw.x + std::min<int>(draw.source.size(), panel.x + panel.w - draw.x);
        if (draw.draw_clip) {
            const auto &clip = *draw.draw_clip;
            if (draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
            left = std::max(left, clip.x);
            right = std::min(right, clip.x + clip.w);
        }
        if (site_row >= 0) right = std::min(right, native_topbar_site_right());
        if (left >= right) continue;
        Match match{left, draw.y, right - left, rule_index, *target,
            draw.source.substr(left - draw.x, right - left)};
        match.translation_result = std::move(metadata);
        match.layout_foreground_rgb = draw.foreground_rgb;
        // These native writers draw one full row each. Retained font-half
        // flags and neighbouring glyphs cannot change their text baseline.
        match.layout_fixed_baseline = true;
        match.layout_y = draw.y;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        if (site_row >= 0) {
            match.layout_x = left;
            match.layout_length = native_topbar_site_right() - left;
            match.layout_clip_right = native_topbar_site_right();
            match.layout_left = true;
            match.layout_prepared = true;
        }
        if (site_row < 0) {
            const int date_row = native_topbar_date_field(complete);
            if (date_row >= 0) date_fields[date_row] = result.size();
        }
        result.push_back(std::move(match));
    }
    if (std::all_of(date_fields.begin(), date_fields.end(),
            [](size_t index) { return index != SIZE_MAX; })) {
        const Match &date = result[date_fields[0]];
        const int left = date.x, top = date.y;
        int right = left;
        bool same_card = true;
        for (size_t row = 0; row < date_fields.size(); ++row) {
            const auto &field = result[date_fields[row]];
            same_card &= field.x == left && field.y == top + static_cast<int>(row);
            right = std::max(right, field.x + field.length);
        }
        if (same_card) {
            for (size_t row = 0; row < date_fields.size(); ++row) {
                auto &field = result[date_fields[row]];
                field.layout_x = left;
                field.layout_y = top + 2 - static_cast<int>(row);
                field.layout_length = right - left;
                field.layout_clip_right = right;
                field.layout_left = true;
                field.layout_prepared = true;
            }
        }
    }
    return result;
}
