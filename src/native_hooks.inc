// One capture/input policy and one hook lifecycle. Native adapters only bind
// symbols, ABI layouts, call sites and operating-system interfaces.
#include "native_text_abi.h"
#include "native_identity_translation_jobs.inc"
#include "native_text_capture.inc"
#include "native_text_input.inc"
#include "native_arena_adapter.inc"
#include "native_code_patch.inc"
#ifndef _WIN32
#include "native_inline_observer_elf.inc"
#endif
#include "native_image_adapter.inc"
#include "native_stone_use_guard.inc"
#include "native_mouse_click.inc"
static bool capture_native_history_page_event(int32_t id, NativeHistoryEventData &parent);
static bool capture_native_history_page_program(uintptr_t program, NativeHistoryEventData &data, int32_t mode = 2);
static bool capture_native_history_page_item(const std::vector<int32_t> &tuple,
    NativeHistoryEventData &data, std::string_view role, int32_t count = 1, int32_t item_id = -1);
static bool capture_native_history_subject_item_labels(NativeHistoryEventData &data);
static bool native_history_site_type(uintptr_t site, NativeHistoryEventData &out,
    const std::string &prefix);
static bool native_history_war_selection(uintptr_t collection, int32_t &category,
    int32_t &index, int32_t &count);
#include "native_history_names.inc"
#include "native_workshop_names.inc"
#include "native_world_artifact_cache.inc"
#include "native_announcement_history.inc"
#include "native_fortress_alert_sources.inc"
#include "native_history_page_adapter.inc"
#include "native_character_kinship.inc"
#include "native_history_event.inc"
#include "native_performance_choice.inc"
#include "native_history_relationships.inc"
#include "native_history_page.inc"
#include "native_history_collection_page.inc"
#include "native_history_capture.inc"
#include "native_dfhack_raw_creatures.inc"
#include "native_history_hooks.inc"
#include "native_announcement_log_event_sources.inc"
#include "native_fortress_map_hud.inc"
#include "native_stockpile_settings.inc"
#include "native_work_order_shops.inc"
#include "native_work_order_conditions.inc"
#include "native_workshop_task_capture.inc"
#include "native_arena_tree_capture.inc"
#include "native_workshop_choice_capture.inc"
#include "native_caravan_picker.inc"
#include "native_adventure_belief_source.inc"
#include "native_adventure_belief_choices.inc"
#include "native_announcement_popup.inc"
#include "native_adventure_quest_source.inc"
#include "native_mod_details.inc"
#include "native_embark_reclaim_history.inc"
#include "native_ime_adapter.inc"
#include "native_input_hooks.inc"
#include "native_search_binding.inc"
#include "native_arena_tree_search_hooks.inc"
#include "name_editor_search.inc"
#include "native_item_search_hooks.inc"
#include "native_stocks_search_hooks.inc"
#include "native_unit_search_hooks.inc"
#include "native_unit_identity_hooks.inc"
#include "native_fortress_zone_capture.inc"
#include "native_justice_organizations.inc"
#include "native_justice_plots.inc"
#include "native_squad_name_hooks.inc"
#include "native_adventure_charge_hooks.inc"
#include "native_adventure_introduction.inc"
#include "native_overview_event_hooks.inc"
#include "native_legends_search_hooks.inc"
#include "native_workshop_search_hooks.inc"
#include "native_material_search_hooks.inc"
#include "native_stockpile_search_hooks.inc"
#include "native_symbol_search_hooks.inc"
#include "native_conversation_search_hooks.inc"
#include "native_journal_search_hooks.inc"
#include "native_item_picker_search_hooks.inc"
#include "native_kitchen_search_hooks.inc"
#include "native_justice_search_hooks.inc"
#include "native_justice_actor_capture.inc"
#include "native_job_details_search_hooks.inc"
#include "native_adventure_barter_search_hooks.inc"
#include "native_construction_search_hooks.inc"
#include "native_adventure_hover_source.inc"
#include "native_caption_hooks.inc"
#include "native_adventure_home_source.inc"
#include "native_adventure_personality_source.inc"
#include "native_character_relations.inc"
#include "native_overview_quote_hooks.inc"
#include "native_paragraph_hooks.inc"
#include "native_trade_paragraph_hooks.inc"
#include "native_journal_event_hooks.inc"
#include "native_journal_artifact_hooks.inc"
#include "native_trade_item_fields.inc"
#include "native_trade_item_hooks.inc"
#include "native_workshop_recipe_hooks.inc"
#include "native_rich_hooks.inc"
#include "native_adventure_hover_hooks.inc"
#include "native_announcement_hooks.inc"
#include "native_dfhack_profile_pe.inc"
#include "native_dfhack_layer_present.inc"
#include "native_ui_cache_context.inc"
#include "native_help_layer_render.inc"
#include "native_resolution_layer_render.inc"
#include "native_tooltip_layer_render.inc"
#include "native_notification_layer_render.inc"
#include "native_petition_layer_render.inc"
#include "native_announcement_log_layer_render.inc"
#include "native_info_layer_render.inc"
#include "native_character_layer_render.inc"
#include "native_stocks_layer_render.inc"
#include "native_display_layer_render.inc"
#include "native_squads_layer_render.inc"
#include "native_reports_layer_render.inc"
#include "native_pause_layer_render.inc"
#include "native_worldgen_layer_render.inc"
#include "native_topbar_layer_render.inc"
#include "native_petitions_layer_render.inc"
#include "native_designation_layer_render.inc"
#include "native_map_hover_layer_render.inc"
#include "native_embark_civilization_layer_render.inc"
#include "native_map_layer_render.inc"
#include "native_dfhack_render_layers.inc"
#include "native_dfhack_capture_hooks.inc"
#include "native_dfhack_graphics_ownership.inc"
#include "native_dfhack_item_print_ticket.h"
#include "native_dfhack_console_hooks.inc"
#include "native_dfhack_lua_output_hooks.inc"
#include "native_dfhack_sitemap_hooks.inc"
#include "native_dfhack_messagebox_hooks.inc"
#include "native_dfhack_prompt_hooks.inc"
#include "native_dfhack_stonesense_hooks.inc"
#include "native_render_resources.inc"

static NativeProcessGuard g_process_instance_guard{NativeGuardRole::Core};
static bool acquire_process_instance_guard() { return g_process_instance_guard.acquire(log_line); }
static void release_process_instance_guard() { g_process_instance_guard.release(); }

static std::array<NativeImportHook, 3> g_render_hooks;
#include "native_render_profile.inc"

static bool install_sdl_hooks() {
    [[maybe_unused]] NativePatchMappingScope mapping_scope;
    // The shared rendering boundary must be safe before any capture callback
    // is exposed. Individual text/search/page contracts are independent: a
    // missing address disables only its own transaction.
    if (!native_prepare_render_bindings()) {
        log_line("ERROR", "Native render import bindings could not be prepared");
        return false;
    }
#ifdef _WIN32
    prepare_native_entry_prefix_certificates();
#endif
    if (!install_native_dfhack_graphics_ownership()) {
        log_line("ERROR", "Native graphics ownership could not be installed");
        return false;
    }
    struct Stage {
        const char *label;
        bool (*install)();
        void (*uninstall)();
        bool (*active)();
    };
    const Stage stages[]{
        {"Native shared UI raster boundary", install_native_ui_raster_hook,
            [] { (void)uninstall_native_ui_raster_hook(); }, [] { return native_ui_raster_hook_active(); }},
        {"Stone economic-use bounds guard", install_native_stone_use_guard,
            [] { (void)g_native_stone_use_guard.uninstall(); }, [] { return g_native_stone_use_guard.active(); }},
        {"Native left-click delivery", install_native_mouse_click_hook,
            [] { (void)g_native_mouse_click_hook.uninstall(); }, [] { return g_native_mouse_click_hook.active(); }},
        {"Unicode input and search", install_native_input_hooks,
            [] { (void)uninstall_native_input_hooks(); }, [] { return native_input_hooks_active(); }},
        {"Translated Arena tree search", install_native_arena_tree_search_hook,
            [] { (void)uninstall_native_arena_tree_search_hook(); }, [] { return native_arena_tree_search_hook_active(); }},
        {"Translated item search", install_native_item_search_hook,
            [] { (void)uninstall_native_item_search_hook(); }, [] { return native_item_search_hook_active(); }},
        {"Translated Stocks search", install_native_stocks_search_hook,
            [] { (void)uninstall_native_stocks_search_hook(); }, [] { return native_stocks_search_hook_active(); }},
        {"Translated unit search", install_native_unit_search_hook,
            [] { (void)uninstall_native_unit_search_hook(); }, [] { return native_unit_search_hook_active(); }},
        {"Native unit identity fields", install_native_unit_identity_hooks,
            [] { (void)uninstall_native_unit_identity_hooks(); }, [] { return native_unit_identity_hooks_active(); }},
        {"Native authored squad names", install_native_squad_name_hooks,
            [] { (void)uninstall_native_squad_name_hooks(); }, [] { return native_squad_name_hooks_active(); }},
        {"Native adventure charge fields", install_native_adventure_charge_hooks,
            [] { (void)uninstall_native_adventure_charge_hooks(); }, [] { return native_adventure_charge_hooks_active(); }},
        {"Native adventure introduction error text", install_native_adventure_introduction_hooks,
            [] { (void)uninstall_native_adventure_introduction_hooks(); }, [] { return native_adventure_introduction_hooks_active(); }},
        {"Native overview event source", install_native_overview_event_hooks,
            [] { (void)uninstall_native_overview_event_hooks(); }, [] { return native_overview_event_hooks_active(); }},
        {"Translated Legends search", install_native_legends_search_hook,
            [] { (void)uninstall_native_legends_search_hook(); }, [] { return native_legends_search_hook_active(); }},
        {"Translated workshop search", install_native_workshop_search_hook,
            [] { (void)uninstall_native_workshop_search_hook(); }, [] { return native_workshop_search_hook_active(); }},
        {"Translated task and work-order material search", install_native_material_search_hook,
            [] { (void)uninstall_native_material_search_hook(); }, [] { return native_material_search_hook_active(); }},
        {"Translated stockpile search", install_native_stockpile_search_hook,
            [] { (void)uninstall_native_stockpile_search_hook(); }, [] { return native_stockpile_search_hook_active(); }},
        {"Translated image creator search", install_native_symbol_search_hook,
            [] { (void)uninstall_native_symbol_search_hook(); }, [] { return native_symbol_search_hook_active(); }},
        {"Conversation keyword search", install_native_conversation_search_hook,
            [] { (void)uninstall_native_conversation_search_hook(); }, [] { return native_conversation_search_hook_active(); }},
        {"Adventure journal search", install_native_journal_search_hook,
            [] { (void)uninstall_native_journal_search_hook(); }, [] { return native_journal_search_hook_active(); }},
        {"Translated display, hauling and trade search", install_native_item_picker_search_hook,
            [] { (void)uninstall_native_item_picker_search_hook(); }, [] { return native_item_picker_search_hook_active(); }},
        {"Translated Kitchen search", install_native_kitchen_search_hook,
            [] { (void)uninstall_native_kitchen_search_hook(); }, [] { return native_kitchen_search_hook_active(); }},
        {"Translated counterintelligence search", install_native_justice_search_hook,
            [] { (void)uninstall_native_justice_search_hook(); }, [] { return native_justice_search_hook_active(); }},
        {"Complete counterintelligence actor fields", install_native_justice_actor_capture_hook,
            [] { (void)uninstall_native_justice_actor_capture_hook(); }, [] { return native_justice_actor_capture_hook_active(); }},
        {"Translated task-detail search", install_native_job_details_search_hook,
            [] { (void)uninstall_native_job_details_search_hook(); }, [] { return native_job_details_search_hook_active(); }},
        {"Translated adventure barter search", install_native_adventure_barter_search_hook,
            [] { (void)uninstall_native_adventure_barter_search_hook(); }, [] { return native_adventure_barter_search_hook_active(); }},
        {"Translated construction material search", install_native_construction_search_hook,
            [] { (void)uninstall_native_construction_search_hook(); }, [] { return native_construction_search_hook_active(); }},
        {"Complete caption capture", install_native_caption_hooks,
            [] { (void)uninstall_native_caption_hooks(); }, [] { return native_caption_hooks_active(); }},
        {"Native inline caption capture", install_native_inline_caption_hooks,
            [] { (void)uninstall_native_inline_caption_hooks(); }, [] { return native_inline_caption_hooks_active(); }},
        {"Character kinship captions", install_native_character_relations_hook,
            [] { (void)uninstall_native_character_relations_hook(); }, [] { return native_character_relations_hook_active(); }},
        {"Native overview quote draw", install_native_overview_quote_hooks,
            [] { (void)uninstall_native_overview_quote_hooks(); }, [] { return native_overview_quote_hooks_active(); }},
        {"Complete paragraph capture", install_native_paragraph_hook,
            [] { (void)uninstall_native_paragraph_hook(); }, [] { return native_paragraph_hooks_active(); }},
        {"Complete trade reply capture", install_native_trade_paragraph_hooks,
            [] { (void)uninstall_native_trade_paragraph_hooks(); }, [] { return native_trade_paragraph_hooks_active(); }},
        {"Complete journal event source", install_native_journal_event_hooks,
            [] { (void)uninstall_native_journal_event_hooks(); }, [] { return native_journal_event_hooks_active(); }},
        {"Trade item memory capture", install_native_trade_item_hooks,
            [] { (void)uninstall_native_trade_item_hooks(); }, [] { return native_trade_item_hooks_active(); }},
        {"Complete workshop requirement capture", install_native_workshop_recipe_hooks,
            [] { (void)uninstall_native_workshop_recipe_hooks(); }, [] { return native_workshop_recipe_hooks_active(); }},
        {"Rich-text capture", install_native_rich_hooks,
            [] { (void)uninstall_native_rich_hooks(); }, [] { return native_rich_hooks_active(); }},
        {"Native attribute and skill tooltip layer", install_native_adventure_hover_hook,
            [] { (void)uninstall_native_adventure_hover_hook(); }, [] { return native_adventure_hover_hook_active(); }},
        {"Complete announcement capture", install_native_announcement_hook,
            [] { (void)uninstall_native_announcement_hook(); }, [] { return native_announcement_hook_active(); }},
        {"Native history event capture", install_native_history_hooks,
            [] { (void)uninstall_native_history_hooks(); }, [] { return native_history_hooks_active(); }},
        {"Native tutorials and help layer", install_native_help_layer_hook,
            [] { (void)uninstall_native_help_layer_hook(); }, [] { return native_help_layer_hook_active(); }},
        {"Native resolution selector layer", install_native_resolution_layer_hook,
            [] { (void)uninstall_native_resolution_layer_hook(); }, [] { return native_resolution_layer_hook_active(); }},
        {"Native fortress management layer", install_native_info_layer_hook,
            [] { (void)uninstall_native_info_layer_hook(); }, [] { return native_info_layer_hook_active(); }},
        {"Native character sheet layer", install_native_character_layer_hook,
            [] { (void)uninstall_native_character_layer_hook(); }, [] { return native_character_layer_hook_active(); }},
        {"Native Stocks layer", install_native_stocks_layer_hook,
            [] { (void)uninstall_native_stocks_layer_hook(); }, [] { return native_stocks_layer_hook_active(); }},
        {"Native display item assignment layer", install_native_display_layer_hook,
            [] { (void)uninstall_native_display_layer_hook(); }, [] { return native_display_layer_hook_active(); }},
        {"Native fortress Squads layer", install_native_squads_layer_hook,
            [] { (void)uninstall_native_squads_layer_hook(); }, [] { return native_squads_layer_hook_active(); }},
        {"Native announcements and report tabs layer", install_native_reports_layer_hook,
            [] { (void)uninstall_native_reports_layer_hook(); }, [] { return native_reports_layer_hook_active(); }},
        {"Native Escape menu layer", install_native_pause_layer_hook,
            [] { (void)uninstall_native_pause_layer_hook(); }, [] { return native_pause_layer_hook_active(); }},
        {"Native world generation layer", install_native_worldgen_layer_hook,
            [] { (void)uninstall_native_worldgen_layer_hook(); }, [] { return native_worldgen_layer_hook_active(); }},
        {"Native map layer", install_native_map_layer_hook,
            [] { (void)uninstall_native_map_layer_hook(); }, [] { return native_map_layer_hook_active(); }},
        {"Native fortress top bar layer", install_native_topbar_layer_hook,
            [] { (void)uninstall_native_topbar_layer_hook(); }, [] { return native_topbar_layer_hook_active(); }},
        {"Native accepted petition detail layer", install_native_petition_layer_hook,
            [] { (void)uninstall_native_petition_layer_hook(); }, [] { return native_petition_layer_hook_active(); }},
        {"Native accepted petitions layer", install_native_petitions_layer_hook,
            [] { (void)uninstall_native_petitions_layer_hook(); }, [] { return native_petitions_layer_hook_active(); }},
        {"Native designation tools layer", install_native_designation_layer_hook,
            [] { (void)uninstall_native_designation_layer_hook(); }, [] { return native_designation_layer_hook_active(); }},
        {"Native map hover list layer", install_native_map_hover_layer_hook,
            [] { (void)uninstall_native_map_hover_layer_hook(); }, [] { return native_map_hover_layer_hook_active(); }},
        {"Native embark civilization layer", install_native_embark_civilization_layer_hook,
            [] { (void)uninstall_native_embark_civilization_layer_hook(); }, [] { return native_embark_civilization_layer_hook_active(); }},
        {"Optional fortress riding module", install_native_riding_hook,
            [] { (void)uninstall_native_riding_hook(); }, [] { return native_riding_hooks_active(); }},
        // DFHack can arrive later; Present retries these optional observers.
        {"DFHack render layers", install_native_dfhack_render_layers,
            [] { (void)uninstall_native_dfhack_render_layers(); }, [] { return native_dfhack_render_layers_active(); }},
        {"DFHack text capture", install_native_dfhack_capture_hook,
            [] { (void)uninstall_native_dfhack_capture_hook(); }, [] { return native_dfhack_capture_hook_active(); }},
        {"DFHack console text", install_native_dfhack_console_hook,
            [] { (void)uninstall_native_dfhack_console_hook(); }, [] { return native_dfhack_console_hook_active(); }},
        {"DFHack Lua output", install_native_dfhack_lua_output_hook,
            [] { (void)uninstall_native_dfhack_lua_output_hook(); }, [] { return native_dfhack_lua_output_hook_active(); }},
        {"DFHack site map", install_native_dfhack_sitemap_hook,
            [] { (void)uninstall_native_dfhack_sitemap_hook(); }, [] { return native_dfhack_sitemap_hook_active(); }},
        {"DFHack message box", install_native_dfhack_messagebox_hook,
            [] { (void)uninstall_native_dfhack_messagebox_hook(); }, [] { return native_dfhack_messagebox_hook_active(); }},
        {"DFHack prompt", install_native_dfhack_prompt_hook,
            [] { (void)uninstall_native_dfhack_prompt_hook(); }, [] { return native_dfhack_prompt_hook_active(); }},
        {"DFHack Stonesense", install_native_dfhack_stonesense_hook,
            [] { (void)uninstall_native_dfhack_stonesense_hook(); }, [] { return native_dfhack_stonesense_hook_active(); }},
    };
    size_t enabled = 0, unavailable = 0;
    for (const auto &stage : stages) {
        bool installed = false;
        try { installed = stage.install(); }
        catch (const std::exception &error) {
            report_native_patch_error("WARN", stage.label, error.what());
        } catch (...) {
            report_native_patch_error("WARN", stage.label, "native feature binding was rejected");
        }
        if (installed) { ++enabled; continue; }
        // Some installers have prepared several relays before a later
        // dependency becomes unavailable. Restore that feature before moving
        // on, and retain the existing fatal path for a real rollback failure.
        try { stage.uninstall(); } catch (...) {}
        if (stage.active()) {
            report_native_patch_error("ERROR", stage.label, "failed feature could not restore its native hooks");
            return false;
        }
        ++unavailable;
        report_native_patch_error("WARN", stage.label,
            "feature unavailable for this executable; other translation features remain enabled");
    }
    log_line("INFO", "Native feature bindings: " + std::to_string(enabled) + " enabled, " +
        std::to_string(unavailable) + " unavailable");
    for (size_t index = 0; index < 2; ++index)
        if (!g_render_hooks[index].install("SDL render binding")) return false;
    auto &mouse = g_render_hooks[2];
    bool mouse_ready = false;
    if (mouse.slot) {
        try { mouse_ready = mouse.install("SDL mouse remapping binding"); }
        catch (...) {}
    }
    if (mouse.slot && !mouse_ready) {
        // A failed optional import still has to restore its own callback.
        // Never leave an active partial transaction behind during fallback.
        bool restored = false;
        try { restored = mouse.uninstall("SDL mouse remapping restore"); }
        catch (...) {}
        if (!restored || mouse.active()) return false;
    }
    g_copy_hook_active = g_render_hooks[0].active();
    g_legends_mouse_hook_active = mouse.active();
    if (!g_legends_mouse_hook_active)
        log_line("WARN", "Native mouse remapping unavailable; independent translation rendering remains enabled");
    log_line("INFO", "Enabled SDL translation rendering with individually resolved native features");
    return true;
}

static void uninstall_sdl_hooks() {
    uninstall_native_riding_hook();
    [[maybe_unused]] NativePatchMappingScope mapping_scope;
    uninstall_native_petition_layer_hook();
    uninstall_native_embark_civilization_layer_hook();
    uninstall_native_topbar_layer_hook();
    uninstall_native_petitions_layer_hook();
    uninstall_native_designation_layer_hook();
    uninstall_native_map_hover_layer_hook();
    uninstall_native_map_layer_hook();
    uninstall_native_ui_raster_hook();
    uninstall_native_worldgen_layer_hook();
    uninstall_native_pause_layer_hook();
    uninstall_native_reports_layer_hook();
    uninstall_native_squads_layer_hook();
    uninstall_native_stocks_layer_hook();
    uninstall_native_display_layer_hook();
    uninstall_native_info_layer_hook();
    uninstall_native_character_layer_hook();
    uninstall_native_resolution_layer_hook();
    uninstall_native_help_layer_hook();
    uninstall_native_dfhack_sitemap_hook();
    uninstall_native_dfhack_lua_output_hook();
    uninstall_native_dfhack_stonesense_hook();
    uninstall_native_dfhack_prompt_hook();
    uninstall_native_dfhack_messagebox_hook();
    uninstall_native_dfhack_console_hook();
    uninstall_native_dfhack_render_layers();
    uninstall_native_dfhack_capture_hook();
    release_native_dfhack_layer_target();
    uninstall_native_dfhack_graphics_ownership();
    g_legends_mouse_hook_active = false;
    for (auto it = g_render_hooks.rbegin(); it != g_render_hooks.rend(); ++it)
        it->uninstall("SDL render/mouse binding");
    g_copy_hook_active = g_render_hooks[0].active();
    uninstall_native_history_hooks();
    uninstall_native_announcement_hook();
    uninstall_native_adventure_hover_hook();
    uninstall_native_rich_hooks();
    uninstall_native_workshop_recipe_hooks();
    uninstall_native_trade_paragraph_hooks();
    uninstall_native_journal_event_hooks();
    uninstall_native_trade_item_hooks();
    uninstall_native_paragraph_hook();
    uninstall_native_overview_quote_hooks();
    uninstall_native_character_relations_hook();
    uninstall_native_inline_caption_hooks();
    uninstall_native_caption_hooks();
    if (!native_caption_hooks_active()) native_notification_release_layer();
    uninstall_native_construction_search_hook();
    uninstall_native_adventure_barter_search_hook();
    uninstall_native_job_details_search_hook();
    uninstall_native_justice_search_hook();
    uninstall_native_justice_actor_capture_hook();
    uninstall_native_kitchen_search_hook();
    uninstall_native_item_picker_search_hook();
    uninstall_native_conversation_search_hook();
    uninstall_native_journal_search_hook();
    uninstall_native_symbol_search_hook();
    uninstall_native_stockpile_search_hook();
    uninstall_native_material_search_hook();
    uninstall_native_workshop_search_hook();
    uninstall_native_legends_search_hook();
    uninstall_native_unit_search_hook();
    uninstall_native_overview_event_hooks();
    uninstall_native_adventure_introduction_hooks();
    uninstall_native_adventure_charge_hooks();
    uninstall_native_unit_identity_hooks();
    clear_native_unit_identities();
    uninstall_native_squad_name_hooks();
    uninstall_native_stocks_search_hook();
    uninstall_native_item_search_hook();
    uninstall_native_arena_tree_search_hook();
    uninstall_native_input_hooks();
    g_native_mouse_click_hook.uninstall();
    g_native_stone_use_guard.uninstall();
}

static bool native_hooks_detached() {
    return !native_riding_hooks_active() && std::none_of(g_render_hooks.begin(), g_render_hooks.end(),
                       [](const auto &hook) { return hook.active(); }) &&
        !native_dfhack_capture_hook_active() &&
        !native_dfhack_render_layers_active() &&
        !native_dfhack_graphics_ownership_active() &&
        !native_help_layer_hook_active() &&
        !native_resolution_layer_hook_active() &&
        !native_map_layer_hook_active() &&
        !native_ui_raster_hook_active() &&
        !native_topbar_layer_hook_active() &&
        !native_petition_layer_hook_active() &&
        !native_petitions_layer_hook_active() &&
        !native_embark_civilization_layer_hook_active() &&
        !native_info_layer_hook_active() &&
        !native_character_layer_hook_active() &&
        !native_stocks_layer_hook_active() &&
        !native_display_layer_hook_active() &&
        !native_squads_layer_hook_active() &&
        !native_designation_layer_hook_active() &&
        !native_map_hover_layer_hook_active() &&
        !native_reports_layer_hook_active() &&
        !native_pause_layer_hook_active() &&
        !native_worldgen_layer_hook_active() &&
        !native_dfhack_console_hook_active() &&
        !native_dfhack_lua_output_hook_active() &&
        !native_dfhack_sitemap_hook_active() &&
        !native_dfhack_messagebox_hook_active() &&
        !native_dfhack_prompt_hook_active() &&
        !native_dfhack_stonesense_hook_active() &&
        !g_native_stone_use_guard.active() &&
        !g_native_mouse_click_hook.active() &&
        !native_history_hooks_active() && !native_announcement_hook_active() && !native_adventure_hover_hook_active() &&
        !native_rich_hooks_active() && !native_paragraph_hooks_active() &&
        !native_trade_paragraph_hooks_active() &&
        !native_journal_event_hooks_active() &&
        !native_trade_item_hooks_active() &&
        !native_workshop_recipe_hooks_active() &&
        !native_inline_caption_hooks_active() &&
        !native_caption_hooks_active() && !native_conversation_search_hook_active() &&
        !native_character_relations_hook_active() &&
        !native_overview_quote_hooks_active() &&
        !native_journal_search_hook_active() &&
        !native_item_picker_search_hook_active() &&
        !native_kitchen_search_hook_active() &&
        !native_justice_search_hook_active() &&
        !native_justice_actor_capture_hook_active() &&
        !native_job_details_search_hook_active() &&
        !native_adventure_barter_search_hook_active() &&
        !native_construction_search_hook_active() &&
        !native_item_search_hook_active() &&
        !native_stocks_search_hook_active() &&
        !native_unit_search_hook_active() &&
        !native_unit_identity_hooks_active() &&
        !native_squad_name_hooks_active() &&
        !native_adventure_charge_hooks_active() &&
        !native_adventure_introduction_hooks_active() &&
        !native_overview_event_hooks_active() &&
        !native_legends_search_hook_active() &&
        !native_workshop_search_hook_active() &&
        !native_material_search_hook_active() &&
        !native_stockpile_search_hook_active() &&
        !native_symbol_search_hook_active() &&
        !native_arena_tree_search_hook_active() &&
        !native_input_hooks_active();
}

static bool native_can_shutdown() {
    if (g_native_hook_thread != std::thread::id{} &&
        g_native_hook_thread != std::this_thread::get_id()) {
        log_line("ERROR", "Core shutdown must run on its SDL thread");
        return false;
    }
    return true;
}

static void request_native_process_exit() noexcept {
    if (g_native_process_exiting.exchange(true, std::memory_order_acq_rel)) return;
#ifdef _WIN32
    g_native_dfhack_render_enabled.store(false, std::memory_order_release);
    g_native_dfhack_render_retiring.store(true, std::memory_order_release);
    g_native_dfhack_graphics_ownership_ready.store(false, std::memory_order_release);
#endif
    // This is the simulation's QUIT boundary, before DFHack shuts down its
    // console/plugins. Stop accepting work without joining or freeing any
    // callback-owned arrays, catalogs, fonts, textures or native interposes.
    g_native_identity_translation_jobs.request_stop();
    try { native_announcement_log_translation_request_stop(); } catch (...) {}
    g_render_workers.request_stop();
    try { g_overlay.request_dfhack_translation_stop(); } catch (...) {}
}

static bool stop_reloadable_core() {
    if (!native_can_shutdown()) return false;
    // Hook retirement can defer until a later DFHack update, but normal game
    // shutdown has already stopped that update loop. Stop our owned-snapshot
    // workers even when live callbacks require the core to remain mapped;
    // otherwise DLL teardown destroys their waiters while they are still asleep.
    // Join without the translation lock and retain catalogs/fonts until every
    // native callback has detached. Retiring captures reject new queued jobs.
    stop_native_identity_translation_jobs();
    native_announcement_log_translation_stop();
    g_render_workers.shutdown();
    g_overlay.stop_dfhack_translation_worker();
    // Process exit has no future DFHack suspension context for retiring links.
    // Native shutdown still owns cleanup callbacks and renderer arrays. Leave
    // their core image/resources mapped for the process to reclaim instead of
    // running the hot-reload teardown against an already stopped DFHack Core.
    if (g_native_process_exiting.load(std::memory_order_acquire)) return false;
    uninstall_sdl_hooks();
    if (!native_hooks_detached() || !native_callbacks_idle()) {
        log_line("ERROR", "Core remains resident because callbacks could not be detached");
        return false;
    }
    native_settings_menu_release();
    native_mouse_coordinates_release();
    native_map_preview_release();
    native_riding_release();
    if (g_plugin_active.load()) {
        g_native_squads_overlay.release_native_squads_resources();
        release_native_character_language_resources();
        g_overlay.shutdown();
        g_plugin_active.store(false);
    }
    {
        std::lock_guard<std::mutex> lock(g_ime_popup_mutex);
        g_ime_popup_snapshot = {};
    }
    native_cleanup();
    // This path has stopped every worker and detached every native callback.
    // Release the explicit service lifetime here, never from the CRT detach.
    native_announcement_log_translation_release();
    g_native_hook_thread = {};
    g_real_present = nullptr;
    g_real_copy = nullptr;
    g_real_get_mouse_state = nullptr;
    release_process_instance_guard();
    return true;
}
