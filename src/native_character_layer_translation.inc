// The character producer owns this grid and its caption registries. Reuse
// the character readers with a retained drawing state. Its mutable text,
// layout and font caches belong to the component's lifetime.
static Overlay &native_character_drawing_state();
static void native_character_paint_grid(NativeUiLayerStorage &layer,
    SDL_Renderer *renderer, const std::vector<Match> &matches, const SDL_Rect *panel);

void Overlay::render_native_character_layer(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &layer = g_native_character_layer;
    auto *graphics = layer.foreground.graphics();
    if (!renderer || !layer.ready || layer.renderer != renderer || !graphics ||
            graphics->tile_pixel_x <= 0 || graphics->tile_pixel_y <= 0 ||
            graphics->screen_pixel_x <= 0 || graphics->screen_pixel_y <= 0) return;

    const auto &panel = g_native_character_panel;
    const auto paint_native = [&](const std::vector<Match> &matches) {
        native_character_paint_grid(layer, renderer, matches, &panel);
    };
    if (panel.w <= 0 || panel.h <= 0) return;
    const int64_t tile_x = graphics->tile_pixel_x, tile_y = graphics->tile_pixel_y;
    const int64_t origin_x = (graphics->screen_pixel_x - tile_x * graphics->dimx) / 2;
    const int64_t origin_y = (graphics->screen_pixel_y - tile_y * graphics->dimy) / 2;
    const int left = static_cast<int>(std::clamp<int64_t>(
        origin_x + int64_t(panel.x) * tile_x, 0, graphics->screen_pixel_x));
    const int top = static_cast<int>(std::clamp<int64_t>(
        origin_y + int64_t(panel.y) * tile_y, 0, graphics->screen_pixel_y));
    const int right = static_cast<int>(std::clamp<int64_t>(
        origin_x + (int64_t(panel.x) + panel.w) * tile_x, 0, graphics->screen_pixel_x));
    const int bottom = static_cast<int>(std::clamp<int64_t>(
        origin_y + (int64_t(panel.y) + panel.h) * tile_y, 0, graphics->screen_pixel_y));
    if (right <= left || bottom <= top) return;
    const SDL_Rect pixels{left, top, right - left, bottom - top};
    struct ClipScope {
        SDL_Renderer *renderer;
        bool enabled;
        SDL_Rect previous{};
        explicit ClipScope(SDL_Renderer *value) : renderer(value),
                enabled(SDL_RenderIsClipEnabled(value) == SDL_TRUE) {
            SDL_RenderGetClipRect(renderer, &previous);
        }
        ~ClipScope() { SDL_RenderSetClipRect(renderer, enabled ? &previous : nullptr); }
    } clip(renderer);
    SDL_Rect visible = pixels;
    if (clip.enabled && !SDL_IntersectRect(&pixels, &clip.previous, &visible)) return;
    if (SDL_RenderSetClipRect(renderer, &visible) != 0) return;
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    if (!config_.enabled || !face_ || rules_.empty()) {
        paint_native({});
        return;
    }

    // The dictionary and primary font stay on the main Overlay. Swap only
    // mutable drawing state with the component's retained owner, restoring
    // the background on every exit, including translation/layout exceptions.
    // Maps carrying list iterators move with their corresponding use lists.
#define DFCN_CHARACTER_DRAWING_FIELDS(X) \
    X(gps_) \
    X(draw_epoch_) \
    X(cell_read_cache_) \
    X(cell_read_cache_scratch_) \
    X(cell_read_cache_depth_) \
    X(prepared_matches_) \
    X(frame_prepared_) \
    X(native_ui_input_read_) \
    X(native_ui_frame_ready_) \
    X(native_captured_ui_frame_) \
    X(native_prepared_ui_frame_) \
    X(native_ui_layout_page_) \
    X(native_ui_toolbar_tooltip_) \
    X(fortress_map_frame_) \
    X(native_ui_copy_passthrough_) \
    X(main_menu_frame_) \
    X(settings_video_frame_) \
    X(native_knowledge_frame_) \
    X(native_knowledge_frame_matches_) \
    X(native_knowledge_frame_transition_) \
    X(native_knowledge_layouts_) \
    X(written_work_paragraph_cache_) \
    X(native_display_translation_cache_) \
    X(native_display_translation_cache_bytes_) \
    X(native_display_translation_context_) \
    X(announcement_translation_cache_) \
    X(announcement_translation_order_) \
    X(announcement_translation_bytes_) \
    X(tooltip_translation_cache_source_) \
    X(tooltip_translation_cache_target_) \
    X(tooltip_translation_cache_result_) \
    X(tooltip_translation_cache_valid_) \
    X(tooltip_translation_cache_catalog_only_) \
    X(paragraph_layout_cache_) \
    X(paragraph_layout_cache_order_) \
    X(paragraph_layout_cache_bytes_) \
    X(paragraph_glyph_metrics_) \
    X(fallback_fonts_) \
    X(fallback_glyphs_) \
    X(glyph_bitmap_cache_) \
    X(glyph_bitmap_use_order_) \
    X(glyph_bitmap_bytes_) \
    X(font_size_metrics_) \
    X(ellipsized_text_cache_) \
    X(texture_cache_) \
    X(texture_use_order_) \
    X(texture_retry_renderer_) \
    X(texture_retry_after_) \
    X(calibrated_row_height_) \
    X(calibrated_ink_height_) \
    X(calibrated_font_pixels_) \
    X(suppress_base_) \
    X(suppress_top_) \
    X(captured_embark_item_suppress_) \
    X(immediate_suppress_base_) \
    X(immediate_suppress_top_) \
    X(immediate_base_row_hash_) \
    X(immediate_top_row_hash_) \
    X(immediate_base_row_epoch_) \
    X(immediate_top_row_epoch_) \
    X(immediate_base_full_scan_epoch_) \
    X(immediate_top_full_scan_epoch_) \
    X(immediate_base_matches_) \
    X(immediate_base_matches_epoch_) \
    X(immediate_base_matches_screen_) \
    X(immediate_context_epoch_) \
    X(immediate_context_screen_) \
    X(immediate_mod_list_) \
    X(character_overview_context_) \
    X(character_overview_context_epoch_) \
    X(character_overview_context_revision_) \
    X(character_overview_context_grid_) \
    X(character_overview_context_dimx_) \
    X(character_overview_context_dimy_) \
    X(native_border_glyphs_) \
    X(native_border_glyph_epoch_) \
    X(native_border_repairs_) \
    X(immediate_dimx_) \
    X(immediate_dimy_) \
    X(native_frame_drawn_) \
    X(native_frame_submitted_) \
    X(cell_composite_state_) \
    X(cell_composite_epoch_) \
    X(composite_read_epoch_) \
    X(observed_glyph_chars_) \
    X(observed_glyph_epoch_) \
    X(suppressed_glyphs_) \
    X(graphical_rects_) \
    X(graphical_rect_epoch_) \
    X(graphical_clear_readback_)
    struct ViewScope {
        Overlay &overlay;
        Overlay &retained;
        graphicst *previous_read = g_native_graphics_read_view;
        void swap_fields() noexcept {
#define DFCN_CHARACTER_SWAP_FIELD(name) std::swap(overlay.name, retained.name);
            DFCN_CHARACTER_DRAWING_FIELDS(DFCN_CHARACTER_SWAP_FIELD)
#undef DFCN_CHARACTER_SWAP_FIELD
        }
        ViewScope(Overlay &value, graphicst *foreground)
            : overlay(value), retained(native_character_drawing_state()) {
            swap_fields();
            overlay.gps_ = foreground;
            if (++overlay.draw_epoch_ == 0) overlay.draw_epoch_ = 1;
            overlay.prepared_matches_.clear();
            overlay.frame_prepared_ = false;
            overlay.native_ui_input_read_ = true;
            overlay.native_ui_frame_ready_ = false;
            overlay.native_captured_ui_frame_.reset();
            overlay.native_prepared_ui_frame_ = {};
            overlay.native_ui_layout_page_.reset();
            overlay.native_ui_toolbar_tooltip_.reset();
            overlay.native_ui_copy_passthrough_ = false;
            overlay.native_knowledge_frame_matches_.reset();
            overlay.native_knowledge_frame_transition_ = false;
            overlay.suppress_base_.clear();
            overlay.suppress_top_.clear();
            overlay.captured_embark_item_suppress_.clear();
            overlay.immediate_suppress_base_.clear();
            overlay.immediate_suppress_top_.clear();
            overlay.immediate_base_row_hash_.clear();
            overlay.immediate_top_row_hash_.clear();
            overlay.immediate_base_row_epoch_.clear();
            overlay.immediate_top_row_epoch_.clear();
            overlay.immediate_base_full_scan_epoch_ = 0;
            overlay.immediate_top_full_scan_epoch_ = 0;
            overlay.immediate_base_matches_.clear();
            overlay.immediate_base_matches_epoch_ = 0;
            overlay.immediate_base_matches_screen_ = nullptr;
            overlay.immediate_context_epoch_ = 0;
            overlay.immediate_context_screen_ = nullptr;
            overlay.immediate_mod_list_.reset();
            overlay.native_border_glyphs_.clear();
            overlay.native_border_glyph_epoch_ = 0;
            overlay.native_border_repairs_.clear();
            overlay.native_frame_drawn_ = false;
            overlay.native_frame_submitted_ = false;
            overlay.cell_composite_state_.clear();
            overlay.cell_composite_epoch_.clear();
            overlay.composite_read_epoch_ = overlay.draw_epoch_;
            overlay.observed_glyph_chars_.clear();
            overlay.observed_glyph_epoch_.clear();
            overlay.suppressed_glyphs_.clear();
            overlay.graphical_rects_.clear();
            overlay.graphical_rect_epoch_ = 0;
            overlay.graphical_clear_readback_ = nullptr;
            g_native_graphics_read_view = foreground;
            NativeUiReadScope::invalidate_reads();
        }
        ~ViewScope() {
            g_native_graphics_read_view = previous_read;
            swap_fields();
            NativeUiReadScope::invalidate_reads();
        }
    } view(*this, graphics);
#undef DFCN_CHARACTER_DRAWING_FIELDS
    NativeInfoCapturedTextScope captions(g_native_character_text);
    NativeCharacterCapturedTextScope sources;
    NativeCharacterForegroundScope foreground;
    if (!native_character_foreground_view(gps_)) {
        paint_native({});
        return;
    }
    NativeUiReadScope component(gps_, nullptr);
    NativePanelReadScope panels(gps_);
    CellReadCacheScope cells(*this);
    prepared_matches_ = find_native_character_matches();
    normalize_native_split_text();
    (void)prepare_frame_layout(renderer);
    normalize_native_split_text();

    // Source masking reads only this producer's grid. The native painter
    // supplies its borders, backgrounds and portraits before Chinese ink;
    // this path never samples or erases the composited game framebuffer.
    {
        struct BorderPatchScope {
            NativeUiLayerGrid &grid;
            struct Cell {
                size_t plane = 0, tile = 0;
                std::array<unsigned char, 8> screen{};
                std::array<NativeUiLayerGrid::Texture, 5> textures{};
                uint32_t flags = 0;
            };
            std::vector<Cell> saved;
            explicit BorderPatchScope(NativeUiLayerGrid &value) : grid(value) {}
            ~BorderPatchScope() {
                // Repairs can overlap. Undo their stores in reverse order so
                // the producer's original source survives every exit path.
                for (auto it = saved.rbegin(); it != saved.rend(); ++it) {
                    auto &plane = grid.planes[it->plane];
                    std::copy(it->screen.begin(), it->screen.end(),
                        plane.screen.begin() + it->tile * 8);
                    for (size_t slot = 0; slot < it->textures.size(); ++slot)
                        plane.textures[slot][it->tile] = it->textures[slot];
                    plane.flags[it->tile] = it->flags;
                }
                if (!saved.empty()) NativeUiReadScope::invalidate_reads();
            }
            void apply(NativeUiLayerStorage &layer, const SDL_Rect &panel,
                    std::vector<NativeBorderRepair> &repairs) {
                auto *gps = grid.graphics();
                const SDL_Rect canvas{0, 0, grid.dimx, grid.dimy};
                for (auto &repair : repairs) {
                    repair.drawn = false;
                    if (repair.texture_id <= 0 && !repair.cell[0]) continue;
                    SDL_Rect clipped{}, bounds{};
                    if (!SDL_IntersectRect(&repair.cells, &panel, &clipped) ||
                            !SDL_IntersectRect(&clipped, &canvas, &bounds)) continue;
                    for (int x = bounds.x; x < bounds.x + bounds.w; ++x)
                        for (int y = bounds.y; y < bounds.y + bounds.h; ++y) {
                            const bool owned = std::any_of(layer.frames.begin(), layer.frames.end(),
                                [&](const SDL_Rect &frame) {
                                    return x >= frame.x && y >= frame.y &&
                                        x < frame.x + frame.w && y < frame.y + frame.h;
                                });
                            if (!owned) continue;
                            const size_t tile = static_cast<size_t>(x) * grid.dimy + y;
                            const size_t index = gps->top_in_use &&
                                native_ui_top_layer_at(*gps, tile) ? 1 : 0;
                            auto &plane = grid.planes[index];
                            Cell original;
                            original.plane = index;
                            original.tile = tile;
                            std::copy_n(plane.screen.data() + tile * 8, 8, original.screen.begin());
                            for (size_t slot = 0; slot < original.textures.size(); ++slot)
                                original.textures[slot] = plane.textures[slot][tile];
                            original.flags = plane.flags[tile];
                            // Record before changing any slot, so allocation
                            // failure also restores previously applied cells.
                            saved.push_back(original);
                            auto *cell = plane.screen.data() + tile * 8;
                            std::fill_n(cell, 8, 0);
                            for (auto &texture : plane.textures) texture[tile] = 0;
                            // A restored border is a normal whole tile, not
                            // a half-font glyph or an anchored portrait part.
                            plane.flags[tile] = 0;
                            if (repair.texture_id > 0) {
                                cell[0] = ' ';
                                std::fill_n(cell + 1, 3, 255);
                                std::copy_n(original.screen.begin() + 4, 3, cell + 4);
                                plane.textures[0][tile] = repair.texture_id;
                            } else {
                                std::copy(repair.cell.begin(), repair.cell.end(), cell);
                            }
                            repair.drawn = true;
                        }
                }
                if (!saved.empty()) NativeUiReadScope::invalidate_reads();
            }
        } borders(layer.foreground);
        borders.apply(layer, panel, native_border_repairs_);
        paint_native(prepared_matches_);
    }
    for (const auto &match : prepared_matches_) {
        if (match.target.empty() || match.native_help_source_only || match.native_split_duplicate)
            continue;
        Match text = match;
        SDL_Rect text_clip = pixels;
        if (text.layout_native_clip &&
                !SDL_IntersectRect(&pixels, &*text.layout_native_clip, &text_clip)) continue;
        text.layout_native_clip = text_clip;
        text.graphical_clear_width = text.graphical_clear_height = 0;
        text.graphical_auto_foreground = false;
        if (text.rule == -8) text.rule = -13;
        draw_match(renderer, text);
    }
}

void Overlay::release_native_character_resources() {
    TranslationStateScope translation;
    destroy_textures();
    clear_fallback_fonts();
    paragraph_glyph_metrics_.clear();
    clear_paragraph_layout_cache();
    ellipsized_text_cache_.clear();
    native_knowledge_layouts_.clear();
    written_work_paragraph_cache_.clear();
    native_knowledge_frame_ = {};
    native_knowledge_frame_matches_.reset();
    native_knowledge_frame_transition_ = false;
    native_display_translation_cache_.clear();
    native_display_translation_cache_bytes_ = native_display_translation_context_ = 0;
    announcement_translation_cache_.clear();
    announcement_translation_order_.clear();
    announcement_translation_bytes_ = 0;
    tooltip_translation_cache_valid_ = false;
    prepared_matches_.clear();
    native_border_glyphs_.clear();
    native_border_repairs_.clear();
    graphical_rects_.clear();
    graphical_clear_readback_ = nullptr;
    cell_read_cache_ = nullptr;
    cell_read_cache_scratch_.clear();
    cell_read_cache_depth_ = 0;
    gps_ = nullptr;
}
