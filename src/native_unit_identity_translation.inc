// A stored animation label is the same full/short corpse production as a
// butchery target, including its independently generated language_name owner.
std::optional<std::string> Overlay::translate_native_animation_label(
        std::string_view source) const {
    TranslationStateScope translation_scope;
    return translate_corpsepiece_item_name(source);
}

// Render one semantic identity for drawing and searching. Classification is
// already settled by native fields and formatter arguments, not its spelling.
std::optional<std::string> Overlay::translate_native_justice_organization_initials(
        const NativeUnitIdentity &person,
        const std::array<int32_t, 7> &native_indices) const {
    TranslationStateScope translation_scope;
    const auto &name = person.name;
    if (!name.has_name) return std::nullopt;
    const auto first_glyph = [](std::string_view text) -> std::optional<std::string> {
        const auto glyph = decode_utf8_at(text, 0);
        if (!glyph) return std::nullopt;
        return std::string(text.substr(0, glyph->second));
    };
    const auto phonetic_word = [&](std::string_view word) -> std::string {
        if (word.empty()) return {};
        return transliterate_native_language_word(word);
    };
    std::string result;
    const bool given = !name.first_name.empty();
    if (given) {
        const std::string target = name.uses_native_pronunciation()
            ? phonetic_word(name.first_name) : native_text_to_utf8(name.first_name);
        const auto initial = first_glyph(target);
        if (!initial) return std::nullopt;
        result += *initial;
    }
    const bool surname = native_indices[0] != -1 || native_indices[1] != -1;
    if (surname) {
        std::string english;
        for (size_t slot = 0; slot < 2; ++slot) {
            if (native_indices[slot] == -1) continue;
            const auto &word = name.words[slot];
            if (word.id.empty()) return std::nullopt;
            english += word.english_form;
        }
        // The producer appends no surname initial when both valid forms
        // are empty. Keep a known given initial without inventing a group.
        if (english.empty())
            return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
        std::optional<std::string> target;
        if (given) {
            // EnglishName concatenates these exact POS forms into its first
            // WORD group. Nicknames and the remaining title slots are absent
            // from the native diagram's two-initial representation.
            target = english_character_names_.compound(english);
        } else {
            // Without literal first_name, this WORD group occupies the full
            // identity's proper-name position and uses its native roots.
            if (!person.native_name_words_valid) return std::nullopt;
            std::string native;
            for (size_t slot = 0; slot < 2; ++slot) {
                if (native_indices[slot] == -1 || name.words[slot].english_form.empty()) continue;
                const auto &word = person.native_name_words[slot];
                if (word.empty()) return std::nullopt;
                const std::string translated = phonetic_word(word);
                if (translated.empty()) return std::nullopt;
                native += translated;
            }
            if (!native.empty()) target = std::move(native);
        }
        if (!target) return std::nullopt;
        const auto initial = first_glyph(*target);
        if (!initial) return std::nullopt;
        result += *initial;
    }
    return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
}

static bool native_unit_identity_requires_world(const NativeUnitIdentity &unit) {
    const auto live_name = [](const NativeHistoryName &name) {
        // These names can recapture a renamed site/entity or its current
        // government/parent in the shared history renderer. Their spelling
        // and IDs alone are not a complete immutable naming dependency.
        return name.site_id >= 0 || name.entity_id >= 0 || name.entity_type >= 0 ||
            name.entity_name_current;
    };
    if (live_name(unit.name)) return true;
    if (unit.form == NativeUnitIdentityForm::Reference)
        return std::any_of(unit.reference_parts.begin(), unit.reference_parts.end(),
            [&](const NativeUnitReferencePart &part) {
                return part.kind == NativeUnitReferencePartKind::Title || part.entity_present ||
                    live_name(part.name) || live_name(part.entity_name);
            });
    if (unit.form == NativeUnitIdentityForm::NameOnly ||
            (unit.form == NativeUnitIdentityForm::Name && !unit.native_name.empty()) ||
            unit.native_role_authored || !unit.animated_name.empty() ||
            (unit.use_custom && !unit.custom_profession.empty())) return false;
    // Ordinary role/full-name formatters append noble territories too. Their
    // typed role grammar resolves "of <territory>" against the live world,
    // just like the separately captured entity parts of a reference. Keep
    // the owned snapshot for SDL instead of abandoning a rejected worker job.
    // A fixed title such as captain of the guard can use the same safe path.
    return unit.native_role.find(" of ") != std::string::npos;
}

// Length-prefixed strings and fixed-width scalars retain the complete typed
// identity. Equal display text alone cannot distinguish authored fields,
// selected languages, hidden identities or the formatter's semantic mode.
static std::string native_unit_identity_cache_key(const NativeUnitIdentity &unit) {
    std::string key;
    key.reserve(1024);
    const auto scalar = [&](auto value) {
        uint64_t bits = static_cast<uint64_t>(value);
        for (unsigned byte = 0; byte < 8; ++byte) {
            key.push_back(static_cast<char>(bits & 0xff));
            bits >>= 8;
        }
    };
    const auto text = [&](std::string_view value) {
        scalar(value.size());
        key.append(value);
    };
    const auto name = [&](const NativeHistoryName &value) {
        text(value.first_name);
        text(value.nickname);
        for (const auto &word : value.words) {
            text(word.id);
            scalar(word.part_of_speech);
            scalar(word.has_form);
            text(word.english_form);
        }
        scalar(value.language);
        scalar(value.nickname_mode);
        scalar(value.type);
        scalar(value.has_name);
        scalar(value.utterance_first_name);
        scalar(value.entity_type);
        scalar(value.entity_id);
        scalar(value.entity_name_current);
        text(value.parent_word_id);
        scalar(value.parent_word_pos);
        scalar(value.site_id);
        scalar(value.site_type);
        scalar(value.site_subtype);
        text(value.site_label);
        text(value.native_name);
    };
    name(unit.name);
    for (const auto &word : unit.native_name_words) text(word);
    scalar(unit.native_name_words_valid);
    for (const auto *value : {&unit.native_name, &unit.native_role, &unit.custom_profession,
            &unit.creature_id, &unit.caste_id, &unit.caste_name, &unit.raw_profession,
            &unit.curse_name, &unit.curse_name_prefix, &unit.animated_name})
        text(*value);
    scalar(unit.reference_parts.size());
    for (const auto &part : unit.reference_parts) {
        scalar(part.kind);
        text(part.source);
        name(part.name);
        for (const auto &word : part.native_name_words) text(word);
        scalar(part.native_name_words_valid);
        scalar(part.english_name);
        text(part.entity_source);
        name(part.entity_name);
        scalar(part.entity_present);
    }
    for (const auto value : {unit.id, unit.race, unit.caste, unit.profession, unit.training_level})
        scalar(value);
    scalar(unit.sex);
    scalar(unit.form);
    scalar(unit.prefix);
    for (const bool value : {unit.tame, unit.gelded, unit.ghostly, unit.two_genders,
            unit.pet, unit.curse_named, unit.undead, unit.use_custom, unit.show_gender,
            unit.include_status, unit.name_fallback, unit.english_name, unit.name_quoted,
            unit.native_role_authored})
        scalar(value);
    return key;
}

static std::optional<std::string> native_announcement_log_worker_unit_target(
    const NativeUnitIdentity &unit);

std::optional<std::string> Overlay::translate_native_unit_identity(
        const NativeUnitIdentity &unit) const {
    NativeUnitIdentityRenderScope rendering;
    TranslationStateScope translation_scope;
    // A complete owned identity does not depend on the report which contains
    // it, or on other formatter publications in that frame. Share its result
    // between SDL and owned-input workers under the actual vocabulary/config
    // generation instead of the enclosing announcement's identity context.
    // Potential government/title references keep their live naming policy,
    // but detached announcement workers can compose their owned name/role
    // parts around the separately requested entity/site leaves.
    const bool live_entity = native_unit_identity_requires_world(unit);
    const bool detached_live = g_native_announcement_log_worker_active && live_entity;
    const std::string key = !live_entity || detached_live
        ? native_unit_identity_cache_key(unit) : std::string{};
    if (detached_live) {
        const auto *inputs = g_native_announcement_log_worker_inputs;
        if (inputs && inputs->unit_targets_resources == RULESETS.resource_revision() &&
                inputs->unit_targets_catalog == native_identity_translation_catalog_generation())
            if (const auto found = inputs->unit_targets.find(key); found != inputs->unit_targets.end())
                return found->second;
    }
    struct OwnedCache {
        struct Entry {
            std::optional<std::string> target;
            std::list<std::string>::iterator use;
            size_t bytes = 0;
        };
        const Overlay *owner = nullptr;
        std::string generation;
        std::unordered_map<std::string, Entry> results;
        std::list<std::string> order;
        size_t bytes = 0;
    };
    static const unsigned char owned_identity_cache_tag = 0;
    auto &owned_cache = domain_cache<OwnedCache>(&owned_identity_cache_tag);
    const auto owned_generation = [&] {
        std::string generation;
        const auto value = [&](const auto &input) {
            generation.append(reinterpret_cast<const char *>(&input), sizeof(input));
        };
        const auto catalog = identity_translation_catalog_generation_.load(std::memory_order_acquire);
        const auto resources = RULESETS.resource_revision();
        // GENERATED RAW labels are a separately published vocabulary. Their
        // contents can change without changing the ordinary rule catalogue.
        const auto generated = g_native_generated_creature_context.load(std::memory_order_acquire);
        value(catalog); value(resources); value(generated);
        value(config_.native_language_original); value(config_.compositional_rules);
        generation.append(config_.language);
        return generation;
    };
    bool memoize_owned = !live_entity && key.size() <= 8192;
    std::string generation;
    if (memoize_owned) try {
        generation = owned_generation();
        if (owned_cache.owner != this || owned_cache.generation != generation) {
            owned_cache.results.clear(); owned_cache.order.clear(); owned_cache.bytes = 0;
            owned_cache.owner = this; owned_cache.generation = generation;
        }
        if (const auto found = owned_cache.results.find(key);
                found != owned_cache.results.end()) {
            owned_cache.order.splice(owned_cache.order.end(), owned_cache.order, found->second.use);
            return found->second.target;
        }
    } catch (const std::bad_alloc &) { memoize_owned = false; }
    const auto translate = [&]() -> std::optional<std::string> {
        const auto field_text = [&](std::string_view source) {
            if (auto target = translate_creature_descriptor(source, true)) return *target;
            if (auto target = exact_literal_translation(source)) return *target;
            return native_text_to_utf8(source);
        };
        const auto entity_name = [&](const NativeHistoryName &name) -> std::optional<std::string> {
            if (name.entity_id >= 0)
                return translate_history_entity_name(name, name.entity_id);
            // Match the old NameOnly wrapper's authored-field policy while keeping
            // entity qualifiers outside the character-name translator.
            if (name.language < 0 && name.nickname.empty() &&
                    std::all_of(name.words.begin(), name.words.end(),
                        [](const auto &word) { return word.id.empty(); }))
                return native_text_to_utf8(name.first_name);
            return translate_history_name(name);
        };
        // The Groups supplier captures historical_entity.name itself. Its
        // selected ID owns the full generated name even for default signed
        // entity kinds; the English string is not a person's surname/title.
        if (unit.form == NativeUnitIdentityForm::NameOnly && unit.name.entity_id >= 0)
            return entity_name(unit.name);
        if (unit.form == NativeUnitIdentityForm::Reference) {
            std::string result;
            const auto reference_role = [&](auto &&self, std::string_view raw) -> std::string {
                const std::string_view source = trim_view(raw);
                const std::string folded = lower(std::string(source));
                // The native 103/104 (child/baby) branches keep their caste role
                // and append these statuses; adult roles are replaced outright.
                for (const auto &[suffix, target] : {
                        std::pair<std::string_view, std::string_view>{" slave", "奴隶"},
                        {" prisoner", "囚犯"}}) {
                    if (folded.ends_with(suffix) && source.size() > suffix.size())
                        return self(self, source.substr(0, source.size() - suffix.size())) +
                            "（" + std::string(target) + "）";
                }
                if (auto target = translate_creature_label(source)) return *target;
                if (auto target = translate_unit_profession(source, false)) return *target;
                return field_text(source);
            };
            for (const auto &part : unit.reference_parts) {
                std::string value;
                switch (part.kind) {
                case NativeUnitReferencePartKind::Literal: {
                    const std::string source = lower(trim(part.source));
                    if (source.empty() || source == "the" || source == "a" || source == "an") break;
                    if (source == "the force" || source == "force") value = "自然之灵";
                    else if (source == "the deity" || source == "deity") value = "神祇";
                    else if (source == "ghost" || source == "ghostly") value = "幽灵";
                    else if (source == "one") value = "者";
                    else if (source == "you") value = "你";
                    else if (source == "stray") value = "无主的";
                    else if (source == "fierce") value = "凶猛的";
                    else if (source == "agitated") value = "躁动的";
                    else if (source == "corpse") value = result.empty() ? "尸体" : "的尸体";
                    else value = field_text(trim_view(part.source));
                    break;
                }
                case NativeUnitReferencePartKind::Authored:
                    // Animation labels can be generated corpse/body-part names.
                    // Only the captured animation field uses that grammar;
                    // The other native branch is modes 4/5's direct first_name:
                    // resolve generated numbered species, preserving all other
                    // authored spellings through the existing fallback.
                    if (!unit.animated_name.empty() &&
                            lower(trim(part.source)) == lower(trim(unit.animated_name))) {
                        const auto target = translate_native_animation_label(part.source);
                        value = target ? *target : native_text_to_utf8(part.source);
                    } else {
                        const auto numbered = translate_numbered_creature_name(part.source);
                        value = numbered ? *numbered : native_text_to_utf8(part.source);
                    }
                    break;
                case NativeUnitReferencePartKind::GivenName:
                    // The known companion branch deliberately renders only the
                    // selected identity's first_name. Never add surname WORDs or
                    // a nickname which DF did not reveal on this branch.
                    if (const auto numbered = translate_numbered_creature_name(part.source))
                        value = *numbered;
                    else if (!part.name.uses_native_pronunciation() || contains_cjk_utf8(part.source))
                        value = native_text_to_utf8(part.source);
                    else {
                        value = config_.native_language_original
                            ? native_language_word_display(part.source)
                            : native_language_word_display(part.name.first_name);
                        if (value.empty()) value = native_text_to_utf8(part.source);
                    }
                    break;
                case NativeUnitReferencePartKind::Species:
                    if (auto target = translate_creature_descriptor(part.source, true)) value = *target;
                    else value = field_text(part.source);
                    break;
                case NativeUnitReferencePartKind::Curse:
                    if (auto target = translate_creature_descriptor(part.source, false)) value = *target;
                    else value = field_text(trim_view(part.source));
                    break;
                case NativeUnitReferencePartKind::Appearance: {
                    // 717d30's distinguishing body/voice/RAW feature comes from
                    // unit+13e8. The complete existing hover grammar owns colors,
                    // body size and `<modifier>-<body part>` compounds.
                    std::vector<size_t> origins;
                    const auto target = RULESETS.translate_with_origins(
                        native_text_to_utf8(lower(trim(part.source))),
                        "::map_hover::unit::appearance", origins);
                    value = (target ? *target : field_text(trim_view(part.source))) + "的";
                    break;
                }
                case NativeUnitReferencePartKind::Role:
                    if (!unit.custom_profession.empty()) {
                        const auto custom = exact_literal_translation(
                            "Unit custom profession: " + unit.custom_profession);
                        value = custom ? *custom : native_text_to_utf8(part.source);
                    } else if (part.entity_present) {
                        const std::string suffix = " of " + part.entity_source;
                        const size_t at = part.source.rfind(suffix);
                        const std::string role = part.source.substr(0, at) +
                            part.source.substr(at + suffix.size());
                        // Office territories are entity names, not a character's
                        // English surname. Retain their existing name grammar.
                        const auto target = entity_name(part.entity_name);
                        const std::string territory = target && !target->empty() ? *target :
                            part.entity_source.empty() ? "无名势力" : native_text_to_utf8(part.entity_source);
                        value = territory +
                            "的" + reference_role(reference_role, role);
                    } else value = reference_role(reference_role, part.source);
                    break;
                case NativeUnitReferencePartKind::Title: {
                    // The native reference formatter uses this part for an
                    // entity qualifier captured separately from the unit name.
                    const auto target = entity_name(part.name);
                    value = "（" + (target && !target->empty() ? *target :
                        part.source.empty() ? "无名势力" : native_text_to_utf8(part.source)) + "）";
                    break;
                }
                case NativeUnitReferencePartKind::Name: {
                    NativeUnitIdentity identity;
                    identity.form = NativeUnitIdentityForm::NameOnly;
                    identity.name = part.name;
                    identity.native_name = part.source;
                    identity.native_name_words = part.native_name_words;
                    identity.native_name_words_valid = part.native_name_words_valid;
                    identity.english_name = part.english_name;
                    const auto name = translate_native_unit_identity(identity);
                    value = name && !name->empty() ? *name : native_text_to_utf8(part.source);
                    if (!result.empty()) result += ' ';
                    break;
                }
                }
                result += value;
            }
            return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
        }
        const auto role = [&]() -> std::string {
            // ELF b71be3/b725d0 copies animation+0x20 as the whole role.
            // This field includes the corpse producer's possessive owner,
            // rotten/mangled/mutilated/partial, skeleton, remains and RAW
            // body-part/material branches. Reuse their complete grammar.
            if (!unit.animated_name.empty()) {
                if (auto target = translate_native_animation_label(unit.animated_name))
                    return *target;
                return native_text_to_utf8(unit.animated_name);
            }
            if (unit.native_role_authored) {
                // In arena modes the role formatter returns first_name itself.
                const auto numbered = translate_numbered_creature_name(unit.native_role);
                return numbered ? *numbered : native_text_to_utf8(unit.native_role);
            }
            if (!unit.use_custom || unit.custom_profession.empty()) {
                // This is the game's actual RAW/occupation formatter result. Its
                // source type is known even if it happens to equal a custom name.
                const auto occupation = [&](std::string_view source) -> std::optional<std::string> {
                    if (source.empty()) return std::string{};
                    if (auto target = translate_creature_label(source)) return target;
                    return translate_unit_profession(source, false);
                };
                if (unit.curse_named) {
                    const auto curse_text = [&](std::string_view value) {
                        if (auto target = translate_creature_descriptor(value, false)) return *target;
                        return field_text(value);
                    };
                    const std::string source = normalize_utterance(unit.native_role);
                    std::string_view base(source);
                    std::string suffix;
                    // Corpse follows the actual curse name/prefix in the native
                    // role formatter; keep it outside the typed field boundary.
                    constexpr std::string_view corpse = " corpse";
                    if (unit.undead && lower(std::string(base)).ends_with(corpse)) {
                        if (const auto status = exact_literal_translation("corpse")) {
                            suffix = "的" + *status;
                            base.remove_suffix(corpse.size());
                        }
                    }
                    const std::string name = normalize_utterance(unit.curse_name);
                    const std::string prefix = normalize_utterance(unit.curse_name_prefix);
                    if (!name.empty()) {
                        if (base == name || base.ends_with(" " + name)) {
                            const auto core = occupation(trim_view(
                                base.substr(0, base.size() - name.size())));
                            if (core) return *core + (core->empty() ? "" : "／") +
                                curse_text(name) + suffix;
                        }
                    } else if (!prefix.empty()) {
                        size_t at = 0;
                        const std::string folded = lower(std::string(base));
                        for (const std::string_view status : {"stray ", "fierce ", "agitated "})
                            if (folded.starts_with(status)) { at = status.size(); break; }
                        if (base.substr(at).starts_with(prefix) &&
                                (base.size() == at + prefix.size() ||
                                 base[at + prefix.size()] == ' ')) {
                            const auto outer = at == 0 ? std::optional<std::string>(std::string{}) :
                                RULESETS.compose_bound_rule("::creatures::caste::name::prefix",
                                    folded.substr(0, at));
                            const auto core = occupation(trim_view(base.substr(at + prefix.size())));
                            if (outer && core) return *outer + curse_text(prefix) + *core + suffix;
                        }
                    }
                }
                if (auto target = translate_creature_label(unit.native_role)) return *target;
                if (auto target = translate_unit_profession(unit.native_role, false)) return *target;
                return native_text_to_utf8(unit.native_role);
            }
            std::string value;
            switch (unit.prefix) {
            case NativeUnitNamePrefix::Stray: value = "无主的"; break;
            case NativeUnitNamePrefix::Fierce: value = "凶猛的"; break;
            case NativeUnitNamePrefix::Agitated: value = "躁动的"; break;
            case NativeUnitNamePrefix::None: break;
            }
            if (unit.ghostly) value += creature_name_status_prefix.at("ghostly");
            if (unit.curse_named && unit.curse_name.empty() && !unit.curse_name_prefix.empty())
                value += field_text(unit.curse_name_prefix);
            // Only an explicit whole-field override can translate an authored
            // profession. Do not infer its meaning from ordinary role, species,
            // or procedural-name rules; all other custom wording stays literal.
            const auto custom = exact_literal_translation(
                "Unit custom profession: " + unit.custom_profession);
            value += custom ? *custom : native_text_to_utf8(unit.custom_profession);
            if (unit.curse_named && !unit.curse_name.empty()) value += field_text(unit.curse_name);
            if (unit.undead) value += "的尸体";
            return value;
        };
        const auto phonetic_word = [&](std::string_view word) -> std::string {
            if (word.empty()) return {};
            return transliterate_native_language_word(word);
        };
        const auto phonetic_name = [&]() -> std::optional<std::string> {
            if (config_.native_language_original) {
                const auto original = native_text_to_utf8(unit.native_name);
                return preserve_native_language_original(original, original);
            }
            if (!unit.name.has_name || !unit.native_name_words_valid) return std::nullopt;
            // The game selected these precise WORD roots and their language.
            // Keep the established per-root pronunciation without splitting the
            // displayed name or substituting the WORDs' English meanings.
            std::string result;
            const bool nickname = !unit.name.nickname.empty();
            const auto nickname_target = nickname
                ? exact_literal_translation("Unit nickname: " + unit.name.nickname) : std::nullopt;
            const std::string nickname_text = nickname_target
                ? *nickname_target : native_text_to_utf8(unit.name.nickname);
            if (nickname && (unit.name.nickname_mode == 0 || unit.name.nickname_mode == 2))
                result = "“" + nickname_text + "”";
            else {
                const auto numbered = translate_numbered_creature_name(unit.name.first_name);
                result = numbered ? *numbered : phonetic_word(unit.name.first_name);
                if (nickname) result += "“" + nickname_text + "”";
            }
            if (nickname && unit.name.nickname_mode == 2) return result;
            const auto append_group = [&](size_t first, size_t last) {
                std::string group;
                for (size_t slot = first; slot <= last; ++slot)
                    group += phonetic_word(unit.native_name_words[slot]);
                if (group.empty()) return;
                if (!result.empty()) result += "·";
                result += group;
            };
            append_group(0, 1);
            if (!unit.name.words[2].id.empty() || !unit.name.words[3].id.empty() ||
                    !unit.name.words[5].id.empty()) append_group(2, 5);
            append_group(6, 6);
            return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
        };
        const auto name = [&]() -> std::string {
            if (unit.native_name.empty()) return {};
            std::optional<std::string> value;
            // A first WORD group can occupy the visible given-name position
            // even when the native literal first_name is empty. Use its captured
            // native roots for pronunciation, rather than its English meanings.
            if (unit.english_name) {
                std::string given = unit.name.first_name;
                std::string given_target;
                if (given.empty() && unit.name.has_name && unit.native_name_words_valid &&
                        unit.name.nickname.empty()) {
                    for (size_t slot = 0; slot < 2; ++slot) {
                        const auto &word = unit.native_name_words[slot];
                        if (word.empty()) continue;
                        const std::string target = phonetic_word(word);
                        if (target.empty()) {
                            given.clear();
                            given_target.clear();
                            break;
                        }
                        given += word;
                        given_target += target;
                    }
                }
                value = translate_english_character_name(unit.native_name, given, given_target);
                if (!translation_complete_with_native_nicknames(value, unit.native_name)) {
                    // Historical references and their complete English-name
                    // fields share the same owned WORD/POS fallback. A failed
                    // surname/title must not discard the translated given
                    // name, nickname policy or independently captured role.
                    NativeHistoryName captured = unit.name;
                    if (captured.first_name.empty() && captured.nickname.empty() &&
                            captured.native_name.empty() && unit.native_name_words_valid) {
                        for (size_t slot = 0; slot < 2; ++slot)
                            captured.native_name += unit.native_name_words[slot];
                    }
                    value = translate_history_name(captured, true);
                }
            } else if (unit.name.uses_native_pronunciation()) {
                value = phonetic_name();
            }
            // A numbered creature label can also lack both a language and WORDs.
            else if (unit.name.nickname.empty() &&
                    std::all_of(unit.name.words.begin(), unit.name.words.end(),
                        [](const auto &word) { return word.id.empty(); })) {
                value = translate_numbered_creature_name(unit.name.first_name);
                if (!value) value = native_text_to_utf8(unit.name.first_name);
            } else {
                value = translate_english_character_name(unit.native_name);
                if (!translation_complete_with_native_nicknames(value, unit.native_name) &&
                        translate_numbered_creature_name(unit.name.first_name))
                    value = translate_history_name(unit.name, true);
            }
            std::string result = value && !value->empty() ? *value : native_text_to_utf8(unit.native_name);
            if (unit.name_quoted) result = "“" + result + "”";
            return result;
        };

        std::string result;
        if (unit.form != NativeUnitIdentityForm::Role) result = name();
        if (unit.form == NativeUnitIdentityForm::NameOnly) return result;
        if (unit.form == NativeUnitIdentityForm::Name && !result.empty()) return result;
        const std::string occupation = role();
        if (!result.empty() && !occupation.empty()) result += "，";
        result += occupation;
        if (unit.show_gender && unit.two_genders && (unit.sex == 0 || unit.sex == 1)) {
            // Keep the user's authored spelling and the native gelding marks.
            result += unit.use_custom && !unit.custom_profession.empty() ? "," : "，";
            if (unit.gelded) result += 'x';
            result += unit.sex == 0 ? "♀" : "♂";
            if (unit.gelded) result += 'x';
        }
        if (unit.include_status && unit.tame) {
            static constexpr std::array<std::string_view, 8> levels = {{
                "半野生", "已训练", "-已训练-", "+已训练+", "*已训练*",
                "≡已训练≡", "☼已训练☼", "驯服"
            }};
            const auto level = unit.training_level >= 0 && unit.training_level < 8
                ? static_cast<size_t>(unit.training_level) : 0;
            result += "(";
            result += levels[level];
            result += ")";
        }
        return result;
    };
    // An entity ID or an "of" role does not require rendering the complete
    // unit on the native thread. The typed name/role helpers already request
    // exact entity/site leaves from an announcement worker. Only an actual
    // remaining legacy world read needs the complete-unit compatibility leaf.
    if (detached_live) {
        bool world_attempt = false;
        std::optional<std::string> target;
        {
            struct WorldAttemptScope {
                bool *previous = dfhack_world_read_attempt;
                explicit WorldAttemptScope(bool &attempt) { dfhack_world_read_attempt = &attempt; }
                ~WorldAttemptScope() { dfhack_world_read_attempt = previous; }
            } witness(world_attempt);
            try { target = translate(); }
            catch (const DfhackTranslationNeedsWorld &) { world_attempt = true; }
        }
        // Older helpers can catch the read exception and return a fallback.
        // Retain the witness so that such output never becomes a finished
        // identity. Explicit entity/site dependency exceptions still unwind
        // normally, carrying their narrower request to the service.
        if (world_attempt) return native_announcement_log_worker_unit_target(unit);
        return target;
    }
    if (live_entity) return translate();
    if (key.size() > 8192) return translate();
    const auto cycle_revision = active_translation_work ? active_translation_work->cycle_revision : 0;
    auto target = translate();
    // Recursive NameOnly fields can populate this same cache. Retain no
    // iterator across rendering, and never publish an interrupted/cyclic
    // attempt or a result whose owned vocabulary changed during translation.
    if (memoize_owned && !translation_work_exhausted() &&
            (!active_translation_work || active_translation_work->cycle_revision == cycle_revision)) try {
        if (owned_cache.owner == this && owned_cache.generation == generation &&
                generation == owned_generation() && !owned_cache.results.contains(key)) {
            constexpr size_t maximum_entries = 4096, maximum_bytes = 16 * 1024 * 1024;
            const size_t bytes = sizeof(OwnedCache::Entry) + 2 * key.capacity() +
                sizeof(std::string) + 5 * sizeof(void *) + (target ? target->capacity() : 0);
            if (bytes <= maximum_bytes) {
                while (!owned_cache.order.empty() &&
                        (owned_cache.results.size() >= maximum_entries ||
                         owned_cache.bytes > maximum_bytes - bytes)) {
                    const auto oldest = owned_cache.results.find(owned_cache.order.front());
                    owned_cache.bytes -= oldest->second.bytes;
                    owned_cache.results.erase(oldest); owned_cache.order.pop_front();
                }
                owned_cache.order.push_back(key);
                try {
                    owned_cache.results.emplace(key, OwnedCache::Entry{
                        target, std::prev(owned_cache.order.end()), bytes});
                } catch (...) { owned_cache.order.pop_back(); throw; }
                owned_cache.bytes += bytes;
            }
        }
    } catch (const std::bad_alloc &) { /* The complete current identity still draws. */ }
    return target;
}
