// A submitted record is the translation unit. Dictionary reload invalidates
// this cache; layout and colors remain shared with all bounded paragraphs.
static std::optional<std::string> translate_dfhack_siren_announcement(std::string_view source);
// Arrange may run repeatedly before a report is rendered. Only measure a
// complete translation already published by rendering; a cache miss keeps
// the native wrapped height and must not enter the translator or refresh
// its semantic context. Dates retain their native wrapped height.
int Overlay::native_report_layout_rows(std::string_view source, int width,
        bool date) const {
    TranslationStateScope translation_scope;
    if (!config_.enabled || date || source.empty() || width <= 0 ||
            announcement_translation_cache_.empty()) return 0;
    const std::string display_source = native_announcement_display_source(source);
    const std::string key = std::to_string(native_identity_translation_context()) +
        '\x1f' + display_source;
    const auto found = announcement_translation_cache_.find(key);
    if (found == announcement_translation_cache_.end() ||
            found->second.result.resource_revision != RULESETS.resource_revision() ||
            !found->second.target || found->second.target->empty()) return 0;
    std::vector<std::string> lines;
    std::vector<std::vector<int>> line_colors;
    int font_pixels = 0;
    if (!measure_paragraph_layout(*found->second.target, width, {}, {}, lines,
            line_colors, font_pixels) || lines.size() > INT32_MAX) return 0;
    return static_cast<int>(lines.size());
}

std::optional<std::string> Overlay::translate_native_announcement_log_record(
        const NativeAnnouncementLogDocument &document, std::string_view source, int foreground,
        std::vector<int> &target_colors) const {
    TranslationStateScope translation_scope;
    target_colors.clear();
    if (source.empty()) return std::nullopt;
    const auto &report = document.report;
    const NativeAnnouncementLogTranslationScope owner_scope(report, document.world);
    const NativeAnnouncementLogDocumentScope document_scope(document);
    struct SemanticEntry {
        std::optional<std::string> target;
        std::vector<int> colors;
        size_t bytes = 0;
        std::list<std::string>::iterator use;
    };
    struct SemanticCache {
        const Overlay *owner = nullptr;
        std::string generation;
        std::unordered_map<std::string, SemanticEntry> entries;
        std::list<std::string> order;
        size_t bytes = 0;
    };
    // Native report identity and its frozen fields own the prose. Neither
    // native wrap allocation nor another layer's identity context is a new
    // record. The palette remains relevant to catalogue color productions.
    static const unsigned char semantic_cache_tag = 0;
    auto &cache = domain_cache<SemanticCache>(&semantic_cache_tag);
    bool cache_enabled = document.world != 0;
    std::string key;
    const auto semantic_key = [&] {
        std::string result = native_announcement_log_document_key(document);
        result.append(reinterpret_cast<const char *>(&foreground), sizeof(foreground));
        return result;
    };
    try {
        std::string generation;
        const auto value = [&](const auto &input) {
            generation.append(reinterpret_cast<const char *>(&input), sizeof(input));
        };
        value(document.world); value(native_announcement_log_semantic_generation_value());
        const auto resources = RULESETS.resource_revision();
        const auto catalog = native_identity_translation_catalog_generation();
        value(resources); value(catalog);
        value(config_.native_language_original);
        generation.append(config_.language);
        if (cache.owner != this || cache.generation != generation) {
            cache.entries.clear(); cache.order.clear(); cache.bytes = 0;
            cache.owner = this; cache.generation = std::move(generation);
        }
        if (cache_enabled) {
            key = semantic_key();
            const auto identity = g_native_announcement_log_identity_context ^
                native_identity_source_fingerprint(cache.generation, std::nullopt) ^
                native_identity_source_fingerprint(key, std::nullopt);
            g_native_announcement_log_identity_context = identity ? identity : 1;
            if (const auto found = cache.entries.find(key); found != cache.entries.end()) {
                cache.order.splice(cache.order.end(), cache.order, found->second.use);
                target_colors = found->second.colors;
                return found->second.target;
            }
        }
    } catch (const std::bad_alloc &) { cache_enabled = false; }
    dfcn::TranslationWorkScope work;
    auto target = compose_native_announcement_log_record(document, source,
        foreground, target_colors);
    // Older text-only reports have no complete native field snapshot. Keep
    // their existing complete translation coverage while captured productions
    // compose directly, and retain that result under the same report ID.
    if (!target) target = translate_complete_announcement(source,
        std::vector<int>(source.size(), foreground), target_colors, false, report.type);
    translation_work_step(0);
    if (cache_enabled && !work.exhausted()) try {
        SemanticEntry entry{target, target_colors};
        entry.bytes = sizeof(SemanticEntry) + 2 * key.capacity() +
            sizeof(std::string) + 5 * sizeof(void *) +
            (entry.target ? entry.target->capacity() : 0) +
            entry.colors.capacity() * sizeof(int);
        constexpr size_t maximum_entries = 32768, maximum_bytes = 64 * 1024 * 1024;
        if (entry.bytes <= maximum_bytes) {
            if (const auto previous = cache.entries.find(key); previous != cache.entries.end()) {
                cache.bytes -= previous->second.bytes;
                cache.order.erase(previous->second.use); cache.entries.erase(previous);
            }
            while (!cache.order.empty() && (cache.entries.size() >= maximum_entries ||
                    cache.bytes > maximum_bytes - entry.bytes)) {
                const auto oldest = cache.entries.find(cache.order.front());
                cache.bytes -= oldest->second.bytes; cache.entries.erase(oldest);
                cache.order.pop_front();
            }
            cache.order.push_back(key);
            entry.use = std::prev(cache.order.end());
            const auto bytes = entry.bytes;
            try { cache.entries.emplace(key, std::move(entry)); }
            catch (...) { cache.order.pop_back(); throw; }
            cache.bytes += bytes;
        }
    } catch (const std::bad_alloc &) { /* The complete current result still draws. */ }
    return target;
}

std::optional<std::string> Overlay::translate_complete_announcement(
        std::string_view source, const std::vector<int> &source_colors,
        std::vector<int> &target_colors, bool barter_reply, int native_type,
        dfcn::TranslationResult *owned_result) const {
    if (owned_result) *owned_result = {};
    refresh_native_display_translation_context();
    // A stored reveal report no longer owns this frame's temporary formatter
    // strings. Recover its two proven unit fields before choosing a cache key.
    prepare_native_announcement_unit_identities(source);
    dfcn::translation_work_step();
    // Resolve native relationship fields before consulting the text cache.
    // Two people called "cousin" can have different proven family paths.
    // Re-enter with their private typed keys so both cache identity and
    // grammar leaves retain the actual report's memory-derived captions.
    std::vector<size_t> kinship_origins;
    if (const auto native = native_announcement_kinship_source(source, &kinship_origins);
            native && *native != source && kinship_origins.size() == native->size() &&
            source_colors.size() == source.size() && !source.empty()) {
        std::vector<int> native_colors;
        native_colors.reserve(native->size());
        for (const size_t origin : kinship_origins)
            native_colors.push_back(source_colors[std::min(origin, source.size() - 1)]);
        return translate_complete_announcement(*native, native_colors, target_colors,
            barter_reply, native_type, owned_result);
    }
    const auto context = native_identity_translation_context();
    const std::string key = std::to_string(context) + '\x1f' +
        (native_type >= 0 ? "\x1e" + std::to_string(native_type) + '\x1f' : std::string{}) +
        std::string(source);
    if (const auto found = announcement_translation_cache_.find(key);
            !g_native_announcement_log_translation_report &&
            found != announcement_translation_cache_.end() &&
            found->second.result.resource_revision == RULESETS.resource_revision() &&
            (!barter_reply || found->second.result.owner == "native-adventure-barter-record") &&
            found->second.source_colors == source_colors) {
        announcement_translation_order_.splice(announcement_translation_order_.end(),
            announcement_translation_order_, found->second.use);
        target_colors = found->second.target_colors;
        if (owned_result) *owned_result = found->second.result;
        return found->second.target;
    }
    struct CompleteLogEntry {
        std::optional<std::string> target;
        std::vector<int> colors;
        dfcn::TranslationResult result;
    };
    struct CompleteLogMemo {
        std::unordered_map<std::string, CompleteLogEntry> entries;
        size_t bytes = 0;
    };
    std::shared_ptr<CompleteLogMemo> log_memo;
    std::string log_key;
    const size_t log_cycle = dfcn::active_translation_work
        ? dfcn::active_translation_work->cycle_revision : 0;
    if (g_native_announcement_log_translation_report && dfcn::active_translation_work) {
        static const unsigned char complete_log_tag = 0;
        auto &slot = dfcn::active_translation_work->parser_sessions[&complete_log_tag];
        if (!slot) slot = std::make_shared<CompleteLogMemo>();
        log_memo = std::static_pointer_cast<CompleteLogMemo>(slot);
        log_key = key;
        log_key.push_back(barter_reply ? '\1' : '\0');
        if (!source_colors.empty()) log_key.append(
            reinterpret_cast<const char *>(source_colors.data()), source_colors.size() * sizeof(int));
        if (const auto found = log_memo->entries.find(log_key); found != log_memo->entries.end()) {
            target_colors = found->second.colors;
            if (owned_result) *owned_result = found->second.result;
            return found->second.target;
        }
    }
    target_colors.clear();
    if (source.empty() || source_colors.size() != source.size()) return std::nullopt;
    dfcn::TranslationWorkScope budget;
    // A frozen announcement kind selects its semantic owner just as a
    // Legends event kind does. Combat retains that owner through display
    // fallback; an unresolved combat field is not a different prose kind.
    // IDs are announcement_type in df.g_src.basics.xml.
    const bool combat_record = (native_type >= 6 && native_type <= 48) ||
        native_type == 166 || native_type == 167;
    const bool completed_job_record = native_type == 270;
    // SOMEBODY_GROWS_UP owns its name and post-growth unit label. Text-only
    // callers retain the same existing growth-constructor boundary. A CJK
    // nickname must not let the rumor rule "{person} has {book}." claim the
    // complete predicate as an authored book title before growth is tried.
    const bool growth_record = native_type == 278 ||
        (native_type < 0 && source.find(" has grown to become a ") != std::string_view::npos &&
            source.ends_with('.'));
    const bool owned_scope_record = combat_record || growth_record;
    std::string_view native_scope;
    if (combat_record) native_scope = "sentence";
    else if (native_type == 301)
        native_scope = "fortress-arrival";
    else if (native_type == 86 || native_type == 104 || growth_record)
        native_scope = "fortress-announcement";
    else if (native_type == 233 || native_type == 234 || native_type == 258)
        native_scope = "read-announcement";
    else if (native_type >= 0)
        native_scope = "adventure-announcement";
    const auto translate_block = [&](std::string_view block, const std::vector<int> &colors,
            std::vector<int> &translated_colors) -> std::optional<std::string> {
        translated_colors.clear();
        // COMBAT_* is the native producer, not a hint for a prose fallback.
        // e56a0 (classic e5630) owns the attack verb, target, equipment and
        // every damage continuation. An unresolved field must stay in that
        // tree; a name/item grammar must never reinterpret strike as a name.
        // Growth likewise keeps its complete typed constructor, including
        // literal custom names inside the result's translated state wrapper.
        if (owned_scope_record) {
            auto native = translate_announcement_combat(block, native_scope);
            if (native) for (unsigned char ch : *native)
                if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
            return native;
        }
        // A reviewed complete message owns its entire native record before
        // recursive grammar or display composition can split it into fields.
        // Probe only literal catalogue rules here, retaining the shared
        // catalogue's whitespace normalization and source palette handling.
        auto translated = translate_help_paragraph(block, colors, translated_colors,
            true, -1, true);
        if (translated) return translated;
        if (completed_job_record) {
            // JOB_COMPLETED (1325080 / classic 131fff0) owns a complete job
            // caption followed by its numeric order count. Bind that outer
            // production before generic rumor/item grammar can interpret the
            // count as a book description and request unrelated world data.
            // An unresolved job stays in this native production, including
            // when the catalogue still uses the older string-count slot.
            for (const std::string_view pattern : {
                    "{s} ({d}) has been completed.",
                    "{s} ({s}) has been completed."}) {
                const auto found = ui_message_template_sources_.find(pattern);
                if (found == ui_message_template_sources_.end() || found->second < 0 ||
                        static_cast<size_t>(found->second) >= rules_.size()) continue;
                translated = translate_help_paragraph(block, colors,
                    translated_colors, true, found->second);
                if (translated) return translated;
            }
            return std::nullopt;
        }
        if (!colors.empty() && std::all_of(colors.begin(), colors.end(),
                [&](int color) { return color == colors.front(); })) {
            if (const auto siren = translate_dfhack_siren_announcement(block)) {
                // showAnnouncement writes the original report and game log.
                // Only this displayed complete record receives the fixed
                // siren prose; its captured burrow names remain opaque.
                for (unsigned char ch : *siren)
                    if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
                return siren;
            }
        }
        if (const auto original = native_original_speech_source(block)) {
            const std::vector<int> original_colors(original->size(), colors.front());
            auto translated = translate_complete_announcement(*original, original_colors,
                translated_colors, false, native_type);
            const auto voice = exact_literal_translation("Announcement speech: lisp");
            if (!translated || !voice) return std::nullopt;
            *translated += *voice;
            for (unsigned char ch : *voice)
                if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
            return translated;
        }
        // 103a1d0 owns both speaker and optional addressee, including unnamed
        // appearance/caste/occupation captions. Resolve the complete spoken
        // body before generic catalogue templates can treat its elapsed-time
        // prefix or the addressee's occupation as a generated personal name.
        if (const auto speech = translate_announcement_dialogue(block, native_type)) {
            for (unsigned char ch : *speech)
                if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
            return speech;
        }
        // ad0710 submits this complete actor/item production. Its reviewed
        // whole-message matcher owns both typed fields and their colors;
        // do not send every crafted item through unrelated announcement,
        // combat and memory grammars before reaching that existing owner.
        const auto compact = compact_ui_message_literal(block);
        if (compact.find("hascreatedamasterpiece") != std::string::npos) {
            for (int probe : ui_message_anchors_.candidates(compact)) {
                const int index = ui_message_template_probes_[probe].index;
                if (rules_[static_cast<size_t>(index)].source !=
                        "{n} has created a masterpiece {i}!") continue;
                translated = translate_help_paragraph(block, colors,
                    translated_colors, true, index);
                if (translated) return translated;
            }
        }
        // The speech wrapper owns its colon and entire body before the
        // adventure opinion grammar. Otherwise its incident rule can consume
        // "You: <elapsed time> I" as a unit and swallow the following reaction
        // into the other participant, producing a partly translated record.
        // Other native constructors still precede the generic prose catalogue.
        if (!native_scope.empty())
            if (const auto native = translate_announcement_combat(block, native_scope)) {
                for (unsigned char ch : *native)
                    if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
                return native;
            }
        // Text-only map/card callers may have no report type. Resolve a
        // complete combat production before open historical/name fields can
        // claim its actor and dynamic RAW attack verb as one personal name.
        if (const auto combat = translate_announcement_combat(block, "sentence")) {
            for (unsigned char ch : *combat)
                if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
            return combat;
        }
        for (const std::string_view scope : {
                "read-announcement", "adventure-announcement", "fortress-attack", "fortress-arrival", "fortress-announcement", "fortress-embark", "historical-event-paragraph"}) {
            if (scope == native_scope) continue;
            // The attack producer joins commander, warning and reinforcement
            // paragraphs with native [B] controls. Match their visible whole
            // record, using the same control normalization as report capture.
            const std::string attack_source = scope == "fortress-attack" || scope == "fortress-embark"
                ? native_announcement_display_source(block) : std::string{};
            if (const auto native = translate_announcement_combat(
                    scope == "fortress-attack" ? std::string_view(attack_source) : block, scope)) {
                for (unsigned char ch : *native)
                    if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
                return native;
            }
        }
        // The native growth constructor has a single typed result field.
        // An unresolved caste/name must retain its whole report, never enter
        // the unrelated rumor production "{person} has {book}.".
        if (block.find(" has grown to become a ") != std::string_view::npos &&
                block.ends_with('.')) return std::nullopt;
        // Spoken memories share the overview's authored wording. Resolve a
        // complete memory chain before generic paragraph literals, which can
        // contain older versions of the same reactions. The quote resolver
        // preserves each clause's source color and admits only complete,
        // typed memory sentences (including dynamic event fields).
        std::vector<size_t> memory_origins;
        if (const auto memory = translate_overview_quote(
                "\"" + std::string(block) + "\"", &memory_origins);
                memory && memory->starts_with("“") && memory->ends_with("”")) {
            const auto body = std::string_view(*memory).substr(3, memory->size() - 6);
            for (size_t at = 0; at < body.size(); ++at) {
                if ((static_cast<unsigned char>(body[at]) & 0xc0) == 0x80) continue;
                const size_t origin = memory_origins[at + 3];
                translated_colors.push_back(colors[std::min(
                    origin ? origin - 1 : 0, colors.size() - 1)]);
            }
            return std::string(body);
        }
        // ELF 53.16 1882b38/1882bc0 builds spoken memories with the SAME
        // event and emotion formatters (101b7f0, 10283d0) as the overview.
        // Share complete authored sentences, including intensity/negation;
        // the full-record partitioner below composes their independent parts.
        if (const auto found = overview_sentence_translations_.find(normalize_utterance(block));
                found != overview_sentence_translations_.end()) {
            for (unsigned char ch : found->second)
                if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
            return found->second;
        }
        // 103a1d0 also submits BODY alone when neither live unit nor
        // historical figure supplies a speaker caption. Keep the same
        // complete speech grammar for that native empty-header branch.
        translated = translate_spoken_dialogue_body(block);
        if (!translated) {
            // The conversation dispatcher and dialogue-1048a40 submit the
            // same complete mental-picture statement as the visitor quote.
            // Its six actions, time flags, 170-slot emotion switch and empty
            // defaults belong here too, before display-only partial rules.
            // Reuse the whole typed production for each native sentence;
            // no speaker name or individual emotion is a special case.
            translated = translate_announcement_combat(block, "visitor-statement");
        }
        if (translated) {
            // Combat and speech builders emit one native announcement color.
            for (unsigned char ch : *translated)
                if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
        } else {
            // Combat owns its complete verb, unit and anatomy fields before
            // the help catalogue can compose shorter unrelated fragments.
            // Adventure introductions and their optional vault paragraphs
            // still use the reviewed complete help productions and palettes.
            translated = translate_help_paragraph(block, colors, translated_colors);
            if (!translated)
                translated = translate_help_paragraph(block, colors, translated_colors, true);
        }
        if (!translated) {
            // Reading and news can submit a complete existing item, work or
            // historical-event description without an announcement prefix.
            // Unlinked Legends prose requires every source span and typed
            // field to resolve, and never treats unknown prose as a name.
            translated = translate_legends_text(block, false, false);
            if (translated) {
                translated_colors.clear();
                for (unsigned char ch : *translated)
                    if ((ch & 0xc0) != 0x80) translated_colors.push_back(colors.front());
            }
        }
        return translated;
    };
    dfcn::TranslationResult document_result;
    bool work_limited = false;
    std::optional<std::string> target;
    try {
        // The native Show reply owns the complete speaker and the artifact
        // report's sentence chain. Resolve those production fields before
        // broad announcement/name alternatives can consume a longer span.
        if (barter_reply) {
            document_result = translate_adventure_barter_artifact_report_result(source);
            if (document_result.usable()) {
                target = document_result.target;
                for (unsigned char ch : *target)
                    if ((ch & 0xc0) != 0x80) target_colors.push_back(source_colors.front());
            }
        }
        if (!target) target = translate_block(source, source_colors, target_colors);
    }
    catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        work_limited = true;
    }
    if (!target && !work_limited && !completed_job_record && !growth_record) {
        // One submitted record may combine an attack, a status change, and a
        // spoken reaction. Candidate sentence boundaries do not imply a valid
        // split: both sides must resolve completely. Full-paragraph rules get
        // first choice, retaining names and titles with embedded punctuation.
        std::vector<size_t> starts{0};
        for (size_t at = 1; at < source.size(); ++at) {
            if (!std::isspace(static_cast<unsigned char>(source[at]))) continue;
            // Threat descriptions append a separate speaker action ending
            // in "composure.]" before the next spoken sentence. The closing
            // bracket belongs to that complete action; its internal period
            // still supplies a candidate boundary. Both spans must resolve
            // below, so punctuation inside a name cannot split a record.
            size_t punctuation = at - 1;
            if (source[punctuation] == ']' && punctuation) --punctuation;
            const char preceding = source[punctuation];
            if (preceding != '.' && preceding != '!' && preceding != '?') continue;
            while (at < source.size() && std::isspace(static_cast<unsigned char>(source[at]))) ++at;
            if (at < source.size()) starts.push_back(at);
        }
        starts.push_back(source.size());
        struct CompleteSuffix {
            std::string text;
            std::vector<int> colors;
            size_t next = SIZE_MAX;
        };
        std::vector<std::optional<CompleteSuffix>> resolved(starts.size());
        resolved.back() = CompleteSuffix{};
        for (size_t part = starts.size() - 1; part-- > 0;) {
            for (size_t next = starts.size() - 1; next > part; --next) {
                if (!resolved[next] || (part == 0 && next == starts.size() - 1)) continue;
                size_t end = starts[next];
                while (end > starts[part] && std::isspace(static_cast<unsigned char>(source[end - 1]))) --end;
                if (end <= starts[part]) continue;
                std::vector<int> block_colors(source_colors.begin() + starts[part], source_colors.begin() + end);
                std::vector<int> translated_colors;
                std::optional<std::string> translated;
                try { translated = translate_block(source.substr(starts[part], end - starts[part]),
                    block_colors, translated_colors); }
                catch (const dfcn::TranslationWorkLimit &) {
                    if (!budget.owns_budget()) throw;
                    work_limited = true;
                    break;
                }
                if (!translated) continue;
                resolved[part] = CompleteSuffix{std::move(*translated),
                    std::move(translated_colors), next};
                break;
            }
            if (work_limited) break;
        }
        if (resolved.front()) {
            // Keep only the selected edge at each suffix. Materialize the
            // winning chain once, rather than copying every translated tail
            // and its complete color array for each preceding sentence.
            target.emplace();
            target_colors.clear();
            for (size_t at = 0; at + 1 < resolved.size(); at = resolved[at]->next) {
                *target += resolved[at]->text;
                target_colors.insert(target_colors.end(),
                    resolved[at]->colors.begin(), resolved[at]->colors.end());
            }
        }
    }
    const auto colors_for_result = [&](const dfcn::TranslationResult &result,
            size_t source_offset, std::vector<int> &colors) {
        colors.clear();
        for (size_t at = 0; at < result.target.size(); ++at) {
            if ((static_cast<unsigned char>(result.target[at]) & 0xc0) == 0x80) continue;
            const size_t origin = at < result.origins.size() ? result.origins[at] : std::string::npos;
            colors.push_back(source_colors[source_offset + (origin < result.source.size() ? origin : 0)]);
        }
    };
    if (!target && !work_limited && !completed_job_record) {
        // Complete native, catalogue, memory and Legends translations, plus
        // complete sentence combinations, have all had first choice. Only
        // now may a display production preserve unresolved typed fields.
        try {
        dfcn::TranslationResult best;
        std::vector<int> best_colors;
        const auto display_rank = [](const dfcn::TranslationResult &result) {
            if (result.status == dfcn::TranslationStatus::Translated ||
                    result.status == dfcn::TranslationStatus::PreservedAuthored) return 2;
            return result.status == dfcn::TranslationStatus::Partial ? 1 : 0;
        };
        std::vector<std::string_view> display_scopes;
        const auto add_display_scope = [&](std::string_view scope) {
            if (!scope.empty() && std::find(display_scopes.begin(), display_scopes.end(), scope) ==
                    display_scopes.end()) display_scopes.push_back(scope);
        };
        add_display_scope(native_scope);
        if (!owned_scope_record) for (const std::string_view scope : {
                "sentence", "adventure-announcement", "read-announcement", "fortress-arrival",
                "fortress-announcement", "historical-event-paragraph"}) add_display_scope(scope);
        for (const std::string_view scope : display_scopes) {
            const auto candidate = translate_announcement_combat_result(source, scope);
            work_limited = candidate.status == dfcn::TranslationStatus::WorkLimited;
            if (work_limited) break;
            if (!candidate.usable()) continue;
            // Equal coverage retains the earlier native owner. A complete
            // result always outranks a partial result from another owner.
            if (!best.usable() || display_rank(candidate) > display_rank(best)) {
                best = candidate;
                colors_for_result(best, 0, best_colors);
            }
            if (display_rank(best) == 2) break;
        }
        if (!owned_scope_record && !work_limited && display_rank(best) < 2) {
            std::vector<int> catalogue_colors;
            auto catalogue = translate_help_paragraph_result(source, source_colors, catalogue_colors, true);
            work_limited = catalogue.status == dfcn::TranslationStatus::WorkLimited;
            // Reviewed complete catalogue composition still wins. At the
            // same partial coverage, retain the native production's fields.
            if (catalogue.usable() && (!best.usable() || display_rank(catalogue) > display_rank(best))) {
                best = std::move(catalogue);
                best_colors = std::move(catalogue_colors);
            }
        }
        if (best.usable() && std::any_of(best.fragments.begin(), best.fragments.end(),
                [](const auto &fragment) { return fragment.status == dfcn::TranslationStatus::Translated; })) {
            document_result = std::move(best);
            target = document_result.target;
            target_colors = std::move(best_colors);
        }
        } catch (const dfcn::TranslationWorkLimit &) {
            if (!budget.owns_budget()) throw;
            work_limited = true;
            target.reset();
            target_colors.clear();
        }
    }
    if (!owned_scope_record && !completed_job_record && !target && !work_limited) {
        // A following native thought constructor proves an independent
        // reaction. Never split unknown prose merely at a period, comma,
        // quote, or a displayed wrap, and retain an unknown prefix intact.
        std::vector<size_t> starts{0};
        char quote = 0;
        int brackets = 0, parentheses = 0;
        for (size_t at = 0; at < source.size(); ++at) {
            const char ch = source[at];
            if (!quote && (ch == '"' || ch == '`')) quote = ch;
            else if ((quote == '"' && ch == '"') || (quote == '`' && (ch == '\'' || ch == '`'))) quote = 0;
            else if (!quote) {
                if (ch == '[') ++brackets;
                else if (ch == ']' && brackets) --brackets;
                if (ch == '(') ++parentheses;
                else if (ch == ')' && parentheses) --parentheses;
            }
            if (quote || brackets || parentheses || at == 0 || ch != ' ') continue;
            size_t punctuation = at - 1;
            if (source[punctuation] == ']' && punctuation) --punctuation;
            if (std::string_view(".!?").find(source[punctuation]) == std::string_view::npos) continue;
            size_t next = at;
            while (next < source.size() && source[next] == ' ') ++next;
            if (next < source.size()) {
                try {
                    if (is_character_thought_constructor_start(source.substr(next))) starts.push_back(next);
                } catch (const dfcn::TranslationWorkLimit &) {
                    if (!budget.owns_budget()) throw;
                    work_limited = true;
                    break;
                }
            }
        }
        starts.push_back(source.size());
        if (starts.size() > 2) {
            target_colors.clear();
            for (size_t part = 0; part + 1 < starts.size(); ++part) {
                const size_t begin = starts[part];
                size_t end = starts[part + 1];
                while (end > begin && source[end - 1] == ' ') --end;
                if (end == begin) continue;
                const auto block = source.substr(begin, end - begin);
                std::vector<int> colors;
                const std::vector<int> block_colors(source_colors.begin() + begin, source_colors.begin() + end);
                dfcn::TranslationResult child;
                if (!work_limited) {
                    try {
                        if (const auto complete = translate_block(block, block_colors, colors))
                            child = dfcn::TranslationResult::translated(block, *complete, "announcement-sentence");
                        else child = translate_help_paragraph_result(block, block_colors, colors, true);
                    } catch (const dfcn::TranslationWorkLimit &) {
                        if (!budget.owns_budget()) throw;
                        work_limited = true;
                    }
                }
                if (!child.usable()) {
                    child = preserve_native_translation(block, "announcement-sentence", false,
                        work_limited ? dfcn::TranslationStatus::WorkLimited : dfcn::TranslationStatus::Untranslated);
                    colors_for_result(child, begin, colors);
                }
                document_result.append(child, begin);
                target_colors.insert(target_colors.end(), colors.begin(), colors.end());
                if (end < starts[part + 1]) {
                    const auto gap = source.substr(end, starts[part + 1] - end);
                    document_result.append(dfcn::TranslationResult::translated(gap, std::string(gap),
                        "record-separator"), end);
                    target_colors.insert(target_colors.end(), source_colors.begin() + end,
                        source_colors.begin() + starts[part + 1]);
                }
            }
            if (std::any_of(document_result.fragments.begin(), document_result.fragments.end(),
                    [](const auto &fragment) { return fragment.status == dfcn::TranslationStatus::Translated &&
                        fragment.kind != "record-separator"; })) target = document_result.target;
        }
    }
    if (budget.exhausted()) {
        if (!budget.owns_budget()) dfcn::translation_work_step();
        work_limited = true;
        target.reset();
    }
    if (target && !document_result.usable())
        document_result = dfcn::TranslationResult::translated(source, *target, "announcement-record");
    if (!target) {
        document_result = preserve_native_translation(source, "announcement-record", false,
            work_limited ? dfcn::TranslationStatus::WorkLimited : dfcn::TranslationStatus::Untranslated);
        target_colors.clear();
    }
    document_result.source.assign(source);
    document_result.consumed = source.size();
    document_result.policy = dfcn::TranslationPolicy::Display;
    document_result.owner = barter_reply
        ? "native-adventure-barter-record" : "native-announcement-record";
    document_result.resource_revision = RULESETS.resource_revision();
    if (owned_result) *owned_result = document_result;
    // A proved native header and the compatibility dispatcher can ask for
    // the same complete body. Keep completed subrecords within this one
    // immutable report operation, without entering the HUD's text cache.
    if (g_native_announcement_log_translation_report) {
        if (log_memo && !budget.exhausted() &&
                dfcn::active_translation_work->cycle_revision == log_cycle &&
                context == native_identity_translation_context()) {
            const size_t bytes = 2 * log_key.size() + sizeof(CompleteLogEntry) +
                source.size() + document_result.target.size() +
                (target ? target->size() : 0) + target_colors.size() * sizeof(int) +
                document_result.origins.size() * sizeof(size_t) +
                document_result.fragments.size() * sizeof(dfcn::TranslationFragment);
            constexpr size_t maximum_bytes = 8 * 1024 * 1024;
            if (log_memo->entries.size() < 4096 && bytes <= maximum_bytes &&
                    log_memo->bytes <= maximum_bytes - bytes) {
                if (log_memo->entries.emplace(log_key,
                        CompleteLogEntry{target, target_colors, document_result}).second)
                    log_memo->bytes += bytes;
            }
        }
        return target;
    }
    // Scroll through long histories without periodically discarding every
    // visible record. Retain failures too; repeated unsupported prose must
    // not restart its complete grammar search on each frame. Coordinates
    // and viewport positions never participate in this semantic cache.
    constexpr size_t maximum_entries = 2048;
    constexpr size_t maximum_bytes = 8 * 1024 * 1024;
    AnnouncementTranslation entry{source_colors, target, target_colors};
    entry.result = std::move(document_result);
    entry.bytes = 2 * (key.size() + 1) + sizeof(AnnouncementTranslation) +
        sizeof(std::string) + 5 * sizeof(void *) +
        (entry.source_colors.capacity() + entry.target_colors.capacity()) * sizeof(int) +
        (entry.target ? entry.target->capacity() + 1 : 0) + entry.result.source.capacity() +
        entry.result.target.capacity() + entry.result.origins.capacity() * sizeof(size_t) +
        entry.result.fragments.capacity() * sizeof(dfcn::TranslationFragment);
    if (entry.bytes <= maximum_bytes && context == native_identity_translation_context()) {
        // Nested speech translation uses this cache too. Look up the current
        // entry only after parsing, rather than retaining an invalidatable
        // iterator across a recursive translation or its LRU evictions.
        if (const auto previous = announcement_translation_cache_.find(key);
                previous != announcement_translation_cache_.end()) {
            announcement_translation_bytes_ -= previous->second.bytes;
            announcement_translation_order_.erase(previous->second.use);
            announcement_translation_cache_.erase(previous);
        }
        while (!announcement_translation_order_.empty() &&
                (announcement_translation_cache_.size() >= maximum_entries ||
                 announcement_translation_bytes_ > maximum_bytes - entry.bytes)) {
            const auto oldest = announcement_translation_cache_.find(
                announcement_translation_order_.front());
            announcement_translation_bytes_ -= oldest->second.bytes;
            announcement_translation_cache_.erase(oldest);
            announcement_translation_order_.pop_front();
        }
        announcement_translation_order_.push_back(key);
        entry.use = std::prev(announcement_translation_order_.end());
        const size_t bytes = entry.bytes;
        try {
            announcement_translation_cache_.emplace(key, std::move(entry));
        } catch (...) {
            announcement_translation_order_.pop_back();
            throw;
        }
        announcement_translation_bytes_ += bytes;
    }
    return target;
}

std::optional<std::string> Overlay::translate_announcement_items(
        std::string_view source) const {
    // Catalogue {i} and native constructor $announcement-item denote the
    // same whole field. Share equipment/article precedence, written titles,
    // coordination and designation marks instead of treating it as prose.
    return translate_announcement_combat(source, "$announcement-item");
}
