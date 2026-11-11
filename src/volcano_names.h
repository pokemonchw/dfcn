#pragma once

#include "native_history_data.h"
#include "english_character_names.h"
#include <filesystem>
#include <functional>
#include <unordered_map>

namespace dfcn {

// Only a formatter call owned by an actual volcanic world_mountain_peak
// supplies this fact. MountainPeak name type alone is not volcano provenance.
struct NativeVolcanoNameFact {
    NativeHistoryName name;
    std::string complete_source;
};

class VolcanoNames {
public:
    using EnglishForms = std::unordered_map<std::string, std::array<std::string, 9>>;
    using WordRenderer = std::function<std::string(const NativeHistoryWord &)>;

    enum class Form {
        NounOfComplement, CompoundOfComplement,
        AdjectiveNoun, AdjectiveCompound, TwoAdjectivesNoun, TwoAdjectivesCompound,
        AdjectiveNounOfComplement, AdjectiveCompoundOfComplement,
        TwoAdjectivesNounOfComplement, TwoAdjectivesCompoundOfComplement,
    };
    struct Structure {
        Form form;
        size_t adjective_count;
        bool hyphenated;
        bool has_complement;
    };

    bool load(const std::filesystem::path &directory);
    const std::string &error() const { return error_; }
    void set_forms(const EnglishForms &forms);

    // Both entry points require a volcano-owned field at the call site.
    // Surface parsing recovers grammar only, never object provenance.
    std::optional<NativeHistoryName> resolve_surface(std::string_view source) const;
    std::optional<std::string> compose(const NativeHistoryName &name,
        const EnglishCharacterNames &lexicon, const WordRenderer &meaning) const;

private:
    // One grammar owns both native slots and English-only parsing. N is
    // mandatory; A2 requires A1, and every form has A1 or an of-complement.
    inline static constexpr std::array<Structure, 10> constructions_{{
        {Form::NounOfComplement, 0, false, true},                 // The N of Q
        {Form::CompoundOfComplement, 0, true, true},              // The H-N of Q
        {Form::AdjectiveNoun, 1, false, false},                   // The A1 N
        {Form::AdjectiveCompound, 1, true, false},                 // The A1 H-N
        {Form::TwoAdjectivesNoun, 2, false, false},                // The A1 A2 N
        {Form::TwoAdjectivesCompound, 2, true, false},              // The A1 A2 H-N
        {Form::AdjectiveNounOfComplement, 1, false, true},         // The A1 N of Q
        {Form::AdjectiveCompoundOfComplement, 1, true, true},      // The A1 H-N of Q
        {Form::TwoAdjectivesNounOfComplement, 2, false, true},     // The A1 A2 N of Q
        {Form::TwoAdjectivesCompoundOfComplement, 2, true, true},  // The A1 A2 H-N of Q
    }};
    static std::optional<Structure> structure(const NativeHistoryName &name);
    std::unordered_map<std::string, std::string> suffixes_;
    std::unordered_map<std::string, std::vector<NativeHistoryWord>> forms_;
    mutable std::unordered_map<std::string, std::optional<NativeHistoryName>> surface_cache_;
    std::string error_;
    static std::string folded(std::string_view source);
};

} // namespace dfcn
