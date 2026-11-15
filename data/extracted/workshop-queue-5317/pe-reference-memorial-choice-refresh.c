/* reference PE:6aea05a1:02734000; memorial-choice-refresh; RVA 0x8db6f0..0x8dbce2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_choice_refresh(longlong param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_58 [32];
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x48) == 0xd3) {
    iVar11 = *(int *)(param_1 + 0x80);
    lVar13 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
    if ((lVar13 != 0) && (iVar11 != -1)) {
      iVar9 = 0;
      iVar12 = (int)lVar13 + -1;
      if (-1 < iVar12) {
        do {
          iVar7 = iVar12 + iVar9 >> 1;
          lVar13 = *(longlong *)(_DAT_14251c198 + (longlong)iVar7 * 8);
          if (*(int *)(lVar13 + 0xe0) == iVar11) {
            if (lVar13 != 0) {
              iVar11 = *(int *)(lVar13 + 0xd8);
              iVar12 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
              if ((iVar12 != 0) && (iVar11 != -1)) {
                iVar9 = 0;
                iVar12 = iVar12 + -1;
                if (iVar12 < 0) goto LAB_1408db80a;
                goto LAB_1408db7e0;
              }
            }
            break;
          }
          iVar4 = iVar7 + -1;
          if (*(int *)(lVar13 + 0xe0) < iVar11) {
            iVar9 = iVar7 + 1;
            iVar4 = iVar12;
          }
          iVar12 = iVar4;
        } while (iVar9 <= iVar12);
      }
    }
  }
  goto LAB_1408dbcbc;
  while( true ) {
    iVar4 = iVar7 + -1;
    if (*(int *)(lVar13 + 0x130) < iVar11) {
      iVar4 = iVar12;
      iVar9 = iVar7 + 1;
    }
    iVar12 = iVar4;
    if (iVar4 < iVar9) break;
LAB_1408db7e0:
    iVar7 = iVar9 + iVar12 >> 1;
    lVar13 = *(longlong *)(_DAT_142407530 + (longlong)iVar7 * 8);
    if (*(int *)(lVar13 + 0x130) == iVar11) goto LAB_1408db80c;
  }
LAB_1408db80a:
  lVar13 = 0;
LAB_1408db80c:
  if (lVar13 == 0) goto LAB_1408dbcbc;
  iVar11 = 0;
  lVar5 = FUN_1400bb3f0(*(undefined4 *)(lVar13 + 0x130),0x1423bc488);
  plVar6 = _DAT_142407eb8;
  if (lVar5 == 0) {
LAB_1408db954:
    _DAT_14266c8fc = 0x1010006;
    _DAT_14266c8f4 = param_3 + 2;
    pcStack_38 = (char *)0x0;
    uStack_30 = 0;
    _DAT_14266c8f8 = param_2;
    pcStack_38 = (char *)FUN_140071e00(0x20);
    uStack_28 = 0x11;
    uStack_20 = 0x1f;
    builtin_strncpy(pcStack_38,"No slabs engraved",0x12);
    FUN_140af3400(0x14266c870,&pcStack_38);
    if (0xf < uStack_20) {
      uVar10 = uStack_20 + 1;
      pcVar8 = pcStack_38;
      if (0xfff < uVar10) {
        uVar10 = uStack_20 + 0x28;
        pcVar8 = *(char **)(pcStack_38 + -8);
        if ((char *)0x1f < pcStack_38 + (-8 - (longlong)pcVar8)) goto LAB_1408dbc71;
      }
LAB_1408db9f2:
      workshop_supplier_0x15530d0(pcVar8,uVar10);
    }
  }
  else {
    for (; plVar6 < _DAT_142407ec0; plVar6 = plVar6 + 1) {
      if ((*(short *)(*plVar6 + 0x10c) == 0) &&
         (*(int *)(*plVar6 + 0x108) == *(int *)(lVar13 + 0xc30))) {
        iVar11 = iVar11 + 1;
      }
    }
    if (iVar11 < 1) goto LAB_1408db954;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    pcStack_38 = (char *)0x0;
    if (iVar11 < 2) {
      uStack_28 = 0xd;
      pcStack_38 = (char *)0x676e652062616c53;
      uStack_30 = 0x6465766172;
    }
    else {
      FUN_140545610(iVar11,&pcStack_38);
      FUN_140071040(&pcStack_38," slabs engraved",0xf);
    }
    _DAT_14266c8fc = 0x1000002;
    _DAT_14266c8f4 = param_3 + 2;
    _DAT_14266c8f8 = param_2;
    FUN_140af3400(0x14266c870,&pcStack_38);
    if (0xf < uStack_20) {
      uVar10 = uStack_20 + 1;
      pcVar8 = pcStack_38;
      if (0xfff < uVar10) {
        uVar10 = uStack_20 + 0x28;
        pcVar8 = *(char **)(pcStack_38 + -8);
        if ((char *)0x1f < pcStack_38 + (-8 - (longlong)*(char **)(pcStack_38 + -8))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      goto LAB_1408db9f2;
    }
  }
  param_3 = param_3 + 2;
  param_2 = param_2 + 1;
  cVar2 = FUN_1413ee0d0(lVar13);
  cVar3 = FUN_1413ee190(lVar13);
  pcStack_38 = (char *)0x0;
  uStack_30 = 0;
  _DAT_14266c8f4 = param_3;
  _DAT_14266c8f8 = param_2;
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      if (*(longlong *)(lVar13 + 0x380) == 0) {
        _DAT_14266c8fc = 0x1010006;
        pcStack_38 = (char *)FUN_140071e00(0x20);
        uStack_28 = 0x10;
        uStack_20 = 0x1f;
        builtin_strncpy(pcStack_38,"Not memorialized",0x11);
        FUN_140af3400(0x14266c870,&pcStack_38);
      }
      else {
        if ((*(byte *)(*(longlong *)(lVar13 + 0x380) + 0x1c) & 1) != 0) {
          _DAT_14266c8fc = 0x1010004;
          uStack_28 = 5;
          uStack_20 = 0xf;
          pcStack_38 = (char *)0x74736f6847;
          FUN_140af3400(0x14266c870,&pcStack_38);
          goto LAB_1408dba8c;
        }
        _DAT_14266c8fc = 0x1010006;
        pcStack_38 = (char *)FUN_140071e00(0x20);
        uStack_28 = 0x10;
        uStack_20 = 0x1f;
        builtin_strncpy(pcStack_38,"Not memorialized",0x11);
        FUN_140af3400(0x14266c870,&pcStack_38);
      }
LAB_1408dbcb3:
      FUN_140070e80(&pcStack_38);
      goto LAB_1408dbcbc;
    }
    _DAT_14266c8fc = 0x1010002;
    uStack_28 = 8;
    uStack_20 = 0xf;
    pcStack_38 = (char *)0x6465626d6f746e45;
    uStack_30 = 0;
    FUN_140af3400(0x14266c870,&pcStack_38);
LAB_1408dba8c:
    if (uStack_20 < 0x10) goto LAB_1408dbcbc;
    if (0xfff < uStack_20 + 1) {
      pcVar8 = *(char **)(pcStack_38 + -8);
      lVar13 = (longlong)pcStack_38 - (longlong)pcVar8;
joined_r0x0001408dbc6b:
      uVar10 = uStack_20 + 0x28;
      if (0x1f < lVar13 - 8U) {
LAB_1408dbc71:
        _invalid_parameter_noinfo_noreturn(pcVar8,uVar10);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    _DAT_14266c8fc = 0x1010002;
    if (cVar3 == '\0') {
      uStack_28 = 0xc;
      uStack_20 = 0xf;
      pcStack_38 = (char *)0x6c6169726f6d654d;
      uStack_30 = 0x64657a69;
      FUN_140af3400(0x14266c870,&pcStack_38);
      goto LAB_1408dbcb3;
    }
    pcStack_38 = (char *)FUN_140071e00(0x20);
    uStack_28 = 0x19;
    uStack_20 = 0x1f;
    builtin_strncpy(pcStack_38,"Entombed and memorialized",0x1a);
    FUN_140af3400(0x14266c870,&pcStack_38);
    if (uStack_20 < 0x10) goto LAB_1408dbcbc;
    if (0xfff < uStack_20 + 1) {
      pcVar8 = *(char **)(pcStack_38 + -8);
      lVar13 = (longlong)pcStack_38 - (longlong)pcVar8;
      goto joined_r0x0001408dbc6b;
    }
  }
  workshop_supplier_0x15530d0();
LAB_1408dbcbc:
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}

