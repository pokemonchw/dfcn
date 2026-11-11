// The accepted-petition list is a different producer from the single-petition
// tooltip. Its six addst sites each own a complete request, recipient or date.
// Nothing in this private grid is offered to generic word/name matching.
std::vector<Match> Overlay::find_native_petitions_matches(int only_y,
        const unsigned char *screen_override) const {
    std::vector<Match> result;
    const auto &panel = g_native_petitions_panel;
    if (!gps_ || !gps_->screen || !native_petitions_foreground_view(gps_) ||
            gps_->dimx <= 0 || gps_->dimx > 1000 || gps_->dimy <= 0 || gps_->dimy > 1000 ||
            panel.x < 0 || panel.y < 0 || panel.w <= 3 || panel.h <= 2 ||
            panel.w > gps_->dimx - panel.x || panel.h > gps_->dimy - panel.y ||
            (only_y >= 0 && (only_y <= panel.y || only_y >= panel.y + panel.h - 1)) ||
            (screen_override && screen_override != gps_->screen &&
                screen_override != gps_->screen_top)) return result;
#ifdef _WIN32
    const auto base = native_history_profile_base();
    if (!base) return result;
    enum class Field { None, Request, Guild, Faith, Date };
    const auto field_of = [&](uintptr_t caller) {
        // Keep each consumed return explicit so the address catalog includes
        // it even when the producer's surrounding function changes edition.
        for (const auto &[address, field] : std::array<std::pair<uintptr_t, Field>, 6>{{
                {native_reference_address(base, 0x3f9bb7), Field::Request},
                {native_reference_address(base, 0x3f9cf0), Field::Guild},
                {native_reference_address(base, 0x3f9ef3), Field::Date},
                {native_reference_address(base, 0x3fa04d), Field::Request},
                {native_reference_address(base, 0x3fa13e), Field::Faith},
                {native_reference_address(base, 0x3fa341), Field::Date}}})
            if (address && caller == address) return field;
        return Field::None;
    };
    const auto translate_field = [&](std::string_view source, Field field)
            -> std::optional<std::string> {
        source = trim_view(source);
        if (source.empty() || source.ends_with("...")) return std::nullopt;
        switch (field) {
        case Field::Request:
            // These four native list captions have their own complete
            // catalog entries, without the detail tooltip's article.
            return exact_literal_translation(source);
        case Field::Guild: {
            constexpr std::string_view suffix = " guild";
            if (!source.ends_with(suffix)) return std::nullopt;
            const auto profession = source.substr(0, source.size() - suffix.size());
            auto occupation = translate_unit_profession(profession, true);
            // A typed profession may deliberately preserve an unknown RAW
            // name. That is not a translated occupation: leave the complete
            // native guild field intact instead of appending a Chinese suffix.
            if (!item_description_translation_complete(occupation))
                occupation = translate_ui_message_capture(profession, false);
            return item_description_translation_complete(occupation)
                ? std::optional<std::string>(*occupation + "行会") : std::nullopt;
        }
        case Field::Faith:
            // The agreement's linked entity id selects historical_entity+0x20
            // for EnglishName. Resolve its complete real religion identity
            // first: native first_name and WORD groups can share a spelling,
            // so a text-only parser cannot assign their roles safely.
            if (const auto religion = translate_religion_reference(source))
                return religion;
            // The shared source grammar preserves authored nicknames and
            // complete generated groups when no unique entity is available.
            return translate_legends_name(source, false, false);
        case Field::Date:
            // This shared typed parser owns native day/month/year grammar and
            // the missing-month branch without reading another document.
            return translate_journal_agreement_field(source, NativeJournalAgreementField::Date);
        default:
            return std::nullopt;
        }
    };
    CellReadCacheScope cells(*this);
    const int left = panel.x + 2, right = panel.x + panel.w - 1;
    const int bottom = panel.y + panel.h - 1;
    const int origin_x = (gps_->screen_pixel_x - gps_->tile_pixel_x * gps_->dimx) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->tile_pixel_y * gps_->dimy) / 2;
    const SDL_Rect pixels{origin_x + left * gps_->tile_pixel_x,
        origin_y + (panel.y + 1) * gps_->tile_pixel_y,
        (right - left) * gps_->tile_pixel_x, (panel.h - 2) * gps_->tile_pixel_y};
    const auto drawn = captured_native_drawn_text_view();
    const auto top_drawn = captured_native_drawn_text_view(true);
    for (const auto *layer : {&drawn, &top_drawn}) {
        for (const auto &draw : *layer) {
            const auto field = field_of(draw.native_caller);
            if (field == Field::None || draw.editable_text || draw.source.empty() ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                    (screen_override && screen_override != draw.draw_grid) ||
                    draw.x != left || draw.y <= panel.y || draw.y >= bottom ||
                    (only_y >= 0 && only_y != draw.y)) continue;
            int end = std::min(right, draw.x + static_cast<int>(draw.source.size()));
            if (draw.draw_clip) end = std::min(end, draw.draw_clip->x + draw.draw_clip->w);
            if (end <= draw.x) continue;
            bool current = true;
            for (int x = draw.x; x < end; ++x) {
                const size_t tile = static_cast<size_t>(x) * gps_->dimy + draw.y;
                const auto ch = screen_override ? screen_override[tile * 8] : visible_char_at(x, draw.y);
                if ((ch ? ch : static_cast<unsigned char>(' ')) !=
                        static_cast<unsigned char>(draw.source[static_cast<size_t>(x - draw.x)])) {
                    current = false;
                    break;
                }
                if (!screen_override && ch && ch != ' ') {
                    bool top = false;
                    cell_at(x, draw.y, &top);
                    const auto origin = native_text_grid_origin(*gps_, tile, top);
                    if (origin.grid != draw.draw_grid || origin.top_layer != draw.top_layer) {
                        current = false;
                        break;
                    }
                }
            }
            if (!current) continue;
            const std::string_view complete = draw.complete_source.empty()
                ? std::string_view(draw.source) : std::string_view(draw.complete_source);
            const auto target = translate_field(complete, field);
            // An unknown complete field keeps its native ink. No fallback
            // word reader may turn it into separately positioned fragments.
            if (!target || target->empty()) continue;
            Match match{draw.x, draw.y, end - draw.x, kUiMessageRule, *target,
                draw.source.substr(0, static_cast<size_t>(end - draw.x))};
            match.layout_x = left;
            match.layout_y = draw.y;
            match.layout_length = right - left;
            match.layout_clip_right = right;
            match.layout_left = true;
            match.layout_ellipsize = true;
            match.layout_native_clip = pixels;
            match.layout_foreground_rgb = draw.foreground_rgb;
            match.layout_prepared = true;
            result.push_back(std::move(match));
        }
    }
#endif
    return result;
}
