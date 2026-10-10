// The crafting renderer has four modes (directory/reaction, carcass,
// butchery tool and reagent). Its RAW captions, descriptions, job-item
// requirements and actual inventory items are independent semantic fields.
// A complete unresolved field stays native; none enters personal-name
// translation or the generic word matcher.
std::optional<std::string> Overlay::translate_adventure_crafting_text(
        std::string_view raw_source, NativeAdventureCraftingRole role) const {
    const std::string source = normalize_utterance(raw_source);
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    const auto complete = [](const std::optional<std::string> &target) {
        return target && !target->empty() &&
            target->find("[C:") == std::string::npos &&
            target->find_first_of("\r\n") == std::string::npos &&
            std::none_of(target->begin(), target->end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
            });
    };
    const auto scoped = [&](std::string_view context, std::string_view value) {
        const std::string prefix = "Adventure crafting " + std::string(context) + ": ";
        if (auto target = exact_literal_translation(prefix + std::string(value))) return target;
        // 0x52d650 capitalizes only the first native byte. RAW NAME remains
        // lowercase, so retain its exact remainder when looking up that same
        // authored field in either spelling.
        std::string spelling(value);
        if (!spelling.empty() && spelling.front() >= 'A' && spelling.front() <= 'Z') {
            spelling.front() += 'a' - 'A';
            if (auto target = exact_literal_translation(prefix + spelling)) return target;
        } else if (!spelling.empty() && spelling.front() >= 'a' && spelling.front() <= 'z') {
            spelling.front() -= 'a' - 'A';
            if (auto target = exact_literal_translation(prefix + spelling)) return target;
        }
        return std::optional<std::string>{};
    };
    const auto format = [&](std::string_view key,
            const std::vector<std::pair<std::string, std::string>> &fields)
            -> std::optional<std::string> {
        auto target = scoped("format", key);
        if (!target) return std::nullopt;
        for (const auto &[slot, value] : fields) {
            const size_t at = target->find(slot);
            if (at == std::string::npos ||
                    target->find(slot, at + slot.size()) != std::string::npos)
                return std::nullopt;
            target->replace(at, slot.size(), value);
        }
        if (target->find_first_of("{}") != std::string::npos) return std::nullopt;
        return complete(target) ? target : std::nullopt;
    };
    const auto reaction = [&](std::string_view value) -> std::optional<std::string> {
        if (auto target = scoped("reaction", value); complete(target)) return target;
        std::vector<size_t> origins;
        auto target = RULESETS.translate_with_origins(native_text_to_utf8(value),
            "::menu", origins);
        if (!complete(target) && !value.empty() && value.front() >= 'a' && value.front() <= 'z') {
            std::string spelling(value);
            spelling.front() -= 'a' - 'A';
            target = RULESETS.translate_with_origins(native_text_to_utf8(spelling), "::menu", origins);
        }
        return complete(target) ? target : std::nullopt;
    };
    if (role == NativeAdventureCraftingRole::Caption) {
        // Wanderer's CATEGORY_NAME includes the authored navigation arrow.
        // Preserve it while resolving the complete category after it.
        const bool arrow = source.starts_with("-> ");
        const std::string_view caption = arrow ? std::string_view(source).substr(3) : source;
        auto target = scoped("category", caption);
        if (!complete(target)) target = reaction(caption);
        if (!complete(target)) return std::nullopt;
        return arrow ? std::optional<std::string>("→ " + *target) : target;
    }
    if (role == NativeAdventureCraftingRole::Description) {
        auto target = scoped("description", source);
        if (complete(target)) return target;
        // CATEGORY_DESCRIPTION is authored RAW text. These complete
        // construction sentences carry typed
        // resource/product fields. Resolve all fields before claiming a
        // sentence; individual English words never become screen matches.
        const auto noun = [&](auto &&self, std::string_view value, unsigned depth)
                -> std::optional<std::string> {
            value = trim_view(value);
            if (value.empty() || depth > 24) return std::nullopt;
            auto item = scoped("noun", value);
            if (!complete(item)) item = translate_workshop_recipe_source(value);
            if (complete(item)) return item;
            for (std::string_view separator : {", ", " and ", " or "}) {
                for (size_t at = value.find(separator); at != std::string_view::npos;
                        at = value.find(separator, at + separator.size())) {
                    if (!at || at + separator.size() >= value.size()) continue;
                    const auto first = self(self, value.substr(0, at), depth + 1);
                    const auto second = self(self, value.substr(at + separator.size()), depth + 1);
                    if (!first || !second) continue;
                    const auto result = format(separator == " or " ? "noun alternatives" : "join",
                        {{"{s1}", *first}, {"{s2}", *second}});
                    if (result) return result;
                }
            }
            return std::nullopt;
        };
        struct DescriptionForm {
            std::string_view prefix, separator, key;
        };
        for (const auto &form : {
                DescriptionForm{"Carve ", " into ", "carve"},
                DescriptionForm{"Deconstruct ", " into ", "deconstruct"},
                DescriptionForm{"Make ", " using ", "make using"},
                DescriptionForm{"Decorate ", " with ", "decorate"}}) {
            if (!source.starts_with(form.prefix) || !source.ends_with('.')) continue;
            const std::string_view body(source.data() + form.prefix.size(),
                source.size() - form.prefix.size() - 1);
            for (size_t at = body.find(form.separator); at != std::string_view::npos;
                    at = body.find(form.separator, at + form.separator.size())) {
                const auto first = noun(noun, body.substr(0, at), 0);
                const auto second = noun(noun, body.substr(at + form.separator.size()), 0);
                if (!first || !second) continue;
                target = format(form.key, {{"{s1}", *first}, {"{s2}", *second}});
                if (target) return target;
            }
        }
        if (source.starts_with("Make ") && source.ends_with('.')) {
            const auto item = noun(noun, std::string_view(source).substr(5, source.size() - 6), 0);
            if (item) {
                target = format("make", {{"{s}", *item}});
                if (target) return target;
            }
        }
        // Complete existing vanilla descriptions use the shared UI catalog.
        const std::vector<int> colors(raw_source.size(), 0xffffff);
        std::vector<int> translated_colors;
        target = translate_help_paragraph(raw_source, colors, translated_colors, true,
            -1, true);
        return complete(target) ? target : std::nullopt;
    }
    const auto requirement = [&](std::string_view value) -> std::optional<std::string> {
        auto target = scoped("requirement", value);
        if (!complete(target)) target = translate_workshop_recipe_source(value);
        return complete(target) ? target : std::nullopt;
    };
    if (role == NativeAdventureCraftingRole::Needs) {
        if (auto target = scoped("needs", source); complete(target)) return target;
        constexpr std::string_view prefix = "Needs: ";
        if (!source.starts_with(prefix)) return std::nullopt;
        std::string_view remaining(source);
        remaining.remove_prefix(prefix.size());
        if (remaining == "nothing.") return format("needs nothing", {});
        std::optional<std::string> list;
        // Commas and brackets inside a requirement belong to its noun
        // grammar. Only a fully parsed consumption marker ends an entry.
        // Quantity is an independent constructor branch inside that marker.
        while (!remaining.empty()) {
            size_t consumed_end = std::string_view::npos;
            std::optional<std::string> entry;
            for (size_t at = remaining.find(" ["); at != std::string_view::npos;
                    at = remaining.find(" [", at + 1)) {
                const size_t end = remaining.find(']', at + 2);
                if (end == std::string_view::npos) break;
                std::string_view marker = remaining.substr(at + 2, end - at - 2);
                std::string count;
                if (const size_t slash = marker.find('/'); slash != std::string_view::npos) {
                    const auto digits = marker.substr(0, slash);
                    if (digits.empty() || !std::all_of(digits.begin(), digits.end(), [](char ch) {
                            return ch >= '0' && ch <= '9';
                        })) continue;
                    count.assign(digits);
                    marker.remove_prefix(slash + 1);
                }
                const bool uses = marker == "consumed";
                if (!uses && marker != "not consumed") continue;
                const auto item = requirement(remaining.substr(0, at));
                if (!item) continue;
                entry = count.empty()
                    ? format(uses ? "consumed" : "not consumed", {{"{s}", *item}})
                    : format(uses ? "count consumed" : "count not consumed",
                        {{"{s}", *item}, {"{d}", count}});
                if (!entry) continue;
                consumed_end = end + 1;
                break;
            }
            if (!entry || consumed_end == std::string_view::npos) return std::nullopt;
            if (!list) list = entry;
            else list = format("join", {{"{s1}", *list}, {"{s2}", *entry}});
            if (!list) return std::nullopt;
            remaining.remove_prefix(consumed_end);
            if (remaining.empty()) break;
            if (!remaining.starts_with(", ")) return std::nullopt;
            remaining.remove_prefix(2);
            if (remaining.empty()) return std::nullopt;
        }
        return list ? format("needs", {{"{s}", *list}}) : std::nullopt;
    }
    if (role == NativeAdventureCraftingRole::ReagentPrompt) {
        if (auto target = scoped("prompt", source); complete(target)) return target;
        constexpr std::string_view select = ": select ";
        const size_t separator = source.find(select);
        if (separator == std::string::npos) {
            // Invalid/absent reagent index leaves the selected reaction's
            // complete name plus the producer's final period.
            if (!source.ends_with('.')) return std::nullopt;
            const auto action = reaction(std::string_view(source).substr(0, source.size() - 1));
            return action ? format("reaction prompt", {{"{s}", *action}}) : std::nullopt;
        }
        if (!separator || !source.ends_with(")."))
            return std::nullopt;
        // Try complete field boundaries; reagent RAW names can themselves
        // contain parentheses. No unknown reagent name becomes a person.
        const auto action = reaction(std::string_view(source).substr(0, separator));
        if (!action) return std::nullopt;
        const size_t name_begin = separator + select.size();
        constexpr std::string_view consumed = ", consumed";
        constexpr std::string_view retained = ", not consumed";
        std::string_view body(source.data(), source.size() - 2);
        const bool uses = body.ends_with(consumed);
        const bool keeps = body.ends_with(retained);
        if (!uses && !keeps) return std::nullopt;
        body.remove_suffix(uses ? consumed.size() : retained.size());
        std::string count;
        // Native quantity>1 adds the remaining selection count immediately
        // before consumption. It is neither an item name nor stock count.
        constexpr std::string_view left = " left";
        if (body.ends_with(left)) {
            const size_t comma = body.rfind(", ");
            if (comma == std::string_view::npos) return std::nullopt;
            const auto digits = body.substr(comma + 2, body.size() - comma - 2 - left.size());
            const auto magnitude = digits.starts_with('-') ? digits.substr(1) : digits;
            if (magnitude.empty() || !std::all_of(magnitude.begin(), magnitude.end(), [](char ch) {
                    return ch >= '0' && ch <= '9';
                })) return std::nullopt;
            count.assign(digits);
            body = body.substr(0, comma);
        }
        for (size_t at = body.find(" (", name_begin); at != std::string_view::npos;
                at = body.find(" (", at + 1)) {
            const auto name = scoped("reagent", body.substr(name_begin, at - name_begin));
            auto item = requirement(body.substr(at + 2));
            if (!complete(name) || !item) continue;
            if (!count.empty()) item = format("remaining", {{"{s}", *item}, {"{d}", count}});
            if (!item) continue;
            const auto descriptor = format(uses ? "consumed" : "not consumed", {{"{s}", *item}});
            if (!descriptor) continue;
            return format("reagent prompt", {{"{s1}", *action},
                {"{s2}", *name}, {"{s3}", *descriptor}});
        }
        return std::nullopt;
    }
    if (role == NativeAdventureCraftingRole::Item) {
        auto target = translate_inventory_item_name(raw_source, -1, -1);
        if (!target) target = translate_item_description_term(raw_source);
        // Actual item identity may include a proven authored nickname.
        return translation_complete_with_native_nicknames(target, raw_source) ? target : std::nullopt;
    }
    if (role == NativeAdventureCraftingRole::Message) {
        auto target = scoped("message", source);
        if (!complete(target)) target = exact_literal_translation(source);
        if (complete(target)) return target;
        const std::vector<int> colors(raw_source.size(), 0xffffff);
        std::vector<int> translated_colors;
        target = translate_help_paragraph(raw_source, colors, translated_colors, true);
        return complete(target) ? target : std::nullopt;
    }
    return std::nullopt;
}

// Return the proven crafting frames so the generic Adventure chooser does
// not reinterpret this renderer's captions as ordinary action/name choices.
std::vector<SDL_Rect> Overlay::append_adventure_crafting_matches(
        std::vector<std::string> &screen_rows, std::vector<Match> &matches,
        std::vector<Match> &untranslated_rows, int only_y,
        const unsigned char *raw) const {
    std::vector<SDL_Rect> panels;
    if (!gps_ || !gps_->screen || gps_->dimx <= 0 || gps_->dimy <= 0 ||
            screen_rows.size() != static_cast<size_t>(gps_->dimy) ||
            gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return panels;
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const NativePanelBorders borders(*gps_, true);
    struct FieldRow {
        NativeAdventureCraftingRole role;
        Match span;
        std::string complete;
        SDL_Rect panel, clip;
        uint32_t half = 0;
    };
    std::vector<FieldRow> fields;
    for (bool top : {false, true}) {
        const auto draws = captured_native_drawn_text_rows(top);
        for (const auto &draw : draws) {
            const auto role = draw.adventure_crafting_role;
            if (role == NativeAdventureCraftingRole::None || draw.editable_text ||
                    draw.source.empty() || draw.draw_epoch != epoch ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.draw_grid != (top ? gps_->screen_top : gps_->screen) ||
                    (raw && raw != draw.draw_grid) || !draw.draw_clip ||
                    draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;
            const auto ink = trim_view(draw.source);
            if (ink.empty()) continue;
            const int first = draw.x + static_cast<int>(ink.data() - draw.source.data());
            const int end = first + static_cast<int>(ink.size());
            const auto panel = native_panel_interior(borders, *gps_, first, end, draw.y);
            if (!panel) continue;
            SDL_Rect clip{};
            if (!SDL_IntersectRect(&*panel, &*draw.draw_clip, &clip) ||
                    first < clip.x || end > clip.x + clip.w ||
                    draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
            // The list's scrollbar occupies native panel cells without
            // narrowing addst's clip. Preserve that separate control area.
            for (const auto &scrollbar : native_vertical_scrollbar_spans(*gps_, *panel)) {
                if (draw.y >= scrollbar.y && draw.y < scrollbar.y + scrollbar.h &&
                        scrollbar.x >= first && scrollbar.x < clip.x + clip.w)
                    clip.w = scrollbar.x - clip.x;
            }
            if (end > clip.x + clip.w) continue;
            bool intact = true;
            uint32_t half = UINT32_MAX;
            int foreground = -1;
            for (int x = first; x < end; ++x) {
                bool active_top = false;
                const auto *cell = cell_at(x, draw.y, &active_top);
                const size_t index = static_cast<size_t>(x) * gps_->dimy + draw.y;
                const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                const char expected = draw.source[static_cast<size_t>(x - draw.x)];
                if (!cell || active_top != top || (cell[0] ? cell[0] : ' ') !=
                        static_cast<unsigned char>(expected)) { intact = false; break; }
                // A later draw can retain identical bytes but own their
                // meaning. Resolve final writes by sequence before claiming.
                if (std::any_of(draws.begin(), draws.end(), [&](const NativeDrawnTextRow &later) {
                        return later.sequence > draw.sequence && later.y == draw.y &&
                            later.x <= x && x - later.x < static_cast<int>(later.source.size());
                    })) { intact = false; break; }
                if (expected == ' ') continue;
                const uint32_t current = flags ? flags[index] & ((1u << 3) | (1u << 4)) : 0;
                if (current == ((1u << 3) | (1u << 4)) ||
                        (half != UINT32_MAX && half != current)) { intact = false; break; }
                half = current;
                if (foreground < 0) foreground = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            }
            if (!intact || foreground < 0) continue;
            if (std::none_of(panels.begin(), panels.end(), [&](const SDL_Rect &seen) {
                    return seen.x == panel->x && seen.y == panel->y &&
                        seen.w == panel->w && seen.h == panel->h;
                })) panels.push_back(*panel);
            Match span{first, draw.y, end - first, kUiMessageRule, {}, std::string(ink)};
            span.layout_foreground_rgb = foreground;
            fields.push_back({role, std::move(span), draw.complete_source,
                *panel, clip, half == UINT32_MAX ? 0 : half});
        }
    }
    std::stable_sort(fields.begin(), fields.end(), [](const FieldRow &a, const FieldRow &b) {
        return a.span.y != b.span.y ? a.span.y < b.span.y : a.span.x < b.span.x;
    });
    constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
    const auto same_panel = [](const SDL_Rect &a, const SDL_Rect &b) {
        return a.x == b.x && a.y == b.y && a.w == b.w && a.h == b.h;
    };
    for (size_t begin = 0; begin < fields.size();) {
        const auto &first = fields[begin];
        std::vector<Match> rows, duplicates;
        std::string source;
        int left = first.span.x, right = first.clip.x + first.clip.w;
        size_t end = begin;
        for (; end < fields.size(); ++end) {
            const auto &field = fields[end];
            if (field.role != first.role || field.span.x != first.span.x ||
                    !same_panel(field.panel, first.panel) ||
                    (end > begin && field.span.y != fields[end - 1].span.y + 1)) break;
            // The renderer emits every semantic field as one plain row.
            // Adjacent descriptions or Needs rows are distinct records;
            // only complementary native halves share their complete source.
            const bool partner = end > begin && fields[end - 1].half == upper &&
                field.half == lower && fields[end - 1].span.source == field.span.source;
            if (end > begin && !partner) break;
            right = std::min(right, field.clip.x + field.clip.w);
            if (partner) {
                rows.back().native_split_text = true;
                rows.back().native_split_top_y = rows.back().y;
                Match duplicate = field.span;
                duplicate.native_split_text = true;
                duplicate.native_split_duplicate = true;
                duplicate.native_split_top_y = rows.back().y;
                duplicates.push_back(std::move(duplicate));
                continue;
            }
            if (!source.empty()) source.push_back(' ');
            source += field.span.source;
            rows.push_back(field.span);
        }
        if (rows.empty()) { begin = std::max(begin + 1, end); continue; }
        // Prefer the real pre-clipping source. A caption cannot
        // borrow a similar neighboring name to complete a hidden suffix.
        if (!first.complete.empty()) source = first.complete;
        int bottom = first.panel.y + first.panel.h;
        for (size_t next = end; next < fields.size(); ++next) {
            if (!same_panel(fields[next].panel, first.panel) ||
                    fields[next].span.y <= rows.back().y) continue;
            bottom = std::min(bottom, fields[next].span.y);
            break;
        }
        const SDL_Rect pixels{origin_x + left * tile_w,
            origin_y + rows.front().y * tile_h, (right - left) * tile_w,
            std::max(1, bottom - rows.front().y) * tile_h};
        for (auto &row : rows) row.layout_native_clip = pixels;
        const auto overlaps = [&](const Match &match) {
            const auto owns = [&](const Match &row) {
                return match.y == row.y && match.x < row.x + row.length &&
                    row.x < match.x + match.length;
            };
            return std::any_of(rows.begin(), rows.end(), owns) ||
                std::any_of(duplicates.begin(), duplicates.end(), owns);
        };
        std::erase_if(matches, overlaps);
        std::erase_if(untranslated_rows, overlaps);
        const auto target = translate_adventure_crafting_text(source, first.role);
        const size_t first_added = matches.size();
        if (target && append_bounded_paragraph(rows, *target, screen_rows,
                matches, only_y, right, right, {}, false, left)) {
            const int top_y = rows.front().y - (first.half == lower ? 1 : 0);
            if (first.half == upper || first.half == lower)
                for (size_t at = first_added; at < matches.size(); ++at) {
                    auto &row = matches[at];
                    row.native_split_text = true;
                    row.native_split_top_y = top_y;
                    const int y = row.layout_y * tile_h + row.layout_pixel_y +
                        (top_y - rows.front().y) * tile_h + tile_h / 2;
                    row.layout_y = std::max(0, y / tile_h);
                    row.layout_pixel_y = y < 0 ? y : y % tile_h;
                }
            for (auto &row : duplicates) {
                std::fill_n(screen_rows[row.y].begin() + row.x, row.length, ' ');
                if (only_y < 0 || only_y == row.y) matches.push_back(std::move(row));
            }
        } else {
            rows.insert(rows.end(), std::make_move_iterator(duplicates.begin()),
                std::make_move_iterator(duplicates.end()));
            for (auto &row : rows) {
                row.native_help_source_only = true;
                row.native_help_review_source = source;
                std::fill_n(screen_rows[row.y].begin() + row.x, row.length, ' ');
                untranslated_rows.push_back(std::move(row));
            }
        }
        begin = end;
    }
    return panels;
}
