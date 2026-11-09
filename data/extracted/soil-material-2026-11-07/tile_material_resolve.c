/* Actual Ghidra output; researcher-assigned name. VA 14145e0f0..14145e5af; see image.txt for input identity. */

void tile_material_resolve
               (longlong param_1,short param_2,short param_3,undefined2 param_4,short *param_5,
               undefined2 *param_6,undefined2 *param_7,uint *param_8,undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar16;
  undefined4 in_stack_ffffffffffffffc0;
  undefined2 uVar17;
  short asStack_38 [8];
  
  uVar16 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  uVar17 = (undefined2)((uint)in_stack_ffffffffffffffc0 >> 0x10);
  uVar5 = func_0x00014006dd30(param_1,param_2,param_3);
  uVar10 = 0;
  if (uVar5 < 0x15d) {
    if (uVar5 != 0x15c) {
      switch(uVar5) {
      case 0x27:
      case 0x28:
      case 0x29:
      case 0xed:
      case 0x101:
      case 0x105:
      case 0x106:
      case 0x107:
        break;
      default:
        goto LAB_14145e18c;
      case 0x103:
      case 0x104:
        uVar10 = 1;
        goto LAB_14145e190;
      }
    }
LAB_14145e186:
    uVar10 = 3;
  }
  else {
    switch(uVar5) {
    case 0x15d:
    case 0x15e:
    case 0x15f:
    case 0x160:
    case 0x161:
    case 0x162:
    case 0x163:
      goto LAB_14145e186;
    default:
LAB_14145e18c:
    }
  }
LAB_14145e190:
  *(undefined2 *)CONCAT62(param_9._2_6_,(short)param_9) = uVar10;
  cVar4 = func_0x00014023d4c0(uVar5);
  if (cVar4 != '\0') {
    uVar17 = (undefined2)
             ((uint)((int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) +
                    -1) >> 0x10);
    uVar16 = 0;
    lVar8 = FUN_140a08a10(param_1,param_2,param_3);
    if (lVar8 != 0) {
      *param_5 = *(short *)(lVar8 + 6);
      *param_6 = *(undefined2 *)(lVar8 + 8);
      *param_7 = *(undefined2 *)(lVar8 + 10);
      *param_8 = *(uint *)(lVar8 + 0xc);
      return;
    }
  }
  uVar11 = 0xffffffff;
  *param_5 = 4;
  *param_6 = 0xffff;
  *param_7 = 0;
  cVar4 = func_0x00014023d5d0(uVar5);
  if (cVar4 != '\0') {
    lVar8 = func_0x00014145e740(param_1,param_2,param_3);
    if (lVar8 != 0) {
      uVar11 = (int)param_2 & 0x8000000f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
      }
      uVar7 = (int)param_3 & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      cVar4 = *(char *)((longlong)(int)uVar7 + 0x208 + lVar8 + (longlong)(int)uVar11 * 0x10);
      if (cVar4 != '\0') {
        if (cVar4 != '\x01') goto LAB_14145e366;
        goto LAB_14145e2cb;
      }
    }
    *param_7 = 6;
    *param_8 = 0xffffffff;
    goto LAB_14145e366;
  }
  cVar4 = func_0x00014027df00(uVar5);
  if (cVar4 != '\0') {
LAB_14145e2cb:
    sVar6 = FUN_14145e060(param_1,param_2,param_3);
    *param_8 = (int)sVar6;
    goto LAB_14145e366;
  }
  cVar4 = func_0x00014027e1b0(uVar5);
  if (cVar4 != '\0') {
    *param_7 = (short)uVar11;
    *param_8 = uVar11;
    plVar9 = (longlong *)FUN_1414305a0(param_1,param_2,param_3);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x40))(plVar9,param_7,param_8);
    }
    goto LAB_14145e366;
  }
  cVar4 = func_0x00014027e340(uVar5);
  if (cVar4 != '\0') {
    lVar8 = func_0x00014145e6c0();
    if (lVar8 == 0) {
      uVar11 = tile_geolayer_material(param_1,param_2,param_3,param_4);
    }
    else {
      uVar11 = *(uint *)(lVar8 + 8);
    }
LAB_14145e35e:
    *param_8 = uVar11;
    goto LAB_14145e366;
  }
  uVar11 = tile_geolayer_material(param_1,param_2);
  *param_8 = uVar11;
  if ((int)uVar11 < 0) {
LAB_14145e442:
    cVar4 = tile_is_stone(uVar5);
  }
  else {
    if ((ulonglong)(*(longlong *)(param_1 + 0x11b3b0) - *(longlong *)(param_1 + 0x11b3a8) >> 3) <=
        (ulonglong)(longlong)(int)uVar11) goto LAB_14145e442;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x11b3a8) + (longlong)(int)uVar11 * 8);
    if ((*(int *)(lVar8 + 0x40) < 2) || ((*(byte *)(*(longlong *)(lVar8 + 0x38) + 1) & 8) == 0)) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x01';
    }
    cVar4 = tile_is_stone(uVar5);
    if (cVar15 != '\0') {
      if (cVar4 == '\0') goto LAB_14145e366;
      uVar11 = stone_material_fallback(param_1,param_2,param_3,param_4);
      goto LAB_14145e35e;
    }
  }
  if (cVar4 == '\0') {
    tile_biome_region(param_1,asStack_38,&param_9,param_2,CONCAT22(uVar16,param_3),
                      CONCAT22(uVar17,param_4));
    lVar8 = region_geology_lookup
                      (*(undefined8 *)(param_1 + 0x11a638),(int)asStack_38[0],(int)(short)param_9);
    if (lVar8 != 0) {
      iVar12 = (int)(*(longlong *)(lVar8 + 0x10) - *(longlong *)(lVar8 + 8) >> 3) + -1;
      if (-1 < iVar12) {
        lVar13 = (longlong)iVar12;
        plVar9 = (longlong *)(*(longlong *)(lVar8 + 8) + lVar13 * 8);
        do {
          iVar1 = *(int *)(*plVar9 + 4);
          if ((-1 < iVar1) &&
             ((ulonglong)(longlong)iVar1 <
              (ulonglong)
              (*(longlong *)(param_1 + 0x11b3b0) - *(longlong *)(param_1 + 0x11b3a8) >> 3))) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x11b3a8) + (longlong)iVar1 * 8);
            if ((*(int *)(lVar2 + 0x40) < 2) ||
               ((*(byte *)(*(longlong *)(lVar2 + 0x38) + 1) & 8) == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              *param_8 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)iVar12 * 8) +
                                  4);
              goto LAB_14145e366;
            }
          }
          iVar12 = iVar12 + -1;
          plVar9 = plVar9 + -1;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
      }
    }
    uVar14 = *(longlong *)(param_1 + 0x11b3b0) - *(longlong *)(param_1 + 0x11b3a8) >> 3;
    if ((uint)uVar14 < 2) {
      *param_8 = 0;
    }
    else {
      uVar11 = FUN_140e5e1e0();
      *param_8 = (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar14 & 0xffffffff)) + 1U);
    }
  }
LAB_14145e366:
  if ((*param_5 == 4) && (lVar8 = FUN_14143b820(0x1423397b0,*param_7,*param_8), lVar8 != 0)) {
    if ((*(int *)(lVar8 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 1) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *param_5 = 3;
    }
  }
  return;
}

