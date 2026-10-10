// Complete item designations are shared by inventory rows and their actions.
// Counts, quality/ownership marks, creature materials and minted identities
// retain the same grammar when embedded inside an action sentence.
std::optional<std::string> Overlay::translate_inventory_item_name(
        std::string_view source, int y, int x) const {
    source = trim_view(source);
    if (source.empty()) return std::nullopt;
    // The native item describer chooses an article for ordinary items and
    // omits it for named objects. It belongs to the surrounding grammar.
    for (std::string_view article : {"the ", "an ", "a "}) {
        if (!source.starts_with(article)) continue;
        source = trim_view(source.substr(article.size()));
        break;
    }
    if (source.empty()) return std::nullopt;
    auto complete = [](const std::optional<std::string> &target) {
        return target && !target->empty() &&
            target->find("[C:") == std::string::npos &&
            std::none_of(target->begin(), target->end(), [](unsigned char ch) {
                return (ch >= 'a' && ch <= 'z') ||
                    (ch >= 'A' && ch <= 'Z') || ch == '\n' || ch == '\r';
            });
    };
    if (auto target = translate_coin_item_name(source); complete(target)) return target;
    if (const auto suffix = item_number_suffix(source); !suffix.empty()) {
        const auto target = translate_inventory_item_name(
            source.substr(0, source.size() - suffix.size()), y, x);
        if (target) return *target + std::string(suffix);
        return std::nullopt;
    }
    const ItemDesignationText designation = split_item_designation(source);
    if (!designation.prefix.empty() || !designation.suffix.empty()) {
        const auto target = translate_inventory_item_name(designation.item, y, x);
        if (target) return designation.prefix + *target + designation.suffix;
        return std::nullopt;
    }
    if (auto target = translate_wood_item_caption(source)) return target;
    if (auto target = translate_item_caption_grammar(source)) return target;
    if (auto target = translate_arena_equipment_source_phrase(source); complete(target))
        return target;
    if (auto target = translate_embark_equipment_item(source, y, x, source); complete(target))
        return target;
    if (auto target = exact_literal_translation(source); complete(target)) return target;
    // A typed depicted subject can retain an authored nickname. Preserve its
    // complete-name proof here without admitting English in generic fallbacks.
    if (auto target = translate_item_description_term(source);
            translation_complete_with_native_nicknames(target, source) &&
            target->find("[C:") == std::string::npos &&
            target->find_first_of("\r\n") == std::string::npos) return target;
    if (auto target = translate_written_item_caption(source); complete(target)) return target;
    if (auto target = translate_procedural_fragment(std::string(source), false, false, {},
            ProceduralFragmentContext::native_item_name); complete(target)) return target;
    if (auto target = translate_compositional(std::string(source)); complete(target)) return target;
    return std::nullopt;
}

// Location labels can wrap a body part, or name a containing item. Resolve
// the complete body part through the shared anatomy grammar before composing
// the wrapper; its Chinese wording belongs to the existing translation table.
std::optional<std::string> Overlay::translate_inventory_location(
        std::string_view source, int y, int x) const {
    source = trim_view(source);
    const std::string folded = lower(std::string(source));
    constexpr std::pair<std::string_view, std::string_view> anatomy_wrappers[] = {
        {"wrapped around ", "Inventory location: Wrapped around"},
        {"strapped to ", "Inventory location: Strapped to"},
        {"stuck in ", "Inventory location: Stuck in"},
        {"sewn into ", "Inventory location: Sewn into"},
    };
    for (const auto &[wrapper, key] : anatomy_wrappers) {
        if (!folded.starts_with(wrapper)) continue;
        const auto part = translate_legends_anatomy(source.substr(wrapper.size()));
        const auto prefix = exact_literal_translation(key);
        if (!part || !prefix) return std::nullopt;
        return *prefix + *part;
    }
    constexpr std::string_view nocked_in = "nocked in ";
    if (folded.starts_with(nocked_in)) {
        const auto item = translate_inventory_item_name(source.substr(nocked_in.size()), y, x);
        auto target = exact_literal_translation("Inventory location: Nocked in {s}");
        if (!item || !target) return std::nullopt;
        const size_t at = target->find("{s}");
        if (at == std::string::npos) return std::nullopt;
        target->replace(at, 3, *item);
        return target;
    }
    // These are independent inventory-mode branches in the native location
    // formatter, not item names or generic switch labels.
    for (const std::string_view literal : {
            "In Mouth", "Hidden", "Hauled", "Multigrasp", "body part", "On head", "Nocked"}) {
        if (folded != lower(std::string(literal))) continue;
        if (auto target = exact_literal_translation(
                "Inventory location: " + std::string(literal))) return target;
        return exact_literal_translation(literal);
    }
    constexpr std::string_view inside = "in ";
    if (folded.starts_with(inside)) {
        // Piercings use a complete location such as `In Left ear`. Only
        // accept a known body part here; containers keep the item-name path.
        if (const auto part = translate_legends_anatomy(source.substr(inside.size()))) {
            // Preserve established complete labels, including `In Mouth`.
            if (auto target = exact_literal_translation(source)) return target;
            auto target = exact_literal_translation("Inventory location: In {s}");
            if (!target) return std::nullopt;
            const size_t at = target->find("{s}");
            if (at == std::string::npos) return std::nullopt;
            target->replace(at, 3, *part);
            return target;
        }
    }
    // Bare wearer/contaminant locations have the same anatomical meaning as
    // `In ...`, `Strapped to ...` and `Sewn into ...`. Do not send `right eye`
    // through the item segmenter, where a procedural name sense of `right`
    // can win instead.
    if (const auto part = translate_legends_anatomy(source)) return part;
    return translate_inventory_item_name(source, y, x);
}

#include "adventure_environment_material.inc"

// Both the item modal and the map context chooser use these complete action
// constructors. Keep item designations and directions typed in both places,
// including native search candidates that have no screen coordinates.
std::optional<std::string> Overlay::translate_adventure_item_action(
        const std::string &source, int y, int x) const {
    const auto complete_term = [](const std::optional<std::string> &target) {
        return target && !target->empty() && target->find("[C:") == std::string::npos &&
            target->find_first_of("\r\n") == std::string::npos &&
            std::none_of(target->begin(), target->end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
            });
    };
    // The native 74f220 formatter has 27 complete outputs: eight compass
    // directions with optional /Above or /Below, then Here/Above/Below.
    // Reuse the adventure rules first, keeping their compass abbreviations
    // out of the result when an older ruleset still leaves N/S/E/W literal.
    const auto direction = [&](std::string_view value) -> std::optional<std::string> {
        constexpr std::string_view compass[] = {
            "NW", "NE", "SW", "SE", "North", "South", "East", "West"};
        const size_t slash = value.find('/');
        const auto horizontal = value.substr(0, slash);
        const bool compass_direction = std::find(std::begin(compass), std::end(compass),
            horizontal) != std::end(compass);
        if (slash == std::string_view::npos) {
            if (!compass_direction && value != "Here" && value != "Above" && value != "Below")
                return std::nullopt;
        } else if (!compass_direction ||
                (value.substr(slash + 1) != "Above" && value.substr(slash + 1) != "Below")) {
            return std::nullopt;
        }
        std::vector<size_t> origins;
        const auto wrapped = RULESETS.translate_with_origins(" (" + std::string(value) + ")",
            "::adv::direction", origins);
        if (complete_term(wrapped)) {
            const auto inner = trim_view(*wrapped);
            if (inner.starts_with('(') && inner.ends_with(')'))
                return std::string(trim_view(inner.substr(1, inner.size() - 2)));
        }
        return translate_ui_message_capture(value, false);
    };
    const auto location = [&](std::string_view value, const Rule &rule)
            -> std::optional<std::string> {
        const bool climbing = rule.source.starts_with("Climb to ");
        const bool holding = rule.source.starts_with("Hold ") ||
            rule.source.starts_with("Hang from ");
        const bool media_allowed = climbing || holding ||
            rule.source.starts_with("Move to ") || rule.source.starts_with("Charge ") ||
            rule.source == "Climb ({p})" || rule.source.starts_with("Climb {s}");
        // Air, water and magma are three independent append branches, in
        // that order. A shallow liquid can therefore emit /Air/Water, and
        // the direction's own /Above or /Below remains a separate field.
        std::vector<std::string_view> media;
        if (media_allowed) {
            for (;;) {
                const size_t slash = value.rfind('/');
                if (slash == std::string_view::npos) break;
                const auto medium = value.substr(slash + 1);
                if (medium != "Air" && medium != "Water" && medium != "Lava" && medium != "Magma")
                    break;
                media.push_back(medium);
                value = value.substr(0, slash);
            }
            std::reverse(media.begin(), media.end());
            int previous = -1;
            for (const auto medium : media) {
                const int order = medium == "Air" ? 0 : medium == "Water" ? 1 : 2;
                if (order <= previous) return std::nullopt;
                previous = order;
            }
        }
        std::optional<std::string> target;
        const size_t at = climbing ? value.find(" holding ") :
            holding ? value.find(" from ") : std::string_view::npos;
        const bool releasing = climbing && value.ends_with(" releasing hold");
        if (at != std::string_view::npos || releasing) {
            const auto base = direction(value.substr(0, releasing ?
                value.size() - std::string_view(" releasing hold").size() : at));
            if (!base) return std::nullopt;
            // Existing adv::climb productions own the complete holding or
            // releasing phrase. Other native directions use the same strict
            // formatter instead of treating the remainder as a free name.
            if (climbing) {
                std::vector<size_t> origins;
                auto wrapped = RULESETS.translate_with_origins(" (" + std::string(value) + ")",
                    "::adv::climb::direction", origins);
                if (complete_term(wrapped)) {
                    const auto inner = trim_view(*wrapped);
                    if (inner.starts_with('(') && inner.ends_with(')'))
                        target = std::string(trim_view(inner.substr(1, inner.size() - 2)));
                }
            }
            const auto qualifier = exact_literal_translation(releasing ?
                "Adventure movement qualifier: releasing hold" : climbing ?
                "Adventure movement qualifier: holding" : "Adventure movement qualifier: from");
            if (!qualifier) return std::nullopt;
            if (releasing) {
                if (!target) target = *base + *qualifier;
            } else {
                const auto held = direction(value.substr(at + (climbing ? 9 : 6)));
                if (!held) return std::nullopt;
                if (!target) target = *base + *qualifier + *held;
            }
        } else target = direction(value);
        if (!target) return std::nullopt;
        for (const auto medium : media) {
            const auto term = exact_literal_translation("Adventure movement medium: " + std::string(medium));
            if (!term) return std::nullopt;
            *target += "/" + *term;
        }
        return target;
    };
    for (const Rule &rule : adventure_item_action_rules_) {
        if (rule.template_kinds.empty()) {
            if (rule.source == source) return rule.target;
            continue;
        }
        if (!source.starts_with(rule.template_literals.front())) continue;
        std::vector<std::string> captures;
        std::vector<std::optional<std::string>> resolved;
        // Typed, complete captures disambiguate separators inside an
        // item's own name. For example, Fill has two full item/material
        // fields, while Eat's parenthesis is an item, not a direction.
        auto parse = [&](auto &&self, size_t slot, size_t at) -> bool {
            if (slot == rule.template_kinds.size()) return at == source.size();
            const auto &literal = rule.template_literals[slot + 1];
            size_t end = literal.empty() ? source.size() : source.find(literal, at + 1);
            for (; end != std::string::npos; end = literal.empty()
                     ? std::string::npos : source.find(literal, end + 1)) {
                if (end <= at) continue;
                const std::string value = source.substr(at, end - at);
                std::optional<std::string> target;
                const char kind = rule.template_kinds[slot];
                if (kind == 'n') {
                    target = exact_literal_translation("Adventure action target: " + value);
                    if (!target) target = translate_ui_message_capture(value, true);
                } else if (kind == 'p') target = location(value, rule);
                else if (kind == 'd') {
                    // Path captions append the absolute integer level count.
                    // It stays numeric data and cannot become an item/name.
                    if (!value.empty() && std::all_of(value.begin(), value.end(),
                            [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                        target = value;
                } else if (kind == 's') {
                    // The vermin constructor's article precedes one RAW
                    // singular species field, never an equipment designation.
                    if (rule.source == "A {s} ({p})") {
                        target = translate_creature_descriptor(value, true);
                        if (!target || target->empty()) continue;
                        captures.push_back(value);
                        resolved.push_back(std::move(target));
                        if (self(self, slot + 1, end + literal.size())) return true;
                        captures.pop_back();
                        resolved.pop_back();
                        continue;
                    }
                    // Environment ingestion/filling uses STATE_ADJ for every
                    // deposit before its final STATE_NAME, unlike item names.
                    // Unit/item contaminant choices instead own a complete
                    // deposit and an anatomical/container location.
                    const bool environment_material =
                        (slot == 1 && rule.source.starts_with("Fill {s} with ")) ||
                        (slot == 1 && rule.source.starts_with("Suck {n}'s ")) ||
                        (slot == 0 && (rule.source.starts_with("Eat {s}") ||
                                      rule.source.starts_with("Drink {s}")) &&
                            rule.source.find(" from ") == std::string::npos);
                    if (environment_material)
                        target = translate_adventure_environment_material(value);
                    if (!target) target = exact_literal_translation("Adventure action target: " + value);
                    const bool terrain = rule.source.starts_with("Move to ") ||
                        rule.source.starts_with("Charge ") ||
                        rule.source.starts_with("Climb to ") || rule.source.starts_with("Hold ") ||
                        rule.source.starts_with("Hang from ") || rule.source.starts_with("Dismount to ") ||
                        rule.source.starts_with("Release hold on ") || rule.source.starts_with("Fell ") ||
                        rule.source.starts_with("Ignite ") || rule.source.starts_with("Shoot ") ||
                        rule.source.starts_with("Throw at ");
                    if (!target && terrain)
                        target = RULESETS.translate_tile_description(native_text_to_utf8(value));
                    std::vector<size_t> origins;
                    if (!target) target = RULESETS.translate_with_origins(
                        native_text_to_utf8(value), "::health::contaminant::inventory", origins);
                    if (!target) target = translate_inventory_item_name(value, y, x);
                    if (!target) target = translate_inventory_location(value, y, x);
                    if (!target) target = translate_ui_message_capture(value, false);
                }
                if (!target || target->empty()) continue;
                captures.push_back(value);
                resolved.push_back(std::move(target));
                if (self(self, slot + 1, end + literal.size())) return true;
                captures.pop_back();
                resolved.pop_back();
            }
            return false;
        };
        if (parse(parse, 0, rule.template_literals.front().size()))
            return fill_template(rule, captures, &capture_translations_, nullptr, &resolved);
    }
    return std::nullopt;
}

// Item selection and action modals share colored keyboard fields and omit
// the inventory's right-hand view buttons. Their titles establish whether
// each complete caption is an item designation or an action sentence, before
// dictionary matching can split its material and noun into unrelated labels.
std::vector<Match> Overlay::capture_adventure_item_modal(
        const std::vector<std::string> &rows) const {
    std::vector<Match> matches;
    constexpr std::string_view action_heading = "What will you do with ";
    constexpr std::string_view destination_heading = "Where do you put ";
    constexpr std::string_view item_headings[] = {
        "What do you want to place?", "What do you want to remove?",
        "What do you want to throw?", "What do you want to eat or drink?",
        "What do you want to wear?", "What do you want to drop?",
        "With what do you want to interact?",
    };
    std::string_view heading;
    bool item_choices = false;
    auto collapse = [](std::string_view source) {
        std::string result;
        bool gap = false;
        for (char ch : source) {
            if (ch == ' ') { gap = !result.empty(); continue; }
            if (gap) result.push_back(' ');
            result.push_back(ch);
            gap = false;
        }
        return result;
    };
    int title_y = -1, title_x = -1;
    std::optional<AsciiPanelFrame> frame;
    const NativePanelBorders borders(*gps_, true);
    for (int y = 0; y < gps_->dimy && !frame; ++y) {
        heading = action_heading;
        size_t at = rows[y].find(heading);
        item_choices = false;
        if (at == std::string::npos) {
            at = rows[y].find(destination_heading);
            if (at != std::string::npos) {
                heading = destination_heading;
                item_choices = true;
            }
        }
        if (at == std::string::npos) {
            for (const auto candidate : item_headings) {
                at = rows[y].find(candidate);
                if (at == std::string::npos) continue;
                heading = candidate;
                item_choices = true;
                break;
            }
        }
        if (at == std::string::npos) continue;
        const int x = static_cast<int>(at);
        // Done has its own vertical sides on the title row. Only a complete
        // enclosing panel can establish the modal's bounds; the nearest
        // side may belong to that button instead of the outer frame.
        if (const auto panel = native_panel_interior(
                borders, *gps_, x, x + static_cast<int>(heading.size()), y))
            frame = AsciiPanelFrame{panel->x - 1, panel->y - 1,
                panel->x + panel->w, panel->y + panel->h};
        if (!frame) frame = find_graphical_character_panel_frame(
            *gps_, x, x + static_cast<int>(heading.size()), y);
        if (!frame) frame = find_ascii_panel_frame(
            x, x + static_cast<int>(heading.size()), y, gps_->dimx, gps_->dimy,
            [&](int cx, int cy) { return static_cast<unsigned char>(rows[cy][cx]); });
        if (frame) { title_y = y; title_x = x; }
    }
    if (!frame) return matches;
    const auto captures = captured_clipped_captions();
    const std::array drawn_batches{captured_native_drawn_text_rows(),
        captured_native_drawn_text_rows(true)};
    std::vector<std::vector<int>> record_keys(static_cast<size_t>(gps_->dimy));
    std::vector<std::unordered_map<int, NativeAdventureInventoryRole>> record_roles(
        static_cast<size_t>(gps_->dimy));
#ifdef _WIN32
    // Every mode writes its complete caption through this same native call.
    // The renderer fixes the key origin two columns before that draw, even
    // for custom multi-character bindings or its unbound `?` fallback.
    // Source roles come from the actual caller, never key spelling/colour.
    const auto base = native_history_profile_base();
    const uintptr_t name_writer = base ? native_reference_address(base, 0x883790) : 0;
    const uintptr_t key_writer = base ? native_reference_address(base, 0xc3954f) : 0;
    if (name_writer || key_writer) for (const auto &batch : drawn_batches) for (const auto &draw : batch) {
        const bool key_draw = key_writer && draw.native_caller == key_writer;
        if ((!key_draw && (!name_writer || draw.native_caller != name_writer)) || draw.source.empty() ||
            draw.x < frame->left + (key_draw ? 1 : 3) || draw.x >= frame->right ||
            draw.y <= title_y || draw.y >= frame->bottom ||
            draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
            draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
            (!key_draw && draw.source.size() > static_cast<size_t>(frame->right - draw.x))) continue;
        const size_t visible = key_draw ? std::min<size_t>(draw.source.size(), 2) : draw.source.size();
        if (visible > static_cast<size_t>(frame->right - draw.x) ||
            rows[draw.y].compare(draw.x, visible, draw.source, 0, visible) != 0) continue;
        bool top = false;
        const auto *cell = cell_at(draw.x, draw.y, &top);
        if (!cell || top != draw.top_layer) continue;
        auto &keys = record_keys[static_cast<size_t>(draw.y)];
        const int key = key_draw ? draw.x : draw.x - 2;
        if (std::find(keys.begin(), keys.end(), key) == keys.end()) keys.push_back(key);
        if (!key_draw)
            record_roles[static_cast<size_t>(draw.y)].insert_or_assign(
                key, draw.adventure_inventory_role);
    }
#else
    // The shared complete selector rectangle owns the first non-rail ink in
    // this row on ELF. That is the independently drawn key field, whatever
    // its display string; its following caption still begins two cells later.
    for (int y = title_y + 1; y + 1 < frame->bottom; ++y) {
        for (int x = frame->left + 1; x + 2 < frame->right; ++x) {
            auto box = native_picture_caption_rect(*gps_, x, y, false, nullptr, true);
            if (!box) box = native_button_text_rect(*gps_, x, x + 1, y, true);
            if (!box || box->y + 1 != y || box->x <= frame->left ||
                box->x + box->w > frame->right) continue;
            int key = box->x;
            while (key < box->x + box->w && (rows[y][key] == ' ' ||
                    is_cp437_box_separator(rows[y], static_cast<size_t>(key)))) ++key;
            if (key + 2 < box->x + box->w) record_keys[static_cast<size_t>(y)].push_back(key);
            break;
        }
    }
#endif
    auto paired_row = [&](int left, int end, int y) {
        constexpr uint32_t top_half = 1u << 3, bottom_half = 1u << 4;
        auto half_at = [&](int x, int cy) {
            bool top = false;
            const auto *cell = cell_at(x, cy, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            if (!cell || !flags || cell[0] != static_cast<unsigned char>(rows[cy][x]))
                return uint32_t{0};
            return flags[static_cast<size_t>(x) * gps_->dimy + cy] & (top_half | bottom_half);
        };
        const auto half = half_at(left, y);
        if (half != top_half && half != bottom_half) return -1;
        const int other = y + (half == top_half ? 1 : -1);
        if (other < title_y || other >= frame->bottom ||
            rows[y].compare(left, end - left, rows[other], left, end - left) != 0) return -1;
        for (int x = left; x < end; ++x) {
            if (rows[y][x] == ' ') continue;
            if (half_at(x, y) != half || half_at(x, other) !=
                    (half == top_half ? bottom_half : top_half)) return -1;
        }
        return other;
    };
    auto recover = [&](int left, int end, int y, int minimum_x) {
        const std::string visible = rows[y].substr(left, end - left);
        std::string result = visible;
        const int other = paired_row(left, end, y);
        // A native clipping capture can cover the full action or only its
        // item field. Restore exact, current visible substrings from right to
        // left; never infer a missing suffix from the visible prefix alone.
        std::vector<NativeClippedCaption> fields;
        for (const auto &captured : captures) {
            if ((captured.y != y && captured.y != other) ||
                captured.x < minimum_x || captured.x >= end ||
                captured.visible.empty() ||
                captured.visible.size() > static_cast<size_t>(end - captured.x) ||
                rows[y].compare(captured.x,
                    captured.visible.size(), captured.visible) != 0) continue;
            auto capture = captured;
            if (capture.x < left) {
                // Some widgets capture the shortcut and name together.
                // Strip only the byte-matched prefix before the proven name
                // field; an a/an inside that field remains item grammar.
                const size_t prefix = static_cast<size_t>(left - capture.x);
                if (capture.visible.size() <= prefix || capture.complete.size() <= prefix ||
                    capture.complete.compare(0, prefix, capture.visible, 0, prefix) != 0)
                    continue;
                capture.visible.erase(0, prefix);
                capture.complete.erase(0, prefix);
                capture.x = left;
            }
            fields.push_back(std::move(capture));
        }
        // Cached native frames retain their complete draw even when the
        // per-frame clipping registry has advanced. Bind only byte-identical
        // fields on this record's current name/location row and layer.
        for (const auto &batch : drawn_batches) for (const auto &draw : batch) {
            if ((draw.y != y && draw.y != other) || draw.x < minimum_x ||
                draw.x >= end || draw.source.empty() || draw.complete_source.empty() ||
                draw.source.size() > static_cast<size_t>(end - draw.x) ||
                rows[y].compare(draw.x, draw.source.size(), draw.source) != 0) continue;
            bool top = false;
            const auto *cell = cell_at(draw.x, y, &top);
            if (!cell || top != draw.top_layer) continue;
            NativeClippedCaption capture{draw.x, y, draw.source, draw.complete_source};
            if (capture.x < left) {
                const size_t prefix = static_cast<size_t>(left - capture.x);
                if (capture.visible.size() <= prefix || capture.complete.size() <= prefix ||
                    capture.complete.compare(0, prefix, capture.visible, 0, prefix) != 0)
                    continue;
                capture.visible.erase(0, prefix);
                capture.complete.erase(0, prefix);
                capture.x = left;
            }
            fields.push_back(std::move(capture));
        }
        // A complete sentence capture also knows punctuation or suffixes
        // clipped after the item. Prefer it to an overlapping item-only
        // capture so recovering the shorter field cannot lose that tail.
        std::optional<std::string> whole;
        bool ambiguous_whole = false;
        for (const auto &field : fields) {
            if (field.x != left || field.visible.size() != visible.size()) continue;
            if (whole && *whole != field.complete) ambiguous_whole = true;
            whole = field.complete;
        }
        if (whole && !ambiguous_whole) return collapse(*whole);
        std::sort(fields.begin(), fields.end(), [](const auto &a, const auto &b) {
            return a.x > b.x;
        });
        int boundary = end;
        for (const auto &field : fields) {
            if (field.x + static_cast<int>(field.visible.size()) > boundary) continue;
            const bool ambiguous = std::any_of(fields.begin(), fields.end(), [&](const auto &other) {
                return other.x == field.x && other.visible == field.visible &&
                    other.complete != field.complete;
            });
            if (ambiguous) continue;
            result.replace(field.x - left, field.visible.size(), field.complete);
            boundary = field.x;
        }
        return collapse(result);
    };
    auto append = [&](int left, int end, int right, int y, int minimum_x) {
        const auto complete = recover(left, end, y, minimum_x);
        auto target = item_choices
            ? translate_inventory_item_name(complete, y, left)
            : translate_adventure_item_action(complete, y, left);
        const bool translated = target.has_value();
        if (!target) {
            // A proven complete caption owns an unresolved designation or
            // action as one field, instead of partially replacing its words
            // at their separate English positions.
            target = native_text_to_utf8(complete);
        }
        Match match{left, y, end - left,
            item_choices ? kCharacterInventoryItemRule : kAdventureItemActionRule,
            *target, rows[y].substr(left, end - left)};
        match.native_hover_untranslated = !translated;
        match.layout_x = left;
        match.layout_length = right - left;
        match.layout_clip_right = right;
        match.layout_left = true;
        matches.push_back(std::move(match));
    };
    if (item_choices) {
        // The native eleven-mode inventory selector paints three-row records
        // with a five-column picture, a separate key at indent + 7, the item
        // name at indent + 9 and its optional location at indent + 7 below.
        // The complete title and picture/rectangle establish those roles;
        // foreground colours merely reflect the current native selection.
        // Keep each original draw span for suppression, and give both captions
        // the same text origin after the untouched key.
        const auto settings = native_ui_settings();
        const bool classic = settings && settings->classic;
        if (heading == destination_heading) {
            const auto &row = rows[title_y];
            int right = frame->right;
            for (size_t done = row.find("Done", title_x + heading.size());
                 done != std::string::npos && static_cast<int>(done) < right;
                 done = row.find("Done", done + 4)) {
                if (const auto button = native_button_text_span(*gps_,
                        static_cast<int>(done), static_cast<int>(done) + 4, title_y))
                    right = std::max(title_x, button->first - 1);
            }
            int end = right;
            while (end > title_x && row[end - 1] == ' ') --end;
            if (end > title_x) {
                const std::string complete = recover(title_x, end, title_y, title_x);
                if (auto target = translate_adventure_item_action(complete, title_y, title_x)) {
                    Match title{title_x, title_y, end - title_x, kAdventureItemActionRule,
                        std::move(*target), row.substr(title_x, end - title_x)};
                    title.layout_x = title_x;
                    title.layout_length = right - title_x;
                    title.layout_clip_right = right;
                    title.layout_left = true;
                    matches.push_back(std::move(title));
                }
            }
        }
        for (int y = title_y + 1; y + 1 < frame->bottom; ++y) {
            for (const int key : record_keys[static_cast<size_t>(y)]) {
                const int name_x = key + 2;
                auto box = native_picture_caption_rect(
                    *gps_, key, y, false, nullptr, true);
                const bool picture_record = box.has_value();
                // Native contaminant choices deliberately return icon 0.
                // Their same three-row selector rectangle still owns the
                // key, complete deposit name and optional inventory location.
                if (!box) box = native_button_text_rect(
                    *gps_, key, name_x + 1, y, true);
                if (!box || box->y + 1 != y || box->x <= frame->left ||
                    key < box->x + 2 || box->x + box->w > frame->right ||
                    name_x >= box->x + box->w) continue;
                const int right = box->x + box->w;
                const auto role_at = record_roles[static_cast<size_t>(y)].find(key);
                const auto role = role_at == record_roles[static_cast<size_t>(y)].end()
                    ? NativeAdventureInventoryRole::None : role_at->second;
                const size_t record_begin = matches.size();
                int name_pair = -1;
                const auto append_record_field = [&](int source_x, int row_y, bool item) {
                    int left = source_x, end = right;
                    const std::string_view field(rows[row_y].data() + source_x,
                        right - source_x);
                    const auto rail_or_space = [&](int x) {
                        return rows[row_y][x] == ' ' || (classic &&
                            is_cp437_box_separator(field, static_cast<size_t>(x - source_x)));
                    };
                    while (end > left && rail_or_space(end - 1)) --end;
                    while (left < end) {
                        if (rail_or_space(left)) { ++left; continue; }
                        // C4 AE/CD AE can resemble a UTF-8 pair at the
                        // classic lower rail. The native paired ownership
                        // marks prove where its containing-item text opens.
                        const unsigned char edge = rows[row_y][left];
                        const auto tail = std::string_view(rows[row_y]).substr(
                            left + 1, end - left - 1);
                        if (classic && !item && (edge == 0xc4 || edge == 0xcd) &&
                            tail.starts_with("\xAE") && tail.ends_with("\xAF") &&
                            !split_item_designation(tail).prefix.empty()) {
                            ++left;
                            continue;
                        }
                        break;
                    }
                    if (left == end) return;
                    if (item && row_y == y)
                        name_pair = paired_row(left, end, row_y);
                    const std::string complete = recover(left, end, row_y,
                        item ? key : source_x);
                    std::optional<std::string> target;
                    bool action_caption = false;
                    if (item) {
                        // The original option's actual vtable provider owns
                        // the source role before its complete caption is drawn.
                        // Pictures and wording never turn a named item into
                        // an ingestion or placement action on the PE path.
                        const bool action_role = role == NativeAdventureInventoryRole::Action;
                        const bool deposit_role = role == NativeAdventureInventoryRole::Deposit;
                        const bool untyped = role == NativeAdventureInventoryRole::None;
                        if (action_role || (untyped &&
                                (heading == destination_heading || !picture_record)))
                            target = translate_adventure_item_action(complete, row_y, left);
                        action_caption = action_role || target.has_value();
                        std::vector<size_t> origins;
                        const bool deposit_allowed = deposit_role || (untyped && !picture_record);
                        if (!target && deposit_allowed) target = RULESETS.translate_with_origins(
                            native_text_to_utf8(complete), "::health::contaminant::inventory", origins);
                        // View-contaminant captions can wrap a complete
                        // containing-item designation instead of anatomy.
                        // Both typed fields must resolve before composition.
                        if (!target && deposit_allowed && complete.ends_with(')')) {
                            for (size_t at = complete.find(" ("); at != std::string::npos;
                                 at = complete.find(" (", at + 2)) {
                                const auto deposit = RULESETS.translate_with_origins(
                                    native_text_to_utf8(std::string_view(complete).substr(0, at)),
                                    "::health::contaminant::inventory", origins);
                                const auto location = translate_inventory_location(
                                    std::string_view(complete).substr(at + 2,
                                        complete.size() - at - 3), row_y, left);
                                if (!deposit || !location) continue;
                                target = *deposit + "（" + *location + "）";
                                break;
                            }
                        }
                        if (!target && !action_role && !deposit_role)
                            target = translate_inventory_item_name(complete, row_y, left);
                        // The native ingestion vector also contains pictured
                        // blood-sucking and drink-from-container options.
                        // A complete item designation keeps priority in this
                        // mixed mode; only an unresolved field reaches its
                        // finite, typed ingestion-action constructors.
                        if (!target && untyped && picture_record &&
                            heading == "What do you want to eat or drink?") {
                            target = translate_adventure_item_action(complete, row_y, left);
                            action_caption = target.has_value();
                        }
                    } else target = translate_inventory_location(complete, row_y, left);
                    const bool translated = target.has_value();
                    if (!target) target = native_text_to_utf8(complete);
                    Match caption{left, row_y, end - left,
                        item ? (action_caption ? kAdventureItemActionRule : kCharacterInventoryItemRule)
                            : kCharacterInventoryLocationRule,
                        std::move(*target), rows[row_y].substr(left, end - left)};
                    caption.native_hover_untranslated = !translated;
                    caption.layout_x = name_x;
                    caption.layout_length = right - name_x;
                    caption.layout_clip_right = right;
                    caption.layout_left = true;
                    caption.native_picture_caption_box = *box;
                    matches.push_back(std::move(caption));
                };
                append_record_field(name_x, y, true);
                // Half-font copies belong to the same item field. They must
                // reach the existing half-text normalizer with identical
                // rules, rather than becoming a containing-item location.
                if (name_pair == y + 1)
                    append_record_field(name_x, y + 1, true);
                else append_record_field(key, y + 1, false);
                const bool two_lines = classic && std::any_of(
                    matches.begin() + record_begin, matches.end(), [](const Match &caption) {
                        return caption.rule == kCharacterInventoryLocationRule;
                    });
                if (two_lines) for (size_t index = record_begin; index < matches.size(); ++index) {
                    Match &caption = matches[index];
                    caption.layout_y = caption.y - 1;
                    caption.layout_pixel_y = (box->h - 2) * gps_->tile_pixel_y / 2;
                    caption.layout_fixed_baseline = true;
                }
                break;
            }
        }
        return matches;
    }
    for (int y = title_y; y < frame->bottom; ++y) {
        const auto &row = rows[y];
        if (row.compare(title_x, heading.size(), heading) == 0) {
            // Selection prompts already have complete UI-message rules.
            if (item_choices) continue;
            int right = frame->right;
            // A named item can itself contain Done. Only its independently
            // framed native button owns the title's right-hand boundary.
            for (size_t done = row.find("Done", title_x + heading.size());
                 done != std::string::npos && static_cast<int>(done) < right;
                 done = row.find("Done", done + 4)) {
                const auto button = native_button_text_span(*gps_,
                    static_cast<int>(done), static_cast<int>(done) + 4, y);
                if (button) right = std::max(title_x, button->first - 1);
            }
            int end = right;
            while (end > title_x && row[end - 1] == ' ') --end;
            if (end > title_x) append(title_x, end, right, y, title_x);
            continue;
        }
        // The title and complete rectangle establish the native key field.
        // Unframed legacy actions additionally need their coloured shortcut.
        std::vector<int> action_keys = record_keys[static_cast<size_t>(y)];
        const bool typed_record = !action_keys.empty();
        // Retain the existing unframed action path only where the shared
        // inventory renderer supplied no typed caption origin for this row.
        if (action_keys.empty()) for (int key = frame->left + 1;
                key + 2 < frame->right; ++key) {
            const unsigned char ch = row[key];
            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ||
                row[key + 1] != ' ' || (key > frame->left + 1 && row[key - 1] != ' ')) continue;
            action_keys.push_back(key);
        }
        for (const int key : action_keys) {
            const unsigned char ch = row[key];
            int left = key + 2;
            while (left < frame->right && row[left] == ' ') ++left;
            if (left >= frame->right) continue;
            bool key_top = false, text_top = false;
            const auto *key_cell = cell_at(key, y, &key_top);
            const auto *text_cell = cell_at(left, y, &text_top);
            if (!key_cell || !text_cell || key_cell[0] != ch ||
                text_cell[0] != static_cast<unsigned char>(row[left])) continue;
            const bool distinct_key_colour = key_cell[1] != text_cell[1] ||
                key_cell[2] != text_cell[2] || key_cell[3] != text_cell[3];
            // Picture-backed actions have a separate caption rectangle.
            // Its classic right cap is a real grid byte, so reading to the
            // outer modal edge would append a border to the item name and
            // reject the complete action grammar.
            int right = frame->right;
            auto record_box = native_picture_caption_rect(
                *gps_, key, y, false, nullptr, true);
            if (!record_box) record_box = native_button_text_rect(
                *gps_, key, left + 1, y, true);
            auto caption = native_button_text_span(*gps_, key, left + 1, y);
            if (record_box && record_box->y + 1 == y)
                caption = {{record_box->x, record_box->x + record_box->w}};
            if (!caption) {
                if (const auto picture = native_picture_caption_rect(*gps_, key, y);
                        picture && picture->x <= key &&
                        picture->x + picture->w > left)
                    caption = {{picture->x, picture->x + picture->w}};
            }
            const bool bounded_caption = caption &&
                caption->first > frame->left && caption->first <= key &&
                caption->second > left && caption->second <= frame->right;
            if (!typed_record && !distinct_key_colour) continue;
            if (!bounded_caption && !distinct_key_colour) continue;
            // A selection name belongs to its native button, not to every
            // single-letter token below a prompt or to the enclosing panel.
            if (item_choices && !bounded_caption) continue;
            if (bounded_caption)
                right = caption->second;
            int end = right;
            while (end > left && row[end - 1] == ' ') --end;
            const size_t record_begin = matches.size();
            if (end > left) append(left, end, right, y, left);
            if (typed_record && record_box && record_box->y + 1 == y) {
                for (size_t index = record_begin; index < matches.size(); ++index) {
                    Match &action = matches[index];
                    action.layout_x = key + 2;
                    action.layout_length = right - action.layout_x;
                    action.native_picture_caption_box = *record_box;
                }
                if (y + 1 < frame->bottom && paired_row(left, end, y) != y + 1) {
                    int location_left = key, location_end = right;
                    const auto &location_row = rows[y + 1];
                    const bool classic = native_ui_classic().value_or(false);
                    const std::string_view location_field(location_row.data() + key, right - key);
                    const auto rail_or_space = [&](int x) {
                        return location_row[x] == ' ' || (classic && is_cp437_box_separator(
                            location_field, static_cast<size_t>(x - key)));
                    };
                    while (location_end > location_left && rail_or_space(location_end - 1))
                        --location_end;
                    while (location_left < location_end && rail_or_space(location_left))
                        ++location_left;
                    if (location_end > location_left) {
                        const auto complete = recover(location_left, location_end, y + 1, key);
                        auto target = translate_inventory_location(complete, y + 1, location_left);
                        const bool translated = target.has_value();
                        if (!target) target = native_text_to_utf8(complete);
                        Match location{location_left, y + 1, location_end - location_left,
                            kCharacterInventoryLocationRule, std::move(*target),
                            location_row.substr(location_left, location_end - location_left)};
                        location.native_hover_untranslated = !translated;
                        location.layout_x = key + 2;
                        location.layout_length = right - location.layout_x;
                        location.layout_clip_right = right;
                        location.layout_left = true;
                        location.native_picture_caption_box = *record_box;
                        matches.push_back(std::move(location));
                        if (classic) for (size_t index = record_begin; index < matches.size(); ++index) {
                            Match &field = matches[index];
                            field.layout_y = field.y - 1;
                            field.layout_pixel_y = (record_box->h - 2) * gps_->tile_pixel_y / 2;
                            field.layout_fixed_baseline = true;
                        }
                    }
                }
            }
            break;
        }
    }
    return matches;
}

// Character and adventure inventories share picture/action-bounded records.
// The second line can name a body part or a containing item; adventure rows
// also have a separately colored keyboard shortcut before the complete name.
std::vector<Match> Overlay::capture_inventory_rows(
        const std::vector<std::string> &rows,
        const std::vector<std::string> &context_rows, int tabs_y) const {
    std::vector<Match> matches;
    std::optional<AsciiPanelFrame> frame;
    bool shortcuts = false;
    bool uniform = false;
    // The classic scrollbar is flush with the right panel edge. Its final
    // CP437 block (0xdb) and the vertical edge (0xb3) form valid UTF-8 bytes,
    // so the generic text-boundary reader rejects this otherwise closed
    // window. This typed inventory uses the current border skin and palette,
    // as the shared item-list viewport does, without reinterpreting artwork.
    const NativePanelBorders borders(*gps_, true);
    const auto inventory_frame = [&](int first, int last, int y)
            -> std::optional<AsciiPanelFrame> {
        // Header action buttons also have vertical edges in classic mode.
        // Try complete enclosing frames, rather than allowing the nearest
        // toolbar button to reject the whole inventory panel.
        if (const auto panel = native_panel_interior(borders, *gps_, first, last, y))
            return AsciiPanelFrame{panel->x - 1, panel->y - 1,
                panel->x + panel->w, panel->y + panel->h};
        return std::nullopt;
    };
    // This modal has no character tabs. Require both native header fields
    // and their enclosing frame before sharing the item-record compositor.
    for (int y = 0; y < gps_->dimy && !frame; ++y) {
        const auto &row = context_rows[y];
        const size_t title = row.find("Your inventory");
        if (title == std::string::npos) continue;
        const size_t burden = row.find("Burden:", title + 14);
        if (burden == std::string::npos) continue;
        const int first = static_cast<int>(title);
        const int last = static_cast<int>(burden) + 7;
        frame = inventory_frame(first, last, y);
        if (!frame) frame = find_ascii_panel_frame(first, last, y,
            gps_->dimx, gps_->dimy, [&](int x, int row_y) {
                return static_cast<unsigned char>(context_rows[row_y][x]);
            });
        if (frame) {
            tabs_y = y;
            shortcuts = true;
        }
    }
    if (!frame) {
        if (tabs_y < 0 || tabs_y >= gps_->dimy) return matches;
        const auto tabs = character_information_tab_fields(context_rows[tabs_y]);
        if (tabs.empty()) return matches;

        // Items and Military -> Uniform share complete item/location records.
        // Uniform has no Inspect action; its selected subtab and closed
        // picture/caption frame must establish ownership instead.
        uniform = character_social_tab_selected(tabs_y, "Military");
        if (!uniform) {
            std::optional<uint32_t> selected, inactive;
            for (const auto &tab : tabs) {
                bool top = false;
                const auto *cell = cell_at(tab.start, tabs_y, &top);
                if (!cell || cell[0] != static_cast<unsigned char>(tab.text.front()))
                    return matches;
                const uint32_t color = (uint32_t(cell[1]) << 16) |
                    (uint32_t(cell[2]) << 8) | cell[3];
                if (tab.text == "Items") selected = color;
                else if (!inactive) inactive = color;
                else if (*inactive != color) return matches;
            }
            if (!selected || !inactive || *selected == *inactive) return matches;
        }
        frame = inventory_frame(tabs.front().start, tabs.back().end, tabs_y);
        // A long quoted identity can overwrite the outer edge ABOVE the
        // tabs. The list still has two continuous sides and a complete bottom;
        // read that content frame with the same classic skin/scrollbar policy.
        if (!frame) frame = find_graphical_character_panel_frame(
            *gps_, tabs.front().start, tabs.back().end, tabs_y, true);
        if (!frame) frame = find_ascii_panel_frame(
            tabs.front().start, tabs.back().end, tabs_y, gps_->dimx, gps_->dimy,
            [&](int x, int y) {
                return static_cast<unsigned char>(context_rows[y][x]);
            });
    }
    if (!frame) return matches;

    if (uniform) {
        const auto half_at = [&](int x, int y) {
            bool top = false;
            (void)cell_at(x, y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            return flags ? flags[static_cast<size_t>(x) * gps_->dimy + y]
                & ((1u << 3) | (1u << 4)) : 0u;
        };
        int content_top = tabs_y + 1;
        for (const auto &tab : character_information_tab_fields(context_rows[tabs_y]))
            if (half_at(tab.start, tabs_y) == (1u << 3)) content_top = tabs_y + 2;
        int body_top = -1;
        for (int y = content_top; y < frame->bottom; ++y) {
            const auto &row = context_rows[y];
            const auto body = std::string_view(row).substr(
                frame->left + 1, frame->right - frame->left - 1);
            if (std::none_of(body.begin(), body.end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
                })) continue;
            std::array<int, 3> colors{};
            size_t cursor = frame->left + 1, index = 0;
            int next_y = y + 1;
            bool valid = true;
            for (std::string_view caption : {"Squad", "Uniform", "Kills"}) {
                const size_t at = row.find(caption, cursor);
                if (at == std::string::npos || at + caption.size() >
                        static_cast<size_t>(frame->right) ||
                    !(has_word_boundaries(row, at, at + caption.size()) ||
                      is_ascii_tab_caption(row, at, at + caption.size()))) {
                    valid = false;
                    break;
                }
                bool top = false;
                const auto *cell = cell_at(static_cast<int>(at), y, &top);
                if (!cell || cell[0] != caption.front() ||
                    half_at(static_cast<int>(at), y) == (1u << 4)) {
                    valid = false;
                    break;
                }
                colors[index++] = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                if (half_at(static_cast<int>(at), y) == (1u << 3)) next_y = y + 2;
                cursor = at + caption.size();
            }
            // The first text band is the subtab row, including in half-font
            // mode. Merely finding these words later in the body is insufficient.
            if (valid && colors[0] == colors[2] && colors[1] != colors[0])
                body_top = next_y;
            break;
        }
        if (body_top < 0) return matches;
        tabs_y = body_top - 1;
    }

    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto captures = captured_clipped_captions();
    std::vector<NativeDrawnTextRow> inventory_sources;
    if (shortcuts) {
        const std::array batches{captured_native_drawn_text_rows(),
            captured_native_drawn_text_rows(true)};
        for (const auto &batch : batches) for (const auto &draw : batch) {
            if (draw.adventure_inventory_role == NativeAdventureInventoryRole::None ||
                draw.x <= frame->left || draw.x >= frame->right ||
                draw.y <= tabs_y || draw.y >= frame->bottom || draw.source.empty() ||
                draw.source.size() > static_cast<size_t>(frame->right - draw.x) ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                context_rows[draw.y].compare(draw.x, draw.source.size(), draw.source) != 0)
                continue;
            bool top = false;
            const auto *cell = cell_at(draw.x, draw.y, &top);
            if (cell && top == draw.top_layer) inventory_sources.push_back(draw);
        }
    }
    auto collapse_spaces = [](std::string_view text) {
        std::string result;
        bool space = false;
        for (char ch : text) {
            if (ch == ' ') { space = !result.empty(); continue; }
            if (space) result.push_back(' ');
            result.push_back(ch);
            space = false;
        }
        return result;
    };
    auto paired_text_row = [&](int left, int end, int row_y) {
        constexpr uint32_t top_half = 1u << 3;
        constexpr uint32_t bottom_half = 1u << 4;
        constexpr uint32_t half_mask = top_half | bottom_half;
        auto half_at = [&](int x, int y) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            if (!cell || !flags || cell[0] !=
                    static_cast<unsigned char>(context_rows[y][x])) return uint32_t{0};
            return flags[static_cast<size_t>(x) * gps_->dimy + y] & half_mask;
        };
        const uint32_t half = half_at(left, row_y);
        if (half != top_half && half != bottom_half) return -1;
        const int other = row_y + (half == top_half ? 1 : -1);
        if (other <= tabs_y || other >= frame->bottom ||
            context_rows[row_y].compare(left, end - left,
                context_rows[other], left, end - left) != 0) return -1;
        const uint32_t opposite = half == top_half ? bottom_half : top_half;
        for (int x = left; x < end; ++x) {
            if (context_rows[row_y][x] == ' ') continue;
            if (half_at(x, row_y) != half || half_at(x, other) != opposite) return -1;
        }
        return other;
    };
    auto recover_caption = [&](int left, int end, int row_y, int minimum_x) {
        const std::string joined = collapse_spaces(
            std::string_view(rows[row_y]).substr(left, end - left));
        const int paired = paired_text_row(left, end, row_y);
        std::optional<std::string> captured;
        for (const auto &capture : captures) {
            // Both verified halves own the same complete caption. Only
            // current, byte-matched captures may restore a clipped tail.
            if ((capture.y != row_y && capture.y != paired) ||
                capture.x < minimum_x || capture.x > left ||
                collapse_spaces(capture.visible) != joined) continue;
            if (captured && *captured != capture.complete) return joined;
            captured = capture.complete;
        }
        return captured ? *captured : joined;
    };
    // Mode 0 uses the same typed selector providers. View-contaminant
    // records have no picture/action strip; reserve their full native draw
    // before the panel-wide deposit reader or word matching can split it.
    for (const auto &draw : inventory_sources) {
        if (draw.adventure_inventory_role != NativeAdventureInventoryRole::Deposit) continue;
        const int end = draw.x + static_cast<int>(draw.source.size());
        const auto box = native_button_text_rect(*gps_, draw.x, end, draw.y, true);
        if (!box || box->y + 1 != draw.y || box->x <= frame->left ||
            box->x + box->w > frame->right) continue;
        const std::string complete = draw.complete_source.empty()
            ? recover_caption(draw.x, end, draw.y, box->x) : draw.complete_source;
        std::vector<size_t> origins;
        auto target = RULESETS.translate_with_origins(native_text_to_utf8(complete),
            "::health::contaminant::inventory", origins);
        if (!target && complete.ends_with(')')) {
            for (size_t at = complete.find(" ("); at != std::string::npos;
                 at = complete.find(" (", at + 2)) {
                const auto deposit = RULESETS.translate_with_origins(
                    native_text_to_utf8(std::string_view(complete).substr(0, at)),
                    "::health::contaminant::inventory", origins);
                const auto location = translate_inventory_location(
                    std::string_view(complete).substr(at + 2, complete.size() - at - 3),
                    draw.y, draw.x);
                if (!deposit || !location) continue;
                target = *deposit + "（" + *location + "）";
                break;
            }
        }
        const bool translated = target.has_value();
        if (!target) target = native_text_to_utf8(complete);
        Match caption{draw.x, draw.y, end - draw.x, kCharacterInventoryItemRule,
            std::move(*target), draw.source};
        caption.native_hover_untranslated = !translated;
        caption.layout_x = draw.x;
        caption.layout_length = box->x + box->w - draw.x;
        caption.layout_clip_right = box->x + box->w;
        caption.layout_left = true;
        caption.native_picture_caption_box = *box;
        const int paired = paired_text_row(draw.x, end, draw.y);
        if (paired >= 0) {
            Match copy = caption;
            copy.y = paired;
            matches.push_back(std::move(copy));
        }
        matches.push_back(std::move(caption));
    }
    auto action_at = [&](int x, int y) {
        // Unit sheets place assignment markers before Inspect. Their C/S/
        // tool/symbol cells are controls, never part of the item designation.
        // Read the whole current skin in both display modes, not its letter.
        return shortcuts ? native_item_action_at(*gps_, x, y)
            : native_inventory_action_at(*gps_, x, y);
    };
    for (int y = tabs_y + 1; y < frame->bottom; ++y) {
        for (int picture = frame->left + 1; picture < frame->right; ++picture) {
            const int picture_right = native_picture_box_right(*gps_, picture, y);
            if (picture_right <= picture || picture_right >= frame->right) continue;
            int controls = -1;
            std::optional<std::pair<int, int>> caption_button;
            // Joined picture/text buttons have no separate left cap. A
            // location can also replace part of their lower edge, making
            // the ordinary closed picture-box reader unsuitable for text.
            std::optional<SDL_Rect> caption_box;
            for (int x = picture_right; x <= picture_right + 1 && !caption_box; ++x) {
                const auto box = native_picture_caption_rect(
                    *gps_, x, y, false, nullptr, true, nullptr, true,
                    false, -1, !shortcuts);
                if (box && box->x >= picture_right && box->x + box->w < frame->right)
                    caption_box = box;
            }
            if (caption_box)
                caption_button = {{caption_box->x, caption_box->x + caption_box->w}};
            if (uniform) {
                if (!caption_box) continue;
                controls = caption_box->x + caption_box->w;
            }
            for (int x = picture_right; controls < 0 && x < frame->right; ++x) {
                // Inspect can be drawn on the primary layer OVER the end of
                // the lower caption rectangle. Read actions before skipping
                // caption cells, and visit each cell in that rectangle so
                // its background cannot hide the record's own action strip.
                if (action_at(x, y)) {
                    controls = x - 1;
                    break;
                }
                if (caption_button && x >= caption_button->first &&
                    x < caption_button->second) continue;
                const int edge = native_picture_box_right(*gps_, x, y);
                if (edge <= x) continue;
                // A compact action can share a picture's frame. Recognize
                // its centre before treating the left cap as another item.
                if (edge == x + 3 && action_at(x + 1, y)) {
                    controls = x;
                    break;
                }
                // Classic picture and caption rectangles use the same skin.
                // Only the adjoining text box belongs to this picture band.
                if (!classic || caption_button || edge > frame->right) break;
                bool adjoining = true;
                for (int gap = picture_right; gap < x; ++gap)
                    if (rows[y][gap] != ' ') adjoining = false;
                if (!adjoining) break;
                caption_button = {{x + 1, edge - 1}};
            }
            if (controls <= picture_right) continue;
            const size_t record_begin = matches.size();
            // Read the whole picture band. Native full-height captions may
            // occupy two rows; source bytes stay intact for half-text merging.
            for (int row_y = std::max(tabs_y + 1, y - 1);
                 row_y <= std::min(frame->bottom - 1, y + 1); ++row_y) {
                const std::string &row = rows[row_y];
                const int field_left = caption_button ? caption_button->first : picture_right;
                const int field_right = caption_button
                    ? std::min(caption_button->second, controls) : controls;
                if (field_right <= field_left) continue;
                const std::string_view field = std::string_view(row).substr(
                    field_left, field_right - field_left);
                auto border_or_space = [&](int x) {
                    return row[x] == ' ' || (classic &&
                        is_cp437_box_separator(field, static_cast<size_t>(x - field_left)));
                };
                int left = field_left, end = field_right;
                // Location captions overwrite the lower horizontal edge.
                // Keep only its text opening; a pure border row owns no text.
                while (end > left && border_or_space(end - 1)) --end;
                while (left < end) {
                    if (border_or_space(left)) { ++left; continue; }
                    // A lower-edge location can start immediately after a
                    // horizontal CP437 border. C4 AE (or CD AE) looks like
                    // UTF-8 to the generic boundary reader, but AE ... AF
                    // is the item's paired ownership decoration here.
                    // Resolve this only on the record's lower edge and with
                    // a complete decorated designation, preserving the marks
                    // and keeping the border outside the translated span.
                    const unsigned char edge = row[left];
                    const std::string_view tail = std::string_view(row).substr(
                        left + 1, end - left - 1);
                    if (classic && row_y == y + 1 &&
                        (edge == 0xc4 || edge == 0xcd) &&
                        tail.starts_with("\xAE") && tail.ends_with("\xAF") &&
                        !split_item_designation(tail).prefix.empty()) {
                        ++left;
                        continue;
                    }
                    break;
                }
                if (end <= left) continue;
                bool crosses_frame = false;
                for (int x = left; classic && x < end; ++x)
                    if (is_cp437_box_separator(field, static_cast<size_t>(x - field_left))) {
                        crosses_frame = true;
                        break;
                    }
                if (crosses_frame) continue;
                const int paired = paired_text_row(left, end, row_y);
                bool item_line = row_y <= y || (paired >= 0 && paired <= y);
                const NativeDrawnTextRow *typed_item_source = nullptr;
                if (shortcuts) {
                    // The key is an independent native field, not an article
                    // or the first word of a generated creature/material.
                    // Its native position expresses the item's nesting depth.
                    // Leave it outside both translation and glyph suppression.
                    item_line = false;
                    for (const auto &draw : inventory_sources) {
                        if (draw.adventure_inventory_role != NativeAdventureInventoryRole::Item ||
                            draw.x < field_left || draw.x >= end ||
                            draw.source.size() > static_cast<size_t>(end - draw.x) ||
                            row.compare(draw.x, draw.source.size(), draw.source) != 0 ||
                            (draw.y != row_y && paired_text_row(draw.x,
                                draw.x + static_cast<int>(draw.source.size()), draw.y) != row_y))
                            continue;
                        typed_item_source = &draw;
                        left = draw.x;
                        item_line = true;
                        break;
                    }
                    const unsigned char key = row[left];
                    const bool key_shape = ((key >= 'a' && key <= 'z') ||
                        (key >= 'A' && key <= 'Z')) &&
                        left + 2 < end && row[left + 1] == ' ';
                    if (!typed_item_source && key_shape) {
                        int name = left + 2;
                        while (name < end && row[name] == ' ') ++name;
                        if (name >= end) continue;
                        bool key_top = false, name_top = false;
                        const auto *key_cell = cell_at(left, row_y, &key_top);
                        const auto *name_cell = cell_at(name, row_y, &name_top);
                        if (!key_cell || !name_cell ||
                            key_cell[0] != key || name_cell[0] !=
                                static_cast<unsigned char>(row[name])) continue;
                        // An article on a container label has the label's
                        // color. A native shortcut is its own colored field.
                        item_line = key_cell[1] != name_cell[1] ||
                            key_cell[2] != name_cell[2] || key_cell[3] != name_cell[3];
                        // A same-color single-letter prefix is ambiguous.
                        // Preserve its native field, including a possible key.
                        if (!item_line) continue;
                        left = name;
                    }
                }
                const int text_left = left;
                const std::string visible = row.substr(left, end - left);
                // A raw-layer scan can see an older background widget. Only
                // the current composed record establishes source ownership.
                if (context_rows[row_y].substr(left, end - left) != visible) continue;
                const std::string complete = typed_item_source &&
                        !typed_item_source->complete_source.empty()
                    ? typed_item_source->complete_source
                    : recover_caption(left, end, row_y, picture_right);
                const ItemDesignationText designation = split_item_designation(complete);
                std::string item(designation.item);
                // Indefinite articles on a containing-item label are grammar,
                // not a separate item name or a keyboard binding in this box.
                if (item.starts_with("a ")) item.erase(0, 2);
                else if (item.starts_with("an ")) item.erase(0, 3);
                auto target = typed_item_source
                    ? translate_inventory_item_name(complete, row_y, left)
                    : item_line ? translate_inventory_item_name(item, row_y, left)
                        : translate_inventory_location(item, row_y, left);
                // Named weapons use the same complete generated-name parser
                // as the ordinary matching path. Keep that fallback inside
                // the proven Uniform item field, never on a body-part label.
                if (!target && uniform && item_line)
                    target = translate_procedural_fragment(item);
                const bool translated = target.has_value();
                if (translated && !typed_item_source)
                    *target = designation.prefix + *target + designation.suffix;
                else if (!translated) {
                    std::vector<uint32_t> codepoints;
                    target = decode_utf8(complete, codepoints)
                        ? complete : cp437_to_utf8(complete);
                }
                Match caption{left, row_y, end - left,
                    item_line ? kCharacterInventoryItemRule : kCharacterInventoryLocationRule,
                    std::move(*target), visible};
                caption.native_hover_untranslated = !translated;
                caption.layout_x = text_left;
                caption.layout_length = field_right - text_left;
                caption.layout_clip_right = field_right;
                caption.layout_left = true;
                matches.push_back(std::move(caption));
            }
            auto name = std::find_if(matches.begin() + record_begin, matches.end(),
                [](const Match &match) { return match.rule == kCharacterInventoryItemRule; });
            if (name != matches.end()) {
                const int text_left = name->x;
                const bool two_lines = classic && caption_box &&
                    std::any_of(matches.begin() + record_begin, matches.end(),
                        [&](const Match &match) {
                            return match.rule == kCharacterInventoryLocationRule &&
                                match.y == caption_box->y + caption_box->h - 1;
                        });
                for (size_t index = record_begin; index < matches.size(); ++index) {
                    Match &caption = matches[index];
                    // Nesting remains tied to this record's untouched key;
                    // its location shares the item name's text-column origin.
                    caption.layout_x = text_left;
                    caption.layout_length = caption.layout_clip_right - text_left;
                    if (caption_box) caption.native_picture_caption_box = *caption_box;
                    if (!two_lines) continue;
                    // Fit two baselines inside the native three-row frame.
                    // Source ownership stays on the original rows so the
                    // lower-edge repair can restore the complete border.
                    caption.layout_y = caption.y - 1;
                    caption.layout_pixel_y = (caption_box->h - 2) * gps_->tile_pixel_y / 2;
                    caption.layout_fixed_baseline = true;
                }
            }
            picture = controls;
        }
    }

    if (!shortcuts) {
        // Character captions can be centred independently. Their English
        // ink origin is not the record's nesting depth: the picture/text box
        // carries that indent. Share one inset relative to each record's box
        // for both names and locations, including containing-item labels.
        int inset = gps_->dimx;
        for (const Match &match : matches)
            if (match.rule == kCharacterInventoryItemRule && match.native_picture_caption_box)
                inset = std::min(inset, match.x - match.native_picture_caption_box->x);
        if (inset < gps_->dimx)
            for (Match &match : matches) {
                if (!match.native_picture_caption_box) continue;
                match.layout_x = match.native_picture_caption_box->x + inset;
                match.layout_length = match.layout_clip_right - match.layout_x;
            }
        if (uniform) return matches;
    }

    // Body deposits have a complete rectangle but no picture or action.
    // Its lower edge carries the body part in classic mode. Read that
    // rectangle before the panel-wide fallback: the scrollbar's shading and
    // block glyphs are not box separators and must never enter the grammar.
    const SDL_Rect deposit_panel{frame->left + 1, tabs_y + 1,
        frame->right - frame->left - 1, frame->bottom - tabs_y - 1};
    const auto deposit_scrollbars = native_vertical_scrollbar_spans(*gps_, deposit_panel);
    const size_t deposits_begin = matches.size();
    std::vector<Match> untranslated_deposits;
    for (int y = tabs_y + 1; y < frame->bottom; ++y) {
        if (std::any_of(matches.begin(), matches.end(), [y](const Match &match) {
                return match.y == y;
            })) continue;
        const auto &row = context_rows[y];
        int right = frame->right;
        for (const auto &bar : deposit_scrollbars)
            if (y >= bar.y && y < bar.y + bar.h)
                right = std::min(right, bar.x);
        // Adventure deposits have no caption box. Their bare row still
        // ends before the live scrollbar, including when its glyphs look
        // like text. Use that same boundary for clipped-source recovery.
        int left = frame->left + 1, end = right;
        std::optional<SDL_Rect> deposit_box;
        if (!shortcuts) {
            for (const auto &field : split_text_fields(row)) {
                if (field.start < left || field.end > end) continue;
                const auto box = native_button_text_rect(
                    *gps_, field.start, field.end, y, true);
                if (!box || box->h != 3 || box->y <= tabs_y ||
                    box->y + box->h > frame->bottom || box->x < left ||
                    box->x + box->w > end || y <= box->y) continue;
                deposit_box = box;
                left = box->x;
                end = box->x + box->w;
                break;
            }
        }
        auto border_or_space = [&](int x) {
            return row[x] == ' ' || is_cp437_box_separator(row, x);
        };
        while (left < end && border_or_space(left)) ++left;
        while (end > left && border_or_space(end - 1)) --end;
        if (left == end) continue;
        if (rows[y].compare(left, end - left, row, left, end - left) != 0) continue;
        int shortcut = -1;
        if (shortcuts && left + 2 < end && row[left + 1] == ' ' &&
            ((row[left] >= 'a' && row[left] <= 'z') ||
             (row[left] >= 'A' && row[left] <= 'Z'))) {
            // Deposits have no picture/action controls. Their selected row
            // gives the key and caption the same color, so require the full
            // contaminant grammar below instead of a key/name color change.
            shortcut = left;
            left += 2;
            while (left < end && row[left] == ' ') ++left;
            if (left == end) continue;
        }
        std::string complete = recover_caption(left, end, y, frame->left + 1);
        if (shortcut >= 0) {
            // Clipping can capture either just the caption or the key and
            // caption together. Restore the latter before removing its key;
            // the original key remains outside the translated source span.
            const std::string whole = collapse_spaces(
                recover_caption(shortcut, end, y, frame->left + 1));
            const std::string visible = collapse_spaces(
                std::string_view(row).substr(shortcut, end - shortcut));
            if (whole != visible && whole.size() > 2 &&
                whole[0] == row[shortcut] && whole[1] == ' ')
                complete = whole.substr(2);
        }
        std::vector<size_t> origins;
        auto target = RULESETS.translate_with_origins(native_text_to_utf8(complete),
            "::health::contaminant::inventory", origins);
        const bool heading = target.has_value();
        // The selected inventory and complete anatomy establish a location
        // even when scrolling has moved its deposit heading off screen.
        if (!heading && shortcut < 0) target = translate_legends_anatomy(complete);
        const bool translated = target && !target->empty();
        if (!translated && !deposit_box) continue;
        Match caption{left, y, end - left,
            (heading || (!translated && y == deposit_box->y + 1))
                ? kCharacterInventoryItemRule : kCharacterInventoryLocationRule,
            translated ? std::move(*target) : native_text_to_utf8(complete),
            rows[y].substr(left, end - left)};
        caption.native_hover_untranslated = !translated;
        caption.layout_x = left;
        caption.layout_clip_right = deposit_box
            ? deposit_box->x + deposit_box->w : right - 1;
        caption.layout_length = caption.layout_clip_right - left;
        caption.layout_left = true;
        if (deposit_box) caption.native_picture_caption_box = deposit_box;
        if (translated) matches.push_back(std::move(caption));
        else untranslated_deposits.push_back(std::move(caption));
    }
    const auto same_box = [](const SDL_Rect &a, const SDL_Rect &b) {
        return a.x == b.x && a.y == b.y && a.w == b.w && a.h == b.h;
    };
    // An unknown material/anatomy remains one native field when its companion
    // proves the deposit record. Generic word/prose matching cannot split it.
    for (Match &caption : untranslated_deposits) {
        if (std::any_of(matches.begin() + deposits_begin, matches.end(),
                [&](const Match &other) {
                    return other.native_picture_caption_box &&
                        same_box(*other.native_picture_caption_box,
                            *caption.native_picture_caption_box);
                })) matches.push_back(std::move(caption));
    }
    int deposit_inset = gps_->dimx;
    for (size_t index = deposits_begin; index < matches.size(); ++index) {
        const Match &caption = matches[index];
        if (caption.rule == kCharacterInventoryItemRule &&
                caption.native_picture_caption_box)
            deposit_inset = std::min(deposit_inset,
                caption.x - caption.native_picture_caption_box->x);
    }
    for (size_t index = deposits_begin; index < matches.size(); ++index) {
        Match &caption = matches[index];
        if (!caption.native_picture_caption_box) continue;
        const auto &box = *caption.native_picture_caption_box;
        caption.layout_x = box.x + (deposit_inset < gps_->dimx ? deposit_inset : 0);
        caption.layout_length = caption.layout_clip_right - caption.layout_x;
        const bool two_lines = std::any_of(matches.begin() + deposits_begin, matches.end(),
            [&](const Match &other) {
                return other.native_picture_caption_box &&
                    same_box(*other.native_picture_caption_box, box) &&
                    other.y == box.y + box.h - 1;
            });
        if (!two_lines) continue;
        caption.layout_y = caption.y - 1;
        caption.layout_pixel_y = (box.h - 2) * gps_->tile_pixel_y / 2;
        caption.layout_fixed_baseline = true;
    }
    return matches;
}

void Overlay::layout_inventory(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    int pixels = gps_->tile_pixel_y;
    std::vector<Match *> rows;
    for (Match &match : prepared_matches_) {
        if ((match.rule != kCharacterInventoryItemRule &&
             match.rule != kCharacterInventoryLocationRule &&
             match.rule != kAdventureItemActionRule) ||
            match.target.empty() || match.native_split_duplicate) continue;
        // Each item keeps its native nesting indent after the untouched key.
        // Body-part/container labels share that item's bounded text column.
        // Use the shared configured font for every bounded field, including
        // longer names; their individual English widths never choose size.
        const int left = match.layout_x >= 0 ? match.layout_x : match.x;
        const int right = match.layout_clip_right >= 0 ? match.layout_clip_right : gps_->dimx;
        if (right <= left) continue;
        if (match.native_picture_caption_box && match.layout_fixed_baseline) {
            // Reapply the two-line inset after generic page layout. Original
            // source coordinates still own suppression and lower-edge repair.
            match.layout_y = match.y - 1;
            match.layout_pixel_y = (match.native_picture_caption_box->h - 2)
                * gps_->tile_pixel_y / 2;
        }
        layout_fortress_text_rows(renderer, {{&match}}, left, right);
        if (match.layout_font_pixels <= 0) continue;
        pixels = std::min(pixels, match.layout_font_pixels);
        rows.push_back(&match);
    }
    if (rows.empty()) return;
    for (Match *match : rows) match->layout_font_pixels = pixels;
    const auto settings = native_ui_settings();
    for (Match *match : rows) {
        if (!settings || !settings->classic || !match->native_picture_caption_box ||
            !match->layout_fixed_baseline || match->rule != kCharacterInventoryLocationRule)
            continue;
        const auto &box = *match->native_picture_caption_box;
        if (match->y != box.y + box.h - 1) continue;
        std::array<int32_t, 9> skin{};
        auto current = native_picture_caption_rect(
            *gps_, box.x, box.y + 1, false, nullptr, true, &skin, true,
            false, -1, true);
        if (!current) current = native_button_text_rect(
            *gps_, box.x, box.x + box.w, box.y + 1, true, &skin);
        if (!current || current->x != box.x || current->y != box.y ||
            current->w != box.w || current->h != box.h) continue;
        NativeBorderRepair repair;
        repair.cells = {match->x, match->y, match->length, 1};
        repair.cell[0] = static_cast<unsigned char>(skin[7] & 0xff);
        const int foreground = ((skin[7] >> 8) & 7) + ((skin[7] & 0x4000) ? 8 : 0);
        const int background = (skin[7] >> 11) & 7;
        std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
        std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
        native_border_repairs_.push_back(repair);
    }
    const int tile_h = gps_->tile_pixel_y;
    const int tile_w = gps_->tile_pixel_x;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate) continue;
        if (match.source == "Burden:") {
            // Keep weight digits and their CP437 unit on the native path.
            // Place the translated label next to that value by measured width,
            // instead of retaining the English label's now-empty character box.
            int value_x = match.x + match.length;
            while (value_x < gps_->dimx) {
                const unsigned char ch = visible_char_at(value_x, match.y);
                if (ch && ch != ' ') break;
                ++value_x;
            }
            if (value_x >= gps_->dimx) continue;
            const unsigned char digit = visible_char_at(value_x, match.y);
            if (digit < '0' || digit > '9') continue;
            const int padding = config_.horizontal_padding;
            const auto *glyph = get_glyph_texture(renderer, match.target,
                std::max(1, (value_x - match.x) * tile_w), tile_h, pixels, 0, true);
            if (!glyph || !glyph->texture) continue;
            const int gap = std::max(1, tile_w / 2);
            match.layout_box_pixel_x = origin_x + value_x * tile_w - gap - glyph->width - padding;
            match.layout_box_pixel_width = glyph->width + 2 * padding;
            match.layout_font_pixels = pixels;
            match.layout_lock_font_pixels = true;
            match.layout_line_height_pixels = tile_h;
            match.layout_fixed_baseline = true;
            match.layout_left = true;
        }
    }
}
