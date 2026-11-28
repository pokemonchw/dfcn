/* reference PE:6aea05a1:02734000; short-topic; RVA 0xf10e90..0xf13104 */

void load_short_topic(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 8) < 0xe) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 8)) {
    case 0:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x10001) {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"mind and body",0xd);
          return;
        }
        if (uVar2 < 0x101) {
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"individual happiness",0x14);
            return;
          }
          if (uVar2 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f13160)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"formal reasoning",0x10);
              return;
            case 1:
              FUN_140070f00(param_2,"deductive reasoning",0x13);
              return;
            case 2:
              FUN_140070f00(param_2,"syllogistic logic",0x11);
              return;
            case 3:
              FUN_140070f00(param_2,"hypothetical syllogisms",0x17);
              return;
            case 4:
              FUN_140070f00(param_2,"propositional logic",0x13);
              return;
            case 5:
              FUN_140070f00(param_2,"dialectic reasoning",0x13);
              return;
            case 6:
              FUN_140070f00(param_2,"analogical inference",0x14);
              return;
            case 7:
              FUN_140070f00(param_2,"medical ethics",0xe);
              return;
            }
          }
        }
        else if (uVar2 < 0x1001) {
          if (uVar2 == 0x1000) {
            FUN_140070f00(param_2,"justification",0xd);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"ethics and the state",0x14);
            return;
          }
          if (uVar2 == 0x400) {
            FUN_140070f00(param_2,"truth",5);
            return;
          }
          if (uVar2 == 0x800) {
            FUN_140070f00(param_2,"perception",10);
            return;
          }
        }
        else {
          if (uVar2 == 0x2000) {
            FUN_140070f00(param_2,"belief",6);
            return;
          }
          if (uVar2 == 0x4000) {
            FUN_140070f00(param_2,"existence",9);
            return;
          }
          if (uVar2 == 0x8000) {
            FUN_140070f00(param_2,"time",4);
            return;
          }
        }
      }
      else if (uVar2 < 0x1000001) {
        if (uVar2 == 0x1000000) {
          FUN_140070f00(param_2,"law",3);
          return;
        }
        if (uVar2 < 0x100001) {
          if (uVar2 == 0x100000) {
            FUN_140070f00(param_2,"processes",9);
            return;
          }
          if (uVar2 == 0x20000) {
            FUN_140070f00(param_2,"objects and properties",0x16);
            return;
          }
          if (uVar2 == 0x40000) {
            FUN_140070f00(param_2,"wholes and parts",0x10);
            return;
          }
          if (uVar2 == 0x80000) {
            FUN_140070f00(param_2,"events",6);
            return;
          }
        }
        else {
          if (uVar2 == 0x200000) {
            FUN_140070f00(param_2,"causation",9);
            return;
          }
          if (uVar2 == 0x400000) {
            FUN_140070f00(param_2,"military ethics",0xf);
            return;
          }
          if (uVar2 == 0x800000) {
            FUN_140070f00(param_2,"interpersonal ethics",0x14);
            return;
          }
        }
      }
      else if (uVar2 < 0x10000001) {
        if (uVar2 == 0x10000000) {
          FUN_140070f00(param_2,"diplomacy",9);
          return;
        }
        if (uVar2 == 0x2000000) {
          FUN_140070f00(param_2,"education",9);
          return;
        }
        if (uVar2 == 0x4000000) {
          FUN_140070f00(param_2,"grammar",7);
          return;
        }
        if (uVar2 == 0x8000000) {
          FUN_140070f00(param_2,"etymology",9);
          return;
        }
      }
      else {
        if (uVar2 == 0x20000000) {
          FUN_140070f00(param_2,"government",10);
          return;
        }
        if (uVar2 == 0x40000000) {
          FUN_140070f00(param_2,"economic policy",0xf);
          return;
        }
        if (uVar2 == 0x80000000) {
          FUN_140070f00(param_2,"social welfare",0xe);
          return;
        }
      }
      break;
    case 1:
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 1) {
        FUN_140070f00(param_2,"inductive reasoning",0x13);
        return;
      }
      if (iVar1 == 2) {
        FUN_140070f00(param_2,"direct inference",0x10);
        return;
      }
      if (iVar1 == 4) {
        FUN_140070f00(param_2,"beauty",6);
        return;
      }
      if (iVar1 == 8) {
        FUN_140070f00(param_2,"art",3);
        return;
      }
      if (iVar1 == 0x10) {
        FUN_140070f00(param_2,"dictionaries",0xc);
        return;
      }
      break;
    case 2:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x10001) {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"axiomatic reasoning",0x13);
          return;
        }
        if (uVar2 < 0x101) {
          if (uVar2 != 0x100) {
            if (0x7f < uVar2 - 1) {
              return;
            }
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f13204)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"proof by contradiction",0x16);
              return;
            case 1:
              FUN_140070f00(param_2,"nothingness",0xb);
              return;
            case 2:
              FUN_140070f00(param_2,"negative quantities",0x13);
              return;
            case 3:
              FUN_140070f00(param_2,"very large numbers",0x12);
              return;
            case 4:
              FUN_140070f00(param_2,"positional notation",0x13);
              return;
            case 5:
              FUN_140070f00(param_2,"geometric objects",0x11);
              return;
            case 6:
              FUN_140070f00(param_2,"exhaustion",10);
              return;
            case 7:
              FUN_140070f00(param_2,"congruent triangles",0x13);
              return;
            case 8:
              return;
            }
          }
        }
        else if (uVar2 < 0x1001) {
          if (uVar2 != 0x1000) {
            if (uVar2 == 0x200) {
              FUN_140070f00(param_2,"isosceles triangles",0x13);
              return;
            }
            if (uVar2 == 0x400) {
              FUN_140070f00(param_2,"inscribed triangles",0x13);
              return;
            }
            if (uVar2 != 0x800) {
              return;
            }
          }
        }
        else if ((uVar2 - 0x2000 & 0xffffdfff) != 0) {
          if (uVar2 != 0x8000) {
            return;
          }
          FUN_140070f00(param_2,"incommensurable ratios",0x16);
          return;
        }
        FUN_140070f00(param_2,"right triangles",0xf);
        return;
      }
      if (uVar2 < 0x1000001) {
        if (uVar2 == 0x1000000) {
          FUN_140070f00(param_2,"chord lengths",0xd);
          return;
        }
        if (uVar2 < 0x100001) {
          if (uVar2 == 0x100000) {
            FUN_140070f00(param_2,"cones",5);
            return;
          }
          if (uVar2 == 0x20000) {
            FUN_140070f00(param_2,"prime divisors",0xe);
            return;
          }
          if (uVar2 == 0x40000) {
            FUN_140070f00(param_2,"common divisors",0xf);
            return;
          }
          if (uVar2 == 0x80000) {
            FUN_140070f00(param_2,"pyramids",8);
            return;
          }
        }
        else {
          if (uVar2 == 0x200000) {
override_jmp_140f11645_case_3:
            FUN_140070f00(param_2,"spheres",7);
            return;
          }
          if (uVar2 == 0x400000) {
LAB_140f11582:
            FUN_140070f00(param_2,"circles",7);
            return;
          }
          if (uVar2 == 0x800000) {
            FUN_140070f00(param_2,"division",8);
            return;
          }
        }
      }
      else if (uVar2 < 0x10000001) {
        if (uVar2 == 0x10000000) {
          FUN_140070f00(param_2,"conic sections",0xe);
          return;
        }
        if (uVar2 == 0x2000000) {
LAB_140f11597:
          FUN_140070f00(param_2,"triangles",9);
          return;
        }
        if ((uVar2 + 0xfc000000 & 0xfbffffff) == 0) goto LAB_140f11582;
      }
      else {
        if (uVar2 == 0x20000000) {
          FUN_140070f00(param_2,"remainders",10);
          return;
        }
        if (uVar2 == 0x40000000) {
          FUN_140070f00(param_2,"parabolas",9);
          return;
        }
        if (uVar2 == 0x80000000) {
override_jmp_140f11645_case_1:
          FUN_140070f00(param_2,"prime numbers",0xd);
          return;
        }
      }
      break;
    case 3:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x101) {
        if (uVar2 == 0x100) {
override_jmp_140f11645_case_7:
          FUN_140070f00(param_2,"quadratic equations",0x13);
          return;
        }
        if (uVar2 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
          switch((&UNK_140f132a4)[uVar2 - 1]) {
          case 0:
            FUN_140070f00(param_2,"diagonals",9);
            return;
          case 1:
            goto override_jmp_140f11645_case_1;
          case 2:
            goto override_jmp_140f11645_case_3;
          case 3:
            FUN_140070f00(param_2,"large sums",10);
            return;
          case 4:
            FUN_140070f00(param_2,"systems of equations",0x14);
            return;
          case 5:
            goto override_jmp_140f11645_case_6;
          case 6:
            goto override_jmp_140f11645_case_7;
          }
        }
      }
      else if (uVar2 < 0x2001) {
        if (uVar2 == 0x2000) {
override_jmp_140f11645_case_6:
          FUN_140070f00(param_2,"equations",9);
          return;
        }
        if (uVar2 == 0x200) goto LAB_140f1174e;
        if (uVar2 == 0x400) {
          FUN_140070f00(param_2,"triangle and circles",0x14);
          return;
        }
        if (uVar2 == 0x800) goto LAB_140f11597;
        if (uVar2 == 0x1000) {
          FUN_140070f00(param_2,"powers",6);
          return;
        }
      }
      else {
        if (uVar2 == 0x4000) {
LAB_140f1174e:
          FUN_140070f00(param_2,"notation",8);
          return;
        }
        if (uVar2 == 0x8000) {
          FUN_140070f00(param_2,"the harmonic series",0x13);
          return;
        }
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"chords",6);
          return;
        }
      }
      break;
    case 4:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x401) {
        if (uVar2 == 0x400) {
          FUN_140070f00(param_2,"biographical dictionaries",0x19);
          return;
        }
        if (uVar2 < 0x21) {
          if (uVar2 == 0x20) {
            FUN_140070f00(param_2,"cycles",6);
            return;
          }
          if (uVar2 == 1) {
            FUN_140070f00(param_2,"source reliability",0x12);
            return;
          }
          if (uVar2 == 2) {
            FUN_140070f00(param_2,"systemic bias",0xd);
            return;
          }
          if (uVar2 == 4) {
            FUN_140070f00(param_2,"state bias",10);
            return;
          }
          if (uVar2 == 8) {
            FUN_140070f00(param_2,"personal interviews",0x13);
            return;
          }
          if (uVar2 == 0x10) {
            FUN_140070f00(param_2,"historical causation",0x14);
            return;
          }
        }
        else {
          if (uVar2 == 0x40) {
            FUN_140070f00(param_2,"community bonds",0xf);
            return;
          }
          if (uVar2 == 0x80) {
            FUN_140070f00(param_2,"community conflict",0x12);
            return;
          }
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"biography",9);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"comparative biography",0x15);
            return;
          }
        }
      }
      else if (uVar2 < 0x8001) {
        if (uVar2 == 0x8000) {
          FUN_140070f00(param_2,"cultural comparison",0x13);
          return;
        }
        if (uVar2 == 0x800) {
          FUN_140070f00(param_2,"autobiographical adventures",0x1b);
          return;
        }
        if (uVar2 == 0x1000) {
          FUN_140070f00(param_2,"genealogy",9);
          return;
        }
        if (uVar2 == 0x2000) {
          FUN_140070f00(param_2,"the encyclopedia",0x10);
          return;
        }
        if (uVar2 == 0x4000) {
          FUN_140070f00(param_2,"cultural history",0x10);
          return;
        }
      }
      else {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"cultural differences",0x14);
          return;
        }
        if (uVar2 == 0x20000) {
          FUN_140070f00(param_2,"alternate history",0x11);
          return;
        }
        if (uVar2 == 0x40000) {
          FUN_140070f00(param_2,"archaeology",0xb);
          return;
        }
        if (uVar2 == 0x80000) {
          FUN_140070f00(param_2,"technological evolution",0x17);
          return;
        }
      }
      break;
    case 5:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x401) {
        if (uVar2 == 0x400) {
          FUN_140070f00(param_2,"eclipses",8);
          return;
        }
        if (uVar2 < 0x21) {
          if (uVar2 == 0x20) {
            FUN_140070f00(param_2,"the sun and seasons",0x13);
            return;
          }
          if (uVar2 == 1) {
            FUN_140070f00(param_2,"moon phases",0xb);
            return;
          }
          if (uVar2 == 2) {
            FUN_140070f00(param_2,"the moon and seasons",0x14);
            return;
          }
          if (uVar2 == 4) {
            FUN_140070f00(param_2,"the moon\'s path",0xf);
            return;
          }
          if (uVar2 == 8) {
            FUN_140070f00(param_2,"the moon and tides",0x12);
            return;
          }
          if (uVar2 == 0x10) {
            FUN_140070f00(param_2,"tidal height",0xc);
            return;
          }
        }
        else {
          if (uVar2 == 0x40) {
            FUN_140070f00(param_2,"lunar and solar years",0x15);
            return;
          }
          if (uVar2 == 0x80) {
            FUN_140070f00(param_2,"daylight and seasons",0x14);
            return;
          }
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"the geocentric model",0x14);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"the heliocentric model",0x16);
            return;
          }
        }
      }
      else if (uVar2 < 0x8001) {
        if (uVar2 == 0x8000) {
          FUN_140070f00(param_2,"the brightness of stars",0x17);
          return;
        }
        if (uVar2 == 0x800) {
          FUN_140070f00(param_2,"star charts",0xb);
          return;
        }
        if (uVar2 == 0x1000) {
          FUN_140070f00(param_2,"star catalogues",0xf);
          return;
        }
        if (uVar2 == 0x2000) {
          FUN_140070f00(param_2,"extensive star catalogues",0x19);
          return;
        }
        if (uVar2 == 0x4000) {
          FUN_140070f00(param_2,"the color of stars",0x12);
          return;
        }
      }
      else {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"the shape of the world",0x16);
          return;
        }
        if (uVar2 == 0x20000) {
          FUN_140070f00(param_2,"equinoxes",9);
          return;
        }
        if (uVar2 == 0x40000) {
          FUN_140070f00(param_2,"empirical observation",0x15);
          return;
        }
        if (uVar2 == 0x80000) {
          FUN_140070f00(param_2,"astronomical models",0x13);
          return;
        }
      }
      break;
    case 6:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x41) {
        if (uVar2 == 0x40) {
          FUN_140070f00(param_2,"foraging behavior",0x11);
          return;
        }
        if (uVar2 - 1 < 0x20) {
                    /* WARNING: Switch is manually overridden */
          switch((&UNK_140f13340)[uVar2 - 1]) {
          case 0:
            FUN_140070f00(param_2,"dissection",10);
            return;
          case 1:
            FUN_140070f00(param_2,"anatomy",7);
            return;
          case 2:
override_jmp_140f11c2c_case_3:
            FUN_140070f00(param_2,"comparative anatomy",0x13);
            return;
          case 3:
            FUN_140070f00(param_2,"physical features",0x11);
            return;
          case 4:
            FUN_140070f00(param_2,"migratory patterns",0x12);
            return;
          case 5:
            FUN_140070f00(param_2,"reproductive behavior",0x15);
            return;
          }
        }
      }
      else if (uVar2 < 0x401) {
        if (uVar2 == 0x400) {
          FUN_140070f00(param_2,"climatic adaptation",0x13);
          return;
        }
        if (uVar2 == 0x80) {
          FUN_140070f00(param_2,"dietary relationships",0x15);
          return;
        }
        if (uVar2 == 0x100) {
          FUN_140070f00(param_2,"social behavior",0xf);
          return;
        }
        if (uVar2 == 0x200) {
          FUN_140070f00(param_2,"diseases",8);
          return;
        }
      }
      else {
        if (uVar2 == 0x800) {
          FUN_140070f00(param_2,"embriological development",0x19);
          return;
        }
        if (uVar2 == 0x1000) {
          FUN_140070f00(param_2,"the struggle for survival",0x19);
          return;
        }
      }
      break;
    case 7:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x1001) {
        if (uVar2 == 0x1000) {
          FUN_140070f00(param_2,"systematic experiments",0x16);
          return;
        }
        if (uVar2 < 0x41) {
          if (uVar2 == 0x40) {
            FUN_140070f00(param_2,"the blast furnace",0x11);
            return;
          }
          if (uVar2 - 1 < 0x20) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f1337c)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"combustible materials",0x15);
              return;
            case 1:
              FUN_140070f00(param_2,"ores",4);
              return;
            case 2:
              FUN_140070f00(param_2,"alloys",6);
              return;
            case 3:
              FUN_140070f00(param_2,"hardness",8);
              return;
            case 4:
              FUN_140070f00(param_2,"elemental materials",0x13);
              return;
            case 5:
              FUN_140070f00(param_2,"adhesives",9);
              return;
            }
          }
        }
        else {
          if (uVar2 == 0x80) {
            FUN_140070f00(param_2,"the alembic",0xb);
            return;
          }
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"liquid extraction",0x11);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"distillation",0xc);
            return;
          }
          if (uVar2 == 0x400) {
            FUN_140070f00(param_2,"evaporation",0xb);
            return;
          }
          if (uVar2 == 0x800) {
            FUN_140070f00(param_2,"alkali and acids",0x10);
            return;
          }
        }
      }
      else if (uVar2 < 0x40001) {
        if (uVar2 == 0x40000) {
          FUN_140070f00(param_2,"spirit of niter",0xf);
          return;
        }
        if (uVar2 == 0x2000) {
          FUN_140070f00(param_2,"the flask",9);
          return;
        }
        if (uVar2 == 0x4000) {
          FUN_140070f00(param_2,"the beaker",10);
          return;
        }
        if (uVar2 == 0x8000) {
          FUN_140070f00(param_2,"the vial",8);
          return;
        }
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"the funnel",10);
          return;
        }
        if (uVar2 == 0x20000) {
          FUN_140070f00(param_2,"the crucible",0xc);
          return;
        }
      }
      else {
        if (uVar2 == 0x80000) {
          FUN_140070f00(param_2,"oil of vitriol",0xe);
          return;
        }
        if (uVar2 == 0x100000) {
          FUN_140070f00(param_2,"aqua regia",10);
          return;
        }
        if (uVar2 == 0x200000) {
          FUN_140070f00(param_2,"the ampoule",0xb);
          return;
        }
        if (uVar2 == 0x400000) {
          FUN_140070f00(param_2,"the retort",10);
          return;
        }
        if (uVar2 == 0x800000) {
          FUN_140070f00(param_2,"laboratory ovens",0x10);
          return;
        }
      }
      break;
    case 8:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x801) {
        if (uVar2 == 0x800) {
          FUN_140070f00(param_2,"height measurements",0x13);
          return;
        }
        if (uVar2 < 0x21) {
          if (uVar2 == 0x20) {
            FUN_140070f00(param_2,"land surveying",0xe);
            return;
          }
          if (uVar2 == 1) {
            FUN_140070f00(param_2,"surveying",9);
            return;
          }
          if (uVar2 == 2) {
            FUN_140070f00(param_2,"the surveying staff",0x13);
            return;
          }
          if (uVar2 == 4) {
            FUN_140070f00(param_2,"cartography",0xb);
            return;
          }
          if (uVar2 == 8) {
            FUN_140070f00(param_2,"triangulation",0xd);
            return;
          }
          if (uVar2 == 0x10) {
            FUN_140070f00(param_2,"cartographical surveying",0x18);
            return;
          }
        }
        else {
          if (uVar2 == 0x40) {
            FUN_140070f00(param_2,"military surveying",0x12);
            return;
          }
          if (uVar2 == 0x80) {
            FUN_140070f00(param_2,"surveying for engineering",0x19);
            return;
          }
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"geological cartography",0x16);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"map grids",9);
            return;
          }
          if (uVar2 == 0x400) {
            FUN_140070f00(param_2,"distance scales",0xf);
            return;
          }
        }
      }
      else if (uVar2 < 0x20001) {
        if (uVar2 == 0x20000) {
          FUN_140070f00(param_2,"rainfall",8);
          return;
        }
        if (uVar2 == 0x1000) {
          FUN_140070f00(param_2,"economic data",0xd);
          return;
        }
        if (uVar2 == 0x2000) {
          FUN_140070f00(param_2,"economic cartography",0x14);
          return;
        }
        if (uVar2 == 0x4000) {
          FUN_140070f00(param_2,"the atlas",9);
          return;
        }
        if (uVar2 == 0x8000) {
          FUN_140070f00(param_2,"delta formation",0xf);
          return;
        }
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"wind patterns",0xd);
          return;
        }
      }
      else {
        if (uVar2 == 0x40000) {
          FUN_140070f00(param_2,"the water cycle",0xf);
          return;
        }
        if (uVar2 == 0x80000) {
          FUN_140070f00(param_2,"climate zones",0xd);
          return;
        }
        if (uVar2 == 0x100000) {
          FUN_140070f00(param_2,"map accuracy",0xc);
          return;
        }
        if (uVar2 == 0x200000) {
          FUN_140070f00(param_2,"map projections",0xf);
          return;
        }
      }
      break;
    case 9:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x10001) {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"convalescence",0xd);
          return;
        }
        if (uVar2 < 0x101) {
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"disease classification",0x16);
            return;
          }
          if (uVar2 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f133c0)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"disease and fouled water",0x18);
              return;
            case 1:
              FUN_140070f00(param_2,"physical examination",0x14);
              return;
            case 2:
              FUN_140070f00(param_2,"autopsy",7);
              return;
            case 3:
              FUN_140070f00(param_2,"prognosis",9);
              return;
            case 4:
              FUN_140070f00(param_2,"herbal remedies",0xf);
              return;
            case 5:
              FUN_140070f00(param_2,"animal remedies",0xf);
              return;
            case 6:
              FUN_140070f00(param_2,"mineral remedies",0x10);
              return;
            case 7:
              FUN_140070f00(param_2,"bandages",8);
              return;
            }
          }
        }
        else if (uVar2 < 0x1001) {
          if (uVar2 == 0x1000) {
            FUN_140070f00(param_2,"epidemic disease",0x10);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"toxicology",10);
            return;
          }
          if (uVar2 == 0x400) {
            FUN_140070f00(param_2,"acute and chronic conditions",0x1c);
            return;
          }
          if (uVar2 == 0x800) {
            FUN_140070f00(param_2,"endemic disease",0xf);
            return;
          }
        }
        else {
          if (uVar2 == 0x2000) {
            FUN_140070f00(param_2,"exacerbation",0xc);
            return;
          }
          if (uVar2 == 0x4000) {
            FUN_140070f00(param_2,"paroxysm",8);
            return;
          }
          if (uVar2 == 0x8000) {
            FUN_140070f00(param_2,"relapse",7);
            return;
          }
        }
      }
      else if (uVar2 < 0x1000001) {
        if (uVar2 == 0x1000000) {
          FUN_140070f00(param_2,"incision",8);
          return;
        }
        if (uVar2 < 0x100001) {
          if (uVar2 == 0x100000) {
            FUN_140070f00(param_2,"the traction bench",0x12);
            return;
          }
          if (uVar2 == 0x20000) {
            FUN_140070f00(param_2,"traumatic injuries",0x12);
            return;
          }
          if (uVar2 == 0x40000) {
            FUN_140070f00(param_2,"fracture treatment",0x12);
            return;
          }
          if (uVar2 == 0x80000) {
            FUN_140070f00(param_2,"fracture classification",0x17);
            return;
          }
        }
        else {
          if (uVar2 == 0x200000) {
            FUN_140070f00(param_2,"fracture immobilization",0x17);
            return;
          }
          if (uVar2 == 0x400000) {
            FUN_140070f00(param_2,"the orthopedic cast",0x13);
            return;
          }
          if (uVar2 == 0x800000) {
            FUN_140070f00(param_2,"excision",8);
            return;
          }
        }
      }
      else if (uVar2 < 0x10000001) {
        if (uVar2 == 0x10000000) {
          FUN_140070f00(param_2,"scraping",8);
          return;
        }
        if (uVar2 == 0x2000000) {
          FUN_140070f00(param_2,"hernia surgery",0xe);
          return;
        }
        if (uVar2 == 0x4000000) {
          FUN_140070f00(param_2,"tracheotomy surgery",0x13);
          return;
        }
        if (uVar2 == 0x8000000) {
          FUN_140070f00(param_2,"lithotomy surgery",0x11);
          return;
        }
      }
      else {
        if (uVar2 == 0x20000000) {
          FUN_140070f00(param_2,"draining",8);
          return;
        }
        if (uVar2 == 0x40000000) {
          FUN_140070f00(param_2,"probing",7);
          return;
        }
        if (uVar2 == 0x80000000) {
          FUN_140070f00(param_2,"suturing",8);
          return;
        }
      }
      break;
    case 10:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x10001) {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"eye anatomy",0xb);
          return;
        }
        if (uVar2 < 0x101) {
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"surgical scissors",0x11);
            return;
          }
          if (uVar2 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f13464)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"ligature",8);
              return;
            case 1:
              FUN_140070f00(param_2,"surgical models",0xf);
              return;
            case 2:
              FUN_140070f00(param_2,"mud bags as surgical models",0x1b);
              return;
            case 3:
              FUN_140070f00(param_2,"plants as surgical models",0x19);
              return;
            case 4:
              FUN_140070f00(param_2,"animals as surgical models",0x1a);
              return;
            case 5:
              FUN_140070f00(param_2,"specialized surgical instruments",0x20);
              return;
            case 6:
              FUN_140070f00(param_2,"forceps",7);
              return;
            case 7:
              FUN_140070f00(param_2,"the scalpel",0xb);
              return;
            }
          }
        }
        else if (uVar2 < 0x1001) {
          if (uVar2 == 0x1000) {
            FUN_140070f00(param_2,"anesthesia",10);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"surgical needles",0x10);
            return;
          }
          if (uVar2 == 0x400) {
            FUN_140070f00(param_2,"cataract surgery",0x10);
            return;
          }
          if (uVar2 == 0x800) {
            FUN_140070f00(param_2,"cauterization",0xd);
            return;
          }
        }
        else {
          if (uVar2 == 0x2000) {
            FUN_140070f00(param_2,"pulmonary medicine",0x12);
            return;
          }
          if (uVar2 == 0x4000) {
            FUN_140070f00(param_2,"anatomical studies",0x12);
            return;
          }
          if (uVar2 == 0x8000) {
            FUN_140070f00(param_2,"bodily fluids",0xd);
            return;
          }
        }
      }
      else if (uVar2 < 0x1000001) {
        if (uVar2 == 0x1000000) {
          FUN_140070f00(param_2,"muscles",7);
          return;
        }
        if (uVar2 < 0x100001) {
          if (uVar2 == 0x100000) {
            FUN_140070f00(param_2,"blood vessels",0xd);
            return;
          }
          if (uVar2 == 0x20000) {
            FUN_140070f00(param_2,"nerves",6);
            return;
          }
          if (uVar2 == 0x40000) {
            FUN_140070f00(param_2,"the nervous system",0x12);
            return;
          }
          if (uVar2 == 0x80000) {
            FUN_140070f00(param_2,"reaction time",0xd);
            return;
          }
        }
        else {
          if (uVar2 == 0x200000) {
            FUN_140070f00(param_2,"pulmonary circulation",0x15);
            return;
          }
          if (uVar2 == 0x400000) goto override_jmp_140f11c2c_case_3;
          if (uVar2 == 0x800000) {
            FUN_140070f00(param_2,"the voice",9);
            return;
          }
        }
      }
      else if (uVar2 < 0x10000001) {
        if (uVar2 == 0x10000000) {
          FUN_140070f00(param_2,"hospital staff",0xe);
          return;
        }
        if ((uVar2 + 0xfe000000 & 0xfdffffff) == 0) {
          FUN_140070f00(param_2,"mental illnesses",0x10);
          return;
        }
        if (uVar2 == 0x8000000) {
          FUN_140070f00(param_2,"hospitals",9);
          return;
        }
      }
      else {
        if (uVar2 == 0x20000000) {
          FUN_140070f00(param_2,"hospital wards",0xe);
          return;
        }
        if (uVar2 == 0x40000000) {
          FUN_140070f00(param_2,"hospital laboratories",0x15);
          return;
        }
        if (uVar2 == 0x80000000) {
          FUN_140070f00(param_2,"medical schools",0xf);
          return;
        }
      }
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xc) == 1) {
        FUN_140070f00(param_2,"asylums",7);
        return;
      }
      break;
    case 0xc:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x10001) {
        if (uVar2 == 0x10000) {
          FUN_140070f00(param_2,"the straight-beam balance",0x19);
          return;
        }
        if (uVar2 < 0x101) {
          if (uVar2 == 0x100) {
override_jmp_140f12a5a_case_8:
            FUN_140070f00(param_2,"the pulley",10);
            return;
          }
          if (uVar2 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f13508)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"shadow clocks",0xd);
              return;
            case 1:
              FUN_140070f00(param_2,"water clocks",0xc);
              return;
            case 2:
              FUN_140070f00(param_2,"conical water clocks",0x14);
              return;
            case 3:
              FUN_140070f00(param_2,"water clock reservoirs",0x16);
              return;
            case 4:
              FUN_140070f00(param_2,"the astrarium",0xd);
              return;
            case 5:
              FUN_140070f00(param_2,"the hourglass",0xd);
              return;
            case 6:
              FUN_140070f00(param_2,"mechanical clocks",0x11);
              return;
            case 7:
              goto override_jmp_140f12a5a_case_8;
            }
          }
        }
        else if (uVar2 < 0x1001) {
          if (uVar2 == 0x1000) {
            FUN_140070f00(param_2,"the windlass",0xc);
            return;
          }
          if ((uVar2 - 0x200 & 0xfffffdff) == 0) {
            FUN_140070f00(param_2,"the screw",9);
            return;
          }
          if (uVar2 == 0x800) {
            FUN_140070f00(param_2,"the wheel-and-axle",0x12);
            return;
          }
        }
        else {
          if (uVar2 == 0x2000) {
            FUN_140070f00(param_2,"the wedge",9);
            return;
          }
          if ((uVar2 - 0x4000 & 0xffffbfff) == 0) {
            FUN_140070f00(param_2,"the lever",9);
            return;
          }
        }
      }
      else if (uVar2 < 0x1000001) {
        if (uVar2 == 0x1000000) {
          FUN_140070f00(param_2,"the chariot odometer",0x14);
          return;
        }
        if (uVar2 < 0x100001) {
          if (uVar2 == 0x100000) {
            FUN_140070f00(param_2,"the padlock",0xb);
            return;
          }
          if (uVar2 == 0x20000) {
            FUN_140070f00(param_2,"gears",5);
            return;
          }
          if (uVar2 == 0x40000) {
            FUN_140070f00(param_2,"the warded lock",0xf);
            return;
          }
          if (uVar2 == 0x80000) {
            FUN_140070f00(param_2,"the tumbler lock",0x10);
            return;
          }
        }
        else {
          if (uVar2 == 0x200000) {
            FUN_140070f00(param_2,"the camshaft",0xc);
            return;
          }
          if (uVar2 == 0x400000) {
            FUN_140070f00(param_2,"the crankshaft",0xe);
            return;
          }
          if (uVar2 == 0x800000) {
            FUN_140070f00(param_2,"the water-powered sawmill",0x19);
            return;
          }
        }
      }
      else if (uVar2 < 0x10000001) {
        if (uVar2 == 0x10000000) {
          FUN_140070f00(param_2,"combination locks",0x11);
          return;
        }
        if (uVar2 == 0x2000000) {
          FUN_140070f00(param_2,"chain drives",0xc);
          return;
        }
        if (uVar2 == 0x4000000) {
          FUN_140070f00(param_2,"the mechanical compass",0x16);
          return;
        }
        if (uVar2 == 0x8000000) {
          FUN_140070f00(param_2,"the differential gear",0x15);
          return;
        }
      }
      else {
        if (uVar2 == 0x20000000) {
          FUN_140070f00(param_2,"the verge escapement",0x14);
          return;
        }
        if (uVar2 == 0x40000000) {
          FUN_140070f00(param_2,"the balance wheel",0x11);
          return;
        }
        if (uVar2 == 0x80000000) {
          FUN_140070f00(param_2,"the siphon",10);
          return;
        }
      }
      break;
    case 0xd:
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 < 0x8001) {
        if (uVar2 == 0x8000) {
          FUN_140070f00(param_2,"the spherical astrolabe",0x17);
          return;
        }
        if (uVar2 < 0x81) {
          if (uVar2 == 0x80) {
            FUN_140070f00(param_2,"light and color",0xf);
            return;
          }
          if (uVar2 - 1 < 0x40) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140f135a8)[uVar2 - 1]) {
            case 0:
              FUN_140070f00(param_2,"valves",6);
              return;
            case 1:
              FUN_140070f00(param_2,"the force pump",0xe);
              return;
            case 2:
              FUN_140070f00(param_2,"the crystal lens",0x10);
              return;
            case 3:
              FUN_140070f00(param_2,"water-filled spheres",0x14);
              return;
            case 4:
              FUN_140070f00(param_2,"the glass lens",0xe);
              return;
            case 5:
              FUN_140070f00(param_2,"the camera obscura",0x12);
              return;
            case 6:
              FUN_140070f00(param_2,"the parabolic mirror",0x14);
              return;
            }
          }
        }
        else if (uVar2 < 0x801) {
          if (uVar2 == 0x800) {
            FUN_140070f00(param_2,"lamination",10);
            return;
          }
          if (uVar2 == 0x100) {
            FUN_140070f00(param_2,"rainbows",8);
            return;
          }
          if (uVar2 == 0x200) {
            FUN_140070f00(param_2,"refraction",10);
            return;
          }
          if (uVar2 == 0x400) {
            FUN_140070f00(param_2,"models and templates",0x14);
            return;
          }
        }
        else {
          if (uVar2 == 0x1000) {
            FUN_140070f00(param_2,"the dioptra",0xb);
            return;
          }
          if (uVar2 == 0x2000) {
            FUN_140070f00(param_2,"the astrolabe",0xd);
            return;
          }
          if (uVar2 == 0x4000) {
            FUN_140070f00(param_2,"the armillary sphere",0x14);
            return;
          }
        }
      }
      else if (uVar2 < 0x800001) {
        if (uVar2 == 0x800000) {
          FUN_140070f00(param_2,"the height of the atmosphere",0x1c);
          return;
        }
        if (uVar2 < 0x80001) {
          if (uVar2 == 0x80000) {
            FUN_140070f00(param_2,"double-acting piston bellows",0x1c);
            return;
          }
          if (uVar2 == 0x10000) {
            FUN_140070f00(param_2,"mural instruments",0x11);
            return;
          }
          if (uVar2 == 0x20000) {
            FUN_140070f00(param_2,"the orrery",10);
            return;
          }
          if (uVar2 == 0x40000) {
            FUN_140070f00(param_2,"the water-powered trip hammer",0x1d);
            return;
          }
        }
        else {
          if (uVar2 == 0x100000) {
            FUN_140070f00(param_2,"water displacement",0x12);
            return;
          }
          if (uVar2 == 0x200000) {
            FUN_140070f00(param_2,"atmospheric refraction",0x16);
            return;
          }
          if (uVar2 == 0x400000) {
            FUN_140070f00(param_2,"twilight",8);
            return;
          }
        }
      }
      else if (uVar2 < 0x8000001) {
        if (uVar2 == 0x8000000) {
          FUN_140070f00(param_2,"the water-powered piston bellows",0x20);
          return;
        }
        if (uVar2 == 0x1000000) {
          FUN_140070f00(param_2,"the piston",10);
          return;
        }
        if (uVar2 == 0x2000000) {
          FUN_140070f00(param_2,"the crank",9);
          return;
        }
        if (uVar2 == 0x4000000) {
          FUN_140070f00(param_2,"the bellows",0xb);
          return;
        }
      }
      else {
        if (uVar2 == 0x10000000) {
          FUN_140070f00(param_2,"the water wheel",0xf);
          return;
        }
        if (uVar2 == 0x20000000) {
          FUN_140070f00(param_2,"the trip hammer",0xf);
          return;
        }
      }
    }
  }
  return;
}

