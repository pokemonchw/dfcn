    // get_desc() supplies the same noun to the placement rows, filter summary
    // and manual item picker. ItemLine appends exactly one "s" unless n == 1.
    const auto buildingplan_item = [&](std::string_view noun) {
        return exact_literal_translation("DFHack GUI Buildingplan item: " + std::string(noun));
    };
    const auto buildingplan_label = [&](std::string_view label) {
        return exact_literal_translation("DFHack GUI Buildingplan label: " + std::string(label));
    };
    const auto buildingplan_requirement = [&](std::string_view source, bool inspector)
            -> std::optional<std::string> {
        const size_t space = source.find(' ');
        if (space == 0 || space == std::string_view::npos ||
                source.substr(0, space).find_first_not_of("0123456789") != std::string_view::npos)
            return std::nullopt;
        const auto count = source.substr(0, space);
        auto nouns = source.substr(space + 1);
        std::string target(count);
        target += ' ';
        for (;;) {
            // getDescString joins get_desc alternatives with " or " and
            // leaves them singular. ItemLine pluralizes the single noun.
            const auto end = inspector ? nouns.find(" or ") : std::string_view::npos;
            auto noun = nouns.substr(0, end);
            if (!inspector && count != "1" && noun.ends_with('s')) noun.remove_suffix(1);
            const auto translated = buildingplan_item(noun);
            if (!translated) return std::nullopt;
            target += *translated;
            if (end == std::string_view::npos) return target;
            target += "或";
            nouns.remove_prefix(end + 4);
        }
    };
    const auto buildingplan_status = [&](std::string_view source) -> std::optional<std::string> {
        // Steam 0x3c9d10 / classic 0x3c76b0 write complete build-square
        // errors. The accessibility producer can append a job-item name.
        if (source == "OK to build" || source == "Disconnected") return buildingplan_label(source);
        if (source == "No access" || std::find(std::begin(fortress_build_placement_statuses),
                std::end(fortress_build_placement_statuses), source) !=
                std::end(fortress_build_placement_statuses))
            return exact_literal_translation(source);
        for (const std::string_view prefix : {"Needs ", "No access to "}) {
            if (!source.starts_with(prefix)) continue;
            if (const auto item = translate_workshop_recipe_source(source.substr(prefix.size())))
                return (prefix == "Needs " ? "需要" : "无法取得") + *item;
        }
        return std::nullopt;
    };
    const auto buildingplan_field = [&](const NativeDfhackOverlayText &text)
            -> std::optional<std::string> {
        if (text.role != NativeDfhackOverlayTextRole::Text || text.quick_filter_label)
            return std::nullopt;
        const std::string_view source = text.full;
        if (text.overlay_name == "buildingplan.planner") {
            if (text.view_id == "item_desc") return buildingplan_requirement(source, false);
            if (text.view_id == "placement_status") return buildingplan_status(source);
            if (text.view_id == "item_filter" && source.size() > 2 &&
                    source.front() == '[' && source.back() == ']') {
                const auto name = source.substr(1, source.size() - 2);
                auto translated = exact_literal_translation("DFHack GUI Buildingplan category: " +
                    std::string(name));
                if (!translated && name != "any material" && name != "impossible filter" &&
                        !name.ends_with(" mat. categories"))
                    translated = translate_material_name(text.material_source.empty() ?
                        name : std::string_view(text.material_source));
                if (translated) return "[" + *translated + "]";
            }
            if (!text.option_dynamic && (source == "Queue order" || source == "[clear]" ||
                    source == "No items required." || source == ": Prev/" || source == "next item"))
                return buildingplan_label(source);
        } else if (text.overlay_name == "buildingplan.inspector") {
            constexpr std::string_view prefix = "Position in line: ";
            if (source.starts_with(prefix))
                return "排队顺位：" + std::string(source.substr(prefix.size()));
            if (text.option_dynamic && source != "Item attached" && source != "INVALID")
                return buildingplan_requirement(source, true);
            return buildingplan_label(source);
        } else if ((text.overlay_name == "buildingplan.filterselection" ||
                text.overlay_name == "buildingplan.itemselection") && !text.option_dynamic) {
            const auto label = trim_view(source);
            if (label == "Search:" || label == "Type" || label == "Material" || label == "Done")
                return buildingplan_label(label);
        }
        return std::nullopt;
    };
// FilterSelection owns these labels and complete prose fields. Its tabs use
// two half-font rows, and WrappedLabel can split a sentence at any word.
{
    // QualityAndMaterialsPage:refresh builds this complete field from the
    // heat filter, get_desc(), two fixed special flags and material names.
    // Resolve those proved roles together so generic matches cannot leave
    // an English prefix beside individually translated words.
    const auto buildingplan_summary = [&](std::string_view source)
            -> std::optional<std::string> {
        source = trim_view(source);
        std::string heat;
        if (source.starts_with("Any ")) { heat = "任意"; source.remove_prefix(4); }
        else if (source.starts_with("Fire safe ")) { heat = "防火"; source.remove_prefix(10); }
        else if (source.starts_with("Magma safe ")) { heat = "岩浆安全"; source.remove_prefix(11); }
        else return std::nullopt;

        // GAMES_OF_CHANCE includes the delimiter in the enum noun itself.
        size_t material_at = source.find(" of ");
        if (source.starts_with("Games of chance"))
            material_at = source.find(" of ", std::string_view("Games of chance").size());
        const auto material_list = material_at == std::string_view::npos
            ? std::string_view{} : source.substr(material_at + 4);
        auto description = trim_view(source.substr(0, material_at));
        std::string specials;
        if (const size_t special_at = description.find(" [");
                special_at != std::string_view::npos) {
            if (!description.ends_with(']')) return std::nullopt;
            const auto flags = description.substr(special_at + 2,
                description.size() - special_at - 3);
            if (flags.empty()) return std::nullopt;
            for (size_t at = 0; at < flags.size();) {
                const size_t end = flags.find(", ", at);
                const auto flag = flags.substr(at,
                    (end == std::string_view::npos ? flags.size() : end) - at);
                std::string_view target;
                if (flag == "engraved") target = "已雕刻";
                else if (flag == "empty") target = "空置";
                else return std::nullopt;
                if (!specials.empty()) specials += "、";
                specials += target;
                if (end == std::string_view::npos) break;
                at = end + 2;
                if (at == flags.size()) return std::nullopt;
            }
            description = trim_view(description.substr(0, special_at));
        }
        if (description.empty() || description.find_first_of("[]") != std::string_view::npos)
            return std::nullopt;
        const auto item = buildingplan_item(description);
        if (!item) return std::nullopt;

        std::string materials;
        if (material_at != std::string_view::npos) {
            if (material_list.empty()) return std::nullopt;
            for (size_t at = 0; at < material_list.size();) {
                const size_t end = material_list.find(", ", at);
                const auto name = trim_view(material_list.substr(at,
                    (end == std::string_view::npos ? material_list.size() : end) - at));
                const auto target = translate_material_name(name);
                if (!translation_complete_with_native_nicknames(target, name) ||
                        !contains_cjk_utf8(*target) || target->find("[C:") != std::string::npos ||
                        target->find_first_of("\r\n") != std::string::npos) return std::nullopt;
                if (!materials.empty()) materials += "、";
                materials += *target;
                if (end == std::string_view::npos) break;
                at = end + 2;
                if (at == material_list.size()) return std::nullopt;
            }
        }
        std::string target = heat + *item;
        if (!specials.empty()) target += " [" + specials + ']';
        if (!materials.empty()) target += "（材料：" + materials + "）";
        return target;
    };
    constexpr std::string_view filter_title = "Choose filters";
    constexpr std::array<std::string_view, 2> filter_tabs{
        "Quality and materials", "Global settings"};
    const auto planner_windows = native_dfhack_window_geometry(dfhack_context_rows);
    for (const auto &noun : source_texts) {
        if (noun.overlay_name != "buildingplan.itemselection" || noun.view_id != "picker_desc") continue;
        auto target = buildingplan_item(noun.full);
        if (!target) target = exact_literal_translation("DFHack GUI Buildingplan picker: " + noun.full);
        if (!target) continue;
        // Label paints the English plural s separately. Claim it only when
        // it was painted by this same header immediately after the noun.
        std::string visible = noun.visible;
        for (const auto &suffix : source_texts) {
            if (suffix.widget_id == noun.widget_id && suffix.y == noun.y &&
                    suffix.x == noun.x + static_cast<int>(visible.size()) && suffix.visible == "s") {
                visible += 's';
                break;
            }
        }
        auxiliary_field(noun.x, noun.y, visible, noun.x + static_cast<int>(visible.size()), target);
    }
    // WrappedLabel puts every error on a new line. Only the two job-item
    // productions have variable length and can extend past its 50-cell wrap.
    for (const auto &head : source_texts) {
        if (head.overlay_name != "buildingplan.planner" || head.view_id != "placement_status" ||
                !(head.full.starts_with("No access to ") || head.full.starts_with("Needs "))) continue;
        std::string complete = head.full;
        GuiPrompt prompt;
        const auto append_line = [&](const NativeDfhackOverlayText &line) {
            prompt.rows.push_back({line.x, line.y, static_cast<int>(line.visible.size()),
                kDfhackHotkeysHintRule, {}, line.visible});
        };
        append_line(head);
        int right = head.x + static_cast<int>(head.visible.size());
        for (int y = head.y + 1; y < gps_->dimy; ++y) {
            const auto next = std::find_if(source_texts.begin(), source_texts.end(), [&](const auto &line) {
                return line.widget_id == head.widget_id && line.y == y && line.full_x == head.full_x;
            });
            if (next == source_texts.end() || next->full.starts_with("No access to ") ||
                    next->full.starts_with("Needs ") || buildingplan_status(next->full)) break;
            complete += " " + next->full;
            append_line(*next);
            right = std::max(right, next->x + static_cast<int>(next->visible.size()));
        }
        if (prompt.rows.size() < 2) continue;
        if (const auto target = buildingplan_status(complete)) {
            prompt.target = *target;
            for (const auto &row : prompt.rows)
                dfhack_auxiliary_regions.push_back({row.x, row.y, row.length, 1});
            append_gui_prompt(prompt, head.x, right);
        }
    }
    // Retained grid frames can outlive the individual paintString records.
    // The expanded Planner button starts 35 cells into the 56-cell overlay.
    // Its main panel has four two-row input slots and a separate error frame.
    for (int top = 0; top < gps_->dimy; ++top) {
        const auto button = dfhack_context_rows[top].find(" hide Planner [\x1e]");
        if (button == std::string::npos || button < 35) continue;
        const int left = static_cast<int>(button) - 35;
        if (left + 56 > gps_->dimx) continue;
        const auto main = native_dfhack_frame(dfhack_context_rows, top + 1, left + 1, 37, 56, 15);
        if (!main || main->x != left || main->w != 56 || main->h != 15) continue;
        const auto has_capture = [&](int x, int y, std::string_view view) {
            return std::any_of(source_texts.begin(), source_texts.end(), [&](const auto &text) {
                return text.overlay_name == "buildingplan.planner" && text.view_id == view &&
                    text.full_x == x && text.y == y;
            });
        };
        const int item_x = left + 3;
        for (int slot = 0; slot < 4; ++slot) {
            const int y = top + 2 + 2 * slot;
            if (y >= gps_->dimy || has_capture(item_x, y, "item_desc")) continue;
            // The right-justified filter starts in a separate field at l=28.
            const auto source = trim_view(std::string_view(dfhack_context_rows[y]).substr(item_x, 26));
            if (!source.empty() && source.data() == dfhack_context_rows[y].data() + item_x)
                auxiliary_field(item_x, y, source, item_x + 26, buildingplan_requirement(source, false));
        }
        // Only the error frame has the DFHack signature. The optional
        // favorites panel that takes its usual place has an interior border.
        for (const auto &status_window : planner_windows) {
            const auto &f = status_window.frame;
            if (f.x != left || f.w != 56 || (f.y != top + 16 && f.y != top + 25)) continue;
            const int x = left + 2, right = left + 55;
            for (int y = f.y + 1; y < f.y + f.h - 1; ++y) {
                if (has_capture(x, y, "placement_status")) continue;
                const auto source = trim_view(std::string_view(dfhack_context_rows[y]).substr(x, right - x));
                if (!source.empty() && source.data() == dfhack_context_rows[y].data() + x)
                    auxiliary_field(x, y, source, right, buildingplan_status(source));
            }
        }
    }
    for (const auto &window : planner_windows) {
        const auto &frame = window.frame;
        const auto title = std::string_view(dfhack_context_rows[frame.y]).substr(
            window.title_x, window.title_length);
        if (title == "Choose items") {
            // ItemSelection's header paints the noun and its plural suffix
            // as separate tokens above the selection count, beside the buttons.
            const int right = frame.x + frame.w - 1;
            for (int y = frame.y + 2; y < std::min(frame.y + frame.h - 1, frame.y + 6); ++y) {
                const auto &count = dfhack_context_rows[y];
                const auto x = count.find("Select up to ", frame.x + 1);
                if (x == std::string::npos || x + 13 > static_cast<size_t>(right)) continue;
                if (std::any_of(source_texts.begin(), source_texts.end(), [&](const auto &text) {
                        return text.overlay_name == "buildingplan.itemselection" &&
                            text.view_id == "picker_desc" && text.y == y-1 && text.x == static_cast<int>(x);
                    })) break;
                const auto &row = dfhack_context_rows[y - 1];
                // The header Label reserves 16 tiles on its right for its buttons.
                const auto field = std::string_view(row).substr(x, right - x);
                const auto source = trim_view(field.substr(0, field.find("  ")));
                auto target = buildingplan_item(source);
                if (!target && source.ends_with('s'))
                    target = buildingplan_item(source.substr(0, source.size() - 1));
                if (!target) target = exact_literal_translation(
                    "DFHack GUI Buildingplan picker: " + std::string(source));
                if (target) auxiliary_field(static_cast<int>(x), y - 1, source,
                    static_cast<int>(x + source.size()), target);
                break;
            }
            continue;
        }
        if (title != filter_title || frame.w < 26 || frame.h < 10) continue;
        const int left = frame.x + 2, right = frame.x + frame.w - 2;
        const int bottom = frame.y + frame.h - 1;
        std::array<bool, filter_tabs.size()> tabs_seen{};
        for (int y = frame.y + 1; y < std::min(bottom, frame.y + 6); ++y)
            for (size_t tab = 0; tab < filter_tabs.size(); ++tab) {
                const size_t x = dfhack_context_rows[y].find(filter_tabs[tab], left);
                if (x != std::string::npos && x + filter_tabs[tab].size() <= static_cast<size_t>(right))
                    tabs_seen[tab] = true;
            }
        if (!std::all_of(tabs_seen.begin(), tabs_seen.end(), [](bool value) { return value; }))
            continue;
        gui_literal(window.title_x, frame.y, title,
            window.title_x + window.title_length, "Buildingplan label", true);
        for (int y = frame.y + 1; y < std::min(bottom, frame.y + 6); ++y)
            for (const auto tab : filter_tabs) {
                const size_t x = dfhack_context_rows[y].find(tab, left);
                if (x != std::string::npos && x + tab.size() <= static_cast<size_t>(right))
                    gui_literal(static_cast<int>(x), y, tab,
                        static_cast<int>(x + tab.size()), "Buildingplan label", true);
            }
        for (int y = frame.y + 6; y < bottom; ++y) {
            const auto &row = dfhack_context_rows[y];
            for (const auto label : {std::string_view("Current filter:"), std::string_view("Item quality")}) {
                const size_t x = row.find(label, left);
                if (x == std::string::npos || x + label.size() > static_cast<size_t>(right)) continue;
                gui_literal(static_cast<int>(x), y, label, static_cast<int>(x + label.size()),
                    "Buildingplan label", label == "Item quality");
                if (label == "Current filter:") {
                    // WrappedLabel starts sixteen cells after the label and
                    // owns exactly two rows, including an untranslated tail.
                    const int summary_left = static_cast<int>(x) + 16;
                    const int summary_right = frame.x + frame.w - 1;
                    const int summary_last = std::min(y + 1, bottom - 1);
                    if (summary_left >= summary_right) continue;
                    dfhack_auxiliary_regions.push_back({summary_left, y,
                        summary_right - summary_left, summary_last - y + 1});
                    GuiPrompt summary;
                    std::string summary_source;
                    for (int summary_y = y; summary_y <= summary_last; ++summary_y) {
                        const auto band = std::string_view(dfhack_context_rows[summary_y]).substr(
                            summary_left, summary_right - summary_left);
                        const auto text = trim_view(band);
                        if (text.empty()) break;
                        const int text_x = summary_left + static_cast<int>(text.data() - band.data());
                        summary.rows.push_back({text_x, summary_y, static_cast<int>(text.size()),
                            kDfhackHotkeysHintRule, {}, std::string(text)});
                        if (!summary_source.empty()) summary_source += ' ';
                        summary_source += text;
                    }
                    if (!summary.rows.empty()) {
                        for (const auto &text : source_texts) {
                            if (text.overlay_name == "buildingplan.filterselection" &&
                                    text.x == summary.rows.front().x && text.y == y &&
                                    !text.planner_summary.empty() &&
                                    std::string_view(text.planner_summary).starts_with(summary_source)) {
                                summary_source = text.planner_summary;
                                break;
                            }
                        }
                        if (const auto target = buildingplan_summary(summary_source)) {
                            summary.target = *target;
                            append_gui_prompt(summary, summary_left, summary_right);
                        }
                    }
                }
            }
            for (const auto prefix : {std::string_view("These options will affect"),
                    std::string_view("Plan constructions on tiles with existing")}) {
                const size_t x = row.find(prefix, left);
                if (x == std::string::npos || x + prefix.size() > static_cast<size_t>(right)) continue;
                const auto prompt = gui_prompt("Buildingplan description", static_cast<int>(x),
                    y, right, bottom - 1);
                if (!prompt) continue;
                for (const auto &part : prompt->rows)
                    dfhack_auxiliary_regions.push_back({part.x, part.y, part.length, 1});
                append_gui_prompt(*prompt, static_cast<int>(x), right);
            }
        }
    }
}
