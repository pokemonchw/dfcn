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

enum class EmbarkItemField { Item, Category, Cost, CostNumber, CostSuffix };

struct NativeEmbarkItemFrame {
    struct Row {
        int x, y;
        EmbarkItemField field;
        std::string source;
        std::optional<NativeEmbarkListItem> item;
    };
    const unsigned char *grid = nullptr;
    int width = 0, height = 0;
    bool modal = false;
    std::vector<Row> rows;
};

// The producer alternates two native grids. Keep the field identities with
// their grid until the game actually writes that grid again.
static std::array<NativeEmbarkItemFrame, 2> g_native_embark_item_frames;

static const NativeEmbarkItemFrame *native_embark_item_frame(const graphicst *graphics) {
    if (!graphics || !graphics->screen) return nullptr;
    const auto *grid = graphics->screen;
    if (NativeTooltipPageScope::grid_origin(*graphics, 0)) {
        const auto *page = native_graphics();
        if (page) grid = page->screen;
    }
    for (const auto &frame : g_native_embark_item_frames)
        if (frame.grid == grid && frame.width == graphics->dimx &&
                frame.height == graphics->dimy) return &frame;
    return nullptr;
}

bool Overlay::uses_native_embark_item_text() const {
    const auto *frame = native_embark_item_frame(gps_);
    return frame && !frame->modal && !embark_pause_menu_active_ && !embark_pause_snapshot_active_;
}

void Overlay::replace_native_embark_tab_glyphs(NativeUiLayerGrid &input) {
    // The graphical tab writer emits a one-column, two-row anchored font
    // tile per letter. The underlying character cell only supplies its RGB.
    const auto *frame = native_embark_item_frame(gps_);
    if (!frame || embark_pause_menu_active_ || embark_pause_snapshot_active_ ||
            gps_->dimy < 4 || !gps_->screentexpos_anchored) return;
    constexpr int y = 2;
    const auto *anchors = gps_->screentexpos_anchored;
    const NativeBitmapFontTextures fonts(true);
    const auto letter = [&](int x) -> char {
        if (x >= gps_->dimx) return 0;
        const size_t tile = static_cast<size_t>(x) * gps_->dimy + y;
        if (anchors[tile] <= 0 || anchors[tile + 1] != anchors[tile] ||
                native_ui_top_layer_at(*gps_, tile) || native_ui_top_layer_at(*gps_, tile + 1)) return 0;
        for (const char ch : std::string_view("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"))
            if (fonts.contains(anchors[tile], ch)) return ch;
        return 0;
    };
    struct Tab { int x; std::string source; };
    std::vector<Tab> tabs;
    for (int x = 0; x < gps_->dimx;) {
        const char first = letter(x++);
        if (!first) continue;
        Tab tab{x - 1, std::string(1, first)};
        while (const char ch = letter(x)) { tab.source += ch; ++x; }
        tabs.push_back(std::move(tab));
    }
    // These are the three consecutive captions from the item tab renderer.
    // The first can be a world-specific plural supplied by the game.
    const auto items = std::find_if(tabs.begin(), tabs.end(), [](const Tab &tab) {
        return tab.source == "Items";
    });
    if (items == tabs.end() || items + 1 == tabs.end() || (items + 1)->source != "Animals") return;
    auto first = items;
    if (first != tabs.begin()) {
        const auto &previous = *(first - 1);
        const auto centre = [](const Tab &tab) { return 2 * tab.x + static_cast<int>(tab.source.size()); };
        if (std::abs(centre(*first) - centre(previous) - 32) <= 1) --first;
    }
    for (auto tab = first; tab != items + 2; ++tab) {
        const auto target = exact_literal_translation(tab->source);
        if (!target || target->empty()) continue;
        const int width = static_cast<int>(tab->source.size());
        const size_t begin = static_cast<size_t>(tab->x) * gps_->dimy + y;
        auto &paint_anchors = input.planes[0].textures[2];
        for (int i = 0; i < width; ++i) {
            const size_t tile = begin + static_cast<size_t>(i) * gps_->dimy;
            paint_anchors[tile] = paint_anchors[tile + 1] = 0;
        }
        std::erase_if(prepared_matches_, [&](const Match &m) {
            return m.source == tab->source && m.y >= y - 1 && m.y <= y + 1 &&
                m.x < tab->x + width && tab->x < m.x + m.length;
        });
        Match caption{tab->x, y, width, -13, *target, tab->source};
        const auto *cell = gps_->screen + begin * 8;
        caption.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
        caption.layout_x = tab->x;
        caption.layout_y = y;
        caption.layout_pixel_y = std::max(1, gps_->tile_pixel_y / 4);
        caption.layout_prepared = true;
        prepared_matches_.push_back(std::move(caption));
    }
}

static void capture_native_embark_item_frame(const graphicst *graphics) {
    if (!graphics || !graphics->screen) {
        g_native_embark_item_frames = {};
        return;
    }
    auto &frames = g_native_embark_item_frames;
    if (frames[0].grid != graphics->screen && (frames[0].grid || frames[1].grid == graphics->screen))
        std::swap(frames[0], frames[1]);
    auto &frame = frames[0];
    frame = {};
    const uintptr_t base = native_history_profile_base();
    const uintptr_t view = native_current_viewscreen();
    uintptr_t table = 0;
    int32_t tab = -1;
    if (!view || !native_history_copy(view, table) ||
            table != native_reference_address(base, 0x17490b0) ||
            !native_history_copy(view + 0x740, tab) || tab != 1) return;
    NativeEmbarkItemFrame captured;
    captured.grid = graphics->screen;
    captured.width = graphics->dimx;
    captured.height = graphics->dimy;
    for (const size_t offset : {0x76d, 0x7d1, 0x7f8}) {
        uint8_t modal = 0;
        if (!native_history_copy(view + offset, modal) || modal) {
            captured.modal = true;
            frame = std::move(captured);
            return;
        }
    }
    const auto after_call = [](uintptr_t site) {
        return site ? site + 5 : 0;
    };
    const std::array category{after_call(native_reference_address(base, 0x105ea27)),
        after_call(native_reference_address(base, 0x105ea5b)),
        after_call(native_reference_address(base, 0x105ea96)),
        after_call(native_reference_address(base, 0x105f6cf))};
    const auto left_cost = after_call(native_reference_address(base, 0x105effb));
    const auto right_number = after_call(native_reference_address(base, 0x105fcea));
    const auto right_suffix = after_call(native_reference_address(base, 0x105fd13));
    std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    for (const auto &draw : g_native_drawn_text_rows) {
        if (!draw.native_caller || draw.draw_epoch != epoch || draw.draw_grid != captured.grid ||
                draw.draw_dimx != captured.width || draw.draw_dimy != captured.height) continue;
        EmbarkItemField field;
        if (draw.embark_list_item) field = EmbarkItemField::Item;
        else if (draw.native_caller == left_cost) field = EmbarkItemField::Cost;
        else if (draw.native_caller == right_number) field = EmbarkItemField::CostNumber;
        else if (draw.native_caller == right_suffix) field = EmbarkItemField::CostSuffix;
        else if (std::find(category.begin(), category.end(), draw.native_caller) != category.end())
            field = EmbarkItemField::Category;
        else continue;
        captured.rows.push_back({draw.x, draw.y, field, draw.source, draw.embark_list_item});
    }
    frame = std::move(captured);
}

bool Overlay::native_embark_item_list_matches(const NativeEmbarkItemFrame &frame, int only_y,
        const unsigned char *screen_override, std::vector<Match> &matches) const {
    if (frame.modal || frame.rows.empty()) return false;
    if (screen_override && screen_override != gps_->screen) return true;
    const auto &rows = frame.rows;
    std::optional<NativeBitmapFontTextures> fonts;
    const auto visible = [&](const NativeEmbarkItemFrame::Row &row) {
        if (row.x < 0 || row.x >= gps_->dimx || row.y < 0 || row.y >= gps_->dimy ||
                (only_y >= 0 && row.y != only_y) || row.source.empty() ||
                row.source.size() > size_t(gps_->dimx - row.x)) return false;
        for (size_t i = 0; i < row.source.size(); ++i) {
            const size_t tile = (row.x + i) * gps_->dimy + row.y;
            const unsigned char ch = gps_->screen[tile * 8];
            if (!screen_override && native_ui_top_layer_at(*gps_, tile)) return false;
            const auto expected = static_cast<unsigned char>(row.source[i]);
            if ((ch ? ch : ' ') == expected) continue;
            if (ch && ch != ' ') return false;
            if (!fonts) fonts.emplace(true);
            const auto glyph_at = [&](const auto *textures) {
                return textures && fonts->contains(textures[tile], expected);
            };
            if (!glyph_at(gps_->screentexpos) && !glyph_at(gps_->screentexpos_lower) &&
                    !glyph_at(gps_->screentexpos_anchored)) return false;
        }
        return true;
    };
    for (const auto &row : rows) {
        if (!visible(row)) continue;
        std::string source = row.source;
        std::optional<std::string> target;
        int rule = -13;
        if (row.item) {
            target = translate_embark_list_item(*row.item);
            rule = kNativeEmbarkItemRule;
        } else if (row.field == EmbarkItemField::Category) {
            if (const auto label = translate_embark_item_category(source)) target = std::string(*label);
        } else if (row.field == EmbarkItemField::Cost || row.field == EmbarkItemField::CostNumber) {
            // The right pane draws its decimal and " pts" in separate calls.
            if (row.field == EmbarkItemField::CostNumber) {
                auto suffix = std::find_if(rows.begin(), rows.end(), [&](const auto &s) {
                    return s.field == EmbarkItemField::CostSuffix && s.y == row.y &&
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
        if (row.item) {
            match.layout_x = row.x;
            match.layout_left = true;
        }
        matches.push_back(std::move(match));
    }
    return true;
}
