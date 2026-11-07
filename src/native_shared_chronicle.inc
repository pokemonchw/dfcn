// A semantic token is observed before addst. Only its separately completed
// caption, with the same source identity and current last-writer cells, may
// authorize suppressing native ink on the shared raster.
struct NativeSharedChronicleSnapshot {
    uintptr_t box = 0;
    uint64_t generation = 0, revision = 0;
    std::optional<std::pair<int, int>> rows;
    std::optional<int> width;
    std::vector<NativeHistoryDraw> draws;
    std::vector<NativeHistoryUnboundDraw> unbound;
    std::set<uintptr_t> words;
    std::map<std::tuple<uintptr_t, int, int>, uint64_t> writer_floors;
    bool stable = false;
};

// The registry and native allocation lock are defined with the hooks later
// in this translation unit. Rendering consumes only their immutable snapshot.
static NativeSharedChronicleSnapshot native_shared_chronicle_snapshot(bool worldgen,
        const std::array<std::vector<NativeDrawnTextRow>, 2> &captions);
static bool native_shared_chronicle_registry_current(uint64_t generation, uint64_t revision);

static bool native_shared_chronicle_current(const NativeCapturedUiFrame::Chronicle &group,
        const NativeCapturedUiFrame &frame, const graphicst &gps, bool preparing = false) {
    if (!group.document || (preparing && !native_shared_chronicle_registry_current(
            group.history_generation, group.history_revision))) return false;
    // Once submitted, the immutable document belongs to these completed
    // caption writes. Registering another event cannot cancel already masked
    // ink. A new native draw is detected by the frame's capture epoch/revision;
    // no saved token pointer is dereferenced here.
    for (const auto &span : group.sources) {
        if (!native_captured_ui_span_current(span, frame, gps)) return false;
        const auto *flags = span.top_layer ? gps.screentexpos_top_flag : gps.screentexpos_flag;
        if (!flags) return false;
        for (size_t byte = 0; byte < span.source.size(); ++byte)
            if (flags[(size_t(span.x) + byte) * frame.dimy + span.y] & ((1u << 3) | (1u << 4))) return false;
    }
    // Destination guards are bounded by the real paragraph clips. They are
    // collision evidence only, not rows interpreted as text or translated.
    const auto *grid = frame.grids[group.top_layer ? 1 : 0];
    if (!grid || (group.top_layer && !frame.top_in_use)) return false;
    const auto *flags = group.top_layer ? gps.screentexpos_top_flag : gps.screentexpos_flag;
    if (!flags) return false;
    for (const auto &guard : group.guards) {
        if (guard.x < 0 || guard.y < 0 || guard.x >= frame.dimx || guard.y >= frame.dimy ||
                guard.source.empty() || guard.source.size() > size_t(frame.dimx - guard.x)) return false;
        for (size_t byte = 0; byte < guard.source.size(); ++byte) {
            const size_t at = (size_t(guard.x) + byte) * frame.dimy + guard.y;
            const auto expected = static_cast<unsigned char>(guard.source[byte]);
            if (grid[at * 8] != expected || (flags[at] & ((1u << 3) | (1u << 4))) ||
                    (expected && expected != ' ' &&
                    native_ui_top_layer_at(gps, at) != group.top_layer)) return false;
        }
    }
    return true;
}

template<typename CurrentRecord, typename Memory, typename Fit>
static std::vector<NativeCapturedUiFrame::Chronicle> native_shared_chronicle_plan(
        const NativeSharedChronicleSnapshot &snapshot, const NativeCapturedUiFrame &frame,
        const graphicst &gps, const NativeUiLayerGrid &input,
        const std::array<std::vector<NativeDrawnTextRow>, 2> &captions,
        const std::array<std::unordered_map<size_t, uint64_t>, 2> &writers,
        const NativeBitmapFontTextures &fonts, CurrentRecord current_record, Memory memory, Fit fit) {
    std::vector<NativeCapturedUiFrame::Chronicle> result;
    if (!snapshot.stable || !snapshot.rows || !snapshot.width || *snapshot.width <= 0 ||
            *snapshot.width > frame.dimx || snapshot.rows->first < 0 ||
            snapshot.rows->first >= snapshot.rows->second || snapshot.rows->second > frame.dimy) return result;
    using Span = NativeCapturedUiFrame::Span;
    std::map<uint64_t, std::vector<Span>> sources;
    std::set<uint64_t> rejected;
    std::optional<SDL_Rect> allocation;
    std::optional<int64_t> paragraph_left;
    std::optional<bool> plane;
    const auto same_clip = [](const SDL_Rect &a, const SDL_Rect &b) {
        return a.x == b.x && a.y == b.y && a.w == b.w && a.h == b.h;
    };
    const auto owned = [&](const NativeDrawnTextRow &draw) {
        if (!current_record(draw) || !draw.completed_draw || !draw.worldgen_draw ||
                draw.draw_owner != frame.owner || !draw.sequence || !draw.native_caller ||
                !draw.draw_clip || draw.editable_text || draw.complete_source.empty() ||
                draw.native_half_writer) return false;
        const auto &clip = *draw.draw_clip;
        if (draw.x < clip.x || draw.y < clip.y || draw.y >= int64_t(clip.y) + clip.h ||
                int64_t(draw.x) + draw.source.size() > int64_t(clip.x) + clip.w) return false;
        const auto &raster = input.planes[draw.top_layer ? 1 : 0];
        for (size_t byte = 0; byte < draw.source.size(); ++byte) {
            const size_t at = (size_t(draw.x) + byte) * frame.dimy + draw.y;
            const auto last = writers[draw.top_layer ? 1 : 0].find(at);
            const auto expected = static_cast<unsigned char>(draw.source[byte]);
            if (last == writers[draw.top_layer ? 1 : 0].end() || last->second != draw.sequence ||
                    raster.screen[at * 8] != expected || (raster.flags[at] & ((1u << 3) | (1u << 4))) ||
                    (expected != ' ' && native_ui_top_layer_at(gps, at) != draw.top_layer)) return false;
            if (expected != ' ') for (size_t slot : {size_t{0}, size_t{1}, size_t{2}})
                if (raster.textures[slot][at] && !fonts.contains(raster.textures[slot][at], expected)) return false;
            if (raster.textures[2][at] && (raster.textures[3][at] || raster.textures[4][at])) return false;
        }
        return true;
    };
    for (const auto &draw : snapshot.draws) {
        const auto sequence = draw.document->sequence;
        if (draw.token_index >= draw.document->tokens.size() || draw.epoch != frame.capture_epoch) {
            rejected.insert(sequence); continue;
        }
        const auto &token = draw.document->tokens[draw.token_index];
        if (token.source.empty()) continue;
        const auto before_draw = snapshot.writer_floors.find({token.identity, draw.x, draw.y});
        if (before_draw == snapshot.writer_floors.end()) { rejected.insert(sequence); continue; }
        const int first = std::max({0, draw.x, draw.clip_left});
        const int end = static_cast<int>(std::min<int64_t>({frame.dimx, draw.clip_right,
            int64_t(draw.x) + int64_t(token.source.size())}));
        if (first >= end || draw.y < snapshot.rows->first || draw.y >= snapshot.rows->second) continue;
        const NativeDrawnTextRow *match = nullptr;
        bool ambiguous = false;
        for (const auto &values : captions) for (const auto &caption : values) {
            if (caption.address != token.identity || caption.x != first || caption.y != draw.y ||
                    caption.sequence <= before_draw->second ||
                    caption.complete_source != token.source || caption.source !=
                    token.source.substr(first - draw.x, end - first) || !owned(caption) ||
                    caption.draw_clip->x != draw.clip_left ||
                    int64_t(caption.draw_clip->x) + caption.draw_clip->w != draw.clip_right) continue;
            if (match) ambiguous = true; else match = &caption;
        }
        if (!match || ambiguous) { rejected.insert(sequence); continue; }
        const int64_t origin = int64_t(draw.x) - token.x;
        if (!allocation) {
            allocation = *match->draw_clip; plane = match->top_layer; paragraph_left = origin;
        }
        if (!same_clip(*allocation, *match->draw_clip) || *plane != match->top_layer ||
                *paragraph_left != origin) {
            rejected.insert(sequence); continue;
        }
        Span span; span.x = match->x; span.y = match->y; span.source = match->source;
        span.sequence = match->sequence; span.top_layer = match->top_layer;
        sources[sequence].push_back(std::move(span));
        const auto *cell = match->draw_grid + (size_t(match->x) * frame.dimy + match->y) * 8;
        remember_worldgen_event_color(*draw.document, draw.token_index,
            (cell[1] << 16) | (cell[2] << 8) | cell[3]);
    }
    if (!allocation || !plane || !paragraph_left || *paragraph_left < 0 ||
            *paragraph_left >= frame.dimx || *paragraph_left + *snapshot.width > frame.dimx) return result;
    const int left = static_cast<int>(std::max<int64_t>(allocation->x, *paragraph_left));
    const int right = static_cast<int>(std::min<int64_t>(int64_t(allocation->x) + allocation->w,
        *paragraph_left + *snapshot.width));
    const int top = std::max(snapshot.rows->first, allocation->y);
    const int bottom = static_cast<int>(std::min<int64_t>(snapshot.rows->second, int64_t(allocation->y) + allocation->h));
    if (left >= right || top >= bottom) return result;
    const int origin_x = (frame.pixel_x - frame.dimx * frame.tile_x) / 2;
    const int origin_y = (frame.pixel_y - frame.dimy * frame.tile_y) / 2;
    const SDL_Rect clip{origin_x + left * frame.tile_x, origin_y + top * frame.tile_y,
        (right - left) * frame.tile_x, (bottom - top) * frame.tile_y};
    const auto &raster = input.planes[*plane ? 1 : 0];
    std::map<int, std::vector<NativeTextCardRow>> fields;
    // Retain all current writers, including unsupported events and controls.
    // Split overwritten captures at actual sequence boundaries, never by text.
    for (const auto &values : captions) for (const auto &draw : values) {
        if (!current_record(draw) || draw.top_layer != *plane || draw.y < top || draw.y >= bottom) continue;
        int first = -1;
        const auto flush = [&](int end) {
            if (first < 0) return;
            NativeTextCardRow row; row.x = first; row.y = draw.y;
            row.source = draw.source.substr(first - draw.x, end - first);
            fields[row.y].push_back(std::move(row));
        };
        for (int x = draw.x; x <= draw.x + static_cast<int>(draw.source.size()); ++x) {
            bool current = x < draw.x + static_cast<int>(draw.source.size()) && x >= left && x < right;
            if (current) {
                const size_t at = size_t(x) * frame.dimy + draw.y;
                const auto writer = writers[*plane ? 1 : 0].find(at);
                current = writer != writers[*plane ? 1 : 0].end() && writer->second == draw.sequence &&
                    raster.screen[at * 8] == static_cast<unsigned char>(draw.source[x - draw.x]);
            }
            if (current && first < 0) first = x;
            if (!current && first >= 0) { flush(x); first = -1; }
        }
    }
    // A rejected event reserves all of its native rows before another event
    // is laid out. Recompute after destination collisions until no additional
    // event is rejected; this finite set only grows, never invents ownership.
    for (;;) {
        std::vector<std::string> context(frame.dimy);
        auto layouts = native_chronicle_layout(left, right, top, bottom, frame.tile_y, clip,
            fields, snapshot.draws, snapshot.unbound, context,
            [&](int x, int y, unsigned char expected) {
                const size_t at = size_t(x) * frame.dimy + y;
                return raster.screen[at * 8] == expected && (expected == ' ' ||
                    native_ui_top_layer_at(gps, at) == *plane);
            }, [&](const NativeHistoryDocument &document) {
                return rejected.contains(document.sequence) || !sources.contains(document.sequence)
                    ? static_cast<const WorldgenHistoryEventMemory *>(nullptr) : memory(document);
            }, fit);
        std::unordered_map<size_t, uint64_t> erased;
        for (const auto &layout : layouts) if (layout.translated) {
            for (const auto &source : sources[layout.document->sequence])
                for (size_t byte = 0; byte < source.source.size(); ++byte)
                    erased[(size_t(source.x) + byte) * frame.dimy + source.y] = source.sequence;
        }
        bool changed = false;
        result.clear();
        for (auto &layout : layouts) {
            if (!layout.translated) continue;
            NativeCapturedUiFrame::Chronicle group;
            group.document = layout.document; group.top_layer = *plane;
            group.history_generation = snapshot.generation; group.history_revision = snapshot.revision;
            group.sources = sources[layout.document->sequence];
            bool valid = !group.sources.empty();
            std::set<int> guarded_rows;
            for (auto &match : layout.matches) {
                if (match.target.empty() || match.native_help_source_only) continue;
                const int height = (std::max(frame.tile_y, match.layout_line_height_pixels) + frame.tile_y - 1) / frame.tile_y;
                if (match.layout_y < top || int64_t(match.layout_y) + height > bottom) { valid = false; break; }
                for (int y = match.layout_y; valid && y < match.layout_y + height; ++y) {
                    if (!guarded_rows.insert(y).second) continue;
                    Span guard; guard.x = left; guard.y = y; guard.top_layer = *plane;
                    for (int x = left; x < right; ++x) {
                        const size_t at = size_t(x) * frame.dimy + y;
                        const auto ch = raster.screen[at * 8];
                        guard.source.push_back(static_cast<char>(ch));
                        if (erased.contains(at)) continue;
                        // Unknown ink/artwork, a different completed writer
                        // (even spaces), or the other plane reserves the cell.
                        const auto writer = writers[*plane ? 1 : 0].find(at);
                        if ((ch && ch != ' ') || writer != writers[*plane ? 1 : 0].end() ||
                                (raster.flags[at] & ((1u << 3) | (1u << 4))) ||
                                (native_ui_top_layer_at(gps, at) != *plane &&
                                 (gps.screen_top && gps.screen_top[at * 8] && gps.screen_top[at * 8] != ' '))) valid = false;
                        for (size_t slot : {size_t{0}, size_t{1}, size_t{2}})
                            if (raster.textures[slot][at] && !fonts.contains(raster.textures[slot][at], ch)) valid = false;
                        if (raster.textures[3][at] || raster.textures[4][at]) valid = false;
                        if (!valid) break;
                    }
                    group.guards.push_back(std::move(guard));
                }
                match.native_captured_span = true;
                match.graphical_clear_width = match.graphical_clear_height = 0;
                match.graphical_auto_foreground = false;
                group.matches.push_back(std::move(match));
            }
            if (!valid || group.matches.empty()) {
                changed |= rejected.insert(layout.document->sequence).second;
            } else result.push_back(std::move(group));
        }
        if (!changed) break;
    }
    if (!native_shared_chronicle_registry_current(snapshot.generation, snapshot.revision)) result.clear();
    return result;
}
