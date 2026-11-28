// The fortress help index draws two hover-frame panels containing three-row
// rectangle buttons. Native captions start at the button's left edge; their
// English lengths are NOT centered layout boxes. Status text occupies the
// following row of that same button. Only layout changes here: translations,
// colors, source suppression, scrolling and native click targets stay intact.
void Overlay::layout_fortress_help(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    if (NativeHelpForegroundScope::active && !g_native_help_layer.index_panels.empty()) {
        const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
        const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
        const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
        const int pixels = unified_font_pixels();
        for (const auto &panel : g_native_help_layer.index_panels) {
            for (Match &match : prepared_matches_) {
                if (match.rule != kHelpIndexRule || match.target.empty() ||
                        match.native_help_source_only || match.native_split_duplicate ||
                        match.x < panel.frame.x ||
                        match.x + match.length > panel.frame.x + panel.frame.w) continue;
                const bool heading = match.y == panel.heading_y;
                const int row = match.y - panel.first_caption_y;
                const bool caption = row >= 0 && row / 3 < panel.visible_entries &&
                    row % 3 <= 1;
                if (!heading && !caption) continue;
                const int left = heading ? panel.frame.x + 1 : panel.caption_left;
                const int right = heading ? panel.frame.x + panel.frame.w - 1
                    : panel.caption_right;
                if (left < 0 || right > gps_->dimx || left >= right ||
                        match.y < 0 || match.y >= gps_->dimy) continue;
                // Native row slots own the font, origin and baseline. A
                // title's English length cannot create a smaller centre;
                // viewed/completed shares its button title's left margin.
                match.layout_x = left;
                match.layout_y = match.y;
                match.layout_length = right - left;
                match.layout_clip_right = right;
                match.layout_left = !heading;
                match.layout_box_pixel_x = -1;
                match.layout_box_pixel_width = 0;
                match.layout_fixed_baseline = true;
                match.layout_pixel_y = 0;
                match.layout_prepared = true;
                match.layout_line_height_pixels = tile_h;
                match.layout_native_clip = SDL_Rect{origin_x + left * tile_w,
                    origin_y + match.y * tile_h, (right - left) * tile_w, tile_h};
                match.layout_ellipsize = true;
            }
        }
        return;
    }
    std::array<Match *, 2> headings{};
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_text ||
            match.native_split_duplicate) continue;
        if (match.source == "Interactive tutorial") headings[0] = &match;
        if (match.source == "Information and guides") headings[1] = &match;
    }
    if (!headings[0] || !headings[1] || headings[0]->y != headings[1]->y ||
        headings[0]->x >= headings[1]->x) return;

    // Use the shared live skin reader for graphical textures and classic
    // CP437/palette cells, including either native texture plane.
    const auto settings = native_ui_settings();
    auto has_skin = [&](int x, int y, int32_t skin) {
        return native_ui_skin_at(*gps_, x, y, skin, settings && settings->classic);
    };
    struct Panel { int left, right, bottom; };
    auto panel_for = [&](const Match &heading) -> std::optional<Panel> {
        const auto &skin = native_texture_hover_rectangle(*gps_);
        int left = heading.x - 1, right = heading.x + heading.length;
        while (left >= 0 && !has_skin(left, heading.y, skin[0][1])) --left;
        while (right < gps_->dimx && !has_skin(right, heading.y, skin[2][1])) ++right;
        if (left < 0 || right >= gps_->dimx) return std::nullopt;
        // Connected sides and a complete lower border prevent a different
        // popup or the minimap from supplying one side of a guessed panel.
        for (int y = heading.y + 1; y < gps_->dimy; ++y) {
            if (has_skin(left, y, skin[0][2]) && has_skin(right, y, skin[2][2])) {
                for (int x = left + 1; x < right; ++x)
                    if (!has_skin(x, y, skin[1][2])) return std::nullopt;
                return Panel{left, right, y};
            }
            if (!has_skin(left, y, skin[0][1]) ||
                !has_skin(right, y, skin[2][1])) return std::nullopt;
        }
        return std::nullopt;
    };
    struct Slot {
        std::vector<Match *> parts;
        int left, right;
        bool centered;
    };
    std::vector<Slot> slots;
    const int32_t (*button_skins[])[3] = {
        native_texture_button_rectangle(*gps_),
        native_texture_button_rectangle_selected(*gps_),
        native_texture_button_rectangle_light(*gps_),
        native_texture_button_rectangle_dark(*gps_),
    };
    for (Match *heading : headings) {
        const auto panel = panel_for(*heading);
        if (!panel) continue;
        slots.push_back({{heading}, panel->left + 1, panel->right, true});
        for (int y = heading->y + 1; y < panel->bottom; ++y) {
            for (int left = panel->left + 1; left + 2 < panel->right; ++left) {
                for (const auto *skin : button_skins) {
                    if (!has_skin(left, y, skin[0][1])) continue;
                    int right = left + 1;
                    while (right < panel->right && has_skin(right, y, skin[1][1])) ++right;
                    if (right <= left + 1 || right >= panel->right ||
                        !has_skin(right, y, skin[2][1])) continue;
                    auto parts = fortress_text_row(left, y);
                    if (!parts.empty() && parts.back()->x + parts.back()->length <= right)
                        slots.push_back({std::move(parts), left + 1, right, false});
                    // Viewed/completed is a separate, green native row, not
                    // a continuation of the title. Keep its vertical slot and
                    // give it the same text origin and font as the title.
                    if (y + 1 < panel->bottom) {
                        for (Match &status : prepared_matches_) {
                            if (status.y != y + 1 || status.x < left ||
                                status.x + status.length > right || status.target.empty() ||
                                (status.source != "[Viewed]" && status.source != "[Completed]"))
                                continue;
                            slots.push_back({{&status}, left + 1, right, false});
                        }
                    }
                    left = right;
                    break;
                }
            }
        }
    }
    if (slots.empty()) return;
    for (Slot &slot : slots) {
        layout_fortress_text_rows(renderer, {slot.parts}, slot.left, slot.right);
        for (Match *part : slot.parts) part->layout_left = !slot.centered;
    }
}

// Choose catalog fragments only when the rest of the paragraph is covered.
// Native assembly can put a short entry before one with the same longer prefix.
std::optional<std::string> Overlay::translate_help_paragraph_uncached(
        std::string_view raw_source, const std::vector<int> &raw_foregrounds,
        std::vector<int> &target_foregrounds, bool ui_message, int required_rule,
        bool literal_only, bool &cacheable) const {
    cacheable = true;
    target_foregrounds.clear();
    const auto &catalog = ui_message ? ui_message_trie_ : help_trie_;
    const auto &templates = ui_message ? ui_message_template_rules_ : help_template_rules_;
    if ((catalog.size() <= 1 && templates.empty()) ||
        raw_foregrounds.size() != raw_source.size()) return std::nullopt;
    // Native color boundaries and line wraps introduce repeated spaces. Keep
    // their color positions aligned while canonicalizing for typed templates.
    std::string source;
    std::vector<int> source_foregrounds;
    std::vector<size_t> source_origins;
    for (size_t at = 0; at < raw_source.size(); ++at) {
        const unsigned char ch = raw_source[at];
        if (native_prose_space(ch)) {
            if (source.empty() || source.back() == ' ') continue;
            source.push_back(' ');
        } else source.push_back(static_cast<char>(ch));
        source_foregrounds.push_back(raw_foregrounds[at]);
        source_origins.push_back(at);
    }
    while (!source.empty() && source.back() == ' ') {
        source.pop_back();
        source_foregrounds.pop_back();
        source_origins.pop_back();
    }
    if (source.empty()) return std::nullopt;
    const auto palette_rgb = [&](int palette) {
        return (gps_->uccolor[palette][0] << 16) |
            (gps_->uccolor[palette][1] << 8) | gps_->uccolor[palette][2];
    };
    const auto span_rgb = [&](size_t begin, size_t end,
            const std::vector<std::pair<size_t, size_t>> &captures = {}) {
        int base = -1;
        size_t capture = 0;
        for (size_t at = begin; at < end; ++at) {
            while (capture < captures.size() && captures[capture].second <= at)
                ++capture;
            if ((capture < captures.size() && captures[capture].first <= at) ||
                source[at] == ' ') continue;
            if (base < 0) base = source_foregrounds[at];
            else if (source_foregrounds[at] != base) return palette_rgb(7);
        }
        return base < 0 ? source_foregrounds[begin] : base;
    };
    const auto word_byte = [](unsigned char ch) {
        return ascii_word_byte(ch) || is_cp437_latin_letter_byte(ch);
    };
    const auto boundary = [&](size_t end) {
        return end == source.size() || !word_byte(source[end - 1]) ||
            !word_byte(source[end]);
    };
    struct Step {
        size_t end = SIZE_MAX;
        int rule = -1;
        bool raw = false;
        std::vector<std::string> captures;
        std::vector<std::string> resolved;
        std::vector<std::vector<size_t>> key_origins;
        std::vector<std::pair<size_t, size_t>> ranges;
        size_t literal_bytes = 0;
    };
    std::vector<Step> path(source.size() + 1);
    path.back().end = source.size();
    // A complete literal always wins the existing longest-span / most-
    // literal-bytes ordering. Resolve it before the suffix DP: fixed help
    // and mode descriptions must not scan every dynamic message template
    // at every character on each native layer and frame. Keep the shared
    // output pass below so palette tags and native foregrounds still apply.
    int literal_node = 0;
    for (unsigned char ch : source) {
        if (ch == ' ') continue;
        const auto found = catalog[literal_node].next.find(ch);
        if (found == catalog[literal_node].next.end()) {
            literal_node = -1;
            break;
        }
        literal_node = found->second;
    }
    if (literal_node >= 0 && catalog[literal_node].rule >= 0 &&
        (required_rule < 0 || catalog[literal_node].rule == required_rule)) {
        path.front().end = source.size();
        path.front().rule = catalog[literal_node].rule;
        path.front().literal_bytes = source.size();
    }
    // Announcement dispatch probes reviewed whole messages before recursive
    // grammars. Reuse this lookup and the color-aware output pass, but do not
    // let a template or several shorter catalog entries satisfy that probe.
    if (literal_only && path.front().end == SIZE_MAX) return std::nullopt;
    // The paragraph DP visits every possible suffix. Select its templates
    // once: a rule whose mandatory literal is absent from the whole source
    // cannot match any of those suffixes. Notification lists otherwise scan
    // the entire message catalogue for every character of every record.
    // Probe indices retain catalogue order, including unanchored rules; the
    // original typed matcher below still resolves every field and color.
    std::vector<int> candidate_templates;
    if (path.front().end == SIZE_MAX) {
        if (required_rule >= 0) {
            if (prose_template_member(required_rule, ui_message))
                candidate_templates.push_back(required_rule);
        } else if (ui_message) {
            for (int index : ui_message_anchors_.candidates(compact_ui_message_literal(source)))
                candidate_templates.push_back(ui_message_template_probes_[index].index);
        } else candidate_templates = help_template_anchors_.candidates(compact_ui_message_literal(source));
    }
    const auto &paragraph_templates = candidate_templates;
    // Typed captures can consult the current draw's authored squad alias or
    // world/site bindings, which the unit-identity context does not cover.
    // Cache literal-only parses and misses without any typed candidates.
    if (path.front().end == SIZE_MAX &&
            std::any_of(paragraph_templates.begin(), paragraph_templates.end(),
                [&](int index) { return !rules_[static_cast<size_t>(index)].template_kinds.empty(); }))
        cacheable = false;
    // Before filling suffixes, try the complete source through this SAME
    // matcher. Only path[source.size()] is reachable yet, so this first pass
    // cannot admit a shorter span. A complete match wins the existing longest
    // span ordering; all candidates still compete by literal bytes and their
    // original order, with unchanged typed captures and foreground handling.
    // Only a suffix with a complete path can terminate a production. Keep
    // these endpoints in the same descending order as the old byte loop,
    // rather than rediscovering mostly unreachable bytes for every rule.
    std::vector<size_t> reachable_ends{source.size()};
    for (size_t scan = path.front().end == SIZE_MAX ? source.size() + 1 : 0; scan-- > 0;) {
        const bool whole_source = scan == source.size();
        const size_t at = whole_source ? 0 : scan;
        // A UI candidate owns exactly one reviewed message, including its
        // typed captures. Do not validate an overlong candidate by covering
        // it with several unrelated catalog entries: those may be separate
        // announcements whose native line boundaries must remain intact.
        if (required_rule >= 0 && at != 0) continue;
        if (source[at] == ' ') {
            if (path[at + 1].end != SIZE_MAX) {
                path[at].end = at + 1;
                reachable_ends.push_back(at);
            }
            continue;
        }
        int node = 0;
        for (size_t end = at; end < source.size(); ++end) {
            const unsigned char ch = source[end];
            if (ch == ' ') continue;
            const auto found = catalog[node].next.find(ch);
            if (found == catalog[node].next.end()) break;
            node = found->second;
            if (catalog[node].rule >= 0 &&
                (required_rule < 0 || catalog[node].rule == required_rule) && boundary(end + 1) &&
                path[end + 1].end != SIZE_MAX) {
                path[at].end = end + 1;
                path[at].rule = catalog[node].rule;
                path[at].literal_bytes = end + 1 - at;
            }
        }
        // The same typed name and sphere engines are shared with ordinary
        // world/character pages. Wildcards cannot swallow arbitrary prose.
        for (int index : paragraph_templates) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            const auto prefix = catalog_literal_end(source, at, rule.template_literals.front(),
                rule.case_insensitive);
            if (!prefix) continue;
            size_t literal_bytes = 0;
            for (const auto &literal : rule.template_literals)
                literal_bytes += std::count_if(literal.begin(), literal.end(),
                    [](unsigned char ch) { return !native_prose_space(ch); });
            for (const size_t end : reachable_ends) {
                if (end <= *prefix) break;
                if (!boundary(end) || path[end].end == SIZE_MAX ||
                    (path[at].end != SIZE_MAX && (path[at].end > end ||
                        (path[at].end == end && path[at].literal_bytes >= literal_bytes)))) continue;
                std::vector<std::string> captures;
                std::vector<std::pair<size_t, size_t>> ranges;
                if (!match_catalog_template(rule, std::string_view(source).substr(0, end),
                        at, captures, ranges, &source_foregrounds, true)) continue;
                std::vector<std::string> resolved;
                std::vector<std::vector<size_t>> key_origins(captures.size());
                bool complete = true;
                for (size_t i = 0; i < captures.size(); ++i) {
                    std::optional<std::string> translated;
                    switch (rule.template_kinds[i]) {
                    case 'p':
                        if (ui_message && !adventure_divine_person_template(rule)) {
                            translated = translate_legends_name(captures[i], true);
                        } else {
                            // The adventure initializer and divine guidance
                            // call the historical figure formatter rather
                            // than the bare name formatter:
                            // its person field can include an article, caste,
                            // profession, curse, nickname or unnamed identity.
                            // Prefer captured native fields, then the shared
                            // actor grammar for already constructed help pages.
                            const size_t first = source_origins[ranges[i].first];
                            const size_t last = source_origins[ranges[i].second - 1] + 1;
                            const auto native = raw_source.substr(first, last - first);
                            translated = native_unit_identity_source_target(native);
                            if (!translated)
                                translated = native_unit_identity_source_target(captures[i]);
                            if (!translated)
                                translated = translate_legends_actor(native, 0, true);
                            // A player's Chinese first name is authored text
                            // inside this proved person slot, rather than a
                            // generated Latin name. Reuse the unit parser's
                            // caste/name separation without broadening names.
                            if (!translated && contains_cjk_utf8(native))
                                translated = translate_ui_message_capture(native, true);
                        }
                        break;
                    case 'e':
                        if (visitor_overview_capture(rule, i)) {
                            translated = translate_ui_catalog_capture(rule, i, captures[i]);
                            break;
                        }
                        if (captures[i].empty() && adventure_divine_building_capture(rule, i)) {
                            translated = std::string{};
                            break;
                        }
                        translated = adventure_divine_guidance_template(rule)
                            ? translate_adventure_divine_capture(rule, i, captures[i])
                            : ui_message && i == 0 &&
                            fortress_squad_reference_template(rule.source)
                            ? translate_fortress_squad_name(captures[i])
                            : translate_legends_name(captures[i], false);
                        break;
                    case 'r': translated = translate_deity_spheres(captures[i]); break;
                    case 'q':
                        if (ui_message) {
                            // A prophet appends a separately quoted mental-picture
                            // statement to the visitor Overview box. Its finite
                            // predicates and typed figure/place fields are owned
                            // by that constructor, rather than general quotations.
                            translated = rule.source == "\"{q}\""
                                ? translate_announcement_combat(captures[i], "visitor-statement")
                                : translate_legends_text(captures[i], false, false);
                        }
                        break;
                    case 'v':
                        if (ui_message) {
                            translated = translate_legends_event(captures[i]);
                            if (!translated) translated = translate_legends_text(captures[i], false, false);
                        }
                        break;
                    case 'm':
                        if (ui_message) translated = translate_announcement_music_passages(captures[i]);
                        break;
                    case 'u':
                        if (ui_message) translated = translate_announcement_number(captures[i]);
                        break;
                    case 'f':
                        if (ui_message) translated = translate_announcement_date(captures[i]);
                        break;
                    case 'i':
                        if (ui_message) {
                            // The matched capture owns its exact native span.
                            // Retain a closed item parse across different
                            // reports without borrowing another equal name's
                            // identity or changing this catalogue's grammar.
                            const size_t first = source_origins[ranges[i].first];
                            const size_t last = source_origins[ranges[i].second - 1] + 1;
                            const auto native = raw_source.substr(first, last - first);
                            const auto parse_item = [&] {
                                return translate_announcement_items(captures[i]);
                            };
                            std::string configuration = config_.language;
                            configuration.push_back(config_.enabled ? '\1' : '\0');
                            configuration.push_back(config_.native_language_original ? '\1' : '\0');
                            configuration.push_back(config_.compositional_rules ? '\1' : '\0');
                            auto closed = native_announcement_log_closed_item_field(this,
                                raw_source, first, native, "ui-announcement-item", configuration,
                                native_identity_translation_catalog_generation(),
                                [&](const NativeUnitIdentity &identity) {
                                    return translate_native_unit_identity(identity);
                                }, parse_item);
                            translated = closed.state == NativeAnnouncementLogItemFieldState::CompatibilityRequired
                                ? parse_item() : std::move(closed.target);
                        }
                        break;
                    case 't':
                        if (ui_message) translated = translate_legends_anatomy(captures[i]);
                        break;
                    case 'b':
                        if (ui_message) {
                            // Trade's artifact formatter returns the complete
                            // item description for an unnamed non-book item.
                            // Only these constructor fields admit that branch;
                            // a fully consumed item production wins before the
                            // broad generated-name fallback can claim its nouns.
                            const auto sentence = normalize_utterance(rule.source);
                            const bool trade_artifact =
                                sentence == "You honor {e} with the presentation of {b}." ||
                                sentence == "Villains! The seizure of {b} will not go unanswered." ||
                                sentence == "{b} is a great treasure. We respect that this is no mere trade.";
                            // The visitor's information quest calls the same
                            // artifact formatter in mode 0: an unnamed item
                            // is its full object description, not a title.
                            const bool visitor_artifact =
                                sentence.starts_with("This visitor has come ") &&
                                sentence.ends_with(" is seeking information about the location of {b}.");
                            // 2afed0 submits the two full unit captions around
                            // b94400(mode=0)'s artifact field. That field has
                            // the same unnamed-item, written-title, Untitled
                            // and unknown-artifact branches as a visitor quest.
                            const bool revealed_artifact =
                                sentence == "{n} has revealed the presence of {b} to {n}." ||
                                sentence == "Has revealed the presence of {b} to {n}." ||
                                sentence == "{n} has revealed the presence of {b} to ." ||
                                sentence == "Has revealed the presence of {b} to .";
                            // Adventure barter calls ELF a0d8c0(mode=0):
                            // named artifacts, written titles, Untitled,
                            // unknown IDs and e68020's full item fallback.
                            const bool described_artifact = visitor_artifact || revealed_artifact ||
                                adventure_barter_refusal_template(rule);
                            const bool described_item = described_artifact &&
                                trim_view(captures[i]).starts_with("the ");
                            if (trade_artifact || described_artifact) {
                                auto item = trim_view(captures[i]);
                                // c65450 mode 1 emits lowercase "the "; the
                                // treasure reply capitalizes only that first
                                // byte. Generated titles such as The Silver
                                // Axe retain their proper-name grammar.
                                if (item.starts_with("the ") ||
                                        (trade_artifact && item.starts_with("The ") &&
                                         !generated_title_shape(item))) {
                                    item.remove_prefix(4);
                                    translated = translate_item_caption_grammar(item);
                                    if (!translated && described_artifact)
                                        translated = translate_item_description_term(item);
                                }
                            }
                            // Named body components can omit the article.
                            // Their complete unit/body noun grammar also owns
                            // this artifact formatter's item fallback.
                            if (!translated && described_artifact &&
                                    trim_view(captures[i]).ends_with(" (copy)"))
                                translated = translate_item_description_term(captures[i]);
                            if (!translated && described_artifact && !described_item)
                                translated = translate_corpsepiece_item_name(captures[i]);
                            if (!translated && !described_item)
                                translated = translate_legends_artifact_identity(captures[i]);
                            if (!translated && !described_item)
                                translated = translate_legends_book(captures[i]);
                            if (!translated && (trade_artifact || described_artifact))
                                translated = translate_item_description_term(captures[i]);
                        }
                        break;
                    case 'd': translated = captures[i]; break;
                    case 's':
                    case 'n':
                        if (ui_message || adventure_divine_material_capture(rule, i)) {
                            if (ui_message && rule.template_kinds[i] == 'n')
                                translated = native_announcement_unit_identity_target(raw_source, captures[i]);
                            if (!translated)
                                translated = translate_ui_catalog_capture(rule, i, captures[i]);
                        }
                        break;
                    case 'c':
                        if (!ui_message) break;
                        [[fallthrough]];
                    case 'k': {
                        const size_t first = source_origins[ranges[i].first];
                        const size_t last = source_origins[ranges[i].second - 1] + 1;
                        const std::string_view native = raw_source.substr(first, last - first);
                        translated = rule.template_kinds[i] == 'k'
                            ? display_keybinding_sequence(native, key_origins[i])
                            : cp437_to_utf8(native);
                        break;
                    }
                    default: break;
                    }
                    if (!translated || (translated->empty() &&
                            !(captures[i].empty() && adventure_divine_building_capture(rule, i)))) {
                        complete = false;
                        break;
                    }
                    resolved.push_back(std::move(*translated));
                }
                if (!complete || rule.target_capture_order.size() != captures.size()) continue;
                path[at].end = end;
                path[at].rule = index;
                path[at].captures = std::move(captures);
                path[at].resolved = std::move(resolved);
                path[at].key_origins = std::move(key_origins);
                path[at].ranges = std::move(ranges);
                path[at].literal_bytes = literal_bytes;
                break;
            }
        }
        if (whole_source) {
            if (path.front().end == source.size()) break;
            // No complete template resolved. Leave the path untouched and
            // resume the original suffix DP, including its raw delimiters.
            continue;
        }
        if (path[at].end != SIZE_MAX) {
            reachable_ends.push_back(at);
            continue;
        }
        // Quotes around divine speech and brackets around keys remain native.
        // A delimiter never makes an uncovered remainder successful.
        if ((source[at] == '[' || source[at] == ']' || source[at] == '"') &&
            path[at + 1].end != SIZE_MAX) {
            path[at].end = at + 1;
            path[at].raw = true;
            reachable_ends.push_back(at);
            continue;
        }
    }
    if (path.front().end == SIZE_MAX) return std::nullopt;
    if (required_rule >= 0 && (path.front().rule != required_rule ||
            path.front().end != source.size())) return std::nullopt;
    std::string target;
    for (size_t at = 0; at < source.size();) {
        const Step &step = path[at];
        if (step.raw) {
            if (!target.empty() && ascii_word_byte(static_cast<unsigned char>(target.back())) &&
                word_byte(source[at])) {
                target.push_back(' ');
                target_foregrounds.push_back(source_foregrounds[at]);
            }
            target += cp437_to_utf8(std::string_view(source).substr(at, step.end - at));
            target_foregrounds.insert(target_foregrounds.end(),
                source_foregrounds.begin() + at, source_foregrounds.begin() + step.end);
        } else if (step.rule >= 0) {
            const Rule &rule = rules_[static_cast<size_t>(step.rule)];
            // A named speech can embed yellow trade goods and a red agreement
            // notice. The speaker's native foreground still owns its prose;
            // mixed field colors must not turn the entire speech white.
            // Item/number captures and explicit catalog palettes keep their
            // own colors below. This is shared by every named UI speech.
            const bool named_speech = ui_message && !step.ranges.empty() &&
                rule.template_kinds.front() == 'p' &&
                rule.template_literals.front().empty() &&
                rule.template_literals[1].starts_with(": ");
            // Typed fields own their colors separately. Infer prose
            // ONLY from its literal source glyphs: a green key inside
            // white instructions must not force the prose to gray.
            // Source ranges remain ordered even if Chinese reorders
            // the captures; explicit target palettes still win below.
            const int base_rgb = named_speech
                ? span_rgb(step.ranges.front().first, step.ranges.front().second)
                : span_rgb(at, step.end, step.ranges);
            std::vector<int> capture_colors;
            for (const auto &[begin, end] : step.ranges)
                capture_colors.push_back(span_rgb(begin, end));
            size_t cp = 0, output_capture = 0;
            for (size_t byte = 0; byte < rule.target.size();) {
                const int palette = rule.help_target_palettes.empty()
                    ? -1 : rule.help_target_palettes[cp];
                if (!step.resolved.empty() && rule.target[byte] == '{') {
                    const size_t close = rule.target.find('}', byte);
                    if (close == std::string::npos ||
                        output_capture >= rule.target_capture_order.size()) return std::nullopt;
                    const size_t capture = rule.target_capture_order[output_capture++];
                    const std::string &value = step.resolved[capture];
                    target += value;
                    if (rule.template_kinds[capture] == 'k' ||
                        (ui_message && rule.template_kinds[capture] == 'c')) {
                        // Keycap symbols inherit the replaced key name's
                        // color; spacing/modifiers and custom names retain
                        // their native colors, independent of prose tags.
                        const auto [begin, end] = step.ranges[capture];
                        const size_t first = source_origins[begin];
                        const size_t last = source_origins[end - 1] + 1;
                        if (rule.template_kinds[capture] == 'k') {
                            for (size_t origin : step.key_origins[capture])
                                target_foregrounds.push_back(raw_foregrounds[first + origin]);
                        } else {
                            target_foregrounds.insert(target_foregrounds.end(),
                                raw_foregrounds.begin() + first, raw_foregrounds.begin() + last);
                        }
                    } else {
                        const int rgb = palette < 0 ? capture_colors[capture] : palette_rgb(palette);
                        for (unsigned char ch : value)
                            if ((ch & 0xc0) != 0x80) target_foregrounds.push_back(rgb);
                    }
                    cp += close + 1 - byte;
                    byte = close + 1;
                    continue;
                }
                target_foregrounds.push_back(palette < 0 ? base_rgb : palette_rgb(palette));
                target.push_back(rule.target[byte++]);
                while (byte < rule.target.size() &&
                    (static_cast<unsigned char>(rule.target[byte]) & 0xc0) == 0x80)
                    target.push_back(rule.target[byte++]);
                ++cp;
            }
        }
        at = step.end;
    }
    return target.empty() ? std::nullopt : std::optional<std::string>(std::move(target));
}

template <typename Cache>
static dfcn::TranslationResult cache_native_display_translation(Cache &cache, size_t &bytes,
        const std::string &key, const std::vector<int> &source_colors,
        const std::vector<int> &target_colors, dfcn::TranslationResult result, bool cacheable) {
    result.resource_revision = RULESETS.resource_revision();
    if (result.usable()) {
        result.consumed = result.source.size();
        result.policy = dfcn::TranslationPolicy::Display;
    }
    if (!cacheable || !key.starts_with(std::to_string(native_identity_translation_context()) + '\x1f'))
        return result;
    typename Cache::mapped_type entry{source_colors, target_colors, result};
    entry.bytes = key.size() + entry.result.source.capacity() + entry.result.target.capacity() +
        entry.result.origins.capacity() * sizeof(size_t) +
        entry.result.fragments.capacity() * sizeof(dfcn::TranslationFragment) +
        (entry.source_colors.capacity() + entry.target_colors.capacity()) * sizeof(int) +
        sizeof(entry) + 5 * sizeof(void *);
    constexpr size_t maximum_entries = 1024, maximum_bytes = 8 * 1024 * 1024;
    if (entry.bytes <= maximum_bytes) {
        if (const auto previous = cache.find(key); previous != cache.end()) {
            bytes -= previous->second.bytes;
            cache.erase(previous);
        }
        if (cache.size() >= maximum_entries || bytes > maximum_bytes - entry.bytes) {
            cache.clear();
            bytes = 0;
        }
        bytes += entry.bytes;
        cache.emplace(key, std::move(entry));
    }
    return result;
}

std::optional<std::string> Overlay::translate_help_paragraph(
        std::string_view raw_source, const std::vector<int> &raw_foregrounds,
        std::vector<int> &target_foregrounds, bool ui_message, int required_rule,
        bool literal_only) const {
    target_foregrounds.clear();
    if (raw_source.empty() || raw_source.size() != raw_foregrounds.size()) return std::nullopt;
    dfcn::TranslationWorkScope work;
    refresh_native_display_translation_context();
    const auto context = native_identity_translation_context();
    std::string cache_key = std::to_string(context) + '\x1f' +
        std::string(ui_message ? "strict-ui-message:" : "strict-help:") +
        std::to_string(required_rule) + ":" + (literal_only ? "1:" : "0:");
    cache_key.push_back(gps_ ? '\x01' : '\0');
    if (gps_) cache_key.append(reinterpret_cast<const char *>(gps_->uccolor), sizeof(gps_->uccolor));
    cache_key.push_back('\x1f');
    cache_key.append(raw_source);
    if (const auto found = native_display_translation_cache_.find(cache_key);
            found != native_display_translation_cache_.end() &&
            found->second.result.resource_revision == RULESETS.resource_revision() &&
            found->second.source_colors == raw_foregrounds) {
        target_foregrounds = found->second.target_colors;
        return found->second.result.strict_target();
    }
    // Typed paragraph results cannot outlive their native owner, but all
    // callers resolving this one complete record share the same fields.
    // Keep their completed attempts (including misses) in that work only,
    // rather than rerunning the suffix matcher from speech, announcement
    // and display fallbacks for the identical span and palette.
    struct WorkColors {
        std::unordered_map<std::string, std::vector<int>> entries;
    };
    static const unsigned char work_colors_tag = 0;
    auto *state = dfcn::active_translation_work;
    auto &saved_colors = state->parser_sessions[&work_colors_tag];
    if (!saved_colors) saved_colors = std::make_shared<WorkColors>();
    const auto colors = std::static_pointer_cast<WorkColors>(saved_colors);
    std::string work_key = "help-paragraph\x1f";
    const auto owner = reinterpret_cast<uintptr_t>(this);
    const auto revision = RULESETS.resource_revision();
    const auto source_size = raw_source.size();
    work_key.append(reinterpret_cast<const char *>(&owner), sizeof(owner));
    work_key.append(reinterpret_cast<const char *>(&revision), sizeof(revision));
    work_key.append(reinterpret_cast<const char *>(&source_size), sizeof(source_size));
    work_key.append(cache_key);
    work_key.append(reinterpret_cast<const char *>(raw_foregrounds.data()),
        raw_foregrounds.size() * sizeof(int));
    if (const auto completed = state->memo.find(work_key); completed != state->memo.end()) {
        dfcn::translation_work_step();
        if (const auto found = colors->entries.find(work_key); found != colors->entries.end())
            target_foregrounds = found->second;
        return completed->second;
    }
    return dfcn::translation_work_memo(work_key, [&]() -> std::optional<std::string> {
    bool cacheable = false;
    const auto target = translate_help_paragraph_uncached(raw_source, raw_foregrounds,
        target_foregrounds, ui_message, required_rule, literal_only, cacheable);
    // A thrown work limit leaves this wrapper before publication; neither a
    // limited parse nor a context-dependent typed miss becomes a strict hit.
    if (cacheable && !dfcn::translation_work_exhausted()) {
        dfcn::TranslationResult result;
        result.source.assign(raw_source);
        if (target) {
            result.status = dfcn::TranslationStatus::Translated;
            result.target = *target;
        }
        cache_native_display_translation(native_display_translation_cache_,
            native_display_translation_cache_bytes_, cache_key, raw_foregrounds,
            target_foregrounds, std::move(result));
    }
    colors->entries.insert_or_assign(work_key, target_foregrounds);
    return target;
    });
}

dfcn::TranslationResult Overlay::translate_help_paragraph_result(
        std::string_view raw_source, const std::vector<int> &raw_foregrounds,
        std::vector<int> &target_foregrounds, bool ui_message, int required_rule) const {
    target_foregrounds.clear();
    if (raw_source.empty() || raw_source.size() != raw_foregrounds.size()) return {};
    refresh_native_display_translation_context();
    const auto context = native_identity_translation_context();
    const std::string cache_key = std::to_string(context) + '\x1f' +
        std::string(ui_message ? "ui-message:" : "help:") +
        std::to_string(required_rule) + ":" + std::string(raw_source);
    // Identical visitor text can refer to different buildings in another
    // visitor's travel log. Only the per-record translation memo is shared.
    const bool cacheable = !ui_message ||
        !catalog_literal_end(raw_source, 0, "This visitor has come ", false);
    if (const auto found = native_display_translation_cache_.find(cache_key);
            cacheable && found != native_display_translation_cache_.end() &&
            found->second.result.resource_revision == RULESETS.resource_revision() &&
            found->second.source_colors == raw_foregrounds) {
        target_foregrounds = found->second.target_colors;
        return found->second.result;
    }
    dfcn::TranslationWorkScope budget;
    const auto publish = [&](dfcn::TranslationResult result) {
        if (budget.exhausted()) {
            if (!budget.owns_budget()) dfcn::translation_work_step();
            result = preserve_native_translation(raw_source, "help-paragraph", false,
                dfcn::TranslationStatus::WorkLimited);
            target_foregrounds.clear();
            for (size_t at = 0; at < result.target.size(); ++at)
                if ((static_cast<unsigned char>(result.target[at]) & 0xc0) != 0x80)
                    target_foregrounds.push_back(raw_foregrounds[
                        result.origins[at] < raw_source.size() ? result.origins[at] : 0]);
        }
        result.owner = ui_message ? "native-ui-message" : "native-help-document";
        return cache_native_display_translation(native_display_translation_cache_,
            native_display_translation_cache_bytes_, cache_key, raw_foregrounds, target_foregrounds,
            std::move(result), cacheable);
    };
    try {
        if (const auto complete = translate_help_paragraph(raw_source, raw_foregrounds,
                target_foregrounds, ui_message, required_rule)) {
            auto result = dfcn::TranslationResult::translated(raw_source, *complete, "help-paragraph");
            result.owner = ui_message ? "native-ui-message" : "native-help-document";
            result.resource_revision = RULESETS.resource_revision();
            return publish(std::move(result));
        }
    } catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        target_foregrounds.clear();
        auto result = preserve_native_translation(raw_source, "help-paragraph", false,
            dfcn::TranslationStatus::WorkLimited);
        for (size_t at = 0; at < result.target.size(); ++at)
            if ((static_cast<unsigned char>(result.target[at]) & 0xc0) != 0x80)
                target_foregrounds.push_back(raw_foregrounds[result.origins[at] < raw_source.size() ? result.origins[at] : 0]);
        return publish(std::move(result));
    }
    std::vector<size_t> origins;
    const auto source = normalize_utterance(raw_source, &origins);
    if (source.empty() || source.size() != origins.size()) return {};
    // Display fallback has the same mandatory catalog literals as strict
    // matching. Partial typed fields cannot make an absent literal match.
    std::vector<int> candidate_templates;
    if (required_rule >= 0) {
        if (prose_template_member(required_rule, ui_message))
            candidate_templates.push_back(required_rule);
    } else if (ui_message) {
        for (int index : ui_message_anchors_.candidates(compact_ui_message_literal(source)))
            candidate_templates.push_back(ui_message_template_probes_[index].index);
    } else candidate_templates = help_template_anchors_.candidates(compact_ui_message_literal(source));
    const auto &display_templates = candidate_templates;
    std::optional<dfcn::TranslationResult> best;
    const Rule *best_rule = nullptr;
    std::vector<std::pair<size_t, size_t>> best_ranges;
    size_t best_literals = 0;
    try {
        for (int index : display_templates) {
            if (required_rule >= 0 && index != required_rule) continue;
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.template_kinds.empty()) continue;
            translation_work_step();
            std::vector<std::string> captures;
            std::vector<std::pair<size_t, size_t>> ranges;
            if (!match_catalog_template(rule, source, 0, captures, ranges, nullptr, true, true)) continue;
            // Feed the original field spans to the display compositor. Its
            // shared origins and authored-name state survive normalization.
            for (size_t at = 0; at < captures.size(); ++at) {
                const auto [begin, end] = ranges[at];
                if (end <= begin || end > origins.size()) continue;
                captures[at] = raw_source.substr(origins[begin], origins[end - 1] + 1 - origins[begin]);
            }
            auto candidate = translate_template_captures_display(rule, captures, raw_source);
            if (!candidate.usable()) continue;
            size_t literals = 0;
            for (const auto &literal : rule.template_literals) literals += literal.size();
            if (!best || literals > best_literals) {
                best = std::move(candidate);
                best_literals = literals;
                best_rule = &rule;
                best_ranges.clear();
                for (const auto &[begin, end] : ranges)
                    best_ranges.emplace_back(origins[begin], origins[end - 1] + 1);
            }
        }
    } catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        // A previously ended complete candidate is a usable independent
        // result; never publish an in-progress capture or generated string.
        if (!best) best = preserve_native_translation(raw_source, "help-paragraph", false,
            dfcn::TranslationStatus::WorkLimited);
    }
    if (best) {
        best->source.assign(raw_source);
        best->owner = ui_message ? "native-ui-message" : "native-help-document";
        best->resource_revision = RULESETS.resource_revision();
        for (size_t at = 0; at < best->target.size(); ++at) {
            if ((static_cast<unsigned char>(best->target[at]) & 0xc0) == 0x80) continue;
            const size_t origin = at < best->origins.size() ? best->origins[at] : std::string::npos;
            size_t source_at = origin < raw_source.size() ? origin : 0;
            if (origin == std::string::npos)
                for (const auto &fragment : best->fragments)
                    if (fragment.target_begin <= at && at < fragment.target_end &&
                            fragment.source_end > fragment.source_begin && fragment.source_begin < raw_source.size()) {
                        source_at = fragment.source_begin;
                        break;
                    }
            target_foregrounds.push_back(raw_foregrounds[source_at]);
        }
        if (best_rule && !best_rule->help_target_palettes.empty() && gps_) {
            // Keep the same explicit catalog palettes as the strict output
            // pass. Field fragments supply their output extents even after
            // template reordering; never recover captures by text searching.
            std::vector<std::pair<size_t, size_t>> output_ranges(best_ranges.size(),
                {std::string::npos, 0});
            for (size_t field = 0; field < best_ranges.size(); ++field)
                for (const auto &fragment : best->fragments)
                    if (fragment.source_end > fragment.source_begin &&
                            fragment.source_begin >= best_ranges[field].first &&
                            fragment.source_end <= best_ranges[field].second) {
                        output_ranges[field].first = std::min(output_ranges[field].first, fragment.target_begin);
                        output_ranges[field].second = std::max(output_ranges[field].second, fragment.target_end);
                    }
            size_t output_byte = 0, output_glyph = 0, template_glyph = 0, capture = 0;
            bool valid = true;
            for (size_t byte = 0; byte < best_rule->target.size() && valid;) {
                const int palette = template_glyph < best_rule->help_target_palettes.size()
                    ? best_rule->help_target_palettes[template_glyph] : -1;
                size_t output_end = output_byte + 1;
                if (best_rule->target[byte] == '{') {
                    const size_t close = best_rule->target.find('}', byte);
                    if (close == std::string::npos || capture >= best_rule->target_capture_order.size()) break;
                    const size_t field = best_rule->target_capture_order[capture++];
                    if (field >= output_ranges.size() || output_ranges[field].first != output_byte) break;
                    output_end = output_ranges[field].second;
                    template_glyph += close + 1 - byte;
                    byte = close + 1;
                } else {
                    ++byte;
                    while (byte < best_rule->target.size() &&
                            (static_cast<unsigned char>(best_rule->target[byte]) & 0xc0) == 0x80) {
                        ++byte; ++output_end;
                    }
                    ++template_glyph;
                }
                if (output_end > best->target.size()) break;
                for (; output_byte < output_end; ++output_byte) {
                    if ((static_cast<unsigned char>(best->target[output_byte]) & 0xc0) == 0x80) continue;
                    if (output_glyph >= target_foregrounds.size()) { valid = false; break; }
                    if (palette >= 0) target_foregrounds[output_glyph] =
                        (gps_->uccolor[palette][0] << 16) | (gps_->uccolor[palette][1] << 8) |
                        gps_->uccolor[palette][2];
                    ++output_glyph;
                }
            }
        }
        return publish(std::move(*best));
    }
    if (required_rule >= 0) return {};
    // Catalog sentences themselves prove constructor boundaries. Punctuation
    // merely bounds candidate starts; quoted names, bracketed keys and an
    // unknown sentence without a complete catalog neighbor stay intact.
    const auto &catalog = ui_message ? ui_message_trie_ : help_trie_;
    struct LiteralSpan { size_t begin, end; int rule; };
    std::vector<LiteralSpan> literals;
    bool quoted = false;
    int brackets = 0, parentheses = 0;
    for (size_t begin = 0; begin < source.size(); ++begin) {
        const char ch = source[begin];
        if (ch == '"' || ch == '`') quoted = !quoted;
        if (!quoted) {
            if (ch == '[') ++brackets;
            else if (ch == ']' && brackets) --brackets;
            if (ch == '(') ++parentheses;
            else if (ch == ')' && parentheses) --parentheses;
        }
        if (quoted || brackets || parentheses || ch == ' ' || catalog.size() <= 1) continue;
        const bool beginning = begin == 0 || (begin >= 2 && source[begin - 1] == ' ' &&
            std::string_view(".!?").find(source[begin - 2]) != std::string_view::npos);
        if (!beginning) continue;
        int node = 0;
        std::optional<LiteralSpan> found;
        for (size_t end = begin; end < source.size(); ++end) {
            if (source[end] == ' ') continue;
            const auto next = catalog[node].next.find(static_cast<unsigned char>(source[end]));
            if (next == catalog[node].next.end()) break;
            node = next->second;
            const int index = catalog[node].rule;
            if (index < 0 || (end + 1 < source.size() && source[end + 1] != ' ') ||
                    rules_[static_cast<size_t>(index)].source.empty() ||
                    std::string_view(".!?").find(rules_[static_cast<size_t>(index)].source.back()) ==
                        std::string_view::npos) continue;
            found = LiteralSpan{begin, end + 1, index};
        }
        if (found) {
            literals.push_back(*found);
            begin = found->end - 1;
        }
    }
    dfcn::TranslationResult result;
    result.owner = ui_message ? "native-ui-message" : "native-help-document";
    result.kind = "help-paragraph";
    size_t cursor = 0;
    const auto append_preserved = [&](size_t begin, size_t end,
            dfcn::TranslationStatus status = dfcn::TranslationStatus::Untranslated) {
        if (end <= begin) return;
        auto child = preserve_native_translation(raw_source.substr(begin, end - begin), "help-source-span", false, status);
        result.append(child, begin);
        for (size_t at = 0; at < child.target.size(); ++at)
            if ((static_cast<unsigned char>(child.target[at]) & 0xc0) != 0x80)
                target_foregrounds.push_back(raw_foregrounds[begin +
                    (child.origins[at] < child.source.size() ? child.origins[at] : 0)]);
    };
    bool work_limited = false;
    for (const auto &literal : literals) {
        const size_t begin = origins[literal.begin], end = origins[literal.end - 1] + 1;
        append_preserved(cursor, begin);
        const auto native = raw_source.substr(begin, end - begin);
        std::vector<int> colors;
        const std::vector<int> native_colors(raw_foregrounds.begin() + begin, raw_foregrounds.begin() + end);
        std::optional<std::string> translated;
        if (!work_limited) {
            try { translated = translate_help_paragraph(native, native_colors, colors,
                ui_message, literal.rule, true); }
            catch (const dfcn::TranslationWorkLimit &) {
                if (!budget.owns_budget()) throw;
                work_limited = true;
            }
        }
        if (translated) {
            result.append(dfcn::TranslationResult::translated(native, *translated, "help-catalog-sentence"), begin);
            target_foregrounds.insert(target_foregrounds.end(), colors.begin(), colors.end());
        } else append_preserved(begin, end, work_limited ?
            dfcn::TranslationStatus::WorkLimited : dfcn::TranslationStatus::Untranslated);
        cursor = end;
    }
    append_preserved(cursor, raw_source.size(), work_limited ?
        dfcn::TranslationStatus::WorkLimited : dfcn::TranslationStatus::Untranslated);
    result.source.assign(raw_source);
    result.resource_revision = RULESETS.resource_revision();
    return publish(std::move(result));
}
