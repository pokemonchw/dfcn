/* classic PE:6aea11a5:0272d000; new-game-load-renderer; RVA 0x7d7a10..0x7d92cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_new_game_load_renderer(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  int iStack_68;
  int iStack_64;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_88;
  if ((_DAT_1423e9af8 < 1) || ((*_DAT_1423e9af0 & 1) == 0)) {
    _DAT_1426669dc = -1;
  }
  else {
    _DAT_1426669dc = _DAT_1426669e0;
  }
  DAT_1426669d8 = 0;
  load_supplier_0xc47e50(&iStack_64,&iStack_68);
  FUN_1408d57c0(0,0xff,0);
  iVar9 = _DAT_1423e9b08 + -1;
  if (_DAT_1426669dc == -1) {
    _DAT_1426667fc = 0x1000006;
    iVar6 = 0;
    _DAT_1426667f4 = iStack_64;
    if (-1 < iVar9) {
      do {
        for (; _DAT_1426667f4 <= iStack_68; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
          if (iVar6 == 0) {
            uVar5 = _DAT_1423ed02c;
            if ((_DAT_1426667f4 != iStack_64) &&
               (uVar5 = _DAT_1423ed030, _DAT_1426667f4 == iStack_68)) {
              uVar5 = _DAT_1423ed034;
            }
          }
          else if (iVar6 == iVar9) {
            uVar5 = _DAT_1423ed044;
            if ((_DAT_1426667f4 != iStack_64) &&
               (uVar5 = _DAT_1423ed048, _DAT_1426667f4 == iStack_68)) {
              uVar5 = _DAT_1423ed04c;
            }
          }
          else {
            uVar5 = _DAT_1423ed038;
            if ((_DAT_1426667f4 != iStack_64) &&
               (uVar5 = _DAT_1423ed040, _DAT_1426667f4 != iStack_68)) {
              uVar5 = _DAT_1423ed03c;
            }
          }
          _DAT_1426667f8 = iVar6;
          load_supplier_0xaf1390(0x142666770,uVar5);
        }
        iVar6 = iVar6 + 1;
        _DAT_1426667f4 = iStack_64;
      } while (iVar6 <= iVar9);
    }
  }
  _DAT_1426667fc = 0x1010007;
  iVar7 = _DAT_14265add8 + _DAT_14265add4 + *(int *)(param_1 + 0x2e0);
  iVar6 = iStack_64 + 5;
  iVar1 = iStack_68 + -6;
  iVar8 = 0;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = ((iVar1 - iVar6) * iVar8) / ((int)(_DAT_14265ade8 - _DAT_14265ade0 >> 3) * 2 + 0x24) +
          iVar6;
  iVar8 = iVar6;
  if (iVar6 <= iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = iStack_68 + -7;
  if (iVar8 <= iStack_68 + -7) {
    iVar7 = iVar8;
  }
  iVar9 = iVar9 / 5;
  for (_DAT_1426667f4 = iVar6; _DAT_1426667f4 <= iVar1; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
    if (iVar7 < _DAT_1426667f4) {
      uVar5 = _DAT_1423ecc24;
      if ((_DAT_1426667f4 != iVar6) && (uVar5 = _DAT_1423ecc2c, _DAT_1426667f4 != iVar1)) {
        uVar5 = _DAT_1423ecc28;
      }
    }
    else {
      uVar5 = _DAT_1423ecc18;
      if ((_DAT_1426667f4 != iVar6) && (uVar5 = _DAT_1423ecc1c, _DAT_1426667f4 == iVar1)) {
        uVar5 = _DAT_1423ecc20;
      }
    }
    _DAT_1426667f8 = iVar9 + 6;
    load_supplier_0xaf19c0(0x142666770,uVar5,0);
  }
  _DAT_1426667fc = 0x1010007;
  _DAT_1426667f8 = iVar9 + 1;
  pcStack_60 = (char *)0x0;
  uStack_58 = 0;
  _DAT_1426667f4 = iVar6;
  pcStack_60 = (char *)FUN_140071d90(0x20);
  uStack_50 = 0x1f;
  uStack_48 = 0x1f;
  builtin_strncpy(pcStack_60,"Loading world to start new game",0x20);
  FUN_140af0220(0x142666770,&pcStack_60);
  FUN_140070e10(&pcStack_60);
  _DAT_1426667fc = 0x1010007;
  _DAT_1426667f8 = iVar9 + 4;
  _DAT_1426667f4 = iVar6;
  if (0x23 < *(uint *)(param_1 + 0x2e0)) goto LAB_1407d7dea;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e696e65704f;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 1:
    if (0x39 < _DAT_14265ad80 - 1U) goto override_jmp_1407d7e31_case_19;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_14265ad80 - 1U) {
    case 0:
      if ((_DAT_14265add4 < 0) ||
         ((ulonglong)(_DAT_14265ae68 - _DAT_14265ae60 >> 3) <= (ulonglong)(longlong)_DAT_14265add4))
      {
        FUN_140069710(&pcStack_60,"Loading object files...  ");
        FUN_140af0220(0x142666770,&pcStack_60);
        break;
      }
      FUN_140069710(&pcStack_60,"Loading object files...  ");
      FUN_140af0220(0x142666770,&pcStack_60);
      FUN_140070e10(&pcStack_60);
      iVar6 = _DAT_14265add4;
LAB_1407d7e8a:
      FUN_140af0220(0x142666770,*(undefined8 *)(_DAT_14265ae60 + (longlong)iVar6 * 8));
      goto override_jmp_1407d7e31_case_19;
    case 1:
      FUN_140069710(&pcStack_60,"Sorting text...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 2:
      FUN_140069710(&pcStack_60,"Sorting languages...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 3:
      FUN_140069710(&pcStack_60,"Sorting descriptors...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 4:
      FUN_140069710(&pcStack_60,"Sorting material templates...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 5:
      FUN_140069710(&pcStack_60,"Sorting inorganics...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 6:
      FUN_140069710(&pcStack_60,"Sorting plants...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 7:
      FUN_140069710(&pcStack_60,"Sorting tissue templates...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 8:
      FUN_140069710(&pcStack_60,"Sorting items...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 9:
      FUN_140069710(&pcStack_60,"Sorting buildings...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 10:
      FUN_140069710(&pcStack_60,"Sorting body detail plans...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0xb:
      FUN_140069710(&pcStack_60,"Sorting creature bodies...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0xc:
      FUN_140069710(&pcStack_60,"Sorting creature variations...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0xd:
      FUN_140069710(&pcStack_60,"Sorting creatures...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0xe:
      FUN_140069710(&pcStack_60,"Sorting entities...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0xf:
      FUN_140069710(&pcStack_60,"Sorting reactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x10:
      FUN_140069710(&pcStack_60,"Sorting interactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x11:
      FUN_140069710(&pcStack_60,"Sorting music...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x12:
      FUN_140069710(&pcStack_60,"Sorting sounds...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    default:
      goto override_jmp_1407d7e31_case_19;
    case 0x14:
      FUN_140069710(&pcStack_60,"Processing languages...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x15:
      FUN_140069710(&pcStack_60,"Processing inorganics...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x16:
      FUN_140069710(&pcStack_60,"Processing plants...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x17:
      FUN_140069710(&pcStack_60,"Processing items...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x18:
      FUN_140069710(&pcStack_60,"Processing creatures...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x19:
      FUN_140069710(&pcStack_60,"Processing entities...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x1a:
      FUN_140069710(&pcStack_60,"Processing reactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x1b:
      FUN_140069710(&pcStack_60,"Processing interactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x1c:
      FUN_140069710(&pcStack_60,"Processing music...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x1d:
      FUN_140069710(&pcStack_60,"Processing sounds...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x1e:
      FUN_140069710(&pcStack_60,"Finalizing languages...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x1f:
      FUN_140069710(&pcStack_60,"Finalizing descriptors...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x20:
      FUN_140069710(&pcStack_60,"Finalizing material templates...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x21:
      FUN_140069710(&pcStack_60,"Finalizing inorganics...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x22:
      FUN_140069710(&pcStack_60,"Finalizing plants...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x23:
      FUN_140069710(&pcStack_60,"Finalizing tissue templates...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x24:
      FUN_140069710(&pcStack_60,"Finalizing items...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x25:
      FUN_140069710(&pcStack_60,"Finalizing buildings...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x26:
      FUN_140069710(&pcStack_60,"Finalizing body detail plans...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x27:
      FUN_140069710(&pcStack_60,"Finalizing creature variations...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x28:
      FUN_140069710(&pcStack_60,"Finalizing creatures...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x29:
      FUN_140069710(&pcStack_60,"Finalizing entities...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x2a:
      FUN_140069710(&pcStack_60,"Finalizing reactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x2b:
      FUN_140069710(&pcStack_60,"Finalizing interactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x2e:
      FUN_140069710(&pcStack_60,"Preparing material data...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x2f:
      FUN_140069710(&pcStack_60,"Generating inorganics...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x30:
      FUN_140069710(&pcStack_60,"Generating plants...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x31:
      FUN_140069710(&pcStack_60,"Generating items...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x32:
      FUN_140069710(&pcStack_60,"Generating creatures...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x33:
      FUN_140069710(&pcStack_60,"Generating entities...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x34:
      FUN_140069710(&pcStack_60,"Generating reactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x35:
      FUN_140069710(&pcStack_60,"Generating interactions...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x37:
      FUN_140069710(&pcStack_60,"Finalizing generated objects...");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x38:
      if ((-1 < _DAT_14265add8) && (_DAT_14265add8 < (int)(_DAT_14265ae68 - _DAT_14265ae60 >> 3))) {
        FUN_140069710(&pcStack_60,"Preparing graphics...  ");
        FUN_140af0220(0x142666770,&pcStack_60);
        FUN_140070e10(&pcStack_60);
        iVar6 = _DAT_14265add8;
        goto LAB_1407d7e8a;
      }
      FUN_140069710(&pcStack_60,"Preparing graphics...  ");
      FUN_140af0220(0x142666770,&pcStack_60);
      break;
    case 0x39:
      FUN_140069710(&pcStack_60,"Finishing...");
      FUN_140af0220(0x142666770,&pcStack_60);
    }
    FUN_140070e10(&pcStack_60);
override_jmp_1407d7e31_case_19:
    if ((DAT_14265ad8c != '\0') || (DAT_14265ad8d != '\0')) {
      load_mod_load_dialog(&DAT_14265ad80,iStack_64,iStack_68,iVar9 + 6);
    }
    goto LAB_1407d7dea;
  case 2:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Allocating space...",0x14);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 3:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x10;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading items...",0x11);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 4:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading buildings...",0x15);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 5:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading entities...",0x14);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 6:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x1b;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading coin information...",0x1c);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 7:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading map data...",0x14);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 8:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x30);
    uStack_50 = 0x20;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading civilized populations...",0x21);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 9:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x12;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading history...",0x13);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading parameters...",0x16);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0xb:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading artifacts...",0x15);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0xc:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x30);
    uStack_50 = 0x24;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading active historical figures...",0x25);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0xd:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading squads...",0x12);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0xe:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading formations...",0x16);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0xf:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading activities...",0x16);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading interactions...",0x18);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x11:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x1a;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading written content...",0x1b);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x12:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading identities...",0x16);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x13:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading incidents...",0x15);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x14:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading crimes...",0x12);
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x15:
    FUN_140069710(&pcStack_60,"Loading vehicles...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x16:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading armies...",0x12);
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x17:
    FUN_140069710(&pcStack_60,"Loading army controllers...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x18:
    FUN_140069710(&pcStack_60,"Loading tracking information...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x19:
    FUN_140069710(&pcStack_60,"Loading cultural identities...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x1a:
    FUN_140069710(&pcStack_60,"Loading agreements...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x1b:
    FUN_140069710(&pcStack_60,"Loading art forms...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x1c:
    FUN_140069710(&pcStack_60,"Loading occupations...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x1d:
    FUN_140069710(&pcStack_60,"Loading belief systems...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x1e:
    FUN_140069710(&pcStack_60,"Loading image sets...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x1f:
    FUN_140069710(&pcStack_60,"Loading divination sets...");
    FUN_140af0220(0x142666770,&pcStack_60);
    FUN_140070e10(&pcStack_60);
    goto LAB_1407d7dea;
  case 0x20:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e69736f6c43;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x21:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x30);
    uStack_50 = 0x23;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Rebuilding temporary information...",0x24);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x22:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071d90(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Preparing game...",0x12);
    FUN_140af0220(0x142666770,&pcStack_60);
    break;
  case 0x23:
    uStack_58 = 0;
    uStack_50 = 7;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x2164656c696146;
    FUN_140af0220(0x142666770,&pcStack_60);
    if (uStack_48 < 0x10) goto LAB_1407d7dea;
    if (0xfff < uStack_48 + 1) {
      lVar2 = *(longlong *)(pcStack_60 + -8);
      lVar4 = (longlong)pcStack_60 - lVar2;
      goto joined_r0x0001407d92bd;
    }
    goto LAB_1407d7de5;
  }
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      lVar2 = *(longlong *)(pcStack_60 + -8);
      lVar4 = (longlong)pcStack_60 - lVar2;
joined_r0x0001407d92bd:
      if (0x1f < lVar4 - 8U) {
        _invalid_parameter_noinfo_noreturn(lVar2,uStack_48 + 0x28);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_1407d7de5:
    load_supplier_0x154de20();
  }
LAB_1407d7dea:
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_88);
  return;
}

