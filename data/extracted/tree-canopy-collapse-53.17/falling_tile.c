/* Actual Ghidra output; researcher-assigned name. VA 0x1414cb0a0..0x1414cc06c; see image.txt for input identity. */

void falling_tile(longlong param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort param_6,short param_7)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  byte bVar20;
  longlong lVar21;
  short sVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  short sVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uStackX_10;
  undefined4 in_stack_ffffffffffffff58;
  undefined2 uVar33;
  undefined4 uVar32;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 uVar34;
  undefined2 uVar35;
  short sStack_80;
  undefined8 *puStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  
  uVar1 = param_5;
  uVar33 = (undefined2)((uint)in_stack_ffffffffffffff58 >> 0x10);
  uVar35 = (undefined2)((uint)in_stack_ffffffffffffff60 >> 0x10);
  uStackX_10 = CONCAT22(uStackX_10._2_2_,param_2);
  uVar11 = uStackX_10;
  uVar28 = (ulonglong)(short)param_5;
  uVar31 = (ulonglong)(short)param_3;
  uVar16 = (ulonglong)(short)param_2;
  uVar25 = (ulonglong)(short)param_4;
  sVar6 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
  uVar26 = (uint)(short)param_6;
  lVar21 = (longlong)param_7;
  puStack_68 = (undefined8 *)0x0;
  sStack_80 = 0;
  uStack_60 = 0;
  uVar7 = func_0x0001400695b0(param_1,param_5,param_6);
  uVar23 = (ulonglong)uVar7;
  sVar9 = 0;
  uVar12 = (uint)(short)param_3;
  uVar15 = (uint)(short)param_2;
  uVar30 = (uint)(short)param_3;
  iVar24 = (int)(short)param_4;
  uStackX_10._0_1_ = (byte)param_2;
  if (((((short)param_2 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)uVar15)) ||
      ((short)param_3 < 0)) ||
     (((*(int *)(param_1 + 0x116bf0) <= (int)uVar30 || ((short)param_4 < 0)) ||
      (*(int *)(param_1 + 0x116bf4) <= iVar24)))) {
LAB_1414cb1f8:
    uStack_58 = uVar11;
    bVar20 = (byte)uStackX_10;
  }
  else {
    if ((*(longlong *)(param_1 + 0x116bb8) == 0) ||
       (lVar14 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x116bb8) + (ulonglong)(param_2 >> 4) * 8) +
                    (ulonglong)(param_3 >> 4) * 8) + uVar25 * 8), lVar14 == 0)) goto LAB_1414cb1f8;
    uVar27 = *(uint *)(lVar14 + 0x2a0 +
                      ((ulonglong)(uVar15 & 0xf) * 0x10 + (ulonglong)(uVar30 & 0xf)) * 4);
    bVar3 = (byte)uVar27 & 1;
    uStack_58 = uVar27 & 0x200000;
    bVar20 = bVar3 + 2;
    if ((uVar27 & 2) == 0) {
      bVar20 = bVar3;
    }
    if ((uVar27 & 4) != 0) {
      bVar20 = bVar20 + 4;
    }
  }
  uVar27 = (uint)(short)param_5;
  if ((((((short)param_5 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)uVar27)) ||
       ((short)param_6 < 0)) ||
      ((*(int *)(param_1 + 0x116bf0) <= (int)uVar26 || ((short)lVar21 < 0)))) ||
     (*(int *)(param_1 + 0x116bf4) <= (int)lVar21)) {
LAB_1414cb2df:
    uStack_5c = uVar11;
    bVar3 = (byte)uStackX_10;
  }
  else {
    if ((*(longlong *)(param_1 + 0x116bb8) == 0) ||
       (lVar21 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x116bb8) + (ulonglong)(param_5 >> 4) * 8) +
                    (ulonglong)(param_6 >> 4) * 8) + lVar21 * 8), lVar21 == 0)) goto LAB_1414cb2df;
    uVar11 = *(uint *)(lVar21 + 0x2a0 +
                      ((ulonglong)(uVar27 & 0xf) * 0x10 + (ulonglong)(uVar26 & 0xf)) * 4);
    bVar4 = (byte)uVar11 & 1;
    uStack_5c = uVar11 & 0x200000;
    bVar3 = bVar4 + 2;
    if ((uVar11 & 2) == 0) {
      bVar3 = bVar4;
    }
    if ((uVar11 & 4) != 0) {
      bVar3 = bVar3 + 4;
    }
  }
  cVar5 = func_0x00014024b500(sVar6);
  if ((((cVar5 != '\0') || (sVar6 == 0x22)) || ((ushort)(sVar6 - 0x184U) < 2)) || (sVar6 == 0xe3)) {
    iVar10 = FUN_14014f7a0(param_1,param_2,param_3,param_4);
    if (iVar10 < 0) {
LAB_1414cb3cd:
      uVar11 = FUN_140ece790();
      uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar17 = uVar11 >> 0x1d;
      if (uVar11 >> 0x1d == 0) {
        uVar8 = 0x14c;
      }
      else if (uVar17 == 1) {
        uVar8 = 0x14d;
      }
      else if (uVar17 == 2) {
        uVar8 = 0x14e;
      }
      else {
        uVar8 = 0x14f;
      }
    }
    else {
      if ((ulonglong)(*(longlong *)(param_1 + 0x11b3e0) - *(longlong *)(param_1 + 0x11b3d8) >> 3) <=
          (ulonglong)(longlong)iVar10) goto LAB_1414cb3cd;
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x11b3d8) + (longlong)iVar10 * 8);
      if ((*(int *)(lVar21 + 0x40) < 2) || ((*(byte *)(*(longlong *)(lVar21 + 0x38) + 1) & 8) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1414cb3cd;
      uVar11 = FUN_140ece790();
      uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar17 = uVar11 >> 0x1d;
      if (uVar11 >> 0x1d == 0) {
        uVar8 = 0x15c;
      }
      else if (uVar17 == 1) {
        uVar8 = 0x15d;
      }
      else if (uVar17 == 2) {
        uVar8 = 0x15e;
      }
      else {
        uVar8 = 0x15f;
      }
    }
    uVar32 = CONCAT22(uVar33,uVar8);
    func_0x000140291d30(param_1,param_2,param_3,param_4,uVar32);
    uVar33 = (undefined2)((uint)uVar32 >> 0x10);
    sVar6 = func_0x0001400695b0(param_1,param_2);
    uVar23 = (ulonglong)uVar7;
  }
  sVar29 = 0xe3;
  sVar22 = (short)uVar23;
  cVar5 = func_0x00014024b500(uVar23 & 0xffff);
  if (((cVar5 != '\0') || (sVar22 == 0x22)) ||
     (((ushort)(sVar22 - 0x184U) < 2 || (sVar22 == sVar29)))) {
    iVar10 = FUN_14014f7a0(param_1,param_5,param_6);
    if (iVar10 < 0) {
LAB_1414cb52c:
      uVar11 = FUN_140ece790();
      uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar17 = uVar11 >> 0x1d;
      if (uVar11 >> 0x1d == 0) {
        uVar8 = 0x14c;
      }
      else if (uVar17 == 1) {
        uVar8 = 0x14d;
      }
      else if (uVar17 == 2) {
        uVar8 = 0x14e;
      }
      else {
        uVar8 = 0x14f;
      }
    }
    else {
      if ((ulonglong)(*(longlong *)(param_1 + 0x11b3e0) - *(longlong *)(param_1 + 0x11b3d8) >> 3) <=
          (ulonglong)(longlong)iVar10) goto LAB_1414cb52c;
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x11b3d8) + (longlong)iVar10 * 8);
      if ((*(int *)(lVar21 + 0x40) < 2) || ((*(byte *)(*(longlong *)(lVar21 + 0x38) + 1) & 8) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1414cb52c;
      uVar11 = FUN_140ece790();
      uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar17 = uVar11 >> 0x1d;
      if (uVar11 >> 0x1d == 0) {
        uVar8 = 0x15c;
      }
      else if (uVar17 == 1) {
        uVar8 = 0x15d;
      }
      else if (uVar17 == 2) {
        uVar8 = 0x15e;
      }
      else {
        uVar8 = 0x15f;
      }
    }
    uVar32 = CONCAT22(uVar33,uVar8);
    func_0x000140291d30(param_1,param_5,param_6,param_7,uVar32);
    uVar33 = (undefined2)((uint)uVar32 >> 0x10);
    uVar7 = func_0x0001400695b0(param_1,param_5);
  }
  param_5 = uVar7;
  cVar5 = FUN_1414c51d0(param_1,param_2,param_3,param_4);
  if (cVar5 != '\0') {
    uVar34 = CONCAT22(uVar35,param_3);
    uVar32 = CONCAT22(uVar33,param_2);
    uVar7 = param_4;
    tile_variant(param_1,param_2,param_3);
    sVar6 = func_0x0001400695b0(param_1,param_2,param_3,param_4,uVar32,uVar34,uVar7);
    uVar35 = (undefined2)((uint)uVar34 >> 0x10);
    func_0x0001414eb200(param_1,param_2,param_3);
    func_0x0001400696d0(param_1,param_2,param_3,param_4,0x80);
    FUN_141455cf0(param_1,param_2);
    func_0x0001400696d0(param_1,param_2,param_3,param_4,0x100);
    func_0x0001400696d0(param_1,param_2);
    func_0x0001400696d0(param_1,param_2);
    func_0x0001400696d0(param_1,param_2);
    uVar33 = 0;
    func_0x0001400696d0(param_1,param_2);
  }
  cVar5 = FUN_1414c51d0(param_1,uVar1,param_6,param_7);
  if (cVar5 != '\0') {
    uVar34 = CONCAT22(uVar35,param_6);
    uVar32 = CONCAT22(uVar33,uVar1);
    sVar29 = param_7;
    tile_variant(param_1,uVar1,param_6);
    param_5 = func_0x0001400695b0(param_1,uVar1,param_6,param_7,uVar32,uVar34,sVar29);
    uVar33 = (undefined2)((uint)uVar32 >> 0x10);
  }
  cVar5 = func_0x000140259d80(sVar6);
  if ((cVar5 != '\0') || (cVar5 = func_0x0001402c6ff0(sVar6), cVar5 != '\0')) {
    cVar5 = func_0x00014028c900(sVar6);
    if (cVar5 == '\0') {
      cVar5 = func_0x00014028cbb0(sVar6);
      if (cVar5 == '\0') {
        cVar5 = func_0x00014028cd40(sVar6);
        if (cVar5 == '\0') {
          cVar5 = func_0x00014024af40(sVar6);
          if (cVar5 == '\0') {
            iVar10 = FUN_14014f7a0(param_1,param_2,param_3,param_4);
            if (-1 < iVar10) {
              if ((ulonglong)(longlong)iVar10 <
                  (ulonglong)
                  (*(longlong *)(param_1 + 0x11b3e0) - *(longlong *)(param_1 + 0x11b3d8) >> 3)) {
                lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x11b3d8) + (longlong)iVar10 * 8);
                if ((*(int *)(lVar21 + 0x40) < 2) ||
                   ((*(byte *)(*(longlong *)(lVar21 + 0x38) + 1) & 8) == 0)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  uVar11 = FUN_140ece790();
                  uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                  uVar17 = uVar11 >> 0x1d;
                  if (uVar11 >> 0x1d == 0) {
                    sVar6 = 0x15c;
                  }
                  else if (uVar17 == 1) {
                    sVar6 = 0x15d;
                  }
                  else if (uVar17 == 2) {
                    sVar6 = 0x15e;
                  }
                  else {
                    sVar6 = 0x15f;
                  }
                  goto LAB_1414cb960;
                }
              }
            }
            uVar11 = FUN_140ece790();
            uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) *
                              0x7fffffff;
            uVar17 = uVar11 >> 0x1d;
            if (uVar11 >> 0x1d == 0) {
              sVar6 = 0x14c;
            }
            else if (uVar17 == 1) {
              sVar6 = 0x14d;
            }
            else if (uVar17 == 2) {
              sVar6 = 0x14e;
            }
            else {
              sVar6 = 0x14f;
            }
          }
          else {
            sVar6 = 0xff;
          }
        }
        else {
          uVar11 = FUN_140ece790();
          uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
          uVar17 = uVar11 >> 0x1d;
          if (uVar11 >> 0x1d == 0) {
            sVar6 = 0x1b5;
          }
          else if (uVar17 == 1) {
            sVar6 = 0x1b6;
          }
          else if (uVar17 == 2) {
            sVar6 = 0x1b7;
          }
          else {
            sVar6 = 0x1b8;
          }
        }
      }
      else {
        uVar11 = FUN_140ece790();
        uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
        uVar17 = uVar11 >> 0x1d;
        if (uVar11 >> 0x1d == 0) {
          sVar6 = 0x154;
        }
        else if (uVar17 == 1) {
          sVar6 = 0x155;
        }
        else if (uVar17 == 2) {
          sVar6 = 0x156;
        }
        else {
          sVar6 = 0x157;
        }
      }
    }
    else {
      uVar11 = FUN_140ece790();
      uVar11 = uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar17 = uVar11 >> 0x1d;
      if (uVar11 >> 0x1d == 0) {
        sVar6 = 0x150;
      }
      else if (uVar17 == 1) {
        sVar6 = 0x151;
      }
      else if (uVar17 == 2) {
        sVar6 = 0x152;
      }
      else {
        sVar6 = 0x153;
      }
    }
  }
LAB_1414cb960:
  iVar10 = FUN_1414caa60(param_1,param_2,param_3,param_4);
  if (iVar10 != -1) {
    uVar32 = CONCAT22(uVar33,0x20);
    func_0x000140291d30(param_1,param_2,param_3,param_4,uVar32);
    uVar33 = (undefined2)((uint)uVar32 >> 0x10);
    cVar5 = func_0x00014024af40(sVar6);
    if ((cVar5 != '\0') && (lVar21 = func_0x0001414ea530(param_1,param_2), lVar21 != 0)) {
      uVar11 = uVar15 & 0x8000000f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
      }
      uVar17 = uVar12 & 0x8000000f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
      }
      lVar14 = (longlong)(int)uVar17 + (longlong)(int)uVar11 * 0x10;
      sStack_80 = *(short *)(lVar21 + 8 + lVar14 * 2);
      uStack_60 = (uint)*(byte *)(lVar14 + 0x208 + lVar21) << 0x15;
      *(undefined2 *)(lVar21 + 8 + lVar14 * 2) = 0x20;
    }
    cVar5 = func_0x00014024af40(param_5);
    if (cVar5 != '\0') {
      lVar21 = func_0x0001414ea530(param_1,uVar1,param_6,param_7);
      if (lVar21 != 0) {
        uVar11 = uVar27 & 0x8000000f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
        }
        uVar17 = uVar26 & 0x8000000f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
        }
        lVar14 = (longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar17;
        sVar9 = *(short *)(lVar21 + 8 + lVar14 * 2);
        *(undefined2 *)(lVar21 + 8 + lVar14 * 2) = 0x20;
      }
      uVar32 = CONCAT22(uVar33,0x20);
      func_0x000140291d30(param_1,param_2,param_3,param_4,uVar32);
      uVar33 = (undefined2)((uint)uVar32 >> 0x10);
    }
    if (((param_5 == 0x23) ||
        ((((ushort)(param_5 - 0x103) < 5 && ((0x1bU >> ((ushort)(param_5 - 0x103) & 0x1f) & 1) != 0)
          ) || (sVar9 == 0x23)))) ||
       (((ushort)(sVar9 - 0x103U) < 5 && ((0x1bU >> ((ushort)(sVar9 - 0x103U) & 0x1f) & 1) != 0))))
    {
      if ((short)param_2 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x116bec) <= (int)uVar15) {
        return;
      }
      if ((short)param_3 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x116bf0) <= (int)uVar12) {
        return;
      }
      if ((short)param_4 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x116bf4) <= iVar24) {
        return;
      }
      if (*(longlong *)(param_1 + 0x116bb8) == 0) {
        return;
      }
      lVar21 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar16 >> 4) * 8) +
                  (uVar31 >> 4) * 8) + uVar25 * 8);
      if (lVar21 == 0) {
        return;
      }
      bVar20 = 0;
      uVar1 = param_2;
      uVar11 = 0;
    }
    else {
      func_0x000140291d30(param_1,uVar1,param_6,param_7,CONCAT22(uVar33,sVar6));
      if (((-1 < (short)param_2) && ((int)uVar15 < *(int *)(param_1 + 0x116bec))) &&
         ((-1 < (short)param_3 &&
          ((((int)uVar30 < *(int *)(param_1 + 0x116bf0) && (-1 < (short)param_4)) &&
           (iVar24 < *(int *)(param_1 + 0x116bf4))))))) {
        plStack_50 = (longlong *)(param_1 + 0x116bb8);
        if ((*plStack_50 != 0) &&
           (lVar21 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*plStack_50 + (ulonglong)(param_2 >> 4) * 8) +
                        (ulonglong)(param_3 >> 4) * 8) + uVar25 * 8), lVar21 != 0)) {
          uVar7 = 1 << ((byte)uStackX_10 & 0xf);
          lVar14 = *(longlong *)(lVar21 + 8);
          lStack_48 = CONCAT44(lStack_48._4_4_,(uint)uVar7);
          if (*(longlong *)(lVar21 + 0x10) - lVar14 >> 3 != 0) {
            uVar16 = 0;
            do {
              sVar9 = (**(code **)**(undefined8 **)(lVar14 + uVar16 * 8))();
              if ((sVar9 == 0) &&
                 (lVar14 = *(longlong *)(*(longlong *)(lVar21 + 8) + uVar16 * 8),
                 (*(ushort *)(lVar14 + 0xc + (ulonglong)(uVar30 & 0xf) * 2) & uVar7) != 0)) {
                FUN_1414c8860(param_1,uVar1,param_6,param_7,*(undefined4 *)(lVar14 + 8),
                              *(undefined4 *)(lVar14 + 0x2c));
              }
              lVar14 = *(longlong *)(lVar21 + 8);
              sVar9 = (short)puStack_68 + 1;
              puStack_68 = (undefined8 *)CONCAT62((int6)((ulonglong)puStack_68 >> 0x10),sVar9);
              uVar16 = (ulonglong)sVar9;
            } while (uVar16 < (ulonglong)(*(longlong *)(lVar21 + 0x10) - lVar14 >> 3));
            uVar16 = (ulonglong)param_2;
            uVar31 = (ulonglong)param_3;
            uVar25 = (ulonglong)param_4;
            uVar26 = (uint)param_6;
          }
        }
      }
      plVar19 = (longlong *)(param_1 + 0x116bb8);
      bVar2 = false;
      plStack_50 = plVar19;
      cVar5 = func_0x00014024af40(sVar6);
      sVar9 = (short)uVar26;
      if (cVar5 != '\0') {
        lStack_48 = ((longlong)uVar28 >> 4) * 8;
        lVar21 = ((longlong)sVar9 >> 4) * 8;
        if (*(longlong *)
             ((longlong)param_7 * 8 + *(longlong *)(*(longlong *)(lStack_48 + *plVar19) + lVar21))
            != 0) {
          puVar13 = (undefined8 *)func_0x0001414ea530(param_1,uVar1,uVar26 & 0xffff,param_7);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)FUN_1415530e0(0x308);
            *puVar13 = &UNK_141672590;
            puVar18 = puVar13 + 1;
            for (lVar14 = 0x100; lVar14 != 0; lVar14 = lVar14 + -1) {
              *(undefined2 *)puVar18 = 0x20;
              puVar18 = (undefined8 *)((longlong)puVar18 + 2);
            }
            puStack_68 = puVar13;
            func_0x000141554566(puVar13 + 0x41,0,0x100);
            lVar21 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lStack_48 + *plStack_50) + lVar21) +
                      (longlong)param_7 * 8);
            puVar18 = *(undefined8 **)(lVar21 + 0x10);
            if (puVar18 == *(undefined8 **)(lVar21 + 0x18)) {
              puStack_68 = puVar13;
              FUN_1400bc360(lVar21 + 8,puVar18,&puStack_68);
            }
            else {
              *puVar18 = puVar13;
              *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 8;
              puStack_68 = puVar13;
            }
          }
          if ((((sStack_80 == 1) || (sStack_80 == 0x20)) || (sStack_80 == 0x23)) ||
             (sStack_80 == 0x2a)) {
            uVar12 = uVar27 & 0x8000000f;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
            }
            uVar11 = (int)sVar9 & 0x8000000f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
            }
            *(ushort *)
             ((longlong)puVar13 + ((longlong)(int)uVar12 * 0x10 + (longlong)(int)uVar11) * 2 + 8) =
                 param_5;
          }
          else {
            uVar12 = uVar27 & 0x8000000f;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
            }
            uVar11 = (int)sVar9 & 0x8000000f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
            }
            lVar21 = (longlong)(int)uVar12 * 0x10 + (longlong)(int)uVar11;
            *(short *)((longlong)puVar13 + lVar21 * 2 + 8) = sStack_80;
            *(char *)(lVar21 + 0x208 + (longlong)puVar13) = (char)(uStack_60 >> 0x15);
          }
          cVar5 = func_0x00014028cd40(sVar6);
          bVar2 = false;
          if (cVar5 != '\0') {
            bVar2 = true;
          }
        }
      }
      cVar5 = func_0x00014028cd40(sVar6);
      uVar7 = (ushort)uVar16;
      sVar29 = (short)uVar31;
      sVar6 = (short)uVar25;
      if (((cVar5 != '\0') || (bVar2)) &&
         (lVar21 = func_0x0001414ea4b0(param_1,uVar16 & 0xffff,uVar31 & 0xffff,uVar25 & 0xffff),
         lVar21 != 0)) {
        FUN_1414c8860(param_1,uVar16 & 0xffff,uVar31 & 0xffff,uVar25 & 0xffff,
                      *(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0x2c));
      }
      if (((-1 < (short)uVar7) && ((int)(short)uVar7 < *(int *)(param_1 + 0x116bec))) &&
         (((-1 < sVar29 &&
           ((((int)sVar29 < *(int *)(param_1 + 0x116bf0) && (-1 < sVar6)) &&
            ((int)sVar6 < *(int *)(param_1 + 0x116bf4))))) &&
          ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
           (lVar21 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x116bb8) +
                          ((ulonglong)(longlong)(short)uVar7 >> 4) * 8) +
                        ((ulonglong)(longlong)sVar29 >> 4) * 8) + (longlong)sVar6 * 8), lVar21 != 0)
           ))))) {
        FUN_14054eab0(lVar21,uVar7 & 0xf,(int)sVar29 & 0xffff000f,bVar3,uStack_5c);
      }
      if ((short)uVar1 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x116bec) <= (int)uVar27) {
        return;
      }
      if (sVar9 < 0) {
        return;
      }
      uVar12 = (uint)sVar9;
      if (*(int *)(param_1 + 0x116bf0) <= (int)uVar12) {
        return;
      }
      if (param_7 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x116bf4) <= (int)param_7) {
        return;
      }
      if (*(longlong *)(param_1 + 0x116bb8) == 0) {
        return;
      }
      lVar21 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (uVar28 >> 4) * 8) +
                  ((ulonglong)(longlong)sVar9 >> 4) * 8) + (longlong)param_7 * 8);
      uVar11 = uStack_58;
      if (lVar21 == 0) {
        return;
      }
    }
    FUN_14054eab0(lVar21,uVar1 & 0xf,uVar12 & 0xffff000f,bVar20,uVar11);
  }
  return;
}

