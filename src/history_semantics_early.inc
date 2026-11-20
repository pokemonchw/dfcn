// Native IDs and flag bits select these templates; no displayed text is read.
case 0: { // war_attacked_site, including both generals and mercenary clauses
    auto attacker = polity_subject(number("attacker"));
    auto defender = government_subject(number("site_civ"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!attacker || !defender || !site) return std::nullopt;
    if (number("site_civ") != number("defender_civ")) {
        auto civ = polity_subject(number("defender_civ"));
        if (!civ) return std::nullopt;
        defender = apply("{p} of {p}", {*defender, *civ});
        if (!defender) return std::nullopt;
    }
    const bool led_attack = number("attacker_general") != -1;
    if (led_attack) {
        auto general = subject(NativeHistoryObjectKind::Figure, number("attacker_general"));
        if (!general) return std::nullopt;
        attacker = apply("{a} of {a}", {*general, *attacker});
        if (!attacker) return std::nullopt;
    }
    auto attack = apply(led_attack ? "{a} led the attack on {a} at {p}" :
        "{a} attacked {a} at {p}", {*attacker, *defender, *site});
    if (!attack) return std::nullopt;
    join(result, *attack);
    for (const bool attacking : {true, false}) {
        // Keep the attacker's coordinated hiring before any defender subject.
        if (!attacking && number("defender_general") != -1) {
            auto general = subject(NativeHistoryObjectKind::Figure, number("defender_general"));
            if (!general) return std::nullopt;
            auto leadership = apply("The defenders were led by {a}", {*general});
            if (!leadership) return std::nullopt;
            append_clause(result, *leadership);
        }
        const int32_t id = number(attacking ? "attacker_mercenary" : "defender_mercenary");
        if (id == -1) continue;
        auto company = subject(NativeHistoryObjectKind::Entity, id);
        if (!company) return std::nullopt;
        const bool scouting = (number("mercenary_roles") & (attacking ? 1 : 2)) != 0;
        const char *key = attacking ?
            (scouting ? "and hired {a} as scouts" : "and hired {a}") :
            (scouting ? "The defenders hired {a} as scouts" : "The defenders hired {a}");
        auto hiring = apply(key, {*company});
        if (!hiring) return std::nullopt;
        append_clause(result, *hiring);
    }
    translated = true;
    break;
}
case 2: { // created_site
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!site) return std::nullopt;
    std::optional<Pieces> builder;
    if (number("builder") != -1) {
        builder = subject(NativeHistoryObjectKind::Figure, number("builder"));
    } else if (number("site_civ") != -1) {
        builder = government_subject(number("site_civ"));
        if (!builder) return std::nullopt;
        if (number("civ") != -1) {
            auto civ = polity_subject(number("civ"));
            if (!civ) return std::nullopt;
            builder = apply("{p} of {p}", {*builder, *civ});
        }
    } else builder = polity_subject(number("civ"));
    if (!builder) return std::nullopt;
    std::string key;
    if (number("site_type") == 10 && number("site_subtype") == 1)
        key = "{a} created {p}";
    else if (number("site_type") == 10 || number("site_type") == 8)
        key = "{a} constructed {p}";
    else key = "{a} founded {p}";
    std::vector<Pieces> arguments{*builder, *site};
    if (number("resident_civ") != -1) {
        auto resident = subject(NativeHistoryObjectKind::Entity, number("resident_civ"));
        if (!resident) return std::nullopt;
        arguments.push_back(*resident);
        key += " for {p}";
    }
    auto creation = apply(key, arguments);
    if (!creation) return std::nullopt;
    join(result, *creation);
    // The story title has the same founder, site, beneficiary and date
    // as the narrative, but it can be embedded inside another sentence.
    if (event.fields.contains("native_story_title")) return result;
    translated = true;
    break;
}
case 1: // war_destroyed_site
case 24: { // hf_destroyed_site
    auto attacker = event.native_type == 1 ? polity_subject(number("attacker")) :
        subject(NativeHistoryObjectKind::Figure, number("attacker"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!attacker || !site) return std::nullopt;
    std::optional<Pieces> action;
    if (event.native_type == 1 && (number("flags") & 1) != 0) {
        // NO_DEFEAT_MENTION omits the complete defender clause.
        action = apply("{a} destroyed {p}", {*attacker, *site});
    } else {
        auto defender = government_subject(number("site_civ"));
        if (!defender) return std::nullopt;
        if (number("site_civ") != number("defender_civ")) {
            auto civ = polity_subject(number("defender_civ"));
            if (!civ) return std::nullopt;
            defender = apply("{p} of {p}", {*defender, *civ});
            if (!defender) return std::nullopt;
        }
        action = apply(event.native_type == 1 ?
            "{a} defeated {a} and destroyed {p}" :
            "{n} routed {p} and destroyed {p}", {*attacker, *defender, *site});
    }
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 13: { // diplomat_lost
    auto entity = subject(NativeHistoryObjectKind::Entity, number("entity"));
    auto involved = subject(NativeHistoryObjectKind::Entity, number("involved"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!entity || !involved || !site) return std::nullopt;
    auto loss = apply("{a} lost a diplomat at {p}", {*entity, *site});
    auto suspicion = apply("They suspected the involvement of {a}", {*involved});
    if (!loss || !suspicion) return std::nullopt;
    join(result, *loss);
    append_clause(result, *suspicion);
    translated = true;
    break;
}
case 4: // add_hf_entity_link
case 5: { // remove_hf_entity_link
    auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
    auto entity = subject(NativeHistoryObjectKind::Entity, number("entity"));
    if (!actor || !entity) return std::nullopt;
    const bool adding = event.native_type == 4;
    const int32_t type = number("link_type");
    const bool has_title = (type == 10 || type == 12 || type == 13) &&
        !text("position").empty();
    std::optional<Pieces> action;
    if (has_title) {
        // The copied RAW field is an office title, including claims and
        // spouse titles. Resolve its office sense before generic UI terms.
        auto title = office(text("position"));
        if (!title) return std::nullopt;
        if (type == 12) {
            auto office = apply("{s} of {p}", {*title, *entity});
            if (!office) return std::nullopt;
            action = apply(adding ? "{a} became a claimant for {s}" :
                "{a} ceased to be a claimant for {s}", {*actor, *office});
        } else {
            action = apply(adding ? "{a} became the {s} of {p}" :
                "{a} ceased to be the {s} of {p}", {*actor, *title, *entity});
        }
    } else if (adding) {
        // Jump table b7efb0; slave and prisoner branch before "became".
        static constexpr const char *keys[] = {
            "{a} became a member of {p}", "{a} became a former member of {p}",
            "{a} became a mercenary for {p}", "{a} became a former mercenary of {p}",
            "{a} was enslaved by {a}", "{a} became a former slave of {p}",
            "{a} was imprisoned by {a}", "{a} became a former prisoner of {p}",
            "{a} became an enemy of {p}", "{a} became a criminal in the eyes of {p}",
            "{a} became {p}", "{a} became {p}", "{a} became {p}",
            "{a} became {p}", "{a} became {p}", "{a} became a worker of {p}",
        };
        action = apply(type >= 0 && type < 16 ? keys[type] : "{a} became {p}",
            {*actor, *entity});
    } else {
        // Jump table b7f45c; former membership/slavery/prison entries all
        // use the native "left" branch. Missing position titles emit no verb.
        static constexpr const char *keys[] = {
            "{a} left {p}", "{a} left {p}", "{a} left the service of {p}",
            "{a} left {p}", "{a} escaped from the slavery of {p}",
            "{a} left {p}", "{a} escaped from the prisons of {p}",
            "{a} left {p}", "{a} made peace with {p}",
            "{a} was brought to the justice of {p}", nullptr, nullptr, nullptr,
            nullptr, nullptr, "{a} stopped working for {p}",
        };
        if (type >= 0 && type < 16 && keys[type])
            action = apply(keys[type], {*actor, *entity});
        else {
            Pieces names = *actor;
            names.push_back(piece(" ", neutral));
            join(names, *entity);
            action = std::move(names);
        }
    }
    if (!action) return std::nullopt;
    join(result, *action);
    if (adding && number("appointer") != -1) {
        auto appointer = subject(NativeHistoryObjectKind::Figure, number("appointer"));
        if (!appointer) return std::nullopt;
        auto appointment = apply(", appointed by {a}", {*appointer});
        if (!appointment) return std::nullopt;
        append_clause(result, *appointment);
        if (number("promise_to") != -1 && number("appointer") != number("histfig")) {
            std::optional<Pieces> promise;
            if (number("promise_to") == number("histfig")) {
                promise = apply("in fulfillment of a promise", {});
            } else {
                auto promised = subject(NativeHistoryObjectKind::Figure, number("promise_to"));
                if (!promised) return std::nullopt;
                promise = apply("in fulfillment of a promise to {a}", {*promised});
            }
            if (!promise) return std::nullopt;
            append_clause(result, *promise);
        }
    }
    translated = true;
    break;
}
case 14: { // agreements_voided
    auto source = subject(NativeHistoryObjectKind::Entity, number("source"));
    auto destination = subject(NativeHistoryObjectKind::Entity, number("destination"));
    if (!source || !destination) return std::nullopt;
    auto action = apply("{a} voided all agreements with {p}", {*source, *destination});
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 15: { // merchant
    auto source = subject(NativeHistoryObjectKind::Entity, number("source"));
    auto destination = subject(NativeHistoryObjectKind::Entity, number("destination"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!source || !destination || !site) return std::nullopt;
    const int32_t flags = number("merchant_flags");
    auto traders = apply((flags & 0x20) != 0 ?
        "a caravan from {p}" : "merchants from {p}", {*source});
    if (!traders) return std::nullopt;
    auto visit = apply((flags & 0x20) != 0 ?
        "{a} delivered tribute to {p} at {p}" :
        "{a} visited {p} at {p}", {*traders, *destination, *site});
    if (!visit) return std::nullopt;
    join(result, *visit);
    const auto add_statement = [&](std::string_view key) {
        auto statement = apply(key, {});
        if (!statement) return false;
        append_clause(result, *statement);
        return true;
    };
    if ((flags & 1) != 0) {
        // ALLDEAD ends the native paragraph before hardship/seizure/profit.
        if (!add_statement("and were never heard from again")) return std::nullopt;
    } else {
        if ((flags & 2) != 0 && !add_statement("and suffered great hardships"))
            return std::nullopt;
        if ((flags & 4) != 0) {
            if (!add_statement("They reported a seizure of goods")) return std::nullopt;
        } else if ((flags & 8) != 0) {
            if (!add_statement("They were greatly offended by the locals")) return std::nullopt;
        }
        if ((flags & 0x20) == 0) {
            const int32_t initial = number("goods_initial"), final_value = number("goods_end");
            if (initial > final_value) {
                if (!add_statement("They reported irregularities with their goods"))
                    return std::nullopt;
            } else {
                // Preserve the native signed 32-bit tripling followed by
                // division toward zero, without signed-overflow UB in C++.
                const uint32_t triple_bits = static_cast<uint32_t>(initial) * 3u;
                int32_t triple = 0;
                std::memcpy(&triple, &triple_bits, sizeof(triple));
                if (final_value >= triple / 2 &&
                    !add_statement("The trade was highly profitable")) return std::nullopt;
            }
        }
    }
    translated = true;
    break;
}
case 16: // artifact_hidden
case 22: { // artifact_dropped
    auto artifact = subject(NativeHistoryObjectKind::Artifact, number("artifact"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!artifact || !site) return std::nullopt;
    std::optional<Pieces> action;
    if (event.native_type == 16) {
        if (number("histfig") == -1) {
            action = apply("{p} was hidden in {p}", {*artifact, *site});
        } else {
            auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
            if (!actor) return std::nullopt;
            action = apply("{p} was hidden in {p} by {n}", {*artifact, *site, *actor});
        }
    } else {
        auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
        if (!actor) return std::nullopt;
        action = apply("{p} was dropped by {n} in {p}", {*artifact, *actor, *site});
    }
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 17: { // artifact_possessed
    auto artifact = subject(NativeHistoryObjectKind::Artifact, number("artifact"));
    auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
    if (!artifact || !actor) return std::nullopt;
    std::string key = "{p} was acquired by {a}";
    std::vector<Pieces> arguments{*artifact, *actor};
    std::optional<Pieces> location;
    if (number("site") != -1)
        location = subject(NativeHistoryObjectKind::Site, number("site"));
    else if (number("layer") != -1)
        location = subject(NativeHistoryObjectKind::Underground, number("layer"));
    else if (number("region") != -1)
        location = subject(NativeHistoryObjectKind::Region, number("region"));
    if (number("site") != -1 || number("layer") != -1 || number("region") != -1) {
        if (!location) return std::nullopt;
        arguments.push_back(*location);
        key += " in {p}";
    }
    auto acquisition = apply(key, arguments);
    auto context = event_clauses();
    if (!acquisition || !context) return std::nullopt;
    join(result, *acquisition);
    append_clause(result, context->first);
    append_clause(result, context->second);
    translated = true;
    break;
}
case 23: { // reclaim_site
    const int32_t civ_id = number("civ"), site_civ_id = number("site_civ");
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!site) return std::nullopt;
    std::optional<Pieces> actor;
    if (site_civ_id != -1) {
        actor = government_subject(site_civ_id);
        if (!actor) return std::nullopt;
        if (civ_id != -1) {
            auto civ = polity_subject(civ_id);
            if (!civ) return std::nullopt;
            actor = apply("{p} of {p}", {*actor, *civ});
        }
    } else actor = polity_subject(civ_id);
    if (!actor) return std::nullopt;
    // IS_UNRETIRE is the questionable-judgment branch, not an expedition.
    auto action = apply((number("flags") & 1) != 0 ?
        "{a} were taken by a mood to act against their better judgment at {p}" :
        "{a} launched an expedition to reclaim {p}", {*actor, *site});
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 25: { // site_died
    auto entity = government_subject(number("site_civ"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!entity || !site) return std::nullopt;
    std::optional<Pieces> action;
    if ((number("flags") & 1) != 0) {
        action = apply("{a} abandoned the settlement of {p}", {*entity, *site});
    } else if (number("civ") == number("site_civ")) {
        action = apply("{a} and their settlement of {p} withered", {*entity, *site});
    } else {
        auto civ = polity_subject(number("civ"));
        if (!civ) return std::nullopt;
        action = apply("{a} and {a} settlement of {p} withered", {*entity, *civ, *site});
    }
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 26: { // site_retired
    auto entity = government_subject(number("site_civ"));
    auto civ = polity_subject(number("civ"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!entity || !civ || !site) return std::nullopt;
    // This formatter always includes both entity names, even if equal.
    auto actor = apply("{p} of {p}", {*entity, *civ});
    if (!actor) return std::nullopt;
    auto action = apply((number("flags") & 1) != 0 ?
        "{a} at the settlement of {p} regained their senses after an initial period of questionable judgment" :
        "{a} at the settlement of {p} regained their senses after another period of questionable judgment",
        {*actor, *site});
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 29: { // entity_incorporated
    auto migrant = subject(NativeHistoryObjectKind::Entity, number("migrant_entity"));
    auto target = subject(NativeHistoryObjectKind::Entity, number("join_entity"));
    if (!migrant || !target) return std::nullopt;
    std::vector<Pieces> arguments{*migrant, *target};
    std::string key = (number("flags") & 1) != 0 ?
        "{a} began operating at the direction of {a}" : "{a} fully incorporated into {p}";
    if (number("site") != -1) {
        auto site = subject(NativeHistoryObjectKind::Site, number("site"));
        if (!site) return std::nullopt;
        arguments.push_back(*site);
        key += " at {p}";
    }
    if (number("leader") != -1) {
        auto leader = subject(NativeHistoryObjectKind::Figure, number("leader"));
        if (!leader) return std::nullopt;
        // Leadership modifies the incorporation, not a detached afterthought.
        // The complete TSV production puts it before the Chinese predicate.
        arguments.push_back(*leader);
        key += " under the leadership of {n}";
    }
    auto action = apply(key, arguments);
    if (!action) return std::nullopt;
    join(result, *action);
    translated = true;
    break;
}
case 34: // add_hf_hf_link
case 35: { // remove_hf_hf_link
    const int32_t type = number("link_type");
    const bool reverse = context_number("histfig_id") == number("target");
    auto actor = subject(NativeHistoryObjectKind::Figure,
        number(reverse ? "target" : "histfig"));
    auto target = subject(NativeHistoryObjectKind::Figure,
        number(reverse ? "histfig" : "target"));
    if (!actor || !target) return std::nullopt;
    // Tables at b77aa8/b77ae8 and b77e58/b77e90 select both native
    // directions. Birth, parenthood, worship, custody and ownership are
    // intentionally asymmetric; current-figure context selects the view.
    static constexpr const char *added_forward[] = {
        "{a} was born to {n}", "{a} was sired by {n}", "{n} married {n}",
        "{a} became the parent of {n}", "{a} began worshipping {n}",
        "{a} became romantically involved with {n}", "{a} imprisoned {a}",
        "{a} was imprisoned by {a}", "{a} began an apprenticeship under {n}",
        "{a} became the master of {n}", "{a} began traveling with {n}",
        "{a} ceased being the apprentice of {n}", "{a} ceased being the master of {n}",
        "{a} became the pet of {n}", "{a} became the former spouse of {n}",
        "{a} became the spouse of the deceased {n}",
    };
    static constexpr const char *added_reverse[] = {
        "{a} gave birth to {n}", "{a} sired {n}", "{n} married {n}",
        "{a} was born to {n}", "{a} received the worship of {a}",
        "{a} became romantically involved with {n}", "{a} was imprisoned by {a}",
        "{a} imprisoned {a}", "{a} became the master of {n}",
        "{a} began an apprenticeship under {n}", "{a} began traveling with {n}",
        "{a} ceased being the master of {n}", "{a} ceased being the apprentice of {n}",
        "{a} became the owner of {a}", "{a} became the former spouse of {n}",
        "{a} became the deceased spouse of {n}",
    };
    static constexpr const char *removed_forward[] = {
        "{a} stopped being the child of {n}", "{a} stopped being the child of {n}",
        "{a} divorced {n}", "{a} stopped being the parent of {n}",
        "{a} lost faith in {n}", "{a} ended the romantic relationship with {n}",
        "{a} no longer imprisoned {a}", "{a} was no longer imprisoned by {a}",
        "{a} stopped being the apprentice of {n}", "{a} stopped being the master of {n}",
        "{a} stopped traveling with {n}", "{a} ceased being the apprentice of {n}",
        "{a} ceased being the master of {n}", "{a} stopped being the pet of {n}",
    };
    static constexpr const char *removed_reverse[] = {
        "{a} stopped being the mother of {n}", "{a} stopped being the father of {n}",
        "{a} divorced {n}", "{a} stopped being the child of {n}",
        "{a} lost the worship of {a}", "{a} ended the romantic relationship with {n}",
        "{a} was no longer imprisoned by {a}", "{a} no longer imprisoned {a}",
        "{a} stopped being the master of {n}", "{a} stopped being the apprentice of {n}",
        "{a} stopped traveling with {n}", "{a} ceased being the master of {n}",
        "{a} ceased being the apprentice of {n}", "{a} stopped being the owner of {a}",
    };
    const size_t count = event.native_type == 34 ? 16 : 14;
    if (type >= 0 && static_cast<size_t>(type) < count) {
        const char *key = event.native_type == 34 ?
            (reverse ? added_reverse[type] : added_forward[type]) :
            (reverse ? removed_reverse[type] : removed_forward[type]);
        auto relation = apply(key, {*actor, *target});
        if (!relation) return std::nullopt;
        join(result, *relation);
    } else {
        // The native default emits the two names without a relation verb.
        // Retain those identities without inventing an event explanation.
        join(result, *actor);
        result.push_back(piece(" ", neutral));
        join(result, *target);
    }
    translated = true;
    break;
}
case 6: // first_contact
case 7: // first_contact_failed
case 9: // topicagreement_rejected
case 10: // topicagreement_made
case 11: // war_peace_accepted
case 12: { // war_peace_rejected
    auto source = subject(NativeHistoryObjectKind::Entity, number("source"));
    auto destination = subject(NativeHistoryObjectKind::Entity, number("destination"));
    if (!source || !destination) return std::nullopt;
    std::optional<Pieces> action;
    if (event.native_type == 6 || event.native_type == 7 || event.native_type == 11 || event.native_type == 12) {
        join(result, event.native_type == 6 ? *source : *destination);
        const char *key = event.native_type == 6 ? "made contact with {p}" :
            event.native_type == 7 ? "rejected contact with {p}" :
            event.native_type == 11 ? "accepted an offer of peace from {p}" : "rejected an offer of peace from {p}";
        action = apply(key, {event.native_type == 6 ? *destination : *source});
    } else {
        static constexpr const char *topics[] = {
            "a vague agreement", "a peace agreement", "a lumber agreement",
            "the establishment of landed nobility", "the elevation of the landed nobility",
            "a trade agreement", "a trade agreement", "a vague agreement", "a vague agreement",
            "a tribute agreement", "a demand of unconditional surrender", "a vague agreement",
            "a vague agreement", "a declaration of war", "an alliance",
            "a strengthening of trade ties", "a strengthening of trade ties",
        };
        const int32_t type = number("topic");
        auto topic = term(type >= 0 && type < 17 ? topics[type] : "a vague agreement");
        if (!topic) return std::nullopt;
        if (event.native_type == 10 && type == 13)
            action = apply("{s} was made to {a} by {a}", {*topic, *destination, *source});
        else {
            auto proposal = apply("{e} proposed by {a}", {*topic, *source});
            if (!proposal) return std::nullopt;
            action = apply(event.native_type == 9 ? "{s} was rejected by {a}" :
                "{s} was accepted by {a}", {*proposal, *destination});
        }
    }
    if (!action) return std::nullopt;
    join(result, *action);
    if (number("site") != -1) {
        auto site = subject(NativeHistoryObjectKind::Site, number("site"));
        if (!site) return std::nullopt;
        auto place = apply("at {p}", {*site});
        if (!place) return std::nullopt;
        append_clause(result, *place);
    }
    auto support = diplomacy();
    if (!support) return std::nullopt;
    if (!support->empty()) { result.push_back(piece("。", neutral)); join(result, *support); }
    translated = true;
    break;
}
case 8: { // topicagreement_concluded
    static constexpr const char *topics[] = {
        "a vague agreement", "a peace agreement", "a lumber agreement",
        "the establishment of landed nobility", "the elevation of the landed nobility",
        "a trade agreement", "a trade agreement", "a vague agreement", "a vague agreement",
        "a tribute agreement", "a demand of unconditional surrender", "a vague agreement",
        "a vague agreement", "a declaration of war", "an alliance",
        "a strengthening of trade ties", "a strengthening of trade ties",
    };
    const int32_t topic_id = number("topic");
    auto topic = term(topic_id >= 0 && topic_id < 17 ? topics[topic_id] : "a vague agreement");
    auto source = subject(NativeHistoryObjectKind::Entity, number("source"));
    auto destination = subject(NativeHistoryObjectKind::Entity, number("destination"));
    if (!topic || !source || !destination) return std::nullopt;
    std::vector<Pieces> arguments{*topic, *source, *destination};
    std::string key = "{s} between {a} and {a}";
    if (number("site") != -1) {
        auto site = subject(NativeHistoryObjectKind::Site, number("site"));
        if (!site) return std::nullopt;
        arguments.push_back(*site);
        key += " at {p}";
    }
    auto agreement = apply(key + " concluded", arguments);
    if (!agreement) return std::nullopt;
    join(result, *agreement);
    static constexpr const char *outcomes[] = {
        "with miserable outcome", "in failure", "in an unsatisfactory fashion",
        "fairly", "with a positive outcome", ", cementing bonds of mutual trust",
    };
    const int32_t outcome = number("outcome");
    if (outcome >= -3 && outcome <= 2) {
        auto ending = apply(outcomes[outcome + 3], {});
        if (!ending) return std::nullopt;
        append_clause(result, *ending);
    }
    translated = true;
    break;
}
case 44: { // change_hf_state
    auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
    if (!actor) return std::nullopt;
    const int32_t state = number("state"), reason = number("reason");
    std::optional<Pieces> location;
    if (number("site") != -1) {
        location = subject(NativeHistoryObjectKind::Site, number("site"));
        if (!location) return std::nullopt;
        if (state == 0 || state == 2) location = apply("the area around {p}", {*location});
    } else if (number("layer") != -1)
        location = subject(NativeHistoryObjectKind::Underground, number("layer"));
    else if (number("region") != -1)
        location = subject(NativeHistoryObjectKind::Region, number("region"));
    else location = term("the wilds");
    if (!location) return std::nullopt;
    const char *key = nullptr;
    if (state == 2) key = "fled into {p}";
    else if (state == 0 || state == 1 || state == 5) {
        if (reason == 45) key = "fled to {p}";
        else if (reason == 46 || reason == 47) key = "moved to study in {p}";
        else if (reason == 91) key = "departed to {p}";
        else key = state == 0 ? "began wandering {p}" :
            state == 1 ? "settled in {p}" : "visited {p}";
    }
    join(result, *actor);
    if (key) {
        auto movement = apply(key, {*location});
        if (!movement) return std::nullopt;
        join(result, *movement);
    } else {
        result.push_back(piece(" ", neutral));
        join(result, *location);
    }
    // Refugee reason is already expressed by the movement verb. Every
    // other paragraph reason reaches the shared native reason dispatcher.
    if (reason != 45) {
        auto ending = event_clauses();
        if (!ending) return std::nullopt;
        append_clause(result, ending->first);
        append_clause(result, ending->second);
    }
    translated = true;
    break;
}
case 21: { // artifact_recovered
    auto artifact = subject(NativeHistoryObjectKind::Artifact, number("artifact"));
    auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
    if (!artifact || !actor) return std::nullopt;
    if (number("site") != -1 && number("structure") != -1) {
        auto building = structure(number("site"), number("structure"));
        auto site = subject(NativeHistoryObjectKind::Site, number("site"));
        if (!building || !site) return std::nullopt;
        auto recovery = apply("{p} was recovered by {a} from {p} in {p}",
            {*artifact, *actor, *building, *site});
        if (!recovery) return std::nullopt;
        join(result, *recovery);
    } else {
        auto recovery = apply("{p} was recovered by {a}", {*artifact, *actor});
        if (!recovery) return std::nullopt;
        join(result, *recovery);
        std::optional<Pieces> location;
        if (number("site") != -1)
            location = subject(NativeHistoryObjectKind::Site, number("site"));
        else if (number("layer") != -1)
            location = subject(NativeHistoryObjectKind::Underground, number("layer"));
        else if (number("region") != -1)
            location = subject(NativeHistoryObjectKind::Region, number("region"));
        if (number("site") != -1 || number("layer") != -1 || number("region") != -1) {
            if (!location) return std::nullopt;
            auto place = apply("in {p}", {*location});
            if (!place) return std::nullopt;
            append_clause(result, *place);
        }
    }
    translated = true;
    break;
}
case 27: // entity_created
case 28: { // entity_action
    auto entity = subject(NativeHistoryObjectKind::Entity, number("entity"));
    if (!entity) return std::nullopt;
    std::string key;
    std::vector<Pieces> arguments{*entity};
    if (event.native_type == 27) {
        if (number("creator") != -1) {
            auto creator = subject(NativeHistoryObjectKind::Figure, number("creator"));
            if (!creator) return std::nullopt;
            key = "{a} formed {p}";
            arguments = {*creator, *entity};
        } else key = "{a} formed";
    } else if (number("action") == 0 || number("action") == 1) {
        key = number("action") == 0 ?
            "{a} became the primary criminal organization" : "{a} moved";
    }
    std::optional<Pieces> location;
    if (number("site") != -1) {
        location = subject(NativeHistoryObjectKind::Site, number("site"));
        if (!location) return std::nullopt;
        if (number("structure") != -1) {
            auto building = structure(number("site"), number("structure"));
            if (!building) return std::nullopt;
            // One typed location: site + building. Both original links and
            // colors survive the existing participant-ordering template.
            location = apply("{p} of {p}", {*building, *location});
            if (!location) return std::nullopt;
        }
    }
    if (key.empty()) {
        // Native unknown action IDs print the names without a predicate.
        join(result, *entity);
        if (location) append_clause(result, *location);
    } else {
        if (location) {
            key += event.native_type == 28 && number("action") == 1 ?
                " to {p}" : " in {p}";
            arguments.push_back(*location);
        }
        // Select the complete shared production, whose location precedes
        // its predicate. Never append two comma-separated "in" fragments.
        auto action = apply(key, arguments);
        if (!action) return std::nullopt;
        join(result, *action);
    }
    translated = true;
    break;
}
case 31: { // replaced_building
    std::optional<Pieces> actor;
    if (number("site_civ") != -1) {
        actor = government_subject(number("site_civ"));
        if (!actor) return std::nullopt;
        if (number("civ") != -1) {
            auto civ = polity_subject(number("civ"));
            if (!civ) return std::nullopt;
            actor = apply("{p} of {p}", {*actor, *civ});
        }
    } else actor = polity_subject(number("civ"));
    auto former = structure(number("site"), number("old_structure"));
    auto replacement = structure(number("site"), number("new_structure"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!actor || !former || !replacement || !site) return std::nullopt;
    auto action = apply("replaced {p} with {p}", {*former, *replacement});
    auto place = apply("in {p}", {*site});
    if (!action || !place) return std::nullopt;
    join(result, *actor);
    join(result, *action);
    append_clause(result, *place);
    translated = true;
    break;
}
case 36: { // entity_razed_building
    auto actor = subject(NativeHistoryObjectKind::Entity, number("civ"));
    auto building = structure(number("site"), number("structure"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!actor || !building || !site) return std::nullopt;
    auto destruction = apply("razed {p}", {*building});
    auto place = apply("in {p}", {*site});
    if (!destruction || !place) return std::nullopt;
    join(result, *actor);
    join(result, *destruction);
    append_clause(result, *place);
    translated = true;
    break;
}
case 19: // artifact_lost
case 20: { // artifact_found
    auto artifact = subject(NativeHistoryObjectKind::Artifact, number("artifact"));
    if (!artifact) return std::nullopt;
    std::optional<Pieces> action;
    if (event.native_type == 20) {
        auto finder = subject(NativeHistoryObjectKind::Figure, number("histfig"));
        if (!finder) return std::nullopt;
        action = apply("{p} was found by {a}", {*artifact, *finder});
    } else action = apply("{p} was lost", {*artifact});
    if (!action) return std::nullopt;
    join(result, *action);
    if (number("site") != -1 && number("property") != -1) {
        auto property = text("property_label").empty() ?
            structure(number("site"), number("property_label")) : term(text("property_label"));
        if (!property) return std::nullopt;
        auto within = apply("in {p}", {*property});
        if (!within) return std::nullopt;
        append_clause(result, *within);
    }
    std::optional<Pieces> location;
    if (number("site") != -1)
        location = subject(NativeHistoryObjectKind::Site, number("site"));
    else if (number("layer") != -1)
        location = subject(NativeHistoryObjectKind::Underground, number("layer"));
    else if (number("region") != -1)
        location = subject(NativeHistoryObjectKind::Region, number("region"));
    if (number("site") != -1 || number("layer") != -1 || number("region") != -1) {
        if (!location) return std::nullopt;
        auto within = apply("in {p}", {*location});
        if (!within) return std::nullopt;
        append_clause(result, *within);
    }
    translated = true;
    break;
}
case 30: { // created_building
    std::optional<Pieces> actor;
    if (number("builder") != -1)
        actor = subject(NativeHistoryObjectKind::Figure, number("builder"));
    else if (number("site_civ") != -1) {
        actor = government_subject(number("site_civ"));
        if (!actor) return std::nullopt;
        if (number("civ") != -1) {
            auto civ = polity_subject(number("civ"));
            if (!civ) return std::nullopt;
            actor = apply("{p} of {p}", {*actor, *civ});
        }
    } else actor = polity_subject(number("civ"));
    auto building = structure(number("site"), number("structure"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!actor || !building || !site) return std::nullopt;
    const bool underworld_spire = structure_type(number("site"), number("structure")) == 7;
    const char *key = underworld_spire ?
        "thrust a spire of slade up from the underworld, naming it {p}, and established a gateway between worlds in {p}" :
        (number("flags") & 1) ? "rebuilt {p} in {p}" : "constructed {p} in {p}";
    // Keep the location inside the predicate so the Chinese template can
    // place it before the verb while retaining the building/site links.
    auto creation = apply(key, {*building, *site});
    if (!creation) return std::nullopt;
    join(result, *actor);
    join(result, *creation);
    translated = true;
    break;
}
case 32: // add_hf_site_link
case 33: { // remove_hf_site_link
    auto actor = subject(NativeHistoryObjectKind::Figure, number("histfig"));
    auto site = subject(NativeHistoryObjectKind::Site, number("site"));
    if (!actor || !site) return std::nullopt;
    std::optional<Pieces> destination = *site;
    if (number("structure") != -1) {
        destination = structure(number("site"), number("structure"));
        if (!destination) return std::nullopt;
        if (number("civ") != -1) {
            auto civ = subject(NativeHistoryObjectKind::Entity, number("civ"));
            if (!civ) return std::nullopt;
            destination = apply("{p} of {p}", {*destination, *civ});
        }
    }
    if (!destination) return std::nullopt;
    static constexpr const char *added[] = {
        "started working at {p}", "ruled from {p}", "started hanging out at {p}",
        "took up residence in {p}", "took up residence in {p}", "laired within {p}",
        "took up residence in {p}", "took up residence in {p}",
        "was imprisoned in {p}", "was imprisoned in {p}",
    };
    static constexpr const char *removed[] = {
        "stopped working at {p}", "stopped ruling from {p}", "stopped hanging out at {p}",
        "moved out of {p}", "moved out of {p}", "moved out of {p}",
        "moved out of {p}", "moved out of {p}", "escaped from {p}", "escaped from {p}",
    };
    const int32_t type = number("link_type");
    join(result, *actor);
    if (type >= 0 && type < 10) {
        auto relation = apply(event.native_type == 32 ? added[type] : removed[type], {*destination});
        if (!relation) return std::nullopt;
        join(result, *relation);
    } else {
        result.push_back(piece(" ", neutral));
        join(result, *destination);
    }
    if (number("structure") != -1) {
        auto place = apply("in {p}", {*site});
        if (!place) return std::nullopt;
        append_clause(result, *place);
    }
    translated = true;
    break;
}
case 3: { // hist_figure_died
    const int32_t cause = number("death_cause");
    auto victim = subject(NativeHistoryObjectKind::Figure, number("victim"));
    if (!victim) return std::nullopt;
    std::optional<Pieces> location;
    if (number("site") != -1) location = subject(NativeHistoryObjectKind::Site, number("site"));
    else if (number("layer") != -1) location = subject(NativeHistoryObjectKind::Underground, number("layer"));
    else if (number("region") != -1) location = subject(NativeHistoryObjectKind::Region, number("region"));
    if ((number("site") != -1 || number("layer") != -1 || number("region") != -1) && !location)
        return std::nullopt;
    const auto killer = [&]() -> std::optional<Pieces> {
        if (number("slayer") != -1)
            return subject(NativeHistoryObjectKind::Figure, number("slayer"));
        if (number("slayer_race") != -1) {
            // This is a captured RAW caste, including extension species.
            // Preserve only an unknown caste instead of rejecting the event.
            const auto &source = text("slayer_species");
            auto species = translate_creature_descriptor(source, true);
            if (!species) species = preserve_field(source, "creature-species");
            return Pieces{piece(*species, neutral)};
        }
        return Pieces{};
    };
    const auto weapon = [&](const char *role) -> std::optional<Pieces> {
        const int32_t artifact = number(std::string(role) + "_artifact");
        if (artifact != -1) return subject(NativeHistoryObjectKind::Artifact, artifact);
        if (number(std::string(role) + "_type") == -1) return Pieces{};
        return item(role);
    };
    const auto add_weapons = [&]() -> bool {
        auto projectile = weapon("weapon"), launcher = weapon("shooter");
        if (!projectile || !launcher) return false;
        std::optional<Pieces> equipment;
        if (!projectile->empty() && !launcher->empty())
            equipment = apply("with {i} from {i}", {*projectile, *launcher});
        else if (!projectile->empty() || !launcher->empty())
            equipment = apply("with {i}", {projectile->empty() ? *launcher : *projectile});
        else return true;
        if (!equipment) return false;
        append_clause(result, *equipment);
        return true;
    };
    // b72344 indexes b722ec only for the slayer's native perspective.
    const char *active = nullptr;
    if (number("slayer") != -1 && context_number("histfig_id") == number("slayer")) {
        switch (cause) {
        case 3: active = "shot and killed {a}"; break;
        case 4: case 6: active = "mortally wounded {a}"; break;
        case 7: active = "struck down {a}"; break;
        case 9: active = "threw {a} against an obstacle, causing immediate death"; break;
        case 12: active = "burned {a} in dragon fire"; break;
        case 13: active = "burned {a} to death"; break;
        case 20: active = "murdered {a}"; break;
        case 27: active = "threw {a} into a pit of spikes"; break;
        case 31: active = "beheaded {a}"; break;
        case 32: active = "crucified {a}"; break;
        case 33: active = "buried {a} alive"; break;
        case 34: active = "drowned {a}"; break;
        case 35: active = "burned {a} alive"; break;
        case 36: active = "fed {a} to beasts"; break;
        case 37: active = "hacked {a} to pieces"; break;
        case 38: active = "left {a} out in the air"; break;
        case 45: active = "scared {a} to death"; break;
        case 48: active = "drained {a} of blood"; break;
        case 49: active = "slaughtered {a}"; break;
        case 54: active = "executed {a}"; break;
        default: break;
        }
    }
    if (active) {
        auto actor = killer();
        std::string key = active;
        std::vector<Pieces> fields{*victim};
        if (location) {
            key += " in {p}";
            fields.push_back(*location);
        }
        // Keep the location inside the shared predicate so its Chinese
        // order is actor + location + killing + victim, with links intact.
        auto action = apply(key, fields);
        if (!actor || actor->empty() || !action) return std::nullopt;
        join(result, *actor);
        join(result, *action);
        if (cause == 4 || cause == 6) {
            auto ending = apply(cause == 4 ? ", who bled to death" : ", who suffocated", {});
            if (!ending) return std::nullopt;
            append_clause(result, *ending);
        }
        if ((cause == 3 || cause == 4 || cause == 6 || cause == 7 || cause == 49) &&
            !add_weapons()) return std::nullopt;
    } else {
        // Complete b72378 death-cause table. Unknown values add no predicate.
        static constexpr const char *passive[] = {
            "died of old age", "starved to death", "died of thirst", "was shot and killed",
            "bled to death", "drowned", "suffocated", "was struck down", "was scuttled",
            "died after colliding with an obstacle", "burned up in magma", "burned up in a magma mist",
            nullptr, nullptr, "was scalded to death", "was crushed under a collapsing ceiling",
            "was crushed by a drawbridge", "was killed by falling rocks", "fell into a deep chasm",
            "died in a cage", "was murdered", "was killed by a trap", nullptr,
            "starved to death", "starved to death", "died in the heat", "froze to death",
            "was impaled on spikes", "was encased in cooling lava", "was encased in cooling magma",
            "was encased in ice", "was beheaded", "was crucified", "was buried alive", "was drowned",
            "was burned alive", "was fed to beasts", "was hacked to pieces", "was left out in the air",
            "boiled", "melted", "condensed", "solidified", "succumbed to infection", "was put to rest",
            "was scared to death", "died in the dark", "collapsed", "was drained of blood",
            "was slaughtered", "was killed by a vehicle", "was killed by a flying object",
            "leapt from a great height", "drowned oneself", "was executed",
        };
        join(result, *victim);
        const bool has_killer = number("slayer") != -1 || number("slayer_race") != -1;
        std::optional<Pieces> action;
        if (cause == 12 || cause == 13 || cause == 22) {
            if (has_killer) {
                auto actor = killer();
                if (!actor || actor->empty()) return std::nullopt;
                const char *key = cause == 22 ? "was banished by {a}" :
                    cause == 12 ? "burned up in {n}'s dragon fire" : "was burned to death by {n}'s fire";
                action = apply(key, {*actor});
            } else action = apply(cause == 12 ? "burned up in dragon fire" :
                cause == 13 ? "burned to death" : "vanished", {});
        } else if (cause >= 0 && cause < 55) {
            const bool direct_killer = cause == 3 || cause == 7 || cause == 20 ||
                (cause >= 31 && cause <= 38) || cause == 45 || cause == 48 || cause == 49 || cause == 54;
            std::string key = passive[cause];
            std::vector<Pieces> fields;
            if (direct_killer && has_killer) {
                auto actor = killer();
                if (!actor || actor->empty()) return std::nullopt;
                key += " by {a}";
                fields.push_back(*actor);
            }
            // The shared action template places the location before the
            // killing, preserving each name's color and native reference.
            if (cause == 7 && location) {
                key += " in {p}";
                fields.push_back(*location);
            }
            action = apply(key, fields);
        } else action = Pieces{};
        if (!action) return std::nullopt;
        join(result, *action);
        if (cause == 4 || cause == 6 || cause == 9 || cause == 27 || cause == 43 || cause == 47) {
            if (has_killer) {
                auto actor = killer();
                if (!actor || actor->empty()) return std::nullopt;
                auto slain = apply(cause == 47 ? ", struck down by {a}" : ", slain by {a}", {*actor});
                if (!slain) return std::nullopt;
                append_clause(result, *slain);
            } else if ((cause == 4 || cause == 6 || cause == 47) &&
                (number("weapon_artifact") != -1 || number("weapon_type") != -1 ||
                    number("shooter_artifact") != -1 || number("shooter_type") != -1)) {
                auto slain = apply(cause == 47 ? ", struck down" : ", slain", {});
                if (!slain) return std::nullopt;
                append_clause(result, *slain);
            }
        }
        if ((cause == 3 || cause == 4 || cause == 6 || cause == 7 || cause == 47 || cause == 49) &&
            !add_weapons()) return std::nullopt;
    }
    if (location && !active && cause != 7) {
        auto place = apply("in {p}", {*location});
        if (!place) return std::nullopt;
        append_clause(result, *place);
    }
    translated = true;
    break;
}
case 37: // masterpiece_created_arch_construct
case 38: // masterpiece_created_item
case 39: // masterpiece_created_dye_item
case 40: // masterpiece_created_item_improvement
case 41: // masterpiece_created_food
case 42: // masterpiece_created_engraving
case 43: { // masterpiece_lost includes the complete typed creation title.
    const bool title_mode = event.native_type == 43;
    const std::string prefix = title_mode ? "creation." : "";
    const int32_t type = title_mode ? number("creation.type") : event.native_type;
    const auto value = [&](const char *key) { return number(prefix + key); };
    std::optional<Pieces> work;
    if (type == -1 && title_mode) work = apply("a masterpiece", {});
    else if (title_mode && (type < 37 || type > 42))
        work = story(number("creation_event"));
    else {
        auto maker = subject(NativeHistoryObjectKind::Figure, value("maker"));
        if (!maker) return std::nullopt;
        std::optional<Pieces> object;
        if (type == 37) object = term(text("construction"));
        else if (type == 38 || type == 39 || type == 40) object = item("item");
        else if (type == 41) {
            auto food = translate_legends_item(text(prefix + "food"));
            if (food) object = Pieces{piece(*food, neutral)};
        }
        if (type != 42 && !object) return std::nullopt;
        if (type == 37)
            work = title_mode ? apply("{i} masterfully constructed by {n}", {*object, *maker}) :
                apply("constructed a masterful {i}", {*object});
        else if (type == 38 || type == 41) {
            work = apply(title_mode ? "the masterful {i}" :
                type == 38 ? "created a masterful {i}" : "prepared a masterful {i}", {*object});
            if (work && title_mode)
                work = apply(type == 38 ? "{i} created by {n}" : "{i} prepared by {n}", {*work, *maker});
        } else if (type == 39) {
            auto dye = material();
            if (!dye) return std::nullopt;
            if (title_mode) {
                work = apply("{i} masterfully dyed with {i}", {*object, *dye});
                if (work) work = apply("{e} by {a}", {*work, *maker});
            } else {
                work = apply("masterfully dyed a {i}", {*object});
                auto color = apply("with {i}", {*dye});
                if (!work || !color) return std::nullopt;
                append_clause(*work, *color);
            }
        } else if (type == 40) {
            static constexpr const char *actions[] = {
                "added a masterful image", "added a masterful covering", "added masterful rings",
                "added masterful bands", "added masterful spikes", nullptr, "added masterful thread",
                "added masterful cloth", "wove a masterful sewn image", "masterfully wrote",
                "created a masterful illustration", "attached a masterful instrument piece",
                "masterfully wrote", "created a masterful image set", "added masterful coloration",
            };
            static constexpr const char *titles[] = {
                "addition of a masterful image", "addition of a masterful covering", "addition of masterful rings",
                "addition of masterful bands", "addition of masterful spikes", nullptr, "addition of masterful thread",
                "addition of masterful cloth", "weaving of a masterful sewn image", "writing of a masterpiece",
                "creation of a masterful illustration", "addition of a masterful instrument piece",
                "writing of a masterpiece", "creation of a masterful image set", "addition of masterful coloration",
            };
            const int32_t improvement = value("improvement"), subtype = value("improvement_subtype");
            const char *key = title_mode ? "making of a masterful improvement" : "made a masterful improvement";
            if (improvement >= 0 && improvement < 15 && improvement != 5)
                key = title_mode ? titles[improvement] : actions[improvement];
            else if (improvement == 5 && subtype >= 0 && subtype <= 3) {
                static constexpr const char *action_parts[] = {"added a masterful handle", "added masterful rollers",
                    "added a masterful rope", "added a masterful chain"};
                // The native title itself uses "added" for its rope/chain arms.
                static constexpr const char *title_parts[] = {"addition of a masterful handle", "addition of masterful rollers",
                    "added a masterful rope", "added a masterful chain"};
                key = title_mode ? title_parts[subtype] : action_parts[subtype];
            }
            if (title_mode) {
                work = apply(key, {});
                if (work) work = apply("{e} to {i}", {*work, *object});
            } else work = apply(std::string(key) + " to a {i}", {*object});
            if (!work) return std::nullopt;
            if (value("art_present") != 0) {
                auto name = subject(NativeHistoryObjectKind::ArtImage, value("art_chunk"), false, value("art_image"));
                if (!name) return std::nullopt;
                auto caption = apply("\"{b}\"", {*name});
                if (!caption) return std::nullopt;
                join(*work, *caption);
            }
            if (value("improvement_mat_type") != -1) {
                auto substance = material();
                if (!substance) return std::nullopt;
                auto medium = apply("in {i}", {*substance});
                if (!medium) return std::nullopt;
                append_clause(*work, *medium);
            }
            if (title_mode) work = apply("{e} by {a}", {*work, *maker});
        } else if (type == 42) {
            work = apply(title_mode ? "the masterful engraving" : "created a masterful engraving", {});
            if (!work) return std::nullopt;
            if (value("art_present") != 0) {
                auto name = subject(NativeHistoryObjectKind::ArtImage, value("art_chunk"), false, value("art_image"));
                if (!name) return std::nullopt;
                auto caption = apply("\"{b}\"", {*name});
                if (!caption) return std::nullopt;
                join(*work, *caption);
            }
            if (title_mode) work = apply("{i} created by {n}", {*work, *maker});
        } else return std::nullopt;
        if (!work) return std::nullopt;
        if (!title_mode) {
            Pieces sentence = *maker;
            join(sentence, *work);
            work = std::move(sentence);
        }
        // All d8 titles, and d0 architecture/dye/improvement/food, print
        // both affiliations even when their native helper supplies unknown.
        const bool mandatory_place = title_mode || (type != 38 && type != 42);
        if (mandatory_place || (value("entity") != -1 && value("site") != -1)) {
            auto entity = subject(NativeHistoryObjectKind::Entity, value("entity"));
            auto site = subject(NativeHistoryObjectKind::Site, value("site"));
            if (!entity || !site) return std::nullopt;
            auto commission = apply("for {a} at {p}", {*entity, *site});
            if (!commission) return std::nullopt;
            append_clause(*work, *commission);
        } else {
            if (value("entity") != -1) {
                auto entity = subject(NativeHistoryObjectKind::Entity, value("entity"));
                if (!entity) return std::nullopt;
                auto commission = apply("for {a}", {*entity});
                if (!commission) return std::nullopt;
                append_clause(*work, *commission);
            }
            if (value("site") != -1) {
                auto site = subject(NativeHistoryObjectKind::Site, value("site"));
                if (!site) return std::nullopt;
                auto place = apply("at {p}", {*site});
                if (!place) return std::nullopt;
                append_clause(*work, *place);
            }
        }
        if (title_mode) {
            auto date = date_phrase(value("year"), value("seconds"));
            if (!date) return std::nullopt;
            work = apply("{e} in {s}", {*work, *date});
        }
    }
    if (!work) return std::nullopt;
    if (!title_mode) join(result, *work);
    else {
        const int32_t destroyer = number("destroyer");
        std::optional<Pieces> destruction;
        if (destroyer != -1 && context_number("histfig_id") == destroyer) {
            auto actor = subject(NativeHistoryObjectKind::Figure, destroyer);
            auto action = apply("destroyed {p}", {*work});
            if (!actor || !action) return std::nullopt;
            destruction = *actor;
            join(*destruction, *action);
        } else if (destroyer != -1) {
            auto actor = subject(NativeHistoryObjectKind::Figure, destroyer);
            if (!actor) return std::nullopt;
            destruction = apply("{p} was destroyed by {a}", {*work, *actor});
        } else destruction = apply("{p} was destroyed", {*work});
        if (!destruction) return std::nullopt;
        join(result, *destruction);
        static constexpr const char *causes[] = {"by melting", "by magma", "during fortification carving",
            "during mining", "by falling debris", "by growing vegetation"};
        const int32_t cause = number("loss_cause");
        if (cause >= 0 && cause < 6) {
            auto loss = apply(causes[cause], {});
            if (!loss) return std::nullopt;
            append_clause(result, *loss);
        }
        if (number("site") != -1) {
            auto site = subject(NativeHistoryObjectKind::Site, number("site"));
            if (!site) return std::nullopt;
            auto place = apply("at {p}", {*site});
            if (!place) return std::nullopt;
            append_clause(result, *place);
        }
    }
    translated = true;
    break;
}
