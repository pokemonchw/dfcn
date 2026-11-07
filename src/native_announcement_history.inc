// Borrowed native fields only. Layouts come from the same generated ABI
// declarations as historical records; no per-host announcement algorithm.
static void remember_native_announcement_kinship_parent(uintptr_t parent);
static bool native_announcement_display_tail(std::vector<uintptr_t> &records) {
    NativeBorrowedVector<uintptr_t> native;
    if (!native_history_read_vector(native_history_global(0x23d14f0 + 0x112378), native))
        return false;
    const size_t count = std::min(native.size(), size_t{10});
    records.resize(count);
    return !count || native_history_copy_bytes(reinterpret_cast<uintptr_t>(native.begin) +
        (native.size() - count) * sizeof(uintptr_t), records.data(), count * sizeof(uintptr_t));
}

static bool native_announcement_current_world(uintptr_t &world) {
    return native_history_copy(native_history_global(0x24ebb58), world);
}

static bool native_announcement_history_index(std::vector<uintptr_t> &records,
        int32_t &next_id, uintptr_t &world) {
    NativeBorrowedVector<uintptr_t> native;
    if (!native_history_read_vector(native_history_global(0x24e3850), native) ||
        !native_history_copy(native_history_global(0x23d14f0 + 0x1123ec), next_id) ||
        !native_history_copy(native_history_global(0x24ebb58), world)) return false;
    records.resize(native.size());
    return records.empty() || native_history_copy_bytes(
        reinterpret_cast<uintptr_t>(native.begin), records.data(), records.size() * sizeof(uintptr_t));
}

static void native_announcement_log_report_fields(const unsigned char *snapshot,
        NativeAnnouncementLogNativeFields &result) {
    constexpr auto &fields = native_history_layout::f_report_fields;
    std::memcpy(&result.color, snapshot + fields[2].native, sizeof(result.color));
    std::memcpy(&result.bright, snapshot + fields[3].native, sizeof(result.bright));
    std::memcpy(&result.flags, snapshot + fields[5].native, sizeof(result.flags));
    std::memcpy(&result.zoom_type, snapshot + fields[7].native, sizeof(result.zoom_type));
    std::memcpy(&result.zoom_type2, snapshot + fields[11].native, sizeof(result.zoom_type2));
    for (size_t axis = 0; axis < result.position.size(); ++axis) {
        std::memcpy(&result.position[axis], snapshot + fields[8 + axis].native, sizeof(int16_t));
        std::memcpy(&result.position2[axis], snapshot + fields[12 + axis].native, sizeof(int16_t));
    }
}
static bool native_announcement_history_row(uintptr_t address, NativeAnnouncementHistoryRow &row,
        NativeAnnouncementLogNativeFields *native_fields) {
    // This is the generated report layout, including its real ID at PE +0x50
    // and compiler-owned ELF offsets. A single header read replaces separate
    // guarded reads for type, flags, repeats, identity and the string header.
    constexpr auto &fields = native_history_layout::f_report_fields;
    const size_t snapshot_size = native_history_snapshot_size(fields);
    if (!snapshot_size) return false;
    std::vector<unsigned char> snapshot(snapshot_size);
    if (!native_history_copy_bytes(address, snapshot.data(), snapshot.size())) return false;
    if (native_fields) native_announcement_log_report_fields(snapshot.data(), *native_fields);
    int16_t type = -1;
    uint8_t flags = 0;
    std::memcpy(&type, snapshot.data() + fields[0].native, sizeof(type));
    std::memcpy(&flags, snapshot.data() + fields[5].native, sizeof(flags));
    std::memcpy(&row.repeats, snapshot.data() + fields[6].native, sizeof(row.repeats));
    std::memcpy(&row.id, snapshot.data() + fields[15].native, sizeof(row.id));
    for (size_t index = 0; index < row.identity.size(); ++index)
        std::memcpy(&row.identity[index], snapshot.data() + fields[16 + index].native, sizeof(int32_t));
    std::memcpy(&row.pool, snapshot.data() + fields[21].native, sizeof(row.pool));
    if (type < 0 || type >= 356 || !native_history_copy_string_snapshot(
            address + fields[1].native, snapshot.data() + fields[1].native, row.source)) return false;
    row.type = type;
    row.continued = (flags & 1) != 0;
    return true;
}

// ELF 53.16: 1160332..1160365 wraps report::text at 95 columns;
// 11602fb/1160543 retain the parent report in EVERY adv_announcementst.
// 11b36dc..11b3722 and 11b3980 select row::str, or parent::text when
// str is empty. 11b3a48..11b3b18 centers non-speech, non-continuations.
// Follow that ownership for every report type, independently of the history
// cache, submission time, line length, translation success or scroll position.
static std::vector<NativeAnnouncementParagraph> native_owned_announcement_paragraphs(
        const NativeBorrowedVector<uintptr_t> &native, bool center_non_speech) {
    std::vector<NativeAnnouncementParagraph> result;
    for (size_t index = 0; index < native.size(); ++index) {
        const uintptr_t address = native_history_vector_at(native, index);
        uintptr_t parent = 0;
        NativeAnnouncementDisplayRow row;
        row.address = native_history_object_field(address, "adv_announcementst", 0, 32);
        if (!native_history_copy(native_history_object_field(address,
                "adv_announcementst", 0x20, sizeof(uintptr_t)), parent) || !parent ||
            !native_history_copy_string(row.address, row.source)) return {};
        if (result.empty() || result.back().parent != parent) {
            NativeAnnouncementParagraph paragraph;
            paragraph.parent = parent;
            uint8_t report_flags = 0;
            int32_t speaker = -1;
            if (!native_history_copy_string(native_history_object_field(parent,
                    "report", 8, 32), paragraph.source)) return {};
            remember_native_announcement_kinship_parent(parent);
            if (center_non_speech) {
                if (!native_history_copy(native_history_object_field(parent,
                        "report", 0x30), report_flags) ||
                    !native_history_copy(native_history_object_field(parent,
                        "report", 0x64, 4), speaker)) return {};
                paragraph.centered = !(report_flags & 1) && speaker == -1;
            }
            result.push_back(std::move(paragraph));
        }
        if (row.source.empty()) {
            row.address = native_history_object_field(parent, "report", 8, 32);
            row.source = result.back().source;
        }
        result.back().rows.push_back(std::move(row));
    }
    return result;
}

static std::vector<NativeAnnouncementParagraph> native_adventure_announcement_paragraphs() {
    uint32_t flags = 0;
    NativeBorrowedVector<uintptr_t> reports, native;
    // PE 8020f2..80210d / ELF 11b2e6d..11b2e82 hide the box only
    // for temp_flag bit 0 or an empty recent-report vector. Bit 0x10 is
    // the wrap producer's "rebuilt rows" flag, not visibility: 8a40fd
    // clears it before the no-new-timed-report branch retains these same
    // adv_announcementst rows. Their complete parents still own every draw.
    if (!native_history_copy(native_history_global(0x23d14f0 + 0x116720), flags) ||
        (flags & 1) ||
        !native_history_read_vector(native_history_global(0x23d14f0 + 0x112378), reports) ||
        !reports.size() ||
        !native_history_read_vector(native_history_global(0x23d14f0 + 0x116730), native))
        return {};
    return native_owned_announcement_paragraphs(native, true);
}

struct NativeAnnouncementLogParentVersion {
    std::array<unsigned char, 32> source_header{};
    int16_t type = -1;
    uint8_t flags = 0;
    int32_t repeats = 0, id = -1;
    std::array<int32_t, 5> identity{};
    uint64_t pool = 0;
    NativeAnnouncementLogNativeFields native_fields;
    bool operator==(const NativeAnnouncementLogParentVersion &) const = default;
};
static bool native_announcement_log_read_version(uintptr_t parent,
        NativeAnnouncementLogParentVersion &version, bool guarded) {
    constexpr auto &fields = native_history_layout::f_report_fields;
    const size_t snapshot_size = native_history_snapshot_size(fields);
    if (!parent || !snapshot_size || snapshot_size > UINTPTR_MAX - parent) return false;
    std::vector<unsigned char> snapshot(snapshot_size);
    if (guarded) {
        if (!native_history_copy_bytes(parent, snapshot.data(), snapshot.size())) return false;
    } else std::memcpy(snapshot.data(), reinterpret_cast<const void *>(parent), snapshot.size());
    std::memcpy(version.source_header.data(), snapshot.data() + fields[1].native,
        version.source_header.size());
    std::memcpy(&version.type, snapshot.data() + fields[0].native, sizeof(version.type));
    std::memcpy(&version.flags, snapshot.data() + fields[5].native, sizeof(version.flags));
    version.flags &= 1;
    std::memcpy(&version.repeats, snapshot.data() + fields[6].native, sizeof(version.repeats));
    std::memcpy(&version.id, snapshot.data() + fields[15].native, sizeof(version.id));
    for (size_t at = 0; at < version.identity.size(); ++at)
        std::memcpy(&version.identity[at], snapshot.data() + fields[16 + at].native, sizeof(int32_t));
    std::memcpy(&version.pool, snapshot.data() + fields[21].native, sizeof(version.pool));
    native_announcement_log_report_fields(snapshot.data(), version.native_fields);
    version.native_fields.flags &= 1;
    return true;
}
static std::shared_ptr<const NativeAnnouncementLogDocument> native_announcement_log_preheated_document(
    uintptr_t parent, uintptr_t world, const NativeAnnouncementLogParentVersion &version);
static void native_announcement_log_retain_worker_document(
    const NativeAnnouncementLogParentVersion &version,
    const std::shared_ptr<const NativeAnnouncementLogDocument> &document);
struct NativeAnnouncementLogRetainedDocument {
    std::shared_ptr<const NativeAnnouncementLogDocument> document;
    NativeAnnouncementLogParentVersion version;
    uintptr_t first_entry = 0, last_entry = 0;
    size_t bytes = 0;
};
struct NativeAnnouncementLogDocumentCache {
    struct Entry {
        std::shared_ptr<const NativeAnnouncementLogRetainedDocument> record;
        std::list<uintptr_t>::iterator use;
    };
    uintptr_t owner = 0, world = 0;
    uint64_t generation = 0;
    NativeBorrowedVector<uintptr_t> vector;
    uint64_t next_sequence = 0;
    std::unordered_map<uintptr_t, Entry> documents;
    std::list<uintptr_t> order;
    // One currently viewed document may exceed the ordinary byte budget.
    // Retain it separately so scrolling within it does not recreate the
    // complete source and document on every native frame.
    std::shared_ptr<const NativeAnnouncementLogRetainedDocument> large_document;
    size_t bytes = 0;
};
static NativeAnnouncementLogDocumentCache &native_announcement_log_document_cache() {
    static NativeAnnouncementLogDocumentCache cache;
    return cache;
}
static void clear_native_announcement_log_documents() {
    auto &cache = native_announcement_log_document_cache();
    cache.owner = 0;
    cache.world = 0;
    cache.generation = 0;
    cache.vector = {};
    cache.documents.clear(); cache.order.clear(); cache.bytes = 0;
    cache.large_document.reset();
    // Sequence identity must survive clearing so retained render/semantic
    // results cannot name a new document with an older version number.
}

static NativeAnnouncementLogActivity native_announcement_log_activity(
        const NativeAnnouncementHistoryRow &report) {
    NativeAnnouncementLogActivity result;
    if (report.identity[2] < 0 || report.identity[3] < 0) return result;
    uintptr_t activity = 0, event = 0;
    if (!native_history_material_find_id(native_history_global(0x23d14f0 + 0x112330),
            0, report.identity[2], activity) || !activity ||
            !native_history_copy(native_history_object_member(activity, "activity_entry", "type"),
                result.activity_type) ||
            !native_history_material_find_id(native_history_object_member(activity,
                "activity_entry", "events"), 8, report.identity[3], event) || !event ||
            !native_history_page_getter(event, 0, result.event_type)) return {};
    // These inherited activity_event members are emitted in the generated
    // conversation layout; they belong to the common base, not an utterance.
    if (!native_history_copy(native_history_object_member(event,
                "activity_event_conversationst", "event_id"), result.event_id) ||
            !native_history_copy(native_history_object_member(event,
                "activity_event_conversationst", "activity_id"), result.activity_id) ||
            result.event_id != report.identity[3] || result.activity_id != report.identity[2]) return {};
    result.activity = activity; result.event = event;
    return result;
}
static void native_announcement_log_freeze_key(NativeAnnouncementLogDocument &document) {
    auto &key = document.record_key;
    key.clear();
    const auto scalar = [&](const auto &value) {
        key.append(reinterpret_cast<const char *>(&value), sizeof(value));
    };
    const auto text = [&](std::string_view value) {
        scalar(value.size());
        const auto fingerprint = native_identity_source_fingerprint(value, std::nullopt);
        scalar(fingerprint);
    };
    const auto &report = document.report;
    document.semantic_generation = native_announcement_log_semantic_generation_value();
    scalar(document.semantic_generation); scalar(document.world);
    scalar(RULESETS.resource_revision());
    scalar(g_overlay.native_identity_translation_catalog_generation());
    scalar(report.type); scalar(report.id); scalar(report.continued);
    if (report.id < 0) scalar(document.parent);
    for (const auto identity : report.identity) scalar(identity);
    scalar(report.pool);
    // Freeze content guards once. Scroll-frame lookups then copy/hash a small
    // ID key instead of the complete possibly book-length English report.
    text(report.source);
    const auto &fields = document.native_fields;
    scalar(fields.color); scalar(fields.bright);
    scalar(fields.zoom_type); scalar(fields.zoom_type2);
    for (const auto axis : fields.position) scalar(axis);
    for (const auto axis : fields.position2) scalar(axis);
    scalar(document.activity.activity_type); scalar(document.activity.event_type);
    scalar(document.activity.activity_id); scalar(document.activity.event_id);
    const bool owned = bool(document.owned_fields);
    scalar(owned);
    if (owned) text(document.owned_fields->context);
    const bool history = bool(document.history_event);
    scalar(history); scalar(document.history_event_publication);
    const bool speech = bool(document.speech);
    scalar(speech);
    if (speech) text(document.speech->context);
    const bool header = document.speech_header.has_value();
    scalar(header);
    if (header) {
        const auto &value = *document.speech_header;
        scalar(value.body_offset); scalar(value.player);
        const bool speaker = value.speaker.has_value();
        scalar(speaker);
        if (speaker) {
            const auto identity = native_unit_identity_cache_key(*value.speaker);
            text(identity);
        }
    }
    // Native completion resolves through the live, typed report owner. Its
    // result survives a detached worker-input publication only while all of
    // these native fields and catalog guards remain exactly the same.
    document.native_record_key = key;
    const bool inputs = bool(document.worker_inputs);
    scalar(inputs);
    if (inputs) text(document.worker_inputs->context);
}
static size_t native_announcement_log_document_bytes(const NativeAnnouncementLogDocument &document) {
    return sizeof(NativeAnnouncementLogRetainedDocument) + sizeof(document) +
        document.report.source.capacity() + document.native_record_key.capacity() +
        document.record_key.capacity() +
        (document.owned_fields ? document.owned_fields->bytes : 0) +
        (document.history_event ? native_announcement_log_history_event_bytes(*document.history_event) : 0) +
        (document.speech ? document.speech->bytes : 0) +
        (document.speech_header && document.speech_header->speaker
            ? sizeof(NativeUnitIdentity) + 2 * native_unit_identity_cache_key(
                *document.speech_header->speaker).size() : 0);
}

static std::shared_ptr<NativeAnnouncementLogDocument> native_announcement_log_freeze_document(
        uintptr_t parent, uintptr_t world, const NativeAnnouncementLogParentVersion &version,
        bool freeze_inputs = true) {
    auto document = std::make_shared<NativeAnnouncementLogDocument>();
    document->parent = parent; document->world = world;
    document->native_fields = version.native_fields;
    auto &report = document->report;
    report.type = version.type >= 0 && version.type < 356 ? version.type : -1;
    report.id = version.id; report.identity = version.identity;
    report.pool = version.pool; report.repeats = version.repeats;
    report.continued = (version.flags & 1) != 0;
    const uintptr_t address = parent + native_history_layout::f_report_fields[1].native;
    std::string_view source;
    if (!native_string_view(reinterpret_cast<const NativeString *>(address), &source, SIZE_MAX)) return {};
    report.source.resize(source.size());
    if (!source.empty() && !native_history_copy_bytes(reinterpret_cast<uintptr_t>(source.data()),
            report.source.data(), source.size())) return {};
    document->activity = native_announcement_log_activity(report);
    document->owned_fields = native_announcement_log_owned_fields(report, world, {});
    document->history_event = native_announcement_log_history_event(report, world,
        &document->history_event_publication);
    document->speech = native_announcement_log_speech_record(report, world);
    if (!document->speech || !document->speech->tokens_complete)
        document->speech_header = native_announcement_log_speech_header(*document);
    // Capture values on their native owner. Detached workers parse only this
    // immutable snapshot and never borrow a live game object.
    if (freeze_inputs)
        document->worker_inputs = native_announcement_log_freeze_worker_inputs(*document);
    native_announcement_log_freeze_key(*document);
    return document;
}

static std::shared_ptr<const NativeAnnouncementLogDocument>
native_adventure_popup_report(uintptr_t parent) {
    // PE 8020c0 / ELF 11b2e40 draw the same typed report as the log.
    // Keep its immutable fields even on the ordinary grid path, which does
    // not pass through the fortress notification layer's document binder.
    uintptr_t world = 0;
    NativeAnnouncementLogParentVersion version;
    if (!native_announcement_current_world(world) ||
            !native_announcement_log_read_version(parent, version, true)) return {};
    if (auto document = native_announcement_log_preheated_document(parent, world, version))
        return document;
    auto document = native_announcement_log_freeze_document(parent, world, version, false);
    if (document) native_announcement_log_retain_worker_document(version, document);
    return document;
}

static std::vector<NativeAnnouncementLogVisibleRecord> native_announcement_log_paragraphs(
        uintptr_t owner, size_t first, size_t end) {
    // This reader is called only synchronously by capture_native_announcement_log,
    // immediately after that same native modal successfully traversed owner.
    // Its original draw and this snapshot share the producer's live vector /
    // row / parent lifetimes. Borrow only those objects here; historical,
    // world and other-component readers keep their guarded memory adapter.
    const auto copy_live = [](uintptr_t address, void *destination, size_t size) {
        if (!address || size > UINTPTR_MAX - address) return false;
        std::memcpy(destination, reinterpret_cast<const void *>(address), size);
        return true;
    };
    if (!owner || owner > UINTPTR_MAX - 8) return {};
    NativeBorrowedVector<uintptr_t> native;
    if (!copy_live(owner + 8, &native, sizeof(native)) || !native.valid(1u << 24)) return {};
    uintptr_t world = 0;
    if (!native_history_copy(native_history_global(0x24ebb58), world)) return {};
    auto &cache = native_announcement_log_document_cache();
    if (cache.world != world || cache.owner != owner ||
            cache.generation != g_native_announcement_log_semantic_generation || cache.vector.begin != native.begin ||
            cache.vector.end != native.end || cache.vector.capacity != native.capacity) {
        clear_native_announcement_log_documents();
        cache.owner = owner; cache.world = world; cache.vector = native;
        cache.generation = g_native_announcement_log_semantic_generation;
    }
    const size_t count = native.size();
    first = std::min(first, count); end = std::min(end, count);
    if (first >= end) return {};
    // The producer supplies its current viewport, not the complete log.
    // Borrow those live entry identities in one copy per submission.
    std::vector<uintptr_t> visible_entries(end - first);
    if (!copy_live(reinterpret_cast<uintptr_t>(native.begin) +
            first * sizeof(uintptr_t), visible_entries.data(),
            visible_entries.size() * sizeof(uintptr_t))) return {};
    using Header = std::array<unsigned char, 32>;
    const auto entry_at = [&](size_t index, uintptr_t &entry, uintptr_t &parent, Header *header) {
        if (index >= count) return false;
        if (index >= first && index < end) entry = visible_entries[index - first];
        else if (!copy_live(reinterpret_cast<uintptr_t>(native.begin) + index * sizeof(uintptr_t),
                &entry, sizeof(entry))) return false;
        if (!entry) return false;
        const uintptr_t parent_address = native_history_object_field(entry,
            "adv_announcementst", 0x20, sizeof(uintptr_t));
        const uintptr_t source_address = native_history_object_field(entry,
            "adv_announcementst", 0, sizeof(Header));
        if (header && source_address && parent_address == source_address + sizeof(Header)) {
            std::array<unsigned char, sizeof(Header) + sizeof(uintptr_t)> snapshot{};
            if (!copy_live(source_address, snapshot.data(), snapshot.size()))
                return false;
            std::memcpy(header->data(), snapshot.data(), header->size());
            std::memcpy(&parent, snapshot.data() + header->size(), sizeof(parent));
            return parent != 0;
        }
        if (!copy_live(parent_address, &parent, sizeof(parent)) || !parent) return false;
        return !header || copy_live(source_address, header->data(), header->size());
    };
    std::unordered_map<uintptr_t, const NativeDrawnTextRow *> submitted;
    for (const auto &plane : g_native_announcement_log_text.rows)
        for (const auto &draw : plane)
            if (draw.address) {
                auto &latest = submitted[draw.address];
                if (!latest || latest->sequence < draw.sequence) latest = &draw;
            }
    const auto version_of = [&](uintptr_t parent, NativeAnnouncementLogParentVersion &version) {
        constexpr auto &fields = native_history_layout::f_report_fields;
        const size_t snapshot_size = native_history_snapshot_size(fields);
        if (!snapshot_size) return false;
        std::vector<unsigned char> snapshot(snapshot_size);
        if (!copy_live(parent, snapshot.data(), snapshot.size())) {
            // Optional typed metadata cannot remove an otherwise readable
            // parent. Its string header still supplies a bounded version.
            version = {};
            return copy_live(native_history_object_field(parent,
                "report", 8, version.source_header.size()), version.source_header.data(),
                version.source_header.size());
        }
        std::memcpy(version.source_header.data(), snapshot.data() + fields[1].native,
            version.source_header.size());
        std::memcpy(&version.type, snapshot.data() + fields[0].native, sizeof(version.type));
        std::memcpy(&version.flags, snapshot.data() + fields[5].native, sizeof(version.flags));
        version.flags &= 1; // continued; displayed/removal flags are presentation only.
        std::memcpy(&version.repeats, snapshot.data() + fields[6].native, sizeof(version.repeats));
        std::memcpy(&version.id, snapshot.data() + fields[15].native, sizeof(version.id));
        for (size_t at = 0; at < version.identity.size(); ++at)
            std::memcpy(&version.identity[at], snapshot.data() + fields[16 + at].native, sizeof(int32_t));
        std::memcpy(&version.pool, snapshot.data() + fields[21].native, sizeof(version.pool));
        native_announcement_log_report_fields(snapshot.data(), version.native_fields);
        version.native_fields.flags &= 1;
        return true;
    };
    const auto forget = [&](uintptr_t parent) {
        if (cache.large_document && cache.large_document->document->parent == parent)
            cache.large_document.reset();
        if (const auto found = cache.documents.find(parent); found != cache.documents.end()) {
            cache.bytes -= found->second.record->bytes;
            cache.order.erase(found->second.use);
            cache.documents.erase(found);
        }
    };
    std::unordered_map<uintptr_t, std::shared_ptr<const NativeAnnouncementLogRetainedDocument>> current;
    std::vector<NativeAnnouncementLogVisibleRecord> result;
    for (size_t index = first; index < end; ++index) {
        uintptr_t entry = 0, parent = 0;
        Header header{};
        if (!entry_at(index, entry, parent, &header)) return {};
        std::shared_ptr<const NativeAnnouncementLogRetainedDocument> retained;
        if (const auto seen = current.find(parent); seen != current.end()) retained = seen->second;
        else {
            NativeAnnouncementLogParentVersion version;
            if (!version_of(parent, version)) return {};
            if (const auto found = cache.documents.find(parent); found != cache.documents.end()) {
                if (found->second.record->version == version) {
                    retained = found->second.record;
                    // Rapid back-and-forth scrolling keeps the working set
                    // hot; insertion order must not evict recently used rows.
                    cache.order.splice(cache.order.end(), cache.order, found->second.use);
                }
                else forget(parent);
            }
            if (!retained && cache.large_document &&
                    cache.large_document->document->parent == parent) {
                if (cache.large_document->version == version) retained = cache.large_document;
                else cache.large_document.reset();
            }
            if (retained) {
                const auto &document = *retained->document;
                const size_t begin = document.native_first_index;
                const size_t limit = begin + document.native_line_count;
                uintptr_t boundary_entry = 0, boundary_parent = 0;
                bool valid = index >= begin && index < limit && limit <= count;
                if (valid) valid = entry_at(begin, boundary_entry, boundary_parent, nullptr) &&
                    boundary_entry == retained->first_entry && boundary_parent == parent;
                if (valid) valid = entry_at(limit - 1, boundary_entry, boundary_parent, nullptr) &&
                    boundary_entry == retained->last_entry && boundary_parent == parent;
                if (valid && begin) valid = entry_at(begin - 1, boundary_entry, boundary_parent, nullptr) &&
                    boundary_parent != parent;
                if (valid && limit < count) valid = entry_at(limit, boundary_entry, boundary_parent, nullptr) &&
                    boundary_parent != parent;
                if (!valid) {
                    forget(parent); retained.reset();
                }
            }
            if (!retained) {
                // PE eb530 lower-bounds report::id and rejects an existing
                // ID; e54a7 inserts reports through it. The compact producer
                // 864970 exhausts each report's wrap before advancing that
                // ordered source vector. Thus row parent IDs are monotonic
                // and a cold document's boundaries need logarithmic probes,
                // not one probe for every unseen wrapped line.
                size_t begin = index, limit = index + 1;
                if (version.id >= 0) {
                    const auto id_at = [&](size_t at, int32_t &id) {
                        uintptr_t other_entry = 0, other_parent = 0;
                        return entry_at(at, other_entry, other_parent, nullptr) &&
                            copy_live(other_parent + native_history_layout::f_report_fields[15].native,
                                &id, sizeof(id));
                    };
                    size_t left = 0, right = index;
                    while (left < right) {
                        const size_t middle = left + (right - left) / 2;
                        int32_t id = -1;
                        if (!id_at(middle, id)) return {};
                        if (id < version.id) left = middle + 1;
                        else right = middle;
                    }
                    begin = left;
                    left = index + 1; right = count;
                    while (left < right) {
                        const size_t middle = left + (right - left) / 2;
                        int32_t id = -1;
                        if (!id_at(middle, id)) return {};
                        if (id <= version.id) left = middle + 1;
                        else right = middle;
                    }
                    limit = left;
                } else {
                    // Missing optional ID metadata cannot remove otherwise
                    // readable native text. Retain the adjacent-only path.
                    while (begin > 0) {
                        uintptr_t previous = 0, previous_parent = 0;
                        if (!entry_at(begin - 1, previous, previous_parent, nullptr)) return {};
                        if (previous_parent != parent) break;
                        --begin;
                    }
                    while (limit < count) {
                        uintptr_t next = 0, next_parent = 0;
                        if (!entry_at(limit, next, next_parent, nullptr)) return {};
                        if (next_parent != parent) break;
                        ++limit;
                    }
                }
                const auto heated = native_announcement_log_preheated_document(parent, world, version);
                auto document = heated ? std::make_shared<NativeAnnouncementLogDocument>(*heated)
                    : native_announcement_log_freeze_document(parent, world, version, false);
                // Visible capture owns only this report and its row bounds.
                // A missing input snapshot enters the dependency queue; the
                // bounded native input pump fills it after this draw instead
                // of freezing every cold report synchronously during a drag.
                if (!document) return {};
                auto incoming = std::make_shared<NativeAnnouncementLogRetainedDocument>();
                incoming->version = version;
                document->native_first_index = begin;
                document->native_line_count = limit - begin;
                uintptr_t boundary_parent = 0;
                if (!entry_at(begin, incoming->first_entry, boundary_parent, nullptr) ||
                        boundary_parent != parent ||
                        !entry_at(limit - 1, incoming->last_entry, boundary_parent, nullptr) ||
                        boundary_parent != parent) return {};
                cache.next_sequence = cache.next_sequence == UINT64_MAX ? 1 : cache.next_sequence + 1;
                document->sequence = cache.next_sequence;
                incoming->document = std::move(document);
                native_announcement_log_retain_worker_document(version, incoming->document);
                const auto &owned = *incoming->document;
                const size_t bytes = native_announcement_log_document_bytes(owned);
                incoming->bytes = bytes;
                retained = std::move(incoming);
                constexpr size_t maximum_entries = 512, maximum_bytes = 8 * 1024 * 1024;
                if (bytes <= maximum_bytes) {
                    while (!cache.order.empty() && (cache.documents.size() >= maximum_entries ||
                            cache.bytes > maximum_bytes - bytes)) forget(cache.order.front());
                    try {
                        cache.order.push_back(parent);
                        try {
                            if (cache.documents.emplace(parent, NativeAnnouncementLogDocumentCache::Entry{
                                    retained, std::prev(cache.order.end())}).second) cache.bytes += bytes;
                            else cache.order.pop_back();
                        } catch (...) { cache.order.pop_back(); throw; }
                    } catch (const std::bad_alloc &) { /* The current owned document remains drawable. */ }
                } else cache.large_document = retained;
            }
            // A formatter worker can finish an already-owned field without
            // changing report text or the native wrap vector. Freeze only a
            // real publication change, never cursor/epoch/global counters.
            const auto &previous = *retained->document;
            const auto fields = native_announcement_log_owned_fields(
                previous.report, world, previous.owned_fields);
            uint64_t publication = 0;
            auto history = native_announcement_log_history_event(previous.report, world, &publication);
            auto speech = native_announcement_log_speech_record(previous.report, world);
            if (!speech && previous.speech) speech = previous.speech;
            if (!history && previous.history_event) {
                history = previous.history_event; publication = previous.history_event_publication;
            }
            if (fields != previous.owned_fields || publication != previous.history_event_publication ||
                    history != previous.history_event || speech != previous.speech) {
                auto document = std::make_shared<NativeAnnouncementLogDocument>(previous);
                document->owned_fields = fields; document->history_event = std::move(history);
                document->history_event_publication = publication;
                document->speech = std::move(speech);
                // The new typed publication gets its own inputs through the
                // dependency pump, just like a newly visible cold report.
                document->worker_inputs.reset();
                cache.next_sequence = cache.next_sequence == UINT64_MAX ? 1 : cache.next_sequence + 1;
                document->sequence = cache.next_sequence;
                native_announcement_log_freeze_key(*document);
                auto updated = std::make_shared<NativeAnnouncementLogRetainedDocument>(*retained);
                updated->document = std::move(document);
                native_announcement_log_retain_worker_document(version, updated->document);
                updated->bytes = native_announcement_log_document_bytes(*updated->document);
                if (updated->bytes > 8 * 1024 * 1024) {
                    forget(parent);
                    cache.large_document = updated;
                } else if (const auto found = cache.documents.find(parent);
                        found != cache.documents.end() && found->second.record == retained) {
                    cache.bytes -= found->second.record->bytes;
                    found->second.record = updated; cache.bytes += updated->bytes;
                    while (cache.bytes > 8 * 1024 * 1024 && !cache.order.empty()) forget(cache.order.front());
                } else if (cache.large_document == retained) cache.large_document = updated;
                retained = std::move(updated);
            }
            current.emplace(parent, retained);
        }
        const auto &document = *retained->document;
        NativeAnnouncementDisplayRow row;
        row.address = native_history_object_field(entry, "adv_announcementst", 0, 32);
        if (index < document.native_first_index ||
                index - document.native_first_index >= document.native_line_count) {
            forget(parent);
            return {};
        }
        std::string_view live_source;
        if (!native_string_view(reinterpret_cast<const NativeString *>(row.address),
                &live_source, SIZE_MAX)) return {};
        if (live_source.empty())
            row.address = native_history_object_field(parent, "report", 8, 32);
        if (const auto captured = submitted.find(row.address); captured != submitted.end()) {
            // The native call already froze this exact submitted string.
            // Do not read its heap again through ReadProcessMemory merely
            // to reconstruct the source of the same owned draw.
            const auto &draw = *captured->second;
            row.source = draw.complete_source.empty() ? draw.source : draw.complete_source;
        } else if (live_source.empty()) row.source = document.report.source;
        else if (!native_history_copy_string_snapshot(row.address, header.data(), row.source)) {
            // A clipped-out row has no captured draw. Keep its bounded
            // fallback guarded; it cannot prove or suppress any native ink.
            return {};
        }
        if (result.empty() || result.back().document != retained->document)
            result.push_back({retained->document, {}, {}});
        result.back().lines.push_back(index - document.native_first_index);
        result.back().rows.push_back(std::move(row));
    }
    return result;
}
