// Display adapters are only called after a field owner or a fixed template
// has established the complete source span. Recursive grammar keeps using
// the strict methods; preserved text is never a namespace wildcard.
static TranslationResult preserve_native_translation(std::string_view source,
        std::string_view kind, bool authored = false,
        TranslationStatus status = TranslationStatus::Untranslated) {
    auto result = TranslationResult::translated(source, native_text_to_utf8(source), kind);
    result.status = authored ? TranslationStatus::PreservedAuthored : status;
    result.policy = TranslationPolicy::Display;
    result.fragments.front().status = result.status;
    for (size_t at = 0, out = 0; at < source.size();) {
        const auto decoded = decode_utf8_at(source, at);
        const size_t bytes = decoded ? decoded->second : 1;
        const std::string glyph = native_text_to_utf8(source.substr(at, bytes));
        for (size_t i = 0; i < glyph.size() && out < result.origins.size(); ++i)
            result.origins[out++] = at;
        at += bytes;
    }
    return result;
}

TranslationResult Overlay::translate_ui_message_capture_display(
        std::string_view source, bool unit_label) const {
    TranslationWorkScope budget;
    const auto finish = [&](TranslationResult result) {
        if (budget.exhausted()) {
            if (!budget.owns_budget()) translation_work_step();
            return preserve_native_translation(source, unit_label ? "unit" : "term", false,
                TranslationStatus::WorkLimited);
        }
        return result;
    };
    try {
        if (auto target = translate_ui_message_capture(source, unit_label))
            return finish(TranslationResult::translated(source, std::move(*target),
                unit_label ? "unit" : "term"));
        if (unit_label) {
            if (auto target = native_unit_identity_source_target(source)) {
                auto result = TranslationResult::translated(source, std::move(*target), "unit");
                result.status = TranslationStatus::PreservedAuthored;
                result.fragments.front().status = result.status;
                return finish(std::move(result));
            }
        } else {
            auto result = translate_item_description_term_display(source);
            if (result.usable() && result.changed()) return finish(std::move(result));
        }
    } catch (const TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return preserve_native_translation(source, unit_label ? "unit" : "term", false,
            TranslationStatus::WorkLimited);
    }
    return finish(preserve_native_translation(source, unit_label ? "unit" : "term"));
}

TranslationResult Overlay::translate_template_captures_display(const Rule &rule,
        const std::vector<std::string> &captures, std::string_view source) const {
    if (captures.empty() || captures.size() != rule.template_kinds.size() ||
            rule.template_literals.size() != captures.size() + 1) return {};
    TranslationWorkScope budget;
    const auto finish = [&](TranslationResult result) {
        if (budget.exhausted()) {
            if (!budget.owns_budget()) translation_work_step();
            return preserve_native_translation(source, "template", false, TranslationStatus::WorkLimited);
        }
        return result;
    };
    bool complete = false;
    try {
        auto target = translate_template_captures(rule, captures, &complete);
        if (complete && !target.empty()) {
            auto result = TranslationResult::translated(source, std::move(target), "template");
            result.resource_revision = RULESETS.resource_revision();
            return finish(std::move(result));
        }
    } catch (const TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return preserve_native_translation(source, "template", false, TranslationStatus::WorkLimited);
    }

    try {
    if (budget.exhausted()) return finish({});
    // The normal matcher may choose a lexical boundary from several copies
    // of a separator. Such a choice cannot become proof merely because an
    // unknown field is now permitted. Require one full, literal-bound source.
    std::vector<size_t> offsets;
    size_t cursor = 0;
    for (size_t field = 0; field < captures.size(); ++field) {
        const auto begin = catalog_literal_end(source, cursor, rule.template_literals[field],
            rule.case_insensitive);
        if (!begin || captures[field].empty() ||
                source.substr(*begin, captures[field].size()) != captures[field]) return {};
        cursor = *begin + captures[field].size();
        const auto &suffix = rule.template_literals[field + 1];
        if (rule.template_kinds[field] != 'd' && !suffix.empty()) {
            size_t possibilities = 0;
            for (size_t at = *begin + 1; at <= source.size(); ++at)
                if (catalog_literal_end(source, at, suffix, rule.case_insensitive)) ++possibilities;
            if (possibilities != 1) return {};
        }
        if (suffix.empty() && field + 1 < captures.size()) return {};
        offsets.push_back(*begin);
    }
    const auto end = catalog_literal_end(source, cursor, rule.template_literals.back(), rule.case_insensitive);
    if (!end || *end != source.size() ||
        std::none_of(rule.template_literals.begin(), rule.template_literals.end(), [](const auto &literal) {
            return std::any_of(literal.begin(), literal.end(), [](unsigned char ch) { return !std::isspace(ch); });
        })) return {};

    Rule compiled = rule;
    if (compiled.target_capture_order.empty() && !compile_template_target(compiled)) return {};
    std::vector<TranslationResult> fields;
    for (size_t field = 0; field < captures.size(); ++field) {
        if (budget.exhausted()) return finish({});
        const auto kind = rule.template_kinds[field];
        const auto &value = captures[field];
        if (kind == 'd') {
            const size_t digit = value.front() == '+' || value.front() == '-' ? 1 : 0;
            if (digit == value.size() || !std::all_of(value.begin() + digit, value.end(),
                    [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) return {};
            fields.push_back(TranslationResult::translated(value, value, "number"));
        } else if (kind == 'k') {
            if (!is_keybinding_sequence(value)) return {};
            fields.push_back(preserve_native_translation(value, "keybinding", true));
        } else if (rule.source == "Save to timeline folder: {s}") {
            fields.push_back(preserve_native_translation(value, "folder", true));
        } else if (fortress_squad_reference_template(rule.source) && field == 0) {
            // The strict squad resolver owns alias provenance and must not
            // be replaced by dictionary guesses at an unknown source.
            auto target = translate_fortress_squad_name(value);
            fields.push_back(target ? TranslationResult::translated(value, *target, "squad")
                : preserve_native_translation(value, "squad"));
        } else {
            std::optional<std::string> target;
            try {
                if (fortress_ore_use_template(rule.source) && field == 0) {
                    // Keep the strict material role even when display must
                    // preserve an unknown metal; never retry its color sense.
                    if (config_.compositional_rules)
                        target = RULESETS.translate_material_state(
                            lower(native_text_to_utf8(value)));
                } else if (rule.help_prose || rule.ui_message || rule.tooltip_prose)
                    target = translate_ui_catalog_capture(rule, field, value);
                else if (auto exact = exact_literal_translation(value)) target = std::move(exact);
                else if (rule.source == "Needs {s}" || rule.source == "No access to {s}" ||
                        rule.source == "Amount of {s}") {
                    fields.push_back(translate_workshop_recipe_source_display(value));
                    continue;
                } else if (rule.source == "Export of {s} Prohibited") {
                    fields.push_back(translate_fortress_item_caption_display(value));
                    continue;
                } else if (!rule.strict_captures) target = translate_compositional(value);
            } catch (const TranslationWorkLimit &) {
                if (!budget.owns_budget()) throw;
                fields.push_back(preserve_native_translation(value, std::string(1, kind), false,
                    TranslationStatus::WorkLimited));
                continue;
            }
            fields.push_back(target ? TranslationResult::translated(value, *target, std::string(1, kind))
                : preserve_native_translation(value, std::string(1, kind)));
        }
    }
    TranslationResult result;
    result.source = source;
    result.kind = "template";
    result.resource_revision = RULESETS.resource_revision();
    for (size_t out = 0; out < fields.size(); ++out) {
        // Target literals have no source glyph origin. Field metadata stays
        // attached to the full source even when Chinese changes their order.
        auto literal = TranslationResult::translated({}, compiled.target_template_literals[out], "literal");
        result.append(literal, 0);
        const auto field = compiled.target_capture_order[out];
        result.append(fields[field], offsets[field]);
    }
    result.append(TranslationResult::translated({}, compiled.target_template_literals.back(), "literal"));
    result.policy = TranslationPolicy::Display;
    result.consumed = source.size();
    return finish(std::move(result));
    } catch (const TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return preserve_native_translation(source, "template", false, TranslationStatus::WorkLimited);
    }
}
