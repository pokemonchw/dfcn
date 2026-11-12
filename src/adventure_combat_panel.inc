// The native combat renderer builds fields from unit, anatomy, equipment,
// skill and status formatters. Translate those complete fields in this scope;
// a generic word's grammatical sense must not choose a combat rating.
void Overlay::load_adventure_target_translations() {
    adventure_target_literals_.clear();
    adventure_target_templates_.clear();
    const fs::path path = fs::u8path(config_.mapping_path).parent_path() /
        "adventure-target-translations.tsv";
    std::ifstream input(path, std::ios::binary);
    std::string line;
    size_t line_number = 0;
    while (std::getline(input, line)) {
        ++line_number;
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line.front() == '#') continue;
        const size_t tab = line.find('\t');
        if (tab == std::string::npos) continue;
        Rule entry;
        entry.source = normalize_utterance(line.substr(0, tab));
        entry.target = trim(line.substr(tab + 1));
        entry.line = line_number;
        if (entry.source.empty() || entry.target.empty()) continue;
        split_template(entry.source, &entry.template_literals, &entry.template_kinds, true, true);
        if (entry.template_kinds.empty()) {
            adventure_target_literals_[entry.source] = std::move(entry.target);
            continue;
        }
        entry.numeric_template = std::find(entry.template_kinds.begin(),
            entry.template_kinds.end(), 'd') != entry.template_kinds.end();
        entry.string_template = std::any_of(entry.template_kinds.begin(),
            entry.template_kinds.end(), [](char kind) { return kind != 'd'; });
        if (!compile_template_target(entry)) {
            log_line("WARN", "Invalid adventure combat template at " +
                path.string() + ":" + std::to_string(line_number));
            continue;
        }
        adventure_target_templates_.push_back(std::move(entry));
    }
    std::stable_sort(adventure_target_templates_.begin(), adventure_target_templates_.end(),
        [](const Rule &a, const Rule &b) {
            const auto weight = [](const Rule &entry) {
                size_t length = 0;
                for (const auto &literal : entry.template_literals) length += literal.size();
                return length;
            };
            return weight(a) > weight(b);
        });
    std::error_code ec;
    adventure_target_mtime_ = fs::last_write_time(path, ec);
    if (ec) log_line("WARN", "Cannot load adventure combat translations: " + path.string());
}

std::optional<std::string> Overlay::translate_adventure_target_text(
        std::string_view raw_source, char initial_kind) const {
    using Result = std::optional<std::string>;
    std::unordered_map<std::string, Result> memo;
    std::unordered_set<std::string> active;
    std::function<Result(std::string_view, char)> resolve;
    resolve = [&](std::string_view original, char kind) -> Result {
        const std::string source = normalize_utterance(original);
        if (source.empty()) return std::nullopt;
        const std::string key = std::string(1, kind) + '\x1f' + source;
        if (const auto found = memo.find(key); found != memo.end()) return found->second;
        if (!active.insert(key).second) return std::nullopt;
        const auto finish = [&](Result target) -> Result {
            active.erase(key);
            if (target && target->empty()) target.reset();
            memo.emplace(key, target);
            return target;
        };
        if (kind == 'd') {
            size_t at = source.front() == '-' || source.front() == '+' ? 1 : 0;
            if (at == source.size() || !std::all_of(source.begin() + at, source.end(),
                    [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                return finish(std::nullopt);
            return finish(source);
        }
        // A formatter-owned unit/item/anatomy capture is resolved by that
        // type before a same-spelled status or ordinary dictionary word.
        if (kind == 'n') {
            if (const auto identity = native_unit_identity_source_target(trim_view(original)))
                return finish(identity);
            // Target records draw the conflict label and its punctuation
            // before the unit formatter advances the same native cursor.
            // Own them as one caption so the colon cannot leave the name
            // centered independently in its original English span.
            if (const auto prefix = adventure_conflict_prefix(source)) {
                const auto conflict = prefix->label.empty() ? Result(std::string{})
                    : exact_literal_translation("Adventure ranged prefix: " + std::string(prefix->label));
                const auto identity = prefix->identity_offset == source.size() ? Result(std::string{})
                    : resolve(std::string_view(source).substr(prefix->identity_offset), 'n');
                const auto colon = adventure_target_literals_.find(":");
                return finish(conflict && identity && colon != adventure_target_literals_.end()
                    ? Result(*conflict + colon->second + *identity) : std::nullopt);
            }
            if (source == "you" || source == "You") {
                const auto found = adventure_target_literals_.find(source);
                if (found != adventure_target_literals_.end()) return finish(found->second);
            }
            auto identity = translate_ui_message_capture(trim_view(original), true);
            // The status helper and summary renderer supply a complete unit
            // field, including a bare player-authored name. Keep that name
            // valid when no procedural-name dictionary entry exists.
            if (!identity) identity = translate_unit_identity(trim_view(original), true);
            return finish(std::move(identity));
        }
        if (kind == 'i') {
            if (source.ends_with(" (copy)")) {
                const auto item = resolve(std::string_view(source).substr(0, source.size() - 7), 'i');
                const auto suffix = adventure_target_literals_.find("(copy)");
                if (item && suffix != adventure_target_literals_.end())
                    return finish(*item + suffix->second);
                return finish(std::nullopt);
            }
            if (const auto item = translate_item_caption_grammar(trim_view(original)))
                return finish(item);
            return finish(translate_legends_item(trim_view(original)));
        }
        if (kind == 't') {
            // The native helper emits these when the part ID is invalid or
            // the RAW name vector is empty; they are anatomy, not status.
            if (source == "body part" || source == "body parts") {
                const auto found = adventure_target_literals_.find(source);
                if (found != adventure_target_literals_.end()) return finish(found->second);
            }
            if (const auto anatomy = translate_legends_anatomy(source)) return finish(anatomy);
        } else {
            if (const auto found = adventure_target_literals_.find(source);
                    found != adventure_target_literals_.end()) return finish(found->second);
            if (const auto rating = translate_skill_rating(source)) return finish(rating);
            // Complete anatomy and item nouns outrank status templates that
            // join an item and an ordinary word. Otherwise a weapon noun
            // such as short sword can be split into an appearance adjective
            // and a standalone sword before the item grammar sees it.
            if (const auto anatomy = translate_legends_anatomy(source)) return finish(anatomy);
            if (const auto item = translate_item_caption_grammar(trim_view(original)))
                return finish(item);
        }
        for (const Rule &entry : adventure_target_templates_) {
            // A typed body-part capture may add an ordinal to another body
            // part, but cannot become an item/status union after anatomy
            // fails. Keep Grab's body-part and item alternatives distinct.
            if (kind == 't') {
                const auto &prefix = entry.template_literals.front();
                const bool word_ordinal = entry.template_kinds.size() == 1 &&
                    entry.template_kinds.front() == 't' && !prefix.empty() &&
                    prefix.find(' ') == prefix.size() - 1;
                const bool numeric_ordinal = entry.template_kinds.size() == 2 &&
                    entry.template_kinds[0] == 'd' && entry.template_kinds[1] == 't' &&
                    prefix.empty() && (entry.template_literals[1] == "st " ||
                        entry.template_literals[1] == "nd " ||
                        entry.template_literals[1] == "rd " ||
                        entry.template_literals[1] == "th ");
                if (!entry.template_literals.back().empty() ||
                        (!word_ordinal && !numeric_ordinal)) continue;
            }
            if (!source.starts_with(entry.template_literals.front()) ||
                    !source.ends_with(entry.template_literals.back())) continue;
            std::vector<std::string> captures;
            const auto capture = [&](auto &&self, size_t index, size_t at) -> bool {
                if (index == entry.template_kinds.size()) return at == source.size();
                const auto &suffix = entry.template_literals[index + 1];
                size_t end = suffix.empty() ? source.size() : source.find(suffix, at + 1);
                while (end != std::string::npos && end > at) {
                    // Backtrack at actual native literal boundaries. A body
                    // or item name may itself contain " with " or commas.
                    const auto value = resolve(std::string_view(source).substr(at, end - at),
                        entry.template_kinds[index]);
                    if (value) {
                        captures.push_back(*value);
                        if (self(self, index + 1, end + suffix.size())) return true;
                        captures.pop_back();
                    }
                    if (suffix.empty()) break;
                    end = source.find(suffix, end + 1);
                }
                return false;
            };
            if (!capture(capture, 0, entry.template_literals.front().size())) continue;
            std::string target = entry.target_template_literals.front();
            for (size_t index = 0; index < entry.target_capture_order.size(); ++index) {
                target += captures[entry.target_capture_order[index]];
                target += entry.target_template_literals[index + 1];
            }
            return finish(std::move(target));
        }
        if (kind == 't') return finish(std::nullopt);
        // Separators and damage/accuracy marks are original renderer fields.
        // Each adjoining term must resolve completely before composing them.
        for (const std::string_view separator : {", ", " / ", "/"}) {
            const size_t at = source.find(separator);
            if (at == std::string::npos || at == 0 || at + separator.size() == source.size()) continue;
            const auto left = resolve(std::string_view(source).substr(0, at), 's');
            const auto right = resolve(std::string_view(source).substr(at + separator.size()), 's');
            if (!left || !right) continue;
            const auto translated_separator = adventure_target_literals_.find(std::string(trim_view(separator)));
            return finish(*left + (translated_separator == adventure_target_literals_.end()
                ? std::string(separator) : translated_separator->second) + *right);
        }
        const size_t marks = source.find_last_not_of("+-!");
        if (marks != std::string::npos && marks + 1 < source.size()) {
            if (const auto target = resolve(std::string_view(source).substr(0, marks + 1), 's'))
                return finish(*target + source.substr(marks + 1));
        }
        // Item captions outside the TOML grammar retain the shared complete
        // item fallback after typed nouns and native action templates.
        if (const auto item = resolve(source, 'i')) return finish(item);
        if (const auto term = translate_ui_message_capture(source, false)) return finish(term);
        return finish(std::nullopt);
    };
    return resolve(raw_source, initial_kind);
}

void Overlay::append_adventure_combat_fields(std::vector<std::string> &screen_rows,
        std::vector<Match> &matches, int only_y, const unsigned char *raw) const {
    if (!gps_ || !native_gameplay_map_screen() || adventure_target_literals_.empty()) return;
    const bool classic = native_ui_classic().value_or(false);
    const auto draws = captured_native_drawn_text_view();
    const auto top_draws = captured_native_drawn_text_view(true);
    struct CursorField {
        SDL_Rect box;
        int source_right;
        std::string source;
        std::vector<int> colors;
    };
    std::vector<CursorField> cursor_fields;
    if (const auto base = native_history_profile_base()) {
        struct Writer {
            uintptr_t prefix, suffix;
            std::string_view before, after;
        };
        const Writer writers[]{
            {native_ui_semantic_address(0x8812b0), native_ui_semantic_address(0x881323),
                "Click a target or move the cursor and press ", "."},
            {native_ui_semantic_address(0x8813ea), 0,
                "Delay warning: Ammo will be loaded/nocked before firing.", {}},
            {native_ui_semantic_address(0x88148f), native_ui_semantic_address(0x881531),
                "You can prepare in advance with ", " or from the inventory menu."},
        };
        const auto current_draw = [&](const NativeDrawnTextRow &draw,
                std::string_view expected, int &right) {
            if ((draw.source != expected && (draw.complete_source != expected ||
                        !expected.starts_with(draw.source))) ||
                    draw.source.empty() || draw.x < 0 || draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                    (raw && raw != draw.draw_grid)) return false;
            right = gps_->dimx;
            if (draw.draw_clip) {
                const auto &clip = *draw.draw_clip;
                if (draw.x < clip.x || draw.y < clip.y || draw.y >= clip.y + clip.h)
                    return false;
                right = std::min(right, clip.x + clip.w);
            }
            const int length = std::min(static_cast<int>(expected.size()), right - draw.x);
            if (length <= 0 || (draw.source != expected &&
                    draw.source.size() != static_cast<size_t>(length))) return false;
            for (int offset = 0; offset < length; ++offset) {
                bool top = false;
                const auto *cell = cell_at(draw.x + offset, draw.y, &top);
                const auto ch = cell && cell[0] ? cell[0] : static_cast<unsigned char>(' ');
                if (!cell || ch != static_cast<unsigned char>(expected[offset]) ||
                        (ch != ' ' && top != draw.top_layer)) return false;
            }
            return true;
        };
        for (const auto *layer_draws : {&draws, &top_draws}) {
            for (const auto &draw : *layer_draws) {
                const auto writer = std::find_if(std::begin(writers), std::end(writers),
                    [&](const Writer &entry) { return entry.prefix && draw.native_caller == entry.prefix; });
                if (writer == std::end(writers)) continue;
                int right = 0;
                if (!current_draw(draw, writer->before, right) || draw.x >= right) continue;
                std::string source(writer->before);
                int final_color = draw.foreground_rgb;
                if (writer->suffix) {
                    // Both literal draws must belong to the same native row
                    // and render epoch. Their gap is the actual keybinding,
                    // including a remapped chord, rather than a guessed key.
                    const int key_x = draw.x + static_cast<int>(writer->before.size());
                    if (key_x >= right) continue;
                    const NativeDrawnTextRow *tail = nullptr;
                    int tail_right = 0;
                    for (const auto &candidate : *layer_draws) {
                        int candidate_right = 0;
                        if (candidate.native_caller != writer->suffix || candidate.y != draw.y ||
                                candidate.draw_grid != draw.draw_grid ||
                                candidate.draw_epoch != draw.draw_epoch ||
                                candidate.sequence <= draw.sequence || candidate.x <= key_x ||
                                !current_draw(candidate, writer->after, candidate_right) ||
                                candidate.x > std::min(right, candidate_right)) continue;
                        if (!tail || candidate.sequence < tail->sequence) {
                            tail = &candidate;
                            tail_right = candidate_right;
                        }
                    }
                    if (!tail) continue;
                    right = std::min(right, tail_right);
                    bool intact = true;
                    for (int x = key_x; x < tail->x; ++x) {
                        bool top = false;
                        const auto *cell = cell_at(x, draw.y, &top);
                        const auto ch = cell && cell[0] ? cell[0] : static_cast<unsigned char>(' ');
                        if (!cell || (ch != ' ' && top != draw.top_layer)) { intact = false; break; }
                        source += static_cast<char>(ch);
                    }
                    if (!intact || trim_view(std::string_view(source).substr(writer->before.size())).empty())
                        continue;
                    source += writer->after;
                    final_color = tail->foreground_rgb;
                }
                // The cursor branch uses a 71-column outer panel. Every
                // sentence starts at C-33; retain its one-cell inner margin.
                // Source masks follow visible native ink even if a long key
                // extends past that allocation, while translated ink fits it.
                const int layout_right = std::min(draw.x + 67, right);
                const int source_right = std::min(draw.x + static_cast<int>(source.size()), right);
                if (layout_right <= draw.x || source_right <= draw.x) continue;
                std::vector<int> colors;
                colors.reserve(source.size());
                for (size_t at = 0; at < source.size(); ++at) {
                    bool top = false;
                    const auto *cell = draw.x + static_cast<int>(at) < source_right
                        ? cell_at(draw.x + static_cast<int>(at), draw.y, &top) : nullptr;
                    colors.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3]
                        : final_color >= 0 ? final_color : 0xffffff);
                }
                cursor_fields.push_back({{draw.x, draw.y, layout_right - draw.x, 1},
                    source_right, std::move(source), std::move(colors)});
            }
        }
    }
    struct PictureRow {
        int name_x, y, right;
        char kind;
    };
    std::vector<PictureRow> picture_rows;
    for (const auto *layer_draws : {&draws, &top_draws}) {
        for (const auto &draw : *layer_draws) {
            const char kind = adventure_combat_native_picture_kind(draw.native_caller);
            if (!kind || draw.source.empty() || draw.x < 7 || draw.y <= 0 ||
                    draw.y + 1 >= gps_->dimy || draw.draw_dimx != gps_->dimx ||
                    draw.draw_dimy != gps_->dimy || draw.draw_grid !=
                        (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;
            bool current = true;
            for (size_t at = 0; at < draw.source.size(); ++at) {
                bool top = false;
                const auto *cell = cell_at(draw.x + static_cast<int>(at), draw.y, &top);
                if (!cell || top != draw.top_layer || visible_char_at(
                        draw.x + static_cast<int>(at), draw.y) !=
                            static_cast<unsigned char>(draw.source[at])) {
                    current = false;
                    break;
                }
            }
            if (!current) continue;
            // Native name L+7, quality L+45, record edge E=R-1 or R-3.
            // Discover the current cap from the upper rail; source ownership
            // comes from the formatter draw, so an intact entire modal is
            // unnecessary. Leave E-2/E-1 for the native +/-/! marks.
            const int nominal_edge = draw.x + 92;
            int edge = -1;
            const auto *skin = native_texture_button_rectangle(*gps_);
            for (const int candidate : {nominal_edge, nominal_edge - 2})
                if (candidate < gps_->dimx && native_ui_skin_at(*gps_, candidate,
                        draw.y - 1, skin[2][0], classic)) { edge = candidate; break; }
            const int writer_right = draw.draw_clip
                ? std::min(gps_->dimx, draw.draw_clip->x + draw.draw_clip->w) : gps_->dimx;
            // A modal wider than the current native viewport can clip its
            // right cap. The formatter still owns the surviving caption;
            // never discard it merely because that off-screen cap is absent.
            if (edge < 0 && nominal_edge - 2 >= writer_right) edge = nominal_edge;
            const int summary_right = std::min(edge - 2, writer_right);
            if (edge < 0 || summary_right <= draw.x + 38) continue;
            if (std::none_of(picture_rows.begin(), picture_rows.end(), [&](const PictureRow &row) {
                    return row.name_x == draw.x && row.y == draw.y;
                })) picture_rows.push_back({draw.x, draw.y, summary_right, kind});
        }
    }
    std::vector<NativeAdventureCombatPanel> panels;
    std::vector<SDL_Rect> prompt_panels;
    // Ranged aiming is a separate renderer (PE 880120/87d9a0), not an
    // AttackCreature stage. Its modal retains the same pictured row geometry.
    constexpr int ranged_aim_prompt = -1;
    std::map<std::pair<int, int>, int> prompt_stages;
    std::set<std::pair<int, int>> confirmation_panels;
    const auto retain_prompt = [&](const SDL_Rect &bounds) {
        if (std::none_of(prompt_panels.begin(), prompt_panels.end(),
                [&](const SDL_Rect &existing) {
                    return existing.x == bounds.x && existing.y == bounds.y;
                })) prompt_panels.push_back(bounds);
    };
    for (int y = 0; y < gps_->dimy; ++y) {
        std::string row(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            row[x] = ch ? static_cast<char>(ch) : ' ';
        }
        for (size_t at = row.find("Done"); at != std::string::npos; at = row.find("Done", at + 4)) {
            if (!has_word_boundaries(row, at, at + 4)) continue;
            const auto panel = capture_adventure_combat_panel(*gps_, static_cast<int>(at),
                static_cast<int>(at + 4), y);
            if (!panel) {
                // The target, confirmation, aiming and wrestling stages
                // replace the summary with a prompt. Their native Done
                // control and complete combat prompt establish this scope.
                const auto bounds = adventure_combat_closed_panel_at(*gps_,
                    static_cast<int>(at), static_cast<int>(at + 4), y, classic);
                // Empty target lists have six outer rows; empty wrestling
                // lists have seven. Both still draw their prompt and Done.
                if (!bounds || bounds->w <= 30 || bounds->h < 4) continue;
                const int right = bounds->x + bounds->w;
                if (!adventure_combat_done_box_at(*gps_, *bounds, classic)) continue;
                bool combat_prompt = false;
                for (int py = bounds->y; py < bounds->y + 3 && !combat_prompt; ++py) {
                    std::string prompt;
                    for (int x = bounds->x + 1; x < right - 8; ++x) {
                        const auto ch = visible_char_at(x, py);
                        prompt += ch ? static_cast<char>(ch) : ' ';
                    }
                    const auto text = trim_view(prompt);
                    for (const std::string_view prefix : {"Who will you attack?", "Who will you wrestle?",
                            "What do you want to aim for?", "Where will you aim?",
                            "Really start a conflict with ",
                            "Really attack ", "Attack ", "Wrestle "})
                        if (text.starts_with(prefix)) {
                            combat_prompt = true;
                            prompt_stages[{bounds->x, bounds->y}] =
                                prefix == "Where will you aim?" ? ranged_aim_prompt :
                                prefix == "What do you want to aim for?" ? 3 :
                                prefix == "Attack " ? 4 : prefix == "Wrestle " ? 8 : 0;
                            break;
                        }
                    if (!combat_prompt && text.ends_with("has yielded.  Attack anyway?")) combat_prompt = true;
                }
                if (combat_prompt) retain_prompt(*bounds);
                continue;
            }
            if (std::any_of(panels.begin(), panels.end(), [&](const auto &existing) {
                    return existing.panel.x == panel->panel.x && existing.panel.y == panel->panel.y;
                })) continue;
            panels.push_back(*panel);
        }
        // Stage one deliberately has no Done button. Its confirmation
        // heading stays at outer L+2/T+2, in the same hover-skinned frame.
        // Route this native stage from its complete prompt and controls
        // instead of waiting for a control that its renderer never draws.
        for (const std::string_view cue : {"Really start a conflict with ",
                "Really attack ", " has yielded.  Attack anyway?"}) {
            const auto at = row.find(cue);
            if (at == std::string::npos) continue;
            const auto bounds = adventure_combat_closed_panel_at(*gps_,
                static_cast<int>(at), static_cast<int>(at + cue.size()), y, classic);
            // The stage-one bounds helper allocates seven outer rows, hence
            // exactly five interior rows. Its compact confirmation is valid.
            if (!bounds || bounds->h < 5 || y < bounds->y || y >= bounds->y + 3)
                continue;
            const std::string_view prompt = trim_view(std::string_view(row).substr(
                bounds->x + 1, bounds->w - 1));
            if (!((prompt.starts_with("Really start a conflict with ") ||
                        prompt.starts_with("Really attack ")) && prompt.ends_with("?")) &&
                    !prompt.ends_with(" has yielded.  Attack anyway?")) continue;
            if (!adventure_combat_confirmation_boxes_at(*gps_, *bounds, classic)) continue;
            retain_prompt(*bounds);
            confirmation_panels.emplace(bounds->x, bounds->y);
            break;
        }
    }
    if (panels.empty() && prompt_panels.empty() && picture_rows.empty() && cursor_fields.empty()) return;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const auto append = [&](const SDL_Rect &box, int display_left, char kind,
                            bool centered = false, bool combat_quality = false,
                            const CursorField *cursor = nullptr) {
        for (int y = box.y; y < box.y + box.h && y < gps_->dimy; ++y) {
            int first = box.x, end = cursor ? cursor->source_right : box.x + box.w;
            std::string native_row(gps_->dimx, ' ');
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                native_row[x] = ch ? static_cast<char>(ch) : ' ';
            }
            const auto blank = [&](int x) {
                const auto ch = visible_char_at(x, y);
                return ch == 0 || ch == ' ' || is_cp437_box_separator(native_row, x);
            };
            while (first < end && blank(first)) ++first;
            while (end > first && blank(end - 1)) --end;
            if (first >= end) continue;
            std::string source;
            bool layer = false;
            const auto *first_cell = cell_at(first, y, &layer);
            if (!first_cell || (raw && raw != (layer ? gps_->screen_top : gps_->screen))) continue;
            bool current = true;
            for (int x = first; x < end; ++x) {
                bool cell_layer = false;
                const auto *cell = cell_at(x, y, &cell_layer);
                const bool whitespace = cell && (cell[0] == 0 || cell[0] == ' ');
                // Transparent top-layer spaces expose the base background.
                // Only actual source glyphs need the field's text layer.
                // UTF-8 continuation bytes are not CP437 frame separators.
                if (!cell || (!whitespace && cell_layer != layer) ||
                        is_cp437_box_separator(native_row, x)) {
                    current = false;
                    break;
                }
                source += cell[0] ? static_cast<char>(cell[0]) : ' ';
            }
            if (!current) continue;
            // The renderer first paints CP437 0xFA dots, then overwrites only the
            // name's prefix. Own the whole native field (including its dots)
            // while translating the formatter's complete anatomy/attack.
            std::string lookup_source = cursor ? cursor->source : source;
            if (kind == 't' || kind == 'a') {
                const auto tail = lookup_source.find_last_not_of("\xfa. ");
                if (tail == std::string::npos) continue;
                lookup_source.resize(tail + 1);
            }
            std::optional<std::string> target;
            std::vector<int> target_colors;
            if (kind == 'k') {
                if (!cursor) continue;
                target = translate_help_paragraph(lookup_source, cursor->colors, target_colors, true);
                if (!target) continue;
            }
            if (combat_quality) {
                // Native branches emit difficulty/speed and contact through
                // separate addst calls. Mode four omits " strike" when both
                // difficulty and speed differ from normal. Resolve this
                // finite production before any generic noun/status template.
                const size_t comma = lookup_source.find(", ");
                if (comma == std::string::npos || comma == 0) continue;
                const std::string_view prefix(lookup_source.data(), comma);
                const bool native_strike = prefix.ends_with(" strike");
                const auto literal = [&](std::string_view text) -> std::optional<std::string> {
                    const auto found = adventure_target_literals_.find(std::string(text));
                    return found == adventure_target_literals_.end()
                        ? std::nullopt : std::optional(found->second);
                };
                const auto color_at = [&](size_t at) {
                    bool top = false;
                    const auto *cell = cell_at(first + static_cast<int>(at), y, &top);
                    return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
                };
                std::string translated;
                const auto add = [&](std::string_view text, int rgb) {
                    translated += text;
                    std::vector<uint32_t> codepoints;
                    if (decode_utf8(text, codepoints))
                        target_colors.insert(target_colors.end(), codepoints.size(), rgb);
                };
                const auto heading = native_strike ? prefix.substr(0, comma - 7) : prefix;
                std::string_view difficulty = heading, speed;
                for (const std::string_view value : {"VVSlow", "V Slow", "V Fast", "Slow", "Fast"}) {
                    if (heading == value) { difficulty = {}; speed = value; break; }
                    if (heading.size() > value.size() && heading.ends_with(value) &&
                            heading[heading.size() - value.size() - 1] == ' ') {
                        difficulty = heading.substr(0, heading.size() - value.size() - 1);
                        speed = value;
                        break;
                    }
                }
                const bool known_difficulty = difficulty.empty() ||
                    difficulty == "Impossible" || difficulty == "Difficult" ||
                    difficulty == "Tricky" || difficulty == "Normal" ||
                    difficulty == "Easy" || difficulty == "Easier" || difficulty == "Simple";
                // addst may clip the final contact words at the viewport.
                // Resolve the complete captured native draw, while the
                // Match continues to suppress only its visible source bytes.
                std::string complete_contact = lookup_source.substr(comma + 2);
                const auto &quality_draws = layer ? top_draws : draws;
                for (auto draw = quality_draws.rbegin(); draw != quality_draws.rend(); ++draw) {
                    if (draw->x != first + static_cast<int>(comma) + 2 || draw->y != y ||
                            draw->source.empty() ||
                            !std::string_view(draw->source).starts_with(complete_contact))
                        continue;
                    // Width-zero addst retains the full string in source;
                    // complete_source is supplied only for a resized draw.
                    const auto &complete = draw->complete_source.empty()
                        ? draw->source : draw->complete_source;
                    if (!std::string_view(complete).starts_with(complete_contact)) continue;
                    complete_contact = complete;
                    break;
                }
                const std::string_view contact_source = complete_contact;
                const bool known_contact = contact_source == "can only graze" ||
                    contact_source == "can't land squarely" || contact_source == "can't quite connect" ||
                    contact_source == "fairly solid" || contact_source == "square" ||
                    contact_source == "very square" || contact_source == "direct hit";
                const auto contact = known_contact ? literal(contact_source) : std::nullopt;
                const auto punctuation = literal(",");
                const auto strike = literal("strike");
                if (!known_difficulty || (difficulty.empty() && speed.empty()) ||
                        (!native_strike && (difficulty.empty() || speed.empty())) ||
                        !contact || !punctuation || !strike) continue;
                if (!difficulty.empty()) {
                    const auto caption = speed.empty()
                        ? literal(std::string(difficulty) + " strike") : literal(difficulty);
                    if (!caption) continue;
                    const std::string_view stem = speed.empty() && caption->ends_with(*strike)
                        ? std::string_view(*caption).substr(0, caption->size() - strike->size())
                        : std::string_view(*caption);
                    add(stem, color_at(0));
                }
                if (!speed.empty()) {
                    const auto caption = literal(speed);
                    if (!caption) continue;
                    if (!difficulty.empty()) add("、", color_at(heading.size() - speed.size()));
                    add(*caption, color_at(heading.size() - speed.size()));
                }
                add(*strike, color_at(native_strike ? comma - 1 : comma));
                add(*punctuation, color_at(comma));
                add(*contact, color_at(comma + 2));
                target = std::move(translated);
            }
            // Use the exact native formatter's identity before a lexical
            // fallback. A shortened name retains its complete translation.
            const auto &layer_draws = layer ? top_draws : draws;
            if (!target && kind == 'n') {
                for (auto draw = layer_draws.rbegin(); draw != layer_draws.rend(); ++draw) {
                    if (draw->x == first && draw->y == y && draw->unit_identity_target &&
                            std::string_view(draw->source).starts_with(lookup_source)) {
                        // An authored name can itself begin with "Ally: ".
                        // Its exact formatter draw owns those bytes as a name.
                        target = draw->unit_identity_target;
                        break;
                    }
                }
            }
            if (!target && kind == 'n') {
                if (const auto prefix = adventure_conflict_prefix(lookup_source)) {
                    const auto label = prefix->label.empty() ? std::optional(std::string{})
                        : exact_literal_translation("Adventure ranged prefix: " + std::string(prefix->label));
                    const auto colon = adventure_target_literals_.find(":");
                    const auto identity_source = std::string_view(lookup_source).substr(prefix->identity_offset);
                    const int identity_x = first + static_cast<int>(prefix->identity_offset);
                    std::optional<std::string> identity;
                    // The prefix and identity advance the same native cursor,
                    // but only the latter owns the selected unit/name record.
                    for (auto draw = layer_draws.rbegin(); draw != layer_draws.rend(); ++draw) {
                        if (draw->x != identity_x || draw->y != y ||
                                !std::string_view(draw->source).starts_with(identity_source)) continue;
                        identity = draw->unit_identity_target;
                        if (!identity) identity = translate_adventure_target_text(
                            draw->complete_source.empty() ? draw->source : draw->complete_source, 'n');
                        break;
                    }
                    if (!identity) identity = identity_source.empty() ? std::optional(std::string{})
                        : translate_adventure_target_text(identity_source, 'n');
                    if (label && identity && colon != adventure_target_literals_.end()) {
                        const std::string prelude = *label + colon->second;
                        target = prelude + *identity;
                        const auto color_text = [&](std::string_view text, int x) {
                            bool color_layer = false;
                            const auto *cell = cell_at(x, y, &color_layer);
                            const int rgb = cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
                            std::vector<uint32_t> codepoints;
                            if (decode_utf8(std::string(text), codepoints))
                                target_colors.insert(target_colors.end(), codepoints.size(), rgb);
                        };
                        color_text(prelude, first);
                        if (!identity->empty()) color_text(*identity, identity_x);
                    }
                }
            }
            for (auto draw = layer_draws.rbegin(); !target && draw != layer_draws.rend(); ++draw) {
                if (draw->x != first || draw->y != y ||
                        !std::string_view(draw->source).starts_with(lookup_source)) continue;
                if ((kind == 'n' || kind == 's') && draw->unit_identity_target)
                    target = draw->unit_identity_target;
                if (!target) {
                    // 116bb90 builds an entire attack/recovery status before
                    // one addst. Resolve that captured string even when no
                    // truncation occurred; the grid may contain its padding
                    // or the independently formatted item/name fields.
                    const auto &complete = draw->complete_source.empty()
                        ? draw->source : draw->complete_source;
                    target = translate_adventure_target_text(complete, kind);
                }
                break;
            }
            if (!target && kind == 's') {
                // All three native confirmation branches split the person
                // from their prose. Match the complete authored template to
                // THIS formatter-owned draw, including name-first yielded
                // prompts, before any lexical resolver can reinterpret it.
                const std::string complete = normalize_utterance(lookup_source);
                for (auto draw = layer_draws.rbegin(); draw != layer_draws.rend() && !target; ++draw) {
                    if (!draw->unit_identity_target || draw->unit_identity_target->empty() ||
                            draw->y != y || draw->x < first || draw->x >= end ||
                            draw->source.empty() ||
                            draw->source.size() > static_cast<size_t>(end - draw->x) ||
                            source.compare(draw->x - first, draw->source.size(), draw->source) != 0)
                        continue;
                    for (const Rule &entry : adventure_target_templates_) {
                        if (entry.template_kinds.size() != 1 || entry.template_kinds.front() != 'n' ||
                                entry.template_literals.size() != 2 ||
                                entry.target_template_literals.size() != 2 ||
                                entry.target_capture_order.size() != 1 ||
                                entry.target_capture_order.front() != 0 ||
                                normalize_utterance(entry.template_literals.front() + draw->source +
                                    entry.template_literals.back()) != complete) continue;
                        const std::vector<std::optional<std::string>> resolved{draw->unit_identity_target};
                        target = fill_template(entry, {draw->source}, nullptr, nullptr, &resolved);
                        const auto color_text = [&](std::string_view text, int x) {
                            bool color_layer = false;
                            const auto *cell = cell_at(x, y, &color_layer);
                            const int rgb = cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
                            std::vector<uint32_t> codepoints;
                            if (decode_utf8(std::string(text), codepoints))
                                target_colors.insert(target_colors.end(), codepoints.size(), rgb);
                        };
                        color_text(entry.target_template_literals.front(), first);
                        color_text(*draw->unit_identity_target, draw->x);
                        color_text(entry.target_template_literals.back(), end - 1);
                        break;
                    }
                }
            }
            if (!target) target = translate_adventure_target_text(lookup_source, kind);
            // The native renderer positions several independently formatted
            // values on one record. Double-space gaps are field boundaries;
            // translation still requires every nonblank field to resolve.
            if (!target && kind == 's') {
                const auto fields = split_text_fields(source);
                std::string complete;
                for (const auto &field : fields) {
                    const auto part = translate_adventure_target_text(field.text);
                    if (!part) { complete.clear(); break; }
                    if (!complete.empty()) complete += "  ";
                    complete += *part;
                }
                if (!complete.empty()) target = std::move(complete);
            }
            if (!target || target->empty()) continue;
            // Ownership and drawing remain separate: current original
            // bytes alone supply suppression, while the proven control
            // supplies the translation's width and shared text column.
            std::fill_n(screen_rows[y].begin() + first, end - first, ' ');
            if (only_y >= 0 && only_y != y) continue;
            std::erase_if(matches, [&](const Match &match) {
                return match.y == y && match.x < end && match.x + match.length > first;
            });
            Match match{first, y, end - first, kAdventureCombatFieldRule, *target, source};
            match.native_adventure_target_row = true;
            match.native_picture_caption_box = SDL_Rect{display_left, box.y,
                box.x + box.w - display_left, box.h};
            // AttackCreature and its status/identity helpers call ordinary
            // addst. That writer leaves old half-font flags untouched.
            match.layout_fixed_baseline = true;
            match.layout_reflowed_control = true;
            match.layout_x = display_left;
            match.layout_length = box.x + box.w - display_left;
            match.layout_clip_right = box.x + box.w;
            match.layout_left = !centered;
            match.layout_native_clip = SDL_Rect{origin_x + display_left * tile_w,
                origin_y + match.native_picture_caption_box->y * tile_h,
                match.layout_length * tile_w, match.native_picture_caption_box->h * tile_h};
            match.layout_foreground_rgb =
                (first_cell[1] << 16) | (first_cell[2] << 8) | first_cell[3];
            match.layout_glyph_foreground_rgb = std::move(target_colors);
            matches.push_back(std::move(match));
        }
    };
    for (const auto &field : cursor_fields)
        append(field.box, field.box.x, 'k', false, false, &field);
    for (const auto &panel : panels) {
        append(panel.name, panel.name.x, 'n');
        append(panel.status, panel.name.x, 's');
        append(panel.done, panel.done.x, 's', true);
        for (size_t index = 0; index < panel.rows.size(); ++index) {
            const auto &box = panel.rows[index];
            int left = box.x;
            for (const auto &selector : panel.selectors) {
                if (selector.row != index) continue;
                // Labels are fitted only before the left arrow. A rating
                // uses the selector's own allocated text strip and keeps
                // both arrow controls in their native locations.
                if (selector.left_arrow.x > left)
                    append({left, box.y, selector.left_arrow.x - left, box.h}, left, 's');
                append(selector.text, selector.text.x, 's', true);
                left = selector.right_arrow.x + selector.right_arrow.w;
            }
            if (left < box.x + box.w)
                append({left, box.y, box.x + box.w - left, box.h}, left, 's');
        }
    }
    for (const auto &panel : prompt_panels) {
        const int right = panel.x + panel.w;
        const bool confirmation = confirmation_panels.contains({panel.x, panel.y});
        append({panel.x + 1, panel.y, panel.w - (confirmation ? 1 : 9), 3},
            panel.x + 1, 's');
        if (confirmation) {
            const auto buttons = adventure_combat_confirmation_boxes_at(*gps_, panel, classic);
            if (buttons) {
                for (const auto &button : {buttons->first, buttons->second})
                    append({button.x, button.y + 1, button.w, 1}, button.x, 's', true);
            }
            continue;
        }
        append({right - 7, panel.y, 6, 3}, right - 7, 's', true);
        const int stage = prompt_stages[{panel.x, panel.y}];
        int picture_end = panel.y + 3;
        if (stage == 3 || stage == 4 || stage == ranged_aim_prompt) {
            const int list_end = panel.y + panel.h - (stage == 4 ? 18 : 0);
            for (int top = panel.y + 3; top + 3 <= list_end; top += 3) {
                const auto box = adventure_combat_action_box_at(*gps_, panel, top, classic, true);
                if (!box) break;
                // Native L+7 has a 36-byte name cap and a dotted tail; L+45
                // begins the quality field. E-2/E-1 hold independent marks.
                const int summary_left = panel.x + 44;
                const int summary_right = box->x + box->w - 2;
                if (summary_right <= summary_left) break;
                append({box->x, top + 1, summary_left - box->x, 1},
                    box->x, stage == 4 ? 'a' : 't');
                // Ranged +0x48 modal reads the RAW singular/plural body
                // name and emits one complete shot/throw literal for each
                // of seven difficulty ranges. Unlike melee, it has no
                // speed/contact clause. The final two mark cells stay native.
                append({summary_left, top + 1, summary_right - summary_left, 1},
                    summary_left, 's', false, stage != ranged_aim_prompt);
                picture_end = top + 3;
            }
            if (stage != 4) continue;
            picture_end = list_end;
        }
        for (int y = picture_end; y < panel.y + panel.h; ++y) {
            if (stage == 8) {
                // Wrestling actions place two or three four-column icons
                // over the row's left edge. Own the caption after those
                // icons as one field, before generic word translation.
                if (const auto box = adventure_combat_wrestling_box_at(
                        *gps_, panel, y, classic)) {
                    append(*box, box->x, 's');
                    y += box->h - 1;
                    continue;
                }
            }
            if (stage == 4 && (y - picture_end) % 3 == 1) {
                // Six three-row style controls remain below the attack
                // list. Their full explanations are one addst, after the
                // artwork/status strip and optional native shortcut.
                std::string row(gps_->dimx, ' ');
                for (int x = panel.x + 8; x < right - 1; ++x) {
                    const auto ch = visible_char_at(x, y);
                    row[x] = ch ? static_cast<char>(ch) : ' ';
                }
                bool explanation = false;
                for (const std::string_view prefix : {"Quick attack:", "Heavy attack:",
                        "Wild attack:", "Precise attack:", "No quick attack:",
                        "No heavy attack:", "Forced wild attack:", "No precise attack:",
                        "No charge attack:", "Charge attack:", "Multi-attack:"}) {
                    const auto at = row.find(prefix, panel.x + 8);
                    if (at == std::string::npos) continue;
                    append({static_cast<int>(at), y, right - 1 - static_cast<int>(at), 1},
                        static_cast<int>(at), 's');
                    explanation = true;
                    break;
                }
                if (explanation) continue;
            }
            // Stage zero's eight-row portrait record owns a name and status
            // column. It is not a three-row caption despite its large skin.
            bool target_record = false;
            for (int key_x = panel.x + 13; key_x + 2 < right; ++key_x) {
                const auto key = visible_char_at(key_x, y);
                if (!((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z') ||
                        (key >= '0' && key <= '9'))) continue;
                const auto record = adventure_target_record(*gps_, panel, key_x, y);
                if (!record) continue;
                append({record->x, y, record->w, 1}, record->x, 'n');
                append({record->x, y + 1, record->w, record->y + record->h - y - 1}, record->x, 's');
                target_record = true;
                y = record->y + record->h - 1;
                break;
            }
            if (target_record) continue;
            std::string row(gps_->dimx, ' ');
            for (int x = panel.x; x < right; ++x) {
                const auto ch = visible_char_at(x, y);
                row[x] = ch ? static_cast<char>(ch) : ' ';
            }
            const auto fields = split_text_fields(row);
            for (size_t index = 0; index < fields.size(); ++index) {
                const auto &field = fields[index];
                if (field.start < panel.x || field.end > right || is_keybinding_code(field.text)) continue;
                int first = field.start;
                bool layer = false;
                const auto *cell = cell_at(first, y, &layer);
                // Native records draw their shortcut as the first green
                // character, separately from the complete caption source.
                if (cell && field.text.size() > 2 && field.text[1] == ' ' &&
                        (std::equal(cell + 1, cell + 4, gps_->uccolor[2]) ||
                         std::equal(cell + 1, cell + 4, gps_->uccolor[10]))) first += 2;
                if (first >= field.end) continue;
                int end = index + 1 < fields.size() ? fields[index + 1].start - 1 : right;
                if (const auto button = native_button_text_rect(*gps_, first, field.end, y,
                        false, nullptr, false, true)) end = std::min(end, button->x + button->w);
                if (end > first) append({first, y, end - first, 1}, first, 's');
            }
        }
    }
    // Formatter-owned pictured fields also cover modals whose outer rails
    // are partially covered. Replacing an existing same-row field removes
    // its earlier fragments and gives suppression the complete current ink.
    for (const auto &row : picture_rows) {
        const int summary_left = row.name_x + 38;
        append({row.name_x, row.y, 38, 1}, row.name_x, row.kind);
        append({summary_left, row.y, row.right - summary_left, 1},
            summary_left, 's', false, true);
    }
}

void Overlay::layout_adventure_combat_fields(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || !face_) return;
    if (std::none_of(prepared_matches_.begin(), prepared_matches_.end(),
            [](const Match &match) { return match.rule == kAdventureCombatFieldRule; })) return;
    normalize_native_split_text();
    for (auto &match : prepared_matches_) {
        if (match.rule != kAdventureCombatFieldRule || match.target.empty() ||
                match.native_split_duplicate || !match.native_picture_caption_box) continue;
        const auto &box = *match.native_picture_caption_box;
        const bool left = match.layout_left;
        layout_fortress_text_rows(renderer, {{&match}}, box.x, box.x + box.w, true, true);
        match.layout_left = left;
        match.layout_ellipsize = true;
    }
}
