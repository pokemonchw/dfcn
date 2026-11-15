static bool is_work_order_availability_rule(const Rule &rule) {
    static constexpr auto sources = std::to_array<std::string_view>({
        "available is less than",
        "available is greater than",
        "available is at most",
        "available is at least",
        "available is exactly",
        "available is not",
    });
    return std::find(sources.begin(), sources.end(), rule.source) != sources.end();
}

static bool is_work_order_condition_rule(const Rule &rule) {
    return is_work_order_availability_rule(rule) || rule.source == "Amount of {s}" ||
        rule.source == "Satisfied for next check" || rule.source == "Not satisfied for next check";
}

static bool is_work_order_field_rule(const Rule &rule) {
    // These glossary keys own independent controls, not wrapped prose. In
    // particular, the lowercase editable shop suffix must never turn the
    // neighbouring left-aligned shop limits into one multi-record paragraph.
    // Identify numeric templates by their rule, not by the current value or
    // cursor state, and use the same classification for exclusion and layout.
    static constexpr auto shop_limits = std::to_array<std::string_view>({
        "Can use any shop",
        "0 = Can use any shop",
        "{d} shop max",
        "{d} shops max",
        "shop(s) max",
        "General work orders allowed: {d}",
    });
    return is_work_order_condition_rule(rule) ||
        std::find(shop_limits.begin(), shop_limits.end(), rule.source) != shop_limits.end();
}

// The same field draws a stored integer or the live edit buffer followed by
// its blinking underscore. Empty input and a lone sign are editing states,
// not zero. Preserve these bytes verbatim; never parse/reformat the number.
static size_t work_order_quantity_end(std::string_view source, size_t start) {
    size_t end = start;
    if (end < source.size() && (source[end] == '+' || source[end] == '-')) ++end;
    while (end < source.size() && source[end] >= '0' && source[end] <= '9') ++end;
    if (end < source.size() && source[end] == '_') ++end;
    return end < source.size() && ascii_word_byte(static_cast<unsigned char>(source[end]))
        ? start : end;
}

void Overlay::layout_work_order_fields(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || !face_ ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const NativePanelBorders borders(*gps_);
    const auto availability = exact_literal_translation("Work order condition: available is");
    std::vector<uint32_t> availability_cps;
    const bool has_availability = availability && !availability->empty() &&
        decode_utf8(*availability, availability_cps);
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate ||
            !match.layout_glyph_foreground_rgb.empty() || match.rule < 0 ||
            static_cast<size_t>(match.rule) >= rules_.size()) continue;
        const Rule &rule = rules_[static_cast<size_t>(match.rule)];
        const bool availability_field = is_work_order_availability_rule(rule);
        if (!is_work_order_condition_rule(rule)) continue;
        if (!availability_field && (rule.template_kinds.size() != 1 ||
            rule.template_literals.size() != 2 || !rule.template_literals.back().empty() ||
            rule.target_template_literals.size() != 2 ||
            !rule.target_template_literals.back().empty() ||
            rule.target_capture_order.size() != 1 || rule.target_capture_order.front() != 0))
            continue;
        const std::string &source_prefix = availability_field ? rule.source : rule.template_literals.front();
        const std::string &target_prefix = availability_field ? rule.target : rule.target_template_literals.front();
        if (source_prefix.empty() || target_prefix.empty() ||
            !match.source.starts_with(source_prefix) || !match.target.starts_with(target_prefix) ||
            match.source.size() < source_prefix.size() ||
            match.target.size() < target_prefix.size() || match.length <= 0 ||
            match.source.size() != static_cast<size_t>(match.length) ||
            match.x < 0 || match.x >= gps_->dimx || match.y < 0 || match.y >= gps_->dimy ||
            match.length > gps_->dimx - match.x) continue;
        size_t capture_at = source_prefix.size();
        if (availability_field && capture_at < match.source.size() && match.source[capture_at] == ' ')
            ++capture_at;
        const std::string_view source_capture = std::string_view(match.source).substr(capture_at);
        const std::string_view target_capture = std::string_view(match.target).substr(target_prefix.size());
        const bool item = rule.source == "Amount of {s}";
        if (!availability_field && rule.template_kinds.front() != 's') continue;
        if (item) {
            if (trim_view(source_capture).empty() || trim_view(target_capture).empty()) continue;
        } else {
            // The glossary identifies the translated label/operator boundary;
            // the live native cells supply their colors, including custom palettes.
            constexpr std::string_view source_label = "available is ";
            if (!has_availability || !source_prefix.starts_with(source_label) ||
                source_prefix.size() <= source_label.size() ||
                !target_prefix.starts_with(*availability) ||
                target_prefix.size() <= availability->size() || source_capture != target_capture)
                continue;
            if (work_order_quantity_end(source_capture, 0) != source_capture.size()) continue;
        }
        std::vector<uint32_t> target_cps, prefix_cps;
        if (!decode_utf8(match.target, target_cps) || !decode_utf8(target_prefix, prefix_cps) ||
            prefix_cps.empty() || target_cps.size() < prefix_cps.size() ||
            (!item && prefix_cps.size() <= availability_cps.size())) continue;

        // Require the complete current visible source. A covered field or an
        // earlier frame must never lend colors to unrelated foreground text.
        std::vector<int> source_colors;
        source_colors.reserve(match.source.size());
        for (size_t byte = 0; byte < match.source.size(); ++byte) {
            const int x = match.x + static_cast<int>(byte);
            const auto expected = static_cast<unsigned char>(match.source[byte]);
            const unsigned char visible = visible_char_at(x, match.y);
            bool top = false;
            const unsigned char *cell = cell_at(x, match.y, &top);
            if (!cell || (expected == ' ' ? (visible != 0 && visible != ' ')
                                          : (visible != expected || cell[0] != expected))) break;
            source_colors.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
        }
        if (source_colors.size() != match.source.size()) continue;
        std::vector<int> colors(target_cps.size(), source_colors.front());
        if (item) {
            std::fill(colors.begin() + prefix_cps.size(), colors.end(),
                source_colors[source_prefix.size()]);
        } else {
            constexpr std::string_view source_label = "available is ";
            std::fill(colors.begin() + availability_cps.size(),
                colors.begin() + prefix_cps.size(), source_colors[source_label.size()]);
            if (target_cps.size() - prefix_cps.size() != source_capture.size()) continue;
            for (size_t byte = 0; byte < source_capture.size(); ++byte)
                colors[prefix_cps.size() + byte] = source_colors[capture_at + byte];
        }
        // One colored glyph run preserves the original row, size and kerning.
        // The independent-field layout guard keeps adjacent records separate.
        match.layout_glyph_foreground_rgb = std::move(colors);
    }
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate || match.rule < 0 ||
            static_cast<size_t>(match.rule) >= rules_.size() ||
            !is_work_order_field_rule(rules_[static_cast<size_t>(match.rule)]) ||
            match.length <= 0 || match.x < 0 || match.x >= gps_->dimx ||
            match.y < 0 || match.y >= gps_->dimy || match.length > gps_->dimx - match.x)
            continue;
        // Native amounts, predicates, statuses and shop limits are separate
        // fields, including the editable suffix and zero-limit explanation. Use
        // the same fixed-font control layout as every other fortress field,
        // not rasterize()'s per-string fit. Editing digits or flashing the
        // cursor changes only the text, never this row's chosen font.
        auto region = native_button_text_rect(*gps_, match.x,
            match.x + match.length, match.y);
        if (!region) region = native_panel_interior(borders, *gps_,
            match.x, match.x + match.length, match.y);
        if (region) {
            layout_fortress_text_rows(renderer, {{&match}}, match.x,
                region->x + region->w);
        } else {
            // Source bytes establish identity, not the text control's width.
            // The final draw can still recover its native owning region.
            match.layout_x = match.x;
            match.layout_left = true;
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
        }
    }
    for (Match &match : prepared_matches_) {
        if (match.rule != kWorkOrderShopFieldRule || match.target.empty() ||
                match.native_split_duplicate || match.layout_x < 0 ||
                match.layout_clip_right <= match.layout_x) continue;
        // All six native branches use the same column edge and fixed UI font.
        // Numbers and assigned-building names cannot change that field's size.
        const bool fixed_baseline = match.layout_fixed_baseline;
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x,
            match.layout_clip_right);
        match.layout_fixed_baseline = fixed_baseline;
    }
}

// Activity columns use verbs, not inventory noun meanings. Keep this lookup
// shared with the creature table and keep every Chinese term in the glossary.
std::optional<std::string> Overlay::translate_fortress_activity(
        const std::string &source, bool typed_only) const {
    if (auto target = exact_literal_translation("Fortress activity: " + source)) return target;
    // The queued job and its chooser both use the native job-caption 0xd3
    // arm. Resolve every identity supplier before the old menu namespace's
    // dwarf-only production can reject a valid complete memorial caption.
    if (const auto memorial = translate_memorial_activity_display(source); memorial.usable())
        return memorial.target;
    // Header captions can follow identity titles without a blank separator.
    // There, only an activity production proves the field's role; an ordinary
    // translated noun or title must not qualify through the generic fallbacks.
    if (!typed_only)
        if (auto target = exact_literal_translation(source)) return target;
    // Pets/Livestock uses the activity column for a trainer's full identity.
    // Its native caption has already recovered the pre-abbreviation source;
    // resolve the person, office and sex together instead of treating them
    // as a job or leaving the recovered English name in the owned row.
    constexpr std::string_view trainer = "Trainer:";
    if (source.starts_with(trainer)) {
        const auto label = exact_literal_translation("Fortress activity: Trainer");
        const auto person = translate_unit_identity(
            trim_view(std::string_view(source).substr(trainer.size())), true);
        return label && person ? std::optional<std::string>(*label + "：" + *person)
                               : std::nullopt;
    }
    // Native status is a graph: jobs, event virtual captions, squad orders,
    // diplomatic missions and wrappers. The reverse-engineered graph lives
    // in data/extracted/unit-activity-sources.tsv. Decode wrappers before task/item grammar;
    // never transliterate an unrecognized action as a generated name.
    // A suffix is licensed by the scoped glossary, not arbitrary parentheses.
    // This also handles chained wrappers (order failure + caged, event + !).
    // Only the native role prefixes license slash composition; material/job
    // names containing slashes must still go through their own complete rules.
    const std::string folded = lower(source);
    if (source.ends_with(')')) {
        const size_t at = source.rfind(" (");
        if (at != std::string::npos && at > 0) {
            const std::string suffix = source.substr(at + 1);
            auto status = exact_literal_translation("Fortress activity: suffix " + suffix);
            if (!status && (lower(suffix) == "(caged)" || lower(suffix) == "(chained)")) {
                if (auto label = exact_literal_translation("Fortress activity: " +
                        suffix.substr(1, suffix.size() - 2))) status = "（" + *label + "）";
            }
            if (status) {
                const auto activity = translate_fortress_activity(source.substr(0, at), typed_only);
                return activity ? std::optional<std::string>(*activity + *status) : std::nullopt;
            }
        }
    }
    const auto exclamation = [&]() -> std::optional<std::string> {
        if (!source.ends_with('!') || source.size() <= 1) return std::nullopt;
        const auto status = exact_literal_translation("Fortress activity: suffix !");
        const auto activity = translate_fortress_activity(source.substr(0, source.size() - 1), typed_only);
        return status && activity ? std::optional<std::string>(*activity + *status)
                                  : std::nullopt;
    };
    for (const std::string_view suffix : {"/Resting"}) {
        if (!folded.ends_with(lower(std::string(suffix))) || source.size() <= suffix.size()) continue;
        const auto status = exact_literal_translation("Fortress activity: suffix " + std::string(suffix));
        const auto activity = translate_fortress_activity(source.substr(0, source.size() - suffix.size()), typed_only);
        if (status && activity) return *activity + *status;
        return std::nullopt;
    }
    for (const std::string_view role : {"Diplomat", "Guest"}) {
        const std::string prefix = std::string(role) + " / ";
        if (!folded.starts_with(lower(prefix)) || source.size() <= prefix.size()) continue;
        auto identity = exact_literal_translation("Fortress activity: " + std::string(role));
        if (!identity) identity = exact_literal_translation(role);
        const auto activity = translate_fortress_activity(source.substr(prefix.size()), typed_only);
        if (identity && activity) return *identity + " / " + *activity;
        return std::nullopt;
    }
    // Native read/copy/toy events and hauling jobs append the complete item
    // formatter; service events append its material/item counterpart. Resolve
    // the item outside a TOML external-prefix callback so nested container/material
    // resolvers are not disabled by the callback's re-entrancy guard.
    for (const std::string_view verb : {"Read", "Copy", "Serve", "Play with", "Haul:"}) {
        const std::string prefix = std::string(verb) + " ";
        if (!folded.starts_with(lower(prefix)) || source.size() <= prefix.size()) continue;
        const auto action = exact_literal_translation("Fortress activity: " + std::string(verb));
        const std::string_view object = std::string_view(source).substr(prefix.size());
        auto item = translate_fortress_item_caption(object);
        const bool written_event = verb == "Read" || verb == "Copy";
        if (!item && written_event)
            item = translate_written_item_caption(object, true);
        if (action && item) return *action + *item;
        // A written work may itself end in an exclamation mark: both
        // BOOK_INSTRUCTION's "First [NAME], Then The World!" and "To [NAME]
        // and Glory!" require that punctuation to match their title rule.
        // Try the complete typed object before interpreting the last byte as
        // an event marker. A real marker still wraps the resolved whole item,
        // including a book whose own title also ends in an exclamation mark.
        if (verb != "Haul:" || source.ends_with('!')) return exclamation();
        break; // Keep the existing task grammar for other hauling subjects.
    }
    if (source.ends_with('!')) return exclamation();
    // ELF prayer 0x1767690 chooses an entire historical-figure identity or
    // an article-wrapped sphere. Sermons use the same two suppliers. Keep
    // the complete name (including leading The/Of and authored nicknames)
    // outside the generic actor-prefix callback and its species/article
    // parsing. Caption padding is not part of either semantic subject.
    for (const std::string_view verb : {"Pray to", "Meditate on", "Preach on"}) {
        const std::string prefix = std::string(verb) + " ";
        if (!folded.starts_with(lower(prefix)) || source.size() <= prefix.size()) continue;
        const std::string subject(trim_view(std::string_view(source).substr(prefix.size())));
        const auto action = exact_literal_translation("Fortress activity: " + std::string(verb));
        std::optional<std::string> target;
        if (verb != "Pray to") target = translate_deity_spheres(subject);
        if (!target && verb != "Meditate on") {
            target = translate_legends_name(subject, true);
            if (!translation_complete_with_native_nicknames(target, subject))
                target = translate_legends_actor(subject);
        }
        if (!action || !translation_complete_with_native_nicknames(target, subject))
            return std::nullopt;
        const size_t slot = action->find("{s}");
        if (slot == std::string::npos) return std::nullopt;
        std::string rendered = *action;
        rendered.replace(slot, 3, *target);
        return rendered;
    }
    // Generated instrument jobs also appear in Stone use's economic-use
    // list. They have no material prefix, unlike embark equipment names.
    // Resolve the complete native-language name and optional piece BEFORE
    // the generic compositor can translate only Make or guess English senses
    // for a coincidentally spelled name. Reuse all four language lexicons and
    // the scoped piece glossary; unknown non-instrument jobs stay unknown.
    for (const std::string_view prefix : {"Make ", "Forge ", "Assemble "}) {
        if (source.size() <= prefix.size() ||
            lower(source.substr(0, prefix.size())) != lower(std::string(prefix))) continue;
        const auto item = translate_embark_instrument_item(
            std::string_view(source).substr(prefix.size()), false);
        if (!item) continue;
        const std::string verb = trim(std::string(prefix));
        auto action = exact_literal_translation(verb);
        // Forge has distinct menu/task wording, so it is intentionally not
        // flattened into the global dictionary. Read the existing task verb
        // namespace for generated instrument jobs too.
        if (!action && config_.compositional_rules) {
            std::vector<size_t> origins;
            action = RULESETS.translate_with_origins(verb, "::tasks::^0", origins);
        }
        if (action) return *action + *item;
    }
    if (config_.compositional_rules) {
        // Resolve the action before the generic item/material compositor can
        // lift a magical metal out of the middle of the complete job name.
        if (auto target = RULESETS.translate_activity(native_text_to_utf8(source))) return target;
        if (typed_only) return std::nullopt;
        // An authored UTF-8 name is only licensed by a complete typed action.
        // Generic screen fields use this same entry, including native status
        // wrappers, but must not reinterpret an unrelated Chinese name.
        if (contains_cjk_utf8(source)) return std::nullopt;
        return translate_compositional(source);
    }
    return std::nullopt;
}

TranslationResult Overlay::translate_fortress_activity_display(
        std::string_view raw_source, bool typed_only) const {
    TranslationStateScope state;
    TranslationWorkScope work;
    const std::string source(raw_source);
    if (source.empty()) return {};
    const std::string key = item_translation_cache_prefix() +
        (typed_only ? "activity-typed:" : "activity:") + source;
    if (const auto found = fortress_activity_display_cache_.find(key);
        found != fortress_activity_display_cache_.end()) return found->second;
    auto result = preserved_item_field(source, "activity");
    try {
        TranslationWorkFrame frame("activity display", source);
        if (auto memorial = translate_memorial_activity_display(source); memorial.usable())
            result = std::move(memorial);
        else if (auto target = translate_fortress_activity(source, typed_only))
            result = TranslationResult::translated(source, *target, "activity");
        else {
            const std::string folded = lower(source);
            const auto suffix = [&](size_t begin, std::string_view native_status,
                                    const std::optional<std::string> &translated_status) {
                if (!translated_status) return false;
                result = translate_fortress_activity_display(source.substr(0, begin), typed_only);
                result.append(TranslationResult::translated(native_status, *translated_status,
                    "activity-status"), begin);
                finish_item_display_result(result, source, "activity");
                return true;
            };
            bool composed = false;
            // A complete typed activity can retain mod annotation tags even
            // when its namespace does not include that mod's tag grammar.
            // Only strip a trailing sequence of single ASCII-word tags; the
            // remaining complete action must translate before we own it.
            const std::string_view source_view(source);
            std::vector<std::pair<size_t, size_t>> tags;
            size_t base_end = source.size();
            while (base_end > 0 && source[base_end - 1] == ']') {
                const size_t at = source.rfind('[', base_end - 1);
                if (at == std::string::npos || at == 0 || at + 1 == base_end - 1 ||
                    source[at - 1] != ' ') break;
                bool valid = true, has_letter = false;
                for (size_t byte = at + 1; byte + 1 < base_end; ++byte) {
                    const unsigned char ch = static_cast<unsigned char>(source[byte]);
                    const bool letter = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
                    has_letter = has_letter || letter;
                    if (!letter && !(ch >= '0' && ch <= '9') && ch != '_' && ch != '-') {
                        valid = false;
                        break;
                    }
                }
                if (!valid || !has_letter) break;
                size_t before = at;
                while (before > 0 && source[before - 1] == ' ') --before;
                tags.emplace_back(at, base_end);
                base_end = before;
            }
            if (!tags.empty() && base_end > 0) {
                auto base = translate_fortress_activity_display(source_view.substr(0, base_end), true);
                if (base.usable() && base.changed() && !base.has_untranslated()) {
                    result = std::move(base);
                    size_t previous_end = base_end;
                    for (auto tag = tags.rbegin(); tag != tags.rend(); ++tag) {
                        const auto spacing = source_view.substr(previous_end, tag->first - previous_end);
                        result.append(TranslationResult::translated(spacing, std::string(spacing),
                            "activity-tag-spacing"), previous_end);
                        const auto token = source_view.substr(tag->first, tag->second - tag->first);
                        const auto target = exact_literal_translation(std::string(token));
                        result.append(target ? TranslationResult::translated(token, *target, "activity-tag")
                            : preserved_item_field(token, "activity-tag"), tag->first);
                        previous_end = tag->second;
                    }
                    finish_item_display_result(result, source, "activity");
                    composed = true;
                }
            }
            // Only the native activity graph's scoped statuses license a
            // wrapper; arbitrary parentheses and slashes remain one field.
            if (!composed && source.ends_with(')')) {
                const size_t at = source.rfind(" (");
                if (at != std::string::npos && at > 0)
                    composed = suffix(at, std::string_view(source).substr(at),
                        exact_literal_translation("Fortress activity: suffix " + source.substr(at + 1)));
            }
            if (!composed && folded.ends_with("/resting") && source.size() > 8)
                composed = suffix(source.size() - 8, std::string_view(source).substr(source.size() - 8),
                    exact_literal_translation("Fortress activity: suffix /Resting"));
            for (const std::string_view role : {"Diplomat", "Guest"}) {
                if (composed) break;
                const std::string prefix = std::string(role) + " / ";
                if (!folded.starts_with(lower(prefix)) || source.size() <= prefix.size()) continue;
                auto identity = exact_literal_translation("Fortress activity: " + std::string(role));
                if (!identity) identity = exact_literal_translation(role);
                if (!identity) break;
                result = TranslationResult::translated(prefix, *identity + " / ", "activity-role");
                result.append(translate_fortress_activity_display(source.substr(prefix.size()), typed_only), prefix.size());
                finish_item_display_result(result, source, "activity");
                composed = true;
            }
            constexpr std::string_view trainer = "Trainer:";
            if (!composed && source.starts_with(trainer) && source.size() > trainer.size()) {
                if (auto label = exact_literal_translation("Fortress activity: Trainer")) {
                    const auto person_source = trim_view(std::string_view(source).substr(trainer.size()));
                    const auto person = translate_unit_identity(person_source, true);
                    result = TranslationResult::translated(trainer, *label + "：", "activity-role");
                    result.append(person ? TranslationResult::translated(person_source, *person, "person")
                        : preserved_item_field(person_source, "person"),
                        static_cast<size_t>(person_source.data() - source.data()));
                    finish_item_display_result(result, source, "activity");
                    composed = true;
                }
            }
            for (const std::string_view verb : {"Read", "Copy", "Serve", "Play with", "Haul:"}) {
                if (composed) break;
                const std::string prefix = std::string(verb) + " ";
                if (!folded.starts_with(lower(prefix)) || source.size() <= prefix.size()) continue;
                const auto action = exact_literal_translation("Fortress activity: " + std::string(verb));
                if (!action) break;
                const auto object = std::string_view(source).substr(prefix.size());
                // Written titles with trailing ! were tried by the complete
                // path. Unknown titles retain their complete punctuation.
                result = TranslationResult::translated(prefix, *action, "activity-action");
                result.append(translate_fortress_item_caption_display(object), prefix.size());
                finish_item_display_result(result, source, "activity");
                composed = true;
            }
            for (const std::string_view verb : {"Pray to", "Meditate on", "Preach on"}) {
                if (composed) break;
                const std::string prefix = std::string(verb) + " ";
                if (!folded.starts_with(lower(prefix)) || source.size() <= prefix.size()) continue;
                const auto action = exact_literal_translation("Fortress activity: " + std::string(verb));
                const size_t slot = action ? action->find("{s}") : std::string::npos;
                if (slot == std::string::npos) break;
                // The native action still owns its field when a mod supplies
                // an unknown identity. Preserve that entire subject and mark
                // it untranslated instead of losing the action with it.
                const auto subject = std::string_view(source).substr(prefix.size());
                result = TranslationResult::translated(prefix, action->substr(0, slot), "activity-action");
                result.append(preserved_item_field(subject,
                    verb == "Meditate on" ? "sphere" : "person"), prefix.size());
                result.append(TranslationResult::translated({}, action->substr(slot + 3),
                    "activity-action"), source.size());
                finish_item_display_result(result, source, "activity");
                composed = true;
            }
            if (!composed && typed_only) {
                result = {};
                result.source = source;
                result.kind = "activity";
            }
        }
    } catch (const TranslationWorkLimit &) {
        if (!work.owns_budget()) throw;
        result = preserved_item_field(source, "activity", TranslationStatus::WorkLimited);
    }
    result.policy = TranslationPolicy::Display;
    result.resource_revision = RULESETS.resource_revision();
    if (fortress_activity_display_cache_.size() >= 4096) fortress_activity_display_cache_.clear();
    if (item_translation_cache_context_current(key) &&
        key.size() + item_display_result_bytes(result) <= 65536)
        fortress_activity_display_cache_.emplace(key, result);
    return result;
}

// Tasks has no Name/Prof sort band. Its three independent columns are
// activity, optional worker, and optional item/building. A worker is NOT a
// prerequisite for owning a task: unassigned, suspended and hauling jobs
// still use the same columns. Native row frames establish records even when
// neither the job nor a worker supplies a recenter button.
void Overlay::append_fortress_task_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    int tabs_y = -1, tabs_left = -1, tabs_right = -1;
    for (int y = 0; y < gps_->dimy; ++y) {
        size_t cursor = 0;
        int first = -1;
        bool complete = true;
        std::optional<uint32_t> selected, inactive;
        for (const std::string_view caption : {"Creatures", "Tasks", "Places", "Work orders"}) {
            const auto at = rows[y].find(caption, cursor);
            if (at == std::string::npos) { complete = false; break; }
            // The text-only grid can omit the classic tab's slashes and
            // padding. Validate each actual caption, not the artwork between
            // adjacent tabs, against the current composed layer.
            for (size_t byte = 0; byte < caption.size(); ++byte)
                if (visible_char_at(static_cast<int>(at + byte), y) !=
                        static_cast<unsigned char>(caption[byte])) {
                    complete = false;
                    break;
                }
            if (!complete) break;
            bool top = false;
            const auto *cell = cell_at(static_cast<int>(at), y, &top);
            if (!cell || cell[0] != static_cast<unsigned char>(caption.front())) {
                complete = false;
                break;
            }
            const uint32_t color = (uint32_t(cell[1]) << 16) |
                (uint32_t(cell[2]) << 8) | cell[3];
            if (caption == "Tasks") selected = color;
            else if (!inactive) inactive = color;
            else if (*inactive != color) { complete = false; break; }
            if (first < 0) first = static_cast<int>(at);
            cursor = at + caption.size();
        }
        // The other pages use the same row skins and optional controls.
        // Require Tasks itself to be selected before owning buttonless rows.
        if (!complete || !selected || !inactive || *selected == *inactive) continue;
        tabs_y = y;
        tabs_left = first;
        tabs_right = static_cast<int>(cursor);
        break;
    }
    if (tabs_y < 0) return;
    const NativePanelBorders borders(*gps_);
    const auto captures = captured_clipped_captions();
    const auto current_field = [&](int left, int right, int y) {
        for (int x = left; x < right; ++x) {
            const auto ch = visible_char_at(x, y);
            if ((ch ? ch : ' ') != static_cast<unsigned char>(rows[y][x])) return false;
        }
        return true;
    };
    const auto task_panel = native_panel_interior(borders, *gps_,
        tabs_left, tabs_right, tabs_y);
    if (!task_panel) return;
    const auto scrollbars = native_vertical_scrollbar_spans(*gps_, *task_panel);
    const auto button = [&](int x, int y, const int32_t (*skin)[3]) {
        // Classic controls are CP437/palette cells, not texture IDs. Read
        // the full current control through the shared mode-aware skin reader.
        return native_square_button_at(*gps_, x, y, skin);
    };
    const auto recenter = native_texture_button_stocks_recenter(*gps_);
    const auto inspect = native_texture_button_stocks_view_item(*gps_);
    struct Field {
        int left, end, right, y, column;
        std::string source;
    };
    std::vector<Field> fields;
    const auto add_field = [&](int left, int end, int right, int y, int column,
                               const std::string &source) {
        // A buttonless row's frame can be found from either half-font row.
        // Its mate is already owned; do not emit that same source twice.
        if (std::none_of(fields.begin(), fields.end(), [&](const Field &field) {
                return field.left == left && field.y == y && field.column == column;
            })) fields.push_back({left, end, right, y, column, source});
    };
    const auto capture_field = [&](int left, int right, int y, int column) {
        int end = right;
        while (left < end && rows[y][left] == ' ') ++left;
        while (end > left && rows[y][end - 1] == ' ') --end;
        if (left == end || !current_field(left, end, y)) return false;
        const std::string source = rows[y].substr(left, end - left);
        for (size_t byte = 0; byte < source.size(); ++byte)
            if (is_cp437_box_separator(source, byte)) return false;
        add_field(left, end, right, y, column, source);
        // Half-font captions have two physical source rows but one baseline.
        // Claim both before generic matching can centre the other half (or
        // repaint a UTF-8 name's byte cells black). The shared normalizer
        // remains the sole owner of deduplication and vertical placement.
        bool top = false;
        cell_at(left, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
        const auto half = flags ? flags[static_cast<size_t>(left) * gps_->dimy + y] &
            (upper | lower) : 0;
        const int mate = half == upper ? y + 1 : half == lower ? y - 1 : -1;
        if (mate >= 0 && mate < gps_->dimy &&
            rows[mate].compare(left, end - left, source) == 0 &&
            current_field(left, end, mate)) {
            bool mate_top = false;
            cell_at(left, mate, &mate_top);
            const auto *mate_flags = mate_top
                ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            if (mate_flags && (mate_flags[static_cast<size_t>(left) * gps_->dimy + mate] &
                    (upper | lower)) == (half == upper ? lower : upper))
                add_field(left, end, right, mate, column, source);
        }
        return true;
    };
    for (int y = tabs_y + 1; y < task_panel->y + task_panel->h; ++y) {
        int content_right = task_panel->x + task_panel->w;
        for (const auto &bar : scrollbars)
            if (y >= bar.y && y < bar.y + bar.h) content_right = std::min(content_right, bar.x);
        std::vector<std::pair<int, int>> pictures;
        std::vector<int> centers;
        for (int x = task_panel->x; x < content_right; ++x) {
            const int end = native_picture_box_right(*gps_, x, y);
            if (end > x && end <= content_right) {
                pictures.emplace_back(x, end);
                x = end - 1;
            } else if (x + 3 <= content_right && button(x, y, recenter)) {
                centers.push_back(x);
                x += 2;
            }
        }
        const int first_picture = pictures.empty() ? content_right : pictures.front().first;
        int activity_right = std::min(first_picture,
            centers.empty() ? content_right : centers.front());
        if (activity_right <= task_panel->x) continue;
        if (centers.empty()) {
            // Unassigned/container-hauling jobs can have no recenter button
            // anywhere on the row. Their current closed rectangle still
            // owns the caption. Its left cap is inset from the panel's
            // interior, and native text can begin ON that cap. A probe at
            // panel.x + 1 therefore hits the cap, not the rectangle's fill.
            // Find the actual closed skin in the leading gutter instead of
            // requiring the two independent widget edges to coincide. The
            // first source byte only bounds the search; caption length and
            // translation never determine the frame or column alignment.
            const auto first = rows[y].find_first_not_of(' ', task_panel->x);
            if (first == std::string::npos || first >= static_cast<size_t>(activity_right))
                continue;
            std::optional<SDL_Rect> frame;
            for (int probe = task_panel->x + 1;
                    probe <= static_cast<int>(first) + 1 && probe < activity_right; ++probe) {
                // Native task text can replace the left cap in classic
                // mode; the remaining three sides still prove this row.
                const auto candidate = native_button_text_rect(
                    *gps_, probe, probe + 1, y, false, nullptr, false, true);
                if (!candidate || candidate->x - 1 < task_panel->x ||
                    candidate->x - 1 > static_cast<int>(first) ||
                    candidate->x + candidate->w <= static_cast<int>(first) ||
                    candidate->y <= tabs_y ||
                    candidate->y + candidate->h > task_panel->y + task_panel->h ||
                    candidate->x + candidate->w >= content_right) continue;
                frame = candidate;
                break;
            }
            // Require this row's complete frame, including its right cap.
            // No neighbouring controls, unframed footer or hidden row can
            // supply ownership when every visible task is buttonless.
            if (!frame) continue;
            activity_right = std::min(activity_right, frame->x + frame->w);
        }
        const auto panel = native_panel_interior(borders, *gps_,
            task_panel->x, activity_right, y);
        if (!panel || tabs_y < panel->y || tabs_y >= y ||
            tabs_left < panel->x || tabs_right > panel->x + panel->w) continue;
        if (task_panel->x != panel->x || task_panel->y != panel->y ||
                task_panel->w != panel->w || task_panel->h != panel->h) continue;
        const auto worker_controls = [&](int x) {
            if (x < 0 || x + 3 > panel->x + panel->w) return false;
            for (int gap = 0; gap <= 2; ++gap)
                if (x + 6 + gap <= panel->x + panel->w &&
                    button(x + 3 + gap, y, inspect)) return true;
            return false;
        };
        if (!capture_field(panel->x, activity_right, y, 0)) continue;
        for (size_t i = 0; i < pictures.size(); ++i) {
            const auto [picture, picture_right] = pictures[i];
            if (picture < panel->x || picture_right >= content_right) continue;
            const int right = i + 1 < pictures.size()
                ? std::min(pictures[i + 1].first, content_right) : content_right;
            const auto control = std::find_if(centers.begin(), centers.end(),
                [&](int x) { return x >= picture_right && x < right; });
            if (control != centers.end()) {
                if (worker_controls(*control)) capture_field(picture_right, *control, y, 1);
            } else if (i + 1 == pictures.size()) {
                // The last picture without worker controls belongs to the
                // destination/building/item, including user-authored names.
                capture_field(picture_right, right, y, 2);
            }
        }
    }
    // Measure native column insets over this visible panel, even in a
    // single-row suppression scan. Assignment and scrolling never choose a
    // different alignment policy; shorter English captions do not recenter.
    std::array<int, 3> lefts{gps_->dimx, gps_->dimx, gps_->dimx};
    std::array<int, 3> rights{gps_->dimx, gps_->dimx, gps_->dimx};
    for (const auto &field : fields) {
        lefts[field.column] = std::min(lefts[field.column], field.left);
        rights[field.column] = std::min(rights[field.column], field.right);
    }
    for (const auto &field : fields) {
        if ((only_y >= 0 && field.y != only_y) ||
            rows[field.y].compare(field.left, field.end - field.left, field.source) != 0)
            continue;
        std::string source = field.source;
        for (const auto &capture : captures)
            if (capture.x == field.left && capture.y == field.y && capture.visible == source) {
                source = capture.complete;
                break;
            }
        std::optional<std::string> target;
        TranslationResult display_result;
        const int rule = field.column == 0 ? kFortressTaskActivityRule
            : field.column == 1 ? kFortressTaskWorkerRule : kFortressTaskContextRule;
        if (field.column == 0) {
            display_result = translate_fortress_activity_display(source);
            if (display_result.usable()) target = display_result.target;
        }
        else if (field.column == 1) target = translate_procedural_fragment(source);
        else {
            // Reuse existing building/item vocabulary; an authored UTF-8
            // name is already display text, not a procedural English name.
            target = exact_literal_translation(source);
            if (!target && !contains_cjk_utf8(source) &&
                !source.ends_with("...")) {
                // This field owns the entire destination, so the later grid
                // matcher cannot supply its numeric/string templates. Use
                // that same matcher and capture resolver before item rules;
                // accept only a complete field, never just Stockpile #7
                // without its category. Dictionary templates do not depend
                // on the optional TOML compositional rules.
                for (int index : candidate_template_rules(source)) {
                    const Rule &caption = rules_[static_cast<size_t>(index)];
                    size_t end = 0;
                    std::vector<std::string> captures;
                    if (!match_template(caption, source, 0, &end, &captures) ||
                        end != source.size()) continue;
                    bool complete = false;
                    auto rendered = translate_template_captures(caption, captures, &complete);
                    if (!complete || rendered.empty()) continue;
                    target = std::move(rendered);
                    break;
                }
                if (!target && config_.compositional_rules) {
                    target = translate_item_description_term(source);
                    if (!target) target = translate_compositional(source);
                }
                if (!target) {
                    for (int index : candidate_template_rules(source)) {
                        const Rule &caption = rules_[static_cast<size_t>(index)];
                        std::vector<std::pair<size_t, size_t>> ranges;
                        if (!match_unique_item_display_rule(caption, source, ranges)) continue;
                        std::vector<std::string> captures;
                        for (const auto [begin, end] : ranges) captures.emplace_back(source.substr(begin, end - begin));
                        auto candidate = translate_template_captures_display(caption, captures, source);
                        if (!candidate.usable() || !candidate.changed()) continue;
                        display_result = std::move(candidate);
                        target = display_result.target;
                        break;
                    }
                }
            }
        }
        const std::string literal = native_text_to_utf8(source);
        if (!display_result.usable()) display_result = target
            ? TranslationResult::translated(source, *target, "task-field")
            : preserved_item_field(source, "task-field");
        const bool untranslated = display_result.has_untranslated();
        if (!target) target = literal;
        if (target->empty() || target->find("[C:") != std::string::npos ||
            target->find_first_of("\r\n") != std::string::npos) continue;
        Match match{field.left, field.y, field.end - field.left, rule, *target, field.source};
        match.translation_result = std::make_shared<const TranslationResult>(std::move(display_result));
        match.native_hover_untranslated = untranslated;
        match.layout_x = lefts[field.column];
        match.layout_y = field.y;
        match.layout_length = rights[field.column] - match.layout_x;
        match.layout_left = true;
        match.layout_clip_right = rights[field.column];
        match.layout_prepared = true;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        matches.push_back(std::move(match));
        std::fill(rows[field.y].begin() + field.left, rows[field.y].begin() + field.end, ' ');
    }
}

// Native tab captions need not be separated by two blank cells. Recover
// their ordered identities before looking for this panel's actual controls.
static std::vector<LogicalTextField> workshop_task_tab_fields(const std::string &row) {
    std::vector<LogicalTextField> fields;
    size_t cursor = 0;
    for (const std::string_view caption : {"Tasks", "Workers", "Work orders"}) {
        size_t at = row.find(caption, cursor);
        while (at != std::string::npos &&
               !has_word_boundaries(row, at, at + caption.size()) &&
               !is_ascii_tab_caption(row, at, at + caption.size()))
            at = row.find(caption, at + 1);
        if (at == std::string::npos) return {};
        cursor = at + caption.size();
        fields.push_back({static_cast<int>(at), static_cast<int>(cursor), std::string(caption)});
    }
    return fields;
}

// The workshop's task lists are not the fortress-wide Tasks roster.
// Their rows have a common inset; centring each translation in its English
// span makes long task names drift farther to the right.
// Capture each complete native control, including its disabled-action reason,
// before matching consumes the source. Vocabulary never determines geometry.
std::vector<WorkshopTaskCard> Overlay::capture_workshop_task_rows(
        const std::vector<std::string> &rows) const {
    std::vector<WorkshopTaskCard> choices;
    const auto drawn = captured_native_drawn_text_view();
    bool queued_jobs = false;
    for (const auto &draw : drawn) {
        if (!draw.workshop_task_caption) continue;
        queued_jobs = true;
        const auto &caption = *draw.workshop_task_caption;
        const auto &box = caption.box;
        if (draw.editable_text || draw.source.empty() || box.w <= 0 || box.h != 3 ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                !draw.draw_grid ||
                box.x < 0 || box.x + box.w > gps_->dimx ||
                draw.x != box.x || draw.y != box.y + 1 ||
                draw.y < 0 || draw.y >= static_cast<int>(rows.size()) ||
                (draw.draw_clip && (draw.y < draw.draw_clip->y ||
                    draw.y >= draw.draw_clip->y + draw.draw_clip->h))) continue;
        NativeTextCard card;
        card.interior = box;
        card.button_box = box;
        card.workshop_task_queue = true;
        constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
        bool split = false;
        for (int y = draw.y; y <= draw.y + (split ? 1 : 0); ++y) {
            if (y < 0 || y >= gps_->dimy || y >= static_cast<int>(rows.size())) break;
            // Read only this native string's surviving writes. The optional
            // worker icon can overwrite its last two abbreviated bytes;
            // neither that icon nor any other row becomes part of the text.
            int right = std::min<int64_t>(gps_->dimx,
                int64_t(draw.x) + draw.source.size());
            if (draw.draw_clip) right = std::min(right,
                draw.draw_clip->x + draw.draw_clip->w);
            NativeTextCardRow row{draw.x, y, {}, {}};
            bool half = true, ink = false, covered = false;
            for (int x = draw.x; x < right; ++x) {
                const size_t byte = static_cast<size_t>(x - draw.x);
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                const size_t at = static_cast<size_t>(x) * gps_->dimy + y;
                const auto origin = native_text_grid_origin(*gps_, at, top);
                const unsigned char expected = static_cast<unsigned char>(draw.source[byte]);
                if (!cell || (expected != ' ' && (origin.grid != draw.draw_grid ||
                        origin.top_layer != draw.top_layer)) ||
                        (cell[0] ? cell[0] : ' ') != expected ||
                        x >= static_cast<int>(rows[y].size()) ||
                        rows[y][x] != static_cast<char>(expected)) {
                    covered = x < box.x + box.w;
                    break;
                }
                row.source += static_cast<char>(expected);
                row.foregrounds.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
                if (expected != ' ') {
                    const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                    half = half && flags && (flags[at] & (upper | lower)) ==
                        (y == draw.y ? upper : lower);
                    ink = true;
                }
            }
            if (covered) { card.rows.clear(); break; }
            if (!ink || (y != draw.y && (!half ||
                    row.source != card.rows.front().source))) break;
            row.complete_source = caption.complete_source;
            card.rows.push_back(std::move(row));
            if (y == draw.y) split = half;
        }
        if (!card.rows.empty()) choices.emplace_back(std::move(card));
    }
    // An object-owned queue never falls back to artwork discovery, including
    // when a foreground page covers every visible job caption.
    if (queued_jobs) return choices;
    const NativePanelBorders borders(*gps_);
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto current = [&](int x, int y, std::string_view source) {
        for (size_t i = 0; i < source.size(); ++i) {
            const unsigned char ch = visible_char_at(x + static_cast<int>(i), y);
            if ((ch ? ch : ' ') != static_cast<unsigned char>(source[i])) return false;
        }
        return true;
    };
    const auto current_card = [&](const NativeTextCard &card) {
        return std::all_of(card.rows.begin(), card.rows.end(), [&](const NativeTextCardRow &row) {
            return current(row.x, row.y, row.source) &&
                std::string_view(rows[row.y]).substr(row.x, row.source.size()) == row.source;
        });
    };
    const auto capture_button = [&](const SDL_Rect &box) {
        SDL_Rect source = box;
        if (classic) {
            // The closed skin already proves all three rows. In classic mode
            // its upper/lower edges are actual CP437 bytes, not caption text.
            // Read only the middle row, retaining the full box for layout.
            ++source.y;
            source.h = 1;
            if (borders.at(source.x, source.y, 3)) {
                ++source.x;
                --source.w;
            }
        }
        auto card = capture_panel_text_card(source, true);
        if (card) {
            card->interior = box;
            card->button_box = box;
            // The native chooser can write a complete requirement beyond
            // its button's right edge. Recover the submitted noun before
            // translating the cropped card row, and own every still-visible
            // source byte, including the second half of a half-font draw.
            for (auto &row : card->rows) {
                if (!std::string_view(row.source).starts_with("[Requires ")) continue;
                for (const auto &draw : drawn) {
                    const std::string &complete = draw.complete_source.empty()
                        ? draw.source : draw.complete_source;
                    if (draw.editable_text || draw.x != row.x ||
                        (draw.y != row.y && draw.y + 1 != row.y) ||
                        !std::string_view(complete).starts_with("[Requires ") ||
                        !complete.ends_with(']') ||
                        !std::string_view(draw.source).starts_with(row.source)) continue;
                    int source_right = gps_->dimx;
                    if (draw.draw_clip) {
                        if (row.x < draw.draw_clip->x) continue;
                        source_right = std::min(source_right,
                            draw.draw_clip->x + draw.draw_clip->w);
                    }
                    if (source_right <= row.x) continue;
                    const size_t length = std::min(draw.source.size(),
                        static_cast<size_t>(source_right - row.x));
                    if (length < row.source.size()) continue;
                    const auto visible = std::string_view(draw.source).substr(0, length);
                    if (!current(row.x, row.y, visible) ||
                        std::string_view(rows[row.y]).substr(row.x, length) != visible) continue;
                    if (draw.y != row.y) {
                        constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
                        bool paired = true;
                        for (size_t i = 0; i < length && paired; ++i) {
                            if (visible[i] == ' ') continue;
                            bool a_top = false, b_top = false;
                            const int x = row.x + static_cast<int>(i);
                            const auto *a = cell_at(x, draw.y, &a_top);
                            const auto *b = cell_at(x, row.y, &b_top);
                            const auto *flags = a_top ? gps_->screentexpos_top_flag
                                : gps_->screentexpos_flag;
                            const size_t at = static_cast<size_t>(x) * gps_->dimy + draw.y;
                            paired = a && b && a_top == b_top && flags &&
                                a[0] == static_cast<unsigned char>(visible[i]) &&
                                (flags[at] & (upper | lower)) == upper &&
                                (flags[at + 1] & (upper | lower)) == lower;
                        }
                        if (!paired) continue;
                    }
                    row.complete_source = complete;
                    for (size_t i = row.source.size(); i < length; ++i) {
                        bool top = false;
                        const auto *cell = cell_at(row.x + static_cast<int>(i), row.y, &top);
                        row.foregrounds.push_back(cell
                            ? (cell[1] << 16) | (cell[2] << 8) | cell[3]
                            : row.foregrounds.front());
                    }
                    row.source.assign(visible);
                    break;
                }
            }
        }
        return card;
    };
    const auto clipped = captured_clipped_captions();
    const auto task_choice_draw = [&](const NativeDrawnTextRow &draw) {
        // Both PE and ELF submit a title and one independent annotation.
        // A material swatch interrupts the button edge, so ownership comes
        // from the native writer rather than a closed rectangle skin.
        return draw.caption_source && !draw.editable_text &&
            native_workshop_choice_field(draw.native_caller) != NativeWorkshopChoiceField::None;
    };
    const auto append_candidates = [&](const SDL_Rect &search, int right, int bottom,
                                        int minimum_right, bool condition = false) {
        const int content_y = search.y + search.h;
        const int left = search.x + 2;
        for (int y = content_y; y < bottom; ++y) {
            if (!condition) {
                bool owned = std::any_of(choices.begin(), choices.end(), [&](const WorkshopTaskCard &card) {
                    return std::any_of(card.rows.begin(), card.rows.end(), [&](const NativeTextCardRow &row) {
                        return row.y == y && row.x >= search.x && row.x < right;
                    });
                });
                if (owned) continue;
                for (const auto &draw : drawn) {
                    if (draw.y != y || !task_choice_draw(draw) || draw.x < search.x ||
                        draw.x >= right || draw.source.empty() ||
                        draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                        !draw.draw_grid)
                        continue;
                    int text_right = std::min(right - 1, gps_->dimx);
                    int text_bottom = std::min(bottom, gps_->dimy);
                    if (draw.draw_clip) {
                        if (draw.x < draw.draw_clip->x || y < draw.draw_clip->y) continue;
                        text_right = std::min(text_right, draw.draw_clip->x + draw.draw_clip->w);
                        text_bottom = std::min(text_bottom, draw.draw_clip->y + draw.draw_clip->h);
                    }
                    if (text_right <= draw.x || y >= text_bottom) continue;
                    const size_t length = std::min(draw.source.size(),
                        static_cast<size_t>(text_right - draw.x));
                    const auto visible = std::string_view(draw.source).substr(0, length);
                    NativeTextCard card;
                    card.interior = {draw.x, y, text_right - draw.x, 1};
                    constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
                    bool split = false;
                    for (int row_y = y; row_y <= y + (split ? 1 : 0) && row_y < text_bottom; ++row_y) {
                        if (row_y >= static_cast<int>(rows.size())) break;
                        NativeTextCardRow row{draw.x, row_y, std::string(visible), {}};
                        bool intact = true, half = true, ink = false;
                        for (size_t i = 0; i < length; ++i) {
                            const int x = draw.x + static_cast<int>(i);
                            bool top = false;
                            const auto *cell = cell_at(x, row_y, &top);
                            const size_t at = static_cast<size_t>(x) * gps_->dimy + row_y;
                            const auto origin = native_text_grid_origin(*gps_, at, top);
                            const unsigned char expected = static_cast<unsigned char>(visible[i]);
                            if (!cell || x >= static_cast<int>(rows[row_y].size()) ||
                                    rows[row_y][x] != static_cast<char>(expected) ||
                                    (cell[0] ? cell[0] : ' ') != expected ||
                                    (expected != ' ' && (origin.grid != draw.draw_grid ||
                                        origin.top_layer != draw.top_layer))) {
                                intact = false;
                                break;
                            }
                            row.foregrounds.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
                            if (expected == ' ') continue;
                            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                            half = half && flags && (flags[at] & (upper | lower)) ==
                                (row_y == y ? upper : lower);
                            ink = true;
                        }
                        if (!intact || !ink || (row_y != y && !half)) break;
                        // Both physical halves retain one complete native
                        // source. The compositor suppresses the duplicate;
                        // the neighboring title/status never joins this row.
                        row.complete_source = draw.complete_source.empty() ? draw.source : draw.complete_source;
                        card.rows.push_back(std::move(row));
                        if (row_y == y) split = half;
                    }
                    if (card.rows.empty()) continue;
                    card.interior.h = static_cast<int>(card.rows.size());
                    WorkshopTaskCard choice(std::move(card));
                    choice.condition_choice = native_workshop_choice_field(draw.native_caller) !=
                        NativeWorkshopChoiceField::Title;
                    choice.native_choice_title = !choice.condition_choice;
                    choices.push_back(std::move(choice));
                    owned = true;
                }
                if (owned) continue;
            }
            if (condition) {
                const auto caption = native_work_order_trait_text_rect(
                    *gps_, search.x, y, right);
                if (caption && caption->y + caption->h <= bottom) {
                    auto card = capture_button(*caption);
                    if (card && current_card(*card)) {
                        card->interior.w -= left - card->interior.x;
                        card->interior.x = left;
                        if (card->interior.w > 0) choices.push_back(std::move(*card));
                    }
                    y += caption->h - 1;
                    continue;
                }
            }
            // The source can overwrite the left cap in classic mode. Probe
            // that cap explicitly so the untouched upper/lower corners and
            // opposite edge can prove the complete button around its text.
            auto button = native_button_text_rect(*gps_, search.x, search.x + 1,
                y, false, nullptr, false, true);
            if (button && button->x - 1 == search.x)
                button = SDL_Rect{button->x - 1, button->y, button->w + 1, button->h};
            else button.reset();
            if (!button && !classic) {
                // Dark/light chooser rows can start directly on the caption
                // fill without a rectangle left cap. Their complete native
                // three-row strip still owns one task, not wrapped prose.
                const auto strip = native_picture_caption_rect(*gps_, search.x, y);
                if (strip && strip->x == search.x) button = strip;
            }
            if (!button || button->x + button->w < minimum_right ||
                button->x + button->w > right || button->y < content_y ||
                button->y + button->h > bottom) continue;
            if (!condition && std::any_of(drawn.begin(), drawn.end(),
                    [&](const NativeDrawnTextRow &draw) {
                        return task_choice_draw(draw) && draw.x >= button->x &&
                            draw.x < button->x + button->w && draw.y >= button->y &&
                            draw.y < button->y + button->h &&
                            current(draw.x, draw.y, draw.source);
                    })) continue;
            if (std::any_of(choices.begin(), choices.end(), [&](const NativeTextCard &card) {
                    return card.interior.x == left && card.interior.y == button->y;
                })) continue;
            auto card = capture_button(*button);
            if (!card || !current_card(*card)) continue;
            card->interior.x = left;
            card->interior.w = button->x + button->w - left;
            if (card->interior.w > 0) choices.push_back(std::move(*card));
        }
    };

    // A work-order caption belongs to its current status widget and native
    // title draw, not the contents of its editable quantity row. The native
    // remaining/total text disappears while entering an amount (including
    // an empty buffer and the cursor's off phase); it is never an anchor.
    // Both the fortress list and a workshop tab use this same capture.
    for (int tabs_y = 0; tabs_y < gps_->dimy; ++tabs_y) {
        auto tabs = workshop_task_tab_fields(rows[tabs_y]);
        if (tabs.empty()) {
            size_t cursor = 0;
            for (const std::string_view caption : {"Creatures", "Tasks", "Places", "Work orders"}) {
                const auto at = rows[tabs_y].find(caption, cursor);
                if (at == std::string::npos) { tabs.clear(); break; }
                cursor = at + caption.size();
                tabs.push_back({static_cast<int>(at), static_cast<int>(cursor), std::string(caption)});
            }
        }
        if (tabs.empty()) continue;
        const int first = tabs.front().start, last = tabs.back().end;
        // The text-only grid omits classic tab artwork between captions.
        // Validate the labels themselves; the closed native panel below
        // establishes their shared bounds in both rendering modes.
        if (!std::all_of(tabs.begin(), tabs.end(), [&](const LogicalTextField &field) {
                return current(field.start, tabs_y, field.text);
            }))
            continue;
        const auto panel = native_panel_interior(borders, *gps_, first, last, tabs_y);
        if (!panel) continue;
        const int right = panel->x + panel->w, bottom = panel->y + panel->h;

        // Editing a condition opens a full-width searchable list beneath
        // its Amount/available pair, within the same Work orders frame.
        // It has neither a job status/count row nor the category column of
        // Add work order. Capture complete candidate buttons before generic
        // word matching can split Abli bows or centre each translated piece
        // in its own English span. The search owns the common column, even
        // after the first entry scrolls away or a query narrows the list.
        int amount_y = -1, availability_y = -1;
        for (int y = tabs_y + 1; y + 3 <= bottom; ++y) {
            for (const auto &field : split_text_fields(rows[y])) {
                if (field.start < panel->x || field.end > right ||
                    !current(field.start, y, field.text)) continue;
                if (field.text.starts_with("Amount of ")) amount_y = y;
                if (field.text.starts_with("available is ") && amount_y >= 0 &&
                    y > amount_y && y <= amount_y + 3) availability_y = y;
            }
            if (availability_y < 0 || y <= availability_y) continue;
            for (int x = panel->x; x < right; ++x) {
                const auto search = native_textbox_rect_at(*gps_, x, y);
                if (!search || search->x + search->w > right ||
                    search->x > first || search->x + search->w < last) continue;
                append_candidates(*search, right, bottom, search->x + search->w - 4, true);
                for (auto &choice : choices) {
                    choice.condition_choice = true;
                    for (auto &row : choice.rows) {
                        for (const auto &capture : clipped) {
                            if (capture.x == row.x && capture.y == row.y &&
                                capture.visible == row.source) {
                                row.complete_source = capture.complete;
                                break;
                            }
                        }
                    }
                }
                return choices;
            }
        }
        for (int top = tabs_y + 1; top + 3 <= bottom; ++top) {
            for (int icon = panel->x; icon + 4 < right; ++icon) {
                const auto record = native_work_order_record_rect(*gps_, *panel, icon, top);
                if (!record || record->x + record->w > right) continue;
                const auto current_draw = [&](const NativeDrawnTextRow &draw) {
                    return draw.x >= record->x && draw.x < record->x + record->w &&
                        draw.y >= top && draw.y < top + record->h &&
                        !draw.source.empty() && draw.source.size() <=
                            static_cast<size_t>(record->x + record->w - draw.x) &&
                        std::string_view(rows[draw.y]).substr(draw.x, draw.source.size()) ==
                            draw.source && current(draw.x, draw.y, draw.source);
                };
                // Only a currently drawn caption in the title band can own
                // this record. caption_source excludes numeric/edit-buffer
                // draws. Read its actual inset rather than deriving one from
                // the length, visibility or value of the quantity below it.
                const NativeDrawnTextRow *title = nullptr;
                for (const auto &draw : drawn) {
                    if (!draw.caption_source || draw.y >= top + 2 || !current_draw(draw))
                        continue;
                    const auto inset = std::string_view(rows[draw.y]).substr(
                        record->x, draw.x - record->x);
                    if (inset.find_first_not_of(' ') != std::string_view::npos ||
                        !current(record->x, draw.y, inset)) continue;
                    if (!title || draw.y < title->y ||
                        (draw.y == title->y && draw.x < title->x)) title = &draw;
                }
                if (!title) continue;
                const int title_end = title->x + static_cast<int>(title->source.size());
                int title_right = record->x + record->w - 1;
                // Independent descriptions keep their own column even on
                // the unskinned current-order header with no amount buttons.
                for (const auto &next : drawn) {
                    if (next.y == title->y && next.x >= title_end && current_draw(next))
                        title_right = std::min(title_right, next.x - 1);
                }
                if (title_right <= title->x) continue;
                NativeTextCard card;
                card.interior = {title->x, top, title_right - title->x, 2};
                bool valid = true;
                for (int y = top; y < top + 2; ++y) {
                    // Half-font captions repeat the same bytes on two
                    // physical rows. Capture each actual title span only;
                    // never scan a blank or framed quantity editor as part
                    // of the title, and never suppress its number/cursor.
                    if (std::string_view(rows[y]).substr(title->x, title->source.size()) !=
                            title->source || !current(title->x, y, title->source)) continue;
                    auto span = capture_panel_text_card(
                        {title->x, y, static_cast<int>(title->source.size()), 1}, true);
                    if (!span || !current_card(*span) || span->rows.size() != 1 ||
                        span->rows.front().x != title->x ||
                        span->rows.front().source != title->source) {
                        valid = false;
                        break;
                    }
                    auto row = std::move(span->rows.front());
                    // The title draw retains its pre-clipping native source
                    // across cached frames, after the capture epoch expires.
                    // Both half-font rows belong to this same proven title.
                    row.complete_source = title->complete_source;
                    for (const auto &capture : clipped) {
                        if (capture.x == row.x && capture.y == row.y &&
                            capture.visible == row.source) {
                            row.complete_source = capture.complete;
                            break;
                        }
                    }
                    card.rows.push_back(std::move(row));
                }
                if (!valid || card.rows.empty()) continue;
                card.interior.y = card.rows.front().y;
                card.interior.h = card.rows.back().y - card.rows.front().y + 1;
                choices.push_back(std::move(card));
            }
        }
        if (!choices.empty()) {
            static std::atomic_bool logged{false};
            if (!logged.exchange(true))
                log_line("INFO", "Activated work order caption layout: native status icons; "
                    "native title inset independent of quantity editing; quantity rows preserved");
            return choices;
        }
    }

    // The standalone task/work-order chooser has no workshop tab band. Its left
    // column contains icon categories and its right column starts with a
    // search field. Recover both from one closed outer frame, spanning the
    // divider when finding the frame so it cannot masquerade as a side wall.
    // The category skin and its anchored icon establish context; captions
    // need not belong to a fixed list or have a known translation. A workshop
    // can expose just one category, and scrolling can leave only one visible.
    // The complete category skin/icon, search control and closed shared frame
    // establish the chooser; the number of visible categories never does.
    std::vector<SDL_Rect> categories;
    for (int y = 0; y < gps_->dimy; ++y) {
        for (const auto &field : split_text_fields(rows[y])) {
            if (!current(field.start, y, field.text)) continue;
            const auto button = native_category_button_text_rect(*gps_, field.start, field.end, y);
            if (!button || std::any_of(categories.begin(), categories.end(), [&](const SDL_Rect &seen) {
                    return seen.x == button->x && seen.y == button->y;
                })) continue;
            categories.push_back(*button);
        }
    }
    for (const auto &anchor : categories) {
        const int category_right = anchor.x + anchor.w;
        const auto same_column = [&](const SDL_Rect &button) {
            return button.x == anchor.x && button.w == anchor.w;
        };
        // A visible category may follow several custom or partially covered
        // rows. Locate the search above it without assuming the first row.
        for (int top = 0; top <= anchor.y; ++top) {
            for (int x = category_right + 1; x < gps_->dimx; ++x) {
                const auto search = native_textbox_rect_at(*gps_, x, top);
                if (!search) continue;
                const auto panel = native_panel_interior(borders, *gps_, anchor.x,
                    search->x + search->w, search->y + 1);
                if (!panel) continue;
                const int right = panel->x + panel->w, bottom = panel->y + panel->h;
                if (anchor.y < panel->y || search->y < panel->y || search->y + search->h > bottom)
                    continue;
                // Capture the whole visible category column, including mod
                // categories; recognized labels never determine row widths.
                for (int y = search->y; y < bottom; ++y) {
                    const auto button = native_category_button_text_rect(
                        *gps_, anchor.x, anchor.x + 1, y);
                    if (!button || !same_column(*button) || button->y < search->y ||
                        button->y + button->h > bottom ||
                        std::any_of(choices.begin(), choices.end(), [&](const NativeTextCard &seen) {
                            return seen.interior.x == anchor.x + 1 && seen.interior.y == button->y;
                        })) continue;
                    auto card = capture_button(*button);
                    if (!card || !current_card(*card)) continue;
                    // The category helper reserves the anchored icon and
                    // first gap; one more cell matches the native text inset.
                    ++card->interior.x;
                    --card->interior.w;
                    if (card->interior.w > 0) choices.emplace_back(std::move(*card), true);
                }
                append_candidates(*search, right, bottom, search->x + search->w - 4);
                if (!choices.empty()) {
                    static std::atomic_bool logged{false};
                    if (!logged.exchange(true))
                        log_line("INFO", "Activated standalone task chooser layout: category left=" +
                            std::to_string(anchor.x + 1) + "; task left=" +
                            std::to_string(search->x + 2) + "; complete native button captions");
                    return choices;
                }
            }
        }
    }
    for (int tabs_y = 0; tabs_y < gps_->dimy; ++tabs_y) {
        // Require the ordered workshop tab band, not a Make/Construct word
        // in a tooltip, citizen activity or a neighbouring production menu.
        const auto fields = workshop_task_tab_fields(rows[tabs_y]);
        for (size_t tab = 0; tab + 2 < fields.size(); ++tab) {
            if (fields[tab].text != "Tasks" || fields[tab + 1].text != "Workers" ||
                fields[tab + 2].text != "Work orders") continue;
            const int first = fields[tab].start, last = fields[tab + 2].end;
            // As above, classic sloping tab borders are artwork, not text.
            if (!std::all_of(fields.begin() + tab, fields.begin() + tab + 3,
                    [&](const LogicalTextField &field) {
                        return current(field.start, tabs_y, field.text);
                    })) continue;
            const auto panel = native_panel_interior(borders, *gps_, first, last, tabs_y);
            const int panel_left = panel ? panel->x : 0;
            const int right = panel ? panel->x + panel->w : gps_->dimx;
            const int bottom = panel ? panel->y + panel->h : gps_->dimy;

            std::optional<SDL_Rect> search;
            // The building selector opens the right edge beside these tabs.
            // Its attached selected icon is not a rectangular panel border.
            // The chooser's ordered tabs, adjacent complete filter and return
            // button still prove the page; each candidate proves its own skin.
            // Native 53.16 places FILTER immediately below the three-row tabs
            // (PE 0x1844f1), including either physical half of their captions.
            const int search_bottom = panel ? bottom : std::min(bottom, tabs_y + 6);
            for (int y = tabs_y + 1; y + 3 <= search_bottom && !search; ++y) {
                for (int x = panel_left; x <= first; ++x) {
                    const auto box = native_textbox_rect_at(*gps_, x, y);
                    if (box && box->x <= first && box->x + box->w >= last &&
                        box->x + box->w <= right) {
                        search = box;
                        break;
                    }
                }
            }
            if (!search) continue;
            // Both the root chooser (Cancel) and a material/category branch
            // (Back) own the same searchable task list. Their compact return
            // control can share a source row with the half-font tab captions.
            bool chooser = false;
            for (int y = tabs_y; y < search->y && !chooser; ++y) {
                for (const auto &field : split_text_fields(rows[y])) {
                    if ((field.text == "Cancel" || field.text == "Back") &&
                        field.start >= search->x && field.end <= search->x + search->w &&
                        current(field.start, y, field.text) &&
                        native_button_text_rect(*gps_, field.start, field.end, y))
                        chooser = true;
                }
            }
            if (!chooser) continue;
            const int list_right = search->x + search->w;
            int list_bottom = bottom;
            if (!panel) {
                // A complete bottom rail bounds this column even though its
                // upper right edge has the building-selector attachment.
                for (int y = search->y + search->h; y < bottom; ++y) {
                    bool rail = true;
                    for (int x = search->x; x < list_right && rail; ++x)
                        rail = borders.at(x, y, 7);
                    if (rail) { list_bottom = y; break; }
                }
            }
            append_candidates(*search, list_right, list_bottom, last);
            if (!choices.empty()) return choices;
        }
    }
    return choices;
}

// Own complete task captions and missing-material reasons before generic
// words can split a generated instrument name from its scoped piece noun.
// The captured control still supplies geometry, colors and final row layout.
#include "workshop_choice_translation.inc"

void Overlay::append_workshop_task_translations(const WorkshopTaskCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    for (const auto &row : card.rows) {
        const std::string source = normalize_utterance(
            row.complete_source.empty() ? row.source : row.complete_source);
        const bool requirement = source.starts_with("[Requires ") && source.ends_with(']');
        // A category is a building label, never a generated personal name.
        // Keep unknown labels whole rather than inventing phonetic names.
        // Condition choices and selected/suggested conditions use the same
        // native job-item grammar as recipe requirements. In particular,
        // flags are semantic constraints, not independent dictionary words.
        TranslationResult result;
        if (card.condition_choice || requirement) result = translate_workshop_recipe_source_display(source);
        else if (card.native_choice_title) result = translate_workshop_choice_title(source);
        else if (card.category) {
            const auto target = exact_literal_translation(source);
            result = target ? TranslationResult::translated(source, *target, "workshop-category")
                : preserved_item_field(source, "workshop-category");
        } else result = translate_fortress_activity_display(source);
        const bool complete = result.usable() && !result.has_untranslated();
        Match match{row.x, row.y, static_cast<int>(row.source.size()),
            kWorkshopTaskRowRule, result.usable() && item_display_target_valid(result.target)
                ? result.target : native_text_to_utf8(source), row.source};
        match.translation_result = std::make_shared<const TranslationResult>(std::move(result));
        match.layout_foreground_rgb = row.foregrounds.front();
        match.native_hover_untranslated = !complete;
        if (!complete) match.native_help_review_source = source;
        if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
    }
}

// Setting a task's material opens a standalone selector, not the workshop's
// Add task list and not a map hover. Its header and name column share the
// search control's text inset. Availability is a separate right-hand field;
// neither that field nor the editable query belongs to a translated name.
std::vector<NativeTextCard> Overlay::capture_workshop_material_fields(
        const std::vector<std::string> &rows, bool task_detail_only) const {
    std::vector<NativeTextCard> fields;
    const NativePanelBorders borders(*gps_);
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto current = [&](const NativeTextCard &card) {
        return std::all_of(card.rows.begin(), card.rows.end(), [&](const NativeTextCardRow &row) {
            if (std::string_view(rows[row.y]).substr(row.x, row.source.size()) != row.source)
                return false;
            for (size_t i = 0; i < row.source.size(); ++i) {
                const auto ch = visible_char_at(row.x + static_cast<int>(i), row.y);
                if ((ch ? ch : ' ') != static_cast<unsigned char>(row.source[i])) return false;
            }
            return true;
        });
    };
    // This task-detail sheet has no search control or workshop tabs. Its
    // complete Specify buttons and their shared closed native frame establish
    // the fields; decoration jobs use horn/type instead of glass/plant.
    if (task_detail_only) {
        const auto task_control = [&](std::string_view text) {
            return text.starts_with("Specify ") && text != "Specify a new image" &&
                exact_literal_translation(std::string(text)).has_value();
        };
        for (int y = 0; y < gps_->dimy; ++y) {
            for (const auto &anchor : split_text_fields(rows[y])) {
                if (!task_control(anchor.text)) continue;
                const auto panel = native_panel_interior(
                    borders, *gps_, anchor.start, anchor.end, y);
                if (!panel) continue;
                const int right = panel->x + panel->w, bottom = panel->y + panel->h;
                std::vector<NativeTextCard> controls;
                for (int row_y = panel->y; row_y < bottom; ++row_y) {
                    for (const auto &caption : split_text_fields(rows[row_y])) {
                        if (!task_control(caption.text) || caption.start != anchor.start ||
                            caption.end > right) continue;
                        const auto button = native_button_text_rect(*gps_, caption.start,
                            caption.end, row_y, false, nullptr, false, true);
                        if (!button || button->x - 1 < panel->x ||
                            button->x + button->w > right || button->y < panel->y ||
                            button->y + button->h > bottom) continue;
                        if (std::any_of(controls.begin(), controls.end(),
                                [&](const NativeTextCard &seen) {
                                    return seen.interior.y == button->y;
                                })) continue;
                        const SDL_Rect source{caption.start,
                            button->y + (classic ? 1 : 0), caption.end - caption.start,
                            classic ? 1 : button->h};
                        auto control = capture_panel_text_card(source, true);
                        if (!control || !current(*control) ||
                            std::any_of(control->rows.begin(), control->rows.end(),
                                [&](const NativeTextCardRow &row) {
                                    return row.x != caption.start || row.source != caption.text;
                                })) continue;
                        control->interior = {caption.start, button->y,
                            button->x + button->w - caption.start, button->h};
                        control->button_box = SDL_Rect{button->x - 1, button->y,
                            button->w + 2, button->h};
                        control->workshop_task_detail = true;
                        controls.push_back(std::move(*control));
                    }
                }
                if (controls.empty()) continue;
                const int title_bottom = controls.front().interior.y;
                if (title_bottom <= panel->y) continue;
                auto title = capture_panel_text_card(
                    {panel->x, panel->y, panel->w, title_bottom - panel->y}, true);
                if (!title || !current(*title) || title->rows.size() > 2 ||
                    title->rows.front().x != anchor.start ||
                    (title->rows.size() == 2 &&
                        title->rows.back().y != title->rows.front().y + 1) ||
                    std::any_of(title->rows.begin(), title->rows.end(),
                        [&](const NativeTextCardRow &row) {
                            return row.x != anchor.start ||
                                row.source != title->rows.front().source;
                        })) continue;
                title->interior = {anchor.start, title->rows.front().y,
                    right - anchor.start, static_cast<int>(title->rows.size())};
                title->workshop_task_detail = true;
                fields.push_back(std::move(*title));
                for (auto &control : controls) fields.push_back(std::move(control));
                return fields;
            }
        }
        return fields;
    }
    const auto availability = [](std::string_view text) {
        if (!text.empty() && text.front() == '~') text.remove_prefix(1);
        if (!text.empty() && text.back() == '?') text.remove_suffix(1);
        return !text.empty() && std::all_of(text.begin(), text.end(), [](unsigned char ch) {
            return ch >= '0' && ch <= '9';
        });
    };
    for (int heading_y = 0; heading_y < gps_->dimy; ++heading_y) {
        for (const auto &heading : split_text_fields(rows[heading_y])) {
            // Match complete selector headings before assigning their title
            // and choices the native text inset. Decoration styles omit the
            // search control used by material, plant and glass selectors.
            const std::string caption = lower(heading.text);
            if (caption != "setting material" && caption != "setting plant" &&
                caption != "setting glass" && caption != "setting type") continue;
            const auto panel = native_panel_interior(
                borders, *gps_, heading.start, heading.end, heading_y);
            if (!panel) continue;
            const int right = panel->x + panel->w, bottom = panel->y + panel->h;
            // Decoration styles have no search box or stock-count column.
            // Their complete native buttons own each phrase, so Hanging
            // rings cannot become an unrelated Hanging plus a jewelry noun.
            if (caption == "setting type") {
                std::vector<NativeTextCard> choices;
                for (int y = heading_y + 1; y < bottom; ++y) {
                    for (const auto &part : split_text_fields(rows[y])) {
                        if (part.start < panel->x || part.end > right) continue;
                        const auto button = native_button_text_rect(*gps_, part.start,
                            part.end, y, false, nullptr, false, true);
                        if (!button || button->x - 1 < panel->x ||
                            button->x + button->w > right || button->y <= heading_y ||
                            button->y + button->h > bottom ||
                            std::any_of(choices.begin(), choices.end(),
                                [&](const NativeTextCard &seen) {
                                    return seen.button_box->x == button->x - 1 &&
                                        seen.button_box->y == button->y;
                                })) continue;
                        auto choice = capture_panel_text_card(
                            {button->x - 1, button->y + (classic ? 1 : 0),
                                button->w + 1, classic ? 1 : button->h}, true);
                        if (!choice || !current(*choice)) continue;
                        choice->interior = {heading.start, button->y,
                            button->x + button->w - heading.start, button->h};
                        if (choice->interior.w <= 0) continue;
                        choice->button_box = SDL_Rect{button->x - 1, button->y,
                            button->w + 2, button->h};
                        choice->workshop_decoration_type = true;
                        choices.push_back(std::move(*choice));
                    }
                }
                if (choices.empty()) continue;
                auto header = capture_panel_text_card({panel->x, panel->y, panel->w,
                    choices.front().interior.y - panel->y});
                if (!header || !current(*header)) continue;
                for (const auto &row : header->rows) {
                    NativeTextCard line;
                    line.interior = {heading.start, row.y, right - heading.start, 1};
                    line.rows.push_back(row);
                    fields.push_back(std::move(line));
                }
                for (auto &choice : choices) fields.push_back(std::move(choice));
                return fields;
            }
            std::optional<SDL_Rect> search;
            for (int y = heading_y + 1; y + 3 <= bottom && !search; ++y) {
                for (int x = panel->x; x < right; ++x) {
                    const auto box = native_textbox_rect_at(*gps_, x, y);
                    if (box && box->x + box->w <= right &&
                        box->x <= heading.start && box->x + box->w >= heading.end) {
                        search = box;
                        break;
                    }
                }
            }
            if (!search) continue;
            // Native textbox::render places its text two cells after the
            // left cap; the last four columns belong to its icon, not text.
            const int left = search->x + 2;
            const int text_right = search->x + search->w - 4;
            if (left >= text_right) continue;
            auto header = capture_panel_text_card(
                {panel->x, panel->y, panel->w, search->y - panel->y});
            if (!header || !current(*header)) continue;
            // Keep each heading's original row, including native half-font
            // pairs. No vertical recentering of the entire header region.
            for (const auto &row : header->rows) {
                NativeTextCard line;
                line.interior = {left, row.y, text_right - left, 1};
                line.rows.push_back(row);
                fields.push_back(std::move(line));
            }
            std::vector<SDL_Rect> buttons;
            for (int y = search->y + search->h; y < bottom; ++y) {
                // Material labels overwrite the middle-row left cap in
                // classic mode. Anchor the typed reader at that cap so its
                // caption exception can use the intact corners and rails.
                const auto button = native_button_text_rect(*gps_, search->x,
                    left + 1, y, false, nullptr, false, true);
                if (!button || button->x - 1 != search->x ||
                    button->x + button->w < text_right || button->x + button->w > right ||
                    button->y < search->y + search->h || button->y + button->h > bottom ||
                    std::any_of(buttons.begin(), buttons.end(), [&](const SDL_Rect &seen) {
                        return seen.x == button->x && seen.y == button->y;
                    })) continue;
                buttons.push_back(*button);
                // Include the source glyph on the overwritten left cap, but
                // never read classic upper/lower rails as text. Graphical
                // controls can still contain native half-font caption rows.
                const SDL_Rect source_box{button->x - 1, button->y + (classic ? 1 : 0),
                    button->w + 1, classic ? 1 : button->h};
                auto name = capture_panel_text_card(source_box, true);
                if (!name || !current(*name)) continue;
                int name_right = button->x + button->w;
                for (auto &row : name->rows) {
                    const auto parts = split_text_fields(row.source);
                    if (parts.size() < 2 || !availability(parts.back().text)) continue;
                    const int count_x = row.x + parts.back().start;
                    name_right = std::min(name_right, count_x - 1);
                    // Source ownership ends BEFORE the numeric column.
                    // Its native colors, question mark and alignment stay
                    // untouched, rather than moving after the Chinese.
                    size_t end = parts.back().start;
                    while (end && row.source[end - 1] == ' ') --end;
                    row.source.resize(end);
                    row.foregrounds.resize(end);
                }
                if (left >= name_right) continue;
                name->interior = {left, button->y, name_right - left, button->h};
                name->button_box = SDL_Rect{button->x - 1, button->y,
                    button->w + 2, button->h};
                fields.push_back(std::move(*name));
            }
            // One foreground selector is authoritative. Native split-font
            // copies of its heading must not capture the same rows twice.
            return fields;
        }
    }
    return fields;
}

void Overlay::layout_workshop_material_fields(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    int count = 0, left = -1;
    const auto settings = native_ui_settings();
    for (auto &match : prepared_matches_) {
        if (match.rule != kWorkshopMaterialFieldRule || match.target.empty() ||
            match.native_split_duplicate) continue;
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x, match.layout_clip_right);
        // Moving the source off a classic cap leaves its native vertical
        // stroke missing. Restore the same live skin through the shared
        // border renderer after glyph suppression, as in name candidates.
        if (settings && settings->classic && match.native_picture_caption_box) {
            const auto &frame = *match.native_picture_caption_box;
            std::array<int32_t, 9> skin{};
            const auto button = native_button_text_rect(*gps_, frame.x,
                frame.x + frame.w - 1, match.y, false, &skin, false, true);
            if (button && button->x - 1 == frame.x && match.x == frame.x &&
                button->y == frame.y && match.y == frame.y + 1) {
                NativeBorderRepair repair;
                repair.cells = {frame.x, frame.y + 1, 1, 1};
                repair.cell[0] = static_cast<unsigned char>(skin[3] & 0xff);
                const int foreground = ((skin[3] >> 8) & 7) + ((skin[3] & 0x4000) ? 8 : 0);
                const int background = (skin[3] >> 11) & 7;
                std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
                std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
                native_border_repairs_.push_back(repair);
            }
        }
        left = match.layout_x;
        ++count;
    }
    static std::atomic_bool logged{false};
    if (count && !logged.exchange(true))
        log_line("INFO", "Activated task material selector layout: fields=" +
            std::to_string(count) + "; left=" + std::to_string(left) +
            "; native search and availability columns preserved");
}

// Recipe previews are independent read-only cards, not task buttons or prose
// on the workshop behind them. The ordered headings identify the semantics;
// only a complete current native frame supplies the bounds. Capture original
// bytes before fragment matching so every ingredient shares the same inset,
// even when its English name has a different length or remains untranslated.
std::optional<NativeTextCard> Overlay::capture_workshop_recipe_card(
        const std::vector<std::string> &rows) const {
    const NativePanelBorders borders(*gps_);
    for (int y = 0; y < gps_->dimy; ++y) {
        for (const auto &field : split_text_fields(rows[y])) {
            if (field.text != "Produces:" && field.text != "Requires:") continue;
            const auto panel = native_panel_interior_with_occluder(borders, *gps_,
                SDL_Rect{field.start, y, field.end - field.start, 1});
            if (!panel) continue;
            NativeTextCard card;
            card.interior = *panel;
            const int bottom = panel->y + panel->h;
            bool current = true;
            for (int row_y = panel->y; row_y < bottom; ++row_y) {
                // Use the same visible source as the matching pass. A
                // graphical tooltip can leave covered map bytes and control
                // textures in its logical grid; rereading those raw cells
                // either invents extra text or rejects this read-only card.
                const auto source = std::string_view(rows[row_y]).substr(panel->x, panel->w);
                const size_t first = source.find_first_not_of(' ');
                if (first == std::string_view::npos) continue;
                const size_t end = source.find_last_not_of(' ') + 1;
                NativeTextCardRow row{panel->x + static_cast<int>(first), row_y,
                    std::string(source.substr(first, end - first)), {}};
                row.foregrounds.reserve(row.source.size());
                for (size_t i = 0; i < row.source.size(); ++i) {
                    bool top = false;
                    const auto *cell = cell_at(row.x + static_cast<int>(i), row_y, &top);
                    // Raw-layer matching may also see covered background
                    // bytes. Only current visible ink belongs to this card;
                    // filtered gaps must not revive hidden map characters.
                    if (row.source[i] != ' ' && (!cell ||
                            cell[0] != static_cast<unsigned char>(row.source[i]))) {
                        current = false;
                        break;
                    }
                    row.foregrounds.push_back(cell
                        ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
                }
                if (!current) break;
                card.rows.push_back(std::move(row));
            }
            if (!current || card.rows.empty() ||
                    (card.rows.front().source != "Produces:" &&
                     card.rows.front().source != "Requires:")) continue;
            bool requires_heading = false, has_product = false, has_reagent = false;
            bool valid = true;
            const int heading_x = card.rows.front().x;
            for (const auto &row : card.rows) {
                if (row.source == "Produces:") {
                    // Native half-font captions can occupy two source rows;
                    // normalize_native_split_text owns their deduplication.
                    if (requires_heading || has_product || row.x != heading_x) valid = false;
                } else if (row.source == "Requires:") {
                    if (has_reagent || row.x != heading_x) valid = false;
                    requires_heading = true;
                } else if (requires_heading) {
                    has_reagent = true;
                } else {
                    has_product = true;
                }
            }
            if (valid && (has_product || has_reagent)) return card;
        }
    }
    return std::nullopt;
}

void Overlay::layout_workshop_recipe_card(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    for (auto &match : prepared_matches_) {
        if (match.rule != kWorkshopRecipeRowRule || match.target.empty() ||
            match.native_split_duplicate || match.layout_fixed_baseline) continue;
        const bool heading = match.source == "Produces:" || match.source == "Requires:";
        // Headings sit on the inner frame; products and reagents use a single
        // shared one-cell indent. Source x/y/length still own only native ink.
        // Preserve section gaps, row order and half-font baselines. This card
        // is detached during background layout so it cannot become a column
        // or multiline paragraph in the workshop underneath.
        const int right = match.layout_clip_right;
        const int left = match.layout_x + (heading ? 0 : 1);
        if (left < right) layout_fortress_text_rows(renderer, {{&match}}, left, right);
    }
}

void Overlay::layout_workshop_task_rows(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const auto settings = native_ui_settings();
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    // Restore these owned fields only after generic panel/paragraph layout.
    // Both workshop lists use the shared font and native row baselines.
    for (auto &match : prepared_matches_) {
        if (match.rule == kWorkshopTaskRowRule && !match.target.empty() &&
            !match.native_split_duplicate) {
            // compose_native_text_rows retained per-glyph colors and centred
            // the whole one/two-line block vertically. Fit the shared button
            // width without changing its baseline, font or hitbox.
            layout_fortress_text_rows(renderer, {{&match}}, match.layout_x,
                match.layout_clip_right);
            if (match.native_picture_caption_box) {
                const auto &box = *match.native_picture_caption_box;
                // The complete button owns both caption lines. Preserve its
                // viewport after the row fitter supplies the shared font;
                // an original one-row writer clip must not cut a moved line.
                match.layout_native_clip = SDL_Rect{origin_x + box.x * tile_w,
                    origin_y + box.y * tile_h, box.w * tile_w, box.h * tile_h};
            }
            if (match.native_workshop_task_row || !settings || !settings->classic) continue;
            std::array<int32_t, 9> skin{};
            const auto button = native_button_text_rect(*gps_, match.x, match.x + 1,
                match.y, false, &skin, false, true);
            const bool ordinary_left = button && button->x - 1 == match.x &&
                button->y + 1 == match.y;
            // Trait checkboxes interrupt the rectangle rails, so the same
            // composite frame reader that captured the row also supplies its
            // erased left side. Generic rectangle recognition cannot do so.
            if (!ordinary_left && !native_work_order_trait_text_rect(
                    *gps_, match.x, match.y - 1, gps_->dimx, &skin)) continue;
            // The native caption erased this side cell. Once the whole row
            // moves to its shared inset, restore the original skin from the
            // current renderer's glyphs instead of leaving a gap in the frame.
            NativeBorderRepair repair;
            repair.cells = {match.x, match.y, 1, 1};
            repair.cell[0] = static_cast<unsigned char>(skin[3] & 0xff);
            const int foreground = ((skin[3] >> 8) & 7) + ((skin[3] & 0x4000) ? 8 : 0);
            const int background = (skin[3] >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
            native_border_repairs_.push_back(repair);
        }
    }
}

void Overlay::layout_fortress_task_rows(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    // Restore all three owned columns after generic panel/prose layout.
    for (auto &match : prepared_matches_) {
        if (!is_fortress_task_field(match) ||
            match.rule == kFortressWorkshopActivityRule ||
            match.target.empty() || match.native_split_duplicate) continue;
        layout_fortress_text_rows(renderer, {{&match}}, match.layout_x, match.layout_clip_right);
    }
}
