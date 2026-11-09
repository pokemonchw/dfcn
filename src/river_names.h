#pragma once

#include "native_history_data.h"
#include "english_character_names.h"
#include <charconv>
#include <memory>

namespace dfcn {

enum class RiverSize : int8_t { Unknown = -1, Brook, Stream, MinorRiver, River, MajorRiver };
enum class RiverTerrain : uint8_t { Unknown, LowlandWaternet, HillStream, Other };
enum class RiverDisplayField : uint8_t { English, Native };

// All text is owned. Object addresses identify only this loaded world, never
// a resource-table entry or a river with an equal English spelling.
struct RiverNameIdentity {
    std::string world_key;
    size_t index = SIZE_MAX;
    NativeHistoryName name;
    RiverSize size = RiverSize::Unknown;
    RiverTerrain terrain = RiverTerrain::Unknown;
    bool finalized = false;
    std::string generic_style = "neutral";
};
struct NativeRiverNameFact {
    RiverNameIdentity identity;
    RiverDisplayField field = RiverDisplayField::English;
    std::string complete_source;
};

class RiverNames {
public:
    using Policy = EnglishCharacterNames::ComposePolicy;
    using Composition = EnglishCharacterNames::Composition;
    using Senses = EnglishCharacterNames::NativeSenses;
    enum class InputKind { NativeSlots, AdjectiveName, ModifiedFront, SiteSlots };
    enum class Status { Complete, MissingInput, InvalidSlots, MissingAdjectiveSurface,
        MissingContextDouble, MissingCompoundConstruction, CompoundTransliterated };
    struct Compound { size_t left, right; };
    struct Nominal {
        std::optional<Compound> compound;
        size_t head = 5;
    };
    struct Title {
        size_t complement = 6;
        Nominal head;
    };
    struct Structure {
        std::optional<Compound> front;
        std::optional<size_t> single_front;
        std::optional<Nominal> nominal;
        std::optional<Title> title;
        std::optional<size_t> site_complement;
        std::optional<Compound> adjective_name;
        std::vector<size_t> modifiers;
        InputKind kind = InputKind::NativeSlots;
    };
    struct Selection {
        std::vector<size_t> slots;
        Policy policy = Policy::FullSurname;
        Composition composition;
        bool transliterated = false;
    };
    struct Issue {
        Status status;
        std::vector<size_t> slots;
        std::string detail;
    };
    struct Result {
        enum class HeadSource { None, ContextDouble, NativeNounMeaning, Compound, SourceForm };
        struct TitleSurface {
            std::string complement, head;
            std::string attached() const { return complement + "之" + head; }
            std::string standalone(std::string_view generic) const {
                return generic.empty() ? attached() : complement + head + "之" + std::string(generic);
            }
        };
        NativeHistoryName source;
        Structure structure;
        std::array<Senses, 7> senses;
        std::array<EnglishCharacterNames::AdjectiveSurface, 7> adjectives;
        std::vector<Selection> selections;
        std::vector<Issue> issues;
        std::string front, head, modifiers, unresolved_title, site_complement;
        HeadSource head_source = HeadSource::None;
        std::optional<TitleSurface> title;
        RiverSize category = RiverSize::Unknown;
        bool category_unknown = true;
        uint64_t resource_revision = 0;
        std::string display(std::string_view generic) const {
            const auto adjective = modifiers.empty() ? "" : modifiers + "的";
            if (structure.kind == InputKind::SiteSlots) {
                const std::string ownership = structure.site_complement ? site_complement + "之" : "";
                if (!front.empty()) {
                    // F, R or their compound alone owns the site's core.
                    // Neither a nominal title nor its of-complement can
                    // separate that core from the actual site-type suffix.
                    const std::string named_site = adjective + front + std::string(generic);
                    return head.empty() ? ownership + named_site :
                        named_site + "." + ownership + head;
                }
                return head.empty() ? "" : ownership + adjective + head + std::string(generic);
            }
            const bool title_only = !structure.front && !structure.single_front && structure.modifiers.empty();
            if (title) {
                // The two selected title words stay double-width. A title
                // alone names the water; an attached title follows its name.
                if (title_only) return title->standalone(generic);
                return adjective + front + std::string(generic) + "." + title->attached();
            }
            if (!unresolved_title.empty()) {
                if (title_only) return unresolved_title + " " + std::string(generic);
                return adjective + front + std::string(generic) + "." + unresolved_title;
            }
            if (!front.empty()) {
                if (head.empty()) return adjective + front + std::string(generic);
                return adjective + front + std::string(generic) + "." + head;
            }
            return head.empty() ? "" : adjective + head + std::string(generic);
        }
    };
    struct Decision {
        std::string source, field, language, core, policy, transliteration, old, absorbed, notes;
        int16_t type = -1;
        std::array<NativeHistoryWord, 7> words;
    };
    bool load(const std::filesystem::path &directory, const EnglishCharacterNames &lexicon) {
        RiverNames next;
        if (!next.load_tables(directory, lexicon)) { error_ = next.error_; return false; }
        *this = std::move(next);
        return true;
    }
private:
    bool load_tables(const std::filesystem::path &directory, const EnglishCharacterNames &lexicon) {
        generics_.clear(); decisions_.clear(); error_.clear();
        if (!table(directory / "river-name-generics.tsv",
            {"size","terrain","style","suffix","priority"}, [&](const Row &r) {
                Generic g{r("size"), r("terrain"), r("style"), r("suffix"),
                    integer(r("priority"), -1)};
                if (g.priority < 0 || g.size.empty() || g.terrain.empty()) return false;
                if (g.suffix == "-") g.suffix.clear();
                // 泾 is never reachable through a wildcard or unknown terrain.
                if (g.suffix == "泾" && (g.size != "Brook" ||
                    g.terrain != "lowland_waternet" || g.style != "jiangnan")) return false;
                generics_.push_back(std::move(g)); return true;
            })) return false;
        return table(directory / "river-name-decisions.tsv",
            {"source","field","type","language","word0","pos0","word1","pos1","word2","pos2",
             "word3","pos3","word4","pos4","word5","pos5","word6","pos6","core","policy",
             "transliteration","old_translation","absorbed_generic","notes"},
            [&](const Row &r) {
                Decision d;
                d.source = r("source"); d.field = r("field"); d.language = r("language");
                const int type = integer(r("type"), -1);
                if (type < 0 || type > INT16_MAX) return false;
                d.type = static_cast<int16_t>(type);
                for (size_t i = 0; i < 7; ++i) {
                    const auto word = r("word" + std::to_string(i));
                    const int pos = integer(r("pos" + std::to_string(i)), -2);
                    if (pos < -1 || pos > 8 || (word != "-" && pos < 0)) return false;
                    d.words[i].id = word == "-" ? "" : word;
                    d.words[i].part_of_speech = static_cast<int16_t>(pos);
                }
                d.core = optional(r("core")); d.policy = r("policy");
                d.transliteration = optional(r("transliteration"));
                d.old = optional(r("old_translation")); d.absorbed = optional(r("absorbed_generic"));
                d.notes = r("notes");
                if (d.source.empty() || (d.field != "english" && d.field != "native") ||
                    (d.policy != "localize" && d.policy != "transliterate" && d.policy != "retain") ||
                    (d.policy == "localize" && (d.core.empty() || d.field != "english")) ||
                    d.notes.empty() || (!d.absorbed.empty() && d.policy != "localize")) return false;
                for (const auto &water : split(d.absorbed))
                    if ((water != "RIVER" && water != "STREAM" && water != "BROOK") ||
                        std::none_of(d.words.begin(), d.words.end(),
                            [&](const NativeHistoryWord &word) { return word.id == water; })) return false;
                decisions_.push_back(std::move(d)); return true;
            });
    }
public:
    const std::string &error() const { return error_; }

    const Decision *decision(const RiverNameIdentity &id, RiverDisplayField field,
            std::string_view source) const {
        const Decision *best = nullptr;
        for (const auto &d : decisions_) {
            if (d.source != source || d.type != id.name.type ||
                d.field != (field == RiverDisplayField::English ? "english" : "native") ||
                (d.language != "*" && d.language != std::to_string(id.name.language))) continue;
            bool same = true;
            for (size_t i = 0; i < 7; ++i)
                if (d.words[i].id != id.name.words[i].id ||
                    (!d.words[i].id.empty() &&
                     d.words[i].part_of_speech != id.name.words[i].part_of_speech)) same = false;
            if (same && (!best || best->language == "*")) best = &d;
        }
        return best;
    }
    std::string generic(const RiverNameIdentity &id) const {
        static constexpr const char *sizes[] = {"Brook","Stream","Minor River","River","Major River"};
        static constexpr const char *terrains[] = {"unknown","lowland_waternet","hill_stream","other"};
        const std::string_view size = id.size == RiverSize::Unknown ? "unknown" : sizes[int(id.size)];
        const Generic *best = nullptr;
        for (const auto &g : generics_)
            if (g.size == size && (g.terrain == terrains[int(id.terrain)] || g.terrain == "*") &&
                (g.style == id.generic_style || g.style == "*") &&
                (!best || g.priority > best->priority)) best = &g;
        return best ? best->suffix : "河";
    }
    static RiverSize category(std::string_view label) {
        if (label == "Major River:") return RiverSize::MajorRiver;
        if (label == "River:") return RiverSize::River;
        if (label == "Minor River:") return RiverSize::MinorRiver;
        if (label == "Stream:") return RiverSize::Stream;
        if (label == "Brook:") return RiverSize::Brook;
        return RiverSize::Unknown;
    }

    #include "river_name_composition.inc"

private:
    struct Row {
        const std::vector<std::string> &cells;
        const std::unordered_map<std::string, size_t> &columns;
        std::string operator()(const std::string &key) const {
            const auto found = columns.find(key);
            return found == columns.end() ? "" : cells[found->second];
        }
    };
    struct Generic { std::string size, terrain, style, suffix; int priority; };
    std::vector<Generic> generics_;
    std::vector<Decision> decisions_;
    std::string error_;
    static std::string optional(std::string s) { return s == "-" ? "" : s; }
    static int integer(std::string_view s, int fallback) {
        int n = 0; const auto r = std::from_chars(s.data(), s.data() + s.size(), n);
        return r.ec == std::errc{} && r.ptr == s.data() + s.size() ? n : fallback;
    }
    static std::vector<std::string> split(std::string_view s, char delimiter = '|') {
        std::vector<std::string> result;
        if (s.empty() || s == "-") return result;
        while (true) {
            const size_t end = s.find(delimiter);
            result.emplace_back(s.substr(0, end));
            if (end == std::string_view::npos) break;
            s.remove_prefix(end + 1);
        }
        return result;
    }
    bool table(const std::filesystem::path &path, std::initializer_list<const char *> required,
            const std::function<bool(const Row &)> &consume) {
        std::ifstream input(path, std::ios::binary);
        if (!input) { error_ = "Cannot open " + path.filename().string(); return false; }
        std::unordered_map<std::string, size_t> columns;
        std::string line;
        size_t number = 0;
        while (std::getline(input, line)) {
            ++number;
            if (!line.empty() && line.back() == '\r') line.pop_back();
            if (line.empty() || line.front() == '#') continue;
            auto cells = split(line, '\t');
            if (columns.empty()) {
                for (size_t i = 0; i < cells.size(); ++i)
                    if (!columns.emplace(cells[i], i).second) {
                        error_ = "Duplicate column in " + path.filename().string(); return false;
                    }
                for (const auto *column : required) if (!columns.contains(column)) {
                    error_ = "Missing column " + std::string(column) + " in " + path.filename().string();
                    return false;
                }
            } else if (cells.size() != columns.size() || !consume({cells, columns})) {
                error_ = "Invalid " + path.filename().string() + " row " + std::to_string(number);
                return false;
            }
        }
        if (columns.empty() || input.bad()) { error_ = "Unreadable " + path.filename().string(); return false; }
        return true;
    }
};
} // namespace dfcn
