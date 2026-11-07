#pragma once
#include "native_callable_search_discovery.h"

namespace dfcn::pe_runtime::workshop_recipe_detail {
using namespace address_runtime;
using namespace display_decode;
struct Contract {
    uint32_t identity, owner, type, method, slot, shape, table, paragraph, clear, compare, width;
    std::string rtti;
    std::vector<Range> spans;
    std::vector<uint32_t> calls;
};
inline std::vector<Contract> read(const std::vector<unsigned char> &blob) {
    if (blob.empty()) return {};
    frame_detail::Reader reader(blob); char magic[8]; reader.take(magic, 8);
    if (std::memcmp(magic, "DFCNWR01", 8) || reader.number() != 1)
        throw std::runtime_error("Unsupported workshop-tooltip evidence");
    std::vector<Contract> result(reader.count(64)); std::set<uint32_t> ids;
    for (auto &entry : result) {
        entry = {reader.number(), reader.number(), reader.number(), reader.number(), reader.number(),
            reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), reader.number(), {}, {}, {}};
        const auto name = reader.blob(); entry.rtti.assign(name.begin(), name.end());
        entry.spans.resize(reader.count());
        uint32_t previous = entry.owner;
        for (auto &span : entry.spans) {
            span = {reader.number(), reader.number(), 0};
            if (span.begin < previous || span.end <= span.begin) throw std::runtime_error("Invalid recipe hook ownership");
            previous = span.end;
        }
        entry.calls.resize(reader.count());
        for (auto &site : entry.calls) site = reader.number();
        if (!entry.identity || !ids.insert(entry.identity).second || !entry.owner || !entry.type || !entry.method ||
                entry.slot % 8 || entry.shape != native_history_abi::semantic_id("void(pointer<curses_text_boxst>)") ||
                !entry.table || !entry.paragraph || !entry.clear || !entry.compare || !entry.width || entry.width > 4096 ||
                entry.rtti.empty() || entry.rtti.find('\0') != std::string::npos || entry.spans.empty() || entry.calls.empty() ||
                !std::is_sorted(entry.calls.begin(), entry.calls.end()) ||
                std::adjacent_find(entry.calls.begin(), entry.calls.end()) != entry.calls.end())
            throw std::runtime_error("Invalid recipe method contract");
        for (const auto site : entry.calls)
            if (!std::any_of(entry.spans.begin(), entry.spans.end(), [&](const auto &span) {
                return span.begin <= site && uint64_t(site) + 5 <= span.end;
            })) throw std::runtime_error("Recipe paragraph has no owned source span");
    }
    reader.finish(); return result;
}
inline std::vector<method_call_detail::SuffixFeature> absence_contracts(const std::vector<unsigned char> &blob) {
    std::vector<method_call_detail::SuffixFeature> result;
    for (const auto &entry : read(blob)) {
        method_call_detail::SuffixFeature feature{};
        feature.identity = entry.identity; feature.owner = entry.owner; feature.spans = entry.spans;
        result.push_back(std::move(feature));
    }
    return result;
}
inline bool overlaps(const State &state, const Contract &entry) {
    for (const auto &span : entry.spans) for (const auto &range : state.ranges)
        if (range.begin < span.end && span.begin < range.end) return true;
    return false;
}
inline bool structured(const State &state, const Contract &entry) {
    for (const auto &span : entry.spans) {
        const auto begin = callable_search_detail::mapped(state, span.begin);
        if (!begin || callable_search_detail::mapped(state, span.end - 1) != begin + span.end - span.begin - 1) return false;
    }
    return true;
}
// Admit the memory effects of this narrow native method, not arbitrary x86.
// Its read-only comparisons may inspect raw descriptions; writes are confined
// to its own stack and the independently identified box/paragraph helpers.
inline bool allowed_memory(const Instruction &instruction, const callable_search_detail::Flow &flow) {
    const auto &op = instruction.decoded;
    if (!(op.flags & F_MODRM))
        return (op.opcode >= 0x50 && op.opcode <= 0x5f) || (op.opcode >= 0xb8 && op.opcode <= 0xbf) ||
            (op.opcode >= 0x70 && op.opcode <= 0x7f) || op.opcode == 0xe8 || op.opcode == 0xe9 ||
            op.opcode == 0xeb || op.opcode == 0xc3 || op.opcode == 0xc2 || op.opcode == 0xcc || op.opcode == 0x90 ||
            (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
    if (op.modrm_mod == 3) return true;
    if (op.opcode == 0x89 || op.opcode == 0x88 || op.opcode == 0xc6 || op.opcode == 0xc7)
        return callable_search_detail::address(flow, instruction).base == "stack";
    if (op.opcode == 0x8b || op.opcode == 0x8a || op.opcode == 0x8d || op.opcode == 0x63 ||
            op.opcode == 0x38 || op.opcode == 0x39 || op.opcode == 0x3a || op.opcode == 0x3b ||
            op.opcode == 0x84 || op.opcode == 0x85 ||
            ((op.opcode >= 0x80 && op.opcode <= 0x83) && op.modrm_reg == 7)) return true;
    return op.opcode == 0x0f && ((op.opcode2 >= 0x40 && op.opcode2 <= 0x4f) ||
        op.opcode2 == 0xb6 || op.opcode2 == 0xb7 || op.opcode2 == 0xbe || op.opcode2 == 0xbf || op.opcode2 == 0x1f);
}
template<typename Image>
inline bool description(const Image &image, uint32_t owner, uint32_t clear, uint32_t compare,
        RecipeBinding &binding, std::string &failure) {
    using namespace callable_search_detail;
    const auto reject = [&](uint32_t at, const char *reason) {
        std::ostringstream message; message << reason << " at 0x" << std::hex << at; failure = message.str(); return false;
    };
    const auto comparison = [&](uint32_t target) {
        const auto *thunk = image.read(target, 6);
        if (!target || !compare || !thunk || thunk[0] != 0xff || thunk[1] != 0x25) return false;
        int32_t relative; std::memcpy(&relative, thunk + 2, 4);
        return int64_t(target) + 6 + relative == compare;
    };
    std::map<uint32_t, Instruction> code;
    for (const auto &[begin, end] : frame_detail::logical_regions(image, owner)) {
        std::vector<Instruction> rows;
        if (end <= begin || end - begin > 65536 || !display_decode::decode(image, begin, end, rows))
            return reject(begin, "incomplete recipe method decode");
        for (auto &row : rows) code.emplace(row.address, std::move(row));
    }
    if (!code.count(owner) || code.size() > 4096) return reject(owner, "recipe method has no complete bounded CFG");
    Flow entry; entry.reg[1] = {"button", 0}; entry.reg[2] = {"box", 0}; entry.reg[4] = {"stack", 0};
    std::map<uint32_t, Flow> incoming{{owner, entry}}; std::vector<uint32_t> pending{owner}; size_t updates = 0;
    while (!pending.empty()) {
        if (++updates > code.size() * 64) return reject(owner, "recipe data flow did not converge");
        const auto at = pending.back(); pending.pop_back();
        const auto found = code.find(at); if (found == code.end()) return reject(at, "recipe CFG leaves method");
        const auto &instruction = found->second; const auto &op = instruction.decoded;
        const auto &flow = incoming.at(at);
        if (!allowed_memory(instruction, flow)) return reject(at, "recipe has an unproved memory effect");
        if ((op.opcode == 0xff && op.modrm_reg >= 2) || op.opcode == 0xca || op.opcode == 0xcb || op.opcode == 0xcf)
            return reject(at, "recipe has an indirect transfer");
        const auto target = direct_target(instruction);
        if (target && target != clear && !comparison(target) && target != binding.paragraph_target)
            return reject(at, "recipe contains another output/formatting operation");
        auto after = transfer(flow, instruction, Targets{}, false, 0);
        if (op.opcode == 0x8b && op.rex_w && op.modrm_mod != 3 && address(flow, instruction).base != "stack") {
            // The loop visits different native objects. Its pointer load is
            // the invariant role, not the address expression from the first
            // iteration. This opaque value authorizes no member layout or
            // object identity; the paragraph receives the original pointer.
            after.reg[op.modrm_reg + (op.rex_r ? 8 : 0)] = {"native-load@" + std::to_string(at), 0};
        }
        if (op.opcode == 0xc3 || op.opcode == 0xc2 || op.opcode == 0xcc) continue;
        std::vector<uint32_t> next;
        if (const auto branch = method_call_detail::branch_destination(instruction)) next.push_back(branch);
        if (op.opcode != 0xe9 && op.opcode != 0xeb) next.push_back(at + op.len);
        for (const auto destination : next) {
            if (!code.count(destination)) return reject(destination, "recipe CFG leaves decoded method");
            const auto [item, inserted] = incoming.emplace(destination, after);
            if (inserted || join(item->second, after)) pending.push_back(destination);
        }
    }
    std::set<uint32_t> clears, comparisons; binding.paragraph_calls.clear(); binding.width = 0;
    for (const auto &[at, flow] : incoming) {
        const auto target = direct_target(code.at(at));
        if (target == clear) {
            if (flow.reg[1] != Value{"box", 0}) return reject(at, "recipe clear does not own incoming box");
            clears.insert(at);
        } else if (comparison(target)) comparisons.insert(at);
        else if (target == binding.paragraph_target) {
            if (flow.reg[1] != Value{"box", 0} || !flow.reg[2] || flow.reg[2].base == "stack" ||
                    flow.reg[8].base != "constant" || flow.reg[8].offset <= 0 || flow.reg[8].offset > 4096 ||
                    (binding.width && binding.width != flow.reg[8].offset))
            {
                std::ostringstream message;
                message << "recipe paragraph has no native box/string/width contract: "
                    << key(flow.reg[1]) << ", " << key(flow.reg[2]) << ", " << key(flow.reg[8]);
                return reject(at, message.str().c_str());
            }
            binding.width = static_cast<uint32_t>(flow.reg[8].offset); binding.paragraph_calls.push_back(at);
        }
    }
    if (clears.size() != 1 || comparisons.empty() || binding.paragraph_calls.empty())
        return reject(owner, "recipe description needs clear, comparison and paragraph paths");
    return true;
}
} // namespace dfcn::pe_runtime::workshop_recipe_detail

namespace dfcn::pe_runtime {
inline void complete_workshop_recipes(address_runtime::State &state, const std::vector<unsigned char> &blob) {
    using namespace workshop_recipe_detail;
    state.missing_workshop_recipes.clear();
    for (const auto &entry : read(blob)) {
        const auto found = std::find_if(state.workshop_recipes.begin(), state.workshop_recipes.end(),
            [&](const auto &value) { return value.contract == entry.identity; });
        const bool absent = std::binary_search(state.absent_features.begin(), state.absent_features.end(), entry.identity);
        bool valid = found != state.workshop_recipes.end();
        if (valid) {
            valid = found->owner && found->owner < state.size && found->width && found->width <= 4096 &&
                found->paragraph_target == callable_search_detail::mapped(state, entry.paragraph) &&
                !found->paragraph_calls.empty() && std::is_sorted(found->paragraph_calls.begin(), found->paragraph_calls.end()) &&
                std::adjacent_find(found->paragraph_calls.begin(), found->paragraph_calls.end()) == found->paragraph_calls.end();
            for (const auto site : found->paragraph_calls) valid &= site && uint64_t(site) + 5 <= state.size;
            if (found->mode == 1) {
                valid &= !absent && structured(state, entry) && found->width == entry.width && found->paragraph_calls.size() == entry.calls.size();
                for (size_t index = 0; valid && index < entry.calls.size(); ++index)
                    valid &= found->paragraph_calls[index] == callable_search_detail::mapped(state, entry.calls[index]);
            } else valid &= found->mode == 2 && absent && !overlaps(state, entry);
        }
        if (!valid) state.missing_workshop_recipes.push_back(entry.owner);
    }
}
template<typename Image, typename Catalog>
inline void discover_workshop_recipes(const Image &image, const Catalog &catalog, address_runtime::State &state,
        address_runtime::Progress report = {}) {
    using namespace workshop_recipe_detail;
    state.workshop_recipes.clear();
    for (const auto &entry : read(catalog.workshop_recipes)) {
        uint32_t slot = UINT32_MAX;
        if (state.edition == 1 || state.edition == 2) slot = entry.slot;
        else for (const auto &method : state.semantic_methods)
            if (method.type == entry.type && method.method == entry.method && method.argument_count == 1 &&
                    method.parameter_shape == entry.shape) slot = method.slot;
        const auto paragraph = callable_search_detail::mapped(state, entry.paragraph);
        const auto clear = callable_search_detail::mapped(state, entry.clear);
        const auto compare = image.import_slot("vcruntime140.dll", "memcmp");
        std::vector<RecipeBinding> candidates; std::string failure = "named method/helper identity unresolved";
        if (slot != UINT32_MAX && !(slot % 8) && paragraph && clear && compare)
            for (const auto table : image.find_vtables(entry.rtti)) {
                const auto *bytes = image.read(table + slot, 8); if (!bytes) continue;
                uint64_t pointer; std::memcpy(&pointer, bytes, 8);
                if (pointer < image.preferred_base || pointer - image.preferred_base >= image.size) continue;
                const auto owner = static_cast<uint32_t>(pointer - image.preferred_base);
                const auto function = frame_detail::function_at(image, owner);
                if (function == image.functions.end() || function->begin != owner || (function->owner && function->owner != owner)) continue;
                RecipeBinding binding{entry.identity, owner, 1, entry.width, paragraph, {}};
                if (structured(state, entry)) {
                    bool same_owner = true;
                    for (const auto &span : entry.spans) {
                        const auto member = frame_detail::function_at(image, callable_search_detail::mapped(state, span.begin));
                        same_owner &= member != image.functions.end() &&
                            (member->owner ? member->owner : member->begin) == owner;
                    }
                    if (!same_owner) { failure = "structured recipe spans leave the named method"; continue; }
                    for (const auto site : entry.calls) binding.paragraph_calls.push_back(callable_search_detail::mapped(state, site));
                    candidates.push_back(std::move(binding));
                } else if (!overlaps(state, entry) && description(image, owner, clear, compare, binding, failure)) {
                    binding.mode = 2; candidates.push_back(std::move(binding));
                }
            }
        if (candidates.size() == 1) {
            auto &binding = candidates.front();
            if (binding.mode == 2) {
                state.absent_features.push_back(entry.identity);
                state.absent_spans.insert(state.absent_spans.end(), entry.spans.begin(), entry.spans.end());
            }
            if (report) {
                std::ostringstream message; message << "Native workshop tooltip: 0x" << std::hex << entry.owner << " -> 0x" << binding.owner
                    << std::dec << ", mode=" << binding.mode << ", " << binding.paragraph_calls.size() << " complete paragraph paths";
                report(message.str());
            }
            state.workshop_recipes.push_back(std::move(binding));
        } else if (report) {
            std::ostringstream message; message << "Native workshop tooltip unresolved: 0x" << std::hex << entry.owner << ": " << failure;
            report(message.str());
        }
    }
    std::sort(state.workshop_recipes.begin(), state.workshop_recipes.end(), [](const auto &a, const auto &b) { return a.contract < b.contract; });
    std::sort(state.absent_features.begin(), state.absent_features.end());
    std::sort(state.absent_spans.begin(), state.absent_spans.end(), [](const auto &a, const auto &b) { return a.begin < b.begin; });
    complete_workshop_recipes(state, catalog.workshop_recipes);
}
} // namespace dfcn::pe_runtime
