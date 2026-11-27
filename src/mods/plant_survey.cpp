#include "journal_action_api.h"
#define NOMINMAX
#include <windows.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <charconv>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

namespace {
using Address = uintptr_t;
using namespace std::string_view_literals;
constexpr auto prefix = "Plant survey: "sv;
constexpr std::array features{"cooking"sv, "brewing"sv, "paper"sv, "oil"sv,
    "textiles"sv, "dye"sv, "surface crop"sv};
constexpr std::array labels{"烹饪"sv, "酿酒"sv, "造纸"sv, "榨油"sv, "纺织"sv, "染色"sv};

void copy(Address at, void *out, size_t size) {
    if (!size) return;
    SIZE_T copied = 0;
    if (!at || !ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void *>(at),
            out, size, &copied) || copied != size)
        throw std::runtime_error("plant data unavailable");
}
template<class T> T read(Address at) {
    T value{};
    copy(at, &value, sizeof(value));
    return value;
}
template<class T> std::vector<T> vector_at(Address at) {
    const auto [begin, end, capacity] = read<std::array<Address, 3>>(at);
    if (begin > end || end > capacity || (end - begin) % sizeof(T) ||
            end - begin > 128u * 1024u * 1024u)
        throw std::runtime_error("invalid plant vector");
    std::vector<T> result((end - begin) / sizeof(T));
    copy(begin, result.data(), end - begin);
    return result;
}
std::string string_at(Address at) {
    struct String { union { char small[16]; Address heap; }; size_t size, capacity; };
    const auto s = read<String>(at);
    if (s.size > s.capacity || s.size > 262144) throw std::runtime_error("invalid raw name");
    if (s.capacity < 16) return {s.small, s.size};
    std::string result(s.size, '\0');
    copy(s.heap, result.data(), s.size);
    return result;
}
using Bits = std::bitset<128>;
Bits flags_at(Address at) {
    struct Flags { Address data; int32_t bytes; };
    const auto flags = read<Flags>(at);
    if (flags.bytes < 0) throw std::runtime_error("invalid raw flags");
    std::array<uint8_t,16> bytes{};
    copy(flags.data, bytes.data(), std::min<size_t>(flags.bytes, bytes.size()));
    Bits result;
    for (size_t i = 0; i < result.size(); ++i) result[i] = (bytes[i/8] >> (i%8)) & 1;
    return result;
}

// Public df-structures symbol tables for the four supported Windows images.
struct Tables { uint32_t stamp, grass, farm, seed, reagent, product; };
constexpr Tables profiles[] = {
    {0x6A70A6D9,0x16518c0,0x1653d80,0x16d06e0,0x17374d0,0x17374a0},
    {0x6A70B91C,0x164ca30,0x164f270,0x16cb548,0x1731df8,0x1731dc8},
    {0x6AEA05A1,0x1672558,0x1673de0,0x16eeb10,0x1757838,0x1757808},
    {0x6AEA11A5,0x166d428,0x166e990,0x16e9968,0x17520f8,0x17520c8}
};
struct Position { int16_t x,y,z; };
struct Count { uint64_t total = 0, surface = 0; };
using Designations = std::array<uint32_t,256>;
struct Map {
    const std::array<int32_t,3> dimensions;
    std::unordered_map<uint64_t,Address> blocks;
    std::vector<Count> counts;

    uint64_t key(Position pos) const {
        if (pos.x < 0 || pos.y < 0 || pos.z < 0 || pos.x >= dimensions[0] ||
                pos.y >= dimensions[1] || pos.z >= dimensions[2])
            throw std::runtime_error("invalid plant position");
        return (uint64_t(pos.x/16) << 32) | (uint64_t(pos.y/16) << 16) | uint16_t(pos.z);
    }
    void add_plant(int32_t species, Position pos) {
        const auto block = blocks.at(key(pos));
        const auto tile = (pos.x%16)*16 + pos.y%16;
        auto &count = counts.at(species);
        ++count.total;
        count.surface += !(read<uint32_t>(block + 0x2a0 + 4*tile) & (1u<<15));
    }
    void add_block(Address block, Address grass_table) {
        blocks.emplace(key(read<Position>(block + 0x88)),block);
        std::unordered_map<int32_t,std::bitset<256>> grasses;
        for (Address event : vector_at<Address>(block + 8)) {
            if (read<Address>(event) != grass_table) continue;
            auto &tiles = grasses[read<int32_t>(event + 8)];
            const auto amount = read<std::array<uint8_t,256>>(event + 12);
            for (size_t i=0; i<amount.size(); ++i) if (amount[i]) tiles.set(i);
        }
        if (grasses.empty()) return;
        const auto designation = read<Designations>(block + 0x2a0);
        std::bitset<256> surface;
        for (size_t i=0; i<designation.size(); ++i) surface[i] = !(designation[i] & (1u<<15));
        for (const auto &[species,tiles] : grasses) {
            auto &count = counts.at(species);
            count.total += tiles.count();
            count.surface += (tiles & surface).count();
        }
    }
};

struct MaterialRef { int type, plant; };
constexpr int plant_material_base = 419; // builtin_mats::PLANT_1
struct Materials {
    std::vector<std::vector<Address>> by_plant;
    Address get(MaterialRef ref) const {
        if (ref.plant < 0 || size_t(ref.plant) >= by_plant.size() || ref.type < plant_material_base)
            return 0;
        const auto &list = by_plant[ref.plant];
        const size_t slot = ref.type - plant_material_base;
        return slot < list.size() ? list[slot] : 0;
    }
};
bool is_oil(Address material) {
    if (!material) return false;
    const auto id = string_at(material);
    if (id == "OIL" || id.ends_with("_OIL")) return true;
    const auto liquid = string_at(material + 0xb8 + 32); // state_name[Liquid]
    if (liquid == "oil" || liquid.ends_with(" oil")) return true;
    for (auto tag : vector_at<Address>(material + 0x350))
        if (string_at(tag) == "SOAP_MAT") return true;
    return false;
}
using Traits = std::array<bool,7>;
std::vector<Traits> recipe_uses(Address world, Address image, const Tables &tables,
        const Materials &materials, const std::vector<Count> &counts) {
    std::vector<Traits> uses(counts.size());
    for (Address recipe : vector_at<Address>(world + 0x125d78)) {
        std::vector<int> inputs;
        for (Address reagent : vector_at<Address>(recipe + 0x50)) {
            if (read<Address>(reagent) != image + tables.reagent) continue;
            const auto type = read<int16_t>(reagent + 0x34);
            const auto plant = read<int16_t>(reagent + 0x36);
            if (materials.get({type,plant}) && counts[plant].total) inputs.push_back(plant);
        }
        if (inputs.empty()) continue;
        for (Address product : vector_at<Address>(recipe + 0x68)) {
            if (read<Address>(product) != image + tables.product || read<int16_t>(product + 0x54)<=0)
                continue;
            const auto item = read<int16_t>(product + 0x48);
            const auto mat = materials.get({read<int16_t>(product + 0x4c),read<int32_t>(product + 0x50)});
            if (!mat) continue; // generic material products are resolved below on their input
            const auto flags = flags_at(mat + 0x290);
            for (int plant : inputs) {
                auto &[cook,brew,paper,oil,cloth,dye,surface_crop] = uses[plant];
                cook |= flags[4];
                brew |= item == 69 && flags[5]; // DRINK of ALCOHOL
                paper |= item == 90;            // SHEET
                oil |= item == 73 && is_oil(mat);
                cloth |= item == 57 && flags[24];
                dye |= item == 70 && flags[33]; // POWDER_MISC of IS_DYE
            }
        }
    }
    return uses;
}
struct Uses { Traits yes; bool grass; };
Uses plant_uses(Address raw, const Materials &materials, Traits recipes) {
    const auto flags = flags_at(raw + 0x40);
    const auto defs = read<std::array<int16_t,9>>(raw + 0x2b8);
    Uses uses{recipes,flags[79]};
    auto &[cook,brew,paper,oil,cloth,dye,surface_crop] = uses.yes;
    cloth |= defs[4] >= 0;
    // Surface farm plots require a seed-bearing seasonal crop with a surface biome.
    bool surface_biome = false;
    for (int i=22; i<=75; ++i)
        if ((i<=52 || i>=59) && flags[i]) surface_biome = true;
    surface_crop = !flags[78] && !uses.grass && defs[3]>=0 && surface_biome &&
        (flags[0] || flags[1] || flags[2] || flags[3]);
    const auto indices = read<std::array<int32_t,9>>(raw + 0x2cc);
    std::vector<Address> parts;
    for (size_t slot=0; slot<defs.size(); ++slot)
        if (auto mat = materials.get({defs[slot],indices[slot]})) parts.push_back(mat);
    for (Address growth : vector_at<Address>(raw + 0x658)) {
        if (auto mat = materials.get({read<int16_t>(growth + 0x104),read<int32_t>(growth + 0x108)}))
            parts.push_back(mat);
    }
    for (Address mat : parts) {
        const auto mf = flags_at(mat + 0x290);
        cook |= mf[4];
        dye |= mf[33];
        const auto ids = vector_at<Address>(mat + 0x350);
        const auto types = vector_at<int16_t>(mat + 0x398);
        const auto species = vector_at<int32_t>(mat + 0x3b0);
        for (size_t j=0; j<ids.size(); ++j) {
            const auto id = string_at(ids[j]);
            const auto target = materials.get({types.at(j),species.at(j)});
            if (!target) continue;
            const auto target_flags = flags_at(target + 0x290);
            cook |= target_flags[4];
            brew |= id == "DRINK_MAT" && target_flags[5];
            paper |= id == "PRESS_PAPER_MAT";
            oil |= id == "PRESS_LIQUID_MAT" && is_oil(target);
            cloth |= id == "THREAD" && target_flags[24];
        }
        for (Address entry : vector_at<Address>(mat + 0x4a8))
            paper |= string_at(entry) == "PAPER_PLANT";
    }
    return uses;
}

bool collect(Address image, Address world, DfcnJournalLine emit, void *ctx) noexcept try {
    const auto pe = read<uint32_t>(image + 0x3c);
    const auto stamp = read<uint32_t>(image + pe + 8);
    const auto *profile = std::find_if(std::begin(profiles),std::end(profiles),
        [&](const Tables &p) { return p.stamp == stamp; });
    if (profile == std::end(profiles)) return false;
    const auto raws = vector_at<Address>(world + 0x11b408);
    Map map{read<std::array<int32_t,3>>(world + 0x116bec),{},std::vector<Count>(raws.size())};
    if (raws.empty() || std::ranges::any_of(map.dimensions, [](auto n){ return n<=0; })) return false;
    for (Address block : vector_at<Address>(world + 0x116ba0))
        map.add_block(block, image + profile->grass);
    if (map.blocks.empty()) return false;
    for (Address plant : vector_at<Address>(world + 0x1ddd8)) {
        if (read<uint32_t>(plant + 0x10) & 4u) continue; // permanently dead vegetation
        map.add_plant(read<int16_t>(plant + 2),read<Position>(plant + 4));
    }
    // Planted seeds belong to their farm plot's inventory, including ripe unharvested crops.
    for (Address building : vector_at<Address>(world + 0x1ca20)) {
        if (read<Address>(building) != image + profile->farm) continue;
        for (Address held : vector_at<Address>(building + 0x128)) {
            const auto item = read<Address>(held);
            if (item && read<Address>(item) == image + profile->seed)
                map.add_plant(read<int32_t>(item + 0xbc),read<Position>(item + 8));
        }
    }
    Materials materials;
    for (Address raw : raws) materials.by_plant.push_back(vector_at<Address>(raw + 0x2a0));
    const auto recipes = recipe_uses(world,image,*profile,materials,map.counts);
    std::vector<std::string> lines;
    for (size_t i=0; i<raws.size(); ++i) {
        const auto count = map.counts[i];
        if (!count.total) continue;
        const auto uses = plant_uses(raws[i],materials,recipes[i]);
        std::string row(prefix);
        row += string_at(raws[i] + 0x50) + " | " + std::to_string(count.total) +
            (uses.grass ? " tiles" : " plants") + " (" + std::to_string(count.surface) + " above ground)";
        row += uses.yes.back() ? " | surface crop | " : " | not a surface crop | ";
        std::string products;
        for (size_t j=0; j<labels.size(); ++j) if (uses.yes[j]) {
            if (!products.empty()) products += ", ";
            products += features[j];
        }
        row += products.empty() ? "no listed uses" : products;
        lines.push_back(std::move(row));
    }
    const auto summary = std::string(prefix) + std::to_string(lines.size()) + " species";
    for (const auto &line : lines) emit(ctx,line.data(),line.size());
    emit(ctx,summary.data(),summary.size());
    return true;
} catch (...) { return false; }

bool translate(const char *data, size_t size, DfcnJournalPart emit, void *ctx) noexcept try {
    std::string_view line(data,size);
    if (!line.starts_with(prefix)) return false;
    line.remove_prefix(prefix.size());
    const auto number = [](std::string_view s) {
        uint64_t n;
        const auto [p,ec] = std::from_chars(s.data(),s.data()+s.size(),n);
        return ec == std::errc{} && p == s.data()+s.size();
    };
    if (line.ends_with(" species")) {
        const auto n = line.substr(0,line.size()-8);
        if (!number(n)) return false;
        const auto title = "植物统计，共 " + std::string(n) + " 种";
        emit(ctx,title.data(),title.size(),false);
        return true;
    }
    // Read trailing fields from the right; modded names may contain separators.
    const auto take_field = [&line]() -> std::string_view {
        const auto sep = line.rfind(" | ");
        if (sep == line.npos) return {};
        const auto field = line.substr(sep+3);
        line = line.substr(0,sep);
        return field;
    };
    Traits yes{};
    if (line.ends_with(" | surface crop Y") || line.ends_with(" | surface crop N")) {
        // Previously saved surveys contain seven explicit Y/N fields.
        for (size_t i=features.size(); i-- > 0;) {
            const auto field = take_field();
            if (field.size()!=features[i].size()+2 || !field.starts_with(features[i]) ||
                    field[field.size()-2]!=' ' || (field.back()!='Y' && field.back()!='N')) return false;
            yes[i] = field.back()=='Y';
        }
    } else {
        auto products = take_field();
        if (products.empty()) return false;
        if (products != "no listed uses") {
            for (;;) {
                const auto comma = products.find(", ");
                const auto last = features.end()-1;
                const auto found = std::find(features.begin(),last,products.substr(0,comma));
                if (found == last) return false;
                yes[found-features.begin()] = true;
                if (comma == products.npos) break;
                products.remove_prefix(comma+2);
            }
        }
        const auto crop = take_field();
        if (crop != "surface crop" && crop != "not a surface crop") return false;
        yes.back() = crop == "surface crop";
    }
    const auto sep = line.rfind(" | ");
    if (sep == line.npos) return false;
    const auto name = line.substr(0,sep);
    auto counts = line.substr(sep+3);
    if (!counts.ends_with(" above ground)")) return false;
    counts.remove_suffix(14);
    const auto space = counts.find(' '), paren = counts.find(" (");
    if (space == counts.npos || paren == counts.npos || paren<=space) return false;
    const auto total=counts.substr(0,space), surface=counts.substr(paren+2);
    const auto unit=counts.substr(space+1,paren-space-1);
    if (!number(total) || !number(surface) || (unit!="plants" && unit!="tiles")) return false;
    const auto quantity_unit = unit=="tiles" ? " 格" : " 株";
    std::string result = "　" + std::string(total) + quantity_unit +
        "（地表 " + std::string(surface) + quantity_unit + "）";
    if (yes.back()) result += "　地表农田可种";
    std::string available;
    for (size_t i=0; i<labels.size(); ++i) {
        if (!yes[i]) continue;
        if (!available.empty()) available += "、";
        available += labels[i];
    }
    if (!available.empty()) result += "　可" + available;
    emit(ctx,name.data(),name.size(),true);
    emit(ctx,result.data(),result.size(),false);
    return true;
} catch (...) { return false; }
const DfcnJournalAction action{DFCN_JOURNAL_ACTION_ABI,sizeof(DfcnJournalAction),
    "Survey plants","统计植物信息",prefix.data(),collect,translate};
}

extern "C" __declspec(dllexport) const DfcnJournalAction *dfcn_journal_action(uint32_t abi) {
    return abi == action.abi ? &action : nullptr;
}
