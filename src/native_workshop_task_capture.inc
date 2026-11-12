// The building sheet supplies each queued job through one native addst.
// Its live sheet, building, job iterator and pane limits own this field;
// frame and action-button textures play no part in its identity or layout.
static std::optional<NativeWorkshopTaskCaption> capture_native_workshop_task_caption(
        uintptr_t caller, uintptr_t source) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !source || caller != native_pe_address(base, 0x186046) ||
            source < 0x3900 || source > UINTPTR_MAX - 0x7968)
        return std::nullopt;

    // Both supported PE editions retain the same stack layout here:
    // source=rsp+3900, sheet=rsp+b260, building=rsp+d0, job=rsp+2f20.
    // See the queued-job branch in building-link's two retained native
    // building-sheet-renderer-owner assemblies (Steam 185df9..186046;
    // Classic 185d89..185fd6). Address binding selects the edition.
    const uintptr_t frame = source - 0x3900;
    uintptr_t sheet = 0, building = 0, job = 0;
    int32_t left = -1, right = -1, top = -1, index = -1;
    if (!native_history_copy(frame + 0xb260, sheet) || !sheet ||
            sheet > UINTPTR_MAX - 0xc4 ||
            !native_history_copy(frame + 0xd0, building) || !building ||
            building > UINTPTR_MAX - 0x70 ||
            !native_history_copy(frame + 0x2f20, job) || !job ||
            !native_history_copy(frame + 0x88, left) ||
            !native_history_copy(frame + 0xb0, right) ||
            !native_history_copy(frame + 0x1f4, top) ||
            !native_history_copy(frame + 0xc68, index) ||
            left < 0 || left > 1000 || right < 0 || right > 1000 ||
            top < 0 || top > 997 ||
            right - left <= 25 || index < 0)
        return std::nullopt;

    // Resolve the selected building by its native ID, then require this
    // exact job at the iterator's current index in building.jobs (+58).
    // The renderer selects the building through sheet.active_id (+c);
    // viewing_bldid is a different sheet field and does not own this draw.
    uint8_t open = 0;
    int32_t selected_id = -1, building_id = -1, sub_tab = -1;
    uintptr_t current_building = 0;
    NativeBorrowedVector<uintptr_t> jobs;
    if (!native_history_copy(sheet, open) || open != 1 ||
            !native_history_copy(sheet + 0xc, selected_id) ||
            !native_history_copy(sheet + 0xc0, sub_tab) || sub_tab != 0 ||
            !native_history_copy(building + 0x50, building_id) || building_id < 0 ||
            selected_id != building_id ||
            !native_history_find_structure_id(native_pe_address(base, 0x23edf10),
                0x50, building_id, current_building) || current_building != building ||
            !native_history_read_vector(building + 0x58, jobs) || jobs.size() > 65536 ||
            static_cast<size_t>(index) >= jobs.size() ||
            native_history_vector_at(jobs, static_cast<size_t>(index)) != job)
        return std::nullopt;

    const uintptr_t formatter = native_pe_address(base, 0xd03170);
    if (!formatter) return std::nullopt;
    NativeHistoryCallbackScope callback;
    NativeHistoryPageString output;
    // Native draws x=left+2, y=top+1, and reserves seven three-cell
    // actions beginning at right-23. Obtain the complete job caption from
    // its original object formatter, before the draw's inline ellipsis.
    reinterpret_cast<void (*)(void *, NativeString *)>(formatter)(
        reinterpret_cast<void *>(job), &output.value);
    std::string_view complete;
    if (!native_string_view(&output.value, &complete, 65536) || complete.empty() ||
            complete.find_first_of("\r\n") != std::string_view::npos ||
            complete.find('\0') != std::string_view::npos)
        return std::nullopt;
    NativeWorkshopTaskCaption caption;
    caption.building = building;
    caption.job = job;
    caption.box = {left + 2, top, right - 23 - (left + 2), 3};
    caption.complete_source.assign(complete);
    return caption;
#else
    if (caller != native_elf_5317_address(0x13dd3a1) || !source || source > UINTPTR_MAX - 0x130)
        return std::nullopt;
    // The 53.17 building sheet passes its string at rbp-130. The sheet,
    // building and exact job iterator remain in this live renderer frame.
    const uintptr_t frame = source + 0x130;
    if (frame < 0x2a8) return std::nullopt;
    uintptr_t sheet = 0, building = 0, iterator = 0, job = 0;
    int32_t x = -1, top = -1, right = -1, id = -1, active = -1, sub_tab = -1;
    uint8_t open = 0;
    if (!native_history_copy(frame - 0x288, sheet) || sheet != native_character_sheet_owner() ||
            !native_history_copy(sheet, open) || open != 1 ||
            !native_history_copy(native_history_object_member(sheet, "view_sheets_interfacest", "active_sheet", 4), active) || active != 2 ||
            !native_history_copy(native_history_object_member(sheet, "view_sheets_interfacest", "active_sub_tab", 4), sub_tab) || sub_tab != 0 ||
            !native_history_copy(native_history_object_member(sheet, "view_sheets_interfacest", "active_id", 4), id) || id < 0 ||
            !native_history_copy(frame - 0x270, building) || !building ||
            !native_history_copy(frame - 0x290, iterator) || !iterator ||
            !native_history_copy(frame - 0x2a8, x) ||
            !native_history_copy(frame - 0x298, top) ||
            !native_history_copy(frame - 0x280, right) ||
            x < 0 || x > 1000 || top < 0 || top > 997 || right > 1000 || right - 23 <= x)
        return std::nullopt;
    uintptr_t actual = 0;
    NativeBorrowedVector<uintptr_t> jobs;
    if (!native_history_find_structure_id(native_history_global(0x23edf10), 0x50, id, actual) || actual != building ||
            !native_history_read_vector(native_history_object_member(building, "building", "jobs", 24), jobs) ||
            !jobs.valid(65536) || iterator < reinterpret_cast<uintptr_t>(jobs.begin) ||
            iterator >= reinterpret_cast<uintptr_t>(jobs.end) ||
            (iterator - reinterpret_cast<uintptr_t>(jobs.begin)) % sizeof(uintptr_t) ||
            !native_history_copy(iterator, job) || !job) return std::nullopt;
    NativeHistoryPageString output;
    NativeHistoryCallbackScope callback;
    reinterpret_cast<void (*)(void *, NativeString *)>(native_elf_5317_address(0x1cdd0c0))(
        reinterpret_cast<void *>(job), &output.value);
    std::string_view complete;
    if (!native_string_view(&output.value, &complete, 65536) || complete.empty() ||
            complete.find_first_of("\r\n") != std::string_view::npos) return std::nullopt;
    NativeWorkshopTaskCaption caption;
    caption.building = building;
    caption.job = job;
    caption.box = {x, top, right - 23 - x, 3};
    caption.complete_source.assign(complete);
    return caption;
#endif
}
