// Static decompilation source for Justice -> Intelligence -> Organizations.
// Addresses are image-relative; fields are read from the real draw/producer
// operands, not from screenshot spelling. This file is explanatory native
// source material and is not built or executed.
//
// reference PE:6a70a6d9:02711000
// classic   PE:6a70b91c:0270a000
// Renderer: ref 4769d0..4792c7 / classic 474590..476e87
// Catalog:  ref 2b6760..2b8f45 / classic 2b4320..2b6b05
// Layout:   ref d1650..d1832 / classic d15e0..d17c2
// Input:    ref 4751a0..4769cd / classic 472d60..47458d
// Search:   ref 479330..479a1b / classic 476ef0..4775db
// The .asm and native-branch-edges.tsv retain every instruction and conditional
// edge. Embedded switch tables are retained separately as data.

struct ActorSource {
    historical_figure *figure; // +00
    identity *identity;        // +08, optional identity used for the visible name
    language_name *name;       // +10, actual visible name, possibly an identity
    string complete_name;     // +18, original full English rendered identity
    string list_name;         // +58, cached list title
};
struct OrganizationNode {
    ActorSource *actor; // +00
    OrganizationNode *parent; // +08; null for Boss
    int unknown_10;    // +10, not interpreted as a name or role enum
    int depth;         // +14
    int x_offset;      // +18
    int child_extent;  // +1c, populated by d1650/d15e0 layout pass
    string role;       // +20
    int color;         // +40
    bool bright;       // +44
    string initials;   // +48, independent generated field
    string death;      // +68, empty or RIP
};
struct OrganizationSource {
    vector<OrganizationNode *> nodes; // +00..08
    string complete_title; // +18
    string title;          // +58; populated once when empty, clipped to native width
    ActorSource *boss;     // +90
    int layout_flags;      // +98; bit 0 caches the organization graph layout
};

ActorSource make_actor(KnowledgeRecord *record, historical_figure *figure) {
    ActorSource actor;
    actor.figure = figure;
    // ref 2b68db..2b6919 / classic 2b449b..2b44d9
    if (record->flags_04 & 0x08) {
        if (figure->name_set_aa) {
            actor.name = &figure->name_38;
            actor.complete_name = render_language_name(actor.name, true, false);
        } else {
            actor.complete_name = "Nameless";
        }
    } else if (!record->identity_ids_80.empty()) {
        // ref 2b6938..2b6996 / classic 2b44f8..2b4556
        identity *id = find_identity(record->identity_ids_80.front());
        actor.identity = id;
        if (id) {
            // ref c3a4f0..c3a588 / classic c37530..c375c8:
            // id+88 may identify an HF. If found and named, returns HF+38;
            // otherwise returns id+08 (the identity's own language_name).
            language_name *name = identity_visible_name(id);
            if (name && name->has_name_72) {
                actor.name = name;
                actor.complete_name = render_language_name(name, true, false);
            } else {
                actor.complete_name = "Nameless";
            }
        } else {
            actor.complete_name = "Nameless";
        }
    } else {
        actor.complete_name = "Unidentified";
    }
    return actor;
}

string node_initials(ActorSource *actor) {
    string output;
    if (actor->name) {
        // Boss: ref 2b781f..2b7935 / classic 2b53df..2b54f5
        // Other nodes: ref 2b8827..2b8b25 / classic 2b63e7..2b66e5
        if (!actor->name->first_name.empty())
            output += actor->name->first_name[0];
        if (actor->name->words_40[0] != -1 || actor->name->words_40[1] != -1) {
            // English word inventory, including native inflections from
            // name parts +5c/+5e. Both actual helper asm files are retained.
            string surname = english_name_word(actor->name->words_40[0],
                                               actor->name->parts_5c[0]);
            surname += english_name_word(actor->name->words_40[1],
                                        actor->name->parts_5c[1]);
            if (!surname.empty()) {
                if (!output.empty()) output += " ";
                output += surname[0];
            }
        }
    } else {
        // ref 2b7976..2b79d2,2b8ac7..2b8b25 /
        // classic 2b5536..2b5592,2b6687..2b66e5
        output = actor->complete_name;
        if (output.size() >= 4) output.resize(3);
    }
    // The complete original byte-uppercase helper is included, including its
    // accented-byte branches, not merely ASCII toupper.
    uppercase_native_name_bytes(output);
    return output;
}

string node_role(bool is_boss, bool role_vector_matches, int enum_value) {
    // Boss: ref 2b7808 / classic 2b53c8
    if (is_boss) return "Boss";
    // Default: ref 2b86b6 / classic 2b6276
    string role = "Membr";
    if (role_vector_matches) {
        // Actual 11-entry jump table: ref 2b8fcc / classic 2b6b8c.
        switch (enum_value) {
        case 5: case 15: role = "Asset"; break;
        case 6: role = "Thief"; break;
        case 7: case 11: role = "Crrpt"; break;
        case 8: role = "Assas"; break;
        case 9: role = "Snatc"; break;
        case 10: role = "Sabtr"; break;
        case 14: role = "Framr"; break;
        default: break; // includes 12,13 and out-of-range values
        }
    }
    return role;
}

string node_death(ActorSource *actor) {
    // Boss ref 2b7946..2b795a / classic 2b5506..2b551a.
    // Member ref 2b8b31..2b8b48 / classic 2b66f1..2b6708.
    return actor->figure->death_year_30 == -1 ? "" : "RIP";
}

void ensure_title_and_layout(OrganizationSource *org) {
    // ref d1657..d16b3 / classic d15e7..d1643.
    int title_width = native_width_mode ? 58 : native_grid_width - 4;
    if (org->title.empty()) {
        org->title = org->complete_title;
        if (org->title.size() > title_width)
            truncate_native_caption(org->title,title_width);
    }
    if (org->layout_flags & 1) return;
    org->layout_flags |= 1;
    // ref d16cf..d177b / classic d165f..d170b: reverse-depth pass.
    // For each node, +1c accumulates immediate child extents (+1 for each
    // child). No labels or identities are changed by this calculation.
    for (auto reverse_depth_group : native_reverse_depth_groups(org->nodes))
        for (auto *node : reverse_depth_group) {
            node->child_extent = 0;
            for (auto *child : native_next_depth_group(node))
                if (child->parent == node)
                    node->child_extent += child->child_extent + 1;
        }
    // ref d1784..d1826 / classic d1714..d17b6: forward positioning pass.
    for (auto *node : org->nodes) {
        if (node->child_extent <= 0) continue;
        int next_x = node->x_offset + native_half_toward_zero(5 - 5*node->child_extent);
        for (auto *child : native_next_depth_group(node)) {
            if (child->parent != node) continue;
            child->x_offset = next_x + native_half_toward_zero(5*child->child_extent);
            next_x += 5*child->child_extent + 5;
        }
    }
}

void draw_organizations(Justice *justice, Viewport viewport) {
    // ref 4777bb..478433 / classic 47537b..475ff3.
    // mode +290 == 2; filtered organization vector +330..338.
    int height = justice->filtered_organizations_330.size() * 5;
    if (selected_index_is_native_valid(justice)) {
        // The native renderer/input bounds check uses +318..320 here
        // (the actor vector), even though the selected pointer comes +330.
        ensure_title_and_layout(selected_org(justice));
        if (!selected_org(justice)->nodes.empty())
            height += viewport.height() - 11;
    }
    int scroll = clamp(justice->scroll_2c8, 0, height - viewport.height());
    for (int i = 0; i < justice->filtered_organizations_330.size(); ++i) {
        OrganizationSource *org = justice->filtered_organizations_330[i];
        ensure_title_and_layout(org);
        bool selected = i == justice->selected_index_294;
        int top = native_card_top(i,scroll,selected,org);
        if (viewport.contains_y(top)) {
            // ref 477a7b return477a80 / classic47563b return475640
            addst(org->title);
            // ref477be5 / classic4757a5; pure count, no prose interpretation.
            addst(decimal(i+1) + "/" + decimal(justice->filtered_organizations_330.size()));
        }
        if (selected) {
            // A selected empty graph takes this branch as well; there is no
            // invented placeholder caption or hover-only description.
            Clip clip = intersect(viewport,native_chart_rect(top));
            Offset origin = native_center_on_selected_node(org,justice->selected_node_2c0);
            for (OrganizationNode *node : org->nodes)
                if (node->parent) draw_native_link(node,node->parent,origin,clip);
            for (OrganizationNode *node : org->nodes) {
                int x = origin.x + node->x_offset;
                int y = origin.y + 6*node->depth;
                fill_native_rectangle(x,y,x+4,y+4,' '); // ref477fe0 / classic475ba0
                // Every label separately performs the native clip point test.
                if (clip.contains(x,y))
                    addst_at(x,y,node->role); // ref47806e return478073 / classic475c2e return475c33
                if (clip.contains(x+1,y+2))
                    addst_at(x+1,y+2,node->initials); // ref4780eb return4780f0 / classic475cab return475cb0
                if (clip.contains(x+1,y+3))
                    addst_at(x+1,y+3,node->death); // ref47816c return478171 / classic475d2c return475d31
            }
            if (footer_visible(top) && justice->selected_node_2c0) {
                // Separate native draws share the pen row, so the complete
                // identity is not a substring of the prefix string object.
                addst("Selected actor: "); // ref47822a / classic475dea
                addst(justice->selected_node_2c0->actor->complete_name); // ref47827f / classic475e3f
            }
        } else if (viewport.contains_y(top+2)) {
            if (org->nodes.size() == 1)
                addst("One member"); // ref478316 / classic475ed6
            else
                addst(decimal(org->nodes.size()) + " members"); // ref47838b / classic475f4b
        }
    }
    if (height > viewport.height()) draw_native_scrollbar(justice->scroll_2c8,justice->drag_2cc);
}

void organization_search(Justice *justice) {
    // ref479682..479840 / classic477242..477400.
    justice->filtered_organizations_330 = justice->organizations_2e8;
    string query = lowercase_native_bytes(justice->query_298);
    if (!query.empty()) {
        erase_if(justice->filtered_organizations_330,[&](OrganizationSource *org) {
            return lowercase_native_bytes(org->complete_title).find(query) == npos;
        });
    }
    justice->selected_index_294 = justice->filtered_organizations_330.empty() ? -1 : 0;
    if (!justice->filtered_organizations_330.empty()) {
        auto *first = justice->filtered_organizations_330.front();
        ensure_title_and_layout(first);
        justice->selected_node_2c0 = first->nodes.empty() ? nullptr : first->nodes.front();
    }
}

void organization_input(Justice *justice, Mouse mouse) {
    // ref4758b1..475e4b / classic473471..473a0b.
    // Scrollbar click/drag uses +2c8/+2cc, bounds identical to drawing.
    if (native_scrollbar_consumes_input(justice,mouse)) return;
    if (!mouse.valid || !mouse.left_click) return;
    for (auto *org : justice->filtered_organizations_330) {
        if (org == selected_org(justice)) {
            // ref475d77..475e4b / classic473937..473a0b.
            // No new tooltip strings are created: hover/selection relies on
            // the same node/complete actor record used by the footer.
            for (auto *node : org->nodes)
                if (node != justice->selected_node_2c0 && native_node_rect(node).contains(mouse)) {
                    justice->selected_node_2c0 = node;
                    consume_left_click();
                    return;
                }
        } else if (native_collapsed_card_rect(org).contains(mouse)) {
            justice->selected_index_294 = index_of(org);
            ensure_title_and_layout(org);
            justice->selected_node_2c0 = org->nodes.empty() ? nullptr : org->nodes.front();
        }
    }
}
