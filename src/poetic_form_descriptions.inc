// Native art-form prose has generator-owned clauses and opaque proper-name
// fields. Punctuation inside those fields is never a sentence boundary.
struct FormDescriptionText {
    std::string text;
    std::vector<size_t> origins;
};

static FormDescriptionText normalize_form_description(std::string_view raw) {
    FormDescriptionText normalized;
    std::optional<size_t> space;
    for (size_t at = 0; at < raw.size(); ++at) {
        if (raw.substr(at).starts_with("[B]")) {
            if (!normalized.text.empty() && !space) space = at;
            at += 2;
            continue;
        }
        if (std::isspace(static_cast<unsigned char>(raw[at]))) {
            if (!normalized.text.empty() && !space) space = at;
            continue;
        }
        if (space) {
            normalized.text.push_back(' ');
            normalized.origins.push_back(*space);
            space.reset();
        }
        normalized.text.push_back(raw[at]);
        normalized.origins.push_back(at);
    }
    return normalized;
}

static TranslationResult preserve_form_description(std::string_view source,
        std::string_view kind, TranslationStatus status = TranslationStatus::Untranslated) {
    auto result = TranslationResult::preserved(source, kind, false, status);
    result.owner = "native_knowledge";
    result.target.clear();
    result.origins.clear();
    for (size_t at = 0; at < source.size();) {
        if (source.substr(at).starts_with("[B]")) {
            result.target.push_back('\n');
            result.origins.push_back(at);
            at += 3;
            continue;
        }
        const auto decoded = decode_utf8_at(source, at);
        if (decoded && is_cjk_display_codepoint(decoded->first)) {
            result.target.append(source.substr(at, decoded->second));
            for (size_t byte = 0; byte < decoded->second; ++byte)
                result.origins.push_back(at + byte);
            at += decoded->second;
        } else {
            const auto glyph = std::isspace(static_cast<unsigned char>(source[at]))
                ? std::string(source.substr(at, 1)) : cp437_to_utf8(source.substr(at, 1));
            result.target += glyph;
            result.origins.insert(result.origins.end(), glyph.size(), at++);
        }
    }
    result.fragments.front().target_end = result.target.size();
    result.resource_revision = RULESETS.resource_revision();
    return result;
}

static bool form_description_fixed_start(std::string_view text, std::string_view kind) {
    static constexpr auto common = std::to_array<std::string_view>({
        "The rules of the form are applied by ", "The form guides ",
    });
    for (auto prefix : common) if (text.starts_with(prefix)) return true;
    if (kind == "dance") {
        static constexpr auto starts = std::to_array<std::string_view>({
            "The dance ", "This dance ", "The entire dance ",
            "The dancer ", "The dancers ", "The partners ",
            "There are partner changes", "There is a basic movement ",
            "There should be ", "There is a series of ",
            "First, ", "Then ", "Finally, ",
        });
        for (auto prefix : starts) if (text.starts_with(prefix)) return true;
    } else if (kind == "music") {
        static constexpr auto starts = std::to_array<std::string_view>({
            "The music ", "The musical voices ", "The entire performance ",
            "The passage ", "This passage ", "The melody ",
            "The counterpoint melody ", "Only one pitch ", "Never more than ",
            "Throughout, when possible, ", "From beginning to end, when improvising",
            "Scales are ", "In quartertones, ", "The tonic note ",
            "The degrees selected are ", "It is called ", "The names are ",
            "These chords are named ", "The rhythm system ", "The rhythm lines ",
            "There are always multiple rhythm lines", "As stated above, ",
            "The patterns are ", "The beats are named ", "The beat is stressed ",
            "where ", "As always, the ",
        });
        for (auto prefix : starts) if (text.starts_with(prefix)) return true;
    } else if (kind == "poetry") {
        static constexpr auto starts = std::to_array<std::string_view>({
            "It is always written ", "Use of ", "A form of parallelism ",
            "Forms of parallelism ", "Linguistic skill is required ",
            "The poem ", "The rhyme", "The rhyme scheme ", "Each line ",
            "Every line of the poem ", "Certain lines ", "In the ", "It ",
        });
        for (auto prefix : starts) if (text.starts_with(prefix)) return true;
        if (text.starts_with("The ")) {
            static constexpr auto ordinals = std::to_array<std::string_view>({
                "first", "second", "third", "fourth", "fifth", "sixth", "seventh",
                "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth",
                "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth",
                "nineteenth", "twentieth",
            });
            auto rest = text.substr(4);
            for (auto ordinal : ordinals) {
                if (!rest.starts_with(ordinal)) continue;
                const auto tail = rest.substr(ordinal.size());
                if (tail.starts_with(" part ") || tail.starts_with(" line ")) return true;
            }
        }
    }
    return false;
}

static bool form_description_has_opaque_tail(std::string_view text) {
    static constexpr auto markers = std::to_array<std::string_view>({
        " originating in ", " performances of ", " originally devised by ",
        "called ", "named ", "names are ", "recites ", "recite ", "imitate ",
        "composition of ", "words of ", "story of ", "worship of ",
        " scale ", " rhythm ", " instruments", "accompanied by ",
    });
    return std::any_of(markers.begin(), markers.end(), [&](auto marker) {
        return text.find(marker) != std::string_view::npos;
    });
}

struct FormDescriptionSentence {
    size_t begin = 0, content_end = 0, end = 0;
    std::optional<std::string> target;
    bool work_limited = false;
};

template<class Translate>
static std::vector<FormDescriptionSentence> form_description_sentences(
        std::string_view source, std::string_view kind, Translate translate,
        bool allow_unknown_boundaries) {
    std::vector<FormDescriptionSentence> sentences;
    size_t begin = 0;
    int parentheses = 0, brackets = 0;
    char quote = 0;
    for (size_t at = 0; at < source.size(); ++at) {
        const char ch = source[at];
        if (quote) {
            if (ch == quote && (at == 0 || source[at - 1] != '\\')) quote = 0;
            continue;
        }
        if (ch == '"' || (ch == '\'' &&
                (at == 0 || std::isspace(static_cast<unsigned char>(source[at - 1])) ||
                 source[at - 1] == '(') && at + 1 < source.size() &&
                !std::isspace(static_cast<unsigned char>(source[at + 1])))) {
            quote = ch;
            continue;
        }
        if (ch == '(') ++parentheses;
        else if (ch == ')') parentheses = std::max(0, parentheses - 1);
        else if (ch == '[') ++brackets;
        else if (ch == ']') brackets = std::max(0, brackets - 1);
        if (ch != '.' || parentheses || brackets) continue;
        if (at + 1 < source.size() &&
            !std::isspace(static_cast<unsigned char>(source[at + 1]))) continue;
        const auto sentence = trim_view(source.substr(begin, at - begin));
        const auto next = trim_view(source.substr(at + 1));
        if (!next.empty() && !form_description_fixed_start(next, kind) &&
            form_description_has_opaque_tail(sentence)) continue;
        std::optional<std::string> target;
        try {
            target = translate(sentence);
        } catch (const TranslationWorkLimit&) {
            if (!allow_unknown_boundaries) throw;
            sentences.push_back({begin, source.size(), source.size(), {}, true});
            begin = source.size();
            break;
        }
        // A native clause after this unquoted period proves the boundary,
        // even when this reader does not recognize the preceding sentence.
        // Strict translation already cannot accept that unknown sentence.
        // Do not grow it through the rest of the document and reinterpret
        // all preceding prose as a generated name in a later production.
        if (!target && !allow_unknown_boundaries && !next.empty() &&
                form_description_fixed_start(next, kind)) {
            sentences.push_back({begin, source.size(), source.size(), {}});
            return sentences;
        }
        const bool proven_unknown = allow_unknown_boundaries &&
            form_description_fixed_start(sentence, kind) &&
            (next.empty() || form_description_fixed_start(next, kind)) &&
            !form_description_has_opaque_tail(sentence);
        if (!target && !next.empty() && !proven_unknown) continue;
        sentences.push_back({begin, at, at + 1, std::move(target)});
        begin = at + 1;
    }
    if (begin < source.size()) {
        try {
            sentences.push_back({begin, source.size(), source.size(),
                translate(trim_view(source.substr(begin)))});
        } catch (const TranslationWorkLimit&) {
            if (!allow_unknown_boundaries) throw;
            sentences.push_back({begin, source.size(), source.size(), {}, true});
        }
    }
    return sentences;
}

template<class Translate>
static TranslationResult render_form_description(std::string_view raw,
        const FormDescriptionText& normalized, std::string_view kind,
        bool display, Translate translate) {
    auto sentences = form_description_sentences(normalized.text, kind, translate, display);
    TranslationResult result;
    result.source = raw;
    result.kind = kind;
    result.owner = "native_knowledge";
    result.resource_revision = RULESETS.resource_revision();
    size_t raw_begin = 0;
    bool limited = false;
    for (size_t index = 0; index < sentences.size(); ++index) {
        const auto& sentence = sentences[index];
        const size_t raw_end = index + 1 == sentences.size() ? raw.size() :
            normalized.origins[sentence.end - 1] + 1;
        const auto unit = raw.substr(raw_begin, raw_end - raw_begin);
        if (!sentence.target || sentence.target->empty()) {
            if (!display) {
                result.target.clear();
                result.origins.clear();
                result.fragments.clear();
                result.status = TranslationStatus::NoMatch;
                return result;
            }
            limited = limited || sentence.work_limited;
            result.append(preserve_form_description(unit, kind,
                limited ? TranslationStatus::WorkLimited : TranslationStatus::Untranslated),
                raw_begin);
        } else {
            auto target = *sentence.target + "。";
            std::vector<size_t> origins(target.size(), 0);
            result.append(TranslationResult::translated(unit, std::move(target), kind,
                std::move(origins)), raw_begin);
        }
        raw_begin = raw_end;
    }
    if (display) result.policy = TranslationPolicy::Display;
    else result.policy = TranslationPolicy::Strict;
    return result;
}

std::optional<std::string> Overlay::translate_poetic_form_description(
        std::string_view raw_description) const {
    const uint64_t native_context = native_identity_translation_context();
    struct PoeticTranslationCache {
        const Overlay *owner = nullptr;
        fs::file_time_type mapping{}, names{}, instruments{};
        uint64_t rules_revision = 0;
        std::unordered_map<std::string, TranslationResult> targets;
        std::unordered_map<std::string, TranslationWorkLimit> limits;
    };
    auto &cache = reloadable_thread_state<PoeticTranslationCache,
        struct PoeticTranslationCacheTag>();
    if (cache.owner != this || cache.mapping != mapping_mtime_ ||
        cache.names != name_editor_mtime_ ||
        cache.instruments != instrument_translations_mtime_ ||
        cache.rules_revision != RULESETS.resource_revision()) {
        cache = {};
        cache.owner = this;
        cache.mapping = mapping_mtime_;
        cache.names = name_editor_mtime_;
        cache.instruments = instrument_translations_mtime_;
        cache.rules_revision = RULESETS.resource_revision();
    }
    const std::string key = std::to_string(native_context) + '\x1f' + std::string(raw_description);
    if (const auto limit = cache.limits.find(key); limit != cache.limits.end())
        throw limit->second;
    if (const auto found = cache.targets.find(key); found != cache.targets.end())
        return found->second.strict_target();
    // Both the native document and layer recovery can submit the same prose
    // several times per frame. Unknown complete productions must be cached
    // too, so leaving a chooser open cannot repeatedly run the whole grammar.
    if (cache.targets.size() >= 128) {
        cache.targets.clear();
        cache.limits.clear();
    }
    try {
        auto result = translate_poetic_form_description_uncached_result(raw_description, false);
        const auto target = result.strict_target();
        if (native_identity_translation_context() == native_context)
            cache.targets.emplace(key, std::move(result));
        return target;
    } catch (const TranslationWorkLimit& limit) {
        if (native_identity_translation_context() == native_context) {
            cache.targets.emplace(key, preserve_form_description(raw_description, "poetry",
                TranslationStatus::WorkLimited));
            cache.limits.emplace(key, limit);
        }
        throw;
    }
}

std::optional<std::string> Overlay::translate_poetic_form_description_uncached(
        std::string_view raw_description) const {
    return translate_poetic_form_description_uncached_result(raw_description, false).strict_target();
}

std::optional<std::string> Overlay::translate_poetic_form_description_unit(
        std::string_view raw_description, bool native_chapter) const {
    std::string source = normalize_form_description(raw_description).text;
    // A stale background list can precede the active widget in a merged
    // logical layer. Recover the real generated-title boundary from the
    // finite form identity itself instead of allowing an unrelated resident
    // name to become part of the poem title.
    std::string work_introduction;
    for (const std::string_view marker : {
             std::string_view(" is a dramatic poetic form"),
             std::string_view(" is a reflective poetic form"),
             std::string_view(" is a ribald poetic form"),
             std::string_view(" is a light poetic form"),
             std::string_view(" is a solemn poetic form"),
             std::string_view(" is a poetic narrative"),
             std::string_view(" is a poetic riddle"),
             std::string_view(" is a poetic form"),
         }) {
        const size_t identity_at = source.find(marker);
        if (identity_at == std::string::npos) continue;
        const size_t title_at = source.rfind("The ", identity_at);
        if (title_at != std::string::npos && title_at > 0) {
            const std::string_view prefix(source.data(), title_at);
            // A work's introduction precedes its poetic form in the same
            // document. Preserve that complete paragraph before removing the
            // prefix used by the form parser; it is not stale list content.
            if (is_written_work_description(prefix)) {
                const auto introduction = translate_written_work_paragraph(prefix);
                if (!introduction || introduction->empty()) return std::nullopt;
                work_introduction = *introduction;
            }
            source.erase(0, title_at);
        }
        break;
    }
    if (source.empty() || (!native_chapter && (source.find(" poetic ") == std::string::npos ||
        (source.find("The rules of the form are applied by poets") ==
             std::string::npos &&
         source.find("The form guides poets during improvised performances") ==
             std::string::npos)))) {
        return std::nullopt;
    }

    auto contains_ascii_letters = [](std::string_view value) {
        return std::any_of(value.begin(), value.end(), [](unsigned char ch) {
            return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
        });
    };
    auto translate_generated_reference = [&](std::string_view raw)
            -> std::optional<std::string> {
        const std::string value = trim(std::string(raw));
        if (value.empty()) return std::nullopt;
        auto accept = [&](std::optional<std::string> translated)
                -> std::optional<std::string> {
            if (!translated || translated->empty() ||
                contains_ascii_letters(*translated)) {
                return std::nullopt;
            }
            return translated;
        };
        if (auto translated = accept(exact_literal_translation(value)))
            return translated;
        if (auto translated = accept(translate_compositional(value)))
            return translated;
        if (auto translated = accept(translate_procedural_fragment(value)))
            return translated;
        // A historical figure or mod-added generated title can use a native
        // vocabulary not present in the current world's semantic tables.
        // The phonetic-only path is total for name-shaped input and emits Han
        // characters rather than leaking the unresolved English reference.
        return accept(translate_procedural_fragment(value, true));
    };
    auto strip_prefix = [](std::string_view &text, std::string_view prefix) {
        if (!text.starts_with(prefix)) return false;
        text.remove_prefix(prefix.size());
        return true;
    };
    auto join_chinese = [](const std::vector<std::string> &items,
                           std::string_view separator = "、") {
        std::string joined;
        for (size_t index = 0; index < items.size(); ++index) {
            if (index) joined += separator;
            joined += items[index];
        }
        return joined;
    };
    auto split_english_list = [](std::string_view text) {
        std::vector<std::string_view> items;
        size_t cursor = 0;
        while (cursor < text.size()) {
            if (std::string_view(text).substr(cursor).starts_with("and "))
                cursor += 4;
            size_t comma = text.find(", ", cursor);
            size_t conjunction = text.find(" and ", cursor);
            size_t next = std::min(comma == std::string_view::npos
                                       ? text.size() : comma,
                                   conjunction == std::string_view::npos
                                       ? text.size() : conjunction);
            const std::string_view item = trim_view(text.substr(cursor,
                                                                next - cursor));
            if (!item.empty()) items.push_back(item);
            if (next == text.size()) break;
            cursor = next + (next == comma ? 2 : 5);
        }
        return items;
    };

    auto number_value = [](std::string_view raw) -> std::optional<int> {
        static constexpr std::array<std::pair<std::string_view, int>, 28> words = {{
            {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
            {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
            {"eight", 8}, {"nine", 9}, {"ten", 10}, {"eleven", 11},
            {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14},
            {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
            {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20},
            {"thirty", 30}, {"forty", 40}, {"fifty", 50},
            {"sixty", 60}, {"seventy", 70}, {"eighty", 80},
            {"ninety", 90},
        }};
        const std::string text = lower(trim(std::string(raw)));
        for (const auto &[word, value] : words) {
            if (text == word) return value;
        }
        const size_t hyphen = text.find('-');
        if (hyphen != std::string::npos) {
            std::optional<int> high;
            std::optional<int> low;
            for (const auto &[word, value] : words) {
                if (std::string_view(text).substr(0, hyphen) == word) high = value;
                if (std::string_view(text).substr(hyphen + 1) == word) low = value;
            }
            if (high && low && *high >= 20 && *low > 0 && *low < 10)
                return *high + *low;
        }
        return std::nullopt;
    };
    auto ordinal_value = [&](std::string_view raw) -> std::optional<int> {
        static constexpr std::array<std::pair<std::string_view, int>, 20> words = {{
            {"first", 1}, {"second", 2}, {"third", 3}, {"fourth", 4},
            {"fifth", 5}, {"sixth", 6}, {"seventh", 7}, {"eighth", 8},
            {"ninth", 9}, {"tenth", 10}, {"eleventh", 11},
            {"twelfth", 12}, {"thirteenth", 13}, {"fourteenth", 14},
            {"fifteenth", 15}, {"sixteenth", 16}, {"seventeenth", 17},
            {"eighteenth", 18}, {"nineteenth", 19}, {"twentieth", 20},
        }};
        const std::string text = lower(trim(std::string(raw)));
        for (const auto &[word, value] : words) {
            if (text == word) return value;
        }
        const size_t hyphen = text.find('-');
        if (hyphen != std::string::npos) {
            static constexpr std::array<std::pair<std::string_view, int>, 8>
                endings = {{{"first", 1}, {"second", 2}, {"third", 3},
                            {"fourth", 4}, {"fifth", 5}, {"sixth", 6},
                            {"seventh", 7}, {"eighth", 8}}};
            const auto high = number_value(std::string_view(text).substr(0, hyphen));
            for (const auto &[word, value] : endings) {
                if (std::string_view(text).substr(hyphen + 1) == word && high)
                    return *high + value;
            }
        }
        return std::nullopt;
    };
    auto chinese_number = [](int value, bool use_liang) {
        static constexpr std::array<std::string_view, 10> digit = {
            "零", "一", "二", "三", "四", "五", "六", "七", "八", "九",
        };
        if (value == 2 && use_liang) return std::string("两");
        if (value < 10) return std::string(digit[static_cast<size_t>(value)]);
        if (value < 20)
            return std::string("十") +
                (value == 10 ? "" : std::string(digit[static_cast<size_t>(value % 10)]));
        if (value < 100) {
            std::string result(digit[static_cast<size_t>(value / 10)]);
            result += "十";
            if (value % 10) result += digit[static_cast<size_t>(value % 10)];
            return result;
        }
        if (value == 100) return std::string("一百");
        return std::to_string(value);
    };
    auto translate_count = [&](std::string_view raw,
                               bool use_liang) -> std::optional<std::string> {
        std::string_view text = trim_view(raw);
        bool additional = false;
        if (text.starts_with("another ")) {
            text.remove_prefix(std::string_view("another ").size());
            text = trim_view(text);
            additional = true;
        }
        if (text == "a" || text == "an" || text == "a single" ||
            text == "single") {
            return std::string(additional ? "另一" : "一");
        }
        if (text == "another") return std::string("另一");
        const size_t range = text.find(" to ");
        if (range != std::string_view::npos) {
            const auto first = number_value(text.substr(0, range));
            const auto last = number_value(text.substr(range + 4));
            if (!first || !last) return std::nullopt;
            return std::string(additional ? "另" : "") +
                   chinese_number(*first, use_liang) + "至" +
                   chinese_number(*last, use_liang);
        }
        const auto value = number_value(text);
        if (!value) return std::nullopt;
        return std::string(additional ? "另" : "") +
               chinese_number(*value, use_liang);
    };

    auto translate_topic = [&](std::string_view raw)
            -> std::optional<std::string> {
        const std::string_view text = trim_view(raw);
        if (text == "a lover") return exact_literal_translation("Lover");
        static constexpr std::array<std::pair<std::string_view,
                                               std::string_view>, 29> topics = {{
            {"a chosen subject", "选定的题材"},
            {"the subject of the poem", "全诗的主题"},
            {"the previous idea", "前文的思路"},
            {"previous ideas", "前文的思路"},
            {"the past", "过去"}, {"current events", "时事"},
            {"the future", "未来"},
            {"someone recently deceased", "不久前去世的人"},
            {"someone recently retired", "不久前退隐的人"},
            {"an abstract concept", "某个抽象概念"},
            {"the concept of death", "死亡这一概念"},
            {"the concept of family", "家庭这一概念"},
            {"the concept of hunting", "狩猎这一概念"},
            {"the concept of nature", "自然这一概念"},
            {"the concept of war", "战争这一概念"},
            {"religion", "宗教"}, {"a specific place", "某个特定地点"},
            {"a specific wilderness region", "某片特定荒野"},
            {"nature", "自然"},
            {"family", "家庭"}, {"alcoholic beverages", "酒"},
            {"a journey", "旅途"}, {"war", "战争"},
            {"the hunt", "狩猎"}, {"mining", "采矿"},
            {"death", "死亡"}, {"immortality", "不朽"},
            {"someone's character", "某人的品性"},
            {"a historical figure", "某位历史人物"},
        }};
        for (const auto &[english, chinese] : topics) {
            if (text == english) return std::string(chinese);
        }
        static constexpr std::string_view concept_prefix = "the concept of ";
        if (text.starts_with(concept_prefix)) {
            const auto translated_concept = translate_generated_reference(
                text.substr(concept_prefix.size()));
            if (!translated_concept) return std::nullopt;
            return *translated_concept + "这一概念";
        }
        return translate_generated_reference(text);
    };

    struct ActionPhrase {
        std::string_view source;
        std::string_view chinese;
        bool takes_object;
        int object_style;
    };
    static constexpr auto actions = std::to_array<ActionPhrase>({
        {"to make a counter-assertion", "反驳前文的观点", false, 0},
        {"to synthesize previous ideas", "归纳前文的观点", false, 0},
        {"to develop the previous idea", "进一步展开前文的思路", false, 0},
        {"to reflect on previous ideas", "回顾前文的观点", false, 0},
        {"to invert the previous assertion", "提出与前文相反的论点", false, 0},
        {"to undercut the previous assertion", "削弱前文的论点", false, 0},
        {"to move away from previous ideas", "转向新的思路", false, 0},
        {"to offer a different perspective", "换一个角度加以审视", false, 0},
        {"to amuse the audience", "博听众一笑", false, 0},
        {"to make an apology", "表达歉意", false, 0},
        {"to teach a moral lesson", "阐明为人处世的道理", false, 0},
        {"to make an assertion", "提出一个观点", false, 0},
        {"to make a concession", "作出让步", false, 0},
        {"to console the audience", "抚慰听众", false, 0},
        {"to refuse consolation", "拒绝接受宽慰", false, 0},
        {"to complain about", "抒发不满", true, 1},
        {"to express pleasure with", "表达喜悦", true, 2},
        {"to express grief over", "抒发悲痛", true, 3},
        {"to describe", "描写", true, 0},
        {"to satirize", "讽刺", true, 0},
        {"to renounce", "摒弃", true, 0},
        {"to praise", "赞颂", true, 0},
        {"to beseech", "恳求", true, 0},
    });
    auto translate_action = [&](std::string_view raw)
            -> std::optional<std::string> {
        const std::string_view text = trim_view(raw);
        const ActionPhrase *matched = nullptr;
        for (const ActionPhrase &action : actions) {
            if (!text.starts_with(action.source)) continue;
            const size_t end = action.source.size();
            if (end < text.size() && text[end] != ' ') continue;
            if (!matched || action.source.size() > matched->source.size())
                matched = &action;
        }
        if (!matched) return std::nullopt;
        std::string_view remainder = trim_view(text.substr(matched->source.size()));
        bool concerning = false;
        if (remainder.starts_with("concerning ")) {
            concerning = true;
            remainder.remove_prefix(std::string_view("concerning ").size());
        }
        std::optional<std::string> topic;
        if (!remainder.empty()) topic = translate_topic(remainder);
        if (!remainder.empty() && !topic) return std::nullopt;

        std::string result;
        // The generator permits every purpose without a subject, including
        // grammatically elliptical English such as `intended to beseech`.
        // A subject, when present, refines the action; it is not required just
        // because that English verb or preposition normally takes one.
        if (matched->takes_object && topic) {
            switch (matched->object_style) {
            case 1: result = "表达对" + *topic + "的不满"; break;
            case 2: result = "抒发因" + *topic + "而生的喜悦"; break;
            case 3: result = "为" + *topic + "而哀叹"; break;
            default: result = std::string(matched->chinese) + *topic; break;
            }
        } else if (matched->takes_object) {
            result = matched->chinese;
        } else {
            if (!topic && concerning) return std::nullopt;
            if (!topic) {
                result = matched->chinese;
            } else if (matched->source == "to move away from previous ideas") {
                result = "离开前文的思路，转而描写" + *topic;
            } else if (matched->source == "to offer a different perspective") {
                result = "换一个角度审视" + *topic;
            } else if (matched->source == "to amuse the audience") {
                result = "以" + *topic + "为题博听众一笑";
            } else if (matched->source == "to teach a moral lesson") {
                result = "借" + *topic + "阐明为人处世的道理";
            } else if (matched->source == "to make an apology") {
                result = "围绕" + *topic + "表达歉意";
            } else if (matched->source == "to make an assertion") {
                result = "围绕" + *topic + "提出观点";
            } else if (matched->source == "to make a counter-assertion") {
                result = "围绕" + *topic + "反驳前文的观点";
            } else {
                result = "围绕" + *topic + std::string(matched->chinese);
            }
        }
        return result;
    };

    auto translate_persona = [&](std::string_view raw)
            -> std::optional<std::string> {
        const std::string_view text = trim_view(raw);
        static constexpr std::array<std::pair<std::string_view,
                                               std::string_view>, 7> personas = {{
            {"the author", "作者本人"}, {"a soldier", "一名士兵"},
            {"a traveler", "一名旅人"}, {"a traveller", "一名旅人"},
            {"a relative of the author", "作者的一位亲属"},
            {"a party to a debate", "辩论中的一方"},
            {"a fictional poet", "一位虚构诗人"},
        }};
        for (const auto &[english, chinese] : personas) {
            if (text == english) return std::string(chinese);
        }
        return translate_generated_reference(text);
    };

    auto translate_structure_atom = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string_view text = trim_view(raw);
        std::optional<std::string> forced_count;
        struct SeriesPrefix { std::string_view source; std::string_view count; };
        static constexpr auto series_prefixes = std::to_array<SeriesPrefix>({
            {"another extremely long series of ", "另有许多"},
            {"another numerous series of ", "另有许多"},
            {"another series of ", "另有若干"},
            {"an extremely long series of ", "许多"},
            {"a numerous series of ", "许多"},
            {"numerous series of ", "许多"},
            {"a series of ", "若干"},
        });
        for (const SeriesPrefix &prefix : series_prefixes) {
            if (!text.starts_with(prefix.source)) continue;
            text.remove_prefix(prefix.source.size());
            forced_count = std::string(prefix.count);
            break;
        }

        for (const std::string_view ending : {
                 std::string_view("verse paragraphs"),
                 std::string_view("verse paragraph")}) {
            if (!text.ends_with(ending)) continue;
            std::string_view prefix = trim_view(
                text.substr(0, text.size() - ending.size()));
            std::string_view suffix = "个诗段";
            if (prefix.ends_with(" brief")) {
                prefix.remove_suffix(6);
                suffix = "段短诗";
            } else if (prefix == "brief") {
                prefix = "a";
                suffix = "段短诗";
            } else if (prefix.ends_with(" lengthy")) {
                prefix.remove_suffix(8);
                suffix = "段长诗";
            } else if (prefix == "lengthy") {
                prefix = "a";
                suffix = "段长诗";
            } else if (prefix.ends_with(" full")) {
                prefix.remove_suffix(5);
                suffix = "个完整诗段";
            } else if (prefix == "full") {
                prefix = "a";
                suffix = "个完整诗段";
            }
            if (prefix.ends_with(" distinct"))
                prefix.remove_suffix(std::string_view(" distinct").size());
            if (prefix.empty()) prefix = "a";
            std::optional<std::string> count;
            if (forced_count) {
                if (prefix != "a" && prefix != "an")
                    return std::nullopt;
                count = forced_count;
            } else {
                count = translate_count(trim_view(prefix), true);
            }
            if (!count) return std::nullopt;
            return *count + std::string(suffix);
        }

        auto render_counted = [&](std::string_view prefix,
                                  std::string_view suffix,
                                  bool use_liang) -> std::optional<std::string> {
            std::string_view count_source = trim_view(prefix);
            if (count_source.ends_with(" distinct"))
                count_source.remove_suffix(std::string_view(" distinct").size());
            std::optional<std::string> count;
            if (forced_count) {
                if (!count_source.empty() && count_source != "a" &&
                    count_source != "an") {
                    return std::nullopt;
                }
                count = forced_count;
            } else {
                count = translate_count(count_source, use_liang);
            }
            if (!count) return std::nullopt;
            return *count + std::string(suffix);
        };

        struct Unit {
            std::string_view singular;
            std::string_view plural;
            std::string_view suffix;
            bool use_liang;
        };
        static constexpr auto units = std::to_array<Unit>({
            {"couplet", "couplets", "组双行诗", true},
            {"tercet", "tercets", "节三行诗", true},
            {"quatrain", "quatrains", "节四行诗", true},
            {"quintain", "quintains", "节五行诗", true},
            {"sexain", "sexains", "节六行诗", true},
            {"septet", "septets", "节七行诗", true},
            {"octet", "octets", "节八行诗", true},
            {"stanza", "stanzas", "节诗", true},
            {"line", "lines", "行", true},
        });
        for (const Unit &unit : units) {
            for (const std::string_view ending : {unit.plural, unit.singular}) {
                if (!text.ends_with(ending)) continue;
                if (text.size() > ending.size() &&
                    text[text.size() - ending.size() - 1] != ' ') {
                    continue;
                }
                std::string_view prefix = trim_view(
                    text.substr(0, text.size() - ending.size()));
                // `five ten-line stanzas` belongs to the more specific
                // stanza parser below; treating `five ten-line` as one count
                // would reject every generated N-line stanza description.
                if ((ending == "stanza" || ending == "stanzas") &&
                    prefix.ends_with("-line")) {
                    continue;
                }
                std::string_view qualifier;
                for (const auto &[english, chinese] : std::array<std::pair<
                         std::string_view, std::string_view>, 3>{{
                         {"brief", "简短的"},
                         {"lengthy", "较长的"},
                         {"full", "完整的"},
                     }}) {
                    if (prefix == english) {
                        prefix = "a";
                        qualifier = chinese;
                        break;
                    }
                    const std::string suffix =
                        " " + std::string(english);
                    if (!prefix.ends_with(suffix)) continue;
                    prefix.remove_suffix(suffix.size());
                    qualifier = chinese;
                    break;
                }
                if (prefix.empty()) prefix = ending == unit.singular ? "a" : "";
                std::string suffix(unit.suffix);
                if (!qualifier.empty()) {
                    // Every unit starts with one three-byte Han classifier.
                    suffix.insert(3, qualifier);
                    if (unit.singular == "line") suffix += "诗";
                }
                return render_counted(prefix, suffix, unit.use_liang);
            }
        }

        for (const std::string_view ending : {std::string_view("-line stanzas"),
                                              std::string_view("-line stanza")}) {
            if (!text.ends_with(ending)) continue;
            std::string_view prefix = text.substr(0, text.size() - ending.size());
            const size_t split = prefix.rfind(' ');
            std::string_view outer_count = "a";
            std::string_view line_count = prefix;
            if (split != std::string_view::npos) {
                outer_count = trim_view(prefix.substr(0, split));
                line_count = trim_view(prefix.substr(split + 1));
            }
            if (outer_count.ends_with(" distinct"))
                outer_count.remove_suffix(std::string_view(" distinct").size());
            const auto lines = number_value(line_count);
            std::optional<std::string> count;
            if (forced_count) {
                if (outer_count != "a" && outer_count != "an")
                    return std::nullopt;
                count = forced_count;
            } else {
                count = translate_count(outer_count, true);
            }
            if (!lines || !count) return std::nullopt;
            return *count + "节" + chinese_number(*lines, true) + "行诗";
        }
        return std::nullopt;
    };

    auto translate_structure_list = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::vector<std::string> translated;
        for (const std::string_view item : split_english_list(raw)) {
            const auto value = translate_structure_atom(item);
            if (!value) return std::nullopt;
            translated.push_back(*value);
        }
        if (translated.empty()) return std::nullopt;
        if (translated.size() == 1) return translated.front();
        std::string joined;
        for (size_t index = 0; index < translated.size(); ++index) {
            if (index) joined += index + 1 == translated.size() ? "和" : "、";
            joined += translated[index];
        }
        return joined;
    };

    auto translate_structure_sentence = [&](std::string_view sentence)
            -> std::optional<std::string> {
        static constexpr std::string_view divided = "The poem is divided into ";
        static constexpr std::string_view poem_is = "The poem is ";
        auto render_parts = [&](std::string_view raw,
                                std::string_view stated_count)
                -> std::optional<std::string> {
            const auto items = split_english_list(raw);
            if (items.empty()) return std::nullopt;
            std::vector<std::string> translated_items;
            translated_items.reserve(items.size());
            for (const std::string_view item : items) {
                const auto translated_item = translate_structure_atom(item);
                if (!translated_item) return std::nullopt;
                translated_items.push_back(*translated_item);
            }
            std::string count;
            if (stated_count.empty()) {
                count = chinese_number(static_cast<int>(items.size()), true);
            } else {
                const auto translated_count = translate_count(stated_count, true);
                if (!translated_count) return std::nullopt;
                count = *translated_count;
            }
            std::string result = "全诗分为" + count + "部分：";
            for (size_t index = 0; index < translated_items.size(); ++index) {
                if (index) result += "；";
                result += "第" + chinese_number(static_cast<int>(index + 1), false) +
                          "部分为" + translated_items[index];
            }
            return result;
        };
        if (sentence.starts_with(divided)) {
            std::string_view description = sentence.substr(divided.size());
            const size_t parts_at = description.find(" parts: ");
            if (parts_at != std::string_view::npos) {
                std::string_view count_source = description.substr(0, parts_at);
                if (count_source.ends_with(" distinct"))
                    count_source.remove_suffix(std::string_view(" distinct").size());
                return render_parts(
                    description.substr(parts_at +
                                       std::string_view(" parts: ").size()),
                    count_source);
            }
            const size_t distinct_at = description.find(" distinct ");
            if (distinct_at != std::string_view::npos) {
                const std::string_view count_source =
                    description.substr(0, distinct_at);
                std::string unit(description.substr(
                    distinct_at + std::string_view(" distinct ").size()));
                if (unit.ends_with('s')) unit.pop_back();
                const auto count = translate_count(count_source, true);
                const auto one_unit = translate_structure_atom("a " + unit);
                if (!count || !one_unit) return std::nullopt;
                return "全诗分为" + *count + "部分，每部分都是" + *one_unit;
            }
            if (split_english_list(description).size() > 1) {
                return render_parts(description, {});
            }
            const auto structure = translate_structure_list(description);
            if (!structure) return std::nullopt;
            return "全诗分为" + *structure;
        }
        if (sentence.starts_with(poem_is)) {
            std::string_view description = sentence.substr(poem_is.size());
            const bool single = description.starts_with("a single ");
            const auto structure = translate_structure_list(description);
            if (!structure) return std::nullopt;
            if (single && *structure == "一行") return std::string("全诗仅有一行");
            if (single) return "全诗为" + *structure;
            return "全诗由" + *structure + "组成";
        }
        return std::nullopt;
    };

    auto translate_term = [](std::string_view text)
            -> std::optional<std::string> {
        static constexpr auto terms = std::to_array<std::pair<std::string_view,
                                                               std::string_view>>({
            {"internal rhyme", "内韵"}, {"alliteration", "头韵"},
            {"onomatopoeia", "拟声"},
            {"antanaclasis", "同词异义的双关"},
            {"assonance", "元音谐韵"}, {"consonance", "辅音谐韵"},
            {"elision", "省音"}, {"epenthesis", "增音"},
            {"synchysis", "交错语序"}, {"allegory", "寓言"},
            {"ambiguity", "歧义"}, {"symbolism", "象征"},
            {"metaphor", "暗喻"}, {"simile", "明喻"},
            {"metonymy", "借代"}, {"vivid imagery", "鲜明意象"},
            {"juxtaposition", "并置"},
            {"lines with different readings depending on word breaks",
             "随断句变化而产生不同含义的诗行"},
            {"lines which can be read backwards as well as forwards",
             "既可顺读也可倒读的诗行"},
            {"lines which can be read orthogonally across the standard lines",
             "横向、纵向都可阅读的诗行"},
            {"lines which emerge when reading along certain prescribed paths across the body of the poem",
             "按指定路线穿过诗篇、串读而成的诗句"},
            {"lines which emerge when reading along certain prescribed paths",
             "按指定路线串读而成的诗句"},
            {"has different readings depending on word breaks",
             "可通过不同断句读出不同含义"},
            {"can be read backwards as well as forwards", "既可顺读也可倒读"},
        });
        for (const auto &[english, chinese] : terms) {
            if (text == english) return std::string(chinese);
        }
        return std::nullopt;
    };
    auto translate_term_list = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::vector<std::string> translated;
        for (const std::string_view item : split_english_list(raw)) {
            const auto term = translate_term(item);
            if (!term) return std::nullopt;
            translated.push_back(*term);
        }
        if (translated.empty()) return std::nullopt;
        return join_chinese(translated);
    };

    auto translate_parallel_predicates = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string_view text = trim_view(raw);
        // Standalone relation sentences begin with an uppercase subject
        // (`Certain lines ...`), while the same predicate list embedded after
        // `in that` begins with lowercase.  Accept both forms; rejecting the
        // standalone spelling caused the whole generated poetic description
        // to fail atomically and left the Knowledge detail pane in English.
        if (text.starts_with("certain lines ") ||
            text.starts_with("Certain lines ")) {
            text.remove_prefix(14);
        }
        if (text.starts_with("they ")) text.remove_prefix(5);
        std::vector<std::string> clauses;
        static constexpr auto predicates = std::to_array<
            std::pair<std::string_view, std::string_view>>({
            {"often share an underlying meaning", "往往含义相通"},
            {"often contrast underlying meaning", "往往含义相反"},
            {"are required to maintain phrasing", "必须保持相同措辞"},
            {"have similar grammatical structures", "采用相似句式"},
            {"use the same placement of allusions", "在对应位置用典"},
            {"sometimes have reversed word orders", "有时颠倒词序"},
            {"reverse grammatical structures", "使用倒置的句法结构"},
            {"present different views of the same subject",
             "从不同角度描写同一主题"},
        });
        while (!text.empty()) {
            const auto found = std::find_if(
                predicates.begin(), predicates.end(), [&](const auto &entry) {
                    if (!text.starts_with(entry.first)) return false;
                    const std::string_view tail = text.substr(entry.first.size());
                    return tail.empty() || tail.starts_with(',') ||
                        tail.starts_with(" and ");
                });
            if (found == predicates.end()) return std::nullopt;
            clauses.emplace_back(found->second);
            text.remove_prefix(found->first.size());
            text = trim_view(text);
            if (text.empty()) break;
            // Depending on predicate count, the game emits ordinary list
            // punctuation or repeats the subject as `they`. Consume every
            // combination made by that finite joiner grammar.
            if (text.starts_with(", and ")) text.remove_prefix(6);
            else if (text.starts_with(", ")) text.remove_prefix(2);
            else if (text.starts_with("and ")) text.remove_prefix(4);
            else return std::nullopt;
            if (text.starts_with("they ")) text.remove_prefix(5);
            text = trim_view(text);
        }
        if (clauses.empty()) return std::nullopt;
        return join_chinese(clauses, "，");
    };

    // The opening supplies this name before any following sentence is
    // parsed. DF can repeat it as a subject instead of `The poem` or `It`.
    std::string source_form_title;
    enum class PoeticScopeKind { Poem, Part, Line, Lines };
    struct PoeticScope {
        std::string chinese;
        PoeticScopeKind kind = PoeticScopeKind::Poem;
    };
    PoeticScope last_scope{"全诗", PoeticScopeKind::Poem};

    auto unit_reference = [&](std::string_view raw, bool each)
            -> std::optional<std::string> {
        const std::string_view text = trim_view(raw);
        static constexpr auto units = std::to_array<std::pair<std::string_view,
                                                               std::string_view>>({
            {"couplet", "组双行诗"}, {"tercet", "节三行诗"},
            {"quatrain", "节四行诗"}, {"quintain", "节五行诗"},
            {"sexain", "节六行诗"}, {"septet", "节七行诗"},
            {"octet", "节八行诗"}, {"stanza", "节诗"},
            {"verse paragraph", "个诗段"},
        });
        for (const auto &[english, chinese] : units) {
            if (text != english) continue;
            if (each) return "每" + std::string(chinese);
            if (english == "couplet") return std::string("这组双行诗");
            if (english == "stanza") return std::string("该诗节");
            return "这" + std::string(chinese);
        }
        for (const auto &[qualifier, chinese] : std::array<std::pair<
                 std::string_view, std::string_view>, 3>{{
                     {"brief verse paragraph", "短诗段"},
                     {"full verse paragraph", "完整诗段"},
                     {"lengthy verse paragraph", "长诗段"},
                 }}) {
            if (text != qualifier) continue;
            return (each ? "每个" : "该") + std::string(chinese);
        }
        static constexpr std::string_view line_stanza_suffix = "-line stanza";
        if (text.ends_with(line_stanza_suffix)) {
            const auto count = number_value(text.substr(
                0, text.size() - line_stanza_suffix.size()));
            if (!count) return std::nullopt;
            const std::string stanza = chinese_number(*count, true) + "行诗节";
            return (each ? "每个" : "该") + stanza;
        }
        return std::nullopt;
    };
    std::function<std::optional<PoeticScope>(std::string_view)>
        translate_scope;
    translate_scope = [&](std::string_view raw)
            -> std::optional<PoeticScope> {
        std::string_view text = trim_view(raw);
        if (text == "The poem" || text == "the poem" ||
            (!source_form_title.empty() && text == source_form_title))
            return PoeticScope{"全诗", PoeticScopeKind::Poem};
        if (text == "Each line" || text == "each line" ||
            text == "Every line of the poem" ||
            text == "every line of the poem") {
            return PoeticScope{"全诗各行", PoeticScopeKind::Lines};
        }
        if (text == "Certain lines" || text == "certain lines")
            return PoeticScope{"某些诗行", PoeticScopeKind::Lines};
        if (text == "It" || text == "it") return last_scope;

        if (text.starts_with("In the ")) {
            const size_t part_end = text.find(" part, ");
            if (part_end == std::string_view::npos) return std::nullopt;
            const auto part_number = ordinal_value(text.substr(7, part_end - 7));
            if (!part_number) return std::nullopt;
            const auto nested = translate_scope(text.substr(part_end + 7));
            if (!nested) return std::nullopt;
            PoeticScope combined = *nested;
            combined.chinese = "第" + chinese_number(*part_number, false) +
                               "部分中，" + combined.chinese;
            return combined;
        }

        const bool capital_the = text.starts_with("The ");
        const bool lower_the = text.starts_with("the ");
        if (!capital_the && !lower_the) return std::nullopt;
        text.remove_prefix(4);
        const size_t part_at = text.find(" part");
        if (part_at != std::string_view::npos && part_at + 5 == text.size()) {
            const auto number = ordinal_value(text.substr(0, part_at));
            if (!number) return std::nullopt;
            return PoeticScope{"第" + chinese_number(*number, false) + "部分",
                               PoeticScopeKind::Part};
        }
        const size_t line_at = text.find(" line");
        if (line_at == std::string_view::npos) return std::nullopt;
        const auto number = ordinal_value(text.substr(0, line_at));
        if (!number) return std::nullopt;
        std::string chinese;
        std::string_view suffix = text.substr(line_at + 5);
        if (suffix.starts_with(" of each ")) {
            const auto unit = unit_reference(suffix.substr(9), true);
            if (!unit) return std::nullopt;
            chinese = *unit + "的第" + chinese_number(*number, false) + "行";
        } else if (suffix.starts_with(" of the ")) {
            const auto unit = unit_reference(suffix.substr(8), false);
            if (!unit) return std::nullopt;
            chinese = *unit + "的第" + chinese_number(*number, false) + "行";
        } else if (suffix.empty()) {
            chinese = "第" + chinese_number(*number, false) + "行";
        } else {
            return std::nullopt;
        }
        return PoeticScope{std::move(chinese), PoeticScopeKind::Line};
    };

    auto translate_pattern = [](std::string_view raw)
            -> std::optional<std::string> {
        static constexpr auto patterns = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"stressed-unstressed-unstressed", "重—轻—轻"},
            {"unstressed-stressed-unstressed", "轻—重—轻"},
            {"unstressed-unstressed-stressed", "轻—轻—重"},
            {"unstressed-unstressed-unstressed", "轻—轻—轻"},
            {"stressed-unstressed-stressed", "重—轻—重"},
            {"unstressed-stressed-stressed", "轻—重—重"},
            {"stressed-stressed-unstressed", "重—重—轻"},
            {"stressed-stressed-stressed", "重—重—重"},
            {"unstressed-unstressed", "轻—轻"},
            {"unstressed-stressed", "轻—重"},
            {"stressed-unstressed", "重—轻"},
            {"stressed-stressed", "重—重"},
            {"uneven-even-uneven", "仄—平—仄"},
            {"uneven-uneven-even", "仄—仄—平"},
            {"uneven-uneven-uneven", "仄—仄—仄"},
            {"even-uneven-even", "平—仄—平"},
            {"even-uneven-uneven", "平—仄—仄"},
            {"even-even-uneven", "平—平—仄"},
            {"even-even-even", "平—平—平"},
            {"uneven-even-even", "仄—平—平"},
            {"long-short-short", "长—短—短"},
            {"short-long-short", "短—长—短"},
            {"short-short-long", "短—短—长"},
            {"long-short-long", "长—短—长"},
            {"short-short-short", "短—短—短"},
            {"short-long-long", "短—长—长"},
            {"long-long-short", "长—长—短"},
            {"long-long-long", "长—长—长"},
            {"long-short", "长—短"}, {"short-long", "短—长"},
            {"long-long", "长—长"}, {"short-short", "短—短"},
            {"even-uneven", "平—仄"}, {"uneven-even", "仄—平"},
            {"even-even", "平—平"}, {"uneven-uneven", "仄—仄"},
        });
        for (const auto &[english, chinese] : patterns) {
            if (raw == english) return std::string(chinese);
        }
        return std::nullopt;
    };
    auto translate_meter_label = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string_view text = trim_view(raw);
        std::string system;
        bool quantitative = false;
        if (strip_prefix(text, "qualitative ")) system = "重音划分";
        else if (strip_prefix(text, "quantitative ")) {
            system = "音长划分";
            quantitative = true;
        }
        else return std::nullopt;
        const size_t split = text.find(' ');
        if (split == std::string_view::npos) return std::nullopt;
        const std::string_view foot = text.substr(0, split);
        const std::string_view length = text.substr(split + 1);
        struct FootName {
            std::string_view english;
            std::string_view stress;
            std::string_view weight;
        };
        static constexpr auto feet = std::to_array<FootName>({
            {"pyrrhic", "抑抑格", "短短格"},
            {"iambic", "抑扬格", "短长格"},
            {"trochaic", "扬抑格", "长短格"},
            {"spondaic", "扬扬格", "长长格"},
            {"tribrachic", "抑抑抑格", "短短短格"},
            {"dactylic", "扬抑抑格", "长短短格"},
            {"amphibrachic", "抑扬抑格", "短长短格"},
            {"anapaestic", "抑抑扬格", "短短长格"},
            {"bacchic", "抑扬扬格", "短长长格"},
            {"antibacchic", "扬扬抑格", "长长短格"},
            {"cretic", "扬抑扬格", "长短长格"},
            {"molossic", "扬扬扬格", "长长长格"},
        });
        static constexpr auto lengths = std::to_array<std::pair<std::string_view,
                                                                 std::string_view>>({
            {"monometer", "一音步"}, {"dimeter", "二音步"},
            {"trimeter", "三音步"}, {"tetrameter", "四音步"},
            {"pentameter", "五音步"}, {"hexameter", "六音步"},
            {"heptameter", "七音步"}, {"octameter", "八音步"},
        });
        const auto foot_it = std::find_if(feet.begin(), feet.end(),
            [&](const FootName &entry) { return entry.english == foot; });
        const auto length_it = std::find_if(lengths.begin(), lengths.end(),
            [&](const auto &entry) { return entry.first == length; });
        if (foot_it == feet.end() || length_it == lengths.end())
            return std::nullopt;
        return std::string(quantitative ? foot_it->weight : foot_it->stress) +
               std::string(length_it->second) + "，按" + system;
    };

    auto translate_measure = [&](std::string_view raw,
                                 bool lines_with)
            -> std::optional<std::string> {
        std::string_view text = trim_view(raw);
        if (lines_with) {
            if (!strip_prefix(text, "lines with ")) return std::nullopt;
        }
        if (text.ends_with(" in each line")) {
            text.remove_suffix(std::string_view(" in each line").size());
            text = trim_view(text);
        }
        static constexpr auto caesuras = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"an initial caesura", "在行首停顿"},
            {"a medial caesura", "在行中停顿"},
            {"a terminal caesura", "在行末停顿"},
        });
        for (const auto &[english, chinese] : caesuras) {
            if (text == std::string(english) + " in each line")
                return "各行均" + std::string(chinese);
            if (text == english)
                return std::string(chinese);
        }

        if (text.ends_with(" syllables")) {
            const auto count = number_value(
                text.substr(0, text.size() - std::string_view(" syllables").size()));
            if (!count) return std::nullopt;
            return "由" + chinese_number(*count, true) + "个音节组成";
        }
        if (text.ends_with(" syllable")) {
            const auto count = number_value(
                text.substr(0, text.size() - std::string_view(" syllable").size()));
            if (!count) return std::nullopt;
            return "由" + chinese_number(*count, true) + "个音节组成";
        }

        const size_t feet_at = text.find(" feet");
        const size_t foot_at = text.find(" foot");
        const size_t unit_at = feet_at != std::string_view::npos ? feet_at : foot_at;
        if (unit_at == std::string_view::npos) return std::nullopt;
        const auto count = number_value(text.substr(0, unit_at));
        if (!count) return std::nullopt;
        size_t cursor = unit_at + (feet_at != std::string_view::npos ? 5 : 5);
        std::string result = "采用" + chinese_number(*count, false) + "音步";
        std::string_view remainder = trim_view(text.substr(cursor));
        if (remainder.empty()) return result;
        while (!remainder.empty() && remainder.front() == ',') {
            remainder.remove_prefix(1);
            remainder = trim_view(remainder);
        }
        if (remainder.starts_with("and ")) {
            remainder.remove_prefix(4);
            remainder = trim_view(remainder);
        }

        struct PatternPrefix { std::string_view source; std::string_view chinese; };
        static constexpr auto prefixes = std::to_array<PatternPrefix>({
            {"with an accent pattern of ", "重音次序"},
            {"with a tone pattern of ", "平仄次序"},
            {"with a syllable weight pattern of ", "音长次序"},
            {"an accent pattern of ", "重音次序"},
            {"a tone pattern of ", "平仄次序"},
            {"a syllable weight pattern of ", "音长次序"},
        });
        const PatternPrefix *matched = nullptr;
        for (const PatternPrefix &prefix : prefixes) {
            if (!remainder.starts_with(prefix.source)) continue;
            matched = &prefix;
            remainder.remove_prefix(prefix.source.size());
            break;
        }
        if (!matched) return std::nullopt;
        std::string_view pattern_text = remainder;
        std::string_view meter_text;
        const size_t parenthesis = remainder.find(" (");
        if (parenthesis != std::string_view::npos && remainder.ends_with(')')) {
            pattern_text = remainder.substr(0, parenthesis);
            meter_text = remainder.substr(parenthesis + 2,
                                          remainder.size() - parenthesis - 3);
        }
        const auto pattern = translate_pattern(pattern_text);
        if (!pattern) return std::nullopt;
        result += "，" + std::string(matched->chinese) + "为“" + *pattern + "”";
        if (!meter_text.empty()) {
            const auto meter = translate_meter_label(meter_text);
            if (!meter) return std::nullopt;
            result += "（" + *meter + "）";
        }
        return result;
    };

    auto translate_relation_sentence = [&](std::string_view sentence)
            -> std::optional<std::string> {
        for (const auto &[suffix, chinese] : std::array<std::pair<
                 std::string_view, std::string_view>, 2>{{
                 {" has different readings depending on word breaks",
                  "可通过不同断句读出不同含义"},
                 {" can be read backwards as well as forwards",
                  "既可顺读也可倒读"},
             }}) {
            if (!sentence.ends_with(suffix)) continue;
            const auto subject = translate_scope(
                sentence.substr(0, sentence.size() - suffix.size()));
            if (!subject) return std::nullopt;
            return subject->chinese + std::string(chinese);
        }
        struct Relation { std::string_view source; int kind; };
        static constexpr auto relations = std::to_array<Relation>({
            {" shares the underlying meaning of ", 0},
            {" contrasts the underlying meaning of ", 1},
            {" is required to maintain the phrasing of ", 2},
            {" has the same grammatical structure as ", 3},
            {" uses the same placement of allusions as ", 4},
            {" reverses the grammatical structure of ", 5},
            {" reverses the word order of ", 6},
            {" presents a different view of the subject of ", 7},
            {" must expand the idea of ", 8},
        });
        for (const Relation &relation : relations) {
            const size_t at = sentence.find(relation.source);
            if (at == std::string_view::npos) continue;
            const auto subject = translate_scope(sentence.substr(0, at));
            const auto target = translate_scope(
                sentence.substr(at + relation.source.size()));
            if (!subject || !target) return std::nullopt;
            std::string result = subject->chinese;
            switch (relation.kind) {
            case 0: result += "与" + target->chinese + "含义相通"; break;
            case 1: result += "与" + target->chinese + "含义相反"; break;
            case 2: result += "必须沿用" + target->chinese + "的措辞"; break;
            case 3: result += "采用与" + target->chinese + "相同的句式"; break;
            case 4: result += "在与" + target->chinese +
                              "相同的位置运用典故"; break;
            case 5: result += "采用与" + target->chinese +
                              "相反的句法结构"; break;
            case 6: result += "把" + target->chinese + "的词序倒置"; break;
            case 7: result += "从另一角度描写" + target->chinese + "的主题"; break;
            case 8: result += "必须展开" + target->chinese + "的构思"; break;
            }
            return result;
        }
        return std::nullopt;
    };

    auto translate_rhyme_sentence = [&](std::string_view sentence)
            -> std::optional<std::string> {
        struct RhymePrefix { std::string_view source; std::string_view chinese; };
        static constexpr auto rhyme_prefixes = std::to_array<RhymePrefix>({
            {"The ending of every line of the poem rhymes with every other",
             "全诗行行押韵"},
            {"The ending of each line of the poem shares the same rhyme",
             "全诗各行押同一韵脚"},
            {"The ending of each line of this part rhymes with each other",
             "这一部分行行押韵"},
            {"The ending of each line of this part shares the same rhyme",
             "这一部分各行押同一韵脚"},
            {"The ending of each line shares the same rhyme",
             "各行押同一韵脚"},
            {"As a rule throughout the poem, the end rhymes don't generally match perfectly",
             "全诗通常只求近似押韵，不要求韵脚完全相同"},
            {"In this part of the poem, the end rhymes don't need to match perfectly",
             "这一部分只求近似押韵，不要求韵脚完全相同"},
        });
        for (const RhymePrefix &prefix : rhyme_prefixes) {
            if (!sentence.starts_with(prefix.source)) continue;
            std::string_view tail = trim_view(sentence.substr(prefix.source.size()));
            if (tail.empty()) return std::string(prefix.chinese);
            if (tail == ", though the rhyming doesn't have to be perfect")
                return std::string(prefix.chinese) + "，也可押近似韵";
            static constexpr std::string_view plural_exception_prefix =
                ", though rhymes at the end of lines in the ";
            static constexpr std::string_view plural_exception_suffix =
                " lines don't need to match perfectly";
            if (tail.starts_with(plural_exception_prefix) &&
                tail.ends_with(plural_exception_suffix)) {
                std::string_view ordinals = tail.substr(
                    plural_exception_prefix.size(),
                    tail.size() - plural_exception_prefix.size() -
                        plural_exception_suffix.size());
                std::vector<std::string> translated_ordinals;
                for (const std::string_view item : split_english_list(ordinals)) {
                    const auto value = ordinal_value(item);
                    if (!value) return std::nullopt;
                    translated_ordinals.push_back(
                        chinese_number(*value, false));
                }
                if (translated_ordinals.empty()) return std::nullopt;
                return std::string(prefix.chinese) + "，但第" +
                       join_chinese(translated_ordinals) +
                       "行可以押近似韵";
            }
            static constexpr std::string_view single_exception_prefix =
                ", though the rhyme at the end of the ";
            static constexpr std::string_view single_exception_suffix =
                " line doesn't need to match perfectly";
            if (tail.starts_with(single_exception_prefix) &&
                tail.ends_with(single_exception_suffix)) {
                const std::string_view ordinal = tail.substr(
                    single_exception_prefix.size(),
                    tail.size() - single_exception_prefix.size() -
                        single_exception_suffix.size());
                const auto value = ordinal_value(ordinal);
                if (!value) return std::nullopt;
                return std::string(prefix.chinese) + "，但第" +
                       chinese_number(*value, false) +
                       "行可以押近似韵";
            }
            return std::nullopt;
        }

        static constexpr std::string_view scheme_prefix = "The rhyme scheme ";
        if (sentence.starts_with(scheme_prefix)) {
            const std::string_view after_prefix =
                sentence.substr(scheme_prefix.size());
            std::string_view qualifier;
            std::string_view scheme;
            if (after_prefix.starts_with("is ")) {
                scheme = after_prefix.substr(3);
            } else {
                const size_t is_at = after_prefix.rfind(" is ");
                if (is_at == std::string_view::npos) return std::nullopt;
                qualifier = after_prefix.substr(0, is_at);
                scheme = after_prefix.substr(is_at + 4);
            }
            bool numbered_refrain = false;
            static constexpr std::string_view refrain_suffix =
                ", where numbers indicate a refrain";
            if (scheme.ends_with(refrain_suffix)) {
                scheme.remove_suffix(refrain_suffix.size());
                numbered_refrain = true;
            }
            // Generated rhyme labels can use either case. Preserve the
            // notation verbatim; rejecting lowercase labels rejects the
            // complete poetic description, including its other paragraphs.
            const bool valid_scheme = !scheme.empty() &&
                std::all_of(scheme.begin(), scheme.end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') ||
                           (ch >= 'a' && ch <= 'z') ||
                           (ch >= '0' && ch <= '9');
                });
            if (!valid_scheme) return std::nullopt;
            std::string result;
            if (qualifier == "of the poem") result = "全诗的韵式为 ";
            else if (qualifier.empty()) result = "韵式为 ";
            else if (qualifier == "of this part") result = "这一部分的韵式为 ";
            else if (qualifier == "respecting the full poem")
                result = "按全诗统一标记韵脚时，这一部分的韵式为 ";
            else if (qualifier == "repeating in each stanza")
                result = (last_scope.kind == PoeticScopeKind::Part
                              ? last_scope.chinese : "全诗") +
                         "每节重复采用韵式 ";
            else if (qualifier == "repeating in each stanza of the poem")
                result = "全诗每节重复采用韵式 ";
            else if (qualifier == "within each stanza")
                result = (last_scope.kind == PoeticScopeKind::Part
                              ? last_scope.chinese : "全诗") +
                         "各节的韵式均为 ";
            else if (qualifier == "within each stanza of the poem")
                result = "全诗各节的韵式均为 ";
            else if (qualifier.starts_with(
                         "repeating in each stanza of ")) {
                const auto scope = translate_scope(qualifier.substr(
                    std::string_view(
                        "repeating in each stanza of ").size()));
                if (!scope) return std::nullopt;
                result = scope->chinese + "的各诗节重复采用韵式 ";
            } else if (qualifier.starts_with(
                           "within each stanza of ")) {
                const auto scope = translate_scope(qualifier.substr(
                    std::string_view("within each stanza of ").size()));
                if (!scope) return std::nullopt;
                result = scope->chinese + "各节的韵式均为 ";
            }
            else if (qualifier == "within this stanza")
                result = "本节诗采用韵式 ";
            else return std::nullopt;
            result += scheme;
            if (numbered_refrain) result += "，其中数字代表叠句";
            return result;
        }

        // When the form combines a stanza-level scheme with a broader one,
        // DF emits a separate requirement for exact rhyme. Express the
        // relationship directly in Chinese instead of retaining its awkward
        // English participial modifier.
        if (sentence.starts_with("The rhyme") &&
            sentence.ends_with(" need to match perfectly")) {
            std::string_view qualifier = sentence;
            qualifier.remove_prefix(std::string_view("The rhyme").size());
            qualifier.remove_suffix(
                std::string_view(" need to match perfectly").size());
            if (qualifier.starts_with('s')) qualifier.remove_prefix(1);
            qualifier = trim_view(qualifier);
            if (qualifier == "repeating in each stanza" ||
                qualifier == "repeating in each stanza of the poem")
                return std::string("各诗节相应位置的韵脚必须完全相合");
            if (qualifier == "within each stanza" ||
                qualifier == "within each stanza of the poem")
                return std::string("每节诗内部对应的韵脚必须完全相合");
            if (qualifier.starts_with("repeating in each stanza of ")) {
                const auto scope = translate_scope(qualifier.substr(
                    std::string_view(
                        "repeating in each stanza of ").size()));
                if (!scope) return std::nullopt;
                return scope->chinese +
                       "的各诗节相应位置韵脚必须完全相合";
            }
            if (qualifier.starts_with("within each stanza of ")) {
                const auto scope = translate_scope(qualifier.substr(
                    std::string_view("within each stanza of ").size()));
                if (!scope) return std::nullopt;
                return scope->chinese +
                       "的各诗节内部对应韵脚必须完全相合";
            }
            if (qualifier == "respecting the full poem")
                return std::string("全诗对应位置的韵脚必须完全相合");
            if (qualifier == "within this stanza")
                return std::string("本节诗中对应的韵脚必须完全相合");
            if (qualifier.empty())
                return std::string("相关韵脚必须完全相合");
            return std::nullopt;
        }

        for (const auto &[prefix, plural] : std::array<std::pair<
                 std::string_view, bool>, 2>{{
                 {"The refrain occurs as lines ", true},
                 {"The refrain occurs as line ", false},
             }}) {
            if (!sentence.starts_with(prefix)) continue;
            const std::string_view lines = trim_view(sentence.substr(prefix.size()));
            if (lines.empty()) return std::nullopt;
            std::vector<std::string> numbers;
            for (const std::string_view item : split_english_list(lines)) {
                const bool numeric = !item.empty() &&
                    std::all_of(item.begin(), item.end(), [](unsigned char ch) {
                        return ch >= '0' && ch <= '9';
                    });
                const std::optional<int> word_value = number_value(item);
                const std::optional<int> ordinal = ordinal_value(item);
                if (!numeric && !word_value && !ordinal) return std::nullopt;
                const int value = numeric
                    ? parse_int(std::string(item), -1)
                    : word_value ? *word_value : *ordinal;
                if (value < 0) return std::nullopt;
                numbers.push_back(chinese_number(value, false));
            }
            if (numbers.empty() || (!plural && numbers.size() != 1))
                return std::nullopt;
            return "第" + join_chinese(numbers) +
                   (plural ? "行为叠句" : "行是叠句");
        }
        return std::nullopt;
    };

    auto translate_scoped_sentence = [&](std::string_view sentence)
            -> std::optional<std::string> {
        if (sentence.starts_with("Certain lines ")) {
            const auto clauses = translate_parallel_predicates(sentence);
            if (!clauses) return std::nullopt;
            return "某些诗行" + *clauses;
        }

        struct Marker { std::string_view source; int kind; };
        static constexpr auto markers = std::to_array<Marker>({
            {" is always written from the perspective of ", 15},
            {" is written from the perspective of ", 0},
            {" must make use of ", 1},
            {" must feature ", 2},
            {" has lines with ", 3},
            {" is intended ", 4},
            {" concerns ", 5},
            {" includes ", 6},
            {" has ", 7},
            {" is dramatic", 8}, {" is reflective", 9},
            {" is ribald", 10}, {" is light", 11},
            {" is solemn", 12}, {" is a riddle", 13},
            {" is a narrative", 14},
        });
        const Marker *matched = nullptr;
        size_t marker_at = std::string_view::npos;
        for (const Marker &marker : markers) {
            const size_t at = sentence.find(marker.source);
            if (at == std::string_view::npos) continue;
            if (!matched || at < marker_at ||
                (at == marker_at && marker.source.size() > matched->source.size())) {
                matched = &marker;
                marker_at = at;
            }
        }
        if (!matched) return std::nullopt;
        const auto scope = translate_scope(sentence.substr(0, marker_at));
        if (!scope) return std::nullopt;
        // In a section paragraph, subsequent `It ...` sentences continue to
        // refer to that part or line even when a relation about one of its
        // internal lines intervenes. Relation sentences are handled above and
        // deliberately do not replace this discourse referent.
        if (scope->kind != PoeticScopeKind::Lines)
            last_scope = *scope;
        std::string_view value = trim_view(
            sentence.substr(marker_at + matched->source.size()));
        std::string result = scope->chinese;
        switch (matched->kind) {
        case 15:
        case 0: {
            const auto persona = translate_persona(value);
            if (!persona) return std::nullopt;
            result += matched->kind == 15 ? "始终从" : "从";
            result += *persona + "的视角展开";
            break;
        }
        case 1: {
            const auto terms = translate_term_list(value);
            if (!terms) return std::nullopt;
            result += "必须运用" + *terms;
            break;
        }
        case 2: {
            const auto terms = translate_term_list(value);
            if (!terms) return std::nullopt;
            result += "必须包含" + *terms;
            break;
        }
        case 3: {
            const auto measure = translate_measure(
                "lines with " + std::string(value), true);
            if (!measure) return std::nullopt;
            result += "的各行均" + *measure;
            break;
        }
        case 4: {
            const auto action = translate_action(value);
            if (!action) return std::nullopt;
            result += "旨在" + *action;
            break;
        }
        case 5: {
            const auto topic = translate_topic(value);
            if (!topic) return std::nullopt;
            result += "描写" + *topic;
            break;
        }
        case 6: {
            const auto structure = translate_structure_list(value);
            if (!structure) return std::nullopt;
            result += "包括" + *structure;
            break;
        }
        case 7: {
            const auto measure = translate_measure(value, false);
            if (!measure) return std::nullopt;
            if (scope->kind == PoeticScopeKind::Lines)
                result += "均" + *measure;
            else
                result += *measure;
            break;
        }
        default: {
            static constexpr std::array<std::string_view, 7> styles = {
                "富有戏剧性", "侧重沉思与感悟", "风格粗俗诙谐", "风格轻快",
                "风格庄重", "写成谜语", "采用叙事体",
            };
            const int style_index = matched->kind - 8;
            if (style_index < 0 ||
                style_index >= static_cast<int>(styles.size()))
                return std::nullopt;
            result += styles[static_cast<size_t>(style_index)];
            if (!value.empty()) {
                // The generator emits both `is light and is intended ...`
                // and `is light and intended ...` depending on the section
                // template.  They carry the same meaning and must remain one
                // atomic sentence; rejecting the latter left every detached
                // part paragraph in English.
                if (!strip_prefix(value, "and is intended ") &&
                    !strip_prefix(value, "and intended ")) {
                    return std::nullopt;
                }
                const auto action = translate_action(value);
                if (!action) return std::nullopt;
                result += "，旨在" + *action;
            }
            break;
        }
        }
        return result;
    };

    // The opening combines the form's character, purpose, subject and origin.
    // Parse those fields first and reorder them into an idiomatic Chinese
    // sentence instead of mirroring the English modifier chain.
    std::string translated;
    size_t cursor = 0;
    // The native generator chooses a civilization, a performance group or
    // an individual creator for the provenance field.
    struct FormOrigin {
        std::string_view source, prefix, suffix;
        bool person;
    };
    static constexpr auto form_origins = std::to_array<FormOrigin>({
        {", originating in ", "，起源于“", "”", false},
        {" which grew out of the performances of ",
         "，从“", "”的表演中发展而来", false},
        {" originally devised by ", "，最初由", "创作", true},
    });
    auto find_origin = [&](std::string_view text) {
        const FormOrigin* origin = nullptr;
        size_t at = std::string_view::npos;
        for (const auto& candidate : form_origins) {
            const size_t candidate_at = text.find(candidate.source);
            if (candidate_at < at) {
                origin = &candidate;
                at = candidate_at;
            }
        }
        return std::pair{origin, at};
    };
    const bool has_opening = find_origin(source).first &&
        source.find(" poetic ") != std::string::npos;
    if (!native_chapter || has_opening) {
    // A generated title or civilization may itself contain a period. The
    // next fixed poetic clause, outside quotes/parentheses, closes the opening.
    const auto opening_spans = form_description_sentences(source, "poetry",
        [&](std::string_view sentence) -> std::optional<std::string> {
            return find_origin(sentence).first
                ? std::optional<std::string>("opening") : std::nullopt;
        }, false);
    if (opening_spans.empty()) return std::nullopt;
    const size_t opening_end = opening_spans.front().content_end;
    if (opening_end >= source.size() || source[opening_end] != '.') return std::nullopt;
    const std::string_view opening(source.data(), opening_end);
    const auto [origin_form, origin_at] = find_origin(opening);
    if (!origin_form) return std::nullopt;
    std::string_view identity = opening.substr(0, origin_at);
    const auto raw_origin = opening.substr(origin_at + origin_form->source.size());
    auto origin = origin_form->person ? translate_legends_actor(raw_origin) : std::nullopt;
    if (!origin || origin->empty() || contains_ascii_letters(*origin))
        origin = translate_generated_reference(raw_origin);
    if (!origin) return std::nullopt;
    const std::string provenance = std::string(origin_form->prefix) +
        *origin + std::string(origin_form->suffix);

    struct FormIdentity { std::string_view source; std::string_view chinese; };
    static constexpr auto form_identities = std::to_array<FormIdentity>({
        {"A dramatic poetic form", "戏剧性诗体"},
        {"A reflective poetic form", "沉思诗体"},
        {"A ribald poetic form", "粗俗诙谐的诗体"},
        {"A light poetic form", "轻快诗体"},
        {"A solemn poetic form", "庄重诗体"},
        {"A poetic narrative", "叙事诗"},
        {"A poetic riddle", "诗谜"},
        {"A poetic form", "诗体"},
    });
    const FormIdentity *form = nullptr;
    std::optional<std::string> form_title;
    std::string named_identity;
    for (const FormIdentity &candidate : form_identities) {
        if (!identity.starts_with(candidate.source)) continue;
        if (!form || candidate.source.size() > form->source.size()) form = &candidate;
    }
    // The Knowledge page normally prefixes the generated grammar with the
    // art form's proper name: `The Scent of Meadows is a reflective poetic
    // form ...`. Some other contexts expose the anonymous `A reflective
    // poetic form ...` variant. Resolve the generated title independently,
    // then feed the shared form/purpose tail through exactly the same finite
    // grammar. Treating the complete physical row as a procedural name is
    // what previously produced a transliterated sentence head followed by an
    // untranslated English paragraph.
    if (!form) {
        for (const FormIdentity &candidate : form_identities) {
            // Every canonical identity starts with `A `; after a title the
            // same generator emits its lower-case form after ` is `.
            if (!candidate.source.starts_with("A ")) continue;
            const std::string marker =
                " is a " + std::string(candidate.source.substr(2));
            const size_t marker_at = identity.find(marker);
            if (marker_at == std::string_view::npos || marker_at == 0) continue;
            const auto translated_title = translate_generated_reference(
                identity.substr(0, marker_at));
            if (!translated_title) continue;
            // Preserve the English referent before normalizing the opening.
            // Only this document's own title is a poem scope, not an
            // arbitrary generated name elsewhere in a sentence.
            source_form_title = identity.substr(0, marker_at);
            named_identity = std::string(candidate.source);
            named_identity += identity.substr(marker_at + marker.size());
            identity = named_identity;
            form = &candidate;
            form_title = std::move(*translated_title);
            break;
        }
    }
    if (!form) return std::nullopt;
    identity.remove_prefix(form->source.size());
    if (form_title) {
        translated = "“" + *form_title + "”是一种" +
                     std::string(form->chinese) + provenance;
    } else {
        translated = "这是一种" + std::string(form->chinese) +
                     provenance;
    }
    if (!identity.empty()) {
        if (strip_prefix(identity, " intended ")) {
            const auto action = translate_action(identity);
            if (!action) return std::nullopt;
            translated += "，旨在" + *action;
        } else if (strip_prefix(identity, " concerning ")) {
            const auto topic = translate_topic(identity);
            if (!topic) return std::nullopt;
            translated += "，以" + *topic + "为题";
        } else {
            return std::nullopt;
        }
    }
    translated += "。";
    cursor = opening_end + 1;
    }

    bool chapter_has_antecedent = !native_chapter || cursor != 0;
    auto translate_sentence = [&](std::string_view sentence) -> std::optional<std::string> {
        // A detached native chapter beginning with a pronoun has no proven
        // part/line antecedent. Full cross-chapter parsing remains first.
        if (!chapter_has_antecedent && sentence.starts_with("It ") &&
            !sentence.starts_with("It is always written from the perspective of ") &&
            native_chapter) return std::nullopt;
        const auto previous_scope = last_scope;
        std::optional<std::string> part;
        if (sentence ==
            "The rules of the form are applied by poets to produce individual poems which can be recited") {
            part = "诗人按这一诗体写诗，供人吟诵";
        } else if (sentence ==
                   "The form guides poets during improvised performances") {
            part = "诗人按这一诗体即兴吟诗";
        } else if (sentence ==
                   "It is always written from the perspective of the author") {
            part = "作品始终从作者本人的视角展开";
        } else if (sentence.starts_with(
                       "It is always written from the perspective of ")) {
            const auto persona = translate_persona(sentence.substr(
                std::string_view("It is always written from the perspective of ").size()));
            if (persona) part = "作品始终从" + *persona + "的视角展开";
        } else if (sentence.starts_with("Use of ") &&
                   sentence.ends_with(" is characteristic of the form")) {
            const std::string_view list = sentence.substr(
                7, sentence.size() - 7 -
                       std::string_view(" is characteristic of the form").size());
            const auto terms = translate_term_list(list);
            if (terms) part = "这种诗体常用" + *terms;
        } else if ((sentence.starts_with(
                        "A form of parallelism is common throughout the poem, in that ") ||
                    sentence.starts_with(
                        "Forms of parallelism are common throughout the poem, in that "))) {
            const size_t in_that = sentence.find("in that ");
            const auto clauses = translate_parallel_predicates(
                sentence.substr(in_that + 8));
            if (clauses) part = "全诗常用句式上的呼应与对照：有些诗行" + *clauses;
        } else if (sentence.starts_with(
                       "Linguistic skill is required in the visual presentation as well, as ")) {
            const auto terms = translate_term_list(sentence.substr(
                std::string_view(
                    "Linguistic skill is required in the visual presentation as well, as ").size()));
            if (terms) part = "诗篇还讲究文字的排列方式，包含" + *terms;
        }
        if (!part) part = translate_structure_sentence(sentence);
        if (!part) part = translate_rhyme_sentence(sentence);
        if (!part) part = translate_relation_sentence(sentence);
        if (!part) part = translate_scoped_sentence(sentence);
        // Latin letters and digits can survive only in the explicitly parsed
        // rhyme-scheme notation (such as ABCD1A1CD). No source prose is ever
        // copied into a translated sentence.
        if (!part || part->empty()) last_scope = previous_scope;
        else if (sentence.starts_with("The poem ") || sentence.starts_with("Each line ") ||
            sentence.starts_with("Every line of the poem ") ||
            sentence.starts_with("Certain lines ") || sentence.starts_with("In the ") ||
            (sentence.starts_with("The ") && form_description_fixed_start(sentence, "poetry") &&
             !sentence.starts_with("The rules ") && !sentence.starts_with("The rhyme")))
            chapter_has_antecedent = true;
        return part;
    };
    // Chapter fallback remains atomic: one unknown clause retains the entire
    // native [B] unit, rather than guessing a boundary inside its names.
    const auto sentences = form_description_sentences(
        std::string_view(source).substr(cursor), "poetry", translate_sentence, false);
    for (const auto& sentence : sentences) {
        if (!sentence.target || sentence.target->empty()) return std::nullopt;
        translated += *sentence.target + "。";
    }
    if (translated.empty()) return std::nullopt;
    return work_introduction + translated;
}

TranslationResult Overlay::translate_poetic_form_description_uncached_result(
        std::string_view raw_description, bool display) const {
    TranslationResult result;
    result.source = raw_description;
    result.kind = "poetry";
    result.owner = "native_knowledge";
    result.resource_revision = RULESETS.resource_revision();
    try {
        if (auto full = translate_poetic_form_description_unit(raw_description, false)) {
            result = TranslationResult::translated(raw_description, std::move(*full), "poetry");
            result.owner = "native_knowledge";
            result.resource_revision = RULESETS.resource_revision();
            result.policy = display ? TranslationPolicy::Display : TranslationPolicy::Strict;
            return result;
        }
    } catch (const TranslationWorkLimit&) {
        if (!display) throw;
        result = preserve_form_description(raw_description, "poetry", TranslationStatus::WorkLimited);
        result.owner = "native_knowledge";
        return result;
    }
    if (!display) return result;
    // Only [B] is a native section boundary. No sentence punctuation, title,
    // ordinal, or arbitrary English word creates an otherwise missing chapter.
    if (raw_description.find("[B]") == std::string_view::npos) {
        result = preserve_form_description(raw_description, "poetry");
        result.owner = "native_knowledge";
        return result;
    }
    size_t begin = 0;
    bool limited = false;
    while (begin <= raw_description.size()) {
        const size_t boundary = raw_description.find("[B]", begin);
        const size_t end = boundary == std::string_view::npos ? raw_description.size() : boundary;
        const auto chapter = raw_description.substr(begin, end - begin);
        std::optional<std::string> target;
        if (trim_view(chapter).empty()) target = std::string{};
        else if (!limited) {
            try {
                target = translate_poetic_form_description_unit(chapter, true);
            } catch (const TranslationWorkLimit&) {
                limited = true;
            }
        }
        if (target) {
            result.append(TranslationResult::translated(chapter, std::move(*target),
                "poetry_chapter"), begin);
        } else {
            result.append(preserve_form_description(chapter, "poetry_chapter",
                limited ? TranslationStatus::WorkLimited : TranslationStatus::Untranslated), begin);
        }
        if (boundary == std::string_view::npos) break;
        result.append(TranslationResult::translated("[B]", "\n", "poetry_section_boundary",
            std::vector<size_t>{0}), boundary);
        begin = boundary + 3;
    }
    result.policy = TranslationPolicy::Display;
    return result;
}

TranslationResult Overlay::translate_poetic_form_description_result(
        std::string_view raw_description) const {
    const uint64_t native_context = native_identity_translation_context();
    struct PoeticDisplayCache {
        const Overlay* owner = nullptr;
        fs::file_time_type mapping{}, names{}, instruments{};
        uint64_t rules_revision = 0;
        std::unordered_map<std::string, TranslationResult> targets;
    };
    auto& cache = reloadable_thread_state<PoeticDisplayCache, struct PoeticDisplayCacheTag>();
    if (cache.owner != this || cache.mapping != mapping_mtime_ ||
        cache.names != name_editor_mtime_ ||
        cache.instruments != instrument_translations_mtime_ ||
        cache.rules_revision != RULESETS.resource_revision()) {
        cache = {};
        cache.owner = this;
        cache.mapping = mapping_mtime_;
        cache.names = name_editor_mtime_;
        cache.instruments = instrument_translations_mtime_;
        cache.rules_revision = RULESETS.resource_revision();
    }
    const std::string key = std::to_string(native_context) + '\x1f' + std::string(raw_description);
    if (const auto found = cache.targets.find(key); found != cache.targets.end())
        return found->second;
    auto result = translate_poetic_form_description_uncached_result(raw_description, true);
    if (cache.targets.size() >= 128) cache.targets.clear();
    if (native_identity_translation_context() == native_context)
        cache.targets.emplace(key, result);
    return result;
}
