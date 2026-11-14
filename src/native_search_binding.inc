// One binding resolver for every search feature. Executable signatures are
// data, not platform feature switches. An unsupported/missing binding fails
// installation instead of silently leaving a search field untranslated.
struct NativeSearchSignature {
    uintptr_t offset;
    std::vector<unsigned char> bytes;
    bool bytes_are_native = false;
};

#ifdef _WIN32
static constexpr uintptr_t native_search_reference_origin = 0;
#else
static constexpr uintptr_t native_search_reference_origin = 0x400000;
#endif

// Relocated native routines use the same instruction/field signatures rather
// than borrowing a Classic executable's addresses for a Steam image. Ranges
// and fragments are ABI data; matching/filtering policy never lives here.
struct NativeSearchRoutineSignature {
    uintptr_t begin, end;
    std::vector<NativeSearchSignature> fragments;
};

static uintptr_t locate_native_search_routine(uintptr_t base,
        NativeSearchRoutineSignature routine) {
    if (!base || routine.begin >= routine.end ||
        routine.end - routine.begin > 1024 * 1024 ||
        routine.end > UINTPTR_MAX - base || routine.fragments.empty() ||
        routine.fragments.front().offset != 0 ||
        routine.fragments.front().bytes.empty()) return 0;
    const uintptr_t reference_begin = routine.begin;
    const uintptr_t length = routine.end - routine.begin;
    routine.begin = native_reference_rva(reference_begin);
    if (!routine.begin || length > UINTPTR_MAX - routine.begin) return 0;
    routine.end = routine.begin + length;
    for (auto &fragment : routine.fragments)
        if (!native_reference_bytes(native_search_reference_origin + reference_begin + fragment.offset,
                                    fragment.bytes)) return 0;
    std::vector<unsigned char> code(routine.end - routine.begin);
    if (!native_history_copy_bytes(base + routine.begin, code.data(), code.size()))
        return 0;
    const auto &anchor = routine.fragments.front().bytes;
    uintptr_t found = 0;
    auto cursor = code.begin();
    while ((cursor = std::search(cursor, code.end(), anchor.begin(), anchor.end()))
            != code.end()) {
        const size_t offset = static_cast<size_t>(cursor - code.begin());
        const bool matches = std::all_of(routine.fragments.begin(),
            routine.fragments.end(), [&](const NativeSearchSignature &part) {
                return part.offset <= code.size() - offset &&
                    part.bytes.size() <= code.size() - offset - part.offset &&
                    std::equal(part.bytes.begin(), part.bytes.end(),
                        cursor + part.offset);
            });
        if (matches) {
            if (found) return 0; // Never guess between two native routines.
            found = routine.begin + offset;
        }
        ++cursor;
    }
    return found;
}

static bool native_search_signatures_match(uintptr_t base,
        const std::vector<NativeSearchSignature> &signatures, std::string &failure) {
    if (!base || signatures.empty()) {
        failure = "missing image base or signatures";
        return false;
    }
    for (const auto &signature : signatures) {
        const auto fail = [&](const char *reason, uintptr_t address = 0) {
            char detail[192];
            std::snprintf(detail, sizeof(detail), "%s; reference RVA=0x%llx; native address=0x%llx",
                reason, static_cast<unsigned long long>(signature.offset),
                static_cast<unsigned long long>(address));
            failure = detail;
            return false;
        };
        if (signature.bytes.empty() || signature.offset > UINTPTR_MAX - base)
            return fail("invalid signature extent");
        auto expected = signature.bytes;
        if (!signature.bytes_are_native &&
            !native_reference_bytes(native_search_reference_origin + signature.offset, expected))
            return fail("unresolved expected-byte binding");
        const uintptr_t address = native_reference_address(base, signature.offset);
        if (!address) return fail("unresolved address binding");
        std::vector<unsigned char> observed(expected.size());
        if (!native_history_copy_bytes(address, observed.data(), observed.size()))
            return fail("unreadable signature", address);
        if (observed != expected) return fail("signature bytes differ", address);
    }
    return true;
}

template<typename Profile>
struct NativeSearchBinding {
    std::vector<NativeSearchSignature> signatures;
    Profile profile;
};

template<typename Profile, size_t Count>
static bool resolve_native_search_binding(
        const NativeSearchBinding<Profile> (&bindings)[Count], Profile &profile,
        const char *label) {
    const uintptr_t base = native_history_profile_base();
    const Profile *found = nullptr;
    std::vector<std::string> failures;
    for (const auto &binding : bindings) {
        std::string failure;
        if (!native_search_signatures_match(base, binding.signatures, failure)) {
            failures.push_back(std::move(failure));
            continue;
        }
        if (found) {
            report_native_patch_error("ERROR", label, "ambiguous executable binding");
            return false;
        }
        found = &binding.profile;
    }
    if (!found || found->calls.empty()) {
        report_native_patch_error("ERROR", label, "complete native search binding is unavailable");
        for (const auto &failure : failures)
            report_native_patch_error("ERROR", label, failure.c_str());
        return false;
    }
    profile = *found;
    profile.base = base;
    if (!native_reference_calls(profile.calls, native_search_reference_origin)) {
        report_native_patch_error("ERROR", label, "unresolved edition call binding");
        return false;
    }
    return true;
}

// This is the byte substring contract used by the native filters (including
// empty queries and npos). A single implementation avoids exposing compiler
// specific argument orders to the shared translated-search callbacks.
static void refresh_native_search_world(bool force=false,bool item_domain=true,bool force_materials=false);
static std::optional<SearchDescriptor> take_native_search_caption(uintptr_t, std::string_view);
static void clear_native_search_captions();
static size_t native_search_byte_find(const char *text, size_t length, size_t start,
        const char *query, size_t query_length) {
    if(query && query_length && query_length<=4096 && g_overlay.translation_enabled() && search_native_query_hint()!=std::string_view(query,query_length))
        search_native_query_hint().assign(query,query_length);
    if ((!text && length) || (!query && query_length)) return SIZE_MAX;
    const size_t result = std::string_view(text ? text : "", length).find(
        std::string_view(query ? query : "", query_length), start);
    return result;
}
static void prepare_native_search_facts(const NativeString *query,bool item_domain=true) {
    NativeInputCallbackScope callback;
    try {
    std::string_view text;
    if(g_overlay.translation_enabled() && native_string_view(query,&text,4096) && !text.empty()) {
        search_native_query_hint()=text;refresh_native_search_world(false,item_domain);
    }
    } catch(...) {}
}

// POD native strings require the game's destructor; an owning NativeString
// destroys itself. The binding supplies only the additional ABI destructor.
using NativeSearchDestroyFn = void (*)(NativeString *);
struct NativeSearchString {
    NativeString value = native_empty_string();
    NativeSearchDestroyFn destroy = nullptr;
    static bool supported(NativeSearchDestroyFn fn) noexcept {
        return fn || !std::is_trivially_destructible_v<NativeString>;
    }
    explicit NativeSearchString(NativeSearchDestroyFn fn) : destroy(fn) {}
    NativeSearchString(const NativeSearchString &) = delete;
    NativeSearchString &operator=(const NativeSearchString &) = delete;
    ~NativeSearchString() { if (destroy) destroy(&value); }
};

using NativeSearchFoldFn = void (*)(NativeString *);
struct NativeSearchTermSpelling {
    const NativeString *term = nullptr;
    std::string source, folded;
};
static std::vector<NativeSearchTermSpelling> &native_search_term_spellings() {
    return reloadable_thread_state<std::vector<NativeSearchTermSpelling>,
        struct SearchTermSpellingTag>();
}

static bool native_search_display_term(const NativeString *term,
        std::string_view *source, size_t maximum) {
    std::string_view folded;
    if (!source || !native_string_view(term, &folded, maximum)) return false;
    for (const auto &spelling : native_search_term_spellings()) {
        if (spelling.term == term && folded == spelling.folded &&
            spelling.source.size() <= maximum) {
            *source = spelling.source;
            return true;
        }
    }
    *source = folded;
    return true;
}

static void fold_native_search_query(NativeString *text, NativeSearchFoldFn original) {
    NativeInputCallbackScope callback;
    try {
        clear_native_search_captions();
        static std::atomic<uint64_t> lists{1};search_native_list_generation()=lists.fetch_add(1);
        std::string_view query;
        search_native_query_hint()=native_string_view(text,&query,4096)?std::string(query):std::string{};
        native_search_term_spellings().clear();
        if (fold_native_unicode_search_query(text)) return;
    } catch (...) {}
    if (original) callback.call_native([&] { original(text); });
}

static void fold_native_search_term(NativeString *text,
        const NativeString *query_string, NativeSearchFoldFn original) {
    NativeInputCallbackScope callback;
    std::string source;
    bool preserve_unicode = false;
    try {
        std::string_view query, spelling;
        // Translated matching needs the complete display spelling, including
        // generated names. Only temporary filter strings reach this boundary.
        if (g_overlay.translation_enabled() &&
            native_string_view(query_string, &query, 4096) && !query.empty() &&
            native_string_view(text, &spelling, 65536)) {
            source.assign(spelling);
            preserve_unicode = contains_non_ascii_codepoint(query);
        }
    } catch (...) {}
    if (original && !preserve_unicode) callback.call_native([&] { original(text); });
    try {
        std::string_view folded;
        if (source.empty() || !native_string_view(text, &folded, 65536)) return;
        auto &spellings = native_search_term_spellings();
        std::erase_if(spellings, [&](const auto &spelling) { return spelling.term == text; });
        // Scratch strings are reused within a single native filter. Bound the
        // retained originals, and require the current folded bytes on lookup.
        if (spellings.size() == 16) spellings.erase(spellings.begin());
        spellings.push_back({text, std::move(source), std::string(folded)});
    } catch (...) {}
}

// Some native compilers inline substring comparisons. Their temporary search
// key is still prepared at a normal folding call. Feed the SAME match result
// into that temporary key, without editing candidate records or duplicating
// candidate traversal/eligibility/selection in another implementation.
template<typename Match>
static void prepare_native_inlined_search_term(NativeString *term,
        const NativeString *query_string, NativeSearchFoldFn original, Match match) {
    NativeInputCallbackScope callback;
    std::string source;
    try {
        std::string_view spelling;
        if (native_string_view(term, &spelling, 65536)) source.assign(spelling);
    } catch (...) {}
    if (original) callback.call_native([&] { original(term); });
    try {
        std::string_view query, text;
        if (!g_overlay.translation_enabled() ||
            !native_string_view(query_string, &query, 4096) ||
            query.empty() || source.empty() ||
            !native_string_view(term, &text, 65536)) return;
        search_native_query_hint()=query;
        auto descriptor = take_native_search_caption(reinterpret_cast<uintptr_t>(term), source);
        std::unique_ptr<SearchDescriptorScope> descriptor_scope;
        if (descriptor) {
            descriptor->candidate_id.owner=reinterpret_cast<uintptr_t>(query_string);
            descriptor_scope = std::make_unique<SearchDescriptorScope>(*descriptor);
        }
        const bool native_match = text.find(query) != std::string_view::npos;
        SearchNativeHitScope native_hit(native_match);
        const bool accepted = match(source, query);
        if (native_match == accepted) return;
        // Native assignment preserves the game's allocator/SSO ownership.
        // Only this filter's disposable key is changed, never its source.
        const auto assign = reinterpret_cast<void (*)(NativeString *, const char *)>(
            native_history_page_address(NativeHistoryPageSymbol::AssignLiteral));
        if (assign) {
            // An empty disposable key rejects a nonempty query. This also
            // removes the native substring hit weapon -> weapon rack.
            const std::string committed(accepted ? query : std::string_view{});
            assign(term, committed.c_str());
        }
    } catch (...) {}
}
