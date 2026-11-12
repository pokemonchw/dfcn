// Generated-name editor: typed words and widget-sized text boxes. Included
// after the graphical/ASCII geometry helpers, inside namespace dfcn.

void Overlay::load_name_editor_translations() {
    ++name_editor_search_revision_;
    name_editor_translations_.clear();
    const fs::path path = fs::u8path(config_.mapping_path).parent_path() /
        "name-editor.tsv";
    std::ifstream input(path, std::ios::binary);
    std::string line;
    while (std::getline(input, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line.front() == '#') continue;
        const size_t tab = line.find('\t');
        if (tab == std::string::npos) continue;
        const std::string source = trim(line.substr(0, tab));
        const std::string target = trim(line.substr(tab + 1));
        if (!source.empty() && !target.empty())
            name_editor_translations_[source] = target;
    }
    std::error_code ec;
    name_editor_mtime_ = fs::last_write_time(path, ec);
    if (ec) log_line("WARN", "Cannot load name-editor translations: " + path.string());
}

static bool is_name_editor_slot(std::string_view source) {
    return source == "Front Compound" || source == "Rear Compound" ||
        source == "First Adjective" || source == "Second Adjective" ||
        source == "Hyphen Compound" || source == "The X" || source == "Of X";
}

static bool is_name_editor_heading(std::string_view source) {
    // Personal naming uses "yourself", not the "your <object>" caption.
    // Both caption layout and the preview anchor must recognize this form.
    return source == "Name yourself" || source.starts_with("Name your ") ||
        source.starts_with("Name the ");
}

static std::optional<ProceduralNamePartOfSpeech> name_editor_part_of_speech(
        std::string_view source) {
    if (source == "Singular Noun" || source == "Plural Noun")
        return ProceduralNamePartOfSpeech::noun;
    if (source == "Adjective") return ProceduralNamePartOfSpeech::adjective;
    if (source == "Prefix") return ProceduralNamePartOfSpeech::prefix;
    if (source == "Present (1st)" || source == "Present (2nd)" ||
        source == "Present (3rd)" || source == "Past" ||
        source == "Past (1st)" || source == "Past (2nd)" ||
        source == "Past (3rd)" || source == "Preterite" ||
        source == "Past Participle" || source == "Present Participle")
        return ProceduralNamePartOfSpeech::verb;
    return std::nullopt;
}

bool Overlay::name_editor_visible() const {
    TranslationStateScope translation_scope;
    bool front = false, rear = false, adjective = false;
    for (const Match &match : prepared_matches_) {
        if (match.rule != kNameEditorCaptionRule) continue;
        front |= match.source == "Front Compound";
        rear |= match.source == "Rear Compound";
        adjective |= match.source == "First Adjective";
    }
    return front && rear && adjective;
}

std::optional<std::string> Overlay::translate_name_editor_meaning(
        std::string_view source, std::string_view native_word,
        ProceduralNamePartOfSpeech part, std::string_view word_id) const {
    std::optional<std::string> meaning;
    if (!word_id.empty()) {
        const char *key = part == ProceduralNamePartOfSpeech::noun ? "NOUN" :
            part == ProceduralNamePartOfSpeech::adjective ? "ADJ" :
            part == ProceduralNamePartOfSpeech::prefix ? "PREFIX" : "VERB";
        const auto sense = procedural_word_senses_.find(std::string(word_id) + "\t" + key);
        if (sense != procedural_word_senses_.end()) return sense->second;
    }
    const auto forms = name_editor_word_forms_.find(lower(std::string(source)));
    const auto ids = !native_word.empty() ? native_word_ids_.find(lower_native_name(std::string(native_word)))
        : native_word_ids_.end();
    if (forms != name_editor_word_forms_.end()) {
        for (const ProceduralNameMeaning &candidate : forms->second) {
            if (candidate.part_of_speech != part) continue;
            if (!word_id.empty() && candidate.word_id != word_id) continue;
            // Identical English spellings can have different WORD IDs.
            // The native column disambiguates them without a UI/colour
            // translation ever leaking into a generated-name meaning.
            if (ids != native_word_ids_.end() &&
                std::find(ids->second.begin(), ids->second.end(), candidate.word_id) ==
                    ids->second.end()) continue;
            meaning = candidate.gloss;
            break;
        }
    }
    // A narrow native column can abbreviate the English spelling. Its
    // native word and POS still identify the reviewed raw sense; do not
    // translate the visible prefix as an unrelated English word.
    if (!meaning && ids != native_word_ids_.end()) {
        const char *part_key = part == ProceduralNamePartOfSpeech::noun ? "NOUN" :
            part == ProceduralNamePartOfSpeech::adjective ? "ADJ" :
            part == ProceduralNamePartOfSpeech::prefix ? "PREFIX" : "VERB";
        std::optional<std::string> unique_sense;
        bool ambiguous = false;
        for (const std::string &id : ids->second) {
            const auto sense = procedural_word_senses_.find(id + "\t" + part_key);
            if (sense == procedural_word_senses_.end()) continue;
            if (unique_sense && *unique_sense != sense->second) {
                ambiguous = true;
                break;
            }
            unique_sense = sense->second;
        }
        if (!ambiguous) meaning = unique_sense;
    }
    if (!meaning) meaning = exact_literal_translation(source);
    if (!meaning) {
        if (const auto term = procedural_terms_.find(lower(std::string(source)));
            term != procedural_terms_.end()) meaning = term->second;
    }
    return meaning;
}

bool Overlay::translated_name_editor_search_matches(std::string_view word_id,
        std::string_view source, std::string_view native_word, int32_t native_part,
        std::string_view query) const {
    TranslationStateScope translation_scope;
    if (native_part < 0 || native_part > 8) return false;
    if (translated_search_query(query).literal.empty()) return false;
    const auto contains = [&](std::string_view text) {
        return translated_search_text_matches(text, query);
    };
    if (contains(source) || (!native_word.empty() && contains(native_word))) return true;
    const auto part = native_part <= 1 ? ProceduralNamePartOfSpeech::noun :
        native_part == 2 ? ProceduralNamePartOfSpeech::adjective :
        native_part == 3 ? ProceduralNamePartOfSpeech::prefix : ProceduralNamePartOfSpeech::verb;
    std::string key = std::to_string(name_editor_search_revision_) + '\x1f' + std::string(word_id);
    key.push_back('\0');
    key.append(source).push_back('\0');
    key.append(native_word).push_back(static_cast<char>(native_part));
    if (const auto meaning = memoize_search_translation('N', key, [&] {
            return translate_name_editor_meaning(source, native_word, part, word_id);
        });
        meaning && contains(*meaning)) return true;
    if (!native_word.empty()) {
        const auto phonetic = memoize_search_translation('n', native_word, [&] {
            return translate_procedural_fragment(std::string(native_word), true);
        });
        if (phonetic && contains(*phonetic)) return true;
    }
    return false;
}

bool Overlay::append_name_editor_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, const unsigned char *raw_layer,
        std::vector<SDL_Rect> *owned_regions) const {
    struct Field {
        int x;
        int y;
        std::string source;
    };
    auto fields_in = [](const std::string &row, int y) {
        std::vector<Field> fields;
        size_t cursor = 0;
        while (cursor < row.size()) {
            while (cursor < row.size() &&
                   (row[cursor] == ' ' || is_cp437_box_separator(row, cursor)))
                ++cursor;
            const size_t start = cursor;
            while (cursor < row.size() &&
                   !is_cp437_box_separator(row, cursor) &&
                   !(row[cursor] == ' ' && cursor + 1 < row.size() &&
                     row[cursor + 1] == ' ')) ++cursor;
            size_t end = cursor;
            while (end > start && row[end - 1] == ' ') --end;
            if (end > start)
                fields.push_back({static_cast<int>(start), y,
                    row.substr(start, end - start)});
        }
        return fields;
    };
    struct Signature {
        int first_slot_y = INT32_MAX;
        int last_slot_y = -1;
        int front_x = -1;
        int controls_left = INT32_MAX;
        int controls_right = -1;
        bool rear = false;
        bool adjective = false;
        bool complete() const { return front_x >= 0 && rear && adjective; }
    };
    auto signature_in = [&](const std::vector<std::string> &source_rows) {
        Signature signature;
        for (size_t y = 0; y < source_rows.size(); ++y) {
            const auto fields = fields_in(source_rows[y], static_cast<int>(y));
            for (size_t i = 0; i < fields.size(); ++i) {
                const Field &field = fields[i];
                if (field.source == "Front Compound") {
                    signature.front_x = field.x;
                    signature.first_slot_y = std::min(signature.first_slot_y, field.y);
                }
                signature.rear |= field.source == "Rear Compound";
                signature.adjective |= field.source == "First Adjective";
                if (!is_name_editor_slot(field.source)) continue;
                signature.first_slot_y = std::min(signature.first_slot_y, field.y);
                signature.last_slot_y = std::max(signature.last_slot_y, field.y);
                signature.controls_left = std::min(signature.controls_left, field.x);
                int right = field.x + static_cast<int>(field.source.size());
                // The slot and its adjacent Random/Clear buttons are a
                // separate control group, never candidate-word columns.
                for (size_t next = i + 1; next < fields.size() && next <= i + 2; ++next) {
                    if (fields[next].source != "Random" && fields[next].source != "Clear") break;
                    right = fields[next].x + static_cast<int>(fields[next].source.size());
                }
                signature.controls_right = std::max(signature.controls_right, right);
            }
        }
        return signature;
    };
    std::vector<std::string> composite;
    if (raw_layer) {
        // Slots, words and previews can span raw layers. Read the current
        // logical widget before glyph copies start; visible_char_at() would
        // apply the preceding frame's graphical occlusion to this new mask.
        // push() projects each complete field onto the queried raw layer.
        composite.assign(rows.size(), std::string(gps_->dimx, ' '));
        for (int y = 0; y < gps_->dimy; ++y) {
            for (int x = 0; x < gps_->dimx; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                composite[static_cast<size_t>(y)][static_cast<size_t>(x)] =
                    cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
            }
        }
    }
    const auto &context = raw_layer ? composite : rows;
    const Signature signature = signature_in(context);
    if (!signature.complete()) return false;
    // Multiple slot rows establish the editor's outer frame, rather than
    // the small frame around any individual slot or Random/Clear button.
    const NativePanelBorders borders(*gps_);
    const auto interior = native_panel_interior(borders, *gps_, SDL_Rect{
        signature.controls_left, signature.first_slot_y,
        signature.controls_right - signature.controls_left,
        signature.last_slot_y - signature.first_slot_y + 1});
    const auto editor_field = [&](const Field &field) {
        return !interior || (field.x >= interior->x &&
            field.x + static_cast<int>(field.source.size()) <= interior->x + interior->w &&
            field.y >= interior->y - (is_name_editor_heading(field.source) ? 1 : 0) &&
            field.y < interior->y + interior->h);
    };

    auto caption_translation = [&](const std::string &source) -> std::optional<std::string> {
        if (const auto found = name_editor_translations_.find(source);
            found != name_editor_translations_.end()) return found->second;
        return exact_literal_translation(source);
    };
    const size_t first_match = matches.size();
    auto push = [&](const Field &field, int rule, const std::string &target,
                    int left, int right, bool align_left) {
        if (only_y >= 0 && field.y != only_y) return;
        const int length = static_cast<int>(field.source.size());
        const auto matches_raw = [&](int offset) {
            const size_t tile = static_cast<size_t>(field.x + offset) * gps_->dimy + field.y;
            const unsigned char ch = raw_layer[tile * 8];
            return (ch ? ch : ' ') == static_cast<unsigned char>(field.source[offset]);
        };
        int raw_prefix = 0;
        if (raw_layer) {
            // Earlier page readers may have consumed rows as scratch space.
            // Only the original layer can prove which source glyphs it owns.
            while (raw_prefix < length && matches_raw(raw_prefix)) ++raw_prefix;
        }
        if (raw_layer && raw_prefix != length) {
            // A preview and its quotes need not all belong to one layer.
            // Keep matching source runs for suppression; only the complete
            // composite field draws the translated name.
            for (int offset = 0; offset < length;) {
                while (offset < length && !matches_raw(offset)) ++offset;
                const int start = offset;
                while (offset < length && matches_raw(offset)) ++offset;
                if (offset == start) continue;
                matches.push_back({field.x + start, field.y, offset - start,
                    rule, {}, field.source.substr(start, offset - start)});
            }
            return;
        }
        Match match{field.x, field.y, static_cast<int>(field.source.size()),
            rule, target, field.source};
        match.layout_x = std::clamp(left, 0, gps_->dimx - 1);
        match.layout_length = std::max(1, std::min(right, gps_->dimx) - match.layout_x);
        match.layout_left = align_left;
        matches.push_back(std::move(match));
    };
    struct WordRow {
        Field meaning;
        std::optional<Field> native;
        Field grammar;
        ProceduralNamePartOfSpeech part;
    };
    std::vector<WordRow> words;
    std::vector<Field> captions;
    std::vector<Field> previews;
    std::array<int, 3> columns{gps_->dimx, gps_->dimx, gps_->dimx};
    int heading_y = -1;
    bool settlement_preview = false;
    bool government_preview = false;
    for (size_t y = 0; y < context.size(); ++y) {
        const auto fields = fields_in(context[y], static_cast<int>(y));
        size_t table_begin = fields.size();
        // English-only names have a meaning and POS column; native-language
        // names add a native-word column between them. The left-hand slot
        // controls cannot stand in for that optional column. A single
        // filtered row is sufficient, without depending on its vocabulary.
        for (size_t i = 1; i < fields.size(); ++i) {
            const auto part = name_editor_part_of_speech(fields[i].source);
            if (!part || !editor_field(fields[i]) || !editor_field(fields[i - 1]) ||
                fields[i - 1].x <= signature.controls_right ||
                static_cast<int>(y) < signature.first_slot_y) continue;
            const bool has_native = i >= 2 && editor_field(fields[i - 2]) &&
                fields[i - 2].x > signature.controls_right;
            table_begin = i - (has_native ? 2 : 1);
            words.push_back({fields[table_begin], has_native
                ? std::optional<Field>{fields[i - 1]} : std::nullopt, fields[i], *part});
            columns[0] = std::min(columns[0], fields[table_begin].x);
            if (has_native) columns[1] = std::min(columns[1], fields[i - 1].x);
            columns[2] = std::min(columns[2], fields[i].x);
            break;
        }
        for (size_t i = 0; i < table_begin; ++i) {
            const Field &field = fields[i];
            if (!editor_field(field)) continue;
            const bool heading = is_name_editor_heading(field.source);
            const bool caption = is_name_editor_slot(field.source) ||
                field.source == "Random" || field.source == "Clear" ||
                field.source == "Done" || heading;
            if (caption) {
                captions.push_back(field);
                if (heading && field.y >= heading_y) {
                    heading_y = field.y;
                    settlement_preview = field.source == "Name your settlement";
                    government_preview = field.source == "Name your group";
                }
            } else if (field.y < signature.first_slot_y &&
                       field.x > signature.front_x &&
                       (contains_cjk_utf8(field.source) ||
                        std::any_of(field.source.begin(), field.source.end(),
                            [](unsigned char ch) {
                                return std::isalpha(ch) || is_cp437_latin_letter_byte(ch);
                            }))) {
                previews.push_back(field);
            }
        }
    }

    // Fit meanings to their actual column, including the space left when
    // there is no native-word column, rather than their English byte count.
    const int meaning_right = std::min(columns[1], columns[2]) - 1;
    const int list_right = gps_->dimx - 3;
    for (const WordRow &word : words) {
        const auto meaning = translate_name_editor_meaning(word.meaning.source,
            word.native ? std::string_view(word.native->source) : std::string_view{}, word.part);
        // Native words are always phonetic, including lower-case `alak`,
        // `anam`, etc. They must never use the homonymous English meaning.
        const auto native = word.native ? translate_procedural_fragment(word.native->source, true)
            : std::nullopt;
        const auto grammar = caption_translation(word.grammar.source);
        if (meaning) push(word.meaning, kNameEditorMeaningRule, *meaning,
            columns[0], meaning_right, true);
        if (native) push(*word.native, kNameEditorNativeWordRule, *native,
            columns[1], columns[2] - 1, true);
        if (grammar) push(word.grammar, kNameEditorGrammarRule, *grammar,
            columns[2], list_right, true);
    }
    for (const Field &caption : captions) {
        auto target = caption_translation(caption.source);
        constexpr std::string_view item_heading = "Name the ";
        if (!target && caption.source.starts_with(item_heading)) {
            // The item naming title shares the action's reviewed template
            // and complete material/item grammar for every item type.
            const std::string item = caption.source.substr(item_heading.size());
            const auto translated = translate_inventory_item_name(item, caption.y,
                caption.x + static_cast<int>(item_heading.size()));
            if (translated) {
                for (const Rule &rule : adventure_item_action_rules_) {
                    if (rule.source != "Name the {s}") continue;
                    const std::vector<std::string> captures{item};
                    const std::vector<std::optional<std::string>> resolved{translated};
                    target = fill_template(rule, captures, &capture_translations_, nullptr, &resolved);
                    break;
                }
            }
        }
        if (!target) continue;
        // The heading occupies an opening in the native horizontal edge.
        // Its original span owns that opening and its centre, not the whole
        // screen truncated by the first remaining border tile on the right.
        push(caption, kNameEditorCaptionRule, *target,
            caption.x, caption.x + static_cast<int>(caption.source.size()),
            false);
    }
    const auto place_name = settlement_preview || government_preview
        ? capture_native_place_editor_name(government_preview ? 1 : 0) : std::nullopt;
    NativeHistoryName unresolved_government;
    unresolved_government.entity_type = 1;
    const std::string place_suffix = government_preview
        ? site_government_name_suffix(place_name ? *place_name : unresolved_government) : "堡";
    for (const Field &preview : previews) {
        // Preview lines immediately follow the heading. A search box, even
        // if moved above the first slot by a theme, is not a generated name.
        if (heading_y < 0 || preview.y <= heading_y || preview.y > heading_y + 3)
            continue;
        const bool quoted = preview.source.size() >= 2 &&
            preview.source.front() == '"' && preview.source.back() == '"';
        std::optional<std::string> target;
        if (settlement_preview || government_preview) {
            // Both embark names use the settlement WORD-slot grammar before
            // their objects exist. The group takes its suffix from the chosen
            // parent civilization; the native spelling stays phonetic.
            if (quoted) {
                target = translate_english_site_name(preview.source,
                    place_name ? &*place_name : nullptr, place_suffix);
                if (target) *target = "“" + *target + "”";
            } else {
                target = transliterate_site_spelling(preview.source);
            }
        } else {
            target = quoted ? translate_procedural_fragment(preview.source) :
                translate_procedural_fragment(preview.source, true);
        }
        if (target) {
            // Expand equally into genuinely blank cells on both sides.
            // The Random/Done buttons can share this row with a preview;
            // they limit its width without moving the native name's centre.
            int left = preview.x, right = preview.x + static_cast<int>(preview.source.size());
            while (left > 0 && right < static_cast<int>(context[preview.y].size()) &&
                   context[preview.y][left - 1] == ' ' && context[preview.y][right] == ' ') {
                --left;
                ++right;
            }
            push(preview, kNameEditorPreviewRule, *target, left, right, false);
        }
    }
    // Consume owned source bytes only after preview widths have used the
    // intact neighbouring controls. The caller's literal UTF-8 pass must not
    // draw Chinese already included in a complete editor field a second time.
    for (size_t index = first_match; index < matches.size(); ++index) {
        const Match &match = matches[index];
        std::fill_n(rows[match.y].begin() + match.x, match.length, ' ');
    }
    auto reserve = [&](const SDL_Rect &region) {
        if (owned_regions) owned_regions->push_back(region);
        for (int y = region.y; y < region.y + region.h; ++y) {
            auto &row = rows[y];
            if (only_y < 0 || only_y == y) {
                const size_t first = matches.size();
                append_direct_utf8_matches(row.substr(region.x, region.w), y, matches);
                for (size_t index = first; index < matches.size(); ++index)
                    matches[index].x += region.x;
            }
            std::fill_n(row.begin() + region.x, region.w, ' ');
        }
    };
    auto reserve_field = [&](const Field &field) {
        if (interior && field.x >= interior->x && field.y >= interior->y &&
            field.x + static_cast<int>(field.source.size()) <= interior->x + interior->w &&
            field.y < interior->y + interior->h) return;
        reserve({field.x, field.y, static_cast<int>(field.source.size()), 1});
    };
    // Untranslated WORD/POS cells still belong to the naming table. Reserve
    // only its own frame/fields so the HUD and adjacent squad panel continue
    // through the ordinary literal and complete-paragraph translation paths.
    if (interior) reserve(*interior);
    for (const WordRow &word : words) {
        reserve_field(word.meaning);
        if (word.native) reserve_field(*word.native);
        reserve_field(word.grammar);
    }
    for (const Field &caption : captions) reserve_field(caption);
    for (const Field &preview : previews)
        if (heading_y >= 0 && preview.y > heading_y && preview.y <= heading_y + 3)
            reserve_field(preview);
    // The search field is not translated as a word/name. The caller renders
    // its committed UTF-8 through the shared literal-input path, keeping the
    // native cursor, byte positions and field contents intact.
    return true;
}

void Overlay::append_native_place_name_previews(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, const unsigned char *raw_layer,
        std::vector<SDL_Rect> &owned_regions) const {
    // name_creator_interfacest::render does not draw an enclosing frame in
    // settlement/group contexts. Its addst producers establish these fields
    // independently of a nearby panel or the word-table reader's scratch rows.
    // Use the existing caption capture; no extra native hook is needed.
    const uintptr_t base = native_history_profile_base();
    if (!base) return;
    const uintptr_t settlement_heading_caller = native_ui_semantic_address(0x1fc995);
    const uintptr_t government_heading_caller = native_ui_semantic_address(0x1fc9d8);
    const uintptr_t native_caller = native_ui_semantic_address(0x1fcd29);
    const uintptr_t english_caller = native_ui_semantic_address(0x1fcde4);
    if (!settlement_heading_caller || !government_heading_caller ||
            !native_caller || !english_caller) return;
    const auto draws = captured_native_drawn_text_view();
    const auto current = [&](const NativeDrawnTextRow &draw) {
        if (draw.draw_grid != gps_->screen || draw.top_layer ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy ||
                draw.source.empty() || draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x))
            return false;
        if (draw.draw_clip && (draw.x < draw.draw_clip->x || draw.y < draw.draw_clip->y ||
                draw.x + static_cast<int>(draw.source.size()) > draw.draw_clip->x + draw.draw_clip->w ||
                draw.y >= draw.draw_clip->y + draw.draw_clip->h)) return false;
        for (size_t i = 0; i < draw.source.size(); ++i) {
            const int x = draw.x + static_cast<int>(i);
            const size_t tile = static_cast<size_t>(x) * gps_->dimy + draw.y;
            const auto expected = static_cast<unsigned char>(draw.source[i]);
            if (draw.draw_grid[tile * 8] != expected) return false;
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            const unsigned char ch = raw_layer ? (cell ? cell[0] : 0)
                : visible_char_at(x, draw.y);
            const auto visible = ch ? ch : ' ';
            if (visible != expected || (top && expected != ' ')) return false;
        }
        return true;
    };
    for (const auto &heading : draws) {
        const bool government = heading.source == "Name your group";
        if (heading.native_caller != (government
                ? government_heading_caller : settlement_heading_caller) ||
                (!government && heading.source != "Name your settlement") ||
                !current(heading)) continue;
        const auto place_name = capture_native_place_editor_name(government ? 1 : 0);
        NativeHistoryName unresolved_government;
        unresolved_government.entity_type = 1;
        const std::string suffix = government
            ? site_government_name_suffix(place_name ? *place_name : unresolved_government) : "堡";
        for (const auto &draw : draws) {
            const bool english = draw.native_caller == english_caller;
            if ((!english && draw.native_caller != native_caller) ||
                    draw.draw_epoch != heading.draw_epoch || draw.sequence <= heading.sequence ||
                    draw.y != heading.y + (english ? 3 : 2) || !current(draw)) continue;
            if (raw_layer && raw_layer != draw.draw_grid) continue;
            if (english && (draw.source.size() < 2 ||
                    draw.source.front() != '"' || draw.source.back() != '"')) continue;
            auto target = english ? translate_english_site_name(draw.source,
                place_name ? &*place_name : nullptr, suffix) :
                std::optional<std::string>(transliterate_site_spelling(draw.source));
            if (!target || target->empty()) continue;
            if (english) *target = "“" + *target + "”";
            const int length = static_cast<int>(draw.source.size());
            owned_regions.push_back({draw.x, draw.y, length, 1});
            std::fill_n(rows[draw.y].begin() + draw.x, length, ' ');
            std::erase_if(matches, [&](const Match &match) {
                return match.y == draw.y && match.x < draw.x + length &&
                    draw.x < match.x + match.length;
            });
            if (only_y >= 0 && only_y != draw.y) continue;
            Match match{draw.x, draw.y, length, kNameEditorPreviewRule, *target, draw.source};
            int left = draw.x, right = draw.x + length;
            const int clip_left = draw.draw_clip ? draw.draw_clip->x : 0;
            const int clip_right = draw.draw_clip
                ? draw.draw_clip->x + draw.draw_clip->w : gps_->dimx;
            const auto blank = [&](int x) {
                bool top = false;
                const auto *cell = cell_at(x, draw.y, &top);
                return cell && (!cell[0] || cell[0] == ' ');
            };
            while (left > clip_left && right < clip_right && blank(left - 1) && blank(right)) {
                --left;
                ++right;
            }
            match.layout_x = left;
            match.layout_length = right - left;
            match.layout_foreground_rgb = draw.foreground_rgb;
            matches.push_back(std::move(match));
        }
    }
}

bool Overlay::layout_name_editor(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return false;
    auto is_editor = [](const Match &match) {
        return match.rule <= kNameEditorCaptionRule && match.rule >= kNameEditorPreviewRule;
    };
    if (std::none_of(prepared_matches_.begin(), prepared_matches_.end(), is_editor))
        return false;
    const int tile_w = gps_->tile_pixel_x;
    const int tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - tile_w * gps_->dimx) / 2;
    const int origin_y = (gps_->screen_pixel_y - tile_h * gps_->dimy) / 2;
    auto read_char = [this](int x, int y) { return visible_char_at(x, y); };

    // Candidate meanings can overwrite the native left cap in classic
    // mode. Recover the complete row from its live skin before insetting
    // any text; the two/three column anchors still come from native fields.
    const auto settings = native_ui_settings();
    for (Match &meaning : prepared_matches_) {
        if (meaning.rule != kNameEditorMeaningRule || meaning.target.empty() ||
            meaning.native_split_duplicate) continue;
        const auto grammar = std::find_if(prepared_matches_.begin(), prepared_matches_.end(),
            [&](const Match &part) {
                return part.rule == kNameEditorGrammarRule && part.y == meaning.y &&
                    part.x > meaning.x && !part.native_split_duplicate;
            });
        if (grammar == prepared_matches_.end()) continue;
        std::array<int32_t, 9> skin{};
        const auto box = native_button_text_rect(*gps_, meaning.x,
            grammar->x + grammar->length, meaning.y, false, &skin, false, true);
        if (!box) continue;
        for (Match &part : prepared_matches_) {
            if (part.y != meaning.y || part.native_split_duplicate ||
                (part.rule != kNameEditorMeaningRule && part.rule != kNameEditorNativeWordRule &&
                 part.rule != kNameEditorGrammarRule)) continue;
            const int right = std::min(part.layout_x + part.layout_length, box->x + box->w);
            part.layout_x = std::max(part.layout_x, box->x);
            part.layout_length = std::max(1, right - part.layout_x);
            part.layout_clip_right = right;
        }
        if (settings && settings->classic && box->x - 1 == meaning.x) {
            NativeBorderRepair repair;
            repair.cells = {box->x - 1, box->y + 1, 1, 1};
            repair.cell[0] = static_cast<unsigned char>(skin[3] & 0xff);
            const int foreground = ((skin[3] >> 8) & 7) + ((skin[3] & 0x4000) ? 8 : 0);
            const int background = (skin[3] >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
            native_border_repairs_.push_back(repair);
        }
    }

    // First recover actual button interiors. Adjacent Random/Clear controls
    // can share one lower-layer run, so a candidate containing another
    // caption is not a valid button box.
    auto button_box = [&](const Match &match) -> std::optional<SDL_Rect> {
        const auto frame = find_ascii_panel_frame(match.x, match.x + match.length,
            match.y, gps_->dimx, gps_->dimy, read_char);
        if (frame && frame->bottom - frame->top <= 6)
            return SDL_Rect{origin_x + (frame->left + 1) * tile_w,
                origin_y + match.y * tile_h,
                (frame->right - frame->left - 1) * tile_w, tile_h};
        auto exclusive = [&](const SDL_Rect &box) {
            return std::none_of(prepared_matches_.begin(), prepared_matches_.end(),
                [&](const Match &other) {
                    if (&other == &match || other.target.empty() ||
                        other.native_split_duplicate || other.y != match.y) return false;
                    const int center = origin_x + (other.x * 2 + other.length) * tile_w / 2;
                    return center >= box.x && center < box.x + box.w;
                });
        };
        bool top = false;
        (void)cell_at(match.x, match.y, &top);
        const long *lower_layer = top ? gps_->screentexpos_top_lower : gps_->screentexpos_lower;
        if (lower_layer) {
            std::vector<uint8_t> occupied(static_cast<size_t>(gps_->dimx), 0);
            for (int x = 0; x < gps_->dimx; ++x)
                occupied[static_cast<size_t>(x)] =
                    lower_layer[static_cast<size_t>(x) * gps_->dimy + match.y] != 0;
            const auto [left, width] = occupied_run_span(occupied, match.x + match.length / 2);
            const SDL_Rect box{origin_x + left * tile_w,
                origin_y + match.y * tile_h, width * tile_w, tile_h};
            if (left <= match.x && left + width >= match.x + match.length &&
                width >= match.length + 2 && exclusive(box)) return box;
        }
        if (graphical_rect_epoch_ == composite_read_epoch_) {
            const auto box = graphical_button_rect(graphical_rects_,
                origin_x + (match.x * 2 + match.length) * tile_w / 2,
                origin_y + match.y * tile_h + tile_h / 2,
                (match.length + 2) * tile_w, tile_h, gps_->screen_pixel_x);
            if (box && exclusive(*box)) return box;
        }
        return std::nullopt;
    };
    std::optional<std::pair<int, int>> slot_box;
    int slot_center_twice = -1;
    int slot_source_width = 0;
    int random_left = gps_->dimx;
    for (Match &match : prepared_matches_) {
        if (!is_editor(match) || match.target.empty() || match.native_split_duplicate) continue;
        if (is_name_editor_slot(match.source)) {
            if (match.source == "Front Compound") slot_center_twice = match.x * 2 + match.length;
            slot_source_width = std::max(slot_source_width, match.length);
            if (const auto box = button_box(match))
                slot_box = std::pair<int, int>{box->x, box->w};
        }
        if (match.source == "Random" && std::any_of(prepared_matches_.begin(),
                prepared_matches_.end(), [&](const Match &other) {
                    return other.y == match.y && is_name_editor_slot(other.source);
                })) random_left = std::min(random_left, match.x);
    }
    if (!slot_box && slot_center_twice >= 0) {
        // A common caption box still works when the theme draws buttons as
        // separate border tiles. Center it on Front Compound, not The X's
        // tiny source span, and stop before the Random control.
        const int half = std::max(slot_source_width / 2 + 1,
            std::min(slot_center_twice / 2 - 2, random_left - slot_center_twice / 2 - 2));
        const int left = std::max(2, slot_center_twice / 2 - half);
        const int right = std::min(random_left - 1, slot_center_twice / 2 + half);
        if (right > left) slot_box = std::pair<int, int>{
            origin_x + left * tile_w, (right - left) * tile_w};
    }
    for (Match &match : prepared_matches_) {
        if (!is_editor(match) || match.target.empty() || match.native_split_duplicate) continue;
        if (is_name_editor_slot(match.source) && slot_box) {
            match.layout_box_pixel_x = slot_box->first;
            match.layout_box_pixel_width = slot_box->second;
        } else if (match.rule == kNameEditorCaptionRule &&
                   (match.source == "Random" || match.source == "Clear" || match.source == "Done")) {
            if (const auto box = button_box(match)) {
                match.layout_box_pixel_x = box->x;
                match.layout_box_pixel_width = box->w;
            } else {
                // Two Chinese characters fit at normal size in these short
                // action buttons; include their native caption padding.
                match.layout_x = std::max(0, match.x - 1);
                match.layout_length = std::min(gps_->dimx - match.layout_x, match.length + 2);
            }
        }
    }

    // Use the shared fixed UI size for the entire editor. A long candidate
    // or generated preview must not shrink every button and every other row
    // when it enters the viewport. Fit within the real column/button using
    // the common Unicode ellipsis path, keeping native half-text baselines.
    for (Match &match : prepared_matches_) {
        if (!is_editor(match) || match.target.empty() || match.native_split_duplicate) continue;
        const bool align_left = match.layout_left;
        const int box_x = match.layout_box_pixel_x;
        const int box_width = match.layout_box_pixel_width;
        const int clip_right = match.layout_clip_right;
        int left = match.layout_x;
        int right = left + match.layout_length;
        if (box_x >= 0 && box_width > 0) {
            // Measure inside the pixel box; rounding inward keeps border
            // tiles outside the text budget. Restore its exact centre below.
            left = std::max(0, (box_x - origin_x + tile_w - 1) / tile_w);
            right = std::min(gps_->dimx, (box_x + box_width - origin_x) / tile_w);
        }
        if (right <= left) continue;
        layout_fortress_text_rows(renderer, {{&match}}, left, right);
        match.layout_left = align_left;
        match.layout_box_pixel_x = box_x;
        match.layout_box_pixel_width = box_width;
        if (box_x >= 0 && box_width > 0)
            match.layout_clip_right = clip_right;
    }
    return true;
}
