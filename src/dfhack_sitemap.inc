// gui/sitemap owns three typed name lists. Resolve their complete producer
// fields before laying the translations out inside the native list clip.
{
    constexpr std::string_view sitemap_scope = "DFHack GUI Sitemap: ";
    constexpr std::array<std::string_view, 3> sitemap_tabs{
        "Creatures", "Locations", "Artifacts"};
    for (int title_y = 0; title_y < gps_->dimy; ++title_y) {
        constexpr std::string_view title = "Sitemap";
        const size_t title_at = dfhack_context_rows[title_y].find(title);
        if (title_at == std::string::npos) continue;
        const auto frame = native_dfhack_frame(dfhack_context_rows, title_y,
            static_cast<int>(title_at), static_cast<int>(title.size()), 44, 20);
        if (!frame) continue;
        const int edge = frame->x + frame->w - 1, bottom = frame->y + frame->h - 1;
        // This Window has right/bottom inset zero, unlike the default frame.
        const int left = frame->x + 2, top = frame->y + 2;
        if (edge <= left || bottom - 7 < top + 5 ||
                dfhack_context_rows[bottom].compare(edge - 7, 6, "DFHack") != 0)
            continue;
        std::array<int, 3> tab_x{};
        int tab_y = -1;
        for (int y = top; y <= top + 1; ++y) {
            int cursor = left;
            bool complete = true;
            for (size_t i = 0; i < sitemap_tabs.size(); ++i) {
                const size_t at = dfhack_context_rows[y].find(sitemap_tabs[i], cursor);
                if (at == std::string::npos || at + sitemap_tabs[i].size() >
                        static_cast<size_t>(edge)) { complete = false; break; }
                tab_x[i] = static_cast<int>(at);
                cursor = tab_x[i] + static_cast<int>(sitemap_tabs[i].size());
            }
            if (complete) { tab_y = y; break; }
        }
        if (tab_y < 0) continue;

        std::vector<Match> footer_rows;
        std::string footer_source;
        for (int y = bottom - 3; y < bottom; ++y) {
            const auto band = std::string_view(dfhack_context_rows[y]).substr(left, edge - left);
            const auto text = trim_view(band);
            if (text.empty()) continue;
            // Pages' first row is either an empty-state Label or the live
            // filter EditField. Never treat entered filter text as a status.
            if (y == top + 3 && text != "Nobody around. Spooky!" &&
                    text != "Please enter a site to see locations." &&
                    text != "No temples, guildhalls, hospitals, taverns," &&
                    text != "No artifacts around here.") continue;
            if (y == top + 4 && text != "or libraries found at this site.") continue;
            const int x = left + static_cast<int>(text.data() - band.data());
            if (read_row(y).compare(x, text.size(), text) != 0) break;
            footer_rows.push_back({x, y, static_cast<int>(text.size()),
                kDfhackHotkeysHintRule, {}, std::string(text)});
            if (!footer_source.empty()) footer_source += ' ';
            footer_source += text;
        }
        constexpr std::string_view footer_short =
            "Click on a name or hit Enter to zoom to the selected target.";
        constexpr std::string_view footer_long =
            "Click on a name or hit Enter to zoom to the selected target. "
            "Shift-click or Shift-Enter to zoom and follow unit/item.";
        if (footer_source != footer_short && footer_source != footer_long) continue;

        const auto rgb_at = [&](int x, int y) {
            bool layer = false;
            const auto *cell = cell_at(x, y, &layer);
            return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
        };
        const int creature_color = rgb_at(tab_x[0], tab_y);
        const int location_color = rgb_at(tab_x[1], tab_y);
        const int artifact_color = rgb_at(tab_x[2], tab_y);
        const bool creatures = creature_color >= 0 && location_color >= 0 &&
            location_color == artifact_color && creature_color != location_color;
        const bool locations = location_color >= 0 && creature_color >= 0 &&
            creature_color == artifact_color && location_color != creature_color;
        const bool artifacts = artifact_color >= 0 && creature_color >= 0 &&
            creature_color == location_color && artifact_color != creature_color;
        if (creatures || locations || artifacts) dfhack_auxiliary_regions.push_back(*frame);
        gui_literal(static_cast<int>(title_at), title_y, title,
            static_cast<int>(title_at + title.size()), "Title", true);

        const auto emit = [&](int x, int y, std::string_view source,
                const std::optional<std::string> &target, int right, bool centered = false) {
            if (source.empty() || x < left || x + static_cast<int>(source.size()) > right ||
                    read_row(y).compare(x, source.size(), source) != 0) return;
            dfhack_auxiliary_regions.push_back({x, y, static_cast<int>(source.size()), 1});
            if (!target || (only_y >= 0 && only_y != y)) return;
            Match match{x, y, static_cast<int>(source.size()), kDfhackHotkeysHintRule,
                *target, std::string(source)};
            match.layout_x = x;
            match.layout_length = right - x;
            match.layout_clip_right = right;
            match.layout_left = !centered;
            match.layout_prepared = true;
            dfhack_auxiliary_matches.push_back(std::move(match));
        };
        // TabBar repeats each caption in two native half-font rows. The
        // common half-font layout retains one translated caption for both.
        for (int y = top; y <= top + 1; ++y)
            for (size_t i = 0; i < sitemap_tabs.size(); ++i)
                if (dfhack_context_rows[y].compare(tab_x[i], sitemap_tabs[i].size(),
                        sitemap_tabs[i]) == 0)
                    emit(tab_x[i], y, sitemap_tabs[i],
                        exact_literal_translation(std::string(sitemap_tabs[i])),
                        tab_x[i] + static_cast<int>(sitemap_tabs[i].size()), true);

        if (auto target = exact_literal_translation(std::string(sitemap_scope) + footer_source)) {
            std::vector<uint32_t> codepoints;
            if (decode_utf8(*target, codepoints)) {
                std::vector<int> colors(codepoints.size(), rgb_at(left, bottom - 3));
                std::vector<std::pair<size_t, size_t>> words;
                const auto color_key = [&](std::string_view key, int y) {
                    const size_t source_at = dfhack_context_rows[y].find(key, left);
                    const size_t target_at = target->find(key);
                    if (source_at == std::string::npos || target_at == std::string::npos ||
                            source_at + key.size() > static_cast<size_t>(edge)) return;
                    std::vector<uint32_t> prefix;
                    if (!decode_utf8(std::string_view(*target).substr(0, target_at), prefix)) return;
                    const size_t begin = prefix.size(), end = begin + key.size();
                    if (end > colors.size()) return;
                    std::fill(colors.begin() + begin, colors.begin() + end,
                        rgb_at(static_cast<int>(source_at), y));
                    words.emplace_back(begin, end);
                };
                color_key("Enter", bottom - 3);
                if (footer_source == footer_long) color_key("Shift-Enter", bottom - 1);
                footer_rows.front().layout_native_clip = auxiliary_pixels(
                    {left, bottom - 3, edge - left, 3});
                append_bounded_paragraph(std::move(footer_rows), *target, screen_rows,
                    dfhack_auxiliary_matches, only_y, edge, edge, colors, false,
                    left, std::nullopt, words);
            }
        }
        dfhack_auxiliary_regions.push_back({left, bottom - 3, edge - left, 3});

        const int list_right = edge - 2;
        for (int y = top + 3; y <= bottom - 7; ++y) {
            const auto band = std::string_view(dfhack_context_rows[y]).substr(left, list_right - left);
            const auto text = trim_view(band);
            if (text.empty()) continue;
            const int x = left + static_cast<int>(text.data() - band.data());
            if (auto target = exact_literal_translation(std::string(sitemap_scope) + std::string(text)))
                emit(x, y, text, target, list_right);
        }
        const auto complete_field = [&](int x, int y, std::string_view visible) {
            return lookup_native_dfhack_sitemap_text(gps_, x, y, visible)
                .value_or(std::string(visible));
        };

        if (locations) {
            // Each location is a tokenized label: name, punctuation, type,
            // punctuation, zone status. Preserve those field boundaries even
            // when the final token is only partly visible in the native clip.
            for (int y = top + 5; y <= bottom - 7; ++y) {
                const auto band = std::string_view(dfhack_context_rows[y]).substr(left, list_right - left);
                const auto text = trim_view(band);
                if (text.empty()) continue;
                int x = left + static_cast<int>(text.data() - band.data());
                std::string_view remaining = text;
                bool name_field = true;
                while (!remaining.empty()) {
                    const auto captured = lookup_native_dfhack_sitemap_text(gps_, x, y, remaining);
                    if (!captured || captured->empty()) break;
                    const size_t width = std::min(captured->size(), remaining.size());
                    const auto visible = remaining.substr(0, width);
                    const auto field = trim_view(*captured);
                    std::optional<std::string> target;
                    if (name_field) {
                        const auto following = trim_view(remaining.substr(width));
                        target = translate_fortress_hospital_reference(field, following.starts_with("(Hospital)"));
                        if (!target) target = translate_legends_name(field, false);
                        if (!target) target = native_text_to_utf8(field);
                        name_field = false;
                    } else if (field == "(" || field == ")") {
                        target = std::string(field);
                    } else if (field.starts_with("Temple to ")) {
                        auto entity = translate_legends_name(field.substr(10), true);
                        if (!entity) entity = translate_legends_name(field.substr(10), false);
                        const auto temple = exact_literal_translation("Temple");
                        if (entity && temple) target = "供奉" + *entity + "的" + *temple;
                    } else if (field.ends_with(" guildhall")) {
                        const auto profession = translate_unit_profession(
                            field.substr(0, field.size() - 10), true);
                        const auto hall = exact_literal_translation("Guildhall");
                        if (profession && hall) target = *profession + *hall;
                    } else if (field.starts_with('[') && field.ends_with(']')) {
                        auto status = field.substr(1, field.size() - 2);
                        target = exact_literal_translation(std::string(sitemap_scope) + std::string(status));
                        if (!target && status.ends_with(" zones")) {
                            const auto number = status.substr(0, status.size() - 6);
                            const auto zones = exact_literal_translation(std::string(sitemap_scope) + "zones");
                            if (zones && !number.empty() && std::all_of(number.begin(), number.end(),
                                    [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                                target = std::string(number) + *zones;
                        }
                        if (target) target = "[" + *target + "]";
                    } else {
                        target = exact_literal_translation(std::string(field));
                    }
                    emit(x, y, visible, target, std::min(list_right, x + static_cast<int>(width)));
                    x += static_cast<int>(width);
                    remaining.remove_prefix(width);
                }
            }
            continue;
        }
        if (artifacts) {
            for (int y = top + 5; y <= bottom - 7; ++y) {
                const auto band = std::string_view(dfhack_context_rows[y]).substr(left, list_right - left);
                const auto text = trim_view(band);
                if (text.empty()) continue;
                const int x = left + static_cast<int>(text.data() - band.data());
                const std::string full = complete_field(x, y, text);
                // ReadableDescription returns a bare book title, or a native
                // artifact name, its English title and a parenthesized type.
                // An occupied artifact cage appends its captive's full unit
                // identity after that item record; keep the two name types.
                std::string_view item = full;
                std::optional<std::string> captive;
                const size_t captive_at = item.rfind(" [");
                if (captive_at != std::string_view::npos && item.ends_with(']')) {
                    auto unit = item.substr(captive_at + 2, item.size() - captive_at - 3);
                    constexpr std::string_view hostile = " (hostile)";
                    const bool is_hostile = unit.ends_with(hostile);
                    if (is_hostile) unit.remove_suffix(hostile.size());
                    captive = translate_dfhack_readable_unit_name(unit);
                    if (captive) {
                        if (is_hostile)
                            if (const auto status = exact_literal_translation(
                                    std::string(sitemap_scope) + "hostile"))
                                *captive += "（" + *status + "）";
                        item = item.substr(0, captive_at);
                    }
                }
                auto target = translate_dfhack_named_artifact(item);
                if (!target) target = translate_fortress_item_caption(item);
                if (!target) target = translate_legends_book(item);
                if (target && captive) *target += " [" + *captive + "]";
                emit(x, y, text, target, list_right);
            }
            continue;
        }
        if (!creatures) continue;
        for (int y = top + 5; y <= bottom - 7; y += 2) {
            const auto band = std::string_view(dfhack_context_rows[y]).substr(left, list_right - left);
            const auto text = trim_view(band);
            if (!text.empty()) {
                const int x = left + static_cast<int>(text.data() - band.data());
                emit(x, y, text, translate_dfhack_readable_unit_name(complete_field(x, y, text)), list_right);
            }
            if (y + 1 > bottom - 7) continue;
            const auto status_band = std::string_view(dfhack_context_rows[y + 1]).substr(
                left, list_right - left);
            const auto status = trim_view(status_band);
            const auto separator = status.find(": ");
            const auto disposition = trim_view(status.substr(0, separator));
            if (disposition.empty()) continue;
            const int x = left + static_cast<int>(disposition.data() - status_band.data());
            auxiliary_literal(x, y + 1, disposition,
                separator == std::string_view::npos ? list_right
                    : x + static_cast<int>(disposition.size()), false, sitemap_scope);
            // Affiliation is a separate brown token after the disposition.
            // Reuse semantic entity names and entity-type terms as a unit.
            if (separator == std::string_view::npos) continue;
            const auto affiliation = trim_view(status.substr(separator + 2));
            if (affiliation.empty()) continue;
            const int affiliation_x = left + static_cast<int>(affiliation.data() - status_band.data());
            const std::string full_affiliation = complete_field(affiliation_x, y + 1, affiliation);
            std::optional<std::string> target = exact_literal_translation(
                std::string(sitemap_scope) + full_affiliation);
            const auto comma = full_affiliation.rfind(", ");
            if (!target && comma != std::string_view::npos) {
                const auto entity = translate_legends_name(std::string_view(full_affiliation).substr(0, comma), false);
                const auto kind = translate_legends_term(std::string_view(full_affiliation).substr(comma + 2), false);
                if (entity && kind) target = *entity + "，" + *kind;
            }
            emit(affiliation_x, y + 1, affiliation, target, list_right);
        }
    }
}
