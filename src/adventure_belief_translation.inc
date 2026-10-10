// setupadventure's retained description producer (PE 63dd90/63b7b0)
// shares home and belief storage. Only the belief row writer admits this
// resolver: its non-divine branch replaces the whole first sentence with a
// RAW caste/creature name, and a figure without a race keeps only its name.
// Those are complete native productions, not missing sentence fragments.
std::optional<std::string> Overlay::translate_adventure_belief_source(
        std::string_view raw_source) const {
    const std::string source = normalize_utterance(raw_source);
    const auto complete = [](const std::optional<std::string> &value) {
        return value && !value->empty() && std::none_of(value->begin(), value->end(),
            [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
            });
    };
    std::string result;
    for (size_t begin = 0; begin < source.size();) {
        const size_t stop = source.find_first_of(".!?", begin);
        const size_t end = stop == std::string::npos ? source.size() : stop;
        const std::string sentence = trim(source.substr(begin, end - begin));
        if (sentence.empty()) return std::nullopt;
        auto target = translate_adventure_background_source(sentence);
        if (!target) {
            // Only the first native production can be a bare worship object.
            // The later temple sentence must retain its complete prose rule.
            if (begin != 0) return std::nullopt;
            target = translate_creature_reference(sentence);
            if (!complete(target)) target = exact_literal_translation(sentence);
            if (!complete(target) && generated_title_shape(sentence)) {
                target = translate_procedural_fragment(sentence, false, false, {},
                    ProceduralFragmentContext::personal_name);
                if (!complete(target))
                    target = translate_procedural_fragment(sentence, false, false, {},
                        ProceduralFragmentContext::generated_name);
                if (!complete(target)) {
                    target = translate_procedural_fragment("\"" + sentence + "\"");
                    if (complete(target) && target->starts_with("“") && target->ends_with("”"))
                        *target = target->substr(3, target->size() - 6);
                }
            }
            if (!complete(target)) return std::nullopt;
        }
        result += *target;
        if (stop != std::string::npos && !result.ends_with("。") &&
                !result.ends_with("！") && !result.ends_with("？"))
            result += source[stop] == '!' ? "！" : source[stop] == '?' ? "？" : "。";
        begin = stop == std::string::npos ? source.size() : stop + 1;
        while (begin < source.size() && source[begin] == ' ') ++begin;
    }
    return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
}
