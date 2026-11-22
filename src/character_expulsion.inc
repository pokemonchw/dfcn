// The expulsion arm has identical instructions and frame slots on the four
// reviewed PEs. Use Steam 53.17 coordinates for draws and inline truncation.
static uintptr_t character_expulsion_rva(uintptr_t caller) {
    static const uintptr_t origin = []() -> uintptr_t {
        const auto edition = native_pe_edition();
        const auto base = native_history_profile_base();
        if (!base || !edition || (edition > 2 && !native_pe_5317())) return 0;
        return base - (native_pe_classic() ? 0x70 : 0) - (edition <= 2 ? 0x16a0 : 0);
    }();
    if (!origin || caller < origin + 0x15eda6 || caller >= origin + 0x16066e) return 0;
    return caller - origin;
}

void Overlay::append_character_expulsion_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches) const {
    for (const bool top : {false, true}) {
        for (const auto &draw : captured_native_drawn_text_view(top)) {
            const auto caller = character_expulsion_rva(draw.native_caller);
            if (!caller || draw.editable_text || draw.source.empty() ||
                    draw.draw_grid != (top ? gps_->screen_top : gps_->screen) ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;

            const auto &source = draw.complete_source;
            std::optional<std::string> target;
            if (caller == 0x15f838 && source.starts_with("Send to ")) {
                const auto place = std::string_view(source).substr(8);
                const auto name = draw.site_name
                    ? translate_english_site_name(place, draw.site_name.get(),
                        site_name_attribute_suffix(*draw.site_name))
                    : translate_site_reference(place, true);
                target = "派往" + name.value_or(native_text_to_utf8(place));
            } else if (caller == 0x160563) {
                // The confirmation roster uses the full fortress unit formatter.
                // The shared identity pass also owns deferred translations.
                if (draw.unit_identity_target && !draw.unit_identity_ready) continue;
                target = draw.unit_identity_target;
                if (!target) target = translate_unit_identity(source, true);
            } else if (source == "Send away") {
                target = "派走";
            } else if (caller >= 0x15ee59 && caller <= 0x15f2d3) {
                // The heading and the eleven reason arms are complete UI messages.
                std::vector<int> colors;
                target = translate_help_paragraph(source,
                    std::vector<int>(source.size(), draw.foreground_rgb), colors, true, -1, true);
            } else {
                target = exact_literal_translation(source);
            }
            if (!target || target->empty()) continue;

            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const auto half_at = [&](int y) {
                return flags ? flags[static_cast<size_t>(draw.x) * gps_->dimy + y] &
                    ((1u << 3) | (1u << 4)) : 0u;
            };
            const auto half = half_at(draw.y);
            const int mate = half == (1u << 3) ? draw.y + 1 : half == (1u << 4) ? draw.y - 1 : -1;
            for (const int y : {draw.y, mate}) {
                if (y < 0 || y >= gps_->dimy || (y != draw.y &&
                        half_at(y) != (half == (1u << 3) ? 1u << 4 : 1u << 3)) ||
                        !native_item_row_layer_at(*gps_, draw.x, y, top) ||
                        rows[y].compare(draw.x, draw.source.size(), draw.source) != 0) continue;
                const int length = static_cast<int>(draw.source.size());
                Match match{draw.x, y, length, kUiMessageRule, *target, draw.source};
                match.layout_x = draw.x;
                match.layout_length = length;
                match.layout_left = true;
                match.layout_ellipsize = true;
                matches.push_back(std::move(match));
                std::fill_n(rows[y].begin() + draw.x, length, ' ');
            }
        }
    }
}
