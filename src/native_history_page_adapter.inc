// Native 53.16 page ABI only. Shared producers never select a translation,
// ownership or recovery policy by operating system.
enum class NativeHistoryPageSymbol {
    Biography, Confidence, DescribeEnd, ChildRelation, Name, KillSummary,
    Creatures, Entities, Figures, Nemeses, Units, Events, Mode, Collections, Ages, AgeTitle, Program, Item, ArtifactItem, AppendLiteral,
    OriginalName, CapitalizeFirst, ArtifactName, ItemDescription, CountedAppend, AssignLiteral, Relationship, FigureName, EntityName, SiteName, CollectionDate, Count
};
static uintptr_t native_history_page_address(NativeHistoryPageSymbol symbol) {
    using Symbol = NativeHistoryPageSymbol;
    // Globals resolve through the same structural bindings as all other
    // snapshots; do not maintain a second set of native world offsets.
    switch (symbol) {
    case Symbol::Creatures: return native_history_global(0x24eca68);
    case Symbol::Entities: return native_history_global(0x23d17f8);
    case Symbol::Figures: return native_history_global(0x24f9d18);
    case Symbol::Nemeses: return native_history_global(0x23e5178);
    case Symbol::Units: return native_history_global(0x24e37c0);
    case Symbol::Events: return native_history_global(0x24f9cb8);
    case Symbol::Mode: return native_history_global(0x189c298);
    case Symbol::Collections: return native_history_global(0x24f9d30);
    case Symbol::Ages: return native_history_global(0x24f9ef8);
    default: break;
    }
    struct Binding { Symbol symbol; uintptr_t pe_rva, elf_va; };
    static constexpr Binding bindings[] = {
        {Symbol::Biography, 0xc2b870, 0xa12140},
        {Symbol::Confidence, 0xb95720, 0xa0d820},
        {Symbol::DescribeEnd, 0xb92640, 0xa603a0},
        {Symbol::ChildRelation, 0x75a580, 0x1503cd0},
        {Symbol::Name, 0xa946e0, 0x12c58d0},
        {Symbol::KillSummary, 0xbba250, 0xa5b420},
        {Symbol::AgeTitle, 0xbb8e10, 0x9d2270},
        {Symbol::Program, 0xd3bea0, 0x1ce3780},
        {Symbol::Item, 0xa82c10, 0x12b6a70},
        {Symbol::ArtifactItem, 0xc65450, 0xe68020},
        {Symbol::AppendLiteral, 0x6f560, 0x8377e0},
        {Symbol::OriginalName, 0xa94030, 0x12bfe90},
        {Symbol::CapitalizeFirst, 0x52d650, 0x424f90},
        {Symbol::ArtifactName, 0xb94400, 0xa0d8c0},
        {Symbol::ItemDescription, 0xc75000, 0xe76ce0},
        {Symbol::CountedAppend, 0x6fa10, 0x837660},
        {Symbol::AssignLiteral, 0x6f580, 0xb05af0},
        {Symbol::Relationship, 0xb619e0, 0xa2bc30},
        {Symbol::FigureName, 0xb92f10, 0xa136b0},
        {Symbol::EntityName, 0xb92900, 0xa27ae0},
        {Symbol::SiteName, 0xb93930, 0xa27ee0},
        {Symbol::CollectionDate, 0xb92640, 0xa603a0},
    };
    const uintptr_t base = native_history_profile_base();
    if (!base) return 0;
    for (const auto &binding : bindings) {
        if (binding.symbol != symbol) continue;
#ifdef _WIN32
        return native_pe_address(base, binding.pe_rva);
#else
        return native_reference_address(base, binding.elf_va - 0x400000);
#endif
    }
    return 0;
}

enum class NativeHistoryLinkSlot { Unit, Assignment, StartYear, EndYear };
static size_t native_history_item_kill_slot() {
    const auto *layout = native_history_object_layout("item");
    constexpr size_t coordinate = 0x128; // item::listNotableKills / add_kill_paragraph
    return layout && layout->slot_count > coordinate / sizeof(uintptr_t)
        ? layout->slots[coordinate / sizeof(uintptr_t)] : SIZE_MAX;
}

static size_t native_history_link_slot(NativeHistoryLinkSlot slot) {
#ifdef _WIN32
    static constexpr size_t slots[] = {0x20, 0x30, 0x40, 0x48};
#else
    // Itanium vtables have two destructor entries rather than one.
    static constexpr size_t slots[] = {0x28, 0x38, 0x48, 0x50};
#endif
    return slots[static_cast<size_t>(slot)];
}
static bool native_history_page_getter(uintptr_t object, size_t slot, int32_t &value) {
    // All hf-link value getters in this PE are leaf immediates or direct
    // scalar loads. Decode only those contracts; never execute an unverified
    // virtual function and never interpret a formatted relation label.
    uintptr_t table = 0, code = 0;
    std::array<uint8_t, 28> storage{};
    uint8_t *bytes = storage.data();
    const uintptr_t base = native_history_profile_base();
    if (!base || !native_history_copy(object, table) || table < base ||
        table - base >= 0x3000000 || !native_history_copy(table + slot, code) ||
        code < base || code - base >=
#ifdef _WIN32
            0x15e0000 ||
#else
            0x1c99000 ||
#endif
        !native_history_copy_bytes(code, storage.data(), storage.size())) return false;
#ifndef _WIN32
    if (std::memcmp(bytes, "\xf3\x0f\x1e\xfa", 4) == 0) bytes += 4;
    constexpr uint8_t register_short = 0x47, register_long = 0x87; // rdi
#else
    constexpr uint8_t register_short = 0x41, register_long = 0x81; // rcx
#endif
    if (bytes[0] == 0xb8 && bytes[5] == 0xc3) {
        std::memcpy(&value, bytes + 1, 4); return true;
    }
    if (bytes[0] == 0x66 && bytes[1] == 0xb8 && bytes[4] == 0xc3) {
        int16_t short_value = 0;
        std::memcpy(&short_value, bytes + 2, 2); value = short_value; return true;
    }
    if ((bytes[0] == 0x33 || bytes[0] == 0x31) && bytes[1] == 0xc0 && bytes[2] == 0xc3) {
        value = 0; return true;
    }
    if (bytes[0] == 0x83 && bytes[1] == 0xc8 && bytes[2] == 0xff && bytes[3] == 0xc3) {
        value = -1; return true;
    }
    if (bytes[0] == 0x8b && bytes[1] == register_short && bytes[3] == 0xc3)
        return native_history_copy(object + bytes[2], value);
    if (bytes[0] == 0x8b && bytes[1] == register_long && bytes[6] == 0xc3) {
        uint32_t offset = 0; std::memcpy(&offset, bytes + 2, 4);
        return offset < 4096 && native_history_copy(object + offset, value);
    }
    if (bytes[0] == 0xb0 && bytes[2] == 0xc3) { value = bytes[1]; return true; }
    if (bytes[0] == 0x32 && bytes[1] == 0xc0 && bytes[2] == 0xc3) {
        value = 0; return true;
    }
    // All concrete item getter contracts were inventoried in the native PE.
    // Material/quality/race/wear are word loads, subtype may follow an
    // itemdef pointer and read its ID. No virtual game function is executed.
    if (bytes[0] == 0x0f && (bytes[1] == 0xb7 || bytes[1] == 0xbf) &&
            bytes[2] == register_long && bytes[7] == 0xc3) {
        uint32_t offset = 0; uint16_t scalar = 0;
        std::memcpy(&offset, bytes + 3, 4);
        if (offset >= 4096 || !native_history_copy(object + offset, scalar)) return false;
        value = bytes[1] == 0xbf ? static_cast<int16_t>(scalar) : scalar;
        return true;
    }
    if (bytes[0] == 0x48 && bytes[1] == 0x8b && bytes[2] == register_long &&
            bytes[7] == 0x0f && bytes[8] == 0xb7 && bytes[9] == 0x40 && bytes[11] == 0xc3) {
        uint32_t offset = 0; uintptr_t raw = 0; uint16_t scalar = 0;
        std::memcpy(&offset, bytes + 3, 4);
        if (offset >= 4096 || !native_history_copy(object + offset, raw) || !raw ||
            !native_history_copy(raw + bytes[10], scalar)) return false;
        value = scalar; return true;
    }
    return false;
}


// Native producer defaults, shared by retained-page/chronicle recovery.
static bool native_history_empty_virtual(uintptr_t object, size_t coordinate) {
    const size_t slot = native_history_virtual_slot(object, coordinate);
    uintptr_t table = 0, code = 0;
    std::array<uint8_t, 5> bytes{};
    if (slot == SIZE_MAX || !native_history_copy(object, table) ||
        !native_history_copy(table + slot, code) ||
        !native_history_copy_bytes(code, bytes.data(), bytes.size())) return false;
    return bytes[0] == 0xc3 || (std::memcmp(bytes.data(), "\xf3\x0f\x1e\xfa", 4) == 0 && bytes[4] == 0xc3);
}

static bool native_history_typed_getter(uintptr_t object, size_t coordinate, int32_t &value) {
    const size_t slot = native_history_virtual_slot(object, coordinate);
    return slot != SIZE_MAX && native_history_page_getter(object, slot, value);
}

static bool initialize_native_history_context(std::vector<std::max_align_t> &destination) {
    // These reviewed constructor values belong to named source members. Copy
    // each value into its discovered target field, never the whole old object.
    std::array<uint64_t, 25> context;
    context.fill(UINT64_MAX);
    context[0] = 2;
    context[1] = context[2] = 0;
    context[8] = 0x1ffffffff;
    context[9] = 0xffffffffffff;
    context[10] = 0xffff00ffffffffff;
    context[11] = 0xffffffffffff0000;
    const auto size = native_history_abi::type_size(native_history_abi::semantic_id("history_event_context"), sizeof(context));
    if (!size || size > 65536) return false;
    if (const auto *type = native_history_abi::type(native_history_abi::semantic_id("history_event_context"));
            type && type->alignment > alignof(std::max_align_t)) return false;
    destination.assign((size + sizeof(std::max_align_t) - 1) / sizeof(std::max_align_t), {});
    auto *bytes = reinterpret_cast<unsigned char *>(destination.data());
    for (const auto &field : native_history_layout::f_history_event_context_fields) {
        if (field.legacy > sizeof(context) || field.size > sizeof(context) - field.legacy ||
                !field.native.contains(0, field.size, field.size)) return false;
        const size_t offset = field.native;
        if (offset > size || field.size > size - offset) return false;
        std::memcpy(bytes + offset, reinterpret_cast<const unsigned char *>(context.data()) + field.legacy, field.size);
    }
    return true;
}
