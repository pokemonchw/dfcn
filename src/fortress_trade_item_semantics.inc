// Item identity and field boundaries come from the trade formatter's item
// pointer. Its source contributes only wrappers and the complete fallback.
static std::optional<NativeJobItemCaption> native_trade_builtin_material_caption(
        const NativeTradeItemCaption &caption) {
    // Named/artifact and container records can carry independent content;
    // their complete descriptions remain with the existing item parser.
    if (caption.type != 0 || caption.subtype != -1 || caption.material < 1 ||
            caption.material > 18 || caption.material == 7 ||
            caption.material_index != -1 || caption.count < 1 ||
            caption.material_id.empty() ||
            (caption.flags & (0x40000u | 0x08000000u | 0x40u))) return std::nullopt;
    NativeJobItemCaption material;
    material.owner = caption.owner;
    material.item_type = static_cast<int16_t>(caption.type);
    material.item_subtype = static_cast<int16_t>(caption.subtype);
    material.material_type = static_cast<int16_t>(caption.material);
    material.material_index = caption.material_index;
    material.quantity = caption.count;
    material.source = caption.source;
    material.material_id = caption.material_id;
    material.material_prefix = caption.material_prefix;
    material.material_state = caption.material_state;
    return material;
}

std::optional<std::string> Overlay::translate_native_trade_item_caption(
        const NativeTradeItemCaption &caption) const {
    TranslationStateScope state;
    if (is_bare_pike(caption.source)) {
        if (caption.typed_identity && caption.type == 24 && caption.definition_id == "ITEM_WEAPON_PIKE" &&
                !(caption.flags & (0x40000u | 0x08000000u))) {
            std::vector<size_t> origins;
            if (auto term = RULESETS.translate_with_origins(caption.raw_name,
                    "::items::weapon::singular::main", origins)) return term;
        }
        return native_text_to_utf8(caption.source);
    }
    const auto fallback = [&]() {
        return caption.source.empty() ? std::optional<std::string>{} :
            translate_fortress_item_caption(caption.source);
    };
    TranslationWorkScope work;
    try {
        TranslationWorkFrame frame("native trade item fields", caption.source);
        if (const auto material = native_trade_builtin_material_caption(caption)) {
            const auto result = translate_native_job_item_material(*material);
            if (result.usable()) return result.target;
        }
        if (config_.compositional_rules &&
                !(caption.flags & (0x40000u | 0x08000000u | 0x40u))) {
            // WOOD establishes the tree sense even when the native caption
            // omits "logs"; BAR/ASH above owns the burnt product instead.
            if (caption.type == 5)
                if (auto wood = translate_wood_item_caption(caption.source, false, true, true))
                    return wood;
            // COAL has its own material indices and is deliberately excluded
            // from the built-in solid-material path. Its complete fuel noun
            // must not inherit CHARCOAL's procedural color/adjective sense.
            if (caption.type == 0 && caption.subtype == -1 && caption.material == 7) {
                const auto source = trim_view(caption.source);
                const auto quantity = item_number_suffix(source);
                std::vector<size_t> origins;
                if (auto fuel = RULESETS.translate_with_origins(
                        lower(trim(std::string(source.substr(0, source.size() - quantity.size())))),
                        "::items::bar::coal", origins))
                    return *fuel + std::string(quantity);
            }
        }
        if (!caption.semantic_name || !config_.compositional_rules) return fallback();
        const char *family = nullptr;
        bool equipment = false;
        switch (caption.type) {
        case 6: family = "door"; break;
        case 7: family = "floodgate"; break;
        case 8: family = "bed"; break;
        case 12: family = "goblet"; break;
        case 13: family = "instrument"; break;
        case 14: family = "toy"; break;
        case 15: family = "window"; break;
        case 17: family = "barrel"; break;
        case 18: family = "bucket"; break;
        case 20: family = "table"; break;
        case 21: family = "coffin"; break;
        case 24: family = "weapon"; equipment = true; break;
        case 25: family = "armor"; equipment = true; break;
        case 26: family = "shoes"; equipment = true; break;
        case 27: family = "shield"; equipment = true; break;
        case 28: family = "helm"; equipment = true; break;
        case 29: family = "gloves"; equipment = true; break;
        case 31: family = "bag"; break;
        case 32: family = "bin"; break;
        case 33: family = "armorstand"; break;
        case 34: family = "weaponrack"; break;
        case 35: family = "cabinet"; break;
        case 37: family = "amulet"; break;
        case 38: family = "scepter"; break;
        case 39: family = "ammo"; equipment = true; break;
        case 40: family = "crown"; break;
        case 41: family = "ring"; break;
        case 42: family = "earring"; break;
        case 43: family = "bracelet"; break;
        case 45: family = "anvil"; break;
        case 60: family = "pants"; equipment = true; break;
        case 61: family = "backpack"; break;
        case 62: family = "quiver"; break;
        case 63: family = "catapultparts"; break;
        case 64: family = "ballistaparts"; break;
        case 65: family = "siegeammo"; break;
        case 66: family = "ballistaarrowhead"; break;
        case 67: family = "trapparts"; break;
        case 68: family = "trapcomp"; equipment = true; break;
        case 77: family = "pipe_section"; break;
        case 78: family = "hatch_cover"; break;
        case 79: family = "grate"; break;
        case 80: family = "quern"; break;
        case 81: family = "millstone"; break;
        case 82: family = "splint"; break;
        case 83: family = "crutch"; break;
        case 84: family = "traction_bench"; break;
        case 85: family = "orthopedic_cast"; break;
        case 86: family = "tool"; break;
        default: return fallback();
        }
        std::vector<size_t> origins;
        const auto field = [&](std::string_view source, const std::string &scope) {
            return RULESETS.translate_with_origins(native_text_to_utf8(source), scope, origins);
        };
        const std::string scope = std::string("::items::") + family;
        std::optional<std::string> noun;
        if (caption.type == 13) noun = translate_instrument_native_name(caption.raw_name, true);
        else if (equipment) {
            noun = field(caption.raw_name, scope + (caption.count == 1 ?
                "::singular::main" : "::plural::main"));
            if (!noun) noun = field(caption.raw_name, scope + "::default::main");
        } else {
            noun = field(caption.raw_name, scope + "::main");
            // RAW tool names also have their dedicated type namespaces, such
            // as large pots, wheelbarrows and bookcases. Identity is already
            // TOOL; this resolver handles its isolated RAW noun only.
            if (!noun && caption.type == 86) noun = translate_item_caption_grammar(caption.raw_name);
        }
        if (!noun || noun->empty()) return fallback();
        const bool grown = (caption.flags2 & 4u) != 0;
        const auto material = grown
            ? field(lower(trim(caption.material_prefix + " " + caption.material_state)),
                "::items::grown::material")
            : translate_typed_item_material_qualifier(
                caption.material_prefix, caption.material_state);
        if (!material) return fallback();
        std::optional<std::string> adjective = std::string{};
        if (!caption.raw_adjective.empty()) {
            adjective = RULESETS.translate_equipment_modifier(
                native_text_to_utf8(caption.raw_adjective));
            if (!adjective) adjective = exact_literal_translation(caption.raw_adjective);
            if (!item_description_translation_complete(adjective)) return fallback();
        }
        std::string size;
        if (!caption.size_adjective.empty()) {
            const auto translated_size = RULESETS.translate_equipment_modifier(trim(caption.size_adjective));
            if (!translated_size) return fallback();
            size = *translated_size;
        }
        std::string label = size + *adjective;
        if (!grown) label += *material;
        if (caption.type == 29) {
            if (caption.right) {
                const auto right = RULESETS.compose_bound_rule("::items::gloves::^handedness", "right ");
                if (!right) return fallback();
                label += *right;
            }
            if (caption.left) {
                const auto left = RULESETS.compose_bound_rule("::items::gloves::^handedness", "left ");
                if (!left) return fallback();
                label += *left;
            }
        }
        label += *noun;
        if (grown) {
            // Bind the same source/type production as complete grown names;
            // material identifies the living source, not a timber qualifier.
            const auto target = RULESETS.compose_bound_rule("::items::grown::body",
                "{::items::grown::material} {::items::main}",
                {{"::items::grown::material", *material}, {"::items::main", label}});
            if (!target) return fallback();
            label = *target;
        }
        // Quantities may be outside or inside quality/ownership wrappers.
        // Peel only those typed spans and retain their original nesting order.
        const auto wrap = [&](auto &&self, std::string_view source, unsigned depth)
                -> std::optional<std::string> {
            if (depth >= 16) return std::nullopt;
            if (const auto number = item_number_suffix(source); !number.empty()) {
                const auto inner = self(self, source.substr(0, source.size() - number.size()), depth + 1);
                return inner ? std::optional<std::string>(*inner + std::string(number)) : std::nullopt;
            }
            const auto designation = split_item_designation(source);
            if (!designation.prefix.empty() || !designation.suffix.empty()) {
                const auto inner = self(self, designation.item, depth + 1);
                return inner ? std::optional<std::string>(designation.prefix + *inner + designation.suffix) : std::nullopt;
            }
            return label;
        };
        const auto target = wrap(wrap, trim_view(caption.source), 0);
        return target ? target : fallback();
    } catch (const TranslationWorkLimit &) {
        if (!work.owns_budget()) throw;
        return fallback();
    }
}

TranslationResult Overlay::translate_native_trade_item_caption_display(
        const NativeTradeItemCaption &caption) const {
    TranslationStateScope state;
    TranslationWorkScope work;
    auto result = preserved_item_field(caption.source, "native-trade-item");
    result.owner = std::to_string(caption.owner) + ":" + std::to_string(caption.id);
    try {
        TranslationWorkFrame frame("native trade display fields", caption.source);
        // The shared material resolver accepts only this complete source:
        // its solid noun and, when present, the actual native stack count.
        // Quality, authored names and extra descriptions keep the old path.
        if (const auto material = native_trade_builtin_material_caption(caption)) {
            auto translated = translate_native_job_item_material(*material);
            if (translated.usable()) {
                translated.owner = result.owner;
                translated.resource_revision = RULESETS.resource_revision();
                translated.policy = TranslationPolicy::Display;
                return translated;
            }
        }
        // Full existing parsing continues to own the remaining captions,
        // including named artifacts and instrument productions.
        if (auto target = translate_native_trade_item_caption(caption)) {
            result = TranslationResult::translated(caption.source, *target, "native-trade-item");
            result.owner = std::to_string(caption.owner) + ":" + std::to_string(caption.id);
            result.resource_revision = RULESETS.resource_revision();
            result.policy = TranslationPolicy::Display;
            return result;
        }
        if (!caption.semantic_name || !config_.compositional_rules)
            return translate_fortress_item_caption_display(caption.source);
        const char *family = nullptr;
        static constexpr std::pair<int, const char *> families[] = {
            {6,"door"},{7,"floodgate"},{8,"bed"},{12,"goblet"},{13,"instrument"},
            {14,"toy"},{15,"window"},{17,"barrel"},{18,"bucket"},{20,"table"},
            {21,"coffin"},{24,"weapon"},{25,"armor"},{26,"shoes"},{27,"shield"},
            {28,"helm"},{29,"gloves"},{31,"bag"},{32,"bin"},{33,"armorstand"},
            {34,"weaponrack"},{35,"cabinet"},{37,"amulet"},{38,"scepter"},{39,"ammo"},
            {40,"crown"},{41,"ring"},{42,"earring"},{43,"bracelet"},{45,"anvil"},
            {60,"pants"},{61,"backpack"},{62,"quiver"},{63,"catapultparts"},
            {64,"ballistaparts"},{65,"siegeammo"},{66,"ballistaarrowhead"},
            {67,"trapparts"},{68,"trapcomp"},{77,"pipe_section"},{78,"hatch_cover"},
            {79,"grate"},{80,"quern"},{81,"millstone"},{82,"splint"},{83,"crutch"},
            {84,"traction_bench"},{85,"orthopedic_cast"},{86,"tool"}
        };
        for (const auto &[type, name] : families) if (type == caption.type) { family = name; break; }
        if (!family || caption.raw_name.empty()) return translate_fortress_item_caption_display(caption.source);
        const bool equipment = (caption.type >= 24 && caption.type <= 29) ||
            caption.type == 39 || caption.type == 60 || caption.type == 68;
        std::vector<size_t> origins;
        const auto scoped = [&](std::string_view source, const std::string &scope) {
            return RULESETS.translate_with_origins(native_text_to_utf8(source), scope, origins);
        };
        const auto field = [&](std::string_view source, const std::optional<std::string> &target,
                               std::string_view kind) {
            return target && item_display_target_valid(*target)
                ? TranslationResult::translated(source, *target, kind)
                : preserved_item_field(source, kind);
        };
        const std::string scope = std::string("::items::") + family;
        std::optional<std::string> noun;
        if (caption.type == 13) noun = translate_instrument_native_name(caption.raw_name, true);
        else if (equipment) {
            noun = scoped(caption.raw_name, scope + (caption.count == 1 ? "::singular::main" : "::plural::main"));
            if (!noun) noun = scoped(caption.raw_name, scope + "::default::main");
        } else {
            noun = scoped(caption.raw_name, scope + "::main");
            if (!noun && caption.type == 86) noun = translate_item_caption_grammar(caption.raw_name);
        }
        const bool grown = (caption.flags2 & 4u) != 0;
        const std::string material_source = trim(caption.material_prefix + " " + caption.material_state);
        const auto material = field(material_source, grown
            ? scoped(lower(material_source), "::items::grown::material")
            : translate_typed_item_material_qualifier(caption.material_prefix, caption.material_state),
            "native-trade-material");
        TranslationResult label;
        const auto append_field = [&](TranslationResult value) {
            if (!label.target.empty() && !value.target.empty() &&
                ascii_word_byte(static_cast<unsigned char>(label.target.back())) &&
                ascii_word_byte(static_cast<unsigned char>(value.target.front())))
                label.append(TranslationResult::translated(" ", " ", "native-trade-separator"), label.source.size());
            label.append(value, label.source.size());
        };
        if (!caption.size_adjective.empty())
            append_field(field(caption.size_adjective,
                RULESETS.translate_equipment_modifier(trim(caption.size_adjective)), "native-trade-size"));
        if (!caption.raw_adjective.empty()) {
            auto adjective = RULESETS.translate_equipment_modifier(native_text_to_utf8(caption.raw_adjective));
            if (!adjective) adjective = exact_literal_translation(caption.raw_adjective);
            append_field(field(caption.raw_adjective, adjective, "native-trade-adjective"));
        }
        if (!grown && !material_source.empty()) append_field(material);
        if (caption.type == 29) {
            for (const auto &[selected, native] : {std::pair{caption.right, std::string("right ")},
                    std::pair{caption.left, std::string("left ")}}) {
                if (!selected) continue;
                append_field(field(native, RULESETS.compose_bound_rule("::items::gloves::^handedness", native),
                    "native-trade-handedness"));
            }
        }
        append_field(field(caption.raw_name, noun, "native-trade-type"));
        if (grown) {
            auto composed = RULESETS.compose_bound_rule_result("::items::grown::body",
                "{::items::grown::material} {::items::main}",
                {{"::items::grown::material", material}, {"::items::main", label}}, result.owner);
            if (!composed.usable()) return result;
            label = std::move(composed);
        }
        // A field is captured before its formatted spelling. When the RAW
        // spelling is not a literal substring (pluralization, for example),
        // preserve its parent caption as collection context rather than
        // manufacturing a source range from the translated text.
        for (auto &fragment : label.fragments) {
            const auto field_source = label.source.substr(fragment.source_begin,
                fragment.source_end - fragment.source_begin);
            const auto at = caption.source.find(field_source);
            if (!field_source.empty() && at != std::string::npos) {
                fragment.source_begin = at;
                fragment.source_end = at + field_source.size();
            } else { fragment.source_begin = 0; fragment.source_end = caption.source.size(); }
        }
        label.source = caption.source;
        label.origins.assign(label.target.size(), std::string::npos);
        finish_item_display_result(label, caption.source, "native-trade-item");
        result = std::move(label);
        // Reapply exactly the native count/designation nesting, without
        // treating punctuation in the interior item name as a wrapper.
        const auto wrap = [&](auto &&self, std::string_view value, unsigned depth) -> bool {
            if (depth >= 16) return false;
            if (const auto number = item_number_suffix(value); !number.empty()) {
                if (!self(self, value.substr(0, value.size() - number.size()), depth + 1)) return false;
                result.target += number;
                result.origins.resize(result.target.size(), std::string::npos);
                return true;
            }
            const auto designation = split_item_designation(value);
            if (!designation.prefix.empty()) {
                if (!self(self, designation.item, depth + 1)) return false;
                for (auto &fragment : result.fragments) {
                    fragment.target_begin += designation.prefix.size();
                    fragment.target_end += designation.prefix.size();
                }
                result.target = designation.prefix + result.target + designation.suffix;
                result.origins.assign(result.target.size(), std::string::npos);
            }
            return true;
        };
        if (!wrap(wrap, trim_view(caption.source), 0)) return preserved_item_field(caption.source, "native-trade-item");
        result.owner = std::to_string(caption.owner) + ":" + std::to_string(caption.id);
        return result;
    } catch (const TranslationWorkLimit &) {
        if (!work.owns_budget()) throw;
        return preserved_item_field(caption.source, "native-trade-item", TranslationStatus::WorkLimited);
    }
}
