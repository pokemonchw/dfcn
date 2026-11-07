// The native squad draw submits every text writer into its private capture.
// Consume those records once at production time; never discover text in a
// screen, build screen_rows, or invoke the old page/squad grammar sweeps.
void Overlay::prepare_native_squads_text() {
    TranslationStateScope translation;
    g_native_squads_footer_rows.clear();
    g_native_squads_footer_target.clear();
    g_native_squads_paragraphs.clear();
    g_native_squads_matches.clear();
    if (config_.enabled && !rules_.empty())
        g_native_squads_matches = find_native_squads_matches();
}

std::vector<Match> Overlay::find_native_squads_matches() const {
    std::vector<Match> result;
    const auto *gps = g_native_squads_layer.foreground.graphics();
    const auto &panel = g_native_squads_panel;
    if (!g_native_squads_layer.ready || !gps || !gps->screen ||
            gps->tile_pixel_x <= 0 || gps->tile_pixel_y <= 0 ||
            panel.w <= 0 || panel.h <= 0) return result;
    const int panel_right = panel.x + panel.w;
    const int panel_bottom = panel.y + panel.h;
    const int origin_x = (gps->screen_pixel_x - gps->tile_pixel_x * gps->dimx) / 2;
    const int origin_y = (gps->screen_pixel_y - gps->tile_pixel_y * gps->dimy) / 2;
    struct Translation {
        std::optional<std::string> target;
        std::shared_ptr<const TranslationResult> result;
        std::vector<int> foregrounds;
    };
    // Native writers run each frame. Unchanged submitted fields must not
    // repeat the name/mission/template translators on the producer thread.
    struct CapturedTranslations {
        const Overlay *owner = nullptr;
        uint64_t revision = 0, identities = 0;
        std::unordered_map<std::string, Translation> fields;
    };
    static CapturedTranslations cache;
    const uint64_t identities = native_identity_translation_context();
    if (cache.owner != this || cache.revision != dfhack_translation_catalog_revision_ ||
            cache.identities != identities) {
        cache = {};
        cache.owner = this;
        cache.revision = dfhack_translation_catalog_revision_;
        cache.identities = identities;
    }
    const auto remember = [&](std::string key, Translation value) {
        if (cache.fields.size() >= 4096) cache.fields.clear();
        cache.fields.emplace(std::move(key), std::move(value));
    };
    struct Field {
        const NativeDrawnTextRow *draw;
        Match match;
        std::string complete;
        bool generated_name = false;
        NativeSquadsEquipmentField equipment = NativeSquadsEquipmentField::None;
        int footer = -1;
        bool paragraph = false;
    };
    std::vector<Field> fields;
    auto captured_rows = g_native_squads_text.rows;
    for (auto &plane : captured_rows)
        for (auto &draw : plane) refresh_native_unit_identity_draw(draw);
    for (const auto &plane : captured_rows) for (const auto &draw : plane) {
        if (draw.source.empty() || draw.draw_dimx != gps->dimx || draw.draw_dimy != gps->dimy ||
                draw.draw_grid != (draw.top_layer ? gps->screen_top : gps->screen) ||
                draw.y < panel.y || draw.y >= panel_bottom) continue;
        int first = std::max(panel.x, draw.x);
        int last = static_cast<int>(std::min<int64_t>(panel_right,
            int64_t(draw.x) + draw.source.size()));
        if (draw.draw_clip) {
            if (draw.y < draw.draw_clip->y ||
                    draw.y >= draw.draw_clip->y + draw.draw_clip->h) continue;
            first = std::max(first, draw.draw_clip->x);
            last = std::min(last, draw.draw_clip->x + draw.draw_clip->w);
        }
        while (first < last && draw.source[first - draw.x] == ' ') ++first;
        while (last > first && draw.source[last - draw.x - 1] == ' ') --last;
        if (first >= last) continue;
        // Keep the complete producer string for translation. The scrollbar
        // can overwrite its last native glyph without revoking the visible
        // prefix; only surviving bytes of this writer become source masks.
        const auto current_cell = [&](int x, int y) {
            if (y < panel.y || y >= panel_bottom) return false;
            const size_t at = static_cast<size_t>(x) * gps->dimy + y;
            const unsigned char ch = draw.draw_grid[at * 8];
            return (ch ? ch : ' ') == static_cast<unsigned char>(draw.source[x - draw.x]) &&
                native_ui_top_layer_at(*gps, at) == draw.top_layer;
        };
        while (first < last && !current_cell(first, draw.y)) ++first;
        while (last > first && !current_cell(last - 1, draw.y)) --last;
        for (int x = first; x < last; ++x)
            if (!current_cell(x, draw.y)) { last = x; break; }
        while (last > first && draw.source[last - draw.x - 1] == ' ') --last;
        if (first >= last) continue;
        const auto current = [&](int y) {
            if (y < panel.y || y >= panel_bottom) return false;
            for (int x = first; x < last; ++x)
                if (!current_cell(x, y)) return false;
            return true;
        };
        Match match{first, draw.y, last - first, -2, {},
            draw.source.substr(first - draw.x, last - first)};
        const auto *flags = draw.top_layer ? gps->screentexpos_top_flag : gps->screentexpos_flag;
        int top = draw.y, rows = 1;
        if (flags) {
            constexpr uint32_t half_mask = (1u << 3) | (1u << 4);
            const auto half = flags[static_cast<size_t>(first) * gps->dimy + draw.y] & half_mask;
            const int mate = half == (1u << 3) ? draw.y + 1 :
                half == (1u << 4) ? draw.y - 1 : -1;
            if (mate >= panel.y && mate < panel_bottom && current(mate) &&
                    (flags[static_cast<size_t>(first) * gps->dimy + mate] & half_mask) ==
                        (half == (1u << 3) ? (1u << 4) : (1u << 3))) {
                top = std::min(draw.y, mate); rows = 2;
                match.native_split_text = true;
                match.native_split_top_y = top;
            }
        }
        match.layout_x = first;
        match.layout_y = top;
        match.layout_length = panel_right - 1 - first;
        match.layout_clip_right = panel_right - 1;
        match.layout_left = true;
        match.layout_foreground_rgb = draw.foreground_rgb;
        match.native_squads_foreground = true;
        match.layout_native_clip = SDL_Rect{
            origin_x + first * gps->tile_pixel_x, origin_y + top * gps->tile_pixel_y,
            (panel_right - 1 - first) * gps->tile_pixel_x, rows * gps->tile_pixel_y};
        Field field{&draw, std::move(match),
            trim(draw.complete_source.empty() ? draw.source : draw.complete_source)};
        field.generated_name = static_cast<bool>(draw.squad_generated_name);
        for (size_t index = 0; index < g_native_squads_equipment_callers.size(); ++index)
            if (g_native_squads_equipment_callers[index] &&
                    draw.native_caller == g_native_squads_equipment_callers[index])
                field.equipment = static_cast<NativeSquadsEquipmentField>(index + 1);
        if (field.equipment != NativeSquadsEquipmentField::None)
            field.match.layout_ellipsize = true;
        // All three squad-list fields share the native text allocation.
        // The producer adjusts it for the scrollbar before writing even a
        // short caption; neither its English length nor the panel edge owns
        // the translated width. Keep long orders on their original line.
        if (draw.squad_list_right > first) {
            field.match.layout_clip_right = std::min(
                field.match.layout_clip_right, draw.squad_list_right);
            field.match.layout_length = field.match.layout_clip_right - first;
            field.match.layout_native_clip->w = field.match.layout_length * gps->tile_pixel_x;
            field.match.layout_ellipsize = true;
        }
        if (draw.native_caller && (draw.native_caller == g_native_squads_member_name_caller ||
                draw.native_caller == g_native_squads_member_order_caller)) {
            // The producer draws the member's selection box before its text.
            // Its captured cursor positions own the right edge, including the
            // scrollbar offset; no skin, border or empty-cell search is needed.
            for (const auto &column : g_native_squads_member_columns) {
                if (draw.y < column.y || draw.y >= column.y + column.h ||
                        column.x <= first) continue;
                field.match.layout_clip_right = std::min(
                    field.match.layout_clip_right, column.x);
                field.match.layout_length = field.match.layout_clip_right - first;
                field.match.layout_native_clip->w =
                    field.match.layout_length * gps->tile_pixel_x;
                field.match.layout_ellipsize = true;
            }
        }
        for (size_t index = 0; index < g_native_squads_footer_callers.size(); ++index)
            if (draw.native_caller && draw.native_caller == g_native_squads_footer_callers[index])
                field.footer = static_cast<int>(index);
        fields.push_back(std::move(field));
    }
    // Captured order and coordinates establish the actual fields. Selecting
    // current records does not search for headings or neighbours in a grid.
    std::stable_sort(fields.begin(), fields.end(), [](const Field &a, const Field &b) {
        return a.draw->sequence > b.draw->sequence;
    });
    std::vector<Field> owned;
    for (auto &field : fields) {
        const int top = field.match.layout_y;
        const int rows = field.match.native_split_text ? 2 : 1;
        if (std::any_of(owned.begin(), owned.end(), [&](const Field &other) {
                return top < other.match.layout_y + (other.match.native_split_text ? 2 : 1) &&
                    other.match.layout_y < top + rows &&
                    field.match.x < other.match.x + other.match.length &&
                    other.match.x < field.match.x + field.match.length;
            })) continue;
        owned.push_back(std::move(field));
    }
    std::sort(owned.begin(), owned.end(), [](const Field &a, const Field &b) {
        return std::tie(a.match.layout_y, a.match.x) < std::tie(b.match.layout_y, b.match.x);
    });
    for (auto &field : owned) {
        int right = field.match.layout_clip_right;
        for (const auto &other : owned)
            if (other.match.layout_y == field.match.layout_y &&
                    other.match.x > field.match.x) right = std::min(right, other.match.x);
        field.match.layout_clip_right = right;
        field.match.layout_length = std::max(1, right - field.match.x);
        field.match.layout_native_clip->w = field.match.layout_length * gps->tile_pixel_x;
        if (!field.complete.starts_with("Routine:")) continue;
        Field *order = nullptr, *name = nullptr;
        for (auto &before : owned)
            if (before.match.x == field.match.x && before.match.layout_y < field.match.layout_y &&
                    (!order || before.match.layout_y > order->match.layout_y)) order = &before;
        if (order) for (auto &before : owned)
            if (before.match.x == order->match.x && before.match.layout_y < order->match.layout_y &&
                    (!name || before.match.layout_y > name->match.layout_y)) name = &before;
        // Alias provenance still takes priority. Only the producer's actual
        // name/order/routine record arrangement grants generated-name context.
        if (name && !name->draw->squad_alias_target && !name->draw->editable_text &&
                !name->draw->unit_identity_target) name->generated_name = true;
    }

    constexpr std::string_view footer_source =
        "Select a squad or squad member to give orders, change equipment, and assign schedules.";
    std::array<Field *, 4> footer{};
    for (auto &field : owned) if (field.footer >= 0) footer[field.footer] = &field;
    if (std::all_of(footer.begin(), footer.end(), [](const Field *field) { return field; })) {
        std::string complete;
        for (const auto *field : footer) {
            if (!complete.empty()) complete += ' ';
            complete += field->complete;
        }
        if (compact_ui_message_literal(complete) == compact_ui_message_literal(footer_source)) {
            const std::string key = "f" + complete;
            std::optional<std::string> target;
            if (const auto found = cache.fields.find(key); found != cache.fields.end()) {
                target = found->second.target;
            } else {
                std::vector<int> colors;
                auto translated = translate_help_paragraph_result(complete,
                    std::vector<int>(complete.size(), footer[0]->draw->foreground_rgb), colors, true);
                if (translated.usable() && translated.changed()) target = std::move(translated.target);
                remember(key, {target, {}});
            }
            if (target && !target->empty()) {
                g_native_squads_footer_target = std::move(*target);
                for (const auto *field : footer) g_native_squads_footer_rows.push_back(field->match);
            }
        }
    }
    for (auto &first : owned) {
        for (const auto &spec : native_squad_messages) {
            // The four-writer footer already has its separate provenance.
            if (!spec.parts.back().empty() || first.complete != spec.parts.front()) continue;
            NativeSquadsParagraph paragraph;
            std::vector<Field *> parts;
            std::string source;
            for (size_t i = 0; i < spec.parts.size() && !spec.parts[i].empty(); ++i) {
                const auto found = std::find_if(owned.begin(), owned.end(), [&](const Field &field) {
                    return field.draw->x == first.draw->x &&
                        field.draw->y == first.draw->y + static_cast<int>(i) &&
                        !field.draw->squad_alias_target && !field.draw->squad_generated_name &&
                        !field.draw->editable_text && !field.draw->unit_identity_target &&
                        (spec.parts[i] == "{s}" || field.complete == spec.parts[i]);
                });
                if (found == owned.end()) { parts.clear(); break; }
                if (!source.empty()) source += ' ';
                source += found->complete;
                parts.push_back(&*found);
                paragraph.rows.push_back(found->match);
            }
            if (parts.empty()) continue;
            const auto target = translate_fortress_squad_field(source);
            if (!target || target->empty()) continue;
            paragraph.target = *target;
            for (auto *part : parts) part->paragraph = true;
            g_native_squads_paragraphs.push_back(std::move(paragraph));
            break;
        }
    }
    for (auto &field : owned) {
        const auto &draw = *field.draw;
        auto &match = field.match;
        if (draw.unit_identity_target && !draw.unit_identity_ready &&
                !draw.squad_alias_target && !draw.editable_text) {
            // Keep the exact captured source mask before native tile paint.
            // An unresolved typed identity cannot fall back to Latin ink.
            match.target.clear();
            result.push_back(std::move(match));
            continue;
        }
        if (field.footer >= 0 && !g_native_squads_footer_target.empty()) {
            result.push_back(std::move(match)); // exact source masks for the footer
            continue;
        }
        if (field.paragraph) {
            result.push_back(std::move(match));
            continue;
        }
        std::optional<std::string> target;
        if (draw.squad_alias_target) {
            target = *draw.squad_alias_target;
            auto translated = TranslationResult::translated(field.complete, *target, "squad.alias");
            translated.status = TranslationStatus::PreservedAuthored;
            for (auto &fragment : translated.fragments) fragment.status = translated.status;
            match.translation_result = std::make_shared<const TranslationResult>(std::move(translated));
        } else if (draw.unit_identity_target) {
            target = *draw.unit_identity_target;
        } else if (draw.editable_text) {
            if (contains_cjk_utf8(field.complete)) target = native_text_to_utf8(field.complete);
        } else {
            std::string key = (field.generated_name ? "n" : "t") + field.complete;
            key += static_cast<char>(field.equipment);
            key += std::to_string(RULESETS.resource_revision());
            if (draw.squad_generated_name) {
                // Identically spelled generated names can use different WORD
                // roots. Cache their owned semantic fields, never a pointer to
                // a native temporary or the newly allocated capture snapshot.
                const auto &name = *draw.squad_generated_name;
                const auto append = [&](std::string_view value) {
                    key += '\x1f';
                    key += std::to_string(value.size());
                    key += ':';
                    key += value;
                };
                append(name.first_name); append(name.nickname); append(name.native_name);
                append(std::to_string(name.type)); append(std::to_string(name.language));
                append(std::to_string(name.nickname_mode)); append(std::to_string(name.has_name));
                for (const auto &word : name.words) {
                    append(word.id); append(std::to_string(word.part_of_speech));
                    append(std::to_string(word.has_form));
                }
            }
            key += '\x1f';
            key += std::to_string(draw.foreground_rgb);
            if (const auto found = cache.fields.find(key); found != cache.fields.end()) {
                target = found->second.target;
                match.translation_result = found->second.result;
                match.layout_glyph_foreground_rgb = found->second.foregrounds;
            } else {
                // The original caller establishes the entire field's type.
                // RAW sword/knife/color names must not inherit homonymous
                // skill, creature or material meanings from UI literals.
                if (!field.generated_name &&
                        (field.equipment == NativeSquadsEquipmentField::Type ||
                         field.equipment == NativeSquadsEquipmentField::Item)) {
                    const std::string_view source = field.complete;
                    constexpr std::array<std::string_view, 11> choices{
                        "specific armor", "specific helm", "specific pants",
                        "specific gloves", "specific shoes", "specific shield",
                        "specific weapon", "individual choice", "individual choice, weapon",
                        "indiv choice, melee", "indiv choice, ranged"};
                    const bool fixed_choice = source == "missing item" ||
                        (field.equipment == NativeSquadsEquipmentField::Type &&
                            std::find(choices.begin(), choices.end(), source) != choices.end());
                    if (fixed_choice) target = exact_literal_translation(source);
                    else {
                        constexpr std::string_view foreign = " (foreign)";
                        const bool foreign_type = field.equipment == NativeSquadsEquipmentField::Type &&
                            source.ends_with(foreign);
                        const auto noun = foreign_type
                            ? source.substr(0, source.size() - foreign.size()) : source;
                        auto translated = translate_fortress_item_caption_display(noun);
                        if (foreign_type) {
                            const auto marker = exact_literal_translation(trim_view(foreign));
                            translated.append(marker
                                ? TranslationResult::translated(foreign, *marker, "item-origin")
                                : preserved_item_field(foreign, "item-origin"), noun.size());
                            finish_item_display_result(translated, source, "uniform-equipment");
                        }
                        if (translated.usable() && translated.changed()) {
                            target = translated.target;
                            match.translation_result = std::make_shared<const TranslationResult>(
                                std::move(translated));
                        }
                    }
                } else if (!field.generated_name &&
                        field.equipment == NativeSquadsEquipmentField::Material) {
                    target = exact_literal_translation("Uniform material: " + field.complete);
                    if (!target && config_.compositional_rules)
                        target = translate_material_name(field.complete);
                } else if (!field.generated_name &&
                        field.equipment == NativeSquadsEquipmentField::Color) {
                    target = translate_color_picker_caption(field.complete);
                }
                if (!target) target = exact_literal_translation(field.complete);
                if (field.generated_name) {
                    if (!target && draw.squad_generated_name)
                        target = translate_history_name(*draw.squad_generated_name);
                    if (!target) target = translate_legends_name(field.complete, false);
                } else {
                    // UI prose literals (hP) live outside the ordinary exact
                    // dictionary. Probe only this complete submitted field;
                    // literal_only excludes suffix/template paragraph searches.
                    if (!target) target = translate_help_paragraph(field.complete,
                        std::vector<int>(field.complete.size(), draw.foreground_rgb),
                        match.layout_glyph_foreground_rgb, true, -1, true);
                    if (!target && field.complete.starts_with("Routine:")) {
                        const auto label = exact_literal_translation("Routine:");
                        const auto value = trim_view(std::string_view(field.complete).substr(8));
                        const auto translated = exact_literal_translation(value);
                        if (label) target = *label + (translated ? *translated : native_text_to_utf8(value));
                    }
                    if (!target) target = translate_fortress_squad_field(field.complete);
                    if (!target) target = translate_world_mission_title(field.complete);
                    if (!target) target = translate_fortress_activity(field.complete);
                    // Match only the complete submitted field, without
                    // substring dictionary or page/name discovery.
                    if (!target) for (int index : candidate_template_rules(field.complete)) {
                        const auto &rule = rules_[index];
                        size_t end = 0;
                        std::vector<std::string> captures;
                        if (!match_template(rule, field.complete, 0, &end, &captures) ||
                                end != field.complete.size()) continue;
                        auto translated = translate_template_captures_display(rule, captures, field.complete);
                        if (!translated.usable() || !translated.changed()) continue;
                        target = translated.target;
                        match.translation_result = std::make_shared<const TranslationResult>(std::move(translated));
                        break;
                    }
                }
                // A nested translator can publish identity bindings. Only
                // retain results for the context under which they resolved.
                if (identities == native_identity_translation_context())
                    remember(key, {target, match.translation_result,
                        match.layout_glyph_foreground_rgb});
            }
        }
        if (!target || target->empty()) continue;
        if (match.translation_result && match.translation_result->has_untranslated()) {
            match.native_hover_untranslated = true;
            match.native_help_review_source = field.complete;
        }
        match.target = std::move(*target);
        result.push_back(std::move(match));
    }
    return result;
}
