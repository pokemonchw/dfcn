void Overlay::append_volcano_name_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_) return;
    const auto draws = std::array{captured_native_drawn_text_view(),
        captured_native_drawn_text_view(true)};
    // If the same caption has both captured representations, its native
    // slots own it before an English-only fallback can claim the row.
    for (const bool typed : {true, false})
    for (const auto &plane : draws) for (const auto &draw : plane) {
        if (bool(draw.volcano_name) != typed || draw.editable_text ||
                draw.x < 0 || draw.y < 0 || draw.y >= int(rows.size()) ||
                (only_y >= 0 && draw.y != only_y) || draw.draw_dimx != gps_->dimx ||
                draw.draw_dimy != gps_->dimy || draw.source.empty()) continue;
        // A peak name's type is also used for ordinary mountains. Only an
        // actual volcano fact or its explicit native caption owns this path.
        const auto complete = trim_view(draw.volcano_name
            ? std::string_view(draw.volcano_name->complete_source)
            : draw.complete_source.empty() ? std::string_view(draw.source)
            : std::string_view(draw.complete_source));
        constexpr std::string_view label = "Volcano:";
        const bool labelled = complete.starts_with(label) &&
            (complete.size() == label.size() || complete[label.size()] == ' ');
        if (!draw.volcano_name && !labelled) continue;
        int first = draw.x, end = std::min(gps_->dimx, draw.x + int(draw.source.size()));
        if (draw.draw_clip) {
            if (draw.y < draw.draw_clip->y || draw.y >= draw.draw_clip->y + draw.draw_clip->h)
                continue;
            first = std::max(first, draw.draw_clip->x);
            end = std::min(end, draw.draw_clip->x + draw.draw_clip->w);
        }
        if (first >= end || end > int(rows[draw.y].size())) continue;
        bool current = true;
        for (int x = first; current && x < end; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            current = cell && cell[0] == static_cast<unsigned char>(draw.source[x - draw.x]);
            if (current && cell[0] != ' ') {
                const auto origin = native_text_grid_origin(*gps_, size_t(x) * gps_->dimy + draw.y, top);
                current = origin.grid == draw.draw_grid && origin.top_layer == draw.top_layer;
            }
        }
        if (!current || rows[draw.y].compare(size_t(first), size_t(end - first),
                draw.source, size_t(first - draw.x), size_t(end - first)) != 0) continue;
        const auto source = labelled ? trim_view(complete.substr(label.size())) : complete;
        const auto *identity = draw.volcano_name ? &draw.volcano_name->name : nullptr;
        std::string target = translate_volcano_text(source, identity);
        if (labelled) target = "火山：" + target;
        if (target.empty()) continue;
        Match match{first, draw.y, end - first, kWorldgenSummaryRule, std::move(target),
            rows[draw.y].substr(size_t(first), size_t(end - first))};
        match.layout_foreground_rgb = draw.foreground_rgb;
        // Claim the entire native field, including its label, so generic
        // caption/name passes cannot also translate a shortened suffix.
        std::fill(rows[draw.y].begin() + first, rows[draw.y].begin() + end, ' ');
        matches.push_back(std::move(match));
    }
}
