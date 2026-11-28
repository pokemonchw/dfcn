// Matching and layout share the same Places scope. Only these list records
// may write a second status line over the classic picture row's lower edge.
std::optional<SDL_Rect> Overlay::capture_fortress_places_panel(
        const std::vector<std::string> &context, int &tabs_y) const {
    tabs_y = -1;
    if (!gps_ || context.size() != static_cast<size_t>(gps_->dimy)) return std::nullopt;
    const NativePanelBorders borders(*gps_);
    std::optional<SDL_Rect> panel;
    for (int y = 0; y < gps_->dimy && !panel; ++y) {
        const auto zones = context[y].find("Zones");
        const auto locations = context[y].find("Locations");
        const auto stockpiles = context[y].find("Stockpiles");
        const auto workshops = context[y].find("Workshops");
        if (!(zones < locations && locations < stockpiles && stockpiles < workshops) ||
            workshops == std::string::npos) continue;
        panel = native_panel_interior(borders, *gps_, static_cast<int>(zones),
            static_cast<int>(workshops + std::string_view("Workshops").size()), y);
        if (!panel) {
            // A toolbar hover can cover the list's left edge without covering
            // a single name. Losing the panel here sends authored captions to
            // the CJK-run path, splitting digits and clearing black input
            // rectangles over the row skin. Share the current closed tooltip
            // frame; never infer hidden edges from old geometry. The ordinary
            // intact panel needs no extra whole-screen tooltip scan.
            capture_toolbar_tooltip();
            if (const auto occluding_frame = native_toolbar_tooltip_frame())
                panel = native_panel_interior(borders, *gps_, static_cast<int>(zones),
                    static_cast<int>(workshops + std::string_view("Workshops").size()), y,
                    occluding_frame);
        }
        if (panel) tabs_y = y;
    }
    return panel;
}

bool Overlay::fortress_farm_plots_selected(const std::vector<std::string> &context,
        const SDL_Rect &panel, int tabs_y) const {
    if (!gps_ || tabs_y < 0 || tabs_y >= gps_->dimy ||
            context.size() != static_cast<size_t>(gps_->dimy)) return false;
    // Every Places page shows this band. Only the selected native tab, not
    // a crop word or an optional count, establishes the farm list.
    int selected = -1, inactive = -1;
    size_t cursor = static_cast<size_t>(panel.x);
    for (const std::string_view caption : {
            "Zones", "Locations", "Stockpiles", "Workshops", "Farm plots", "Siege engines"}) {
        const auto at = context[tabs_y].find(caption, cursor);
        if (at == std::string::npos ||
                at + caption.size() > static_cast<size_t>(panel.x + panel.w)) return false;
        bool top = false;
        const auto *cell = cell_at(static_cast<int>(at), tabs_y, &top);
        if (!cell) return false;
        const int color = (cell[1] << 16) | (cell[2] << 8) | cell[3];
        if (caption == "Farm plots") selected = color;
        else if (inactive < 0) inactive = color;
        else if (inactive != color) return false;
        cursor = at + caption.size();
    }
    return selected >= 0 && inactive >= 0 && selected != inactive;
}

// Places' picture rows contain user-authored names, not text-entry widgets.
// Claim complete names and siege job fields before generic matching separates
// Chinese from ASCII suffixes or consumes another column as a name.
// The ordinary picture-button layout remains the sole owner of placement.
void Overlay::append_fortress_place_names(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    auto context = rows;
    // A name claimed by the farm reader still establishes this record's
    // first column. Discover roles from the native row, so a remaining
    // status cannot become an authored name after that column is blanked.
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            context[y][x] = ch ? static_cast<char>(ch) : ' ';
        }
    int tabs_y = -1;
    const auto panel = capture_fortress_places_panel(context, tabs_y);
    if (!panel || (only_y >= 0 && (only_y <= tabs_y ||
            only_y >= panel->y + panel->h))) return;
    const auto color_at = [&](int x, int y) {
        bool top = false;
        const auto *cell = cell_at(x, y, &top);
        return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
    };
    const bool farm_plots = fortress_farm_plots_selected(context, *panel, tabs_y);
    int siege_heading_y = -1;
    for (int y = tabs_y + 1; y < panel->y + panel->h; ++y) {
        for (const auto &field : split_text_fields(context[y])) {
            if (field.start >= panel->x && field.end <= panel->x + panel->w &&
                field.text == "All siege engines") siege_heading_y = y;
        }
        if (siege_heading_y >= 0) break;
    }
    auto drawn = captured_native_drawn_text_rows();
    const auto top_drawn = captured_native_drawn_text_rows(true);
    drawn.insert(drawn.end(), top_drawn.begin(), top_drawn.end());
    const auto clipped = captured_clipped_captions();
    // Render an already resolved owned field through its existing UI rule.
    // Its name has native provenance and must not be reinterpreted as text.
    const auto format_owned_caption = [&](std::string_view key, const std::string &value)
            -> std::optional<std::string> {
        const auto found = history_semantic_templates_.find(std::string(key));
        if (found == history_semantic_templates_.end()) return std::nullopt;
        const auto &rule = rules_[static_cast<size_t>(found->second)];
        if (rule.template_kinds.size() != 1) return std::nullopt;
        const std::vector<std::optional<std::string>> resolved{value};
        bool intact = false;
        auto target = fill_template(rule, {value}, nullptr, &intact, &resolved);
        return intact && !target.empty() ? std::optional<std::string>(std::move(target))
            : std::nullopt;
    };
    // The zone's associated location has a separate name and description.
    // 39d4e0 draws the complete description after 39d484 shortens it. Its
    // profession and religious subject belong to that field, never to the
    // zone's owner or to a generated location-name parser.
    const auto location_description = [&](std::string_view source)
            -> std::optional<std::string> {
        for (const std::string_view suffix : {" grand guildhall", " guildhall", " meeting place"}) {
            if (!source.ends_with(suffix) || source.size() <= suffix.size()) continue;
            const std::string profession_source(source.substr(0, source.size() - suffix.size()));
            auto profession = translate_unit_profession(profession_source, true);
            if (!profession) profession = exact_literal_translation(profession_source);
            if (!profession) return std::nullopt;
            return format_owned_caption(suffix == " meeting place" ? "{s} meeting place"
                : "Zone location: {s}" + std::string(suffix), *profession);
        }
        for (const std::string_view prefix : {"Temple complex of ", "Temple of ",
                "Shrine of ", "Shrine to ", " of "}) {
            if (!source.starts_with(prefix) || source.size() <= prefix.size()) continue;
            const std::string name_source(source.substr(prefix.size()));
            auto name = translate_religion_reference(name_source);
            if (!name) name = translate_legends_name(name_source, true);
            if (!name) name = translate_legends_name(name_source, false);
            if (!name) name = translate_procedural_fragment(name_source, false, false, {},
                ProceduralFragmentContext::generated_name);
            if (!name) return std::nullopt;
            // An out-of-range temple tier can still append its religion or
            // deity after an empty grade. Retain that native default too.
            return format_owned_caption("Zone location: " +
                std::string(prefix.starts_with(' ') ? prefix.substr(1) : prefix) + "{e}", *name);
        }
        if (auto type = exact_literal_translation(source)) return type;
        // A guild tier outside 0..2 leaves only its profession; unknown
        // location types leave an empty description and draw no caption.
        return translate_unit_profession(source, true);
    };
    // Zones emits type, associated object and occupancy as independent addst
    // fields. Keep each native object/name intact before generic matching.
    for (const auto &draw : drawn) {
        if (!draw.fortress_zone_caption || draw.source.empty() ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.x < panel->x || draw.x >= panel->x + panel->w ||
                draw.y <= tabs_y || draw.y >= panel->y + panel->h ||
                (only_y >= 0 && only_y != draw.y) ||
                draw.source.size() > static_cast<size_t>(panel->x + panel->w - draw.x) ||
                context[draw.y].compare(draw.x, draw.source.size(), draw.source) != 0)
            continue;
        bool visible = true;
        for (int offset = 0; offset < static_cast<int>(draw.source.size()); ++offset) {
            if (draw.source[offset] == ' ') continue;
            bool top = false;
            cell_at(draw.x + offset, draw.y, &top);
            if (top != draw.top_layer) { visible = false; break; }
        }
        if (!visible) continue;
        const auto &caption = *draw.fortress_zone_caption;
        using Kind = NativeFortressZoneCaption::Kind;
        const bool lower_line = caption.kind == Kind::Location ||
            caption.kind == Kind::LocationDescription || caption.kind == Kind::Patients ||
            caption.kind == Kind::Unit ||
            caption.kind == Kind::Squad || caption.kind == Kind::SquadCount ||
            caption.kind == Kind::Present;
        // Quantity fields move down in a column narrower than forty cells;
        // available/present then occupy a third baseline below the picture.
        const int line_offset = caption.line_offset.value_or(lower_line ? 1 : 0);
        const auto button = native_picture_caption_rect(
            *gps_, draw.x, draw.y - line_offset, false,
            nullptr, true, nullptr, true);
        if (!button || button->x < panel->x || button->y <= tabs_y ||
                button->x + button->w > panel->x + panel->w ||
                button->y + button->h > panel->y + panel->h) continue;
        int right = button->x + button->w;
        if (draw.draw_clip) right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
        for (int x = draw.x + static_cast<int>(draw.source.size()); x < right; ++x)
            for (int row = button->y; row < button->y + button->h; ++row)
                if (native_foreground_picture_at(*gps_, x, row)) { right = x; break; }
        for (const auto &other : drawn)
            if (other.fortress_zone_caption && other.top_layer == draw.top_layer &&
                    other.y == draw.y && other.x > draw.x && other.x < right &&
                    !other.source.empty() && other.source.size() <=
                        static_cast<size_t>(gps_->dimx - other.x) &&
                    context[other.y].compare(other.x, other.source.size(), other.source) == 0)
                right = other.x;
        const int length = static_cast<int>(draw.source.size());
        if (right < draw.x + length) continue;
        const std::string complete = draw.complete_source.empty()
            ? draw.source : draw.complete_source;
        if (complete.empty() || complete.find_first_of("\r\n") != std::string::npos) continue;
        std::optional<std::string> translated;
        switch (caption.kind) {
        case Kind::Type:
            if (!caption.authored) {
                for (const std::string_view canonical : {
                        "Meeting Area", "Bedroom", "Dining Hall", "Pen/Pasture", "Pit/Pond",
                        "Water Source", "Dungeon", "Fishing", "Sand", "Office", "Dormitory",
                        "Barracks", "Archery Range", "Garbage Dump", "Animal Training", "Tomb",
                        "Gather Fruit", "Clay"}) {
                    if (complete.size() == canonical.size() &&
                            template_literal_at(complete, 0, canonical, true)) {
                        translated = exact_literal_translation("Zone type: " + std::string(canonical));
                        break;
                    }
                }
            }
            break;
        case Kind::Location:
        case Kind::LocationName:
            if (caption.location_name && caption.location_name->has_name)
                translated = translate_history_name(*caption.location_name);
            if (!translated && complete == "Unnamed location")
                translated = exact_literal_translation(complete);
            if (!translated) translated = contains_cjk_utf8(complete)
                ? std::optional<std::string>(native_text_to_utf8(complete))
                : translate_procedural_fragment(complete, false, false, {},
                    ProceduralFragmentContext::generated_name);
            if (!translated) translated = exact_literal_translation(complete);
            break;
        case Kind::LocationDescription:
            translated = location_description(complete);
            break;
        case Kind::Fixed:
            translated = exact_literal_translation(complete);
            break;
        case Kind::Unit:
            if (draw.unit_identity_target) translated = draw.unit_identity_target;
            else if (caption.unit_identity)
                translated = translate_native_unit_identity(*caption.unit_identity);
            else translated = translate_unit_identity(complete, true);
            break;
        case Kind::Squad: {
            std::optional<std::string> name;
            if (caption.squad_alias) name = native_text_to_utf8(*caption.squad_alias);
            else if (caption.squad_name) name = translate_generated_squad_name(caption.squad_name.get());
            if (name) translated = format_owned_caption("{e} assigned", *name);
            break;
        }
        case Kind::Assigned:
        case Kind::Present:
        case Kind::Imprisoned:
        case Kind::SquadCount:
        case Kind::Occupancy:
        case Kind::Patients: {
            const std::string suffix = caption.kind == Kind::Occupancy ? "% occupied"
                : caption.kind == Kind::Assigned ? " assigned"
                : caption.kind == Kind::Imprisoned ? " imprisoned"
                : caption.kind == Kind::SquadCount ? " squads assigned"
                : caption.kind == Kind::Patients ? (complete.ends_with(" patients")
                    ? " patients" : " patient")
                : complete.ends_with(" available") ? " available" : " present";
            if (!complete.ends_with(suffix)) break;
            const std::string digits = complete.substr(0, complete.size() - suffix.size());
            if (digits.empty() || !std::all_of(digits.begin(), digits.end(),
                    [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) break;
            const auto found = history_semantic_templates_.find(
                (caption.kind == Kind::Patients ? "Zone location: {d}" : "{d}") + suffix);
            if (found == history_semantic_templates_.end()) break;
            bool intact = false;
            auto value = translate_template_captures(rules_[static_cast<size_t>(found->second)],
                {digits}, &intact);
            if (intact && !value.empty()) translated = std::move(value);
            break;
        }
        }
        const std::string target = translated ? *translated : native_text_to_utf8(complete);
        if (target.empty() || target.find("[C:") != std::string::npos ||
                target.find_first_of("\r\n") != std::string::npos) continue;
        if (rows[draw.y].compare(draw.x, length, draw.source) == 0) {
            Match match{draw.x, draw.y, length, kFortressLocationListRule, target, draw.source};
            match.native_picture_caption_box = SDL_Rect{draw.x, draw.y, right - draw.x, 1};
            match.native_picture_caption_source = complete;
            match.layout_x = draw.x;
            match.layout_y = draw.y;
            match.layout_length = right - draw.x;
            match.layout_clip_right = right;
            // This renderer uses ordinary addst once per field. Its lower
            // line can retain old font-half flags from the picture skin.
            match.layout_fixed_baseline = true;
            match.layout_left = true;
            if (draw.foreground_rgb >= 0) match.layout_foreground_rgb = draw.foreground_rgb;
            matches.push_back(std::move(match));
            std::fill_n(rows[draw.y].begin() + draw.x, length, ' ');
        } else if (raw_layer) {
            for (int offset = 0; offset < length;) {
                while (offset < length && rows[draw.y][draw.x + offset] != draw.source[offset]) ++offset;
                const int start = offset;
                while (offset < length && rows[draw.y][draw.x + offset] == draw.source[offset]) ++offset;
                if (offset == start) continue;
                matches.push_back({draw.x + start, draw.y, offset - start,
                    kFortressLocationListRule, {}, draw.source.substr(start, offset - start)});
                std::fill_n(rows[draw.y].begin() + draw.x + start, offset - start, ' ');
            }
        }
    }
    const int first_y = only_y >= 0 ? only_y : tabs_y + 1;
    const int last_y = only_y >= 0 ? only_y + 1 : panel->y + panel->h;
    for (int y = first_y; y < last_y; ++y) {
        const auto fields = split_text_fields(context[y]);
        if (siege_heading_y >= 0 && y > siege_heading_y) {
            // Ammunition and job status share the picture's lower row. With
            // only one padding space, "100 bolts Operator assigned" otherwise
            // matches the squad-name template "{e} assigned" as one field.
            // Own the job separately, retaining its native column and the
            // existing ammunition word/count rendering.
            for (const auto &field : fields) {
                if (field.start < panel->x || field.end > panel->x + panel->w) continue;
                const auto button = native_picture_caption_rect(
                    *gps_, field.start, y - 1, false, nullptr, true, nullptr, true);
                if (!button || y != button->y + button->h - 1 ||
                    button->x < panel->x || button->y <= siege_heading_y ||
                    button->x + button->w > panel->x + panel->w ||
                    button->y + button->h > panel->y + panel->h ||
                    field.start < button->x ||
                    std::string_view(context[y]).substr(button->x,
                        field.start - button->x).find_first_not_of(' ') !=
                        std::string_view::npos) continue;
                int right = button->x + button->w;
                for (int x = field.end; x < right; ++x)
                    for (int row = button->y; row < button->y + button->h; ++row)
                        if (native_foreground_picture_at(*gps_, x, row)) {
                            right = x;
                            break;
                        }
                if (field.start >= right) continue;
                const auto status = std::string_view(context[y]).substr(
                    field.start, right - field.start);
                size_t ammo_end = 0;
                if (status.starts_with("Unloaded")) ammo_end = 8;
                else if (status.starts_with("Loaded")) ammo_end = 6;
                else {
                    while (ammo_end < status.size() && status[ammo_end] >= '0' &&
                            status[ammo_end] <= '9') ++ammo_end;
                    if (!ammo_end || !status.substr(ammo_end).starts_with(" bolts")) continue;
                    ammo_end += std::string_view(" bolts").size();
                }
                if (ammo_end >= status.size() || status[ammo_end] != ' ') continue;
                const auto job = trim_view(status.substr(ammo_end));
                if (job != "Operator assigned" && job != "Operator present" &&
                    job != "No operator" && job != "Inactive load task" &&
                    job != "Loading") continue;
                const auto target = exact_literal_translation(job);
                if (!target) continue;
                const int x = field.start + static_cast<int>(job.data() - status.data());
                const int length = static_cast<int>(job.size());
                const std::string source(job);
                if (rows[y].compare(x, length, source) == 0) {
                    // This rule also gives the picture layout an explicit
                    // field boundary, even when native columns touch.
                    Match match{x, y, length, kFortressPlaceNameRule, *target, source};
                    match.layout_x = x;
                    match.layout_length = right - x;
                    match.layout_clip_right = right;
                    match.layout_left = true;
                    matches.push_back(std::move(match));
                    std::fill_n(rows[y].begin() + x, length, ' ');
                } else if (raw_layer) {
                    for (int offset = 0; offset < length;) {
                        while (offset < length && rows[y][x + offset] != source[offset]) ++offset;
                        const int start = offset;
                        while (offset < length && rows[y][x + offset] == source[offset]) ++offset;
                        if (offset == start) continue;
                        matches.push_back({x + start, y, offset - start,
                            kFortressPlaceNameRule, {}, source.substr(start, offset - start)});
                        std::fill_n(rows[y].begin() + x + start, offset - start, ' ');
                    }
                }
            }
        }
        for (const auto &field : fields) {
            if (field.start < panel->x || field.end > panel->x + panel->w) continue;
            // The joined picture strip has no separate rectangle left cap.
            // Its shared reader also recognizes UTF-8 within classic cells
            // and the Present/owner line that replaces part of the lower edge.
            const auto button = native_picture_caption_rect(
                *gps_, field.start, y, false, nullptr, true, nullptr, true);
            if (!button || button->x < panel->x || button->y <= tabs_y ||
                button->y + button->h > panel->y + panel->h ||
                button->x + button->w > panel->x + panel->w ||
                field.start < button->x || field.end > button->x + button->w ||
                std::string_view(context[y]).substr(button->x,
                    field.start - button->x).find_first_not_of(' ') !=
                    std::string_view::npos) continue;
            int right = button->x + button->w;
            // A bound authored farm draw also establishes the role when a
            // hovered tab has temporarily changed another caption's colour.
            const bool farm_name = y == button->y + 1 && (farm_plots ||
                std::any_of(drawn.begin(), drawn.end(), [&](const auto &draw) {
                    return draw.info_title_authored_bytes &&
                        draw.info_title_kind == NativeInfoTitleKind::None &&
                        draw.x == field.start && draw.y == y && !draw.source.empty() &&
                        draw.source.size() <= static_cast<size_t>(right - field.start) &&
                        context[y].compare(field.start, draw.source.size(), draw.source) == 0;
                }));
            // The lower line is the crop, even when its spelling is also a
            // player's chosen name elsewhere in the list.
            if (farm_plots && !farm_name) continue;
            bool siege_name = false;
            const bool siege_row = !farm_plots && siege_heading_y >= 0 && y > siege_heading_y &&
                y + 1 < panel->y + panel->h;
            if (farm_name || siege_row) {
                // Row actions retain the picture strip's lower fill. Their
                // foreground artwork bounds the name before recenter/inspect.
                for (int x = field.end; x < right; ++x) {
                    for (int row = button->y; row < button->y + button->h; ++row) {
                        if (native_foreground_picture_at(*gps_, x, row)) {
                            right = x;
                            break;
                        }
                    }
                }
            }
            if (siege_row) {
                // The second line owns a loading state or ammunition count,
                // never another name. It also proves the first line's role.
                const auto status = normalize_utterance(std::string_view(context[y + 1])
                    .substr(field.start, right - field.start));
                siege_name = status == "Loaded" || status == "Unloaded";
                constexpr std::string_view bolts = " bolts";
                if (!siege_name && status.ends_with(bolts)) {
                    const auto count = std::string_view(status).substr(0,
                        status.size() - bolts.size());
                    siege_name = !count.empty() && std::all_of(count.begin(), count.end(),
                        [](unsigned char ch) { return ch >= '0' && ch <= '9'; });
                }
            }
            if (farm_name) {
                // Planted counts and Leave fallow share an independent
                // coloured status column. Neither belongs to the name draw;
                // similarly worded text inside a custom name still does.
                constexpr std::string_view planted_suffix = " planted";
                for (const auto &status : fields) {
                    if (status.start <= field.end || status.end > right ||
                        color_at(status.start, y) == color_at(field.start, y)) continue;
                    if (status.text != "Leave fallow") {
                        if (!status.text.ends_with(planted_suffix)) continue;
                        const auto count = std::string_view(status.text).substr(0,
                            status.text.size() - planted_suffix.size());
                        if (count.empty() || !std::all_of(count.begin(), count.end(),
                                [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) continue;
                    }
                    right = status.start;
                    break;
                }
            }
            bool stockpile_name = false;
            // Stockpile records have an independent occupancy column in the
            // same picture strip. It bounds the whole editable name, including
            // internal spaces, without assigning stockpile semantics to zones
            // or generated location names on the other Places tabs.
            constexpr std::string_view occupancy_suffix = "% occupied";
            for (const auto &status : fields) {
                if (farm_name || status.start <= field.end || status.end > right ||
                    !status.text.ends_with(occupancy_suffix)) continue;
                const auto percent = std::string_view(status.text).substr(0,
                    status.text.size() - occupancy_suffix.size());
                if (percent.empty() || percent.size() > 3 ||
                    !std::all_of(percent.begin(), percent.end(),
                        [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) continue;
                right = status.start;
                stockpile_name = true;
                break;
            }
            std::string source = field.text;
            if (stockpile_name || siege_name || farm_name)
                source = std::string(trim_view(std::string_view(context[y]).substr(
                    field.start, right - field.start)));
            std::string complete;
            bool authored_name = true;
            // The actual native draw owns spaces inside a name. Two spaces
            // are not a column break when they came from the same caption.
            for (const auto &draw : drawn) {
                if (draw.x == field.start && draw.y == y && !draw.source.empty() &&
                    (!(stockpile_name || siege_name || farm_name) || draw.source.size() >= source.size()) &&
                    draw.source.size() <= static_cast<size_t>(right - field.start) &&
                    context[y].compare(field.start, draw.source.size(), draw.source) == 0) {
                    source = draw.source;
                    complete = draw.complete_source;
                    authored_name = draw.info_title_authored_bytes;
                    break;
                }
            }
            if (complete.empty()) complete = source;
            for (const auto &capture : clipped) {
                if (capture.x == field.start && capture.y == y &&
                    !capture.visible.empty() && capture.visible.size() <=
                        static_cast<size_t>(right - field.start) &&
                    context[y].compare(field.start, capture.visible.size(), capture.visible) == 0) {
                    source = capture.visible;
                    complete = capture.complete;
                    break;
                }
            }
            if (complete.empty() || complete.find_first_of("\r\n") != std::string::npos)
                continue;
            std::string target;
            if (contains_cjk_utf8(complete)) {
                std::vector<uint32_t> codepoints;
                // Authored UTF-8 must stay intact even if native byte clipping
                // cut the visible name inside a character. Only a captured full
                // source can recover that tail; never reinterpret it as CP437.
                if (!decode_utf8(complete, codepoints) || codepoints.empty()) continue;
                target = complete;
            } else if (farm_name) {
                // The native building field distinguishes an unnamed plot
                // from a player who deliberately named it "Farm Plot".
                const auto translated = !authored_name &&
                    (complete == "Farm Plot" || complete == "Farm plot")
                    ? exact_literal_translation("Farm plot") : std::nullopt;
                target = translated ? *translated : native_text_to_utf8(complete);
            } else if (siege_name) {
                // Only unnamed engine types are dictionary labels. Authored
                // names (even ordinary English words) retain their spelling.
                const auto name = trim_view(complete);
                const bool default_type = name == "Catapult" || name == "Ballista" ||
                    name == "Bolt Thrower";
                const auto translated = default_type ? exact_literal_translation(name)
                    : std::nullopt;
                target = translated ? *translated : native_text_to_utf8(complete);
            } else if (stockpile_name) {
                const std::string name = normalize_utterance(complete);
                auto translated = exact_literal_translation("Stockpile name: " + lower(name));
                if (!translated) translated = exact_literal_translation(name);
                // Keep default category names and IDs on their existing typed
                // templates. Arbitrary authored names must never fall through
                // to generic word composition or procedural transliteration.
                if (!translated) {
                    for (int index : candidate_template_rules(name)) {
                        const Rule &rule = rules_[static_cast<size_t>(index)];
                        if (rule.source != "Stockpile #{d}" &&
                            rule.source != "{s} Stockpile #{d}") continue;
                        size_t end = 0;
                        std::vector<std::string> captures;
                        if (!match_template(rule, name, 0, &end, &captures) ||
                            end != name.size()) continue;
                        bool intact = false;
                        auto value = translate_template_captures(rule, captures, &intact);
                        if (!intact || value.empty()) continue;
                        translated = std::move(value);
                        break;
                    }
                }
                target = translated ? *translated : native_text_to_utf8(complete);
            } else continue;
            const int x = field.start, length = static_cast<int>(source.size());
            if (rows[y].compare(x, length, source) != 0) {
                if (raw_layer) {
                    // The suppression pass can see only one physical half of
                    // the current caption. Own matching bytes on that layer;
                    // the composed pass draws the complete name once.
                    for (int offset = 0; offset < length;) {
                        while (offset < length && rows[y][x + offset] != source[offset]) ++offset;
                        const int start = offset;
                        while (offset < length && rows[y][x + offset] == source[offset]) ++offset;
                        if (offset == start) continue;
                        matches.push_back({x + start, y, offset - start,
                            kFortressPlaceNameRule, {}, source.substr(start, offset - start)});
                        std::fill_n(rows[y].begin() + x + start, offset - start, ' ');
                    }
                }
                continue;
            }
            Match match{x, y, length, kFortressPlaceNameRule, std::move(target), source};
            match.layout_left = true;
            if (stockpile_name || siege_name || farm_name) {
                match.layout_x = x;
                match.layout_length = right - x;
                match.layout_clip_right = right;
            }
            matches.push_back(std::move(match));
            std::fill_n(rows[y].begin() + x, length, ' ');
        }
    }
}

std::optional<SDL_Rect> Overlay::capture_fortress_zone_menu(
        const std::vector<std::string> &context, int &prompt_y) const {
    prompt_y = -1;
    if (!gps_ || context.size() != static_cast<size_t>(gps_->dimy)) return std::nullopt;
    constexpr std::string_view prompt = "Click an icon to add a new zone.";
    const NativePanelBorders borders(*gps_);
    for (int y = 1; y + 1 < gps_->dimy; ++y) {
        const auto start = context[y].find(prompt);
        if (start == std::string::npos) continue;
        const auto panel = native_panel_interior(borders, *gps_, static_cast<int>(start),
            static_cast<int>(start + prompt.size()), y);
        if (!panel) continue;
        prompt_y = y;
        return panel;
    }
    return std::nullopt;
}

// Matching and layout share the current complete main[167] pictures. A
// caption can extend beyond its nineteen-cell hit slot (Animal Training),
// so the next picture/panel edge owns source text, not the English width.
static std::map<int, std::vector<SDL_Rect>> fortress_zone_menu_columns(
        const graphicst &gps, const SDL_Rect &panel, int prompt_y) {
    std::map<int, std::vector<SDL_Rect>> columns;
    for (int y = prompt_y + 1; y + 3 <= panel.y + panel.h; ++y) {
        for (int x = panel.x; x + 4 <= panel.x + panel.w; ++x) {
            if (!native_main_button_at(gps, x, y + 1, 167, true)) continue;
            columns[x].push_back({x, y, 4, 3});
            x += 3;
        }
    }
    return columns;
}

// These short words name zone functions only inside native zone controls.
// Sand/Clay remain materials, Fishing remains a labour/activity, and Office
// remains a room-quality term everywhere else. Dictionary aliases own all
// Chinese; generic message/name matching must never split these captions.
void Overlay::append_fortress_zone_types(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    auto context = rows;
    if (raw_layer) {
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
    }
    static constexpr std::string_view captions[] = {
        "Meeting Area", "Bedroom", "Dining Hall", "Pen/Pasture", "Pit/Pond",
        "Water Source", "Dungeon", "Fishing", "Sand", "Office", "Dormitory",
        "Barracks", "Archery Range", "Garbage Dump", "Animal Training", "Tomb",
        "Gather Fruit", "Clay",
    };
    const auto append_caption = [&](int left, int source_right, int y, int right) {
        if (left < 0 || left >= source_right || source_right > gps_->dimx ||
            y < 0 || y >= gps_->dimy || (only_y >= 0 && only_y != y)) return;
        const std::string_view slot(context[y].data() + left, source_right - left);
        const auto caption = trim_view(slot);
        const auto canonical = std::find_if(std::begin(captions), std::end(captions),
            [&](std::string_view candidate) {
                return caption.size() == candidate.size() &&
                    template_literal_at(caption, 0, candidate, true);
            });
        if (canonical == std::end(captions)) return;
        const auto target = exact_literal_translation("Zone type: " + std::string(*canonical));
        if (!target || target->empty()) return;
        const int x = left + static_cast<int>(caption.data() - slot.data());
        const int length = static_cast<int>(caption.size());
        const std::string source(caption);
        if (rows[y].compare(x, length, source) == 0) {
            Match match{x, y, length, kFortressZoneTypeRule, *target, source};
            match.layout_x = left;
            match.layout_y = y;
            match.layout_length = right - left;
            match.layout_clip_right = right;
            match.layout_left = true;
            matches.push_back(std::move(match));
            std::fill_n(rows[y].begin() + x, length, ' ');
        } else if (raw_layer) {
            // Both passes recognize the same complete visible caption. A
            // partial native layer owns only equal physical bytes, never
            // hidden text belonging to another widget at that position.
            for (int offset = 0; offset < length;) {
                while (offset < length && rows[y][x + offset] != source[offset]) ++offset;
                const int start = offset;
                while (offset < length && rows[y][x + offset] == source[offset]) ++offset;
                if (offset == start) continue;
                matches.push_back({x + start, y, offset - start, kFortressZoneTypeRule,
                    {}, source.substr(start, offset - start)});
                std::fill_n(rows[y].begin() + x + start, offset - start, ' ');
            }
        }
    };

    int prompt_y = -1;
    if (const auto panel = capture_fortress_zone_menu(context, prompt_y)) {
        const auto columns = fortress_zone_menu_columns(*gps_, *panel, prompt_y);
        for (auto column = columns.begin(); column != columns.end(); ++column) {
            const auto next = std::next(column);
            const int left = column->first + 5;
            const int source_right = next == columns.end() ? panel->x + panel->w
                : std::min(panel->x + panel->w, next->first);
            const int right = std::min(source_right, column->first + 19);
            if (left >= right) continue;
            for (const SDL_Rect &picture : column->second)
                for (int y = picture.y; y < picture.y + picture.h; ++y)
                    append_caption(left, source_right, y, right);
        }
    }

    const NativePanelBorders borders(*gps_);
    for (int middle = 1; middle + 7 < gps_->dimy; ++middle) {
        if (only_y >= 0 && (only_y < middle || only_y > middle + 1)) continue;
        for (int controls = 0; controls + 12 <= gps_->dimx; ++controls) {
            if (!native_main_button_at(*gps_, controls, middle, 161) ||
                !(native_main_button_at(*gps_, controls + 4, middle, 164) ||
                  native_main_button_at(*gps_, controls + 4, middle, 165)) ||
                !native_main_button_at(*gps_, controls + 8, middle, 166)) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                SDL_Rect{controls, middle - 1, 12, 3});
            if (!panel || controls + 12 != panel->x + panel->w ||
                !native_main_button_at(*gps_, panel->x, middle, 167, true)) continue;
            // PE 53.16 0x3e93b3..0x3e9d85 draws the type at the controls'
            // middle row, with the same eighteen literals as creation.
            // A Meeting Area assigned to a location instead draws that
            // location's name here. Require the unassigned main[180] control
            // at the right edge: 0x3e9f40..0x3ea0d4 moves it four columns
            // left and adds main[181] when a location is assigned. A name
            // like "Sand" must not be reinterpreted as a sand zone.
            if (middle + 7 >= panel->y + panel->h ||
                !native_main_button_at(*gps_, controls + 8, middle + 6, 180)) continue;
            const int left = panel->x + 5;
            if (left >= controls) continue;
            append_caption(left, controls, middle, controls);
            // Only a proven second half belongs to the type. The next row
            // can otherwise contain a user-authored squad or location name.
            const auto primary = trim_view(std::string_view(context[middle]).substr(
                left, controls - left));
            const auto secondary = trim_view(std::string_view(context[middle + 1]).substr(
                left, controls - left));
            if (primary.empty() || primary != secondary ||
                primary.data() - context[middle].data() !=
                    secondary.data() - context[middle + 1].data()) continue;
            const int x = static_cast<int>(primary.data() - context[middle].data());
            bool halves_match = true;
            for (int offset = 0; offset < static_cast<int>(primary.size()); ++offset) {
                if (primary[offset] == ' ') continue;
                bool upper_top = false, lower_top = false;
                const auto *upper = cell_at(x + offset, middle, &upper_top);
                const auto *lower = cell_at(x + offset, middle + 1, &lower_top);
                const auto *flags = upper_top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                const size_t at = static_cast<size_t>(x + offset) * gps_->dimy + middle;
                constexpr uint32_t halves = (1u << 3) | (1u << 4);
                if (!upper || !lower || upper_top != lower_top || !flags ||
                    (flags[at] & halves) != (1u << 3) ||
                    (flags[at + 1] & halves) != (1u << 4)) {
                    halves_match = false;
                    break;
                }
            }
            if (halves_match) append_caption(left, controls, middle + 1, controls);
        }
    }
}

// The two zone-drawing branches issue these fixed captions through addst.
// Bind their native callers before dictionary/name matching: enabled and
// disabled controls have different skins, but retain the same semantic role.
void Overlay::append_fortress_zone_drawing_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    const uintptr_t base = native_history_profile_base();
    if (!base) return;
#ifdef _WIN32
    const uintptr_t multi_returns[]{native_reference_address(base, 0x3ecdb2),
        native_reference_address(base, 0x3edac3)};
    const uintptr_t paint_returns[]{native_reference_address(base, 0x3ece8d),
        native_reference_address(base, 0x3edbac)};
#else
    const uintptr_t multi_returns[]{native_reference_address(base, 0x129bd5d),
        native_reference_address(base, 0x129e5ae)};
    const uintptr_t paint_returns[]{native_reference_address(base, 0x129be20),
        native_reference_address(base, 0x129e67d)};
#endif
    const auto owns = [&](const NativeDrawnTextRow &draw) {
        if (!draw.native_caller) return false;
        const auto caller_is = [&](uintptr_t caller) {
            return draw.native_caller == caller;
        };
        return (draw.source == "Multi" &&
                std::any_of(std::begin(multi_returns), std::end(multi_returns), caller_is)) ||
            (draw.source == "Paint" &&
                std::any_of(std::begin(paint_returns), std::end(paint_returns), caller_is));
    };
    constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
    for (const bool top_layer : {false, true}) {
        const auto draws = captured_native_drawn_text_snapshot(top_layer);
        for (const auto &draw : *draws) {
            if (!owns(draw) || draw.editable_text ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.x < 1 || draw.x > gps_->dimx - 7 ||
                    draw.y < 0 || draw.y >= gps_->dimy) continue;
            const auto target = exact_literal_translation("Zone drawing: " + draw.source);
            if (!target || target->empty()) continue;
            const auto *flags = draw.top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const int length = static_cast<int>(draw.source.size());
            const auto claim = [&](int y, bool mirror) {
                if (y < 0 || y >= gps_->dimy || (only_y >= 0 && only_y != y) ||
                        rows[y].compare(draw.x, length, draw.source) != 0) return;
                for (int offset = 0; offset < length; ++offset) {
                    const int x = draw.x + offset;
                    const size_t at = static_cast<size_t>(x) * gps_->dimy + y;
                    const auto origin = native_text_grid_origin(*gps_, at,
                        native_ui_top_layer_at(*gps_, at));
                    if (origin.grid != draw.draw_grid || origin.top_layer != draw.top_layer ||
                            visible_char_at(x, y) != static_cast<unsigned char>(draw.source[offset]))
                        return;
                    if (mirror) {
                        const size_t original = static_cast<size_t>(x) * gps_->dimy + draw.y;
                        if (!flags ||
                                (flags[original] & (upper | lower)) != (y > draw.y ? upper : lower) ||
                                (flags[at] & (upper | lower)) != (y > draw.y ? lower : upper)) return;
                    }
                }
                Match match{draw.x, y, length, kFortressZoneDrawingRule, *target, draw.source};
                // Both native branches draw a ten-column frame and start
                // addst at left+2. The eight interior columns own centring.
                match.layout_x = draw.x - 1;
                match.layout_y = y;
                match.layout_length = 8;
                match.layout_clip_right = draw.x + 7;
                matches.push_back(std::move(match));
                std::fill_n(rows[y].begin() + draw.x, length, ' ');
            };
            claim(draw.y, false);
            if (flags) {
                const size_t at = static_cast<size_t>(draw.x) * gps_->dimy + draw.y;
                const uint32_t half = flags[at] & (upper | lower);
                if (half == upper) claim(draw.y + 1, true);
                else if (half == lower) claim(draw.y - 1, true);
            }
        }
    }
}

// Room owners share the complete roster grammar with Tasks and Nobles.
// PE 53.16 0x3eae57/0x3eb0fb resize the primary/partner identity to 25
// cells, then 0x3eaeac/0x3eb150 draw it through the shared caption hooks.
// Translate that captured source, not a guessed role behind "mana...".
void Overlay::append_fortress_zone_holder_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    const NativePanelBorders borders(*gps_);
    for (const auto &capture : captured_clipped_captions()) {
        const int x = capture.x, y = capture.y;
        const int length = static_cast<int>(capture.visible.size());
        if ((only_y >= 0 && only_y != y) || x < 0 || y < 0 ||
            y >= gps_->dimy || length <= 0 || length > gps_->dimx - x ||
            !capture.visible.ends_with("...") || capture.complete.ends_with("...") ||
            capture.complete.find(',') == std::string::npos ||
            rows[y].compare(x, length, capture.visible) != 0) continue;
        bool current = true;
        for (int offset = 0; offset < length; ++offset) {
            const auto ch = visible_char_at(x + offset, y);
            if ((ch ? ch : ' ') != static_cast<unsigned char>(capture.visible[offset])) {
                current = false;
                break;
            }
        }
        if (!current) continue;
        const auto panel = native_panel_interior(borders, *gps_, x, x + length, y);
        if (!panel) continue;
        int right = -1;
        // The owner control is main[182], drawn at 0x3eb2e0..0x3eb344.
        // It is beside the primary owner; a partner uses the same name column
        // three rows below. Read the current full button and enclosing frame,
        // so a renamed room or a translated title never owns recognition.
        for (int button_x = x + length; button_x + 4 <= panel->x + panel->w; ++button_x) {
            for (const int button_y : {y, y - 3}) {
                if (button_y - 1 < panel->y || button_y + 1 >= panel->y + panel->h)
                    continue;
                if (native_main_button_at(*gps_, button_x, button_y, 182)) {
                    right = button_x;
                    break;
                }
            }
            if (right >= 0) break;
        }
        if (right < 0) continue;
        auto target = translate_procedural_fragment(capture.complete);
        if (!target || target->empty() || target->find("[C:") != std::string::npos ||
            target->find_first_of("\r\n") != std::string::npos) continue;
        Match match{x, y, length, kFortressZoneHolderRule, *target, capture.visible};
        match.layout_x = x;
        match.layout_y = y;
        match.layout_length = right - x;
        match.layout_clip_right = right;
        match.layout_left = true;
        match.layout_prepared = true;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        matches.push_back(std::move(match));
        std::fill_n(rows[y].begin() + x, length, ' ');
    }
}

// The selected Meeting Area draws the location's English name and its
// Hospital type on consecutive rows at the same x. The native formatter
// gives the name 22 cells and replaces the last three with dots on overflow.
void Overlay::append_fortress_hospital_card_names(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    constexpr std::string_view kind = "Hospital";
    constexpr int width = 22;
    const int first = only_y < 0 ? 0 : only_y;
    const int end = only_y < 0 ? gps_->dimy - 1 : std::min(only_y + 1, gps_->dimy - 1);
    for (int y = first; y < end; ++y) {
        auto &row = rows[y];
        for (size_t x = row.find("The "); x != std::string::npos; x = row.find("The ", x + 4)) {
            if (x + width > row.size()) continue;
            const int left = static_cast<int>(x);
            bool hospital = true;
            for (int i = 0; i < static_cast<int>(kind.size()); ++i)
                if (visible_char_at(left + i, y + 1) != kind[i]) { hospital = false; break; }
            if (!hospital) continue;
            // Other windows can contain hospital-related prose. Require the
            // complete standalone type in the native name column.
            for (int i = static_cast<int>(kind.size()); i < width; ++i) {
                const auto ch = visible_char_at(left + i, y + 1);
                if (ch && ch != ' ') { hospital = false; break; }
            }
            if (!hospital) continue;
            const std::string visible(trim_view(std::string_view(row).substr(x, width)));
            if (!visible.starts_with("The ")) continue;
            const auto displays = [&](std::string_view full) {
                return full.size() <= width ? full == visible :
                    visible.size() == width && visible.ends_with("...") &&
                    full.substr(0, width - 3) == std::string_view(visible).substr(0, width - 3);
            };
            std::string complete = visible;
            const NativeHistoryName *identity = nullptr;
            bool detail_field = false;
            const auto base = captured_native_drawn_text_snapshot();
            const auto top = captured_native_drawn_text_snapshot(true);
            for (const auto *layer : {base.get(), top.get()}) {
                for (const auto &draw : *layer) {
                    if (draw.x != left || draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                            (draw.y != y && draw.y != y + 1)) continue;
                    const bool title = draw.y == y && draw.source == visible;
                    const bool label = draw.y == y + 1 && draw.source == kind;
                    if (title && displays(draw.complete_source)) complete = draw.complete_source;
                    if ((!title && !label) || !draw.fortress_zone_caption ||
                            !draw.fortress_zone_caption->detail) continue;
                    detail_field = true;
                    const auto &name = draw.fortress_zone_caption->location_name;
                    if (!name) continue;
                    const auto english = reconstruct_site_english_name(*name);
                    if (english && displays(*english)) {
                        complete = *english;
                        identity = name.get();
                    }
                }
            }
            if (!detail_field && !native_main_button_at(*gps_, left - 5, y, 167, true) &&
                    !native_main_button_at(*gps_, left + width, y, 161) &&
                    !native_textbox_rect_at(*gps_, left - 5, y - 4)) continue;
            if (identity && (!identity->first_name.empty() || !identity->nickname.empty())) continue;
            if (complete.ends_with("...")) {
                const auto clips = captured_clipped_caption_snapshot();
                for (const auto &clip : *clips)
                    if (clip.x == left && clip.y == y && clip.visible == visible && displays(clip.complete)) {
                        complete = clip.complete;
                        break;
                    }
            }
            auto target = identity && !hospital_name_head(*identity).empty()
                ? translate_history_name(*identity) : std::nullopt;
            if (!target) target = translate_fortress_hospital_reference(complete, true);
            if (!target) continue;
            Match match{left, y, static_cast<int>(visible.size()), kFortressLocationListRule, *target, visible};
            match.native_picture_caption_source = complete;
            match.native_picture_caption_box = SDL_Rect{left, y, width, 1};
            match.layout_left = true;
            matches.push_back(std::move(match));
            std::fill_n(row.begin() + left, visible.size(), ' ');
        }
    }
}

// The selected Meeting Area draws the associated location's name and guild
// description as separate native strings. The shared resize capture retains
// each original before the game replaces its suffix with dots; screen words
// and those dots establish only the suppression span, never the meaning.
void Overlay::append_fortress_zone_details(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    const NativePanelBorders borders(*gps_);
    auto drawn = captured_native_drawn_text_rows();
    const auto top_drawn = captured_native_drawn_text_rows(true);
    drawn.insert(drawn.end(), top_drawn.begin(), top_drawn.end());
    for (const auto &draw : drawn) {
        if (!draw.fortress_zone_caption || !draw.fortress_zone_caption->detail ||
                draw.source.empty() || draw.x < 0 || draw.y < 0 ||
                draw.y >= gps_->dimy || draw.x >= gps_->dimx ||
                (only_y >= 0 && only_y != draw.y) ||
                draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x) ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy)
            continue;
        bool visible = true;
        for (int offset = 0; offset < static_cast<int>(draw.source.size()); ++offset) {
            bool top = false;
            cell_at(draw.x + offset, draw.y, &top);
            const auto ch = visible_char_at(draw.x + offset, draw.y);
            if (top != draw.top_layer || (ch ? ch : ' ') !=
                    static_cast<unsigned char>(draw.source[offset])) {
                visible = false;
                break;
            }
        }
        if (!visible) continue;
        const auto &caption = *draw.fortress_zone_caption;
        using Kind = NativeFortressZoneCaption::Kind;
        const bool description = caption.kind == Kind::LocationDescription;
        const int middle = draw.y - (description ? 1 : 0);
        const int length = static_cast<int>(draw.source.size());
        const auto panel = native_panel_interior(borders, *gps_,
            draw.x, draw.x + length, draw.y);
        if (!panel || draw.x != panel->x + 5 || middle <= panel->y ||
                middle + 1 >= panel->y + panel->h) continue;
        const int right = panel->x + panel->w - 12;
        if (right < draw.x + length ||
                !native_main_button_at(*gps_, right, middle, 161) ||
                !(native_main_button_at(*gps_, right + 4, middle, 164) ||
                  native_main_button_at(*gps_, right + 4, middle, 165)) ||
                !native_main_button_at(*gps_, right + 8, middle, 166) ||
                !native_main_button_at(*gps_, panel->x, middle, 167, true)) continue;
        if (draw.draw_clip && (draw.x < draw.draw_clip->x ||
                right > draw.draw_clip->x + draw.draw_clip->w)) continue;
        const std::string &complete = draw.complete_source.empty()
            ? draw.source : draw.complete_source;
        if (complete.empty() || complete.find_first_of("\r\n") != std::string::npos) continue;
        std::optional<std::string> target;
        if (!description && caption.location_name && caption.location_name->has_name)
            target = translate_history_name(*caption.location_name);
        if (description && complete == "Hospital") target = exact_literal_translation(complete);
        if (description) {
            for (const std::string_view suffix : {
                    " grand guildhall", " guildhall", " meeting place"}) {
                if (!complete.ends_with(suffix) || complete.size() <= suffix.size()) continue;
                const std::string profession_source = complete.substr(0, complete.size() - suffix.size());
                auto profession = translate_unit_profession(profession_source, true);
                if (!profession) profession = exact_literal_translation(profession_source);
                if (!profession) break;
                const auto key = suffix == " meeting place" ? "{s} meeting place"
                    : "Zone location: {s}" + std::string(suffix);
                const auto found = history_semantic_templates_.find(key);
                if (found == history_semantic_templates_.end()) break;
                const auto &rule = rules_[static_cast<size_t>(found->second)];
                if (rule.template_kinds.size() != 1) break;
                const std::vector<std::optional<std::string>> resolved{*profession};
                bool intact = false;
                auto value = fill_template(rule, {profession_source}, nullptr, &intact, &resolved);
                if (intact && !value.empty()) target = std::move(value);
                break;
            }
        }
        // A failed translation still reserves the complete native field.
        // It must never fall back to translating its truncated word pieces.
        if (!target) target = native_text_to_utf8(complete);
        if (target->empty() || target->find("[C:") != std::string::npos ||
                target->find_first_of("\r\n") != std::string::npos) continue;
        if (rows[draw.y].compare(draw.x, length, draw.source) == 0) {
            Match match{draw.x, draw.y, length, kFortressLocationListRule, *target, draw.source};
            match.native_picture_caption_box = SDL_Rect{draw.x, draw.y, right - draw.x, 1};
            match.native_picture_caption_source = complete;
            match.layout_x = draw.x;
            match.layout_y = draw.y;
            match.layout_length = right - draw.x;
            match.layout_clip_right = right;
            match.layout_left = true;
            match.layout_fixed_baseline = true;
            if (draw.foreground_rgb >= 0) match.layout_foreground_rgb = draw.foreground_rgb;
            matches.push_back(std::move(match));
            std::fill_n(rows[draw.y].begin() + draw.x, length, ' ');
        } else if (raw_layer) {
            for (int offset = 0; offset < length;) {
                while (offset < length && rows[draw.y][draw.x + offset] != draw.source[offset]) ++offset;
                const int start = offset;
                while (offset < length && rows[draw.y][draw.x + offset] == draw.source[offset]) ++offset;
                if (offset == start) continue;
                matches.push_back({draw.x + start, draw.y, offset - start,
                    kFortressLocationListRule, {}, draw.source.substr(start, offset - start)});
                std::fill_n(rows[draw.y].begin() + draw.x + start, offset - start, ' ');
            }
        }
    }
}

// The selected zone has bare name/type rows beside its picture. They are
// not joined picture/rectangle buttons: centering each translation in its
// English span separates two captions that the native UI left-aligns.
void Overlay::layout_fortress_zone_details(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const NativePanelBorders borders(*gps_);
    for (int middle = 1; middle + 1 < gps_->dimy; ++middle) {
        for (int controls = 0; controls + 12 <= gps_->dimx; ++controls) {
            // PE 53.16 0x3e8c03..0x3e8f69: repaint, suspend/resume,
            // remove. All three complete 4x3 controls belong to this card.
            if (!native_main_button_at(*gps_, controls, middle, 161) ||
                !(native_main_button_at(*gps_, controls + 4, middle, 164) ||
                  native_main_button_at(*gps_, controls + 4, middle, 165)) ||
                !native_main_button_at(*gps_, controls + 8, middle, 166)) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                SDL_Rect{controls, middle - 1, 12, 3});
            if (!panel || controls + 12 != panel->x + panel->w ||
                !native_main_button_at(*gps_, panel->x, middle, 167, true)) continue;
            // 0x3e91e1..0x3e9264 draws the picture; the two captions start
            // one cell beyond its four-column frame. Keep the controls as
            // the text budget, independently of names, language or resolution.
            const int left = panel->x + 5;
            if (left >= controls) continue;

            // Tooltip layout restores the complete background page before
            // this pass. Its matches still carry the background flag even
            // when the card is beside the zone and covers none of its text.
            const auto layout_rows = [&](int first, int right, int top, int bottom) {
                struct Part { Match *match; int first, last; };
                std::map<int, std::vector<Part>> candidates;
                for (Match &match : prepared_matches_) {
                    const int row = match.native_split_text ? match.native_split_top_y : match.y;
                    if (match.target.empty() || match.native_split_duplicate ||
                        match.native_help_source_only ||
                        (match.native_hover_background && !NativeTooltipPageScope::active) ||
                        match.legends_flow || row < top || row >= bottom ||
                        match.x < 0 || match.y < 0 || match.y >= gps_->dimy ||
                        match.length <= 0 || match.length > gps_->dimx - match.x ||
                        match.source.size() != static_cast<size_t>(match.length)) continue;
                    const std::string_view source = trim_view(match.source);
                    if (source.empty()) continue;
                    const int start = match.x + static_cast<int>(source.data() - match.source.data());
                    const int end = start + static_cast<int>(source.size());
                    if (start < first || end > right) continue;
                    std::string visible;
                    for (int x = start; x < end; ++x)
                        visible.push_back(visible_char_at(x, match.y));
                    const bool fold_case = match.rule >= 0 &&
                        static_cast<size_t>(match.rule) < rules_.size() &&
                        rules_[static_cast<size_t>(match.rule)].case_insensitive;
                    if (template_literal_at(visible, 0, source, fold_case))
                        candidates[row].push_back({&match, start, end});
                }
                std::vector<std::vector<Match *>> rows;
                for (auto &[row_y, parts] : candidates) {
                    std::sort(parts.begin(), parts.end(), [](const Part &a, const Part &b) {
                        return a.first < b.first;
                    });
                    int cursor = first;
                    const auto blank_until = [&](int end) {
                        while (cursor < end) {
                            const auto ch = visible_char_at(cursor++, row_y);
                            if (ch && ch != ' ') return false;
                        }
                        return true;
                    };
                    bool complete = true;
                    std::vector<Match *> row;
                    for (const Part &part : parts) {
                        if (part.first < cursor || !blank_until(part.first)) {
                            complete = false;
                            break;
                        }
                        cursor = part.last;
                        row.push_back(part.match);
                    }
                    // Do not move a translated suffix over an unknown prefix
                    // or include text from an overlapping foreground widget.
                    if (complete && blank_until(right)) rows.push_back(std::move(row));
                }
                for (const auto &row : rows)
                    for (Match *match : row) {
                        match->layout_box_pixel_x = -1;
                        match->layout_box_pixel_width = 0;
                        match->layout_clip_right = right;
                        match->layout_y = match->y;
                        match->layout_pixel_y = 0;
                        match->layout_fixed_baseline = false;
                        match->layout_right = false;
                    }
                layout_fortress_text_rows(renderer, rows, first, right);
            };
            layout_rows(left, controls, middle, middle + 2);
            // The editable zone name is a filter/name box three rows above
            // the picture caption (0x3e8136..0x3e826c). Read its actual caps:
            // overlapping zones reserve extra space for previous/next buttons.
            const int title_top = middle - 4;
            if (title_top < panel->y) continue;
            for (int x = panel->x; x + 5 < panel->x + panel->w; ++x) {
                const auto title = native_textbox_rect_at(*gps_, x, title_top);
                if (!title || title->x + title->w > panel->x + panel->w) continue;
                layout_rows(title->x + 1, title->x + title->w - 4,
                    title->y + 1, title->y + 2);
                break;
            }
        }
    }
}

// Zone creation uses standalone main-button pictures and bare captions,
// unlike the build menu's adjoining picture/rectangle controls. PE 53.16
// 0x1403ec161..0x1403ec1eb draws the shared main[167] four-by-three frame;
// 0x1403ec209..0x1403ec21b starts each caption one cell after that picture.
// Read the current frame/columns; English label widths never own alignment.
void Overlay::layout_fortress_zone_menu(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;

    // UI prose has already been detached from prepared_matches_. Its current
    // native bytes still identify this specific panel, independently of the
    // dictionary spelling, translated label coverage and screen resolution.
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            context[y][x] = ch ? static_cast<char>(ch) : ' ';
        }
    int prompt_y = -1;
    const auto panel = capture_fortress_zone_menu(context, prompt_y);
    if (!panel) return;

    // Every zone, including hovered ones, uses this same complete frame.
    // The actual pictures establish columns even if a label is untranslated.
    const auto columns = fortress_zone_menu_columns(*gps_, *panel, prompt_y);
    const int panel_right = panel->x + panel->w;
    if (columns.empty()) return;

    const auto blank = [](unsigned char ch) { return ch == 0 || ch == ' '; };
    for (auto column = columns.begin(); column != columns.end(); ++column) {
        const auto next_column = std::next(column);
        const int left = column->first + column->second.front().w + 1;
        // Captions are drawn independently of the hit slot. For example,
        // Animal Training extends one cell past that slot's right edge.
        // Recognize all source bytes up to the next picture/panel border,
        // while keeping the translated caption inside its own hit slot.
        const int source_right = next_column == columns.end() ? panel_right
            : std::min(panel_right, next_column->first);
        // Native hit slots are 19 columns wide (0x1403ebefb..0x1403ec071).
        // Their bound still applies if a tooltip hides the neighbouring icons.
        const int right = std::min(source_right, column->first + 19);
        if (left >= right) continue;

        std::vector<std::vector<Match *>> rows;
        for (const SDL_Rect &picture : column->second) {
            struct Part { Match *match; int first, last; };
            std::vector<Part> parts;
            bool complete = true;
            int source_y = -1;
            for (Match &match : prepared_matches_) {
                if (match.target.empty() || match.native_split_duplicate ||
                    match.native_help_source_only ||
                    (match.native_hover_background && !NativeTooltipPageScope::active) ||
                    match.legends_flow || match.y < picture.y ||
                    match.y >= picture.y + picture.h || match.x >= source_right ||
                    match.x + match.length <= left) continue;
                if (match.x < 0 || match.length <= 0 ||
                    match.length > gps_->dimx - match.x ||
                    match.source.size() != static_cast<size_t>(match.length)) {
                    complete = false;
                    break;
                }
                const std::string_view source = trim_view(match.source);
                if (source.empty()) continue;
                const int first = match.x + static_cast<int>(
                    source.data() - match.source.data());
                const int last = first + static_cast<int>(source.size());
                // Dictionary boundaries such as " office " and " sand"
                // own surrounding blanks for matching/suppression only.
                // Their actual letters establish caption membership.
                if (last <= left || first >= source_right) continue;
                if (first < left || last > source_right) {
                    complete = false;
                    break;
                }
                const bool fold_case = match.rule >= 0 &&
                    static_cast<size_t>(match.rule) < rules_.size() &&
                    rules_[static_cast<size_t>(match.rule)].case_insensitive;
                std::string visible;
                for (int x = first; x < last; ++x)
                    visible.push_back(visible_char_at(x, match.y));
                if (!template_literal_at(visible, 0, source, fold_case) ||
                    (source_y >= 0 && source_y != match.y)) {
                    complete = false;
                    break;
                }
                source_y = match.y;
                parts.push_back({&match, first, last});
            }
            if (!complete || parts.empty()) continue;
            std::sort(parts.begin(), parts.end(), [](const Part &a, const Part &b) {
                return a.first < b.first;
            });
            int cursor = left;
            const auto blank_until = [&](int end) {
                while (cursor < end)
                    if (!blank(visible_char_at(cursor++, source_y))) return false;
                return true;
            };
            std::vector<Match *> row;
            for (const Part &part : parts) {
                if (part.first < cursor || !blank_until(part.first)) {
                    complete = false;
                    break;
                }
                cursor = part.last;
                row.push_back(part.match);
            }
            // Unknown bytes cannot be left behind beside a relocated caption.
            if (complete && blank_until(source_right)) rows.push_back(std::move(row));
        }
        if (rows.empty()) continue;
        for (const auto &row : rows) {
            for (Match *match : row) {
                match->layout_box_pixel_x = -1;
                match->layout_box_pixel_width = 0;
                match->layout_clip_right = right;
                match->layout_y = match->y;
                match->layout_pixel_y = 0;
                match->layout_fixed_baseline = false;
            }
        }
        // This shares the font, full-column budget and fragment packing with
        // other fortress controls. Native source spans, colours, half-font
        // ownership and icon/click geometry remain unchanged.
        layout_fortress_text_rows(renderer, rows, left, right);
    }
}
