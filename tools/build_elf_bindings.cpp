// Disk-only address generation, invoked exclusively by tools/build.py.
// Uses the same discovery and ABI contracts as the runtime; never loads a game.
#include "native_elf_resolver.h"
#include <iostream>

int main(int argc, char **argv) {
    using namespace dfcn::elf_runtime;
    if (argc != 5 && argc != 6) return 1;
    try {
        Reader seed{std::filesystem::path(argv[1])};
        const auto identity = sha256(seed.bytes().data(), seed.bytes().size());
        seed.magic("DFCNEL01");
        if (seed.count(2) != 2) throw std::runtime_error("Missing ELF reference catalogs");
        const auto main_catalog = read_catalog(seed), library_catalog = read_catalog(seed);
        seed.finish();
        const Image executable{std::filesystem::path(argv[2])};
        const Image library{std::filesystem::path(argv[3])};
        std::array<State, 2> supplement;
        if (argc == 6) {
            Reader reader{std::filesystem::path(argv[5])};
            reader.magic("DFCNLS01");
            supplement[0] = read_bindings(reader, executable.size, [&](auto address, auto length) {
                return executable.section(address, length) != nullptr;
            });
            supplement[1] = read_bindings(reader, library.size, [&](auto address, auto length) {
                return library.section(address, length) != nullptr;
            });
            reader.finish();
        }
        const auto main = discover(executable, main_catalog, supplement[0].ranges, supplement[0].bytes);
        const auto graphics = discover(library, library_catalog, supplement[1].ranges, supplement[1].bytes);
        for (const auto &[label, state] : {std::pair{"game", &main}, std::pair{"graphics", &graphics}}) {
            if (state->complete) continue;
            std::cerr << "Unresolved ELF " << label << " reference spans (" << state->missing.size() << "):" << std::hex;
            for (const auto address : state->missing) std::cerr << " 0x" << address;
            std::cerr << std::dec << '\n';
        }
        std::ostringstream output(std::ios::binary | std::ios::out);
        output.write("DFCNLA01", 8); write_number(output, 1);
        for (const auto &digest : {executable.digest, library.digest, identity})
            output.write(reinterpret_cast<const char *>(digest.data()), digest.size());
        write_state(output, main); write_state(output, graphics);
        const auto payload = output.str();
        const auto digest = sha256(reinterpret_cast<const unsigned char *>(payload.data()), payload.size());
        const std::filesystem::path destination(argv[4]), candidate(destination.string() + ".publish");
        std::ofstream stream(candidate, std::ios::binary | std::ios::trunc);
        stream.write(payload.data(), payload.size());
        stream.write(reinterpret_cast<const char *>(digest.data()), digest.size());
        stream.close();
        if (!stream) throw std::runtime_error("Cannot publish native ELF edition bindings");
        std::filesystem::rename(candidate, destination);
        if (!main.complete || !graphics.complete) return 3;
        std::cout << "Generated native ELF edition bindings: " << executable.build_id
            << "; g_src=" << library.build_id << '\n';
    } catch (const std::exception &error) {
        std::cerr << "ELF address generation failed: " << error.what() << '\n';
        return 1;
    }
}
