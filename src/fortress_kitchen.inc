// Kitchen is a food table with Type/Name followed by quantity, cooking and
// brewing sorts. Its item pictures and numeric column are not name text.
struct FortressKitchenTable {
    int tabs_y, header_y;
    std::vector<int> columns;
};

std::optional<std::string> Overlay::translate_kitchen_food_name(
        std::string_view source) const {
    source = trim_view(source);
    if (auto exact = exact_literal_translation(source)) return exact;

    // Item Tagger appends RAW-use tags to the food name. Resolve the complete
    // food noun first so a tag cannot become part of its creature descriptor.
    // Earlier script runs can leave multiple spaces between the same fields.
    const size_t suffix = source.find(" [");
    const auto food = trim_view(source.substr(0, suffix));
    if (food.empty()) return std::nullopt;
    auto target = exact_literal_translation(food);
    if (!target && config_.compositional_rules)
        target = translate_embark_food_item({std::string(food)});
    if (!target && config_.compositional_rules &&
            (food.find('\x0b') != std::string_view::npos ||
             food.find('\x0c') != std::string_view::npos))
        target = translate_creature_label(food);
    if (!target && config_.compositional_rules)
        target = translate_compositional(normalize_utterance(food));
    if (!target || suffix == std::string_view::npos) return target;

    for (auto tail = source.substr(suffix); !tail.empty();) {
        if (tail.front() != ' ') return std::nullopt;
        tail = trim_view(tail);
        if (tail.empty()) break;
        if (tail.front() != '[') return std::nullopt;
        const size_t end = tail.find(']');
        if (end == std::string_view::npos) return std::nullopt;
        const auto tag = tail.substr(0, end + 1);
        std::optional<std::string> translated;
        if (config_.compositional_rules) {
            std::vector<size_t> origins;
            translated = RULESETS.translate_with_origins(native_text_to_utf8(tag),
                "::item_tagger::tags::tag", origins);
        }
        if (!translated) translated = exact_literal_translation(tag);
        *target += " " + (translated ? *translated : native_text_to_utf8(tag));
        tail.remove_prefix(end + 1);
    }
    return target;
}

bool Overlay::translated_kitchen_search_matches(std::string_view source,
        std::string_view query) const {
    TranslationStateScope translation_scope;
    if (source.empty() || translated_search_query(query).literal.empty()) return false;
    const auto target = memoize_search_translation('k', source, [&] {
        return translate_kitchen_food_name(source);
    }, true);
    return search_association_text(source,target.value_or(""),query,SearchCandidateKind::ItemDefinition,"items");
}

static std::optional<FortressKitchenTable> fortress_kitchen_table(
        const graphicst &gps, const std::vector<std::string> &rows,
        const NativeUiSettings &settings) {
    const auto band = fortress_labor_band(rows);
    if (!band || band->header_y >= 0 || band->standing_tabs_y >= 0) return std::nullopt;
    for (int y = band->tabs_y + 1; y < gps.dimy; ++y) {
        auto columns = native_sort_columns(gps, y, settings);
        // Classic arrows are visible CP437 fields between Type and Name.
        // The complete sort widgets, rather than adjacency among text
        // fragments, establish the same five columns in either UI mode.
        if (columns.size() != 5 || columns[1] + 9 > gps.dimx ||
            rows[y].compare(columns[0] + 5, 4, "Type") != 0 ||
            rows[y].compare(columns[1] + 5, 4, "Name") != 0) continue;
        return FortressKitchenTable{band->tabs_y, y, std::move(columns)};
    }
    return std::nullopt;
}

void Overlay::append_fortress_kitchen_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    const auto settings = native_ui_settings();
    if (!settings) return;
    const auto table = fortress_kitchen_table(*gps_, rows, *settings);
    if (!table) return;
    const auto captures = captured_clipped_captions();
    const auto current = [&](int left, int right, int y, bool food = false) {
        for (int x = left; x < right; ++x) {
            const auto ch = visible_char_at(x, y);
            if ((ch ? ch : ' ') != static_cast<unsigned char>(rows[y][x]) ||
                (ch && ch < ' ' && !(food && (ch == 0x0b || ch == 0x0c))) ||
                is_cp437_box_separator(rows[y], x)) return false;
        }
        return true;
    };
    const auto append = [&](int first, int end, int y, int rule,
                            std::string target, int left, int right) {
        Match match{first, y, end - first, rule, std::move(target), rows[y].substr(first, end - first)};
        match.layout_x = left;
        match.layout_y = y;
        match.layout_length = right - left;
        match.layout_clip_right = right;
        match.layout_left = true;
        match.layout_prepared = true;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        matches.push_back(std::move(match));
        std::fill(rows[y].begin() + first, rows[y].begin() + end, ' ');
    };

    const auto append_caption = [&](int first, int end, int y,
                                   const std::pair<int, int> &span) {
        if (first >= end || !current(first, end, y)) return;
        const auto target = exact_literal_translation(rows[y].substr(first, end - first));
        if (!target) return;
        // Claim complete fixed labels before the generated-name fallback.
        // Type is not a person's name, and a slash-separated selector owns
        // one caption independent of the arrows beside its text strip.
        append(first, end, y, kFortressKitchenCaptionRule,
            *target, span.first, span.second);
    };
    for (int y = table->tabs_y + 1; y < table->header_y; ++y) {
        if (only_y >= 0 && y != only_y) continue;
        for (int x = 0; x < gps_->dimx; ++x) {
            if (rows[y][x] == ' ') continue;
            const auto span = native_type_filter_span(*gps_, x, x + 1, y);
            if (!span) continue;
            int first = span->first, end = span->second;
            while (first < end && rows[y][first] == ' ') ++first;
            while (end > first && rows[y][end - 1] == ' ') --end;
            append_caption(first, end, y, *span);
            x = span->second - 1;
        }
    }
    if (only_y < 0 || only_y == table->header_y)
        for (int index : {0, 1}) {
            const int first = table->columns[index] + 5, end = first + 4;
            const auto span = native_sort_caption_span(
                *gps_, first, end, table->header_y, *settings);
            if (span) append_caption(first, end, table->header_y, *span);
        }

    const int name_left = table->columns[0], count_left = table->columns[2];
    const int cook_left = table->columns[3];
    for (int y = table->header_y + 1; y < gps_->dimy; ++y) {
        // The picture proves the record's middle row, but its caption can
        // also occupy the adjacent half-font row requested by suppression.
        if (only_y >= 0 && std::abs(y - only_y) > 1) continue;
        // Recognize every row independently, including a single filtered
        // result. Neither the list length nor the longest English label is
        // evidence for its column width.
        bool picture = false;
        for (int x = 0; x < name_left && !picture; ++x) {
            const int right = native_picture_box_right(*gps_, x, y);
            picture = right > x && right <= name_left;
        }
        if (!picture) continue;
        const std::string count = trim(rows[y].substr(count_left, cook_left - count_left));
        std::string_view number = count;
        if (number.starts_with('~')) number.remove_prefix(1);
        if (number.ends_with('?')) number.remove_suffix(1);
        if ((number.empty() && count != "?") ||
            !std::all_of(number.begin(), number.end(),
                [](char ch) { return ch >= '0' && ch <= '9'; }) ||
            !current(count_left, cook_left, y)) continue;
        int first = name_left, end = count_left;
        while (first < end && rows[y][first] == ' ') ++first;
        while (end > first && rows[y][end - 1] == ' ') --end;
        if (first == end || !current(first, end, y, true)) continue;
        std::string complete = rows[y].substr(first, end - first);
        const std::string visible = complete;
        for (const auto &capture : captures)
            if (capture.x == first && capture.y == y && capture.visible == complete) {
                complete = capture.complete;
                break;
            }
        auto target = translate_kitchen_food_name(complete);
        // Unknown food names stay a single item field, not fabricated names.
        // Existing plant/material/drink terminology stays dictionary-owned.
        if (!target) target = cp437_to_utf8(complete);
        if (target->empty() || target->find("[C:") != std::string::npos ||
            target->find_first_of("\r\n") != std::string::npos) continue;
        // Claim both proven halves before ordinary literal matches can own
        // the other copy with a different alignment. Deduplication and the
        // shared baseline remain the native half-font normalizer's job.
        bool top = false;
        cell_at(first, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
        const uint32_t half = flags ? flags[static_cast<size_t>(first) * gps_->dimy + y] &
            (upper | lower) : 0;
        const int mate = half == upper ? y + 1 : half == lower ? y - 1 : -1;
        if (mate >= 0 && mate < gps_->dimy && (only_y < 0 || only_y == mate) &&
                rows[mate].compare(first, end - first, visible) == 0 &&
                current(first, end, mate, true)) {
            bool mate_top = false;
            cell_at(first, mate, &mate_top);
            const auto *mate_flags = mate_top
                ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            if (mate_top == top && mate_flags &&
                    (mate_flags[static_cast<size_t>(first) * gps_->dimy + mate] &
                        (upper | lower)) == (half == upper ? lower : upper))
                append(first, end, mate, kFortressKitchenFoodRule,
                    *target, name_left, count_left - 1);
        }
        if (only_y < 0 || only_y == y)
            append(first, end, y, kFortressKitchenFoodRule, *target, name_left, count_left - 1);
    }
}

void Overlay::layout_fortress_kitchen(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_y <= 0) return;
    const auto settings = native_ui_settings();
    if (!settings) return;
    std::vector<std::string> rows(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x)
            if (const auto ch = visible_char_at(x, y)) rows[y][x] = ch;
    const auto table = fortress_kitchen_table(*gps_, rows, *settings);
    if (!table) return;
    // A retained complete dictionary caption still belongs to this native
    // food column. Prove its own picture and quantity before recovering the
    // row layout; the rule that translated a seed name does not set its inset.
    for (int y = table->header_y + 1; y < gps_->dimy; ++y) {
        const int left = table->columns[0], count = table->columns[2];
        bool picture = false;
        for (int x = 0; x < left && !picture; ++x) {
            const int end = native_picture_box_right(*gps_, x, y);
            picture = end > x && end <= left;
        }
        if (!picture) continue;
        std::string_view number = trim_view(std::string_view(rows[y]).substr(
            count, table->columns[3] - count));
        if (number.starts_with('~')) number.remove_prefix(1);
        if (number.ends_with('?')) number.remove_suffix(1);
        if (number.empty() || !std::all_of(number.begin(), number.end(),
                [](char ch) { return ch >= '0' && ch <= '9'; })) continue;
        int first = left, end = count;
        while (first < end && rows[y][first] == ' ') ++first;
        while (end > first && rows[y][end - 1] == ' ') --end;
        if (first == end) continue;
        for (Match &match : prepared_matches_) {
            if (match.rule < 0 || match.target.empty() || match.native_split_duplicate ||
                    match.y != y || match.x != first || match.length != end - first ||
                    static_cast<size_t>(match.rule) >= rules_.size()) continue;
            const Rule &rule = rules_[static_cast<size_t>(match.rule)];
            if (!template_literal_at(rows[y], first, match.source, rule.case_insensitive)) continue;
            match.rule = kFortressKitchenFoodRule;
            match.source = rows[y].substr(first, end - first);
        }
    }
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate ||
            (match.rule != kFortressKitchenCaptionRule && match.rule != kFortressKitchenFoodRule)) continue;
        int left = table->columns[0], right = table->columns[2] - 1;
        if (match.rule == kFortressKitchenCaptionRule) {
            const auto span = match.source == "Type" || match.source == "Name"
                ? native_sort_caption_span(*gps_, match.x, match.x + match.length, match.y, *settings)
                : native_type_filter_span(*gps_, match.x, match.x + match.length, match.y);
            if (!span) continue;
            left = span->first;
            right = span->second;
        }
        // Restore widget-local bounds after generic panel layout. Source
        // masks, quantities (including ?), arrows and cooking/brewing controls
        // retain their exact original cells and colors.
        if (!match.native_split_text) match.layout_y = match.y;
        match.layout_right = false;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        match.layout_clip_right = right;
        layout_fortress_text_rows(renderer, {{&match}}, left, right);
    }
}
