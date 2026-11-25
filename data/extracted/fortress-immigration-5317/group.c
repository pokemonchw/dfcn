
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1414f3170(ulonglong param_1,short param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,longlong param_6,uint *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  char cVar11;
  undefined2 uVar12;
  ushort uVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ushort *puVar18;
  short *psVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  short sVar29;
  undefined4 uVar30;
  int iVar31;
  longlong lVar32;
  undefined4 *puVar33;
  short *psVar34;
  uint uVar35;
  uint uVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  int iVar41;
  longlong *plVar42;
  int iVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined8 uVar46;
  longlong *plVar47;
  ulonglong uStackX_8;
  short sStackX_10;
  undefined2 uStackX_18;
  undefined2 uStackX_20;
  undefined4 in_stack_ffffffffffffff08;
  undefined4 uVar48;
  undefined2 uVar49;
  undefined4 auStack_c0 [2];
  undefined8 *puStack_b8;
  longlong *plStack_b0;
  ulonglong *puStack_a8;
  ulonglong *puStack_a0;
  undefined8 *puStack_98;
  ulonglong *puStack_90;
  uint auStack_88 [2];
  longlong lStack_80;
  char cStack_78;
  int aiStack_70 [2];
  char cStack_68;
  longlong *aplStack_60 [4];
  
  puVar7 = param_7;
  uVar46 = _DAT_14250dfd8;
  if ((int)*param_7 < 1) {
    return (longlong *)0x0;
  }
  uVar48 = CONCAT22((short)((uint)in_stack_ffffffffffffff08 >> 0x10),param_4);
  uStackX_8 = param_1;
  sStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_14007f300(0x1423f3970,auStack_c0,&uStackX_8,param_3,uVar48,param_5);
  uVar12 = FUN_140f9b380(uVar46,(undefined2)auStack_c0[0],uStackX_8 & 0xffff);
  uStackX_8 = CONCAT62(uStackX_8._2_6_,uVar12);
  lVar32 = _DAT_1423f3c80 - _DAT_1423f3c78 >> 3;
  puVar18 = (ushort *)0x0;
  if ((lVar32 == 0) || (_DAT_1423b5af0 == -1)) {
    if (lVar32 != 0) goto LAB_1414f3232;
LAB_1414f324f:
    lStack_80 = 0;
  }
  else {
    puVar18 = (ushort *)FUN_1400bb6d0(_DAT_1423b5af0,&DAT_1423f3c78);
LAB_1414f3232:
    if (_DAT_1423b5af8 == -1) goto LAB_1414f324f;
    lStack_80 = FUN_1400bb6d0(_DAT_1423b5af8,&DAT_1423f3c78);
  }
  uVar46 = _DAT_14250dfd8;
  puStack_90 = (ulonglong *)FUN_14007f150(_DAT_14250dfd8,_DAT_1423b5af4);
  uVar12 = (undefined2)((uint)uVar48 >> 0x10);
  uVar30 = 0xffffffff;
  auStack_c0[0] = 0xffffffff;
  if (puVar18 != (ushort *)0x0) {
    aplStack_60[0] = (longlong *)0x0;
    aplStack_60[1] = (longlong *)0x0;
    aplStack_60[2] = (longlong *)0x0;
    puStack_a8 = (ulonglong *)0x0;
    puStack_a0 = (ulonglong *)0x0;
    puStack_98 = (undefined8 *)0x0;
    puVar25 = *(undefined8 **)(puVar18 + 0x6c);
    for (puVar37 = *(undefined8 **)(puVar18 + 0x68); puVar37 < puVar25; puVar37 = puVar37 + 1) {
      puVar28 = (undefined4 *)*puVar37;
      if (((*(byte *)(puVar28 + 7) & 0x25) != 0) &&
         (((1 < *puVar18 || ((puVar28[4] == 0 && (puVar28[5] == -1)))) &&
          (lVar32 = FUN_14007f150(uVar46,*puVar28), lVar32 != 0)))) {
        FUN_14013e030(lVar32,&puStack_a8);
        uVar46 = _DAT_14250dfd8;
      }
    }
    puVar25 = *(undefined8 **)(puVar18 + 0x60);
    for (puVar37 = *(undefined8 **)(puVar18 + 0x5c); puVar8 = puStack_a0, puVar40 = puStack_a8,
        puVar37 < puVar25; puVar37 = puVar37 + 1) {
      if ((((*(short *)*puVar37 == 1) &&
           (iVar41 = *(int *)((short *)*puVar37 + 2),
           (_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) != 0)) && (iVar41 != -1)) &&
         ((psVar19 = (short *)FUN_1400bb6d0(iVar41,&DAT_1423f3c78), psVar19 != (short *)0x0 &&
          (*psVar19 == 1)))) {
        puVar3 = *(undefined8 **)(psVar19 + 0x6c);
        for (puVar38 = *(undefined8 **)(psVar19 + 0x68); puVar38 < puVar3; puVar38 = puVar38 + 1) {
          puVar28 = (undefined4 *)*puVar38;
          if ((((*(byte *)(puVar28 + 7) & 1) != 0) &&
              ((1 < *puVar18 || ((puVar28[4] == 0 && (puVar28[5] == -1)))))) &&
             (lVar32 = FUN_14007f150(uVar46,*puVar28), lVar32 != 0)) {
            FUN_14013e030(lVar32,&puStack_a8);
            uVar46 = _DAT_14250dfd8;
          }
        }
      }
    }
    for (; param_2 = sStackX_10, uVar12 = (undefined2)((uint)uVar48 >> 0x10), puVar40 < puVar8;
        puVar40 = puVar40 + 1) {
      for (plVar20 = *(longlong **)(*puVar40 + 0x428); iVar41 = -1,
          plVar20 < *(longlong **)(*puVar40 + 0x430); plVar20 = plVar20 + 1) {
        lVar32 = *plVar20;
        if ((((*(byte *)(lVar32 + 0x1c) & 1) != 0) && (*(int *)(lVar32 + 0x10) == 0)) &&
           (*(int *)(lVar32 + 0x14) == -1)) {
          iVar41 = *(int *)(lVar32 + 4);
          break;
        }
      }
      plVar47 = *(longlong **)(*puVar40 + 0xe0);
      for (plVar20 = *(longlong **)(*puVar40 + 0xd8); plVar20 < plVar47; plVar20 = plVar20 + 1) {
        lVar32 = *plVar20;
        if (((*(int *)(lVar32 + 0x18) == -1) &&
            ((*(int *)(lVar32 + 0xc) == -1 || (*(int *)(lVar32 + 0xc) == iVar41)))) &&
           ((*(int *)(lVar32 + 4) == (int)_DAT_1423b5afc && (*(int *)(lVar32 + 0x14) != -1)))) {
          FUN_1400bb4a0(*(int *)(lVar32 + 0x14),aplStack_60);
        }
      }
    }
    uVar39 = (longlong)aplStack_60[1] - (longlong)aplStack_60[0] >> 2;
    if (uVar39 != 0) {
      if ((uint)uVar39 < 2) {
        auStack_c0[0] = (undefined4)*aplStack_60[0];
      }
      else {
        uVar15 = FUN_140ece790();
        auStack_c0[0] =
             *(undefined4 *)
              ((longlong)aplStack_60[0] +
              (longlong)
              (int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / ((int)(0x7fffffff / (uVar39 & 0xffffffff)) + 1U)) * 4);
      }
    }
    uVar30 = auStack_c0[0];
    FUN_1400681a0(&puStack_a8);
    FUN_140070d80(aplStack_60);
  }
  puStack_a8 = (ulonglong *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  param_7._0_4_ = 0xffffffff;
  plVar20 = (longlong *)FUN_1407a2a80();
  *(int *)(plVar20 + 0x26) = _DAT_14238f5d8;
  _DAT_14238f5d8 = _DAT_14238f5d8 + 1;
  FUN_1400bba90(plVar20,&DAT_142407530);
  puVar37 = *(undefined8 **)(param_6 + 8);
  plStack_b0 = plVar20;
  if (puVar37 == *(undefined8 **)(param_6 + 0x10)) {
    FUN_1400bc360(param_6,puVar37,&plStack_b0);
  }
  else {
    *puVar37 = plVar20;
    *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 8;
  }
  FUN_1400bc360(&puStack_a8,0,&plStack_b0);
  *(uint *)((longlong)plVar20 + 0x114) = *(uint *)((longlong)plVar20 + 0x114) | 4;
  *(int *)(plVar20 + 0x28) = _DAT_1423b5af0;
  if ((puVar18 != (ushort *)0x0) &&
     (*(longlong *)(puVar18 + 0x84) - (longlong)*(undefined4 **)(puVar18 + 0x80) >> 2 != 0)) {
    *(undefined4 *)((longlong)plVar20 + 0x144) = **(undefined4 **)(puVar18 + 0x80);
  }
  *(undefined4 *)((longlong)plVar20 + 0x14c) = uVar30;
  *(short *)(plVar20 + 0x14) = param_2;
  *(short *)((longlong)plVar20 + 0xa2) = param_2;
  FUN_14139af30(plVar20,_DAT_1423b5afc,0xffffffff,0);
  FUN_14139ada0(plVar20);
  *(undefined2 *)(plVar20 + 0x15) = uStackX_18;
  *(undefined2 *)((longlong)plVar20 + 0xaa) = uStackX_20;
  *(undefined2 *)((longlong)plVar20 + 0xac) = param_5;
  uVar49 = 0xffff;
  FUN_141391170(plVar20,uStackX_18,uStackX_20,param_5,CONCAT22(uVar12,3),0xffffffff);
  FUN_140074e10(plVar20,7,0x9c4);
  FUN_140074e10(plVar20,8,0x189c0);
  FUN_140074e10(plVar20,0x18,1);
  FUN_1413a29c0(plVar20);
  FUN_141342680(plVar20,1,0);
  FUN_14134e000(plVar20,1,0,0);
  switch((short)plVar20[0x14]) {
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    uVar15 = 2;
    break;
  default:
    uVar15 = 0;
  }
  FUN_1413aa650(plVar20,1,1,uStackX_8 & 0xffff,uVar15);
  cVar11 = FUN_14134d200(plVar20);
  if (cVar11 != '\0') {
    FUN_14134d130(plVar20);
  }
  (**(code **)(*plVar20 + 0x20))(plVar20,0,1,0);
  lVar32 = FUN_140b6ad70(0x14251c138,(int)plVar20[0x186],(undefined4 *)((longlong)plVar20 + 0x1274))
  ;
  puVar8 = puStack_90;
  if (lVar32 != 0) {
    param_7._0_4_ = *(undefined4 *)(lVar32 + 0xe0);
    *(int *)(lVar32 + 0xc0) = (int)param_7;
    if (puStack_90 != (ulonglong *)0x0) {
      uVar15 = 0xffffffff;
      FUN_140bd0c00(lVar32,1,(int)puStack_90[0x11],0xffffffff,0xffffffff,CONCAT22(uVar49,0xffff),
                    0xffff,puStack_90,1,0xffffffff);
    }
  }
  if (puVar18 != (ushort *)0x0) {
    uVar15 = uVar15 & 0xffffff00;
    FUN_1413a7b50(plVar20,0,*(undefined4 *)(puVar18 + 2),100,uVar15);
  }
  if (lStack_80 != 0) {
    uVar15 = CONCAT31((int3)(uVar15 >> 8),1);
    FUN_1413a7b50(plVar20,0,*(undefined4 *)(lStack_80 + 4),100,uVar15);
  }
  *(uint *)((longlong)plVar20 + 0x114) = *(uint *)((longlong)plVar20 + 0x114) & 0xfffffffb;
  *puVar7 = *puVar7 - 1;
  if ((int)*puVar7 < 1) goto LAB_1414f5596;
  aplStack_60[0] = (longlong *)0x0;
  aplStack_60[1] = (longlong *)0x0;
  if ((param_2 == 0x61) || ((ushort)(param_2 - 0x67U) < 2)) {
    puStack_b8 = puStack_a0;
    goto LAB_1414f503b;
  }
  plVar47 = (longlong *)0x0;
  uVar16 = FUN_140ece790();
  uVar12 = (undefined2)(uVar15 >> 0x10);
  if (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x2aaaaaab)
  {
    plVar47 = (longlong *)FUN_1407a2a80();
    *(int *)(plVar47 + 0x26) = _DAT_14238f5d8;
    _DAT_14238f5d8 = _DAT_14238f5d8 + 1;
    FUN_1400bba90(plVar47,&DAT_142407530);
    puVar37 = *(undefined8 **)(param_6 + 8);
    plStack_b0 = plVar47;
    if (puVar37 == *(undefined8 **)(param_6 + 0x10)) {
      FUN_1400bc360(param_6,puVar37,&plStack_b0);
    }
    else {
      *puVar37 = plVar47;
      *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 8;
    }
    if (puStack_a0 == puStack_98) {
      FUN_1400bc360(&puStack_a8,puStack_a0,&plStack_b0);
    }
    else {
      *puStack_a0 = (ulonglong)plVar47;
      puStack_a0 = puStack_a0 + 1;
    }
    *(uint *)((longlong)plVar47 + 0x114) = *(uint *)((longlong)plVar47 + 0x114) | 4;
    *(int *)(plVar47 + 0x28) = _DAT_1423b5af0;
    if ((puVar18 != (ushort *)0x0) &&
       (*(longlong *)(puVar18 + 0x84) - (longlong)*(undefined4 **)(puVar18 + 0x80) >> 2 != 0)) {
      *(undefined4 *)((longlong)plVar47 + 0x144) = **(undefined4 **)(puVar18 + 0x80);
    }
    *(undefined4 *)((longlong)plVar47 + 0x14c) = auStack_c0[0];
    *(undefined4 *)(plVar47 + 0x14) = 0x660066;
    puStack_b8 = puStack_a0;
    FUN_14139af30(plVar47,_DAT_1423b5afc,0xffffffff,0);
    FUN_14139ada0(plVar47);
    *(undefined2 *)(plVar47 + 0x15) = uStackX_18;
    *(undefined2 *)((longlong)plVar47 + 0xaa) = uStackX_20;
    *(undefined2 *)((longlong)plVar47 + 0xac) = param_5;
    uVar49 = 0xffff;
    FUN_141391170(plVar47,uStackX_18,uStackX_20,param_5,CONCAT22(uVar12,3),0xffffffff);
    FUN_140074e10(plVar47,7,0x9c4);
    FUN_140074e10(plVar47,8,0x189c0);
    FUN_140074e10(plVar47,0x18,1);
    FUN_1413a29c0(plVar47);
    FUN_141342680(plVar47,1,0);
    FUN_14134e000(plVar47,1,0,0);
    uVar15 = 0;
    FUN_1413aa650(plVar47,1,1,uStackX_8 & 0xffff,0);
    cVar11 = FUN_14134d200(plVar47);
    if (cVar11 != '\0') {
      FUN_14134d130(plVar47);
    }
    (**(code **)(*plVar47 + 0x20))(plVar47,0,1,0);
    lVar32 = FUN_140b6ad70(0x14251c138,(int)plVar47[0x186],
                           (undefined4 *)((longlong)plVar47 + 0x1274));
    if ((lVar32 != 0) && (*(int *)(lVar32 + 0xc0) = (int)param_7, puVar8 != (ulonglong *)0x0)) {
      uVar15 = 0xffffffff;
      FUN_140bd0c00(lVar32,1,(int)puVar8[0x11],0xffffffff,0xffffffff,CONCAT22(uVar49,0xffff),0xffff,
                    puVar8,1,0xffffffff);
    }
    if (puVar18 != (ushort *)0x0) {
      uVar15 = uVar15 & 0xffffff00;
      FUN_1413a7b50(plVar47,0,*(undefined4 *)(puVar18 + 2),100,uVar15);
    }
    if (lStack_80 != 0) {
      uVar15 = CONCAT31((int3)(uVar15 >> 8),1);
      FUN_1413a7b50(plVar47,0,*(undefined4 *)(lStack_80 + 4),100,uVar15);
    }
    *(uint *)((longlong)plVar47 + 0x114) = *(uint *)((longlong)plVar47 + 0x114) & 0xfffffffb;
    if ((*(char *)((longlong)plVar47 + 0x12e) != *(char *)((longlong)plVar20 + 0x12e)) &&
       (uVar16 = FUN_140ece790(),
       uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x40000000
       )) {
      *(int *)(plVar47 + 0x78) = (int)plVar20[0x26];
      *(int *)(plVar20 + 0x78) = (int)plVar47[0x26];
      lVar32 = plVar47[0x186];
      uVar16 = *(uint *)(plVar20 + 0x251);
      if (uVar16 < 500) {
        puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
        puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
        lVar21 = 500;
        do {
          *puVar33 = 0xffffffff;
          *puVar28 = 0xffffffff;
          puVar28 = puVar28 + 1;
          puVar33 = puVar33 + 500;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      lVar21 = FUN_140b6ad70(0x14251c138,(int)plVar20[0x186],
                             (undefined4 *)((longlong)plVar20 + 0x1274));
      if (lVar21 != 0) {
        uVar15 = uVar15 & 0xffffff00;
        FUN_140bb0820(lVar21,2,(int)lVar32,100,uVar15);
      }
      lVar32 = plVar20[0x186];
      uVar16 = *(uint *)(plVar47 + 0x251);
      if (uVar16 < 500) {
        puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
        puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
        lVar21 = 500;
        do {
          *puVar33 = 0xffffffff;
          *puVar28 = 0xffffffff;
          puVar28 = puVar28 + 1;
          puVar33 = puVar33 + 500;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      lVar21 = FUN_140b6ad70(0x14251c138,(int)plVar47[0x186],
                             (undefined4 *)((longlong)plVar47 + 0x1274));
      if (lVar21 != 0) {
        uVar15 = uVar15 & 0xffffff00;
        FUN_140bb0820(lVar21,2,(int)lVar32,100,uVar15);
      }
    }
  }
  else {
    puStack_b8 = puStack_a0;
  }
  *puVar7 = *puVar7 - 1;
  uVar35 = 0;
  uVar16 = FUN_140ece790();
  if (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x28f5c29)
  {
    uVar16 = FUN_140ece790();
    uVar35 = (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0x2aaaaaab;
  }
  if (((plVar47 == (longlong *)0x0) || ((int)plVar47[0x78] != (int)plVar20[0x26])) ||
     (uVar16 = FUN_140ece790(),
     0x2aaaaaaa < uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff))
  {
    uVar16 = 0;
    if (0x1d < _DAT_142167754 - *(int *)((longlong)plVar20 + 0x38c)) {
      uVar16 = uVar35;
    }
    if (plVar47 != (longlong *)0x0) goto LAB_1414f3d41;
  }
  else {
    uVar35 = FUN_140ece790();
    uVar16 = 0;
    if (0x1d < _DAT_142167754 - *(int *)((longlong)plVar20 + 0x38c)) {
      uVar16 = (uVar35 + (int)((longlong)((ulonglong)uVar35 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x2aaaaaab;
    }
LAB_1414f3d41:
    if (_DAT_142167754 - *(int *)((longlong)plVar47 + 0x38c) < 0x1e) {
      uVar16 = 0;
    }
  }
  uVar35 = *puVar7;
  uVar36 = uVar35;
  if ((int)uVar16 <= (int)uVar35) {
    uVar36 = uVar16;
  }
  *puVar7 = uVar35 - uVar36;
  if (0 < (int)uVar36) {
    uVar16 = FUN_140ece790();
    if (uVar36 == 1) {
      uVar35 = 0x12492493;
    }
    else {
      uVar35 = 0x1999999a;
    }
    iVar41 = _DAT_142167754 + -9 +
             (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             uVar35;
    aiStack_70[0] = iVar41;
    uVar16 = FUN_140ece790();
    auStack_88[0] =
         (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff) / 0x14cf
    ;
    uVar16 = FUN_140ece790();
    aiStack_70[1] =
         (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff) /
         0x2aaaaaab + 2 + iVar41;
    uVar16 = FUN_140ece790();
    auStack_88[1] =
         (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff) / 0x14cf
    ;
    if (0 < (int)uVar36) {
      lVar32 = 0;
      do {
        uVar12 = (undefined2)(uVar15 >> 0x10);
        plVar22 = (longlong *)FUN_1407a2a80();
        *(int *)(plVar22 + 0x26) = _DAT_14238f5d8;
        _DAT_14238f5d8 = _DAT_14238f5d8 + 1;
        FUN_1400bba90(plVar22,&DAT_142407530);
        puVar37 = *(undefined8 **)(param_6 + 8);
        plStack_b0 = plVar22;
        if (puVar37 == *(undefined8 **)(param_6 + 0x10)) {
          FUN_1400bc360(param_6,puVar37,&plStack_b0);
        }
        else {
          *puVar37 = plVar22;
          *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 8;
        }
        if (puStack_b8 == puStack_98) {
          FUN_1400bc360(&puStack_a8,puStack_b8,&plStack_b0);
        }
        else {
          *puStack_b8 = plVar22;
          puStack_a0 = puStack_b8 + 1;
        }
        *(uint *)((longlong)plVar22 + 0x114) = *(uint *)((longlong)plVar22 + 0x114) | 4;
        *(int *)(plVar22 + 0x28) = _DAT_1423b5af0;
        if ((puVar18 != (ushort *)0x0) &&
           (*(longlong *)(puVar18 + 0x84) - (longlong)*(undefined4 **)(puVar18 + 0x80) >> 2 != 0)) {
          *(undefined4 *)((longlong)plVar22 + 0x144) = **(undefined4 **)(puVar18 + 0x80);
        }
        *(undefined4 *)((longlong)plVar22 + 0x14c) = auStack_c0[0];
        aplStack_60[lVar32] = plVar22;
        *(undefined4 *)(plVar22 + 0x14) = 0x670067;
        puStack_b8 = puStack_a0;
        FUN_14139af30(plVar22,_DAT_1423b5afc,0xffffffff,0);
        FUN_14139ada0(plVar22);
        *(undefined2 *)(plVar22 + 0x15) = uStackX_18;
        *(undefined2 *)((longlong)plVar22 + 0xaa) = uStackX_20;
        *(undefined2 *)((longlong)plVar22 + 0xac) = param_5;
        uVar49 = 0xffff;
        FUN_141391170(plVar22,uStackX_18,uStackX_20,param_5,CONCAT22(uVar12,3),0xffffffff);
        FUN_140074e10(plVar22,7,0x9c4);
        FUN_140074e10(plVar22,8,0x189c0);
        FUN_140074e10(plVar22,0x18,1);
        FUN_1413a29c0(plVar22);
        iVar41 = aiStack_70[lVar32];
        *(int *)((longlong)plVar22 + 0x38c) = iVar41;
        uVar15 = auStack_88[lVar32];
        *(uint *)(plVar22 + 0x72) = uVar15;
        uVar48 = CONCAT22(uVar49,*(undefined2 *)((longlong)plVar22 + 0xa4));
        FUN_1406f5f50(uVar15,(undefined4 *)((longlong)plVar22 + 0x3a4),plVar22 + 0x75,iVar41,uVar15,
                      uVar48,*(undefined2 *)((longlong)plVar22 + 300));
        uVar12 = (undefined2)((uint)uVar48 >> 0x10);
        FUN_141342680(plVar22,1,0);
        FUN_14134e000(plVar22,1,0,0);
        uVar15 = 0;
        FUN_1413aa650(plVar22,1,1,uStackX_8 & 0xffff,0);
        cVar11 = FUN_14134d200(plVar22);
        if (cVar11 != '\0') {
          FUN_14134d130(plVar22);
        }
        (**(code **)(*plVar22 + 0x20))(plVar22,0,1);
        lVar21 = FUN_140b6ad70(0x14251c138,(int)plVar22[0x186],
                               (undefined4 *)((longlong)plVar22 + 0x1274));
        if ((lVar21 != 0) &&
           (*(int *)(lVar21 + 0xc0) = (int)param_7, puStack_90 != (ulonglong *)0x0)) {
          uVar15 = 0xffffffff;
          FUN_140bd0c00(lVar21,1,(int)puStack_90[0x11],0xffffffff,0xffffffff,CONCAT22(uVar12,0xffff)
                        ,0xffff,puStack_90,1,0xffffffff);
        }
        if (puVar18 != (ushort *)0x0) {
          uVar15 = uVar15 & 0xffffff00;
          FUN_1413a7b50(plVar22,0,*(undefined4 *)(puVar18 + 2),100,uVar15);
        }
        if (lStack_80 != 0) {
          uVar15 = CONCAT31((int3)(uVar15 >> 8),1);
          FUN_1413a7b50(plVar22,0,*(undefined4 *)(lStack_80 + 4),100,uVar15);
        }
        *(uint *)((longlong)plVar22 + 0x114) = *(uint *)((longlong)plVar22 + 0x114) & 0xfffffffb;
        if (*(char *)((longlong)plVar20 + 0x12e) == '\0') {
          *(int *)((longlong)plVar22 + 0x3c4) = (int)plVar20[0x26];
          lVar21 = plVar20[0x186];
          uVar16 = *(uint *)(plVar22 + 0x251);
          if (uVar16 < 500) {
            puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
            puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
            lVar23 = 500;
            do {
              *puVar33 = 0xffffffff;
              *puVar28 = 0xffffffff;
              puVar28 = puVar28 + 1;
              puVar33 = puVar33 + 500;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar22[0x186],
                                 (undefined4 *)((longlong)plVar22 + 0x1274));
          if (lVar23 != 0) {
            uVar15 = uVar15 & 0xffffff00;
            FUN_140bb0820(lVar23,0,(int)lVar21,100,uVar15);
          }
          lVar21 = plVar22[0x186];
          uVar16 = *(uint *)(plVar20 + 0x251);
          if (uVar16 < 500) {
            puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
            puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
            lVar23 = 500;
            do {
              *puVar33 = 0xffffffff;
              *puVar28 = 0xffffffff;
              puVar28 = puVar28 + 1;
              puVar33 = puVar33 + 500;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar20[0x186],
                                 (undefined4 *)((longlong)plVar20 + 0x1274));
          if (lVar23 != 0) {
            uVar15 = uVar15 & 0xffffff00;
            FUN_140bb0820(lVar23,3,(int)lVar21,100,uVar15);
          }
          if ((plVar47 != (longlong *)0x0) && ((int)plVar47[0x78] == (int)plVar20[0x26])) {
            *(int *)(plVar22 + 0x79) = (int)plVar47[0x26];
            lVar21 = plVar47[0x186];
            uVar16 = *(uint *)(plVar22 + 0x251);
            if (uVar16 < 500) {
              puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
              puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
              lVar23 = 500;
              do {
                *puVar33 = 0xffffffff;
                *puVar28 = 0xffffffff;
                puVar28 = puVar28 + 1;
                puVar33 = puVar33 + 500;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar22[0x186],
                                   (undefined4 *)((longlong)plVar22 + 0x1274));
            if (lVar23 != 0) {
              uVar15 = uVar15 & 0xffffff00;
              FUN_140bb0820(lVar23,1,(int)lVar21,100,uVar15);
            }
            lVar21 = plVar22[0x186];
            uVar16 = *(uint *)(plVar47 + 0x251);
            if (uVar16 < 500) {
              puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
              puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
              lVar23 = 500;
              do {
                *puVar33 = 0xffffffff;
                *puVar28 = 0xffffffff;
                puVar28 = puVar28 + 1;
                puVar33 = puVar33 + 500;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar47[0x186],
                                   (undefined4 *)((longlong)plVar47 + 0x1274));
            if (lVar23 != 0) {
              uVar15 = uVar15 & 0xffffff00;
              FUN_140bb0820(lVar23,3,(int)lVar21,100,uVar15);
            }
          }
        }
        if (*(char *)((longlong)plVar20 + 0x12e) == '\x01') {
          *(int *)(plVar22 + 0x79) = (int)plVar20[0x26];
          lVar21 = plVar20[0x186];
          uVar16 = *(uint *)(plVar22 + 0x251);
          if (uVar16 < 500) {
            puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
            puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
            lVar23 = 500;
            do {
              *puVar33 = 0xffffffff;
              *puVar28 = 0xffffffff;
              puVar28 = puVar28 + 1;
              puVar33 = puVar33 + 500;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar22[0x186],
                                 (undefined4 *)((longlong)plVar22 + 0x1274));
          if (lVar23 != 0) {
            uVar15 = uVar15 & 0xffffff00;
            FUN_140bb0820(lVar23,1,(int)lVar21,100,uVar15);
          }
          lVar21 = plVar22[0x186];
          uVar16 = *(uint *)(plVar20 + 0x251);
          if (uVar16 < 500) {
            puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
            puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
            lVar23 = 500;
            do {
              *puVar33 = 0xffffffff;
              *puVar28 = 0xffffffff;
              puVar28 = puVar28 + 1;
              puVar33 = puVar33 + 500;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar20[0x186],
                                 (undefined4 *)((longlong)plVar20 + 0x1274));
          if (lVar23 != 0) {
            uVar15 = uVar15 & 0xffffff00;
            FUN_140bb0820(lVar23,3,(int)lVar21,100,uVar15);
          }
          if ((plVar47 != (longlong *)0x0) && ((int)plVar47[0x78] == (int)plVar20[0x26])) {
            *(int *)((longlong)plVar22 + 0x3c4) = (int)plVar47[0x26];
            lVar21 = plVar47[0x186];
            uVar16 = *(uint *)(plVar22 + 0x251);
            if (uVar16 < 500) {
              puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
              puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
              lVar23 = 500;
              do {
                *puVar33 = 0xffffffff;
                *puVar28 = 0xffffffff;
                puVar28 = puVar28 + 1;
                puVar33 = puVar33 + 500;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar22[0x186],
                                   (undefined4 *)((longlong)plVar22 + 0x1274));
            if (lVar23 != 0) {
              uVar15 = uVar15 & 0xffffff00;
              FUN_140bb0820(lVar23,0,(int)lVar21,100,uVar15);
            }
            lVar21 = plVar22[0x186];
            uVar16 = *(uint *)(plVar47 + 0x251);
            if (uVar16 < 500) {
              puVar28 = (undefined4 *)((longlong)(int)uVar16 * 2000 + 0x1424119cc);
              puVar33 = (undefined4 *)((longlong)(int)uVar16 * 4 + 0x1424119cc);
              lVar23 = 500;
              do {
                *puVar33 = 0xffffffff;
                *puVar28 = 0xffffffff;
                puVar28 = puVar28 + 1;
                puVar33 = puVar33 + 500;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            lVar23 = FUN_140b6ad70(0x14251c138,(int)plVar47[0x186],
                                   (undefined4 *)((longlong)plVar47 + 0x1274));
            if (lVar23 != 0) {
              uVar15 = uVar15 & 0xffffff00;
              FUN_140bb0820(lVar23,3,(int)lVar21,100,uVar15);
            }
          }
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 < (int)uVar36);
    }
  }
  iVar41 = 0;
  if ((puVar18 != (ushort *)0x0) &&
     (psVar19 = *(short **)(puVar18 + 0x59c), psVar34 = psVar19,
     *(longlong *)(puVar18 + 0x5a0) - (longlong)psVar19 >> 2 != 0)) {
    do {
      sVar14 = *psVar34;
      if ((sVar14 < 0) ||
         ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar14)) {
LAB_1414f4719:
        uVar16 = FUN_140ece790();
        if (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x40000000) {
          uVar16 = FUN_140ece790();
          plVar22 = aplStack_60[1];
          uVar16 = (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / 0x2aaaaaab;
          if (uVar16 != 0) {
            iVar41 = 0;
            lVar32 = _DAT_14250eee8;
            goto LAB_1414f4799;
          }
        }
        break;
      }
      lVar32 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar14 * 8);
      if ((*(int *)(lVar32 + 0x1b0) < 9) ||
         ((*(byte *)(*(longlong *)(lVar32 + 0x1a8) + 8) & 0x40) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1414f4719;
      iVar41 = iVar41 + 1;
      psVar34 = psVar34 + 2;
    } while ((ulonglong)(longlong)iVar41 <
             (ulonglong)(*(longlong *)(puVar18 + 0x5a0) - (longlong)psVar19 >> 2));
  }
  goto LAB_1414f503b;
LAB_1414f4799:
  do {
    uVar35 = 0;
    uVar39 = *(longlong *)(puVar18 + 0x5a0) - *(longlong *)(puVar18 + 0x59c) >> 2;
    if (1 < (uint)uVar39) {
      uVar35 = FUN_140ece790();
      uVar35 = (uVar35 + (int)((longlong)((ulonglong)uVar35 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               ((int)(0x7fffffff / (uVar39 & 0xffffffff)) + 1U);
      lVar32 = _DAT_14250eee8;
    }
    uVar49 = (undefined2)(uVar15 >> 0x10);
    uVar36 = *(uint *)(*(longlong *)(puVar18 + 0x59c) + (longlong)(int)uVar35 * 4);
    uVar12 = *(undefined2 *)(*(longlong *)(puVar18 + 0x5f0) + (longlong)(int)uVar35 * 2);
    sVar14 = (short)uVar36;
    if ((-1 < sVar14) && ((ulonglong)(longlong)sVar14 < (ulonglong)(_DAT_14250eef0 - lVar32 >> 3)))
    {
      lVar21 = *(longlong *)(lVar32 + (longlong)sVar14 * 8);
      if ((*(int *)(lVar21 + 0x1b0) < 9) ||
         ((*(byte *)(*(longlong *)(lVar21 + 0x1a8) + 8) & 0x40) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1414f4799;
    }
    plVar24 = (longlong *)FUN_1407a2a80();
    *(int *)(plVar24 + 0x26) = _DAT_14238f5d8;
    _DAT_14238f5d8 = _DAT_14238f5d8 + 1;
    FUN_1400bba90(plVar24,&DAT_142407530);
    puVar37 = *(undefined8 **)(param_6 + 8);
    plStack_b0 = plVar24;
    if (puVar37 == *(undefined8 **)(param_6 + 0x10)) {
      FUN_1400bc360(param_6,puVar37,&plStack_b0);
    }
    else {
      *puVar37 = plVar24;
      *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 8;
    }
    if (puStack_b8 == puStack_98) {
      FUN_1400bc360(&puStack_a8,puStack_b8,&plStack_b0);
    }
    else {
      *puStack_b8 = plVar24;
      puStack_a0 = puStack_b8 + 1;
    }
    *(int *)(plVar24 + 0x28) = _DAT_1423b5af0;
    *(undefined4 *)(plVar24 + 0x14) = 0x660066;
    puStack_b8 = puStack_a0;
    FUN_14139af30(plVar24,uVar36 & 0xffff,uVar12,0);
    FUN_14139ada0(plVar24);
    sVar14 = *(short *)((longlong)plVar24 + 300);
    uVar39 = (ulonglong)sVar14;
    sVar29 = *(short *)((longlong)plVar24 + 0xa4);
    uVar44 = (ulonglong)sVar29;
    if (-1 < sVar29) {
      if (uVar44 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if ((sVar14 < 0) ||
           (lVar32 = *(longlong *)(_DAT_14250eee8 + uVar44 * 8),
           lVar21 = *(longlong *)(lVar32 + 0x178),
           (ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3) <= uVar39)) goto LAB_1414f49a4;
        lVar32 = *(longlong *)(lVar21 + uVar39 * 8);
        if ((*(int *)(lVar32 + 0x6b0) < 7) ||
           ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 6) & 0x20) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1414f4980;
LAB_1414f49fc:
        uVar15 = FUN_140ece790();
        if (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x10000000) {
          uVar15 = FUN_140ece790();
          if (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x40000000) {
LAB_1414f4ae3:
            sVar29 = *(short *)((longlong)plVar24 + 300);
            uVar13 = *(ushort *)((longlong)plVar24 + 0xa4);
            if (-1 < (short)uVar13) {
LAB_1414f4afa:
              if (((ulonglong)uVar13 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) &&
                 (-1 < sVar29)) {
                lVar32 = *(longlong *)(_DAT_14250eee8 + (ulonglong)uVar13 * 8);
                lVar21 = *(longlong *)(lVar32 + 0x178);
                if ((ulonglong)(longlong)sVar29 <
                    (ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3)) {
                  lVar32 = *(longlong *)(lVar21 + (longlong)sVar29 * 8);
                  if ((*(int *)(lVar32 + 0x6b0) < 0xc) ||
                     ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 0xb) & 1) == 0)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    *(undefined2 *)(plVar24 + 0x14) = 99;
                    goto LAB_1414f4b86;
                  }
                }
              }
            }
          }
          else {
            sVar29 = *(short *)((longlong)plVar24 + 300);
            sVar14 = *(short *)((longlong)plVar24 + 0xa4);
            if ((sVar14 < 0) ||
               ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar14))
            goto LAB_1414f4ae3;
            if ((sVar29 < 0) ||
               (lVar32 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar14 * 8),
               lVar21 = *(longlong *)(lVar32 + 0x178),
               (ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3) <=
               (ulonglong)(longlong)sVar29)) {
              uVar13 = *(ushort *)((longlong)plVar24 + 0xa4);
              goto LAB_1414f4afa;
            }
            lVar32 = *(longlong *)(lVar21 + (longlong)sVar29 * 8);
            if ((*(int *)(lVar32 + 0x6b0) < 7) ||
               ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 6) & 0x20) == 0)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1414f4ae3;
          }
          *(undefined2 *)(plVar24 + 0x14) = 0x62;
        }
      }
      else {
LAB_1414f4980:
        if ((-1 < sVar29) && (uVar44 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
LAB_1414f49a4:
          if ((-1 < sVar14) &&
             (lVar32 = *(longlong *)(_DAT_14250eee8 + uVar44 * 8),
             lVar21 = *(longlong *)(lVar32 + 0x178),
             uVar39 < (ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3))) {
            lVar32 = *(longlong *)(lVar21 + uVar39 * 8);
            if ((*(int *)(lVar32 + 0x6b0) < 0xc) ||
               ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 0xb) & 1) == 0)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) goto LAB_1414f49fc;
          }
        }
      }
    }
LAB_1414f4b86:
    sVar14 = *(short *)((longlong)plVar24 + 300);
    sVar29 = *(short *)((longlong)plVar24 + 0xa4);
    if ((((-1 < sVar29) &&
         ((ulonglong)(longlong)sVar29 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
        (-1 < sVar14)) &&
       (lVar32 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar29 * 8),
       lVar21 = *(longlong *)(lVar32 + 0x178),
       (ulonglong)(longlong)sVar14 < (ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3))) {
      lVar32 = *(longlong *)(lVar21 + (longlong)sVar14 * 8);
      if ((*(int *)(lVar32 + 0x6b0) < 0xd) ||
         ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 0xc) & 4) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (uVar15 = FUN_140ece790(),
         0xfffffff <
         uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff)) {
        *(undefined2 *)(plVar24 + 0x14) = 0x67;
      }
    }
    *(undefined2 *)(plVar24 + 0x15) = uStackX_18;
    *(undefined2 *)((longlong)plVar24 + 0xaa) = uStackX_20;
    *(undefined2 *)((longlong)plVar24 + 0xac) = param_5;
    uVar15 = CONCAT22(uVar49,3);
    FUN_141391170(plVar24,uStackX_18,uStackX_20,param_5,uVar15,0xffffffff);
    FUN_140074e10(plVar24,7,0x9c4);
    FUN_140074e10(plVar24,8,0x189c0);
    FUN_140074e10(plVar24,0x18,1);
    *(uint *)(plVar24 + 0x22) = *(uint *)(plVar24 + 0x22) | 0x4000000;
    *(undefined4 *)(plVar24 + 0x27) = 7;
    FUN_140074e10(plVar24,0x32,0x189c0);
    FUN_1413a29c0(plVar24);
    plVar42 = plVar20;
    if ((plVar47 != (longlong *)0x0) &&
       (uVar35 = FUN_140ece790(),
       uVar35 + (int)((longlong)((ulonglong)uVar35 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x40000000
       )) {
      plVar42 = plVar47;
    }
    plVar9 = aplStack_60[0];
    if (((aplStack_60[0] != (longlong *)0x0) &&
        (uVar35 = FUN_140ece790(),
        uVar35 + (int)((longlong)((ulonglong)uVar35 * 0x100000003) >> 0x3f) * 0x7fffffff <
        0x40000000)) && ((ushort)((short)plVar24[0x14] - 0x67U) < 2)) {
      plVar42 = plVar9;
    }
    if (((plVar22 != (longlong *)0x0) &&
        (uVar35 = FUN_140ece790(),
        uVar35 + (int)((longlong)((ulonglong)uVar35 * 0x100000003) >> 0x3f) * 0x7fffffff <
        0x2aaaaaab)) && ((ushort)((short)plVar24[0x14] - 0x67U) < 2)) {
      plVar42 = plVar22;
    }
    uVar13 = *(ushort *)((longlong)plVar24 + 300);
    sVar14 = *(short *)((longlong)plVar24 + 0xa4);
    uVar39 = (ulonglong)sVar14;
    if (sVar14 < 0) {
LAB_1414f4ebe:
      bVar4 = false;
LAB_1414f4ec1:
      sVar14 = *(short *)((longlong)plVar24 + 0xa4);
      if (-1 < sVar14) goto LAB_1414f4ed1;
LAB_1414f4f91:
      if (bVar4) goto LAB_1414f4f96;
    }
    else {
      if (uVar39 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if ((short)uVar13 < 0) goto LAB_1414f4e65;
        lVar32 = *(longlong *)(_DAT_14250eee8 + uVar39 * 8);
        lVar21 = *(longlong *)(lVar32 + 0x178);
        if ((ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3) <=
            (ulonglong)(longlong)(short)uVar13) goto LAB_1414f4e65;
        lVar32 = *(longlong *)(lVar21 + (longlong)(short)uVar13 * 8);
        if ((*(int *)(lVar32 + 0x6b0) < 0xc) ||
           ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 0xb) & 1) == 0)) {
          bVar6 = false;
          bVar5 = false;
        }
        else {
          bVar6 = true;
          bVar5 = true;
        }
LAB_1414f4e6a:
        bVar4 = bVar5;
        lVar32 = *(longlong *)(_DAT_14250eee8 + uVar39 * 8);
        lVar21 = *(longlong *)(lVar32 + 0x178);
        if ((ulonglong)uVar13 < (ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3)) {
          lVar32 = *(longlong *)(lVar21 + (ulonglong)uVar13 * 8);
          if ((*(int *)(lVar32 + 0x6b0) < 7) ||
             ((*(byte *)(*(longlong *)(lVar32 + 0x6a8) + 6) & 0x20) == 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          bVar4 = bVar6;
          if (bVar5) {
            bVar4 = true;
          }
          goto LAB_1414f4ec1;
        }
      }
      else {
        if ((sVar14 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar39))
        goto LAB_1414f4ebe;
LAB_1414f4e65:
        bVar4 = false;
        bVar6 = false;
        bVar5 = false;
        if (-1 < (short)uVar13) goto LAB_1414f4e6a;
      }
      sVar14 = *(short *)((longlong)plVar24 + 0xa4);
LAB_1414f4ed1:
      if (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar14) ||
         ((short)uVar13 < 0)) goto LAB_1414f4f91;
      lVar32 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar14 * 8);
      lVar21 = *(longlong *)(lVar32 + 0x178);
      if ((((ulonglong)(*(longlong *)(lVar32 + 0x180) - lVar21 >> 3) <=
            (ulonglong)(longlong)(short)uVar13) ||
          (((lVar32 = *(longlong *)(lVar21 + (longlong)(short)uVar13 * 8), lVar32 == 0 ||
            (*(longlong *)(lVar32 + 0x15e0) - *(longlong *)(lVar32 + 0x15d8) >> 2 == 0)) ||
           (*(int *)((longlong)plVar42 + 0x6ac) <=
            *(int *)(*(longlong *)(lVar32 + 0x15d8) + -4 +
                    (*(longlong *)(lVar32 + 0x15e0) - *(longlong *)(lVar32 + 0x15d8) >> 2) * 4)))))
         || (uVar35 = FUN_140ece790(),
            uVar35 + (int)((longlong)((ulonglong)uVar35 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x2aaaaaab)) goto LAB_1414f4f91;
LAB_1414f4f96:
      plVar24[0x76] = (longlong)plVar42;
      *(undefined4 *)((longlong)plVar24 + 0xbc) = 2;
      *(undefined2 *)(plVar24 + 0x77) = 8;
      if (((ushort)((short)plVar24[0x14] - 0x66U) < 3) &&
         (cVar11 = FUN_14138ee10(*(undefined2 *)((longlong)plVar24 + 0xa4),
                                 *(undefined2 *)((longlong)plVar24 + 300)), cVar11 != '\0')) {
        FUN_140e74da0(plVar24,(int)plVar42[0x26]);
      }
    }
    if ((int)plVar24[0x22] < 0) {
      FUN_141342680(plVar24,1,0);
      FUN_14134e000(plVar24,1,0);
    }
    iVar41 = iVar41 + 1;
    lVar32 = _DAT_14250eee8;
  } while (iVar41 < (int)uVar16);
LAB_1414f503b:
  param_7._0_4_ = 0;
  puStack_90 = puStack_a8;
  puStack_b8 = (undefined8 *)((longlong)puStack_b8 - (longlong)puStack_a8 >> 3);
  if (puStack_b8 != (undefined8 *)0x0) {
    do {
      uVar39 = *puStack_90;
      FUN_141394980(uVar39);
      iVar41 = (int)(*(longlong *)(uVar39 + 0x410) - *(longlong *)(uVar39 + 0x408) >> 3) + -1;
      lVar32 = (longlong)iVar41;
      if (-1 < iVar41) {
        do {
          uVar44 = 0;
          puVar37 = (undefined8 *)**(longlong **)(*(longlong *)(uVar39 + 0x408) + lVar32 * 8);
          sVar14 = (**(code **)*puVar37)(puVar37);
          iVar41 = 0;
          if (sVar14 == 0x18) {
            *(uint *)(uVar39 + 0x280) = *(uint *)(uVar39 + 0x280) | 1;
            FUN_1400bb4a0(*(undefined4 *)((longlong)puVar37 + 0x1c),uVar39 + 0x208);
            FUN_1400bb4a0(*(undefined4 *)((longlong)puVar37 + 0x1c),uVar39 + 0x220);
            uVar48 = *(undefined4 *)((longlong)puVar37 + 0x1c);
            FUN_1400bc210(aiStack_70,0x1423bbce0,uVar48);
            uStackX_8._0_4_ = -1;
            uStackX_8 = 0xffffffff;
            iVar17 = (int)uStackX_8;
            if (cStack_68 != '\0') {
              iVar17 = aiStack_70[0];
            }
            if (iVar17 == -1) {
              iVar17 = FUN_1400bb4a0(uVar48,0x1423bbce0);
              puVar28 = _DAT_1423bbd00;
              if (iVar17 != -1) {
                if ((ulonglong)(longlong)iVar17 <
                    (ulonglong)((longlong)_DAT_1423bbd00 - _DAT_1423bbcf8 >> 2)) {
                  puVar33 = (undefined4 *)(_DAT_1423bbcf8 + (longlong)iVar17 * 4);
                  if (_DAT_1423bbd00 == _DAT_1423bbd08) {
                    FUN_140072450(&DAT_1423bbcf8,puVar33);
                  }
                  else {
                    uVar48 = *(undefined4 *)(uVar39 + 0x130);
                    if (puVar33 == _DAT_1423bbd00) {
                      *_DAT_1423bbd00 = uVar48;
                      _DAT_1423bbd00 = _DAT_1423bbd00 + 1;
                    }
                    else {
                      puVar1 = _DAT_1423bbd00 + -1;
                      *_DAT_1423bbd00 = *puVar1;
                      _DAT_1423bbd00 = _DAT_1423bbd00 + 1;
                      func_0x00014155486a((longlong)puVar28 - ((longlong)puVar1 - (longlong)puVar33)
                                          ,puVar33);
                      *puVar33 = uVar48;
                    }
                  }
                }
                else if (_DAT_1423bbd00 == _DAT_1423bbd08) {
                  FUN_140072450(&DAT_1423bbcf8,_DAT_1423bbd00);
                }
                else {
                  *_DAT_1423bbd00 = *(undefined4 *)(uVar39 + 0x130);
                  _DAT_1423bbd00 = _DAT_1423bbd00 + 1;
                }
              }
            }
            else {
              iVar2 = *(int *)(_DAT_1423bbcf8 + (longlong)iVar17 * 4);
              iVar43 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
              if ((iVar43 != 0) && (iVar2 != -1)) {
                iVar43 = iVar43 + -1;
                uVar45 = uVar44;
                iVar31 = iVar41;
                if (-1 < iVar43) {
                  do {
                    iVar26 = iVar31 + iVar43 >> 1;
                    uVar45 = *(ulonglong *)(_DAT_142407530 + (longlong)iVar26 * 8);
                    iVar27 = *(int *)(uVar45 + 0x130);
                    if (iVar27 == iVar2) break;
                    iVar10 = iVar26 + -1;
                    if (iVar27 < iVar2) {
                      iVar10 = iVar43;
                      iVar31 = iVar26 + 1;
                    }
                    iVar43 = iVar10;
                    uVar45 = uVar44;
                  } while (iVar31 <= iVar43);
                }
                if ((uVar45 != 0) && (uVar45 != uVar39)) {
                  *(uint *)(uVar45 + 0x280) = *(uint *)(uVar45 + 0x280) | 1;
                }
              }
              *(undefined4 *)(_DAT_1423bbcf8 + (longlong)iVar17 * 4) =
                   *(undefined4 *)(uVar39 + 0x130);
            }
          }
          sVar14 = (**(code **)*puVar37)(puVar37);
          if (sVar14 == 0x3e) {
            *(uint *)(uVar39 + 0x280) = *(uint *)(uVar39 + 0x280) | 1;
            FUN_1400bb4a0(*(undefined4 *)((longlong)puVar37 + 0x1c),uVar39 + 0x208);
            FUN_1400bb4a0(*(undefined4 *)((longlong)puVar37 + 0x1c),uVar39 + 0x220);
            uVar48 = *(undefined4 *)((longlong)puVar37 + 0x1c);
            FUN_1400bc210(&lStack_80,0x1423bbce0,uVar48);
            auStack_88[0] = 0xffffffff;
            auStack_88[1] = 0;
            iVar17 = -1;
            if (cStack_78 != '\0') {
              iVar17 = (int)lStack_80;
            }
            if (iVar17 == -1) {
              iVar41 = FUN_1400bb4a0(uVar48,0x1423bbce0);
              puVar28 = _DAT_1423bbd00;
              if (iVar41 != -1) {
                if ((ulonglong)(longlong)iVar41 <
                    (ulonglong)((longlong)_DAT_1423bbd00 - _DAT_1423bbcf8 >> 2)) {
                  puVar33 = (undefined4 *)(_DAT_1423bbcf8 + (longlong)iVar41 * 4);
                  if (_DAT_1423bbd00 == _DAT_1423bbd08) goto LAB_1414f5419;
                  uVar48 = *(undefined4 *)(uVar39 + 0x130);
                  if (puVar33 == _DAT_1423bbd00) {
                    *_DAT_1423bbd00 = uVar48;
                    _DAT_1423bbd00 = _DAT_1423bbd00 + 1;
                  }
                  else {
                    puVar1 = _DAT_1423bbd00 + -1;
                    *_DAT_1423bbd00 = *puVar1;
                    _DAT_1423bbd00 = _DAT_1423bbd00 + 1;
                    func_0x00014155486a((longlong)puVar28 - ((longlong)puVar1 - (longlong)puVar33),
                                        puVar33);
                    *puVar33 = uVar48;
                  }
                }
                else {
                  puVar33 = _DAT_1423bbd00;
                  if (_DAT_1423bbd00 == _DAT_1423bbd08) {
LAB_1414f5419:
                    FUN_140072450(&DAT_1423bbcf8,puVar33);
                  }
                  else {
                    *_DAT_1423bbd00 = *(undefined4 *)(uVar39 + 0x130);
                    _DAT_1423bbd00 = _DAT_1423bbd00 + 1;
                  }
                }
              }
            }
            else {
              iVar2 = *(int *)(_DAT_1423bbcf8 + (longlong)iVar17 * 4);
              iVar43 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
              if ((iVar43 != 0) && (iVar2 != -1)) {
                iVar43 = iVar43 + -1;
                uVar45 = uVar44;
                if (-1 < iVar43) {
                  do {
                    iVar27 = iVar41 + iVar43 >> 1;
                    uVar45 = *(ulonglong *)(_DAT_142407530 + (longlong)iVar27 * 8);
                    iVar31 = *(int *)(uVar45 + 0x130);
                    if (iVar31 == iVar2) break;
                    iVar26 = iVar27 + -1;
                    if (iVar31 < iVar2) {
                      iVar26 = iVar43;
                      iVar41 = iVar27 + 1;
                    }
                    iVar43 = iVar26;
                    uVar45 = uVar44;
                  } while (iVar41 <= iVar43);
                }
                if ((uVar45 != 0) && (uVar45 != uVar39)) {
                  *(uint *)(uVar45 + 0x280) = *(uint *)(uVar45 + 0x280) | 1;
                }
              }
              *(undefined4 *)(_DAT_1423bbcf8 + (longlong)iVar17 * 4) =
                   *(undefined4 *)(uVar39 + 0x130);
            }
            if (((*(byte *)(puVar37 + 2) & 0x40) != 0) &&
               (lVar21 = puVar37[7], puVar37[8] - lVar21 >> 3 != 0)) {
              lVar23 = 0;
              do {
                iVar41 = (**(code **)(**(longlong **)(lVar21 + lVar23) + 0x10))();
                if (((iVar41 == 10) &&
                    (puVar25 = (undefined8 *)
                               (**(code **)(**(longlong **)(lVar23 + puVar37[7]) + 0x18))(),
                    puVar25 != (undefined8 *)0x0)) &&
                   (sVar14 = (**(code **)*puVar25)(puVar25), sVar14 == 0x27)) {
                  iVar41 = FUN_1400bb4a0(*(undefined4 *)((longlong)puVar25 + 0x1c),0x1423bbd28);
                  puVar28 = _DAT_1423bbd48;
                  if (iVar41 < (int)((longlong)_DAT_1423bbd48 - _DAT_1423bbd40 >> 2)) {
                    if (iVar41 != -1) {
                      puVar33 = (undefined4 *)(_DAT_1423bbd40 + (longlong)iVar41 * 4);
                      if (_DAT_1423bbd48 == _DAT_1423bbd50) goto LAB_1414f5535;
                      uVar48 = *(undefined4 *)(uVar39 + 0x130);
                      if (puVar33 == _DAT_1423bbd48) {
                        *_DAT_1423bbd48 = uVar48;
                        _DAT_1423bbd48 = _DAT_1423bbd48 + 1;
                      }
                      else {
                        puVar1 = _DAT_1423bbd48 + -1;
                        *_DAT_1423bbd48 = *puVar1;
                        _DAT_1423bbd48 = _DAT_1423bbd48 + 1;
                        func_0x00014155486a((longlong)puVar28 -
                                            ((longlong)puVar1 - (longlong)puVar33),puVar33);
                        *puVar33 = uVar48;
                      }
                    }
                  }
                  else {
                    puVar33 = _DAT_1423bbd48;
                    if (_DAT_1423bbd48 == _DAT_1423bbd50) {
LAB_1414f5535:
                      FUN_140072450(&DAT_1423bbd40,puVar33);
                    }
                    else {
                      *_DAT_1423bbd48 = *(undefined4 *)(uVar39 + 0x130);
                      _DAT_1423bbd48 = _DAT_1423bbd48 + 1;
                    }
                  }
                }
                uVar15 = (int)uVar44 + 1;
                uVar44 = (ulonglong)uVar15;
                lVar23 = lVar23 + 8;
                lVar21 = puVar37[7];
              } while ((ulonglong)(longlong)(int)uVar15 < (ulonglong)(puVar37[8] - lVar21 >> 3));
            }
          }
          lVar32 = lVar32 + -1;
        } while (-1 < lVar32);
      }
      param_7._0_4_ = (int)param_7 + 1;
      puStack_90 = puStack_90 + 1;
    } while ((ulonglong)(longlong)(int)param_7 < puStack_b8);
  }
LAB_1414f5596:
  FUN_1400681a0(&puStack_a8);
  return plVar20;
}

