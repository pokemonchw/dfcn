// The selected-box builder (reference RVA 0x2126d0, classic 0x212660)
// supplies one complete paragraph. Its site/entity branches are finite typed
// productions, separate from the item, image, RAW and biography paragraphs.
std::optional<std::string> Overlay::translate_symbol_picker_description(
        std::string_view raw_source, bool artwork_context) const {
    TranslationStateScope translation_scope;
    std::string source = normalize_art_utterance(raw_source);
    for (char &ch : source)
        if (ch == '\x10' || ch == '\x11') ch = '"';
    if (source.empty()) return std::nullopt;
    const auto complete = [&](const std::optional<std::string> &target) {
        return translation_complete_with_native_nicknames(target, source);
    };
    // Full RAW DESCRIPTION entries have precedence over all generated prose.
    // No sentence/word replacement is performed when a complete source fails.
    if (auto target = exact_literal_translation(source); complete(target)) return target;

    // Grant the item-only grammar an explicit context only after its entire
    // opening noun resolves. A biography or an unknown RAW paragraph must not
    // acquire item semantics merely because it contains This is or These are.
    const std::string_view introduction = source.starts_with("This is ")
        ? std::string_view("This is ") : source.starts_with("These are ")
            ? std::string_view("These are ") : std::string_view{};
    // Current native option 5 supplies an art_image paragraph even when its
    // physical source is absent. That branch starts "It is a/an ...", and
    // can still append qualities, actions, history and an entity relation.
    // Its native category authorizes the complete shared art grammar without
    // treating unrelated biographies or RAW paragraphs as item descriptions.
    bool item_context = artwork_context;
    if (!introduction.empty()) {
        bool quoted = false;
        for (size_t at = introduction.size(); at < source.size(); ++at) {
            if (source[at] == '"' && source.find('`') == std::string::npos)
                quoted = !quoted;
            if (quoted || source[at] != '.' ||
                    (at + 1 < source.size() && source[at + 1] != ' ')) continue;
            const auto noun = std::string_view(source).substr(
                introduction.size(), at - introduction.size());
            if (translation_complete_with_native_nicknames(
                    translate_item_description_term(noun), noun)) {
                item_context = true;
                break;
            }
        }
    }
    if (auto target = translate_item_description_source(source, item_context);
            complete(target)) return target;
    // The picker owns the complete RAW field even when it lacks a final dot.
    if (auto target = translate_instrument_description(source, true);
            complete(target)) return target;
    if (auto target = translate_symbol_description_source(source);
            complete(target)) return target;
    if (auto target = translate_legends_text(source, false, false);
            complete(target)) return target;

    const bool plural_site = source.starts_with("These are ");
    constexpr std::string_view singular_intro = "This is a ";
    constexpr std::string_view plural_intro = "These are ";
    if ((!plural_site && !source.starts_with(singular_intro)) ||
            !source.ends_with('.')) return std::nullopt;
    const auto body = trim_view(std::string_view(source).substr(
        plural_site ? plural_intro.size() : singular_intro.size(),
        source.size() - (plural_site ? plural_intro.size() : singular_intro.size()) - 1));
    if (body.empty()) return std::nullopt;
    const auto pattern = [&](std::string_view key, std::string_view first,
                             std::string_view second = {}) -> std::optional<std::string> {
        const auto reviewed = translate_legends_term(key, false);
        return reviewed ? std::optional<std::string>(fill_symbol_roles(
            *reviewed, first, second)) : std::nullopt;
    };

    // Site branch 0x21284d uses the complete RAW race.NAME field, then one of
    // the 24 leaves from 0x10cbe50, then an optional region language-name.
    // The shared site parser recognizes the entire taxonomy and race prefix;
    // only this successful typed noun may authorize a following proper name.
    if (auto site = translate_world_site_type(body);
            item_description_translation_complete(site))
        return pattern(plural_site ? "Symbol picker sites: X"
                                   : "Symbol picker site: X", *site);
    for (size_t at = body.find(" in "); at != std::string_view::npos;
         at = body.find(" in ", at + 4)) {
        const auto site = translate_world_site_type(body.substr(0, at));
        if (!item_description_translation_complete(site)) continue;
        const auto region_source = trim_view(body.substr(at + 4));
        const auto region = translate_legends_name(region_source, false);
        if (!translation_complete_with_native_nicknames(region, region_source)) continue;
        return pattern(plural_site ? "Symbol picker sites in region: X Y"
                                   : "Symbol picker site in region: X Y", *site, *region);
    }
    if (plural_site) return std::nullopt;

    // Entity branch 0x212c16 emits exactly one status from entity.type, a RAW
    // race.NAME field, and one finite entity noun. Guilds alone insert a
    // shared profession from 0x132cc10 (RAW PROFESSION_NAME overrides first).
    auto entity = body;
    std::string_view status;
    for (const std::string_view value : {"local", "migrating", "nomadic", "outcast"}) {
        if (entity.starts_with(value) && entity.size() > value.size() &&
                entity[value.size()] == ' ') {
            status = value;
            entity.remove_prefix(value.size() + 1);
            break;
        }
    }
    const auto race = [](std::string_view value) -> std::optional<std::string> {
        const std::string folded = lower(normalize_utterance(value));
        const auto adjective = creature_name_race_adjective.find(folded);
        auto target = adjective != creature_name_race_adjective.end()
            ? std::optional<std::string>(std::string(adjective->second))
            : RULESETS.translate_static_creature_name(cp437_to_utf8(folded));
        return item_description_translation_complete(target) ? target : std::nullopt;
    };
    std::optional<std::string> entity_target;
    static constexpr std::array<std::string_view, 8> fixed_types = {{
        "military organization", "performance troupe", "merchant company",
        "civilization", "government", "religion", "vessel", "group",
    }};
    for (const auto type : fixed_types) {
        if (entity != type && !(entity.size() > type.size() && entity.ends_with(type) &&
                entity[entity.size() - type.size() - 1] == ' ')) continue;
        // These pairings are the actual historical_entity enum, not loose
        // adjectives usable with arbitrary prose or an arbitrary noun.
        if ((type == "government" && status != "local") ||
                (type == "group" && !status.empty() && status != "migrating" && status != "nomadic" &&
                    status != "outcast") ||
                (type != "government" && type != "group" && !status.empty())) continue;
        const auto noun = translate_legends_term(type, false);
        if (!item_description_translation_complete(noun)) continue;
        if (entity == type) entity_target = noun;
        else {
            const auto race_source = entity.substr(0, entity.size() - type.size() - 1);
            const auto species = race(race_source);
            if (species) entity_target = pattern("Symbol picker entity race: X Y", *species, *noun);
        }
        if (entity_target) break;
    }
    if (!entity_target && status.empty() && entity.ends_with(" guild")) {
        const auto field = entity.substr(0, entity.size() - 6);
        const auto guild = [&](std::string_view profession) -> std::optional<std::string> {
            if (profession == "craft")
                return translate_legends_term("Symbol picker craft guild", false);
            const auto role = translate_unit_profession(profession, false);
            return item_description_translation_complete(role)
                ? pattern("Symbol picker guild: X", *role) : std::nullopt;
        };
        // Prefer a complete RAW race before the profession; do not split a
        // multiword profession or a RAW species into independently known words.
        for (size_t at = field.rfind(' '); at != std::string_view::npos;
             at = at == 0 ? std::string_view::npos : field.rfind(' ', at - 1)) {
            const auto species = race(field.substr(0, at));
            if (!species) continue;
            const auto noun = guild(field.substr(at + 1));
            if (noun) {
                entity_target = pattern("Symbol picker entity race: X Y", *species, *noun);
                break;
            }
        }
        if (!entity_target) entity_target = guild(field);
    }
    if (!entity_target) return std::nullopt;
    if (!status.empty()) entity_target = pattern(
        "Symbol picker entity status " + std::string(status) + ": X", *entity_target);
    return entity_target ? pattern("Symbol picker entity: X", *entity_target) : std::nullopt;
}
