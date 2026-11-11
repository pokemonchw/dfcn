/* Actual Ghidra decompilation; PE:6aea05a1:02734000	name-generate	0x140aac300	0x140aada6c	0x140aadacb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aac300(undefined8 *param_1,int param_2,ushort param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  short *psVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  byte bVar14;
  short *psVar15;
  int *piVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  int *piStack_110;
  ushort uStack_108;
  short *psStack_100;
  undefined1 auStack_f8 [4];
  int iStack_f4;
  int *piStack_f0;
  int iStack_e8;
  char *pcStack_e0;
  int iStack_d8;
  int iStack_d4;
  int *piStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  short *psStack_a0;
  int aiStack_98 [20];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_138;
  piStack_110 = (int *)(param_1 + 8);
  piStack_f0 = (int *)(param_1 + 9);
  psVar15 = (short *)((longlong)param_1 + 0x66);
  piVar26 = (int *)((longlong)param_1 + 0x44);
  piVar27 = (int *)(param_1 + 10);
  piVar16 = (int *)((longlong)param_1 + 0x4c);
  piVar28 = (int *)((longlong)param_1 + 0x54);
  iStack_e8 = 100;
  pcStack_e0 = (char *)((longlong)param_1 + 0x72);
  uStack_118 = param_4;
  uStack_108 = param_3;
  psStack_100 = psVar15;
  iStack_f4 = param_2;
  piStack_d0 = piVar16;
  piStack_c8 = piVar28;
  piStack_c0 = piStack_f0;
  piStack_b8 = piStack_110;
  piStack_b0 = piVar26;
  piStack_a8 = piVar27;
  psStack_a0 = psVar15;
  do {
    psVar6 = psStack_a0;
    piVar5 = piStack_a8;
    piVar4 = piStack_b0;
    piVar13 = piStack_b8;
    uVar22 = 0;
    if (((uStack_108 != 8) && (pcStack_e0 = (char *)((longlong)param_1 + 0x72), uStack_108 != 9)) ||
       (*pcStack_e0 == '\0')) {
      *piStack_b8 = -1;
      *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
      *piStack_b0 = -1;
      *(undefined2 *)((longlong)param_1 + 0x5e) = 0;
      *piStack_c0 = -1;
      *(undefined2 *)(param_1 + 0xc) = 0;
      *piStack_d0 = -1;
      *(undefined2 *)((longlong)param_1 + 0x62) = 0;
      *piStack_a8 = -1;
      *(undefined2 *)((longlong)param_1 + 100) = 0;
      *piStack_c8 = -1;
      *psStack_a0 = 0;
      *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
      *(undefined2 *)(param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
      *(undefined2 *)(param_1 + 0xe) = 0xffff;
      param_1[2] = 0;
      puVar9 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar9 = (undefined8 *)*param_1;
      }
      *(undefined1 *)puVar9 = 0;
      puVar9 = param_1 + 4;
      param_1[6] = 0;
      if (0xf < (ulonglong)param_1[7]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined1 *)puVar9 = 0;
      pcStack_e0 = (char *)((longlong)param_1 + 0x72);
      *pcStack_e0 = '\0';
      plVar8 = _DAT_14250fc20;
      uVar21 = uVar22;
      uVar19 = uVar22;
      iVar20 = iStack_f4;
      if (iStack_f4 == -1) {
        for (; uVar7 = (uint)uVar22, plVar8 < _DAT_14250fc28; plVar8 = plVar8 + 1) {
          if (((*(byte *)(*plVar8 + 0x68) & 1) == 0) && ((longlong)uVar21 < 0x14)) {
            uVar22 = (ulonglong)(uVar7 + 1);
            aiStack_98[uVar21] = (int)uVar19;
            uVar21 = uVar21 + 1;
          }
          uVar19 = (ulonglong)((int)uVar19 + 1);
        }
        if ((int)uVar7 < 1) {
          iVar20 = 0;
        }
        else {
          iVar20 = aiStack_98[0];
          if (1 < uVar7) {
            uVar7 = FUN_140ece790();
            iVar20 = aiStack_98
                     [(int)((uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / ((int)(0x7fffffff / uVar22) + 1U))];
          }
        }
      }
      iStack_f4 = iVar20;
      piStack_110 = piVar13;
      *(ushort *)(param_1 + 0xe) = uStack_108;
      *(int *)((longlong)param_1 + 0x6c) = iStack_f4;
      psStack_100 = psVar6;
      psVar15 = psVar6;
      piVar16 = piStack_d0;
      piVar26 = piVar4;
      piVar27 = piVar5;
      piVar28 = piStack_c8;
      piStack_f0 = piStack_c0;
    }
    uVar19 = 0;
    iVar20 = *(int *)((longlong)param_1 + 0x6c);
    *pcStack_e0 = '\x01';
    plVar8 = _DAT_14250fc20;
    uVar22 = uVar19;
    uVar21 = uVar19;
    if (iVar20 == -1) {
      for (; uVar7 = (uint)uVar19, plVar8 < _DAT_14250fc28; plVar8 = plVar8 + 1) {
        if (((*(byte *)(*plVar8 + 0x68) & 1) == 0) && ((longlong)uVar22 < 0x14)) {
          uVar19 = (ulonglong)(uVar7 + 1);
          aiStack_98[uVar22] = (int)uVar21;
          uVar22 = uVar22 + 1;
        }
        uVar21 = (ulonglong)((int)uVar21 + 1);
      }
      if ((int)uVar7 < 1) {
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
      }
      else if (uVar7 < 2) {
        *(int *)((longlong)param_1 + 0x6c) = aiStack_98[0];
      }
      else {
        uVar7 = FUN_140ece790();
        *(int *)((longlong)param_1 + 0x6c) =
             aiStack_98
             [(int)((uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff)
                   / ((int)(0x7fffffff / uVar19) + 1U))];
      }
    }
    piVar13 = piStack_110;
    if (uStack_108 < 0x37) {
                    /* WARNING: Switch is manually overridden */
      switch((&UNK_140aada94)[(short)uStack_108]) {
      case 0:
        if (uStack_108 != 9) {
          param_1[2] = 0;
          puVar9 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar9 = (undefined8 *)*param_1;
          }
          *(undefined1 *)puVar9 = 0;
          FUN_140d4dbd0(uStack_118,&iStack_d8,auStack_f8,2);
          uVar22 = (ulonglong)iStack_d8;
          iVar20 = *(int *)((longlong)param_1 + 0x6c);
          if (((-1 < iStack_d8) && (uVar22 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
             ((-1 < iVar20 &&
              (((ulonglong)(longlong)iVar20 <
                (ulonglong)((longlong)_DAT_14250fc28 - (longlong)_DAT_14250fc20 >> 3) &&
               (lVar2 = *(longlong *)(_DAT_14250fc20[iVar20] + 0x50),
               uVar22 <= (ulonglong)(*(longlong *)(_DAT_14250fc20[iVar20] + 0x58) - lVar2 >> 3))))))
             ) {
            plVar12 = *(longlong **)(lVar2 + uVar22 * 8);
            plVar8 = plVar12 + 2;
            if (0xf < (ulonglong)plVar12[3]) {
              plVar12 = (longlong *)*plVar12;
            }
            FUN_140071040(param_1,plVar12,*plVar8);
          }
          piVar13 = piStack_110;
          if (uStack_108 == 10) break;
        }
      case 4:
        uVar7 = FUN_140ece790();
        uVar7 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff;
        if (uVar7 >> 0x1e == 0) {
          piVar13 = (int *)(param_1 + 8);
          piStack_110 = piVar13;
          FUN_140d4dbd0(uStack_118,piVar13,(longlong)param_1 + 0x5c,0);
          piVar26 = (int *)((longlong)param_1 + 0x44);
          FUN_140d4dbd0(param_5,piVar26,(longlong)param_1 + 0x5e,1);
        }
        else {
          piVar13 = piStack_110;
          if (uVar7 >> 0x1e == 1) {
            piVar13 = (int *)(param_1 + 8);
            piStack_110 = piVar13;
            FUN_140d4dbd0(param_5,piVar13,(longlong)param_1 + 0x5c,0);
            piVar26 = (int *)((longlong)param_1 + 0x44);
            FUN_140d4dbd0(uStack_118,piVar26,(longlong)param_1 + 0x5e,1);
          }
        }
        break;
      case 1:
        uVar7 = FUN_140ece790();
        uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                0x2aaaaaab;
        if (uVar7 < 2) {
          uVar18 = FUN_140ece790();
          uVar18 = uVar18 + (int)((longlong)((ulonglong)uVar18 * 0x100000003) >> 0x3f) * 0x7fffffff;
          if (uVar18 >> 0x1e == 0) {
            piStack_110 = (int *)(param_1 + 8);
            FUN_140d4dbd0(uStack_118,piStack_110,(longlong)param_1 + 0x5c,0);
            uVar24 = param_5;
LAB_140aad00f:
            piVar26 = (int *)((longlong)param_1 + 0x44);
            FUN_140d4dbd0(uVar24,piVar26,(longlong)param_1 + 0x5e,1);
          }
          else if (uVar18 >> 0x1e == 1) {
            piStack_110 = (int *)(param_1 + 8);
            FUN_140d4dbd0(param_5,piStack_110,(longlong)param_1 + 0x5c,0);
            uVar24 = uStack_118;
            goto LAB_140aad00f;
          }
          if (uVar7 == 1) goto LAB_140aacc32;
        }
        piVar13 = piStack_110;
        if (uVar7 == 2) {
LAB_140aacc32:
          uVar7 = FUN_140ece790();
          bVar14 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                  0x7fffffff >> 0x1e);
          uVar24 = uStack_118;
          if (bVar14 == 0) {
            uVar24 = param_5;
          }
          FUN_140d4dbd0(uVar24,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
          uVar7 = FUN_140ece790();
          uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff)
                   / 0x2aaaaaab;
          uVar7 = FUN_140ece790();
          if (0x28f5c28 <
              uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
            uVar7 = FUN_140ece790();
            uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff
                     >> 0x1e;
          }
          if (uVar18 == 0) goto LAB_140aacd01;
LAB_140aac88e:
          if (uVar18 == 1) {
            bVar17 = 1 - bVar14;
          }
          else {
            uVar24 = uStack_118;
            if (uVar18 != 2) goto LAB_140aac959;
            uVar7 = FUN_140ece790();
            bVar17 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                    0x7fffffff >> 0x1e);
            uVar24 = param_5;
            if (bVar14 == 0) {
              uVar24 = uStack_118;
            }
            FUN_140d4dbd0(uVar24,param_1 + 0xb,param_1 + 0xd,5);
          }
          uVar24 = uStack_118;
          if (bVar17 == 0) {
            uVar24 = param_5;
          }
          FUN_140d4dbd0(uVar24,param_1 + 9,param_1 + 0xc,3);
          uVar7 = FUN_140ece790();
          uVar24 = uStack_118;
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x147ae15) {
            piVar13 = (int *)((longlong)param_1 + 0x4c);
            uVar25 = 3;
            puVar9 = (undefined8 *)((longlong)param_1 + 0x62);
            piVar16 = piVar13;
LAB_140aac94c:
            FUN_140d4dbd0(param_5,piVar13,puVar9,uVar25);
            uVar24 = uStack_118;
          }
          goto LAB_140aac959;
        }
        break;
      case 2:
        psVar15 = (short *)((longlong)param_1 + 0x66);
        piVar28 = (int *)((longlong)param_1 + 0x54);
        psStack_100 = psVar15;
        FUN_140d4dbd0(uStack_118,piVar28,psVar15,2);
        uVar7 = FUN_140ece790();
        uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x2aaaaaab;
        uVar7 = FUN_140ece790();
        if (0x28f5c28 <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar7 = FUN_140ece790();
          uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                   0x1e;
        }
        if (uVar18 == 0) {
          puVar9 = param_1 + 0xd;
          uVar24 = 5;
          piVar13 = (int *)(param_1 + 0xb);
LAB_140aad35e:
          FUN_140d4dbd0(param_5,piVar13,puVar9,uVar24);
        }
        else if (uVar18 == 2) {
          FUN_140d4dbd0(param_5,param_1 + 0xb,param_1 + 0xd,5);
LAB_140aad304:
          piStack_f0 = (int *)(param_1 + 9);
          FUN_140d4dbd0(param_5,piStack_f0,param_1 + 0xc,3);
          uVar7 = FUN_140ece790();
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x147ae15) {
            piVar13 = (int *)((longlong)param_1 + 0x4c);
            uVar24 = 3;
            puVar9 = (undefined8 *)((longlong)param_1 + 0x62);
            piVar16 = piVar13;
            goto LAB_140aad35e;
          }
        }
        else if (uVar18 == 1) goto LAB_140aad304;
        uVar7 = FUN_140ece790();
        piVar13 = piStack_110;
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x147ae15) {
          piVar27 = (int *)(param_1 + 10);
          FUN_140d4dbd0(param_5,piVar27,(longlong)param_1 + 100,4);
          piVar13 = piStack_110;
        }
        break;
      case 3:
        uVar7 = FUN_140ece790();
        bVar14 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                0x7fffffff >> 0x1e);
        uVar24 = uStack_118;
        if (bVar14 == 0) {
          uVar24 = param_5;
        }
        FUN_140d4dbd0(uVar24,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
        uVar7 = FUN_140ece790();
        uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x2aaaaaab;
        uVar7 = FUN_140ece790();
        if (0x28f5c28 <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar7 = FUN_140ece790();
          uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                   0x1e;
        }
        uVar24 = uStack_118;
        if (uVar18 == 0) {
          puVar9 = param_1 + 0xd;
          uVar25 = 5;
          piVar13 = (int *)(param_1 + 0xb);
          if (bVar14 == 0) {
            FUN_140d4dbd0(uStack_118,piVar13,puVar9,5);
          }
          else {
LAB_140aad568:
            FUN_140d4dbd0(param_5,piVar13,puVar9,uVar25);
            uVar24 = uStack_118;
          }
        }
        else {
          if (uVar18 == 1) {
            bVar17 = 1 - bVar14;
          }
          else {
            if (uVar18 != 2) goto LAB_140aad575;
            uVar7 = FUN_140ece790();
            bVar17 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                    0x7fffffff >> 0x1e);
            uVar24 = param_5;
            if (bVar14 == 0) {
              uVar24 = uStack_118;
            }
            FUN_140d4dbd0(uVar24,param_1 + 0xb,param_1 + 0xd,5);
          }
          uVar24 = uStack_118;
          if (bVar17 == 0) {
            uVar24 = param_5;
          }
          FUN_140d4dbd0(uVar24,param_1 + 9,param_1 + 0xc,3);
          uVar7 = FUN_140ece790();
          uVar24 = uStack_118;
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x147ae15) {
            piVar13 = (int *)((longlong)param_1 + 0x4c);
            uVar25 = 3;
            puVar9 = (undefined8 *)((longlong)param_1 + 0x62);
            piVar16 = piVar13;
            goto LAB_140aad568;
          }
        }
LAB_140aad575:
        uVar7 = FUN_140ece790();
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x147ae15) {
          uVar7 = FUN_140ece790();
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x40000000) {
            uVar24 = param_5;
          }
          FUN_140d4dbd0(uVar24,param_1 + 10,(longlong)param_1 + 100,4);
        }
        psStack_100 = (short *)((longlong)param_1 + 0x66);
        psVar15 = psStack_100;
        piVar13 = piStack_110;
        if (*(short *)((longlong)param_1 + 0x66) == 0) {
          iVar20 = *(int *)((longlong)param_1 + 0x54);
          piVar28 = (int *)((longlong)param_1 + 0x54);
          if (((-1 < iVar20) &&
              ((ulonglong)(longlong)iVar20 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
             (*(longlong *)(*(longlong *)(_DAT_14250fbf0 + (longlong)iVar20 * 8) + 0x50) != 0)) {
            psStack_100 = (short *)((longlong)param_1 + 0x66);
            *psStack_100 = 1;
            psVar15 = psStack_100;
          }
        }
        break;
      case 5:
        uVar7 = FUN_140ece790();
        uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                0x2aaaaaab;
        if (uVar7 < 2) {
          piStack_110 = (int *)(param_1 + 8);
          FUN_140d4dbd0(param_5,piStack_110,(longlong)param_1 + 0x5c,0);
          piVar26 = (int *)((longlong)param_1 + 0x44);
          FUN_140d4dbd0(uStack_118,piVar26,(longlong)param_1 + 0x5e,1);
          if (uVar7 != 1) goto LAB_140aacd99;
        }
        else {
LAB_140aacd99:
          piVar13 = piStack_110;
          if (uVar7 != 2) break;
        }
        uVar18 = FUN_140ece790();
        bVar14 = (byte)(uVar18 + (int)((longlong)((ulonglong)uVar18 * 0x100000003) >> 0x3f) *
                                 0x7fffffff >> 0x1e);
        if (uVar7 == 2) {
          bVar14 = 1;
        }
        uVar24 = uStack_118;
        if (bVar14 == 0) {
          uVar24 = param_5;
        }
        FUN_140d4dbd0(uVar24,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
        uVar7 = FUN_140ece790();
        uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x2aaaaaab;
        uVar7 = FUN_140ece790();
        if (0x28f5c28 <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar7 = FUN_140ece790();
          uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                   0x1e;
        }
        if (uVar18 == 0) {
          puVar9 = param_1 + 0xd;
          uVar24 = 5;
          piVar13 = (int *)(param_1 + 0xb);
LAB_140aacf0c:
          FUN_140d4dbd0(param_5,piVar13,puVar9,uVar24);
        }
        else if (uVar18 == 2) {
          FUN_140d4dbd0(param_5,param_1 + 0xb,param_1 + 0xd,5);
LAB_140aaceb2:
          piStack_f0 = (int *)(param_1 + 9);
          FUN_140d4dbd0(param_5,piStack_f0,param_1 + 0xc,3);
          uVar7 = FUN_140ece790();
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x147ae15) {
            piVar13 = (int *)((longlong)param_1 + 0x4c);
            uVar24 = 3;
            puVar9 = (undefined8 *)((longlong)param_1 + 0x62);
            piVar16 = piVar13;
            goto LAB_140aacf0c;
          }
        }
        else if (uVar18 == 1) goto LAB_140aaceb2;
        uVar7 = FUN_140ece790();
        piVar13 = piStack_110;
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x147ae15) {
          piVar27 = (int *)(param_1 + 10);
          FUN_140d4dbd0(param_5,piVar27,(longlong)param_1 + 100,4);
          piVar13 = piStack_110;
        }
        break;
      case 6:
        uVar7 = FUN_140ece790();
        if (0x2aaaaaaa <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff)
        goto LAB_140aacc32;
        piStack_f0 = (int *)(param_1 + 9);
        FUN_140d4dbd0(uStack_118,piStack_f0,param_1 + 0xc,3);
        piVar13 = piStack_110;
        break;
      case 7:
        uVar7 = FUN_140ece790();
        bVar14 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                0x7fffffff >> 0x1e);
        uVar24 = uStack_118;
        if (bVar14 == 0) {
          uVar24 = param_5;
        }
        FUN_140d4dbd0(uVar24,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
        uVar7 = FUN_140ece790();
        uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x2aaaaaab;
        uVar7 = FUN_140ece790();
        if (0x28f5c28 <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar7 = FUN_140ece790();
          uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                   0x1e;
        }
        if (uVar18 != 0) goto LAB_140aac88e;
LAB_140aacd01:
        uVar24 = uStack_118;
        puVar9 = param_1 + 0xd;
        uVar25 = 5;
        piVar13 = (int *)(param_1 + 0xb);
        if (bVar14 != 0) goto LAB_140aac94c;
        FUN_140d4dbd0(uStack_118,piVar13,puVar9,5);
LAB_140aac959:
        uVar7 = FUN_140ece790();
        psVar15 = psStack_100;
        piVar13 = piStack_110;
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x147ae15) {
          uVar7 = FUN_140ece790();
          uVar25 = param_5;
          if (0x3fffffff <
              uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
            uVar25 = uVar24;
          }
          FUN_140d4dbd0(uVar25,param_1 + 10,(longlong)param_1 + 100,4);
          psVar15 = psStack_100;
          piVar13 = piStack_110;
        }
        break;
      case 8:
        uVar7 = FUN_140ece790();
        if (0x2aaaaaaa <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar7 = FUN_140ece790();
          bVar14 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                  0x7fffffff >> 0x1e);
          uVar24 = uStack_118;
          if (bVar14 == 0) {
            uVar24 = param_5;
          }
          FUN_140d4dbd0(uVar24,(longlong)param_1 + 0x54,(longlong)param_1 + 0x66,2);
          uVar7 = FUN_140ece790();
          uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff)
                   / 0x2aaaaaab;
          uVar7 = FUN_140ece790();
          if (0x28f5c28 <
              uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
            uVar7 = FUN_140ece790();
            uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff
                     >> 0x1e;
          }
          uVar24 = uStack_118;
          if (uVar18 == 0) {
            puVar9 = param_1 + 0xd;
            uVar25 = 5;
            piVar13 = (int *)(param_1 + 0xb);
            if (bVar14 == 0) {
              FUN_140d4dbd0(uStack_118,piVar13,puVar9,5);
            }
            else {
LAB_140aad9e5:
              FUN_140d4dbd0(param_5,piVar13,puVar9,uVar25);
              uVar24 = uStack_118;
            }
          }
          else {
            if (uVar18 == 1) {
              bVar17 = 1 - bVar14;
            }
            else {
              if (uVar18 != 2) goto LAB_140aad9f2;
              uVar7 = FUN_140ece790();
              bVar17 = (byte)(uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                                      0x7fffffff >> 0x1e);
              uVar24 = param_5;
              if (bVar14 == 0) {
                uVar24 = uStack_118;
              }
              FUN_140d4dbd0(uVar24,param_1 + 0xb,param_1 + 0xd,5);
            }
            uVar24 = uStack_118;
            if (bVar17 == 0) {
              uVar24 = param_5;
            }
            FUN_140d4dbd0(uVar24,param_1 + 9,param_1 + 0xc,3);
            uVar7 = FUN_140ece790();
            uVar24 = uStack_118;
            if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
                0x147ae15) {
              piVar13 = (int *)((longlong)param_1 + 0x4c);
              uVar25 = 3;
              puVar9 = (undefined8 *)((longlong)param_1 + 0x62);
              piVar16 = piVar13;
              goto LAB_140aad9e5;
            }
          }
LAB_140aad9f2:
          uVar7 = FUN_140ece790();
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x147ae15) {
            uVar7 = FUN_140ece790();
            if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
                0x40000000) goto LAB_140aad1b2;
            goto LAB_140aad1b5;
          }
          goto LAB_140aad1ba;
        }
        uVar7 = FUN_140ece790();
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x40000000) {
          uVar7 = FUN_140ece790();
          uVar7 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff;
          if (uVar7 >> 0x1e == 0) {
            piVar13 = (int *)(param_1 + 8);
            piStack_110 = piVar13;
            FUN_140d4dbd0(uStack_118,piVar13,(longlong)param_1 + 0x5c,0);
            piVar26 = (int *)((longlong)param_1 + 0x44);
            FUN_140d4dbd0(param_5,piVar26,(longlong)param_1 + 0x5e,1);
          }
          else {
            piVar13 = piStack_110;
            if (uVar7 >> 0x1e == 1) {
              piVar13 = (int *)(param_1 + 8);
              piStack_110 = piVar13;
              FUN_140d4dbd0(param_5,piVar13,(longlong)param_1 + 0x5c,0);
              piVar26 = (int *)((longlong)param_1 + 0x44);
              FUN_140d4dbd0(uStack_118,piVar26,(longlong)param_1 + 0x5e,1);
            }
          }
        }
        else {
          param_1[2] = 0;
          puVar9 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar9 = (undefined8 *)*param_1;
          }
          *(undefined1 *)puVar9 = 0;
          FUN_140d4dbd0(uStack_118,&iStack_d4,auStack_f8,2);
          uVar22 = (ulonglong)iStack_d4;
          iVar20 = *(int *)((longlong)param_1 + 0x6c);
          piVar13 = piStack_110;
          if (((-1 < iStack_d4) && (uVar22 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
             ((-1 < iVar20 &&
              (((ulonglong)(longlong)iVar20 <
                (ulonglong)((longlong)_DAT_14250fc28 - (longlong)_DAT_14250fc20 >> 3) &&
               (lVar2 = *(longlong *)(_DAT_14250fc20[iVar20] + 0x50),
               uVar22 <= (ulonglong)(*(longlong *)(_DAT_14250fc20[iVar20] + 0x58) - lVar2 >> 3))))))
             ) {
            plVar12 = *(longlong **)(lVar2 + uVar22 * 8);
            plVar8 = plVar12 + 2;
            if (0xf < (ulonglong)plVar12[3]) {
              plVar12 = (longlong *)*plVar12;
            }
            FUN_140071040(param_1,plVar12,*plVar8);
            piVar13 = piStack_110;
          }
        }
        piStack_f0 = (int *)(param_1 + 9);
        FUN_140d4dbd0(uStack_118,piStack_f0,param_1 + 0xc,3);
        break;
      case 9:
        piVar28 = (int *)((longlong)param_1 + 0x54);
        FUN_140d4dbd0(uStack_118,piVar28,(longlong)param_1 + 0x66,2);
        uVar7 = FUN_140ece790();
        uVar18 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 0x2aaaaaab;
        uVar7 = FUN_140ece790();
        if (0x28f5c28 <
            uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar7 = FUN_140ece790();
          uVar18 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                   0x1e;
        }
        if (uVar18 == 0) {
          puVar9 = param_1 + 0xd;
          uVar24 = 5;
          piVar13 = (int *)(param_1 + 0xb);
LAB_140aad16b:
          FUN_140d4dbd0(param_5,piVar13,puVar9,uVar24);
        }
        else if (uVar18 == 2) {
          FUN_140d4dbd0(param_5,param_1 + 0xb,param_1 + 0xd,5);
LAB_140aad111:
          piStack_f0 = (int *)(param_1 + 9);
          FUN_140d4dbd0(param_5,piStack_f0,param_1 + 0xc,3);
          uVar7 = FUN_140ece790();
          if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x147ae15) {
            piVar13 = (int *)((longlong)param_1 + 0x4c);
            uVar24 = 3;
            puVar9 = (undefined8 *)((longlong)param_1 + 0x62);
            piVar16 = piVar13;
            goto LAB_140aad16b;
          }
        }
        else if (uVar18 == 1) goto LAB_140aad111;
        uVar7 = FUN_140ece790();
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x147ae15) {
          piVar27 = (int *)(param_1 + 10);
LAB_140aad1b2:
          uVar24 = param_5;
LAB_140aad1b5:
          FUN_140d4dbd0(uVar24,param_1 + 10,(longlong)param_1 + 100,4);
        }
LAB_140aad1ba:
        psStack_100 = (short *)((longlong)param_1 + 0x66);
        psVar15 = psStack_100;
        piVar13 = piStack_110;
        if (*(short *)((longlong)param_1 + 0x66) == 1) {
          iVar20 = *(int *)((longlong)param_1 + 0x54);
          piVar28 = (int *)((longlong)param_1 + 0x54);
          if (((-1 < iVar20) &&
              ((ulonglong)(longlong)iVar20 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
             (*(longlong *)(*(longlong *)(_DAT_14250fbf0 + (longlong)iVar20 * 8) + 0x30) != 0)) {
            psStack_100 = (short *)((longlong)param_1 + 0x66);
            *psStack_100 = 0;
            psVar15 = psStack_100;
          }
        }
      }
    }
    iVar20 = *piStack_f0;
    if (iVar20 != -1) {
      iVar10 = *(int *)((longlong)param_1 + 0x4c);
      piVar16 = (int *)((longlong)param_1 + 0x4c);
      if ((iVar10 != -1) &&
         (*(char *)(*(longlong *)(_DAT_14250fbf0 + (longlong)iVar20 * 8) + 0x140) <
          *(char *)(*(longlong *)(_DAT_14250fbf0 + (longlong)iVar10 * 8) + 0x140))) {
        uVar1 = *(undefined2 *)(param_1 + 0xc);
        piVar16 = (int *)((longlong)param_1 + 0x4c);
        *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((longlong)param_1 + 0x62);
        *piVar16 = iVar20;
        *(undefined2 *)((longlong)param_1 + 0x62) = uVar1;
        *piStack_f0 = iVar10;
        iVar20 = iVar10;
      }
    }
    bVar3 = false;
    if ((*psVar15 == 1) && (*(short *)(param_1 + 0xd) == 1)) {
      bVar3 = true;
    }
    iVar10 = *piVar13;
    if (iVar10 != -1) {
      piVar26 = (int *)((longlong)param_1 + 0x44);
      iVar11 = iVar10;
      if (iVar10 == *piVar26) {
        iVar11 = *(int *)(param_1 + 8);
        bVar3 = true;
      }
      iVar23 = iVar10;
      if (iVar10 == *(int *)(param_1 + 0xb)) {
        bVar3 = true;
        iVar23 = iVar11;
      }
      piVar27 = (int *)(param_1 + 10);
      iVar11 = iVar10;
      if (iVar10 == *piVar27) {
        bVar3 = true;
        iVar11 = iVar23;
      }
      iVar23 = iVar10;
      if (iVar10 == iVar20) {
        bVar3 = true;
        iVar23 = iVar11;
      }
      piVar16 = (int *)((longlong)param_1 + 0x4c);
      if (iVar10 == *(int *)((longlong)param_1 + 0x4c)) {
        bVar3 = true;
        iVar10 = iVar23;
      }
      piVar28 = (int *)((longlong)param_1 + 0x54);
      if (iVar10 == *(int *)((longlong)param_1 + 0x54)) {
        bVar3 = true;
      }
    }
    iVar10 = *piVar26;
    if (iVar10 != -1) {
      piVar27 = (int *)(param_1 + 10);
      piVar16 = (int *)((longlong)param_1 + 0x4c);
      if (iVar10 == *(int *)(param_1 + 0xb)) {
        bVar3 = true;
      }
      piVar28 = (int *)((longlong)param_1 + 0x54);
      if (iVar10 == *piVar27) {
        bVar3 = true;
      }
      if (iVar10 == iVar20) {
        bVar3 = true;
      }
      if (iVar10 == *piVar16) {
        bVar3 = true;
      }
      if (iVar10 == *piVar28) {
        bVar3 = true;
      }
    }
    iVar10 = *piVar27;
    if (iVar10 != -1) {
      piVar16 = (int *)((longlong)param_1 + 0x4c);
      piVar28 = (int *)((longlong)param_1 + 0x54);
      if (iVar10 == *(int *)(param_1 + 0xb)) {
        bVar3 = true;
      }
      if (iVar10 == iVar20) {
        bVar3 = true;
      }
      if (iVar10 == *piVar16) {
        bVar3 = true;
      }
      if (iVar10 == *piVar28) {
        bVar3 = true;
      }
    }
    if (iVar20 != -1) {
      piVar16 = (int *)((longlong)param_1 + 0x4c);
      piVar28 = (int *)((longlong)param_1 + 0x54);
      if (iVar20 == *(int *)(param_1 + 0xb)) {
        bVar3 = true;
      }
      if (iVar20 == *piVar16) {
        bVar3 = true;
      }
      if (iVar20 == *piVar28) {
        bVar3 = true;
      }
    }
    iVar20 = *piVar16;
    if (iVar20 != -1) {
      piVar28 = (int *)((longlong)param_1 + 0x54);
      if (iVar20 == *(int *)(param_1 + 0xb)) {
        bVar3 = true;
      }
      if (iVar20 == *piVar28) {
        bVar3 = true;
      }
    }
    if ((((*piVar28 == -1) || (*piVar28 != *(int *)(param_1 + 0xb))) && (!bVar3)) ||
       (iStack_e8 = iStack_e8 + -1, iStack_e8 < 1)) {
      FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_138);
      return;
    }
  } while( true );
}

