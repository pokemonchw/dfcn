// Native actor cards have four body productions (supplier RVA 0xd1840),
// including organizations named after their principal actor. Keep the complete
// record typed so Organization cannot enter the skill/attribute word grammar.
std::optional<std::string> Overlay::translate_justice_actor_text(
        std::string_view raw, std::optional<bool> sabotage_person) const {
    const std::string_view source = trim_view(raw);
    if (source.empty()) return std::nullopt;
    if (auto target = exact_literal_translation("Justice actor: " + std::string(source)))
        return target;
    if (source.starts_with("Alias:")) {
        if (trim_view(source.substr(6)).empty()) {
            const auto caption = exact_literal_translation("Justice person: Alias");
            return caption ? std::optional<std::string>(*caption + "：") : std::nullopt;
        }
        return translate_justice_case_text(source);
    }
    for (const std::string_view label : {"Associated Organization", "Associated Plot"}) {
        if (!source.starts_with(label) || source.size() <= label.size() ||
                source[label.size()] != ':') continue;
        const auto value = trim_view(source.substr(label.size() + 1));
        const auto caption = exact_literal_translation("Justice actor field: " + std::string(label));
        if (!caption) return std::nullopt;
        if (value.empty()) return *caption + "：";
        auto target = label == "Associated Plot"
            ? translate_justice_plot_text(value, sabotage_person)
            : exact_literal_translation("Justice actor: " + std::string(value));
        if (!target && label == "Associated Organization")
            target = translate_unit_identity(value, true);
        return target ? std::optional<std::string>(*caption + "：" + *target) : std::nullopt;
    }
    return std::nullopt;
}
