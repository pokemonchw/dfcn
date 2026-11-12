// Shared task-card fields, bound to each platform's native renderer and its original
// addst return sites in data/extracted/adventure-quest-sidebar. Each field
// owns its role independently of the title, border, and adjacent English.
// Native body/title x is frame_left+2; the east edge is x+28. Bearing x is
// frame_right-4. Each field has exactly one native row of layout space.
        enum class QuestField { Title, Literal, Person, Actor, Artifact, Group, Bearing };
        struct QuestWriter {
            uintptr_t caller;
            QuestField kind;
            int row;
        };
        const auto base = native_history_profile_base();
        const QuestWriter writers[] = {
            {native_ui_semantic_address(0xaf628f), QuestField::Title, 1},
            {native_ui_semantic_address(0xaf645f), QuestField::Literal, 2},
            {native_ui_semantic_address(0xaf64db), QuestField::Artifact, 3},
            {native_ui_semantic_address(0xaf6533), QuestField::Literal, 4},
            {native_ui_semantic_address(0xaf65b5), QuestField::Group, 5},
            {native_ui_semantic_address(0xaf6dc2), QuestField::Literal, 2},
            {native_ui_semantic_address(0xaf6e4a), QuestField::Actor, 3},
            {native_ui_semantic_address(0xaf6eab), QuestField::Literal, 4},
            {native_ui_semantic_address(0xaf7822), QuestField::Literal, 2},
            {native_ui_semantic_address(0xaf7872), QuestField::Person, 2},
            {native_ui_semantic_address(0xaf78ca), QuestField::Literal, 3},
            {native_ui_semantic_address(0xaf7922), QuestField::Literal, 4},
            {native_ui_semantic_address(0xaf79a4), QuestField::Artifact, 5},
            {native_ui_semantic_address(0xaf8338), QuestField::Person, 2},
            {native_ui_semantic_address(0xaf8383), QuestField::Literal, 3},
            {native_ui_semantic_address(0xaf83db), QuestField::Literal, 4},
            {native_ui_semantic_address(0xaf845d), QuestField::Group, 5},
            {native_ui_semantic_address(0xaf9591), QuestField::Literal, 3},
            {native_ui_semantic_address(0xaf9600), QuestField::Literal, 4},
            {native_ui_semantic_address(0xaf9654), QuestField::Literal, 4},
        };
        const uintptr_t bearing_writers[] = {
#include "adventure_quest_bearing_sites.inc"
        };
        const auto writer_at = [&](uintptr_t caller) -> std::optional<QuestWriter> {
            if (!base || !caller) return std::nullopt;
            for (const auto &writer : writers)
                if (caller == writer.caller) return writer;
            for (const auto bearing : bearing_writers)
                if (caller == bearing) return QuestWriter{caller, QuestField::Bearing, 1};
            return std::nullopt;
        };
        const auto current_byte = [&](const NativeDrawnTextRow &draw, int x,
                unsigned char expected) {
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            const auto origin = native_text_grid_origin(*gps_,
                static_cast<size_t>(x) * gps_->dimy + draw.y, top);
            // Transparent top spaces can come from the base plane. Every
            // ink byte must still belong to this actual native writer.
            return cell && (cell[0] ? cell[0] : ' ') == expected &&
                (expected == ' ' || (origin.grid == draw.draw_grid &&
                    origin.top_layer == draw.top_layer)) &&
                (!screen_override || screen_override == (top ? gps_->screen_top : gps_->screen));
        };
        const int tile_w = std::max(1, gps_->tile_pixel_x);
        const int tile_h = std::max(1, gps_->tile_pixel_y);
        const int pixel_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
        const int pixel_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
        const int bearing_width = std::max(3,
            (3 * unified_font_pixels() + 2 * config_.horizontal_padding + 2 + tile_w - 1) / tile_w);
        std::stable_sort(title_draws.begin(), title_draws.end(), [](const auto &a, const auto &b) {
            return a.sequence > b.sequence;
        });
        for (const auto &draw : title_draws) {
            const auto writer = writer_at(draw.native_caller);
            if (!writer || draw.editable_text || draw.source.empty() || !draw.draw_grid ||
                    draw.draw_epoch != title_epoch || draw.draw_dimx != gps_->dimx ||
                    draw.draw_dimy != gps_->dimy || draw.x < 0 || draw.x >= gps_->dimx ||
                    draw.y < writer->row || draw.y >= gps_->dimy) continue;
            const bool bearing = writer->kind == QuestField::Bearing;
            const int left = bearing ? draw.x - 24 : draw.x;
            const int frame_right = left + 28;
            if (left < 0) continue;
            int right = std::min(frame_right, gps_->dimx);
            int layout_left = left;
            if (bearing) {
                right = std::min(right, frame_right - 1);
                layout_left = std::max(left, right - bearing_width);
            } else if (writer->kind == QuestField::Title) {
                for (const auto &direction : title_draws) {
                    const auto direction_writer = writer_at(direction.native_caller);
                    if (!direction_writer || direction_writer->kind != QuestField::Bearing ||
                            direction.draw_epoch != draw.draw_epoch || direction.y != draw.y ||
                            direction.x != frame_right - 4 || direction.draw_grid != draw.draw_grid ||
                            direction.top_layer != draw.top_layer || direction.draw_dimx != gps_->dimx ||
                            direction.draw_dimy != gps_->dimy || direction.source.empty()) continue;
                    // Reserve the bearing's Chinese box separately from the
                    // title. Same-location *** and native height glyphs stay.
                    right = std::min(right, direction.source == "***" ? direction.x
                        : std::max(left, frame_right - 1 - bearing_width));
                    break;
                }
            }
            int first = draw.x;
            int end = static_cast<int>(std::min<int64_t>(frame_right,
                int64_t(draw.x) + static_cast<int64_t>(draw.source.size())));
            end = std::min(end, gps_->dimx);
            if (writer->kind == QuestField::Title) {
                // Source suppression stops at the actual navigation field,
                // while the wider Chinese bearing box only changes layout.
                for (const auto &direction : title_draws)
                    if (direction.y == draw.y && direction.x == frame_right - 4 &&
                            direction.draw_grid == draw.draw_grid && direction.top_layer == draw.top_layer &&
                            direction.draw_epoch == draw.draw_epoch) {
                        const auto field = writer_at(direction.native_caller);
                        if (field && field->kind == QuestField::Bearing) end = std::min(end, direction.x);
                    }
            }
            if (draw.draw_clip) {
                const auto &clip = *draw.draw_clip;
                if (draw.y < clip.y || draw.y >= int64_t(clip.y) + clip.h) continue;
                first = std::max(first, clip.x);
                layout_left = std::max(layout_left, clip.x);
                const auto clip_right = static_cast<int>(std::min<int64_t>(gps_->dimx,
                    int64_t(clip.x) + clip.w));
                end = std::min(end, clip_right);
                right = std::min(right, clip_right);
            }
            if (first >= end || right <= layout_left) continue;
            bool current = true;
            for (int x = first; x < end; ++x)
                if (!current_byte(draw, x, static_cast<unsigned char>(draw.source[x - draw.x]))) {
                    current = false;
                    break;
                }
            if (!current) continue;
            // Newer native writes retain their own roles even when their
            // bytes happen to match an older person's name or fixed sentence.
            if (std::any_of(title_draws.begin(), title_draws.end(), [&](const auto &later) {
                    return later.sequence > draw.sequence && later.draw_epoch == draw.draw_epoch &&
                        later.y == draw.y && later.draw_grid == draw.draw_grid &&
                        later.top_layer == draw.top_layer && later.x < end &&
                        int64_t(later.x) + static_cast<int64_t>(later.source.size()) > first;
                })) continue;
            if (std::any_of(text_input_regions.begin(), text_input_regions.end(), [&](const SDL_Rect &input) {
                    return input.y == draw.y && input.x < end && first < input.x + input.w;
                })) continue;
            while (first < end && draw.source[first - draw.x] == ' ') ++first;
            while (end > first && draw.source[end - 1 - draw.x] == ' ') --end;
            if (first == end) continue;
            const std::string_view source = draw.complete_source.empty()
                ? std::string_view(draw.source) : std::string_view(draw.complete_source);
            std::optional<std::string> target;
            switch (writer->kind) {
            case QuestField::Title: {
                const auto native = native_adventure_quest_original_title(draw.address,
                    draw.source, draw.native_caller);
                target = task_title(native ? std::string_view(native->source) : source,
                    native ? &*native : nullptr);
                break;
            }
            case QuestField::Literal:
                for (const auto &[en, zh] : fixed_fields)
                    if (source == en) { target = zh; break; }
                break;
            case QuestField::Person: target = person(source); break;
            case QuestField::Actor:
                target = translate_journal_agreement_field(source, NativeJournalAgreementField::Actor);
                break;
            case QuestField::Artifact:
                target = translate_journal_title(source, JournalSearchKind::Artifact);
                break;
            case QuestField::Group:
                target = translate_journal_title(source, JournalSearchKind::Group);
                break;
            case QuestField::Bearing:
                if (source == "***") continue;
                for (const auto &[en, zh] : bearings)
                    if (source == en) { target = zh; break; }
                break;
            }
            if (!target) target = native_text_to_utf8(source);
            Match field{first, draw.y, end - first, kAdventureJournalRule, {},
                draw.source.substr(first - draw.x, end - first)};
            bool recovery = false;
            for (int x = first; x < end; ++x) {
                const auto visible = screen_rows[draw.y][x];
                if (visible != field.source[x - first]) {
                    if (visible != ' ') { current = false; break; }
                    recovery = true;
                }
            }
            if (!current) continue;
            field.layout_foreground_rgb = draw.foreground_rgb;
            // Always bound the row, including the ordinary visible path.
            // A long translated title cannot paint over the next sentence.
            field.layout_native_clip = SDL_Rect{pixel_x + layout_left * tile_w,
                pixel_y + draw.y * tile_h, (right - layout_left) * tile_w, tile_h};
            if (recovery) {
                field.graphical_clear_x = first;
                field.graphical_clear_y = draw.y;
                field.graphical_clear_width = end - first;
                field.graphical_clear_height = 1;
            }
            append_bounded_paragraph({std::move(field)}, *target, screen_rows,
                result, only_y, right, right, {}, false, layout_left);
        }
