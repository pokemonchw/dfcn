bool Overlay::load_rules() {
    TranslationStateScope translation_scope;
    auto extension_snapshot = extensions::discover();
    for (const auto& diagnostic : extension_snapshot.diagnostics)
        log_line("WARN", diagnostic);
    std::vector<Rule> loaded;
    const auto read_mapping = [&](const fs::path& mapping_path,
                                  std::vector<Rule>& destination) -> bool {
        const auto mapping_name = runtime::utf8(mapping_path);
        std::ifstream in(mapping_path, std::ios::binary);
        if (!in) {
            log_line("ERROR", "Cannot open mapping file; retaining previous translations: " + mapping_name);
            return false;
        }
        std::string line;
        size_t line_no = 0;
        while (std::getline(in, line)) {
            ++line_no;
            if (!line.empty() && line.back() == '\r') line.pop_back();
            if (line_no == 1 && line.size() >= 3 &&
                static_cast<unsigned char>(line[0]) == 0xef &&
                static_cast<unsigned char>(line[1]) == 0xbb &&
                static_cast<unsigned char>(line[2]) == 0xbf) {
                line.erase(0, 3);
            }
            if (line.empty() || line[0] == '#') continue;
            const size_t tab = line.find('\t');
            if (tab == std::string::npos) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                                     " needs source<TAB>translation; ignored");
                continue;
            }
            const size_t flags_tab = line.find('\t', tab + 1);
            bool source_ok = false;
            bool target_ok = false;
            std::string source = unescape_tsv(std::string_view(line).substr(0, tab), &source_ok);
            const size_t target_length = flags_tab == std::string::npos
                                             ? std::string::npos
                                             : flags_tab - tab - 1;
            std::string target = unescape_tsv(
                std::string_view(line).substr(tab + 1, target_length), &target_ok);
            const std::string flags = flags_tab == std::string::npos
                                          ? std::string{}
                                          : trim(line.substr(flags_tab + 1));
            if (!source_ok || !target_ok || source.empty()) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                                     " has an invalid escape or empty source; ignored");
                continue;
            }
            std::vector<uint32_t> cps;
            if (trim(target).empty()) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " empty translation would delete source text; ignored");
                continue;
            }
            if (!decode_utf8(target, cps) || target.find('\n') != std::string::npos ||
                target.find('\r') != std::string::npos) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                                     " translation is not single-line UTF-8; ignored");
                continue;
            }
            Rule rule;
            rule.source = std::move(source);
            rule.target = std::move(target);
            rule.line = line_no;
            rule.word_boundary = flags.find('w') != std::string::npos;
            rule.word_follows = flags.find('p') != std::string::npos;
            rule.case_insensitive = flags.find('i') != std::string::npos;
            rule.left_align = flags.find('l') != std::string::npos;
            rule.operation_title = flags.find('o') != std::string::npos;
            rule.strict_captures = flags.find('x') != std::string::npos;
            rule.adventure_prose = flags.find('a') != std::string::npos;
            rule.legends_prose = flags.find('h') != std::string::npos;
            rule.legends_book_title = flags.find('b') != std::string::npos;
            rule.legends_event_title = flags.find('E') != std::string::npos;
            rule.legends_participant_relation = flags.find('u') != std::string::npos;
            rule.legends_identity = flags.find('N') != std::string::npos;
            rule.legends_description_term = flags.find('v') != std::string::npos;
            rule.legends_continuation = flags.find('C') != std::string::npos;
            rule.item_description_sentence = flags.find('H') != std::string::npos;
            rule.item_description_term = flags.find('I') != std::string::npos;
            rule.item_description_predicate = flags.find('J') != std::string::npos;
            rule.magical_material_noun = flags.find('m') != std::string::npos;
            rule.magical_material_qualifier = flags.find('M') != std::string::npos;
            rule.deity_sphere = flags.find('r') != std::string::npos;
            rule.help_prose = flags.find('q') != std::string::npos;
            rule.help_objective = rule.help_prose && flags.find('O') != std::string::npos;
            rule.tooltip_prose = flags.find('j') != std::string::npos;
            rule.ui_message = flags.find('P') != std::string::npos;
            if ((rule.help_prose || rule.ui_message) && rule.target.find("[C:") != std::string::npos) {
                std::string plain;
                int palette = -1;
                bool valid = true;
                for (size_t at = 0; at < rule.target.size();) {
                    if (rule.target.compare(at, 3, "[C:") == 0) {
                        const auto tag = std::string_view(rule.target).substr(at, 9);
                        if (tag.size() != 9 || tag[3] < '0' || tag[3] > '7' ||
                            tag[4] != ':' || tag[5] < '0' || tag[5] > '7' ||
                            tag[6] != ':' || (tag[7] != '0' && tag[7] != '1') ||
                            tag[8] != ']') {
                            valid = false;
                            break;
                        }
                        palette = tag[3] - '0' + (tag[7] - '0') * 8;
                        at += tag.size();
                        continue;
                    }
                    const unsigned char ch = rule.target[at++];
                    plain.push_back(static_cast<char>(ch));
                    if ((ch & 0xc0) != 0x80) rule.help_target_palettes.push_back(palette);
                }
                if (!valid || plain.empty()) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                        " has an invalid help color tag or empty text; ignored");
                    continue;
                }
                rule.target = std::move(plain);
            }
            for (char flag : flags) {
                if (flag != 'w' && flag != 'p' && flag != 't' && flag != 'i' && flag != 'l' && flag != 'o' && flag != 'x' && flag != 'a' && flag != 'h' && flag != 'b' && flag != 'E' && flag != 'u' && flag != 'N' && flag != 'v' && flag != 'C' && flag != 'r' && flag != 'm' && flag != 'M' && flag != 'q' && flag != 'O' && flag != 'j' && flag != 'H' && flag != 'I' && flag != 'J' && flag != 'P' && flag != ',' &&
                    !std::isspace(static_cast<unsigned char>(flag))) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                                         " has unknown rule flag '" + std::string(1, flag) + "'");
                }
            }
            if (flags.find('t') != std::string::npos) {
                split_template(rule.source, &rule.template_literals, &rule.template_kinds,
                    rule.adventure_prose || rule.legends_prose, rule.legends_prose);
                std::vector<std::string> target_literals;
                std::vector<char> target_kinds;
                split_template(rule.target, &target_literals, &target_kinds,
                    rule.adventure_prose || rule.legends_prose, rule.legends_prose);
                rule.numeric_template = std::find(rule.template_kinds.begin(), rule.template_kinds.end(), 'd') !=
                                        rule.template_kinds.end();
                rule.string_template = std::any_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                    [](char kind) { return kind != 'd'; });
                bool compatible = rule.template_kinds == target_kinds;
                // Keep ordinary templates on their existing path. Extended
                // numeric targets share Legends' checked capture-order compiler.
                bool extended_numbers = false;
                for (size_t at = rule.target.find("{d"); at != std::string::npos;
                        at = rule.target.find("{d", at + 2)) {
                    if (at + 2 < rule.target.size() &&
                        rule.target[at + 2] >= '0' && rule.target[at + 2] <= '9')
                        extended_numbers = true;
                }
                if (rule.legends_prose || extended_numbers)
                    compatible = compile_template_target(rule);
                else if (compatible) {
                    // Ordinary templates already require the same field order.
                    // Preserve that parsed target for typed semantic callers too,
                    // including the shared b. {d}/d. {d} date templates.
                    rule.target_template_literals = std::move(target_literals);
                    for (size_t index = 0; index < rule.template_kinds.size(); ++index)
                        rule.target_capture_order.push_back(index);
                }
                if (rule.legends_prose) {
                    // Most event templates start with a participant, not a
                    // literal. Reject absent predicates before typed backtracking.
                    for (const auto &literal : rule.template_literals)
                        if (literal.size() > rule.legends_match_anchor.size())
                            rule.legends_match_anchor = literal;
                }
                if (rule.template_kinds.empty() || !compatible) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                                         " has mismatched template placeholders; ignored");
                    continue;
                }
                if (std::find(rule.template_kinds.begin(), rule.template_kinds.end(), 'u') !=
                        rule.template_kinds.end() &&
                    !rule.item_description_sentence && !rule.item_description_term &&
                    !rule.item_description_predicate && !rule.ui_message) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                        " unit-label slots require the item description grammar; ignored");
                    continue;
                }
                if (!rule.item_description_term &&
                    std::find(rule.template_kinds.begin(), rule.template_kinds.end(), 'l') !=
                        rule.template_kinds.end()) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                        " liquid-ingredient slots require the item noun grammar; ignored");
                    continue;
                }
                if (std::find(rule.template_kinds.begin(), rule.template_kinds.end(), 'j') !=
                        rule.template_kinds.end() &&
                    !rule.item_description_sentence && !rule.item_description_term &&
                    !rule.item_description_predicate) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                        " dye-material slots require the item description grammar; ignored");
                    continue;
                }
                if (std::find(rule.template_kinds.begin(), rule.template_kinds.end(), 'o') !=
                        rule.template_kinds.end() && !rule.item_description_sentence) {
                    log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                        " craftsmanship slots require the item sentence grammar; ignored");
                    continue;
                }
                if (rule.ui_message) {
                    const auto has_literal = [](const std::string &literal) {
                        return std::any_of(literal.begin(), literal.end(),
                            [](unsigned char ch) { return !std::isspace(ch); });
                    };
                    bool scoped = std::any_of(rule.template_literals.begin(),
                        rule.template_literals.end(), has_literal) &&
                        std::all_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                            [](char kind) { return std::string_view("ksncdpertbqmviuf").find(kind) != std::string_view::npos; });
                    for (size_t i = 1; i < rule.template_kinds.size(); ++i) {
                        if (!has_literal(rule.template_literals[i])) scoped = false;
                    }
                    if (!scoped) {
                        log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                            " UI captures require supported types and fixed literal boundaries; ignored");
                        continue;
                    }
                }
                if (std::find(rule.template_kinds.begin(), rule.template_kinds.end(), 'k') !=
                        rule.template_kinds.end()) {
                    const auto has_literal = [](const std::string &literal) {
                        return std::any_of(literal.begin(), literal.end(),
                            [](unsigned char ch) { return !std::isspace(ch); });
                    };
                    // In the item noun grammar {k} is a printed language WORD
                    // on a die, bounded by native quotes. It is resolved from
                    // the shared procedural vocabulary, never as a key binding.
                    bool quoted_item_word = rule.item_description_term;
                    for (size_t i = 0; quoted_item_word && i < rule.template_kinds.size(); ++i)
                        if (rule.template_kinds[i] == 'k' &&
                            (!rule.template_literals[i].ends_with("\"") ||
                             !rule.template_literals[i + 1].starts_with("\"")))
                            quoted_item_word = false;
                    bool scoped = quoted_item_word || ((rule.help_prose || rule.ui_message) &&
                        has_literal(rule.template_literals.front()));
                    for (size_t i = 1; i < rule.template_kinds.size(); ++i)
                        if (!has_literal(rule.template_literals[i])) scoped = false;
                    if (!scoped) {
                        log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                            " word/key slots require quoted item words or complete help/UI messages and fixed literal boundaries; ignored");
                        continue;
                    }
                }
            }
            if (rule.legends_event_title && (!rule.legends_prose ||
                    rule.legends_book_title || rule.legends_participant_relation ||
                    rule.legends_description_term)) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " event title rules require h and cannot use other nested scopes; ignored");
                continue;
            }
            if (rule.legends_book_title && (!rule.legends_prose || !rule.string_template ||
                    std::any_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                        [](char kind) { return kind != 'b'; }))) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " book title rules require h/t flags and only {b} captures; ignored");
                continue;
            }
            if (rule.legends_participant_relation && (!rule.legends_prose ||
                    !rule.string_template || rule.legends_book_title)) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " participant rules require h/t flags and cannot be book rules; ignored");
                continue;
            }
            if (rule.legends_identity && (!rule.legends_prose ||
                    rule.legends_event_title || rule.legends_book_title ||
                    rule.legends_participant_relation || rule.legends_description_term ||
                    rule.legends_continuation || rule.help_prose || rule.tooltip_prose ||
                    rule.ui_message || rule.item_description_sentence ||
                    rule.item_description_term || rule.item_description_predicate ||
                    rule.magical_material_noun || rule.magical_material_qualifier ||
                    rule.deity_sphere || rule.adventure_prose ||
                    std::any_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                        [](char kind) { return kind != 'n' && kind != 'p' && kind != 's'; }))) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " identity rules require h, only {n}/{p}/{s} captures and no other scopes; ignored");
                continue;
            }
            if (rule.legends_description_term && (!rule.legends_prose ||
                    rule.legends_book_title || rule.legends_participant_relation ||
                    std::any_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                        [](char kind) { return kind != 's' && kind != 'c' && kind != 't'; }))) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " description terms require h and only {s}/{c}/{t} captures; ignored");
                continue;
            }
            if (rule.legends_continuation && (!rule.legends_prose ||
                    rule.legends_event_title || rule.legends_book_title ||
                    rule.legends_participant_relation || rule.legends_description_term ||
                    rule.help_prose || rule.tooltip_prose || rule.ui_message ||
                    rule.item_description_sentence || rule.item_description_term ||
                    rule.item_description_predicate || rule.magical_material_noun ||
                    rule.magical_material_qualifier || rule.deity_sphere || rule.adventure_prose)) {
                log_line("WARN", mapping_name + ":" + std::to_string(line_no) +
                    " clipped continuations require h and cannot use other scopes; ignored");
                continue;
            }
            destination.push_back(std::move(rule));
        }
        if (in.bad()) {
            log_line("ERROR", "Cannot read usable mapping; retaining previous translations: " + mapping_name);
            return false;
        }
        return true;
    };
    if (!read_mapping(fs::u8path(config_.mapping_path), loaded) || loaded.empty()) {
        log_line("ERROR", "Cannot read usable mapping; retaining previous translations: " + config_.mapping_path);
        return false;
    }
    if (!read_mapping(fs::u8path(config_.mapping_path).parent_path() /
            "adventure-crafting-translations.tsv", loaded)) return false;
    for (const auto& package : extension_snapshot.packages) {
        if (package.translations.empty()) continue;
        std::vector<Rule> extension_rules;
        if (!read_mapping(package.translations, extension_rules)) return false;
        std::unordered_set<std::string> overridden;
        for (const auto& rule : extension_rules)
            overridden.insert(translation_rule_scope_key(rule));
        loaded.erase(std::remove_if(loaded.begin(), loaded.end(), [&](const Rule& rule) {
            return overridden.contains(translation_rule_scope_key(rule));
        }), loaded.end());
        // Preserve first-wins capture semantics inside each file, while each
        // later extension takes priority over earlier packages and the base.
        // Matching scopes were removed, so the display trie's later-wins
        // behavior cannot restore a replaced base entry.
        loaded.insert(loaded.begin(), std::make_move_iterator(extension_rules.begin()),
                      std::make_move_iterator(extension_rules.end()));
    }
    // A render/search caller can only observe one complete catalog. Build
    // every index and auxiliary vocabulary against candidate-owned rules;
    // only the pointer-preserving swaps below publish it to this Overlay.
    struct MagicalMaterialTransaction {
        decltype(g_magical_materials) materials = std::move(g_magical_materials);
        decltype(g_magical_material_qualifiers) qualifiers = std::move(g_magical_material_qualifiers);
        size_t max_bytes = g_magical_material_max_bytes;
        bool committed = false;
        ~MagicalMaterialTransaction() {
            if (committed) return;
            g_magical_materials.swap(materials);
            g_magical_material_qualifiers.swap(qualifiers);
            g_magical_material_max_bytes = max_bytes;
        }
    } material_transaction;
    std::unique_ptr<Overlay> candidate;
    std::function<void()> catalog_publication;
    try {
        candidate = std::make_unique<Overlay>();
        candidate->config_ = config_;
        candidate->rules_ = std::move(loaded);
        candidate->loaded_extensions_ = std::move(extension_snapshot);
        candidate->name_editor_search_revision_ = name_editor_search_revision_;
        candidate->build_trie(&catalog_publication);
        candidate->rebuild_announcement_combat_rules();
        candidate->load_name_editor_translations();
        candidate->load_adventure_target_translations();
        candidate->load_raw_material_names();
        candidate->load_symbol_shape_forms();
        std::error_code ec;
        candidate->mapping_mtime_ = fs::last_write_time(fs::u8path(config_.mapping_path), ec);
    } catch (const std::exception& error) {
        log_line("ERROR", "Cannot construct mapping catalog; retaining previous translations: " +
            config_.mapping_path + ": " + error.what());
        return false;
    } catch (const TranslationWorkLimit&) {
        log_line("ERROR", "Mapping catalog construction exceeded its work budget; retaining previous translations: " +
            config_.mapping_path);
        return false;
    }
    const auto commit = [](auto& live, auto& prepared) {
        using std::swap;
        swap(live, prepared);
    };
    commit(rules_, candidate->rules_);
    commit(trie_, candidate->trie_);
    commit(trie_ci_, candidate->trie_ci_);
    commit(template_rules_, candidate->template_rules_);
    commit(template_anchors_, candidate->template_anchors_);
    commit(toolbar_source_rules_, candidate->toolbar_source_rules_);
    commit(toolbar_translations_, candidate->toolbar_translations_);
    commit(toolbar_template_rules_, candidate->toolbar_template_rules_);
    commit(help_trie_, candidate->help_trie_);
    commit(help_template_rules_, candidate->help_template_rules_);
    commit(help_objective_rules_, candidate->help_objective_rules_);
    commit(ui_message_trie_, candidate->ui_message_trie_);
    commit(ui_message_template_rules_, candidate->ui_message_template_rules_);
    commit(ui_message_split_prefixes_, candidate->ui_message_split_prefixes_);
    commit(ui_message_template_probes_, candidate->ui_message_template_probes_);
    commit(ui_message_anchors_, candidate->ui_message_anchors_);
    commit(announcement_combat_syntax_, candidate->announcement_combat_syntax_);
    commit(adventure_prose_rules_, candidate->adventure_prose_rules_);
    commit(legends_prose_rules_, candidate->legends_prose_rules_);
    commit(legends_book_rules_, candidate->legends_book_rules_);
    commit(legends_event_anchors_, candidate->legends_event_anchors_);
    commit(legends_participant_rules_, candidate->legends_participant_rules_);
    commit(legends_identity_rules_, candidate->legends_identity_rules_);
    commit(legends_description_rules_, candidate->legends_description_rules_);
    commit(legends_continuation_rules_, candidate->legends_continuation_rules_);
    commit(legends_anchor_rules_, candidate->legends_anchor_rules_);
    commit(legends_terms_, candidate->legends_terms_);
    commit(legends_terms_ci_, candidate->legends_terms_ci_);
    commit(world_site_type_aliases_, candidate->world_site_type_aliases_);
    commit(history_semantic_templates_, candidate->history_semantic_templates_);
    commit(history_event_title_templates_, candidate->history_event_title_templates_);
    commit(legends_tab_titles_, candidate->legends_tab_titles_);
    commit(deity_sphere_translations_, candidate->deity_sphere_translations_);
    commit(capture_translations_, candidate->capture_translations_);
    commit(capture_prefix_translations_, candidate->capture_prefix_translations_);
    commit(dfhack_help_paragraphs_, candidate->dfhack_help_paragraphs_);
    commit(dfhack_help_source_index_, candidate->dfhack_help_source_index_);
    commit(dfhack_help_words_, candidate->dfhack_help_words_);
    commit(dfhack_output_paragraphs_, candidate->dfhack_output_paragraphs_);
    commit(dfhack_output_source_index_, candidate->dfhack_output_source_index_);
    commit(dfhack_output_words_, candidate->dfhack_output_words_);
    commit(dfhack_output_templates_, candidate->dfhack_output_templates_);
    commit(dfhack_output_template_source_index_, candidate->dfhack_output_template_source_index_);
    commit(dfhack_output_template_words_, candidate->dfhack_output_template_words_);
    commit(dfhack_output_values_, candidate->dfhack_output_values_);
    commit(dfhack_output_fragments_, candidate->dfhack_output_fragments_);
    commit(dfhack_help_mtimes_, candidate->dfhack_help_mtimes_);
    commit(map_track_translations_, candidate->map_track_translations_);
    commit(adventure_item_action_rules_, candidate->adventure_item_action_rules_);
    commit(overview_quote_translations_, candidate->overview_quote_translations_);
    commit(overview_sentence_translations_, candidate->overview_sentence_translations_);
    commit(symbol_image_template_rule_, candidate->symbol_image_template_rule_);
    commit(symbol_action_rules_, candidate->symbol_action_rules_);
    commit(item_description_sentence_rules_, candidate->item_description_sentence_rules_);
    commit(item_description_term_rules_, candidate->item_description_term_rules_);
    commit(item_description_predicate_rules_, candidate->item_description_predicate_rules_);
    commit(symbol_role_prompt_rules_, candidate->symbol_role_prompt_rules_);
    commit(embark_introduction_rules_, candidate->embark_introduction_rules_);
    commit(announcement_combat_rules_, candidate->announcement_combat_rules_);
    commit(name_editor_translations_, candidate->name_editor_translations_);
    commit(name_editor_mtime_, candidate->name_editor_mtime_);
    commit(name_editor_search_revision_, candidate->name_editor_search_revision_);
    commit(adventure_target_literals_, candidate->adventure_target_literals_);
    commit(adventure_target_templates_, candidate->adventure_target_templates_);
    commit(adventure_target_mtime_, candidate->adventure_target_mtime_);
    commit(embark_drink_names_, candidate->embark_drink_names_);
    commit(liquid_material_names_, candidate->liquid_material_names_);
    commit(symbol_shape_forms_, candidate->symbol_shape_forms_);
    commit(mapping_mtime_, candidate->mapping_mtime_);
    commit(loaded_extensions_, candidate->loaded_extensions_);
    material_transaction.committed = true;
    if (catalog_publication) catalog_publication();

    // The candidate succeeded; invalidate results of the replaced dictionary
    // only now. A failed parse/index build never changes the live caches.
    ++dfhack_translation_catalog_revision_;
    clear_legends_search_cache();
    clear_stockpile_setting_cache();
    clear_fortress_item_caption_cache();
    item_description_display_cache_.clear();
    workshop_recipe_display_cache_.clear();
    fortress_activity_display_cache_.clear();
    clear_material_name_cache();
    identity_record_translation_cache_.clear();
    identity_record_translation_order_.clear();
    native_knowledge_layouts_.clear();
    written_work_paragraph_cache_.clear();
    native_knowledge_frame_ = {};
    native_knowledge_frame_matches_.reset();
    embark_knowledge_list_matches_.clear();
    embark_knowledge_list_identity_.clear();

    {
        std::lock_guard<std::mutex> lock(conversation_choices_mutex_);
        conversation_keyword_cache_.clear();
        conversation_keyword_lexicon_.reset();
    }
    clear_announcement_translation_cache();
    clear_embark_craft_translation_cache();
    commit(legends_description_cache_, candidate->legends_description_cache_);
    commit(legends_nested_cache_, candidate->legends_nested_cache_);
    commit(legends_flow_cache_, candidate->legends_flow_cache_);
    commit(legends_native_capture_status_, candidate->legends_native_capture_status_);
    commit(history_event_translation_cache_, candidate->history_event_translation_cache_);
    commit(history_event_translation_order_, candidate->history_event_translation_order_);
    commit(history_entity_name_epoch_, candidate->history_entity_name_epoch_);
    commit(history_entity_names_, candidate->history_entity_names_);
    commit(history_parent_context_epoch_, candidate->history_parent_context_epoch_);
    commit(history_parent_context_revision_, candidate->history_parent_context_revision_);
    commit(legends_work_limit_cache_, candidate->legends_work_limit_cache_);
    commit(legends_work_limit_order_, candidate->legends_work_limit_order_);
    commit(legends_continuation_cache_, candidate->legends_continuation_cache_);
    commit(legends_continuation_order_, candidate->legends_continuation_order_);
    commit(legends_translation_cache_, candidate->legends_translation_cache_);
    commit(journal_creature_translation_cache_, candidate->journal_creature_translation_cache_);
    commit(journal_creature_translation_order_, candidate->journal_creature_translation_order_);
    commit(journal_creature_translation_bytes_, candidate->journal_creature_translation_bytes_);
    commit(adventure_background_translation_cache_, candidate->adventure_background_translation_cache_);
    commit(item_description_cache_, candidate->item_description_cache_);
    commit(embark_introduction_key_, candidate->embark_introduction_key_);
    commit(embark_introduction_targets_, candidate->embark_introduction_targets_);
    commit(symbol_element_cache_, candidate->symbol_element_cache_);
    commit(symbol_description_cache_, candidate->symbol_description_cache_);
    commit(symbol_action_cache_, candidate->symbol_action_cache_);
    commit(item_translation_cache_, candidate->item_translation_cache_);
    commit(item_translation_cache_order_, candidate->item_translation_cache_order_);
    commit(adventure_before_hover_matches_valid_, candidate->adventure_before_hover_matches_valid_);
    commit(adventure_before_hover_matches_, candidate->adventure_before_hover_matches_);
    commit(adventure_before_hover_footer_y_, candidate->adventure_before_hover_footer_y_);
    commit(adventure_hover_suppress_epoch_, candidate->adventure_hover_suppress_epoch_);
    commit(adventure_hover_scan_epoch_, candidate->adventure_hover_scan_epoch_);
    commit(tooltip_layout_cache_key_, candidate->tooltip_layout_cache_key_);
    commit(tooltip_translation_cache_valid_, candidate->tooltip_translation_cache_valid_);
    commit(workshop_recipe_translation_cache_, candidate->workshop_recipe_translation_cache_);
    commit(immediate_suppress_base_, candidate->immediate_suppress_base_);
    commit(immediate_suppress_top_, candidate->immediate_suppress_top_);
    commit(immediate_base_row_hash_, candidate->immediate_base_row_hash_);
    commit(immediate_top_row_hash_, candidate->immediate_top_row_hash_);
    commit(immediate_base_row_epoch_, candidate->immediate_base_row_epoch_);
    commit(immediate_top_row_epoch_, candidate->immediate_top_row_epoch_);
    commit(immediate_base_matches_, candidate->immediate_base_matches_);
    commit(immediate_base_matches_epoch_, candidate->immediate_base_matches_epoch_);
    commit(immediate_base_matches_screen_, candidate->immediate_base_matches_screen_);
    commit(character_overview_context_, candidate->character_overview_context_);
    commit(character_overview_context_epoch_, candidate->character_overview_context_epoch_);
    commit(character_overview_context_revision_, candidate->character_overview_context_revision_);
    commit(character_overview_context_grid_, candidate->character_overview_context_grid_);
    commit(character_overview_context_dimx_, candidate->character_overview_context_dimx_);
    commit(character_overview_context_dimy_, candidate->character_overview_context_dimy_);
    commit(immediate_dimx_, candidate->immediate_dimx_);
    commit(immediate_dimy_, candidate->immediate_dimy_);
    const size_t numeric_templates = static_cast<size_t>(std::count_if(
        rules_.begin(), rules_.end(), [](const Rule &rule) { return rule.numeric_template; }));
    const size_t string_templates = static_cast<size_t>(std::count_if(
        rules_.begin(), rules_.end(), [](const Rule &rule) { return rule.string_template; }));
    log_line("INFO", "Loaded " + std::to_string(rules_.size()) +
                         " translation rules (" + std::to_string(numeric_templates) +
                         " numeric, " + std::to_string(string_templates) +
                         " string templates) from " + config_.mapping_path);
    return true;
}

void Overlay::build_trie(std::function<void()>* catalog_publication) {
    {
        std::lock_guard<std::mutex> lock(conversation_choices_mutex_);
        conversation_keyword_cache_.clear();
        conversation_keyword_lexicon_.reset();
    }
    if (!catalog_publication) clear_announcement_translation_cache();
    toolbar_source_rules_.clear();
    toolbar_translations_.clear();
    toolbar_template_rules_.clear();
    help_trie_.clear();
    help_trie_.emplace_back();
    help_template_rules_.clear();
    help_objective_rules_.clear();
    ui_message_trie_.assign(1, TrieNode{});
    ui_message_template_rules_.clear();
    ui_message_split_prefixes_.clear();
    ui_message_template_probes_.clear();
    ui_message_anchors_.clear();
    trie_.clear();
    trie_.emplace_back();
    trie_ci_.clear();
    trie_ci_.emplace_back();
    template_rules_.clear();
    template_anchors_.clear();
    adventure_prose_rules_.clear();
    legends_prose_rules_.clear();
    legends_book_rules_.clear();
    legends_event_anchors_.clear();
    legends_participant_rules_.clear();
    legends_identity_rules_.clear();
    legends_description_rules_.clear();
    legends_continuation_rules_.clear();
    legends_description_cache_.clear();
    legends_nested_cache_.clear();
    legends_anchor_rules_.clear();
    legends_terms_.clear();
    legends_terms_ci_.clear();
    world_site_type_aliases_.clear();
    legends_flow_cache_.clear();
    legends_native_capture_status_.clear();
    history_semantic_templates_.clear();
    history_event_title_templates_.clear();
    history_event_translation_cache_.clear();
    history_event_translation_order_.clear();
    history_entity_name_epoch_ = 0;
    history_entity_names_.clear();
    history_parent_context_epoch_ = 0;
    history_parent_context_revision_ = 0;
    legends_work_limit_cache_.clear();
    legends_work_limit_order_.clear();
    legends_continuation_cache_.clear();
    legends_continuation_order_.clear();
    legends_translation_cache_.clear();
    journal_creature_translation_cache_.clear();
    journal_creature_translation_order_.clear();
    journal_creature_translation_bytes_ = 0;
    legends_tab_titles_.clear();
    deity_sphere_translations_.clear();
    g_magical_materials.clear();
    g_magical_material_max_bytes = 0;
    g_magical_material_qualifiers.clear();
    adventure_background_translation_cache_.clear();
    capture_translations_.clear();
    capture_prefix_translations_.clear();
    dfhack_help_paragraphs_.clear();
    dfhack_help_source_index_.clear();
    dfhack_help_words_.clear();
    dfhack_output_paragraphs_.clear();
    dfhack_output_source_index_.clear();
    dfhack_output_words_.clear();
    dfhack_output_templates_.clear();
    dfhack_output_template_source_index_.clear();
    dfhack_output_template_words_.clear();
    dfhack_output_values_.clear();
    dfhack_output_fragments_.clear();
    map_track_translations_.clear();
    adventure_item_action_rules_.clear();
    overview_quote_translations_.clear();
    overview_sentence_translations_.clear();
    symbol_image_template_rule_ = -1;
    symbol_action_rules_.clear();
    item_description_sentence_rules_.clear();
    item_description_term_rules_.clear();
    item_description_predicate_rules_.clear();
    item_description_cache_.clear();
    item_description_display_cache_.clear();
    workshop_recipe_display_cache_.clear();
    fortress_activity_display_cache_.clear();
    symbol_role_prompt_rules_.fill(-1);
    embark_introduction_rules_.fill(-1);
    embark_introduction_key_.clear();
    embark_introduction_targets_.fill({});
    symbol_element_cache_.clear();
    symbol_description_cache_.clear();
    symbol_action_cache_.clear();
    item_translation_cache_.clear();
    item_translation_cache_order_.clear();
    if (!catalog_publication) clear_embark_craft_translation_cache();
    // A hot-reloaded rule set can change which bytes must be hidden even when
    // the logical screen text itself did not change.
    adventure_before_hover_matches_valid_ = false;
    adventure_before_hover_matches_.clear();
    adventure_before_hover_footer_y_ = -1;
    adventure_hover_suppress_epoch_ = adventure_hover_scan_epoch_ = 0;
    tooltip_layout_cache_key_.clear();
    tooltip_translation_cache_valid_ = false;
    workshop_recipe_translation_cache_.clear();
    immediate_suppress_base_.clear();
    immediate_suppress_top_.clear();
    immediate_base_row_hash_.clear();
    immediate_top_row_hash_.clear();
    immediate_base_row_epoch_.clear();
    immediate_top_row_epoch_.clear();
    immediate_base_matches_.clear();
    immediate_base_matches_epoch_ = 0;
    immediate_base_matches_screen_ = nullptr;
    character_overview_context_ = 0;
    character_overview_context_epoch_ = 0;
    character_overview_context_revision_ = 0;
    character_overview_context_grid_ = nullptr;
    character_overview_context_dimx_ = character_overview_context_dimy_ = 0;
    immediate_dimx_ = immediate_dimy_ = 0;
    const auto index_capture_literal = [this](const Rule &rule) {
        capture_translations_.try_emplace(rule.source, rule.target);
        if (rule.word_follows)
            capture_prefix_translations_.try_emplace(rule.source, rule.target);
        if (rule.case_insensitive) {
            capture_translations_.try_emplace(lower(rule.source), rule.target);
            if (rule.word_follows)
                capture_prefix_translations_.try_emplace(lower(rule.source), rule.target);
        }
    };
    for (size_t rule_index = 0; rule_index < rules_.size(); ++rule_index) {
        const Rule &material_rule = rules_[rule_index];
        if (material_rule.source.starts_with("DFHack help: ") ||
                material_rule.source.starts_with("DFHack GUI ")) {
            index_capture_literal(material_rule);
            if (material_rule.source.starts_with("DFHack help: "))
                index_dfhack_help_paragraph(material_rule);
            continue;
        }
        constexpr std::string_view world_site_type_scope = "World site type: ";
        if (material_rule.source.starts_with(world_site_type_scope)) {
            // Native site-kind leaves are lookup-only data. Keep their finite
            // suffix table separate from all Legends prose and UI literals.
            if (material_rule.legends_prose && material_rule.template_kinds.empty() &&
                    !material_rule.target.empty())
                world_site_type_aliases_.insert_or_assign(lower(normalize_utterance(
                    std::string_view(material_rule.source).substr(world_site_type_scope.size()))),
                    material_rule.target);
            continue;
        }
        // Native semantic producers already supply typed template fields.
        // Their exact-key renderer also needs shared UI templates such as
        // b. {d}/d. {d}; keep each rule's original matcher scope unchanged.
        if (material_rule.legends_event_title)
            history_event_title_templates_.insert_or_assign(material_rule.source,
                static_cast<int>(rule_index));
        else if (material_rule.legends_prose || material_rule.source == ".")
            history_semantic_templates_.insert_or_assign(material_rule.source,
                static_cast<int>(rule_index));
        else if (material_rule.numeric_template || material_rule.string_template)
            history_semantic_templates_.try_emplace(material_rule.source,
                static_cast<int>(rule_index));
        constexpr std::string_view item_action_scope = "Adventure item action: ";
        if (material_rule.source.starts_with(item_action_scope)) {
            Rule action;
            action.source = material_rule.source.substr(item_action_scope.size());
            action.target = material_rule.target;
            split_template(action.source, &action.template_literals, &action.template_kinds, true);
            action.string_template = !action.template_kinds.empty();
            if (!action.target.empty() && compile_template_target(action)) {
                const auto specificity = [](const Rule &entry) {
                    return entry.source.size() - 3 * entry.template_kinds.size();
                };
                const auto at = std::find_if(adventure_item_action_rules_.begin(),
                    adventure_item_action_rules_.end(), [&](const Rule &entry) {
                        return specificity(entry) < specificity(action);
                    });
                adventure_item_action_rules_.insert(at, std::move(action));
            }
            continue;
        }
        // These source forms belong to the adventure spoor formatter. Keep
        // its print/imprint slots out of generic prose and word matching.
        static constexpr std::array<std::string_view, 6> track_sources = {{
            "Track/Spoor: {s}", "{s} imprint", "{s} print", "unintelligible",
            "broken vegetation", "yours or companion's",
        }};
        if (std::find(track_sources.begin(), track_sources.end(), material_rule.source) !=
                track_sources.end()) {
            map_track_translations_.insert_or_assign(material_rule.source, material_rule.target);
            continue;
        }
        if (material_rule.tooltip_prose) {
            if (material_rule.target.empty()) continue;
            if (material_rule.string_template || material_rule.numeric_template) {
                toolbar_template_rules_.push_back(static_cast<int>(rule_index));
                continue;
            }
            std::string identity;
            for (unsigned char ch : material_rule.source)
                if (!std::isspace(ch)) identity.push_back(ch);
            toolbar_translations_.insert_or_assign(identity, material_rule.target);
            toolbar_source_rules_[material_rule.source.substr(0,
                material_rule.source.find(' '))].push_back(static_cast<int>(rule_index));
            continue;
        }
        if (material_rule.help_prose || material_rule.ui_message) {
            if (material_rule.target.empty()) continue;
            if (material_rule.help_objective)
                help_objective_rules_.push_back(static_cast<int>(rule_index));
            if (material_rule.string_template || material_rule.numeric_template) {
                auto &templates = material_rule.ui_message ? ui_message_template_rules_ : help_template_rules_;
                templates.push_back(static_cast<int>(rule_index));
                if (material_rule.ui_message) {
                    // Split native records use a fixed subset of this catalog.
                    // Build it with the dictionary instead of scanning every
                    // message template in each raw and composed frame pass.
                    if (material_rule.template_kinds.size() == 1 &&
                            material_rule.template_kinds.front() == 'n' &&
                            material_rule.template_literals.size() == 2) {
                        const auto prefix = trim_view(material_rule.template_literals.front());
                        const auto &suffix = material_rule.template_literals.back();
                        if (!prefix.empty() && suffix.size() == 1 &&
                                (suffix.front() == '.' || suffix.front() == '!' || suffix.front() == '?'))
                            ui_message_split_prefixes_[std::string(prefix)].push_back(
                                static_cast<int>(rule_index));
                    }
                    // Catalog probes depend only on the loaded rule, so raw
                    // glyph suppression and final rendering share them.
                    MessageTemplateProbe probe{static_cast<int>(rule_index),
                        compact_ui_message_literal(material_rule.template_literals.front()),
                        compact_ui_message_literal(material_rule.template_literals.back()), {}};
                    for (const auto &literal : material_rule.template_literals) {
                        auto compact = compact_ui_message_literal(literal);
                        probe.literal_bytes += compact.size();
                        if (compact.size() > probe.anchor.size()) probe.anchor = std::move(compact);
                    }
                    ui_message_anchors_.add(probe.anchor,
                        static_cast<int>(ui_message_template_probes_.size()));
                    ui_message_template_probes_.push_back(std::move(probe));
                }
                continue;
            }
            // P without h is shared complete prose: RAW species introductions
            // use the paragraph matcher on screen and this same literal for
            // typed exact lookup. Never put them back in the row-local trie.
            if (material_rule.ui_message && !material_rule.legends_prose)
                index_capture_literal(material_rule);
            auto &prose_trie = material_rule.ui_message ? ui_message_trie_ : help_trie_;
            int node = 0;
            for (unsigned char ch : material_rule.source) {
                if (native_prose_space(ch)) continue;
                auto found = prose_trie[node].next.find(ch);
                if (found == prose_trie[node].next.end()) {
                    const int next = static_cast<int>(prose_trie.size());
                    prose_trie[node].next.emplace(ch, next);
                    prose_trie.emplace_back();
                    node = next;
                } else node = found->second;
            }
            prose_trie[node].rule = static_cast<int>(rule_index);
            continue;
        }
        const auto introduction = std::find(embark_introduction_templates.begin(),
            embark_introduction_templates.end(), material_rule.source);
        if (introduction != embark_introduction_templates.end() && material_rule.string_template) {
            embark_introduction_rules_[static_cast<size_t>(
                introduction - embark_introduction_templates.begin())] = static_cast<int>(rule_index);
            // Typed document captures must not be expanded as generic words.
            continue;
        }
        // Complete item sentences and their noun phrases have separate
        // typed captures. They must never become global word replacements
        // or generic Legends templates with different capture semantics.
        if (material_rule.item_description_sentence || material_rule.item_description_term ||
            material_rule.item_description_predicate) {
            auto &index = material_rule.item_description_sentence
                ? item_description_sentence_rules_ : material_rule.item_description_predicate
                    ? item_description_predicate_rules_ : item_description_term_rules_;
            index.push_back(static_cast<int>(rule_index));
            continue;
        }
        // The image's {s} is an element list, not an ordinary literal capture.
        // Only the complete symbol-description parser may claim this rule.
        if (material_rule.source == "It is an image of {s}." &&
            material_rule.string_template) {
            symbol_image_template_rule_ = static_cast<int>(rule_index);
            continue;
        }
        if (material_rule.source.starts_with("X is ") ||
            material_rule.source.starts_with("X looks "))
            symbol_action_rules_.push_back(static_cast<int>(rule_index));
        if (material_rule.string_template) {
            if (material_rule.source == "Choose X: {s}")
                symbol_role_prompt_rules_[0] = static_cast<int>(rule_index);
            else if (material_rule.source == "Choose Y: {s}")
                symbol_role_prompt_rules_[1] = static_cast<int>(rule_index);
        }
        if (material_rule.magical_material_noun)
            g_magical_materials[lower(material_rule.source)].noun = material_rule.target;
        if (material_rule.magical_material_qualifier) {
            g_magical_materials[lower(material_rule.source)].qualifier = material_rule.target;
            // h keeps qualifiers out of generic literal matching. M also
            // keeps them out of prose: they belong only to material slots.
            continue;
        }
        // A sphere is a typed semantic field, not a global substring rule.
        // In particular, Rain in this namespace is not the embark rainfall
        // control, and Order is not a work order. All consumers share the TSV.
        if (rules_[rule_index].deity_sphere) {
            const Rule &rule = rules_[rule_index];
            deity_sphere_translations_[lower(rule.source)] = rule.target;
            continue;
        }
        // These grammars consume COMPLETE background/hover prose only. In
        // particular, a name slot must never grab arbitrary text elsewhere.
        if (rules_[rule_index].legends_prose) {
            if (rules_[rule_index].legends_event_title) {
                const auto &rule = rules_[rule_index];
                std::string_view anchor = rule.template_kinds.empty()
                    ? std::string_view(rule.source) : std::string_view{};
                for (const auto &literal : rule.template_literals)
                    if (literal.size() > anchor.size()) anchor = literal;
                legends_event_anchors_.add(anchor, static_cast<int>(rule_index));
            }
            if (rules_[rule_index].legends_book_title)
                legends_book_rules_.push_back(static_cast<int>(rule_index));
            else if (rules_[rule_index].legends_participant_relation)
                legends_participant_rules_.push_back(static_cast<int>(rule_index));
            else if (rules_[rule_index].legends_identity)
                legends_identity_rules_.push_back(static_cast<int>(rule_index));
            else if (rules_[rule_index].legends_description_term)
                legends_description_rules_.push_back(static_cast<int>(rule_index));
            else if (rules_[rule_index].legends_continuation)
                legends_continuation_rules_.push_back(static_cast<int>(rule_index));
            else {
                legends_prose_rules_.push_back(static_cast<int>(rule_index));
                const auto &rule = rules_[rule_index];
                legends_anchor_rules_[lower(rule.template_kinds.empty()
                    ? rule.source : rule.legends_match_anchor)].push_back(static_cast<int>(rule_index));
                if (rule.template_kinds.empty()) {
                    auto &terms = rule.case_insensitive ? legends_terms_ci_ : legends_terms_;
                    const auto key = rule.case_insensitive ? lower(rule.source) : rule.source;
                    if (rule.legends_event_title) terms.try_emplace(key, rule.target);
                    else terms.insert_or_assign(key, rule.target);
                }
            }
            continue;
        }
        if (rules_[rule_index].adventure_prose) {
            adventure_prose_rules_.push_back(static_cast<int>(rule_index));
            continue;
        }
        if (rules_[rule_index].numeric_template || rules_[rule_index].string_template) {
            template_rules_.push_back(static_cast<int>(rule_index));
            index_template_rule(static_cast<int>(rule_index));
            continue;
        }
        if (!rules_[rule_index].target.empty()) {
            const Rule &rule = rules_[rule_index];
            constexpr std::string_view overview_sentence_prefix = "Overview sentence: ";
            if (rule.source.starts_with(overview_sentence_prefix)) {
                // Complete event/reaction sentences are lookup-only metadata,
                // not global words or independently drawn pieces of a quote.
                overview_sentence_translations_.try_emplace(
                    normalize_utterance(std::string_view(rule.source).substr(
                        overview_sentence_prefix.size())), rule.target);
                continue;
            }
            if (rule.source.size() >= 3 && rule.source.front() == '"' &&
                rule.source.back() == '"') {
                overview_quote_translations_.try_emplace(
                    normalize_utterance(rule.source), rule.target);
            }
            index_capture_literal(rule);
        }
        // Scoped caption aliases are lookup-only metadata. The visible source
        // retains its ordinary meaning until its native widget owns it.
        if (rules_[rule_index].source.starts_with("Preference reason: ") ||
            rules_[rule_index].source.starts_with("Build menu: ") ||
            rules_[rule_index].source.starts_with("Embark finder: ") ||
            rules_[rule_index].source.starts_with("Zone type: ") ||
            rules_[rule_index].source.starts_with("Fortress activity: ") ||
            rules_[rule_index].source.starts_with("Fortress schedule editor: ") ||
            rules_[rule_index].source.starts_with("Squad creation: ") ||
            rules_[rule_index].source.starts_with("Uniform name: ") ||
            rules_[rule_index].source.starts_with("Workshop recipe: ") ||
            rules_[rule_index].source.starts_with("Adventure compass: ") ||
            rules_[rule_index].source.starts_with("Adventure movement: ") ||
            rules_[rule_index].source.starts_with("Adventure action: ") ||
            rules_[rule_index].source.starts_with("Adventure crafting ") ||
            rules_[rule_index].source.starts_with("Inventory location: ") ||
            rules_[rule_index].source.starts_with("Skill name: ") ||
            rules_[rule_index].source.starts_with("Skill rating: ") ||
            rules_[rule_index].source.starts_with("Skill status: ") ||
            rules_[rule_index].source.starts_with("Character overview: ")) continue;
        // These labels are also keyboard identifiers. Retain their reviewed
        // translations for the background editor's Home tab, Delete actions
        // and worldgen's Pause button, without globally replacing key names.
        if (rules_[rule_index].source == "Home" ||
            rules_[rule_index].source == "Delete" ||
            rules_[rule_index].source == "Pause") continue;
        std::vector<TrieNode> &trie = rules_[rule_index].case_insensitive ? trie_ci_ : trie_;
        int node = 0;
        for (unsigned char raw_ch : rules_[rule_index].source) {
            const unsigned char ch = rules_[rule_index].case_insensitive && raw_ch >= 'A' && raw_ch <= 'Z'
                                         ? static_cast<unsigned char>(raw_ch - 'A' + 'a')
                                         : raw_ch;
            const auto existing = trie[node].next.find(ch);
            int next_node = -1;
            if (existing == trie[node].next.end()) {
                next_node = static_cast<int>(trie.size());
                trie[node].next.emplace(ch, next_node);
                trie.emplace_back();
            } else {
                next_node = existing->second;
            }
            node = next_node;
        }
        if (trie[node].rule >= 0) {
            log_line("WARN", "Duplicate source rule; later line wins: " +
                                 std::to_string(rules_[rule_index].line));
        }
        trie[node].rule = static_cast<int>(rule_index);
    }
    // Native item fields establish color/dye/craft meanings before ordinary
    // nouns. Equal-shaped productions such as "The thread is {v}." and its
    // compound-phrase fallback must not depend on TSV alphabetic ordering.
    for (auto *indices : {&item_description_sentence_rules_,
            &item_description_term_rules_, &item_description_predicate_rules_}) {
        std::stable_partition(indices->begin(), indices->end(), [this](int index) {
            const auto &kinds = rules_[static_cast<size_t>(index)].template_kinds;
            return std::any_of(kinds.begin(), kinds.end(), [](char kind) {
                return kind == 'v' || kind == 'j' || kind == 'o';
            });
        });
    }
    // A depicted subject list belongs inside its image noun. Length ordering
    // alone lets "{s} and {s}" split "image of humans and humans" into an
    // image plus unrelated humans. Try complete noun productions first and
    // keep coordination as their fallback, also inside quality wrappers.
    std::stable_partition(item_description_term_rules_.begin(),
        item_description_term_rules_.end(), [this](int index) {
            const auto &source = rules_[static_cast<size_t>(index)].source;
            return source != "{s} and {s}" && source != "{s}, and {s}" &&
                   source != "{s}, {s}";
        });
    for (auto it = g_magical_materials.begin(); it != g_magical_materials.end();) {
        // Explicit ordinary dictionary overrides can replace a generated
        // noun row without its metadata flag; keep that reviewed override.
        if (it->second.noun.empty()) {
            if (const auto noun = exact_literal_translation(it->first))
                it->second.noun = *noun;
        }
        if (it->second.noun.empty() || it->second.qualifier.empty()) {
            log_line("WARN", "Incomplete magical material roles: " + it->first);
            it = g_magical_materials.erase(it);
            continue;
        }
        g_magical_material_max_bytes = std::max(g_magical_material_max_bytes, it->first.size());
        g_magical_material_qualifiers.insert(it->second.qualifier);
        ++it;
    }
    log_line("INFO", "Loaded " + std::to_string(g_magical_materials.size()) +
        " magical material noun/qualifier pairs");
    load_dfhack_help_catalog(catalog_publication);
}
