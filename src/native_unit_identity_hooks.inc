// Capture identities at the native unit formatters, before clipping or drawing.
// The game retains its original strings; the overlay receives owned field data
// and a translation bound to the exact string owner and original bytes.
#include "native_unit_identity_capture.inc"

using NativeUnitIdentityFormatFn = void (*)(void *, NativeString *, bool);
using NativeUnitIdentityNameOnlyFn = void (*)(void *, NativeString *);
using NativeUnitIdentityNameFn = void (*)(const void *, NativeString *);
using NativeUnitIdentityEnglishNameFn = void (*)(const void *, NativeString *, bool, bool);
using NativeUnitIdentityCapitalizeFn = void (*)(NativeString *);

struct NativeUnitIdentityCall {
    uintptr_t unit = 0;
    uintptr_t selected_name = 0;
    NativeUnitIdentityCall *parent = nullptr;
    NativeHistoryName name;
    std::string native_name, native_role;
    std::array<std::string, 7> native_name_words;
    bool native_name_words_valid = false;
    bool name_seen = false, name_failed = false, role_seen = false, name_quoted = false;
    bool publish = true;
    bool announcement_reference = false;
    NativeString *reference_output = nullptr;
    std::vector<NativeUnitReferencePart> reference_parts;
#ifndef _WIN32
    struct Span { size_t first; NativeUnitReferencePart part; };
    std::vector<Span> reference_spans;
    std::string reference_before_capitalization;
#endif
    NativeUnitReferencePart reference_entity;
    bool reference_entity_seen = false;
    bool reference_failed = false;
    bool reference_use_custom = true;
};

// Only a trivial pointer is thread-local: no DLL-retaining TLS destructor.
static thread_local NativeUnitIdentityCall *g_native_unit_identity_call = nullptr;

struct NativeUnitIdentityActiveScope {
    NativeUnitIdentityCall &call;
    explicit NativeUnitIdentityActiveScope(NativeUnitIdentityCall &value) : call(value) {
        call.parent = g_native_unit_identity_call;
        if (call.parent) call.publish = call.publish && call.parent->publish;
        g_native_unit_identity_call = &call;
    }
    ~NativeUnitIdentityActiveScope() { g_native_unit_identity_call = call.parent; }
};

struct NativeUnitIdentityHooks {
    // Role, fallback name, name only, role/status, complete identity, reference,
    // movement reference (article, capitalization, explicit custom-role flag).
    std::array<NativeEntryHook, 7> entries;
    NativeCallHook names;
    NativeUnitIdentityNameFn name = nullptr;
    NativeUnitIdentityEnglishNameFn english_name = nullptr;
    NativeUnitIdentityCapitalizeFn capitalize = nullptr;
    uintptr_t base = 0;
    NativeSearchDestroyFn destroy = nullptr;
    NativeString *(*assign)(NativeString *, const char *, size_t) = nullptr;
    NativeString *(*append)(NativeString *, const char *, size_t) = nullptr;
    const void *(*selected_name)(const void *) = nullptr;
#ifndef _WIN32
    std::vector<NativeInlineObserverHook> observers;
#endif
};
static NativeUnitIdentityHooks g_native_unit_identity_hooks;

#ifdef _WIN32
struct NativeUnitHeaderIdentityHooks {
    NativeCallHook name;
    NativeUnitIdentityEnglishNameFn english_name = nullptr;
    uintptr_t base = 0;
};
static NativeUnitHeaderIdentityHooks g_native_unit_header_identity_hooks;
#endif

static uint64_t current_native_identity_translation_catalog() noexcept {
    return g_overlay.native_identity_translation_catalog_generation();
}

struct NativeUnitIdentityCompletedCache {
    std::mutex mutex;
    std::unordered_map<std::string, std::optional<std::string>> results;
    std::deque<std::string> order;
    size_t bytes = 0;
};
static NativeUnitIdentityCompletedCache g_native_unit_identity_completed;

static void remember_completed_native_unit_identity_translation(const std::string &key,
        const std::optional<std::string> &target) {
    if (key.size() > 8192) return;
    auto &cache = g_native_unit_identity_completed;
    std::lock_guard<std::mutex> lock(cache.mutex);
    if (cache.results.contains(key)) return;
    constexpr size_t byte_limit = 16 * 1024 * 1024;
    const size_t bytes = key.size() + (target ? target->size() : 0);
    if (bytes > byte_limit) return;
    while (!cache.order.empty() &&
            (cache.results.size() >= 4096 || cache.bytes + bytes > byte_limit)) {
        const auto oldest = cache.results.find(cache.order.front());
        if (oldest != cache.results.end()) {
            cache.bytes -= oldest->first.size() +
                (oldest->second ? oldest->second->size() : 0);
            cache.results.erase(oldest);
        }
        cache.order.pop_front();
    }
    cache.bytes += bytes;
    cache.results.emplace(key, target);
    cache.order.push_back(key);
}

static bool native_unit_identity_snapshot_worker_safe(const NativeUnitIdentity &snapshot) {
    return !native_unit_identity_requires_world(snapshot);
}

static std::optional<std::string> publish_native_unit_identity_snapshot(
        NativeUnitIdentity snapshot, uintptr_t output, std::string original,
        uintptr_t unit_owner, bool english_name, bool character_header = false) {
    const auto catalog = g_overlay.native_identity_translation_catalog_generation();
    const std::string key = std::to_string(catalog) + '\x1f' +
        native_unit_identity_cache_key(snapshot);
    std::optional<std::string> translated;
    bool completed = false;
    {
        auto &cache = g_native_unit_identity_completed;
        std::lock_guard<std::mutex> lock(cache.mutex);
        const auto found = cache.results.find(key);
        if (found != cache.results.end()) { translated = found->second; completed = true; }
    }
    if (completed) {
        // A memo hit is one registry transaction. Never expose a temporary
        // native spelling between resetting an owner and publishing its result.
        remember_completed_native_unit_identity_publication(output, original,
            translated ? *translated : native_text_to_utf8(original),
            unit_owner, english_name, character_header, catalog, key);
        return translated;
    }
    const bool authored = snapshot.form == NativeUnitIdentityForm::NameOnly &&
        !snapshot.english_name && snapshot.name.language < 0 && snapshot.name.nickname.empty() &&
        std::all_of(snapshot.name.words.begin(), snapshot.name.words.end(),
            [](const auto &word) { return word.id.empty(); });
    // These unquoted NameOnly publications belong to a captured unit. The
    // Creator-of artifact header and entity/site names keep their own policy.
    // A numbered candidate needs the worker's strict creature dictionary;
    // the native formatter only recognizes the structural boundary here.
    const bool numbered_character = authored && unit_owner && !character_header &&
        snapshot.name.entity_id < 0 && snapshot.name.entity_type < 0 &&
        !snapshot.name.entity_name_current && snapshot.name.site_id < 0 &&
        numbered_creature_given_name_end(trim_view(snapshot.name.first_name)).has_value();
    if (authored && !numbered_character) {
        // An explicit authored field has a complete legal native result; it
        // does not await a name dictionary or generated-name worker.
        translated = native_text_to_utf8(original);
        remember_completed_native_unit_identity_publication(output, original, *translated,
            unit_owner, english_name, character_header, catalog, key);
        return translated;
    }
    const bool worker_safe = native_unit_identity_snapshot_worker_safe(snapshot);
    auto deferred = worker_safe ? std::shared_ptr<const NativeUnitIdentity>{}
        : std::make_shared<const NativeUnitIdentity>(std::move(snapshot));
    const auto token = begin_native_unit_identity_publication(output, original,
        unit_owner, english_name, character_header, catalog, key, std::move(deferred));
    if (!token.owner) return std::nullopt;
    if (!worker_safe) return std::nullopt;
    // The callback retains no unit/output pointer for dereferencing. Its
    // original bytes and complete selected native fields own the whole job.
    queue_native_identity_translation_job(
        [snapshot = std::move(snapshot), original = std::move(original), key,
                catalog, token]() mutable {
            if (catalog != g_overlay.native_identity_translation_catalog_generation()) return;
            std::optional<std::string> target;
            try {
                target = g_overlay.translate_native_unit_identity(snapshot);
            }
            catch (const DfhackTranslationNeedsWorld &) {
                // Live office/territory lookups remain owned by SDL replay.
                // They are not a completed untranslated dictionary result.
                return;
            }
            if (target && target->empty()) target.reset();
            if (catalog != g_overlay.native_identity_translation_catalog_generation()) return;
            remember_completed_native_unit_identity_translation(key, target);
            finish_native_unit_identity_publication(token, original,
                target ? *target : native_text_to_utf8(original));
        }, "unit:" + std::to_string(output));
    return std::nullopt;
}

static std::optional<NativeUnitIdentitySource> prepare_native_unit_identity_source_binding(
        std::string_view source, uintptr_t owner, std::string_view semantic_key,
        const NativeUnitIdentitySource *captured) {
    if (native_unit_identity_rendering()) return std::nullopt;
    auto binding = native_unit_identity_source_binding(source, owner, semantic_key);
    if (!binding && captured && captured->source == source &&
            captured->semantic_key == semantic_key) binding = *captured;
    if (!binding || binding->ready) return binding;
    if (binding->catalog != g_overlay.native_identity_translation_catalog_generation()) return binding;
    const NativeUnitIdentityPublication token{
        owner, binding->publication_epoch, binding->pending_witness, binding->catalog};
    std::optional<std::string> target;
    bool completed = false;
    {
        auto &cache = g_native_unit_identity_completed;
        std::lock_guard<std::mutex> lock(cache.mutex);
        const auto found = cache.results.find(binding->semantic_key);
        if (found != cache.results.end()) { target = found->second; completed = true; }
    }
    // The draw owns this result even when the native producer has reused or
    // destroyed its string. The complete semantic key also recovers worker
    // results whose original publication token no longer owns that address.
    try {
        if (!completed) {
            if (!binding->deferred_snapshot) return binding;
            target = g_overlay.translate_native_unit_identity(*binding->deferred_snapshot);
        }
        if (target && target->empty()) target.reset();
        if (token.catalog == g_overlay.native_identity_translation_catalog_generation()) {
            if (!completed)
                remember_completed_native_unit_identity_translation(binding->semantic_key, target);
            finish_native_unit_identity_publication(token, binding->semantic_source,
                target ? *target : native_text_to_utf8(binding->semantic_source));
            binding->target = !target || *target == native_text_to_utf8(binding->semantic_source)
                ? native_text_to_utf8(binding->source) : *target;
            binding->ready = true;
            binding->pending_witness = 0;
            binding->deferred_snapshot.reset();
        }
    } catch (const DfhackTranslationNeedsWorld &) {}
    return binding;
}

static void capture_native_unit_identity_name_fields(const void *name,
        const NativeString *output) noexcept {
    auto *call = g_native_unit_identity_call;
    if (!call) return;
    call->name_seen = true;
    try {
        std::string_view source;
        NativeHistoryName snapshot;
        std::array<int32_t, 7> indices;
        if (!native_string_view(output, &source, 262144) ||
            !capture_native_history_name(g_native_unit_identity_hooks.base,
                reinterpret_cast<uintptr_t>(name), snapshot, &indices)) {
            call->name_failed = true;
            return;
        }
        call->native_name_words_valid = capture_native_unit_identity_name_words(
            reinterpret_cast<uintptr_t>(name), snapshot, call->native_name_words, &indices);
        call->name = std::move(snapshot);
        call->native_name.assign(source);
    } catch (...) { call->name_failed = true; }
}

static void capture_native_unit_identity_name(const void *name, NativeString *output) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_native_unit_identity_hooks.name(name, output); });
    capture_native_unit_identity_name_fields(name, output);
}

static void capture_native_unit_identity_quoted_name(const void *name,
        NativeString *output, bool quoted) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_native_unit_identity_hooks.name(name, output); });
    capture_native_unit_identity_name_fields(name, output);
    if (g_native_unit_identity_call) g_native_unit_identity_call->name_quoted = quoted;
}

static void capture_native_unit_identity_english_name(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_unit_identity_hooks.english_name(name, output, first, second);
    });
    capture_native_unit_identity_name_fields(name, output);
}

// The Companions historical-figure branch bypasses all unit formatters.
// Capture its selected language_name before the caller copies and clips it.
static void capture_native_companion_english_name(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_unit_identity_hooks.english_name(name, output, first, second);
    });
    try {
        std::string_view source;
        if (!g_overlay.translation_enabled() ||
                !native_string_view(output, &source, 262144) || source.empty()) return;
        NativeUnitIdentity snapshot;
        std::array<int32_t, 7> indices;
        if (!capture_native_history_name(g_native_unit_identity_hooks.base,
                reinterpret_cast<uintptr_t>(name), snapshot.name, &indices)) return;
        snapshot.native_name_words_valid = capture_native_unit_identity_name_words(
            reinterpret_cast<uintptr_t>(name), snapshot.name,
            snapshot.native_name_words, &indices);
        snapshot.native_name.assign(source);
        snapshot.form = NativeUnitIdentityForm::NameOnly;
        snapshot.english_name = true;
        publish_native_unit_identity_snapshot(std::move(snapshot),
            reinterpret_cast<uintptr_t>(output), std::string(source), 0, true);
    } catch (...) {}
}

// Groups formats historical_entity.name directly, rather than a unit name.
// This verified supplier owns the entity at name-0x20, including signed kinds
// handled by the page's default branch. Keep that actual
// identity instead of resolving the displayed spelling against every entity.
static void capture_native_character_group_english_name(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_unit_identity_hooks.english_name(name, output, first, second);
    });
    try {
        std::string_view source;
        const uintptr_t address = reinterpret_cast<uintptr_t>(name);
        const uintptr_t base = g_native_unit_identity_hooks.base;
        if (!g_overlay.translation_enabled() || address < 0x20 ||
                !native_string_view(output, &source, 262144) || source.empty()) return;
        NativeUnitIdentity snapshot;
        if (!capture_native_history_name(base, address, snapshot.name) ||
                !capture_native_history_entity_name_context(base, address - 0x20,
                    snapshot.name, true, nullptr, true)) return;
        snapshot.native_name.assign(source);
        snapshot.form = NativeUnitIdentityForm::NameOnly;
        snapshot.english_name = true;
        // Entity naming can read current world relationships. The existing
        // publisher retains this owned snapshot for SDL's deferred replay.
        publish_native_unit_identity_snapshot(std::move(snapshot),
            reinterpret_cast<uintptr_t>(output), std::string(source), 0, true);
    } catch (...) {}
}

// Only the verified pet naming response calls this wrapper. Its English
// formatter still supplies a typed language_name, including authored names.
static void capture_native_announcement_pet_english_name(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_unit_identity_hooks.english_name(name, output, first, second);
    });
    try {
        std::string_view source;
        NativeUnitIdentity identity;
        if (!native_string_view(output, &source, 262144) || source.empty()) return;
        identity.form = NativeUnitIdentityForm::NameOnly;
        identity.native_name.assign(source);
        identity.english_name = true;
        const auto address = reinterpret_cast<uintptr_t>(name);
        if (!capture_native_history_name(g_native_unit_identity_hooks.base, address, identity.name)) {
            remember_native_announcement_pet_name(source, nullptr);
            return;
        }
        identity.native_name_words_valid = capture_native_unit_identity_name_words(
            address, identity.name, identity.native_name_words);
        remember_native_announcement_pet_name(source, &identity);
    } catch (...) {}
}

#ifdef _WIN32
static uintptr_t native_character_header_unit() {
    const auto sheet = g_native_character_drawing_sheet;
    uint8_t open = 0;
    int32_t kind = -1, id = -1;
    if (!sheet || !native_history_copy(native_character_sheet_field(sheet, 0, "open", 1), open) || !open ||
            !native_history_copy(native_character_sheet_field(sheet, 8, "active_sheet", 4), kind) || kind != 0 ||
            !native_history_copy(native_character_sheet_field(sheet, 0xc, "active_id", 4), id) || id < 0) return 0;
    NativeBorrowedVector<uintptr_t> units;
    if (!native_history_read_vector(native_history_global(0x23e50b0), units) || units.size() > 1000000) return 0;
    static constexpr native_history_abi::FieldOffset unit_id{0x130, "unit", "id"};
    size_t first = 0, last = units.size();
    while (first < last) {
        const auto middle = first + (last - first) / 2;
        const auto unit = native_history_vector_at(units, middle);
        int32_t candidate = -1;
        if (!unit || !native_history_copy(unit_id.address(unit, 0, 4, 4), candidate)) return 0;
        if (candidate == id) return unit;
        if (candidate < id) first = middle + 1;
        else last = middle;
    }
    return 0;
}
#endif

static void capture_native_unit_header_english_name(const void *name,
        NativeString *output, bool first,
#ifdef _WIN32
        bool second) {
#else
        void *unit) {
#endif
    NativeInputCallbackScope callback;
    callback.call_native([&] {
#ifdef _WIN32
        g_native_unit_header_identity_hooks.english_name(name, output, first, second);
#else
        g_native_unit_identity_hooks.english_name(name, output, first, false);
#endif
    });
    try {
        if (!g_overlay.translation_enabled()) return;
        std::string_view source;
        if (!native_string_view(output, &source, 262144) || source.empty()) return;
        const std::string original(source);
        NativeUnitIdentity snapshot;
        std::array<int32_t, 7> indices;
        // The sheet selects the visible language_name itself and bypasses the
        // unit formatters. Capture that exact field without entering or altering
        // a unit TLS scope. Its separate addchar calls own the outer quotes.
        // This dedicated formatter already proves an English character name.
        // Optional native metadata must not block translation of that text.
        if (capture_native_history_name(
#ifdef _WIN32
                g_native_unit_header_identity_hooks.base,
#else
                g_native_unit_identity_hooks.base,
#endif
                reinterpret_cast<uintptr_t>(name), snapshot.name, &indices))
            snapshot.native_name_words_valid = capture_native_unit_identity_name_words(
                reinterpret_cast<uintptr_t>(name), snapshot.name,
                snapshot.native_name_words, &indices);
        snapshot.native_name = original;
        snapshot.form = NativeUnitIdentityForm::NameOnly;
        snapshot.english_name = true;
#ifdef _WIN32
        const auto unit = native_character_header_unit();
#endif
        publish_native_unit_identity_snapshot(std::move(snapshot),
            reinterpret_cast<uintptr_t>(output), original,
#ifdef _WIN32
            unit, true, true);
#else
            reinterpret_cast<uintptr_t>(unit), true, true);
#endif
    } catch (...) {
        // Never unwind across the sheet's native formatter call.
    }
}

static void capture_native_unit_header_creation_name(const void *name, NativeString *output) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_native_unit_identity_hooks.name(name, output); });
    try {
        if (!g_overlay.translation_enabled()) return;
        std::string_view source;
        if (!native_string_view(output, &source, 262144) || source.empty()) return;
        const std::string original(source);
        NativeUnitIdentity snapshot;
        std::array<int32_t, 7> indices;
        // Creator of and unit+0xa08's language_name are separate draws.
        // Capture the selected artifact roots directly, including title-only
        // names that do not follow the two-root personal surname grammar.
        if (capture_native_history_name(g_native_unit_identity_hooks.base,
                reinterpret_cast<uintptr_t>(name), snapshot.name, &indices)) {
            snapshot.native_name_words_valid = capture_native_unit_identity_name_words(
                reinterpret_cast<uintptr_t>(name), snapshot.name,
                snapshot.native_name_words, &indices);
            snapshot.native_name = original;
            snapshot.form = NativeUnitIdentityForm::NameOnly;
            publish_native_unit_identity_snapshot(std::move(snapshot),
                reinterpret_cast<uintptr_t>(output), original,
                reinterpret_cast<uintptr_t>(name), false, true);
            return;
        }
        remember_native_unit_identity(reinterpret_cast<uintptr_t>(output), original,
            native_text_to_utf8(original),
            reinterpret_cast<uintptr_t>(name), false, true);
    } catch (...) {
        // Never unwind across the sheet's native name generator.
    }
}

// The reference formatter does not call any of the five ordinary unit
// formatters. Capture its append boundaries, where DF has already chosen the
// complete profession, caste, curse, visible name and office territory.
using NativeUnitReferenceStringFn = NativeString *(*)(NativeString *, const char *, size_t);

template<NativeUnitReferencePartKind Kind, bool Assign = false>
static void record_native_unit_reference_part(NativeString *output,
        const char *source, size_t length) {
    auto *call = g_native_unit_identity_call;
    if (call && call->reference_output == output) {
        try {
#ifndef _WIN32
            if (Assign) call->reference_spans.clear();
#endif
            if (Assign) call->reference_parts.clear();
            if (length > 262144) call->reference_failed = true;
            else if (length != 0) {
                NativeUnitReferencePart part;
                part.kind = Kind;
                part.source.resize(length);
                if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(source),
                        part.source.data(), length)) call->reference_failed = true;
                else {
                    if constexpr (Kind == NativeUnitReferencePartKind::Name ||
                            Kind == NativeUnitReferencePartKind::GivenName) {
                        if (!call->name_seen || call->name_failed) call->reference_failed = true;
                        part.name = call->name;
                        part.native_name_words = call->native_name_words;
                        part.native_name_words_valid = call->native_name_words_valid;
                    } else if constexpr (Kind == NativeUnitReferencePartKind::Title) {
                        if (!call->reference_entity_seen) call->reference_failed = true;
                        part.name = call->reference_entity.name;
                        part.source = call->reference_entity.source;
                        part.english_name = true;
                    } else if constexpr (Kind == NativeUnitReferencePartKind::Role) {
                        // Movement references include the typed office's
                        // entity suffix inside the role buffer itself.
                        const std::string entity_suffix = " of " + call->reference_entity.source;
                        if (call->reference_entity_seen &&
                                (part.source.ends_with(entity_suffix) ||
                                 part.source.ends_with(entity_suffix + " slave") ||
                                 part.source.ends_with(entity_suffix + " prisoner"))) {
                            part.entity_source = call->reference_entity.source;
                            part.entity_name = call->reference_entity.name;
                            part.entity_present = true;
                        }
                    }
#ifndef _WIN32
                    std::string_view before;
                    if (!native_string_view(output, &before, 262144)) call->reference_failed = true;
                    else call->reference_spans.push_back({Assign ? 0 : before.size(), std::move(part)});
#else
                    call->reference_parts.push_back(std::move(part));
#endif
                }
            }
        } catch (...) { call->reference_failed = true; }
    }
}

template<NativeUnitReferencePartKind Kind, bool Assign = false>
static NativeString *capture_native_unit_reference_part(NativeString *output,
        const char *source, size_t length) {
    NativeInputCallbackScope callback;
    record_native_unit_reference_part<Kind, Assign>(output, source, length);
    NativeString *result = nullptr;
    const auto original = Assign ? g_native_unit_identity_hooks.assign
                                 : g_native_unit_identity_hooks.append;
    callback.call_native([&] { result = original(output, source, length); });
    return result;
}

static void capture_native_unit_reference_entity_name(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_unit_identity_hooks.english_name(name, output, first, second);
    });
    auto *call = g_native_unit_identity_call;
    if (!call || !call->reference_output) return;
    try {
        std::string_view source;
        if (!native_string_view(output, &source, 262144) ||
                !capture_native_history_name(g_native_unit_identity_hooks.base,
                    reinterpret_cast<uintptr_t>(name), call->reference_entity.name)) {
            call->reference_failed = true;
            return;
        }
        const uintptr_t name_address = reinterpret_cast<uintptr_t>(name);
        if (name_address >= 0x20)
            capture_native_history_entity_name_context(g_native_unit_identity_hooks.base,
                name_address - 0x20, call->reference_entity.name);
        call->reference_entity.source.assign(source);
        call->reference_entity_seen = true;
    } catch (...) { call->reference_failed = true; }
}

static std::optional<std::string> finish_native_unit_reference_call(
        NativeUnitIdentityCall &call, NativeString *output,
        std::optional<NativeUnitIdentity> *captured = nullptr) noexcept {
    try {
        std::string_view source;
        if (!native_string_view(output, &source, 262144) ||
                !g_overlay.translation_enabled()) return std::nullopt;
        if (source.empty()) {
            if (call.publish && !call.parent)
                remember_native_announcement_log_speech_identity(call.unit, {}, source);
            // Modes 4/5 copy first_name even when it is empty. Its return is
            // still one of producer 321's two calls, but has no visible field
            // or semantic name to publish.
            if (call.publish && call.announcement_reference)
                remember_native_announcement_unit_reference(source, nullptr);
            return std::nullopt;
        }
        const std::string original(source);
#ifndef _WIN32
        int32_t mode = -1;
        std::string first_name, animation_name;
        uintptr_t animation = 0;
        if (native_history_copy(native_reference_address(g_native_unit_identity_hooks.base,
                native_history_layout::gametype_rva), mode) && (mode == 4 || mode == 5)) {
            native_history_copy_string(native_history_object_member(call.unit,"unit","name.first_name"), first_name);
        }
        if (native_history_copy(native_history_object_field(call.unit,"unit",0xd80),animation) && animation)
            native_history_copy_string(animation+0x20,animation_name);
        if ((!first_name.empty() && original == first_name) ||
                (!animation_name.empty() && original == animation_name)) {
            call.reference_spans.clear();
            NativeUnitReferencePart authored;
            authored.kind = NativeUnitReferencePartKind::Authored;
            authored.source = original;
            call.reference_spans.push_back({0,std::move(authored)});
            call.reference_failed = false;
        }
        // Inline libstdc++ writes and counted appends share the same owned
        // byte offsets. Deferred fields were copied from native temporary
        // buffers, and are accepted only when they occur exactly once.
        for (auto &span : call.reference_spans) {
            if (span.first != SIZE_MAX) continue;
            span.first = original.find(span.part.source);
            if (span.first == std::string::npos && !call.reference_before_capitalization.empty()) {
                const auto &before = call.reference_before_capitalization;
                span.first = before.find(span.part.source);
                if (span.first != std::string::npos &&
                        before.find(span.part.source, span.first + 1) == std::string::npos &&
                        span.first <= original.size() &&
                        span.part.source.size() <= original.size() - span.first)
                    span.part.source = original.substr(span.first, span.part.source.size());
                else call.reference_failed = true;
            } else if (span.first == std::string::npos || original.find(span.part.source,
                    span.first + 1) != std::string::npos) call.reference_failed = true;
        }
        std::sort(call.reference_spans.begin(), call.reference_spans.end(),
            [](const auto &a, const auto &b) { return a.first < b.first; });
        size_t end = 0;
        for (auto &span : call.reference_spans) {
            const auto &before = call.reference_before_capitalization;
            if (span.first <= before.size() && span.part.source.size() <= before.size() - span.first &&
                    before.compare(span.first, span.part.source.size(), span.part.source) == 0 &&
                    span.first <= original.size() && span.part.source.size() <= original.size() - span.first)
                span.part.source = original.substr(span.first, span.part.source.size());
            if (span.first < end || span.first > original.size() ||
                    span.part.source.size() > original.size() - span.first ||
                    original.compare(span.first, span.part.source.size(), span.part.source)) {
                call.reference_failed = true;
                break;
            }
            if (span.first > end) {
                NativeUnitReferencePart literal;
                literal.kind = NativeUnitReferencePartKind::Literal;
                literal.source = original.substr(end, span.first - end);
                call.reference_parts.push_back(std::move(literal));
            }
            end = span.first + span.part.source.size();
            call.reference_parts.push_back(std::move(span.part));
        }
        if (!call.reference_spans.empty() && end < original.size()) {
            NativeUnitReferencePart literal;
            literal.kind = NativeUnitReferencePartKind::Literal;
            literal.source = original.substr(end);
            call.reference_parts.push_back(std::move(literal));
        }
#endif
        std::optional<std::string> translated;
        NativeUnitIdentity snapshot;
        snapshot.form = NativeUnitIdentityForm::Reference;
        snapshot.use_custom = call.reference_use_custom;
        snapshot.reference_parts = std::move(call.reference_parts);
        if (snapshot.reference_parts.size() == 1 &&
                snapshot.reference_parts.front().kind == NativeUnitReferencePartKind::Authored)
            snapshot.reference_parts.front().source = original;
        const bool typed = !call.reference_failed && !snapshot.reference_parts.empty() &&
            capture_native_unit_identity(call.unit, snapshot);
        if (typed) {
            if (call.publish && !call.parent)
                remember_native_announcement_log_speech_identity(call.unit, snapshot, original);
            if (captured) *captured = snapshot;
            if (call.publish)
                translated = publish_native_unit_identity_snapshot(snapshot,
                    reinterpret_cast<uintptr_t>(output), original, call.unit, false);
            else if (!captured) translated = g_overlay.translate_native_unit_identity(snapshot);
        }
        if (translated && translated->empty()) translated.reset();
        if (call.publish) {
            if (!typed)
                remember_native_unit_identity(reinterpret_cast<uintptr_t>(output), original,
                    native_text_to_utf8(original), call.unit, false);
            if (call.announcement_reference)
                remember_native_announcement_unit_reference(original, typed ? &snapshot : nullptr);
        }
        return translated;
    } catch (...) {
        // The overlay never changes DF's reference strings or visibility.
    }
    return std::nullopt;
}

// Replay the already installed reference formatter into its own temporary.
// This reads the game's selected identity, RAW role, office and WORD fields;
// the returned caption is only an equality witness for a saved report field.
static bool capture_native_announcement_unit_reference(uintptr_t unit,
        std::string &source, NativeUnitIdentity &identity) {
    const auto &hooks = g_native_unit_identity_hooks;
    if (!unit || !hooks.entries[5].installed || !hooks.entries[5].original || !hooks.destroy)
        return false;
    NativeInputCallbackScope callback;
    NativeSearchString output(hooks.destroy);
    NativeUnitIdentityCall call;
    call.unit = unit;
    call.publish = false;
    call.reference_output = &output.value;
    {
        NativeUnitIdentityActiveScope scope(call);
        const auto original = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(hooks.entries[5].original);
        callback.call_native([&] { original(reinterpret_cast<void *>(unit), &output.value); });
    }
    std::string_view native;
    if (!native_string_view(&output.value, &native, 262144)) return false;
    source.assign(native);
    if (native.empty()) return true;
    std::optional<NativeUnitIdentity> captured;
    finish_native_unit_reference_call(call, &output.value, &captured);
    if (!captured) return false;
    identity = std::move(*captured);
    return true;
}

static void capture_native_unit_reference(void *unit, NativeString *output) {
    NativeInputCallbackScope callback;
    NativeUnitIdentityCall call;
    call.unit = reinterpret_cast<uintptr_t>(unit);
    call.announcement_reference = true;
    call.reference_output = output;
    {
        NativeUnitIdentityActiveScope scope(call);
        const auto original = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(
            g_native_unit_identity_hooks.entries[5].original);
        callback.call_native([&] { original(unit, output); });
    }
    finish_native_unit_reference_call(call, output);
}

static void capture_native_identity_capitalization(NativeString *output) {
    NativeInputCallbackScope callback;
    std::optional<NativeUnitIdentitySource> identity;
    try {
        std::string_view source;
        if (native_string_view(output, &source, 262144))
            identity = native_unit_identity_source_binding(source,
                reinterpret_cast<uintptr_t>(output));
    } catch (...) {}
    callback.call_native([&] { g_native_unit_identity_hooks.capitalize(output); });
    if (!identity) return;
    try {
        std::string_view source;
        if (!native_string_view(output, &source, 262144) || source.empty()) return;
        // These verified callers capitalize the same captured NativeString
        // before drawing it. Only its bytes change, not the typed identity.
        rebind_native_unit_identity_capitalization(
            reinterpret_cast<uintptr_t>(output), *identity, source);
    } catch (...) {}
}

static void capture_native_conversation_portrait_capitalization(NativeString *output) {
    capture_native_identity_capitalization(output);
}

// 132e430 has five native arguments. Its fifth stack argument decides whether
// a custom profession replaces the selected RAW/office/status role.
using NativeUnitMovementReferenceFn = void (*)(void *, NativeString *, int32_t, bool, bool);

static uintptr_t native_unit_reference_primary_name(uintptr_t unit) noexcept {
    const native_history_abi::FieldOffset name{8, "unit", "name"};
    return name.address(unit, 0, 1, 120);
}

static void capture_native_unit_reference_selected_name(uintptr_t address) noexcept {
    auto *call = g_native_unit_identity_call;
    if (!call || !call->reference_output) return;
    call->selected_name = address;
    call->name_seen = true;
    try {
        std::array<int32_t, 7> indices;
        if (!capture_native_history_name(g_native_unit_identity_hooks.base,
                address, call->name, &indices)) {
            call->name_failed = true;
            return;
        }
        call->name_failed = false;
        call->native_name_words_valid = capture_native_unit_identity_name_words(
            address, call->name, call->native_name_words, &indices);
    } catch (...) { call->name_failed = true; }
}

static const void *capture_native_unit_movement_selected_name(const void *identity) {
    NativeInputCallbackScope callback;
    const void *result = nullptr;
    const auto original = g_native_unit_identity_hooks.selected_name;
    callback.call_native([&] { result = original(identity); });
    capture_native_unit_reference_selected_name(reinterpret_cast<uintptr_t>(result));
    return result;
}

static NativeString *capture_native_unit_movement_given_name(NativeString *output,
        const char *source, size_t length) {
    NativeInputCallbackScope callback;
    // Recognition can replace the selected linked identity with unit.name.
    // The real assign arguments identify the final first_name storage even
    // when the compiler moves its temporary language_name pointer elsewhere.
    if (auto *call = g_native_unit_identity_call; call && call->reference_output) {
        uintptr_t selected = 0;
        bool ambiguous = false;
        const std::array<uintptr_t, 2> candidates{
            call->selected_name, native_unit_reference_primary_name(call->unit)};
        const native_history_abi::FieldOffset first_name{0, "language_name", "first_name"};
        for (auto candidate : candidates) {
            if (!candidate || candidate == selected) continue;
            const auto address = first_name.address(candidate, 0, sizeof(NativeString), sizeof(NativeString));
            std::string_view actual;
            if (!address || !native_string_view(reinterpret_cast<const NativeString *>(address), &actual, 262144) ||
                    actual.data() != source || actual.size() != length) continue;
            if (selected) { ambiguous = true; break; }
            selected = candidate;
        }
        if (selected && !ambiguous) capture_native_unit_reference_selected_name(selected);
        else { call->name_seen = true; call->name_failed = true; }
    }
    record_native_unit_reference_part<NativeUnitReferencePartKind::GivenName, true>(
        output, source, length);
    NativeString *result = nullptr;
    callback.call_native([&] {
        result = g_native_unit_identity_hooks.assign(output, source, length);
    });
    return result;
}

static void capture_native_unit_movement_reference(void *unit, NativeString *output,
        int32_t article, bool capitalize, bool use_custom) {
    NativeInputCallbackScope callback;
    NativeUnitIdentityCall call;
    call.unit = reinterpret_cast<uintptr_t>(unit);
    call.reference_output = output;
    call.reference_use_custom = use_custom;
    {
        NativeUnitIdentityActiveScope scope(call);
        capture_native_unit_reference_selected_name(native_unit_reference_primary_name(call.unit));
        const auto original = reinterpret_cast<NativeUnitMovementReferenceFn>(
            g_native_unit_identity_hooks.entries[6].original);
        callback.call_native([&] { original(unit, output, article, capitalize, use_custom); });
    }
    finish_native_unit_reference_call(call, output);
}

static std::optional<NativeAnnouncementLogSpeechHeader> native_announcement_log_speech_header(
        const NativeAnnouncementLogDocument &document) {
#ifndef _WIN32
    // This replay's five-argument speech call is proved by the PE wrapper.
    // ELF keeps its existing complete speech translation until that call's
    // ABI and arguments have their own retained native evidence.
    (void)document;
    return std::nullopt;
#else
    const auto &report = document.report;
    if ((report.type != 163 && report.type != 177) || report.identity[4] < 0 ||
            report.source.empty() || !document.world) return std::nullopt;
    uintptr_t world = 0, unit = 0;
    if (!native_history_copy(native_history_global(0x24ebb58), world) ||
            world != document.world) return std::nullopt;
    size_t id_offset = SIZE_MAX;
    for (const auto &field : native_history_layout::f_unit_fields)
        if (std::string_view(field.name) == "id") { id_offset = field.native; break; }
    if (id_offset == SIZE_MAX || !native_history_material_find_id(
            native_history_page_address(NativeHistoryPageSymbol::Units), id_offset,
            report.identity[4], unit) || !unit) return std::nullopt;

    const auto body_offset = [&](std::string_view caption) -> std::optional<size_t> {
        if (caption.empty() || report.source.size() < caption.size() + 1 ||
                std::string_view(report.source).substr(0, caption.size()) != caption ||
                report.source[caption.size()] != ':') return std::nullopt;
        const size_t after = caption.size() + 1;
        if (after == report.source.size()) return after;
        if (report.source[after] != ' ') return std::nullopt;
        return after + 1;
    };
    // 684f0e..685000 replaces this exact player's native caption with You.
    // The report's speaker ID and complete literal prefix must both agree;
    // a named unit whose authored caption happens to be You is not a pronoun.
    uintptr_t player = 0;
    if (native_history_copy(native_history_global(0x23e5110), player) && player == unit)
        if (const auto offset = body_offset("You"))
            return NativeAnnouncementLogSpeechHeader{*offset, {}, true};

    // A saved caption may precede a later rename. Prefix equality alone
    // cannot distinguish old "A: B: body" from current caption "A".
    // Admit only a unique ASCII delimiter in the complete old NPC report;
    // colon-bearing captions/bodies keep the existing complete grammar.
    const size_t colon = report.source.find(':');
    if (colon == std::string::npos || report.source.find(':', colon + 1) != std::string::npos)
        return std::nullopt;

    const auto &hooks = g_native_unit_identity_hooks;
    if (!hooks.entries[6].installed || !hooks.entries[6].original || !hooks.destroy)
        return std::nullopt;
    NativeInputCallbackScope callback;
    NativeSearchString output(hooks.destroy);
    NativeUnitIdentityCall call;
    call.unit = unit;
    call.publish = false;
    call.reference_output = &output.value;
    call.reference_use_custom = true;
    {
        NativeUnitIdentityActiveScope scope(call);
        capture_native_unit_reference_selected_name(native_unit_reference_primary_name(unit));
        const auto original = reinterpret_cast<NativeUnitMovementReferenceFn>(hooks.entries[6].original);
        // The speech wrapper's 684b0e..684b23 arguments are exactly
        // (unit, output, -1, true, true). Replaying only this formatter does
        // not dispatch a topic, append a turn or submit another report.
        callback.call_native([&] {
            original(reinterpret_cast<void *>(unit), &output.value, -1, true, true);
        });
    }
    std::string_view caption;
    if (!native_string_view(&output.value, &caption, SIZE_MAX)) return std::nullopt;
    const auto offset = body_offset(caption);
    if (!offset) return std::nullopt;
    std::optional<NativeUnitIdentity> identity;
    finish_native_unit_reference_call(call, &output.value, &identity);
    translation_work_step(0);
    if (!identity) return std::nullopt;
    return NativeAnnouncementLogSpeechHeader{*offset, std::move(identity), false};
#endif
}

static void capture_native_unit_movement_direct_name(const void *name, NativeString *output) {
    capture_native_unit_identity_name(name, output);
    try {
        std::string_view source;
        if (native_string_view(output, &source, 262144))
            record_native_unit_reference_part<NativeUnitReferencePartKind::Name, true>(
                output, source.data(), source.size());
        else if (g_native_unit_identity_call) g_native_unit_identity_call->reference_failed = true;
    } catch (...) {
        if (g_native_unit_identity_call) g_native_unit_identity_call->reference_failed = true;
    }
}

static bool capture_native_unit_identity_direct_field(uintptr_t unit,
        std::string_view source, NativeUnitIdentity &out) {
    const uintptr_t base = g_native_unit_identity_hooks.base;
    int32_t game_type = -1;
    if (!base || !unit || !native_history_copy(native_reference_address(base,
            native_history_layout::gametype_rva), game_type) ||
            (game_type != 4 && game_type != 5)) return false;
    // PE 1330c30:1331239 (Classic 132bba0:132c1a9) returns this exact
    // field before calling any nested name/role formatter. A nonempty
    // animation+0x20 takes priority over unit.name.first_name.
    uintptr_t animation = 0;
    std::string animation_name, first_name;
    if (!native_history_copy(native_history_object_field(unit, "unit", 0xd80), animation) ||
            (animation && !native_history_copy_string(animation + 0x20, animation_name)))
        return false;
    if (animation_name.empty() && !native_history_copy_string(
            native_history_object_member(unit, "unit", "name.first_name"), first_name))
        return false;
    const std::string &selected = animation_name.empty() ? first_name : animation_name;
    if (selected.empty() || source != selected) return false;
    NativeUnitIdentity snapshot;
    snapshot.form = NativeUnitIdentityForm::Reference;
    snapshot.use_custom = false;
    snapshot.animated_name = std::move(animation_name);
    snapshot.undead = animation != 0;
    NativeUnitReferencePart part;
    part.kind = NativeUnitReferencePartKind::Authored;
    part.source.assign(source);
    snapshot.reference_parts.push_back(std::move(part));
    // Only the field copied by the native branch is displayed. Do not add
    // hidden surname/nickname fields, a role, or gender/status modifiers.
    out = std::move(snapshot);
    return true;
}

template<size_t Index>
static std::optional<std::string> finish_native_unit_identity_call(NativeUnitIdentityCall &call,
        NativeString *output, bool option) noexcept {
    bool english_name = Index == 1 && option;
    // A separately drawn profession belongs to the unit but is not its name.
    // Only captured names participate in native/English header pairing.
    uintptr_t name_unit = call.name_seen && !call.native_name.empty() ? call.unit : 0;
    try {
        std::string_view source;
        if (!native_string_view(output, &source, 262144)) return std::nullopt;
        if constexpr (Index == 0) {
            // The parent already owns the unit pointer. Capture the actual
            // nested role result; never run another formatter to infer it.
            call.native_role.assign(source);
            call.role_seen = true;
            if (call.parent && call.parent->unit == call.unit) {
                call.parent->native_role = call.native_role;
                call.parent->role_seen = true;
            }
        }
        if (source.empty()) {
            if (call.publish && !call.parent)
                remember_native_announcement_log_speech_identity(call.unit, {}, source);
            return std::nullopt;
        }
        if (!g_overlay.translation_enabled()) return std::nullopt;
        const std::string original(source);
        std::optional<std::string> translated;
        NativeUnitIdentity snapshot;
        bool typed = !call.name_seen && !call.role_seen &&
            capture_native_unit_identity_direct_field(call.unit, source, snapshot);
        if (typed) {
            name_unit = call.unit;
            english_name = false;
        } else if (!call.name_failed) {
            // Native visibility/identity selection takes priority over the
            // unit's stored name, which may be deliberately hidden or replaced.
            snapshot.name = call.name_seen ? std::move(call.name) : NativeHistoryName{};
            snapshot.native_name = std::move(call.native_name);
            snapshot.native_name_words = std::move(call.native_name_words);
            snapshot.native_name_words_valid = call.native_name_words_valid;
            snapshot.native_role = std::move(call.native_role);
            snapshot.name_quoted = call.name_quoted;
            snapshot.form = Index == 1 ? NativeUnitIdentityForm::Name :
                Index == 2 ? NativeUnitIdentityForm::NameOnly :
                Index == 4 ? NativeUnitIdentityForm::Full : NativeUnitIdentityForm::Role;
            snapshot.use_custom = Index == 0 ? option : true;
            snapshot.name_fallback = Index == 1;
            snapshot.english_name = english_name;
            snapshot.show_gender = (Index == 3 || Index == 4) && option;
            snapshot.include_status = Index == 3 || Index == 4;
            // A missing nested role is not permission to parse a displayed
            // caption. Preserve the native result on unsupported branches.
            const bool needs_role = Index == 0 || Index == 3 || Index == 4 ||
                (Index == 1 && snapshot.native_name.empty());
            typed = (!needs_role || call.role_seen) &&
                capture_native_unit_identity(call.unit, snapshot);
        }
        if (typed) {
            if (call.publish && !call.parent)
                remember_native_announcement_log_speech_identity(call.unit, snapshot, original);
            if (call.publish)
                translated = publish_native_unit_identity_snapshot(std::move(snapshot),
                    reinterpret_cast<uintptr_t>(output), original, name_unit, english_name);
            else translated = g_overlay.translate_native_unit_identity(snapshot);
        }
        // Unsupported native branches can leave the semantic name/role
        // fields empty even though the formatter produced a visible string.
        // Treat that as a capture failure, including disposable references.
        if (translated && translated->empty()) translated.reset();
        if (call.publish && !typed)
            remember_native_unit_identity(reinterpret_cast<uintptr_t>(output),
                original, translated ? *translated : native_text_to_utf8(original),
                name_unit, english_name);
        return translated;
    } catch (...) {
        // Capture failure never modifies a unit, its strings, or game control flow.
    }
    return std::nullopt;
}

// A retained look record owns a unit ID even after transient formatter
// bindings expire. Recover only that record's exact fortress caption; the
// disposable formatter and its nested calls publish no aliases or owners.
static std::optional<NativeUnitIdentitySource> recover_native_map_hover_unit_identity(
        int32_t unit_id, std::string_view expected) {
    const auto &hooks = g_native_unit_identity_hooks;
    if (unit_id < 0 || expected.empty() || expected.size() > 65536 ||
            !hooks.entries[4].installed || !hooks.entries[4].original ||
            !hooks.destroy) return std::nullopt;
    try {
        uintptr_t unit = 0;
        if (!native_history_material_find_id(native_history_global(0x23e50b0),
                0x130, unit_id, unit) || !unit) return std::nullopt;
        const auto catalog = current_native_identity_translation_catalog();
        NativeUnitIdentityRenderScope identity_scope;
        NativeInputCallbackScope callback;
        NativeSearchString output(hooks.destroy);
        NativeUnitIdentityCall call;
        call.unit = unit;
        call.publish = false;
        {
            NativeUnitIdentityActiveScope scope(call);
            const auto original = reinterpret_cast<NativeUnitIdentityFormatFn>(
                hooks.entries[4].original);
            callback.call_native([&] {
                original(reinterpret_cast<void *>(unit), &output.value, false);
            });
        }
        std::string_view source;
        if (!native_string_view(&output.value, &source, 65536) || source != expected)
            return std::nullopt;
        auto target = finish_native_unit_identity_call<4>(call, &output.value, false);
        if (!target || target->empty() ||
                catalog != current_native_identity_translation_catalog()) return std::nullopt;
        NativeUnitIdentitySource binding;
        binding.source.assign(expected);
        binding.semantic_source = binding.source;
        binding.target = std::move(*target);
        binding.unit_owner = unit;
        binding.ready = true;
        binding.catalog = catalog;
        return binding;
    } catch (...) {
        // Unsupported or changed records remain unbound rather than borrowing
        // a same-spelling identity from another panel.
    }
    return std::nullopt;
}

// Cached UI strings can outlive the frame and NativeString that first
// formatted them. Resolve their explicit unit/name reference through the same
// native selection and field renderer, without guessing from the cached text.
static std::optional<std::string> native_fortress_alert_unit_name(uintptr_t unit) {
    const auto &hooks = g_native_unit_identity_hooks;
    if (!unit || !hooks.entries[5].installed || !hooks.entries[5].original ||
            !hooks.capitalize || !hooks.destroy) return std::nullopt;
    NativeInputCallbackScope callback;
    NativeSearchString output(hooks.destroy);
    NativeUnitIdentityCall call;
    call.unit = unit;
    call.publish = false;
    call.reference_output = &output.value;
    {
        NativeUnitIdentityActiveScope scope(call);
        const auto original = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(
            hooks.entries[5].original);
        callback.call_native([&] { original(reinterpret_cast<void *>(unit), &output.value); });
        callback.call_native([&] { hooks.capitalize(&output.value); });
    }
    std::string_view source;
    if (!native_string_view(&output.value, &source, 65536))
        return std::nullopt;
    return std::string(source);
}

static std::optional<std::string> translate_native_unit_identity_reference(
        uintptr_t unit, uintptr_t name, std::string_view expected,
        bool capitalized_reference) {
    const auto &hooks = g_native_unit_identity_hooks;
    if (!hooks.base || !hooks.name || expected.empty()) return std::nullopt;
    NativeInputCallbackScope callback;
    NativeSearchString output(hooks.destroy);
    if (unit && capitalized_reference) {
        // Fortress alert summaries explicitly call 1331500 followed by
        // 52d650. Replay that same selected reference into a disposable
        // string, rather than inferring its typed name from cached rows.
        if (!hooks.entries[5].installed || !hooks.entries[5].original ||
                !hooks.capitalize) return std::nullopt;
        NativeUnitIdentityCall call;
        call.unit = unit;
        call.publish = false;
        call.reference_output = &output.value;
        {
            NativeUnitIdentityActiveScope scope(call);
            const auto original = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(
                hooks.entries[5].original);
            callback.call_native([&] { original(reinterpret_cast<void *>(unit), &output.value); });
#ifndef _WIN32
            std::string_view before;
            if (native_string_view(&output.value, &before, 65536))
                call.reference_before_capitalization.assign(before);
#endif
            callback.call_native([&] { hooks.capitalize(&output.value); });
        }
        std::string_view source;
        if (!native_string_view(&output.value, &source, 65536))
            return std::nullopt;
        // The alert wrapper can insert a space inside an overlong word.
        // Its unit pointer already fixes identity; compare every non-space
        // byte with the cached wrap without promoting that added separator
        // to a field in the native name.
        size_t original_at = 0, expected_at = 0;
        while (true) {
            while (original_at < source.size() && std::isspace(
                    static_cast<unsigned char>(source[original_at]))) ++original_at;
            while (expected_at < expected.size() && std::isspace(
                    static_cast<unsigned char>(expected[expected_at]))) ++expected_at;
            if (original_at == source.size() || expected_at == expected.size()) break;
            if (source[original_at++] != expected[expected_at++]) return std::nullopt;
        }
        if (original_at != source.size() || expected_at != expected.size())
            return std::nullopt;
        return finish_native_unit_reference_call(call, &output.value);
    }
    if (unit) {
        if (!hooks.entries[4].installed || !hooks.entries[4].original) return std::nullopt;
        NativeUnitIdentityCall call;
        call.unit = unit;
        call.publish = false;
        {
            NativeUnitIdentityActiveScope scope(call);
            const auto original = reinterpret_cast<NativeUnitIdentityFormatFn>(hooks.entries[4].original);
            callback.call_native([&] { original(reinterpret_cast<void *>(unit), &output.value, false); });
        }
        std::string_view source;
        if (!native_string_view(&output.value, &source, 65536)) return std::nullopt;
        if (source != expected) {
            // Cached relation references use 1331500 rather than the ordinary
            // name-comma-role formatter. Replay that exact native selection
            // into a disposable string, retaining its hidden identity rules.
            if (!hooks.entries[5].installed || !hooks.entries[5].original) return std::nullopt;
            NativeSearchString reference_output(hooks.destroy);
            NativeUnitIdentityCall reference_call;
            reference_call.unit = unit;
            reference_call.publish = false;
            reference_call.reference_output = &reference_output.value;
            {
                NativeUnitIdentityActiveScope scope(reference_call);
                const auto original = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(
                    hooks.entries[5].original);
                callback.call_native([&] {
                    original(reinterpret_cast<void *>(unit), &reference_output.value);
                });
            }
            if (!native_string_view(&reference_output.value, &source, 65536) || source != expected)
                return std::nullopt;
            return finish_native_unit_reference_call(reference_call, &reference_output.value);
        }
        // Do not register the disposable string as a future draw owner.
        return finish_native_unit_identity_call<4>(call, &output.value, false);
    }
    if (!name) return std::nullopt;
    callback.call_native([&] { hooks.name(reinterpret_cast<const void *>(name), &output.value); });
    std::string_view source;
    NativeUnitIdentity snapshot;
    if (!native_string_view(&output.value, &source, 65536) || source != expected ||
            !capture_native_history_name(hooks.base, name, snapshot.name)) return std::nullopt;
    snapshot.native_name_words_valid = capture_native_unit_identity_name_words(
        name, snapshot.name, snapshot.native_name_words);
    snapshot.native_name.assign(source);
    snapshot.form = NativeUnitIdentityForm::NameOnly;
    auto target = g_overlay.translate_native_unit_identity(snapshot);
    if (target && target->empty()) target.reset();
    return target;
}

template<size_t Index>
static void capture_native_unit_identity_format(void *unit, NativeString *output, bool option) {
    NativeInputCallbackScope callback;
    NativeUnitIdentityCall call;
    call.unit = reinterpret_cast<uintptr_t>(unit);
    {
        NativeUnitIdentityActiveScope scope(call);
        const auto original = reinterpret_cast<NativeUnitIdentityFormatFn>(
            g_native_unit_identity_hooks.entries[Index].original);
        callback.call_native([&] { original(unit, output, option); });
    }
    finish_native_unit_identity_call<Index>(call, output, option);
}

static void capture_native_unit_identity_name_only(void *unit, NativeString *output) {
    NativeInputCallbackScope callback;
    NativeUnitIdentityCall call;
    call.unit = reinterpret_cast<uintptr_t>(unit);
    {
        NativeUnitIdentityActiveScope scope(call);
        const auto original = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(
            g_native_unit_identity_hooks.entries[2].original);
        callback.call_native([&] { original(unit, output); });
    }
    finish_native_unit_identity_call<2>(call, output, false);
}

static bool native_complete_unit_identity_hooks_active() {
#ifndef _WIN32
    if (std::any_of(g_native_unit_identity_hooks.observers.begin(),
            g_native_unit_identity_hooks.observers.end(),
            [](const auto &observer) { return observer.active(); })) return true;
#endif
    return g_native_unit_identity_hooks.names.active() ||
        std::any_of(g_native_unit_identity_hooks.entries.begin(),
            g_native_unit_identity_hooks.entries.end(),
            [](const auto &entry) { return entry.active(); });
}

static void uninstall_native_complete_unit_identity_hooks() {
    if (!native_callbacks_idle()) return;
    auto &hooks = g_native_unit_identity_hooks;
#ifndef _WIN32
    for (auto it = hooks.observers.rbegin(); it != hooks.observers.rend(); ++it)
        if (!it->uninstall("Native unit reference field restore")) return;
    hooks.observers.clear();
#endif
    for (auto it = hooks.entries.rbegin(); it != hooks.entries.rend(); ++it)
        if (!it->uninstall("Native unit identity formatter restore")) return;
    if (!hooks.names.uninstall("Native unit identity name source restore")) return;
    hooks.destroy = nullptr;
    hooks.assign = hooks.append = nullptr;
    hooks.selected_name = nullptr;
    hooks.name = nullptr;
    hooks.english_name = nullptr;
    hooks.capitalize = nullptr;
    hooks.base = 0;
}

static bool native_unit_identity_hooks_active() {
#ifdef _WIN32
    if (g_native_unit_header_identity_hooks.name.active()) return true;
#endif
    return native_complete_unit_identity_hooks_active();
}

static void uninstall_native_unit_identity_hooks() {
    if (!native_callbacks_idle()) return;
    uninstall_native_complete_unit_identity_hooks();
#ifdef _WIN32
    auto &header = g_native_unit_header_identity_hooks;
    if (!header.name.uninstall("Native character header identity restore") || header.name.active()) return;
    header.english_name = nullptr;
    header.base = 0;
#endif
}

#ifdef _WIN32
static bool install_native_complete_unit_identity_hooks() {
    auto &hooks = g_native_unit_identity_hooks;
    if (hooks.names.installed && std::all_of(hooks.entries.begin(), hooks.entries.end(),
            [](const auto &entry) { return entry.installed; })) return true;
    if (native_complete_unit_identity_hooks_active()) {
        uninstall_native_complete_unit_identity_hooks();
        if (native_complete_unit_identity_hooks_active()) return false;
    }
    hooks.base = native_history_profile_base();
    if (!hooks.base) return false;
    hooks.destroy = reinterpret_cast<NativeSearchDestroyFn>(native_pe_address(hooks.base, 0x6f850));
    hooks.assign = reinterpret_cast<NativeUnitReferenceStringFn>(native_pe_address(hooks.base, 0x6f8d0));
    hooks.append = reinterpret_cast<NativeUnitReferenceStringFn>(native_pe_address(hooks.base, 0x6fa10));
    hooks.selected_name = reinterpret_cast<const void *(*)(const void *)>(native_pe_address(hooks.base, 0xc3a4f0));
    hooks.name = reinterpret_cast<NativeUnitIdentityNameFn>(native_pe_address(hooks.base, 0xa94030));
    hooks.english_name = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(
        native_pe_address(hooks.base, 0xa946e0));
    hooks.capitalize = reinterpret_cast<NativeUnitIdentityCapitalizeFn>(
        native_pe_address(hooks.base, 0x52d650));
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_complete_unit_identity_hooks(); } catch (...) {}
            }
        }
    } guard;
    struct Entry {
        uintptr_t rva;
        std::vector<unsigned char> prefix;
        const void *wrapper;
    };
    // Reference PE 53.16 AMD64. Every prefix ends at a complete instruction
    // before the first relative operand. All argument registers are untouched.
    // These free formatters receive the actual unit in RCX. Retain that
    // declared argument type so discovery can prove saved receiver aliases
    // and named members independently in each executable.
    DFCN_NATIVE_RECEIVER(0x132f980, "unit")
    DFCN_NATIVE_RECEIVER(0x1330260, "unit")
    DFCN_NATIVE_RECEIVER(0x1330500, "unit")
    DFCN_NATIVE_RECEIVER(0x1330880, "unit")
    DFCN_NATIVE_RECEIVER(0x1330c30, "unit")
    DFCN_NATIVE_RECEIVER(0x1331500, "unit")
    DFCN_NATIVE_RECEIVER(0x132e430, "unit")
    const Entry entries[]{
        {0x132f980, {0x48,0x89,0x5c,0x24,0x18},
            reinterpret_cast<const void *>(&capture_native_unit_identity_format<0>)},
        // The three complete nonvolatile PUSH instructions already cover
        // the five-byte entry jump. Replay their independently mapped bytes;
        // the native continuation owns its version's stack allocation.
        {0x1330260, {0x40,0x53,0x56,0x41,0x55},
            reinterpret_cast<const void *>(&capture_native_unit_identity_format<1>)},
        {0x1330500, {0x48,0x89,0x5c,0x24,0x18},
            reinterpret_cast<const void *>(&capture_native_unit_identity_name_only)},
        {0x1330880, {0x48,0x89,0x5c,0x24,0x18},
            reinterpret_cast<const void *>(&capture_native_unit_identity_format<3>)},
        {0x1330c30, {0x48,0x89,0x5c,0x24,0x18},
            reinterpret_cast<const void *>(&capture_native_unit_identity_format<4>)},
        {0x1331500, {0x48,0x89,0x5c,0x24,0x18},
            reinterpret_cast<const void *>(&capture_native_unit_reference)},
        {0x132e430, {0x48,0x89,0x5c,0x24,0x18},
            reinterpret_cast<const void *>(&capture_native_unit_movement_reference)},
    };
    for (size_t i = 0; i < std::size(entries); ++i) {
        const auto &entry = entries[i];
        auto prefix = entry.prefix;
        if (!native_pe_bytes(entry.rva, prefix) ||
                !hooks.entries[i].prepare(reinterpret_cast<unsigned char *>(
                    native_pe_address(hooks.base, entry.rva)),
                    prefix, entry.wrapper, {}, "Native unit identity formatter")) return false;
    }
    // These are the actual language_name calls within the unit-name formatters
    // and sheet header. Call sites leave other consumers' entry signatures
    // intact and preserve disguised/linked identity selection by the game.
    std::vector<NativeCall> names{
        // Groups: historical_entity+0x20, then capitalization of that
        // same output before the native clipping and draw (Classic 179312 /
        // 17931f). The name is an entity field, never a squad.alias.
        {0x179382, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_character_group_english_name)},
        {0x17938f, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_identity_capitalization)},
        // Pet naming response: the producer formats the actual language_name
        // before appending its fixed conversation suffix (Classic 0x1ff07a).
        {0x1ff0ea, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_announcement_pet_english_name)},
        // Conversation portrait: capitalize the same captured reference.
        // Classic CALL 0x866512 is mapped with this real supplier site.
        {0x868c92, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        // Barter capitalizes the captured speaker before appending ': ' to
        // Show, refusal and treasure-return reports. Keep that exact source
        // bound to its native species, office and personal-name fields.
        {0x273c3c, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x274372, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x27445b, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x2745ef, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x277c5e, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x277e9d, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x2786a6, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        {0x278fa6, 0x52d650,
            reinterpret_cast<const void *>(&capture_native_conversation_portrait_capitalization)},
        // The artifact name follows the separately drawn Creator of prefix.
        {0x15d415, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_header_creation_name)},
        {0x1330475, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_unit_identity_english_name)},
        {0x133047c, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x1330707, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x1330720, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x13307a3, 0xa94030,
            // R12B is the game's chosen identity-quote flag; pass it as the
            // wrapper's third argument without changing the native name ABI.
            reinterpret_cast<const void *>(&capture_native_unit_identity_quoted_name),
            {0x45,0x88,0xe0}},
        {0x1330e52, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x1330f86, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_quoted_name),
            {0x45,0x88,0xe0}},
        // Force/deity and ordinary references select their visible name here.
        {0x13317b2, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x133183f, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x13319bb, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x1331a48, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x13333c8, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x1333454, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        // 9bdfb0 appends ` of ` plus an entity's English language_name. Its
        // selected entity must never overwrite the reference's person name.
        {0x9be076, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_entity_name)},
        {0x132ec56, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_identity_name)},
        {0x132eeba, 0xa94030,
            reinterpret_cast<const void *>(&capture_native_unit_movement_direct_name)},
        {0x132e5a0, 0xc3a4f0,
            reinterpret_cast<const void *>(&capture_native_unit_movement_selected_name)},
        // Exact field append sites in 1331500 and 132e430. Keep every site and
        // target literal so native PE mapping also registers the classic build.
        {0x133167e, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal, true>)},
        {0x133187d, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal, true>)},
        {0x1331b12, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal, true>)},
        {0x1332efe, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal, true>)},
        {0x13334db, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Authored, true>)},
        {0x13317cc, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x1331859, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x13319d5, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x1331a62, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x13333e2, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x133346e, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x1331b33, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Authored>)},
        {0x1332f1d, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Curse>)},
        {0x1332fe1, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Curse>)},
        {0x13331a1, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Curse>)},
        {0x1332fa6, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x1333016, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x1333144, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Species>)},
        {0x13331cc, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Role>)},
        {0x1333497, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Title>)},
        {0x132e4cc, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal, true>)},
        {0x132ed96, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal, true>)},
        {0x132eeaa, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_movement_given_name)},
        {0x132f939, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Authored, true>)},
        {0x132ed67, 0x6f8d0,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name, true>)},
        {0x132ede6, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Name>)},
        {0x132edb0, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Role>)},
        {0x132f7fb, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Role>)},
        {0x132efb3, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132efc8, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f001, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f016, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f573, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f628, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f63d, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f685, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f6c9, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f6de, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f710, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f84d, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f8a6, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f8ca, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Literal>)},
        {0x132f776, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Appearance>)},
        {0x132f7cf, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Curse>)},
        {0x132f86a, 0x6fa10,
            reinterpret_cast<const void *>(&capture_native_unit_reference_part<
                NativeUnitReferencePartKind::Curse>)},
    };
    if (!native_reference_calls(names, 0) ||
            !hooks.names.install(hooks.base, names, "Native unit identity name source")) return false;
    for (auto &entry : hooks.entries)
        if (!entry.install("Native unit identity formatter")) return false;
    guard.committed = true;
    return true;
}

static bool install_native_unit_header_identity_hook() {
    auto &header = g_native_unit_header_identity_hooks;
    if (header.name.installed) return true;
    if (header.name.active() &&
            (!header.name.uninstall("Native character header identity restore") || header.name.active()))
        return false;
    header.english_name = nullptr;
    header.base = native_history_profile_base();
    if (!header.base) return false;
    header.english_name = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(
        native_pe_address(header.base, 0xa946e0));
    if (!header.english_name) return false;
    // This source is the actual four-argument English-name formatter in the
    // selected sheet header. Its output is captured before clipping; the
    // shared addst entry recognizes that same string independently of other
    // unit formatter, organization-name and artifact-name call sites.
    std::vector<NativeCall> calls{
        {0x15c18c, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_unit_header_english_name)}};
    if (!native_reference_calls(calls, 0) || !header.name.install(header.base, calls,
            "Native character header identity")) return false;
    log_line("INFO", "Enabled independently bound character header name capture");
    return true;
}

static bool install_native_unit_identity_hooks() {
    bool header_ready = false, complete_ready = false;
    try { header_ready = install_native_unit_header_identity_hook(); } catch (...) {}
    if (!header_ready) {
        auto &header = g_native_unit_header_identity_hooks;
        bool restored = false;
        try { restored = header.name.uninstall("Native character header identity restore"); } catch (...) {}
        if (!restored || header.name.active()) return false;
        header.english_name = nullptr;
        header.base = 0;
        report_native_patch_error("WARN", "Native character header identity",
            "independent formatter call unavailable; native name remains unchanged");
    }
    try { complete_ready = install_native_complete_unit_identity_hooks(); } catch (...) {}
    if (!complete_ready) {
        try { uninstall_native_complete_unit_identity_hooks(); } catch (...) {}
        if (native_complete_unit_identity_hooks_active()) return false;
        report_native_patch_error("WARN", "Native unit identity formatters",
            header_ready ? "complete formatter transaction unavailable; independent header capture remains enabled"
                         : "complete formatter transaction unavailable; native identities remain unchanged");
    }
    return header_ready || complete_ready;
}
#else
#include "native_unit_identity_search_profile_elf.inc"
#endif
