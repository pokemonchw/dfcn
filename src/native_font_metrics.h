#pragma once

#include "native_runtime.h"
#include "reloadable_thread_state.h"

#include <cstdint>
#include <cstring>
#include <fstream>
#include <string>
#include <string_view>
#include <utility>

namespace dfcn {
namespace native_font_metrics_detail {

struct EnglishInkRows {
    int cell_height = 0;
    std::array<std::vector<unsigned char>, 6> glyph_rows;
};

constexpr std::string_view ink_capitals = "AHIMNX";

#ifdef _WIN32
// renderer_2d_base's texture descriptors (53.16 PE 0x8dce4e and
// 0x8dcffe) select BASIC_TEXT first, otherwise the current fullscreen font.
// The normal table is also the source of the TOP/BOTTOM textures: their
// generator (0xc37270) moves each half within an unchanged-size surface.
struct NativeFontGlyph {
    int32_t texture = 0;
    SDL_Surface *surface = nullptr;
    void *pixels = nullptr;
    SDL_PixelFormat *format = nullptr;
    Uint32 pixel_format = 0;
    Uint32 surface_flags = 0;
    Uint32 red_mask = 0, green_mask = 0, blue_mask = 0, alpha_mask = 0;
    int width = 0, height = 0, pitch = 0;
    bool operator==(const NativeFontGlyph &) const = default;
};

struct NativeFontSource {
    uintptr_t table = 0;
    std::array<NativeFontGlyph, ink_capitals.size()> glyphs{};
    bool operator==(const NativeFontSource &) const = default;
};

inline bool copy_native_font_memory(uintptr_t address, void *destination, size_t size) {
    if (!address || size > UINTPTR_MAX - address) return false;
    SIZE_T copied = 0;
    return ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void *>(address),
        destination, size, &copied) && copied == size;
}

template<typename T>
inline bool copy_native_font_value(uintptr_t address, T &value) {
    return copy_native_font_memory(address, &value, sizeof(value));
}

inline std::optional<NativeFontSource> current_native_font_source() {
    uint8_t fullscreen = 0;
    uint32_t flags = 0;
    struct RawSurfaces { uintptr_t begin = 0, end = 0, capacity = 0; } raws;
    if (!native_pe_read_field(0x02390290, 0x8, fullscreen) ||
            !native_pe_read_field(0x02390290, 0x338, flags) ||
            !native_pe_read_field(0x02390290, 0x348, raws) ||
            !raws.begin || raws.end < raws.begin || raws.capacity < raws.end ||
            (raws.end - raws.begin) % sizeof(SDL_Surface *) ||
            (raws.end - raws.begin) / sizeof(SDL_Surface *) > (1u << 24))
        return std::nullopt;

    NativeFontSource result;
    std::array<int32_t, 256> textures{};
    result.table = reinterpret_cast<uintptr_t>(native_pe_field_address(0x023cd770,
        (flags & 0x4) ? 0xd8 : (fullscreen & 0x1) ? 0x8d8 : 0x4d8, sizeof(textures)));
    if (!copy_native_font_memory(result.table, textures.data(), sizeof(textures)))
        return std::nullopt;
    const size_t count = (raws.end - raws.begin) / sizeof(SDL_Surface *);
    for (size_t index = 0; index < ink_capitals.size(); ++index) {
        auto &glyph = result.glyphs[index];
        glyph.texture = textures[static_cast<unsigned char>(ink_capitals[index])];
        SDL_Surface surface{};
        SDL_PixelFormat format{};
        if (glyph.texture <= 0 || static_cast<size_t>(glyph.texture) >= count ||
                !copy_native_font_value(raws.begin + glyph.texture * sizeof(SDL_Surface *), glyph.surface) ||
                !copy_native_font_value(reinterpret_cast<uintptr_t>(glyph.surface), surface) ||
                !copy_native_font_value(reinterpret_cast<uintptr_t>(surface.format), format) ||
                !surface.pixels || surface.w <= 0 || surface.h <= 0 ||
                surface.w > 4096 || surface.h > 4096 || format.BytesPerPixel != 4 ||
                format.BitsPerPixel != 32 || format.palette || !format.Amask ||
                surface.pitch < surface.w * 4 || surface.pitch > 65536 ||
                (surface.flags & SDL_RLEACCEL) ||
                static_cast<size_t>(surface.pitch) * surface.h > 64u * 1024u * 1024u)
            return std::nullopt;
        glyph.pixels = surface.pixels;
        glyph.format = surface.format;
        glyph.pixel_format = format.format;
        glyph.surface_flags = surface.flags;
        glyph.red_mask = format.Rmask;
        glyph.green_mask = format.Gmask;
        glyph.blue_mask = format.Bmask;
        glyph.alpha_mask = format.Amask;
        glyph.width = surface.w;
        glyph.height = surface.h;
        glyph.pitch = surface.pitch;
    }
    return result;
}

inline EnglishInkRows load_native_english_ink_rows(const NativeFontSource &source) {
    EnglishInkRows result;
    bool any_ink = false;
    for (size_t index = 0; index < source.glyphs.size(); ++index) {
        const auto &glyph = source.glyphs[index];
        if (!result.cell_height) result.cell_height = glyph.height;
        if (result.cell_height != glyph.height) return {};

        // Native load_page (PE 0x131d3d0) first converts the atlas with
        // 0x131d230: its magenta color key becomes RGBA alpha. It then
        // creates each font glyph with that same 32-bit alpha format at
        // 0x131d610..0x131d689. Copy those actual bytes safely and decode
        // their copied alpha mask; never pass a borrowed surface, format,
        // palette or private blit map to SDL while resources may change.
        std::vector<unsigned char> pixels(static_cast<size_t>(glyph.pitch) * glyph.height);
        if (!copy_native_font_memory(reinterpret_cast<uintptr_t>(glyph.pixels),
                pixels.data(), pixels.size())) return {};
        auto &rows = result.glyph_rows[index];
        rows.assign(result.cell_height, 0);
        for (int y = 0; y < glyph.height; ++y) {
            const auto *row = pixels.data() + static_cast<size_t>(y) * glyph.pitch;
            for (int x = 0; x < glyph.width; ++x) {
                Uint32 pixel = 0;
                std::memcpy(&pixel, row + x * 4, sizeof(pixel));
                if (!(pixel & glyph.alpha_mask)) continue;
                rows[y] = 1;
                any_ink = true;
                break;
            }
        }
    }
    return any_ink ? result : EnglishInkRows{};
}
#endif

struct EnglishInkCache {
    bool refreshed = false;
    uint64_t revision = 0;
    EnglishInkRows rows;
#ifdef _WIN32
    std::optional<NativeFontSource> source;
#endif
};

inline EnglishInkCache &english_ink_cache() {
    return reloadable_thread_state<EnglishInkCache, struct EnglishInkCacheTag>();
}

inline std::filesystem::path executable_directory() {
#ifdef _WIN32
    std::wstring filename(32768, L'\0');
    const DWORD length = GetModuleFileNameW(nullptr, filename.data(),
        static_cast<DWORD>(filename.size()));
    if (!length || length >= filename.size()) return {};
    filename.resize(length);
    return std::filesystem::path(filename).parent_path();
#else
    std::error_code error;
    const auto filename = std::filesystem::read_symlink("/proc/self/exe", error);
    return error ? std::filesystem::path{} : filename.parent_path();
#endif
}

inline void read_basic_font(const std::filesystem::path &filename, std::string &font) {
    std::ifstream input(filename);
    std::string line;
    constexpr std::string_view token = "[BASIC_FONT:";
    while (std::getline(input, line)) {
        const auto start = line.find_first_not_of(" \t\r\n");
        if (start == std::string::npos || line.compare(start, token.size(), token) != 0)
            continue;
        const auto value_start = start + token.size();
        const auto end = line.find(']', value_start);
        if (end == std::string::npos) continue;
        const auto value = line.substr(value_start, end - value_start);
        if (!value.empty()) font = value;
    }
}

inline EnglishInkRows load_english_ink_rows() {
    EnglishInkRows result;
    const auto directory = executable_directory();
    if (directory.empty()) return result;

    // Retain the existing file fallback on hosts where a supported native
    // texture ABI is unavailable. Windows uses the live renderer below.
    std::string filename;
    read_basic_font(directory / "data" / "init" / "init_default.txt", filename);
    read_basic_font(directory / "prefs" / "init.txt", filename);
    if (filename.empty()) return result;

    using ImageLoadFn = SDL_Surface *(SDLCALL *)(const char *);
#ifdef _WIN32
    const auto image_library = GetModuleHandleW(L"SDL2_image.dll");
    const auto image_load = image_library
        ? reinterpret_cast<ImageLoadFn>(GetProcAddress(image_library, "IMG_Load"))
        : nullptr;
#else
    const auto image_load = reinterpret_cast<ImageLoadFn>(dlsym(RTLD_DEFAULT, "IMG_Load"));
#endif
    if (!image_load) return result;

    const auto path = directory / "data" / "art" / std::filesystem::u8path(filename);
    const auto utf8_path = path.u8string();
    SDL_Surface *source = image_load(reinterpret_cast<const char *>(utf8_path.c_str()));
    if (!source) return result;
    Uint32 color_key = 0;
    Uint8 key_r = 0, key_g = 0, key_b = 0, key_a = 0;
    const bool has_color_key = SDL_GetColorKey(source, &color_key) == 0;
    if (has_color_key)
        SDL_GetRGBA(color_key, source->format, &key_r, &key_g, &key_b, &key_a);
    SDL_Surface *surface = SDL_ConvertSurfaceFormat(source, SDL_PIXELFORMAT_RGBA32, 0);
    SDL_FreeSurface(source);
    if (!surface) return result;
    if (surface->w < 16 || surface->h < 16 || surface->w % 16 || surface->h % 16 ||
            SDL_LockSurface(surface) != 0) {
        SDL_FreeSurface(surface);
        return result;
    }

    const int cell_width = surface->w / 16;
    result.cell_height = surface->h / 16;
    constexpr std::string_view capitals = "AHIMNX";
    bool any_ink = false;
    for (size_t at = 0; at < capitals.size(); ++at) {
        const unsigned char character = capitals[at];
        const int left = (character % 16) * cell_width;
        const int top = (character / 16) * result.cell_height;
        auto &rows = result.glyph_rows[at];
        rows.assign(result.cell_height, 0);
        for (int y = 0; y < result.cell_height; ++y) {
            const auto *pixels = static_cast<const Uint8 *>(surface->pixels) +
                static_cast<size_t>(top + y) * surface->pitch + left * 4;
            for (int x = 0; x < cell_width; ++x) {
                const auto *pixel = pixels + x * 4;
                if (!pixel[3] || (pixel[0] == 255 && pixel[1] == 0 && pixel[2] == 255) ||
                        (has_color_key && pixel[0] == key_r && pixel[1] == key_g &&
                            pixel[2] == key_b)) continue;
                rows[y] = 1;
                any_ink = true;
                break;
            }
        }
    }
    SDL_UnlockSurface(surface);
    SDL_FreeSurface(surface);
    if (!any_ink) return {};
    return result;
}

} // namespace native_font_metrics_detail

// Native graphical text can be carried by a font texture after its source
// byte was cleared. Take the atlas IDs once before painting a private UI
// frame so both representations can be withheld before any glyph draw.
class NativeBitmapFontTextures {
#ifdef _WIN32
    std::array<std::array<int32_t, 256>, 9> tables_{};
    std::array<uintptr_t, 3> resource_pool_{};
    uint8_t fullscreen_ = 0, basic_text_ = 0, graphics_ = 0;
    int32_t filter_mode_ = 0;
    bool native_context_ready_ = false;
#endif
public:
    explicit NativeBitmapFontTextures(bool needed, bool capture_native_context = false) noexcept {
#ifdef _WIN32
        if (!needed) return;
        native_context_ready_ = capture_native_context;
        constexpr std::array<size_t, 9> offsets{{
            0xd8, 0x4d8, 0x8d8, 0x18d8, 0x1cd8, 0x20d8,
            0x24d8, 0x28d8, 0x2cd8
        }};
        for (size_t i = 0; i < offsets.size(); ++i)
            if (!native_pe_read_field(0x023cd770, offsets[i], tables_[i])) {
                tables_[i].fill(0);
                native_context_ready_ = false;
            }
        if (!capture_native_context) return;
        // These are precisely the non-cell selections read by PE describe
        // 8dcdb0/8dcf60 and update_tile: BASIC_TEXT, fullscreen font, and
        // init.display.flag[USE_GRAPHICS]. Keep only their relevant bits,
        // rather than render/MAXFPS bits that change native bookkeeping.
        uintptr_t display_flags = 0;
        int32_t display_flag_count = 0;
        uint32_t enabler_flags = 0;
        uint8_t display = 0;
        using native_font_metrics_detail::copy_native_font_value;
        if (!native_pe_read_field(0x02390290, 0x8, fullscreen_) ||
                !native_pe_read_field(0x02390290, 0x338, enabler_flags) ||
                !native_pe_read_field(0x023cd770, 0, display_flags) ||
                !native_pe_read_field(0x023cd770, 0x8, display_flag_count) ||
                (display_flag_count > 0 &&
                    !copy_native_font_value(display_flags, display)) ||
                // Texture getter 8dd2ee reads init.display.filter_mode.
                !native_pe_read_field(0x023cd770, 0x50, filter_mode_) ||
                // Texture getter 8dd177..8dd1a0 indexes this raw-surface
                // vector. Its identity supplements the nine atlas-ID tables.
                !native_pe_read_field(0x02390290, 0x348, resource_pool_) ||
                resource_pool_[1] < resource_pool_[0] ||
                resource_pool_[2] < resource_pool_[1] ||
                (resource_pool_[1] - resource_pool_[0]) % sizeof(SDL_Surface *))
            native_context_ready_ = false;
        fullscreen_ &= 0x1;
        basic_text_ = static_cast<uint8_t>(enabler_flags & 0x4);
        graphics_ = display_flag_count > 0 ? display & 0x1 : 0;
#else
        (void)needed; (void)capture_native_context;
#endif
    }
    bool contains(int32_t texture, unsigned char character) const noexcept {
#ifdef _WIN32
        if (texture <= 0 || !character || character == ' ') return false;
        for (const auto &table : tables_)
            if (table[character] == texture) return true;
#else
        (void)texture;
        (void)character;
#endif
        return false;
    }
    bool append_native_context(std::string &key) const {
#ifdef _WIN32
        if (!native_context_ready_) return false;
        key.append(reinterpret_cast<const char *>(tables_.data()), sizeof(tables_));
        key.append(reinterpret_cast<const char *>(resource_pool_.data()), sizeof(resource_pool_));
        key.append(reinterpret_cast<const char *>(&fullscreen_), sizeof(fullscreen_));
        key.append(reinterpret_cast<const char *>(&basic_text_), sizeof(basic_text_));
        key.append(reinterpret_cast<const char *>(&graphics_), sizeof(graphics_));
        key.append(reinterpret_cast<const char *>(&filter_mode_), sizeof(filter_mode_));
        // Resource identity only: no whole-pool scan or pixel readback is
        // performed. An in-place edit retaining every ID and pool allocation
        // must invalidate the overlay's native render generation separately.
        return true;
#else
        (void)key;
        return false;
#endif
    }
};

// Only an opaque, uniform current hover-centre source can replace a complete
// owned text body without sampling the renderer's finished target.
inline std::optional<int> native_hover_center_background_rgb(const graphicst &gps) {
    const auto classic = native_ui_classic();
    if (!classic) return std::nullopt;
    const int32_t centre = gps.texpos_hover_rectangle[1][1];
    if (*classic) {
        if (centre < 0 || centre > 0x7fff || (centre & 0xff) != ' ')
            return std::nullopt;
        const auto &color = gps.uccolor[(centre >> 11) & 7];
        return (color[0] << 16) | (color[1] << 8) | color[2];
    }
#ifdef _WIN32
    using native_font_metrics_detail::copy_native_font_memory;
    using native_font_metrics_detail::copy_native_font_value;
    struct RawSurfaces { uintptr_t begin = 0, end = 0, capacity = 0; } raws;
    if (centre <= 0 ||
            !native_pe_read_field(0x02390290, 0x348, raws) || !raws.begin ||
            raws.end < raws.begin || raws.capacity < raws.end ||
            (raws.end - raws.begin) % sizeof(SDL_Surface *) ||
            (raws.end - raws.begin) / sizeof(SDL_Surface *) > (1u << 24) ||
            static_cast<size_t>(centre) >= (raws.end - raws.begin) / sizeof(SDL_Surface *))
        return std::nullopt;
    SDL_Surface *address = nullptr;
    SDL_Surface surface{};
    SDL_PixelFormat format{};
    if (!copy_native_font_value(raws.begin + static_cast<size_t>(centre) * sizeof(address), address) ||
            !copy_native_font_value(reinterpret_cast<uintptr_t>(address), surface) ||
            !copy_native_font_value(reinterpret_cast<uintptr_t>(surface.format), format) ||
            !surface.pixels || surface.w <= 0 || surface.h <= 0 ||
            surface.w > 256 || surface.h > 256 ||
            surface.pitch < surface.w * 4 || surface.pitch > 4096 ||
            (surface.flags & SDL_RLEACCEL) || format.palette ||
            format.BitsPerPixel != 32 || format.BytesPerPixel != 4 ||
            !format.Rmask || !format.Gmask || !format.Bmask || !format.Amask)
        return std::nullopt;
    std::vector<unsigned char> pixels(static_cast<size_t>(surface.pitch) * surface.h);
    if (!copy_native_font_memory(reinterpret_cast<uintptr_t>(surface.pixels),
            pixels.data(), pixels.size())) return std::nullopt;
    int background = -1;
    for (int y = 0; y < surface.h; ++y) {
        const auto *row = pixels.data() + static_cast<size_t>(y) * surface.pitch;
        for (int x = 0; x < surface.w; ++x) {
            Uint32 pixel = 0;
            Uint8 red = 0, green = 0, blue = 0, alpha = 0;
            std::memcpy(&pixel, row + x * 4, sizeof(pixel));
            SDL_GetRGBA(pixel, &format, &red, &green, &blue, &alpha);
            const int color = (red << 16) | (green << 8) | blue;
            if (alpha != 255 || (background >= 0 && background != color))
                return std::nullopt;
            background = color;
        }
    }
    SDL_Surface current{};
    SDL_PixelFormat current_format{};
    SDL_Surface *current_address = nullptr;
    if (!copy_native_font_value(raws.begin + static_cast<size_t>(centre) * sizeof(address),
                current_address) || current_address != address ||
            !copy_native_font_value(reinterpret_cast<uintptr_t>(address), current) ||
            current.pixels != surface.pixels || current.format != surface.format ||
            current.w != surface.w || current.h != surface.h || current.pitch != surface.pitch ||
            current.flags != surface.flags ||
            !copy_native_font_value(reinterpret_cast<uintptr_t>(surface.format), current_format) ||
            std::memcmp(&format, &current_format, sizeof(format)) != 0)
        return std::nullopt;
    return background;
#else
    return std::nullopt;
#endif
}

// PE update_anchor_tile (8dd7c0) paints after every ordinary/lower tile.
// Its destination uses native renderer pitch/origin and the raw surface's
// dimensions, so an origin outside a text card can still overlap its body.
inline std::optional<SDL_Rect> native_anchored_tile_draw_bounds(const graphicst &gps,
        const void *renderer, int x, int y, bool top_layer) {
#ifdef _WIN32
    using native_font_metrics_detail::copy_native_font_value;
    const auto *textures = top_layer ? gps.screentexpos_top_anchored : gps.screentexpos_anchored;
    const auto *offset_x = top_layer ? gps.screentexpos_top_anchored_x : gps.screentexpos_anchored_x;
    const auto *offset_y = top_layer ? gps.screentexpos_top_anchored_y : gps.screentexpos_anchored_y;
    if (!renderer || !textures || !offset_x || !offset_y || x < 0 || y < 0 ||
            x >= gps.dimx || y >= gps.dimy) return std::nullopt;
    const size_t tile = static_cast<size_t>(x) * gps.dimy + y;
    const int32_t texture = textures[tile];
    // renderer+158/15c are the native scale denominators; +168/16c
    // are the interface tile pitch and +170/174 its pixel origin.
    std::array<int32_t, 8> geometry{};
    struct RawSurfaces { uintptr_t begin = 0, end = 0, capacity = 0; } raws;
    SDL_Surface *address = nullptr;
    SDL_Surface surface{};
    if (texture <= 0 ||
            !native_renderer_geometry(renderer, geometry) ||
            geometry[0] <= 0 || geometry[1] <= 0 || geometry[4] != gps.tile_pixel_x ||
            geometry[5] != gps.tile_pixel_y || geometry[4] <= 0 || geometry[5] <= 0 ||
            geometry[6] != (gps.screen_pixel_x - gps.dimx * gps.tile_pixel_x) / 2 ||
            geometry[7] != (gps.screen_pixel_y - gps.dimy * gps.tile_pixel_y) / 2 ||
            !native_pe_read_field(0x02390290, 0x348, raws) || !raws.begin ||
            raws.end < raws.begin || raws.capacity < raws.end ||
            (raws.end - raws.begin) % sizeof(SDL_Surface *) ||
            (raws.end - raws.begin) / sizeof(SDL_Surface *) > (1u << 24) ||
            static_cast<size_t>(texture) >= (raws.end - raws.begin) / sizeof(SDL_Surface *) ||
            !copy_native_font_value(raws.begin + static_cast<size_t>(texture) * sizeof(address), address) ||
            !copy_native_font_value(reinterpret_cast<uintptr_t>(address), surface) ||
            surface.w <= 0 || surface.h <= 0) return std::nullopt;
    const int64_t scaled_w = int64_t(geometry[4]) * surface.w;
    const int64_t scaled_h = int64_t(geometry[5]) * surface.h;
    const int64_t left = int64_t(x) * geometry[4] + geometry[6] + offset_x[tile];
    const int64_t top = int64_t(y) * geometry[5] + geometry[7] + offset_y[tile];
    const int64_t width = scaled_w / geometry[0], height = scaled_h / geometry[1];
    // Native imul/idiv operate in int32. Overflow or an unknown geometry
    // cannot prove that this image misses the card.
    if (scaled_w > INT32_MAX || scaled_h > INT32_MAX || left < INT32_MIN || left > INT32_MAX ||
            top < INT32_MIN || top > INT32_MAX || width > INT32_MAX - std::max<int64_t>(0, left) ||
            height > INT32_MAX - std::max<int64_t>(0, top)) return std::nullopt;
    SDL_Surface *current_address = nullptr;
    SDL_Surface current{};
    RawSurfaces current_raws;
    std::array<int32_t, 8> current_geometry{};
    if (!native_pe_read_field(0x02390290, 0x348, current_raws) ||
            current_raws.begin != raws.begin || current_raws.end != raws.end ||
            current_raws.capacity != raws.capacity ||
            !native_renderer_geometry(renderer, current_geometry) ||
            current_geometry != geometry ||
            !copy_native_font_value(raws.begin + static_cast<size_t>(texture) * sizeof(address),
                current_address) || current_address != address ||
            !copy_native_font_value(reinterpret_cast<uintptr_t>(address), current) ||
            current.w != surface.w || current.h != surface.h) return std::nullopt;
    return SDL_Rect{static_cast<int>(left), static_cast<int>(top),
        static_cast<int>(width), static_cast<int>(height)};
#else
    (void)gps; (void)renderer; (void)x; (void)y; (void)top_layer;
    return std::nullopt;
#endif
}

// Called at native text-layout/render entry, not for every glyph. Re-read the
// live selection and resource identities each pass; only pixel decoding is
// cached. This also retries fonts that were not loaded at the first call.
inline void refresh_native_font_metrics() {
    using namespace native_font_metrics_detail;
    auto &cache = english_ink_cache();
#ifdef _WIN32
    const auto source = current_native_font_source();
    if (!cache.refreshed || cache.source != source ||
            (source && cache.rows.cell_height <= 0)) {
        auto rows = source ? load_native_english_ink_rows(*source) : EnglishInkRows{};
        // Header/pixel reads are individually safe. Also reject a resource
        // selection that changed during the multi-glyph snapshot instead of
        // publishing a mixture of two font lifetimes.
        if (source && current_native_font_source() != source) rows = {};
        cache.source = source;
        cache.rows = std::move(rows);
        ++cache.revision;
    }
#else
    if (!cache.refreshed) {
        cache.rows = load_english_ink_rows();
        ++cache.revision;
    }
#endif
    cache.refreshed = true;
}

struct NativeEnglishInkBounds {
    int top = 0, bottom = 0; // exclusive bottom, relative to the native row
};

inline std::optional<int> native_font_cell_height() {
    auto &cache = native_font_metrics_detail::english_ink_cache();
    if (!cache.refreshed) refresh_native_font_metrics();
    return cache.rows.cell_height > 0
        ? std::optional<int>(cache.rows.cell_height) : std::nullopt;
}

inline std::optional<NativeEnglishInkBounds> native_english_ink_bounds(int row_height) {
    if (row_height <= 0) return std::nullopt;
    auto &cache = native_font_metrics_detail::english_ink_cache();
    if (!cache.refreshed) refresh_native_font_metrics();
    const auto &source = cache.rows;
    if (source.cell_height <= 0) return std::nullopt;
    thread_local int previous_row_height = 0;
    thread_local uint64_t previous_revision = 0;
    thread_local std::optional<NativeEnglishInkBounds> previous_bounds;
    if (previous_row_height == row_height && previous_revision == cache.revision)
        return previous_bounds;

    NativeEnglishInkBounds bounds{row_height, 0};
    for (const auto &rows : source.glyph_rows) {
        int top = row_height, bottom = -1;
        // Sample pixel centres just as nearest-neighbour atlas scaling does.
        // Counting the resulting bounds handles integer scale rounding without
        // substituting a fixed fraction of the native cell for visible ink.
        for (int y = 0; y < row_height; ++y) {
            const int source_y = static_cast<int>(
                ((static_cast<int64_t>(y) * 2 + 1) * source.cell_height) /
                (static_cast<int64_t>(row_height) * 2));
            if (!rows[source_y]) continue;
            top = std::min(top, y);
            bottom = y;
        }
        if (bottom >= top) {
            bounds.top = std::min(bounds.top, top);
            bounds.bottom = std::max(bounds.bottom, bottom + 1);
        }
    }
    previous_row_height = row_height;
    previous_revision = cache.revision;
    previous_bounds = bounds.bottom > bounds.top
        ? std::optional<NativeEnglishInkBounds>(bounds) : std::nullopt;
    return previous_bounds;
}

inline std::optional<int> native_english_ink_height(int row_height) {
    if (row_height <= 0) return std::nullopt;
    // Source image decoding and file access happen once per core lifetime.
    static const auto source = native_font_metrics_detail::load_english_ink_rows();
    if (source.cell_height <= 0) return std::nullopt;
    thread_local int previous_row_height = 0;
    thread_local std::optional<int> previous_ink_height;
    if (previous_row_height == row_height) return previous_ink_height;

    int height = 0;
    for (const auto &rows : source.glyph_rows) {
        int top = row_height, bottom = -1;
        // Sample pixel centres just as nearest-neighbour atlas scaling does.
        // Counting the resulting bounds handles integer scale rounding without
        // substituting a fixed fraction of the native cell for visible ink.
        for (int y = 0; y < row_height; ++y) {
            const int source_y = static_cast<int>(
                ((static_cast<int64_t>(y) * 2 + 1) * source.cell_height) /
                (static_cast<int64_t>(row_height) * 2));
            if (!rows[source_y]) continue;
            top = std::min(top, y);
            bottom = y;
        }
        if (bottom >= top) height = std::max(height, bottom - top + 1);
    }
    previous_row_height = row_height;
    previous_ink_height = height > 0 ? std::optional<int>(height) : std::nullopt;
    return previous_ink_height;
}

} // namespace dfcn
