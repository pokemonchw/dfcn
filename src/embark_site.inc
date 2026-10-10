// Reclaim news belongs to the same live records as the selection list.
// The original draw uses three-row confirmation controls, with the caption
// in the middle (53.16 ELF: 0x1f458de..0x1f45aeb). Reserve that whole band,
// without requiring its enabled/selected skin to match the list's skin.
std::optional<NativeTextCard> Overlay::capture_embark_reclaim_history() const {
    if (!gps_ || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return std::nullopt;
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            context[y][x] = cell && cell[0] ? cell[0] : ' ';
        }
    const auto records = native_embark_selection_records(*gps_, context);
    for (size_t index = 0; index < records.size(); ++index) {
        const auto &record = records[index];
        if (record.reclaim_y < 0 || std::any_of(records.begin(), records.begin() + index,
                [&](const auto &other) { return embark_same_panel(other.panel, record.panel); }))
            continue;
        const auto &panel = record.panel;
        const int right = panel.x + panel.w;
        const int bottom = record.action_y - 1;
        int list_bottom = panel.y;
        for (const auto &choice : records)
            if (embark_same_panel(choice.panel, panel))
                list_bottom = std::max({list_bottom, choice.box.y + choice.box.h,
                    choice.reclaim_y + 3});
        for (int row = list_bottom; row < bottom; ++row) {
            const auto source = trim_view(std::string_view(context[row]).substr(panel.x, panel.w));
            if (!source.starts_with("In ")) continue;
            auto card = capture_panel_text_card({panel.x, row, panel.w, bottom - row});
            if (!card) break;
            int left = right;
            for (const auto &line : card->rows) left = std::min(left, line.x);
            card->interior.x = left;
            card->interior.w = right - left;
            return card;
        }
    }
    return std::nullopt;
}

// The ecological fields identify the embark information card, but only its
// current closed native frame establishes ownership. No screen-edge width,
// fixed resource row, remembered panel or optional Neighbors heading.
std::optional<NativeTextCard> Overlay::capture_embark_site_card(
        const std::vector<std::string> &rows) const {
    if (gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return std::nullopt;
    constexpr std::array<std::string_view, 4> labels = {
        "Temperature:", "Trees:", "Other Vegetation:", "Surroundings:"
    };
    struct Fact { int x, y, kind; };
    std::vector<Fact> facts;
    for (int y = 0; y < gps_->dimy; ++y) {
        for (size_t kind = 0; kind < labels.size(); ++kind) {
            const size_t x = rows[y].find(labels[kind]);
            if (x != std::string::npos && has_word_boundaries(
                    rows[y], x, x + labels[kind].size()))
                facts.push_back({static_cast<int>(x), y, static_cast<int>(kind)});
        }
    }
    if (facts.size() < 2) return std::nullopt;
    const NativePanelBorders borders(*gps_);
    for (const auto &anchor : facts) {
        const auto panel = native_panel_interior(borders, *gps_, anchor.x,
            anchor.x + static_cast<int>(labels[anchor.kind].size()), anchor.y);
        if (!panel) continue;
        const int right = panel->x + panel->w, bottom = panel->y + panel->h;
        std::array<bool, labels.size()> present{};
        int text_left = right;
        for (const auto &fact : facts) {
            if (fact.x != anchor.x || fact.y < panel->y || fact.y >= bottom ||
                fact.x + static_cast<int>(labels[fact.kind].size()) > right) continue;
            present[fact.kind] = true;
            text_left = std::min(text_left, fact.x);
        }
        if (std::count(present.begin(), present.end(), true) < 2 || text_left >= right)
            continue;

        auto card = capture_panel_text_card(*panel);
        if (!card) continue;
        // The ecological column supplies the native inner padding. Resources
        // can start one cell farther left; that is source geometry only.
        card->interior = {text_left, panel->y, right - text_left, panel->h};
        return card;
    }
    return std::nullopt;
}

void Overlay::append_embark_site_headings(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    const auto captures = captured_clipped_captions();
    for (size_t index = 0; index < card.rows.size(); ++index) {
        const auto &row = card.rows[index];
        // This card lists the biome/region before its containing landform.
        // Own only the initial contiguous name block; the native blank row
        // or first non-name ends it before ecology, rivers and neighbors.
        if (index > 0 && row.y != card.rows[index - 1].y + 1) break;
        std::string complete = row.source;
        for (const auto &capture : captures)
            if (capture.x == row.x && capture.y == row.y && capture.visible == row.source) {
                complete = capture.complete;
                break;
            }
        const std::string source = normalize_utterance(complete);
        if (!source.starts_with("The ") || !generated_title_shape(source)) break;
        auto target = translate_world_landform_heading(source);
        if (!target) target = translate_world_region_heading(source);
        if (!target) continue;
        Match match{row.x, row.y, static_cast<int>(row.source.size()),
            kEmbarkSiteHeadingRule, std::move(*target), row.source};
        match.layout_foreground_rgb = row.foregrounds.front();
        // Claim the complete field before exact names and generic word rules.
        // Shared card composition still owns its alignment, width and colors.
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
    }
}

static std::string embark_site_complete_name(const NativeTextCardRow &row,
        const std::vector<NativeClippedCaption> &captures) {
    for (const auto &capture : captures)
        if (capture.x == row.x && capture.y == row.y && capture.visible == row.source)
            return normalize_utterance(capture.complete);
    return normalize_utterance(row.source);
}

static std::string embark_site_paired_native_name(const NativeTextCard &card,
        int y, std::string_view gloss, const std::vector<NativeClippedCaption> &captures) {
    for (auto it = card.rows.rbegin(); it != card.rows.rend(); ++it) {
        if (it->y >= y) continue;
        const std::string source = embark_site_complete_name(*it, captures);
        // Half-font draws repeat a field on its complementary physical row.
        if (source == gloss) continue;
        return generated_title_shape(source) ? source : std::string{};
    }
    return {};
}

void Overlay::append_embark_site_names(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    const auto captures = captured_clipped_captions();
    bool locations = false;
    const auto claim = [&](const NativeTextCardRow &row, std::string target) {
        if (rows[row.y].compare(row.x, row.source.size(), row.source) != 0) return;
        std::erase_if(matches, [&](const Match &match) {
            return match.y == row.y && match.x < row.x + static_cast<int>(row.source.size()) &&
                row.x < match.x + match.length;
        });
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        if (only_y >= 0 && only_y != row.y) return;
        Match match{row.x, row.y, static_cast<int>(row.source.size()),
            kEmbarkSiteRowRule, std::move(target), row.source};
        match.layout_foreground_rgb = row.foregrounds.front();
        matches.push_back(std::move(match));
    };
    for (size_t index = 0; index < card.rows.size(); ++index) {
        const auto &row = card.rows[index];
        const std::string source = embark_site_complete_name(row, captures);
        if (source.starts_with("Surroundings:")) { locations = true; continue; }
        if (source.starts_with("Neighbors:")) break;
        if (!locations) continue;
        if (source.size() >= 2 && source.front() == '"' && source.back() == '"') {
            const std::string native = embark_site_paired_native_name(card, row.y, source, captures);
            if (native.empty()) continue;
            // The complete native/English pair selects a real site, including
            // its WORD/POS and type. Never borrow a type from a same-name site.
            const auto identity = resolve_site_reference_name(native + ", " + source);
            auto gloss = identity ? translate_site_display(*identity, source) : std::nullopt;
            if (!gloss)
                if (auto core = translate_english_site_name(source)) gloss = "“" + *core + "”";
            if (gloss) claim(row, *gloss);
            const auto phonetic = identity ? translate_site_display(*identity, native) : std::nullopt;
            for (size_t previous = index; previous-- > 0;) {
                const auto &native_row = card.rows[previous];
                const std::string field = embark_site_complete_name(native_row, captures);
                if (field == source) continue;
                if (field != native) break;
                claim(native_row, phonetic.value_or(transliterate_site_spelling(native)));
            }
            continue;
        }
        // River captions select the English geographical name. They share
        // whole-name composition, but have no world_site type to append.
        for (std::string_view prefix : {"Brook:", "Stream:", "Minor River:", "Major River:"}) {
            if (!source.starts_with(prefix)) continue;
            const auto label = exact_literal_translation(prefix);
            const auto name = translate_english_site_name(trim_view(std::string_view(source).substr(prefix.size())));
            if (label && name) claim(row, *label + *name);
            break;
        }
    }
}

void Overlay::append_embark_site_ecology(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    // The native ecological field supplies the meaning of short values such
    // as Temperate and Calm. Resolve the complete label/value production
    // before generic words or a mod's unrelated item/creature vocabulary.
    constexpr std::array<std::string_view, 4> labels = {
        "Temperature:", "Trees:", "Other Vegetation:", "Surroundings:"
    };
    for (const auto &row : card.rows) {
        const auto label = std::find_if(labels.begin(), labels.end(), [&](auto prefix) {
            return row.source.starts_with(prefix);
        });
        if (label == labels.end() || row.foregrounds.size() != row.source.size() ||
                rows[row.y].compare(row.x, row.source.size(), row.source) != 0) continue;
        const auto target = exact_literal_translation(
            "Embark site ecology: " + normalize_utterance(row.source));
        if (!target) continue;
        const size_t value_at = row.source.find_first_not_of(' ', label->size());
        std::vector<uint32_t> cps;
        if (value_at == std::string::npos || !decode_utf8(*target, cps)) continue;
        Match field{row.x, row.y, static_cast<int>(row.source.size()),
            kEmbarkSiteRowRule, *target, row.source};
        field.layout_foreground_rgb = row.foregrounds.front();
        bool value = false;
        for (uint32_t cp : cps) {
            field.layout_glyph_foreground_rgb.push_back(row.foregrounds[value ? value_at : 0]);
            if (cp == ':' || cp == 0xff1a) value = true;
        }
        std::erase_if(matches, [&](const Match &match) {
            return match.y == row.y && match.x < row.x + static_cast<int>(row.source.size()) &&
                row.x < match.x + match.length;
        });
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        if (only_y < 0 || only_y == row.y) matches.push_back(std::move(field));
    }
}

void Overlay::append_embark_site_resources(NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    // Native reserves a fixed resource band even when the preceding site list
    // grows into it. Read complete addst fields before their overwritten grid
    // fragments reach name/word matching. Vocabulary only identifies fields;
    // contextual dictionary entries retain resource meanings when extensions
    // give the same English words unrelated item or color meanings.
    constexpr std::array<std::string_view, 25> resources = {
        "Shallow Clay", "Shallow Sand", "Clay", "Sand", "Iron", "Gold",
        "Silver", "Copper", "Nickel", "Zinc", "Platinum", "Tin", "Lead",
        "Extremely deep soil", "Very deep soil", "Deep soil", "Some soil", "Little soil",
        "Varied aquifer", "Heavy aquifer", "Light aquifer", "Aquifer", "Ice",
        "Flux stone layers", "Flux stone layer"
    };
    struct Resource { size_t at; std::string_view source; std::string target; };
    const auto parse = [&](std::string_view source) {
        std::vector<Resource> parts;
        size_t cursor = 0;
        while (cursor < source.size()) {
            while (cursor < source.size() && source[cursor] == ' ') ++cursor;
            if (cursor == source.size()) break;
            const auto term = std::find_if(resources.begin(), resources.end(), [&](auto name) {
                return source.substr(cursor, name.size()) == name &&
                    (cursor + name.size() == source.size() || source[cursor + name.size()] == ' ');
            });
            if (term == resources.end()) return std::vector<Resource>{};
            auto target = exact_literal_translation("Embark site resource: " + std::string(*term));
            if (!target) target = exact_literal_translation(*term);
            parts.push_back({cursor, *term, target ? *target : std::string(*term)});
            cursor += term->size();
        }
        return parts;
    };
    std::vector<NativeDrawnTextRow> draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        draws = g_native_drawn_text_rows;
        draws.insert(draws.end(), g_native_drawn_top_text_rows.begin(), g_native_drawn_top_text_rows.end());
        draws.insert(draws.end(), g_native_overwritten_text_rows.begin(), g_native_overwritten_text_rows.end());
    }
    std::sort(draws.begin(), draws.end(), [](const auto &a, const auto &b) {
        return a.sequence < b.sequence;
    });
    int ecology_bottom = card.interior.y, neighbors_y = card.interior.y + card.interior.h;
    for (const auto &row : card.rows) {
        if (row.source.starts_with("Surroundings:")) ecology_bottom = row.y;
        if (row.source.starts_with("Neighbors:")) neighbors_y = row.y;
    }
    const int right = card.interior.x + card.interior.w;
    const auto same_row = [&](const NativeDrawnTextRow &draw, int y) {
        if (draw.y == y) return true;
        if (draw.y < 0 || draw.y >= gps_->dimy || y < 0 || y >= gps_->dimy) return false;
        const auto *flags = draw.top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        if (!flags) return false;
        constexpr uint32_t halves = (1u << 3) | (1u << 4);
        const auto half = flags[static_cast<size_t>(draw.x) * gps_->dimy + draw.y] & halves;
        const int mate = half == (1u << 3) ? draw.y + 1 : half == (1u << 4) ? draw.y - 1 : -1;
        return y == mate && (flags[static_cast<size_t>(draw.x) * gps_->dimy + y] & halves) ==
            (half == (1u << 3) ? (1u << 4) : (1u << 3));
    };
    std::unordered_set<int> recovered;
    for (const auto &row : card.rows) {
        if (row.y <= ecology_bottom || row.y >= neighbors_y) continue;
        // The same ecology frame is also used by adventure travel. Its
        // complete task/rumor owner has already translated these rows; a
        // generated name that resembles a metal cannot become a resource.
        if (std::any_of(matches.begin(), matches.end(), [&](const Match &match) {
                return match.rule == kWorldSiteHistoryRule && match.y == row.y;
            })) continue;
        std::vector<const NativeDrawnTextRow *> current;
        for (const auto &draw : draws)
            if (draw.sequence && draw.foreground_rgb >= 0 && draw.x >= row.x && draw.x < right &&
                same_row(draw, row.y) && !draw.source.empty()) current.push_back(&draw);
        std::array<std::vector<int>, 2> owners{
            std::vector<int>(gps_->dimx, -1), std::vector<int>(gps_->dimx, -1)};
        std::vector<std::vector<Resource>> terms;
        uint64_t first_resource = UINT64_MAX;
        for (size_t i = 0; i < current.size(); ++i) {
            const auto &draw = *current[i];
            terms.push_back(parse(draw.source));
            if (!terms.back().empty()) first_resource = std::min(first_resource, draw.sequence);
            const int end = std::min(right, draw.x + static_cast<int>(draw.source.size()));
            for (int x = draw.x; x < end; ++x) owners[draw.top_layer ? 1 : 0][x] = static_cast<int>(i);
        }
        // Replay only this native pass, then prove its final bytes AND colors
        // against the live card. A previous frame or a covered panel cannot
        // authorize replacing visible text, even if a resource prefix agrees.
        bool proven = first_resource != UINT64_MAX;
        for (int x = row.x; proven && x < right; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, row.y, &top);
            const unsigned char actual = cell && cell[0] ? cell[0] : ' ';
            const int owner = owners[top ? 1 : 0][x];
            if (owner < 0) { proven = actual == ' '; continue; }
            const auto &draw = *current[owner];
            proven = actual == static_cast<unsigned char>(draw.source[x - draw.x]) &&
                (actual == ' ' || (cell && draw.foreground_rgb ==
                    ((cell[1] << 16) | (cell[2] << 8) | cell[3])));
        }
        Match resource{row.x, row.y, static_cast<int>(row.source.size()),
            kEmbarkSiteRowRule, {}, row.source};
        resource.native_embark_resource = true;
        const auto append = [](Match &line, std::string_view text, int color) {
            line.target += text;
            std::vector<uint32_t> cps;
            if (decode_utf8(std::string(text), cps))
                line.layout_glyph_foreground_rgb.insert(line.layout_glyph_foreground_rgb.end(), cps.size(), color);
        };
        std::string site_source(static_cast<size_t>(right - row.x), ' ');
        int site_color = -1;
        if (proven) {
            for (size_t i = 0; i < current.size(); ++i) {
                const auto &draw = *current[i];
                bool top = false;
                cell_at(draw.x, row.y, &top);
                if (draw.top_layer != top) continue;
                if (!terms[i].empty()) {
                    for (const auto &term : terms[i]) {
                        const int x = draw.x + static_cast<int>(term.at);
                        // Earlier resources replaced at the same position do
                        // not belong to the selected location's final record.
                        if (x >= right || owners[top ? 1 : 0][x] != static_cast<int>(i)) continue;
                        if (!resource.target.empty()) append(resource, "、", draw.foreground_rgb);
                        append(resource, term.target, draw.foreground_rgb);
                    }
                } else if (draw.sequence < first_resource) {
                    const size_t count = std::min(draw.source.size(), static_cast<size_t>(right - draw.x));
                    site_source.replace(static_cast<size_t>(draw.x - row.x), count, draw.source, 0, count);
                    if (draw.source.find_first_not_of(' ') != std::string::npos) site_color = draw.foreground_rgb;
                } else if (draw.source.find_first_not_of(' ') != std::string::npos) {
                    // An unrelated later caption is not an old site suffix.
                    proven = false;
                    break;
                }
            }
        }
        if (!proven || resource.target.empty()) {
            // Intact rows need no draw recovery. Keep this strict fallback;
            // never strip unknown suffixes by vocabulary or color alone.
            const auto parts = parse(row.source);
            if (parts.empty()) continue;
            resource.target.clear();
            resource.layout_glyph_foreground_rgb.clear();
            for (const auto &part : parts) {
                const int color = row.foregrounds[part.at];
                if (!resource.target.empty()) append(resource, "、", color);
                append(resource, part.target, color);
            }
            site_source.clear();
        }
        const auto place = [&](Match &line) {
            line.layout_x = card.interior.x;
            line.layout_y = row.y;
            line.layout_length = card.interior.w;
            line.layout_clip_right = right;
            line.layout_left = true;
            line.layout_foreground_rgb = line.layout_glyph_foreground_rgb.front();
            line.layout_font_pixels = std::clamp(static_cast<int>(gps_->tile_pixel_y * config_.font_scale),
                1, gps_->tile_pixel_y);
            line.layout_lock_font_pixels = true;
            line.layout_line_height_pixels = gps_->tile_pixel_y;
        };
        place(resource);
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        std::erase_if(matches, [&](const Match &match) {
            return match.y == row.y && match.x < row.x + static_cast<int>(row.source.size()) &&
                row.x < match.x + match.length;
        });
        recovered.insert(row.y);
        if (only_y >= 0 && only_y != row.y) continue;
        matches.push_back(std::move(resource));
        const std::string source = normalize_utterance(site_source);
        if (!source.empty() && site_color >= 0) {
            std::optional<std::string> target;
            if (source.size() >= 2 && source.front() == '"' && source.back() == '"') {
                const auto captures = captured_clipped_captions();
                const std::string native = embark_site_paired_native_name(card, row.y, source, captures);
                const auto identity = native.empty() ? std::nullopt
                    : resolve_site_reference_name(native + ", " + source);
                if (identity) target = translate_site_display(*identity, source);
                if (!target)
                    if (auto core = translate_english_site_name(source)) target = "“" + *core + "”";
            }
            if (!target) target = translate_site_reference(source);
            if (!target) target = exact_literal_translation(source);
            if (!target) target = translate_procedural_fragment(source);
            if (!target && config_.compositional_rules) target = translate_compositional(source);
            // The resource row already owns every physical byte, including
            // old-name islands between metals. This restored site is display
            // only; it cannot claim a second mask at the overwritten position.
            Match site{row.x, row.y, 0, kEmbarkSiteRowRule, {}, {}};
            append(site, target ? *target : native_text_to_utf8(source), site_color);
            site.native_hover_untranslated = !target;
            if (!target) site.native_help_review_source = source;
            place(site);
            const size_t tile = static_cast<size_t>(row.x) * gps_->dimy + row.y;
            bool top = false;
            cell_at(row.x, row.y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const uint32_t half = flags ? flags[tile] & ((1u << 3) | (1u << 4)) : 0;
            if (half == (1u << 4)) continue;
            site.native_split_text = half == (1u << 3);
            site.native_split_top_y = row.y;
            if (site.native_split_text) site.layout_pixel_y = gps_->tile_pixel_y / 2;
            matches.push_back(std::move(site));
        }
    }
    // These rows already have complete targets and physical masks. Generic
    // card composition must not put their overwritten English back again.
    std::erase_if(card.rows, [&](const auto &row) { return recovered.contains(row.y); });
}

void Overlay::layout_embark_site_card(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    std::vector<std::vector<Match *>> rows;
    int left = -1, right = -1;
    for (Match &match : prepared_matches_) {
        if (match.rule != kEmbarkSiteRowRule || match.target.empty() || match.native_split_duplicate) continue;
        left = match.layout_x;
        right = left + match.layout_length;
        rows.push_back({&match});
    }
    if (rows.empty()) return;
    const NativePanelBorders borders(*gps_);
    std::optional<SDL_Rect> panel;
    for (const auto &row : rows) {
        const Match &match = *row.front();
        if (match.length <= 0) continue;
        panel = native_panel_interior(borders, *gps_, match.x, match.x + match.length, match.y);
        if (panel) break;
    }
    if (!panel) return;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const SDL_Rect card_clip{origin_x + panel->x * tile_w, origin_y + panel->y * tile_h,
        panel->w * tile_w, panel->h * tile_h};
    const auto source_y = [](const Match &match) {
        return match.native_split_text ? match.native_split_top_y : match.y;
    };
    int resources_end = -1;
    std::vector<Match *> moving;
    for (const auto &row : rows) {
        moving.push_back(row.front());
        if (row.front()->native_embark_resource)
            resources_end = std::max(resources_end, source_y(*row.front()));
    }
    // Recovered site rows share a physical y with resources. Keep the site's
    // complete list first, then its resource section, then the native neighbors.
    // Their source y/length never change: only the display order is different.
    std::stable_sort(rows.begin(), rows.end(), [&](const auto &a, const auto &b) {
        const auto key = [&](const Match &match) {
            return std::tuple{match.native_embark_resource ? resources_end : source_y(match),
                match.native_embark_resource, source_y(match)};
        };
        return key(*a.front()) < key(*b.front());
    });
    // Compact unused native river slots, retaining a blank line between
    // sections. Moving backwards in source y must still advance one display
    // row; a restored site and its resource cannot occupy the same baseline.
    int display_y = source_y(*rows.front().front());
    const Match *previous = nullptr;
    int previous_height = 1;
    for (const auto &row : rows) {
        Match &match = *row.front();
        if (previous) {
            const bool section = previous->native_embark_resource != match.native_embark_resource ||
                source_y(match) > source_y(*previous) + previous_height;
            display_y += previous_height + (section ? 1 : 0);
        }
        previous_height = match.native_split_text ? 2 : 1;
        match.layout_y = display_y;
        // Commit the display baseline before the shared fitter captures its
        // row clip. Native source rows still own suppression, not placement
        // or the vertical clip of this compacted card.
        match.layout_fixed_baseline = true;
        match.layout_pixel_y = match.native_split_text ? gps_->tile_pixel_y / 2 : 0;
        match.layout_reflowed_paragraph = true;
        previous = &match;
    }
    layout_fortress_text_rows(renderer, rows, left, right, true, true, moving);

    // The four ecological label/value rows are a table, not four unrelated
    // colon strings. Split their EXISTING translated text and color vectors,
    // measure the widest label, then reuse the shared fixed-font column fitter.
    // Names, rivers, resources and neighbors remain full-width text rows.
    struct Field { Match *line; size_t colon; std::vector<uint32_t> text; };
    std::vector<Field> fields;
    int label_width = 0;
    const int pixels = rows.front().front()->layout_font_pixels;
    const int padding = config_.horizontal_padding;
    for (const auto &row : rows) {
        Match &match = *row.front();
        if (!match.source.starts_with("Temperature:") && !match.source.starts_with("Trees:") &&
            !match.source.starts_with("Other Vegetation:") && !match.source.starts_with("Surroundings:"))
            continue;
        std::vector<uint32_t> cps;
        if (!decode_utf8(match.target, cps) || cps.size() != match.layout_glyph_foreground_rgb.size()) continue;
        const auto colon = std::find_if(cps.begin(), cps.end(), [](uint32_t cp) {
            return cp == ':' || cp == 0xff1a;
        });
        if (colon == cps.end() || colon + 1 == cps.end()) continue;
        const size_t end = static_cast<size_t>(colon - cps.begin()) + 1;
        std::string label;
        for (size_t i = 0; i < end; ++i) append_utf8_codepoint(label, cps[i]);
        const auto *glyph = get_glyph_texture(renderer, label,
            (right - left) * tile_w, tile_h, pixels, 0, true);
        if (!glyph || !glyph->texture) continue;
        label_width = std::max(label_width, glyph->width);
        fields.push_back({&match, end, std::move(cps)});
    }
    const int divider = left + (label_width + 2 * padding + tile_w - 1) / tile_w;
    const int value_left = divider + 1;
    if (fields.size() >= 2 && value_left < right - 1) {
        std::vector<Match> values;
        values.reserve(fields.size());
        std::vector<std::vector<Match *>> labels, value_rows;
        for (const auto &field : fields) {
            Match &label = *field.line;
            Match value = label;
            size_t first = field.colon;
            while (first < field.text.size() && field.text[first] == ' ') ++first;
            if (first == field.text.size()) continue;
            label.target.clear();
            value.target.clear();
            for (size_t i = 0; i < field.colon; ++i) append_utf8_codepoint(label.target, field.text[i]);
            for (size_t i = first; i < field.text.size(); ++i) append_utf8_codepoint(value.target, field.text[i]);
            value.layout_glyph_foreground_rgb.erase(value.layout_glyph_foreground_rgb.begin(),
                value.layout_glyph_foreground_rgb.begin() + first);
            label.layout_glyph_foreground_rgb.resize(field.colon);
            value.layout_foreground_rgb = value.layout_glyph_foreground_rgb.front();
            values.push_back(std::move(value));
            labels.push_back({&label});
            value_rows.push_back({&values.back()});
        }
        layout_fortress_text_rows(renderer, labels, left, divider);
        layout_fortress_text_rows(renderer, value_rows, value_left, right);
        for (Match &value : values) {
            // The original full row owns source suppression/review. The
            // display-only value must neither mask nor collect that row twice.
            value.length = 0;
            value.source.clear();
            value.native_hover_untranslated = false;
        }
        prepared_matches_.insert(prepared_matches_.end(), std::make_move_iterator(values.begin()),
            std::make_move_iterator(values.end()));
    }
    // Recovered sites can add display rows. Keep every relocated row and
    // ecological value inside the same current native card, including its
    // lower edge, without reapplying the old writer's source-row clip.
    for (Match &match : prepared_matches_) {
        if (match.rule != kEmbarkSiteRowRule || !match.layout_native_clip) continue;
        SDL_Rect visible{};
        match.layout_native_clip = SDL_IntersectRect(&*match.layout_native_clip, &card_clip, &visible)
            ? visible : SDL_Rect{};
    }
    static bool logged = false;
    if (!logged) {
        log_line("INFO", "Embark site layout: native frame, shared inset/font, colored resource separators and compact sections");
        logged = true;
    }
}
