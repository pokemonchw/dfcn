// Captured TEXT_SET tokens are atomic grammar slots. Their complete wrapper
// header survives a delegated body production or an incomplete token capture.
// Older records retain the exact native speaker-formatter compatibility path.
std::optional<std::string> Overlay::compose_native_announcement_log_speech(
        const NativeAnnouncementLogDocument &document, std::string_view source,
        int foreground, std::vector<int> &target_colors) const {
    target_colors.clear();
    const auto &owned = document.speech;
    if (!owned || owned->source != document.report.source ||
            source != native_announcement_display_source(owned->source)) {
        // Old reports retain the speaker's real unit ID, even when the
        // wrapper/token hook did not witness their production. The same
        // native formatter can prove one complete header when the entire
        // saved NPC report has one ASCII colon. Colon-bearing names/bodies
        // keep the complete compatibility grammar instead of a guessed split.
        if (source != native_announcement_display_source(document.report.source))
            return std::nullopt;
        const auto &header = document.speech_header;
        if (!header || header->body_offset > document.report.source.size()) return std::nullopt;
        auto speaker = header->player ? exact_literal_translation("you") :
            header->speaker ? translate_native_unit_identity(*header->speaker) : std::nullopt;
        if (!speaker || speaker->empty()) return std::nullopt;
        const auto body = native_announcement_display_source(
            std::string_view(document.report.source).substr(header->body_offset));
        std::string target = *speaker + "：";
        if (!body.empty()) {
            NativeAnnouncementUnitBodyScope semantic_body(source, body);
            auto translated = translate_spoken_dialogue_body(body);
            if (!translated || translated->empty()) return std::nullopt;
            target += *translated;
        }
        translation_work_step(0);
        for (const unsigned char ch : target)
            if ((ch & 0xc0) != 0x80) target_colors.push_back(foreground);
        return target;
    }
    const auto &speech = *owned;
    const auto header = trim_view(speech.header_source);
    std::string heading;
    if (!header.empty()) {
        if (!header.ends_with(':')) return std::nullopt;
        const auto actor = [&](const std::optional<NativeUnitIdentity> &identity,
                std::string_view caption) -> std::optional<std::string> {
            // Only the formatter snapshot whose complete source rebuilt this
            // heading owns its selected appearance/role/title. A generic Full
            // snapshot is not the movement-reference caption used by speech.
            if (speech.header_complete && identity)
                if (auto target = translate_native_unit_identity(*identity)) return target;
            return translate_announcement_speech_actor(caption);
        };
        std::optional<std::string> speaker, recipient;
        bool addressed = speech.addressed;
        if (speech.header_complete) {
            speaker = speech.player ? exact_literal_translation("you")
                : actor(speech.speaker_caption_identity, speech.speaker_source);
            if (addressed)
                recipient = speech.recipient_source.empty()
                    ? exact_literal_translation("Announcement speech: unnamed recipient")
                    : actor(speech.recipient_caption_identity, speech.recipient_source);
        } else {
            // Historical-figure and uncaptured formatter branches retain the
            // complete compatibility grammar, bounded by the wrapper's known
            // header/body boundary rather than a colon in the body.
            const size_t to = header.find(" (to ");
            const auto caption = header.substr(0,
                to == std::string_view::npos ? header.size() - 1 : to);
            speaker = translate_announcement_speech_actor(caption);
            addressed = to != std::string_view::npos;
            if (addressed) {
                if (!header.ends_with("):")) return std::nullopt;
                const auto recipient_caption = header.substr(to + 5, header.size() - to - 7);
                recipient = recipient_caption.empty()
                    ? exact_literal_translation("Announcement speech: unnamed recipient")
                    : translate_announcement_speech_actor(recipient_caption);
            }
        }
        if (!speaker || speaker->empty() || (addressed && (!recipient || recipient->empty())))
            return std::nullopt;
        heading = *speaker + (addressed ? "（对" + *recipient + "）" : "") + "：";
    }
    const auto compose_tokens = [&]() -> std::optional<std::string> {
    if (!speech.tokens_complete) return std::nullopt;
    constexpr uint16_t slot_symbol = 256;

    struct SpeechNode {
        std::unordered_map<uint16_t, size_t> next;
        std::vector<int> rules;
    };
    struct SpeechIndex {
        const Overlay *owner = nullptr;
        uint64_t catalog = 0;
        uint64_t resources = 0;
        std::vector<SpeechNode> nodes;
    };
    static const unsigned char speech_index_tag = 0;
    auto &index = domain_cache<SpeechIndex>(&speech_index_tag);
    const auto catalog = native_identity_translation_catalog_generation();
    const auto resources = RULESETS.resource_revision();
    const auto append_literal = [](auto &&emit, std::string_view text) {
        for (const unsigned char ch : text)
            if (!native_prose_space(ch)) emit(static_cast<uint16_t>(fold_ascii(ch)));
    };
    if (index.owner != this || index.catalog != catalog || index.resources != resources ||
            index.nodes.empty()) {
        SpeechIndex next;
        next.owner = this; next.catalog = catalog; next.resources = resources;
        next.nodes.emplace_back();
        for (size_t ri = 0; ri < rules_.size(); ++ri) {
            const auto &rule = rules_[ri];
            if (!rule.spoken_dialogue || rule.target.empty() ||
                    (!rule.template_kinds.empty() &&
                     rule.template_literals.size() != rule.template_kinds.size() + 1)) continue;
            size_t node = 0;
            const auto emit = [&](uint16_t symbol) {
                auto found = next.nodes[node].next.find(symbol);
                if (found == next.nodes[node].next.end()) {
                    const size_t child = next.nodes.size();
                    next.nodes[node].next.emplace(symbol, child);
                    next.nodes.emplace_back();
                    node = child;
                } else node = found->second;
            };
            if (rule.template_kinds.empty()) append_literal(emit, rule.source);
            else for (size_t part = 0; part < rule.template_literals.size(); ++part) {
                append_literal(emit, rule.template_literals[part]);
                if (part < rule.template_kinds.size()) emit(slot_symbol);
            }
            if (node) next.nodes[node].rules.push_back(static_cast<int>(ri));
        }
        index = std::move(next);
    }

    enum class Field { Person, Place, Number, Sphere, Term, Creature, Artifact, Unknown };
    struct BoundField {
        const NativeAnnouncementLogSpeechToken *token = nullptr;
        Field kind = Field::Unknown;
        std::optional<std::string> target;
    };
    std::vector<BoundField> fields;
    std::vector<uint16_t> input;
    std::vector<size_t> slot_counts{0};
    const auto emit = [&](uint16_t symbol) {
        input.push_back(symbol);
        slot_counts.push_back(slot_counts.back() + (symbol == slot_symbol));
    };
    std::vector<const NativeAnnouncementLogSpeechToken *> tokens;
    tokens.reserve(speech.tokens.size());
    for (const auto &token : speech.tokens) tokens.push_back(&token);
    std::sort(tokens.begin(), tokens.end(), [](const auto *left, const auto *right) {
        return left->template_offset < right->template_offset;
    });
    const auto identity_target = [&](const NativeUnitIdentity &original,
            std::string_view captured, bool name_only) -> std::optional<std::string> {
        auto identity = original;
        if (name_only) {
            identity.form = NativeUnitIdentityForm::NameOnly;
            identity.native_name.assign(captured);
            if (identity.name.uses_native_pronunciation()) identity.english_name = false;
        }
        return translate_native_unit_identity(identity);
    };
    const auto render_field = [&](BoundField &field) -> std::optional<std::string> {
        const auto &token = *field.token;
        const auto key = std::string_view(token.token);
        const auto value = trim_view(token.source);
        if (field.kind == Field::Number) {
            if (const auto number = speech.parameters.find("number");
                    number != speech.parameters.end()) return std::to_string(number->second);
            return translate_announcement_number(value);
        }
        const std::optional<NativeUnitIdentity> *person = nullptr;
        if (key.starts_with("[SPEAKER:") && key.find(":HF_LINK:") == std::string_view::npos)
            person = &speech.speaker_identity;
        else if (key.starts_with("[AUDIENCE:") && key.find(":HF_LINK:") == std::string_view::npos)
            person = &speech.recipient_identity;
        if (field.kind == Field::Person && person && *person) {
            if (key.ends_with(":FIRST_NAME]")) {
                const auto &name = (**person).name;
                if (name.first_name.empty()) return std::nullopt;
                return name.uses_native_pronunciation() ? transliterate_native_language_word(name.first_name)
                    : native_text_to_utf8(name.first_name);
            }
            return identity_target(**person, value, true);
        }
        if (value.empty()) return std::nullopt;
        // These are already bounded native fields. Their existing individual
        // identity/vocabulary renderers never have to discover a clause split.
        switch (field.kind) {
        case Field::Person: return translate_legends_actor(value, 0, true);
        case Field::Place: return translate_legends_name(value, false);
        case Field::Sphere: return translate_deity_spheres(value);
        case Field::Creature: {
            if (auto target = translate_creature_label(value, nullptr, true)) return target;
            return translate_legends_term(normalize_utterance(value));
        }
        case Field::Artifact: return translate_legends_artifact_identity(value);
        case Field::Term: {
            if (auto literal = exact_literal_translation(value)) return literal;
            if (key == "[CONTEXT:UNIT_NAME]") return translate_unit_profession(value, false);
            return translate_legends_term(normalize_utterance(value));
        }
        default: return std::nullopt;
        }
    };
    size_t cursor = 0;
    for (const auto *token : tokens) {
        if (!token->template_length || token->template_offset < cursor ||
                token->template_offset > speech.original_body.size() ||
                token->template_length > speech.original_body.size() - token->template_offset ||
                std::string_view(speech.original_body).substr(token->template_offset,
                    token->template_length) != token->token ||
                token->offset > speech.expanded_body.size() ||
                token->length > speech.expanded_body.size() - token->offset ||
                std::string_view(speech.expanded_body).substr(token->offset, token->length) != token->source)
            return std::nullopt;
        append_literal(emit, std::string_view(speech.original_body).substr(
            cursor, token->template_offset - cursor));
        const std::string_view key = token->token;
        Field kind = Field::Unknown;
        if (key == "[CONTEXT:NUMBER]") kind = Field::Number;
        else if (key.find("SPHERE") != std::string_view::npos) kind = Field::Sphere;
        else if (key.find("FAMILY_RELATIONSHIP") != std::string_view::npos) {
            // English cousin/uncle labels do not prove the Chinese family
            // path. A separate owned genealogy field is required for these.
            return std::nullopt;
        } else if (key.find(":ARTIFACT:") != std::string_view::npos) kind = Field::Artifact;
        else if (key.find(":RACE") != std::string_view::npos) kind = Field::Creature;
        else if (key == "[CONTEXT:UNIT_NAME]") kind = Field::Term;
        else if (key.find("HIST_FIG:TRANS_NAME") != std::string_view::npos ||
                key.ends_with(":FIRST_NAME]") ||
                ((key.starts_with("[SPEAKER:") || key.starts_with("[AUDIENCE:")) &&
                 key.find(":HF_LINK:") == std::string_view::npos && key.ends_with(":TRANS_NAME]")) ||
                key.find(":DEITY:TRANS_NAME]") != std::string_view::npos) kind = Field::Person;
        else if (key.ends_with(":TRANS_NAME]")) kind = Field::Place;
        // Closed native pronouns and the native ordinal word select literal
        // D productions. They remain one proved token, never a text boundary
        // inferred by searching the expanded sentence.
        const bool literal_token = key.ends_with(":PRO_SUB]") || key.ends_with(":PRO_OBJ]") ||
            key.ends_with(":POS_PRO]") || key == "[CONTEXT:ORDINAL]";
        if (literal_token) append_literal(emit, token->source);
        else {
            // Bind only the frozen slot identity here. Unsupported raw
            // productions must fail the structural pass without first
            // translating every name/item and repeating that work in the
            // complete compatibility parser.
            fields.push_back({token, kind, {}});
            emit(slot_symbol);
        }
        cursor = token->template_offset + token->template_length;
    }
    append_literal(emit, std::string_view(speech.original_body).substr(cursor));

    const auto compatible = [](char kind, Field field) {
        switch (kind) {
        case 'p': case 'n': return field == Field::Person;
        case 'e': return field == Field::Place;
        case 'u': case 'd': case 'c': return field == Field::Number;
        case 'r': return field == Field::Sphere;
        case 'b': case 'i': return field == Field::Artifact;
        case 's': return field == Field::Term || field == Field::Creature || field == Field::Place;
        default: return false;
        }
    };
    struct Choice { int rule = -1; size_t end = 0; };
    std::vector<Choice> choices(input.size() + 1);
    choices.back().rule = -2;
    // Dynamic programming joins complete reviewed TEXT_SET productions over
    // the original template stream. A replacement is one symbol, including
    // names containing periods or additional native-looking punctuation.
    for (size_t start = input.size(); start-- > 0;) {
        size_t node = 0;
        for (size_t end = start; end < input.size(); ++end) {
            const auto next = index.nodes[node].next.find(input[end]);
            if (next == index.nodes[node].next.end()) break;
            node = next->second;
            if (choices[end + 1].rule == -1) continue;
            for (const int ri : index.nodes[node].rules) {
                const auto &rule = rules_[static_cast<size_t>(ri)];
                const size_t first = slot_counts[start], count = slot_counts[end + 1] - first;
                if (rule.template_kinds.size() != count) continue;
                bool valid = true;
                for (size_t at = 0; at < count; ++at)
                    if (!compatible(rule.template_kinds[at], fields[first + at].kind)) {
                        valid = false; break;
                    }
                if (valid) { choices[start] = {ri, end + 1}; break; }
            }
        }
    }
    if (!input.empty() && choices.front().rule < 0) return std::nullopt;

    std::string result;
    std::vector<int> colors;
    const auto append = [&](std::string_view text, int rgb) {
        result.append(text);
        for (const unsigned char ch : text)
            if ((ch & 0xc0) != 0x80) colors.push_back(rgb);
    };
    append(heading, foreground);
    // The complete original template and header are now accepted. Render
    // each winning native field once, sharing only exact token/value pairs
    // within this one immutable speech snapshot. No result can cross report
    // ownership, native parameter values or a resource-generation boundary.
    std::unordered_map<std::string, std::optional<std::string>> rendered_fields;
    for (auto &field : fields) {
        std::string key;
        const auto value = [&](const auto &input) {
            key.append(reinterpret_cast<const char *>(&input), sizeof(input));
        };
        value(field.kind);
        value(field.token->token.size()); key.append(field.token->token);
        value(field.token->source.size()); key.append(field.token->source);
        const auto found = rendered_fields.find(key);
        if (found != rendered_fields.end()) field.target = found->second;
        else {
            field.target = render_field(field);
            rendered_fields.emplace(std::move(key), field.target);
        }
        if (!field.target || field.target->empty()) return std::nullopt;
    }
    for (size_t start = 0; start < input.size();) {
        const auto choice = choices[start];
        if (choice.rule < 0 || choice.end <= start) return std::nullopt;
        const auto &rule = rules_[static_cast<size_t>(choice.rule)];
        const size_t first_field = slot_counts[start];
        size_t cp = 0, capture = 0;
        for (size_t byte = 0; byte < rule.target.size();) {
            if (!rule.help_target_palettes.empty() && cp >= rule.help_target_palettes.size()) return std::nullopt;
            const int palette = rule.help_target_palettes.empty() ? -1 : rule.help_target_palettes[cp];
            const int rgb = palette >= 0 && palette < 16 && gps_
                ? (gps_->uccolor[palette][0] << 16) | (gps_->uccolor[palette][1] << 8) |
                    gps_->uccolor[palette][2] : foreground;
            if (!rule.template_kinds.empty() && rule.target[byte] == '{') {
                const size_t close = rule.target.find('}', byte);
                if (close == std::string::npos || capture >= rule.target_capture_order.size()) return std::nullopt;
                const size_t field = rule.target_capture_order[capture++];
                if (field >= rule.template_kinds.size() || first_field + field >= fields.size()) return std::nullopt;
                append(*fields[first_field + field].target, rgb);
                cp += close + 1 - byte; byte = close + 1;
            } else {
                const size_t begin = byte++;
                while (byte < rule.target.size() &&
                        (static_cast<unsigned char>(rule.target[byte]) & 0xc0) == 0x80) ++byte;
                append(std::string_view(rule.target).substr(begin, byte - begin), rgb);
                ++cp;
            }
        }
        if (capture != rule.target_capture_order.size()) return std::nullopt;
        start = choice.end;
    }
    if (result.empty()) return std::nullopt;
    target_colors = std::move(colors);
    return result;
    };
    auto result = compose_tokens();
    if (!result) {
        // A native topic may append a reaction or delegated sentence outside
        // TEXT_SET, or a token supplier may have been unavailable. Its complete
        // expanded body is still owned and must not discard the captured
        // speaker/addressee merely because the token trie has no production.
        const auto body = native_announcement_display_source(speech.expanded_body);
        std::string translated_body;
        if (!body.empty()) {
            NativeAnnouncementUnitBodyScope semantic_body(source, body);
            const auto translated = translate_spoken_dialogue_body(body);
            if (!translated || translated->empty()) return std::nullopt;
            translated_body = *translated;
        }
        result = heading + translated_body;
        if (result->empty()) return std::nullopt;
        target_colors.clear();
        for (const unsigned char ch : *result)
            if ((ch & 0xc0) != 0x80) target_colors.push_back(foreground);
    }
    // 685380 transforms a copy of expanded_body. Only the observed native
    // transform establishes this voice; repeated letters are never guessed.
    if (speech.rendered_body != speech.expanded_body) {
        const auto voice = exact_literal_translation("Announcement speech: lisp");
        if (!voice) return std::nullopt;
        *result += *voice;
        for (const unsigned char ch : *voice)
            if ((ch & 0xc0) != 0x80) target_colors.push_back(foreground);
    }
    return result;
}
