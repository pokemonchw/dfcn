// The character's Military -> Kills pane prints the same typed fields as
// historical kill summaries, without going through the Legends page adapter.
// Its caller owns a complete row and establishes the selected pane first.
std::optional<std::string> Overlay::translate_character_kill_record(
        std::string_view source) const {
    source = trim_view(source);
    if (source.empty()) return std::nullopt;

    const auto apply = [&](std::string_view key,
                           const std::vector<std::string> &fields)
            -> std::optional<std::string> {
        const auto found = history_semantic_templates_.find(std::string(key));
        if (found == history_semantic_templates_.end()) return std::nullopt;
        const Rule &rule = rules_[static_cast<size_t>(found->second)];
        if (rule.template_kinds.size() != fields.size()) return std::nullopt;
        if (fields.empty()) return rule.target;
        if (rule.target_template_literals.size() != rule.target_capture_order.size() + 1)
            return std::nullopt;
        std::string target;
        for (size_t i = 0; i < rule.target_capture_order.size(); ++i) {
            const size_t field = rule.target_capture_order[i];
            if (field >= fields.size()) return std::nullopt;
            target += rule.target_template_literals[i];
            target += fields[field];
        }
        target += rule.target_template_literals.back();
        return target;
    };
    for (const std::string_view empty : {
            "No Notable Kills", "No Other Kills", "No Kills"})
        if (source == empty) return apply(empty, {});
    for (const std::string_view suffix : {
            " Notable Kills", " Notable Kill", " Other Kills", " Other Kill",
            " Kills", " Kill"}) {
        if (!source.ends_with(suffix)) continue;
        const auto count = adventure_location_count(lower(std::string(
            trim_view(source.substr(0, source.size() - suffix.size())))));
        if (count) return apply("{c}" + std::string(suffix), {std::to_string(*count)});
        break;
    }

    // A notable victim is NAME the SPECIES, d. YEAR, or an unnamed caste.
    // Dates are complete fields: do not feed them to generated-name fallback.
    const size_t date_at = source.rfind(", ");
    const auto date_field = date_at == std::string_view::npos
        ? std::string_view{} : trim_view(source.substr(date_at + 2));
    if (date_field.starts_with("b. ") || date_field.starts_with("d. ") ||
            date_field.starts_with("died in ")) {
        const auto identity = trim_view(source.substr(0, date_at));
        std::string dates(date_field);
        if (dates.starts_with("died in ")) dates.replace(0, 8, "d. ");
        if (dates.ends_with('.')) dates.pop_back();
        std::optional<std::string> date;
        for (const char *key : {"b. {d} d. {d}", "b. {d}", "d. {d}"}) {
            const auto found = history_semantic_templates_.find(key);
            if (found == history_semantic_templates_.end()) continue;
            const Rule &rule = rules_[static_cast<size_t>(found->second)];
            size_t end = 0;
            std::vector<std::string> fields;
            if (match_template(rule, dates, 0, &end, &fields) && end == dates.size()) {
                date = apply(key, fields);
                break;
            }
        }
        if (!date) return std::nullopt;
        std::optional<std::string> victim;
        for (const std::string_view article : {"a ", "an ", "A ", "An "})
            if (identity.starts_with(article)) {
                victim = translate_creature_descriptor(identity.substr(article.size()), true);
                break;
            }
        if (!victim) {
            const size_t species_at = identity.rfind(" the ");
            if (species_at != std::string_view::npos) {
                const auto species = translate_creature_descriptor(
                    identity.substr(species_at + 5), true);
                const auto name = translate_legends_name(identity.substr(0, species_at), true);
                if (species && name) victim = apply("{n} the {s}", {*name, *species});
            }
        }
        if (!victim) return std::nullopt;
        return *victim + "，" + *date;
    }

    // The native sex glyphs are CP437 0x0b/0x0c, not whitespace. Parse the
    // wrapper before invoking any word normalizer, and permit sexless castes.
    for (size_t at = source.find(" in "); at != std::string_view::npos;
         at = source.find(" in ", at + 4)) {
        auto counted_species = trim_view(source.substr(0, at));
        const auto place_source = trim_view(source.substr(at + 4));
        std::string sex;
        for (const auto &[marker, target] : std::array<
                std::pair<std::string_view, std::string_view>, 4>{{
                {" (\x0b)", "（♂）"}, {" (\x0c)", "（♀）"},
                {" (♂)", "（♂）"}, {" (♀)", "（♀）"}}}) {
            if (!counted_species.ends_with(marker)) continue;
            counted_species = trim_view(counted_species.substr(
                0, counted_species.size() - marker.size()));
            sex = target;
            break;
        }
        for (size_t split = counted_species.find(' '); split != std::string_view::npos;
             split = counted_species.find(' ', split + 1)) {
            const auto count = adventure_location_count(lower(std::string(
                counted_species.substr(0, split))));
            if (!count || *count < 1) continue;
            const auto species = translate_creature_descriptor(
                trim_view(counted_species.substr(split + 1)), true);
            if (!species) continue;
            // The kill summary requests EnglishName for sites and regions.
            // Resolve the complete location with the same site, geography
            // and underground rules used by other world-location fields.
            const auto place = translate_world_artifact_location(place_source);
            if (!place) continue;
            return apply("{c} {s} in {p}", {std::to_string(*count), *species + sex, *place});
        }
    }
    return std::nullopt;
}
