/* Actual Ghidra output; researcher-assigned name. VA 0x14147ba40..0x14147c087; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cavern_event(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  uint uVar11;
  short sVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  short *psVar16;
  ushort uVar17;
  ushort uVar18;
  longlong lVar19;
  longlong lVar20;
  ushort *puVar21;
  longlong lVar22;
  uint uVar23;
  short sVar24;
  longlong lVar25;
  undefined8 *extraout_XMM0_Qa;
  undefined1 auStack_e8 [32];
  uint uStack_c8;
  ushort uStack_c4;
  short sStack_c2;
  longlong lStack_c0;
  ushort *puStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  short sStack_a2;
  undefined2 uStack_a0;
  ushort uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  longlong lStack_58;
  undefined8 *apuStack_50 [2];
  undefined8 uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  sVar24 = *(short *)(param_1 + 0x116be0) + -1;
  if (-1 < sVar24) {
    lVar13 = 0;
    lVar22 = (longlong)sVar24 << 3;
    do {
      sVar12 = *(short *)(param_1 + 0x116be4) + -1;
      if (-1 < sVar12) {
        lVar25 = (longlong)sVar12 << 3;
        do {
          lVar20 = *(longlong *)(lVar25 + *(longlong *)(lVar22 + *(longlong *)(param_1 + 0x116bd8)))
          ;
          if ((lVar20 != 0) &&
             (iVar14 = (int)(*(longlong *)(lVar20 + 0x1830) - *(longlong *)(lVar20 + 0x1828) >> 3) +
                       -1, -1 < iVar14)) {
            psVar16 = (short *)(lVar13 * 0xc + 0x141bd5a82);
            lVar19 = (longlong)iVar14 << 3;
            do {
              lVar15 = *(longlong *)(lVar19 + *(longlong *)(lVar20 + 0x1828));
              if (((*(short *)(lVar15 + 0x14) == *(short *)(lVar20 + 0x1840)) &&
                  (uVar23 = *(uint *)(lVar15 + 0x60), (uVar23 & 2) == 0)) ||
                 (uVar23 = *(uint *)(lVar15 + 0x60), (uVar23 & 4) != 0)) {
                *(uint *)(lVar15 + 0x60) = uVar23 | 1;
                psVar16[-1] = sVar24;
                *psVar16 = sVar12;
                psVar16[1] = (short)iVar14;
                uVar11 = uVar11 + 1;
                lVar13 = lVar13 + 1;
                psVar16 = psVar16 + 6;
              }
              else {
                *(uint *)(lVar15 + 0x60) = uVar23 & 0xfffffffe;
              }
              lVar19 = lVar19 + -8;
              iVar14 = iVar14 + -1;
            } while (-1 < iVar14);
          }
          lVar25 = lVar25 + -8;
          sVar12 = sVar12 + -1;
        } while (-1 < sVar12);
      }
      lVar22 = lVar22 + -8;
      sVar24 = sVar24 + -1;
    } while (-1 < sVar24);
    if (0 < (int)uVar11) {
      lStack_b0 = 0;
      lStack_58 = 1;
      do {
        uVar10 = (ulonglong)uVar11;
        lStack_58 = 1 - lStack_58;
        lStack_b0 = 1 - lStack_b0;
        uStack_c8 = uVar11 - 1;
        uVar11 = 0;
        lVar13 = 0;
        if ((int)uStack_c8 < 0) break;
        puStack_b8 = (ushort *)(((lStack_58 * 120000 + uVar10) * 3 + -2) * 4 + 0x141bd5a80);
        do {
          lVar25 = *(longlong *)(param_1 + 0x116bd8);
          lVar22 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(lVar25 + (longlong)(short)puStack_b8[-2] * 8) +
                        (longlong)(short)puStack_b8[-1] * 8) + 0x1828) + (ulonglong)*puStack_b8 * 8)
          ;
          lVar20 = *(longlong *)(lVar22 + 0x18);
          iVar14 = (int)(*(longlong *)(lVar22 + 0x20) - lVar20 >> 1) + -1;
          lVar19 = (longlong)iVar14;
          if (-1 < iVar14) {
            lVar15 = lVar19 * 2;
            do {
              sVar24 = *(short *)(*(longlong *)(lVar22 + 0x30) + lVar19 * 2);
              uVar18 = *(ushort *)(*(longlong *)(lVar22 + 0x48) + lVar19 * 2);
              lVar2 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(lVar25 + (longlong)*(short *)(lVar20 + lVar15) * 8) +
                           (longlong)sVar24 * 8) + 0x1828) + (ulonglong)uVar18 * 8);
              if ((*(byte *)(lVar2 + 0x60) & 1) == 0) {
                lVar25 = lStack_b0 * 120000 + lVar13;
                *(short *)(lVar25 * 0xc + 0x141bd5a80) = *(short *)(lVar20 + lVar15);
                *(short *)(lVar25 * 0xc + 0x141bd5a82) = sVar24;
                *(ushort *)(lVar25 * 0xc + 0x141bd5a84) = uVar18;
                uVar11 = uVar11 + 1;
                lVar13 = lVar13 + 1;
                puVar1 = (uint *)(lVar2 + 0x60);
                *puVar1 = *puVar1 | 1;
                lVar25 = *(longlong *)(param_1 + 0x116bd8);
                lVar20 = *(longlong *)(lVar22 + 0x18);
              }
              lVar19 = lVar19 + -1;
              lVar15 = lVar15 + -2;
            } while (-1 < lVar19);
          }
          uStack_c8 = uStack_c8 - 1;
          puStack_b8 = puStack_b8 + -6;
        } while (-1 < (int)uStack_c8);
      } while (0 < (int)uVar11);
    }
  }
  uVar11 = 0xffff8ad0;
  sStack_c2 = *(short *)(param_1 + 0x116be0) + -1;
  lStack_c0 = param_1;
  if (-1 < sStack_c2) {
    uVar17 = sStack_c2 * 0x10;
    uStack_c8 = CONCAT22(uStack_c8._2_2_,uVar17);
    puVar21 = (ushort *)((longlong)sStack_c2 << 3);
    uVar23 = (uint)uVar17;
    uVar18 = uVar17;
    do {
      sVar12 = *(short *)(param_1 + 0x116be4) + -1;
      sVar24 = sStack_c2;
      if (-1 < sVar12) {
        uVar9 = sVar12 * 0x10;
        lStack_b0 = (longlong)sVar12 << 3;
        puStack_b8 = puVar21;
        do {
          lVar13 = *(longlong *)
                    (lStack_b0 +
                    *(longlong *)((longlong)puVar21 + *(longlong *)(param_1 + 0x116bd8)));
          if ((lVar13 != 0) &&
             (iVar14 = (int)(*(longlong *)(lVar13 + 0x1830) - *(longlong *)(lVar13 + 0x1828) >> 3) +
                       -1, param_1 = lStack_c0, -1 < iVar14)) {
            lVar22 = (longlong)iVar14 << 3;
            uStack_c4 = uVar9;
            do {
              lVar25 = *(longlong *)(lVar22 + *(longlong *)(lVar13 + 0x1828));
              if ((*(byte *)(lVar25 + 0x60) & 1) == 0) {
                FUN_14055ab70(lVar25,sVar24,sVar12);
                uVar9 = uStack_c4;
                uVar18 = (ushort)uStack_c8;
                sVar24 = sStack_c2;
                if ((short)uVar11 == -30000) {
                  lVar25 = *(longlong *)(lVar22 + *(longlong *)(lVar13 + 0x1828));
                  uVar11 = (uStack_c8 & 0xffff) +
                           ((int)*(short *)(lVar25 + 0x10) + (int)*(short *)(lVar25 + 0xc)) / 2;
                  uVar23 = (uint)uStack_c4 +
                           ((int)*(short *)(lVar25 + 0x12) + (int)*(short *)(lVar25 + 0xe)) / 2;
                  uVar17 = *(short *)(lVar25 + 0x14) - 1;
                }
              }
              lVar22 = lVar22 + -8;
              iVar14 = iVar14 + -1;
              param_1 = lStack_c0;
              puVar21 = puStack_b8;
            } while (-1 < iVar14);
          }
          lStack_b0 = lStack_b0 + -8;
          uVar9 = uVar9 - 0x10;
          sVar12 = sVar12 + -1;
          uStack_c4 = uVar9;
        } while (-1 < sVar12);
      }
      sStack_c2 = sVar24 + -1;
      puVar21 = puVar21 + -4;
      uVar18 = uVar18 - 0x10;
      uStack_c8 = CONCAT22(uStack_c8._2_2_,uVar18);
    } while (-1 < sStack_c2);
    puStack_b8 = puVar21;
    if ((short)uVar11 != -30000) {
      uStack_9c = 0;
      uStack_98 = 0x8ad08ad0;
      uStack_94 = 0x8ad0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0xffffffffffffffff;
      uStack_70 = 0xffffffff;
      uStack_6c = 0;
      uStack_68 = 0xffffffff;
      uStack_a8 = 0x40052;
      uStack_a4 = 1;
      uStack_8c = 5000;
      uStack_a0 = (undefined2)uVar23;
      sStack_a2 = (short)uVar11;
      uStack_9e = uVar17;
      sVar24 = FUN_1414b8d50(param_1,uVar11 & 0xffff,uVar23 & 0xffff);
      uStack_40 = 0;
      uStack_38 = 0;
      apuStack_50[0] = extraout_XMM0_Qa;
      if ((short)uVar17 < sVar24) {
        apuStack_50[0] = (undefined8 *)FUN_140071e00(0x30);
        uVar4 = _UNK_1417a9090;
        uStack_40 = _DAT_1417abc30;
        uStack_38 = _UNK_1417abc38;
        *apuStack_50[0] = _DAT_1417a9088;
        apuStack_50[0][1] = uVar4;
        uVar7 = _UNK_1417a90a4;
        uVar6 = _UNK_1417a90a0;
        uVar5 = _UNK_1417a909c;
        *(undefined4 *)(apuStack_50[0] + 2) = _DAT_1417a9098;
        *(undefined4 *)((longlong)apuStack_50[0] + 0x14) = uVar5;
        *(undefined4 *)(apuStack_50[0] + 3) = uVar6;
        *(undefined4 *)((longlong)apuStack_50[0] + 0x1c) = uVar7;
        *(undefined4 *)(apuStack_50[0] + 4) = _DAT_1417a90a8;
        *(undefined2 *)((longlong)apuStack_50[0] + 0x24) = _DAT_1417a90ac;
        *(undefined1 *)((longlong)apuStack_50[0] + 0x26) = 0;
        FUN_1400e5250(param_1 + 0x112360,apuStack_50,&uStack_a8);
        if (uStack_38 < 0x10) goto LAB_14147c05a;
        uVar10 = uStack_38 + 1;
        puVar8 = apuStack_50[0];
        if (0xfff < uVar10) {
          uVar10 = uStack_38 + 0x28;
          puVar8 = (undefined8 *)apuStack_50[0][-1];
          if (0x1f < (ulonglong)((longlong)apuStack_50[0] + (-8 - (longlong)puVar8))) {
            _invalid_parameter_noinfo_noreturn(puVar8,uVar10);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      else {
        apuStack_50[0] = (undefined8 *)FUN_140071e00(0x30);
        uVar4 = _UNK_1417a90b8;
        uStack_40 = _DAT_1417abc40;
        uStack_38 = _UNK_1417abc48;
        *apuStack_50[0] = _DAT_1417a90b0;
        apuStack_50[0][1] = uVar4;
        uVar7 = _UNK_1417a90cc;
        uVar6 = _UNK_1417a90c8;
        uVar5 = _UNK_1417a90c4;
        *(undefined4 *)(apuStack_50[0] + 2) = _DAT_1417a90c0;
        *(undefined4 *)((longlong)apuStack_50[0] + 0x14) = uVar5;
        *(undefined4 *)(apuStack_50[0] + 3) = uVar6;
        *(undefined4 *)((longlong)apuStack_50[0] + 0x1c) = uVar7;
        *(undefined4 *)(apuStack_50[0] + 4) = _DAT_1417a90d0;
        *(undefined2 *)((longlong)apuStack_50[0] + 0x24) = _DAT_1417a90d4;
        *(undefined1 *)((longlong)apuStack_50[0] + 0x26) = DAT_1417a90d6;
        *(undefined1 *)((longlong)apuStack_50[0] + 0x27) = 0;
        FUN_1400e5250(param_1 + 0x112360,apuStack_50,&uStack_a8);
        if (uStack_38 < 0x10) goto LAB_14147c05a;
        uVar10 = uStack_38 + 1;
        puVar8 = apuStack_50[0];
        if (0xfff < uVar10) {
          uVar10 = uStack_38 + 0x28;
          puVar8 = (undefined8 *)apuStack_50[0][-1];
          if (0x1f < (ulonglong)((longlong)apuStack_50[0] + (-8 - (longlong)apuStack_50[0][-1]))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      func_0x0001415530d0(puVar8,uVar10);
    }
  }
LAB_14147c05a:
  FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_e8);
  return;
}

