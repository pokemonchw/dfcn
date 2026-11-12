bool Overlay::load_river_names() {
    ++river_names_revision_;
    site_text_cache_.clear();
    river_name_cache_.clear();
    river_name_cache_world_.clear();
    return river_names_.load(runtime::data_path(), english_character_names_);
}

RiverNames::Result Overlay::localize_river_name(const NativeHistoryName &name,
        RiverNames::InputKind kind) const {
    return river_names_.semantic(name, english_character_names_,
        [&](const NativeHistoryWord &word) -> std::string {
            const int pos = word.part_of_speech;
            const char *part = pos == 0 || pos == 1 ? "NOUN" : pos == 2 ? "ADJ" :
                pos == 3 ? "PREFIX" : pos >= 4 && pos <= 8 ? "VERB" : nullptr;
            if (!part) return {};
            const auto sense = procedural_word_senses_.find(word.id + "\t" + part);
            return sense == procedural_word_senses_.end() ? "" : sense->second;
        }, [&](const NativeHistoryWord &left, const NativeHistoryWord &right) {
            const auto token_word = [](std::string_view form) {
                return std::all_of(form.begin(), form.end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == '\'';
                });
            };
            // Intrinsic hyphens/spaces inside a WORD cannot be submitted as
            // one TokenReading: the tokenizer would discard its root hints.
            // Both members still take the phonetic path, with their own POS.
            if (!token_word(left.english_form) || !token_word(right.english_form))
                return english_name_transliterator_.word(left.english_form, left.part_of_speech) +
                    english_name_transliterator_.word(right.english_form, right.part_of_speech);
            EnglishNameTransliterator::TokenReading token;
            token.spelling = left.english_form + right.english_form;
            token.roots = {{left.english_form, left.part_of_speech},
                {right.english_form, right.part_of_speech}};
            return english_name_transliterator_.name(token.spelling, {token});
        }, kind);
}

std::string Overlay::translate_river_text(std::string_view source, RiverSize category) const {
    // A river-owned string without WORD/POS cannot establish native groups.
    // Preserve it as missing input instead of guessing boundaries or doing
    // whole-name phonetic fallback. Known category labels still own G.
    RiverNameIdentity identity;
    identity.size = category;
    source = trim_view(source);
    return source.empty() ? "" : native_text_to_utf8(source) + river_names_.generic(identity);
}

std::string Overlay::translate_river_name(const RiverNameIdentity &identity,
        RiverDisplayField field, std::string_view source) const {
    if (!identity.name.has_name)
        return field == RiverDisplayField::Native ? transliterate_site_spelling(source)
            : translate_river_text(source, identity.size);
    const auto &name = identity.name;
    // Always render the complete captured field, including every WORD/POS,
    // even if the native writer supplied an abbreviation to addst.
    const auto english = reconstruct_site_english_name(name);
    const std::string complete = field == RiverDisplayField::English
        ? (source.empty() ? english.value_or("") : std::string(source))
        : (name.native_name.empty() ? std::string(source) : name.native_name);
    if (river_name_cache_world_ != identity.world_key) {
        river_name_cache_.clear();
        river_name_cache_world_ = identity.world_key;
    }
    std::string key = std::to_string(identity.index) + "\t" +
        std::to_string(river_names_revision_) + "\t" + std::to_string(int(field)) + "\t" +
        std::to_string(name.language) + "\t" + std::to_string(int(identity.size)) + "\t" +
        std::to_string(int(identity.terrain)) + "\t" + identity.generic_style + "\t" +
        std::to_string(identity.finalized) + "\t" +
        std::to_string(config_.native_language_original) + "\t" +
        site_name_decision_key(complete, name.type, name.words);
    if (const auto cached = river_name_cache_.find(key); cached != river_name_cache_.end())
        return cached->second.text;
    const auto *decision = river_names_.decision(identity, field, complete);
    std::string result;
    std::optional<RiverNames::Result> translation;
    if (field == RiverDisplayField::Native) {
        result = decision && decision->policy == "retain" ? native_text_to_utf8(complete) :
            decision && !decision->transliteration.empty() && !config_.native_language_original
            ? decision->transliteration : transliterate_site_spelling(complete);
    } else {
        translation = localize_river_name(name);
        translation->resource_revision = river_names_revision_;
        translation->category = identity.size;
        translation->category_unknown = identity.size == RiverSize::Unknown;
        result = translation->display(river_names_.generic(identity));
        if (result.empty()) result = native_text_to_utf8(complete) + river_names_.generic(identity);
        for (const auto &issue : translation->issues) {
            if (issue.status == RiverNames::Status::CompoundTransliterated) continue;
            std::string detail;
            for (size_t slot : issue.slots) {
                const auto &word = name.words[slot];
                detail += " " + word.id + "/" + std::to_string(word.part_of_speech);
            }
            log_line("WARN", "River name resource/input: " + issue.detail + detail);
        }
    }
    // A generating world has provisional inputs. Do not retain its partial
    // path as a formal named object, even across several identical frames.
    if (identity.finalized && !identity.world_key.empty() && identity.index != SIZE_MAX) {
        if (river_name_cache_.size() >= 4096) river_name_cache_.clear();
        river_name_cache_.emplace(std::move(key), RiverNameCacheEntry{result, std::move(translation)});
    }
    return result;
}

std::vector<std::string> Overlay::river_name_search_aliases(const RiverNameIdentity &identity) const {
    std::vector<std::string> aliases;
    const auto append = [&](std::string value) {
        if (!value.empty() && std::find(aliases.begin(), aliases.end(), value) == aliases.end())
            aliases.push_back(std::move(value));
    };
    append(native_text_to_utf8(identity.name.native_name));
    append(transliterate_site_spelling(identity.name.native_name));
    if (const auto english = reconstruct_site_english_name(identity.name)) {
        append(native_text_to_utf8(*english));
        append(translate_river_name(identity, RiverDisplayField::English, *english));
        if (const auto *d = river_names_.decision(identity, RiverDisplayField::English, *english)) {
            append(d->transliteration); append(d->old); append(d->core);
        }
    }
    return aliases;
}

void Overlay::append_river_name_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_) return;
    const auto draws = std::array{captured_native_drawn_text_view(),
        captured_native_drawn_text_view(true)};
    for (const auto &plane : draws) for (const auto &draw : plane) {
        if (!draw.river_name || draw.x < 0 || draw.y < 0 || draw.y >= int(rows.size()) ||
            (only_y >= 0 && draw.y != only_y) || draw.draw_dimx != gps_->dimx ||
            draw.draw_dimy != gps_->dimy || draw.source.empty()) continue;
        int first = draw.x, end = std::min(gps_->dimx, draw.x + int(draw.source.size()));
        if (draw.draw_clip) {
            if (draw.y < draw.draw_clip->y || draw.y >= draw.draw_clip->y + draw.draw_clip->h) continue;
            first = std::max(first, draw.draw_clip->x);
            end = std::min(end, draw.draw_clip->x + draw.draw_clip->w);
        }
        if (first >= end || end > int(rows[draw.y].size())) continue;
        bool current = true;
        for (int x = first; current && x < end; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            current = cell && cell[0] == static_cast<unsigned char>(draw.source[x - draw.x]);
            if (current && cell[0] != ' ') {
                const auto origin = native_text_grid_origin(*gps_, size_t(x) * gps_->dimy + draw.y, top);
                current = origin.grid == draw.draw_grid && origin.top_layer == draw.top_layer;
            }
        }
        if (!current) continue;
        if (rows[draw.y].compare(size_t(first), size_t(end - first),
                draw.source, size_t(first - draw.x), size_t(end - first)) != 0) continue;
        const auto &fact = *draw.river_name;
        auto identity = fact.identity;
        std::string label_text;
        // The native renderer draws the segment's size label separately from
        // this world_river name. Claim their contiguous source together so
        // reserving the name cannot leave the label to a later whole-row pass.
        // The displayed segment label also selects this name's generic.
        if (first == draw.x) {
            int label_end = first;
            while (label_end > 0 && rows[draw.y][label_end - 1] == ' ') --label_end;
            for (std::string_view prefix : {"Major River:", "Minor River:", "River:",
                    "Stream:", "Brook:"}) {
                const int label_first = label_end - int(prefix.size());
                if (label_first < 0 ||
                        rows[draw.y].compare(size_t(label_first), prefix.size(), prefix) != 0)
                    continue;
                if (draw.draw_clip && label_first < draw.draw_clip->x) break;
                bool label_current = true;
                for (int x = label_first; label_current && x < first; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, draw.y, &top);
                    label_current = cell && cell[0] ==
                        static_cast<unsigned char>(rows[draw.y][x]);
                    if (label_current && cell[0] != ' ') {
                        const auto origin = native_text_grid_origin(*gps_,
                            size_t(x) * gps_->dimy + draw.y, top);
                        label_current = origin.grid == draw.draw_grid &&
                            origin.top_layer == draw.top_layer;
                    }
                }
                if (label_current) if (const auto label = exact_literal_translation(prefix)) {
                    identity.size = RiverNames::category(prefix);
                    label_text = *label;
                    first = label_first;
                }
                break;
            }
        }
        std::string target = translate_river_name(identity, fact.field, fact.complete_source);
        if (target.empty()) continue;
        target = label_text + target;
        Match match{first, draw.y, end - first, kWorldgenSummaryRule, target,
            rows[draw.y].substr(size_t(first), size_t(end - first))};
        match.layout_foreground_rgb = draw.foreground_rgb;
        std::fill(rows[draw.y].begin() + first, rows[draw.y].begin() + end, ' ');
        matches.push_back(std::move(match));
    }
}
