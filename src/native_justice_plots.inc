// 53.16 PE Intelligence/Plots. Its exact addst callers distinguish title,
// organization label/name and counter. Plot+70 is shortened by the producer;
// its complete personal name remains in the associated native catalogs.
static std::optional<NativeJusticePlotCaption> native_justice_plot_caption(
        uintptr_t caller, uintptr_t address, std::string_view displayed) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !caller || !address || displayed.empty() || displayed.size() > 65536)
        return std::nullopt;
    const auto called_from = [&](uintptr_t reference_return) {
        return caller == native_reference_address(base, reference_return);
    };
    const bool title = called_from(0x477471);
    const bool organization_label = called_from(0x4776af);
    const bool organization_name = called_from(0x4776fa);
    const bool counter = called_from(0x4775dc);
    if (!title && !organization_label && !organization_name && !counter)
        return std::nullopt;
    try {
        std::string current;
        if (!native_history_copy_string(address, current) || current != displayed)
            return std::nullopt;
        NativeJusticePlotCaption caption;
        if (organization_label || counter) {
            caption.field = organization_label ? NativeJusticePlotField::OrganizationLabel
                                               : NativeJusticePlotField::Counter;
            caption.complete_source = std::move(current);
            return caption;
        }
        const uintptr_t offset = title ? 0x40 : 0x70;
        if (address < offset) return std::nullopt;
        const uintptr_t plot = address - offset;
        if (plot > UINTPTR_MAX - 0x90) return std::nullopt;
        if (title) {
            caption.field = NativeJusticePlotField::Title;
            // The renderer lazily copies the complete +00 title into +40.
            // Requiring the same source rejects stale game-owned caches.
            if (!native_history_copy_string(plot, caption.complete_source) ||
                    caption.complete_source != current) return std::nullopt;
            uintptr_t agreement = 0, detail = 0, data = 0;
            NativeBorrowedVector<uintptr_t> details;
            int32_t type = -1, entity = -1, figure = -1;
            if (native_history_copy(plot + 0x60, agreement) && agreement &&
                    agreement <= UINTPTR_MAX - 0x40 &&
                    native_history_read_vector(agreement + 0x28, details) &&
                    details.size() && details.size() <= 65536 &&
                    (detail = native_history_vector_at(details, 0)) &&
                    detail <= UINTPTR_MAX - 0x1c &&
                    native_history_copy(detail + 0x18, type) && type == 10 &&
                    native_history_copy(detail + 0x10, data) && data &&
                    data <= UINTPTR_MAX - 0x14 &&
                    native_history_copy(data + 0x10, entity) &&
                    native_history_copy(data + 0xc, figure)) {
                // Sabotage chooses an entity first, then the HF fallback.
                if (entity != -1) caption.sabotage_person = false;
                else if (figure != -1) caption.sabotage_person = true;
            }
            return caption;
        }

        caption.field = NativeJusticePlotField::OrganizationName;
        int32_t organization_hf = -1;
        if (!native_history_copy(plot + 0x68, organization_hf) || organization_hf == -1)
            return std::nullopt;
        // Info is a static object, not a pointer global. Its justice member
        // starts at +a10; edition binding maps the static object's own RVA.
        const uintptr_t info = native_reference_address(base, 0x18a61c0);
        if (!info || info > UINTPTR_MAX - 0xa10 - 0x360) return std::nullopt;
        const uintptr_t owner = info + 0xa10;
        const auto matching_actor = [&](uintptr_t actor) {
            uintptr_t figure = 0;
            int32_t figure_id = -1;
            return actor && actor <= UINTPTR_MAX - 0xf8 &&
                native_history_copy(actor, figure) && figure &&
                figure <= UINTPTR_MAX - 0xe4 &&
                native_history_copy(figure + 0xe0, figure_id) &&
                figure_id == organization_hf;
        };
        const auto recover = [&](uintptr_t actor, uintptr_t source) {
            std::string full;
            if (!matching_actor(actor) || !source ||
                    !native_history_copy_string(source, full) || full.empty() ||
                    full.size() > 65536 || !full.starts_with(current) ||
                    full.find_first_of("\r\n") != std::string::npos) return false;
            caption.complete_source = std::move(full);
            caption.person_target = native_justice_organization_person_target(
                actor, caption.complete_source);
            return true;
        };
        NativeBorrowedVector<uintptr_t> organizations;
        if (native_history_read_vector(owner + 0x2e8, organizations) &&
                organizations.size() <= 65536) {
            for (size_t index = 0; index < organizations.size(); ++index) {
                const uintptr_t organization = native_history_vector_at(organizations, index);
                uintptr_t actor = 0;
                if (!organization || organization > UINTPTR_MAX - 0xa0 ||
                        !native_history_copy(organization + 0x90, actor)) continue;
                if (recover(actor, organization + 0x18)) return caption;
            }
        }
        // The native producer fills a still-empty plot+70 from the complete
        // actor name when an organization name was not populated.
        NativeBorrowedVector<uintptr_t> actors;
        if (native_history_read_vector(owner + 0x2d0, actors) && actors.size() <= 65536) {
            for (size_t index = 0; index < actors.size(); ++index) {
                const uintptr_t actor = native_history_vector_at(actors, index);
                if (actor && actor <= UINTPTR_MAX - 0xf8 && recover(actor, actor + 0x18))
                    return caption;
            }
        }
    } catch (...) {
        // Optional source recovery must never unwind through the native drawer.
    }
#endif
    return std::nullopt;
}
