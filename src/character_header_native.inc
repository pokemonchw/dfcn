// Included inside append_character_header, after the physical-field binder.
// These are the actual addst returns in the selected-unit header, retained
// with both PE images in data/extracted/character-header-status/. Ownership
// does not depend on a quoted name, a closed frame, or the spelling of a name.
    const uintptr_t header_base = native_history_profile_base();
    if (header_base) {
        enum class HeaderField { None, Status, Pet, Creator, Office, Job, Arena };
#ifdef _WIN32
        const uintptr_t status_first = native_reference_address(header_base, 0x15c2f2);
        const uintptr_t status_last = native_reference_address(header_base, 0x15d246);
        const uintptr_t pet_prefix = native_reference_address(header_base, 0x15d2db);
        const uintptr_t pet_name = native_reference_address(header_base, 0x15d368);
        const uintptr_t creator_prefix = native_reference_address(header_base, 0x15d3df);
        const uintptr_t creator_name = native_reference_address(header_base, 0x15d434);
        const uintptr_t office = native_reference_address(header_base, 0x15d579);
        const uintptr_t job = native_reference_address(header_base, 0x15d6b6);
        const uintptr_t independent = native_reference_address(header_base, 0x15bc81);
        const uintptr_t arena_team = native_reference_address(header_base, 0x15bebb);
#else
        const uintptr_t pet_prefix = native_elf_5317_address(0x13f80f2);
        const uintptr_t pet_name = native_elf_5317_address(0x13f816e);
        const uintptr_t creator_prefix = native_elf_5317_address(0x13f8047);
        const uintptr_t creator_name = native_elf_5317_address(0x13f80ba);
        const uintptr_t office = native_elf_5317_address(0x13f800f);
        const uintptr_t job = native_elf_5317_address(0x13f7c50);
        const uintptr_t independent = native_elf_5317_address(0x13f9801);
        const uintptr_t arena_team = native_elf_5317_address(0x13f76e4);
        // GCC splits the header's status switch into noncontiguous blocks.
        // Only the actual status addst returns are classified as statuses.
        static const std::array status_callers{
            native_elf_5317_address(0x13f7826), native_elf_5317_address(0x13f7902), native_elf_5317_address(0x13f797d),
            native_elf_5317_address(0x13f7a07), native_elf_5317_address(0x13f7aa1), native_elf_5317_address(0x13f7b92),
            native_elf_5317_address(0x13f7cb1), native_elf_5317_address(0x13f7d07), native_elf_5317_address(0x13f7d3c),
            native_elf_5317_address(0x13f7dcb), native_elf_5317_address(0x13f7e03), native_elf_5317_address(0x13f7e3b),
            native_elf_5317_address(0x13f7e89), native_elf_5317_address(0x13f7f02), native_elf_5317_address(0x13f81e6),
            native_elf_5317_address(0x13f8214), native_elf_5317_address(0x13f824c), native_elf_5317_address(0x13f827a),
            native_elf_5317_address(0x13f82a8), native_elf_5317_address(0x13f82d6), native_elf_5317_address(0x13f830e),
            native_elf_5317_address(0x13f833c), native_elf_5317_address(0x13f8393), native_elf_5317_address(0x13f83c1),
            native_elf_5317_address(0x13f83ef), native_elf_5317_address(0x13f8427), native_elf_5317_address(0x13f8458),
            native_elf_5317_address(0x13f84c1), native_elf_5317_address(0x13f8503), native_elf_5317_address(0x13f852d),
            native_elf_5317_address(0x13f8554), native_elf_5317_address(0x13f8582), native_elf_5317_address(0x13f85a9),
            native_elf_5317_address(0x13f85f8), native_elf_5317_address(0x13f8626), native_elf_5317_address(0x13f8654),
            native_elf_5317_address(0x13f8682), native_elf_5317_address(0x13f86b0), native_elf_5317_address(0x13f86de),
            native_elf_5317_address(0x13f870c),
        };
#endif
        const auto kind = [&](const NativeDrawnTextRow &draw) {
            const uintptr_t caller = draw.native_caller;
            if (!caller) return HeaderField::None;
            // This contiguous branch contains only the soldier-mood,
            // strange-mood and emotional-overload status writers. The two
            // corrupt-enum fallbacks already submit a complete signed number;
            // grief instead submits three adjacent strings on this same row.
#ifdef _WIN32
            if (status_first && status_last && caller >= status_first && caller <= status_last)
                return HeaderField::Status;
#else
            if (std::find(status_callers.begin(), status_callers.end(), caller) != status_callers.end())
                return HeaderField::Status;
#endif
            if (caller == pet_prefix || caller == pet_name) return HeaderField::Pet;
            if (caller == creator_prefix || caller == creator_name) return HeaderField::Creator;
            if (caller == office) return HeaderField::Office;
            if (caller == job) return HeaderField::Job;
            if (caller == independent || caller == arena_team) return HeaderField::Arena;
            return HeaderField::None;
        };
        const auto bounds = native_character_read_bounds(*gps_);
        for (size_t layer = 0; layer < header_draws.size(); ++layer) {
            std::vector<const NativeDrawnTextRow *> fields;
            for (const auto &draw : *header_draws[layer]) {
                if (draw.character_header_activity ||
                        kind(draw) == HeaderField::None || draw.source.empty() ||
                        draw.editable_text || draw.squad_alias_target || !draw.draw_clip ||
                        draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                        draw.draw_grid != (layer ? gps_->screen_top : gps_->screen) ||
                        draw.x < bounds.x || draw.x >= bounds.x + bounds.w ||
                        draw.y < bounds.y || draw.y >= bounds.y + bounds.h) continue;
                fields.push_back(&draw);
            }
            std::sort(fields.begin(), fields.end(), [](const auto *a, const auto *b) {
                return std::tie(a->y, a->x, a->sequence) < std::tie(b->y, b->x, b->sequence);
            });
            std::vector<const NativeDrawnTextRow *> consumed;
            for (const auto *draw : fields) {
                if (std::find(consumed.begin(), consumed.end(), draw) != consumed.end()) continue;
                const auto role = kind(*draw);
                // A relation's name can equal another UI label. Only its
                // native prefix starts this complete possessive production.
                if ((role == HeaderField::Pet && draw->native_caller != pet_prefix) ||
                        (role == HeaderField::Creator && draw->native_caller != creator_prefix)) continue;
                std::vector<const NativeDrawnTextRow *> parts{draw};
                if (role == HeaderField::Status || role == HeaderField::Pet || role == HeaderField::Creator) {
                    for (;;) {
                        const auto *last = parts.back();
                        const int next_x = last->x + static_cast<int>(last->source.size());
                        const NativeDrawnTextRow *next = nullptr;
                        for (const auto *candidate : fields) {
                            if (candidate->y != draw->y || candidate->x != next_x ||
                                    candidate->sequence <= last->sequence || kind(*candidate) != role ||
                                    candidate->draw_epoch != draw->draw_epoch) continue;
                            if (role == HeaderField::Pet && candidate->native_caller != pet_name) continue;
                            if (role == HeaderField::Creator && candidate->native_caller != creator_name) continue;
                            if (!next || candidate->sequence > next->sequence) next = candidate;
                        }
                        if (!next) break;
                        parts.push_back(next);
                        if (role != HeaderField::Status) break;
                    }
                }
                std::string source;
                int right = bounds.x + bounds.w;
                bool pending = false;
                for (const auto *part : parts) {
                    source += part->complete_source.empty() ? part->source : part->complete_source;
                    right = std::min(right, part->draw_clip->x + part->draw_clip->w);
                    if (role == HeaderField::Pet || role == HeaderField::Creator)
                        pending = pending || (part->unit_identity_target && !part->unit_identity_ready);
                }
                if (right <= draw->x) continue;
                std::optional<std::string> target;
                std::optional<std::string> relation_name;
                std::shared_ptr<const TranslationResult> metadata;
                if (role == HeaderField::Status) {
                    std::vector<int> colors;
                    auto translated = translate_help_paragraph_result(source,
                        std::vector<int>(source.size(), draw->foreground_rgb), colors, true);
                    if (translated.usable() && translated.changed() && !translated.has_untranslated()) {
                        target = translated.target;
                        metadata = std::make_shared<const TranslationResult>(std::move(translated));
                    }
                    // A narrow native clip can omit the later grief calls
                    // entirely. This producer has exactly three continuations;
                    // use their common translation only when every still-
                    // possible continuation agrees, while claiming visible ink.
                    if (!target && source.starts_with("Beside ")) {
                        bool agreed = true;
                        for (const std::string_view whole : {"Beside herself with grief!",
                                "Beside himself with grief!", "Beside itself with grief!"}) {
                            if (!whole.starts_with(source)) continue;
                            const auto candidate = translate_help_paragraph(whole, {}, colors, true);
                            if (!candidate || candidate->empty() || (target && *target != *candidate)) {
                                agreed = false;
                                break;
                            }
                            target = candidate;
                        }
                        if (!agreed) target.reset();
                        if (target) metadata = std::make_shared<const TranslationResult>(
                            TranslationResult::translated(source, *target, "character-header-grief"));
                    }
                } else if (role == HeaderField::Pet || role == HeaderField::Creator) {
                    if (parts.size() == 2) {
                        const auto *name = parts[1];
                        const std::string name_source = name->complete_source.empty()
                            ? name->source : name->complete_source;
                        auto name_target = name->unit_identity_target;
                        if (!name_target && name_source == "Somebody")
                            name_target = exact_literal_translation(name_source);
                        if (!name_target && role == HeaderField::Pet)
                            name_target = translate_unit_identity(name_source, true);
                        if (name_target && !pending) {
                            relation_name = *name_target;
                            target = *name_target + (role == HeaderField::Pet ? "的宠物" : "的创造者");
                        }
                    } else {
                        // An unnamed artifact is a valid native branch: the
                        // game emits only the prefix. A narrow clip can also
                        // hide the related name; retain just the visible label.
                        target = exact_literal_translation(source);
                    }
                    if (!target && !pending && role == HeaderField::Creator)
                        target = translate_unit_profession(source, true);
                } else if (role == HeaderField::Office) {
                    target = translate_unit_profession(source, true);
                    if (!target) target = exact_literal_translation(source);
                } else if (role == HeaderField::Job) {
                    auto translated = translate_fortress_activity_display(source, false);
                    if (translated.usable() && translated.changed()) {
                        target = translated.target;
                        metadata = std::make_shared<const TranslationResult>(std::move(translated));
                    }
                } else if (role == HeaderField::Arena) {
                    target = draw->native_caller == arena_team
                        ? std::optional<std::string>(source) : exact_literal_translation(source);
                }
                if ((!target || target->empty()) && !pending) continue;
                // Retain every physical half and all pieces for suppression.
                // The composed translation stays a header field, never a
                // paragraph, and never consumes the following job/activity.
                for (int y = std::max(0, draw->y - 1); y <= std::min(gps_->dimy - 1, draw->y + 1); ++y) {
                    std::optional<LogicalTextField> combined;
                    std::vector<int> part_colors;
                    for (const auto *part : parts) {
                        std::string complete;
                        const auto physical = header_field(*part, layer != 0, y, complete, true);
                        if (!physical || (combined && physical->start != combined->end)) {
                            combined.reset();
                            break;
                        }
                        part_colors.push_back(header_foreground(*part, *physical, y));
                        if (!combined) combined = *physical;
                        else { combined->end = physical->end; combined->text += physical->text; }
                    }
                    if (!combined) continue;
                    std::vector<int> colors;
                    if (relation_name && target && part_colors.size() == 2) {
                        // Chinese moves the name before the relation label.
                        // Move its native color with it, counting UTF-8 glyphs.
                        std::vector<uint32_t> name_codepoints, target_codepoints;
                        if (decode_utf8(*relation_name, name_codepoints) &&
                                decode_utf8(*target, target_codepoints) &&
                                name_codepoints.size() <= target_codepoints.size()) {
                            colors.assign(target_codepoints.size(), part_colors.front());
                            std::fill_n(colors.begin(), name_codepoints.size(), part_colors[1]);
                        }
                    }
                    claim_field(*combined, y, target.value_or(std::string{}),
                        right, metadata, pending, part_colors.front(), false, colors);
                    // Fallback readers still see the immutable English rows;
                    // they must not replace this bound field with a flat color.
                    native_header_spans.push_back({y, combined->start, combined->end});
                }
                consumed.insert(consumed.end(), parts.begin(), parts.end());
            }
        }
    }
