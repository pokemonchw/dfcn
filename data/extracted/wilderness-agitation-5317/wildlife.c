
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aba230(ulonglong param_1,byte param_2,char param_3,short param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort *puVar5;
  longlong lVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ushort uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  undefined8 *puVar35;
  short *psVar36;
  undefined8 *puVar37;
  short sVar38;
  ulonglong uVar39;
  int *piVar40;
  short *psVar41;
  ushort *puVar42;
  short sVar43;
  ushort uVar44;
  ushort *puVar45;
  int *piVar46;
  undefined8 uVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  longlong *plVar51;
  int iVar52;
  code *pcVar53;
  ushort *puVar54;
  uint uVar55;
  uint uStackX_10;
  ulonglong in_stack_fffffffffffffe38;
  ulonglong in_stack_fffffffffffffe40;
  ushort auStack_1b4 [2];
  char acStack_1b0 [4];
  short asStack_1ac [2];
  ushort auStack_1a8 [4];
  ushort *puStack_1a0;
  char cStack_198;
  int iStack_190;
  uint uStack_18c;
  char cStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  short *psStack_130;
  short *psStack_128;
  undefined8 *puStack_120;
  ushort *puStack_118;
  ushort *puStack_110;
  longlong lStack_108;
  ushort *puStack_100;
  ushort *puStack_f8;
  ulonglong uStack_f0;
  ushort *puStack_e8;
  ushort *puStack_e0;
  longlong lStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  longlong lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ushort *puStack_70;
  ushort *puStack_68;
  ulonglong uStack_60;
  short *psStack_58;
  short *psStack_50;
  
  uStackX_10 = CONCAT31(uStackX_10._1_3_,param_2);
  uVar30 = 0;
  uVar49 = 0;
  uVar48 = 0;
  if ((param_2 == 3) &&
     (iVar14 = (int)(_DAT_142407550 - (longlong)_DAT_142407548 >> 3) + -1, lVar22 = (longlong)iVar14
     , uVar26 = uVar30, -1 < iVar14)) {
    do {
      if (((*(uint *)(_DAT_142407548[lVar22] + 0x110) & 0x2000102) == 0) &&
         ((*(uint *)(_DAT_142407548[lVar22] + 0x114) & 0x40000) != 0)) {
        uVar26 = (ulonglong)((int)uVar26 + 1);
      }
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
    if (0x22 < (int)uVar26) {
      return;
    }
  }
  uVar15 = FUN_140ece790();
  if (param_2 != 3) {
    uVar48 = (uint)(uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff
                   < 0x20000000);
  }
  lStack_88 = CONCAT44(lStack_88._4_4_,uVar48);
  cVar11 = (char)uVar48;
  uStack_98 = CONCAT44(uStack_98._4_4_,-(uint)(cVar11 != '\0')) & 0xffffffff0093fc20;
  uVar26 = param_1;
  if (param_4 != -1) {
    uStack_170 = callee_1414b6eb0(param_1,0,0);
    if (uStack_170 == 0) {
      return;
    }
    uVar48 = *(uint *)(param_1 + 0x116bf8) & 0x8000000f;
    if ((int)uVar48 < 0) {
      uVar48 = (uVar48 - 1 | 0xfffffff0) + 1;
    }
    uVar49 = *(uint *)(param_1 + 0x116bfc) & 0x8000000f;
    if ((int)uVar49 < 0) {
      uVar49 = (uVar49 - 1 | 0xfffffff0) + 1;
    }
    uVar15 = (*(int *)(param_1 + 0x116bec) + -1) / 0x30 + *(uint *)(param_1 + 0x116bf8) & 0x8000000f
    ;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
    }
    uVar20 = (*(int *)(param_1 + 0x116bf0) + -1) / 0x30 + *(uint *)(param_1 + 0x116bfc) & 0x8000000f
    ;
    if ((int)uVar20 < 0) {
      uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
    }
    uVar44 = (ushort)uVar48;
    uVar55 = uVar15;
    if ((short)uVar44 <= (short)(ushort)uVar15) {
      uVar55 = CONCAT22((short)(uVar15 >> 0x10),uVar44);
      uVar44 = (ushort)uVar15;
      uVar48 = uVar15;
    }
    uVar48 = uVar48 & 0xffff;
    uStack_180 = CONCAT44(uStack_180._4_4_,uVar55);
    sVar43 = (short)uVar49;
    sVar19 = (short)uVar20;
    sVar38 = sVar43;
    if (sVar43 <= sVar19) {
      sVar38 = sVar19;
    }
    uStack_150 = CONCAT62(uStack_150._2_6_,sVar38);
    if (sVar43 <= sVar19) {
      uVar20 = CONCAT22((short)(uVar20 >> 0x10),sVar43);
    }
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,uVar20);
    lStack_b8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    lStack_138 = 0;
    psStack_130 = (short *)0x0;
    psStack_128 = (short *)0x0;
    lStack_108 = 0;
    puStack_100 = (ushort *)0x0;
    puStack_f8 = (ushort *)0x0;
    puStack_120 = (undefined8 *)0x0;
    puStack_118 = (ushort *)0x0;
    puStack_110 = (ushort *)0x0;
    uStack_f0 = 0;
    puStack_e8 = (ushort *)0x0;
    puStack_e0 = (ushort *)0x0;
    lStack_d8 = 0;
    puStack_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    asStack_1ac[0] = (short)uVar55;
    uStack_178 = (ulonglong)(short)uVar20;
    puVar37 = (undefined8 *)0x0;
    psVar41 = (short *)0x0;
    puVar54 = (ushort *)0x0;
    puVar42 = (ushort *)0x0;
    puVar45 = (ushort *)0x0;
    puVar34 = (undefined1 *)0x0;
    auStack_1a8[0] = uVar44;
    if (asStack_1ac[0] <= (short)uVar44) {
      uStack_168 = (ulonglong)sVar38;
      do {
        uStack_158 = (longlong)asStack_1ac[0] * 0x10;
        lVar22 = uStack_170 + (uStack_158 + uStack_178) * 0x18;
        plStack_90 = (longlong *)(lVar22 + 0x22d8);
        uVar49 = *(int *)(lVar22 + 0x22e0) - *(int *)plStack_90;
        sVar38 = (short)((longlong)(ulonglong)uVar49 >> 3) + -1;
        plStack_160 = (longlong *)CONCAT62((int6)(uint6)(ushort)(uVar49 >> 0x10) >> 3,sVar38);
        puVar35 = puStack_a8;
        if (-1 < sVar38) {
          uStack_148 = (longlong)sVar38 << 3;
          do {
            puVar5 = *(ushort **)(uStack_148 + *plStack_90);
            puStack_1a0 = puVar5;
            if ((*(int *)(puVar5 + 2) != -1) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x250) +
                            (longlong)*(int *)(puVar5 + 2) * 8) + 0x84) == param_4)) {
              if (puVar37 == puVar35) {
                FUN_1400bc360(&lStack_b8,puVar37,&puStack_1a0);
              }
              else {
                *puVar37 = puVar5;
                puStack_b0 = puVar37 + 1;
              }
              puVar37 = puStack_b0;
              if (psVar41 == psStack_128) {
                FUN_140072450(&lStack_138,psVar41,puVar5 + 2);
              }
              else {
                *(undefined4 *)psVar41 = *(undefined4 *)(puVar5 + 2);
                psStack_130 = psVar41 + 2;
              }
              psVar41 = psStack_130;
              if (puVar54 == puStack_f8) {
                FUN_140072450(&lStack_108,puVar54);
              }
              else {
                *(undefined4 *)puVar54 = *(undefined4 *)(puVar5 + 4);
                puStack_100 = puVar54 + 2;
              }
              puVar54 = puStack_100;
              auStack_1b4[0] = (asStack_1ac[0] - (short)uStack_180) * 0x30;
              if (puVar42 == puStack_110) {
                FUN_140072670(&puStack_120,puVar42,auStack_1b4);
              }
              else {
                *puVar42 = auStack_1b4[0];
                puStack_118 = puVar42 + 1;
              }
              puVar42 = puStack_118;
              auStack_1b4[0] = 0;
              if (puVar45 == puStack_e0) {
                FUN_140072670(&uStack_f0,puVar45,auStack_1b4);
              }
              else {
                *puVar45 = 0;
                puStack_e8 = puVar45 + 1;
              }
              puVar45 = puStack_e8;
              acStack_1b0[0] = '\0';
              if (puVar34 == puStack_c8) {
                FUN_1401fd030(&lStack_d8,puVar34,acStack_1b0);
                puVar34 = puStack_d0;
                puVar35 = puStack_a8;
              }
              else {
                *puVar34 = 0;
                puStack_d0 = puVar34 + 1;
                puVar34 = puStack_d0;
                puVar35 = puStack_a8;
              }
            }
            sVar38 = (short)plStack_160 + -1;
            plStack_160 = (longlong *)CONCAT62((int6)((ulonglong)plStack_160 >> 0x10),sVar38);
            uStack_148 = uStack_148 - 8;
          } while (-1 < sVar38);
          uVar48 = (uint)auStack_1a8[0];
        }
        lVar22 = uStack_170 + (uStack_158 + uStack_168) * 0x18;
        plStack_90 = (longlong *)(lVar22 + 0x22d8);
        uVar49 = *(int *)(lVar22 + 0x22e0) - *(int *)plStack_90;
        sVar38 = (short)((longlong)(ulonglong)uVar49 >> 3) + -1;
        plStack_160 = (longlong *)CONCAT62((int6)(uint6)(ushort)(uVar49 >> 0x10) >> 3,sVar38);
        if (-1 < sVar38) {
          uStack_148 = (longlong)sVar38 << 3;
          do {
            puVar5 = *(ushort **)(uStack_148 + *plStack_90);
            puStack_1a0 = puVar5;
            if ((*(int *)(puVar5 + 2) != -1) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x250) +
                            (longlong)*(int *)(puVar5 + 2) * 8) + 0x84) == param_4)) {
              if (puVar37 == puVar35) {
                FUN_1400bc360(&lStack_b8,puVar37,&puStack_1a0);
              }
              else {
                *puVar37 = puVar5;
                puStack_b0 = puVar37 + 1;
              }
              puVar37 = puStack_b0;
              if (psVar41 == psStack_128) {
                FUN_140072450(&lStack_138,psVar41);
              }
              else {
                *(undefined4 *)psVar41 = *(undefined4 *)(puVar5 + 2);
                psStack_130 = psVar41 + 2;
              }
              psVar41 = psStack_130;
              if (puVar54 == puStack_f8) {
                FUN_140072450(&lStack_108,puVar54);
              }
              else {
                *(undefined4 *)puVar54 = *(undefined4 *)(puVar5 + 4);
                puStack_100 = puVar54 + 2;
              }
              puVar54 = puStack_100;
              auStack_1b4[0] = (asStack_1ac[0] - (short)uStack_180) * 0x30;
              if (puVar42 == puStack_110) {
                FUN_140072670(&puStack_120,puVar42,auStack_1b4);
              }
              else {
                *puVar42 = auStack_1b4[0];
                puStack_118 = puVar42 + 1;
              }
              puVar42 = puStack_118;
              auStack_1b4[0] = *(short *)(param_1 + 0x116bf0) - 0x2f;
              if (puVar45 == puStack_e0) {
                FUN_140072670(&uStack_f0,puVar45,auStack_1b4);
              }
              else {
                *puVar45 = auStack_1b4[0];
                puStack_e8 = puVar45 + 1;
              }
              puVar45 = puStack_e8;
              acStack_1b0[0] = '\x01';
              if (puVar34 == puStack_c8) {
                FUN_1401fd030(&lStack_d8,puVar34,acStack_1b0);
                puVar34 = puStack_d0;
              }
              else {
                *puVar34 = 1;
                puStack_d0 = puVar34 + 1;
                puVar34 = puStack_d0;
              }
            }
            sVar38 = (short)plStack_160 + -1;
            plStack_160 = (longlong *)CONCAT62((int6)((ulonglong)plStack_160 >> 0x10),sVar38);
            uStack_148 = uStack_148 - 8;
            puVar35 = puStack_a8;
          } while (-1 < sVar38);
          uVar48 = (uint)auStack_1a8[0];
        }
        asStack_1ac[0] = asStack_1ac[0] + 1;
        uVar44 = (ushort)uVar48;
      } while (asStack_1ac[0] <= (short)uVar44);
      sVar38 = (short)uStack_150;
      uVar20 = (uint)uStack_140;
      uVar55 = (uint)uStack_180;
    }
    uVar30 = uStack_178;
    if ((short)uVar20 <= sVar38) {
      uVar32 = 0;
      uStack_178 = uStack_178 & 0xffffffff00000000;
      uStack_140 = (longlong *)
                   (uStack_170 + (((longlong)(short)uVar44 * 0x10 + uVar30) * 3 + 0x45b) * 8);
      plStack_160 = (longlong *)
                    (uStack_170 + (((longlong)(short)uVar55 * 0x10 + uVar30) * 3 + 0x45b) * 8);
      uStack_148 = (ulonglong)(ushort)(((short)uStack_150 - (short)uVar20) + 1);
      do {
        uVar48 = (int)plStack_160[1] - (int)*plStack_160;
        sVar38 = (short)((longlong)(ulonglong)uVar48 >> 3) + -1;
        uStack_170 = CONCAT62((int6)(uint6)(ushort)(uVar48 >> 0x10) >> 3,sVar38);
        if (-1 < sVar38) {
          uStack_180 = (longlong)sVar38 << 3;
          do {
            puVar5 = *(ushort **)(uStack_180 + *plStack_160);
            puStack_1a0 = puVar5;
            if ((*(int *)(puVar5 + 2) != -1) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x250) +
                            (longlong)*(int *)(puVar5 + 2) * 8) + 0x84) == param_4)) {
              if (puVar37 == puStack_a8) {
                FUN_1400bc360(&lStack_b8,puVar37,&puStack_1a0);
              }
              else {
                *puVar37 = puVar5;
                puStack_b0 = puVar37 + 1;
              }
              puVar37 = puStack_b0;
              if (psVar41 == psStack_128) {
                FUN_140072450(&lStack_138,psVar41,puVar5 + 2);
              }
              else {
                *(undefined4 *)psVar41 = *(undefined4 *)(puVar5 + 2);
                psStack_130 = psVar41 + 2;
              }
              psVar41 = psStack_130;
              if (puVar54 == puStack_f8) {
                FUN_140072450(&lStack_108,puVar54);
              }
              else {
                *(undefined4 *)puVar54 = *(undefined4 *)(puVar5 + 4);
                puStack_100 = puVar54 + 2;
              }
              puVar54 = puStack_100;
              auStack_1b4[0] = 0;
              if (puVar42 == puStack_110) {
                FUN_140072670(&puStack_120,puVar42,auStack_1b4);
              }
              else {
                *puVar42 = 0;
                puStack_118 = puVar42 + 1;
              }
              puVar42 = puStack_118;
              auStack_1b4[0] = (ushort)uStack_178;
              if (puVar45 == puStack_e0) {
                FUN_140072670(&uStack_f0,puVar45,auStack_1b4);
              }
              else {
                *puVar45 = auStack_1b4[0];
                puStack_e8 = puVar45 + 1;
              }
              puVar45 = puStack_e8;
              acStack_1b0[0] = '\x02';
              if (puVar34 == puStack_c8) {
                FUN_1401fd030(&lStack_d8,puVar34,acStack_1b0);
              }
              else {
                *puVar34 = 2;
                puStack_d0 = puVar34 + 1;
              }
              uVar32 = uStack_178 & 0xffffffff;
              puVar34 = puStack_d0;
            }
            sVar38 = (short)uStack_170 + -1;
            uStack_170 = CONCAT62((int6)(uStack_170 >> 0x10),sVar38);
            uStack_180 = uStack_180 - 8;
          } while (-1 < sVar38);
        }
        uVar48 = (int)uStack_140[1] - (int)*uStack_140;
        sVar38 = (short)((longlong)(ulonglong)uVar48 >> 3) + -1;
        uStack_170 = CONCAT62((int6)(uint6)(ushort)(uVar48 >> 0x10) >> 3,sVar38);
        plVar51 = uStack_140;
        if (-1 < sVar38) {
          uStack_180 = (longlong)sVar38 << 3;
          do {
            puVar5 = *(ushort **)(uStack_180 + *plVar51);
            puStack_1a0 = puVar5;
            if ((*(int *)(puVar5 + 2) != -1) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x250) +
                            (longlong)*(int *)(puVar5 + 2) * 8) + 0x84) == param_4)) {
              if (puVar37 == puStack_a8) {
                FUN_1400bc360(&lStack_b8,puVar37,&puStack_1a0);
              }
              else {
                *puVar37 = puVar5;
                puStack_b0 = puVar37 + 1;
              }
              puVar37 = puStack_b0;
              if (psVar41 == psStack_128) {
                FUN_140072450(&lStack_138,psVar41,puVar5 + 2);
              }
              else {
                *(undefined4 *)psVar41 = *(undefined4 *)(puVar5 + 2);
                psStack_130 = psVar41 + 2;
              }
              psVar41 = psStack_130;
              if (puVar54 == puStack_f8) {
                FUN_140072450(&lStack_108,puVar54);
              }
              else {
                *(undefined4 *)puVar54 = *(undefined4 *)(puVar5 + 4);
                puStack_100 = puVar54 + 2;
              }
              puVar54 = puStack_100;
              auStack_1b4[0] = *(short *)(param_1 + 0x116bec) - 0x2f;
              if (puVar42 == puStack_110) {
                FUN_140072670(&puStack_120,puVar42,auStack_1b4);
              }
              else {
                *puVar42 = auStack_1b4[0];
                puStack_118 = puVar42 + 1;
              }
              puVar42 = puStack_118;
              auStack_1b4[0] = (ushort)uStack_178;
              if (puVar45 == puStack_e0) {
                FUN_140072670(&uStack_f0,puVar45,auStack_1b4);
              }
              else {
                *puVar45 = auStack_1b4[0];
                puStack_e8 = puVar45 + 1;
              }
              puVar45 = puStack_e8;
              acStack_1b0[0] = '\x03';
              if (puVar34 == puStack_c8) {
                FUN_1401fd030(&lStack_d8,puVar34,acStack_1b0);
                puVar34 = puStack_d0;
                plVar51 = uStack_140;
              }
              else {
                *puVar34 = 3;
                puStack_d0 = puVar34 + 1;
                puVar34 = puStack_d0;
                plVar51 = uStack_140;
              }
            }
            sVar38 = (short)uStack_170 + -1;
            uStack_170 = CONCAT62((int6)(uStack_170 >> 0x10),sVar38);
            uStack_180 = uStack_180 - 8;
          } while (-1 < sVar38);
          uVar32 = uStack_178 & 0xffffffff;
        }
        plStack_160 = plStack_160 + 3;
        uStack_140 = plVar51 + 3;
        uVar32 = CONCAT62((int6)(uVar32 >> 0x10),(short)uVar32 + 0x30);
        uStack_178 = CONCAT44(uStack_178._4_4_,(int)uVar32);
        uStack_148 = uStack_148 - 1;
      } while (uStack_148 != 0);
    }
    lVar22 = lStack_138;
    uVar30 = (longlong)psVar41 - lStack_138 >> 2;
    if (uVar30 != 0) {
      if ((uint)uVar30 < 2) {
        uVar48 = 0;
      }
      else {
        uVar48 = FUN_140ece790();
        uVar48 = (uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar30 & 0xffffffff)) + 1U);
      }
      uVar49 = 0;
      lVar24 = (longlong)(int)uVar48;
      lVar18 = *(longlong *)(lStack_b8 + lVar24 * 8);
      iVar14 = *(int *)(lVar22 + lVar24 * 4);
      uStack_148 = CONCAT44(uStack_148._4_4_,iVar14);
      sVar38 = *(short *)((longlong)puStack_120 + lVar24 * 2);
      sVar19 = *(short *)(uStack_f0 + lVar24 * 2);
      cVar11 = *(char *)(lStack_d8 + lVar24);
      lVar22 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x250) + (longlong)iVar14 * 8);
      if ((param_2 == 0) ||
         ((0 < *(int *)(*(longlong *)(lVar22 + 0x110) + 0x10) &&
          ((**(byte **)(*(longlong *)(lVar22 + 0x110) + 8) & 8) != 0)))) {
        lVar24 = (longlong)*(int *)(lStack_108 + lVar24 * 4) * 2;
        auStack_1a8[0] = *(ushort *)(lVar24 + *(longlong *)(lVar22 + 0x98));
        asStack_1ac[0] = *(short *)(lVar24 + *(longlong *)(lVar22 + 0xb0));
        if (cVar11 == '\0') {
          uVar44 = sVar38 + *(short *)(lVar18 + 0x22);
          iVar52 = _DAT_14250a570;
          for (sVar38 = sVar38 + *(short *)(lVar18 + 0x20); sVar38 <= (short)uVar44;
              sVar38 = sVar38 + 1) {
            sVar43 = *(short *)(lVar18 + 0xc) - (short)iVar52;
            if ((int)sVar43 <= *(short *)(lVar18 + 0xe) - iVar52) {
              do {
                in_stack_fffffffffffffe40 =
                     CONCAT44((int)(in_stack_fffffffffffffe40 >> 0x20),(undefined4)uStack_98);
                in_stack_fffffffffffffe38 =
                     CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),(char)lStack_88);
                cVar11 = FUN_1414c7110(param_1,sVar38,0,sVar43,in_stack_fffffffffffffe38,
                                       in_stack_fffffffffffffe40);
                if (cVar11 != '\0') goto LAB_140abb58f;
                sVar43 = sVar43 + 1;
                iVar52 = _DAT_14250a570;
              } while ((int)sVar43 <= *(short *)(lVar18 + 0xe) - _DAT_14250a570);
            }
          }
        }
        else if (cVar11 == '\x01') {
          uVar44 = sVar38 + *(short *)(lVar18 + 0x26);
          uVar31 = *(short *)(param_1 + 0x116bf0) - 1;
          uVar49 = (uint)uVar31;
          iVar52 = _DAT_14250a570;
          for (sVar38 = sVar38 + *(short *)(lVar18 + 0x24); sVar38 <= (short)uVar44;
              sVar38 = sVar38 + 1) {
            sVar43 = *(short *)(lVar18 + 0xc) - (short)iVar52;
            if ((int)sVar43 <= *(short *)(lVar18 + 0xe) - iVar52) {
              do {
                in_stack_fffffffffffffe40 =
                     CONCAT44((int)(in_stack_fffffffffffffe40 >> 0x20),(undefined4)uStack_98);
                in_stack_fffffffffffffe38 =
                     CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),(char)lStack_88);
                cVar11 = FUN_1414c7110(param_1,sVar38,uVar31,sVar43,in_stack_fffffffffffffe38,
                                       in_stack_fffffffffffffe40);
                if (cVar11 != '\0') goto LAB_140abb58f;
                sVar43 = sVar43 + 1;
                iVar52 = _DAT_14250a570;
              } while ((int)sVar43 <= *(short *)(lVar18 + 0xe) - _DAT_14250a570);
            }
          }
        }
        else if (cVar11 == '\x02') {
          sVar38 = *(short *)(lVar18 + 0x1a);
          iVar52 = _DAT_14250a570;
          for (uVar44 = sVar19 + *(short *)(lVar18 + 0x18);
              (short)uVar44 <= (short)(sVar19 + sVar38); uVar44 = uVar44 + 1) {
            sVar43 = *(short *)(lVar18 + 0xc) - (short)iVar52;
            if ((int)sVar43 <= *(short *)(lVar18 + 0xe) - iVar52) {
              do {
                in_stack_fffffffffffffe40 =
                     CONCAT44((int)(in_stack_fffffffffffffe40 >> 0x20),(undefined4)uStack_98);
                in_stack_fffffffffffffe38 =
                     CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),(char)lStack_88);
                cVar11 = FUN_1414c7110(param_1,0,uVar44,sVar43,in_stack_fffffffffffffe38,
                                       in_stack_fffffffffffffe40);
                if (cVar11 != '\0') goto LAB_140abb3b4;
                sVar43 = sVar43 + 1;
                iVar52 = _DAT_14250a570;
              } while ((int)sVar43 <= *(short *)(lVar18 + 0xe) - _DAT_14250a570);
            }
          }
        }
        else if (cVar11 == '\x03') {
          sVar38 = *(short *)(lVar18 + 0x1e);
          uVar31 = *(short *)(param_1 + 0x116bec) - 1;
          uVar49 = (uint)uVar31;
          iVar52 = _DAT_14250a570;
          for (uVar44 = sVar19 + *(short *)(lVar18 + 0x1c);
              (short)uVar44 <= (short)(sVar19 + sVar38); uVar44 = uVar44 + 1) {
            sVar43 = *(short *)(lVar18 + 0xc) - (short)iVar52;
            if ((int)sVar43 <= *(short *)(lVar18 + 0xe) - iVar52) {
              do {
                in_stack_fffffffffffffe40 =
                     CONCAT44((int)(in_stack_fffffffffffffe40 >> 0x20),(undefined4)uStack_98);
                in_stack_fffffffffffffe38 =
                     CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),(char)lStack_88);
                cVar11 = FUN_1414c7110(param_1,uVar31,uVar44,sVar43,in_stack_fffffffffffffe38,
                                       in_stack_fffffffffffffe40);
                if (cVar11 != '\0') goto LAB_140abb3b4;
                sVar43 = sVar43 + 1;
                iVar52 = _DAT_14250a570;
              } while ((int)sVar43 <= *(short *)(lVar18 + 0xe) - _DAT_14250a570);
            }
          }
        }
      }
    }
    FUN_14013d2d0(&lStack_d8);
    FUN_140070de0(&uStack_f0);
    FUN_140070de0(&puStack_120);
    FUN_140070d80(&lStack_108);
    FUN_140070d80(&lStack_138);
    FUN_1400681a0(&lStack_b8);
    return;
  }
  uVar44 = 0;
  if (cVar11 != '\0') {
    iVar14 = 200;
    uVar32 = (ulonglong)(ushort)uStackX_10;
    uStack_168 = CONCAT44(uStack_168._4_4_,uStackX_10) & 0xffffffff0000ffff;
    uVar39 = (ulonglong)(ushort)uStackX_10;
    uStack_178 = CONCAT44(uStack_178._4_4_,uStackX_10) & 0xffffffff0000ffff;
    uVar33 = (ulonglong)(ushort)uStackX_10;
    uStack_158 = CONCAT44(uStack_158._4_4_,uStackX_10) & 0xffffffff0000ffff;
    do {
      uVar16 = (undefined4)(in_stack_fffffffffffffe40 >> 0x20);
      uVar48 = FUN_140ece790();
      uVar29 = (ulonglong)uVar48 * 3 >> 0x20;
      uVar15 = (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar23 = (ulonglong)uVar15;
      uVar48 = uVar48 + uVar15 >> 0x1d;
      if (uVar48 == 0) {
        uVar32 = 0;
        uStack_168 = (ulonglong)uStack_168._4_4_ << 0x20;
        uVar48 = *(uint *)(param_1 + 0x116bf0);
joined_r0x000140aba6d0:
        uVar31 = uVar44;
        if (1 < uVar48) {
          uVar15 = FUN_140ece790();
          uVar15 = uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff;
          uVar48 = (int)(0x7fffffff / (ulonglong)uVar48) + 1;
          uVar23 = (ulonglong)uVar48;
          uVar29 = (ulonglong)uVar15 % uVar23;
          uVar31 = (ushort)(uVar15 / uVar48);
        }
        uVar39 = (ulonglong)uVar31;
        uStack_178 = CONCAT44(uStack_178._4_4_,(uint)uVar31);
LAB_140aba716:
        uVar48 = *(uint *)(param_1 + 0x116bf4);
        uVar31 = uVar44;
        if (1 < uVar48) {
          uVar15 = FUN_140ece790(uVar23,uVar29);
          uVar31 = (ushort)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                      0x7fffffff) / ((int)(0x7fffffff / (ulonglong)uVar48) + 1U));
        }
        uVar33 = (ulonglong)uVar31;
LAB_140aba762:
        uStack_158 = CONCAT44(uStack_158._4_4_,(int)uVar33);
      }
      else {
        if (uVar48 == 1) {
          uVar31 = *(short *)(param_1 + 0x116bec) - 1;
          uVar32 = (ulonglong)uVar31;
          uStack_168 = CONCAT44(uStack_168._4_4_,(uint)uVar31);
          uVar48 = *(uint *)(param_1 + 0x116bf0);
          goto joined_r0x000140aba6d0;
        }
        if (uVar48 == 2) {
          uVar48 = *(uint *)(param_1 + 0x116bec);
          if (uVar48 < 2) {
            uVar32 = 0;
            uStack_168 = (ulonglong)uStack_168._4_4_ << 0x20;
            uStack_178 = uStack_178 & 0xffffffff00000000;
            uVar39 = uVar30;
          }
          else {
            uVar15 = FUN_140ece790();
            uVar32 = (ulonglong)
                     (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                               0x7fffffff);
            uVar23 = (ulonglong)((int)(0x7fffffff / (ulonglong)uVar48) + 1);
            uVar29 = uVar32 % uVar23;
            uVar32 = uVar32 / uVar23 & 0xffff;
            uStack_168 = CONCAT44(uStack_168._4_4_,(int)uVar32);
            uVar39 = 0;
            uStack_178 = uStack_178 & 0xffffffff00000000;
          }
          goto LAB_140aba716;
        }
        if (uVar48 == 3) {
          uVar48 = *(uint *)(param_1 + 0x116bec);
          if (uVar48 < 2) {
            uStack_168 = (ulonglong)uStack_168._4_4_ << 0x20;
            uVar32 = uVar30;
          }
          else {
            uVar15 = FUN_140ece790();
            uVar29 = (ulonglong)
                     (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                               0x7fffffff);
            uVar23 = (ulonglong)((int)(0x7fffffff / (ulonglong)uVar48) + 1);
            uVar32 = uVar29 / uVar23;
            uVar29 = uVar29 % uVar23;
            uStack_168 = CONCAT44(uStack_168._4_4_,(int)uVar32);
          }
          uVar31 = *(short *)(param_1 + 0x116bf0) - 1;
          uVar39 = (ulonglong)uVar31;
          uStack_178 = CONCAT44(uStack_178._4_4_,(uint)uVar31);
          uVar48 = *(uint *)(param_1 + 0x116bf4);
          uVar33 = uVar30;
          if (1 < uVar48) {
            uVar15 = FUN_140ece790(uVar23,uVar29);
            uVar33 = (ulonglong)
                     (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / (ulonglong)((int)(0x7fffffff / (ulonglong)uVar48) + 1);
            uStack_158 = CONCAT44(uStack_158._4_4_,(int)uVar33);
            goto LAB_140aba765;
          }
          goto LAB_140aba762;
        }
      }
LAB_140aba765:
      in_stack_fffffffffffffe40 = CONCAT44(uVar16,(undefined4)uStack_98);
      in_stack_fffffffffffffe38 = CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),cVar11);
      cVar12 = FUN_1414c7110(param_1,uVar32 & 0xffff,uVar39,uVar33 & 0xffff,
                             in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
      if (cVar12 != '\0') {
        uVar48 = callee_14007f270(param_1,uVar32 & 0xffff,uVar39,uVar33 & 0xffff);
        if ((uVar48 >> 0xf & 1) == 0) {
          if ((short)uVar32 == -30000) {
            return;
          }
          in_stack_fffffffffffffe40 =
               CONCAT62((int6)(in_stack_fffffffffffffe40 >> 0x10),(short)uVar33);
          in_stack_fffffffffffffe38 =
               CONCAT62((int6)(in_stack_fffffffffffffe38 >> 0x10),(short)uVar39);
          FUN_14007f300(param_1,auStack_1b4,asStack_1ac,uVar32 & 0xffff,in_stack_fffffffffffffe38,
                        in_stack_fffffffffffffe40);
          auStack_1a8[0] = auStack_1b4[0];
          goto LAB_140aba7fa;
        }
      }
      iVar14 = iVar14 + -1;
      if (iVar14 < 1) {
        return;
      }
    } while( true );
  }
  if ((_DAT_1423b9938 - _DAT_1423b9930 & 0xfffffffffffffffeU) == 0) {
    return;
  }
  do {
    if ((int)uVar30 == 1000) {
      return;
    }
    uVar32 = _DAT_1423b9938 - _DAT_1423b9930 >> 1;
    uVar31 = uVar44;
    if (1 < (uint)uVar32) {
      uVar48 = FUN_140ece790();
      uVar31 = (ushort)((uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) *
                                  0x7fffffff) / ((int)(0x7fffffff / (uVar32 & 0xffffffff)) + 1U));
    }
    lVar22 = (longlong)(short)uVar31 * 2;
    uVar31 = *(ushort *)(_DAT_1423b9930 + lVar22);
    uStack_168 = CONCAT44(uStack_168._4_4_,(uint)uVar31);
    uVar1 = *(ushort *)(_DAT_1423b9948 + lVar22);
    uStack_178 = CONCAT44(uStack_178._4_4_,(uint)uVar1);
    uStack_158 = CONCAT44(uStack_158._4_4_,(uint)*(ushort *)(_DAT_1423b9960 + lVar22));
    uVar30 = (ulonglong)((int)uVar30 + 1);
    in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffff00000000;
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
    cVar11 = FUN_1414c7110(0x1423f3970,uVar31,uVar1,*(ushort *)(_DAT_1423b9960 + lVar22),
                           in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
  } while (cVar11 == '\0');
  if (uVar1 == 0) {
    asStack_1ac[0] = *(short *)((longlong)(short)uVar31 * 4 + 0x1423b6932);
    auStack_1a8[0] = *(ushort *)((longlong)(short)uVar31 * 4 + 0x1423b6930);
    uVar49 = (uint)auStack_1a8[0];
  }
  else if ((int)(short)uVar1 == _DAT_14250a560 + -1) {
    asStack_1ac[0] = *(short *)((longlong)(short)uVar31 * 4 + 0x1423b7532);
    auStack_1a8[0] = *(ushort *)((longlong)(short)uVar31 * 4 + 0x1423b7530);
    uVar49 = (uint)auStack_1a8[0];
  }
  else if (uVar31 == 0) {
    asStack_1ac[0] = *(short *)((longlong)(short)uVar1 * 4 + 0x1423b8132);
    auStack_1a8[0] = *(ushort *)((longlong)(short)uVar1 * 4 + 0x1423b8130);
    uVar49 = (uint)auStack_1a8[0];
  }
  else {
    if ((int)(short)uVar31 != _DAT_14250a560 + -1) {
      return;
    }
    asStack_1ac[0] = *(short *)((longlong)(short)uVar1 * 4 + 0x1423b8d32);
    auStack_1a8[0] = *(ushort *)((longlong)(short)uVar1 * 4 + 0x1423b8d30);
    uVar49 = (uint)auStack_1a8[0];
  }
LAB_140aba7fa:
  iVar14 = -1;
  uStack_148 = CONCAT44(uStack_148._4_4_,0xffffffff);
  uVar44 = (ushort)uStack_178;
  goto LAB_140abb5e7;
LAB_140abb58f:
  uVar26 = (ulonglong)uVar44;
  uVar44 = (ushort)uVar49;
  uStack_168 = CONCAT62(uStack_168._2_6_,sVar38);
  goto LAB_140abb597;
LAB_140abb3b4:
  uStack_168 = CONCAT62(uStack_168._2_6_,(short)uVar49);
LAB_140abb597:
  uStack_158 = CONCAT62(uStack_158._2_6_,sVar43);
  uStack_178 = CONCAT44(uStack_178._4_4_,(uint)uVar44);
  FUN_14013d2d0(&lStack_d8);
  FUN_140070de0(&uStack_f0);
  FUN_140070de0(&puStack_120);
  FUN_140070d80(&lStack_108);
  FUN_140070d80(&lStack_138);
  FUN_1400681a0(&lStack_b8);
LAB_140abb5e7:
  lVar24 = _DAT_14250eef0;
  lVar18 = _DAT_14250eee8;
  lVar22 = _DAT_142407550;
  sVar38 = (short)uStack_168;
  if (sVar38 == -30000) {
    return;
  }
  cStack_188 = '\0';
  uStack_140 = (longlong *)(CONCAT44(uStack_140._4_4_,(int)uVar26) & 0xffffffffffffff00);
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar49) & 0xffffffffffffff00;
  sVar19 = (short)uStack_158;
  uVar48 = uStackX_10;
  bVar13 = param_2;
  if (((((sVar38 < 0) || (_DAT_14250a55c <= sVar38)) || ((short)uVar44 < 0)) ||
      ((_DAT_14250a560 <= (short)uVar44 || (sVar19 < 0)))) ||
     ((_DAT_14250a564 <= sVar19 || (_DAT_14250a528 == 0)))) {
LAB_140abb6e1:
    sVar43 = 0;
    if (-1 < sVar38) goto LAB_140abb6ec;
  }
  else {
    lVar25 = *(longlong *)
              (*(longlong *)
                (*(longlong *)(_DAT_14250a528 + ((longlong)sVar38 >> 4) * 8) +
                (longlong)((short)uVar44 >> 4) * 8) + (longlong)sVar19 * 8);
    if (lVar25 == 0) goto LAB_140abb6e1;
    uVar49 = (int)sVar38 & 0x8000000f;
    if ((int)uVar49 < 0) {
      uVar49 = (uVar49 - 1 | 0xfffffff0) + 1;
    }
    uVar15 = (int)(short)uVar44 & 0x8000000f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
    }
    sVar43 = *(short *)(lVar25 + (((longlong)(int)uVar49 + 5) * 0x10 + (longlong)(int)uVar15) * 2);
LAB_140abb6ec:
    if ((((sVar38 < _DAT_14250a55c) && (-1 < (short)uVar44)) &&
        (((short)uVar44 < _DAT_14250a560 &&
         (((-1 < sVar19 && (sVar19 < _DAT_14250a564)) && (_DAT_14250a528 != 0)))))) &&
       (lVar25 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(_DAT_14250a528 + (longlong)(sVar38 >> 4) * 8) +
                    (longlong)((short)uVar44 >> 4) * 8) + (longlong)sVar19 * 8), lVar25 != 0)) {
      uVar48 = (int)sVar38 & 0x8000000f;
      if ((int)uVar48 < 0) {
        uVar48 = (uVar48 - 1 | 0xfffffff0) + 1;
      }
      uVar49 = (int)(short)uVar44 & 0x8000000f;
      if ((int)uVar49 < 0) {
        uVar49 = (uVar49 - 1 | 0xfffffff0) + 1;
      }
      uVar49 = *(uint *)(lVar25 + 0x2a0 +
                        ((longlong)(short)uVar48 * 0x10 + (longlong)(short)uVar49) * 4);
      uVar48 = uVar49 & 0x200000;
      bVar13 = (byte)uVar49 & 1;
      uVar15 = bVar13 + 2;
      if ((uVar49 & 2) == 0) {
        uVar15 = (uint)bVar13;
      }
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar15);
      if ((uVar49 & 4) == 0) goto LAB_140abb7db;
      bVar13 = (char)uVar15 + 4;
    }
  }
  uVar15 = (uint)bVar13;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar15);
LAB_140abb7db:
  if ((((sVar43 == 1) || (sVar43 == 0x20)) || ((sVar43 == 0x23 || (sVar43 == 0x2a)))) &&
     ((char)uVar15 == '\0')) {
    cStack_188 = '\x01';
  }
  else if ('\0' < (char)uVar15) {
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,(uint)(uVar48 == 0x200000));
    uStack_170 = CONCAT44(uStack_170._4_4_,(uint)(uVar48 == 0));
  }
  cVar11 = '\0';
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  if ((param_4 == -1) &&
     (iVar52 = 0, plVar51 = _DAT_142407548, plVar27 = _DAT_142407548,
     _DAT_142407550 - (longlong)_DAT_142407548 >> 3 != 0)) {
    do {
      lVar25 = *plVar51;
      if ((((*(uint *)(lVar25 + 0x110) & 0x2000102) == 0) &&
          (((cVar11 = callee_1413a7400(), cVar11 != '\0' && (*(short *)(lVar25 + 0x334) == -1)) &&
           (*(int *)(lVar25 + 0x338) == iVar14)))) && (*(int *)(lVar25 + 0x33c) == -1)) {
        sVar38 = *(short *)(lVar25 + 300);
        sVar19 = *(short *)(lVar25 + 0xa4);
        if (((-1 < sVar19) && ((ulonglong)(longlong)sVar19 < (ulonglong)(lVar24 - lVar18 >> 3))) &&
           ((-1 < sVar38 &&
            (lVar25 = *(longlong *)(lVar18 + (longlong)sVar19 * 8),
            lVar6 = *(longlong *)(lVar25 + 0x178),
            (ulonglong)(longlong)sVar38 < (ulonglong)(*(longlong *)(lVar25 + 0x180) - lVar6 >> 3))))
           ) {
          lVar25 = *(longlong *)(lVar6 + (longlong)sVar38 * 8);
          if ((*(int *)(lVar25 + 0x6b0) < 3) ||
             ((*(byte *)(*(longlong *)(lVar25 + 0x6a8) + 2) & 0x10) == 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            cVar11 = '\x01';
            uStack_150 = CONCAT71(uStack_150._1_7_,1);
            goto LAB_140abb952;
          }
        }
      }
      iVar52 = iVar52 + 1;
      plVar51 = plVar51 + 1;
    } while ((ulonglong)(longlong)iVar52 < (ulonglong)(lVar22 - (longlong)plVar27 >> 3));
    cVar11 = '\0';
  }
LAB_140abb952:
  puVar37 = _DAT_1423f3c30;
  puStack_120 = (undefined8 *)0x0;
  puStack_118 = (ushort *)0x0;
  plStack_90 = (longlong *)0x0;
  puStack_110 = (ushort *)0x0;
  if ((DAT_1418f935b == '\0') &&
     ((_DAT_1418be238 != 0 ||
      ((((DAT_1418c9608 == '\0' || ((DAT_1418c960c & 2) != 0)) || (4 < _DAT_1418c9614 - 3U)) &&
       ((DAT_1423b5ae8 & 8) == 0)))))) {
    cStack_198 = '\0';
    bVar8 = false;
    acStack_1b0[0] = '\0';
    lStack_108 = 0;
    puStack_100 = (ushort *)0x0;
    puStack_f8 = (ushort *)0x0;
    iStack_190 = 0;
    puStack_1a0 = (ushort *)0x0;
    puVar35 = _DAT_1423f3c28;
    bVar10 = false;
LAB_140abb9f0:
    lVar22 = lStack_108;
    puVar54 = puStack_1a0;
    if (puVar35 < puVar37) {
      pcVar7 = (char *)*puVar35;
      if (((((pcVar7[0xc] & 10U) == 0) && (*(ushort *)(pcVar7 + 0x10) == auStack_1a8[0])) &&
          ((*(short *)(pcVar7 + 0x12) == asStack_1ac[0] &&
           ((*(short *)(pcVar7 + 0x14) == -1 && (*(int *)(pcVar7 + 0x18) == (uint)uStack_148))))))
         && ((*(int *)(pcVar7 + 0x1c) == -1 && ((*(int *)(pcVar7 + 4) != 0 && (*pcVar7 == '\0'))))))
      {
        auStack_1b4[0] = *(ushort *)(pcVar7 + 2);
        uVar30 = (ulonglong)(short)auStack_1b4[0];
        if ((short)auStack_1b4[0] < 0) {
LAB_140abbae5:
          bVar9 = false;
        }
        else {
          if (uVar30 < (ulonglong)(lVar24 - lVar18 >> 3)) {
            lVar22 = *(longlong *)(lVar18 + uVar30 * 8);
            if ((*(int *)(lVar22 + 0x1b0) < 0xe) ||
               ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 0xd) & 0x20) == 0)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) goto LAB_140abbb6e;
          }
          if (((((short)auStack_1b4[0] < 0) || ((ulonglong)(lVar24 - lVar18 >> 3) <= uVar30)) ||
              (lVar22 = *(longlong *)(lVar18 + uVar30 * 8), *(int *)(lVar22 + 0x1b0) < 10)) ||
             ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 9) & 4) == 0)) goto LAB_140abbae5;
          bVar9 = true;
        }
        if (((((cVar11 == '\0') && (param_3 == '\0')) || (!bVar9)) &&
            ((-1 < (short)auStack_1b4[0] &&
             (bVar8 = bVar10, uVar30 < (ulonglong)(lVar24 - lVar18 >> 3))))) &&
           (lVar22 = *(longlong *)(lVar18 + uVar30 * 8), lVar22 != 0)) {
          lVar25 = *(longlong *)(lVar22 + 0x178);
          sVar38 = (short)(*(longlong *)(lVar22 + 0x180) - lVar25 >> 3) + -1;
          if (-1 < sVar38) {
            uVar2 = *(undefined2 *)(pcVar7 + 0x10);
            while (cVar11 = callee_14071bc20(*(undefined8 *)(lVar25 + (longlong)sVar38 * 8),uVar2),
                  lVar24 = _DAT_14250eef0, cVar11 != '\0') {
              sVar38 = sVar38 + -1;
              if (sVar38 < 0) goto LAB_140abbb6e;
            }
            if (param_4 == -1) {
              sVar38 = *(short *)(pcVar7 + 2);
              uVar30 = (ulonglong)sVar38;
              if (sVar38 < 0) goto LAB_140abbc5e;
              if (uVar30 < (ulonglong)
                           (*(longlong *)(param_1 + 0x11b580) - *(longlong *)(param_1 + 0x11b578) >>
                           3)) {
                lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x11b578) + uVar30 * 8);
                if ((*(int *)(lVar22 + 0x1b0) < 9) ||
                   ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 8) & 2) == 0)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (!bVar9) goto LAB_140abbc17;
                sVar38 = *(short *)(*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x2b0) +
                                     (longlong)(short)auStack_1a8[0] * 8) + 0x3e +
                                   (longlong)asStack_1ac[0] * 0x70);
              }
              else {
LAB_140abbc17:
                if ((sVar38 < 0) ||
                   ((ulonglong)
                    (*(longlong *)(param_1 + 0x11b580) - *(longlong *)(param_1 + 0x11b578) >> 3) <=
                    uVar30)) {
LAB_140abbc5e:
                  if (*(int *)(pcVar7 + 0x2c) == -1) {
                    sVar38 = *(short *)(pcVar7 + 2);
                    if ((-1 < sVar38) &&
                       ((ulonglong)(longlong)sVar38 <
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x11b580) - *(longlong *)(param_1 + 0x11b578) >> 3)
                       )) {
                      lVar22 = *(longlong *)
                                (*(longlong *)(param_1 + 0x11b578) + (longlong)sVar38 * 8);
                      if ((*(int *)(lVar22 + 0x1b0) < 8) ||
                         (-1 < *(char *)(*(longlong *)(lVar22 + 0x1a8) + 7))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if ((!bVar9) ||
                         (*(short *)(*(longlong *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x2b0) +
                                      (longlong)(short)auStack_1a8[0] * 8) + 0x38 +
                                    (longlong)asStack_1ac[0] * 0x70) < 0x21)) goto LAB_140abbd19;
                      goto LAB_140abbb6e;
                    }
                    goto LAB_140abbd19;
                  }
                }
                else {
                  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x11b578) + uVar30 * 8);
                  if ((*(int *)(lVar22 + 0x1b0) < 9) ||
                     ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 8) & 1) == 0)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (!bVar9) goto LAB_140abbc5e;
                }
                sVar38 = *(short *)(*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x11a668) + 0x2b0) +
                                     (longlong)(short)auStack_1a8[0] * 8) + 0x38 +
                                   (longlong)asStack_1ac[0] * 0x70);
              }
              if (sVar38 < 0x42) goto LAB_140abbb6e;
            }
LAB_140abbd19:
            if (((param_2 == 0) || (param_2 == 3)) &&
               (uVar30 = (ulonglong)(short)auStack_1b4[0],
               uVar30 < (ulonglong)(_DAT_14250eef0 - lVar18 >> 3))) {
              lVar22 = *(longlong *)(lVar18 + uVar30 * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 10) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 9) & 8) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) goto LAB_140abbb6e;
              lVar22 = *(longlong *)(lVar18 + uVar30 * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 0xd) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 0xc) & 1) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) goto LAB_140abbb6e;
            }
            uVar26 = (ulonglong)(short)auStack_1b4[0];
            uVar30 = _DAT_14250eef0 - lVar18 >> 3;
            if (param_2 == 1) {
              if (uVar30 <= uVar26) goto LAB_140abbb6e;
              lVar22 = *(longlong *)(lVar18 + uVar26 * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 10) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 9) & 8) == 0)) {
LAB_140abbe10:
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
LAB_140abbe12:
              if (!bVar9) goto LAB_140abbb6e;
LAB_140abbe52:
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 9) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 8) & 2) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                bVar10 = true;
              }
              else if ((ulonglong)(_DAT_14250eef0 - lVar18 >> 3) <=
                       (ulonglong)(longlong)(short)auStack_1b4[0]) goto LAB_140abbed5;
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 9) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 8) & 1) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              bVar8 = bVar10;
              if (!bVar9) goto LAB_140abbed5;
LAB_140abbec1:
              cStack_198 = '\x01';
            }
            else {
              if (param_2 == 2) {
                if (uVar26 < uVar30) {
                  lVar22 = *(longlong *)(lVar18 + uVar26 * 8);
                  if ((*(int *)(lVar22 + 0x1b0) < 0xd) ||
                     ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 0xc) & 1) == 0))
                  goto LAB_140abbe10;
                  bVar9 = true;
                  goto LAB_140abbe12;
                }
                goto LAB_140abbb6e;
              }
              if (param_2 == 3) {
                if (uVar26 < uVar30) {
                  lVar22 = *(longlong *)(lVar18 + uVar26 * 8);
                  if ((*(int *)(lVar22 + 0x1b0) < 0xd) ||
                     ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 0xc) & 2) == 0))
                  goto LAB_140abbe10;
                  bVar9 = true;
                  goto LAB_140abbe12;
                }
                goto LAB_140abbb6e;
              }
              if (uVar26 < uVar30) goto LAB_140abbe52;
LAB_140abbed5:
              if (*(int *)(_DAT_1423f3c28[iStack_190] + 0x2c) != -1) goto LAB_140abbec1;
            }
            if ((ulonglong)(longlong)(short)auStack_1b4[0] <
                (ulonglong)(_DAT_14250eef0 - lVar18 >> 3)) {
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 8) ||
                 (-1 < *(char *)(*(longlong *)(lVar22 + 0x1a8) + 7))) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) {
                acStack_1b0[0] = '\x01';
              }
            }
            bVar10 = bVar8;
            if (cStack_188 != '\0') {
              if ((ulonglong)(_DAT_14250eef0 - lVar18 >> 3) <=
                  (ulonglong)(longlong)(short)auStack_1b4[0]) goto LAB_140abbb6e;
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 0xd) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 0xc) & 2) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (!bVar9) goto LAB_140abbb6e;
            }
            if (((char)uStack_180 < '\x05') &&
               ((ulonglong)(longlong)(short)auStack_1b4[0] <
                (ulonglong)(_DAT_14250eef0 - lVar18 >> 3))) {
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 0xb) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 10) & 0x10) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) goto LAB_140abbb6e;
            }
            if (((char)uStack_170 != '\0') &&
               ((ulonglong)(longlong)(short)auStack_1b4[0] <
                (ulonglong)(_DAT_14250eef0 - lVar18 >> 3))) {
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 0xb) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 10) & 8) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) goto LAB_140abbb6e;
            }
            if (((char)uStack_140 != '\0') &&
               ((ulonglong)(longlong)(short)auStack_1b4[0] <
                (ulonglong)(_DAT_14250eef0 - lVar18 >> 3))) {
              lVar22 = *(longlong *)(lVar18 + (longlong)(short)auStack_1b4[0] * 8);
              if ((*(int *)(lVar22 + 0x1b0) < 0xb) ||
                 ((*(byte *)(*(longlong *)(lVar22 + 0x1a8) + 10) & 4) == 0)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) goto LAB_140abbb6e;
            }
            if (puStack_1a0 == puStack_f8) {
              FUN_140072450(&lStack_108,puStack_1a0,&iStack_190);
              puStack_1a0 = puStack_100;
              puVar35 = puVar35 + 1;
              iStack_190 = iStack_190 + 1;
              lVar24 = _DAT_14250eef0;
              lVar18 = _DAT_14250eee8;
              cVar11 = (char)uStack_150;
            }
            else {
              *(int *)puStack_1a0 = iStack_190;
              puStack_1a0 = puStack_1a0 + 2;
              puVar35 = puVar35 + 1;
              iStack_190 = iStack_190 + 1;
              lVar24 = _DAT_14250eef0;
              lVar18 = _DAT_14250eee8;
              puStack_100 = puStack_1a0;
              cVar11 = (char)uStack_150;
            }
            goto LAB_140abb9f0;
          }
        }
      }
LAB_140abbb6e:
      puVar35 = puVar35 + 1;
      iStack_190 = iStack_190 + 1;
      cVar11 = (char)uStack_150;
      goto LAB_140abb9f0;
    }
    if (((longlong)puStack_1a0 - lStack_108 & 0xfffffffffffffffcU) != 0) {
      if (param_4 == -1) {
        sVar38 = *(short *)(*(longlong *)
                             (*(longlong *)(_DAT_14250dfd8 + 0x2b0) +
                             (longlong)(short)auStack_1a8[0] * 8) + 0x3e +
                           (longlong)asStack_1ac[0] * 0x70);
        uVar48 = FUN_140ece790();
        if ((((((bVar8) || (cStack_198 != '\0')) || (acStack_1b0[0] != '\0')) &&
             (uVar49 = FUN_140ece790(),
             0x3fffffff <
             uVar49 + (int)((longlong)((ulonglong)uVar49 * 0x100000003) >> 0x3f) * 0x7fffffff)) ||
            (lVar24 = _DAT_14250eef0, lVar18 = _DAT_14250eee8,
            (int)sVar38 <
            (int)((uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / 0x1f07c20))) &&
           (iVar14 = (int)((longlong)puVar54 - lVar22 >> 2) + -1, lVar24 = _DAT_14250eef0,
           lVar18 = _DAT_14250eee8, -1 < iVar14)) {
          piVar40 = (int *)(lVar22 + (longlong)iVar14 * 4);
          piVar46 = piVar40 + 1;
          do {
            uVar30 = (ulonglong)*(short *)(_DAT_1423f3c28[*piVar40] + 2);
            if ((*(short *)(_DAT_1423f3c28[*piVar40] + 2) < 0) ||
               ((ulonglong)(lVar24 - lVar18 >> 3) <= uVar30)) {
LAB_140abc247:
              if (((*(int *)(_DAT_1423f3c28[*piVar40] + 0x2c) == -1) &&
                  (sVar38 = *(short *)(_DAT_1423f3c28[*piVar40] + 2), uVar30 = (ulonglong)sVar38,
                  -1 < sVar38)) && (uVar30 < (ulonglong)(lVar24 - lVar18 >> 3))) {
                lVar25 = *(longlong *)(lVar18 + uVar30 * 8);
                if ((*(int *)(lVar25 + 0x1b0) < 8) ||
                   (-1 < *(char *)(*(longlong *)(lVar25 + 0x1a8) + 7))) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (!bVar8) {
                  lVar25 = *(longlong *)(lVar18 + uVar30 * 8);
                  if ((*(int *)(lVar25 + 0x1b0) < 10) ||
                     ((*(byte *)(*(longlong *)(lVar25 + 0x1a8) + 9) & 4) == 0)) {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = true;
                  }
                  if (bVar8) {
                    callee_14155486a(piVar46 + -1,piVar46,(longlong)puVar54 - (longlong)piVar46);
                    puVar54 = puVar54 + -2;
                    lVar24 = _DAT_14250eef0;
                    lVar18 = _DAT_14250eee8;
                    puStack_100 = puVar54;
                  }
                }
              }
            }
            else {
              lVar25 = *(longlong *)(lVar18 + uVar30 * 8);
              if ((*(int *)(lVar25 + 0x1b0) < 9) ||
                 ((*(byte *)(*(longlong *)(lVar25 + 0x1a8) + 8) & 2) == 0)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) {
                lVar25 = *(longlong *)(lVar18 + uVar30 * 8);
                if ((*(int *)(lVar25 + 0x1b0) < 9) ||
                   ((*(byte *)(*(longlong *)(lVar25 + 0x1a8) + 8) & 1) == 0)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (!bVar8) goto LAB_140abc247;
              }
            }
            piVar46 = piVar46 + -1;
            piVar40 = piVar40 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
      }
      uVar30 = (longlong)puVar54 - lVar22 >> 2;
      if (uVar30 != 0) {
        do {
          if ((uint)uVar30 < 2) {
            uVar48 = 0;
          }
          else {
            uVar48 = FUN_140ece790();
            uVar48 = (uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar30 & 0xffffffff)) + 1U);
            lVar24 = _DAT_14250eef0;
            lVar18 = _DAT_14250eee8;
          }
          iVar14 = *(int *)(lVar22 + (longlong)(int)uVar48 * 4);
          sVar38 = *(short *)(_DAT_1423f3c28[iVar14] + 2);
          if ((sVar38 < 0) || ((ulonglong)(lVar24 - lVar18 >> 3) <= (ulonglong)(longlong)sVar38)) {
            sVar38 = 0;
          }
          else {
            sVar38 = *(short *)(*(longlong *)(lVar18 + (longlong)sVar38 * 8) + 0x12a);
          }
          uVar48 = FUN_140ece790();
          lVar24 = _DAT_14250eef0;
          lVar18 = _DAT_14250eee8;
        } while ((int)sVar38 <=
                 (int)((uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x147ae15));
        plVar51 = (longlong *)_DAT_1423f3c28[iVar14];
        plStack_160 = plVar51;
        sVar38 = FUN_140a62200(0x14250eec8,*(undefined2 *)((longlong)plVar51 + 2));
        iVar14 = (int)sVar38;
        if (param_2 == 3) {
          iVar14 = iVar14 * 3;
        }
        uStack_148 = CONCAT44(uStack_148._4_4_,iVar14);
        FUN_14144f220(plVar51);
        uStack_f0 = 0;
        puStack_e8 = (ushort *)0x0;
        puStack_e0 = (ushort *)0x0;
        uStack_60 = 0;
        psStack_58 = (short *)0x0;
        psStack_50 = (short *)0x0;
        uStack_78 = 0;
        puStack_70 = (ushort *)0x0;
        puStack_68 = (ushort *)0x0;
        iStack_190 = -5;
        uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,(int)(short)uStack_178);
        puVar54 = (ushort *)0x0;
        puStack_1a0 = (ushort *)0x0;
        uStack_150 = CONCAT44(uStack_150._4_4_,uStackX_10) & 0xffffffff000000ff;
        lVar22 = _DAT_14250eee8;
        iVar14 = (int)(short)uStack_178;
        do {
          if (((ushort)uStack_178 == 0) || (iVar14 == _DAT_14250a560 + -1)) {
            uVar48 = (uint)(ushort)uStack_178;
            uVar44 = (short)iStack_190 + (ushort)uStack_168;
          }
          else {
            uVar48 = (int)uStack_178 + iStack_190;
            uVar44 = (ushort)uStack_168;
          }
          sVar38 = (short)uVar48;
          auStack_1b4[0] = uVar44;
          asStack_1ac[0] = sVar38;
          if ((param_4 == -1) && ((char)lStack_88 == '\0')) {
            uVar31 = 0;
            do {
              in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffff00000000;
              in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
              cVar11 = FUN_1414c7110(0x1423f3970,uVar44,uVar48 & 0xffff,uVar31,
                                     in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
              if ((cVar11 != '\0') &&
                 (uVar49 = callee_14007f270(0x1423f3970,uVar44,uVar48 & 0xffff,uVar31),
                 lVar22 = _DAT_14250eee8, (uVar49 & 0x14000) == 0x14000)) goto LAB_140abc54c;
              uVar31 = uVar31 + 1;
            } while ((short)uVar31 < _DAT_14250a564);
            uVar31 = 0x8ad0;
            lVar22 = _DAT_14250eee8;
          }
          else {
            uVar31 = (ushort)uStack_158;
          }
LAB_140abc54c:
          auStack_1a8[0] = uVar31;
          if ((((-1 < sVar38) && (sVar38 < _DAT_14250a560)) && (-1 < (short)uVar44)) &&
             (((short)uVar44 < _DAT_14250a55c && (uVar31 != 0x8ad0)))) {
            in_stack_fffffffffffffe40 =
                 CONCAT44((int)(in_stack_fffffffffffffe40 >> 0x20),(undefined4)uStack_98);
            in_stack_fffffffffffffe38 =
                 CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),(char)lStack_88);
            cVar11 = FUN_1414c7110(0x1423f3970,uVar44,uVar48 & 0xffff,uVar31,
                                   in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
            lVar22 = _DAT_14250eee8;
            if (cVar11 != '\0') {
              bVar10 = false;
              bVar8 = false;
              if ((((short)uVar44 < _DAT_14250a55c) && (sVar38 < _DAT_14250a560)) &&
                 ((-1 < (short)uVar31 &&
                  ((((short)uVar31 < _DAT_14250a564 && (_DAT_14250a528 != 0)) &&
                   (lVar18 = *(longlong *)
                              (*(longlong *)
                                (*(longlong *)(_DAT_14250a528 + (longlong)((short)uVar44 >> 4) * 8)
                                + (longlong)(sVar38 >> 4) * 8) + (longlong)(short)uVar31 * 8),
                   lVar18 != 0)))))) {
                uVar48 = (int)(short)uVar44 & 0x8000000f;
                if ((int)uVar48 < 0) {
                  uVar48 = (uVar48 - 1 | 0xfffffff0) + 1;
                }
                uVar49 = (int)sVar38 & 0x8000000f;
                if ((int)uVar49 < 0) {
                  uVar49 = (uVar49 - 1 | 0xfffffff0) + 1;
                }
                sVar19 = *(short *)(lVar18 + (((longlong)(int)uVar48 + 5) * 0x10 +
                                             (longlong)(int)uVar49) * 2);
              }
              else {
                sVar19 = 0;
              }
              if ((((short)uVar44 < _DAT_14250a55c) && (sVar38 < _DAT_14250a560)) &&
                 (((-1 < (short)uVar31 &&
                   (((short)uVar31 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) &&
                  (lVar18 = *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(_DAT_14250a528 + (longlong)((short)uVar44 >> 4) * 8) +
                               (longlong)(sVar38 >> 4) * 8) + (longlong)(short)uVar31 * 8),
                  lVar18 != 0)))) {
                uVar48 = (int)(short)uVar44 & 0x8000000f;
                if ((int)uVar48 < 0) {
                  uVar48 = (uVar48 - 1 | 0xfffffff0) + 1;
                }
                uVar49 = (int)sVar38 & 0x8000000f;
                if ((int)uVar49 < 0) {
                  uVar49 = (uVar49 - 1 | 0xfffffff0) + 1;
                }
                uVar15 = *(uint *)(lVar18 + 0x2a0 +
                                  ((longlong)(short)uVar48 * 0x10 + (longlong)(short)uVar49) * 4);
                uStack_180 = CONCAT44(uStack_180._4_4_,uVar15) & 0xffffffff00200000;
                bVar13 = (byte)uVar15 & 1;
                uVar48 = bVar13 + 2;
                if ((uVar15 & 2) == 0) {
                  uVar48 = (uint)bVar13;
                }
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar48);
                uVar49 = uVar15 & 0x200000;
                if ((uVar15 & 4) != 0) {
                  uVar48 = (uint)(byte)((char)uVar48 + 4);
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar48);
                }
              }
              else {
                uVar49 = (uint)uStack_180;
                uVar48 = (uint)uStack_150;
              }
              cVar11 = (char)uVar48;
              puVar54 = puStack_1a0;
              if (((((sVar19 == 1) || (sVar19 == 0x20)) || (sVar19 == 0x23)) || (sVar19 == 0x2a)) &&
                 (cVar11 == '\0')) {
                sVar19 = *(short *)((longlong)plVar51 + 2);
                if ((-1 < sVar19) &&
                   ((ulonglong)(longlong)sVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))
                   ) {
                  lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar19 * 8);
                  if ((*(int *)(lVar18 + 0x1b0) < 0xd) ||
                     ((*(byte *)(*(longlong *)(lVar18 + 0x1a8) + 0xc) & 2) == 0)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) goto LAB_140abc7e0;
                }
              }
              else {
                if (('\0' < cVar11) && (uVar49 == 0x200000)) {
                  bVar10 = true;
                }
                if (('\0' < cVar11) && (uVar49 == 0)) {
                  bVar8 = true;
                }
LAB_140abc7e0:
                if (((cVar11 < '\x05') && (sVar19 = *(short *)((longlong)plVar51 + 2), -1 < sVar19))
                   && ((ulonglong)(longlong)sVar19 <
                       (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
                  lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar19 * 8);
                  if ((*(int *)(lVar18 + 0x1b0) < 0xb) ||
                     ((*(byte *)(*(longlong *)(lVar18 + 0x1a8) + 10) & 0x10) == 0)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) goto LAB_140abc977;
                }
                if (((bVar8) && (sVar19 = *(short *)((longlong)plVar51 + 2), -1 < sVar19)) &&
                   ((ulonglong)(longlong)sVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))
                   ) {
                  lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar19 * 8);
                  if ((*(int *)(lVar18 + 0x1b0) < 0xb) ||
                     ((*(byte *)(*(longlong *)(lVar18 + 0x1a8) + 10) & 8) == 0)) {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = true;
                  }
                  if (bVar8) goto LAB_140abc977;
                }
                if (((bVar10) && (sVar19 = *(short *)((longlong)plVar51 + 2), -1 < sVar19)) &&
                   ((ulonglong)(longlong)sVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))
                   ) {
                  lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar19 * 8);
                  if ((*(int *)(lVar18 + 0x1b0) < 0xb) ||
                     ((*(byte *)(*(longlong *)(lVar18 + 0x1a8) + 10) & 4) == 0)) {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = true;
                  }
                  if (bVar8) goto LAB_140abc977;
                }
                if (puStack_1a0 == puStack_e0) {
                  FUN_140072670(&uStack_f0,puStack_1a0,auStack_1b4);
                }
                else {
                  *puStack_1a0 = uVar44;
                  puStack_e8 = puStack_1a0 + 1;
                }
                puVar54 = puStack_e8;
                puStack_1a0 = puStack_e8;
                if (psStack_58 == psStack_50) {
                  FUN_140072670(&uStack_60,psStack_58,asStack_1ac);
                }
                else {
                  *psStack_58 = sVar38;
                  psStack_58 = psStack_58 + 1;
                }
                if (puStack_70 == puStack_68) {
                  FUN_140072670(&uStack_78,puStack_70,auStack_1a8);
                  lVar22 = _DAT_14250eee8;
                }
                else {
                  *puStack_70 = uVar31;
                  puStack_70 = puStack_70 + 1;
                  lVar22 = _DAT_14250eee8;
                }
              }
            }
          }
LAB_140abc977:
          psVar41 = (short *)0x0;
          iStack_190 = iStack_190 + 1;
          iVar14 = (uint)uStack_140;
        } while (iStack_190 < 6);
        uStack_170 = uStack_f0;
        if (((longlong)puVar54 - uStack_f0 & 0xfffffffffffffffe) != 0) {
          lStack_138 = 0;
          psStack_130 = (short *)0x0;
          psStack_128 = (short *)0x0;
          if ((param_2 == 3) || (cStack_188 != '\0')) {
            lVar18 = plVar51[2];
            sVar38 = *(short *)((longlong)plVar51 + 2);
            puVar54 = puStack_1a0;
            uVar48 = (uint)uVar44;
            if ((-1 < sVar38) &&
               (plVar51 = plStack_160, uVar48 = (uint)uVar44,
               (ulonglong)(longlong)sVar38 < (ulonglong)(_DAT_14250eef0 - lVar22 >> 3))) {
              lVar22 = *(longlong *)(lVar22 + (longlong)sVar38 * 8);
              uVar48 = *(int *)(lVar22 + 0x180) - *(int *)(lVar22 + 0x178);
              uVar44 = (short)((longlong)(ulonglong)uVar48 >> 3) - 1;
              uVar30 = CONCAT62((int6)(uint6)(ushort)(uVar48 >> 0x10) >> 3,uVar44);
              uVar48 = (uint)uVar30;
              auStack_1b4[0] = uVar44;
              if (-1 < (short)uVar44) {
                psVar36 = (short *)0x0;
                do {
                  lVar24 = *(longlong *)(lVar22 + 0x178);
                  auStack_1b4[0] = uVar44;
                  cVar11 = callee_14071bc20(*(undefined8 *)(lVar24 + (ulonglong)uVar44 * 8),
                                            (short)lVar18);
                  if (((cVar11 == '\0') &&
                      (lVar24 = *(longlong *)(lVar24 + (ulonglong)uVar44 * 8),
                      2 < *(int *)(lVar24 + 0x6b0))) &&
                     ((*(byte *)(*(longlong *)(lVar24 + 0x6a8) + 2) & 8) != 0)) {
                    if (psVar36 == psVar41) {
                      FUN_140072670(&lStack_138,psVar36,auStack_1b4);
                      psVar36 = psStack_130;
                      psVar41 = psStack_128;
                    }
                    else {
                      *psVar36 = (short)uVar30;
                      psStack_130 = psVar36 + 1;
                      psVar36 = psStack_130;
                    }
                  }
                  uVar44 = (short)uVar30 - 1;
                  uVar30 = (ulonglong)uVar44;
                  puVar54 = puStack_1a0;
                  plVar51 = plStack_160;
                  uVar48 = (uint)uVar44;
                  auStack_1b4[0] = uVar44;
                } while (-1 < (short)uVar44);
              }
            }
          }
          else {
            lVar18 = plVar51[2];
            sVar38 = *(short *)((longlong)plVar51 + 2);
            uVar48 = (uint)uVar44;
            if ((-1 < sVar38) &&
               (uVar48 = (uint)uVar44,
               (ulonglong)(longlong)sVar38 < (ulonglong)(_DAT_14250eef0 - lVar22 >> 3))) {
              lVar22 = *(longlong *)(lVar22 + (longlong)sVar38 * 8);
              uVar48 = *(int *)(lVar22 + 0x180) - *(int *)(lVar22 + 0x178);
              auStack_1b4[0] = (short)((longlong)(ulonglong)uVar48 >> 3) - 1;
              uVar47 = CONCAT62((int6)(uint6)(ushort)(uVar48 >> 0x10) >> 3,auStack_1b4[0]);
              uVar48 = (uint)uVar47;
              if (-1 < (short)auStack_1b4[0]) {
                psVar36 = (short *)0x0;
                do {
                  cVar11 = callee_14071bc20(*(undefined8 *)
                                             (*(longlong *)(lVar22 + 0x178) +
                                             (ulonglong)auStack_1b4[0] * 8),(short)lVar18);
                  if (cVar11 == '\0') {
                    if (psVar36 == psVar41) {
                      FUN_140072670(&lStack_138,psVar36,auStack_1b4);
                      psVar36 = psStack_130;
                      psVar41 = psStack_128;
                    }
                    else {
                      *psVar36 = (short)uVar47;
                      psStack_130 = psVar36 + 1;
                      psVar36 = psStack_130;
                    }
                  }
                  auStack_1b4[0] = (short)uVar47 - 1;
                  uVar47 = CONCAT62((int6)((ulonglong)uVar47 >> 0x10),auStack_1b4[0]);
                  uVar48 = (uint)uVar47;
                } while (-1 < (short)auStack_1b4[0]);
              }
            }
          }
          uVar30 = uStack_170;
          iVar14 = 0;
          uStack_140 = (longlong *)(CONCAT44(uStack_140._4_4_,uVar48) & 0xffffffffffffff00);
          uVar48 = 0;
          if (0x41 < *(short *)(*(longlong *)
                                 (*(longlong *)(_DAT_14250dfd8 + 0x2b0) +
                                 (longlong)*(short *)(_DAT_1423bc670 + 0x82) * 8) + 0x3e +
                               (longlong)*(short *)(_DAT_1423bc670 + 0x84) * 0x70)) {
            uVar49 = _DAT_1423bc4f4 + 1;
            if (1 < uVar49) {
              uVar48 = FUN_140ece790();
              uVar48 = (uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / ((int)(0x7fffffff / (ulonglong)uVar49) + 1U);
            }
            uStack_140 = (longlong *)
                         CONCAT44(uStack_140._4_4_,
                                  (uint)((int)(uVar48 + _DAT_1423bc4f8) < _DAT_1423b38b4));
          }
          uStack_180 = uStack_180 & 0xffffffff00000000;
          puVar42 = puStack_118;
          if (0 < (int)(uint)uStack_148) {
            puStack_1a0 = (ushort *)((longlong)((longlong)puVar54 - uVar30) >> 1);
            uStack_150 = uStack_60;
            uStack_98 = uStack_78;
            do {
              uVar26 = uStack_150;
              puVar54 = puStack_1a0;
              lVar22 = FUN_1407a2a80();
              *(int *)(lVar22 + 0x130) = _DAT_14238f5d8;
              _DAT_14238f5d8 = _DAT_14238f5d8 + 1;
              FUN_1400bba90(lVar22,&DAT_142407530);
              *(int *)(lVar22 + 0x148) = (int)plVar51[5];
              lStack_88 = lVar22;
              if (puVar42 == (ushort *)plStack_90) {
                FUN_1400bc360(&puStack_120,puVar42,&lStack_88);
                plStack_90 = (longlong *)puStack_110;
              }
              else {
                *(longlong *)puVar42 = lVar22;
                puStack_118 = (ushort *)((longlong)puVar42 + 8);
              }
              puVar42 = puStack_118;
              FUN_14139bb70(lVar22,*(undefined2 *)((longlong)plVar51 + 2),&lStack_138);
              FUN_14139ada0(lVar22);
              lVar18 = plVar51[3];
              *(longlong *)(lVar22 + 0x330) = plVar51[2];
              *(longlong *)(lVar22 + 0x338) = lVar18;
              *(longlong *)(lVar22 + 0x340) = plVar51[4];
              if ((char)*plVar51 == '\0') {
                uVar48 = *(uint *)(lVar22 + 0x114);
                *(uint *)(lVar22 + 0x114) = uVar48 | 0x40000000;
                if (((*(short *)((longlong)plVar51 + 0x14) == -1) && ((int)plVar51[3] == -1)) &&
                   (*(int *)((longlong)plVar51 + 0x1c) == -1)) {
                  *(uint *)(lVar22 + 0x114) = uVar48 | 0xc0000000;
                }
              }
              uVar48 = FUN_140ece790();
              *(uint *)(lVar22 + 0x348) =
                   (uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / 0x346c7 + 20000;
              if ((uint)puVar54 < 2) {
                uVar48 = 0;
              }
              else {
                uVar48 = FUN_140ece790();
                uVar48 = (uVar48 + (int)((longlong)((ulonglong)uVar48 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) /
                         ((int)(0x7fffffff / ((ulonglong)puVar54 & 0xffffffff)) + 1U);
              }
              plVar51 = plStack_160;
              uVar49 = uStack_18c;
              iVar52 = 0;
              lVar18 = (longlong)(int)uVar48;
              uVar2 = *(undefined2 *)(uVar30 + lVar18 * 2);
              *(undefined2 *)(lVar22 + 0xa8) = uVar2;
              uVar3 = *(undefined2 *)(uVar26 + lVar18 * 2);
              *(undefined2 *)(lVar22 + 0xaa) = uVar3;
              uVar4 = *(undefined2 *)(uStack_98 + lVar18 * 2);
              *(undefined2 *)(lVar22 + 0xac) = uVar4;
              uVar16 = 3;
              if (_DAT_1418be238 == 1) {
                uVar16 = 0;
              }
              *(undefined2 *)(lVar22 + 0xae) = uVar2;
              *(undefined2 *)(lVar22 + 0xb0) = uVar3;
              *(undefined2 *)(lVar22 + 0xb2) = uVar4;
              *(undefined4 *)(lVar22 + 0xb4) = uVar16;
              *(undefined2 *)(lVar22 + 0xb8) = 0xffff;
              iVar28 = *(int *)(lVar22 + 0x3dc);
              if (iVar28 != -1) {
                iVar50 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
                iVar14 = (uint)uStack_180;
                if (iVar50 != 0) {
                  iVar50 = iVar50 + -1;
                  if (-1 < iVar50) {
                    do {
                      iVar21 = iVar52 + iVar50 >> 1;
                      lVar18 = *(longlong *)(_DAT_142407530 + (longlong)iVar21 * 8);
                      if (*(int *)(lVar18 + 0x130) == iVar28) goto LAB_140abce80;
                      iVar17 = iVar21 + -1;
                      if (*(int *)(lVar18 + 0x130) < iVar28) {
                        iVar17 = iVar50;
                        iVar52 = iVar21 + 1;
                      }
                      iVar50 = iVar17;
                    } while (iVar52 <= iVar17);
                  }
                  lVar18 = 0;
LAB_140abce80:
                  if (lVar18 != 0) {
                    *(undefined2 *)(lVar18 + 0xae) = uVar2;
                    *(undefined2 *)(lVar18 + 0xb0) = uVar3;
                    *(undefined2 *)(lVar18 + 0xb2) = uVar4;
                    *(undefined4 *)(lVar18 + 0xb4) = uVar16;
                    *(undefined2 *)(lVar18 + 0xb8) = 0xffff;
                  }
                }
              }
              lVar18 = 0;
              if (param_2 == 3) {
                *(uint *)(lVar22 + 0x114) = *(uint *)(lVar22 + 0x114) | 0xc0000;
              }
              else {
                if (((((param_2 != 2) && (0 < _DAT_1423b38b4)) && ((char)*plStack_160 == '\0')) &&
                    ((*(short *)((longlong)plStack_160 + 0x14) == -1 && ((int)plStack_160[3] == -1))
                    )) && ((*(int *)((longlong)plStack_160 + 0x1c) == -1 &&
                           ((char)uStack_140 != '\0')))) {
                  *(uint *)(lVar22 + 0x11c) = *(uint *)(lVar22 + 0x11c) | 0x1000;
                }
                if (iVar14 != 0) {
                  sVar38 = *(short *)(lVar22 + 0xa4);
                  if ((-1 < sVar38) &&
                     ((ulonglong)(longlong)sVar38 <
                      (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
                    lVar24 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar38 * 8);
                    if ((*(int *)(lVar24 + 0x1b0) < 2) ||
                       ((*(byte *)(*(longlong *)(lVar24 + 0x1a8) + 1) & 4) == 0)) {
                      bVar8 = false;
                    }
                    else {
                      bVar8 = true;
                    }
                    if (bVar8) goto LAB_140abcf98;
                  }
                  lVar18 = _DAT_142407548[(_DAT_142407550 - (longlong)_DAT_142407548 >> 3) + -1];
                  *(undefined4 *)(lVar22 + 0xbc) = 2;
                  *(undefined2 *)(lVar22 + 0x3b8) = 4;
                }
LAB_140abcf98:
                *(longlong *)(lVar22 + 0x3b0) = lVar18;
                if (param_2 == 2) {
                  *(uint *)(lVar22 + 0x110) = *(uint *)(lVar22 + 0x110) | 0x240010;
                }
              }
              iVar14 = (int)plStack_160[6];
              if ((iVar14 == -1) || (*(int *)((longlong)plStack_160 + 0x34) == -1)) {
                if ((*(int *)((longlong)plStack_160 + 0x2c) != -1) &&
                   (*(int *)((longlong)plStack_160 + 0x34) != -1)) {
                  plVar27 = *(longlong **)
                             (*(longlong *)
                               (*(longlong *)
                                 (_DAT_142519948 +
                                 (longlong)*(int *)((longlong)plStack_160 + 0x2c) * 8) + 0x80) +
                             (longlong)*(int *)((longlong)plStack_160 + 0x34) * 8);
                  pcVar53 = *(code **)(*plVar27 + 0x20);
                  uStack_168._0_5_ = (uint5)(uint)uStack_168;
                  uStack_18c = uStack_18c & 0xffffff00;
                  uVar30 = CONCAT44(uVar49,iStack_190) & 0xffffff00ffffffff;
                  puVar37 = (undefined8 *)0x0;
                  uVar26 = uStack_168;
LAB_140abd138:
                  (*pcVar53)(plVar27,lVar22,puVar37,1,uVar30,uVar26);
                  FUN_14136b830(lVar22,0,1);
                }
              }
              else {
                uVar30 = _DAT_14250a110 - _DAT_14250a108 >> 3;
                uVar48 = (uint)uVar30;
                if (uVar48 != 0) {
                  iVar52 = 0;
                  while (0x40 < (int)uVar48) {
                    uVar48 = (uint)(uVar30 >> 1) & 0x7fffffff;
                    iVar28 = uVar48 + iVar52;
                    if (iVar14 < **(int **)(_DAT_14250a108 + (longlong)iVar28 * 8)) {
                      iVar28 = iVar52;
                    }
                    uVar48 = (int)uVar30 - uVar48;
                    uVar30 = (ulonglong)uVar48;
                    iVar52 = iVar28;
                  }
                  iVar28 = iVar52 + uVar48;
                  if (iVar28 != -1) {
                    if (iVar52 < iVar28) {
                      lVar18 = (longlong)iVar52;
                      do {
                        if (iVar14 == **(int **)(_DAT_14250a108 + lVar18 * 8)) {
                          lStack_b8 = CONCAT44(lStack_b8._4_4_,iVar52);
                          puVar37 = *(undefined8 **)(_DAT_14250a108 + (longlong)iVar52 * 8);
                          lStack_d8 = CONCAT44(lStack_d8._4_4_,0xffffffff);
                          puStack_d0 = (undefined1 *)0x0;
                          puStack_b0 = puVar37;
                          if (puVar37 == (undefined8 *)0x0) goto LAB_140abd153;
                          plVar27 = *(longlong **)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (_DAT_142519948 +
                                         (longlong)*(int *)((longlong)puVar37 + 4) * 8) + 0x80) +
                                     (longlong)*(int *)((longlong)plStack_160 + 0x34) * 8);
                          pcVar53 = *(code **)(*plVar27 + 0x20);
                          uStack_178._0_5_ = (uint5)(uint)uStack_178;
                          uStack_158._0_5_ = (uint5)(uint)uStack_158;
                          uVar30 = uStack_158;
                          uVar26 = uStack_178;
                          goto LAB_140abd138;
                        }
                        iVar52 = iVar52 + 1;
                        lVar18 = lVar18 + 1;
                      } while (lVar18 < iVar28);
                    }
                    puStack_d0 = (undefined1 *)0x0;
                    lStack_d8 = CONCAT44(lStack_d8._4_4_,0xffffffff);
                    lStack_88 = lStack_d8;
                    uStack_80 = 0;
                    goto LAB_140abd153;
                  }
                }
                puStack_d0 = (undefined1 *)0x0;
                lStack_d8 = CONCAT44(lStack_d8._4_4_,0xffffffff);
                lStack_88 = lStack_d8;
                uStack_80 = 0;
              }
LAB_140abd153:
              FUN_1413a29c0(lVar22);
              iVar14 = (uint)uStack_180 + 1;
              uStack_180 = CONCAT44(uStack_180._4_4_,iVar14);
              uVar30 = uStack_170;
            } while (iVar14 < (int)(uint)uStack_148);
          }
          iVar14 = 0;
          uVar48 = *(uint *)((longlong)plVar51 + 4);
          if (uVar48 != 0x989681) {
            if (uVar48 <= (uint)uStack_148) {
              uVar48 = (uint)uStack_148;
            }
            *(uint *)((longlong)plVar51 + 4) = uVar48 - (uint)uStack_148;
          }
          uVar30 = (longlong)puVar42 - (longlong)puStack_120 >> 3;
          puVar37 = puStack_120;
          if (uVar30 != 0) {
            do {
              FUN_141394980(*puVar37);
              iVar14 = iVar14 + 1;
              puVar37 = puVar37 + 1;
            } while ((ulonglong)(longlong)iVar14 < uVar30);
          }
          FUN_140070de0(&lStack_138);
        }
        FUN_140070de0(&uStack_78);
        FUN_140070de0(&uStack_60);
        FUN_140070de0(&uStack_f0);
      }
    }
    FUN_140070d80(&lStack_108);
  }
  FUN_1400681a0(&puStack_120);
  return;
}

