// PE 53.17 item color producers CC4F60..CC599C and CC59A0..CC63DC
// (53.16: CAD270..CADCAC and CADCB0..CAE6EC). Current decompilation:
// data/extracted/item-color-current, including base-item and material branches.
// select a descriptor COLOR, not a material, at colors[descriptor] + 0x50.
// The vector at 2519538 is descriptor_handler.colors; the distinct pattern
// vector at 2519568 is used by cloth only to select its first base color.
// Keep this type separate from ordinary nouns: pearl, bronze, ivory, amber,
// cardinal and the other shared spellings retain their color senses here.
std::optional<std::string> Overlay::translate_item_color_pattern(
        std::string_view source) const {
    if (auto color = translate_legends_color(source);
        item_description_translation_complete(color)) return color;
    auto color = RULESETS.translate_color(lower(native_text_to_utf8(
        normalize_utterance(source))));
    if (item_description_translation_complete(color)) return color;
    // Stored descriptor NAMEs can join complete colors with a hyphen.
    // Try the whole name first (blue-gray is itself a RAW color), then
    // resolve both complete leaves in the color namespace only.
    const std::string name = lower(native_text_to_utf8(normalize_utterance(source)));
    for (size_t at = name.find('-'); at != std::string::npos;
            at = name.find('-', at + 1)) {
        const auto first = RULESETS.translate_color(name.substr(0, at));
        const auto second = RULESETS.translate_color(name.substr(at + 1));
        if (item_description_translation_complete(first) &&
                item_description_translation_complete(second))
            return *first + "与" + *second + "的混合色";
    }
    return std::nullopt;
}

std::optional<std::string> Overlay::translate_item_dye_materials(
        std::string_view raw_source) const {
    TranslationWorkFrame work_frame("item dye materials", raw_source);
    const std::string source = normalize_art_utterance(raw_source);
    std::string_view value = trim_view(source);
    if (value.empty()) return std::nullopt;
    // The native formatter deduplicates material type/index pairs, retaining
    // their first-seen order. One constituent has no wrapper; two or more
    // use "a mixture of", with ordinary and Oxford-comma list joins.
    // Its constituents use the complete POWDER state (+0x118); the direct
    // single-dye branch uses SOLID (+0xb8). Both prepend material.prefix
    // (+0x520) and, for a named source, the same generated owner and "'s ".
    // All of these leaves therefore belong to the existing material parser,
    // including every installed RAW plant/creature/inorganic dye and owner.
    constexpr std::string_view mixture = "a mixture of ";
    const bool mixed = template_literal_at(value, 0, mixture, true);
    if (mixed) value.remove_prefix(mixture.size());
    if (value.empty()) return std::nullopt;

    struct Separator { size_t begin, end; };
    std::vector<Separator> separators;
    std::vector<size_t> starts{0};
    for (size_t at = 0; at < value.size();) {
        size_t length = 0;
        for (const std::string_view delimiter : {", and ", ", ", " and "}) {
            if (template_literal_at(value, at, delimiter, true)) {
                length = delimiter.size();
                break;
            }
        }
        if (!length) { ++at; continue; }
        separators.push_back({at, at + length});
        starts.push_back(at + length);
        at += length;
    }

    struct Part { std::string target; size_t next; };
    std::map<size_t, Part> resolved;
    // Resolve complete leaves before considering separators. A comma or
    // "and" inside a RAW material or an authored owner's nickname is not
    // automatically a list boundary. Iterative suffix composition handles
    // arbitrary native mixture lengths without using noun recursion depth.
    for (auto begin = starts.rbegin(); begin != starts.rend(); ++begin) {
        if (*begin >= value.size()) continue;
        const auto remaining = value.substr(*begin);
        auto whole = translate_material_name(remaining);
        if (translation_complete_with_native_nicknames(whole, remaining)) {
            resolved.emplace(*begin, Part{std::move(*whole), value.size()});
            continue;
        }
        for (const auto &separator : separators) {
            if (separator.begin <= *begin || !resolved.contains(separator.end)) continue;
            translation_work_step();
            const auto leaf = value.substr(*begin, separator.begin - *begin);
            auto material = translate_material_name(leaf);
            if (!translation_complete_with_native_nicknames(material, leaf)) continue;
            resolved.emplace(*begin, Part{std::move(*material), separator.end});
            break;
        }
    }
    if (!resolved.contains(0)) return std::nullopt;
    std::string result;
    for (size_t at = 0; at < value.size();) {
        const auto &part = resolved.at(at);
        if (!result.empty()) result += part.next == value.size() ? "和" : "、";
        result += part.target;
        at = part.next;
    }
    if (mixed) result += "混合物";
    return result;
}

TranslationResult Overlay::translate_item_color_pattern_display(std::string_view source) const {
    if (const auto target = translate_item_color_pattern(source))
        return TranslationResult::translated(source, *target, "color");
    // The owning item rule/native descriptor already establishes COLOR.
    // A color homonym must not enter the ordinary material/name namespaces.
    return preserved_item_field(source, "color");
}

TranslationResult Overlay::translate_item_dye_materials_display(std::string_view raw_source) const {
    TranslationWorkFrame frame("dye display fields", raw_source);
    const std::string source = normalize_art_utterance(raw_source);
    if (const auto target = translate_item_dye_materials(source))
        return TranslationResult::translated(source, *target, "dye-materials");
    constexpr std::string_view mixture = "a mixture of ";
    if (!template_literal_at(source, 0, mixture, true) || source.size() <= mixture.size()) {
        if (const auto target = translate_material_name(source))
            return TranslationResult::translated(source, *target, "dye-material");
        return preserved_item_field(source, "dye-material");
    }
    const auto body = std::string_view(source).substr(mixture.size());
    // The formatter proves the mixture wrapper. It does not capture its RAW
    // members here; an unknown owner's text can contain commas and "and".
    // Keep that complete body instead of granting punctuation a new boundary.
    auto result = preserved_item_field(body, "dye-material-list");
    for (auto &fragment : result.fragments) {
        fragment.source_begin += mixture.size();
        fragment.source_end += mixture.size();
    }
    for (auto &origin : result.origins)
        if (origin != std::string::npos) origin += mixture.size();
    const size_t wrapper_begin = result.target.size();
    result.target += "混合物";
    result.fragments.push_back({0, mixture.size(), wrapper_begin, result.target.size(),
        TranslationStatus::Translated, "dye-mixture"});
    result.origins.resize(result.target.size(), std::string::npos);
    finish_item_display_result(result, source, "dye-materials");
    return result;
}
