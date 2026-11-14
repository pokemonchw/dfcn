
#include "rulesets_manager.h"
#include "item_designation.h"
#include "item_material_qualifier.h"
#include "config.h"
#include "logger.h"
#include "translation_state.h"
#include "translation_work.h"
#include "dfhack_translation_thread.h"
#include "runtime_paths.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <functional>
#include <iterator>
#include <sstream>
#include <tuple>

#define TOML_EXCEPTIONS 0
#include <toml++/toml.hpp>


namespace DFHack {
namespace DFZH {
namespace Hooks {
    namespace {
        struct FrontierKey {
            size_t remaining;
            unsigned flags;
            bool operator==(const FrontierKey&) const = default;
        };

        struct FrontierHash {
            size_t operator()(const FrontierKey& key) const noexcept {
                size_t hash = std::hash<size_t>{}(key.remaining);
                return hash ^ (key.flags + 0x9e3779b9U + (hash << 6) + (hash >> 2));
            }
        };

        // Within one source production, remaining text is always a suffix of
        // the same input. Equal lengths therefore mean the same parser state.
        // Keep the first path for source-order APIs and the cheapest path for
        // preferred-result APIs, without retaining their Cartesian products.
        template<class Value, class Classify, class Prefer>
        void compact_ordered_frontier(std::vector<Value>& values,
                Classify&& classify, Prefer&& prefer) {
            struct Choice { size_t first, best; };
            std::unordered_map<FrontierKey, Choice, FrontierHash> choices;
            for (size_t at = 0; at < values.size(); ++at) {
                const auto [choice, inserted] = choices.try_emplace(
                    classify(values[at]), Choice{at, at});
                if (!inserted && prefer(values[at], values[choice->second.best]))
                    choice->second.best = at;
            }
            std::vector<size_t> retained;
            retained.reserve(choices.size() * 2);
            for (const auto& [key, choice] : choices) {
                retained.push_back(choice.first);
                if (choice.best != choice.first) retained.push_back(choice.best);
            }
            if (retained.size() == values.size()) return;
            std::sort(retained.begin(), retained.end());
            std::vector<Value> compacted;
            compacted.reserve(retained.size());
            for (size_t at : retained) compacted.push_back(std::move(values[at]));
            values = std::move(compacted);
        }

        template<class Operation>
        auto scoped_rule_translation(Operation&& operation) -> decltype(operation()) {
            dfcn::TranslationWorkScope work;
            return operation();
        }
    }

    RulesetsManager::RulesetsManager() {
    }

    std::vector<RulesetsManager::SearchItemNoun> RulesetsManager::search_item_nouns() const {
        dfcn::TranslationStateScope translation_scope;
        std::vector<SearchItemNoun> result;
        constexpr std::string_view prefix = "::items::";
        // Discover roots from the actual inventory grammar. Follow their
        // noun productions instead of whitelisting leaf suffixes: bar::coal,
        // root literals, generated subtypes and extension namespaces count.
        std::set<std::string> roots;
        if (const auto main = rulesets_.find("::items::main"); main != rulesets_.end())
            for (const auto& [source, target] : main->second)
                for (const auto& token : source)
                    if (token.type == Type::Reference && token.value.starts_with(prefix) &&
                            token.value.find("::", prefix.size()) == std::string::npos)
                        roots.insert(token.value);
        for (const auto& root : roots) {
            const std::string kind = root.substr(prefix.size());
            std::set<std::string> seen;
            std::vector<std::string> pending{root};
            while (!pending.empty()) {
                std::string identifier = std::move(pending.back());
                pending.pop_back();
                if (!seen.insert(identifier).second) continue;
                const auto found = rulesets_.find(identifier);
                if (found == rulesets_.end()) continue;
                for (const auto& [source, target] : found->second) {
                    for (const auto& token : source)
                        if (token.type == Type::Reference && token.value.starts_with(root + "::") &&
                                token.value.find('^') == std::string::npos &&
                                token.value.find("prefix") == std::string::npos &&
                                token.value.find('$') == std::string::npos)
                            pending.push_back(token.value);
                    if (source.size() != 1 || target.size() != 1 ||
                            source.front().type != Type::Literal ||
                            target.front().type != Type::Literal ||
                            source.front().value.empty() || target.front().value.empty()) continue;
                    const auto& noun = source.front().value;
                    result.push_back({kind, noun, target.front().value,
                        identifier.find("::default") != std::string::npos ||
                        (identifier.find("::singular") == std::string::npos &&
                         identifier.find("::plural") == std::string::npos &&
                         (noun == kind || noun == kind + "s")), identifier});
                }
            }
        }
        // A stable order also makes ambiguous aliases independent of hash order.
        std::sort(result.begin(), result.end(), [](const auto& a, const auto& b) {
            return std::tie(a.kind, a.source, a.target) < std::tie(b.kind, b.source, b.target);
        });
        return result;
    }

    std::vector<RulesetsManager::SearchLexicalSource> RulesetsManager::search_lexical_sources() const {
        dfcn::TranslationStateScope scope;
        std::vector<SearchLexicalSource> result;
        for (const auto& [grammar, rules] : rulesets_)
            if (grammar != "::materials::builtin" && !grammar.starts_with("::materials::builtin::"))
                for (const auto& [source, target] : rules)
                    if (source.size() == 1 && target.size() == 1 &&
                            source.front().type == Type::Literal && target.front().type == Type::Literal &&
                            !source.front().value.empty() && !target.front().value.empty() &&
                            source.front().value.size()<=160 && target.front().value.size()<=160)
                        result.push_back({grammar, source.front().value, target.front().value});
        std::sort(result.begin(), result.end(), [](const auto& a, const auto& b) {
            return std::tie(a.grammar, a.source, a.target) < std::tie(b.grammar, b.source, b.target);
        });
        return result;
    }

    std::vector<std::pair<std::string, std::string>>
    RulesetsManager::search_word_equivalents() const {
        dfcn::TranslationStateScope translation_scope;
        std::set<std::pair<std::string, std::string>> words;
        for (const auto& [identifier, rules] : rulesets_) {
            // Native material IDs are not natural-language search aliases.
            if (identifier == "::materials::builtin" ||
                    identifier.starts_with("::materials::builtin::")) continue;
            for (const auto& [source, target] : rules) {
                if (source.size() != 1 || target.size() != 1 ||
                        source.front().type != Type::Literal || target.front().type != Type::Literal)
                    continue;
                const auto& a = source.front().value;
                const auto& b = target.front().value;
                if (a.empty() || a.size() > 40 || b.empty() || b.size() > 30 ||
                        !std::all_of(a.begin(), a.end(), [](unsigned char c) {
                            return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '-';
                        })) continue;
                words.emplace(a, b);
            }
        }
        return {words.begin(), words.end()};
    }

    std::shared_ptr<RulesetsManager> RulesetsManager::clone_private() const {
        dfcn::TranslationStateScope translation_scope;
        auto parser = std::shared_ptr<RulesetsManager>(new RulesetsManager,
            [](RulesetsManager* value) { delete value; });
        parser->initialized = initialized;
        parser->native_language_original_ = native_language_original_;
        parser->last_load_error_ = last_load_error_;
        parser->ruleset_directory_ = ruleset_directory_;
        parser->loaded_dependencies_ = loaded_dependencies_;
        parser->attempted_dependencies_ = attempted_dependencies_;
        parser->loaded_extensions_ = loaded_extensions_;
        parser->attempted_extensions_ = attempted_extensions_;
        parser->resource_revision_ = resource_revision_;
        parser->rulesets_ = rulesets_;
        parser->cyclic_rule_signatures_ = cyclic_rule_signatures_;
        parser->static_creature_names_ = static_creature_names_;
        // Prefix/closed-leaf indexes retain views into their token storage.
        // Rebuild them in the copied graph; no result tree or resolver from
        // the live parser may retain pointers into that other owner.
        parser->rebuild_rule_prefix_indexes();
        return parser;
    }

    RulesetsManager::CaptionSnapshot RulesetsManager::make_caption_snapshot(
            std::unordered_map<std::string, std::string> material_qualifiers) const {
        dfcn::TranslationStateScope translation_scope;
        auto parser = clone_private();
        // The clone owns rebuilt leaf indexes. Memoized trees, Overlay
        // resolvers and the game context-revision provider stay empty in
        // this detached publication.
        const auto complete = [owner = parser.get()](std::string_view source,
                std::string_view name) -> std::optional<std::string> {
            const auto results = owner->resolve_namespace(
                std::string(source), std::string(name), 0);
            const ResultTree* best = nullptr;
            for (const auto& result : results) {
                if (!result->remaining.empty() || result->translated.empty()) continue;
                if (!best || result->preferred_to(*best)) best = result.get();
            }
            if (!best) return std::nullopt;
            std::string target = best->translated;
            normalize_translation(target);
            return target;
        };
        // Finished item grammars bind this material namespace through the
        // usual typed callback. Resolve it inside this detached graph only.
        parser->phrase_resolver_ = [complete, material_qualifiers = std::move(material_qualifiers)](
                std::string_view source,
                std::string_view kind) -> std::optional<std::string> {
            if (kind != "item_material") return std::nullopt;
            std::string key(source);
            for (char &ch : key)
                if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
            if (const auto known = material_qualifiers.find(key);
                    known != material_qualifiers.end()) return known->second;
            auto target = complete(source, "::materials::adjective");
            if (!target) target = complete(source, "::materials");
            auto qualifier = dfcn::finish_item_material_qualifier(
                source, target ? std::move(*target) : std::string{}, complete);
            return qualifier.empty() ? std::nullopt :
                std::optional<std::string>(std::move(qualifier));
        };
        auto mutex = std::make_shared<std::mutex>();
        return [parser = std::move(parser), mutex = std::move(mutex), complete](
                std::string_view kind, std::string_view source) -> std::optional<std::string> {
            if (source.empty() || source.size() > 65536) return std::nullopt;
            std::lock_guard<std::mutex> lock(*mutex);
            return scoped_rule_translation([&]() -> std::optional<std::string> {
                if (kind == "item") return complete(source, "::items");
                if (kind == "material") return complete(source, "::materials");
                if (kind == "material_adjective") return complete(source, "::materials::adjective");
                if (kind == "tile") return complete(source, "::tiles");
                if (kind == "building") return complete(source, "::map_hover::building");
                if (kind == "job") {
                    for (const auto* ns : {"::activities", "::tasks", "::menu"})
                        if (auto target = complete(source, ns)) return target;
                    return std::nullopt;
                }
                if (kind == "profession") {
                    if (auto target = complete(source, "::skills::name")) return target;
                    return complete(source, "::professions");
                }
                if (kind == "creature") {
                    if (auto target = complete(source, "::creatures::name::singular")) return target;
                    return complete(source, "::creatures::name::plural");
                }
                return std::nullopt;
            });
        };
    }

    // Public operations share the overlay's recursive state lock. Native
    // search and SDL drawing both reach the memoized parser, whose callbacks
    // can enter Overlay and return through another public grammar operation.
    // Private recursive parsing inherits its caller's lock.

    void RulesetsManager::load_from_dir(const std::filesystem::path& dir) {
        dfcn::TranslationStateScope translation_scope;
        ruleset_directory_ = dir;
        attempted_dependencies_ = resource_dependencies(dir);
        attempted_extensions_ = dfcn::extensions::discover("zh-Hans");
        if (!std::filesystem::exists(dir) || !std::filesystem::is_directory(dir)) {
            throw std::runtime_error("Rulesets directory not found: " + dir.string());
        }
        // Every pointer/view-bearing index belongs to one candidate graph.
        // A parse/reference/index failure leaves the live graph and callbacks
        // intact, including its successful and negative memo entries.
        RulesetsManager candidate;
        std::optional<std::string> visited_root;
        candidate.parse_dir(dir, dir, visited_root);
        for (const auto& package : attempted_extensions_.packages) {
            if (package.rulesets.empty()) continue;
            candidate.parse_dir(package.rulesets, package.rulesets, visited_root, true);
        }
        // Extension hooks can reference leaves declared by another fragment.
        // Resolve the complete combined graph before publishing any of it.
        candidate.validate_references();
        candidate.analyze_from_root();
        candidate.rebuild_rule_prefix_indexes();
        candidate.rebuild_static_creature_names();
        candidate.loaded_dependencies_ = attempted_dependencies_;
        candidate.loaded_extensions_ = attempted_extensions_;
        memo_cache_.clear();
        rulesets_.swap(candidate.rulesets_);
        rule_prefix_indexes_.swap(candidate.rule_prefix_indexes_);
        literal_leaf_rules_.swap(candidate.literal_leaf_rules_);
        context_free_namespaces_.swap(candidate.context_free_namespaces_);
        cyclic_rule_signatures_.swap(candidate.cyclic_rule_signatures_);
        static_creature_names_.swap(candidate.static_creature_names_);
        loaded_dependencies_.swap(candidate.loaded_dependencies_);
        std::swap(loaded_extensions_, candidate.loaded_extensions_);
        ++resource_revision_;
        last_load_error_.clear();
    }

    std::vector<RulesetsManager::ResourceDependency>
    RulesetsManager::resource_dependencies(const std::filesystem::path& dir) {
        std::vector<ResourceDependency> dependencies;
        const auto add = [&](const std::filesystem::path& path, bool directory) {
            std::error_code error;
            ResourceDependency dependency;
            dependency.path = path;
            dependency.directory = directory;
            dependency.modified = std::filesystem::last_write_time(path, error);
            if (error) dependency.error = error.value();
            if (!directory && !error) {
                dependency.size = std::filesystem::file_size(path, error);
                if (error) dependency.error = error.value();
            }
            dependencies.push_back(std::move(dependency));
        };
        add(dir, true);
        // Search graph/word alignment use the same published resource
        // revision, so data-only edits invalidate positive and negative hits.
        add(dfcn::runtime::data_path() / "search-concepts.tsv", false);
        for (const auto* file : {"search-lexemes.tsv", "search-relations.tsv",
                "search-predicates.toml", "search-native-bindings.tsv"})
            add(dfcn::runtime::data_path() / file, false);
        for (const auto* file : {"STCharacters.txt", "STPhrases.txt", "TWVariants.txt",
                "TWPhrasesIT.txt", "TWPhrasesName.txt", "TWPhrasesOther.txt"})
            add(dfcn::runtime::data_path() / "opencc" / file, false);
        add(dfcn::runtime::data_path() / "procedural-terms.tsv", false);
        std::error_code error;
        std::filesystem::recursive_directory_iterator it(dir, error), end;
        while (!error && it != end) {
            const auto path = it->path();
            const bool directory = it->is_directory(error);
            if (error) break;
            if (directory || path.extension() == ".toml") add(path, directory);
            it.increment(error);
        }
        if (error) dependencies.front().error = error.value();
        std::sort(dependencies.begin(), dependencies.end(), [](const auto& a, const auto& b) {
            return a.path < b.path;
        });
        return dependencies;
    }

    bool RulesetsManager::resources_changed() const {
        dfcn::TranslationStateScope translation_scope;
        return !ruleset_directory_.empty() &&
            (resource_dependencies(ruleset_directory_) != attempted_dependencies_ ||
                dfcn::extensions::resources_changed(attempted_extensions_, "zh-Hans"));
    }

    std::uint64_t RulesetsManager::resource_revision() const {
        dfcn::TranslationStateScope translation_scope;
        return resource_revision_;
    }

    void RulesetsManager::set_native_language_original(bool original) {
        dfcn::TranslationStateScope translation_scope;
        if (native_language_original_ == original) return;
        native_language_original_ = original;
        // Parent productions retain their children's rendered names too.
        memo_cache_.clear();
        if (active_resolution_session_) {
            active_resolution_session_->memo.clear();
            active_resolution_session_->callbacks.clear();
            ++active_resolution_session_->cycle_revision;
        }
        if (dfcn::active_translation_work) {
            dfcn::active_translation_work->parser_sessions.erase(this);
            ++dfcn::active_translation_work->cycle_revision;
        }
    }

    bool RulesetsManager::init() {
        dfcn::TranslationStateScope translation_scope;
        if (!load_rule_sets()) {
            return false;
        }
        initialized = true;
        return true;
    }

    void RulesetsManager::shutdown() {
        dfcn::TranslationStateScope translation_scope;
        initialized = false;
        last_load_error_.clear();
        memo_cache_.clear();
        rulesets_.clear();
        rule_prefix_indexes_.clear();
        literal_leaf_rules_.clear();
        context_free_namespaces_.clear();
        cyclic_rule_signatures_.clear();
        static_creature_names_.clear();
        creature_name_resolver_ = {};
        phrase_resolver_ = {};
        context_revision_provider_ = {};
        active_resolver_calls_.clear();
        ruleset_directory_.clear();
        loaded_dependencies_.clear();
        attempted_dependencies_.clear();
        loaded_extensions_ = {};
        attempted_extensions_ = {};
    }

    std::string RulesetsManager::last_load_error() const {
        dfcn::TranslationStateScope translation_scope;
        return last_load_error_;
    }

    void RulesetsManager::print_cache_stats() const {
        dfcn::TranslationStateScope translation_scope;
        size_t total_entries = 0;
        for (const auto& [id, inner] : memo_cache_) total_entries += inner.size();
        LOGGERMANAGER.getLogger()->info("[Cache] {} identifiers, {} entries (LRU max {}/identifier)",
            memo_cache_.size(), total_entries, LruMemoMap::DEFAULT_MAX);
    }

    // -------------------------------------------------------------------------
    // 从根出发的图分析（循环检测）
    // -------------------------------------------------------------------------

    /// Shared namespaces are analyzed once instead of once per incoming
    /// path. Tarjan's strongly connected components identify every cyclic
    /// reference in linear graph work, including self references. A rule is
    /// disabled only when one of its own references participates in a cycle;
    /// ancestors that merely reach a cyclic component remain available.
    void RulesetsManager::analyze_from_root() {
        cyclic_rule_signatures_.clear();

        if (!rulesets_.contains("::")) {
            LOGGERMANAGER.getLogger()->warn("[Analyze] root \"::\" not found, skip");
            return;
        }

        struct Edge { size_t target; const Tokens* rule_source; };
        struct Namespace { std::string identifier; std::vector<Edge> edges; };
        std::vector<Namespace> graph;
        std::unordered_map<std::string, size_t> node_ids;
        graph.reserve(rulesets_.size());
        node_ids.reserve(rulesets_.size());
        const auto node_id = [&](const std::string& identifier) {
            const auto [found, inserted] = node_ids.try_emplace(identifier, graph.size());
            if (inserted) graph.push_back({identifier, {}});
            return found->second;
        };
        node_id("::");
        // Appending new nodes makes this work list cover only root-reachable
        // namespaces. Keep source token pointers rather than copying a rule
        // for every edge; the candidate ruleset graph stays fixed here.
        for (size_t current = 0; current < graph.size(); ++current) {
            const auto rules = rulesets_.find(graph[current].identifier);
            if (rules == rulesets_.end()) continue;
            std::vector<Edge> edges;
            for (const auto& [source, target] : rules->second) {
                for (const auto& token : source) {
                    if (token.type != Type::Reference || token.value.empty() ||
                        token.value[0] == '@' || token.value[0] == '#') continue;
                    std::string ref_target;
                    if (token.value[0] == '%') {
                        // Preserve the existing replacer dependency targets.
                        const auto first_colon = token.value.find(':');
                        if (first_colon == std::string::npos) continue;
                        const auto second_colon = token.value.find(':', first_colon + 1);
                        if (second_colon == std::string::npos) {
                            const auto base = token.value.substr(first_colon + 1);
                            if (base.empty()) continue;
                            ref_target = "::" + base;
                        } else {
                            const auto base = token.value.substr(first_colon + 1,
                                second_colon - first_colon - 1);
                            const auto qualifier = token.value.substr(second_colon + 1);
                            ref_target = qualifier.starts_with("::")
                                ? qualifier : "::" + base + "::" + qualifier;
                        }
                    } else {
                        ref_target = token.value;
                    }
                    edges.push_back({node_id(ref_target), &source});
                }
            }
            graph[current].edges = std::move(edges);
        }

        const size_t unvisited = graph.size();
        std::vector<size_t> discovery(graph.size(), unvisited);
        std::vector<size_t> lowlink(graph.size());
        std::vector<size_t> component(graph.size(), unvisited);
        std::vector<size_t> component_sizes;
        std::vector<size_t> stack;
        std::vector<bool> on_stack(graph.size(), false);
        stack.reserve(graph.size());
        size_t next_discovery = 0;
        const auto visit = [&](auto&& self, size_t current) -> void {
            discovery[current] = lowlink[current] = next_discovery++;
            stack.push_back(current);
            on_stack[current] = true;
            for (const auto& edge : graph[current].edges) {
                if (discovery[edge.target] == unvisited) {
                    self(self, edge.target);
                    lowlink[current] = std::min(lowlink[current], lowlink[edge.target]);
                } else if (on_stack[edge.target]) {
                    lowlink[current] = std::min(lowlink[current], discovery[edge.target]);
                }
            }
            if (lowlink[current] != discovery[current]) return;
            size_t size = 0;
            for (;;) {
                const auto member = stack.back();
                stack.pop_back();
                on_stack[member] = false;
                component[member] = component_sizes.size();
                ++size;
                if (member == current) break;
            }
            component_sizes.push_back(size);
        };
        visit(visit, 0);

        for (size_t current = 0; current < graph.size(); ++current) {
            const Tokens* last_cyclic_source = nullptr;
            for (const auto& edge : graph[current].edges) {
                if (edge.rule_source == last_cyclic_source) continue;
                if (component[current] != component[edge.target] ||
                    (component_sizes[component[current]] == 1 && edge.target != current))
                    continue;
                cyclic_rule_signatures_.insert({graph[current].identifier, *edge.rule_source});
                last_cyclic_source = edge.rule_source;
            }
        }

        if (!cyclic_rule_signatures_.empty()) {
            LOGGERMANAGER.getLogger()->info("[Analyze] {} cyclic rule(s) detected",
                cyclic_rule_signatures_.size());
        }
        LOGGERMANAGER.getLogger()->info("[Analyze] {} namespaces reachable from root", graph.size());
    }

    bool RulesetsManager::load_rule_sets() {
        dfcn::TranslationStateScope translation_scope;

        try {
            auto ruleset_dir = Config::getDataPath() / "rulesets/zh-Hans";
            load_from_dir(ruleset_dir);
            LOGGERMANAGER.getLogger()->info("RulesetsManager loaded: {} rulesets", rulesets_.size());
        } catch (const std::exception& e) {
            // Keep the last complete graph; the attempted dependency snapshot
            // avoids retrying the same invalid resource at every update tick.
            last_load_error_ = e.what();
            LOGGERMANAGER.getLogger()->error("RulesetsManager init failed: {}", e.what());
            return false;
        }
        return true;
    }

    /// 翻译输入文本，返回翻译结果。
    ///
    /// 单次递归匹配：从根命名空间 :: 出发，由一条完整规则消费全部输入。
    /// 跨域组合词（如 "Pig iron bars"）的翻译应由 TOML 规则本身覆盖
    /// （例如在 ::items 中定义 "{::materials} bars" = "{::materials}锭"），
    /// 而非由引擎通过多轮迭代动态拼凑。单规则完整匹配也保证了 build_translated
    /// 可以按需调整子翻译的语序，而不受左到右拼接约束。
    ///
    /// @param text 待翻译的英文文本
    /// @return     翻译后的中文文本，无法翻译时返回 std::nullopt
    std::optional<std::string> RulesetsManager::translate(const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            // Use the same owner/child/tissue parser in health and inventory as
            // in Legends, including names with more than one owning body part.
            if (text.find(',') != std::string::npos)
                if (auto anatomy = translate_anatomy(text)) return anatomy;
            auto results = find_translations(text, false);

            if (results.empty()) return std::nullopt;

            // A generated owner's title can also contain an item/material noun.
            // Keep every creature prefix available to the grammar, but at the
            // untyped root prefer a real outer structure over swallowing its noun
            // into a complete creature name. Typed creature APIs remain unchanged.
            const bool creature_ambiguity = std::ranges::any_of(results,
                [](const auto& tree) { return tree->complete_creature; });
            auto best = std::ranges::min_element(results,
                [&](const std::shared_ptr<const ResultTree>& a, const std::shared_ptr<const ResultTree>& b) {
                    if (a->uses_name_fallback != b->uses_name_fallback)
                        return a->preferred_to(*b);
                    if (creature_ambiguity) {
                        const bool a_outer = a->has_outer_structure;
                        const bool b_outer = b->has_outer_structure;
                        if (a_outer != b_outer) return a_outer;
                    }
                    return a->preferred_to(*b);
                });

            // LOGGERMANAGER.getLogger()->debug("\n========== All %zu Translation Results for \"%s\" ==========\n", results.size(), text.c_str());
            // for (size_t i = 0; i < results.size(); ++i) {
            //     LOGGERMANAGER.getLogger()->debug("--- Result #%zu (weight=%zu) ---\n", i, results[i]->weight());
            //     print_translation_path(*results[i]);
            // }
            // LOGGERMANAGER.getLogger()->debug("======================================================\n\n");

            std::string translated = (*best)->translated;
            normalize_translation(translated);
            return translated;
        });
    }

    void RulesetsManager::normalize_translation(
            std::string& translated, std::vector<size_t>* origins) {
        // The bundled community rules distinguish domestic species with 家,
        // but DFCN uses the shorter common name consistently in creature
        // rows and in compounds such as leather equipment.
        static constexpr std::array<std::pair<std::string_view, std::string_view>, 6>
            domestic_creature_terms = {{
                {"家猫", "猫"}, {"家鸡", "鸡"}, {"家犬", "狗"},
                {"家鹅", "鹅"}, {"家猪", "猪"}, {"家兔", "兔"},
            }};
        for (const auto &[source, target] : domestic_creature_terms) {
            dfcn::translation_work_step();
            size_t position = 0;
            while ((position = translated.find(source, position)) !=
                   std::string::npos) {
                dfcn::translation_work_step();
                if (origins) {
                    const size_t origin = (*origins)[position];
                    origins->erase(origins->begin() + position,
                        origins->begin() + position + source.size());
                    origins->insert(origins->begin() + position, target.size(), origin);
                }
                translated.replace(position, source.size(), target);
                position += target.size();
            }
        }
    }

    std::optional<std::string> RulesetsManager::compose_bound_rule(
            const std::string& context, const std::string& source_pattern,
            const std::vector<std::pair<std::string, std::string>>& fields,
            std::vector<size_t>* origins) const {
        dfcn::TranslationStateScope translation_scope;
        if (origins) origins->clear();
        const auto found = rulesets_.find(context);
        if (found == rulesets_.end() || !context.starts_with("::")) return std::nullopt;
        // Relative references in a production use its file's base namespace.
        // Callers of a named subruleset use absolute references instead.
        const std::string base = context.substr(2);
        Tokens source;
        if (fields.empty()) {
            // With no bindings, only a literal production can succeed below.
            // Runtime vocabulary probes (for example a hover caption's first
            // word) are text, not grammar: a native item/name may contain
            // braces, including an unmatched brace in this extracted prefix.
            if (!source_pattern.empty())
                source.emplace_back(Token{Type::Literal, source_pattern});
        } else {
            source = parse_tokens(base, source_pattern);
        }
        const auto rule = std::find_if(found->second.begin(), found->second.end(),
            [&](const auto& entry) { return entry.first == source; });
        if (rule == found->second.end()) return std::nullopt;
        BindingMap bindings;
        for (const auto& [name, value] : fields) {
            const auto identifier = to_canonical_identifier(name, base);
            if (std::none_of(source.begin(), source.end(), [&](const Token& token) {
                    return token.type == Type::Reference && token.value == identifier;
                }) || std::any_of(bindings.begin(), bindings.end(), [&](const auto& bound) {
                    return bound.first == identifier;
                })) return std::nullopt;
            bindings.emplace_back(identifier, std::make_shared<ResultTree>(
                identifier, "", value, "", BindingMap{}));
        }
        for (const auto* tokens : {&rule->first, &rule->second})
            for (const auto& token : *tokens)
                if (token.type == Type::Reference && std::none_of(bindings.begin(), bindings.end(),
                        [&](const auto& bound) { return bound.first == token.value; }))
                    return std::nullopt;
        // Use the ordinary grammar renderer and normalization, not a second
        // word-order implementation for native snapshots.
        auto target = build_translated(rule->second, bindings, origins);
        normalize_translation(target, origins);
        return target;
    }

    dfcn::TranslationResult RulesetsManager::compose_bound_rule_result(
            const std::string& context, const std::string& source_pattern,
            const std::vector<std::pair<std::string, dfcn::TranslationResult>>& fields,
            std::string_view owner) const {
        dfcn::TranslationStateScope translation_scope;
        dfcn::TranslationResult result;
        result.kind = context;
        result.owner = owner;
        result.policy = dfcn::TranslationPolicy::Display;
        result.resource_revision = resource_revision_;
        const auto found = rulesets_.find(context);
        if (found == rulesets_.end() || !context.starts_with("::")) return result;
        const std::string base = context.substr(2);
        Tokens source;
        try {
            if (fields.empty()) {
                if (!source_pattern.empty())
                    source.emplace_back(Token{Type::Literal, source_pattern});
            } else {
                source = parse_tokens(base, source_pattern);
            }
        } catch (const std::exception&) {
            result.status = dfcn::TranslationStatus::Invalid;
            return result;
        }
        const auto rule = std::find_if(found->second.begin(), found->second.end(),
            [&](const auto& entry) { return entry.first == source; });
        if (rule == found->second.end()) return result;

        struct Field {
            const dfcn::TranslationResult* result;
            size_t source_offset = 0;
        };
        std::unordered_map<std::string, Field> bindings;
        for (const auto& [name, field] : fields) {
            const auto identifier = to_canonical_identifier(name, base);
            if (!field.usable() || field.origins.size() != field.target.size() ||
                std::any_of(field.origins.begin(), field.origins.end(), [&](size_t origin) {
                    return origin != std::string::npos && origin >= field.source.size();
                }) || std::none_of(source.begin(), source.end(), [&](const Token& token) {
                    return token.type == Type::Reference && token.value == identifier;
                }) || !bindings.emplace(identifier, Field{&field}).second) {
                result.status = dfcn::TranslationStatus::Invalid;
                return result;
            }
            for (const auto& fragment : field.fragments) {
                if (fragment.source_begin > fragment.source_end ||
                    fragment.source_end > field.source.size() ||
                    fragment.target_begin > fragment.target_end ||
                    fragment.target_end > field.target.size()) {
                    result.status = dfcn::TranslationStatus::Invalid;
                    return result;
                }
            }
        }

        struct Literal {
            std::string_view source;
            size_t offset;
        };
        std::vector<Literal> literals;
        for (const auto& token : rule->first) {
            if (token.type == Type::Literal) {
                literals.push_back({token.value, result.source.size()});
                result.source += token.value;
            } else {
                const auto binding = bindings.find(token.value);
                if (binding == bindings.end()) {
                    result.status = dfcn::TranslationStatus::Invalid;
                    return result;
                }
                binding->second.source_offset = result.source.size();
                result.source += binding->second.result->source;
            }
        }
        // A display production may reorder a field, but may not hide an
        // unknown field merely because the translation omits its reference.
        for (const auto& [identifier, _] : bindings)
            if (std::none_of(rule->second.begin(), rule->second.end(), [&](const Token& token) {
                    return token.type == Type::Reference && token.value == identifier;
                })) {
                result.status = dfcn::TranslationStatus::Invalid;
                return result;
            }

        size_t literal_index = 0;
        for (const auto& token : rule->second) {
            if (token.type == Type::Reference) {
                const auto binding = bindings.find(token.value);
                if (binding == bindings.end()) {
                    result.status = dfcn::TranslationStatus::Invalid;
                    return result;
                }
                // Field targets already carry their own normalization and
                // source identity. In particular, authored text is untouched.
                result.append(*binding->second.result, binding->second.source_offset);
            } else {
                auto target = token.value;
                normalize_translation(target);
                const auto literal = literal_index < literals.size()
                    ? literals[literal_index++] : Literal{{}, 0};
                std::vector<size_t> origins(target.size(), std::string::npos);
                if (!literal.source.empty()) {
                    const bool final_stop = target == "。" || target == "！" || target == "？";
                    std::fill(origins.begin(), origins.end(),
                        final_stop ? literal.source.size() - 1 : 0);
                }
                result.append(dfcn::TranslationResult::translated(literal.source,
                    std::move(target), context, std::move(origins)), literal.offset);
            }
        }
        // Source connective tokens can disappear grammatically (articles, for
        // example), but retain complete coverage without erasing any field.
        for (; literal_index < literals.size(); ++literal_index) {
            const auto& literal = literals[literal_index];
            result.fragments.push_back({literal.offset, literal.offset + literal.source.size(),
                result.target.size(), result.target.size(), dfcn::TranslationStatus::Translated,
                context});
        }
        if (result.fragments.empty()) result.status = dfcn::TranslationStatus::Translated;
        result.consumed = result.source.size();
        result.resource_revision = resource_revision_;
        return result;
    }

    std::optional<std::string> RulesetsManager::translate_with_origins(
            const std::string& text, const std::string& context,
            std::vector<size_t>& origins) const {
        dfcn::TranslationStateScope translation_scope;
        origins.clear();
        std::vector<size_t> candidate_origins;
        auto translated = scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(text, context, 0);
            const ResultTree* best = nullptr;
            for (const auto& result : results) {
                if (!result->remaining.empty() || result->translated.empty()) continue;
                if (!best || result->preferred_to(*best)) best = result.get();
            }
            if (!best || !translation_origins(*best, candidate_origins)) return std::nullopt;
            std::string target = best->translated;
            normalize_translation(target, &candidate_origins);
            return target;
        });
        if (translated) origins = std::move(candidate_origins);
        return translated;
    }

    dfcn::TranslationResult RulesetsManager::translate_prefix_with_origins(
            const std::string& text, const std::string& context) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> dfcn::TranslationResult {
            const auto results = resolve_namespace(text, context, 0);
            const ResultTree* best = nullptr;
            for (const auto& result : results) {
                const size_t consumed = result->matched.size();
                if (!consumed || result->translated.empty() || consumed > text.size()) continue;
                if (consumed < text.size() &&
                        !std::isspace(static_cast<unsigned char>(text[consumed]))) continue;
                if (!best || consumed > best->matched.size() ||
                        (consumed == best->matched.size() && result->preferred_to(*best)))
                    best = result.get();
            }
            std::vector<size_t> origins;
            if (!best || !translation_origins(*best, origins)) return {};
            std::string translated = best->translated;
            normalize_translation(translated, &origins);
            if (translated.empty()) return {};
            auto result = dfcn::TranslationResult::translated(
                std::string_view(text).substr(0, best->matched.size()),
                std::move(translated), context, std::move(origins));
            result.resource_revision = resource_revision_;
            return result;
        });
    }

    std::optional<std::string> RulesetsManager::translate_activity(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            for (const auto* ns : {"::activities", "::tasks", "::menu"}) {
                const auto results = resolve_namespace(text, ns, 0);
                const ResultTree* best = nullptr;
                for (const auto& result : results) {
                    if (!result->remaining.empty() || result->translated.empty()) continue;
                    if (!best || result->preferred_to(*best)) best = result.get();
                }
                if (!best) continue;
                std::string translated = best->translated;
                normalize_translation(translated);
                return translated;
            }
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_ammunition_type(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            for (const auto* ns : {"::items::ammo::default::main",
                    "::items::ammo::singular::main", "::items::ammo::plural::main"}) {
                const auto results = resolve_namespace(text, ns, 0);
                for (const auto& result : results)
                    if (result->remaining.empty() && !result->translated.empty())
                        return result->translated;
            }
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_coin_name(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(text, "::items::coin", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_equipment_type(
            const std::string& text, bool wearable_only) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            for (const auto* family : {"armor", "helm", "gloves", "shoes", "pants", "shield",
                                     "weapon", "ammo", "trapcomp"}) {
                if (wearable_only && (std::string_view(family) == "weapon" ||
                    std::string_view(family) == "ammo" || std::string_view(family) == "trapcomp")) continue;
                for (const auto* form : {"default", "singular", "plural"}) {
                    const std::string ns = std::string("::items::") + family +
                        "::" + form + "::main";
                    const auto results = resolve_namespace(text, ns, 0);
                    for (const auto& result : results)
                        if (result->remaining.empty() && !result->translated.empty())
                            return result->translated;
                }
            }
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_equipment_modifier(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(
                text, "::items::prefix::equipment_modifier", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_equipment_name(
            const std::string& text, bool allow_material) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            // Keep the same item grammar for compound types such as a right
            // mitten or long skirt. Bare ::main type lookups omit these modifiers;
            // splitting them into ordinary words changes their item-specific meaning.
            std::shared_ptr<const ResultTree> best;
            for (const auto* family : {"armor", "helm", "gloves", "shoes", "pants", "shield"}) {
                const auto results = resolve_namespace(
                    text, std::string("::items::") + family, 0);
                for (const auto& result : results) {
                    if (!result->remaining.empty() || result->translated.empty() ||
                        (!allow_material && result->contains_material)) continue;
                    if (!best || result->preferred_to(*best)) best = result;
                }
            }
            return best ? std::optional<std::string>(best->translated) : std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_furniture_type(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            for (const auto* family : {"altar", "bed", "chair", "table", "cabinet",
                    "coffin", "box", "bookcase", "statue", "door", "floodgate",
                    "hatch_cover", "grate", "armorstand", "weaponrack", "pedestal", "anvil",
                    "animaltrap"}) {
                const auto results = resolve_namespace(
                    text, std::string("::items::") + family + "::main", 0);
                for (const auto& result : results)
                    if (result->remaining.empty() && !result->translated.empty())
                        return result->translated;
            }
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_drinkware_type(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(text, "::items::goblet::main", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_meat_term(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            if (text.empty()) return std::nullopt;
            // The item table distinguishes edible organs from material states
            // and anatomy. Prefer its direct meat entry when both a literal and
            // the shared material reference can consume the complete term.
            std::shared_ptr<const ResultTree> best;
            for (const auto* ns : {"::items::meat::^0", "::items::meat::^1",
                    "::items::meat::^prefix", "::items::meat::singular::main",
                    "::items::meat::plural::main"}) {
                const auto results = resolve_namespace(text, ns, 0);
                for (const auto& result : results) {
                    if (!result->remaining.empty() || result->translated.empty()) continue;
                    if (!best || result->preferred_to(*best)) best = result;
                }
            }
            return best ? std::optional<std::string>(best->translated) : std::nullopt;
        });
    }

    bool RulesetsManager::is_item_material(const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> bool {
            if (text.empty()) return false;
            for (const auto* ns : {"::materials", "::materials::adjective"}) {
                const auto results = resolve_namespace(text, ns, 0);
                for (const auto& result : results)
                    if (result->remaining.empty() && !result->translated.empty()) return true;
            }
            return false;
        });
    }

    std::optional<std::string> RulesetsManager::translate_material_state(
            const std::string& text, bool adjective) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(text, adjective ?
                "::materials::state::adjective" : "::materials::state", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_builtin_material_solid(
            const std::string& material_id) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            if (material_id.empty()) return std::nullopt;
            const auto results = resolve_namespace(material_id,
                "::materials::builtin::solid", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_material_prefix(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            if (text.empty()) return std::string{};
            // The trailing separator belongs to the existing prefix grammar;
            // the producer already supplied the entire species/plant field.
            const auto results = resolve_namespace(text + " ", "::materials::^prefix", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_woven_plant_material(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(text, "::materials::woven_plant", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    bool RulesetsManager::is_material_state(const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> bool {
            if (text.empty()) return false;
            // No optional species/plant prefix here: callers resolve a generated
            // creature separately, then require a complete, real material state.
            for (const auto* ns : {"::materials::state", "::materials::state::adjective"}) {
                const auto results = resolve_namespace(text, ns, 0);
                for (const auto& result : results)
                    if (result->remaining.empty() && !result->translated.empty()) return true;
            }
            return false;
        });
    }

    std::optional<std::string> RulesetsManager::translate_creature_name(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(text, "::creatures::name", 0);
            for (const auto& result : results)
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            return std::nullopt;
        });
    }

    void RulesetsManager::set_creature_name_resolver(
            std::function<std::optional<std::string>(std::string_view)> resolver) {
        dfcn::TranslationStateScope translation_scope;
        // Cached parent phrases contain the old child translation as well.
        // Clear all namespaces when the owner's vocabulary changes.
        memo_cache_.clear();
        creature_name_resolver_ = std::move(resolver);
    }

    void RulesetsManager::set_phrase_resolver(
            std::function<std::optional<std::string>(
                std::string_view, std::string_view)> resolver) {
        dfcn::TranslationStateScope translation_scope;
        memo_cache_.clear();
        phrase_resolver_ = std::move(resolver);
    }

    void RulesetsManager::set_context_revision_provider(
            std::function<std::uint64_t()> provider) {
        dfcn::TranslationStateScope translation_scope;
        memo_cache_.clear();
        context_revision_provider_ = std::move(provider);
    }

    static std::string creature_lookup_key(std::string_view source) {
        std::string key(source);
        for (char& ch : key)
            if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
        return key;
    }

    void RulesetsManager::rebuild_static_creature_names() {
        static_creature_names_.clear();
        std::set<std::string> visiting;
        const auto collect = [&](auto&& self, const std::string& identifier) -> void {
            // The typed roots below establish species ownership. An
            // identity alias may lead into an extension's own namespace
            // (e.g. ::whaleys_dogs::names), so retain its literal leaves.
            if (!visiting.insert(identifier).second) return;
            const auto found = rulesets_.find(identifier);
            if (found != rulesets_.end()) {
                for (const auto& [source, target] : found->second) {
                    // Follow only identity aliases to the installed RAW leaf
                    // tables. Prefix/status grammars are not static names.
                    if (source.size() == 1 && target.size() == 1 &&
                        source.front().type == Type::Reference &&
                        target.front().type == Type::Reference &&
                        source.front().value == target.front().value) {
                        self(self, source.front().value);
                    } else if (source.size() == 1 &&
                               source.front().type == Type::Literal &&
                               !source.front().value.empty() &&
                               std::all_of(target.begin(), target.end(), [](const Token& token) {
                                   return token.type == Type::Literal;
                               })) {
                        std::string translated;
                        for (const auto& token : target) translated += token.value;
                        if (translated.empty()) continue;
                        normalize_translation(translated);
                        static_creature_names_.try_emplace(
                            creature_lookup_key(source.front().value), std::move(translated));
                    }
                }
            }
            visiting.erase(identifier);
        };
        // Species wording remains authoritative for materials (cow -> 牛).
        // Caste-only names fill gaps without replacing that species wording.
        for (const auto* identifier : {"::creatures::name::singular",
                "::creatures::name::plural", "::creatures::caste::singular"})
            collect(collect, identifier);
    }

    std::optional<std::string> RulesetsManager::translate_static_creature_name(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto found = static_creature_names_.find(creature_lookup_key(text));
            return found == static_creature_names_.end()
                ? std::nullopt : std::optional<std::string>(found->second);
        });
    }

    std::optional<std::string> RulesetsManager::expand_shortened_creature_name(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const std::string key = creature_lookup_key(text);
            if (key.size() < 2 || static_creature_names_.contains(key)) return std::nullopt;
            std::optional<std::string> expanded;
            bool ambiguous = false;
            const auto consider = [&](const std::string& name) {
                dfcn::translation_work_step();
                if (name.size() <= key.size() || name.front() != key.front()) return;
                std::string shortened(name);
                // Native 53.16's 0x52d910 helper scans backwards, retaining each
                // word's first letter and deleting a/e/i/o/u until the width fits.
                // Its final hard truncation is deliberately not reconstructible.
                for (size_t at = shortened.size(); at > 1 && shortened.size() > key.size();) {
                    if ((at & 255) == 0) dfcn::translation_work_step();
                    --at;
                    if (shortened[at - 1] != ' ' &&
                        std::string_view("aeiou").find(shortened[at]) != std::string_view::npos)
                        shortened.erase(at, 1);
                }
                if (shortened != key) return;
                // Equal translated labels do not prove equal source identities.
                // Refuse every ambiguous abbreviation, including caste aliases.
                if (expanded && *expanded != name) { ambiguous = true; return; }
                expanded = name;
            };
            // Use the same scoped authored-role vocabulary as the descriptor
            // parser. Only a complete known species licenses these candidates;
            // never expand arbitrary words or guess a hard-truncated tail.
            std::vector<std::string> purposes;
            if (const auto rules = rulesets_.find("::creatures::caste::name::purpose");
                    rules != rulesets_.end()) {
                for (const auto& [source, target] : rules->second)
                    if (source.size() == 1 && source.front().type == Type::Literal &&
                        source.front().value.ends_with(' '))
                        purposes.push_back(creature_lookup_key(source.front().value));
            }
            for (const auto& [name, target] : static_creature_names_) {
                consider(name);
                for (const auto& purpose : purposes) consider(purpose + name);
                if (ambiguous) return std::nullopt;
            }
            return expanded;
        });
    }

    std::string_view RulesetsManager::external_prefix_kind(std::string_view identifier) {
        if (identifier == "::materials::item_qualifier") return "item_material";
        if (identifier == "::materials::list") return "material_list";
        if (identifier == "::items::storage_container") return "storage_container";
        if (identifier == "::creatures::caste::name") return "creature_label";
        if (identifier == "::creatures::name::singular" ||
            identifier == "::creatures::name::plural" ||
            identifier == "::creatures::caste::singular") return "creature";
        if (identifier.starts_with("::text::")) {
            const auto suffix = identifier.substr(8);
            for (const std::string_view candidate : {"name", "person", "book", "topic", "form", "deity",
                    "skill", "skill_rating", "rated_skill", "sphere", "instrument",
                    "activity_place", "artifact", "material", "native_item_name", "english_site"})
                if (suffix == candidate) return candidate;
        }
        return {};
    }

    std::vector<std::shared_ptr<const RulesetsManager::ResultTree>>
    RulesetsManager::resolve_external_prefixes(
            const std::string& text, const std::string& identifier) const {
        const std::string_view kind = external_prefix_kind(identifier);
        const bool creature = kind == "creature";
        if (creature) {
            if (!creature_name_resolver_) return {};
        } else if (kind.empty() || !phrase_resolver_) {
            return {};
        }

        // Only the same semantic kind and complete capture is a true callback
        // cycle. A material/person field can legitimately resolve another kind
        // or a shorter field while sharing the caller's original work budget.
        struct ResolverGuard {
            decltype(active_resolver_calls_)& active;
            const ResolutionSession::Key* key;
            ~ResolverGuard() { active.erase(*key); }
        };
        std::vector<std::shared_ptr<const ResultTree>> results;
        const auto name_byte = [](unsigned char ch) {
            return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                (ch >= '0' && ch <= '9') || ch >= 0x80 || ch == '-' || ch == '\'';
        };
        size_t identity_quote_end = 0;
        for (size_t end = 1; end <= text.size(); ++end) {
            if ((end & 255) == 0) dfcn::translation_work_step();
            const auto previous = static_cast<unsigned char>(text[end - 1]);
            if (kind == "english_site" || kind == "person") {
                // Both fields are identities inside prose. A later sentence
                // cannot extend the identity. In particular, offering every
                // remaining sentence to the person callback repeatedly enters
                // unit/world lookup and the recursive actor grammar. Quoted
                // nicknames still own their punctuation; book/title callbacks
                // retain their separate punctuation rules.
                if (previous == '\r' || previous == '\n') break;
                if (end - 1 > identity_quote_end || identity_quote_end == 0) {
                    if (previous == '"' || previous == '`') {
                        const char closing = previous == '"' ? '"' : '\'';
                        size_t quote = text.find(closing, end);
                        while (quote != std::string::npos && closing == '\'' &&
                                quote + 1 < text.size() && name_byte(
                                    static_cast<unsigned char>(text[quote + 1])))
                            quote = text.find(closing, quote + 1);
                        if (quote != std::string::npos) identity_quote_end = quote;
                    }
                }
                // Only a closed quoted name protects its internal punctuation;
                // do not offer incomplete quoted prefixes to the fallback.
                if (end - 1 < identity_quote_end) continue;
                constexpr std::string_view joined_sentence = ", and also";
                if (kind == "english_site" && previous == ',' && matches_literal(
                        std::string_view(text).substr(end - 1), joined_sentence)) {
                    const size_t after = end - 1 + joined_sentence.size();
                    if (after == text.size() || std::isspace(
                            static_cast<unsigned char>(text[after]))) break;
                }
                if (previous == '.' || previous == '!' || previous == '?') {
                    size_t after = end;
                    while (after < text.size() && (text[after] == '"' ||
                            text[after] == '\'' || text[after] == ')')) ++after;
                    if (after == text.size() || std::isspace(
                            static_cast<unsigned char>(text[after]))) break;
                }
            }
            // Never offer the owner a prefix cut inside a UTF-8 codepoint.
            if (end < text.size() &&
                (static_cast<unsigned char>(text[end]) & 0xc0) == 0x80) continue;
            if (creature) {
                // Item Tagger annotates RAW species/caste names with use
                // tags. Offer complete bracketed fields to the same strict
                // creature resolver; it accepts only known tags following a
                // complete species, including multiple tags in their order.
                if (!name_byte(previous) && previous != ' ' &&
                        previous != '[' && previous != ']') break;
                if (!name_byte(previous) && previous != ']') continue;
                // An outer possessive also offers a boundary for event
                // grammar such as `seeing a <caste>'s dead body`.
                const bool possessive = end + 1 < text.size() && text[end] == '\'' &&
                    (text[end + 1] == 's' || text[end + 1] == 'S') &&
                    (end + 2 == text.size() || !name_byte(
                        static_cast<unsigned char>(text[end + 2])));
                if (end < text.size() && text[end] != ' ' && !possessive &&
                    name_byte(static_cast<unsigned char>(text[end]))) continue;
            } else {
                if (std::isspace(previous)) continue;
                // Typed references consume complete words. Keep punctuation
                // boundaries for titles/topics and possessives for enclosing
                // grammar, without querying every letter of a long subject.
                if (end < text.size() && name_byte(previous) &&
                    name_byte(static_cast<unsigned char>(text[end])) &&
                    text[end] != '\'') continue;
            }
            // Prose titles can contain punctuation, quotes and non-ASCII
            // words. The scoped callback must accept the whole candidate;
            // the enclosing grammar decides where the capture ends.
            const auto source = std::string_view(text).substr(0, end);
            dfcn::translation_work_step();
            const auto resolve_capture = [&]() -> std::optional<std::string> {
                auto* session = active_resolution_session_;
                const std::uint64_t revision = context_revision_provider_
                    ? context_revision_provider_() : 0;
                const ResolutionSession::KeyView key{kind, source, revision};
                if (session) {
                    if (const auto known = session->callbacks.find(key);
                            known != session->callbacks.end()) return known->second;
                }
                const auto [call, inserted] = active_resolver_calls_.emplace(
                    ResolutionSession::Key{std::string(kind), std::string(source), revision});
                if (!inserted) {
                    if (session) ++session->cycle_revision;
                    if (dfcn::active_translation_work) ++dfcn::active_translation_work->cycle_revision;
                    return std::nullopt;
                }
                ResolverGuard guard{active_resolver_calls_, &*call};
                const size_t local_cycle = session ? session->cycle_revision : 0;
                const size_t shared_cycle = dfcn::active_translation_work
                    ? dfcn::active_translation_work->cycle_revision : 0;
                auto target = creature ? creature_name_resolver_(source)
                    : phrase_resolver_(source, kind);
                if (session && session->cycle_revision == local_cycle &&
                        (!dfcn::active_translation_work ||
                            dfcn::active_translation_work->cycle_revision == shared_cycle) &&
                        (context_revision_provider_ ? context_revision_provider_() : 0) == revision)
                    session->callbacks.emplace(*guard.key, target);
                return target;
            };
            auto translated = resolve_capture();
            if (!translated || translated->empty()) continue;
            results.push_back(std::make_shared<const ResultTree>(identifier,
                text.substr(0, end), std::move(*translated), text.substr(end),
                BindingMap{}, nullptr, nullptr, true));
        }
        return results;
    }

    std::optional<std::string> RulesetsManager::translate_tile_description(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            auto complete = [&](const std::string& source, const std::string& ns)
                    -> std::optional<std::string> {
                const auto results = resolve_namespace(source, ns, 0);
                const ResultTree* best = nullptr;
                for (const auto& result : results) {
                    if (!result->remaining.empty() || result->translated.empty()) continue;
                    if (!best || result->preferred_to(*best)) best = result.get();
                }
                return best ? std::optional<std::string>(best->translated) : std::nullopt;
            };
            const auto complete_tagged = [&](const std::string& source, const std::string& ns)
                    -> std::optional<std::string> {
                if (auto target = complete(source, ns)) return target;
                // Native RAW names retain item-tagger annotations. The tile
                // extension can consume them, but the comma-separated growth
                // reader deliberately uses the plural leaf namespace directly.
                // Resolve each field's known suffix tags without widening its
                // noun grammar or accepting a partially translated caption.
                std::string name = source, tags;
                while (name.ends_with(']')) {
                    const size_t at = name.rfind(" [");
                    if (at == std::string::npos) break;
                    const auto tag = complete(name.substr(at + 1),
                        "::item_tagger::tags::tag");
                    if (!tag) return std::nullopt;
                    tags.insert(0, " " + *tag);
                    name.resize(at);
                    while (!name.empty() && name.back() == ' ') name.pop_back();
                }
                if (tags.empty() || name.empty()) return std::nullopt;
                if (auto target = complete(name, ns)) return *target + tags;
                return std::nullopt;
            };
            const auto part_at = [&](size_t start, size_t end) {
                std::string part = text.substr(start, end - start);
                const size_t first = part.find_first_not_of(' ');
                return first == std::string::npos ? std::string{}
                    : part.substr(first, part.find_last_not_of(' ') - first + 1);
            };
            const auto growths = [&](std::string translated, size_t end)
                    -> std::optional<std::string> {
                if (end == text.size()) return translated;
                const auto separator = complete(", ", "::tiles::growth_separator");
                if (!separator) return std::nullopt;
                size_t start = end + 1;
                while (start < text.size()) {
                    const size_t comma = text.find(',', start);
                    end = comma == std::string::npos ? text.size() : comma;
                    // After the complete tile, every entry must be a growth.
                    // Do not reinterpret another terrain or a person as foliage.
                    auto target = complete_tagged(part_at(start, end), "::plants::growth::plural");
                    if (!target) return std::nullopt;
                    translated += *separator + *target;
                    if (end == text.size()) return translated;
                    start = end + 1;
                }
                return std::nullopt; // A trailing comma has no growth after it.
            };
            size_t comma = text.find(',');
            const size_t first_end = comma == std::string::npos ? text.size() : comma;
            // Native tree/sapling/shrub paths prepend name + ", " before the
            // plant description (PE 0xe7d749/0xe7f9b5/0xe7fb10). The first comma
            // is therefore not necessarily a growth boundary. Require the typed
            // name AND tree/shrub/sapling production before trying the name as a
            // terrain fragment, then parse any remaining growths normally. The
            // named-plant grammar excludes standalone foliage/growth nouns, so a
            // material followed by its growth list retains the ordinary route.
            while (comma != std::string::npos) {
                comma = text.find(',', comma + 1);
                const size_t end = comma == std::string::npos ? text.size() : comma;
                if (auto target = complete_tagged(part_at(0, end), "::tiles::named_plant"))
                    if (auto caption = growths(*target, end)) return caption;
            }
            if (auto target = complete_tagged(part_at(0, first_end), "::tiles")) {
                if (auto caption = growths(*target, first_end)) return caption;
            }
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_color(
            const std::string& text) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            // Color names such as copper/cardinal are not material/species names
            // in an appearance sentence. Use the existing reviewed color table.
            const auto results = resolve_namespace(text, "::color::name", 0);
            const ResultTree* best = nullptr;
            for (const auto& result : results) {
                if (!result->remaining.empty() || result->translated.empty()) continue;
                if (!best || result->preferred_to(*best)) best = result.get();
            }
            return best ? std::optional<std::string>(best->translated) : std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_appearance_term(
            const std::string& text, const std::string& context) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            const auto results = resolve_namespace(
                text, "::health::appearance::" + context, 0);
            for (const auto& result : results) {
                if (result->remaining.empty() && !result->translated.empty())
                    return result->translated;
            }
            return std::nullopt;
        });
    }

    std::optional<std::string> RulesetsManager::translate_anatomy(
            const std::string& text, bool tissue_suffix) const {
        dfcn::TranslationStateScope translation_scope;
        return scoped_rule_translation([&]() -> std::optional<std::string> {
            if (text.empty() || text.find_first_of(".;:!?\"()\n\r") != std::string::npos)
                return std::nullopt;
            auto complete = [&](const std::string& source, const std::string& ns)
                    -> std::optional<std::string> {
                const auto results = resolve_namespace(source, ns, 0);
                const ResultTree* best = nullptr;
                for (const auto& result : results) {
                    if (!result->remaining.empty() || result->translated.empty()) continue;
                    if (!best || result->preferred_to(*best)) best = result.get();
                }
                return best ? std::optional<std::string>(best->translated) : std::nullopt;
            };
            const auto complete_body = [&](const std::string& source)
                    -> std::optional<std::string> {
                // Complete RAW/INDIVIDUAL_NAME spellings own their meaning:
                // e.g. fourth finger is an anatomical name, not a generic
                // numbered finger. Only an otherwise unknown whole body
                // name can use 13345d0's positive-index fallback.
                if (auto part = complete(source, "::health::bodypart::bodypart_main"))
                    return part;
                // RAW STP expands the complete singular BODY/INDIVIDUAL_NAME
                // with one final s. Keep that operation inside the anatomy
                // grammar and require the whole singular name to resolve.
                if (auto part = complete(source, "::health::bodypart::stp_bodypart"))
                    return part;
                const size_t separator = source.find(' ');
                if (separator == std::string::npos) return std::nullopt;
                const auto ordinal = std::string_view(source).substr(0, separator);
                if (!ordinal.empty() && ordinal.front() >= '0' && ordinal.front() <= '9') {
                    // 52eb70(param3=false) spells 1..19 and emits ungrouped
                    // decimal digits plus the English ordinal suffix above
                    // that. Its BODY caller accepts only positive int32s.
                    // Validate the complete numeric token before the data
                    // grammar so #digits cannot admit 21th or a zero prefix.
                    if (ordinal.front() == '0') return std::nullopt;
                    std::uint32_t number = 0;
                    size_t digits = 0;
                    for (; digits < ordinal.size(); ++digits) {
                        const char ch = ordinal[digits];
                        if (ch < '0' || ch > '9') break;
                        const auto digit = static_cast<std::uint32_t>(ch - '0');
                        if (number > (INT32_MAX - digit) / 10) return std::nullopt;
                        number = number * 10 + digit;
                    }
                    if (number < 20 || ordinal.size() - digits != 2) return std::nullopt;
                    std::string_view suffix = "th";
                    const auto last_two = number % 100;
                    if (last_two < 11 || last_two > 13) {
                        if (number % 10 == 1) suffix = "st";
                        else if (number % 10 == 2) suffix = "nd";
                        else if (number % 10 == 3) suffix = "rd";
                    }
                    if (!matches_literal(ordinal.substr(digits), suffix)) return std::nullopt;
                }
                return complete(source, "::health::bodypart::numbered_bodypart");
            };
            std::vector<std::string> parts;
            size_t start = 0;
            while (start <= text.size()) {
                const size_t comma = text.find(',', start);
                const size_t end = comma == std::string::npos ? text.size() : comma;
                std::string part = text.substr(start, end - start);
                const size_t first = part.find_first_not_of(" \t");
                if (first == std::string::npos) return std::nullopt;
                part = part.substr(first, part.find_last_not_of(" \t") - first + 1);
                parts.push_back(std::move(part));
                if (comma == std::string::npos) break;
                start = comma + 1;
            }
            // DF appends tissue AFTER the owner chain. Resolve this through the
            // tissue namespace, not the body-part vocabulary: reversing all comma
            // fields would turn "finger, hand, skin" into "skin hand finger".
            std::string tissue;
            if (tissue_suffix && parts.size() > 1) {
                if (auto suffix = complete(", " + parts.back(), "::health::bodypart::main_tissue")) {
                    tissue = std::move(*suffix);
                    parts.pop_back();
                }
            }
            std::string translated;
            for (auto it = parts.rbegin(); it != parts.rend(); ++it) {
                auto part = complete_body(*it);
                // An injury may name a tissue on its own (skin, nail, etc.).
                // Only a single unqualified field can use this fallback.
                if (!part && tissue_suffix && parts.size() == 1 && text.find(',') == std::string::npos)
                    part = complete(*it, "::health::bodypart::tissue");
                if (!part) return std::nullopt;
                translated += *part;
            }
            return translated + tissue;
        });
    }

    /// 递归遍历目录，收集 .toml 文件并按排序顺序加载。
    ///
    /// 目录条目排序确保确定性加载顺序，匹配 Rust 参考实现 sorted_paths.sort() 的行为。
    ///
    /// @param base         规则集根目录
    /// @param curr         当前遍历目录
    /// @param visited_root 记录已访问的根文件（确保唯一）
    void RulesetsManager::parse_dir(const std::filesystem::path& base, const std::filesystem::path& curr,
                std::optional<std::string>& visited_root, bool extension) {
        LOGGERMANAGER.getLogger()->info("Loading rulesets from: {}", curr.string());

        // 收集并排序目录条目，确保确定性加载顺序（匹配 Rust sorted_paths.sort()）
        std::vector<std::filesystem::path> paths;
        for (const auto& entry : std::filesystem::directory_iterator(curr)) {
            paths.push_back(entry.path());
        }
        std::sort(paths.begin(), paths.end());

        for (const auto& path : paths) {
            if (std::filesystem::is_directory(path)) {
                parse_dir(base, path, visited_root, extension);
            } else if (path.extension() == ".toml") {
                parse_file(base, path, visited_root, extension);
            }
        }
    }

    /// 解析单个 TOML 规则集文件。
    ///
    /// 加载流程：
    ///   1. 读取 [base] 字段（可选），验证与文件路径的一致性
    ///   2. 遍历 [[rulesets]] 数组，为每个规则集构建规则
    ///   3. 解析 [rulesets.rules] 表，将每条 key = value 转换为 (Tokens, Tokens)
    ///   4. 校验规则的有效性（重复引用、翻译模板中引用未在原文出现）
    ///
    /// @param base         规则集根目录
    /// @param path         当前 TOML 文件路径
    /// @param visited_root 记录已访问的根文件
    /// @throws std::runtime_error 文件格式错误或校验失败时抛出
    void RulesetsManager::parse_file(const std::filesystem::path& base, const std::filesystem::path& path,
                    std::optional<std::string>& visited_root, bool extension) {
        auto result = toml::parse_file(path.u8string());

        if (!result) {
            std::ostringstream error;
            error << result.error();
            throw std::runtime_error("TOML parsing failed in " + path.string() + ": " + error.str());
        }

        const toml::table& toml_data = result.table();

        // [base] 字段（可选）：无 base 的文件为根文件，全局只能有一个
        std::optional<std::string> file_base = toml_data["base"].value<std::string>();

        if (extension && (!file_base || file_base->empty())) {
            throw std::runtime_error("Extension rulesets must declare a non-root base: " + path.string());
        }

        if (!file_base.has_value()) {
            if (visited_root.has_value()) {
                throw std::runtime_error("Multiple root bases found: " + visited_root.value() +
                                        " and " + path.string());
            }
            visited_root = path.string();
        }

        std::string base_namespace = file_base.value_or("");

        // 验证 base_namespace 与文件路径一致，防止 TOML 作者误写 base 字段
        {
            auto relative = std::filesystem::relative(path, base);

            std::vector<std::string> parts;
            for (const auto& component : relative) {
                parts.push_back(component.string());
            }

            // 去除文件名中的 .toml 后缀
            if (!parts.empty() && parts.back().ends_with(".toml")) {
                parts.back() = parts.back().substr(0, parts.back().size() - 5);
            }

            // data/runtime/rulesets/zh-Hans/index.toml 是目录的默认规则文件，不贡献路径段
            if (!parts.empty() && parts.back() == "index") {
                parts.pop_back();
            }

            // 用 :: 连接各路径段作为期望的命名空间
            std::string expected;
            for (size_t i = 0; i < parts.size(); ++i) {
                if (i > 0) expected += "::";
                expected += parts[i];
            }

            if (base_namespace != expected) {
                throw std::runtime_error(
                    "Base namespace mismatch in " + path.string() +
                    ": expected \"" + expected + "\", found \"" + base_namespace + "\""
                );
            }
        }

        // [[rulesets]] 数组
        if (!toml_data.contains("rulesets")) {
            return; // 允许空文件（无规则集）
        }
        auto rulesets_array = toml_data["rulesets"].as_array();
        if (!rulesets_array) {
            throw std::runtime_error("rulesets must be an array in " + path.string());
        }

        for (const auto& ruleset_entry : *rulesets_array) {
            if (!ruleset_entry.is_table()) {
                throw std::runtime_error("Non-table entry in rulesets array in " + path.string());
            }
            const auto& tbl = *ruleset_entry.as_table();

            std::string name_suffix;
            bool optional = false;

            // [rulesets.name]（可选）
            name_suffix = tbl["name"].value_or("");

            // [rulesets.optional]（默认 false）
            optional = tbl["optional"].value_or(false);

            // 构建完整的命名空间标识符
            std::string identifier = "::";
            if (!base_namespace.empty()) {
                identifier += base_namespace;
                if (!name_suffix.empty()) {
                    identifier += "::" + name_suffix;
                }
            } else {
                if (!name_suffix.empty()) {
                    identifier += name_suffix;
                }
            }

            validate_identifier_format(identifier);

            auto& rules = rulesets_[identifier];
            RuleSet additions;
            auto& parsed_rules = extension ? additions : rules;

            // optional 规则集：插入空匹配回退规则
            if (optional) {
                parsed_rules.emplace_back(
                    Tokens{Token{Type::Literal, ""}},
                    Tokens{Token{Type::Literal, ""}}
                );
            }

            // [rulesets.rules] 表
            if (!tbl.contains("rules")) {
                if (extension && !additions.empty())
                    rules.insert(rules.end(), std::make_move_iterator(additions.begin()),
                        std::make_move_iterator(additions.end()));
                continue; // 允许无规则
            }
            auto rules_table = tbl["rules"].as_table();
            if (!rules_table) {
                throw std::runtime_error("rules must be a table in " + path.string());
            }

            for (const auto& [orig_str, trans_val] : *rules_table) {
                if (auto trans_node = trans_val.as_string()) {
                    std::string trans_str = trans_node->get();

                    // 解析原文和译文为 Token 序列
                    Tokens orig_tokens = parse_tokens(base_namespace, std::string(orig_str));
                    Tokens trans_tokens = parse_tokens(base_namespace, trans_str);

                    // 校验：原文中不能有重复引用
                    std::set<std::string> orig_refs;
                    for (const auto& tok : orig_tokens) {
                        if (tok.type == Type::Reference) {
                            if (!orig_refs.insert(tok.value).second) {
                                throw std::runtime_error(
                                    "Original entry \"" + std::string(orig_str) +
                                    "\" has duplicate reference: " + tok.value
                                    );
                            }
                        }
                    }

                    // 校验：译文中的引用必须全部出现在原文中
                    for (const auto& tok : trans_tokens) {
                        if (tok.type == Type::Reference) {
                            if (orig_refs.find(tok.value) == orig_refs.end()) {
                                throw std::runtime_error(
                                    "Translated reference \"" + tok.value +
                                    "\" not found in original: " + std::string(orig_str)
                                    );
                            }
                        }
                    }

                    // 校验：Placeholder（@ 前缀）后的 token 必须是 Literal
                    for (size_t i = 0; i < orig_tokens.size(); ++i) {
                        if (orig_tokens[i].type == Type::Reference && is_placeholder(orig_tokens[i].value)) {
                            if (i + 1 < orig_tokens.size() && orig_tokens[i + 1].type != Type::Literal) {
                                throw std::runtime_error(
                                    "Placeholder '" + orig_tokens[i].value +
                                    "' must be followed by a Literal token in: " + std::string(orig_str));
                            }
                        }
                    }

                    // 插入规则（保持插入顺序，匹配 Rust IndexMap 行为）
                    parsed_rules.emplace_back(std::move(orig_tokens), std::move(trans_tokens));
                }
            }
            if (extension) {
                // Later packages override earlier equal productions. Keep all
                // other base grammar and place complete extension literals
                // before delegate/template rules in the same namespace.
                std::stable_partition(additions.begin(), additions.end(), [](const auto& rule) {
                    return !rule.first.empty() && std::all_of(rule.first.begin(), rule.first.end(),
                        [](const Token& token) { return token.type == Type::Literal && !token.value.empty(); });
                });
                rules.insert(rules.begin(), std::make_move_iterator(additions.begin()),
                    std::make_move_iterator(additions.end()));
            }
        }
    }

    /// 验证所有规则中的非 Replacer 引用是否指向已加载的规则集。
    ///
    /// 遍历所有规则的所有 original Token，确保每个 Reference
    /// （% Replacer 除外）在 rulesets_ 中都能找到对应的规则集。
    ///
    /// @throws std::runtime_error 引用无法解析时抛出
    void RulesetsManager::validate_references() const {
        for (const auto& [name, ruleset] : rulesets_) {
            for (const auto& [orig, _] : ruleset) {
                for (const auto& token : orig) {
                    if (token.type == Type::Reference && token.value.starts_with("@bt_")) {
                        const auto scope_at = token.value.find('|');
                        if (scope_at != std::string::npos) {
                            const auto scope = token.value.substr(scope_at + 1);
                            if (!scope.starts_with("::") || !rulesets_.contains(scope))
                                throw std::runtime_error("Capture vocabulary not found in " + name + ": " + scope);
                        }
                    }
                    if (token.type == Type::Reference && token.value[0] != '%' && token.value[0] != '@' && token.value[0] != '#') {
                        if (!rulesets_.contains(token.value))
                            throw std::runtime_error("Reference not found in " + name + ": " + token.value);
                    }
                }
            }
        }
    }

    void RulesetsManager::rebuild_rule_prefix_indexes() {
        decltype(rule_prefix_indexes_) indexes;
        decltype(literal_leaf_rules_) leaves;
        for (const auto& [identifier, rules] : rulesets_) {
            auto& index = indexes[identifier];
            for (size_t ordinal = 0; ordinal < rules.size(); ++ordinal) {
                const auto& source = rules[ordinal].first;
                if (source.empty() || source.front().type != Type::Literal ||
                    source.front().value.empty()) {
                    index.unrestricted.push_back(ordinal);
                    continue;
                }
                // Use exactly the ASCII case folding of ci_char_equal.
                // UTF-8 bytes and punctuation remain distinct, even if the
                // bounded byte prefix ends inside a multibyte character.
                index.literal_starts[RulePrefixIndex::literal_prefix(
                    source.front().value)].push_back(ordinal);
            }
            // A dynamic owner can add spellings absent from the literal
            // table. Nullable, mixed and large vocabularies retain their
            // ordinary parser; skipping this optional filter loses no rule.
            constexpr size_t max_leaf_rules = 128;
            if (!rules.empty() && rules.size() <= max_leaf_rules &&
                external_prefix_kind(identifier).empty() &&
                std::all_of(rules.begin(), rules.end(), [](const auto& rule) {
                    return rule.first.size() == 1 &&
                        rule.first.front().type == Type::Literal &&
                        !rule.first.front().value.empty();
                })) {
                auto& words = leaves[identifier];
                words.reserve(rules.size());
                for (const auto& rule : rules) words.push_back(rule.first.front().value);
            }
        }
        rule_prefix_indexes_ = std::move(indexes);
        literal_leaf_rules_ = std::move(leaves);
        // Build a conservative closure from fixed leaves upwards. A native
        // owner, opaque placeholder, number/replacer special form or recursive
        // component keeps its original contextual policy. This also excludes
        // the dwarf-language preservation callback even when that mode is off.
        std::unordered_map<std::string, std::vector<std::string>> dependents;
        std::unordered_map<std::string, size_t> unresolved;
        std::vector<std::string> ready;
        for (const auto &[identifier, rules] : rulesets_) {
            if (!external_prefix_kind(identifier).empty() || identifier == "::dwarf_language" ||
                    identifier.starts_with("::dwarf_language::")) continue;
            std::unordered_set<std::string> dependencies;
            bool fixed = true;
            for (const auto &[source, target] : rules) {
                (void)target;
                for (const auto &token : source) {
                    if (token.type == Type::Literal) continue;
                    if (!token.value.starts_with("::") || !rulesets_.contains(token.value)) {
                        fixed = false;
                        break;
                    }
                    dependencies.insert(token.value);
                }
                if (!fixed) break;
            }
            if (!fixed) continue;
            unresolved.emplace(identifier, dependencies.size());
            for (const auto &dependency : dependencies) dependents[dependency].push_back(identifier);
            if (dependencies.empty()) ready.push_back(identifier);
        }
        context_free_namespaces_.clear();
        for (size_t at = 0; at < ready.size(); ++at) {
            const auto &identifier = ready[at];
            context_free_namespaces_.insert(identifier);
            if (const auto found = dependents.find(identifier); found != dependents.end())
                for (const auto &dependent : found->second)
                    if (--unresolved.find(dependent)->second == 0) ready.push_back(dependent);
        }
    }

    bool RulesetsManager::rule_literals_fit(std::string_view text, const Tokens& tokens) const {
        size_t at = 0;
        for (const auto& token : tokens) {
            dfcn::translation_work_step();
            if (token.type == Type::Literal) {
                if (token.value.empty()) continue;
                const auto found = find_literal_position(text.substr(at), token.value);
                if (!found) return false;
                at += *found + token.value.size();
                continue;
            }
            const auto leaf = literal_leaf_rules_.find(token.value);
            if (leaf == literal_leaf_rules_.end()) continue;
            size_t earliest_end = std::string_view::npos;
            for (const auto word : leaf->second) {
                dfcn::translation_work_step();
                const auto found = find_literal_position(text.substr(at), word);
                if (found) earliest_end = std::min(earliest_end, at + *found + word.size());
            }
            if (earliest_end == std::string_view::npos) return false;
            at = earliest_end;
        }
        // Namespace results may consume only a prefix. Unknown references
        // may also be optional, so neither requires an extra source byte.
        return true;
    }

    // -------------------------------------------------------------------------
    // 翻译核心
    // -------------------------------------------------------------------------

    void RulesetsManager::compact_candidates(std::vector<Candidate>& candidates,
            const Tokens& target_tokens, size_t source_size) {
        const bool target_literal = std::any_of(target_tokens.begin(), target_tokens.end(),
            [](const Token& token) { return token.type == Type::Literal && !token.value.empty(); });
        for (auto& candidate : candidates) {
            candidate.external_capture_bytes = 0;
            candidate.tree_weight = 0;
            candidate.selection_flags = 0;
            bool target_nonempty = target_literal;
            const size_t consumed = source_size - candidate.remaining.size();
            for (const auto& [identifier, child] : candidate.results) {
                candidate.external_capture_bytes += child->external_capture_bytes;
                candidate.tree_weight += child->tree_weight;
                candidate.selection_flags |= child->selection_flags() & 15U;
                if (child->complete_creature && child->matched.size() == consumed)
                    candidate.selection_flags |= 16U;
                if (!child->translated.empty() && std::any_of(target_tokens.begin(),
                        target_tokens.end(), [&](const Token& token) {
                            return token.type == Type::Reference && token.value == identifier;
                        })) target_nonempty = true;
            }
            if (target_nonempty) candidate.selection_flags |= 32U;
        }
        compact_ordered_frontier(candidates, [](const Candidate& candidate) {
            return FrontierKey{candidate.remaining.size(), candidate.selection_flags};
        }, [](const Candidate& a, const Candidate& b) {
            if (a.external_capture_bytes != b.external_capture_bytes)
                return a.external_capture_bytes < b.external_capture_bytes;
            return a.tree_weight < b.tree_weight;
        });
    }

    RulesetsManager::LruMemoMap::Value RulesetsManager::compact_results(
            LruMemoMap::Value results) {
        compact_ordered_frontier(results, [](const auto& tree) {
            return FrontierKey{tree->remaining.size(), tree->selection_flags()};
        }, [](const auto& a, const auto& b) { return a->preferred_to(*b); });
        return results;
    }

    /// 获取各匹配前缀的首条路径和最佳路径，保留不同的语义选择资格。
    /// @param partial_match true 时返回部分匹配结果，false 时仅返回完整匹配
    std::vector<std::shared_ptr<const RulesetsManager::ResultTree>> RulesetsManager::find_translations(const std::string& text, bool partial_match) const {
        auto results = resolve_namespace(text, "::", 0);
        if (partial_match) return results;
        std::vector<std::shared_ptr<const ResultTree>> full;
        for (auto& r : results)
            if (r->remaining.empty()) full.push_back(std::move(r));
        return full;
    }

    /// 在指定标识符命名空间内递归求解各匹配前缀的语义选择前沿。
    ///
    /// 算法步骤：
    ///   0. 如果是 Replacer 引用（% 前缀），委托给 resolve_replacer
    ///   1. 检查记忆化缓存，命中则直接返回
    ///   2. 查找当前标识符对应的规则集
    ///   3. 遍历每条规则（OR 分支），逐 Token 匹配并合并同状态候选（AND 序列）
    ///      - Literal: 大小写不敏感前缀匹配
    ///      - Reference: 递归调用 resolve_namespace，绑定子结果
    ///   4. 对每个成功匹配的 Candidate 构建 ResultTree
    ///   5. 缓存结果到 memo_cache_（形成 DAG 共享边）
    ///
    /// 循环引用：加载时由 analyze_from_root() 预检测，
    /// 翻译时跳过已确认的循环规则，并拒绝同上下文的活动子问题重入。
    ///
    /// @param text       待翻译的剩余文本
    /// @param identifier 当前命名空间标识符
    /// @param level      递归深度（仅用于调试输出）
    /// @return           保留首条路径与最佳路径的翻译结果列表
    std::vector<std::shared_ptr<const RulesetsManager::ResultTree>> RulesetsManager::resolve_namespace(
        const std::string& text,
        const std::string& identifier,
        size_t level
    ) const {
        dfcn::TranslationWorkFrame translation_work_frame(identifier, text);
        const bool preserve_native_language = native_language_original_ &&
            (identifier == "::dwarf_language" ||
             identifier.starts_with("::dwarf_language::"));
        ResolutionSession local_session;
        std::shared_ptr<ResolutionSession> shared_session;
        auto* previous_session = active_resolution_session_;
        if (!previous_session) {
            if (dfcn::active_translation_work) {
                auto& retained = dfcn::active_translation_work->parser_sessions[this];
                if (!retained) retained = std::make_shared<ResolutionSession>();
                shared_session = std::static_pointer_cast<ResolutionSession>(retained);
                active_resolution_session_ = shared_session.get();
            } else active_resolution_session_ = &local_session;
        }
        struct SessionGuard {
            ResolutionSession*& active;
            ResolutionSession* previous;
            ~SessionGuard() { active = previous; }
        } session_guard{active_resolution_session_, previous_session};
        auto& session = *active_resolution_session_;
        // Freeze this query's identity context for both lookup and insertion.
        // A nested owner scope can restore a different context before return;
        // it must never put this query's candidate under that restored key.
        const bool context_free = context_free_namespaces_.contains(identifier);
        const std::uint64_t context_revision = !context_free && context_revision_provider_
            ? context_revision_provider_() : 0;
        const ResolutionSession::KeyView query{
            identifier, text, context_revision};
        if (const auto cached = session.memo.find(query); cached != session.memo.end())
            return cached->second;
        // Completed proofs are safe even during a callback: they need no
        // unfinished recursive owner to resolve their source again.
        if (auto outer_it = memo_cache_.find(identifier);
                (context_free || !dfcn::dfhack_world_read_attempt) && outer_it != memo_cache_.end()) {
            if (auto* cached = outer_it->second.find(text, context_revision)) {
                session.memo.emplace(ResolutionSession::Key{
                    identifier, text, context_revision}, *cached);
                return *cached;
            }
        }
        const auto [active_query, inserted] = session.active.insert(query);
        if (!inserted) {
            ++session.cycle_revision;
            if (dfcn::active_translation_work) ++dfcn::active_translation_work->cycle_revision;
            return {};
        }
        struct QueryGuard {
            ResolutionSession& session;
            const ResolutionSession::KeyView* key;
            ~QueryGuard() { session.active.erase(*key); }
        } query_guard{session, &*active_query};
        const size_t cycle_revision = session.cycle_revision;
        const size_t shared_cycle_revision = dfcn::active_translation_work
            ? dfcn::active_translation_work->cycle_revision : 0;
        const auto complete_query = [&](LruMemoMap::Value results) {
            results = compact_results(std::move(results));
            // Only closed searches prove a miss. A suppressed circular
            // dependency must not publish an incomplete parse as final.
            const bool stable = session.cycle_revision == cycle_revision &&
                (!dfcn::active_translation_work ||
                    dfcn::active_translation_work->cycle_revision == shared_cycle_revision) &&
                (context_free || (context_revision_provider_ ? context_revision_provider_() : 0) ==
                    context_revision) && !dfcn::translation_work_exhausted();
            if (stable) {
                session.memo.emplace(ResolutionSession::Key{
                    identifier, text, context_revision}, results);
                if (context_free || !dfcn::dfhack_world_read_attempt)
                    memo_cache_[identifier].insert(text, results, context_revision);
            }
            return results;
        };

        // === 1. 处理 Replacer 引用（% 前缀）===
        if (!identifier.empty() && identifier[0] == '%') {
            auto results = resolve_replacer(text, identifier, level);
            return complete_query(std::move(results));
        }

        auto all_results = resolve_external_prefixes(text, identifier);
        std::set<size_t> resolved_external_lengths;
        for (const auto& result : all_results)
            resolved_external_lengths.insert(result->matched.size());

        // === 2. 查找规则集 ===
        auto ruleset_it = rulesets_.find(identifier);
        if (ruleset_it == rulesets_.end()) {
            return complete_query(std::move(all_results));
        }
        const auto& rules = ruleset_it->second;

        const auto prefix_it = rule_prefix_indexes_.find(identifier);
        const RulePrefixIndex* prefix_index = prefix_it == rule_prefix_indexes_.end()
            ? nullptr : &prefix_it->second;
        const std::vector<size_t>* literal_rules = nullptr;
        std::vector<size_t> merged_literals;
        if (prefix_index && !text.empty()) {
            const auto prefix = RulePrefixIndex::literal_prefix(text);
            std::array<const std::vector<size_t>*, RulePrefixIndex::maximum_prefix_bytes> buckets{};
            size_t count = 0;
            for (size_t length = 1; length <= prefix.size(); ++length) {
                const auto found = prefix_index->literal_starts.find(
                    std::string_view(prefix).substr(0, length));
                if (found != prefix_index->literal_starts.end())
                    buckets[count++] = &found->second;
            }
            if (count == 1) literal_rules = buckets[0];
            else if (count > 1) {
                size_t size = 0;
                for (size_t i = 0; i < count; ++i) size += buckets[i]->size();
                merged_literals.reserve(size);
                for (size_t i = 0; i < count; ++i)
                    merged_literals.insert(merged_literals.end(),
                        buckets[i]->begin(), buckets[i]->end());
                // Prefix lengths do not define precedence. Restore source
                // ordinals before merging with unrestricted reference rules.
                std::sort(merged_literals.begin(), merged_literals.end());
                literal_rules = &merged_literals;
            }
        }
        size_t unrestricted_at = 0, literal_at = 0, linear_at = 0;
        // Merge original ordinals so prefix pruning cannot change equal-weight
        // results, reference precedence, or the order of prefix alternatives.
        for (;;) {
            dfcn::translation_work_step();
            size_t ordinal;
            if (!prefix_index) {
                // A failed/incomplete reload can leave no index. Retain the
                // original linear behavior instead of omitting any rule.
                if (linear_at == rules.size()) break;
                ordinal = linear_at++;
            } else {
                const size_t unrestricted = unrestricted_at < prefix_index->unrestricted.size()
                    ? prefix_index->unrestricted[unrestricted_at] : rules.size();
                const size_t literal = literal_rules && literal_at < literal_rules->size()
                    ? (*literal_rules)[literal_at] : rules.size();
                if (unrestricted == rules.size() && literal == rules.size()) break;
                if (unrestricted < literal) {
                    ordinal = unrestricted;
                    ++unrestricted_at;
                } else {
                    ordinal = literal;
                    ++literal_at;
                }
            }
            const auto& [orig_tokens, trans_tokens] = rules[ordinal];
            // The full leading literal is a necessary condition too. Reject
            // impossible dictionary entries before expanding parse branches.
            if (!orig_tokens.empty() && orig_tokens.front().type == Type::Literal &&
                !orig_tokens.front().value.empty() &&
                !matches_literal(text, orig_tokens.front().value)) continue;
            if (!rule_literals_fit(text, orig_tokens)) continue;
            dfcn::translation_work_step();

            // 跳过加载时已确认的循环规则（O(log n) 查表）
            if (!cyclic_rule_signatures_.empty() && cyclic_rule_signatures_.contains({identifier, orig_tokens})) continue;

            // === 3.1 逐 Token 匹配（AND 序列）—— 生成 Candidate 列表 ===
            std::vector<Candidate> candidates{Candidate({}, text)};

            for (size_t ti = 0; ti < orig_tokens.size(); ++ti) {
                dfcn::translation_work_step();
                const auto& token = orig_tokens[ti];
                if (candidates.empty()) break;
                std::vector<Candidate> next_candidates;

                if (token.type == Type::Literal) {
                    for (auto& candidate : candidates) {
                        dfcn::translation_work_step();
                        // 字面文本：大小写不敏感前缀匹配
                        std::string_view pattern = token.value;
                        std::string_view remaining_text = candidate.remaining;
                        if (matches_literal(remaining_text, pattern)) {
                            std::string new_remaining(remaining_text.substr(pattern.size()));
                            next_candidates.emplace_back(std::move(candidate.results), std::move(new_remaining));
                        }
                    }
                } else if (is_placeholder(token.value)) {
                    // Placeholder（@ 前缀）：捕获文本并原样穿透输出。
                    // 加载时已保证后面若有 token 则必为 Literal，见 parse_file()。
                    const auto scope_at = token.value.starts_with("@bt_")
                        ? token.value.find('|') : std::string::npos;
                    const std::string_view capture_scope = scope_at == std::string::npos
                        ? std::string_view{} : std::string_view(token.value).substr(scope_at + 1);
                    const bool story_identity = capture_scope.starts_with("::subscribed_books::") &&
                        (capture_scope.ends_with("::person") ||
                         capture_scope.ends_with("::plain_person") ||
                         capture_scope.ends_with("::place") ||
                         capture_scope.ends_with("::site") ||
                         capture_scope.ends_with("::entity") ||
                         capture_scope.ends_with("::speaker") ||
                         capture_scope.ends_with("::race") ||
                         capture_scope.ends_with("::profession") ||
                         capture_scope.ends_with("::role") ||
                         capture_scope.ends_with("::office") ||
                         capture_scope.ends_with("::deity"));
                    const auto capture_tree = [&](const std::string &captured) {
                        std::string translated = captured;
                        if (scope_at != std::string::npos) {
                            const auto results = resolve_namespace(captured,
                                token.value.substr(scope_at + 1), level + 1);
                            const ResultTree* best = nullptr;
                            for (const auto &result : results)
                                if (result->remaining.empty() && !result->translated.empty() &&
                                        (!best || result->preferred_to(*best))) best = result.get();
                            if (best) translated = best->translated;
                        }
                        const bool changed = translated != captured;
                        return std::make_shared<const ResultTree>(token.value, captured,
                            std::move(translated), "", BindingMap{}, nullptr, nullptr,
                            changed || token.value.starts_with("@bt_"));
                    };
                    for (auto& candidate : candidates) {
                        dfcn::translation_work_step();
                        // A story identity is a field inside a sentence. A
                        // later "was a follower of" must not capture a whole
                        // character introduction as the follower's name.
                        // Book titles and other prose-valued slots keep their
                        // own grammar, including embedded punctuation.
                        size_t capture_end = candidate.remaining.size();
                        if (story_identity) {
                            for (size_t at = 0; at < candidate.remaining.size(); ++at) {
                                const char ch = candidate.remaining[at];
                                if (ch == '\n' || ch == '\r') {
                                    capture_end = at;
                                    break;
                                }
                                if (ch != '.' && ch != '!' && ch != '?') continue;
                                size_t next = at + 1;
                                while (next < candidate.remaining.size() &&
                                        (candidate.remaining[next] == '"' ||
                                         candidate.remaining[next] == '\'' ||
                                         candidate.remaining[next] == ')')) ++next;
                                if (next == candidate.remaining.size() || std::isspace(
                                        static_cast<unsigned char>(candidate.remaining[next]))) {
                                    capture_end = at;
                                    break;
                                }
                            }
                        }
                        if (ti + 1 < orig_tokens.size()) {
                            // Existing @ slots retain their first-delimiter
                            // semantics. Authored extension prose can opt into
                            // alternatives for a multiword name before
                            // a translated title with an @bt_ slot.
                            const auto& next_lit = orig_tokens[ti + 1];
                            const bool alternatives = token.value.starts_with("@bt_") &&
                                !next_lit.value.empty();
                            size_t search_at = 0;
                            while (search_at <= candidate.remaining.size()) {
                                auto pos = find_literal_position(
                                    std::string_view(candidate.remaining).substr(search_at), next_lit.value);
                                if (!pos) break;
                                *pos += search_at;
                                if (*pos > capture_end) break;
                                dfcn::translation_work_step();
                                std::string captured = candidate.remaining.substr(0, *pos);
                                std::string rem = candidate.remaining.substr(
                                    *pos + next_lit.value.size());
                                auto new_results = candidate.results;
                                new_results.emplace_back(token.value, capture_tree(captured));
                                next_candidates.emplace_back(
                                    std::move(new_results), std::move(rem));
                                if (!alternatives) break;
                                search_at = *pos + std::max<size_t>(1, next_lit.value.size());
                            }
                        } else {
                            // 情况 B：最后一个 token → 消费全部剩余文本
                            if (capture_end < candidate.remaining.size()) continue;
                            auto new_results = candidate.results;
                            new_results.emplace_back(token.value, capture_tree(candidate.remaining));
                            next_candidates.emplace_back(
                                std::move(new_results), "");
                        }
                    }
                    // 仅在确有候选存活时跳过已消费的 Literal；
                    // 若 delimiter 未找到（所有候选死于 placeholder），则不推进 ti，
                    // 由循环顶部 candidates.empty() break 安全退出。
                    if (ti + 1 < orig_tokens.size() && !next_candidates.empty()) ti++;
                } else if (is_builtin(token.value)) {
                    // Builtin token（# 前缀）：内联匹配，不递归。
                    // #digits: 匹配首部连续 ASCII 数字，原样穿透。
                    for (auto& candidate : candidates) {
                        dfcn::translation_work_step();
                        std::string matched;
                        for (char ch : candidate.remaining) {
                            if ((matched.size() & 255) == 0) dfcn::translation_work_step();
                            if (!std::isdigit(static_cast<unsigned char>(ch))) break;
                            matched.push_back(ch);
                        }
                        if (matched.empty()) continue;

                        std::string remaining = candidate.remaining.substr(matched.size());
                        auto new_results = candidate.results;
                        new_results.emplace_back(token.value,
                            std::make_shared<const ResultTree>(
                                token.value, matched, matched, remaining, BindingMap{}));
                        next_candidates.emplace_back(
                            std::move(new_results), std::move(remaining));
                    }
                } else {
                    for (auto& candidate : candidates) {
                        dfcn::translation_work_step();
                        // A following literal bounds this field. Passing the
                        // entire tail to a material/person/title callback first
                        // makes it explore later sentences that the enclosing
                        // rule can never consume as this reference. Keep every
                        // possible delimiter and the child's original rule order.
                        const std::string* delimiter = ti + 1 < orig_tokens.size() &&
                            orig_tokens[ti + 1].type == Type::Literal &&
                            !orig_tokens[ti + 1].value.empty()
                            ? &orig_tokens[ti + 1].value : nullptr;
                        size_t field_end = candidate.remaining.size();
                        if (delimiter) {
                            std::optional<size_t> last;
                            for (size_t begin = 0; begin <= candidate.remaining.size();) {
                                const auto found = find_literal_position(
                                    std::string_view(candidate.remaining).substr(begin), *delimiter);
                                if (!found) break;
                                last = begin + *found;
                                begin = *last + 1;
                            }
                            if (!last) continue;
                            field_end = *last;
                        }
                        auto sub_results = delimiter
                            ? resolve_namespace(candidate.remaining.substr(0, field_end), token.value, level + 1)
                            : resolve_namespace(candidate.remaining, token.value, level + 1);

                        // 为每个子结果创建新的 Candidate 分支
                        for (auto& sub_result : sub_results) {
                            dfcn::translation_work_step();
                            const size_t consumed = field_end - sub_result->remaining.size();
                            const auto remaining = std::string_view(candidate.remaining).substr(consumed);
                            if (delimiter && !matches_literal(remaining, *delimiter)) continue;
                            std::string remaining_copy(remaining);
                            auto new_results = candidate.results;
                            new_results.emplace_back(sub_result->identifier, std::move(sub_result));
                            next_candidates.emplace_back(std::move(new_results), std::move(remaining_copy));
                        }
                    }
                }
                compact_candidates(next_candidates, trans_tokens, text.size());
                candidates = std::move(next_candidates);
            }

            // === 3.2 为每个存活的 Candidate 构建 ResultTree ===
            for (auto& candidate : candidates) {
                dfcn::translation_work_step();
                std::string matched = text.substr(0, text.size() - candidate.remaining.size());
                // The common resolver already supplied this exact typed
                // span. Retain shorter alternatives for the enclosing grammar,
                // but do not let an older literal sense win on equal length.
                if (resolved_external_lengths.contains(matched.size())) continue;

                // Resolve the usual grammar first, then retain the actual
                // matched bytes, including case and accents. The identity
                // origin path also preserves each byte's original styling.
                std::string translated_str = preserve_native_language ? matched :
                    build_translated(trans_tokens, candidate.results);
                // The owner records this recognized raw span as a complete
                // native-language field. Its return value never changes the
                // preserved spelling; detached caption parsers have no owner.
                if (preserve_native_language && !matched.empty() && phrase_resolver_)
                    phrase_resolver_(matched, "native_language_original");

                auto result = std::make_shared<const ResultTree>(
                    identifier,
                    std::move(matched),
                    std::move(translated_str),
                    std::move(candidate.remaining),
                    std::move(candidate.results), &orig_tokens, &trans_tokens
                );
                all_results.push_back(std::move(result));
            }
        }

        // === 4. 缓存结果 — 形成 DAG 边，共享子问题可复用 ===
        return complete_query(std::move(all_results));
    }

    /// 将 Replacer 引用（% 前缀标识符）解析为翻译结果。
    ///
    /// 当前仅支持 item_designation：
    ///   匹配物品标记（品质符号、磨损标记、括号等），
    ///   剥离标记后委托到引用命名空间翻译内部文本，最后恢复标记包装。
    ///
    /// 完整的 Replacer 实现见 reference/replacer/item_designation.rs 中的 Rust 代码。
    std::vector<std::shared_ptr<const RulesetsManager::ResultTree>> RulesetsManager::resolve_replacer(
        const std::string& text,
        const std::string& identifier,
        size_t level
    ) const {
        // 解析格式：%name:base_ns 或 %name:base_ns:config
        size_t first_colon = identifier.find(':');
        if (first_colon == std::string::npos) return {};

        std::string replacer_name = identifier.substr(1, first_colon - 1);
        std::string rest = identifier.substr(first_colon + 1);

        // 提取 base_ns 和可选的 config
        size_t second_colon = rest.find(':');
        std::string base_ns = (second_colon != std::string::npos)
            ? rest.substr(0, second_colon) : rest;
        std::string config = (second_colon != std::string::npos)
            ? rest.substr(second_colon + 1) : std::string{};

        if (replacer_name == "item_designation") {
            std::string reference = config.empty()
                ? to_canonical_identifier(base_ns, "")
                : to_canonical_identifier(config, base_ns);
            std::vector<std::shared_ptr<const ResultTree>> results;

            // 对每种可能的物品标记（无标记、"("、"{...}"、"$...$" 等），
            // 剥离标记 → 翻译内部文本 → 恢复标记
            for (const auto& [prefix, suffix] : dfcn::match_item_designation_prefixes(text)) {
                dfcn::translation_work_step();
                std::string inner_text = text.substr(prefix.size());
                auto inner_results = resolve_namespace(inner_text, reference, level + 1);

                for (auto& inner : inner_results) {
                    dfcn::translation_work_step();
                    // 内部翻译的剩余文本必须以预期后缀开头
                    if (!inner->remaining.starts_with(suffix)) continue;

                    std::string remaining = inner->remaining.substr(suffix.size());
                    std::string matched = text.substr(0, text.size() - remaining.size());
                    std::string translated =
                        dfcn::display_item_designation_wrapper(prefix, false) +
                        inner->translated +
                        dfcn::display_item_designation_wrapper(suffix, true);

                    BindingMap children;
                    children.emplace_back("item", inner);

                    results.push_back(std::make_shared<const ResultTree>(
                        identifier,
                        std::move(matched),
                        std::move(translated),
                        std::move(remaining),
                        std::move(children)
                    ));
                }
            }
            return results;
        }

        // 未知 Replacer 类型：返回空结果
        return {};
    }

    // -----------------------------------------------------------------------------
    // 标识符处理
    // -----------------------------------------------------------------------------

    /// 将字符串解析为 Token 序列。
    ///
    /// 使用正则 `{([^{}]+)}` 识别引用标记：
    ///   - 花括号内的内容 → Reference Token（经 to_canonical_identifier 规范化）
    ///   - 花括号外的内容 → Literal Token
    ///
    /// @param base_ns 当前文件的命名空间，用于相对引用展开
    /// @param input   待解析的字符串
    /// @return        解析后的 Token 序列
    /// @throws std::runtime_error 括号不匹配时抛出
    RulesetsManager::Tokens RulesetsManager::parse_tokens(const std::string& base_ns, const std::string& input) const {
        Tokens tokens;
        std::string literal;
        const auto flush_literal = [&] {
            if (!literal.empty()) {
                tokens.emplace_back(Token{Type::Literal, std::move(literal)});
                literal.clear();
            }
        };
        for (size_t at = 0; at < input.size();) {
            if (at + 1 < input.size() &&
                    ((input[at] == '{' && input[at + 1] == '{') ||
                     (input[at] == '}' && input[at + 1] == '}'))) {
                literal.push_back(input[at]);
                at += 2;
            } else if (input[at] == '{') {
                const auto end = input.find('}', at + 1);
                if (end == std::string::npos || end == at + 1 ||
                        input.find('{', at + 1) < end)
                    throw std::runtime_error("Mismatched braces in token string");
                flush_literal();
                std::string inner = input.substr(at + 1, end - at - 1);
                std::string ref = to_canonical_identifier(inner, base_ns);
                validate_identifier_format(ref);
                tokens.emplace_back(Token{Type::Reference, std::move(ref)});
                at = end + 1;
            } else if (input[at] == '}') {
                throw std::runtime_error("Mismatched braces in token string");
            } else {
                literal.push_back(input[at++]);
            }
        }
        flush_literal();

        // 注意：不在此处检查 original 中的重复引用；
        // 该检查由 parse_file 中调用方负责（见 reference/translator.rs 的 duplicate detection）

        return tokens;
    }

    /// 将标识符转换为规范形式。
    ///
    /// 处理三种形式：
    ///   - "::prefix"         → 绝对引用，原样返回
    ///   - "%replacer:ns"     → Replacer 引用，插入 base_ns
    ///   - "bare_name"        → 相对引用，展开为 "::base_ns::bare_name"
    ///
    /// @param identifier 原始标识符
    /// @param base_ns    当前文件的基础命名空间
    /// @return           规范化后的标识符字符串
    std::string RulesetsManager::to_canonical_identifier(const std::string& identifier, const std::string& base_ns) const {
        if (identifier.starts_with("::")) {
            return identifier;
        }
        if (identifier.starts_with("@")) {
            return identifier;  // Placeholder: local to rule, no namespace scoping
        }
        if (identifier.starts_with("#")) {
            return identifier;  // Builtin token: processed inline, no namespace scoping
        }
        if (identifier.starts_with("%")) {
            size_t colon = identifier.find(':', 1);
            if (colon == std::string::npos) {
                return identifier;      // Replacer: no namespace scoping
            } else {
                std::string result;
                result.reserve((colon + 1) + base_ns.size() + (identifier.size() - colon));
                result.append(identifier, 0, colon + 1);
                result += base_ns;
                result.append(identifier, colon);
                return result;
            }
        }
        if (base_ns.empty()) {
            std::string result;
            result.reserve(2 + identifier.size());
            result += "::";
            result += identifier;
            return result;
        }
        std::string result;
        result.reserve(4 + base_ns.size() + identifier.size());
        result += "::";
        result += base_ns;
        result += "::";
        result += identifier;
        return result;
    }

    /// 校验标识符格式的合法性。
    ///
    /// - Replacer 标识符（% 前缀）必须包含 ':' 分隔符
    /// - 普通标识符不能以 "::" 结尾（根 "::" 除外）
    /// - 普通标识符中不能出现连续三个及以上的冒号
    ///
    /// @throws std::runtime_error 格式不合法时抛出
    void RulesetsManager::validate_identifier_format(const std::string& identifier) const {
        if (identifier.starts_with("@")) {
            return;     // Placeholder: local name, no format requirements
        }
        if (identifier.starts_with("#")) {
            return;     // Builtin token: no format requirements
        }
        if (identifier.starts_with("%")) {
            return;     // Replacer: 无需校验格式，resolve_replacer 处理未知类型时返回空
        }

        if (identifier != "::" && identifier.ends_with("::"))
            throw std::runtime_error("Identifier cannot end with '::'");

        std::sregex_iterator it(identifier.begin(), identifier.end(), consecutive_colons_regex()), end;
        while (it != end) {
            if (it->str().size() != 2)
                throw std::runtime_error("Identifier contains invalid colon sequence");
            ++it;
        }
    }

    /// 大小写不敏感字符相等比较（位运算替代 std::tolower）。
    /// 作为 matches_literal 和 find_literal_position 的共用 comparator。
    bool RulesetsManager::ci_char_equal(unsigned char a, unsigned char b) {
        if (a >= 'A' && a <= 'Z') a |= 0x20;
        if (b >= 'A' && b <= 'Z') b |= 0x20;
        return a == b;
    }

    /// 大小写不敏感的前缀匹配，委托 ci_char_equal 逐字符比较。
    /// @return input 以 pattern 开头时返回 true
    bool RulesetsManager::matches_literal(std::string_view input, std::string_view pattern) {
        if (input.size() < pattern.size()) return false;
        size_t comparisons = 0;
        return std::equal(pattern.begin(), pattern.end(), input.begin(),
            [&](unsigned char a, unsigned char b) {
                if ((comparisons++ & 255) == 0) dfcn::translation_work_step();
                return ci_char_equal(a, b);
            });
    }

    /// 检查标识符是否为 Placeholder（@ 前缀）。
    /// Placeholder 没有对应规则集，用于捕获任意文本并原样穿透输出。
    bool RulesetsManager::is_placeholder(std::string_view identifier) {
        return !identifier.empty() && identifier[0] == '@';
    }

    /// 检查标识符是否为内建 token（# 前缀）。
    /// 内建 token 没有对应规则集，由引擎在 token 循环中内联处理。
    bool RulesetsManager::is_builtin(std::string_view identifier) {
        return !identifier.empty() && identifier[0] == '#';
    }

    /// 在文本中查找字面量的第一处大小写不敏感出现位置。
    /// 使用 std::search + ci_char_equal；placeholder 的后续 Literal
    /// 是 unique delimiter，只需首次匹配即可。
    /// @param text    待搜索的文本
    /// @param literal 要查找的字面量模式
    /// @return        匹配起始字节偏移，未找到返回 std::nullopt
    std::optional<size_t> RulesetsManager::find_literal_position(
        std::string_view text, std::string_view literal)
    {
        if (literal.empty()) return 0;
        size_t comparisons = 0;
        auto it = std::search(text.begin(), text.end(),
            literal.begin(), literal.end(), [&](unsigned char a, unsigned char b) {
                if ((comparisons++ & 255) == 0) dfcn::translation_work_step();
                return ci_char_equal(a, b);
            });
        if (it == text.end()) return std::nullopt;
        return it - text.begin();
    }

    /// 根据翻译模板和绑定结果构建最终翻译文本。
    ///
    /// 遍历 trans_tokens：
    ///   - Literal → 直接拼接其值
    ///   - Reference → 查找 bindings 中对应的子结果，拼接其 translated 字段
    ///
    /// @throws std::runtime_error 引用未绑定时抛出
    std::string RulesetsManager::build_translated(const Tokens& trans_tokens,
            const BindingMap& bindings, std::vector<size_t>* origins) {
        std::string s;
        if (origins) origins->clear();
        for (const auto& t : trans_tokens) {
            dfcn::translation_work_step();
            if (t.type == Type::Literal) {
                s += t.value;
                if (origins) origins->insert(origins->end(), t.value.size(), std::string::npos);
            } else {
                auto it = std::find_if(bindings.begin(), bindings.end(),
                    [&](const auto& p) { return p.first == t.value; });
                if (it == bindings.end()) {
                    throw std::runtime_error("Unbound reference: " + t.value);
                }
                s += it->second->translated;
                if (origins) {
                    size_t start = 0;
                    for (auto prior = bindings.begin(); prior != it; ++prior)
                        start += prior->second->translated.size();
                    for (size_t i = 0; i < it->second->translated.size(); ++i)
                        origins->push_back(start + i);
                }
            }
        }
        return s;
    }

    bool RulesetsManager::translation_origins(
            const ResultTree& tree, std::vector<size_t>& origins) {
        dfcn::TranslationWorkFrame work_frame(tree.identifier, tree.matched);
        origins.clear();
        if (tree.matched.empty()) return tree.translated.empty();
        if (tree.external_leaf) {
            // An externally resolved capture is one semantic field. Its
            // translation inherits the first source byte's color; enclosing grammar
            // still offsets the field when it reorders neighboring captures.
            origins.assign(tree.translated.size(), 0);
            return true;
        }
        if (tree.matched == tree.translated) {
            for (size_t i = 0; i < tree.translated.size(); ++i) {
                if ((i & 255) == 0) dfcn::translation_work_step();
                origins.push_back(i);
            }
            return true;
        }
        if (!tree.source_tokens || !tree.target_tokens) {
            // A native one-byte designation can render as a UTF-8 glyph.
            // Keep original spans for parsing and exact byte origins for
            // every rendered glyph, including wrappers inside a larger noun.
            if (!tree.identifier.starts_with("%item_designation:") ||
                tree.children.size() != 1) return false;
            const auto& child = *tree.children.front().second;
            if (child.remaining.size() < tree.remaining.size()) return false;
            const size_t suffix = child.remaining.size() - tree.remaining.size();
            if (child.matched.size() + suffix > tree.matched.size()) return false;
            const size_t prefix = tree.matched.size() - child.matched.size() - suffix;
            std::vector<size_t> inner;
            if (!translation_origins(child, inner)) return false;
            std::vector<size_t> before, after;
            const auto matched = std::string_view(tree.matched);
            const auto display_prefix = dfcn::display_item_designation_wrapper(
                matched.substr(0, prefix), false, &before);
            const auto display_suffix = dfcn::display_item_designation_wrapper(
                matched.substr(matched.size() - suffix), true, &after);
            if (display_prefix + child.translated + display_suffix != tree.translated)
                return false;
            origins.insert(origins.end(), before.begin(), before.end());
            for (size_t i : inner) origins.push_back(prefix + i);
            for (size_t i : after) origins.push_back(tree.matched.size() - suffix + i);
            return origins.size() == tree.translated.size();
        }
        struct ChildSource { const ResultTree* tree; size_t start; };
        std::unordered_map<std::string, ChildSource> bindings;
        size_t cursor = 0;
        size_t prose_origin = 0, prose_literal_size = 0;
        for (const auto& token : *tree.source_tokens) {
            dfcn::translation_work_step();
            if (token.type == Type::Literal) {
                // Book prose can begin with a colored subject. Connectives
                // belong to the authored prose, not that first capture.
                if (tree.identifier.starts_with("::subscribed_books") &&
                        token.value.size() > prose_literal_size) {
                    prose_origin = cursor;
                    prose_literal_size = token.value.size();
                }
                cursor += token.value.size();
            } else {
                const auto child = std::find_if(tree.children.begin(), tree.children.end(),
                    [&](const auto& binding) { return binding.first == token.value; });
                if (child == tree.children.end()) return false;
                bindings.emplace(token.value, ChildSource{child->second.get(), cursor});
                cursor += child->second->matched.size();
            }
        }
        if (cursor != tree.matched.size()) return false;
        for (const auto& token : *tree.target_tokens) {
            dfcn::translation_work_step();
            if (token.type == Type::Literal) {
                // Connective words inherit the enclosing clause's base
                // color; a final stop belongs to the original final stop.
                const bool final_stop = token.value == "。" || token.value == "！" ||
                    token.value == "？";
                const size_t origin = final_stop ? tree.matched.size() - 1 : prose_origin;
                origins.insert(origins.end(), token.value.size(), origin);
            } else {
                const auto found = bindings.find(token.value);
                if (found == bindings.end()) return false;
                std::vector<size_t> child_origins;
                if (!translation_origins(*found->second.tree, child_origins)) return false;
                for (size_t offset : child_origins)
                    origins.push_back(found->second.start + offset);
            }
        }
        return origins.size() == tree.translated.size() &&
            std::all_of(origins.begin(), origins.end(),
                [&](size_t offset) { return offset < tree.matched.size(); });
    }

    /// 递归打印翻译路径（调试用）。
    /// 从根节点开始，逐层打印每条规则的匹配和翻译信息。
    void RulesetsManager::print_translation_path(const ResultTree& node, int indent) {
        std::string pad(indent * 2, ' ');
        printf("%s[%s]\n", pad.c_str(), node.identifier.c_str());
        printf("%s  matched   : \"%s\"\n", pad.c_str(), node.matched.c_str());
        printf("%s  translated: \"%s\"\n", pad.c_str(), node.translated.c_str());
        if (!node.remaining.empty())
            printf("%s  remaining : \"%s\"\n", pad.c_str(), node.remaining.c_str());
        printf("%s  weight    : %zu\n", pad.c_str(), node.weight());
        for (const auto& [ref_id, child] : node.children) {
            printf("%s  ref: %s\n", pad.c_str(), ref_id.c_str());
            print_translation_path(*child, indent + 1);
        }
    }

} // namespace Hooks
} // namespace DFZH
} // namespace DFHack
