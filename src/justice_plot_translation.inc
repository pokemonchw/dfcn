// Counterintelligence list_name is built from the first agreement detail,
// not from historical-event prose. Steam RVA 0x2b6b69..0x2b6fb9 and the
// corresponding Classic producer own this finite switch and its date suffix.
// Every inserted target keeps the native field's person/entity/artifact type.
std::optional<std::string> Overlay::translate_justice_plot_text(
        std::string_view raw, std::optional<bool> sabotage_person) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("Justice plot caption", raw);
    const auto source = trim_view(raw);
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    const auto literal = [&](std::string_view caption) {
        return exact_literal_translation("Justice plot: " + std::string(caption));
    };
    const auto replace = [](std::optional<std::string> caption,
            std::string_view token, std::string_view value) -> std::optional<std::string> {
        if (!caption) return std::nullopt;
        const size_t at = caption->find(token);
        if (at == std::string::npos) return std::nullopt;
        caption->replace(at, token.size(), value);
        return caption;
    };
    // Missing details, Location details (type 12), and all unknown detail
    // types retain the original default without adding a year.
    if (auto target = literal(source)) return target;

    const auto integer = [](std::string_view value) {
        if (value.starts_with('-')) value.remove_prefix(1);
        return !value.empty() &&
            value.find_first_not_of("0123456789") == std::string_view::npos;
    };
    constexpr std::string_view agreed = ", agreed in ";
    const size_t agreement_at = source.rfind(agreed);
    if (agreement_at == std::string_view::npos) {
        // PlotConviction does not insert an entity. Actions 0/2/3 select the
        // three attempted crimes; other actions keep A plot but still append
        // " in " and the signed native integer year (RVA 0x2b6e25..0x2b6e86).
        const size_t date_at = source.rfind(" in ");
        if (date_at == std::string_view::npos) return std::nullopt;
        const auto year = source.substr(date_at + 4);
        const auto caption = trim_view(source.substr(0, date_at));
        if (!integer(year) || (caption != "Attempted Bribery" &&
                caption != "Attempted Espionage" &&
                caption != "Attempted Embezzlement" && caption != "A plot"))
            return std::nullopt;
        return replace(literal(std::string(caption) + " in {d}"), "{d}", year);
    }
    const auto year = source.substr(agreement_at + agreed.size());
    if (!integer(year)) return std::nullopt;
    const auto body = trim_view(source.substr(0, agreement_at));
    const auto finish = [&](std::optional<std::string> target)
            -> std::optional<std::string> {
        const auto date = replace(literal(", agreed in {d}"), "{d}", year);
        return target && date ? std::optional<std::string>(*target + *date) : std::nullopt;
    };
    // Every recognized normal action reaches the shared date path even if
    // one required target id is -1 and only the verb has been emitted.
    if (auto target = literal(body)) return finish(std::move(target));

    const auto person = [&](std::string_view value) -> std::optional<std::string> {
        if (const auto identity = native_unit_identity_source_target(value)) return identity;
        // The historical figure helper b92f10 can emit an unnamed species,
        // species before a name, or "<name> the <species>". Resurrection and
        // ghost status belong to that complete species field, as in Legends.
        if (auto target = translate_legends_actor(value, 0, true)) return target;
        for (size_t at = value.rfind(" the "); at != std::string_view::npos;
                at = at == 0 ? std::string_view::npos : value.rfind(" the ", at - 1)) {
            const auto species = translate_creature_descriptor(value.substr(at + 5), true);
            if (!species) continue;
            const auto name = translate_unit_identity(trim_view(value.substr(0, at)), true);
            if (!name) continue;
            auto target = replace(literal("Figure {n} the {s}"), "{n}", *name);
            return replace(std::move(target), "{s}", *species);
        }
        return translate_unit_identity(value, true);
    };
    const auto entity = [&](std::string_view value) {
        // b92900's failed lookup emits an unknown civilization; the complete
        // shared name resolver already owns that reviewed historical term.
        return translate_legends_name(value, false);
    };

    constexpr std::string_view corrupt = "Corrupt ";
    if (body.starts_with(corrupt)) {
        const auto value = trim_view(body.substr(corrupt.size()));
        if (value.empty()) return std::nullopt;
        // A resolved position can have an empty native name. Its " of"
        // remains in the source even though no office word preceded it.
        if (value == "of") return finish(literal("Corrupt of"));
        if (value.starts_with("of ")) {
            const auto owner = entity(trim_view(value.substr(3)));
            return owner ? finish(replace(literal("Corrupt of {e}"), "{e}", *owner))
                         : std::nullopt;
        }
        if (value.ends_with(" of")) {
            const auto office = translate_legends_office(trim_view(
                value.substr(0, value.size() - 3)));
            return office ? finish(replace(literal("Corrupt {s} of"), "{s}", *office))
                          : std::nullopt;
        }
        // Position query failure drops only the position and " of". The
        // native producer still appends the entity (and can leave two spaces
        // after Corrupt). Complete office terms determine the boundary when
        // an office or an entity itself contains "of".
        for (size_t at = value.rfind(" of "); at != std::string_view::npos;
                at = at == 0 ? std::string_view::npos : value.rfind(" of ", at - 1)) {
            const auto office = translate_legends_office(trim_view(value.substr(0, at)));
            if (!office) continue;
            const auto owner = entity(trim_view(value.substr(at + 4)));
            if (!owner) continue;
            auto target = replace(literal("Corrupt {s} of {e}"), "{s}", *office);
            return finish(replace(std::move(target), "{e}", *owner));
        }
        const auto target = entity(value);
        return target ? finish(replace(literal("Corrupt {e}"), "{e}", *target))
                      : std::nullopt;
    }

    constexpr std::string_view war = "Start War between ";
    if (body.starts_with(war)) {
        const auto value = trim_view(body.substr(war.size()));
        // Each existing entity can independently have an empty display
        // name. Keep the native between/and syntax owned by this title.
        if (value == "and") return finish(literal("Start War between and"));
        if (value.starts_with("and ")) {
            const auto defender = entity(trim_view(value.substr(4)));
            return defender ? finish(replace(literal("Start War between and {e}"),
                "{e}", *defender)) : std::nullopt;
        }
        if (value.ends_with(" and")) {
            const auto attacker = entity(trim_view(value.substr(0, value.size() - 4)));
            return attacker ? finish(replace(literal("Start War between {e} and"),
                "{e}", *attacker)) : std::nullopt;
        }
        // "and" can also be inside either generated entity name. Resolve
        // both complete fields before accepting a separator, retaining the
        // longest leading entity whose entire following entity resolves.
        for (size_t at = value.rfind(" and "); at != std::string_view::npos;
                at = at == 0 ? std::string_view::npos : value.rfind(" and ", at - 1)) {
            const auto attacker = entity(trim_view(value.substr(0, at)));
            if (!attacker) continue;
            const auto defender = entity(trim_view(value.substr(at + 5)));
            if (!defender) continue;
            auto target = replace(literal("Start War between {e1} and {e2}"),
                "{e1}", *attacker);
            return finish(replace(std::move(target), "{e2}", *defender));
        }
        return std::nullopt;
    }

    enum class TargetKind { Figure, Artifact, Entity, Sabotage };
    struct Action { std::string_view prefix, caption; TargetKind kind; };
    static constexpr std::array<Action, 7> actions = {{
        {"Abduct ", "Abduct {t}", TargetKind::Figure},
        {"Assassinate ", "Assassinate {t}", TargetKind::Figure},
        {"Frame ", "Frame {t}", TargetKind::Figure},
        {"Steal ", "Steal {t}", TargetKind::Artifact},
        {"Provide Position in ", "Provide Position in {t}", TargetKind::Entity},
        {"Infiltrate ", "Infiltrate {t}", TargetKind::Entity},
        {"Sabotage ", "Sabotage {t}", TargetKind::Sabotage},
    }};
    for (const auto &action : actions) {
        if (!body.starts_with(action.prefix)) continue;
        const auto value = trim_view(body.substr(action.prefix.size()));
        if (value.empty()) return std::nullopt;
        std::optional<std::string> target;
        switch (action.kind) {
            case TargetKind::Figure: target = person(value); break;
            case TargetKind::Artifact:
                // b94400 supplies a complete artifact name, including book
                // names and the native Untitled/unknown artifact branches.
                target = translate_legends_artifact_identity(value);
                if (!target) target = translate_legends_book(value);
                if (!target) target = translate_legends_item(value);
                break;
            case TargetKind::Entity: target = entity(value); break;
            case TargetKind::Sabotage:
                // The producer tests entity_id before target_hf. Its captured
                // detail type supplies this distinction; spelling never does.
                if (sabotage_person) target = *sabotage_person ? person(value) : entity(value);
                else if (const auto identity = native_unit_identity_source_target(value))
                    target = identity;
                else target = native_text_to_utf8(value);
                break;
        }
        return target ? finish(replace(literal(action.caption), "{t}", *target))
                      : std::nullopt;
    }
    return std::nullopt;
    });
}
