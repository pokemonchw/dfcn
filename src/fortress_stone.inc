// Both Stone use and item details display entries from the material-use
// catalog. Keep complete reaction, ore and generated instrument job parsing
// shared; neither UI may fall back to independently translated word boxes.
std::optional<std::string> Overlay::translate_fortress_material_use(
        const std::string &source) const {
    if (const auto target = exact_literal_translation("Material use: " + source)) return target;
    if (const auto target = exact_literal_translation(source)) return target;
    // Keep the metal name, its order and any percentage in TSV templates.
    // The shared template resolver treats the metal capture as a material
    // state, never a color, generated name or independently guessed word.
    if (source.starts_with("Ore of ")) {
        for (int index : template_rules_) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (!rule.source.starts_with("Ore of ")) continue;
            size_t end = 0;
            std::vector<std::string> values;
            if (!match_template(rule, source, 0, &end, &values) || end != source.size()) continue;
            bool complete = false;
            auto target = translate_template_captures(rule, values, &complete);
            if (complete && !target.empty()) return target;
        }
        return std::nullopt;
    }
    return translate_fortress_activity(source);
}

// Stone use is a three-field table, not a collection of item-name words.
// Read its complete header and current controls before generic matching.
struct FortressStoneTable {
    int main_tabs_y, labor_tabs_y, tabs_y, header_y;
    int stone_x, magma_x, uses_x, select_x, select_end;
};

static constexpr std::string_view fortress_stone_selection =
    "Select to use in non-economic jobs.";

static std::optional<FortressStoneTable> fortress_stone_table(
        const std::vector<std::string> &rows) {
    const auto band = fortress_labor_band(rows);
    if (!band || band->header_y >= 0 || band->standing_tabs_y >= 0) return std::nullopt;
    int main_tabs_y = -1;
    for (int y = 0; y < band->tabs_y; ++y) {
        const auto &row = rows[y];
        const auto creatures = row.find("Creatures"), tasks = row.find("Tasks");
        const auto places = row.find("Places"), labor = row.find("Labor");
        const auto orders = row.find("Work orders");
        if (creatures != std::string::npos && tasks != std::string::npos &&
            places != std::string::npos && labor != std::string::npos &&
            orders != std::string::npos && creatures < tasks && tasks < places &&
            places < labor && labor < orders) {
            main_tabs_y = y;
            break;
        }
    }
    int tabs_y = -1;
    for (int y = band->tabs_y + 1; y < static_cast<int>(rows.size()); ++y) {
        const auto &row = rows[y];
        const auto economic = row.find("Economic stone"), other = row.find("Other stone");
        // Keep the TOP row of a native half-font caption pair. Remembering
        // its second copy made the surviving label miss page-level styling.
        if (tabs_y < 0 && economic != std::string::npos &&
            other != std::string::npos && economic < other)
            tabs_y = y;
        if (tabs_y < 0) continue;
        const auto stone = row.find("Stone type"), magma = row.find("Magma-safe");
        const auto uses = row.find("Economic uses"), select = row.find(fortress_stone_selection);
        if (stone == std::string::npos || magma == std::string::npos ||
            uses == std::string::npos || select == std::string::npos ||
            stone + 10 >= magma || magma + 10 >= uses || uses + 13 >= select) continue;
        return FortressStoneTable{main_tabs_y, band->tabs_y, tabs_y, y,
            static_cast<int>(stone), static_cast<int>(magma),
            static_cast<int>(uses), static_cast<int>(select),
            static_cast<int>(select + fortress_stone_selection.size())};
    }
    return std::nullopt;
}

void Overlay::append_fortress_stone_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    const auto table = fortress_stone_table(rows);
    if (!table) return;
    const auto captures = captured_clipped_captions();
    const auto translate_name = [&](std::string_view source) -> std::optional<std::string> {
        const auto stone = [&](std::string_view name) -> std::optional<std::string> {
            if (auto target = translate_named_stone_material(name)) return target;
            if (config_.compositional_rules)
                if (auto target = RULESETS.translate_material_state(lower(std::string(name))))
                    return target;
            return exact_literal_translation(name);
        };
        if (auto target = stone(source)) return target;

        // Item Tagger appends use tags to the RAW name. Keep the complete
        // stone noun (including scoped ore aliases) separate from each tag.
        // Earlier script runs can leave extra spaces between these fields.
        const size_t suffix = source.find(" [");
        if (suffix == std::string_view::npos) return std::nullopt;
        auto target = stone(trim_view(source.substr(0, suffix)));
        if (!target) return std::nullopt;
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
    };
    const auto current = [&](int first, int end, int y) {
        for (int x = first; x < end; ++x) {
            const auto ch = visible_char_at(x, y);
            if ((ch ? ch : ' ') != static_cast<unsigned char>(rows[y][x]) ||
                (ch && ch < ' ') || is_cp437_box_separator(rows[y], x)) return false;
        }
        return true;
    };
    const auto append = [&](int first, int end, int y, int rule,
                            const std::string &target, int left, int right, bool unknown = false) {
        if (first >= end || !current(first, end, y) || target.empty() ||
            target.find("[C:") != std::string::npos || target.find_first_of("\r\n") != std::string::npos) return;
        Match match{first, y, end - first, rule, target, rows[y].substr(first, end - first)};
        match.native_hover_untranslated = unknown;
        if (left >= 0) {
            match.layout_x = left;
            match.layout_y = y;
            match.layout_length = right - left;
            match.layout_clip_right = right;
            match.layout_left = true;
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
        }
        matches.push_back(std::move(match));
        std::fill(rows[y].begin() + first, rows[y].begin() + end, ' ');
    };
    // Full labels also prevent generated-person-name fallback from claiming
    // a short tab or the "type" part of the material heading.
    for (int y = table->tabs_y; y <= table->header_y; ++y) {
        if (only_y >= 0 && y != only_y) continue;
        for (const std::string_view key : {"Economic stone", "Other stone", "Stone type",
                "Magma-safe", "Economic uses", fortress_stone_selection.data()}) {
            const auto at = rows[y].find(key);
            if (at == std::string::npos) continue;
            const auto target = exact_literal_translation(key);
            if (!target) continue;
            int left = -1, right = -1;
            if (y == table->header_y) {
                left = static_cast<int>(at);
                right = key == "Stone type" ? table->magma_x - 1
                    : key == "Magma-safe" ? table->uses_x - 1
                    : key == "Economic uses" ? table->select_x - 1
                    : table->select_end;
            }
            // Tab skins and TOP/BOTTOM_OF_TEXT normalization remain shared.
            append(static_cast<int>(at), static_cast<int>(at + key.size()), y,
                kFortressStoneCaptionRule, *target, left, right);
        }
    }

    for (int y = table->header_y + 1; y < gps_->dimy; ++y) {
        if (only_y >= 0 && y != only_y) continue;
        int picture_right = -1;
        for (int x = table->stone_x; x < table->magma_x; ++x) {
            const int right = native_picture_box_right(*gps_, x, y);
            if (right > x && right < table->magma_x) { picture_right = right; break; }
        }
        if (picture_right < 0) continue;
        // The magma indicator and permission toggle are complete four-cell
        // native controls in both modes. Classic controls have no foreground
        // texture; their packed glyph/palette skins establish the same bounds.
        // Header origins are not control origins (the magma icon is centred
        // under its heading, and the permission box extends past its text).
        int magma = -1, checkbox = -1;
        for (int x = picture_right; x + 4 <= table->uses_x; ++x) {
            // 53.16 magma-safe / not magma-safe atlas entries.
            if (native_main_button_at(*gps_, x, y, 353) ||
                native_main_button_at(*gps_, x, y, 354)) { magma = x; break; }
        }
        if (magma < 0) continue;
        for (int x = table->select_x; x + 4 <= gps_->dimx; ++x) {
            // 53.16 permit / forbid non-economic stone use.
            if (native_main_button_at(*gps_, x, y, 355) ||
                native_main_button_at(*gps_, x, y, 356)) { checkbox = x; break; }
        }
        if (checkbox <= table->uses_x) continue;

        for (const bool uses : {false, true}) {
            const int left = uses ? table->uses_x : picture_right + 1;
            const int source_right = uses ? checkbox : magma;
            const int right = source_right - 1;
            // Read up to the actual control, then retain a display inset.
            // The source budget must include the last native truncation dot.
            int first = left, end = source_right;
            while (first < end && rows[y][first] == ' ') ++first;
            while (end > first && rows[y][end - 1] == ' ') --end;
            if (first >= end || !current(first, end, y)) continue;
            const std::string visible = rows[y].substr(first, end - first);
            std::string source = visible;
            for (const auto &capture : captures)
                if (capture.x == first && capture.y == y && capture.visible == visible) {
                    source = capture.complete;
                    break;
                }
            std::optional<std::string> target;
            bool unknown = false;
            if (!uses) {
                // Use the same ore/non-smeltable-mineral names as boulders
                // and blocks, including RAW STONE_NAME aliases. Remaining
                // complete stone names use material grammar, never month or
                // generated-person-name senses from the generic compositor.
                target = translate_name(source);
                unknown = !target;
            } else {
                // The native list can end at a whole entry with ",...",
                // without the space used between ordinary entries. Keep
                // that omission marker out of the final reaction lookup.
                // Prefer captured complete text above; never invent entries
                // hidden by a marker that is still present in that source.
                const bool omitted = source.ends_with(",...");
                const std::string list = omitted ? source.substr(0, source.size() - 4) : source;
                std::string joined;
                size_t start = 0;
                while (start < list.size()) {
                    const size_t comma = list.find(", ", start);
                    const std::string clause = trim(list.substr(start,
                        comma == std::string::npos ? std::string::npos : comma - start));
                    const auto translated = translate_fortress_material_use(clause);
                    if (!joined.empty()) joined += "，";
                    joined += translated ? *translated : cp437_to_utf8(clause);
                    unknown = unknown || !translated;
                    if (comma == std::string::npos) break;
                    start = comma + 2;
                }
                if (omitted) joined += "，...";
                target = std::move(joined);
            }
            append(first, end, y, uses ? kFortressStoneUsesRule : kFortressStoneNameRule,
                target ? *target : cp437_to_utf8(source), left, right, unknown);
        }
    }
}

void Overlay::layout_fortress_stone(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_y <= 0) return;
    std::vector<std::string> rows(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x)
            if (const auto ch = visible_char_at(x, y)) rows[y][x] = ch;
    const auto table = fortress_stone_table(rows);
    if (!table) return;
    const int pixels = std::clamp(static_cast<int>(gps_->tile_pixel_y * config_.font_scale),
        1, gps_->tile_pixel_y);
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate) continue;
        const int display_y = match.native_split_text ? match.native_split_top_y : match.y;
        if (display_y == table->main_tabs_y || display_y == table->labor_tabs_y ||
            display_y == table->tabs_y) {
            // All three tab bands use the SAME locked pixel size as table
            // fields. Preserve their native centering and half-font baseline;
            // do not allow per-caption ink/English-width fitting or optical
            // enlargement to make short and long tab labels different sizes.
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
            continue;
        }
        int left = -1, right = -1;
        if (match.rule == kFortressStoneUsesRule || match.rule == kFortressStoneNameRule) {
            // Capture and display share the actual controls of this row.
            left = match.layout_x;
            right = match.layout_clip_right;
        } else if (match.rule == kFortressStoneCaptionRule && match.y == table->header_y) {
            left = match.x;
            right = match.source == "Stone type" ? table->magma_x - 1
                : match.source == "Magma-safe" ? table->uses_x - 1
                : match.source == "Economic uses" ? table->select_x - 1
                : table->select_end;
        }
        if (left < 0 || right <= left) continue;
        match.layout_y = match.y;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        match.layout_clip_right = right;
        // Use the shared fixed-size field layout. Shorten the translated
        // complete sentence only when its actual Chinese width exceeds the
        // live column; never retain the native English truncation budget.
        layout_fortress_text_rows(renderer, {{&match}}, left, right);
        if (match.rule == kFortressStoneUsesRule || match.rule == kFortressStoneNameRule)
            match.layout_ellipsize = true;
    }
}
