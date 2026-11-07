
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dcd130(undefined8 param_1,short param_2,undefined8 param_3,ushort param_4,short param_5,
                  short param_6,undefined8 param_7)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  short sVar15;
  short sVar16;
  ulonglong uVar17;
  short sVar18;
  short sVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  short sVar26;
  short sVar27;
  longlong lVar28;
  ulonglong uVar29;
  int iStackX_8;
  short sStackX_10;
  short sStackX_18;
  short sStackX_20;
  uint in_stack_ffffffffffffff78;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  int iStack_6c;
  longlong lStack_60;
  
  sStackX_20 = -30000;
  lVar12 = FUN_1413ffaf0(param_1,param_4,param_5,param_6);
  if ((lVar12 == 0) || (lVar28 = *(longlong *)(lVar12 + 0x40), lVar28 == 0)) {
    sStackX_18 = param_5;
    sStack_78 = param_5;
    sStack_74 = param_5;
    sStack_76 = param_5;
    sVar19 = param_5;
  }
  else {
    iVar11 = *(int *)(lVar28 + 0x2c);
    sStackX_20 = *(short *)(lVar12 + 4) - (short)(iVar11 / 2);
    sStackX_18 = *(short *)(lVar12 + 6) - (short)(*(int *)(lVar28 + 0x30) / 2);
    sStack_78 = (short)(iVar11 + -1) + sStackX_20;
    sVar19 = (short)*(int *)(lVar28 + 0x30) + -1 + sStackX_18;
    sStack_74 = *(short *)(lVar12 + 8);
    sStack_76 = sStack_74 + -1 + *(short *)(lVar28 + 0x28);
    sStackX_10 = 0;
    if (0 < iVar11) {
      iStack_6c = 0;
      lVar23 = _DAT_1424ec8f8;
      lVar25 = _DAT_1424e80a8;
      sVar26 = sStackX_20;
      do {
        sVar27 = *(short *)(lVar12 + 6) - (short)(*(int *)(lVar28 + 0x30) / 2);
        sVar15 = 0;
        if (0 < *(int *)(lVar28 + 0x30)) {
          iVar11 = 0;
          do {
            sVar18 = *(short *)(lVar28 + 0x28) + -1 + *(short *)(lVar12 + 8);
            sVar16 = *(short *)(lVar28 + 0x28) + -1;
            if (-1 < sVar16) {
              lVar28 = (longlong)sVar16 << 3;
              do {
                uVar1 = *(ushort *)
                         (*(longlong *)(**(longlong **)(lVar12 + 0x40) + lVar28) +
                         (longlong)
                         (iVar11 * *(int *)((longlong)*(longlong **)(lVar12 + 0x40) + 0x2c) +
                         iStack_6c) * 2);
                if ((uVar1 != 0) && (uVar1 != 0x80)) {
                  if ((uVar1 & 1) == 0) {
                    if ((uVar1 & 0x10) == 0) goto LAB_140dcd5b4;
                    if (((((sVar26 < 0) || (_DAT_1424e80dc <= sVar26)) || (sVar27 < 0)) ||
                        ((_DAT_1424e80e0 <= sVar27 || (sVar18 < 0)))) || (_DAT_1424e80e4 <= sVar18))
                    {
LAB_140dcd39c:
                      uVar9 = 0;
                    }
                    else {
                      if ((lVar25 == 0) ||
                         (lVar4 = *(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(lVar25 + (longlong)(sVar26 >> 4) * 8) +
                                     (longlong)(sVar27 >> 4) * 8) + (longlong)sVar18 * 8),
                         lVar4 == 0)) goto LAB_140dcd39c;
                      uVar10 = (int)sVar26 & 0x8000000f;
                      if ((int)uVar10 < 0) {
                        uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
                      }
                      uVar20 = (int)sVar27 & 0x8000000f;
                      if ((int)uVar20 < 0) {
                        uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                      }
                      uVar9 = *(undefined2 *)
                               (lVar4 + (((longlong)(int)uVar10 + 5) * 0x10 + (longlong)(int)uVar20)
                                        * 2);
                    }
                    switch(uVar9) {
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 0xb:
                    case 0xc:
                    case 0xd:
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x17:
                    case 0x1f:
                    case 0x21:
                    case 0x30:
                    case 0x40:
                    case 0x42:
                    case 0x44:
                    case 0x45:
                    case 0x4d:
                    case 0x4e:
                    case 0x54:
                    case 0x55:
                    case 0x56:
                    case 0x57:
                    case 0x58:
                    case 0xab:
                    case 0xe2:
                      break;
                    default:
                      goto LAB_140dcd5b4;
                    }
                  }
                  sVar2 = *(short *)(lVar12 + 2);
                  if ((-1 < sVar2) &&
                     ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_1424ec900 - lVar23 >> 3))) {
                    lVar4 = *(longlong *)(lVar23 + (longlong)sVar2 * 8);
                    sVar2 = *(short *)(lVar4 + 0x2ba);
                    uVar3 = *(undefined4 *)(lVar4 + 0x2d0);
                    if (sVar2 != -1) {
                      FUN_140aa3870(5,0xffffffff,0xffffffff,0xffffffff,
                                    in_stack_ffffffffffffff78 & 0xffffff00);
                      FUN_140aa3870(5,0xffffffff,sVar2,uVar3,1);
                      in_stack_ffffffffffffff78 = 0xffffffff;
                      plVar14 = (longlong *)FUN_140c9a510(5,0xffffffff,sVar2,uVar3,0xffffffff,1);
                      (**(code **)(*plVar14 + 0x328))(plVar14,1);
                      FUN_140c634f0(plVar14,2);
                      *(short *)(plVar14 + 1) = sVar26;
                      *(short *)((longlong)plVar14 + 10) = sVar27;
                      *(short *)((longlong)plVar14 + 0xc) = sVar18;
                      puVar13 = (undefined8 *)FUN_141539690(0xa0);
                      FUN_140ea7230(puVar13,0);
                      *puVar13 = &UNK_141658990;
                      *(short *)(puVar13 + 4) = sVar26;
                      *(short *)((longlong)puVar13 + 0x22) = sVar27;
                      *(short *)((longlong)puVar13 + 0x24) = sVar18;
                      *(short *)((longlong)puVar13 + 0x32) = sVar26;
                      *(short *)((longlong)puVar13 + 0x34) = sVar27;
                      *(short *)((longlong)puVar13 + 0x36) = sVar18;
                      puVar13[0x13] = plVar14;
                      *(short *)((longlong)puVar13 + 0x2c) = sVar26;
                      *(short *)((longlong)puVar13 + 0x2e) = sVar27;
                      *(short *)(puVar13 + 6) = sVar18;
                      FUN_140072660(plVar14,0xc,*(undefined4 *)(puVar13 + 2));
                      puVar13[3] = param_7;
                      *(uint *)(puVar13 + 9) = *(uint *)(puVar13 + 9) | 0xb15;
                      *(undefined8 *)((longlong)puVar13 + 0x74) = 0;
                      *(undefined4 *)((longlong)puVar13 + 0x7c) = 0;
                      *(int *)(puVar13 + 0x10) = (short)(param_4 - (short)param_1) * 10000;
                      *(int *)((longlong)puVar13 + 0x84) = (short)(param_5 - param_2) * 10000;
                      puVar13[0x11] = 0;
                      puVar13[0x12] = 0;
                      uVar10 = FUN_140eb68b0();
                      *(uint *)(puVar13 + 10) =
                           (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / 0xba2e8bb;
                      *(uint *)(plVar14 + 2) = *(uint *)(plVar14 + 2) | 2;
                      *(uint *)(puVar13 + 9) = *(uint *)(puVar13 + 9) | 1;
                      (**(code **)(*plVar14 + 0x4a8))(plVar14,1);
                      lVar23 = _DAT_1424ec8f8;
                      lVar25 = _DAT_1424e80a8;
                    }
                  }
                }
LAB_140dcd5b4:
                sVar18 = sVar18 + -1;
                lVar28 = lVar28 + -8;
                sVar16 = sVar16 + -1;
              } while (-1 < sVar16);
            }
            sVar27 = sVar27 + 1;
            sVar15 = sVar15 + 1;
            lVar28 = *(longlong *)(lVar12 + 0x40);
            iVar11 = (int)sVar15;
          } while (iVar11 < *(int *)(lVar28 + 0x30));
        }
        sVar26 = sVar26 + 1;
        sStackX_10 = sStackX_10 + 1;
        iStack_6c = (int)sStackX_10;
      } while (iStack_6c < *(int *)(lVar28 + 0x2c));
    }
  }
  uVar10 = CONCAT31((int3)(in_stack_ffffffffffffff78 >> 8),1);
  FUN_1414c45a0(0x1423d14f0,param_4,param_5,param_6,uVar10,0);
  if ((_DAT_14189c298 == 0) && (iStackX_8 = 0, _DAT_1423d1800 - _DAT_1423d17f8 >> 3 != 0)) {
    lStack_60 = 0;
    lVar12 = _DAT_1423d17f8;
    do {
      uVar21 = 0;
      lVar28 = *(longlong *)(*(longlong *)(lStack_60 + lVar12) + 0x13a0);
      lVar23 = *(longlong *)(*(longlong *)(lStack_60 + lVar12) + 0x1398);
      uVar17 = uVar21;
      if (lVar28 - lVar23 >> 3 != 0) {
        do {
          psVar5 = *(short **)(lVar23 + uVar21 * 8);
          if ((*psVar5 == 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(lStack_60 + lVar12) + 0x1398) + uVar21 * 8) +
                        2) == 2)) {
            piVar6 = (int *)(psVar5 + 0x1e);
            *piVar6 = *piVar6 + -1;
            lVar12 = _DAT_1423d17f8;
            goto LAB_140dcd85a;
          }
          uVar20 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar20;
          uVar21 = uVar21 + 1;
        } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(lVar28 - lVar23 >> 3));
      }
      uVar17 = 0;
      uVar21 = _DAT_142393528 - (longlong)_DAT_142393520 >> 3;
      if (uVar21 != 0) {
        puVar13 = _DAT_142393520;
        uVar29 = uVar17;
        do {
          uVar22 = 0;
          piVar6 = (int *)*puVar13;
          if (*piVar6 == *(int *)(*(longlong *)(lStack_60 + lVar12) + 4)) {
            lVar28 = *(longlong *)(piVar6 + 0x30);
            uVar24 = uVar22;
            if (*(longlong *)(piVar6 + 0x32) - lVar28 >> 3 != 0) {
              do {
                lVar23 = uVar22 * 8;
                if ((**(short **)(lVar23 + lVar28) == 0) &&
                   (*(short *)(*(longlong *)(lVar23 + lVar28) + 2) == 2)) {
                  piVar6 = (int *)(*(longlong *)
                                    (*(longlong *)(_DAT_142393520[uVar29] + 0xc0) + lVar23) + 0x3c);
                  *piVar6 = *piVar6 + -1;
                  lVar12 = _DAT_1423d17f8;
                  goto LAB_140dcd85a;
                }
                uVar20 = (int)uVar24 + 1;
                uVar22 = uVar22 + 1;
                uVar24 = (ulonglong)uVar20;
              } while ((ulonglong)(longlong)(int)uVar20 <
                       (ulonglong)(*(longlong *)(piVar6 + 0x32) - lVar28 >> 3));
            }
          }
          uVar20 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar20;
          uVar29 = uVar29 + 1;
          puVar13 = puVar13 + 1;
        } while ((ulonglong)(longlong)(int)uVar20 < uVar21);
      }
LAB_140dcd85a:
      iStackX_8 = iStackX_8 + 1;
      lStack_60 = lStack_60 + 8;
    } while ((ulonglong)(longlong)iStackX_8 < (ulonglong)(_DAT_1423d1800 - lVar12 >> 3));
  }
  FUN_14103fa70(0x1423d14f0,param_4,param_5,param_6,uVar10 & 0xffffff00);
  FUN_14145d7f0(0x1423d14f0,param_4,param_5,param_6);
  if (sStackX_20 != -30000) {
    for (; sVar26 = sStackX_18, sStackX_20 <= sStack_78; sStackX_20 = sStackX_20 + 1) {
      for (; sVar26 <= sVar19; sVar26 = sVar26 + 1) {
        FUN_1414b3050(0x1423d14f0,sStackX_20,sVar26,1);
        sVar15 = sStack_74;
        while (sVar15 <= sStack_76) {
          sVar15 = sVar15 + 1;
          FUN_140a81160(sStackX_20,sVar26,sVar15);
        }
      }
    }
  }
  iVar8 = _DAT_1424e80e4;
  iVar7 = _DAT_1424e80e0;
  iVar11 = _DAT_1424e80dc;
  lVar12 = _DAT_1424e80a8;
  uVar10 = (uint)param_4;
  if ((_DAT_14189c298 == 0) &&
     ((((((short)param_4 < 0 || (_DAT_1424e80dc <= (short)param_4)) || (param_5 < 0)) ||
       (((_DAT_1424e80e0 <= param_5 || (param_6 < 0)) ||
        ((_DAT_1424e80e4 <= param_6 ||
         ((_DAT_1424e80a8 == 0 ||
          (lVar28 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (_DAT_1424e80a8 + ((ulonglong)(longlong)(short)param_4 >> 4) * 8) +
                       ((ulonglong)(longlong)param_5 >> 4) * 8) + (longlong)param_6 * 8),
          lVar28 == 0)))))))) ||
      ((*(uint *)(lVar28 + 0x2a0 +
                 ((ulonglong)(uVar10 & 0xf) * 0x10 + (ulonglong)((int)param_5 & 0xf)) * 4) & 0x8000)
       == 0)))) {
    _DAT_142391430 = _DAT_142391430 + 1;
  }
  plVar14 = (longlong *)FUN_1414a2970(0x1423d14f0,uVar10,param_5,param_6);
  if (plVar14 == (longlong *)0x0) {
    if ((((((short)param_4 < 0) || (iVar11 <= (short)param_4)) || (param_5 < 0)) ||
        (((iVar7 <= param_5 || (param_6 < 0)) ||
         (((iVar8 <= param_6 ||
           ((lVar12 == 0 ||
            (lVar12 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(lVar12 + ((ulonglong)(longlong)(short)param_4 >> 4) * 8) +
                         ((ulonglong)(longlong)param_5 >> 4) * 8) + (longlong)param_6 * 8),
            lVar12 == 0)))) ||
          ((*(uint *)(lVar12 + 0x2a0 +
                     ((ulonglong)(uVar10 & 0xf) * 0x10 + (ulonglong)((int)param_5 & 0xf)) * 4) &
           0x8000) == 0)))))) && (_DAT_142391434 = _DAT_142391434 + 100, 100000 < _DAT_142391434)) {
      _DAT_142391434 = 100000;
    }
  }
  else {
    lVar12 = (**(code **)(*plVar14 + 0x30))(plVar14);
    if ((lVar12 != 0) &&
       (iVar11 = *(int *)(lVar12 + 0x20) + 100, *(int *)(lVar12 + 0x20) = iVar11, 100000 < iVar11))
    {
      *(undefined4 *)(lVar12 + 0x20) = 100000;
    }
  }
  return;
}

