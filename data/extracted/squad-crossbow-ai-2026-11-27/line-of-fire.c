/* line traversal, fortification modes and recorded map coordinates | VA [0x140aa8e50, 0x140aa95c9) | Ghidra decompilation */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140aa8e50(ushort param_1,ushort param_2,ushort param_3,short param_4,short param_5,short param_6
             ,char param_7,char param_8,int param_9,char param_10)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ushort uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort uVar18;
  ushort *puVar19;
  ushort uVar20;
  ushort uVar21;
  short sVar22;
  ulonglong uVar23;
  short sVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  ushort auStackX_8 [4];
  ushort auStackX_10 [4];
  ushort auStackX_18 [8];
  ushort auStack_94 [2];
  uint uStack_90;
  ushort auStack_8c [2];
  ushort auStack_88 [2];
  ushort auStack_84 [2];
  ushort auStack_80 [2];
  ushort auStack_7c [2];
  ushort *puStack_78;
  ushort uStack_70;
  ushort *puStack_68;
  ushort *puStack_60;
  ushort *puStack_58;
  ushort *puStack_50;
  
  auStackX_18[0] = param_3;
  auStackX_10[0] = param_2;
  auStackX_8[0] = param_1;
  auStack_94[0] = param_4 - param_1;
  auStack_84[0] = param_5 - param_2;
  auStack_8c[0] = param_6 - param_3;
  uVar26 = (ulonglong)param_3;
  uVar27 = (ulonglong)param_2;
  uVar23 = (ulonglong)param_1;
  auStack_80[0] = 0xffff;
  if ((short)auStack_94[0] < 0) {
    auStack_94[0] = -auStack_94[0];
    auStack_88[0] = auStack_80[0];
  }
  else {
    auStack_88[0] = 1;
  }
  if ((short)auStack_84[0] < 0) {
    auStack_84[0] = -auStack_84[0];
    auStack_7c[0] = auStack_80[0];
  }
  else {
    auStack_7c[0] = 1;
  }
  if ((short)auStack_8c[0] < 0) {
    auStack_8c[0] = -auStack_8c[0];
  }
  else {
    auStack_80[0] = 1;
  }
  puStack_68 = auStack_7c;
  puStack_50 = auStackX_18;
  puStack_78 = auStackX_8;
  puStack_60 = auStackX_10;
  puStack_58 = auStack_80;
  puVar16 = auStack_8c;
  puVar14 = auStack_94;
  puVar19 = auStack_88;
  puVar15 = auStack_84;
  if (((short)auStack_94[0] < (short)auStack_8c[0]) && ((short)auStack_84[0] < (short)auStack_8c[0])
     ) {
    puStack_50 = auStackX_8;
    puStack_58 = auStack_88;
    puStack_78 = auStackX_18;
    puVar16 = auStack_94;
    puVar14 = auStack_8c;
    puVar19 = auStack_80;
    uVar20 = auStack_8c[0];
  }
  else {
    uVar20 = auStack_94[0];
    if ((short)auStack_94[0] < (short)auStack_84[0]) {
      puStack_60 = auStackX_8;
      puStack_68 = auStack_88;
      puVar15 = auStack_94;
      puStack_78 = auStackX_10;
      puVar14 = auStack_84;
      puVar19 = auStack_7c;
      uVar20 = auStack_84[0];
    }
  }
  sVar22 = 0;
  _DAT_142153e80 = 0;
  uVar1 = uVar20 + 1;
  if (param_8 == '\0') {
    uVar1 = uVar20;
  }
  uVar20 = (ushort)param_9;
  if (param_9 < 0) {
    uVar20 = uVar1;
  }
  if (0 < (short)uVar20) {
    uVar17 = (uint)(short)*puVar14;
    uVar1 = *puVar16;
    uVar2 = *puVar19;
    uStack_90 = uVar17;
    uStack_70 = *puVar15;
    puVar15 = puStack_78;
    sVar24 = sVar22;
    do {
      lVar12 = (longlong)_DAT_142153e80;
      sVar22 = sVar22 + uStack_70;
      _DAT_142153e80 = _DAT_142153e80 + 1;
      *(short *)(lVar12 * 0xc + 0x141bd5a80) = (short)uVar23;
      *(short *)(lVar12 * 0xc + 0x141bd5a82) = (short)uVar27;
      *(short *)(lVar12 * 0xc + 0x141bd5a84) = (short)uVar26;
      if ((int)uStack_90 < sVar22 * 2) {
        sVar22 = sVar22 - (short)uVar17;
        *puStack_60 = *puStack_60 + *puStack_68;
      }
      sVar24 = sVar24 + uVar1;
      if ((int)uStack_90 < sVar24 * 2) {
        sVar24 = sVar24 - (short)uVar17;
        *puStack_50 = *puStack_50 + *puStack_58;
      }
      *puVar15 = *puVar15 + uVar2;
      uVar5 = auStackX_18[0];
      uVar4 = auStackX_10[0];
      uVar8 = auStackX_8[0];
      uVar20 = uVar20 - 1;
      uVar26 = (ulonglong)(short)auStackX_18[0];
      uVar27 = (ulonglong)(short)auStackX_10[0];
      uVar23 = (ulonglong)(short)auStackX_8[0];
      uVar10 = (uint)(short)auStackX_8[0];
      uVar11 = (uint)(short)auStackX_10[0];
      iVar25 = (int)(short)auStackX_18[0];
      if (param_9 == -1) {
        if ((short)auStackX_8[0] < 0) {
          return 1;
        }
        if ((short)auStackX_10[0] < 0) {
          return 1;
        }
        if ((short)auStackX_18[0] < 0) {
          return 1;
        }
        if (_DAT_14250a55c <= (int)uVar10) {
          return 1;
        }
        if (_DAT_14250a560 <= (int)uVar11) {
          return 1;
        }
        if (_DAT_14250a564 <= iVar25) {
          return 1;
        }
      }
      if (param_7 != '\0') {
        if (param_10 < '\x01') {
          if ((short)auStackX_8[0] < 0) {
            return 0;
          }
          if (_DAT_14250a55c <= (int)uVar10) {
            return 0;
          }
          if ((short)auStackX_10[0] < 0) {
            return 0;
          }
          if (_DAT_14250a560 <= (int)uVar11) {
            return 0;
          }
          if ((short)auStackX_18[0] < 0) {
            return 0;
          }
          if (_DAT_14250a564 <= iVar25) {
            return 0;
          }
          cVar6 = FUN_1414c3aa0(0x1423f3970,auStackX_8[0],auStackX_10[0],auStackX_18[0]);
          if (cVar6 == '\0') {
            return 0;
          }
          uVar9 = func_0x000140069640(0x1423f3970,uVar8);
          if ((uVar9 & 7) == 6) {
            return 0;
          }
          if (((uVar9 & 7) == 7) && (cVar6 = FUN_1405c17f0(0x142410388,uVar8,uVar4), cVar6 != '\0'))
          {
            return 0;
          }
        }
        else {
          cVar6 = FUN_1414e2d40(0x1423f3970,auStackX_8[0],auStackX_10[0],auStackX_18[0]);
          if (cVar6 == '\0') {
            return 0;
          }
        }
        lVar12 = (longlong)(_DAT_142153e80 + -1);
        uVar3 = *(ushort *)(lVar12 * 0xc + 0x141bd5a84);
        puVar15 = puStack_78;
        if (uVar5 != uVar3) {
          uVar13 = *(ushort *)(lVar12 * 0xc + 0x141bd5a80);
          uVar18 = *(ushort *)(lVar12 * 0xc + 0x141bd5a82);
          uVar21 = uVar5;
          if ((uVar13 == uVar8) && (uVar18 == uVar4)) {
            uVar21 = uVar3;
            if ((short)uVar3 < (short)uVar5) {
              uVar21 = uVar5;
              uVar18 = uVar4;
              uVar13 = uVar8;
            }
LAB_140aa9228:
            cVar6 = FUN_141460470(0x1423f3970,uVar13,uVar18,uVar21,1,0,1,0,0);
            if (cVar6 == '\0') {
              return 0;
            }
          }
          else {
            if ((short)uVar3 < (short)uVar5) {
              cVar6 = FUN_141460470(0x1423f3970,uVar8,uVar4,uVar5,1,0,1,0,0);
              if (cVar6 != '\0') {
                if (param_10 < '\x01') {
                  if ((((-1 < (short)uVar8) && ((int)uVar10 < _DAT_14250a55c)) &&
                      (-1 < (short)uVar4)) &&
                     ((((int)uVar11 < _DAT_14250a560 && (-1 < (short)uVar3)) &&
                      (((short)uVar3 < _DAT_14250a564 &&
                       (cVar6 = FUN_1414c3aa0(0x1423f3970,uVar8,uVar4,uVar3), cVar6 != '\0')))))) {
                    uVar17 = func_0x000140069640(0x1423f3970,uVar8);
                    if (((uVar17 & 7) != 6) &&
                       (((uVar17 & 7) != 7 ||
                        (cVar6 = FUN_1405c17f0(0x142410388,uVar8,uVar4), cVar6 == '\0')))) {
                      bVar7 = 0;
                      goto LAB_140aa9424;
                    }
                  }
                  bVar7 = 1;
                }
                else {
                  bVar7 = FUN_1414e2d40(0x1423f3970,uVar8,uVar4,uVar3);
                  bVar7 = bVar7 ^ 1;
                }
LAB_140aa9424:
                if (bVar7 == 0) goto LAB_140aa9235;
              }
              goto LAB_140aa9228;
            }
            cVar6 = FUN_141460470(0x1423f3970,uVar8,uVar4,uVar3,1,0,1,0,0);
            if (cVar6 == '\0') {
              cVar6 = FUN_141460470(0x1423f3970,uVar13,uVar18,uVar3,1,0,1,0,0);
              if (cVar6 == '\0') {
                return 0;
              }
              if (param_10 < '\x01') {
                if (((((-1 < (short)uVar13) && ((short)uVar13 < _DAT_14250a55c)) &&
                     (-1 < (short)uVar18)) &&
                    (((short)uVar18 < _DAT_14250a560 && (-1 < (short)uVar5)))) &&
                   ((iVar25 < _DAT_14250a564 &&
                    (cVar6 = FUN_1414c3aa0(0x1423f3970,uVar13,uVar18,uVar5), cVar6 != '\0')))) {
                  uVar17 = func_0x000140069640(0x1423f3970,uVar13);
                  if (((uVar17 & 7) != 6) &&
                     (((uVar17 & 7) != 7 ||
                      (cVar6 = FUN_1405c17f0(0x142410388,uVar13,uVar18), cVar6 == '\0')))) {
                    bVar7 = 0;
                    goto LAB_140aa954a;
                  }
                }
                bVar7 = 1;
              }
              else {
                bVar7 = FUN_1414e2d40(0x1423f3970,uVar13,uVar18,uVar5);
                bVar7 = bVar7 ^ 1;
              }
LAB_140aa954a:
              if (bVar7 != 0) {
                return 0;
              }
            }
          }
LAB_140aa9235:
          uVar17 = uStack_90 & 0xffff;
          puVar15 = puStack_78;
        }
      }
      if ((param_10 == '\x01') && ((int)(short)uVar20 < (int)(uStack_90 - 1))) {
        if (((((short)uVar8 < 0) ||
             (((_DAT_14250a55c <= (int)uVar10 || ((short)uVar4 < 0)) ||
              (_DAT_14250a560 <= (int)uVar11)))) ||
            ((((short)uVar5 < 0 || (_DAT_14250a564 <= iVar25)) || (_DAT_14250a528 == 0)))) ||
           (lVar12 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(_DAT_14250a528 + ((longlong)uVar23 >> 4) * 8) +
                        ((longlong)uVar27 >> 4) * 8) + uVar26 * 8), lVar12 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar10 = uVar10 & 0x8000000f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
          }
          uVar11 = uVar11 & 0x8000000f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
          }
          uVar8 = *(ushort *)
                   (lVar12 + (((longlong)(int)uVar10 + 5) * 0x10 + (longlong)(int)uVar11) * 2);
        }
        if (uVar8 < 0x165) {
          if (uVar8 == 0x164) {
            return 0;
          }
          if (uVar8 == 0x41) {
            return 0;
          }
          if (uVar8 == 0x142) {
            return 0;
          }
          bVar28 = uVar8 == 0x143;
        }
        else {
          if (uVar8 == 0x1b0) {
            return 0;
          }
          bVar28 = uVar8 == 0x1ea;
        }
        if (bVar28) {
          return 0;
        }
      }
    } while (0 < (short)uVar20);
  }
  return 1;
}
