// Native-only object formatters fill isolated typed fields when a page's
// constructor ran before history::describe/collection. Output never supplies
// event identity, relations, dates, branches, or paragraph meaning.
struct NativeHistoryPageString {
    NativeString value = native_empty_string();
    ~NativeHistoryPageString() {
#ifdef _WIN32
        const auto destroy = reinterpret_cast<void (*)(void *)>(
            native_pe_address(native_history_profile_base(), 0x6f850));
        if (destroy) destroy(&value);
#endif
    }
};

static bool capture_native_history_subject_item_labels(NativeHistoryEventData &data) {
    const uintptr_t base = native_history_profile_base();
    if (!base || !g_real_native_history_artifact_item) return false;
    for (const auto &subject : data.subjects) {
        if (subject.kind != NativeHistoryObjectKind::Artifact || subject.native_type != 2) continue;
        const std::string key = "artifact_label." + std::to_string(subject.id);
        if (data.texts.contains(key)) continue;
        const uintptr_t artifact = native_history_find_subject(base, NativeHistoryObjectKind::Artifact, subject.id);
        uintptr_t item = 0;
        if (!artifact || !native_history_copy(artifact + 0x90, item) || !item) return false;
        NativeHistoryCallbackScope callback;
        NativeHistoryPageString output;
        // The discriminator and item pointer come from the artifact record.
        // Ask its original formatter only for that isolated object's label.
        g_real_native_history_artifact_item(reinterpret_cast<void *>(item), &output.value, false, 1);
        std::string_view value;
        if (!native_string_view(&output.value, &value, kNativeHistoryStringLimit) || value.empty()) return false;
        data.texts[key] = std::string(value);
    }
    return true;
}

static bool capture_native_history_page_event(int32_t id, NativeHistoryEventData &parent) {
    const uintptr_t base = native_history_profile_base();
    if (!base || id < 0 || parent.children.size() >= kNativeHistoryTreeNodes) return false;
    auto &path = reloadable_thread_state<std::vector<int32_t>, struct HistoryPageEventPathTag>();
    if (path.size() >= kNativeHistoryTreeDepth || std::find(path.begin(), path.end(), id) != path.end())
        return false;
    struct PathScope {
        std::vector<int32_t> &path;
        explicit PathScope(std::vector<int32_t> &value, int32_t id) : path(value) { path.push_back(id); }
        ~PathScope() { path.pop_back(); }
    } path_scope(path, id);
    uintptr_t address = 0;
    if (!native_history_find_structure_id(native_history_global(0x24f9cb8), 0x20, id, address) || !address) return false;
    int32_t type = -1;
    if (!capture_native_history_event_identity(reinterpret_cast<void *>(address), type)) return false;
    std::vector<std::max_align_t> context;
    if (!initialize_native_history_context(context)) return false;
    NativeHistoryPageString output;
    NativeHistoryActiveScope active(&parent, parent.id == -1 && parent.native_type == -1);
    capture_native_history_nested_title(reinterpret_cast<void *>(address), &output.value,
        context.data(), true, false);
    const auto captured = parent.children.find(id);
    return captured != parent.children.end() && captured->second &&
        !captured->second->fields.contains("snapshot.incomplete") &&
        native_history_tree_within_limits(*captured->second);
}

static bool capture_native_history_page_program(uintptr_t program, NativeHistoryEventData &data, int32_t mode) {
    if (!program || !native_history_profile_base() || mode != 2) return false;
    NativeHistoryCallbackScope callback;
    NativeHistoryPageString output;
    NativeHistoryActiveScope active(&data, true);
    reinterpret_cast<void (*)(NativeString *, void *, int32_t)>(native_history_page_address(NativeHistoryPageSymbol::Program))(
        &output.value, reinterpret_cast<void *>(program), mode);
    return !data.fields.contains("snapshot.incomplete");
}

static bool capture_native_history_page_item(const std::vector<int32_t> &tuple,
        NativeHistoryEventData &data, std::string_view role, int32_t count, int32_t item_id) {
    if (!native_history_profile_base() || !g_real_native_history_item || tuple.size() != 4 || role.empty())
        return false;
    for (size_t index = 0; index < 3; ++index)
        if (tuple[index] < INT16_MIN || tuple[index] > INT16_MAX) return false;
    NativeHistoryCallbackScope callback;
    NativeHistoryPageString output;
    NativeHistoryActiveScope active(&data, data.id == -1 && data.native_type == -1);
    g_real_native_history_item(&output.value, static_cast<int16_t>(tuple[0]),
        static_cast<int16_t>(tuple[1]), static_cast<int16_t>(tuple[2]), tuple[3],
        count, 0, false, nullptr, -1, item_id, true, 0, 0);
    std::string_view value;
    if (!native_string_view(&output.value, &value, kNativeHistoryStringLimit)) return false;
    const std::string key = "item." + std::string(role);
    data.texts[key] = std::string(value);
    data.fields[key] = {tuple[0], tuple[1], tuple[2], tuple[3], count, item_id};
    return capture_native_history_item_parts(data, key, static_cast<int16_t>(tuple[0]),
        static_cast<int16_t>(tuple[2]), tuple[3], count, 0, nullptr, 0, 0);
}
