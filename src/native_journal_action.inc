// Shift+F1 supplies the native-thread dispatch and journal sink. The subscriber
// supplies all census logic and the formatter for its saved report text.
struct NativeJournalModule {
    fs::path path;
    void *handle = nullptr;
    const DfcnJournalAction *action = nullptr;
    ~NativeJournalModule() { if (handle) SDL_UnloadObject(handle); }
};
static std::atomic<std::shared_ptr<NativeJournalModule>> g_journal_module;
static uint64_t g_journal_poll = 0;

// Menu callers hold TranslationStateScope, which also serializes discovery.
static const DfcnJournalAction *native_journal_action() {
    const auto module = g_journal_module.load();
    return module ? module->action : nullptr;
}
static void native_journal_release() {
    TranslationStateScope translation;
    g_journal_module.store(nullptr);
    g_journal_poll = 0;
}
static void native_journal_refresh(bool force) try {
#ifdef _WIN32
    TranslationStateScope translation;
    const auto now = SDL_GetTicks64();
    if (!force && now - g_journal_poll < 1000) return;
    g_journal_poll = now;
    const auto current = g_journal_module.load();
    const auto candidates = extensions::discover_plant_survey_modules();
    if (current && std::find(candidates.begin(),candidates.end(),current->path) != candidates.end()) return;
    std::shared_ptr<NativeJournalModule> next;
    for (const auto &path : candidates) {
        auto module = std::make_shared<NativeJournalModule>();
        module->path = path;
        module->handle = SDL_LoadObject(runtime::utf8(path).c_str());
        if (!module->handle) continue;
        const auto get = reinterpret_cast<DfcnGetJournalAction>(
            SDL_LoadFunction(module->handle,"dfcn_journal_action"));
        const auto *api = get ? get(DFCN_JOURNAL_ACTION_ABI) : nullptr;
        if (!api || api->abi != DFCN_JOURNAL_ACTION_ABI || api->size != sizeof(*api) ||
                !api->english || !api->chinese || !api->report_prefix || !*api->report_prefix ||
                !api->collect || !api->translate) continue;
        module->action = api;
        next = std::move(module);
        break;
    }
    if (!next && !current) return;
    g_journal_module.store(std::move(next));
    g_native_settings_menu.hits_ready = false;
    g_native_settings_menu.hovered = -1;
    g_native_settings_menu_layer.ready = false;
#endif
} catch (const std::exception &e) {
    log_line("WARN",std::string("Journal extension discovery: ") + e.what());
}
static std::optional<std::string> native_journal_translation(std::string_view source) {
    const auto module = g_journal_module.load();
    if (!module || !source.starts_with(module->action->report_prefix)) return std::nullopt;
    std::string result;
    const bool matched = module->action->translate(source.data(),source.size(),
        [](void *ctx, const char *text, size_t size, bool plant_name) {
            const std::string_view part(text,size);
            auto &out = *static_cast<std::string *>(ctx);
            if (plant_name) out += translate_plant_name(part).value_or(native_text_to_utf8(part));
            else out.append(part);
        },&result);
    return matched ? std::optional<std::string>(std::move(result)) : std::nullopt;
}

static bool native_journal_run(std::string &error) {
    error = "当前没有可用的要塞地图";
#ifdef _WIN32
    const auto module = g_journal_module.load();
    const auto base = native_history_profile_base();
    if (!base || !native_fortress_gameplay_screen()) return false;
    error = "当前无法读取扩展或地图数据";
    if (!module) return false;
    const auto world = native_reference_address(base,native_history_layout::world_rva);
    const auto manager = native_history_global(0x23d14f0 + 0x112360); // world.status
    const auto submit = reinterpret_cast<NativeAnnouncementFn>(native_reference_address(base,0xe3c20));
    if (!world || !manager || !submit) return false;
    // All these event types route to Environment. Prefer display without
    // pauses, recentering, alert buttons or modal popups.
    const auto settings = native_history_named_global("d_init","announcements.flags",sizeof(uint32_t));
    if (!settings) return false;
    int16_t event = 292;
    for (const int16_t id : {292,293,294,297,298,299,300,267,4,5,51,52}) {
        uint32_t flags = 0;
        if (native_history_copy(settings + sizeof(flags)*id,flags) && (flags & 0x97) == 0x10) {
            event = id;
            break;
        }
    }
    std::vector<std::string> lines;
    if (!module->action->collect(base,world,[](void *ctx,const char *s,size_t size) {
            static_cast<std::vector<std::string> *>(ctx)->emplace_back(s,size);
        },&lines) || lines.empty()) return false;
    // df::announcement_infost, Windows x64. Location-less journal entries
    // carry no units, activities, historical figures or recenter target.
    struct Info {
        int16_t type, color = 7; uint8_t bright = 0;
        int16_t pos[3]{-30000,-30000,-30000}; int32_t zoom = -1;
        int16_t pos2[3]{-30000,-30000,-30000}; int32_t zoom2 = -1;
        int16_t timer = 0; void *first = nullptr, *second = nullptr;
        int32_t activity = -1, event_id = -1, speaker = -1;
        uint32_t flags = 0; int32_t portrait = -1;
    } info{event};
    // This synchronous, player-requested journal write has its own display
    // policy. Restore the game's exact announcement options before returning
    // to the simulation, including when normal environmental alerts are muted.
    auto *options = reinterpret_cast<uint32_t *>(settings) + event;
    const uint32_t saved = *options;
    struct Restore {
        uint32_t *options;
        uint32_t saved;
        ~Restore() { if (options) *options = saved; }
    } restore{(saved & 0x97) == 0x10 ? nullptr : options, saved};
    if (restore.options) *options = 0x10;
    for (const auto &line : lines) {
        auto text = native_empty_string();
        text.size = line.size();
        if (text.size <= 15) std::memcpy(text.storage.small,line.c_str(),text.size+1);
        else { text.storage.heap = const_cast<char *>(line.c_str()); text.capacity = text.size; }
        submit(reinterpret_cast<void *>(manager),&text,&info);
    }
    return true;
#else
    return false;
#endif
}
