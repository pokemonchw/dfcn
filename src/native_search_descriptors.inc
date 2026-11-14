// All functions in this file run under NativeInputCallbackScope. No captured
// pointer escapes into the immutable search catalog or a background worker.
#include "search_native_rules.inc"
template<class T> static bool search_native_field(uintptr_t object, std::string_view type,
        std::string_view name, T &value) {
    return native_history_copy(native_history_object_member(object, type, name, sizeof(T)), value);
}
static std::string search_native_string(uintptr_t object, std::string_view type, std::string_view name) {
    std::string result;
    native_history_copy_string(native_history_object_member(object, type, name, sizeof(NativeString)), result);
    return result;
}
struct SearchNativeJobParameters {
    uintptr_t object=0;
    std::string_view type;
    size_t begin=0;
    std::vector<unsigned char> bytes;
    SearchNativeJobParameters(uintptr_t address,std::string_view name):object(address),type(name) {
        const auto *layout=native_history_object_layout(type);if(!layout)return;
        size_t end=0;begin=SIZE_MAX;
        for(size_t i=0;i<layout->count;++i) {
            const auto &f=layout->fields[i];if(!f.name)continue;const std::string_view member(f.name);
            if(member=="jobtype" || member=="job_type" || member=="itemtype" || member=="item_type" || member=="subtype" || member=="item_subtype" ||
               member=="material" || member=="mat_type" || member=="matgloss" || member=="mat_index" || member=="bd" || member=="specflag.whole" ||
               member=="specdata.race" || member=="job_item_flag" || member=="material_category" || member=="art_specifier" || member=="art_specifier_id1" ||
               member=="art_specifier_id2" || member=="mstring" || member=="reaction_name") {begin=std::min(begin,f.native);end=std::max(end,f.native+f.size);}
        }
        if(begin==SIZE_MAX || end<begin || end-begin>4096 || object>UINTPTR_MAX-end)return;
        bytes.resize(end-begin);if(!native_history_copy_bytes(object+begin,bytes.data(),bytes.size()))bytes.clear();
    }
    const unsigned char *field(std::string_view name,size_t size) const {
        const auto address=native_history_object_member(object,type,name,size);
        if(!address || address<object || address-object<begin || address-object-begin>bytes.size() || size>bytes.size()-(address-object-begin))return nullptr;
        return bytes.data()+address-object-begin;
    }
    template<class T> bool read(std::string_view name,T &value) const {
        const auto *p=field(name,sizeof(T));if(!p)return false;std::memcpy(&value,p,sizeof(T));return true;
    }
    std::string text(std::string_view name) const {
        std::string result;if(const auto *p=field(name,sizeof(NativeString)))
            native_history_copy_string_snapshot(native_history_object_member(object,type,name,sizeof(NativeString)),p,result);
        return result;
    }
};
static bool search_native_flag(uintptr_t object, std::string_view type, std::string_view name, unsigned bit, bool &value) {
    const auto address = native_history_object_member(object, type, name, 16);
    return address && native_history_page_flag(object, address - object, address - object + 8, bit, value);
}
static std::vector<uint8_t> search_native_flags(uintptr_t object,std::string_view type,std::string_view name) {
    const auto address=native_history_object_member(object,type,name,16);
    std::array<unsigned char,16> header{};uintptr_t pointer=0;int32_t count=0;
    if(!address || !native_history_copy_bytes(address,header.data(),header.size()))return {};
    std::memcpy(&pointer,header.data(),sizeof(pointer));std::memcpy(&count,header.data()+8,sizeof(count));
    if(count<=0 || count>4096 || !pointer)return {};
    std::vector<uint8_t> flags(static_cast<size_t>(count));
    if(!native_history_copy_bytes(pointer,flags.data(),flags.size()))flags.clear();
    return flags;
}
static std::vector<std::string> search_native_raw_tokens(uintptr_t object, std::string_view type) {
    std::vector<std::string> result;
    NativeBorrowedVector<uintptr_t> lines;
    if (!native_history_read_vector(native_history_object_member(object, type, "raw_strings", 24), lines) || !lines.valid(1048576)) return result;
    for (size_t i = 0; i < lines.size(); ++i) {
        std::string line;
        if (!native_history_copy_string(native_history_vector_at(lines, i), line)) continue;
        for (size_t at = line.find('['); at != std::string::npos; at = line.find('[', at + 1)) {
            const auto end = line.find(']', at + 1); if (end == std::string::npos) break;
            result.push_back(line.substr(at + 1, end - at - 1));
        }
    }
    return result;
}
static std::string search_native_material_id(int16_t type, int32_t index) {
    return "material:" + std::to_string(type) + ":" + std::to_string(index);
}
static SearchNativeMaterial search_native_material(int16_t type, int32_t index, uintptr_t material) {
    SearchNativeMaterial out; out.id = search_native_material_id(type, index);
    out.categories.push_back(type==0?"material_domain:inorganic":type>=619?"material_domain:generated":type>=419?"material_domain:plant":type>=219?"material_domain:figure":type>=19?"material_domain:creature":"material_domain:builtin");
    out.raw_id = search_native_string(material, "material", "id");
    if(type==0 && index>=0){
        NativeBorrowedVector<uintptr_t> list;
        if(native_history_read_vector(native_history_global(0x24ec8c8),list) && static_cast<size_t>(index)<list.size())
            out.raw_id=search_native_string(native_history_vector_at(list,static_cast<size_t>(index)),"inorganic_raw","id");
    }
    const auto prefix = search_native_string(material, "material", "prefix");
    // The material's explicit origin prefix is a native name form (oak,
    // creature source, historical figure), not a guessed string suffix.
    if(!prefix.empty())out.names.push_back(prefix);
    for (const auto field : {"state_name", "state_adj"}) {
        const auto array = native_history_object_member(material, "material", field, 6 * sizeof(NativeString));
        for (size_t i = 0; array && i < 6; ++i) {
            std::string name;
            if (native_history_copy_string(array + i * sizeof(NativeString), name) && !name.empty()) {
                if(std::find(out.names.begin(),out.names.end(),name)==out.names.end())out.names.push_back(name);
                if (!prefix.empty()) name = prefix + " " + name;
                if (std::find(out.names.begin(), out.names.end(), name) == out.names.end()) out.names.push_back(std::move(name));
            }
        }
    }
    if (type == 0 && index >= 0) out.categories.push_back("material_raw:" + out.raw_id);
    const auto flags=search_native_flags(material,"material","flags");
    for (const auto &[bit, name, category] : search_native_material_flags) {
        if (bit/8<flags.size() && (flags[bit/8]&(1u<<(bit%8)))) {
            out.categories.push_back(std::string("material_flag:")+name);
            if(*category)out.categories.push_back(std::string("material_category:") + category);
        }
    }
    NativeBorrowedVector<uintptr_t> codes;NativeBorrowedVector<int16_t> types;NativeBorrowedVector<int32_t> indices;
    if(native_history_read_vector(native_history_object_member(material,"material","reaction_class",24),codes) && codes.valid(65536))
        for(size_t i=0;i<codes.size();++i){std::string code;if(native_history_copy_string(native_history_vector_at(codes,i),code))out.categories.push_back("reaction_class:"+code);}
    if(native_history_read_vector(native_history_object_member(material,"material","reaction_product.id",24),codes) && codes.valid(65536) &&
       native_history_copy(native_history_object_member(material,"material","reaction_product.material.mat_type",24),types) && types.valid(65536) &&
       native_history_copy(native_history_object_member(material,"material","reaction_product.material.mat_index",24),indices) && indices.valid(65536)) {
        for(size_t i=0;i<std::min({codes.size(),types.size(),indices.size()});++i){
            std::string code;int16_t type=-1;int32_t index=-1;
            if(native_history_copy_string(native_history_vector_at(codes,i),code) &&
                native_history_copy(reinterpret_cast<uintptr_t>(types.begin+i),type) && native_history_copy(reinterpret_cast<uintptr_t>(indices.begin+i),index) && type>=0)
                out.reaction_products.emplace(code,search_native_material_id(type,index));
        }
    }
    return out;
}
struct SearchNativeDefinitionList { uintptr_t coordinate; const char *type, *native_type; };
static constexpr SearchNativeDefinitionList search_native_definition_lists[] = {
    {0x11b638,"itemdef_weaponst","WEAPON"},{0x11b650,"itemdef_trapcompst","TRAPCOMP"},
    {0x11b668,"itemdef_toyst","TOY"},{0x11b680,"itemdef_toolst","TOOL"},
    {0x11b908,"itemdef_instrumentst","INSTRUMENT"},{0x11b920,"itemdef_armorst","ARMOR"},
    {0x11b938,"itemdef_ammost","AMMO"},{0x11b950,"itemdef_siegeammost","SIEGEAMMO"},
    {0x11b968,"itemdef_glovesst","GLOVES"},{0x11b980,"itemdef_shoesst","SHOES"},
    {0x11b998,"itemdef_shieldst","SHIELD"},{0x11b9b0,"itemdef_helmst","HELM"},{0x11b9c8,"itemdef_pantsst","PANTS"}};
static std::string search_native_definition_id(std::string_view type, int16_t subtype, std::string_view raw) {
    return "active:" + std::string(type) + ":" + std::to_string(subtype) + ":" + std::string(raw);
}
static SearchObjectFacts search_native_tuple(int16_t type, int16_t subtype, int16_t material, int32_t index,
        const SearchWorldSnapshot &snapshot, const SearchConceptCatalog &catalog) {
    SearchObjectFacts out;
    const auto binding = catalog.bindings.find("native_type:" + std::to_string(type));
    if (type>=0 && binding != catalog.bindings.end()) {
        out.native_type = binding->second.native_type;
        out.objects = {{out.native_type},true,SearchEvidence::Native,"item_type"};
        if(std::any_of(std::begin(search_native_definition_lists),std::end(search_native_definition_lists),[&](const auto &list){return out.native_type==std::string("item_type:")+list.native_type;}))out.objects.complete=false;
        if (subtype >= 0) if(const auto found=snapshot.definition_index.find(out.native_type+":"+std::to_string(subtype));found!=snapshot.definition_index.end()) {
                const auto &definition=snapshot.definitions[found->second];
                out.definition_id = definition.id; out.objects.values.insert(out.objects.values.begin(), definition.id);
                out.objects.complete=true;
                out.names={definition.singular,definition.plural};
                out.purposes = definition.purposes; out.properties = definition.properties;
                for(const auto &property:definition.properties.values){
                    if(property.starts_with("raw:LAYER:") || property.starts_with("native:props.layer:"))out.equipment_slots.values.push_back(property);
                    if(property.starts_with("raw:SIZE:") || property.starts_with("raw:MINIMUM_SIZE:") || property.starts_with("native:size:") || property.starts_with("native:minimum_size:"))out.size_constraints.values.push_back(property);
                    if(property.starts_with("raw:"))out.subtype_traits.values.push_back(property);
                }
                out.objects.values.insert(out.objects.values.end(), definition.categories.begin(), definition.categories.end());
            }
    }
    if (material >= 0 && (index>=0 || (material>0 && material<19) || material>=619)) {
        out.material = {{search_native_material_id(material,index)},true,SearchEvidence::Native,"base material type/index"};
        const auto found = snapshot.material_index.find(out.material.values.front());
        if (found != snapshot.material_index.end()) {
            const auto &material=snapshot.materials[found->second];
            out.material.values.insert(out.material.values.end(),material.categories.begin(),material.categories.end());
        }
        else {
            struct Cache {uint64_t world=0,revision=0;std::unordered_map<std::string,SearchNativeMaterial> materials;};
            auto &cache=reloadable_thread_state<Cache,struct SearchSupplementalMaterialsTag>();
            if(cache.world!=snapshot.identity_generation || cache.revision!=catalog.revision){cache.materials.clear();cache.world=snapshot.identity_generation;cache.revision=catalog.revision;}
            const auto id=out.material.values.front();auto known=cache.materials.find(id);
            if(known==cache.materials.end()) {
                uintptr_t object=0;
                if(native_history_material_object(native_history_profile_base(),material,index,object) && object)
                    known=cache.materials.emplace(id,search_native_material(material,index,object)).first;
            }
            if(known!=cache.materials.end()) {
                const auto &definition=known->second;
                out.material.values.insert(out.material.values.end(),definition.categories.begin(),definition.categories.end());
                out.material_names=definition.names;
                // Supplemental figure materials supply owned facts without
                // invalidating every query, caption and ANN index mid-list.
                for(const auto &name:definition.names)for(auto word:catalog.exact(search_normalize(name),"materials",SearchSlot::Material,false))
                    if(catalog.lexemes[word].concept_id.starts_with("material_grammar:"))out.material.values.push_back(catalog.lexemes[word].concept_id);
            } else out.material.complete=false;
        }
    }
    if (out.native_type == "item_type:BOX") {
        // The native enum is BOX for both hard chests and soft bags. Keep the
        // enum in native_type and the material-conditioned lexical subtype in
        // objects; a shared physical enum does not make their names aliases.
        const bool soft = std::any_of(out.material.values.begin(),out.material.values.end(),[](const auto &id){
            return id=="material_category:leather" || id=="material_category:cloth" || id=="material_category:silk" || id=="material_category:yarn";
        });
        if(soft){std::erase(out.objects.values,"item_type:BOX");out.objects.values.push_back("subtype:BAG");}
    }
    if(std::find(out.properties.values.begin(),out.properties.values.end(),"conditional:inorganic_armor")!=out.properties.values.end()){
        if(std::find(out.material.values.begin(),out.material.values.end(),"material_domain:inorganic")!=out.material.values.end()){
            std::erase(out.objects.values,"category:clothing");out.objects.values.push_back("category:armor");
        }
    }
    return out;
}
static void search_native_selectable_parameters(SearchDescriptor &descriptor) {
    descriptor.selectable_parameters.clear();
    const auto append=[&](std::string_view role,auto &objects){
        for(size_t i=0;i<objects.size();++i)if(!objects[i].selectable_materials.all_values().empty()) {
            objects[i].selectable_materials.freeze();
            descriptor.selectable_parameters.emplace(std::string(role)+":"+std::to_string(i)+":material",objects[i].selectable_materials);
        }
    };
    append("output",descriptor.outputs);append("input",descriptor.inputs);append("tool",descriptor.preserved_tools);
}
static void search_native_recipes(SearchWorldSnapshot &snapshot, const SearchConceptCatalog &catalog) {
    NativeBorrowedVector<uintptr_t> reactions;
    if (!native_history_read_vector(native_history_global(0x23d14f0 + 0x125d78), reactions) || !reactions.valid(1048576)) return;
    for (size_t i = 0; i < reactions.size(); ++i) {
        const auto reaction = native_history_vector_at(reactions, i);
        SearchDescriptor d; d.kind = SearchCandidateKind::JobTemplate; d.domain = "jobs";
        const auto code = search_native_string(reaction,"reaction","code"); if (code.empty()) continue;
        d.recipe_id = "reaction:" + code;
        d.original_caption = search_native_string(reaction,"reaction","name");
        d.actions = {{"action:produce"},true,SearchEvidence::Native,code};
        NativeBorrowedVector<int32_t> building_types,building_subtypes,building_custom;
        if(native_history_copy(native_history_object_member(reaction,"reaction","building.type",24),building_types) && building_types.valid(65536) &&
           native_history_copy(native_history_object_member(reaction,"reaction","building.subtype",24),building_subtypes) && building_subtypes.valid(65536) &&
           native_history_copy(native_history_object_member(reaction,"reaction","building.custom",24),building_custom) && building_custom.valid(65536)){
            for(size_t j=0;j<std::min({building_types.size(),building_subtypes.size(),building_custom.size()});++j){int32_t type=-1,sub=-1,custom=-1;
                if(native_history_copy(reinterpret_cast<uintptr_t>(building_types.begin+j),type) && native_history_copy(reinterpret_cast<uintptr_t>(building_subtypes.begin+j),sub) && native_history_copy(reinterpret_cast<uintptr_t>(building_custom.begin+j),custom))
                    d.workshops.values.push_back("building:"+std::to_string(type)+":"+std::to_string(sub)+":"+std::to_string(custom));
            }
            d.workshops.source="reaction building requirements";
        }
        std::unordered_map<std::string, SearchObjectFacts> reagents;
        NativeBorrowedVector<uintptr_t> list;
        if (native_history_read_vector(native_history_object_member(reaction,"reaction","reagents",24),list) && list.valid(65536)) {
            d.inputs_complete = d.tools_complete = true;
            for (size_t j = 0; j < list.size(); ++j) {
                const auto reagent = native_history_vector_at(list,j);
                if (!native_history_object_is(reagent,"reaction_reagent_itemst")) { d.inputs_complete = d.tools_complete = false; continue; }
                int16_t type=-1, sub=-1, mat=-1, idx=-1; uint32_t flags=0; int32_t quantity=0;
                if (!search_native_field(reagent,"reaction_reagent_itemst","item_type",type) ||
                    !search_native_field(reagent,"reaction_reagent_itemst","item_subtype",sub) ||
                    !search_native_field(reagent,"reaction_reagent_itemst","mat_type",mat) ||
                    !search_native_field(reagent,"reaction_reagent_itemst","mat_index",idx) ||
                    !search_native_field(reagent,"reaction_reagent_itemst","flags",flags)) { d.inputs_complete = d.tools_complete = false; continue; }
                auto facts = search_native_tuple(type,sub,mat,idx,snapshot,catalog);
                facts.entity_id=search_native_string(reagent,"reaction_reagent_itemst","code");
                const auto required_product=search_native_string(reagent,"reaction_reagent_itemst","has_material_reaction_product");
                const auto required_class=search_native_string(reagent,"reaction_reagent_itemst","reaction_class");
                if(mat<0 && (!required_product.empty() || !required_class.empty())) {
                    const std::vector<std::string> empty;
                    const auto products=snapshot.materials_by_product.find(required_product);
                    const auto classes=snapshot.materials_by_category.find("reaction_class:"+required_class);
                    const auto &choices=!required_product.empty()?(products==snapshot.materials_by_product.end()?empty:products->second):
                        (classes==snapshot.materials_by_category.end()?empty:classes->second);
                    for(const auto &id:choices) {
                        const auto &material=snapshot.materials[snapshot.material_index.at(id)];
                        if(!required_product.empty() && !material.reaction_products.contains(required_product))continue;
                        if(!required_class.empty() && std::find(material.categories.begin(),material.categories.end(),"reaction_class:"+required_class)==material.categories.end())continue;
                        facts.selectable_materials.values.push_back(material.id);
                    }
                }
                // This enumerates the material domain for the copied material
                // predicates. Other reagent restrictions remain separate
                // properties, rather than becoming output material facts.
                facts.selectable_materials.complete=snapshot.material_catalog_complete && mat<0 && (!required_product.empty() || !required_class.empty());
                facts.selectable_materials.evidence=SearchEvidence::Configurable;facts.selectable_materials.source="reaction reagent material constraints";
                for(const auto field:{"flags1","flags2","flags3","flags4","flags5","metal_ore","min_dimension","has_tool_use"}){
                    int32_t value=0;if(search_native_field(reagent,"reaction_reagent_itemst",field,value))
                        facts.properties.values.push_back(std::string("reagent:")+field+":"+std::to_string(value));
                }
                if (search_native_field(reagent,"reaction_reagent_itemst","quantity",quantity)) facts.quantity=quantity;
                reagents[search_native_string(reagent,"reaction_reagent_itemst","code")] = facts;
                if (flags & 1) d.preserved_tools.push_back(std::move(facts)); else d.inputs.push_back(std::move(facts));
            }
        }
        if (native_history_read_vector(native_history_object_member(reaction,"reaction","products",24),list) && list.valid(65536)) {
            d.outputs_complete = true;
            for (size_t j=0;j<list.size();++j) {
                const auto product=native_history_vector_at(list,j);
                if (!native_history_object_is(product,"reaction_product_itemst")) { d.outputs_complete=false; continue; }
                int16_t type=-1,sub=-1,mat=-1,count=0; int32_t index=-1;
                if (!search_native_field(product,"reaction_product_itemst","item_type",type) ||
                    !search_native_field(product,"reaction_product_itemst","item_subtype",sub) ||
                    !search_native_field(product,"reaction_product_itemst","mat_type",mat) ||
                    !search_native_field(product,"reaction_product_itemst","mat_index",index)) { d.outputs_complete=false; continue; }
                auto facts=search_native_tuple(type,sub,mat,index,snapshot,catalog);
                if(search_native_field(product,"reaction_product_itemst","count",count)) facts.quantity=count;
                bool same=false;
                if (mat < 0 && search_native_flag(product,"reaction_product_itemst","flags",0,same) && same) {
                    const auto source=search_native_string(product,"reaction_product_itemst","get_material.reagent_code");
                    if (const auto at=reagents.find(source);at!=reagents.end()) {facts.material=at->second.material;facts.selectable_materials=at->second.selectable_materials;}
                }
                bool derived=false;
                if(mat<0 && search_native_flag(product,"reaction_product_itemst","flags",1,derived) && derived){
                    const auto source=search_native_string(product,"reaction_product_itemst","get_material.reagent_code");
                    const auto code=search_native_string(product,"reaction_product_itemst","get_material.product_code");
                    if(const auto at=reagents.find(source);at!=reagents.end()){
                        for(const auto &id:at->second.material.values)if(const auto found=snapshot.material_index.find(id);found!=snapshot.material_index.end()) {
                            const auto &material=snapshot.materials[found->second];
                            if(const auto target=material.reaction_products.find(code);target!=material.reaction_products.end())facts.material={{target->second},true,SearchEvidence::Native,"GET_MATERIAL_PRODUCT:"+code};
                        }
                        for(const auto &id:at->second.selectable_materials.values)if(const auto found=snapshot.material_index.find(id);found!=snapshot.material_index.end()) {
                            const auto &material=snapshot.materials[found->second];
                            if(const auto target=material.reaction_products.find(code);target!=material.reaction_products.end())facts.selectable_materials.values.push_back(target->second);
                        }
                        facts.selectable_materials.evidence=SearchEvidence::Configurable;facts.selectable_materials.source="GET_MATERIAL_PRODUCT:"+code;
                        facts.selectable_materials.complete=at->second.selectable_materials.complete;
                    }
                }
                // PRODUCT_TO_CONTAINER is a placement role. It never makes the
                // preserved container a second produced item.
                const auto container=search_native_string(product,"reaction_product_itemst","product_to_container");
                if(!container.empty())facts.properties.values.push_back("placed_in_reagent:"+container);
                d.outputs.push_back(std::move(facts));
            }
        }
        for(auto &output:d.outputs)if(output.selectable_materials.complete && !output.selectable_materials.values.empty()) {
            std::vector<std::string> common;bool first=true,known=true;
            for(const auto &id:output.selectable_materials.values){
                const auto found=snapshot.material_index.find(id);
                if(found==snapshot.material_index.end()){known=false;break;}
                const auto &material=snapshot.materials[found->second];
                if(first){common=material.categories;first=false;}
                else std::erase_if(common,[&](const auto &category){return std::find(material.categories.begin(),material.categories.end(),category)==material.categories.end();});
            }
            if(known){output.material.values.insert(output.material.values.end(),common.begin(),common.end());output.material.source="all permitted reaction product materials";}
        }
        search_native_selectable_parameters(d);
        snapshot.recipes.emplace(code,std::move(d));
    }
}
static bool search_native_query_needs_materials() {
    const auto &query=search_native_query_hint();if(query.empty())return false;
    struct Cache {uint64_t revision=0;std::string query;bool needed=false;};
    auto &cache=reloadable_thread_state<Cache,struct SearchMaterialDemandTag>();const auto revision=RULESETS.resource_revision();
    if(cache.revision==revision && cache.query==query)return cache.needed;
    SearchDescriptor d;d.kind=SearchCandidateKind::JobTemplate;d.domain="jobs";
    const auto catalog=search_concept_catalog(false);const auto plan=SearchQueryParser(*catalog,d,query).parse();
    bool needed=false;
    for(auto branch:plan.branches)search_modify_constraints(branch,[&](const auto &c){
        // A name unknown to the resource-only vocabulary can still be an
        // active RAW material. Load that vocabulary before deciding its slot;
        // staging must never turn a missing catalog into a negative result.
        needed|=c.slot==SearchSlot::Material || (c.slot==SearchSlot::Object && c.concepts.empty() && !c.quoted) ||
            std::find(c.concepts.begin(),c.concepts.end(),"category:armor")!=c.concepts.end() ||
            std::find(c.concepts.begin(),c.concepts.end(),"category:clothing")!=c.concepts.end();
    });
    cache={revision,query,needed};return needed;
}
static void refresh_native_search_world(bool force,bool item_domain,bool force_materials) {
    uintptr_t world = 0;
    if (!native_history_copy(native_history_global(0x24ebb58),world)) return;
    auto published=search_world_snapshot_storage();
    if (!world) { g_search_world_snapshot.store({},std::memory_order_release); return; }
    const bool material_domain=item_domain && (force_materials || (published && published->world==world && published->material_catalog_complete) || search_native_query_needs_materials());
    struct State { uint64_t stamp=0,serial=0;std::chrono::steady_clock::time_point inspected{}; };
    auto &state=reloadable_thread_state<State,struct NativeSearchWorldGenerationTag>();
    const auto now=std::chrono::steady_clock::now();
    // RAW definitions are static between world/list changes. Dynamic item
    // state is read separately on every match and is never covered by this.
    if(!force && published && published->world==world && (!item_domain || published->item_catalog_complete) && (!material_domain || published->material_catalog_complete) && now-state.inspected<std::chrono::milliseconds(250))return;
    state.inspected=now;
    uint64_t stamp=world;
    const auto mix=[&](uint64_t n){stamp^=n+0x9e3779b97f4a7c15ULL+(stamp<<6)+(stamp>>2);};
    for(const auto &spec:search_native_definition_lists){
        NativeBorrowedVector<uintptr_t> list;
        if(native_history_read_vector(native_history_global(0x23d14f0+spec.coordinate),list)){
            mix(reinterpret_cast<uintptr_t>(list.begin));mix(reinterpret_cast<uintptr_t>(list.end));
            if(list.size()){mix(native_history_vector_at(list,0));mix(native_history_vector_at(list,list.size()-1));}
        }
    }
    for(const auto coordinate:{uintptr_t(0x24ec8c8),uintptr_t(0x24ec8f8),uintptr_t(0x24eca68),uintptr_t(0x23d14f0+0x125d78)}){
        NativeBorrowedVector<uintptr_t> list;
        if(native_history_read_vector(native_history_global(coordinate),list)){mix(reinterpret_cast<uintptr_t>(list.begin));mix(reinterpret_cast<uintptr_t>(list.end));}
    }
    int32_t save1=0,save2=0;
    native_history_copy(native_history_global(0x23d14f0+0x26d488),save1);
    native_history_copy(native_history_global(0x23d14f0+0x26d48c),save2);mix(save1);mix(save2);
    std::string package="active-packages";
    NativeBorrowedVector<uintptr_t> mods;NativeBorrowedVector<int32_t> versions;
    if(native_history_read_vector(native_history_global(0x23d14f0+0x26d570),mods) && mods.valid(65536) &&
       native_history_copy(native_history_global(0x23d14f0+0x26d588),versions) && versions.valid(65536))
        for(size_t i=0;i<mods.size();++i){std::string id;int32_t version=0;
            if(native_history_copy_string(native_history_vector_at(mods,i),id)){
                if(i<versions.size())native_history_copy(reinterpret_cast<uintptr_t>(versions.begin+i),version);
                package+="/"+id+"@"+std::to_string(version);
            }
        }
    package+="/world:"+std::to_string(save1)+":"+std::to_string(save2);
    for(unsigned char ch:package)mix(ch);
    if(published && state.stamp==stamp && (!item_domain || published->item_catalog_complete) && (!material_domain || published->material_catalog_complete))return;
    auto snapshot=std::make_shared<SearchWorldSnapshot>(); snapshot->world=world;snapshot->generation=++state.serial;
    static std::atomic<uint64_t> world_serial{1};snapshot->identity_generation=published && state.stamp==stamp?published->identity_generation:world_serial.fetch_add(1);
    const bool reuse_definitions=published && state.stamp==stamp && published->item_catalog_complete;
    if(reuse_definitions){snapshot->identities=published->identities;snapshot->definitions=published->definitions;snapshot->components=published->components;}
    if(!reuse_definitions)for(const auto &[coordinate,type,domain,grammar,prefix]:{
        std::tuple{uintptr_t(0x24ec8f8),"plant_raw","plants","::plants::","plant:"},
        std::tuple{uintptr_t(0x24eca68),"creature_raw","units","::creatures::","creature:"}}) {
        NativeBorrowedVector<uintptr_t> list;
        if(!native_history_read_vector(native_history_global(coordinate),list) || !list.valid(1048576))continue;
        for(size_t i=0;i<list.size();++i) {
            const auto object=native_history_vector_at(list,i);
            const auto raw=search_native_string(object,type,std::string_view(type)=="plant_raw"?"id":"creature_id");
            if(raw.empty())continue;
            SearchNativeName identity{std::string(prefix)+raw,domain,grammar,{},{}};
            const auto names=native_history_object_member(object,type,"name",32);
            for(size_t j=0;names && j<(std::string_view(type)=="plant_raw"?1u:3u);++j) {
                std::string name;if(native_history_copy_string(names+j*sizeof(NativeString),name) && !name.empty())identity.names.push_back(native_text_to_utf8(name));
            }
            if(std::string_view(type)=="plant_raw") {
                const auto plural=search_native_string(object,type,"name_plural");if(!plural.empty())identity.names.push_back(native_text_to_utf8(plural));
            } else {
                NativeBorrowedVector<uintptr_t> castes;
                if(native_history_read_vector(native_history_object_member(object,type,"caste",24),castes) && castes.valid(65536))
                    for(size_t j=0;j<castes.size();++j) {
                        const auto caste=native_history_vector_at(castes,j);const auto id=search_native_string(caste,"caste_raw","caste_id");
                        SearchNativeName child{"caste:"+raw+":"+id,domain,grammar,identity.id,{}};
                        const auto names=native_history_object_member(caste,"caste_raw","caste_name",32);
                        for(size_t k=0;names && k<3;++k){std::string name;if(native_history_copy_string(names+k*sizeof(NativeString),name) && !name.empty())child.names.push_back(native_text_to_utf8(name));}
                        snapshot->identities.push_back(std::move(child));
                    }
            }
            snapshot->identities.push_back(std::move(identity));
        }
    }
    if(item_domain && !reuse_definitions)for(const auto &spec:search_native_definition_lists){
        NativeBorrowedVector<uintptr_t> list;
        if(!native_history_read_vector(native_history_global(0x23d14f0+spec.coordinate),list)||!list.valid(1048576))continue;
        for(size_t i=0;i<list.size();++i){
            const auto object=native_history_vector_at(list,i);
            SearchNativeDefinition definition;
            definition.raw_id=search_native_string(object,spec.type,"id");if(definition.raw_id.empty())continue;
            int16_t subtype=-1;if(!search_native_field(object,spec.type,"subtype",subtype))continue;
            definition.native_type=std::string("item_type:")+spec.native_type;
            definition.subtype=subtype;
            definition.id=search_native_definition_id(definition.native_type,subtype,definition.raw_id)+":"+package;
            definition.package=package;
            definition.singular=search_native_string(object,spec.type,"name");
            definition.plural=search_native_string(object,spec.type,"name_plural");
            definition.adjective=search_native_string(object,spec.type,"adjective");
            bool wearable=false,protective=false,metal_levels=false;
            const auto tokens=search_native_raw_tokens(object,spec.type);
            for(const auto &token:tokens){
                if(token.starts_with("TOOL_USE:"))definition.purposes.values.push_back("tool_use:"+token.substr(9));
                else if(token=="FURNITURE")definition.categories.push_back("category:furniture");
                else if(token.starts_with("LAYER:"))wearable=true;
                else if(token.starts_with("ARMORLEVEL:"))protective=token.substr(11)!="0";
                else if(token=="METAL_ARMOR_LEVELS")metal_levels=true;
                definition.properties.values.push_back("raw:"+token);
            }
            const auto flags=search_native_flags(object,spec.type,"flags");
            for(const auto &flag:search_native_definition_flags)if(std::string_view(flag.type)==spec.type){
                if(flag.bit/8<flags.size() && (flags[flag.bit/8]&(1u<<(flag.bit%8)))){
                    definition.properties.values.push_back(std::string("raw:")+flag.name);
                    if(std::string_view(flag.name)=="FURNITURE")definition.categories.push_back("category:furniture");
                    if(std::string_view(flag.name)=="METAL_ARMOR_LEVELS")metal_levels=true;
                }
            }
            NativeBorrowedVector<int16_t> uses;
            if(native_history_copy(native_history_object_member(object,spec.type,"tool_use",24),uses) && uses.valid(65536)){
                definition.purposes.complete=true;
                for(size_t j=0;j<uses.size();++j){int16_t use=-1;if(native_history_copy(reinterpret_cast<uintptr_t>(uses.begin+j),use))
                    for(const auto &entry:search_native_tool_uses)if(entry.value==use)definition.purposes.values.push_back(std::string("tool_use:")+entry.name);}
            }
            for(const auto field:{"container_capacity","size","minimum_size","props.layer"}){int32_t value=0;
                if(search_native_field(object,spec.type,field,value))definition.properties.values.push_back(std::string("native:")+field+":"+std::to_string(value));
            }
            int8_t armor=0;int32_t layer=0;
            if(search_native_field(object,spec.type,"armorlevel",armor))protective=armor>0;
            if(search_native_field(object,spec.type,"props.layer",layer))wearable=true;
            if(wearable && !protective && !metal_levels)definition.categories.push_back("category:clothing");
            if(protective)definition.categories.push_back("category:armor");
            if(metal_levels && !protective)definition.properties.values.push_back("conditional:inorganic_armor");
            definition.properties.complete=!tokens.empty();
            definition.properties.source=definition.purposes.source=definition.id;
            snapshot->definitions.push_back(std::move(definition));
        }
    }
    if(item_domain) {
    NativeBorrowedVector<uintptr_t> instruments;
    if(!reuse_definitions && native_history_read_vector(native_history_global(0x23d14f0+0x11b908),instruments) && instruments.valid(1048576))
        for(size_t i=0;i<instruments.size();++i){
            const auto instrument=native_history_vector_at(instruments,i);int16_t subtype=-1;
            if(!search_native_field(instrument,"itemdef_instrumentst","subtype",subtype))continue;
            const auto parent=std::find_if(snapshot->definitions.begin(),snapshot->definitions.end(),[&](const auto &d){return d.native_type=="item_type:INSTRUMENT" && d.subtype==subtype;});
            if(parent==snapshot->definitions.end())continue;
            NativeBorrowedVector<uintptr_t> pieces;
            if(!native_history_read_vector(native_history_object_member(instrument,"itemdef_instrumentst","pieces",24),pieces) || !pieces.valid(65536))continue;
            for(size_t j=0;j<pieces.size();++j){const auto piece=native_history_vector_at(pieces,j);
                SearchNativeComponent component;component.parent=parent->id;
                component.id=parent->id+":component:"+search_native_string(piece,"instrument_piece","type");
                component.name=search_native_string(piece,"instrument_piece","name");component.plural=search_native_string(piece,"instrument_piece","name_plural");
                const auto tool=search_native_string(piece,"instrument_piece","id");
                const auto definition=std::find_if(snapshot->definitions.begin(),snapshot->definitions.end(),[&](const auto &d){return d.native_type=="item_type:TOOL" && d.raw_id==tool;});
                if(definition!=snapshot->definitions.end())component.tool_definition=definition->id;
                snapshot->components.push_back(std::move(component));
            }
        }
    if(material_domain) {
    const auto material=[&](int16_t type,int32_t index){
        uintptr_t object=0;
        if(native_history_material_object(native_history_profile_base(),type,index,object)&&object)
            snapshot->materials.push_back(search_native_material(type,index,object));
    };
    for(int16_t type=1;type<19;++type)material(type,-1);
    for(int16_t type=619;type<=658;++type)material(type,-1);
    NativeBorrowedVector<uintptr_t> inorganics;
    if(native_history_read_vector(native_history_global(0x24ec8c8),inorganics)&&inorganics.valid(1048576))
        for(size_t i=0;i<inorganics.size();++i)material(0,static_cast<int32_t>(i));
    for(const auto &spec: {std::tuple{uintptr_t(0x24ec8f8),"plant_raw",int16_t(419)},std::tuple{uintptr_t(0x24eca68),"creature_raw",int16_t(19)}}){
        NativeBorrowedVector<uintptr_t> owners;
        if(!native_history_read_vector(native_history_global(std::get<0>(spec)),owners)||!owners.valid(1048576))continue;
        for(size_t i=0;i<owners.size();++i){
            NativeBorrowedVector<uintptr_t> materials;
            const auto object=native_history_vector_at(owners,i);
            if(!native_history_read_vector(native_history_object_member(object,std::get<1>(spec),"material",24),materials)||!materials.valid(200))continue;
            for(size_t j=0;j<materials.size();++j)material(static_cast<int16_t>(std::get<2>(spec)+j),static_cast<int32_t>(i));
        }
    }
    snapshot->material_catalog_complete=true;
    }
    // Build dependent recipes against the same snapshot. Publication is one
    // final assignment, so readers never see half a catalog.
    snapshot->index_facts();
    SearchConceptCatalog catalog(RULESETS.resource_revision(),snapshot,false);
    search_native_recipes(*snapshot,catalog);
    snapshot->item_catalog_complete=true;
    }
    state.stamp=stamp;g_search_world_snapshot.store(std::move(snapshot),std::memory_order_release);
}
static SearchDescriptor search_native_job(uintptr_t record, bool workshop, uintptr_t owner=0, uint64_t generation=0) {
    refresh_native_search_world();
    SearchDescriptor out;out.kind=SearchCandidateKind::JobTemplate;out.domain="jobs";
    const auto snapshot=search_world_snapshot_storage();if(!snapshot)return out;
    out.candidate_id={owner,record,snapshot->identity_generation,generation};out.state_version=generation;
    const char *type=workshop?"interface_button_building_new_jobst":"manager_order_template";
    if(workshop && !native_history_object_is(record,type)){out.kind=SearchCandidateKind::MenuCategory;return out;}
    const SearchNativeJobParameters parameters(record,type);
    int16_t job=-1,item=-1,sub=-1,mat=-1;int32_t index=-1;
    if(!parameters.read(workshop?"jobtype":"job_type",job))return out;
    parameters.read(workshop?"itemtype":"item_type",item);
    parameters.read(workshop?"subtype":"item_subtype",sub);
    parameters.read(workshop?"material":"mat_type",mat);
    parameters.read(workshop?"matgloss":"mat_index",index);
    if(workshop){uintptr_t building=0;
        if(parameters.read("bd",building))if(const auto *layout=native_history_dynamic_layout(building)){
            int16_t subtype=-1;int32_t custom=-1;
            if(search_native_field(building,layout->name,"type",subtype)){
                search_native_field(building,layout->name,"custom_type",custom);
                out.workshops={{std::string(layout->name)+":"+std::to_string(subtype)+":"+std::to_string(custom)},true,SearchEvidence::Native,"native workshop owner"};
            }
        }
    }
    out.fixed_parameters={{"job",std::to_string(job)},{"item",std::to_string(item)},{"subtype",std::to_string(sub)},{"material_type",std::to_string(mat)},{"material_index",std::to_string(index)}};
    for(const auto field:{"specflag.whole","specdata.race",workshop?"job_item_flag":"material_category","art_specifier","art_specifier_id1","art_specifier_id2"}){
        uint32_t value=0;if(parameters.read(field,value))out.fixed_parameters[field]=std::to_string(value);
    }
    const auto reaction=parameters.text(workshop?"mstring":"reaction_name");
    const auto catalog=search_concept_catalog();
    struct Cache { uint64_t generation=0;std::unordered_map<std::string,SearchDescriptor> entries; };
    auto &cache=reloadable_thread_state<Cache,struct SearchNativeJobFactsTag>();
    if(cache.generation!=catalog->generation){cache.entries.clear();cache.generation=catalog->generation;}
    std::string key=std::string(type)+"\n"+reaction;
    for(const auto &[field,value]:out.fixed_parameters)key+="\n"+field+"="+value;
    for(const auto &value:out.workshops.values)key+="\nworkshop="+value;
    if(const auto cached=cache.entries.find(key);cached!=cache.entries.end()) {
        auto result=cached->second;result.candidate_id=out.candidate_id;result.state_version=generation;return result;
    }
    // Cache only copied template facts, keyed by all current native parameters.
    // Candidate identity is rebound on retrieval; instance states and match
    // decisions never enter this cache.
    const auto finish=[&]() {
        if(cache.entries.size()<8192){auto copy=out;copy.candidate_id={};cache.entries.emplace(key,std::move(copy));}
        return std::move(out);
    };
    if(!reaction.empty())if(const auto found=snapshot->recipes.find(reaction);found!=snapshot->recipes.end()){
        const auto identity=out.candidate_id;auto parameters=out.fixed_parameters;auto workshop_facts=out.workshops;
        out=found->second;out.candidate_id=identity;out.state_version=generation;out.fixed_parameters=std::move(parameters);
        if(workshop_facts.complete)out.workshops=std::move(workshop_facts);return finish();
    }
    const auto product=std::find_if(std::begin(search_native_job_rules),std::end(search_native_job_rules),[&](const auto &r){return r.job==job;});
    if(product!=std::end(search_native_job_rules)){
        const bool transfers=product->transfers_material;
        const bool concrete=mat>=0 && (index>=0 || (mat>0 && mat<19) || mat>=619);
        auto facts=search_native_tuple(product->product,(item<0 || item==product->product)?sub:-1,
            transfers?mat:int16_t(-1),transfers?index:-1,*snapshot,*catalog);
        uint32_t categories=0;
        parameters.read(workshop?"job_item_flag":"material_category",categories);
        static constexpr const char *category_names[]={"plant","wood","cloth","silk","leather","bone","shell","wood","soap","tooth","horn","pearl","yarn","strand"};
        SearchFactSet allowed;
        for(unsigned i=0;i<std::size(category_names);++i)if(categories&(1u<<i))allowed.values.push_back(std::string("material_category:")+category_names[i]);
        if(*product->material)allowed.values.push_back(std::string("material_category:")+product->material);
        if(!concrete && allowed.values.size()==1)facts.material={allowed.values,false,SearchEvidence::Native,"fixed material category"};
        if(transfers){
            if(concrete){SearchObjectFacts input;input.material=facts.material;out.inputs.push_back(std::move(input));}
            else if(!allowed.values.empty()){
                SearchObjectFacts input;
                if(allowed.values.size()==1)input.material=allowed;
                for(const auto &category:allowed.values)if(const auto choices=snapshot->materials_by_category.find(category);choices!=snapshot->materials_by_category.end())
                    facts.selectable_materials.values.insert(facts.selectable_materials.values.end(),choices->second.begin(),choices->second.end());
                std::sort(facts.selectable_materials.values.begin(),facts.selectable_materials.values.end());
                facts.selectable_materials.values.erase(std::unique(facts.selectable_materials.values.begin(),facts.selectable_materials.values.end()),facts.selectable_materials.values.end());
                input.selectable_materials.values=facts.selectable_materials.values;
                input.selectable_materials.evidence=SearchEvidence::Configurable;out.inputs.push_back(std::move(input));
                facts.selectable_materials.evidence=SearchEvidence::Configurable;facts.selectable_materials.source="native job material choices";
                facts.selectable_materials.complete=snapshot->material_catalog_complete;out.inputs.back().selectable_materials.complete=snapshot->material_catalog_complete;
            }
        }
        out.outputs.push_back(std::move(facts));out.outputs_complete=true;
        out.actions={{"action:produce"},true,SearchEvidence::Native,"job_type"};
        if(std::string_view(product->name)=="SmeltOre" && index>=0){
            NativeBorrowedVector<uintptr_t> minerals;NativeBorrowedVector<int16_t> metals;
            if(native_history_read_vector(native_history_global(0x24ec8c8),minerals) && static_cast<size_t>(index)<minerals.size()){
                const auto mineral=native_history_vector_at(minerals,index);
                if(native_history_copy(native_history_object_member(mineral,"inorganic_raw","metal_ore.mat_index",24),metals) && metals.valid(65536) && metals.size()){
                    out.outputs.clear();
                    for(size_t i=0;i<metals.size();++i){int16_t metal=-1;if(native_history_copy(reinterpret_cast<uintptr_t>(metals.begin+i),metal) && metal>=0)
                        out.outputs.push_back(search_native_tuple(product->product,-1,0,metal,*snapshot,*catalog));}
                    SearchObjectFacts input;input.objects={{"item_type:BOULDER"},true,SearchEvidence::Native,"ore input"};
                    input.material=search_native_tuple(-1,-1,0,index,*snapshot,*catalog).material;out.inputs.push_back(std::move(input));
                }
            }
        }
    }
    out.recipe_id="job_type:"+std::to_string(job)+":"+std::to_string(item)+":"+std::to_string(sub)+":"+std::to_string(mat)+":"+std::to_string(index);
    for(const auto &[key,value]:out.fixed_parameters)out.recipe_id+=":"+key+"="+value;
    search_native_selectable_parameters(out);
    return finish();
}
static unsigned search_native_dynamic_fields(std::string domain="items",SearchCandidateKind kind=SearchCandidateKind::ItemInstance) {
    const auto &query=search_native_query_hint();if(query.empty())return 0;
    const auto catalog=search_concept_catalog();
    struct Cache { std::string query;uint64_t generation=0;unsigned fields=0;std::string domain;SearchCandidateKind kind{}; };
    auto &cache=reloadable_thread_state<Cache,struct SearchNativeDynamicFieldsTag>();
    if(cache.query==query && cache.generation==catalog->generation && cache.domain==domain && cache.kind==kind)return cache.fields;
    SearchDescriptor context;context.kind=kind;context.domain=domain;
    const auto plan=SearchQueryParser(*catalog,context,query).parse();unsigned fields=0;
    std::function<void(const SearchQueryBranch &)> visit;
    const auto constraint=[&](const SearchConstraint &c){
        if(c.role==SearchRole::Contents || (c.slot==SearchSlot::State && c.concepts.empty()) || std::find(c.concepts.begin(),c.concepts.end(),"state:empty")!=c.concepts.end())fields|=1;
        if(c.role==SearchRole::Decoration)fields|=2;
        if(c.role==SearchRole::Component)fields|=4;
        if(c.slot==SearchSlot::Owner)fields|=8;
        if(c.slot==SearchSlot::Quantity)fields|=16;
        if(c.slot==SearchSlot::State)fields|=32|64|128;
        if(c.slot==SearchSlot::Object)fields|=256;
        if(c.nested)visit(*c.nested);
    };
    visit=[&](const SearchQueryBranch &branch){
        for(const auto &c:branch.constraints)constraint(c);
        if(branch.graph)for(const auto &edges:branch.graph->edges)for(const auto &edge:edges)if(edge.constraint)constraint(*edge.constraint);
    };
    for(const auto &branch:plan.branches)visit(branch);
    cache={query,catalog->generation,fields,std::move(domain),kind};return fields;
}
static SearchDescriptor search_native_item(uintptr_t item, unsigned depth=0) {
    if(!depth)refresh_native_search_world();
    SearchDescriptor out;out.kind=SearchCandidateKind::ItemInstance;out.domain="items";
    static std::atomic<uint64_t> states{1};out.state_version=states.fetch_add(1);
    const auto snapshot=search_world_snapshot_storage();if(!snapshot||!item||depth>16)return out;
    const auto catalog=search_concept_catalog();
    const auto fields=search_native_dynamic_fields();
    int32_t type=-1,sub=-1,mat=-1,index=-1,id=-1,value=0;
    if(!native_history_item_scalar(item,0,type,2)||!native_history_item_scalar(item,8,sub,2)||
        !native_history_item_scalar(item,0x10,mat,2)||!native_history_item_scalar(item,0x18,index))return out;
    static_cast<SearchObjectFacts &>(out)=search_native_tuple(static_cast<int16_t>(type),static_cast<int16_t>(sub),static_cast<int16_t>(mat),index,*snapshot,*catalog);
    native_history_copy(native_history_object_field(item,{},0x1c,4),id);
    out.entity_id=std::to_string(snapshot->identity_generation)+":"+std::to_string(id);
    out.candidate_id={0,item,snapshot->identity_generation,0};
    if((fields&16) && native_history_item_scalar(item,0x478,value))out.quantity=value;
    if((fields&32) && native_history_item_scalar(item,0x508,value,2)){out.quality=value;for(int i=0;i<=5;++i)(i==value?out.states.values:out.states.false_values).push_back("quality:"+std::to_string(i));}
    if((fields&64) && native_history_item_scalar(item,0x1d8,value,2)){out.wear=value;for(int i=0;i<=3;++i)(i==value?out.states.values:out.states.false_values).push_back("wear:"+std::to_string(i));}
    uint32_t flags=0;
    if((fields&128) && native_history_copy(native_history_object_field(item,{},0x10,4),flags)){
        for(const auto &[bit,state]:{std::pair{8u,"state:rotten"},std::pair{16u,"state:owned"},std::pair{19u,"state:forbidden"},std::pair{22u,"state:on_fire"}})
            ((flags&(uint32_t{1}<<bit))?out.states.values:out.states.false_values).push_back(state);
    }
    NativeBorrowedVector<uintptr_t> refs;
    if((fields&9) && native_history_read_vector(native_history_object_member(item,"item","general_refs",24),refs)&&refs.valid(65536)){
        out.contents_complete=true;out.owners.complete=true;
        for(size_t i=0;i<refs.size();++i){
            const auto ref=native_history_vector_at(refs,i);
            if(native_history_object_is(ref,"general_ref_contains_itemst")){
                if(!(fields&1)){out.contents_complete=false;continue;}
                int32_t child_id=-1;uintptr_t child=0;
                if(!search_native_field(ref,"general_ref_contains_itemst","item_id",child_id)||
                    !native_history_material_find_id(native_history_global(0x23d14f0+0x13f60),0x1c,child_id,child)||!child||child==item){out.contents_complete=false;continue;}
                if(depth==16){out.contents_complete=false;continue;}
                auto content=search_native_item(child,depth+1);out.contents.push_back(std::move(content));
            }else if(native_history_object_is(ref,"general_ref_unit_itemownerst")){
                int32_t unit=-1;
                if(search_native_field(ref,"general_ref_unit_itemownerst","unit_id",unit)) {
                    out.owners.values.push_back("unit:"+std::to_string(unit));
                    if(fields&8) {
                        uintptr_t owner=0;
                        if(native_history_material_find_id(native_history_global(0x24e37c0),0,unit,owner) && owner) {
                            const auto name=native_history_object_member(owner,"unit","name.first_name",32);
                            NativeUnitIdentity identity;identity.form=NativeUnitIdentityForm::NameOnly;
                            if(capture_native_history_original_name(native_history_profile_base(),name,identity.native_name) && !identity.native_name.empty()) {
                                out.owners.values.push_back("owner_name:"+search_normalize(native_text_to_utf8(identity.native_name)));
                                if(capture_native_history_name(native_history_profile_base(),name,identity.name)) {
                                    if(!identity.name.nickname.empty())out.owners.values.push_back("owner_name:"+search_normalize(native_text_to_utf8(identity.name.nickname)));
                                    if(const auto translated=g_overlay.translate_native_unit_identity(identity);translated && !translated->empty())
                                        out.owners.values.push_back("owner_name:"+search_normalize(*translated));
                                }
                            }
                        }
                    }
                } else out.owners.complete=false;
            }
        }
        const bool container=out.native_type=="item_type:BOX" || out.native_type=="item_type:BARREL" || out.native_type=="item_type:BIN" || out.native_type=="item_type:BUCKET" || out.native_type=="item_type:FLASK" ||
            std::any_of(out.properties.values.begin(),out.properties.values.end(),[](const auto &p){return (p.starts_with("raw:CONTAINER_CAPACITY:") && p!="raw:CONTAINER_CAPACITY:0") || (p.starts_with("native:container_capacity:") && p!="native:container_capacity:0");});
        if(out.contents_complete && container)(out.contents.empty()?out.states.values:out.states.false_values).push_back("state:empty");
        if(!out.owners.values.empty())out.states.values.push_back("state:owned");
    }
    if(const auto *layout=native_history_dynamic_layout(item);layout && (fields&6)) {
        NativeBorrowedVector<uintptr_t> improvements;
        if(native_history_read_vector(native_history_object_member(item,layout->name,"improvements",24),improvements) && improvements.valid(65536)) {
            out.decorations_complete=true;
            for(size_t i=0;i<improvements.size();++i){
                const auto improvement=native_history_vector_at(improvements,i);int16_t material=-1;int32_t index=-1;
                if(search_native_field(improvement,"itemimprovement","mat_type",material) && search_native_field(improvement,"itemimprovement","mat_index",index)) {
                    auto part=search_native_tuple(-1,-1,material,index,*snapshot,*catalog);
                    if(native_history_object_is(improvement,"itemimprovement_instrument_piecest")){
                        part.definition_id=out.definition_id+":component:"+search_native_string(improvement,"itemimprovement_instrument_piecest","type");
                        part.objects.values.push_back(part.definition_id);out.components.push_back(std::move(part));
                    } else out.decorations.push_back(std::move(part));
                }
                else out.decorations_complete=false;
            }
            out.components_complete=out.decorations_complete;
        }
    }
    return out;
}

static SearchDescriptor search_native_unit(std::string_view source, uintptr_t caption) {
    SearchDescriptor d;d.kind=SearchCandidateKind::NamedEntity;d.domain="units";
    d.original_caption=native_text_to_utf8(source);d.candidate_id.record=caption;
    const auto binding=native_unit_identity_source_binding(source,caption);
    if(!binding)return d;
    d.display_caption=binding->target;
    NativeUnitIdentity snapshot;
    if(binding->deferred_snapshot)snapshot=*binding->deferred_snapshot;
    const auto fields=search_native_dynamic_fields("units",SearchCandidateKind::NamedEntity);
    if(binding->unit_owner) {
        const auto unit=binding->unit_owner;int16_t profession=-1,caste=-1;
        search_native_field(unit,"unit","id",snapshot.id);
        if(fields&256){search_native_field(unit,"unit","race",snapshot.race);search_native_field(unit,"unit","caste",caste);snapshot.caste=caste;}
        if((fields&8) && search_native_field(unit,"unit","profession",profession)){
            snapshot.profession=profession;
            for(const auto &entry:search_native_professions)if(entry.value==profession)snapshot.raw_profession=entry.caption;
        }
        if(fields&8)snapshot.custom_profession=search_native_string(unit,"unit","custom_profession");
        const auto nickname=search_native_string(unit,"unit","name.nickname");
        if(!nickname.empty()){d.display_name=nickname;d.custom_name_origin="custom";}
        NativeBorrowedVector<uintptr_t> creatures,castes;
        if((fields&256) && native_history_read_vector(native_history_global(0x24eca68),creatures) && snapshot.race>=0 && static_cast<size_t>(snapshot.race)<creatures.size()){
            const auto creature=native_history_vector_at(creatures,snapshot.race);
            snapshot.creature_id=search_native_string(creature,"creature_raw","creature_id");
            if(native_history_read_vector(native_history_object_member(creature,"creature_raw","caste",24),castes) && caste>=0 && static_cast<size_t>(caste)<castes.size())
                snapshot.caste_id=search_native_string(native_history_vector_at(castes,caste),"caste_raw","caste_id");
        }
        if(fields&128) {
        for(const auto &[field,bit,id]:{std::tuple{"flags1",26u,"state:tame"},std::tuple{"flags3",12u,"state:ghostly"}}){
            uint32_t flags=0;if(search_native_field(unit,"unit",field,flags))((flags&(1u<<bit))?d.states.values:d.states.false_values).push_back(id);
        }
        uintptr_t undead=0;int32_t pet_owner=-1;
        if(search_native_field(unit,"unit","enemy.undead",undead))(undead?d.states.values:d.states.false_values).push_back("state:undead");
        if(native_history_copy(native_history_object_member(unit,"unit","relationship_ids",4),pet_owner))(pet_owner>=0?d.states.values:d.states.false_values).push_back("state:pet");
        }
    }
    else if(binding->deferred_snapshot){}
    else return d;
    d.candidate_id.record=binding->unit_owner;
    if(const auto world=search_world_snapshot_storage())d.candidate_id.world=world->identity_generation;
    d.entity_id="unit:"+std::to_string(d.candidate_id.world)+":"+std::to_string(snapshot.id);
    if(d.display_name.empty())d.display_name=snapshot.native_name;
    if(d.custom_name_origin.empty())d.custom_name_origin=snapshot.name_quoted?"custom":"native";
    if(!snapshot.creature_id.empty())d.objects={{"creature:"+snapshot.creature_id,"caste:"+snapshot.creature_id+":"+snapshot.caste_id},true,SearchEvidence::Native,"unit race/caste"};
    const auto catalog=search_concept_catalog();
    for(const auto &role:{snapshot.raw_profession,snapshot.native_role,snapshot.custom_profession}) {
        for(auto id:catalog->exact(search_normalize(role),"units",SearchSlot::Owner,false))d.owners.values.push_back(catalog->lexemes[id].concept_id);
        if(!role.empty())d.owners.values.push_back("profession:"+search_normalize(role));
    }
    d.owners.complete=!d.owners.values.empty();d.owners.source="native unit profession";
    return d;
}

static SearchDescriptor search_native_stockpile_column(int32_t mode,uintptr_t record) {
    SearchDescriptor d;d.kind=SearchCandidateKind::PropertyChoice;d.domain="properties";
    d.candidate_id.record=record;d.candidate_id.owner=static_cast<uintptr_t>(mode);
    for(const auto &column:search_stockpile_columns)if(column.mode==mode){
        if(column.material){d.kind=SearchCandidateKind::MaterialChoice;d.domain="stockpile.material";}
        else if(column.category){d.kind=SearchCandidateKind::MenuCategory;d.domain="stockpile.type";}
        else if(native_stockpile_caption_kind(mode)==StockpileCaptionKind::ItemType){d.kind=SearchCandidateKind::ItemDefinition;d.domain="stockpile.type";}
        break;
    }
    return d;
}

struct NativeSearchCaption {
    uintptr_t string_owner = 0;
    std::string source;
    SearchDescriptor descriptor;
    uintptr_t instance=0;
    std::optional<std::array<int64_t,7>> abstract;
};
static std::vector<NativeSearchCaption> &native_search_captions() {
    return reloadable_thread_state<std::vector<NativeSearchCaption>, struct NativeSearchCaptionTag>();
}
static void clear_native_search_captions() { native_search_captions().clear(); }
static void remember_native_search_caption(NativeString *output, SearchDescriptor descriptor,uintptr_t instance=0,
        std::optional<std::array<int64_t,7>> abstract={}) {
    NativeSearchCaption record;
    record.string_owner = reinterpret_cast<uintptr_t>(output);
    if (!native_history_copy_string(record.string_owner, record.source)) return;
    descriptor.original_caption = native_text_to_utf8(record.source);
    descriptor.names={descriptor.original_caption};
    record.descriptor = std::move(descriptor);
    record.instance=instance;record.abstract=std::move(abstract);
    auto &pending = native_search_captions();
    std::erase_if(pending, [&](const auto &old) { return old.string_owner == record.string_owner; });
    if (pending.size() == 16) pending.erase(pending.begin());
    pending.push_back(std::move(record));
}
static std::optional<SearchDescriptor> take_native_search_caption(uintptr_t owner, std::string_view source) {
    auto &pending = native_search_captions();
    for (auto at = pending.begin(); at != pending.end(); ++at) if (at->string_owner == owner) {
        std::optional<SearchDescriptor> result;
        if (at->source == source) {
            if(at->instance)result=search_native_item(at->instance);
            else if(at->abstract) {
                refresh_native_search_world();
                if(const auto world=search_world_snapshot_storage()) {
                    const auto &v=*at->abstract;SearchDescriptor d;d.kind=SearchCandidateKind::ItemGroup;d.domain="items";
                    static_cast<SearchObjectFacts &>(d)=search_native_tuple(int16_t(v[0]),int16_t(v[1]),int16_t(v[2]),int32_t(v[3]),*world,*search_concept_catalog());
                    if(v[4]>=0)d.quantity=v[4];
                    if(v[5]>=0 && v[5]<=5){d.quality=v[5];for(int i=0;i<=5;++i)(i==v[5]?d.states.values:d.states.false_values).push_back("quality:"+std::to_string(i));}
                    d.candidate_id={owner,0,world->identity_generation,search_native_list_generation()};
                    d.candidate_id.native_key="abstract:";for(auto n:v)d.candidate_id.native_key+=std::to_string(n)+":";
                    result=std::move(d);
                }
            } else result = std::move(at->descriptor);
        }
        pending.erase(at);
        return result;
    }
    return {};
}
static NativeHistoryItemFn g_search_abstract_caption = nullptr;
static NativeHistoryArtifactItemFn g_search_instance_caption = nullptr;
static void capture_search_abstract_caption(NativeString *output, int16_t type, int16_t subtype,
        int16_t material, int32_t index, int32_t count, int32_t quality,
        bool append, void *materials, int32_t shape, int32_t item_id,
        bool historical, int32_t extra1, int32_t extra2) {
    NativeInputCallbackScope callback;
    if (g_search_abstract_caption) callback.call_native([&] {
        g_search_abstract_caption(output,type,subtype,material,index,count,quality,append,materials,shape,item_id,historical,extra1,extra2);
    });
    try {
        if(append || !g_overlay.translation_enabled())return;
        // A native aggregate tuple proves only the shared type/material. The
        // instance contents, wear and ownership are intentionally unread here.
        remember_native_search_caption(output,{},0,std::array<int64_t,7>{type,subtype,material,index,count,quality,item_id});
    } catch (...) {}
}
static void capture_search_instance_caption(void *item, NativeString *output, bool generic, int32_t mode) {
    NativeInputCallbackScope callback;
    if (g_search_instance_caption) callback.call_native([&] { g_search_instance_caption(item,output,generic,mode); });
    try {
        if(g_overlay.translation_enabled())remember_native_search_caption(output,{},reinterpret_cast<uintptr_t>(item));
    } catch (...) {}
}
// The selected profiles already bind each fold call and its containing code.
// Accept only a direct call to a bound formatter immediately followed by the
// small, complete ABI setup sequence for that fold. No arbitrary call scan.
static bool native_search_caption_tail(std::span<const unsigned char> bytes) {
    size_t at=0;
    while(at<bytes.size()) {
        const auto left=bytes.subspan(at);
        if(left.size()>=4 && left[0]==0x48 && left[1]==0x83 && left[2]==0xc4) { at+=4; continue; }
        if(left.size()>=3 && (left[0]==0x48 || left[0]==0x4c) && left[1]==0x89 && (left[2]&0xc0)==0xc0) { at+=3; continue; }
        if(left.size()>=4 && left[0]==0x48 && left[1]==0x8d && (left[2]&0xc7)==0x45) { at+=4; continue; }
        if(left.size()>=5 && left[0]==0x48 && left[1]==0x8d && (left[2]&0xc7)==0x44 && left[3]==0x24) { at+=5; continue; }
        if(left.size()>=7 && left[0]==0x48 && left[1]==0x8d && (left[2]&0xc7)==0x85) { at+=7; continue; }
        if(left.size()>=8 && left[0]==0x48 && left[1]==0x8d && (left[2]&0xc7)==0x84 && left[3]==0x24) { at+=8; continue; }
        return false;
    }
    return true;
}
static void append_native_search_caption_observers(uintptr_t base, std::vector<NativeCall> &calls, const void *term) {
#ifdef _WIN32
    const auto abstract = native_reference_address(base,0xa82c10);
    const auto instance = native_reference_address(base,0xc65450);
#else
    const auto abstract = native_reference_address(base,0xeb6a70);
    const auto instance = native_reference_address(base,0xa68020);
#endif
    g_search_abstract_caption = reinterpret_cast<NativeHistoryItemFn>(abstract);
    g_search_instance_caption = reinterpret_cast<NativeHistoryArtifactItemFn>(instance);
    std::vector<NativeCall> observers;
    for(const auto &call:calls) {
        if(call.wrapper!=term || call.va<32)continue;
        std::array<unsigned char,32> bytes{};
        if(!native_history_copy_bytes(base+call.va-bytes.size(),bytes.data(),bytes.size()))continue;
        for(size_t at=0;at+5<bytes.size();++at) {
            if(bytes[at]!=0xe8 || !native_search_caption_tail(std::span(bytes).subspan(at+5)))continue;
            int32_t displacement=0;std::memcpy(&displacement,bytes.data()+at+1,4);
            const auto address=base+call.va-bytes.size()+at;
            const auto target=static_cast<uintptr_t>(static_cast<intptr_t>(address+5)+displacement);
            const void *wrapper=target==abstract?reinterpret_cast<const void *>(&capture_search_abstract_caption):
                target==instance?reinterpret_cast<const void *>(&capture_search_instance_caption):nullptr;
            if(wrapper)observers.push_back({address-base,target-base,wrapper});
        }
    }
    calls.insert(calls.end(),observers.begin(),observers.end());
}
