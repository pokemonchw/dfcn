// Edition relocation is native binding data, not a second feature pipeline.
// Reviewed profiles retain reference-image coordinates; all callers receive
// the selected image's real addresses and still validate the expected bytes.
struct NativeImageRange { uintptr_t begin, end, native; };
struct NativeImageByte { uintptr_t address; unsigned char reference, native; };
#ifndef _WIN32
#include "native_elf_build_bindings.inc"
#endif

static bool native_reference_relocated() {
#ifdef _WIN32
    return native_pe_relocated();
#else
    return elf_runtime::supported() && elf_runtime::state().edition != 1;
#endif
}

static uintptr_t native_reference_va(uintptr_t address) {
#ifdef _WIN32
    return native_pe_rva(address);
#else
    if (!elf_runtime::supported()) return 0;
    if (elf_runtime::automatic()) {
        return address <= UINT32_MAX ? address_runtime::resolve(elf_runtime::state().main_addresses.ranges,
            static_cast<uint32_t>(address)) : 0;
    }
    if (!native_reference_relocated()) return address;
    const auto &ranges = native_elf_edition_ranges;
    auto found = std::upper_bound(std::begin(ranges), std::end(ranges), address,
        [](uintptr_t value, const auto &range) { return value < range.begin; });
    if (found != std::begin(ranges)) {
        --found;
        if (address < found->end) return found->native + address - found->begin;
    }
    return 0; // Unreviewed addresses never fall back to another image's code.
#endif
}

static uintptr_t native_reference_rva(uintptr_t offset) {
#ifdef _WIN32
    return native_pe_rva(offset);
#else
    if (!native_reference_relocated()) return offset;
    if (offset > UINTPTR_MAX - 0x400000) return 0;
    const uintptr_t address = native_reference_va(offset + 0x400000);
    const uintptr_t origin = elf_runtime::automatic() ? elf_runtime::state().executable_origin : 0x400000;
    return address >= origin ? address - origin : 0;
#endif
}

static uintptr_t native_reference_address(uintptr_t base, uintptr_t offset) {
    if (!base) return 0;
    const uintptr_t relocated = native_reference_rva(offset);
    return relocated && relocated <= UINTPTR_MAX - base ? base + relocated : 0;
}

static bool native_reference_bytes(uintptr_t reference_va, std::vector<unsigned char> &expected) {
    if (!native_reference_relocated() || expected.empty()) return true;
#ifndef _WIN32
    if (!native_reference_va(reference_va) || expected.size() > UINTPTR_MAX - reference_va)
        return false;
    const auto apply = [&](const auto &bytes) {
        auto found = std::lower_bound(std::begin(bytes), std::end(bytes), reference_va,
            [](const auto &byte, uintptr_t value) { return byte.address < value; });
        for (; found != std::end(bytes) && found->address < reference_va + expected.size(); ++found) {
            auto &value = expected[found->address - reference_va];
            if (value != found->reference) return false;
            value = found->native;
        }
        return true;
    };
    if (elf_runtime::automatic()) {
        const auto &binding = elf_runtime::state().main_addresses;
        auto span = std::upper_bound(binding.ranges.begin(), binding.ranges.end(), reference_va,
            [](uintptr_t value, const auto &range) { return value < range.begin; });
        if (span == binding.ranges.begin() || reference_va + expected.size() > std::prev(span)->end) return false;
        return apply(binding.bytes);
    }
    return apply(native_elf_edition_bytes);
#else
    return native_pe_bytes(reference_va, expected);
#endif
}

static bool native_reference_calls(std::vector<NativeCall> &calls, uintptr_t origin) {
    if (!native_reference_relocated()) return true;
    uintptr_t native_origin = origin;
#ifndef _WIN32
    if (elf_runtime::automatic() && origin == 0x400000) native_origin = elf_runtime::state().executable_origin;
#endif
    for (auto &call : calls) {
        const auto fail = [&](const char *reason) {
            log_line("ERROR", std::string("Native call relocation: ") + reason +
                "; reference site=" + std::to_string(call.va) +
                "; reference target=" + std::to_string(call.target) +
                "; reference origin=" + std::to_string(origin));
            return false;
        };
        if (call.va > UINTPTR_MAX - origin || call.target > UINTPTR_MAX - origin)
            return fail("reference address overflow");
        if (!native_reference_bytes(origin + call.va, call.inline_original))
            return fail("inline instruction signature cannot be resolved");
        const uintptr_t site = native_reference_va(origin + call.va);
        const uintptr_t target = call.target ? native_reference_va(origin + call.target) : 0;
        if (!site || site < native_origin) return fail("call site is unavailable");
        if (call.target && (!target || target < native_origin)) return fail("call target is unavailable");
        call.va = site - native_origin;
        if (call.target) call.target = target - native_origin;
    }
    return true;
}
