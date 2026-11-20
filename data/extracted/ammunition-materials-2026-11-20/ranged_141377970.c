/* Actual Ghidra output, research name; VA 0x141377970..0x14137884d. */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ranged_141377970(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                     int param_5,int param_6,int param_7,short param_8,undefined4 param_9)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  int *piVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  short sVar29;
  longlong lVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined4 uStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  undefined4 uStack_148;
  ushort uStack_140;
  undefined4 uStack_138;
  int iStack_128;
  int iStack_124;
  uint uStack_120;
  int iStack_11c;
  longlong lStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  longlong lStack_100;
  longlong *aplStack_f8 [2];
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e2;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  longlong lStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uVar28;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_188;
  lStack_100 = param_4;
  aplStack_f8[0] = param_3;
  if (param_3 == (longlong *)0x0) goto LAB_14137882d;
  lVar22 = *(longlong *)(param_1 + 0x408);
  iVar9 = (int)(*(longlong *)(param_1 + 0x410) - lVar22 >> 3);
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    plVar12 = *(longlong **)(lVar22 + (longlong)iVar9 * 8);
    if (((short)plVar12[1] == 0) && ((longlong *)*plVar12 != param_3)) {
      uVar27 = (uint)uStack_168 >> 8;
      uStack_168 = CONCAT31((int3)uVar27,1);
      FUN_141342500(param_1,*plVar12,CONCAT71((int7)(int3)((uint)iVar9 >> 8),1),0);
      lVar22 = *(longlong *)(param_1 + 0x408);
      iVar23 = (int)(*(longlong *)(param_1 + 0x410) - lVar22 >> 3);
      if (iVar23 < iVar9) {
        iVar9 = iVar23;
      }
    }
  }
  cVar5 = (**(code **)(*param_3 + 0x448))(param_3);
  plVar12 = param_3;
  if (cVar5 == '\0') {
    FUN_140c7b1e0(param_3,2);
  }
  else {
    if ((int)param_3[0x10] == 1) {
      FUN_140c7b1e0(param_3,2);
    }
    else {
      plVar12 = (longlong *)(**(code **)(*param_3 + 0x388))(param_3,1,0);
      (**(code **)(*plVar12 + 0x328))(plVar12,1);
    }
    if (plVar12 == (longlong *)0x0) goto LAB_14137882d;
  }
  if (param_4 == 0) {
    iStack_11c = param_7;
    iStack_124 = param_6;
    iStack_128 = param_5;
  }
  else {
    iStack_128 = (int)*(short *)(param_4 + 0xa8);
    iStack_124 = (int)*(short *)(param_4 + 0xaa);
    iStack_11c = (int)*(short *)(param_4 + 0xac);
  }
  if ((*(uint *)(param_1 + 0x118) >> 0x16 & 1) != 0) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffbfffff;
    FUN_14065d210(param_1);
  }
  (**(code **)(*plVar12 + 0x710))(plVar12);
  puVar13 = (undefined4 *)FUN_1400bb3f0(*(undefined4 *)((longlong)plVar12 + 0x1c),param_1 + 0xd50);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)FUN_1415530e0(0x10);
    *puVar13 = 0xffffffff;
    *(undefined8 *)(puVar13 + 1) = 0;
    puVar13[3] = 0;
    *puVar13 = *(undefined4 *)((longlong)plVar12 + 0x1c);
    puStack_110 = (undefined8 *)puVar13;
    FUN_1400bb5d0(puVar13,param_1 + 0xd50);
  }
  puVar13[3] = puVar13[3] + 1;
  (**(code **)(*param_2 + 0x710))(param_2);
  puVar13 = (undefined4 *)FUN_1400bb3f0(*(undefined4 *)((longlong)param_2 + 0x1c),param_1 + 0xd50);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)FUN_1415530e0(0x10);
    *puVar13 = 0xffffffff;
    *(undefined8 *)(puVar13 + 1) = 0;
    puVar13[3] = 0;
    *puVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puStack_110 = (undefined8 *)puVar13;
    FUN_1400bb5d0(puVar13,param_1 + 0xd50);
  }
  puVar13[3] = puVar13[3] + 1;
  if (_DAT_1418be238 == 0) {
    if (DAT_1418be2e6 == '\x01') {
LAB_141377c78:
      *(uint *)(plVar12 + 2) = *(uint *)(plVar12 + 2) | 0x80000;
      FUN_140c7b1e0(plVar12,3);
      goto LAB_141377c91;
    }
    if ((DAT_1418be2e6 == '\x02') &&
       (iVar9 = (int)(_DAT_1423b59e0 - _DAT_1423b59d8 >> 3) + -1, -1 < iVar9)) {
      lVar22 = (longlong)iVar9;
      do {
        lVar30 = *(longlong *)(_DAT_1423b59d8 + lVar22 * 8);
        iVar9 = *(int *)(lVar30 + 4);
        if ((((((iVar9 == -1) || ((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0)) ||
              (lVar14 = FUN_1400bb6d0(iVar9,&DAT_1423f3c78), lVar14 == 0)) ||
             ((*(int *)(*(longlong *)(lVar14 + 8) + 0x3a8) < 1 ||
              ((**(byte **)(*(longlong *)(lVar14 + 8) + 0x3a0) & 4) == 0)))) &&
            (uVar1 = *(ushort *)(lVar30 + 0x18), (uVar1 & 1) != 0)) &&
           (((uVar1 & 2) != 0 && (param_4 = lStack_100, iVar9 != -1)))) goto LAB_141377c78;
        lVar22 = lVar22 + -1;
      } while (-1 < lVar22);
    }
  }
  else {
LAB_141377c91:
    if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
      uVar8 = (**(code **)(*param_2 + 0x38))(param_2);
      uVar11 = (**(code **)(*param_2 + 0x40))(param_2);
      lVar22 = FUN_1414c6fe0(0x1423f3970,uVar8,uVar11);
      if (lVar22 == 0) {
LAB_141377cfc:
        lVar22 = FUN_1414c6fe0(0x1423f3970,uVar8,uVar11);
        if (lVar22 != 0) {
          if ((*(int *)(lVar22 + 0x298) < 1) || ((**(byte **)(lVar22 + 0x290) & 1) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          uVar33 = 0x159b;
          if (bVar3) goto LAB_141377d3c;
        }
        uVar33 = 0x159d;
      }
      else {
        if ((*(int *)(lVar22 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar22 + 0x290) + 5))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_141377cfc;
        uVar33 = 0x159c;
      }
LAB_141377d3c:
      FUN_1407fdb30(uVar33);
      if (((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) && ((DAT_1423b34c8 & 8) != 0)) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0xf;
        lStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0xf;
        pppppppuStack_90 = (undefined8 *******)0x0;
        FUN_140070f00(&lStack_70,&UNK_1417a3e28,10);
        FUN_140c7d140(plVar12,&pppppppuStack_90,0,1);
        pppppppuVar15 = &pppppppuStack_90;
        if (0xf < uStack_78) {
          pppppppuVar15 = pppppppuStack_90;
        }
        FUN_140071040(&lStack_70,pppppppuVar15,uStack_80);
        if (param_4 != 0) {
          FUN_140071040(&lStack_70,&UNK_14161e0c4,4);
          uStack_80 = 0;
          pppppppuVar15 = &pppppppuStack_90;
          if (0xf < uStack_78) {
            pppppppuVar15 = pppppppuStack_90;
          }
          *(undefined1 *)pppppppuVar15 = 0;
          FUN_141348290(param_4,&pppppppuStack_90,1);
          pppppppuVar15 = &pppppppuStack_90;
          if (0xf < uStack_78) {
            pppppppuVar15 = pppppppuStack_90;
          }
          FUN_140071040(&lStack_70,pppppppuVar15,uStack_80);
        }
        FUN_140071040(&lStack_70,&UNK_141608bfc,6);
        FUN_140c7d140(param_2,&pppppppuStack_90,0,1);
        pppppppuVar15 = &pppppppuStack_90;
        if (0xf < uStack_78) {
          pppppppuVar15 = pppppppuStack_90;
        }
        FUN_140071040(&lStack_70,pppppppuVar15,uStack_80);
        FUN_140071040(&lStack_70,&UNK_141603844,1);
        uStack_e2 = 0x8ad08ad0;
        uStack_de = 0x8ad0;
        uStack_dc = 0;
        uStack_d8 = 0x8ad08ad0;
        uStack_d4 = 0x8ad0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0;
        uStack_a8 = 0xffffffff;
        uStack_e8 = 0x600ea;
        uStack_e4 = 1;
        uStack_cc = 100;
        FUN_1400e5250(0x142505cd0,&lStack_70,&uStack_e8);
        if (0xf < uStack_78) {
          uVar21 = uStack_78 + 1;
          pppppppuVar15 = pppppppuStack_90;
          if (0xfff < uVar21) {
            uVar21 = uStack_78 + 0x28;
            pppppppuVar15 = (undefined8 *******)pppppppuStack_90[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)pppppppuStack_90 + (-8 - (longlong)pppppppuVar15))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          callee_1415530d0(pppppppuVar15,uVar21);
        }
        uStack_80 = 0;
        uStack_78 = 0xf;
        pppppppuStack_90 = (undefined8 *******)((ulonglong)pppppppuStack_90 & 0xffffffffffffff00);
        if (0xf < uStack_58) {
          uVar21 = uStack_58 + 1;
          lVar22 = lStack_70;
          if (0xfff < uVar21) {
            uVar21 = uStack_58 + 0x28;
            lVar22 = *(longlong *)(lStack_70 + -8);
            if (0x1f < (lStack_70 - lVar22) - 8U) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          callee_1415530d0(lVar22,uVar21);
        }
      }
    }
  }
  puVar16 = (undefined8 *)FUN_1415530e0(0xa0);
  puStack_110 = puVar16;
  puStack_108 = puVar16;
  projectile_base_init(puVar16,0);
  *puVar16 = &UNK_141678420;
  if ((*(uint *)(plVar12 + 2) & 0x20000000) == 0) {
    item_mass(plVar12);
  }
  iVar9 = *(int *)((longlong)plVar12 + 0x74);
  if ((*(uint *)(plVar12 + 2) & 0x20000000) == 0) {
    item_mass(plVar12);
  }
  puVar31 = (undefined8 *)((longlong)iVar9 * 1000000 + (longlong)(int)plVar12[0xf]);
  lStack_118 = 1000000000;
  iVar9 = 10;
  puStack_110 = puVar31;
  sVar6 = (**(code **)*param_2)(param_2);
  if (sVar6 == 0x18) {
    lVar22 = param_2[0x1d];
    lStack_118 = (longlong)*(int *)(lVar22 + 0x130) * 50000;
    lVar30 = *(longlong *)(lVar22 + 0x140) - *(longlong *)(lVar22 + 0x138) >> 2;
    lStack_98 = (*(longlong *)(lVar22 + 0x1a0) - *(longlong *)(lVar22 + 0x198) >> 1) +
                (*(longlong *)(lVar22 + 0x170) - *(longlong *)(lVar22 + 0x168) >> 2) + lVar30;
    if (0 < lStack_98) {
      uVar21 = 0;
      iVar9 = (int)lVar30;
      if (0 < iVar9) {
        lVar30 = *(longlong *)(param_1 + 0x8e8);
        piVar24 = *(int **)(lVar22 + 0x150);
        lVar22 = *(longlong *)(lVar22 + 0x138) - (longlong)piVar24;
        uVar28 = uVar21;
        do {
          lVar14 = (longlong)*(int *)(lVar22 + (longlong)piVar24);
          iVar23 = *(int *)((lVar14 + 0x37) * 0x1c + param_1) -
                   *(int *)(lVar14 * 0x1c + 0x614 + param_1);
          if (lVar30 != 0) {
            iVar23 = (iVar23 * *(int *)(lVar30 + lVar14 * 4)) / 100 +
                     *(int *)(lVar30 + 0x18 + lVar14 * 4);
          }
          iVar26 = 0;
          if (-1 < iVar23) {
            iVar26 = iVar23;
          }
          iVar23 = *piVar24;
          if ((iVar26 < iVar23) && (0 < iVar23)) {
            uVar21 = uVar21 + (longlong)((iVar26 * 100) / iVar23);
          }
          else {
            uVar21 = uVar21 + 100;
          }
          uVar27 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar27;
          piVar24 = piVar24 + 1;
          puVar16 = puStack_108;
        } while ((int)uVar27 < iVar9);
      }
      iVar9 = 0;
      lVar22 = param_2[0x1d];
      iVar23 = (int)(*(longlong *)(lVar22 + 0x170) - *(longlong *)(lVar22 + 0x168) >> 2);
      if (0 < iVar23) {
        lVar30 = *(longlong *)(param_1 + 0xa98);
        piVar24 = *(int **)(lVar22 + 0x180);
        lVar22 = *(longlong *)(lVar22 + 0x168) - (longlong)piVar24;
        do {
          if (lVar30 == 0) {
            iVar18 = 0;
          }
          else {
            lVar25 = (longlong)*(int *)(lVar22 + (longlong)piVar24);
            iVar26 = *(int *)(lVar25 * 0x1c + 0xac + lVar30) -
                     *(int *)(lVar25 * 0x1c + 0xbc + lVar30);
            lVar14 = *(longlong *)(param_1 + 0x8e8);
            if (lVar14 != 0) {
              iVar26 = (iVar26 * *(int *)(lVar14 + 0x30 + lVar25 * 4)) / 100 +
                       *(int *)(lVar14 + 100 + lVar25 * 4);
            }
            iVar18 = 0;
            if (-1 < iVar26) {
              iVar18 = iVar26;
            }
          }
          iVar26 = *piVar24;
          if ((iVar18 < iVar26) && (0 < iVar26)) {
            uVar21 = uVar21 + (longlong)((iVar18 * 100) / iVar26);
          }
          else {
            uVar21 = uVar21 + 100;
          }
          iVar9 = iVar9 + 1;
          piVar24 = piVar24 + 1;
          puVar16 = puStack_108;
        } while (iVar9 < iVar23);
      }
      uVar20 = 0;
      lVar22 = param_2[0x1d];
      uVar28 = uVar20;
      uVar32 = uVar20;
      if (0 < (int)(*(longlong *)(lVar22 + 0x1a0) - *(longlong *)(lVar22 + 0x198) >> 1)) {
        do {
          iVar23 = FUN_1413570b0(param_1,*(undefined2 *)(*(longlong *)(lVar22 + 0x198) + uVar28));
          lVar22 = param_2[0x1d];
          iVar9 = *(int *)(uVar32 + *(longlong *)(lVar22 + 0x1b0));
          if ((iVar23 < iVar9) && (0 < iVar9)) {
            uVar21 = uVar21 + (longlong)((iVar23 * 100) / iVar9);
          }
          else {
            uVar21 = uVar21 + 100;
          }
          uVar27 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar27;
          puVar16 = puStack_108;
          uVar28 = uVar28 + 2;
          uVar32 = uVar32 + 4;
        } while ((int)uVar27 <
                 (int)(*(longlong *)(lVar22 + 0x1a0) - *(longlong *)(lVar22 + 0x198) >> 1));
      }
      lStack_118 = (longlong)(uVar21 * lStack_118) / (lStack_98 * 100);
      puVar31 = puStack_110;
    }
    iVar9 = *(int *)(lVar22 + 0x1c8);
    param_3 = aplStack_f8[0];
  }
  iVar23 = iStack_128;
  iVar26 = iVar9;
  if (0 < (longlong)puVar31) {
    iVar26 = (int)(lStack_118 / (longlong)puVar31);
  }
  *(int *)(puVar16 + 0xb) = iVar26;
  if (iVar9 < iVar26) {
    *(int *)(puVar16 + 0xb) = iVar9;
    iVar26 = iVar9;
  }
  if (iVar26 < 1) {
    *(undefined4 *)(puVar16 + 0xb) = 1;
  }
  *(undefined2 *)(puVar16 + 4) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)((longlong)puVar16 + 0x22) = *(undefined2 *)(param_1 + 0xaa);
  *(undefined2 *)((longlong)puVar16 + 0x24) = *(undefined2 *)(param_1 + 0xac);
  *(undefined2 *)((longlong)puVar16 + 0x32) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)((longlong)puVar16 + 0x34) = *(undefined2 *)(param_1 + 0xaa);
  *(undefined2 *)((longlong)puVar16 + 0x36) = *(undefined2 *)(param_1 + 0xac);
  iVar26 = (int)*(short *)(param_1 + 0xa8);
  iVar9 = -(iVar26 - iStack_128);
  if (iVar9 < 0) {
    iVar9 = iVar26 - iStack_128;
  }
  iVar10 = *(short *)(param_1 + 0xaa) - iStack_124;
  iVar18 = -iVar10;
  if (iVar18 < 0) {
    iVar18 = iVar10;
  }
  if (iVar9 < iVar18) {
    iVar9 = iVar18;
  }
  uVar27 = iStack_128 - iVar26;
  uStack_120 = iStack_124 - *(short *)(param_1 + 0xaa);
  iVar18 = FUN_141377720(param_1,param_2,param_3,10);
  if (((iVar23 == iVar26) && (uStack_120 == uVar27)) || (iVar18 == 0)) {
    *(short *)((longlong)puVar16 + 0x26) = (short)iStack_128;
    *(short *)(puVar16 + 5) = (short)iStack_124;
    uVar8 = (short)iStack_11c;
  }
  else {
    uStack_140 = uStack_140 & 0xff00;
    uStack_148 = 100;
    plStack_150 = (longlong *)((ulonglong)plStack_150 & 0xffffffffffffff00);
    plStack_158 = (longlong *)((ulonglong)plStack_158 & 0xffffffffffffff00);
    uStack_160 = CONCAT22(uStack_160._2_2_,(short)iStack_11c);
    uStack_168 = CONCAT22(uStack_168._2_2_,(short)iStack_124);
    FUN_140aa8e50(*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xaa),
                  *(undefined2 *)(param_1 + 0xac),(short)iStack_128);
    sVar6 = _DAT_141bd5f26;
    lStack_118 = CONCAT44(lStack_118._4_4_,(int)_DAT_141bd5f24);
    uStack_120 = iVar18 * 2 + 1;
    sVar29 = (short)iVar18;
    if (uStack_120 < 2) {
      *(short *)((longlong)puVar16 + 0x26) = _DAT_141bd5f24 - sVar29;
      sVar7 = 0;
    }
    else {
      uVar27 = FUN_140ece790();
      uVar27 = uVar27 + (int)((longlong)((ulonglong)uVar27 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar19 = (int)(0x7fffffff / (ulonglong)uStack_120) + 1;
      *(short *)((longlong)puVar16 + 0x26) = ((short)(uVar27 / uVar19) - sVar29) + (short)lStack_118
      ;
      uVar27 = FUN_140ece790((ulonglong)uVar19,(ulonglong)uVar27 % (ulonglong)uVar19);
      sVar7 = (short)((uVar27 + (int)((longlong)((ulonglong)uVar27 * 0x100000003) >> 0x3f) *
                                0x7fffffff) / ((int)(0x7fffffff / (ulonglong)uStack_120) + 1U));
    }
    *(short *)(puVar16 + 5) = (sVar6 - sVar29) + sVar7;
    uVar8 = _DAT_141bd5f28;
  }
  *(undefined2 *)((longlong)puVar16 + 0x2a) = uVar8;
  *(undefined4 *)(puVar16 + 7) = 0;
  *(int *)(puVar16 + 8) = iVar9 >> 1;
  iVar9 = *(int *)(puVar16 + 0xb);
  *(int *)((longlong)puVar16 + 0x3c) = iVar9;
  if (0x3c < iVar9) {
    iVar9 = 0x3c;
    *(undefined4 *)((longlong)puVar16 + 0x3c) = 0x3c;
  }
  if ((lStack_100 != 0) && ((*(uint *)(lStack_100 + 0x110) & 0x8000) != 0)) {
    iVar23 = *(short *)(param_1 + 0xa8) - iStack_128;
    iVar9 = -iVar23;
    if (iVar9 < 0) {
      iVar9 = iVar23;
    }
    *(int *)((longlong)puVar16 + 0x3c) = iVar9;
    iVar26 = *(short *)(param_1 + 0xaa) - iStack_124;
    iVar23 = -iVar26;
    if (iVar23 < 0) {
      iVar23 = iVar26;
    }
    if (iVar9 < iVar23) {
      *(int *)((longlong)puVar16 + 0x3c) = iVar23;
      iVar9 = iVar23;
    }
  }
  *(int *)((longlong)puVar16 + 0x44) = iVar9 + -1;
  *(undefined2 *)((longlong)puVar16 + 0x2c) = *(undefined2 *)(puVar16 + 4);
  *(undefined2 *)((longlong)puVar16 + 0x2e) = *(undefined2 *)((longlong)puVar16 + 0x22);
  *(undefined2 *)(puVar16 + 6) = *(undefined2 *)((longlong)puVar16 + 0x24);
  puVar16[0x13] = plVar12;
  *(undefined2 *)(plVar12 + 1) = *(undefined2 *)(puVar16 + 4);
  *(undefined2 *)(puVar16[0x13] + 10) = *(undefined2 *)((longlong)puVar16 + 0x2e);
  *(undefined2 *)(puVar16[0x13] + 0xc) = *(undefined2 *)(puVar16 + 6);
  lVar22 = puVar16[0x13];
  uVar11 = *(undefined4 *)(puVar16 + 2);
  plVar17 = (longlong *)FUN_140ef6f50(0xc);
  aplStack_f8[0] = plVar17;
  (**(code **)(*plVar17 + 0x58))(plVar17,uVar11);
  puVar31 = *(undefined8 **)(lVar22 + 0x40);
  if (puVar31 == *(undefined8 **)(lVar22 + 0x48)) {
    FUN_1400bc360(lVar22 + 0x38,puVar31,aplStack_f8);
  }
  else {
    *puVar31 = plVar17;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 8;
  }
  puVar16[3] = param_1;
  *(undefined4 *)((longlong)puVar16 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  iVar23 = 0;
  *(undefined4 *)((longlong)puVar16 + 0x4c) = 0;
  iVar9 = -1;
  if (lStack_100 != 0) {
    iVar9 = *(int *)(lStack_100 + 0x130);
  }
  *(int *)(puVar16 + 0xd) = iVar9;
  *(short *)((longlong)puVar16 + 0x6c) = param_8;
  if (((param_8 != -1) && (iVar26 = (int)(_DAT_142407538 - _DAT_142407530 >> 3), iVar26 != 0)) &&
     (iVar9 != -1)) {
    iVar26 = iVar26 + -1;
    lVar22 = 0;
    if (-1 < iVar26) {
      do {
        iVar10 = iVar23 + iVar26 >> 1;
        lVar22 = *(longlong *)(_DAT_142407530 + (longlong)iVar10 * 8);
        iVar18 = *(int *)(lVar22 + 0x130);
        if (iVar18 == iVar9) break;
        iVar4 = iVar10 + -1;
        if (iVar18 < iVar9) {
          iVar4 = iVar26;
          iVar23 = iVar10 + 1;
        }
        iVar26 = iVar4;
        lVar22 = 0;
      } while (iVar23 <= iVar26);
    }
    if (((lVar22 != 0) &&
        (lVar22 = *(longlong *)(**(longlong **)(lVar22 + 0x5f8) + (longlong)param_8 * 8),
        1 < *(int *)(lVar22 + 0x50))) && ((*(byte *)(*(longlong *)(lVar22 + 0x48) + 1) & 0x20) != 0)
       ) {
      *(uint *)(puVar16 + 9) = *(uint *)(puVar16 + 9) | 0x10000;
    }
  }
  *(undefined4 *)(puVar16 + 0xe) = param_9;
  *(uint *)(plVar12 + 2) = *(uint *)(plVar12 + 2) | 2;
  uStack_138 = 0xffffffff;
  uStack_140 = 0xffff;
  uStack_148 = 1;
  uStack_160 = 0;
  uStack_168 = 0x32;
  plStack_158 = plVar12;
  plStack_150 = param_2;
  uVar11 = FUN_1413812a0(param_1,9,0xb,0xf);
  *(undefined4 *)(puVar16 + 10) = uVar11;
  iVar26 = (int)(short)(*(short *)(param_1 + 0xa8) - (short)iStack_128);
  iVar9 = (int)(short)(*(short *)(param_1 + 0xaa) - (short)iStack_124);
  iVar23 = (int)(short)(*(short *)(param_1 + 0xac) - (short)iStack_11c);
  fVar34 = (float)(iVar23 * iVar23 + iVar9 * iVar9 + iVar26 * iVar26);
  if (fVar34 < 0.0) {
    fVar34 = (float)callee_1415548d6(fVar34);
  }
  else {
    fVar34 = SQRT(fVar34);
  }
  callee_141377860(puVar16 + 10,(int)fVar34);
  if (*(short *)(param_1 + 0x814) == 2) {
    *(uint *)(puVar16 + 9) = *(uint *)(puVar16 + 9) | 0x40;
  }
  if ((*(byte *)(param_1 + 0x114) & 2) == 0) {
    uVar8 = (**(code **)(*param_2 + 0x4f8))();
    uVar33 = 0x1e;
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x4f8))(param_2);
    uVar33 = 6;
  }
  FUN_141354400(param_1,uVar8,uVar33);
  FUN_141354400(param_1,0x62,uVar33);
  sVar6 = (**(code **)*param_2)(param_2);
  if ((sVar6 == 0x18) && (0 < *(int *)(param_2[0x1d] + 0x1e0))) {
    puVar13 = (undefined4 *)FUN_140660420(param_1);
    *puVar13 = 0x1b;
    puVar13[2] = *(undefined4 *)(param_2[0x1d] + 0x1e0);
  }
  if ((((*(uint *)(param_1 + 0x118) >> 10 & 1) == 0) && (*(longlong *)(param_1 + 0xd80) == 0)) &&
     ((*(uint *)(param_1 + 0x118) >> 0xc & 1) == 0)) {
    if ((*(int *)(param_1 + 0x1280) < 8) || (-1 < *(char *)(*(longlong *)(param_1 + 0x1278) + 7))) {
      if (((*(byte *)(param_1 + 0x82c) & 8) != 0) || ((*(byte *)(param_1 + 0x828) & 8) == 0))
      goto LAB_14137880f;
    }
    else if ((*(byte *)(param_1 + 0x82c) & 8) != 0) {
LAB_14137880f:
      *(int *)(param_1 + 0x984) = *(int *)(param_1 + 0x984) + 0x14;
    }
  }
  if (_DAT_1418be238 == 0) {
    *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) | 1;
    _DAT_1423bbcd8 = _DAT_1423bbcd8 | 0x40;
  }
LAB_14137882d:
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_188);
  return;
}

