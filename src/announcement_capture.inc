// Original announcement records, independent of the translation catalogue.
// The native adapter supplies borrowed text only; neither game-owned strings
// nor the announcement log are modified. Keep recent on-screen records across
// dictionary reloads so a new rule applies to the complete original message.
struct NativeAnnouncementSource {
    int type = -1;
    std::string source;
    uint64_t sequence = 0;
};

// Read-only native history access also recovers records submitted before a
// core reload and records outside the recent submission cache. The adapter
// exposes fields, not a second translation or record-composition policy.
struct NativeAnnouncementHistoryRow {
    int type = -1;
    int repeats = 0;
    bool continued = false;
    int32_t id = -1;
    // ID plus the original report metadata distinguishes reused addresses.
    // Mutable presentation flags and repeat_count are deliberately separate.
    std::array<int32_t, 5> identity{};
    uint64_t pool = 0;
    std::string source;
};

struct NativeAnnouncementDisplayRow {
    uintptr_t address = 0;
    std::string source;
};
struct NativeAnnouncementParagraph {
    uintptr_t parent = 0;
    std::string source;
    bool centered = false;
    std::vector<NativeAnnouncementDisplayRow> rows;
    // Fortress alert rows retain report/unit ownership independently of the
    // announcement history cache and the time their native box last wrapped.
    bool fortress_alert = false;
    int width = 0;
    int repeats = 0;
    uintptr_t unit = 0;
    int16_t category = -1;
    std::string name_source;
};
static std::vector<NativeAnnouncementParagraph> native_adventure_announcement_paragraphs();
static std::vector<NativeAnnouncementParagraph> native_announcement_log_paragraphs();
static std::vector<NativeAnnouncementParagraph> native_fortress_alert_paragraphs();
static std::optional<std::string> native_fortress_alert_unit_name(uintptr_t unit);
static std::optional<std::string> translate_native_unit_identity_reference(
    uintptr_t unit, uintptr_t name, std::string_view expected, bool capitalized_reference = false);
struct NativeAnnouncementPopup {
    std::string source;
    int width = 0, max_y = 0, grid_height = 0;
    bool portrait = false;
    std::vector<NativeHistoryToken> words;
};
static std::optional<NativeAnnouncementPopup> native_announcement_popup();
struct NativeAdventureQuestTitle {
    std::string source;
    std::string displayed;
    int agreement_subject = -1;
    int32_t companion_reason = -1;
    bool companion_details = false;
    bool companion_completed = false;
};
static std::optional<NativeAdventureQuestTitle> native_adventure_quest_original_title(
    uintptr_t address, std::string_view displayed, uintptr_t caller);
static bool native_announcement_history_index(std::vector<uintptr_t> &records,
    int32_t &next_id, uintptr_t &world);
static bool native_announcement_history_row(uintptr_t record, NativeAnnouncementHistoryRow &row);
static bool native_announcement_display_tail(std::vector<uintptr_t> &records);
static std::vector<uintptr_t> g_native_announcement_history_index;
static int32_t g_native_announcement_history_next_id = -1;
static uintptr_t g_native_announcement_history_world = 0;
using NativeAnnouncementOrder = std::pair<unsigned, uint64_t>;
using NativeAnnouncementKey = std::pair<int, std::string>;
struct NativeAnnouncementCachedRow {
    uintptr_t address = 0;
    NativeAnnouncementHistoryRow row;
    uint64_t group = 0;
};
struct NativeAnnouncementGroup {
    uintptr_t head = 0;
    NativeAnnouncementHistoryRow row;
    std::string source, normalized;
};
static std::deque<NativeAnnouncementCachedRow> g_native_announcement_rows;
static std::map<uint64_t, NativeAnnouncementGroup> g_native_announcement_groups;
static std::map<NativeAnnouncementKey, std::set<uint64_t>> g_native_announcement_group_keys;
static uint64_t g_native_announcement_group_sequence = 0;
static uint64_t g_native_announcement_recent_sequence = 0;
static std::set<NativeAnnouncementKey> g_native_announcement_pending;
static bool g_native_announcement_history_full_refresh = true;

// Display matching needs normalized records and their indexes, not a fresh
// copy of the whole world's report history for each screen layer. Publish
// immutable snapshots so readers can keep using them after the lock is freed.
struct NativeAnnouncementSnapshot {
    struct Record {
        std::string source;
        size_t original_length = 0;
        NativeAnnouncementOrder order{};
        std::map<NativeAnnouncementOrder, size_t> references;
        std::map<size_t, size_t> lengths;
    };
    struct AnchorNode {
        std::unordered_map<unsigned char, size_t> next;
        std::vector<size_t> records;
    };
    std::deque<Record> records;
    std::unordered_map<std::string, size_t> originals;
    std::set<std::string_view, std::less<>> sorted_originals;
    std::vector<AnchorNode> anchors{1};
    std::vector<size_t> free_records;
    size_t removed_anchors = 0;

    NativeAnnouncementSnapshot() = default;
    NativeAnnouncementSnapshot(const NativeAnnouncementSnapshot &other)
        : records(other.records), originals(other.originals), anchors(other.anchors),
          free_records(other.free_records), removed_anchors(other.removed_anchors) {
        // Views must refer to the new owner's strings when an existing reader
        // requires copy-on-write. deque also keeps them stable on later append.
        for (const auto &record : records)
            if (!record.references.empty()) sorted_originals.insert(record.source);
    }
};
static std::shared_ptr<NativeAnnouncementSnapshot> g_native_announcement_snapshot;
struct NativeAnnouncementSourceChange {
    std::string source;
    NativeAnnouncementOrder order;
    size_t length = 0;
    bool add = false;
};
static std::vector<NativeAnnouncementSourceChange> g_native_announcement_recent_changes;
static uint64_t g_native_announcement_history_query_epoch = 0;

// Native rich-text controls have no visible letters. Normalize only the
// controls understood by the game's paragraph renderer; bracketed names or
// unknown tags remain source text. This key also joins native wrap spaces.
static std::string native_announcement_display_source(std::string_view source,
        std::vector<size_t> *origins = nullptr) {
    std::string result;
    if (origins) origins->clear();
    bool pending_space = false;
    size_t pending_origin = 0;
    const auto append = [&](unsigned char ch, size_t origin) {
        if (std::isspace(ch)) {
            if (!pending_space) pending_origin = origin;
            pending_space = !result.empty();
            return;
        }
        if (pending_space) {
            result.push_back(' ');
            if (origins) origins->push_back(pending_origin);
        }
        pending_space = false;
        result.push_back(static_cast<char>(ch));
        if (origins) origins->push_back(origin);
    };
    for (size_t at = 0; at < source.size();) {
        if (at + 1 < source.size() &&
                ((source[at] == '[' && source[at + 1] == '[') ||
                 (source[at] == ']' && source[at + 1] == ']'))) {
            append(source[at], at);
            at += 2;
            continue;
        }
        if (source[at] == '[') {
            const auto end = source.find(']', at + 1);
            if (end != std::string_view::npos) {
                const auto tag = source.substr(at + 1, end - at - 1);
                if (tag == "B" || tag == "P") {
                    append(' ', at);
                    at = end + 1;
                    continue;
                }
                if (tag.starts_with("C:") &&
                        std::count(tag.begin(), tag.end(), ':') == 3 &&
                        tag.size() >= 7 && tag.back() != ':' &&
                        tag.find("::") == std::string_view::npos &&
                        std::all_of(tag.begin() + 2, tag.end(), [](unsigned char ch) {
                            return (ch >= '0' && ch <= '9') || ch == ':';
                        })) {
                    at = end + 1;
                    continue;
                }
            }
        }
        append(source[at], at);
        ++at;
    }
    return result;
}

static void native_announcement_snapshot_anchor(NativeAnnouncementSnapshot &snapshot,
        size_t index, bool add) {
    const auto &source = snapshot.records[index].source;
    const auto anchor = std::string_view(source).substr(0, source.find(' '));
    size_t node = 0;
    for (unsigned char ch : anchor) {
        auto [edge, inserted] = snapshot.anchors[node].next.try_emplace(ch, snapshot.anchors.size());
        const size_t next = edge->second;
        if (inserted) snapshot.anchors.emplace_back();
        node = next;
    }
    auto &records = snapshot.anchors[node].records;
    if (add) records.push_back(index);
    else { std::erase(records, index); ++snapshot.removed_anchors; }
}

static void native_announcement_snapshot_change(NativeAnnouncementSnapshot &snapshot,
        std::string_view source, NativeAnnouncementOrder order, size_t length, bool add) {
    if (source.empty()) return;
    auto found = snapshot.originals.find(std::string(source));
    if (found == snapshot.originals.end()) {
        if (!add) return;
        size_t index = snapshot.records.size();
        if (!snapshot.free_records.empty()) {
            index = snapshot.free_records.back();
            snapshot.free_records.pop_back();
        } else snapshot.records.emplace_back();
        auto &record = snapshot.records[index];
        record.source = source;
        found = snapshot.originals.emplace(record.source, index).first;
        snapshot.sorted_originals.insert(record.source);
        native_announcement_snapshot_anchor(snapshot, index, true);
    }
    auto &record = snapshot.records[found->second];
    const auto previous = record.references.find(order);
    if (previous != record.references.end()) {
        const auto count = record.lengths.find(previous->second);
        if (--count->second == 0) record.lengths.erase(count);
        record.references.erase(previous);
    }
    if (add) {
        record.references.emplace(order, length);
        ++record.lengths[length];
    }
    if (!record.references.empty()) {
        record.original_length = record.lengths.rbegin()->first;
        record.order = record.references.begin()->first;
    } else {
        const size_t index = found->second;
        snapshot.sorted_originals.erase(record.source);
        native_announcement_snapshot_anchor(snapshot, index, false);
        snapshot.originals.erase(found);
        record = {};
        snapshot.free_records.push_back(index);
    }
}

static NativeAnnouncementSnapshot &native_announcement_writable_snapshot() {
    if (!g_native_announcement_snapshot)
        g_native_announcement_snapshot = std::make_shared<NativeAnnouncementSnapshot>();
    else if (!g_native_announcement_snapshot.unique())
        g_native_announcement_snapshot =
            std::make_shared<NativeAnnouncementSnapshot>(*g_native_announcement_snapshot);
    return *g_native_announcement_snapshot;
}

static void native_announcement_compact_snapshot() {
    auto &snapshot = *g_native_announcement_snapshot;
    if (snapshot.removed_anchors <= std::max<size_t>(1024, snapshot.originals.size())) return;
    auto compact = std::make_shared<NativeAnnouncementSnapshot>();
    for (const auto &record : snapshot.records)
        for (const auto &[order, length] : record.references)
            native_announcement_snapshot_change(*compact, record.source, order, length, true);
    g_native_announcement_snapshot = std::move(compact);
}

static bool native_announcement_same_row(const NativeAnnouncementHistoryRow &left,
        const NativeAnnouncementHistoryRow &right) {
    return left.id == right.id && left.type == right.type && left.continued == right.continued &&
        left.identity == right.identity && left.pool == right.pool && left.source == right.source;
}

static std::string native_announcement_repeated_source(const NativeAnnouncementGroup &group) {
    return group.row.repeats > 0 ? group.source + " x" +
        std::to_string(static_cast<int64_t>(group.row.repeats) + 1) : std::string{};
}

static void native_announcement_repeat_change(NativeAnnouncementSnapshot &snapshot,
        uint64_t id, const NativeAnnouncementGroup &group, bool add) {
    if (group.row.repeats > 0) {
        const auto repeated = native_announcement_repeated_source(group);
        native_announcement_snapshot_change(snapshot, native_announcement_display_source(repeated),
            {1, id}, repeated.size(), add);
    }
}

static void native_announcement_group_change(NativeAnnouncementSnapshot &snapshot,
        uint64_t id, NativeAnnouncementGroup &group, bool add) {
    native_announcement_snapshot_change(snapshot, group.normalized, {0, id}, group.source.size(), add);
    native_announcement_repeat_change(snapshot, id, group, add);
    const NativeAnnouncementKey key{group.row.type, group.normalized};
    if (add) g_native_announcement_group_keys[key].insert(id);
    else if (const auto found = g_native_announcement_group_keys.find(key);
            found != g_native_announcement_group_keys.end()) {
        found->second.erase(id);
        if (found->second.empty()) g_native_announcement_group_keys.erase(found);
    }
}

static std::mutex g_native_announcement_mutex;
static std::deque<NativeAnnouncementSource> g_native_announcement_sources;
// The compact renderer owns this borrowed native vector for the current
// frame. No game pointer is retained beyond its draw epoch or core shutdown.
static uintptr_t g_native_announcement_log_owner = 0;
static uint64_t g_native_announcement_log_epoch = 0;
struct NativeSpeechSource { std::string rendered, original; };
// Announcement kinship fields are bound to the actual speaker and relatives
// in native memory. The adapter reuses the character sheet's relation policy
// and returns only owned fields; its keys never enter the game-owned text.
static std::optional<std::string> native_announcement_kinship_source(
    std::string_view source, std::vector<size_t> *origins = nullptr);
static std::optional<std::string> native_announcement_kinship_target(std::string_view key);
static void remember_native_announcement_kinship_parent(uintptr_t parent);
static std::deque<NativeSpeechSource> g_native_speech_sources;

static void remember_native_announcement_log_owner(uintptr_t owner) {
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    g_native_announcement_log_owner = owner;
    g_native_announcement_log_epoch = owner
        ? g_embark_item_capture_epoch.load(std::memory_order_acquire) : 0;
}

static void remember_native_speech_source(std::string_view original, std::string_view rendered) {
    if (original.empty() || rendered.empty() || original == rendered) return;
    NativeSpeechSource record{native_announcement_display_source(rendered),
        native_announcement_display_source(original)};
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    std::erase_if(g_native_speech_sources, [&](const auto &entry) {
        return entry.rendered == record.rendered;
    });
    g_native_speech_sources.push_back(std::move(record));
    while (g_native_speech_sources.size() > 256) g_native_speech_sources.pop_front();
}

static std::optional<std::string> native_original_speech_source(std::string_view rendered) {
    const auto key = native_announcement_display_source(rendered);
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    for (auto entry = g_native_speech_sources.rbegin(); entry != g_native_speech_sources.rend(); ++entry)
        if (entry->rendered == key) return entry->original;
    return std::nullopt;
}

static void remember_native_announcement(int type, std::string_view source) {
    if (type < 0 || source.empty()) return;
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    const auto sequence = ++g_native_announcement_recent_sequence;
    const auto normalized = native_announcement_display_source(source);
    // Add before removing a previous reference to the same display text.
    // A repeated submit then changes only two small reference counters.
    g_native_announcement_recent_changes.push_back(
        {normalized, {2, sequence}, source.size(), true});
    std::erase_if(g_native_announcement_sources, [&](const auto &record) {
        if (record.source != source) return false;
        g_native_announcement_recent_changes.push_back(
            {normalized, {2, record.sequence}, record.source.size(), false});
        return true;
    });
    g_native_announcement_sources.push_back({type, std::string(source), sequence});
    // This is the live screen cache, not the game's persistent history. Older
    // log pages still use the same complete catalogue and paragraph grammar.
    while (g_native_announcement_sources.size() > 256) {
        const auto &record = g_native_announcement_sources.front();
        g_native_announcement_recent_changes.push_back({native_announcement_display_source(record.source),
            {2, record.sequence}, record.source.size(), false});
        g_native_announcement_sources.pop_front();
    }
}

static void finish_native_announcement_submission(int type, std::string_view source) {
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    if (type < 0 || source.empty()) g_native_announcement_history_full_refresh = true;
    else g_native_announcement_pending.emplace(type, native_announcement_display_source(source));
}

// Stage every borrowed read before changing the owned cache. The common path
// reads the pointer vector, its retained boundary rows and the newly appended
// rows. Repeats refresh only complete groups with the submitted type/text key.
static bool refresh_native_announcement_history(std::vector<uintptr_t> records,
        int32_t next_id, uintptr_t world) {
    bool rebuild = g_native_announcement_history_full_refresh ||
        world != g_native_announcement_history_world ||
        next_id < g_native_announcement_history_next_id;
    size_t removed = 0, retained = 0;
    std::set<uint64_t> removed_groups;
    std::map<uint64_t, NativeAnnouncementHistoryRow> refreshed;
    std::vector<NativeAnnouncementCachedRow> appended;
    if (!rebuild) {
        const auto &previous = g_native_announcement_history_index;
        if (!previous.empty() && !records.empty()) {
            const auto start = std::find(previous.begin(), previous.end(), records.front());
            if (start == previous.end()) rebuild = true;
            else removed = static_cast<size_t>(start - previous.begin());
        } else if (records.empty()) removed = previous.size();
        retained = previous.size() - removed;
        if (!rebuild && (records.size() < retained || !std::equal(
                previous.begin() + removed, previous.end(), records.begin()))) rebuild = true;
        if (!rebuild) {
            for (size_t index = 0; index < removed; ++index)
                if (g_native_announcement_rows[index].group)
                    removed_groups.insert(g_native_announcement_rows[index].group);
            const auto read_retained = [&](size_t index) {
                const auto &cached = g_native_announcement_rows[index];
                NativeAnnouncementHistoryRow row;
                if (!native_announcement_history_row(cached.address, row)) return false;
                if (!native_announcement_same_row(cached.row, row)) { rebuild = true; return true; }
                if (!row.continued && cached.group && !removed_groups.contains(cached.group))
                    refreshed.emplace(cached.group, std::move(row));
                return true;
            };
            if (retained && (!read_retained(removed) ||
                    (retained > 1 && !read_retained(previous.size() - 1)))) return false;
        }
    }
    const auto read_appended = [&](size_t begin) {
        appended.clear();
        appended.reserve(records.size() - begin);
        for (size_t index = begin; index < records.size(); ++index) {
            NativeAnnouncementCachedRow cached;
            cached.address = records[index];
            if (!native_announcement_history_row(cached.address, cached.row)) return false;
            appended.push_back(std::move(cached));
        }
        return true;
    };
    if (!rebuild && !read_appended(retained)) return false;
    if (!rebuild && !g_native_announcement_pending.empty()) {
        // A submitted rich-text source can become several native report rows.
        // Compose the new tail with exactly the same continuation rules before
        // deciding whether a missing complete key needs a conservative rebuild.
        std::set<NativeAnnouncementKey> appended_keys;
        int type = -1;
        std::string source;
        if (!g_native_announcement_groups.empty()) {
            const auto &[id, group] = *g_native_announcement_groups.rbegin();
            if (!removed_groups.contains(id)) { type = group.row.type; source = group.source; }
        }
        const auto finish = [&] {
            if (type >= 0) appended_keys.emplace(type, native_announcement_display_source(source));
        };
        for (const auto &cached : appended) {
            const auto &row = cached.row;
            if (row.continued) {
                if (type == row.type) { source += ' '; source += row.source; }
            } else { finish(); type = row.type; source = row.source; }
        }
        finish();
        for (const auto &key : g_native_announcement_pending) {
            bool found = appended_keys.contains(key);
            const auto candidates = g_native_announcement_group_keys.find(key);
            if (candidates != g_native_announcement_group_keys.end())
                for (uint64_t id : candidates->second) {
                    if (removed_groups.contains(id)) continue;
                    found = true;
                    if (refreshed.contains(id)) continue;
                    const auto &group = g_native_announcement_groups.at(id);
                    NativeAnnouncementHistoryRow row;
                    if (!native_announcement_history_row(group.head, row)) return false;
                    if (!native_announcement_same_row(group.row, row)) { rebuild = true; break; }
                    refreshed.emplace(id, std::move(row));
                }
            if (!found) rebuild = true;
            if (rebuild) break;
        }
    }
    if (rebuild && !read_appended(0)) return false;

    // All native reads succeeded. An allocation failure during commit leaves
    // this flag set and discards the partial snapshot. Existing readers retain
    // their immutable copy, and even a failed retry cannot expose partial data.
    g_native_announcement_history_full_refresh = true;
    struct CommitGuard {
        bool complete = false;
        ~CommitGuard() { if (!complete) g_native_announcement_snapshot.reset(); }
    } commit;
    const bool changed = rebuild || removed || !appended.empty() ||
        !g_native_announcement_recent_changes.empty() ||
        std::any_of(refreshed.begin(), refreshed.end(), [](const auto &entry) {
            return g_native_announcement_groups.at(entry.first).row.repeats != entry.second.repeats;
        });
    if (rebuild) {
        g_native_announcement_snapshot = std::make_shared<NativeAnnouncementSnapshot>();
        g_native_announcement_rows.clear();
        g_native_announcement_groups.clear();
        g_native_announcement_group_keys.clear();
        g_native_announcement_group_sequence = 0;
        removed_groups.clear();
        refreshed.clear();
        removed = 0;
    }
    if (changed) {
        auto &snapshot = native_announcement_writable_snapshot();
        for (uint64_t id : removed_groups) {
            const auto found = g_native_announcement_groups.find(id);
            if (found == g_native_announcement_groups.end()) continue;
            native_announcement_group_change(snapshot, id, found->second, false);
            g_native_announcement_groups.erase(found);
        }
        while (removed > 0) { g_native_announcement_rows.pop_front(); --removed; }
        std::set<uint64_t> changed_groups;
        for (auto &[id, row] : refreshed) {
            auto &group = g_native_announcement_groups.at(id);
            if (group.row.repeats == row.repeats) continue;
            // Repeats leave the base paragraph and its trie entry unchanged.
            // Replace only the visible " xN" variant.
            native_announcement_repeat_change(snapshot, id, group, false);
            group.row = std::move(row);
            native_announcement_repeat_change(snapshot, id, group, true);
        }
        for (auto &cached : appended) {
            const auto &row = cached.row;
            if (row.continued) {
                // A purged head leaves an incomplete leading continuation.
                // Such rows cannot claim a whole announcement paragraph.
                if (!g_native_announcement_groups.empty()) {
                    auto &[id, group] = *g_native_announcement_groups.rbegin();
                    if (group.row.type == row.type) {
                        if (changed_groups.insert(id).second)
                            native_announcement_group_change(snapshot, id, group, false);
                        group.source += ' ';
                        group.source += row.source;
                        cached.group = id;
                    }
                }
            } else {
                const uint64_t id = ++g_native_announcement_group_sequence;
                g_native_announcement_groups.emplace(id,
                    NativeAnnouncementGroup{cached.address, row, row.source, {}});
                changed_groups.insert(id);
                cached.group = id;
            }
            g_native_announcement_rows.push_back(std::move(cached));
        }
        for (uint64_t id : changed_groups) {
            auto &group = g_native_announcement_groups.at(id);
            group.normalized = native_announcement_display_source(group.source);
            native_announcement_group_change(snapshot, id, group, true);
        }
        if (rebuild) {
            for (const auto &record : g_native_announcement_sources)
                native_announcement_snapshot_change(snapshot,
                    native_announcement_display_source(record.source), {2, record.sequence},
                    record.source.size(), true);
        } else for (const auto &change : g_native_announcement_recent_changes)
            native_announcement_snapshot_change(snapshot, change.source,
                change.order, change.length, change.add);
        native_announcement_compact_snapshot();
    }
    g_native_announcement_history_index = std::move(records);
    g_native_announcement_history_next_id = next_id;
    g_native_announcement_history_world = world;
    g_native_announcement_pending.clear();
    g_native_announcement_recent_changes.clear();
    g_native_announcement_history_full_refresh = false;
    commit.complete = true;
    return true;
}

static std::shared_ptr<const NativeAnnouncementSnapshot> native_announcement_sources() {
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    if (g_native_announcement_history_query_epoch == epoch &&
            !g_native_announcement_history_full_refresh && g_native_announcement_pending.empty() &&
            g_native_announcement_recent_changes.empty() && g_native_announcement_snapshot)
        return g_native_announcement_snapshot;
    std::vector<uintptr_t> records;
    int32_t next_id = -1;
    uintptr_t world = 0;
    if (native_announcement_history_index(records, next_id, world) &&
            refresh_native_announcement_history(std::move(records), next_id, world))
        g_native_announcement_history_query_epoch = epoch;
    else {
        // Failed borrowed reads do not publish half of a history update. Live
        // captured sources are still useful, and a later call retries in full.
        g_native_announcement_history_full_refresh = true;
        if (!g_native_announcement_snapshot || !g_native_announcement_recent_changes.empty()) {
            const bool rebuild_recent = !g_native_announcement_snapshot;
            auto &snapshot = native_announcement_writable_snapshot();
            if (rebuild_recent) {
                for (const auto &record : g_native_announcement_sources)
                    native_announcement_snapshot_change(snapshot,
                        native_announcement_display_source(record.source), {2, record.sequence},
                        record.source.size(), true);
            } else for (const auto &change : g_native_announcement_recent_changes)
                native_announcement_snapshot_change(snapshot, change.source,
                    change.order, change.length, change.add);
            g_native_announcement_recent_changes.clear();
        }
    }
    return g_native_announcement_snapshot;
}

static void clear_native_announcement_sources() {
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    g_native_announcement_sources.clear();
    g_native_speech_sources.clear();
    g_native_announcement_log_owner = 0;
    g_native_announcement_log_epoch = 0;
    g_native_announcement_history_index.clear();
    g_native_announcement_history_next_id = -1;
    g_native_announcement_history_world = 0;
    g_native_announcement_rows.clear();
    g_native_announcement_groups.clear();
    g_native_announcement_group_keys.clear();
    g_native_announcement_group_sequence = 0;
    g_native_announcement_recent_sequence = 0;
    g_native_announcement_pending.clear();
    g_native_announcement_recent_changes.clear();
    g_native_announcement_history_full_refresh = true;
    g_native_announcement_snapshot.reset();
    g_native_announcement_history_query_epoch = 0;
}
