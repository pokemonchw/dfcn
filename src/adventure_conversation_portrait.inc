// The native 867e10/865690 renderer builds the portrait identity, Toward,
// Relationship and General Mood as separate complete fields. Their extracted
// branches live in data/extracted/adventure-conversation-portrait. Terms stay
// in these namespaces; names retain the formatter's actual typed identity.
struct ConversationPortraitField {
    Match ink;
    std::string source;
    std::vector<int> colors;
};
struct ConversationPortraitPanel {
    SDL_Rect bounds;
    int left, first_info_y;
};
const std::array<std::string_view, 3> portrait_labels{
    "Toward you:", "Relationship:", "General Mood:"};
const auto portrait_draws = captured_native_drawn_text_view();
const auto portrait_top_draws = captured_native_drawn_text_view(true);
std::vector<ConversationPortraitPanel> portrait_panels;
// Direct addst return intervals extracted from both configured PE images.
// Resolve them once for the current native edition, including every mood
// selector, rather than identifying individual states by their spelling.
std::array<std::pair<uintptr_t, uintptr_t>, 3> portrait_native_ranges{};
std::array<std::vector<std::pair<int, int>>, 3> portrait_native_starts;
if (const auto base = native_history_profile_base()) {
    constexpr std::array<std::pair<uintptr_t, uintptr_t>, 3> ranges{{
        {0x868d0e, 0x8692d8}, {0x86933e, 0x869c95}, {0x869cfd, 0x86b437},
    }};
    for (size_t kind = 0; kind < ranges.size(); ++kind)
        portrait_native_ranges[kind] = {
            native_ui_semantic_address(ranges[kind].first),
            native_ui_semantic_address(ranges[kind].second)};
}
for (const auto *draws : {&portrait_draws, &portrait_top_draws})
    for (const auto &draw : *draws)
        for (size_t kind = 0; kind < portrait_labels.size(); ++kind) {
            const auto first = portrait_native_ranges[kind].first;
            if (!first || draw.native_caller != first || draw.x < 0 ||
                    draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    !draw.source.starts_with(portrait_labels[kind]) ||
                    (screen_override && screen_override != draw.draw_grid)) continue;
            const std::pair position{draw.x, draw.y};
            auto &starts = portrait_native_starts[kind];
            if (std::find(starts.begin(), starts.end(), position) == starts.end())
                starts.push_back(position);
        }
// The decompiled renderer writes each label, state and separator through
// addst at its current cursor. Those calls own the field even when a later
// graphical pass replaces the surrounding frame. A frame-wide text scan
// otherwise drops that ownership and sends individual states to UI words.
const auto portrait_native_field = [&](int y, int left, std::string_view label)
        -> std::optional<std::pair<ConversationPortraitField, SDL_Rect>> {
    const size_t kind = label == "Toward you:" ? 0 : label == "Relationship:" ? 1 : 2;
    const auto [first, last] = portrait_native_ranges[kind];
    if (!first || !last) return std::nullopt;
    for (const auto *draws : {&portrait_draws, &portrait_top_draws}) {
        const auto header = std::find_if(draws->begin(), draws->end(), [&](const auto &draw) {
            return draw.native_caller == first && draw.x == left && draw.y == y &&
                draw.source.starts_with(label);
        });
        if (header == draws->end() || !header->draw_clip ||
                header->draw_dimx != gps_->dimx || header->draw_dimy != gps_->dimy ||
                header->draw_grid != (header->top_layer ? gps_->screen_top : gps_->screen) ||
                (screen_override && screen_override != header->draw_grid)) continue;
        std::vector<const NativeDrawnTextRow *> parts;
        for (const auto &draw : *draws)
            if (draw.y == y && draw.x >= left &&
#ifdef _WIN32
                    draw.native_caller >= first && draw.native_caller <= last &&
#else
                    native_conversation_portrait_caller(draw.native_caller, kind) &&
#endif
                    draw.sequence >= header->sequence &&
                    draw.draw_epoch == header->draw_epoch && draw.draw_grid == header->draw_grid &&
                    draw.draw_dimx == gps_->dimx && draw.draw_dimy == gps_->dimy)
                parts.push_back(&draw);
        std::sort(parts.begin(), parts.end(), [](const auto *a, const auto *b) {
            return a->x < b->x;
        });
        // 868533/86853c draw center +/-50, rows 6..19. At 868b0c
        // the native text cursor is border-left+2. Keep that complete
        // allocation even when the generic border reader cannot prove it.
        // A one-row writer clip limits cells, not glyph ascenders around
        // the ordinary addst baseline; wider scroll/page clips retain Y.
        SDL_Rect bounds{left - 1, 7, 99, 12};
        SDL_Rect writer = *header->draw_clip;
        if (writer.y == y && writer.h == 1) {
            writer.y = bounds.y;
            writer.h = bounds.h;
        }
        SDL_Rect visible{};
        if (!SDL_IntersectRect(&bounds, &writer, &visible)) continue;
        bounds = visible;
        if (const auto panel = native_panel_interior(borders, *gps_, left,
                left + static_cast<int>(label.size()), y, occluding_frame)) {
            SDL_Rect intersection{};
            if (!SDL_IntersectRect(&bounds, &*panel, &intersection)) continue;
            bounds = intersection;
        }
        if (left < bounds.x || y < bounds.y || y >= bounds.y + bounds.h) continue;
        ConversationPortraitField field{{left, y, 0, kConversationPortraitRule, {}, {}}, {}, {}};
        int cursor = left;
        bool intact = !parts.empty();
        for (size_t part = 0; part < parts.size() && intact; ++part) {
            const auto &draw = *parts[part];
            if (draw.x < cursor || draw.x >= bounds.x + bounds.w || draw.source.empty() ||
                    draw.source.size() > static_cast<size_t>(bounds.x + bounds.w - draw.x)) {
                intact = false;
                break;
            }
            // Gaps and every painted byte must still belong to this layer.
            // Complete pre-clipping text supplies meaning only for the last
            // draw; it never reserves cells beyond the actual visible span.
            for (int x = cursor; x < draw.x + static_cast<int>(draw.source.size()); ++x) {
                bool top = false;
                const auto *visible_cell = cell_at(x, y, &top);
                const auto *cell = draw.draw_grid +
                    (static_cast<size_t>(x) * draw.draw_dimy + y) * 8;
                const unsigned char expected = x < draw.x ? ' ' :
                    static_cast<unsigned char>(draw.source[static_cast<size_t>(x - draw.x)]);
                // The actual addst writer and its current buffer prove this
                // text. Later graphical frame copies can hide it from the
                // generic composite scan without changing the native bytes.
                // A genuinely different text layer still owns its cells.
                if (!visible_cell || top != draw.top_layer ||
                        (cell[0] ? cell[0] : ' ') != expected) {
                    intact = false;
                    break;
                }
                field.ink.source.push_back(static_cast<char>(expected));
                field.colors.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
            }
            if (!intact) break;
            field.source.append(static_cast<size_t>(draw.x - cursor), ' ');
            const auto &complete = draw.complete_source.empty() ? draw.source : draw.complete_source;
            if (complete != draw.source && (part + 1 != parts.size() ||
                    !std::string_view(complete).starts_with(draw.source))) {
                intact = false;
                break;
            }
            field.source += complete;
            cursor = draw.x + static_cast<int>(draw.source.size());
        }
        if (!intact || field.colors.empty()) continue;
        field.ink.length = static_cast<int>(field.ink.source.size());
        field.colors.resize(field.source.size(), field.colors.back());
        const int tw = gps_->tile_pixel_x, th = gps_->tile_pixel_y;
        field.ink.layout_native_clip = SDL_Rect{
            (gps_->screen_pixel_x - gps_->dimx * tw) / 2 + bounds.x * tw,
            (gps_->screen_pixel_y - gps_->dimy * th) / 2 + bounds.y * th,
            bounds.w * tw, bounds.h * th};
        return std::pair{std::move(field), bounds};
    }
    return std::nullopt;
};
const auto portrait_field = [&](int y, int left, const SDL_Rect &panel)
        -> std::optional<ConversationPortraitField> {
    const int right = panel.x + panel.w;
    if (y < panel.y || y >= panel.y + panel.h || left >= right) return std::nullopt;
    int end = right;
    while (end > left && context[y][end - 1] == ' ') --end;
    if (end <= left) return std::nullopt;
    ConversationPortraitField field{{left, y, end - left, kConversationPortraitRule, {},
        context[y].substr(left, end - left)}, {}, {}};
    field.source = field.ink.source;
    bool field_top = false, known_layer = false;
    for (int x = left; x < end; ++x) {
        bool top = false;
        const auto *cell = cell_at(x, y, &top);
        if (context[y][x] != ' ') {
            if (!cell || cell[0] != static_cast<unsigned char>(context[y][x]) ||
                is_cp437_box_separator(context[y], x) ||
                (known_layer && field_top != top) ||
                (screen_override && screen_override !=
                    (top ? gps_->screen_top : gps_->screen))) return std::nullopt;
            field_top = top;
            known_layer = true;
        }
        field.colors.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
    }
    if (end < right && !field.source.ends_with("...")) return field;
    // A clipped final native draw can supply its complete original field.
    // Every exposed byte must agree; no dictionary completion or hidden
    // neighbor is allowed to extend a border-cut prefix.
    const auto &draws = field_top ? portrait_top_draws : portrait_draws;
    std::optional<std::string> recovered;
    int recovered_color = field.colors.back();
    size_t recovered_at = 0;
    for (const auto &draw : draws) {
        if (draw.y != y || draw.x < left || draw.x >= end || draw.source.empty()) continue;
        const size_t at = static_cast<size_t>(draw.x - left);
        const auto shown = std::string_view(field.source).substr(at);
        const auto prefix = shown.ends_with("...") ? shown.substr(0, shown.size() - 3) : shown;
        const std::string &complete = draw.complete_source.empty() ? draw.source : draw.complete_source;
        if (prefix.empty() || !std::string_view(complete).starts_with(prefix) ||
            complete.size() <= prefix.size()) continue;
        const std::string candidate = field.source.substr(0, at) + complete;
        if (recovered && *recovered != candidate) return std::nullopt;
        recovered = candidate;
        recovered_at = at;
        if (draw.foreground_rgb >= 0) recovered_color = draw.foreground_rgb;
    }
    if (!recovered) return std::nullopt;
    field.source = std::move(*recovered);
    field.colors.resize(recovered_at);
    field.colors.resize(field.source.size(), recovered_color);
    return field;
};
const auto portrait_place = [&](const ConversationPortraitField &field,
        const std::string &target, const std::vector<int> &colors, int right) {
    const Match &row = field.ink;
    if (target.empty() || (only_y >= 0 && row.y != only_y)) return;
    const auto overlaps = [&](const Match &prior) {
        return prior.y == row.y && prior.x < row.x + row.length && row.x < prior.x + prior.length;
    };
    const size_t begin = result.size();
    if (!append_setup_paragraph({row}, target, right, right, colors)) return;
    std::erase_if(untranslated_help_rows, overlaps);
    for (size_t at = begin; at-- > 0;)
        if (overlaps(result[at])) result.erase(result.begin() + at);
};
const auto portrait_attitude_translation = [&](std::string_view source)
        -> std::optional<std::string> {
    // The complete Toward messages are hP prose, deliberately absent from
    // the generic literal index. Use their existing complete-message index;
    // otherwise even a fully captured status row falls back to UI words.
    if (!ui_message_trie_.empty()) {
        int node = 0;
        for (unsigned char ch : source) {
            if (native_prose_space(ch)) continue;
            const auto next = ui_message_trie_[node].next.find(ch);
            if (next == ui_message_trie_[node].next.end()) { node = -1; break; }
            node = next->second;
        }
        if (node >= 0) {
            const int index = ui_message_trie_[node].rule;
            if (index >= 0 && static_cast<size_t>(index) < rules_.size()) {
                const auto &rule = rules_[static_cast<size_t>(index)];
                if (rule.ui_message && rule.source == source && !rule.target.empty())
                    return rule.target;
            }
        }
    }
    return exact_literal_translation(source);
};
for (int y = 0; y < gps_->dimy; ++y) {
    for (const auto label : portrait_labels) {
        std::vector<int> starts;
        const size_t kind = label == "Toward you:" ? 0 : label == "Relationship:" ? 1 : 2;
        for (const auto &[x, row] : portrait_native_starts[kind])
            if (row == y) starts.push_back(x);
        // Hosts without this PE profile keep the closed-panel reader.
        // Captured native headers do not depend on composite text visibility.
        const size_t found = context[y].find(label);
        if (found != std::string::npos &&
                std::find(starts.begin(), starts.end(), static_cast<int>(found)) == starts.end())
            starts.push_back(static_cast<int>(found));
        for (const int left : starts) {
            const auto native = portrait_native_field(y, left, label);
            const auto panel = native ? std::optional(native->second) :
                native_panel_interior(borders, *gps_, left,
                    left + static_cast<int>(label.size()), y, occluding_frame);
            if (!panel) continue;
            const auto field = native ? std::optional(native->first) : portrait_field(y, left, *panel);
            if (!field || !field->source.starts_with(label)) continue;
            auto known = std::find_if(portrait_panels.begin(), portrait_panels.end(),
                [&](const ConversationPortraitPanel &prior) {
                    return prior.left == left && prior.bounds.x == panel->x && prior.bounds.y == panel->y &&
                        prior.bounds.w == panel->w && prior.bounds.h == panel->h;
                });
            if (known == portrait_panels.end()) portrait_panels.push_back({*panel, left, y});
            else known->first_info_y = std::min(known->first_info_y, y);
            std::string target;
            std::vector<int> colors;
            const auto append = [&](std::string_view translated, size_t source_at) {
                std::vector<uint32_t> codepoints;
                if (!decode_utf8(translated, codepoints)) return false;
                target += translated;
                colors.insert(colors.end(), codepoints.size(),
                    field->colors[std::min(source_at, field->colors.size() - 1)]);
                return true;
            };
            size_t at = label.size();
            bool complete = true;
            if (label == "Toward you:") {
                const size_t comma = field->source.find(',');
                const std::string base(trim_view(std::string_view(field->source).substr(0, comma)));
                const auto translated = portrait_attitude_translation(base);
                if (!translated) continue;
                const size_t colon = translated->find("：");
                if (colon == std::string::npos) complete = append(*translated, 0);
                else {
                    while (at < field->source.size() && field->source[at] == ' ') ++at;
                    complete = append(std::string_view(*translated).substr(0, colon + 3), 0) &&
                        append(std::string_view(*translated).substr(colon + 3), at);
                }
                at = comma;
            } else {
                const std::string key = label == "Relationship:" ? "Relationship" : "General Mood";
                const auto translated = exact_literal_translation("Conversation portrait label: " + key);
                if (!translated) continue;
                complete = append(*translated, 0);
            }
            bool first = label != "Toward you:";
            const std::string scope = label == "Toward you:" ? "Conversation demeanor: " :
                label == "Relationship:" ? "Conversation relationship: " : "Conversation mood: ";
            while (complete && at != std::string::npos && at < field->source.size()) {
                if (field->source[at] == ',') ++at;
                while (at < field->source.size() && field->source[at] == ' ') ++at;
                if (at == field->source.size()) break;
                const size_t next = field->source.find(',', at);
                const std::string term(trim_view(std::string_view(field->source).substr(at,
                    next == std::string::npos ? std::string::npos : next - at)));
                // Mood selectors can deliberately emit no label. The native
                // loop writes its comma before dispatch, so leading, repeated
                // and trailing empty segments are valid source branches.
                if (term.empty()) { at = next; continue; }
                const auto translated = exact_literal_translation(scope + term);
                if (!translated) { complete = false; break; }
                if (!first) complete = append("，", at > 1 ? at - 2 : 0);
                if (complete) complete = append(*translated, at);
                first = false;
                at = next;
            }
            if (complete) portrait_place(*field, target, colors, panel->x + panel->w);
        }
    }
}
for (const auto &portrait : portrait_panels) {
    const auto caption = portrait_field(portrait.first_info_y - 1, portrait.left, portrait.bounds);
    if (!caption) continue;
    std::optional<std::string> target;
    for (const auto *draws : {&portrait_draws, &portrait_top_draws}) {
        for (const auto &draw : *draws) {
            if (draw.x == caption->ink.x && draw.y == caption->ink.y && draw.unit_identity_target &&
                (draw.source == caption->source || draw.complete_source == caption->source)) {
                target = draw.unit_identity_target;
                break;
            }
        }
        if (target) break;
    }
    if (!target) target = translate_ui_message_capture(caption->source, true);
    if (!target) continue;
    std::vector<uint32_t> codepoints;
    if (!decode_utf8(*target, codepoints)) continue;
    portrait_place(*caption, *target, std::vector<int>(codepoints.size(), caption->colors.front()),
        portrait.bounds.x + portrait.bounds.w);
}
