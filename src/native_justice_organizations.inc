// 53.16 PE Intelligence/Organizations renders cached organization and actor
// fields. Freeze their native owners while addst still holds the actual
// string; initials never select a person or serve as a complete name.
static std::optional<std::string> native_justice_organization_person_target(
        uintptr_t actor, std::string_view expected,
        std::optional<std::string> &initials_target) {
#ifdef _WIN32
    uintptr_t name = 0;
    const auto &hooks = g_native_unit_identity_hooks;
    if (!actor || expected.empty() || !native_history_copy(actor + 0x10, name))
        return std::nullopt;
    if (!name) {
        // Every missing/hidden identity branch leaves actor+10 null and writes
        // one of these complete statuses to +18. NAM/UNI are never evidence.
        if (expected != "Nameless" && expected != "Unidentified") return std::nullopt;
        auto target = g_overlay.exact_literal_translation("Justice actor: " + std::string(expected));
        if (target && !target->empty()) {
            initials_target = g_overlay.exact_literal_translation(
                "Justice organization initials: " + std::string(expected));
            remember_native_unit_identity(actor + 0x18, expected, *target, 0, true);
        } else target.reset();
        return target;
    }
    if (!hooks.base || !hooks.english_name || !hooks.destroy)
        return std::nullopt;
    // The actor producer stores the selected language_name at +10, including
    // a visible identity's name. It builds +18 with EnglishName(true,false).
    // Replay exactly that formatter in a disposable string to reject a stale
    // cached identity without changing any game-owned name or list entry.
    NativeInputCallbackScope callback;
    NativeSearchString output(hooks.destroy);
    callback.call_native([&] {
        hooks.english_name(reinterpret_cast<const void *>(name), &output.value, true, false);
    });
    std::string_view source;
    if (!native_string_view(&output.value, &source, 65536) || source != expected)
        return std::nullopt;
    NativeUnitIdentity snapshot;
    std::array<int32_t, 7> indices;
    indices.fill(-1);
    if (!capture_native_history_name(hooks.base, name, snapshot.name, &indices, true))
        return std::nullopt;
    snapshot.native_name_words_valid = capture_native_unit_identity_name_words(
        name, snapshot.name, snapshot.native_name_words, &indices);
    NativeUnitIdentity initials = snapshot;
    initials.name.nickname.clear();
    initials.native_name_words_valid = capture_native_unit_identity_name_words(
        name, initials.name, initials.native_name_words, &indices);
    initials_target = g_overlay.translate_native_justice_organization_initials(initials, indices);
    snapshot.native_name.assign(source);
    snapshot.form = NativeUnitIdentityForm::NameOnly;
    snapshot.english_name = true;
    auto target = g_overlay.translate_native_unit_identity(snapshot);
    if (target && target->empty()) target.reset();
    if (target) {
        remember_native_unit_identity(actor + 0x18, expected, *target, 0, true);
    }
    return target;
#else
    return std::nullopt;
#endif
}

static std::optional<std::string> native_justice_organization_person_target(
        uintptr_t actor, std::string_view expected) {
    std::optional<std::string> initials_target;
    return native_justice_organization_person_target(actor, expected, initials_target);
}

static std::optional<NativeJusticeOrganizationCaption>
capture_native_justice_organization_caption(
        uintptr_t caller, uintptr_t source_address, int x, int y) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !caller || !source_address || x < 0 || x > 1000 || y < 0 || y > 1000)
        return std::nullopt;
    const auto called_from = [&](uintptr_t reference_return) {
        return caller == native_reference_address(base, reference_return);
    };
    NativeJusticeOrganizationCaption caption;
    uintptr_t actor = 0;
    try {
        if (called_from(0x477a80)) {
            // org+58 is the shortened heading. org+18 is its complete title,
            // and org+90 is the actual principal actor chosen by the producer.
            if (source_address < 0x58) return std::nullopt;
            const uintptr_t organization = source_address - 0x58;
            caption.field = NativeJusticeOrganizationField::Title;
            if (!native_history_copy_string(organization + 0x18, caption.person_source))
                return std::nullopt;
            native_history_copy(organization + 0x90, actor);
        } else if (called_from(0x478073) || called_from(0x4780f0) ||
                called_from(0x478171)) {
            uintptr_t field_offset = 0;
            int left = x, top = y;
            if (called_from(0x478073)) {
                caption.field = NativeJusticeOrganizationField::NodeRole;
                field_offset = 0x20;
            } else if (called_from(0x4780f0)) {
                caption.field = NativeJusticeOrganizationField::NodeName;
                field_offset = 0x48;
                left -= 1;
                top -= 2;
            } else {
                caption.field = NativeJusticeOrganizationField::NodeTail;
                field_offset = 0x68;
                left -= 1;
                top -= 3;
            }
            if (source_address < field_offset || left < 0 || top < 0)
                return std::nullopt;
            // 0x477fe0 fills the inclusive rectangle (L,T)..(L+4,T+4).
            // Role, initials and death marker use (L,T), (L+1,T+2),
            // and (L+1,T+3), respectively. These are native grid coordinates.
            caption.node_box = SDL_Rect{left, top, 5, 5};
            const uintptr_t node = source_address - field_offset;
            if (!native_history_copy(node, actor) || !actor ||
                    !native_history_copy_string(actor + 0x18, caption.person_source))
                return std::nullopt;
        } else if (called_from(0x47822f)) {
            caption.field = NativeJusticeOrganizationField::SelectedLabel;
        } else if (called_from(0x478284)) {
            // The selected node supplies actor+18 directly, without the
            // three-byte initials used inside its small diagram rectangle.
            if (source_address < 0x18) return std::nullopt;
            actor = source_address - 0x18;
            caption.field = NativeJusticeOrganizationField::SelectedName;
            if (!native_history_copy_string(source_address, caption.person_source))
                return std::nullopt;
        } else if (called_from(0x47831b) || called_from(0x478390)) {
            caption.field = NativeJusticeOrganizationField::Members;
        } else {
            return std::nullopt;
        }
        if (caption.person_source.size() > 65536 ||
                caption.person_source.find('\0') != std::string::npos ||
                caption.person_source.find_first_of("\r\n") != std::string::npos)
            return std::nullopt;
        if (actor && !caption.person_source.empty())
            caption.person_target = native_justice_organization_person_target(
                actor, caption.person_source, caption.initials_target);
        return caption;
    } catch (...) {
        // Optional owned evidence never unwinds across the native drawer.
    }
#endif
    return std::nullopt;
}
