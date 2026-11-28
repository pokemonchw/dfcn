// Typed users supply native boundaries and identities. English is an index,
// never permission to select a homograph or re-segment a compound.
NativeSenses resolve_native_senses(std::string_view word, int16_t pos,
    std::string_view english, std::string_view gloss) const {
    NativeSenses out;
    if (!loaded_ || word.empty()) return out;
    const auto binding = native_sense_bindings_.find(std::string(word) + '\t' + native_part(pos));
    int rank = -1;
    for (const auto &p : surname_variants(english, true)) {
        if (!has(p, native_kind(pos)) || p.surname_sense.empty()) continue;
        const auto *entry = surname_entry(p);
        bool bound = false;
        if (binding != native_sense_bindings_.end()) {
            // An explicit binding is authoritative, including when another
            // homograph happens to share the ordinary dictionary gloss.
            bound = std::find(binding->second.begin(), binding->second.end(),
                p.surname_sense) != binding->second.end();
        } else {
            bound = !gloss.empty() && (p.source_sense == gloss || entry->full_meaning == gloss ||
                (pos >= 4 && pos <= 8 &&
                 (p.surname_source_action == gloss || entry->action == gloss)));
        }
        if (!bound) continue;
        const int specificity = pos == 7 && has(p, State) && p.state == "result" ? 2 :
            pos == 8 && p.state == "process" ? 2 :
            pos >= 4 && pos <= 6 && has(p, Action) ? 1 : 0;
        if (specificity < rank) continue;
        if (specificity > rank) { out.clear(); rank = specificity; }
        out.push_back({p.surname_sense, std::string(word), std::string(english), pos});
    }
    return out;
}

Composition surname_compose_typed(const NativeSenses &left, const NativeSenses &right,
    ComposePolicy policy = ComposePolicy::FullSurname, std::string_view required_head = {}) const {
    Part best;
    for (const auto &a : native_parts(left)) for (const auto &b : native_parts(right)) {
        auto candidate = surname_context_combine(a, b, false, policy, required_head);
        // Keep the existing cross-sense completeness/score/order selection.
        if (candidate.composition.classified() != best.composition.classified()) {
            if (candidate.composition.classified()) best = std::move(candidate);
        } else if (better(candidate, best) ||
            (best.composition.origin == CandidateOrigin::UnresolvedSense &&
             candidate.composition.origin == CandidateOrigin::NoLicensedConstruction)) {
            // Failed composition is not a rendered name, but retain the
            // distinction between missing senses and unlicensed forms.
            best = std::move(candidate);
        }
    }
    return best.composition;
}

AdjectiveSurface translate_adjective(const NativeSenses &senses,
    std::string_view ordinary) const {
    AdjectiveSurface result;
    for (const auto &sense : senses) {
        if (sense.pos != 2) continue;
        std::string surface(ordinary);
        if (const auto found = adjective_surfaces_.find(sense.key); found != adjective_surfaces_.end())
            surface = found->second;
        if (surface.empty()) continue;
        // Multiple bound analyses must agree on the lexical display decision.
        if (!result.text.empty() && result.text != surface) return {};
        if (result.sense.empty() || sense.key < result.sense) result.sense = sense.key;
        result.text = std::move(surface);
    }
    if (!result.text.empty()) result.status = AdjectiveSurface::Status::Resolved;
    return result;
}

private:
std::unordered_map<std::string, std::vector<std::string>> native_sense_bindings_;
std::unordered_map<std::string, std::string> adjective_surfaces_;

static std::string native_part(int16_t pos) {
    return pos == 0 || pos == 1 ? "NOUN" : pos == 2 ? "ADJ" :
        pos == 3 ? "PREFIX" : pos >= 4 && pos <= 8 ? "VERB" : "";
}
static uint32_t native_kind(int16_t pos) {
    return pos == 0 || pos == 1 ? Object | Agent : pos == 2 ? Quality | State :
        pos == 3 ? Prefix : pos >= 4 && pos <= 8 ? Action | State : 0;
}
std::vector<Part> native_parts(const NativeSenses &senses) const {
    std::vector<Part> out;
    for (const auto &sense : senses)
        for (auto p : surname_variants(sense.english, true))
            if (p.surname_sense == sense.key && has(p, native_kind(sense.pos)))
                out.push_back(std::move(p));
    return out;
}
bool read_native_sense_bindings(const std::filesystem::path &directory) {
    native_sense_bindings_.clear();
    adjective_surfaces_.clear();
    return read_surname_table(directory / "character-native-senses.tsv",
        {"word", "pos", "english", "kind", "category", "state", "sense",
         "adjective_surface", "adjective_suffix", "notes"}, [&](const SurnameDataRow &row) {
            const auto kind = kinds(labels(row("kind")));
            const auto identity = sense_key(key(row("english")), kind,
                labels(row("category")), key(row("state")), row("sense"));
            const auto pos = row("pos");
            const int native_pos = pos == "NOUN" ? 0 : pos == "ADJ" ? 2 :
                pos == "PREFIX" ? 3 : pos == "VERB" ? 4 : -1;
            if (row("word").empty() || !surnames_.contains(identity) ||
                !(kind & native_kind(native_pos))) return false;
            const auto lexical = words_.find(key(row("english")));
            if (lexical == words_.end() || std::none_of(lexical->second.begin(), lexical->second.end(),
                [&](const Entry &e) { return sense_key(e.english, e.kinds, e.categories,
                    e.state, e.preferred) == identity; })) return false;
            auto &bindings = native_sense_bindings_[std::string(row("word")) + '\t' + std::string(pos)];
            if (std::find(bindings.begin(), bindings.end(), identity) == bindings.end())
                bindings.push_back(identity);
            std::string surface(row("adjective_surface"));
            const auto suffix = row("adjective_suffix");
            if (surface.empty()) return suffix.empty();
            if (pos != "ADJ" || (!suffix.empty() && suffix != "的")) return false;
            // Only an explicitly authored grammar marker may be removed.
            if (!suffix.empty()) {
                if (!surface.ends_with(suffix)) return false;
                surface.resize(surface.size() - suffix.size());
            }
            if (surface.empty()) return false;
            const auto [found, added] = adjective_surfaces_.emplace(identity, surface);
            return added || found->second == surface;
        });
}
public:
