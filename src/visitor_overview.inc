// The visitor Overview constructor at RVA 0x1a64d3..0x1a662b emits one
// purpose enum per entry, optionally followed by the complete location name.
// Its commas precede at least two remaining entries; its final join is " and ".
// Default/NONE entries omit the purpose but can still append a location or
// participate in those joins. The caller has normalized repeated whitespace.
// Resolve that complete grammar inside the reviewed purpose field, rather
// than translating words which might also occur inside a generated name.
std::optional<std::string> Overlay::translate_visitor_overview_purposes(
        std::string_view source) const {
    source = trim_view(source);
    if (source.empty()) return std::nullopt;

    const auto apply = [&](std::string_view key,
                           const std::vector<std::string> &fields)
            -> std::optional<std::string> {
        const auto found = history_semantic_templates_.find(std::string(key));
        if (found == history_semantic_templates_.end()) return std::nullopt;
        const Rule &rule = rules_[static_cast<size_t>(found->second)];
        if (rule.template_kinds.size() != fields.size()) return std::nullopt;
        if (fields.empty()) return rule.target.empty()
            ? std::nullopt : std::optional<std::string>(rule.target);
        if (rule.target_template_literals.size() != rule.target_capture_order.size() + 1)
            return std::nullopt;
        std::string target;
        for (size_t i = 0; i < rule.target_capture_order.size(); ++i) {
            const size_t field = rule.target_capture_order[i];
            if (field >= fields.size()) return std::nullopt;
            target += rule.target_template_literals[i];
            target += fields[field];
        }
        target += rule.target_template_literals.back();
        return target.empty() ? std::nullopt : std::optional<std::string>(std::move(target));
    };
    constexpr std::array<std::string_view, 11> purposes{{
        "to pray", "to study", "to relax", "to perform", "to slay beasts",
        "seeking work as a performer", "seeking work as a mercenary",
        "seeking work as a scholar", "for diplomacy", "seeking sanctuary",
        "asking questions"
    }};
    std::array<std::optional<std::string>, purposes.size()> purpose_targets;
    for (size_t i = 0; i < purposes.size(); ++i)
        purpose_targets[i] = apply("Visitor overview purpose: " + std::string(purposes[i]), {});
    const auto comma_target = apply("Visitor overview purpose separator: comma", {});
    const auto and_target = apply("Visitor overview purpose separator: and", {});

    enum class Join { comma, and_ };
    struct Boundary { size_t end, next; Join join; };
    std::vector<Boundary> boundaries;
    std::vector<size_t> starts{0};
    for (size_t at = 0; at < source.size(); ++at) {
        size_t width = 0;
        Join join = Join::comma;
        if (source[at] == ',' && (at + 1 == source.size() || source[at + 1] == ' '))
            width = 1;
        else if (source.substr(at).starts_with("and") &&
                (at == 0 || source[at - 1] == ' ') &&
                (at + 3 == source.size() || source[at + 3] == ' ')) {
            width = 3;
            join = Join::and_;
        }
        // Trimmed boundary forms also admit a default empty item before or
        // after a join. No boundary is used until both sides are fully parsed
        // as native purpose/location/default fields below.
        if (!width) continue;
        boundaries.push_back({at, at + width, join});
        starts.push_back(at + width);
    }

    std::map<std::pair<int32_t, std::string_view>, std::optional<std::string>> place_targets;
    const auto place_target = [&](std::string_view place, int32_t reason) -> std::optional<std::string> {
        auto [found, added] = place_targets.try_emplace(std::pair{reason, place});
        if (added) found->second = translate_visitor_overview_location(place, reason);
        return found->second;
    };
    const auto item = [&](size_t begin, size_t end) -> std::optional<std::string> {
        const auto value = trim_view(source.substr(begin, end - begin));
        // Empty default activities and names omitted by the native language
        // formatter have no purpose to translate. Keep them as proven empty
        // entries so the native list's arity can still be established.
        if (value.empty() || value == "at") return std::string{};
        if (value.starts_with("at ")) {
            const auto place = place_target(value.substr(3), -1);
            if (!place) return std::nullopt;
            return apply("Visitor overview purpose location: {e}", {*place});
        }
        for (size_t purpose = 0; purpose < purposes.size(); ++purpose) {
            if (!value.starts_with(purposes[purpose])) continue;
            if (!purpose_targets[purpose]) return std::nullopt;
            const auto suffix = value.substr(purposes[purpose].size());
            if (suffix.empty() || suffix == " at") return purpose_targets[purpose];
            if (!suffix.starts_with(" at ")) return std::nullopt;
            const auto place = place_target(suffix.substr(4), static_cast<int32_t>(purpose));
            if (!place) return std::nullopt;
            return apply("Visitor overview purpose at {s}: {e}",
                {*purpose_targets[purpose], *place});
        }
        return std::nullopt;
    };

    struct Step {
        std::string target;
        size_t next = 0;
        bool next_multiple = false;
        bool ready = false;
    };
    struct Suffix { Step single, multiple; };
    std::vector<Suffix> paths(source.size() + 1);
    // Two states distinguish exactly one item from two or more. They do not
    // impose a list-length or recursion-depth limit. Descending suffixes
    // prove all remaining purpose fields before any separator is accepted.
    for (auto start = starts.rbegin(); start != starts.rend(); ++start) {
        const size_t begin = *start;
        Suffix &path = paths[begin];
        if (auto target = item(begin, source.size())) {
            path.single.target = std::move(*target);
            path.single.ready = true;
        }
        for (const Boundary &boundary : boundaries) {
            if (boundary.end < begin) continue;
            const bool next_multiple = boundary.join == Join::comma;
            const Step &tail = next_multiple ? paths[boundary.next].multiple
                                            : paths[boundary.next].single;
            if (!tail.ready || (next_multiple ? !comma_target : !and_target)) continue;
            auto target = item(begin, boundary.end);
            if (!target) continue;
            path.multiple.target = std::move(*target);
            path.multiple.next = boundary.next;
            path.multiple.next_multiple = next_multiple;
            path.multiple.ready = true;
            break;
        }
    }
    // Prefer a proven complete list over treating its suffix as part of a
    // place. A name's own commas/and remain intact when no such list exists.
    bool multiple = paths.front().multiple.ready;
    if (!multiple && !paths.front().single.ready) return std::nullopt;
    std::vector<std::string_view> translated_items;
    for (size_t at = 0;;) {
        const Step &step = multiple ? paths[at].multiple : paths[at].single;
        if (!step.target.empty()) translated_items.push_back(step.target);
        if (!multiple) break;
        at = step.next;
        multiple = step.next_multiple;
    }
    if (translated_items.empty()) return apply("Visitor overview purpose empty", {});
    // Default entries contribute no Chinese separators. Join only semantic
    // fields, retaining the constructor's comma/final-and shape for them.
    std::string target;
    for (size_t i = 0; i < translated_items.size(); ++i) {
        target += translated_items[i];
        if (i + 1 < translated_items.size()) {
            const auto &join = i + 2 == translated_items.size() ? and_target : comma_target;
            if (!join) return std::nullopt;
            target += *join;
        }
    }
    return target;
}
