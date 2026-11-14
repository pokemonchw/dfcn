// Search owns copied facts and query plans, never native objects. All relation
// traversal is directional; absence and an explicitly false fact differ.
enum class SearchTruth : uint8_t { Unknown, False, True };
enum class SearchCompletion : uint8_t { Complete, Unknown, Pending, Approximate };
enum class SearchCandidateKind : uint8_t {
    ItemInstance, ItemGroup, ItemDefinition, JobTemplate, MaterialChoice,
    PropertyChoice, MenuCategory, NamedEntity, TextRecord
};
enum class SearchSlot : uint8_t { Object, Material, Action, Purpose, State, Owner, Quantity, LiteralName };
enum class SearchRole : uint8_t { Self, Output, Input, Tool, Contents, Decoration, Component };
enum class SearchEvidence : uint8_t { Native, Grammar, Confirmed, Spelling, Semantic, Configurable };
struct SearchCandidateId {
    uintptr_t owner = 0, record = 0;
    uint64_t world = 0, list = 0;
    std::string native_key;
    bool operator==(const SearchCandidateId &) const = default;
    bool operator<(const SearchCandidateId &other) const { return std::tie(world,owner,list,record,native_key)<std::tie(other.world,other.owner,other.list,other.record,other.native_key); }
};
struct SearchFactSet {
    std::vector<std::string> values;
    bool complete = false;
    SearchEvidence evidence = SearchEvidence::Native;
    std::string source;
    std::vector<std::string> false_values;
    std::shared_ptr<const std::vector<std::string>> shared_values;
    const std::vector<std::string> &all_values() const {return shared_values?*shared_values:values;}
    void freeze() {if(!shared_values && values.size()>1)shared_values=std::make_shared<const std::vector<std::string>>(std::move(values));}
};
struct SearchObjectFacts {
    std::string native_type, definition_id, entity_id;
    std::vector<std::string> names, material_names;
    SearchFactSet objects, material, states, purposes, owners, properties;
    SearchFactSet subtype_traits, equipment_slots, size_constraints, material_states;
    SearchFactSet selectable_materials;
    std::optional<int64_t> quantity, quality, wear;
    std::vector<SearchObjectFacts> contents, components, decorations;
    bool contents_complete = false, components_complete = false, decorations_complete = false;
};
struct SearchDescriptor : SearchObjectFacts {
    SearchCandidateId candidate_id;
    SearchCandidateKind kind = SearchCandidateKind::TextRecord;
    std::string domain = "text", original_caption, display_caption, display_name;
    std::string custom_name_origin, recipe_id, mode, place;
    std::map<std::string,std::string> fixed_parameters;
    std::map<std::string,SearchFactSet> selectable_parameters;
    std::vector<std::string> lexical_labels;
    std::vector<std::string> text_fields;
    SearchFactSet actions, workshops;
    std::vector<SearchObjectFacts> outputs, inputs, preserved_tools, members;
    bool outputs_complete = false, inputs_complete = false, tools_complete = false;
    uint64_t snapshot_generation = 0, state_version = 0;
    size_t native_ordinal = 0;
};
struct SearchNativeDefinition {
    std::string id, native_type, raw_id, package, singular, plural, adjective;
    int16_t subtype = -1;
    SearchFactSet properties, purposes;
    std::vector<std::string> categories;
};
struct SearchNativeMaterial {
    std::string id, raw_id;
    std::vector<std::string> names, categories;
    std::unordered_map<std::string, std::string> reaction_products;
};
struct SearchNativeComponent {
    std::string id, parent, tool_definition, name, plural;
};
struct SearchNativeName {
    std::string id,domain,grammar,parent;
    std::vector<std::string> names;
};
struct SearchWorldSnapshot {
    uint64_t world = 0, generation = 0, identity_generation = 0;
    std::vector<SearchNativeDefinition> definitions;
    std::vector<SearchNativeMaterial> materials;
    std::vector<SearchNativeComponent> components;
    std::vector<SearchNativeName> identities;
    bool item_catalog_complete=false;
    bool material_catalog_complete=false;
    std::unordered_map<std::string, SearchDescriptor> recipes;
    std::unordered_map<std::string, size_t> definition_index, material_index;
    std::unordered_map<std::string, std::vector<std::string>> materials_by_category;
    std::unordered_map<std::string,std::vector<std::string>> materials_by_product;
    void index_material(size_t i) {
        material_index[materials[i].id]=i;
        for(const auto &category:materials[i].categories)materials_by_category[category].push_back(materials[i].id);
        for(const auto &[product,target]:materials[i].reaction_products)materials_by_product[product].push_back(materials[i].id);
    }
    void index_facts() {
        definition_index.clear(); material_index.clear(); materials_by_category.clear();materials_by_product.clear();
        for(size_t i=0;i<definitions.size();++i)definition_index[definitions[i].native_type+":"+std::to_string(definitions[i].subtype)]=i;
        for(size_t i=0;i<materials.size();++i)index_material(i);
    }
};
// Populated only at the native callback boundary. Background translation uses
// the last owned immutable snapshot and never dereferences a game pointer.
static std::atomic<std::shared_ptr<const SearchWorldSnapshot>> g_search_world_snapshot;
static std::shared_ptr<const SearchWorldSnapshot> search_world_snapshot_storage() {
    return g_search_world_snapshot.load(std::memory_order_acquire);
}
static const SearchDescriptor *&search_active_descriptor() {
    return reloadable_thread_state<const SearchDescriptor *, struct SearchActiveDescriptorTag>();
}
static uint64_t &search_native_list_generation() { return reloadable_thread_state<uint64_t,struct SearchNativeListGenerationTag>(); }
static std::string &search_native_query_hint() { return reloadable_thread_state<std::string,struct SearchNativeQueryHintTag>(); }
static bool &search_native_text_hit() { return reloadable_thread_state<bool,struct SearchNativeTextHitTag>(); }
struct SearchNativeHitScope {
    bool previous;
    explicit SearchNativeHitScope(bool hit):previous(search_native_text_hit()){search_native_text_hit()=hit;}
    ~SearchNativeHitScope(){search_native_text_hit()=previous;}
};
struct SearchDescriptorScope {
    const SearchDescriptor *previous;
    explicit SearchDescriptorScope(const SearchDescriptor &value) : previous(search_active_descriptor()) {
        search_active_descriptor() = &value;
    }
    ~SearchDescriptorScope() { search_active_descriptor() = previous; }
};
static SearchDescriptor *&search_text_collection() {
    return reloadable_thread_state<SearchDescriptor *,struct SearchTextCollectionTag>();
}
struct SearchTextCollectionScope {
    SearchDescriptor *previous=search_text_collection();
    explicit SearchTextCollectionScope(SearchDescriptor &value){search_text_collection()=&value;}
    ~SearchTextCollectionScope(){search_text_collection()=previous;}
};
static bool collect_search_text(std::string_view source,std::string_view target={}) {
    auto *descriptor=search_text_collection();if(!descriptor)return false;
    const auto append=[&](std::string text){if(!text.empty() && std::find(descriptor->text_fields.begin(),descriptor->text_fields.end(),text)==descriptor->text_fields.end())descriptor->text_fields.push_back(std::move(text));};
    append(native_text_to_utf8(source));append(std::string(target));return true;
}

#include "search_normalization.inc"

struct SearchNormalized {
    std::string original, text;
    std::vector<size_t> origins, ends;
    explicit SearchNormalized(std::string_view source) : original(source) {
        auto normalized = search_normalized_text(source);
        text = std::move(normalized.text);
        origins = std::move(normalized.origins);
        ends = std::move(normalized.ends);
    }
    std::string source_span(size_t begin,size_t end) const {
        if(begin>=end || end>ends.size())return {};
        const auto first=*std::min_element(origins.begin()+begin,origins.begin()+end);
        const auto last=*std::max_element(ends.begin()+begin,ends.begin()+end);
        return original.substr(first,last-first);
    }
};
static std::string search_normalize(std::string_view value) { return SearchNormalized(value).text; }
static bool search_non_ascii(std::string_view value) {
    return std::any_of(value.begin(), value.end(), [](unsigned char c) { return c >= 128; });
}
static std::vector<std::string> search_tsv(std::string_view line) {
    std::vector<std::string> fields;
    do {
        const auto end = line.find('\t');
        fields.push_back(trim(std::string(line.substr(0, end))));
        if (end == std::string_view::npos) break;
        line.remove_prefix(end + 1);
    } while (true);
    return fields;
}
static SearchSlot search_slot(std::string_view name) {
    if (name == "material" || name == "材料") return SearchSlot::Material;
    if (name == "action" || name == "动作") return SearchSlot::Action;
    if (name == "purpose" || name == "用途") return SearchSlot::Purpose;
    if (name == "state" || name == "状态" || name == "品质" || name == "磨损") return SearchSlot::State;
    if (name == "owner" || name == "所有者" || name == "职业") return SearchSlot::Owner;
    if (name == "quantity" || name == "数量") return SearchSlot::Quantity;
    if (name == "name" || name == "literal_name" || name == "名称") return SearchSlot::LiteralName;
    return SearchSlot::Object;
}
struct SearchLexeme {
    std::string sense_id, surface, language, concept_id, domain, form_kind, source;
    SearchSlot slot = SearchSlot::Object;
    SearchEvidence evidence = SearchEvidence::Confirmed;
    std::string semantic_surface;
};
struct SearchRelation {
    std::string subject, relation, object, domain, condition, version, source;
};
struct SearchConstraint {
    SearchSlot slot = SearchSlot::Object;
    SearchRole role = SearchRole::Self;
    std::vector<std::string> concepts;
    mutable std::shared_ptr<const std::unordered_set<std::string>> membership;
    std::string text, original_text;
    bool negative = false, explicit_field = false, negated_scope = false, quoted = false;
    SearchEvidence evidence = SearchEvidence::Confirmed;
    unsigned spelling_cost = 0;
    float semantic_distance = 0;
    size_t begin = 0, end = 0;
    std::shared_ptr<struct SearchQueryBranch> nested;
};
struct SearchQueryBranch {
    std::vector<SearchConstraint> constraints;
    bool complete = true, literal = false;
    std::shared_ptr<struct SearchWordGraph> graph;
    bool literal_has_structure = false;
    std::shared_ptr<const PinyinSearchQuery> literal_query;
    std::vector<std::shared_ptr<const SearchQueryBranch>> literal_guards;
};
struct SearchWordGraph {
    struct Edge { size_t end; std::optional<SearchConstraint> constraint; };
    std::vector<std::vector<Edge>> edges;
    SearchRole role = SearchRole::Self;
};
template<class Modify> static void search_modify_constraints(SearchQueryBranch &branch, Modify modify) {
    for (auto &c : branch.constraints) {
        if(c.nested) { c.nested=std::make_shared<SearchQueryBranch>(*c.nested);search_modify_constraints(*c.nested,modify); }
        else modify(c);
    }
    if (branch.graph) {
        branch.graph = std::make_shared<SearchWordGraph>(*branch.graph);
        for (auto &edges : branch.graph->edges) for (auto &edge : edges) if (edge.constraint) modify(*edge.constraint);
    }
}
static void search_append_branch(SearchQueryBranch &left, const SearchQueryBranch &right) {
    if (right.graph) {
        SearchConstraint c; c.nested = std::make_shared<SearchQueryBranch>(right);
        c.role=right.graph->role;
        c.nested->graph=std::make_shared<SearchWordGraph>(*right.graph);
        c.nested->graph->role=SearchRole::Self;
        left.constraints.push_back(std::move(c));
    } else left.constraints.insert(left.constraints.end(), right.constraints.begin(), right.constraints.end());
}
struct SearchQueryPlan {
    SearchNormalized input;
    std::string domain;
    SearchCandidateKind kind;
    std::vector<SearchQueryBranch> branches;
    uint64_t catalog_generation;
    bool explicit_conditions = false;
    SearchCompletion completion = SearchCompletion::Complete;
    SearchQueryPlan(std::string_view input, const SearchDescriptor &d, uint64_t generation)
        : input(input), domain(d.domain), kind(d.kind), catalog_generation(generation) {}
};
struct SearchMatchDecision {
    bool accepted = false;
    unsigned match_class = 4, spelling_cost = 0, relation_cost = 0, proof_count = 0, coverage = 0;
    float semantic_distance = 0;
    size_t native_ordinal = 0;
    SearchCompletion completion = SearchCompletion::Complete;
    std::vector<std::string> constraint_proof, relation_path;
    auto order() const { return std::tuple(match_class, -int(coverage), -int(proof_count),
        relation_cost, spelling_cost, semantic_distance, native_ordinal); }
};

struct SearchConceptCatalog {
    struct Node { std::map<unsigned char, uint32_t> next; std::vector<uint32_t> lexemes; };
    struct Binding { std::string concept_id, native_type, definition; };
    std::vector<Node> trie{1};
    std::vector<SearchLexeme> lexemes;
    std::vector<SearchRelation> relations;
    std::unordered_map<std::string, std::vector<size_t>> outgoing, incoming;
    mutable std::unordered_map<std::string, std::vector<std::string>> scoped_ancestors;
    std::unordered_map<std::string, std::vector<std::string>> equivalents;
    std::unordered_map<std::string, Binding> bindings;
    std::unordered_map<std::string, std::string> predicates;
    mutable std::unordered_map<std::string, std::vector<uint32_t>> phonetic;
    mutable std::unordered_map<std::string, std::vector<uint32_t>> polyphonic;
    mutable std::array<std::vector<std::string>,26> polyphonic_initial;
    mutable bool phonetic_ready=false;
    std::array<std::unordered_map<std::string,std::vector<uint32_t>>,8> surfaces;
    std::unordered_map<std::string, std::vector<uint32_t>> by_concept;
    std::unordered_set<std::string> lexeme_keys;
    mutable std::unordered_map<std::string, std::vector<uint32_t>> exact_cache;
    mutable std::unordered_map<std::string,std::shared_ptr<const SearchQueryPlan>> plans;
    mutable std::unordered_map<std::string,SearchDescriptor> captions;
    struct Resolution {std::vector<std::string> ids;unsigned rank=1,cost=0;float distance=0;};
    mutable std::unordered_map<std::string,Resolution> resolutions;
    std::shared_ptr<const SearchWorldSnapshot> world;
    uint64_t revision = 0, generation = 0, model_generation = 0;
    mutable std::array<std::unique_ptr<SearchAnnTree>, 8> semantic;
    mutable std::array<std::vector<std::vector<uint32_t>>, 8> semantic_owners;

    void add(SearchLexeme lexeme) {
        lexeme.semantic_surface=lexeme.surface;
        lexeme.surface = search_normalize(trim(lexeme.surface));
        if (lexeme.surface.empty() || lexeme.concept_id.empty()) return;
        if(!lexeme_keys.insert(lexeme.surface+"\n"+lexeme.concept_id+"\n"+lexeme.domain+":"+std::to_string(int(lexeme.slot))).second)return;
        const auto id = static_cast<uint32_t>(lexemes.size());
        uint32_t node = 0;
        for (const unsigned char c : lexeme.surface) {
            auto found = trie[node].next.find(c);
            if (found == trie[node].next.end()) {
                const auto next = static_cast<uint32_t>(trie.size());
                trie[node].next.emplace(c, next); trie.emplace_back(); node = next;
            } else node = found->second;
        }
        trie[node].lexemes.push_back(id);
        by_concept[lexeme.concept_id].push_back(id);
        surfaces[static_cast<size_t>(lexeme.slot)][lexeme.surface].push_back(id);
        lexemes.push_back(std::move(lexeme));
    }
    void prepare_phonetic() const {
        if(phonetic_ready)return;
        std::unordered_map<std::string,PinyinSearchIndex> building_pronunciations;
        for(uint32_t id=0;id<lexemes.size();++id) {
            const auto &lexeme=lexemes[id];if(!search_non_ascii(lexeme.surface))continue;
            auto found=building_pronunciations.find(lexeme.surface);
            if(found==building_pronunciations.end())found=building_pronunciations.emplace(lexeme.surface,make_search_pinyin_index(normalize_search_pinyin(lexeme.surface))).first;
            const auto &p=found->second;
            if (p.has_pinyin) { phonetic[p.full].push_back(id); phonetic[p.initials].push_back(id); }
            if(p.multiple_readings) {
                auto &ids=polyphonic[lexeme.surface];
                if(ids.empty() && !p.units.empty()) {
                    std::array<bool,26> initials{};
                    if(const auto *readings=p.units.front().readings()) {
                        std::string_view choices(readings);
                        while(!choices.empty()) {if(choices.front()>='a' && choices.front()<='z')initials[choices.front()-'a']=true;
                            const auto end=choices.find(' ');if(end==std::string_view::npos)break;choices.remove_prefix(end+1);}
                    }
                    for(size_t i=0;i<initials.size();++i)if(initials[i])polyphonic_initial[i].push_back(lexeme.surface);
                }
                ids.push_back(id);
            }
        }
        phonetic_ready=true;
    }
    void label(std::string concept_id, std::string surface, SearchSlot slot,
            std::string domain, std::string source, std::string form = "native") {
        const auto sense = concept_id + ":" + std::to_string(static_cast<int>(slot));
        add({sense, surface, search_non_ascii(surface) ? "zh" : "en",
            concept_id, domain, form, source, slot});
    }
    void edge(std::string subject, std::string relation, std::string object,
            std::string domain = "items", std::string condition = {}, std::string source = "native") {
        relations.push_back({subject, relation, object, domain, condition, "53", source});
    }
    template<class Read> void read_rows(const char *file, Read read) {
        std::ifstream input(runtime::data_path() / file);
        for (std::string line; std::getline(input, line);)
            if (!line.empty() && line.front() != '#') read(search_tsv(line));
    }
    static bool domain_matches(std::string_view scope, std::string_view domain) {
        return scope.empty() || scope == "*" || scope == domain ||
            (scope=="lexical" && (domain=="text" || domain=="names" || domain=="legends" || domain=="journal" || domain=="conversation" || domain=="units" || domain=="plants" || domain=="properties")) ||
            (scope=="units" && domain=="creature.types") ||
            (scope == "items" && (domain == "jobs" || domain == "stockpile.type" || domain == "construction")) ||
            (scope == "materials" && (domain == "items" || domain == "jobs" || domain == "construction" || domain == "stockpile.material"));
    }
    std::vector<uint32_t> exact(std::string_view text, std::string_view domain,
            std::optional<SearchSlot> slot = {}, bool allow_phonetic = true) const {
        const auto key=std::string(domain)+":"+std::to_string(slot?int(*slot):-1)+":"+(allow_phonetic?"p:":"n:")+std::string(text);
        if(const auto cached=exact_cache.find(key);cached!=exact_cache.end())return cached->second;
        std::vector<uint32_t> result;
        uint32_t node = 0;
        bool found = true;
        for (unsigned char c : text) {
            const auto at = trie[node].next.find(c);
            if (at == trie[node].next.end()) { found = false; break; }
            node = at->second;
        }
        const auto append = [&](const auto &ids) {
            for (const auto id : ids) if (domain_matches(lexemes[id].domain, domain) &&
                    (!slot || lexemes[id].slot == *slot))
                if (std::find(result.begin(), result.end(), id) == result.end()) result.push_back(id);
        };
        if (found) append(trie[node].lexemes);
        const bool use_phonetic=allow_phonetic && !search_non_ascii(text) &&
            std::any_of(text.begin(),text.end(),[](unsigned char ch){return std::isalpha(ch);});
        if(use_phonetic)prepare_phonetic();
        const auto phon = use_phonetic?phonetic.find(normalize_search_pinyin(text)):phonetic.end();
        if (phon != phonetic.end()) append(phon->second);
        // Full polyphonic paths are merged by the existing pronunciation DP.
        if (use_phonetic && text.size() >= 2 && text.size() <= 4096 && text.front()>='a' && text.front()<='z')
            for (const auto &surface : polyphonic_initial[text.front()-'a']) {
                const auto &ids=polyphonic.at(surface);
                if(std::none_of(ids.begin(),ids.end(),[&](auto id){const auto &l=lexemes[id];return domain_matches(l.domain,domain) && (!slot || l.slot==*slot);}))continue;
                if (SearchSemanticPronunciations::matches(surface, text, false) ||
                        SearchSemanticPronunciations::matches(surface, text, true)) append(ids);
            }
        if(exact_cache.size()>=4096)exact_cache.clear();
        exact_cache.emplace(key,result);return result;
    }
    const std::vector<std::string> &parents(const std::string &child, std::string_view domain) const {
        const auto key=std::string(domain)+"\n"+child;
        if(const auto found=scoped_ancestors.find(key);found!=scoped_ancestors.end())return found->second;
        std::vector<std::string> closure,pending{child};std::unordered_set<std::string> visited{child};
        for(size_t at=0;at<pending.size();++at) {
            const auto edges=outgoing.find(pending[at]);if(edges==outgoing.end())continue;
            for(auto index:edges->second) {
                const auto &r=relations[index];
                if((r.relation!="IS_A" && r.relation!="ALIAS_OF") || !r.condition.empty() || !domain_matches(r.domain,domain) || !visited.insert(r.object).second)continue;
                closure.push_back(r.object);pending.push_back(r.object);
            }
        }
        return scoped_ancestors.emplace(key,std::move(closure)).first->second;
    }
    bool is_a(const std::string &child, const std::string &parent, std::string_view domain="items") const {
        if (child == parent) return true;
        const auto &values=parents(child,domain);
        return std::find(values.begin(),values.end(),parent)!=values.end();
    }
    explicit SearchConceptCatalog(uint64_t version, std::shared_ptr<const SearchWorldSnapshot> snapshot, bool include_vocabulary = true)
        : world(std::move(snapshot)), revision(version) {
        static std::atomic<uint64_t> serial{1}; generation = serial.fetch_add(1);
        read_rows("search-native-bindings.tsv", [&](const auto &f) {
            if (f.size() >= 4) bindings[f[0]] = {f[1], f[2], f[3]};
        });
        if(!include_vocabulary)return;
        for(const auto &[key,binding]:bindings)if(key.starts_with("native_type:") && !binding.native_type.empty())
            edge(binding.native_type,"IS_A","category:item");
        const auto nouns = RULESETS.search_item_nouns();
        std::unordered_map<std::string,std::vector<const SearchNativeDefinition *>> definitions_by_name;
        std::unordered_map<std::string,std::vector<const decltype(nouns)::value_type *>> nouns_by_name;
        if(world)for(const auto &definition:world->definitions)
            for(const auto &name:{definition.singular,definition.plural})if(!name.empty())
                definitions_by_name[definition.native_type+"\n"+search_normalize(name)].push_back(&definition);
        for(const auto &noun:nouns)if(const auto b=bindings.find("items::"+noun.kind);b!=bindings.end())
            nouns_by_name[b->second.native_type+"\n"+search_normalize(noun.source)].push_back(&noun);
        const auto vocabulary=RULESETS.search_lexical_sources();
        for(const auto &word:vocabulary) {
            const auto lexical="lexical:"+word.grammar+":"+word.source;
            label(lexical,word.source,SearchSlot::LiteralName,"lexical",word.grammar);
            label(lexical,word.target,SearchSlot::LiteralName,"lexical",word.grammar,"translation");
            if(word.grammar.starts_with("::professions")) {
                const auto id="profession:"+search_normalize(word.source);
                label(id,word.source,SearchSlot::Owner,"units",word.grammar);
                label(id,word.target,SearchSlot::Owner,"units",word.grammar,"translation");
            }
            if(word.grammar.starts_with("::materials::")) {
                const auto id="material_grammar:"+word.grammar+":"+word.source;
                label(id,word.source,SearchSlot::Material,"materials",word.grammar);
                label(id,word.target,SearchSlot::Material,"materials",word.grammar,"translation");
            }
            if(word.grammar.starts_with("::color") || word.grammar.starts_with("::require")) {
                label(lexical,word.source,SearchSlot::State,"properties",word.grammar);
                label(lexical,word.target,SearchSlot::State,"properties",word.grammar,"translation");
            }
        }
        const std::unordered_set<std::string> subtype_types = {"item_type:WEAPON", "item_type:ARMOR", "item_type:SHOES", "item_type:SHIELD", "item_type:HELM", "item_type:GLOVES", "item_type:PANTS", "item_type:AMMO", "item_type:SIEGEAMMO", "item_type:TRAPCOMP", "item_type:TOY", "item_type:INSTRUMENT", "item_type:TOOL"};
        for (const auto &noun : nouns) {
            const auto binding = bindings.find("items::" + noun.kind);
            // An unbound grammar namespace contributes vocabulary, not a new
            // native item_type. Its identity never contains a translated name.
            const bool leaf = binding != bindings.end() && !noun.category && binding->second.definition.empty() && subtype_types.contains(binding->second.native_type);
            bool native_leaf = false;
            if (leaf) if(const auto found=definitions_by_name.find(binding->second.native_type+"\n"+search_normalize(noun.source));found!=definitions_by_name.end())
                for(const auto *definition:found->second) {
                    label(definition->id, noun.source, SearchSlot::Object, "items", noun.grammar);
                    label(definition->id, noun.target, SearchSlot::Object, "items", noun.grammar, "translation");
                    native_leaf = true;
                }
            if (native_leaf) continue;
            const std::string id = binding == bindings.end() || leaf ?
                "grammar:items::" + noun.kind + ":" + noun.source : binding->second.concept_id;
            label(id, noun.source, SearchSlot::Object, "items", noun.grammar);
            label(id, noun.target, SearchSlot::Object, "items", noun.grammar, "translation");
        }
        read_rows("search-concepts.tsv", [&](const auto &f) {
            if (f.size() != 3) return;
            const auto group = f[1] == "cabinets" ? "item_type:CABINET" : "category:" + f[1];
            if (f[0] == "group") for (const auto &name : SearchItemTaxonomy::split(f[2], '|'))
                label(group, name, SearchSlot::Object, "items", "search-concepts.tsv", "alias");
            if (f[0] == "kinds") for (const auto &kind : SearchItemTaxonomy::split(f[2], '|')) {
                const auto b = bindings.find("items::" + kind);
                if (b != bindings.end() && b->second.concept_id != group)
                    edge(b->second.concept_id, "IS_A", group, "items", {}, "search-concepts.tsv");
            }
        });
        read_rows("search-lexemes.tsv", [&](const auto &f) {
            if (f.size() >= 8) {
                add({f[0], f[1], f[2], f[3], f[4], f[6], f[7], search_slot(f[5])});
                if(f[5]=="state" && f[4]=="items")add({f[0],f[1],f[2],f[3],"properties",f[6],f[7],SearchSlot::State});
            }
        });
        read_rows("search-relations.tsv", [&](const auto &f) {
            if (f.size() >= 7 && (f[5].empty() || f[5]=="*" || f[5]=="53" || f[5]=="53.17")) {
                relations.push_back({f[0], f[1], f[2], f[3], f[4], f[5], f[6]});
                if(f[1]=="ALIAS_OF")relations.push_back({f[2],f[1],f[0],f[3],f[4],f[5],f[6]});
            }
        });
        std::ifstream conditions(runtime::data_path() / "search-predicates.toml");
        std::string section;
        for (std::string line; std::getline(conditions, line);) {
            line = trim(line);
            if (line.empty() || line.front() == '#') continue;
            if (line.front() == '[' && line.back() == ']') section = line.substr(1, line.size() - 2);
            else if (line.starts_with("expression")) {
                const auto first = line.find('"'), last = line.rfind('"');
                if (first != std::string::npos && last > first) predicates[section] = line.substr(first + 1, last - first - 1);
            }
        }
        if (world) {
            std::unordered_map<std::string,std::vector<const decltype(vocabulary)::value_type *>> identity_words;
            for(const auto &word:vocabulary)if(word.grammar.starts_with("::creatures::") || word.grammar.starts_with("::plants::"))
                identity_words[search_normalize(word.source)].push_back(&word);
            for(const auto &identity:world->identities) {
                if(!identity.parent.empty())edge(identity.id,"IS_A",identity.parent,identity.domain);
                for(const auto &name:identity.names) {
                    label(identity.id,name,SearchSlot::Object,identity.domain,"active RAW identity");
                    if(const auto words=identity_words.find(search_normalize(name));words!=identity_words.end())for(const auto *word:words->second)
                        if(word->grammar.starts_with(identity.grammar))label(identity.id,word->target,SearchSlot::Object,identity.domain,word->grammar,"translation");
                }
            }
            for (const auto &definition : world->definitions) {
                edge(definition.id, "IS_A", definition.native_type);
                for(const auto &[key,binding]:bindings)if(!binding.definition.empty() && binding.definition==definition.raw_id && binding.native_type==definition.native_type)
                    edge(definition.id,"ALIAS_OF",binding.concept_id);
                label(definition.id, definition.singular, SearchSlot::Object, "items", definition.package);
                label(definition.id, definition.plural, SearchSlot::Object, "items", definition.package, "plural");
                // Join only an explicitly bound type and a complete RAW noun.
                for (const auto &name : {definition.singular,definition.plural}) {
                    const auto words=nouns_by_name.find(definition.native_type+"\n"+search_normalize(name));
                    if(words==nouns_by_name.end())continue;
                    for(const auto *word:words->second) { const auto &noun=*word;
                    const auto binding = bindings.find("items::" + noun.kind);
                    label(definition.id, noun.target, SearchSlot::Object, "items", noun.grammar, "translation");
                    edge(definition.id, "IS_A", "grammar:items::" + noun.kind + ":" + noun.source);
                    if (!binding->second.definition.empty() && binding->second.definition == definition.raw_id)
                        edge(definition.id, "ALIAS_OF", binding->second.concept_id);
                    }
                }
                for (const auto &category : definition.categories) edge(definition.id, "IS_A", category);
                for (const auto &purpose : definition.purposes.values) edge(definition.id, "HAS_CAPABILITY", purpose);
                for (const auto &property : definition.properties.values) edge(definition.id, "HAS_PROPERTY", property);
                if(std::find(definition.properties.values.begin(),definition.properties.values.end(),"conditional:inorganic_armor")!=definition.properties.values.end()){
                    edge(definition.id,"MEMBER_OF_CATEGORY","category:armor","items","eq(material,material_domain:inorganic)","native:getEffectiveArmorLevel/METAL_ARMOR_LEVELS");
                    edge(definition.id,"MEMBER_OF_CATEGORY","category:clothing","items","not(eq(material,material_domain:inorganic))","native:getEffectiveArmorLevel/METAL_ARMOR_LEVELS");
                }
            }
            std::unordered_map<std::string, std::vector<const decltype(vocabulary)::value_type *>> material_words;
            for (const auto &word : vocabulary) if (word.grammar.starts_with("::materials::"))
                material_words[search_normalize(word.source)].push_back(&word);
            for (const auto &material : world->materials) {
                for (const auto &category : material.categories) edge(material.id, "IS_A", category, "materials");
                for (const auto &name : material.names) {
                    label(material.id, name, SearchSlot::Material, "materials", material.raw_id);
                    const auto found = material_words.find(search_normalize(name));
                    if (found != material_words.end()) for (const auto *word : found->second)
                        {label(material.id, word->target, SearchSlot::Material, "materials", word->grammar, "translation");
                        edge(material.id,"IS_A","material_grammar:"+word->grammar+":"+word->source,"materials");}
                }
            }
            for(const auto &component:world->components){
                label(component.id,component.name,SearchSlot::Object,"items",component.parent);
                label(component.id,component.plural,SearchSlot::Object,"items",component.parent,"plural");
                edge(component.id,"COMPONENT_OF",component.parent);
                if(!component.tool_definition.empty()){
                    edge(component.tool_definition,"COMPONENT_OF",component.parent);
                    edge(component.id,"IS_A",component.tool_definition);
                }
            }
        }
        const auto declared=relations.size();
        for(size_t i=0;i<declared;++i)if(relations[i].relation=="ALIAS_OF"){
            auto reverse=relations[i];std::swap(reverse.subject,reverse.object);
            if(std::none_of(relations.begin(),relations.end(),[&](const auto &r){return r.subject==reverse.subject && r.object==reverse.object && r.relation==reverse.relation && r.domain==reverse.domain && r.condition==reverse.condition;}))relations.push_back(std::move(reverse));
        }
        for (size_t i = 0; i < relations.size(); ++i) {
            const auto &r = relations[i]; outgoing[r.subject].push_back(i); incoming[r.object].push_back(i);
            if(r.relation=="ALIAS_OF" && r.condition.empty()){
                equivalents[r.subject].push_back(r.object);equivalents[r.object].push_back(r.subject);
            }
        }
        lexeme_keys.clear();lexeme_keys.rehash(0);
    }
};

static std::shared_ptr<const SearchConceptCatalog> search_concept_catalog(bool with_world=true) {
    TranslationStateScope scope;
    struct Cache { std::shared_ptr<const SearchConceptCatalog> catalog; };
    auto &cache = reloadable_thread_state<std::array<Cache,2>, struct SearchConceptCatalogTag>()[with_world?1:0];
    const auto revision = RULESETS.resource_revision();
    const auto world = with_world?search_world_snapshot_storage():nullptr;
    const auto model=search_semantic_model_state().generation;
    if (!cache.catalog || cache.catalog->revision != revision || cache.catalog->world != world || cache.catalog->model_generation!=model) {
        auto catalog=std::make_shared<SearchConceptCatalog>(revision,world);catalog->model_generation=model;
        cache.catalog=std::move(catalog);
    }
    return cache.catalog;
}

struct SearchQueryParser {
    const SearchConceptCatalog &catalog;
    const SearchDescriptor &descriptor;
    SearchQueryPlan plan;
    bool allow_phonetic=true;
    SearchSlot default_slot() const {
        if(descriptor.kind==SearchCandidateKind::MaterialChoice)return SearchSlot::Material;
        if(descriptor.kind==SearchCandidateKind::PropertyChoice)return SearchSlot::State;
        if(descriptor.kind==SearchCandidateKind::NamedEntity || descriptor.kind==SearchCandidateKind::TextRecord)return SearchSlot::LiteralName;
        return SearchSlot::Object;
    }
    SearchQueryParser(const SearchConceptCatalog &c, const SearchDescriptor &d, std::string_view text)
        : catalog(c), descriptor(d), plan(text, d, c.generation) {}
    static std::string strip(std::string_view text) { return trim(std::string(text)); }
    static std::vector<std::string> alternatives(std::string_view text) {
        std::vector<std::string> out;
        size_t begin = 0;
        char quote = 0;
        for (size_t i = 0; i < text.size();) {
            if (text[i] == '"' || (text[i] == '\'' && (quote || !i || !std::isalnum(static_cast<unsigned char>(text[i-1]))))) {
                if (!quote) quote = text[i]; else if (quote == text[i]) quote = 0;
                ++i; continue;
            }
            size_t width = 0;
            if (!quote) {
                if (text[i] == '|') width = 1;
                else if (text.substr(i).starts_with("或")) width = std::string_view("或").size();
                else if (text.substr(i).starts_with(" or ")) width = 4;
            }
            if (width) { out.push_back(strip(text.substr(begin, i - begin))); i += width; begin = i; }
            else { const auto cp = decode_utf8_at(text, i); i += cp ? cp->second : 1; }
        }
        out.push_back(strip(text.substr(begin)));
        return out;
    }
    struct Edge { size_t end; SearchConstraint constraint; };
    std::vector<Edge> edges(std::string_view text, size_t at, std::optional<SearchSlot> forced,
            SearchRole role, bool explicit_field) const {
        std::vector<Edge> result;
        const auto latin=[](unsigned char ch){return ch<128 && (std::isalnum(ch) || ch=='_');};
        if(at && latin(text[at-1]) && latin(text[at]))return result;
        const auto append = [&](size_t end, const std::vector<uint32_t> &ids) {
            std::map<SearchSlot, SearchConstraint> by_slot;
            for (auto id : ids) {
                const auto &l = catalog.lexemes[id];
                if (!SearchConceptCatalog::domain_matches(l.domain, descriptor.domain)) continue;
                if (forced && l.slot != *forced && !(*forced == SearchSlot::Purpose && l.slot == SearchSlot::Object)) continue;
                const auto slot = forced.value_or(l.slot);
                auto &c = by_slot[slot]; c.slot = slot; c.role = role;
                c.text = std::string(text.substr(at, end - at)); c.begin = at; c.end = end;
                c.explicit_field = explicit_field;
                if (std::find(c.concepts.begin(), c.concepts.end(), l.concept_id) == c.concepts.end()) c.concepts.push_back(l.concept_id);
            }
            for (auto &[slot, c] : by_slot) {
                const auto existing=std::find_if(result.begin(),result.end(),[&](const auto &edge){return edge.end==end && edge.constraint.slot==slot;});
                if(existing==result.end())result.push_back({end,std::move(c)});
                else for(const auto &id:c.concepts)if(std::find(existing->constraint.concepts.begin(),existing->constraint.concepts.end(),id)==existing->constraint.concepts.end())existing->constraint.concepts.push_back(id);
            }
        };
        uint32_t node = 0;
        const auto letter = [](unsigned char c) { return c < 128 && (std::isalnum(c) || c == '_'); };
        for (size_t end = at; end < text.size(); ++end) {
            const auto found = catalog.trie[node].next.find(static_cast<unsigned char>(text[end]));
            if (found == catalog.trie[node].next.end()) break;
            node = found->second;
            if (catalog.trie[node].lexemes.empty()) continue;
            if (letter(text[end]) && end + 1 < text.size() && letter(text[end + 1])) continue;
            append(end + 1, catalog.trie[node].lexemes);
        }
        if (static_cast<unsigned char>(text[at]) < 128 && std::isalpha(static_cast<unsigned char>(text[at]))) {
            size_t end = at;
            while (end < text.size() && static_cast<unsigned char>(text[end]) < 128 &&
                    (std::isalpha(static_cast<unsigned char>(text[end])) || text[end] == '\'')) ++end;
            // Non-default readings are requested only for a complete Latin
            // token, not once per byte of every candidate caption.
            // Keep all readings even when this token is also an English word.
            append(end, catalog.exact(text.substr(at, end - at), descriptor.domain, forced,allow_phonetic));
            if(result.empty()) {
                const auto token=std::string(text.substr(at,end-at));
                std::vector<std::string> stems;
                if(token.ends_with("ies") && token.size()>3)stems.push_back(token.substr(0,token.size()-3)+"y");
                if(token.ends_with("es") && token.size()>2)stems.push_back(token.substr(0,token.size()-2));
                if(token.ends_with('s') && token.size()>1)stems.push_back(token.substr(0,token.size()-1));
                for(const auto &stem:stems)append(end,catalog.exact(stem,descriptor.domain,forced.value_or(SearchSlot::Object),allow_phonetic));
            }
        }
        return result;
    }
    SearchConstraint residual(std::string text, std::optional<SearchSlot> slot,
            SearchRole role, bool field) const {
        SearchConstraint c; c.slot = slot.value_or(SearchSlot::Object); c.role = role;
        c.slot=slot.value_or(default_slot());c.text = std::move(text); c.explicit_field = field;
        if(const auto at=plan.input.text.find(c.text);at!=std::string::npos && at+c.text.size()<plan.input.origins.size()){
            c.begin=at;c.end=at+c.text.size();
            c.original_text=plan.input.source_span(c.begin,c.end);
        }
        c.evidence = SearchEvidence::Semantic;
        return c;
    }
    std::vector<SearchQueryBranch> words(std::string text, std::optional<SearchSlot> forced = {},
            SearchRole role = SearchRole::Self, bool field = false, unsigned depth = 0) {
        text = strip(text);
        if (text.empty() || depth > 16) return {};
        if ((text.front() == '"' || text.front() == '\'') && text.size() > 1 && text.back() == text.front()) {
            auto c = residual(text.substr(1, text.size() - 2), SearchSlot::LiteralName, role, true);
            c.quoted=true;
            c.evidence = SearchEvidence::Confirmed;
            return {{{std::move(c)}, true, false}};
        }
        // Exact compounds compete with every complete segmented path. Negative
        // prefixes inside registered words never become operators.
        auto graph = std::make_shared<SearchWordGraph>();
        graph->edges.resize(text.size() + 1);
        graph->role = role;
        std::vector<bool> reachable(text.size() + 1, false);
        reachable[0] = true;
        for (size_t at = 0; at < text.size(); ++at) {
            if (!reachable[at]) continue;
            auto next = edges(text, at, forced, role, field);
            if(text[at]=='"' || text[at]=='\'') {
                const auto end=text.find(text[at],at+1);
                if(end!=std::string::npos) {
                    auto c=residual(text.substr(at+1,end-at-1),SearchSlot::LiteralName,role,true);
                    c.quoted=true;
                    c.evidence=SearchEvidence::Confirmed;c.begin=at;c.end=end+1;
                    next.push_back({end+1,std::move(c)});
                }
            }
            if (std::isdigit(static_cast<unsigned char>(text[at])) && (!forced || *forced == SearchSlot::Quantity)) {
                size_t end = at;
                while (end < text.size() && std::isdigit(static_cast<unsigned char>(text[end]))) ++end;
                size_t unit = end; while (unit < text.size() && text[unit] == ' ') ++unit;
                for (const auto measure : {std::string_view("个"),std::string_view("件"),std::string_view("份")})
                    if (text.substr(unit).starts_with(measure)) {
                        auto c = residual(text.substr(at,end-at),SearchSlot::Quantity,role,true);
                        c.evidence=SearchEvidence::Confirmed;
                        next.push_back({unit+measure.size(),std::move(c)});
                    }
            }
            size_t separator = 0;
            for (const auto token : {std::string_view(" "),std::string_view("\t"),std::string_view("且"),
                    std::string_view("和"),std::string_view("and ")})
                if (text.substr(at).starts_with(token) && at && at+token.size()<text.size()) separator = std::max(separator,token.size());
            if((text.substr(at).starts_with("制") || text.substr(at).starts_with("的")) && at+std::string_view("制").size()<text.size())
                for(size_t from=0;from<at;++from)for(const auto &edge:graph->edges[from])
                    if(edge.end==at && edge.constraint && edge.constraint->slot==SearchSlot::Material && !edge.constraint->concepts.empty())separator=std::string_view("制").size();
            if (separator) {
                graph->edges[at].push_back({at+separator,{}});
                reachable[at+separator]=true;
            }
            if (next.empty() && !separator) {
                size_t end=at;
                do { const auto cp=decode_utf8_at(text,end);end+=cp?cp->second:1; }
                while(end<text.size() && text[end]!=' ' && edges(text,end,forced,role,field).empty());
                auto c=residual(text.substr(at,end-at),forced,role,field);c.begin=at;c.end=end;
                next.push_back({end,std::move(c)});
                if(!forced && default_slot()==SearchSlot::Object && end<text.size()) {
                    // The unknown span remains indivisible. Competing slot
                    // readings must each prove the entire span in that field.
                    for(const auto slot:{SearchSlot::Material,SearchSlot::State})
                        next.push_back({end,residual(text.substr(at,end-at),slot,role,field)});
                    if(descriptor.kind==SearchCandidateKind::JobTemplate)
                        next.push_back({end,residual(text.substr(at,end-at),SearchSlot::Action,role,field)});
                }
            }
            for(auto &edge:next) {
                graph->edges[at].push_back({edge.end,std::move(edge.constraint)});
                reachable[edge.end]=true;
            }
        }
        if(!reachable.back())return {};
        // The construction trie walks UTF-8 bytes; the published graph uses
        // Unicode character boundaries, with spans mapped back to the input.
        std::vector<size_t> character_at(text.size()+1,SIZE_MAX),boundaries;
        for(size_t at=0;at<text.size();){character_at[at]=boundaries.size();boundaries.push_back(at);const auto cp=decode_utf8_at(text,at);at+=cp?cp->second:1;}
        character_at[text.size()]=boundaries.size();boundaries.push_back(text.size());
        auto compact=std::make_shared<SearchWordGraph>();compact->role=role;compact->edges.resize(boundaries.size());
        const auto base=plan.input.text.find(text);
        for(size_t node=0;node<boundaries.size();++node)for(auto edge:graph->edges[boundaries[node]]){
            if(edge.end>=character_at.size() || character_at[edge.end]==SIZE_MAX)continue;
            if(edge.constraint && base!=std::string::npos){
                edge.constraint->begin=base+boundaries[node];edge.constraint->end=base+edge.end;
                if(edge.constraint->end<plan.input.origins.size()){
                    edge.constraint->original_text=plan.input.source_span(edge.constraint->begin,edge.constraint->end);
                }
            }
            edge.end=character_at[edge.end];compact->edges[node].push_back(std::move(edge));
        }
        graph=std::move(compact);
        SearchQueryBranch result;result.graph=std::move(graph);
        return {std::move(result)};
    }
    std::vector<SearchQueryBranch> branch(std::string text, unsigned depth = 0) {
        text = strip(text);
        if (text.empty() || depth > 16) return {};
        // Field values can contain spaces and quoted names; the next complete
        // field marker, not whitespace alone, ends a value.
        struct Field { size_t at, value; SearchSlot slot; SearchRole role; bool negative; std::string name; };
        std::vector<Field> fields;
        char quote = 0;
        static const std::vector<std::pair<std::string, SearchSlot>> names = {
            {"类型",SearchSlot::Object},{"type",SearchSlot::Object},{"材料",SearchSlot::Material},{"material",SearchSlot::Material},
            {"产物",SearchSlot::Object},{"output",SearchSlot::Object},{"原料",SearchSlot::Object},{"input",SearchSlot::Object},
            {"工具",SearchSlot::Object},{"tool",SearchSlot::Object},{"内容",SearchSlot::Object},{"contents",SearchSlot::Object},
            {"用途",SearchSlot::Purpose},{"purpose",SearchSlot::Purpose},{"状态",SearchSlot::State},{"state",SearchSlot::State},
            {"名称",SearchSlot::LiteralName},{"name",SearchSlot::LiteralName},{"所有者",SearchSlot::Owner},{"owner",SearchSlot::Owner},
            {"数量",SearchSlot::Quantity},{"quantity",SearchSlot::Quantity},{"动作",SearchSlot::Action},{"action",SearchSlot::Action},
            {"装饰",SearchSlot::Object},{"decoration",SearchSlot::Object},{"部件",SearchSlot::Object},{"component",SearchSlot::Object},
            {"品质",SearchSlot::State},{"磨损",SearchSlot::State},{"职业",SearchSlot::Owner}};
        for (size_t at = 0; at < text.size(); ++at) {
            if (text[at] == '"' || (text[at] == '\'' && (quote || !at || !std::isalnum(static_cast<unsigned char>(text[at-1]))))) { if (!quote) quote = text[at]; else if (quote == text[at]) quote = 0; continue; }
            if (quote) continue;
            for (const auto &[name, slot] : names) if (text.substr(at).starts_with(name + ":")) {
                if(at && static_cast<unsigned char>(name.front())<128 && std::isalnum(static_cast<unsigned char>(text[at-1])))continue;
                SearchRole role = SearchRole::Self;
                if (name == "产物" || name == "output") role = SearchRole::Output;
                if (name == "原料" || name == "input") role = SearchRole::Input;
                if (name == "工具" || name == "tool") role = SearchRole::Tool;
                if (name == "内容" || name == "contents") role = SearchRole::Contents;
                if (name == "装饰" || name == "decoration") role = SearchRole::Decoration;
                if (name == "部件" || name == "component") role = SearchRole::Component;
                size_t begin=at;bool negative=false;
                for(const auto prefix:{std::string_view("非"),std::string_view("不要"),std::string_view("不是"),std::string_view("not "),std::string_view("!")})
                    if(at>=prefix.size() && text.substr(at-prefix.size(),prefix.size())==prefix){begin=at-prefix.size();negative=true;break;}
                fields.push_back({begin, at + name.size() + 1, slot, role, negative,name});
                at += name.size(); break;
            }
        }
        if (!fields.empty()) {
            plan.explicit_conditions = true;
            std::vector<SearchQueryBranch> result{{}};
            if (fields.front().at) result = branch(text.substr(0, fields.front().at), depth + 1);
            for (size_t i = 0; i < fields.size(); ++i) {
                auto value = strip(text.substr(fields[i].value, (i + 1 < fields.size() ? fields[i+1].at : text.size()) - fields[i].value));
                bool negative = fields[i].negative;
                for (const auto prefix : {std::string_view("不要"),std::string_view("不是"),std::string_view("非"),std::string_view("not "),std::string_view("!")})
                    if (value.starts_with(prefix) && catalog.exact(value, descriptor.domain).empty()) { negative = true; value = strip(value.substr(prefix.size())); break; }
                if(value.empty())return {};
                const auto forced=fields[i].role==SearchRole::Self?std::optional<SearchSlot>(fields[i].slot):std::nullopt;
                auto parts = words(value, forced, fields[i].role, true, depth + 1);
                if (fields[i].slot == SearchSlot::LiteralName || fields[i].slot == SearchSlot::Quantity) {
                    auto c = residual(value, fields[i].slot, fields[i].role, true);
                    if (value.size() >= 2 && (value.front() == '"' || value.front()=='\'') && value.back() == value.front()) {c.text = value.substr(1, value.size() - 2);c.quoted=true;}
                    c.evidence = SearchEvidence::Confirmed; parts = {{{std::move(c)}, true, false}};
                }
                if((fields[i].name=="品质" || fields[i].name=="磨损") &&
                   std::all_of(value.begin(),value.end(),[](unsigned char ch){return std::isdigit(ch);})){
                    auto c=residual(value,SearchSlot::State,fields[i].role,true);
                    c.concepts={(fields[i].name=="品质"?"quality:":"wear:")+value};
                    c.evidence=SearchEvidence::Confirmed;parts={{{std::move(c)},true,false}};
                }
                std::vector<SearchQueryBranch> combined;
                if(negative)for(auto &part:parts){
                    // Negate the complete field proposition, including its
                    // existential role. A non-iron contained item does not
                    // prove that the container contains no iron.
                    search_modify_constraints(part,[](auto &c){c.negated_scope=true;});
                    SearchConstraint excluded;excluded.negative=true;excluded.explicit_field=true;
                    excluded.nested=std::make_shared<SearchQueryBranch>(std::move(part));
                    part={};part.constraints.push_back(std::move(excluded));
                }
                for (const auto &left : result) for (const auto &right : parts) {
                    auto b = left; search_append_branch(b,right); combined.push_back(std::move(b));
                }
                result = std::move(combined);
            }
            return result;
        }
        // Role-binding productions have explicit object boundaries. Nested
        // constraints remain on the same contained/input/output object.
        if(text.starts_with("用"))if(const auto at=text.find("装",std::string_view("用").size());at!=std::string::npos) {
            auto outer=branch(text.substr(std::string_view("用").size(),at-std::string_view("用").size()),depth+1);
            auto inner=words(text.substr(at+std::string_view("装").size()),SearchSlot::Purpose,SearchRole::Self,true,depth+1);
            std::vector<SearchQueryBranch> result;
            for(auto o:outer)for(const auto &n:inner){auto b=o;search_append_branch(b,n);result.push_back(std::move(b));}
            plan.explicit_conditions=true;return result;
        }
        struct RelationSyntax { std::string_view prefix, divider; SearchRole role; bool purpose; };
        static constexpr RelationSyntax syntax[] = {
            {"装", "的", SearchRole::Contents, false}, {"放", "的", SearchRole::Self, true},
            {"存放", "的", SearchRole::Self, true}, {"储存", "的", SearchRole::Self, true},
            {"用", "制作", SearchRole::Input, false}, {"消耗", "制作", SearchRole::Input, false}};
        for (const auto &s : syntax) if (text.starts_with(s.prefix)) {
            const auto at = text.find(s.divider, s.prefix.size());
            if (at == std::string::npos) continue;
            auto outer = branch(text.substr(at + s.divider.size()), depth + 1);
            auto inner = words(text.substr(s.prefix.size(), at - s.prefix.size()), {}, SearchRole::Self, false, depth + 1);
            std::vector<SearchQueryBranch> out;
            for (const auto &o : outer) for (const auto &n : inner) {
                auto b = o;
                if (s.purpose) {
                    auto purpose=n;search_modify_constraints(purpose,[](auto &c){c.slot=SearchSlot::Purpose;c.explicit_field=true;});
                    search_append_branch(b,purpose);
                }
                else { SearchConstraint c; c.role = s.role; c.explicit_field = true; c.nested = std::make_shared<SearchQueryBranch>(n); b.constraints.push_back(std::move(c)); }
                out.push_back(std::move(b));
            }
            plan.explicit_conditions = true; return out;
        }
        if (const auto at = text.find("里有"); at != std::string::npos) {
            auto out = branch(text.substr(0, at), depth + 1);
            auto inner = words(text.substr(at + std::string_view("里有").size()), {}, SearchRole::Self, true, depth + 1);
            std::vector<SearchQueryBranch> result;
            for (auto b : out) for (const auto &n : inner) {
                SearchConstraint c; c.role = SearchRole::Contents; c.explicit_field = true; c.nested = std::make_shared<SearchQueryBranch>(n);
                auto copy = b; copy.constraints.push_back(std::move(c)); result.push_back(std::move(copy));
            }
            plan.explicit_conditions = true; return result;
        }
        for (const auto prefix : {std::string_view("制作"),std::string_view("制造"),std::string_view("make "),std::string_view("produce ")})
            if (text.starts_with(prefix) && catalog.exact(text, descriptor.domain).empty()) {
                auto result = words(text.substr(prefix.size()), {}, SearchRole::Output, false, depth + 1);
                for (auto &b : result) { SearchConstraint c; c.slot = SearchSlot::Action; c.concepts = {"action:produce"}; b.constraints.push_back(std::move(c)); }
                return result;
            }
        for (size_t at = 0; at < text.size();) {
            for (const auto prefix : {std::string_view("不要"),std::string_view("不含"),std::string_view("不是"),std::string_view("非"),std::string_view("not ")}) {
                if (!text.substr(at).starts_with(prefix) || !catalog.exact(text.substr(at), descriptor.domain).empty()) continue;
                const auto remainder=strip(text.substr(at+prefix.size()));
                if(remainder.empty())continue;
                size_t width=remainder.size();
                if(prefix!="不含") {
                    const auto heads=edges(remainder,0,{},SearchRole::Self,true);
                    if(heads.empty())continue;
                    width=0;for(const auto &edge:heads)width=std::max(width,edge.end);
                }
                auto negative = words(remainder.substr(0,width), {}, SearchRole::Self, true, depth + 1);
                if (negative.empty()) continue;
                bool resolved=true;
                for(auto b:negative)search_modify_constraints(b,[&](const auto &c){resolved &= !c.concepts.empty();});
                if(!resolved)continue;
                auto positive = at ? branch(text.substr(0, at), depth + 1) : std::vector<SearchQueryBranch>{{}};
                std::vector<SearchQueryBranch> result;
                for (auto b : positive) for (auto n : negative) {
                    if(prefix=="不含") {
                        search_modify_constraints(n,[](auto &c){c.negated_scope=true;});
                        SearchConstraint contents;contents.role=SearchRole::Contents;contents.nested=std::make_shared<SearchQueryBranch>(n);
                        SearchQueryBranch exists;exists.constraints.push_back(std::move(contents));
                        SearchConstraint excluded;excluded.negative=true;excluded.nested=std::make_shared<SearchQueryBranch>(std::move(exists));
                        b.constraints.push_back(std::move(excluded));
                    } else {search_modify_constraints(n,[](auto &c){c.negative=true;});search_append_branch(b,n);}
                    if(width<remainder.size()) {
                        for(const auto &tail:branch(remainder.substr(width),depth+1)){auto copy=b;search_append_branch(copy,tail);result.push_back(std::move(copy));}
                    } else result.push_back(std::move(b));
                }
                plan.explicit_conditions = true; return result;
            }
            const auto cp = decode_utf8_at(text, at); at += cp ? cp->second : 1;
        }
        return words(text);
    }
    SearchQueryPlan parse() {
        const auto text = strip(plan.input.text);
        // Registered nouns such as 不死生物 and names containing 或 take an
        // independent whole-name interpretation before operator parsing.
        auto pieces = catalog.exact(text, descriptor.domain).empty() ? alternatives(text) : std::vector<std::string>{text};
        if (std::any_of(pieces.begin(), pieces.end(), [](const auto &s) { return s.empty(); })) pieces = {text};
        bool explicit_any=false;
        for (const auto &piece : pieces) {
            plan.explicit_conditions=false;
            auto branches = branch(piece);
            bool recognized=false;
            for(auto b:branches)search_modify_constraints(b,[&](const auto &c){recognized|=!c.concepts.empty() || c.explicit_field;});
            if(!plan.explicit_conditions){
                SearchQueryBranch literal;literal.literal=true;literal.literal_has_structure=recognized;
                for(const auto &b:branches)literal.literal_guards.push_back(std::make_shared<SearchQueryBranch>(b));
                auto c=residual(piece,SearchSlot::LiteralName,SearchRole::Self,false);
                auto query=std::make_shared<PinyinSearchQuery>();query->assign(c.original_text.empty()?c.text:c.original_text);
                literal.literal_query=std::move(query);
                c.evidence=SearchEvidence::Confirmed;literal.constraints.push_back(std::move(c));
                plan.branches.push_back(std::move(literal));
            }
            for (auto &b : branches) plan.branches.push_back(std::move(b));
            explicit_any|=plan.explicit_conditions;
        }
        plan.explicit_conditions=explicit_any;
        return std::move(plan);
    }
};

static SearchTruth search_not(SearchTruth truth) {
    return truth == SearchTruth::Unknown ? truth : truth == SearchTruth::True ? SearchTruth::False : SearchTruth::True;
}
static unsigned search_name_edits(std::string_view source,std::string_view query) {
    const auto a=search_codepoints(source),b=search_codepoints(query);
    const bool han=std::any_of(b.begin(),b.end(),search_han);
    if(b.size()<(han?3u:4u))return UINT_MAX;
    const auto budget=std::min<size_t>(3,std::max<size_t>(1,b.size()/5));
    if(std::max(a.size(),b.size())-std::min(a.size(),b.size())>budget || (han && (a.empty() || a.back()!=b.back())))return UINT_MAX;
    std::vector<unsigned> row(b.size()+1);std::iota(row.begin(),row.end(),0u);
    for(size_t i=0;i<a.size();++i){auto diagonal=row[0];row[0]=unsigned(i+1);
        for(size_t j=0;j<b.size();++j){auto above=row[j+1];row[j+1]=std::min({row[j]+1,above+1,diagonal+unsigned(a[i]!=b[j])});diagonal=above;}}
    return row.back()<=budget?row.back():UINT_MAX;
}
struct SearchMatcher {
    std::shared_ptr<const SearchConceptCatalog> catalog;
    bool guard_only=false;
    explicit SearchMatcher(std::shared_ptr<const SearchConceptCatalog> value) : catalog(std::move(value)) {}
    const std::string *requested_ancestor(const std::string &value,const SearchConstraint &c,std::string_view domain) const {
        if(c.concepts.empty())return nullptr;
        if(!c.membership)c.membership=std::make_shared<const std::unordered_set<std::string>>(c.concepts.begin(),c.concepts.end());
        if(const auto hit=c.membership->find(value);hit!=c.membership->end())return &*hit;
        for(const auto &parent:catalog->parents(value,domain))if(const auto hit=c.membership->find(parent);hit!=c.membership->end())return &*hit;
        return nullptr;
    }
    std::vector<SearchObjectFacts> related(SearchRole role,const SearchObjectFacts &o,const SearchDescriptor &d) const {
        const std::string relation=role==SearchRole::Output?"PRODUCES":role==SearchRole::Input?"CONSUMES":role==SearchRole::Tool?"REQUIRES_TOOL":role==SearchRole::Contents?"CONTAINS":role==SearchRole::Decoration?"DECORATED_WITH":role==SearchRole::Component?"COMPONENT_OF":"";
        if(relation.empty())return {};
        std::vector<std::string> subjects;
        if(role==SearchRole::Input || role==SearchRole::Output || role==SearchRole::Tool){
            subjects.push_back(d.recipe_id);
            if(d.recipe_id.starts_with("job_type:"))subjects.push_back(d.recipe_id.substr(0,d.recipe_id.find(':',9)));
        } else if(role==SearchRole::Contents || (role==SearchRole::Component && d.kind==SearchCandidateKind::ItemInstance))subjects.push_back(o.entity_id);
        else {subjects=o.objects.values;subjects.push_back(o.entity_id);}
        std::vector<SearchObjectFacts> result;
        for(const auto &subject:subjects){
            const auto &index=role==SearchRole::Component?catalog->incoming:catalog->outgoing;
            const auto found=index.find(subject);if(found==index.end())continue;
            for(auto i:found->second){const auto &r=catalog->relations[i];
                if(r.relation!=relation || !SearchConceptCatalog::domain_matches(r.domain,d.domain) || condition(r.condition,d,o)!=SearchTruth::True)continue;
                const auto &id=role==SearchRole::Component?r.subject:r.object;
                SearchObjectFacts target;target.objects={{id},false,SearchEvidence::Confirmed,r.source};
                if(id.starts_with("material"))target.material={{id},false,SearchEvidence::Confirmed,r.source};
                result.push_back(std::move(target));
            }
        }
        return result;
    }
    SearchTruth graph_match(const SearchWordGraph &graph, const SearchObjectFacts &object,
            const SearchDescriptor &d, SearchMatchDecision &decision, bool nested) const {
        const auto evaluate = [&](const SearchObjectFacts &target, SearchMatchDecision &proof) {
            struct State { bool reached=false,unknown=false; SearchMatchDecision decision; };
            std::vector<std::array<State,2>> states(graph.edges.size());
            states[0][0]={true,false,proof};
            for(size_t at=0;at<graph.edges.size();++at)for(const auto &state:states[at]){
                if(!state.reached)continue;
                for(const auto &edge:graph.edges[at]){
                    auto next=state;
                    if(edge.constraint){
                        const auto truth=fact(*edge.constraint,target,d,next.decision);
                        if(truth==SearchTruth::False)continue;
                        next.unknown|=truth==SearchTruth::Unknown;
                        if(truth==SearchTruth::True){++next.decision.coverage;++next.decision.proof_count;}
                    }
                    auto &destination=states[edge.end][next.unknown?1:0];
                    if(!destination.reached||next.decision.order()<destination.decision.order())destination=std::move(next);
                }
            }
            if(states.back()[0].reached){proof=std::move(states.back()[0].decision);return SearchTruth::True;}
            return states.back()[1].reached?SearchTruth::Unknown:SearchTruth::False;
        };
        auto role=graph.role;
        if(nested && role==SearchRole::Output)role=SearchRole::Self;
        if(!nested&&role==SearchRole::Self&&d.kind==SearchCandidateKind::JobTemplate)role=SearchRole::Output;
        const std::vector<SearchObjectFacts> *targets=nullptr;bool complete=false;
        if(role==SearchRole::Output){targets=&d.outputs;complete=d.outputs_complete;}
        if(role==SearchRole::Input){targets=&d.inputs;complete=d.inputs_complete;}
        if(role==SearchRole::Tool){targets=&d.preserved_tools;complete=d.tools_complete;}
        if(role==SearchRole::Contents){targets=&object.contents;complete=object.contents_complete;}
        if(role==SearchRole::Component){targets=&object.components;complete=object.components_complete;}
        if(role==SearchRole::Decoration){targets=&object.decorations;complete=object.decorations_complete;}
        std::vector<SearchObjectFacts> inferred;
        if(targets && targets->empty() && !complete){inferred=related(role,object,d);targets=&inferred;}
        if(!targets)return evaluate(object,decision);
        bool unknown=!complete;
        for(const auto &target:*targets){
            auto proof=decision;const auto truth=evaluate(target,proof);
            if(truth==SearchTruth::True){decision=std::move(proof);return truth;}
            unknown|=truth==SearchTruth::Unknown;
        }
        return unknown?SearchTruth::Unknown:SearchTruth::False;
    }
    SearchTruth condition(std::string expression, const SearchDescriptor &d, const SearchObjectFacts &o, unsigned depth = 0) const {
        expression = trim(expression);
        if (expression.empty() || expression == "true") return SearchTruth::True;
        if (expression == "false") return SearchTruth::False;
        if (depth > 24) return SearchTruth::Unknown;
        const auto named = catalog->predicates.find(expression);
        if (named != catalog->predicates.end()) return condition(named->second, d, o, depth + 1);
        const auto open = expression.find('(');
        if (open == std::string::npos || expression.back() != ')') return SearchTruth::Unknown;
        const auto op = expression.substr(0, open);
        const auto body = expression.substr(open + 1, expression.size() - open - 2);
        std::vector<std::string> args;
        size_t begin = 0; int level = 0;
        for (size_t i = 0; i <= body.size(); ++i) {
            if (i == body.size() || (body[i] == ',' && !level)) { args.push_back(trim(body.substr(begin, i - begin))); begin = i + 1; }
            else if (body[i] == '(') ++level; else if (body[i] == ')') --level;
        }
        if (op == "not" && args.size() == 1) return search_not(condition(args[0], d, o, depth + 1));
        if (op == "and" || op == "or") {
            bool unknown = false;
            for (const auto &a : args) {
                const auto t = condition(a, d, o, depth + 1);
                if (op == "and" && t == SearchTruth::False) return t;
                if (op == "or" && t == SearchTruth::True) return t;
                unknown |= t == SearchTruth::Unknown;
            }
            return unknown ? SearchTruth::Unknown : op == "and" ? SearchTruth::True : SearchTruth::False;
        }
        if(args.size()==2 && (args[0]=="quantity" || args[0]=="quality" || args[0]=="wear")){
            const auto value=args[0]=="quantity"?o.quantity:args[0]=="quality"?o.quality:o.wear;
            if(!value)return SearchTruth::Unknown;
            try {size_t end=0;const auto expected=std::stoll(args[1],&end);if(end!=args[1].size())return SearchTruth::Unknown;
                bool accepted=false;
                if(op=="eq")accepted=*value==expected;else if(op=="ne")accepted=*value!=expected;
                else if(op=="lt")accepted=*value<expected;else if(op=="le")accepted=*value<=expected;
                else if(op=="gt")accepted=*value>expected;else if(op=="ge")accepted=*value>=expected;else return SearchTruth::Unknown;
                return accepted?SearchTruth::True:SearchTruth::False;
            } catch(...) {return SearchTruth::Unknown;}
        }
        if ((op == "eq" || op == "in") && args.size() >= 2) {
            std::vector<std::string> values,excluded; bool complete = true;
            if (args[0] == "mode") { values = {d.mode}; complete = !d.mode.empty(); }
            else if (args[0] == "place") {
                // Capability queries quantify over a permitted placement.
                // They do not assert the instance currently occupies it.
                if (d.mode == "capability" && d.place.empty()) return SearchTruth::True;
                values = {d.place}; complete = !d.place.empty();
            }
            else if (args[0] == "domain") values = {d.domain};
            else if (args[0] == "material") { values = o.material.values; complete = o.material.complete; }
            else if (args[0] == "state") { values = o.states.values;excluded=o.states.false_values; complete = o.states.complete; }
            else if (args[0] == "property") { values = o.properties.values; complete = o.properties.complete; }
            else if (args[0] == "owner") { values=o.owners.values;complete=o.owners.complete; }
            else if (args[0] == "workshop") { values=d.workshops.values;complete=d.workshops.complete; }
            else if (args[0] == "native_type") { values={o.native_type};complete=!o.native_type.empty(); }
            else if (args[0] == "definition") { values={o.definition_id};complete=!o.definition_id.empty(); }
            else if (args[0] == "material_state") {values=o.material_states.values;complete=o.material_states.complete;}
            else return SearchTruth::Unknown;
            for (const auto &v : values) for (size_t i = 1; i < args.size(); ++i) if (catalog->is_a(v, args[i],d.domain)) return SearchTruth::True;
            if(std::all_of(args.begin()+1,args.end(),[&](const auto &arg){return std::find(excluded.begin(),excluded.end(),arg)!=excluded.end();}))return SearchTruth::False;
            return complete ? SearchTruth::False : SearchTruth::Unknown;
        }
        return SearchTruth::Unknown;
    }
    SearchTruth set_match(const SearchFactSet &facts, const SearchConstraint &c, SearchMatchDecision &decision, std::string_view domain="items") const {
        const auto &values=facts.all_values();
        if(!c.concepts.empty() && !c.membership)c.membership=std::make_shared<const std::unordered_set<std::string>>(c.concepts.begin(),c.concepts.end());
        // An earlier inherited category must not outrank a later exact fact.
        // Both passes remain linear in the facts, independent of sense count.
        if(c.membership)for(const auto &value:values)if(c.membership->contains(value)) {
            if(value.starts_with("category:"))decision.match_class=std::max(decision.match_class,2u);
            decision.constraint_proof.push_back(facts.source.empty()?value:facts.source);
            return SearchTruth::True;
        }
        for (const auto &value : values)
            if (const auto *matched=requested_ancestor(value,c,domain)) {
                const auto &requested=*matched;
                const auto aliases=catalog->equivalents.find(value);
                const bool alias=aliases!=catalog->equivalents.end() && std::find(aliases->second.begin(),aliases->second.end(),requested)!=aliases->second.end();
                if (value != requested && !alias) { decision.match_class = std::max(decision.match_class, 2u); ++decision.relation_cost; }
                if(requested.starts_with("category:"))decision.match_class=std::max(decision.match_class,2u);
                decision.constraint_proof.push_back(facts.source.empty() ? value : facts.source);
                return SearchTruth::True;
            }
        if(!c.concepts.empty() && std::all_of(c.concepts.begin(),c.concepts.end(),[&](const auto &id){
            return std::find(facts.false_values.begin(),facts.false_values.end(),id)!=facts.false_values.end();
        }))return SearchTruth::False;
        return facts.complete && !c.concepts.empty() ? SearchTruth::False : SearchTruth::Unknown;
    }
    std::vector<std::string> weak_concepts(const SearchConstraint &c, const std::string &domain, SearchMatchDecision &decision,bool semantic_only=false) const {
        if(c.negative || c.negated_scope)return {};
        using Resolution=SearchConceptCatalog::Resolution;
        auto &cache=catalog->resolutions;
        const auto cache_key=domain+"\n"+std::to_string(int(c.slot))+":"+std::to_string(semantic_only)+":"+c.text+"\n"+c.original_text;
        if(const auto cached=cache.find(cache_key);cached!=cache.end()){
            decision.match_class=std::max(decision.match_class,cached->second.rank);
            decision.spelling_cost+=cached->second.cost;decision.semantic_distance=std::max(decision.semantic_distance,cached->second.distance);
            return cached->second.ids;
        }
        std::vector<std::string> found;
        SearchMatchDecision local;local.match_class=1;
        struct Save {
            std::unordered_map<std::string,Resolution> &cache;const std::string &key;std::vector<std::string> &found;SearchMatchDecision &decision,&local;
            ~Save(){
                std::sort(found.begin(),found.end());found.erase(std::unique(found.begin(),found.end()),found.end());
                if(cache.size()>=1024)cache.clear();
                cache.emplace(key,Resolution{found,local.match_class,local.spelling_cost,local.semantic_distance});
                decision.match_class=std::max(decision.match_class,local.match_class);
                decision.spelling_cost+=local.spelling_cost;decision.semantic_distance=std::max(decision.semantic_distance,local.semantic_distance);
            }
        } save{cache,cache_key,found,decision,local};
        const auto normalized = search_normalize(c.text);
        const auto points = search_codepoints(normalized);
        if (points.empty()) return std::vector<std::string>(found);
        const bool han = std::any_of(points.begin(), points.end(), search_han);
        const unsigned budget = points.size() < (han ? 3u : 4u) ? 0 : unsigned(std::min<size_t>(3, std::max<size_t>(1, points.size() / 5)));
        if(!semantic_only && !han && budget)catalog->prepare_phonetic();
        if(!semantic_only && budget)for (const auto &[surface,ids] : catalog->surfaces[static_cast<size_t>(c.slot)]) {
            if(std::none_of(ids.begin(),ids.end(),[&](auto id){return SearchConceptCatalog::domain_matches(catalog->lexemes[id].domain,domain);}))continue;
            const auto target = search_codepoints(surface);
            if (target.empty() || (han && points.back() != target.back())) continue;
            if (std::max(points.size(), target.size()) - std::min(points.size(), target.size()) > budget) continue;
            std::vector<unsigned> row(target.size() + 1); std::iota(row.begin(), row.end(), 0u);
            for (size_t i = 0; i < points.size(); ++i) {
                auto diagonal = row[0]; row[0] = unsigned(i + 1);
                for (size_t j = 0; j < target.size(); ++j) {
                    const auto above = row[j+1]; row[j+1] = std::min({row[j] + 1, above + 1, diagonal + unsigned(points[i] != target[j])}); diagonal = above;
                }
            }
            if (row.back() <= budget) {
                for(auto id:ids)if(SearchConceptCatalog::domain_matches(catalog->lexemes[id].domain,domain))found.push_back(catalog->lexemes[id].concept_id);
                local.spelling_cost = local.spelling_cost?std::min(local.spelling_cost,row.back()):row.back();
            }
        }
        if(!semantic_only && !han && budget)for(const auto &[spelling,ids]:catalog->phonetic){
            if(std::max(spelling.size(),normalized.size())-std::min(spelling.size(),normalized.size())>budget)continue;
            std::vector<unsigned> row(spelling.size()+1);std::iota(row.begin(),row.end(),0u);
            for(size_t i=0;i<normalized.size();++i){auto diagonal=row[0];row[0]=unsigned(i+1);
                for(size_t j=0;j<spelling.size();++j){auto above=row[j+1];row[j+1]=std::min({row[j]+1,above+1,diagonal+unsigned(normalized[i]!=spelling[j])});diagonal=above;}}
            if(row.back()>budget)continue;
            for(auto id:ids){const auto &l=catalog->lexemes[id];if(l.slot==c.slot && SearchConceptCatalog::domain_matches(l.domain,domain)){
                found.push_back(l.concept_id);local.spelling_cost=local.spelling_cost?std::min(local.spelling_cost,row.back()):row.back();}}
        }
        if(!semantic_only && !han && budget)for(const auto &[surface,ids]:catalog->polyphonic) {
            if(std::none_of(ids.begin(),ids.end(),[&](auto id){const auto &l=catalog->lexemes[id];return l.slot==c.slot && SearchConceptCatalog::domain_matches(l.domain,domain);}))continue;
            if(search_codepoints(surface).size()>normalized.size()+budget)continue;
            const auto cost=std::min(SearchSemanticPronunciations::distance(surface,normalized,false,budget),SearchSemanticPronunciations::distance(surface,normalized,true,budget));
            if(cost==UINT_MAX)continue;
            for(auto id:ids){const auto &l=catalog->lexemes[id];if(l.slot==c.slot && SearchConceptCatalog::domain_matches(l.domain,domain))found.push_back(l.concept_id);}
            local.spelling_cost=local.spelling_cost?std::min(local.spelling_cost,cost):cost;
        }
        if (!found.empty()) { local.match_class = 3; return std::vector<std::string>(found); }
        if(!semantic_only)return std::vector<std::string>(found);
        // Symbolic role and negation are never sent to the model. Search the
        // entire prototype radius in this invocation: no incomplete negative
        // is cached on pages without a safe native refresh callback.
        if (points.size() < 2 || points.size() > 64 || c.negative) return std::vector<std::string>(found);
        const auto *model = search_semantic_model(); if (!model) return std::vector<std::string>(found);
        const size_t slot = static_cast<size_t>(c.slot);
        if (!catalog->semantic[slot]) {
            auto tree = std::make_unique<SearchAnnTree>();
            auto &owners = catalog->semantic_owners[slot];
            std::unordered_map<std::string,std::vector<uint32_t>> surfaces;
            for(uint32_t id=0;id<catalog->lexemes.size();++id)if(catalog->lexemes[id].slot==c.slot)
                surfaces[catalog->lexemes[id].semantic_surface].push_back(id);
            for(const auto &[surface,ids]:surfaces) {
                tree->add(*model,surface,false);owners.resize(tree->points.size(),ids);
            }
            catalog->semantic[slot] = std::move(tree);
        }
        const auto &semantic_text=c.original_text.empty()?c.text:c.original_text;
        SearchAnnTree query; query.add_query(*model, semantic_text, search_semantic_query_words(semantic_text));
        if (query.points.empty()) return std::vector<std::string>(found);
        const auto &tree = *catalog->semantic[slot];
        tree.scan_matches(query.points.front().vector, points.size() == 2 ? 0.22f : 0.28f, [&](const auto &p) {
            const auto index = size_t(&p - tree.points.data());
            if (query.covered_by(query.points.front(), tree, p,model)) {
                for(auto id:catalog->semantic_owners[slot][index]) {
                    const auto &lexeme=catalog->lexemes[id];
                    if(SearchConceptCatalog::domain_matches(lexeme.domain,domain))found.push_back(lexeme.concept_id);
                }
                const auto distance=search_cosine_distance(query.points.front().vector,p.vector);
                local.semantic_distance=local.semantic_distance?std::min(local.semantic_distance,distance):distance;
            }
            return false;
        });
        if (!found.empty()) local.match_class = 4;
        return std::vector<std::string>(found);
    }
    SearchTruth fact(const SearchConstraint &original, const SearchObjectFacts &o,
            const SearchDescriptor &d, SearchMatchDecision &decision) const {
        if(!original.concepts.empty() && !original.membership)original.membership=std::make_shared<const std::unordered_set<std::string>>(original.concepts.begin(),original.concepts.end());
        const auto &c = original;
        if(guard_only && c.concepts.empty() && !c.explicit_field)return SearchTruth::Unknown;
        if(c.slot==SearchSlot::Material && c.concepts.empty() && !o.material_names.empty()) {
            const auto query=search_prepared_query(c.text);
            if(std::any_of(o.material_names.begin(),o.material_names.end(),[&](const auto &name){return search_prepared_name(name)->compute_match(*query);}))
                return c.negative?SearchTruth::False:SearchTruth::True;
        }
        // Resolve incomplete input against the requested field's own labels.
        // A material/profession fragment must never borrow the outer title.
        if(c.concepts.empty() && !c.text.empty()) {
            const SearchFactSet *field=c.slot==SearchSlot::Material?&o.material:c.slot==SearchSlot::State?&o.states:
                c.slot==SearchSlot::Owner?&o.owners:c.slot==SearchSlot::Purpose?&o.purposes:c.slot==SearchSlot::Action?&d.actions:nullptr;
            if(field) {
                auto resolved=c;
                const auto query=search_prepared_query(c.text);
                const auto matches=[&](std::string_view text){return !text.empty() && search_prepared_name(text)->compute_match(*query);};
                const auto resolve=[&](const std::string &id) {
                    if(c.slot==SearchSlot::Owner && ((id.starts_with("unit:") && id.substr(5)==c.text) ||
                        (id.starts_with("owner_name:") && matches(id.substr(11))) ||
                        (id.starts_with("profession:") && matches(id.substr(11)))))resolved.concepts.push_back(id);
                    if(const auto labels=catalog->by_concept.find(id);labels!=catalog->by_concept.end())
                        for(auto index:labels->second){const auto &word=catalog->lexemes[index];
                            if(word.slot==c.slot && SearchConceptCatalog::domain_matches(word.domain,d.domain) && matches(word.surface)){resolved.concepts.push_back(id);break;}
                        }
                };
                for(const auto &id:field->values)resolve(id);
                for(const auto &id:field->false_values)resolve(id);
                if(c.slot==SearchSlot::State)for(const auto &id:o.properties.values)resolve(id);
                if(c.slot==SearchSlot::Owner && resolved.concepts.empty() && std::all_of(c.text.begin(),c.text.end(),[](unsigned char ch){return std::isdigit(ch);}))resolved.concepts.push_back("unit:"+c.text);
                if(!resolved.concepts.empty()){resolved.evidence=SearchEvidence::Confirmed;return fact(resolved,o,d,decision);}
            }
        }
        if(c.slot==SearchSlot::Object && !c.text.empty() &&
            (c.concepts.empty() || (c.evidence!=SearchEvidence::Spelling && c.evidence!=SearchEvidence::Semantic))) {
            // A name fragment may narrow objects of a verified compatible
            // native type, but cannot turn a rack into a weapon or use the
            // caption of an input/tool as the name of a produced object.
            const bool compatible=c.concepts.empty() || (!o.native_type.empty() &&
                std::any_of(c.concepts.begin(),c.concepts.end(),[&](const auto &id){
                    if(catalog->is_a(id,o.native_type,d.domain))return true;
                    if(!id.starts_with("grammar:items::"))return false;
                    const auto end=id.find(':',15);const auto b=catalog->bindings.find(id.substr(8,end-8));
                    return b!=catalog->bindings.end() && b->second.native_type==o.native_type;
                }));
            if(compatible) {
                std::vector<std::string> needles{c.text};
                for(const auto &id:c.concepts)if(const auto words=catalog->by_concept.find(id);words!=catalog->by_concept.end())
                    for(auto index:words->second)if(catalog->lexemes[index].slot==SearchSlot::Object)needles.push_back(catalog->lexemes[index].surface);
                const auto query=search_prepared_query(c.text);
                const auto matches=[&](const std::string &name){
                    if(name.empty())return false;const auto prepared=search_prepared_name(name);
                    return std::any_of(needles.begin(),needles.end(),[&](const auto &needle){return prepared->literal.find(needle)!=std::string::npos;}) || prepared->compute_match(*query);
                };
                if(std::any_of(o.names.begin(),o.names.end(),matches))return c.negative?SearchTruth::False:SearchTruth::True;
                for(const auto &id:o.objects.values)if(const auto words=catalog->by_concept.find(id);words!=catalog->by_concept.end())
                    for(auto index:words->second)if(catalog->lexemes[index].slot==SearchSlot::Object && matches(catalog->lexemes[index].surface))
                        return c.negative?SearchTruth::False:SearchTruth::True;
            }
        }
        if(c.concepts.empty() && c.slot!=SearchSlot::Quantity && c.slot!=SearchSlot::LiteralName && !guard_only && !c.negative && !c.negated_scope) {
            for(bool semantic:{false,true}) {
                auto proof=decision;auto resolved=c;
                resolved.concepts=weak_concepts(c,d.domain,proof,semantic);
                if(resolved.concepts.empty())continue;
                resolved.evidence=semantic?SearchEvidence::Semantic:SearchEvidence::Spelling;
                if(fact(resolved,o,d,proof)==SearchTruth::True){decision=std::move(proof);return SearchTruth::True;}
            }
            return SearchTruth::Unknown;
        }
        SearchTruth result = SearchTruth::Unknown;
        switch (c.slot) {
        case SearchSlot::Object:
            result = set_match(o.objects, c, decision,d.domain);
            if(result==SearchTruth::Unknown && !o.native_type.empty() && !c.concepts.empty() &&
                std::all_of(c.concepts.begin(),c.concepts.end(),[&](const auto &requested){
                    if(requested==o.native_type || catalog->is_a(requested,o.native_type,d.domain))return false;
                    if(requested.starts_with("item_type:"))return true;
                    const auto &parents=catalog->parents(requested,d.domain);
                    return std::any_of(parents.begin(),parents.end(),[](const auto &parent){return parent.starts_with("item_type:");});
                }))result=SearchTruth::False;
            for(const auto &object:o.objects.values){
                const auto found=catalog->outgoing.find(object);if(found==catalog->outgoing.end())continue;
                for(auto index:found->second){
                    const auto &r=catalog->relations[index];
                    if((r.relation!="MEMBER_OF_CATEGORY" && r.relation!="IS_A" && r.relation!="INSTANCE_OF") || !SearchConceptCatalog::domain_matches(r.domain,d.domain))continue;
                    for(const auto &requested:c.concepts)if(catalog->is_a(r.object,requested,d.domain)){
                        const auto holds=condition(r.condition,d,o);
                        if(holds==SearchTruth::True){result=SearchTruth::True;decision.match_class=std::max(decision.match_class,2u);decision.relation_path.push_back(r.subject+" "+r.relation+" "+r.object);}
                        else if(holds==SearchTruth::Unknown && result!=SearchTruth::True)result=SearchTruth::Unknown;
                    }
                }
            }
            break;
        case SearchSlot::Material:
            result = set_match(o.material, c, decision,d.domain);
            if(result!=SearchTruth::True && !c.concepts.empty() && o.selectable_materials.complete && !o.selectable_materials.all_values().empty() &&
                std::all_of(o.selectable_materials.all_values().begin(),o.selectable_materials.all_values().end(),[&](const auto &value){
                    return requested_ancestor(value,c,d.domain)!=nullptr;
                })){
                result=SearchTruth::True;decision.constraint_proof.push_back("all native permitted materials satisfy the constraint");
            }
            if (result != SearchTruth::True && !c.explicit_field && !c.negative && !c.negated_scope && d.kind == SearchCandidateKind::JobTemplate &&
                    set_match(o.selectable_materials, c, decision,d.domain) == SearchTruth::True) {
                decision.match_class = 4; decision.constraint_proof.push_back("configurable output material"); result = SearchTruth::True;
            }
            break;
        case SearchSlot::State: {
            result = set_match(o.states, c, decision,d.domain);
            if(set_match(o.properties,c,decision,d.domain)==SearchTruth::True)result=SearchTruth::True;
            for(const auto &subject:o.objects.values)if(const auto edges=catalog->outgoing.find(subject);edges!=catalog->outgoing.end())
                for(auto index:edges->second){const auto &r=catalog->relations[index];
                    if(r.relation!="HAS_PROPERTY" || !SearchConceptCatalog::domain_matches(r.domain,d.domain))continue;
                    for(const auto &id:c.concepts)if(catalog->is_a(r.object,id,d.domain) && condition(r.condition,d,o)==SearchTruth::True){
                        result=SearchTruth::True;decision.relation_path.push_back(r.subject+" HAS_PROPERTY "+r.object);
                    }
                }
            break;
        }
        case SearchSlot::Owner:
            result=c.concepts.empty()?(o.owners.complete && o.owners.values.empty()?SearchTruth::False:SearchTruth::Unknown):set_match(o.owners,c,decision,d.domain);break;
        case SearchSlot::Action: result = set_match(d.actions, c, decision,d.domain); break;
        case SearchSlot::Quantity: {
            std::string text = trim(c.text); size_t parsed = 0;
            const bool candidate_quantity=d.kind==SearchCandidateKind::JobTemplate && c.role==SearchRole::Self &&
                (&o==static_cast<const SearchObjectFacts *>(&d) || std::any_of(d.outputs.begin(),d.outputs.end(),[&](const auto &output){return &o==&output;}));
            const auto &quantity=candidate_quantity?d.quantity:o.quantity;
            std::string op="=";
            for(const auto value:{">=","<=",">","<","="})if(text.starts_with(value)){op=value;text=trim(text.substr(op.size()));break;}
            try { const auto number = std::stoll(text, &parsed); if (parsed == text.size() && quantity) {
                const bool hit=op==">="?*quantity>=number:op=="<="?*quantity<=number:op==">"?*quantity>number:op=="<"?*quantity<number:*quantity==number;
                result=hit?SearchTruth::True:SearchTruth::False;
            } } catch (...) {}
            break;
        }
        case SearchSlot::Purpose: {
            result = set_match(o.purposes, c, decision,d.domain);
            if(set_match(d.workshops,c,decision,d.domain)==SearchTruth::True)result=SearchTruth::True;
            auto purposes=o.objects.values;
            if(!d.recipe_id.empty())purposes.push_back(d.recipe_id);
            for (const auto &object : purposes) {
                std::vector<std::string> subjects{object};
                const auto &parents=catalog->parents(object,d.domain);subjects.insert(subjects.end(),parents.begin(),parents.end());
                for (const auto &subject : subjects) {
                    const auto edges = catalog->outgoing.find(subject); if (edges == catalog->outgoing.end()) continue;
                    for (const auto index : edges->second) {
                        const auto &r = catalog->relations[index];
                        if ((r.relation != "STORES" && r.relation != "HAS_CAPABILITY" && r.relation != "USES_WORKSHOP" && r.relation != "PLACED_AS") ||
                                !SearchConceptCatalog::domain_matches(r.domain, d.domain)) continue;
                        auto capability = d; capability.mode = "capability";
                        for (const auto &requested : c.concepts) if (catalog->is_a(r.object, requested,d.domain)) {
                            const auto holds=condition(r.condition,capability,o);
                            if(holds==SearchTruth::True){result = SearchTruth::True; decision.match_class = std::max(decision.match_class, 2u);
                                decision.relation_path.push_back(r.subject + " " + r.relation + " " + r.object); ++decision.relation_cost;}
                            else if(holds==SearchTruth::Unknown && result!=SearchTruth::True)result=SearchTruth::Unknown;
                        }
                    }
                }
            }
            break;
        }
        case SearchSlot::LiteralName: {
            // A related object's unavailable name stays unknown. The outer
            // caption cannot prove a contained object's or component's name.
            const bool candidate_name=&o==static_cast<const SearchObjectFacts *>(&d) ||
                (d.kind==SearchCandidateKind::JobTemplate && c.role==SearchRole::Self &&
                 std::any_of(d.outputs.begin(),d.outputs.end(),[&](const auto &output){return &output==&o;}));
            auto names=candidate_name?std::vector<std::string>{d.original_caption,d.display_caption,d.display_name}:o.names;
            if(candidate_name)names.insert(names.end(),d.lexical_labels.begin(),d.lexical_labels.end());
            if(candidate_name && !c.explicit_field)names.insert(names.end(),d.text_fields.begin(),d.text_fields.end());
            const auto query=search_prepared_query(c.text);
            for(const auto &name:names)if(!name.empty()) {
                const auto prepared=search_prepared_name(name);
                if(prepared->literal.find(c.text)!=std::string::npos || (!c.quoted && prepared->compute_match(*query))){result=SearchTruth::True;break;}
            }
            if(result!=SearchTruth::True && !guard_only && !c.explicit_field && !c.negative && !c.negated_scope && d.custom_name_origin!="custom") {
                const auto aliases_match=[&](const auto &ids) {
                    for(const auto &id:ids)if(const auto words=catalog->by_concept.find(id);words!=catalog->by_concept.end())
                        for(auto index:words->second) {
                            const auto &word=catalog->lexemes[index];
                            if(word.slot!=SearchSlot::LiteralName || !SearchConceptCatalog::domain_matches(word.domain,d.domain))continue;
                            for(const auto &name:names)if(!name.empty() && search_prepared_name(name)->literal.find(word.surface)!=std::string::npos)return true;
                        }
                    return false;
                };
                if(aliases_match(c.concepts))result=SearchTruth::True;
                if(result!=SearchTruth::True)for(const auto &name:names)if(!name.empty() && search_prepared_name(name)->spelling_match(*query)) {
                    result=SearchTruth::True;decision.match_class=std::max(decision.match_class,3u);break;
                }
                if(result!=SearchTruth::True && c.concepts.empty())for(bool semantic:{false,true}) {
                    auto proof=decision;const auto ids=weak_concepts(c,d.domain,proof,semantic);
                    if(aliases_match(ids)){decision=std::move(proof);result=SearchTruth::True;break;}
                }
            }
            if(guard_only && result!=SearchTruth::True)return SearchTruth::Unknown;
            if (result == SearchTruth::Unknown && std::any_of(names.begin(),names.end(),[](const auto &name){return !name.empty();})) result = SearchTruth::False;
            break;
        }
        }
        // Field-specific relations never become an untyped synonym closure.
        // Known native values remain authoritative over an authored rule.
        const SearchFactSet *known=c.slot==SearchSlot::Material?&o.material:c.slot==SearchSlot::State?&o.states:nullptr;
        if(known && result!=SearchTruth::True && !known->complete){
            auto subjects=c.slot==SearchSlot::State?std::vector<std::string>{o.entity_id}:o.objects.values;
            const auto relation=c.slot==SearchSlot::State?"HAS_STATE":"HAS_MATERIAL";
            for(const auto &subject:subjects)if(const auto edges=catalog->outgoing.find(subject);edges!=catalog->outgoing.end())
                for(auto index:edges->second){const auto &r=catalog->relations[index];
                    if(r.relation!=relation || !SearchConceptCatalog::domain_matches(r.domain,d.domain) || condition(r.condition,d,o)!=SearchTruth::True)continue;
                    for(const auto &id:c.concepts)if(catalog->is_a(r.object,id,d.domain)){
                        result=SearchTruth::True;decision.match_class=std::max(decision.match_class,2u);decision.relation_path.push_back(r.subject+" "+r.relation+" "+r.object);
                    }
                }
        }
        return c.negative ? search_not(result) : result;
    }
    SearchTruth conjunction(const SearchQueryBranch &branch, const SearchObjectFacts &object,
            const SearchDescriptor &d, SearchMatchDecision &decision, bool nested = false) const {
        bool unknown = false;
        if(branch.graph){
            const auto truth=graph_match(*branch.graph,object,d,decision,nested);
            if(truth==SearchTruth::False)return truth;
            unknown=truth==SearchTruth::Unknown;
        }
        std::map<SearchRole, std::vector<const SearchConstraint *>> groups;
        for (const auto &c : branch.constraints) {
            auto role=c.role;
            if(nested && role==SearchRole::Output)role=SearchRole::Self;
            if (!nested && role == SearchRole::Self && d.kind == SearchCandidateKind::JobTemplate &&
                    c.slot != SearchSlot::Action && c.slot != SearchSlot::LiteralName && c.slot != SearchSlot::Quantity)
                role = SearchRole::Output;
            groups[role].push_back(&c);
        }
        for (const auto &[role, constraints] : groups) {
            const std::vector<SearchObjectFacts> *targets = nullptr; bool complete = false;
            if (role == SearchRole::Output) { targets = &d.outputs; complete = d.outputs_complete; }
            if (role == SearchRole::Input) { targets = &d.inputs; complete = d.inputs_complete; }
            if (role == SearchRole::Tool) { targets = &d.preserved_tools; complete = d.tools_complete; }
            if (role == SearchRole::Contents) { targets = &object.contents; complete = object.contents_complete; }
            if (role == SearchRole::Decoration) { targets = &object.decorations;complete=object.decorations_complete; }
            if (role == SearchRole::Component) { targets = &object.components;complete=object.components_complete; }
            std::vector<SearchObjectFacts> inferred;
            if(targets && targets->empty() && !complete){inferred=related(role,object,d);targets=&inferred;}
            const auto evaluate = [&](const SearchObjectFacts &candidate, SearchMatchDecision &proof) {
                bool missing = false;
                for (const auto *constraint : constraints) {
                    const auto &c=*constraint;
                    auto truth = c.nested ? conjunction(*c.nested, candidate, d, proof, true) : fact(c, candidate, d, proof);
                    if(c.nested && c.negative)truth=search_not(truth);
                    if (truth == SearchTruth::False) return truth;
                    missing |= truth == SearchTruth::Unknown;
                    if (truth == SearchTruth::True) { ++proof.coverage; ++proof.proof_count; }
                }
                return missing ? SearchTruth::Unknown : SearchTruth::True;
            };
            SearchTruth truth = SearchTruth::Unknown;
            if (!targets) truth = evaluate(object, decision);
            else {
                bool missing = !complete;
                for (const auto &target : *targets) {
                    auto proof = decision;
                    const auto t = evaluate(target, proof);
                    if (t == SearchTruth::True) { decision = std::move(proof); truth = t; break; }
                    missing |= t == SearchTruth::Unknown;
                }
                if (truth != SearchTruth::True) truth = missing ? SearchTruth::Unknown : SearchTruth::False;
            }
            if (truth == SearchTruth::False) return truth;
            unknown |= truth == SearchTruth::Unknown;
        }
        return unknown ? SearchTruth::Unknown : SearchTruth::True;
    }
    SearchTruth evaluate(const SearchQueryBranch &branch,const SearchDescriptor &d,SearchMatchDecision &decision) const {
        if(d.kind==SearchCandidateKind::JobTemplate) {
            const auto inferred=d.outputs.empty() && !d.outputs_complete?related(SearchRole::Output,d,d):std::vector<SearchObjectFacts>{};
            const auto &outputs=d.outputs.empty()?inferred:d.outputs;
            if(outputs.empty())return conjunction(branch,d,d,decision,true);
            bool unknown=!d.outputs_complete;
            for(const auto &output:outputs) {
                auto proof=decision;const auto truth=conjunction(branch,output,d,proof,true);
                if(truth==SearchTruth::True){decision=std::move(proof);return truth;}
                unknown|=truth==SearchTruth::Unknown;
            }
            return unknown?SearchTruth::Unknown:SearchTruth::False;
        }
        if(d.kind==SearchCandidateKind::ItemGroup && !d.members.empty()) {
            bool unknown=false;
            for(const auto &member:d.members) {
                auto proof=decision;const auto truth=conjunction(branch,member,d,proof);
                if(truth==SearchTruth::True){decision=std::move(proof);return truth;}
                unknown|=truth==SearchTruth::Unknown;
            }
            return unknown?SearchTruth::Unknown:SearchTruth::False;
        }
        return conjunction(branch,d,d,decision);
    }
    SearchMatchDecision match(const SearchDescriptor &d, const SearchQueryPlan &plan, bool native_text_hit) const {
        SearchMatchDecision best; best.native_ordinal = d.native_ordinal;
        if (plan.input.text.empty()) { best.accepted = true; best.match_class = 0; return best; }
        const auto &needle = plan.input.text;
        bool whole = false;
        for (const auto *name : {&d.original_caption, &d.display_caption, &d.display_name}) whole |= !name->empty() && search_prepared_name(*name)->literal == needle;
        if(whole && !plan.explicit_conditions){best.accepted=true;best.match_class=0;return best;}
        for (const auto &branch : plan.branches) {
            SearchMatchDecision current; current.native_ordinal = d.native_ordinal; current.match_class = 1;
            SearchTruth truth = SearchTruth::Unknown;
            if (branch.literal) {
                const auto &literal=branch.constraints.front();const auto &literal_needle=literal.text;
                bool exact_name=false;
                for(const auto *name:{&d.original_caption,&d.display_caption,&d.display_name})exact_name|=!name->empty() && search_prepared_name(*name)->literal==literal_needle;
                if (exact_name) { truth = SearchTruth::True; current.match_class = 0; }
                else {
                    const auto &query=*branch.literal_query;
                    std::vector<const std::string *> names{&d.original_caption,&d.display_caption,&d.display_name};
                    for(const auto &name:d.lexical_labels)names.push_back(&name);
                    for(const auto &name:d.text_fields)names.push_back(&name);
                    for (const auto *name : names) {
                        if(name->empty())continue;
                        const auto prepared=search_prepared_name(*name);const auto &normalized=prepared->literal;
                        if(normalized.find(literal_needle)!=std::string::npos){truth=SearchTruth::True;break;}
                        const bool phonetic=std::any_of(literal_needle.begin(),literal_needle.end(),[](unsigned char c){return c<128 && std::isalpha(c);});
                        if(phonetic && prepared->compute_match(query)){truth=SearchTruth::True;break;}
                        if(d.custom_name_origin!="custom" && query.similarity.han && search_ordered_compound_matches(search_codepoints(prepared->normalized),query.similarity)) {
                            truth=SearchTruth::True;current.match_class=3;
                        }
                        if(d.kind==SearchCandidateKind::NamedEntity || d.kind==SearchCandidateKind::TextRecord || !branch.literal_has_structure) {
                            const auto edits=search_name_edits(normalized,literal_needle);
                            if(edits!=UINT_MAX){truth=SearchTruth::True;current.match_class=3;current.spelling_cost=edits;}
                        }
                    }
                    if (native_text_hit && literal_needle==needle) truth = SearchTruth::True;
                }
                if(truth==SearchTruth::True && !exact_name && branch.literal_has_structure &&
                    d.kind!=SearchCandidateKind::NamedEntity && d.kind!=SearchCandidateKind::TextRecord) {
                    SearchMatcher guard(catalog);guard.guard_only=true;
                    bool compatible=branch.literal_guards.empty();
                    for(const auto &b:branch.literal_guards) {
                        auto proof=current;
                        if(guard.evaluate(*b,d,proof)!=SearchTruth::False){compatible=true;break;}
                    }
                    if(!compatible)truth=SearchTruth::False;
                }
            } else truth=evaluate(branch,d,current);
            if (truth == SearchTruth::Unknown && !best.accepted) best.completion = SearchCompletion::Unknown;
            if (truth != SearchTruth::True) continue;
            current.accepted = true;
            if (whole) current.match_class = 0;
            if(branch.literal && current.match_class<=1)return current;
            if (!best.accepted || current.order() < best.order()) best = std::move(current);
        }
        return best;
    }
};

// A string-only adapter can provide an exact complete noun production. It
// never scans arbitrary prose for item types, contents, decoration or states.
static SearchDescriptor search_caption_descriptor_uncached(std::string_view source, std::string_view target,
        SearchCandidateKind kind, std::string domain, const SearchConceptCatalog &catalog) {
    SearchDescriptor d;
    if (search_active_descriptor()) d = *search_active_descriptor();
    else { d.kind = kind; d.domain = std::move(domain); }
    d.original_caption = native_text_to_utf8(source); if(!target.empty())d.display_caption = target;
    d.snapshot_generation = catalog.generation;
    if((d.domain=="plants" || d.domain=="creature.types") && d.custom_name_origin!="custom") {
        for(auto id:catalog.exact(search_normalize(d.original_caption),d.domain,SearchSlot::Object,false)) {
            const auto &word=catalog.lexemes[id];
            if(word.concept_id.starts_with("plant:") || word.concept_id.starts_with("creature:") || word.concept_id.starts_with("caste:"))d.objects.values.push_back(word.concept_id);
        }
        if(d.objects.values.size()==1){d.objects.complete=true;d.objects.source="complete native plant name";}
        else if(!d.objects.values.empty()) {
            auto common=d.objects.values;const auto &parents=catalog.parents(common.front(),d.domain);common.insert(common.end(),parents.begin(),parents.end());
            std::erase_if(common,[&](const auto &id){return !std::all_of(d.objects.values.begin(),d.objects.values.end(),[&](const auto &value){return catalog.is_a(value,id,d.domain);});});
            d.objects.values=std::move(common);d.objects.complete=false;
        }
        if(d.domain=="creature.types")return d;
    }
    if (d.custom_name_origin == "custom" || d.kind == SearchCandidateKind::NamedEntity || d.kind == SearchCandidateKind::TextRecord) return d;
    if (d.objects.complete || (d.kind == SearchCandidateKind::JobTemplate && !d.outputs.empty())) return d;
    if(d.kind==SearchCandidateKind::PropertyChoice || d.kind==SearchCandidateKind::MaterialChoice) {
        auto caption=search_normalize(d.original_caption);
        if(d.kind==SearchCandidateKind::PropertyChoice && caption.ends_with(" (dye)"))caption.resize(caption.size()-6);
        auto ids=catalog.exact(caption,d.domain,{},false);
        if(ids.empty() && !d.display_caption.empty())ids=catalog.exact(search_normalize(d.display_caption),d.domain,{},false);
        for(auto id:ids){const auto &word=catalog.lexemes[id];
            auto *set=word.slot==SearchSlot::Material?&d.material:word.slot==SearchSlot::State?&d.states:word.slot==SearchSlot::Purpose?&d.purposes:nullptr;
            if(set){set->values.push_back(word.concept_id);set->source="native column label";set->evidence=SearchEvidence::Grammar;}
        }
        return d;
    }
    // Only complete, unambiguous grammar paths may supply caption facts. All
    // native facts win; fuzzy/semantic paths are never used for description.
    auto text = search_normalize(d.original_caption);
    bool produce = false;
    if (d.kind == SearchCandidateKind::JobTemplate)
        for (const auto prefix : {std::string_view("make "),std::string_view("construct "),std::string_view("forge "),std::string_view("carve "),std::string_view("assemble "),std::string_view("brew ")})
            if (text.starts_with(prefix)) { text.erase(0, prefix.size()); produce = true; break; }
    if (d.kind == SearchCandidateKind::JobTemplate && !produce) return d;
    SearchQueryParser parser(catalog, d, text);
    parser.allow_phonetic=false;
    const auto branches = parser.words(text);
    std::vector<SearchObjectFacts> facts;
    for (const auto &branch : branches) {
        if (!branch.graph) continue;
        struct Partial { SearchObjectFacts facts; size_t nouns=0; };
        std::vector<std::vector<Partial>> states(branch.graph->edges.size());
        states[0].push_back({});
        for (size_t at=0;at<states.size();++at) for(const auto &partial:states[at])
            for(const auto &edge:branch.graph->edges[at]) {
                auto next=partial;
                if(edge.constraint) {
                    const auto &c=*edge.constraint;
                    if(c.concepts.empty() || c.negative || (c.slot!=SearchSlot::Object && c.slot!=SearchSlot::Material))continue;
                    // Ambiguous labels are query alternatives, not multiple
                    // simultaneous native identities. A caption alone can
                    // only establish their common confirmed ancestor.
                    auto concepts=c.concepts;
                    if(concepts.size()>1){
                        const auto &parents=catalog.parents(concepts.front(),d.domain);
                        concepts.insert(concepts.end(),parents.begin(),parents.end());
                        std::erase_if(concepts,[&](const auto &candidate){return candidate=="category:item" || !std::all_of(c.concepts.begin(),c.concepts.end(),[&](const auto &id){return catalog.is_a(id,candidate,d.domain);});});
                        if(concepts.empty())continue;
                    }
                    if(c.slot==SearchSlot::Object && ++next.nouns>1)continue;
                    auto &set=c.slot==SearchSlot::Object?next.facts.objects:next.facts.material;
                    set.values.insert(set.values.end(),concepts.begin(),concepts.end());
                    std::sort(set.values.begin(),set.values.end());
                    set.values.erase(std::unique(set.values.begin(),set.values.end()),set.values.end());
                    set.evidence=SearchEvidence::Grammar;set.source="complete caption grammar";
                    // A caption proves positive common facts, never absence
                    // of all other subtypes/materials of an ambiguous name.
                    set.complete=c.concepts.size()==1 && c.slot==SearchSlot::Material && std::any_of(set.values.begin(),set.values.end(),[](const auto &id){return id.starts_with("material:") || id.starts_with("material_raw:");});
                    if(c.slot==SearchSlot::Object)for(const auto &id:concepts) {
                        if(id.starts_with("item_type:"))next.facts.native_type=id;
                        for(const auto &parent:catalog.parents(id,d.domain))if(parent.starts_with("item_type:"))next.facts.native_type=parent;
                    }
                }
                auto &destination=states[edge.end];
                if(std::none_of(destination.begin(),destination.end(),[&](const auto &old){
                    return old.facts.objects.values==next.facts.objects.values && old.facts.material.values==next.facts.material.values;
                }))destination.push_back(std::move(next));
            }
        for(auto &partial:states.back())if(partial.nouns || d.kind==SearchCandidateKind::MaterialChoice)
            facts.push_back(std::move(partial.facts));
    }
    if (facts.size() == 1) {
        if (d.kind == SearchCandidateKind::JobTemplate) { d.outputs = std::move(facts); d.actions = {{"action:produce"},true,SearchEvidence::Grammar,"job caption production"}; }
        else { if (!d.objects.complete) {d.objects = facts.front().objects;if(d.native_type.empty())d.native_type=facts.front().native_type;} if (!d.material.complete) d.material = facts.front().material; }
    }
    return d;
}
static SearchDescriptor search_caption_descriptor(std::string_view source,std::string_view target,
        SearchCandidateKind kind,std::string domain,const SearchConceptCatalog &catalog) {
    const auto *active=search_active_descriptor();
    if(active){kind=active->kind;domain=active->domain;}
    const auto finish=[&](const SearchDescriptor &learned) {
        if(!active)return learned;
        auto d=*active;d.original_caption=native_text_to_utf8(source);if(!target.empty())d.display_caption=target;
        d.snapshot_generation=catalog.generation;
        if(d.objects.values.empty()){d.objects=learned.objects;if(d.native_type.empty())d.native_type=learned.native_type;}
        else if(!d.objects.complete && !d.native_type.empty() && !learned.objects.values.empty() &&
            std::all_of(learned.objects.values.begin(),learned.objects.values.end(),[&](const auto &id){return catalog.is_a(id,d.native_type,d.domain);}))d.objects=learned.objects;
        if(d.material.values.empty() && !d.material.complete)d.material=learned.material;
        if(d.states.values.empty() && d.states.false_values.empty() && !d.states.complete && !learned.states.values.empty())d.states=learned.states;
        if(d.purposes.values.empty() && !d.purposes.complete)d.purposes=learned.purposes;
        if(d.outputs.empty() && !d.outputs_complete)d.outputs=learned.outputs;
        if(d.actions.values.empty() && !d.actions.complete)d.actions=learned.actions;
        return d;
    };
    if(active && (active->custom_name_origin=="custom" || (kind==SearchCandidateKind::NamedEntity && domain!="plants") || kind==SearchCandidateKind::TextRecord ||
        active->objects.complete || (kind==SearchCandidateKind::JobTemplate && !active->outputs.empty()) ||
        (kind==SearchCandidateKind::MaterialChoice && active->material.complete)))return finish({});
    auto &cache=catalog.captions;
    const auto key=domain+":"+std::to_string(int(kind))+"\n"+std::string(source)+"\n"+std::string(target);
    if(const auto found=cache.find(key);found!=cache.end())return finish(found->second);
    struct Scope { const SearchDescriptor *saved=search_active_descriptor();Scope(){search_active_descriptor()=nullptr;}~Scope(){search_active_descriptor()=saved;} } scope;
    auto learned=search_caption_descriptor_uncached(source,target,kind,std::move(domain),catalog);
    if(cache.size()<16384)cache.emplace(key,learned);
    return finish(learned);
}
static SearchMatchDecision search_association_match(const SearchDescriptor &d, std::string_view query, bool native_hit = false) {
    auto catalog = search_concept_catalog(d.kind!=SearchCandidateKind::TextRecord && d.kind!=SearchCandidateKind::PropertyChoice && d.domain!="names" && d.domain!="legends" && d.domain!="journal" && d.domain!="conversation");
    // Native filters already enumerate eligible candidate identities. Evaluate
    // their current facts directly; copying each row into an unused inverse
    // index here made every keypress rebuild the complete candidate catalog.
    auto &cache=catalog->plans;
    const auto key = d.domain + "\n" + std::to_string(int(d.kind)) + "\n" + std::string(query);
    auto found = cache.find(key);
    if (found == cache.end()) {
        if (cache.size() >= 128) cache.clear();
        found = cache.emplace(key, std::make_shared<SearchQueryPlan>(SearchQueryParser(*catalog, d, query).parse())).first;
    }
    return SearchMatcher(std::move(catalog)).match(d, *found->second, native_hit || search_native_text_hit());
}
static bool search_association_text(std::string_view source, std::string_view target, std::string_view query,
        SearchCandidateKind kind, std::string domain, bool native_hit = false) {
    if(const auto *active=search_active_descriptor()){kind=active->kind;domain=active->domain;}
    const auto catalog = search_concept_catalog(kind!=SearchCandidateKind::TextRecord && kind!=SearchCandidateKind::PropertyChoice && domain!="names" && domain!="legends" && domain!="journal" && domain!="conversation");
    return search_association_match(search_caption_descriptor(source, target, kind, std::move(domain), *catalog), query, native_hit).accepted;
}
