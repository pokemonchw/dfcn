// Apply formatter-owned identities before any dictionary scans the grid.
// Contextual row readers keep their layout, but their target comes from the
// particular unit/string owner drawn here, not a same-spelled global key.
std::set<std::pair<int, int>> native_unit_header_captions;
for (bool top_layer : {false, true}) {
    for (const auto &draw : captured_native_drawn_text_view(top_layer)) {
        if (is_bare_pike(draw.source) && (draw.trade_item_caption || draw.embark_list_item)) continue;
        if (map_hover && std::any_of(map_hover->rows.begin(), map_hover->rows.end(),
                [&](const NativeTextCardRow &row) {
                    return row.x == draw.x && row.y == draw.y &&
                        row.map_hover.kind != NativeMapHoverKind::Unit;
                })) continue;
        if (draw.unit_identity_target && !draw.unit_identity_ready &&
                !draw.squad_alias_target && !draw.editable_text && !draw.source.empty() &&
                draw.x >= 0 && draw.x < gps_->dimx && draw.y >= 0 && draw.y < gps_->dimy &&
                draw.source.size() <= static_cast<size_t>(gps_->dimx - draw.x)) {
            const int first = draw.y;
            const auto *flags = top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const uint32_t half = flags
                ? flags[static_cast<size_t>(draw.x) * gps_->dimy + first] & ((1u << 3) | (1u << 4))
                : 0;
            const int mate = half == (1u << 3) ? first + 1 :
                half == (1u << 4) ? first - 1 : -1;
            for (int y : {first, mate}) {
                if (y < 0 || y >= gps_->dimy || (only_y >= 0 && y != only_y) ||
                        (screen_override && screen_override !=
                            (top_layer ? gps_->screen_top : gps_->screen))) continue;
                auto &row = screen_rows[y];
                if (row.compare(draw.x, draw.source.size(), draw.source) != 0) continue;
                const int right = draw.x + static_cast<int>(draw.source.size());
                std::erase_if(result, [&](const Match &match) {
                    return match.y == y && match.x < right && draw.x < match.x + match.length;
                });
                // This typed source is awaiting its own translation. Reserve
                // only its proven bytes for the pre-draw glyph interceptor;
                // do not render an English fallback or empty name quotes.
                result.push_back({draw.x, y, static_cast<int>(draw.source.size()),
                    kCreatureNameRule, {}, draw.source});
                std::fill(row.begin() + draw.x, row.begin() + right, ' ');
            }
            continue;
        }
        if (draw.unit_identity_header && draw.unit_identity_target &&
                draw.x >= 0 && draw.x < gps_->dimx && draw.y >= 0 && draw.y < gps_->dimy) {
            // The formatter already owns this header name. Emit its current
            // field here as well as reserving it: an unavailable outer frame
            // must not leave a known identity waiting for the header reader.
            // That reader can still replace this field with its shared layout.
            const auto reserve = [&](int y) {
                if (y < 0 || y >= gps_->dimy || (only_y >= 0 && only_y != y)) return;
                auto &row = screen_rows[y];
                const auto field = character_header_bound_identity_field(*gps_, draw,
                    top_layer, y, clipped_template_captions,
                    [&](int x, int row_y) -> unsigned char {
                        bool top = false;
                        const auto *cell = cell_at(x, row_y, &top);
                        return cell && cell[0] ? cell[0] : ' ';
                    }, draw.unit_identity_english);
                if (field && (!screen_override || screen_override ==
                        (top_layer ? gps_->screen_top : gps_->screen)) &&
                        row.compare(field->start, field->text.size(), field->text) == 0) {
                    std::erase_if(result, [&](const Match &match) {
                        return match.y == y && match.x < field->end &&
                            field->start < match.x + match.length;
                    });
                    const std::string target = draw.unit_identity_english
                        ? "“" + *draw.unit_identity_target + "”" : *draw.unit_identity_target;
                    Match match{field->start, y, field->end - field->start,
                        kCharacterHeaderRule, target, field->text};
                    match.layout_x = field->start;
                    match.layout_length = field->end - field->start;
                    match.layout_clip_right = field->end;
                    match.layout_left = true;
                    result.push_back(std::move(match));
                    native_unit_header_captions.emplace(draw.x, y);
                    std::fill(row.begin() + field->start, row.begin() + field->end, ' ');
                }
                // A failed quote/layer binding has no emitted owner. Leave
                // its visible body available to the ordinary name readers.
            };
            reserve(draw.y);
            const auto *flags = top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            if (flags) {
                const uint32_t half = flags[static_cast<size_t>(draw.x) * gps_->dimy + draw.y] &
                    ((1u << 3) | (1u << 4));
                const int mate = half == (1u << 3) ? draw.y + 1 :
                    half == (1u << 4) ? draw.y - 1 : -1;
                if (mate >= 0 && mate < gps_->dimy &&
                        (flags[static_cast<size_t>(draw.x) * gps_->dimy + mate] &
                            ((1u << 3) | (1u << 4))) ==
                        (half == (1u << 3) ? (1u << 4) : (1u << 3))) reserve(mate);
            }
            continue;
        }
        // Vacant equipment slots can retain a historical figure's name.
        // Their language_name formatter has no live unit identity binding,
        // but the same roster writer still owns the name column. Translate
        // that typed caption here before generic matching centres it in its
        // English source span.
        std::optional<std::string> uniform_identity;
        const std::string *identity_target = draw.unit_identity_target
            ? &*draw.unit_identity_target : nullptr;
        if (!identity_target && draw.uniform_member_right > draw.x &&
                !draw.squad_alias_target && !draw.editable_text) {
            uniform_identity = translate_unit_identity(
                draw.complete_source.empty() ? draw.source : draw.complete_source, true);
            if (uniform_identity) identity_target = &*uniform_identity;
        }
        if (!identity_target || draw.source.empty() ||
                draw.y < 0 || draw.y >= gps_->dimy || draw.x < 0 ||
                draw.x >= gps_->dimx || (only_y >= 0 && draw.y != only_y)) continue;
        const auto layout_uniform_member = [&](Match &match) {
            if (draw.uniform_member_right <= draw.x ||
                    draw.uniform_member_right > gps_->dimx) return;
            match.layout_x = draw.x;
            match.layout_length = draw.uniform_member_right - draw.x;
            match.layout_clip_right = draw.uniform_member_right;
            match.layout_box_pixel_x = -1;
            match.layout_box_pixel_width = 0;
            match.layout_left = true;
            match.layout_right = false;
            match.layout_ellipsize = true;
            match.layout_prepared = true;
        };
        // The arena hover's numbered species can arrive here as a literal
        // native name before the whole-card translator reaches its row.
        // Retain this draw's ownership and layout, changing only its target.
        std::optional<std::string> arena_target;
        if (map_hover && std::any_of(map_hover->rows.begin(), map_hover->rows.end(),
                [&](const NativeTextCardRow &row) {
                    return row.x == draw.x && row.y == draw.y &&
                        (row.source == draw.source || row.complete_source == draw.source);
                }))
            arena_target = translate_arena_numbered_creature(draw.source);
        bool claimed = false;
        for (auto &match : result) {
            if (match.x != draw.x || match.y != draw.y || match.source.empty() ||
                    match.length != static_cast<int>(match.source.size()) ||
                    !std::string_view(draw.source).starts_with(match.source)) continue;
            // Labor rows and complete UI records already own the formatter's
            // person field. Their remaining spans can exist only to suppress
            // native ink; never replace a reflowed message with a name label.
            if (match.rule == kFortressLaborWorkerRule ||
                match.rule == kFortressLaborCaptionRule ||
                match.rule == kFortressUnitChooserRule || match.rule == kUiMessageRule ||
                match.rule == kAdventureCombatFieldRule || match.rule == kFortressJusticeActorRule) {
                claimed = true;
                break;
            }
            match.target = arena_target ? *arena_target : *identity_target;
            if (match.layout_x < 0) {
                match.layout_x = draw.x;
                match.layout_length = match.length;
                match.layout_left = true;
            }
            match.native_hover_untranslated = false;
            match.native_help_review_source.clear();
            layout_uniform_member(match);
            claimed = true;
            break;
        }
        if (claimed || draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;
        auto &row = screen_rows[draw.y];
        if (row.compare(draw.x, draw.source.size(), draw.source) != 0) continue;
        Match match{draw.x, draw.y, static_cast<int>(draw.source.size()),
            kCreatureNameRule, arena_target ? *arena_target : *identity_target,
            draw.source};
        // Formatter-owned names start at the actual addst cursor, including
        // animation labels without the ordinary name/gloss/species syntax.
        match.layout_x = draw.x;
        match.layout_length = match.length;
        match.layout_left = true;
        layout_uniform_member(match);
        result.push_back(std::move(match));
        std::fill_n(row.begin() + draw.x, draw.source.size(), ' ');
    }
}
