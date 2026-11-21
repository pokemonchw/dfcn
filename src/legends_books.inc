// Artifacts, written works, structures and ages share a two-column Legends list.
// Resolve the native full strings before the global literal/name scanners.
std::optional<std::string> Overlay::translate_legends_structure_type(
        std::string_view source) const {
    // The list omits articles, but its native type catalogue is the same as
    // the typed historical snapshot and detail heading. Resolve that exact
    // noun through the existing terms, never the generated-name fallback.
    const auto key = legends_structure_caption_key(source);
    if (!key) return std::nullopt;
    return translate_legends_term(*key, false);
}

std::optional<std::string> Overlay::translate_legends_written_item(
        std::string_view raw) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical written item", raw);
    const std::string source = lower(normalize_utterance(raw));
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    const std::string memo_key = "legends written item:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" + source;
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    // Reuse reviewed noun-phrase rules and the shared material/species table.
    // Do this before the generic compositor, which cannot distinguish a
    // binding material from the paper inside the book.
    for (int index : legends_description_rules_) {
        translation_work_step();
        const Rule &rule = rules_[static_cast<size_t>(index)];
        if (!(rule.source.ends_with("codex") || rule.source.ends_with("scroll") ||
              rule.source.ends_with("quire") || rule.source.ends_with("slab"))) continue;
        if (rule.template_kinds.empty()) {
            if (source == rule.source) return rule.target;
            continue;
        }
        size_t end = 0;
        std::vector<std::string> captures;
        if (!match_template(rule, source, 0, &end, &captures) || end != source.size()) continue;
        std::vector<std::optional<std::string>> translated;
        for (size_t i = 0; i < captures.size(); ++i) {
            if (rule.template_kinds[i] != 's' || captures[i].size() >= source.size()) break;
            auto term = translate_legends_term(captures[i], false);
            if (!term || term->empty() || std::any_of(term->begin(), term->end(),
                    [](unsigned char ch) { return (ch >= 'a' && ch <= 'z') ||
                        (ch >= 'A' && ch <= 'Z'); })) break;
            translated.push_back(std::move(term));
        }
        if (translated.size() == captures.size())
            return fill_template(rule, captures, &capture_translations_, nullptr, &translated);
    }
    return std::nullopt;
    });
    });
}

std::optional<std::string> Overlay::translate_legends_artifact_identity(
        std::string_view source) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical artifact", source);
    // Native artifact-name formatters also emit these two non-name results.
    // Keep their existing historical vocabulary in the shared identity path,
    // including diplomatic claims and quests, rather than phoneticizing them.
    source = trim_view(source);
    const std::string memo_key = "legends artifact:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        std::string(source);
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    const auto folded = lower(normalize_utterance(source));
    // Trade can capitalize the first byte when this field starts a reply.
    if (folded == "an unknown artifact")
        return translate_legends_term("an unknown artifact");
    if (folded == "untitled") return translate_legends_term("Untitled");
    const auto repeated = split_repeated_title_identity(source);
    if (!repeated)
        if (auto artifact = translate_world_artifact_name(source)) return artifact;
    const auto title = repeated.value_or(source);
    // Native single-name figures also repeat their names. Only an actual
    // BOOK_ART/BOOK_INSTRUCTION production selects semantic book parsing for
    // either a bare title or a repeated identity; other names keep their resolver.
    for (int index : legends_book_rules_) {
        translation_work_step();
        const Rule &rule = rules_[static_cast<size_t>(index)];
        size_t end = 0;
        std::vector<std::string> captures;
        if (!match_template(rule, title, 0, &end, &captures) || end != title.size()) continue;
        if (auto translated = translate_legends_book(title))
            return repeated ? *translated + "，“" + *translated + "”" : *translated;
    }
    // This is a complete artifact-name field supplied by b94400, not an
    // equipment/material phrase. Keep it on the name grammar so a history
    // title does not spend its draw budget trying unrelated item boundaries.
    if (auto translated = translate_procedural_fragment(std::string(source),
            false, false, {}, ProceduralFragmentContext::non_entity_name);
            translation_complete_with_native_nicknames(translated, source))
        return translated;
    // A typed artifact field can contain an English compound followed by
    // `the ... of ...` without the native-name/quoted-gloss pair. General
    // screen text only accepts that shape for a recognized personal name;
    // this field already establishes a generated name, so use its complete
    // title grammar instead of rejecting the compound as an unknown person.
    return translate_legends_name(source, false, false);
    });
    });
}

std::optional<LegendsWrittenHeading> Overlay::resolve_legends_written_heading(
        std::string_view source) const {
    return legends_translation_work([&]() -> std::optional<LegendsWrittenHeading> {
    TranslationWorkFrame work_frame("historical written heading", source);
    // Written artifacts can show just `title, material scroll`, without the
    // native-name/quoted-gloss pair. Split at the ITEM suffix so punctuation
    // inside a book title remains part of that title. The existing written
    // item grammar must resolve the complete suffix before this is a heading.
    source = trim_view(source);
    if (source.find('"') != std::string_view::npos) return std::nullopt;
    const size_t comma = source.rfind(',');
    if (comma == std::string_view::npos) return std::nullopt;
    const auto title = trim_view(source.substr(0, comma));
    if (title.empty() || title.ends_with("...")) return std::nullopt;
    auto item = translate_legends_written_item(trim_view(source.substr(comma + 1)));
    if (!item) return std::nullopt;
    auto translated = translate_legends_book(title);
    if (!translated && !generated_title_shape(title)) return std::nullopt;
    return LegendsWrittenHeading{title,
        translated.value_or(cp437_to_utf8(std::string(title))), std::move(*item)};
    });
}

std::optional<std::string> Overlay::translate_legends_detail_heading(
        std::string_view source) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical heading", source);
    // A figure tab can omit sex/species and retain only the name/gloss pair.
    // Its captured identity still owns the personal-name grammar; the same
    // history renderer must supply both its heading and linked body name.
    if (const auto caption = native_history_legends_caption();
            caption && caption->character_name) {
        const auto record = split_legends_figure_record(source);
        auto pair = record ? std::optional<GeneratedNameIdentity>(
            GeneratedNameIdentity{record->native_name, record->gloss}) :
            split_generated_name_identity(source);
        const auto &name = *caption->character_name;
        if (!pair && !name.nickname.empty() && !name.native_name.empty()) {
            // The tab omits sex/species. Its captured person identity owns
            // the full native name, including commas/quotes in a nickname.
            const std::string prefix = name.native_name + ", \"";
            if (source.starts_with(prefix) && source.ends_with('"') &&
                    source.size() > prefix.size() + 1)
                pair = GeneratedNameIdentity{source.substr(0, name.native_name.size()),
                    source.substr(prefix.size(), source.size() - prefix.size() - 1)};
        }
        const auto same = [](std::string_view a, std::string_view b) {
            return lower(native_text_to_utf8(trim_view(a))) ==
                lower(native_text_to_utf8(trim_view(b)));
        };
        if (pair && !name.native_name.empty() && same(pair->native_name, name.native_name)) {
            const auto native = translate_procedural_fragment(
                std::string(pair->native_name), true);
            const auto gloss = translate_history_name(name, true);
            if (native && gloss) {
                std::string result = *native + "，“" + *gloss + "”";
                if (record) {
                    const auto kind = memoize_identity_translation('c', record->species, [&] {
                        return translate_creature_descriptor(record->species);
                    });
                    result += "，" + kind.value_or(native_text_to_utf8(record->species));
                    if (record->sex == "female") result += "（♀）";
                    else if (record->sex == "male") result += "（♂）";
                }
                return result;
            }
        }
    }
    if (auto civilization = translate_civilization_reference(source))
        return civilization;
    if (auto figure = translate_legends_unnamed_figure(source)) return figure;
    if (legends_unnamed_region_heading(source))
        return exact_literal_translation(source);
    if (auto written = resolve_legends_written_heading(source))
        return written->title + "，" + written->item;
    // Site headings append their type after the native/English identity.
    // Split that field before the item parser: its whole-term dictionary
    // also recognizes labels such as Cave, which otherwise turn this
    // heading into an artifact name and bypass the English site renderer.
    if (const auto record = split_legends_figure_record(source);
            record && record->sex.empty() && world_site_type_shape(record->species)) {
        const std::string pair = std::string(record->native_name) + ", \"" +
            std::string(record->gloss) + "\"";
        if (auto name = translate_legends_place(pair)) {
            auto type = translate_world_site_type(record->species);
            if (!type) type = exact_literal_translation(record->species);
            return *name + "，" + type.value_or(native_text_to_utf8(record->species));
        }
        return std::nullopt;
    }
    // Artifact headings share the figure record's delimiters, but their last
    // field is an item, not a species. Use the same complete item grammar as
    // artifact lists and descriptions, including weapons and decorations,
    // before the broad figure translator can reinterpret it as a creature.
    const size_t quote = source.rfind('"');
    if (quote != std::string_view::npos) {
        auto suffix = trim_view(source.substr(quote + 1));
        if (suffix.starts_with(','))
            if (auto type = translate_item_description_term(trim_view(suffix.substr(1))))
                if (auto name = translate_legends_artifact_identity(source.substr(0, quote + 1)))
                    return *name + "，" + *type;
    }
    return translate_legends_artifact_identity(source);
    });
}

bool Overlay::append_legends_typed_list_matches(std::vector<std::string> &rows,
        const std::vector<std::string> &context, std::vector<Match> &matches,
        int only_y, int tabs_y) const {
    auto bounds = [](const std::string &row) {
        int left = 0, right = static_cast<int>(row.size());
        while (left < right && (row[left] == ' ' || is_cp437_box_separator(row, left))) ++left;
        while (right > left && (row[right - 1] == ' ' ||
                is_cp437_box_separator(row, right - 1))) --right;
        return std::pair{left, right};
    };
    int heading_y = -1;
    bool artifacts = false;
    bool structures = false;
    bool ages = false;
    for (int y = tabs_y + 1; y < std::min(tabs_y + 6, static_cast<int>(context.size())); ++y) {
        const auto [left, right] = bounds(context[y]);
        const auto heading = std::string_view(context[y]).substr(left, right - left);
        if (heading == "Codices, scrolls, etc." || heading == "Artifacts" ||
                heading == "Structures" || heading == "Chronicles by age") {
            heading_y = y;
            artifacts = heading == "Artifacts";
            structures = heading == "Structures";
            ages = heading == "Chronicles by age";
            break;
        }
    }
    if (heading_y < 0) return false; // Inactive tabs do not identify the current list.
    std::vector<NativeLegendsBookField> captures;
    {
        std::lock_guard<std::mutex> lock(g_legends_book_mutex);
        // A retained native grid can be presented again after Present has
        // advanced the capture epoch, without redrawing the list. Keep its
        // last title/type batch: the exact surviving bytes below must still
        // agree with the composed row, and a new native draw replaces it.
        if (!structures && !ages)
            captures = g_legends_book_fields;
    }
    const auto clipped = captured_clipped_captions();
    const auto complete_source = [&](int x, int y, const std::string &visible) {
        for (const auto &field : clipped)
            if (field.x == x && field.y == y && field.visible == visible)
                return field.complete;
        return visible;
    };
    if (structures) {
        // The ordinary native addst capture already records both building
        // fields on every host. Keep their separate origins even if the
        // game's title spans the type column and the later type draw
        // overwrites it. The same paired-field ownership below handles
        // surviving prefixes/tails for books, artifacts and buildings.
        for (const auto &draw : captured_native_drawn_text_view()) {
            if (draw.y <= heading_y || draw.y >= static_cast<int>(context.size()) ||
                    draw.x < 0 || draw.x >= static_cast<int>(context[draw.y].size())) continue;
            auto complete = complete_source(draw.x, draw.y, draw.source);
            const bool type = legends_structure_caption_key(complete).has_value();
            if (!type && !split_generated_name_identity(complete) &&
                    !split_repeated_title_identity(complete)) continue;
            captures.push_back({draw.x, draw.y, type, draw.source, std::move(complete)});
        }
    }
    for (int y = heading_y + 1; y < static_cast<int>(rows.size()); ++y) {
        auto &row = rows[y];
        auto claim = [&](int x, const std::string &source, int rule,
                         const std::string &target) {
            if (x < 0 || x >= static_cast<int>(row.size()) || source.empty() ||
                source.size() > row.size() - static_cast<size_t>(x) ||
                row.compare(x, source.size(), source) != 0) return false;
            Match match{x, y, static_cast<int>(source.size()), rule, target, source};
            match.layout_x = x;
            match.layout_y = y;
            match.layout_length = match.length;
            match.layout_left = true;
            match.layout_prepared = true;
            std::fill_n(row.begin() + x, match.length, ' ');
            if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
            return true;
        };
        auto title_translation = [&](const std::string &source) {
            // Catalog ages have the same complete event titles as their
            // opened chronicle. Never reinterpret Age as a person's age.
            if (ages) return translate_legends_event(source);
            if (structures) return translate_procedural_fragment(source);
            if (split_generated_name_identity(source) || split_repeated_title_identity(source))
                return translate_legends_artifact_identity(source);
            if (artifacts)
                if (auto artifact = translate_world_artifact_name(source)) return artifact;
            return translate_legends_book(source);
        };
        auto type_translation = [&](const std::string &source) -> std::optional<std::string> {
            if (ages) {
                // Resolve the full numeric field using the shared TSV
                // template index/matcher; wording and counts stay out of
                // the page code. This also keeps the two columns separate.
                for (const char *key : {"{d} events", "{d} event"}) {
                    const auto found = history_semantic_templates_.find(key);
                    if (found == history_semantic_templates_.end()) continue;
                    const Rule &rule = rules_[static_cast<size_t>(found->second)];
                    size_t end = 0;
                    std::vector<std::string> values;
                    if (match_template(rule, source, 0, &end, &values) && end == source.size())
                        return fill_template(rule, values, &capture_translations_);
                }
                return std::nullopt;
            }
            if (structures) return translate_legends_structure_type(source);
            // The native item formatter can emit a named artifact in place
            // of its material/type description. Resolve ordinary complete
            // nouns first, then the complete generated identity/name; never
            // let one word from that right-hand field claim a book title.
            if (auto item = translate_item_description_term(source)) return item;
            if (split_generated_name_identity(source) || split_repeated_title_identity(source))
                return translate_legends_artifact_identity(source);
            return translate_legends_name(source, false);
        };
        bool captured_row = false;
        for (const auto &name : captures) {
            // These native draws use plain addst(), not addst_flag(): its
            // native y is exact, with no guessed second-row correspondence.
            if (name.item_type || name.y != y || name.x < 0 ||
                name.x >= static_cast<int>(row.size()) || name.visible.empty()) continue;
            const auto item = std::find_if(captures.begin(), captures.end(),
                [&](const NativeLegendsBookField &field) {
                    return field.item_type && field.y == y && field.x > name.x;
                });
            if (item == captures.end() || item->x >= static_cast<int>(row.size()) ||
                item->visible.empty()) continue;
            const int name_end = std::min(static_cast<int>(row.size()),
                name.x + static_cast<int>(name.visible.size()));
            const int type_end = std::min(static_cast<int>(row.size()),
                item->x + static_cast<int>(item->visible.size()));
            const int prefix_end = std::min(name_end, item->x);
            const std::string prefix = name.visible.substr(0, prefix_end - name.x);
            const std::string type = item->visible.substr(0, type_end - item->x);
            // A native long title can be overwritten by the subsequent type
            // draw, leaving no padded gap. Validate the surviving prefix and
            // type against this frame's composed row, then own each layer's
            // exact surviving bytes independently. Never absorb the type as
            // part of the title or match a different row's clipped prefix.
            if (context[y].compare(name.x, prefix.size(), prefix) != 0 ||
                context[y].compare(item->x, type.size(), type) != 0) continue;
            const std::string title_target = title_translation(name.complete)
                .value_or(cp437_to_utf8(name.complete));
            const std::string type_target = type_translation(item->complete)
                .value_or(cp437_to_utf8(item->complete));
            claim(name.x, prefix, kLegendsListNameRule, title_target);
            claim(item->x, type, kLegendsListTypeRule, type_target);
            // A short type may leave part of the overlong title to its right.
            // Suppress that tail without rendering the title a second time.
            if (name_end > type_end) {
                const std::string suffix = name.visible.substr(type_end - name.x,
                    name_end - type_end);
                if (context[y].compare(type_end, suffix.size(), suffix) == 0)
                    claim(type_end, suffix, kLegendsListNameRule, "");
            }
            captured_row = true;
            break;
        }
        if (captured_row) continue;
        const auto [left, right] = bounds(row);
        // Without a native capture, fall back only to separated screen fields.
        // The largest internal padded gap separates the title and type.
        int gap_left = -1, gap_right = -1;
        for (int x = left; x < right;) {
            if (row[x] != ' ') { ++x; continue; }
            const int start = x;
            while (x < right && row[x] == ' ') ++x;
            if (x - start >= 2 && x - start > gap_right - gap_left) {
                gap_left = start; gap_right = x;
            }
        }
        if (gap_left <= left || gap_right >= right) continue; // search box / frame
        const std::string name = row.substr(left, gap_left - left);
        const std::string type = row.substr(gap_right, right - gap_right);
        if (name == "..." || name.find_first_of("\x10\x11") != std::string::npos ||
            type.find_first_of("\x10\x11") != std::string::npos) continue;
        const std::string full_name = complete_source(left, y, name);
        const std::string full_type = complete_source(gap_right, y, type);
        const auto type_target = type_translation(full_type);
        // A complete typed list row is enough, including a one-result filter.
        // If capture is unavailable, retain unknown/clipped text as ONE field
        // rather than mixing Chinese fragments with English glyphs and dots.
        const bool named_identity = (artifacts || structures) &&
            (split_generated_name_identity(full_name) || split_repeated_title_identity(full_name));
        const bool named_type = !ages && !structures &&
            (split_generated_name_identity(full_type) || split_repeated_title_identity(full_type) ||
             (!full_type.ends_with("...") && generated_title_shape(full_type)));
        if (!type_target && !type.ends_with("...") && !named_identity && !named_type) continue;
        claim(left, name, kLegendsListNameRule,
            title_translation(full_name).value_or(cp437_to_utf8(full_name)));
        claim(gap_right, type, kLegendsListTypeRule,
            type_target.value_or(cp437_to_utf8(full_type)));
    }
    return true;
}

void Overlay::layout_legends_typed_lists(SDL_Renderer *renderer) {
    if (!gps_ || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    std::vector<Match *> names, types;
    int left = gps_->dimx, right = gps_->dimx - 3, native_type_left = right;
    for (Match &match : prepared_matches_) {
        if (match.native_split_duplicate || match.target.empty()) continue;
        if (match.rule == kLegendsListNameRule) {
            names.push_back(&match);
            left = std::min(left, match.x);
        } else if (match.rule == kLegendsListTypeRule) {
            types.push_back(&match);
            native_type_left = std::min(native_type_left, match.x);
        }
    }
    if (names.empty() || types.empty() || native_type_left <= left) return;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int pixels = unified_font_pixels();
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    for (const Match *match : types) {
        // Resolve ownership before assigning the list's own column clip.
        const SDL_Rect region = native_text_draw_region(*match);
        if (region.w <= 0 || region.h <= 0) return;
        right = std::min(right, (region.x + region.w - origin_x) / tile_w);
    }
    if (right <= native_type_left) return;
    // The native type origin separates the list's columns. Keep both
    // allocations even when a translated title is longer than its column.
    auto place_column = [&](const std::vector<Match *> &column, int column_left, int column_right) {
        const int column_x = origin_x + column_left * tile_w;
        const int width = (column_right - column_left) * tile_w;
        for (Match *match : column) {
            match->layout_x = column_left;
            match->layout_length = column_right - column_left;
            match->layout_box_pixel_x = column_x;
            match->layout_box_pixel_width = width;
            match->layout_clip_right = column_right;
            match->layout_native_clip = SDL_Rect{column_x, origin_y + match->y * tile_h,
                width, tile_h};
            match->layout_left = true;
            match->layout_ellipsize = true;
            match->layout_prepared = true;
            match->layout_line_height_pixels = tile_h;
        }
    };
    place_column(names, left, native_type_left);
    place_column(types, native_type_left, right);
}
