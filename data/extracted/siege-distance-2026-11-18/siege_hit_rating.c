/* Actual Ghidra output, research name; VA 0x1413812a0..0x141383f60. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong siege_hit_rating(longlong param_1,short param_2,int param_3,undefined4 param_4,int param_5
                          ,int param_6,longlong *param_7,longlong *param_8,uint param_9,
                          short param_10,int param_11)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 in_stack_ffffffffffffff68;
  uint *puVar22;
  undefined4 uVar23;
  undefined8 in_stack_ffffffffffffff70;
  uint *puVar24;
  undefined4 uVar25;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint auStack_40 [2];
  
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  iVar18 = 0;
  uStack_4c = 0xffffffff;
  uVar19 = (ulonglong)param_2;
  uStack_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  iVar6 = 0;
  uStack_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  uStack_50 = 0xffffffff;
  auStack_40[0] = (uint)param_2;
  if (0x3b < auStack_40[0]) goto LAB_141381444;
  uVar7 = param_6 >> 0x1f;
                    /* WARNING: Switch is manually overridden */
  switch(uVar19) {
  case 0:
  case 1:
  case 5:
    iVar6 = FUN_1413570b0(param_1,0x67);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x67,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x67);
    }
    break;
  case 2:
    iVar6 = FUN_1413570b0(param_1,0x2d);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x2d,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x2d);
    }
    break;
  case 3:
  case 4:
    iVar6 = FUN_1413570b0(param_1,99);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(99,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,99);
    }
    break;
  case 6:
  case 0x12:
  case 0x13:
  case 0x14:
    if (param_2 == 6) {
      sVar5 = 99;
    }
    else if (param_2 == 0x12) {
      sVar5 = 100;
    }
    else if (param_2 == 0x13) {
      sVar5 = 0x65;
    }
    else {
      sVar5 = param_2;
      if (param_2 == 0x14) {
        sVar5 = 0x66;
      }
    }
    iVar18 = FUN_1413570b0(param_1,sVar5);
    iVar15 = FUN_1413570b0(param_1,0x61);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    iVar6 = iVar15 >> 2;
    if (iVar15 >> 2 <= iVar18) {
      iVar6 = iVar18;
    }
    FUN_14078eb10(sVar5,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,sVar5,param_6);
      FUN_141354400(param_1,0x61,param_6);
    }
    goto LAB_141381434;
  case 7:
    iVar6 = FUN_1413570b0(param_1,0x2c,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x2c,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x2c);
    }
    break;
  case 8:
    if (param_7 != (longlong *)0x0) {
      uVar4 = (**(code **)(*param_7 + 0x4f0))(param_7);
      iVar18 = FUN_1413570b0(param_1,uVar4);
      iVar15 = FUN_1413570b0(param_1,0x61);
      iVar6 = iVar15 >> 2;
      if (iVar15 >> 2 <= iVar18) {
        iVar6 = iVar18;
      }
      sVar5 = (**(code **)(*param_7 + 0x4f0))(param_7);
      if (sVar5 == -1) {
        sVar5 = 0x61;
      }
      puVar24 = &uStack_54;
      puVar22 = &uStack_58;
      FUN_14078eb10(sVar5,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
      uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
      uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
      if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
        if ((sVar5 != -1) && (sVar5 != 0x61)) {
          FUN_141354400(param_1,sVar5,param_6);
        }
        FUN_141354400(param_1,0x61,param_6);
      }
      uVar19 = (ulonglong)auStack_40[0];
    }
    break;
  case 9:
    if (param_8 != (longlong *)0x0) {
      uVar4 = (**(code **)(*param_8 + 0x4f8))(param_8);
      iVar18 = FUN_1413570b0(param_1,uVar4);
      iVar15 = FUN_1413570b0(param_1,0x62);
      iVar6 = iVar15 >> 2;
      if (iVar15 >> 2 <= iVar18) {
        iVar6 = iVar18;
      }
      sVar5 = (**(code **)(*param_8 + 0x4f8))(param_8);
      if (sVar5 == -1) {
        sVar5 = 0x62;
      }
      puVar24 = &uStack_54;
      puVar22 = &uStack_58;
      FUN_14078eb10(sVar5,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
      uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
      uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
      if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
        if ((sVar5 != -1) && (sVar5 != 0x62)) {
          FUN_141354400(param_1,sVar5,param_6);
        }
        FUN_141354400(param_1,0x62,param_6);
      }
      goto LAB_141381434;
    }
    break;
  case 10:
    iVar18 = FUN_1413570b0(param_1,0x35,uVar19,100);
    iVar15 = FUN_1413570b0(param_1,0x62);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    iVar6 = iVar15 >> 2;
    if (iVar15 >> 2 <= iVar18) {
      iVar6 = iVar18;
    }
    FUN_14078eb10(0x35,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x35);
    }
    break;
  default:
    iVar6 = FUN_1413570b0(param_1,0x57,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x57,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x57);
    }
    break;
  case 0xc:
  case 0x1a:
  case 0x1b:
    iVar6 = FUN_1413570b0(param_1,0x61,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x61,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x61);
    }
    break;
  case 0xd:
    iVar6 = FUN_1413570b0(param_1,0x38,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x38,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x38);
    }
    break;
  case 0xf:
    iVar6 = FUN_1413570b0(param_1,0x60,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x60,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x60);
    }
    break;
  case 0x10:
    iVar6 = FUN_1413570b0(param_1,0x54,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x54,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x54);
    }
    break;
  case 0x11:
    iVar6 = FUN_1413570b0(param_1,0x55,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x55,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x55);
    }
    break;
  case 0x15:
    iVar6 = FUN_1413570b0(param_1,0x3b,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x3b,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x3b);
    }
    break;
  case 0x16:
    iVar6 = FUN_1413570b0(param_1,0x3a,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x3a,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x3a);
    }
    break;
  case 0x17:
    iVar6 = FUN_1413570b0(param_1,0x5f,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x5f,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x5f);
    }
    break;
  case 0x18:
    iVar6 = FUN_1413570b0(param_1,0x4a,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x4a,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x4a);
    }
    break;
  case 0x19:
    if (param_10 != -1) {
      iVar6 = FUN_1413570b0(param_1,param_10,uVar19,100);
      puVar24 = &uStack_54;
      puVar22 = &uStack_58;
      FUN_14078eb10(param_10,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
      uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
      uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    }
    if (((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) && (param_10 != -1)) {
      FUN_141354400(param_1,param_10);
    }
    break;
  case 0x1c:
  case 0x1d:
    iVar6 = FUN_1413570b0(param_1,0x62,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x62,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x62);
    }
    break;
  case 0x20:
    iVar6 = FUN_1413570b0(param_1,0x67,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x67,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x67);
    }
    break;
  case 0x22:
    iVar6 = FUN_1413570b0(param_1,0x53,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x53,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x53);
    }
    break;
  case 0x23:
    iVar6 = FUN_1413570b0(param_1,0x72,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x72,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x72);
    }
    break;
  case 0x24:
    iVar6 = FUN_1413570b0(param_1,0x56,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x56,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x56);
    }
    break;
  case 0x25:
    iVar18 = FUN_1413570b0(param_1,0x76,uVar19,100);
    iVar15 = FUN_1413570b0(param_1,0x75);
    iVar6 = iVar15 >> 2;
    if (iVar15 >> 2 <= iVar18) {
      iVar6 = iVar18;
    }
    if (*(longlong *)(param_1 + 0xa98) == 0) {
      iVar18 = 0;
    }
    else if (*(short *)(param_1 + 0x360) == 8) {
      iVar18 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
      if (lVar9 == 0) {
        iVar18 = 0;
      }
      else {
        lVar9 = FUN_1400bb3f0(param_11,lVar9 + 0x30);
        iVar18 = 0;
        if (lVar9 != 0) {
          iVar18 = *(int *)(lVar9 + 4);
        }
      }
    }
    iVar6 = (iVar6 + 1 + iVar18) / 2;
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x76,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 == 0) || (0 < *(short *)(param_1 + 0x800))) goto LAB_141381434;
    FUN_141354400(param_1,0x76,param_6);
    FUN_141354400(param_1,0x75,param_6);
    lVar9 = *(longlong *)(param_1 + 0xa98);
    if ((lVar9 == 0) || (*(short *)(param_1 + 0x360) == 8)) goto LAB_141381434;
LAB_141381423:
    uVar16 = 2;
    goto LAB_141381428;
  case 0x26:
    if ((param_7 == (longlong *)0x0) || (sVar5 = (**(code **)*param_7)(param_7), sVar5 != 0xd)) {
      return 0;
    }
    lVar9 = param_7[0x1d];
    if ((((*(longlong *)(param_1 + 0xa98) != 0) && (*(short *)(param_1 + 0x360) != 8)) &&
        (*(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0) != 0)) &&
       (lVar21 = FUN_1400bb3f0((int)*(short *)(lVar9 + 0x28)), lVar21 != 0)) {
      iVar6 = *(int *)(lVar21 + 4);
    }
    psVar2 = (short *)(param_1 + 0x360);
    iVar15 = FUN_1413570b0(param_1,*(undefined2 *)(lVar9 + 0xb8));
    iVar8 = FUN_1413570b0(param_1,0x75);
    iVar18 = iVar15 >> 1;
    if (iVar15 >> 1 <= iVar6) {
      iVar18 = iVar6;
    }
    iVar6 = iVar8 >> 2;
    if (iVar8 >> 2 <= iVar18) {
      iVar6 = iVar18;
    }
    if (*(longlong *)(param_1 + 0xa98) == 0) {
      iVar18 = 0;
    }
    else if (*psVar2 == 8) {
      iVar18 = 0;
    }
    else {
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
      if (lVar21 == 0) {
        iVar18 = 0;
      }
      else {
        lVar21 = FUN_1400bb3f0(param_11,lVar21 + 0x30);
        iVar18 = 0;
        if (lVar21 != 0) {
          iVar18 = *(int *)(lVar21 + 4);
        }
      }
    }
    iVar6 = (iVar18 + 1 + iVar6) / 2;
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(*(undefined2 *)(lVar9 + 0xb8),&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,
                  &uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,*(undefined2 *)(lVar9 + 0xb8),param_6);
      FUN_141354400(param_1,0x75,param_6);
      if ((*(longlong *)(param_1 + 0xa98) != 0) && (*psVar2 != 8)) {
        FUN_141101360(*(longlong *)(param_1 + 0xa98),0,(int)*(short *)(lVar9 + 0x28),param_6);
      }
      lVar9 = *(longlong *)(param_1 + 0xa98);
      if (lVar9 != 0) {
        sVar5 = *psVar2;
joined_r0x000141381ff4:
        if (sVar5 != 8) goto LAB_141381423;
      }
    }
    goto LAB_141381434;
  case 0x27:
    iVar6 = FUN_1413570b0(param_1,0x74,uVar19,100);
    if (*(longlong *)(param_1 + 0xa98) == 0) {
      iVar18 = 0;
    }
    else if (*(short *)(param_1 + 0x360) != 8) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
      if (lVar9 == 0) {
        iVar18 = 0;
      }
      else {
        lVar9 = FUN_1400bb3f0(param_11,lVar9 + 0x48);
        iVar18 = 0;
        if (lVar9 != 0) {
          iVar18 = *(int *)(lVar9 + 4);
        }
      }
    }
    goto LAB_1413816ce;
  case 0x28:
    iVar15 = FUN_1413570b0(param_1,0x5c,uVar19,100);
    iVar8 = FUN_1413570b0(param_1,0x5a);
    iVar6 = iVar8 >> 2;
    if (iVar8 >> 2 <= iVar15) {
      iVar6 = iVar15;
    }
    if (param_11 != -1) {
      if (*(longlong *)(param_1 + 0xa98) == 0) {
        iVar18 = 0;
      }
      else if (*(short *)(param_1 + 0x360) != 8) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
        if (lVar9 == 0) {
          iVar18 = 0;
        }
        else {
          lVar9 = FUN_1400bb3f0(param_11,lVar9 + 0x18);
          if (lVar9 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(lVar9 + 4);
          }
        }
      }
      iVar6 = (iVar18 + iVar6 + 1) / 2;
    }
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x5c,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x5c,param_6);
      FUN_141354400(param_1,0x5a,(int)((uVar7 & 3) + param_6) >> 2);
      if ((param_11 != -1) &&
         ((*(longlong *)(param_1 + 0xa98) != 0 && (*(short *)(param_1 + 0x360) != 8)))) {
        FUN_141101360(*(longlong *)(param_1 + 0xa98),1,param_11,param_6);
      }
    }
    goto LAB_141381434;
  case 0x29:
  case 0x38:
    iVar6 = FUN_1413570b0(param_1,0x5c,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x5c,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x5c);
    }
    break;
  case 0x2a:
    iVar18 = FUN_1413570b0(param_1,0x59,uVar19,100);
    iVar15 = FUN_1413570b0(param_1,0x58);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    iVar6 = iVar15 >> 2;
    if (iVar15 >> 2 <= iVar18) {
      iVar6 = iVar18;
    }
    FUN_14078eb10(0x59,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x59,param_6);
      FUN_141354400(param_1,0x58,(int)((uVar7 & 3) + param_6) >> 2);
    }
    break;
  case 0x2b:
    iVar15 = FUN_1413570b0(param_1,0x5a,uVar19,100);
    iVar8 = FUN_1413570b0(param_1,0x58);
    iVar6 = iVar8 >> 2;
    if (iVar8 >> 2 <= iVar15) {
      iVar6 = iVar15;
    }
    if (*(longlong *)(param_1 + 0xa98) == 0) {
      iVar18 = 0;
    }
    else if (*(short *)(param_1 + 0x360) != 8) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
      if (lVar9 == 0) {
        iVar18 = 0;
      }
      else {
        lVar9 = FUN_1400bb3f0(param_11,lVar9 + 0x18);
        iVar18 = 0;
        if (lVar9 != 0) {
          iVar18 = *(int *)(lVar9 + 4);
        }
      }
    }
    iVar6 = (iVar6 + 1 + iVar18) / 2;
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x5a,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x5a,param_6);
      FUN_141354400(param_1,0x58,(int)((uVar7 & 3) + param_6) >> 2);
      lVar9 = *(longlong *)(param_1 + 0xa98);
      if ((lVar9 != 0) && (*(short *)(param_1 + 0x360) != 8)) {
        uVar16 = 1;
        goto LAB_141381428;
      }
    }
    goto LAB_141381434;
  case 0x2c:
    iVar6 = FUN_1413570b0(param_1,0x75,uVar19,100);
    if (*(longlong *)(param_1 + 0xa98) == 0) {
      iVar18 = 0;
    }
    else if (*(short *)(param_1 + 0x360) != 8) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
      if (lVar9 == 0) {
        iVar18 = 0;
      }
      else {
        lVar9 = FUN_1400bb3f0(param_11,lVar9 + 0x30);
        iVar18 = 0;
        if (lVar9 != 0) {
          iVar18 = *(int *)(lVar9 + 4);
        }
      }
    }
    iVar6 = (iVar6 + 1 + iVar18) / 2;
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x75,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x75,param_6);
      lVar9 = *(longlong *)(param_1 + 0xa98);
      if (lVar9 != 0) {
        sVar5 = *(short *)(param_1 + 0x360);
        goto joined_r0x000141381ff4;
      }
    }
    goto LAB_141381434;
  case 0x2d:
    iVar6 = FUN_1413570b0(param_1,0x74,uVar19,100);
    if (*(longlong *)(param_1 + 0xa98) != 0) {
      if (*(short *)(param_1 + 0x360) == 8) {
        iVar18 = 0;
      }
      else {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0xcb0);
        if (lVar9 == 0) {
          iVar18 = 0;
        }
        else {
          lVar9 = FUN_1400bb3f0(param_11,lVar9 + 0x48);
          iVar18 = 0;
          if (lVar9 != 0) {
            iVar18 = *(int *)(lVar9 + 4);
          }
        }
      }
    }
LAB_1413816ce:
    iVar6 = (iVar6 + 1 + iVar18) / 2;
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x74,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x74,param_6);
      lVar9 = *(longlong *)(param_1 + 0xa98);
      if ((lVar9 != 0) && (*(short *)(param_1 + 0x360) != 8)) {
        uVar16 = 3;
LAB_141381428:
        FUN_141101360(lVar9,uVar16,param_11,param_6);
      }
    }
LAB_141381434:
    uVar19 = (ulonglong)auStack_40[0];
    break;
  case 0x2e:
    iVar6 = FUN_1413570b0(param_1,0x46,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x46,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x46);
    }
    break;
  case 0x2f:
    iVar6 = FUN_1413570b0(param_1,0x4d,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x4d,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x4d);
    }
    break;
  case 0x30:
    iVar6 = FUN_1413570b0(param_1,0x48,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x48,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x48);
    }
    break;
  case 0x31:
    iVar6 = FUN_1413570b0(param_1,0x50,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x50,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x50);
    }
    break;
  case 0x32:
    iVar6 = FUN_1413570b0(param_1,0x4e,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x4e,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x4e);
    }
    break;
  case 0x33:
    iVar6 = FUN_1413570b0(param_1,0x4f,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x4f,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x4f);
    }
    break;
  case 0x34:
    iVar6 = FUN_1413570b0(param_1,0x51,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x51,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x51);
    }
    break;
  case 0x35:
    iVar6 = FUN_1413570b0(param_1,0x52,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x52,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x52);
    }
    break;
  case 0x36:
    iVar6 = FUN_1413570b0(param_1,0x4c,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x4c,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x4c);
    }
    break;
  case 0x37:
    iVar6 = FUN_1413570b0(param_1,0x85,uVar19,100);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    FUN_14078eb10(0x85,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x85);
    }
    break;
  case 0x39:
    iVar18 = FUN_1413570b0(param_1,0x2f,uVar19,100);
    iVar15 = FUN_1413570b0(param_1,0x62);
    puVar24 = &uStack_54;
    puVar22 = &uStack_58;
    iVar6 = iVar15 >> 2;
    if (iVar15 >> 2 <= iVar18) {
      iVar6 = iVar18;
    }
    FUN_14078eb10(0x2f,&uStack_4c,&uStack_48,&uStack_44,puVar22,puVar24,&uStack_50);
    uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    if ((param_6 != 0) && (*(short *)(param_1 + 0x800) < 1)) {
      FUN_141354400(param_1,0x2f,param_6);
      FUN_141354400(param_1,0x62,param_6);
    }
  }
LAB_141381444:
  if ((*(short *)(param_1 + 0x814) == 0) && ((param_9 & 1) != 0)) {
    iVar6 = (iVar6 + 1) * 5;
  }
  if (param_2 == 4) {
    iVar6 = iVar6 / 2;
    param_3 = param_3 / 2 + 1;
  }
  uVar7 = FUN_141337b30(param_3,iVar6,param_4);
  auStack_40[0] = uVar7;
  if ((param_7 != (longlong *)0x0) || (param_8 != (longlong *)0x0)) {
    FUN_141380430(auStack_40,param_7,param_8);
    if (param_8 == (longlong *)0x0) {
      iVar6 = 0;
    }
    else {
      lVar9 = FUN_1400bb3f0(*(undefined4 *)((longlong)param_8 + 0x1c),param_1 + 0xd50);
      iVar6 = 0;
      if (lVar9 != 0) {
        iVar18 = *(int *)(lVar9 + 0xc) / 100 + *(int *)(lVar9 + 4) / 0x127500;
        if (-1 < iVar18) {
          iVar6 = iVar18;
        }
        if (100 < iVar6) {
          iVar6 = 100;
        }
      }
    }
    iVar18 = 0;
    if (param_7 != (longlong *)0x0) {
      lVar9 = FUN_1400bb3f0(*(undefined4 *)((longlong)param_7 + 0x1c),param_1 + 0xd50);
      if (lVar9 == 0) {
        iVar18 = 0;
      }
      else {
        iVar15 = *(int *)(lVar9 + 4) / 0x127500 + *(int *)(lVar9 + 0xc) / 100;
        if (-1 < iVar15) {
          iVar18 = iVar15;
        }
        if (100 < iVar18) {
          iVar18 = 100;
        }
      }
    }
    uVar7 = (int)((iVar18 + 100 + iVar6) * auStack_40[0]) / 100;
  }
  uVar11 = (ulonglong)uVar7;
  if ((uint)uVar19 < 0x3c) {
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined1 *)((longlong)(int)(uint)uVar19 + 0x141383f24)) {
    case 0:
      iVar6 = FUN_14134d320();
      if (iVar6 + 1U < 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_140ece790();
        uVar13 = (uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (ulonglong)(iVar6 + 1U)) + 1U);
      }
      uVar11 = (ulonglong)(uVar7 - uVar13);
    }
  }
  uVar19 = (ulonglong)(int)uStack_4c;
  if (uStack_4c != 0xffffffff) {
    lVar9 = *(longlong *)(param_1 + 0x8e8);
    uVar7 = *(int *)((uVar19 + 0x37) * 0x1c + param_1) - *(int *)(uVar19 * 0x1c + 0x614 + param_1);
    if ((param_9 >> 8 & 1) == 0) {
      if (lVar9 != 0) {
        uVar7 = (int)(uVar7 * *(int *)(lVar9 + uVar19 * 4)) / 100 +
                *(int *)(lVar9 + 0x18 + uVar19 * 4);
      }
      uVar13 = 0;
      if (-1 < (int)uVar7) {
        uVar13 = uVar7;
      }
      uVar12 = 0;
      if (1 < uVar13 + 1) {
        uVar7 = FUN_140ece790();
        uVar19 = (ulonglong)uStack_4c;
        uVar12 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 ((int)(0x7fffffff / (ulonglong)(uVar13 + 1)) + 1U);
      }
    }
    else {
      if (lVar9 != 0) {
        uVar7 = (int)(uVar7 * *(int *)(lVar9 + uVar19 * 4)) / 100 +
                *(int *)(lVar9 + 0x18 + uVar19 * 4);
      }
      uVar12 = 0;
      if (-1 < (int)uVar7) {
        uVar12 = uVar7;
      }
    }
    uVar11 = (ulonglong)(uint)((int)uVar11 + (int)uVar12 / 100);
    if (0 < param_5) {
      FUN_1413e3c90(param_1,uVar19 & 0xffffffff,param_5);
    }
  }
  uVar19 = (ulonglong)(int)uStack_48;
  if (uStack_48 != 0xffffffff) {
    lVar9 = *(longlong *)(param_1 + 0x8e8);
    uVar7 = *(int *)((uVar19 + 0x37) * 0x1c + param_1) - *(int *)(uVar19 * 0x1c + 0x614 + param_1);
    if ((param_9 >> 8 & 1) == 0) {
      if (lVar9 != 0) {
        uVar7 = (int)(uVar7 * *(int *)(lVar9 + uVar19 * 4)) / 100 +
                *(int *)(lVar9 + 0x18 + uVar19 * 4);
      }
      uVar13 = 0;
      if (-1 < (int)uVar7) {
        uVar13 = uVar7;
      }
      uVar12 = 0;
      if (1 < uVar13 + 1) {
        uVar7 = FUN_140ece790();
        uVar19 = (ulonglong)uStack_48;
        uVar12 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 ((int)(0x7fffffff / (ulonglong)(uVar13 + 1)) + 1U);
      }
    }
    else {
      if (lVar9 != 0) {
        uVar7 = (int)(uVar7 * *(int *)(lVar9 + uVar19 * 4)) / 100 +
                *(int *)(lVar9 + 0x18 + uVar19 * 4);
      }
      uVar12 = 0;
      if (-1 < (int)uVar7) {
        uVar12 = uVar7;
      }
    }
    uVar11 = (ulonglong)(uint)((int)uVar11 + (int)uVar12 / 0xfa);
    if (0 < param_5) {
      FUN_1413e3c90(param_1,uVar19 & 0xffffffff,param_5);
    }
  }
  uVar19 = (ulonglong)(int)uStack_44;
  if (uStack_44 != 0xffffffff) {
    lVar9 = *(longlong *)(param_1 + 0x8e8);
    uVar7 = *(int *)((uVar19 + 0x37) * 0x1c + param_1) - *(int *)(uVar19 * 0x1c + 0x614 + param_1);
    if ((param_9 >> 8 & 1) == 0) {
      if (lVar9 != 0) {
        uVar7 = (int)(uVar7 * *(int *)(lVar9 + uVar19 * 4)) / 100 +
                *(int *)(lVar9 + 0x18 + uVar19 * 4);
      }
      uVar13 = 0;
      if (-1 < (int)uVar7) {
        uVar13 = uVar7;
      }
      uVar12 = 0;
      if (1 < uVar13 + 1) {
        uVar7 = FUN_140ece790();
        uVar19 = (ulonglong)uStack_44;
        uVar12 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                 ((int)(0x7fffffff / (ulonglong)(uVar13 + 1)) + 1U);
      }
    }
    else {
      if (lVar9 != 0) {
        uVar7 = (int)(uVar7 * *(int *)(lVar9 + uVar19 * 4)) / 100 +
                *(int *)(lVar9 + 0x18 + uVar19 * 4);
      }
      uVar12 = 0;
      if (-1 < (int)uVar7) {
        uVar12 = uVar7;
      }
    }
    uVar11 = (ulonglong)(uint)((int)uVar11 + (int)uVar12 / 0xfa);
    if (0 < param_5) {
      FUN_1413e3c90(param_1,uVar19 & 0xffffffff,param_5);
    }
  }
  iVar6 = (int)uVar11;
  lVar9 = *(longlong *)(param_1 + 0xa98);
  lVar21 = 0;
  if (lVar9 != 0) {
    lVar21 = (longlong)(int)uStack_50;
    if (uStack_50 == 0xffffffff) {
      lVar21 = (longlong)(int)uStack_54;
      if (uStack_54 == 0xffffffff) {
        uVar19 = (ulonglong)(int)uStack_58;
        if (uStack_58 != 0xffffffff) {
          lVar21 = uVar19 * 0x1c;
          if ((param_9 >> 8 & 1) == 0) {
            uVar7 = *(int *)(lVar21 + 0xac + lVar9) - *(int *)(lVar21 + 0xbc + lVar9);
            lVar9 = *(longlong *)(param_1 + 0x8e8);
            if (lVar9 != 0) {
              uVar7 = (int)(uVar7 * *(int *)(lVar9 + 0x30 + uVar19 * 4)) / 100 +
                      *(int *)(lVar9 + 100 + uVar19 * 4);
            }
            uVar13 = 0;
            if (-1 < (int)uVar7) {
              uVar13 = uVar7;
            }
            uVar7 = 0;
            if (1 < uVar13 + 1) {
              uVar7 = FUN_140ece790();
              uVar19 = (ulonglong)uStack_58;
              uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (ulonglong)(uVar13 + 1)) + 1U);
            }
          }
          else {
            uVar13 = *(int *)(lVar21 + 0xac + lVar9) - *(int *)(lVar21 + 0xbc + lVar9);
            lVar9 = *(longlong *)(param_1 + 0x8e8);
            if (lVar9 != 0) {
              uVar13 = (int)(uVar13 * *(int *)(lVar9 + 0x30 + uVar19 * 4)) / 100 +
                       *(int *)(lVar9 + 100 + uVar19 * 4);
            }
            uVar7 = 0;
            if (-1 < (int)uVar13) {
              uVar7 = uVar13;
            }
          }
          uVar11 = (ulonglong)(uint)(iVar6 + (int)uVar7 / 100);
          if (0 < param_5) {
            uVar19 = uVar19 & 0xffffffff;
            goto LAB_141383818;
          }
        }
      }
      else {
        if ((param_9 >> 8 & 1) == 0) {
          lVar21 = (longlong)(int)uStack_58;
          uVar7 = *(int *)(lVar21 * 0x1c + 0xac + lVar9) - *(int *)(lVar21 * 0x1c + 0xbc + lVar9);
          lVar9 = *(longlong *)(param_1 + 0x8e8);
          if (lVar9 != 0) {
            uVar7 = (int)(uVar7 * *(int *)(lVar9 + 0x30 + lVar21 * 4)) / 100 +
                    *(int *)(lVar9 + 100 + lVar21 * 4);
          }
          uVar12 = 0;
          uVar13 = uVar12;
          if (-1 < (int)uVar7) {
            uVar13 = uVar7;
          }
          if (1 < uVar13 + 1) {
            uVar7 = FUN_140ece790();
            uVar12 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff
                     ) / ((int)(0x7fffffff / (ulonglong)(uVar13 + 1)) + 1U);
          }
          lVar9 = *(longlong *)(param_1 + 0xa98);
          uVar7 = 0;
          if (lVar9 != 0) {
            lVar21 = *(longlong *)(param_1 + 0x8e8);
            lVar20 = (longlong)(int)uStack_54;
            uVar13 = *(int *)(lVar20 * 0x1c + 0xac + lVar9) - *(int *)(lVar20 * 0x1c + 0xbc + lVar9)
            ;
            if (lVar21 != 0) {
              uVar13 = (int)(uVar13 * *(int *)(lVar21 + 0x30 + lVar20 * 4)) / 100 +
                       *(int *)(lVar21 + 100 + lVar20 * 4);
            }
            uVar17 = uVar7;
            if (-1 < (int)uVar13) {
              uVar17 = uVar13;
            }
            if (1 < uVar17 + 1) {
              uVar7 = FUN_140ece790();
              uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (ulonglong)(uVar17 + 1)) + 1U);
            }
          }
          uVar7 = iVar6 + (int)uVar12 / 100 + (int)uVar7 / 0xfa;
        }
        else {
          lVar14 = (longlong)(int)uStack_58;
          lVar20 = *(longlong *)(param_1 + 0x8e8);
          iVar18 = *(int *)(lVar14 * 0x1c + 0xac + lVar9) - *(int *)(lVar14 * 0x1c + 0xbc + lVar9);
          if (lVar20 != 0) {
            iVar18 = (iVar18 * *(int *)(lVar20 + 0x30 + lVar14 * 4)) / 100 +
                     *(int *)(lVar20 + 100 + lVar14 * 4);
          }
          iVar15 = 0;
          if (-1 < iVar18) {
            iVar15 = iVar18;
          }
          iVar18 = *(int *)(lVar21 * 0x1c + 0xac + lVar9) - *(int *)(lVar21 * 0x1c + 0xbc + lVar9);
          if (lVar20 != 0) {
            iVar18 = (iVar18 * *(int *)(lVar20 + 0x30 + lVar21 * 4)) / 100 +
                     *(int *)(lVar20 + 100 + lVar21 * 4);
          }
          iVar8 = 0;
          if (-1 < iVar18) {
            iVar8 = iVar18;
          }
          uVar7 = iVar8 / 0xfa + iVar15 / 100 + iVar6;
        }
        uVar11 = (ulonglong)uVar7;
        if (0 < param_5) {
          FUN_1413e3da0(param_1,uStack_58,param_5);
          uVar19 = (ulonglong)uStack_54;
          goto LAB_141383818;
        }
      }
    }
    else {
      lVar20 = (longlong)(int)uStack_58;
      uVar7 = *(int *)(lVar20 * 0x1c + 0xac + lVar9) - *(int *)(lVar20 * 0x1c + 0xbc + lVar9);
      if ((param_9 >> 8 & 1) == 0) {
        lVar9 = *(longlong *)(param_1 + 0x8e8);
        if (lVar9 != 0) {
          uVar7 = (int)(uVar7 * *(int *)(lVar9 + 0x30 + lVar20 * 4)) / 100 +
                  *(int *)(lVar9 + 100 + lVar20 * 4);
        }
        uVar12 = 0;
        uVar13 = uVar12;
        if (-1 < (int)uVar7) {
          uVar13 = uVar7;
        }
        if (1 < uVar13 + 1) {
          uVar7 = FUN_140ece790();
          uVar12 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff)
                   / ((int)(0x7fffffff / (ulonglong)(uVar13 + 1)) + 1U);
        }
        lVar9 = *(longlong *)(param_1 + 0xa98);
        uVar7 = 0;
        if (lVar9 != 0) {
          lVar20 = (longlong)(int)uStack_54;
          lVar21 = *(longlong *)(param_1 + 0x8e8);
          uVar13 = *(int *)(lVar20 * 0x1c + 0xac + lVar9) - *(int *)(lVar20 * 0x1c + 0xbc + lVar9);
          if (lVar21 != 0) {
            uVar13 = (int)(uVar13 * *(int *)(lVar21 + 0x30 + lVar20 * 4)) / 100 +
                     *(int *)(lVar21 + 100 + lVar20 * 4);
          }
          uVar17 = uVar7;
          if (-1 < (int)uVar13) {
            uVar17 = uVar13;
          }
          if (1 < uVar17 + 1) {
            uVar7 = FUN_140ece790();
            uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff)
                    / ((int)(0x7fffffff / (ulonglong)(uVar17 + 1)) + 1U);
          }
        }
        lVar9 = *(longlong *)(param_1 + 0xa98);
        if (lVar9 == 0) {
LAB_141383463:
          uVar13 = 0;
        }
        else {
          lVar21 = *(longlong *)(param_1 + 0x8e8);
          lVar20 = (longlong)(int)uStack_50;
          iVar18 = *(int *)(lVar20 * 0x1c + 0xac + lVar9) - *(int *)(lVar20 * 0x1c + 0xbc + lVar9);
          if (lVar21 != 0) {
            iVar18 = (iVar18 * *(int *)(lVar21 + 0x30 + lVar20 * 4)) / 100 +
                     *(int *)(lVar21 + 100 + lVar20 * 4);
          }
          iVar15 = 0;
          if (-1 < iVar18) {
            iVar15 = iVar18;
          }
          if (iVar15 + 1U < 2) goto LAB_141383463;
          uVar13 = FUN_140ece790();
          uVar13 = (uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / ((int)(0x7fffffff / (ulonglong)(iVar15 + 1U)) + 1U);
        }
        uVar7 = iVar6 + (int)uVar12 / 100 + (int)uVar7 / 0xfa + (int)uVar13 / 0xfa;
      }
      else {
        lVar14 = *(longlong *)(param_1 + 0x8e8);
        if (lVar14 != 0) {
          uVar7 = (int)(uVar7 * *(int *)(lVar14 + 0x30 + lVar20 * 4)) / 100 +
                  *(int *)(lVar14 + 100 + lVar20 * 4);
        }
        if (-1 < (int)uVar7) {
          iVar6 = iVar6 + (int)uVar7 / 100;
        }
        lVar20 = (longlong)(int)uStack_54;
        iVar18 = *(int *)(lVar20 * 0x1c + 0xac + lVar9) - *(int *)(lVar20 * 0x1c + 0xbc + lVar9);
        if (lVar14 != 0) {
          iVar18 = (iVar18 * *(int *)(lVar14 + 0x30 + lVar20 * 4)) / 100 +
                   *(int *)(lVar14 + 100 + lVar20 * 4);
        }
        iVar15 = 0;
        if (-1 < iVar18) {
          iVar15 = iVar18;
        }
        iVar18 = *(int *)(lVar21 * 0x1c + 0xac + lVar9) - *(int *)(lVar21 * 0x1c + 0xbc + lVar9);
        if (lVar14 != 0) {
          iVar18 = (iVar18 * *(int *)(lVar14 + 0x30 + lVar21 * 4)) / 100 +
                   *(int *)(lVar14 + 100 + lVar21 * 4);
        }
        iVar8 = 0;
        if (-1 < iVar18) {
          iVar8 = iVar18;
        }
        uVar7 = iVar8 / 0xfa + iVar15 / 0xfa + iVar6;
      }
      uVar11 = (ulonglong)uVar7;
      if (0 < param_5) {
        FUN_1413e3da0(param_1,uStack_58,param_5);
        FUN_1413e3da0(param_1,uStack_54,param_5);
        uVar19 = (ulonglong)uStack_50;
LAB_141383818:
        FUN_1413e3da0(param_1,uVar19,param_5);
      }
    }
    FUN_140e43f70(*(longlong *)(param_1 + 0xa98) + 0x248);
    lVar21 = *(longlong *)(param_1 + 0xa98);
    if ((*(int *)(lVar21 + 0x3cc) != 1) || (*(int *)(lVar21 + 0x3d0) != 1)) {
      uVar11 = (longlong)(*(int *)(lVar21 + 0x3cc) * (int)uVar11) /
               (longlong)*(int *)(lVar21 + 0x3d0) & 0xffffffff;
    }
  }
  if (((param_2 == 0x11) && (lVar21 != 0)) &&
     (cVar3 = FUN_140e29a90(lVar21 + 0x248,0x1c,0), cVar3 == '\0')) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if ((((param_9 & 0x40) != 0) && (*(longlong *)(param_1 + 0xa98) != 0)) &&
     (cVar3 = FUN_140e29a90(*(longlong *)(param_1 + 0xa98) + 0x248,0x2b,0), cVar3 == '\0')) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if (((param_2 == 0x17) && (*(longlong *)(param_1 + 0xa98) != 0)) &&
     (cVar3 = FUN_140e29a90(*(longlong *)(param_1 + 0xa98) + 0x248,0x2c,0), cVar3 == '\0')) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if (((param_9 & 0x10) != 0) &&
     (uVar7 = siege_hit_rating(param_1,0x11,0xb,5,CONCAT44(uVar23,10),CONCAT44(uVar25,10),0,0,
                               param_9 & 0x20,0xffff,0xffffffff), (int)uVar7 < (int)uVar11)) {
    uVar11 = (ulonglong)uVar7;
  }
  if ((0 < *(int *)(param_1 + 0x81c)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if ((0 < *(short *)(param_1 + 0x7fc)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if ((0 < *(short *)(param_1 + 0x7fe)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if ((0 < *(int *)(param_1 + 0x820)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if ((0 < *(int *)(param_1 + 0x980)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  iVar6 = FUN_14139bee0(param_1);
  if (iVar6 == 0) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 2);
  }
  if (((99 < *(int *)(param_1 + 0x818)) && (*(short *)(param_1 + 0x814) != 0)) &&
     (*(short *)(param_1 + 0x360) == -1)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  iVar6 = *(int *)(param_1 + 0x984);
  if ((1999 < iVar6) && (*(short *)(param_1 + 0x814) != 0)) {
    iVar18 = (int)uVar11 * 3;
    uVar11 = (ulonglong)(uint)((int)((iVar18 >> 0x1f & 3U) + iVar18) >> 2);
  }
  if ((3999 < iVar6) && (*(short *)(param_1 + 0x814) != 0)) {
    iVar18 = (int)uVar11 * 3;
    uVar11 = (ulonglong)(uint)((int)((iVar18 >> 0x1f & 3U) + iVar18) >> 2);
  }
  if ((5999 < iVar6) && (*(short *)(param_1 + 0x814) != 0)) {
    iVar6 = (int)uVar11 * 3;
    uVar11 = (ulonglong)(uint)((int)((iVar6 >> 0x1f & 3U) + iVar6) >> 2);
  }
  if ((*(int *)(param_1 + 0x1280) < 0x15) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x1278) + 0x14) & 4) == 0)) {
    if (((*(uint *)(param_1 + 0x82c) & 0x10000000) == 0) &&
       ((*(uint *)(param_1 + 0x828) & 0x10000000) != 0)) goto LAB_141383a87;
LAB_141383b10:
    if (_DAT_1418be238 != 0) goto LAB_141383ac7;
    if (49999 < *(int *)(param_1 + 0x98c)) {
      uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
    }
    if (74999 < *(int *)(param_1 + 0x988)) {
      uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
    }
    if (149999 < *(int *)(param_1 + 0x990)) {
      uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x82c) & 0x10000000) != 0) goto LAB_141383b10;
LAB_141383a87:
    for (puVar10 = *(undefined8 **)(param_1 + 0x9a8); puVar10 < *(undefined8 **)(param_1 + 0x9b0);
        puVar10 = puVar10 + 1) {
      if (*(short *)*puVar10 == 0x2e) {
        piVar1 = (int *)((short *)*puVar10 + 2);
        if (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
          goto LAB_141383ab8;
        }
        break;
      }
    }
    iVar6 = 0;
LAB_141383ab8:
    iVar18 = (int)uVar11;
    if (_DAT_1418be238 != 1) {
      if (iVar6 < 0x62700) {
        if (0x49d3f < iVar6) {
          uVar11 = (ulonglong)(uint)((int)((iVar18 * 3 >> 0x1f & 3U) + iVar18 * 3) >> 2);
        }
      }
      else {
        uVar11 = (ulonglong)(uint)(iVar18 >> 1);
      }
      goto LAB_141383b10;
    }
    if (iVar6 < 0x24ea00) {
      if (0x1274ff < iVar6) {
        uVar11 = (ulonglong)(uint)((int)((iVar18 * 3 >> 0x1f & 3U) + iVar18 * 3) >> 2);
      }
    }
    else {
      uVar11 = (ulonglong)(uint)(iVar18 >> 1);
    }
LAB_141383ac7:
    iVar6 = *(int *)(param_1 + 0x98c);
    iVar18 = (int)uVar11;
    if (iVar6 < 0x54600) {
      if (iVar6 < 0x2a300) {
        if (0x1c1ff < iVar6) {
          uVar11 = (ulonglong)(uint)((iVar18 * 9) / 10);
        }
      }
      else {
        uVar11 = (ulonglong)(uint)((int)((iVar18 * 3 >> 0x1f & 3U) + iVar18 * 3) >> 2);
      }
    }
    else {
      uVar11 = (ulonglong)(uint)(iVar18 >> 1);
    }
    iVar6 = *(int *)(param_1 + 0x988);
    iVar18 = (int)uVar11;
    if (iVar6 < 0x278d00) {
      if (iVar6 < 0x127500) {
        if (0x2a2ff < iVar6) {
          uVar11 = (ulonglong)(uint)((iVar18 * 9) / 10);
        }
      }
      else {
        uVar11 = (ulonglong)(uint)((int)((iVar18 * 3 >> 0x1f & 3U) + iVar18 * 3) >> 2);
      }
    }
    else {
      uVar11 = (ulonglong)(uint)(iVar18 >> 1);
    }
    iVar6 = *(int *)(param_1 + 0x990);
    iVar18 = (int)uVar11;
    if (iVar6 < 0xd2f00) {
      if (iVar6 < 0x54600) {
        if (iVar6 < 0x3f480) {
          if (0x2a2ff < iVar6) {
            uVar11 = (ulonglong)(uint)((iVar18 * 9) / 10);
          }
        }
        else {
          uVar11 = (ulonglong)(uint)((int)((iVar18 * 3 >> 0x1f & 3U) + iVar18 * 3) >> 2);
        }
      }
      else {
        uVar11 = (ulonglong)(uint)(iVar18 >> 1);
      }
    }
    else {
      uVar11 = (ulonglong)(uint)(iVar18 >> 2);
    }
  }
  if ((param_9 & 8) != 0) {
    uVar11 = (ulonglong)(uint)((int)uVar11 + *(int *)(param_1 + 0x6ac) / 0x14);
  }
  if (0 < *(short *)(param_1 + 0x804)) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  iVar6 = *(int *)(param_1 + 0x978);
  if (iVar6 < 0x32) {
    if (0 < iVar6) {
      uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
    }
  }
  else {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 2);
  }
  if (((0 < *(short *)(param_1 + 0x800)) || (9 < *(short *)(param_1 + 0x804))) || (99 < iVar6)) {
    uVar11 = 0;
  }
  uVar7 = (int)uVar11 >> 1;
  if (param_2 == 8) {
    if (((param_7 != (longlong *)0x0) &&
        (cVar3 = (**(code **)(*param_7 + 0x380))(param_7,*(undefined4 *)(param_1 + 0x6b0)),
        cVar3 != '\0')) && (sVar5 = FUN_14139f2f0(param_1,0,0,0xffffffff), sVar5 == -1)) {
      uVar11 = (ulonglong)uVar7;
    }
  }
  else {
    if (param_2 == 9) {
      if ((param_8 != (longlong *)0x0) &&
         ((cVar3 = (**(code **)(*param_8 + 0x380))(param_8,*(undefined4 *)(param_1 + 0x6b0)),
          cVar3 != '\0' && (sVar5 = FUN_14139f2f0(param_1,0,0,0xffffffff), sVar5 == -1)))) {
        uVar11 = (ulonglong)uVar7;
      }
    }
    else if ((param_2 != 10) && (2 < (ushort)(param_2 - 0x39U))) goto LAB_141383d67;
    if (*(int *)(param_1 + 0x3dc) != -1) {
      iVar6 = FUN_1413570b0(param_1,0x86);
      iVar18 = (int)uVar11;
      if (iVar6 < 1) {
        uVar11 = (ulonglong)(uint)((int)((iVar18 >> 0x1f & 3U) + iVar18) >> 2);
      }
      else if (iVar6 == 1) {
        uVar11 = (ulonglong)(uint)(iVar18 / 3);
      }
      else {
        if (0xf < iVar6) {
          iVar6 = 0xf;
        }
        uVar11 = (ulonglong)(uint)(((iVar6 + 0xf) * iVar18) / 0x1e);
      }
    }
  }
LAB_141383d67:
  if (((param_9 & 2) != 0) &&
     (((ushort)(*(short *)(param_1 + 0x814) - 1U) < 2 || (*(short *)(param_1 + 0x360) == 7)))) {
    uVar11 = (ulonglong)(uint)((int)uVar11 >> 1);
  }
  if ((char)param_9 < '\0') {
    iVar6 = *(int *)(param_1 + 0x4c8);
    if (iVar6 < 10) {
      if (0 < iVar6) {
        uVar11 = (ulonglong)(uint)(((10 - iVar6) * (int)uVar11) / 10);
      }
      goto LAB_141383db5;
    }
  }
  else {
LAB_141383db5:
    if (-1 < (int)uVar11) goto LAB_141383dc4;
  }
  uVar11 = 0;
LAB_141383dc4:
  if (*(int *)(param_1 + 0x8f0) != 100) {
    uVar11 = (ulonglong)(uint)(((int)uVar11 * *(int *)(param_1 + 0x8f0)) / 100);
  }
  if ((*(byte *)(param_1 + 0x110) & 2) != 0) {
    uVar11 = 0;
  }
  if ((param_9 & 4) != 0) {
    uVar11 = (ulonglong)(uint)((int)uVar11 + *(int *)(param_1 + 0x6ac) / 0x14);
  }
  return uVar11;
}

