/* Actual Ghidra output; researcher-assigned name. VA 0x1414cc2c0..0x1414cc840; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjacent_tile(longlong param_1,short param_2,short param_3,char param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint unaff_R12D;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  uint in_stack_ffffffffffffff80;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined2 auStack_58 [2];
  undefined2 auStack_54 [2];
  uint uStack_50;
  longlong lStack_48;
  
  uStack_50 = unaff_R12D & 0xffffff00;
  uVar13 = (ulonglong)param_3;
  uVar16 = *(short *)(param_1 + 0x116bf4) - 1;
  uVar14 = (ulonglong)param_2;
  bVar2 = false;
  if (-1 < (short)uVar16) {
    lStack_48 = (longlong)(short)uVar16 << 3;
    uVar10 = uStack_50;
    do {
      iVar7 = FUN_1414c2dc0(param_1,param_2,param_3,uVar16);
      uVar8 = func_0x00014007f270(param_1,param_2,param_3);
      if ((iVar7 != 0) || (bVar2)) {
        uVar17 = 0x10000;
        func_0x00014014f710(param_1,param_2,param_3);
        uStack_50 = uVar10 & 0xff;
        bVar3 = true;
        uVar10 = uStack_50;
        if (iVar7 - 2U < 2) {
          uStack_50 = 1;
          uVar10 = uStack_50;
        }
      }
      else {
        func_0x000141455b50(param_1,param_2,param_3);
        uVar17 = 0x4000;
        func_0x000141455b50(param_1,param_2);
        bVar3 = false;
      }
      if (((char)uVar10 == '\0') && ((uVar8 >> 0xf & 1) != 0)) {
        uVar17 = 0x8000;
        func_0x00014014f710(param_1,param_2,param_3,uVar16,0x8000);
        if (param_4 != '\0') {
          uVar8 = (uint)param_3;
          uVar15 = (uint)param_2;
          if ((((param_2 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)uVar15)) || (param_3 < 0)) ||
             ((*(int *)(param_1 + 0x116bf0) <= (int)uVar8 ||
              (*(int *)(param_1 + 0x116bf4) <= (int)(uint)uVar16)))) {
LAB_1414cc497:
            if (((-1 < param_2) && ((int)uVar15 < *(int *)(param_1 + 0x116bec))) &&
               ((-1 < param_3 &&
                (((int)uVar8 < *(int *)(param_1 + 0x116bf0) &&
                 ((int)(uint)uVar16 < *(int *)(param_1 + 0x116bf4))))))) {
LAB_1414cc4bb:
              if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                 (puVar1 = *(uint **)(lStack_48 +
                                     *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                                      (uVar13 >> 4) * 8)), puVar1 != (uint *)0x0)) {
                *puVar1 = *puVar1 | 2;
                puVar1 = (uint *)(_DAT_14250df70 + (longlong)(short)puVar1[0x23] * 4);
                *puVar1 = *puVar1 | 5;
              }
            }
          }
          else if (*(longlong *)(param_1 + 0x116bb8) != 0) {
            lVar12 = *(longlong *)
                      (lStack_48 +
                      *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                       (uVar13 >> 4) * 8));
            if (lVar12 != 0) {
              uVar10 = uStack_50;
              if (*(short *)(lVar12 + (((ulonglong)(uVar15 & 0xf) + 0xcd) * 0x10 +
                                      (ulonglong)(uVar8 & 0xf)) * 2) == 0x275b) goto LAB_1414cc6bf;
              goto LAB_1414cc497;
            }
            goto LAB_1414cc4bb;
          }
          in_stack_ffffffffffffff80 = CONCAT22((short)(in_stack_ffffffffffffff80 >> 0x10),uVar16);
          uVar17 = CONCAT22((short)(uVar17 >> 0x10),param_3);
          FUN_14007f300(param_1,auStack_54,auStack_58,param_2,uVar17,in_stack_ffffffffffffff80);
          if (_DAT_1418be238 == 0) {
            sVar6 = FUN_140f93580();
          }
          else {
            sVar6 = FUN_140f93710(*(undefined8 *)(param_1 + 0x11a668),auStack_54[0],auStack_58[0]);
          }
          if (((((-1 < param_2) && ((int)uVar15 < *(int *)(param_1 + 0x116bec))) && (-1 < param_3))
              && (((int)uVar8 < *(int *)(param_1 + 0x116bf0) &&
                  ((int)(uint)uVar16 < *(int *)(param_1 + 0x116bf4))))) &&
             ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
              (lVar12 = *(longlong *)
                         (lStack_48 +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                          (uVar13 >> 4) * 8)), lVar12 != 0)))) {
            iVar7 = sVar6 * 3;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 3;
            }
            iVar9 = (iVar7 >> 2) + 10000;
            iVar7 = 0;
            if (-1 < iVar9) {
              iVar7 = iVar9;
            }
            if (60000 < iVar7) {
              iVar7 = 60000;
            }
            uVar10 = uVar15 & 0x8000000f;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
            }
            uVar11 = uVar8 & 0x8000000f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
            }
            *(short *)(lVar12 + (((longlong)(int)uVar10 + 0xcd) * 0x10 + (longlong)(int)uVar11) * 2)
                 = (short)iVar7;
          }
          cVar4 = func_0x0001402c78e0(param_1,param_2,param_3,uVar16);
          uVar10 = uStack_50;
          if ((('\0' < cVar4) && (-1 < param_2)) &&
             (((int)uVar15 < *(int *)(param_1 + 0x116bec) &&
              ((((-1 < param_3 && ((int)uVar8 < *(int *)(param_1 + 0x116bf0))) &&
                ((int)(uint)uVar16 < *(int *)(param_1 + 0x116bf4))) &&
               ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
                (lVar12 = *(longlong *)
                           (lStack_48 +
                           *(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar14 >> 4) * 8) +
                            (uVar13 >> 4) * 8)), lVar12 != 0)))))))) {
            uVar8 = uVar8 & 0x8000000f;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
            }
            uVar15 = uVar15 & 0x8000000f;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
            }
            FUN_14054e760(lVar12,uVar15 & 0xffff,uVar8 & 0xffff,0);
            uVar10 = uStack_50;
          }
        }
      }
LAB_1414cc6bf:
      if (bVar3) {
        uVar8 = func_0x00014007f270(param_1,param_2,param_3,uVar16,uVar17);
        if ((uVar8 >> 0xf & 1) == 0) {
          if ((char)uVar10 == '\0') {
            uVar17 = 0x4000;
            func_0x000141455b50(param_1,param_2,param_3);
          }
        }
        else {
          uVar17 = 0x4000;
          func_0x00014014f710(param_1,param_2,param_3);
        }
      }
      sVar6 = func_0x0001400695b0(param_1,param_2,param_3,uVar16,uVar17);
      uVar20 = 0;
      uVar19 = 0;
      uVar18 = 0;
      in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffff00;
      uVar17 = uVar17 & 0xffffff00;
      cVar4 = FUN_141460470(param_1,param_2,param_3);
      if ((((cVar4 == '\0') &&
           ((cVar4 = func_0x00014024b500(sVar6), cVar4 == '\0' ||
            (cVar5 = func_0x000141450490(sVar6), cVar5 != '\0')))) &&
          (cVar5 = FUN_1407fa360(param_1,param_2,param_3,uVar16,uVar17,in_stack_ffffffffffffff80,
                                 uVar18,uVar19,uVar20), cVar5 == '\0')) &&
         (bVar2 = true, cVar4 == '\0')) {
        cVar4 = func_0x00014024ae20(sVar6);
        if (cVar4 != '\0') {
          in_stack_ffffffffffffff80 =
               (int)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) - 1;
          lVar12 = FUN_140a60840(param_1,param_2);
          if (lVar12 == 0) {
            sVar6 = 0x20;
          }
          else {
            sVar6 = *(short *)(lVar12 + 0x12);
          }
        }
        if ((((sVar6 != 1) && (sVar6 != 0x20)) && (sVar6 != 0x23)) && (sVar6 != 0x2a)) {
          uVar10 = 1;
          uStack_50 = 1;
        }
      }
      lStack_48 = lStack_48 + -8;
      uVar16 = uVar16 - 1;
    } while (-1 < (short)uVar16);
  }
  return;
}

