// SPDX-License-Identifier: MIT
// Algorithm & rule logic referenced from:
// https://github.com/DFI18n/dfi18n/tree/develop/crates/rule_based_translator
// Original License: MIT
// This implementation is independently rewritten in C++ with performance
// optimizations and C++ idiom improvements.
// Copyright (c) 2026 0x53an

#pragma once

#include "translation_result.h"
#include "translation_extensions.h"

#include <cstdint>
#include <filesystem>
#include <functional>
#include <list>
#include <memory>
#include <optional>
#include <regex>
#include <set>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace DFHack {
namespace DFZH {
namespace Hooks {

    class RulesetsManager {
    public:
        static RulesetsManager& getInstance() {
            if (instance_override_) return *instance_override_;
            static RulesetsManager instance;
            return instance;
        }

        // The owner keeps this parser alive until its worker has stopped.
        // Routing also covers explicit getInstance() calls in shared helpers.
        class ScopedInstanceOverride {
            RulesetsManager *previous_;
        public:
            explicit ScopedInstanceOverride(RulesetsManager &parser) noexcept
                : previous_(instance_override_) { instance_override_ = &parser; }
            ~ScopedInstanceOverride() { instance_override_ = previous_; }
            ScopedInstanceOverride(const ScopedInstanceOverride &) = delete;
            ScopedInstanceOverride &operator=(const ScopedInstanceOverride &) = delete;
        };

        // Copy every loaded namespace and naming vocabulary, rebuilding all
        // views into the new owned token graph. Runtime memo/active state and
        // callbacks capturing another Overlay are intentionally left empty;
        // set_*_resolver/provider can bind the private owner afterwards.
        // Invoke while the source parser's translation domain is active.
        std::shared_ptr<RulesetsManager> clone_private() const;

        bool init();
        void shutdown();
        std::string last_load_error() const;

        void print_cache_stats() const;

        bool load_rule_sets();
        void load_from_dir(const std::filesystem::path& dir);
        // The existing update timer observes base TOML files and discovered
        // extension manifests/directories/TOML. Failed candidates wait for a
        // resource change; installing/removing a package needs no UI action.
        bool resources_changed() const;
        std::uint64_t resource_revision() const;
        // Keep recognized native-language names in their exact source spelling
        // instead of applying the shared four-race transliteration grammar.
        void set_native_language_original(bool original);

        std::optional<std::string> translate(const std::string& text) const;
        // Local command callbacks can own DFHack's Console lock. Give their
        // explicitly typed human captions a detached grammar and cache; they
        // must never wait for Overlay or enter its game-backed callbacks.
        using CaptionSnapshot = std::function<std::optional<std::string>(
            std::string_view kind, std::string_view text)>;
        CaptionSnapshot make_caption_snapshot(
            std::unordered_map<std::string, std::string> material_qualifiers = {}) const;
        // Native semantic fields bind an exact existing TOML production.
        // No input sentence matching, word segmentation or type inference.
        // With no fields, source_pattern is literal text, not token syntax.
        // Optional origins index bytes in the concatenated field values;
        // rule literals use string::npos. Reordered fields retain metadata.
        std::optional<std::string> compose_bound_rule(
            const std::string& context, const std::string& source_pattern,
            const std::vector<std::pair<std::string, std::string>>& fields = {},
            std::vector<size_t>* origins = nullptr) const;
        // Display-only composition of already bound, complete native fields.
        // Preserved leaves never enter recursive namespace matching.
        dfcn::TranslationResult compose_bound_rule_result(
            const std::string& context, const std::string& source_pattern,
            const std::vector<std::pair<std::string, dfcn::TranslationResult>>& fields = {},
            std::string_view owner = {}) const;
        // Complete activity/menu grammar keeps the action before its item;
        // equipment material extraction must not reorder an entire job name.
        std::optional<std::string> translate_activity(const std::string& text) const;
        // Resolve through the same grammar, retaining the source byte behind
        // each translated UTF-8 byte. Reordered references keep their colors.
        // No game color or layout policy belongs in this parser.
        std::optional<std::string> translate_with_origins(
            const std::string& text, const std::string& context,
            std::vector<size_t>& origins) const;
        // Prose owners consume one longest authored production at a time.
        // Keep multi-sentence/verse rules and source origins while leaving
        // document separators and the remaining text to the calling owner.
        dfcn::TranslationResult translate_prefix_with_origins(
            const std::string& text, const std::string& context) const;
        // Bare ammunition types from the item grammar, never material/name
        // fragments. Callers compose the material with the shared qualifier.
        std::optional<std::string> translate_ammunition_type(const std::string& text) const;
        // Coin names share the material + noun grammar with minting/hauling tasks.
        std::optional<std::string> translate_coin_name(const std::string& text) const;
        // Complete equipment nouns, isolated from material, skill and prose
        // rules. Textile callers can restrict the same resolver to wear/shields.
        std::optional<std::string> translate_equipment_type(
            const std::string& text, bool wearable_only = true) const;
        // Size, handedness and garment type after a material field was removed.
        // Material-bearing names may also be requested to distinguish a finished
        // garment from a homonymous terrain caption (for example pig tail cap).
        std::optional<std::string> translate_equipment_name(
            const std::string& text, bool allow_material = false) const;
        // Furniture type nouns, isolated from material and prose rules.
        std::optional<std::string> translate_furniture_type(const std::string& text) const;
        struct SearchItemNoun {
            std::string kind, source, target;
            bool category = false;
            std::string grammar;
        };
        // Whole item nouns from the loaded grammar, including extensions.
        // Material/prefix rules and arbitrary sentence fragments are excluded.
        std::vector<SearchItemNoun> search_item_nouns() const;
        struct SearchLexicalSource { std::string grammar, source, target; };
        std::vector<SearchLexicalSource> search_lexical_sources() const;
        std::vector<std::pair<std::string, std::string>> search_word_equivalents() const;
        // Bare cup/mug/goblet types; keep their complete material field separate.
        std::optional<std::string> translate_drinkware_type(const std::string& text) const;
        // Equipment specifications have their own vocabulary, separate from appearance.
        std::optional<std::string> translate_equipment_modifier(const std::string& text) const;
        // Meat organs and preparation modifiers use the reviewed item vocabulary.
        // Modifiers include the trailing space from their source rule.
        std::optional<std::string> translate_meat_term(const std::string& text) const;
        bool is_item_material(const std::string& text) const;
        bool is_material_state(const std::string& text) const;
        // Complete material nouns, isolated from homonymous calendar/name rules.
        std::optional<std::string> translate_material_state(
            const std::string& text, bool adjective = false) const;
        // Native built-in material IDs, independent of plant/material spelling.
        std::optional<std::string> translate_builtin_material_solid(
            const std::string& material_id) const;
        // A complete native material prefix, using the shared plant/species rule.
        std::optional<std::string> translate_material_prefix(const std::string& text) const;
        // Plant-fiber qualifiers only for finished equipment and tools.
        std::optional<std::string> translate_woven_plant_material(const std::string& text) const;
        std::optional<std::string> translate_creature_name(const std::string& text) const;
        // One complete UTF-8 species/caste resolver serves every typed TOML
        // reference, including references embedded in materials and prose.
        void set_creature_name_resolver(
            std::function<std::optional<std::string>(std::string_view)> resolver);
        // Typed captures only: creature_label/name/person/book/topic/form/deity,
        // skill/skill_rating/rated_skill/storage_container/item_material/material_list/native_item_name. The owner
        // must translate the entire UTF-8 capture or return nullopt; a partial
        // translation or an unchanged fallback is not a resolved phrase.
        void set_phrase_resolver(std::function<std::optional<std::string>(
            std::string_view source, std::string_view kind)> resolver);
        // Native identity bindings and their owner scope can change without
        // changing the rule graph. This is a content revision, never a frame
        // epoch; detached caption snapshots intentionally have no provider.
        void set_context_revision_provider(std::function<std::uint64_t()> provider);
        // RAW vocabulary only: safe for the shared resolver to query without
        // invoking itself again through the dynamic creature namespaces.
        std::optional<std::string> translate_static_creature_name(const std::string& text) const;
        // Roster abbreviations only: recover one RAW-backed English identity
        // after native right-to-left vowel removal. Never guess clipped tails.
        std::optional<std::string> expand_shortened_creature_name(const std::string& text) const;
        // Complete anatomical names only; never use item/name/prose fallback.
        std::optional<std::string> translate_color(const std::string& text) const;
        // Scoped prose vocabulary; never flattened into global item/name rules.
        std::optional<std::string> translate_appearance_term(
            const std::string& text, const std::string& context) const;
        std::optional<std::string> translate_anatomy(const std::string& text,
            bool tissue_suffix = true) const;
        // A terrain caption followed by zero or more plant-growth labels.
        // Never treat its comma-separated leaves/fruit as anatomical owners.
        std::optional<std::string> translate_tile_description(const std::string& text) const;

    private:
        inline static thread_local RulesetsManager *instance_override_ = nullptr;
        // =====================================================================
        // 1. 构造
        // =====================================================================
        RulesetsManager();
        RulesetsManager(const RulesetsManager&) = delete;
        RulesetsManager& operator=(const RulesetsManager&) = delete;
        RulesetsManager(RulesetsManager&&) = delete;
        ~RulesetsManager() = default;

        // =====================================================================
        // 2. 嵌套类型（按依赖从底到顶）
        // =====================================================================

        enum class Type { Literal, Reference };

        struct Token {
            Type type;
            std::string value;
            auto operator<=>(const Token&) const = default;
        };

        using Tokens = std::vector<Token>;

        struct RuleSignature {
            std::string identifier;
            Tokens rule;
            auto operator<=>(const RuleSignature&) const = default;
        };

        struct ResultTree;
        using BindingMap = std::vector<std::pair<std::string, std::shared_ptr<const ResultTree>>>;

        struct ResultTree {
            std::string identifier;
            std::string matched;
            std::string translated;
            std::string remaining;
            BindingMap children;
            // Grammar storage is immutable while memoized trees are alive.
            // Keep token identities, not a second set of translation rules.
            const Tokens* source_tokens = nullptr;
            const Tokens* target_tokens = nullptr;
            bool external_leaf = false;
            // External fields prove their own dynamic text, but do not own
            // literals that an enclosing production can consume. Prefer the
            // complete parse with less text delegated to those fields before
            // comparing grammar depth: otherwise a person can absorb Warm,
            // Damp or Engraving, and a plant name can absorb surface states.
            // Count every external leaf, including opaque material/container
            // resolvers which can themselves contain a personal-name field.
            size_t external_capture_bytes = 0;
            // A validated native item name is a fallback when this text also
            // has a complete material/item/building production. Propagate
            // that semantic role through every enclosing grammar wrapper.
            bool uses_name_fallback = false;
            // Candidate selection can revisit a shared subtree many times.
            // Cache the edge-counting weight once instead of walking its DAG
            // for every comparison.
            size_t tree_weight = 0;
            bool contains_material = false;
            bool contains_creature = false;
            bool has_outer_structure = false;
            bool complete_creature = false;

            ResultTree(std::string id, std::string mat,
                    std::string trans, std::string rem,
                    BindingMap kids, const Tokens* input = nullptr,
                    const Tokens* output = nullptr, bool external = false
            ) : identifier(std::move(id)), matched(std::move(mat)),
                translated(std::move(trans)), remaining(std::move(rem)), children(std::move(kids)),
                source_tokens(input), target_tokens(output), external_leaf(external),
                external_capture_bytes(external ? matched.size() : 0),
                uses_name_fallback(identifier == "::text::native_item_name"),
                tree_weight(matched.empty() ? 0 : 1) {
                const bool creature = identifier.starts_with("::creatures::");
                contains_material = !matched.empty() &&
                    (identifier.starts_with("::materials::") ||
                     identifier == "::materials" || identifier.ends_with("::^material"));
                contains_creature = !matched.empty() && creature;
                complete_creature = creature;
                for (const auto& [_, child] : children) {
                    external_capture_bytes += child->external_capture_bytes;
                    if (child->uses_name_fallback) uses_name_fallback = true;
                    tree_weight += child->tree_weight;
                    contains_material |= child->contains_material;
                    contains_creature |= child->contains_creature;
                    has_outer_structure |= child->has_outer_structure;
                    complete_creature |= child->complete_creature &&
                        child->matched.size() == matched.size();
                }
                if (creature) has_outer_structure = false;
                else if (!matched.empty() &&
                    (identifier == "::materials::state" ||
                     identifier.starts_with("::materials::state::") ||
                     (identifier.starts_with("::items::") &&
                      identifier.ends_with("::main") && !contains_creature)))
                    has_outer_structure = true;
            }

            ResultTree(const ResultTree&) = default;
            ResultTree(ResultTree&&) = default;
            ResultTree& operator=(const ResultTree&) = delete;
            ResultTree& operator=(ResultTree&&) = delete;

            [[nodiscard]] size_t weight() const {
                return tree_weight;
            }

            [[nodiscard]] bool preferred_to(const ResultTree& other) const {
                if (uses_name_fallback != other.uses_name_fallback)
                    return !uses_name_fallback;
                if (external_capture_bytes != other.external_capture_bytes)
                    return external_capture_bytes < other.external_capture_bytes;
                return weight() < other.weight();
            }

            [[nodiscard]] unsigned selection_flags() const {
                return unsigned(uses_name_fallback) | (unsigned(contains_material) << 1) |
                    (unsigned(contains_creature) << 2) | (unsigned(has_outer_structure) << 3) |
                    (unsigned(complete_creature) << 4) | (unsigned(!translated.empty()) << 5);
            }
        };

        struct TransparentHash {
            using is_transparent = void;
            size_t operator()(std::string_view sv) const noexcept {
                return std::hash<std::string_view>{}(sv);
            }
        };

        struct TransparentEqual {
            using is_transparent = void;
            bool operator()(std::string_view a, std::string_view b) const noexcept {
                return a == b;
            }
        };

        struct Candidate {
            BindingMap results;
            std::string remaining;
            size_t external_capture_bytes = 0;
            size_t tree_weight = 0;
            unsigned selection_flags = 0;

            Candidate(BindingMap res, std::string rem
            ) : results(std::move(res)), remaining(std::move(rem)) {}

            Candidate() = default;
            Candidate(const Candidate&) = default;
            Candidate(Candidate&&) = default;
            Candidate& operator=(const Candidate&) = delete;
            Candidate& operator=(Candidate&&) = default;
        };

        struct LruMemoMap {
            struct Key {
                std::string text;
                std::uint64_t context_revision = 0;
                dfcn::TranslationPolicy policy = dfcn::TranslationPolicy::Strict;
            };
            struct KeyView {
                std::string_view text;
                std::uint64_t context_revision = 0;
                dfcn::TranslationPolicy policy = dfcn::TranslationPolicy::Strict;
            };
            struct KeyHash {
                using is_transparent = void;
                template<class K> size_t operator()(const K& key) const noexcept {
                    size_t hash = std::hash<std::string_view>{}(key.text);
                    hash ^= std::hash<std::uint64_t>{}(key.context_revision) +
                        0x9e3779b9U + (hash << 6) + (hash >> 2);
                    hash ^= static_cast<size_t>(key.policy) +
                        0x9e3779b9U + (hash << 6) + (hash >> 2);
                    return hash;
                }
            };
            struct KeyEqual {
                using is_transparent = void;
                template<class A, class B>
                bool operator()(const A& a, const B& b) const noexcept {
                    return std::string_view(a.text) == std::string_view(b.text) &&
                        a.context_revision == b.context_revision &&
                        a.policy == b.policy;
                }
            };
            using Value = std::vector<std::shared_ptr<const ResultTree>>;
            using List   = std::list<std::pair<Key, Value>>;
            using Map    = std::unordered_map<Key, List::iterator, KeyHash, KeyEqual>;

            static constexpr size_t DEFAULT_MAX = 100;

            List lru_list;
            Map cache_map;
            size_t max_entries;

            LruMemoMap(size_t max = DEFAULT_MAX) : max_entries(max) {}

            Value* find(std::string_view text, std::uint64_t context_revision) {
                auto it = cache_map.find(KeyView{text, context_revision});
                if (it == cache_map.end()) return nullptr;
                lru_list.splice(lru_list.begin(), lru_list, it->second);
                return &it->second->second;
            }

            void insert(std::string text, Value value, std::uint64_t context_revision) {
                auto it = cache_map.find(KeyView{text, context_revision});
                if (it != cache_map.end()) {
                    lru_list.splice(lru_list.begin(), lru_list, it->second);
                    it->second->second = std::move(value);
                    return;
                }
                if (lru_list.size() >= max_entries) {
                    cache_map.erase(lru_list.back().first);
                    lru_list.pop_back();
                }
                lru_list.emplace_front(Key{std::move(text), context_revision}, std::move(value));
                cache_map.emplace(lru_list.front().first, lru_list.begin());
            }

            size_t size() const { return lru_list.size(); }
        };

        using MemoOuterMap = std::unordered_map<
            std::string,
            LruMemoMap,
            TransparentHash,
            TransparentEqual
        >;

        struct ResolutionSession {
            struct Key {
                std::string identifier;
                std::string text;
                std::uint64_t context_revision = 0;
                bool operator==(const Key&) const = default;
            };
            struct KeyView {
                std::string_view identifier;
                std::string_view text;
                std::uint64_t context_revision = 0;
            };
            struct KeyHash {
                using is_transparent = void;
                template<class K> size_t operator()(const K& key) const noexcept {
                    size_t hash = std::hash<std::string_view>{}(key.identifier);
                    const auto combine = [&](size_t value) {
                        hash ^= value + 0x9e3779b9U + (hash << 6) + (hash >> 2);
                    };
                    combine(std::hash<std::string_view>{}(key.text));
                    combine(std::hash<std::uint64_t>{}(key.context_revision));
                    return hash;
                }
            };
            struct KeyEqual {
                using is_transparent = void;
                template<class A, class B>
                bool operator()(const A& a, const B& b) const noexcept {
                    return a.identifier == b.identifier && a.text == b.text &&
                        a.context_revision == b.context_revision;
                }
            };
            // Only closed computations enter this table. A completed proof
            // remains valid when another callback is active; an unfinished
            // cyclic query is never remembered as an ordinary miss.
            std::unordered_map<Key, LruMemoMap::Value, KeyHash, KeyEqual> memo;
            std::unordered_map<Key, std::optional<std::string>, KeyHash, KeyEqual> callbacks;
            // Active views belong to their live recursive calls. Do not copy
            // the complete remaining input at every depth merely to guard it.
            std::unordered_set<KeyView, KeyHash, KeyEqual> active;
            size_t cycle_revision = 0;
        };

        using RuleSet = std::vector<std::pair<Tokens, Tokens>>;
        using RuleSets = std::unordered_map<std::string, RuleSet>;

        struct RulePrefixIndex {
            // Bound lookup work independently of vocabulary size. Short
            // literals keep their complete prefix so they can still match
            // before a longer one. Full literal matching remains authoritative.
            static constexpr size_t maximum_prefix_bytes = 8;
            static std::string literal_prefix(std::string_view text) {
                std::string prefix(text.substr(0, maximum_prefix_bytes));
                for (char &byte : prefix)
                    if (byte >= 'A' && byte <= 'Z') byte += 'a' - 'A';
                return prefix;
            }
            std::unordered_map<std::string, std::vector<size_t>,
                TransparentHash, TransparentEqual> literal_starts;
            std::vector<size_t> unrestricted;
        };

        struct ResourceDependency {
            std::filesystem::path path;
            std::filesystem::file_time_type modified{};
            std::uintmax_t size = 0;
            bool directory = false;
            int error = 0;
            bool operator==(const ResourceDependency&) const = default;
        };

        // =====================================================================
        // 3. 成员变量
        // =====================================================================
        bool initialized = false;
        bool native_language_original_ = false;
        std::string last_load_error_;
        std::filesystem::path ruleset_directory_;
        std::vector<ResourceDependency> loaded_dependencies_;
        std::vector<ResourceDependency> attempted_dependencies_;
        dfcn::extensions::Snapshot loaded_extensions_;
        dfcn::extensions::Snapshot attempted_extensions_;
        std::uint64_t resource_revision_ = 0;
        RuleSets rulesets_;
        std::unordered_map<std::string, RulePrefixIndex> rule_prefix_indexes_;
        // Small closed leaf vocabularies can prove that a later noun is
        // absent before an earlier material/reference expands its branches.
        std::unordered_map<std::string, std::vector<std::string_view>> literal_leaf_rules_;
        // Only fixed, acyclic rule closures without owner/native callbacks.
        // These proofs are independent of the report identity context.
        std::unordered_set<std::string> context_free_namespaces_;
        mutable MemoOuterMap memo_cache_;
        std::set<RuleSignature> cyclic_rule_signatures_;
        std::unordered_map<std::string, std::string, TransparentHash, TransparentEqual>
            static_creature_names_;
        std::function<std::optional<std::string>(std::string_view)> creature_name_resolver_;
        std::function<std::optional<std::string>(std::string_view, std::string_view)>
            phrase_resolver_;
        std::function<std::uint64_t()> context_revision_provider_;
        mutable std::unordered_set<ResolutionSession::Key,
            ResolutionSession::KeyHash, ResolutionSession::KeyEqual> active_resolver_calls_;
        mutable ResolutionSession* active_resolution_session_ = nullptr;

        // =====================================================================
        // 4. 函数声明（按调用链：加载 → 翻译 → Token → 工具）
        // =====================================================================

        // TOML 加载
        void parse_dir(const std::filesystem::path& base, const std::filesystem::path& curr,
            std::optional<std::string>& visited_root, bool extension = false);
        void parse_file(const std::filesystem::path& base, const std::filesystem::path& path,
            std::optional<std::string>& visited_root, bool extension = false);
        void validate_references() const;
        void analyze_from_root();
        void rebuild_rule_prefix_indexes();
        void rebuild_static_creature_names();
        static std::vector<ResourceDependency> resource_dependencies(
            const std::filesystem::path& dir);

        // 翻译核心
        std::vector<std::shared_ptr<const ResultTree>> find_translations(const std::string& text, bool partial_match) const;
        std::vector<std::shared_ptr<const ResultTree>> resolve_namespace(const std::string& text, const std::string& identifier, size_t level) const;
        std::vector<std::shared_ptr<const ResultTree>> resolve_replacer(const std::string& text, const std::string& identifier, size_t level) const;
        std::vector<std::shared_ptr<const ResultTree>> resolve_external_prefixes(
            const std::string& text, const std::string& identifier) const;
        static void compact_candidates(std::vector<Candidate>& candidates,
            const Tokens& target_tokens, size_t source_size);
        static LruMemoMap::Value compact_results(LruMemoMap::Value results);
        static std::string_view external_prefix_kind(std::string_view identifier);
        bool rule_literals_fit(std::string_view text, const Tokens& tokens) const;

        // Token 处理
        Tokens parse_tokens(const std::string& base_ns, const std::string& input) const;
        std::string to_canonical_identifier(const std::string& identifier, const std::string& base_ns) const;
        void validate_identifier_format(const std::string& identifier) const;

        // 工具
        static bool ci_char_equal(unsigned char a, unsigned char b);
        static bool matches_literal(std::string_view input, std::string_view pattern);
        static bool is_placeholder(std::string_view identifier);
        static bool is_builtin(std::string_view identifier);
        static std::optional<size_t> find_literal_position(std::string_view text, std::string_view literal);
        static std::string build_translated(const Tokens& trans_tokens, const BindingMap& bindings,
                                           std::vector<size_t>* origins = nullptr);
        static bool translation_origins(const ResultTree& tree, std::vector<size_t>& origins);
        static void normalize_translation(std::string& translated, std::vector<size_t>* origins = nullptr);
        static void print_translation_path(const ResultTree& node, int indent = 0);
        static const std::regex& token_split_regex() {
            static const std::regex re(R"(\{([^\{\}]+)\})");
            return re;
        }
        static const std::regex& consecutive_colons_regex() {
            static const std::regex re(":+");
            return re;
        }
    };

    #define RULESETS DFHack::DFZH::Hooks::RulesetsManager::getInstance()

} // namespace Hooks
} // namespace DFZH
} // namespace DFHack
