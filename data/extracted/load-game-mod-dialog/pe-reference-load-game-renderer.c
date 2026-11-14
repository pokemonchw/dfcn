/* reference PE:6aea05a1:02734000; load-game-renderer; RVA 0x7dbdf0..0x7dd92c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_load_game_renderer(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  if (((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) && (*(ushort *)(param_1 + 0x72c) < 0xb)
     ) {
                    /* WARNING: Switch is manually overridden */
    switch(*(ushort *)(param_1 + 0x72c)) {
    case 0:
      _DAT_14266cadc = 5;
      _DAT_14266cae0 = 5;
      break;
    case 1:
      _DAT_14266cadc = 6;
      _DAT_14266cae0 = 6;
    }
  }
  load_supplier_0xc4b030(&iStack_64,&iStack_68);
  FUN_1408d8160(0,0xff,0);
  iVar10 = _DAT_1423efc08 + -1;
  if (_DAT_14266cadc == -1) {
    _DAT_14266c8fc = 0x1000006;
    iVar8 = 0;
    _DAT_14266c8f4 = iStack_64;
    if (-1 < iVar10) {
      do {
        for (; _DAT_14266c8f4 <= iStack_68; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar8 == 0) {
            uVar5 = _DAT_1423f312c;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3130, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f3134;
            }
          }
          else if (iVar8 == iVar10) {
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
          _DAT_14266c8f8 = iVar8;
          load_supplier_0xaf4570(0x14266c870,uVar5);
        }
        iVar8 = iVar8 + 1;
        _DAT_14266c8f4 = iStack_64;
      } while (iVar8 <= iVar10);
    }
  }
  _DAT_14266c8fc = 0x1010007;
  iVar8 = iStack_64 + 5;
  iVar1 = iStack_68 + -6;
  iVar6 = *(int *)(param_1 + 0x198) + _DAT_142660ed8 + _DAT_142660ed4;
  iVar9 = 0;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  iVar6 = ((iVar1 - iVar8) * iVar9) / ((int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3) * 2 + 0x35) +
          iVar8;
  iVar9 = iVar8;
  if (iVar8 <= iVar6) {
    iVar9 = iVar6;
  }
  iVar6 = iStack_68 + -7;
  if (iVar9 <= iStack_68 + -7) {
    iVar6 = iVar9;
  }
  iVar10 = iVar10 / 5;
  for (_DAT_14266c8f4 = iVar8; _DAT_14266c8f4 <= iVar1; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
    if (iVar6 < _DAT_14266c8f4) {
      uVar5 = _DAT_1423f2d24;
      if ((_DAT_14266c8f4 != iVar8) && (uVar5 = _DAT_1423f2d2c, _DAT_14266c8f4 != iVar1)) {
        uVar5 = _DAT_1423f2d28;
      }
    }
    else {
      uVar5 = _DAT_1423f2d18;
      if ((_DAT_14266c8f4 != iVar8) && (uVar5 = _DAT_1423f2d1c, _DAT_14266c8f4 == iVar1)) {
        uVar5 = _DAT_1423f2d20;
      }
    }
    _DAT_14266c8f8 = iVar10 + 6;
    load_supplier_0xaf4ba0(0x14266c870,uVar5,0);
  }
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar10 + 1;
  pcStack_60 = (char *)0x0;
  uStack_58 = 0;
  _DAT_14266c8f4 = iVar8;
  pcStack_60 = (char *)FUN_140071e00(0x30);
  uStack_50 = 0x28;
  uStack_48 = 0x2f;
  builtin_strncpy(pcStack_60,"Loading world and continuing active game",0x29);
  FUN_140af3400(0x14266c870,&pcStack_60);
  if (0xf < uStack_48) {
    uVar7 = uStack_48 + 1;
    pcVar4 = pcStack_60;
    if (0xfff < uVar7) {
      uVar7 = uStack_48 + 0x28;
      pcVar4 = *(char **)(pcStack_60 + -8);
      if ((char *)0x1f < pcStack_60 + (-8 - (longlong)pcVar4)) goto LAB_1407dd563;
    }
    load_supplier_0x15530d0(pcVar4,uVar7);
  }
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar10 + 4;
  _DAT_14266c8f4 = iVar8;
  if (0x32 < *(uint *)(param_1 + 0x198)) goto LAB_1407dd901;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x198)) {
  case 0:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e696e65704f;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 1:
    if (0x39 < _DAT_142660e80 - 1U) goto override_jmp_1407dc25c_case_19;
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
      iVar8 = _DAT_142660ed4;
LAB_1407dc2b5:
      FUN_140af3400(0x14266c870,*(undefined8 *)(_DAT_142660f60 + (longlong)iVar8 * 8));
      goto override_jmp_1407dc25c_case_19;
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
      goto override_jmp_1407dc25c_case_19;
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
        iVar8 = _DAT_142660ed8;
        goto LAB_1407dc2b5;
      }
      FUN_140069780(&pcStack_60,"Preparing graphics...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x39:
      FUN_140069780(&pcStack_60,"Finishing...");
      FUN_140af3400(0x14266c870,&pcStack_60);
    }
    FUN_140070e80(&pcStack_60);
override_jmp_1407dc25c_case_19:
    if ((DAT_142660e8c != '\0') || (DAT_142660e8d != '\0')) {
      load_mod_load_dialog(&DAT_142660e80,iStack_64,iStack_68,iVar10 + 6);
    }
    goto LAB_1407dd901;
  case 2:
    FUN_140069780(&pcStack_60,&DAT_141620980);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 3:
    FUN_140069780(&pcStack_60,"Loading items...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 4:
    FUN_140069780(&pcStack_60,"Loading units...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 5:
    FUN_140069780(&pcStack_60,"Loading jobs...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 6:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading schedules...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 7:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x16;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading projectiles...",0x17);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 8:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading buildings...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 9:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading machines...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x16;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading flow guides...",0x17);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xb:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x12;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading effects...",0x13);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xc:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading entities...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xd:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x23;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading local animal populations...",0x24);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xe:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading events...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xf:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading mandates...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x16;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading work quotas...",0x17);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x11:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading world events...",0x18);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x12:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1b;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading coin information...",0x1c);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x13:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading squads...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x14:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading formations...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x15:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading activities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x16:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading interactions...",0x18);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x17:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1a;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading written content...",0x1b);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x18:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading identities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x19:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading incidents...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x1a:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading crimes...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x1b:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading vehicles...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
LAB_1407dc1fb:
    if (0xf < uStack_48) {
      if (0xfff < uStack_48 + 1) {
        pcVar4 = *(char **)(pcStack_60 + -8);
        lVar3 = (longlong)pcStack_60 - (longlong)pcVar4;
joined_r0x0001407dd55d:
        uVar7 = uStack_48 + 0x28;
        if (0x1f < lVar3 - 8U) {
LAB_1407dd563:
          _invalid_parameter_noinfo_noreturn(pcVar4,uVar7);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_1407dc235:
      load_supplier_0x15530d0();
    }
    goto LAB_1407dd901;
  case 0x1c:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading armies...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    if (uStack_48 < 0x10) goto LAB_1407dd901;
    if (0xfff < uStack_48 + 1) {
      pcVar4 = *(char **)(pcStack_60 + -8);
      lVar3 = (longlong)pcStack_60 - (longlong)pcVar4;
      goto joined_r0x0001407dd55d;
    }
    goto LAB_1407dc235;
  case 0x1d:
    FUN_140069780(&pcStack_60,"Loading army controllers...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x1e:
    FUN_140069780(&pcStack_60,"Loading tracking information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x1f:
    FUN_140069780(&pcStack_60,"Loading cultural identities...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x20:
    FUN_140069780(&pcStack_60,"Loading agreements...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x21:
    FUN_140069780(&pcStack_60,"Loading art forms...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x22:
    FUN_140069780(&pcStack_60,"Loading occupations...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x23:
    FUN_140069780(&pcStack_60,"Loading belief systems...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x24:
    FUN_140069780(&pcStack_60,"Loading image sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x25:
    FUN_140069780(&pcStack_60,"Loading divination sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x26:
    FUN_140069780(&pcStack_60,"Loading announcements...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x27:
    FUN_140069780(&pcStack_60,"Loading fortress information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x28:
    FUN_140069780(&pcStack_60,"Loading world information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x29:
    FUN_140069780(&pcStack_60,&DAT_1416cda80);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2a:
    FUN_140069780(&pcStack_60,&DAT_1416cda98);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2b:
    FUN_140069780(&pcStack_60,"Loading adventure...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2c:
    FUN_140069780(&pcStack_60,"Loading general information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2d:
    FUN_140069780(&pcStack_60,"Closing file...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2e:
    FUN_140069780(&pcStack_60,&DAT_1416cd960);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2f:
    FUN_140069780(&pcStack_60,"Rebuilding more temporary information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x30:
    FUN_140069780(&pcStack_60,"Preparing game screen...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x31:
    FUN_140069780(&pcStack_60,"Handling compatibility issues...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x32:
    FUN_140069780(&pcStack_60,"Finishing...");
    FUN_140af3400(0x14266c870,&pcStack_60);
  }
  FUN_140070e80(&pcStack_60);
LAB_1407dd901:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_88);
  return;
}

