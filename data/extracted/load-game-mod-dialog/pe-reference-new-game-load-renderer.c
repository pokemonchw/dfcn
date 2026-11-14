/* reference PE:6aea05a1:02734000; new-game-load-renderer; RVA 0x7da3b0..0x7dbc6c */

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
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  if ((_DAT_1423efbf8 < 1) || ((*_DAT_1423efbf0 & 1) == 0)) {
    _DAT_14266cadc = -1;
  }
  else {
    _DAT_14266cadc = _DAT_14266cae0;
  }
  DAT_14266cad8 = 0;
  load_supplier_0xc4b030(&iStack_64,&iStack_68);
  FUN_1408d8160(0,0xff,0);
  iVar9 = _DAT_1423efc08 + -1;
  if (_DAT_14266cadc == -1) {
    _DAT_14266c8fc = 0x1000006;
    iVar6 = 0;
    _DAT_14266c8f4 = iStack_64;
    if (-1 < iVar9) {
      do {
        for (; _DAT_14266c8f4 <= iStack_68; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar6 == 0) {
            uVar5 = _DAT_1423f312c;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3130, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f3134;
            }
          }
          else if (iVar6 == iVar9) {
            uVar5 = _DAT_1423f3144;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3148, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f314c;
            }
          }
          else {
            uVar5 = _DAT_1423f3138;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3140, _DAT_14266c8f4 != iStack_68)) {
              uVar5 = _DAT_1423f313c;
            }
          }
          _DAT_14266c8f8 = iVar6;
          load_supplier_0xaf4570(0x14266c870,uVar5);
        }
        iVar6 = iVar6 + 1;
        _DAT_14266c8f4 = iStack_64;
      } while (iVar6 <= iVar9);
    }
  }
  _DAT_14266c8fc = 0x1010007;
  iVar7 = _DAT_142660ed8 + _DAT_142660ed4 + *(int *)(param_1 + 0x2e0);
  iVar6 = iStack_64 + 5;
  iVar1 = iStack_68 + -6;
  iVar8 = 0;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = ((iVar1 - iVar6) * iVar8) / ((int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3) * 2 + 0x24) +
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
  for (_DAT_14266c8f4 = iVar6; _DAT_14266c8f4 <= iVar1; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
    if (iVar7 < _DAT_14266c8f4) {
      uVar5 = _DAT_1423f2d24;
      if ((_DAT_14266c8f4 != iVar6) && (uVar5 = _DAT_1423f2d2c, _DAT_14266c8f4 != iVar1)) {
        uVar5 = _DAT_1423f2d28;
      }
    }
    else {
      uVar5 = _DAT_1423f2d18;
      if ((_DAT_14266c8f4 != iVar6) && (uVar5 = _DAT_1423f2d1c, _DAT_14266c8f4 == iVar1)) {
        uVar5 = _DAT_1423f2d20;
      }
    }
    _DAT_14266c8f8 = iVar9 + 6;
    load_supplier_0xaf4ba0(0x14266c870,uVar5,0);
  }
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar9 + 1;
  pcStack_60 = (char *)0x0;
  uStack_58 = 0;
  _DAT_14266c8f4 = iVar6;
  pcStack_60 = (char *)FUN_140071e00(0x20);
  uStack_50 = 0x1f;
  uStack_48 = 0x1f;
  builtin_strncpy(pcStack_60,"Loading world to start new game",0x20);
  FUN_140af3400(0x14266c870,&pcStack_60);
  FUN_140070e80(&pcStack_60);
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar9 + 4;
  _DAT_14266c8f4 = iVar6;
  if (0x23 < *(uint *)(param_1 + 0x2e0)) goto LAB_1407da78a;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e696e65704f;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 1:
    if (0x39 < _DAT_142660e80 - 1U) goto override_jmp_1407da7d1_case_19;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_142660e80 - 1U) {
    case 0:
      if ((_DAT_142660ed4 < 0) ||
         ((ulonglong)(_DAT_142660f68 - _DAT_142660f60 >> 3) <= (ulonglong)(longlong)_DAT_142660ed4))
      {
        FUN_140069780(&pcStack_60,"Loading object files...  ");
        FUN_140af3400(0x14266c870,&pcStack_60);
        break;
      }
      FUN_140069780(&pcStack_60,"Loading object files...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      FUN_140070e80(&pcStack_60);
      iVar6 = _DAT_142660ed4;
LAB_1407da82a:
      FUN_140af3400(0x14266c870,*(undefined8 *)(_DAT_142660f60 + (longlong)iVar6 * 8));
      goto override_jmp_1407da7d1_case_19;
    case 1:
      FUN_140069780(&pcStack_60,"Sorting text...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 2:
      FUN_140069780(&pcStack_60,"Sorting languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 3:
      FUN_140069780(&pcStack_60,"Sorting descriptors...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 4:
      FUN_140069780(&pcStack_60,"Sorting material templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 5:
      FUN_140069780(&pcStack_60,"Sorting inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 6:
      FUN_140069780(&pcStack_60,"Sorting plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 7:
      FUN_140069780(&pcStack_60,"Sorting tissue templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 8:
      FUN_140069780(&pcStack_60,"Sorting items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 9:
      FUN_140069780(&pcStack_60,"Sorting buildings...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 10:
      FUN_140069780(&pcStack_60,"Sorting body detail plans...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xb:
      FUN_140069780(&pcStack_60,"Sorting creature bodies...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xc:
      FUN_140069780(&pcStack_60,"Sorting creature variations...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xd:
      FUN_140069780(&pcStack_60,"Sorting creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xe:
      FUN_140069780(&pcStack_60,"Sorting entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xf:
      FUN_140069780(&pcStack_60,"Sorting reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x10:
      FUN_140069780(&pcStack_60,"Sorting interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x11:
      FUN_140069780(&pcStack_60,"Sorting music...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x12:
      FUN_140069780(&pcStack_60,"Sorting sounds...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    default:
      goto override_jmp_1407da7d1_case_19;
    case 0x14:
      FUN_140069780(&pcStack_60,"Processing languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x15:
      FUN_140069780(&pcStack_60,"Processing inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x16:
      FUN_140069780(&pcStack_60,"Processing plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x17:
      FUN_140069780(&pcStack_60,"Processing items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x18:
      FUN_140069780(&pcStack_60,"Processing creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x19:
      FUN_140069780(&pcStack_60,"Processing entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1a:
      FUN_140069780(&pcStack_60,"Processing reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1b:
      FUN_140069780(&pcStack_60,"Processing interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1c:
      FUN_140069780(&pcStack_60,"Processing music...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1d:
      FUN_140069780(&pcStack_60,"Processing sounds...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1e:
      FUN_140069780(&pcStack_60,"Finalizing languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1f:
      FUN_140069780(&pcStack_60,"Finalizing descriptors...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x20:
      FUN_140069780(&pcStack_60,"Finalizing material templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x21:
      FUN_140069780(&pcStack_60,"Finalizing inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x22:
      FUN_140069780(&pcStack_60,"Finalizing plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x23:
      FUN_140069780(&pcStack_60,"Finalizing tissue templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x24:
      FUN_140069780(&pcStack_60,"Finalizing items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x25:
      FUN_140069780(&pcStack_60,"Finalizing buildings...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x26:
      FUN_140069780(&pcStack_60,"Finalizing body detail plans...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x27:
      FUN_140069780(&pcStack_60,"Finalizing creature variations...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x28:
      FUN_140069780(&pcStack_60,"Finalizing creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x29:
      FUN_140069780(&pcStack_60,"Finalizing entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2a:
      FUN_140069780(&pcStack_60,"Finalizing reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2b:
      FUN_140069780(&pcStack_60,"Finalizing interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2e:
      FUN_140069780(&pcStack_60,"Preparing material data...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2f:
      FUN_140069780(&pcStack_60,"Generating inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x30:
      FUN_140069780(&pcStack_60,"Generating plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x31:
      FUN_140069780(&pcStack_60,"Generating items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x32:
      FUN_140069780(&pcStack_60,"Generating creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x33:
      FUN_140069780(&pcStack_60,"Generating entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x34:
      FUN_140069780(&pcStack_60,"Generating reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x35:
      FUN_140069780(&pcStack_60,"Generating interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x37:
      FUN_140069780(&pcStack_60,"Finalizing generated objects...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x38:
      if ((-1 < _DAT_142660ed8) && (_DAT_142660ed8 < (int)(_DAT_142660f68 - _DAT_142660f60 >> 3))) {
        FUN_140069780(&pcStack_60,"Preparing graphics...  ");
        FUN_140af3400(0x14266c870,&pcStack_60);
        FUN_140070e80(&pcStack_60);
        iVar6 = _DAT_142660ed8;
        goto LAB_1407da82a;
      }
      FUN_140069780(&pcStack_60,"Preparing graphics...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x39:
      FUN_140069780(&pcStack_60,"Finishing...");
      FUN_140af3400(0x14266c870,&pcStack_60);
    }
    FUN_140070e80(&pcStack_60);
override_jmp_1407da7d1_case_19:
    if ((DAT_142660e8c != '\0') || (DAT_142660e8d != '\0')) {
      load_mod_load_dialog(&DAT_142660e80,iStack_64,iStack_68,iVar9 + 6);
    }
    goto LAB_1407da78a;
  case 2:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Allocating space...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 3:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x10;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading items...",0x11);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 4:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading buildings...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 5:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading entities...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 6:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1b;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading coin information...",0x1c);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 7:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading map data...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 8:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x20;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading civilized populations...",0x21);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 9:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x12;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading history...",0x13);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading parameters...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xb:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading artifacts...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xc:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x24;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading active historical figures...",0x25);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xd:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading squads...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xe:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading formations...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xf:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading activities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading interactions...",0x18);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x11:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1a;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading written content...",0x1b);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x12:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading identities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x13:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading incidents...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x14:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading crimes...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x15:
    FUN_140069780(&pcStack_60,"Loading vehicles...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x16:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading armies...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x17:
    FUN_140069780(&pcStack_60,"Loading army controllers...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x18:
    FUN_140069780(&pcStack_60,"Loading tracking information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x19:
    FUN_140069780(&pcStack_60,"Loading cultural identities...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1a:
    FUN_140069780(&pcStack_60,"Loading agreements...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1b:
    FUN_140069780(&pcStack_60,"Loading art forms...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1c:
    FUN_140069780(&pcStack_60,"Loading occupations...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1d:
    FUN_140069780(&pcStack_60,"Loading belief systems...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1e:
    FUN_140069780(&pcStack_60,"Loading image sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1f:
    FUN_140069780(&pcStack_60,"Loading divination sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x20:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e69736f6c43;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x21:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x23;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Rebuilding temporary information...",0x24);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x22:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Preparing game...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x23:
    uStack_58 = 0;
    uStack_50 = 7;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x2164656c696146;
    FUN_140af3400(0x14266c870,&pcStack_60);
    if (uStack_48 < 0x10) goto LAB_1407da78a;
    if (0xfff < uStack_48 + 1) {
      lVar2 = *(longlong *)(pcStack_60 + -8);
      lVar4 = (longlong)pcStack_60 - lVar2;
      goto joined_r0x0001407dbc5d;
    }
    goto LAB_1407da785;
  }
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      lVar2 = *(longlong *)(pcStack_60 + -8);
      lVar4 = (longlong)pcStack_60 - lVar2;
joined_r0x0001407dbc5d:
      if (0x1f < lVar4 - 8U) {
        _invalid_parameter_noinfo_noreturn(lVar2,uStack_48 + 0x28);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_1407da785:
    load_supplier_0x15530d0();
  }
LAB_1407da78a:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_88);
  return;
}

