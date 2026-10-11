/* Semantic reconstruction from the configured native PE images.
 * Steam PE:6a70a6d9:02711000, RVA 0x2b6760..0x2b9040.
 * Classic PE:6a70b91c:0270a000, RVA 0x2b4320..0x2b6c00.
 * The Classic catalog-builder coordinates are Steam minus 0x2440.
 * This source records actual native branches, including surprising defaults.
 */

struct PlotDisplay {
    string list_name;        /* +00, complete native title */
    string simplified_name; /* +20, folded search/sort string */
    string p_list_name;      /* +40, renderer's lazy complete title cache */
    Agreement *agreement;   /* +60 */
    int organization_hf_id;  /* +68, initialized to -1 */
    string organization_name; /* +70; can be shortened in place */
}; /* allocation size 0x90 */

string build_plot_title(Agreement *a) {
    string out = "A plot";
    if (a->items.empty()) return out;
    AgreementItem *i = a->items.front(); /* a+28 vector */
    Goal *g = i->goal; /* item+10 */
    switch (i->subject_kind) { /* item+18, actual native jump table 5..15 */
    case 5:
        out = "Corrupt";
        if (g->entity_id_at_10 != -1 && g->position_id_at_14 != -1) {
            out += " ";
            Entity *e = find_entity(g->entity_id_at_10);
            PositionAssignment *assignment = e
                ? find_assignment(e->assignments_at_1110, g->position_id_at_14) : NULL;
            Position *p = assignment ? resolve_position(e, assignment) : NULL;
            if (p) {
                out += capitalized(position_title(p, -1, 0, 0));
                out += " of";
            }
            out += " ";
            out += entity_name(g->entity_id_at_10);
        }
        break;
    case 6:
        out = "Steal";
        if (g->artifact_id_at_0c != -1)
            out += " " + artifact_name_or_item_description(g->artifact_id_at_0c);
        break;
    case 7:
        out = "Provide Position";
        if (g->entity_id_at_28 != -1)
            out += " in " + entity_name(g->entity_id_at_28);
        break;
    case 8:
        out = "Assassinate";
        if (g->hf_id_at_0c != -1)
            out += " " + historical_figure_description(g->hf_id_at_0c, 1, 1);
        break;
    case 9:
        out = "Abduct";
        if (g->hf_id_at_0c != -1)
            out += " " + historical_figure_description(g->hf_id_at_0c, 1, 1);
        break;
    case 10:
        out = "Sabotage";
        if (g->entity_id_at_10 != -1)
            out += " " + entity_name(g->entity_id_at_10);
        else if (g->hf_id_at_0c != -1) /* native jump into Abduct's argument body */
            out += " " + historical_figure_description(g->hf_id_at_0c, 1, 1);
        break;
    case 11:
        switch (g->subkind_at_18) {
        case 0: out = "Attempted Bribery"; break;
        case 2: out = "Attempted Espionage"; break;
        case 3: out = "Attempted Embezzlement"; break;
        default: break; /* remains A plot */
        }
        return out + " in " + decimal(i->year_at_04);
    case 12:
        return out;
    case 13:
        out = "Infiltrate";
        if (g->entity_id_at_08 != -1)
            out += " " + entity_name(g->entity_id_at_08);
        break;
    case 14:
        out = "Frame";
        if (g->hf_id_at_08 != -1)
            out += " " + historical_figure_description(g->hf_id_at_08, 1, 1);
        break;
    case 15:
        out = "Start War";
        if (g->entity_a_at_08 != -1 && g->entity_b_at_0c != -1)
            out += " between " + entity_name(g->entity_a_at_08)
                + " and " + entity_name(g->entity_b_at_0c);
        break;
    default:
        return out;
    }
    return out + ", agreed in " + decimal(i->year_at_04);
}

/* Native helper 0xc3a4f0..0xc3a588 (Classic 0xc37530..0xc375c8).
 * An identity linked to a named HF uses the HF's current full name.
 * Otherwise its own full language_name survives; this is a personal alias,
 * never a historical_entity or squad.alias branch.
 */
LanguageName *identity_display_name(Identity *identity) {
    if (identity->hf_id_at_88 != -1) {
        HistoricalFigure *hf = find_hf(identity->hf_id_at_88);
        if (hf && hf->name_at_38.has_name_at_72)
            return &hf->name_at_38;
    }
    return &identity->name_at_08;
}

/* Steam 0x2b79e3..0x2b7a9d (Classic -0x2440).
 * Organization catalog allocation is 0xa0, full display string at +18.
 * IntrigueActor allocation is 0xf8: +00=HF*, +08=Identity*, +10=LanguageName*,
 * +18=full actor name, +b8=OrganizationDisplay*, +d8=associated plot vector.
 */
string organization_display_name(IntrigueActor *actor, NativeActorInfo *info) {
    if (info->flags_at_04 & 8) {
        HistoricalFigure *hf = actor->hf_at_00;
        return hf->name_at_38.has_name_at_72
            ? language_name(hf->name_at_38, 1, 0) : "Nameless";
    }
    if (info->identity_ids_at_80.empty()) return "Unidentified";
    Identity *id = find_identity(info->identity_ids_at_80.front());
    if (!id) return "Nameless";
    LanguageName *name = identity_display_name(id);
    return name && name->has_name_at_72 ? language_name(*name, 1, 0) : "Nameless";
}

/* The native catalog assigns plot+68 by resolving participants of every item
 * against intrigue actors. It first traverses principal reference IDs, then
 * fallback participant IDs only when +68 remains -1. Matching actor HF IDs
 * are assigned to +68. These relationships license organization ownership.
 * Steam 0x2b72bd..0x2b73ba, Classic -0x2440.
 */
void copy_organization_to_plot(OrganizationDisplay *org, PlotDisplay *plot) {
    HistoricalFigure *hf = org->actor_at_90->hf_at_00;
    if (plot->organization_hf_id != hf->id_at_e0) return;
    plot->organization_name = org->list_name_at_18; /* complete copy */
    size_t max_chars = graphical_mode ? gps_width - 28 : gps_width - 9;
    if (plot->organization_name.size() > max_chars)
        plot->organization_name.resize(max_chars); /* no ellipsis */
}

/* Steam 0x2b8be0..0x2b8c9b: only if no organization string was populated,
 * match plot+68 to Actor+00->HF+e0, copy Actor+18, then perform the same resize.
 * A complete source can therefore be recovered from the complete justice
 * organization catalog (owner+2e8) or matching actor catalog (owner+2d0).
 * Do not infer names from title spelling or treat the shortened +70 as full.
 */
void fill_empty_plot_organization(IntrigueActor *actor, PlotDisplay *plot) {
    if (!plot->organization_name.empty()) return;
    if (plot->organization_hf_id != actor->hf_at_00->id_at_e0) return;
    plot->organization_name = actor->list_name_at_18;
    size_t max_chars = graphical_mode ? gps_width - 28 : gps_width - 9;
    if (plot->organization_name.size() > max_chars)
        plot->organization_name.resize(max_chars);
}

/* Scalar formatter fallback strings, with caller flags excluding LPAGE tags:
 * entity helper Steam 0xb92900..0xb92a78 -> an unknown civilization.
 * HF helper Steam 0xb92f10..0xb93925 -> an unknown creature for missing HF;
 *   existing HF may produce Nameless, an unidentified creature, race/caste,
 *   zombie or ghostly descriptors alongside a complete personal name.
 * artifact helper Steam 0xb94400..0xb94710 -> an unknown artifact;
 *   named artifact uses language_name; unnamed book is Untitled;
 *   unnamed ordinary artifact uses native item description.
 * A name formatter returning an empty string preserves preceding syntax.
 */
