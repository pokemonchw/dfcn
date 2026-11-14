// Complete captions have one translation path for both rendering and search.
// Colors, tree names and bare item types must retain their field meanings.
std::optional<std::string> Overlay::translate_stockpile_setting(
        std::string_view caption, StockpileCaptionKind kind) const {
    return translate_stockpile_setting_display(caption, kind).strict_target();
}

TranslationResult Overlay::translate_stockpile_setting_display(
        std::string_view caption, StockpileCaptionKind kind) const {
    TranslationStateScope translation_scope;
    TranslationWorkScope work;
    const std::string source = normalize_utterance(caption);
    // Own complete captions, not native record addresses: category changes
    // recycle those records. Field meaning and original spelling are part of
    // the key, so wood/color/material homonyms and names cannot alias.
    const std::string key = item_translation_cache_prefix() +
        std::to_string(static_cast<int>(kind)) + ":display:" + source;
    if (const auto found = stockpile_setting_translation_cache_.find(key);
        found != stockpile_setting_translation_cache_.end()) return found->second;
    const std::string folded = lower(source);
    const bool candidate = kind != StockpileCaptionKind::Label;
    const bool typed_value = kind == StockpileCaptionKind::Color || kind == StockpileCaptionKind::Wood;
    std::optional<std::string> target;
    auto result = preserved_item_field(source, "stockpile-setting");
    try {
    TranslationWorkFrame frame("stockpile display field", source);
    if (kind == StockpileCaptionKind::Color) target = RULESETS.translate_color(folded);
    if (!target && kind == StockpileCaptionKind::Wood) {
        std::vector<size_t> origins;
        target = RULESETS.translate_with_origins(folded, "::plants::name", origins);
    }
    if (!target) target = exact_literal_translation("Stockpile setting: " + folded);
    if (!target && kind == StockpileCaptionKind::ItemType && config_.compositional_rules)
        target = translate_arena_equipment_source_phrase(source);
    if (!target && candidate && !typed_value && config_.compositional_rules)
        target = RULESETS.translate_material_state(folded);
    if (!target && !typed_value) target = exact_literal_translation(source);
    if (!target && !typed_value && config_.compositional_rules) {
        target = RULESETS.translate_material_state(folded);
        if (!target)
            target = translate_item_description_term(source);
        // Generic composition still has its strict contract. Typed fields and
        // exact literals above carry their own full-consumption proof.
        if (!target) {
            auto generic = translate_compositional(source);
            if (item_description_translation_complete(generic)) target = std::move(generic);
        }
    }
    if (target && item_display_target_valid(*target))
        result = TranslationResult::translated(source, *target, "stockpile-setting");
    else if (candidate && config_.compositional_rules &&
        (kind == StockpileCaptionKind::Value || kind == StockpileCaptionKind::ItemType))
        result = translate_item_description_term_display(source);
    } catch (const TranslationWorkLimit &) {
        if (!work.owns_budget()) throw;
        result = preserved_item_field(source, "stockpile-setting", TranslationStatus::WorkLimited);
    }
    result.policy = TranslationPolicy::Display;
    result.resource_revision = RULESETS.resource_revision();
    if (!item_translation_cache_context_current(key)) return result;

    // A meat catalog contains every species/organ combination, not only the
    // visible rows. Share successful AND unresolved captions between search
    // and drawing, across query edits and tab switches. Evict incrementally:
    // clearing a small cache wholesale makes a full traversal reparse itself.
    constexpr size_t maximum_records = 65536;
    constexpr size_t maximum_bytes = 16 * 1024 * 1024;
    const size_t bytes = 2 * key.size() + item_display_result_bytes(result);
    if (bytes <= maximum_bytes) {
        while (!stockpile_setting_translation_order_.empty() &&
                (stockpile_setting_translation_cache_.size() >= maximum_records ||
                 stockpile_setting_translation_bytes_ + bytes > maximum_bytes)) {
            const auto oldest = stockpile_setting_translation_cache_.find(
                stockpile_setting_translation_order_.front());
            stockpile_setting_translation_bytes_ -= 2 * oldest->first.size() +
                item_display_result_bytes(oldest->second);
            stockpile_setting_translation_cache_.erase(oldest);
            stockpile_setting_translation_order_.pop_front();
        }
        const auto [entry, inserted] = stockpile_setting_translation_cache_.emplace(key, result);
        if (inserted) {
            try {
                stockpile_setting_translation_order_.push_back(key);
            } catch (...) {
                stockpile_setting_translation_cache_.erase(entry);
                throw;
            }
            stockpile_setting_translation_bytes_ += bytes;
        }
    }
    return result;
}

bool Overlay::translated_stockpile_search_matches(std::string_view source,
        std::string_view query, StockpileCaptionKind kind) const {
    TranslationStateScope translation_scope;
    if (!config_.enabled) return false;
    if (source.empty() || translated_search_query(query).literal.empty()) return false;
    const auto target=memoize_search_translation('\x7f',std::to_string(static_cast<int>(kind))+":"+std::string(source),[&]() -> std::optional<std::string> {
        const auto result=translate_stockpile_setting_display(source,kind);
        return result.usable()?std::optional<std::string>(result.target):std::nullopt;
    },true);
    const bool material = kind == StockpileCaptionKind::Wood;
    const bool item = kind == StockpileCaptionKind::ItemType;
    return search_association_text(source, target.value_or(""), query,
        material ? SearchCandidateKind::MaterialChoice : item ? SearchCandidateKind::ItemDefinition : SearchCandidateKind::PropertyChoice,
        material ? "stockpile.material" : item ? "stockpile.type" : "properties");
}

struct NativeStockpileSettingsState {
    uintptr_t category_return = 0;
    uintptr_t filter_return = 0;
    uintptr_t value_return = 0;
    StockpileCaptionKind value_kind = StockpileCaptionKind::Value;
};
static std::optional<NativeStockpileSettingsState> native_stockpile_settings_state();

// The native interface's open bit and current sub-mode own this page. Its
// three caption writers distinguish categories, filters (including direct
// toggles) and values even when search removes the entire value column.
// Local button geometry is used only to place text and reserve artwork.
void Overlay::append_fortress_stockpile_settings(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    const auto state = native_stockpile_settings_state();
    if (!state) return;
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    struct Caption {
        NativeTextCard card;
        StockpileCaptionKind kind;
        const NativeDrawnTextRow *draw;
    };
    std::vector<Caption> captions;
    const std::array draws{captured_native_drawn_text_view(),
        captured_native_drawn_text_view(true)};
    for (const auto &layer : draws) {
        for (const auto &draw : layer) {
            const bool category = draw.native_caller == state->category_return;
            const bool value = draw.native_caller == state->value_return;
            if (!draw.native_caller || (!category && !value &&
                    draw.native_caller != state->filter_return)) continue;
            if (draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.source.empty() || draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x) ||
                    (draw.draw_dimx && draw.draw_dimx != gps_->dimx) ||
                    (draw.draw_dimy && draw.draw_dimy != gps_->dimy) ||
                    rows[draw.y].compare(draw.x, draw.source.size(), draw.source) != 0) continue;
            const auto text = trim_view(draw.source);
            if (text.empty()) continue;
            const int first = draw.x + static_cast<int>(text.data() - draw.source.data());
            const int last = first + static_cast<int>(text.size());
            const auto setting = native_stockpile_setting_button_frame(
                *gps_, first, last, draw.y);
            if (!setting) continue;
            const auto *button = &setting->button;
            const auto &box = button->interior;
            const auto icon = category ? native_category_button_text_rect(
                *gps_, first, last, draw.y, button) : std::nullopt;
            const int source_left = !classic && icon ? icon->x : box.x;
            const int text_left = source_left + 1;
            int right = setting->status_left >= 0 ? setting->status_left - 1 : box.x + box.w;
            // The right-hand check/cross is artwork, not spare caption width.
            // Reserve its actual live cells, including at non-square UI scales.
            // Classic drawing overwrites icons with the category skin but
            // can retain their anchored metadata. Only visible artwork in
            // graphical mode further limits this proven caption interval.
            for (int x = text_left; !classic && x < right; ++x) {
                for (int row = box.y; row < box.y + box.h; ++row) {
                    if (native_foreground_picture_at(*gps_, x, row)) {
                        right = x - 1;
                        break;
                    }
                }
            }
            if (right <= text_left) continue;
            // ASCII rails occupy the upper/lower rows of the button. Capture
            // only its middle caption, but centre it in the full control.
            // The display gap must not discard the last native source byte.
            const int source_right = classic && setting->status_left >= 0
                ? setting->status_left : right;
            auto card = capture_panel_text_card({source_left, box.y + (classic ? 1 : 0),
                source_right - source_left, classic ? 1 : box.h}, true);
            if (!card || std::any_of(card->rows.begin(), card->rows.end(), [&](const NativeTextCardRow &row) {
                    return rows[row.y].compare(row.x, row.source.size(), row.source) != 0;
                })) continue;
            card->interior = {text_left, box.y, right - text_left, box.h};
            if (std::any_of(captions.begin(), captions.end(), [&](const Caption &seen) {
                    return seen.card.interior.x == card->interior.x &&
                        seen.card.interior.y == card->interior.y;
                })) continue;
            captions.push_back({std::move(*card),
                value ? state->value_kind : StockpileCaptionKind::Label, &draw});
        }
    }
    const auto clipped = captured_clipped_captions();
    for (const auto &caption : captions) {
        std::vector<Match> labels;
        for (const auto &row : caption.card.rows) {
            std::string source = row.source;
            if (caption.draw->x == row.x && caption.draw->y == row.y &&
                    caption.draw->source == source && !caption.draw->complete_source.empty())
                source = caption.draw->complete_source;
            for (const auto &capture : clipped)
                if (capture.x == row.x && capture.y == row.y && capture.visible == source) {
                    source = capture.complete;
                    break;
                }
            source = normalize_utterance(source);
            const auto translation = translate_stockpile_setting_display(source, caption.kind);
            Match label{row.x, row.y, static_cast<int>(row.source.size()),
                kFortressStockpileSettingRule, translation.usable()
                    ? translation.target : native_text_to_utf8(source), row.source};
            label.translation_result = std::make_shared<const TranslationResult>(translation);
            label.native_hover_untranslated = translation.has_untranslated();
            if (translation.has_untranslated()) label.native_help_review_source = source;
            labels.push_back(std::move(label));
            // Keep the original spans for glyph suppression. Only the display
            // box moves, never the native hitboxes, icons or selected colors.
            std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        }
        compose_native_text_rows(caption.card, labels, only_y,
            kFortressStockpileSettingRule, false, true);
        for (auto &label : labels)
            if (only_y < 0 || only_y == label.y) matches.push_back(std::move(label));
    }
}

void Overlay::layout_fortress_stockpile_settings(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    for (auto &match : prepared_matches_) {
        if (match.rule != kFortressStockpileSettingRule || match.target.empty() ||
            match.native_split_duplicate) continue;
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x, match.layout_clip_right);
    }
}

// Stockpile types use standalone 4x3 main[122/123] controls, with captions
// five cells from the picture's left edge in a fourteen-cell column. These
// skins, not a stockpile's editable name or translated words, own the field.
// DF 53.16's native draw (ELF 0x169a79a..0x169a88d) uses the same caption
// slot in both states. Bars and / Blocks and Finished / Goods are two native
// rows (0x169adeb..0x169aefe), but each is ONE category, not two name tokens.
void Overlay::append_fortress_stockpile_types(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy) ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    auto context = rows;
    if (raw_layer) {
        // Recognition and layout use the current composite in both passes.
        // Only matching physical bytes are projected back to a raw layer.
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
    }
    static constexpr std::string_view captions[] = {
        "all", "ammo", "animals", "armor", "bars and blocks", "cloth",
        "coins", "corpses", "finished goods", "food", "furniture", "gem",
        "leather", "refuse", "sheets", "stone", "weapons", "wood", "none", "custom",
    };
    const int pixels = std::clamp(static_cast<int>(
        gps_->tile_pixel_y * config_.font_scale), 1, gps_->tile_pixel_y);
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - tile_w * gps_->dimx) / 2;
    const int origin_y = (gps_->screen_pixel_y - tile_h * gps_->dimy) / 2;
    for (int y = 1; y + 1 < gps_->dimy; ++y) {
        if (only_y >= 0 && (only_y < y - 1 || only_y > y + 1)) continue;
        for (int x = 0; x + 14 <= gps_->dimx; ++x) {
            // Native stockpile icons draw anchored artwork before this
            // frame (53.16 PE: 0x1403e679b). Classic add_lower_tile writes
            // the frame's glyphs/colors but leaves that artwork allocated.
            // Accept the icon's own picture while still matching all twelve
            // live frame cells; it is not an unrelated covering widget.
            if (!native_main_button_at(*gps_, x, y, 122, true) &&
                !native_main_button_at(*gps_, x, y, 123, true)) continue;
            const int left = x + 5, right = x + 14;
            struct SourceRow { int x, y; std::string text; };
            std::vector<SourceRow> sources;
            std::string complete;
            for (int row_y = y - 1; row_y <= y + 1; ++row_y) {
                const std::string_view slot(context[row_y].data() + left, right - left);
                const auto text = trim_view(slot);
                if (text.empty()) continue;
                const int source_x = left + static_cast<int>(text.data() - slot.data());
                // Two native half-font rows are one line only when the live
                // flags prove their relationship; identical text alone is
                // not evidence of duplication. Both spans still own masks.
                bool lower_half = false;
                if (!sources.empty() && sources.back().x == source_x &&
                    sources.back().y + 1 == row_y && sources.back().text == text) {
                    bool top = false, previous_top = false;
                    const auto *cell = cell_at(source_x, row_y, &top);
                    const auto *previous = cell_at(source_x, row_y - 1, &previous_top);
                    const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                    const size_t at = static_cast<size_t>(source_x) * gps_->dimy + row_y;
                    constexpr uint32_t halves = (1u << 3) | (1u << 4);
                    lower_half = cell && previous && top == previous_top && flags &&
                        (flags[at - 1] & halves) == (1u << 3) &&
                        (flags[at] & halves) == (1u << 4);
                }
                if (!lower_half) {
                    if (!complete.empty()) complete += ' ';
                    complete += text;
                }
                sources.push_back({source_x, row_y, std::string(text)});
            }
            const auto folded = lower(complete);
            if (std::find(std::begin(captions), std::end(captions), folded) ==
                std::end(captions)) continue;
            // All Chinese lives in the existing dictionary. Never send a UI
            // category through personal/procedural-name transliteration.
            const auto target = exact_literal_translation(complete);
            if (!target || target->empty()) continue;
            for (size_t index = 0; index < sources.size(); ++index) {
                const auto &source = sources[index];
                const int length = static_cast<int>(source.text.size());
                if (only_y >= 0 && only_y != source.y) continue;
                if (rows[source.y].compare(source.x, length, source.text) == 0) {
                    Match match{source.x, source.y, length, kFortressStockpileTypeRule,
                        index == 0 ? *target : std::string{}, source.text};
                    // Preserve every original source row for suppression,
                    // but draw one complete label at the icon's midpoint.
                    match.layout_x = left;
                    match.layout_y = y;
                    match.layout_length = right - left;
                    match.layout_left = true;
                    match.layout_clip_right = right;
                    // The whole three-row category owns the translated label.
                    // Its first native line can be above the icon midpoint;
                    // inferring a one-row clip from that line's lower texture
                    // would discard the complete label after centring it.
                    match.layout_native_clip = SDL_Rect{
                        origin_x + left * tile_w, origin_y + (y - 1) * tile_h,
                        (right - left) * tile_w, 3 * tile_h};
                    match.layout_fixed_baseline = true;
                    match.layout_prepared = true;
                    match.layout_line_height_pixels = gps_->tile_pixel_y;
                    matches.push_back(std::move(match));
                    std::fill_n(rows[source.y].begin() + source.x, length, ' ');
                } else if (raw_layer) {
                    // A caption may cross native layers. These partial raw
                    // spans suppress only current bytes, not hidden text;
                    // the composite pass alone draws the complete caption.
                    for (int offset = 0; offset < length;) {
                        while (offset < length &&
                            rows[source.y][source.x + offset] != source.text[offset]) ++offset;
                        const int start = offset;
                        while (offset < length &&
                            rows[source.y][source.x + offset] == source.text[offset]) ++offset;
                        if (offset == start) continue;
                        matches.push_back({source.x + start, source.y, offset - start,
                            kFortressStockpileTypeRule, {}, source.text.substr(start, offset - start)});
                        std::fill_n(rows[source.y].begin() + source.x + start, offset - start, ' ');
                    }
                }
            }
            x += 3;
        }
    }
}
