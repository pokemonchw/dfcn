// These are borrowed views of game-owned markup. Their C++ field order is
// never the target object's ABI; every read uses its admitted named member.
template<typename T>
static bool native_history_markup_read(uintptr_t object,
        native_history_abi::FieldOffset field, T &value) {
    try {
        return native_history_copy(field.address(object, 0, sizeof(T), sizeof(T)), value);
    } catch (...) { return false; }
}

static bool native_history_markup_box(uintptr_t object, NativeHistoryRichBox &value) {
    NativeHistoryRichBox next{};
    if (!native_history_markup_read(object, {0x00, "markup_text_boxst", "word"}, next.words) ||
            !native_history_markup_read(object, {0x18, "markup_text_boxst", "link"}, next.links) ||
            !native_history_markup_read(object, {0x30, "markup_text_boxst", "current_width"}, next.current_width) ||
            !native_history_markup_read(object, {0x34, "markup_text_boxst", "max_y"}, next.max_y) ||
            !next.words.valid(kNativeHistoryCaptureTokens) || !next.links.valid(kNativeHistoryCaptureTokens)) return false;
    value = next;
    return true;
}

static uintptr_t native_history_markup_text(uintptr_t word) noexcept {
    try {
        static constexpr native_history_abi::FieldOffset text{0, "markup_text_wordst", "str"};
        return text.address(word, 0, sizeof(NativeString), sizeof(NativeString));
    } catch (...) { return 0; }
}

static uintptr_t native_history_markup_box_from_words(uintptr_t words) noexcept {
    try {
        static constexpr native_history_abi::FieldOffset field{0, "markup_text_boxst", "word"};
        if (!field.contains(0, 24, 24)) return 0;
        const auto offset = field.runtime();
        return words > offset ? words - offset : 0;
    } catch (...) { return 0; }
}

struct NativeHistoryMarkupWord {
    uintptr_t text = 0;
    std::string source;
    uint8_t red = 0, green = 0, blue = 0;
    int32_t link_index = -1, x = 0, y = 0;
    uint32_t flags = 0;
};

static bool native_history_markup_word(uintptr_t object, NativeHistoryMarkupWord &value) {
    value.text = native_history_markup_text(object);
    return value.text && native_history_copy_string(value.text, value.source) && value.source.size() <= 262144 &&
        native_history_markup_read(object, {0x20, "markup_text_wordst", "red"}, value.red) &&
        native_history_markup_read(object, {0x21, "markup_text_wordst", "green"}, value.green) &&
        native_history_markup_read(object, {0x22, "markup_text_wordst", "blue"}, value.blue) &&
        native_history_markup_read(object, {0x24, "markup_text_wordst", "link_index"}, value.link_index) &&
        native_history_markup_read(object, {0x28, "markup_text_wordst", "px"}, value.x) &&
        native_history_markup_read(object, {0x2c, "markup_text_wordst", "py"}, value.y) &&
        native_history_markup_read(object, {0x30, "markup_text_wordst", "flags"}, value.flags);
}

static bool native_history_markup_link(uintptr_t object, NativeHistoryRichLink &value) {
    return native_history_markup_read(object, {0, "markup_text_linkst", "type"}, value.type) &&
        native_history_markup_read(object, {4, "markup_text_linkst", "id"}, value.id) &&
        native_history_markup_read(object, {8, "markup_text_linkst", "subid"}, value.subid);
}

template<typename T>
static uintptr_t native_history_markup_element(const NativeBorrowedVector<T *> &values, size_t index) {
    uintptr_t result = 0;
    if (!values.valid(kNativeHistoryCaptureTokens) || index >= values.size() ||
            !native_history_copy(reinterpret_cast<uintptr_t>(values.begin) + index * sizeof(uintptr_t), result)) return 0;
    return result;
}

// Only the optional retained-page reconstruction constructs a native box.
// Its existing constructor is valid for this proved header, independently
// of whether game-owned boxes can be read through a changed layout.
static bool native_history_markup_scratch_ready() noexcept {
    try {
        struct Field { native_history_abi::FieldOffset offset; size_t width; };
        const Field fields[]{
            {{0x00, "markup_text_boxst", "word"}, 24}, {{0x18, "markup_text_boxst", "link"}, 24},
            {{0x30, "markup_text_boxst", "current_width"}, 4}, {{0x34, "markup_text_boxst", "max_y"}, 4},
            {{0x38, "markup_text_boxst", "environment"}, 8}};
        for (const auto &field : fields) {
            if (field.offset.runtime() != field.offset.reference ||
                    !field.offset.contains(0, field.width, field.width)) return false;
            const auto *binding = native_history_abi::field(field.offset.type, field.offset.member);
            if (binding && binding->size != field.width) return false;
        }
        return native_history_abi::type_size(native_history_abi::generated_id("markup_text_boxst"),
            sizeof(NativeHistoryRichBox)) == sizeof(NativeHistoryRichBox);
    } catch (...) { return false; }
}
