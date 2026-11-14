// The conversation chooser and its native search adapter use one complete
// keyword translation. Keyword vocabulary is deliberately scoped: `order`,
// `state`, and similar search terms must not borrow unrelated UI meanings.
std::optional<std::string> Overlay::translate_conversation_choice(
        std::string_view raw_source) const {
    const std::string source = normalize_utterance(raw_source);
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    const auto complete = [](const std::optional<std::string> &target) {
        return target && !target->empty() &&
            std::none_of(target->begin(), target->end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
            });
    };
    const auto complete_native = [&](const std::optional<std::string> &target) {
        return translation_complete_with_native_nicknames(target, source);
    };
    // These are complete typed noun/event parsers. None may replace just a
    // convenient prefix of an unrecognised conversational sentence.
    if (const auto target = exact_literal_translation(source); complete(target)) return target;
    // DISCUSS_CONFLICT owns both paragraphs, not just the generic {v} head.
    // ELF control flow and every text supplier are retained in
    // data/extracted/adventure-conversation-conflicts. The same typed grammar
    // also supplies the bound keyword vector and the Chinese search adapter.
    if (std::string_view(source).starts_with("Summarize the conflict in which ")) {
        const auto target = translate_announcement_combat(raw_source, "conversation-conflict-choice");
        return translation_complete_with_native_nicknames(target, raw_source)
            ? target : std::nullopt;
    }
    // Native talk_choice types 66..70 (failed, breaking point, major, minor,
    // negated) use these complete caption families over their emotion switches.
    // The full branch/literal/append sources for both configured PE images are
    // in data/extracted/adventure-conversation-emotions. Every constructor
    // appends the same complete experience as thoughts and recollections.
    // Keep its reviewed head authoritative, then consume the entire suffix
    // through that shared event grammar, including skills and named creatures.
    // An unknown event cannot silently disappear behind a translated head.
    const std::string_view caption(source);
    const bool emotion_caption = caption.starts_with("State feelings of ") ||
        caption.starts_with("State feelings, ") ||
        caption.starts_with("State minor feeling of ") ||
        caption.starts_with("Verbally struggle against ") ||
        caption.starts_with("Verbally struggle, ") ||
        caption.starts_with("Fail the struggle against ") ||
        caption.starts_with("Fail the internal struggle, ") ||
        caption.starts_with("Dismiss minor feeling of ") ||
        caption.starts_with("Dismiss minor doubts ") ||
        caption.starts_with("Dismiss minor existential crisis ") ||
        caption.starts_with("Acknowledge lack of ");
    if (emotion_caption) {
        for (size_t at = caption.rfind(' '); at != std::string_view::npos;
                at = at == 0 ? std::string_view::npos : caption.rfind(' ', at - 1)) {
            const auto feeling = exact_literal_translation(caption.substr(0, at));
            if (!complete(feeling)) continue;
            const auto event_source = caption.substr(at + 1);
            // Circumstance 233 names a typed history-event collection. Its
            // eighteen title families retain native participants and object
            // roles at the constructor's own event-formatter call sites.
            if (event_source.starts_with("during ")) {
                if (const auto native = native_overview_event_source(event_source)) {
                    if (const auto pieces = translate_history_event(*native)) {
                        std::string event;
                        for (const auto &piece : *pieces) event += piece.target;
                        if (translation_complete_with_native_nicknames(event, event_source))
                            return event + "，" + *feeling;
                    }
                }
            }
            std::vector<size_t> origins;
            const auto event = RULESETS.translate_with_origins(
                native_text_to_utf8(event_source), "::psychology::event", origins);
            if (translation_complete_with_native_nicknames(event, event_source))
                return *event + "，" + *feeling;
        }
        return std::nullopt;
    }
    // Every remaining authored talk-choice production has its own typed
    // participant, office, item, artifact and location fields. Keep conflict
    // and emotion constructors above on their complete native grammars.
    if (const auto target = translate_announcement_combat(raw_source, "conversation-choice");
            complete_native(target)) return target;
    if (const auto target = translate_creature_label(source); complete_native(target)) return target;
    if (const auto target = translate_item_description_term(source); complete_native(target)) return target;
    if (const auto target = translate_legends_event(source); complete_native(target)) return target;

    // Unit captions add a caste before the native personal name. A proven
    // complete caste prefix allows the same resolver as action captions; it
    // does not give an arbitrary conversation sentence a phonetic fallback.
    std::string_view label(source);
    if (label.starts_with("the ") || label.starts_with("The ")) label.remove_prefix(4);
    for (size_t at = label.rfind(' '); at != std::string_view::npos;
            at = at == 0 ? std::string_view::npos : label.rfind(' ', at - 1)) {
        const auto caste = translate_creature_descriptor(label.substr(0, at), true);
        if (!complete(caste)) continue;
        const auto target = translate_ui_message_capture(source, true);
        if (complete_native(target)) return target;
    }

    // Name-only submenus contain no authored verb for a P template to match.
    // Restore no arbitrary sentence to title case here: the visible caption
    // itself must have native name/title shape, and each content word must
    // be proven by the existing RAW vocabulary (including full compounds).
    std::vector<std::string> words;
    std::istringstream input(source);
    for (std::string word; input >> word;) words.push_back(std::move(word));
    if (words.empty()) return std::nullopt;
    const auto native_word = [&](std::string_view word) {
        const std::string folded = lower_native_name(std::string(word));
        if (native_name_language_masks_.contains(folded)) return true;
        for (size_t split = 1; split < folded.size(); ++split) {
            const auto front = native_name_language_masks_.find(folded.substr(0, split));
            const auto rear = native_name_language_masks_.find(folded.substr(split));
            if (front != native_name_language_masks_.end() &&
                rear != native_name_language_masks_.end() && (front->second & rear->second)) return true;
        }
        return false;
    };
    const auto english_word = [&](std::string_view word, bool require_compound) {
        const std::string folded = lower(std::string(word));
        const auto known = [&](std::string_view fragment) {
            return name_editor_word_forms_.contains(std::string(fragment)) ||
                procedural_terms_.contains(std::string(fragment));
        };
        if (!require_compound && known(folded)) return true;
        for (size_t split = 1; split < folded.size(); ++split)
            if (known(std::string_view(folded).substr(0, split)) &&
                known(std::string_view(folded).substr(split))) return true;
        return false;
    };
    const bool person = words.front() != "The" && words.front() != "the" &&
        native_name_language_masks_.contains(lower_native_name(words.front()));
    bool previous_connector = false;
    for (size_t i = 0; i < words.size(); ++i) {
        const auto &word = words[i];
        const bool article = word == "The" || (i == 0 && word == "the");
        const bool connector = i > 0 && (word == "the" || word == "of" ||
            word == "and" || word == "in" || word == "with" || word == "a" ||
            word == "an" || word == "for" || word == "to" || word == "from");
        if (article || connector) { previous_connector = true; continue; }
        const unsigned char initial = static_cast<unsigned char>(word.front());
        if (!((initial >= 'A' && initial <= 'Z') || is_cp437_latin_letter_byte(initial)) ||
            !std::all_of(word.begin(), word.end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                    is_cp437_latin_letter_byte(ch) || ch == '\'' || ch == '-';
            })) return std::nullopt;
        if (!native_word(word) && !english_word(word, words.size() == 1)) return std::nullopt;
        previous_connector = false;
    }
    if (previous_connector) return std::nullopt;
    if (person) {
        const auto target = translate_ui_message_capture(source, true);
        if (complete_native(target)) return target;
    }
    const auto target = translate_legends_name(source, person);
    return complete_native(target) ? target : std::nullopt;
}

std::optional<std::string> Overlay::translate_adventure_action_choice(
        std::string_view source, const std::vector<int> &source_colors,
        std::vector<int> &target_colors, const NativePerformanceChoice *native_choice) const {
    TranslationStateScope translation_scope;
    target_colors.clear();
    // The native entry, rather than the shortened button text, establishes
    // both the complete source and its sphere/value/name/item namespace.
    if (native_choice && !native_choice->source.empty()) source = native_choice->source;
    const std::string normalized = normalize_utterance(source);
    if (normalized.empty() || normalized.ends_with("...") || source_colors.empty())
        return std::nullopt;
    const auto uniform_colors = [&](std::optional<std::string> target) {
        if (!target) return target;
        std::vector<uint32_t> codepoints;
        if (!decode_utf8(*target, codepoints)) return std::optional<std::string>{};
        target_colors.assign(codepoints.size(), source_colors.front());
        return target;
    };
    if (normalized == "Unknown") {
        // The performance producer uses this same spelling for unrelated
        // story subjects. Only its bound object may supply the missing kind.
        // An unavailable capture stays neutral instead of borrowing terrain.
        std::string target = "未知";
        if (native_choice) {
            switch (native_choice->type) {
            case 9: // STORY_HF, including unnamed animals.
                target = native_choice->unnamed ? "无名生灵" : "身份不明的生灵";
                if (native_choice->unnamed && !native_choice->species.empty()) {
                    if (const auto species = translate_creature_descriptor(native_choice->species, true))
                        target = "无名" + *species;
                }
                break;
            case 8: target = "未知地点"; break; // STORY_SITE
            case 10: target = "未知群体"; break; // STORY_ENTITY
            case 11: target = "未知区域"; break; // STORY_SUBREGION
            case 25: target = "未知崇拜对象"; break; // SERMON_HFID
            default: break;
            }
        }
        return uniform_colors(std::move(target));
    }
    if (native_choice) {
        switch (native_choice->type) {
        case 26: // SERMON_SPHERE: all 130 native sphere enum values.
            return uniform_colors(translate_deity_spheres(normalized));
        case 27: case 28: // SERMON_PROMOTE_VALUE / SERMON_REFUSE_VALUE.
            return uniform_colors(exact_literal_translation(
                "Adventure performance value: " + normalized));
        case 38: // WRITE_FORM_BY_INDEX: the finite written-work genre table.
            return uniform_colors(exact_literal_translation(
                "Adventure performance genre: " + normalized));
        case 17: { // MUSIC_ROLE: voice, RAW instrument, actual item or artifact.
            if (const auto voice = exact_literal_translation(
                    "Adventure performance voice: " + normalized))
                return uniform_colors(voice);
            const bool simulate = normalized.starts_with("Simulate ");
            const bool play = normalized.starts_with("Play ");
            if (!simulate && !play) return std::nullopt;
            const auto instrument = std::string_view(normalized).substr(simulate ? 9 : 5);
            std::optional<std::string> target;
            if (simulate) {
                // Native +0x68 is a generated instrument type, with no item
                // material or designation marks for this branch to invent.
                target = translate_embark_instrument_item(instrument, false, true);
            } else {
                // Native item virtual +0x188 and artifact formatter c65450
                // retain the actual object's complete material/quality/name.
                target = translate_item_description_term(instrument);
                if (!target) target = translate_inventory_item_name(instrument, -1, -1);
                if (!target) target = translate_legends_item(instrument);
                if (!target) target = translate_embark_instrument_item(instrument, true, true);
                if (!target && generated_title_shape(instrument))
                    target = translate_legends_artifact_identity(instrument);
            }
            if (!target) return std::nullopt;
            return uniform_colors((simulate ? "模仿" : "演奏") + *target +
                (simulate ? "的演奏" : ""));
        }
        case 9: { // STORY_HF, with any visible assumed identity preserved.
            auto target = translate_ui_message_capture(source, true);
            // The bound historical-figure entry also proves a bare name.
            // Named animals can display only an English surname, without a
            // native given word or caste prefix for the unit-label grammar.
            if (!target) target = translate_legends_name(source, true);
            return uniform_colors(std::move(target));
        }
        case 25: // SERMON_HFID is the historical figure's own name.
            return uniform_colors(translate_legends_name(source, true));
        case 8: case 10: case 11: // STORY_SITE / ENTITY / SUBREGION.
        case 13: case 15: case 18: // POETRY / MUSIC / DANCE_FORM.
        case 31: case 33: case 35: // COMPOSE_*_FORM_BY_INDEX.
            return uniform_colors(translate_legends_name(source, false));
        case 14: case 16: case 19: case 39: // Memorized written compositions.
            return uniform_colors(translate_legends_book(source));
        case 12: { // STORY_EVENT is the complete native history-event caption.
            if (native_choice->story_event) {
                if (const auto pieces = translate_history_event(*native_choice->story_event, false)) {
                    std::string target;
                    for (const auto &piece : *pieces) target += piece.target;
                    if (!target.empty()) return uniform_colors(std::move(target));
                }
            }
            // The chooser capitalizes virtual +d8's title and keeps its
            // unshortened value in list_name. Its participant/location/date
            // fields need the complete title parser's typed backtracking;
            // paragraph scanning cannot establish those field boundaries.
            // Display and Chinese search share this same bound enum/ID.
            // A native nickname is authored text; keep its exact spacing.
            return uniform_colors(translate_legends_event(
                source.find('`') == std::string_view::npos
                    ? std::string_view(normalized) : trim_view(source), 0, false));
        }
        case 37: { // WRITE_TARGET: the actual writable item's designation.
            auto target = translate_item_description_term(source);
            if (!target) target = translate_inventory_item_name(source, -1, -1);
            if (!target) target = translate_legends_item(source);
            return uniform_colors(std::move(target));
        }
        default: break;
        }
    }
    if (const auto target = exact_literal_translation("Adventure action: " + normalized))
        return uniform_colors(target);
    // Native option captions own typed unit, tile, building, item, material
    // and direction fields. Resolve them before the general UI compositor:
    // its item-name fallback may retain English inside a terrain description.
    if (const auto target = translate_adventure_item_action(normalized)) {
        const auto result = uniform_colors(target);
        if (const size_t at = adventure_ranged_action_offset(normalized)) {
            const auto prefix = adventure_conflict_prefix(normalized);
            const auto label = prefix->label.empty() ? std::optional<std::string>("") :
                exact_literal_translation("Adventure ranged prefix: " + std::string(prefix->label));
            std::vector<uint32_t> prefix_codepoints;
            std::vector<size_t> origins;
            normalize_utterance(source, &origins);
            if (label && decode_utf8(*label + "：", prefix_codepoints) &&
                    at < origins.size() && origins[at] < source_colors.size() &&
                    prefix_codepoints.size() <= target_colors.size())
                std::fill(target_colors.begin() + prefix_codepoints.size(), target_colors.end(),
                    source_colors[origins[at]]);
        }
        return result;
    }
    if (!native_choice) {
        if (const auto target = translate_adventure_deposit_caption(normalized))
            return uniform_colors(target);
        // Shoot/throw with no verb return the entire TILE field; their bare
        // terrain must keep the same namespace as the prefixed constructors.
        if (const auto target = RULESETS.translate_tile_description(native_text_to_utf8(normalized)))
            return uniform_colors(target);
    }
    // Complete fixed menu captions precede the permissive personal-name
    // fallback. Their authored predicates must never become invented names.
    std::vector<int> complete_colors;
    const std::vector<int> *caption_colors = &source_colors;
    if (source.size() != source_colors.size()) {
        complete_colors.assign(source.size(), source_colors.front());
        caption_colors = &complete_colors;
    }
    if (const auto target = translate_help_paragraph(source, *caption_colors,
            target_colors, true)) return target;
    // Use this exact priority for both complete native search candidates and
    // visible action buttons, including the prompt's name-only submenus.
    auto target = native_unit_identity_source_target(source);
    if (!target && !native_choice && normalized == "A")
        target = exact_literal_translation("Adventure vermin: A");
    if (!target && !native_choice) {
        // Virtual slot +8 also returns bare inventory designations and RAW
        // creature labels. Resolve their complete typed grammar before names.
        target = translate_inventory_item_name(normalized, -1, -1);
        if (!target) target = translate_inventory_location(normalized, -1, -1);
        if (!target) target = translate_creature_descriptor(normalized, true);
        if (!target) target = translate_creature_label(normalized);
    }
    // Name fields preserve the player's nickname spelling, including spaces.
    // Only action lookup above uses the normalized caption.
    if (!target) target = translate_procedural_fragment(
        std::string(trim_view(source)), false, false, {},
        ProceduralFragmentContext::personal_name);
    if (target) return uniform_colors(std::move(target));
    target = translate_ui_message_capture(normalized, false);
    if (target) return uniform_colors(std::move(target));
    return uniform_colors(translate_conversation_choice(source));
}

bool Overlay::translated_adventure_action_matches(std::string_view source,
        std::string_view query, const NativePerformanceChoice *native_choice) const {
    TranslationStateScope translation_scope;
    if (!config_.enabled || source.empty() || source.size() > 65536) return false;
    if (translated_search_query(query).literal.empty()) return false;
    if (search_association_text(source,{},query,SearchCandidateKind::TextRecord,"conversation")) return true;
    if (native_choice) {
        // Equal captions can have different enums or native identities.
        // Retain the complete captured discriminator, including unnamed
        // creatures' species, rather than caching by their shared caption.
        std::string key = std::to_string(native_choice->type) + '\x1f' +
            std::to_string(native_choice->id);
        key.push_back(native_choice->unnamed ? '\1' : '\0');
        key.push_back(native_choice->story_event ? '\1' : '\0');
        key.append(native_choice->source).push_back('\0');
        key.append(native_choice->species).push_back('\0');
        key.append(source);
        const auto target = memoize_search_translation('v', key, [&] {
            std::vector<int> source_colors(source.size(), 0xffffff), target_colors;
            return translate_adventure_action_choice(source, source_colors, target_colors, native_choice);
        }, true);
        return target && search_association_text(source,*target,query,SearchCandidateKind::TextRecord,"conversation");
    }
    const auto target = memoize_search_translation('a', source, [&] {
        // Keep complete original spelling/case for the shared name grammar.
        // Cache semantic text independently of query, viewport and row color.
        std::vector<int> source_colors(source.size(), 0xffffff), target_colors;
        return translate_adventure_action_choice(source, source_colors, target_colors);
    }, true);
    return target && search_association_text(source,*target,query,SearchCandidateKind::TextRecord,"conversation");
}

// Immutable vocabulary is shared by every keyword row until rules reload.
// Only resolved name spellings are memoized; neither a menu nor an alias can
// change the RAW evidence which permits the shared name renderer to run.
struct ConversationKeywordLexicon {
    struct Node {
        std::unordered_map<unsigned char, size_t> next;
        std::vector<size_t> values;
    };
    using Trie = std::vector<Node>;
    struct NativeRoot { std::string source; uint8_t languages; };
    struct TemplateProbe { int rule; std::string anchor; };
    Trie fixed{1}, native{1}, english{1}, templates{1};
    std::vector<std::string> fixed_targets, english_sources;
    std::vector<NativeRoot> native_roots;
    std::vector<TemplateProbe> template_probes;
    mutable std::mutex resolved_mutex;
    mutable std::unordered_map<std::string, std::optional<std::string>> resolved;

    static void insert(Trie &trie, std::string_view key, size_t value) {
        size_t node = 0;
        for (unsigned char ch : key) {
            const auto [next, added] = trie[node].next.emplace(ch, trie.size());
            const size_t child = next->second;
            if (added) trie.emplace_back();
            node = child;
        }
        trie[node].values.push_back(value);
    }
    static std::string compact_literal(std::string_view source) {
        std::string result;
        for (unsigned char ch : source)
            if (!std::isspace(ch)) result.push_back(static_cast<char>(fold_ascii(ch)));
        return result;
    }
    static std::string search_spelling(std::string_view source) {
        std::string result;
        for (unsigned char ch : source) {
            // The game's 0x52cee0 fold precedes its a-z tokenizer. In
            // particular CP437 ae ligatures become a, not ae or a boundary.
            switch (ch) {
            case 0x80: case 0x87: ch = 'c'; break;
            case 0x81: case 0x96: case 0x97: case 0x9a: case 0xa3: ch = 'u'; break;
            case 0x82: case 0x88: case 0x89: case 0x8a: case 0x90: ch = 'e'; break;
            case 0x83: case 0x84: case 0x85: case 0x86: case 0x8e:
            case 0x8f: case 0x91: case 0x92: case 0xa0: ch = 'a'; break;
            case 0x8b: case 0x8c: case 0x8d: case 0xa1: ch = 'i'; break;
            case 0x93: case 0x94: case 0x95: case 0x99: case 0xa2: ch = 'o'; break;
            case 0x98: ch = 'y'; break;
            case 0xa4: case 0xa5: ch = 'n'; break;
            default: ch = fold_ascii(ch); break;
            }
            if (ch >= 'a' && ch <= 'z') result.push_back(static_cast<char>(ch));
            else if (!result.empty() && result.back() != ' ') result.push_back(' ');
        }
        if (!result.empty() && result.back() == ' ') result.pop_back();
        return result;
    }
};

std::optional<std::string> Overlay::translate_conversation_keywords(
        std::string_view raw_source, std::string_view bound_caption) const {
    const std::string source = lower(normalize_utterance(raw_source));
    if (source.empty()) return std::nullopt;
    const std::string selected_caption = normalize_utterance(bound_caption);
    // Distinct native choices may have the same deduplicated keyword vector.
    // A renderer which has bound the complete native record supplies its own
    // caption, and its translation must not share a cache entry with a sibling
    // choice or with the unbound search adapter.
    const std::string cache_key = selected_caption.empty()
        ? source : source + '\n' + selected_caption;
    std::shared_ptr<const ConversationChoices> snapshot;
    std::shared_ptr<const ConversationChoices> artifact_names;
    std::shared_ptr<const ConversationKeywordLexicon> lexicon;
    {
        std::lock_guard<std::mutex> lock(conversation_choices_mutex_);
        snapshot = conversation_choices_;
        artifact_names = conversation_artifact_names_;
        lexicon = conversation_keyword_lexicon_;
        if (const auto found = conversation_keyword_cache_.find(cache_key);
                found != conversation_keyword_cache_.end() &&
                (!found->second.naming_epoch || found->second.naming_epoch == draw_epoch_))
            return found->second.target;
    }
    bool live_caption = false;
    const auto remember = [&](std::optional<std::string> target) {
        std::lock_guard<std::mutex> lock(conversation_choices_mutex_);
        // No grammar runs under this mutex, and an older menu/dictionary
        // calculation must not fill the replacement snapshot's cache.
        if (conversation_choices_ != snapshot || conversation_artifact_names_ != artifact_names ||
                conversation_keyword_lexicon_ != lexicon)
            return target;
        if (conversation_keyword_cache_.size() >= 4096) conversation_keyword_cache_.clear();
        conversation_keyword_cache_.insert_or_assign(cache_key,
            ConversationKeywordTranslation{target, live_caption ? draw_epoch_ : 0});
        return target;
    };
    const auto complete_target = [](const std::optional<std::string> &target) {
        return target && !target->empty() &&
            std::none_of(target->begin(), target->end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
            });
    };
    const auto complete_name_target = [](const std::optional<std::string> &target,
                                         std::string_view original) {
        return translation_complete_with_native_nicknames(target, original);
    };

    // Keep the reviewed complete palette records authoritative.
    if (!ui_message_trie_.empty()) {
        const std::string record = "Keywords: " + source;
        int node = 0;
        for (unsigned char ch : record) {
            if (std::isspace(ch)) continue;
            const auto next = ui_message_trie_[node].next.find(ch);
            if (next == ui_message_trie_[node].next.end()) { node = -1; break; }
            node = next->second;
        }
        if (node >= 0 && ui_message_trie_[node].rule >= 0) {
            const Rule &rule = rules_[static_cast<size_t>(ui_message_trie_[node].rule)];
            std::string target;
            size_t codepoint = 0;
            bool complete = true;
            for (size_t at = 0; at < rule.target.size(); ++codepoint) {
                const auto decoded = decode_utf8_at(rule.target, at);
                if (!decoded || codepoint >= rule.help_target_palettes.size()) {
                    complete = false;
                    break;
                }
                if (rule.help_target_palettes[codepoint] >= 0)
                    target.append(rule.target, at, decoded->second);
                at += decoded->second;
            }
            if (complete && !target.empty()) return remember(target);
        }
    }
    if (const auto target = exact_literal_translation("Conversation keyword: " + source);
            complete_target(target)) return remember(target);

    // SPREAD_RUMOR's artifact branches first append artifact plus their
    // location/absence/destroyed word and the two native name spellings.
    // A missing holder/site/region can leave the caption vector empty. Read
    // that complete
    // bound artifact identity: the globally deduplicated keyword stream
    // cannot recover repeated title words or words equal to the fixed heads.
    // Both PE control flows and formatter calls are retained in the chooser
    // extraction. No title or participant is inferred from a clipped row.
    const std::array<std::string_view, 3> artifact_heads{
        "artifact location", "artifact absence", "artifact destroyed"};
    const auto artifact_head = std::find_if(artifact_heads.begin(), artifact_heads.end(),
        [&](std::string_view head) {
            return source == head || (source.starts_with(head) && source[head.size()] == ' ');
        });
    if (artifact_names && artifact_head != artifact_heads.end()) {
        std::optional<std::string> artifact_target;
        bool ambiguous = false;
        for (const auto &[native_keywords, identity] : *artifact_names) {
            if (lower(normalize_utterance(native_keywords)) != source || identity.empty()) continue;
            const std::string_view kind = artifact_head->substr(9);
            std::unordered_set<std::string_view> seen{"artifact", kind};
            std::string expected(*artifact_head);
            const std::string folded = ConversationKeywordLexicon::search_spelling(identity);
            for (size_t at = 0; at < folded.size();) {
                const size_t space = folded.find(' ', at);
                const size_t end = space == std::string::npos ? folded.size() : space;
                const std::string_view word(folded.data() + at, end - at);
                if (seen.emplace(word).second) {
                    expected.push_back(' ');
                    expected += word;
                }
                at = end == folded.size() ? end : end + 1;
            }
            if (expected != source) continue;
            const auto name = translate_legends_artifact_identity(identity);
            if (!complete_name_target(name, identity)) continue;
            const auto artifact = exact_literal_translation("Conversation keyword: artifact");
            const auto relation = exact_literal_translation("Conversation keyword: " + std::string(kind));
            if (!complete_target(artifact) || !complete_target(relation)) continue;
            const std::string target = *artifact + " " + *relation + " " + *name;
            if (artifact_target && *artifact_target != target) ambiguous = true;
            else if (!artifact_target) artifact_target = target;
        }
        if (artifact_target) {
            live_caption = true;
            return remember(ambiguous ? std::nullopt : std::move(artifact_target));
        }
    }

    if (!lexicon) {
        auto built = std::make_shared<ConversationKeywordLexicon>();
        constexpr std::string_view prefix = "conversation keyword: ";
        for (const auto &[key, target] : capture_translations_) {
            const std::string folded = lower(key);
            if (!folded.starts_with(prefix) || !complete_target(target)) continue;
            const std::string keyword = normalize_utterance(
                std::string_view(folded).substr(prefix.size()));
            if (keyword.empty()) continue;
            ConversationKeywordLexicon::insert(built->fixed, keyword, built->fixed_targets.size());
            built->fixed_targets.push_back(target);
        }
        // Retain every original CP437 spelling and language at a folded
        // terminal. Deaccenting is many-to-one, so overwriting a collision
        // would lose valid compounds in another native language.
        for (const auto &[raw, languages] : native_name_language_masks_) {
            const std::string key = ConversationKeywordLexicon::search_spelling(raw);
            if (key.empty()) continue;
            ConversationKeywordLexicon::insert(built->native, key, built->native_roots.size());
            built->native_roots.push_back({raw, languages});
        }
        std::unordered_set<std::string> english_forms;
        for (const auto &[word, meanings] : name_editor_word_forms_) english_forms.insert(word);
        for (const auto &[word, target] : procedural_terms_) english_forms.insert(word);
        for (const auto &raw : english_forms) {
            const std::string key = ConversationKeywordLexicon::search_spelling(raw);
            if (key.empty()) continue;
            ConversationKeywordLexicon::insert(built->english, key, built->english_sources.size());
            built->english_sources.push_back(raw);
        }
        for (int index : ui_message_template_rules_) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.template_literals.empty() ||
                std::none_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                    [](char kind) { return kind == 'p' || kind == 'e' || kind == 'n' ||
                        kind == 'b' || kind == 'i' || kind == 'r'; })) continue;
            std::string anchor;
            for (const auto &literal : rule.template_literals) {
                auto compact = ConversationKeywordLexicon::compact_literal(literal);
                if (compact.size() > anchor.size()) anchor = std::move(compact);
            }
            ConversationKeywordLexicon::insert(built->templates,
                ConversationKeywordLexicon::compact_literal(rule.template_literals.front()),
                built->template_probes.size());
            built->template_probes.push_back({index, std::move(anchor)});
        }
        std::lock_guard<std::mutex> lock(conversation_choices_mutex_);
        if (!conversation_keyword_lexicon_) conversation_keyword_lexicon_ = built;
        lexicon = conversation_keyword_lexicon_;
    }

    std::vector<std::string_view> words;
    std::vector<size_t> offsets;
    std::vector<size_t> word_ends(source.size() + 1, std::string::npos);
    for (size_t at = 0; at < source.size();) {
        const size_t next = source.find(' ', at);
        const size_t end = next == std::string::npos ? source.size() : next;
        offsets.push_back(at);
        words.emplace_back(source.data() + at, end - at);
        word_ends[end] = words.size();
        at = end == source.size() ? end : end + 1;
    }
    offsets.push_back(source.size());
    struct Edge { size_t end; std::string target; unsigned priority; };
    std::vector<std::vector<Edge>> edges(words.size());
    const auto add = [&](size_t begin, size_t end,
                         const std::optional<std::string> &target, unsigned priority,
                         std::string_view name_source = {}) {
        if (begin < end && (complete_target(target) ||
                (!name_source.empty() && complete_name_target(target, name_source))))
            edges[begin].push_back({end, *target, priority});
    };
    const auto solve = [&]() -> std::optional<std::string> {
        // Store only path decisions; concatenating every translated suffix
        // here would make even a dictionary-only row quadratic in length.
        std::vector<const Edge *> path(words.size() + 1);
        for (size_t begin = words.size(); begin-- > 0;)
            for (const auto &edge : edges[begin]) {
                if (edge.end != words.size() && !path[edge.end]) continue;
                if (!path[begin] || edge.priority > path[begin]->priority ||
                    (edge.priority == path[begin]->priority && edge.end > path[begin]->end))
                    path[begin] = &edge;
            }
        if (!path.front()) return std::nullopt;
        std::string result;
        for (size_t at = 0; at < words.size(); at = path[at]->end) {
            if (!result.empty()) result.push_back(' ');
            result += path[at]->target;
        }
        return result;
    };
    const auto scan = [&](const ConversationKeywordLexicon::Trie &trie, size_t start,
                          const auto &visit) {
        size_t node = 0;
        for (size_t at = start; at < source.size(); ++at) {
            const auto next = trie[node].next.find(static_cast<unsigned char>(source[at]));
            if (next == trie[node].next.end()) break;
            node = next->second;
            for (size_t value : trie[node].values) visit(at + 1, value);
        }
    };
    for (size_t begin = 0; begin < words.size(); ++begin)
        scan(lexicon->fixed, offsets[begin], [&](size_t end, size_t value) {
            if (word_ends[end] != std::string::npos)
                add(begin, word_ends[end], lexicon->fixed_targets[value], 30);
        });
    const auto emotion_caption = [](std::string_view caption) {
        return caption.starts_with("State feelings of ") ||
            caption.starts_with("State feelings, ") ||
            caption.starts_with("State minor feeling of ") ||
            caption.starts_with("Verbally struggle against ") ||
            caption.starts_with("Verbally struggle, ") ||
            caption.starts_with("Fail the struggle against ") ||
            caption.starts_with("Fail the internal struggle, ") ||
            caption.starts_with("Dismiss minor feeling of ") ||
            caption.starts_with("Dismiss minor doubts") ||
            caption.starts_with("Dismiss minor existential crisis") ||
            caption.starts_with("Acknowledge lack of ");
    };
    auto fixed_target = solve();
    const bool bound_emotion = snapshot && std::any_of(snapshot->begin(), snapshot->end(),
        [&](const auto &choice) {
            return lower(normalize_utterance(choice.second)) == source &&
                (selected_caption.empty() || normalize_utterance(choice.first) == selected_caption) &&
                emotion_caption(normalize_utterance(choice.first));
        });
    // Ordinary complete fixed rows keep their reviewed vocabulary. An
    // emotional choice must first try its bound caption: its native `great`
    // denotes intensity, while a different conversation uses `great` = good.
    if (fixed_target && !bound_emotion) return remember(std::move(fixed_target));

    // The chooser snapshot binds this exact native keyword vector to the
    // complete authored caption. Its event, skill, item and personal-name
    // fields are already typed by the caption's shared grammar. Use that
    // complete translation to represent its deduplicated search words once;
    // never reinterpret an event word as an unrelated RAW name. Keywords
    // outside the caption still need the scoped fixed vocabulary above.
    std::optional<std::string> bound_target;
    bool bound_emotion_translated = false, bound_ambiguous = false;
    if (snapshot) for (const auto &[raw_caption, keywords] : *snapshot) {
        if (lower(normalize_utterance(keywords)) != source) continue;
        const std::string caption = normalize_utterance(raw_caption);
        if (!selected_caption.empty() && caption != selected_caption) continue;
        // A bound caption can contain a native event or entity name. Keep
        // its translation only for this draw; fixed vocabulary stays cached.
        live_caption = true;
        auto target = translate_conversation_choice(caption);
        // A typed complete caption may preserve a player's native nickname.
        // Only its exact same-source quoted spelling grants that exemption;
        // fixed keyword edges still use the strict no-ASCII predicate.
        if (!translation_complete_with_native_nicknames(target, caption) && gps_) {
            std::vector<int> source_colors(caption.size(), 0xffffff), target_colors;
            target = translate_help_paragraph(caption, source_colors, target_colors, true);
        }
        if (!translation_complete_with_native_nicknames(target, caption)) continue;

        // This is the actual native search fold followed by its a-z word
        // boundaries, including CP437 ligatures and accent collisions. The
        // snapshot retains the original spelling needed by typed translation.
        const std::string folded_caption = ConversationKeywordLexicon::search_spelling(caption);
        std::unordered_set<std::string_view> caption_words;
        for (size_t at = 0; at < folded_caption.size();) {
            const size_t next = folded_caption.find(' ', at);
            const size_t end = next == std::string::npos ? folded_caption.size() : next;
            caption_words.emplace(folded_caption.data() + at, end - at);
            at = end == folded_caption.size() ? end : end + 1;
        }
        std::vector<bool> owned(words.size());
        bool represented = false;
        for (size_t at = 0; at < words.size(); ++at) {
            owned[at] = caption_words.contains(words[at]);
            represented = represented || owned[at];
        }
        if (!represented) continue;

        // A path covers every actual keyword. Caption-owned words can be
        // represented by the whole translation; all other words must form
        // complete fixed entries without crossing a caption field boundary.
        std::vector<size_t> next_word(words.size() + 1, std::string::npos);
        std::vector<const Edge *> fixed_path(words.size());
        next_word.back() = words.size();
        for (size_t begin = words.size(); begin-- > 0;) {
            if (owned[begin]) {
                if (next_word[begin + 1] != std::string::npos)
                    next_word[begin] = begin + 1;
                continue;
            }
            for (const auto &edge : edges[begin]) {
                if (next_word[edge.end] == std::string::npos ||
                    std::any_of(owned.begin() + begin, owned.begin() + edge.end,
                        [](bool value) { return value; })) continue;
                if (!fixed_path[begin] || edge.priority > fixed_path[begin]->priority ||
                    (edge.priority == fixed_path[begin]->priority && edge.end > fixed_path[begin]->end)) {
                    fixed_path[begin] = &edge;
                    next_word[begin] = edge.end;
                }
            }
        }
        if (next_word.front() == std::string::npos) continue;
        std::string result;
        bool caption_emitted = false;
        for (size_t at = 0; at < words.size(); at = next_word[at]) {
            const std::string *part = nullptr;
            if (owned[at]) {
                if (!caption_emitted) part = &*target;
                caption_emitted = true;
            } else part = &fixed_path[at]->target;
            if (!part) continue;
            if (!result.empty()) result.push_back(' ');
            result += *part;
        }
        // Equal keyword vectors can belong to distinct native choices. A
        // differing semantic result cannot be chosen by vector iteration order.
        if (bound_target && *bound_target != result) bound_ambiguous = true;
        else if (!bound_target) bound_target = std::move(result);
        bound_emotion_translated = bound_emotion_translated || emotion_caption(caption);
    }
    if (bound_target && (!fixed_target || bound_emotion_translated)) {
        if (bound_ambiguous) return remember(std::nullopt);
        return remember(std::move(bound_target));
    }
    if (fixed_target) return remember(std::move(fixed_target));

    size_t fixed_prefix_end = 0;
    while (fixed_prefix_end < words.size()) {
        size_t next = fixed_prefix_end;
        for (const auto &edge : edges[fixed_prefix_end]) next = std::max(next, edge.end);
        if (next == fixed_prefix_end) break;
        fixed_prefix_end = next;
    }

    const auto connector = [](std::string_view word) {
        return word == "the" || word == "of" || word == "and" || word == "in" ||
            word == "with" || word == "a" || word == "an" || word == "for" ||
            word == "to" || word == "from";
    };
    std::unordered_map<std::string, std::optional<std::string>> caption_names;
    std::unordered_map<std::string, std::string> caption_name_sources;
    std::unordered_map<std::string, std::optional<std::string>> caption_slots;
    std::unordered_set<std::string> whole_caption_names;
    const auto add_caption_name = [&](std::string_view raw,
                                     const std::optional<std::string> &target, bool whole) {
        if (!complete_name_target(target, raw)) return;
        const std::string key = ConversationKeywordLexicon::search_spelling(raw);
        if (key.empty()) return;
        const auto [found, added] = caption_names.emplace(key, target);
        if (added) caption_name_sources.emplace(key, raw);
        if (!added && found->second != target) found->second.reset();
        if (whole) whole_caption_names.insert(key);
    };
    if (snapshot) for (const auto &[raw_caption, keywords] : *snapshot) {
        if (lower(normalize_utterance(keywords)) != source) continue;
        const std::string caption = normalize_utterance(raw_caption);
        if (!selected_caption.empty() && caption != selected_caption) continue;
        const std::string compact = ConversationKeywordLexicon::compact_literal(caption);
        const auto probe = [&](size_t value) {
            const auto &candidate = lexicon->template_probes[value];
            if (compact.find(candidate.anchor) == std::string::npos) return;
            const Rule &rule = rules_[static_cast<size_t>(candidate.rule)];
            std::vector<std::string> captures;
            std::vector<std::pair<size_t, size_t>> ranges;
            if (!match_catalog_template(rule, caption, 0, captures, ranges)) return;
            // A syntactic split alone does not establish a name boundary.
            // In an ascension caption, a greedy ordinary-term slot can eat
            // `of The Denomination`, leaving only `Books` as the name. If
            // that unvalidated suffix becomes a hard boundary, the real
            // English alias's `of` loses its following noun and cannot be
            // covered. Validate ordinary slots through the shared semantic
            // capture parser before trusting any name from this production.
            for (size_t i = 0; i < captures.size(); ++i) {
                if (rule.template_kinds[i] != 's') continue;
                const std::string slot_key = std::string(catalog_scoped_term_capture(rule, i)
                    ? "s:term:" : "s:ui:") + captures[i];
                auto [slot, inserted] = caption_slots.try_emplace(slot_key);
                if (inserted) slot->second = translate_ui_catalog_capture(rule, i, captures[i]);
                if (!complete_target(slot->second)) return;
            }
            // The complete authored template supplies the name type. Resolve
            // that exact field once through the existing typed semantics;
            // never infer an unknown name from the keyword stream itself.
            for (size_t i = 0; i < captures.size(); ++i) {
                const char kind = rule.template_kinds[i];
                if (kind != 'p' && kind != 'e' && kind != 'n' &&
                        kind != 'b' && kind != 'i' && kind != 'r') continue;
                const std::string slot_key = std::string(1, kind) + captures[i];
                auto [slot, inserted] = caption_slots.try_emplace(slot_key);
                if (inserted) {
                    if (kind == 'p') slot->second = translate_legends_name(captures[i], true);
                    else if (kind == 'e') slot->second = translate_legends_name(captures[i], false);
                    else if (kind == 'b') {
                        slot->second = translate_legends_artifact_identity(captures[i]);
                        if (!slot->second) slot->second = translate_legends_book(captures[i]);
                    } else if (kind == 'i') slot->second = translate_announcement_items(captures[i]);
                    else if (kind == 'r') slot->second = translate_deity_spheres(captures[i]);
                    else slot->second = translate_ui_message_capture(captures[i], true);
                }
                if (!complete_name_target(slot->second, captures[i])) continue;
                add_caption_name(captures[i], slot->second, true);
                // A complete book, item or sphere is one semantic field.
                // Its component nouns cannot acquire personal-name rules.
                if (kind == 'b' || kind == 'i' || kind == 'r') continue;
                // Global native deduplication can remove a repeated given
                // name from a later field. Its surviving components remain
                // proven only by this successfully translated whole slot.
                // Keep original punctuation/CP437 and translate each whole
                // source component; never split an unknown letter sequence.
                std::istringstream input(captures[i]);
                std::vector<std::string> components;
                for (std::string component; input >> component;)
                    components.push_back(std::move(component));
                // ELF a10320 / 1c428e0 put a complete creature/identity in
                // these chooser fields. Its given name is still a person
                // even when the keyword vector interleaves its native and
                // English surnames (e.g. `the goblin Song Clashhate`).
                // Resolve the complete role before assigning that boundary;
                // the article and caste cannot become personal-name words.
                size_t given_component = kind == 'p' ? 0 : components.size();
                if (kind == 'n' && !components.empty()) {
                    const size_t role_begin = components.front() == "the" ||
                        components.front() == "The" || components.front() == "a" ||
                        components.front() == "an" ? 1 : 0;
                    if (role_begin == 0 &&
                            native_name_language_masks_.contains(lower_native_name(components.front())))
                        given_component = 0;
                    for (size_t end = components.size(); end-- > role_begin + 1;) {
                        std::string role, name;
                        for (size_t part = role_begin; part < end; ++part) {
                            if (!role.empty()) role.push_back(' ');
                            role += components[part];
                        }
                        for (size_t part = end; part < components.size(); ++part) {
                            if (!name.empty()) name.push_back(' ');
                            name += components[part];
                        }
                        if (!generated_title_shape(name)) continue;
                        auto translated_role = translate_unit_profession(role, false);
                        if (!complete_target(translated_role))
                            translated_role = translate_creature_descriptor(role, true);
                        if (complete_target(translated_role)) {
                            given_component = end;
                            break;
                        }
                    }
                }
                uint8_t native_languages = 0xff;
                for (const auto &component : components) {
                    const std::string folded = lower_native_name(component);
                    uint8_t languages = 0;
                    if (const auto known = native_name_language_masks_.find(folded);
                            known != native_name_language_masks_.end()) languages |= known->second;
                    for (size_t split = 1; split < folded.size(); ++split) {
                        const auto front = native_name_language_masks_.find(folded.substr(0, split));
                        const auto rear = native_name_language_masks_.find(folded.substr(split));
                        if (front != native_name_language_masks_.end() &&
                            rear != native_name_language_masks_.end())
                            languages |= front->second & rear->second;
                    }
                    native_languages &= languages;
                    if (!native_languages) break;
                }
                const bool native_field = components.size() > 1 && native_languages != 0;
                for (size_t component_index = 0; component_index < components.size(); ++component_index) {
                    const auto &component = components[component_index];
                    if (connector(lower(component))) continue;
                    const unsigned char first = static_cast<unsigned char>(component.front());
                    if (!((first >= 'A' && first <= 'Z') || is_cp437_latin_letter_byte(first)) ||
                        !std::all_of(component.begin(), component.end(), [](unsigned char ch) {
                            return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                                is_cp437_latin_letter_byte(ch) || ch == '\'' || ch == '-';
                        })) continue;
                    const std::string component_key =
                        std::string(1, native_field ? 'N' :
                            (component_index == given_component ? 'p' : 'e')) + component;
                    auto [part, fresh] = caption_slots.try_emplace(component_key);
                    if (fresh) part->second = native_field
                        ? translate_procedural_fragment(component, true)
                        : translate_legends_name(component, component_index == given_component);
                    add_caption_name(component, part->second, false);
                }
            }
        };
        size_t node = 0;
        for (size_t value : lexicon->templates[node].values) probe(value);
        for (unsigned char ch : compact) {
            const auto next = lexicon->templates[node].next.find(ch);
            if (next == lexicon->templates[node].next.end()) break;
            node = next->second;
            for (size_t value : lexicon->templates[node].values) probe(value);
        }
    }
    // Whole fields may include apostrophes which the native tokenizer split.
    // Search the few captured fields directly, at complete token boundaries.
    std::vector<bool> name_boundaries(words.size() + 1);
    for (const auto &[key, target] : caption_names) {
        if (!target) continue;
        for (size_t at = source.find(key); at != std::string::npos; at = source.find(key, at + 1)) {
            const size_t end = at + key.size();
            if ((at && source[at - 1] != ' ') || word_ends[end] == std::string::npos) continue;
            const auto begin = std::lower_bound(offsets.begin(), offsets.end(), at);
            if (begin != offsets.end() && *begin == at) {
                const size_t first = static_cast<size_t>(begin - offsets.begin());
                const bool whole = whole_caption_names.contains(key);
                add(first, word_ends[end], target, whole ? 40 : 35,
                    caption_name_sources.at(key));
                if (whole) name_boundaries[first] = name_boundaries[word_ends[end]] = true;
            }
        }
    }
    if (auto target = solve()) return remember(std::move(target));

    const auto title = [](std::string value) {
        bool initial = true;
        for (char &ch : value) {
            if (initial && ch >= 'a' && ch <= 'z') ch -= 'a' - 'A';
            initial = ch == ' ';
        }
        return value;
    };
    const auto resolve = [&](std::string name, bool native) {
        const std::string key = std::string(1, native ? 'n' : 'e') + name;
        {
            std::lock_guard<std::mutex> lock(lexicon->resolved_mutex);
            if (const auto found = lexicon->resolved.find(key); found != lexicon->resolved.end())
                return found->second;
        }
        const std::string original = title(name);
        auto target = native ? translate_procedural_fragment(original, true)
                             : translate_legends_name(original, false);
        if (!complete_name_target(target, original)) target.reset();
        {
            std::lock_guard<std::mutex> lock(lexicon->resolved_mutex);
            if (lexicon->resolved.size() >= 8192) lexicon->resolved.clear();
            lexicon->resolved.emplace(key, target);
        }
        return target;
    };
    struct NativeAtom { std::string source; uint8_t languages; };
    std::vector<std::vector<NativeAtom>> native_atoms(words.size());
    std::vector<bool> english_atoms(words.size());
    // Each walk consumes one complete RAW root or exactly two joined roots.
    // Punctuation inside a root can span search words, but a second root
    // starts only inside the same native word, never across an alias gap.
    for (size_t begin = 0; begin < words.size(); ++begin) {
        const auto native_part = [&](size_t end, std::string name, uint8_t languages) {
            const size_t last = word_ends[end];
            if (last == std::string::npos) return;
            const auto target = resolve(name, true);
            add(begin, last, target, 10, title(name));
            if (last == begin + 1 && target)
                native_atoms[begin].push_back({std::move(name), languages});
        };
        scan(lexicon->native, offsets[begin], [&](size_t middle, size_t first) {
            const auto &a = lexicon->native_roots[first];
            native_part(middle, a.source, a.languages);
            if (middle == source.size() || source[middle] == ' ') return;
            scan(lexicon->native, middle, [&](size_t end, size_t second) {
                const auto &b = lexicon->native_roots[second];
                const uint8_t common = a.languages & b.languages;
                if (common) native_part(end, a.source + b.source, common);
            });
        });
        const auto english_part = [&](size_t end, const std::string &name) {
            const size_t last = word_ends[end];
            if (last == std::string::npos) return;
            const auto target = resolve(name, false);
            add(begin, last, target, 10, title(name));
            if (last == begin + 1 && target) english_atoms[begin] = true;
        };
        scan(lexicon->english, offsets[begin], [&](size_t middle, size_t first) {
            const auto &a = lexicon->english_sources[first];
            english_part(middle, a);
            if (middle == source.size() || source[middle] == ' ') return;
            scan(lexicon->english, middle, [&](size_t end, size_t second) {
                english_part(end, a + lexicon->english_sources[second]);
            });
        });
    }
    // Native words are independent search terms after global deduplication.
    // Prefer an intact common-language run where available, then keep its
    // atom edges as the complete fallback for interleaved/deduplicated names.
    std::vector<bool> native_owned(words.size());
    for (size_t begin = fixed_prefix_end; begin < words.size();) {
        if (native_atoms[begin].empty() || english_atoms[begin]) { ++begin; continue; }
        size_t last = begin;
        uint8_t common = 0xff;
        for (; last < words.size() && !native_atoms[last].empty(); ++last) {
            if (last > begin && name_boundaries[last]) break;
            uint8_t languages = 0;
            for (const auto &atom : native_atoms[last]) languages |= atom.languages;
            if (!(common & languages)) break;
            common &= languages;
        }
        if (last > begin + 1) for (size_t bit = 0; bit < 4; ++bit) {
            const uint8_t language = static_cast<uint8_t>(1u << bit);
            if (!(common & language)) continue;
            std::string name;
            for (size_t at = begin; at < last; ++at) {
                const auto atom = std::find_if(native_atoms[at].begin(), native_atoms[at].end(),
                    [&](const NativeAtom &value) { return (value.languages & language) != 0; });
                if (!name.empty()) name.push_back(' ');
                name += atom->source;
            }
            const auto target = resolve(name, true);
            add(begin, last, target, 25, title(name));
            if (target) for (size_t at = begin; at < last; ++at) native_owned[at] = true;
        }
        begin = std::max(begin + 1, last);
    }
    // English aliases end at lexical field boundaries. Parse each maximal
    // proven run once, retaining normal article/epithet casing. No suffix
    // interval is tried as another whole title.
    for (size_t begin = fixed_prefix_end; begin < words.size();) {
        if (native_owned[begin] || (!english_atoms[begin] && words[begin] != "the")) {
            ++begin;
            continue;
        }
        size_t last = begin;
        while (last < words.size() && !native_owned[last] &&
               (last == begin || !name_boundaries[last]) &&
               (english_atoms[last] || connector(words[last]))) ++last;
        size_t end = last;
        while (end > begin && connector(words[end - 1])) --end;
        if (end > begin + 1) {
            std::string name;
            for (size_t at = begin; at < end; ++at) {
                if (!name.empty()) name.push_back(' ');
                std::string word(words[at]);
                if ((!connector(word) || (at == begin && word == "the") ||
                    (word == "the" && at > begin && words[at - 1] == "of")) &&
                    word.front() >= 'a' && word.front() <= 'z') word.front() -= 'a' - 'A';
                name += word;
            }
            const std::string key = "g" + name;
            std::optional<std::string> target;
            bool cached = false;
            {
                std::lock_guard<std::mutex> lock(lexicon->resolved_mutex);
                const auto found = lexicon->resolved.find(key);
                if (found != lexicon->resolved.end()) { target = found->second; cached = true; }
            }
            if (!cached) {
                target = translate_legends_name(name, false);
                if (!complete_name_target(target, name)) target.reset();
                std::lock_guard<std::mutex> lock(lexicon->resolved_mutex);
                if (lexicon->resolved.size() >= 8192) lexicon->resolved.clear();
                lexicon->resolved.emplace(key, target);
            }
            add(begin, end, target, 20, name);
        }
        begin = std::max(begin + 1, end);
    }
    // A successful path covers every actual source word. Missing aliases
    // never justify dropping words, inventing deduplicated words, or returning
    // a translated prefix with an untranslated remainder.
    return remember(solve());
}
bool Overlay::translated_conversation_keywords_match(std::string_view keywords,
                                                     std::string_view query) const {
    TranslationStateScope translation_scope;
    if (!translation_enabled()) return false;
    if (translated_search_query(query).literal.empty()) return false;
    if (search_association_text(keywords,{},query,SearchCandidateKind::TextRecord,"conversation")) return true;
    const auto translated = translate_conversation_keywords(keywords);
    if (translated) return search_association_text(keywords,*translated,query,SearchCandidateKind::TextRecord,"conversation");
    // Native ranking searches a deduplicated keyword vector. Two different
    // choice captions may legitimately own that same vector; Chinese search
    // must retain both proven meanings rather than let the ambiguity veto
    // every result. Keep the selected caption separate in the translator's
    // cache, just as the visible chooser does for a bound native record.
    std::shared_ptr<const ConversationChoices> snapshot;
    {
        std::lock_guard<std::mutex> lock(conversation_choices_mutex_);
        snapshot = conversation_choices_;
    }
    if (!snapshot) return false;
    const std::string source = lower(normalize_utterance(keywords));
    for (const auto &[caption, native_keywords] : *snapshot) {
        if (lower(normalize_utterance(native_keywords)) != source) continue;
        const auto target = translate_conversation_keywords(keywords, caption);
        if (target && search_association_text(keywords,*target,query,SearchCandidateKind::TextRecord,"conversation")) return true;
    }
    return false;
}
