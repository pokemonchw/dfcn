// The first switch in the native description supplier is indexed by
// item_type (BAR through BOLT_THROWER_PARTS). Each entry selects its own
// existing item grammar, even for identical English material/noun forms.
static constexpr std::string_view embark_item_families[] = {
    "bar", "smallgem", "blocks", "rough", "boulder", "wood", "door", "floodgate",
    "bed", "chair", "chain", "flask", "goblet", "instrument", "toy", "window",
    "cage", "barrel", "bucket", "animaltrap", "table", "coffin", "statue", "corpse",
    "weapon", "armor", "shoes", "shield", "helm", "gloves", "box", "bag", "bin",
    "armorstand", "weaponrack", "cabinet", "figurine", "amulet", "scepter", "ammo",
    "crown", "ring", "earring", "bracelet", "gem", "anvil", "corpsepiece", "remains",
    "meat", "fish", "fish_raw", "vermin", "pet", "seeds", "plant", "skin_tanned",
    "plant_growth", "thread", "cloth", "totem", "pants", "backpack", "quiver",
    "catapultparts", "ballistaparts", "siegeammo", "ballistaarrowhead", "trapparts",
    "trapcomp", "drink", "powder_misc", "cheese", "food", "liquid_misc", "coin",
    "glob", "rock", "pipe_section", "hatch_cover", "grate", "quern", "millstone",
    "splint", "crutch", "traction_bench", "orthopedic_cast", "tool", "slab", "egg",
    "book", "sheet", "branch", "boltthrowerparts"
};

std::optional<std::string> Overlay::translate_embark_list_item(const NativeEmbarkListItem &item) const {
    if (item.name.empty() || item.count < 1) return std::nullopt;
    const std::string name = lower(native_text_to_utf8(item.name));
    const std::string key = "embark-list|" + std::to_string(item.type) + "|" +
        std::to_string(item.subtype) + "|" + std::to_string(item.material) + "|" +
        std::to_string(item.material_index) + "|" + item.builtin_solid_id + "|" + name;
    auto label = memoize_item_translation(key, [&]() -> std::optional<std::string> {
        // The native default case supplies an optional material followed by
        // "item", even when no concrete type is specified in the choice.
        if (item.type < 0 || size_t(item.type) >= std::size(embark_item_families)) {
            const std::string_view noun = name.ends_with("items") ? "items" : "item";
            if (name == noun) return "物品";
            if (name.size() > noun.size() && name.ends_with(noun) &&
                    name[name.size() - noun.size() - 1] == ' ') {
                const auto material = std::string_view(name).substr(0, name.size() - noun.size() - 1);
                if (auto target = translate_material_name(material, true)) return *target + "物品";
                return std::string(material) + "物品";
            }
            return std::nullopt;
        }
        if (!item.builtin_solid_id.empty())
            if (auto solid = RULESETS.translate_builtin_material_solid(item.builtin_solid_id)) return solid;
        if (item.type == 4 && item.material == 0 && item.material_index >= 0) {
            if (auto ore = translate_named_stone_material(name)) return ore;
            if (auto stone = RULESETS.translate_material_state(name, false)) return stone;
        }
        if (item.type == 5)
            if (auto wood = translate_wood_item_caption(item.name, false, true, true)) return wood;
        if (item.type == 13)
            if (auto instrument = translate_embark_instrument_item(item.name)) return instrument;
        if (item.type == 53)
            if (auto seed = translate_plant_seed_item_name(name)) return seed;
        if (item.type == 48 || item.type == 49 || item.type == 50 ||
                item.type == 54 || item.type == 56 || (item.type >= 69 && item.type <= 73))
            if (auto food = translate_embark_food_item({item.name})) return food;
        std::vector<size_t> origins;
        const std::string scope = "::items::" + std::string(embark_item_families[item.type]);
        if (auto target = RULESETS.translate_with_origins(name, scope, origins);
                target && !target->empty() && *target != name) return target;
        // World-defined instrument parts, RAW names and project vocabulary
        // can extend the fixed item grammar. Use the one complete native noun.
        return translate_embark_equipment_item(item.name, -1, -1, item.name);
    });
    if (!label || label->empty() || item.count == 1) return label;
    std::string_view classifier = "件";
    switch (item.type) {
    case 0: case 2: case 4: case 58: classifier = "块"; break;
    case 1: case 3: case 41: case 44: case 74: case 88: classifier = "枚"; break;
    case 5: case 39: case 83: case 91: classifier = "根"; break;
    case 10: classifier = "条"; break;
    case 11: case 12: case 16: case 17: case 18: case 30: case 31:
    case 32: case 45: case 61: case 62: classifier = "个"; break;
    case 24: classifier = "把"; break;
    case 26: case 29: classifier = "双"; break;
    case 27: classifier = "面"; break;
    case 48: case 49: case 50: case 53: case 54: case 56:
    case 69: case 70: case 71: case 72: case 73: classifier = "份"; break;
    case 57: classifier = "卷"; break;
    case 82: classifier = "副"; break;
    case 90: classifier = "张"; break;
    default: break;
    }
    return std::to_string(item.count) + " " + std::string(classifier) + *label;
}

static uintptr_t native_fortress_embark_items_view() {
    const uintptr_t base = native_history_profile_base();
    const uintptr_t view = native_current_viewscreen();
    uintptr_t table = 0;
    int32_t tab = -1;
    return view && native_history_copy(view, table) &&
        table == native_reference_address(base, 0x17490b0) &&
        native_history_copy(view + 0x740, tab) && tab == 1 ? view : 0;
}

bool Overlay::native_embark_item_list_matches(uintptr_t view, int only_y, const unsigned char *screen_override,
        std::vector<Match> &matches) const {
    // The confirmation and both save dialogs can overdraw the list on the
    // same graphics layer. Leave their text available to the dialog renderer.
    for (const size_t offset : {0x76d, 0x7d1, 0x7f8}) {
        uint8_t modal = 0;
        if (!native_history_copy(view + offset, modal) || modal) return false;
    }
    const uintptr_t base = native_history_profile_base();
    const auto rows = captured_native_drawn_text_view();
    const auto after_call = [](uintptr_t site) {
        return site ? site + 5 : 0;
    };
    const auto heading = after_call(native_reference_address(base, 0x105e53f));
    if (std::none_of(rows.begin(), rows.end(), [&](const auto &row) {
            return (row.embark_list_item || (heading && row.native_caller == heading)) &&
                row.draw_dimx == gps_->dimx && row.draw_dimy == gps_->dimy;
        })) return false;
    if (screen_override && screen_override != gps_->screen) return true;
    const std::array category{after_call(native_reference_address(base, 0x105ea27)),
        after_call(native_reference_address(base, 0x105ea5b)),
        after_call(native_reference_address(base, 0x105ea96)),
        after_call(native_reference_address(base, 0x105f6cf))};
    const auto left_cost = after_call(native_reference_address(base, 0x105effb));
    const auto right_number = after_call(native_reference_address(base, 0x105fcea));
    const auto right_suffix = after_call(native_reference_address(base, 0x105fd13));
    const auto visible = [&](const NativeDrawnTextRow &row) {
        if (!row.native_caller || row.draw_dimx != gps_->dimx || row.draw_dimy != gps_->dimy ||
                row.x < 0 || row.x >= gps_->dimx || row.y < 0 || row.y >= gps_->dimy ||
                (only_y >= 0 && row.y != only_y) || row.source.empty() ||
                row.source.size() > size_t(gps_->dimx - row.x)) return false;
        if (!screen_override && gps_->top_in_use)
            for (size_t i = 0; i < row.source.size(); ++i)
                if (native_ui_top_layer_at(*gps_, (row.x + i) * gps_->dimy + row.y)) return false;
        return true;
    };
    for (const auto &row : rows) {
        if (!visible(row)) continue;
        std::string source = row.source;
        std::optional<std::string> target;
        int rule = -13;
        if (row.embark_list_item) {
            target = translate_embark_list_item(*row.embark_list_item);
            rule = kNativeEmbarkItemRule;
        } else if (std::find(category.begin(), category.end(), row.native_caller) != category.end()) {
            if (const auto label = translate_embark_item_category(source)) target = std::string(*label);
        } else if (row.native_caller == left_cost || row.native_caller == right_number) {
            // The right pane draws its decimal and " pts" in separate calls.
            if (row.native_caller == right_number) {
                auto suffix = std::find_if(rows.begin(), rows.end(), [&](const auto &s) {
                    return s.native_caller == right_suffix && s.y == row.y &&
                        s.x == row.x + static_cast<int>(source.size()) && visible(s);
                });
                if (suffix == rows.end()) continue;
                source += suffix->source;
            }
            if (is_embark_point_cost(source))
                target = source.substr(0, source.find(' ')) + " 点";
        }
        if (!target || target->empty()) continue;
        Match match{row.x, row.y, static_cast<int>(source.size()), rule, std::move(*target), source};
        match.native_source = source;
        if (row.embark_list_item) {
            match.layout_x = row.x;
            match.layout_left = true;
        }
        matches.push_back(std::move(match));
    }
    return true;
}
