// Display and search must agree on the grammar of a complete journal title.
// Native search keys and clipped p_list_name fields are not display sources.
std::optional<std::string> Overlay::translate_journal_title(std::string_view source,
        JournalSearchKind kind) const {
    if (source.empty() || source.size() > 65536) return std::nullopt;
    std::optional<std::string> target;
    switch (kind) {
    case JournalSearchKind::Event:
        target = translate_legends_event(source);
        break;
    case JournalSearchKind::Creature:
        target = translate_creature_label(source);
        break;
    case JournalSearchKind::Person:
    case JournalSearchKind::Actor:
        target = translate_legends_name(source, true);
        if (!target) target = translate_procedural_fragment(std::string(source));
        break;
    case JournalSearchKind::Artifact:
        // Artifact headings can be paired native/gloss identities or book
        // titles; neither is a personal name, even when it contains one.
        target = translate_legends_artifact_identity(source);
        if (!target) target = translate_legends_book(source);
        if (!target) target = translate_legends_name(source, false);
        break;
    case JournalSearchKind::Site:
        return translate_legends_place(source);
    case JournalSearchKind::Civilization:
        target = translate_civilization_reference(source);
        if (!target) target = translate_procedural_fragment(std::string(source), false,
            false, {}, ProceduralFragmentContext::civilization_name);
        if (!target) target = translate_legends_name(source, false);
        break;
    case JournalSearchKind::Group:
        target = translate_civilization_reference(source);
        if (!target) target = translate_legends_name(source, false);
        if (!target) target = translate_procedural_fragment(std::string(source));
        break;
    case JournalSearchKind::Region:
        target = translate_world_region_heading(source);
        if (!target) target = translate_legends_name(source, false);
        break;
    case JournalSearchKind::Organization:
    case JournalSearchKind::PlotOrganization:
        // The native intrigue organization constructor obtains this label
        // from its principal HF, or the first identity's language_name.
        // Both branches are personal names; no historical_entity formatter
        // supplies this field. Resolve its two fixed missing-name statuses
        // before the personal identity grammar can preserve them as names.
        target = exact_literal_translation("Justice actor: " + std::string(source));
        if (!target) target = native_unit_identity_source_target(source);
        if (!target) target = translate_unit_identity(source, true);
        if (!target) target = translate_legends_name(source, true);
        break;
    case JournalSearchKind::Agreement:
        target = translate_announcement_combat(source, "agreement-title");
        if (!target) target = translate_legends_event(source);
        if (!target) target = translate_legends_text(std::string(source), false, false);
        break;
    case JournalSearchKind::Plot:
        // Justice and Adventure reuse the same native plot catalog builder.
        // Its finite subject switch differs from a historical agreement:
        // missing IDs retain bare predicates, attempted schemes use "in",
        // and default records keep "A plot" without an agreement date.
        target = translate_justice_plot_text(source);
        if (!target) target = translate_announcement_combat(source, "justice-plot");
        return target;
    }
    if (!target) target = exact_literal_translation(source);
    if (!target) target = translate_compositional(std::string(source));
    return target;
}

bool Overlay::translated_journal_search_matches(std::string_view source,
        std::string_view query, JournalSearchKind kind,
        const NativeJusticePlotCaption *native_plot) const {
    TranslationStateScope translation_scope;
    if (!config_.enabled || source.empty() || source.size() > 65536 || query.size() > 4096)
        return false;
    if (translated_search_query(query).literal.empty()) return false;
    const auto matches = [&](std::string_view text) {
        return translated_search_text_matches(text, query);
    };
    if (matches(native_text_to_utf8(source))) return true;
    if (native_plot) {
        // A plot search borrows the same complete typed caption as its row.
        // Its organization string may have been shortened before this native
        // filter runs, while its principal's full identity remains available.
        std::optional<std::string> target;
        if (kind == JournalSearchKind::Plot &&
                native_plot->field == NativeJusticePlotField::Title)
            target = translate_justice_plot_text(source, native_plot->sabotage_person);
        else if (kind == JournalSearchKind::PlotOrganization &&
                native_plot->field == NativeJusticePlotField::OrganizationName)
            target = native_plot->person_target;
        if (!target) target = translate_journal_title(source, kind);
        return target && matches(*target);
    }
    if (kind == JournalSearchKind::Site)
        for (const auto &alias : site_reference_search_aliases(source))
            if (matches(alias)) return true;
    // Resolve names whose parent can change through their live entity/site
    // renderer. Other complete titles reuse their shared grammar result.
    const bool live_reference = kind == JournalSearchKind::Site ||
        kind == JournalSearchKind::Civilization || kind == JournalSearchKind::Group;
    const auto target = live_reference ? translate_journal_title(source, kind)
        : memoize_search_translation(static_cast<char>(0x20 + static_cast<int>(kind)), source, [&] {
            return translate_journal_title(source, kind);
        }, true);
    return target && matches(*target);
}

// One translated-search policy for every Legends catalog. Sources come from
// native candidate records, never from clipped or currently visible rows.
bool Overlay::translated_legends_search_matches(std::string_view source,
        std::string_view description, std::string_view query, LegendsSearchKind kind,
        const NativeHistoryName *site_name) const {
    TranslationStateScope translation_scope;
    if (!config_.enabled || source.size() + description.size() > 65536 ||
        (source.empty() && description.empty()) || query.size() > 4096) return false;
    const auto &prepared_query = translated_search_query(query);
    if (prepared_query.literal.empty()) return false;

    const auto site_title = kind == LegendsSearchKind::Site
        ? site_name ? translate_site_display(*site_name, source) : translate_legends_place(source)
        : std::nullopt;
    if (kind == LegendsSearchKind::Site) {
        const auto aliases = site_name ? site_name_search_aliases(*site_name)
            : site_reference_search_aliases(source);
        for (const auto &alias : aliases)
            if (translated_search_text_matches(alias, query)) return true;
    }

    // Entity titles can keep the same native spelling when their current
    // parent changes. Bind the search entry to the resolved display name.
    const auto entity_title = kind == LegendsSearchKind::Entity || kind == LegendsSearchKind::Population
        ? translate_civilization_reference(source) : std::nullopt;
    std::string key(1, static_cast<char>(kind));
    key.append(source).push_back('\0');
    key.append(description);
    if (entity_title) {
        key.push_back('\0');
        key.append(*entity_title);
    }
    if (site_title) {
        key.push_back('\0');
        key.append(*site_title);
    }
    auto cached = legends_search_translation_cache_.find(key);
    if (cached == legends_search_translation_cache_.end()) {
        // Avoid translating a native match on the initial scan. Once a
        // translated record exists, its original fields are prepared too.
        const std::string source_utf8 = native_text_to_utf8(source);
        const std::string description_utf8 = native_text_to_utf8(description);
        if (translated_search_text_matches(source_utf8, query) ||
                translated_search_text_matches(description_utf8, query)) return true;
        std::optional<std::string> title = site_title ? site_title : entity_title;
        bool description_in_title = false;
        const bool written = kind == LegendsSearchKind::Artifact ||
                             kind == LegendsSearchKind::WrittenContent;
        if (kind == LegendsSearchKind::Figure && !source.empty() && !description.empty()) {
            const bool unnamed = source == "Unnamed";
            const std::string record = std::string(source) + (unnamed ? " " : ", ") +
                std::string(description);
            // Figure records accept name spellings that are not generic
            // title shapes. Preserve exactly the display's complete parser.
            if (unnamed) {
                title = translate_legends_unnamed_figure(record);
                description_in_title = title.has_value();
            } else if (split_legends_figure_record(record)) {
                title = translate_procedural_fragment(record);
                description_in_title = title.has_value();
            }
        }
        if (!source.empty() && !title) {
            if (kind == LegendsSearchKind::Site) {
                title = translate_legends_place(source);
            } else if (written) {
                // Exactly the two-column artifact/book display strategy:
                // repeated book titles use book grammar, not creature names.
                title = split_generated_name_identity(source) || split_repeated_title_identity(source)
                    ? translate_legends_artifact_identity(source) : translate_legends_book(source);
            } else if (kind == LegendsSearchKind::Population) {
                // Population rows display an English entity gloss or the
                // existing species/region participant phrase, not a paired
                // native personal name. Keep that scoped grammar intact.
                title = translate_civilization_reference(source);
                if (!title) title = exact_literal_translation(source);
                if (!title && source.starts_with("the "))
                    title = translate_legends_participant(source, std::nullopt, 0);
                if (!title) title = translate_legends_name(source, false);
                if (!title) title = translate_legends_term(source);
            } else {
                if (kind == LegendsSearchKind::Entity)
                    title = translate_civilization_reference(source);
                if (kind == LegendsSearchKind::Region)
                    title = translate_world_region_heading(source);
                if (!title) title = exact_literal_translation(source);
                if (!title && !contains_cjk_utf8(source))
                    title = translate_procedural_fragment(std::string(source));
                if (!title && kind != LegendsSearchKind::Figure && !contains_cjk_utf8(source))
                    title = translate_legends_name(source, false);
                if (!title) title = translate_legends_term(source, false);
            }
        }
        std::optional<std::string> type;
        if (!description.empty() && !description_in_title) {
            if (written) type = translate_item_description_term(std::string(description));
            else if (kind == LegendsSearchKind::Building)
                type = translate_legends_structure_type(description);
            else if (kind == LegendsSearchKind::Figure)
                type = memoize_identity_translation('c', description, [&] {
                    return translate_creature_descriptor(description);
                });
            else {
                type = exact_literal_translation(description);
                if (!type) type = translate_legends_term(description);
            }
        }
        std::string target = title.value_or(native_text_to_utf8(source));
        if (!description.empty() && !description_in_title) {
            // Preserve field boundaries in the index so a name/type junction
            // cannot invent a word that occurs in neither displayed field.
            target.push_back('\n');
            target.append(type.value_or(native_text_to_utf8(description)));
        }
        LegendsSearchEntry entry;
        entry.fields.reserve(4);
        if (!source_utf8.empty()) entry.fields.emplace_back(source_utf8);
        if (!description_utf8.empty()) entry.fields.emplace_back(description_utf8);
        const size_t boundary = target.find('\n');
        entry.fields.emplace_back(std::string_view(target).substr(0, boundary));
        if (boundary != std::string::npos)
            entry.fields.emplace_back(std::string_view(target).substr(boundary + 1));
        constexpr size_t maximum_bytes = 128u * 1024u * 1024u;
        const size_t cost = sizeof(std::string) + key.capacity() + entry.bytes() + 4 * sizeof(void *);
        if (legends_search_translation_bytes_ + cost > maximum_bytes) {
            for (auto &field : entry.fields)
                if (field.matches(prepared_query)) return true;
            return false;
        }
        cached = legends_search_translation_cache_.emplace(std::move(key), std::move(entry)).first;
        legends_search_translation_bytes_ += cost;
    }
    // Search each field independently so literal, pinyin and initial keys
    // cannot join a title with its separate description.
    constexpr size_t maximum_bytes = 128u * 1024u * 1024u;
    for (auto &field : cached->second.fields)
        if (match_prepared_search_text(field, prepared_query,
                legends_search_translation_bytes_, maximum_bytes)) return true;
    return false;
}
