/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 1414c6320..1414c6847 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void spawn_vermin_at_location
               (short *param_1,short param_2,short param_3,short param_4,short param_5,int param_6,
               undefined4 *param_7,longlong param_8)

{
  undefined2 uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  short *psVar11;
  char cVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  short *psVar18;
  ushort uVar19;
  ushort *puVar20;
  ulonglong uVar21;
  ushort *puVar22;
  short *psVar23;
  short *psVar24;
  short *psStackX_8;
  short sStackX_10;
  short sStackX_18;
  short sStackX_20;
  short sStack_76;
  ushort auStack_74 [2];
  ushort *puStack_70;
  short *psStack_68;
  ushort *puStack_60;
  ushort *puStack_58;
  
  psStackX_8 = param_1;
  sStackX_10 = param_2;
  sStackX_18 = param_3;
  sStackX_20 = param_4;
  sVar13 = FUN_140a48750(param_1 + 0x8daac,param_2);
  if ((param_8 != 0) && (*(uint *)(param_8 + 4) < (uint)(int)sVar13)) {
    sVar13 = (short)*(uint *)(param_8 + 4);
  }
  if (sVar13 < 1) {
    return;
  }
  if ((param_8 != 0) && (*(int *)(param_8 + 4) != 0x989681)) {
    *(int *)(param_8 + 4) = *(int *)(param_8 + 4) - (int)sVar13;
  }
  sStack_76 = sVar13;
  if ((param_2 < 0) ||
     ((ulonglong)(*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3) <=
      (ulonglong)(longlong)param_2)) {
    bVar9 = false;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + (longlong)param_2 * 8);
    if ((*(int *)(lVar3 + 0x1b0) < 0xb) || ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 10) & 2) == 0)
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      sStack_76 = 1;
    }
  }
  bVar10 = false;
  psStack_68 = (short *)0x0;
  puStack_60 = (ushort *)0x0;
  puVar20 = (ushort *)0x0;
  puStack_70 = (ushort *)0x0;
  puStack_58 = (ushort *)0x0;
  if (param_8 != 0) {
    uVar1 = *(undefined2 *)param_7;
    sVar2 = *(short *)(param_8 + 2);
    uVar17 = (ulonglong)sVar2;
    if (param_6 == 2) {
      if ((-1 < sVar2) &&
         (uVar17 < (ulonglong)
                   (*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3))) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + uVar17 * 8);
        uVar19 = (short)((longlong)
                         (ulonglong)(uint)(*(int *)(lVar3 + 0x180) - *(int *)(lVar3 + 0x178)) >> 3)
                 - 1;
        auStack_74[0] = uVar19;
        if (-1 < (short)uVar19) {
          puVar22 = (ushort *)0x0;
          do {
            auStack_74[0] = uVar19;
            cVar12 = func_0x000140702630(*(undefined8 *)
                                          (*(longlong *)(lVar3 + 0x178) + (ulonglong)uVar19 * 8),
                                         uVar1);
            if (cVar12 == '\0') {
              if (puVar22 == puVar20) {
                FUN_140071040(&psStack_68,puVar22,auStack_74);
                puVar20 = puStack_58;
                puVar22 = puStack_60;
              }
              else {
                *puVar22 = uVar19;
                puStack_60 = puVar22 + 1;
                puVar22 = puStack_60;
              }
            }
            uVar19 = uVar19 - 1;
            auStack_74[0] = uVar19;
          } while (-1 < (short)uVar19);
          goto LAB_1414c65f9;
        }
      }
    }
    else if ((-1 < sVar2) &&
            (uVar17 < (ulonglong)
                      (*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + uVar17 * 8);
      uVar19 = (short)((longlong)
                       (ulonglong)(uint)(*(int *)(lVar3 + 0x180) - *(int *)(lVar3 + 0x178)) >> 3) -
               1;
      auStack_74[0] = uVar19;
      if (-1 < (short)uVar19) {
        puVar22 = (ushort *)0x0;
        do {
          lVar4 = *(longlong *)(lVar3 + 0x178);
          auStack_74[0] = uVar19;
          cVar12 = func_0x000140702630(*(undefined8 *)(lVar4 + (ulonglong)uVar19 * 8),uVar1);
          if ((cVar12 == '\0') &&
             ((lVar4 = *(longlong *)(lVar4 + (ulonglong)uVar19 * 8), *(int *)(lVar4 + 0x6b0) < 5 ||
              ((*(byte *)(*(longlong *)(lVar4 + 0x6a8) + 4) & 8) == 0)))) {
            if (puVar22 == puVar20) {
              FUN_140071040(&psStack_68,puVar22,auStack_74);
              puVar20 = puStack_58;
              puVar22 = puStack_60;
            }
            else {
              *puVar22 = uVar19;
              puStack_60 = puVar22 + 1;
              puVar22 = puStack_60;
            }
          }
          uVar19 = uVar19 - 1;
          auStack_74[0] = uVar19;
        } while (-1 < (short)uVar19);
        goto LAB_1414c65f9;
      }
    }
  }
  puVar22 = (ushort *)0x0;
  puVar20 = puStack_70;
LAB_1414c65f9:
  puStack_70 = puVar20;
  psVar11 = psStack_68;
  sVar2 = sStackX_10;
  psVar24 = psStackX_8;
  uVar17 = (ulonglong)sStackX_10;
  do {
    psVar18 = (short *)FUN_1405c1410();
    psVar18[2] = sStackX_18;
    psVar18[3] = sStackX_20;
    psVar18[4] = param_5;
    *psVar18 = sVar2;
    uVar21 = (longlong)puVar22 - (longlong)psVar11 >> 1;
    if (uVar21 == 0) {
      if (((sVar2 < 0) ||
          (lVar3 = *(longlong *)(psVar24 + 0x8dabc),
          (ulonglong)(*(longlong *)(psVar24 + 0x8dac0) - lVar3 >> 3) <= uVar17)) ||
         (lVar3 = *(longlong *)(lVar3 + uVar17 * 8),
         uVar21 = *(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3, (uint)uVar21 < 2
         )) {
        sVar14 = 0;
      }
      else {
        uVar15 = FUN_140eb68b0();
        sVar14 = (short)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U));
      }
    }
    else if ((uint)uVar21 < 2) {
      sVar14 = *psVar11;
    }
    else {
      uVar15 = FUN_140eb68b0();
      sVar14 = psVar11[(int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                       0x7fffffff) /
                            ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U))];
    }
    psVar18[1] = sVar14;
    *(undefined1 *)(psVar18 + 5) = 1;
    psVar23 = psVar18;
    iVar16 = func_0x000140a45370(psVar18);
    uVar15 = 20000;
    if (param_6 != 7) {
      uVar15 = 9000;
    }
    psVar23[6] = (short)((longlong)(ulonglong)uVar15 / (longlong)iVar16);
    uVar6 = param_7[1];
    uVar7 = param_7[2];
    uVar8 = param_7[3];
    *(undefined4 *)(psVar18 + 0x10) = *param_7;
    *(undefined4 *)(psVar18 + 0x12) = uVar6;
    *(undefined4 *)(psVar18 + 0x14) = uVar7;
    *(undefined4 *)(psVar18 + 0x16) = uVar8;
    *(undefined8 *)(psVar18 + 0x18) = *(undefined8 *)(param_7 + 4);
    psVar18[0x1c] = (short)param_6;
    iVar16 = (int)sVar13;
    if (!bVar9) {
      iVar16 = 1;
    }
    *(int *)(psVar18 + 0xe) = iVar16;
    if (bVar10) {
      *(uint *)(psVar18 + 0xc) = *(uint *)(psVar18 + 0xc) | 8;
    }
    else {
      bVar10 = true;
    }
    if ((*(byte *)(psVar18 + 0xc) & 2) != 0) {
      psStackX_8 = psVar18;
      if (_DAT_1423d15a0 == _DAT_1423d15a8) {
        FUN_140070bd0(0x1423d1598,_DAT_1423d15a0,&psStackX_8);
      }
      else {
        *_DAT_1423d15a0 = (longlong)psVar18;
        _DAT_1423d15a0 = _DAT_1423d15a0 + 1;
      }
    }
    sStack_76 = sStack_76 + -1;
  } while (0 < sStack_76);
  if (psVar11 != (short *)0x0) {
    uVar17 = ((longlong)puStack_70 - (longlong)psVar11 >> 1) * 2;
    psVar24 = psVar11;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      psVar24 = *(short **)(psVar11 + -4);
      if (0x1f < (ulonglong)((longlong)psVar11 + (-8 - (longlong)psVar24))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    func_0x000141539680(psVar24,uVar17);
  }
  return;
}

