// Event identity and complete grammar are shared by the private and shared
// raster paths. Inputs are published native writes; the caller supplies their
// current-byte proof and owns the output transaction, never screen discovery.
struct NativeChronicleEventLayout {
    std::shared_ptr<const NativeHistoryDocument> document;
    std::vector<Match> sources, matches;
    bool translated = false;
};

template<typename Current, typename Memory, typename Fit>
static std::vector<NativeChronicleEventLayout> native_chronicle_layout(
        int left, int right, int prose_top, int prose_bottom, int tile_h,
        const SDL_Rect &prose_clip,
        const std::map<int, std::vector<NativeTextCardRow>> &fields,
        const std::vector<NativeHistoryDraw> &history_draws,
        const std::vector<NativeHistoryUnboundDraw> &history_unbound,
        std::vector<std::string> &context, Current current_byte, Memory memory, Fit fit) {
    std::vector<NativeChronicleEventLayout> layouts;
    if (left < 0 || right <= left || prose_top < 0 || prose_bottom <= prose_top ||
            prose_bottom > static_cast<int>(context.size()) || tile_h <= 0) return layouts;
    const auto remember_span = [&](int x, int y, std::string_view source) {
        auto &row = context[y];
        if (row.size() < static_cast<size_t>(x) + source.size()) row.resize(static_cast<size_t>(x) + source.size(), ' ');
        row.replace(x, source.size(), source);
    };
    struct Event {
        std::shared_ptr<const NativeHistoryDocument> document;
        std::optional<std::pair<int64_t, int64_t>> offset;
        std::set<size_t> confirmed;
        std::map<int, std::vector<Match>> rows;
        std::vector<Match> source_rows;
        const WorldgenHistoryEventMemory *memory = nullptr;
        int first_line = -1;
        bool conflict = false;
    };
    std::map<uint64_t, Event> events;
    std::map<std::pair<int, int>, uint64_t> token_owners;
    for (const auto &draw : history_draws) {
        if (!draw.document || draw.token_index >= draw.document->tokens.size() ||
                draw.y < prose_top || draw.y >= prose_bottom) continue;
        const auto &token = draw.document->tokens[draw.token_index];
        if (token.source.empty()) continue;
        const int first = std::max({left, draw.x, draw.clip_left});
        const int end = static_cast<int>(std::min<int64_t>(std::min(right, draw.clip_right),
            int64_t(draw.x) + int64_t(token.source.size())));
        if (first >= end) continue;
        auto &event = events[draw.document->sequence];
        event.document = draw.document;
        const std::pair<int64_t, int64_t> offset{int64_t(draw.x) - token.x, int64_t(draw.y) - token.y};
        if (event.offset && *event.offset != offset) event.conflict = true;
        else event.offset = offset;
        bool current = true;
        for (int x = first; current && x < end; ++x)
            current = current_byte(x, draw.y, static_cast<unsigned char>(token.source[x - draw.x]));
        if (!current) { event.conflict = true; continue; }
        if (!event.confirmed.insert(draw.token_index).second) { event.conflict = true; continue; }
        const std::string source = token.source.substr(first - draw.x, end - first);
        event.rows[draw.y].push_back({first, draw.y, end - first, kWorldgenChronicleRule, {}, source});
        remember_span(first, draw.y, source);
        for (int x = first; x < end; ++x) {
            const auto [owner, inserted] = token_owners.emplace(std::pair{draw.y, x}, draw.document->sequence);
            if (!inserted && owner->second != draw.document->sequence) {
                event.conflict = true;
                events[owner->second].conflict = true;
            }
        }
    }
    // Unbound native tokens reserve their original ink; their missing
    // semantic record cannot be filled by literal matching or another event.
    std::set<int> retained_rows;
    for (const auto &draw : history_unbound) {
        if (draw.y < prose_top || draw.y >= prose_bottom || draw.source.empty()) continue;
        const int first = std::max({left, draw.x, draw.clip_left});
        const int end = static_cast<int>(std::min<int64_t>(std::min(right, draw.clip_right),
            int64_t(draw.x) + int64_t(draw.source.size())));
        bool current = first < end;
        for (int x = first; current && x < end; ++x)
            current = current_byte(x, draw.y, static_cast<unsigned char>(draw.source[x - draw.x]));
        if (!current) continue;
        retained_rows.insert(draw.y);
        for (int x = first; x < end; ++x) {
            const auto owner = token_owners.find({draw.y, x});
            if (owner != token_owners.end()) events[owner->second].conflict = true;
        }
    }
    for (const auto &[y, rows] : fields) {
        if (y < prose_top || y >= prose_bottom) continue;
        for (const auto &field : rows) for (size_t i = 0; i < field.source.size(); ++i) {
            const int x = field.x + static_cast<int>(i);
            if (x >= left && x < right && field.source[i] != ' ' && !token_owners.contains({y, x}))
                retained_rows.insert(y);
        }
    }
    std::vector<Event *> ordered;
    for (auto &[sequence, event] : events) if (!event.rows.empty()) ordered.push_back(&event);
    std::sort(ordered.begin(), ordered.end(), [](const Event *a, const Event *b) {
        return a->rows.begin()->first < b->rows.begin()->first;
    });
    for (Event *event : ordered) {
        auto &rows = event->source_rows;
        for (auto &[y, spans] : event->rows) {
            std::sort(spans.begin(), spans.end(), [](const Match &a, const Match &b) { return a.x < b.x; });
            const int first = spans.front().x;
            int end = first;
            for (const auto &span : spans) end = std::max(end, span.x + span.length);
            std::string source(end - first, ' ');
            for (const auto &span : spans) source.replace(span.x - first, span.length, span.source);
            // Only the published caption runs of this event row are checked
            // for uncovered ink. No other screen row is read or interpreted.
            const auto caption_row = fields.find(y);
            if (caption_row != fields.end()) for (const auto &field : caption_row->second) {
                for (size_t i = 0; i < field.source.size(); ++i) {
                    const int x = field.x + static_cast<int>(i);
                    if (x < left || x >= right || field.source[i] == ' ') continue;
                    const auto owner = token_owners.find({y, x});
                    if (owner == token_owners.end() || owner->second != event->document->sequence)
                        event->conflict = true;
                }
            }
            remember_span(first, y, source);
            rows.push_back({first, y, end - first, kWorldgenChronicleRule, {}, std::move(source)});
        }
        int64_t complete_first = INT64_MAX, complete_last = INT64_MIN;
        if (!event->offset) event->conflict = true;
        else for (size_t i = 0; i < event->document->tokens.size(); ++i) {
            const auto &token = event->document->tokens[i];
            if (trim_view(token.source).empty()) continue;
            const int64_t x = int64_t(token.x) + event->offset->first;
            const int64_t y = int64_t(token.y) + event->offset->second;
            complete_first = std::min(complete_first, y);
            complete_last = std::max(complete_last, y);
            if (!event->confirmed.contains(i) && y >= prose_top && y < prose_bottom &&
                    x < right && x + int64_t(token.source.size()) > left) event->conflict = true;
        }
        if (complete_first > rows.front().y || complete_last < rows.back().y ||
                complete_last - complete_first >= 16384) event->conflict = true;
        event->first_line = event->conflict ? -1 : static_cast<int>(rows.front().y - complete_first);
        if (event->first_line > 0) {
            // Its visible native tail remains a real allocation even though
            // the complete sentence starts outside this viewport.
            for (const auto &row : rows) retained_rows.insert(row.y);
            continue;
        }
        event->memory = event->conflict ? nullptr : memory(*event->document);
        if (!event->memory || event->memory->target.empty())
            for (const auto &row : rows) retained_rows.insert(row.y);
    }
    int next_y = prose_top;
    for (Event *event : ordered) {
        auto &rows = event->source_rows;
        NativeChronicleEventLayout output;
        output.document = event->document;
        output.sources = rows;
        auto &result = output.matches;
        if (event->first_line > 0) {
            // A scrolled-away record keeps ownership of its visible tail,
            // while the complete event memory decides which record it is.
            for (auto &row : rows) { row.layout_native_clip = prose_clip; result.push_back(std::move(row)); }
            layouts.push_back(std::move(output));
            continue;
        }
        for (int y : retained_rows) if (y < rows.front().y) next_y = std::max(next_y, y + 1);
        rows.front().layout_native_clip = prose_clip;
        std::vector<Match> fitted;
        // Measure the complete cached event in its current viewport. The
        // paragraph-layout cache retains this width/font/color result.
        bool fits = event->memory && !event->memory->target.empty() && fit(rows, event->memory->target, context, fitted,
            event->memory->foreground_colors, left, right);
        int display_y = next_y;
        for (const auto &row : fitted) if (!row.target.empty()) {
            const int height = (std::max(tile_h, row.layout_line_height_pixels) + tile_h - 1) / tile_h;
            const auto occupied = retained_rows.lower_bound(display_y);
            if (occupied != retained_rows.end() && *occupied < display_y + height) fits = false;
            display_y += height;
        }
        if (!fits) {
            next_y = std::max(next_y, rows.back().y + 1);
            for (auto &row : rows) {
                retained_rows.insert(row.y);
                row.native_help_source_only = true;
                row.native_help_review_source = event->document->native_source;
                row.layout_native_clip = prose_clip;
                result.push_back(std::move(row));
            }
            layouts.push_back(std::move(output));
            continue;
        }
        output.translated = true;
        for (auto &row : fitted) {
            if (!row.target.empty()) {
                row.layout_y = next_y;
                row.layout_pixel_y = 0;
                row.layout_native_clip = prose_clip;
                row.layout_fixed_baseline = true;
                next_y += (std::max(tile_h, row.layout_line_height_pixels) + tile_h - 1) / tile_h;
            }
            result.push_back(std::move(row));
        }
        layouts.push_back(std::move(output));
    }
    return layouts;
}
