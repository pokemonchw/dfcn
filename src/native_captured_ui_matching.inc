// Shared raster fallback for completed string writes only. The native map
// remains in its own output chain; no row or page is reconstructed from it.
#ifdef _WIN32
static bool native_fixed_location_profession_caller(uintptr_t caller) noexcept;
static bool native_proved_chooser_primary_name_caller(uintptr_t caller) noexcept;
#endif

static bool native_captured_ui_geometry(const NativeCapturedUiFrame &frame,
        const graphicst *gps, SDL_Renderer *renderer) noexcept {
    return gps && renderer && frame.renderer == renderer &&
        frame.grids[0] == gps->screen && frame.grids[1] == gps->screen_top &&
        frame.dimx == gps->dimx && frame.dimy == gps->dimy &&
        frame.tile_x == gps->tile_pixel_x && frame.tile_y == gps->tile_pixel_y &&
        frame.pixel_x == gps->screen_pixel_x && frame.pixel_y == gps->screen_pixel_y &&
        frame.top_in_use == bool(gps->top_in_use);
}

static bool native_captured_ui_span_current(const NativeCapturedUiFrame::Span &span,
        const NativeCapturedUiFrame &frame, const graphicst &gps) noexcept {
    if (span.x < 0 || span.y < 0 || span.x >= frame.dimx || span.y >= frame.dimy ||
            span.source.empty() || span.source.size() > size_t(frame.dimx - span.x)) return false;
    const auto *grid = frame.grids[span.top_layer ? 1 : 0];
    if (!grid || (span.top_layer && !frame.top_in_use)) return false;
    const bool paired = span.paired_y >= 0;
    if (paired && (!span.paired_sequence || span.paired_y != span.y + 1 ||
            span.paired_y >= frame.dimy)) return false;
    const auto *flags = span.top_layer ? gps.screentexpos_top_flag : gps.screentexpos_flag;
    constexpr uint32_t upper = 1u << 3, lower = 1u << 4, halves = upper | lower;
    if (paired && !flags) return false;
    for (int row : {span.y, span.paired_y}) {
        if (row < 0) continue;
        for (size_t byte = 0; byte < span.source.size(); ++byte) {
            const size_t at = (size_t(span.x) + byte) * frame.dimy + row;
            const auto expected = static_cast<unsigned char>(span.source[byte]);
            if (grid[at * 8] != expected ||
                    (expected != ' ' && native_ui_top_layer_at(gps, at) != span.top_layer) ||
                    (paired && (flags[at] & halves) != (row == span.y ? upper : lower))) return false;
        }
    }
    return true;
}

// A spelling match cannot identify an authored name. Only existing typed
// label roles, or this worldgen producer's actual protected draw, authorize
// the UI catalog. Names retain their own typed translators below.
static bool native_captured_ui_literal_role(const NativeDrawnTextRow &draw,
        bool worldgen) noexcept {
    if (worldgen && draw.worldgen_draw) return true;
    if (draw.travel_building_field == NativeTravelBuildingField::Literal) return true;
    switch (draw.civilization_field) {
    case NativeCivilizationField::TradePrefix:
    case NativeCivilizationField::TradeValue:
    case NativeCivilizationField::FortressPositionLabel: return true;
    default: break;
    }
    switch (draw.location_picker_field) {
    case NativeLocationPickerField::Prompt:
    case NativeLocationPickerField::Action:
    case NativeLocationPickerField::Kind:
    case NativeLocationPickerField::FaithStatus:
    case NativeLocationPickerField::FaithCount:
    case NativeLocationPickerField::GuildStatus:
    case NativeLocationPickerField::GuildLabel:
    case NativeLocationPickerField::GuildMissing:
    case NativeLocationPickerField::DetailKind:
    case NativeLocationPickerField::DetailFixed:
    case NativeLocationPickerField::DetailCount:
    case NativeLocationPickerField::DetailCountWord:
    case NativeLocationPickerField::DetailRequirement:
    case NativeLocationPickerField::PetitionFixed: return true;
    default: break;
    }
    switch (draw.adventure_barter_field) {
    case NativeAdventureBarterField::Control:
    case NativeAdventureBarterField::Prompt:
    case NativeAdventureBarterField::ItemHeading:
    case NativeAdventureBarterField::Weight:
    case NativeAdventureBarterField::CurrencyAmount: return true;
    default: break;
    }
    if (draw.work_order_shop_caption && !draw.work_order_shop_caption->authored) {
        using Kind = NativeWorkOrderShopCaption::Kind;
        switch (draw.work_order_shop_caption->kind) {
        case Kind::Unlimited: case Kind::Limit:
        case Kind::Explanation: case Kind::ColorWarning: return true;
        default: break;
        }
    }
    return false;
}

#include "native_shared_chronicle.inc"

bool Overlay::prepare_native_captured_ui_input(NativeUiLayerGrid &input,
        SDL_Renderer *renderer) {
    TranslationStateScope translation;
    if (!native_captured_ui_view(gps_) || !renderer || !gps_ || !gps_->screen ||
            gps_->dimx <= 0 || gps_->dimx > 1000 || gps_->dimy <= 0 || gps_->dimy > 1000 ||
            gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0 ||
            gps_->screen_pixel_x <= 0 || gps_->screen_pixel_y <= 0) return false;
    int logical_x = 0, logical_y = 0;
    SDL_RenderGetLogicalSize(renderer, &logical_x, &logical_y);
    if (logical_x != gps_->screen_pixel_x || logical_y != gps_->screen_pixel_y) return false;
    const uintptr_t owner = native_current_viewscreen();
    if (!owner) return false;
    const bool worldgen = native_worldgen_shared_view(gps_);
    uintptr_t region_caller = 0, landform_caller = 0;
#ifdef _WIN32
    if (worldgen) {
        const auto base = native_history_profile_base();
        region_caller = native_reference_address(base, 0xdfc756);
        landform_caller = native_reference_address(base, 0xdfc7c6);
    }
#endif
    uint64_t revision = 0, epoch = 0;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        revision = g_native_drawn_text_revision;
        epoch = g_native_drawn_text_epoch;
    }
    const std::array snapshots{captured_native_drawn_text_view(), captured_native_drawn_text_view(true)};
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        if (!epoch || revision != g_native_drawn_text_revision || epoch != g_native_drawn_text_epoch)
            return false;
    }
    auto frame = std::make_shared<NativeCapturedUiFrame>();
    frame->renderer = renderer;
    frame->grids = {gps_->screen, gps_->screen_top};
    frame->dimx = gps_->dimx; frame->dimy = gps_->dimy;
    frame->tile_x = gps_->tile_pixel_x; frame->tile_y = gps_->tile_pixel_y;
    frame->pixel_x = gps_->screen_pixel_x; frame->pixel_y = gps_->screen_pixel_y;
    frame->top_in_use = gps_->top_in_use;
    frame->owner = owner; frame->capture_epoch = epoch; frame->capture_revision = revision;
    // Keep the shared immutable snapshot alive. Only a draw whose proven
    // display buffer changes needs another copy of its owned semantic data.
    std::array<std::vector<const NativeDrawnTextRow *>, 2> draws;
    for (size_t plane = 0; plane < draws.size(); ++plane) {
        draws[plane].reserve(snapshots[plane].size());
        for (const auto &draw : snapshots[plane]) draws[plane].push_back(&draw);
    }
    // The pinned display can consume the other native buffer. Resolve only
    // completed writes from this owner, retaining their plane, epoch, caller
    // and complete source. The map binding above separately proves its frame
    // serial/map objects; worldgen is the actual typed current viewscreen.
#ifdef _WIN32
    const bool bound_display = gps_ == native_dfhack_render_read_graphics() &&
        gps_ == g_native_graphics_read_view && (worldgen ||
            (g_native_map_display_source.serial == g_native_map_frame_serial &&
             g_native_map_display_source.owner == owner));
    std::deque<NativeDrawnTextRow> rebound_draws;
    if (bound_display) for (auto &plane : draws) for (auto &record : plane) {
        const auto &draw = *record;
        const auto *grid = frame->grids[draw.top_layer ? 1 : 0];
        if (!draw.completed_draw || draw.draw_owner != owner || draw.draw_epoch != epoch ||
                !draw.draw_grid || draw.draw_grid == grid || !grid ||
                draw.draw_dimx != frame->dimx || draw.draw_dimy != frame->dimy) continue;
        NativeCapturedUiFrame::Span span;
        span.x = draw.x; span.y = draw.y; span.source = draw.source;
        span.top_layer = draw.top_layer;
        if (native_captured_ui_span_current(span, *frame, *gps_)) {
            rebound_draws.push_back(draw);
            rebound_draws.back().draw_grid = grid;
            record = &rebound_draws.back();
        }
    }
#endif
    const auto current_record = [&](const NativeDrawnTextRow &draw) {
        return draw.draw_epoch == epoch && draw.draw_dimx == frame->dimx &&
            draw.draw_dimy == frame->dimy && draw.draw_grid == frame->grids[draw.top_layer ? 1 : 0] &&
            draw.draw_grid && draw.x >= 0 && draw.x < frame->dimx && draw.y >= 0 &&
            draw.y < frame->dimy && !draw.source.empty() &&
            draw.source.size() <= size_t(frame->dimx - draw.x) &&
            (!draw.top_layer || frame->top_in_use);
    };
    // Include untranslated/input records in overwrite ownership. Equal
    // glyphs from a later authored source must not inherit an earlier label.
    std::array<std::vector<NativeCapturedUiWriter>, 2> writers;
    for (auto &plane : writers) plane.resize(size_t(frame->dimx) * frame->dimy);
    for (const auto &plane : draws) for (const auto *record : plane) {
        const auto &draw = *record;
        if (!current_record(draw)) continue;
        for (size_t byte = 0; byte < draw.source.size(); ++byte) {
            const int x = draw.x + static_cast<int>(byte);
            if (draw.draw_clip && (x < draw.draw_clip->x ||
                    x >= int64_t(draw.draw_clip->x) + draw.draw_clip->w ||
                    draw.y < draw.draw_clip->y ||
                    draw.y >= int64_t(draw.draw_clip->y) + draw.draw_clip->h)) continue;
            auto &latest = writers[draw.top_layer ? 1 : 0][size_t(x) * frame->dimy + draw.y];
            latest.sequence = std::max(latest.sequence, draw.sequence);
            latest.present = true;
        }
    }
    const auto chronicle = native_shared_chronicle_snapshot(worldgen, snapshots);
    const int origin_x = (frame->pixel_x - frame->dimx * frame->tile_x) / 2;
    const int origin_y = (frame->pixel_y - frame->dimy * frame->tile_y) / 2;
    constexpr uint32_t upper_half = 1u << 3, lower_half = 1u << 4;
    constexpr uint32_t half_mask = upper_half | lower_half;
    struct OwnedDraw { const NativeDrawnTextRow *draw; uint32_t half; };
    std::array<std::map<std::pair<int, int>, std::vector<OwnedDraw>>, 2> owned_draws;
    for (const auto &plane : draws) for (const auto *record : plane) {
        const auto &draw = *record;
        if (!current_record(draw) || !draw.completed_draw || draw.draw_owner != owner ||
                !draw.sequence || !draw.native_caller || !draw.draw_clip || draw.complete_source.empty() ||
                draw.editable_text || draw.info_title_authored || draw.squad_alias_target ||
                draw.squad_generated_name || draw.unit_identity_pending ||
                draw.adventure_barter_field == NativeAdventureBarterField::Editable ||
                (worldgen && !draw.worldgen_draw)) continue;
        if (draw.x < draw.draw_clip->x || draw.y < draw.draw_clip->y ||
                int64_t(draw.x) + draw.source.size() > int64_t(draw.draw_clip->x) + draw.draw_clip->w ||
                draw.y >= int64_t(draw.draw_clip->y) + draw.draw_clip->h) continue;
        NativeCapturedUiFrame::Span span;
        span.top_layer = draw.top_layer; span.sequence = draw.sequence;
        span.x = draw.x; span.y = draw.y; span.source = draw.source;
        if (!native_captured_ui_span_current(span, *frame, *gps_)) continue;
        bool own = true;
        const auto *flags = draw.top_layer ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const size_t first = size_t(draw.x) * frame->dimy + draw.y;
        const uint32_t half = flags ? flags[first] & half_mask : 0;
        if (half == half_mask) continue;
        // Grid state alone can be left behind by a previous widget. Require
        // the actual argument of this independently verified flagged writer.
        if (half != draw.native_half_writer) continue;
        for (size_t byte = 0; own && byte < draw.source.size(); ++byte) {
            const size_t at = (size_t(draw.x) + byte) * frame->dimy + draw.y;
            const auto &writer = writers[draw.top_layer ? 1 : 0][at];
            own = writer.present && writer.sequence == draw.sequence;
            // Mixed flags are not one native text run. A half is admitted
            // only below, with its independently completed opposite writer.
            if (flags && (flags[at] & half_mask) != half) own = false;
        }
        if (!own) continue;
        owned_draws[draw.top_layer ? 1 : 0][{draw.x, draw.y}].push_back({&draw, half});
    }
    const auto translate_draw = [&](const NativeDrawnTextRow &draw, unsigned &route)
            -> std::optional<std::string> {
        route = 0;
        const auto visible = trim_view(draw.source);
        const auto source = trim_view(draw.complete_source.empty() ?
            std::string_view(draw.source) : std::string_view(draw.complete_source));
        if (visible.empty() || source.empty()) return std::nullopt;
        std::optional<std::string> target;
        if (draw.map_hover.kind != NativeMapHoverKind::None) {
            route = 11;
            // This kind/payload was copied while addst held the actual
            // look record's display_str. The capture's current last-writer,
            // source, owner, plane and clip remain the suppression boundary.
            // An unclassified look caption never falls into a literal/name
            // route just because its spelling happens to match one.
            if (draw.map_hover.kind < NativeMapHoverKind::Item) return std::nullopt;
            NativeUnitIdentityRenderScope identity_scope;
            if (draw.map_hover.kind == NativeMapHoverKind::Unit) {
                auto owned = draw;
                prepare_native_map_hover_unit_identity(owned);
                // Recover only this native unit ID's exact complete caption.
                // Missing/pending identity retains all original ink; species
                // and personal names are never inferred from spelling here.
                if (!owned.unit_identity_ready || !owned.unit_identity_target ||
                        owned.unit_identity_target->empty()) return std::nullopt;
                target = translate_map_hover_phrase(source, owned.map_hover,
                    owned.unit_identity_target);
            } else {
                target = translate_map_hover_phrase(source, draw.map_hover, std::nullopt);
            }
        } else if (draw.info_title_kind != NativeInfoTitleKind::None) {
            route = 12;
            // Authored/editing titles were excluded before ownership was
            // collected. Retain the typed field's full captured source and
            // never reinterpret an unrestored ellipsis as a complete name.
            if (source.ends_with("...")) return std::nullopt;
            switch (draw.info_title_kind) {
            case NativeInfoTitleKind::Item:
            case NativeInfoTitleKind::ItemList:
            case NativeInfoTitleKind::Building:
            case NativeInfoTitleKind::Engraving:
            case NativeInfoTitleKind::Terrain:
            case NativeInfoTitleKind::PlannedEngraving:
            case NativeInfoTitleKind::DisplayStatus:
                target = translate_info_panel_title(draw.info_title_kind, source);
                break;
            default: return std::nullopt;
            }
        } else if (draw.mission_title) {
            route = 13;
            if (source.ends_with("...")) return std::nullopt;
            target = translate_world_mission_title(source);
        } else if (draw.unit_identity_target) {
            route = 1;
            if (draw.unit_identity_ready) target = *draw.unit_identity_target;
        } else if (draw.site_name) {
            route = 2;
            target = translate_site_display(*draw.site_name, source);
        } else if (draw.river_name) {
            route = 3;
            auto identity = draw.river_name->identity;
            // The river object has no current segment size. Retain the
            // adjacent native category writer just as the dedicated panel
            // route does, so a Stream does not acquire the neutral river G.
            if (identity.size == RiverSize::Unknown)
                for (const auto &[position, labels] : owned_draws[draw.top_layer ? 1 : 0]) {
                    if (position.second != draw.y || position.first >= draw.x) continue;
                    for (const auto &owned : labels) {
                        const auto &label = *owned.draw;
                        if (label.sequence >= draw.sequence ||
                                label.native_half_writer != draw.native_half_writer ||
                                label.x + int(label.source.size()) != draw.x ||
                                label.source != label.complete_source) continue;
                        const auto category = RiverNames::category(trim_view(label.source));
                        if (category != RiverSize::Unknown) identity.size = category;
                    }
                }
            target = translate_river_name(identity,
                draw.river_name->field, draw.river_name->complete_source);
        } else if (worldgen && region_caller && draw.native_caller == region_caller) {
            route = 4;
            target = translate_world_region_heading(source);
        } else if (worldgen && landform_caller && draw.native_caller == landform_caller) {
            route = 5;
            target = translate_world_landform_heading(source);
#ifdef _WIN32
        } else if (draw.location_picker_field == NativeLocationPickerField::DetailRole &&
                native_fixed_location_profession_caller(draw.native_caller)) {
            // The native occupation row reserves at most eighteen columns
            // before its add-person button. Retain that actual capture box;
            // this does not grant the adjacent generated priest-title role.
            if (!draw.location_picker_box) return std::nullopt;
            const auto &box = *draw.location_picker_box;
            if (box.y != draw.y || box.w <= 0 || box.w > 18 || draw.x < box.x ||
                    int64_t(draw.x) + draw.source.size() > int64_t(box.x) + box.w)
                return std::nullopt;
            route = 7;
            target = translate_unit_profession(source, true);
#endif
        } else if (draw.location_picker_field == NativeLocationPickerField::FaithChoice ||
                draw.location_picker_field == NativeLocationPickerField::GuildChoice
#ifdef _WIN32
                || (draw.location_picker_field == NativeLocationPickerField::Name &&
                    native_proved_chooser_primary_name_caller(draw.native_caller))
#endif
                ) {
            // These roles come from the registered chooser draw, and its
            // picture caption owns only this captured row. The surrounding
            // span checks retain the completed writer, full source and clip.
            if (!draw.location_picker_box || draw.complete_source.empty()) return std::nullopt;
            const auto &box = *draw.location_picker_box;
            if (box.y != draw.y || box.h != 1 || box.x < 0 || box.w <= 0 ||
                    int64_t(box.x) + box.w > frame->dimx || draw.x < box.x ||
                    int64_t(draw.x) + draw.source.size() > int64_t(box.x) + box.w)
                return std::nullopt;
            const auto &complete = draw.complete_source;
            if (draw.location_picker_field == NativeLocationPickerField::FaithChoice) {
                route = 8;
                // Match the built-in fallback exactly. Other complete faith
                // identities use the same name route as the dedicated list.
                if (complete == "(No Specific Deity)")
                    target = exact_literal_translation("(No particular deity)");
                else if (complete == "(No particular deity)" || complete == "No particular deity")
                    target = exact_literal_translation(complete);
                else if (contains_cjk_utf8(complete)) target = native_text_to_utf8(complete);
                else {
                    target = translate_religion_reference(complete);
                    if (!target) target = translate_legends_name(complete, true);
                    if (!target) target = translate_legends_name(complete, false);
                    if (!target) target = translate_procedural_fragment(complete, false, false, {},
                        ProceduralFragmentContext::generated_name);
                }
            } else if (draw.location_picker_field == NativeLocationPickerField::GuildChoice) {
                route = 9;
                // The proved formatter appends this suffix to one complete
                // profession. Keep its translation and mask in one span.
                constexpr std::string_view suffix = " hall";
                if (complete.ends_with(suffix) && complete.size() > suffix.size()) {
                    const auto profession_source = complete.substr(0, complete.size() - suffix.size());
                    auto profession = translate_unit_profession(profession_source, true);
                    if (!profession) profession = exact_literal_translation(profession_source);
                    if (!profession) profession = translate_compositional(profession_source);
                    const auto kind = exact_literal_translation("Guildhall");
                    if (profession && kind) target = *profession + *kind;
                }
            } else {
                route = 10;
                // Only the main-name caller with its complete formatter and
                // suffix certificate reaches this generated-name route.
                // A missing pre-dot capture cannot authorize an abbreviated
                // identity merely because the final native draw completed.
                if (complete.ends_with("...")) return std::nullopt;
                target = contains_cjk_utf8(complete)
                    ? std::optional<std::string>(native_text_to_utf8(complete))
                    : translate_procedural_fragment(complete, false, false, {},
                        ProceduralFragmentContext::generated_name);
            }
        } else if (native_captured_ui_literal_role(draw, worldgen)) {
            route = 6;
            target = exact_literal_translation(source);
            if (!target) for (int index : candidate_template_rules(source)) {
                const auto &rule = rules_[index];
                if (!rule.numeric_template || rule.template_kinds.empty() ||
                        !std::all_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                            [](char kind) { return kind == 'd'; })) continue;
                size_t end = 0;
                std::vector<std::string> captures;
                if (!match_template(rule, source, 0, &end, &captures) || end != source.size()) continue;
                auto translated = translate_template_captures_display(rule, captures, source);
                if (translated.usable() && translated.changed()) { target = std::move(translated.target); break; }
            }
        }
        if (!target || target->empty() || *target == source || *target == visible) return std::nullopt;
        return target;
    };
    for (const auto &plane : owned_draws) for (const auto &[position, entries] : plane)
            for (const auto &entry : entries) {
        const auto &draw = *entry.draw;
        // Chronicle words retain their semantic document ownership even when
        // one event cannot be replaced. They never fall through to UI literals.
        if (chronicle.words.contains(draw.address)) continue;
        // The lower writer never owns a separate translation or mask. If
        // either half is missing, both original native rows remain intact.
        if (entry.half == lower_half) continue;
        const NativeDrawnTextRow *lower = nullptr;
        if (entry.half == upper_half) {
            const auto found = plane.find({draw.x, draw.y + 1});
            if (found == plane.end()) continue;
            bool ambiguous = false;
            for (const auto &candidate : found->second) {
                const auto &mate = *candidate.draw;
                if (candidate.half != lower_half || draw.sequence == UINT64_MAX ||
                        mate.sequence != draw.sequence + 1 ||
                        mate.address != draw.address || mate.source != draw.source ||
                        mate.complete_source != draw.complete_source ||
                        mate.draw_owner != draw.draw_owner || mate.draw_epoch != draw.draw_epoch ||
                        mate.draw_grid != draw.draw_grid || mate.top_layer != draw.top_layer) continue;
                if (lower) { ambiguous = true; break; }
                lower = &mate;
            }
            if (!lower || ambiguous) continue;
        }
        NativeCapturedUiFrame::Span span;
        span.top_layer = draw.top_layer; span.sequence = draw.sequence;
        span.x = draw.x; span.y = draw.y; span.source = draw.source;
        if (lower) { span.paired_y = lower->y; span.paired_sequence = lower->sequence; }
        if (!native_captured_ui_span_current(span, *frame, *gps_)) continue;
        const auto visible = trim_view(draw.source);
        const auto source = trim_view(draw.complete_source.empty() ?
            std::string_view(draw.source) : std::string_view(draw.complete_source));
        if (visible.empty() || source.empty()) continue;
        unsigned route = 0;
        auto target = translate_draw(draw, route);
        if (!target) continue;
        if (lower) {
            // Each completed writer must independently authorize the same
            // translation route and result. A reused temporary string cannot
            // borrow the upper row's typed name or label permission.
            unsigned lower_route = 0;
            const auto lower_target = translate_draw(*lower, lower_route);
            if (!lower_target || lower_route != route || *lower_target != *target) continue;
        }
        const int x = draw.x + static_cast<int>(visible.data() - draw.source.data());
        span.match = {x, draw.y, static_cast<int>(visible.size()), kUiMessageRule,
            std::move(*target), std::string(visible)};
        auto &match = span.match;
        match.native_captured_span = true;
        match.layout_x = x; match.layout_y = draw.y;
        match.layout_length = match.length;
        match.layout_left = true; match.layout_prepared = true;
        match.layout_fixed_baseline = true;
        if (lower) {
            match.native_split_text = true;
            match.native_split_top_y = draw.y;
            match.layout_pixel_y = frame->tile_y / 2;
        }
        match.layout_native_clip = SDL_Rect{origin_x + x * frame->tile_x,
            origin_y + draw.y * frame->tile_y, match.length * frame->tile_x,
            frame->tile_y * (lower ? 2 : 1)};
        const auto *cell = draw.draw_grid + (size_t(x) * frame->dimy + draw.y) * 8;
        match.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
        frame->spans.push_back(std::move(span));
    }
    if (frame->spans.empty() && (!chronicle.stable || chronicle.draws.empty())) return false;
    // This is the existing native raster input copy, not a text-discovery
    // scan. Never mutate the producer's arrays or another logical plane.
    input.copy_native_input(*gps_);
    if (!native_captured_ui_geometry(*frame, gps_, renderer) ||
            owner != native_current_viewscreen()) return false;
    const NativeBitmapFontTextures fonts(true);
    std::erase_if(frame->spans, [&](const auto &span) {
        const auto &plane = input.planes[span.top_layer ? 1 : 0];
        if (!native_captured_ui_span_current(span, *frame, *gps_)) return true;
        for (int row : {span.y, span.paired_y}) {
            if (row < 0) continue;
            for (size_t byte = 0; byte < span.source.size(); ++byte) {
                const auto expected = static_cast<unsigned char>(span.source[byte]);
                const size_t at = (size_t(span.x) + byte) * frame->dimy + row;
                if (plane.screen[at * 8] != expected ||
                        (expected != ' ' && native_ui_top_layer_at(*input.graphics(), at) != span.top_layer) ||
                        (span.paired_y >= 0 && (plane.flags[at] & half_mask) !=
                            (row == span.y ? upper_half : lower_half))) return true;
                // Unknown texture output could still contain English, or cover
                // these bytes entirely. Only positively identified font texture
                // slots may be removed; other artwork makes this span source-only.
                if (expected != ' ')
                    for (size_t slot : {size_t{0}, size_t{1}, size_t{2}})
                        if (plane.textures[slot][at] && !fonts.contains(plane.textures[slot][at], expected))
                            return true;
                if (plane.textures[2][at] &&
                        (plane.textures[3][at] || plane.textures[4][at])) return true;
            }
        }
        return false;
    });
    frame->chronicles = native_shared_chronicle_plan(chronicle, *frame, *gps_, input,
        draws, writers, fonts, current_record,
        [&](const NativeHistoryDocument &document) { return worldgen_cached_history_event(document); },
        [&](const auto &rows, std::string_view target, auto &source, auto &fitted,
                const auto &colors, int left, int right) {
            return append_bounded_paragraph(rows, target, source, fitted, -1, right, right, colors, false, left);
        });
    if (frame->spans.empty() && frame->chronicles.empty()) return false;
    // Validate the complete plan before editing even the first input cell.
    // Only this private input copy is masked; all retained events stay native.
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        if (revision != g_native_drawn_text_revision || epoch != g_native_drawn_text_epoch) return false;
    }
    if (!native_captured_ui_geometry(*frame, gps_, renderer) || owner != native_current_viewscreen() ||
            !std::all_of(frame->spans.begin(), frame->spans.end(), [&](const auto &span) {
                return native_captured_ui_span_current(span, *frame, *gps_);
            }) || !std::all_of(frame->chronicles.begin(), frame->chronicles.end(), [&](const auto &group) {
            return native_shared_chronicle_current(group, *frame, *gps_, true);
        })) return false;
    for (const auto &span : frame->spans) {
        const auto &match = span.match;
        auto &plane = input.planes[span.top_layer ? 1 : 0];
        for (int row : {span.y, span.paired_y}) {
            if (row < 0) continue;
            for (size_t byte = 0; byte < match.source.size(); ++byte) {
                const auto expected = static_cast<unsigned char>(match.source[byte]);
                if (expected == ' ') continue;
                const size_t at = (size_t(match.x) + byte) * frame->dimy + row;
                // The whole source was established before any input edits.
                for (size_t slot : {size_t{0}, size_t{1}, size_t{2}})
                    if (fonts.contains(plane.textures[slot][at], expected)) plane.textures[slot][at] = 0;
                plane.screen[at * 8] = ' ';
            }
        }
    }
    for (const auto &group : frame->chronicles) for (const auto &span : group.sources) {
        auto &plane = input.planes[span.top_layer ? 1 : 0];
        for (size_t byte = 0; byte < span.source.size(); ++byte) {
            const auto expected = static_cast<unsigned char>(span.source[byte]);
            if (expected == ' ') continue;
            const size_t at = (size_t(span.x) + byte) * frame->dimy + span.y;
            for (size_t slot : {size_t{0}, size_t{1}, size_t{2}})
                if (fonts.contains(plane.textures[slot][at], expected)) plane.textures[slot][at] = 0;
            plane.screen[at * 8] = ' ';
        }
    }
    native_captured_ui_frame_ = std::move(frame);
    native_ui_frame_ready_ = true;
    native_ui_copy_passthrough_ = true;
    frame_prepared_ = true;
    return true;
}

void Overlay::commit_native_ui_input(SDL_Renderer *renderer) noexcept {
    // Even an untranslated shared pass is a real native submission. Its
    // next producer must not reuse an old caption epoch because every SDL
    // map/UI copy correctly bypassed text interception.
    native_frame_drawn_ = true;
    if (!native_captured_ui_frame_) return;
    auto &frame = *native_captured_ui_frame_;
    if (!native_captured_ui_geometry(frame, gps_, renderer) ||
            !std::all_of(frame.spans.begin(), frame.spans.end(), [&](const auto &span) {
                return native_captured_ui_span_current(span, frame, *gps_);
            }) || !std::all_of(frame.chronicles.begin(), frame.chronicles.end(), [&](const auto &group) {
                return native_shared_chronicle_current(group, frame, *gps_);
            })) {
        cancel_native_ui_input();
        return;
    }
    frame.target = SDL_GetRenderTarget(renderer);
    frame.committed = true;
}

bool Overlay::render_native_captured_ui(SDL_Renderer *renderer) {
    if (!native_captured_ui_frame_) return false;
    const auto frame = native_captured_ui_frame_;
    native_frame_submitted_ = native_frame_drawn_;
    native_frame_drawn_ = false;
    if (native_frame_submitted_ && ++draw_epoch_ == 0) draw_epoch_ = 1;
    frame_prepared_ = false;
    bool same_capture = false;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        same_capture = frame->capture_epoch == g_native_drawn_text_epoch &&
            frame->capture_revision == g_native_drawn_text_revision;
    }
    if (!frame->committed || !native_ui_frame_ready_ || !config_.enabled || !face_ ||
            !same_capture || rules_.empty() || !native_captured_ui_geometry(*frame, gps_, renderer) ||
            frame->target != SDL_GetRenderTarget(renderer) ||
            frame->owner != native_current_viewscreen()) {
        cancel_native_ui_input();
        return true;
    }
    int width = 0, height = 0;
    SDL_RenderGetLogicalSize(renderer, &width, &height);
    if (width != frame->pixel_x || height != frame->pixel_y) {
        cancel_native_ui_input();
        return true;
    }
    struct OutputScope {
        SDL_Renderer *renderer;
        SDL_Rect viewport{}, clip{};
        bool clipped, previous_drawing;
        explicit OutputScope(SDL_Renderer *value)
            : renderer(value), clipped(SDL_RenderIsClipEnabled(value) == SDL_TRUE),
              previous_drawing(g_drawing_overlay) {
            SDL_RenderGetViewport(renderer, &viewport);
            SDL_RenderGetClipRect(renderer, &clip);
            g_drawing_overlay = true;
        }
        ~OutputScope() {
            SDL_RenderSetViewport(renderer, &viewport);
            SDL_RenderSetClipRect(renderer, clipped ? &clip : nullptr);
            g_drawing_overlay = previous_drawing;
        }
    } output(renderer);
    const SDL_Rect viewport{0, 0, frame->pixel_x, frame->pixel_y};
    if (SDL_RenderSetViewport(renderer, &viewport) != 0 ||
            SDL_RenderSetClipRect(renderer, nullptr) != 0) return true;
    for (const auto &span : frame->spans)
        if (native_captured_ui_span_current(span, *frame, *gps_)) draw_match(renderer, span.match);
    for (const auto &group : frame->chronicles)
        if (native_shared_chronicle_current(group, *frame, *gps_))
            for (const auto &match : group.matches) draw_match(renderer, match);
    return true;
}
