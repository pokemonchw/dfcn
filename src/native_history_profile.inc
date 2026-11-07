#ifdef _WIN32
static bool native_chronicle_storage_ready();
#endif

// DF 53.16 native call identity. Capture, ownership and teardown are shared.
static bool resolve_native_history_profile(NativeHistoryProfile &profile) {
    const uintptr_t anchor = native_history_profile_base();
#ifdef _WIN32
    profile.grouped = native_pe_edition() == 3;
    if (!anchor || (!profile.grouped && !native_history_event_identity_base())) {
#else
    if (!anchor || !native_history_event_identity_base()) {
#endif
        log_line("ERROR", "Native history image/event identity validation failed");
        return false;
    }
#ifdef _WIN32
    if (profile.grouped) {
#include "native_history_groups_pe.inc"
        return true;
    }
#include "native_history_profile_known_pe.inc"
#else
#include "native_history_profile_elf.inc"
#endif
    // The ELF binding retains its schema-defined vtable slot. An entry
    // binding validates native code without claiming a mutable vtable slot.
    if (!profile.legends_render_entry) {
        const auto *legends = native_history_object_layout("viewscreen_legendsst");
        uintptr_t render = 0;
        if (!legends || !legends->table || legends->slot_count <= 3 || !profile.legends_render)
            return false;
        const uintptr_t render_table = native_reference_address(anchor, legends->table);
        if (!render_table) return false;
        const uintptr_t render_slot = render_table + legends->slots[3];
        if (!native_history_copy(render_slot, render) || render != profile.legends_render) {
            log_line("ERROR", "Native Legends render slot identity mismatch");
            return false;
        }
        profile.legends_render_slot = reinterpret_cast<void **>(render_slot);
    }
    // Confidence is a shared native producer for all describe introductions.
    // Resolve direct call bindings within the validated function range; PE
    // can merge branch tails while ELF emits distinct calls. There is no
    // separate selection of page behavior for either binary format.
    const uintptr_t describe = reinterpret_cast<uintptr_t>(g_real_native_history_describe);
    const uintptr_t end = native_history_page_address(NativeHistoryPageSymbol::DescribeEnd);
    const uintptr_t confidence = native_history_page_address(NativeHistoryPageSymbol::Confidence);
    if (!describe || end <= describe || end - describe > 65536 || !confidence) return false;
    std::vector<uint8_t> code(end - describe);
    if (!native_history_copy_bytes(describe, code.data(), code.size())) return false;
    size_t confidence_calls = 0;
    for (size_t at = 0; at + 5 <= code.size(); ++at) {
        if (code[at] != 0xe8) continue;
        int32_t relative = 0;
        std::memcpy(&relative, code.data() + at + 1, sizeof(relative));
        const uintptr_t call = describe + at;
        if (call + 5 + relative != confidence) continue;
        profile.calls.push_back({call - profile.base, confidence - profile.base,
            reinterpret_cast<const void *>(&capture_native_history_biography_confidence)});
        ++confidence_calls;
        at += 4;
    }
    // Bind item::add_kill_paragraph inside the same validated describe
    // producer. The schema supplies its vtable displacement for each ABI;
    // there is only one capture/translation/layout implementation.
    const size_t kill_slot = native_history_item_kill_slot();
    if (kill_slot == SIZE_MAX || kill_slot > UINT32_MAX) return false;
    std::vector<uint8_t> kill_call{0xff, 0x90, 0, 0, 0, 0};
    const uint32_t displacement = static_cast<uint32_t>(kill_slot);
    std::memcpy(kill_call.data() + 2, &displacement, sizeof(displacement));
    size_t item_kill_calls = 0;
    for (size_t at = 0; at + kill_call.size() <= code.size(); ++at) {
        if (std::memcmp(code.data() + at, kill_call.data(), kill_call.size()) != 0) continue;
        profile.calls.push_back({describe + at - profile.base, 0,
            reinterpret_cast<const void *>(&capture_native_history_item_kill_summary), {}, kill_call});
        ++item_kill_calls;
        at += kill_call.size() - 1;
    }
    if (item_kill_calls != 1)
        log_line("ERROR", "Native item kill paragraph call binding is not unique");
    return confidence_calls >= 2 && item_kill_calls == 1;
}
