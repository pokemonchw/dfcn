// A grid's bytes do not identify its meaning: authored names, formatter
// ownership and complete clipped paragraphs can change independently. Keep
// those inputs in an exact key; native draw counters are deliberately absent.
// Call layer_context before installing that layer's captured-text scope.
struct NativeNotificationTranslationInput {
    std::shared_ptr<const NativeAnnouncementLogDocument> document;
    int foreground = 0;
    std::shared_ptr<const NativeAnnouncementLogTranslationResult> completed;
};

class NativeUiCacheContextWriter {
    std::string key_;
    const graphicst *graphics_ = nullptr;
    std::vector<uint64_t> row_sequence_ranks_;
    std::vector<uint64_t> paragraph_sequence_ranks_, paragraph_order_ranks_;
    std::unordered_map<const NativeKnowledgeDocument *, size_t> knowledge_documents_;
    std::unordered_map<const NativeHistoryDocument *, size_t> history_documents_;
    std::unordered_map<const NativeDrawnTextRow *, NativeDrawnTextRow> resolved_rows_;
    std::unordered_map<size_t, std::optional<std::pair<size_t, size_t>>> fps_spans_;
    bool character_ = false, tooltip_ = false, notification_ = false;
    std::unordered_map<uintptr_t, size_t> notification_addresses_;
    static void order_ranks(std::vector<uint64_t> &values) {
        std::sort(values.begin(), values.end());
        values.erase(std::unique(values.begin(), values.end()), values.end());
    }
    static size_t rank(const std::vector<uint64_t> &values, uint64_t value) {
        return static_cast<size_t>(std::lower_bound(values.begin(), values.end(), value) - values.begin());
    }
    static std::optional<bool> active_mod_screen(uintptr_t screen) {
        const native_history_layout::ModScreenFields *fields = nullptr;
        if (native_history_object_is(screen, "viewscreen_titlest"))
            fields = &native_history_layout::mod_title_fields;
        else if (native_history_object_is(screen, "viewscreen_new_regionst"))
            fields = &native_history_layout::mod_newregion_fields;
        else if (native_history_object_is(screen, "viewscreen_new_arenast"))
            fields = &native_history_layout::mod_newarena_fields;
        if (!fields) return false;
        uint8_t active = 0;
        if (!native_history_copy(native_mod_field_address(screen, fields->active), active))
            return std::nullopt;
        return active == 1;
    }
    bool fps_counter_row(const NativeDrawnTextRow &input) {
        if (!graphics_ || graphics_->dimx <= 0 || graphics_->dimx > 1000 ||
                graphics_->dimy <= 0 || graphics_->dimy > 1000 ||
                input.draw_dimx != graphics_->dimx || input.draw_dimy != graphics_->dimy ||
                !input.draw_grid ||
                (input.draw_grid != graphics_->screen && input.draw_grid != graphics_->screen_top) ||
                input.y < 0 || input.y >= graphics_->dimy ||
                input.x < 0 || input.x >= graphics_->dimx ||
                input.source.empty() ||
                input.source.size() > static_cast<size_t>(graphics_->dimx - input.x) ||
                (!input.complete_source.empty() && input.complete_source != input.source))
            return false;
        // Native can justify the label and numbers through separate addst
        // calls. Every accepted run must fit inside a complete counter in
        // this live grid; a numeric spelling alone is never FPS evidence.
        if (input.source.find_first_not_of("FPS: ()0123456789") != std::string::npos)
            return false;
        const size_t row_key = static_cast<size_t>(input.y) +
            (input.draw_grid == graphics_->screen_top ? static_cast<size_t>(graphics_->dimy) : 0);
        auto found = fps_spans_.find(row_key);
        if (found == fps_spans_.end()) {
            std::array<char, 1000> row;
            for (int x = 0; x < graphics_->dimx; ++x)
                row[static_cast<size_t>(x)] = static_cast<char>(input.draw_grid[
                    (static_cast<size_t>(x) * graphics_->dimy + input.y) * 8]);
            found = fps_spans_.emplace(row_key, native_fps_counter_span(
                std::string_view(row.data(), static_cast<size_t>(graphics_->dimx)))).first;
        }
        const auto &span = found->second;
        if (!span || static_cast<size_t>(input.x) < span->first ||
                static_cast<size_t>(input.x) + input.source.size() > span->second) return false;
        for (size_t offset = 0; offset < input.source.size(); ++offset) {
            const size_t tile = (static_cast<size_t>(input.x) + offset) * graphics_->dimy + input.y;
            if (input.draw_grid[tile * 8] != static_cast<unsigned char>(input.source[offset]))
                return false;
        }
        return true;
    }
    const NativeDrawnTextRow &resolved_row(const NativeDrawnTextRow &input) {
        if (!character_ || !input.unit_identity_pending ||
                input.unit_identity_semantic_key.empty()) return input;
        const auto saved = resolved_rows_.find(&input);
        if (saved != resolved_rows_.end()) return saved->second;
        const auto &pending = *input.unit_identity_pending;
        if (pending.catalog != g_overlay.native_identity_translation_catalog_generation()) return input;
        const auto source = input.complete_source.empty() ? std::string_view(input.source)
            : std::string_view(input.complete_source);
        auto binding = native_unit_identity_source_binding(source, input.address,
            input.unit_identity_semantic_key);
        std::optional<std::string> target;
        if (binding && binding->ready) target = binding->target;
        else {
            // Discovery resolves a copy of the captured row. A retained
            // native frame may therefore still hold its original pending
            // identity after either the worker or SDL has completed it.
            // Read only the exact typed result here; never run translation
            // while computing a cache key.
            if (pending.source != source || pending.semantic_key != input.unit_identity_semantic_key)
                return input;
            auto &cache = g_native_unit_identity_completed;
            std::lock_guard<std::mutex> lock(cache.mutex);
            const auto found = cache.results.find(pending.semantic_key);
            if (found == cache.results.end()) return input;
            target = !found->second || *found->second == native_text_to_utf8(pending.semantic_source)
                ? native_text_to_utf8(pending.source) : *found->second;
        }
        auto row = input;
        row.unit_identity_target = std::move(target);
        row.unit_identity_ready = true;
        row.unit_identity_pending.reset();
        return resolved_rows_.emplace(&input, std::move(row)).first->second;
    }
public:
    NativeUiCacheContextWriter() { key_.reserve(4096); }
    bool complete = true;
    void graphics(const graphicst *input) { graphics_ = input; fps_spans_.clear(); }
    template<typename T> void value(T input) {
        if (!complete) return;
        if (key_.size() > 1024 * 1024 - 8) { complete = false; return; }
        const uint64_t bits = static_cast<uint64_t>(input);
        // Keys live only in this process. One fixed-width append preserves
        // exact equality without eight string capacity checks per scalar.
        key_.append(reinterpret_cast<const char *>(&bits), sizeof(bits));
    }
    template<typename T> void pointer(const T *input) {
        value(reinterpret_cast<uintptr_t>(input));
    }
    void address(uintptr_t input) {
        if (!notification_ || !input) { value(input); return; }
        // Notification wrapping can allocate identical rows at new addresses.
        // Preserve the exact ownership links between captured draws and their
        // complete sources without making allocation addresses pixel inputs.
        const auto [entry, inserted] = notification_addresses_.try_emplace(
            input, notification_addresses_.size() + 1);
        value(entry->second);
    }
    void text(std::string_view input) {
        if (!complete) return;
        if (key_.size() > 1024 * 1024 - 8 ||
                input.size() > 1024 * 1024 - 8 - key_.size()) {
            complete = false; return;
        }
        value(input.size());
        key_.append(input);
    }
    void rect(const SDL_Rect &input) {
        value(input.x); value(input.y); value(input.w); value(input.h);
    }
    template<typename T, typename F> void optional(const T &input, F append) {
        value(bool(input));
        if (input) append(*input);
    }
    template<typename T, typename F> void range(const T &input, F append) {
        value(input.size());
        for (const auto &item : input) {
            if (!complete) break;
            append(item);
        }
    }
    void grid(const unsigned char *input) {
        if (!input) { value(0); return; }
        if (!graphics_) { complete = false; return; }
        if (input == graphics_->screen) value(1);
        else if (input == graphics_->screen_top) value(2);
        else complete = false;
    }
    void name(const NativeHistoryName &input) {
        text(input.first_name); text(input.nickname);
        for (const auto &word : input.words) {
            text(word.id); value(word.part_of_speech); value(word.has_form);
            text(word.english_form);
        }
        value(input.language); value(input.nickname_mode); value(input.type);
        value(input.has_name); value(input.entity_type); value(input.entity_id);
        value(input.entity_name_current); text(input.parent_word_id);
        value(input.parent_word_pos); value(input.site_id); value(input.site_type);
        value(input.site_subtype); text(input.site_label); text(input.native_name);
    }
    void adventure_belief(const NativeAdventureBeliefCache &cache) {
        value(cache.screen); value(cache.owner);
        value(cache.practice); value(cache.practice_id); value(cache.figure_id);
        value(cache.religion); value(cache.figure); value(cache.figure_flags);
        value(cache.figure_race); value(cache.figure_sex); value(cache.character_race);
        text(cache.creature_singular); text(cache.creature_adjective);
        range(cache.figure_spheres, [&](auto sphere) { value(sphere); });
        optional(cache.religion_name, [&](const auto &input) { name(input); });
        optional(cache.figure_name, [&](const auto &input) { name(input); });
        optional(cache.force_name, [&](const auto &input) { name(input); });
        optional(cache.temple, [&](const auto &input) {
            value(input.kind); value(input.id); value(input.subid); value(input.native_type);
            name(input.name); text(input.species); text(input.label_key); text(input.raw_title);
        });
        value(cache.temple_ruined);
        range(cache.rows, [&](const auto &input) { address(input.address); text(input.source); });
        range(cache.paragraphs, [&](const auto &paragraph) { text(paragraph); });
    }
    void job_item(const NativeJobItemCaption &input) {
        address(input.owner); value(input.item_type); value(input.item_subtype);
        value(input.material_type); value(input.material_index); value(input.quantity);
        for (auto flag : input.flags) value(flag);
        text(input.source); text(input.reaction_class); text(input.reaction_product);
        text(input.material_id); text(input.material_prefix); text(input.material_state);
    }
    void widget(const NativeTooltipWidgetFrame &input, uint64_t epoch) {
        // Snapshot composition reads another full grid with its own origins.
        // It is intentionally left on the ordinary path until that dependency
        // can be compared alongside the layer's input grid.
        if (input.page || input.document) { complete = false; return; }
        rect(input.bounds); value(input.dimx); value(input.dimy);
        value(input.epoch == epoch); value(input.top_layer); value(input.isolated);
        grid(input.grid_identity); text(input.body_source);
        value(input.workshop_recipe);
        range(input.workshop_fields, [&](const auto &field) {
            value(field.first_line); text(field.source);
            range(field.wrapped_lines, [&](const auto &row) { text(row); });
            optional(field.job_item_caption, [&](const auto &item) { job_item(item); });
        });
        range(input.rows, [&](const auto &row) { text(row); });
        range(input.glyph_rows, [&](const auto &row) { text(row); });
        range(input.occlusions, [&](const auto &box) { rect(box); });
        value(input.adventure_background);
        optional(input.adventure_belief, [&](const auto &cache) { adventure_belief(cache); });
        if (input.adventure_home) {
            // Home still resolves live site/controller names and formatter
            // context. Its isolated draw remains available, but cannot retain
            // a texture until those dependencies belong to the submitted frame.
            complete = false;
        }
    }
    void toolbar(const NativeToolbarTooltip &input) {
        value(input.left); value(input.top); value(input.right); value(input.bottom);
        value(input.text_x); value(input.text_y); value(input.text_right);
        value(input.body_x); value(input.keys_y);
        range(input.key_rows, [&](int row) { value(row); });
        value(input.native_frame); value(input.whole_frame); value(input.widget_frame);
        value(input.widget_top_layer); text(input.source);
        range(input.rows, [&](const auto &row) { text(row); });
        range(input.occlusions, [&](const auto &box) { rect(box); });
        range(input.deity_fields, [&](const auto &field) {
            text(field.target); value(field.pixel_y);
        });
    }
    bool row_cacheable(const NativeDrawnTextRow &captured) {
        const auto &input = resolved_row(captured);
        return !input.trade_item_caption && !input.reclaim_history &&
            !input.world_site_entity_fact && !input.justice_organization &&
            !input.justice_plot && !input.fortress_zone_caption &&
            (!input.unit_identity_pending || !input.unit_identity_pending->deferred_snapshot) &&
            (!input.draw_grid || (graphics_ &&
                (input.draw_grid == graphics_->screen || input.draw_grid == graphics_->screen_top)));
    }
    void row(const NativeDrawnTextRow &captured, uint64_t epoch) {
        const auto &input = resolved_row(captured);
        // These records contain further typed object graphs, not just a
        // visible spelling. A normal redraw is safer than an incomplete key.
        if (input.trade_item_caption ||
                input.reclaim_history || input.world_site_entity_fact ||
                input.justice_organization || input.justice_plot ||
                input.fortress_zone_caption) {
            complete = false; return;
        }
        // The native counter remains on the game's renderer, including the
        // adventure HUD above its toolbar. Each complete or separately drawn
        // run must agree with a complete counter in its actual native grid;
        // adjacent text and divergent shortened sources stay exact.
        const bool fps = !tooltip_ && fps_counter_row(input);
        constexpr std::string_view fps_marker = "native FPS counter";
        value(input.x); value(input.y); value(fps);
        text(fps ? fps_marker : std::string_view(input.source)); address(input.address);
        value(input.caption_source);
        text(fps && !input.complete_source.empty()
            ? fps_marker : std::string_view(input.complete_source));
        optional(input.performance_choice, [&](const auto &choice) {
            value(choice.type); value(choice.id); value(choice.unnamed);
            value(bool(choice.story_event));
            text(choice.source); text(choice.species);
        });
        optional(input.picture_frame, [&](const auto &frame) {
            rect(frame.text); rect(frame.proof); value(frame.dimx); value(frame.dimy);
            value(frame.classic);
            range(frame.lower, [&](auto item) { value(item); });
            range(frame.cells, [&](const auto &cell) {
                for (auto item : cell) value(item);
            });
            range(frame.anchors, [&](auto item) { value(item); });
        });
        optional(input.unit_identity_target, [&](const auto &target) { text(target); });
        value(input.unit_identity_owner); value(input.unit_identity_english);
        value(input.unit_identity_header); value(input.unit_identity_ready);
        text(input.unit_identity_semantic_key);
        optional(input.unit_identity_pending, [&](const auto &pending) {
            if (pending.deferred_snapshot) { complete = false; return; }
            text(pending.source); text(pending.target); value(pending.unit_owner);
            value(pending.english_name); value(pending.character_header);
            value(pending.ready); text(pending.semantic_key); value(pending.catalog);
            text(pending.semantic_source);
            value(pending.publication_epoch == epoch);
            // pending_witness is only the async job's scheduling identity.
        });
        // Keep authored and generated names as different productions even
        // when their visible English bytes happen to be identical.
        optional(input.squad_alias_target, [&](const auto &target) { text(target); });
        optional(input.squad_generated_name, [&](const auto &generated) { name(generated); });
        value(input.squad_list_right);
        value(input.info_title_kind); value(input.info_title_authored);
        value(input.info_title_right); value(input.civilization_field);
        value(input.character_relation_right);
        optional(input.caravan_entity_name, [&](const auto &entity) { name(entity); });
        value(input.location_picker_field);
        optional(input.location_picker_box, [&](const auto &box) { rect(box); });
        optional(input.fortress_labor_caption, [&](const auto &caption) {
            value(caption.kind); value(caption.owner); value(caption.authored);
            rect(caption.box); text(caption.source);
        });
        value(input.mission_title); value(input.mission_title_right);
        value(rank(row_sequence_ranks_, input.sequence));
        value(input.top_layer); value(input.foreground_rgb);
        optional(input.draw_clip, [&](const auto &box) { rect(box); });
        grid(input.draw_grid); value(input.draw_dimx); value(input.draw_dimy);
        value(input.draw_epoch == epoch);
        value(input.map_hover.kind); value(input.map_hover.fragment);
        for (auto item : input.map_hover.data) value(item);
        value(input.editable_text); value(input.travel_building_field);
        optional(input.site_name, [&](const auto &site) { name(site); });
        optional(input.river_name, [&](const auto &river) {
            const auto &id = river.identity;
            text(id.world_key); value(id.index); name(id.name);
            value(id.size); value(id.terrain); value(id.finalized);
            text(id.generic_style); value(river.field); text(river.complete_source);
        });
        value(input.native_caller); value(input.adventure_crafting_role);
        value(input.adventure_inventory_role); value(input.adventure_barter_field);
        optional(input.work_order_shop_caption, [&](const auto &caption) {
            value(caption.kind); value(caption.right); value(caption.authored);
            text(caption.complete_source);
        });
        optional(input.work_order_condition_caption, [&](const auto &caption) { job_item(caption); });
        optional(input.workshop_task_caption, [&](const auto &caption) {
            address(caption.building); address(caption.job);
            rect(caption.box); text(caption.complete_source);
        });
        optional(input.arena_tree_caption, [&](const auto &caption) {
            address(caption.picker); address(caption.plant);
            text(caption.name); value(caption.right);
        });
        // Vector traversal preserves relative native draw order. Absolute
        // sequence/epoch numbers are scheduling, not semantic content.
    }
    void chooser(const NativeUnitChooserRecord &input) {
        rect(input.box); rect(input.viewport); rect(input.panel);
        value(input.skill_x); value(input.search_y);
        text(input.squad_name_source); text(input.squad_caption_source);
        text(input.squad_caption_complete_source);
        optional(input.generated_squad_name, [&](const auto &generated) { name(generated); });
        optional(input.squad_alias, [&](const auto &alias) { text(alias); });
        value(input.squad_position); value(input.squad_caption_x);
        value(input.squad_caption_y); value(input.unit_identity_x);
        value(input.unit_identity_y); text(input.unit_identity_source);
        text(input.unit_identity_complete_source); text(input.unit_identity_split_source);
        optional(input.unit_identity_target, [&](const auto &target) { text(target); });
    }
    void paragraph(const NativeParagraphCapture &input) {
        address(input.owner); value(input.paragraph_width); text(input.source);
        range(input.wrapped_lines, [&](const auto &line) { text(line); });
        value(input.first_line);
        value(rank(paragraph_sequence_ranks_, input.sequence));
        value(rank(paragraph_order_ranks_, input.registry_order));
        range(input.row_addresses, [&](auto input_address) { address(input_address); });
        optional(input.display_source, [&](const auto &source) { text(source); });
        optional(input.job_item_caption, [&](const auto &item) { job_item(item); });
    }
    template<typename Paragraphs> void paragraph_range(const Paragraphs &input) {
        paragraph_sequence_ranks_.clear(); paragraph_order_ranks_.clear();
        for (const auto &capture : input) {
            paragraph_sequence_ranks_.push_back(capture.sequence);
            paragraph_order_ranks_.push_back(capture.registry_order);
        }
        order_ranks(paragraph_sequence_ranks_); order_ranks(paragraph_order_ranks_);
        range(input, [&](const auto &capture) { paragraph(capture); });
    }
    template<typename Rows, typename Dates, typename Clipped, typename Choosers,
            typename Sources, typename Fields, typename Paragraphs>
    void captures(const Rows &rows, const std::vector<NativeDrawnTextRow> &overwritten,
            const Dates &dates, const std::optional<NativeTooltipWidgetFrame> &tooltip,
            const std::optional<NativeToolbarTooltip> &tooltip_toolbar,
            uint64_t epoch, const Clipped &clipped, bool clipped_current,
            const Choosers &choosers, bool chooser_current, const Sources &sources,
            const Fields &fields, const Paragraphs &paragraphs) {
        if (!complete) return;
        if (tooltip && (tooltip->page || tooltip->document)) { complete = false; return; }
        row_sequence_ranks_.clear();
        const auto inspect_rows = [&](const std::vector<NativeDrawnTextRow> &plane) {
            if (!complete) return;
            for (const auto &draw : plane) {
                if (!row_cacheable(draw)) { complete = false; return; }
                row_sequence_ranks_.push_back(draw.sequence);
            }
        };
        for (const auto &plane : rows) inspect_rows(plane);
        inspect_rows(overwritten);
        if (!complete) return;
        order_ranks(row_sequence_ranks_);
        for (const auto &plane : rows) row_vector(plane, epoch);
        range(overwritten, [&](const auto &draw) { row(draw, epoch); });
        for (const auto &plane : dates)
            range(plane, [&](const auto &draw) {
                value(draw.x); value(draw.y); text(draw.source); address(draw.address);
            });
        optional(tooltip, [&](const auto &frame) { widget(frame, epoch); });
        optional(tooltip_toolbar, [&](const auto &frame) { toolbar(frame); });
        value(clipped_current);
        range(clipped, [&](const auto &caption) {
            value(caption.x); value(caption.y); text(caption.visible); text(caption.complete);
        });
        value(chooser_current);
        range(choosers, [&](const auto &record) { chooser(record); });
        // Position maps have no intrinsic iteration order. Sort identities
        // before serializing. Timestamp order and expiry affect selection;
        // the absolute steady-clock counter does not.
        std::vector<uint64_t> positions;
        positions.reserve(sources.size());
        for (const auto &entry : sources) positions.push_back(entry.first);
        std::sort(positions.begin(), positions.end());
        value(positions.size());
        const uint64_t current = tooltip_ ? epoch :
            g_embark_item_capture_epoch.load(std::memory_order_acquire);
        std::vector<std::chrono::steady_clock::time_point> time_order;
        time_order.reserve(sources.size() + fields.size());
        for (const auto &entry : sources) time_order.push_back(entry.second.captured_at);
        for (const auto &capture : fields) time_order.push_back(capture.captured_at);
        std::sort(time_order.begin(), time_order.end());
        time_order.erase(std::unique(time_order.begin(), time_order.end()), time_order.end());
        const auto deadline = std::chrono::steady_clock::now() - std::chrono::seconds(2);
        const auto item = [&](const auto &capture) {
            value(capture.screen_x); value(capture.screen_y);
            text(capture.visible); text(capture.complete);
            value(capture.capture_epoch == current);
            value(capture.captured_at >= deadline);
            value(static_cast<size_t>(std::lower_bound(time_order.begin(), time_order.end(),
                capture.captured_at) - time_order.begin()));
        };
        for (auto position : positions) { value(position); item(sources.at(position)); }
        range(fields, item);
        paragraph_range(paragraphs);
    }
    void bundle(const NativeInfoCapturedText &input) {
        // A retained component renews these two registries when its capture
        // scope is installed; nonzero validity is what its readers observe.
        captures(input.rows, input.overwritten, input.dates, input.tooltip_widget,
            input.toolbar_tooltip, input.epoch, input.clipped, input.clipped_epoch != 0,
            input.choosers, input.chooser_epoch != 0, input.item_sources,
            input.item_fields, input.paragraphs);
    }
    void tooltip() {
        // Tooltip dependencies are its submitted writers and frames. Do not
        // visit the underlying viewscreen or another component's registries,
        // and never inspect a full native row to recognize its FPS counter.
        tooltip_ = true;
        value(g_native_ui_render_generation);
        value(g_overlay.translation_enabled());
        value(RULESETS.resource_revision());
        value(g_overlay.native_identity_translation_catalog_generation());
    }
    void notification() {
        notification_ = true;
        tooltip();
        // Only the typed unit/category summaries use the live identity
        // registry. Complete reports own their immutable worker publication.
        const bool identity_summary = std::any_of(g_native_notification_paragraphs.begin(),
            g_native_notification_paragraphs.end(), [](const auto &paragraph) {
                return !paragraph.parent && paragraph.fortress_alert &&
                    (paragraph.unit || !paragraph.name_source.empty() || paragraph.category >= 0);
            });
        value(identity_summary);
        if (identity_summary) value(native_identity_translation_context());
        uintptr_t world = 0;
        if (!native_history_copy(native_history_global(0x24ebb58), world)) complete = false;
        value(world);
        optional(native_ui_classic(), [&](bool classic) { value(classic); });
    }
    void notification_source_context() {
        notification_ = true;
        tooltip_ = true;
    }
    void notification_sources(std::vector<NativeNotificationTranslationInput> &translations) {
        // Index the submitted row ownership once. Each complete paragraph
        // then visits only its own writers, including clipped visible rows.
        std::unordered_multimap<uintptr_t, const NativeDrawnTextRow *> writers;
        for (const auto &plane : g_native_notification_text.rows)
            for (const auto &draw : plane) writers.emplace(draw.address, &draw);
        range(g_native_notification_paragraphs, [&](const auto &paragraph) {
            value(paragraph.parent); text(paragraph.source);
            value(paragraph.centered); value(paragraph.fortress_alert);
            value(paragraph.width); value(paragraph.repeats);
            value(paragraph.unit); value(paragraph.category); text(paragraph.name_source);
            optional(paragraph.report_document, [&](const auto &document) {
                text(native_announcement_log_document_key(document));
                std::vector<int> foregrounds;
                if (graphics_) for (const auto &row : paragraph.rows) {
                    const auto [first, last] = writers.equal_range(row.address);
                    for (auto writer = first; writer != last; ++writer) {
                        const auto &draw = *writer->second;
                        if (draw.source != row.source || draw.x < 0 || draw.y < 0 ||
                                draw.x >= graphics_->dimx || draw.y >= graphics_->dimy) continue;
                        const size_t tile = static_cast<size_t>(draw.x) * graphics_->dimy + draw.y;
                        const bool top = graphics_->screen_top && native_ui_top_layer_at(*graphics_, tile);
                        const auto *screen = top ? graphics_->screen_top : graphics_->screen;
                        if (!screen) continue;
                        const auto *cell = screen + tile * 8;
                        foregrounds.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
                    }
                }
                std::sort(foregrounds.begin(), foregrounds.end());
                foregrounds.erase(std::unique(foregrounds.begin(), foregrounds.end()), foregrounds.end());
                if (foregrounds.empty()) { complete = false; return; }
                range(foregrounds, [&](int foreground) {
                    value(foreground);
                    translations.push_back({paragraph.report_document, foreground,
                        native_notification_retained_translation(paragraph, foreground)});
                });
            });
            range(paragraph.rows, [&](const auto &row) {
                address(row.address); text(row.source);
            });
        });
    }
    void current() {
        std::scoped_lock lock(g_native_drawn_text_mutex, g_clipped_caption_mutex,
            g_native_unit_chooser_record_mutex, g_embark_item_source_mutex,
            g_native_paragraph_mutex);
        // A saved background has another full origin-bearing grid. Detect
        // that unsupported dependency before allocating and serializing rows.
        if (g_native_help_page && g_native_help_page_epoch == g_native_drawn_text_epoch) {
            complete = false; return;
        }
        // Reference wrappers preserve capture order without duplicating all
        // owned strings just to compute this key.
        const std::array<std::reference_wrapper<const std::vector<NativeDrawnTextRow>>, 2>
            rows{{std::cref(g_native_drawn_text_rows), std::cref(g_native_drawn_top_text_rows)}};
        const uint64_t epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        value(g_native_drawn_text_epoch == epoch);
        captures(rows, g_native_overwritten_text_rows, g_native_date_occluded_text_rows,
            g_native_tooltip_widget_frame, g_native_toolbar_tooltip, g_native_drawn_text_epoch,
            g_clipped_captions, g_clipped_caption_epoch == epoch,
            g_native_unit_chooser_records, g_native_unit_chooser_record_epoch == epoch,
            g_embark_item_sources_by_position, g_embark_item_fields_this_frame,
            g_native_paragraph_captures);
        // Recovering a saved background entails comparing another complete
        // page and its origin map, which the foreground grid comparator does
        // not own. Continue through the existing renderer for that case.
    }
    void row_vector(const std::vector<NativeDrawnTextRow> &rows, uint64_t epoch) {
        range(rows, [&](const auto &draw) { row(draw, epoch); });
    }
    void layer(const NativeUiLayerStorage &input) {
        value(input.ready);
        if (!input.ready) return;
        pointer(input.native_renderer); pointer(input.renderer);
        range(input.frames, [&](const auto &box) { rect(box); });
        range(input.collapsed_titles, [&](const auto &title) {
            rect(title.box); value(title.source_x); text(title.source);
        });
        range(input.index_panels, [&](const auto &panel) {
            rect(panel.frame); value(panel.heading_y); value(panel.caption_left);
            value(panel.caption_right); value(panel.first_caption_y); value(panel.visible_entries);
        });
        optional(input.index_intro, [&](const auto &box) { rect(box); });
    }
    void adventure_background_snapshot(uintptr_t screen) {
#ifdef _WIN32
        const auto screen_field = [&](std::string_view member, size_t width) {
            return native_history_object_member(screen, "viewscreen_setupadventurest", member, width);
        };
        int32_t selected = -1;
        NativeBorrowedVector<uintptr_t> sheets;
        if (!native_history_copy(screen_field("active_sheet_index", sizeof(selected)), selected) ||
                selected < 0 || !native_history_read_vector(screen_field("csheet", sizeof(sheets)), sheets) ||
                !sheets.valid(64) || static_cast<size_t>(selected) >= sheets.size()) {
            complete = false; return;
        }
        const uintptr_t owner = native_history_vector_at(sheets, static_cast<size_t>(selected));
        const auto field = [&](std::string_view member, size_t width) {
            return native_history_object_member(owner, "setup_character_info", member, width);
        };
        int32_t column = -1;
        if (!owner || !native_history_copy(field("active_column", sizeof(column)), column) ||
                column != 2) {
            // Other columns still have uncaptured page formatter inputs.
            complete = false; return;
        }
        value(screen); value(selected); value(owner); value(column);
        const auto choices = frame_native_adventure_belief_choices();
        if (!choices) { complete = false; return; }
        range(*choices, [&](const auto &choice) {
            value(choice.practice); value(choice.id); value(choice.figure_flags); text(choice.species);
            optional(choice.name, [&](const auto &input) { name(input); });
        });
        // The hover card owns its source arrays and semantic snapshot in the
        // tooltip layer. Page caching has no dependency on its native writes,
        // covered background or anchored artwork elsewhere on the screen.
#else
        (void)screen;
        complete = false;
#endif
    }
    bool adventure_background(uintptr_t screen) {
        auto *snapshot = g_native_adventure_background_read;
        if (snapshot && snapshot->context_read) {
            if (!snapshot->context) return false;
            text(*snapshot->context);
            return complete;
        }
        NativeUiCacheContextWriter sources;
        sources.adventure_background_snapshot(screen);
        auto context = sources.finish();
        if (snapshot) {
            snapshot->context_read = true;
            snapshot->context = context;
        }
        if (!context) return false;
        text(*context);
        return complete;
    }
    bool common(bool character = false) {
        character_ = character;
        value(g_native_ui_render_generation);
        value(g_overlay.translation_enabled());
        value(RULESETS.resource_revision());
        value(g_overlay.native_identity_translation_catalog_generation());
        const uintptr_t screen = native_current_viewscreen();
        if (!screen) return false;
        if (!character && native_history_object_is(screen, "viewscreen_setupadventurest") &&
                !adventure_background(screen)) return false;
        value(screen);
        const auto classic = native_ui_classic();
        if (!classic) return false;
        value(*classic);
        if (character) {
            // The sheet is a native component with its own sources and grid.
            // Hidden management, history and world-generation state cannot
            // affect it and must not decline its retained translation cache.
            // Its typed rows/documents carry their frozen identity results;
            // background alias registries are not a dependency of this key.
            rect(g_native_character_panel);
            value(g_native_character_owner); value(g_native_character_context);
            value(g_native_character_active_id); value(g_native_character_active_sub_tab);
            return true;
        }
        value(native_identity_translation_context());
        value(native_dfhack_layer_page_revision());
        value(g_native_info_page); value(g_native_info_labor_page);
        value(g_native_stocks_current_type); value(g_native_stocks_category_right);
        value(g_native_display_current_type); value(g_native_display_category_right);
        value(g_native_display_content_right);
        rect(g_native_info_panel); rect(g_native_stocks_panel); rect(g_native_reports_panel);
        rect(g_native_display_panel);
        rect(g_native_squads_panel); rect(g_native_notification_bounds);
        rect(g_native_worldgen_panel);
        value(g_native_worldgen_owner); value(g_native_worldgen_parameter_name_editing);
        // Rich history consumers have additional native token/object graphs.
        if (g_native_history_frame) return false;
        // Only the selector's active bit is needed to decline its uncaptured
        // live headers. Do not copy every mod header/description here, or
        // resolve the same native viewscreen chain a second time.
        const auto mod_active = active_mod_screen(screen);
        if (!mod_active || *mod_active) return false;
        return true;
    }
    void history_event(const NativeHistoryEventData &input, size_t depth = 0) {
        if (!complete) return;
        if (depth >= kNativeHistoryTreeDepth) { complete = false; return; }
        value(input.kind); value(input.native_type); value(input.id);
        value(input.year); value(input.seconds); value(input.goal);
        value(input.artifact_id); value(input.creator_unit_id); value(input.actor_id);
        value(input.entity_id); value(input.site_id); value(input.site_entity_id);
        value(input.position_id); value(input.flags);
        value(input.circumstance); value(input.circumstance_data);
        value(input.reason); value(input.reason_data); text(input.position);
        range(input.fields, [&](const auto &field) {
            text(field.first);
            range(field.second, [&](auto item) { value(item); });
        });
        range(input.context, [&](const auto &field) { text(field.first); value(field.second); });
        range(input.texts, [&](const auto &field) { text(field.first); text(field.second); });
        range(input.references, [&](const auto &reference) {
            value(reference.first); value(reference.second);
        });
        range(input.subjects, [&](const auto &subject) {
            value(subject.kind); value(subject.id); value(subject.subid);
            value(subject.native_type); name(subject.name);
            text(subject.species); text(subject.label_key); text(subject.raw_title);
        });
        range(input.children, [&](const auto &child) {
            value(child.first);
            optional(child.second, [&](const auto &event) { history_event(event, depth + 1); });
        });
    }
    void history_document(const std::shared_ptr<const NativeHistoryDocument> &input) {
        value(bool(input));
        if (!input || !complete) return;
        const auto [known, inserted] = history_documents_.emplace(input.get(), history_documents_.size());
        // A shared immutable document is encoded once, with exact references
        // thereafter. Native allocation addresses are not semantic content.
        value(known->second); value(inserted);
        if (!inserted) return;
        value(input->owner); history_event(input->event);
        optional(input->page, [&](const auto &page) {
            value(page.kind); history_event(page.data);
        });
        text(input->native_source);
        range(input->tokens, [&](const auto &token) {
            value(token.identity); text(token.source); value(token.x); value(token.y);
            value(token.color); value(token.link_type); value(token.link_id); value(token.link_subid);
        });
    }
    void knowledge_document(const std::shared_ptr<const NativeKnowledgeDocument> &input) {
        value(bool(input));
        if (!input || !complete) return;
        const auto [known, inserted] = knowledge_documents_.emplace(input.get(), knowledge_documents_.size());
        value(known->second); value(inserted);
        if (!inserted) return;
        text(input->source); value(input->width); value(input->personality);
        value(input->health); value(input->thoughts); value(input->overview_footer);
        value(input->foreground);
        range(input->rows, [&](const auto &line) { text(line); });
        range(input->row_addresses, [&](auto address) { value(address); });
        range(input->box_boundaries, [&](const auto &boundary) {
            value(boundary.source_end); value(boundary.native_row_end);
        });
        history_document(input->story_event);
    }
    void knowledge_sources() {
        const uint64_t published = g_overlay.native_knowledge_frame_revision();
        if (published == UINT64_MAX) { complete = false; return; }
        value(published);
        std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
        const uint64_t epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        const auto draws = [&](const auto &batch) {
            range(batch, [&](const auto &draw) {
                // Retained viewport recovery compares document identities,
                // including when two immutable documents have equal text.
                pointer(draw.document.get());
                knowledge_document(draw.document);
                value(draw.line); value(draw.x); value(draw.y);
                // Retained rows may name an older native buffer. Preserve
                // that identity and its current ownership separately; an
                // unrelated old buffer is valid dependency data, not a grid
                // that this frame must expose to the UI reader.
                value(draw.screen);
                value(graphics_ && draw.screen == reinterpret_cast<uintptr_t>(graphics_->screen));
                value(graphics_ && draw.screen == reinterpret_cast<uintptr_t>(graphics_->screen_top));
                value(draw.dimx); value(draw.dimy);
                for (auto item : draw.clip) value(item);
            });
        };
        value(g_native_knowledge_draw_epoch == epoch); draws(g_native_knowledge_draws);
        value(g_native_knowledge_previous_draw_epoch == epoch); draws(g_native_knowledge_previous_draws);
    }
    void character_sources(const NativeCharacterCapturedText &input) {
        optional(input.quote, [&](const auto &quote) {
            value(quote.owner); grid(quote.grid); value(quote.dimx); value(quote.dimy);
            value(quote.left); value(quote.right); value(quote.top); value(quote.bottom);
            value(quote.thoughts_bottom); text(quote.source);
            range(quote.wrapped_lines, [&](const auto &line) { text(line); });
        });
        value(input.relation_epoch != 0);
        range(input.relations, [&](const auto &relation) {
            value(relation.x); value(relation.y); value(relation.dimx); value(relation.dimy);
            grid(relation.screen); text(relation.source); text(relation.target);
        });
        const auto draws = [&](const auto &batch) {
            range(batch, [&](const auto &draw) {
                knowledge_document(draw.document);
                value(draw.line); value(draw.x); value(draw.y);
                grid(reinterpret_cast<const unsigned char *>(draw.screen));
                value(draw.dimx); value(draw.dimy);
                for (auto item : draw.clip) value(item);
            });
        };
        value(input.knowledge_epoch != 0); draws(input.knowledge_draws);
        value(input.knowledge_previous_epoch != 0); draws(input.knowledge_previous_draws);
        range(input.events, [&](const auto &event) {
            text(event.source); value(event.collection_id); value(event.ambiguous);
            history_document(event.document);
        });
    }
    void announcement_snapshot(const NativeAnnouncementSnapshot &snapshot) {
        // This process-wide ID changes before every records/references
        // mutation and is never reset on world changes. Identical copies
        // retain the ID until their first write, so it identifies the whole
        // immutable snapshot without serializing the complete report history
        // into every UI key. The retained paragraph registry has its own
        // exact comparison and must not lose its cache merely because these
        // two independent histories exceed the combined key's byte limit.
        if (snapshot.content_revision == UINT64_MAX) { complete = false; return; }
        value(snapshot.content_revision);
    }
    void other_sources() {
        if (!complete) return;
        {
            std::lock_guard<std::mutex> lock(g_native_overview_event_mutex);
            // Reject recursive typed documents before walking other global
            // registries: no key will be retained for this dependency graph.
            for (const auto &source : g_native_overview_event_sources)
                if (!source.source.empty() || source.document) { complete = false; return; }
        }
#ifdef _WIN32
        {
            std::lock_guard<std::mutex> lock(g_native_justice_actor_capture_mutex);
            if (!g_native_justice_actor_sources.empty()) { complete = false; return; }
        }
#endif
        const uint64_t epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        {
            std::lock_guard<std::mutex> lock(g_origin_caption_mutex);
            value(g_origin_caption_epoch == epoch);
            range(g_origin_captions, [&](const auto &caption) {
                value(caption.x); value(caption.y); text(caption.visible); text(caption.complete);
            });
        }
        {
            std::lock_guard<std::mutex> lock(g_legends_book_mutex);
            value(g_legends_book_epoch == epoch);
            range(g_legends_book_fields, [&](const auto &field) {
                value(field.x); value(field.y); value(field.item_type);
                text(field.visible); text(field.complete);
            });
        }
        {
            std::lock_guard<std::mutex> lock(g_native_character_relation_mutex);
            range(g_native_character_relations, [&](const auto &relation) {
                // Other pages' relations cannot influence this grid. Keeping
                // their scalar/text data is harmless; do not retain their
                // transient native grid pointer as a cache dependency.
                const bool current = graphics_ && relation.screen == graphics_->screen &&
                    relation.dimx == graphics_->dimx && relation.dimy == graphics_->dimy;
                value(current);
                if (current) {
                    value(relation.x); value(relation.y); value(relation.dimx);
                    value(relation.dimy); text(relation.source); text(relation.target);
                }
            });
        }
        {
            std::lock_guard<std::mutex> lock(g_native_squad_alias_mutex);
            value(g_native_squad_alias_epoch == epoch);
            std::vector<uintptr_t> owners;
            for (const auto &entry : g_native_squad_alias_owners) owners.push_back(entry.first);
            std::sort(owners.begin(), owners.end());
            value(owners.size());
            for (auto owner : owners) {
                const auto &binding = g_native_squad_alias_owners.at(owner);
                value(owner); text(binding.source); text(binding.target);
            }
            owners.clear();
            for (const auto &entry : g_native_squad_generated_owners) owners.push_back(entry.first);
            std::sort(owners.begin(), owners.end());
            value(owners.size());
            for (auto owner : owners) {
                const auto &binding = g_native_squad_generated_owners.at(owner);
                value(owner); text(binding.source);
                optional(binding.name, [&](const auto &generated) { name(generated); });
            }
        }
        {
            std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
            range(g_native_map_track_captions, [&](const auto &caption) {
                pointer(caption.owner); text(caption.shortened); text(caption.complete);
            });
        }
        {
            std::lock_guard<std::mutex> lock(g_native_workshop_requirement_mutex);
            value(native_workshop_recipe_paragraph_width());
            paragraph_range(g_native_workshop_requirements);
        }
        {
            std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
            range(g_native_announcement_sources, [&](const auto &source) {
                value(source.type); text(source.source);
            });
            range(g_native_speech_sources, [&](const auto &source) {
                text(source.rendered); text(source.original);
            });
            optional(g_native_announcement_snapshot, [&](const auto &snapshot) {
                announcement_snapshot(snapshot);
            });
        }
    }
    std::optional<std::string> finish() {
        // Oversized historical registries retain the ordinary path rather
        // than growing an unbounded cache key on the SDL thread.
        if (!complete || key_.size() > 1024 * 1024) return std::nullopt;
        return std::move(key_);
    }
};

std::optional<std::string> Overlay::native_topbar_cache_context() const {
    // Only this producer's submitted captions, site identity and style
    // affect its target. Other pages and layers have no top-bar meaning.
    NativeUiCacheContextWriter key;
    key.tooltip();
    key.graphics(g_native_topbar_layer.foreground.graphics());
    key.bundle(g_native_topbar_text);
    NativeHistoryName site;
    std::string english;
    if (!capture_current_fortress_site_name(site, english)) return std::nullopt;
    key.name(site);
    key.text(english);
    return key.finish();
}

std::optional<std::string> Overlay::native_embark_civilization_cache_context() const {
    NativeUiCacheContextWriter key;
    key.tooltip();
    key.graphics(g_native_embark_civilization_layer.foreground.graphics());
    key.bundle(g_native_embark_civilization_text);
    key.rect(g_native_embark_civilization_panel);
    key.range(g_native_embark_civilization_boxes, [&](const auto &box) { key.rect(box); });
    return key.finish();
}

static std::optional<std::string> native_ui_layer_cache_context(
        const NativeUiLayerStorage &layer) {
    // This list resolves its own typed unit captions, including pending
    // identity results, at presentation. Never borrow the whole page's
    // semantic key or freeze those results in another component's cache.
    if (&layer == &g_native_map_hover_layer) return std::nullopt;
    if (&layer == &g_native_petition_layer) {
        NativeUiCacheContextWriter key;
        key.tooltip();
        key.graphics(g_native_petition_layer.foreground.graphics());
        key.bundle(g_native_petition_text);
        key.rect(g_native_petition_panel);
        return key.finish();
    }
    if (&layer == &g_native_petitions_layer) {
        NativeUiCacheContextWriter key;
        key.tooltip();
        key.graphics(g_native_petitions_layer.foreground.graphics());
        key.bundle(g_native_petitions_text);
        key.rect(g_native_petitions_panel);
        return key.finish();
    }
    if (&layer == &g_native_designation_layer) {
        NativeUiCacheContextWriter key;
        key.tooltip();
        key.graphics(g_native_designation_layer.foreground.graphics());
        key.bundle(g_native_designation_text);
        return key.finish();
    }
    if (&layer == &g_native_embark_civilization_layer)
        return g_overlay.native_embark_civilization_cache_context();
    if (&layer == &g_native_topbar_layer) return g_overlay.native_topbar_cache_context();
    if (&layer == &g_native_notification_layer) {
        // Only the submitted notification and its complete parents can change
        // this target. Other panels, historical registries and formatter scopes
        // must neither disable this cache nor force a full repaint every frame.
        struct Submission {
            uint64_t generation = 0, translation_revision = 0;
            uint64_t source_publication = 1, result_publication = 1;
            std::optional<std::string> source;
            std::vector<NativeNotificationTranslationInput> translations;
            std::vector<std::shared_ptr<const NativeAnnouncementLogTranslationResult>> results;
        };
        static Submission submitted;
        const bool changed = submitted.generation != g_native_notification_submission_generation;
        if (changed) {
            NativeUiCacheContextWriter source;
            source.notification_source_context();
            source.graphics(const_cast<NativeUiLayerStorage &>(layer).foreground.graphics());
            source.bundle(g_native_notification_text);
            source.value(g_native_notification_sources_valid);
            std::vector<NativeNotificationTranslationInput> translations;
            source.notification_sources(translations);
            auto complete_source = source.finish();
            if (submitted.source != complete_source) ++submitted.source_publication;
            submitted.source = std::move(complete_source);
            submitted.translations = std::move(translations);
            submitted.generation = g_native_notification_submission_generation;
        }
        if (!submitted.source) return std::nullopt;
        const uint64_t revision = native_announcement_log_translation_revision();
        if (changed || submitted.translation_revision != revision) {
            std::vector<std::shared_ptr<const NativeAnnouncementLogTranslationResult>> results;
            results.reserve(submitted.translations.size());
            for (const auto &input : submitted.translations)
                results.push_back(input.completed ? input.completed :
                    native_announcement_log_translation_request(input.document, input.foreground, true));
            // Hold both immutable publications during comparison. A small
            // monotonic token also prevents recycled result addresses from
            // matching an older retained texture after this snapshot changes.
            if (submitted.results != results) ++submitted.result_publication;
            submitted.results = std::move(results);
            submitted.translation_revision = revision;
        }
        NativeUiCacheContextWriter key;
        key.notification();
        key.value(submitted.source_publication);
        key.value(submitted.result_publication);
        return key.finish();
    }
    if (&layer == &g_native_tooltip_layer) {
        NativeUiCacheContextWriter key;
        key.tooltip();
        key.graphics(const_cast<NativeUiLayerStorage &>(layer).foreground.graphics());
        key.bundle(g_native_tooltip_text);
        key.range(g_native_tooltip_frames, [&](const auto &frame) {
            key.widget(frame, g_native_tooltip_text.epoch);
        });
        return key.finish();
    }
    // The announcement log owns only its submitted document. Its private
    // renderer must not inspect other interface sources to build a cache key.
    if (&layer == &g_native_announcement_log_layer) return std::nullopt;
    if (&layer == &g_native_map_layer) return std::nullopt;
    // These already-translated Match graphs keep the ordinary path. Avoid
    // constructing a semantic key only to reject it after all serialization.
    if (&layer == &g_native_squads_layer &&
            (!g_native_squads_footer_rows.empty() || !g_native_squads_footer_target.empty() ||
             !g_native_squads_paragraphs.empty())) return std::nullopt;
    NativeUiCacheContextWriter key;
    const bool character = &layer == &g_native_character_layer;
    if (!key.common(character)) return std::nullopt;
    key.graphics(const_cast<NativeUiLayerStorage &>(layer).foreground.graphics());
    // NativeUiLayerFrameCache compares renderer ownership, frames, collapsed
    // titles and index panels exactly already. The semantic key needs only
    // the layer identity here, not a second serialized copy of that metadata.
    key.pointer(&layer);
    const NativeInfoCapturedText *captured = nullptr;
    if (character) captured = &g_native_character_text;
    else if (&layer == &g_native_info_layer) captured = &g_native_info_text;
    else if (&layer == &g_native_stocks_layer) captured = &g_native_stocks_text;
    else if (&layer == &g_native_display_layer) captured = &g_native_display_text;
    else if (&layer == &g_native_squads_layer) captured = &g_native_squads_text;
    else if (&layer == &g_native_reports_layer) captured = &g_native_reports_text;
    else if (&layer == &g_native_notification_layer) captured = &g_native_notification_text;
    else if (&layer == &g_native_pause_layer) captured = &g_native_pause_text;
    else if (&layer == &g_native_worldgen_layer) captured = &g_native_worldgen_text;
    else if (&layer != &g_native_help_layer && &layer != &g_native_resolution_layer)
        return std::nullopt;
    if (captured) key.bundle(*captured);
    else key.current();
    if (!key.complete) return std::nullopt;
    if (character) key.character_sources(g_native_character_sources);
    else key.other_sources();
    if (&layer == &g_native_squads_layer) {
        // Extra producer geometry is independent of the submitted glyphs.
        key.range(g_native_squads_member_columns, [&](const auto &box) { key.rect(box); });
        for (auto caller : g_native_squads_footer_callers) key.value(caller);
        key.value(g_native_squads_member_name_caller);
        key.value(g_native_squads_member_order_caller);
        for (auto caller : g_native_squads_equipment_callers) key.value(caller);
    }
    if (&layer == &g_native_pause_layer) {
        key.optional(g_native_pause_compact_menu, [&](const auto &menu) {
            for (const auto &button : menu.buttons) key.rect(button);
            key.rect(menu.soundtrack);
        });
    }
    return key.finish();
}

static std::optional<std::string> native_main_ui_cache_context() {
    // These independently owned records can recover text absent from the
    // current grid. Their complete rich semantic graphs have no comparator
    // here, so they keep the existing rendering path.
    {
        std::lock_guard<std::mutex> lock(g_native_overview_quote_mutex);
        if (g_native_overview_quote_draw) return std::nullopt;
    }
    {
        std::lock_guard<std::mutex> lock(g_native_embark_reclaim_history_mutex);
        if (!g_native_embark_reclaim_history_draws.rows.empty() ||
                !g_native_embark_reclaim_history_previous_draws.rows.empty()) return std::nullopt;
    }
    NativeUiCacheContextWriter key;
    if (!key.common()) return std::nullopt;
    key.graphics(native_graphics());
    key.knowledge_sources();
    key.text("main"); key.current();
    if (!key.complete) return std::nullopt;
    key.other_sources();
    // The base layer's character reader changes when another component
    // covers its cells, even if every byte in the base arrays is identical.
    key.layer(g_native_info_layer); key.layer(g_native_stocks_layer);
    key.layer(g_native_display_layer);
    key.layer(g_native_squads_layer); key.layer(g_native_reports_layer);
    key.layer(g_native_notification_layer); key.layer(g_native_pause_layer);
    key.layer(g_native_tooltip_layer); key.layer(g_native_help_layer);
    key.layer(g_native_resolution_layer); key.layer(g_native_worldgen_layer);
    key.layer(g_native_character_layer);
    key.layer(g_native_topbar_layer);
    key.layer(g_native_petitions_layer);
    return key.finish();
}
