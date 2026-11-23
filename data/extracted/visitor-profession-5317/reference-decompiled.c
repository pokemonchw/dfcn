/* reference PE:6aea05a1:02734000; profession-words; RVA 0x1345520..0x13467a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_profession_words
               (char *param_1,char *param_2,ushort param_3,short param_4,undefined1 *param_5,
               short param_6,char param_7,char param_8)

{
  char *pcVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  uVar8 = (ulonglong)param_4;
  lVar9 = (longlong)(short)param_3;
  if (0x86 < param_3) {
    return;
  }
  uVar7 = (ulonglong)param_6;
  bVar3 = true;
  *param_5 = 0;
  cVar4 = arrival_raw_profession_available(0x14250eec8,param_4,param_6);
  if (cVar4 != '\0') {
    arrival_raw_profession_selection
              (0x14250eec8,param_1,param_4,param_6,CONCAT22(uVar10,(short)lVar9),param_7,param_8);
    return;
  }
  if (0x86 < (uint)lVar9) goto override_jmp_1413455f3_case_102;
                    /* WARNING: Switch is manually overridden */
  switch(lVar9) {
  case 0:
    FUN_140070f00(param_1,"miner",5);
    break;
  case 1:
    FUN_140070f00(param_1,"woodworker",10);
    break;
  case 2:
    FUN_140070f00(param_1,"carpenter",9);
    break;
  case 3:
    FUN_140070f00(param_1,"bowyer",6);
    break;
  case 4:
    FUN_140070f00(param_1,"woodcutter",10);
    break;
  case 5:
    FUN_140070f00(param_1,"stoneworker",0xb);
    break;
  case 6:
    FUN_140070f00(param_1,"stonecutter",0xb);
    break;
  case 7:
    FUN_140070f00(param_1,"stone carver",0xc);
    break;
  case 8:
    FUN_140070f00(param_1,"engraver",8);
    break;
  case 9:
    FUN_140070f00(param_1,"mason",5);
    break;
  case 10:
    FUN_140070f00(param_1,"ranger",6);
    break;
  case 0xb:
    FUN_140070f00(param_1,"animal caretaker",0x10);
    break;
  case 0xc:
    FUN_140070f00(param_1,"animal trainer",0xe);
    break;
  case 0xd:
    FUN_140070f00(param_1,"hunter",6);
    break;
  case 0xe:
    FUN_140070f00(param_1,"trapper",7);
    break;
  case 0xf:
    FUN_140070f00(param_1,"animal dissector",0x10);
    break;
  case 0x10:
    FUN_140070f00(param_1,"metalsmith",10);
    break;
  case 0x11:
    FUN_140070f00(param_1,"furnace operator",0x10);
    break;
  case 0x12:
    FUN_140070f00(param_1,"weaponsmith",0xb);
    break;
  case 0x13:
    FUN_140070f00(param_1,"armorer",7);
    break;
  case 0x14:
    FUN_140070f00(param_1,"blacksmith",10);
    break;
  case 0x15:
    FUN_140070f00(param_1,"metalcrafter",0xc);
    break;
  case 0x16:
    FUN_140070f00(param_1,"jeweler",7);
    break;
  case 0x17:
    FUN_140070f00(param_1,"gem cutter",10);
    break;
  case 0x18:
    FUN_140070f00(param_1,"gem setter",10);
    break;
  case 0x19:
    pcVar6 = "craftsmen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "craftsman";
    }
    goto LAB_14134674f;
  case 0x1a:
    FUN_140070f00(param_1,"woodcrafter",0xb);
    break;
  case 0x1b:
    FUN_140070f00(param_1,"stonecrafter",0xc);
    break;
  case 0x1c:
    FUN_140070f00(param_1,"leatherworker",0xd);
    break;
  case 0x1d:
    FUN_140070f00(param_1,"bone carver",0xb);
    break;
  case 0x1e:
    FUN_140070f00(param_1,"weaver",6);
    break;
  case 0x1f:
    FUN_140070f00(param_1,"clothier",8);
    break;
  case 0x20:
    FUN_140070f00(param_1,"glassmaker",10);
    break;
  case 0x21:
    FUN_140070f00(param_1,"potter",6);
    break;
  case 0x22:
    FUN_140070f00(param_1,"glazer",6);
    break;
  case 0x23:
    FUN_140070f00(param_1,"wax worker",10);
    break;
  case 0x24:
    FUN_140071040(param_1,"strand extractor",0x10);
    break;
  case 0x25:
    FUN_140070f00(param_1,"fishery worker",0xe);
    break;
  case 0x26:
    pcVar6 = "fishermen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "fisherman";
    }
    goto LAB_14134674f;
  case 0x27:
    FUN_140070f00(param_1,"fish dissector",0xe);
    break;
  case 0x28:
    FUN_140070f00(param_1,"fish cleaner",0xc);
    break;
  case 0x29:
    FUN_140070f00(param_1,"farmer",6);
    break;
  case 0x2a:
    FUN_140070f00(param_1,"cheesemaker",0xb);
    break;
  case 0x2b:
    FUN_140070f00(param_1,"milker",6);
    break;
  case 0x2c:
    FUN_140070f00(param_1,"cook",4);
    break;
  case 0x2d:
    FUN_140070f00(param_1,"thresher",8);
    break;
  case 0x2e:
    FUN_140070f00(param_1,"miller",6);
    break;
  case 0x2f:
    FUN_140070f00(param_1,"butcher",7);
    break;
  case 0x30:
    FUN_140070f00(param_1,"tanner",6);
    break;
  case 0x31:
    FUN_140070f00(param_1,"dyer",4);
    break;
  case 0x32:
    FUN_140070f00(param_1,"planter",7);
    break;
  case 0x33:
    FUN_140070f00(param_1,"herbalist",9);
    break;
  case 0x34:
    FUN_140070f00(param_1,"brewer",6);
    break;
  case 0x35:
    FUN_140070f00(param_1,"soap maker",10);
    break;
  case 0x36:
    FUN_140070f00(param_1,"potash maker",0xc);
    break;
  case 0x37:
    FUN_140070f00(param_1,"lye maker",9);
    break;
  case 0x38:
    FUN_140070f00(param_1,"wood burner",0xb);
    break;
  case 0x39:
    FUN_140070f00(param_1,"shearer",7);
    break;
  case 0x3a:
    FUN_140070f00(param_1,"spinner",7);
    break;
  case 0x3b:
    FUN_140070f00(param_1,"presser",7);
    break;
  case 0x3c:
    FUN_140070f00(param_1,"beekeeper",9);
    break;
  case 0x3d:
    FUN_140070f00(param_1,"engineer",8);
    break;
  case 0x3e:
    FUN_140070f00(param_1,"mechanic",8);
    break;
  case 0x3f:
    FUN_140070f00(param_1,"siege engineer",0xe);
    break;
  case 0x40:
    FUN_140070f00(param_1,"siege operator",0xe);
    break;
  case 0x41:
    FUN_140070f00(param_1,"pump operator",0xd);
    break;
  case 0x42:
    FUN_140070f00(param_1,"clerk",5);
    break;
  case 0x43:
    FUN_140070f00(param_1,"administrator",0xd);
    break;
  case 0x44:
    FUN_140070f00(param_1,"trader",6);
    break;
  case 0x45:
    FUN_140070f00(param_1,"doctor",6);
    break;
  case 0x46:
    FUN_140070f00(param_1,"diagnostician",0xd);
    break;
  case 0x47:
    FUN_140070f00(param_1,"bone doctor",0xb);
    break;
  case 0x48:
    FUN_140070f00(param_1,"suturer",7);
    break;
  case 0x49:
    FUN_140070f00(param_1,"surgeon",7);
    break;
  case 0x4a:
    FUN_140070f00(param_1,"merchant",8);
    break;
  case 0x4b:
    pcVar6 = "hammermen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "hammerman";
    }
    goto LAB_14134674f;
  case 0x4c:
    FUN_140070f00(param_1,"Hammer Lord",0xb);
    break;
  case 0x4d:
    pcVar6 = "spearmen";
    uVar5 = 8;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "spearman";
    }
    goto LAB_14134674f;
  case 0x4e:
    FUN_140070f00(param_1,"Spearmaster",0xb);
    break;
  case 0x4f:
    pcVar6 = "crossbowmen";
    uVar5 = 0xb;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "crossbowman";
    }
    goto LAB_14134674f;
  case 0x50:
    pcVar6 = "Elite Crossbowman";
    uVar5 = 0x11;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "Elite Crossbowmen";
    }
    goto LAB_14134674f;
  case 0x51:
    FUN_140070f00(param_1,"wrestler",8);
    break;
  case 0x52:
    FUN_140070f00(param_1,"Elite Wrestler",0xe);
    break;
  case 0x53:
    pcVar6 = "axemen";
    uVar5 = 6;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "axeman";
    }
    goto LAB_14134674f;
  case 0x54:
    FUN_140070f00(param_1,"Axe Lord",8);
    break;
  case 0x55:
    pcVar6 = "swordsmen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "swordsman";
    }
    goto LAB_14134674f;
  case 0x56:
    FUN_140070f00(param_1,"Swordmaster",0xb);
    break;
  case 0x57:
    pcVar6 = "macemen";
    uVar5 = 7;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "maceman";
    }
    goto LAB_14134674f;
  case 0x58:
    FUN_140070f00(param_1,"Mace Lord",9);
    break;
  case 0x59:
    pcVar6 = "pikemen";
    uVar5 = 7;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "pikeman";
    }
    goto LAB_14134674f;
  case 0x5a:
    FUN_140070f00(param_1,"Pikemaster",10);
    break;
  case 0x5b:
    pcVar6 = "bowmen";
    uVar5 = 6;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "bowman";
    }
    goto LAB_14134674f;
  case 0x5c:
    pcVar6 = "Elite Bowmen";
    uVar5 = 0xc;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "Elite Bowman";
    }
    goto LAB_14134674f;
  case 0x5d:
    FUN_140070f00(param_1,"blowgunner",10);
    break;
  case 0x5e:
    FUN_140070f00(param_1,"Master Blowgunner",0x11);
    break;
  case 0x5f:
    FUN_140070f00(param_1,"lasher",6);
    break;
  case 0x60:
    FUN_140070f00(param_1,"Master Lasher",0xd);
    break;
  case 0x61:
    FUN_140070f00(param_1,"recruit",7);
    break;
  case 0x62:
    uVar5 = 7;
    pcVar6 = "hunting";
    goto LAB_14134674f;
  case 99:
    uVar5 = 3;
    pcVar6 = "war";
    goto LAB_14134674f;
  case 100:
    FUN_140070f00(param_1,"Master Thief",0xc);
    break;
  case 0x65:
    FUN_140070f00(param_1,"thief",5);
    break;
  case 0x67:
    if (param_6 == -1) {
      if (((-1 < param_4) && (uVar8 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
         (lVar9 = uVar8 * 8, *(longlong *)(*(longlong *)(lVar9 + _DAT_14250eee8) + 0xd0) != 0)) {
        if (param_7 == '\0') {
          if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) goto LAB_141346725;
          pcVar6 = (char *)(*(longlong *)(_DAT_14250eee8 + lVar9) + 0xc0);
        }
        else {
          pcVar6 = (char *)(*(longlong *)(_DAT_14250eee8 + lVar9) + 0xe0);
        }
        goto LAB_1413466c9;
      }
LAB_141346424:
      if (param_7 == '\0') {
        pcVar6 = "child";
        uVar5 = 5;
        param_2 = param_1;
      }
      else {
        uVar5 = 8;
        pcVar6 = "children";
        param_2 = param_1;
      }
      goto LAB_14134674f;
    }
    if ((param_4 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8)) {
      if (param_4 < 0) goto LAB_141346424;
    }
    else if (((-1 < param_6) &&
             (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8),
             lVar2 = *(longlong *)(lVar9 + 0x178),
             uVar7 < (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar2 >> 3))) &&
            (*(longlong *)(*(longlong *)(lVar2 + uVar7 * 8) + 0x110) != 0)) {
      if (param_7 == '\0') {
        if (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) ||
           (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), lVar2 = *(longlong *)(lVar9 + 0x178),
           (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar2 >> 3) <= uVar7)) goto LAB_141346725;
        pcVar6 = (char *)(*(longlong *)(lVar2 + uVar7 * 8) + 0x100);
      }
      else {
        pcVar6 = (char *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(_DAT_14250eee8 + uVar8 * 8) + 0x178) +
                           uVar7 * 8) + 0x120);
      }
      goto LAB_1413466c9;
    }
    if (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) ||
       (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), *(longlong *)(lVar9 + 0xd0) == 0))
    goto LAB_141346424;
    if (-1 < param_4) {
      if (param_7 == '\0') {
        if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) goto LAB_141346725;
        pcVar6 = (char *)(lVar9 + 0xc0);
      }
      else {
        pcVar6 = (char *)(lVar9 + 0xe0);
      }
      goto LAB_1413466c9;
    }
LAB_141346725:
    *param_5 = 1;
    goto LAB_141346754;
  case 0x68:
    if (param_6 == -1) {
      if (((-1 < param_4) && (uVar8 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
         (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), *(longlong *)(lVar9 + 0x90) != 0)) {
LAB_1413466a8:
        if (param_7 == '\0') {
          if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) goto LAB_141346725;
          pcVar6 = (char *)(lVar9 + 0x80);
        }
        else {
          pcVar6 = (char *)(lVar9 + 0xa0);
        }
LAB_1413466c9:
        if (param_1 != pcVar6) {
          pcVar1 = pcVar6 + 0x10;
          if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
            pcVar6 = *(char **)pcVar6;
          }
          FUN_140070f00(param_1,pcVar6,*(undefined8 *)pcVar1);
        }
        if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
          uVar8 = *(ulonglong *)(param_1 + 0x18);
          pcVar6 = param_1;
          if (0xf < uVar8) {
            pcVar6 = *(char **)param_1;
          }
          if ('`' < *pcVar6) {
            pcVar6 = param_1;
            if (0xf < uVar8) {
              pcVar6 = *(char **)param_1;
            }
            if (*pcVar6 < '{') {
              pcVar6 = param_1;
              if (0xf < uVar8) {
                pcVar6 = *(char **)param_1;
              }
              *pcVar6 = *pcVar6 + -0x20;
            }
          }
        }
        goto LAB_141346725;
      }
      if (param_7 == '\0') {
        uVar5 = 4;
        pcVar6 = "baby";
        param_2 = param_1;
      }
      else {
        uVar5 = 6;
        pcVar6 = "babies";
        param_2 = param_1;
      }
    }
    else {
      if ((param_4 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8)) {
        if (-1 < param_4) goto LAB_14134667e;
      }
      else {
        if (((-1 < param_6) &&
            (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), lVar2 = *(longlong *)(lVar9 + 0x178)
            , uVar7 < (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar2 >> 3))) &&
           (*(longlong *)(*(longlong *)(lVar2 + uVar7 * 8) + 0xd0) != 0)) {
          FUN_140146540(0x14250eec8,param_1,param_4,param_6,(param_7 != '\0') + '\x06',param_8);
          *param_5 = 1;
          goto LAB_141346754;
        }
LAB_14134667e:
        if ((uVar8 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) &&
           (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), *(longlong *)(lVar9 + 0x90) != 0)) {
          if (param_4 < 0) goto LAB_141346725;
          goto LAB_1413466a8;
        }
      }
      if (param_7 == '\0') {
        uVar5 = 4;
        pcVar6 = "baby";
        param_2 = param_1;
      }
      else {
        uVar5 = 6;
        pcVar6 = "babies";
        param_2 = param_1;
      }
    }
    goto LAB_14134674f;
  case 0x69:
    FUN_140070f00(param_1,"drunk",5);
    break;
  case 0x6a:
    FUN_140070f00(param_1,"monster slayer",0xe);
    break;
  case 0x6b:
    FUN_140070f00(param_1,"scout",5);
    break;
  case 0x6c:
    FUN_140070f00(param_1,"beast hunter",0xc);
    break;
  case 0x6d:
    FUN_140070f00(param_1,"snatcher",8);
    break;
  case 0x6e:
    pcVar6 = "mercenary";
    if (param_7 == '\0') {
      pcVar6 = "mercenaries";
    }
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      uVar5 = 0xb;
    }
LAB_14134674f:
    FUN_140070f00(param_2,pcVar6,uVar5);
LAB_141346754:
    bVar3 = false;
    break;
  case 0x6f:
    FUN_140070f00(param_1,"gelder",6);
    break;
  case 0x70:
    FUN_140070f00(param_1,"performer",9);
    break;
  case 0x71:
    FUN_140070f00(param_1,"poet",4);
    break;
  case 0x72:
    FUN_140070f00(param_1,"bard",4);
    break;
  case 0x73:
    FUN_140070f00(param_1,"dancer",6);
    break;
  case 0x74:
    FUN_140070f00(param_1,"sage",4);
    break;
  case 0x75:
    FUN_140070f00(param_1,"scholar",7);
    break;
  case 0x76:
    FUN_140070f00(param_1,"philosopher",0xb);
    break;
  case 0x77:
    FUN_140070f00(param_1,"mathematician",0xd);
    break;
  case 0x78:
    FUN_140070f00(param_1,"historian",9);
    break;
  case 0x79:
    FUN_140070f00(param_1,"astronomer",10);
    break;
  case 0x7a:
    FUN_140070f00(param_1,"naturalist",10);
    break;
  case 0x7b:
    FUN_140070f00(param_1,"chemist",7);
    break;
  case 0x7c:
    FUN_140070f00(param_1,"geographer",10);
    break;
  case 0x7d:
    FUN_140070f00(param_1,"scribe",6);
    break;
  case 0x7e:
    FUN_140070f00(param_1,"papermaker",10);
    break;
  case 0x7f:
    FUN_140070f00(param_1,"bookbinder",10);
    break;
  case 0x80:
    FUN_140070f00(param_1,"tavern keeper",0xd);
    break;
  case 0x81:
    FUN_140070f00(param_1,"criminal",8);
    break;
  case 0x82:
    FUN_140070f00(param_1,"peddler",7);
    break;
  case 0x83:
    FUN_140070f00(param_1,"prophet",7);
    break;
  case 0x84:
    FUN_140070f00(param_1,"pilgrim",7);
    break;
  case 0x85:
    FUN_140070f00(param_1,"monk",4);
    break;
  case 0x86:
    FUN_140070f00(param_1,"messenger",9);
  }
override_jmp_1413455f3_case_102:
  if ((param_7 != '\0') && (bVar3)) {
    FUN_140071040(param_1,"s",1);
  }
  if (param_8 != '\0') {
    FUN_1405468a0(param_1);
  }
  return;
}


/* reference PE:6aea05a1:02734000; base-profession; RVA 0x13469d0..0x1346d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_base_profession
               (undefined8 *param_1,undefined2 param_2,short param_3,undefined2 param_4,char param_5
               ,char param_6,short param_7)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [32];
  char *pcStack_d8;
  undefined2 uStack_d0;
  char cStack_c8;
  char cStack_c0;
  char acStack_b8 [8];
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_f8;
  param_1[2] = 0;
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar4 = 0;
  if (param_7 == -2) {
    if (_DAT_1418be238 == 1) {
      if ((_DAT_142407550 - _DAT_142407548 >> 3 == 0) || (_DAT_142407590 == 0)) {
LAB_141346a67:
        param_7 = -1;
      }
      else {
        param_7 = *(short *)(_DAT_142407590 + 0xa4);
      }
    }
    else {
      param_7 = _DAT_1423b5afc;
      if (_DAT_1418be238 != 0) goto LAB_141346a67;
    }
  }
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0xf;
  pppuStack_b0 = (undefined8 ****)0x0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0xf;
  pppuStack_90 = (undefined8 ****)0x0;
  acStack_b8[0] = '\0';
  cStack_c0 = param_6;
  cStack_c8 = param_5;
  pcStack_d8 = acStack_b8;
  uStack_d0 = param_4;
  arrival_profession_words(&pppuStack_b0,&pppuStack_90,param_2,param_3);
  uVar6 = uStack_98;
  pppuVar2 = pppuStack_b0;
  if (param_5 != '\0') {
    ppppuVar5 = &pppuStack_b0;
    if (0xf < uStack_98) {
      ppppuVar5 = (undefined8 ****)pppuStack_b0;
    }
    if ((lStack_a0 == 1) && (iVar3 = arrival_supplier_0x1554864(ppppuVar5,"s"), iVar3 == 0)) {
      uVar8 = 1;
      ppppuVar5 = &pppuStack_b0;
      if (0xf < uVar6) {
        ppppuVar5 = (undefined8 ****)pppuVar2;
      }
      lStack_a0 = 0;
      *(undefined1 *)ppppuVar5 = 0;
      goto LAB_141346b24;
    }
  }
  uVar8 = 0;
LAB_141346b24:
  if (lStack_80 != 0) {
    ppppuVar5 = &pppuStack_90;
    if (0xf < uStack_78) {
      ppppuVar5 = (undefined8 ****)pppuStack_90;
    }
    FUN_140071040(param_1,ppppuVar5);
    FUN_1400bb1b0(param_1,0x20);
  }
  if ((param_3 != param_7) && (acStack_b8[0] == '\0')) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0xf;
    pppuStack_70 = (undefined8 ****)0x0;
    arrival_caste_words(param_3,&pppuStack_70,uVar8,param_4);
    if (param_6 != '\0') {
      FUN_1405468a0(&pppuStack_70);
    }
    ppppuVar5 = &pppuStack_70;
    if (0xf < uStack_58) {
      ppppuVar5 = (undefined8 ****)pppuStack_70;
    }
    FUN_140071040(param_1,ppppuVar5,uStack_60);
    if (lStack_a0 != 0) {
      FUN_1400bb1b0(param_1,0x20);
    }
    if (0xf < uStack_58) {
      uVar6 = uStack_58 + 1;
      ppppuVar5 = (undefined8 ****)pppuStack_70;
      if (0xfff < uVar6) {
        uVar6 = uStack_58 + 0x28;
        ppppuVar5 = (undefined8 ****)pppuStack_70[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_70 + (-8 - (longlong)ppppuVar5))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      arrival_supplier_0x15530d0(ppppuVar5,uVar6);
    }
  }
  if (lStack_a0 != 0) {
    ppppuVar5 = &pppuStack_b0;
    if (0xf < uStack_98) {
      ppppuVar5 = (undefined8 ****)pppuStack_b0;
    }
    FUN_140071040(param_1,ppppuVar5);
  }
  if ((param_3 == param_7) && (lStack_a0 == 0)) {
    pcVar7 = "Peasant";
    if (param_6 == '\0') {
      pcVar7 = "peasant";
    }
    FUN_140071040(param_1,pcVar7,7);
    if (param_5 != '\0') {
      FUN_140071040(param_1,"s",1);
    }
  }
  if (0xf < uStack_78) {
    uVar6 = uStack_78 + 1;
    ppppuVar5 = (undefined8 ****)pppuStack_90;
    if (0xfff < uVar6) {
      uVar6 = uStack_78 + 0x28;
      ppppuVar5 = (undefined8 ****)pppuStack_90[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_90 + (-8 - (longlong)ppppuVar5))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    arrival_supplier_0x15530d0(ppppuVar5,uVar6);
  }
  lStack_80 = 0;
  uStack_78 = 0xf;
  pppuStack_90 = (undefined8 ***)((ulonglong)pppuStack_90 & 0xffffffffffffff00);
  if (0xf < uStack_98) {
    uVar6 = uStack_98 + 1;
    ppppuVar5 = (undefined8 ****)pppuStack_b0;
    if (0xfff < uVar6) {
      uVar6 = uStack_98 + 0x28;
      ppppuVar5 = (undefined8 ****)pppuStack_b0[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)pppuStack_b0 + (-8 - (longlong)ppppuVar5)))
      {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    arrival_supplier_0x15530d0(ppppuVar5,uVar6);
  }
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_f8);
  return;
}


/* reference PE:6aea05a1:02734000; creature-role; RVA 0x1348290..0x1348b6e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_creature_role(longlong param_1,char *param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  longlong lVar21;
  short sVar22;
  undefined1 auStack_b8 [32];
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined2 uStack_88;
  char cStack_78;
  char cStack_77;
  short sStack_76;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(param_1 + 0xd80);
  cStack_77 = param_3;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
    if (_DAT_1418be234 - 4U < 2) {
      pcVar13 = (char *)(param_1 + 8);
      goto LAB_141348b2c;
    }
    sVar22 = *(short *)(param_1 + 0xa0);
    sStack_76 = sVar22;
    lVar8 = FUN_140b6ad70(0x14251c138);
    if (lVar8 == 0) {
      lVar9 = 0;
LAB_14134842a:
      uStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0xf;
      pppuStack_60 = (undefined8 ****)0x0;
      if ((*(longlong *)(param_1 + 0xd80) == 0) && (*(char *)(param_1 + 0x838) == '\0')) {
        uStack_88 = 0xfffe;
      }
      else {
        uStack_88 = 0xffff;
      }
      uStack_90 = 1;
      puStack_98 = (undefined8 *)((ulonglong)puStack_98 & 0xffffffffffffff00);
      cVar4 = arrival_base_profession
                        (&pppuStack_60,sVar22,*(undefined2 *)(param_1 + 0xa4),
                         *(undefined2 *)(param_1 + 300));
      if ((lVar9 == 0) || (*(short *)(lVar9 + 0xac) == -1)) {
        lVar9 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if (lVar9 != 0) {
          puStack_98 = &uStack_70;
          lVar9 = arrival_selected_office(lVar9,0xffffffff,&cStack_78,&uStack_68);
          if ((lVar9 != 0) && (lVar8 != 0)) {
            cVar4 = *(char *)(lVar8 + 6);
            if (cStack_78 == '\0') {
              if (cVar4 == '\0') {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
                if (*(longlong *)(lVar9 + 0xe8) != 0) {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0xd8);
                }
              }
              else if (cVar4 == '\x01') {
                if (*(longlong *)(lVar9 + 0x128) == 0) {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
                }
                else {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0x118);
                }
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
              }
            }
            else if (cVar4 == '\0') {
              if (*(longlong *)(lVar9 + 0x1a8) == 0) {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x198);
              }
            }
            else if (cVar4 == '\x01') {
              if (*(longlong *)(lVar9 + 0x1e8) == 0) {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x1d8);
              }
            }
            else {
              ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
            }
            if (&pppuStack_60 != ppppuVar10) {
              ppppuVar12 = ppppuVar10 + 2;
              if ((undefined8 ***)0xf < ppppuVar10[3]) {
                ppppuVar10 = (undefined8 ****)*ppppuVar10;
              }
              FUN_140070f00(&pppuStack_60,ppppuVar10,*ppppuVar12);
            }
            if (0 < *(short *)(lVar9 + 0x2c8)) {
              arrival_position_territory(uStack_68,uStack_70,&pppuStack_60);
            }
            cVar4 = '\0';
          }
        }
        lVar8 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if ((lVar8 != 0) &&
           (sVar7 = FUN_140baf080(lVar8,4,0xffffffff), uVar16 = uStack_48, 0 < sVar7)) {
          if (((ushort)(sVar22 - 0x67U) < 2) && (lStack_50 != 0)) {
            FUN_140071040(&pppuStack_60," Slave",6);
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          else if (uStack_48 < 5) {
            if (0x7fffffffffffffff - (uStack_48 >> 1) < uStack_48) {
              uVar17 = 0x7fffffffffffffff;
            }
            else {
              uVar14 = uStack_48 + (uStack_48 >> 1);
              uVar17 = 0xf;
              if (0xf < uVar14) {
                uVar17 = uVar14;
              }
            }
            ppppuVar10 = (undefined8 ****)FUN_140071e00(uVar17 + 1);
            lStack_50 = 5;
            *(undefined4 *)ppppuVar10 = 0x76616c53;
            *(undefined1 *)((longlong)ppppuVar10 + 4) = 0x65;
            *(undefined1 *)((longlong)ppppuVar10 + 5) = 0;
            sVar22 = sStack_76;
            uStack_48 = uVar17;
            if (0xf < uVar16) {
              uVar14 = uVar16 + 1;
              ppppuVar12 = (undefined8 ****)pppuStack_60;
              if (0xfff < uVar14) {
                uVar14 = uVar16 + 0x28;
                ppppuVar12 = (undefined8 ****)pppuStack_60[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar12)))
                goto LAB_141348887;
              }
              arrival_supplier_0x15530d0(ppppuVar12,uVar14);
              sVar22 = sStack_76;
            }
          }
          else {
            ppppuVar10 = &pppuStack_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)pppuStack_60;
            }
            lStack_50 = 5;
            arrival_supplier_0x155486a(ppppuVar10,"Slave",5);
            *(undefined1 *)((longlong)ppppuVar10 + 5) = 0;
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          pppuStack_60 = ppppuVar10;
          cVar4 = '\0';
        }
        lVar8 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if (((lVar8 != 0) && (sVar7 = FUN_140baf080(lVar8,6,0xffffffff), 0 < sVar7)) ||
           ((lVar8 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274),
            lVar8 != 0 && (sVar7 = FUN_140bb0a50(lVar8,7,0xffffffff), 0 < sVar7)))) {
          uVar16 = uStack_48;
          if (((ushort)(sVar22 - 0x67U) < 2) && (lStack_50 != 0)) {
            FUN_140071040(&pppuStack_60," Prisoner",9);
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          else if (uStack_48 < 8) {
            uVar14 = 0x7fffffffffffffff;
            if (uStack_48 <= 0x7fffffffffffffff - (uStack_48 >> 1)) {
              uVar17 = (uStack_48 >> 1) + uStack_48;
              uVar14 = 0xf;
              if (0xf < uVar17) {
                uVar14 = uVar17;
              }
            }
            ppppuVar10 = (undefined8 ****)FUN_140071e00(uVar14 + 1);
            lStack_50 = 8;
            *ppppuVar10 = (undefined8 ***)0x72656e6f73697250;
            *(undefined1 *)(ppppuVar10 + 1) = 0;
            uStack_48 = uVar14;
            if (0xf < uVar16) {
              uVar14 = uVar16 + 1;
              ppppuVar12 = (undefined8 ****)pppuStack_60;
              if (0xfff < uVar14) {
                uVar14 = uVar16 + 0x28;
                ppppuVar12 = (undefined8 ****)pppuStack_60[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar12))) {
LAB_141348887:
                  _invalid_parameter_noinfo_noreturn();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              arrival_supplier_0x15530d0(ppppuVar12,uVar14);
            }
          }
          else {
            ppppuVar10 = &pppuStack_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)pppuStack_60;
            }
            lStack_50 = 8;
            *ppppuVar10 = (undefined8 ***)0x72656e6f73697250;
            *(undefined1 *)(ppppuVar10 + 1) = 0;
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          pppuStack_60 = ppppuVar10;
          cVar4 = '\0';
        }
      }
      if ((*(longlong *)(param_1 + 0x90) != 0) && (cStack_77 != '\0')) {
        ppppuVar10 = (undefined8 ****)(param_1 + 0x80);
        if (&pppuStack_60 != ppppuVar10) {
          if (0xf < *(ulonglong *)(param_1 + 0x98)) {
            ppppuVar10 = (undefined8 ****)*ppppuVar10;
          }
          FUN_140070f00(&pppuStack_60,ppppuVar10,*(undefined8 *)(param_1 + 0x90));
        }
        cVar4 = '\0';
      }
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      pcVar13 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pcVar13 = *(char **)param_2;
      }
      *pcVar13 = '\0';
      cVar5 = FUN_14138ee10(*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300));
      if (((cVar5 == '\0') || (*(int *)(param_1 + 0x3bc) != -1)) ||
         ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0)) {
        if ((*(uint *)(param_1 + 0x11c) & 0x1000) != 0) {
          cVar5 = '\t';
          pcVar13 = "Agitated ";
          goto LAB_1413489a5;
        }
      }
      else {
        if ((((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0) ||
            (*(int *)(param_1 + 0x140) == -1)) ||
           ((lVar8 = FUN_1400bb6d0(*(int *)(param_1 + 0x140),&DAT_1423f3c78), lVar8 == 0 ||
            ((*(int *)(*(longlong *)(lVar8 + 8) + 0x3a8) < 8 ||
             ((*(byte *)(*(longlong *)(*(longlong *)(lVar8 + 8) + 0x3a0) + 7) & 0x10) == 0)))))) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        cVar5 = cVar6 + '\x06';
        pcVar13 = "Fierce ";
        if (cVar6 == '\0') {
          pcVar13 = "Stray ";
        }
LAB_1413489a5:
        FUN_140071040(param_2,pcVar13,cVar5);
      }
      if ((*(uint *)(param_1 + 0x118) & 0x1000) == 0) {
LAB_1413489fd:
        if (*(char *)(param_1 + 0x838) != '\0') {
LAB_141348a06:
          if ((*(longlong *)(param_1 + 0x850) == 0) && (*(longlong *)(param_1 + 0x890) != 0)) {
            plVar15 = (longlong *)(param_1 + 0x880);
            if (0xf < *(ulonglong *)(param_1 + 0x898)) {
              plVar15 = (longlong *)*plVar15;
            }
            FUN_140071040(param_2,plVar15,*(undefined8 *)(param_1 + 0x890));
            FUN_140071040(param_2," ",1);
          }
        }
        ppppuVar10 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar10 = (undefined8 ****)pppuStack_60;
        }
        FUN_140071040(param_2,ppppuVar10,lStack_50);
        if ((*(char *)(param_1 + 0x838) != '\0') && (*(longlong *)(param_1 + 0x850) != 0)) {
          if (*(longlong *)(param_2 + 0x10) != 0) {
            FUN_140071040(param_2," ",1);
          }
          plVar15 = (longlong *)(param_1 + 0x840);
          if (0xf < *(ulonglong *)(param_1 + 0x858)) {
            plVar15 = (longlong *)*plVar15;
          }
          FUN_140071040(param_2,plVar15,*(undefined8 *)(param_1 + 0x850));
        }
        if (*(longlong *)(param_1 + 0xd80) != 0) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            uVar19 = 6;
            pcVar13 = "Corpse";
          }
          else {
            uVar19 = 7;
            pcVar13 = " Corpse";
          }
          FUN_140071040(param_2,pcVar13,uVar19);
        }
      }
      else {
        if (*(char *)(param_1 + 0x838) != '\0') goto LAB_141348a06;
        if ((cVar4 == '\0') || (*(longlong *)(param_2 + 0x10) != 0)) {
          FUN_140071040(param_2,"Ghostly ",8);
          goto LAB_1413489fd;
        }
        FUN_140070f00(param_2,"Ghost",5);
      }
      if (0xf < uStack_48) {
        uVar16 = uStack_48 + 1;
        ppppuVar10 = (undefined8 ****)pppuStack_60;
        if (0xfff < uVar16) {
          uVar16 = uStack_48 + 0x28;
          ppppuVar10 = (undefined8 ****)pppuStack_60[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar10))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        arrival_supplier_0x15530d0(ppppuVar10,uVar16);
      }
      goto LAB_141348b47;
    }
    if (*(longlong *)(lVar8 + 0x130) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + 0x58);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else if (*(int *)(lVar9 + 0x30) == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_140073ba0(0x14250a168);
      }
    }
    if (lVar9 == 0) goto LAB_14134842a;
    iVar1 = *(int *)(lVar9 + 0x88);
    if (iVar1 == -1) {
LAB_141348411:
      sVar7 = *(short *)(lVar9 + 0xac);
      if (sVar7 != -1) {
        sVar22 = sVar7;
        sStack_76 = sVar7;
      }
      goto LAB_14134842a;
    }
    lVar21 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
    if (lVar21 != 0) {
      iVar18 = 0;
      iVar20 = (int)lVar21 + -1;
      if (-1 < iVar20) {
        do {
          iVar11 = iVar20 + iVar18 >> 1;
          lVar21 = *(longlong *)(_DAT_14251c198 + (longlong)iVar11 * 8);
          if (*(int *)(lVar21 + 0xe0) == iVar1) goto LAB_1413483ce;
          iVar3 = iVar11 + -1;
          if (*(int *)(lVar21 + 0xe0) < iVar1) {
            iVar18 = iVar11 + 1;
            iVar3 = iVar20;
          }
          iVar20 = iVar3;
        } while (iVar18 <= iVar20);
      }
    }
    lVar21 = 0;
LAB_1413483ce:
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0xd0) < 1)) goto LAB_141348411;
    if ((**(byte **)(lVar21 + 200) & 4) == 0) {
      if ((**(byte **)(lVar21 + 200) & 8) == 0) goto LAB_141348411;
      uVar19 = 5;
      pcVar13 = "force";
    }
    else {
      uVar19 = 5;
      pcVar13 = "deity";
    }
  }
  else {
    pcVar13 = (char *)(lVar8 + 0x20);
LAB_141348b2c:
    if (param_2 == pcVar13) goto LAB_141348b47;
    uVar19 = *(undefined8 *)(pcVar13 + 0x10);
    if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
      pcVar13 = *(char **)pcVar13;
    }
  }
  FUN_140070f00(param_2,pcVar13,uVar19);
LAB_141348b47:
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_b8);
  return;
}


/* reference PE:6aea05a1:02734000; visitor-identity; RVA 0x1349540..0x1349ba8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_visitor_identity(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined1 auStack_c8 [32];
  char acStack_a8 [4];
  uint uStack_a4;
  longlong lStack_a0;
  int aiStack_98 [2];
  char cStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_c8;
  acStack_a8[0] = param_3;
  if (_DAT_1418be234 - 4U < 2) {
    lVar7 = *(longlong *)(param_1 + 0xd80);
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) {
      puVar12 = (undefined8 *)(param_1 + 8);
    }
    else {
      puVar12 = (undefined8 *)(lVar7 + 0x20);
    }
    if (param_2 != puVar12) {
      puVar1 = puVar12 + 2;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      FUN_140070f00(param_2,puVar12,*puVar1);
    }
    goto LAB_141349b81;
  }
  lVar7 = param_1 + 8;
  lStack_a0 = lVar7;
  lVar6 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
  puVar14 = (undefined4 *)0x0;
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x130) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x58);
      if (lVar6 == 0) {
        puVar14 = (undefined4 *)0x0;
      }
      else if (*(int *)(lVar6 + 0x30) == -1) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14 = (undefined4 *)FUN_140073ba0(0x14250a168);
      }
    }
    if (puVar14 != (undefined4 *)0x0) {
      lVar7 = arrival_selected_name(puVar14);
      lStack_a0 = lVar7;
    }
  }
  param_2[2] = 0;
  puVar12 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar12 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar12 = 0;
  if (*(char *)(lVar7 + 0x72) != '\0') {
    if (_DAT_1418be234 == 1) {
      if ((_DAT_142407550 - _DAT_142407548 >> 3 != 0) && (_DAT_142407590 != 0)) {
        uStack_a4 = uStack_a4 & 0xffffff00;
        lVar6 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(_DAT_142407590 + 0xc30),
                              _DAT_142407590 + 0x1274);
        if (lVar6 != 0) {
          if ((((*(int *)(param_1 + 0xc30) == -1) ||
               (lVar8 = *(longlong *)(lVar6 + 0x130), lVar8 == 0)) ||
              (*(longlong *)(lVar8 + 0x60) == 0)) ||
             (lVar8 = FUN_1400bb3f0(*(int *)(param_1 + 0xc30),*(undefined8 *)(lVar8 + 0x60)),
             lVar8 == 0)) {
LAB_141349707:
            cVar13 = (char)uStack_a4;
LAB_14134970b:
            if (((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar6 + 0x130) != 0)) &&
               (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x60), lVar6 != 0)) {
              FUN_1400bc210(aiStack_98,lVar6 + 0x48);
              lStack_a0._0_4_ = -1;
              lStack_a0 = 0xffffffff;
              iVar5 = (int)lStack_a0;
              if (cStack_90 != '\0') {
                iVar5 = aiStack_98[0];
              }
              if (iVar5 != -1) goto LAB_141349751;
            }
            if (cVar13 == '\0') goto LAB_141349782;
          }
          else {
            if ((*(byte *)(lVar8 + 4) & 1) == 0) {
              if (puVar14 == (undefined4 *)0x0) goto LAB_141349707;
              FUN_1400bc210(aiStack_98,lVar8 + 8,*puVar14);
              lStack_a0._0_4_ = -1;
              lStack_a0 = 0xffffffff;
              iVar5 = (int)lStack_a0;
              if (cStack_90 != '\0') {
                iVar5 = aiStack_98[0];
              }
              cVar13 = (char)uStack_a4;
              if (iVar5 != -1) {
                cVar13 = '\x01';
              }
              goto LAB_14134970b;
            }
LAB_141349751:
            lVar7 = param_1 + 8;
          }
          arrival_language_name(lVar7,param_2);
          FUN_140071040(param_2,", ",2);
        }
      }
    }
    else {
      bVar4 = false;
      if ((((_DAT_1418be238 == 0) && (puVar14 != (undefined4 *)0x0)) &&
          (*(longlong *)(_DAT_1423bc668 + 0x1358) != 0)) &&
         ((lVar7 = FUN_1400bb3f0(*(undefined4 *)(param_1 + 0xc30)), lVar7 != 0 &&
          ((*(byte *)(lVar7 + 4) & 8) != 0)))) {
        bVar4 = true;
        FUN_140071040(param_2,"\"",1);
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0xf;
      pppuStack_68 = (undefined8 ****)0x0;
      arrival_language_name(lStack_a0,&pppuStack_68);
      ppppuVar9 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar9 = (undefined8 ****)pppuStack_68;
      }
      FUN_140071040(param_2,ppppuVar9,uStack_58);
      if (bVar4) {
        FUN_140071040(param_2,"\"",1);
      }
      FUN_140071040(param_2,", ",2);
      FUN_140070e80(&pppuStack_68);
    }
  }
LAB_141349782:
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  pppuStack_88 = (undefined8 ****)0x0;
  arrival_creature_role(param_1,&pppuStack_88,1);
  ppppuVar9 = &pppuStack_88;
  if (0xf < uStack_70) {
    ppppuVar9 = (undefined8 ****)pppuStack_88;
  }
  FUN_140071040(param_2,ppppuVar9,uStack_78);
  if (((acStack_a8[0] != '\0') && (sVar2 = *(short *)(param_1 + 0xa4), -1 < sVar2)) &&
     ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
    lVar7 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar2 * 8);
    if ((*(int *)(lVar7 + 0x1b0) < 9) || ((*(byte *)(*(longlong *)(lVar7 + 0x1a8) + 8) & 4) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(char *)(param_1 + 0x12e) == '\0') {
        FUN_14139e410(param_1);
        FUN_140071040(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
        FUN_1400bb1b0(param_2,0xc);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
      }
      if (*(char *)(param_1 + 0x12e) == '\x01') {
        FUN_14139e410(param_1);
        FUN_140071040(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
        FUN_1400bb1b0(param_2,0xb);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0) goto LAB_141349b09;
  FUN_140071040(param_2," (",2);
  acStack_a8[1] = 0;
  if (7 < *(uint *)(param_1 + 0x138)) {
override_jmp_1413499fc_case_0:
    pcVar10 = "Semi-Wild";
    goto LAB_141349ae8;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x138)) {
  case 0:
    goto override_jmp_1413499fc_case_0;
  case 1:
    lVar7 = 7;
    pcVar10 = "Trained";
    break;
  case 2:
    pcVar10 = "-Trained-";
    goto LAB_141349ae8;
  case 3:
    pcVar10 = "+Trained+";
    goto LAB_141349ae8;
  case 4:
    pcVar10 = "*Trained*";
LAB_141349ae8:
    lVar7 = 9;
    break;
  case 5:
    acStack_a8[0] = -0x10;
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (acStack_a8[lVar6] != '\0');
    FUN_140071040(param_2,acStack_a8);
    FUN_140071040(param_2,"Trained",7);
    lVar6 = -1;
    do {
      lVar7 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = lVar7;
    } while (acStack_a8[lVar8] != '\0');
    pcVar10 = acStack_a8;
    break;
  case 6:
    acStack_a8[0] = '\x0f';
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (acStack_a8[lVar6] != '\0');
    FUN_140071040(param_2,acStack_a8);
    FUN_140071040(param_2,"Trained",7);
    lVar6 = -1;
    do {
      lVar7 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = lVar7;
    } while (acStack_a8[lVar8] != '\0');
    pcVar10 = acStack_a8;
    break;
  case 7:
    lVar7 = 4;
    pcVar10 = "Tame";
  }
  FUN_140071040(param_2,pcVar10,lVar7);
  FUN_140071040(param_2,")",1);
LAB_141349b09:
  if (0xf < uStack_70) {
    uVar11 = uStack_70 + 1;
    ppppuVar9 = (undefined8 ****)pppuStack_88;
    if (0xfff < uVar11) {
      uVar11 = uStack_70 + 0x28;
      ppppuVar9 = (undefined8 ****)pppuStack_88[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar9))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    arrival_supplier_0x15530d0(ppppuVar9,uVar11);
  }
LAB_141349b81:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_c8);
  return;
}


/* reference PE:6aea05a1:02734000; header-role-status; RVA 0x1349190..0x134951c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_header_role_status(longlong param_1,undefined8 *param_2,char param_3)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  char acStack_38 [8];
  undefined8 ***pppuStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  if (_DAT_1418be234 - 4U < 2) goto LAB_1413494fe;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0xf;
  pppuStack_30 = (undefined8 ****)0x0;
  arrival_creature_role(param_1,&pppuStack_30,1);
  ppppuVar6 = &pppuStack_30;
  if (0xf < uStack_18) {
    ppppuVar6 = (undefined8 ****)pppuStack_30;
  }
  FUN_140071040(param_2,ppppuVar6,uStack_20);
  if (((param_3 != '\0') && (sVar1 = *(short *)(param_1 + 0xa4), -1 < sVar1)) &&
     ((ulonglong)(longlong)sVar1 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
    lVar10 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar1 * 8);
    if ((*(int *)(lVar10 + 0x1b0) < 9) || ((*(byte *)(*(longlong *)(lVar10 + 0x1a8) + 8) & 4) == 0))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(char *)(param_1 + 0x12e) == '\0') {
        FUN_14139e410(param_1);
        FUN_140071040(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
        FUN_1400bb1b0(param_2,0xc);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
      }
      if (*(char *)(param_1 + 0x12e) == '\x01') {
        FUN_14139e410(param_1);
        FUN_140071040(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
        FUN_1400bb1b0(param_2,0xb);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb1b0(param_2,0x78);
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0) goto LAB_1413494be;
  FUN_140071040(param_2," (",2);
  acStack_38[1] = 0;
  if (7 < *(uint *)(param_1 + 0x138)) {
override_jmp_14134938d_case_0:
    pcVar7 = "Semi-Wild";
    goto LAB_14134949a;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x138)) {
  case 0:
    goto override_jmp_14134938d_case_0;
  case 1:
    lVar10 = 7;
    pcVar7 = "Trained";
    break;
  case 2:
    pcVar7 = "-Trained-";
    goto LAB_14134949a;
  case 3:
    pcVar7 = "+Trained+";
    goto LAB_14134949a;
  case 4:
    pcVar7 = "*Trained*";
LAB_14134949a:
    lVar10 = 9;
    break;
  case 5:
    acStack_38[0] = -0x10;
    lVar10 = -1;
    do {
      lVar9 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (acStack_38[lVar9] != '\0');
    FUN_140071040(param_2,acStack_38);
    FUN_140071040(param_2,"Trained",7);
    lVar9 = -1;
    do {
      lVar10 = lVar9 + 1;
      lVar4 = lVar9 + 1;
      lVar9 = lVar10;
    } while (acStack_38[lVar4] != '\0');
    pcVar7 = acStack_38;
    break;
  case 6:
    acStack_38[0] = '\x0f';
    lVar10 = -1;
    do {
      lVar9 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (acStack_38[lVar9] != '\0');
    FUN_140071040(param_2,acStack_38);
    FUN_140071040(param_2,"Trained",7);
    lVar9 = -1;
    do {
      lVar10 = lVar9 + 1;
      lVar4 = lVar9 + 1;
      lVar9 = lVar10;
    } while (acStack_38[lVar4] != '\0');
    pcVar7 = acStack_38;
    break;
  case 7:
    lVar10 = 4;
    pcVar7 = "Tame";
  }
  FUN_140071040(param_2,pcVar7,lVar10);
  FUN_140071040(param_2,")",1);
LAB_1413494be:
  if (0xf < uStack_18) {
    uVar8 = uStack_18 + 1;
    ppppuVar6 = (undefined8 ****)pppuStack_30;
    if (0xfff < uVar8) {
      uVar8 = uStack_18 + 0x28;
      ppppuVar6 = (undefined8 ****)pppuStack_30[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_30 + (-8 - (longlong)ppppuVar6))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    arrival_supplier_0x15530d0(ppppuVar6,uVar8);
  }
LAB_1413494fe:
  FUN_1415530b0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* reference PE:6aea05a1:02734000; caste-words; RVA 0xabd670..0xabd833 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_caste_words(short param_1,undefined8 *param_2,char param_3,short param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  param_2[2] = 0;
  uVar5 = (ulonglong)param_1;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  if (param_4 == -1) {
    if (param_3 == '\0') goto LAB_140abd7be;
  }
  else {
    if (param_3 == '\0') {
      if (((-1 < param_1) && (uVar5 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
         (-1 < param_4)) {
        lVar2 = *(longlong *)(_DAT_14250eee8 + uVar5 * 8);
        lVar3 = *(longlong *)(lVar2 + 0x178);
        if ((ulonglong)(longlong)param_4 < (ulonglong)(*(longlong *)(lVar2 + 0x180) - lVar3 >> 3)) {
          lVar2 = *(longlong *)(lVar3 + (longlong)param_4 * 8);
          puVar4 = (undefined8 *)(lVar2 + 0x20);
          if (param_2 != puVar4) {
            if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
              puVar4 = (undefined8 *)*puVar4;
            }
            FUN_140070f00(param_2,puVar4,*(undefined8 *)(lVar2 + 0x30));
          }
          if (param_2[2] != 0) {
            return;
          }
        }
      }
LAB_140abd7be:
      if (param_1 < 0) {
        return;
      }
      if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar5) {
        return;
      }
      puVar4 = (undefined8 *)(*(longlong *)(_DAT_14250eee8 + uVar5 * 8) + 0x20);
      goto LAB_140abd7de;
    }
    if (((-1 < param_1) && (uVar5 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
       (-1 < param_4)) {
      lVar2 = *(longlong *)(_DAT_14250eee8 + uVar5 * 8);
      lVar3 = *(longlong *)(lVar2 + 0x178);
      if ((ulonglong)(longlong)param_4 < (ulonglong)(*(longlong *)(lVar2 + 0x180) - lVar3 >> 3)) {
        lVar2 = *(longlong *)(lVar3 + (longlong)param_4 * 8);
        puVar4 = (undefined8 *)(lVar2 + 0x40);
        if (param_2 != puVar4) {
          if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
            puVar4 = (undefined8 *)*puVar4;
          }
          FUN_140070f00(param_2,puVar4,*(undefined8 *)(lVar2 + 0x50));
        }
        if (param_2[2] != 0) {
          return;
        }
      }
    }
  }
  if (param_1 < 0) {
    return;
  }
  if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar5) {
    return;
  }
  puVar4 = (undefined8 *)(*(longlong *)(_DAT_14250eee8 + uVar5 * 8) + 0x40);
LAB_140abd7de:
  if (param_2 != puVar4) {
    puVar1 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_140070f00(param_2,puVar4,*puVar1);
  }
  return;
}


/* reference PE:6aea05a1:02734000; raw-profession-available; RVA 0x310cf0..0x310db3 */

ulonglong arrival_raw_profession_available
                    (longlong param_1,short param_2,short param_3,ushort param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined7 uVar3;
  ulonglong uVar4;
  
  if (-1 < param_2) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar4 = (ulonglong)param_2;
    in_RAX = *(longlong *)(param_1 + 0x28) - lVar1 >> 3;
    if ((uVar4 < in_RAX) && (in_RAX = 0, param_4 < 0x87)) {
      if (-1 < param_3) {
        lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
        if ((ulonglong)(longlong)param_3 <
            (ulonglong)(*(longlong *)(lVar2 + 0x180) - *(longlong *)(lVar2 + 0x178) >> 3)) {
          lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x178) + (longlong)param_3 * 8);
          uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
          if (*(longlong *)(lVar1 + 0x1830 + (longlong)(short)param_4 * 0x20) != 0) {
            return CONCAT71(uVar3,1);
          }
          return CONCAT71(uVar3,*(longlong *)(lVar2 + 0x230 + (longlong)(short)param_4 * 0x20) != 0)
          ;
        }
      }
      lVar1 = *(longlong *)(lVar1 + uVar4 * 8);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                      *(longlong *)(lVar1 + 0x230 + (longlong)(short)param_4 * 0x20) != 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


/* reference PE:6aea05a1:02734000; raw-profession-selection; RVA 0x310dc0..0x310f34 */

undefined8
arrival_raw_profession_selection
          (longlong param_1,char *param_2,short param_3,short param_4,ushort param_5,char param_6,
          char param_7)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  
  if (((param_3 < 0) ||
      ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) <=
       (ulonglong)(longlong)param_3)) || (0x86 < param_5)) {
    return 0;
  }
  if (-1 < param_4) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
    if ((ulonglong)(longlong)param_4 <
        (ulonglong)(*(longlong *)(lVar2 + 0x180) - *(longlong *)(lVar2 + 0x178) >> 3)) {
      if (param_6 == '\0') {
        lVar5 = (longlong)(short)param_5 + 0xc1;
      }
      else {
        lVar5 = (longlong)(short)param_5 + 0x148;
      }
      pcVar6 = (char *)(lVar5 * 0x20 +
                       *(longlong *)(*(longlong *)(lVar2 + 0x178) + (longlong)param_4 * 8));
      if (param_2 != pcVar6) {
        pcVar1 = pcVar6 + 0x10;
        if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
          pcVar6 = *(char **)pcVar6;
        }
        FUN_140070f00(param_2,pcVar6,*(undefined8 *)pcVar1);
      }
      if (*(longlong *)(param_2 + 0x10) != 0) {
        if (param_7 != '\0') {
          uVar3 = *(ulonglong *)(param_2 + 0x18);
          pcVar6 = param_2;
          if (0xf < uVar3) {
            pcVar6 = *(char **)param_2;
          }
          if ('`' < *pcVar6) {
            pcVar6 = param_2;
            if (0xf < uVar3) {
              pcVar6 = *(char **)param_2;
            }
            if (*pcVar6 < '{') {
              if (0xf < uVar3) {
                param_2 = *(char **)param_2;
              }
              *param_2 = *param_2 + -0x20;
            }
          }
        }
        return 1;
      }
      uVar4 = arrival_raw_species_profession(param_1,param_2,param_3,param_5,param_6,param_7);
      return uVar4;
    }
  }
  uVar4 = arrival_raw_species_profession(param_1,param_2,param_3,param_5,param_6,param_7);
  return uVar4;
}


/* reference PE:6aea05a1:02734000; raw-species-profession; RVA 0x1bdb30..0x1bdbfc */

undefined8
arrival_raw_species_profession
          (longlong param_1,char *param_2,short param_3,ushort param_4,char param_5,char param_6)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 <
         (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) &&
       (param_4 < 0x87)) {
      if (param_5 == '\0') {
        lVar3 = (longlong)(short)param_4 + 0x11;
      }
      else {
        lVar3 = (longlong)(short)param_4 + 0x98;
      }
      pcVar4 = (char *)(lVar3 * 0x20 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8));
      if (param_2 != pcVar4) {
        pcVar1 = pcVar4 + 0x10;
        if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
          pcVar4 = *(char **)pcVar4;
        }
        FUN_140070f00(param_2,pcVar4,*(undefined8 *)pcVar1);
      }
      if (*(longlong *)(param_2 + 0x10) != 0) {
        if (param_6 != '\0') {
          uVar2 = *(ulonglong *)(param_2 + 0x18);
          pcVar4 = param_2;
          if (0xf < uVar2) {
            pcVar4 = *(char **)param_2;
          }
          if ('`' < *pcVar4) {
            pcVar4 = param_2;
            if (0xf < uVar2) {
              pcVar4 = *(char **)param_2;
            }
            if (*pcVar4 < '{') {
              if (0xf < uVar2) {
                param_2 = *(char **)param_2;
              }
              *param_2 = *param_2 + -0x20;
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


/* reference PE:6aea05a1:02734000; selected-office; RVA 0xc032e0..0xc0343f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong arrival_selected_office
                   (longlong param_1,ulonglong param_2,undefined1 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uStackX_8;
  undefined8 auStack_38 [2];
  
  lVar6 = arrival_office_precedence(param_1,param_2,param_4,param_5);
  plVar2 = *(longlong **)(param_1 + 0x120);
  for (plVar9 = *(longlong **)(param_1 + 0x118); plVar9 < plVar2; plVar9 = plVar9 + 1) {
    puVar3 = (undefined8 *)*plVar9;
    sVar5 = (**(code **)*puVar3)(puVar3);
    if (sVar5 == 2) {
      iVar1 = *(int *)(puVar3 + 1);
      if ((iVar1 != -1) && (lVar11 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar11 != 0)) {
        iVar8 = 0;
        iVar10 = (int)lVar11 + -1;
        if (-1 < iVar10) goto LAB_140c03380;
      }
      break;
    }
  }
  goto LAB_140c033ab;
  while( true ) {
    iVar4 = iVar7 + -1;
    if (*(int *)(lVar11 + 0xe0) < iVar1) {
      iVar8 = iVar7 + 1;
      iVar4 = iVar10;
    }
    iVar10 = iVar4;
    if (iVar10 < iVar8) break;
LAB_140c03380:
    iVar7 = iVar10 + iVar8 >> 1;
    lVar11 = *(longlong *)(_DAT_14251c198 + (longlong)iVar7 * 8);
    if (*(int *)(lVar11 + 0xe0) == iVar1) {
      if ((((lVar11 != 0) &&
           (lVar11 = arrival_office_precedence(lVar11,param_2 & 0xffffffff,&uStackX_8,auStack_38),
           lVar11 != 0)) &&
          ((*(longlong *)(lVar11 + 0x168) != 0 ||
           ((*(longlong *)(lVar11 + 0x1a8) != 0 || (*(longlong *)(lVar11 + 0x1e8) != 0)))))) &&
         ((lVar6 == 0 || (*(int *)(lVar11 + 0x2d0) < *(int *)(lVar6 + 0x2d0))))) {
        *param_3 = 1;
        *param_4 = uStackX_8;
        *param_5 = auStack_38[0];
        return lVar11;
      }
      break;
    }
  }
LAB_140c033ab:
  *param_3 = 0;
  return lVar6;
}


/* reference PE:6aea05a1:02734000; office-precedence; RVA 0xc03440..0xc03554 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong arrival_office_precedence(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  
  plVar2 = *(longlong **)(param_1 + 0xf0);
  iVar11 = 0x7531;
  lVar10 = 0;
  for (plVar9 = *(longlong **)(param_1 + 0xe8); plVar9 < plVar2; plVar9 = plVar9 + 1) {
    plVar3 = (longlong *)*plVar9;
    sVar4 = (**(code **)*plVar3)(plVar3);
    if (sVar4 == 10) {
      iVar1 = (int)plVar3[1];
      if ((((iVar1 == param_2) || (param_2 == -1)) &&
          ((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) != 0)) && (iVar1 != -1)) {
        lVar6 = FUN_1400bb6d0(iVar1,&DAT_1423f3c78);
        if (lVar6 != 0) {
          uVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
          lVar7 = FUN_1400bb3f0(uVar5,lVar6 + 0x1110);
          if (lVar7 != 0) {
            lVar8 = FUN_1401bc940(*(undefined4 *)(lVar7 + 0xc),lVar6 + 0x10c0);
            iVar1 = *(int *)(lVar8 + 0x2d0);
            if (iVar1 < iVar11) {
              *param_3 = lVar6;
              *param_4 = lVar7;
              lVar10 = lVar8;
              iVar11 = iVar1;
            }
          }
        }
      }
    }
  }
  return lVar10;
}


/* reference PE:6aea05a1:02734000; position-territory; RVA 0x9d7a60..0x9d7ba8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_position_territory(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  char cVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  while( true ) {
    if (puVar3 == *(undefined8 **)(param_1 + 0xd8)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = -1;
      if (*(undefined8 **)(param_1 + 0xd8) <= puVar3) {
        cVar6 = '\x01';
      }
    }
    if (-1 < cVar6) goto LAB_1409d7b90;
    puVar1 = (undefined4 *)*puVar3;
    if (((puVar1[7] & 0x200) != 0) && (puVar1[3] == *param_2)) break;
    puVar3 = puVar3 + 1;
  }
  lVar4 = FUN_14007f150(_DAT_14250dfd8,*puVar1);
  if (lVar4 != 0) {
    FUN_140071040(param_3," of ",4);
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    pppuStack_38 = (undefined8 ****)0x0;
    arrival_english_name(lVar4,&pppuStack_38,1,0);
    ppppuVar5 = &pppuStack_38;
    if (0xf < uStack_20) {
      ppppuVar5 = (undefined8 ****)pppuStack_38;
    }
    FUN_140071040(param_3,ppppuVar5,uStack_28);
    if (0xf < uStack_20) {
      uVar7 = uStack_20 + 1;
      ppppuVar5 = (undefined8 ****)pppuStack_38;
      if (0xfff < uVar7) {
        uVar7 = uStack_20 + 0x28;
        ppppuVar5 = (undefined8 ****)pppuStack_38[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar5))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      arrival_supplier_0x15530d0(ppppuVar5,uVar7);
    }
  }
LAB_1409d7b90:
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* reference PE:6aea05a1:02734000; selected-name; RVA 0xc521e0..0xc52278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong arrival_selected_name(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != -1) {
    lVar8 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
    if (lVar8 != 0) {
      iVar6 = 0;
      iVar7 = (int)lVar8 + -1;
      if (-1 < iVar7) {
        do {
          iVar4 = iVar7 + iVar6 >> 1;
          lVar8 = *(longlong *)(_DAT_14251c198 + (longlong)iVar4 * 8);
          iVar2 = *(int *)(lVar8 + 0xe0);
          if (iVar2 == iVar1) goto LAB_140c52253;
          iVar3 = iVar4 + -1;
          if (iVar2 < iVar1) {
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
          if (iVar2 <= iVar1) {
            iVar6 = iVar4 + 1;
          }
        } while (iVar6 <= iVar7);
      }
    }
    lVar8 = 0;
LAB_140c52253:
    if (lVar8 != 0) {
      lVar5 = param_1 + 8;
      if (*(char *)(lVar8 + 0xaa) != '\0') {
        lVar5 = lVar8 + 0x38;
      }
      return lVar5;
    }
  }
  return param_1 + 8;
}


/* reference PE:6aea05a1:02734000; language-name; RVA 0xaadad0..0xaae171 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_language_name(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x72) != '\0') {
    uVar11 = 0;
    if (_DAT_1418be234 < 0xb) {
      uVar11 = *(uint *)((longlong)(int)_DAT_1418be234 * 4 + 0x1423b2f60);
    }
    param_2[2] = 0;
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar6 = 0;
    if ((*(longlong *)(param_1 + 0x30) == 0) || ((uVar11 & 0xfffffffd) != 0)) {
      FUN_140070c00(&pppuStack_58,param_1);
      FUN_1405468a0(&pppuStack_58);
      ppppuVar8 = &pppuStack_58;
      if (0xf < uStack_40) {
        ppppuVar8 = (undefined8 ****)pppuStack_58;
      }
      FUN_140071040(param_2,ppppuVar8,lStack_48);
      lVar3 = *(longlong *)(param_1 + 0x10);
      FUN_140070e80(&pppuStack_58);
      bVar12 = lVar3 != 0;
    }
    else {
      FUN_1400bb1b0(param_2,0x60);
      plVar9 = (longlong *)(param_1 + 0x20);
      if (0xf < *(ulonglong *)(param_1 + 0x38)) {
        plVar9 = (longlong *)*plVar9;
      }
      FUN_140071040(param_2,plVar9,*(undefined8 *)(param_1 + 0x30));
      FUN_1400bb1b0(param_2,0x27);
      bVar12 = true;
    }
    puVar6 = (undefined8 *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (uVar11 == 1) {
        if (bVar12) {
          FUN_140071040(param_2," ",1);
        }
        FUN_1400bb1b0(param_2,0x60);
        if (0xf < *(ulonglong *)(param_1 + 0x38)) {
          puVar6 = (undefined8 *)*puVar6;
        }
        FUN_140071040(param_2,puVar6,*(undefined8 *)(param_1 + 0x30));
        FUN_1400bb1b0(param_2,0x27);
        bVar12 = true;
      }
      if ((*(longlong *)(param_1 + 0x30) != 0) && (uVar11 == 2)) goto LAB_140aae14c;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    uVar7 = (ulonglong)iVar1;
    if ((iVar1 != -1) || (*(int *)(param_1 + 0x44) != -1)) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar2 = *(int *)(param_1 + 0x6c);
      if ((((-1 < iVar1) && (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
          (-1 < iVar2)) &&
         (((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar2 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x44);
      if (((-1 < *(int *)(param_1 + 0x44)) &&
          (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      if (lStack_48 != 0) {
        if (bVar12) {
          FUN_140071040(param_2," ",1);
        }
        FUN_1405468a0(&pppuStack_58);
        ppppuVar8 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar8 = (undefined8 ****)pppuStack_58;
        }
        FUN_140071040(param_2,ppppuVar8,lStack_48);
        bVar12 = true;
      }
      FUN_140070e80(&pppuStack_58);
    }
    if (((*(int *)(param_1 + 0x54) != -1) || (*(int *)(param_1 + 0x48) != -1)) ||
       (*(int *)(param_1 + 0x4c) != -1)) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x48);
      if (((-1 < *(int *)(param_1 + 0x48)) &&
          (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x4c);
      if ((((-1 < *(int *)(param_1 + 0x4c)) &&
           (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) && (-1 < iVar1)) &&
         (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x50);
      if (((-1 < *(int *)(param_1 + 0x50)) &&
          (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x54);
      if ((((-1 < *(int *)(param_1 + 0x54)) &&
           (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) && (-1 < iVar1)) &&
         (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      if (lStack_48 != 0) {
        if (bVar12) {
          FUN_140071040(param_2," ",1);
        }
        FUN_1405468a0(&pppuStack_58);
        ppppuVar8 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar8 = (undefined8 ****)pppuStack_58;
        }
        FUN_140071040(param_2,ppppuVar8,lStack_48);
        bVar12 = true;
      }
      if (0xf < uStack_40) {
        uVar7 = uStack_40 + 1;
        ppppuVar8 = (undefined8 ****)pppuStack_58;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 + 0x28;
          ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        arrival_supplier_0x15530d0(ppppuVar8,uVar7);
      }
    }
    iVar1 = *(int *)(param_1 + 0x58);
    uVar7 = (ulonglong)iVar1;
    if (iVar1 != -1) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar2 = *(int *)(param_1 + 0x6c);
      if (((-1 < iVar1) && (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar2 &&
          (((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar2 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
        if (lStack_48 != 0) {
          if (bVar12) {
            FUN_140071040(param_2," ",1);
          }
          FUN_1405468a0(&pppuStack_58);
          ppppuVar8 = &pppuStack_58;
          if (0xf < uStack_40) {
            ppppuVar8 = (undefined8 ****)pppuStack_58;
          }
          FUN_140071040(param_2,ppppuVar8,lStack_48);
        }
      }
      if (0xf < uStack_40) {
        uVar7 = uStack_40 + 1;
        ppppuVar8 = (undefined8 ****)pppuStack_58;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 + 0x28;
          ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        arrival_supplier_0x15530d0(ppppuVar8,uVar7);
      }
    }
  }
LAB_140aae14c:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_78);
  return;
}


/* reference PE:6aea05a1:02734000; english-name; RVA 0xaae180..0xaae942 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_english_name(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  int iStack_a8;
  char cStack_98;
  char cStack_97;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  cStack_98 = param_3;
  cStack_97 = param_4;
  if (*(char *)((longlong)param_1 + 0x72) == '\0') goto LAB_140aae90f;
  if (_DAT_1418be234 < 0xb) {
    uVar11 = *(uint *)((longlong)(int)_DAT_1418be234 * 4 + 0x1423b2f60);
  }
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  if ((param_1[6] == 0) || ((uVar11 & 0xfffffffd) != 0)) {
    pppuStack_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar7 = param_1[2];
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    if (0x7fffffffffffffff < uVar7) goto LAB_140aae93c;
    if (uVar7 < 0x10) {
      uVar9 = 0xf;
      uStack_70 = 0xf;
      ppppuVar5 = (undefined8 ****)*puVar4;
      uStack_80 = puVar4[1];
      pppuStack_88 = ppppuVar5;
      uStack_78 = uVar7;
    }
    else {
      uVar9 = uVar7 | 0xf;
      if (uVar9 < 0x8000000000000000) {
        if (uVar9 < 0x16) {
          uVar9 = 0x16;
        }
      }
      else {
        uVar9 = 0x7fffffffffffffff;
      }
      ppppuVar5 = (undefined8 ****)FUN_140071e00(uVar9 + 1);
      pppuStack_88 = ppppuVar5;
      uStack_78 = uVar7;
      uStack_70 = uVar9;
      arrival_supplier_0x155454e(ppppuVar5,puVar4,uVar7 + 1);
    }
    if (cStack_98 != '\0') {
      FUN_1405468a0(&pppuStack_88);
      uVar9 = uStack_70;
      uVar7 = uStack_78;
      ppppuVar5 = (undefined8 ****)pppuStack_88;
    }
    ppppuVar6 = &pppuStack_88;
    if (0xf < uVar9) {
      ppppuVar6 = ppppuVar5;
    }
    FUN_140071040(param_2,ppppuVar6,uVar7);
    lVar1 = param_1[2];
    FUN_140070e80(&pppuStack_88);
    bVar13 = lVar1 != 0;
    param_4 = cStack_97;
    param_3 = cStack_98;
  }
  else {
    FUN_1400bb1b0(param_2,0x60);
    puVar4 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_140071040(param_2,puVar4,param_1[6]);
    FUN_1400bb1b0(param_2,0x27);
    bVar13 = true;
  }
  if (param_1[6] != 0) {
    if (uVar11 == 1) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      FUN_1400bb1b0(param_2,0x60);
      puVar4 = param_1 + 4;
      if (0xf < (ulonglong)param_1[7]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_140071040(param_2,puVar4,param_1[6]);
      FUN_1400bb1b0(param_2,0x27);
      bVar13 = true;
    }
    if ((param_1[6] != 0) && (uVar11 == 2)) goto LAB_140aae90f;
  }
  if (((*(int *)(param_1 + 8) != -1) || (*(int *)((longlong)param_1 + 0x44) != -1)) &&
     ((!bVar13 || (param_4 == '\0')))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x5c);
    uVar14 = arrival_supplier_0xd44840(0,*(int *)(param_1 + 8),&pppuStack_88);
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x5e);
    arrival_supplier_0xd44840(uVar14,*(undefined4 *)((longlong)param_1 + 0x44),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if (param_3 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
    }
    if (0xf < uStack_70) {
      uVar7 = uStack_70 + 1;
      ppppuVar5 = (undefined8 ****)pppuStack_88;
      if (0xfff < uVar7) {
        uVar7 = uStack_70 + 0x28;
        ppppuVar5 = (undefined8 ****)pppuStack_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar5))
           ) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      arrival_supplier_0x15530d0(ppppuVar5,uVar7);
    }
  }
  cVar12 = cStack_98;
  if ((((*(int *)((longlong)param_1 + 0x54) != -1) || (*(int *)(param_1 + 9) != -1)) ||
      (*(int *)((longlong)param_1 + 0x4c) != -1)) && ((!bVar13 || (param_4 == '\0')))) {
    bVar3 = false;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)(param_1 + 0xc);
    uVar14 = arrival_supplier_0xd44840(0,*(undefined4 *)(param_1 + 9),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if ((param_2[2] == 0) && (param_3 == '\x01')) {
        FUN_140071040(param_2,"The ",4);
LAB_140aae52f:
        FUN_1405468a0(&pppuStack_88);
      }
      else {
        FUN_140071040(param_2,"the ",4);
        if (param_3 != '\0') goto LAB_140aae52f;
      }
      bVar3 = true;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      uVar14 = FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x62);
    uVar14 = arrival_supplier_0xd44840
                       (uVar14,*(undefined4 *)((longlong)param_1 + 0x4c),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if (!bVar3) {
        if ((param_2[2] != 0) || (pcVar8 = "The ", param_3 != '\x01')) {
          pcVar8 = "the ";
        }
        FUN_140071040(param_2,pcVar8,4);
        bVar3 = true;
      }
      if (param_3 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      uVar14 = FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 100);
    uVar14 = arrival_supplier_0xd44840(uVar14,*(undefined4 *)(param_1 + 10),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if (!bVar3) {
        if ((param_2[2] != 0) || (pcVar8 = "The ", param_3 != '\x01')) {
          pcVar8 = "the ";
        }
        FUN_140071040(param_2,pcVar8,4);
        bVar3 = true;
      }
      if (param_3 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      uVar7 = uStack_78;
      if (uStack_78 == 0x7fffffffffffffff) {
        FUN_140066ec0();
LAB_140aae93c:
        FUN_140066ec0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pppuStack_90 = &pppuStack_88;
      if (0xf < uStack_70) {
        pppuStack_90 = pppuStack_88;
      }
      pppuStack_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      uVar9 = uStack_78 + 1;
      uVar10 = 0xf;
      ppppuVar5 = &pppuStack_68;
      if (0xf < uVar9) {
        uVar10 = uVar9 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        ppppuVar5 = (undefined8 ****)FUN_140071e00(uVar10 + 1);
        pppuStack_68 = ppppuVar5;
      }
      uStack_58 = uVar9;
      uStack_50 = uVar10;
      arrival_supplier_0x155454e(ppppuVar5,pppuStack_90,uVar7);
      *(undefined1 *)((longlong)ppppuVar5 + uVar7) = 0x2d;
      *(undefined1 *)((longlong)ppppuVar5 + uVar9) = 0;
      ppppuVar5 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar5 = (undefined8 ****)pppuStack_68;
      }
      uVar14 = FUN_140071040(param_2,ppppuVar5,uStack_58);
      if (0xf < uStack_50) {
        uVar7 = uStack_50 + 1;
        ppppuVar5 = (undefined8 ****)pppuStack_68;
        if (0xfff < uVar7) {
          uVar7 = uStack_50 + 0x28;
          ppppuVar5 = (undefined8 ****)pppuStack_68[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar5))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar14 = arrival_supplier_0x15530d0(ppppuVar5,uVar7);
      }
      bVar13 = false;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x66);
    arrival_supplier_0xd44840(uVar14,*(undefined4 *)((longlong)param_1 + 0x54),&pppuStack_88);
    cVar12 = cStack_98;
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      cVar12 = cStack_98;
      if (bVar3) {
LAB_140aae811:
        if (cVar12 != '\0') goto LAB_140aae816;
      }
      else {
        if ((param_2[2] != 0) || (cStack_98 != '\x01')) {
          FUN_140071040(param_2,"the ",4);
          goto LAB_140aae811;
        }
        FUN_140071040(param_2,"The ",4);
LAB_140aae816:
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
    }
    FUN_140070e80(&pppuStack_88);
  }
  if ((*(int *)(param_1 + 0xb) != -1) && ((!bVar13 || (cStack_97 == '\0')))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)(param_1 + 0xd);
    arrival_supplier_0xd44840(0,*(int *)(param_1 + 0xb),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      pcVar8 = "Of ";
      if (param_2[2] != 0) {
        pcVar8 = "of ";
      }
      FUN_140071040(param_2,pcVar8,3);
      if (cVar12 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_2,ppppuVar5,uStack_78);
    }
    FUN_140070e80(&pppuStack_88);
  }
LAB_140aae90f:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_c8);
  return;
}


/* reference PE:6aea05a1:02734000; name-only; RVA 0x1348e10..0x134918d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_name_only(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  int aiStack_70 [2];
  char cStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_98;
  if (_DAT_1418be234 - 4U < 2) {
    lVar5 = *(longlong *)(param_1 + 0xd80);
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
      puVar9 = (undefined8 *)(param_1 + 8);
    }
    else {
      puVar9 = (undefined8 *)(lVar5 + 0x20);
    }
    if (param_2 != puVar9) {
      puVar1 = puVar9 + 2;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_140070f00(param_2,puVar9,*puVar1);
    }
    goto LAB_141349168;
  }
  lVar5 = param_1 + 8;
  lVar4 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
  puVar10 = (undefined4 *)0x0;
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x130) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + 0x58);
      if (lVar4 == 0) {
        puVar10 = (undefined4 *)0x0;
      }
      else if (*(int *)(lVar4 + 0x30) == -1) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10 = (undefined4 *)FUN_140073ba0(0x14250a168);
      }
    }
    if (puVar10 != (undefined4 *)0x0) {
      lVar5 = arrival_selected_name(puVar10);
    }
  }
  param_2[2] = 0;
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar9 = 0;
  if (*(char *)(lVar5 + 0x72) == '\0') goto LAB_141349168;
  if (_DAT_1418be234 != 1) {
    bVar11 = false;
    if ((((_DAT_1418be238 == 0) && (puVar10 != (undefined4 *)0x0)) &&
        (*(longlong *)(_DAT_1423bc668 + 0x1358) != 0)) &&
       ((lVar4 = FUN_1400bb3f0(*(undefined4 *)(param_1 + 0xc30)), lVar4 != 0 &&
        ((*(byte *)(lVar4 + 4) & 8) != 0)))) {
      bVar11 = true;
      FUN_140071040(param_2,"\"",1);
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0xf;
    pppuStack_60 = (undefined8 ****)0x0;
    arrival_language_name(lVar5,&pppuStack_60);
    ppppuVar7 = &pppuStack_60;
    if (0xf < uStack_48) {
      ppppuVar7 = (undefined8 ****)pppuStack_60;
    }
    FUN_140071040(param_2,ppppuVar7,uStack_50);
    if (bVar11) {
      FUN_140071040(param_2,"\"",1);
    }
    if (0xf < uStack_48) {
      uVar8 = uStack_48 + 1;
      ppppuVar7 = (undefined8 ****)pppuStack_60;
      if (0xfff < uVar8) {
        uVar8 = uStack_48 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuStack_60[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar7))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      arrival_supplier_0x15530d0(ppppuVar7,uVar8);
    }
    goto LAB_141349168;
  }
  if ((_DAT_142407550 - _DAT_142407548 >> 3 == 0) || (_DAT_142407590 == 0)) goto LAB_141349168;
  bVar11 = false;
  lVar4 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(_DAT_142407590 + 0xc30),_DAT_142407590 + 0x1274)
  ;
  if (lVar4 == 0) goto LAB_141349168;
  if ((((*(int *)(param_1 + 0xc30) == -1) || (lVar6 = *(longlong *)(lVar4 + 0x130), lVar6 == 0)) ||
      (*(longlong *)(lVar6 + 0x60) == 0)) ||
     (lVar6 = FUN_1400bb3f0(*(int *)(param_1 + 0xc30),*(undefined8 *)(lVar6 + 0x60)), lVar6 == 0)) {
LAB_141348fbd:
    if (((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar4 + 0x130) != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + 0x60), lVar4 != 0)) {
      FUN_1400bc210(aiStack_70,lVar4 + 0x48);
      uStack_78 = 0xffffffff;
      uStack_74 = 0;
      iVar3 = -1;
      if (cStack_68 != '\0') {
        iVar3 = aiStack_70[0];
      }
      if (iVar3 != -1) goto LAB_14134900e;
    }
    if (bVar11) {
      arrival_language_name(lVar5,param_2);
    }
  }
  else {
    if ((*(byte *)(lVar6 + 4) & 1) == 0) {
      if (puVar10 != (undefined4 *)0x0) {
        FUN_1400bc210(aiStack_70,lVar6 + 8,*puVar10);
        uStack_78 = 0xffffffff;
        uStack_74 = 0;
        iVar3 = -1;
        if (cStack_68 != '\0') {
          iVar3 = aiStack_70[0];
        }
        bVar11 = iVar3 != -1;
      }
      goto LAB_141348fbd;
    }
LAB_14134900e:
    arrival_language_name(param_1 + 8,param_2);
  }
LAB_141349168:
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_98);
  return;
}


/* reference PE:6aea05a1:02734000; troupe-name; RVA 0xbaa5c0..0xbaa738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_troupe_name(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  if (((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0) || (param_3 == -1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1400bb6d0(param_3,&DAT_1423f3c78);
  }
  if (lVar2 == 0) {
    FUN_140071040(param_2,"an unknown civilization",0x17);
  }
  else {
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[LPAGE:ENT:",0xb);
      FUN_140545610(*(undefined4 *)(lVar2 + 4),param_2);
      FUN_140071040(param_2,"]",1);
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    pppuStack_38 = (undefined8 ****)0x0;
    arrival_english_name(lVar2 + 0x20,&pppuStack_38,1,0);
    ppppuVar3 = &pppuStack_38;
    if (0xf < uStack_20) {
      ppppuVar3 = (undefined8 ****)pppuStack_38;
    }
    FUN_140071040(param_2,ppppuVar3,uStack_28);
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_20) {
      uVar4 = uStack_20 + 1;
      ppppuVar3 = (undefined8 ****)pppuStack_38;
      if (0xfff < uVar4) {
        uVar4 = uStack_20 + 0x28;
        ppppuVar3 = (undefined8 ****)pppuStack_38[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar3))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      arrival_supplier_0x15530d0(ppppuVar3,uVar4);
    }
  }
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* reference PE:6aea05a1:02734000; travellers-producer; RVA 0x10c7f0..0x111900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arrival_travellers_producer(undefined4 *param_1,char param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  ushort *puVar6;
  ulonglong uVar7;
  char cVar8;
  char cVar9;
  short sVar10;
  undefined2 uVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  ulonglong *puVar30;
  int *piVar31;
  longlong *plVar32;
  short *psVar33;
  ulonglong uVar34;
  int *piVar35;
  char *pcVar36;
  undefined4 **ppuVar37;
  short sVar38;
  longlong lVar39;
  ushort uVar40;
  uint uVar41;
  int iVar42;
  bool bVar43;
  undefined1 auStack_8e8 [32];
  ulonglong uStack_8c8;
  undefined8 uStack_8c0;
  undefined2 uStack_8b8;
  longlong lStack_8b0;
  undefined1 uStack_8a8;
  undefined4 uStack_8a0;
  char cStack_898;
  undefined1 uStack_897;
  undefined1 uStack_896;
  char cStack_895;
  ushort auStack_894 [2];
  ulonglong uStack_890;
  undefined8 *puStack_888;
  char cStack_880;
  char acStack_87f [7];
  undefined8 *puStack_878;
  undefined1 uStack_870;
  char cStack_86f;
  undefined1 uStack_86e;
  undefined1 auStack_86d [5];
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  int iStack_858;
  int iStack_854;
  undefined8 *puStack_850;
  ushort *puStack_848;
  undefined8 *puStack_840;
  undefined4 *puStack_838;
  ushort *puStack_830;
  undefined1 auStack_828 [8];
  undefined1 uStack_820;
  undefined1 uStack_81f;
  undefined1 uStack_81e;
  undefined1 uStack_81d;
  undefined1 uStack_81c;
  undefined1 uStack_81b;
  undefined1 uStack_81a;
  undefined1 uStack_819;
  undefined1 uStack_818;
  undefined1 uStack_817;
  undefined1 uStack_816;
  undefined1 uStack_815;
  undefined1 auStack_814 [4];
  undefined1 auStack_810 [8];
  ushort *puStack_808;
  ulonglong uStack_800;
  ulonglong uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  ushort auStack_7e0 [2];
  ushort auStack_7dc [2];
  ushort auStack_7d8 [4];
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined1 auStack_7c0 [8];
  undefined1 auStack_7b8 [8];
  ushort *puStack_7b0;
  int *piStack_7a8;
  undefined8 uStack_7a0;
  longlong *plStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined4 *puStack_750;
  undefined4 *puStack_748;
  undefined4 *puStack_740;
  undefined1 auStack_738 [8];
  longlong lStack_730;
  longlong lStack_728;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined4 *puStack_708;
  undefined8 *puStack_700;
  undefined4 uStack_6f8;
  undefined1 uStack_6f4;
  undefined2 uStack_6f2;
  undefined2 uStack_6f0;
  ushort uStack_6ee;
  undefined2 uStack_6dc;
  undefined1 auStack_6a8 [8];
  undefined4 *puStack_6a0;
  undefined4 *puStack_698;
  undefined1 auStack_690 [8];
  longlong lStack_688;
  longlong lStack_680;
  undefined8 uStack_670;
  undefined4 *puStack_668;
  undefined4 *puStack_660;
  undefined4 *puStack_658;
  undefined4 *puStack_650;
  undefined1 auStack_648 [8];
  undefined4 *puStack_640;
  undefined4 *puStack_638;
  undefined4 *puStack_630;
  undefined4 *puStack_628;
  undefined4 *puStack_620;
  longlong lStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 *puStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [8];
  undefined1 auStack_5e8 [24];
  longlong lStack_5d0;
  longlong lStack_5c8;
  undefined8 uStack_5b8;
  longlong *plStack_5b0;
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [32];
  int aiStack_530 [2];
  undefined8 uStack_528;
  undefined8 uStack_520;
  longlong alStack_508 [50];
  longlong alStack_378 [50];
  undefined8 auStack_1e8 [50];
  short asStack_58 [20];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_8e8;
  cStack_86f = param_2;
  puStack_838 = param_1;
  cVar8 = FUN_140e5e9c0(0x1423b36b0,auStack_7e0,auStack_7dc,auStack_7d8);
  if (cVar8 == '\0') goto LAB_1401118cd;
  iVar15 = FUN_14010c680(0x1423f3970,auStack_7e0[0],auStack_7dc[0],auStack_7d8[0]);
  sVar38 = *(short *)((longlong)param_1 + 10) + _DAT_14250a568 * -3;
  uVar40 = (*(short *)(param_1 + 3) + _DAT_14250a56c * -3) * 0x10;
  uVar41 = (uint)uVar40;
  uVar19 = 0;
  if (-1 < (short)(sVar38 * 0x10)) {
    uVar19 = (uint)(ushort)(sVar38 * 0x10);
  }
  if (_DAT_14250a55c <= (short)uVar19) {
    uVar19 = _DAT_14250a55c - 1;
  }
  uStack_7f8 = CONCAT44(uStack_7f8._4_4_,uVar19);
  uStack_800._0_4_ = (uint)uVar40;
  if ((short)uVar40 < 0) {
    uVar41 = 0;
    uStack_800._0_4_ = 0;
  }
  if (_DAT_14250a560 <= (int)uVar41) {
    uVar41 = _DAT_14250a560 - 1;
    uStack_800._0_4_ = uVar41;
  }
  uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
  auStack_894[0] = FUN_1414b8ca0(0x1423f3970,uVar19 & 0xffff,uVar41 & 0xffff,0);
  puVar21 = (ushort *)(ulonglong)auStack_894[0];
  iVar16 = FUN_14010c680(0x1423f3970,uVar19 & 0xffff,uVar41 & 0xffff,auStack_894[0]);
  if ((iVar16 != iVar15) ||
     ((((0 < (short)uVar19 && (0 < (short)uVar41)) && ((int)(short)uVar19 < _DAT_14250a55c + -1)) &&
      ((int)(short)uVar41 < _DAT_14250a560 + -1)))) {
    uStack_7f8 = CONCAT44(uStack_7f8._4_4_,(uint)auStack_7e0[0]);
    uVar41 = (uint)auStack_7dc[0];
    uStack_800 = CONCAT44(uStack_800._4_4_,uVar41);
    auStack_894[0] = auStack_7d8[0];
  }
  arrival_supplier_0x67130(&uStack_768);
  arrival_supplier_0x67130(&lStack_688);
  arrival_supplier_0x67130(&lStack_5d0);
  cStack_898 = '\0';
  puVar26 = (undefined8 *)(param_1 + 8);
  puStack_788 = puVar26;
  iVar15 = arrival_supplier_0x70480(puVar26);
  while (puVar6 = (ushort *)(ulonglong)(iVar15 - 1U), puStack_848 = puVar6, -1 < (int)(iVar15 - 1U))
  {
    puVar20 = (undefined8 *)arrival_supplier_0x70850(puVar26,puVar6);
    puVar21 = (ushort *)arrival_supplier_0x76b10(0x1424075f8,*(undefined4 *)*puVar20);
    puStack_808 = puVar21;
    if ((puVar21 != (ushort *)0x0) && (cVar8 = arrival_supplier_0xdf5e20(puVar21,0), cVar8 != '\0'))
    {
      FUN_140df5ed0(puVar21);
      puStack_888 = *(undefined8 **)(puVar21 + 0xc);
      FUN_1413906e0(puStack_888,1);
      arrival_supplier_0x1390690(puStack_888);
      *(uint *)(puStack_888 + 0x22) = *(uint *)(puStack_888 + 0x22) | 0x80000000;
      FUN_1413a29c0(puStack_888);
      plVar22 = (longlong *)arrival_supplier_0x70850(puVar26,puVar6);
      *(undefined4 *)(puStack_888 + 0x131) = *(undefined4 *)(*plVar22 + 4);
      plVar22 = (longlong *)arrival_supplier_0x70850(puVar26,puVar6);
      *(undefined4 *)((longlong)puStack_888 + 0x98c) = *(undefined4 *)(*plVar22 + 8);
      plVar22 = (longlong *)arrival_supplier_0x70850(puVar26,puVar6);
      *(undefined4 *)(puStack_888 + 0x132) = *(undefined4 *)(*plVar22 + 0xc);
      plVar22 = (longlong *)arrival_supplier_0x70850(puVar26,puVar6);
      *(undefined4 *)(puStack_888 + 0x134) = *(undefined4 *)(*plVar22 + 0x10);
      plVar22 = (longlong *)arrival_supplier_0x70850(puVar26,puVar6);
      if (0 < *(int *)(*plVar22 + 0x14)) {
        plVar22 = (longlong *)arrival_supplier_0x70850(puVar26,puVar6);
        FUN_140074e10(puStack_888,0x2e,*(undefined4 *)(*plVar22 + 0x14));
      }
      puVar20 = *(undefined8 **)(puVar21 + 8);
      puStack_850 = puVar20;
      if (*(int *)(puVar20 + 6) == -1) {
        if (((*(longlong *)(param_1 + 0x18) != 0) &&
            (lVar23 = arrival_supplier_0x709a0(*(longlong *)(param_1 + 0x18) + 0x98), lVar23 != 0))
           && (lVar23 = arrival_supplier_0x13cc070(puStack_888), lVar23 != 0)) {
          arrival_supplier_0x70870(lVar23 + 0xe8,&puStack_700);
          arrival_supplier_0x70860(lVar23 + 0xe8,&puStack_640);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_700,acStack_87f,&puStack_640);
          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
          while (cVar8 != '\0') {
            plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_700);
            plVar22 = (longlong *)*plVar22;
            sVar38 = (**(code **)*plVar22)(plVar22);
            if ((sVar38 == 10) &&
               (lVar23 = arrival_supplier_0x7f120(&DAT_1423f3c78,(int)plVar22[1]), lVar23 != 0)) {
              uVar17 = (**(code **)(*plVar22 + 0x30))(plVar22);
              puStack_698 = (undefined4 *)FUN_1400bb3f0(uVar17,lVar23 + 0x1110);
              if ((puStack_698 != (undefined4 *)0x0) &&
                 (iVar15 = arrival_supplier_0x13e120
                                     (*(undefined4 *)(lVar23 + 4),*puStack_698,
                                      *(longlong *)(param_1 + 0x18) + 0x98,
                                      *(longlong *)(param_1 + 0x18) + 0xb0), iVar15 != -1)) {
                arrival_supplier_0xbafb0(&lStack_5d0,&puStack_698);
              }
            }
            arrival_supplier_0x70430(&puStack_700);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_700,acStack_87f,&puStack_640);
            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
          }
        }
        bVar43 = false;
        if (((*(int *)(puStack_888 + 0x3e) != -1) &&
            (lVar23 = FUN_140076b30(0x142505c40), lVar23 != 0)) &&
           (*(int *)(lVar23 + 0x1c4) == _DAT_1423b5af8)) {
          bVar43 = true;
          FUN_14013e160(lVar23,&lStack_688);
        }
        bVar4 = false;
        bVar5 = false;
        sVar38 = FUN_140baf080(puVar20,0,_DAT_1423b5af8);
        if (sVar38 == 0) {
          iVar15 = FUN_140bb09f0(puVar20,0xd);
          if ((iVar15 != -1) && (lVar23 = FUN_1400693f0(0x14251c138,iVar15), lVar23 != 0)) {
            sVar38 = FUN_140baf080(lVar23,0,_DAT_1423b5af8);
            bVar5 = false;
            if (sVar38 != 0) {
              bVar5 = true;
            }
          }
          puVar25 = puStack_838;
          if (((*(longlong *)(puStack_838 + 0x18) == 0) ||
              (iVar15 = arrival_supplier_0x76740(), iVar15 != 0x13)) ||
             (iVar15 = FUN_1400bb5a0(*(undefined4 *)(puVar20 + 0x1c),
                                     *(undefined8 *)(*(longlong *)(puVar25 + 0x18) + 0x130)),
             iVar15 == -1)) {
            cVar8 = '\0';
            arrival_supplier_0x70870(0x14250a318,&puStack_748);
            arrival_supplier_0x70860(0x14250a318,&puStack_630);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_748,&uStack_81f,&puStack_630);
            cVar9 = arrival_supplier_0x66de0(*puVar24,0);
            while (cVar9 != '\0') {
              plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_748);
              lVar23 = *plVar22;
              if (((*(byte *)(lVar23 + 0x4c) & 1) == 0) &&
                 (lVar39 = arrival_supplier_0x70480(lVar23 + 0x28), lVar39 != 0)) {
                puVar26 = (undefined8 *)arrival_supplier_0x70850(lVar23 + 0x28,0);
                iVar15 = arrival_supplier_0x73f60(*puVar26);
                if ((iVar15 == 2) &&
                   (plVar22 = (longlong *)arrival_supplier_0x70850(lVar23 + 0x28,0),
                   *(int *)(*(longlong *)(*plVar22 + 0x10) + 8) != -1)) {
                  plVar22 = (longlong *)arrival_supplier_0x70850(lVar23 + 0x28,0);
                  lVar39 = FUN_1400bb3f0(*(undefined4 *)(*(longlong *)(*plVar22 + 0x10) + 8),
                                         lVar23 + 8);
                  if (((lVar39 != 0) &&
                      (iVar15 = FUN_1400bb5a0(_DAT_1423b5af8,lVar39 + 0x20), iVar15 != -1)) &&
                     (plVar22 = (longlong *)arrival_supplier_0x70850(lVar23 + 0x28,0),
                     *(int *)(*(longlong *)(*plVar22 + 0x10) + 4) != -1)) {
                    plVar22 = (longlong *)arrival_supplier_0x70850(lVar23 + 0x28,0);
                    lVar23 = FUN_1400bb3f0(*(undefined4 *)(*(longlong *)(*plVar22 + 0x10) + 4),
                                           lVar23 + 8);
                    if (lVar23 != 0) {
                      iVar15 = FUN_1400bb5a0(*(undefined4 *)(puVar20 + 0x1c),lVar23 + 8);
                      if (iVar15 == -1) {
                        arrival_supplier_0x70870(lVar23 + 0x20,&puStack_750);
                        arrival_supplier_0x70860(lVar23 + 0x20,&puStack_638);
                        puVar24 = (undefined1 *)
                                  arrival_supplier_0x70450(&puStack_750,&uStack_820,&puStack_638);
                        cVar9 = arrival_supplier_0x66de0(*puVar24,0);
                        while (cVar9 != '\0') {
                          puVar25 = (undefined4 *)arrival_supplier_0x70440(&puStack_750);
                          sVar38 = FUN_140baf080(puVar20,0,*puVar25);
                          if (0 < sVar38) goto LAB_14010d0b1;
                          arrival_supplier_0x70980(&puStack_750);
                          puVar24 = (undefined1 *)
                                    arrival_supplier_0x70450(&puStack_750,&uStack_820,&puStack_638);
                          cVar9 = arrival_supplier_0x66de0(*puVar24);
                        }
                      }
                      else {
LAB_14010d0b1:
                        cVar8 = '\x01';
                      }
                    }
                  }
                }
              }
              arrival_supplier_0x70430(&puStack_748);
              puVar24 = (undefined1 *)
                        arrival_supplier_0x70450(&puStack_748,&uStack_81f,&puStack_630);
              cVar9 = arrival_supplier_0x66de0(*puVar24);
            }
          }
          else {
            arrival_supplier_0x67130(&uStack_780);
            iVar15 = arrival_supplier_0x70480(puVar20 + 0x1d);
            iVar15 = iVar15 + -1;
            if (-1 < iVar15) {
              lVar23 = (longlong)iVar15;
              do {
                puVar26 = (undefined8 *)arrival_supplier_0x70850(puVar20 + 0x1d,lVar23);
                sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                if (sVar38 == 0) {
                  plVar22 = (longlong *)arrival_supplier_0x70850(puVar20 + 0x1d,lVar23);
                  psVar33 = (short *)arrival_supplier_0x7f120
                                               (&DAT_1423f3c78,*(undefined4 *)(*plVar22 + 8));
                  if ((psVar33 != (short *)0x0) && (*psVar33 == 1)) {
                    arrival_supplier_0x70a40(&uStack_780,psVar33 + 2);
                  }
                }
                lVar23 = lVar23 + -1;
                iVar15 = iVar15 + -1;
              } while (-1 < iVar15);
            }
            arrival_supplier_0x70870(&uStack_780,&puStack_708);
            arrival_supplier_0x70860(&uStack_780,&puStack_620);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_708,&cStack_880,&puStack_620);
            cVar8 = arrival_supplier_0x66de0(*puVar24);
            while (cVar8 != '\0') {
              puVar25 = (undefined4 *)arrival_supplier_0x70440(&puStack_708);
              uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
              FUN_140bae090(puVar20,0,*puVar25,0);
              arrival_supplier_0x70980(&puStack_708);
              puVar24 = (undefined1 *)
                        arrival_supplier_0x70450(&puStack_708,&cStack_880,&puStack_620);
              cVar8 = arrival_supplier_0x66de0(*puVar24);
            }
            uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
            FUN_140bafbb0(puVar20,0,_DAT_1423b5af8,100);
            *(int *)(puVar20 + 0x16) = _DAT_1423b5af0;
            *(int *)(puStack_888 + 0x28) = _DAT_1423b5af0;
            bVar4 = true;
            arrival_supplier_0x67150(&uStack_780);
            cVar8 = '\0';
          }
        }
        else {
          bVar4 = true;
          *(int *)(puVar20 + 0x16) = _DAT_1423b5af0;
          *(int *)(puStack_888 + 0x28) = _DAT_1423b5af0;
          cVar8 = '\0';
        }
        if (((bVar43) || (bVar4)) || ((bVar5 || (cVar8 != '\0')))) {
          uStack_8a0 = 0xffffffff;
          uStack_8a8 = 1;
          lStack_8b0 = _DAT_1423bc670;
          uStack_8b8 = 0xffff;
          uStack_8c0 = CONCAT62(uStack_8c0._2_6_,0xffff);
          uStack_8c8 = CONCAT44(uStack_8c8._4_4_,0xffffffff);
          FUN_140bd0c00(puVar20,1,_DAT_1423b5af4,0xffffffff);
          *(int *)(*(longlong *)(puVar20[0x26] + 0x28) + 0x1c) = (int)*(short *)(puStack_838 + 1);
          *(int *)(*(longlong *)(puVar20[0x26] + 0x28) + 0x20) =
               (int)*(short *)((longlong)puStack_838 + 6);
          puVar1 = (uint *)(*(longlong *)(puVar20[0x26] + 0x28) + 0x24);
          *puVar1 = *puVar1 & 0xfffffffc;
          cStack_898 = '\x01';
          param_1 = puStack_838;
        }
        else {
          uStack_8a0 = 0xffffffff;
          uStack_8a8 = 1;
          lStack_8b0 = _DAT_1423bc670;
          uStack_8b8 = 0xffff;
          uStack_8c0 = CONCAT62(uStack_8c0._2_6_,0xffff);
          uStack_8c8 = CONCAT44(uStack_8c8._4_4_,0xffffffff);
          FUN_140bd0c00(puVar20,5,_DAT_1423b5af4,0xffffffff);
          param_1 = puStack_838;
          *(int *)(*(longlong *)(puVar20[0x26] + 0x28) + 0x1c) = (int)*(short *)(puStack_838 + 1);
          *(int *)(*(longlong *)(puVar20[0x26] + 0x28) + 0x20) =
               (int)*(short *)((longlong)puStack_838 + 6);
          puVar1 = (uint *)(*(longlong *)(puVar20[0x26] + 0x28) + 0x24);
          *puVar1 = *puVar1 & 0xfffffffc;
          FUN_140df8a30(puStack_808,uStack_7f8 & 0xffffffff,uStack_800 & 0xffffffff,auStack_894[0]);
          cStack_895 = cVar8;
          if ((*(longlong *)(param_1 + 0x18) == 0) ||
             (iVar15 = arrival_supplier_0x76740(), iVar15 != 0x18)) {
LAB_14010e692:
            cVar8 = FUN_140c26db0(puVar20,0xa2);
            if (cVar8 == '\0') {
              lVar23 = arrival_supplier_0xc272f0(puVar20);
              if ((((lVar23 != 0) && (*(int *)(lVar23 + 0x90) == 3)) &&
                  ((*(int *)(lVar23 + 0xb0) != _DAT_1423b5af0 ||
                   (*(int *)(lVar23 + 0xb0) != _DAT_1423b5af8)))) &&
                 ((puVar20[0x26] != 0 && (lVar23 = *(longlong *)(puVar20[0x26] + 0x58), lVar23 != 0)
                  ))) {
                *(undefined4 *)(lVar23 + 0x30) = 0xffffffff;
              }
            }
            else {
              lVar23 = puVar20[0x26];
              if (lVar23 == 0) {
                uStack_610 = FUN_1415530e0(0x68);
                lVar23 = arrival_supplier_0x766b0(uStack_610);
                puVar20[0x26] = lVar23;
              }
              if (*(longlong *)(lVar23 + 0x58) == 0) {
                uStack_608 = FUN_1415530e0(0x60);
                uVar27 = arrival_supplier_0xff620(uStack_608);
                *(undefined8 *)(puVar20[0x26] + 0x58) = uVar27;
              }
              puVar25 = (undefined4 *)FUN_1400ffa30();
              puVar25[0x23] = *(undefined4 *)(puVar20 + 0x1c);
              puVar25[0x20] = (int)*(short *)((longlong)puVar20 + 2);
              *(undefined2 *)(puVar25 + 0x21) = *(undefined2 *)((longlong)puVar20 + 4);
              iVar15 = arrival_supplier_0xc030b0(puVar20);
              puVar25[0x25] = _DAT_142167754 - iVar15;
              uVar17 = FUN_140073560(0x62700);
              puVar25[0x26] = uVar17;
              lVar23 = arrival_supplier_0x7f120(&DAT_1423f3c78,*(undefined4 *)(puVar20 + 0x16));
              if (lVar23 != 0) {
                uStack_8c8 = CONCAT62(uStack_8c8._2_6_,*(undefined2 *)((longlong)puStack_888 + 300))
                ;
                arrival_supplier_0x14a03e0
                          (0x1423f3970,puVar25 + 2,lVar23,
                           *(undefined2 *)((longlong)puStack_888 + 0xa4));
              }
              puVar25[0x24] = 0;
              *(undefined4 *)(*(longlong *)(puVar20[0x26] + 0x58) + 0x30) = *puVar25;
              FUN_1400bb4a0(*puVar25,*(longlong *)(puVar20[0x26] + 0x58) + 0x38);
              plVar22 = (longlong *)FUN_140105a90();
              *(undefined4 *)(plVar22 + 5) = *(undefined4 *)(puVar20 + 0x1c);
              *(undefined4 *)((longlong)plVar22 + 0x2c) = *puVar25;
              if (lVar23 != 0) {
                *(undefined4 *)(plVar22 + 6) = *(undefined4 *)(lVar23 + 4);
              }
              *(int *)(plVar22 + 1) = _DAT_142167754;
              *(int *)((longlong)plVar22 + 0xc) = _DAT_1423aa348;
              (**(code **)(*plVar22 + 0x128))(plVar22);
            }
          }
          else {
            lVar23 = arrival_supplier_0x7f120(&DAT_1423f3c78,_DAT_1423b5af0);
            if (lVar23 != 0) {
              iVar15 = 0;
              uStack_890 = uStack_890 & 0xffffffff00000000;
              lVar39 = 0;
              iVar16 = 0;
              iStack_854 = 0;
              puVar26 = (undefined8 *)(lVar23 + 0x1028);
              puStack_790 = puVar26;
              arrival_supplier_0x70870(puVar26,&puStack_830);
              arrival_supplier_0x70860(puVar26,&uStack_670);
              puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_830,&uStack_81c,&uStack_670)
              ;
              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
              param_1 = puStack_838;
              if (cVar8 != '\0') {
                do {
                  puVar20 = (undefined8 *)arrival_supplier_0x70440(&puStack_830);
                  puVar25 = (undefined4 *)
                            arrival_supplier_0x7f120(&DAT_1423f3c78,*(undefined4 *)*puVar20);
                  puStack_600 = puVar25;
                  if (((puVar25 != (undefined4 *)0x0) && ((puVar25[0x27] & 0x4000010) == 0)) &&
                     (cVar8 = arrival_supplier_0x70b50(*(longlong *)(puVar25 + 2) + 0x3b0),
                     cVar8 == '\0')) {
                    if (*(short *)((longlong)puVar25 + 0xcee) == 0x10) {
                      iVar15 = 0;
                    }
                    else {
                      sVar38 = FUN_140101130(puVar26,puVar25[1]);
                      iVar15 = 2;
                      if ((sVar38 - 1U & 0xfffb) == 0) {
                        iVar15 = 1;
                      }
                    }
                    if (iVar16 <= iVar15) {
                      arrival_supplier_0x67130(&uStack_780);
                      FUN_1409a9ea0(puVar25,&uStack_780,1);
                      iVar18 = 0;
                      lVar23 = 0;
                      arrival_supplier_0x70870(&uStack_780,auStack_810);
                      arrival_supplier_0x70860(&uStack_780,&lStack_618);
                      puVar24 = (undefined1 *)
                                arrival_supplier_0x70450(auStack_810,&uStack_81d,&lStack_618);
                      cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                      if (cVar8 != '\0') {
                        do {
                          plVar22 = (longlong *)arrival_supplier_0x70440(auStack_810);
                          lVar28 = *plVar22;
                          if ((lVar28 != _DAT_1423bc670) &&
                             (cVar8 = arrival_supplier_0x735c0(lVar28 + 0x2a0,3), cVar8 != '\0')) {
                            arrival_supplier_0x70870(lVar28 + 0xd8,&puStack_868);
                            arrival_supplier_0x70860(lVar28 + 0xd8,&puStack_628);
                            puVar24 = (undefined1 *)
                                      arrival_supplier_0x70450
                                                (&puStack_868,&uStack_81e,&puStack_628);
                            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            while (cVar8 != '\0') {
                              puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_868);
                              if (((0 < *(int *)*puVar26) &&
                                  (plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868),
                                  *(int *)(*plVar22 + 0xc) == -1)) &&
                                 ((plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868),
                                  *(int *)(*plVar22 + 0x18) == -1 &&
                                  (plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868),
                                  *(int *)(*plVar22 + 4) ==
                                  (int)*(short *)((longlong)puStack_850 + 2))))) {
                                alStack_508[lVar23] = lVar28;
                                iVar18 = iVar18 + 1;
                                lVar23 = lVar23 + 1;
                                if (0x31 < lVar23) goto LAB_14010d46e;
                                break;
                              }
                              arrival_supplier_0x70430(&puStack_868);
                              puVar24 = (undefined1 *)
                                        arrival_supplier_0x70450
                                                  (&puStack_868,&uStack_81e,&puStack_628);
                              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            }
                          }
                          arrival_supplier_0x70430(auStack_810);
                          puVar24 = (undefined1 *)
                                    arrival_supplier_0x70450(auStack_810,&uStack_81d,&lStack_618);
                          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                        } while (cVar8 != '\0');
LAB_14010d46e:
                        if (iVar18 != 0) {
                          if (iStack_854 < iVar15) {
                            lVar39 = 0;
                            iVar42 = 0;
                            iStack_854 = iVar15;
LAB_14010d49c:
                            iVar16 = iStack_854;
                            uVar27 = FUN_1409568e0(puStack_600);
                            auStack_1e8[lVar39] = uVar27;
                            iVar15 = FUN_140073560(iVar18);
                            alStack_378[lVar39] = alStack_508[iVar15];
                            uStack_890 = CONCAT44(uStack_890._4_4_,iVar42 + 1);
                            lVar39 = lVar39 + 1;
                            iVar15 = iVar42 + 1;
                          }
                          else {
                            iVar42 = (int)uStack_890;
                            iVar15 = (int)uStack_890;
                            iVar16 = iStack_854;
                            if (lVar39 < 0x32) goto LAB_14010d49c;
                          }
                          arrival_supplier_0x68790(&uStack_780);
                          goto LAB_14010d4ee;
                        }
                      }
                      arrival_supplier_0x68790(&uStack_780);
                      iVar16 = iStack_854;
                    }
                    iVar15 = (int)uStack_890;
                  }
LAB_14010d4ee:
                  arrival_supplier_0x70430(&puStack_830);
                  puVar24 = (undefined1 *)
                            arrival_supplier_0x70450(&puStack_830,&uStack_81c,&uStack_670);
                  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                  puVar26 = puStack_790;
                } while (cVar8 != '\0');
                param_1 = puStack_838;
                puVar20 = puStack_850;
                if (0 < iVar15) {
                  iVar15 = FUN_140073560(iVar15);
                  puVar26 = (undefined8 *)auStack_1e8[iVar15];
                  lVar23 = alStack_378[iVar15];
                  puStack_790 = puVar26;
                  lVar39 = arrival_supplier_0x9ce920(lVar23);
                  puVar20 = puStack_850;
                  param_1 = puStack_838;
                  if (lVar39 != 0) {
                    bVar43 = false;
                    if (*(longlong *)(puStack_850[0x26] + 0x58) != 0) {
                      if ((((*(int *)(*(longlong *)(puStack_850[0x26] + 0x58) + 0x30) != -1) &&
                           (lVar28 = FUN_140073ba0(0x14250a168), lVar28 != 0)) &&
                          (lVar28 = arrival_supplier_0x7f120
                                              (&DAT_1423f3c78,*(undefined4 *)(lVar28 + 0xb0)),
                          lVar28 != 0)) &&
                         (puVar29 = (undefined8 *)FUN_1409568e0(lVar28), puVar29 == puVar26)) {
LAB_14010d6bd:
                        cStack_895 = '\x01';
                        param_1 = puStack_838;
                        goto LAB_14010e0f4;
                      }
                      arrival_supplier_0x70870
                                (*(longlong *)(puVar20[0x26] + 0x58) + 0x38,&puStack_860);
                      arrival_supplier_0x70860
                                (*(longlong *)(puVar20[0x26] + 0x58) + 0x38,&puStack_6a0);
                      puVar24 = (undefined1 *)
                                arrival_supplier_0x70450(&puStack_860,&uStack_81b,&puStack_6a0);
                      cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                      if (cVar8 != '\0') {
                        do {
                          puVar25 = (undefined4 *)arrival_supplier_0x70440(&puStack_860);
                          puVar25 = (undefined4 *)FUN_140073ba0(0x14250a168,*puVar25);
                          if (puVar25 == (undefined4 *)0x0) break;
                          if (puVar25[0x2c] == *(int *)((longlong)puVar26 + 4)) {
                            *(undefined4 *)(*(longlong *)(puVar20[0x26] + 0x58) + 0x30) = *puVar25;
LAB_14010d686:
                            bVar43 = true;
                          }
                          else {
                            lVar28 = arrival_supplier_0x7f120(&DAT_1423f3c78);
                            if ((lVar28 != 0) &&
                               (puVar29 = (undefined8 *)FUN_1409568e0(lVar28), puVar29 == puVar26))
                            {
                              *(undefined4 *)(*(longlong *)(puVar20[0x26] + 0x58) + 0x30) = *puVar25
                              ;
                              goto LAB_14010d686;
                            }
                          }
                          arrival_supplier_0x70980(&puStack_860);
                          puVar24 = (undefined1 *)
                                    arrival_supplier_0x70450(&puStack_860,&uStack_81b,&puStack_6a0);
                          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                        } while (cVar8 != '\0');
                        if (bVar43) goto LAB_14010d6bd;
                      }
                    }
                    arrival_supplier_0x67130(&lStack_730);
                    arrival_supplier_0x67130(auStack_550);
                    FUN_1409f8ac0(lVar39,asStack_58,&iStack_858);
                    puVar29 = puStack_850;
                    if (0 < iStack_858) {
                      iVar15 = iStack_858 + -1;
                      lVar39 = (longlong)iVar15;
                      if (-1 < iVar15) {
                        do {
                          if (0x48 < (int)asStack_58[lVar39] - 0x3dU) {
override_jmp_14010d74f_case_1:
                            arrival_supplier_0x70870(_DAT_1423bc670 + 0x2b0,auStack_828);
                            arrival_supplier_0x70860(_DAT_1423bc670 + 0x2b0,auStack_648);
                            puVar24 = (undefined1 *)
                                      arrival_supplier_0x70450(auStack_828,&uStack_86e,auStack_648);
                            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            while (cVar8 != '\0') {
                              puVar26 = (undefined8 *)arrival_supplier_0x70440(auStack_828);
                              sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                              if (sVar38 == 8) {
                                plVar22 = (longlong *)arrival_supplier_0x70440(auStack_828);
                                cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,1);
                                if (cVar8 == '\0') {
                                  plVar22 = (longlong *)arrival_supplier_0x70440(auStack_828);
                                  cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,0);
                                  if (cVar8 == '\0') {
                                    plVar22 = (longlong *)arrival_supplier_0x70440(auStack_828);
                                    cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,3);
                                    if (cVar8 == '\0') {
                                      plVar22 = (longlong *)arrival_supplier_0x70440(auStack_828);
                                      cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,4);
                                      if (cVar8 != '\0') {
                                        arrival_supplier_0x70870(0x142410390,auStack_7c0);
                                        arrival_supplier_0x70860(0x142410390,&puStack_650);
                                        puVar24 = (undefined1 *)
                                                  arrival_supplier_0x70450
                                                            (auStack_7c0,&uStack_819,&puStack_650);
                                        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                        while (cVar8 != '\0') {
                                          plVar22 = (longlong *)
                                                    arrival_supplier_0x70440(auStack_7c0);
                                          if (*(int *)(*plVar22 + 0x114) == _DAT_1423b5af4) {
                                            plVar22 = (longlong *)
                                                      arrival_supplier_0x70440(auStack_7c0);
                                            lVar28 = *plVar22;
                                            plVar22 = (longlong *)
                                                      arrival_supplier_0x70440(auStack_828);
                                            if (*(int *)(lVar28 + 0x118) == *(int *)(*plVar22 + 8))
                                            goto LAB_14010dce3;
                                          }
                                          arrival_supplier_0x70430(auStack_7c0);
                                          puVar24 = (undefined1 *)
                                                    arrival_supplier_0x70450
                                                              (auStack_7c0,&uStack_819,&puStack_650)
                                          ;
                                          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              arrival_supplier_0x70430(auStack_828);
                              puVar24 = (undefined1 *)
                                        arrival_supplier_0x70450
                                                  (auStack_828,&uStack_86e,auStack_648);
                              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            }
                            goto override_jmp_14010d74f_case_2;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch((&UNK_140111910)[(int)((int)asStack_58[lVar39] - 0x3dU)]) {
                          case 0:
                            arrival_supplier_0x70870(_DAT_1423bc670 + 0x2b0,&uStack_7a0);
                            arrival_supplier_0x70860(_DAT_1423bc670 + 0x2b0,&puStack_658);
                            puVar24 = (undefined1 *)
                                      arrival_supplier_0x70450(&uStack_7a0,&uStack_81a,&puStack_658)
                            ;
                            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            while (cVar8 != '\0') {
                              puVar26 = (undefined8 *)arrival_supplier_0x70440(&uStack_7a0);
                              sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                              if (sVar38 == 9) {
                                plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7a0);
                                cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,1);
                                if (cVar8 == '\0') {
                                  plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7a0);
                                  cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,0);
                                  if (cVar8 == '\0') {
                                    plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7a0);
                                    cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,3);
                                    if (cVar8 == '\0') {
                                      plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7a0);
                                      cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,4);
                                      if (cVar8 != '\0') {
                                        arrival_supplier_0x70870(0x142410390,&uStack_710);
                                        arrival_supplier_0x70860(0x142410390,&puStack_660);
                                        puVar24 = (undefined1 *)
                                                  arrival_supplier_0x70450
                                                            (&uStack_710,&uStack_817,&puStack_660);
                                        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                        while (cVar8 != '\0') {
                                          plVar22 = (longlong *)
                                                    arrival_supplier_0x70440(&uStack_710);
                                          if (*(int *)(*plVar22 + 0x114) == _DAT_1423b5af4) {
                                            plVar22 = (longlong *)
                                                      arrival_supplier_0x70440(&uStack_710);
                                            lVar28 = *plVar22;
                                            plVar22 = (longlong *)
                                                      arrival_supplier_0x70440(&uStack_7a0);
                                            if (*(int *)(lVar28 + 0x118) == *(int *)(*plVar22 + 8))
                                            goto LAB_14010dce3;
                                          }
                                          arrival_supplier_0x70430(&uStack_710);
                                          puVar24 = (undefined1 *)
                                                    arrival_supplier_0x70450
                                                              (&uStack_710,&uStack_817,&puStack_660)
                                          ;
                                          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              arrival_supplier_0x70430(&uStack_7a0);
                              puVar24 = (undefined1 *)
                                        arrival_supplier_0x70450
                                                  (&uStack_7a0,&uStack_81a,&puStack_658);
                              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            }
                          case 1:
override_jmp_14010d74f_case_2:
                            iStack_858 = iStack_858 + -1;
                            if (iVar15 < iStack_858) {
                              asStack_58[lVar39] = asStack_58[iStack_858];
                            }
                            break;
                          case 2:
                            arrival_supplier_0x70870(_DAT_1423bc670 + 0x2b0,&uStack_7f0);
                            arrival_supplier_0x70860(_DAT_1423bc670 + 0x2b0,&puStack_668);
                            puVar24 = (undefined1 *)
                                      arrival_supplier_0x70450(&uStack_7f0,&uStack_816,&puStack_668)
                            ;
                            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            if (cVar8 != '\0') {
LAB_14010d7b0:
                              puVar26 = (undefined8 *)arrival_supplier_0x70440(&uStack_7f0);
                              sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                              if (sVar38 == 2) {
                                plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7f0);
                                cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,1);
                                if (cVar8 == '\0') {
                                  plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7f0);
                                  cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,0);
                                  if (cVar8 == '\0') {
                                    plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7f0);
                                    cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,3);
                                    if (cVar8 == '\0') {
                                      plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7f0);
                                      cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,4);
                                      if (cVar8 != '\0') {
                                        arrival_supplier_0x70870(0x142410390,&uStack_718);
                                        arrival_supplier_0x70860(0x142410390,auStack_690);
                                        puVar24 = (undefined1 *)
                                                  arrival_supplier_0x70450
                                                            (&uStack_718,auStack_814,auStack_690);
                                        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                        while (cVar8 != '\0') {
                                          plVar22 = (longlong *)
                                                    arrival_supplier_0x70440(&uStack_718);
                                          if (*(int *)(*plVar22 + 0x114) == _DAT_1423b5af4) {
                                            plVar22 = (longlong *)
                                                      arrival_supplier_0x70440(&uStack_718);
                                            lVar28 = *plVar22;
                                            plVar22 = (longlong *)
                                                      arrival_supplier_0x70440(&uStack_7f0);
                                            if (*(int *)(lVar28 + 0x118) == *(int *)(*plVar22 + 8))
                                            {
                                              plVar22 = (longlong *)
                                                        arrival_supplier_0x70440(&uStack_7f0);
                                              lVar28 = *plVar22;
                                              if (*(int *)(lVar28 + 0xb8) != -1) {
                                                arrival_supplier_0x70870(lVar23 + 0x2b0,&uStack_7d0)
                                                ;
                                                arrival_supplier_0x70860
                                                          (lVar23 + 0x2b0,&puStack_840);
                                                puVar24 = (undefined1 *)
                                                          arrival_supplier_0x70450
                                                                    (&uStack_7d0,&uStack_815,
                                                                     &puStack_840);
                                                cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                                goto joined_r0x00014010d96f;
                                              }
                                              break;
                                            }
                                          }
                                          arrival_supplier_0x70430(&uStack_718);
                                          puVar24 = (undefined1 *)
                                                    arrival_supplier_0x70450
                                                              (&uStack_718,auStack_814,auStack_690);
                                          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_14010da82;
                            }
LAB_14010dab1:
                            lVar28 = arrival_supplier_0x70480(&lStack_730);
                            if (lVar28 == 0) goto override_jmp_14010d74f_case_2;
                            break;
                          case 3:
                            goto override_jmp_14010d74f_case_1;
                          }
LAB_14010dce3:
                          iVar15 = iVar15 + -1;
                          lVar39 = lVar39 + -1;
                          puVar20 = puStack_850;
                          puVar26 = puStack_790;
                        } while (-1 < lVar39);
                      }
                      puVar29 = puStack_850;
                      if (0 < iStack_858) {
                        iVar15 = FUN_140073560();
                        sVar38 = asStack_58[iVar15];
                        if (*(longlong *)(puVar20[0x26] + 0x58) == 0) {
                          uStack_5f8 = FUN_1415530e0(0x60);
                          uVar27 = arrival_supplier_0xff620(uStack_5f8);
                          *(undefined8 *)(puVar20[0x26] + 0x58) = uVar27;
                        }
                        puVar25 = (undefined4 *)FUN_1400ffa30();
                        puVar25[0x24] = 3;
                        puVar25[0x23] = *puStack_838;
                        puVar25[0x20] = (int)*(short *)((longlong)puVar20 + 2);
                        *(undefined2 *)(puVar25 + 0x21) = *(undefined2 *)((longlong)puVar20 + 4);
                        iVar15 = arrival_supplier_0xc030b0(puVar20);
                        puVar25[0x25] = _DAT_142167754 - iVar15;
                        uVar17 = FUN_140073560(0x62700);
                        puVar25[0x26] = uVar17;
                        uStack_8c8 = CONCAT62(uStack_8c8._2_6_,
                                              *(undefined2 *)((longlong)puVar20 + 4));
                        arrival_supplier_0x14a03e0
                                  (0x1423f3970,puVar25 + 2,puVar26,
                                   *(undefined2 *)((longlong)puVar20 + 2));
                        puVar25[0x25] = *(undefined4 *)(puVar20 + 2);
                        puVar25[0x26] = *(undefined4 *)((longlong)puVar20 + 0x14);
                        *(short *)(puVar25 + 0x2b) = sVar38;
                        puVar25[0x2c] = *(undefined4 *)((longlong)puVar26 + 4);
                        if (sVar38 == 0x84) {
                          lVar23 = arrival_supplier_0x70480(&lStack_730);
                          if (lVar23 != 0) {
                            uVar27 = arrival_supplier_0x70480(&lStack_730);
                            iVar15 = FUN_140073560(uVar27);
                            plVar22 = (longlong *)
                                      arrival_supplier_0x70850(&lStack_730,(longlong)iVar15);
                            lVar23 = *plVar22;
                            puVar25[0x29] = *(undefined4 *)(lVar23 + 0xb8);
                            puVar25[0x2a] = *(undefined4 *)(lVar23 + 0xbc);
                            puVar25[0x28] = 0xffffffff;
                          }
                        }
                        else {
                          uVar17 = FUN_140970190(puVar26);
                          puVar25[0x28] = uVar17;
                        }
                        puVar29 = puStack_850;
                        *(undefined4 *)(*(longlong *)(puStack_850[0x26] + 0x58) + 0x30) = *puVar25;
                        FUN_1400bb4a0(*puVar25,*(longlong *)(puStack_850[0x26] + 0x58) + 0x38);
                        plVar22 = (longlong *)FUN_140105a90();
                        *(undefined4 *)(plVar22 + 5) = *(undefined4 *)(puVar29 + 0x1c);
                        *(undefined4 *)((longlong)plVar22 + 0x2c) = *puVar25;
                        *(int *)(plVar22 + 6) = _DAT_1423b5af8;
                        *(int *)(plVar22 + 1) = _DAT_142167754;
                        *(int *)((longlong)plVar22 + 0xc) = _DAT_1423aa348;
                        (**(code **)(*plVar22 + 0x128))(plVar22);
                        cStack_895 = '\x01';
                      }
                    }
                    FUN_1400681a0(auStack_550);
                    FUN_1400681a0(&lStack_730);
                    param_1 = puStack_838;
                    puVar20 = puVar29;
                  }
                }
              }
            }
LAB_14010e0f4:
            if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130) + 0xc) == -1) {
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130) + 8) = 0xffffffff
              ;
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130) + 0xc) = 0x3d;
              sVar38 = 0x66;
              if ((puVar20[0x26] != 0) && (lVar23 = *(longlong *)(puVar20[0x26] + 8), lVar23 != 0))
              {
                sVar38 = *(short *)(lVar23 + 0x60);
              }
              lVar23 = arrival_supplier_0xc272f0(puVar20);
              if (lVar23 != 0) {
                sVar38 = *(short *)(lVar23 + 0xac);
              }
              sVar12 = 8;
              if ((int)sVar38 - 0x3dU < 0x48) {
                    /* WARNING: Switch is manually overridden */
                switch((&UNK_140111968)[(int)((int)sVar38 - 0x3dU)]) {
                case 0:
                  sVar12 = 9;
                  break;
                case 1:
                  sVar12 = 2;
                }
              }
              iVar15 = 0;
              lVar39 = 0;
              arrival_supplier_0x70870(_DAT_1423bc670 + 0x2b0,&uStack_7e8);
              arrival_supplier_0x70860(_DAT_1423bc670 + 0x2b0,&puStack_740);
              puVar24 = (undefined1 *)arrival_supplier_0x70450(&uStack_7e8,&uStack_870,&puStack_740)
              ;
              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
              if (cVar8 != '\0') {
                do {
                  puVar26 = (undefined8 *)arrival_supplier_0x70440(&uStack_7e8);
                  sVar10 = (*(code *)**(undefined8 **)*puVar26)();
                  if (sVar10 == sVar12) {
                    if (((sVar38 == 0x84) && (sVar12 == 2)) && (lVar23 != 0)) {
                      plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                      if ((*(int *)(*plVar22 + 0xb8) != *(int *)(lVar23 + 0xa4)) ||
                         (*(int *)(*plVar22 + 0xbc) != *(int *)(lVar23 + 0xa8))) goto LAB_14010e3bb;
                    }
                    plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                    cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,1);
                    if (cVar8 == '\0') {
                      plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                      cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,0);
                      if (cVar8 == '\0') {
                        plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                        cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,3);
                        if (cVar8 == '\0') {
                          plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                          cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,4);
                          if (cVar8 != '\0') {
                            arrival_supplier_0x70870(0x142410390,auStack_7b8);
                            arrival_supplier_0x70860(0x142410390,auStack_6a8);
                            puVar24 = (undefined1 *)
                                      arrival_supplier_0x70450(auStack_7b8,auStack_86d,auStack_6a8);
                            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            while (cVar8 != '\0') {
                              plVar22 = (longlong *)arrival_supplier_0x70440(auStack_7b8);
                              if (*(int *)(*plVar22 + 0x114) == _DAT_1423b5af4) {
                                plVar22 = (longlong *)arrival_supplier_0x70440(auStack_7b8);
                                lVar28 = *plVar22;
                                plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                                if (*(int *)(lVar28 + 0x118) == *(int *)(*plVar22 + 8)) {
                                  plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7e8);
                                  alStack_378[lVar39] = *plVar22;
                                  iVar15 = iVar15 + 1;
                                  lVar39 = lVar39 + 1;
                                  if (0x31 < lVar39) goto LAB_14010e3eb;
                                  break;
                                }
                              }
                              arrival_supplier_0x70430(auStack_7b8);
                              puVar24 = (undefined1 *)
                                        arrival_supplier_0x70450
                                                  (auStack_7b8,auStack_86d,auStack_6a8);
                              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            }
                          }
                        }
                      }
                    }
                  }
LAB_14010e3bb:
                  arrival_supplier_0x70430(&uStack_7e8);
                  puVar24 = (undefined1 *)
                            arrival_supplier_0x70450(&uStack_7e8,&uStack_870,&puStack_740);
                  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                } while (cVar8 != '\0');
LAB_14010e3eb:
                puVar20 = puStack_850;
                if (0 < iVar15) {
                  iVar15 = FUN_140073560(iVar15);
                  *(undefined4 *)(*(longlong *)(*(longlong *)(puStack_838 + 0x18) + 0x130) + 8) =
                       *(undefined4 *)(alStack_378[iVar15] + 8);
                  if (sVar12 == 2) {
                    *(undefined4 *)(*(longlong *)(*(longlong *)(puStack_838 + 0x18) + 0x130) + 0xc)
                         = 0x3c;
                  }
                  else {
                    lVar23 = *(longlong *)(*(longlong *)(puStack_838 + 0x18) + 0x130);
                    if (sVar12 == 9) {
                      *(undefined4 *)(lVar23 + 0xc) = 0x2c;
                    }
                    else {
                      *(undefined4 *)(lVar23 + 0xc) = 0x3d;
                    }
                  }
                }
              }
              param_1 = puStack_838;
              if (*(int *)(*(longlong *)(*(longlong *)(puStack_838 + 0x18) + 0x130) + 8) == -1) {
                arrival_supplier_0x70870(_DAT_1423bc670 + 0x2b0,&uStack_7c8);
                arrival_supplier_0x70860(_DAT_1423bc670 + 0x2b0,&piStack_7a8);
                puVar24 = (undefined1 *)
                          arrival_supplier_0x70450(&uStack_7c8,&uStack_897,&piStack_7a8);
                cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                while (cVar8 != '\0') {
                  puVar26 = (undefined8 *)arrival_supplier_0x70440(&uStack_7c8);
                  sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                  if (sVar38 == 8) {
                    plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7c8);
                    cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,1);
                    if (cVar8 == '\0') {
                      plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7c8);
                      cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,0);
                      if (cVar8 == '\0') {
                        plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7c8);
                        cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,3);
                        if (cVar8 == '\0') {
                          plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7c8);
                          cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,4);
                          if (cVar8 != '\0') {
                            arrival_supplier_0x70870(0x142410390,&puStack_878);
                            arrival_supplier_0x70860(0x142410390,&puStack_7b0);
                            puVar24 = (undefined1 *)
                                      arrival_supplier_0x70450
                                                (&puStack_878,&uStack_896,&puStack_7b0);
                            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            while (cVar8 != '\0') {
                              plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_878);
                              if (*(int *)(*plVar22 + 0x114) == _DAT_1423b5af4) {
                                plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_878);
                                lVar23 = *plVar22;
                                plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7c8);
                                if (*(int *)(lVar23 + 0x118) == *(int *)(*plVar22 + 8)) {
                                  plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7c8);
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130) + 8) =
                                       *(undefined4 *)(*plVar22 + 8);
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130) + 0xc) =
                                       0x3d;
                                  break;
                                }
                              }
                              arrival_supplier_0x70430(&puStack_878);
                              puVar24 = (undefined1 *)
                                        arrival_supplier_0x70450
                                                  (&puStack_878,&uStack_896,&puStack_7b0);
                              cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                            }
                          }
                        }
                      }
                    }
                  }
                  arrival_supplier_0x70430(&uStack_7c8);
                  puVar24 = (undefined1 *)
                            arrival_supplier_0x70450(&uStack_7c8,&uStack_897,&piStack_7a8);
                  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                  puVar20 = puStack_850;
                }
              }
            }
            FUN_14013cc10(puStack_808);
            if (cStack_895 == '\0') goto LAB_14010e692;
          }
          *(uint *)((longlong)puStack_888 + 0x114) =
               *(uint *)((longlong)puStack_888 + 0x114) | 0x800000;
          *(uint *)(puStack_888 + 0x23) = *(uint *)(puStack_888 + 0x23) | 0x80000000;
        }
        puVar21 = (ushort *)0xffffffff;
        if (*(int *)(puStack_888 + 0x186) != -1) {
          FUN_1402c2e90(0x1423b36b0);
        }
        uVar40 = auStack_894[0];
        uVar19 = (uint)uStack_7f8;
        *(short *)(puStack_888 + 0x15) = (short)uStack_7f8;
        uVar41 = (uint)uStack_800;
        *(short *)((longlong)puStack_888 + 0xaa) = (short)uStack_800;
        *(ushort *)((longlong)puStack_888 + 0xac) = auStack_894[0];
        uStack_8c0 = CONCAT44(uStack_8c0._4_4_,0xffffffff);
        uStack_8c8 = CONCAT62(uStack_8c8._2_6_,3);
        FUN_141391170(puStack_888,*(undefined2 *)(puStack_888 + 0x15),
                      *(undefined2 *)((longlong)puStack_888 + 0xaa),auStack_894[0]);
        FUN_14140d570(puStack_888,0);
        *(undefined4 *)(puStack_888 + 0x69) = 0xffffffff;
        *(undefined4 *)(puStack_888 + 0x7a) = 0xffffffff;
        uVar11 = FUN_140f9b330(_DAT_14250dfd8,uVar19 & 0xffff,uVar41 & 0xffff,uVar40);
        uStack_8c8 = CONCAT71(uStack_8c8._1_7_,1);
        FUN_141395210(puStack_888,uVar11,1);
        arrival_supplier_0x1394d40(puStack_888);
        arrival_supplier_0xbafb0(&uStack_768,&puStack_888);
        puVar26 = puStack_788;
      }
      else {
        uVar41 = (uint)uStack_800;
      }
    }
    iVar15 = (int)puStack_848;
  }
  arrival_supplier_0x67130(auStack_5e8);
  arrival_supplier_0x67130(auStack_590);
  arrival_supplier_0x67130(auStack_5a8);
  arrival_supplier_0x70870(param_1 + 0xe,auStack_738);
  arrival_supplier_0x70860(param_1 + 0xe,auStack_5f0);
  puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_738,&uStack_896,auStack_5f0);
  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
  while (cVar8 != '\0') {
    puVar26 = (undefined8 *)arrival_supplier_0x70440(auStack_738);
    piVar35 = (int *)*puVar26;
    iVar15 = 0;
    if (0 < *piVar35) {
      uVar34 = uStack_7f8 & 0xffffffff;
      puVar21 = (ushort *)(ulonglong)auStack_894[0];
      do {
        uStack_890 = FUN_141392270();
        FUN_14139af30(uStack_890,(short)piVar35[1],0xffffffff,0);
        FUN_14139ada0(uStack_890);
        *(int *)(uStack_890 + 0x144) = piVar35[2];
        *(int *)(uStack_890 + 0x148) = piVar35[4];
        *(int *)(uStack_890 + 0x14c) = piVar35[5];
        *(uint *)(uStack_890 + 0x114) = *(uint *)(uStack_890 + 0x114) | 4;
        FUN_141342680(uStack_890,1,0);
        FUN_14134e000(uStack_890,1,0,0);
        *(uint *)(uStack_890 + 0x114) = *(uint *)(uStack_890 + 0x114) & 0xfffffffb;
        *(uint *)(uStack_890 + 0x110) = *(uint *)(uStack_890 + 0x110) | 0x4000000;
        *(undefined4 *)(uStack_890 + 0x138) = 7;
        FUN_140074e10(uStack_890,0x32,0x189c0);
        *(int *)(uStack_890 + 0x140) = _DAT_1423b5af0;
        FUN_1413a29c0(uStack_890);
        FUN_1414069a0(uStack_890,piVar35 + 1);
        *(undefined4 *)(uStack_890 + 0x348) = 0xffffffff;
        *(short *)(uStack_890 + 0xa8) = (short)uVar34;
        *(short *)(uStack_890 + 0xaa) = (short)uVar41;
        *(short *)(uStack_890 + 0xac) = (short)puVar21;
        uStack_8c0 = CONCAT44(uStack_8c0._4_4_,0xffffffff);
        uStack_8c8 = CONCAT62(uStack_8c8._2_6_,3);
        FUN_141391170(uStack_890,*(undefined2 *)(uStack_890 + 0xa8),
                      *(undefined2 *)(uStack_890 + 0xaa),puVar21);
        uVar11 = FUN_140f9b330(_DAT_14250dfd8,uVar34 & 0xffff,uVar41 & 0xffff,puVar21);
        uStack_8c8 = CONCAT71(uStack_8c8._1_7_,1);
        FUN_141395210(uStack_890,uVar11,1);
        arrival_supplier_0x1394d40(uStack_890);
        plVar22 = (longlong *)arrival_supplier_0x70440(auStack_738);
        if (*(int *)(*plVar22 + 0x18) != -1) {
          plVar22 = (longlong *)arrival_supplier_0x70440(auStack_738);
          plVar22 = (longlong *)
                    arrival_supplier_0x70850(0x142519948,(longlong)*(int *)(*plVar22 + 0x18));
          lVar23 = *plVar22;
          plVar22 = (longlong *)arrival_supplier_0x70440(auStack_738);
          puVar26 = (undefined8 *)
                    arrival_supplier_0x70850(lVar23 + 0x80,(longlong)*(int *)(*plVar22 + 0x1c));
          plVar22 = (longlong *)*puVar26;
          pcVar2 = *(code **)(*plVar22 + 0x20);
          puVar26 = (undefined8 *)arrival_supplier_0xbb1a0(&uStack_608,0);
          uVar27 = *puVar26;
          puVar30 = (ulonglong *)arrival_supplier_0xbb1a0(&uStack_610,0);
          uStack_8c8 = *puVar30;
          uStack_8c0 = uVar27;
          (*pcVar2)(plVar22,uStack_890,0);
          uVar34 = uStack_7f8 & 0xffffffff;
          puVar21 = (ushort *)(ulonglong)auStack_894[0];
        }
        FUN_14136b830(uStack_890,0,1);
        *(undefined4 *)(uStack_890 + 0x3d0) = 0xffffffff;
        FUN_14140d570(uStack_890,0);
        arrival_supplier_0xbafb0(&uStack_768,&uStack_890);
        arrival_supplier_0x70870(auStack_5e8,&puStack_878);
        arrival_supplier_0x70860(auStack_5e8,&puStack_840);
        arrival_supplier_0x70870(auStack_590,&puStack_848);
        arrival_supplier_0x70870(auStack_5a8,&puStack_808);
        puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_840);
        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        while (cVar8 != '\0') {
          piVar31 = (int *)arrival_supplier_0x70440(&puStack_878);
          if ((*piVar31 == *(int *)(uStack_890 + 0xa4)) &&
             (piVar31 = (int *)arrival_supplier_0x70440(&puStack_848),
             *piVar31 == (int)*(short *)(uStack_890 + 300))) {
            piVar31 = (int *)arrival_supplier_0x70440(&puStack_808);
            *piVar31 = *piVar31 + 1;
            break;
          }
          arrival_supplier_0x70980(&puStack_878);
          arrival_supplier_0x70980(&puStack_848);
          arrival_supplier_0x70980(&puStack_808);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_840);
          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        }
        puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_818,&puStack_840);
        cVar8 = arrival_supplier_0x73490(*puVar24,0);
        if (cVar8 != '\0') {
          arrival_supplier_0x70a40(auStack_5e8,uStack_890 + 0xa4);
          iStack_854 = (int)*(short *)(uStack_890 + 300);
          arrival_supplier_0x70a40(auStack_590,&iStack_854);
          iStack_858 = 1;
          arrival_supplier_0x70a40(auStack_5a8,&iStack_858);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *piVar35);
    }
    arrival_supplier_0x70430(auStack_738);
    puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_738,&uStack_896,auStack_5f0);
    cVar8 = arrival_supplier_0x66de0(*puVar24,0);
  }
  bVar43 = false;
  iVar15 = -1;
  if (cStack_898 == '\0') {
    iStack_858 = -3;
    arrival_supplier_0x70870(&uStack_768,&puStack_860);
    arrival_supplier_0x70860(&uStack_768,&puStack_808);
    puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_860,&uStack_896,&puStack_808);
    cVar8 = arrival_supplier_0x66de0(*puVar24,0);
    iVar15 = -3;
    iVar16 = iStack_858;
    while (cVar8 != '\0') {
      puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_860);
      lVar23 = arrival_supplier_0x13cc070(*puVar26);
      iVar16 = iVar15;
      if (lVar23 != 0) {
        puVar21 = (ushort *)0xffffffff;
        arrival_supplier_0x70870(lVar23 + 0xe8,&puStack_878);
        arrival_supplier_0x70860(lVar23 + 0xe8,&puStack_848);
        puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_848);
        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        while (cVar8 != '\0') {
          puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_878);
          sVar38 = (*(code *)**(undefined8 **)*puVar26)();
          if (sVar38 == 0) {
            plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_878);
            psVar33 = (short *)arrival_supplier_0x7f120
                                         (&DAT_1423f3c78,*(undefined4 *)(*plVar22 + 8));
            if ((psVar33 != (short *)0x0) && (*psVar33 == 8)) {
              puVar21 = (ushort *)(ulonglong)*(uint *)(psVar33 + 2);
              break;
            }
          }
          arrival_supplier_0x70430(&puStack_878);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_848);
          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        }
        iVar16 = (int)puVar21;
        if ((iVar15 != -3) && (bVar43 = iVar15 != iVar16, iVar16 = iVar15, bVar43)) {
          iVar16 = -2;
        }
      }
      arrival_supplier_0x70430(&puStack_860);
      puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_860,&uStack_896,&puStack_808);
      cVar8 = arrival_supplier_0x66de0(*puVar24,0);
      iVar15 = iVar16;
    }
    iStack_858 = iVar16;
    cVar8 = arrival_supplier_0x7f460(0x1423b3120,0x12d,_DAT_1418be238);
    if (cVar8 != '\0') {
      lVar23 = arrival_supplier_0x70480(&uStack_768);
      if (lVar23 == 1) {
        arrival_supplier_0x70cc0(asStack_58);
        arrival_supplier_0x70cc0(auStack_550);
        puVar26 = (undefined8 *)arrival_supplier_0x70850(&uStack_768,0);
        arrival_visitor_identity(*puVar26,auStack_550,0);
        arrival_supplier_0xbb340(asStack_58,auStack_550);
        puVar26 = (undefined8 *)arrival_supplier_0x70850(&uStack_768,0);
        lVar23 = arrival_supplier_0x13cc070(*puVar26);
        if (((lVar23 == 0) || (*(longlong *)(lVar23 + 0x130) == 0)) ||
           ((psVar33 = *(short **)(*(longlong *)(lVar23 + 0x130) + 0x28), psVar33 == (short *)0x0 ||
            (pcVar36 = " has arrived.", *psVar33 != 1)))) {
          pcVar36 = " is visiting.";
        }
        arrival_supplier_0x70b90(asStack_58,pcVar36);
        arrival_supplier_0x7f210(&uStack_6f8);
        uStack_6f8 = 0x2012d;
        uStack_6f4 = 1;
        uStack_6dc = 2000;
        uStack_6f2 = (undefined2)uStack_7f8;
        puVar21 = (ushort *)(uStack_800 & 0xffffffff);
        uStack_6f0 = (undefined2)uStack_800;
        uStack_6ee = auStack_894[0];
        FUN_1400e5250(0x142505cd0,asStack_58,&uStack_6f8);
        arrival_supplier_0x69460(auStack_550);
        arrival_supplier_0x69460(asStack_58);
      }
      else {
        uVar34 = arrival_supplier_0x70480(&uStack_768);
        if (1 < uVar34) {
          if (iVar15 < 0) {
            arrival_supplier_0x70870(&uStack_768,&puStack_878);
            arrival_supplier_0x70860(&uStack_768,&puStack_848);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_848);
            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
            uVar7 = uStack_7f8;
            uVar34 = uStack_800;
            uVar40 = auStack_894[0];
            if (cVar8 != '\0') {
              puVar21 = (ushort *)(uStack_800 & 0xffffffff);
              do {
                arrival_supplier_0x70cc0(asStack_58);
                arrival_supplier_0x70cc0(auStack_550);
                puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_878);
                arrival_visitor_identity(*puVar26,auStack_550,0);
                arrival_supplier_0xbb340(asStack_58,auStack_550);
                puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_878);
                lVar23 = arrival_supplier_0x13cc070(*puVar26);
                if ((((lVar23 == 0) || (*(longlong *)(lVar23 + 0x130) == 0)) ||
                    (psVar33 = *(short **)(*(longlong *)(lVar23 + 0x130) + 0x28),
                    psVar33 == (short *)0x0)) || (pcVar36 = " has arrived.", *psVar33 != 1)) {
                  pcVar36 = " is visiting.";
                }
                arrival_supplier_0x70b90(asStack_58,pcVar36);
                arrival_supplier_0x7f210(&uStack_6f8);
                uStack_6f8 = 0x2012d;
                uStack_6f4 = 1;
                uStack_6dc = 2000;
                uStack_6f2 = (undefined2)uVar7;
                uStack_6f0 = (undefined2)uVar34;
                uStack_6ee = uVar40;
                FUN_1400e5250(0x142505cd0,asStack_58,&uStack_6f8);
                arrival_supplier_0x69460(auStack_550);
                arrival_supplier_0x69460(asStack_58);
                arrival_supplier_0x70430(&puStack_878);
                puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_878,&uStack_897);
                cVar8 = arrival_supplier_0x66de0(*puVar24,0);
              } while (cVar8 != '\0');
            }
          }
          else {
            arrival_supplier_0x70cc0(asStack_58);
            arrival_troupe_name(0x14251c138,asStack_58,iVar15,0);
            puVar26 = (undefined8 *)arrival_supplier_0x70850(&uStack_768,0);
            lVar23 = arrival_supplier_0x13cc070(*puVar26);
            if (((lVar23 == 0) || (*(longlong *)(lVar23 + 0x130) == 0)) ||
               ((psVar33 = *(short **)(*(longlong *)(lVar23 + 0x130) + 0x28),
                psVar33 == (short *)0x0 ||
                (pcVar36 = ", the performance troupe, has arrived.", *psVar33 != 1)))) {
              pcVar36 = ", a performance troupe, is visiting.";
            }
            arrival_supplier_0x70b90(asStack_58,pcVar36);
            arrival_supplier_0x7f210(&uStack_6f8);
            uStack_6f8 = 0x2012d;
            uStack_6f4 = 1;
            uStack_6dc = 2000;
            uStack_6f2 = (undefined2)uStack_7f8;
            puVar21 = (ushort *)(uStack_800 & 0xffffffff);
            uStack_6f0 = (undefined2)uStack_800;
            uStack_6ee = auStack_894[0];
            FUN_1400e5250(0x142505cd0,asStack_58,&uStack_6f8);
            arrival_supplier_0x69460(asStack_58);
          }
        }
      }
    }
    bVar43 = false;
    iVar15 = -1;
    iVar16 = -1;
    uVar34 = (ulonglong)puVar21 & 0xffffffffffffff00;
    uStack_890 = CONCAT44(uStack_890._4_4_,(int)uVar34);
    puVar26 = (undefined8 *)FUN_14007f150(_DAT_14250dfd8,_DAT_1423b5af4);
    puStack_888 = puVar26;
    arrival_supplier_0x70870(puVar26 + 0x56,&puStack_830);
    arrival_supplier_0x70860(puVar26 + 0x56,&piStack_7a8);
    puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_830,&uStack_897,&piStack_7a8);
    cVar8 = arrival_supplier_0x66de0(*puVar24,0);
    if (cVar8 != '\0') {
      do {
        puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_830);
        sVar38 = (*(code *)**(undefined8 **)*puVar26)();
        uVar34 = uVar34 & 0xff;
        if (sVar38 == 8) {
          uVar34 = 1;
        }
        arrival_supplier_0x70430(&puStack_830);
        puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_830,&uStack_897,&piStack_7a8);
        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
      } while (cVar8 != '\0');
      uStack_890 = CONCAT44(uStack_890._4_4_,(int)uVar34);
      puVar26 = puStack_888;
    }
    puVar25 = puStack_838;
    cVar8 = '\0';
    cStack_898 = '\0';
    cVar9 = '\0';
    acStack_87f[0] = '\0';
    cStack_895 = '\0';
    cStack_880 = '\0';
    iStack_854 = -1;
    if (*(longlong *)(puStack_838 + 0x18) != 0) {
      iVar16 = arrival_supplier_0x76740();
      if (iVar16 == 0x18) {
        cVar9 = '\x01';
        acStack_87f[0] = '\x01';
        iVar15 = *(int *)(*(longlong *)(*(longlong *)(puVar25 + 0x18) + 0x130) + 0xc);
        iStack_854 = *(int *)(*(longlong *)(*(longlong *)(puVar25 + 0x18) + 0x130) + 8);
        if (iVar15 == -1) {
          iVar15 = 0x3d;
        }
      }
      cStack_895 = cVar9;
      iVar18 = arrival_supplier_0x76740(*(undefined8 *)(puVar25 + 0x18));
      iVar16 = iVar15;
      if ((iVar18 == 0x11) &&
         (cStack_895 = cVar9,
         (*(byte *)(*(longlong *)(*(longlong *)(puVar25 + 0x18) + 0x130) + 0xc) & 1) == 0)) {
        if (cStack_86f == '\0') {
          iVar16 = 0x4a;
        }
        cStack_895 = '\x01';
        cStack_880 = cStack_86f;
      }
      iVar15 = arrival_supplier_0x76740(*(undefined8 *)(puVar25 + 0x18));
      if (iVar15 == 0xc) {
        iVar16 = *(int *)(*(longlong *)(*(longlong *)(puVar25 + 0x18) + 0x130) + 0x34);
        iStack_854 = *(int *)(*(longlong *)(*(longlong *)(puVar25 + 0x18) + 0x130) + 0x30);
      }
    }
    arrival_supplier_0x70870(&uStack_768,auStack_810);
    arrival_supplier_0x70860(&uStack_768,&uStack_670);
    puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_810,&uStack_86e,&uStack_670);
    cVar9 = arrival_supplier_0x66de0(*puVar24,0);
    if (cVar9 != '\0') {
      puStack_700 = puVar26 + 0x56;
      do {
        puVar20 = puStack_700;
        cVar9 = (char)uVar34;
        plVar22 = (longlong *)arrival_supplier_0x70440(auStack_810);
        lVar23 = *plVar22;
        lStack_618 = lVar23;
        lVar39 = arrival_supplier_0x13cc070(lVar23);
        if (lVar39 == 0) goto LAB_140110fc4;
        if (*(longlong *)(lVar23 + 0x1268) == 0) {
          uStack_608 = FUN_1415530e0(0x38);
          uVar27 = FUN_1400ff260(uStack_608);
          *(undefined8 *)(lVar23 + 0x1268) = uVar27;
        }
        else {
          FUN_1400ff2b0();
        }
        *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x1c) = _DAT_142167754;
        *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x20) = _DAT_1423aa348 + 0x31380;
        if (0x626ff < *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x20)) {
          piVar35 = (int *)(*(longlong *)(lVar23 + 0x1268) + 0x1c);
          *piVar35 = *piVar35 + 1;
          piVar35 = (int *)(*(longlong *)(lVar23 + 0x1268) + 0x20);
          *piVar35 = *piVar35 + -0x62700;
        }
        if (cStack_895 != '\0') {
          *(undefined8 *)(lVar23 + 0x1208) = *(undefined8 *)(puStack_838 + 0x18);
          *(undefined4 *)(lVar23 + 0x1200) = **(undefined4 **)(puStack_838 + 0x18);
        }
        *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x2c) = iVar16;
        *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x30) = iStack_854;
        if (cStack_880 != '\0') {
          uStack_610 = FUN_1415530e0(0x24);
          puStack_848 = (ushort *)arrival_supplier_0xff230(uStack_610);
          puStack_848[0] = 8;
          puStack_848[1] = 0;
          if (cVar8 == '\0') {
            *(undefined4 *)(puStack_848 + 0xe) = *(undefined4 *)(lVar23 + 0x130);
            cStack_898 = '\x01';
            *(uint *)(lVar23 + 0x110) = *(uint *)(lVar23 + 0x110) | 0x800;
            *(undefined1 *)(lVar23 + 0x120) = 0;
            arrival_supplier_0xe7dda0((undefined1 *)(lVar23 + 0x120),_DAT_1423b5af8);
          }
          arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_848);
        }
        if (acStack_87f[0] == '\0') {
          bVar43 = false;
          if (puStack_888 != (undefined8 *)0x0) {
            arrival_supplier_0x67130(&lStack_730);
            arrival_supplier_0x70870(puVar20,auStack_7b8);
            arrival_supplier_0x70860(puVar20,auStack_648);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_7b8,&uStack_870,auStack_648);
            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
            bVar43 = false;
            if (cVar8 != '\0') {
              do {
                puVar26 = (undefined8 *)arrival_supplier_0x70440(auStack_7b8);
                sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                if (sVar38 == 2) {
                  puVar26 = (undefined8 *)arrival_supplier_0x70440(auStack_7b8);
                  puVar25 = (undefined4 *)*puVar26;
                  if (puVar25[0x2e] != -1) {
                    bVar4 = false;
                    arrival_supplier_0x70870(lVar39 + 0xe8,&puStack_878);
                    arrival_supplier_0x70860(lVar39 + 0xe8,&puStack_740);
                    puVar24 = (undefined1 *)
                              arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_740);
                    cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                    if (cVar8 != '\0') {
                      do {
                        puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_878);
                        sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                        if (sVar38 == 0) {
                          plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_878);
                          psVar33 = (short *)arrival_supplier_0x7f120
                                                       (&DAT_1423f3c78,*(undefined4 *)(*plVar22 + 8)
                                                       );
                          if ((psVar33 != (short *)0x0) && (*psVar33 == 5)) {
                            bVar4 = true;
                            if ((puVar25[0x2e] == 1) &&
                               (bVar4 = true, puVar25[0x2f] == *(int *)(psVar33 + 2)))
                            goto LAB_140110a9a;
                          }
                        }
                        arrival_supplier_0x70430(&puStack_878);
                        puVar24 = (undefined1 *)
                                  arrival_supplier_0x70450(&puStack_878,&uStack_897,&puStack_740);
                        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                      } while (cVar8 != '\0');
                      if (bVar4) goto LAB_140110ab4;
                    }
                    if (puVar25[0x2e] == 0) {
                      arrival_supplier_0x70870(lVar39 + 0x118,&puStack_868);
                      arrival_supplier_0x70860(lVar39 + 0x118,auStack_6a8);
                      puVar24 = (undefined1 *)
                                arrival_supplier_0x70450(&puStack_868,&uStack_896,auStack_6a8);
                      cVar8 = arrival_supplier_0x66de0(*puVar24,0);
                      if (cVar8 != '\0') {
LAB_140110a12:
                        puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_868);
                        sVar38 = (*(code *)**(undefined8 **)*puVar26)();
                        if (((sVar38 != 4) ||
                            (plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868),
                            *(int *)(*plVar22 + 8) != puVar25[0x2f])) ||
                           (plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868),
                           *(short *)(*plVar22 + 0xc) < 0x4b)) goto LAB_140110a53;
                        plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868);
                        if (0x59 < *(short *)(*plVar22 + 0xc)) {
                          bVar43 = true;
                        }
LAB_140110a9a:
                        puStack_698 = puVar25;
                        arrival_supplier_0xbafb0(&lStack_730,&puStack_698);
                      }
                    }
                  }
                }
LAB_140110ab4:
                arrival_supplier_0x70430(auStack_7b8);
                puVar24 = (undefined1 *)
                          arrival_supplier_0x70450(auStack_7b8,&uStack_870,auStack_648);
                cVar8 = arrival_supplier_0x66de0(*puVar24,0);
              } while (cVar8 != '\0');
              cVar9 = (char)uStack_890;
              lVar23 = lStack_618;
            }
            lVar28 = arrival_supplier_0x70480(&lStack_730);
            if (lVar28 != 0) {
              uVar27 = arrival_supplier_0x70480(&lStack_730);
              iVar15 = FUN_140073560(uVar27);
              uStack_7c8 = FUN_1415530e0(0x24);
              puStack_748 = (undefined4 *)arrival_supplier_0xff230(uStack_7c8);
              *puStack_748 = 0;
              puStack_748[1] = *(undefined4 *)(puStack_888 + 0x11);
              plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_730,(longlong)iVar15);
              puStack_748[2] = *(undefined4 *)(*plVar22 + 8);
              arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_748);
            }
            FUN_1400681a0(&lStack_730);
          }
          iVar15 = iStack_858;
          if (iVar16 != 0x4a) {
            if (iVar16 == 0x29) {
              if ((!bVar43) && (cVar9 != '\0')) {
                puStack_850 = (undefined8 *)FUN_1415530e0(0x24);
                puStack_630 = (undefined4 *)arrival_supplier_0xff230(puStack_850);
                *puStack_630 = 2;
                arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_630);
              }
              uStack_7e8 = FUN_1415530e0(0x24);
              puStack_650 = (undefined4 *)arrival_supplier_0xff230(uStack_7e8);
              *puStack_650 = 4;
              puStack_650[7] = *(undefined4 *)(lVar23 + 0x130);
              ppuVar37 = &puStack_650;
            }
            else if (iVar16 == 0x37) {
              uStack_7f0 = FUN_1415530e0(0x24);
              puStack_658 = (undefined4 *)arrival_supplier_0xff230(uStack_7f0);
              *puStack_658 = 6;
              puStack_658[7] = *(undefined4 *)(lVar23 + 0x130);
              ppuVar37 = &puStack_658;
            }
            else if (iVar16 == 0x38) {
              uVar34 = FUN_1415530e0(0x24);
              if (-1 < iVar15) {
                uStack_7f8 = uVar34;
                puStack_750 = (undefined4 *)arrival_supplier_0xff230(uVar34);
                *puStack_750 = 5;
                if (cStack_898 == '\0') {
                  puStack_750[7] = *(undefined4 *)(lVar23 + 0x130);
                  cStack_898 = '\x01';
                }
                cVar8 = cStack_898;
                puStack_750[8] = iVar15;
                arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_750);
                puVar26 = puStack_888;
                goto LAB_140110fc4;
              }
              uStack_800 = uVar34;
              puStack_660 = (undefined4 *)arrival_supplier_0xff230(uVar34);
              *puStack_660 = 5;
              puStack_660[7] = *(undefined4 *)(lVar23 + 0x130);
              ppuVar37 = &puStack_660;
            }
            else {
              if (iVar16 != 0x39) goto LAB_140110bd4;
              uStack_578 = FUN_1415530e0(0x24);
              puStack_668 = (undefined4 *)arrival_supplier_0xff230(uStack_578);
              *puStack_668 = 7;
              puStack_668[7] = *(undefined4 *)(lVar23 + 0x130);
              ppuVar37 = &puStack_668;
            }
            goto LAB_140110fae;
          }
          uStack_7d0 = FUN_1415530e0(0x24);
          puStack_628 = (undefined4 *)arrival_supplier_0xff230(uStack_7d0);
          *puStack_628 = 10;
          arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_628);
LAB_140110bd4:
          if ((bVar43) && (iVar15 = FUN_140073560(2), iVar15 == 0))
          goto override_jmp_140110ce7_case_1;
          arrival_supplier_0x70870(lVar39 + 0xe8,auStack_7c0);
          arrival_supplier_0x70860(lVar39 + 0xe8,auStack_690);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_7c0,auStack_86d,auStack_690);
          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
          iVar15 = iStack_858;
          while (iStack_858 = iVar15, cVar8 != '\0') {
            puVar26 = (undefined8 *)arrival_supplier_0x70440(auStack_7c0);
            sVar38 = (*(code *)**(undefined8 **)*puVar26)();
            if (sVar38 == 0) {
              plVar22 = (longlong *)arrival_supplier_0x70440(auStack_7c0);
              psVar33 = (short *)arrival_supplier_0x7f120
                                           (&DAT_1423f3c78,*(undefined4 *)(*plVar22 + 8));
              if ((psVar33 != (short *)0x0) && (*psVar33 == 4)) goto LAB_140110f84;
            }
            arrival_supplier_0x70430(auStack_7c0);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_7c0,auStack_86d,auStack_690);
            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
            iVar15 = iStack_858;
          }
          if ((*(longlong *)(lVar39 + 0x130) == 0) ||
             (lVar39 = *(longlong *)(*(longlong *)(lVar39 + 0x130) + 8), lVar39 == 0)) {
LAB_140110f84:
            uStack_5b8 = FUN_1415530e0(0x24);
            puVar25 = (undefined4 *)arrival_supplier_0xff230(uStack_5b8);
            ppuVar37 = &puStack_708;
            puStack_708 = puVar25;
LAB_140110fac:
            *puVar25 = 2;
            goto LAB_140110fae;
          }
          uVar19 = (int)*(short *)(lVar39 + 0x60) - 0x3d;
          if (uVar19 < 0x40) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140111a10)[(int)uVar19]) {
            case 0:
              uStack_558 = FUN_1415530e0(0x24);
              puStack_640 = (undefined4 *)arrival_supplier_0xff230(uStack_558);
              *puStack_640 = 1;
              ppuVar37 = &puStack_640;
              break;
            case 1:
              uStack_570 = FUN_1415530e0(0x24);
              puVar25 = (undefined4 *)arrival_supplier_0xff230(uStack_570);
              ppuVar37 = &puStack_638;
              puStack_638 = puVar25;
              goto LAB_140110fac;
            case 2:
              uVar27 = FUN_1415530e0(0x24);
              if (iVar15 < 0) {
                uStack_560 = uVar27;
                puStack_620 = (undefined4 *)arrival_supplier_0xff230(uVar27);
                *puStack_620 = 3;
                ppuVar37 = &puStack_620;
              }
              else {
                uStack_568 = uVar27;
                puStack_6a0 = (undefined4 *)arrival_supplier_0xff230(uVar27);
                *puStack_6a0 = 3;
                puStack_6a0[8] = iVar15;
                ppuVar37 = &puStack_6a0;
              }
              break;
            case 3:
              goto override_jmp_140110ce7_case_1;
            }
LAB_140110fae:
            arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),ppuVar37);
          }
override_jmp_140110ce7_case_1:
          puVar26 = puStack_888;
          cVar8 = cStack_898;
          goto LAB_140110fc4;
        }
        sVar38 = 0x66;
        if ((*(longlong *)(lVar39 + 0x130) != 0) &&
           (lVar28 = *(longlong *)(*(longlong *)(lVar39 + 0x130) + 8), lVar28 != 0)) {
          sVar38 = *(short *)(lVar28 + 0x60);
        }
        lVar39 = arrival_supplier_0xc272f0(lVar39);
        if (lVar39 != 0) {
          sVar38 = *(short *)(lVar39 + 0xac);
        }
        if (sVar38 == 0x84) {
          arrival_supplier_0x67130(&uStack_780);
          arrival_supplier_0x70870(puVar20,auStack_828);
          arrival_supplier_0x70860(puVar20,&puStack_7b0);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_828,&cStack_86f,&puStack_7b0);
          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
          while (cVar8 != '\0') {
            puVar20 = (undefined8 *)arrival_supplier_0x70440(auStack_828);
            sVar12 = (*(code *)**(undefined8 **)*puVar20)();
            if (sVar12 == 2) {
              plVar22 = (longlong *)arrival_supplier_0x70440(auStack_828);
              iVar15 = *(int *)(*plVar22 + 0xb8);
              if ((iVar15 != -1) &&
                 ((lVar39 == 0 ||
                  ((iVar15 == *(int *)(lVar39 + 0xa4) &&
                   (*(int *)(*plVar22 + 0xbc) == *(int *)(lVar39 + 0xa8))))))) {
                uVar27 = arrival_supplier_0x70440(auStack_828);
                arrival_supplier_0xbafb0(&uStack_780,uVar27);
              }
            }
            arrival_supplier_0x70430(auStack_828);
            puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_828,&cStack_86f,&puStack_7b0);
            cVar8 = arrival_supplier_0x66de0(*puVar24,0);
          }
          lVar39 = arrival_supplier_0x70480(&uStack_780);
          if (lVar39 != 0) {
            uVar27 = arrival_supplier_0x70480(&uStack_780);
            iVar15 = FUN_140073560(uVar27);
            uStack_5f8 = FUN_1415530e0(0x24);
            puStack_840 = (undefined8 *)arrival_supplier_0xff230(uStack_5f8);
            *(undefined4 *)puStack_840 = 0;
            *(undefined4 *)((longlong)puStack_840 + 4) = *(undefined4 *)(puVar26 + 0x11);
            plVar22 = (longlong *)arrival_supplier_0x70850(&uStack_780,(longlong)iVar15);
            *(undefined4 *)(puStack_840 + 1) = *(undefined4 *)(*plVar22 + 8);
            arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_840);
          }
          FUN_1400681a0(&uStack_780);
        }
        if ((int)sVar38 - 0x3dU < 0x40) {
                    /* WARNING: Switch is manually overridden */
          switch((&UNK_1401119c0)[(int)((int)sVar38 - 0x3dU)]) {
          case 0:
            uStack_718 = FUN_1415530e0(0x24);
            puStack_790 = (undefined8 *)arrival_supplier_0xff230(uStack_718);
            *(undefined4 *)puStack_790 = 1;
            arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_790);
            cVar8 = cStack_898;
            break;
          case 1:
            goto override_jmp_14011078f_case_1;
          case 2:
            uStack_710 = FUN_1415530e0(0x24);
            puStack_788 = (undefined8 *)arrival_supplier_0xff230(uStack_710);
            *(undefined4 *)puStack_788 = 3;
            arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_788);
            cVar8 = cStack_898;
          }
        }
        else {
override_jmp_14011078f_case_1:
          uStack_7a0 = FUN_1415530e0(0x24);
          puStack_600 = (undefined4 *)arrival_supplier_0xff230(uStack_7a0);
          *puStack_600 = 2;
          arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_600);
          cVar8 = cStack_898;
        }
LAB_140110fc4:
        arrival_supplier_0x70430(auStack_810);
        puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_810,&uStack_86e,&uStack_670);
        cVar9 = arrival_supplier_0x66de0(*puVar24,0);
        uVar34 = uStack_890 & 0xffffffff;
      } while (cVar9 != '\0');
      bVar43 = false;
      puVar25 = puStack_838;
    }
  }
  else {
    arrival_supplier_0x70870(&lStack_5d0,&puStack_868);
    arrival_supplier_0x70860(&lStack_5d0,&puStack_808);
    puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_868,&uStack_897,&puStack_808);
    cVar8 = arrival_supplier_0x66de0(*puVar24,0);
    while (cVar8 != '\0') {
      plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868);
      if (*(int *)(*plVar22 + 0x58) != -1) {
        plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868);
        lVar23 = FUN_140073ba0(0x14250a288,*(undefined4 *)(*plVar22 + 0x58));
        if (lVar23 != 0) {
          if (*(longlong *)(lVar23 + 0x128) != 0) {
            _DAT_142505d60 = _DAT_142505d60 | 8;
            arrival_supplier_0xbafb0(0x142505d88,lVar23 + 0x128);
            iVar16 = -1;
            uVar27 = *(undefined8 *)(lVar23 + 0x128);
            arrival_supplier_0x70870(uVar27,&puStack_860);
            arrival_supplier_0x70860(uVar27,&puStack_848);
            cVar8 = arrival_supplier_0xbafa0(&puStack_860,&puStack_848);
            if (cVar8 == '\0') {
              do {
                plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_860);
                iVar18 = 0;
                piVar35 = (int *)(*plVar22 + 0x404);
                do {
                  if ((0 < *piVar35) && (bVar43 = iVar16 != -1, iVar16 = *piVar35, bVar43)) {
                    iVar16 = -2;
                    goto LAB_14010efc7;
                  }
                  iVar18 = iVar18 + 1;
                  piVar35 = piVar35 + 1;
                } while (iVar18 < 0x40);
                if (iVar16 == -1) break;
LAB_14010efc7:
                arrival_supplier_0x70430(&puStack_860);
                cVar8 = arrival_supplier_0xbafa0(&puStack_860,&puStack_848);
              } while (cVar8 == '\0');
              if (-1 < iVar16) {
                iVar15 = iVar16;
              }
            }
            *(undefined8 *)(lVar23 + 0x128) = 0;
            bVar43 = true;
          }
          arrival_supplier_0x100970(0x14250a288,lVar23);
        }
      }
      plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_868);
      *(undefined4 *)(*plVar22 + 0x58) = 0xffffffff;
      arrival_supplier_0x70430(&puStack_868);
      puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_868,&uStack_897,&puStack_808);
      cVar8 = arrival_supplier_0x66de0(*puVar24,0);
    }
    arrival_supplier_0x70870(&lStack_688,&puStack_830);
    arrival_supplier_0x70860(&lStack_688,&piStack_7a8);
    puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_830,&uStack_897,&piStack_7a8);
    cVar8 = arrival_supplier_0x66de0(*puVar24,0);
    while (cVar8 != '\0') {
      plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_830);
      lVar23 = *plVar22;
      if ((*(int *)(lVar23 + 0x1d0) != -1) && (lVar39 = FUN_140073ba0(0x14250a288), lVar39 != 0)) {
        if (*(longlong *)(lVar39 + 0x128) != 0) {
          _DAT_142505d60 = _DAT_142505d60 | 8;
          arrival_supplier_0xbafb0(0x142505d88,lVar39 + 0x128);
          *(undefined8 *)(lVar39 + 0x128) = 0;
          bVar43 = true;
        }
        arrival_supplier_0x100970(0x14250a288,lVar39);
      }
      FUN_140100f10(lVar23,1);
      *(undefined4 *)(lVar23 + 0x1d0) = 0xffffffff;
      arrival_supplier_0x70430(&puStack_830);
      puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_830,&uStack_897,&piStack_7a8);
      cVar8 = arrival_supplier_0x66de0(*puVar24,0);
    }
    cVar8 = arrival_supplier_0x7f460(0x1423b3120,0x12d,_DAT_1418be238);
    if (cVar8 != '\0') {
      lVar23 = arrival_supplier_0x70480(&uStack_768);
      if ((lVar23 == 1) || (lVar23 = arrival_supplier_0x70480(&lStack_688), lVar23 == 0)) {
        arrival_supplier_0x70cc0(asStack_58);
        arrival_supplier_0x70cc0(aiStack_530);
        puVar26 = (undefined8 *)arrival_supplier_0x70850(&uStack_768,0);
        arrival_visitor_identity(*puVar26,aiStack_530,0);
        arrival_supplier_0xbb340(asStack_58,aiStack_530);
        uVar34 = arrival_supplier_0x70480(&uStack_768);
        if (uVar34 < 3) {
          lVar23 = arrival_supplier_0x70480(&uStack_768);
          if (lVar23 != 2) {
            pcVar36 = " has returned.";
            goto LAB_14010f5ef;
          }
          arrival_supplier_0x70b90(asStack_58," and ");
          arrival_supplier_0x70cc0(auStack_550);
          puVar26 = (undefined8 *)arrival_supplier_0x70850(&uStack_768,1);
          arrival_visitor_identity(*puVar26,auStack_550,0);
          arrival_supplier_0xbb340(asStack_58,auStack_550);
          arrival_supplier_0x70b90(asStack_58," have returned.");
          arrival_supplier_0x69460(auStack_550);
        }
        else {
          pcVar36 = " and others have returned.";
LAB_14010f5ef:
          arrival_supplier_0x70b90(asStack_58,pcVar36);
        }
        if ((iVar15 != -1) &&
           (plVar22 = (longlong *)FUN_14007f060(0x14251c138,iVar15), plVar22 != (longlong *)0x0)) {
          arrival_supplier_0x70cc0(auStack_550);
          arrival_supplier_0x736b0(alStack_508);
          uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
          (**(code **)(*plVar22 + 0xd0))(plVar22,auStack_550,alStack_508,1);
          cVar8 = arrival_supplier_0x70b50(auStack_550);
          if (cVar8 == '\0') {
            arrival_supplier_0x70b90(asStack_58,"  ");
            arrival_supplier_0xbb340(asStack_58,auStack_550);
          }
          arrival_supplier_0x69460(auStack_550);
        }
        arrival_supplier_0x7f210(&uStack_6f8);
        uStack_6f8 = 0x2012d;
        uStack_6f4 = 1;
        uStack_6dc = 2000;
        uStack_6f2 = (undefined2)uStack_7f8;
        uStack_6f0 = (undefined2)uStack_800;
        uStack_6ee = auStack_894[0];
        FUN_1400e5250(0x142505cd0,asStack_58,&uStack_6f8);
        arrival_supplier_0x69460(aiStack_530);
      }
      else {
        lVar23 = arrival_supplier_0x70480(&lStack_688);
        if (lVar23 == 1) {
          arrival_supplier_0x70cc0(asStack_58);
          arrival_supplier_0x70cc0(aiStack_530);
          plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
          cVar8 = arrival_supplier_0x70b50(*plVar22 + 0x80);
          if (cVar8 == '\0') {
            plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
            piVar35 = (int *)(*plVar22 + 0x80);
          }
          else {
            plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
            arrival_english_name(*plVar22 + 8,aiStack_530,1,0);
            piVar35 = aiStack_530;
          }
          arrival_supplier_0xbb340(asStack_58,piVar35);
          arrival_supplier_0x70b90(asStack_58," have returned.");
          if ((iVar15 != -1) &&
             (plVar22 = (longlong *)FUN_14007f060(0x14251c138,iVar15), plVar22 != (longlong *)0x0))
          {
            arrival_supplier_0x70cc0(auStack_550);
            arrival_supplier_0x736b0(alStack_508);
            uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
            (**(code **)(*plVar22 + 0xd0))(plVar22,auStack_550,alStack_508,1);
            cVar8 = arrival_supplier_0x70b50(auStack_550);
            if (cVar8 == '\0') {
              arrival_supplier_0x70b90(asStack_58,"  ");
              arrival_supplier_0xbb340(asStack_58,auStack_550);
            }
            arrival_supplier_0x69460(auStack_550);
          }
          arrival_supplier_0x7f210(&uStack_6f8);
          uStack_6f8 = 0x2012d;
          uStack_6f4 = 1;
          uStack_6dc = 2000;
          uStack_6f2 = (undefined2)uStack_7f8;
          uStack_6f0 = (undefined2)uStack_800;
          uStack_6ee = auStack_894[0];
          FUN_1400e5250(0x142505cd0,asStack_58,&uStack_6f8);
          arrival_supplier_0x69460(aiStack_530);
        }
        else {
          arrival_supplier_0x70cc0(asStack_58);
          arrival_supplier_0x70cc0(aiStack_530);
          plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
          cVar8 = arrival_supplier_0x70b50(*plVar22 + 0x80);
          if (cVar8 == '\0') {
            plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
            piVar35 = (int *)(*plVar22 + 0x80);
          }
          else {
            plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
            arrival_english_name(*plVar22 + 8,aiStack_530,1,0);
            piVar35 = aiStack_530;
          }
          arrival_supplier_0xbb340(asStack_58,piVar35);
          arrival_supplier_0x70b90(asStack_58," and others have returned.");
          if ((iVar15 != -1) &&
             (plVar22 = (longlong *)FUN_14007f060(0x14251c138,iVar15), plVar22 != (longlong *)0x0))
          {
            arrival_supplier_0x70cc0(auStack_550);
            arrival_supplier_0x736b0(alStack_508);
            uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
            (**(code **)(*plVar22 + 0xd0))(plVar22,auStack_550,alStack_508,1);
            cVar8 = arrival_supplier_0x70b50(auStack_550);
            if (cVar8 == '\0') {
              arrival_supplier_0x70b90(asStack_58,"  ");
              arrival_supplier_0xbb340(asStack_58,auStack_550);
            }
            arrival_supplier_0x69460(auStack_550);
          }
          arrival_supplier_0x7f210(&uStack_6f8);
          uStack_6f8 = 0x2012d;
          uStack_6f4 = 1;
          uStack_6dc = 2000;
          uStack_6f2 = (undefined2)uStack_7f8;
          uStack_6f0 = (undefined2)uStack_800;
          uStack_6ee = auStack_894[0];
          FUN_1400e5250(0x142505cd0,asStack_58,&uStack_6f8);
          arrival_supplier_0x69460(aiStack_530);
        }
      }
      arrival_supplier_0x69460(asStack_58);
    }
    arrival_supplier_0x70870(&uStack_768,&puStack_888);
    arrival_supplier_0x70860(&uStack_768,&puStack_788);
    while (puVar25 = puStack_838, puStack_888 < puStack_788) {
      puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_888);
      lVar23 = arrival_supplier_0x13cc070(*puVar26);
      if (lVar23 == 0) {
LAB_14010fd26:
        puStack_888 = puStack_888 + 1;
      }
      else {
        if ((((*(longlong *)(lVar23 + 0x130) == 0) ||
             (psVar33 = *(short **)(*(longlong *)(lVar23 + 0x130) + 0x28), psVar33 == (short *)0x0))
            || (*(int *)(psVar33 + 2) != _DAT_1423b5af4)) || (*psVar33 != 1)) {
          plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_888);
          lVar23 = *plVar22;
          if ((*(longlong *)(lVar23 + 0xa98) != 0) &&
             (cVar8 = arrival_supplier_0x74860(lVar23,0x3a), cVar8 != '\0')) {
            if (*(longlong *)(lVar23 + 0x1268) == 0) {
              uStack_610 = FUN_1415530e0(0x38);
              uVar27 = FUN_1400ff260(uStack_610);
              *(undefined8 *)(lVar23 + 0x1268) = uVar27;
            }
            else {
              FUN_1400ff2b0();
            }
            *(undefined4 *)(*(longlong *)(lVar23 + 0x1268) + 0x2c) = 0x4b;
            *(undefined4 *)(*(longlong *)(lVar23 + 0x1268) + 0x30) = 0xffffffff;
            uStack_5f8 = FUN_1415530e0(0x24);
            puStack_740 = (undefined4 *)arrival_supplier_0xff230(uStack_5f8);
            *puStack_740 = 9;
            puStack_740[7] = *(undefined4 *)(lVar23 + 0x130);
            arrival_supplier_0xbafb0(*(undefined8 *)(lVar23 + 0x1268),&puStack_740);
            *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x1c) = _DAT_142167754;
            *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x20) = _DAT_1423aa348 + 0x31380;
            if (0x626ff < *(int *)(*(longlong *)(lVar23 + 0x1268) + 0x20)) {
              piVar35 = (int *)(*(longlong *)(lVar23 + 0x1268) + 0x1c);
              *piVar35 = *piVar35 + 1;
              piVar35 = (int *)(*(longlong *)(lVar23 + 0x1268) + 0x20);
              *piVar35 = *piVar35 + -0x62700;
            }
          }
          goto LAB_14010fd26;
        }
        arrival_supplier_0x70870(0x1424103d8,&puStack_860);
        arrival_supplier_0x70860(0x1424103d8,&puStack_848);
        cVar8 = arrival_supplier_0xbafa0(&puStack_860,&puStack_848);
        while (cVar8 == '\0') {
          plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_860);
          plVar22 = (longlong *)*plVar22;
          plVar32 = (longlong *)arrival_supplier_0x70440(&puStack_888);
          if ((int)plVar22[0x34] == *(int *)(*plVar32 + 0x130)) {
            puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_888);
            FUN_141386ab0(*puVar26,plVar22);
            puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_888);
            lVar39 = FUN_141367b60(*puVar26,1);
            if ((lVar39 != 0) && (cVar8 = (**(code **)(*plVar22 + 0x1c8))(plVar22), cVar8 != '\0'))
            {
              arrival_supplier_0x70440(&puStack_888);
              FUN_141386ab0(lVar39,plVar22);
            }
          }
          arrival_supplier_0x70430(&puStack_860);
          cVar8 = arrival_supplier_0xbafa0(&puStack_860,&puStack_848);
        }
        plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_888);
        arrival_supplier_0x70870(*plVar22 + 0x408,auStack_810);
        plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_888);
        arrival_supplier_0x70860(*plVar22 + 0x408,&puStack_7b0);
        puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_810,&uStack_897);
        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        while (cVar8 != '\0') {
          puVar26 = (undefined8 *)arrival_supplier_0x70440(auStack_810);
          FUN_140ca8230(*(undefined8 *)*puVar26,0);
          arrival_supplier_0x70430(auStack_810);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(auStack_810);
          cVar8 = arrival_supplier_0x66de0(*puVar24);
        }
        puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_888);
        cVar8 = arrival_supplier_0x74860(*puVar26,0x3a);
        if (cVar8 == '\0') goto LAB_14010fd26;
        iVar15 = 0;
        if ((*(longlong *)(lVar23 + 0x130) == 0) ||
           (lVar39 = *(longlong *)(*(longlong *)(lVar23 + 0x130) + 0x40), lVar39 == 0))
        goto LAB_14010fd26;
        arrival_supplier_0x70870(lVar39 + 0x68,&puStack_850);
        arrival_supplier_0x70860
                  (*(longlong *)(*(longlong *)(lVar23 + 0x130) + 0x40) + 0x68,&puStack_840);
        puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_850,&uStack_896,&puStack_840);
        cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        while (cVar8 != '\0') {
          puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_850);
          cVar8 = arrival_supplier_0x74340(*puVar26,_DAT_142167754,_DAT_1423aa348);
          lVar39 = _DAT_1423bc668;
          iVar16 = _DAT_142167754;
          if (cVar8 != '\0') {
            puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_850);
            iVar16 = FUN_14140e1d0(lVar39 + 0x1250,*puVar26,iVar16);
            if (iVar16 == 0) {
              puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_850);
              cVar8 = arrival_supplier_0xbae90(*puVar26);
              if (cVar8 != '\0') {
                plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_850);
                iVar16 = _DAT_142167754 - *(int *)(*plVar22 + 0x18);
                plVar22 = (longlong *)arrival_supplier_0x70440(&puStack_850);
                if ((iVar16 * 0x62700 - *(int *)(*plVar22 + 0x1c)) + _DAT_1423aa348 < 0xc4e00) {
                  iVar15 = iVar15 + 1;
                }
              }
            }
          }
          arrival_supplier_0x70430(&puStack_850);
          puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_850,&uStack_896,&puStack_840);
          cVar8 = arrival_supplier_0x66de0(*puVar24,0);
        }
        puStack_850 = (undefined8 *)
                      arrival_supplier_0x70870
                                (*(longlong *)(*(longlong *)(lVar23 + 0x130) + 0x40) + 0x68,
                                 &uStack_608);
        for (puStack_850 = (undefined8 *)*puStack_850;
            (puStack_850 != puStack_840 && (puStack_850 < puStack_840));
            puStack_850 = puStack_850 + 1) {
          arrival_supplier_0x15530d0(*puStack_850,0x28);
        }
        lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0x130) + 0x40);
        if (*(longlong *)(lVar23 + 0x68) != *(longlong *)(lVar23 + 0x70)) {
          *(longlong *)(lVar23 + 0x70) = *(longlong *)(lVar23 + 0x68);
        }
        if (iVar15 < 1) goto LAB_14010fd26;
        if (_DAT_1418be238 != 0) {
          if ((DAT_1423b3630 & 8) != 0) goto LAB_14010fb25;
          goto LAB_14010fd26;
        }
        if ((DAT_1423b3630 & 0x70) == 0) {
          puStack_888 = puStack_888 + 1;
        }
        else {
LAB_14010fb25:
          arrival_supplier_0x70cc0(asStack_58,puStack_850);
          puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_888);
          FUN_141349e10(*puVar26,asStack_58);
          FUN_140546b30(asStack_58);
          if (iVar15 < 5) {
            pcVar36 = " has brought back a few rumors.";
            if (iVar15 < 2) {
              pcVar36 = " has brought back a rumor from abroad.";
            }
          }
          else {
            arrival_supplier_0x70b90(asStack_58," has brought back many tales from beyond ");
            FUN_140bab5f0(0x14251c138,asStack_58,_DAT_1423b5af4);
            pcVar36 = ".";
          }
          arrival_supplier_0x70b90(asStack_58,pcVar36);
          arrival_supplier_0x7f210(&uStack_6f8);
          uStack_6f8 = 0x30144;
          uStack_6f4 = 1;
          uStack_6dc = 2000;
          FUN_1400e5250(0x142505cd0,asStack_58);
          arrival_supplier_0x69460(asStack_58);
          puStack_888 = puStack_888 + 1;
        }
      }
    }
  }
  lVar23 = arrival_supplier_0x70480(puVar25 + 0x4c);
  if ((lVar23 != 0) || (lVar23 = arrival_supplier_0x709a0(auStack_5e8), lVar23 != 0)) {
    if (bVar43) {
      uStack_5b8 = FUN_1415530e0(0xf0);
      uStack_890 = arrival_supplier_0xffcc0(uStack_5b8);
      arrival_supplier_0x70bb0(uStack_890,"Spoils Report: ");
      lVar23 = arrival_supplier_0x70480(&lStack_688);
      if (lVar23 != 0) {
        arrival_supplier_0x70cc0(asStack_58);
        plVar22 = (longlong *)arrival_supplier_0x70850(&lStack_688,0);
        arrival_english_name(*plVar22 + 8,asStack_58,1,0);
        arrival_supplier_0xbb340(uStack_890,asStack_58);
        uVar34 = arrival_supplier_0x70480(&lStack_688);
        if (1 < uVar34) {
          arrival_supplier_0x70b90(uStack_890," and others");
        }
        arrival_supplier_0x70b90(uStack_890,", ");
        arrival_supplier_0x69460(asStack_58);
      }
      if (DAT_1418f9296 == '\0') {
        pcVar36 = "Spring";
LAB_14011113a:
        arrival_supplier_0x70b90(uStack_890,pcVar36);
      }
      else {
        if (DAT_1418f9296 == '\x01') {
          pcVar36 = "Summer";
          goto LAB_14011113a;
        }
        if (DAT_1418f9296 == '\x02') {
          pcVar36 = "Autumn";
          goto LAB_14011113a;
        }
        if (DAT_1418f9296 == '\x03') {
          pcVar36 = "Winter";
          goto LAB_14011113a;
        }
      }
      arrival_supplier_0x70b90(uStack_890," ");
      FUN_140545610(_DAT_142167754,uStack_890);
      *(int *)(uStack_890 + 0x24) = _DAT_142167754;
      *(int *)(uStack_890 + 0x28) = _DAT_1423aa348;
      *(uint *)(uStack_890 + 0x20) = *(uint *)(uStack_890 + 0x20) | 2;
      _DAT_142505d60 = _DAT_142505d60 | 0x10;
      arrival_supplier_0xbafb0(0x142505da0,&uStack_890);
      arrival_supplier_0x70870(puVar25 + 0x4c,&puStack_860);
      arrival_supplier_0x70860(puVar25 + 0x4c,&puStack_788);
      for (; puStack_860 != puStack_788; puStack_860 = puStack_860 + 1) {
        cVar8 = '\x01';
        if (puStack_860 < puStack_788) {
          cVar8 = -1;
        }
        if (-1 < cVar8) break;
        arrival_supplier_0x67130(&uStack_780);
        arrival_supplier_0x67130(auStack_550);
        puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_860);
        FUN_140ce1ef0(*puVar26,&uStack_780);
        arrival_supplier_0x70870(&uStack_780,&puStack_868);
        arrival_supplier_0x70860(&uStack_780,&puStack_790);
        for (; puStack_868 < puStack_790; puStack_868 = puStack_868 + 1) {
          uVar40 = (*(code *)**(undefined8 **)*puStack_868)();
          uVar13 = (**(code **)(*(longlong *)*puStack_868 + 8))();
          uVar14 = (**(code **)(*(longlong *)*puStack_868 + 0x10))();
          iStack_854 = (**(code **)(*(longlong *)*puStack_868 + 0x18))();
          iStack_858 = (**(code **)(*(longlong *)*puStack_868 + 0x478))();
          arrival_supplier_0x70d70
                    (&puStack_830,*(undefined8 *)(uStack_890 + 0x30),uStack_890 + 0x30);
          arrival_supplier_0x70d70
                    (&puStack_7b0,*(undefined8 *)(uStack_890 + 0x38),uStack_890 + 0x30);
          arrival_supplier_0x70d70
                    (&puStack_848,*(undefined8 *)(uStack_890 + 0x48),uStack_890 + 0x48);
          arrival_supplier_0x70d70
                    (&puStack_808,*(undefined8 *)(uStack_890 + 0x60),uStack_890 + 0x60);
          arrival_supplier_0x70d70
                    (&piStack_7a8,*(undefined8 *)(uStack_890 + 0x78),uStack_890 + 0x78);
          arrival_supplier_0x70d70
                    (&puStack_840,*(undefined8 *)(uStack_890 + 0x90),uStack_890 + 0x90);
          iVar15 = iStack_858;
          for (; puStack_830 != puStack_7b0; puStack_830 = puStack_830 + 1) {
            cVar8 = '\x01';
            if (puStack_830 < puStack_7b0) {
              cVar8 = -1;
            }
            if (-1 < cVar8) {
LAB_1401113a6:
              if (puStack_830 != puStack_7b0) {
                cVar8 = '\x01';
                if (puStack_830 < puStack_7b0) {
                  cVar8 = -1;
                }
                if (cVar8 < '\0') goto LAB_140111426;
              }
              break;
            }
            if ((((*puStack_830 == uVar40) && (*puStack_848 == uVar13)) && (*puStack_808 == uVar14))
               && (*piStack_7a8 == iStack_854)) {
              piVar35 = (int *)arrival_supplier_0x70440(&puStack_840);
              *piVar35 = *piVar35 + iVar15;
              goto LAB_1401113a6;
            }
            puStack_848 = puStack_848 + 1;
            puStack_808 = puStack_808 + 1;
            piStack_7a8 = piStack_7a8 + 1;
            puStack_840 = (undefined8 *)((longlong)puStack_840 + 4);
          }
          auStack_894[0] = uVar40;
          arrival_supplier_0x71c60(uStack_890 + 0x30,auStack_894);
          auStack_894[0] = uVar13;
          arrival_supplier_0x71c60(uStack_890 + 0x48,auStack_894);
          auStack_894[0] = uVar14;
          arrival_supplier_0x71c60(uStack_890 + 0x60,auStack_894);
          arrival_supplier_0x71ac0(uStack_890 + 0x78,&iStack_854);
          arrival_supplier_0x71ac0(uStack_890 + 0x90,&iStack_858);
LAB_140111426:
        }
        FUN_1400681a0(auStack_550);
        FUN_1400681a0(&uStack_780);
      }
      FUN_140073600(uStack_890 + 0xa8,auStack_5e8);
      FUN_140073600(uStack_890 + 0xc0,auStack_590);
      FUN_140073600(uStack_890 + 0xd8,auStack_5a8);
      puVar25 = puStack_838;
    }
    lVar23 = arrival_supplier_0x70480(puVar25 + 0x4c);
    if (lVar23 != 0) {
      arrival_supplier_0x67130(auStack_550);
      arrival_supplier_0x70870(&uStack_768,&puStack_878);
      arrival_supplier_0x70860(&uStack_768,&puStack_788);
      for (; puStack_878 < puStack_788; puStack_878 = puStack_878 + 1) {
        cVar8 = arrival_supplier_0x13a7620(*puStack_878);
        if (cVar8 != '\0') {
          puVar26 = (undefined8 *)arrival_supplier_0x70440(&puStack_878);
          cVar8 = arrival_supplier_0x74860(*puVar26,0x3a);
          if (cVar8 != '\0') {
            uVar27 = arrival_supplier_0x70440(&puStack_878);
            arrival_supplier_0xbafb0(auStack_550,uVar27);
          }
        }
      }
      FUN_140111a50(&lStack_730,auStack_550);
      puVar26 = *(undefined8 **)(puVar25 + 0x4c);
      lVar23 = *(longlong *)(puVar25 + 0x4e) - (longlong)puVar26;
      while (lVar23 >> 3 != 0) {
        uVar27 = *puVar26;
        aiStack_530[0] = -1;
        uStack_528 = 0;
        uStack_520 = 0;
        FUN_140ca3b00(uVar27,aiStack_530,0);
        if (aiStack_530[0] == 4) {
          uVar27 = uStack_528;
        }
        arrival_supplier_0x67130(&uStack_780);
        arrival_supplier_0x67130(asStack_58);
        FUN_140ce1ef0(uVar27,&uStack_780,asStack_58);
        arrival_supplier_0x70d70(&puStack_860,uStack_780,&uStack_780);
        arrival_supplier_0x70d70(&puStack_790,uStack_778);
        for (; puStack_860 < puStack_790; puStack_860 = puStack_860 + 1) {
          (**(code **)(*(longlong *)*puStack_860 + 0x328))((longlong *)*puStack_860,1);
          iVar15 = arrival_supplier_0xbbc30(*puStack_860,puVar25 + 0x4c);
          if (iVar15 != -1) {
            FUN_1400bafd0(puVar25 + 0x4c,(longlong)iVar15);
          }
        }
        uVar34 = lStack_728 - lStack_730 >> 3;
        if (uVar34 != 0) {
          if ((uint)uVar34 < 2) {
            uVar19 = 0;
          }
          else {
            uVar19 = FUN_140ece790();
            uVar19 = (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar34 & 0xffffffff)) + 1U);
          }
          uVar3 = *(undefined8 *)(lStack_730 + (longlong)(int)uVar19 * 8);
          FUN_1400bafd0(&lStack_730);
          uStack_8c0 = CONCAT71(uStack_8c0._1_7_,1);
          uStack_8c8 = CONCAT44(uStack_8c8._4_4_,0xffffffff);
          FUN_1413412c0(uVar3,uVar27,0,0xffffffff);
          if ((lStack_728 - lStack_730 & 0xfffffffffffffff8U) == 0) {
            FUN_1400f9ad0(&lStack_730,auStack_550);
          }
        }
        FUN_1400681a0(asStack_58);
        FUN_1400681a0(&uStack_780);
        puVar26 = *(undefined8 **)(puVar25 + 0x4c);
        lVar23 = *(longlong *)(puVar25 + 0x4e) - (longlong)puVar26;
      }
      FUN_1400681a0(&lStack_730);
      FUN_1400681a0(auStack_550);
    }
  }
  arrival_supplier_0x70d70(&plStack_798,uStack_768,&uStack_768);
  arrival_supplier_0x70d70(&plStack_5b0,uStack_760,&uStack_768);
  for (; plStack_798 < plStack_5b0; plStack_798 = plStack_798 + 1) {
    if ((lStack_680 - lStack_688 >> 3 != 0) || (lStack_5c8 - lStack_5d0 >> 3 != 0)) {
      FUN_140074e10(*plStack_798,7,0x9c4);
      FUN_140074e10(*plStack_798,8,0x189c0);
    }
    FUN_140074e10(*plStack_798,0x18,1);
    FUN_1400ff390(*plStack_798,0x10);
    *(uint *)(*plStack_798 + 0x110) = *(uint *)(*plStack_798 + 0x110) | 2;
    *(uint *)(*plStack_798 + 0x110) = *(uint *)(*plStack_798 + 0x110) | 0x400;
    *(uint *)(*plStack_798 + 0x114) = *(uint *)(*plStack_798 + 0x114) & 0xfffffffb;
  }
  if (*(longlong *)(puStack_838 + 8) != *(longlong *)(puStack_838 + 10)) {
    *(longlong *)(puStack_838 + 10) = *(longlong *)(puStack_838 + 8);
  }
  FUN_140acdf70();
  FUN_140070d80(auStack_5a8);
  FUN_140070d80(auStack_590);
  FUN_140070d80(auStack_5e8);
  FUN_1400681a0(&lStack_5d0);
  FUN_1400681a0(&lStack_688);
  FUN_1400681a0(&uStack_768);
LAB_1401118cd:
  FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_8e8);
  return;
joined_r0x00014010d96f:
  if (cVar8 == '\0') goto LAB_14010da33;
  plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7d0);
  cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,1);
  if (cVar8 == '\0') {
    plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7d0);
    cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,0);
    if (cVar8 == '\0') {
      plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7d0);
      cVar8 = arrival_supplier_0x735c0(*plVar22 + 0x28,3);
      if (cVar8 == '\0') {
        puVar26 = (undefined8 *)arrival_supplier_0x70440(&uStack_7d0);
        sVar38 = (*(code *)**(undefined8 **)*puVar26)();
        if (sVar38 == 2) {
          plVar22 = (longlong *)arrival_supplier_0x70440(&uStack_7d0);
          if ((*(int *)(lVar28 + 0xb8) == *(int *)(*plVar22 + 0xb8)) &&
             (*(int *)(lVar28 + 0xbc) == *(int *)(*plVar22 + 0xbc))) goto LAB_14010da33;
        }
      }
    }
  }
  arrival_supplier_0x70430(&uStack_7d0);
  puVar24 = (undefined1 *)arrival_supplier_0x70450(&uStack_7d0,&uStack_815,&puStack_840);
  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
  goto joined_r0x00014010d96f;
LAB_14010da33:
  puVar24 = (undefined1 *)arrival_supplier_0x70450(&uStack_7d0,&uStack_818,&puStack_840);
  cVar8 = arrival_supplier_0x73490(*puVar24,0);
  if (cVar8 == '\0') {
    uVar27 = arrival_supplier_0x70440(&uStack_7f0);
    arrival_supplier_0xbafb0(auStack_550,uVar27);
    uVar27 = arrival_supplier_0x70440(&uStack_7d0);
    arrival_supplier_0xbafb0(&lStack_730,uVar27);
  }
LAB_14010da82:
  arrival_supplier_0x70430(&uStack_7f0);
  puVar24 = (undefined1 *)arrival_supplier_0x70450(&uStack_7f0,&uStack_816,&puStack_668);
  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
  if (cVar8 == '\0') goto LAB_14010dab1;
  goto LAB_14010d7b0;
LAB_140110a53:
  arrival_supplier_0x70430(&puStack_868);
  puVar24 = (undefined1 *)arrival_supplier_0x70450(&puStack_868,&uStack_896,auStack_6a8);
  cVar8 = arrival_supplier_0x66de0(*puVar24,0);
  if (cVar8 == '\0') goto LAB_140110ab4;
  goto LAB_140110a12;
}


