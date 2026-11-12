// Batch repeated ordinary tiles with the native renderer's own textures.
// The exact screen bytes, primary texture and flags remain part of each run;
// graphical panel fills therefore share this path with masked text spaces.
// No copied render target, owned GPU texture or borrowed texture survives a run.
class NativeAnnouncementLogSpaceCache {
    // df.g_src.enabler.xml defines texture_fullid as texpos, six float color
    // components and uint32 flags. PE 8dcdb0/8dcf60 return a four-byte valid
    // prefix followed by that exact 32-byte descriptor (two MOVUPS stores).
    struct TextureId {
        int32_t texture = 0;
        std::array<float, 3> foreground{}, background{};
        uint32_t flags = 0;
    };
    struct DescribedTile { uint32_t valid = 0; TextureId image; };
#ifdef _WIN32
    using DescribeFn = DescribedTile *(*)(void *, DescribedTile *, int, int);
    static constexpr size_t raster_offset = 0x168;
#else
    // SysV returns Either<texture_fullid,int32_t> through an implicit first
    // result argument, ahead of this; let the native return ABI supply it.
    using DescribeFn = DescribedTile (*)(void *, int, int);
    static constexpr size_t raster_offset = 0x160;
#endif
    using TextureFn = SDL_Texture *(*)(void *, const TextureId *);
    using GeometryFn = int (SDLCALL *)(SDL_Renderer *, SDL_Texture *,
        const SDL_Vertex *, int, const int *, int);
    struct Binding {
        DescribeFn base = nullptr, top = nullptr;
        TextureFn texture = nullptr;
        GeometryFn geometry = nullptr;
        uintptr_t base_draw = 0, top_draw = 0;
    };
    static Binding binding() noexcept {
        static const Binding resolved = [] {
            Binding result;
            try {
#ifdef _WIN32
                const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
                const auto sdl = GetModuleHandleW(L"SDL2.dll");
                result.geometry = sdl ? reinterpret_cast<GeometryFn>(
                    GetProcAddress(sdl, "SDL_RenderGeometry")) : nullptr;
                if (!result.geometry || !native_pe_supported()) return Binding{};
                const unsigned char base_prefix[]{0x40,0x55,0x48,0x8b,0xec,0x48,0x83,0xec,0x20};
                const unsigned char top_prefix[]{0x48,0x83,0xec,0x28,0x44,0x0f,0xaf,0x05};
                const unsigned char texture_prefix[]{0x40,0x53,0x56,0x57,0x41,0x54,0x41,0x56};
                // These are the original callers, not a second renderer ABI:
                // base draw: describe at 8ddf56, texture at 8ddf90;
                // top draw: describe at 8de0f6, texture at 8de12f.
                const unsigned char base_describe[]{0xe8,0x55,0xee,0xff,0xff};
                const unsigned char top_describe[]{0xe8,0x65,0xee,0xff,0xff};
                const unsigned char base_texture[]{0xe8,0x6b,0xf1,0xff,0xff};
                const unsigned char top_texture[]{0xe8,0xcc,0xef,0xff,0xff};
                if (!native_pe_match(executable, 0x8dcdb0, base_prefix, sizeof(base_prefix)) ||
                        !native_pe_match(executable, 0x8dcf60, top_prefix, sizeof(top_prefix)) ||
                        !native_pe_match(executable, 0x8dd100, texture_prefix, sizeof(texture_prefix)) ||
                        !native_pe_match(executable, 0x8ddf56, base_describe, sizeof(base_describe)) ||
                        !native_pe_match(executable, 0x8de0f6, top_describe, sizeof(top_describe)) ||
                        !native_pe_match(executable, 0x8ddf90, base_texture, sizeof(base_texture)) ||
                        !native_pe_match(executable, 0x8de12f, top_texture, sizeof(top_texture)))
                    return Binding{};
                result.base = reinterpret_cast<DescribeFn>(native_pe_address(executable, 0x8dcdb0));
                result.top = reinterpret_cast<DescribeFn>(native_pe_address(executable, 0x8dcf60));
                result.texture = reinterpret_cast<TextureFn>(native_pe_address(executable, 0x8dd100));
                result.base_draw = native_pe_address(executable, 0x8ddc20);
                result.top_draw = native_pe_address(executable, 0x8ddfe0);
#else
                if (!native_elf_5317_address(0x13d14b0)) return Binding{};
                const auto symbol = [](const char *name) { return dlsym(RTLD_DEFAULT, name); };
                result.geometry = reinterpret_cast<GeometryFn>(symbol("SDL_RenderGeometry"));
                result.base = reinterpret_cast<DescribeFn>(symbol("_ZN8renderer15screen_to_texidEii"));
                result.top = reinterpret_cast<DescribeFn>(symbol("_ZN8renderer19screen_top_to_texidEii"));
                result.texture = reinterpret_cast<TextureFn>(symbol("_ZN16renderer_2d_base17tile_cache_lookupER14texture_fullid"));
                result.base_draw = reinterpret_cast<uintptr_t>(symbol("_ZN16renderer_2d_base11update_tileEii"));
                result.top_draw = reinterpret_cast<uintptr_t>(symbol("_ZN16renderer_2d_base15update_top_tileEii"));
                if (!result.geometry) return Binding{};
#endif
                if (!result.base || !result.top || !result.texture ||
                        !result.base_draw || !result.top_draw) return Binding{};
                return result;
            } catch (...) { return Binding{}; }
        }();
        return resolved;
    }
    Binding binding_;
    std::array<int32_t, 4> raster_{};
    std::vector<SDL_Vertex> vertices_;
    std::vector<int> indices_;
    bool ready_ = false;
    static bool repeat_tile(const NativeUiLayerGrid::Plane &plane, size_t at,
            uint64_t cell, NativeUiLayerGrid::Texture primary, uint32_t flags) noexcept {
        uint64_t actual = 0;
        std::memcpy(&actual, plane.screen.data() + at * 8, sizeof(actual));
        return actual == cell && plane.flags[at] == flags &&
            plane.textures[0][at] == primary &&
            std::all_of(plane.textures.begin() + 1, plane.textures.end(),
                [at](const auto &texture) { return !texture[at]; });
    }
public:
    void clear() noexcept {
        ready_ = false;
        binding_ = {}; raster_ = {};
        vertices_.clear(); indices_.clear();
    }
    bool prepare(SDL_Renderer *renderer, void *native_renderer, const graphicst &gps) noexcept {
        clear();
        binding_ = binding();
        if (!renderer || !native_renderer || !binding_.geometry || gps.dimx <= 0 ||
                gps.dimy <= 0 || !native_font_metrics_detail::copy_native_font_memory(
                    reinterpret_cast<uintptr_t>(native_renderer) + raster_offset,
                    raster_.data(), sizeof(raster_)) ||
                raster_[0] <= 0 || raster_[1] <= 0) return false;
        // Use precisely the geometry consumed by update_tile, including its
        // real origin. No inferred gps-centering equality gates this path.
        void **methods = nullptr;
        std::memcpy(&methods, native_renderer, sizeof(methods));
        ready_ = methods && reinterpret_cast<uintptr_t>(methods[0]) == binding_.base_draw &&
            reinterpret_cast<uintptr_t>(methods[2]) == binding_.top_draw;
        return ready_;
    }
    int paint(SDL_Renderer *renderer, void *native_renderer,
            const graphicst &gps, const NativeUiLayerGrid::Plane &plane,
            const SDL_Rect &panel, int x, int y, int frame_right,
            void (*draw)(void *, int, int), bool top = false) noexcept {
        // Base update_tile has additional last-row/column edge painting.
        // Lower and anchored pictures also retain their complete native path.
        // An ordinary primary texture (including flagged/recolored glyphs)
        // instead has exactly the same single tile destination as a space.
        if (!ready_ || x < panel.x || y < panel.y || x >= gps.dimx - 1 ||
                y >= gps.dimy - 1 || int64_t(y) >= int64_t(panel.y) + panel.h ||
                reinterpret_cast<uintptr_t>(draw) !=
                    (top ? binding_.top_draw : binding_.base_draw)) return x;
        const size_t first = static_cast<size_t>(x) * gps.dimy + y;
        uint64_t cell = 0;
        std::memcpy(&cell, plane.screen.data() + first * 8, sizeof(cell));
        const auto primary = plane.textures[0][first];
        const uint32_t flags = plane.flags[first];
        // The native ordinary painter skips a cell with no character and no
        // primary picture even when its flags are nonzero.
        if ((!static_cast<unsigned char>(cell) && !primary) ||
                !repeat_tile(plane, first, cell, primary, flags))
            return x;
        const int limit = static_cast<int>(std::min<int64_t>({frame_right,
            gps.dimx - 1, int64_t(panel.x) + panel.w}));
        int end = x + 1;
        while (end < limit && repeat_tile(plane,
                static_cast<size_t>(end) * gps.dimy + y, cell, primary, flags))
            ++end;
        const int count = end - x;
        if (count < 2 || count > INT_MAX / 6) return x;
        try {
            vertices_.resize(static_cast<size_t>(count) * 4);
            indices_.resize(static_cast<size_t>(count) * 6);
        } catch (...) { return x; }
        DescribedTile tile;
        const auto describe = top ? binding_.top : binding_.base;
#ifdef _WIN32
        describe(native_renderer, &tile, x, y);
#else
        tile = describe(native_renderer, x, y);
#endif
        if (!(tile.valid & 0xff)) return x;
        // Native describe selects the exact primary/font atlas and colors,
        // including all source flag semantics. Original callers then replace
        // descriptor flags with CONVERT|DO_RECOLOR (6), or 7 for a top black
        // background. This base run has no lower picture, so its 7 exception
        // cannot apply (PE 8ddf61..8ddf90, top 8de102..8de12f).
        const auto *bytes = plane.screen.data() + first * 8;
        tile.image.flags = top && !bytes[4] && !bytes[5] && !bytes[6] ? 7u : 6u;
        SDL_Texture *texture = binding_.texture(native_renderer, &tile.image);
        if (!texture) return x;
        SDL_Color color{255, 255, 255, 255};
        // Geometry ignores texture modulation; reproduce RenderCopy's
        // current modulation explicitly in the vertices.
        if (SDL_GetTextureColorMod(texture, &color.r, &color.g, &color.b) != 0 ||
                SDL_GetTextureAlphaMod(texture, &color.a) != 0) return x;
        const float top_y = static_cast<float>(int64_t(raster_[3]) + int64_t(y) * raster_[1]);
        const float bottom_y = top_y + raster_[1];
        for (int index = 0; index < count; ++index) {
            const float left = static_cast<float>(int64_t(raster_[2]) +
                int64_t(x + index) * raster_[0]);
            const float right = left + raster_[0];
            const int vertex = index * 4, triangle = index * 6;
            vertices_[vertex] = {{left, top_y}, color, {0, 0}};
            vertices_[vertex + 1] = {{right, top_y}, color, {1, 0}};
            vertices_[vertex + 2] = {{right, bottom_y}, color, {1, 1}};
            vertices_[vertex + 3] = {{left, bottom_y}, color, {0, 1}};
            indices_[triangle] = vertex; indices_[triangle + 1] = vertex + 1;
            indices_[triangle + 2] = vertex + 2; indices_[triangle + 3] = vertex;
            indices_[triangle + 4] = vertex + 2; indices_[triangle + 5] = vertex + 3;
        }
        // Submit now, before any other native call can retire its texture.
        // No texture pointer is retained across runs or resource generations.
        if (binding_.geometry(renderer, texture, vertices_.data(), count * 4,
                indices_.data(), count * 6) != 0) {
            ready_ = false;
            return x;
        }
        return end;
    }
};
static NativeAnnouncementLogSpaceCache g_native_announcement_log_space_cache;
