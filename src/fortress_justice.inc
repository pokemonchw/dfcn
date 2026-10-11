struct FortressJusticeBand {
    int tabs_y;
    SDL_Rect panel;
};

static constexpr std::array<std::string_view, 6> fortress_justice_tabs = {{
    "Open cases", "Closed cases", "Cold cases", "Fortress guard", "Convicts", "Intelligence"
}};

static std::optional<FortressJusticeBand> fortress_justice_band(
        const graphicst &gps, const std::vector<std::string> &rows) {
    const NativePanelBorders borders(gps);
    for (int y = 0; y < static_cast<int>(rows.size()); ++y) {
        size_t cursor = 0;
        int first = -1;
        for (const auto caption : fortress_justice_tabs) {
            const auto at = rows[y].find(caption, cursor);
            if (at == std::string::npos ||
                !(has_word_boundaries(rows[y], at, at + caption.size()) ||
                  is_ascii_tab_caption(rows[y], at, at + caption.size()))) {
                first = -1;
                break;
            }
            if (first < 0) first = static_cast<int>(at);
            cursor = at + caption.size();
        }
        if (first < 0) continue;
        if (const auto panel = native_panel_interior(borders, gps,
                first, static_cast<int>(cursor), y)) return FortressJusticeBand{y, *panel};
    }
    return std::nullopt;
}

// nineslice_horizontal can draw just the upper and lower skin rows. Justice
// uses that compact form for actions; its caption occupies both half rows.
static std::optional<SDL_Rect> fortress_justice_button_rect(
        const graphicst &gps, int first, int last, int y, bool bottom_caption = false) {
    if (const auto box = native_button_text_rect(gps, first, last, y, bottom_caption)) return box;
    const bool classic = native_ui_classic().value_or(false);
    const int32_t (*skins[])[3] = {
        native_texture_button_horizontal_option_active(gps),
        native_texture_button_horizontal_option_inactive(gps),
        native_texture_button_horizontal_option_remove(gps),
        native_texture_button_horizontal_option_confirm(gps),
    };
    for (const auto *skin : skins) {
        for (int top = std::max(0, y - 1); top <= y && top + 1 < gps.dimy; ++top) {
            const auto pair = [&](int x, int column, bool caption = false) {
                for (int row = 0; row < 2; ++row)
                    if (!native_ui_skin_at(gps, x, top + row, skin[column][row * 2], classic) &&
                        !(caption && classic && native_ui_skin_at(
                            gps, x, top + row, skin[1][1], true, true))) return false;
                return true;
            };
            if (!pair(first, 1, true)) continue;
            int left = first, right = first;
            while (left > 0 && pair(left, 1, true)) --left;
            while (right < gps.dimx && pair(right, 1, true)) ++right;
            if (left < first && right >= last && right < gps.dimx &&
                pair(left, 0) && pair(right, 2))
                return SDL_Rect{left + 1, top, right - left - 1, 2};
        }
    }
    return std::nullopt;
}

// Tab identity must be resolved before generic occluded-caption recovery.
// Otherwise that recovery owns Intelligence as a dictionary word (or owns
// its exposed prefix as a name), and finish_matches discards the page match.
void Overlay::append_fortress_justice_tabs(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            // The background pass reads current native metadata. Composite
            // ink suppression is not evidence that a tab ceased to exist.
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            const auto ch = NativeUiReadScope::background_view(gps_)
                ? (cell ? cell[0] : 0) : visible_char_at(x, y);
            if (ch) context[y][x] = ch;
        }
    const auto frames = native_text_overlay_frames(*gps_);
    const auto occluders = frames.empty() ? nullptr
        : std::make_shared<const std::vector<SDL_Rect>>(frames);
    const auto covered = [&](int x, int y) {
        return std::any_of(frames.begin(), frames.end(), [&](const SDL_Rect &box) {
            return x >= box.x && x < box.x + box.w &&
                y >= box.y && y < box.y + box.h;
        });
    };
    // Restore only bytes hidden by a current overlay. All exposed bytes must
    // still agree with the current draw; never infer a word from its prefix.
    const auto restore = [&](int x, int y, std::string_view caption) {
        if (y < 0 || y >= gps_->dimy || x < 0 ||
            x + static_cast<int>(caption.size()) > gps_->dimx) return;
        bool exposed = false;
        for (size_t i = 0; i < caption.size(); ++i) {
            if (covered(x + static_cast<int>(i), y)) continue;
            if (context[y][x + i] != caption[i]) return;
            exposed = true;
        }
        if (exposed) context[y].replace(x, caption.size(), caption);
    };
    if (occluders) {
        for (int y = 0; y < gps_->dimy; ++y) {
            if (only_y >= 0 && y != only_y) continue;
            std::string base(gps_->dimx, ' ');
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = gps_->screen[(static_cast<size_t>(x) * gps_->dimy + y) * 8];
                if (ch) base[x] = ch;
            }
            for (const auto caption : fortress_justice_tabs) {
                const auto x = base.find(caption);
                if (x != std::string::npos) restore(static_cast<int>(x), y, caption);
            }
        }
        auto draws = captured_native_drawn_text_rows(false);
        const auto top_draws = captured_native_drawn_text_rows(true);
        draws.insert(draws.end(), top_draws.begin(), top_draws.end());
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            draws.insert(draws.end(), g_native_overwritten_text_rows.begin(),
                g_native_overwritten_text_rows.end());
        }
        for (const auto &draw : draws) {
            const auto caption = trim_view(draw.source);
            if (std::find(fortress_justice_tabs.begin(), fortress_justice_tabs.end(), caption)
                    == fortress_justice_tabs.end()) continue;
            restore(draw.x + static_cast<int>(caption.data() - draw.source.data()), draw.y, caption);
        }
    }
    // Own the main tab band before generic words and recovered hover labels.
    // Its six ordered native captions identify the context independently of
    // the translated matches and of a panel border hidden by a help card.
    for (int y = 0; y < gps_->dimy; ++y) {
        if (only_y >= 0 && y != only_y) continue;
        std::array<int, fortress_justice_tabs.size()> starts{};
        size_t cursor = 0;
        bool complete = true;
        for (size_t i = 0; i < fortress_justice_tabs.size(); ++i) {
            const auto caption = fortress_justice_tabs[i];
            const auto at = context[y].find(caption, cursor);
            if (at == std::string::npos ||
                !(has_word_boundaries(context[y], at, at + caption.size()) ||
                  is_ascii_tab_caption(context[y], at, at + caption.size()))) {
                complete = false;
                break;
            }
            starts[i] = static_cast<int>(at);
            cursor = at + caption.size();
        }
        if (!complete) continue;
        for (size_t i = 0; i < fortress_justice_tabs.size(); ++i) {
            const auto caption = fortress_justice_tabs[i];
            auto target = exact_literal_translation("Justice tab: " + std::string(caption));
            if (!target) target = exact_literal_translation(caption);
            if (!target) continue;
            const int x = starts[i], length = static_cast<int>(caption.size());
            std::erase_if(matches, [&](const Match &other) {
                return other.y == y && other.x < x + length && x < other.x + other.length;
            });
            Match label{x, y, length, kFortressJusticeTabRule, *target, std::string(caption)};
            label.native_hover_background = occluders != nullptr;
            label.native_help_background_frames = occluders;
            bool top = false;
            if (const auto *cell = cell_at(x, y, &top))
                label.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            matches.push_back(std::move(label));
            for (int dx = 0; dx < length; ++dx)
                if (!covered(x + dx, y)) rows[y][x + dx] = ' ';
        }
    }
}

// Cases and actions are native buttons; each detail is a complete typed sentence.
void Overlay::append_fortress_justice_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            const auto ch = NativeUiReadScope::background_view(gps_)
                ? (cell ? cell[0] : 0) : visible_char_at(x, y);
            if (ch) context[y][x] = ch;
        }
    const auto band = fortress_justice_band(*gps_, context);
    if (!band) return;
    const int right = band->panel.x + band->panel.w;
    const int bottom = band->panel.y + band->panel.h;
    // Intelligence's complete subtab band owns these UI captions before
    // procedural names can transliterate them or interpret Plots as land.
    // Match both native half-font rows, including raw-layer suppression.
    static constexpr std::array<std::string_view, 4> intelligence_tabs = {{
        "Interrogations", "Actors", "Organizations", "Plots"
    }};
    int actors_body_y = -1;
    int organizations_body_y = -1;
    int plots_body_y = -1;
    bool interrogations_selected = false;
    for (int y = band->tabs_y + 1; y < std::min(bottom, band->tabs_y + 6); ++y) {
        std::array<int, intelligence_tabs.size()> starts{};
        size_t cursor = static_cast<size_t>(band->panel.x);
        bool complete = true;
        for (size_t i = 0; i < intelligence_tabs.size(); ++i) {
            const auto caption = intelligence_tabs[i];
            const auto at = context[y].find(caption, cursor);
            if (at == std::string::npos || at + caption.size() > static_cast<size_t>(right) ||
                !(has_word_boundaries(context[y], at, at + caption.size()) ||
                  is_ascii_tab_caption(context[y], at, at + caption.size()))) {
                complete = false;
                break;
            }
            starts[i] = static_cast<int>(at);
            cursor = at + caption.size();
        }
        if (!complete) continue;
        const auto color_at = [&](int x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
        };
        // Organizations can be disabled, with a third caption color. The
        // two enabled neighbours establish Actors' selected caption instead.
        const int actor_color = color_at(starts[1]);
        const int report_color = color_at(starts[0]);
        const int plot_color = color_at(starts[3]);
        const int organization_color = color_at(starts[2]);
        if (organization_color >= 0 && actor_color >= 0 && report_color >= 0 &&
                organization_color != actor_color && actor_color == report_color &&
                actor_color == plot_color)
            organizations_body_y = y + 1;
        if (plot_color >= 0 && actor_color >= 0 && report_color >= 0 &&
                plot_color != actor_color && actor_color == report_color)
            plots_body_y = y + 1;
        if (actor_color >= 0 && report_color >= 0 &&
            actor_color != report_color && report_color == plot_color)
            actors_body_y = y + 1;
        if (report_color >= 0 && actor_color >= 0 &&
            report_color != actor_color && actor_color == plot_color)
            interrogations_selected = true;
        for (size_t i = 0; i < intelligence_tabs.size(); ++i) {
            const auto caption = intelligence_tabs[i];
            const int x = starts[i], length = static_cast<int>(caption.size());
            const auto target = exact_literal_translation(
                "Justice intelligence tab: " + std::string(caption));
            if (!target || rows[y].compare(x, length, caption) != 0) continue;
            std::erase_if(matches, [&](const Match &other) {
                return other.y == y && other.x < x + length && x < other.x + other.length;
            });
            if (only_y < 0 || only_y == y) {
                Match label{x, y, length, kFortressJusticeTabRule, *target, std::string(caption)};
                label.layout_x = x;
                label.layout_length = length;
                bool top = false;
                if (const auto *cell = cell_at(x, y, &top))
                    label.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                matches.push_back(std::move(label));
            }
            std::fill_n(rows[y].begin() + x, length, ' ');
        }
    }
    const auto captures = captured_clipped_captions();
    auto draws = captured_native_drawn_text_rows(false);
    const auto top_draws = captured_native_drawn_text_rows(true);
    draws.insert(draws.end(), top_draws.begin(), top_draws.end());
    const auto half_at = [&](int x, int y) {
        bool top = false;
        (void)cell_at(x, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        return flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] &
            ((1u << 3) | (1u << 4)) : 0u;
    };
    // Disabled subtabs can have different caption colors. A current title or
    // body draw from the Actors renderer proves this mode independently of
    // those colors, including when scrolling hides every record's title.
    for (const auto &draw : draws) {
        if (draw.source.empty() || draw.x < band->panel.x || draw.x >= right ||
                draw.y <= band->tabs_y || draw.y >= bottom ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) continue;
        const size_t length = std::min(static_cast<size_t>(right - draw.x), draw.source.size());
        if (context[draw.y].compare(draw.x, length, draw.source, 0, length) != 0 ||
                !native_justice_actor_source(draw.address, draw.source, draw.native_caller)) continue;
        actors_body_y = actors_body_y < 0 ? draw.y : std::min(actors_body_y, draw.y);
    }
    const auto complete_source = [&](int x, int y, const std::string &visible,
                                     int clip_right,
                                     std::optional<bool> *sabotage_person = nullptr) {
        const int draw_y = half_at(x, y) == (1u << 4) ? y - 1 : y;
        for (const auto &draw : draws) {
            if (draw.x != x || draw.y != draw_y || clip_right <= x ||
                trim_view(std::string_view(draw.source).substr(
                    0, static_cast<size_t>(clip_right - x))) != visible) continue;
            if (const auto complete = native_justice_actor_source(
                    draw.address, draw.source, draw.native_caller, sabotage_person))
                return *complete;
        }
        for (const auto &capture : captures)
            if (capture.x == x && capture.y == draw_y && capture.visible == visible)
                return capture.complete;
        // The panel can clip a complete draw without adding an ellipsis.
        // Match every byte up to that proven edge, then retain the actual
        // full draw (including the name's tail and sentence punctuation).
        for (const auto &draw : draws)
            if (draw.x == x && draw.y == draw_y && clip_right > x &&
                trim_view(std::string_view(draw.source).substr(
                    0, static_cast<size_t>(clip_right - x))) == visible)
                return draw.complete_source.empty() ? draw.source : draw.complete_source;
        return visible;
    };
    const auto is_interrogation_report = [](std::string_view text) {
        text = trim_view(text);
        return text.starts_with("Interrogation Report:") ||
            text.starts_with("Interrogation report:");
    };
    bool interrogation_list = false;
    // Classic report buttons put a CP437 side cap before the caption.
    // Inspect text fields inside the panel, not the framed row's prefix.
    for (int y = band->tabs_y + 1; y < bottom && !interrogation_list; ++y)
        for (const auto &field : split_text_fields(context[y]))
            if (field.start >= band->panel.x && field.end <= right &&
                is_interrogation_report(field.text)) {
                interrogation_list = true;
                break;
            }
    std::unordered_map<std::string, bool> report_body_cache;
    const auto is_report_body = [&](std::string_view text) {
        text = trim_view(text);
        if (justice_report_body_prefix(text)) return true;
        // The selected native subtab remains visible after a report heading
        // scrolls away. Complete captured paragraphs can begin with any
        // participant or result clause, not just the fixed opening prefixes.
        if ((!interrogation_list && !interrogations_selected) || text.empty()) return false;
        if (is_interrogation_report(text) || text.starts_with(justice_report_preparer_prefix) ||
            text.starts_with(justice_witness_prefix) ||
            text.starts_with("Murder of ") || text.starts_with("Theft of ") ||
            text.starts_with("Espionage against ") ||
            exact_literal_translation("Justice detail: " + std::string(text)) ||
            exact_literal_translation("Justice case: " + std::string(text))) return false;
        const auto colon = text.find(':');
        if (colon != std::string_view::npos) {
            const std::string label(trim_view(text.substr(0, colon)));
            if (exact_literal_translation("Justice person: " + label) ||
                exact_literal_translation("Justice date: " + label)) return false;
        }
        const size_t number_end = text.find_first_not_of("0123456789");
        if (number_end > 0 && number_end < text.size() && text[number_end] == ' ' &&
            exact_literal_translation("Justice sentence: " +
                std::string(trim_view(text.substr(number_end))))) return false;
        const auto [entry, inserted] = report_body_cache.try_emplace(std::string(text), false);
        if (inserted) entry->second = translate_justice_case_text(text).has_value();
        return entry->second;
    };
    const auto is_detail = [&](std::string_view text) {
        text = trim_view(text);
        // Each report and its Officer line owns a separate record. In
        // particular, an Officer line has no final period to delimit it.
        if (is_interrogation_report(text)) return true;
        if (text.starts_with(justice_report_preparer_prefix)) return true;
        if (is_report_body(text)) return true;
        if (exact_literal_translation("Justice detail: " + std::string(text))) return true;
        // Convicts also prints a crime as plain detail text below the sentence.
        // It has no case-button frame; keep the same column and paragraph
        // boundaries instead of centering a generic match in its English span.
        if (exact_literal_translation("Justice case: " + std::string(text))) return true;
        // The name and action can wrap onto later native rows. Claim the
        // witness sentence from its first row, then resolve the full source.
        if (text.starts_with(justice_witness_prefix) ||
            text == trim_view(justice_witness_prefix)) return true;
        size_t digits = 0;
        while (digits < text.size() && text[digits] >= '0' && text[digits] <= '9') ++digits;
        if (digits > 0 && digits < text.size() && text[digits] == ' ' &&
            exact_literal_translation("Justice sentence: " +
                std::string(trim_view(text.substr(digits))))) return true;
        const auto colon = text.find(':');
        if (colon == std::string_view::npos) return false;
        const std::string label(trim_view(text.substr(0, colon)));
        return exact_literal_translation("Justice person: " + label).has_value() ||
            exact_literal_translation("Justice date: " + label).has_value();
    };
    const auto append = [&](const NativeTextCardRow &part, int rule,
                            const std::string &target, bool untranslated,
                            const SDL_Rect &box, const std::string &complete) {
        const int length = static_cast<int>(part.source.size());
        if (rows[part.y].compare(part.x, length, part.source) != 0) return;
        std::erase_if(matches, [&](const Match &other) {
            return other.y == part.y && other.x < part.x + length &&
                part.x < other.x + other.length;
        });
        if (only_y < 0 || only_y == part.y) {
            Match match{part.x, part.y, length, rule, target, part.source};
            match.native_hover_untranslated = untranslated;
            match.layout_x = box.x;
            match.layout_length = box.w;
            match.layout_clip_right = box.x + box.w;
            match.layout_left = true;
            match.native_picture_caption_box = box;
            match.native_picture_caption_source = complete;
            if (!part.foregrounds.empty()) match.layout_foreground_rgb = part.foregrounds.front();
            matches.push_back(std::move(match));
        }
        std::fill_n(rows[part.y].begin() + part.x, length, ' ');
    };
#include "fortress_justice_plots.inc"
    // The organization renderer supplies typed draws even when a disabled
    // neighbouring tab has a different palette. Their exact caller and live
    // bytes also identify a scrolled chart whose heading is above the viewport.
    const auto organization_draw_current = [&](const NativeDrawnTextRow &draw) {
        if (!draw.justice_organization || draw.source.empty() ||
                draw.x < band->panel.x || draw.x >= right ||
                draw.y <= band->tabs_y || draw.y >= bottom ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) return false;
        const int length = std::min(right - draw.x, static_cast<int>(draw.source.size()));
        return length > 0 && context[draw.y].compare(draw.x, length, draw.source, 0, length) == 0;
    };
    for (const auto &draw : draws)
        if (organization_draw_current(draw)) {
            organizations_body_y = organizations_body_y < 0
                ? draw.y : std::min(organizations_body_y, draw.y);
            break;
        }
    if (organizations_body_y >= 0) {
        int list_right = right;
        for (const auto &bar : native_vertical_scrollbar_spans(*gps_, band->panel))
            list_right = std::min(list_right, bar.x);
        const auto person_target = [&](const NativeJusticeOrganizationCaption &caption,
                                        std::string_view source) {
            if (caption.person_target) return caption.person_target;
            const auto person = caption.person_source.empty() ? source : std::string_view(caption.person_source);
            auto target = exact_literal_translation("Justice actor: " + std::string(person));
            if (!target) target = translate_unit_identity(person, true);
            return target;
        };
        const auto append_draw = [&](const NativeDrawnTextRow &draw, int rule,
                                     const std::string &target, const SDL_Rect &box,
                                     const std::string &whole) {
            SDL_Rect caption_box{};
            if (!SDL_IntersectRect(&box, &band->panel, &caption_box)) return;
            if (draw.draw_clip) {
                SDL_Rect clipped{};
                if (!SDL_IntersectRect(&caption_box, &*draw.draw_clip, &clipped)) return;
                caption_box = clipped;
            }
            const auto source = std::string_view(draw.source).substr(0,
                static_cast<size_t>(std::max(0, std::min(right - draw.x,
                    static_cast<int>(draw.source.size())))));
            const auto visible = trim_view(source);
            if (visible.empty()) return;
            const int x = draw.x + static_cast<int>(visible.data() - source.data());
            const NativeTextCardRow part{x, draw.y, std::string(visible),
                {draw.foreground_rgb >= 0 ? draw.foreground_rgb : 0xffffff}};
            append(part, rule, target, false, caption_box, whole);
            // addst's classic half-font writes the same caption again below
            // the logical baseline. Both physical spans belong to this field.
            if (half_at(x, draw.y) == (1u << 3) && draw.y + 1 < bottom &&
                    half_at(x, draw.y + 1) == (1u << 4) &&
                    context[draw.y + 1].compare(x, visible.size(), visible) == 0) {
                auto lower = part;
                ++lower.y;
                append(lower, rule, target, false, caption_box, whole);
            }
        };
        for (const auto &draw : draws) {
            if (!organization_draw_current(draw)) continue;
            const auto &caption = *draw.justice_organization;
            const std::string whole = draw.complete_source.empty() ? draw.source : draw.complete_source;
            const SDL_Rect row_box{draw.x, draw.y, std::max(1, list_right - draw.x),
                half_at(draw.x, draw.y) == (1u << 3) ? 2 : 1};
            switch (caption.field) {
            case NativeJusticeOrganizationField::Title: {
                int edge = list_right;
                // The counter has its own draw and color. Its actual start
                // bounds the complete title; never include it in a name.
                for (const auto &field : split_text_fields(context[draw.y])) {
                    if (field.start <= draw.x) continue;
                    const auto slash = field.text.find('/');
                    if (slash == std::string::npos || slash == 0 || slash + 1 == field.text.size()) continue;
                    if (field.text.substr(0, slash).find_first_not_of("0123456789") == std::string::npos &&
                            field.text.substr(slash + 1).find_first_not_of("0123456789") == std::string::npos)
                        edge = std::min(edge, field.start);
                }
                const auto target = person_target(caption, trim_view(whole));
                append_draw(draw, kFortressJusticeActorRule,
                    target.value_or(native_text_to_utf8(whole)),
                    {draw.x, draw.y, std::max(1, edge - draw.x), row_box.h}, whole);
                break;
            }
            case NativeJusticeOrganizationField::Members: {
                const auto target = translate_justice_case_text(whole);
                if (target) append_draw(draw, kFortressJusticeActorRule, *target, row_box, whole);
                break;
            }
            case NativeJusticeOrganizationField::SelectedLabel: {
                const NativeDrawnTextRow *name = nullptr;
                for (const auto &candidate : draws)
                    if (organization_draw_current(candidate) && candidate.y == draw.y &&
                            candidate.x == draw.x + static_cast<int>(draw.source.size()) &&
                            candidate.justice_organization->field == NativeJusticeOrganizationField::SelectedName) {
                        name = &candidate;
                        break;
                    }
                const auto label = exact_literal_translation("Justice organization: Selected actor");
                if (!label) break;
                if (!name) {
                    append_draw(draw, kFortressJusticeActorRule, *label + "：", row_box, whole);
                    break;
                }
                const std::string full_name = name->complete_source.empty() ? name->source : name->complete_source;
                const auto target = person_target(*name->justice_organization, trim_view(full_name));
                const std::string full = whole + full_name;
                append_draw(draw, kFortressJusticeActorRule,
                    *label + "：" + target.value_or(native_text_to_utf8(full_name)), row_box, full);
                append_draw(*name, kFortressJusticeActorRule, {}, row_box, full);
                break;
            }
            case NativeJusticeOrganizationField::SelectedName: {
                const bool joined = std::any_of(draws.begin(), draws.end(), [&](const auto &label) {
                    return organization_draw_current(label) && label.y == draw.y &&
                        label.x + static_cast<int>(label.source.size()) == draw.x &&
                        label.justice_organization->field == NativeJusticeOrganizationField::SelectedLabel;
                });
                if (!joined) {
                    const auto target = person_target(caption, trim_view(whole));
                    append_draw(draw, kFortressJusticeActorRule,
                        target.value_or(native_text_to_utf8(whole)), row_box, whole);
                }
                break;
            }
            case NativeJusticeOrganizationField::NodeRole: {
                if (!caption.node_box) break;
                const auto target = exact_literal_translation("Justice organization role: " + std::string(trim_view(whole)));
                const auto &box = *caption.node_box;
                if (target) append_draw(draw, kFortressJusticeActorRule, *target,
                    {box.x, draw.y, box.w, row_box.h}, whole);
                break;
            }
            case NativeJusticeOrganizationField::NodeName: {
                if (!caption.node_box) break;
                const auto &node = *caption.node_box;
                // Keep the native two-initial representation. Its Chinese
                // initials come from the actual given-name and surname
                // fields; the complete name remains in the selected label.
                append_draw(draw, kFortressJusticeActorRule,
                    caption.initials_target.value_or(native_text_to_utf8(whole)),
                    {draw.x, draw.y, std::max(1, node.x + node.w - draw.x), row_box.h},
                    caption.person_source.empty() ? whole : caption.person_source);
                break;
            }
            case NativeJusticeOrganizationField::NodeTail: {
                if (!caption.node_box) break;
                const auto &node = *caption.node_box;
                const auto target = exact_literal_translation("Justice organization status: " + std::string(trim_view(whole)));
                append_draw(draw, kFortressJusticeActorRule,
                    target.value_or(native_text_to_utf8(whole)),
                    {draw.x, draw.y, std::max(1, node.x + node.w - draw.x), row_box.h}, whole);
                break;
            }
            default:
                break;
            }
        }
        return;
    }
    if (actors_body_y >= 0) {
        // Actors are numbered records, not case buttons or report prose.
        // The counter owns its separate native field. Claim the complete
        // identity and every typed body row before generic name/word matches
        // centre fragments in English spans. Supplier records retain full
        // sources even when its stored display row was cut to 58 bytes.
        struct ActorField {
            NativeTextCardRow row;
            int right;
            bool identity;
            std::string complete;
            std::optional<bool> sabotage_person;
        };
        std::vector<ActorField> fields;
        int list_right = right, list_left = right;
        for (const auto &bar : native_vertical_scrollbar_spans(*gps_, band->panel))
            list_right = std::min(list_right, bar.x);
        const auto counter = [](std::string_view text) {
            const size_t slash = text.find('/');
            if (slash == std::string_view::npos || slash == 0 || slash + 1 == text.size())
                return false;
            const auto digits = [](std::string_view value) {
                return value.find_first_not_of("0123456789") == std::string_view::npos;
            };
            return digits(text.substr(0, slash)) && digits(text.substr(slash + 1));
        };
        for (int y = actors_body_y; y < bottom; ++y) {
            std::vector<LogicalTextField> parts;
            for (const auto &field : split_text_fields(context[y]))
                if (field.start >= band->panel.x && field.end <= list_right)
                    parts.push_back(field);
            if (parts.empty()) continue;
            int edge = list_right;
            const bool title = parts.size() > 1 && counter(parts.back().text);
            if (title) {
                edge = parts.back().start;
                parts.pop_back();
            }
            const int first = parts.front().start, end = parts.back().end;
            const auto card = capture_panel_text_card({first, y, end - first, 1}, true);
            if (!card || card->rows.size() != 1) continue;
            const auto &part = card->rows.front();
            std::optional<bool> sabotage_person;
            const std::string complete = complete_source(part.x, part.y,
                part.source, edge, &sabotage_person);
            if (!title && !complete.starts_with("Alias:") &&
                    !complete.starts_with("Associated Organization:") &&
                    !complete.starts_with("Associated Plot:") &&
                    complete != "Highest known in organization") continue;
            list_left = std::min(list_left, first);
            fields.push_back({part, edge, title, complete, sabotage_person});
        }
        if (list_left < list_right) {
            for (const auto &field : fields) {
                const auto &part = field.row;
                const std::string &source = field.complete;
                // An unidentified actor is a native status caption, not an
                // authored personal name. Resolve Justice's complete status
                // before the identity grammar preserves unknown name text.
                auto target = field.identity ? exact_literal_translation("Justice actor: " + source)
                    : translate_justice_actor_text(source, field.sabotage_person);
                if (!target && field.identity) target = translate_unit_identity(source, true);
                const SDL_Rect box{list_left, part.y, field.right - list_left,
                    half_at(part.x, part.y) == (1u << 3) ? 2 : 1};
                append(part, kFortressJusticeActorRule,
                    target.value_or(native_text_to_utf8(source)), !target, box, source);
            }
        }
        return;
    }
    int case_right = band->panel.x;
    for (int y = band->tabs_y + 1; y < bottom; ++y) {
        // Adjacent buttons need not have two blank cells between captions.
        // Their own caps separate fields, including the compact action skin.
        for (int x = band->panel.x; x < right; ++x) {
            if (context[y][x] == ' ') continue;
            // The report's Officer line overwrites the lower rail in
            // classic mode. Its typed caption permits this two-line skin;
            // ordinary case/action buttons still require an intact rail.
            const bool report_caption = is_interrogation_report(
                std::string_view(context[y]).substr(x, right - x));
            const auto box = fortress_justice_button_rect(*gps_, x, x + 1, y, report_caption);
            if (!box || box->x < band->panel.x || box->x + box->w >= right ||
                box->y <= band->tabs_y || box->y + box->h > bottom) continue;
            x = box->x + box->w;
            int first = box->x, end = box->x + box->w;
            while (first < end && context[y][first] == ' ') ++first;
            while (end > first && context[y][end - 1] == ' ') --end;
            if (first == end) continue;
            const std::string visible = context[y].substr(first, end - first);
            const std::string complete = complete_source(first, y, visible, box->x + box->w);
            const auto action = exact_literal_translation("Justice action: " + complete);
            const bool report = is_interrogation_report(complete);
            auto target = action ? action : exact_literal_translation("Justice case: " + complete);
            if (!target && (report || complete.starts_with("Theft of ") ||
                           complete.starts_with("Murder of ") ||
                           complete.starts_with("Espionage against ")))
                target = translate_justice_case_text(complete);
            if (!target) continue;
            // Report captions use the same left-aligned button layout as
            // cases, but span the list. Their right cap is not a divider
            // before a separate detail column containing the Officer line.
            if (!action && !report) case_right = std::max(case_right, box->x + box->w + 1);
            append({first, y, visible, {}},
                action ? kFortressJusticeActionRule : kFortressJusticeCaseRule,
                target.value_or(native_text_to_utf8(complete)), !target, *box, complete);
        }
    }

    // The list's actual right cap separates it from the detail column. The
    // first typed detail supplies that column's native inset, including cases
    // with no current list row; never derive a margin from an English length.
    int detail_left = right;
    bool captured_report_body = false;
    for (int y = band->tabs_y + 1; y < bottom; ++y)
        for (const auto &field : split_text_fields(context[y]))
            if (field.start >= case_right && field.end <= right && is_detail(field.text) &&
                (interrogation_list ||
                 !fortress_justice_button_rect(*gps_, field.start, field.end, y)))
                detail_left = std::min(detail_left, field.start);
    // A scrolled report may start in the middle of a sentence. The native
    // paragraph capture, not a guessed English prefix, identifies that row.
    if (detail_left >= right) {
        for (int y = band->tabs_y + 1; y < bottom; ++y) {
            const auto visible = trim_view(std::string_view(context[y]).substr(
                band->panel.x, band->panel.w));
            if (visible.empty()) continue;
            const int x = static_cast<int>(visible.data() - context[y].data());
            const std::vector<Match> line{{x, y, static_cast<int>(visible.size()),
                kFortressJusticeDetailRule, {}, std::string(visible)}};
            if (const auto complete = native_source_for_rows(line, right);
                    complete && is_report_body(*complete)) {
                detail_left = std::min(detail_left, x);
                captured_report_body = true;
            }
        }
    }
    if (detail_left >= right) return;
    int detail_right = right;
    for (const auto &bar : native_vertical_scrollbar_spans(*gps_, band->panel))
        if (bar.x > detail_left) detail_right = std::min(detail_right, bar.x);
    std::vector<NativeTextCardRow> physical;
    for (int y = band->tabs_y + 1; y < bottom; ++y) {
        // A complete native detail draw proves its own text span. Controls
        // elsewhere in the wide detail column must not reject that sentence.
        // Keep the broad card reader for wrapped rows without such a draw.
        std::optional<NativeTextCardRow> drawn;
        for (const auto &draw : draws) {
            if (draw.x < detail_left || draw.x >= detail_right) continue;
            const int draw_y = half_at(draw.x, y) == (1u << 4) ? y - 1 : y;
            if (draw.y != draw_y) continue;
            const auto &complete = draw.complete_source.empty() ? draw.source : draw.complete_source;
            if (!is_detail(complete) || !translate_justice_case_text(complete)) continue;
            const auto visible = trim_view(std::string_view(draw.source).substr(
                0, static_cast<size_t>(detail_right - draw.x)));
            if (visible.empty()) continue;
            const int first = draw.x + static_cast<int>(visible.data() - draw.source.data());
            const int length = static_cast<int>(visible.size());
            if (context[y].compare(first, length, visible) != 0) continue;
            // A report header can draw the subject and the unlabelled
            // officer separately on the same row. Own both physical spans;
            // choosing the first draw would leave the officer to word rules.
            if ((is_interrogation_report(complete) || is_report_body(complete)) &&
                trim_view(std::string_view(context[y]).substr(
                    detail_left, detail_right - detail_left)) != visible) continue;
            const auto card = capture_panel_text_card({first, y, length, 1}, interrogation_list);
            if (!card || card->rows.size() != 1 || card->rows.front().source != visible) continue;
            drawn = card->rows.front();
            drawn->complete_source = complete;
            break;
        }
        if (drawn) {
            physical.push_back(std::move(*drawn));
            continue;
        }
        // Intelligence uses clickable report rows. Claim their text only;
        // the native row background and hitbox keep their existing geometry.
        const auto row = capture_panel_text_card(
            {detail_left, y, detail_right - detail_left, 1}, interrogation_list);
        if (row && row->rows.size() == 1) physical.push_back(row->rows.front());
    }
    if (interrogation_list || captured_report_body ||
        std::any_of(physical.begin(), physical.end(), [&](const NativeTextCardRow &part) {
            return is_report_body(part.source);
        })) {
        for (auto &part : physical) {
            const std::vector<Match> line{{part.x, part.y, static_cast<int>(part.source.size()),
                kFortressJusticeDetailRule, {}, part.source}};
            if (const auto complete = native_source_for_rows(line, detail_right);
                    complete && is_report_body(*complete))
                part.complete_source = *complete;
        }
    }
    bool awaiting_officer = false;
    for (size_t begin = 0; begin < physical.size();) {
        const bool report_body = is_report_body(physical[begin].source) ||
            is_report_body(physical[begin].complete_source);
        const bool report_officer = awaiting_officer && !report_body &&
            !is_detail(physical[begin].source);
        if (!is_detail(physical[begin].source) && !report_body && !report_officer) {
            ++begin;
            continue;
        }
        std::vector<size_t> logical;
        size_t end = begin;
        while (end < physical.size()) {
            const auto &part = physical[end];
            if (end > begin) {
                if (part.y != physical[end - 1].y + 1) break;
                if (report_body) {
                    if (is_detail(part.source) && !is_report_body(part.source)) break;
                    if (is_report_body(physical[begin].complete_source) &&
                        is_report_body(part.complete_source) &&
                        physical[begin].complete_source != part.complete_source) break;
                } else if (is_detail(part.source)) break;
            }
            if (!report_body && !logical.empty() &&
                physical[logical.back()].source.ends_with('.')) break;
            logical.push_back(end++);
            if (half_at(part.x, part.y) == (1u << 3) && end < physical.size()) {
                const auto &mate = physical[end];
                if (mate.y == part.y + 1 && mate.x == part.x && mate.source == part.source &&
                    half_at(mate.x, mate.y) == (1u << 4)) ++end;
            }
        }
        std::string source;
        std::vector<Match> native_lines;
        for (const auto at : logical) {
            const auto &part = physical[at];
            if (!source.empty()) source += ' ';
            source += is_interrogation_report(part.complete_source)
                ? part.complete_source : part.source;
            native_lines.push_back({part.x, part.y, static_cast<int>(part.source.size()),
                kFortressJusticeDetailRule, {}, part.source});
        }
        bool recovered = false;
        if (const auto complete = native_source_for_rows(native_lines, detail_right);
                complete && is_detail(*complete) && translate_justice_case_text(*complete)) {
            source = *complete;
            recovered = true;
        }
        // A visible suffix still belongs to its full native paragraph. Its
        // viewport is recovered again during measured layout below.
        if (!recovered && report_body &&
            is_report_body(physical[begin].complete_source) &&
            std::all_of(logical.begin(), logical.end(), [&](size_t at) {
                return physical[at].complete_source == physical[begin].complete_source;
            })) {
            source = physical[begin].complete_source;
            recovered = true;
        }
        if (!recovered && logical.size() == 1) {
            const auto &first = physical[begin];
            source = first.complete_source.empty()
                ? complete_source(first.x, first.y, first.source, detail_right)
                : first.complete_source;
        }
        if (report_officer) source = "Officer: " + source;
        const auto target = translate_justice_case_text(source);
        if (report_officer && !target) { begin = end; continue; }
        if (is_interrogation_report(source)) {
            const size_t caption_end = justice_report_caption_end(source);
            awaiting_officer = caption_end && trim_view(
                std::string_view(source).substr(caption_end)).empty();
        } else if (report_body || report_officer) {
            awaiting_officer = false;
        }
        const int block_bottom = end < physical.size() ? physical[end].y : bottom;
        const int record_left = interrogation_list ? physical[begin].x : detail_left;
        const SDL_Rect box{record_left, physical[begin].y,
            detail_right - record_left, block_bottom - physical[begin].y};
        const size_t first_end = logical.size() > 1 ? logical[1] : end;
        for (size_t at = begin; at < end; ++at)
            append(physical[at], kFortressJusticeDetailRule,
                at < first_end ? target.value_or(native_text_to_utf8(source)) : std::string{},
                !target, box, source);
        begin = end;
    }
}

// Justice shares ordinary tab and paragraph geometry. Fortress guard names
// the law-enforcement unit here, and Intelligence means collected information.
// Resolve both captions through contextual dictionary entries.
void Overlay::layout_fortress_justice(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const NativePanelBorders borders(*gps_);
    const auto display_y = [](const Match &match) {
        return match.native_split_text ? match.native_split_top_y : match.y;
    };
    const auto &sources = fortress_justice_tabs;
    int tabs_y = -1;
    std::array<int, fortress_justice_tabs.size()> starts{};
    // Page identity comes from the intact native page, never from six
    // already-translated matches: an occluded prefix is not a seventh tab.
    for (int y = 0; y < gps_->dimy; ++y) {
        std::string row(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = gps_->screen[(static_cast<size_t>(x) * gps_->dimy + y) * 8];
            if (ch) row[x] = ch;
        }
        size_t cursor = 0;
        bool complete = true;
        for (size_t i = 0; i < sources.size(); ++i) {
            const auto at = row.find(sources[i], cursor);
            if (at == std::string::npos ||
                !(has_word_boundaries(row, at, at + sources[i].size()) ||
                  is_ascii_tab_caption(row, at, at + sources[i].size()))) {
                complete = false;
                break;
            }
            starts[i] = static_cast<int>(at);
            cursor = at + sources[i].size();
        }
        if (complete) { tabs_y = y; break; }
    }
    if (tabs_y < 0) return;
    auto frames = native_text_overlay_frames(*gps_);
    std::shared_ptr<const std::vector<SDL_Rect>> occluders;
    if (!frames.empty()) occluders = std::make_shared<const std::vector<SDL_Rect>>(std::move(frames));
    if (!occluders)
        for (const auto &match : prepared_matches_)
            if (match.native_help_background_frames) {
                occluders = match.native_help_background_frames;
                break;
            }
    for (size_t i = 0; i < sources.size(); ++i) {
        auto target = exact_literal_translation("Justice tab: " + std::string(sources[i]));
        if (!target) target = exact_literal_translation(sources[i]);
        if (!target) continue;
        const int x = starts[i], length = static_cast<int>(sources[i].size());
        const size_t tile = static_cast<size_t>(x) * gps_->dimy + tabs_y;
        const auto flags = gps_->screentexpos_flag ? gps_->screentexpos_flag[tile] : 0u;
        const bool split = (flags & ((1u << 3) | (1u << 4))) != 0;
        const int top = tabs_y - ((flags & (1u << 4)) ? 1 : 0);
        const int height = split ? 2 : 1;
        // Remove physical fragments as well as whole generic captions. This
        // also catches the name-transliteration result of "Intelligen".
        std::erase_if(prepared_matches_, [&](const Match &match) {
            return match.y >= top && match.y < top + height &&
                match.x < x + length && x < match.x + match.length &&
                match.rule != kHelpDocumentRule && match.rule != kToolbarTooltipBodyRule &&
                match.rule != kToolbarTooltipKeyRule;
        });
        Match label{x, tabs_y, length, kFortressJusticeTabRule, *target, std::string(sources[i])};
        label.native_hover_background = occluders != nullptr;
        label.native_help_background_frames = occluders;
        label.native_split_text = split;
        label.native_split_top_y = split ? top : -1;
        label.layout_y = top;
        label.layout_pixel_y = split ? gps_->tile_pixel_y / 2 : 0;
        const auto *cell = gps_->screen + tile * 8;
        label.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
        // Matching/suppression has already run. Clear the complete source
        // here too; drawing clips this clear and the Chinese to the same frames.
        label.graphical_clear_x = x;
        label.graphical_clear_y = top;
        label.graphical_clear_width = length;
        label.graphical_clear_height = height;
        prepared_matches_.push_back(std::move(label));
    }

    // Case titles share their actual rectangle margins. Details are reflowed
    // inside their own column down to the next native record, so long names
    // retain every character without pushing another sentence out of place.
    std::erase_if(prepared_matches_, [](const Match &match) {
        return match.rule == kFortressJusticeDetailRule && match.length == 0;
    });
    std::vector<Match> continuation_rows;
    for (Match &match : prepared_matches_) {
        if (match.rule == kFortressJusticeTabRule &&
            !match.target.empty() && !match.native_split_duplicate) {
            match.layout_box_pixel_x = -1;
            match.layout_box_pixel_width = 0;
            match.layout_left = false;
            match.layout_right = false;
            if (const auto tab = native_classic_tab_text_span(*gps_, match.x, display_y(match))) {
                layout_fortress_text_rows(renderer, {{&match}}, tab->first,
                    tab->second, true, true);
            } else if (const auto button = fortress_justice_button_rect(*gps_,
                    match.x, match.x + match.length, match.y)) {
                layout_fortress_text_rows(renderer, {{&match}}, button->x,
                    button->x + button->w, true, true);
            } else {
                match.layout_font_pixels = unified_font_pixels();
                match.layout_lock_font_pixels = true;
                match.layout_visual_height_pixels = 0;
                match.layout_line_height_pixels = gps_->tile_pixel_y;
            }
            continue;
        }
        if (!is_fortress_justice_field(match) ||
            match.target.empty() || match.native_split_duplicate || !match.native_picture_caption_box)
            continue;
        const auto box = *match.native_picture_caption_box;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        match.layout_right = false;
        if (match.rule == kFortressJusticeActorRule || match.rule == kFortressJusticePlotRule) {
            // Preserve each native row/baseline and the independently drawn
            // counter. Names, aliases, associations and statuses share one inset.
            match.layout_left = true;
            layout_fortress_text_rows(renderer, {{&match}}, box.x, box.x + box.w, true, true);
            continue;
        }
        if (match.rule == kFortressJusticeCaseRule || match.rule == kFortressJusticeActionRule) {
            match.layout_y = box.y + (box.h == 2 ? 0 : 1);
            match.layout_pixel_y = box.h == 2 ? gps_->tile_pixel_y / 2 : 0;
            match.layout_fixed_baseline = true;
            match.layout_left = match.rule == kFortressJusticeCaseRule;
            layout_fortress_text_rows(renderer, {{&match}}, box.x, box.x + box.w, true, true);
            continue;
        }
        const auto target = translate_justice_case_text(match.native_picture_caption_source);
        const std::string output = target.value_or(native_text_to_utf8(match.native_picture_caption_source));
        std::vector<uint32_t> codepoints;
        if (!decode_utf8(output, codepoints) || codepoints.empty()) continue;
        const int tile_h = gps_->tile_pixel_y;
        const int width = box.w * gps_->tile_pixel_x - 2 * config_.horizontal_padding;
        const int offset_y = match.native_split_text ? tile_h / 2 : 0;
        int max_lines = std::max(1, (box.h * tile_h - offset_y) / tile_h);
        if (width <= 0) continue;
        std::optional<NativeParagraphViewport> viewport;
        // Native paragraph identity and exact source bytes prove the visible
        // slice even for a participant-led paragraph with its header offscreen.
        if (match.rule == kFortressJusticeDetailRule) {
            std::vector<Match> native_lines;
            for (const Match &part : prepared_matches_) {
                if (part.rule != kFortressJusticeDetailRule || part.length <= 0 ||
                    part.source.empty() || part.native_split_duplicate ||
                    !part.native_picture_caption_box ||
                    part.native_picture_caption_source != match.native_picture_caption_source)
                    continue;
                const auto other = *part.native_picture_caption_box;
                if (other.x == box.x && other.y == box.y &&
                    other.w == box.w && other.h == box.h) native_lines.push_back(part);
            }
            std::sort(native_lines.begin(), native_lines.end(),
                [](const Match &a, const Match &b) { return a.y < b.y; });
            // Empty suppression rows do not pass through split-font target
            // normalization. Deduplicate their proven upper/lower pairs here
            // as well, so wrap indices count native lines rather than halves.
            const auto half = [&](const Match &part) {
                bool top = false;
                (void)cell_at(part.x, part.y, &top);
                const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                return flags ? flags[static_cast<size_t>(part.x) * gps_->dimy + part.y] &
                    ((1u << 3) | (1u << 4)) : 0u;
            };
            std::vector<Match> logical_lines;
            for (const auto &part : native_lines) {
                if (!logical_lines.empty()) {
                    const auto &previous = logical_lines.back();
                    if (previous.x == part.x && previous.y + 1 == part.y &&
                        previous.source == part.source && half(previous) == (1u << 3) &&
                        half(part) == (1u << 4)) continue;
                }
                logical_lines.push_back(part);
            }
            native_lines = std::move(logical_lines);
            NativeParagraphViewport native_view;
            if (const auto complete = native_source_for_rows(
                    native_lines, box.x + box.w, nullptr, &native_view);
                complete && *complete == match.native_picture_caption_source &&
                native_view.total_lines > static_cast<int>(native_lines.size())) {
                // Retain the complete report's native allocation and map its
                // visible slice through the shared paragraph scrollbar path.
                // Hidden opening sentences must not reappear at every scroll.
                max_lines = std::min(max_lines, static_cast<int>(native_lines.size()));
                viewport = native_view;
            }
        }
        std::vector<Match> slots, fitted;
        for (int row = 0; row < max_lines; ++row)
            slots.push_back({box.x, box.y + row, 0, kFortressJusticeDetailRule, {}, {}});
        std::vector<std::string> scratch(gps_->dimy, std::string(gps_->dimx, ' '));
        const int foreground = match.layout_foreground_rgb >= 0
            ? match.layout_foreground_rgb : 0xffffff;
        const std::vector<int> colors(codepoints.size(), foreground);
        if (!append_bounded_paragraph(std::move(slots), output, scratch, fitted, -1,
                box.x + box.w, box.x + box.w, colors, false, box.x,
                viewport, {}, viewport ? viewport->total_lines : max_lines)) continue;
        const Match owner = match;
        int first_pixel = INT32_MAX, last_pixel = 0;
        for (const Match &line : fitted) {
            if (line.target.empty()) continue;
            const int pixel_y = line.layout_y * tile_h + line.layout_pixel_y;
            first_pixel = std::min(first_pixel, pixel_y);
            last_pixel = std::max(last_pixel,
                pixel_y + std::max(tile_h, line.layout_line_height_pixels));
        }
        const int upward_shift = first_pixel == INT32_MAX ? 0 : std::min(
            std::max(0, first_pixel + offset_y),
            std::max(0, last_pixel + offset_y - gps_->dimy * tile_h));
        for (size_t line = 0; line < fitted.size(); ++line) {
            if (fitted[line].target.empty()) continue;
            Match rendered = std::move(fitted[line]);
            const int pixel_y = rendered.layout_y * tile_h + rendered.layout_pixel_y +
                offset_y - upward_shift;
            rendered.layout_y = pixel_y / tile_h;
            rendered.layout_pixel_y = pixel_y % tile_h;
            rendered.layout_fixed_baseline = true;
            rendered.native_picture_caption_box = box;
            rendered.native_picture_caption_source = owner.native_picture_caption_source;
            if (line == 0) {
                rendered.x = owner.x;
                rendered.y = owner.y;
                rendered.length = owner.length;
                rendered.source = owner.source;
                rendered.native_split_text = owner.native_split_text;
                rendered.native_split_top_y = owner.native_split_top_y;
                rendered.native_hover_untranslated = owner.native_hover_untranslated;
                match = std::move(rendered);
            }
            else {
                continuation_rows.push_back(std::move(rendered));
            }
        }
    }
    prepared_matches_.insert(prepared_matches_.end(),
        std::make_move_iterator(continuation_rows.begin()),
        std::make_move_iterator(continuation_rows.end()));

    // Native code assembles this whole sentence with two live counts. The
    // shared numeric rule owns all words and numbers, and the shared fitter
    // uses one left-aligned box instead of independently centering fragments.
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate || display_y(match) <= tabs_y ||
            match.rule < 0 || static_cast<size_t>(match.rule) >= rules_.size() ||
            rules_[static_cast<size_t>(match.rule)].source !=
                "Desired metal cages and chains in dungeons: {d} of {d}") continue;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        auto region = fortress_justice_button_rect(*gps_, match.x,
            match.x + match.length, match.y);
        if (!region) region = native_panel_interior(borders, *gps_,
            match.x, match.x + match.length, match.y);
        if (region) {
            layout_fortress_text_rows(renderer, {{&match}}, match.x,
                region->x + region->w, true);
        } else {
            match.layout_x = match.x;
            match.layout_left = true;
            match.layout_font_pixels = unified_font_pixels();
            match.layout_lock_font_pixels = true;
            match.layout_visual_height_pixels = 0;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
        }
    }
}
