// These five addst callers belong to the decompiled character Rooms branch.
// Names are saved zone nick_name bytes, not generated owner/office prose.
// Needs is one field emitted as "Needs " followed by the required room grade.
void Overlay::append_character_room_fields(const std::vector<std::string> &context,
        std::vector<std::string> &rows, std::vector<Match> &matches,
        int tabs_y, int only_y) const {
    if (!native_character_translation_active(gps_)) return;
    if (!gps_ || tabs_y < 0 || tabs_y >= gps_->dimy ||
            context.size() != static_cast<size_t>(gps_->dimy) ||
            rows.size() != context.size()) return;
    for (size_t y = 0; y < context.size(); ++y)
        if (context[y].size() != static_cast<size_t>(gps_->dimx) ||
                rows[y].size() != context[y].size()) return;
    const auto tabs = character_information_tab_fields(context[tabs_y]);
    if (tabs.size() < 5 || tabs[4].text != "Rooms") return;
    const auto read_char = [&](int x, int y) -> unsigned char {
        return x >= 0 && x < gps_->dimx && y >= 0 && y < gps_->dimy
            ? static_cast<unsigned char>(context[y][x]) : 0;
    };
    auto frame = find_ascii_panel_frame(tabs.front().start, tabs.back().end,
        tabs_y, gps_->dimx, gps_->dimy, read_char);
    if (!frame) frame = find_graphical_character_panel_frame(*gps_,
        tabs.front().start, tabs.back().end, tabs_y);
    const auto header = frame ? frame : find_character_header_frame(*gps_,
        tabs.front().start, tabs.back().end, tabs_y, read_char);
    const int panel_left = header ? header->left + 1 : tabs.front().start;
    const int panel_right = header ? header->right : gps_->dimx;
    const int panel_bottom = frame ? frame->bottom : gps_->dimy;
    const auto fallback = [&] {
        // Other hosts keep the existing complete room-grade ownership. This
        // finite vocabulary never tries to classify a zone name by spelling.
        for (int y = tabs_y + 1; y < panel_bottom; ++y) {
            for (const auto &field : split_text_fields(context[y])) {
                if (field.start < panel_left || field.end > panel_right) continue;
                const bool requirement = field.text.starts_with("Needs ") &&
                    is_character_room_status(std::string_view(field.text).substr(6));
                const bool grade = is_character_room_status(field.text);
                if (!grade && !requirement && field.text != "No assigned rooms") continue;
                std::optional<std::string> target;
                if (grade || requirement)
                    target = exact_literal_translation(std::string(requirement
                        ? "Character room requirement: " : "Character room grade: ") + field.text);
                if (!target) target = exact_literal_translation(field.text);
                if (!target || target->empty()) continue;
                for (int x = field.start; x < field.end; ++x)
                    if (rows[y][x] == context[y][x]) rows[y][x] = ' ';
                if (only_y >= 0 && only_y != y) continue;
                Match room{field.start, y, field.end - field.start,
                    kCharacterRoomStatusRule, *target, field.text};
                room.layout_left = true;
                room.layout_clip_right = panel_right - 4;
                matches.push_back(std::move(room));
            }
        }
    };
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base) { fallback(); return; }
    const uintptr_t name_writer = native_reference_address(base, 0x171164);
    const uintptr_t grade_writer = native_reference_address(base, 0x17120d);
    const uintptr_t needs_writer = native_reference_address(base, 0x171337);
    const uintptr_t required_grade_writer = native_reference_address(base, 0x171360);
    const uintptr_t empty_writer = native_reference_address(base, 0x170529);
#else
    const uintptr_t name_writer = native_elf_5317_address(0x140a7e5);
    const uintptr_t grade_writer = native_elf_5317_address(0x140a066);
    const uintptr_t needs_writer = native_elf_5317_address(0x140a16c);
    const uintptr_t required_grade_writer = native_elf_5317_address(0x140a19f);
    const uintptr_t empty_writer = native_elf_5317_address(0x140a86d);
#endif
    if (!name_writer || !grade_writer || !needs_writer ||
            !required_grade_writer || !empty_writer) { fallback(); return; }
    const std::array batches{captured_native_drawn_text_view(false),
        captured_native_drawn_text_view(true)};
    bool captured_fields = false;
    constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
    for (const auto &batch : batches) for (const auto &draw : batch) {
        const bool authored = name_writer && draw.native_caller == name_writer;
        const bool grade = grade_writer && draw.native_caller == grade_writer;
        const bool requirement = needs_writer && draw.native_caller == needs_writer;
        const bool empty = empty_writer && draw.native_caller == empty_writer;
        if ((!authored && !grade && !requirement && !empty) || draw.source.empty() ||
                draw.x < panel_left || draw.x >= panel_right ||
                draw.y <= tabs_y || draw.y >= panel_bottom ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                !draw.draw_clip) continue;
        std::string source = draw.source;
        int right = std::min(panel_right - 4, draw.draw_clip->x + draw.draw_clip->w);
        if (requirement) {
            if (source != "Needs ") continue;
            const NativeDrawnTextRow *suffix = nullptr;
            for (const auto &candidate : batch) {
                if (candidate.native_caller != required_grade_writer ||
                        candidate.y != draw.y || candidate.x != draw.x + 6 ||
                        candidate.sequence <= draw.sequence || candidate.source.empty() ||
                        candidate.draw_grid != draw.draw_grid ||
                        candidate.draw_dimx != draw.draw_dimx ||
                        candidate.draw_dimy != draw.draw_dimy || !candidate.draw_clip) continue;
                if (candidate.x < candidate.draw_clip->x ||
                        candidate.y < candidate.draw_clip->y ||
                        candidate.y >= candidate.draw_clip->y + candidate.draw_clip->h) continue;
                if (!suffix || candidate.sequence > suffix->sequence) suffix = &candidate;
            }
            if (!suffix) continue;
            source += suffix->source;
            right = std::min(right, suffix->draw_clip->x + suffix->draw_clip->w);
        }
        const auto ink = trim_view(source);
        if (ink.empty() || right <= draw.x) continue;
        const int first = draw.x + static_cast<int>(ink.data() - source.data());
        if (first < draw.draw_clip->x || draw.y < draw.draw_clip->y ||
                draw.y >= draw.draw_clip->y + draw.draw_clip->h) continue;
        const int end = static_cast<int>(std::min<int64_t>(
            right, int64_t(first) + static_cast<int64_t>(ink.size())));
        if (end <= first) continue;
        const std::string physical(ink.substr(0, static_cast<size_t>(end - first)));
        const auto row_half = [&](int y) -> uint32_t {
            if (y <= tabs_y || y >= panel_bottom ||
                    context[y].size() != static_cast<size_t>(gps_->dimx) ||
                    context[y].compare(first, physical.size(), physical) != 0)
                return UINT32_MAX;
            uint32_t half = UINT32_MAX;
            const auto *flags = draw.top_layer
                ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            for (int x = first; x < end; ++x) {
                const unsigned char expected = physical[static_cast<size_t>(x - first)];
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                if (!cell || (cell[0] ? cell[0] : ' ') != expected ||
                        (expected != ' ' && top != draw.top_layer)) return UINT32_MAX;
                // Identical bytes from a later tooltip still belong to that
                // tooltip. Only this record's typed writers may supply ink.
                for (auto later = batch.rbegin(); later != batch.rend(); ++later) {
                    if (later->y != y || later->x > x ||
                            x - later->x >= static_cast<int>(later->source.size())) continue;
                    const uintptr_t writer = requirement && x >= draw.x + 6
                        ? required_grade_writer : draw.native_caller;
                    if (later->native_caller != writer ||
                            later->source[static_cast<size_t>(x - later->x)] !=
                                static_cast<char>(expected)) return UINT32_MAX;
                    break;
                }
                if (expected == ' ') continue;
                const uint32_t current = flags
                    ? flags[static_cast<size_t>(x) * gps_->dimy + y] & (upper | lower) : 0;
                if (current == (upper | lower) ||
                        (half != UINT32_MAX && half != current)) return UINT32_MAX;
                half = current;
            }
            return half;
        };
        const uint32_t half = row_half(draw.y);
        if (half == UINT32_MAX) continue;
        captured_fields = true;
        const int top_y = half == lower ? draw.y - 1 : draw.y;
        const bool split = half == upper || half == lower;
        const bool paired = split && row_half(top_y) == upper && row_half(top_y + 1) == lower;
        const std::string complete(ink);
        std::optional<std::string> translated;
        if (!authored) {
            if (!empty) translated = exact_literal_translation(std::string(requirement
                ? "Character room requirement: " : "Character room grade: ") + complete);
            if (!translated) translated = exact_literal_translation(complete);
        }
        const std::string target = translated && !translated->empty()
            ? *translated : native_text_to_utf8(complete);
        auto translation = TranslationResult::translated(complete, target,
            authored ? "character room name" : requirement
                ? "character room requirement" : empty
                    ? "character room empty list" : "character room grade");
        if (authored || !translated || translated->empty()) {
            translation.policy = TranslationPolicy::Display;
            translation.status = authored ? TranslationStatus::PreservedAuthored
                : TranslationStatus::Untranslated;
            translation.fragments.front().status = translation.status;
        }
        const auto metadata = std::make_shared<const TranslationResult>(std::move(translation));
        const auto append = [&](int y, bool duplicate) {
            if (std::any_of(matches.begin(), matches.end(), [&](const Match &seen) {
                    return seen.rule == kCharacterRoomStatusRule && seen.x == first &&
                        seen.y == y && seen.source == physical;
                })) return;
            // The composed field owns its entire meaning. Each raw layer
            // suppresses only the original bytes it actually contains.
            for (int x = first; x < end; ++x)
                if (rows[y][x] == physical[static_cast<size_t>(x - first)]) rows[y][x] = ' ';
            if (only_y >= 0 && only_y != y) return;
            std::erase_if(matches, [&](const Match &previous) {
                return previous.y == y && previous.x < end &&
                    first < previous.x + previous.length;
            });
            Match field{first, y, end - first, kCharacterRoomStatusRule,
                duplicate ? std::string{} : target, physical};
            field.translation_result = metadata;
            field.layout_x = first;
            field.layout_length = right - first;
            field.layout_clip_right = right;
            field.layout_left = true;
            field.layout_ellipsize = authored;
            field.layout_foreground_rgb = draw.foreground_rgb;
            if (split) {
                field.native_split_text = true;
                field.native_split_top_y = top_y;
                field.native_split_duplicate = duplicate;
            }
            matches.push_back(std::move(field));
        };
        if (paired) {
            append(top_y, false);
            append(top_y + 1, true);
        } else append(draw.y, false);
    }
    if (!captured_fields) fallback();
}

// Room field capture only needs the native character tab band. Layout must
// use the same identity, independently of which tab translations survived
// matching/half-font normalization. Otherwise the generic picture pass can
// left-align empty rooms while an occupied room's action breaks its frame
// lookup and leaves that grade centered inside its English source width.
void Overlay::layout_character_room_rows(SDL_Renderer *renderer) {
    if (!native_character_translation_active(gps_)) return;
    if (!gps_ || !renderer || !face_ || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return;

    const auto settings = native_ui_settings();
    const auto read_char = [&](int x, int y) -> unsigned char {
        if (!settings || !settings->classic) return visible_char_at(x, y);
        bool top = false;
        const auto *cell = cell_at(x, y, &top);
        return cell ? cell[0] : 0;
    };
    for (int tabs_y = 0; tabs_y < gps_->dimy; ++tabs_y) {
        std::string native(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = read_char(x, tabs_y);
            native[x] = ch ? ch : ' ';
        }
        const auto tabs = character_information_tab_fields(native);
        if (tabs.size() < 5 || tabs[4].text != "Rooms") continue;

        auto frame = find_ascii_panel_frame(tabs.front().start, tabs.back().end,
            tabs_y, gps_->dimx, gps_->dimy, read_char);
        if (!frame) frame = find_graphical_character_panel_frame(*gps_,
            tabs.front().start, tabs.back().end, tabs_y);
        const auto header = frame ? frame : find_character_header_frame(*gps_,
            tabs.front().start, tabs.back().end, tabs_y, read_char);
        const int panel_left = header ? header->left + 1 : tabs.front().start;
        const int panel_right = header ? header->right : gps_->dimx;
        const int panel_bottom = frame ? frame->bottom : gps_->dimy;

        std::vector<std::vector<Match *>> rows;
        int left = panel_right;
        for (Match &match : prepared_matches_) {
            const auto source = trim_view(match.source);
            if (match.target.empty() || match.native_split_duplicate ||
                match.y <= tabs_y || match.y >= panel_bottom ||
                match.x < panel_left || match.length <= 0 ||
                match.x + match.length > panel_right ||
                match.rule != kCharacterRoomStatusRule) continue;
            // A foreground tooltip or another native layer cannot lend its
            // status word to the room list behind it.
            const int first = match.x + static_cast<int>(source.data() - match.source.data());
            bool current = true;
            for (size_t i = 0; i < source.size(); ++i)
                if (read_char(first + static_cast<int>(i), match.y) !=
                        static_cast<unsigned char>(source[i])) {
                    current = false;
                    break;
                }
            if (!current) continue;
            rows.push_back({&match});
            left = std::min(left, first);
        }
        if (rows.empty()) continue;

        // Keep the existing action gutter. Every name, grade and requirement
        // shares the native text column, never its private English ink span.
        int right = panel_right - 4;
        for (const auto &row : rows)
            if (row.front()->layout_clip_right >= 0)
                right = std::min(right, row.front()->layout_clip_right);
        if (right <= left) continue;
        for (const auto &row : rows) {
            Match &match = *row.front();
            match.layout_box_pixel_x = -1;
            match.layout_box_pixel_width = 0;
            match.layout_right = false;
            match.layout_clip_right = match.layout_clip_right < 0 ? right
                : std::min(right, match.layout_clip_right);
        }
        layout_fortress_text_rows(renderer, rows, left, right, true);
        // Preserve native y/half-font baselines and all source mask spans.
        // Only horizontal layout and the list's common font belong here.
    }
}
