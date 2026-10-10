/* Static semantic reconstruction from both configured native PE images.
 * This file is explanatory decompilation, not compilable project code.
 * Exact instructions, finite operands, calls and all conditional branch
 * targets are retained beside it in the per-image .asm and native-*.tsv.
 * Steam renderer 0x27bd70..0x27d2ab; classic 0x279930..0x27ae6b.
 * Corresponding renderer instructions have a constant -0x2440 classic delta.
 */

struct reaction_category_semantic {
    std_string token;       /* +0x00 CATEGORY */
    std_string parent;      /* +0x20 CATEGORY_PARENT */
    std_string display;     /* +0x40 CATEGORY_NAME */
    int key;                    /* +0x60 CATEGORY_KEY */
    std_string description; /* +0x68 CATEGORY_DESCRIPTION */
};

struct adventure_craft_state_semantic {
    int mode;                   /* +0x04 */
    vector<reaction *> recipes;  /* +0x28; nullptr denotes category/butchery */
    vector<std_string *> tokens; /* +0x40; empty token denotes Butcher */
    std_string category;         /* +0x58; current category; empty at root */
    vector<item *> items;        /* +0x78; mode=3 reagent candidates */
    reaction *selected;         /* +0xc0 */
    int reagent_index;           /* +0xc8 */
    int remaining;               /* +0xcc */
    vector<item *> carcasses;    /* +0xf8; mode=1 */
    vector<item *> tools;        /* +0x110; mode=2 */
};

/* The producer draws each entry as two single native rows. It does not wrap
 * a CATEGORY_DESCRIPTION. All three byte truncation stages below precede
 * addst and must retain the complete source if translations use full lines.
 */
render(state, index) {
    if (state.mode == 4 || state.mode == 5)
        return; /* work activity/product processing is rendered elsewhere */
    draw("Cancel");
    switch (state.mode) {
    case 0:
        draw("What do you want to do?  Items must be in a grasp or on the ground here.");
        break;
    case 1:
        draw("What do you want to butcher?");
        break;
    case 2:
        draw("Select a butchery tool.");
        break;
    case 3:
        if (state.selected != nullptr) {
            title = state.selected.name; /* reaction +0x20, raw NAME */
            if (valid_reagent_index(state)) {
                r = state.selected.reagents[state.reagent_index]; /* +0x50 */
                title += ": select " + r.name; /* reagent +0x08 */
                title += " (" + r.virtual_0x38_description(state.selected.reaction_index);
                if (r.quantity > 1) title += ", " + decimal(state.remaining) + " left";
                title += ((r.flags & 1) ? ", not consumed" : ", consumed") + ")";
            }
            title += ".";
            capitalize(title);
            draw(title);
        }
        break;
    }
    if (row_count(state) == 0) {
        switch (state.mode) {
        case 1: draw("No carcass available."); break;
        case 2: draw("No butchery tool available."); break;
        case 3: draw("No available item."); break;
        }
    }

    title = "";
    if (state.mode == 0) {
        recipe = state.recipes[index];
        token = *state.tokens[index];
        if (recipe != nullptr)
            title = recipe.name; /* +0x20, NAME */
        else if (token.empty())
            title = "Butcher";
        else {
            cat = find_category_by_exact_token(token);
            if (cat != nullptr)
                title = cat.display.empty() ? token : cat.display;
            /* Missing category leaves the native title empty. No spelling
             * based inference or invented fallback is present. */
        }
        capitalize(title);
    } else if (state.mode == 1) {
        title = state.carcasses[index].virtual_0x5e8_name();
        capitalize(title);
    } else if (state.mode == 2 || state.mode == 3) {
        title = item_description(selected_mode_item(state, index));
        capitalize(title);
    }
    capture_complete_source(title); /* +0xcfb relative to renderer, rbp-0x10 */
    title = byte_truncate_then_ellipsis(title, available_width);
    draw(title); /* Steam return 0x27cb6a; classic 0x27a72a */

    if (state.mode == 1) {
        if (!native_can_butcher(state.carcasses[index], hunger_threshold))
            draw("You are not that hungry.");
        return;
    }
    if (state.mode != 0)
        return;

    if (recipe == nullptr && token.empty()) {
        if (state.carcasses.empty())
            draw("No carcass available.");
        else if (state.tools.empty() ||
                 (state.carcasses.size() == 1 && state.tools.size() == 1 &&
                  state.carcasses[0] == state.tools[0]))
            draw("No butchery tool available.");
        return;
    }
    if (recipe == nullptr) {
        description = "";
        cat = find_category_by_exact_token(token);
        if (cat != nullptr) description = cat.description; /* +0x68 */
        capture_complete_source(description); /* +0x1106, rbp+0x10 */
        description = byte_truncate(description, available_width);
        draw(description); /* Steam return 0x27ceda; classic 0x27aa9a */
        return;
    }
    needs = "Needs: ";
    if (recipe.reagents.empty()) needs += "nothing.";
    for (r : recipe.reagents) {
        needs += r.virtual_0x38_description(recipe.reaction_index);
        needs += " [";
        if (r.quantity > 1) needs += decimal(r.quantity) + "/";
        needs += ((r.flags & 1) ? "not consumed" : "consumed") + "]";
        if (r != recipe.reagents.back()) needs += ", ";
    }
    capture_complete_source(needs); /* +0x13cf, rbp-0x30 */
    needs = byte_truncate(needs, available_width);
    draw(needs); /* Steam return 0x27d1a7; classic 0x27ad67 */
}

/* Category tree construction (Steam 0x27f590; classic 0x27d150):
 * - Root contains Butcher (null reaction plus empty category token).
 * - Every raw reaction is visited. ADVENTURE_MODE_ENABLED is flags byte bit 2.
 * - Building-constrained reactions require a compatible building at the
 *   adventurer's position; both the root and nested-category paths do this.
 * - Uncategorized eligible reactions are placed directly at the root.
 * - Categorized reactions resolve their category and follow CATEGORY_PARENT
 *   up to the top ancestor at the root; duplicate displayed categories are
 *   removed by exact category token.
 * - Nested menus insert reactions whose category exactly matches the current
 *   category. Other categories follow their parent chain and insert the
 *   immediate child of the current category, with the same token deduplication.
 * Therefore translating only the visible eleven root captions omits every
 * child category, leaf reaction, reagent selection and need line.
 */

/* Raw parser (Steam 0xed1bd0; classic 0xeccb40):
 * CATEGORY sets reaction +0x140, finds an exact token match in the raw category
 * vector and allocates an 0x88-byte category if absent. CATEGORY_NAME assigns
 * category +0x40; CATEGORY_DESCRIPTION assigns +0x68; CATEGORY_PARENT assigns
 * +0x20; CATEGORY_KEY assigns the additional key field. NAME assigns reaction
 * +0x20. Raw REAGENT name is reagent +0x08. These are data-dependent strings,
 * so the complete installed/world raw catalog is a separate required source.
 */

/* Reagent description dispatch:
 * reaction_reagent_itemst vtable +0x38 -> Steam 0xedc660 / classic 0xed75d0.
 * It copies the item's exact type/subtype/material/flags/reaction class/product
 * restrictions and tool use into a semantic item filter, then calls Steam
 * 0xa2adb0 / classic 0xa285e0, followed by native capitalization.
 * The full filter helper and item-type-name helper are extracted, including
 * every flag branch, special material/reaction-product branch and tool-use
 * switch. The finite English operand inventory is native-literals.tsv.
 * reaction +0x118 is the reaction index, not a quantity multiplier. It is
 * copied into filter +0x8c for CONTAINS; the formatter quantity is always 1
 * for this virtual getter, independent of reagent +0x28 quantity.
 */

/* Reaction completion text (Steam 0x2804b0 / classic 0x27e070):
 * newly created products: "You make " + item(s) + "."
 * multiple products: first item + " and " + second, or first + " and more".
 * item improvements: "You have finished working on " + item(s) + "."
 * successful practice with no noteworthy output:
 *   "You practice your " + skill_name + " but make nothing of note."
 * practice without product requirements:
 *   "You practice your " + skill_name + "."
 * no relevant skill/output: "You make nothing."
 * Butchery selection also submits "You butcher " + item_name + "."
 * All literal/load/call/branch locations are retained from both images.
 */

/* COMPLETE JOB-ITEM / REAGENT FILTER TEXT PRODUCTION
 * Steam a2adb0..a2c60c; classic a285e0..a29e3c.
 * The following pseudocode preserves production order and assignment versus
 * append. Bit values describe the actual native DWORD at the stated offset;
 * they do not infer RAW flag names from translated wording.
 * All fixed strings include their exact final native spaces.
 */
struct native_filter_semantic {
    int16 type;                 /* +00 */
    int16 subtype;              /* +02 */
    int16 material_type;        /* +04 */
    int32 material_index;       /* +08 */
    uint32 flags1;              /* +0c */
    uint32 flags2;              /* +1c */
    uint32 flags3;              /* +24 */
    uint32 flags4;              /* +2c, copied but not printed here */
    uint32 flags5;              /* +34, copied but not printed here */
    std_string reaction_class;  /* +40 */
    std_string reaction_product;/* +60 */
    int32 ore_inorganic;        /* +80; inorganic material whose name bears */
    int32 dimension;            /* +88; default -1 */
    int32 reaction_index;       /* +8c; default -1 */
    vector<int32> contains;     /* +90; indices into that reaction's reagents */
    int16 tool_use;             /* +aa; default -1 */
    int32 color;                /* +ac; default -1 */
};

/* edc660..edc7fe / ed75d0..ed776e builds this filter as follows:
 * ctor 1fb050..1fb173 / 1fafe0..1fb103: empty strings/vectors/zero flags;
 * type/subtype/material_type/material_index/ore_inorganic/dimension/
 * reaction_index/tool_use/color all default -1.
 * reagent +30/+32/+34/+36 -> filter +00/+02/+04/+08;
 * reagent +78/+7c/+80/+84/+88 -> filter +0c/+1c/+24/+2c/+34;
 * reagent +38/+58 -> filter reaction_class/reaction_product;
 * reagent +8c -> filter ore_inorganic; reagent +90 -> dimension;
 * reagent +98 vector -> filter contains; getter r8 -> reaction_index;
 * reagent +b0/+b4 -> tool_use/color.
 * Thus dimension IS copied from reagent +90 and may emit 'unused'.
 * Getter passes formatter quantity=1. Actual reagent +28 quantity is printed
 * separately by the outer renderer; it is never dimension-divided there.
 */

describe_native_filter(f, int16 quantity) {
    text = "";
    /* a2ae06..a2ae99: signed short quantity guard, unsigned division after
     * the positive guard. No division below the native dimension threshold.
     * The 91-entry compressed switch has exactly these nondefault cases. */
    if (quantity > 1) {
        n = quantity;
        switch (f.type) {
        case 57: if (n >= 15000) n = n / 15000; break; /* thread */
        case 58: case 90: if (n >= 10000) n = n / 10000; break; /* cloth/sheet */
        case 0: case 69: case 70: case 73:
            if (n >= 150) n = n / 150;
            break; /* bar/drink/powder/liquid */
        default: break;
        }
        text += decimal(max(n, 1)) + " ";
    }
    /* a2ae99..a2aee5: quantity is not the field tested for 'unused'. */
    if (f.dimension > 1 &&
        ((f.type == 57 && f.dimension == 15000) ||
         ((f.type == 58 || f.type == 90) && f.dimension == 10000)))
        text += "unused ";

    /* flags1, a2aee5..a2b235: independently appended in this exact order. */
    if (f.flags1 & 0x00000001) text += "improvable ";
    if (f.flags1 & 0x00000002) text += "butcherable ";
    if (f.flags1 & 0x00000004) text += "millable ";
    if (f.flags1 & 0x00000008) text += "possibly buriable ";
    if (f.flags1 & 0x00000010) text += "unrotten ";
    if (f.flags1 & 0x00000020) text += "undisturbed ";
    if (f.flags1 & 0x00000040) text += "collected ";
    if (f.material_index == -1 && (f.flags1 & 0x00000080)) text += "sharpenable ";
    if (f.flags1 & 0x00000100) text += "murdered ";
    if (f.flags1 & 0x00000400) text += "empty ";
    if (f.flags1 & 0x00000800) text += "processable ";
    if (f.flags1 & 0x00002000) text += "cookable ";
    if (f.flags1 & 0x00100000) text += "solid ";
    if (f.flags1 & 0x00004000) text += "extract-bearing plant ";
    if (f.flags1 & 0x00008000) text += "extract-bearing fish ";
    if (f.flags1 & 0x00010000) text += "extract-bearing small creature ";
    if (f.flags1 & 0x00020000) text += "processable (to vial) ";
    if (f.flags1 & 0x00080000) text += "processable (to barrel) ";
    if (f.flags1 & 0x00200000) text += "tameable small creature ";
    if (f.flags1 & 0x00400000) text += "nearby ";
    if (f.flags1 & 0x00800000) text += "sand-bearing ";
    if (f.flags1 & 0x01000000) text += "glass ";
    if (f.flags1 & 0x80000000) text += "lye-bearing ";
    if (f.flags1 & 0x02000000) text += "milk ";
    if (f.flags1 & 0x04000000) text += "milkable ";
    if (f.flags1 & 0x08000000) text += "finished good ";
    if (f.flags1 & 0x10000000) text += "ammo ";
    if (f.flags1 & 0x20000000) text += "furniture ";

    /* flags2 first part, a2b235..a2b394. Color name is adjective data from
     * the descriptor at global vector 24f70b8/24f70c0, string +50.
     * The word 'dye ' is still emitted when the color index is invalid. */
    if (f.flags2 & 0x00000001) {
        if (valid_descriptor_index(f.color)) text += descriptor[f.color].name + " ";
        text += "dye ";
    }
    if (f.flags2 & 0x00000002) text += "dyeable ";
    if (f.flags2 & 0x00080000) text += "totemable ";
    if (f.flags2 & 0x00000010) text += "glass-making ";
    if (f.flags2 & 0x00000004) text += "dyed ";
    if (f.flags2 & 0x00000400) text += "melt-designated ";
    if (f.material_index == -1 && (f.flags2 & 0x00000200)) text += "deep material ";
    if (f.flags2 & 0x00000008) text += "sewn-imageless ";
    if (f.flags2 & 0x00000020) text += "screw ";

    /* Material-index guard is over ALL these independent bits.
     * It is not the material_type guard. a2b394..a2b528. */
    if (f.material_index == -1) {
        if (f.flags2 & 0x00000080) text += "fire-safe ";
        if (f.flags2 & 0x00000100) text += "magma-safe ";
        if (f.flags2 & 0x00000040) text += "building material ";
        if (f.flags2 & 0x00000800) text += "non-economic ";
        if (f.flags2 & 0x00004000) text += "plant ";
        if (f.flags2 & 0x00008000) text += "silk ";
        if (f.flags2 & 0x80000000) text += "yarn ";
        if (f.flags2 & 0x00010000) text += "leather ";
        if (f.flags2 & 0x00020000) text += "bone ";
        if (f.flags2 & 0x40000000) text += "hair/wool ";
        if (f.flags2 & 0x00040000) text += "shell ";
        if (f.flags2 & 0x00100000) text += "horn ";
        if (f.flags2 & 0x00200000) text += "pearl ";
    }
    if (f.flags2 & 0x00400000) text += "plaster-containing ";
    if (f.material_index == -1) {
        if (f.flags2 & 0x01000000) text += "soap ";
        if (f.flags2 & 0x04000000) text += "ivory/tooth ";
    }
    if (f.flags2 & 0x08000000) text += "lye/milk-free ";
    if (f.flags2 & 0x10000000) text += "blunt ";
    if (f.flags2 & 0x20000000) text += "unengraved ";

    /* flags3, a2b5e9..a2b80e, again independent and ordered. */
    if (f.flags3 & 0x00000001) text += "unimproved ";
    if (f.flags3 & 0x00000800) text += "written-on ";
    if (f.flags3 & 0x00000004) text += "non-absorbent ";
    if (f.flags3 & 0x00000080) text += "food storage ";
    if (f.flags3 & 0x00000008) text += "non-pressed ";
    if (f.material_index == -1) {
        if (f.flags3 & 0x00080000) text += "woven ";
        if (f.flags3 & 0x00000040) text += "hard ";
        if (f.flags3 & 0x00000100) text += "metal ";
        if (f.flags3 & 0x00000200) text += "sand ";
    }
    if (f.flags3 & 0x00001000) text += "edged ";
    if (f.flags3 & 0x00002000) text += "on-ground ";
    if (f.flags3 & 0x00004000) text += "divine ";
    if (f.flags3 & 0x00008000) text += "artifact ";
    if (f.flags3 & 0x00040000) text += "non-artifact ";
    if (f.flags3 & 0x00010000) text += "wooden ";
    if (f.flags3 & 0x00020000) text += "stone ";
    if (f.flags3 & 0x00100000) text += "gem ";
    if (f.flags3 & 0x00400000) text += "grown ";

    /* a2b80e..a2c0b4: material identity, class and product restrictions.
     * These three productions append in that order; all are skipped when
     * material_index != -1. The class/product aliases are exclusive within
     * each string, not exclusive with the surrounding independent flags. */
    if (f.material_index == -1) {
        if (f.ore_inorganic != -1) {
            material = world.lookup_material(0, f.ore_inorganic); /* call 14add70 */
            if (material == nullptr) ore_name = "unknown material";
            else {
                ore_name = material.solid_name; /* material pointer +b8 */
                if (!material.prefix.empty())   /* material pointer +520 */
                    ore_name = material.prefix + " " + ore_name;
            }
            text += ore_name + "-bearing ";
        }
        if (!f.reaction_class.empty()) {
            switch_exact_raw_token(f.reaction_class) {
            case "CALCIUM_CARBONATE": text += "calcite/limestone/chalk/marble "; break;
            case "CAN_GLAZE": text += "glazable "; break;
            case "FAT": text += "fat "; break;
            case "FLUX": text += "flux "; break;
            case "GYPSUM": text += "gypsum "; break;
            case "PAPER_PLANT": text += "paper-making "; break;
            case "PAPER_SLURRY": text += "paper-slurry "; break;
            case "TALLOW": text += "tallow "; break;
            case "WAX": text += "wax "; break;
            default: text += f.reaction_class + " "; break;
            }
            /* default helper 724a30..724b09 / 722450..722529 is memcpy
             * then append one char. NO lowercasing, underscore expansion,
             * English '-bearing' suffix or raw token name inference. */
        }
        if (!f.reaction_product.empty()) {
            switch_exact_raw_token(f.reaction_product) {
            case "BAG_ITEM": text += "bag-processable "; break;
            case "DRINK_MAT": text += "fermentable "; break;
            case "FIRED_MAT": text += "clay "; break;
            case "GLAZE_MAT": text += "glaze "; break;
            case "HONEYCOMB_PRESS_MAT": text += "honey-bearing "; break;
            case "PARCHMENT_MAT": text += "parchment-producing "; break;
            case "PRESS_LIQUID_MAT": text += "oil-bearing "; break;
            case "PRESS_PAPER_MAT": text += "paper-slurryable "; break;
            case "RENDER_MAT": text += "renderable "; break;
            case "SOAP_MAT": text += "fatty "; break;
            case "TAN_MAT": text += "tannable "; break;
            default: text += f.reaction_product + "-producing "; break;
            }
        }
    }
    /* a2c0ba..a2c145: CONTAINS is NOT a material label. It iterates the
     * vector of reagent indices in native order. Repetition is retained. */
    if (valid_global_reaction_index(f.reaction_index) && reaction[f.reaction_index] != nullptr)
        for (int contained : f.contains)
            text += reaction[f.reaction_index].reagents[contained].name /* +08 */ + "-containing ";
    /* a2c145..a2c1cc: a separate color production, mutually exclusive
     * with the dye flag's earlier descriptor field. */
    if (valid_descriptor_index(f.color) && !(f.flags2 & 0x00000001))
        text += "color " + descriptor[f.color].name + " ";

    /* a2c1cc..a2c3a3: ALL 26 tool enum branches use string ASSIGN at
     * a2c39e -> 06f8d0, NOT append 06fa10. The earlier quantity, flags,
     * material, classes, CONTAINS and color are thereby replaced. */
    switch (f.tool_use) {
    case 0: text = "liquid cooking"; break;
    case 1: text = "liquid scoop"; break;
    case 2: text = "powder grinding receptacle"; break;
    case 3: text = "powder grinding"; break;
    case 4: text = "meat carving"; break;
    case 5: text = "meat boning"; break;
    case 6: text = "meat slicing"; break;
    case 7: text = "meat cleaving"; break;
    case 8: text = "meat-carving holder"; break;
    case 9: text = "meal container"; break;
    case 10: text = "liquid container"; break;
    case 11: text = "food storage"; break;
    case 12: text = "hive"; break;
    case 13: text = "nest box"; break;
    case 14: text = "small object container"; break;
    case 15: text = "track cart"; break;
    case 16: text = "heavy object hauler"; break;
    case 17: text = "stand-and-work"; break;
    case 18: text = "sheet roller"; break;
    case 19: text = "folded sheet protector"; break;
    case 20: text = "writing container"; break;
    case 21: text = "bookcase"; break;
    case 22: text = "display object"; break;
    case 23: text = "offering placement"; break;
    case 24: text = "divination"; break;
    case 25: text = "games of chance"; break;
    default: break; /* -1 and every unsigned out-of-range selector */
    }
    /* a2c3a3..a2c4e4: body-part is a dedicated head branch. */
    if (f.flags2 & 0x02000000) {
        if (f.tool_use != -1) text += " ";
        text += "body part";
    } else if (f.tool_use != -1 && f.type == 86 && f.subtype == -1 &&
               f.material_type == -1 && f.material_index == -1) {
        /* This generic TOOL ends at its purpose. No appended 'tool'. */
    } else {
        if (f.tool_use != -1) text += " ";
        text += item_noun(f.type, f.subtype, f.material_type, f.material_index,
                          quantity == 1 ? 1 : -1,
                          0, false, nullptr, -1, -1, true, 0, 0);
    }
    if (f.flags1 & 0x40000000) text += " that isn't a bin"; /* a2c4e4..c503 */
    return text;
}

/* SHARED ITEM NOUN DISPATCH: all 93 selectors, Steam a82dd9 table a880e0.
 * Classic a7fe59 table a85160. The helper is larger because it also serves
 * actual inventory items. The filter call above fixes its last 9 parameters;
 * it never supplies a live item ID, contamination, wear, handedness, rotten/
 * grown flags, material-category mask, slab engraving or size prefix.
 * Consequently those optional branches below remain documented but cannot
 * produce text in THIS reagent/filter call. RAW subtype/material names can.
 * M means the shared native material formatter 14d1920's complete result,
 * followed by one space when there is a concrete material. N(leaf) appends
 * the displayed noun and the branch's native plural suffix when number!=1.
 * Bulk words and custom RAW singular/plural fields retain their own rules.
 * This table gives production order, rather than merely reachable operands.
 */
item_noun_switch(type, subtype, mat_type, mat_index, number, context) {
    switch (type) {
    case 0:  return BAR(mat_type, mat_index);                   /* a83249 */
    case 1:  return CUT_GEM(mat_type, mat_index, context);       /* a833de */
    case 2:  return M + material.blocks_name_or("blocks");      /* a835c5; +330 name */
    case 3:  return ROUGH_GEM(mat_type, mat_index);              /* a82f11 */
    case 4:  return BOULDER(mat_type, mat_index);                /* a83172 */
    case 5:  return M + "logs";                                /* a82de5 */
    case 6:  return M + N(material_flag(49) ? "portal" : "door"); /* a83680 */
    case 7:  return M + N("floodgate");                         /* a83736 */
    case 8:  return M + N("bed");                               /* a86522 */
    case 9:  return M + N(mat_type_in_419_618 ? "chair" : "throne"); /* a84a81 */
    case 10: return M + N(flexible_material ? "rope" : "chain");/* a840cb */
    case 11: return M + N(flexible_material ? "waterskin" :
                         material_flag(49) ? "vial" : "flask");/* a841f4 */
    case 12: return M + N(mat_type_in_419_618 ? "cup" :
                         mat_type == 0 && !material_flag(47) ? "mug" : "goblet"); /* a84736 */
    case 13: return M + RAW_SUBTYPE_OR_N("musical instrument"); /* a8435c */
    case 14: return M + RAW_SUBTYPE_OR_N("toy");                /* a84669 */
    case 15: return M + N("window");                           /* a84807 */
    case 16: return M + N(material_flag(49) ? "terrarium" : "cage"); /* a84877 */
    case 17: return M + N("barrel");                           /* a84931 */
    case 18: return M + N("bucket");                           /* a849a1 */
    case 19: return M + N("animal trap");                      /* a84a11 */
    case 20: return M + N("table");                            /* a83886 */
    case 21: return M + (mat_type_in_419_618 ? N("casket") :
                         material_flag(47) ? (number == 1 ? "sarcophagus" : "sarcophagi") : N("coffin")); /* a83fc7 */
    case 22: return M + N("statue");                           /* a866e2 */
    case 23: return OPTIONAL_ROTTEN + N("corpse");              /* a86a02 */
    case 24: return RAW_WEAPON_OR(M + N("weapon"));             /* a87584 */
    case 25: return RAW_ARMOR_OR(M + (number > 1 ? "suits of " : "") + "armor"); /* a876bd */
    case 26: return RAW_SHOES_OR(M + "footwear");               /* a87b5b */
    case 27: return RAW_SHIELD_OR(M + (number == 1 ? "shield/buckler" : "shields/bucklers")); /* a87a87 */
    case 28: return RAW_HELM_OR(M + "headwear");                /* a87ccb */
    case 29: return RAW_GLOVES_OR(M + "handwear");              /* a8789a */
    case 30: return M + BOX(mat_type, mat_index, number);        /* a83ab6 */
    case 31: return M + N("bag");                              /* a83c00 */
    case 32: return M + N("bin");                              /* a83a46 */
    case 33: return M + N("armor stand");                      /* a839d6 */
    case 34: return M + N("weapon rack");                      /* a83966 */
    case 35: return M + N("cabinet");                          /* a838f6 */
    case 36: return M + N("figurine");                         /* a84efc */
    case 37: return M + N("amulet");                           /* a85d2e */
    case 38: return M + N("scepter");                          /* a86007 */
    case 39: return RAW_AMMO_OR(M + N("ammunition"));           /* a85eea */
    case 40: return M + N("crown");                            /* a86077 */
    case 41: return M + N("ring");                             /* a863d8 */
    case 42: return M + N("earring");                          /* a86442 */
    case 43: return M + N("bracelet");                         /* a864b2 */
    case 44: return (context.item ? "perfect " : "large ") + LARGE_GEM(mat_type, mat_index, number); /* a86151 */
    case 45: return M + N("anvil");                            /* a85cbe */
    case 46: return OPTIONAL_ROTTEN + BODY_COMPONENT(context); /* a86a35 */
    case 47: return OPTIONAL_CAPITAL_ROTTEN + RAW_CREATURE_NAME_OR("remains"); /* a86ba6 */
    case 48: return OPTIONAL_ROTTEN + OPTIONAL_PRESERVED + MEAT(mat_type, mat_index, number); /* a87427 */
    case 49: return OPTIONAL_ROTTEN + FISH_PREPARED_CREATURE_OR("fish"); /* a8727a */
    case 50: return OPTIONAL_ROTTEN + "raw " + FISH_RAW_CREATURE_OR("fish"); /* a86f2a */
    case 51: return mat_type != -1 ? "live " + RAW_CREATURE_NAME : N("small live animal"); /* a8739f */
    case 52: return mat_type != -1 ? "tame " + RAW_CREATURE_NAME : N("small tame animal"); /* a873f2 */
    case 53: return RAW_PLANT_SEED_NAME_OR(M.empty() ? "seeds" : M_without_trailing_space); /* a86d36 */
    case 54: return OPTIONAL_WITHERED + RAW_PLANT_NAME_OR(N("plant")); /* a86e98 */
    case 55: return mat_index == -1 ? N("tanned hide") : M_without_trailing_space; /* a84de3 */
    case 56: return OPTIONAL_WITHERED + RAW_PLANT_GROWTH_NAME_OR(number == 1 ? "leaf or fruit" : "leaves and fruit"); /* a86de0 */
    case 57: return M + THREAD_HEAD(mat_type, mat_index, context); /* a84b17 */
    case 58: return M + "cloth";                               /* a84c61 */
    case 59: return N("totem");                                /* a84e4f */
    case 60: return RAW_PANTS_OR(M + "legwear");                /* a87e00 */
    case 61: return OPTIONAL_SIZE + M + N("backpack");          /* a83c70 */
    case 62: return OPTIONAL_SIZE + M + N("quiver");            /* a83f2c */
    case 63: return M + "catapult parts";                       /* a858dc */
    case 64: return M + "ballista parts";                       /* a85c46 */
    case 65: return M + RAW_SIEGEAMMO_OR("siege ammo");          /* a85e0e */
    case 66: return M + N("ballista arrow head");               /* a85d9e */
    case 67: return M + "mechanisms";                           /* a859cc */
    case 68: return RAW_TRAPCOMP_OR(M + N("trap component"));    /* a85b0d */
    case 69: return OPTIONAL_ROTTEN + MATERIAL_OR("drink");     /* a84f6c */
    case 70: return OPTIONAL_ROTTEN + POWDER(mat_type, mat_index, context); /* a85769 */
    case 71: return OPTIONAL_ROTTEN + MATERIAL_OR("cheese");    /* a8588a */
    case 72: return N("prepared meal");                        /* a87415 */
    case 73: return OPTIONAL_ROTTEN + CONTAMINATION_STATES + LIQUID(mat_type, mat_index, context) + LACED_MATERIALS; /* a84fc7 */
    case 74: return M + N("coin");                             /* a860e7 */
    case 75: return OPTIONAL_ROTTEN + CONTAMINATION_STATES + GLOB(mat_type, mat_index, context) + LACED_MATERIALS; /* same a84fc7 */
    case 76: return ROCK(mat_type, mat_index, context);          /* a82fee */
    case 77: return M + N(material_flag(49) ? "tube" : "pipe section"); /* a85a44 */
    case 78: return M + N("hatch cover");                       /* a837a6 */
    case 79: return M + N("grate");                            /* a83816 */
    case 80: return M + N("quern");                            /* a86602 */
    case 81: return M + N("millstone");                        /* a86672 */
    case 82: return M + N("splint");                           /* a83e52 */
    case 83: return M + N("crutch");                           /* a83ec2 */
    case 84: return M + N("traction bench");                   /* a86592 */
    case 85: return M + "limb/body " + N("cast");              /* a83d0b */
    case 86: return OPTIONAL_UNGLAZED + RAW_TOOL_OR(M + N("tool")); /* a84432 */
    case 87: return M + N(SLAB_ENGRAVING_NAME_OR("slab"));       /* a86752 */
    case 88: return OPTIONAL_ROTTEN + RAW_CREATURE_NAME_WITH_SPACE + "egg"; /* a87118 */
    case 89: return (M.empty() ? "" : M_without_trailing_space + "-bound ") + (number == 1 ? "codex" : "codices"); /* a84e61 */
    case 90: return M + "sheet";                               /* a84cd9 */
    case 91: return M + (number == 1 ? "branch" : "branches"); /* a82e7a */
    case 92: return M + "bolt thrower parts";                   /* a85954 */
    default: return M + N("item");                             /* a87fe8 */
    }
    /* N uses the branch's native singular/plural paths. The shared end
     * a8806b..a880a7 appends ' [decimal(number)]' only when number>1.
     * Filter calls use exactly 1 or -1, so that bracket-count is absent. */
}

/* Nontrivial noun productions and complete finite branch vocabulary:
 * BAR: mat_type=-1 => 'bars'; 7 => mat_index 1:'charcoal', 0:'coke', other:
 * 'refined coal'; 0,index=-1 => 'metal bars'; concrete inorganic => complete
 * material plus ' bars', or ' wafers' for inorganic flags byte3 bit1;
 * other concrete mat_type => complete material alone.
 * ROUGH_GEM: mat_type=-1 => 'rough gems'; 3/4/5 respectively => 'raw green
 * glass'/'raw clear glass'/'raw crystal glass'; 0,index=-1 => 'rough gems';
 * otherwise 'rough '+complete native rough-gem material name.
 * CUT_GEM: a successful native gem-name formatter wins; fallback -1 =>
 * 'cut gems', 3/4/5 => 'cut green glass gems'/'cut clear glass gems'/
 * 'cut crystal glass gems'; concrete inorganic uses singular/plural gem
 * RAW fields; other fallback material plus 'gems'. No generic 'cut' prefix
 * is added to a successful native material/gem name.
 * BOULDER: 0,index=-1 => 'stone boulders'; 0,concrete index => native stone
 * name only; -1 => 'boulders'; other concrete material => material alone.
 * BOX: after material, material_flag(49) => 'box'/'boxes'; inorganic
 * !material_flag(47) => 'coffer(s)'; other concrete material => 'chest(s)';
 * unspecified material => 'box'/'boxes'.
 * Flexible material (CHAIN/FLASK): material flags byte3 bit0, or native
 * material predicates 29/30/62, or category mask bits 4/16/8/4096. In this
 * filter the category mask is zero; concrete material predicates still act.
 * THREAD_HEAD: optional 'web(s)' only when silk predicate AND item-state
 * bit0x200; otherwise material flag47 => 'strands'; predicate62 => 'yarn';
 * default 'thread'. Cloth and sheet never gain a generic plural suffix here.
 * ROCK: with no concrete material => 'small rock'; otherwise the material
 * stone name may retain its own 'small ' qualifier, with 'rock(s)' added
 * only on the helper's non-embedded-rock branch. Its choices are a82fee..
 * a8316d and include both a material-only and material+'rock' production.
 * LARGE_GEM: 'perfect ' only with a live item pointer, else 'large '; native
 * cut-gem supplier wins; fallback glass3/4/5 => glass name+'gem(s)';
 * unspecified => 'gem(s)'; inorganic uses native gem material singular/
 * plural; other material => material+' gem(s)'.
 * BODY_COMPONENT, a86a56..a86ba1, is an ordered exclusive flag selector:
 * context mask 0x200 => tooth/teeth; 0x20=>bone(s); 0x40=>shell(s);
 * 0x01=>plant part(s); 0x08=>silk body part(s); 0x10=>leather body part(s);
 * 0x80=>wooden body part(s); 0x100=>soap body part(s); 0x400=>horn(s);
 * 0x800=>pearl(s); 0x1000=>yarn body part(s); 0x2000=>strand body part(s);
 * else body part(s). This context mask is zero in the filter call; outer
 * job-item bone/shell/horn/etc restrictions remain prefixes, not this mask.
 * MEAT: optional 'rotten ', then 'preserved ', then material-defined meat
 * prefix + creature name when present, then material-defined meat singular/
 * plural (+2a8/+2c8) or solid name+' chop'/' chops'; undefined material =>
 * 'meat'. RAW_FISH/EGG use creature caste name first (caste+68), then creature
 * name (+60) fallback; prepared fish uses the native alternate fish name
 * formatter when the caste name is empty. Fish sex appends ', ' plus one
 * native CP437 byte: sex=1 -> 0x0b (male), sex=0 -> 0x0c (female);
 * every other sex value emits neither delimiter nor marker. These are not
 * the English words 'male'/'female'. Dispatch a870c5..a870fc; prepared-fish
 * branch a8736e..a87386 joins the same dispatch after sex helper 0f2680.
 * SEEDS/LEAVES use plant material-specific name suppliers a64cb0/a64d00
 * for mat_type419..618, otherwise material name or their finite generic head.
 * PLANT uses RAW whole-plant singular/plural when material and index exist.
 * RAW subtype selectors (instrument/toy/tool/weapon/armor/shoes/shield/helm/
 * gloves/pants/ammo/trap component) resolve exact subtype IDs from their
 * corresponding installed RAW tables. They emit optional subtype adjective,
 * material qualifier, then RAW singular or plural. Armor/pants also permit
 * RAW material adjective when no explicit material is supplied. Actual
 * inventory context may add 'small '/'large ', 'chain ', 'right '/'left ',
 * or 'unglazed '; these are disabled by the filter's fixed zero/null/-1 args.
 * CAST's actual-inventory material description branch may return only the
 * custom complete material cast caption; the generic filter branch adds
 * material+'limb/body '+cast(s).
 * LIQUID: undefined material => 'liquid'; otherwise complete liquid-state
 * material name, except native paste-form item uses creature name+' paste'.
 * GLOB: undefined material => 'glob'; otherwise complete paste/solid-state
 * material name according to native item-state bits2/4. Actual contamination
 * appends these independent prefixes IN ORDER before the main material:
 * 'filthy ', 'sticky ', 'vomitous ', 'slimy ', 'stagnant ', 'dirty ', 'gooey ',
 * 'purulent ', 'ichorous ', 'bloody '. Laced ingredients then follow the
 * main name as ' laced with '+material1, ', ' for remaining3+, ' and ' for
 * remaining2. The same exclusion branches skip substances already counted
 * by the contamination-state switches. A filter supplies no actual item ID,
 * so these contamination and lacing producers are not entered there.
 * POWDER: a dye-mixture actual item emits material mixture name+' dye mix';
 * unspecified material => 'powder'; other cases use complete powder-state
 * material name. CHEESE/DRINK similarly use material's authored state name
 * without unconditionally appending 'cheese'/'drink'.
 * All default finite leaf strings above precede normal raw material/item
 * translation. Unknown RAW names are semantic fields, never personal names.
 */

/* Slab's separate engraving-type switch a86846..a869fd has 26 selectors:
 * 0:'memorial'; 1..6:'slab'; 7:'food imports sign';
 * 8:'clothing imports sign'; 9:'general imports sign'; 10:'cloth shop sign';
 * 11:'leather shop sign'; 12:'woven clothing shop sign';
 * 13:'leather clothing shop sign'; 14:"bone carver's shop sign";
 * 15:"gem cutter's shop sign"; 16:"weaponsmith's shop sign";
 * 17:"bowyer's shop sign"; 18:"blacksmith's shop sign";
 * 19:"armorsmith's shop sign"; 20:'metal craft shop sign';
 * 21:'leather goods shop sign'; 22:"carpenter's shop sign";
 * 23:'stone furniture shop sign'; 24:'metal furniture shop sign';
 * 25:'tavern sign'; out-of-range/default/no actual item:'slab'.
 */

/* Difference from src/workshop_recipe_grammar.inc at extraction time:
 * - Existing scoped state/material/kind entries cover all finite printed
 *   flag prefixes and every special reaction class/product alias.
 * - Quantities already display native dimension conversion. Existing parser
 *   correctly keeps these digits, rather than dividing again. The Adventure
 *   getter quantity=1 means count prefixes normally come only from outer UI.
 * - Unknown reaction CLASS is a verbatim bare token plus space, not a material
 *   '-bearing' phrase. Unknown PRODUCT is a verbatim RAW token before
 *   '-producing'. They need their typed installed-RAW leaves.
 * - CONTAINS selects RAW reagent name, not a material. Its repeated source
 *   slot must resolve via the Adventure reagent catalog before any existing
 *   material fallback. The complete series retains all contains constraints.
 * - Native tool-use is assignment, so translation must not restore any
 *   prefix that the native producer discarded. Its 26 strings may be a
 *   complete generic-tool noun OR a modifier before a concrete subtype.
 * - Flags imply material/body-component/kind semantics. Prefix-run parsing
 *   and one final noun avoids splitting calf bone/horn/soap/plant into names.
 * - Native noun variants include exact bare cloth/thread/sheet/glob, all 93
 *   type branches, plural teeth/codices/boxes/sarcophagi/branches and RAW
 *   subtype names. Inventory grammar already owns these complete suppliers;
 *   no substring-level generic English word replacement is required.
 */
