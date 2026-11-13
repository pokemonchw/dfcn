std::optional<std::string> Overlay::translate_musical_form_paragraph(
        std::string_view raw_paragraph) const {
    return translate_musical_form_paragraph_result(raw_paragraph, false).strict_target();
}

TranslationResult Overlay::translate_musical_form_paragraph_result(
        std::string_view raw_paragraph, bool display) const {
    if (display) {
        try {
            auto full = translate_musical_form_paragraph_result(raw_paragraph, false);
            if (full.usable()) {
                full.policy = TranslationPolicy::Display;
                return full;
            }
        } catch (const TranslationWorkLimit&) {
            return preserve_form_description(raw_paragraph, "music", TranslationStatus::WorkLimited);
        }
    }
    const auto normalized = normalize_form_description(raw_paragraph);
    const std::string& source = normalized.text;
    if (source.empty()) return {};

    auto contains_ascii_letters = [](std::string_view value) {
        return std::any_of(value.begin(), value.end(), [](unsigned char ch) {
            return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
        });
    };
    auto translate_reference = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string value = trim(std::string(raw));
        while (!value.empty() &&
               (value.back() == '.' || value.back() == ',')) {
            value.pop_back();
        }
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
        return accept(translate_procedural_fragment(value, true));
    };
    // Both the form overview and passage voicing can recite a specific work
    // directly, without `a composition of` or `the words of`. Keep that title
    // in the existing reference grammar and share the material parsing.
    auto translate_recited_material = [&](std::string_view raw)
            -> std::optional<std::string> {
        raw = trim_view(raw);
        if (raw.empty()) return "吟诵未注明的内容";
        if (raw == "nonsensical words and sounds")
            return "诵念没有具体含义的词句与音节";
        if (raw == "a composition of") return "吟诵体式未注明的诗作";
        if (raw == "the words of") return "吟诵题名未注明的作品中的词句";
        if (raw.starts_with("a composition of ")) {
            const auto work = translate_reference(raw.substr(17));
            if (!work) return std::nullopt;
            return "吟诵“" + *work + "”体的诗作";
        }
        if (raw.starts_with("the words of ")) {
            const auto work = translate_reference(raw.substr(13));
            if (!work) return std::nullopt;
            return "吟诵《" + *work + "》中的词句";
        }
        if (raw.starts_with("The ")) {
            const auto work = translate_reference(raw);
            if (!work) return std::nullopt;
            return "吟诵《" + *work + "》";
        }
        return std::nullopt;
    };
    // Scale degrees, beat names and their spoken abbreviations are words from
    // the civilization's native language, not English procedural names.  Give
    // the native-language resolver first refusal for those grammar slots.  In
    // particular, accented Dwarven words arrive here as single CP437 bytes
    // (for example g\x95stang/g\x95); trying the ordinary compositional rules
    // first can reject the whole otherwise valid scale paragraph when such a
    // byte has no standalone UTF-8 dictionary entry.
    auto translate_native_reference = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string value = trim(std::string(raw));
        while (!value.empty() &&
               (value.back() == '.' || value.back() == ',')) {
            value.pop_back();
        }
        if (value.empty()) return std::nullopt;
        if (auto translated = translate_procedural_fragment(value, true);
            translated && !translated->empty() &&
            !contains_ascii_letters(*translated)) {
            return translated;
        }
        return translate_reference(value);
    };
    auto join_chinese = [](const std::vector<std::string> &items,
                           std::string_view separator = "、") {
        std::string result;
        for (size_t index = 0; index < items.size(); ++index) {
            if (index) result += separator;
            result += items[index];
        }
        return result;
    };
    // Generated lists can contain commas inside pronunciation annotations
    // (`zustash (spoken zu, 1st)`) and can use `as well as` in addition to
    // ordinary conjunctions.  A delimiter-only split corrupts those semantic
    // units, after which the enclosing paragraph can no longer be translated
    // atomically.  Split only at top-level list punctuation.
    auto split_list = [](std::string_view raw) {
        std::vector<std::string_view> items;
        size_t cursor = 0;
        while (cursor < raw.size()) {
            while (cursor < raw.size() && raw[cursor] == ' ') ++cursor;
            for (const std::string_view leading : {
                     std::string_view("and "), std::string_view("or "),
                     std::string_view("as well as ")}) {
                if (raw.substr(cursor).starts_with(leading)) {
                    cursor += leading.size();
                    break;
                }
            }
            if (cursor >= raw.size()) break;

            size_t next = raw.size();
            size_t separator_size = 0;
            int parentheses = 0;
            for (size_t at = cursor; at < raw.size(); ++at) {
                if (raw[at] == '(') {
                    ++parentheses;
                    continue;
                }
                if (raw[at] == ')') {
                    parentheses = std::max(0, parentheses - 1);
                    continue;
                }
                if (parentheses != 0) continue;
                if (raw.substr(at).starts_with(", ")) {
                    next = at;
                    separator_size = 2;
                    break;
                }
                for (const std::string_view separator : {
                         std::string_view(" as well as "),
                         std::string_view(" and "),
                         std::string_view(" or ")}) {
                    if (!raw.substr(at).starts_with(separator)) continue;
                    next = at;
                    separator_size = separator.size();
                    break;
                }
                if (separator_size) break;
            }
            std::string_view item = raw.substr(cursor, next - cursor);
            while (!item.empty() && item.front() == ' ') item.remove_prefix(1);
            while (!item.empty() && item.back() == ' ') item.remove_suffix(1);
            if (!item.empty()) items.push_back(item);
            if (next == raw.size()) break;
            cursor = next + separator_size;
        }
        return items;
    };
    auto number_value = [](std::string_view raw) -> std::optional<int> {
        std::string value = lower(trim(std::string(raw)));
        // Share the inverse of the native recursive cardinal formatter for
        // every magnitude; the relaxed legacy spellings below remain valid.
        if (const auto number = adventure_location_count(value))
            return static_cast<int>(*number);
        if (value.starts_with("negative ")) {
            if (const auto number = adventure_location_count(value.substr(9)))
                return static_cast<int>(-*number);
        }
        if (!value.empty() && std::all_of(
                value.begin(), value.end(), [](unsigned char ch) {
                    return ch >= '0' && ch <= '9';
                })) {
            return parse_int(value, -1);
        }
        std::replace(value.begin(), value.end(), '-', ' ');
        static constexpr auto small = std::to_array<std::pair<
            std::string_view, int>>({
            {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
            {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
            {"eight", 8}, {"nine", 9}, {"ten", 10}, {"eleven", 11},
            {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14},
            {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
            {"eighteen", 18}, {"nineteen", 19},
            {"twenty", 20}, {"thirty", 30}, {"forty", 40},
            {"fifty", 50}, {"sixty", 60}, {"seventy", 70},
            {"eighty", 80}, {"ninety", 90},
        });
        int total = 0;
        int group = 0;
        bool found = false;
        size_t cursor = 0;
        while (cursor < value.size()) {
            while (cursor < value.size() && value[cursor] == ' ') ++cursor;
            if (cursor >= value.size()) break;
            const size_t end = value.find(' ', cursor);
            const std::string_view word(value.data() + cursor,
                (end == std::string::npos ? value.size() : end) - cursor);
            if (word == "and") {
                cursor = end == std::string::npos ? value.size() : end + 1;
                continue;
            }
            bool recognized = false;
            for (const auto &[english, number] : small) {
                if (word != english) continue;
                group += number;
                recognized = true;
                found = true;
                break;
            }
            if (!recognized && word == "hundred") {
                group = std::max(1, group) * 100;
                recognized = found = true;
            } else if (!recognized && word == "thousand") {
                total += std::max(1, group) * 1000;
                group = 0;
                recognized = found = true;
            }
            if (!recognized) return std::nullopt;
            cursor = end == std::string::npos ? value.size() : end + 1;
        }
        if (!found) return std::nullopt;
        return total + group;
    };
    auto chinese_number = [](int value) {
        static constexpr std::array<std::string_view, 10> digits = {
            "零", "一", "二", "三", "四", "五", "六", "七", "八", "九",
        };
        if (value >= 0 && value < 10)
            return std::string(digits[static_cast<size_t>(value)]);
        if (value >= 10 && value < 20)
            return std::string("十") +
                (value == 10 ? "" : std::string(digits[value % 10]));
        if (value >= 20 && value < 100) {
            std::string result(digits[value / 10]);
            result += "十";
            if (value % 10) result += digits[value % 10];
            return result;
        }
        return std::to_string(value);
    };
    auto translate_count = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string value = lower(trim(std::string(raw)));
        if (value == "a" || value == "an" || value == "a single" ||
            value == "single") return std::string("一");
        const size_t range = value.find(" to ");
        if (range != std::string::npos) {
            const auto first = number_value(value.substr(0, range));
            const auto last = number_value(value.substr(range + 4));
            if (!first || !last) return std::nullopt;
            return chinese_number(*first) + "至" + chinese_number(*last);
        }
        if (value.starts_with("up to ")) {
            const auto count = number_value(value.substr(6));
            if (!count) return std::nullopt;
            return "最多" + chinese_number(*count);
        }
        const auto count = number_value(value);
        if (!count) return std::nullopt;
        return chinese_number(*count);
    };
    auto ordinal_value = [&](std::string_view raw) -> std::optional<int> {
        std::string value = lower(trim(std::string(raw)));
        if (value.size() > 2) {
            const std::string suffix = value.substr(value.size() - 2);
            if (suffix == "st" || suffix == "nd" || suffix == "rd" ||
                suffix == "th") {
                const std::string digits = value.substr(0, value.size() - 2);
                if (!digits.empty() && std::all_of(
                        digits.begin(), digits.end(), [](unsigned char ch) {
                            return ch >= '0' && ch <= '9';
                        })) {
                    return parse_int(digits, -1);
                }
            }
        }
        static constexpr auto ordinals = std::to_array<std::pair<
            std::string_view, int>>({
            {"first", 1}, {"second", 2}, {"third", 3}, {"fourth", 4},
            {"fifth", 5}, {"sixth", 6}, {"seventh", 7}, {"eighth", 8},
            {"ninth", 9}, {"tenth", 10}, {"eleventh", 11},
            {"twelfth", 12}, {"thirteenth", 13}, {"fourteenth", 14},
            {"fifteenth", 15}, {"sixteenth", 16}, {"seventeenth", 17},
            {"eighteenth", 18}, {"nineteenth", 19}, {"twentieth", 20},
            {"thirtieth", 30}, {"fortieth", 40}, {"fiftieth", 50},
            {"sixtieth", 60}, {"seventieth", 70}, {"eightieth", 80},
            {"ninetieth", 90},
        });
        for (const auto &[english, number] : ordinals) {
            if (value == english) return number;
        }
        const size_t hyphen = value.find('-');
        if (hyphen == std::string::npos) return std::nullopt;
        const auto tens = number_value(value.substr(0, hyphen));
        if (!tens || *tens < 20 || *tens % 10 != 0) return std::nullopt;
        for (const auto &[english, number] : ordinals) {
            if (number < 10 && value.substr(hyphen + 1) == english)
                return *tens + number;
        }
        return std::nullopt;
    };
    auto translate_reference_list = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::vector<std::string> translated;
        for (std::string_view item : split_list(raw)) {
            bool one_item = false;
            if (item.starts_with("the ")) {
                item.remove_prefix(4);
            } else if (item.starts_with("a ")) {
                item.remove_prefix(2);
                one_item = true;
            } else if (item.starts_with("an ")) {
                item.remove_prefix(3);
                one_item = true;
            }

            // Instrument ensembles are emitted as counted references, for
            // example `one to five r\x84m and a akmesh`.  The count is grammar,
            // not part of the generated instrument name, so resolve the two
            // independently and retain both in the Chinese sentence.
            std::optional<std::string> counted;
            for (size_t boundary = item.find(' ');
                 boundary != std::string_view::npos;
                 boundary = item.find(' ', boundary + 1)) {
                const auto count = translate_count(item.substr(0, boundary));
                if (!count) continue;
                const auto name = translate_native_reference(
                    item.substr(boundary + 1));
                if (!name) continue;
                counted = *count + "件“" + *name + "”";
            }
            if (counted) {
                translated.push_back(std::move(*counted));
                continue;
            }

            const auto part = translate_native_reference(item);
            if (!part) return std::nullopt;
            translated.push_back((one_item ? "一件“" : "“") + *part + "”");
        }
        if (translated.empty()) return std::nullopt;
        return join_chinese(translated);
    };

    static constexpr auto qualities = std::to_array<std::pair<
        std::string_view, std::string_view>>({
        {"stress the rhythm", "突出节奏"}, {"be stately", "庄严稳重"},
        {"be bright", "明快"}, {"be lively", "活泼"},
        {"be made with skill", "讲究演奏技巧"}, {"be vigorous", "刚健有力"},
        {"be spirited", "昂扬"}, {"be delicate", "细腻"},
        {"be fiery", "炽烈"}, {"bring a sense of motion", "富有动感"},
        {"be made with feeling", "饱含感情"}, {"feel agitated", "透出焦躁与不安"},
        {"be passionate", "热情奔放"}, {"sparkle", "灵动明亮"},
        {"be broad", "宽广舒展"}, {"be made sweetly", "甜美柔和"},
        {"be strong", "强劲"}, {"be energetic", "充满活力"},
        {"be forceful", "气势强劲"}, {"feel heroic", "富有英雄气概"},
        {"be made expressively", "富有表现力"}, {"feel furious", "狂怒激烈"},
        {"be joyful", "欢欣"}, {"be grand", "宏伟"},
        {"be merry", "欢乐"}, {"be graceful", "优雅"},
        {"build as it proceeds", "渐强"}, {"evoke tears", "催人泪下"},
        {"be melancholic", "忧郁"}, {"feel mournful", "流露哀伤"},
        {"be made with a light touch", "轻巧细腻"}, {"feel heavy", "沉重"},
        {"feel mysterious", "神秘"}, {"be jumpy", "跳跃活泼"},
        {"feel playful", "俏皮"}, {"feel tender", "温柔"},
        {"feel calm", "平静"}, {"be triumphant", "洋溢凯旋的喜悦"},
    });
    static constexpr auto tempos = std::to_array<std::pair<
        std::string_view, std::string_view>>({
        {"is at a free tempo", "采用自由速度"}, {"is very slow", "速度很慢"},
        {"is slow", "速度缓慢"}, {"is at a walking pace", "速度舒缓，如步行一般"},
        {"is moderately paced", "速度适中"},
        {"is moderately fast", "速度中等偏快"}, {"is fast", "速度很快"},
        {"is very fast", "速度非常快"}, {"is extremely fast", "速度极快"},
        {"accelerates as it proceeds", "逐渐加快"},
        {"slows and broadens", "逐渐放慢并舒展"},
        {"is consistently slowing", "不断放慢"},
        {"is at a hurried pace", "节奏急促"},
        {"gradually slows as it comes to an end", "临近结束时渐慢"},
        {"slows down and dies away as it draws to a close", "收尾时渐慢渐弱，直至无声"},
        {"becomes calmer as the end is approached", "临近结束时趋于平静"},
        {"becomes frenzied as it proceeds", "逐渐变得狂乱"},
        {"is twice the tempo of the last passage", "速度是上一段的两倍"},
        {"is half the tempo of the last passage", "速度是上一段的一半"},
        {"moves more quickly than the last passage", "比上一段更快"},
        {"is slower than the last passage", "比上一段更慢"},
        {"resumes the previous tempo", "恢复上一段的速度"},
        {"resumes the original tempo", "恢复最初的速度"},
    });
    static constexpr auto dynamics = std::to_array<std::pair<
        std::string_view, std::string_view>>({
        {"be in whispered undertones", "轻得如同耳语"},
        {"be very soft", "以极弱力度演奏"}, {"be soft", "以弱力度演奏"},
        {"be moderately soft", "以中弱力度演奏"},
        {"be moderately loud", "以中强力度演奏"}, {"be loud", "以强力度演奏"},
        {"be very loud", "以极强力度演奏"}, {"become louder and louder", "渐强"},
        {"become softer and softer", "渐弱"}, {"fade into silence", "渐弱直至无声"},
        {"start loud then be immediately soft", "开头强奏，随即转弱"},
    });
    static constexpr auto phrase_lengths = std::to_array<std::pair<
        std::string_view, std::string_view>>({
        {"short phrases", "短乐句"}, {"mid-length phrases", "长度适中的乐句"},
        {"long phrases", "长乐句"}, {"phrases of varied length", "长短不一的乐句"},
    });
    static constexpr auto techniques = std::to_array<std::pair<
        std::string_view, std::string_view>>({
        {"glide from note to note", "使用滑音"},
        {"use grace notes", "使用装饰音"}, {"use mordents", "使用波音"},
        {"make trills", "使用颤音"}, {"play rapid runs", "奏出快速音群"},
        {"locally improvise", "局部即兴"}, {"syncopate", "使用切分音"},
        {"add fills", "加花"}, {"alternate tension and repose", "让乐曲张弛交替"},
        {"modulate frequently", "频繁转调"}, {"play arpeggios", "演奏琶音"},
        {"play staccato", "采用断奏"}, {"play legato", "采用连奏"},
        {"freely adjust the beats", "自由调整节拍"},
        {"match notes and syllables", "采用一字一音的唱法"},
        {"spread syllables over many notes", "采用一字多音的唱法"},
        {"spreads syllables over many notes", "采用一字多音的唱法"},
        {"build as the performance proceeds", "随着演奏逐步铺陈"},
        // The passage-detail grammar writes the same techniques as bare
        // method names after `performed using` instead of as imperative verb
        // phrases.  Keep both productions in this table so one unfamiliar
        // grammatical form cannot make the complete knowledge paragraph fall
        // back to English.
        {"glides", "滑音"}, {"grace notes", "装饰音"},
        {"mordents", "波音"}, {"trills", "颤音"},
        {"rapid runs", "快速音群"}, {"fills", "加花"},
        {"arpeggios", "琶音"}, {"staccato", "断奏"},
        {"legato", "连奏"},
        {"local improvisation", "局部即兴"}, {"locally improvisation", "局部即兴"},
        {"syncopation", "切分音"}, {"frequent modulation", "频繁转调"},
        {"free adjustment of the beats", "自由调整节拍"},
        {"melismatic phrasing", "一字多音的唱法"},
        {"syllabic phrasing", "一字一音的唱法"},
        {"alternation between tension and repose", "张弛交替"},
    });
    auto lookup_phrase = [](std::string_view raw, const auto &table)
            -> std::optional<std::string> {
        const std::string value = trim(std::string(raw));
        for (const auto &[english, chinese] : table) {
            if (value == english) return std::string(chinese);
        }
        return std::nullopt;
    };
    auto translate_technique_list = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::vector<std::string> translated;
        size_t cursor = 0;
        while (cursor < raw.size()) {
            while (cursor < raw.size() && raw[cursor] == ' ') ++cursor;
            bool skipped_separator = true;
            while (skipped_separator && cursor < raw.size()) {
                skipped_separator = false;
                for (const std::string_view separator : {
                         std::string_view(", "),
                         std::string_view("and "),
                         std::string_view("or "),
                         std::string_view("as well as ")}) {
                    if (!raw.substr(cursor).starts_with(separator)) continue;
                    cursor += separator.size();
                    skipped_separator = true;
                    break;
                }
            }
            const std::pair<std::string_view, std::string_view> *best = nullptr;
            for (const auto &entry : techniques) {
                if (!raw.substr(cursor).starts_with(entry.first)) continue;
                const size_t end = cursor + entry.first.size();
                const bool boundary = end == raw.size() ||
                    raw.substr(end).starts_with(", ") ||
                    raw.substr(end).starts_with(" and ") ||
                    raw.substr(end).starts_with(" or ") ||
                    raw.substr(end).starts_with(" as well as ");
                if (!boundary) continue;
                if (!best || entry.first.size() > best->first.size())
                    best = &entry;
            }
            if (!best) return std::nullopt;
            translated.emplace_back(best->second);
            cursor += best->first.size();
        }
        if (translated.empty()) return std::nullopt;
        return join_chinese(translated);
    };
    auto translate_register = [](std::string_view raw)
            -> std::optional<std::string> {
        const std::string value = trim(std::string(raw));
        static constexpr auto registers = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"extremely low", "极低"}, {"very low", "超低"},
            {"mid-low", "中低"}, {"middle", "中"},
            {"mid-high", "中高"}, {"very high", "超高"},
            {"extremely high", "极高"},
            {"lowest", "最低"}, {"low", "低"}, {"high", "高"},
            {"highest", "最高"}, {"top", "最高"},
            {"low-middle", "中低"},
            {"middle-high", "中高"},
        });
        for (const auto &[english, chinese] : registers) {
            if (value == english) return std::string(chinese) + "音区";
        }

        // Vocal registers may be prefixed by any combination of the complete
        // instrument-timbre vocabulary (`raspy high`, `clear warm low`, ...).
        // Those words describe the sound of the register and must not be fed
        // into the generated-name transliterator.  Resolve every timbre and
        // the pitch band independently so the entire register remains
        // semantic Chinese for every generated musical form.
        static constexpr auto timbres = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"clear", "清澈"}, {"noisy", "嘈杂"}, {"full", "饱满"},
            {"thin", "单薄"}, {"round", "圆润"}, {"sharp", "锐利"},
            {"smooth", "柔顺"}, {"choppy", "断续"}, {"steady", "稳定"},
            {"evolving", "渐变"}, {"strong", "强劲"}, {"delicate", "细腻"},
            {"bright", "明亮"}, {"graceful", "优雅"}, {"sparse", "疏淡"},
            {"breathy", "带气声"}, {"strained", "紧绷"}, {"broad", "宽广"},
            {"light", "轻盈"}, {"mellow", "柔和"}, {"wobbling", "摇曳"},
            {"focused", "凝聚"}, {"even", "均匀"}, {"fluid", "流畅"},
            {"vibrating", "振颤"}, {"quavering", "颤抖"}, {"eerie", "诡异"},
            {"fragile", "纤弱"}, {"brittle", "清脆"}, {"pure", "纯净"},
            {"piercing", "穿透力强"}, {"strident", "尖锐"},
            {"wavering", "摇曳"}, {"harsh", "粗粝"}, {"reedy", "带簧管音色"},
            {"nasal", "鼻音浓重"}, {"buzzy", "带嗡鸣声"}, {"rough", "粗糙"},
            {"warm", "温润"}, {"rugged", "粗犷"}, {"heavy", "厚重"},
            {"flat", "平淡"}, {"dark", "低沉"}, {"crisp", "爽脆"},
            {"sonorous", "洪亮"}, {"watery", "水声般清润"}, {"gentle", "柔和"},
            {"slicing", "锐利"}, {"liquid", "流动如水"},
            {"raucous", "沙哑刺耳"}, {"breezy", "轻快"}, {"raspy", "沙哑"},
            {"wispy", "轻柔飘渺"}, {"shrill", "尖厉"}, {"muddy", "浑浊"},
            {"rich", "浑厚"}, {"dull", "沉闷"}, {"floating", "飘逸"},
            {"ringing", "清亮"}, {"resonant", "共鸣饱满"},
            {"sweet", "甜美"}, {"rippling", "起伏"},
            {"sparkling", "清亮灵动"},
        });
        for (const auto &[register_name, register_cn] : registers) {
            const std::string suffix = " " + std::string(register_name);
            if (!value.ends_with(suffix)) continue;
            const std::string_view raw_timbres(value.data(),
                                                value.size() - suffix.size());
            std::vector<std::string_view> translated_timbres;
            size_t cursor = 0;
            while (cursor < raw_timbres.size()) {
                const size_t end = raw_timbres.find(' ', cursor);
                const std::string_view word = raw_timbres.substr(
                    cursor, (end == std::string_view::npos
                                 ? raw_timbres.size() : end) - cursor);
                const auto found = std::find_if(
                    timbres.begin(), timbres.end(), [word](const auto &entry) {
                        return entry.first == word;
                    });
                if (found == timbres.end()) return std::nullopt;
                translated_timbres.push_back(found->second);
                if (end == std::string_view::npos) break;
                cursor = end + 1;
            }
            if (translated_timbres.empty()) return std::nullopt;
            std::string result;
            for (size_t index = 0; index < translated_timbres.size(); ++index) {
                if (index) result += "、";
                result += translated_timbres[index];
            }
            return std::string(register_cn) + "音区（" + result + "）";
        }
        return std::nullopt;
    };
    auto translate_subject = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string value = trim(std::string(raw));
        if (value == "The music" || value == "the music") return "音乐";
        if (value == "The entire performance" || value == "the entire performance")
            return "全曲";
        if (value == "The melody") return "主旋律";
        if (value == "The counterpoint melody") return "对位旋律";
        if (value == "The melody and counterpoint") return "主旋律与对位旋律";
        if (value == "The musical voices") return "各声部";
        if (value == "The singer" || value == "the singer") return "歌者";
        if (value == "The speaker" || value == "the speaker") return "朗诵者";
        if (value == "The chanter" || value == "the chanter") return "吟唱者";
        if (value == "The voice" || value == "the voice") return "人声";
        if (value == "The passage") return "本段";
        bool each_of = false;
        if (value.starts_with("Each of the ")) {
            each_of = true;
            value.erase(0, 12);
        } else if (value.starts_with("each of the ")) {
            each_of = true;
            value.erase(0, 12);
        } else if (value == "Each passage" || value == "each passage") {
            return "每个乐段";
        }
        if (value.starts_with("The ")) value.erase(0, 4);
        else if (value.starts_with("the ")) value.erase(0, 4);
        static constexpr auto passages = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"chorus", "副歌段"}, {"verse", "主歌段"},
            {"introduction", "引子"}, {"coda", "尾声"},
            {"exposition", "呈示部"}, {"recapitulation", "再现部"},
            {"synthesis", "综合部"}, {"theme", "主题段"},
            {"first theme", "第一主题段"},
            {"second theme", "第二主题段"},
            {"first exposition", "第一呈示部"},
            {"second exposition", "第二呈示部"},
            {"first recapitulation", "第一再现部"},
            {"second recapitulation", "第二再现部"},
            {"first bridge-passage", "第一过渡段"},
            {"second bridge-passage", "第二过渡段"},
            {"first synthesis", "第一综合部"},
            {"second synthesis", "第二综合部"},
            {"exposition of the theme", "主题呈示部"},
            {"exposition of the first theme", "第一主题呈示部"},
            {"exposition of the second theme", "第二主题呈示部"},
            {"exposition of the previous passage", "前一乐段呈示部"},
            {"recapitulation of the theme", "主题再现部"},
            {"recapitulation of the first theme", "第一主题再现部"},
            {"recapitulation of the second theme", "第二主题再现部"},
            {"recapitulation of the previous passage", "前一乐段再现部"},
            {"synthesis of the two themes", "双主题综合部"},
            {"synthesis of previous passages", "前述乐段综合部"},
            {"series of variations", "变奏组"},
            {"series of variations on the theme", "主题变奏组"},
            {"series of variations on the first theme", "第一主题变奏组"},
            {"series of variations on the second theme", "第二主题变奏组"},
            {"bridge-passage", "过渡段"}, {"finale", "终曲"},
            {"simple passage", "简单乐段"}, {"passage", "乐段"},
            {"first passage", "第一乐段"},
            {"second passage", "第二乐段"},
            {"first simple passage", "第一个简单乐段"},
            {"second simple passage", "第二个简单乐段"},
            {"choruses", "副歌段"}, {"verses", "主歌段"},
            {"introductions", "引子"}, {"codas", "尾声"},
            {"expositions", "呈示部"},
            {"recapitulations", "再现部"},
            {"syntheses", "综合部"},
            {"themes", "主题段"}, {"bridge-passages", "过渡段"},
            {"finales", "终曲"}, {"simple passages", "简单乐段"},
            {"unrelated passages", "彼此独立的乐段"},
            {"passages", "乐段"},
        });
        for (const auto &[english, chinese] : passages) {
            if (value != english) continue;
            return each_of ? "每个" + std::string(chinese)
                           : std::string(chinese);
        }
        // Repeated passage kinds are numbered productively (`first verse`,
        // `third chorus`, ...).  Do not enumerate only the examples seen in a
        // world: split any English/numeric ordinal from every known passage
        // kind generated by this version.
        const size_t ordinal_end = value.find(' ');
        if (ordinal_end != std::string::npos) {
            const auto ordinal = ordinal_value(
                std::string_view(value).substr(0, ordinal_end));
            if (ordinal) {
                const std::string_view kind =
                    std::string_view(value).substr(ordinal_end + 1);
                for (const auto &[english, chinese] : passages) {
                    if (kind != english) continue;
                    return each_of
                        ? "第" + chinese_number(*ordinal) +
                              "组中的每个" + std::string(chinese)
                        : "第" + chinese_number(*ordinal) +
                              std::string(chinese);
                }
            }
        }
        return std::nullopt;
    };
    auto translate_voice_subject = [&](std::string_view raw)
            -> std::optional<std::string> {
        if (const auto fixed = translate_subject(raw)) return fixed;
        if (raw.find(", and it") != std::string_view::npos ||
            raw.find(" should ") != std::string_view::npos ||
            raw.find(" is to ") != std::string_view::npos) {
            return std::nullopt;
        }
        std::string value = trim(std::string(raw));
        bool each = false;
        if (value.starts_with("Each of the ")) {
            each = true;
            value.erase(0, 12);
        } else if (value.starts_with("each of the ")) {
            each = true;
            value.erase(0, 12);
        } else if (value.starts_with("Each ")) {
            each = true;
            value.erase(0, 5);
        } else if (value.starts_with("each ")) {
            each = true;
            value.erase(0, 5);
        } else if (value.starts_with("The ")) {
            value.erase(0, 4);
        } else if (value.starts_with("the ")) {
            value.erase(0, 4);
        }
        if (value == "singers")
            return std::string(each ? "每名歌者" : "所有歌者");
        if (value == "speakers")
            return std::string(each ? "每名朗诵者" : "所有朗诵者");
        if (value == "chanters")
            return std::string(each ? "每名吟唱者" : "所有吟唱者");
        if (value == "chanter")
            return std::string(each ? "每名吟唱者" : "吟唱者");
        if (value == "singer")
            return std::string(each ? "每名歌者" : "歌者");
        if (value == "speaker")
            return std::string(each ? "每名朗诵者" : "朗诵者");
        if (value == "voices")
            return std::string(each ? "每个声部" : "各声部");
        if (value.ends_with(" voices")) value.erase(value.size() - 7);
        else if (value.ends_with(" voice")) value.erase(value.size() - 6);
        value = trim(std::move(value));
        if (value.ends_with("'s")) value.erase(value.size() - 2);
        else if (value.ends_with("s'")) value.erase(value.size() - 1);
        if (value == "chanter")
            return std::string(each ? "每名吟唱者" : "吟唱者");
        if (value == "chanters")
            return std::string(each ? "每名吟唱者" : "所有吟唱者");
        if (value == "singer")
            return std::string(each ? "每名歌者" : "歌者");
        if (value == "singers")
            return std::string(each ? "每名歌者" : "所有歌者");
        if (value == "speaker")
            return std::string(each ? "每名朗诵者" : "朗诵者");
        if (value == "speakers")
            return std::string(each ? "每名朗诵者" : "所有朗诵者");
        const auto name = translate_reference_list(value);
        if (!name) return std::nullopt;
        return (each ? "每个" : "") + *name + "声部";
    };

    // Several passage templates put more than one independently generated
    // voice range in a single sentence (notably the finale template). Keep a
    // reusable one-clause parser here so the enclosing scope can translate
    // every voice instead of rejecting the complete paragraph after the
    // first `... register and ...` boundary.
    auto translate_voice_range_clause = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::string_view clause = trim_view(raw);
        std::string context;
        for (const auto &[suffix, chinese] : std::to_array<std::pair<
                 std::string_view, std::string_view>>({
                 {" in the melody", "演奏主旋律时，"},
                 {" in the counterpoint melody", "演奏对位旋律时，"},
                 {" in the melody and counterpoint", "演奏主旋律和对位旋律时，"},
                 {" in each of the melody and counterpoint", "演奏主旋律和对位旋律时，"},
                 {" in both melody and counterpoint", "演奏主旋律和对位旋律时，"},
             })) {
            if (!clause.ends_with(suffix)) continue;
            context = chinese;
            clause.remove_suffix(suffix.size());
            break;
        }
        struct RangeRule {
            std::string_view marker;
            bool entire;
            bool confined;
        };
        static constexpr auto rules = std::to_array<RangeRule>({
            {" covers its entire range", true, false},
            {" uses its entire range", true, false},
            {" stays in the ", false, true},
            {" is confined to the ", false, true},
            {" ranges from the ", false, false},
        });
        for (const auto &rule : rules) {
            const size_t at = clause.find(rule.marker);
            if (at == std::string_view::npos) continue;
            const auto subject = translate_voice_subject(clause.substr(0, at));
            if (!subject) return std::nullopt;
            std::string_view tail = clause.substr(at + rule.marker.size());
            if (rule.entire) {
                if (tail.empty()) return context + *subject + "使用全部音域";
                if (!tail.starts_with(" from the ")) return std::nullopt;
                tail.remove_prefix(std::string_view(" from the ").size());
            }
            constexpr std::string_view terminal = " register";
            if (!tail.ends_with(terminal)) return std::nullopt;
            tail.remove_suffix(terminal.size());
            constexpr std::string_view to_marker = " register to the ";
            const size_t to = tail.find(to_marker);
            if (to == std::string_view::npos) {
                if (!rule.confined) return std::nullopt;
                const auto band = translate_register(tail);
                if (!band) return std::nullopt;
                return context + *subject + "只使用" + *band;
            }
            const auto low = translate_register(tail.substr(0, to));
            const auto high = translate_register(tail.substr(to + to_marker.size()));
            if (!low || !high) return std::nullopt;
            return context + *subject +
                (rule.entire ? "使用全部音域：" :
                 rule.confined ? "只使用" : "的音域为") + *low + "至" + *high;
        }
        return std::nullopt;
    };

    auto translate_voice_range_assignments = [&](std::string_view raw)
            -> std::optional<std::vector<std::string>> {
        std::vector<std::string> assignments;
        while (!raw.empty()) {
            size_t separator = std::string_view::npos;
            size_t separator_size = 0;
            size_t clause_terminal_size = 0;
            for (const auto &[candidate, terminal] : std::array<std::pair<
                     std::string_view, std::string_view>, 4>{{
                     {" register, ", " register"},
                     {" register and ", " register"},
                     {" entire range, ", " entire range"},
                     {" entire range and ", " entire range"},
                 }}) {
                const size_t at = raw.find(candidate);
                if (at == std::string_view::npos ||
                    (separator != std::string_view::npos && at >= separator)) {
                    continue;
                }
                separator = at;
                separator_size = candidate.size();
                clause_terminal_size = terminal.size();
            }
            const std::string_view clause = separator == std::string_view::npos
                ? raw : raw.substr(0, separator +
                    clause_terminal_size);
            const auto translated = translate_voice_range_clause(clause);
            if (!translated) return std::nullopt;
            assignments.push_back(*translated);
            if (separator == std::string_view::npos) break;
            raw.remove_prefix(separator + separator_size);
        }
        if (assignments.empty()) return std::nullopt;
        return assignments;
    };

    // Melodic-contour instructions are assembled from independent frequency,
    // contour, altered-degree, direction and technique slots.  A passage can
    // contain several of them in one sentence, for example:
    // `sometimes include a rising-falling melody pattern with flattened
    // third degree on the fall as well as legato and always include ...`.
    // Parse those slots instead of enumerating whole observed sentences.
    auto translate_melody_pattern_instructions = [&](std::string_view raw)
            -> std::optional<std::string> {
        std::vector<std::string> directives;
        raw = trim_view(raw);
        while (!raw.empty()) {
            std::string frequency;
            if (raw.starts_with("sometimes include a ")) {
                frequency = "不时";
                raw.remove_prefix(
                    std::string_view("sometimes include a ").size());
            } else if (raw.starts_with("often include a ")) {
                frequency = "经常";
                raw.remove_prefix(
                    std::string_view("often include a ").size());
            } else if (raw.starts_with("always include a ")) {
                frequency = "始终";
                raw.remove_prefix(
                    std::string_view("always include a ").size());
            } else if (raw.starts_with("include a ")) {
                raw.remove_prefix(std::string_view("include a ").size());
            } else {
                return std::nullopt;
            }

            size_t next = std::string_view::npos;
            size_t separator_size = 0;
            // Only a separator followed by another directive ends this
            // pattern. Commas/and inside its technique or degree list stay
            // with the pattern, including lists of three or more directives.
            for (const std::string_view separator : {", and ", ", ", " and "}) {
                for (const std::string_view prefix : {
                         "always include a ", "sometimes include a ",
                         "often include a ", "include a ",
                     }) {
                    const size_t at = raw.find(std::string(separator) +
                                               std::string(prefix));
                    if (at != std::string_view::npos &&
                        (next == std::string_view::npos || at < next)) {
                        next = at;
                        separator_size = separator.size();
                    }
                }
            }
            std::string_view clause = trim_view(raw.substr(0, next));
            raw = next == std::string_view::npos
                ? std::string_view{}
                : trim_view(raw.substr(next + separator_size));

            constexpr std::string_view pattern_marker = " melody pattern";
            const size_t pattern_at = clause.find(pattern_marker);
            if (pattern_at == std::string_view::npos) return std::nullopt;
            const std::string_view contour = clause.substr(0, pattern_at);
            std::string contour_cn;
            if (contour == "rising-falling") contour_cn = "先升后降";
            else if (contour == "falling-rising") contour_cn = "先降后升";
            else if (contour == "rising") contour_cn = "上行";
            else if (contour == "falling") contour_cn = "下行";
            else return std::nullopt;

            std::string_view tail = trim_view(
                clause.substr(pattern_at + pattern_marker.size()));
            // Without an altered scale degree, DF joins the same technique
            // list directly with `with`, including its internal conjunctions.
            std::optional<std::string> techniques_cn;
            if (tail.starts_with("with ")) {
                techniques_cn = translate_technique_list(tail.substr(5));
                if (techniques_cn) tail = {};
            }
            std::string_view technique_text;
            constexpr std::string_view technique_marker = " as well as ";
            const size_t technique_at = tail.find(technique_marker);
            if (technique_at != std::string_view::npos) {
                technique_text = trim_view(tail.substr(
                    technique_at + technique_marker.size()));
                tail = trim_view(tail.substr(0, technique_at));
            }

            std::vector<std::string> alterations;
            if (!tail.empty()) {
                if (!tail.starts_with("with ")) return std::nullopt;
                tail.remove_prefix(5);
                // Each altered degree owns its optional rise/fall qualifier;
                // a pattern can alter several degrees in either direction.
                for (std::string_view item : split_list(tail)) {
                    std::string direction;
                    if (item.ends_with(" on the rise")) {
                        direction = "上行";
                        item.remove_suffix(std::string_view(" on the rise").size());
                    } else if (item.ends_with(" on the fall")) {
                        direction = "下行";
                        item.remove_suffix(std::string_view(" on the fall").size());
                    }
                    if (!item.ends_with(" degree")) return std::nullopt;
                    item.remove_suffix(std::string_view(" degree").size());
                    const size_t space = item.find(' ');
                    if (space == std::string_view::npos) return std::nullopt;
                    const std::string_view accidental = item.substr(0, space);
                    const auto degree = ordinal_value(item.substr(space + 1));
                    if (!degree) return std::nullopt;
                    std::string alteration;
                    if (accidental == "sharpened") alteration = "升高";
                    else if (accidental == "flattened") alteration = "降低";
                    else return std::nullopt;
                    alteration += "第" + chinese_number(*degree) + "级音";
                    if (!direction.empty())
                        alteration = "在" + direction + "时" + alteration;
                    alterations.push_back(std::move(alteration));
                }
                if (alterations.empty()) return std::nullopt;
            }

            std::string directive = frequency + "采用" + contour_cn +
                                    "的旋律型";
            if (!alterations.empty())
                directive += "，" + join_chinese(alterations, "，");
            if (!technique_text.empty()) {
                techniques_cn = translate_technique_list(technique_text);
                if (!techniques_cn) return std::nullopt;
            }
            if (techniques_cn) directive += "，并使用" + *techniques_cn;
            directives.push_back(std::move(directive));
        }
        if (directives.empty()) return std::nullopt;
        return "应" + join_chinese(directives, "，并应");
    };

    auto translate_sentence = [&](std::string_view raw_sentence)
            -> std::optional<std::string> {
        std::string sentence = trim(std::string(raw_sentence));
        if (sentence.starts_with("[B]")) sentence.erase(0, 3);
        sentence = trim(std::move(sentence));
        if (sentence.starts_with("As always, the "))
            sentence = "The " + sentence.substr(15);
        if (sentence.empty()) return std::string{};

        // dd5ce0/dd0c50 append the identity even when the native name is
        // empty. Origin, performance origin and creator are alternatives;
        // IDs of -1 omit the corresponding suffix entirely.
        const auto translate_identity = [&]() -> std::optional<std::string> {
            struct Provenance { std::string_view marker; int kind; };
            static constexpr auto provenances = std::to_array<Provenance>({
                {" originating in", 0},
                {" which grew out of the performances of", 1},
                {" originally devised by", 2},
            });
            size_t provenance_at = std::string::npos;
            const Provenance *provenance = nullptr;
            for (const auto &entry : provenances) {
                const size_t at = sentence.find(entry.marker);
                if (at == std::string::npos ||
                    (at + entry.marker.size() < sentence.size() &&
                     sentence[at + entry.marker.size()] != ' ')) continue;
                if (provenance_at == std::string::npos || at < provenance_at) {
                    provenance_at = at;
                    provenance = &entry;
                }
            }
            std::string_view identity = trim_view(
                std::string_view(sentence).substr(0, provenance_at));
            if (identity.ends_with(',')) identity = trim_view(identity.substr(0, identity.size() - 1));
            std::string_view raw_title, kind;
            if (identity == "is a") {
                kind = {};
            } else if (identity.starts_with("is a ")) {
                kind = identity.substr(5);
            } else {
                const size_t at = identity.find(" is a");
                if (at == std::string_view::npos || at == 0 ||
                    (at + 5 < identity.size() && identity[at + 5] != ' '))
                    return std::nullopt;
                raw_title = identity.substr(0, at);
                kind = trim_view(identity.substr(at + 5));
            }
            struct Identity { std::string_view marker; std::string_view chinese; };
            static constexpr auto identities = std::to_array<Identity>({
                {"form of music used for entertainment", "娱乐音乐"},
                {"form of music used during marches and military engagements",
                 "行军与作战时使用的军乐"},
                {"form of music used to commemorate important events",
                 "纪念重大事件的音乐"},
                {"devotional form of music", "宗教礼乐"},
            });
            std::optional<std::string> type;
            std::string_view tail;
            for (const Identity &entry : identities) {
                if (!kind.starts_with(entry.marker) ||
                    (kind.size() > entry.marker.size() &&
                     kind[entry.marker.size()] != ' ' && kind[entry.marker.size()] != ',')) continue;
                type = std::string(entry.chinese);
                tail = trim_view(kind.substr(entry.marker.size()));
                break;
            }
            if (!type) {
                // The default usage emits no type. Its following fixed
                // composer/musician sentence proves music ownership before
                // an otherwise generic "is a" sentence is admitted.
                const bool music_document = source.find(
                    "The rules of the form are applied by composers to produce individual pieces of music which can be performed") != std::string::npos ||
                    source.find("The form guides musicians during improvised performances") != std::string::npos;
                if (!kind.empty() || !music_document) return std::nullopt;
                type = exact_literal_translation("Musical form");
                if (!type) return std::nullopt;
            }
            std::optional<std::string> title;
            if (!raw_title.empty()) {
                title = translate_reference(raw_title);
                if (!title) return std::nullopt;
            }
            std::string result = title
                ? "“" + *title + "”是一种" + *type
                : "这是一种" + *type;
            if (provenance) {
                const auto raw_reference = trim_view(std::string_view(sentence).substr(
                    provenance_at + provenance->marker.size()));
                const auto reference = raw_reference.empty()
                    ? exact_literal_translation(provenance->kind == 2
                        ? "Art form: unspecified creator" : "Art form: unspecified origin")
                    : provenance->kind == 2
                        ? translate_reference(raw_reference)
                        : translate_entity_reference(raw_reference, false, false,
                            provenance->kind == 1 ? 8 : -1);
                if (!reference) return std::nullopt;
                result += raw_reference.empty()
                    ? std::string(provenance->kind == 2 ? "，创作者" : "，来源") + *reference
                    : provenance->kind == 2
                    ? "，最初由“" + *reference + "”创编"
                    : provenance->kind == 1
                        ? "，从“" + *reference + "”的表演中发展而来"
                        : "，起源于“" + *reference + "”";
            }
            if (tail.starts_with(',')) tail = trim_view(tail.substr(1));
            if (!tail.empty()) {
                // dd5d9f appends the worship prefix before the figure
                // formatter, whose empty result leaves the complete prefix.
                constexpr std::string_view worship_marker = "directed toward the worship of";
                if (!tail.starts_with(worship_marker) ||
                    (tail.size() > worship_marker.size() &&
                     tail[worship_marker.size()] != ' ')) return std::nullopt;
                const auto raw_deity = trim_view(tail.substr(worship_marker.size()));
                const auto deity = raw_deity.empty()
                    ? exact_literal_translation("Art form: unspecified deity")
                    : translate_reference(raw_deity);
                if (!deity) return std::nullopt;
                result += raw_deity.empty() ? "，" + *deity : "，用于敬拜“" + *deity + "”";
            }
            return result;
        };
        if (auto identity = translate_identity()) return identity;

        if (sentence ==
            "The rules of the form are applied by composers to produce individual pieces of music which can be performed") {
            return "作曲者遵循这一曲式谱曲，再交由乐手演奏";
        }
        if (sentence ==
            "The form guides musicians during improvised performances") {
            return "乐手按这一曲式即兴演奏";
        }

        // dd5ed4..dd644f serializes every voice in vector order. A failed
        // work/form lookup jumps to dd6249 after writing the count and role,
        // leaving the recite verb absent. Recover count/role slots before
        // resolving their opaque material or neighboring instrument names.
        const auto translate_voice_overview = [&]() -> std::optional<std::string> {
            auto native_count = [&](std::string_view raw)
                    -> std::optional<std::string> {
                const std::string value = lower(trim(std::string(raw)));
                if (value == "a" || value == "an") return std::string("一");
                const auto native_number = [](std::string_view field)
                        -> std::optional<int> {
                    bool negative = false;
                    if (field.starts_with("negative ")) {
                        negative = true;
                        field.remove_prefix(9);
                    }
                    const auto number = adventure_location_count(field);
                    if (!number) return std::nullopt;
                    return static_cast<int>(negative ? -*number : *number);
                };
                const size_t range = value.find(" to ");
                if (range != std::string::npos) {
                    const auto first = native_number(std::string_view(value).substr(0, range));
                    const auto last = native_number(std::string_view(value).substr(range + 4));
                    if (!first || !last) return std::nullopt;
                    return chinese_number(*first) + "至" + chinese_number(*last);
                }
                const auto number = native_number(value);
                if (!number) return std::nullopt;
                return chinese_number(*number);
            };
            auto trim_instrument_separator = [](std::string_view value) {
                value = trim_view(value);
                if (value.ends_with(',')) value = trim_view(value.substr(0, value.size() - 1));
                if (value.ends_with(" and")) value = trim_view(value.substr(0, value.size() - 4));
                return value;
            };
            auto counted_instruments = [&](std::string_view raw)
                    -> std::optional<std::string> {
                raw = trim_instrument_separator(raw);
                if (raw.starts_with(',')) raw = trim_view(raw.substr(1));
                if (raw.starts_with("and ")) raw = trim_view(raw.substr(4));
                std::vector<std::string> instruments;
                for (std::string_view item : split_list(raw)) {
                    std::optional<std::string> count;
                    std::string_view name;
                    // Count/range is a native field, not part of the raw
                    // instrument name. Require it on every list member.
                    for (size_t boundary = item.find(' ');
                         boundary != std::string_view::npos;
                         boundary = item.find(' ', boundary + 1)) {
                        const auto candidate = native_count(item.substr(0, boundary));
                        const auto tail = trim_view(item.substr(boundary + 1));
                        if (!candidate || tail.empty()) continue;
                        count = candidate;
                        name = tail;
                    }
                    if (!count || name.empty()) return std::nullopt;
                    const auto translated = translate_native_reference(name);
                    if (!translated) return std::nullopt;
                    instruments.push_back(*count + "件“" + *translated + "”");
                }
                if (instruments.empty()) return std::nullopt;
                return join_chinese(instruments);
            };
            struct VocalSlot {
                size_t begin;
                size_t end;
                bool recites;
                std::string actor;
            };
            static constexpr auto roles = std::to_array<std::pair<
                std::string_view, std::string_view>>({
                {"singers", "歌者"}, {"singer", "歌者"},
                {"speakers", "朗诵者"}, {"speaker", "朗诵者"},
                {"chanters", "吟唱者"}, {"chanter", "吟唱者"},
            });
            std::vector<VocalSlot> vocals;
            const std::string_view voices(sentence);
            size_t scan = 0;
            while (scan < voices.size()) {
                std::optional<VocalSlot> next;
                for (const auto &[role, chinese] : roles) {
                    for (size_t at = voices.find(role, scan);
                         at != std::string_view::npos;
                         at = voices.find(role, at + role.size())) {
                        const size_t role_end = at + role.size();
                        if (at == 0 || voices[at - 1] != ' ' ||
                            (role_end < voices.size() && voices[role_end] != ' ')) continue;
                        for (size_t boundary = scan; boundary + 1 < at;) {
                            const auto count = native_count(voices.substr(
                                boundary, at - boundary - 1));
                            if (count) {
                                size_t end = role_end;
                                bool recites = false;
                                for (const std::string_view verb : {" recites", " recite"}) {
                                    if (!voices.substr(end).starts_with(verb)) continue;
                                    const size_t verb_end = end + verb.size();
                                    if (verb_end < voices.size() && voices[verb_end] != ' ') continue;
                                    end = verb_end;
                                    recites = true;
                                    break;
                                }
                                if (!next || boundary < next->begin)
                                    next = VocalSlot{boundary, end, recites,
                                        *count + "名" + std::string(chinese)};
                                break;
                            }
                            const size_t space = voices.find(' ', boundary);
                            if (space == std::string_view::npos) break;
                            boundary = space + 1;
                        }
                        if (next && next->begin < at) break;
                    }
                }
                if (!next) break;
                vocals.push_back(std::move(*next));
                scan = vocals.back().end;
            }
            if (!vocals.empty()) {
                constexpr std::string_view first_instruments =
                    "The music is played on";
                constexpr std::string_view later_instruments =
                    "while the music is played on";
                std::vector<std::string> assignments;
                const auto leading = trim_instrument_separator(
                    voices.substr(0, vocals.front().begin));
                if (!leading.empty()) {
                    if (!leading.starts_with(first_instruments)) return std::nullopt;
                    const auto instruments = counted_instruments(
                        trim_view(leading.substr(first_instruments.size())));
                    if (!instruments) return std::nullopt;
                    assignments.push_back("演奏乐器为" + *instruments);
                }
                for (size_t index = 0; index < vocals.size(); ++index) {
                    const auto &vocal = vocals[index];
                    const size_t end = index + 1 == vocals.size()
                        ? voices.size() : vocals[index + 1].begin;
                    std::string_view tail = trim_instrument_separator(
                        voices.substr(vocal.end, end - vocal.end));
                    std::string_view material = tail;
                    std::optional<std::string> instruments;
                    const size_t explicit_at = tail.find(later_instruments);
                    if (explicit_at != std::string_view::npos) {
                        material = trim_view(tail.substr(0, explicit_at));
                        instruments = counted_instruments(trim_view(tail.substr(
                            explicit_at + later_instruments.size())));
                        if (!instruments) return std::nullopt;
                    } else if (!vocal.recites) {
                        material = {};
                        if (!tail.empty()) {
                            instruments = counted_instruments(tail);
                            if (!instruments) return std::nullopt;
                        }
                    } else {
                        // Later instruments have no repeated introduction
                        // once an earlier voice set the native flag. Resolve
                        // their counted field boundary before sending any
                        // recited title to the procedural-name resolver.
                        size_t material_prefix = 0;
                        if (tail.starts_with("nonsensical words and sounds"))
                            material_prefix = std::string_view("nonsensical words and sounds").size();
                        else if (tail.starts_with("a composition of"))
                            material_prefix = std::string_view("a composition of").size();
                        else if (tail.starts_with("the words of"))
                            material_prefix = std::string_view("the words of").size();
                        else if (tail.starts_with("The ")) material_prefix = 4;
                        for (size_t boundary = material_prefix;
                             boundary < tail.size();) {
                            if ((boundary == 0 || tail[boundary - 1] == ' ' ||
                                 tail[boundary - 1] == ',') &&
                                tail[boundary] != ' ') {
                                const auto candidate = counted_instruments(tail.substr(boundary));
                                if (candidate) {
                                    material = trim_instrument_separator(tail.substr(0, boundary));
                                    instruments = candidate;
                                    break;
                                }
                            }
                            const size_t space = tail.find(' ', boundary);
                            if (space == std::string_view::npos) break;
                            boundary = space + 1;
                        }
                    }
                    std::string rendered = vocal.actor;
                    if (vocal.recites) {
                        const auto translated = translate_recited_material(material);
                        if (!translated) return std::nullopt;
                        rendered += *translated;
                    } else rendered += "（诵念内容未注明）";
                    if (instruments) rendered += "，伴奏乐器为" + *instruments;
                    assignments.push_back(std::move(rendered));
                }
                return join_chinese(assignments, "；");
            }
            return std::nullopt;
        };
        if (const auto overview = translate_voice_overview()) return overview;

        if (sentence == "Only one pitch is ever played at a time")
            return "每次只奏一个音，不叠加其他音";
        if (sentence == "Never more than an interval sounds at once" ||
            sentence == "Never more Than an interval sounds at once")
            return "最多同时奏两个音";
        if (sentence ==
            "Chords, seldom-used, are sparse -- intervals and single pitches are favored")
            return "以单音和双音为主，只偶尔使用和弦";
        if (sentence ==
            "Pitches are densely packed in clusters as music moves from chord to chord")
            return "和弦接连变换，密集的音符交织成音簇";
        if (sentence ==
            "The music is broadly layered with chords spanning the range")
            return "和弦遍布各个音区，层次丰富";
        if (sentence == "The music repeats for as long as necessary")
            return "乐曲可按需要反复演奏";
        if (sentence == "The musical voices are purely rhythmic")
            return "各声部只负责节奏";

        if (sentence.starts_with("The music is played on ")) {
            const auto instruments = translate_reference_list(
                std::string_view(sentence).substr(
                    std::string_view("The music is played on ").size()));
            if (!instruments) return std::nullopt;
            return "演奏乐器为" + *instruments;
        }

        // Texture of the musical voices; the generator may prefix All/Several.
        const size_t voices_at = sentence.find(" voices ");
        if (voices_at != std::string::npos) {
            const std::string_view raw_voice_group =
                std::string_view(sentence).substr(0, voices_at);
            if (raw_voice_group == "The musical" ||
                raw_voice_group == "All musical" ||
                raw_voice_group == "Several musical") {
                const std::string_view predicate =
                    std::string_view(sentence).substr(
                        voices_at + std::string_view(" voices ").size());
                static constexpr auto voice_textures = std::to_array<std::pair<
                    std::string_view, std::string_view>>({
                    {"join in melody and counterpoint, harmony and rhythm",
                     "分别负责主旋律、对位旋律、和声与节奏"},
                    {"bring melody, counterpoint and rhythm", "分别负责主旋律、对位旋律与节奏"},
                    {"cover melody, harmony and rhythm", "分别负责主旋律、和声与节奏"},
                    {"join in melody, counterpoint and harmony", "分别负责主旋律、对位旋律与和声"},
                    {"bring melody and counterpoint", "分别负责主旋律与对位旋律"},
                    {"bring melody with harmony", "以和声衬托主旋律"},
                    {"are joined in melody", "共同奏出主旋律"},
                });
                for (const auto &[english, chinese] : voice_textures) {
                    if (predicate == english)
                        return std::string(raw_voice_group == "Several musical"
                            ? "部分声部" : "各声部") +
                               std::string(chinese);
                }
            }
        }
        if (sentence == "The music is melody and rhythm without harmony")
            return "音乐只包含旋律与节奏，不使用和声";

        // Tempo and expressive character.
        for (const auto &[prefix, subject] : std::array<std::pair<
                 std::string_view, std::string_view>, 2>{{
                 {"The entire performance ", "全曲"},
                 {"The passage ", "本段"},
             }}) {
            if (!sentence.starts_with(prefix)) continue;
            const std::string_view predicate = std::string_view(sentence).substr(prefix.size());
            if (const auto tempo = lookup_phrase(predicate, tempos))
                return std::string(subject) + *tempo;
            if (predicate.starts_with("should ")) {
                if (const auto quality = lookup_phrase(predicate.substr(7), qualities))
                    return std::string(subject) + "应" + *quality;
                if (const auto dynamic = lookup_phrase(predicate.substr(7), dynamics))
                    return std::string(subject) + "应" + *dynamic;
            }
        }

        // A passage can combine its tempo and dynamics in one generated
        // sentence, for example "The finale is very fast, and it is to fade
        // into silence".  Parse both clauses atomically so the row never
        // falls back to a mixture of translated terms and English prose.
        constexpr std::string_view tempo_dynamic_marker = ", and it is to ";
        const size_t tempo_dynamic_at = sentence.find(tempo_dynamic_marker);
        if (tempo_dynamic_at != std::string::npos) {
            const std::string_view tempo_clause(sentence.data(),
                                                 tempo_dynamic_at);
            const std::string_view dynamic_clause =
                std::string_view(sentence).substr(
                    tempo_dynamic_at + tempo_dynamic_marker.size());
            const auto dynamic = lookup_phrase(dynamic_clause, dynamics);
            if (dynamic) {
                for (const auto &[english, chinese] : tempos) {
                    const std::string suffix = " " + std::string(english);
                    if (!tempo_clause.ends_with(suffix)) continue;
                    const auto subject = translate_subject(
                        tempo_clause.substr(
                            0, tempo_clause.size() - suffix.size()));
                    if (subject) {
                        return *subject + std::string(chinese) + "；" +
                               *dynamic;
                    }
                }
            }
        }

        // Phrase lengths in melody/counterpoint.
        if (sentence.starts_with("The melody has ")) {
            std::string_view tail(sentence);
            tail.remove_prefix(std::string_view("The melody has ").size());
            static constexpr std::string_view throughout = " throughout the form";
            if (tail.ends_with(throughout)) tail.remove_suffix(throughout.size());
            const size_t counterpoint = tail.find(", while the counterpoint has ");
            if (counterpoint != std::string_view::npos) {
                const auto first = lookup_phrase(tail.substr(0, counterpoint), phrase_lengths);
                const auto second = lookup_phrase(tail.substr(
                    counterpoint + std::string_view(", while the counterpoint has ").size()),
                    phrase_lengths);
                if (!first || !second) return std::nullopt;
                return "主旋律采用" + *first + "，对位旋律采用" + *second;
            }
            const auto length = lookup_phrase(tail, phrase_lengths);
            if (length) return "全曲主旋律采用" + *length;
        }
        if (sentence.starts_with("The counterpoint melody has ")) {
            std::string_view tail(sentence);
            tail.remove_prefix(std::string_view("The counterpoint melody has ").size());
            if (tail.ends_with(" throughout the form"))
                tail.remove_suffix(std::string_view(" throughout the form").size());
            const auto length = lookup_phrase(tail, phrase_lengths);
            if (length) return "全曲对位旋律采用" + *length;
        }
        if (sentence.starts_with("The melody and counterpoint both have ")) {
            std::string_view tail(sentence);
            tail.remove_prefix(std::string_view(
                "The melody and counterpoint both have ").size());
            if (tail.ends_with(" throughout the form"))
                tail.remove_suffix(std::string_view(" throughout the form").size());
            const auto length = lookup_phrase(tail, phrase_lengths);
            if (length) return "全曲主旋律与对位旋律均采用" + *length;
        }

        // Scale/rhythm selected for the whole form or an individual passage.
        // Named and numbered passages use the same predicate as `It` and
        // `The passage`; share the established passage-subject vocabulary so
        // an introduction, chorus or verse cannot reject the whole document.
        for (const std::string_view marker : {
                 " is performed ", " are performed "}) {
            const size_t performed_at = sentence.find(marker);
            if (performed_at == std::string::npos) continue;
            const std::string_view raw_subject =
                std::string_view(sentence).substr(0, performed_at);
            std::string result;
            if (raw_subject == "It") {
                result = "演奏时";
            } else if (const auto subject = translate_subject(raw_subject)) {
                result = *subject + "演奏时";
            } else {
                continue;
            }
            std::string_view tail = std::string_view(sentence).substr(
                performed_at + marker.size());
            if (tail == "in free rhythm")
                return result + "采用自由节奏";
            if (tail.starts_with("in ") && tail.ends_with(" rhythm")) {
                tail.remove_prefix(3);
                tail.remove_suffix(7);
                if (tail.starts_with("the ")) tail.remove_prefix(4);
                const auto rhythm = translate_native_reference(tail);
                if (!rhythm) return std::nullopt;
                return result + "采用“" + *rhythm + "”节奏";
            }
            if (tail.starts_with("without preference for a scale")) {
                tail.remove_prefix(std::string_view("without preference for a scale").size());
                result += "不限定音阶";
            } else if (tail.starts_with("using the ")) {
                tail.remove_prefix(10);
                const size_t scale_at = tail.find(" scale");
                if (scale_at == std::string_view::npos) return std::nullopt;
                const auto scale = translate_native_reference(
                    tail.substr(0, scale_at));
                if (!scale) return std::nullopt;
                result += "采用“" + *scale + "”音阶";
                tail.remove_prefix(scale_at + 6);
            } else return std::nullopt;
            if (tail.starts_with(" and in ")) {
                tail.remove_prefix(8);
                if (tail == "free rhythm") {
                    result += "，节奏自由";
                    tail = {};
                } else if (tail.ends_with(" rhythm")) {
                    tail.remove_suffix(7);
                    if (tail.starts_with("the ")) tail.remove_prefix(4);
                    const auto rhythm = translate_native_reference(tail);
                    if (!rhythm) return std::nullopt;
                    result += "，节奏采用“" + *rhythm + "”";
                    tail = {};
                } else return std::nullopt;
            }
            if (!tail.empty()) return std::nullopt;
            return result;
        }

        for (const auto &[prefix, subject] : std::array<std::pair<
                 std::string_view, std::string_view>, 2>{{
                 {"Throughout, when possible, composers and performers are to ",
                  "创作和演奏整首乐曲时，应尽量"},
                 {"Throughout, when possible, performers are to ",
                  "演奏整首乐曲时，应尽量"},
             }}) {
            if (!sentence.starts_with(prefix)) continue;
            const auto list = translate_technique_list(
                std::string_view(sentence).substr(prefix.size()));
            if (!list) return std::nullopt;
            return std::string(subject) + *list;
        }
        if (sentence.starts_with("From beginning to end, when improvising")) {
            const size_t should_at = sentence.find(", artists should ");
            if (should_at == std::string::npos) return std::nullopt;
            const std::string_view prelude =
                std::string_view(sentence).substr(0, should_at);
            const bool composing =
                prelude == "From beginning to end, when improvising or composing";
            if (!composing &&
                prelude != "From beginning to end, when improvising") {
                return std::nullopt;
            }
            std::string_view actions =
                std::string_view(sentence).substr(should_at + 17);
            if (const auto list = translate_technique_list(actions))
                return std::string(composing ? "即兴演奏或作曲时，" : "即兴演奏时，") +
                       "全曲都应" + *list;
            if (const auto patterns =
                    translate_melody_pattern_instructions(actions)) {
                return std::string(composing ? "即兴演奏或作曲时，" : "即兴演奏时，") +
                       "全曲" + *patterns;
            }
            bool sometimes = false;
            if (actions.starts_with("sometimes ")) {
                sometimes = true;
                actions.remove_prefix(10);
            }
            const size_t include_at = actions.find("include a ");
            const size_t pattern_at = actions.find(" melody pattern");
            if (include_at != 0 ||
                pattern_at == std::string_view::npos ||
                pattern_at <= include_at + 10) {
                return std::nullopt;
            }
            const std::string_view pattern = actions.substr(
                include_at + 10, pattern_at - include_at - 10);
            std::string pattern_cn;
            if (pattern == "rising-falling") pattern_cn = "先升后降";
            else if (pattern == "falling-rising") pattern_cn = "先降后升";
            else return std::nullopt;
            std::string result = composing ? "即兴演奏或作曲时，全曲应" :
                                             "即兴演奏时，全曲应";
            if (sometimes) result += "不时";
            result += "采用" + pattern_cn + "的旋律型";
            std::string_view tail = actions.substr(
                pattern_at + std::string_view(" melody pattern").size());
            bool glides = false;
            if (tail.ends_with(" as well as glides")) {
                glides = true;
                tail.remove_suffix(
                    std::string_view(" as well as glides").size());
            }
            std::string_view direction;
            if (tail.ends_with(" on the rise")) {
                direction = "上行";
                tail.remove_suffix(std::string_view(" on the rise").size());
            } else if (tail.ends_with(" on the fall")) {
                direction = "下行";
                tail.remove_suffix(std::string_view(" on the fall").size());
            }
            tail = trim_view(tail);
            while (!tail.empty() &&
                   (tail.front() == ',' || tail.front() == ';')) {
                tail.remove_prefix(1);
                tail = trim_view(tail);
            }
            if (!tail.empty()) {
                std::optional<int> degree;
                bool sharpened = false;
                bool degree_word = false;
                size_t cursor = 0;
                while (cursor < tail.size()) {
                    while (cursor < tail.size() &&
                           (tail[cursor] == ' ' || tail[cursor] == ',')) {
                        ++cursor;
                    }
                    if (cursor >= tail.size()) break;
                    const size_t end = tail.find_first_of(" ,", cursor);
                    const std::string_view token = tail.substr(
                        cursor, (end == std::string_view::npos
                                     ? tail.size() : end) - cursor);
                    if (token == "sharpened") sharpened = true;
                    else if (token == "degree") degree_word = true;
                    else if (token != "with" && token != "the" &&
                             token != "a" && token != "and") {
                        const auto ordinal = ordinal_value(token);
                        if (!ordinal || degree) return std::nullopt;
                        degree = ordinal;
                    }
                    if (end == std::string_view::npos) break;
                    cursor = end + 1;
                }
                if (!sharpened || !degree_word || !degree)
                    return std::nullopt;
                result += "，并升高第" + chinese_number(*degree) + "级音";
                if (!direction.empty())
                    result += "（" + std::string(direction) + "时）";
            } else if (!direction.empty()) {
                return std::nullopt;
            }
            if (glides)
                result += "，同时使用滑音";
            return result;
        }

        // Individual voice/instrument responsibilities.
        const size_t always_at = sentence.find(" always ");
        const std::string_view always_subject = always_at == std::string::npos
            ? std::string_view{}
            : std::string_view(sentence).substr(0, always_at);
        const bool has_voice_subject =
            sentence.starts_with("Each ") ||
            sentence.starts_with("each ") ||
            sentence.starts_with("The ") ||
            sentence.starts_with("the ");
        // `always` also occurs inside passage-level instructions such as
        // `The passage should sometimes include ... and always include ...`.
        // Those are not voice duties and must reach the passage grammar below
        // instead of being consumed by this earlier, deliberately broad slot.
        // Search the complete sentence: in `should always include ...`, the
        // subject slice ends at `should` and omits its trailing word boundary.
        const bool is_passage_instruction =
            sentence.find(" should ") < always_at ||
            sentence.find(" include ") < always_at;
        if (always_at != std::string::npos && has_voice_subject &&
            !is_passage_instruction) {
            const std::string_view raw_subject = always_subject;
            std::string translated_subject;
            if (const auto fixed = translate_voice_subject(raw_subject)) {
                translated_subject = *fixed;
            } else return std::nullopt;
            const std::string_view predicate = std::string_view(sentence).substr(always_at + 8);
            static constexpr auto roles = std::to_array<std::pair<
                std::string_view, std::string_view>>({
                {"does the main melody", "始终负责主旋律"},
                {"does the counterpoint melody", "始终负责对位旋律"},
                {"does harmony", "始终负责和声"},
                {"provides the rhythm", "始终负责节奏"},
            });
            for (const auto &[english, chinese] : roles) {
                if (predicate == english) return translated_subject +
                                                std::string(chinese);
            }
            // A voice can have one permanent role followed by one or more
            // playing techniques ("does the main melody and plays
            // arpeggios"). Translate the complete predicate rather than
            // allowing the instrument name alone to be replaced.
            static constexpr auto role_actions = std::to_array<std::pair<
                std::string_view, std::string_view>>({
                {"does the main melody", "负责主旋律"},
                {"does the counterpoint melody", "负责对位旋律"},
                {"does harmony", "负责和声"},
                {"provides the rhythm", "负责节奏"},
            });
            static constexpr auto voice_styles = std::to_array<std::pair<
                std::string_view, std::string_view>>({
                {"perform with skill", "娴熟地演奏"},
                {"perform with feeling", "饱含感情地演奏"},
                {"perform sweetly", "奏出甜美柔和的音色"},
                {"perform expressively", "富有表现力地演奏"},
                {"perform with a light touch", "轻巧细腻地演奏"},
                {"glides from note to note", "使用滑音"},
                {"uses grace notes", "使用装饰音"},
                {"uses mordents", "使用波音"},
                {"makes trills", "使用颤音"},
                {"plays rapid runs", "奏出快速音群"},
                {"locally improvises", "进行局部即兴"},
                {"syncopates", "使用切分音"},
                {"adds fills", "加花"},
                {"modulates frequently", "频繁转调"},
                {"plays arpeggios", "演奏琶音"},
                {"plays staccato", "采用断奏"},
                {"plays legato", "采用连奏"},
                {"matches notes and syllables", "采用一字一音的唱法"},
                {"should perform with skill", "应娴熟地演奏"},
                {"should perform with feeling", "应饱含感情地演奏"},
                {"should perform sweetly", "应奏出甜美柔和的音色"},
                {"should perform expressively", "应富有表现力地演奏"},
                {"should perform with a light touch", "应轻巧细腻地演奏"},
            });
            std::vector<std::string> actions;
            size_t action_cursor = 0;
            while (action_cursor < predicate.size()) {
                while (action_cursor < predicate.size() &&
                       predicate[action_cursor] == ' ') ++action_cursor;
                for (const std::string_view separator : {
                         std::string_view(", "), std::string_view("and "),
                         std::string_view("or "),
                         std::string_view("as well as ")}) {
                    if (!predicate.substr(action_cursor).starts_with(separator))
                        continue;
                    action_cursor += separator.size();
                    break;
                }
                size_t best_length = 0;
                std::string best_translation;
                auto consider = [&](std::string_view english,
                                    std::string_view chinese) {
                    if (!predicate.substr(action_cursor).starts_with(english))
                        return;
                    const size_t end = action_cursor + english.size();
                    const bool boundary = end == predicate.size() ||
                        predicate.substr(end).starts_with(", ") ||
                        predicate.substr(end).starts_with(" and ") ||
                        predicate.substr(end).starts_with(" or ") ||
                        predicate.substr(end).starts_with(" as well as ");
                    if (!boundary || english.size() <= best_length) return;
                    best_length = english.size();
                    best_translation = chinese;
                };
                for (const auto &[english, chinese] : role_actions)
                    consider(english, chinese);
                for (const auto &[english, chinese] : voice_styles)
                    consider(english, chinese);
                // The generator may append a dynamic or playing instruction
                // to a permanent role with `and is to ...`.  Treat `is to`
                // as grammar and reuse every closed action vocabulary rather
                // than special-casing only the observed fade/loud examples.
                for (const auto &[english, chinese] : dynamics)
                    consider("is to " + std::string(english),
                             "应" + std::string(chinese));
                for (const auto &[english, chinese] : qualities)
                    consider("is to " + std::string(english),
                             "应" + std::string(chinese));
                for (const auto &[english, chinese] : voice_styles)
                    consider("is to " + std::string(english),
                             "应" + std::string(chinese));
                for (const auto &[english, chinese] : qualities)
                    consider("should " + std::string(english),
                             "应" + std::string(chinese));
                for (const auto &[english, chinese] : dynamics)
                    consider("should " + std::string(english),
                             "应" + std::string(chinese));
                // Voice instructions also use the shared technique grammar,
                // notably `should build as the performance proceeds` followed
                // by `and is to be very loud`. Keep the established wording
                // and consume the full technique before the next action.
                for (const auto &[english, chinese] : techniques) {
                    consider("should " + std::string(english),
                             "应" + std::string(chinese));
                    consider("is to " + std::string(english),
                             "应" + std::string(chinese));
                }
                if (best_length == 0) return std::nullopt;
                actions.push_back(std::move(best_translation));
                action_cursor += best_length;
                }
            if (!actions.empty())
                return translated_subject + "始终" +
                       join_chinese(actions, "，并");
        }
        const size_t is_to = sentence.find(" is to ");
        if (is_to != std::string::npos &&
            sentence.find(", and it is to ") == std::string::npos) {
            std::string_view raw_subject(sentence.data(), is_to);
            std::string translated_subject;
            if (const auto fixed = translate_voice_subject(raw_subject)) {
                translated_subject = *fixed;
            }
            if (!translated_subject.empty()) {
                std::string_view action = std::string_view(sentence).substr(is_to + 7);
                if (const auto dynamic = lookup_phrase(action, dynamics)) {
                    return translated_subject + *dynamic;
                }
                if (const auto quality = lookup_phrase(action, qualities)) {
                    return translated_subject + "应" + *quality;
                }
                if (const auto technique = lookup_phrase(action, techniques)) {
                    return translated_subject + "应" + *technique;
                }
                static constexpr auto performance_styles = std::to_array<
                    std::pair<std::string_view, std::string_view>>({
                    {"perform with skill", "娴熟地演奏"},
                    {"perform with feeling", "饱含感情地演奏"},
                    {"perform sweetly", "奏出甜美柔和的音色"},
                    {"perform expressively", "富有表现力地演奏"},
                    {"perform with a light touch", "轻巧细腻地演奏"},
                    {"glides from note to note", "使用滑音"},
                    {"uses grace notes", "使用装饰音"},
                    {"uses mordents", "使用波音"},
                    {"makes trills", "使用颤音"},
                    {"plays rapid runs", "奏出快速音群"},
                    {"locally improvises", "进行局部即兴"},
                    {"syncopates", "使用切分音"},
                    {"adds fills", "加花"},
                    {"modulates frequently", "频繁转调"},
                    {"plays arpeggios", "演奏琶音"},
                    {"plays staccato", "采用断奏"},
                    {"plays legato", "采用连奏"},
                    {"matches notes and syllables", "采用一字一音的唱法"},
                });
                if (const auto translated_action =
                        lookup_phrase(action, performance_styles)) {
                    return translated_subject + *translated_action;
                }
            }
        }

        constexpr std::string_view spreads_syllables =
            " spreads syllables over many notes";
        if (sentence.ends_with(spreads_syllables)) {
            const auto subject = translate_voice_subject(
                std::string_view(sentence).substr(
                    0, sentence.size() - spreads_syllables.size()));
            if (subject) return *subject + "采用一字多音的唱法";
        }

        // Both standalone and coordinated ranges use the same prose. A
        // passage scope belongs before the entire list, not to a voice name.
        if (sentence.starts_with("In the ") || sentence.starts_with("In each ")) {
            const bool each_scope = sentence.starts_with("In each ");
            const size_t scope_prefix = each_scope ? 8 : 7;
            const size_t comma = sentence.find(", ");
            if (comma != std::string::npos) {
                const auto scope = translate_subject(
                    std::string(each_scope ? "Each of the " : "The ") +
                    sentence.substr(scope_prefix, comma - scope_prefix));
                const auto assignments = translate_voice_range_assignments(
                    std::string_view(sentence).substr(comma + 2));
                if (scope && assignments)
                    return *scope + "中，" + join_chinese(*assignments, "；");
            }
        } else if (const auto assignments =
                       translate_voice_range_assignments(sentence)) {
            return join_chinese(*assignments, "；");
        }

        // Overall form structure.
        for (const std::string_view marker : {
                 std::string_view(" has the following structure: "),
                 std::string_view(" has a well-defined multi-passage structure: "),
                 std::string_view(" has a simple structure: "),
             }) {
            const size_t at = sentence.find(marker);
            if (at == std::string::npos) continue;
            const auto title = translate_reference(
                std::string_view(sentence).substr(0, at));
            if (!title) return std::nullopt;
            std::string_view body = std::string_view(sentence).substr(at + marker.size());
            std::string_view repeat_count;
            std::string_view trailing_body;
            bool repeated = false;
            bool optional_repeat = false;
            size_t repeated_at = body.find(" possibly all repeated");
            size_t repeated_marker_size = 22;
            if (repeated_at != std::string_view::npos) {
                repeated = true;
                optional_repeat = true;
            } else {
                repeated_at = body.find(" all repeated");
                repeated_marker_size = 13;
                repeated = repeated_at != std::string_view::npos;
            }
            if (repeated) {
                std::string_view after_repeat = body.substr(
                    repeated_at + repeated_marker_size);
                body = body.substr(0, repeated_at);
                if (after_repeat.starts_with(" "))
                    after_repeat.remove_prefix(1);
                // A repeat count does not necessarily end the structure.
                // DF can append another comma-separated sequence, e.g.
                // `all repeated one times, a bridge-passage, ...`. Parse the
                // count and the continuation independently instead of
                // requiring `times` to be the final word of the sentence.
                const size_t times_at = after_repeat.find(" times");
                if (times_at != std::string_view::npos) {
                    repeat_count = trim_view(
                        after_repeat.substr(0, times_at));
                    after_repeat.remove_prefix(times_at + 6);
                    if (after_repeat.starts_with(", "))
                        trailing_body = after_repeat.substr(2);
                    else if (after_repeat.starts_with(" and "))
                        trailing_body = after_repeat.substr(5);
                    else if (!after_repeat.empty())
                        return std::nullopt;
                } else if (after_repeat.starts_with("and ")) {
                    trailing_body = after_repeat.substr(4);
                } else if (after_repeat.starts_with(", ")) {
                    // A repeat group can be followed directly by another
                    // comma-separated passage sequence without an explicit
                    // repeat count.
                    trailing_body = after_repeat.substr(2);
                } else if (!after_repeat.empty()) {
                    return std::nullopt;
                }
            }
            auto translate_passage_list = [&](std::string_view raw_body)
                    -> std::optional<std::vector<std::string>> {
                std::vector<std::string> passages;
                for (std::string_view item : split_list(raw_body)) {
                std::string value = trim(std::string(item));
                std::string prefix;
                for (const auto &[english, chinese] : std::array<std::pair<
                         std::string_view, std::string_view>, 10>{{
                         {"an additional ", "另加"}, {"another ", "另加"},
                         {"possibly ", "可能出现的"}, {"a lengthy ", "较长的"},
                         {"a brief ", "简短的"}, {"a second ", "第二个"},
                         {"an unrelated ", "独立的"}, {"an ", ""},
                         {"the ", ""}, {"a ", ""},
                     }}) {
                    if (!value.starts_with(english)) continue;
                    value.erase(0, english.size());
                    prefix = chinese;
                    break;
                }
                // Structure modifiers can be stacked after a grouping prefix,
                // as in `another one to two lengthy passages`.  Resolve the
                // adjective independently so cardinality parsing sees the
                // actual passage noun instead of `lengthy passages`.
                std::string quality;
                for (const auto &[english, chinese] : std::array<std::pair<
                         std::string_view, std::string_view>, 3>{{
                         {"lengthy ", "较长的"},
                         {"brief ", "简短的"},
                         {"unrelated ", "彼此独立的"},
                     }}) {
                    const size_t modifier = value.find(english);
                    if (modifier == std::string::npos) continue;
                    value.erase(modifier, english.size());
                    quality = chinese;
                    break;
                }
                auto passage = translate_subject(value);
                if (!passage) {
                    // A structure slot can carry a numeric range or a fixed
                    // count (`one to two passages`, `three unrelated
                    // passages`).  Counts belong to the slot cardinality,
                    // while the remaining phrase names the passage kind.
                    for (size_t boundary = value.find(' ');
                         boundary != std::string::npos;
                         boundary = value.find(' ', boundary + 1)) {
                        const auto count = translate_count(
                            std::string_view(value).substr(0, boundary));
                        if (!count) continue;
                        const auto kind = translate_subject(
                            value.substr(boundary + 1));
                        if (!kind) continue;
                        passage = *count + "个" + quality + *kind;
                        quality.clear();
                    }
                }
                if (!passage) return std::nullopt;
                passages.push_back(prefix + quality + *passage);
                }
                if (passages.empty()) return std::nullopt;
                return passages;
            };
            const auto passages = translate_passage_list(body);
            if (!passages) return std::nullopt;
            std::optional<std::vector<std::string>> trailing_passages;
            if (!trailing_body.empty()) {
                trailing_passages = translate_passage_list(trailing_body);
                if (!trailing_passages) return std::nullopt;
            }
            std::string result = "“" + *title + "”的段落依次为：" +
                                 join_chinese(*passages);
            if (repeated) {
                if (!repeat_count.empty()) {
                    const auto count = translate_count(repeat_count);
                    if (!count) return std::nullopt;
                    result += (optional_repeat ? "，以上部分可整体重复" : "，以上部分整体重复") +
                              *count + "次";
                } else {
                    result += optional_repeat
                        ? "，上述部分可整体重复"
                        : "，上述部分整体重复";
                }
            }
            if (trailing_passages) {
                result += "，随后进入" + join_chinese(*trailing_passages);
            }
            return result;
        }
        const size_t voiced = sentence.find(" is voiced by ");
        if (voiced != std::string::npos) {
            const auto translated_group = translate_subject(
                std::string_view(sentence).substr(0, voiced));
            if (!translated_group) return std::nullopt;
            const std::string_view tail =
                std::string_view(sentence).substr(voiced + 14);

            // A voicing entry begins with a role assignment, or with a bare
            // reciter.  Generated composition titles can themselves contain
            // `and`, so the ordinary English-list splitter is not valid for
            // this production.  Locate only separators followed by another
            // legal voicing entry; this preserves the complete embedded
            // title and also handles vocalists used as melody/rhythm voices.
            static constexpr auto voicing_entry_prefixes =
                std::to_array<std::string_view>({
                    "the melody of the ", "the counterpoint of the ",
                    "the harmony of the ", "the rhythm of the ",
                });
            // Vocalists can voice a passage without naming recited material
            // or an explicit melody/rhythm duty (`the speakers`). Share the
            // bare roles between list boundaries and assignment translation.
            static constexpr auto bare_vocalists =
                std::to_array<std::pair<std::string_view, std::string_view>>({
                    {"speaker", "朗诵者负责朗诵"},
                    {"speakers", "朗诵者负责朗诵"},
                    {"chanter", "吟唱者负责吟唱"},
                    {"chanters", "吟唱者负责吟唱"},
                    {"singer", "歌者负责演唱"},
                    {"singers", "歌者负责演唱"},
                });
            // Use the same singular/plural reciter slots both to delimit
            // assignments and to translate them. Otherwise `and the speakers
            // reciting ...` is swallowed into the preceding instrument name.
            static constexpr auto reciter_prefixes =
                std::to_array<std::pair<std::string_view, std::string_view>>({
                    {"speaker reciting ", "朗诵者"},
                    {"speakers reciting ", "朗诵者"},
                    {"chanter reciting ", "吟唱者"},
                    {"chanters reciting ", "吟唱者"},
                    {"singer reciting ", "歌者"},
                    {"singers reciting ", "歌者"},
                });
            auto begins_voicing_entry = [&](std::string_view value) {
                if (std::any_of(
                    voicing_entry_prefixes.begin(),
                    voicing_entry_prefixes.end(),
                    [&](std::string_view prefix) {
                        return value.starts_with(prefix);
                    })) return true;
                if (!value.starts_with("the ")) return false;
                value.remove_prefix(4);
                for (const auto &[role, chinese] : bare_vocalists) {
                    if (!value.starts_with(role)) continue;
                    const std::string_view rest = value.substr(role.size());
                    if (rest.empty() || rest.starts_with(", ") ||
                        rest.starts_with(" and ")) return true;
                }
                return std::any_of(reciter_prefixes.begin(),
                    reciter_prefixes.end(), [&](const auto &entry) {
                        return value.starts_with(entry.first);
                    });
            };
            if (!begins_voicing_entry(tail)) return std::nullopt;
            std::vector<std::string_view> raw_voicings;
            size_t item_start = 0;
            while (item_start < tail.size()) {
                size_t item_end = tail.size();
                size_t next_start = tail.size();
                for (size_t at = item_start; at < tail.size(); ++at) {
                    size_t separator_size = 0;
                    if (tail.substr(at).starts_with(", ")) {
                        separator_size = 2;
                    } else if (tail.substr(at).starts_with(" and ")) {
                        separator_size = 5;
                    }
                    if (separator_size == 0 ||
                        !begins_voicing_entry(
                            tail.substr(at + separator_size))) {
                        continue;
                    }
                    item_end = at;
                    next_start = at + separator_size;
                    break;
                }
                const std::string_view item = trim_view(
                    tail.substr(item_start, item_end - item_start));
                if (item.empty()) return std::nullopt;
                raw_voicings.push_back(item);
                if (item_end == tail.size()) break;
                item_start = next_start;
            }

            auto translate_recitation = [&](std::string_view raw)
                    -> std::optional<std::string> {
                if (raw.starts_with("the ")) raw.remove_prefix(4);
                std::string_view actor;
                for (const auto &[prefix, chinese] : reciter_prefixes) {
                    if (!raw.starts_with(prefix)) continue;
                    actor = chinese;
                    raw.remove_prefix(prefix.size());
                    break;
                }
                if (actor.empty()) return std::nullopt;
                const auto material = translate_recited_material(raw);
                if (!material) return std::nullopt;
                return std::string(actor) + *material;
            };

            std::vector<std::string> assignments;
            for (std::string_view item : raw_voicings) {
                std::string_view performer = item;
                std::string_view action;
                for (const auto &[prefix, verb] : std::array<std::pair<
                         std::string_view, std::string_view>, 4>{{
                         {"the melody of the ", "负责主旋律"},
                         {"the counterpoint of the ", "负责对位旋律"},
                         {"the harmony of the ", "负责和声"},
                         {"the rhythm of the ", "负责节奏"},
                     }}) {
                    if (!performer.starts_with(prefix)) continue;
                    performer.remove_prefix(prefix.size());
                    action = verb;
                    break;
                }
                if (action.empty()) {
                    std::string_view role = performer;
                    if (role.starts_with("the ")) role.remove_prefix(4);
                    const auto bare = std::find_if(bare_vocalists.begin(),
                        bare_vocalists.end(), [&](const auto &entry) {
                            return role == entry.first;
                        });
                    if (bare != bare_vocalists.end()) {
                        assignments.emplace_back(bare->second);
                        continue;
                    }
                    const auto speech = translate_recitation(performer);
                    if (!speech) return std::nullopt;
                    assignments.push_back(*speech);
                    continue;
                }
                if (performer.empty()) return std::nullopt;
                if (const auto speech = translate_recitation(performer)) {
                    assignments.push_back(*speech + "并" +
                                          std::string(action));
                    continue;
                }
                // Pure vocal assignments use the same singer/chanter/speaker
                // subjects as range and duty clauses; they are not generated
                // instrument names even when no recitation follows them.
                const auto translated_performer =
                    translate_voice_subject(performer);
                if (!translated_performer) return std::nullopt;
                assignments.push_back(*translated_performer + std::string(action));
            }
            if (assignments.empty()) return std::nullopt;
            return *translated_group + "中，" +
                   join_chinese(assignments, "，");
        }

        // Passage character, dynamics and technique.
        for (const auto &[english, chinese] : tempos) {
            const std::string suffix = " " + std::string(english);
            if (!sentence.ends_with(suffix)) continue;
            const auto subject = translate_subject(std::string_view(sentence).substr(
                0, sentence.size() - suffix.size()));
            if (subject) return *subject + std::string(chinese);
        }
        const size_t passage_has = sentence.find(" has ");
        if (passage_has != std::string::npos) {
            const auto subject = translate_subject(
                std::string_view(sentence).substr(0, passage_has));
            if (subject) {
                std::string_view tail = std::string_view(sentence).substr(
                    passage_has + 5);
                if (tail.ends_with(" in the melody and counterpoint")) {
                    tail.remove_suffix(std::string_view(
                        " in the melody and counterpoint").size());
                    const auto phrases = lookup_phrase(tail, phrase_lengths);
                    if (phrases) return *subject + "的主旋律和对位旋律均采用" +
                                            *phrases;
                }
                for (const auto &[suffix, role] : std::array<std::pair<
                         std::string_view, std::string_view>, 2>{{
                         {" in the melody", "主旋律"},
                         {" in the counterpoint melody", "对位旋律"},
                     }}) {
                    if (!tail.ends_with(suffix)) continue;
                    const auto phrases = lookup_phrase(
                        tail.substr(0, tail.size() - suffix.size()),
                        phrase_lengths);
                    if (phrases) {
                        return *subject + "的" + std::string(role) +
                               "采用" + *phrases;
                    }
                }
                const size_t counterpoint = tail.find(
                    " in the melody, while the counterpoint has ");
                if (counterpoint != std::string_view::npos) {
                    const auto melody = lookup_phrase(
                        tail.substr(0, counterpoint), phrase_lengths);
                    std::string_view second = tail.substr(
                        counterpoint + std::string_view(
                            " in the melody, while the counterpoint has ").size());
                    if (second.ends_with(" in the counterpoint melody"))
                        second.remove_suffix(std::string_view(
                            " in the counterpoint melody").size());
                    const auto counter = lookup_phrase(second, phrase_lengths);
                    if (melody && counter)
                        return *subject + "的主旋律采用" + *melody +
                               "，对位旋律采用" + *counter;
                }
            }
        }
        const size_t should = sentence.find(" should ");
        if (should != std::string::npos) {
            const auto subject = translate_subject(
                std::string_view(sentence).substr(0, should));
            if (!subject) return std::nullopt;
            std::string_view predicate = std::string_view(sentence).substr(should + 8);
            if (const auto patterns =
                    translate_melody_pattern_instructions(predicate)) {
                return *subject + *patterns;
            }
            if (predicate.starts_with("be composed and performed using ") ||
                predicate.starts_with("be performed using ")) {
                const bool composed = predicate.starts_with("be composed");
                const size_t prefix = composed
                    ? std::string_view("be composed and performed using ").size()
                    : std::string_view("be performed using ").size();
                const auto methods = translate_technique_list(predicate.substr(prefix));
                if (!methods) return std::nullopt;
                return *subject + (composed ? "在创作和演奏时应使用" :
                                              "演奏时应使用") + *methods;
            }
            const size_t dynamic_at = predicate.find(", and it is to ");
            std::string_view trait_text = predicate.substr(0, dynamic_at);
            std::vector<std::string> traits;
            while (!trait_text.empty()) {
                // A complete tempo can contain its own conjunction, such as
                // `slows and broadens` or `slows down and dies away ...`.
                // Match the existing vocabulary before consuming the `and`
                // that joins separate character, tempo and dynamic traits.
                trait_text = trim_view(trait_text);
                const std::pair<std::string_view, std::string_view> *best = nullptr;
                const auto consider = [&](const auto &table) {
                    for (const auto &entry : table) {
                        if (!trait_text.starts_with(entry.first)) continue;
                        const std::string_view tail =
                            trait_text.substr(entry.first.size());
                        if (!tail.empty() && !tail.starts_with(" and ")) continue;
                        if (!best || entry.first.size() > best->first.size())
                            best = &entry;
                    }
                };
                consider(qualities);
                consider(tempos);
                consider(dynamics);
                if (!best) return std::nullopt;
                traits.emplace_back(best->second);
                trait_text.remove_prefix(best->first.size());
                if (trait_text.empty()) break;
                trait_text.remove_prefix(std::string_view(" and ").size());
                if (trim_view(trait_text).empty()) return std::nullopt;
            }
            if (traits.empty()) return std::nullopt;
            std::string result = *subject + "应" +
                                 join_chinese(traits, "，并");
            if (dynamic_at != std::string_view::npos) {
                const auto dynamic = lookup_phrase(predicate.substr(
                    dynamic_at + std::string_view(", and it is to ").size()), dynamics);
                if (!dynamic) return std::nullopt;
                result += "；" + *dynamic;
            }
            return result;
        }

        if (sentence ==
            "This passage features only melodic tones and intervals")
            return "本段只使用单音和双音";
        if (sentence == "This passage typically has some sparse chords")
            return "本段通常只零星使用少量和弦";
        if (sentence ==
            "Chords are packed close together in dense clusters in this passage")
            return "本段的和弦紧密聚集成音簇";
        if (sentence ==
            "This passage is richly layered with full chords making use of the available range")
            return "本段和弦饱满，遍及整个音域，层次丰富";
        if (sentence == "Only one pitch is ever played at a time in this passage")
            return "本段每次只奏一个音，不叠加其他音";

        // Fundamental scale construction and tuning notation.
        if (sentence.starts_with("Scales are constructed from ") &&
            sentence.ends_with(" notes dividing the octave")) {
            constexpr std::string_view prefix = "Scales are constructed from ";
            constexpr std::string_view suffix = " notes dividing the octave";
            const auto count = number_value(std::string_view(sentence).substr(
                prefix.size(), sentence.size() - prefix.size() - suffix.size()));
            if (!count) return std::nullopt;
            return "在一个八度内划分出" + chinese_number(*count) + "个音，组成音阶";
        }
        if (sentence.starts_with("Scales are constructed from ") &&
            sentence.ends_with(" notes spaced evenly throughout the octave")) {
            constexpr std::string_view prefix = "Scales are constructed from ";
            constexpr std::string_view suffix =
                " notes spaced evenly throughout the octave";
            const auto count = number_value(std::string_view(sentence).substr(
                prefix.size(), sentence.size() - prefix.size() - suffix.size()));
            if (!count) return std::nullopt;
            return "音阶由" + chinese_number(*count) + "个音组成，在一个八度内等距排列";
        }
        if (sentence.starts_with("Scales are constructed from ") &&
            sentence.ends_with(" notes")) {
            const auto count = number_value(std::string_view(sentence).substr(
                28, sentence.size() - 28 - 6));
            if (!count) return std::nullopt;
            return "音阶由" + chinese_number(*count) + "个音构成";
        }
        if (sentence.starts_with("In quartertones, their spacing is roughly ")) {
            std::string_view tail(sentence);
            tail.remove_prefix(std::string_view(
                "In quartertones, their spacing is roughly ").size());
            const size_t legend = tail.find(", where 1 is the tonic, O marks the octave and x marks other notes");
            if (legend == std::string_view::npos) return std::nullopt;
            return "以四分之一音为间距单位，各音的大致位置为“" +
                   std::string(tail.substr(0, legend)) +
                   "”；其中 1 为主音，O 为高八度的主音，x 为其他音";
        }
        if (sentence.starts_with(
            "Scales are conceived of as two chords built using a division of the perfect fourth interval into ") &&
            sentence.ends_with(" notes")) {
            constexpr std::string_view prefix =
                "Scales are conceived of as two chords built using a division of the perfect fourth interval into ";
            const auto count = number_value(std::string_view(sentence).substr(
                prefix.size(), sentence.size() - prefix.size() - 6));
            if (!count) return std::nullopt;
            return "先在纯四度内划分出" + chinese_number(*count) +
                   "个音，再以此构成两组音列，组合成音阶";
        }
        static constexpr auto scale_exacts = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"The tonic note is fixed only at the time of performance",
             "主音的音高到演奏时才确定"},
            {"The tonic note is a fixed tone passed from teacher to student",
             "主音是师徒相传的固定音高"},
            {"A single note in the fundamental scale is named",
             "基础音阶中只有一个音有专名"},
            {"Preferred notes in the fundamental scale are named",
             "基础音阶中的常用音有专名"},
            {"After a scale is constructed, notes are named according to degree",
             "音阶确定后，按各音所在的音级命名"},
            {"After a scale is constructed, the root note of chords are named",
             "音阶确定后，为各组音列的起始音命名"},
            {"Every note is named", "每个音都有名称"},
        });
        for (const auto &[english, chinese] : scale_exacts) {
            if (sentence == english) return std::string(chinese);
        }

        // Named scales can omit the pentatonic/hexatonic/heptatonic qualifier.
        // Keep the whole native name unless a known scale kind is present.
        const size_t scale_is = sentence.find(" scale is ");
        if (sentence.starts_with("The ") && scale_is != std::string::npos &&
            scale_is > 4) {
            std::string_view head(sentence.data() + 4, scale_is - 4);
            std::string kind_cn = "音阶";
            const size_t kind_space = head.rfind(' ');
            if (kind_space != std::string_view::npos) {
                const std::string_view kind = head.substr(kind_space + 1);
                if (kind == "pentatonic") kind_cn = "五声音阶";
                else if (kind == "hexatonic") kind_cn = "六声音阶";
                else if (kind == "heptatonic") kind_cn = "七声音阶";
                if (kind_cn != "音阶") head = head.substr(0, kind_space);
            }
            if (const auto name = translate_native_reference(head)) {
                const std::string_view predicate = std::string_view(sentence).substr(
                    scale_is + std::string_view(" scale is ").size());
                if (predicate ==
                    "constructed by selection of degrees from the fundamental scale") {
                    return "“" + *name + "”" + kind_cn +
                           "从基础音阶中选取若干音级组成";
                }
                constexpr std::string_view selected_degrees =
                    "constructed by selection of degrees from ";
                if (predicate.starts_with(selected_degrees)) {
                    std::vector<std::string> degrees;
                    for (std::string_view item : split_list(
                             predicate.substr(selected_degrees.size()))) {
                        std::string value = trim(std::string(item));
                        if (value.starts_with("the ")) value.erase(0, 4);
                        while (!value.empty() && std::isalpha(
                                   static_cast<unsigned char>(value.back()))) {
                            value.pop_back();
                        }
                        if (value.empty() || !std::all_of(
                                value.begin(), value.end(),
                                [](unsigned char ch) {
                                    return ch >= '0' && ch <= '9';
                                })) {
                            degrees.clear();
                            break;
                        }
                        degrees.push_back("第" + value + "级");
                    }
                    if (!degrees.empty()) {
                        return "“" + *name + "”" + kind_cn +
                               "选用" + join_chinese(degrees) +
                               "音组成";
                    }
                }
                static constexpr auto concepts = std::to_array<std::pair<
                    std::string_view, std::string_view>>({
                    {"thought of as joined chords spanning a perfect fifth and a perfect fourth",
                     "由首尾相接的两组音列组成，分别跨越纯五度和纯四度"},
                    {"thought of as two disjoint chords spanning a perfect fifth and a major third",
                     "由互不相接的两组音列组成，分别跨越纯五度和大三度"},
                    {"thought of as two disjoint chords spanning a tritone and a perfect fourth",
                     "由互不相接的两组音列组成，分别跨越三全音和纯四度"},
                    {"thought of as two disjoint chords drawn from the fundamental division of the perfect fourth",
                     "由互不相接的两组音列组成，各音选自基础纯四度的音级"},
                    {"thought of as two disjoint chords spanning two perfect fourths",
                     "由互不相接的两组音列组成，每组跨越一个纯四度"},
                });
                for (const auto &[english, chinese] : concepts) {
                    if (predicate == english)
                        return "“" + *name + "”" + kind_cn + std::string(chinese);
                }
            }
        }
        if (sentence.starts_with("The degrees selected are ")) {
            std::string_view raw = std::string_view(sentence).substr(25);
            std::vector<std::string> degrees;
            for (std::string_view item : split_list(raw)) {
                std::string value = trim(std::string(item));
                if (value.starts_with("the ")) value.erase(0, 4);
                while (!value.empty() && std::isalpha(
                           static_cast<unsigned char>(value.back()))) {
                    value.pop_back();
                }
                if (value.empty() || !std::all_of(value.begin(), value.end(),
                        [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) {
                    return std::nullopt;
                }
                degrees.push_back("第" + value + "级");
            }
            if (degrees.empty()) return std::nullopt;
            return "选取的音级为" + join_chinese(degrees);
        }
        if (sentence.starts_with("It is called ")) {
            const auto name = translate_native_reference(
                std::string_view(sentence).substr(13));
            if (!name) return std::nullopt;
            return "称为“" + *name + "”";
        }
        if (sentence.starts_with("The names are ")) {
            std::vector<std::string> names;
            for (std::string_view item : split_list(
                     std::string_view(sentence).substr(14))) {
                const size_t spoken_at = item.find(" (spoken ");
                const size_t short_at = item.find(" (");
                const size_t parenthesis = spoken_at != std::string_view::npos
                    ? spoken_at : short_at;
                const std::string_view raw_name =
                    parenthesis == std::string_view::npos
                        ? item : item.substr(0, parenthesis);
                const auto name = translate_native_reference(raw_name);
                if (!name) return std::nullopt;
                std::string rendered = "“" + *name + "”";
                if (parenthesis != std::string_view::npos) {
                    if (!item.ends_with(')')) return std::nullopt;
                    const size_t opening = parenthesis +
                        (spoken_at != std::string_view::npos ? 9 : 2);
                    const size_t closing = item.size() - 1;
                    if (opening >= closing) return std::nullopt;
                    std::string_view annotation =
                        item.substr(opening, closing - opening);
                    std::string_view degree;
                    const size_t comma = annotation.rfind(", ");
                    if (comma != std::string_view::npos) {
                        degree = annotation.substr(comma + 2);
                        annotation = annotation.substr(0, comma);
                    }
                    const auto pronunciation =
                        translate_native_reference(annotation);
                    if (!pronunciation) return std::nullopt;
                    rendered += "（念作“" + *pronunciation + "”";
                    if (!degree.empty()) {
                        std::string ordinal(degree);
                        for (const std::string_view suffix : {
                                 std::string_view("st"), std::string_view("nd"),
                                 std::string_view("rd"), std::string_view("th")}) {
                            if (ordinal.ends_with(suffix)) {
                                ordinal.resize(ordinal.size() - suffix.size());
                                break;
                            }
                        }
                        if (ordinal.empty() || !std::all_of(
                                ordinal.begin(), ordinal.end(),
                                [](unsigned char ch) {
                                    return ch >= '0' && ch <= '9';
                                })) {
                            return std::nullopt;
                        }
                        rendered += "，第" + ordinal + "级";
                    }
                    rendered += "）";
                }
                names.push_back(std::move(rendered));
            }
            if (names.empty()) return std::nullopt;
            return "名称依次为" + join_chinese(names);
        }
        if (sentence.starts_with("These chords are named ")) {
            std::vector<std::string> names;
            for (std::string_view item : split_list(
                     std::string_view(sentence).substr(23))) {
                const auto name = translate_native_reference(item);
                if (!name) return std::nullopt;
                names.push_back("“" + *name + "”");
            }
            if (names.empty()) return std::nullopt;
            return "这几组音列分别称为" + join_chinese(names);
        }
        if (sentence.starts_with("The ")) {
            for (const auto &[marker, chord_cn] : std::array<std::pair<
                     std::string_view, std::string_view>, 3>{{
                     {" trichord ", "三音列"},
                     {" tetrachord ", "四音列"},
                     {" pentachord ", "五音列"},
                 }}) {
                const size_t chord_at = sentence.find(marker);
                if (chord_at == std::string::npos) continue;
                const auto name = translate_native_reference(
                    std::string_view(sentence).substr(4, chord_at - 4));
                if (!name) return std::nullopt;
                const std::string_view tail = std::string_view(sentence).substr(
                    chord_at + marker.size());
                std::vector<std::string> degrees;
                size_t cursor = 0;
                while (cursor < tail.size()) {
                    while (cursor < tail.size() && tail[cursor] == ' ') ++cursor;
                    size_t end = cursor;
                    while (end < tail.size() && tail[end] != ' ' &&
                           tail[end] != ',' && tail[end] != ')') ++end;
                    std::string token(tail.substr(cursor, end - cursor));
                    while (!token.empty() && std::isalpha(
                               static_cast<unsigned char>(token.back()))) {
                        token.pop_back();
                    }
                    if (!token.empty() && std::all_of(token.begin(), token.end(),
                            [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) {
                        degrees.push_back("第" + token + "级");
                    }
                    cursor = end + 1;
                }
                std::string system;
                if (tail.find("degrees of the semitone octave scale") !=
                    std::string_view::npos) system = "八度内半音音阶";
                else if (tail.find("degrees of the quartertone octave scale") !=
                         std::string_view::npos) system = "八度内四分之一音音阶";
                else if (tail.find(
                             "degrees of the fundamental perfect fourth division") !=
                         std::string_view::npos) system = "基础纯四度音列";
                else if (tail.find("degrees of the octave scale") !=
                         std::string_view::npos) system = "八度音阶";
                if (degrees.empty() || system.empty()) return std::nullopt;
                std::string result = "“" + *name + "”" +
                    std::string(chord_cn) + "由" + system + "的" +
                    join_chinese(degrees) + "构成";
                if (tail.find("completing the octave") != std::string_view::npos)
                    result += "，并补全八度";
                return result;
            }
        }

        // Rhythm systems and named patterns.
        static constexpr auto rhythm_exacts = std::to_array<std::pair<
            std::string_view, std::string_view>>({
            {"The rhythm system is fundamentally polyrhythmic",
             "这一节奏体系采用复节奏"},
            {"The rhythm system is fundamentally polymetric",
             "这一节奏体系采用多重节拍"},
            {"There are always multiple rhythm lines, and each of their bars is played over the same period of time, regardless of the number of beats",
             "多条节奏声部始终同时演奏；每个声部的小节时长相同，拍数可以不同"},
            {"There are always multiple rhythm lines, and the beats are always played together, even if one rhythm line completes (and then repeats) before the other is finished",
             "多条节奏声部的每一拍始终对齐；较短的声部奏完便从头重复，不必等待其他声部"},
            {"The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named",
             "各节奏声部不分主次，共同构成一个整体，但可以各有名称"},
            {"As stated above, they are to be played in polyrhythm",
             "如前所述，这些节奏型以复节奏方式同时演奏"},
            {"As stated above, they are to be played in polymeter",
             "如前所述，这些节奏型按多重节拍同时演奏"},
            {"The patterns are to be played in the same beat, allowing one to repeat before the other is concluded",
             "这些节奏型的每一拍都要对齐；较短的节奏型奏完便从头重复，不必等待另一节奏型"},
            {"The patterns are to be played over the same period of time, concluding together regardless of beat number",
             "这些节奏型的总时长相同，无论各有多少拍，都要同时结束"},
        });
        for (const auto &[english, chinese] : rhythm_exacts) {
            if (sentence == english) return std::string(chinese);
        }

        const size_t rhythm_made = sentence.find(" rhythm is made from ");
        if (rhythm_made != std::string::npos) {
            std::string_view raw_name =
                std::string_view(sentence).substr(0, rhythm_made);
            if (raw_name.starts_with("The ")) raw_name.remove_prefix(4);
            const auto name = translate_native_reference(raw_name);
            if (!name) return std::nullopt;
            std::string_view tail = std::string_view(sentence).substr(
                rhythm_made + std::string_view(" rhythm is made from ").size());
            const size_t patterns_at = tail.find(" patterns: ");
            if (patterns_at == std::string_view::npos) return std::nullopt;
            const auto count = translate_count(tail.substr(0, patterns_at));
            if (!count) return std::nullopt;
            std::vector<std::string> names;
            for (std::string_view item : split_list(
                     tail.substr(patterns_at + 11))) {
                bool primary = false;
                if (item.ends_with(" (considered the primary)")) {
                    item.remove_suffix(std::string_view(
                        " (considered the primary)").size());
                    primary = true;
                }
                item = trim_view(item);
                if (item.starts_with("the ")) item.remove_prefix(4);
                const auto translated_name =
                    translate_native_reference(item);
                if (!translated_name) return std::nullopt;
                names.push_back("“" + *translated_name + "”" +
                                (primary ? "（主节奏型）" : ""));
            }
            if (names.empty()) return std::nullopt;
            return "“" + *name + "”节奏由" + *count + "个节奏型构成：" +
                   join_chinese(names);
        }
        const size_t rhythm_line = sentence.find(" rhythm is a single line with ");
        if (rhythm_line != std::string::npos) {
            std::string_view raw_name =
                std::string_view(sentence).substr(0, rhythm_line);
            if (raw_name.starts_with("The ")) raw_name.remove_prefix(4);
            const auto name = translate_native_reference(raw_name);
            if (!name) return std::nullopt;
            std::string_view tail = std::string_view(sentence).substr(
                rhythm_line + std::string_view(" rhythm is a single line with ").size());
            const size_t beats_at = tail.find(" beats");
            const size_t beat_at = beats_at == std::string_view::npos
                ? tail.find(" beat") : beats_at;
            if (beat_at == std::string_view::npos) return std::nullopt;
            const auto beats = translate_count(tail.substr(0, beat_at));
            if (!beats) return std::nullopt;
            tail.remove_prefix(beat_at +
                (beats_at == std::string_view::npos ? 5 : 6));
            std::string result = "“" + *name + "”为单声部节奏，共" +
                                 *beats + "拍";
            if (tail.starts_with(" divided into ")) {
                tail.remove_prefix(14);
                size_t bars_at = tail.find(" bars in a ");
                size_t bars_marker_size = 11;
                if (bars_at == std::string_view::npos) {
                    bars_at = tail.find(" bar in a ");
                    bars_marker_size = 10;
                }
                if (bars_at == std::string_view::npos || !tail.ends_with(" pattern"))
                    return std::nullopt;
                const auto bars = translate_count(tail.substr(0, bars_at));
                if (!bars) return std::nullopt;
                std::string_view pattern = tail.substr(
                    bars_at + bars_marker_size,
                    tail.size() - bars_at - bars_marker_size - 8);
                result += "，分成" + *bars + "个小节，各小节拍数依次为“" +
                          std::string(pattern) + "”";
            } else if (!tail.empty()) return std::nullopt;
            return result;
        }
        if (sentence.starts_with("The beats are named ")) {
            std::vector<std::string> beats;
            for (std::string_view item : split_list(
                     std::string_view(sentence).substr(20))) {
                const size_t spoken = item.find(" (spoken ");
                const size_t short_form = item.find(" (");
                const size_t at = spoken != std::string_view::npos ? spoken : short_form;
                std::string_view name = at == std::string_view::npos
                    ? item : item.substr(0, at);
                const auto translated_name =
                    translate_native_reference(name);
                if (!translated_name) return std::nullopt;
                std::string rendered = "“" + *translated_name + "”";
                if (at != std::string_view::npos && item.ends_with(')')) {
                    std::string_view pronunciation = item.substr(
                        at + (spoken != std::string_view::npos ? 9 : 2),
                        item.size() - at -
                            (spoken != std::string_view::npos ? 10 : 3));
                    const auto translated_pronunciation =
                        translate_native_reference(pronunciation);
                    if (!translated_pronunciation) return std::nullopt;
                    rendered += "（念作“" + *translated_pronunciation + "”）";
                }
                beats.push_back(std::move(rendered));
            }
            if (beats.empty()) return std::nullopt;
            return "各拍依次称为" + join_chinese(beats);
        }
        static constexpr std::string_view beat_stress_prefix =
            "The beat is stressed as follows:";
        if (sentence.starts_with(beat_stress_prefix)) {
            std::string_view tail = std::string_view(sentence).substr(
                beat_stress_prefix.size());
            // The notation is inserted as a separate row. At the viewport
            // edge this complete prose header can therefore be visible on its
            // own even though the following `| x - |` line is clipped.
            if (trim_view(tail).empty()) return std::string("节奏与重音标记如下");
            const size_t where = tail.find(" where ");
            std::string result = "节奏与重音标记如下：“" +
                std::string(trim(std::string(tail.substr(0, where)))) + "”";
            if (where != std::string_view::npos) {
                std::string legend(tail.substr(where + 7));
                const std::array<std::pair<std::string_view, std::string_view>, 6>
                    replacements{{
                    {"! marks the primary accent", "! 表示主重音"},
                    {"X marks an accented beat", "X 表示重拍"},
                    {"` marks a beat as early", "` 表示拍点提前"},
                    {"' marks a beat as late", "' 表示拍点延后"},
                    {"x is a beat", "x 表示一拍"},
                    {"- is silent", "- 表示休止"},
                }};
                std::vector<std::string> parts;
                for (std::string_view item : split_list(legend)) {
                    std::string value = trim(std::string(item));
                    if (value == "| indicates a bar" ||
                        value == "| indicates a bar") {
                        parts.push_back("| 表示小节线");
                        continue;
                    }
                    bool found = false;
                    for (const auto &[english, chinese] : replacements) {
                        if (value == english) {
                            parts.emplace_back(chinese);
                            found = true;
                            break;
                        }
                    }
                    if (!found) return std::nullopt;
                }
                if (!parts.empty()) result += "；其中" + join_chinese(parts);
            }
            return result;
        }

        // The notation legend can likewise be submitted as an independent
        // paragraph instead of being appended to the stress header.
        if (sentence.starts_with("where ")) {
            std::string_view legend = std::string_view(sentence).substr(6);
            const std::array<std::pair<std::string_view, std::string_view>, 6>
                replacements{{
                {"! marks the primary accent", "! 表示主重音"},
                {"X marks an accented beat", "X 表示重拍"},
                {"` marks a beat as early", "` 表示拍点提前"},
                {"' marks a beat as late", "' 表示拍点延后"},
                {"x is a beat", "x 表示一拍"},
                {"- is silent", "- 表示休止"},
            }};
            std::vector<std::string> parts;
            for (std::string_view item : split_list(legend)) {
                const std::string value = trim(std::string(item));
                if (value == "| indicates a bar") {
                    parts.push_back("| 表示小节线");
                    continue;
                }
                const auto found = std::find_if(
                    replacements.begin(), replacements.end(),
                    [&](const auto &entry) { return entry.first == value; });
                if (found == replacements.end()) return std::nullopt;
                parts.emplace_back(found->second);
            }
            if (parts.empty()) return std::nullopt;
            return "其中" + join_chinese(parts);
        }

        return std::nullopt;
    };

    // Notation and native-language names keep their punctuation. Unknown
    // clauses split only where the generator supplies independent sentence
    // frames; an ambiguous named tail stays one complete source unit.
    return render_form_description(raw_paragraph, normalized, "music", display,
        translate_sentence);
}
