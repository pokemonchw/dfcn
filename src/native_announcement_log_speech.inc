// Native speech production, before English macro expansion. These hooks own
// only the current wrapper invocation and its final newly appended utterance.
using NativeAnnouncementLogSpeechFn = void (*)(void *, const int32_t *, const int32_t *,
    NativeString *, int16_t, int16_t, uint16_t, const void *, const void *);
using NativeAnnouncementLogSpeechReplaceFn = void (*)(const NativeString *, NativeString *,
    uint64_t, uint8_t, const NativeString *, uint8_t);
static NativeEntryHook g_native_announcement_log_speech_entry, g_native_announcement_log_speech_replace_entry;
static NativeAnnouncementLogSpeechFn g_real_native_announcement_log_speech = nullptr;
static NativeAnnouncementLogSpeechReplaceFn g_real_native_announcement_log_speech_replace = nullptr;
struct NativeAnnouncementLogSpeechLive {
    struct Caption { int32_t unit_id; std::string source; NativeUnitIdentity identity; };
    NativeAnnouncementLogSpeech speech;
    uintptr_t conversation = 0, before_end = 0;
    NativeString *body = nullptr;
    size_t before_size = 0;
    std::string shadow;
    std::vector<size_t> owners;
    std::vector<size_t> anchors;
    std::vector<Caption> captions;
    bool valid = false, mapping = true, transformed = false;
};
static thread_local NativeAnnouncementLogSpeechLive *g_native_announcement_log_speech_live = nullptr;
static void remember_native_announcement_log_speech_identity(
        uintptr_t unit, const NativeUnitIdentity &identity, std::string_view source) noexcept {
    auto *live = g_native_announcement_log_speech_live;
    if (!live || !live->valid || !unit) return;
    try {
        int32_t unit_id = -1;
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x130, 4), unit_id) ||
                unit_id < 0 || (unit_id != live->speech.speaker_ref[0] &&
                    unit_id != live->speech.recipient_ref[0])) return;
        // The outer native reference formatter finishes after its nested
        // name/role suppliers. Retain that complete selection for this one
        // wrapper invocation; no later world lookup can replace its caption.
        for (auto &caption : live->captions)
            if (caption.unit_id == unit_id && caption.source == source) {
                caption.identity = identity;
                return;
            }
        live->captions.push_back({unit_id, std::string(source), identity});
    } catch (...) {}
}
struct NativeAnnouncementLogSpeechCallback {
    NativeAnnouncementLogSpeechCallback() { g_active_native_announcement_callbacks.fetch_add(1, std::memory_order_acq_rel); }
    ~NativeAnnouncementLogSpeechCallback() { g_active_native_announcement_callbacks.fetch_sub(1, std::memory_order_acq_rel); }
};
static bool native_announcement_log_speech_text(const NativeString *source, std::string &text) {
    std::string_view value;
    if (!source || !native_string_view(source, &value, SIZE_MAX)) return false;
    text.assign(value); return true;
}
static void native_announcement_log_speech_context(const void *context, NativeAnnouncementLogSpeech &speech) {
    if (!context) return;
    // Resolve the declared context member; its reference coordinate is only
    // documentation of the existing formatter's source field.
    const auto add = [&](std::string name, size_t offset, size_t size) {
        (void)offset;
        const auto address = native_history_object_member(reinterpret_cast<uintptr_t>(context), "history_event_context", name, size);
        int64_t value = 0;
        if (size == 4) { int32_t v; if (!native_history_copy(address, v)) return; value = v; }
        else if (size == 2) { int16_t v; if (!native_history_copy(address, v)) return; value = v; }
        else { int8_t v; if (!native_history_copy(address, v)) return; value = v; }
        speech.parameters.emplace(std::move(name), value);
    };
    for (const auto &[name, offset] : std::initializer_list<std::pair<const char *, size_t>>{
            {"artifact_id",0x18},{"entity_id",0x1c},{"histfig_id",0x20},{"speaker_id",0x24},
            {"site_id",0x28},{"region_id",0x2c},{"layer_id",0x30},{"entity_population_id",0x34},
            {"abstract_building_id",0x38},{"number",0x44},{"racegloss_mat_index",0x50}}) add(name, offset, 4);
    for (const auto &[name, offset] : std::initializer_list<std::pair<const char *, size_t>>{
            {"sphere",0x3c},{"architectural_element",0x3e},{"architectural_justification",0x40},
            {"prof",0x48},{"race",0x4a},{"racegloss_material",0x4c},{"caste",0x56}}) add(name, offset, 2);
    add("gender", 0x54, 1);
    // Native explicitly leaves this field uninitialized unless requested.
    if (speech.original_body.find("FAMILY_RELATIONSHIP") != std::string::npos)
        add("family_relationship", 0x42, 2);
}
static std::optional<NativeUnitIdentity> native_announcement_log_speech_unit(int32_t id) {
    uintptr_t unit = 0;
    NativeUnitIdentity identity;
    size_t id_offset = SIZE_MAX;
    for (const auto &field : native_history_layout::f_unit_fields)
        if (std::string_view(field.name) == "id" && field.native.contains(0, sizeof(int32_t), field.size)) {
            id_offset = field.native; break;
        }
    if (id < 0 || id_offset == SIZE_MAX ||
            !native_history_material_find_id(native_history_page_address(NativeHistoryPageSymbol::Units),
                id_offset, id, unit) || !unit || !capture_native_unit_identity(unit, identity)) return {};
    return identity;
}
static void native_announcement_log_speech_tokens(NativeAnnouncementLogSpeechLive &live) {
    live.shadow = live.speech.original_body;
    live.owners.assign(live.shadow.size(), SIZE_MAX);
    for (size_t first = 0; first < live.shadow.size();) {
        first = live.shadow.find('[', first);
        if (first == std::string::npos) break;
        const size_t last = live.shadow.find(']', first + 1);
        if (last == std::string::npos) { live.mapping = false; break; }
        const size_t owner = live.speech.tokens.size();
        NativeAnnouncementLogSpeechToken token;
        token.template_offset = first; token.template_length = last + 1 - first;
        token.token = live.shadow.substr(first, token.template_length);
        live.speech.tokens.push_back(std::move(token));
        live.anchors.push_back(first);
        std::fill(live.owners.begin() + first, live.owners.begin() + last + 1, owner);
        first = last + 1;
    }
#ifndef _WIN32
    if (!live.speech.tokens.empty()) live.mapping = false;
#endif
}
static void capture_native_announcement_log_speech(void *conversation, const int32_t *speaker,
        const int32_t *recipient, NativeString *body, int16_t foreground, int16_t background,
        uint16_t bright, const void *context, const void *parameters) {
    NativeAnnouncementLogSpeechCallback active;
    const auto original = g_real_native_announcement_log_speech;
    if (!original) return;
    NativeAnnouncementLogSpeechLive live;
    live.conversation = reinterpret_cast<uintptr_t>(conversation); live.body = body;
    try {
        NativeBorrowedVector<uintptr_t> turns;
        live.valid = conversation && speaker && parameters &&
            native_history_copy_bytes(reinterpret_cast<uintptr_t>(speaker), live.speech.speaker_ref.data(), 8) &&
            (!recipient || native_history_copy_bytes(reinterpret_cast<uintptr_t>(recipient), live.speech.recipient_ref.data(), 8)) &&
            native_history_copy(reinterpret_cast<uintptr_t>(parameters), live.speech.choice) &&
            live.speech.choice >= 0 && live.speech.choice < 254 &&
            native_announcement_log_speech_text(body, live.speech.original_body) &&
            native_history_read_vector(native_history_object_member(live.conversation,
                "activity_event_conversationst", "turns"), turns);
        if (live.valid) {
            live.before_end = reinterpret_cast<uintptr_t>(turns.end); live.before_size = turns.size();
            native_announcement_log_speech_context(context, live.speech);
            native_announcement_log_speech_tokens(live);
        }
    } catch (...) { live.valid = false; }
    struct Scope {
        NativeAnnouncementLogSpeechLive *previous = g_native_announcement_log_speech_live;
        explicit Scope(NativeAnnouncementLogSpeechLive *value) { g_native_announcement_log_speech_live = value; }
        ~Scope() { g_native_announcement_log_speech_live = previous; }
    } scope(live.valid ? &live : nullptr);
    NativeInputCallbackScope callback;
    callback.call_native([&] { original(conversation, speaker, recipient, body,
        foreground, background, bright, context, parameters); });
}
static void capture_native_announcement_log_speech_replace(const NativeString *token, NativeString *destination,
        uint64_t third, uint8_t suffix, const NativeString *replacement, uint8_t prefix) {
    NativeAnnouncementLogSpeechCallback active;
    const auto original = g_real_native_announcement_log_speech_replace;
    if (!original) return;
    auto *live = g_native_announcement_log_speech_live;
    std::string before, needle, value, expected;
    size_t at = std::string::npos, count = 0, owner = SIZE_MAX;
    if (live && live->mapping && destination == live->body) try {
        std::string name;
        if (!native_announcement_log_speech_text(destination, before) || before != live->shadow ||
                !native_announcement_log_speech_text(token, name) ||
                !native_announcement_log_speech_text(replacement, value)) live->mapping = false;
        else {
            if (prefix) needle.push_back(static_cast<char>(prefix));
            needle += name;
            if (suffix) needle.push_back(static_cast<char>(suffix));
            at = before.find(needle); count = needle.size();
            if (at != std::string::npos) {
                if (!count || at > live->owners.size() || count > live->owners.size() - at) live->mapping = false;
                else {
                    owner = live->owners[at];
                    if (owner == SIZE_MAX) live->mapping = false;
                    for (size_t i = at; i < at + count; ++i)
                        if (live->owners[i] != owner) live->mapping = false;
                    expected = before; expected.replace(at, count, value);
                }
            }
        }
    } catch (...) { live->mapping = false; }
    NativeInputCallbackScope callback;
    callback.call_native([&] { original(token, destination, third, suffix, replacement, prefix); });
    if (live && live->mapping && destination == live->body && at != std::string::npos) try {
        std::string after;
        if (!native_announcement_log_speech_text(destination, after) || after != expected) live->mapping = false;
        else {
            for (auto &anchor : live->anchors) {
                if (anchor >= at && anchor < at + count) anchor = at;
                else if (anchor >= at + count) anchor = anchor - count + value.size();
            }
            live->owners.erase(live->owners.begin() + at, live->owners.begin() + at + count);
            live->owners.insert(live->owners.begin() + at, value.size(), owner);
            live->shadow = std::move(after);
        }
    } catch (...) { live->mapping = false; }
}
static void remember_native_announcement_log_speech_transform(std::string_view original, std::string_view rendered) {
    auto *live = g_native_announcement_log_speech_live;
    if (!live || !live->valid) return;
    std::string expanded;
    if (!native_announcement_log_speech_text(live->body, expanded) || original != expanded) return;
    live->speech.rendered_body.assign(rendered); live->transformed = true;
}

struct NativeAnnouncementLogSpeechSubmission {
    uintptr_t world = 0;
    uint64_t generation = 0;
    int type = -1;
    std::shared_ptr<const NativeAnnouncementLogSpeech> speech;
    std::array<NativeAnnouncementLogEventTail, 2> before;
};
static void native_announcement_log_speech_finish_snapshot(NativeAnnouncementLogSpeech &speech) {
    auto &key = speech.context;
    const auto scalar = [&](const auto &value) { key.append(reinterpret_cast<const char *>(&value), sizeof(value)); };
    const auto text = [&](std::string_view value) { scalar(value.size()); key.append(value); };
    scalar(speech.choice); scalar(speech.incident_id); scalar(speech.year); scalar(speech.ticks);
    for (const auto value : speech.speaker_ref) scalar(value);
    for (const auto value : speech.recipient_ref) scalar(value);
    for (const auto value : speech.variables) scalar(value);
    scalar(speech.rumor_type); for (const auto value : speech.rumor_data) scalar(value);
    scalar(speech.parameters.size());
    for (const auto &[name, value] : speech.parameters) { text(name); scalar(value); }
    text(speech.original_body); text(speech.expanded_body); text(speech.rendered_body); text(speech.header_source);
    text(speech.speaker_source); text(speech.recipient_source);
    scalar(speech.header_complete); scalar(speech.player); scalar(speech.addressed);
    scalar(speech.tokens_complete);
    scalar(speech.tokens.size());
    for (const auto &token : speech.tokens) {
        text(token.token); text(token.source); scalar(token.template_offset); scalar(token.template_length);
        scalar(token.offset); scalar(token.length);
    }
    const bool speaker = speech.speaker_identity.has_value(), recipient = speech.recipient_identity.has_value();
    scalar(speaker); if (speaker) text(native_unit_identity_cache_key(*speech.speaker_identity));
    scalar(recipient); if (recipient) text(native_unit_identity_cache_key(*speech.recipient_identity));
    const bool speaker_caption = speech.speaker_caption_identity.has_value();
    const bool recipient_caption = speech.recipient_caption_identity.has_value();
    scalar(speaker_caption); if (speaker_caption) text(native_unit_identity_cache_key(*speech.speaker_caption_identity));
    scalar(recipient_caption); if (recipient_caption) text(native_unit_identity_cache_key(*speech.recipient_caption_identity));
    speech.bytes = sizeof(speech) + speech.source.capacity() + speech.original_body.capacity() +
        speech.expanded_body.capacity() + speech.rendered_body.capacity() + speech.header_source.capacity() +
        speech.speaker_source.capacity() + speech.recipient_source.capacity() +
        3 * speech.context.capacity() + speech.tokens.capacity() * sizeof(NativeAnnouncementLogSpeechToken);
    for (const auto &token : speech.tokens) speech.bytes += token.token.capacity() + token.source.capacity();
    for (const auto &[name, value] : speech.parameters) speech.bytes += name.capacity() + sizeof(value) + 5 * sizeof(void *);
}
static NativeAnnouncementLogSpeechSubmission begin_native_announcement_log_speech_submission(
        int type, const NativeString *source) {
    NativeAnnouncementLogSpeechSubmission ticket;
    auto *live = g_native_announcement_log_speech_live;
    if (!live || !live->valid || (type != 163 && type != 177)) return ticket;
    NativeBorrowedVector<uintptr_t> turns;
    if (!native_history_read_vector(native_history_object_member(live->conversation,
                "activity_event_conversationst", "turns"), turns) ||
            turns.size() != live->before_size + 1 || reinterpret_cast<uintptr_t>(turns.end) == live->before_end) return ticket;
    const auto utterance = native_history_vector_at(turns, turns.size() - 1);
    const size_t snapshot_size = native_history_snapshot_size(native_history_layout::f_utterancest_fields);
    if (!snapshot_size) return ticket;
    std::vector<unsigned char> bytes(snapshot_size);
    if (!utterance || !native_history_copy_bytes(utterance, bytes.data(), bytes.size())) return ticket;
    auto speech = std::make_shared<NativeAnnouncementLogSpeech>(live->speech);
    const auto integer = [&](std::string_view name, int32_t &value) {
        for (const auto &field : native_history_layout::f_utterancest_fields)
            if (name == field.name && field.size == sizeof(value)) {
                std::memcpy(&value, bytes.data() + field.native, sizeof(value)); return true;
            }
        return false;
    };
    int32_t speaker = -1, figure = -1, choice = -1;
    if (!integer("speaker", speaker) || !integer("speaker_hfid", figure) || !integer("type", choice) ||
            speaker != speech->speaker_ref[0] || figure != speech->speaker_ref[1] || choice != speech->choice ||
            !integer("incident_id", speech->incident_id) || !integer("year", speech->year) ||
            !integer("ticks", speech->ticks) || !integer("rumor.type", speech->rumor_type)) return ticket;
    for (size_t i = 0; i < speech->variables.size(); ++i)
        if (!integer("anonymous_" + std::to_string(10 + i) + ".variable" + std::to_string(1 + i), speech->variables[i])) return ticket;
    const uintptr_t rumor = native_history_object_member(utterance, "utterancest", "rumor.data.invasion.entity_id");
    if (!rumor || !native_history_copy_bytes(rumor, speech->rumor_data.data(), sizeof(speech->rumor_data))) return ticket;
    if (!native_announcement_log_speech_text(source, speech->source) ||
            !native_announcement_log_speech_text(live->body, speech->expanded_body)) return ticket;
    if (!live->transformed) speech->rendered_body = speech->expanded_body;
    if (!std::string_view(speech->source).ends_with(speech->rendered_body)) return ticket;
    speech->header_source = speech->source.substr(0, speech->source.size() - speech->rendered_body.size());
    if (!speech->header_source.empty() && !std::string_view(speech->header_source).ends_with(": ")) return ticket;
    speech->tokens_complete = live->mapping && live->owners.size() == speech->expanded_body.size();
    if (speech->tokens_complete) {
        bool capitalized = false;
        for (size_t i = 0; i < live->shadow.size(); ++i) {
            const auto before = static_cast<unsigned char>(live->shadow[i]);
            const auto after = static_cast<unsigned char>(speech->expanded_body[i]);
            if (before == after) continue;
            if (capitalized || before < 'a' || before > 'z' || after != before - 'a' + 'A') {
                speech->tokens_complete = false; break;
            }
            capitalized = true;
        }
    }
    // Between the last macro replacement and submit the native wrapper only
    // capitalizes this same body; offsets/ownership remain byte-for-byte fixed.
    if (speech->tokens_complete) {
        for (size_t owner = 0; owner < speech->tokens.size(); ++owner) {
            auto &token = speech->tokens[owner];
            const auto first = std::find(live->owners.begin(), live->owners.end(), owner);
            if (first == live->owners.end()) {
                token.offset = std::min(live->anchors[owner], speech->expanded_body.size());
                token.length = 0; token.source.clear(); continue;
            }
            const auto last = std::find_if(first, live->owners.end(), [&](size_t value) { return value != owner; });
            if (std::find(last, live->owners.end(), owner) != live->owners.end()) { speech->tokens_complete = false; break; }
            token.offset = static_cast<size_t>(first - live->owners.begin());
            token.length = static_cast<size_t>(last - first);
            token.source = speech->expanded_body.substr(token.offset, token.length);
        }
    }
    // 684a10 builds the heading from completed native unit captions, then
    // appends ": " exactly once. Bind only an exact reconstruction of that
    // owned heading. A nickname containing " (to " is never a delimiter.
    speech->header_complete = speech->header_source.empty();
    uintptr_t player = 0;
    int32_t player_id = -1;
    if (native_history_copy(native_history_global(0x23e5110), player) && player)
        for (const auto &field : native_history_layout::f_unit_fields)
            if (std::string_view(field.name) == "id") {
                native_history_copy(field.native.address(player, 0, sizeof(player_id), field.size), player_id);
                break;
            }
    if (player_id >= 0 && speech->speaker_ref[0] == player_id && speech->header_source == "You: ") {
        speech->header_complete = true;
        speech->player = true;
        speech->speaker_source = "You";
    }
    for (auto speaker_at = live->captions.rbegin(); speaker_at != live->captions.rend(); ++speaker_at) {
        const auto &speaker_caption = *speaker_at;
        if (speech->header_complete || speaker_caption.unit_id != speech->speaker_ref[0]) continue;
        const auto bind_speaker = [&] {
            speech->speaker_source = speaker_caption.source;
            speech->speaker_caption_identity = speaker_caption.identity;
            speech->header_complete = true;
        };
        if (speech->header_source == speaker_caption.source + ": ") {
            bind_speaker();
            break;
        }
        for (auto recipient_at = live->captions.rbegin(); recipient_at != live->captions.rend(); ++recipient_at) {
            const auto &recipient_caption = *recipient_at;
            if (recipient_caption.unit_id != speech->recipient_ref[0] ||
                    speech->header_source != speaker_caption.source + " (to " +
                        recipient_caption.source + "): ") continue;
            bind_speaker();
            speech->addressed = true;
            speech->recipient_source = recipient_caption.source;
            speech->recipient_caption_identity = recipient_caption.identity;
            break;
        }
    }
    if (!speech->speaker_identity)
        speech->speaker_identity = native_announcement_log_speech_unit(speech->speaker_ref[0]);
    if (!speech->recipient_identity)
        speech->recipient_identity = native_announcement_log_speech_unit(speech->recipient_ref[0]);
    uintptr_t world = 0;
    if (!native_history_copy(native_history_global(0x24ebb58), world) || !world) return ticket;
    native_announcement_log_speech_finish_snapshot(*speech);
    ticket.world = world; ticket.generation = native_announcement_log_event_reset_generation(); ticket.type = type;
    for (size_t which = 0; which < ticket.before.size(); ++which) {
        NativeAnnouncementHistoryRow report;
        auto &before = ticket.before[which];
        before.valid = native_announcement_log_event_tail(which, before.parent, report);
        if (before.parent) { before.id = report.id; before.repeats = report.repeats; }
    }
    ticket.speech = std::move(speech);
    return ticket;
}
struct NativeAnnouncementLogSpeechSources {
    struct Entry { std::shared_ptr<const NativeAnnouncementLogSpeech> speech; size_t bytes = 0; std::list<std::string>::iterator use; };
    std::mutex mutex;
    uintptr_t world = 0;
    uint64_t generation = 0;
    std::unordered_map<std::string, Entry> entries;
    std::list<std::string> order;
    size_t bytes = 0;
    void reset(uintptr_t next_world, uint64_t next_generation) {
        if (world == next_world && generation == next_generation) return;
        entries.clear(); order.clear(); bytes = 0; world = next_world; generation = next_generation;
    }
};
static NativeAnnouncementLogSpeechSources g_native_announcement_log_speech_sources;
static void finish_native_announcement_log_speech_submission(const NativeAnnouncementLogSpeechSubmission &ticket) {
    if (!ticket.speech) return;
    uintptr_t world = 0;
    const auto generation = native_announcement_log_event_reset_generation();
    if (generation != ticket.generation || !native_history_copy(native_history_global(0x24ebb58), world) || world != ticket.world) return;
    constexpr size_t maximum_entries = 8192, maximum_bytes = 64 * 1024 * 1024;
    uintptr_t previous_parent = 0;
    for (size_t which = 0; which < ticket.before.size(); ++which) {
        const auto &before = ticket.before[which];
        NativeAnnouncementHistoryRow report;
        uintptr_t parent = 0;
        if (!before.valid || !native_announcement_log_event_tail(which, parent, report) || !parent ||
                parent == previous_parent || report.id < 0 || report.type != ticket.type ||
                report.source != ticket.speech->source || report.identity[4] != ticket.speech->speaker_ref[0] ||
                (parent == before.parent && report.id == before.id && report.repeats == before.repeats)) continue;
        previous_parent = parent;
        auto key = native_announcement_log_event_report_key(world, report);
        const size_t bytes = ticket.speech->bytes + 2 * key.capacity() + sizeof(NativeAnnouncementLogSpeechSources::Entry) + 8 * sizeof(void *);
        if (bytes > maximum_bytes) continue;
        auto &cache = g_native_announcement_log_speech_sources;
        std::lock_guard<std::mutex> lock(cache.mutex);
        cache.reset(world, generation);
        if (const auto old = cache.entries.find(key); old != cache.entries.end()) {
            if (old->second.speech->source == ticket.speech->source && old->second.speech->context == ticket.speech->context) continue;
            cache.bytes -= old->second.bytes; cache.order.erase(old->second.use); cache.entries.erase(old);
        }
        while (!cache.order.empty() && (cache.entries.size() >= maximum_entries || cache.bytes > maximum_bytes - bytes)) {
            const auto old = cache.entries.find(cache.order.front()); cache.bytes -= old->second.bytes;
            cache.entries.erase(old); cache.order.pop_front();
        }
        cache.order.push_back(key);
        try { cache.entries.emplace(key, NativeAnnouncementLogSpeechSources::Entry{ticket.speech, bytes, std::prev(cache.order.end())}); }
        catch (...) { cache.order.pop_back(); throw; }
        cache.bytes += bytes;
    }
}
static std::shared_ptr<const NativeAnnouncementLogSpeech> native_announcement_log_speech_record(
        const NativeAnnouncementHistoryRow &report, uintptr_t world) {
    if (!world || report.id < 0 || (report.type != 163 && report.type != 177)) return {};
    const auto generation = native_announcement_log_event_reset_generation();
    const auto key = native_announcement_log_event_report_key(world, report);
    auto &cache = g_native_announcement_log_speech_sources;
    std::lock_guard<std::mutex> lock(cache.mutex);
    cache.reset(world, generation);
    const auto found = cache.entries.find(key);
    if (found == cache.entries.end() || found->second.speech->source != report.source) return {};
    cache.order.splice(cache.order.end(), cache.order, found->second.use);
    return found->second.speech;
}

static bool native_announcement_log_speech_hook_active() {
    return g_native_announcement_log_speech_entry.active() || g_native_announcement_log_speech_replace_entry.active();
}
static bool uninstall_native_announcement_log_speech_hook() {
    if (g_active_native_announcement_callbacks.load(std::memory_order_acquire) != 0) return false;
    const bool replaced = g_native_announcement_log_speech_replace_entry.uninstall("Native speech token fields");
    const bool wrapper = g_native_announcement_log_speech_entry.uninstall("Native speech production");
    if (replaced) g_real_native_announcement_log_speech_replace = nullptr;
    if (wrapper) g_real_native_announcement_log_speech = nullptr;
    return replaced && wrapper;
}
static bool install_native_announcement_log_speech_hook() {
    if (g_native_announcement_log_speech_entry.installed
#ifdef _WIN32
            && g_native_announcement_log_speech_replace_entry.installed
#endif
        ) return true;
    if (native_announcement_log_speech_hook_active() && !uninstall_native_announcement_log_speech_hook()) return false;
    unsigned char *entry = nullptr;
    std::vector<unsigned char> prefix;
#ifdef _WIN32
    const auto executable = native_history_profile_base();
    if (!executable || !native_pe_supported()) return false;
    // Retained complete PE sources: speech-wrapper 684a10 / classic 682430;
    // token replacement 52cc90 / classic 52a6b0. No incoming args are changed.
    prefix = {0x40,0x55,0x53,0x56,0x57};
    if (!native_pe_match(executable, 0x684a10, prefix.data(), prefix.size()) ||
            !native_pe_bytes(0x684a10, prefix)) return false;
    entry = reinterpret_cast<unsigned char *>(native_pe_address(executable, 0x684a10));
    std::vector<unsigned char> replacement = {0x48,0x89,0x5c,0x24,0x18};
    if (!native_pe_match(executable, 0x52cc90, replacement.data(), replacement.size()) ||
            !native_pe_bytes(0x52cc90, replacement) ||
            !g_native_announcement_log_speech_replace_entry.prepare(
                reinterpret_cast<unsigned char *>(native_pe_address(executable, 0x52cc90)), replacement,
                reinterpret_cast<const void *>(&capture_native_announcement_log_speech_replace), {}, "Native speech token fields")) return false;
    g_real_native_announcement_log_speech_replace = reinterpret_cast<NativeAnnouncementLogSpeechReplaceFn>(
        g_native_announcement_log_speech_replace_entry.original);
    if (!g_native_announcement_log_speech_replace_entry.install("Native speech token fields")) {
        uninstall_native_announcement_log_speech_hook(); return false;
    }
#else
    // The retained ELF coordinate is a VA, while the profile base already
    // includes the image origin. Convert it before applying edition relocation.
    const auto address = native_elf_history_address(0x103a1d0);
    prefix = {0xf3,0x0f,0x1e,0xfa,0x55};
    if (!address || std::memcmp(reinterpret_cast<const void *>(address), prefix.data(), prefix.size()) != 0) return false;
    entry = reinterpret_cast<unsigned char *>(address);
    // The retained ELF source proves the wrapper ABI. No unretained token
    // replacement prefix is invented; token-bearing rows remain incomplete.
#endif
    if (!g_native_announcement_log_speech_entry.prepare(entry, prefix,
            reinterpret_cast<const void *>(&capture_native_announcement_log_speech), {}, "Native speech production")) {
        uninstall_native_announcement_log_speech_hook(); return false;
    }
    g_real_native_announcement_log_speech = reinterpret_cast<NativeAnnouncementLogSpeechFn>(
        g_native_announcement_log_speech_entry.original);
    if (!g_native_announcement_log_speech_entry.install("Native speech production")) {
        uninstall_native_announcement_log_speech_hook(); return false;
    }
    return true;
}
