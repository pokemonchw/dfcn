// Independent Legends consumers. A missing constructor may retire its own
// source transaction; it cannot revoke the completed render or another tab.
profile.base = anchor;
profile.legends_render = native_pe_address(anchor, 0xd3e8d0);
profile.legends_render_entry = reinterpret_cast<unsigned char *>(profile.legends_render);
profile.legends_render_prefix = {0x48,0x89,0x5c,0x24,0x10};
if (!profile.legends_render || !native_pe_bytes(0xd3e8d0, profile.legends_render_prefix)) return false;

// These are the only members read to freeze the actual selected tab. They
// replace d401c7's historical screen/page offsets and mode immediates.
struct NamedField { native_history_abi::FieldOffset offset; size_t width; };
const NamedField page_fields[] = {
    {{0x428, "viewscreen_legendsst", "page"}, 24},
    {{0x440, "viewscreen_legendsst", "active_page_index"}, 4},
    {{0x00, "legend_pagest", "header"}, 32},
    {{0x20, "legend_pagest", "mode"}, 4},
    {{0x24, "legend_pagest", "index"}, 4},
    {{0x28, "legend_pagest", "text_box"}, 1}
};
for (const auto &field : page_fields) {
    if (!field.offset.contains(0, field.width, field.width)) return false;
    (void)field.offset.runtime();
}
if (!native_chronicle_storage_ready()) return false;

profile.append = reinterpret_cast<NativeHistoryAppendFn>(native_pe_address(anchor, 0xd51eb0));
profile.layout = reinterpret_cast<NativeHistoryLayoutFn>(native_pe_address(anchor, 0xd51c80));
profile.draw = reinterpret_cast<NativeHistoryDrawFn>(native_pe_address(anchor, 0xad9960));
try { profile.sentence_slot = native_history_abi::history_method("getSentence", 0xd0).slot; }
catch (...) { profile.sentence_slot = 0; }

struct Signature { uintptr_t rva; std::vector<unsigned char> bytes; };
const auto signatures_ready = [&](const auto &signatures) {
    for (const auto &signature : signatures)
        if (!native_pe_match(anchor, signature.rva, signature.bytes.data(), signature.bytes.size())) return false;
    return true;
};
// Keep parser/allocation/control-word behavior separate from the named
// storage layout. A valid XML member alone does not prove native parsing.
const Signature parser_signatures[] = {
    {0xd51ee8, {0x48,0x83,0x7a,0x10,0x00,0x75,0x76,0xb9,0x38,0x00,0x00,0x00}},
    {0xd51f14, {0x48,0xc7,0x40,0x24,0xff,0xff,0xff,0xff,
        0x66,0xc7,0x40,0x20,0xff,0xff,0xc6,0x40,0x22,0xff,
        0xc7,0x40,0x2c,0xff,0xff,0xff,0xff}},
    {0xd54232, {0xb9,0x38,0x00,0x00,0x00,0xe8,0x54,0x54,0x7e,0x00,
        0x48,0x89,0x44,0x24,0x38,0x48,0x8b,0xc8,0xe8,0x77,0x78,0xa3,0xff,
        0x48,0x89,0x44,0x24,0x38,0x83,0x48,0x30,0x02,
        0x48,0x8d,0x54,0x24,0x38,0x49,0x8b,0xcc,0xe8,0x21,0x57,0x36,0xff}}
};
const Signature layout_signatures[] = {
    {0xd51c80, {0x48,0x89,0x5c,0x24,0x20,0x57,0x8b,0xda,0x48,0x8b,0xf9,
        0x39,0x51,0x30,0x0f,0x84,0x10,0x02,0x00,0x00}}
};
const auto add_group = [&](std::vector<NativeCall> calls, const char *label,
        uint32_t mode = 0, bool source = false, bool requires_source = false) {
    if (native_reference_calls(calls, 0))
        profile.groups.push_back({std::move(calls), mode, source, requires_source, label});
    else log_line("WARN", std::string(label) + ": complete call contract unavailable; native source retained");
};
if (profile.layout && signatures_ready(layout_signatures)) {
    // Width is the actual native argument. d43409's old RBP locals and
    // legend_pagest offsets are not read by either callback.
    add_group({NativeCall{0xd43418, 0xd51c80, reinterpret_cast<const void *>(&capture_native_history_layout)}},
        "Native Legends detail layout");
    add_group({NativeCall{0xd44b07, 0xd51c80, reinterpret_cast<const void *>(&capture_native_history_layout)}},
        "Native Legends alternate layout");
}
if (profile.draw)
    add_group({NativeCall{0xd435e4, 0xad9960, reinterpret_cast<const void *>(&capture_native_history_draw)}},
        "Native Legends word draw");

const bool parser_ready = profile.append && signatures_ready(parser_signatures);
const auto describe = native_pe_address(anchor, 0xb8eeb0);
const auto links = native_pe_address(anchor, 0xd4ecb0);
const auto transfer = native_pe_address(anchor, 0x6fa10);
if (parser_ready && describe && links && transfer && profile.sentence_slot &&
        native_history_event_identity_base() == anchor &&
        native_history_formatter_method_ready("getSentence")) {
    // b90078 and b923b7 used historical local-stack displacements. The
    // actual final counted append now binds the formatter's real object,
    // data pointer and complete length to describe's fourth argument.
    add_group({
        NativeCall{0xb90072, 0, native_history_formatter_callback("getSentence",
            &capture_native_history_legends_sentence, &capture_native_history_legends_sentence_context),
            {}, {0xff,0x90,0xd0,0x00,0x00,0x00}},
        NativeCall{0xb923da, 0x6fa10, reinterpret_cast<const void *>(&capture_native_history_local_transfer)}
    }, "Native Legends describe source transfer", 0, true);

    // Each row owns producer, parse and link completion as one transaction.
    // The callback reads the actual history_event_context by member name;
    // no native caller ID-vector or stack-local offset is reconstructed.
    add_group({
        NativeCall{0xd4bec4,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4bed4,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4bee0,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends historical figure", 1, false, true);
    add_group({
        NativeCall{0xd4c870,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4c87d,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4c889,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends site", 2, false, true);
    add_group({
        NativeCall{0xd4ce94,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4cea1,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4cead,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends artifact", 3, false, true);
    add_group({
        NativeCall{0xd4d4b4,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4d4c1,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4d4cd,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends book", 4, false, true);
    add_group({
        NativeCall{0xd4d8bb,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4d8c8,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4d8d4,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends region", 5, false, true);
    add_group({
        NativeCall{0xd4dd45,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4dd52,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4dd5e,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends underground region", 12, false, true);
    add_group({
        NativeCall{0xd4e173,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4e180,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4e18c,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends entity", 6, false, true);
    add_group({
        NativeCall{0xd4e750,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4e75d,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4e769,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends building", 8, false, true);
    add_group({
        NativeCall{0xd4ea7e,0xb8eeb0,reinterpret_cast<const void *>(&capture_native_history_describe)},
        NativeCall{0xd4ea8b,0xd51eb0,reinterpret_cast<const void *>(&capture_native_history_legends_append)},
        NativeCall{0xd4ea97,0xd4ecb0,reinterpret_cast<const void *>(&capture_native_history_legends_links)}
    }, "Native Legends population", 13, false, true);
}

// Retained-tab regeneration needs its own native scratch/context lifetime.
// These requirements never gate a live complete describe/append/links row.
const Signature recovery_signatures[] = {
    {0x72080, {0xba,0xff,0xff,0xff,0xff,0x48,0xc7,0x41,0x18,0xff,0xff,0xff,0xff,
        0x33,0xc0,0x48,0xc7,0x41,0x20,0xff,0xff,0xff,0xff,0x89,0x01,
        0x48,0x89,0x41,0x08,0x48,0x89,0x41,0x10}},
    {0x6f850, {0x40,0x53,0x48,0x83,0xec,0x20,0x48,0x8b,0x51,0x18,0x48,0x8b,0xd9,
        0x48,0x83,0xfa,0x0f,0x76,0x2c,0x48,0x8b,0x09}},
    {0xe37d0, {0x40,0x56,0x48,0x83,0xec,0x20,0x48,0x89,0x5c,0x24,0x30,0x48,0x8b,0xf1,
        0x48,0x8b,0x19,0x48,0x89,0x7c,0x24,0x40,0x48,0x8b,0x79,0x08}},
    {0xe3862, {0x33,0xc0,0xc7,0x46,0x30,0xff,0xff,0xff,0xff,0x89,0x46,0x34,
        0x48,0x89,0x46,0x38,0x48,0x83,0xc4,0x20,0x5e,0xc3}},
    {0x66b70, {0x40,0x53,0x48,0x83,0xec,0x20,0x48,0x8b,0xd9,0x48,0x8b,0x09,
        0x48,0x85,0xc9,0x74,0x3e,0x48,0x8b,0x53,0x10,0x48,0x2b,0xd1}}
};
// Scratch calls retain the same parser/destructor ABI as a complete installed
// native triplet. Per-mode permission comes from named focus fields; the
// installer additionally requires the actual sentence/transfer pair and at
// least one complete describe/append/links triplet to remain installed.
try {
    profile.recovery_ready = parser_ready && describe && links && transfer &&
        profile.sentence_slot && native_history_event_identity_base() == anchor &&
        native_history_formatter_method_ready("getSentence") &&
        native_history_global(0x24f9cb8) && signatures_ready(recovery_signatures);
    if (profile.recovery_ready)
        profile.recovery_modes = native_history_legends_named_recovery_modes();
} catch (...) {
    profile.recovery_ready = false;
    profile.recovery_modes = 0;
}
// Collection/war is a different source family. Its unproved marker/date and
// injected RBP-0x60 argument must not participate in any transaction above.
