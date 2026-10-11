// The actor supplier retains complete names but clips the title and the
// association body strings to the native card width. Bind the overlay's
// complete source to the exact native string owner without altering the card.
#ifdef _WIN32
using NativeJusticeActorSupplyFn = void (*)(void *);

struct NativeJusticeActorCapturedSource {
    uintptr_t actor = 0;
    std::string visible, complete;
    std::optional<bool> sabotage_person;
};

struct NativeJusticeActorCaptureProfile {
    uintptr_t base = 0;
    NativeJusticeActorSupplyFn supply = nullptr;
    std::vector<NativeCall> calls;
};

static NativeCallHook g_native_justice_actor_capture_hook;
static NativeJusticeActorSupplyFn g_native_justice_actor_supply = nullptr;
static uintptr_t g_native_justice_actor_capture_base = 0;
static std::mutex g_native_justice_actor_capture_mutex;
static std::unordered_map<uintptr_t, NativeJusticeActorCapturedSource>
    g_native_justice_actor_sources;
static std::unordered_map<uintptr_t, std::vector<uintptr_t>>
    g_native_justice_actor_source_owners;

static void forget_native_justice_actor_sources_locked(uintptr_t actor) {
    const auto previous = g_native_justice_actor_source_owners.find(actor);
    if (previous == g_native_justice_actor_source_owners.end()) return;
    for (const uintptr_t address : previous->second) {
        const auto source = g_native_justice_actor_sources.find(address);
        if (source != g_native_justice_actor_sources.end() && source->second.actor == actor)
            g_native_justice_actor_sources.erase(source);
    }
    g_native_justice_actor_source_owners.erase(previous);
}

static std::optional<bool> native_justice_actor_plot_sabotage(uintptr_t plot) {
    uintptr_t agreement = 0, detail = 0, data = 0;
    NativeBorrowedVector<uintptr_t> details;
    int32_t type = -1, entity = -1, figure = -1;
    if (!native_history_copy(plot + 0x60, agreement) || !agreement ||
            !native_history_read_vector(agreement + 0x28, details) || details.size() == 0 ||
            !(detail = native_history_vector_at(details, 0)) ||
            !native_history_copy(detail + 0x18, type) || type != 10 ||
            !native_history_copy(detail + 0x10, data) || !data ||
            !native_history_copy(data + 0x10, entity) ||
            !native_history_copy(data + 0xc, figure)) return std::nullopt;
    // The native switch selects victim_civ first, then victim_hfid. Preserve
    // that type choice instead of deciding from a generated name's spelling.
    if (entity != -1) return false;
    if (figure != -1) return true;
    return std::nullopt;
}

static bool native_justice_actor_title_source_matches(std::string_view visible,
        std::string_view complete) {
    // d1840 copies list_name(+18) into p_list_name(+58), then 52d910
    // removes an initial article and internal vowels before truncating the
    // tail. It inserts no ellipsis or replacement bytes. The typed pair and
    // supplier call prove the source; deleted bytes preserve relative order.
    size_t index = 0;
    for (const char byte : complete) {
        if (index == visible.size()) break;
        if (byte == visible[index]) ++index;
    }
    return index == visible.size();
}

static bool capture_native_justice_actor_sources(uintptr_t actor,
        std::vector<std::pair<uintptr_t, NativeJusticeActorCapturedSource>> &result) {
    if (!actor || actor > UINTPTR_MAX - 0xf0) return false;
    std::string title, full_title;
    NativeBorrowedVector<uintptr_t> body, organizations, plots;
    NativeBorrowedVector<int32_t> aliases;
    uintptr_t main_identity = 0, principle = 0;
    int32_t main_identity_id = -1;
    if (!native_history_copy_string(actor + 0x58, title) ||
            !native_history_copy_string(actor + 0x18, full_title) ||
            !native_justice_actor_title_source_matches(title, full_title) ||
            !native_history_read_vector(actor + 0x78, body) || body.size() > 65536 ||
            !native_history_copy(actor + 0xa0, aliases) || !aliases.valid(65536) ||
            !native_history_copy(actor + 0x8, main_identity) ||
            (main_identity && !native_history_copy(main_identity, main_identity_id)) ||
            !native_history_copy(actor + 0xb8, principle) ||
            !native_history_read_vector(actor + 0xc0, organizations) || organizations.size() > 65536 ||
            !native_history_read_vector(actor + 0xd8, plots) || plots.size() > 65536) return false;
    // The card's selected language_name proves whether this complete spelling
    // is generated or authored. Register the shared semantic identity before
    // the overlay handles titles or organization names built from that actor.
    (void)native_justice_organization_person_target(actor, full_title);
    result.emplace_back(actor + 0x58,
        NativeJusticeActorCapturedSource{actor, std::move(title), std::move(full_title), {}});
    size_t row = 0;
    const auto append = [&](std::string complete,
            std::optional<bool> sabotage_person = std::nullopt) {
        const uintptr_t address = native_history_vector_at(body, row);
        std::string visible;
        if (!address || !native_history_copy_string(address, visible) ||
                !complete.starts_with(visible)) return false;
        result.emplace_back(address, NativeJusticeActorCapturedSource{
            actor, std::move(visible), std::move(complete), sabotage_person});
        ++row;
        return true;
    };
    if (aliases.size()) {
        NativeBorrowedVector<uintptr_t> identities;
        if (!native_history_read_vector(native_history_global(0x24e7ce8), identities)) return false;
        for (size_t index = 0; index < aliases.size(); ++index) {
            int32_t alias = -1;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(aliases.begin) +
                    index * sizeof(int32_t), alias)) return false;
            if (main_identity && alias == main_identity_id) continue;
            uintptr_t identity = 0;
            size_t first = 0, last = identities.size();
            while (first < last) {
                const size_t middle = first + (last - first) / 2;
                const uintptr_t candidate = native_history_vector_at(identities, middle);
                int32_t id = -1;
                if (!candidate || !native_history_copy(candidate, id)) return false;
                if (id == alias) { identity = candidate; break; }
                if (id < alias) first = middle + 1; else last = middle;
            }
            if (!identity) continue;
            uint8_t named = 0;
            if (!native_history_copy(identity + 0x7a, named)) return false;
            if (!named) continue;
            // Alias rows are not clipped. The typed alias-id branches above
            // establish their row count and skip the actor's main identity.
            std::string complete;
            const uintptr_t address = native_history_vector_at(body, row);
            if (!address || !native_history_copy_string(address, complete) ||
                    !complete.starts_with("Alias: ") || !append(std::move(complete))) return false;
        }
    }
    if (principle) {
        uintptr_t principal_actor = 0;
        if (!native_history_copy(principle + 0x90, principal_actor)) return false;
        if (principal_actor == actor) {
            if (!append("Highest known in organization")) return false;
        } else {
            std::string name;
            if (!native_history_copy_string(principle + 0x18, name)) return false;
            if (principal_actor)
                (void)native_justice_organization_person_target(principal_actor, name);
            if (!append("Associated Organization: " + name)) return false;
        }
    }
    for (size_t index = 0; index < organizations.size(); ++index) {
        const uintptr_t organization = native_history_vector_at(organizations, index);
        if (organization == principle) continue;
        std::string name;
        uintptr_t principal_actor = 0;
        if (!organization || !native_history_copy_string(organization + 0x18, name) ||
                !native_history_copy(organization + 0x90, principal_actor)) return false;
        if (principal_actor)
            (void)native_justice_organization_person_target(principal_actor, name);
        if (!append("Associated Organization: " + name)) return false;
    }
    for (size_t index = 0; index < plots.size(); ++index) {
        const uintptr_t plot = native_history_vector_at(plots, index);
        std::string name;
        if (!plot || !native_history_copy_string(plot, name) ||
                !append("Associated Plot: " + name,
                    native_justice_actor_plot_sabotage(plot))) return false;
    }
    return row == body.size();
}

static void capture_native_justice_actor_card(void *object) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_native_justice_actor_supply(object); });
    const uintptr_t actor = reinterpret_cast<uintptr_t>(object);
    try {
        std::vector<std::pair<uintptr_t, NativeJusticeActorCapturedSource>> sources;
        const bool complete = capture_native_justice_actor_sources(actor, sources);
        std::lock_guard<std::mutex> lock(g_native_justice_actor_capture_mutex);
        forget_native_justice_actor_sources_locked(actor);
        if (!complete) return;
        // Metadata is refreshed even when DF's supplier returns its cached
        // body. A borrowed address never licenses a different visible string.
        if (g_native_justice_actor_sources.size() + sources.size() > (1u << 20)) {
            g_native_justice_actor_sources.clear();
            g_native_justice_actor_source_owners.clear();
        }
        auto &owners = g_native_justice_actor_source_owners[actor];
        owners.reserve(sources.size());
        for (auto &[address, source] : sources) {
            owners.push_back(address);
            g_native_justice_actor_sources.insert_or_assign(address, std::move(source));
        }
    } catch (...) {
        // Capturing complete sources must never unwind into native rendering.
    }
}

static std::optional<std::string> native_justice_actor_source(uintptr_t address,
        std::string_view displayed, uintptr_t native_caller,
        std::optional<bool> *sabotage_person) {
    if (sabotage_person) sabotage_person->reset();
    const uintptr_t base = g_native_justice_actor_capture_base;
    if (!base || !address ||
            (native_caller != native_reference_address(base, 0x4786c7) &&
             native_caller != native_reference_address(base, 0x4788f1))) return std::nullopt;
    std::lock_guard<std::mutex> lock(g_native_justice_actor_capture_mutex);
    const auto found = g_native_justice_actor_sources.find(address);
    if (found == g_native_justice_actor_sources.end() || found->second.visible != displayed)
        return std::nullopt;
    const auto &source = found->second;
    const bool title = native_caller == native_reference_address(base, 0x4786c7);
    if (title != (address == source.actor + 0x58)) return std::nullopt;
    if (sabotage_person) *sabotage_person = source.sabotage_person;
    return source.complete;
}

static bool native_justice_actor_capture_hook_active() {
    return g_native_justice_actor_capture_hook.active();
}

static void uninstall_native_justice_actor_capture_hook() {
    if (!native_callbacks_idle() ||
            !g_native_justice_actor_capture_hook.uninstall("Native justice actor sources")) return;
    g_native_justice_actor_supply = nullptr;
    g_native_justice_actor_capture_base = 0;
    std::lock_guard<std::mutex> lock(g_native_justice_actor_capture_mutex);
    g_native_justice_actor_sources.clear();
    g_native_justice_actor_source_owners.clear();
}

static bool install_native_justice_actor_capture_hook() {
    if (g_native_justice_actor_capture_hook.installed) return true;
    if (native_justice_actor_capture_hook_active()) {
        uninstall_native_justice_actor_capture_hook();
        if (native_justice_actor_capture_hook_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    const NativeSearchBinding<NativeJusticeActorCaptureProfile> bindings[]{
        {{
            {0xd1840, {0x48,0x89,0x5c,0x24,0x10,0x48,0x89,0x74,0x24,0x18,
                0x48,0x89,0x7c,0x24,0x20,0x55}},
            {0x47846b, {0x48,0x8b,0xcb,0xe8,0xcd,0x93,0xc5,0xff,
                0x48,0x8b,0x83,0x80}},
            {0x47853f, {0x49,0x8b,0xcc,0xe8,0xf9,0x92,0xc5,0xff,
                0x41,0x8d,0x4d,0x04}},
        }, {0, reinterpret_cast<NativeJusticeActorSupplyFn>(
                native_reference_address(base, 0xd1840)), {
            {0x47846e, 0xd1840, reinterpret_cast<const void *>(&capture_native_justice_actor_card)},
            {0x478542, 0xd1840, reinterpret_cast<const void *>(&capture_native_justice_actor_card)},
        }}}
    };
    NativeJusticeActorCaptureProfile profile;
    if (!resolve_native_search_binding(bindings, profile, "justice actor sources") ||
            !profile.supply) return false;
    g_native_justice_actor_supply = profile.supply;
    g_native_justice_actor_capture_base = profile.base;
    if (!g_native_justice_actor_capture_hook.install(profile.base, profile.calls,
            "Native justice actor sources")) {
        uninstall_native_justice_actor_capture_hook();
        return false;
    }
    return true;
}
#else
static std::optional<std::string> native_justice_actor_source(uintptr_t,
        std::string_view, uintptr_t, std::optional<bool> *sabotage_person) {
    if (sabotage_person) sabotage_person->reset();
    return std::nullopt;
}
static bool native_justice_actor_capture_hook_active() { return false; }
static void uninstall_native_justice_actor_capture_hook() {}
static bool install_native_justice_actor_capture_hook() { return true; }
#endif
