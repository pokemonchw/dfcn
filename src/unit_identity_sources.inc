// These associations are emitted by unit formatters and header name generators
// after reading their semantic fields. Text equality binds a capture; it never determines
// whether a field is a nickname, profession, or species.
static std::string native_text_to_utf8(std::string_view input);
static uint64_t current_native_identity_translation_catalog() noexcept;
static bool native_announcement_log_worker_running() noexcept;
static std::optional<std::string> native_announcement_log_worker_identity_source(
    std::string_view source, uintptr_t owner);
struct NativeUnitIdentitySource {
    std::string source, target;
    uintptr_t unit_owner = 0;
    bool english_name = false;
    bool character_header = false;
    uint64_t pending_witness = 0;
    // Readiness describes the complete result, not whether a worker is queued.
    // The full typed key prevents reusing a name for another semantic source.
    bool ready = true;
    std::string semantic_key;
    uint64_t catalog = 0;
    std::string semantic_source;
    uint64_t publication_epoch = 0;
    std::shared_ptr<const NativeUnitIdentity> deferred_snapshot;
};
static std::mutex g_native_unit_identity_mutex;
static uint64_t g_native_unit_identity_epoch = 0;
static uint64_t g_native_unit_identity_witness = 0;
static std::unordered_map<uintptr_t, NativeUnitIdentitySource> g_native_unit_identity_owners;
static std::unordered_map<std::string, std::optional<std::string>> g_native_unit_identity_sources;
// Pure roster translations can reuse a source within one match pass, but a
// formatter may change its own or a nested name's binding in the same epoch.
// Publish every registry mutation independently of native grid read views.
static std::atomic<uint64_t> g_native_unit_identity_revision{0};
// Frozen announcement inputs own only source aliases, not transient formatter
// addresses or pending owner witnesses. Give those snapshots their actual
// mutation stream so another owner of an existing alias needs no full copy.
static std::atomic<uint64_t> g_native_unit_identity_sources_revision{0};
// Cache identity follows the registry's contents, not the draw epoch. The
// same complete set of semantic bindings gets the same fingerprint on later
// frames; an ambiguous source is distinct from a resolved authored target.
static std::atomic<uint64_t> g_native_unit_identity_context{0};
// Saved announcement fields own their semantic snapshot beyond a draw epoch.
// Their keys include the complete native report, rather than a name spelling.
static std::atomic<uint64_t> g_native_announcement_unit_context{0};
// Generated creature/caste RAW names are world-owned identities as well.
// Readers borrow immutable bytes; only the existing render-side RAW refresh
// reads the native fields that establish GENERATED provenance.
using NativeGeneratedCreatureNames = std::unordered_map<std::string, std::string>;
static std::atomic<std::shared_ptr<const NativeGeneratedCreatureNames>>
    g_native_generated_creature_names;
static std::atomic<uint64_t> g_native_generated_creature_context{0};
static void refresh_native_generated_creature_names();
static void remember_native_announcement_unit_reference(std::string_view source,
    const NativeUnitIdentity *identity);
static void remember_native_announcement_pet_name(std::string_view source,
    const NativeUnitIdentity *identity);
static void prepare_native_announcement_unit_identities(std::string_view source);
static std::optional<std::string> native_announcement_unit_identity_target(
    std::string_view report_source, std::string_view field_source,
    bool *bound = nullptr);
static uint64_t native_announcement_unit_body_context();
struct NativeAnnouncementUnitBodyScope {
    std::pair<std::string, std::string> previous;
    NativeAnnouncementUnitBodyScope(std::string_view report, std::string_view body);
    ~NativeAnnouncementUnitBodyScope();
};
static uint64_t native_identity_source_fingerprint(std::string_view source,
        const std::optional<std::string> &target) {
    uint64_t hash = 14695981039346656037ULL;
    const auto byte = [&](unsigned char value) {
        hash ^= value;
        hash *= 1099511628211ULL;
    };
    const auto text = [&](std::string_view value) {
        uint64_t size = value.size();
        for (unsigned at = 0; at < 8; ++at) { byte(static_cast<unsigned char>(size)); size >>= 8; }
        for (unsigned char ch : value) byte(ch);
    };
    text(source);
    byte(target ? 1 : 0);
    if (target) text(*target);
    return hash;
}
static bool &native_unit_identity_rendering() {
    return reloadable_thread_state<bool, struct NativeUnitIdentityRenderingTag>();
}
static uint64_t native_mission_return_context();
// A complete announcement-log owner supplies its immutable report/world
// identity before any nested grammar callback. Keep this scalar available
// before announcement_capture.inc declares the richer report TLS scope.
static thread_local uint64_t g_native_announcement_log_identity_context = 0;
// A proved announcement item field may reuse a closed parse independently of
// its enclosing report. Only its explicitly owned bindings are visible; a
// live registry binding is a reason to retain the ordinary compatibility path.
struct NativeAnnouncementLogItemFieldBindings {
    std::map<std::string, std::string> owned;
    std::unordered_set<std::string> unbound_queries;
    uint64_t context = 0;
    bool external_dependency = false;
};
static thread_local NativeAnnouncementLogItemFieldBindings *
    g_native_announcement_log_item_field_bindings = nullptr;
static bool native_announcement_log_item_field_active() {
    return g_native_announcement_log_item_field_bindings != nullptr;
}
static void native_announcement_log_item_field_needs_world() {
    if (auto *field = g_native_announcement_log_item_field_bindings)
        field->external_dependency = true;
    throw DfhackTranslationNeedsWorld{};
}
static uint64_t native_identity_translation_context() {
    constexpr uint64_t formatter_scope = 0x9e3779b97f4a7c15ULL;
    if (g_native_announcement_log_item_field_bindings)
        return g_native_announcement_log_item_field_bindings->context ^
            (native_unit_identity_rendering() ? formatter_scope : 0);
    if (g_native_announcement_log_identity_context)
        return g_native_announcement_log_identity_context ^
            native_announcement_unit_body_context() ^
            (native_unit_identity_rendering() ? formatter_scope : 0);
    if (native_announcement_log_worker_running())
        return native_unit_identity_rendering() ? formatter_scope : 1;
    return g_native_unit_identity_context.load(std::memory_order_acquire) ^
        g_native_announcement_unit_context.load(std::memory_order_acquire) ^
        g_native_generated_creature_context.load(std::memory_order_acquire) ^
        native_announcement_unit_body_context() ^
        native_mission_return_context() ^
        (native_unit_identity_rendering() ? formatter_scope : 0);
}

static void clear_native_unit_identities() {
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    g_native_unit_identity_context.store(0, std::memory_order_release);
    g_native_unit_identity_owners.clear();
    if (!g_native_unit_identity_sources.empty())
        g_native_unit_identity_sources_revision.fetch_add(1, std::memory_order_release);
    g_native_unit_identity_sources.clear();
    g_native_unit_identity_epoch = 0;
    g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
}

static void native_unit_identity_begin_epoch_locked(uint64_t epoch) {
    if (g_native_unit_identity_epoch != epoch) {
        g_native_unit_identity_context.store(0, std::memory_order_release);
        g_native_unit_identity_owners.clear();
        if (!g_native_unit_identity_sources.empty())
            g_native_unit_identity_sources_revision.fetch_add(1, std::memory_order_release);
        g_native_unit_identity_sources.clear();
        g_native_unit_identity_epoch = epoch;
        g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
    }
}

static void remember_native_unit_identity_locked(uintptr_t owner, std::string_view source,
        std::string_view resolved_target, uintptr_t unit_owner, bool english_name,
        bool character_header, std::string_view semantic_key = {}, uint64_t catalog = 0,
        std::string_view semantic_source = {}) {
    if (semantic_source.empty()) semantic_source = source;
    const auto previous = g_native_unit_identity_owners.find(owner);
    if (previous != g_native_unit_identity_owners.end() &&
            previous->second.source == source && previous->second.target == resolved_target &&
            previous->second.unit_owner == unit_owner &&
            previous->second.english_name == english_name &&
            previous->second.character_header == character_header &&
            previous->second.ready && previous->second.semantic_key == semantic_key &&
            previous->second.catalog == catalog &&
            previous->second.semantic_source == semantic_source &&
            !previous->second.pending_witness)
        return;
    if (g_native_unit_identity_owners.size() >= 8192 &&
        !g_native_unit_identity_owners.contains(owner)) return;
    g_native_unit_identity_owners[owner] = {
        std::string(source), std::string(resolved_target), unit_owner, english_name,
        character_header, 0, true, std::string(semantic_key), catalog,
        std::string(semantic_source)};
    g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
    uint64_t context = g_native_unit_identity_context.load(std::memory_order_relaxed);
    const auto remember_source = [&](const std::string &key) {
        if (is_bare_pike(key)) return;
        if (g_native_unit_identity_sources.size() >= 16384 &&
                !g_native_unit_identity_sources.contains(key)) return;
        const auto [entry, inserted] = g_native_unit_identity_sources.try_emplace(
            key, resolved_target);
        if (inserted) {
            context ^= native_identity_source_fingerprint(entry->first, entry->second);
            g_native_unit_identity_sources_revision.fetch_add(1, std::memory_order_release);
            g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
        }
        // Ambiguous spelling must not assign one unit's custom name to another
        // unit's species. Their per-draw owner bindings remain authoritative.
        if (!inserted && entry->second && *entry->second != resolved_target) {
            context ^= native_identity_source_fingerprint(entry->first, entry->second);
            entry->second.reset();
            context ^= native_identity_source_fingerprint(entry->first, entry->second);
            g_native_unit_identity_sources_revision.fetch_add(1, std::memory_order_release);
            g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
        }
    };
    remember_source(std::string(source));
    // Whole action templates normalize native spacing before visiting their
    // unit slots. Preserve the formatter's authored fields in the target;
    // the normalized alias is subject to the same ambiguity handling.
    const std::string normalized = normalize_utterance(source);
    if (normalized != source) remember_source(normalized);
    g_native_unit_identity_context.store(context, std::memory_order_release);
}

static void remember_native_unit_identity(uintptr_t owner, std::string_view source,
        std::string_view target, uintptr_t unit_owner = 0, bool english_name = false,
        bool character_header = false) {
    if (!owner || source.empty() || source.size() > 65536 || target.size() > 262144) return;
    const std::string native_target = target.empty() ? native_text_to_utf8(source) : std::string{};
    const std::string_view resolved_target = target.empty() ? std::string_view(native_target) : target;
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    native_unit_identity_begin_epoch_locked(g_embark_item_capture_epoch.load(std::memory_order_acquire));
    remember_native_unit_identity_locked(owner, source, resolved_target, unit_owner,
        english_name, character_header);
}

struct NativeUnitIdentityPublication {
    uintptr_t owner = 0;
    uint64_t epoch = 0, witness = 0, catalog = 0;
};

static void remember_completed_native_unit_identity_publication(uintptr_t owner,
        std::string_view source, std::string_view target, uintptr_t unit_owner,
        bool english_name, bool character_header, uint64_t catalog,
        std::string_view semantic_key) {
    if (!owner || source.empty() || source.size() > 65536 || target.size() > 262144) return;
    const std::string native_target = target.empty() ? native_text_to_utf8(source) : std::string{};
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    if (catalog != current_native_identity_translation_catalog()) return;
    native_unit_identity_begin_epoch_locked(g_embark_item_capture_epoch.load(std::memory_order_acquire));
    remember_native_unit_identity_locked(owner, source,
        target.empty() ? std::string_view(native_target) : target, unit_owner,
        english_name, character_header, semantic_key, catalog);
}

static NativeUnitIdentityPublication begin_native_unit_identity_publication(
        uintptr_t owner, std::string_view source, uintptr_t unit_owner,
        bool english_name, bool character_header, uint64_t catalog,
        std::string_view semantic_key,
        std::shared_ptr<const NativeUnitIdentity> deferred_snapshot = {}) {
    if (!owner || source.empty() || source.size() > 65536) return {};
    const std::string target = native_text_to_utf8(source);
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    if (catalog != current_native_identity_translation_catalog()) return {};
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    std::optional<NativeUnitIdentitySource> retained;
    const auto previous = g_native_unit_identity_owners.find(owner);
    if (previous != g_native_unit_identity_owners.end() &&
            previous->second.semantic_source == source && previous->second.unit_owner == unit_owner &&
            previous->second.english_name == english_name &&
            previous->second.character_header == character_header &&
            previous->second.catalog == catalog && previous->second.semantic_key == semantic_key) {
        if (previous->second.ready) retained = previous->second;
        else if (g_native_unit_identity_epoch == epoch && previous->second.source == source &&
                previous->second.pending_witness)
            return {owner, epoch, previous->second.pending_witness, catalog};
    }
    native_unit_identity_begin_epoch_locked(epoch);
    if (retained) {
        const std::string retained_target = retained->target == native_text_to_utf8(retained->source)
            ? native_text_to_utf8(source) : retained->target;
        remember_native_unit_identity_locked(owner, source, retained_target, unit_owner,
            english_name, character_header, semantic_key, catalog);
        return {};
    }
    if (g_native_unit_identity_owners.size() >= 8192 &&
            !g_native_unit_identity_owners.contains(owner)) return {};
    const auto witness = ++g_native_unit_identity_witness;
    g_native_unit_identity_owners[owner] = {
        std::string(source), target, unit_owner, english_name, character_header,
        witness, false, std::string(semantic_key), catalog, std::string(source), epoch,
        std::move(deferred_snapshot)};
    // A pending native spelling is an owner witness, not a settled global
    // alias. Publishing it as an alias would mark its eventual Chinese result
    // ambiguous even though both came from the same captured identity.
    g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
    return {owner, epoch, witness, catalog};
}

static void finish_native_unit_identity_publication(NativeUnitIdentityPublication token,
        std::string_view original, std::string_view translated) {
    if (!token.owner || translated.size() > 262144) return;
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    if (token.catalog != current_native_identity_translation_catalog() ||
            token.epoch != g_native_unit_identity_epoch ||
            token.epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return;
    const auto found = g_native_unit_identity_owners.find(token.owner);
    if (found == g_native_unit_identity_owners.end() ||
            found->second.pending_witness != token.witness) return;
    const auto binding = found->second;
    const std::string target = translated.empty() || translated == native_text_to_utf8(original)
        ? native_text_to_utf8(binding.source) : std::string(translated);
    remember_native_unit_identity_locked(token.owner, binding.source, target,
        binding.unit_owner, binding.english_name, binding.character_header,
        binding.semantic_key, binding.catalog, binding.semantic_source);
}

static void rebind_native_unit_identity_capitalization(uintptr_t owner,
        const NativeUnitIdentitySource &previous, std::string_view source) {
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    const auto found = g_native_unit_identity_owners.find(owner);
    if (g_native_unit_identity_epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
            found == g_native_unit_identity_owners.end() ||
            found->second.source != previous.source ||
            found->second.pending_witness != previous.pending_witness ||
            found->second.semantic_key != previous.semantic_key ||
            found->second.catalog != previous.catalog) return;
    // Only the native capitalization caller may rebind these bytes. Its
    // operation changes neither the captured name fields nor their meaning.
    const std::string target = found->second.target == native_text_to_utf8(previous.source)
        ? native_text_to_utf8(source) : found->second.target;
    if (found->second.ready) {
        const auto binding = found->second;
        remember_native_unit_identity_locked(owner, source, target, binding.unit_owner,
            binding.english_name, binding.character_header, binding.semantic_key,
            binding.catalog, binding.semantic_source);
        return;
    }
    found->second.source.assign(source);
    found->second.target = target;
    g_native_unit_identity_revision.fetch_add(1, std::memory_order_release);
}

static std::optional<NativeUnitIdentitySource> native_unit_identity_source_binding(
        std::string_view source, uintptr_t owner, std::string_view semantic_key = {}) {
    if (!owner || native_unit_identity_rendering()) return std::nullopt;
    if (native_announcement_log_worker_running()) {
        (void)native_announcement_log_worker_identity_source(source, owner);
        return std::nullopt;
    }
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    const auto found = g_native_unit_identity_owners.find(owner);
    if (found == g_native_unit_identity_owners.end() || found->second.source != source ||
            (!semantic_key.empty() && found->second.semantic_key != semantic_key))
        return std::nullopt;
    return found->second;
}

// Only SDL's pre-draw path may resolve a deferred live title. Ordinary owned
// names keep their nonblocking worker path and return their current readiness.
static std::optional<NativeUnitIdentitySource> prepare_native_unit_identity_source_binding(
    std::string_view source, uintptr_t owner, std::string_view semantic_key = {},
    const NativeUnitIdentitySource *captured = nullptr);

static std::optional<std::string> native_unit_identity_source_target(
        std::string_view source, uintptr_t owner = 0) {
    // A unit and a weapon can publish identical bytes in the same frame.
    if (!owner && is_bare_pike(source)) return std::nullopt;
    if (native_unit_identity_rendering()) return std::nullopt;
    if (auto *field = g_native_announcement_log_item_field_bindings) {
        if (owner) native_announcement_log_item_field_needs_world();
        const std::string key(source);
        if (const auto found = field->owned.find(key); found != field->owned.end())
            return found->second;
        if (native_announcement_log_worker_running()) {
            if (native_announcement_log_worker_identity_source(source, 0))
                native_announcement_log_item_field_needs_world();
            field->unbound_queries.insert(key);
            return std::nullopt;
        }
        std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
        // Even an ambiguous entry is live semantic input, rather than proof
        // that this spelling belongs to the saved field's native identity.
        if (g_native_unit_identity_sources.contains(key)) native_announcement_log_item_field_needs_world();
        field->unbound_queries.insert(key);
        return std::nullopt;
    }
    if (native_announcement_log_worker_running())
        return native_announcement_log_worker_identity_source(source, owner);
    if (owner) {
        if (const auto binding = native_unit_identity_source_binding(source, owner))
            return binding->ready ? std::optional<std::string>(binding->target) : std::nullopt;
        return std::nullopt;
    }
    std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
    const auto found = g_native_unit_identity_sources.find(std::string(source));
    if (found == g_native_unit_identity_sources.end()) return std::nullopt;
    return found->second ? found->second : std::optional<std::string>(native_text_to_utf8(source));
}

struct NativeUnitIdentityRenderScope {
    bool previous = native_unit_identity_rendering();
    NativeUnitIdentityRenderScope() { native_unit_identity_rendering() = true; }
    ~NativeUnitIdentityRenderScope() { native_unit_identity_rendering() = previous; }
};
