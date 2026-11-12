// One bounded field resolver for all native snapshots. Coordinates in the
// reviewed recipes name schema fields; only generated ABI bindings turn them
// into addresses. Never adjust a whole event by a guessed padding delta.
#include "native_history_layouts.inc"

static uintptr_t native_history_bound_field(uintptr_t object,
        const native_history_layout::Field *fields, size_t count,
        size_t coordinate, size_t width = 1) {
    if (!object || !width) return 0;
    for (size_t i = 0; i < count; ++i) {
        const auto &field = fields[i];
        if (coordinate < field.legacy || coordinate - field.legacy >= field.size) continue;
        const size_t delta = coordinate - field.legacy;
        if (width > field.size - delta || field.native > UINTPTR_MAX - object ||
                delta > UINTPTR_MAX - object - field.native) return 0;
        const uintptr_t address = object + field.native + delta;
        return width <= UINTPTR_MAX - address ? address : 0;
    }
    return 0;
}

static uintptr_t native_history_event_field(const void *event, int32_t type,
        size_t coordinate, size_t width = 1) {
    if (type < 0 || static_cast<size_t>(type) >= std::size(native_history_layout::events)) return 0;
    const auto &layout = native_history_layout::events[type];
    return native_history_bound_field(reinterpret_cast<uintptr_t>(event),
        layout.fields, layout.count, coordinate, width);
}

static const native_history_layout::Object *native_history_object_layout(std::string_view name) {
    const auto &objects = native_history_layout::objects;
    const auto found = std::lower_bound(std::begin(objects), std::end(objects), name,
        [](const auto &object, std::string_view key) { return std::string_view(object.name) < key; });
    return found != std::end(objects) && name == found->name ? found : nullptr;
}

static const native_history_layout::Object *native_history_dynamic_layout(uintptr_t object) {
    const uintptr_t base = native_history_profile_base();
    uintptr_t table = 0;
    if (!base || !native_history_copy(object, table) || table < base) return nullptr;
    // The selected image/profile is immutable for this core's lifetime. Build
    // this only after a valid base exists, using the actual resolved vtables.
    // Multiple bindings may share one table: retain the first object, exactly
    // as the original ordered lookup did.
    struct TableIndex {
        uintptr_t base = 0;
        std::unordered_map<uintptr_t, const native_history_layout::Object *> objects;
    };
    static const TableIndex index = [base] {
        TableIndex result;
        result.base = base;
        result.objects.reserve(std::size(native_history_layout::objects));
        for (const auto &layout : native_history_layout::objects) {
            if (!layout.table) continue;
            const uintptr_t address = native_reference_address(base, layout.table);
            if (address && address >= base) result.objects.emplace(address, &layout);
        }
        return result;
    }();
    if (index.base == base) {
        const auto found = index.objects.find(table);
        return found != index.objects.end() ? found->second : nullptr;
    }
    // An unexpected image change must not reuse addresses from another base.
    for (const auto &layout : native_history_layout::objects)
        if (layout.table && table == native_reference_address(base, layout.table)) return &layout;
    return nullptr;
}

static uintptr_t native_history_object_field(uintptr_t object, std::string_view type,
        size_t coordinate, size_t width = 1) {
    const auto *layout = type.empty() ? native_history_dynamic_layout(object) :
        native_history_object_layout(type);
    return layout ? native_history_bound_field(object, layout->fields, layout->count, coordinate, width) : 0;
}

static bool native_history_object_is(uintptr_t object, std::string_view type) {
    const auto *layout = native_history_dynamic_layout(object);
    return layout && type == layout->name;
}

// Newly adapted interfaces select fields by their structural source name.
// This avoids treating a PE field offset as an ELF layout declaration.
static uintptr_t native_history_object_member(uintptr_t object, std::string_view type,
        std::string_view member, size_t width = 1) {
    const auto *layout = native_history_object_layout(type);
    if (!object || !layout) return 0;
    for (size_t i = 0; i < layout->count; ++i) {
        const auto &field = layout->fields[i];
        if (field.name && member == field.name && width <= field.size &&
                field.native <= UINTPTR_MAX - object) return object + field.native;
    }
    return 0;
}

static size_t native_history_filter_entry_size() {
#ifdef _WIN32
    return 0x50;
#else
    return sizeof(native_history_layout::f_filter_entry);
#endif
}

static uintptr_t native_history_named_global(std::string_view type, std::string_view member, size_t width) {
    const uintptr_t rva = type == "plotinfost" ? native_history_layout::plotinfo_rva :
        type == "d_init" ? native_history_layout::d_init_rva :
        type == "gamest" ? native_history_layout::game_rva : 0;
    const uintptr_t base = native_history_profile_base();
    return base && rva ? native_history_object_member(native_reference_address(base, rva), type, member, width) : 0;
}

#ifndef _WIN32
// Addresses here are reviewed against the installed 53.17 ELF. They are
// current-image coordinates, never inputs to the retained 53.16 resolver.
static uintptr_t native_elf_5317_address(uintptr_t address) {
    const auto &image = elf_runtime::state().executable;
    if (image.build != "f9d13d46a8b7e2e8b70c380127decf53c43581bd" ||
            address > UINTPTR_MAX - image.bias) return 0;
    const uintptr_t absolute = image.bias + address;
    return std::any_of(image.loads.begin(), image.loads.end(), [&](const auto &range) {
        return absolute >= range.first && absolute < range.second;
    }) ? absolute : 0;
}

static const NativeCharacterLayout &native_character_layout_data() {
    static const auto offset = [](std::string_view member, size_t width = 24) {
        const auto address = native_history_object_member(1, "view_sheets_interfacest", member, width);
        return address ? address - 1 : SIZE_MAX;
    };
    static const NativeCharacterLayout result{offset("unit_health_active_tab", 4),
        offset("unit_health_raw_str"), offset("unit_health_box"),
        offset("personality_raw_str"), offset("personality_box"), 4,
        {{{offset("raw_thought_str"), offset("thought_box")},
          {offset("thoughts_raw_memory_str"), offset("thoughts_memory_box")}}}};
    return result;
}

static uintptr_t native_character_sheet_owner() {
    return native_history_object_member(
        native_reference_address(native_history_profile_base(), native_history_layout::game_rva),
        "gamest", "main_interface.view_sheets.open", 1);
}
#endif

static size_t native_history_virtual_slot(uintptr_t object, size_t coordinate) {
    const auto *layout = native_history_dynamic_layout(object);
    if (!layout || coordinate % sizeof(uintptr_t) || coordinate / sizeof(uintptr_t) >= layout->slot_count)
        return SIZE_MAX;
    return layout->slots[coordinate / sizeof(uintptr_t)];
}

static uintptr_t native_history_global(uintptr_t coordinate) {
    const uintptr_t base = native_history_profile_base();
    if (!base) return 0;
    if (coordinate == 0x189c298) return native_reference_address(base, native_history_layout::gamemode_rva);
    if (coordinate == 0x239367c)
        return native_history_object_field(native_reference_address(base, native_history_layout::plotinfo_rva),
            "plotinfost", 0x244c, 2);
    if (coordinate < 0x23d14f0) return 0;
    return native_history_bound_field(native_reference_address(base, native_history_layout::world_rva),
        native_history_layout::world_fields, std::size(native_history_layout::world_fields),
        coordinate - 0x23d14f0);
}
