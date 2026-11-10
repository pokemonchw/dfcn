// DFHack's graphical paintTile clears the character byte before storing its
// artwork. Retain the original pen characters and exact texture positions at
// that boundary; capture reads can then exclude only the still-visible logo.
struct NativeDfhackLogoCapture {
    SDL_Rect bounds{};
    int dimx = 0, dimy = 0;
    std::array<int32_t, 12> textures{};
    bool top_layer = false;
};

static bool install_native_dfhack_capture_hook();
static void uninstall_native_dfhack_capture_hook();
static bool native_dfhack_capture_hook_active();
static bool install_native_dfhack_render_layers();
static void uninstall_native_dfhack_render_layers();
static bool native_dfhack_render_layers_active();
static bool native_dfhack_render_native_scan_blocked(const graphicst *gps) noexcept;
static bool install_native_dfhack_console_hook();
static bool install_native_dfhack_lua_output_hook();
static bool install_native_dfhack_sitemap_hook();
static std::optional<std::string> lookup_native_dfhack_sitemap_text(
    const graphicst *gps, int x, int y, std::string_view visible);
static std::optional<std::string> lookup_native_dfhack_notification_text(
    const graphicst *gps, int x, int y, std::string_view visible);
struct NativeDfhackNotificationText {
    int x = 0, y = 0;
    std::string full, visible;
};
static std::vector<NativeDfhackNotificationText> native_dfhack_notification_texts(
    const graphicst *gps);
enum class NativeDfhackOverlayTextRole : unsigned char {
    Text, Option, Key, Material, Category, Item,
    SpectateName, SpectateJob, SpectateActivity, SpectateLiteral, ArtifactName, WrittenWorkHeading,
    Plant
};
struct NativeDfhackOverlayText {
    int x = 0, y = 0, full_x = 0, visible_offset = 0;
    std::string full, visible;
    // Final colors from the same native layer that proves each visible byte.
    std::vector<int> visible_foregrounds;
    NativeDfhackOverlayTextRole role = NativeDfhackOverlayTextRole::Text;
    // These describe the actual selected options entry, never its spelling.
    bool option_dynamic = false, option_name = false;
    bool plant_growth = false;
    int option_idx = 0;
    uintptr_t widget_id = 0;
    std::string overlay_name, view_id, caption;
    // Buildingplan List rows retain their native count/separator separately
    // from the complete material name and its RAW category.
    std::string material_source, material_category;
    int material_offset = 0;
    // QuickFilter's drawn clear control proves that the slot stores a label.
    // The label and clear control are distinct children of this same parent.
    uintptr_t quick_filter_id = 0;
    bool quick_filter_label = false, quick_filter_clear = false;
    bool quick_filter_clear_visible = false;
};
static std::vector<NativeDfhackOverlayText> native_dfhack_overlay_texts(
    const graphicst *gps);
enum class NativeDfhackControlPanelTextRole : unsigned char { Text, Wrapped, Tool, Key };
struct NativeDfhackControlPanelText {
    int x = 0, y = 0, full_x = 0, visible_offset = 0;
    std::string full, visible, document, extension_prose_key;
    std::vector<int> visible_foregrounds;
    uintptr_t widget_id = 0;
    SDL_Rect bounds{};
    // Absolute zero-based document line for Wrapped; zero for a Label token.
    int first_line = 0;
    NativeDfhackControlPanelTextRole role = NativeDfhackControlPanelTextRole::Text;
    SDL_Rect clip_bounds{}, parent_bounds{};
    uintptr_t parent_id = 0;
    int native_width = 0, total_lines = 0;
    // Byte position in the unwrapped document, independent of screen rows.
    size_t document_offset = std::string::npos;
    int line_offset = 0;
};
static std::vector<NativeDfhackControlPanelText> native_dfhack_control_panel_texts(
    const graphicst *gps);
static uint64_t native_dfhack_text_capture_key(const graphicst *gps);
static void clear_native_dfhack_text_buffer(const graphicst *gps);
static std::optional<std::string> lookup_native_dfhack_animal_assignment_text(
    const graphicst *gps, int x, int y, std::string_view visible);
static std::optional<std::string> lookup_native_dfhack_trade_goods_text(
    const graphicst *gps, int x, int y, std::string_view visible);
static std::optional<std::string> lookup_native_dfhack_autotraining_unit_text(
    const graphicst *gps, int x, int y, std::string_view visible);
struct NativeDfhackAutotrainingSquadText {
    int32_t squad_id = -1;
    NativeHistoryName generated_name;
    std::string generated_source;
};
static std::optional<NativeDfhackAutotrainingSquadText> lookup_native_dfhack_autotraining_squad_text(
    const graphicst *gps, int x, int y, std::string_view visible);
static bool install_native_dfhack_messagebox_hook();
static bool install_native_dfhack_prompt_hook();
static bool install_native_dfhack_stonesense_hook();
static bool native_dfhack_stonesense_hook_active();
static bool native_dfhack_stonesense_window_active();
static void clear_dfhack_stonesense_announcements() noexcept;
static std::optional<std::string> lookup_dfhack_stonesense_announcement(std::string_view source);

struct NativeDfhackTileWrite {
    const graphicst *graphics = nullptr;
    const unsigned char *source_grid = nullptr;
    int x = 0, y = 0, dimx = 0, dimy = 0;
    int32_t texture = 0;
    unsigned char ch = 0;
    bool top_layer = false;
};

// A graphical tile can erase its character byte while retaining its texture.
// Keep this semantic identity beside the private plane that owns the write.
struct NativeDfhackArtworkPen {
    int32_t texture = 0;
    unsigned char ch = 0;
};
static void native_dfhack_layer_record_artwork_tile(const graphicst *gps,
    const void *pen, int x, int y) noexcept;
static const std::vector<NativeDfhackArtworkPen> *native_dfhack_layer_artwork_pens(
    const graphicst *gps, bool top) noexcept;

static std::mutex g_native_dfhack_logo_mutex;
static std::array<NativeDfhackTileWrite, 12> g_native_dfhack_tile_writes{};
static size_t g_native_dfhack_tile_next = 0, g_native_dfhack_tile_count = 0;
static std::array<NativeDfhackLogoCapture, 16> g_native_dfhack_logos{};
static size_t g_native_dfhack_logo_count = 0, g_native_dfhack_logo_next = 0;
// Empty capture queries occur for every native glyph. Avoid taking the
// record mutex until a complete logo has actually been published.
static std::atomic_bool g_native_dfhack_has_logos{false};
// A necessary coordinate filter for per-cell queries. Keep every published
// capture inside this union, including stale entries; exact current texture
// ownership is still checked under the record mutex for cells inside it.
static std::atomic<uint64_t> g_native_dfhack_logo_extent{0};
// DFHack paints its window, dividers and control buttons as textured tiles.
// Keep their original pen identity without reviving covered old artwork.
static std::vector<NativeDfhackTileWrite> g_native_dfhack_border_tiles;
static int g_native_dfhack_border_dimx = 0, g_native_dfhack_border_dimy = 0;

static bool native_dfhack_logo_grid_valid(const graphicst *gps) {
    return gps && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
}

// Caller holds the record mutex. Four exclusive bounds fit in ten bits each
// because the native grid is bounded by 1000 cells in either dimension.
static void expand_native_dfhack_logo_extent(const SDL_Rect &bounds) {
    const uint64_t previous = g_native_dfhack_logo_extent.load(std::memory_order_relaxed);
    const bool valid = (previous & (uint64_t{1} << 40)) != 0;
    const int left = valid ? std::min(bounds.x, static_cast<int>(previous & 1023)) : bounds.x;
    const int top = valid ? std::min(bounds.y, static_cast<int>((previous >> 10) & 1023)) : bounds.y;
    const int right = valid ? std::max(bounds.x + bounds.w,
        static_cast<int>((previous >> 20) & 1023)) : bounds.x + bounds.w;
    const int bottom = valid ? std::max(bounds.y + bounds.h,
        static_cast<int>((previous >> 30) & 1023)) : bounds.y + bounds.h;
    const uint64_t extent = (uint64_t{1} << 40) | static_cast<uint64_t>(left) |
        (static_cast<uint64_t>(top) << 10) | (static_cast<uint64_t>(right) << 20) |
        (static_cast<uint64_t>(bottom) << 30);
    g_native_dfhack_logo_extent.store(extent, std::memory_order_release);
}

static void clear_native_dfhack_logo_captures() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_logo_mutex);
    g_native_dfhack_tile_writes = {};
    g_native_dfhack_tile_next = g_native_dfhack_tile_count = 0;
    g_native_dfhack_logos = {};
    g_native_dfhack_logo_count = g_native_dfhack_logo_next = 0;
    g_native_dfhack_border_tiles.clear();
    g_native_dfhack_border_dimx = g_native_dfhack_border_dimy = 0;
    g_native_dfhack_has_logos.store(false, std::memory_order_release);
    g_native_dfhack_logo_extent.store(0, std::memory_order_release);
}

static void record_native_dfhack_tile_write(const graphicst *gps,
        const void *pen, int x, int y) {
    if (!pen || !native_dfhack_logo_grid_valid(gps) || x < 0 || y < 0 ||
            x >= gps->dimx || y >= gps->dimy) return;
    native_dfhack_layer_record_artwork_tile(gps, pen, x, y);
    NativeDfhackTileWrite write;
    write.graphics = gps;
    write.x = x;
    write.y = y;
    write.dimx = gps->dimx;
    write.dimy = gps->dimy;
    write.top_layer = gps->top_in_use;
    const size_t tile = static_cast<size_t>(x) * gps->dimy + y;
    const auto origin = native_text_grid_origin(*gps, tile, write.top_layer);
    write.source_grid = origin.grid;
    write.top_layer = origin.top_layer;
    const auto *bytes = static_cast<const unsigned char *>(pen);
    write.ch = bytes[0];
    std::memcpy(&write.texture, bytes + 4, sizeof(write.texture));

    std::lock_guard<std::mutex> lock(g_native_dfhack_logo_mutex);
    // A callback already in flight when the hook was detached must not
    // repopulate records that shutdown has just cleared.
    if (!native_dfhack_capture_hook_active()) return;
    if (g_native_dfhack_border_dimx != write.dimx ||
            g_native_dfhack_border_dimy != write.dimy) {
        g_native_dfhack_border_tiles.assign(
            static_cast<size_t>(write.dimx) * write.dimy * 2, {});
        g_native_dfhack_border_dimx = write.dimx;
        g_native_dfhack_border_dimy = write.dimy;
    }
    const size_t border_at = (static_cast<size_t>(write.x) * write.dimy + write.y) * 2 +
        static_cast<size_t>(write.top_layer);
    const bool frame_character = write.ch >= 0xb3 && write.ch <= 0xda;
    const bool configure_character = write.ch == '[' || write.ch == 0x0f ||
        write.ch == '?' || write.ch == ']';
    // Notify's scrollbar and Air/Blood bars use textured pens whose native
    // character bytes were cleared by paintTile, just like its frame rails.
    const bool notification_character = write.ch == '/' || write.ch == '\\' ||
        write.ch == 176 || write.ch == 177 || write.ch == 219;
    g_native_dfhack_border_tiles[border_at] =
        (frame_character || configure_character || notification_character) && write.texture > 0
            ? write : NativeDfhackTileWrite{};
    g_native_dfhack_tile_writes[g_native_dfhack_tile_next] = write;
    g_native_dfhack_tile_next = (g_native_dfhack_tile_next + 1) %
        g_native_dfhack_tile_writes.size();
    g_native_dfhack_tile_count = std::min(g_native_dfhack_tile_count + 1,
        g_native_dfhack_tile_writes.size());
    if (g_native_dfhack_tile_count != g_native_dfhack_tile_writes.size()) return;

    static constexpr std::array<unsigned char, 12> chars{
        0xb3, 'D', 'F', 0xb3, 0xb3, 'H', 'a', 0xb3,
        0xb3, 'c', 'k', 0xb3,
    };
    const auto &first = g_native_dfhack_tile_writes[g_native_dfhack_tile_next];
    if (first.x > first.dimx - 4 || first.y > first.dimy - 3) return;
    NativeDfhackLogoCapture capture;
    capture.bounds = SDL_Rect{first.x, first.y, 4, 3};
    capture.dimx = first.dimx;
    capture.dimy = first.dimy;
    capture.top_layer = first.top_layer;
    for (size_t i = 0; i < chars.size(); ++i) {
        const auto &cell = g_native_dfhack_tile_writes[
            (g_native_dfhack_tile_next + i) % g_native_dfhack_tile_writes.size()];
        if (cell.ch != chars[i] || cell.texture <= 0 ||
                cell.graphics != first.graphics || cell.dimx != first.dimx ||
                cell.dimy != first.dimy || cell.top_layer != first.top_layer ||
                cell.x != first.x + static_cast<int>(i % 4) ||
                cell.y != first.y + static_cast<int>(i / 4)) return;
        capture.textures[i] = cell.texture;
    }
    for (size_t i = 0; i < g_native_dfhack_logo_count; ++i) {
        auto &other = g_native_dfhack_logos[i];
        if (other.bounds.x == capture.bounds.x && other.bounds.y == capture.bounds.y &&
                other.dimx == capture.dimx && other.dimy == capture.dimy &&
                other.top_layer == capture.top_layer) {
            other = capture;
            return;
        }
    }
    expand_native_dfhack_logo_extent(capture.bounds);
    if (g_native_dfhack_logo_count < g_native_dfhack_logos.size()) {
        g_native_dfhack_logos[g_native_dfhack_logo_count++] = capture;
    } else {
        g_native_dfhack_logos[g_native_dfhack_logo_next] = capture;
        g_native_dfhack_logo_next = (g_native_dfhack_logo_next + 1) %
            g_native_dfhack_logos.size();
    }
    g_native_dfhack_has_logos.store(true, std::memory_order_release);
}

static std::vector<NativeDfhackLogoCapture> native_dfhack_logo_captures() {
    if (!g_native_dfhack_has_logos.load(std::memory_order_acquire)) return {};
    std::lock_guard<std::mutex> lock(g_native_dfhack_logo_mutex);
    return {g_native_dfhack_logos.begin(),
        g_native_dfhack_logos.begin() + g_native_dfhack_logo_count};
}

static void retain_native_dfhack_border_chars(const graphicst &gps,
        std::vector<std::string> &rows) {
    if (!native_dfhack_logo_grid_valid(&gps) ||
            rows.size() != static_cast<size_t>(gps.dimy)) return;
    for (const auto &row : rows)
        if (row.size() != static_cast<size_t>(gps.dimx)) return;
    // Present and the translation worker hold the private layer lock. These
    // records were committed together with the exact arrays read below.
    const std::array<const std::vector<NativeDfhackArtworkPen> *, 2> pens{{
        native_dfhack_layer_artwork_pens(&gps, false),
        native_dfhack_layer_artwork_pens(&gps, true)
    }};
    if (!pens[0] || !pens[1]) return;
    for (int x = 0; x < gps.dimx; ++x) {
        for (int y = 0; y < gps.dimy; ++y) {
            const size_t tile = static_cast<size_t>(x) * gps.dimy + y;
            const bool top = native_ui_top_layer_at(gps, tile);
            const auto &write = (*pens[top])[tile];
            const auto *textures = top ? gps.screentexpos_top : gps.screentexpos;
            const bool live_texture = write.texture > 0 && textures &&
                textures[tile] == write.texture;
            if (rows[y][x] == ' ' && live_texture &&
                    ((write.ch >= 0xb3 && write.ch <= 0xda) ||
                    write.ch == '/' || write.ch == '\\' ||
                    write.ch == 176 || write.ch == 177 || write.ch == 219)) {
                rows[y][x] = static_cast<char>(write.ch);
                continue;
            }
            // Graphical ConfigureButton and HelpButton replace three cells
            // in the top rail. Restore only a complete live [gear] or [?]
            // sequence, rather than treating arbitrary bracket art as text.
            if (x > gps.dimx - 3 || (rows[y][x] != '[' &&
                    !(rows[y][x] == ' ' && live_texture && write.ch == '['))) continue;
            const size_t center_tile = static_cast<size_t>(x + 1) * gps.dimy + y;
            const bool center_top = native_ui_top_layer_at(gps, center_tile);
            const auto center_ch = rows[y][x + 1] == ' '
                ? (*pens[center_top])[center_tile].ch
                : static_cast<unsigned char>(rows[y][x + 1]);
            if (center_ch != 0x0f && center_ch != '?') continue;
            const std::array<unsigned char, 3> configure_chars{'[', center_ch, ']'};
            bool complete = true;
            for (size_t part = 0; complete && part < configure_chars.size(); ++part) {
                const int part_x = x + static_cast<int>(part);
                const size_t part_tile = static_cast<size_t>(part_x) * gps.dimy + y;
                const bool part_top = native_ui_top_layer_at(gps, part_tile);
                const auto &part_write = (*pens[part_top])[part_tile];
                const auto *part_textures = part_top ? gps.screentexpos_top : gps.screentexpos;
                // Each piece can independently use its fallback glyph or
                // native texture. Requiring all three to be blank rejects
                // the entire notification panel when only the gear is art.
                complete = part_top == top &&
                    (static_cast<unsigned char>(rows[y][part_x]) == configure_chars[part] ||
                     (rows[y][part_x] == ' ' && part_write.ch == configure_chars[part] &&
                      part_write.texture > 0 && part_textures &&
                      part_textures[part_tile] == part_write.texture));
            }
            if (complete)
                for (size_t part = 0; part < configure_chars.size(); ++part)
                    rows[y][x + static_cast<int>(part)] = static_cast<char>(configure_chars[part]);
        }
    }
}

// Caller holds the record mutex. Exact current textures reject an old draw
// after a page changes, resizes, or paints over any part of the logo.
static bool native_dfhack_logo_still_visible(const graphicst *gps,
        const NativeDfhackLogoCapture &capture) {
    if (!native_dfhack_logo_grid_valid(gps) || capture.dimx != gps->dimx ||
            capture.dimy != gps->dimy || (capture.top_layer && !gps->top_in_use) ||
            capture.bounds.x < 0 || capture.bounds.y < 0 ||
            capture.bounds.x > gps->dimx - 4 || capture.bounds.y > gps->dimy - 3)
        return false;
    const auto *textures = capture.top_layer ? gps->screentexpos_top : gps->screentexpos;
    if (!textures) return false;
    for (size_t i = 0; i < capture.textures.size(); ++i) {
        const size_t at = static_cast<size_t>(capture.bounds.x + i % 4) * gps->dimy +
            capture.bounds.y + i / 4;
        if (textures[at] != capture.textures[i]) return false;
    }
    return true;
}

static std::vector<SDL_Rect> native_dfhack_logo_regions(const graphicst *gps) {
    std::vector<SDL_Rect> regions;
    if (!native_dfhack_logo_grid_valid(gps) ||
            !g_native_dfhack_has_logos.load(std::memory_order_acquire)) return regions;
    std::lock_guard<std::mutex> lock(g_native_dfhack_logo_mutex);
    for (size_t i = 0; i < g_native_dfhack_logo_count; ++i) {
        const auto &capture = g_native_dfhack_logos[i];
        if (!native_dfhack_logo_still_visible(gps, capture)) continue;
        if (std::none_of(regions.begin(), regions.end(), [&](const SDL_Rect &other) {
                return other.x == capture.bounds.x && other.y == capture.bounds.y;
            })) regions.push_back(capture.bounds);
    }
    return regions;
}

static bool native_dfhack_logo_owns_cell(const graphicst *gps, int x, int y) {
    if (!native_dfhack_logo_grid_valid(gps) || x < 0 || y < 0 ||
            x >= gps->dimx || y >= gps->dimy ||
            !g_native_dfhack_has_logos.load(std::memory_order_acquire)) return false;
    const uint64_t extent = g_native_dfhack_logo_extent.load(std::memory_order_acquire);
    if (!(extent & (uint64_t{1} << 40)) ||
            x < static_cast<int>(extent & 1023) ||
            y < static_cast<int>((extent >> 10) & 1023) ||
            x >= static_cast<int>((extent >> 20) & 1023) ||
            y >= static_cast<int>((extent >> 30) & 1023)) return false;
    std::lock_guard<std::mutex> lock(g_native_dfhack_logo_mutex);
    for (size_t i = 0; i < g_native_dfhack_logo_count; ++i) {
        const auto &capture = g_native_dfhack_logos[i];
        if (x >= capture.bounds.x && x < capture.bounds.x + 4 &&
                y >= capture.bounds.y && y < capture.bounds.y + 3 &&
                native_dfhack_logo_still_visible(gps, capture)) return true;
    }
    return false;
}
