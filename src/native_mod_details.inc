// Resolve the current mod owner's native identity before translating any
// wrapped prose. Display names and authors never identify a vanilla mod.
static uintptr_t native_mod_field_address(uintptr_t object, size_t offset) {
    return object && offset != SIZE_MAX && offset <= UINTPTR_MAX - object ?
        object + offset : 0;
}

static bool native_mod_copy_header(uintptr_t address, NativeModHeader &header) {
    const auto field = [&](size_t coordinate, size_t width = 1) {
        return native_history_object_field(address, "mod_headerst", coordinate, width);
    };
    uint32_t flags = 0;
    if (!native_history_copy_string(field(0x40, 32), header.id) ||
            !native_history_copy(field(0x60, 4), header.numeric_version) ||
            !native_history_copy_string(field(0x68, 32), header.displayed_version) ||
            !native_history_copy(field(0x88, 4), header.earliest_compatible_numeric_version) ||
            !native_history_copy_string(field(0x90, 32), header.earliest_compatible_displayed_version) ||
            !native_history_copy_string(field(0xb0, 32), header.author) ||
            !native_history_copy_string(field(0xd0, 32), header.name) ||
            !native_history_copy_string(field(0xf0, 32), header.description) ||
            !native_history_copy(field(0x158, 4), flags)) return false;
    header.vanilla = (flags & 0x4u) != 0;
    return true;
}

static NativeModDetails native_mod_details(bool background_owner, const graphicst *graphics) {
    NativeModDetails details;
    if (!native_history_profile_base()) return details;
    uintptr_t screen = native_current_viewscreen();
    if (!screen) return details;
    const native_history_layout::ModScreenFields *fields = nullptr;
    std::string_view type;
    std::array<uintptr_t, 64> visited{};
    for (size_t depth = 0; depth < visited.size(); ++depth) {
        if (!screen || std::find(visited.begin(), visited.begin() + depth, screen) !=
                visited.begin() + depth) return {};
        visited[depth] = screen;
        if (native_history_object_is(screen, "viewscreen_titlest")) {
            type = "viewscreen_titlest";
            fields = &native_history_layout::mod_title_fields;
            details.kind = NativeModScreenKind::Title;
            break;
        }
        if (native_history_object_is(screen, "viewscreen_new_regionst")) {
            type = "viewscreen_new_regionst";
            fields = &native_history_layout::mod_newregion_fields;
            details.kind = NativeModScreenKind::NewRegion;
            break;
        }
        if (native_history_object_is(screen, "viewscreen_new_arenast")) {
            type = "viewscreen_new_arenast";
            fields = &native_history_layout::mod_newarena_fields;
            details.kind = NativeModScreenKind::NewArena;
            break;
        }
        // A DFHack window becomes the current viewscreen while rendering
        // the selector beneath it. Only the restored background pass may
        // borrow that parent's ownership; the foreground keeps its controls.
        if (!background_owner) return {};
        uintptr_t parent = 0;
        if (!native_history_copy(native_viewscreen_field(screen,
                {0x10, "viewscreen", "parent"}, sizeof(parent)), parent)) return {};
        screen = parent;
    }
    if (!fields) return {};
    const auto field = [&](size_t offset) { return native_mod_field_address(screen, offset); };
    uint8_t active = 0;
    if (!native_history_copy(field(fields->active), active) || active != 1) return {};
    std::array<int32_t, 4> rect{};
    bool have_rect = true;
    for (size_t index = 0; index < rect.size(); ++index)
        have_rect = native_history_copy(native_history_object_field(
            screen, type, 0x30 + index * 4, 4), rect[index]) && have_rect;
    if (have_rect && rect[0] <= rect[2] && rect[1] <= rect[3]) details.widget_rect = rect;

    const auto *gps = graphics ? graphics : native_graphics();
    if (!gps || !gps->screen || gps->dimx <= 0 || gps->dimx > 1000 ||
            gps->dimy <= 2 || gps->dimy > 1000) return details;
    std::vector<uintptr_t> title_addresses;
    uint64_t epoch = 0;
    // A private UI component retains its caption registry with its grid.
    // Its draw epoch need not equal the newer background capture epoch;
    // reject concurrent capture changes while retaining that component.
    const uint64_t capture_epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        epoch = g_native_drawn_text_epoch;
        if (!epoch) return details;
        const auto capture = [&](const auto &draws) {
            for (const auto &draw : draws) {
                if (draw.y != 2 || !draw.address || draw.source.empty() ||
                        draw.draw_epoch != epoch || draw.draw_dimx != gps->dimx ||
                        draw.draw_dimy != gps->dimy) continue;
                const auto *grid = draw.top_layer ? gps->screen_top : gps->screen;
                if (!grid || draw.draw_grid != grid) continue;
                int64_t left = std::max<int64_t>(0, draw.x);
                int64_t right = std::min<int64_t>(gps->dimx,
                    static_cast<int64_t>(draw.x) + static_cast<int64_t>(draw.source.size()));
                if (draw.draw_clip) {
                    const auto &clip = *draw.draw_clip;
                    if (draw.y < clip.y || draw.y >= static_cast<int64_t>(clip.y) + clip.h) continue;
                    left = std::max<int64_t>(left, clip.x);
                    right = std::min<int64_t>(right, static_cast<int64_t>(clip.x) + clip.w);
                }
                if (right <= left) continue;
                bool current = true;
                for (int64_t x = left; current && x < right; ++x) {
                    const size_t tile = static_cast<size_t>(x) * gps->dimy + draw.y;
                    const unsigned char ch = grid[tile * 8];
                    current = native_ui_top_layer_at(*gps, tile) == draw.top_layer &&
                        (ch ? ch : ' ') == static_cast<unsigned char>(
                            draw.source[static_cast<size_t>(x - draw.x)]);
                }
                if (current) title_addresses.push_back(draw.address);
            }
        };
        capture(g_native_drawn_text_rows);
        capture(g_native_drawn_top_text_rows);
    }
    if (title_addresses.empty() || capture_epoch !=
            g_embark_item_capture_epoch.load(std::memory_order_acquire)) return details;
    // The mod renderer passes the actual header.name string directly to
    // addst at row 2. Its cached last_hover ID/version are never updated by
    // that renderer, so only this visible draw's owner identifies the header.
    for (const size_t offset : fields->headers) {
        if (offset == SIZE_MAX) continue;
        NativeBorrowedVector<uintptr_t> headers{};
        if (!native_history_read_vector(field(offset), headers) || headers.size() > 16384) continue;
        for (size_t index = 0; index < headers.size(); ++index) {
            const uintptr_t address = native_history_vector_at(headers, index);
            if (!address) continue;
            const uintptr_t name = native_history_object_field(
                address, "mod_headerst", 0xd0, 32);
            if (!name || std::find(title_addresses.begin(), title_addresses.end(), name) ==
                    title_addresses.end()) continue;
            NativeModHeader header;
            if (native_mod_copy_header(address, header)) details.header = std::move(header);
            break;
        }
        if (details.header) break;
    }
    if (capture_epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) {
        details.header.reset();
        return details;
    }
    if (!details.header) return details;
    NativeBorrowedVector<uintptr_t> rows{};
    if (!native_history_read_vector(field(fields->hover_rows), rows) || rows.size() > 16384)
        return details;
    size_t remaining = kNativeHistorySourceLimit;
    for (size_t index = 0; index < rows.size(); ++index) {
        std::string row;
        if (!native_history_copy_string(native_history_vector_at(rows, index), row) ||
                row.size() > remaining) {
            details.description_rows.clear();
            return details;
        }
        remaining -= row.size();
        details.description_rows.push_back(std::move(row));
    }
    if (capture_epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) {
        details.header.reset();
        details.description_rows.clear();
    }
    return details;
}
