// Classic map authorization and the later roster reader ask the same grammar
// about complete skills and identities. Reuse only those translation results
// within one matching pass; every reader still proves its current source bytes,
// layer, portrait and column bounds independently.
class FortressRosterTranslationScope {
    struct View {
        const graphicst *graphics;
        const unsigned char *screen, *screen_top;
        int dimx, dimy;
        bool top_in_use;
        uint64_t read_revision, capture_epoch, identity_revision;
        bool operator==(const View &) const = default;
    };
    const graphicst *graphics_;
    FortressRosterTranslationScope *previous_;
    bool enabled_ = false;
    std::optional<View> view_;
    std::unordered_map<std::string, std::optional<std::vector<RatedSkillSpan>>> skills_;
    std::unordered_map<std::string, std::optional<std::string>> text_;
    // The stack owns all nontrivial storage, so this TLS pointer cannot pin
    // the reloadable core after a completed match pass.
    inline static thread_local FortressRosterTranslationScope *active_ = nullptr;

    View current_view() const {
        return {graphics_, graphics_->screen, graphics_->screen_top,
            graphics_->dimx, graphics_->dimy, bool(graphics_->top_in_use),
            NativeUiReadScope::read_revision,
            g_embark_item_capture_epoch.load(std::memory_order_acquire),
            g_native_unit_identity_revision.load(std::memory_order_acquire)};
    }
    View refresh() {
        const View current = current_view();
        if (!view_ || *view_ != current) {
            skills_.clear();
            text_.clear();
            view_ = current;
        }
        return current;
    }
public:
    enum class TextKind : char {
        Profession, TypedProfession, TypedIdentity, ProceduralIdentity
    };
    explicit FortressRosterTranslationScope(const graphicst *graphics)
        : graphics_(graphics), previous_(active_) {
        enabled_ = graphics && native_ui_classic().value_or(false);
        active_ = this;
    }
    ~FortressRosterTranslationScope() { active_ = previous_; }
    FortressRosterTranslationScope(const FortressRosterTranslationScope &) = delete;
    FortressRosterTranslationScope &operator=(const FortressRosterTranslationScope &) = delete;

    template <typename Translate>
    static std::optional<std::vector<RatedSkillSpan>> skills(
            std::string_view source, Translate &&translate) {
        auto *scope = active_;
        // Budgeted native callbacks retain their own work accounting and must
        // not publish a deadline-dependent miss into this pure-result cache.
        if (!scope || !scope->enabled_ || active_translation_work) return translate();
        const View view = scope->refresh();
        const std::string key(source);
        if (const auto found = scope->skills_.find(key); found != scope->skills_.end())
            return found->second;
        auto result = translate();
        if (scope == active_ && view == scope->current_view())
            scope->skills_.emplace(key, result);
        return result;
    }
    template <typename Translate>
    static std::optional<std::string> text(TextKind kind,
            std::string_view source, Translate &&translate) {
        auto *scope = active_;
        if (!scope || !scope->enabled_ || active_translation_work) return translate();
        const View view = scope->refresh();
        // The view's registry revision includes complete and nested authored
        // name bindings. Separate the native formatter's rendering context
        // too; no spelling guess or cached Match owner supplies this key.
        std::string key(1, static_cast<char>(kind));
        key.push_back(native_unit_identity_rendering() ? '\1' : '\0');
        const size_t length = source.size();
        key.append(reinterpret_cast<const char *>(&length), sizeof(length));
        key.append(source);
        if (const auto found = scope->text_.find(key); found != scope->text_.end())
            return found->second;
        auto result = translate();
        if (scope == active_ && view == scope->current_view())
            scope->text_.emplace(std::move(key), result);
        return result;
    }
};

// The fortress-wide resident table uses its complete four-tab band.
// Work-detail captions retain their own typed widget/object ownership.
struct FortressLaborBand {
    int tabs_y = -1;
    int standing_tabs_y = -1;
    int header_y = -1;
    int name_x = -1;
};

static std::optional<FortressLaborBand> fortress_labor_band(
        const std::vector<std::string> &rows) {
    FortressLaborBand band;
    for (size_t y = 0; y < rows.size(); ++y) {
        const std::string row = lower(rows[y]);
        const auto work = row.find("work details"), standing = row.find("standing orders");
        const auto kitchen = row.find("kitchen"), stone = row.find("stone use");
        if (work != std::string::npos && standing != std::string::npos &&
            kitchen != std::string::npos && stone != std::string::npos &&
            work < standing && standing < kitchen && kitchen < stone) {
            band.tabs_y = static_cast<int>(y);
            break;
        }
    }
    if (band.tabs_y < 0) return std::nullopt;
    for (int y = band.tabs_y + 1; y < static_cast<int>(rows.size()); ++y) {
        // Standing orders has its own complete tab band, not the resident
        // table's Name/Cat/Prof header. Do not require a roster on this page.
        const std::string row = lower(rows[y]);
        size_t cursor = 0;
        bool standing_tabs = true;
        for (const std::string_view tab : {"workshops", "hauling", "refuse",
                "forbidding", "petitions", "chores", "other"}) {
            const size_t at = row.find(tab, cursor);
            if (at == std::string::npos) { standing_tabs = false; break; }
            cursor = at + tab.size();
        }
        if (standing_tabs) {
            band.standing_tabs_y = y;
            return band;
        }
        // Classic sorting arrows are separate fields between these labels.
        // Ignore only their glyphs here; keep the native column positions.
        std::string heading = rows[y];
        for (char &ch : heading)
            if (ch == '\x1e' || ch == '\x1f') ch = ' ';
        const auto fields = split_text_fields(heading);
        for (size_t i = 0; i + 2 < fields.size(); ++i) {
            if (fields[i].text == "Name" && fields[i + 1].text == "Cat" &&
                fields[i + 2].text == "Prof") {
                band.header_y = y;
                band.name_x = fields[i].start;
                return band;
            }
        }
    }
    // Cooking and Stone use retain the same parent tabs without a roster
    // header or a standing-order subtab band.
    return band;
}

// Standing-order chore captions join a rectangle's left cap and fill
// directly to a separate worker toggle. Its left cap replaces the caption's
// ordinary right cap, so a closed rectangle alone cannot own this text.
// Called only inside the complete standing-order tab band; prove both the
// caption frame and all twelve cells of the adjoining toggle in either mode.
static std::optional<std::pair<int, int>> fortress_standing_order_text_span(
        const graphicst &gps, int first, int last, int y) {
    if (const auto button = native_button_text_span(gps, first, last, y))
        return button;
    const bool classic = native_ui_classic().value_or(false);
    const auto &buttons = native_texture_button_main(gps);
    const int32_t (*skins[])[3] = {
        native_texture_button_rectangle(gps),
        native_texture_button_rectangle_selected(gps),
        native_texture_button_rectangle_light(gps),
        native_texture_button_rectangle_dark(gps),
    };
    for (const auto *skin : skins) {
        for (int orientation = 0; orientation < 3; ++orientation) {
            // 53.16 LABOR_WORKER_ASSIGNED / LABOR_WORKER_UNASSIGNED.
            for (const int kind : {359, 360}) {
                std::array<int32_t, 9> joined;
                for (int row = 0; row < 3; ++row) {
                    joined[row * 3] = orientation == 1 ? skin[row][0] : skin[0][row];
                    joined[row * 3 + 1] = orientation == 1 ? skin[row][1]
                        : skin[orientation == 2 ? 2 : 1][row];
                    joined[row * 3 + 2] = buttons[kind][0][row];
                }
                const auto caption = native_nineslice_button_text_rect(
                    gps, first, last, y, joined, classic);
                if (!caption) continue;
                const int toggle_x = caption->x + caption->w;
                if (native_main_button_skin_at(gps, toggle_x, caption->y + 1,
                        buttons[kind], classic))
                    return {{caption->x, toggle_x}};
            }
        }
    }
    return std::nullopt;
}

// The character's work-detail row is not a plain picture button. Native
// 53.16 PE 0x17244b..0x172c62 first paints a five-cell picture box joined to
// rectangle fill, then overwrites its first four cells with WORK_DETAIL_*
// artwork and the final four fill cells with a worker toggle. Both original
// right caps survive, producing the two ']' seams visible in classic mode.
// Read that complete composite, including all four assignment states, rather
// than requiring either overwritten frame to remain a closed rectangle.
static std::optional<std::pair<int, int>> character_work_detail_text_span(
        const graphicst &gps, int first, int last, int y) {
    if (first < 6 || last <= first || last > gps.dimx ||
        y < 1 || y + 1 >= gps.dimy) return std::nullopt;
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto &picture = native_texture_button_picture_box(gps);
    const auto &rectangle = native_texture_button_rectangle(gps);
    const auto column_at = [&](int x, const int32_t (&skin)[3]) {
        for (int row = 0; row < 3; ++row)
            if (!native_ui_skin_at(gps, x, y + row - 1, skin[row], classic))
                return false;
        return true;
    };
    for (int icon = first - 6; icon >= 0; --icon) {
        if (!column_at(icon + 4, picture[2])) continue;
        bool work_icon = false;
        // WORK_DETAIL_MINERS through WORK_DETAIL_CUSTOM_8. The complete
        // current icon establishes identity; its letters are never prose.
        for (int kind = 364; kind <= 382 && !work_icon; ++kind)
            work_icon = native_main_button_at(gps, icon, y, kind);
        if (!work_icon) continue;
        const int fill_left = icon + 5;
        const int text_left = icon + 6;
        for (int toggle = std::max(last, text_left + 1); toggle + 4 < gps.dimx; ++toggle) {
            if (!column_at(toggle + 4, rectangle[2])) continue;
            bool assigned = false;
            // ASSIGNED, UNASSIGNED, ASSIGNED_EVERYBODY, ASSIGNED_NOBODY.
            for (int kind = 359; kind <= 362 && !assigned; ++kind)
                assigned = native_main_button_at(gps, toggle, y, kind);
            if (!assigned) continue;
            std::string caption(toggle - fill_left, ' ');
            for (int x = fill_left; x < toggle; ++x) {
                const size_t at = static_cast<size_t>(x) * gps.dimy + y;
                const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
                if (screen) caption[x - fill_left] = screen[at * 8];
            }
            bool complete = true;
            for (int x = fill_left; x < toggle && complete; ++x) {
                complete = native_ui_skin_at(gps, x, y - 1, rectangle[1][0], classic) &&
                    native_ui_skin_at(gps, x, y, rectangle[1][1], classic, true,
                        false, false, !is_cp437_box_separator(caption, x - fill_left)) &&
                    native_ui_skin_at(gps, x, y + 1, rectangle[1][2], classic);
            }
            if (complete) return {{text_left, toggle}};
        }
    }
    return std::nullopt;
}

void Overlay::append_character_work_detail_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || !native_character_translation_active(gps_) ||
            gps_->dimx <= 0 || gps_->dimy <= 0 ||
            rows.size() != static_cast<size_t>(gps_->dimy)) return;
#ifdef _WIN32
    const uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return;
    const uintptr_t details_address = native_pe_address(base, 0x2399980);
#else
    const uintptr_t base = native_history_profile_base();
    if (!base) return;
    const uintptr_t details_address = native_history_named_global("plotinfost", "labor_info.work_details", 24);
#endif
    std::array<uintptr_t, 3> details{};
    if (!details_address || !native_history_copy_bytes(details_address,
            details.data(), sizeof(details)) || !details[0] ||
            details[0] > details[1] || details[1] > details[2] ||
            (details[1] - details[0]) % sizeof(uintptr_t) ||
            details[1] - details[0] > 8192 * sizeof(uintptr_t)) return;
    std::vector<uintptr_t> members((details[1] - details[0]) / sizeof(uintptr_t));
    if (members.empty() || !native_history_copy_bytes(details[0], members.data(),
            details[1] - details[0])) return;
    std::unordered_map<uintptr_t, uintptr_t> names;
    for (const uintptr_t detail : members) {
        if (!detail) continue;
        const uintptr_t name = native_history_object_member(detail, "work_detail", "name", 32);
        if (name) names.emplace(name, detail);
    }
    // PE 53.16 0x17276c reads this vector's actual work_detail, and 0x172a2b
    // passes its name member directly to addst. Keep that complete field
    // ahead of identity/word matching; spelling alone never identifies a
    // default detail or authorizes translating a player-authored name.
    for (bool top_layer : {false, true}) {
        const auto *grid = top_layer ? gps_->screen_top : gps_->screen;
        const auto *flags = top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        for (const auto &draw : captured_native_drawn_text_view(top_layer)) {
            if (!draw.caption_source || draw.draw_grid != grid ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.source.empty() || draw.x < 0 || draw.x >= gps_->dimx ||
                    draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;
            const auto found = names.find(draw.address);
            if (found == names.end()) continue;
            uint32_t detail_flags = 0;
            const uintptr_t flags_address = native_history_object_member(
                found->second, "work_detail", "flags", 4);
            std::string source;
            if (!flags_address || !native_history_copy_bytes(flags_address,
                    &detail_flags, sizeof(detail_flags)) ||
                    !native_history_copy_string(draw.address, source) || source.empty() ||
                    source.size() > 4096 || source.find('\0') != std::string::npos ||
                    source != (draw.complete_source.empty() ? draw.source : draw.complete_source)) continue;
            const bool authored = (detail_flags & 1) == 0;
            const auto translated = authored ? std::optional<std::string>{}
                : exact_literal_translation(source);
            const std::string target = translated ? *translated : native_text_to_utf8(source);
            if (target.empty()) continue;
            constexpr uint32_t upper = 1u << 3, lower_half = 1u << 4;
            const uint32_t half = flags
                ? flags[static_cast<size_t>(draw.x) * gps_->dimy + draw.y] & (upper | lower_half)
                : 0;
            const int mate = half == upper ? draw.y + 1 : half == lower_half ? draw.y - 1 : -1;
            int middle = draw.y;
            const int end = draw.x + static_cast<int>(draw.source.size());
            auto span = character_work_detail_text_span(*gps_, draw.x, end, middle);
            if (!span && mate >= 0 && mate < gps_->dimy) {
                middle = mate;
                span = character_work_detail_text_span(*gps_, draw.x, end, middle);
            }
            if (!span || draw.x < span->first || end > span->second) continue;
            for (const int y : {draw.y, mate}) {
                if (y < 0 || y >= gps_->dimy || (only_y >= 0 && only_y != y) ||
                        rows[y].compare(draw.x, draw.source.size(), draw.source) != 0) continue;
                if (y == mate && (!flags ||
                        (flags[static_cast<size_t>(draw.x) * gps_->dimy + y] & (upper | lower_half)) !=
                            (half == upper ? lower_half : upper))) continue;
                bool current = true;
                for (int x = draw.x; x < end; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, y, &top);
                    if (!cell || top != top_layer ||
                            (cell[0] ? cell[0] : ' ') !=
                                static_cast<unsigned char>(draw.source[x - draw.x])) {
                        current = false;
                        break;
                    }
                }
                if (!current) continue;
                std::erase_if(matches, [&](const Match &match) {
                    return match.y == y && match.x < end && draw.x < match.x + match.length;
                });
                Match match{draw.x, y, end - draw.x, kFortressLaborCaptionRule, target, draw.source};
                match.native_picture_caption_box = SDL_Rect{
                    span->first, middle - 1, span->second - span->first, 3};
                match.native_hover_untranslated = !authored && !translated;
                match.layout_x = span->first;
                match.layout_length = span->second - span->first;
                match.layout_clip_right = span->second;
                match.layout_left = true;
                match.layout_ellipsize = true;
                match.layout_prepared = true;
                match.layout_line_height_pixels = gps_->tile_pixel_y;
                matches.push_back(std::move(match));
                std::fill(rows[y].begin() + draw.x, rows[y].begin() + end, ' ');
            }
        }
    }
}

// Classic labor records join the picture directly to rectangle fill and
// finish at a unit control. A wrapped title can replace the lower edge, so
// neither a closed rectangle nor its raw three rows describe the caption.
// The complete Labor band, portrait and control establish this exception.
static std::optional<int32_t> fortress_labor_classic_caption_skin(
        const graphicst &gps, const std::vector<std::string> &rows,
        int left, int right, int middle) {
    if (left < 0 || right <= left || right > gps.dimx ||
        middle < 1 || middle + 1 >= gps.dimy) return std::nullopt;
    const int32_t (*skins[])[3] = {
        native_texture_button_rectangle(gps),
        native_texture_button_rectangle_selected(gps),
        native_texture_button_rectangle_light(gps),
        native_texture_button_rectangle_dark(gps),
    };
    for (const auto *skin : skins) {
        for (int orientation = 0; orientation < 3; ++orientation) {
            const auto fill = [&](int row) {
                return orientation == 1 ? skin[row][1]
                    : skin[orientation == 2 ? 2 : 1][row];
            };
            if ((fill(1) & 0xff) != ' ') continue;
            bool complete = true;
            for (int x = left; x < right && complete; ++x)
                complete = native_ui_skin_at(gps, x, middle - 1, fill(0), true) &&
                    native_ui_skin_at(gps, x, middle, fill(1), true, true,
                        false, false, !is_cp437_box_separator(rows[middle], x)) &&
                    (native_ui_skin_at(gps, x, middle + 1, fill(2), true) ||
                     native_ui_skin_at(gps, x, middle + 1, fill(1), true, true,
                         false, false, !is_cp437_box_separator(rows[middle + 1], x)));
            if (complete) return fill(2);
        }
    }
    return std::nullopt;
}

void Overlay::append_fortress_labor_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    const auto rated_skills = [&](std::string_view source) {
        return FortressRosterTranslationScope::skills(source,
            [&] { return translate_rated_skill_list(source); });
    };
    const auto procedural_identity = [&](const std::string &source) {
        return FortressRosterTranslationScope::text(
            FortressRosterTranslationScope::TextKind::ProceduralIdentity, source,
            [&] { return translate_procedural_fragment(source); });
    };
    const bool classic = native_ui_classic().value_or(false);
    const auto captures = captured_clipped_captions();
    const auto draws = captured_native_drawn_text_view();
    const auto top_draws = captured_native_drawn_text_view(true);
    struct CaptionRow {
        NativeFortressLaborCaption caption;
        bool top = false;
        int y = 0, first = 0, end = 0;
        std::vector<std::pair<int, int>> ink;
    };
    std::vector<CaptionRow> caption_rows;
    const auto preserve_authored_spans = [&](const NativeDrawnTextRow &draw, int first, int end) {
        if (!draw.fortress_labor_caption || !draw.fortress_labor_caption->authored ||
                draw.y < 0 || draw.y >= gps_->dimy) return;
        const auto exposed = [&](int x) {
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            return cell && top == draw.top_layer &&
                (cell[0] ? cell[0] : ' ') == static_cast<unsigned char>(draw.source[x - draw.x]);
        };
        for (int x = first; x < end;) {
            while (x < end && !exposed(x)) ++x;
            const int start = x;
            while (x < end && exposed(x)) ++x;
            if (start == x) continue;
            std::erase_if(matches, [&](const Match &match) {
                return match.y == draw.y && match.x < x && start < match.x + match.length;
            });
            // These are surviving native glyphs beside an occluder, not a
            // complete field to redraw. Reserve their matching scope without
            // creating a source-mask Match that would erase the English ink.
            for (int cell = start; cell < x; ++cell)
                if (rows[draw.y][cell] == draw.source[cell - draw.x]) rows[draw.y][cell] = ' ';
        }
    };
    for (const auto *batch : {&draws, &top_draws}) {
        for (const auto &draw : *batch) {
            if (!draw.fortress_labor_caption || draw.source.empty() ||
                    draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 ||
                    draw.y >= gps_->dimy || draw.source.size() > 4096) continue;
            const auto &caption = *draw.fortress_labor_caption;
            const auto &box = caption.box;
            if (!caption.owner || caption.source.empty() || box.w <= 0 || box.h <= 0 ||
                    draw.y < box.y || draw.y >= box.y + box.h) continue;
            // addst keeps the complete input string even when the widget's
            // native clip stops its suffix. Only the exposed intersection
            // owns grid bytes; requiring the whole input to fit rejected the
            // entire typed label and handed it back to word-level matching.
            int first = std::max(draw.x, std::max(0, box.x));
            int end = std::min({gps_->dimx, box.x + box.w,
                draw.x + static_cast<int>(draw.source.size())});
            if (first >= end) continue;
            bool current = true;
            for (int x = first; x < end; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, draw.y, &top);
                if (!cell || top != draw.top_layer ||
                        (cell[0] ? cell[0] : ' ') != static_cast<unsigned char>(draw.source[x - draw.x])) {
                    current = false;
                    break;
                }
            }
            if (!current) {
                preserve_authored_spans(draw, first, end);
                continue;
            }
            while (first < end && draw.source[first - draw.x] == ' ') ++first;
            while (end > first && draw.source[end - draw.x - 1] == ' ') --end;
            if (first >= end) continue;
            const auto retain_row = [&](int y) {
                for (int x = first; x < end; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, y, &top);
                    if (!cell || top != draw.top_layer ||
                        (cell[0] ? cell[0] : ' ') != static_cast<unsigned char>(draw.source[x - draw.x]))
                        return;
                }
                auto found = std::find_if(caption_rows.begin(), caption_rows.end(),
                    [&](const CaptionRow &row) {
                        return row.caption.owner == caption.owner && row.y == y &&
                            row.top == draw.top_layer && row.caption.kind == caption.kind &&
                            row.caption.source == caption.source;
                    });
                if (found == caption_rows.end()) {
                    caption_rows.push_back({caption, draw.top_layer, y, first, end, {{first, end}}});
                } else {
                    found->first = std::min(found->first, first);
                    found->end = std::max(found->end, end);
                    found->ink.push_back({first, end});
                }
            };
            retain_row(draw.y);
            // One addst call can paint the two logical font halves while
            // capture records only its initial row. Claim the proven mate as
            // the same field before generic words can own its other half.
            // The formatter's semantic source never supplies extra mask ink.
            const auto *flags = draw.top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            constexpr uint32_t upper = 1u << 3, lower_half = 1u << 4;
            const uint32_t half = flags ? flags[static_cast<size_t>(first) * gps_->dimy + draw.y] &
                (upper | lower_half) : 0;
            const int mate = half == upper ? draw.y + 1 : half == lower_half ? draw.y - 1 : -1;
            if (mate >= 0 && mate < gps_->dimy && flags &&
                (flags[static_cast<size_t>(first) * gps_->dimy + mate] & (upper | lower_half)) ==
                    (half == upper ? lower_half : upper)) retain_row(mate);
        }
    }
    for (const auto &row : caption_rows) {
        const auto &caption = row.caption;
        std::string physical(row.end - row.first, ' ');
        bool current = true;
        for (int x = row.first; x < row.end; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, row.y, &top);
            const unsigned char ch = cell && cell[0] ? cell[0] : ' ';
            const bool owned = std::any_of(row.ink.begin(), row.ink.end(),
                [&](const auto &span) { return x >= span.first && x < span.second; });
            if (!cell || top != row.top || (!owned && ch != ' ')) {
                current = false;
                break;
            }
            physical[x - row.first] = static_cast<char>(ch);
        }
        if (!current) continue;
        // Ownership comes from the live Text/widget tree and work_detail
        // flags. An editable name remains authored even when it spells a
        // known labor or the game's initial "Custom Detail N" value.
        std::optional<std::string> target;
        const auto literal_target = [&](const std::string &source) {
            if (caption.kind == NativeFortressLaborKind::Label)
                if (const auto labor = exact_literal_translation("Labor caption: " + source))
                    return labor;
            return exact_literal_translation(source);
        };
        if (!caption.authored) target = literal_target(caption.source);
        if (!target && !caption.authored) {
            std::istringstream words(caption.source);
            std::string normalized;
            for (std::string word; words >> word;) {
                if (!normalized.empty()) normalized += ' ';
                normalized += word;
            }
            target = literal_target(normalized);
        }
        const bool untranslated = !target;
        if (!target) target = native_text_to_utf8(caption.source);
        if (target->empty()) continue;
        SDL_Rect box = caption.box;
        box.x = std::max(0, box.x);
        box.w = std::min(gps_->dimx, caption.box.x + caption.box.w) - box.x;
        if (box.w <= 0) continue;
        // Earlier generic words never own part of an authored field. Raw
        // layer scans project this typed source only onto their own bytes;
        // the final composite carries the complete translated/display name.
        std::erase_if(matches, [&](const Match &match) {
            return match.y == row.y && match.x < row.end &&
                row.first < match.x + match.length;
        });
        if (only_y < 0 || only_y == row.y) {
            if (only_y < 0 || rows[row.y].compare(row.first, physical.size(), physical) == 0) {
                // The composed grid above proves every current source byte.
                // An earlier reader may already have reserved/blanked the
                // local matching buffer; its overlap was removed, so retain
                // the typed field's complete display target in this pass.
                Match match{row.first, row.y, row.end - row.first,
                    kFortressLaborCaptionRule, *target, physical};
                match.native_picture_caption_box = box;
                match.layout_x = box.x;
                match.layout_length = box.w;
                match.layout_clip_right = box.x + box.w;
                match.native_labor_control = caption.kind == NativeFortressLaborKind::Control;
                match.layout_left = !match.native_labor_control;
                match.layout_ellipsize = caption.kind == NativeFortressLaborKind::DetailName;
                match.native_hover_untranslated = untranslated && !caption.authored;
                match.layout_prepared = true;
                match.layout_line_height_pixels = gps_->tile_pixel_y;
                matches.push_back(std::move(match));
            } else {
                for (int offset = 0; offset < static_cast<int>(physical.size());) {
                    while (offset < static_cast<int>(physical.size()) &&
                        rows[row.y][row.first + offset] != physical[offset]) ++offset;
                    const int start = offset;
                    while (offset < static_cast<int>(physical.size()) &&
                        rows[row.y][row.first + offset] == physical[offset]) ++offset;
                    if (start < offset) matches.push_back({row.first + start, row.y,
                        offset - start, kFortressLaborCaptionRule, {}, physical.substr(start, offset - start)});
                }
            }
        }
        if (only_y < 0) {
            std::fill(rows[row.y].begin() + row.first, rows[row.y].begin() + row.end, ' ');
        } else {
            for (int offset = 0; offset < static_cast<int>(physical.size()); ++offset)
                if (rows[row.y][row.first + offset] == physical[offset])
                    rows[row.y][row.first + offset] = ' ';
        }
    }
    const auto band = fortress_labor_band(rows);
    if (!band || (band->header_y < 0 && band->standing_tabs_y < 0)) return;
    if (band->standing_tabs_y >= 0) {
        for (int y = band->standing_tabs_y + 1; y < gps_->dimy; ++y) {
            if (only_y >= 0 && y != only_y) continue;
            for (int x = 0; x < gps_->dimx; ++x) {
                if (rows[y][x] == ' ') continue;
                const auto button = fortress_standing_order_text_span(*gps_, x, x + 1, y);
                if (!button) continue;
                int first = button->first, end = button->second;
                while (first < end && rows[y][first] == ' ') ++first;
                while (end > first && rows[y][end - 1] == ' ') --end;
                if (first == end) continue;
                bool current = true;
                for (int cell = first; cell < end; ++cell) {
                    const auto ch = visible_char_at(cell, y);
                    if ((ch ? ch : ' ') != static_cast<unsigned char>(rows[y][cell]) ||
                        (ch && ch < ' ') || is_cp437_box_separator(rows[y], cell)) {
                        current = false;
                        break;
                    }
                }
                x = button->second;
                if (!current) continue;
                const std::string visible = rows[y].substr(first, end - first);
                std::string complete = visible;
                for (const auto &capture : captures)
                    if (capture.x == first && capture.y == y && capture.visible == visible) {
                        complete = capture.complete;
                        break;
                    }
                // The native control owns the spaces between its words. Only
                // collapse them inside this closed button, never across tabs
                // or adjacent controls; translate from the shared dictionary.
                std::istringstream words(complete);
                std::string source;
                for (std::string word; words >> word;) {
                    if (!source.empty()) source += ' ';
                    source += word;
                }
                const auto target = exact_literal_translation(source);
                if (!target || !contains_cjk_utf8(*target)) continue;
                Match match{first, y, end - first, kFortressStandingOrderRule,
                    *target, visible};
                match.layout_x = button->first;
                match.layout_length = button->second - button->first;
                match.layout_clip_right = button->second;
                match.layout_left = true;
                matches.push_back(std::move(match));
                std::fill(rows[y].begin() + first, rows[y].begin() + end, ' ');
            }
        }
        return;
    }
    struct Field {
        int x, y, end;
        std::string source;
        std::string normalized;
        std::string target;
        bool skill = false;
        bool duplicate = false;
        std::optional<std::string> identity_target{};
    };
    struct Resident {
        int left, right, middle;
        std::vector<Field> fields;
    };
    std::vector<Resident> residents;
    for (int y = band->header_y + 1; y + 1 < gps_->dimy; ++y) {
        // The portrait middle strip establishes one three-row resident record.
        // Do not infer names from a handful of known dwarves or professions.
        int picture = -1, left = -1;
        for (int x = std::max(0, band->name_x - 12); x < band->name_x; ++x) {
            const int right = native_picture_box_right(*gps_, x, y);
            if (right > x && right <= band->name_x) { picture = x; left = right; }
        }
        if (picture < 0) continue;
        // The complete portrait and worker-policy control own this record
        // in both modes. The control can replace the caption's right cap,
        // and a wrapped profession can replace its bottom edge; neither a
        // closed caption rectangle nor the outer fortress frame is required.
        int right = -1;
        // 53.16 InterfaceButtonMainType: WORKER_ONLY_DO_ASSIGNED_JOBS
        // and WORKER_DO_ANY_AVAILABLE_JOB are the same four-cell slot.
        for (int x = left; x + 4 <= gps_->dimx; ++x) {
            if (!native_main_button_at(*gps_, x, y, 357) &&
                !native_main_button_at(*gps_, x, y, 358)) continue;
            if (!classic || fortress_labor_classic_caption_skin(*gps_, rows, left, x, y)) {
                right = x;
                break;
            }
        }
        if (right < 0) continue;
        // Native text can extend under the first control cell (for example
        // the final 'r' in Wound Dresser). Preserve that byte for translation;
        // only the Chinese display box must end before the control graphic.
        const int source_right = right;
        for (int row_y = y - 1; row_y <= y + 1; ++row_y) {
            for (int x = left; x < right; ++x) {
                if (native_foreground_picture_at(*gps_, x, row_y)) {
                    right = x;
                    break;
                }
            }
        }
        if (right <= left) continue;
        std::vector<Field> fields;
        for (int row_y = y - 1; row_y <= y + 1; ++row_y) {
            int first = left, end = source_right;
            std::string native = rows[row_y];
            const auto source_char = [&](int x) {
                unsigned char ch = visible_char_at(x, row_y);
                // The inline control can also hide this trailing letter in
                // the final composite. Recover only a continuing word under
                // that verified control, never text from a covered panel.
                if (!ch && x >= right && x > left &&
                    ascii_word_byte(static_cast<unsigned char>(native[x - 1])) &&
                    native_foreground_picture_at(*gps_, x, row_y)) {
                    bool top = false;
                    const auto *cell = cell_at(x, row_y, &top);
                    if (cell && ascii_word_byte(cell[0])) ch = cell[0];
                }
                return ch;
            };
            for (int x = left; x < end; ++x) {
                const auto ch = source_char(x);
                // These cells have already been proved to be the current
                // record's upper/lower edge. They never belong to its text.
                if (classic && is_cp437_box_separator(native, x)) {
                    end = x;
                    break;
                }
                if ((!ch || ch == ' ') && native_foreground_picture_at(*gps_, x, row_y)) {
                    end = x;
                    break;
                }
                if (x >= right && ch) native[x] = static_cast<char>(ch);
            }
            while (first < end && native[first] == ' ') ++first;
            while (end > first && native[end - 1] == ' ') --end;
            if (first == end) continue;
            const std::string visible = native.substr(first, end - first);
            // A covered widget or graphical marker breaks ownership.
            bool current = true;
            for (int x = first; x < end; ++x) {
                const auto ch = source_char(x);
                if ((ch ? ch : ' ') != static_cast<unsigned char>(native[x]) ||
                    (ch && ch < ' ') || is_cp437_box_separator(native, x)) {
                    current = false;
                    break;
                }
            }
            if (!current) {
                fields.clear();
                break;
            }
            // Native spacing separates the identity column from the skill
            // column. Preserve those fields before normalizing their words.
            for (const auto &part : split_text_fields(visible))
                fields.push_back({first + part.start, row_y, first + part.end,
                    std::string(part.text), {}, {}});
        }
        const auto half_at = [&](const Field &field) {
            bool top = false;
            (void)cell_at(field.x, field.y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const size_t tile = static_cast<size_t>(field.x) * gps_->dimy + field.y;
            return flags ? flags[tile] & ((1u << 3) | (1u << 4)) : 0u;
        };
        // The worker control is drawn after the skill and can overwrite its
        // final letters even in classic mode. Such a draw no longer matches
        // the map-text mask, which removes the entire skill from rows. Read
        // its complete source from the shared draw capture, but claim only
        // the surviving prefix inside this proven portrait/control record.
        // This also owns skills written over the record's lower border.
        const std::array draw_layers{&draws, &top_draws};
        for (const auto *layer : draw_layers) for (const auto &draw : *layer) {
            if (!draw.caption_source || draw.x <= left || draw.x >= right ||
                draw.y < y - 1 || draw.y > y + 1 || draw.source.empty()) continue;
            std::string source = draw.complete_source.empty()
                ? draw.source : draw.complete_source;
            for (const auto &capture : captures)
                if (capture.x == draw.x && capture.y == draw.y &&
                    capture.visible == draw.source) {
                    source = capture.complete;
                    break;
                }
            const std::string normalized = normalize_utterance(source);
            const auto skill = rated_skills(normalized);
            if (!skill || skill->size() != 1) continue;
            int end = std::min(right, draw.x + static_cast<int>(draw.source.size()));
            if (draw.draw_clip) {
                const auto &clip = *draw.draw_clip;
                if (draw.x < clip.x || draw.y < clip.y || draw.y >= clip.y + clip.h)
                    continue;
                end = std::min(end, clip.x + clip.w);
            }
            const int length = end - draw.x;
            if (length <= 0) continue;
            const std::string visible = draw.source.substr(0, length);
            const auto claim_skill = [&](int row_y) {
                for (int offset = 0; offset < length; ++offset) {
                    const int x = draw.x + offset;
                    const auto ch = visible_char_at(x, row_y);
                    bool top_layer = false;
                    cell_at(x, row_y, &top_layer);
                    if (top_layer != draw.top_layer ||
                        (ch ? ch : ' ') != static_cast<unsigned char>(visible[offset]) ||
                        (ch && ch < ' ') || is_cp437_box_separator(visible, offset))
                        return false;
                }
                // Adjacent columns may have only one space, so the grid
                // splitter can merge a name and skill. Cut at this actual
                // skill draw before resolving any identity or profession.
                std::vector<Field> separated;
                for (const Field &field : fields) {
                    if (field.y != row_y || field.x >= end || field.end <= draw.x) {
                        separated.push_back(field);
                        continue;
                    }
                    const auto retain = [&](int first, int last) {
                        while (first < last && field.source[first - field.x] == ' ') ++first;
                        while (last > first && field.source[last - field.x - 1] == ' ') --last;
                        if (first < last)
                            separated.push_back({first, row_y, last,
                                field.source.substr(first - field.x, last - first), {}, {}});
                    };
                    retain(field.x, std::min(field.end, draw.x));
                    retain(std::max(field.x, end), field.end);
                }
                separated.push_back({draw.x, row_y, end, visible, normalized,
                    skill->front().target, true});
                fields = std::move(separated);
                return true;
            };
            if (!claim_skill(draw.y)) continue;
            const Field drawn{draw.x, draw.y, end, visible, {}, {}};
            const auto half = half_at(drawn);
            const int mate = half == (1u << 3) ? draw.y + 1
                : half == (1u << 4) ? draw.y - 1 : -1;
            if (mate < y - 1 || mate > y + 1) continue;
            const Field paired{draw.x, mate, end, visible, {}, {}};
            if (half_at(paired) == (half == (1u << 3) ? (1u << 4) : (1u << 3)))
                claim_skill(mate);
        }
        for (Field &field : fields) {
            if (field.skill) continue;
            std::string source = field.source;
            for (const auto &capture : captures)
                if (capture.x == field.x && capture.y == field.y && capture.visible == source) {
                    source = capture.complete;
                    break;
                }
            // A later skill can overwrite the identity's suffix. The
            // surviving prefix still belongs to that formatter/string owner.
            bool top_layer = false;
            cell_at(field.x, field.y, &top_layer);
            for (const auto &draw : top_layer ? top_draws : draws) {
                if (!draw.unit_identity_target || draw.x != field.x ||
                    draw.y != field.y) continue;
                const auto &complete = draw.complete_source.empty()
                    ? draw.source : draw.complete_source;
                std::string_view visible = draw.source;
                for (const auto &capture : captures)
                    if (capture.x == field.x && capture.y == field.y &&
                        capture.complete == complete) {
                        visible = capture.visible;
                        break;
                    }
                if (!visible.starts_with(field.source)) continue;
                field.identity_target = draw.unit_identity_target;
                source = complete;
                break;
            }
            field.normalized = normalize_utterance(source);
            if (field.x > left) {
                const auto skill = rated_skills(field.normalized);
                if (skill && skill->size() == 1) {
                    field.skill = true;
                    field.target = skill->front().target;
                }
            }
        }
        if (fields.empty()) continue;
        std::sort(fields.begin(), fields.end(), [](const Field &a, const Field &b) {
            return a.y != b.y ? a.y < b.y : a.x < b.x;
        });
        for (Field &field : fields) {
            // Another column can lie between the two native half-font
            // copies in this vector. Pair by source geometry, not adjacency.
            field.duplicate = half_at(field) == (1u << 4) &&
                std::any_of(fields.begin(), fields.end(), [&](const Field &other) {
                    return other.x == field.x && other.end == field.end &&
                        other.y + 1 == field.y && other.source == field.source &&
                        half_at(other) == (1u << 3);
                });
        }
        residents.push_back({left, right, y, std::move(fields)});
    }

    // The same native column serves every resident, including rows without
    // rated skills. Reserve it before measuring the left-hand identities.
    int skill_left = gps_->dimx;
    for (const Resident &resident : residents)
        for (const Field &field : resident.fields)
            if (field.skill) skill_left = std::min(skill_left, field.x);
    for (const Resident &resident : residents) {
        std::vector<std::string> sources;
        std::vector<const Field *> identity_fields;
        std::string complete;
        for (const Field &field : resident.fields) {
            if (field.skill || field.duplicate || field.x >= skill_left) continue;
            identity_fields.push_back(&field);
            if (!complete.empty()) complete += ' ';
            complete += field.normalized;
            sources.push_back(field.normalized);
        }
        std::optional<std::string> target;
        const Field *first_field = identity_fields.empty() ? nullptr : identity_fields.front();
        if (first_field && first_field->identity_target) {
            if (sources.size() == 1) target = first_field->identity_target;
            else {
                std::string profession;
                for (size_t index = 1; index < sources.size(); ++index) {
                    if (!profession.empty()) profession += ' ';
                    profession += sources[index];
                }
                // A shortened first draw can retain the complete comma-
                // delimited identity. Its visible continuation then repeats
                // an office already present in the formatter-owned target.
                const size_t comma = sources.front().find(',');
                if (comma != std::string::npos && normalize_utterance(
                        std::string_view(sources.front()).substr(comma + 1)) == profession) {
                    target = first_field->identity_target;
                } else {
                    const auto role = identity_fields.size() == 2 &&
                        identity_fields.back()->identity_target
                        ? identity_fields.back()->identity_target
                        : FortressRosterTranslationScope::text(
                            FortressRosterTranslationScope::TextKind::Profession, profession,
                            [&] { return translate_unit_profession(profession); });
                    if (role)
                        target = *first_field->identity_target + "，" + *role;
                }
            }
        }
        if (!target && !complete.empty())
            target = procedural_identity(complete);
        if (!target && sources.size() >= 2 && sources[0].find(',') == std::string::npos) {
            // The narrow native roster puts the profession on the next row
            // without an inline comma. Only identity fields participate;
            // skills remain in their own native column and rows.
            std::string separated = complete;
            separated.insert(sources[0].size(), ",");
            target = procedural_identity(separated);
        }
        const bool translated_identity = target && contains_cjk_utf8(*target);
        bool first_identity = true;
        for (const Field &field : resident.fields) {
            const bool skill_column = field.x >= skill_left;
            if (!field.skill && (skill_column || !translated_identity)) continue;
            const int left = field.skill ? skill_left : resident.left;
            const int right = field.skill ? resident.right
                : std::min(resident.right, skill_left - 1);
            if (right <= left) continue;
            std::string text;
            if (field.skill) {
                if (!field.duplicate) text = field.target;
            } else if (first_identity) {
                text = *target;
                first_identity = false;
            }
            if (only_y >= 0 && field.y != only_y) continue;
            Match match{field.x, field.y, field.end - field.x,
                kFortressLaborWorkerRule, std::move(text), field.source};
            match.layout_x = left;
            match.layout_y = field.skill ? field.y : resident.middle;
            // Keep each skill's native row, including half-font baselines.
            // Only an identity's own wrapped continuation may be recentred.
            match.layout_fixed_baseline = !field.skill;
            if (classic && !field.skill)
                match.native_picture_caption_box = SDL_Rect{
                    left, resident.middle - 1, right - left, 3};
            match.layout_length = right - left;
            match.layout_clip_right = right;
            match.layout_left = true;
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
            bool top = false;
            const auto *cell = cell_at(field.x, field.y, &top);
            if (cell) match.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            matches.push_back(std::move(match));
            std::fill(rows[field.y].begin() + field.x, rows[field.y].begin() + field.end, ' ');
        }
    }
}

void Overlay::layout_fortress_labor(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    for (Match &match : prepared_matches_) {
        if (match.rule != kFortressLaborCaptionRule || match.target.empty() ||
                match.native_split_duplicate) continue;
        // Typed captions also appear on a character's Work details page.
        // Their live widget owner supplies context even when the fortress
        // four-tab strip is outside this viewport or behind another frame.
        if (match.native_picture_caption_box) {
            const auto &box = *match.native_picture_caption_box;
            match.layout_x = box.x;
            match.layout_length = box.w;
            match.layout_clip_right = box.x + box.w;
        }
        match.layout_left = !match.native_labor_control;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        layout_fortress_text_rows(renderer, {{&match}},
            match.layout_x, match.layout_clip_right, false, true);
    }
    std::vector<std::string> rows(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            if (ch) rows[y][x] = ch;
        }
    const auto band = fortress_labor_band(rows);
    if (!band) return;
    const auto settings = native_ui_settings();
    const int pixels = std::clamp(static_cast<int>(gps_->tile_pixel_y * config_.font_scale),
        1, gps_->tile_pixel_y);
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate) continue;
        const int display_y = match.native_split_text ? match.native_split_top_y : match.y;
        if (display_y == band->tabs_y) {
            // Only this complete Labor tab band uses the shorter captions.
            // Keep Chinese wording dictionary-owned and preserve Kitchen as
            // a workshop name everywhere outside this tab row.
            const std::string source = lower(match.source);
            const std::string_view key = source == "work details" ? "Labor tab: Work details"
                : source == "standing orders" ? "Labor tab: Standing orders"
                : source == "kitchen" ? "Cooking" : "";
            if (!key.empty())
                if (const auto target = exact_literal_translation(key)) match.target = *target;
            continue;
        }
        if (match.rule == kFortressLaborCaptionRule) continue;
        if (band->standing_tabs_y >= 0) {
            if (match.rule != kFortressStandingOrderRule) continue;
            // Restore the native button bounds after generic panel layout.
            // Keep every policy on the same baseline, font size and left
            // inset regardless of how long its English wording happens to be.
            const auto button = fortress_standing_order_text_span(*gps_, match.x,
                match.x + match.length, match.y);
            if (!button) continue;
            match.layout_x = button->first;
            match.layout_y = match.y;
            match.layout_length = button->second - button->first;
            match.layout_clip_right = button->second;
            match.layout_left = true;
            match.layout_box_pixel_x = -1;
            match.layout_box_pixel_width = 0;
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
            continue;
        }
        if (band->header_y < 0) continue;
        if (match.rule == kFortressLaborWorkerRule) {
            layout_fortress_text_rows(renderer, {{&match}}, match.layout_x, match.layout_clip_right);
            if (settings && settings->classic && match.native_picture_caption_box) {
                const auto &box = *match.native_picture_caption_box;
                if (const auto skin = fortress_labor_classic_caption_skin(*gps_, rows,
                        box.x, box.x + box.w, box.y + 1)) {
                    // The native continuation already overwrote part of the
                    // bottom edge. Its source mask stays on that old row;
                    // restore the proven native edge below the composed name.
                    for (const Match &continuation : prepared_matches_) {
                        if (continuation.rule != kFortressLaborWorkerRule ||
                            continuation.y != box.y + 2 || !continuation.target.empty() ||
                            !continuation.native_picture_caption_box) continue;
                        const auto &other = *continuation.native_picture_caption_box;
                        if (other.x != box.x || other.y != box.y ||
                            other.w != box.w || other.h != box.h) continue;
                        NativeBorderRepair repair;
                        repair.cells = {continuation.x, continuation.y, continuation.length, 1};
                        repair.cell[0] = static_cast<unsigned char>(*skin & 0xff);
                        const int foreground = ((*skin >> 8) & 7) + ((*skin & 0x4000) ? 8 : 0);
                        const int background = (*skin >> 11) & 7;
                        std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
                        std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
                        native_border_repairs_.push_back(repair);
                    }
                }
            }
            static std::atomic_bool logged_labor_roster_layout{false};
            if (!logged_labor_roster_layout.exchange(true))
                log_line("INFO", "Activated fortress Labor identity and skill columns");
            continue;
        }
        const std::string source = lower(match.source);
        const bool policy = source == "everybody does this" || source == "only selected do this" ||
            source == "nobody does this";
        const bool add = source == "add new work detail";
        if (match.y <= band->tabs_y) continue;
        const auto button = native_button_text_span(*gps_, match.x, match.x + match.length, match.y);
        if (!button) continue;
        const bool detail = !policy && !add && button->second < band->name_x &&
            match.y > band->tabs_y + 2;
        if (!policy && !add && !detail) continue;
        // A joined picture box already excludes the icon from this span.
        // For a plain button, use the actual foreground/anchored icon cells;
        // add_anchored_tile marks every covered cell, not only its origin.
        // Adding four cells unconditionally double-indented picture buttons.
        int left = button->first;
        const int right = button->second;
        if (detail) {
            for (int x = left; x < match.x; ++x) {
                const auto ch = visible_char_at(x, match.y);
                if ((!ch || ch == ' ') && native_foreground_picture_at(*gps_, x, match.y))
                    left = x + 1;
            }
        }
        if (left >= right) continue;
        match.layout_x = left;
        match.layout_length = right - left;
        match.layout_left = detail;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        match.layout_prepared = true;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        match.layout_clip_right = right;
    }
}
