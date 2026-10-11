    // The native Plots branch draws four independent fields per five-row
    // record. Freeze their complete sources at the actual addst callers;
    // counter text and a clipped organization name never join the title.
    const auto plot_edge = [&](const NativeDrawnTextRow &draw, int limit) {
        if (!draw.justice_plot || draw.justice_plot->field != NativeJusticePlotField::Title)
            return limit;
        for (const auto &counter : draws) {
            if (!counter.justice_plot ||
                    counter.justice_plot->field != NativeJusticePlotField::Counter ||
                    counter.draw_grid != draw.draw_grid || counter.y != draw.y ||
                    counter.x <= draw.x || counter.x >= limit || counter.source.empty()) continue;
            const size_t length = std::min(counter.source.size(),
                static_cast<size_t>(right - counter.x));
            if (context[counter.y].compare(counter.x, length, counter.source, 0, length) == 0)
                limit = counter.x;
        }
        return limit;
    };
    const auto plot_draw_current = [&](const NativeDrawnTextRow &draw) {
        if (!draw.justice_plot || draw.source.empty() ||
                draw.x < band->panel.x || draw.x >= right ||
                draw.y <= band->tabs_y || draw.y >= bottom ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) return false;
        const int edge = plot_edge(draw, right);
        const size_t length = std::min(draw.source.size(), static_cast<size_t>(edge - draw.x));
        return length && context[draw.y].compare(draw.x, length, draw.source, 0, length) == 0;
    };
    for (const auto &draw : draws)
        if (plot_draw_current(draw)) {
            plots_body_y = plots_body_y < 0 ? draw.y : std::min(plots_body_y, draw.y);
            break;
        }
    if (plots_body_y >= 0) {
        int list_right = right;
        for (const auto &bar : native_vertical_scrollbar_spans(*gps_, band->panel))
            list_right = std::min(list_right, bar.x);
        const auto append_plot = [&](const NativeDrawnTextRow &draw, int edge,
                                     const std::string &target, const SDL_Rect &box,
                                     const std::string &whole, bool untranslated = false) {
            edge = std::min(edge, right);
            if (draw.draw_clip) edge = std::min(edge, draw.draw_clip->x + draw.draw_clip->w);
            if (edge <= draw.x) return;
            const auto source = std::string_view(draw.source).substr(0,
                static_cast<size_t>(edge - draw.x));
            const auto visible = trim_view(source);
            if (visible.empty()) return;
            const int x = draw.x + static_cast<int>(visible.data() - source.data());
            NativeTextCardRow part{x, draw.y, std::string(visible),
                {draw.foreground_rgb >= 0 ? draw.foreground_rgb : 0xffffff}};
            append(part, kFortressJusticePlotRule, target, untranslated, box, whole);
            if (half_at(x, draw.y) == (1u << 3) && draw.y + 1 < bottom &&
                    half_at(x, draw.y + 1) == (1u << 4) &&
                    context[draw.y + 1].compare(x, visible.size(), visible) == 0) {
                ++part.y;
                append(part, kFortressJusticePlotRule, target, untranslated, box, whole);
            }
        };
        for (const auto &draw : draws) {
            if (!plot_draw_current(draw)) continue;
            const auto &caption = *draw.justice_plot;
            const int height = half_at(draw.x, draw.y) == (1u << 3) ? 2 : 1;
            const SDL_Rect box{draw.x, draw.y, std::max(1, list_right - draw.x), height};
            if (caption.field == NativeJusticePlotField::Title) {
                const int edge = plot_edge(draw, list_right);
                auto target = translate_justice_plot_text(caption.complete_source, caption.sabotage_person);
                if (!target) target = translate_journal_title(caption.complete_source, JournalSearchKind::Plot);
                append_plot(draw, edge, target.value_or(native_text_to_utf8(caption.complete_source)),
                    {draw.x, draw.y, std::max(1, edge - draw.x), height}, caption.complete_source, !target);
            } else if (caption.field == NativeJusticePlotField::OrganizationLabel) {
                const auto label = exact_literal_translation("Justice plot: Org");
                if (!label) continue;
                const NativeDrawnTextRow *name = nullptr;
                for (const auto &candidate : draws)
                    if (plot_draw_current(candidate) && candidate.draw_grid == draw.draw_grid &&
                            candidate.y == draw.y &&
                            candidate.x == draw.x + static_cast<int>(draw.source.size()) &&
                            candidate.justice_plot->field == NativeJusticePlotField::OrganizationName) {
                        name = &candidate;
                        break;
                    }
                if (!name) {
                    append_plot(draw, list_right, *label + "：", box, caption.complete_source);
                    continue;
                }
                const auto &identity = *name->justice_plot;
                auto target = exact_literal_translation(
                    "Justice plot organization: " + identity.complete_source);
                if (!target) target = identity.person_target;
                if (!target) target = translate_journal_title(identity.complete_source,
                    JournalSearchKind::PlotOrganization);
                const std::string whole = caption.complete_source + identity.complete_source;
                append_plot(draw, list_right,
                    *label + "：" + target.value_or(native_text_to_utf8(identity.complete_source)),
                    box, whole, !target);
                append_plot(*name, list_right, {}, box, whole);
            } else if (caption.field == NativeJusticePlotField::OrganizationName) {
                const bool joined = std::any_of(draws.begin(), draws.end(), [&](const auto &label) {
                    return plot_draw_current(label) && label.draw_grid == draw.draw_grid &&
                        label.y == draw.y &&
                        label.x + static_cast<int>(label.source.size()) == draw.x &&
                        label.justice_plot->field == NativeJusticePlotField::OrganizationLabel;
                });
                if (!joined) {
                    auto target = exact_literal_translation(
                        "Justice plot organization: " + caption.complete_source);
                    if (!target) target = caption.person_target;
                    if (!target) target = translate_journal_title(caption.complete_source,
                        JournalSearchKind::PlotOrganization);
                    append_plot(draw, list_right, target.value_or(native_text_to_utf8(caption.complete_source)),
                        box, caption.complete_source, !target);
                }
            }
        }
        return;
    }
