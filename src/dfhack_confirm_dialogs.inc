// Included in dfhack_auxiliary_help.inc's connected-frame loop after the
// footer roles are known. confirm.lua:142 supplies a 45-column prewrapped
// string to DialogWindow's plain Label, not a WrappedLabel. specs.lua's
// conviction prompt contains the selected unit's actual visible name, while
// order removal appends a separately wrapped material/job description.
{
    // buildingplan uses a plain Label with separate item/building tokens and
    // passes only the pause callback to showYesNoPrompt. Label does not wrap.
    const auto mechanism_title = action == "Yes, proceed" ?
        translate_dfhack_console_owned_literal("DFHack GUI Mechanism dialog: ", title) : std::nullopt;
    if (mechanism_title) {
        const int body_right = right - 1;
        dfhack_auxiliary_regions.push_back(*frame);
        auxiliary_field(at, title_y, title, title_end, mechanism_title, true);
        const auto fields = native_dfhack_overlay_texts(gps_);
        const auto complete_field = [&](int x, int y, std::string_view visible) {
            for (const auto &field : fields)
                if (field.role == NativeDfhackOverlayTextRole::Text && field.view_id == "label" &&
                        field.full_x == x && field.y == y && field.visible.starts_with(visible) &&
                        field.full.starts_with(visible)) return std::string_view(field.full);
            return visible;
        };
        for (int y = top; y <= footer_y - 4; ++y) {
            const auto band = std::string_view(dfhack_context_rows[y]).substr(left, body_right - left);
            const auto row = trim_view(band);
            if (row.empty()) continue;
            int x = left + static_cast<int>(row.data() - band.data());
            // The spaces before these separately colored values are part
            // of the producer's label. Keep the blue value in its own column.
            size_t value_offset = 0;
            for (std::string_view prefix : {"Mechanism:       ", "Target building: ", "This mechanism: "}) {
                if (!row.starts_with(prefix)) continue;
                const auto label = trim_view(prefix);
                auxiliary_field(x, y, label, x + static_cast<int>(prefix.size()),
                    translate_dfhack_console_owned_literal("DFHack GUI Mechanism prompt: ", label));
                value_offset = prefix.size();
                break;
            }
            if (value_offset) {
                x += static_cast<int>(value_offset);
                const auto visible = row.substr(value_offset);
                const auto source = complete_field(x, y, visible);
                const auto kind = row.starts_with("Target building: ") ?
                    NativeInfoTitleKind::Building : NativeInfoTitleKind::ItemList;
                auxiliary_field(x, y, visible, body_right, translate_info_panel_title(kind, source));
            } else {
                auxiliary_field(x, y, row, body_right, translate_dfhack_console_owned_literal(
                    "DFHack GUI Mechanism prompt: ", trim_view(complete_field(x, y, row))));
            }
        }
        constexpr std::string_view pause = "Pause this confirmation";
        const int controls_y = footer_y - 2;
        const auto controls = std::string_view(dfhack_context_rows[controls_y]).substr(left, body_right - left);
        const auto pause_at = controls.find(": ");
        if (pause_at != std::string_view::npos && trim_view(controls.substr(pause_at + 2)) == pause)
            auxiliary_field(left + static_cast<int>(pause_at + 2), controls_y, pause, body_right,
                translate_dfhack_console_owned_literal("DFHack GUI Confirmation control: ", pause));
        gui_literal(action_x, footer_y, action, body_right, "Confirmation action");
        gui_literal(frame->x + 3, bottom, "PAUSE FORCED", frame->x + 15, "Frame status");
        continue;
    }
    const auto confirm_dialog = [&]() -> bool {
        if (!confirm_action || action != "Yes, proceed") return false;
        using ConfirmPair = std::pair<std::string_view, std::string_view>;
        static constexpr std::array<ConfirmPair, 15> questions{{
            {"Cancel trade",
                "Are you sure you want leave this screen? Selected items will not be saved."},
            {"Mark all fortress goods",
                "Are you sure you want mark all fortress goods at the depot? Your current fortress goods selections will be lost."},
            {"Unmark all fortress goods",
                "Are you sure you want unmark all fortress goods at the depot? Your current fortress goods selections will be lost."},
            {"Mark all merchant goods",
                "Are you sure you want mark all merchant goods at the depot? Your current merchant goods selections will be lost."},
            {"Confirm trade",
                "Are you sure you want to trade the selected goods?"},
            {"Seize merchant goods",
                "Are you sure you want seize marked merchant goods? This will make the merchant unwilling to trade further and will damage relations with the merchant's civilization."},
            {"Offer fortress goods",
                "Are you sure you want to offer these goods? You will receive no payment."},
            {"Cancel trade agreement",
                "Are you sure you want to leave this screen? The trade agreement selection will not be saved until you hit the \"Done\" button at the bottom of the screen."},
            {"Delete hauling route",
                "Are you sure you want to delete this route?"},
            {"Delete hauling stop",
                "Are you sure you want to delete this stop?"},
            {"Remove depot",
                "Are you sure you want to remove this depot? Merchants are present and will lose profits."},
            {"Delete uniform",
                "Are you sure you want to delete this uniform?"},
            {"Remove manger order",
                "Are you sure you want to remove this manager order?"},
            {"Remove manager order",
                "Are you sure you want to remove this manager order?"},
            {"Re-run finder",
                "Are you sure you want to re-run the site finder? Your current map highlights will be lost."},
        }};
        const auto question = std::find_if(questions.begin(), questions.end(),
            [&](const ConfirmPair &pair) { return pair.first == title; });
        const bool conviction = title == "Confirm conviction";
        const bool manager_order = title == "Remove manger order" ||
            title == "Remove manager order";
        if (question == questions.end() && !conviction) return false;

        // showYesNoPrompt always receives on_settings from confirm.lua.
        // Its controls have b=2 in the same Window body whose accept has b=0.
        // The message Label has b=4, leaving a row between it and the controls.
        const int body_right = right - 1;
        const int controls_y = footer_y - 2;
        const int label_last = footer_y - 4;
        const int body_width = body_right - left;
        if (left < 0 || body_width <= 0 || body_right > gps_->dimx ||
                top < 0 || label_last < top || controls_y >= gps_->dimy)
            return false;
        const auto controls = std::string_view(dfhack_context_rows[controls_y]).substr(
            left, body_width);
        constexpr std::string_view settings = "Settings";
        if (!controls.ends_with(settings) || controls.size() < settings.size() + 3)
            return false;
        const size_t settings_at = controls.size() - settings.size();
        if (controls.substr(settings_at - 2, 2) != ": ") return false;
        size_t settings_key = settings_at - 2;
        while (settings_key > 0 && !native_prose_space(
                static_cast<unsigned char>(controls[settings_key - 1])))
            --settings_key;
        auto settings_binding = std::string(controls.substr(
            settings_key, settings_at - 2 - settings_key));
        std::replace(settings_binding.begin(), settings_binding.end(), '-', '+');
        if (!is_keybinding_code(settings_binding)) return false;
        const auto settings_source = controls.substr(settings_key);
        const auto controls_raw = read_row(controls_y);
        if (controls_raw.compare(left + static_cast<int>(settings_key),
                settings_source.size(), settings_source) != 0)
            return false;

        std::string question_source;
        std::optional<std::string> body_target;
        if (conviction) {
            size_t previous_length = 0;
            std::vector<size_t> full_wrap_breaks;
            for (int y = top; y <= label_last; ++y) {
                const auto band = std::string_view(dfhack_context_rows[y]).substr(left, body_width);
                const auto ink = trim_view(band);
                if (ink.empty()) break;
                if (!question_source.empty()) {
                    if (previous_length == 45) full_wrap_breaks.push_back(question_source.size());
                    question_source += ' ';
                }
                question_source += ink;
                previous_length = ink.size();
            }
            constexpr std::string_view prefix = "Are you sure you want to convict ";
            constexpr std::string_view suffix = "? This action is irreversible.";
            if (!question_source.starts_with(prefix) || !question_source.ends_with(suffix) ||
                    question_source.size() <= prefix.size() + suffix.size()) return false;
            const auto name = std::string_view(question_source).substr(prefix.size(),
                question_source.size() - prefix.size() - suffix.size());
            std::string native_name(name);
            // A full wrap row can split a long nickname token. Preserve its
            // visible break inside the name instead of inventing a space.
            for (const size_t split : full_wrap_breaks)
                if (split >= prefix.size() && split < prefix.size() + name.size())
                    native_name[split - prefix.size()] = '\n';
            body_target = exact_literal_translation(
                "DFHack GUI Confirmation prompt: Are you sure you want to convict {n}? This action is irreversible.");
            if (!body_target) return false;
            const size_t name_at = body_target->find("{n}");
            if (name_at == std::string::npos) return false;
            // This is a typed unit field. Reuse its existing identity grammar;
            // authored names or ambiguous hard splits keep their native text.
            const auto name_target = name == "this creature"
                ? std::optional<std::string>("该生物")
                : native_name.find('\n') == std::string::npos
                    ? translate_dfhack_readable_unit_name(name)
                    : native_unit_identity_source_target(name);
            body_target->replace(name_at, 3,
                name_target ? *name_target : native_text_to_utf8(native_name));
        } else {
            question_source = question->second;
            body_target = exact_literal_translation("DFHack output: " + question_source);
        }
        const std::string_view title_scope = conviction ? "DFHack GUI Title: " : "DFHack output: ";
        const auto title_target = exact_literal_translation(
            std::string(title_scope) + std::string(title));
        if (!body_target || !title_target || !contains_cjk_utf8(*body_target) ||
                !contains_cjk_utf8(*title_target) ||
                read_row(title_y).compare(at, title.size(), title) != 0 ||
                read_row(footer_y).compare(action_x, action.size(), action) != 0)
            return false;

        const auto expected = dfhack_item_native_wrap(question_source, 45);
        if (expected.empty() || expected.size() > static_cast<size_t>(label_last - top + 1))
            return false;
        std::vector<Match> rows;
        rows.reserve(expected.size());
        for (size_t index = 0; index < expected.size(); ++index) {
            const int y = top + static_cast<int>(index);
            const auto native_line = std::string_view(expected[index]);
            const auto ink = trim_view(native_line);
            if (ink.empty() || native_line.size() > static_cast<size_t>(body_width))
                return false;
            const auto band = std::string_view(dfhack_context_rows[y]).substr(left, body_width);
            const auto visible = trim_view(band);
            const size_t indent = static_cast<size_t>(ink.data() - native_line.data());
            if (visible != ink || static_cast<size_t>(visible.data() - band.data()) != indent)
                return false;
            const int x = left + static_cast<int>(indent);
            if (read_row(y).compare(x, ink.size(), ink) != 0) return false;
            rows.push_back({x, y, static_cast<int>(ink.size()), kDfhackHotkeysHintRule,
                {}, std::string(ink)});
        }
        const int question_last = top + static_cast<int>(expected.size()) - 1;
        if (question_last < label_last) {
            // get_ethics_message inserts a real blank before its second
            // paragraph. Do not consume that paragraph or a nonblank suffix.
            const auto boundary = std::string_view(dfhack_context_rows[question_last + 1]).substr(
                left, body_width);
            const auto boundary_raw = read_row(question_last + 1);
            if (!trim_view(boundary).empty() || !trim_view(std::string_view(boundary_raw).substr(
                    left, body_width)).empty())
                return false;
        }

        std::optional<GuiPrompt> order_prompt;
        if (manager_order) {
            const auto order_description = [&]() -> std::optional<GuiPrompt> {
                std::vector<Match> order_rows;
                std::vector<std::string> native_lines;
                std::string source;
                for (int y = question_last + 2; y <= label_last; ++y) {
                    const auto band = std::string_view(dfhack_context_rows[y]).substr(left, body_width);
                    const auto ink = trim_view(band);
                    if (ink.empty()) {
                        for (int tail = y + 1; tail <= label_last; ++tail)
                            if (!trim_view(std::string_view(dfhack_context_rows[tail]).substr(
                                    left, body_width)).empty()) return std::nullopt;
                        break;
                    }
                    const size_t indent = static_cast<size_t>(ink.data() - band.data());
                    // make_order_material_desc starts with a space; RAW
                    // reactions do not. Retain that actual Label indentation.
                    const auto line = band.substr(0, indent + ink.size());
                    if (line.size() > 45 || read_row(y).compare(left, line.size(), line) != 0)
                        return std::nullopt;
                    if (!source.empty()) source += ' ';
                    source += line;
                    native_lines.emplace_back(line);
                    order_rows.push_back({left + static_cast<int>(indent), y,
                        static_cast<int>(ink.size()), kDfhackHotkeysHintRule, {}, std::string(ink)});
                }
                if (order_rows.empty() || dfhack_item_native_wrap(source, 45) != native_lines)
                    return std::nullopt;
                const std::string name(trim_view(source));
                const auto job_caption = [&](std::string_view job) -> std::optional<std::string> {
                    if (auto target = exact_literal_translation(
                            "DFHack GUI Notification job: " + std::string(job))) return target;
                    if (auto target = translate_fortress_activity(std::string(job), true)) return target;
                    return translate_dfhack_caption("job", job);
                };
                auto target = job_caption(name);
                // Equipment orders use the RAW item name in place of a job
                // caption. The complete item grammar already owns materials.
                if (!target) target = translate_fortress_item_caption(name);
                for (size_t split = name.find(' '); !target && split != std::string::npos;
                        split = name.find(' ', split + 1)) {
                    const auto material = translate_material_name(std::string_view(name).substr(0, split));
                    if (!material) continue;
                    const auto job = job_caption(std::string_view(name).substr(split + 1));
                    if (!job) continue;
                    auto composed = exact_literal_translation("DFHack GUI Confirmation order: {m} {j}");
                    if (!composed) continue;
                    const auto material_at = composed->find("{m}"), job_at = composed->find("{j}");
                    if (material_at == std::string::npos || job_at == std::string::npos) continue;
                    if (material_at < job_at) {
                        composed->replace(job_at, 3, *job);
                        composed->replace(material_at, 3, *material);
                    } else {
                        composed->replace(material_at, 3, *material);
                        composed->replace(job_at, 3, *job);
                    }
                    target = std::move(composed);
                }
                if (!target || !contains_cjk_utf8(*target)) return std::nullopt;
                return GuiPrompt{std::move(order_rows), std::move(*target)};
            };
            order_prompt = order_description();
        }

        // The optional left-anchored pause control is a separate HotkeyLabel.
        // Never translate its key, or infer a partially overwritten control.
        constexpr std::string_view pause = "Pause this confirmation";
        std::optional<int> pause_at;
        size_t pause_size = 0;
        const size_t pause_separator = controls.find(": ");
        if (pause_separator != std::string_view::npos && pause_separator > 0) {
            auto pause_binding = std::string(controls.substr(0, pause_separator));
            std::replace(pause_binding.begin(), pause_binding.end(), '-', '+');
            const size_t caption_at = pause_separator + 2;
            const size_t caption_end = std::min(caption_at + pause.size(), settings_key);
            if (is_keybinding_code(pause_binding) &&
                    caption_end > caption_at &&
                    controls.substr(caption_at, caption_end - caption_at) ==
                        pause.substr(0, caption_end - caption_at) &&
                    controls_raw.compare(left, caption_end, controls.substr(0, caption_end)) == 0) {
                pause_at = left + static_cast<int>(caption_at);
                pause_size = caption_end - caption_at;
            }
        }

        // Own only this proven frame. The unknown ethics paragraph retains
        // native glyphs, while the translated question clips to its own rows.
        dfhack_auxiliary_regions.push_back(*frame);
        auxiliary_literal(at, title_y, title, title_end, true, title_scope);
        append_gui_prompt(GuiPrompt{std::move(rows), *body_target}, left, body_right);
        if (order_prompt) append_gui_prompt(*order_prompt, left, body_right);
        gui_literal(action_x, footer_y, action, body_right, "Confirmation action");
        gui_literal(left + static_cast<int>(settings_at), controls_y, settings,
            body_right, "Confirmation control");
        gui_literal(frame->x + 3, bottom, "PAUSE FORCED", frame->x + 15,
            "Frame status");
        if (pause_at) {
            if (pause_size == pause.size())
                gui_literal(*pause_at, controls_y, pause,
                    left + static_cast<int>(settings_key), "Confirmation control");
            else if (const auto target = exact_literal_translation(
                    "DFHack GUI Confirmation control: " + std::string(pause));
                    target && contains_cjk_utf8(*target) && (only_y < 0 || only_y == controls_y)) {
                // The right-anchored Settings label can paint over the end
                // of the native left label. Its exact owned rectangle proves
                // the truncation; paint only inside the remaining left slot.
                Match match{*pause_at, controls_y, static_cast<int>(pause_size),
                    kDfhackHotkeysHintRule, *target, std::string(pause.substr(0, pause_size))};
                match.layout_x = *pause_at;
                match.layout_length = left + static_cast<int>(settings_key) - *pause_at;
                match.layout_left = true;
                match.layout_clip_right = left + static_cast<int>(settings_key);
                dfhack_auxiliary_matches.push_back(std::move(match));
            }
        }
        return true;
    };
    if (confirm_dialog()) continue;
}
