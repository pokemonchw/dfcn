// Shared item-description templates take independently captured fields.
const auto item_base_description = [&]() -> std::optional<Pieces> {
    auto label = item("artifact");
    if (!label) return std::nullopt;
    const int type = number("item.type"), quality = number("item.quality");
    const bool artifact = (number("item.flags") & 0x08000000) != 0;
    if (!artifact && quality >= 1 && quality <= 5) {
        static constexpr const char *craft[] = {"", "well-crafted {s}", "finely-crafted {s}",
            "superior quality {s}", "exceptional {s}", "masterful {s}"};
        static constexpr const char *food[] = {"", "well-prepared {s}", "finely-prepared {s}",
            "superiorly prepared {s}", "exceptional prepared {s}", "masterfully prepared {s}"};
        label = item_improvement_apply("term", type == 72 ? food[quality] : craft[quality], {*label});
        if (!label) return std::nullopt;
    }
    if (!artifact && quality == 5) {
        if (number("item.maker") < 0)
            label = item_improvement_apply("term", "{s} created by an unknown artisan", {*label});
        else {
            const auto maker = subject(NativeHistoryObjectKind::Figure, number("item.maker"), false);
            label = maker ? item_improvement_apply("term", "{s} created by {n}", {*label, *maker}) : std::nullopt;
        }
        if (!label) return std::nullopt;
    }
    const int count = number("item.stack");
    const Pieces quantity{piece(std::to_string(count), neutral)};
    if (number("item.bundle"))
        label = count > 1 ? item_improvement_apply("term", "{c} bundles of {s}", {quantity, *label}) :
            item_improvement_apply("term", "a bundle of {s}", {*label});
    else if (count != 1) {
        if (count > 1) label = item_improvement_apply("term", "{c} {s}", {quantity, *label});
        if (!label) return std::nullopt;
        label = item_improvement_apply("term", "a stack of {s}", {*label});
    }
    if (!label) return std::nullopt;
    auto result = item_improvement_apply("sentence", (number("item.plural") && count == 1) ||
        (number("item.bundle") && count > 1) ?
        "These are {s}." : "This is {s}.", {*label});
    if (!result) return std::nullopt;
    if (artifact) {
        const auto profession = translate_item_craftsmanship(text("item.craft_profession"));
        if (!profession) return std::nullopt;
        const auto craft = item_improvement_apply("sentence",
            "All {o}ship is of the highest quality.", {Pieces{piece(*profession, neutral)}});
        if (!craft) return std::nullopt;
        join(*result, *craft);
    }
    if (number("item.fit")) {
        const auto species = translate_creature_descriptor(text("item.fit_species"));
        if (!species) return std::nullopt;
        auto fit = item_improvement_apply("predicate", "is sized for {i}", {Pieces{piece(*species, neutral)}});
        if (fit) fit = item_improvement_apply("sentence", "It {e}.", {*fit});
        if (!fit) return std::nullopt;
        join(*result, *fit);
    }
    return result;
};
const auto item_food_description = [&]() -> std::optional<Pieces> {
    const auto &ingredients = numbers("item.ingredients");
    if (ingredients.empty()) return number("item.type") == 72
        ? item_improvement_apply("sentence", "The ingredients are", {}) : Pieces{};
    Pieces list;
    for (int index : ingredients) {
        const std::string role = "ingredient." + std::to_string(index);
        auto label = item(role);
        if (!label) return std::nullopt;
        static constexpr const char *quality[] = {"", "well-", "finely ", "superiorly ", "exceptionally ", "masterfully "};
        const int grade = number(role + ".quality");
        const auto &ingredient = numbers("item." + role);
        const bool liquid = is_liquid_food_ingredient(text("item." + role),
            ingredient.empty() ? -1 : ingredient.front());
        const std::string key = std::string(grade >= 1 && grade <= 5 ? quality[grade] : "") +
            (number(role + ".preparation") == 0
                ? (liquid ? "minced {l}" : "minced {f}") : "cooked {s}");
        label = item_improvement_apply("term", key, {*label});
        if (!label) return std::nullopt;
        if (!list.empty()) list.push_back(piece(index == ingredients.back() ? "和" : "、", neutral));
        join(list, *label);
    }
    return item_improvement_apply("sentence", "The ingredients are {s}.", {list});
};
const auto item_wear_description = [&]() -> std::optional<Pieces> {
    const int wear = number("item.wear");
    if (wear < 1 || wear > 3) return Pieces{};
    const bool soft = number("item.soft_wear") != 0;
    auto state = item_improvement_apply("predicate", wear == 1 ? "is showing some wear" :
        wear == 2 ? (soft ? "is threadbare" : "is heavily worn") :
        (soft ? "is in tatters" : "is mangled"), {});
    return state ? item_improvement_apply("sentence", "This object {e}.", {*state}) : std::nullopt;
};
