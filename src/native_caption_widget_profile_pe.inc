// Each widget keeps only the object and method contracts its callback reads.
// Page-specific caption callers belong to their separate profile.
static void **native_caption_widget_slot(uintptr_t base, uintptr_t reference,
        std::string_view method, uint32_t fallback, std::string_view signature,
        uint32_t arguments) {
    if (!base || !native_pe_supported()) return nullptr;
    const size_t index = native_object_virtual_slot(
        "abstract_interfacest", method, fallback, signature, arguments);
    const uintptr_t table = native_pe_address(base, reference);
    return table && index != SIZE_MAX ? reinterpret_cast<void **>(table) + index : nullptr;
}

static bool native_caption_widget_call_return(uintptr_t base, NativeCall call,
        uintptr_t reference_return) {
    if (!base || !call.va || !call.target) return false;
    const uintptr_t reference = call.va;
    const int64_t displacement = int64_t(call.target) - int64_t(reference + 5);
    if (displacement < INT32_MIN || displacement > INT32_MAX) return false;
    std::vector<unsigned char> bytes(5, 0);
    bytes[0] = 0xe8;
    const auto relative = static_cast<int32_t>(displacement);
    std::memcpy(bytes.data() + 1, &relative, sizeof(relative));
    if (!native_pe_bytes(reference, bytes)) return false;
    const uintptr_t site = native_pe_address(base, reference);
    const uintptr_t target = native_pe_address(base, call.target);
    if (!site || !target || native_pe_address(base, reference_return) != site + 5 ||
            std::memcmp(reinterpret_cast<const void *>(site), bytes.data(), bytes.size()) != 0 ||
            bytes[0] != 0xe8) return false;
    int32_t actual = 0;
    std::memcpy(&actual, bytes.data() + 1, sizeof(actual));
    return int64_t(site) + 5 + actual == int64_t(target);
}

static bool resolve_native_truncated_widget_binding(uintptr_t base,
        NativeCaptionWidgetBinding &binding) {
    NativeCaptionWidgetBinding candidate{
        native_caption_widget_slot(base, 0x162dc10, "render", 3, "void(uint32_t)", 1),
        {0x10, "widget", "rect"}, {0x150, "widget_text", "str"},
        {0x180, "widget_text_truncated", "original_str"}, {0x175, "widget_text", "just"}};
    if (!candidate.render_slot || !candidate.rect.contains(0, 16, 16) ||
            !candidate.text.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !candidate.original_text.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !candidate.justification.contains(0, 1, 1)) return false;
    binding = candidate;
    return true;
}

static bool resolve_native_textbox_widget_binding(uintptr_t base,
        NativeTextboxWidgetBinding &binding) {
    NativeTextboxWidgetBinding candidate{
        native_pe_address(base, 0x1710d18),
        native_caption_widget_slot(base, 0x1710d18, "render", 3, "void(uint32_t)", 1),
        reinterpret_cast<void *>(native_pe_address(base, 0x14191e0)),
        native_pe_address(base, 0x1419581)};
    const NativeCall draw{0x141957c, 0xad9960, nullptr};
    if (!candidate.table || !candidate.render_slot || !candidate.expected_render ||
            !candidate.text_return_address || !native_caption_widget_call_return(base, draw, 0x1419581) ||
            !native_history_layout::textbox_parent_offset.contains(0, sizeof(uintptr_t), sizeof(uintptr_t)) ||
            !native_history_layout::textbox_rect_offset.contains(0, 16, 16) ||
            !native_history_layout::textbox_visibility_offset.contains(0, 1, 1) ||
            !native_history_layout::textbox_string_offset.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !native_history_layout::textbox_flags_offset.contains(0, 4, 4) ||
            !native_history_layout::textbox_maxlen_offset.contains(0, 4, 4) ||
            !native_history_layout::textbox_type_offset.contains(0, 4, 4)) return false;
    binding = candidate;
    return true;
}

static bool resolve_native_multiline_widget_binding(uintptr_t base,
        NativeMultilineWidgetBinding &binding) {
    NativeMultilineWidgetBinding candidate{
        native_caption_widget_slot(base, 0x15f6ee8, "render", 3, "void(uint32_t)", 1),
        {0x10, "widget", "rect"}, {0x150, "widget_text", "str"}, {0xc4, "widget", "min_w"},
        native_pe_address(base, 0x1419988),
        reinterpret_cast<void *>(native_pe_address(base, 0x14198c0))};
    const NativeCall draw{0x1419983, 0xad9870, nullptr};
    if (!candidate.render_slot || !candidate.expected_render || !candidate.row_return_address ||
            !native_caption_widget_call_return(base, draw, 0x1419988) ||
            !candidate.rect.contains(0, 16, 16) ||
            !candidate.text.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !candidate.minimum_width.contains(0, 4, 4)) return false;
    binding = candidate;
    return true;
}

static bool resolve_native_multiline_arrange_binding(uintptr_t base,
        NativeMultilineWidgetBinding &binding) {
    const auto arrange_slot = native_caption_widget_slot(
        base, 0x15f6ee8, "arrange", 4, "void()", 0);
    const auto expected = reinterpret_cast<void *>(native_pe_address(base, 0x1419860));
    const auto base_arrange = reinterpret_cast<NativeCaptionWidgetArrangeFn>(native_pe_address(base, 0x14101a0));
    const auto base_table = native_pe_address(base, 0x1785a80);
    const native_history_abi::FieldOffset minimum_height{0xc8, "widget", "min_h"};
    const unsigned char arrange_signature[]{0x40,0x53,0x48,0x83,0xec,0x20,0x48,0x8b,0xd9,
        0xe8,0x32,0x69,0xff,0xff};
    const unsigned char base_signature[]{0x40,0x53,0x48,0x83,0xec,0x50,0xf6,0x81,0xa0,0,0,0,0x08};
    if (!arrange_slot || !expected || !base_arrange || !base_table ||
            !minimum_height.contains(0, 4, 4) ||
            native_object_virtual_method(reinterpret_cast<void *const *>(base_table),
                "abstract_interfacest", "arrange", 4, "void()", 0) != reinterpret_cast<void *>(base_arrange) ||
            !native_pe_match(base, 0x1419860, arrange_signature, sizeof(arrange_signature)) ||
            !native_pe_match(base, 0x14101a0, base_signature, sizeof(base_signature))) return false;
    binding.arrange_slot = arrange_slot;
    binding.expected_arrange = expected;
    binding.base_arrange = base_arrange;
    binding.minimum_height = minimum_height;
    return true;
}
