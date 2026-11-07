#pragma once

#include <array>
#include <cstdint>
#include <cstddef>
#include <set>
#include <tuple>
#include <memory>
#include <map>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>
#include "native_history_abi.h"

namespace dfcn {

enum class NativeModScreenKind : uint8_t { None, Title, NewRegion, NewArena };

struct NativeModHeader {
    std::string id, name, description, author;
    std::string displayed_version, earliest_compatible_displayed_version;
    int32_t numeric_version = -1, earliest_compatible_numeric_version = -1;
    bool vanilla = false;
};

// Current mod-screen identity survives an empty hover. Native headers and
// wrapped prose are copied into owned data before the overlay uses them.
struct NativeModDetails {
    NativeModScreenKind kind = NativeModScreenKind::None;
    std::optional<NativeModHeader> header;
    std::vector<std::string> description_rows;
    std::optional<std::array<int32_t, 4>> widget_rect;
};

// One native type catalogue serves both typed snapshots and the type suffix
// in name/gloss identities. Labels are vocabulary keys, not translations.
struct NativeHistoryStructureProfile {
    const char *name;
    int32_t type;
    size_t name_offset;
    const char *label;
};
static constexpr NativeHistoryStructureProfile kNativeHistoryStructureProfiles[] = {
    {"abstract_building_mead_hallst", 0, 0xb8, "a mead hall"},
    {"abstract_building_keepst", 1, 0xb8, "a keep"},
    {"abstract_building_templest", 2, 0xc0, "a temple"},
    {"abstract_building_dark_towerst", 3, 0xb8, "a dark tower"},
    {"abstract_building_marketst", 4, 0xb8, "a market"},
    {"abstract_building_tombst", 5, 0xb8, "a tomb"},
    {"abstract_building_dungeonst", 6, 0xb8, "a dungeon"},
    {"abstract_building_underworld_spirest", 7, 0xb8, "an underworld spire"},
    {"abstract_building_inn_tavernst", 8, 0xb8, "a tavern"},
    {"abstract_building_libraryst", 9, 0xb8, "a library"},
    {"abstract_building_counting_housest", 10, 0xb8, "a counting house"},
    {"abstract_building_guildhallst", 11, 0xb8, "a guildhall"},
    {"abstract_building_towerst", 12, 0xb8, "a tower"},
    {"abstract_building_hospitalst", 13, 0xb8, "a hospital"},
};
static constexpr std::string_view kNativeHistoryDungeonSubtypeLabels[] = {
    "a dungeon", "the sewers", "the catacombs",
};

// Owned semantic data. No game strings, object pointers or STL containers
// cross the native formatter boundary or survive here between render frames.
struct NativeHistoryWord {
    std::string id;
    int16_t part_of_speech = -1;
    bool has_form = true;
    std::string english_form;
};

struct NativeHistoryName {
    std::string first_name;
    std::string nickname;
    std::array<NativeHistoryWord, 7> words;
    int32_t language = -1;
    int32_t nickname_mode = 1;
    int16_t type = -1;
    bool has_name = false;
    // Object provenance is separate from language_name_type: migrating
    // groups also use EntitySite names, while utterance names have no type.
    int16_t entity_type = -1;
    int32_t entity_id = -1;
    bool entity_name_current = false;
    std::string parent_word_id;
    int16_t parent_word_pos = -1;
    // Only a resolved world_site may populate this provenance. EntitySite
    // language_name types are also used by non-site objects and prove no
    // location kind. The formatter label retains the native classification.
    int32_t site_id = -1;
    int32_t site_type = -1;
    int32_t site_subtype = -1;
    std::string site_label;
    // Complete original-language formatter output, never English WORD roots.
    std::string native_name;
};

enum class NativeHistoryObjectKind : uint8_t {
    Figure, Entity, Site, Artifact, Region, Underground, Building, Peak, Construction,
    Poem, Music, Dance, WrittenContent, ArtImage, MaterialOwner, Identity, Occasion, Squad, Collection, World
};
static constexpr const char *native_history_unknown_subject(NativeHistoryObjectKind kind) {
    switch (kind) {
    case NativeHistoryObjectKind::Figure: return "an unknown creature";
    case NativeHistoryObjectKind::Entity: return "an unknown civilization";
    case NativeHistoryObjectKind::Site: return "an unknown site";
    case NativeHistoryObjectKind::Artifact: return "an unknown artifact";
    case NativeHistoryObjectKind::Region: return "an unknown region";
    case NativeHistoryObjectKind::Underground: return "an unknown underground region";
    case NativeHistoryObjectKind::Building: return "an unknown building";
    case NativeHistoryObjectKind::Peak: return "an unknown peak";
    case NativeHistoryObjectKind::Construction: return "an unknown construction";
    default: return "";
    }
    return "";
}
struct NativeHistorySubject {
    NativeHistoryObjectKind kind = NativeHistoryObjectKind::Figure;
    int32_t id = -1;
    int32_t subid = -1;
    int32_t native_type = -1;
    NativeHistoryName name;
    // A species/role label is a typed field, never an event sentence.
    std::string species;
    std::string label_key;
    std::string raw_title;
};

enum class NativeHistoryEventKind : uint8_t {
    Unsupported, ArtifactCreated, CreateEntityPosition, HfGainsSecretGoal,
    // A separate native history storage: real global IDs in relationship
    // chunks, with no history_eventst vtable or subtype number.
    PackedRelationship
};

// df.d_basics.xml art_image_element_type. These are shared native semantic
// IDs, not the separate dice-face kinds (whose symbol/shape value is 2).
enum class NativeHistoryArtElementKind : int32_t {
    None = -1, Creature = 0, Plant = 1, Tree = 2, Shape = 3, Item = 4
};

struct NativeHistoryEventData {
    NativeHistoryEventKind kind = NativeHistoryEventKind::Unsupported;
    int32_t native_type = -1;
    int32_t id = -1, year = -1, seconds = -1;
    int32_t goal = -1;
    int32_t artifact_id = -1, creator_unit_id = -1, actor_id = -1;
    int32_t entity_id = -1, site_id = -1, site_entity_id = -1, position_id = -1;
    uint32_t flags = 0;
    int32_t circumstance = -1, circumstance_data = -1;
    int32_t reason = -1, reason_data = -1;
    std::string position;
    // Named scalar/list fields copied by the native subtype adapter. These
    // hold IDs and enum values, never fragments parsed from a sentence.
    std::map<std::string, std::vector<int32_t>, std::less<>> fields;
    std::map<std::string, int32_t, std::less<>> context;
    // RAW labels and other typed strings, copied independently of getSentence.
    std::map<std::string, std::string, std::less<>> texts;
    // Capture-time hints. Once populated, subjects own every referenced name;
    // these hints are not needed by the renderer or serialized on reload.
    std::vector<std::pair<NativeHistoryObjectKind, int32_t>> references;
    std::vector<NativeHistorySubject> subjects;
    // A nested native d8 call owns a complete child snapshot. No native
    // address or formatted English title is used as the child's meaning.
    std::map<int32_t, std::shared_ptr<NativeHistoryEventData>> children;
};

// One budget is shared by every descendant, both during capture and reload.
inline constexpr size_t kNativeHistoryTreeDepth = 16;
inline constexpr size_t kNativeHistoryTreeNodes = 256;
inline constexpr size_t kNativeHistoryTreeStrings = 16 * 1024 * 1024;
inline constexpr size_t kNativeHistoryTreeFields = 32768;
inline constexpr size_t kNativeHistoryTreeValues = 262144;
inline constexpr size_t kNativeHistoryTreeSubjects = 16384;
inline constexpr size_t kNativeHistoryNodeFields = 2048;
inline constexpr size_t kNativeHistoryNodeValues = 16384;
inline constexpr size_t kNativeHistoryNodeSubjects = 4096;
inline constexpr size_t kNativeHistoryStringLimit = 262144;
// Native producers append to one page buffer. Its length is independent of
// the size of the single event or typed item fragment being copied from it.
inline constexpr size_t kNativeHistorySourceLimit = 16 * 1024 * 1024;

// A complete native page is not an ordinary retained-cache entry. Its parser
// can emit hundreds of thousands of words while the source is still within
// the byte limit above. Bound live boxes and serialized captures by that same
// source envelope (each word/control consumes source bytes), not the smaller
// cache target. Allocation remains proportional to the actual native page.
// Capture, ownership, recovery and reload all use this one hard bound.
inline constexpr size_t kNativeHistoryCaptureTokens = kNativeHistorySourceLimit;
// Retain small pages up to this target; an updated owner keeps its full page
// across batches and evicts older pages instead of truncating its own records.
inline constexpr size_t kNativeHistoryRetainedTokens = 262144;
// Every owned document contains at least one token.
inline constexpr size_t kNativeHistoryCaptureDocuments = kNativeHistoryCaptureTokens;
inline constexpr size_t kNativeHistoryDocumentTokens = 16384;

struct NativeHistoryTreeBudget {
    size_t nodes = kNativeHistoryTreeNodes, strings = kNativeHistoryTreeStrings;
    size_t fields = kNativeHistoryTreeFields, values = kNativeHistoryTreeValues;
    size_t subjects = kNativeHistoryTreeSubjects;
    static bool take(size_t &remaining, size_t amount) {
        if (amount > remaining) return false;
        remaining -= amount;
        return true;
    }
};

inline bool native_history_event_identity_valid(const NativeHistoryEventData &event) {
    return event.id >= 0 &&
        (event.kind == NativeHistoryEventKind::PackedRelationship
            ? event.native_type == -1 : event.native_type >= 0 && event.native_type <= 132) &&
        static_cast<uint8_t>(event.kind) <= static_cast<uint8_t>(NativeHistoryEventKind::PackedRelationship);
}

inline bool native_history_tree_within_limits(const NativeHistoryEventData &root, bool page_root = false) {
    NativeHistoryTreeBudget budget;
    std::vector<const NativeHistoryEventData *> path;
    const auto visit = [&](const auto &self, const NativeHistoryEventData &event, size_t depth) -> bool {
        if (depth >= kNativeHistoryTreeDepth || !NativeHistoryTreeBudget::take(budget.nodes, 1) ||
            (page_root && depth == 0
                ? event.id != -1 || event.native_type != -1 || event.kind != NativeHistoryEventKind::Unsupported
                : !native_history_event_identity_valid(event))) return false;
        for (const auto *ancestor : path)
            if (ancestor == &event || ancestor->id == event.id) return false;
        path.push_back(&event);
        const auto string = [&](const std::string &value, size_t maximum = kNativeHistoryStringLimit) {
            return value.size() <= maximum && NativeHistoryTreeBudget::take(budget.strings, value.size());
        };
        if (!string(event.position) || event.fields.size() > kNativeHistoryNodeFields ||
            event.texts.size() > kNativeHistoryNodeFields || event.context.size() > 64 ||
            event.subjects.size() > kNativeHistoryNodeSubjects ||
            !NativeHistoryTreeBudget::take(budget.fields, event.fields.size() + event.texts.size() + event.context.size()) ||
            !NativeHistoryTreeBudget::take(budget.subjects, event.subjects.size())) return false;
        size_t values_left = kNativeHistoryNodeValues;
        for (const auto &[key, values] : event.fields)
            if (key.empty() || !string(key, 128) ||
                !NativeHistoryTreeBudget::take(values_left, values.size()) ||
                !NativeHistoryTreeBudget::take(budget.values, values.size())) return false;
        for (const auto &[key, value] : event.texts)
            if (key.empty() || !string(key, 128) || !string(value)) return false;
        for (const auto &[key, value] : event.context) {
            (void)value;
            if (key.empty() || !string(key, 128)) return false;
        }
        std::set<std::tuple<uint8_t, int32_t, int32_t>> identities;
        for (const auto &subject : event.subjects) {
            if (subject.id < -1 || static_cast<uint8_t>(subject.kind) > static_cast<uint8_t>(NativeHistoryObjectKind::World) ||
                !identities.emplace(static_cast<uint8_t>(subject.kind), subject.id, subject.subid).second ||
                subject.name.nickname_mode < 0 || subject.name.nickname_mode > 2) return false;
            if (!string(subject.species, 2 * kNativeHistoryStringLimit + 32) ||
                !string(subject.label_key, 128) || !string(subject.raw_title) ||
                !string(subject.name.first_name) || !string(subject.name.nickname) ||
                !string(subject.name.parent_word_id) ||
                !string(subject.name.site_label, 128) || !string(subject.name.native_name)) return false;
            for (const auto &word : subject.name.words)
                if (!string(word.id) || !string(word.english_form) ||
                    (!word.id.empty() && (word.part_of_speech < 0 || word.part_of_speech > 8))) return false;
        }
        if (event.children.size() > budget.nodes) return false;
        for (const auto &[id, child] : event.children)
            if (!child || child->id != id || !self(self, *child, depth + 1)) return false;
        path.pop_back();
        return true;
    };
    return visit(visit, root, 0);
}

struct NativeHistoryToken {
    uintptr_t identity = 0;
    std::string source;
    int32_t x = 0, y = 0;
    int32_t color = 0;
    int32_t link_type = -1, link_id = -1, link_subid = -1;
};

// The activity popup uses a markup_text_boxst, with complete retained word
// objects and native blank-line controls. It is independent of history events.
struct NativeActivityDetailParagraph {
    std::string source;
    std::vector<NativeHistoryToken> tokens;
};
struct NativeActivityDetailDocument {
    int width = 0;
    std::vector<NativeActivityDetailParagraph> paragraphs;
};

#include "native_history_page_data.h"

struct WorldgenHistoryEventMemory;

struct NativeHistoryDocument {
    uintptr_t owner = 0;
    uint64_t sequence = 0;
    NativeHistoryEventData event;
    std::optional<NativeHistoryPageData> page;
    std::string native_source;
    std::vector<NativeHistoryToken> tokens;
    // Rendering data belongs to this immutable captured event. Layout-only
    // clones share it; a new producer record receives its own memory entry.
    // The definition lives in the overlay, outside the native capture ABI.
    mutable std::shared_ptr<WorldgenHistoryEventMemory> worldgen_memory;
};

struct NativeHistoryDraw {
    std::shared_ptr<const NativeHistoryDocument> document;
    size_t token_index = 0;
    int x = 0, y = 0;
    uint64_t epoch = 0;
    // Actual addst clipping at draw time; right is exclusive. Source/token
    // identity remains complete even when only part of a word was painted.
    int clip_left = 0, clip_right = 0;
};

// A native producer's event-text region remains owned even if some semantic
// snapshots are unavailable. It carries no invented event identity or meaning.
struct NativeHistoryRegion {
    uintptr_t owner = 0;
    std::vector<NativeHistoryToken> tokens;
};

struct NativeHistoryUnboundDraw {
    uintptr_t owner = 0, identity = 0;
    std::string source;
    int x = 0, y = 0;
    uint64_t epoch = 0;
    int clip_left = 0, clip_right = 0;
};

} // namespace dfcn
