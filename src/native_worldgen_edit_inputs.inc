// Included after the native string/vector ABI and guarded history readers.
// Native editors submit temporary string copies, sometimes with a cursor
// appended. Their addresses do not identify the retained input. Keep the
// actual screen's editor state only for this invocation of its draw method.
class NativeWorldgenEditScope {
public:
    inline static thread_local const NativeWorldgenEditScope *current = nullptr;
    struct Input {
        bool active = false;
        uintptr_t source = 0;
        std::string text;
    };
    std::array<Input, 3> inputs{};
    bool uncertain = false;
    uintptr_t owner = 0;

    explicit NativeWorldgenEditScope(uintptr_t owner) : owner(owner), previous_(current) {
        current = this;
        try {
            uint8_t simple = 0, detailed = 0;
            const bool simple_known = native_history_copy(native_history_object_member(owner,
                "viewscreen_new_regionst", "doing_simple_params", sizeof(simple)), simple);
            const bool detailed_known = native_history_copy(native_history_object_member(owner,
                "viewscreen_new_regionst", "doing_params", sizeof(detailed)), detailed);
            // These three editors belong to the detailed parameter form.
            // Missing old CALL sites cannot turn its static basic form into
            // an unknown input, or stop the viewscreen renderer from loading.
            if ((simple_known && simple == 1) || (detailed_known && detailed == 0)) return;
            const auto editing = [&](const char *field, size_t index) {
                uint8_t active = 0;
                if (!native_history_copy(native_history_object_member(owner,
                        "viewscreen_new_regionst", field, sizeof(active)), active) || active > 1) {
                    uncertain = true;
                    return false;
                }
                inputs[index].active = active != 0;
                return active != 0;
            };
            if (editing("entering_param_name", 0)) {
                NativeBorrowedVector<uintptr_t> presets{};
                int32_t selected = -1;
                if (native_history_read_vector(native_history_object_member(owner,
                            "viewscreen_new_regionst", "worldgen_presets", sizeof(presets)), presets) &&
                        native_history_copy(native_history_object_member(owner,
                            "viewscreen_new_regionst", "sel_param", sizeof(selected)), selected) && selected >= 0 &&
                        static_cast<size_t>(selected) < presets.size()) {
                    const auto preset = native_history_vector_at(presets, static_cast<size_t>(selected));
                    static constexpr native_history_abi::FieldOffset title{0, "worldgen_parms", "title"};
                    inputs[0].source = title.address(preset, 0, sizeof(NativeString), sizeof(NativeString));
                }
            }
            if (editing("editing_seed", 1))
                inputs[1].source = native_history_object_member(owner,
                    "viewscreen_new_regionst", "enter_seed", sizeof(NativeString));
            if (editing("entering_value_str", 2))
                inputs[2].source = native_history_object_member(owner,
                    "viewscreen_new_regionst", "value_str", sizeof(NativeString));
            for (auto &input : inputs) {
                if (!input.active) continue;
                if (!input.source || !native_history_copy_string(input.source, input.text)) uncertain = true;
                // An empty input's blinking cursor has no nonempty source
                // prefix. Preserve this draw conservatively until its real
                // input bytes identify the submitted text again.
                else if (input.text.empty()) uncertain = true;
            }
        } catch (...) { uncertain = true; }
    }
    ~NativeWorldgenEditScope() { current = previous_; }
    NativeWorldgenEditScope(const NativeWorldgenEditScope &) = delete;
    NativeWorldgenEditScope &operator=(const NativeWorldgenEditScope &) = delete;

private:
    const NativeWorldgenEditScope *previous_;
};

static bool native_worldgen_caption_editable(uintptr_t caller, const NativeString *source) noexcept {
    const auto *editing = NativeWorldgenEditScope::current;
    if (!editing) return false;
    // Independently proved call identities remain positive evidence. Their
    // absence says nothing about whether an actual field is user input.
    if (caller && ((caller == g_native_worldgen_edit_returns[0] && editing->inputs[0].active) ||
            caller == g_native_worldgen_edit_returns[1] || caller == g_native_worldgen_edit_returns[2]))
        return true;
    if (editing->uncertain) return true;
    if (std::none_of(editing->inputs.begin(), editing->inputs.end(),
            [](const auto &input) { return input.active; })) return false;
    for (const auto &input : editing->inputs)
        if (input.active && input.source == reinterpret_cast<uintptr_t>(source)) return true;
    try {
        std::string_view submitted;
        if (!native_string_view(source, &submitted, 4096)) return true;
        for (const auto &input : editing->inputs) {
            if (!input.active) continue;
            // Equality covers the original copy; a retained prefix also
            // protects native cursor suffixes. This can only prevent a
            // translation, never authorize one from a text resemblance.
            if (submitted.starts_with(input.text)) return true;
        }
    } catch (...) { return true; }
    return false;
}
