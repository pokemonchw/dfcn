// A retained age/collection tab predates the currently loaded core. Recover
// its event body through the same native producer used on initial creation.
// Both constructors store tab type 9 in DF 53.16. Their index spaces differ;
// only a complete native token/link match may choose a candidate.
using NativeHistoryCollectionRecoveryScratch = NativeHistoryScratch;

static std::optional<size_t> native_history_collection_suffix(
        const NativeHistoryRichBox &generated, const NativeHistoryRichBox &existing) {
    NativeHistoryRichBox left{}, right{};
    if (!native_history_markup_box(reinterpret_cast<uintptr_t>(&generated), left) ||
            !native_history_markup_box(reinterpret_cast<uintptr_t>(&existing), right)) return std::nullopt;
    const size_t count = left.words.size(), total = right.words.size();
    if (!count || count > total) return std::nullopt;
    const size_t begin = total - count;
    // The constructor's description ends at a native control-word boundary.
    // Never bind an equal-looking suffix that begins in the middle of a row.
    if (begin) {
        uint32_t flags = 0;
        if (!native_history_markup_read(native_history_markup_element(right.words, begin - 1),
                {0x30, "markup_text_wordst", "flags"}, flags) || !(flags & 7)) return std::nullopt;
    }
    const auto link = [](const NativeHistoryRichBox &box, int32_t index,
            NativeHistoryRichLink &result) {
        if (index == -1) { result = {-1, -1, -1}; return true; }
        if (index < 0 || static_cast<size_t>(index) >= box.links.size()) return false;
        return native_history_markup_link(native_history_markup_element(box.links,
            static_cast<size_t>(index)), result);
    };
    for (size_t index = 0; index < count; ++index) {
        NativeHistoryMarkupWord a, b;
        NativeHistoryRichLink first_link{}, second_link{};
        if (!native_history_markup_word(native_history_markup_element(left.words, index), a) ||
                !native_history_markup_word(native_history_markup_element(right.words, begin + index), b) ||
                a.source != b.source || a.red != b.red || a.green != b.green || a.blue != b.blue ||
                a.flags != b.flags || !link(left, a.link_index, first_link) ||
                !link(right, b.link_index, second_link) ||
                first_link.type != second_link.type || first_link.id != second_link.id ||
                first_link.subid != second_link.subid) return std::nullopt;
    }
    // The leading description can allocate its own links; numeric link-table
    // indices are local to each parse. Their native type/ID/subID is identity.
    return begin;
}

static bool recover_native_history_collection_page(const NativeHistoryLegendsTab &tab,
        NativeHistoryRichBox *box) {
    if (tab.type != 9 || tab.index < 0 || !box ||
            !g_real_native_history_collection || !g_real_native_history_append ||
            !g_real_native_history_links || !native_history_profile_base()) return false;
    struct Candidate { uintptr_t age = 0, collection = 0; };
    // Binding the recovered timeline replaces this owner's registry entries.
    // Hold its existing owned snapshots first, including a war constructor's
    // original random cause selection that no longer exists in native fields.
    const auto retained_documents = captured_native_history_documents();
    std::vector<Candidate> candidates;
    const auto index_value = [&](uintptr_t address, int32_t &value) {
        NativeBorrowedVector<int32_t> values;
        return native_history_copy(address, values) && values.valid(1048576) &&
            static_cast<size_t>(tab.index) < values.size() &&
            native_history_copy(reinterpret_cast<uintptr_t>(values.begin) +
                sizeof(int32_t) * static_cast<size_t>(tab.index), value) && value >= 0;
    };
    int32_t collection_id = -1;
    uintptr_t collection = 0;
    if (index_value(native_history_object_field(tab.screen, "viewscreen_legendsst", 0x300), collection_id) &&
            native_history_material_find_id(native_history_page_address(NativeHistoryPageSymbol::Collections),
                0x58, collection_id, collection) && collection)
        candidates.push_back({0, collection});
    int32_t age_index = -1;
    NativeBorrowedVector<uintptr_t> ages;
    if (index_value(native_history_object_field(tab.screen, "viewscreen_legendsst", 0x2b8), age_index) &&
            native_history_read_vector(native_history_page_address(NativeHistoryPageSymbol::Ages), ages) &&
            ages.valid(1048576) && static_cast<size_t>(age_index) < ages.size()) {
        const uintptr_t age = native_history_vector_at(ages, static_cast<size_t>(age_index));
        if (age) candidates.push_back({age, 0});
    }
    NativeHistoryLegendsPage selected;
    Candidate selected_candidate;
    size_t selected_begin = 0;
    bool found = false;
    for (const auto &candidate : candidates) {
        NativeHistoryCollectionRecoveryScratch scratch;
        capture_native_history_collection(reinterpret_cast<void *>(tab.screen), &scratch.source,
            reinterpret_cast<void *>(candidate.age), reinterpret_cast<void *>(candidate.collection));
        auto &state = native_history_legends_state();
        auto page = std::move(state.completed);
        state.completed = {};
        if (!page.source_complete || page.source != &scratch.source) continue;
        std::optional<size_t> begin;
        if (page.complete_source.empty()) {
            // A timeline can have no body at all. Its retained tab's name is
            // a separate native field written by these exact constructors;
            // match that owner before accepting an introduction-only page.
            NativeHistoryPageString title;
            if (candidate.age) {
                reinterpret_cast<void (*)(void *, NativeString *)>(
                    native_history_page_address(NativeHistoryPageSymbol::AgeTitle)
                )(
                    reinterpret_cast<void *>(candidate.age), &title.value);
            } else {
                uintptr_t table = 0, formatter = 0;
                if (
                        native_history_collection_type(candidate.collection) < 0 ||
                        !native_history_copy(candidate.collection, table) ||
                        !native_history_copy(table + 0x30, formatter)) continue;
                reinterpret_cast<void (*)(void *, NativeString *)>(formatter)(
                    reinterpret_cast<void *>(candidate.collection), &title.value);
            }
            std::string_view expected, retained;
            if (!native_string_view(&title.value, &expected, kNativeHistoryStringLimit) ||
                    !native_string_view(reinterpret_cast<const NativeString *>(native_history_legends_tab_header(tab.tab)),
                        &retained, kNativeHistoryStringLimit) || expected != retained) continue;
            const size_t total = native_history_word_count(box);
            if (total == SIZE_MAX) continue;
            begin = total;
        } else {
            g_real_native_history_append(&scratch.box, &scratch.source);
            g_real_native_history_links(reinterpret_cast<void *>(tab.screen), &scratch.box);
            begin = native_history_collection_suffix(scratch.box, *box);
        }
        if (!begin) continue;
        if (found) {
            // A tab index is not globally unique. Reject ambiguous native
            // bodies rather than associating it with another object space.
            if (selected_candidate.age != candidate.age || selected_candidate.collection != candidate.collection ||
                    selected_begin != *begin || selected.spans.size() != page.spans.size()) return false;
            for (size_t index = 0; index < page.spans.size(); ++index) {
                const auto &a = selected.spans[index], &b = page.spans[index];
                if (a.begin != b.begin || a.end != b.end || a.event.id != b.event.id ||
                        a.event.native_type != b.event.native_type || a.source != b.source) return false;
            }
            continue;
        }
        // Only owned strings/snapshots leave this scope. The scratch source
        // address is no longer relevant once the native token match succeeds.
        page.source = nullptr;
        selected = std::move(page);
        selected_candidate = candidate;
        selected_begin = *begin;
        found = true;
    }
    if (!found) return false;
    const size_t events = selected.spans.size();
    bool region_bound = false;
    const bool complete = bind_native_history_legends_page(std::move(selected), box,
        selected_begin, &region_bound);
    bool prefix_complete = true;
    if (selected_begin) {
        NativeHistoryRichBox view{};
        if (!native_history_markup_box(reinterpret_cast<uintptr_t>(box), view)) return false;
        size_t prefix_end = selected_begin;
        while (prefix_end) {
            NativeHistoryMarkupWord word;
            if (!native_history_markup_word(native_history_markup_element(view.words, prefix_end - 1), word)) return false;
            if (!word.source.empty() || !(word.flags & 7)) break;
            --prefix_end;
        }
        if (prefix_end) {
            auto document = std::make_shared<NativeHistoryDocument>();
            document->owner = reinterpret_cast<uintptr_t>(box);
            if (!copy_native_history_tokens(box, 0, document->tokens, prefix_end)) return false;
            const auto kind = selected_candidate.age ? NativeHistoryPageKind::AgeIntroduction :
                NativeHistoryPageKind::CollectionIntroduction;
            for (const auto &retained : retained_documents) {
                if (!retained || retained->owner != document->owner || !retained->page ||
                        retained->page->kind != kind ||
                        retained->page->data.fields.contains("snapshot.incomplete") ||
                        retained->tokens.size() != document->tokens.size()) continue;
                if (kind == NativeHistoryPageKind::CollectionIntroduction) {
                    const auto marker = retained->page->data.fields.find("marker");
                    if (marker == retained->page->data.fields.end() || marker->second.size() != 1 ||
                            marker->second.front() != 0) continue;
                }
                // Identity, source, color and all three native link fields
                // must still match. Coordinates can change during relayout.
                if (!std::equal(document->tokens.begin(), document->tokens.end(),
                        retained->tokens.begin(), same_native_history_token)) continue;
                document->page = retained->page;
                break;
            }
            // The retained words establish ownership only. The introduction's
            // predicate, counts, dates and subjects come from its native owner.
            if (!document->page) document->page = snapshot_native_history_collection_introduction(
                    reinterpret_cast<void *>(selected_candidate.age),
                    reinterpret_cast<void *>(selected_candidate.collection));
            if (!document->page) {
                prefix_complete = false;
                document->page.emplace();
                document->page->kind = selected_candidate.age ? NativeHistoryPageKind::AgeIntroduction :
                    NativeHistoryPageKind::CollectionIntroduction;
                document->page->data.fields["snapshot.incomplete"] = {1};
            }
            for (const auto &token : document->tokens) {
                if (!document->native_source.empty()) document->native_source += ' ';
                document->native_source += token.source;
            }
            if (!remember_native_history_documents({document})) return false;
            std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
            const auto ready = g_native_history_legends_ready.find(document->owner);
            if (ready != g_native_history_legends_ready.end()) ready->second.sequences.push_back(document->sequence);
        }
    }
    // Successful registration of the body alone is not sufficient: the
    // introduction is a second batch belonging to that same retained owner.
    const bool retained = complete && native_history_legends_ready();
    log_line(retained && prefix_complete ? "INFO" : "WARN", "Native Legends collection recovery: index=" +
        std::to_string(tab.index) + "; events=" + std::to_string(events) +
        "; prefix_words=" + std::to_string(selected_begin) +
        "; ownership=" + std::to_string(region_bound) +
        "; prefix_snapshot=" + std::to_string(prefix_complete) +
        "; records_retained=" + std::to_string(retained) +
        (retained ? "; retained events bound" : "; event snapshots incomplete"));
    return retained && prefix_complete;
}
