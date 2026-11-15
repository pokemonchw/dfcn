// The native sheet owns the input grid, page lifetime and captured sources.
// Preserve the complete character productions without entering the shared
// world, fortress-management, embark, history or map matching pipeline.
std::vector<Match> Overlay::find_native_character_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || !native_character_foreground_view(gps_) ||
            gps_->dimx <= 0 || gps_->dimx > 1000 ||
            gps_->dimy <= 0 || gps_->dimy > 1000 || trie_.empty()) return result;
    const auto &panel = g_native_character_panel;
    const int sheet_left = static_cast<int>(std::clamp<int64_t>(panel.x, 0, gps_->dimx));
    const int sheet_top = static_cast<int>(std::clamp<int64_t>(panel.y, 0, gps_->dimy));
    const int sheet_right = static_cast<int>(std::clamp<int64_t>(
        int64_t(panel.x) + panel.w, sheet_left, gps_->dimx));
    const int sheet_bottom = static_cast<int>(std::clamp<int64_t>(
        int64_t(panel.y) + panel.h, sheet_top, gps_->dimy));
    if (sheet_left == sheet_right || sheet_top == sheet_bottom) return result;
    // Preserve native absolute coordinates and column stride. Only the
    // producer-owned pane supplies source cells or row-discovery candidates;
    // the surrounding full-size strings remain blank addressable storage.
    const auto read_sheet_char = [&](int x, int y) -> unsigned char {
        return x >= sheet_left && x < sheet_right && y >= sheet_top && y < sheet_bottom
            ? visible_char_at(x, y) : 0;
    };
    constexpr int only_y = -1;
    const unsigned char *screen_override = nullptr;
    const std::optional<NativeTextCard> map_hover;
    NativeCapturedTextReadScope captured_text_reads;
    CellReadCacheScope cell_reads(*this);
    FortressRosterTranslationScope roster_translations(gps_);
    std::vector<std::string> screen_rows(static_cast<size_t>(gps_->dimy),
        std::string(static_cast<size_t>(gps_->dimx), ' '));
    for (int y = sheet_top; y < sheet_bottom; ++y)
        for (int x = sheet_left; x < sheet_right; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) screen_rows[y][x] = static_cast<char>(cell[0]);
        }
    const auto background_rows = screen_rows;
    const auto read_row = [&](int y) {
        return y >= sheet_top && y < sheet_bottom ? background_rows[y]
            : std::string(static_cast<size_t>(gps_->dimx), ' ');
    };
    const auto character_overview_rows = capture_character_overview_rows();
    const auto character_group_rows = capture_character_group_rows();
    std::vector<Match> untranslated_help_rows;
    const auto clipped_template_captions = captured_clipped_captions();
    const std::vector<Match> native_knowledge = native_knowledge_matches(-1, {});
    for (const auto &match : native_knowledge) {
        if (match.x >= sheet_left && match.y >= sheet_top && match.y < sheet_bottom &&
                match.length >= 0 && match.length <= sheet_right - match.x)
            std::fill_n(screen_rows[match.y].begin() + match.x, match.length, ' ');
    }
    const auto text_input_regions = native_text_input_regions(*gps_, screen_rows, nullptr);
    std::vector<Match> text_input_utf8;
    for (const auto &region : text_input_regions) {
        const size_t first = text_input_utf8.size();
        append_direct_utf8_matches(screen_rows[region.y].substr(region.x, region.w),
            region.y, text_input_utf8);
        for (size_t i = first; i < text_input_utf8.size(); ++i) text_input_utf8[i].x += region.x;
        std::fill_n(screen_rows[region.y].begin() + region.x, region.w, ' ');
    }
    // Proven authored squad aliases keep their native spelling, including
    // English, digits and Chinese. This reads only this layer's draw records.
    append_fortress_squad_alias_rows(screen_rows, result, only_y, nullptr);
    int room_tabs_y = -1;
    for (int y = sheet_top; y < sheet_bottom && room_tabs_y < 0; ++y)
        if (!character_information_tab_fields(background_rows[y]).empty()) room_tabs_y = y;
    append_character_room_fields(background_rows, screen_rows, result, room_tabs_y, only_y);
    append_character_kill_rows(screen_rows, result, only_y);
    append_health_history_rows(screen_rows, result, only_y);
    append_character_relation_rows(screen_rows, result, only_y);
    append_character_work_detail_rows(screen_rows, result, only_y);
    append_character_work_animal_rows(screen_rows, result, only_y);

    const auto finish_matches = [&]() {
        for (const auto &row : character_overview_rows)
            compose_native_text_rows(row, result, only_y, kCharacterOverviewRowRule);
        for (const auto &row : character_group_rows) {
            append_character_group_field(row, result, only_y);
            append_character_group_role(row, result, only_y);
            compose_native_text_rows(row, result, only_y, kCharacterGroupRowRule);
        }
        std::erase_if(untranslated_help_rows, [&](const Match &claim) {
            if (claim.length <= 0 || claim.source.size() != static_cast<size_t>(claim.length))
                return false;
            bool ink = false;
            for (size_t offset = 0; offset < claim.source.size(); ++offset) {
                if (claim.source[offset] == ' ') continue;
                ink = true;
                const int x = claim.x + static_cast<int>(offset);
                if (std::none_of(result.begin(), result.end(), [&](const Match &owned) {
                        if (owned.native_help_source_only || owned.y != claim.y || owned.length <= 0 ||
                                (owned.rule != kCharacterOverviewQuoteRule &&
                                 owned.rule != kNativeKnowledgeDocumentRule) ||
                                x < owned.x || x >= owned.x + owned.length) return false;
                        const auto at = static_cast<size_t>(x - owned.x);
                        return at < owned.source.size() && owned.source[at] == claim.source[offset];
                    })) return false;
            }
            return ink;
        });
        std::erase_if(result, [&](const Match &match) {
            return std::any_of(untranslated_help_rows.begin(), untranslated_help_rows.end(),
                [&](const Match &claim) {
                    return match.y == claim.y && match.x < claim.x + claim.length &&
                        claim.x < match.x + match.length;
                });
        });
        result.insert(result.end(), untranslated_help_rows.begin(), untranslated_help_rows.end());
        if (!native_knowledge.empty()) {
            std::erase_if(result, [&](const Match &match) {
                return std::any_of(native_knowledge.begin(), native_knowledge.end(), [&](const Match &owned) {
                    return owned.length > 0 && match.y == owned.y && match.x < owned.x + owned.length &&
                        owned.x < match.x + match.length;
                });
            });
            result.insert(result.end(), native_knowledge.begin(), native_knowledge.end());
        }
        std::erase_if(result, [&](const Match &match) {
            return std::any_of(text_input_regions.begin(), text_input_regions.end(),
                [&](const SDL_Rect &region) {
                    return match.y == region.y && match.x < region.x + region.w &&
                        region.x < match.x + match.length;
                });
        });
        result.insert(result.end(), text_input_utf8.begin(), text_input_utf8.end());
        return result;
    };
    // Character information -> Health renders one wound heading's side,
    // orientation, body-part noun and tissue in independently positioned text
    // fields. Reconstruct only fields from the same physical row so the heading
    // becomes a compact `左后爪·皮肤`. The structured-layout pass below marks
    // the result as non-prose, which is essential: otherwise the generic
    // multiline reflow concatenates headings from several later rows.
    // Direction words remain scoped to the distinctive five-tab health row
    // because translating them globally would corrupt key identifiers and
    // ordinary prose elsewhere in the UI.
    auto is_character_health_tabs_row = [](const std::string &probe) {
        return (probe.find("Status") != std::string::npos ||
                probe.find("Overview") != std::string::npos) &&
            probe.find("Wounds") != std::string::npos &&
            probe.find("Treatment") != std::string::npos &&
            probe.find("History") != std::string::npos &&
            probe.find("Description") != std::string::npos;
    };
    int character_health_tabs_y = -1;
    std::string character_health_tabs;
    for (int row_y = sheet_top; row_y < sheet_bottom; ++row_y) {
        if (is_character_health_tabs_row(
                screen_rows[static_cast<size_t>(row_y)])) {
            character_health_tabs_y = row_y;
            character_health_tabs = screen_rows[static_cast<size_t>(row_y)];
            break;
        }
    }
    // Immediate suppression scans one native layer at a time. The health tab
    // captions and wound fields are not guaranteed to share that layer, so a
    // raw-layer scan can otherwise draw the reconstructed Chinese body part
    // without hiding every independently rendered source fragment.
    if (character_health_tabs_y < 0 && screen_override) {
        for (int row_y = sheet_top; row_y < sheet_bottom; ++row_y) {
            std::string composed(static_cast<size_t>(gps_->dimx), ' ');
            for (int x = sheet_left; x < sheet_right; ++x) {
                const unsigned char ch = visible_char_at(x, row_y);
                composed[static_cast<size_t>(x)] = ch ? static_cast<char>(ch) : ' ';
            }
            if (!is_character_health_tabs_row(composed)) continue;
            character_health_tabs_y = row_y;
            character_health_tabs = std::move(composed);
            break;
        }
    }
    // Shared character tabs anchor relations, inventory and the overview.
    // Inventory capture below owns complete contaminant/body-part records,
    // including those whose captions have no picture or action controls.
    auto is_character_information_tabs_row = [](const std::string &probe) {
        return !character_information_tab_fields(probe).empty();
    };
    auto find_character_information_tabs = [&](auto read_character) {
        for (int row_y = sheet_top; row_y < sheet_bottom; ++row_y) {
            std::string probe(static_cast<size_t>(gps_->dimx), ' ');
            for (int x = sheet_left; x < sheet_right; ++x) {
                const unsigned char ch = read_character(x, row_y);
                probe[static_cast<size_t>(x)] = ch ? static_cast<char>(ch) : ' ';
            }
            if (is_character_information_tabs_row(probe)) return row_y;
        }
        return -1;
    };
    int character_items_tabs_y = find_character_information_tabs(
        [&](int x, int y) {
            return static_cast<unsigned char>(
                screen_rows[static_cast<size_t>(y)][static_cast<size_t>(x)]);
        });
    if (character_items_tabs_y < 0 && screen_override) {
        character_items_tabs_y = find_character_information_tabs(
            [&](int x, int y) {
                return static_cast<unsigned char>(background_rows[
                    static_cast<size_t>(y)][static_cast<size_t>(x)]);
            });
    }

    // Relations may show only a native given name (notably for deities).
    // The generic name heuristic intentionally rejects short ASCII labels;
    // do not relax it globally and turn UI words into phonetic names. Here
    // the selected tab, native language vocabulary and following relationship
    // field together establish the name's role, even when it has no surname.
    // Claim it during matching, including per-layer immediate suppression,
    // rather than inventing a translation after English glyphs were drawn.
    if (character_items_tabs_y >= 0) {
        int relations_x = -1;
        if (character_social_tab_selected(character_items_tabs_y, "Relations")) {
            for (int y = character_items_tabs_y - 1; y >= sheet_top; --y) {
                const auto fields = character_social_tab_fields(background_rows[static_cast<size_t>(y)]);
                if (!fields.empty()) { relations_x = fields.front().start; break; }
            }
        }
        if (relations_x >= 0) {
            const auto frame = find_ascii_panel_frame(
                relations_x, relations_x + static_cast<int>(std::string_view("Relations").size()),
                character_items_tabs_y, sheet_right, sheet_bottom, read_sheet_char);
            const int left = frame ? std::max(sheet_left, frame->left + 1) : relations_x;
            const int right = frame ? std::min(sheet_right, frame->right) : sheet_right;
            const int bottom = frame ? std::min(sheet_bottom, frame->bottom) : sheet_bottom;
            for (int y = character_items_tabs_y + 1; y < bottom; ++y) {
                for (const LogicalTextField &field : split_text_fields(
                        screen_rows[static_cast<size_t>(y)])) {
                    if (field.start < left || field.end > right ||
                        field.text.empty() || field.text.size() > 48 ||
                        field.text.find(' ') != std::string::npos ||
                        !native_name_language_masks_.contains(lower_native_name(field.text))) continue;
                    const unsigned char initial =
                        static_cast<unsigned char>(field.text.front());
                    if (!((initial >= 'A' && initial <= 'Z') ||
                          is_cp437_latin_letter_byte(initial))) continue;
                    bool top = false;
                    (void)cell_at(field.start, y, &top);
                    const uint32_t *flags = top
                        ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                    const size_t tile = static_cast<size_t>(field.start) * gps_->dimy + y;
                    // A top-half caption repeats its source on the next grid
                    // row; the relationship starts after BOTH native halves.
                    const int detail_y = y + (flags && (flags[tile] & (1u << 3)) ? 2 : 1);
                    if (detail_y >= bottom) continue;
                    const auto detail = split_text_fields(
                        background_rows[static_cast<size_t>(detail_y)]);
                    const bool paired = std::any_of(detail.begin(), detail.end(),
                        [&](const LogicalTextField &other) {
                            return other.start == field.start && other.end <= right &&
                                exact_literal_translation(other.text).has_value();
                        });
                    if (!paired) continue;
                    const auto target = translate_procedural_fragment(field.text, true);
                    if (!target || target->empty()) continue;
                    std::fill_n(screen_rows[static_cast<size_t>(y)].begin() + field.start,
                        field.end - field.start, ' ');
                    if (only_y < 0 || only_y == y)
                        result.push_back({field.start, y, field.end - field.start,
                            -2, *target, field.text});
                }
            }
        }
    }

    // Overview's footer is full-width prose (with or without a quoted
    // utterance), not another pair of summary cells. Resolve it before generic words, names and two-space
    // field splitting can claim any fragment. During glyph suppression the
    // renderer's graphical-copy bookkeeping is not a text source. It can
    // hide a quote's opening byte even while its native row is intact. Read
    // the current logical layers for the footer in both passes; its proven
    // viewport and foreground widget clips determine where it can draw.
    // Earlier semantic owners may already have reserved source bytes in
    // screen_rows. Read the intact native document with the same current
    // layer policy in every rendering mode.
    std::vector<std::string> quote_rows(static_cast<size_t>(gps_->dimy),
        std::string(static_cast<size_t>(gps_->dimx), ' '));
    auto footer_rows = quote_rows;
    int character_quote_tabs_y = -1;
    int character_footer_tabs_y = -1;
    const auto quote_settings = native_ui_settings();
    for (int y = sheet_top; y < sheet_bottom; ++y) {
        std::string &row = quote_rows[static_cast<size_t>(y)];
        for (int x = sheet_left; x < sheet_right; ++x) {
            bool top = false;
            const unsigned char *cell = cell_at(x, y, &top);
            const unsigned char native = cell ? cell[0] : 0;
            footer_rows[y][x] = native ? static_cast<char>(native) : ' ';
            const unsigned char ch = screen_override ||
                (quote_settings && quote_settings->classic) ? native : visible_char_at(x, y);
            row[static_cast<size_t>(x)] = ch ? static_cast<char>(ch) : ' ';
        }
        if (character_quote_tabs_y < 0 && is_character_information_tabs_row(row))
            character_quote_tabs_y = y;
        if (character_footer_tabs_y < 0 && is_character_information_tabs_row(footer_rows[y]))
            character_footer_tabs_y = y;
    }
    // Claim the entire quoted identity before generic word matching. Offices
    // can occupy their own rows, and separately drawn quotes can be padded
    // with spaces. Both raw-layer suppression and final layout need this
    // same composed span, including its punctuation.
    std::vector<std::string> header_rows(static_cast<size_t>(gps_->dimy),
        std::string(static_cast<size_t>(gps_->dimx), ' '));
    int header_tabs_y = -1;
    const auto header_settings = native_ui_settings();
    // Earlier clipped-name owners have already blanked screen_rows, including
    // both halves of a graphical caption. Header structure must come from
    // the current native source, not that mutable list of unclaimed bytes.
    // Keep the same layer/occlusion policy as header layout: immediate glyph
    // suppression and classic atlas text use the current logical composite;
    // graphical Present still respects actual foreground occlusion.
    for (int y = sheet_top; y < sheet_bottom; ++y) {
        for (int x = sheet_left; x < sheet_right; ++x) {
            unsigned char ch = 0;
            if (screen_override || (header_settings && header_settings->classic)) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                ch = cell ? cell[0] : 0;
            } else ch = visible_char_at(x, y);
            header_rows[y][x] = ch ? ch : ' ';
        }
        if (header_tabs_y < 0 && !character_information_tab_fields(header_rows[y]).empty())
            header_tabs_y = y;
    }
    append_character_header(header_rows, screen_rows, result, header_tabs_y, only_y);
    append_character_overview_footer(footer_rows, screen_rows, result,
        character_footer_tabs_y, only_y, screen_override != nullptr);
    // Footer ownership needs the intact age/context row first. Summary
    // composition then reserves each column before generic field matching.
    append_visitor_overview_paragraphs(character_overview_rows, screen_rows,
        result, untranslated_help_rows, only_y);
    append_character_overview_identities(character_overview_rows, screen_rows, result, only_y);
    auto is_contaminant_marker = [](std::string_view source) {
        return source == "spatter" || source == "covering" ||
            source.ends_with(" spatter") || source.ends_with(" covering");
    };
    // Inventory records own complete names and optional location lines.
    // Graphical records are bounded by their current picture/action controls;
    // lists without action controls pair body-part rows with item names.
    // Complete strapped locations also identify themselves when a named
    // weapon is outside the item grammar. Both retain raw source spans.
    std::vector<std::vector<Match>> inventory_rows(
        static_cast<size_t>(gps_->dimy));
    if (config_.compositional_rules) {
        for (Match &match : capture_inventory_rows(
                 screen_rows, quote_rows, character_quote_tabs_y)) {
            inventory_rows[static_cast<size_t>(match.y)].push_back(std::move(match));
        }
    }
    if (character_quote_tabs_y >= 0 && character_health_tabs_y < 0 &&
        config_.compositional_rules) {
        const std::string &tabs =
            quote_rows[static_cast<size_t>(character_quote_tabs_y)];
        const auto inventory_tabs = character_information_tab_fields(tabs);
        auto inventory_frame = inventory_tabs.empty() ? std::optional<AsciiPanelFrame>{}
            : find_graphical_character_panel_frame(*gps_, inventory_tabs.front().start,
                inventory_tabs.back().end, character_quote_tabs_y);
        if (!inventory_frame && !inventory_tabs.empty()) {
            inventory_frame = find_ascii_panel_frame(inventory_tabs.front().start,
                inventory_tabs.back().end, character_quote_tabs_y, sheet_right, sheet_bottom,
                [&](int x, int y) {
                    return static_cast<unsigned char>(quote_rows[y][x]);
                });
        }
        const int inventory_right = inventory_frame
            ? std::min(sheet_right, inventory_frame->right) : sheet_right;
        const int inventory_bottom = inventory_frame
            ? std::min(sheet_bottom, inventory_frame->bottom) : sheet_bottom;
        const size_t overview_at = tabs.find("Overview");
        const size_t items_at = tabs.find("Items");
        int panel_left = sheet_right;
        if (overview_at != std::string::npos && items_at != std::string::npos &&
            items_at > overview_at) {
            const int overview_centre = static_cast<int>(overview_at) * 2 + 8;
            const int items_centre = static_cast<int>(items_at) * 2 + 5;
            panel_left = std::max(sheet_left,
                (overview_centre * 3 - items_centre) / 4);
        }
        auto location_source = [](std::string_view source) {
            // Includes non-dwarven wearers. Direction/ordinal prefixes are
            // validated by the complete body-part grammar, not translated as
            // unrelated words (notably `fifth left rear toe`).
            static constexpr std::string_view parts[] = {
                "body", "head", "neck", "hand", "foot", "arm", "leg",
                "shoulder", "elbow", "wrist", "finger", "thumb", "hip",
                "knee", "ankle", "toe", "paw", "hoof", "wing", "tail",
                "flipper", "ear", "nose", "mouth", "back", "torso",
            };
            return std::any_of(std::begin(parts), std::end(parts),
                [source](std::string_view part) {
                    return source == part ||
                        (source.size() > part.size() && source.ends_with(part) &&
                         source[source.size() - part.size() - 1] == ' ');
                });
        };
        auto inventory_row = [&](const std::string &row, int y, bool location)
                -> std::optional<Match> {
            const auto fields = split_text_fields(row);
            std::optional<Match> best;
            for (size_t begin = 0; begin < fields.size(); ++begin) {
                if (fields[begin].start < panel_left) continue;
                std::string joined;
                for (size_t end = begin; end < fields.size(); ++end) {
                    if (fields[end].end > inventory_right) break;
                    if (end > begin) {
                        bool crosses_frame = false;
                        for (int x = fields[end - 1].end;
                             x < fields[end].start; ++x) {
                            crosses_frame = crosses_frame ||
                                is_cp437_box_separator(row, static_cast<size_t>(x));
                        }
                        if (crosses_frame) break;
                        joined.push_back(' ');
                    }
                    joined += fields[end].text;
                    const int width = fields[end].end - fields[begin].start;
                    if (best && width <= best->length) continue;
                    std::optional<std::string> translated;
                    if (location) {
                        const std::string folded = lower(joined);
                        if (!location_source(folded)) continue;
                        translated = translate_inventory_location(
                            joined, y, fields[begin].start);
                    } else {
                        const ItemDesignationText name = split_item_designation(joined);
                        if (location_source(lower(std::string(name.item))) ||
                            is_contaminant_marker(name.item)) continue;
                        // Prefer the complete creature-textile grammar. The
                        // generic captured-word fallback may know each token
                        // while still treating wool as a separate yarn noun.
                        translated = translate_arena_equipment_source_phrase(name.item);
                        // Supplying the complete source explicitly avoids the
                        // embark capture lookup and shares its material/noun
                        // compositor and bounded cache with this inventory.
                        if (!translated) {
                            translated = translate_embark_equipment_item(
                                name.item, y, fields[begin].start, name.item);
                        }
                        if (translated && !translated->empty()) {
                            *translated = name.prefix + *translated + name.suffix;
                        }
                    }
                    if (!translated || translated->empty() || *translated == joined)
                        continue;
                    best = Match{fields[begin].start, y, width,
                        location ? kCharacterInventoryLocationRule
                                 : kCharacterInventoryItemRule,
                        std::move(*translated), row.substr(fields[begin].start, width)};
                    best->layout_x = best->x;
                    best->layout_length = inventory_right - best->x;
                    best->layout_left = true;
                    best->layout_clip_right = inventory_right;
                }
            }
            return best;
        };
        for (int y = character_quote_tabs_y + 2; y < inventory_bottom; ++y) {
            auto &locations = inventory_rows[static_cast<size_t>(y)];
            auto &items = inventory_rows[static_cast<size_t>(y - 1)];
            if (!locations.empty()) continue;
            const auto context_location = inventory_row(
                quote_rows[static_cast<size_t>(y)], y, true);
            if (!context_location) continue;
            // Military uniforms include named weapons without Inspect
            // controls. Their complete strapped/body-part grammar is enough
            // to own the location, independently of the name above it. This
            // also admits both native half-text rows; bare body parts still
            // require the established item/location pair.
            const bool strapped = lower(context_location->source).starts_with("strapped to ");
            if (!strapped && !items.empty()) continue;
            auto location = inventory_row(screen_rows[static_cast<size_t>(y)], y, true);
            if (!location || location->x != context_location->x ||
                location->source != context_location->source) continue;
            auto item = items.empty() ? inventory_row(
                screen_rows[static_cast<size_t>(y - 1)], y - 1, false) : std::nullopt;
            if (!item && !strapped) continue;
            if (item) items.push_back(std::move(*item));
            locations.push_back(std::move(*location));
        }
    }
    // Needs are normally emitted as one logical row, but a generated deity
    // title can make the final entry wrap onto one or more immediately
    // following rows.  The continuation has no subject or focus state, so it
    // cannot be translated correctly on its own.  Reconstruct the finite
    // complete-needs grammar before the per-row matcher runs, then give every
    // physical row an authoritative span.  Only the first span draws the
    // complete Chinese sentence; the remaining spans exist solely to suppress
    // the native continuation glyphs.  Precomputing by row is also essential
    // for the immediate glyph hook, which rebuilds one whole-layer mask while
    // the game is issuing the individual character copies.
    std::vector<std::vector<Match>> reconstructed_need_rows(
        static_cast<size_t>(gps_->dimy));
    for (int start_y = sheet_top; start_y < sheet_bottom; ++start_y) {
        const std::vector<LogicalTextField> first_fields =
            split_text_fields(screen_rows[static_cast<size_t>(start_y)]);
        for (size_t begin = 0; begin < first_fields.size(); ++begin) {
            const LogicalTextField &first = first_fields[begin];
            if (!(first.text.starts_with("Overall,") ||
                  first.text == "He" || first.text == "She" || first.text == "It" ||
                  first.text.starts_with("He is ") ||
                  first.text.starts_with("She is ") ||
                  first.text.starts_with("It is "))) {
                continue;
            }

            struct NeedPhysicalSpan {
                int y = 0;
                int start = 0;
                int end = 0;
                std::string source;
            };
            std::vector<NeedPhysicalSpan> spans;
            std::string assembled;
            bool finished = false;
            // A needs line has a wide text box and current generated deity
            // names fit within at most three physical rows.  Keeping this
            // bound small prevents an incomplete/redrawing row from claiming
            // unrelated prose farther down the panel.
            const int final_y = std::min(sheet_bottom - 1, start_y + 2);
            for (int row_y = start_y; row_y <= final_y && !finished; ++row_y) {
                const std::vector<LogicalTextField> fields = row_y == start_y
                    ? first_fields
                    : split_text_fields(
                        screen_rows[static_cast<size_t>(row_y)]);
                size_t row_begin = begin;
                if (row_y != start_y) {
                    row_begin = fields.size();
                    for (size_t index = 0; index < fields.size(); ++index) {
                        if (std::abs(fields[index].start - first.start) <= 6) {
                            row_begin = index;
                            break;
                        }
                    }
                    // Wrapped prose continues on the next physical row at the
                    // same paragraph margin.  A blank row or a different
                    // column terminates this reconstruction attempt.
                    if (row_begin == fields.size()) break;
                }

                int row_end = fields[row_begin].end;
                bool found_period = false;
                for (size_t end = row_begin; end < fields.size(); ++end) {
                    if (!assembled.empty()) assembled.push_back(' ');
                    assembled += fields[end].text;
                    row_end = fields[end].end;
                    if (fields[end].text.ends_with('.')) {
                        found_period = true;
                        break;
                    }
                }
                spans.push_back({
                    row_y, fields[row_begin].start, row_end,
                    screen_rows[static_cast<size_t>(row_y)].substr(
                        static_cast<size_t>(fields[row_begin].start),
                        static_cast<size_t>(row_end - fields[row_begin].start)),
                });
                if (!found_period) continue;

                auto translated = translate_character_need_sentence(assembled);
                if (!translated || translated->empty()) break;

                int clear_left = sheet_right;
                int clear_right = 0;
                for (const NeedPhysicalSpan &span : spans) {
                    clear_left = std::min(clear_left, span.start);
                    clear_right = std::max(clear_right, span.end);
                }
                for (size_t span_index = 0;
                     span_index < spans.size(); ++span_index) {
                    const NeedPhysicalSpan &span = spans[span_index];
                    Match reconstructed{
                        span.start, span.y, span.end - span.start, -13,
                        span_index == 0 ? *translated : std::string{},
                        span_index == 0 ? assembled : span.source,
                    };
                    reconstructed.native_source = span.source;
                    if (span_index == 0) {
                        // Some of these independently issued strings bypass
                        // the ordinary per-cell glyph hook.  Clear foreground
                        // ink across the complete wrapped rectangle while
                        // preserving the dark graphical panel beneath it.
                        reconstructed.graphical_clear_x = clear_left;
                        reconstructed.graphical_clear_y = start_y;
                        reconstructed.graphical_clear_width =
                            std::max(1, clear_right - clear_left);
                        reconstructed.graphical_clear_height =
                            spans.back().y - start_y + 1;
                    }
                    reconstructed_need_rows[static_cast<size_t>(span.y)]
                        .push_back(std::move(reconstructed));
                }
                finished = true;
            }
            if (finished) break;
        }
    }
    // Exact captured item/location records and complete needs own their bytes
    // before generic UI words. Their source-only continuations stay attached
    // to the same record and cannot be interpreted as independent captions.
    const auto claim = [&](const Match &match) {
        if (match.x < sheet_left || match.y < sheet_top || match.y >= sheet_bottom ||
                match.length <= 0 || match.x > sheet_right ||
                match.length > sheet_right - match.x) return;
        auto &row = screen_rows[match.y];
        std::fill_n(row.begin() + match.x, match.length, ' ');
        result.push_back(match);
    };
    for (const auto &batch : inventory_rows)
        for (const auto &match : batch) claim(match);
    for (const auto &batch : reconstructed_need_rows)
        for (const auto &match : batch) claim(match);
    if (native_knowledge.empty())
        append_character_knowledge_matches(screen_rows, result, only_y, nullptr);
    append_character_skill_tab_matches(screen_rows, result, only_y);
#include "native_unit_identity_rows.inc"

    // Wound rows can split direction, anatomy and tissue into separate native
    // fields. Prefer the longest complete grammar, then claim remaining exact
    // fields, using the same anatomy translations as the shared matcher.
    for (int y = sheet_top; y < sheet_bottom; ++y) {
        const auto row = screen_rows[y];
        std::vector<Match> candidates;
        if (character_health_tabs_y >= 0 && y > character_health_tabs_y) {
            const std::vector<LogicalTextField> fields = split_text_fields(row);
            if (config_.compositional_rules) {
                for (size_t begin = 0; begin < fields.size(); ++begin) {
                    std::string joined;
                    // Numbered/multi-level owners plus tissue can exceed five
                    // native fields. The complete anatomy grammar, not a field
                    // count, decides where this heading ends on its own row.
                    for (size_t end = begin; end < fields.size(); ++end) {
                        if (!joined.empty()) joined.push_back(' ');
                        joined += fields[end].text;
                        if (end == begin ||
                            joined.find(',') == std::string::npos) {
                            continue;
                        }
                        auto translated = translate_compositional(joined);
                        if (!translated) continue;
                        Match anatomy{
                            fields[begin].start, y,
                            fields[end].end - fields[begin].start, -11,
                            std::move(*translated), joined,
                        };
                        anatomy.native_source = row.substr(static_cast<size_t>(anatomy.x),
                            static_cast<size_t>(anatomy.length));
                        candidates.push_back(std::move(anatomy));
                    }
                }
            }
            for (const LogicalTextField &field : fields) {
                std::string source = field.text;
                std::string semantic = source;
                bool trailing_comma = false;
                if (!semantic.empty() && semantic.back() == ',') {
                    semantic.pop_back();
                    while (!semantic.empty() && semantic.back() == ' ')
                        semantic.pop_back();
                    trailing_comma = true;
                }

                std::optional<std::string> translated;
                if (semantic == "left") translated = "左";
                else if (semantic == "right") translated = "右";
                else if (semantic == "front") translated = "前";
                else if (semantic == "rear") translated = "后";
                else if (config_.compositional_rules) {
                    translated = translate_compositional(source);
                    if (!translated && trailing_comma)
                        translated = translate_compositional(semantic);
                }
                if (!translated) translated = exact_literal_translation(semantic);
                if (!translated || translated->empty() || *translated == semantic)
                    continue;
                if (trailing_comma) *translated += "·";
                candidates.push_back({
                    field.start, y, field.end - field.start, -11,
                    std::move(*translated), std::move(source),
                });
            }
        }

        std::stable_sort(candidates.begin(), candidates.end(), [](const Match &left, const Match &right) {
            return left.length != right.length ? left.length > right.length : left.x < right.x;
        });
        for (const auto &candidate : candidates) {
            if (candidate.x < sheet_left || candidate.length <= 0 ||
                    candidate.length > sheet_right - candidate.x) continue;
            const auto &physical = candidate.native_source ? *candidate.native_source : candidate.source;
            if (physical.size() != static_cast<size_t>(candidate.length) ||
                    screen_rows[y].compare(candidate.x, physical.size(), physical) != 0) continue;
            claim(candidate);
        }
    }
    const auto append_setup_paragraph = [&](std::vector<Match> rows,
            std::string_view target, int clip_right = -1, int box_right = -1,
            const std::vector<int> &foregrounds = std::vector<int>{}) {
        return append_bounded_paragraph(std::move(rows), target, screen_rows, result,
            only_y, clip_right, box_right, foregrounds, false, -1, std::nullopt, {});
    };
#include "ui_messages.inc"
    append_limited_skill_matches(screen_rows, result, only_y, clipped_template_captions);
    append_native_info_grid_matches(screen_rows, result, only_y, true);

    // Preserve complete art-form, health-description and personality recovery
    // for native boxes constructed before this draw. Every viewport below is
    // read from the same private character grid and scoped paragraph sources.
    if (native_knowledge.empty()) {
    // Character information -> Skills -> Knowledge shows generated art-form
    // prose through a scrolling grid. The five-tab band identifies that
    // viewport; its visible rows locate the native draw, while the complete
    // pre-wrap std::string captured from game memory is the sole translation
    // input. This keeps semantics independent of window size and scroll state.
    auto is_character_skill_tabs_row = [](const std::string &probe) {
        return probe.find("Labor") != std::string::npos &&
            probe.find("Combat") != std::string::npos &&
            probe.find("Social") != std::string::npos &&
            probe.find("Other skills") != std::string::npos &&
            probe.find("Knowledge") != std::string::npos;
    };
    int character_skill_tabs_y = -1;
    int character_skill_tabs_bottom_y = -1;
    // These captions are often issued through separate graphical text calls,
    // so no single logical screen row necessarily contains all five strings.
    // The ordinary matcher has already reconstructed those calls into Match
    // records at this point; use the same authoritative signature as the
    // structured Knowledge layout pass instead of requiring a raw-row image.
    auto matches_have_character_skill_tabs = [&](int row_y) {
        static constexpr std::array<std::string_view, 5> skill_tabs = {{
            "Labor", "Combat", "Social", "Other skills", "Knowledge",
        }};
        std::array<bool, skill_tabs.size()> present{};
        for (const Match &match : result) {
            if (match.y != row_y) continue;
            for (size_t tab = 0; tab < skill_tabs.size(); ++tab) {
                if (match.source == skill_tabs[tab]) present[tab] = true;
            }
        }
        return std::all_of(present.begin(), present.end(),
                           [](bool value) { return value; });
    };
    if (only_y < 0) {
        for (int row_y = sheet_top; row_y < sheet_bottom; ++row_y) {
            if (!matches_have_character_skill_tabs(row_y)) continue;
            character_skill_tabs_y = row_y;
            character_skill_tabs_bottom_y = row_y;
            while (character_skill_tabs_bottom_y + 1 < sheet_bottom &&
                   matches_have_character_skill_tabs(
                       character_skill_tabs_bottom_y + 1)) {
                ++character_skill_tabs_bottom_y;
            }
            break;
        }
    }
    for (int row_y = sheet_top; row_y < sheet_bottom; ++row_y) {
        if (character_skill_tabs_y >= 0) break;
        if (is_character_skill_tabs_row(
                screen_rows[static_cast<size_t>(row_y)])) {
            character_skill_tabs_y = row_y;
            character_skill_tabs_bottom_y = row_y;
            while (character_skill_tabs_bottom_y + 1 < sheet_bottom &&
                   is_character_skill_tabs_row(screen_rows[
                       static_cast<size_t>(character_skill_tabs_bottom_y + 1)])) {
                ++character_skill_tabs_bottom_y;
            }
            break;
        }
    }
    if (character_skill_tabs_y < 0 && screen_override) {
        for (int row_y = sheet_top; row_y < sheet_bottom; ++row_y) {
            std::string composed(static_cast<size_t>(gps_->dimx), ' ');
            for (int x = sheet_left; x < sheet_right; ++x) {
                const unsigned char ch = visible_char_at(x, row_y);
                composed[static_cast<size_t>(x)] =
                    ch ? static_cast<char>(ch) : ' ';
            }
            if (!is_character_skill_tabs_row(composed)) continue;
            character_skill_tabs_y = row_y;
            character_skill_tabs_bottom_y = row_y;
            break;
        }
    }
    if (character_skill_tabs_y >= 0 && character_skill_tabs_bottom_y < 0)
        character_skill_tabs_bottom_y = character_skill_tabs_y;

    // Screen rows below are used only to locate and suppress the native draw.
    // Every semantic translation source comes from the complete std::string
    // captured before curses_text_boxst performed its native wrapping.
    const std::vector<NativeParagraphCapture> native_paragraph_snapshot =
        character_skill_tabs_y >= 0
            ? captured_native_paragraphs()
            : std::vector<NativeParagraphCapture>{};
    auto normalize_native_paragraph = [](std::string_view raw) {
        std::string normalized;
        normalized.reserve(raw.size());
        bool pending_space = false;
        for (unsigned char ch : raw) {
            if (std::isspace(ch)) {
                pending_space = !normalized.empty();
                continue;
            }
            if (pending_space) normalized.push_back(' ');
            pending_space = false;
            normalized.push_back(static_cast<char>(ch));
        }
        return normalized;
    };
    auto native_capture_match_score = [&](
            const NativeParagraphCapture &capture,
            std::string_view reconstructed,
            const std::vector<std::string> &visible_lines) {
        const std::string memory =
            normalize_native_paragraph(capture.source);
        const std::string visible =
            normalize_native_paragraph(reconstructed);
        int score = 0;
        if (visible.size() >= 12) {
            if (memory == visible) {
                score = 1000000 + static_cast<int>(visible.size());
            } else if (memory.find(visible) != std::string::npos) {
                score = 800000 + static_cast<int>(visible.size());
            }
        }

        // A viewport can begin and end in different wrapped rows, so the
        // concatenated visible fragment need not be a literal substring.
        // Match the exact native pstringst rows captured after wrapping as a
        // second, still-memory-backed identity path.
        std::vector<std::string> normalized_visible_lines;
        normalized_visible_lines.reserve(visible_lines.size());
        for (const std::string &line : visible_lines) {
            const std::string normalized = normalize_native_paragraph(line);
            if (!normalized.empty())
                normalized_visible_lines.push_back(normalized);
        }
        std::vector<std::string> normalized_memory_lines;
        normalized_memory_lines.reserve(capture.wrapped_lines.size());
        for (const std::string &line : capture.wrapped_lines) {
            const std::string normalized = normalize_native_paragraph(line);
            if (!normalized.empty())
                normalized_memory_lines.push_back(normalized);
        }
        int best_line_bytes = 0;
        int best_line_count = 0;
        for (size_t visible_start = 0;
             visible_start < normalized_visible_lines.size();
             ++visible_start) {
            for (size_t memory_start = 0;
                 memory_start < normalized_memory_lines.size();
                 ++memory_start) {
                int bytes = 0;
                int count = 0;
                while (visible_start + static_cast<size_t>(count) <
                           normalized_visible_lines.size() &&
                       memory_start + static_cast<size_t>(count) <
                           normalized_memory_lines.size() &&
                       normalized_visible_lines[
                           visible_start + static_cast<size_t>(count)] ==
                           normalized_memory_lines[
                           memory_start + static_cast<size_t>(count)]) {
                    bytes += static_cast<int>(normalized_visible_lines[
                        visible_start + static_cast<size_t>(count)].size());
                    ++count;
                }
                if (count > best_line_count ||
                    (count == best_line_count && bytes > best_line_bytes)) {
                    best_line_count = count;
                    best_line_bytes = bytes;
                }
            }
        }
        if (best_line_bytes >= 12) {
            score = std::max(
                score, 600000 + best_line_count * 1000 + best_line_bytes);
        }
        return score;
    };
    auto find_native_paragraph = [&](
            std::string_view reconstructed,
            const std::vector<std::string> &visible_lines)
            -> const NativeParagraphCapture * {
        const NativeParagraphCapture *best = nullptr;
        int best_score = 0;
        for (const NativeParagraphCapture &capture :
             native_paragraph_snapshot) {
            const int score = native_capture_match_score(
                capture, reconstructed, visible_lines);
            if (score <= 0) continue;
            if (!best || score > best_score ||
                (score == best_score &&
                 capture.sequence > best->sequence)) {
                best = &capture;
                best_score = score;
            }
        }
        return best;
    };

    // A closed chooser description already owns its complete source and uses
    // the shared measured paragraph fitter. Do not reconstruct it again from
    // raw layers or extend it through the separate choice list below.
    if (std::none_of(result.begin(), result.end(), [](const Match &match) {
            return match.rule == kPoeticDescriptionRule;
        })) {
    struct PoeticDescriptionRow {
        int x = 0;
        int y = 0;
        int length = 0;
        std::string source;
    };
    std::vector<PoeticDescriptionRow> poetic_description_rows;
    std::string poetic_description_source;
    std::optional<std::string> poetic_description_translation;
    std::vector<std::string> poetic_native_lines;
    int poetic_native_first_line = 0;
    int poetic_native_visible_lines = 0;
    {
        const int first_candidate_row = character_skill_tabs_bottom_y >= 0
            ? character_skill_tabs_bottom_y + 1
            : sheet_top;
        // Paragraph prose legitimately contains two spaces between generated
        // sentences. The general UI-field splitter treats such spacing as a
        // column boundary, which used to discard one half of a physical row.
        // For this panel, split only at actual CP437 box borders and preserve
        // every internal sentence fragment.
        auto paragraph_fields_at = [&](const std::vector<std::string> &rows,
                                       int y) {
            std::vector<LogicalTextField> fields;
            const std::string &row = rows[static_cast<size_t>(y)];
            auto append_segment = [&](int segment_start, int segment_end) {
                int start = segment_start;
                int end = segment_end;
                while (start < end && row[static_cast<size_t>(start)] == ' ')
                    ++start;
                while (end > start && row[static_cast<size_t>(end - 1)] == ' ')
                    --end;
                if (end <= start) return;
                fields.push_back({
                    start, end,
                    row.substr(static_cast<size_t>(start),
                               static_cast<size_t>(end - start)),
                });
            };
            int segment_start = sheet_left;
            int cursor = sheet_left;
            while (cursor <= sheet_right) {
                if (cursor == sheet_right) {
                    append_segment(segment_start, cursor);
                    break;
                }
                int separator_end = -1;
                if (is_cp437_box_separator(
                        row, static_cast<size_t>(cursor))) {
                    separator_end = cursor + 1;
                } else if (row[static_cast<size_t>(cursor)] == ' ') {
                    int gap_end = cursor + 1;
                    while (gap_end < sheet_right &&
                           row[static_cast<size_t>(gap_end)] == ' ') {
                        ++gap_end;
                    }
                    // DF separates generated prose sentences with two spaces;
                    // preserve that punctuation. Graphical widget columns and
                    // stale base-layer resident lists use much wider gutters.
                    if (gap_end - cursor >= 8) separator_end = gap_end;
                    else {
                        cursor = gap_end;
                        continue;
                    }
                }
                if (separator_end < 0) {
                    ++cursor;
                    continue;
                }
                append_segment(segment_start, cursor);
                segment_start = separator_end;
                cursor = separator_end;
            }
            return fields;
        };
        auto prose_field_at = [&](const std::vector<std::vector<LogicalTextField>> &fields,
                                  int y, int paragraph_x)
                -> std::optional<LogicalTextField> {
            std::optional<LogicalTextField> selected;
            for (const LogicalTextField &field : fields[static_cast<size_t>(y)]) {
                if (paragraph_x >= 0 &&
                    std::abs(field.start - paragraph_x) > 6) {
                    continue;
                }
                const bool has_letters = std::any_of(
                    field.text.begin(), field.text.end(), [](unsigned char ch) {
                        return (ch >= 'A' && ch <= 'Z') ||
                               (ch >= 'a' && ch <= 'z');
                    });
                if (!has_letters) continue;
                if (!selected || field.text.size() > selected->text.size())
                    selected = field;
            }
            return selected;
        };

        auto normalized_contains_landmark = [](std::string_view raw) {
            std::string normalized;
            normalized.reserve(raw.size());
            bool pending_space = false;
            for (const unsigned char ch : raw) {
                if (std::isspace(ch)) {
                    pending_space = !normalized.empty();
                    continue;
                }
                if (pending_space) normalized.push_back(' ');
                pending_space = false;
                normalized.push_back(static_cast<char>(ch));
            }
            const bool poetic_opening =
                normalized.find(" poetic ") != std::string::npos;
            return poetic_opening &&
                (normalized.find("The rules of the form") !=
                     std::string::npos ||
                 normalized.find("The form guides poets") !=
                     std::string::npos);
        };

        auto rows_from_layer = [&](const unsigned char *raw) {
            std::vector<std::string> rows(
                static_cast<size_t>(gps_->dimy),
                std::string(static_cast<size_t>(gps_->dimx), ' '));
            if (!raw) return rows;
            for (int y = sheet_top; y < sheet_bottom; ++y) {
                for (int x = sheet_left; x < sheet_right; ++x) {
                    const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                    const unsigned char ch = raw[tile * 8];
                    rows[static_cast<size_t>(y)][static_cast<size_t>(x)] =
                        ch ? static_cast<char>(ch) : ' ';
                }
            }
            return rows;
        };

        // The final composite can mark source glyph cells as graphically
        // occluded even though their logical English is still present in a
        // base/widget layer. Also restore every already-recognized Match's
        // original source bytes: this recovers an opening which the ordinary
        // matcher has replaced with a centered Chinese texture.
        std::vector<std::vector<std::string>> paragraph_sources;
        paragraph_sources.push_back(screen_rows);
        std::vector<std::string> restored_rows = screen_rows;
        for (const Match &match : result) {
            if (match.y < first_candidate_row || match.y >= sheet_bottom ||
                match.x < sheet_left || match.x >= sheet_right || match.length <= 0 ||
                match.source.empty()) {
                continue;
            }
            const int writable = std::min({
                match.length,
                static_cast<int>(match.source.size()),
                sheet_right - match.x,
            });
            for (int index = 0; index < writable; ++index) {
                restored_rows[static_cast<size_t>(match.y)]
                             [static_cast<size_t>(match.x + index)] =
                    match.source[static_cast<size_t>(index)];
            }
        }
        paragraph_sources.push_back(std::move(restored_rows));
        const size_t paragraph_cells =
            static_cast<size_t>(gps_->dimx) * gps_->dimy;
        if (observed_glyph_chars_.size() == paragraph_cells &&
            observed_glyph_epoch_.size() == paragraph_cells &&
            composite_read_epoch_ != 0) {
            std::vector<std::string> observed_rows(
                static_cast<size_t>(gps_->dimy),
                std::string(static_cast<size_t>(gps_->dimx), ' '));
            bool observed_any = false;
            for (int y = first_candidate_row; y < sheet_bottom; ++y) {
                for (int x = sheet_left; x < sheet_right; ++x) {
                    const size_t tile =
                        static_cast<size_t>(x) * gps_->dimy + y;
                    if (observed_glyph_epoch_[tile] != composite_read_epoch_)
                        continue;
                    const unsigned char ch = observed_glyph_chars_[tile];
                    if (ch == 0 || ch == ' ') continue;
                    observed_rows[static_cast<size_t>(y)]
                                 [static_cast<size_t>(x)] =
                        static_cast<char>(ch);
                    observed_any = true;
                }
            }
            if (observed_any)
                paragraph_sources.push_back(std::move(observed_rows));
        }
        if (gps_->screen) paragraph_sources.push_back(rows_from_layer(gps_->screen));
        if (gps_->top_in_use && gps_->screen_top)
            paragraph_sources.push_back(rows_from_layer(gps_->screen_top));

        if (gps_->screen && gps_->top_in_use && gps_->screen_top) {
            std::vector<std::string> merged = screen_rows;
            for (int y = first_candidate_row; y < sheet_bottom; ++y) {
                for (int x = sheet_left; x < sheet_right; ++x) {
                    char &cell = merged[static_cast<size_t>(y)]
                                       [static_cast<size_t>(x)];
                    if (cell != ' ') continue;
                    const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                    const auto *layer = native_ui_top_layer_at(*gps_, tile)
                        ? gps_->screen_top : gps_->screen;
                    const unsigned char source = layer[tile * 8];
                    if (source) cell = static_cast<char>(source);
                }
            }
            paragraph_sources.push_back(std::move(merged));
        }

        // Search complete aligned prose runs rather than individual rows. DF
        // wraps at arbitrary cells, so even the invariant rule sentence can
        // appear as `The rules of` / `the form ...` on adjacent rows.
        const NativePanelBorders poetic_borders(*gps_, true);
        for (size_t layer = 0; layer < paragraph_sources.size(); ++layer) {
            const auto &rows = paragraph_sources[layer];
            if (std::any_of(paragraph_sources.begin(), paragraph_sources.begin() + layer,
                    [&](const auto &previous) { return previous == rows; })) continue;
            // The unchanged landmark predicate below requires the literal
            // word "poetic". Joining rows inserts spaces (or retains a '-'),
            // so it cannot manufacture that word from separate native rows.
            // Reject an impossible source layer before growing a paragraph
            // from every list row: otherwise a long catalog costs O(rows^2).
            if (std::none_of(rows.begin() + sheet_top, rows.begin() + sheet_bottom,
                    [](const std::string &row) {
                        return row.find("poetic") != std::string::npos;
                })) continue;
            std::vector<std::vector<LogicalTextField>> fields(rows.size());
            for (int y = sheet_top; y < sheet_bottom; ++y)
                fields[static_cast<size_t>(y)] = paragraph_fields_at(rows, y);
            for (int run_start = first_candidate_row;
                 run_start < sheet_bottom; ++run_start) {
                const auto first = prose_field_at(fields, run_start, -1);
                if (!first) continue;
                std::vector<PoeticDescriptionRow> candidate_rows;
                std::string candidate_source;
                const int paragraph_x = first->start;
                // Blank spacing separates sections within one document, but
                // cannot join two closed widgets. The composition chooser
                // places its prompt and choices just below this prose frame.
                const auto panel = native_panel_interior(poetic_borders, *gps_,
                    first->start, first->end, run_start);
                const int paragraph_bottom = panel
                    ? std::min(sheet_bottom, panel->y + panel->h) : sheet_bottom;
                int empty_rows = 0;
                for (int y = run_start; y < paragraph_bottom; ++y) {
                    // Poetic form details can place each logical part in its
                    // own paragraph.  Follow the stable left edge across the
                    // small vertical paragraph gaps, while stopping well
                    // before the large empty area above the bottom toolbar.
                    // Previously the first blank row ended reconstruction, so
                    // only the opening paragraph was translated and all
                    // subsequent part descriptions remained native English.
                    const auto selected =
                        prose_field_at(fields, y, paragraph_x);
                    if (!selected) {
                        if (!candidate_rows.empty() && ++empty_rows <= 6)
                            continue;
                        break;
                    }
                    if (panel && (selected->start < panel->x ||
                            selected->end > panel->x + panel->w)) break;
                    empty_rows = 0;
                    if (!candidate_source.empty() &&
                        !candidate_source.ends_with('-')) {
                        candidate_source.push_back(' ');
                    }
                    candidate_source += selected->text;
                    candidate_rows.push_back({
                        selected->start, y, selected->end - selected->start,
                        selected->text,
                    });
                }
                if (!normalized_contains_landmark(candidate_source)) continue;
                // Every later start in this same run is a shorter suffix of
                // this candidate; do not rebuild it from every wrapped line.
                run_start = candidate_rows.back().y;
                if (candidate_source.size() >
                    poetic_description_source.size()) {
                    poetic_description_rows = std::move(candidate_rows);
                    poetic_description_source = std::move(candidate_source);
                }
            }
        }
    }

    if (!poetic_description_rows.empty()) {
        const std::string reconstructed_poetic_source =
            poetic_description_source;
        std::vector<std::string> visible_poetic_lines;
        visible_poetic_lines.reserve(poetic_description_rows.size());
        for (const PoeticDescriptionRow &row : poetic_description_rows)
            visible_poetic_lines.push_back(row.source);

        poetic_description_source.clear();
        poetic_description_translation.reset();
        if (const NativeParagraphCapture *capture = find_native_paragraph(
                reconstructed_poetic_source, visible_poetic_lines)) {
            if (auto translated = translate_poetic_form_description(
                    capture->source)) {
                poetic_description_source = capture->source;
                poetic_description_translation = std::move(translated);
                poetic_native_lines = capture->wrapped_lines;
            }
        }

        // Some forms append their opening and structural sections through
        // separate add_paragraph() calls on the same text box.  Reassemble
        // only contiguous in-memory paragraphs belonging to that owner, and
        // accept a group only when the complete poetic grammar consumes it.
        if (!poetic_description_translation) {
            std::unordered_map<uintptr_t,
                std::vector<const NativeParagraphCapture *>> by_owner;
            for (const NativeParagraphCapture &capture :
                 native_paragraph_snapshot) {
                by_owner[capture.owner].push_back(&capture);
            }
            int best_score = 0;
            size_t best_bytes = 0;
            for (auto &[owner, captures] : by_owner) {
                (void)owner;
                std::stable_sort(captures.begin(), captures.end(),
                    [](const NativeParagraphCapture *left,
                       const NativeParagraphCapture *right) {
                        return left->sequence < right->sequence;
                    });
                for (size_t first = 0; first < captures.size(); ++first) {
                    const std::string &opening = captures[first]->source;
                    // DF does not use one stable add_paragraph() boundary for
                    // poetic forms.  Some productions submit the complete
                    // description at once, while others submit the identity,
                    // the rules sentence and each structural section as
                    // separate paragraphs.  Requiring the *first* native
                    // string to contain both the poetic identity and the
                    // later rules landmark consequently made those perfectly
                    // captured multi-paragraph forms impossible to assemble.
                    // Start at the semantic identity alone; the growing group
                    // is still accepted only after it contains a rules
                    // landmark, matches the visible native rows and is
                    // consumed completely by the finite grammar below.
                    if (opening.find(" poetic ") == std::string::npos)
                        continue;
                    NativeParagraphCapture combined;
                    combined.owner = captures[first]->owner;
                    combined.paragraph_width =
                        captures[first]->paragraph_width;
                    combined.sequence = captures[first]->sequence;
                    for (size_t last = first;
                         last < captures.size() && last < first + 128;
                         ++last) {
                        if (captures[last]->paragraph_width !=
                            combined.paragraph_width) {
                            break;
                        }
                        if (!combined.source.empty())
                            combined.source.push_back(' ');
                        combined.source += captures[last]->source;
                        combined.wrapped_lines.insert(
                            combined.wrapped_lines.end(),
                            captures[last]->wrapped_lines.begin(),
                            captures[last]->wrapped_lines.end());
                        combined.sequence = captures[last]->sequence;
                        const bool complete_identity =
                            combined.source.find(" poetic ") !=
                                std::string::npos;
                        const bool has_rules_landmark =
                            combined.source.find("rules of the form") !=
                                std::string::npos ||
                            combined.source.find("form guides poets") !=
                                std::string::npos;
                        if (!complete_identity || !has_rules_landmark)
                            continue;
                        const int score = native_capture_match_score(
                            combined, reconstructed_poetic_source,
                            visible_poetic_lines);
                        if (score <= 0) continue;
                        auto translated = translate_poetic_form_description(
                            combined.source);
                        if (!translated) continue;
                        if (score > best_score ||
                            (score == best_score &&
                             combined.source.size() > best_bytes)) {
                            best_score = score;
                            best_bytes = combined.source.size();
                            poetic_description_source = combined.source;
                            poetic_description_translation =
                                std::move(translated);
                            poetic_native_lines = combined.wrapped_lines;
                        }
                    }
                }
            }
        }

        // A fully visible details page already contains a lossless copy of
        // the generated description in the logical grid.  Keep that as an
        // independent recovery path instead of making successful translation
        // depend on DF having submitted the prose through one particular set
        // of add_paragraph() calls.  The poetic parser is deliberately
        // fail-closed: clipped scroll windows, unrelated resident rows and
        // incomplete productions are rejected unless every sentence is
        // consumed.  Therefore a successful parse here proves that the grid
        // reconstruction is complete, while a failed parse still leaves the
        // native text untouched for collection and review.
        if (!poetic_description_translation) {
            if (auto translated = translate_poetic_form_description(
                    reconstructed_poetic_source)) {
                poetic_description_source = reconstructed_poetic_source;
                poetic_description_translation = std::move(translated);
                poetic_native_lines = visible_poetic_lines;
            }
        }

        if (poetic_description_translation &&
            !poetic_native_lines.empty()) {
            int best_alignment_lines = 0;
            int best_alignment_bytes = 0;
            int best_visible_start = 0;
            int best_native_start = 0;
            for (size_t visible_start = 0;
                 visible_start < visible_poetic_lines.size();
                 ++visible_start) {
                for (size_t native_start = 0;
                     native_start < poetic_native_lines.size();
                     ++native_start) {
                    int count = 0;
                    int bytes = 0;
                    while (visible_start + static_cast<size_t>(count) <
                               visible_poetic_lines.size() &&
                           native_start + static_cast<size_t>(count) <
                               poetic_native_lines.size() &&
                           normalize_native_paragraph(visible_poetic_lines[
                               visible_start + static_cast<size_t>(count)]) ==
                               normalize_native_paragraph(poetic_native_lines[
                                   native_start +
                                   static_cast<size_t>(count)])) {
                        bytes += static_cast<int>(visible_poetic_lines[
                            visible_start + static_cast<size_t>(count)].size());
                        ++count;
                    }
                    if (count > best_alignment_lines ||
                        (count == best_alignment_lines &&
                         bytes > best_alignment_bytes)) {
                        best_alignment_lines = count;
                        best_alignment_bytes = bytes;
                        best_visible_start =
                            static_cast<int>(visible_start);
                        best_native_start =
                            static_cast<int>(native_start);
                    }
                }
            }
            poetic_native_first_line = std::clamp(
                best_native_start - best_visible_start, 0,
                std::max(0,
                    static_cast<int>(poetic_native_lines.size()) - 1));
            poetic_native_visible_lines = std::min(
                static_cast<int>(poetic_description_rows.size()),
                std::max(1,
                    static_cast<int>(poetic_native_lines.size()) -
                        poetic_native_first_line));
        }
        if (!poetic_description_translation &&
            poetic_description_source.empty()) {
            // Keep the rejected screen reconstruction as a failure boundary
            // so generic word rules cannot produce a mixed-language paragraph.
            poetic_description_source = reconstructed_poetic_source;
        }
    }

    std::vector<Match> poetic_description_visible_lines;
    if (!poetic_description_rows.empty()) {
        const auto translated = poetic_description_translation;
        const bool recognized_poetic_description =
            poetic_description_source.find("rules of the form") !=
                std::string::npos ||
            poetic_description_source.find("form guides poets") !=
                std::string::npos;
        auto erase_row_fragments = [&]() {
            std::erase_if(result, [&](const Match &match) {
                return std::any_of(
                    poetic_description_rows.begin(),
                    poetic_description_rows.end(),
                    [&](const PoeticDescriptionRow &row) {
                        return match.y == row.y &&
                            match.x < row.x + row.length &&
                            match.x + match.length > row.x;
                    });
            });
        };
        if (translated && !translated->empty()) {
            int paragraph_x = sheet_right;
            int paragraph_right = 0;
            for (const PoeticDescriptionRow &row : poetic_description_rows) {
                paragraph_x = std::min(paragraph_x, row.x);
                paragraph_right = std::max(
                    paragraph_right, row.x + row.length);
            }
            // Long source rows normally reach the panel's right margin. Keep
            // that observed bound, but allow short final/section rows to share
            // the same complete text box established by the longest row.
            const int paragraph_width = std::max(
                8, std::min(sheet_right - paragraph_x - 4,
                            paragraph_right - paragraph_x));
            erase_row_fragments();
            for (const PoeticDescriptionRow &row : poetic_description_rows) {
                if (only_y >= 0 && row.y != only_y) continue;
                result.push_back({
                    row.x, row.y, row.length, kPoeticDescriptionRule, {},
                    row.source,
                });
            }

            if (only_y < 0) {
                std::string localized_target;
                std::string_view target = *translated;
                if (config_.language == "zh-Hant") {
                    localized_target = localize_display(target, poetic_description_source).text;
                    target = localized_target;
                }
                const DisplayLanguageScope localized_scope(nullptr, config_.language == "zh-Hant");
                std::vector<uint32_t> codepoints;
                if (decode_utf8(target, codepoints) &&
                    !codepoints.empty()) {
                    auto units = [](uint32_t cp) { return cp < 0x80 ? 1 : 2; };
                    auto nonstarter = [](uint32_t cp) {
                        switch (cp) {
                        case '.': case '!': case '?': case ';': case ',':
                        case ')': case ']': case '}': case '%':
                        case 0x3002: case 0x3001: case 0xff01: case 0xff1f:
                        case 0xff1b: case 0xff0c: case 0xff1a: case 0xff09:
                        case 0x3009: case 0x300b: case 0x300d: case 0x300f:
                        case 0x3011: case 0x2019: case 0x201d: case 0x2026:
                            return true;
                        default:
                            return false;
                        }
                    };
                    int total_units = 0;
                    for (uint32_t cp : codepoints) total_units += units(cp);
                    const int span_pixels = std::max(
                        1, paragraph_width * gps_->tile_pixel_x -
                               2 * config_.horizontal_padding);
                    const int font_pixels = unified_font_pixels();
                    const int capacity_units = std::max(
                        8, (span_pixels * 2) / std::max(1, font_pixels));
                    const int line_count = std::max(
                        1, (total_units + capacity_units - 1) /
                               capacity_units);

                    std::vector<std::string> rendered_lines;
                    rendered_lines.reserve(static_cast<size_t>(line_count));
                    size_t cursor = 0;
                    int remaining_units = total_units;
                    for (int line = 0;
                         line < line_count && cursor < codepoints.size();
                         ++line) {
                        const int remaining_lines = line_count - line;
                        const int desired = std::min(
                            capacity_units,
                            (remaining_units + remaining_lines - 1) /
                                remaining_lines);
                        const size_t start = cursor;
                        int consumed = 0;
                        while (cursor < codepoints.size()) {
                            const int next = units(codepoints[cursor]);
                            if (line + 1 < line_count &&
                                consumed + next > desired && cursor > start &&
                                !nonstarter(codepoints[cursor])) {
                                break;
                            }
                            consumed += next;
                            ++cursor;
                            if (line + 1 < line_count && consumed >= desired &&
                                (cursor >= codepoints.size() ||
                                 !nonstarter(codepoints[cursor]))) {
                                break;
                            }
                        }
                        std::string rendered;
                        for (size_t cp = start; cp < cursor; ++cp)
                            append_utf8_codepoint(rendered, codepoints[cp]);
                        rendered_lines.push_back(std::move(rendered));
                        remaining_units -= consumed;
                    }

                    int first_target_line = 0;
                    int last_target_line = static_cast<int>(
                        rendered_lines.size());
                    if (!poetic_native_lines.empty() &&
                        poetic_native_visible_lines > 0) {
                        const int native_total = static_cast<int>(
                            poetic_native_lines.size());
                        const int native_end = std::min(
                            native_total,
                            poetic_native_first_line +
                                poetic_native_visible_lines);
                        first_target_line = std::clamp(
                            poetic_native_first_line *
                                static_cast<int>(rendered_lines.size()) /
                                native_total,
                            0, static_cast<int>(rendered_lines.size()));
                        last_target_line = std::clamp(
                            (native_end *
                                 static_cast<int>(rendered_lines.size()) +
                             native_total - 1) /
                                native_total,
                            first_target_line,
                            static_cast<int>(rendered_lines.size()));
                    }
                    const int visible_target_lines = last_target_line - first_target_line;
                    const int line_height = knowledge_text_row_height();
                    const int display_top =
                        poetic_description_rows.front().y * gps_->tile_pixel_y;
                    const int origin_x = (gps_->screen_pixel_x -
                        gps_->dimx * gps_->tile_pixel_x) / 2;
                    const int origin_y = (gps_->screen_pixel_y -
                        gps_->dimy * gps_->tile_pixel_y) / 2;
                    const SDL_Rect prose_clip{
                        origin_x + paragraph_x * gps_->tile_pixel_x,
                        origin_y + display_top,
                        paragraph_width * gps_->tile_pixel_x,
                        sheet_bottom * gps_->tile_pixel_y - display_top};
                    for (int visible_line = 0;
                         visible_line < visible_target_lines;
                         ++visible_line) {
                        const int target_line =
                            first_target_line + visible_line;
                        const PoeticDescriptionRow &source_row =
                            poetic_description_rows[
                                std::min(static_cast<size_t>(visible_line),
                                    poetic_description_rows.size() - 1)];
                        const bool owns_source = static_cast<size_t>(visible_line) <
                            poetic_description_rows.size();
                        Match visible{
                            source_row.x, source_row.y, owns_source ? source_row.length : 0,
                            kPoeticDescriptionRule,
                            rendered_lines[static_cast<size_t>(target_line)],
                            owns_source ? source_row.source : std::string{},
                        };
                        visible.language_converted = config_.language == "zh-Hant";
                        visible.layout_x = paragraph_x;
                        const int pixel_y = display_top + visible_line * line_height;
                        visible.layout_y = pixel_y / gps_->tile_pixel_y;
                        visible.layout_pixel_y = pixel_y % gps_->tile_pixel_y;
                        visible.layout_line_height_pixels = line_height;
                        visible.layout_fixed_baseline = true;
                        visible.layout_native_clip = prose_clip;
                        visible.layout_length = paragraph_width;
                        visible.layout_left = true;
                        visible.layout_prepared = true;
                        poetic_description_visible_lines.push_back(
                            std::move(visible));
                    }
                }
            }
        } else if (recognized_poetic_description) {
            // A newly introduced grammar branch must never fall back to the
            // old mixture of translated row heads and English sentence tails.
            // Leave the native paragraph intact and let untranslated
            // collection expose the complete new source for a reviewed rule.
            erase_row_fragments();
            static std::mutex poetic_parse_failure_mutex;
            static std::unordered_set<std::string>
                logged_poetic_parse_failures;
            bool first_occurrence = false;
            {
                std::lock_guard<std::mutex> lock(
                    poetic_parse_failure_mutex);
                first_occurrence = logged_poetic_parse_failures.insert(
                    poetic_description_source).second;
            }
            if (first_occurrence) {
                log_line("WARN",
                    "Recognized generated poetic description but could not "
                    "translate its complete grammar: " +
                    poetic_description_source);
            }
        }
    } else {
        const bool visible_poetic_opening = std::any_of(
            screen_rows.begin(), screen_rows.end(), [](const std::string &row) {
                return row.find(" poetic ") != std::string::npos;
            });
        const bool visible_poetic_rules = visible_poetic_opening && std::any_of(
            screen_rows.begin(), screen_rows.end(), [](const std::string &row) {
                return row.find("rules of the form") != std::string::npos ||
                    row.find("form guides poets") != std::string::npos;
            });
        if (visible_poetic_rules) {
            static std::atomic_bool logged_poetic_detection_failure{false};
            if (!logged_poetic_detection_failure.exchange(true)) {
                log_line("WARN",
                    "Generated poetic description is visible but its opening "
                    "row could not be reconstructed");
            }
        }
    }
    result.insert(
        result.end(),
        std::make_move_iterator(poetic_description_visible_lines.begin()),
        std::make_move_iterator(poetic_description_visible_lines.end()));
    if (only_y < 0 && !poetic_description_visible_lines.empty()) {
        static std::atomic_bool logged_poetic_description_translation{false};
        if (!logged_poetic_description_translation.exchange(true)) {
            log_line("INFO",
                "Activated complete generated poetic-form description translation");
        }
    }
    } // Poetic descriptions not already owned by a closed chooser frame.

    // Musical- and dance-form knowledge use sequences of independently
    // wrapped prose paragraphs. Match visible rows to their captured native
    // pstringst rows, translate the corresponding complete in-memory
    // std::string, suppress every source row, and reflow only the current
    // scroll window in place.
    struct MusicalDescriptionRow {
        int x = 0;
        int y = 0;
        int length = 0;
        std::string source;
    };
    struct MusicalDescriptionParagraph {
        std::vector<MusicalDescriptionRow> rows;
        std::string source;
        std::string target;
        int native_first_line = 0;
        int native_visible_lines = 0;
        int native_total_lines = 0;
    };
    std::vector<std::vector<std::string>> musical_row_sources;
    musical_row_sources.push_back(screen_rows);
    std::vector<std::string> restored_musical_rows = screen_rows;
    for (const Match &match : result) {
        if (match.y < sheet_top || match.y >= sheet_bottom || match.x < sheet_left ||
            match.x >= sheet_right || match.length <= 0 ||
            match.source.empty()) {
            continue;
        }
        const int writable = std::min({
            match.length, static_cast<int>(match.source.size()),
            sheet_right - match.x,
        });
        for (int index = 0; index < writable; ++index) {
            restored_musical_rows[static_cast<size_t>(match.y)]
                                  [static_cast<size_t>(match.x + index)] =
                match.source[static_cast<size_t>(index)];
        }
    }
    const size_t musical_cells =
        static_cast<size_t>(gps_->dimx) * gps_->dimy;
    musical_row_sources.push_back(std::move(restored_musical_rows));
    if (observed_glyph_chars_.size() == musical_cells &&
        observed_glyph_epoch_.size() == musical_cells &&
        composite_read_epoch_ != 0) {
        std::vector<std::string> observed_rows(
            static_cast<size_t>(gps_->dimy),
            std::string(static_cast<size_t>(gps_->dimx), ' '));
        bool any = false;
        for (int y = sheet_top; y < sheet_bottom; ++y) {
            for (int x = sheet_left; x < sheet_right; ++x) {
                const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                if (observed_glyph_epoch_[tile] != composite_read_epoch_)
                    continue;
                const unsigned char ch = observed_glyph_chars_[tile];
                if (ch == 0 || ch == ' ') continue;
                observed_rows[static_cast<size_t>(y)][static_cast<size_t>(x)] =
                    static_cast<char>(ch);
                any = true;
            }
        }
        if (any) musical_row_sources.push_back(std::move(observed_rows));
    }
    // Widget text can remain complete in one logical layer after the final
    // composite has been partially hidden by graphical copies. Keep the two
    // layers separate: successful whole-paragraph parsing is the admission
    // gate, while separation prevents unrelated base/top columns from being
    // spliced into the same generated sentence.
    auto musical_rows_from_layer = [&](const unsigned char *raw) {
        std::vector<std::string> rows(
            static_cast<size_t>(gps_->dimy),
            std::string(static_cast<size_t>(gps_->dimx), ' '));
        if (!raw) return rows;
        for (int y = sheet_top; y < sheet_bottom; ++y) {
            for (int x = sheet_left; x < sheet_right; ++x) {
                const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                const unsigned char ch = raw[tile * 8];
                rows[static_cast<size_t>(y)][static_cast<size_t>(x)] =
                    ch ? static_cast<char>(ch) : ' ';
            }
        }
        return rows;
    };
    if (gps_->screen)
        musical_row_sources.push_back(musical_rows_from_layer(gps_->screen));
    if (gps_->top_in_use && gps_->screen_top) {
        musical_row_sources.push_back(
            musical_rows_from_layer(gps_->screen_top));
    }

    auto musical_fields_at = [&](const std::vector<std::string> &rows, int y) {
        std::vector<LogicalTextField> fields;
        const std::string &row = rows[static_cast<size_t>(y)];
        auto append = [&](int raw_start, int raw_end) {
            while (raw_start < raw_end &&
                   row[static_cast<size_t>(raw_start)] == ' ') ++raw_start;
            while (raw_end > raw_start &&
                   row[static_cast<size_t>(raw_end - 1)] == ' ') --raw_end;
            if (raw_end <= raw_start) return;
            fields.push_back({
                raw_start, raw_end,
                row.substr(static_cast<size_t>(raw_start),
                           static_cast<size_t>(raw_end - raw_start)),
            });
        };
        int segment_start = sheet_left;
        int cursor = sheet_left;
        while (cursor <= sheet_right) {
            if (cursor == sheet_right) {
                append(segment_start, cursor);
                break;
            }
            int separator_end = -1;
            if (is_cp437_box_separator(row, static_cast<size_t>(cursor))) {
                separator_end = cursor + 1;
            } else if (row[static_cast<size_t>(cursor)] == ' ') {
                int gap_end = cursor + 1;
                while (gap_end < sheet_right &&
                       row[static_cast<size_t>(gap_end)] == ' ') ++gap_end;
                if (gap_end - cursor >= 8) separator_end = gap_end;
                else {
                    cursor = gap_end;
                    continue;
                }
            }
            if (separator_end < 0) {
                ++cursor;
                continue;
            }
            append(segment_start, cursor);
            segment_start = separator_end;
            cursor = separator_end;
        }
        return fields;
    };
    auto musical_field_at = [&](const std::vector<std::string> &rows,
                                int y, int expected_x)
            -> std::optional<LogicalTextField> {
        std::vector<LogicalTextField> prose_fields;
        std::optional<LogicalTextField> selected;
        for (const LogicalTextField &field : musical_fields_at(rows, y)) {
            const bool prose = std::any_of(
                field.text.begin(), field.text.end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') ||
                           (ch >= 'a' && ch <= 'z') || ch == '|';
                });
            if (!prose) continue;
            prose_fields.push_back(field);
            if (expected_x >= 0 && std::abs(field.start - expected_x) > 6)
                continue;
            if (!selected || field.text.size() > selected->text.size())
                selected = field;
        }
        // A lone field may be centered or indented by DF and still belongs to
        // the same paragraph. Only relax the x constraint when there is no
        // competing widget column on that row.
        if (!selected && expected_x >= 0 && prose_fields.size() == 1)
            selected = prose_fields.front();
        return selected;
    };

    std::vector<MusicalDescriptionParagraph> musical_candidates;
    std::vector<MusicalDescriptionParagraph> failed_musical_candidates;
    const int musical_first_row = character_skill_tabs_bottom_y >= 0
        ? character_skill_tabs_bottom_y + 1 : sheet_top;
    auto looks_generated_performance = [](std::string_view value) {
        if (is_written_work_description(value)) return true;
        if (value.find(" poetic ") != std::string_view::npos) return false;
        static constexpr std::array<std::string_view, 44> landmarks = {{
            " form of music", "musical voices", "entire performance",
            "The melody", "counterpoint melody", "It is performed",
            " is performed using the ",
            " is performed without preference for a scale",
            "has the following structure", "multi-passage structure",
            "has a simple structure",
            "The passage", "The chorus", "The verse", "Scales are ",
            "tonic note", " scale is ", "degrees selected",
            " rhythm is ", "patterns are to be played",
            "beats are named", "beat is stressed", "register",
            " always ", " is voiced by ", "Each passage",
            "recites a composition", "recites nonsensical", "phrase",
            " dance originating in ", "which grew out of the performances",
            "form guides dancers",
            "The dance is accompanied", "The dancer performs",
            "The dancers perform", "The partners ",
            "partner changes", "dance is punctuated",
            "fundamental dance", "The dance begins",
            "The dance enters a new section", " section is punctuated",
            " section is distinct", "There is a basic movement",
        }};
        return std::any_of(landmarks.begin(), landmarks.end(),
            [&](std::string_view landmark) {
                if (landmark == " always " &&
                    !(value.starts_with("Each ") ||
                      value.starts_with("each ") ||
                      value.starts_with("The ") ||
                      value.starts_with("the "))) {
                    return false;
                }
                return value.find(landmark) != std::string_view::npos;
            });
    };
    auto translate_generated_performance = [&](std::string_view paragraph) {
        // Written subjects/chapters can refer to poetic forms without being
        // a poetic-form document themselves. Let the complete work grammar
        // resolve that typed reference before the form-only ownership gate.
        if (auto work = translate_written_work_paragraph(paragraph))
            return work;
        // The poetic document pass above owns this identity and all of its
        // clauses. Its origin marker cannot establish a music/dance candidate,
        // even when a clipped grid opening did not translate as a poem.
        if (paragraph.find(" poetic ") != std::string_view::npos)
            return std::optional<std::string>{};
        const bool music_passage = paragraph.find(" is voiced by the ") !=
            std::string_view::npos;
        if (!music_passage)
            if (auto dance = translate_dance_form_paragraph(paragraph))
                return dance;
        if (auto music = translate_musical_form_paragraph(paragraph))
            return music;
        return std::optional<std::string>{};
    };
    for (const std::vector<std::string> &rows : musical_row_sources) {
        for (int run_start = musical_first_row;
             run_start < sheet_bottom; ++run_start) {
            const auto first = musical_field_at(rows, run_start, -1);
            if (!first) continue;
            MusicalDescriptionParagraph paragraph;
            const int paragraph_x = first->start;
            int run_end = run_start;
            for (; run_end < sheet_bottom; ++run_end) {
                // DF justifies generated prose by centering short first/last
                // lines while full wrapped lines begin at the panel margin.
                // Requiring every row to share the opening x coordinate cuts
                // the paragraph at precisely those wraps, leaving neither
                // half as a complete grammar production. Blank rows, not
                // horizontal indentation, delimit musical paragraphs.
                const auto field = musical_field_at(
                    rows, run_end, paragraph_x);
                if (!field) break;
                const bool wrapped_word = paragraph.source.size() >= 2 &&
                    paragraph.source.back() == '-' &&
                    paragraph.source[paragraph.source.size() - 2] != '-' &&
                    std::isalnum(static_cast<unsigned char>(
                        paragraph.source[paragraph.source.size() - 2]));
                if (!paragraph.source.empty() && !wrapped_word) {
                    paragraph.source.push_back(' ');
                }
                paragraph.source += field->text;
                paragraph.rows.push_back({
                    field->start, run_end, field->end - field->start,
                    field->text,
                });
            }
            std::vector<std::string> visible_memory_lines;
            visible_memory_lines.reserve(paragraph.rows.size());
            for (const MusicalDescriptionRow &row : paragraph.rows)
                visible_memory_lines.push_back(row.source);
            const NativeParagraphCapture *native_source =
                find_native_paragraph(
                    paragraph.source, visible_memory_lines);
            if (!native_source) {
                // Short knowledge entries and structure summaries are often
                // appended as ready-made pstringst rows rather than through
                // curses_text_boxst::add_paragraph().  They therefore have no
                // native capture even though the complete, period-terminated
                // production is present in the logical grid.  Admit only a
                // whole paragraph accepted by the same strict music grammar;
                // clipped scroll-window fragments still fail atomically.
                const bool visibly_complete = !paragraph.source.empty() &&
                    paragraph.source.back() == '.';
                // Rhythm notation is added separately from this prose header,
                // so a complete visible production can legitimately end in a
                // colon rather than a sentence-final period.
                const bool rhythm_header_prefix =
                    paragraph.source.starts_with("The ") &&
                    paragraph.source.find(
                        " rhythm is a single line with ") !=
                        std::string::npos &&
                    paragraph.source.ends_with(
                        "The beat is stressed as follows:");
                const auto translated =
                    (visibly_complete || rhythm_header_prefix)
                    ? translate_generated_performance(paragraph.source)
                    : std::optional<std::string>{};
                if (translated && !translated->empty()) {
                    paragraph.target = *translated;
                    paragraph.native_total_lines = static_cast<int>(
                        paragraph.rows.size());
                    paragraph.native_visible_lines = paragraph.native_total_lines;
                    musical_candidates.push_back(std::move(paragraph));
                } else if ((visibly_complete || rhythm_header_prefix) &&
                           looks_generated_performance(paragraph.source)) {
                    failed_musical_candidates.push_back(
                        std::move(paragraph));
                }
                if (run_end > run_start) run_start = run_end;
                continue;
            }
            paragraph.native_total_lines = static_cast<int>(
                native_source->wrapped_lines.size());
            int best_alignment_lines = 0;
            int best_alignment_bytes = 0;
            int best_visible_start = 0;
            int best_native_start = 0;
            for (size_t visible_start = 0;
                 visible_start < paragraph.rows.size(); ++visible_start) {
                for (size_t native_start = 0;
                     native_start < native_source->wrapped_lines.size();
                     ++native_start) {
                    int count = 0;
                    int bytes = 0;
                    while (visible_start + static_cast<size_t>(count) <
                               paragraph.rows.size() &&
                           native_start + static_cast<size_t>(count) <
                               native_source->wrapped_lines.size() &&
                           normalize_native_paragraph(paragraph.rows[
                               visible_start + static_cast<size_t>(count)]
                                   .source) ==
                               normalize_native_paragraph(
                                   native_source->wrapped_lines[
                                       native_start +
                                       static_cast<size_t>(count)])) {
                        bytes += static_cast<int>(paragraph.rows[
                            visible_start + static_cast<size_t>(count)]
                                .source.size());
                        ++count;
                    }
                    if (count > best_alignment_lines ||
                        (count == best_alignment_lines &&
                         bytes > best_alignment_bytes)) {
                        best_alignment_lines = count;
                        best_alignment_bytes = bytes;
                        best_visible_start =
                            static_cast<int>(visible_start);
                        best_native_start =
                            static_cast<int>(native_start);
                    }
                }
            }
            paragraph.native_first_line = std::clamp(
                best_native_start - best_visible_start, 0,
                std::max(0, paragraph.native_total_lines - 1));
            paragraph.native_visible_lines = std::min(
                static_cast<int>(paragraph.rows.size()),
                std::max(1, paragraph.native_total_lines -
                                paragraph.native_first_line));
            paragraph.source = native_source->source;
            const auto translated = translate_generated_performance(
                paragraph.source);
            if (translated && !translated->empty()) {
                paragraph.target = *translated;
                musical_candidates.push_back(std::move(paragraph));
            } else if (looks_generated_performance(paragraph.source)) {
                failed_musical_candidates.push_back(std::move(paragraph));
            }
            if (run_end > run_start) run_start = run_end;
        }
    }

    // Several sources can describe the same rows. Prefer the candidate that
    // recovered the most physical lines and, secondarily, the most source
    // bytes. This prevents a one-sentence glyph-copy fragment from claiming
    // a row before the intact base-layer paragraph is considered.
    std::stable_sort(musical_candidates.begin(), musical_candidates.end(),
        [](const MusicalDescriptionParagraph &left,
           const MusicalDescriptionParagraph &right) {
            if (left.rows.size() != right.rows.size())
                return left.rows.size() > right.rows.size();
            return left.source.size() > right.source.size();
        });
    std::vector<MusicalDescriptionParagraph> musical_paragraphs;
    for (MusicalDescriptionParagraph &candidate : musical_candidates) {
        const bool overlaps = std::any_of(
            musical_paragraphs.begin(), musical_paragraphs.end(),
            [&](const MusicalDescriptionParagraph &existing) {
                return std::any_of(candidate.rows.begin(), candidate.rows.end(),
                    [&](const MusicalDescriptionRow &row) {
                        return std::any_of(existing.rows.begin(),
                            existing.rows.end(),
                            [&](const MusicalDescriptionRow &other) {
                                return row.y == other.y &&
                                    row.x < other.x + other.length &&
                                    other.x < row.x + row.length;
                            });
                    });
            });
        if (!overlaps) musical_paragraphs.push_back(std::move(candidate));
    }
    const auto row_is_translated = [&](const MusicalDescriptionRow &row) {
        return std::any_of(musical_paragraphs.begin(), musical_paragraphs.end(),
            [&](const MusicalDescriptionParagraph &translated) {
                return std::any_of(translated.rows.begin(), translated.rows.end(),
                    [&](const MusicalDescriptionRow &other) {
                        return row.y == other.y &&
                            row.x < other.x + other.length &&
                            other.x < row.x + row.length;
                    });
            });
    };
    const MusicalDescriptionParagraph *uncovered_failure = nullptr;
    for (const MusicalDescriptionParagraph &failure :
         failed_musical_candidates) {
        if (failure.rows.empty() || std::all_of(
                failure.rows.begin(), failure.rows.end(), row_is_translated)) {
            continue;
        }
        if (!uncovered_failure || failure.rows.size() >
                uncovered_failure->rows.size() ||
            (failure.rows.size() == uncovered_failure->rows.size() &&
             failure.source.size() > uncovered_failure->source.size())) {
            uncovered_failure = &failure;
        }
    }
    if (only_y < 0 && character_skill_tabs_y >= 0 && uncovered_failure) {
        // Never overlay isolated dictionary words on an unrecognized music or
        // dance paragraph. Whole-paragraph translation is the ownership
        // boundary: if a newly introduced/modded production is not yet
        // covered, keep its native prose intact and record the complete source
        // instead of producing an unreadable English/Chinese mosaic.
        for (const MusicalDescriptionParagraph &failure :
             failed_musical_candidates) {
            for (const MusicalDescriptionRow &row : failure.rows) {
                if (row_is_translated(row)) continue;
                std::erase_if(result, [&](const Match &match) {
                    return match.y == row.y &&
                        match.x < row.x + row.length &&
                        match.x + match.length > row.x;
                });
            }
        }
        // Report every distinct uncovered production, rather than hiding all
        // later failures after the first paragraph seen in a process.  The
        // generated grammar is finite, so one entry per complete source gives
        // an exhaustive manual-acceptance record without frame-by-frame spam.
        static std::mutex musical_parse_failure_mutex;
        static std::unordered_set<std::string>
            logged_musical_parse_failures;
        for (const MusicalDescriptionParagraph &failure :
             failed_musical_candidates) {
            if (failure.rows.empty() || std::all_of(
                    failure.rows.begin(), failure.rows.end(),
                    row_is_translated)) {
                continue;
            }
            bool first_occurrence = false;
            {
                std::lock_guard<std::mutex> lock(
                    musical_parse_failure_mutex);
                first_occurrence = logged_musical_parse_failures.insert(
                    failure.source).second;
            }
            if (first_occurrence) {
                log_line("WARN",
                    "Recognized generated music/dance description but could "
                    "not translate its complete grammar: " +
                    failure.source);
            }
        }
    }

    struct MusicalLayoutBlock {
        int source_y = 0;
        size_t first_line = 0;
        size_t line_count = 0;
        bool notation = false;
    };
    std::vector<Match> musical_visible_lines;
    std::vector<MusicalLayoutBlock> musical_layout_blocks;
    for (const MusicalDescriptionParagraph &paragraph : musical_paragraphs) {
        if (paragraph.rows.empty()) continue;
        std::erase_if(result, [&](const Match &match) {
            return std::any_of(
                paragraph.rows.begin(), paragraph.rows.end(),
                [&](const MusicalDescriptionRow &row) {
                    return match.y == row.y &&
                        match.x < row.x + row.length &&
                        match.x + match.length > row.x;
                });
        });
        int paragraph_x = sheet_right;
        int paragraph_right = 0;
        for (const MusicalDescriptionRow &row : paragraph.rows) {
            paragraph_x = std::min(paragraph_x, row.x);
            paragraph_right = std::max(paragraph_right, row.x + row.length);
            if (only_y < 0 || row.y == only_y) {
                result.push_back({
                    row.x, row.y, row.length, kMusicalDescriptionRule,
                    {}, row.source,
                });
            }
        }
        if (only_y >= 0) continue;
        const int paragraph_width = std::max(
            8, std::min(sheet_right - paragraph_x - 4,
                        paragraph_right - paragraph_x));
        std::string localized_target;
        std::string_view target = paragraph.target;
        if (config_.language == "zh-Hant") {
            localized_target = localize_display(target, paragraph.source).text;
            target = localized_target;
        }
        const DisplayLanguageScope localized_scope(nullptr, config_.language == "zh-Hant");
        std::vector<uint32_t> codepoints;
        if (!decode_utf8(target, codepoints) || codepoints.empty())
            continue;
        auto units = [](uint32_t cp) { return cp < 0x80 ? 1 : 2; };
        auto nonstarter = [](uint32_t cp) {
            switch (cp) {
            case '.': case '!': case '?': case ';': case ',': case ')':
            case ']': case '}': case '%': case 0x3002: case 0x3001:
            case 0xff01: case 0xff1f: case 0xff1b: case 0xff0c:
            case 0xff1a: case 0xff09: case 0x3009: case 0x300b:
            case 0x300d: case 0x300f: case 0x3011: case 0x2019:
            case 0x201d: case 0x2026:
                return true;
            default: return false;
            }
        };
        int total_units = 0;
        for (uint32_t cp : codepoints) total_units += units(cp);
        const int span_pixels = std::max(
            1, paragraph_width * gps_->tile_pixel_x -
                   2 * config_.horizontal_padding);
        const int font_pixels = unified_font_pixels();
        const int capacity_units = std::max(
            8, (span_pixels * 2) / std::max(1, font_pixels));
        const int line_count = std::max(
            1, (total_units + capacity_units - 1) / capacity_units);
        std::vector<std::string> rendered_lines;
        rendered_lines.reserve(static_cast<size_t>(line_count));
        size_t cursor = 0;
        int remaining_units = total_units;
        for (int line = 0; line < line_count && cursor < codepoints.size();
             ++line) {
            const int remaining_lines = line_count - line;
            const int desired = std::min(
                capacity_units,
                (remaining_units + remaining_lines - 1) / remaining_lines);
            const size_t start = cursor;
            int consumed = 0;
            while (cursor < codepoints.size()) {
                const int next = units(codepoints[cursor]);
                if (line + 1 < line_count && consumed + next > desired &&
                    cursor > start && !nonstarter(codepoints[cursor])) break;
                consumed += next;
                ++cursor;
                if (line + 1 < line_count && consumed >= desired &&
                    (cursor >= codepoints.size() ||
                     !nonstarter(codepoints[cursor]))) break;
            }
            std::string rendered;
            for (size_t cp = start; cp < cursor; ++cp)
                append_utf8_codepoint(rendered, codepoints[cp]);
            rendered_lines.push_back(std::move(rendered));
            remaining_units -= consumed;
        }

        int first_target_line = 0;
        int last_target_line = static_cast<int>(rendered_lines.size());
        if (paragraph.native_total_lines > 0 &&
            paragraph.native_visible_lines > 0) {
            const int native_end = std::min(
                paragraph.native_total_lines,
                paragraph.native_first_line +
                    paragraph.native_visible_lines);
            first_target_line = std::clamp(
                paragraph.native_first_line *
                    static_cast<int>(rendered_lines.size()) /
                    paragraph.native_total_lines,
                0, static_cast<int>(rendered_lines.size()));
            last_target_line = std::clamp(
                (native_end * static_cast<int>(rendered_lines.size()) +
                 paragraph.native_total_lines - 1) /
                    paragraph.native_total_lines,
                first_target_line,
                static_cast<int>(rendered_lines.size()));
        }
        const int visible_target_lines = last_target_line - first_target_line;
        const int line_height = knowledge_text_row_height();
        const int display_top = paragraph.rows.front().y * gps_->tile_pixel_y;
        const size_t first_visible_line = musical_visible_lines.size();
        for (int visible_line = 0;
             visible_line < visible_target_lines; ++visible_line) {
            const int target_line = first_target_line + visible_line;
            const MusicalDescriptionRow &source_row = paragraph.rows[
                std::min(static_cast<size_t>(visible_line), paragraph.rows.size() - 1)];
            const bool owns_source = static_cast<size_t>(visible_line) < paragraph.rows.size();
            Match visible{
                source_row.x, source_row.y, owns_source ? source_row.length : 0,
                kMusicalDescriptionRule,
                rendered_lines[static_cast<size_t>(target_line)],
                owns_source ? source_row.source : std::string{},
            };
            visible.language_converted = config_.language == "zh-Hant";
            visible.layout_x = paragraph_x;
            const int pixel_y = display_top + visible_line * line_height;
            visible.layout_y = pixel_y / gps_->tile_pixel_y;
            visible.layout_pixel_y = pixel_y % gps_->tile_pixel_y;
            visible.layout_line_height_pixels = line_height;
            visible.layout_fixed_baseline = true;
            visible.layout_length = paragraph_width;
            visible.layout_left = true;
            visible.layout_prepared = true;
            musical_visible_lines.push_back(std::move(visible));
        }
        if (musical_visible_lines.size() > first_visible_line) {
            musical_layout_blocks.push_back({
                paragraph.rows.front().y,
                first_visible_line,
                musical_visible_lines.size() - first_visible_line,
                false,
            });
        }
    }

    // Chinese paragraphs are usually much shorter than their wrapped English
    // sources. Keeping every translated block at its old absolute row leaves
    // large, irregular holes between related voice, structure and passage
    // descriptions. Once every recognized prose block in the current viewport
    // has translated successfully, lay the visible blocks out as one compact
    // document, retaining a single blank row between semantic paragraphs.
    // Symbol-only stress notation is part of that document as well: move it
    // with the prose header so it cannot be stranded at the old English row.
    if (only_y < 0 && character_skill_tabs_y >= 0 && !uncovered_failure &&
        !musical_layout_blocks.empty()) {
        int notation_left = sheet_right;
        int notation_right = 0;
        std::unordered_set<int> translated_source_rows;
        for (const MusicalDescriptionParagraph &paragraph : musical_paragraphs) {
            for (const MusicalDescriptionRow &row : paragraph.rows) {
                notation_left = std::min(notation_left, row.x);
                notation_right = std::max(notation_right, row.x + row.length);
                translated_source_rows.insert(row.y);
            }
        }
        auto is_stress_notation = [](std::string_view raw) {
            const std::string_view value = trim_view(raw);
            if (value.empty()) return false;
            bool has_bar = false;
            bool has_beat = false;
            for (const unsigned char ch : value) {
                if (ch == '|') {
                    has_bar = true;
                    continue;
                }
                if (ch == 'x' || ch == 'X') {
                    has_beat = true;
                    continue;
                }
                if (ch == ' ' || ch == '-' || ch == '!' || ch == '\'' ||
                    ch == '`') {
                    continue;
                }
                return false;
            }
            return has_bar && has_beat;
        };
        if (notation_left < sheet_right) {
            const int notation_font_pixels = std::max(
                config_.min_font_pixels,
                static_cast<int>(gps_->tile_pixel_y * config_.font_scale));
            for (int y = musical_first_row; y < sheet_bottom; ++y) {
                if (translated_source_rows.contains(y)) continue;
                for (const LogicalTextField &field :
                     musical_fields_at(screen_rows, y)) {
                    if (std::abs(field.start - notation_left) > 8 ||
                        field.start >= notation_right ||
                        !is_stress_notation(field.text)) {
                        continue;
                    }
                    const size_t first_line = musical_visible_lines.size();
                    Match notation{
                        field.start, y, field.end - field.start,
                        kMusicalDescriptionRule, field.text, field.text,
                    };
                    notation.layout_x = notation_left;
                    notation.layout_y = y;
                    notation.layout_length = std::max(
                        8, notation_right - notation_left);
                    notation.layout_left = true;
                    notation.layout_prepared = true;
                    musical_visible_lines.push_back(std::move(notation));
                    musical_layout_blocks.push_back({
                        y, first_line, 1, true,
                    });
                    break;
                }
            }
        }

        std::stable_sort(musical_layout_blocks.begin(),
            musical_layout_blocks.end(),
            [](const MusicalLayoutBlock &left,
               const MusicalLayoutBlock &right) {
                return left.source_y < right.source_y;
            });
        int compact_pixel_y =
            musical_layout_blocks.front().source_y * gps_->tile_pixel_y;
        bool first_block = true;
        for (const MusicalLayoutBlock &block : musical_layout_blocks) {
            if (!first_block && !block.notation) compact_pixel_y += gps_->tile_pixel_y;
            first_block = false;
            for (size_t line = 0; line < block.line_count; ++line) {
                Match &match = musical_visible_lines[
                    block.first_line + line];
                match.layout_y = compact_pixel_y / gps_->tile_pixel_y;
                match.layout_pixel_y = compact_pixel_y % gps_->tile_pixel_y;
                match.layout_fixed_baseline = true;
                compact_pixel_y += std::max(gps_->tile_pixel_y, match.layout_line_height_pixels);
            }
        }
    }
    if (!musical_layout_blocks.empty()) {
        const int document_top = std::min_element(musical_layout_blocks.begin(),
            musical_layout_blocks.end(), [](const auto &a, const auto &b) {
                return a.source_y < b.source_y;
            })->source_y;
        const int origin_x = (gps_->screen_pixel_x -
            gps_->dimx * gps_->tile_pixel_x) / 2;
        const int origin_y = (gps_->screen_pixel_y -
            gps_->dimy * gps_->tile_pixel_y) / 2;
        for (auto &line : musical_visible_lines) {
            line.layout_native_clip = SDL_Rect{
                origin_x + line.layout_x * gps_->tile_pixel_x,
                origin_y + document_top * gps_->tile_pixel_y,
                line.layout_length * gps_->tile_pixel_x,
                (sheet_bottom - document_top) * gps_->tile_pixel_y};
        }
    }
    result.insert(result.end(),
        std::make_move_iterator(musical_visible_lines.begin()),
        std::make_move_iterator(musical_visible_lines.end()));
    if (only_y < 0 && !musical_visible_lines.empty()) {
        static std::atomic_bool logged_musical_description_translation{false};
        if (!logged_musical_description_translation.exchange(true)) {
            log_line("INFO",
                "Activated complete generated music/dance-form paragraph translation");
        }
    }

    } // Native rich-text knowledge documents bypass viewport reconstruction.

    // Appearance and personality creation share the description recovery path
    // for a core reload before DF rebuilds its native rich-text boxes. The
    // native document above is authoritative whenever its exact draws exist.
    // Spaces inserted by justification and color changes are NOT field or
    // paragraph boundaries. Claim every source byte before reflowing once.
    struct CharacterDescriptionRow {
        int x, y, length;
        std::string source;
    };
    struct CharacterDescriptionBlock {
        std::vector<CharacterDescriptionRow> rows;
        std::string source;
        std::string plain;
    };
    struct CharacterDescriptionBounds {
        int left, right, top, bottom; // Exclusive right/bottom; no border or scrollbar.
    };
    std::optional<CharacterDescriptionBounds> character_description_bounds;
    std::vector<CharacterDescriptionBlock> character_description_blocks;
    // Creation uses Health/Personality prose without their information-page
    // subtabs. Require its live tab strip AND accept action before claiming
    // the closed description frame. Read context across layers; source ink
    // below still belongs exclusively to the layer being matched.
    int creation_tabs_y = -1, appearance_accept_y = -1, personality_accept_y = -1;
    for (int y = sheet_top; y < sheet_bottom; ++y) {
        auto inspect_context = [&](const std::string &context) {
            if (context.find("Background") != std::string::npos &&
                context.find("Skills") != std::string::npos &&
                context.find("Appearance") != std::string::npos &&
                context.find("Personality") != std::string::npos)
                creation_tabs_y = y;
            if (context.find("Accept appearance") != std::string::npos)
                appearance_accept_y = y;
            if (context.find("Accept personality") != std::string::npos)
                personality_accept_y = y;
        };
        inspect_context(screen_rows[static_cast<size_t>(y)]);
        if (!screen_override) continue;
        std::string context(static_cast<size_t>(gps_->dimx), ' ');
        for (int x = sheet_left; x < sheet_right; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            context[static_cast<size_t>(x)] = ch ? static_cast<char>(ch) : ' ';
        }
        inspect_context(context);
    }
    const bool personality_creation = creation_tabs_y >= 0 &&
        personality_accept_y > creation_tabs_y;
    const int creation_accept_y = personality_creation ? personality_accept_y : appearance_accept_y;
    const bool description_creation = creation_tabs_y >= 0 && creation_accept_y > creation_tabs_y;
    const auto complete_character_description = [&](std::string_view source) {
        const std::string paragraph = normalize_utterance(source);
        // Control captions can have ordinary exact translations too. An
        // unpunctuated RAW description must instead prove that its complete
        // source belongs to the existing shared P prose index.
        if (paragraph.empty()) return false;
        if (std::string_view(".!?").find(paragraph.back()) == std::string_view::npos) {
            if (personality_creation || ui_message_trie_.empty()) return false;
            int node = 0;
            for (unsigned char ch : paragraph) {
                if (native_prose_space(ch)) continue;
                const auto found = ui_message_trie_[node].next.find(ch);
                if (found == ui_message_trie_[node].next.end()) return false;
                node = found->second;
            }
            const int index = ui_message_trie_[node].rule;
            return index >= 0 && static_cast<size_t>(index) < rules_.size() &&
                rules_[index].ui_message && !rules_[index].legends_prose &&
                !rules_[index].target.empty();
        }
        if (!personality_creation)
            return translate_health_description_block(paragraph).has_value();
        if (translate_character_need_sentence(paragraph)) return true;
        auto translated = translate_character_preference_paragraph(paragraph);
        if (!translated || translated->translated_sentence_count < 1)
            translated = translate_personality_facet_paragraph(paragraph);
        return translated && translated->translated_sentence_count > 0 &&
            translated->passthrough_sentence_count == 0;
    };
    if (description_creation && native_knowledge.empty()) {
        const NativePanelBorders borders(*gps_);
        std::vector<SDL_Rect> candidates;
        for (int y = creation_tabs_y + 1; y < creation_accept_y; ++y) {
            for (const auto &field : split_text_fields(screen_rows[static_cast<size_t>(y)])) {
                const auto panel = native_panel_interior(
                    borders, *gps_, field.start, field.end, y);
                if (!panel || panel->x < sheet_left || panel->x + panel->w > sheet_right ||
                    panel->y <= creation_tabs_y ||
                    panel->y + panel->h > creation_accept_y) continue;
                if (std::none_of(candidates.begin(), candidates.end(), [&](const SDL_Rect &seen) {
                        return seen.x == panel->x && seen.y == panel->y &&
                            seen.w == panel->w && seen.h == panel->h;
                    })) candidates.push_back(*panel);
            }
        }
        // Creation also contains independently framed controls. Choose the
        // frame whose complete paragraphs belong to the description grammar,
        // not whichever caption or English opening happens to appear first.
        size_t best_source_bytes = 0;
        for (const auto &panel : candidates) {
            size_t source_bytes = 0;
            std::string paragraph;
            bool complete = true;
            const auto finish_paragraph = [&] {
                if (paragraph.empty()) return;
                if (!complete_character_description(paragraph)) complete = false;
                source_bytes += paragraph.size();
                paragraph.clear();
            };
            for (int y = panel.y; y < panel.y + panel.h; ++y) {
                std::string plain;
                for (const auto &field : split_text_fields(
                        screen_rows[static_cast<size_t>(y)].substr(panel.x, panel.w))) {
                    if (std::any_of(field.text.begin(), field.text.end(),
                            [](unsigned char c) { return c < 0x20 || c > 0x7e; })) continue;
                    if (!plain.empty()) plain += ' ';
                    plain += field.text;
                }
                if (plain.empty()) { finish_paragraph(); continue; }
                if (!paragraph.empty() && !paragraph.ends_with('-')) paragraph += ' ';
                paragraph += plain;
            }
            finish_paragraph();
            if (!complete || source_bytes <= best_source_bytes) continue;
            best_source_bytes = source_bytes;
            character_description_bounds = CharacterDescriptionBounds{
                panel.x, panel.x + panel.w, panel.y, panel.y + panel.h};
        }
    }
    if (character_health_tabs_y >= 0 && native_knowledge.empty()) {
        const int first_tab = static_cast<int>(std::min(
            character_health_tabs.find("Status"), character_health_tabs.find("Overview")));
        const int last_tab = static_cast<int>(character_health_tabs.find("Description") + 11);
        std::optional<AsciiPanelFrame> frame;
        frame = find_graphical_character_panel_frame(
            *gps_, first_tab, last_tab, character_health_tabs_y);
        if (!frame) {
            frame = find_ascii_panel_frame(first_tab, last_tab,
                character_health_tabs_y, sheet_right, sheet_bottom, read_sheet_char);
        }
        if (frame) {
            character_description_bounds = CharacterDescriptionBounds{
                frame->left + 1, frame->right - 1,
                character_health_tabs_y + 1, frame->bottom - 1};
        }
        // Captures predating a core reload may lack their health identity,
        // but an exact current source-row match still proves the native text
        // box's width. Never infer that width from the desktop/map edge or
        // from the last English word (justification and short rows vary).
        bool current_draw = false;
        for (const auto &draw : captured_native_knowledge_draws(&current_draw)) {
            if (!draw.document || draw.y <= character_health_tabs_y ||
                draw.y >= sheet_bottom || draw.x < sheet_left || draw.line < 0 ||
                draw.line >= static_cast<int>(draw.document->rows.size())) continue;
            const int width = draw.document->width;
            if (width <= 0 || width > sheet_right - draw.x) continue;
            const auto &source = draw.document->rows[static_cast<size_t>(draw.line)];
            if (source.size() > static_cast<size_t>(width)) continue;
            const auto &row = screen_rows[static_cast<size_t>(draw.y)];
            int verified = 0;
            bool intact = true;
            for (size_t x = 0; x < source.size(); ++x) {
                if (source[x] == ' ') continue;
                if (row[static_cast<size_t>(draw.x) + x] != source[x]) {
                    intact = false;
                    break;
                }
                ++verified;
            }
            if (!intact || verified < 12) continue;
            if (character_description_bounds) {
                if (draw.x < character_description_bounds->left ||
                    draw.x + width > character_description_bounds->right ||
                    draw.y >= character_description_bounds->bottom) continue;
                character_description_bounds->left = draw.x;
                character_description_bounds->right = draw.x + width;
            } else {
                character_description_bounds = CharacterDescriptionBounds{
                    draw.x, draw.x + width, character_health_tabs_y + 1, sheet_bottom};
            }
            break;
        }
    }
    if (character_description_bounds) {
        auto &bounds = *character_description_bounds;
        bounds.left = std::max(sheet_left, bounds.left);
        bounds.right = std::min(sheet_right, bounds.right);
        bounds.top = std::max(sheet_top, bounds.top);
        bounds.bottom = std::min(sheet_bottom, bounds.bottom);
    }
    if (character_description_bounds &&
        character_description_bounds->left < character_description_bounds->right) {
        const auto &bounds = *character_description_bounds;
        CharacterDescriptionBlock current;
        int previous_foreground = -1;
        auto finish = [&] {
            if (!current.rows.empty() && complete_character_description(current.plain))
                character_description_blocks.push_back(std::move(current));
            current = {};
            previous_foreground = -1;
        };
        for (int y = bounds.top; y < bounds.bottom; ++y) {
            const auto &row = screen_rows[static_cast<size_t>(y)];
            const auto fields = split_text_fields(
                row.substr(bounds.left, bounds.right - bounds.left));
            if (fields.empty()) { finish(); continue; }
            // Description occupies a single pane. Exclude decorative glyphs,
            // not the short English clauses or punctuation-only final field.
            int left = sheet_right, right = 0;
            std::string plain;
            for (const auto &field : fields) {
                if (std::any_of(field.text.begin(), field.text.end(),
                        [](unsigned char c) { return c < 0x20 || c > 0x7e; })) continue;
                if (!plain.empty()) plain += ' ';
                plain += field.text;
                left = std::min(left, bounds.left + field.start);
                right = std::max(right, bounds.left + field.end);
            }
            if (plain.empty()) { finish(); continue; }
            if (!current.plain.empty() && !current.plain.ends_with('-')) current.plain += ' ';
            current.plain += plain;
            if (!current.source.empty() && !current.source.ends_with('-')) current.source += ' ';
            bool space = false;
            for (int x = left; x < right; ++x) {
                const unsigned char ch = static_cast<unsigned char>(row[static_cast<size_t>(x)]);
                if (ch == ' ') { space = true; continue; }
                if (space && !current.source.empty() && !current.source.ends_with(' '))
                    current.source += ' ';
                space = false;
                const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
                bool top = false;
                const unsigned char *cell = screen_override
                    ? screen_override + tile * 8 : cell_at(x, y, &top);
                int foreground = 7;
                if (cell) {
                    for (int palette = 0; palette < 16; ++palette) {
                        if (gps_->uccolor[palette][0] == cell[1] &&
                            gps_->uccolor[palette][1] == cell[2] &&
                            gps_->uccolor[palette][2] == cell[3]) {
                            foreground = (palette & 7) | (palette >= 8 ? 64 : 0);
                            break;
                        }
                    }
                }
                if (foreground != previous_foreground) {
                    current.source += "[C:" + std::to_string(foreground & 7) +
                        ":0:" + std::to_string((foreground & 64) ? 1 : 0) + "]";
                    previous_foreground = foreground;
                }
                current.source += static_cast<char>(ch);
            }
            current.rows.push_back({left, y, right - left, row.substr(left, right - left)});
        }
        finish();
    }
    if (description_creation && !character_description_blocks.empty()) {
        // Prefer the original pre-wrap string when every captured row agrees
        // with this entire visible block. In particular, never reuse another
        // random character merely because its opening sentence is identical.
        // An already-open page without captures uses the complete closed frame
        // above until the game rebuilds the box.
        auto normalize_row = [](std::string_view source) {
            std::string normalized;
            bool space = false;
            for (unsigned char ch : source) {
                if (std::isspace(ch)) { space = !normalized.empty(); continue; }
                if (space) normalized.push_back(' ');
                space = false;
                normalized.push_back(static_cast<char>(ch));
            }
            return normalized;
        };
        const auto paragraphs = captured_native_paragraphs();
        bool current_draw = false;
        const auto draws = captured_native_knowledge_draws(&current_draw);
        for (auto &block : character_description_blocks) {
            auto matches_block = [&](const std::vector<std::string> &rows, int width) {
                if (width <= 0 || width > character_description_bounds->right -
                        character_description_bounds->left) return false;
                size_t line = 0;
                for (const auto &row : rows) {
                    const std::string normalized = normalize_row(row);
                    if (normalized.empty()) continue;
                    if (line >= block.rows.size() ||
                        normalized != normalize_row(block.rows[line].source)) return false;
                    ++line;
                }
                return line == block.rows.size();
            };
            const std::string *complete = nullptr;
            for (const auto &draw : draws) {
                if (!draw.document || draw.line != 0 ||
                    draw.x != block.rows.front().x || draw.y != block.rows.front().y ||
                    !matches_block(draw.document->rows, draw.document->width)) continue;
                complete = &draw.document->source;
                break;
            }
            if (!complete) {
                for (auto capture = paragraphs.rbegin(); capture != paragraphs.rend(); ++capture) {
                    if (!matches_block(capture->wrapped_lines, capture->paragraph_width)) continue;
                    complete = &capture->source;
                    break;
                }
            }
            if (complete) {
                // Keep the initial ink color when a plain wrapper source has
                // no color tag; rich sources retain their own inline colors.
                const size_t color_end = block.source.find(']');
                const std::string color = block.source.starts_with("[C:") &&
                    color_end != std::string::npos ? block.source.substr(0, color_end + 1) : "";
                block.source = color + *complete;
            }
        }
    }
    if (!character_description_blocks.empty()) {
        std::string document;
        int left = sheet_right;
        for (const auto &block : character_description_blocks) {
            if (!document.empty()) document += "[B]";
            document += block.source;
            for (const auto &row : block.rows) left = std::min(left, row.x);
        }
        const int width = character_description_bounds->right - left;
        const auto &layout = prepare_native_knowledge_layout(
            document, width, personality_creation, !personality_creation);
        const int description_rule = description_creation ? kAdventureCreationDescriptionRule : -13;
        const int font_pixels = layout.font_pixels;
        const int line_height = layout.line_height_pixels;
        if (!layout.lines.empty()) {
            std::erase_if(result, [&](const Match &match) {
                for (const auto &block : character_description_blocks) {
                    for (const auto &row : block.rows) {
                        if (match.y == row.y && match.x < row.x + row.length &&
                            match.x + match.length > row.x) return true;
                    }
                }
                return false;
            });
            // The Chinese preview expands independently of the English
            // allocation. Every original source row still owns suppression.
            if (line_height > 0) {
                for (const auto &block : character_description_blocks) {
                    for (const auto &row : block.rows) {
                        if (only_y >= 0 && row.y != only_y) continue;
                        result.push_back({row.x, row.y, row.length, description_rule, {}, row.source});
                    }
                }
                if (only_y < 0) {
                    const auto &anchor = character_description_blocks.front().rows.front();
                    const int64_t display_height = static_cast<int64_t>(layout.lines.size()) * line_height;
                    const int64_t pane_top = int64_t(sheet_top) * gps_->tile_pixel_y;
                    const int display_top = static_cast<int>(std::clamp<int64_t>(
                        static_cast<int64_t>(anchor.y) * gps_->tile_pixel_y, pane_top,
                        std::max<int64_t>(pane_top, static_cast<int64_t>(sheet_bottom) *
                            gps_->tile_pixel_y - display_height)));
                    for (size_t i = 0; i < layout.lines.size(); ++i) {
                        const int pixel_y = display_top +
                            static_cast<int>(i) * line_height;
                        Match match{anchor.x, anchor.y, 0, description_rule, layout.lines[i], {}};
                        match.translation_result = layout.translation_result;
                        match.language_converted = config_.language == "zh-Hant";
                        match.layout_x = left;
                        match.layout_y = pixel_y / gps_->tile_pixel_y;
                        match.layout_pixel_y = pixel_y % gps_->tile_pixel_y;
                        match.layout_fixed_baseline = true;
                        match.layout_length = width;
                        match.layout_clip_right = character_description_bounds->right;
                        match.layout_left = true;
                        match.layout_prepared = true;
                        match.layout_line_height_pixels = line_height;
                        for (int color : layout.line_foregrounds[i]) {
                            const int palette = color < 0 ? 7 : (color & 7) + ((color & 64) ? 8 : 0);
                            match.layout_glyph_foreground_rgb.push_back(
                                (gps_->uccolor[palette][0] << 16) |
                                (gps_->uccolor[palette][1] << 8) | gps_->uccolor[palette][2]);
                        }
                        result.push_back(std::move(match));
                    }
                }
            }
        }
    }

    // Character information -> Personality -> Traits/Values contains generated
    // semantic paragraphs. DF first constructs complete sentences and only
    // then wraps them to the current grid width. Matching the physical rows
    // therefore made translation depend on the selected creature and window
    // size, and produced interleaved English/Chinese fragments. Reassemble
    // every native paragraph below the four personality subtabs, translate
    // its sentence grammar, suppress every source row, and reflow Chinese
    // into stable text boxes. Blank rows deliberately start a new block: DF
    // puts outdoor adaptation and similar stable notes below the main facets.
    int personality_subtabs_y = -1;
    std::optional<AsciiPanelFrame> personality_frame;
    for (int y = sheet_top; y < sheet_bottom; ++y) {
        const std::string &row = screen_rows[static_cast<size_t>(y)];
        if ((row.find("Traits") != std::string::npos ||
             row.find("Personality") != std::string::npos) &&
            row.find("Values") != std::string::npos &&
            row.find("Preferences") != std::string::npos &&
            row.find("Needs") != std::string::npos) {
            personality_subtabs_y = y;
            const size_t traits = row.find("Traits");
            const size_t personality = row.find("Personality");
            const int first_tab = static_cast<int>(std::min(traits, personality));
            const int last_tab = static_cast<int>(row.find("Needs") + 5);
            personality_frame = find_graphical_character_panel_frame(
                *gps_, first_tab, last_tab, y);
            if (!personality_frame) {
                personality_frame = find_ascii_panel_frame(
                    first_tab, last_tab, y, sheet_right, sheet_bottom, read_sheet_char);
            }
            break;
        }
    }
    struct PersonalityRow {
        int x = 0;
        int y = 0;
        int length = 0;
        std::string source;
    };
    struct PersonalityBlock {
        std::vector<PersonalityRow> rows;
        std::string source;
        int layout_right = 0;
    };
    std::vector<PersonalityBlock> personality_blocks;
    std::optional<CharacterDescriptionBounds> personality_bounds;
    if (personality_frame) {
        personality_bounds = CharacterDescriptionBounds{
            personality_frame->left + 1, personality_frame->right,
            personality_subtabs_y + 1, personality_frame->bottom};
    } else if (personality_subtabs_y >= 0) {
        // A current native draw can still prove the actual reading width
        // when an outer panel edge is obscured. Match its source ink before
        // borrowing that width; the last English word is never a pane edge.
        bool current_draw = false;
        for (const auto &draw : captured_native_knowledge_draws(&current_draw)) {
            if (!draw.document || !draw.document->personality ||
                draw.y <= personality_subtabs_y || draw.y >= sheet_bottom ||
                draw.x < sheet_left || draw.line < 0 ||
                draw.line >= static_cast<int>(draw.document->rows.size())) continue;
            const int width = draw.document->width;
            if (width <= 0 || width > sheet_right - draw.x) continue;
            const auto &source = draw.document->rows[static_cast<size_t>(draw.line)];
            if (source.size() > static_cast<size_t>(width)) continue;
            const auto &row = screen_rows[static_cast<size_t>(draw.y)];
            int verified = 0;
            bool intact = true;
            for (size_t x = 0; x < source.size(); ++x) {
                if (source[x] == ' ') continue;
                if (row[static_cast<size_t>(draw.x) + x] != source[x]) {
                    intact = false;
                    break;
                }
                ++verified;
            }
            if (!intact || verified < 12) continue;
            personality_bounds = CharacterDescriptionBounds{
                draw.x, draw.x + width, personality_subtabs_y + 1,
                sheet_bottom};
            break;
        }
    }
    if (personality_bounds) {
        auto &bounds = *personality_bounds;
        bounds.left = std::max(sheet_left, bounds.left);
        bounds.right = std::min(sheet_right, bounds.right);
        bounds.top = std::max(sheet_top, bounds.top);
        bounds.bottom = std::min(sheet_bottom, bounds.bottom);
        if (bounds.left >= bounds.right || bounds.top >= bounds.bottom)
            personality_bounds.reset();
    }
    if (personality_subtabs_y >= 0) {
        PersonalityBlock current;
        int current_x = -1;
        auto finish_block = [&]() {
            if (!current.rows.empty()) personality_blocks.push_back(std::move(current));
            current = {};
            current_x = -1;
        };
        auto paragraph_opening = [](std::string_view source) {
            return source.starts_with("Like others in ") ||
                source.starts_with("She ") || source.starts_with("He ") ||
                source.starts_with("It ") || source.starts_with("Her ") ||
                source.starts_with("His ") || source.starts_with("Its ") ||
                source.starts_with("When ") || source.starts_with("Whenever ") ||
                character_preference_likes_body(source).has_value();
        };
        auto append_prose = [](std::string &target, std::string_view source) {
            if (source.empty()) return;
            // Justification can leave a punctuation-only field. Its gap is
            // layout spacing, not part of the sentence/list grammar.
            if (!target.empty() && !target.ends_with('-') &&
                std::string_view(",.!?;:)]}").find(source.front()) == std::string_view::npos)
                target.push_back(' ');
            target.append(source);
        };
        const int bottom = personality_bounds
            ? std::min(sheet_bottom, personality_bounds->bottom) : sheet_bottom;
        for (int y = personality_subtabs_y + 1; y < bottom; ++y) {
            const auto &row = screen_rows[static_cast<size_t>(y)];
            if (!personality_bounds) {
                // Retain the existing conservative recovery when neither
                // a closed frame nor a native row proves one prose column.
                const auto fields = split_text_fields(row);
                const LogicalTextField *selected = nullptr;
                if (!current.rows.empty()) {
                    for (const LogicalTextField &field : fields) {
                        if (std::abs(field.start - current_x) <= 6 &&
                            (!selected || field.text.size() > selected->text.size()))
                            selected = &field;
                    }
                    if (!selected) finish_block();
                }
                if (current.rows.empty()) {
                    for (const LogicalTextField &field : fields) {
                        if (!paragraph_opening(field.text)) continue;
                        selected = &field;
                        current_x = field.start;
                        break;
                    }
                }
                if (!selected) continue;
                append_prose(current.source, selected->text);
                current.rows.push_back({selected->start, y,
                    selected->end - selected->start, selected->text});
                continue;
            }
            const int pane_left = personality_bounds->left;
            const int pane_right = personality_bounds->right;
            const auto fields = split_text_fields(
                row.substr(pane_left, pane_right - pane_left));
            std::string plain;
            int source_left = pane_right, source_right = pane_left;
            // The enclosed pane owns one prose column. Wide gaps separate
            // justified words, never independent fields; keep every fragment
            // and suppress the full span including those original gaps.
            for (const LogicalTextField &field : fields) {
                if (std::any_of(field.text.begin(), field.text.end(),
                        [](unsigned char ch) { return ch < 0x20 || ch == 0x7f; })) continue;
                append_prose(plain, field.text);
                source_left = std::min(source_left, pane_left + field.start);
                source_right = std::max(source_right, pane_left + field.end);
            }
            if (plain.empty()) { finish_block(); continue; }
            if (current.rows.empty() && !paragraph_opening(plain)) continue;
            append_prose(current.source, plain);
            current.layout_right = pane_right;
            current.rows.push_back({source_left, y, source_right - source_left,
                row.substr(source_left, source_right - source_left)});
        }
        finish_block();
    }

    std::vector<std::optional<PersonalityParagraphTranslation>>
        personality_targets;
    std::vector<bool> preference_targets;
    personality_targets.reserve(personality_blocks.size());
    preference_targets.reserve(personality_blocks.size());
    bool recognized_personality_page = false;
    std::string first_failed_personality_source;
    size_t passthrough_personality_sentences = 0;
    for (const PersonalityBlock &block : personality_blocks) {
        auto target = translate_character_preference_paragraph(block.source);
        const bool preference = target && target->translated_sentence_count >= 1;
        if (!target || target->translated_sentence_count < 1) {
            target = translate_personality_facet_paragraph(block.source);
        }
        personality_targets.push_back(std::move(target));
        preference_targets.push_back(preference);
        const auto &target_result = personality_targets.back();
        if (target_result && target_result->translated_sentence_count >= 1 &&
            !block.rows.empty()) {
            recognized_personality_page = true;
            passthrough_personality_sentences +=
                static_cast<size_t>(target_result->passthrough_sentence_count);
            if (first_failed_personality_source.empty() &&
                !target_result->first_passthrough_sentence.empty()) {
                first_failed_personality_source =
                    target_result->first_passthrough_sentence.substr(0, 320);
            }
        } else {
            if (first_failed_personality_source.empty() && !block.source.empty())
                first_failed_personality_source = block.source.substr(0, 320);
        }
    }

    // The same tab strip also exists on Needs. If no block uses either the
    // complete Traits/Values grammar or the generated Preferences grammar,
    // leave that other subtab to its ordinary translation rules.
    if (!personality_blocks.empty() && !recognized_personality_page) {
        const auto failed_preference = std::find_if(
            personality_blocks.begin(), personality_blocks.end(),
            [](const PersonalityBlock &block) {
                return character_preference_likes_body(block.source).has_value();
            });
        if (only_y < 0 && failed_preference != personality_blocks.end()) {
            static std::atomic_bool logged_preference_failure{false};
            if (!logged_preference_failure.exchange(true)) {
                log_line("WARN", "Preference paragraph grammar did not cover: " +
                    failed_preference->source.substr(0, 480));
            }
        }
        return finish_matches();
    }

    size_t translated_personality_blocks = 0;
    size_t translated_preference_blocks = 0;
    size_t failed_personality_blocks = 0;
    std::vector<Match> personality_visible_lines;
    int personality_display_bottom = 0;
    for (size_t block_index = 0;
        block_index < personality_blocks.size(); ++block_index) {
        const PersonalityBlock &block = personality_blocks[block_index];
        const auto &personality_target = personality_targets[block_index];
        if (!personality_target ||
            personality_target->translated_sentence_count < 1 ||
            block.rows.empty()) {
            ++failed_personality_blocks;
            // A failed block stays as untouched native English.  Remove word-
            // level overlays from that rectangle so it cannot become a mixed
            // red/green fragment, but do not suppress its source glyphs.
            std::erase_if(result, [&](const Match &match) {
                return std::any_of(block.rows.begin(), block.rows.end(),
                    [&](const PersonalityRow &row) {
                        return match.y == row.y &&
                            match.x < row.x + row.length &&
                            match.x + match.length > row.x;
                    });
            });
            continue;
        }
        ++translated_personality_blocks;
        if (preference_targets[block_index]) ++translated_preference_blocks;
        int paragraph_x = INT32_MAX;
        int paragraph_right = INT32_MIN;
        for (const PersonalityRow &row : block.rows) {
            paragraph_x = std::min(paragraph_x, row.x);
            paragraph_right = std::max(paragraph_right, row.x + row.length);
        }
        paragraph_right = std::max(paragraph_right, block.layout_right);
        const int paragraph_width = std::max(8, paragraph_right - paragraph_x);
        std::erase_if(result, [&](const Match &match) {
            return std::any_of(block.rows.begin(), block.rows.end(),
                [&](const PersonalityRow &row) {
                    return match.y == row.y && match.x < row.x + row.length &&
                        match.x + match.length > row.x;
                });
        });

        const int span_pixels = std::max(1,
            paragraph_width * gps_->tile_pixel_x - 2 * config_.horizontal_padding);
        const int nominal_pixels = unified_font_pixels();
        // Source suppression and translated drawing are deliberately separate.
        // Each translated block is reflowed strictly inside its own native row
        // rectangle.  Blocks therefore never shift into a later untranslated
        // block, which prevents the English/Chinese overlap seen when coverage
        // was incomplete.
        for (size_t index = 0; index < block.rows.size(); ++index) {
            const PersonalityRow &row = block.rows[index];
            if (only_y >= 0 && row.y != only_y) continue;
            result.push_back({row.x, row.y, row.length, -10, {}, row.source});
        }
        if (only_y < 0) {
            std::string combined_target;
            for (const std::string &target : personality_target->main)
                combined_target += target;
            for (const std::string &target : personality_target->cave_adaptation)
                combined_target += target;
            if (config_.language == "zh-Hant")
                combined_target = localize_display(combined_target, block.source).text;
            const DisplayLanguageScope localized_scope(nullptr, config_.language == "zh-Hant");
            std::vector<uint32_t> codepoints;
            if (!decode_utf8(combined_target, codepoints) || codepoints.empty())
                continue;

            auto units = [](uint32_t cp) { return cp < 0x80 ? 1 : 2; };
            auto nonstarter = [](uint32_t cp) {
                switch (cp) {
                case '.': case '!': case '?': case ';': case ',':
                case ')': case ']': case '}': case '%':
                case 0x3002: case 0x3001: case 0xff01: case 0xff1f:
                case 0xff1b: case 0xff0c: case 0xff1a: case 0xff09:
                case 0x3009: case 0x300b: case 0x300d: case 0x300f:
                case 0x3011: case 0x2019: case 0x201d: case 0x2026:
                    return true;
                default:
                    return false;
                }
            };
            int total_units = 0;
            for (uint32_t cp : codepoints) total_units += units(cp);
            const int font_pixels = nominal_pixels;
            const int capacity_units = std::max(
                8, (span_pixels * 2) / std::max(1, font_pixels));
            const int line_count = std::max(1,
                (total_units + capacity_units - 1) / capacity_units);
            const int line_height = native_text_row_height(gps_);
            const int display_top = std::max(personality_display_bottom,
                block.rows.front().y * gps_->tile_pixel_y);
            personality_display_bottom = display_top + line_count * line_height;
            size_t cursor = 0;
            int remaining_units = total_units;
            for (int line = 0;
                 line < line_count && cursor < codepoints.size(); ++line) {
                const int remaining_lines = line_count - line;
                const int desired = std::min(capacity_units,
                    (remaining_units + remaining_lines - 1) / remaining_lines);
                const size_t start = cursor;
                int consumed = 0;
                while (cursor < codepoints.size()) {
                    const int next = units(codepoints[cursor]);
                    if (line + 1 < line_count && consumed + next > desired &&
                        cursor > start && !nonstarter(codepoints[cursor])) {
                        break;
                    }
                    consumed += next;
                    ++cursor;
                    if (line + 1 < line_count && consumed >= desired &&
                        (cursor >= codepoints.size() ||
                         !nonstarter(codepoints[cursor]))) {
                        break;
                    }
                }
                std::string rendered;
                for (size_t cp = start; cp < cursor; ++cp)
                    append_utf8_codepoint(rendered, codepoints[cp]);
                const PersonalityRow &row = block.rows[std::min(
                    static_cast<size_t>(line), block.rows.size() - 1)];
                Match visible{row.x, row.y, 0, -10, std::move(rendered), {}};
                visible.language_converted = config_.language == "zh-Hant";
                visible.layout_x = paragraph_x;
                const int display_y = display_top + line * line_height;
                visible.layout_y = display_y / gps_->tile_pixel_y;
                visible.layout_pixel_y = display_y % gps_->tile_pixel_y;
                visible.layout_line_height_pixels = line_height;
                visible.layout_fixed_baseline = true;
                visible.layout_length = paragraph_width;
                visible.layout_left = true;
                visible.layout_prepared = true;
                personality_visible_lines.push_back(std::move(visible));
                remaining_units -= consumed;
            }
        }
    }
    result.insert(result.end(),
        std::make_move_iterator(personality_visible_lines.begin()),
        std::make_move_iterator(personality_visible_lines.end()));
    if (only_y < 0 && translated_personality_blocks > 0) {
        static std::atomic_bool logged_personality_translation{false};
        static std::atomic_bool logged_preference_translation{false};
        const bool preference_page =
            translated_preference_blocks == translated_personality_blocks;
        std::atomic_bool &logged = preference_page
            ? logged_preference_translation : logged_personality_translation;
        if (!logged.exchange(true)) {
            const std::string kind = preference_page
                ? "character preference" : "personality";
            log_line("INFO", "Activated complete " + kind +
                " paragraph translation (" +
                std::to_string(translated_personality_blocks) + "/" +
                std::to_string(personality_blocks.size()) +
                " visible block(s))");
        }
    }
    if (only_y < 0 &&
        (failed_personality_blocks > 0 ||
         passthrough_personality_sentences > 0) &&
        !first_failed_personality_source.empty()) {
        static std::atomic_bool logged_personality_failure{false};
        if (!logged_personality_failure.exchange(true)) {
            if (passthrough_personality_sentences > 0) {
                log_line("WARN", "Personality grammar left " +
                    std::to_string(passthrough_personality_sentences) +
                    " sentence(s) untranslated instead of reverting the complete paragraph: " +
                    first_failed_personality_source);
            } else {
                log_line("WARN", "Personality block left intact because grammar did not cover: " +
                    first_failed_personality_source);
            }
        }
    }
    if (!native_knowledge.empty()) {
        std::erase_if(result, [&](const Match &match) {
            return std::any_of(native_knowledge.begin(), native_knowledge.end(),
                [&](const Match &owned) {
                    return owned.length > 0 && match.y == owned.y && match.x < owned.x + owned.length &&
                        owned.x < match.x + match.length;
                });
        });
        for (const Match &match : native_knowledge) {
            if (only_y < 0 || match.y == only_y) result.push_back(match);
        }
    }
    return finish_matches();
}
