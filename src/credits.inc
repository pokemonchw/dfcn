// The native build entry point stamps the local compilation hour and five-byte
// binary fingerprint before deployment. Volatile reads keep -O2 from folding
// the placeholder into the displayed credit; the version lives in the core.
static const volatile char kTranslationBinaryVersion[] = "DFCN_BINARY_VERSION[0000.00.00.00.00000]";

static std::string translation_binary_version() {
    constexpr size_t offset = sizeof("DFCN_BINARY_VERSION[") - 1;
    std::string version(sizeof(kTranslationBinaryVersion) - offset - 2, '\0');
    for (size_t i = 0; i < version.size(); ++i)
        version[i] = kTranslationBinaryVersion[offset + i];
    return version;
}

// The About dialog contains authored records from data/credits.txt, not
// procedural names or a paragraph assembled from unrelated English spans.
// Resolve its current frame on every scan; no screen/scroll-position cache.
void Overlay::append_credits_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            if (ch) context[y][x] = static_cast<char>(ch);
        }
    append_main_menu_credits_rows(context, rows, matches, only_y);
    constexpr std::string_view fmod = "This Version of DF uses FMOD Studio";
    constexpr std::string_view sdl = "This version of DF uses SDL:";
    constexpr std::string_view license = "See the SDL folder for license information.";
    const NativePanelBorders borders(*gps_);
    for (int anchor_y = 0; anchor_y < gps_->dimy; ++anchor_y) {
        const size_t at = context[anchor_y].find(fmod);
        if (at == std::string::npos) continue;
        const auto panel = native_panel_interior(borders, *gps_, static_cast<int>(at),
            static_cast<int>(at + fmod.size()), anchor_y);
        if (!panel) continue;
        const int right = panel->x + panel->w, bottom = panel->y + panel->h;
        int license_y = -1;
        bool have_sdl = false, have_copyright = false;
        std::optional<SDL_Rect> done;
        for (int y = panel->y; y < bottom; ++y) {
            const auto line = std::string_view(context[y]).substr(panel->x, panel->w);
            have_sdl |= line.find(sdl) != std::string_view::npos;
            have_copyright |= line.find("Copyright (C) ") != std::string_view::npos;
            if (line.find(license) != std::string_view::npos) license_y = y;
            for (const auto &field : split_text_fields(context[y])) {
                if (field.text != "Done" || field.start < panel->x || field.end > right)
                    continue;
                const auto button = native_intro_button_text_rect(*gps_,
                    field.start, field.end, y);
                if (button && button->x >= panel->x && button->x + button->w <= right &&
                    button->y >= panel->y && button->y + button->h <= bottom)
                    done = button;
            }
        }
        if (!have_sdl || !have_copyright || license_y < anchor_y || !done) continue;
        const int left = static_cast<int>(at);
        int list_right = right - 1;
        for (const auto &bar : native_vertical_scrollbar_spans(*gps_, *panel))
            if (bar.y > license_y) list_right = std::min(list_right, bar.x - 1);
        if (list_right <= left) continue;

        const auto claim = [&](int x, int y, int end, int rule,
                int box_left, int box_right, bool centered) {
            // Trim only padding from the physical span. A trailing CR must
            // remain owned, otherwise its CP437 music-note glyph survives.
            while (x < end && context[y][x] == ' ') ++x;
            while (end > x && context[y][end - 1] == ' ') --end;
            if (x >= end || box_right <= box_left) return;
            const std::string source = context[y].substr(x, end - x);
            if (rows[y].compare(x, source.size(), source) != 0) return;
            std::string text = source;
            while (!text.empty() && (text.back() == '\r' || text.back() == ' '))
                text.pop_back();
            auto translated = exact_literal_translation("Credits: " + text);
            // Roles and thanks reuse the established complete UI strings.
            // Unknown contributors remain whole; never feed them to the
            // procedural-name/word grammar (e.g. Bowman -> bow + man).
            if (!translated && rule != kCreditsTextRule && !text.empty())
                translated = exact_literal_translation(text);
            if (!translated && rule != kCreditsTextRule && !text.empty()) {
                // Copyright years use the ordinary indexed numeric templates,
                // not TOML/name composition or a second year-format grammar.
                for (int index : candidate_template_rules(text)) {
                    const Rule &candidate = rules_[static_cast<size_t>(index)];
                    if (!candidate.numeric_template || candidate.string_template) continue;
                    size_t end = 0;
                    std::vector<std::string> captures;
                    if (match_template(candidate, text, 0, &end, &captures) && end == text.size()) {
                        translated = fill_template(candidate, captures, &capture_translations_);
                        break;
                    }
                }
            }
            Match match{x, y, end - x, rule,
                translated ? *translated : native_text_to_utf8(text), source};
            match.native_hover_untranslated = !translated && !text.empty();
            match.layout_x = box_left;
            match.layout_length = box_right - box_left;
            match.layout_clip_right = box_right;
            match.layout_left = !centered;
            if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
            std::fill_n(rows[y].begin() + x, source.size(), ' ');
        };
        for (int y = panel->y; y < bottom; ++y) {
            const bool button_row = y >= done->y && y < done->y + done->h;
            const int text_right = button_row ? std::min(right - 1, done->x - 1)
                : y > license_y ? list_right : right - 1;
            const bool title = y < anchor_y;
            claim(panel->x, y, text_right,
                title ? kCreditsTitleRule : y <= license_y ? kCreditsLegalRule : kCreditsTextRule,
                left, text_right, title);
            // Classic nine-slice borders are real CP437 bytes. Only the
            // caption belongs to translation, never the top/bottom edges.
            if (button_row && trim_view(std::string_view(context[y]).substr(
                    done->x, done->w)) == "Done")
                claim(done->x, y, done->x + done->w, kCreditsDoneRule,
                    done->x, done->x + done->w, true);
        }
        return;
    }
}

void Overlay::layout_credits_rows(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return;
    // Each group uses the shared measured-row renderer. Header/legal text
    // cannot shrink the contributors, and English lengths never set centres.
    // Half-font rows were normalized before detaching these records from
    // generic page/paragraph layout; retain their original baseline and color.
    for (int rule : {kCreditsTextRule, kCreditsLegalRule, kCreditsTitleRule, kCreditsDoneRule}) {
        std::vector<std::vector<Match *>> group;
        int left = 0, right = gps_->dimx;
        for (Match &match : prepared_matches_) {
            if (match.rule != rule || match.target.empty() || match.native_split_duplicate) continue;
            left = std::max(left, match.layout_x);
            right = std::min(right, match.layout_x + match.layout_length);
            group.push_back({&match});
        }
        if (!group.empty() && left < right)
            layout_fortress_text_rows(renderer, group, left, right, true, true);
    }
}

void Overlay::append_main_menu_credits_rows(const std::vector<std::string> &context,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    const auto classic = native_ui_classic();
    if (!classic) return;
    const auto copyright_source = native_main_menu_copyright();
    const bool title_owned = copyright_source &&
        trim_view(*copyright_source).starts_with("Copyright (C) ") &&
        trim_view(*copyright_source).ends_with("Bay 12 Games");
    constexpr std::string_view fmod_source =
        "Dwarf Fortress uses FMOD by Firelight Technologies";
    struct FooterRow {
        int x, y, kind;
        std::string source, translation_source;
        int fps_x = -1;
        std::string fps_source;
        int suffix_x = -1;
        std::string suffix;
    };
    std::vector<FooterRow> footer;
    std::array<int, 4> first{{-1, -1, -1, -1}};
    // Classic has four footer records; graphics keeps version and copyright.
    // Capture both physical halves so even the untranslated version moves.
    for (int y = std::max(0, gps_->dimy - 12); y < gps_->dimy; ++y) {
        std::string row = context[y];
        if (title_owned) {
            // Title artwork and cached native copies can cover the compositor
            // record without changing this persistent footer's source cells.
            // The current title object proves ownership; read its actual
            // composed native layer, rather than making the whole footer
            // depend on which glyphs happened to be copied this frame.
            for (int x = 0; x < gps_->dimx; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                row[x] = cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
            }
        }
        const size_t x = row.find_first_not_of(' ');
        if (x == std::string::npos || x > 2) continue;
        std::string source(trim_view(std::string_view(row).substr(x)));
        std::string translation_source = source;
        int fps_x = -1;
        std::string fps_source;
        // FPS is a separate native field even when its padded values share
        // this physical footer row. Split it before recognizing any record,
        // including the version row, using the same native span reader as
        // the semantic matching pass rather than a dictionary template.
        if (const auto fps = native_fps_counter_span(source)) {
            fps_x = static_cast<int>(x + fps->first);
            fps_source = source.substr(fps->first, fps->second - fps->first);
            source = std::string(trim_view(std::string_view(source).substr(0, fps->first)));
            translation_source = source;
        }
        int kind = -1;
        if (source == "A Bay 12 Games Production") kind = 0;
        else if (source.size() > 1 && source[0] == 'v' &&
                source[1] >= '0' && source[1] <= '9' &&
                std::all_of(source.begin() + 1, source.end(), [](char ch) {
                    return (ch >= '0' && ch <= '9') || ch == '.';
                })) kind = 1;
        else if (source.starts_with("Copyright (C) ") &&
                source.ends_with("Bay 12 Games")) kind = 2;
        else if (source.starts_with("Copyright (C) ")) {
            // The native FPS writer can overwrite the copyright's suffix on
            // either physical font half. The title object's owned string
            // stays valid across FPS-only updates, unlike per-draw captures.
            // Own only the visible prefix; FPS retains its native position.
            if (fps_x < 0) continue;
            if (!copyright_source) continue;
            const auto complete = trim_view(*copyright_source);
            if (!complete.starts_with(source) || !complete.ends_with("Bay 12 Games")) continue;
            translation_source.assign(complete);
            kind = 2;
        } else if (source == fmod_source ||
                (*classic && fps_x >= 0 &&
                    source.starts_with("Dwarf Fortress uses FMOD") &&
                    fmod_source.starts_with(source))) {
            // Classic puts FMOD on the last row, exactly where the native
            // FPS writer starts at column 40. Recover this authored record
            // too; otherwise its clipped suffix rejects all four footer
            // rows and lets generic word translations consume its prefix.
            translation_source.assign(fmod_source);
            kind = 3;
        }
        if (kind < 0) continue;
        if (!*classic && kind != 1 && kind != 2) continue;
        int suffix_x = -1;
        std::string suffix;
        if ((kind == 2 || kind == 3) && title_owned && fps_x >= 0) {
            const auto complete = trim_view(translation_source);
            const size_t suffix_start = static_cast<size_t>(fps_x) + fps_source.size();
            const size_t record_end = x + complete.size();
            // A short counter can finish before the old footer record does.
            // Own only a surviving suffix whose bytes prove that exact title
            // record, so no original letters remain beside the native FPS.
            if (suffix_start < record_end && record_end <= row.size() &&
                    row.compare(suffix_start, record_end - suffix_start,
                        complete.substr(suffix_start - x)) == 0) {
                suffix_x = static_cast<int>(suffix_start);
                suffix = row.substr(suffix_start, record_end - suffix_start);
            }
        }
        if (first[kind] < 0) first[kind] = y;
        footer.push_back({static_cast<int>(x), y, kind, source, translation_source,
            fps_x, fps_source, suffix_x, suffix});
    }
    if (!(first[1] >= 0 && first[1] < first[2])) return;
    if (*classic && !(first[0] >= 0 && first[0] < first[1] &&
            first[2] < first[3])) return;
    for (const auto &row : footer) {
        if (!title_owned &&
                rows[row.y].compare(row.x, row.source.size(), row.source) != 0) continue;
        auto target = exact_literal_translation(row.translation_source);
        if (!target && row.kind == 2) {
            for (int index : candidate_template_rules(row.translation_source)) {
                const Rule &candidate = rules_[static_cast<size_t>(index)];
                if (!candidate.numeric_template || candidate.string_template) continue;
                size_t end = 0;
                std::vector<std::string> captures;
                if (match_template(candidate, row.translation_source, 0, &end, &captures) &&
                        end == row.translation_source.size()) {
                    target = fill_template(candidate, captures, &capture_translations_);
                    break;
                }
            }
        }
        Match match{row.x, row.y, static_cast<int>(row.source.size()),
            kMainMenuCreditsRule,
            target ? *target : native_text_to_utf8(row.translation_source), row.source};
        match.layout_x = row.x;
        match.layout_length = gps_->dimx - row.x;
        match.layout_left = true;
        if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        // The no-op FPS template must not join the copyright's half-font
        // group and suppress a native FPS half when the other half wins.
        if (row.fps_x >= 0 && rows[row.y].compare(row.fps_x,
                row.fps_source.size(), row.fps_source) == 0)
            std::fill_n(rows[row.y].begin() + row.fps_x, row.fps_source.size(), ' ');
        if (row.suffix_x >= 0) {
            if (only_y < 0 || only_y == row.y)
                matches.push_back({row.suffix_x, row.y,
                    static_cast<int>(row.suffix.size()), kMainMenuCreditsRule,
                    {}, row.suffix});
            std::fill_n(rows[row.y].begin() + row.suffix_x, row.suffix.size(), ' ');
        }
    }
}

void Overlay::layout_main_menu_credits_rows() {
    if (!gps_ || gps_->tile_pixel_y <= 0) return;
    Match *production = nullptr, *version = nullptr, *copyright = nullptr, *fmod = nullptr;
    const auto baseline = [](const Match &match) {
        return match.native_split_text ? match.native_split_top_y
            : match.layout_y >= 0 ? match.layout_y : match.y;
    };
    const auto pixel_offset = [this](const Match &match) {
        return match.native_split_text ? gps_->tile_pixel_y / 2 : match.layout_pixel_y;
    };
    for (Match &match : prepared_matches_) {
        if (match.rule != kMainMenuCreditsRule || match.native_split_duplicate ||
                match.target.empty()) continue;
        Match **record = match.source == "A Bay 12 Games Production" ? &production
            : match.source.starts_with("v") ? &version
            : match.source.starts_with("Copyright (C) ") ? &copyright
            : match.source.starts_with("Dwarf Fortress uses FMOD") ? &fmod : nullptr;
        if (record && (!*record || baseline(match) < baseline(**record))) *record = &match;
    }
    if (!version || !copyright) return;
    const Match &first = production ? *production : *version;
    const Match &second = production ? *version : *copyright;
    const Match &last = fmod ? *fmod : *copyright;
    const int advance = (baseline(second) - baseline(first)) * gps_->tile_pixel_y +
        pixel_offset(second) - pixel_offset(first);
    if (advance <= 0) return;
    // Keep source ownership at the old coordinates. Only the translated
    // baselines move, leaving the former bottom line for the credit.
    Match credit{last.x, last.y, 0, kMainMenuCreditsRule,
        "Byayoi同人社区汉化~ 版本 " + translation_binary_version(), {}};
    credit.layout_x = first.x;
    credit.layout_y = baseline(last);
    credit.layout_pixel_y = pixel_offset(last);
    credit.layout_length = gps_->dimx - credit.layout_x;
    // The bottom line retains FPS. Its live position bounds both translated
    // credit ink and the backing strip, including asymmetric font halves.
    const int last_y = baseline(last);
    for (int y = last_y; y <= std::min(gps_->dimy - 1,
            last_y + (last.native_split_text ? 1 : 0)); ++y) {
        std::string row(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) row[x] = static_cast<char>(cell[0]);
        }
        const auto fps = native_fps_counter_span(row);
        if (!fps || fps->first <= static_cast<size_t>(credit.layout_x)) continue;
        const int right = static_cast<int>(fps->first);
        credit.layout_length = std::min(credit.layout_length, right - credit.layout_x);
        credit.layout_clip_right = credit.layout_x + credit.layout_length;
    }
    credit.layout_left = true;
    credit.layout_fixed_baseline = true;
    const SDL_Rect viewport{0, 0, gps_->screen_pixel_x, gps_->screen_pixel_y};
    credit.layout_native_clip = viewport;
    credit.layout_reflowed_paragraph = true;
    for (Match &match : prepared_matches_) {
        if (match.rule != kMainMenuCreditsRule || match.native_split_duplicate) continue;
        match.layout_y = baseline(match);
        match.layout_pixel_y = pixel_offset(match) - advance;
        match.layout_fixed_baseline = true;
        // A source writer's old one-row clip must not cut off the moved text.
        match.layout_native_clip = viewport;
        match.layout_reflowed_paragraph = true;
    }
    prepared_matches_.push_back(std::move(credit));
}

void Overlay::note_main_menu_developer_copy(SDL_Renderer *renderer,
        SDL_Texture *texture, const SDL_Rect &dest) {
    if (!renderer || !texture || !gps_) return;
    // DEVELOPER, DEVELOPER_SMALL and DEVELOPER_TINY are live cached_texturest
    // entries. Both native ABIs store the texture pointer at 8 and variant at 16.
    // Native display promotes these renderer-owned entries in the real header;
    // the pinned grid snapshot can still contain their preceding SDL_Surface.
    const auto *texture_owner = native_graphics_owner();
    if (!texture_owner) return;
    for (int slot : {7, 8, 9}) {
#ifdef _WIN32
        const auto *cached = static_cast<const unsigned char *>(native_graphics_member_address(
            texture_owner, offsetof(graphicst, tex) + size_t(slot) * sizeof(texture_owner->tex[0]),
            sizeof(texture_owner->tex[0])));
        if (!cached) continue;
#else
        const auto *cached = reinterpret_cast<const unsigned char *>(&texture_owner->tex[slot]);
#endif
        SDL_Texture *developer = nullptr;
        std::memcpy(&developer, cached + 8, sizeof(developer));
        if (cached[16] != 0 || developer != texture) continue;
        main_menu_developer_rect_ = dest;
        main_menu_developer_renderer_ = renderer;
        main_menu_developer_target_ = SDL_GetRenderTarget(renderer);
        main_menu_developer_epoch_ = draw_epoch_;
        break;
    }
}

void Overlay::draw_main_menu_branding(SDL_Renderer *renderer) {
    const auto classic = native_ui_classic();
    if (!gps_ || !classic ||
            !std::any_of(prepared_matches_.begin(), prepared_matches_.end(), [](const Match &match) {
                return match.rule == kMainMenuCreditsRule &&
                    match.source.starts_with("Copyright (C) ");
            })) return;
    Uint8 old_r = 0, old_g = 0, old_b = 0, old_a = 0;
    SDL_BlendMode old_blend = SDL_BLENDMODE_NONE;
    SDL_GetRenderDrawColor(renderer, &old_r, &old_g, &old_b, &old_a);
    SDL_GetRenderDrawBlendMode(renderer, &old_blend);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - tile_w * gps_->dimx) / 2;
    const int origin_y = (gps_->screen_pixel_y - tile_h * gps_->dimy) / 2;
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    // Late recognition or a mode switch can leave copied native glyphs.
    // Clear each physical span, including half-font duplicates, separately:
    // FPS can overwrite different lengths on the two copyright halves.
    for (const Match &match : prepared_matches_) {
        if (match.rule != kMainMenuCreditsRule || match.length <= 0) continue;
        const SDL_Rect source{origin_x + match.x * tile_w,
            origin_y + match.y * tile_h, match.length * tile_w, tile_h};
        SDL_RenderFillRect(renderer, &source);
    }
    // Keep each relocated footer line readable over the illustrated background
    // and remove any earlier translated ink before this frame's text is drawn.
    for (const Match &match : prepared_matches_) {
        if (match.rule != kMainMenuCreditsRule || match.native_split_duplicate ||
                match.target.empty()) continue;
        auto *glyph = get_glyph_texture(renderer, match.target, gps_->screen_pixel_x);
        if (!glyph) continue;
        SDL_Rect line{origin_x + match.layout_x * tile_w,
            origin_y + match.layout_y * tile_h + match.layout_pixel_y,
            glyph->width + 2 * config_.horizontal_padding, tile_h};
        if (match.layout_clip_right >= 0)
            line.w = std::min(line.w,
                std::max(0, match.layout_clip_right - match.layout_x) * tile_w);
        SDL_RenderFillRect(renderer, &line);
    }
    if (!*classic && main_menu_developer_epoch_ == composite_read_epoch_ &&
            main_menu_developer_renderer_ == renderer &&
            main_menu_developer_target_ == SDL_GetRenderTarget(renderer)) {
        const SDL_Rect &logo = main_menu_developer_rect_;
        // Bay12's label occupies the bottom 32 of its 144-pixel small logo.
        // Use an integer cell scale and align both badges along that bottom edge.
        const int label_height = std::max(1, static_cast<int>(std::lround(logo.h * 32.0 / 144)));
        const int art_height = logo.h - label_height;
        const int cell_size = std::max(1, static_cast<int>(std::lround(
            static_cast<double>(art_height) / byayoi_sprite::height)));
        const int width = byayoi_sprite::width * cell_size;
        const int left = logo.x + logo.w + std::max(1, label_height / 2);
        const int top = logo.y + art_height - byayoi_sprite::height * cell_size;
        const int sprite_x = left + (logo.w - width) / 2;
        // The opaque sprite runs are disjoint. Build their unscaled geometry
        // once, then submit one batch per palette colour at the native cell
        // scale instead of changing draw colour and queuing every pixel.
        static const auto sprite_runs = [] {
            std::array<std::vector<SDL_Rect>, std::size(byayoi_sprite::palette)> runs;
            for (int y = 0; y < byayoi_sprite::height; ++y) {
                for (int x = 0; x < byayoi_sprite::width;) {
                    const auto index = byayoi_sprite::pixels[y][x];
                    const int start = x++;
                    while (x < byayoi_sprite::width &&
                        byayoi_sprite::pixels[y][x] == index) ++x;
                    if (byayoi_sprite::palette[index].a)
                        runs[index].push_back({start, y, x - start, 1});
                }
            }
            return runs;
        }();
        std::array<SDL_Rect, byayoi_sprite::width * byayoi_sprite::height> placed_runs;
        for (size_t index = 0; index < sprite_runs.size(); ++index) {
            const auto &runs = sprite_runs[index];
            if (runs.empty()) continue;
            for (size_t run = 0; run < runs.size(); ++run) {
                const auto &source = runs[run];
                placed_runs[run] = {sprite_x + source.x * cell_size,
                    top + source.y * cell_size, source.w * cell_size,
                    source.h * cell_size};
            }
            const auto &color = byayoi_sprite::palette[index];
            SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
            SDL_RenderFillRects(renderer, placed_runs.data(), static_cast<int>(runs.size()));
        }
        const SDL_Rect label{left, logo.y + art_height, logo.w, label_height};
        SDL_SetRenderDrawColor(renderer, 0, 174, 220, 255);
        SDL_RenderFillRect(renderer, &label);
        if (auto *glyph = get_glyph_texture(
                renderer, "byayoi同人社区", gps_->screen_pixel_x);
            glyph && glyph->width > 0 && glyph->height > 0) {
            const int padding = std::max(1, label_height / 8);
            const double scale = std::min(
                static_cast<double>(std::max(1, label.w - padding * 2)) / glyph->width,
                static_cast<double>(std::max(1, label.h - padding * 2)) / glyph->height);
            const int text_x = label.x + (label.w - static_cast<int>(std::lround(glyph->width * scale))) / 2;
            const int text_y = label.y + (label.h - static_cast<int>(std::lround(glyph->height * scale))) / 2;
            for (const auto &tile : glyph->tiles) {
                SDL_SetTextureColorMod(tile.texture, 255, 255, 255);
                SDL_SetTextureAlphaMod(tile.texture, 255);
                const int x = static_cast<int>(std::lround(tile.bounds.x * scale));
                const int y = static_cast<int>(std::lround(tile.bounds.y * scale));
                const SDL_Rect dst{text_x + x, text_y + y,
                    std::max(1, static_cast<int>(std::lround((tile.bounds.x + tile.bounds.w) * scale)) - x),
                    std::max(1, static_cast<int>(std::lround((tile.bounds.y + tile.bounds.h) * scale)) - y)};
                SDL_RenderCopy(renderer, tile.texture, nullptr, &dst);
            }
        }
    }
    SDL_SetRenderDrawColor(renderer, old_r, old_g, old_b, old_a);
    SDL_SetRenderDrawBlendMode(renderer, old_blend);
}
