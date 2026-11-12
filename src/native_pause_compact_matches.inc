if (native_pause_compact_view(gps_)) {
    // The owner, mode 5 and action IDs 14/15 identify this menu. Return
    // addresses identify its fields; current_span compares source bytes
    // only to prove that a captured draw still owns its suppression span.
    const auto &menu = *g_native_pause_compact_menu;
    const auto base = native_history_profile_base();
    const auto site = [&](uintptr_t coordinate) -> uintptr_t {
#ifdef _WIN32
        return native_reference_address(base, coordinate);
#else
        switch (coordinate) {
        case 0x1e1efd: return native_elf_5317_address(0x142713b);
        case 0x1e2838: return native_elf_5317_address(0x1429431);
        case 0x1e2862: return native_elf_5317_address(0x1429212);
        case 0x1e2899: return native_elf_5317_address(0x1429259);
        case 0x1e28d7: return native_elf_5317_address(0x1429289);
        case 0x1e290e: return native_elf_5317_address(0x14292c7);
        case 0x1e2aa3: return native_elf_5317_address(0x1429471);
        case 0x1e2acd: return native_elf_5317_address(0x1428bfd);
        case 0x1e2b04: return native_elf_5317_address(0x1428c49);
        case 0x1e2b42: return native_elf_5317_address(0x1428c79);
        case 0x1e2b79: return native_elf_5317_address(0x1428cb7);
        case 0x1e3008: return native_elf_5317_address(0x142967b);
        case 0x1e302e: return native_elf_5317_address(0x142976f);
        case 0x1e3065: return native_elf_5317_address(0x14296b7);
        case 0x1e30a3: return native_elf_5317_address(0x14296e7);
        case 0x1e30da: return native_elf_5317_address(0x1429722);
        default: return 0;
        }
#endif
    };
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    if (!base || tile_w <= 0 || tile_h <= 0) return result;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const auto place = [&](Match &match, const SDL_Rect &box, bool left) {
        match.rule = -2;
        match.layout_x = box.x;
        match.layout_y = match.y;
        match.layout_length = box.w;
        match.layout_box_pixel_x = origin_x + box.x * tile_w;
        match.layout_box_pixel_width = box.w * tile_w;
        match.layout_fixed_baseline = true;
        match.layout_left = left;
        match.layout_prepared = true;
        match.layout_line_height_pixels = tile_h;
        match.layout_native_clip = SDL_Rect{origin_x + box.x * tile_w,
            origin_y + box.y * tile_h, box.w * tile_w, box.h * tile_h};
        match.layout_ellipsize = true;
    };
    const auto field = [&](uintptr_t caller, int y) -> const NativeDrawnTextRow * {
        if (!caller) return nullptr;
        for (auto it = draws.rbegin(); it != draws.rend(); ++it) {
            const auto &draw = *it;
            const auto *grid = draw.top_layer ? gps_->screen_top : gps_->screen;
            if (draw.native_caller == caller && draw.y == y && draw.draw_grid == grid &&
                    draw.draw_dimx == gps_->dimx && draw.draw_dimy == gps_->dimy)
                return &draw;
        }
        return nullptr;
    };
    const auto action_caller = site(0x1e1efd);
    constexpr std::array<std::string_view, 2> action_keys{{
        "Return to title menu", "Continue"}};
    for (size_t index = 0; index < menu.buttons.size(); ++index) {
        const auto &box = menu.buttons[index];
        const auto *draw = field(action_caller, box.y);
        if (!draw) continue;
        auto match = current_span(*draw);
        if (!match) continue;
        // Translation keys for the already identified action IDs. Neither
        // key nor displayed caption selects the menu or its text rectangle.
        const auto translated = exact_literal_translation(std::string(action_keys[index]));
        match->target = translated ? *translated : native_text_to_utf8(draw->source);
        match->layout_foreground_rgb = draw->foreground_rgb;
        place(*match, box, false);
        result.push_back(std::move(*match));
    }
    if (menu.soundtrack.w <= 0 || menu.soundtrack.h <= 0) return result;
    struct MusicCalls {
        uintptr_t status, title, separator, author;
        size_t prefix;
        int row;
    };
    const std::array<MusicCalls, 6> music{{
        {site(0x1e2838), site(0x1e2899),
            site(0x1e28d7), site(0x1e290e), 0, 0},
        {site(0x1e2862), site(0x1e2899),
            site(0x1e28d7), site(0x1e290e), 1, 0},
        {site(0x1e2aa3), site(0x1e2b04),
            site(0x1e2b42), site(0x1e2b79), 2, 1},
        {site(0x1e2acd), site(0x1e2b04),
            site(0x1e2b42), site(0x1e2b79), 3, 1},
        {site(0x1e3008), site(0x1e3065),
            site(0x1e30a3), site(0x1e30da), 4, 0},
        {site(0x1e302e), site(0x1e3065),
            site(0x1e30a3), site(0x1e30da), 0, 0},
    }};
    for (const auto &calls : music) {
        const int y = menu.soundtrack.y + calls.row;
        const auto *status = field(calls.status, y);
        const auto *title = field(calls.title, y);
        const auto *separator = field(calls.separator, y);
        const auto *author = field(calls.author, y);
        if (!status || !separator) continue;
        auto match = current_span(*status);
        const auto separator_span = current_span(*separator);
        if (!match || !separator_span || status->x != menu.soundtrack.x) continue;
        int right = separator_span->x + separator_span->length;
        bool intact = true;
        for (const auto *part : {title, author}) {
            if (!part || trim_view(part->source).empty()) continue;
            const auto span = current_span(*part);
            if (!span) { intact = false; break; }
            right = std::max(right, span->x + span->length);
        }
        if (!intact) continue;
        // Empty metadata can omit a capture. Accept it only when its native
        // interval also has no visible ink, so uncaptured text is never lost.
        const auto blank = [&](int first, int last) {
            return first >= 0 && first <= last && last <= gps_->dimx &&
                screen_rows[y].find_first_not_of(' ', first) >= static_cast<size_t>(last);
        };
        if ((!title && !blank(status->x + static_cast<int>(status->source.size()), separator->x)) ||
                (!author && !blank(separator->x + static_cast<int>(separator->source.size()),
                    menu.soundtrack.x + menu.soundtrack.w))) continue;
        match->length = right - match->x;
        match->source = screen_rows[y].substr(match->x, match->length);
        const auto append = [&](std::string_view text, const NativeDrawnTextRow *draw) {
            std::vector<uint32_t> cps;
            if (!decode_utf8(text, cps)) return;
            match->target.append(text);
            const int color = draw && draw->foreground_rgb >= 0 ? draw->foreground_rgb : 0xffffff;
            match->layout_glyph_foreground_rgb.insert(match->layout_glyph_foreground_rgb.end(),
                cps.size(), color);
        };
        append(soundtrack_status_prefixes[calls.prefix].second, status);
        if (title) append(native_text_to_utf8(title->source), title);
        append(" — ", separator);
        if (author) append(native_text_to_utf8(author->source), author);
        place(*match, menu.soundtrack, true);
        result.push_back(std::move(*match));
    }
    return result;
}
