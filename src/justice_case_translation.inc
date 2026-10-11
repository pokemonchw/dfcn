// A case record owns its role label, complete identity and punctuation.
// Keep this grammar inside the native Justice panel: ordinary words such as
// Unknown, names, offices and item materials retain their normal contexts.
static constexpr std::string_view justice_witness_prefix = "Saw ";
static constexpr std::string_view justice_witness_suffix = " admire the object.";
static constexpr std::string_view justice_report_preparer_prefix = "Prepared by ";

// The season/year terminates the report caption even when the native drawer
// places an unlabelled officer immediately after it on the same physical row.
// A profession's comma must not be mistaken for that date separator.
static size_t justice_report_caption_end(std::string_view source) {
    if (!source.starts_with("Interrogation Report:") &&
            !source.starts_with("Interrogation report:")) return 0;
    for (size_t comma = source.find(','); comma != std::string_view::npos;
            comma = source.find(',', comma + 1)) {
        size_t at = comma + 1;
        while (at < source.size() && source[at] == ' ') ++at;
        const size_t season_end = source.find(' ', at);
        if (season_end == std::string_view::npos) continue;
        const auto season = lower(std::string(source.substr(at, season_end - at)));
        if (season != "spring" && season != "summer" &&
                season != "autumn" && season != "winter") continue;
        at = season_end + 1;
        while (at < source.size() && source[at] == ' ') ++at;
        const size_t year = at;
        while (at < source.size() && source[at] >= '0' && source[at] <= '9') ++at;
        if (at > year && (at == source.size() || source[at] == ' ')) return at;
    }
    return 0;
}

static bool justice_report_body_prefix(std::string_view source) {
    source = trim_view(source);
    for (const std::string_view prefix : {
            "Met with subject", "Made intimidating remarks", "Made flattering remarks",
            "Appealed to ", "Attempted to ", "Built rapport", "Misrepresented facts",
            "Subject ", "Subject's ",
            "Unfortunately,", "In retrospect,", "In "})
        if (source.starts_with(prefix)) return true;
    return false;
}

std::optional<std::string> Overlay::translate_justice_case_text(
        std::string_view raw) const {
    std::string source(trim_view(raw));
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    if (auto target = exact_literal_translation("Justice case: " + source)) return target;
    if (auto target = exact_literal_translation("Justice detail: " + source)) return target;
    if (auto target = exact_literal_translation("Justice organization: " + source)) return target;

    // The native detail page appends report.officer_name without a colon
    // or sentence terminator (PE 0x478a2a..0x478a70). It is metadata, not
    // another sentence in the interrogation or an untyped personal name.
    if (source.starts_with(justice_report_preparer_prefix)) {
        const auto caption = exact_literal_translation("Justice report: Prepared by");
        const auto officer = translate_unit_identity(
            trim_view(std::string_view(source).substr(justice_report_preparer_prefix.size())), true);
        return caption && officer ? std::optional<std::string>(*caption + "：" + *officer)
                                  : std::nullopt;
    }

    // The native witness sentence inserts one complete personal identity,
    // including its epithet. It is independent of the preceding Witness row.
    if (source.starts_with(justice_witness_prefix) &&
        source.ends_with(justice_witness_suffix) &&
        source.size() > justice_witness_prefix.size() + justice_witness_suffix.size()) {
        const auto person = trim_view(std::string_view(source).substr(justice_witness_prefix.size(),
            source.size() - justice_witness_prefix.size() - justice_witness_suffix.size()));
        const auto identity = translate_unit_identity(person, true);
        auto sentence = exact_literal_translation("Justice witness: Saw {n} admire the object.");
        if (!identity || !sentence) return std::nullopt;
        const auto name_at = sentence->find("{n}");
        if (name_at == std::string::npos) return std::nullopt;
        sentence->replace(name_at, 3, *identity);
        return sentence;
    }

    const size_t number_end = source.find_first_not_of("0123456789");
    if (number_end > 0 && number_end < source.size() && source[number_end] == ' ') {
        if (auto members = exact_literal_translation("Justice organization: " +
                std::string(trim_view(std::string_view(source).substr(number_end))))) {
            if (const size_t count = members->find("{d}"); count != std::string::npos) {
                members->replace(count, 3, source.substr(0, number_end));
                return members;
            }
        }
        auto sentence = exact_literal_translation("Justice sentence: " +
            std::string(trim_view(std::string_view(source).substr(number_end))));
        if (sentence) {
            const size_t count = sentence->find("{d}");
            if (count != std::string::npos) {
                sentence->replace(count, 3, source.substr(0, number_end));
                return sentence;
            }
        }
    }

    const size_t colon = source.find(':');
    if (colon != std::string::npos) {
        const std::string label(trim_view(std::string_view(source).substr(0, colon)));
        std::string_view value = trim_view(std::string_view(source).substr(colon + 1));
        if (label == "Selected actor") {
            const auto caption = exact_literal_translation("Justice organization: Selected actor");
            auto person = exact_literal_translation("Justice actor: " + std::string(value));
            if (!person) person = translate_unit_identity(value, true);
            return caption && person ? std::optional<std::string>(*caption + "：" + *person)
                                     : std::nullopt;
        }
        if (label == "Interrogation Report" || label == "Interrogation report") {
            const size_t caption_end = justice_report_caption_end(source);
            if (!caption_end) return std::nullopt;
            const auto caption_source = std::string_view(source).substr(0, caption_end);
            value = trim_view(caption_source.substr(colon + 1));
            const size_t date_at = value.rfind(',');
            if (date_at == std::string_view::npos) return std::nullopt;
            const auto person = trim_view(value.substr(0, date_at));
            const auto date = trim_view(value.substr(date_at + 1));
            const size_t year_at = date.find(' ');
            if (person.empty() || year_at == std::string_view::npos) return std::nullopt;
            const std::string season_source = lower(std::string(date.substr(0, year_at)));
            if (season_source != "spring" && season_source != "summer" &&
                season_source != "autumn" && season_source != "winter") return std::nullopt;
            const auto year = trim_view(date.substr(year_at + 1));
            if (year.empty() || year.find_first_not_of("0123456789") != std::string_view::npos)
                return std::nullopt;
            const auto caption = exact_literal_translation("Justice report: Interrogation Report");
            const auto identity = translate_unit_identity(person, true);
            std::vector<size_t> origins;
            const auto season = RULESETS.translate_with_origins(
                season_source, "::day::season", origins);
            if (!caption || !identity || !season) return std::nullopt;
            std::string result = *caption + "：" + *identity + "，第" +
                std::string(year) + "年" + *season + "季";
            const auto officer = trim_view(std::string_view(source).substr(caption_end));
            if (!officer.empty()) {
                const auto translated = translate_justice_case_text(officer.starts_with("Officer:")
                    ? std::string(officer) : "Officer: " + std::string(officer));
                if (!translated) return std::nullopt;
                result += "；" + *translated;
            }
            return result;
        }
        if (auto caption = exact_literal_translation("Justice person: " + label)) {
            // The final period is sentence syntax, not part of the occupation
            // or a nickname. Native identity hooks and the shared parser both
            // receive precisely the same name/profession field as rosters.
            // Intelligence officer and alias captions omit that punctuation.
            const bool sentence = value.ends_with('.');
            if (!sentence && label != "Officer" && label != "Alias") return std::nullopt;
            if (sentence) value = trim_view(value.substr(0, value.size() - 1));
            if (value.empty()) return std::nullopt;
            auto identity = exact_literal_translation("Justice person value: " + std::string(value));
            // An alias may be an English generated title (The Ward of Bone)
            // instead of a native given name plus surname. Only this typed
            // field licenses the title grammar; preserve ordinary personal
            // aliases and authored names through the shared identity parser.
            if (!identity && label == "Alias" &&
                    (value.starts_with("The ") || value.starts_with("the "))) {
                std::string title(value);
                title.front() = 'T';
                if (generated_title_shape(title)) {
                    const std::string folded = lower(title.substr(4));
                    const auto head = trim_view(std::string_view(folded).substr(
                        0, folded.find(" of ")));
                    const size_t separator = head.find_last_of(" -");
                    const auto noun = head.substr(separator == std::string_view::npos
                        ? 0 : separator + 1);
                    // Personal alias heads can use a different sense from a
                    // geographic name or UI noun. Scope the reviewed meaning
                    // to that head, never the ownership tail or other pages.
                    if (const auto gloss = exact_literal_translation(
                            "Justice alias title head: " + std::string(noun)))
                        identity = translate_procedural_fragment(title, false, false,
                            {noun, *gloss}, ProceduralFragmentContext::generated_name);
                }
                if (!identity) identity = translate_legends_name(value, false);
            }
            if (!identity) identity = translate_unit_identity(value, true);
            return identity ? std::optional<std::string>(*caption + "：" + *identity +
                                (sentence ? "。" : ""))
                            : std::nullopt;
        }
        if (auto caption = exact_literal_translation("Justice date: " + label)) {
            const auto date = parse_native_calendar_date(value);
            if (!date || date->end != value.size()) return std::nullopt;
            std::vector<size_t> origins;
            const auto month = RULESETS.translate_with_origins(
                std::string(date->month), "::day::month", origins);
            if (!month) return std::nullopt;
            return *caption + "：第" + std::string(date->year) + "年，" + *month +
                std::string(date->day) + "日";
        }
    }

    // These native case types append a named object or an organization.
    // Resolve the entire typed suffix; individual words never become names.
    for (const std::string_view prefix : {"Murder of ", "Theft of ", "Espionage against "}) {
        if (!source.starts_with(prefix)) continue;
        const auto caption = exact_literal_translation("Justice case: " + std::string(trim_view(prefix)));
        if (!caption) return std::nullopt;
        const auto value = trim_view(std::string_view(source).substr(prefix.size()));
        auto target = prefix == "Theft of " ? translate_legends_artifact_identity(value)
            : prefix == "Murder of " ? translate_unit_identity(value, true)
                                      : translate_legends_name(value, false);
        if (!target && prefix == "Theft of ") target = translate_legends_item(value);
        return target ? std::optional<std::string>(*caption + *target) : std::nullopt;
    }
    // Reports concatenate native sentences before word wrapping. Their
    // scoped grammar owns every strategy, response, confession and identity;
    // its historical-event fields reuse the existing complete event grammar.
    // Typed captions above keep priority over any historical prose fallback.
    const std::string cache_key = "J:" + source;
    if (const auto found = legends_translation_cache_.find(cache_key);
            found != legends_translation_cache_.end()) return found->second;
    auto result = translate_announcement_combat(source, "justice-interrogation-paragraph");
    if (!result) {
        // Only sentence punctuation may separate report units. Splitting at
        // arbitrary spaces would let the historical fallback translate
        // "Subject" as an isolated UI noun before seeing its full response.
        // Prefer complete multi-sentence historical descriptions and require
        // both sides of every candidate boundary to translate completely.
        std::vector<size_t> starts{0};
        for (size_t at = 1; at < source.size(); ++at) {
            if (!std::isspace(static_cast<unsigned char>(source[at]))) continue;
            const char previous = source[at - 1];
            if (previous != '.' && previous != '!' && previous != '?') continue;
            while (at < source.size() &&
                std::isspace(static_cast<unsigned char>(source[at]))) ++at;
            if (at < source.size()) starts.push_back(at);
        }
        starts.push_back(source.size());
        std::vector<std::optional<std::string>> suffixes(starts.size());
        suffixes.back() = std::string{};
        for (size_t part = starts.size() - 1; part-- > 0;) {
            for (size_t next = starts.size() - 1; next > part; --next) {
                if (!suffixes[next] || (part == 0 && next == starts.size() - 1)) continue;
                const auto block = trim_view(std::string_view(source).substr(
                    starts[part], starts[next] - starts[part]));
                const auto target = translate_announcement_combat(
                    block, "justice-interrogation-paragraph");
                if (!target) continue;
                suffixes[part] = *target + *suffixes[next];
                break;
            }
        }
        result = std::move(suffixes.front());
    }
    if (legends_translation_cache_.size() >= 4096) legends_translation_cache_.clear();
    legends_translation_cache_.emplace(cache_key, result);
    return result;
}
