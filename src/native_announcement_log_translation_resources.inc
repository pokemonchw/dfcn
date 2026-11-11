// Only catalog publication takes the renderer's translation lock. Every job
// below owns a complete CPU parser, rule graph, naming vocabulary and memo.
static void native_announcement_log_collect_owned_unit_dependencies(
    const NativeAnnouncementLogDocument &document,
    std::vector<NativeAnnouncementLogReferenceRequest> &requests);
NativeAnnouncementLogTranslator Overlay::make_native_announcement_log_translator() const {
    TranslationStateScope translation;
    using Parser = DFHack::DFZH::Hooks::RulesetsManager;
    struct Worker {
        TranslationStateDomain domain;
        Overlay overlay;
        std::shared_ptr<Parser> parser;
        AnnouncementMaterialVocabulary materials;
        std::vector<std::string> message_sources;
        // CPU translation reads only the copied palette. Do not construct a
        // native graphics owner: ELF's texture constructors/destructors belong
        // to the game library, and this worker owns no game rendering state.
        alignas(graphicst) std::array<unsigned char, sizeof(graphicst)> palette{};
        uint64_t catalog = 0;
        bool initialized = false;
        std::shared_ptr<const std::unordered_map<std::string, std::string>> instruments;
    };
    auto state = std::make_shared<Worker>();
    auto &target = state->overlay;
    target.translation_cpu_only_ = true;
    target.config_ = config_;
    state->catalog = native_identity_translation_catalog_generation();
    target.identity_translation_catalog_generation_.store(state->catalog, std::memory_order_release);
    target.translation_enabled_snapshot_.store(config_.enabled, std::memory_order_release);
    state->parser = RULESETS.clone_private();
    state->materials = {g_magical_materials, g_magical_material_qualifiers, g_magical_material_max_bytes};
    auto *palette = reinterpret_cast<graphicst *>(state->palette.data());
    if (gps_) std::memcpy(palette->uccolor, gps_->uccolor, sizeof(gps_->uccolor));
    target.gps_ = palette;
#define ANNOUNCEMENT_COPY_RESOURCE(name) target.name = name
    ANNOUNCEMENT_COPY_RESOURCE(rules_);
    ANNOUNCEMENT_COPY_RESOURCE(trie_);
    ANNOUNCEMENT_COPY_RESOURCE(trie_ci_);
    ANNOUNCEMENT_COPY_RESOURCE(template_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(template_anchors_);
    ANNOUNCEMENT_COPY_RESOURCE(toolbar_source_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(toolbar_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(toolbar_template_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(help_trie_);
    ANNOUNCEMENT_COPY_RESOURCE(help_template_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(help_template_anchors_);
    ANNOUNCEMENT_COPY_RESOURCE(help_objective_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(ui_message_trie_);
    ANNOUNCEMENT_COPY_RESOURCE(ui_message_template_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(prose_template_membership_);
    ANNOUNCEMENT_COPY_RESOURCE(ui_message_split_prefixes_);
    ANNOUNCEMENT_COPY_RESOURCE(ui_message_template_probes_);
    ANNOUNCEMENT_COPY_RESOURCE(ui_message_start_filter_);
    ANNOUNCEMENT_COPY_RESOURCE(ui_message_anchors_);
    ANNOUNCEMENT_COPY_RESOURCE(announcement_combat_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(announcement_combat_syntax_);
    ANNOUNCEMENT_COPY_RESOURCE(adventure_prose_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_prose_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_book_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_event_anchors_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_participant_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_identity_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_description_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_continuation_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_anchor_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_terms_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_terms_ci_);
    ANNOUNCEMENT_COPY_RESOURCE(world_site_type_aliases_);
    ANNOUNCEMENT_COPY_RESOURCE(history_semantic_templates_);
    ANNOUNCEMENT_COPY_RESOURCE(history_event_title_templates_);
    ANNOUNCEMENT_COPY_RESOURCE(legends_tab_titles_);
    ANNOUNCEMENT_COPY_RESOURCE(deity_sphere_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(capture_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(capture_prefix_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(overview_quote_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(overview_sentence_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(symbol_image_template_rule_);
    ANNOUNCEMENT_COPY_RESOURCE(symbol_action_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(symbol_role_prompt_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(item_description_sentence_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(item_description_term_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(item_description_predicate_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(adventure_item_action_rules_);
    ANNOUNCEMENT_COPY_RESOURCE(embark_drink_names_);
    ANNOUNCEMENT_COPY_RESOURCE(liquid_material_names_);
    ANNOUNCEMENT_COPY_RESOURCE(symbol_shape_forms_);
    ANNOUNCEMENT_COPY_RESOURCE(procedural_terms_);
    ANNOUNCEMENT_COPY_RESOURCE(procedural_name_meanings_);
    ANNOUNCEMENT_COPY_RESOURCE(procedural_word_meanings_);
    ANNOUNCEMENT_COPY_RESOURCE(procedural_word_senses_);
    ANNOUNCEMENT_COPY_RESOURCE(volcano_names_);
    ANNOUNCEMENT_COPY_RESOURCE(site_name_decisions_);
    ANNOUNCEMENT_COPY_RESOURCE(site_name_imagery_);
    ANNOUNCEMENT_COPY_RESOURCE(civilization_name_terms_);
    ANNOUNCEMENT_COPY_RESOURCE(civilization_name_modifiers_);
    ANNOUNCEMENT_COPY_RESOURCE(site_government_parent_suffixes_);
    ANNOUNCEMENT_COPY_RESOURCE(site_government_name_terms_);
    ANNOUNCEMENT_COPY_RESOURCE(site_government_independent_suffixes_);
    ANNOUNCEMENT_COPY_RESOURCE(history_english_name_forms_);
    ANNOUNCEMENT_COPY_RESOURCE(english_character_names_);
    ANNOUNCEMENT_COPY_RESOURCE(name_editor_word_forms_);
    ANNOUNCEMENT_COPY_RESOURCE(native_word_ids_);
    ANNOUNCEMENT_COPY_RESOURCE(name_editor_translations_);
    ANNOUNCEMENT_COPY_RESOURCE(adventure_target_literals_);
    ANNOUNCEMENT_COPY_RESOURCE(adventure_target_templates_);
    ANNOUNCEMENT_COPY_RESOURCE(generated_instrument_name_transliterations_);
    ANNOUNCEMENT_COPY_RESOURCE(native_name_language_masks_);
    ANNOUNCEMENT_COPY_RESOURCE(native_name_word_languages_);
    ANNOUNCEMENT_COPY_RESOURCE(native_name_reviewed_transliterations_);
    ANNOUNCEMENT_COPY_RESOURCE(instrument_terms_);
    ANNOUNCEMENT_COPY_RESOURCE(instrument_patterns_);
    ANNOUNCEMENT_COPY_RESOURCE(native_instrument_names_);
    ANNOUNCEMENT_COPY_RESOURCE(instrument_names_epoch_);
    ANNOUNCEMENT_COPY_RESOURCE(described_instrument_items_);
#undef ANNOUNCEMENT_COPY_RESOURCE
    target.english_name_transliterator_.copy_resources_from(english_name_transliterator_);
    // Rebuild views into the copied rules, never the renderer's strings.
    state->message_sources.reserve(ui_message_template_sources_.size());
    for (const auto &[source, index] : ui_message_template_sources_) {
        state->message_sources.emplace_back(source);
        target.ui_message_template_sources_.try_emplace(state->message_sources.back(), index);
    }
    return [state = std::move(state)](const NativeAnnouncementLogDocument &document, int) {
        translation_work_step(0);
        TranslationStateDomainScope domain(state->domain);
        Parser::ScopedInstanceOverride parser(*state->parser);
        struct OwnerScope {
            Overlay *overlay = g_announcement_translation_overlay;
            const AnnouncementMaterialVocabulary *materials = g_announcement_material_vocabulary;
            explicit OwnerScope(Worker &worker) {
                g_announcement_translation_overlay = &worker.overlay;
                g_announcement_material_vocabulary = &worker.materials;
            }
            ~OwnerScope() {
                g_announcement_translation_overlay = overlay;
                g_announcement_material_vocabulary = materials;
            }
        } owner(*state);
        if (!state->initialized) {
            state->overlay.load_compositional_rules();
            state->overlay.identity_translation_catalog_generation_.store(state->catalog, std::memory_order_release);
            state->initialized = true;
        }
        // A viewport can retire this job while its private parser initializes.
        // Keep that initialized graph, but yield before copying another input
        // catalogue or collecting dependencies for an obsolete foreground job.
        translation_work_step(0);
        NativeAnnouncementLogWorkerInputScope inputs(document.worker_inputs.get());
        if (document.worker_inputs && document.worker_inputs->instrument_names &&
                state->instruments != document.worker_inputs->instrument_names) {
            const auto &instruments = document.worker_inputs->instrument_names;
            if (state->overlay.native_instrument_names_ != *instruments) {
                state->overlay.native_instrument_names_ = *instruments;
                state->overlay.described_instrument_items_.clear();
                state->overlay.instrument_description_cache_.clear();
                state->overlay.workshop_recipe_translation_cache_.clear();
                state->overlay.item_description_cache_.clear();
                state->overlay.item_translation_cache_.clear();
                state->overlay.item_translation_cache_order_.clear();
            }
            state->instruments = instruments;
        }
        translation_work_step(0);
        NativeAnnouncementLogTranslationResult result;
        // Discover all already-owned live identity leaves in one pass. The
        // parser otherwise unwinds at its first absent leaf and repeats the
        // entire paragraph after every native publication. This pass only
        // inspects immutable snapshots and never renders or reads the world.
        native_announcement_log_collect_owned_unit_dependencies(document, result.reference_requests);
        if (!result.reference_requests.empty()) {
            result.needs_owned_dependency = true;
            return result;
        }
        bool world_attempt = false;
        bool dependency_attempt = false;
        struct WorldScope {
            bool *previous = dfhack_world_read_attempt;
            bool *previous_dependency = g_native_announcement_log_dependency_attempt;
            std::vector<NativeAnnouncementLogReferenceRequest> *previous_requests =
                g_native_announcement_log_reference_requests;
            WorldScope(bool &attempt, bool &dependency,
                    std::vector<NativeAnnouncementLogReferenceRequest> &requests) {
                dfhack_world_read_attempt = &attempt;
                g_native_announcement_log_dependency_attempt = &dependency;
                g_native_announcement_log_reference_requests = &requests;
            }
            ~WorldScope() {
                dfhack_world_read_attempt = previous;
                g_native_announcement_log_dependency_attempt = previous_dependency;
                g_native_announcement_log_reference_requests = previous_requests;
            }
        } witness(world_attempt, dependency_attempt, result.reference_requests);
        DfhackTranslationThreadScope owned_inputs;
        try {
            TranslationWorkScope work;
            const auto source = native_announcement_display_source(document.report.source);
            NativeAnnouncementLogTranslationScope report_owner(document.report, document.world);
            NativeAnnouncementLogDocumentScope document_owner(document);
            g_native_announcement_log_identity_context ^=
                native_identity_source_fingerprint(document.record_key, std::nullopt);
            if (!g_native_announcement_log_identity_context) g_native_announcement_log_identity_context = 1;
            // This parser serves one uniform native report. Preserve inherited
            // foreground as a template marker; the service applies the actual
            // viewport RGB after lookup, without rerunning sentence semantics.
            constexpr int foreground = native_announcement_log_inherited_foreground;
            result.target = state->overlay.compose_native_announcement_log_record(
                document, source, foreground, result.colors);
            TranslationResult outcome;
            if (!result.target) result.target = state->overlay.translate_complete_announcement(
                source, std::vector<int>(source.size(), foreground), result.colors,
                false, document.report.type, &outcome);
            if (world_attempt && result.target && outcome.status == TranslationStatus::Partial)
                result.needs_owned_dependency = true;
            translation_work_step(0);
            if (work.exhausted()) result.needs_owned_dependency = true;
        } catch (const DfhackTranslationNeedsWorld &) {
            result.needs_owned_dependency = true;
        } catch (const NativeAnnouncementLogNeedsDependency &) {
            // Preserve the exact leaf requests collected before unwinding;
            // the service must receive them with this pending publication.
            result.needs_owned_dependency = true;
        } catch (const TranslationWorkLimit &) {
            result.needs_owned_dependency = true;
        }
        if (!result.target && world_attempt) result.needs_owned_dependency = true;
        if (dependency_attempt) result.needs_owned_dependency = true;
        if (result.needs_owned_dependency) { result.target.reset(); result.colors.clear(); }
        return result;
    };
}

void Overlay::publish_native_announcement_log_translation_catalog() const {
    if (translation_cpu_only_) return;
    std::vector<NativeAnnouncementLogTranslator> translators;
    const auto workers = native_announcement_log_translation_worker_count();
    translators.reserve(workers);
    for (size_t worker = 0; worker < workers; ++worker)
        translators.push_back(make_native_announcement_log_translator());
    native_announcement_log_translation_publish_catalog(std::move(translators),
        native_identity_translation_catalog_generation());
    native_announcement_log_translation_start();
}
