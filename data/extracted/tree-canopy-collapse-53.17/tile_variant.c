/* Actual Ghidra output; researcher-assigned name. VA 0x1414ce660..0x1414cf018; see image.txt for input identity. */

void tile_variant(longlong param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 uVar18;
  
  iVar6 = (int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) + -1;
  lVar17 = (longlong)param_4;
  uVar13 = (ulonglong)param_3;
  uVar14 = (ulonglong)param_2;
  uVar4 = 0;
  lVar9 = FUN_140a60840(param_1,param_2,param_3,param_4,0,iVar6);
  uVar7 = FUN_140ece790();
  uVar7 = uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff;
  uVar15 = uVar7 >> 0x1d;
  if (uVar7 >> 0x1d == 0) {
    uVar2 = 0x15c;
  }
  else if (uVar15 == 1) {
    uVar2 = 0x15d;
  }
  else if (uVar15 == 2) {
    uVar2 = 0x15e;
  }
  else {
    uVar2 = 0x15f;
  }
  if (lVar9 != 0) {
    uVar2 = *(undefined2 *)(lVar9 + 0x12);
  }
  uVar18 = CONCAT22(uVar4,uVar2);
  func_0x000140291d30(param_1,param_2,param_3,param_4,uVar18);
  sVar3 = func_0x0001400695b0(param_1,param_2);
  uVar7 = (uint)param_3;
  uVar15 = (uint)param_2;
  if (sVar3 == 1) {
    uVar4 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
    cVar1 = func_0x000140259d80(uVar4);
    if (cVar1 != '\0') goto LAB_1414ce80f;
    if (((((-1 < param_2) && ((int)uVar15 < *(int *)(param_1 + 0x116bec))) && (-1 < param_3)) &&
        (((int)uVar7 < *(int *)(param_1 + 0x116bf0) && (-1 < (short)(param_4 + 1))))) &&
       ((param_4 + 1 < *(int *)(param_1 + 0x116bf4) &&
        ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
         (lVar10 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                      (uVar13 >> 4) * 8) + 8 + lVar17 * 8), lVar10 != 0)))))) {
      *(undefined2 *)
       (lVar10 + (((ulonglong)(uVar15 & 0xf) + 5) * 0x10 + (ulonglong)(uVar7 & 0xf)) * 2) = 0x20;
    }
  }
  else {
LAB_1414ce80f:
    sVar3 = func_0x0001400695b0(param_1,param_2,param_3,param_4 + 1);
    if (sVar3 == 0x20) {
      uVar4 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
      cVar1 = func_0x000140259d80(uVar4);
      if (cVar1 != '\0') {
        uVar18 = 1;
        func_0x000140291d30(param_1,param_2,param_3,param_4 + 1,1);
      }
    }
  }
  sVar3 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
  iVar16 = (int)param_4;
  if (sVar3 == 1) {
    uVar4 = func_0x0001400695b0(param_1,param_2,param_3,param_4 + -1);
    cVar1 = func_0x000140259d80(uVar4);
    if (cVar1 != '\0') goto LAB_1414ce93a;
    if ((((-1 < param_2) && ((int)uVar15 < *(int *)(param_1 + 0x116bec))) && (-1 < param_3)) &&
       ((((int)uVar7 < *(int *)(param_1 + 0x116bf0) && (-1 < param_4)) &&
        ((iVar16 < *(int *)(param_1 + 0x116bf4) &&
         ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
          (lVar10 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                       (uVar13 >> 4) * 8) + lVar17 * 8), lVar10 != 0)))))))) {
      *(undefined2 *)
       (lVar10 + (((ulonglong)(uVar15 & 0xf) + 5) * 0x10 + (ulonglong)(uVar7 & 0xf)) * 2) = 0x20;
    }
  }
  else {
LAB_1414ce93a:
    sVar3 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
    if (sVar3 == 0x20) {
      uVar4 = func_0x0001400695b0(param_1,param_2,param_3,param_4 + -1);
      cVar1 = func_0x000140259d80(uVar4);
      if (cVar1 != '\0') {
        uVar18 = 1;
        func_0x000140291d30(param_1,param_2,param_3,param_4,1);
      }
    }
  }
  sVar3 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
  if (sVar3 == 0x20) {
    uVar5 = func_0x0001400695b0(param_1,param_2,param_3,param_4 + -1);
    if (uVar5 < 0x165) {
      if ((uVar5 == 0x164) || (uVar5 == 0x53)) {
LAB_1414ce9da:
        if ((((-1 < param_2) &&
             ((((int)uVar15 < *(int *)(param_1 + 0x116bec) && (-1 < param_3)) &&
              ((int)param_3 < *(int *)(param_1 + 0x116bf0))))) &&
            (((-1 < param_4 && (iVar16 < *(int *)(param_1 + 0x116bf4))) &&
             (*(longlong *)(param_1 + 0x116bb8) != 0)))) &&
           (lVar10 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                        (uVar13 >> 4) * 8) + lVar17 * 8), lVar10 != 0)) {
          uVar18 = 0x102;
          FUN_140558d60(lVar10,(int)param_2 & 0xffff000f,(int)param_3 & 0xffff000f,0,0x102);
        }
      }
    }
    else {
      switch(uVar5) {
      case 0x165:
      case 0x166:
      case 0x167:
      case 0x168:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
      case 0x1c1:
      case 0x1c2:
      case 0x1c3:
      case 0x1c4:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1c8:
      case 0x1c9:
      case 0x1ca:
      case 0x1cb:
      case 0x1cc:
      case 0x1cd:
      case 0x1ce:
      case 0x1cf:
      case 0x1d0:
        goto LAB_1414ce9da;
      }
    }
  }
  uVar4 = func_0x0001400695b0(param_1,param_2,param_3,param_4 + 1);
  cVar1 = func_0x00014024ae20(uVar4);
  if (cVar1 == '\0') {
    uVar4 = func_0x0001400695b0(param_1,param_2,param_3);
    cVar1 = func_0x00014024af40(uVar4);
    if (cVar1 != '\0') goto LAB_1414cea89;
  }
  else {
LAB_1414cea89:
    iVar6 = (int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) + -1;
    uVar18 = 0;
    lVar10 = FUN_140a60840(param_1,param_2,param_3,param_4 + 1,0,iVar6);
    if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x10) & 2) != 0)) {
      uVar4 = func_0x0001400695b0(param_1);
      cVar1 = func_0x00014024ae20(uVar4);
      if (cVar1 == '\0') {
        lVar10 = func_0x0001414ea530(param_1,param_2,param_3);
        if (lVar10 != 0) {
          uVar12 = uVar15 & 0x8000000f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
          }
          uVar7 = uVar7 & 0x8000000f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
          }
          *(undefined2 *)(lVar10 + 8 + ((longlong)(int)uVar12 * 0x10 + (longlong)(int)uVar7) * 2) =
               0x20;
        }
      }
      else {
        func_0x000140291d30();
      }
      iVar6 = (int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) + -1;
      FUN_140a608e0(param_1,param_2,param_3,param_4 + 1,0,iVar6);
      func_0x0001414eb200(param_1,param_2,param_3,param_4 + 1);
      func_0x0001400696d0(param_1,param_2,param_3,param_4 + 1,0x80);
      FUN_141455cf0(param_1,param_2);
      func_0x0001400696d0(param_1,param_2,param_3,param_4 + 1,0x100);
      func_0x0001400696d0(param_1,param_2);
      func_0x0001400696d0(param_1,param_2);
      func_0x0001400696d0(param_1,param_2);
      uVar18 = 0x1000;
      func_0x0001400696d0(param_1,param_2);
    }
  }
  iVar8 = (int)(*(longlong *)(param_1 + 0x13f80) - *(longlong *)(param_1 + 0x13f78) >> 3) + -1;
  lVar10 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x13f78) + lVar10 * 8);
      if (((((*(uint *)(plVar11 + 2) >> 10 & 1) != 0) && ((short)plVar11[1] == param_2)) &&
          (*(short *)((longlong)plVar11 + 10) == param_3)) &&
         (*(short *)((longlong)plVar11 + 0xc) == param_4)) {
        *(uint *)(plVar11 + 2) = *(uint *)(plVar11 + 2) & 0xfffffbff;
        (**(code **)(*plVar11 + 800))(plVar11,(int)param_5,(int)param_6,(int)param_7,uVar18);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  if (((lVar9 != 0) && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) && (*(short *)(lVar9 + 6) != -1)) {
    uVar12 = CONCAT31((int3)((uint)iVar6 >> 8),1);
    uVar7 = 0xffffffff;
    plVar11 = (longlong *)
              FUN_140cb2200(*(short *)(lVar9 + 6),*(undefined2 *)(lVar9 + 8),
                            *(undefined2 *)(lVar9 + 10),*(undefined4 *)(lVar9 + 0xc),0xffffffff,
                            uVar12);
    (**(code **)(*plVar11 + 0x328))(plVar11,1);
    FUN_140cd5210(plVar11,0,0,0,uVar7 & 0xffffff00,uVar12 & 0xffffff00,0);
    (**(code **)(*plVar11 + 800))(plVar11,(int)param_5,(int)param_6,(int)param_7);
    (**(code **)(*plVar11 + 0x4a8))(plVar11,1);
  }
  if ((((-1 < param_2) && ((int)uVar15 < *(int *)(param_1 + 0x116bec))) &&
      ((-1 < param_3 &&
       ((((int)param_3 < *(int *)(param_1 + 0x116bf0) && (-1 < param_4)) &&
        (iVar16 < *(int *)(param_1 + 0x116bf4))))))) &&
     ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
      (lVar17 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                   (uVar13 >> 4) * 8) + lVar17 * 8), lVar17 != 0)))) {
    FUN_14055c0a0(lVar17,(int)param_2 & 0xffff000f,(int)param_3 & 0xffff000f);
  }
  func_0x0001400696d0(param_1,param_2,param_3,param_4,0x80);
  FUN_141455cf0(param_1,param_2);
  func_0x0001400696d0(param_1,param_2,param_3,param_4,0x100);
  func_0x0001400696d0(param_1,param_2);
  func_0x0001400696d0(param_1,param_2);
  func_0x0001400696d0(param_1,param_2);
  uVar18 = 0x1000;
  func_0x0001400696d0(param_1,param_2);
  if ((lVar9 != 0) &&
     (((sVar3 = func_0x0001400695b0(param_1,param_2), sVar3 == 1 || (sVar3 == 0x20)) ||
      ((sVar3 == 0x23 || (sVar3 == 0x2a)))))) {
    sVar3 = func_0x0001400695b0(param_1,param_2,param_3,param_4 + -1,uVar18);
    if (sVar3 == 0x1eb) {
LAB_1414ceedc:
      lVar17 = FUN_140a60840(param_1,param_2,param_3,param_4 + -1,0,
                             (int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150)
                                  >> 3) + -1);
      if (lVar17 != 0) {
        *(undefined2 *)(lVar9 + 6) = *(undefined2 *)(lVar17 + 6);
        *(undefined2 *)(lVar9 + 8) = *(undefined2 *)(lVar17 + 8);
        *(undefined2 *)(lVar9 + 10) = *(undefined2 *)(lVar17 + 10);
        *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)(lVar17 + 0xc);
      }
      *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) | 2;
      func_0x000140291d30(param_1);
      return;
    }
    uVar4 = func_0x0001400695b0(param_1,param_2,param_3);
    cVar1 = func_0x0001402c7160(uVar4);
    if (cVar1 != '\0') {
      uVar4 = func_0x0001400695b0(param_1,param_2,param_3);
      cVar1 = func_0x00014024ae20(uVar4);
      if (cVar1 != '\0') goto LAB_1414ceedc;
    }
  }
  FUN_140a608e0(param_1,param_2,param_3,param_4,0,
                (int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) + -1);
  return;
}

