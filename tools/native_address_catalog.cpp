// Production address-data compiler, invoked only by the normal build entry.
// It runs the same discovery used by the core against an executable file;
// the game is neither loaded as a module nor started.
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <graphics_abi.h>
#include "../src/native_pe_resolver.h"
#include "../src/native_argument_alias_evidence.h"
#include <iostream>

namespace {
void source_arguments(const std::filesystem::path &executable, const std::filesystem::path &seed,
        const std::filesystem::path &destination) {
    using namespace dfcn::pe_runtime;
    using namespace dfcn::address_runtime;
    Image image(executable);
    const auto catalog = load_catalog(seed);
    const auto profile_index = known_profile_index(image, catalog);
    if (profile_index >= catalog.known.size())
        throw std::runtime_error("Entry-argument production requires an exact reviewed reference image");
    image.prepare_scan();
    const auto &profile = catalog.known[profile_index];
    std::map<uint32_t, Byte> changes;
    for (const auto &byte : profile.bytes) changes.emplace(byte.address, byte);
    argument_alias_detail::Cache cache(image);
    std::map<uint32_t, argument_alias_detail::Site> sites;
    std::map<uint32_t, frame_detail::Origins> origins;
    std::set<uint32_t> needed_owners;
    for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) && pattern.reference == pattern.owner &&
            std::any_of(catalog.required.begin(), catalog.required.end(), [&](const auto &span) {
                return span.first >= pattern.reference && uint64_t(span.first) < uint64_t(pattern.reference) + pattern.raw.size();
            })) needed_owners.insert(pattern.owner);
    // Receiver declarations may reach a consumed member through an actual
    // direct-call ancestor. Retain those existing source bodies as evidence;
    // this adds no required resource and grants no callable entry address.
    for (bool changed = true; changed;) {
        changed = false;
        for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) && pattern.reference == pattern.owner &&
                !needed_owners.count(pattern.owner)) {
            for (const auto &fixup : pattern.fixups) if (fixup.width == 4 && fixup.offset &&
                    fixup.next == fixup.offset + 4 && fixup.next <= pattern.raw.size() &&
                    pattern.raw[fixup.offset - 1] == 0xe8 && needed_owners.count(fixup.target)) {
                changed |= needed_owners.insert(pattern.owner).second; break;
            }
        }
    }
    // Bounded argument effects need the actual callees as well as callers.
    // Stay inside the already authenticated source-body pool: no executable
    // enumeration, new required resource, or guessed callee entry is added.
    std::set<uint32_t> available_owners;
    for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) && pattern.reference == pattern.owner)
        available_owners.insert(pattern.owner);
    for (bool changed = true; changed;) {
        changed = false;
        for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) && pattern.reference == pattern.owner &&
                needed_owners.count(pattern.owner)) {
            for (const auto &fixup : pattern.fixups) if (fixup.width == 4 && fixup.offset &&
                    fixup.next == fixup.offset + 4 && fixup.next <= pattern.raw.size() &&
                    pattern.raw[fixup.offset - 1] == 0xe8 && available_owners.count(fixup.target))
                changed |= needed_owners.insert(fixup.target).second;
        }
    }
    std::ostringstream source_graphs(std::ios::binary | std::ios::out);
    uint32_t graph_count = 0;
    size_t bodies = 0, complete = 0;
    std::map<uint32_t, const Pattern *> complete_bodies;
    for (const auto &pattern : catalog.patterns) if ((pattern.flags & 2) &&
            pattern.reference == pattern.owner && !pattern.raw.empty()) {
        const auto [at, inserted] = complete_bodies.emplace(pattern.owner, &pattern);
        if (!inserted) {
            const auto shared = (std::min)(at->second->raw.size(), pattern.raw.size());
            if (std::memcmp(at->second->raw.data(), pattern.raw.data(), shared))
                throw std::runtime_error("Canonical logical source bodies disagree");
            if (pattern.raw.size() > at->second->raw.size()) at->second = &pattern;
        }
    }
    for (const auto &[reference, candidate] : complete_bodies) {
        (void)reference;
        const auto &pattern = *candidate;
        if (!needed_owners.count(pattern.owner)) continue;
        const auto owner = resolve(profile.ranges, pattern.owner);
        if (!owner) continue;
        const auto *actual = image.read(owner, pattern.raw.size());
        if (!actual) continue;
        ++bodies;
        const auto unavailable = [&](uint32_t address, const char *reason) {
            std::cout << "Canonical entry arguments unavailable: reference=0x" << std::hex << pattern.owner
                << " owner=0x" << owner << " instruction=0x" << address << " "
                << reason << std::dec << std::endl;
        };
        const auto &flow = cache.get(owner);
        if (!flow.valid) {
            unavailable(flow.failure.address, flow.failure.reason);
            continue;
        }
        if (uint64_t(owner) + pattern.raw.size() != flow.end) {
            unavailable(flow.end, "reviewed source body differs from complete logical extent");
            continue;
        }
        std::vector<bool> table_bytes(pattern.raw.size());
        bool proved = true;
        if (pattern.flags & 1024u) {
            // The producer has authenticated the complete canonical shape
            // and all original reference records. Cross-check every emitted
            // relocation against this exact reviewed image. Unknown ordinary
            // E8 callees remain source references only: neither an address
            // mapping nor their actual noreturn/receiver behavior is imported.
            for (const auto &fixup : pattern.fixups) {
                const auto actual_target = operand_target(image, pattern, owner, fixup);
                uint32_t expected = resolve(profile.ranges, fixup.target);
                if (fixup.target >= pattern.reference &&
                        uint64_t(fixup.target) < uint64_t(pattern.reference) + pattern.raw.size())
                    expected = owner + fixup.target - pattern.reference;
                const auto instruction = fixup.offset ? flow.code.find(owner + fixup.offset - 1) : flow.code.end();
                const bool unknown_call = !expected && fixup.target && (fixup.kind & 0x1ffu) == 0x100u &&
                    fixup.width == 4 && fixup.offset && fixup.next == fixup.offset + 4 &&
                    pattern.raw[fixup.offset - 1] == 0xe8 && instruction != flow.code.end() &&
                    instruction->second.decoded.opcode == 0xe8 && instruction->second.decoded.len == 5 &&
                    !flow.flow.nonreturning_calls.count(instruction->first) &&
                    (actual_target < owner || uint64_t(actual_target) >= uint64_t(owner) + pattern.raw.size());
                const auto *section = image.section(actual_target);
                if ((!expected && fixup.target && !unknown_call) ||
                        (unknown_call && (!section || !(section->flags & Image::execute_flag))) ||
                        (!unknown_call && actual_target != expected)) {
                    unavailable(owner + fixup.offset, "source-only relocation lacks its original reference contract");
                    proved = false; break;
                }
                int64_t source_target = 0;
                if (!(fixup.kind & 0xffu) && (fixup.width == 1 || fixup.width == 4)) {
                    int32_t value = 0;
                    if (fixup.width == 1) value = static_cast<int8_t>(pattern.raw[fixup.offset]);
                    else std::memcpy(&value, pattern.raw.data() + fixup.offset, 4);
                    source_target = int64_t(pattern.reference) + fixup.next + value;
                } else if ((fixup.kind & 0xffu) == 1 && fixup.width == 4) {
                    uint32_t value = 0; std::memcpy(&value, pattern.raw.data() + fixup.offset, 4); source_target = value;
                } else {
                    unavailable(owner + fixup.offset, "source-only reference has an unsupported relocation encoding");
                    proved = false; break;
                }
                if (source_target != fixup.target) {
                    unavailable(owner + fixup.offset, "source-only bytes contradict their original reference");
                    proved = false; break;
                }
                for (uint32_t byte = 0; byte < fixup.width; ++byte) {
                    const auto offset = fixup.offset + byte;
                    if (!pattern.mask[offset] || resolve(profile.ranges, pattern.reference + offset) != owner + offset) {
                        proved = false; break;
                    }
                    table_bytes[offset] = true;
                }
                if (!proved) break;
            }
            if (!proved) continue;
        }
        for (const auto &[table, destinations] : flow.flow.rva_tables) {
            if (table < owner || uint64_t(table - owner) + destinations.size() * 4 > pattern.raw.size()) {
                unavailable(table, "decoded source RVA table exceeds complete body");
                proved = false; break;
            }
            for (size_t index = 0; index < destinations.size(); ++index) {
                const auto offset = table - owner + index * 4;
                uint32_t reference; std::memcpy(&reference, pattern.raw.data() + offset, 4);
                // This is a data-byte correspondence, not permission to
                // execute every table destination. Unreachable switches
                // retain their actual RVA array, while the graph below
                // exports only decoder-proved reachable indirect edges.
                if (resolve(profile.ranges, reference) != destinations[index]) {
                    unavailable(table + static_cast<uint32_t>(index * 4),
                        "source RVA table target has no reviewed coordinate correspondence");
                    proved = false; break;
                }
                std::fill_n(table_bytes.begin() + offset, 4, true);
            }
            if (!proved) break;
        }
        if (!proved) continue;
        // Equal selector bytes also belong to a decoder-proved data array,
        // even when the old reviewed range table retained code only.
        for (const auto &[begin, end] : flow.flow.data_ranges) {
            if (begin < owner || uint64_t(end) > uint64_t(owner) + pattern.raw.size()) {
                unavailable(begin, "decoded source data exceeds complete body"); proved = false; break;
            }
            for (uint32_t address = begin; address < end; ++address) {
                const auto offset = address - owner;
                if (table_bytes[offset]) continue;
                if (actual[offset] != pattern.raw[offset]) {
                    unavailable(address, "decoded source selector data differs from canonical bytes");
                    proved = false; break;
                }
                table_bytes[offset] = true;
            }
            if (!proved) break;
        }
        if (!proved) continue;
        // The reviewed coordinate table deliberately omits inline data and
        // its alignment. Authenticate an omitted alignment run only when
        // both images contain the exact same complete NOP/INT3 instructions,
        // outside the executable CFG. It never supplies a graph entry or a
        // runtime address; unclassified data and changed padding still fail.
        for (size_t begin = 0; begin < pattern.raw.size();) {
            if (table_bytes[begin] || resolve(profile.ranges, pattern.reference + static_cast<uint32_t>(begin))) {
                ++begin; continue;
            }
            size_t end = begin + 1;
            while (end < pattern.raw.size() && !table_bytes[end] &&
                    !resolve(profile.ranges, pattern.reference + static_cast<uint32_t>(end))) ++end;
            bool padding = !std::memcmp(actual + begin, pattern.raw.data() + begin, end - begin);
            // code also retains decoded, unreachable alignment rows. Only
            // the complete CFG's incoming states represent executable paths,
            // including all admitted external/EH roots.
            const auto first_code = flow.incoming.lower_bound(owner + static_cast<uint32_t>(begin));
            if (first_code != flow.incoming.end() && first_code->first < owner + end) padding = false;
            if (first_code != flow.incoming.begin()) {
                const auto previous = std::prev(first_code);
                if (uint64_t(previous->first) + flow.code.at(previous->first).bytes.size() > owner + begin) padding = false;
            }
            for (size_t at = begin; padding && at < end;) {
                unsigned char bounded[32]{};
                std::memcpy(bounded, actual + at, (std::min)(size_t{15}, end - at));
                dfcn::display_decode::hde64s op{};
                dfcn::display_decode::hde64_disasm(bounded, &op);
                const bool nop = (op.opcode == 0x90 && !op.rex_b) ||
                    (op.opcode == 0x0f && op.opcode2 == 0x1f && !op.modrm_reg);
                if (!op.len || op.len > end - at || (op.flags & F_ERROR) || op.p_67 || op.p_lock ||
                        op.p_rep || op.p_seg || (!nop && op.opcode != 0xcc)) padding = false;
                else at += op.len;
            }
            if (padding) std::fill(table_bytes.begin() + begin, table_bytes.begin() + end, true);
            begin = end;
        }
        for (size_t offset = 0; offset < pattern.raw.size(); ++offset) {
            if (table_bytes[offset]) continue;
            const auto reference = pattern.reference + static_cast<uint32_t>(offset);
            const auto change = changes.find(reference);
            if (resolve(profile.ranges, reference) != owner + offset ||
                    (change != changes.end() && change->second.reference != pattern.raw[offset]) ||
                    actual[offset] != (change == changes.end() ? pattern.raw[offset] : change->second.native)) {
                unavailable(owner + static_cast<uint32_t>(offset),
                    "source instruction or unclassified data lacks complete reviewed byte evidence");
                proved = false; break;
            }
        }
        if (!proved) continue;
        ++complete;
        ++graph_count;
        const auto coordinate = [&](uint32_t address) { return pattern.reference + address - owner; };
        write_number(source_graphs, pattern.owner);
        write_number(source_graphs, static_cast<uint32_t>(pattern.raw.size()));
        write_number(source_graphs, static_cast<uint32_t>(flow.code.size()));
        for (const auto &[address, instruction] : flow.code) {
            const auto offset = address - owner;
            write_number(source_graphs, coordinate(address));
            write_number(source_graphs, static_cast<uint32_t>(instruction.bytes.size()));
            source_graphs.write(reinterpret_cast<const char *>(pattern.raw.data() + offset), instruction.bytes.size());
        }
        write_number(source_graphs, static_cast<uint32_t>(flow.flow.indirect_edges.size()));
        for (const auto &[address, destinations] : flow.flow.indirect_edges) {
            write_number(source_graphs, coordinate(address));
            write_number(source_graphs, static_cast<uint32_t>(destinations.size()));
            for (const auto target : destinations) write_number(source_graphs, coordinate(target));
        }
        write_number(source_graphs, static_cast<uint32_t>(flow.flow.nonreturning_calls.size()));
        for (const auto address : flow.flow.nonreturning_calls) write_number(source_graphs, coordinate(address));
        write_number(source_graphs, static_cast<uint32_t>(flow.external_entries.size()));
        for (const auto address : flow.external_entries) write_number(source_graphs, coordinate(address));
        for (const auto &[address, instruction] : flow.code) {
            const auto rsp = flow.origin(address, 4), rbp = flow.origin(address, 5);
            if (rsp || rbp) {
                frame_detail::Origins origin{pattern.owner, pattern.reference + address - owner,
                    pattern.reference + address - owner + instruction.decoded.len,
                    rsp.value_or(0), rbp.value_or(0), (rsp ? 1u : 0u) | (rbp ? 2u : 0u)};
                const auto [previous, inserted] = origins.emplace(origin.begin, origin);
                if (!inserted && (previous->second.owner != origin.owner || previous->second.end != origin.end ||
                        previous->second.rsp != origin.rsp || previous->second.rbp != origin.rbp ||
                        previous->second.flags != origin.flags))
                    throw std::runtime_error("Conflicting exact-reference stack origins");
            }
            unsigned destination_register = 16, source_register = 16;
            if (!argument_alias_detail::move(instruction.bytes, destination_register, source_register)) continue;
            const auto argument = flow.argument(address, source_register);
            if (!argument || address < owner || uint64_t(address - owner) + instruction.bytes.size() > pattern.raw.size()) continue;
            const auto offset = address - owner;
            if (std::memcmp(pattern.raw.data() + offset, instruction.bytes.data(), instruction.bytes.size()) ||
                    std::any_of(pattern.mask.begin() + offset, pattern.mask.begin() + offset + instruction.bytes.size(),
                        [](unsigned char value) { return value != 0; })) continue;
            argument_alias_detail::Site site{pattern.reference + offset, pattern.owner, argument,
                source_register, destination_register, instruction.bytes};
            const auto [previous, inserted] = sites.emplace(site.reference, site);
            if (!inserted && (previous->second.owner != site.owner || previous->second.argument != site.argument ||
                    previous->second.raw != site.raw))
                throw std::runtime_error("Conflicting exact-reference entry-argument evidence");
        }
    }
    std::vector<frame_detail::Origins> intervals;
    for (const auto &[begin, origin] : origins) {
        (void)begin;
        if (!intervals.empty() && intervals.back().owner == origin.owner && intervals.back().end == origin.begin &&
                intervals.back().rsp == origin.rsp && intervals.back().rbp == origin.rbp &&
                intervals.back().flags == origin.flags) intervals.back().end = origin.end;
        else intervals.push_back(origin);
    }
    std::ostringstream output(std::ios::binary | std::ios::out);
    output.write("DFCNAA01", 8); write_number(output, 3); write_number(output, static_cast<uint32_t>(sites.size()));
    for (const auto &[reference, site] : sites) {
        write_number(output, reference); write_number(output, site.owner); write_number(output, site.argument);
        write_number(output, site.source); write_number(output, site.destination);
        write_number(output, static_cast<uint32_t>(site.raw.size()));
        output.write(reinterpret_cast<const char *>(site.raw.data()), static_cast<std::streamsize>(site.raw.size()));
    }
    write_number(output, static_cast<uint32_t>(intervals.size()));
    for (const auto &origin : intervals) {
        write_number(output, origin.owner); write_number(output, origin.begin); write_number(output, origin.end);
        write_number(output, static_cast<uint32_t>(origin.rsp)); write_number(output, static_cast<uint32_t>(origin.rbp));
        write_number(output, origin.flags);
    }
    const auto graphs = source_graphs.str();
    write_number(output, graph_count);
    output.write(graphs.data(), static_cast<std::streamsize>(graphs.size()));
    if (!output) throw std::runtime_error("Cannot finish exact-reference entry-argument evidence");
    const auto value = output.str();
    std::filesystem::create_directories(destination.parent_path());
    auto candidate = destination; candidate += L".publish";
    try {
        std::ofstream file(candidate, std::ios::binary | std::ios::trunc);
        file.write(value.data(), static_cast<std::streamsize>(value.size())); file.close();
        if (!file || !MoveFileExW(candidate.c_str(), destination.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::runtime_error("Cannot publish exact-reference entry-argument evidence");
    } catch (...) {
        std::error_code ignored; std::filesystem::remove(candidate, ignored); throw;
    }
    std::cout << "Canonical entry arguments: " << sites.size() << " MOV sites in " << complete
        << " byte-proved complete CFG/EH owners (" << bodies << " source owners and CALL dependencies considered); "
        << intervals.size() << " proved stack-origin intervals; " << graph_count << " typed source CFGs" << std::endl;
}
template <typename Values>
void coordinates(const char *label, const Values &values, size_t limit = 16) {
    std::cerr << label << " (" << values.size() << "):" << std::hex;
    for (size_t index = 0; index < (std::min)(values.size(), limit); ++index)
        std::cerr << " 0x" << values[index];
    std::cerr << std::dec;
    if (values.size() > limit) std::cerr << " ... +" << values.size() - limit;
    std::cerr << std::endl;
}
void explain_missing(const dfcn::pe_runtime::Catalog &catalog, const dfcn::address_runtime::State &state) {
    coordinates("Unresolved reference resources", state.missing, state.missing.size());
    coordinates("Unresolved object fields", state.missing_fields);
    coordinates("Unresolved graphics tokens (object:canonical offset)", state.missing_graphics_tokens);
    coordinates("Unresolved display scopes", state.missing_display_scopes);
    coordinates("Unresolved consumed frame operands", state.missing_frame_operands);
    coordinates("Unresolved ABI-sensitive virtual call sites", state.missing_method_calls);
    coordinates("Unresolved inline string resizes", state.missing_inline_resizes);
    coordinates("Unresolved callable search contracts", state.missing_callable_searches);
    coordinates("Unresolved workshop recipe contracts", state.missing_workshop_recipes);
    coordinates("Unresolved closed native output regions", state.missing_output_regions);
    const auto semantics = dfcn::native_history_abi::discovery_detail::read(catalog.history_semantics);
    const auto semantic = [&](const char *label, const auto &values, bool fields) {
        std::cerr << label << " (" << values.size() << "):";
        for (size_t index = 0; index < (std::min)(values.size(), size_t(12)); ++index) {
            const auto type = static_cast<uint32_t>(values[index] >> 32);
            const auto found = std::find_if(semantics.types.begin(), semantics.types.end(),
                [&](const auto &entry) { return entry.type == type; });
            if (found != semantics.types.end()) std::cerr << ' ' << found->name;
            else std::cerr << " type=0x" << std::hex << type << std::dec;
            const auto member = static_cast<uint32_t>(values[index]);
            if (fields && !member) std::cerr << ":<object size/construction>";
            else if (fields && found != semantics.types.end()) {
                const auto field = std::find_if(found->fields.begin(), found->fields.end(),
                    [&](const auto &entry) { return entry.member == member; });
                if (field != found->fields.end()) std::cerr << ':' << field->name;
                else std::cerr << ":0x" << std::hex << member << std::dec;
            } else std::cerr << ":0x" << std::hex << member << std::dec;
        }
        if (values.size() > 12) std::cerr << " ... +" << values.size() - 12;
        std::cerr << std::endl;
    };
    semantic("Unresolved semantic fields", state.missing_semantic_fields, true);
    semantic("Unresolved semantic methods", state.missing_semantic_methods, false);
    size_t missing_tables = 0, missing_code = 0;
    for (auto reference : state.missing) {
        if (std::any_of(catalog.vtables.begin(), catalog.vtables.end(),
                [&](const auto &table) { return table.reference == reference; })) ++missing_tables;
        else if (std::any_of(catalog.patterns.begin(), catalog.patterns.end(), [&](const auto &pattern) {
                return (pattern.flags & 1) && reference >= pattern.reference &&
                    uint64_t(reference) < uint64_t(pattern.reference) + pattern.raw.size();
            })) ++missing_code;
    }
    std::cerr << "Resource gaps: " << missing_tables << " vtables, " << missing_code
              << " instruction spans, " << state.missing.size() - missing_tables - missing_code
              << " data/import spans; established " << state.function_owners.size()
              << " function scopes, " << state.fields.size() << " object fields, "
              << state.semantic_fields.size() << " semantic fields, " << state.semantic_methods.size()
              << " semantic methods, " << state.display_sites.size() << " display selectors; absent identity-only types="
              << state.absent_types.size() << std::endl;
    std::map<uint32_t, size_t> owners;
    for (auto reference : state.missing) {
        for (const auto &pattern : catalog.patterns) {
            if ((pattern.flags & 2) && reference >= pattern.reference &&
                    uint64_t(reference) < uint64_t(pattern.reference) + pattern.raw.size()) {
                ++owners[pattern.owner ? pattern.owner : pattern.reference];
                break;
            }
        }
    }
    std::vector<std::pair<uint32_t, size_t>> ordered(owners.begin(), owners.end());
    std::sort(ordered.begin(), ordered.end(), [](const auto &a, const auto &b) { return a.second > b.second; });
    for (size_t index = 0; index < (std::min)(ordered.size(), size_t(24)); ++index) {
        const auto [owner, count] = ordered[index];
        std::cerr << "Unresolved instruction owner: reference=0x" << std::hex << owner
                  << " native=0x" << dfcn::address_runtime::resolve(state.function_owners, owner)
                  << std::dec << " resources=" << count << std::endl;
    }
}
} // namespace

int main(int argc, char **argv) {
    using namespace dfcn::pe_runtime;
    try {
        if (argc == 5 && std::string(argv[1]) == "--source-arguments") {
            source_arguments(std::filesystem::u8path(argv[2]), std::filesystem::u8path(argv[3]),
                std::filesystem::u8path(argv[4]));
            return 0;
        }
        if (argc != 4) throw std::runtime_error("Address-data compiler requires executable, seed and cache directory");
        Image image(std::filesystem::u8path(argv[1]));
        const auto catalog = load_catalog(std::filesystem::u8path(argv[2]));
        const auto report = [](const std::string &message) {
            std::cout << message << std::endl;
        };
        const auto index = known_profile_index(image, catalog);
        const auto state = [&]() {
            if (index < catalog.known.size()) {
                std::cout << "Packaged native address data: " << catalog.known[index].label << std::endl;
                return prepare_known(image, catalog, index, report);
            }
            std::cout << "Native discovery: indexing target PE symbols and RTTI" << std::endl;
            image.prepare_scan();
            return scan(image, catalog, report);
        }();
        std::cout << "Native address-data generation: "
                  << catalog.required.size() - state.missing.size() << "/" << catalog.required.size()
                  << " resources; " << state.graphics_fields.size() << " graphics spans" << std::endl;
        if (!state.message.empty()) std::cout << state.message << std::endl;
        if (!state.complete) explain_missing(catalog, state);
        if (!usable(state))
            throw std::runtime_error("Cannot publish native address/layout evidence without completed structural validation");
        if (!state.complete) {
            std::cerr << "WARNING: Native address/layout catalog has unresolved feature resources; "
                         "only independently proved feature contracts are available. "
                         "The catalog remains partial." << std::endl;
        }
        const auto path = std::filesystem::u8path(argv[3]) /
            (hex_digest(image.digest) + "-r" + std::to_string(discovery_revision) + "-" +
             hex_digest(catalog.digest) + ".bin");
        save_cache(path, image, catalog, state);
        std::cout << "Generated " << (state.complete ? "complete" : "partial")
                  << " native address/layout catalog: " << dfcn::runtime::utf8(path) << std::endl;
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "Native address-data generation failed: " << error.what() << std::endl;
        return 1;
    }
}
