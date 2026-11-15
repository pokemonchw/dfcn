// Both queued jobs and chooser titles use this same native job-caption arm.
// PE 53.17 d1c42a..d1c56a (Classic d1924a..d1938a) selects language_name,
// unit identity or race/caste before appending the invariant action. The
// original complete suppliers and all branches are in workshop-queue-5317.
TranslationResult Overlay::translate_memorial_activity_display(
        std::string_view source) const {
    constexpr std::string_view suffix = " (engrave memorial)";
    const bool empty_subject = source.size() == suffix.size() - 1 &&
        lower(std::string(source)) == suffix.substr(1);
    if (!empty_subject && (source.size() < suffix.size() ||
            lower(std::string(source.substr(source.size() - suffix.size()))) != suffix))
        return {};
    const auto label = exact_literal_translation("Workshop task choice: suffix (engrave memorial)");
    if (!label || !item_display_target_valid(*label)) return {};
    const auto subject = source.substr(0, empty_subject ? 0 : source.size() - suffix.size());
    TranslationStateScope state;
    TranslationWorkScope work;
    auto identity = subject.empty() ? TranslationResult::translated(subject, {}, "person")
                                    : preserved_item_field(subject, "person");
    try {
        TranslationWorkFrame frame("memorial identity", subject);
        if (!subject.empty())
            if (const auto target = translate_unit_identity(subject, true))
                identity = TranslationResult::translated(subject, *target, "person");
    } catch (const TranslationWorkLimit &) {
        if (!work.owns_budget()) throw;
        identity = preserved_item_field(subject, "person", TranslationStatus::WorkLimited);
    }
    // Empty/invalid native name or race data can leave only the suffix.
    // Unknown authored text keeps its spelling; neither case can suppress
    // the independently known action, and no replacement identity is made up.
    identity.append(TranslationResult::translated(source.substr(subject.size()),
        *label, "activity-action"), subject.size());
    finish_item_display_result(identity, std::string(source), "activity");
    return identity;
}

// Material menus select a complete material/category subject. Memorial
// titles share the activity entry above, including their partial results.
TranslationResult Overlay::translate_workshop_choice_title(
        std::string_view raw_source) const {
    TranslationStateScope state;
    TranslationWorkScope work;
    const std::string source(raw_source);
    if (source.empty()) return {};
    try {
        TranslationWorkFrame frame("workshop choice title", source);
        if (auto memorial = translate_memorial_activity_display(source); memorial.usable())
            return memorial;
        const std::string folded = lower(source);
        const auto wrap = [&](std::string_view suffix,
                              TranslationResult subject) -> TranslationResult {
            const auto label = exact_literal_translation(
                "Workshop task choice: suffix " + std::string(trim_view(suffix)));
            if (!label || !item_display_target_valid(*label))
                return preserved_item_field(source, "workshop-choice");
            // A typed activity lookup can return NoMatch with a source but
            // no target. Appending a translated suffix to that result would
            // make it usable while silently deleting the category name.
            // This native title owns the complete subject, so preserve it
            // here when no translator accepted it.
            if (!subject.usable() || !item_display_target_valid(subject.target))
                subject = preserved_item_field(std::string_view(source).substr(
                    0, source.size() - suffix.size()), "workshop-choice-subject");
            subject.append(TranslationResult::translated(
                std::string_view(source).substr(source.size() - suffix.size()),
                *label, "workshop-choice-action"), source.size() - suffix.size());
            finish_item_display_result(subject, source, "workshop-choice");
            return subject;
        };
        constexpr std::string_view menu = " (opens menu)";
        if (folded.ends_with(menu) && source.size() > menu.size()) {
            // The existing whole menu productions own all fixed categories
            // and color jobs. The material virtual title (8c28f0) instead
            // calls 14d1920, including RAW names and historical-figure
            // possessives that do not fit menu_main's bare material list.
            if (const auto complete = translate_fortress_activity(source, true))
                return TranslationResult::translated(source, *complete, "workshop-choice");
            const auto subject = std::string_view(source).substr(0, source.size() - menu.size());
            if (trim_view(subject).empty()) return preserved_item_field(source, "workshop-choice");
            // Extensions can supply complete CATEGORY_NAME translations in
            // their ordinary glossary without defining an activity grammar.
            if (const auto category = exact_literal_translation(std::string(subject)))
                return wrap(menu, TranslationResult::translated(subject, *category, "workshop-category"));
            if (const auto material = translate_material_name(subject))
                return wrap(menu, TranslationResult::translated(subject, *material, "material"));
            return wrap(menu, translate_fortress_activity_display(subject, true));
        }
        return translate_fortress_activity_display(source);
    } catch (const TranslationWorkLimit &) {
        if (!work.owns_budget()) throw;
        return preserved_item_field(source, "workshop-choice", TranslationStatus::WorkLimited);
    }
}
