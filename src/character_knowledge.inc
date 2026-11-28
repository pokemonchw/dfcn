#ifdef _WIN32
struct KnowledgeTitleSites { uintptr_t resize_return, draw_return; };

static KnowledgeTitleSites native_knowledge_title_sites() {
    const auto base = native_history_profile_base();
    return {native_reference_address(base, 0x16f32b), native_reference_address(base, 0x16f3ac)};
}
#endif

// Knowledge is a sequence of complete title/kind records. The kind selects
// the short academic topic vocabulary or the generated book/art title grammar;
// claim the complete record before ordinary word rules can split its fields.
void Overlay::append_character_knowledge_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y,
        const unsigned char *screen_override) const {
    if (!native_character_translation_active(gps_)) return;
    if (!gps_ || gps_->dimx <= 0 || gps_->dimy <= 0 ||
        rows.size() != static_cast<size_t>(gps_->dimy)) return;

    // Context always belongs to this composed frame. Per-layer suppression
    // still claims only bytes present in its own matching copy below.
    std::vector<std::string> context(gps_->dimy,
        std::string(static_cast<size_t>(gps_->dimx), ' '));
    for (int y = 0; y < gps_->dimy; ++y) {
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) context[y][x] = static_cast<char>(cell[0]);
        }
    }
    static constexpr std::array<std::string_view, 5> tabs{{
        "Labor", "Combat", "Social", "Other skills", "Knowledge",
    }};
    std::array<int, tabs.size()> tab_x{};
    int tab_y = -1;
    for (int y = 0; y < gps_->dimy && tab_y < 0; ++y) {
        size_t cursor = 0;
        bool complete = true;
        for (size_t index = 0; index < tabs.size(); ++index) {
            const size_t at = context[y].find(tabs[index], cursor);
            if (at == std::string::npos ||
                !(has_word_boundaries(context[y], at, at + tabs[index].size()) ||
                  is_ascii_tab_caption(context[y], at, at + tabs[index].size()))) {
                complete = false;
                break;
            }
            tab_x[index] = static_cast<int>(at);
            cursor = at + tabs[index].size();
        }
        if (complete) tab_y = y;
    }
    if (tab_y < 0) return;

    const int tabs_end = tab_x.back() + static_cast<int>(tabs.back().size());
    auto frame = find_graphical_character_panel_frame(
        *gps_, tab_x.front(), tabs_end, tab_y);
    if (!frame) frame = find_ascii_panel_frame(tab_x.front(), tabs_end,
        tab_y, gps_->dimx, gps_->dimy, [&](int x, int y) {
            return static_cast<unsigned char>(context[y][x]);
        });
    // The character pane also exists without a discoverable border during
    // embark. Its first two tab centres supply the same left limit as the
    // ranked-skill layout; adjacent citizens remain outside this column.
    const int first_centre = 2 * tab_x[0] + static_cast<int>(tabs[0].size());
    const int second_centre = 2 * tab_x[1] + static_cast<int>(tabs[1].size());
    const int left = frame ? frame->left + 1
        : std::clamp((3 * first_centre - second_centre) / 4, 0, gps_->dimx);
    const int right = frame ? frame->right : gps_->dimx;
    const int bottom = frame ? frame->bottom : gps_->dimy;
    if (left >= right) return;

    constexpr uint32_t top_half = 1u << 3;
    constexpr uint32_t bottom_half = 1u << 4;
    constexpr uint32_t half_mask = top_half | bottom_half;
    struct Field {
        int x = 0;
        int y = 0;
        int end = 0;
        int height = 1;
        uint32_t half = 0;
        std::string source;
    };
    // The title producer owns one complete string even when it contains
    // punctuation or multiple spaces that usually separate screen fields.
    struct NativeTitle {
        LogicalTextField visible;
        std::string complete;
    };
    std::vector<std::optional<NativeTitle>> native_titles(bottom);
#ifdef _WIN32
    const auto title_draw = native_knowledge_title_sites().draw_return;
    for (bool top : {false, true}) {
        for (const auto &draw : captured_native_drawn_text_view(top)) {
            if (!title_draw || draw.native_caller != title_draw || draw.source.empty() ||
                    draw.draw_grid != (top ? gps_->screen_top : gps_->screen) ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.y <= tab_y || draw.y >= bottom || draw.x < left || draw.x >= right ||
                    draw.source.size() > static_cast<size_t>(right - draw.x) ||
                    context[draw.y].compare(draw.x, draw.source.size(), draw.source) != 0) continue;
            native_titles[draw.y] = NativeTitle{{draw.x,
                draw.x + static_cast<int>(draw.source.size()), draw.source}, draw.complete_source};
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const size_t ink = draw.source.find_first_not_of(' ');
            if (!flags || ink == std::string::npos) continue;
            const size_t cell = (static_cast<size_t>(draw.x) + ink) * gps_->dimy;
            const auto half = flags[cell + draw.y] & half_mask;
            if (half != top_half && half != bottom_half) continue;
            const int other = draw.y + (half == top_half ? 1 : -1);
            if (other > tab_y && other < bottom &&
                    (flags[cell + other] & half_mask) == (half_mask ^ half) &&
                    context[other].compare(draw.x, draw.source.size(), draw.source) == 0)
                native_titles[other] = native_titles[draw.y];
        }
    }
#endif
    const auto physical_field = [&](int y) -> std::optional<Field> {
        if (y <= tab_y || y >= bottom) return std::nullopt;
        // View buttons and the scrollbar share the title's physical row.
        // Keep the first complete text field inside this pane, stopping at
        // native frame bytes or padded field boundaries. Single spaces stay
        // inside the title, including every BOOK_ART fixed phrase.
        const auto &native = native_titles[y];
        std::vector<LogicalTextField> fields;
        if (!native) fields = split_text_fields(context[y]);
        const LogicalTextField *text = native ? &native->visible : nullptr;
        for (const auto &field : fields) {
            if (field.start < left || field.end > right ||
                (!contains_cjk_utf8(field.text) &&
                 !std::any_of(field.text.begin(), field.text.end(), [](unsigned char ch) {
                    return ascii_word_byte(ch) || is_cp437_latin_letter_byte(ch);
                })) ||
                std::any_of(field.text.begin(), field.text.end(), [](unsigned char ch) {
                    return ch < 0x20;
                }) || native_button_text_rect(*gps_, field.start, field.end, y)) continue;
            bool action = false;
            for (int x = field.start; x < field.end && !action; ++x)
                action = native_item_action_at(*gps_, x, y);
            if (action) continue;
            text = &field;
            break;
        }
        if (!text) return std::nullopt;
        const int x = text->start, end = text->end;
        uint32_t half = UINT32_MAX;
        for (int column = x; column < end; ++column) {
            const unsigned char ch = static_cast<unsigned char>(context[y][column]);
            if (is_cp437_box_separator(context[y], column) || ch < 0x20)
                return std::nullopt;
            if (ch == ' ') continue;
            bool top = false;
            const auto *cell = cell_at(column, y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const uint32_t current = flags
                ? flags[static_cast<size_t>(column) * gps_->dimy + y] & half_mask : 0;
            if (!cell || current == half_mask ||
                (half != UINT32_MAX && half != current)) return std::nullopt;
            half = current;
        }
        if (half == UINT32_MAX) return std::nullopt;
        return Field{x, y, end, 1, half, context[y].substr(x, end - x)};
    };
    const auto logical_field = [&](int y) -> std::optional<Field> {
        auto field = physical_field(y);
        if (!field || field->half == 0) return field;
        const int companion_y = y + (field->half == top_half ? 1 : -1);
        auto companion = physical_field(companion_y);
        if (!companion || companion->x != field->x ||
            companion->end != field->end || companion->source != field->source ||
            companion->half != (field->half == top_half ? bottom_half : top_half))
            return std::nullopt;
        if (field->half == bottom_half) field = std::move(companion);
        field->height = 2;
        return field;
    };

    const auto captures = captured_clipped_captions();
    for (int y = tab_y + 1; y < bottom; ++y) {
        const auto kind = logical_field(y);
        if (!kind || kind->y != y || !is_character_knowledge_kind(kind->source))
            continue;
        const auto title = logical_field(kind->y - 1);
        if (!title || title->y + title->height != kind->y) continue;
        // Reviewed knowledge subjects may contain punctuation. Preserve their
        // complete literals before resolving generated BOOK_ART/name grammar.
        std::string complete = title->source;
        const auto &draw = native_titles[title->y];
        if (draw && !draw->complete.empty() && draw->complete != title->source) {
            complete = draw->complete;
        } else if (complete.size() <= 3 || complete.ends_with("...")) {
            std::optional<std::string> captured;
            bool ambiguous = false;
            for (const auto &capture : captures) {
                if (capture.x != title->x || capture.y < title->y ||
                    capture.y >= title->y + title->height ||
                    capture.visible != title->source || capture.complete.empty()) continue;
                if (captured && *captured != capture.complete) {
                    ambiguous = true;
                    break;
                }
                captured = capture.complete;
            }
            if (captured && !ambiguous) complete = *captured;
        }
        // Research activities and this list use the same 294 short topics.
        // The list capitalizes the first letter. Bind the folded full title
        // before any global literal or generated-name fallback can turn
        // Biography/Diseases into a name, or Rainfall into a compound surname.
        const bool topic_kind = is_character_knowledge_discipline(kind->source);
        auto title_target = topic_kind
            ? RULESETS.compose_bound_rule("::activities::topic", lower(complete))
            : translate_creative_title(complete);
        const bool subject_kind = is_character_knowledge_subject(kind->source);
        auto kind_target = subject_kind ? exact_literal_translation(kind->source)
            : translate_legends_description_term(lower(kind->source));
        if (!kind_target) kind_target = subject_kind
            ? translate_legends_description_term(lower(kind->source))
            : exact_literal_translation(kind->source);
        if (!kind_target && topic_kind)
            kind_target = translate_legends_term(lower(kind->source));
        const bool title_unknown = !title_target || title_target->empty();
        const bool kind_unknown = !kind_target || kind_target->empty();
        if (title_unknown) title_target = native_text_to_utf8(complete);
        if (kind_unknown) kind_target = cp437_to_utf8(kind->source);
        const int column = std::min(title->x, kind->x);
        const auto claim = [&](const Field &field, int rule,
                const std::string &target, bool unknown) {
            bool representative = false;
            for (int row_y = field.y; row_y < field.y + field.height; ++row_y) {
                std::string &row = rows[static_cast<size_t>(row_y)];
                if (field.end > static_cast<int>(row.size()) ||
                    row.compare(field.x, field.source.size(), field.source) != 0) continue;
                // A matching text byte in a hidden layer is insufficient:
                // every visible glyph must belong to this actual draw layer.
                bool owns_layer = true;
                if (screen_override) {
                    for (int x = field.x; x < field.end; ++x) {
                        if (field.source[static_cast<size_t>(x - field.x)] == ' ') continue;
                        bool top = false;
                        (void)cell_at(x, row_y, &top);
                        if (screen_override != (top ? gps_->screen_top : gps_->screen)) {
                            owns_layer = false;
                            break;
                        }
                    }
                }
                if (!owns_layer) continue;
                std::fill_n(row.begin() + field.x, field.source.size(), ' ');
                if (only_y >= 0 && only_y != row_y) continue;
                Match match{field.x, row_y, field.end - field.x,
                    rule, target, field.source};
                match.layout_x = column;
                match.layout_length = right - column;
                match.layout_clip_right = right;
                match.layout_left = true;
                match.native_hover_untranslated = unknown;
                if (field.height == 2) {
                    match.native_split_text = true;
                    match.native_split_top_y = field.y;
                    match.native_split_duplicate = representative;
                    match.layout_y = field.y;
                    match.layout_pixel_y = gps_->tile_pixel_y / 2;
                    if (representative) match.target.clear();
                }
                representative = true;
                std::erase_if(matches, [&](const Match &part) {
                    return part.y == row_y && part.x < field.end &&
                        part.x + part.length > field.x;
                });
                matches.push_back(std::move(match));
            }
        };
        claim(*title, kCharacterKnowledgeTitleRule, *title_target, title_unknown);
        claim(*kind, kCharacterKnowledgeKindRule, *kind_target, kind_unknown);
        y += kind->height - 1;
    }
}
