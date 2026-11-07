// Read the chooser from the current native page before paragraph matching
// can detach its prompt. Matching and layout must share the same scope in
// classic and graphical modes, including a restored tooltip background.
std::optional<SDL_Rect> Overlay::capture_fortress_location_picker(int &prompt_y) const {
    prompt_y = -1;
    if (!gps_ || gps_->dimx <= 0 || gps_->dimy <= 0) return std::nullopt;
    constexpr std::string_view prompt = "Add or choose a location.";
    const NativePanelBorders borders(*gps_);
    const bool classic = native_ui_classic().value_or(false);
    std::string row(gps_->dimx, ' ');
    for (int y = 1; y + 1 < gps_->dimy; ++y) {
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = classic ? cell_at(x, y, &top) : nullptr;
            // Classic controls and their closed frame share this native
            // glyph view, including during early raw-layer suppression.
            const auto ch = classic ? (cell ? cell[0] : 0) : visible_char_at(x, y);
            row[x] = ch ? static_cast<char>(ch) : ' ';
        }
        const auto start = row.find(prompt);
        if (start == std::string::npos) continue;
        if (const auto panel = native_panel_interior(borders, *gps_,
                static_cast<int>(start), static_cast<int>(start + prompt.size()), y)) {
            prompt_y = y;
            return panel;
        }
    }
    return std::nullopt;
}

// Places/Locations emits one complete name, one complete type/faith caption,
// and an optional occupation count per picture record (PE 53.16 39d1f9).
// Own those native fields before generic templates split an identity and
// centre its translated fragments in unrelated English spans.
void Overlay::append_fortress_location_list_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer, bool picker_only) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    auto context = rows;
    if (raw_layer) {
        const bool classic = native_ui_classic().value_or(false);
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                bool top = false;
                const auto *cell = classic ? cell_at(x, y, &top) : nullptr;
                const auto ch = classic ? (cell ? cell[0] : 0) : visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
    }
    int tabs_y = -1;
    auto panel = capture_fortress_location_picker(tabs_y);
    const bool picker = panel.has_value();
    if (!panel && !picker_only) panel = capture_fortress_places_panel(context, tabs_y);
    const auto drawn_snapshot = captured_native_drawn_text_snapshot();
    const auto top_drawn_snapshot = captured_native_drawn_text_snapshot(true);
    const auto clipped_snapshot = captured_clipped_caption_snapshot();
    const auto &drawn = *drawn_snapshot;
    const auto &top_drawn = *top_drawn_snapshot;
    const auto &clipped = *clipped_snapshot;

    struct Field {
        int x, y, end, right;
        std::string source, complete;
    };
    const auto field_at = [&](int left, int right, int y) -> std::optional<Field> {
        if (left >= right || y < 0 || y >= gps_->dimy) return std::nullopt;
        while (left < right && context[y][left] == ' ') ++left;
        if (left == right) return std::nullopt;
        int end = right;
        const std::string_view slot(context[y].data() + left, right - left);
        for (size_t at = 0; at < slot.size(); ++at)
            if (is_cp437_box_separator(slot, at)) {
                end = left + static_cast<int>(at);
                break;
            }
        while (end > left && context[y][end - 1] == ' ') --end;
        if (end == left) return std::nullopt;
        Field field{left, y, end, right, context[y].substr(left, end - left), {}};
        bool top = false;
        cell_at(left, y, &top);
        // Each line is a single native draw. Its actual source retains
        // internal spaces, even where the generic field splitter sees columns.
        for (const auto &draw : top ? top_drawn : drawn) {
            if (draw.x != left || draw.y != y || draw.source.empty() ||
                draw.source.size() > static_cast<size_t>(right - left) ||
                context[y].compare(left, draw.source.size(), draw.source) != 0) continue;
            const int draw_end = left + static_cast<int>(draw.source.size());
            if (draw_end < end && std::string_view(context[y]).substr(
                    draw_end, end - draw_end).find_first_not_of(' ') !=
                    std::string_view::npos) continue;
            field.source = draw.source;
            field.end = draw_end;
            field.complete = draw.complete_source;
            break;
        }
        if (field.complete.empty()) field.complete = field.source;
        for (const auto &capture : clipped) {
            if (capture.x == field.x && capture.y == y &&
                capture.visible == field.source && !capture.complete.empty()) {
                field.complete = capture.complete;
                break;
            }
        }
        return field;
    };
    const auto count_at = [&](int left, int right, int y) -> std::optional<Field> {
        constexpr std::string_view suffix = " assigned";
        const auto &line = context[y];
        for (size_t at = line.find(suffix, left); at != std::string::npos &&
                at + suffix.size() <= static_cast<size_t>(right);
             at = line.find(suffix, at + suffix.size())) {
            int start = static_cast<int>(at);
            while (start > left && line[start - 1] >= '0' && line[start - 1] <= '9') --start;
            if (start == static_cast<int>(at) ||
                (start > left && (start < left + 2 || line[start - 1] != ' ' ||
                    line[start - 2] != ' '))) continue;
            const int end = static_cast<int>(at + suffix.size());
            bool tail = true;
            for (int x = end; x < right; ++x)
                if (line[x] != ' ' && !is_cp437_box_separator(line, x)) tail = false;
            if (tail) return Field{start, y, end, right,
                line.substr(start, end - start), line.substr(start, end - start)};
        }
        return std::nullopt;
    };
    struct Description {
        std::string kind, name;
        bool dedication = false, profession = false;
    };
    const auto description = [](std::string_view source) -> std::optional<Description> {
        for (const std::string_view kind : {
                "Temple complex", "Temple", "Shrine", "Hospital", "Library", "Tavern"}) {
            if (source == kind) return Description{std::string(kind), {}};
            if (kind != "Temple complex" && kind != "Temple" && kind != "Shrine") continue;
            for (const std::string_view relation : {" of ", " to "}) {
                if (relation == " to " && kind != "Shrine") continue;
                const std::string prefix = std::string(kind) + std::string(relation);
                if (source.starts_with(prefix) && source.size() > prefix.size())
                    return Description{std::string(kind), std::string(source.substr(prefix.size())),
                        relation == " to "};
            }
        }
        for (const std::string_view suffix : {" grand guildhall", " guildhall", " meeting place"})
            if (source.ends_with(suffix) && source.size() > suffix.size())
                return Description{std::string(suffix.substr(1)),
                    std::string(source.substr(0, source.size() - suffix.size())), false, true};
        return std::nullopt;
    };
    const auto render_template = [&](std::string_view key, const std::string &value)
            -> std::optional<std::string> {
        const auto found = history_semantic_templates_.find(std::string(key));
        if (found == history_semantic_templates_.end()) return std::nullopt;
        bool complete = false;
        auto target = translate_template_captures(rules_[static_cast<size_t>(found->second)],
            {value}, &complete);
        return complete && !target.empty() ? std::optional<std::string>(std::move(target))
            : std::nullopt;
    };
    const auto translate_identity = [&](const std::string &source)
            -> std::optional<std::string> {
        if (contains_cjk_utf8(source)) return native_text_to_utf8(source);
        auto name = translate_religion_reference(source);
        if (!name) name = translate_legends_name(source, true);
        if (!name) name = translate_legends_name(source, false);
        if (!name) name = translate_procedural_fragment(source, false, false, {},
            ProceduralFragmentContext::generated_name);
        return name;
    };
    const auto translate_guild_count = [&](const std::string &source, bool workers)
            -> std::optional<std::string> {
        if (source == (workers ? "No workers" : "No members"))
            return exact_literal_translation(workers
                ? "Fortress guild detail: No workers" : "No members");
        for (const std::string_view suffix : workers
                ? std::array<std::string_view, 2>{" workers", " worker"}
                : std::array<std::string_view, 2>{" members", " member"}) {
            if (!source.ends_with(suffix)) continue;
            const std::string digits = source.substr(0, source.size() - suffix.size());
            if (!digits.empty() && std::all_of(digits.begin(), digits.end(),
                    [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                return render_template("Fortress guild detail: {d}" + std::string(suffix), digits);
            break;
        }
        return std::nullopt;
    };
    const auto translate_description = [&](const Description &value)
            -> std::optional<std::string> {
        if (value.profession) {
            if (value.kind == "meeting place")
                return render_template("{s} meeting place", value.name);
            auto profession = translate_unit_profession(value.name, true);
            if (!profession) profession = exact_literal_translation(value.name);
            if (!profession) profession = translate_compositional(value.name);
            auto kind = exact_literal_translation(value.kind == "grand guildhall"
                ? "Grand guildhall" : "Guildhall");
            if (profession && kind) return *profession + *kind;
            return std::nullopt;
        }
        const auto kind = exact_literal_translation(value.kind);
        if (!kind || value.name.empty()) return kind;
        // A faith may name either an entity or a deity. Both are complete
        // generated/native identities; never feed isolated title words to
        // the dictionary or phoneticize the type prefix with the name.
        const auto name = translate_identity(value.name);
        if (!name) return std::nullopt;
        return (value.dedication ? "供奉" : "") + *name + "的" + *kind;
    };
    const auto append = [&](const Field &field, const std::optional<std::string> &translated,
                            int left, bool ordinary_row = false) {
        const auto target = translated ? *translated : native_text_to_utf8(field.complete);
        const int length = field.end - field.x;
        if (field.y < 0 || field.y >= gps_->dimy || field.x < 0 ||
            field.end > gps_->dimx || left < 0 || field.right > gps_->dimx ||
            length <= 0 || left >= field.right || target.empty() ||
            target.find("[C:") != std::string::npos || target.find_first_of("\r\n") != std::string::npos)
            return;
        if (rows[field.y].compare(field.x, length, field.source) == 0) {
            if (only_y < 0 || only_y == field.y) {
                Match match{field.x, field.y, length, kFortressLocationListRule, target, field.source};
                match.native_picture_caption_box = SDL_Rect{left, field.y, field.right - left, 1};
                match.native_picture_caption_source = field.complete;
                match.native_hover_untranslated = !translated;
                match.layout_x = left;
                match.layout_y = field.y;
                match.layout_length = field.right - left;
                match.layout_clip_right = field.right;
                match.layout_left = true;
                // The guild hover writer emits each row once with ordinary
                // addst, independently of font flags left by the map beneath.
                match.layout_fixed_baseline = ordinary_row;
                matches.push_back(std::move(match));
            }
            std::fill_n(rows[field.y].begin() + field.x, length, ' ');
        } else if (raw_layer) {
            // The composite pass draws the one complete field. A partial
            // native text layer only suppresses its equal physical bytes.
            for (int offset = 0; offset < length;) {
                while (offset < length && rows[field.y][field.x + offset] != field.source[offset]) ++offset;
                const int start = offset;
                while (offset < length && rows[field.y][field.x + offset] == field.source[offset]) ++offset;
                if (offset == start) continue;
                if (only_y < 0 || only_y == field.y)
                    matches.push_back({field.x + start, field.y, offset - start,
                        kFortressLocationListRule, {}, field.source.substr(start, offset - start)});
                std::fill_n(rows[field.y].begin() + field.x + start, offset - start, ' ');
            }
        }
    };

    {
        // Typed addst callers identify the chooser and its faith/guild subpages
        // independently of the outer frame. The main chooser keeps its
        // classic binding; subpage fields own both native display modes.
        // Each saved allocation retains its original row and clip boundary.
        for (const auto *layer : {&drawn, &top_drawn}) {
            for (const auto &draw : *layer) {
                const auto kind = draw.location_picker_field;
                if (kind == NativeLocationPickerField::None ||
                    kind == NativeLocationPickerField::Prompt || native_location_detail_field(kind) ||
                    !draw.location_picker_box ||
                    (!native_ui_classic().value_or(false) && !native_location_picker_subpage_field(kind)) ||
                    draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.source.empty() || draw.x < 0 || draw.x >= gps_->dimx ||
                    draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x) ||
                    (only_y >= 0 && only_y != draw.y)) continue;
                // A retained draw may survive a cached frame. Its semantic
                // allocation belongs only to the same complete current ink;
                // partial raw-layer suppression uses that composite proof.
                const auto &current = raw_layer ? context[draw.y] : rows[draw.y];
                if (current.compare(draw.x, draw.source.size(), draw.source) != 0) continue;
                const int end = draw.x + static_cast<int>(draw.source.size());
                if (std::any_of(layer->begin(), layer->end(), [&](const auto &later) {
                        return later.sequence > draw.sequence && later.y == draw.y &&
                            later.x < end && draw.x < later.x + static_cast<int>(later.source.size());
                    })) continue;
                const auto &box = *draw.location_picker_box;
                int left = box.x, right = box.x + box.w;
                if (draw.draw_clip) {
                    const auto &clip = *draw.draw_clip;
                    if (draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
                    left = std::max(left, clip.x);
                    right = std::min(right, clip.x + clip.w);
                }
                if (box.y != draw.y || left < 0 || left > draw.x ||
                    right <= draw.x || right > gps_->dimx) continue;
                const std::string complete = draw.complete_source.empty()
                    ? draw.source : draw.complete_source;
                std::optional<std::string> target;
                switch (kind) {
                case NativeLocationPickerField::Name:
                    target = contains_cjk_utf8(complete)
                        ? std::optional<std::string>(native_text_to_utf8(complete))
                        : translate_procedural_fragment(complete, false, false, {},
                            ProceduralFragmentContext::generated_name);
                    if (!target) target = exact_literal_translation(complete);
                    break;
                case NativeLocationPickerField::Faith:
                    target = complete == "No particular deity"
                        ? exact_literal_translation(complete) : translate_identity(complete);
                    break;
                case NativeLocationPickerField::FaithChoice:
                    // Both exact built-in fallbacks belong to the proved
                    // choice row. Reuse its existing localized UI wording;
                    // generated identities keep their separate name route.
                    if (complete == "(No Specific Deity)")
                        target = exact_literal_translation("(No particular deity)");
                    else target = complete == "(No particular deity)" || complete == "No particular deity"
                            ? exact_literal_translation(complete) : translate_identity(complete);
                    break;
                case NativeLocationPickerField::FaithDeity:
                    target = translate_identity(complete);
                    break;
                case NativeLocationPickerField::FaithStatus:
                case NativeLocationPickerField::GuildStatus:
                    // The native prefix and grade are one field. Its proven
                    // pre-resize source resolves every Want/Have state even
                    // when the final English cells end in three dots.
                    target = exact_literal_translation(complete);
                    break;
                case NativeLocationPickerField::GuildChoice: {
                    // The native profession formatter appends " hall" to
                    // one buffer. Translate and place that complete caption,
                    // never its profession and suffix as separate grid runs.
                    constexpr std::string_view suffix = " hall";
                    if (complete.ends_with(suffix) && complete.size() > suffix.size())
                        target = translate_description(Description{"guildhall",
                            complete.substr(0, complete.size() - suffix.size()), false, true});
                    break;
                }
                case NativeLocationPickerField::GuildWorkers:
                case NativeLocationPickerField::GuildMembers:
                    target = translate_guild_count(complete,
                        kind == NativeLocationPickerField::GuildWorkers);
                    break;
                case NativeLocationPickerField::GuildLabel:
                    if (complete == "Guild:")
                        target = exact_literal_translation("Fortress guild picker: Guild:");
                    break;
                case NativeLocationPickerField::GuildName:
                    // This is a historical entity, not a person or profession.
                    // Preserve the complete pre-resize identity in one row.
                    target = contains_cjk_utf8(complete)
                        ? std::optional<std::string>(native_text_to_utf8(complete))
                        : translate_legends_name(complete, false);
                    if (!target) target = translate_procedural_fragment(complete, false, false, {},
                        ProceduralFragmentContext::generated_name);
                    break;
                case NativeLocationPickerField::GuildMissing:
                    target = exact_literal_translation(complete);
                    break;
                case NativeLocationPickerField::FaithCount:
                    if (complete == "No worshippers") target = exact_literal_translation(complete);
                    else for (const std::string_view suffix : {" worshippers", " worshipper"}) {
                        if (!complete.ends_with(suffix)) continue;
                        const std::string digits = complete.substr(0, complete.size() - suffix.size());
                        if (!digits.empty() && std::all_of(digits.begin(), digits.end(),
                                [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                            target = render_template("{d}" + std::string(suffix), digits);
                        break;
                    }
                    break;
                case NativeLocationPickerField::FaithWorship:
                    if (complete == "Worship")
                        target = exact_literal_translation("Fortress faith picker: Worship");
                    break;
                case NativeLocationPickerField::FaithSphere:
                    // The native sphere formatter supplies the semantic
                    // noun and optional article. Ordinary UI words such as
                    // Rain or The rain must never own this typed field.
                    target = translate_deity_spheres(complete);
                    break;
                case NativeLocationPickerField::Guild:
                    if (const auto type = description(complete))
                        target = translate_description(*type);
                    else {
                        target = translate_unit_profession(complete, true);
                        if (!target) target = exact_literal_translation(complete);
                        if (!target) target = translate_compositional(complete);
                    }
                    break;
                default:
                    target = exact_literal_translation(complete);
                    break;
                }
                append(Field{draw.x, draw.y, end, right, draw.source, complete}, target, left,
                    native_guild_picker_card_field(kind));
            }
        }
    }

    if (!panel || (picker_only && !picker)) return;
    const int panel_right = panel->x + panel->w;
    const int panel_bottom = panel->y + panel->h;

    if (picker) {
        // Own creation actions with the records. UI-message matching may
        // otherwise detach them before the build-menu layout can align them.
        constexpr std::string_view actions[] = {"New inn/tavern", "New temple",
            "New library", "New guildhall", "New hospital"};
        for (int y = tabs_y + 1; y < panel_bottom; ++y) {
            if (only_y >= 0 && only_y != y) continue;
            for (const auto action : actions) {
                const auto at = context[y].find(action, panel->x);
                if (at == std::string::npos || at + action.size() >
                        static_cast<size_t>(panel_right)) continue;
                const int left = static_cast<int>(at);
                const int end = left + static_cast<int>(action.size());
                const auto box = native_button_text_rect(*gps_, left, end, y);
                if (!box || box->x < panel->x || box->x + box->w > panel_right ||
                    box->y <= tabs_y || box->y + box->h > panel_bottom) continue;
                const std::string source(action);
                append(Field{left, y, end, box->x + box->w, source, source},
                    exact_literal_translation(source), box->x);
            }
        }
    }

    for (int y = tabs_y + 1; y + 1 < panel_bottom; ++y) {
        if (only_y >= 0 && only_y != y && only_y != y + 1) continue;
        for (const auto &start : split_text_fields(context[y])) {
            if (start.start < panel->x || start.end > panel_right) continue;
            const auto box = native_picture_caption_rect(
                *gps_, start.start, y, false, nullptr, true, nullptr, !picker,
                false, picker ? 181 : -1);
            if (!box || box->x < panel->x || box->x + box->w > panel_right ||
                box->y <= tabs_y || box->y + box->h > panel_bottom ||
                y != box->y + 1 || start.start < box->x ||
                std::string_view(context[y]).substr(box->x, start.start - box->x)
                    .find_first_not_of(' ') != std::string_view::npos) continue;
            const int left = start.start;
            int right = box->x + box->w;
            // Actions retain the rectangle fill underneath their foreground
            // artwork. Their complete current 3x3 skins own the right edge.
            for (int x = left; x + 3 <= right; ++x)
                if (native_square_button_at(*gps_, x, y, native_texture_button_stocks_recenter(*gps_)) ||
                    native_square_button_at(*gps_, x, y, native_texture_button_stocks_view_item(*gps_))) {
                    right = x;
                    break;
                }
            const auto first_count = count_at(left, right, y);
            const auto second_count = count_at(left, right, y + 1);
            const auto name = field_at(left, first_count ? first_count->x : right, y);
            const auto detail = field_at(left, second_count ? second_count->x : right, y + 1);
            if (!name || !detail || name->x != left || detail->x != left) continue;
            const auto type = description(detail->complete);
            if (!type && !picker) continue;
            auto title = contains_cjk_utf8(name->complete)
                ? std::optional<std::string>(native_text_to_utf8(name->complete))
                : translate_procedural_fragment(name->complete, false, false, {},
                    ProceduralFragmentContext::generated_name);
            if (!title) title = exact_literal_translation(name->complete);
            append(*name, title, left);
            // The chooser draws a bare faith/deity identity below temples;
            // Places instead prefixes it with Temple/Shrine. Own either
            // complete source before generic matching splits a native given
            // name from an English compound surname or clipped epithet.
            const auto detail_target = type ? translate_description(*type)
                : detail->complete == "No particular deity"
                    ? exact_literal_translation(detail->complete)
                    : translate_identity(detail->complete);
            append(*detail, detail_target, left);
            for (const auto *count : {&first_count, &second_count})
                if (*count) {
                    const auto digits = (*count)->source.substr(0, (*count)->source.find(' '));
                    append(**count, render_template("{d} assigned", digits), (*count)->x);
                }
            break;
        }
    }
}

void Overlay::layout_fortress_location_list(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || !face_ || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    for (Match &match : prepared_matches_) {
        if (match.rule != kFortressLocationListRule || match.target.empty() ||
            match.native_split_duplicate || !match.native_picture_caption_box) continue;
        const SDL_Rect &box = *match.native_picture_caption_box;
        // Both physical halves share the native text baseline. Establish it
        // before fitting so the glyph destination and its clip remain equal.
        if (!match.layout_fixed_baseline) {
            match.layout_y = match.native_split_text ? match.native_split_top_y : box.y;
            match.layout_pixel_y = match.native_split_text ? gps_->tile_pixel_y / 2 : 0;
        }
        match.layout_fixed_baseline = true;
        layout_fortress_text_rows(renderer, {{&match}}, box.x, box.x + box.w);
    }
}
