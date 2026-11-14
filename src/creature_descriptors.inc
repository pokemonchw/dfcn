// Scoped species/caste grammar shared by Legends, jokes and item materials.
// Ordinary UI words (Adept, Spirit, Master, Force...) must not decide the
// meaning of a creature's generated identity.
#include "creature_vocabulary.inc"

static const std::unordered_map<std::string_view, std::string_view> &
vanilla_were_species_translations() {
    return creature_name_were_species;
}

static std::optional<std::string_view> translate_vanilla_were_species(
        std::string_view source) {
    const auto &values = vanilla_were_species_translations();
    if (const auto found = values.find(source); found != values.end())
        return found->second;
    if (const auto found = creature_name_were_plural.find(source);
        found != creature_name_were_plural.end()) return found->second;

    // Keep the native first-word spelling only when it identifies one animal.
    auto abbreviated = [&](std::string_view stem) -> std::optional<std::string_view> {
        if (stem.empty() || stem.find(' ') != std::string_view::npos) return std::nullopt;
        const std::string prefix = std::string(stem) + " ";
        std::optional<std::string_view> resolved;
        for (const auto &[name, target] : values) {
            if (!name.starts_with(prefix)) continue;
            if (resolved && *resolved != target) return std::nullopt;
            resolved = target;
        }
        return resolved;
    };
    if (auto target = abbreviated(source)) return target;
    if (source.ends_with('s')) return abbreviated(source.substr(0, source.size() - 1));
    return std::nullopt;
}

// RAW-use annotations are separate from the species/caste noun. Consume
// complete known tags only, retaining their order and the noun's own parser.
template<class TranslateName>
static std::optional<std::string> translate_raw_use_tagged_name(
        std::string_view source, TranslateName &&translate_name) {
    source = trim_view(source);
    std::string tags;
    while (source.ends_with(']')) {
        const size_t at = source.rfind(" [");
        if (at == std::string_view::npos) break;
        std::vector<size_t> origins;
        const auto tag = RULESETS.translate_with_origins(
            native_text_to_utf8(source.substr(at + 1)),
            "::item_tagger::tags::tag", origins);
        if (!tag) return std::nullopt;
        tags.insert(0, " " + *tag);
        source = trim_view(source.substr(0, at));
    }
    if (tags.empty() || source.empty()) return std::nullopt;
    if (auto name = translate_name(source)) return *name + tags;
    return std::nullopt;
}

std::optional<std::string> Overlay::translate_creature_descriptor(
        std::string_view source, bool require_species, bool static_only) const {
    std::string normalized;
    std::istringstream words{std::string(source)};
    for (std::string word; words >> word;) {
        if (!normalized.empty()) normalized += ' ';
        normalized += word;
    }
    if (normalized.empty()) return std::nullopt;
    if (auto tagged = translate_raw_use_tagged_name(normalized,
            [&](std::string_view name) {
                return translate_creature_descriptor(name, true, static_only);
            }))
        return tagged;
    auto complete = [](const std::optional<std::string> &value) {
        // These lookups and grammars resolve the entire source field. Their
        // reviewed output may retain form letters, e.g. 超级超梦Y; the output
        // alphabet does not determine whether the source was fully covered.
        return value && !value->empty();
    };
    auto lookup = [](const auto &table, std::string_view value)
            -> std::optional<std::string> {
        const auto found = table.find(lower(std::string(value)));
        if (found == table.end()) return std::nullopt;
        return std::string(found->second);
    };
    auto literal = [&](std::string_view value) -> std::optional<std::string> {
        auto target = exact_literal_translation(value);
        if (complete(target)) return target;
        // Several reviewed source entries, including Maelstrom priest and
        // Necromancer, deliberately use a title-case UI spelling.
        std::string caption = lower(std::string(value));
        if (!caption.empty() && caption.front() >= 'a' && caption.front() <= 'z')
            caption.front() -= 'a' - 'A';
        target = exact_literal_translation(caption);
        if (complete(target)) return target;
        return std::nullopt;
    };
    auto species = [&](std::string_view value) -> std::optional<std::string> {
        // A complete UI translation is not evidence of a species. In item
        // material fields, admit only RAW-backed names or the typed creature
        // grammar below, so commands cannot turn into material prefixes.
        auto target = RULESETS.translate_static_creature_name(cp437_to_utf8(lower(std::string(value))));
        if (!complete(target)) return std::nullopt;
        if (auto reviewed = literal(value)) return reviewed;
        return target;
    };
    auto species_adjective = [&](std::string_view value) -> std::optional<std::string> {
        if (auto target = species(value)) return target;
        if (auto target = lookup(creature_name_kind_adjective, value)) return target;
        auto target = lookup(creature_name_race_adjective, value);
        return complete(target) ? target : std::nullopt;
    };
    auto kind = [&](std::string_view value) -> std::optional<std::string> {
        if (auto target = lookup(creature_name_kind, value)) return target;
        return lookup(creature_name_kind_adjective, value);
    };

    // DF's native animal formatter adds these training roles to the RAW
    // caste name. Resolve their shared purpose wording before an old whole
    // label can retain the ordinary war/hunting word sense. The remainder
    // still has to be a complete typed creature, including extension names.
    const std::string folded_training = lower(normalized);
    for (const std::string_view training : {"war ", "hunting "}) {
        if (!folded_training.starts_with(training)) continue;
        const auto purpose = RULESETS.compose_bound_rule(
            "::creatures::caste::name::purpose", std::string(training));
        const auto animal = translate_creature_descriptor(
            std::string_view(normalized).substr(training.size()), true, static_only);
        return purpose && animal
            ? std::optional<std::string>(*purpose + *animal) : std::nullopt;
    }

    // Native identities place resurrection/form status BEFORE a complete
    // species/caste, whereas generated castes can put e.g. "zombie" at the
    // end. Reuse the biography's reviewed prefixes for the former without
    // making every creature-kind noun an arbitrary modifier.
    std::string status_target;
    const std::string folded_status = lower(normalized);
    std::string_view remaining(normalized), remaining_folded(folded_status);
    unsigned status_count = 0;
    for (;;) {
        size_t prefix_size = 0;
        std::string_view prefix_target;
        for (const auto &[prefix, target] : creature_name_status_prefix) {
            if (prefix.size() > prefix_size && remaining_folded.size() > prefix.size() &&
                remaining_folded.starts_with(prefix) && remaining_folded[prefix.size()] == ' ') {
                prefix_size = prefix.size();
                prefix_target = target;
            }
        }
        if (prefix_size == 0) break;
        if (++status_count > 16) return std::nullopt;
        status_target += prefix_target;
        remaining.remove_prefix(prefix_size + 1);
        remaining_folded.remove_prefix(prefix_size + 1);
    }
    if (status_count != 0) {
        // Preserve established whole-caste wording first. Otherwise require
        // an actual RAW-backed/typed creature, not just any translated UI word
        // following a status prefix. The remaining text has NO leading status
        // prefix, so this call cannot recurse through the same prefix chain.
        if (auto known = require_species ? species(normalized) : literal(normalized)) return known;
        const auto base = translate_creature_descriptor(remaining, true, static_only);
        return base ? std::optional<std::string>(status_target + *base) : std::nullopt;
    }

    // The native deity form (PE c2b870 / c288b0) places independent
    // skeletal/rotting/ghostly flags before its optional sex and caste noun.
    // Resolve sex here, after status recursion, so every native combination
    // reaches the same complete RAW/generated species grammar.
    for (const auto &[sex, marker] : {
            std::pair<std::string_view, std::string_view>{"female ", "（♀）"},
            {"male ", "（♂）"}}) {
        if (!folded_status.starts_with(sex)) continue;
        if (auto known = species(normalized)) return known;
        const auto base = translate_creature_descriptor(
            std::string_view(normalized).substr(sex.size()), true, static_only);
        return base ? std::optional<std::string>(*base + std::string(marker)) : std::nullopt;
    }

    // Untyped captions may prefer a complete known RAW name over item or
    // anatomy homonyms. They must not use generated owners/profiles or
    // personal-name fallback as evidence that an arbitrary noun is a unit.
    if (static_only) return species(normalized);

    // Installed RAW names may contain punctuation (e.g. Mr. Rime). Their
    // complete identity, including the training/status wrappers above, is
    // licensed by the scoped species table. Keep punctuation out of the
    // generated grammar so `{n} the {s}` cannot swallow biographical prose
    // such as `... was a roc. He was ... mists` as an owner name.
    if (!std::all_of(normalized.begin(), normalized.end(), [](unsigned char ch) {
            return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                (ch >= '0' && ch <= '9') || is_cp437_latin_letter_byte(ch) ||
                ch == ' ' || ch == '-' || ch == '\'';
        })) return species(normalized);

    // Owners come from native first names, native/translated compounds, or
    // explicit "The ..." epithets. They are not arbitrary capitalized prose.
    auto native_word_languages = [&](std::string_view value) {
        const std::string word = lower_native_name(std::string(value));
        uint8_t languages = 0;
        if (const auto found = native_name_language_masks_.find(word);
            found != native_name_language_masks_.end()) languages = found->second;
        for (size_t split = 1; split < word.size(); ++split) {
            const auto front = native_name_language_masks_.find(word.substr(0, split));
            const auto rear = native_name_language_masks_.find(word.substr(split));
            if (front != native_name_language_masks_.end() && rear != native_name_language_masks_.end())
                languages |= front->second & rear->second;
        }
        return languages;
    };
    auto english_name_word = [&](std::string_view value) {
        const std::string word = lower(std::string(value));
        if (procedural_word_meanings_.contains(word) || procedural_name_meanings_.contains(word)) return true;
        for (size_t split = 2; split + 2 <= word.size(); ++split) {
            const auto front = procedural_name_meanings_.find(word.substr(0, split));
            const auto rear = procedural_name_meanings_.find(word.substr(split));
            if (front == procedural_name_meanings_.end() || rear == procedural_name_meanings_.end()) continue;
            for (const auto &a : front->second)
                for (const auto &b : rear->second)
                    if (procedural_compound_score(a.roles, b.roles) >= 0) return true;
        }
        return false;
    };
    auto generated_owner = [&](std::string_view value, bool definite_title) {
        std::istringstream input{std::string(value)};
        uint8_t common_languages = 0xff;
        size_t count = 0;
        bool semantic_title = true;
        for (std::string word; input >> word;) {
            const std::string folded = lower(word);
            const bool connector = count != 0 && (folded == "of" || folded == "the" ||
                folded == "and" || folded == "in" || folded == "with" || folded == "a" ||
                folded == "an" || folded == "for" || folded == "to" || folded == "from");
            ++count;
            if (definite_title && connector) continue;
            common_languages &= native_word_languages(word);
            semantic_title = semantic_title && english_name_word(word);
        }
        return count != 0 && (common_languages != 0 ||
            (semantic_title && (definite_title || count == 1)));
    };

    auto modifier = [&](auto &&self, std::string_view value, int depth,
                        bool owner_field = false)
            -> std::optional<std::string> {
        value = trim_view(value);
        if (value.empty() || depth > 16) return std::nullopt;
        if (lower(std::string(value)).starts_with("of ")) value.remove_prefix(3);
        const bool definite_owner = lower(std::string(value)).starts_with("the ");
        if (definite_owner) value.remove_prefix(4);
        if (value.empty()) return std::nullopt;
        if (auto target = lookup(creature_name_modifier, value)) return target;
        // The installed sphere generator supplies nouns AND adjectives.
        // Resolve its scoped forms before UI homonyms (seasonal, dead, ...)
        // or noun-only procedural word senses can steal an adjective.
        if (auto target = lookup(creature_name_sphere_modifier, value)) return target;
        // Materials and animal profiles are multi-word semantic terms, e.g.
        // plume agate, opossum, giant cave spider. Never split those into a
        // procedural proper-name word sense or replace them with a new race
        // dictionary here. This preserves goblin/kobold terminology too.
        if (auto target = require_species ? species(value) : literal(value)) return target;
        if (auto target = lookup(creature_name_profile, value)) return target;
        // Evil-cloud transformations prefix their caste with the complete
        // generated cloud material (e.g. cursed mist husk). Reuse the same
        // finite material catalog as item names, without splitting adjectives.
        if (const auto *material = magical_material(value)) return material->noun;
        // Native demons use inorganic state names and descriptor colors.
        // Some terms live only in these reviewed namespaces, not the literal
        // dictionary (amethyst, eggplant, ivory, peach, ...).
        if (auto target = RULESETS.translate_material_state(cp437_to_utf8(lower(std::string(value))));
            complete(target)) return target;
        if (auto target = RULESETS.translate_color(cp437_to_utf8(lower(std::string(value))));
            complete(target)) return target;
        if (auto target = lookup(deity_sphere_translations_, value)) return target;
        if (config_.compositional_rules && !require_species) {
            auto target = translate_compositional(std::string(value));
            if (complete(target)) return target;
        }
        if (auto target = lookup(procedural_terms_, value)) return target;
        // Angel/experiment owners can be native names or generated semantic
        // epithets. Phonetic fallback is restricted to that proper-name
        // position, never applied to unrecognized ordinary creature words.
        const unsigned char first = static_cast<unsigned char>(value.front());
        if (owner_field || (!require_species &&
                ((first >= 'A' && first <= 'Z') || is_cp437_latin_letter_byte(first)))) {
            if (require_species && !generated_owner(value, definite_owner)) return std::nullopt;
            // The typed name parser validates every word, not just the first
            // capital. It excludes unpunctuated prose from phonetic fallback.
            std::string name = definite_owner ? "The " + std::string(value) : std::string(value);
            if (owner_field) {
                // Native angel generators emit lower-case first names and
                // epithets after `of` as well as before `'s`. Capitalization
                // is presentation, not the identity of this typed owner.
                std::istringstream names(name);
                name.clear();
                for (std::string word; names >> word;) {
                    const std::string folded = lower(word);
                    const bool connector = !name.empty() &&
                        (folded == "of" || folded == "the" || folded == "and" ||
                         folded == "in" || folded == "with" || folded == "a" ||
                         folded == "an" || folded == "for" || folded == "to" ||
                         folded == "from");
                    if (connector) word = folded;
                    else if (word.front() >= 'a' && word.front() <= 'z')
                        word.front() -= 'a' - 'A';
                    if (!name.empty()) name += ' ';
                    name += word;
                }
            }
            auto target = translate_legends_name(name, true);
            if (complete(target)) return target;
        }
        // Every native flavor/material/profile is one complete semantic
        // field. Splitting unknown tails would swallow an item's suffix:
        // "soldier of night leather" is not the species "soldier of night".
        if (require_species) return std::nullopt;
        for (size_t at = value.rfind(' '); at != std::string_view::npos;
             at = at == 0 ? std::string_view::npos : value.rfind(' ', at - 1)) {
            const auto left = self(self, value.substr(0, at), depth + 1);
            if (!left) continue;
            const auto right = self(self, value.substr(at + 1), depth + 1);
            if (right) return *left + *right;
        }
        return std::nullopt;
    };

    auto mythical_title = [&](std::string_view value) -> std::optional<std::string> {
        // Both adjective directions and all tier/number forms come from
        // interactions/mythical.lua, not the handful seen in one world.
        for (const auto &[role, target] : creature_name_role) {
            const std::string suffix = " " + std::string(role);
            const std::string prefix = std::string(role) + " ";
            std::optional<std::string> adjective;
            if (value.ends_with(suffix))
                adjective = lookup(creature_name_mythical_prefix,
                    value.substr(0, value.size() - suffix.size()));
            else if (value.starts_with(prefix))
                adjective = lookup(creature_name_mythical_suffix,
                    value.substr(prefix.size()));
            if (adjective) return *adjective + std::string(target);
        }
        return std::nullopt;
    };

    // Memorize subphrases for this record. Long generated owner names must
    // not cause exponential re-parsing at each possible word boundary.
    std::unordered_map<std::string, std::optional<std::string>> memo;
    auto creature = [&](auto &&self, std::string_view value, int depth)
            -> std::optional<std::string> {
        value = trim_view(value);
        if (value.empty() || depth > 16) return std::nullopt;
        const std::string key(value);
        if (const auto found = memo.find(key); found != memo.end()) return found->second;
        const std::string folded = lower(key);
        auto resolve = [&]() -> std::optional<std::string> {
            // Preserve the established giant/gigantic material wording in
            // every species field. The base still has to be a typed creature;
            // clothing-size words are never accepted as identity modifiers.
            for (const auto &[size, target] : creature_name_size_prefix) {
                const std::string prefix = std::string(size) + " ";
                if (!folded.starts_with(prefix)) continue;
                const auto base = self(self, value.substr(prefix.size()), depth + 1);
                if (base) return std::string(target) + *base;
            }
            if (auto target = kind(value)) return target;
            if (auto target = lookup(creature_name_race_adjective, value)) return target;
            if (auto target = require_species ? species(value) : literal(value)) return target;
            // RAW caste/role names may describe their purpose. Player-authored
            // unit professions never enter this species grammar: the native
            // identity formatter selects and preserves that field separately.
            for (size_t start = 0; start < value.size();) {
                const size_t end = value.find(' ', start);
                if (end == std::string_view::npos) break;
                const auto purpose = RULESETS.compose_bound_rule(
                    "::creatures::caste::name::purpose",
                    folded.substr(start, end - start + 1));
                if (purpose) {
                    const auto animal = species(value.substr(end + 1));
                    if (animal) {
                        if (start == 0) return *purpose + *animal;
                        const auto flavor = modifier(modifier,
                            value.substr(0, start - 1), depth + 1);
                        if (flavor) return *flavor + *purpose + *animal;
                    }
                }
                start = end + 1;
            }
            // The same profile is used as the noun in generated physical
            // descriptions (blob, quadruped, humanoid, ...).
            if (auto target = lookup(creature_name_profile, value)) return target;
            if (auto target = mythical_title(folded)) return target;
            // experiment_description concatenates race_adj and the creator's
            // display name without a space. Generated resurrection and
            // mythical titles share that boundary with fixed identities.
            // Require a complete display name from the native interaction
            // tables AND a RAW-backed species/adjective; never recursively
            // split an unknown word or a personal name.
            for (size_t at = value.size() - 1; at > 0; --at) {
                if (value[at - 1] == ' ' || value[at] == ' ') continue;
                const auto status = std::string_view(folded).substr(at);
                const auto title = lookup(creature_name_display_name, status);
                if (!title) continue;
                const auto race = species_adjective(value.substr(0, at));
                if (race) return *race + *title;
            }
            if (folded.starts_with("were")) {
                const auto animal = translate_vanilla_were_species(
                    std::string_view(folded).substr(4));
                const auto prefix = lookup(creature_name_form_prefix, "were");
                if (animal && prefix) return *prefix + std::string(*animal);
            }

            // Converted night-troll spouses have two generated word orders.
            for (const auto &[spouse, target] : creature_name_spouse) {
                const std::string prefix = std::string(spouse) + " of the ";
                const std::string suffix = " " + std::string(spouse);
                if (folded.starts_with(prefix)) {
                    if (const auto owner = self(self, value.substr(prefix.size()), depth + 1))
                        return *owner + "的" + std::string(target);
                }
                if (folded.ends_with(suffix)) {
                    if (const auto owner = self(self, value.substr(
                            0, value.size() - suffix.size()), depth + 1))
                        return *owner + "的" + std::string(target);
                }
            }
            // Explicit species + display-name/status: human chaos lord,
            // dwarf necromancer, dwarven goddess, and multi-word animal
            // people all keep the established whole species translation.
            for (size_t at = value.rfind(' '); at != std::string_view::npos;
                 at = at == 0 ? std::string_view::npos : value.rfind(' ', at - 1)) {
                // A flavor such as gloom/night is not a race, even when
                // its UI literal also exists. Let the typed flavor grammar
                // below select the same sense used by all creature names.
                if (lookup(creature_name_modifier, value.substr(0, at)) ||
                    lookup(creature_name_sphere_modifier, value.substr(0, at))) continue;
                const auto race = require_species ? species_adjective(value.substr(0, at))
                                                   : literal(value.substr(0, at));
                if (!race) continue;
                const auto status = self(self, value.substr(at + 1), depth + 1);
                if (status) return *race + *status;
            }
            // Demons/night creatures use <kind> of <material/flavor>; angels
            // and experiments also use <owner>'s <kind>. All fields survive.
            if (const size_t at = folded.find(" of "); at != std::string::npos) {
                const auto kind = self(self, value.substr(0, at), depth + 1);
                if (kind) {
                    const auto owner = modifier(modifier, value.substr(at + 4), depth + 1, true);
                    if (owner) return *owner + "之" + *kind;
                }
            }
            if (const size_t at = folded.rfind("'s "); at != std::string::npos) {
                const auto kind = self(self, value.substr(at + 3), depth + 1);
                if (kind) {
                    const auto owner = modifier(modifier, value.substr(0, at), depth + 1, true);
                    if (owner) return *owner + "之" + *kind;
                }
            }
            // Interaction display names follow a complete species, including
            // generated identities such as "demon of night hollow corpse".
            // Complete owners above keep priority: a divine epithet can end
            // in the same words as a display name. Otherwise match the longest
            // native display-name suffix, keeping the species' flavor intact.
            for (size_t at = value.find(' '); at != std::string_view::npos;
                 at = value.find(' ', at + 1)) {
                const auto title = lookup(creature_name_display_name, value.substr(at + 1));
                if (!title) continue;
                const auto race = self(self, value.substr(0, at), depth + 1);
                if (race) return *race + *title;
            }
            // Use the complete headword, not token replacement: a casteless
            // horror is a creature, and maelstrom adept is a title, not a
            // skill rating. Try longest heads first, independently of hash
            // iteration order (forgotten beast before beast, for example).
            for (size_t at = value.find(' '); at != std::string_view::npos;
                 at = value.find(' ', at + 1)) {
                const auto head = kind(value.substr(at + 1));
                if (!head) continue;
                const auto flavor = modifier(modifier, value.substr(0, at), depth + 1);
                if (flavor) return *flavor + *head;
            }
            if (config_.compositional_rules && !require_species) {
                auto target = translate_compositional(key);
                if (complete(target)) return target;
            }
            // World-generated RAWs can use native-language proper names as
            // their complete species/caste label, without any possessive.
            // The corpse producer selects this exact field for unnamed
            // bodies. Only a captured GENERATED RAW establishes that source;
            // capitalization merely distinguishes its name groups from an
            // unsupported ordinary English creature description. Keep every
            // existing semantic production above ahead of phonetic fallback.
            if (const auto names = g_native_generated_creature_names.load(
                    std::memory_order_acquire)) {
                const auto known = names->find(lower_native_name(key));
                if (known != names->end() && generated_title_shape(known->second) &&
                        !known->second.ends_with("..."))
                    // Keep the phonetic branch reachable for generated RAW
                    // names absent from the strict personal-name vocabulary.
                    return translate_procedural_fragment(known->second, true);
            }
            return std::nullopt;
        };
        auto target = resolve();
        memo.emplace(key, target);
        return target;
    };
    return creature(creature, normalized, 0);
}
