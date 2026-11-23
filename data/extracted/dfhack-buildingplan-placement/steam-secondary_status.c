/* 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16 140acab50..140acce1c */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acab50(undefined8 *******param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  char cVar15;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  short sVar16;
  int *piVar17;
  undefined8 ******ppppppuVar18;
  char *pcVar19;
  undefined8 *******pppppppuVar20;
  short sVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 *******pppppppuVar24;
  int *piVar25;
  ulonglong uVar26;
  int *piVar27;
  ulonglong uVar28;
  short sVar29;
  ushort uVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  ushort uVar36;
  int *piVar37;
  ushort uVar38;
  short sVar39;
  int iVar40;
  bool bVar41;
  bool bVar42;
  undefined1 auStack_1f8 [32];
  ushort *puStack_1d8;
  ushort *puStack_1d0;
  ushort *puStack_1c8;
  int iStack_1c0;
  ushort uStack_1b8;
  undefined1 uStack_1b0;
  ushort uStack_1a8;
  ushort auStack_1a4 [2];
  ushort auStack_1a0 [2];
  ushort auStack_19c [2];
  ushort uStack_198;
  undefined8 *******pppppppuStack_190;
  ushort uStack_188;
  ushort auStack_184 [2];
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  char cStack_170;
  undefined2 uStack_16e;
  uint uStack_16c;
  int *piStack_168;
  int *piStack_160;
  int *piStack_158;
  int iStack_150;
  char acStack_14c [4];
  longlong lStack_148;
  uint uStack_140;
  undefined8 *******pppppppuStack_138;
  int *piStack_130;
  int *piStack_128;
  int *piStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 *******pppppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 ******ppppppuStack_a8;
  ulonglong uStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418be040 ^ (ulonglong)auStack_1f8;
  pppppppuStack_138 = param_1;
  FUN_1400bcfe0(param_1 + 10);
  FUN_1400bcfe0(param_1 + 0xd);
  sVar29 = *(short *)((longlong)param_1 + 0x3c);
  puStack_1c8 = auStack_184;
  puStack_1d0 = auStack_1a4;
  puStack_1d8 = auStack_1a0;
  FUN_140aa1da0(*(undefined2 *)(param_1 + 7),sVar29,*(undefined4 *)(param_1 + 8),auStack_19c);
  uVar6 = auStack_184[0];
  uVar22 = *(uint *)(param_1 + 7);
  uStack_188 = auStack_184[0];
  iVar40 = (int)(short)auStack_1a4[0];
  auStack_184[0] = auStack_1a4[0];
  uVar33 = (uint)(short)auStack_1a0[0];
  uStack_198 = auStack_1a0[0];
  if (((uVar22 == 0x14) ||
      (((uVar22 < 0x2a && ((0x20000280000U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0)) ||
       (uVar22 == 0x32)))) && ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0)) {
    *(short *)(*param_1[1] + 0x2e) =
         (short)((int)(((short)auStack_19c[0] + 1 + iVar40) * ((short)uVar6 + 1 + uVar33)) >> 2) + 1
    ;
    sVar29 = *(short *)((longlong)param_1 + 0x3c);
  }
  if ((*(int *)(param_1 + 7) == 0x22) && ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0)) {
    *(ushort *)(*param_1[1] + 0x2e) =
         (auStack_19c[0] + 1 + auStack_1a4[0]) * (uVar6 + 1 + auStack_1a0[0]);
    sVar29 = *(short *)((longlong)param_1 + 0x3c);
  }
  if (((*(int *)(param_1 + 7) == 0x17) && (sVar29 == 1)) &&
     ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0)) {
    *(undefined2 *)(*param_1[1] + 0x2e) = 0;
    if ((*(byte *)((longlong)param_1 + 0xf9c) & 1) != 0) {
      *(short *)(*param_1[1] + 0x2e) = *(short *)(*param_1[1] + 0x2e) + 1;
    }
    if ((*(byte *)((longlong)param_1 + 0xf9c) & 2) != 0) {
      *(short *)(*param_1[1] + 0x2e) = *(short *)(*param_1[1] + 0x2e) + 1;
    }
    if ((*(byte *)((longlong)param_1 + 0xf9c) & 4) != 0) {
      *(short *)(*param_1[1] + 0x2e) = *(short *)(*param_1[1] + 0x2e) + 1;
    }
    if ((*(byte *)((longlong)param_1 + 0xf9c) & 0x20) != 0) {
      *(short *)(*param_1[1] + 0x2e) = *(short *)(*param_1[1] + 0x2e) + 1;
    }
    if (*(short *)(*param_1[1] + 0x2e) == 0) {
      *(undefined2 *)(*param_1[1] + 0x2e) = 1;
    }
  }
  uStack_140 = uStack_140 & 0xffffff00;
  uVar22 = *(uint *)(param_1 + 7);
  if ((uVar22 == 0x14) || ((uVar22 < 0x1f && ((0x40200010U >> (uVar22 & 0x1f) & 1) != 0)))) {
    uVar26 = CONCAT71((uint7)(byte)(uVar6 >> 8),1);
    uStack_140 = (uint)uVar26;
    sVar29 = (short)_DAT_1418be310 - auStack_19c[0];
    if ((int)sVar29 <= (int)(_DAT_1418be310 + iVar40)) {
      uVar22 = _DAT_1418be310;
      iVar7 = _DAT_1418be314;
      do {
        sVar21 = (short)iVar7 - (short)uVar33;
        if ((int)sVar21 <= iVar7 + (short)uVar6) {
          do {
            puStack_1d8 = (ushort *)CONCAT71(puStack_1d8._1_7_,*(int *)(param_1 + 7) == 0x14);
            iVar7 = FUN_1414c9d70(0x1423f3970,sVar29,sVar21,_DAT_1418be318);
            if ((iVar7 == 0) && ((*(int *)(param_1 + 7) == 0x14 || (*(int *)(param_1 + 7) == 0x15)))
               ) {
              uVar26 = uVar26 & 0xffffffffffffff00;
            }
            iVar7 = FUN_1414ca6d0(0x1423f3970,sVar29,sVar21,_DAT_1418be318);
            if ((iVar7 == 0) && (uVar26 = uVar26 & 0xff, *(int *)(param_1 + 7) == 4)) {
              uVar26 = 0;
            }
            sVar21 = sVar21 + 1;
          } while ((int)sVar21 <= _DAT_1418be314 + (short)uVar6);
          uStack_140 = (uint)uVar26;
          uVar33 = (uint)uStack_198;
          uVar22 = _DAT_1418be310;
          iVar7 = _DAT_1418be314;
        }
        sVar29 = sVar29 + 1;
      } while ((int)sVar29 <= (int)(iVar40 + uVar22));
      if (((char)uVar26 == '\0') && (cVar5 = FUN_1408d98c0(), cVar5 != '\0')) {
        FUN_1400bcf10(param_1 + 10,"Disconnected");
      }
    }
  }
  uVar38 = auStack_184[0];
  uVar36 = uStack_188;
  uVar6 = auStack_19c[0];
  if (((*(int *)(param_1 + 7) == 0x17) && (*(short *)((longlong)param_1 + 0x3c) == 1)) &&
     ((DAT_1418c341c & 0x27) == 0)) {
    FUN_1400bcf10(param_1 + 10,"Need trigger type");
  }
  uStack_16e = (ushort)uStack_16e._1_1_ << 8;
  cStack_170 = '\0';
  func_0x000140136540(&lStack_118);
  uStack_1b0 = '\0' < DAT_14250a508;
  uStack_1b8 = _DAT_1418be318;
  iStack_1c0 = CONCAT22(iStack_1c0._2_2_,(short)_DAT_1418be314 + uVar36);
  puStack_1c8 = (ushort *)CONCAT62(puStack_1c8._2_6_,(short)_DAT_1418be310 + uVar38);
  puStack_1d0 = (ushort *)CONCAT62(puStack_1d0._2_6_,(short)_DAT_1418be314 - uStack_198);
  puStack_1d8 = (ushort *)CONCAT62(puStack_1d8._2_6_,(short)_DAT_1418be310 - uVar6);
  FUN_1405c4730(0x142410388,&lStack_118,*(undefined2 *)(param_1 + 7));
  if (lStack_110 - lStack_118 >> 1 != 0) {
    uStack_16e = CONCAT11(uStack_16e._1_1_,1);
    iVar40 = (int)(_DAT_142410d70 - _DAT_142410d68 >> 3) + -1;
    lVar23 = (longlong)iVar40;
    if (-1 < iVar40) {
      do {
        plVar1 = *(longlong **)(_DAT_142410d68 + lVar23 * 8);
        cVar5 = (**(code **)(*plVar1 + 200))(plVar1,&lStack_118);
        if (cVar5 != '\0') {
          cStack_170 = '\x01';
          break;
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
    }
  }
  uVar30 = uStack_198 + 1 + uVar36;
  uVar6 = uVar6 + 1 + uVar38;
  if (0 < (short)uVar6) {
    pppppppuVar24 = param_1 + 0x10;
    uVar26 = (ulonglong)uVar6;
    do {
      if (0 < (short)uVar30) {
        func_0x000141554566(pppppppuVar24,0,(ulonglong)uVar30 << 2);
      }
      pppppppuVar24 = (undefined8 *******)((longlong)pppppppuVar24 + 0x7c);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  uStack_16c = uStack_16c & 0xffffff00;
  uVar26 = (ulonglong)_DAT_1418be318;
  auStack_1a4[0] = _DAT_1418be318;
  auStack_1a0[0] = (short)_DAT_1418be310 - auStack_19c[0];
  iVar40 = (int)(short)uVar38;
  uVar22 = (uint)(short)auStack_1a0[0];
  uVar6 = uStack_198;
  uVar30 = auStack_19c[0];
  iStack_150 = iVar40;
  if ((int)uVar22 <= (int)(iVar40 + _DAT_1418be310)) {
    iVar7 = (int)(short)uVar36;
    iStack_180 = iVar7;
    do {
      uStack_1a8 = (short)_DAT_1418be314 - uVar6;
      uVar33 = (uint)(short)uStack_1a8;
      uVar36 = auStack_1a0[0];
      if ((int)uVar33 <= _DAT_1418be314 + iVar7) {
        iStack_17c = (int)(short)uVar30;
        iStack_178 = (int)(short)uVar6;
        lStack_148._0_4_ = uVar22;
        do {
          iStack_174 = 0;
          puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
          puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
          puStack_1d8 = (ushort *)((ulonglong)puStack_1d8 & 0xffffffff00000000);
          sVar29 = (short)uVar26;
          uVar8 = FUN_140a9b9e0(uVar36,uStack_1a8,uVar26 & 0xffff);
          pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,uVar8);
          iVar40 = 6;
          if ((((((short)uVar36 < 0) || (_DAT_14250a55c <= (int)uVar22)) ||
               (((short)uStack_1a8 < 0 || ((_DAT_14250a560 <= (int)uVar33 || (sVar29 < 0)))))) ||
              (_DAT_14250a564 <= sVar29)) ||
             ((_DAT_14250a528 == 0 ||
              (lVar23 = *(longlong *)
                         (*(longlong *)
                           (*(longlong *)(_DAT_14250a528 + ((longlong)(short)uVar36 >> 4) * 8) +
                           ((longlong)(short)uStack_1a8 >> 4) * 8) + (longlong)sVar29 * 8),
              lVar23 == 0)))) {
LAB_140acb1bf:
            iVar7 = *(int *)(param_1 + 7);
            if ((iVar7 == 0x14) || (iVar7 == 0x15)) {
              puStack_1d8 = (ushort *)CONCAT71(puStack_1d8._1_7_,iVar7 == 0x14);
              iVar7 = FUN_1414c9d70(0x1423f3970,uVar36,uStack_1a8);
              if (iVar7 == 0) goto LAB_140acb288;
              if ((char)uStack_140 == '\0') {
                *(undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)(int)((uVar22 - _DAT_1418be310) + iStack_17c) * 0x1f +
                 (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) = 4;
                goto LAB_140acba59;
              }
              puStack_1d8 = (ushort *)CONCAT71(puStack_1d8._1_7_,*(int *)(param_1 + 7) == 0x14);
              uVar8 = FUN_1414c9d70(0x1423f3970,uVar36,uStack_1a8);
            }
            else {
LAB_140acb288:
              uVar6 = uStack_1a8;
              if ((*(int *)(param_1 + 7) != 4) ||
                 (iVar7 = FUN_1414ca6d0(0x1423f3970,auStack_1a0[0],uStack_1a8),
                 uVar36 = auStack_1a0[0], iVar7 == 0)) {
                uVar6 = uStack_1a8;
                bVar42 = true;
                bVar41 = cStack_170 != '\0';
                if (bVar41) {
                  iStack_174 = 5;
                  puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                  puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                  puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,5);
                  iVar40 = FUN_140a9b9e0(auStack_1a0[0],uStack_1a8,uVar26 & 0xffff);
                }
                uVar22 = *(uint *)(param_1 + 7);
                if ((uVar22 == 0x13) ||
                   ((uVar22 < 0x28 && ((0xac01040000U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0))
                   )) {
                  iStack_174 = 1;
                  puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                  puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                  puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,1);
                  iVar7 = FUN_140a9b9e0(auStack_1a0[0],uVar6,uVar26 & 0xffff);
                  if ((!bVar41) || (iVar40 == 0)) {
                    bVar41 = true;
                    iVar40 = iVar7;
                  }
                }
                uVar22 = (uint)lStack_148;
                uVar6 = auStack_1a4[0];
                bVar4 = false;
                if (*(int *)(param_1 + 7) == 0xd) {
                  if (*(short *)((longlong)param_1 + 0x3c) == 6) {
LAB_140acb3e3:
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = false;
                  if ((*(int *)(param_1 + 7) == 5) &&
                     ((*(short *)((longlong)param_1 + 0x3c) == 4 ||
                      ((ushort)(*(short *)((longlong)param_1 + 0x3c) - 5U) < 2))))
                  goto LAB_140acb3e3;
                }
                iVar7 = *(int *)(param_1 + 8);
                if (iVar7 != -1) {
                  uVar26 = _DAT_142519720 - _DAT_142519718 >> 3;
                  uVar9 = (uint)uVar26;
                  if (uVar9 == 0) {
                    iVar31 = -1;
                    iVar34 = -1;
                  }
                  else {
                    iVar34 = 0;
                    while (0x40 < (int)uVar9) {
                      uVar9 = (uint)(uVar26 >> 1) & 0x7fffffff;
                      iVar31 = uVar9 + iVar34;
                      if (iVar7 < *(int *)(*(longlong *)(_DAT_142519718 + (longlong)iVar31 * 8) +
                                          0x28)) {
                        iVar31 = iVar34;
                      }
                      uVar9 = (int)uVar26 - uVar9;
                      uVar26 = (ulonglong)uVar9;
                      iVar34 = iVar31;
                    }
                    iVar31 = uVar9 + iVar34;
                  }
                  if ((iVar31 != -1) && (iVar34 < iVar31)) {
                    lVar23 = (longlong)iVar34;
                    do {
                      if (iVar7 == *(int *)(*(longlong *)(_DAT_142519718 + lVar23 * 8) + 0x28)) {
                        lVar23 = *(longlong *)(_DAT_142519718 + (longlong)iVar34 * 8);
                        if ((lVar23 != 0) && (*(char *)(lVar23 + 0xbc34) != '\0'))
                        goto LAB_140acb490;
                        break;
                      }
                      iVar34 = iVar34 + 1;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < iVar31);
                  }
                }
                if (bVar4) {
LAB_140acb490:
                  uVar26 = (ulonglong)_DAT_1418be310;
                  if ((((uint)lStack_148 - _DAT_1418be310) + iStack_17c != 1) ||
                     ((uVar33 - _DAT_1418be314) + iStack_178 != 1)) {
                    iStack_174 = 2;
                    puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                    puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                    puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,2);
                    iVar7 = FUN_140a9b9e0(auStack_1a0[0],uStack_1a8,auStack_1a4[0]);
                    if ((bVar41) && (iVar40 != 0)) goto LAB_140acb517;
                    bVar41 = true;
                    uVar26 = (ulonglong)_DAT_1418be310;
                    iVar40 = iVar7;
                  }
                }
                else {
LAB_140acb517:
                  uVar26 = (ulonglong)_DAT_1418be310;
                }
                if (*(int *)(param_1 + 7) == 0x22) {
                  bVar4 = true;
                  if (iVar40 == 0) {
                    puStack_1d8 = (ushort *)CONCAT62(puStack_1d8._2_6_,uVar6);
                    cVar5 = FUN_140ac2e80(CONCAT62((int6)(uVar26 >> 0x10),
                                                   (short)uVar26 - auStack_19c[0]),
                                          auStack_184[0] + (short)uVar26,
                                          (short)_DAT_1418be314 - uStack_198);
                    if (cVar5 == '\0') {
                      uVar26 = (ulonglong)_DAT_1418be310;
                      goto LAB_140acb57b;
                    }
                  }
                  else {
LAB_140acb57b:
                    sVar29 = *(short *)((longlong)param_1 + 0x3c);
                    if (((((sVar29 == 4) || (sVar29 == 2)) || ((ushort)(sVar29 - 7U) < 9)) ||
                        ((*(short *)((longlong)param_1 + 0x3c) == 0x10 ||
                         ((ushort)(*(short *)((longlong)param_1 + 0x3c) - 0x11U) < 9)))) ||
                       (((*(short *)((longlong)param_1 + 0x3c) == 0x1a ||
                         (((ushort)(*(short *)((longlong)param_1 + 0x3c) - 0x1bU) < 9 ||
                          (sVar29 = *(short *)((longlong)param_1 + 0x3c), sVar29 == 0x24)))) ||
                        (sVar29 == 6)))) {
                      iStack_174 = 3;
                      puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,3);
                    }
                    else {
                      if ((sVar29 - 3U & 0xfffd) != 0) goto LAB_140acb647;
                      iStack_174 = 4;
                      puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,4);
                    }
                    puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                    puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                    iVar7 = FUN_140a9b9e0(auStack_1a0[0],uStack_1a8,uVar6);
                    if ((!bVar41) || (iVar40 == 0)) {
                      bVar4 = false;
                      iVar40 = iVar7;
                    }
                  }
                  bVar42 = bVar4;
                  uVar26 = (ulonglong)_DAT_1418be310;
                }
LAB_140acb647:
                uVar9 = (uint)uVar26;
                iVar7 = iStack_17c;
                iVar34 = iStack_178;
                if ((int)pppppppuStack_190 == 0) {
LAB_140acb6bb:
                  iVar40 = *(int *)(param_1 + 7);
                  if (iVar40 == 0x13) {
                    if (DAT_14250a508 == '\0') {
                      iVar40 = -iStack_17c;
joined_r0x000140acb6f5:
                      if (uVar22 == iVar40 + uVar9) {
LAB_140acb704:
                        if ((int)pppppppuStack_190 != 0) {
                          *(undefined4 *)
                           ((longlong)param_1 +
                           ((longlong)(int)((uVar22 - uVar9) + iStack_17c) * 0x1f +
                           (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) = 5;
                          goto LAB_140acb927;
                        }
                      }
                    }
                    else {
                      iVar40 = iStack_150;
                      if (DAT_14250a508 == '\x01') goto joined_r0x000140acb6f5;
                      if (DAT_14250a508 == '\x02') {
                        if (uVar33 != _DAT_1418be314 - iStack_178) goto LAB_140acb78c;
                        goto LAB_140acb704;
                      }
                      if ((DAT_14250a508 == '\x03') && (uVar33 == _DAT_1418be314 + iStack_180))
                      goto LAB_140acb704;
                    }
LAB_140acb78c:
                    if ((uVar22 == iStack_150 + uVar9) && (uVar33 == _DAT_1418be314 + iStack_180)) {
                      puStack_1d8 = (ushort *)CONCAT62(puStack_1d8._2_6_,uVar6);
                      cVar5 = FUN_140ac2e80(CONCAT62((int6)(uVar26 >> 0x10),
                                                     (short)uVar26 - auStack_19c[0]),
                                            auStack_184[0] + (short)uVar26,
                                            (short)_DAT_1418be314 - uStack_198,
                                            uStack_188 + (short)_DAT_1418be314);
                      uVar9 = _DAT_1418be310;
                      if (cVar5 == '\0') {
                        pppppppuStack_190 = (undefined8 *******)FUN_1415530e0(0x20);
                        *pppppppuStack_190 = (undefined8 ******)0x0;
                        pppppppuStack_190[1] = (undefined8 ******)0x0;
                        pppppppuStack_190[2] = (undefined8 ******)0x0;
                        pppppppuStack_190[3] = (undefined8 ******)0xf;
                        *(undefined1 *)pppppppuStack_190 = 0;
                        func_0x000140070bb0(pppppppuStack_190,"Needs walkable perimeter");
                        func_0x0001400bafb0(param_1 + 10,&pppppppuStack_190);
                        uVar9 = _DAT_1418be310;
                      }
                    }
                  }
                  else if (((iVar40 == 0x18) || (iVar40 == 0x12)) ||
                          ((iVar40 == 0x22 && (((int)pppppppuStack_190 != 0 && (bVar42))))))
                  goto LAB_140acb78c;
                  iVar34 = iStack_178;
                  iVar7 = iStack_17c;
                  uVar8 = 0;
                  if (*(uint *)(param_1 + 7) == 0x21) {
                    iVar40 = (uVar33 - _DAT_1418be314) + iStack_178;
                    iVar31 = (uVar22 - uVar9) + iStack_17c;
                    if (DAT_14250a508 == '\0') {
                      if (iVar31 == 0) {
                        bVar42 = iVar40 == 1;
LAB_140acb8ba:
                        if (bVar42) {
LAB_140acb8bc:
                          uVar8 = 1;
                        }
                      }
                    }
                    else if ((DAT_14250a508 == '\x01') || (DAT_14250a508 == '\x02')) {
                      if ((iVar31 == 0) && (iVar40 == 0)) goto LAB_140acb8bc;
                    }
                    else if ((DAT_14250a508 == '\x03') && (iVar31 == 1)) {
                      bVar42 = iVar40 == 0;
                      goto LAB_140acb8ba;
                    }
                    *(undefined4 *)
                     ((longlong)param_1 + ((longlong)iVar40 + 0x20 + (longlong)iVar31 * 0x1f) * 4) =
                         uVar8;
                  }
                  else {
                    iVar40 = (uVar33 - _DAT_1418be314) + iStack_178;
                    iVar31 = (uVar22 - uVar9) + iStack_17c;
                    iStack_1c0 = (int)(short)uVar6;
                    puStack_1c8 = (ushort *)CONCAT44(puStack_1c8._4_4_,_DAT_1418be314 - iStack_178);
                    puStack_1d0 = (ushort *)CONCAT44(puStack_1d0._4_4_,uVar9 - iStack_17c);
                    puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,iVar40);
                    cVar5 = FUN_1405658a0(*(uint *)(param_1 + 7) & 0xffff,
                                          *(undefined2 *)((longlong)param_1 + 0x3c),
                                          *(undefined4 *)(param_1 + 8));
                    *(uint *)(((longlong)iVar31 * 0x1f + (longlong)iVar40) * 4 + 0x80 +
                             (longlong)param_1) = (uint)(cVar5 != '\0');
                    uVar22 = (uint)lStack_148;
                  }
                }
                else if (iStack_174 == 0) {
                  *(int *)((longlong)param_1 +
                          ((longlong)(int)((uVar22 - uVar9) + iStack_17c) * 0x1f +
                          (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) =
                       (int)pppppppuStack_190;
                }
                else {
                  if (iVar40 == 0) goto LAB_140acb6bb;
                  *(int *)((longlong)param_1 +
                          ((longlong)(int)((uVar22 - uVar9) + iStack_17c) * 0x1f +
                          (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) =
                       iVar40;
                }
LAB_140acb927:
                uVar36 = auStack_1a0[0];
                if ((((*(int *)(param_1 + 7) == 4) &&
                     (*(int *)((longlong)param_1 +
                              ((longlong)(int)((uVar22 - _DAT_1418be310) + iVar7) * 0x1f +
                              (longlong)(int)((uVar33 - _DAT_1418be314) + iVar34)) * 4 + 0x80) == 0)
                     ) && (-1 < (short)auStack_1a0[0])) &&
                   ((((int)uVar22 < _DAT_14250a55c && (-1 < (short)uStack_1a8)) &&
                    ((int)uVar33 < _DAT_14250a560)))) {
                  uVar26 = (ulonglong)(short)auStack_1a4[0];
                  if ((-1 < (short)auStack_1a4[0]) && ((short)auStack_1a4[0] < _DAT_14250a564)) {
                    if ((_DAT_14250a528 != 0) &&
                       (lVar23 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)
                                      (_DAT_14250a528 + (longlong)((short)auStack_1a0[0] >> 4) * 8)
                                    + (longlong)((short)uStack_1a8 >> 4) * 8) + uVar26 * 8),
                       lVar23 != 0)) {
                      uVar9 = uVar22 & 0x8000000f;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
                      }
                      uVar33 = uVar33 & 0x8000000f;
                      if ((int)uVar33 < 0) {
                        uVar33 = (uVar33 - 1 | 0xfffffff0) + 1;
                      }
                      if ((*(uint *)(lVar23 + 0x2a0 +
                                    ((longlong)(int)uVar9 * 0x10 + (longlong)(int)uVar33) * 4) &
                          0x8000) != 0) {
                        cVar5 = FUN_1414eb3a0(0x1423f3970,auStack_1a0[0],uStack_1a8,auStack_1a4[0]);
                        uStack_16c = uStack_16c & 0xff;
                        if (cVar5 != '\0') {
                          uStack_16c = 1;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar26 = (ulonglong)auStack_1a4[0];
                }
                goto LAB_140acba59;
              }
              if ((char)uStack_140 == '\0') {
                *(undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)(int)((uVar22 - _DAT_1418be310) + iStack_17c) * 0x1f +
                 (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) = 4;
                goto LAB_140acba59;
              }
              uVar8 = FUN_1414ca6d0(0x1423f3970,auStack_1a0[0],uVar6);
            }
            *(undefined4 *)
             ((longlong)param_1 +
             ((longlong)(int)((uVar22 - _DAT_1418be310) + iStack_17c) * 0x1f +
             (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) = uVar8;
          }
          else {
            uVar9 = uVar22 & 0x8000000f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
            }
            uVar10 = uVar33 & 0x8000000f;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
            }
            if ((((*(uint *)(lVar23 + 0x2a0 +
                            ((longlong)(int)uVar9 * 0x10 + (longlong)(int)uVar10) * 4) & 0x200) == 0
                 ) || (uVar9 = *(uint *)(param_1 + 7), uVar9 == 0x14)) ||
               ((uVar9 < 0x1f && ((0x40200010U >> (uVar9 & 0x1f) & 1) != 0)))) goto LAB_140acb1bf;
            *(undefined4 *)
             ((longlong)param_1 +
             ((longlong)(int)((uVar22 - _DAT_1418be310) + iStack_17c) * 0x1f +
             (longlong)(int)((uVar33 - _DAT_1418be314) + iStack_178)) * 4 + 0x80) = 7;
          }
LAB_140acba59:
          uStack_1a8 = uStack_1a8 + 1;
          uVar33 = (uint)(short)uStack_1a8;
          uVar6 = uStack_198;
          uVar30 = auStack_19c[0];
          iVar7 = iStack_180;
          iVar40 = iStack_150;
        } while ((int)uVar33 <= _DAT_1418be314 + iStack_180);
      }
      auStack_1a0[0] = uVar36 + 1;
      uVar22 = (uint)(short)auStack_1a0[0];
      uVar36 = uStack_188;
      uVar38 = auStack_184[0];
    } while ((int)uVar22 <= (int)(_DAT_1418be310 + iVar40));
  }
  piStack_130 = (int *)0x0;
  piStack_128 = (int *)0x0;
  piVar27 = (int *)0x0;
  piStack_120 = (int *)0x0;
  auStack_1a4[0] = 0;
  iVar40 = (short)uVar38 + 1 + (int)(short)uVar30;
  lStack_148 = CONCAT44(lStack_148._4_4_,iVar40);
  if (0 < iVar40) {
    iStack_150 = (int)(short)uVar36 + (short)uVar6 + 1;
    piVar25 = (int *)0x0;
    piVar37 = (int *)0x0;
    do {
      sVar29 = 0;
      if (0 < iStack_150) {
        lVar23 = (longlong)(short)auStack_1a4[0] * 0x1f;
        do {
          for (piVar11 = piVar37; piVar11 != piVar25; piVar11 = piVar11 + 1) {
            cVar5 = '\x01';
            if (piVar11 < piVar25) {
              cVar5 = -1;
            }
            if (-1 < cVar5) break;
            if (*piVar11 == *(int *)((longlong)param_1 + (sVar29 + lVar23) * 4 + 0x80)) {
              if ((int)((longlong)piVar11 - (longlong)piVar37 >> 2) != -1) goto LAB_140acbe3b;
              break;
            }
          }
          if (piVar25 == piVar27) {
            FUN_14028ae70(&piStack_130,piVar25);
            piVar37 = piStack_130;
          }
          else {
            *piVar25 = *(int *)((longlong)param_1 + ((longlong)sVar29 + 0x20 + lVar23) * 4);
            piStack_128 = piVar25 + 1;
          }
          piVar25 = piStack_128;
          switch(*(undefined4 *)((longlong)param_1 + (sVar29 + lVar23) * 4 + 0x80)) {
          case 5:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x1c;
            pcVar19 = "Needs to be anchored on edge";
            break;
          case 6:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x18;
            pcVar19 = "Blocked at this location";
            break;
          case 7:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x25;
            pcVar19 = "Hidden, cannot build at this location";
            break;
          case 8:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x13;
            pcVar19 = "Needs adjacent wall";
            break;
          case 9:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 7;
            pcVar19 = "Off map";
            break;
          case 10:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x16;
            pcVar19 = "Water at this location";
            break;
          case 0xb:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x1b;
            pcVar19 = "Lava/Magma at this location";
            break;
          case 0xc:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x10;
            pcVar19 = "Building present";
            break;
          case 0xd:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0xe;
            pcVar19 = "Must be inside";
            break;
          case 0xe:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x11;
            pcVar19 = "Too close to edge";
            break;
          case 0xf:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0xf;
            pcVar19 = "Must be outside";
            break;
          case 0x10:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x10;
            pcVar19 = "Needs open space";
            break;
          case 0x11:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x19;
            pcVar19 = "Surrounded by empty space";
            break;
          case 0x12:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x1d;
            pcVar19 = "Cannot build at highest level";
            break;
          case 0x13:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x18;
            pcVar19 = "Must remove construction";
            break;
          case 0x14:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            uVar14 = 0x1c;
            pcVar19 = "Need soil or mud at location";
            break;
          case 0x15:
            pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
            *pppppppuVar24 = (undefined8 ******)0x0;
            pppppppuVar24[1] = (undefined8 ******)0x0;
            pppppppuVar24[2] = (undefined8 ******)0x0;
            pppppppuVar24[3] = (undefined8 ******)0xf;
            *(undefined1 *)pppppppuVar24 = 0;
            pppppppuStack_190 = pppppppuVar24;
            FUN_140070f00(pppppppuVar24,"Need soil at location",0x15);
            ppppppuVar18 = param_1[0xb];
            if (ppppppuVar18 == param_1[0xc]) goto code_r0x000140acbe27;
            goto code_r0x000140acbc31;
          default:
            goto LAB_140acbe3b;
          }
          *pppppppuVar24 = (undefined8 ******)0x0;
          pppppppuVar24[1] = (undefined8 ******)0x0;
          pppppppuVar24[2] = (undefined8 ******)0x0;
          pppppppuVar24[3] = (undefined8 ******)0xf;
          *(undefined1 *)pppppppuVar24 = 0;
          pppppppuStack_190 = pppppppuVar24;
          FUN_140070f00(pppppppuVar24,pcVar19,uVar14);
          ppppppuVar18 = param_1[0xb];
          if (ppppppuVar18 == param_1[0xc]) {
code_r0x000140acbe27:
            FUN_1400bc360(param_1 + 10,ppppppuVar18,&pppppppuStack_190);
          }
          else {
code_r0x000140acbc31:
            *ppppppuVar18 = pppppppuVar24;
            param_1[0xb] = param_1[0xb] + 1;
          }
LAB_140acbe3b:
          sVar29 = sVar29 + 1;
          piVar27 = piStack_120;
        } while (sVar29 < iStack_150);
        iVar40 = (uint)lStack_148;
      }
      auStack_1a4[0] = auStack_1a4[0] + 1;
    } while ((short)auStack_1a4[0] < iVar40);
  }
  if (((longlong)param_1[0xb] - (longlong)param_1[10] >> 3 != 0) && ((char)uStack_16e != '\0')) {
    pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
    *pppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar24[1] = (undefined8 ******)0x0;
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuVar24 = 0;
    pppppppuStack_190 = pppppppuVar24;
    FUN_140070f00(pppppppuVar24,"Needs ground or near machine",0x1c);
    ppppppuVar18 = param_1[0xb];
    if (ppppppuVar18 == param_1[0xc]) {
      FUN_1400bc360(param_1 + 10,ppppppuVar18,&pppppppuStack_190);
    }
    else {
      *ppppppuVar18 = pppppppuVar24;
      param_1[0xb] = param_1[0xb] + 1;
    }
  }
  if ((*(int *)(param_1 + 7) == 4) && ((char)uStack_16c == '\0')) {
    ppppppuVar12 = (undefined8 ******)FUN_1415530e0(0x20);
    *ppppppuVar12 = (undefined8 *****)0x0;
    ppppppuVar12[1] = (undefined8 *****)0x0;
    ppppppuVar12[2] = (undefined8 *****)0x0;
    ppppppuVar12[3] = (undefined8 *****)0xf;
    *(undefined1 *)ppppppuVar12 = 0;
    pppppppuStack_190 = (undefined8 *******)ppppppuVar12;
    FUN_140070f00(ppppppuVar12,"No mud/soil for farm",0x14);
    ppppppuVar18 = param_1[0xe];
    if (ppppppuVar18 == param_1[0xf]) {
      FUN_1400bc360(param_1 + 0xd,ppppppuVar18,&pppppppuStack_190);
    }
    else {
      *ppppppuVar18 = ppppppuVar12;
      param_1[0xe] = param_1[0xe] + 1;
    }
    pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
    *pppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar24[1] = (undefined8 ******)0x0;
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuVar24 = 0;
    pppppppuStack_190 = pppppppuVar24;
    FUN_140070f00(pppppppuVar24,"Mud is left by water",0x14);
    ppppppuVar18 = param_1[0xe];
    if (ppppppuVar18 == param_1[0xf]) {
      FUN_1400bc360(param_1 + 0xd,ppppppuVar18,&pppppppuStack_190);
    }
    else {
      *ppppppuVar18 = pppppppuVar24;
      param_1[0xe] = param_1[0xe] + 1;
    }
  }
  if (((longlong)param_1[0xb] - (longlong)param_1[10] & 0xfffffffffffffff8U) != 0)
  goto LAB_140accd68;
  FUN_140acd060(param_1,auStack_1a4);
  uVar36 = auStack_1a0[0];
  uVar6 = auStack_1a4[0];
  piStack_168 = (int *)0x0;
  piStack_160 = (int *)0x0;
  piVar27 = (int *)0x0;
  iVar40 = 0;
  piStack_158 = (int *)0x0;
  bVar42 = false;
  uVar22 = *(uint *)(param_1 + 7);
  if ((uVar22 == 0x13) ||
     ((uVar22 < 0x2d && ((0x18ac01048200U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0)))) {
LAB_140acc03b:
    bVar42 = true;
  }
  else {
    uVar22 = *(uint *)(param_1 + 7);
    if ((uVar22 == 0x26) ||
       ((uVar22 < 0x33 && ((0x4071000000000U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0))))
    goto LAB_140acc03b;
  }
  uVar22 = *(uint *)(param_1 + 7);
  if (((uVar22 == 0xd) && (*(short *)((longlong)param_1 + 0x3c) == 0x16)) || (bVar42)) {
    sVar29 = (short)_DAT_1418be310 - auStack_19c[0];
    sVar39 = (short)_DAT_1418be314 - uStack_198;
    iVar40 = (int)(short)auStack_184[0];
    uVar22 = _DAT_1418be310 + iVar40;
    uStack_1a8 = (ushort)uVar22;
    sVar21 = uStack_188 + (short)_DAT_1418be314;
    piVar25 = (int *)0x0;
    piVar37 = (int *)0x0;
    uStack_16e = sVar29;
    if ((int)sVar29 <= (int)(_DAT_1418be310 + iVar40)) {
      do {
        iStack_180 = FUN_14010c680(0x1423f3970,sVar29,sVar39 + -1,_DAT_1418be318);
        for (piVar11 = piVar37; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar37 >> 2) != -1) goto LAB_140acc142;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_140072450(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar37 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140acc142:
        iStack_180 = FUN_14010c680(0x1423f3970,sVar29,sVar21 + 1,_DAT_1418be318);
        for (piVar11 = piVar37; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar37 >> 2) != -1) goto LAB_140acc1ca;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_140072450(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar37 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140acc1ca:
        sVar29 = sVar29 + 1;
      } while ((int)sVar29 <= (int)(_DAT_1418be310 + iVar40));
      uVar22 = (uint)uStack_1a8;
      param_1 = pppppppuStack_138;
    }
    sVar29 = (short)_DAT_1418be314 - uStack_198;
    iVar40 = (int)(short)uStack_188;
    if ((int)sVar29 <= _DAT_1418be314 + iVar40) {
      sVar21 = uStack_16e + -1;
      do {
        iStack_180 = FUN_14010c680(0x1423f3970,sVar21,sVar29,_DAT_1418be318);
        for (piVar11 = piVar37; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar37 >> 2) != -1) goto LAB_140acc2ba;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_140072450(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar37 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140acc2ba:
        iStack_180 = FUN_14010c680(0x1423f3970,uVar22 + 1 & 0xffff,sVar29,_DAT_1418be318);
        for (piVar11 = piVar37; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar37 >> 2) != -1) goto LAB_140acc33d;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_140072450(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar37 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140acc33d:
        sVar29 = sVar29 + 1;
        param_1 = pppppppuStack_138;
      } while ((int)sVar29 <= _DAT_1418be314 + iVar40);
    }
    uVar36 = auStack_1a0[0];
    uVar6 = auStack_1a4[0];
    if ((*(int *)(param_1 + 7) == 0x22) && ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0))
    {
      sVar21 = 0;
      iVar40 = (short)auStack_184[0] + 1 + (int)(short)auStack_19c[0];
      sVar29 = sVar21;
      if (0 < iVar40) {
        iVar7 = (short)uStack_188 + 1 + (int)(short)uStack_198;
        sVar39 = sVar21;
        do {
          if (0 < iVar7) {
            sVar16 = sVar21;
            do {
              if (*(uint *)((longlong)param_1 +
                           ((longlong)sVar16 + (longlong)sVar39 * 0x1f) * 4 + 0x80) < 4) {
                sVar29 = sVar29 + 1;
              }
              sVar16 = sVar16 + 1;
            } while (sVar16 < iVar7);
          }
          sVar39 = sVar39 + 1;
        } while (sVar39 < iVar40);
      }
      *(short *)(*param_1[1] + 0x2e) = sVar29;
    }
  }
  else if ((uVar22 < 0x1f) && ((0x40300010U >> (uVar22 & 0x1f) & 1) != 0)) {
    uVar33 = (uint)(short)auStack_19c[0];
    uVar22 = (short)auStack_184[0] + 1 + uVar33;
    sVar29 = 0;
    piVar25 = (int *)0x0;
    piVar37 = (int *)0x0;
    uStack_16c = uVar22;
    if (0 < (int)uVar22) {
      uVar9 = (uint)(short)uStack_198;
      iStack_174 = (short)uStack_188 + 1 + uVar9;
      piVar11 = piVar27;
      do {
        sVar21 = 0;
        if (0 < iStack_174) {
          lVar23 = (longlong)sVar29 * 0x1f;
          iVar40 = iStack_174;
          lStack_148 = lVar23;
          do {
            if (*(uint *)((longlong)param_1 + (sVar21 + lVar23) * 4 + 0x80) < 4) {
              piVar11 = (int *)(ulonglong)((int)piVar11 + 1);
              iVar40 = FUN_14010c680(0x1423f3970,((short)_DAT_1418be310 - (short)uVar33) + sVar29,
                                     ((short)_DAT_1418be314 - (short)uVar9) + sVar21,_DAT_1418be318)
              ;
              pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar40);
              for (piVar17 = piVar37; piVar17 != piVar25; piVar17 = piVar17 + 1) {
                cVar5 = '\x01';
                if (piVar17 < piVar25) {
                  cVar5 = -1;
                }
                if (-1 < cVar5) break;
                if (*piVar17 == iVar40) {
                  if ((int)((longlong)piVar17 - (longlong)piVar37 >> 2) != -1) goto LAB_140acc59a;
                  break;
                }
              }
              if (iVar40 != 0) {
                if (piVar25 == piVar27) {
                  FUN_140072450(&piStack_168,piVar25);
                  piVar25 = piStack_160;
                  piVar27 = piStack_158;
                  piVar37 = piStack_168;
                }
                else {
                  *piVar25 = iVar40;
                  piStack_160 = piVar25 + 1;
                  piVar25 = piStack_160;
                }
              }
LAB_140acc59a:
              uVar33 = (uint)auStack_19c[0];
              uVar9 = (uint)uStack_198;
              lVar23 = lStack_148;
              iVar40 = iStack_174;
            }
            sVar21 = sVar21 + 1;
            uVar22 = uStack_16c;
          } while (sVar21 < iVar40);
        }
        iVar40 = (int)piVar11;
        sVar29 = sVar29 + 1;
      } while ((int)sVar29 < (int)uVar22);
    }
    uVar6 = auStack_1a4[0];
    uVar36 = auStack_1a0[0];
    if (((*(int *)(param_1 + 7) == 0x14) || (*(int *)(param_1 + 7) == 0x15)) &&
       ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0)) {
      *(short *)(*param_1[1] + 0x2e) = (short)(iVar40 >> 2) + 1;
    }
  }
  else {
    iVar40 = FUN_14010c680(0x1423f3970,auStack_1a4[0],auStack_1a0[0],_DAT_1418be318);
    piVar25 = piStack_160;
    piVar37 = piStack_168;
    if (iVar40 != 0) {
      uVar8 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318);
      pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,uVar8);
      func_0x000140070a40(&piStack_168,&pppppppuStack_190);
      piVar25 = piStack_160;
      piVar27 = piStack_158;
      piVar37 = piStack_168;
    }
  }
  if (*(int *)(param_1 + 7) == 0x22) {
    iVar40 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318);
    if (iVar40 != 0) {
      iVar40 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318);
      pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar40);
      if (piVar25 == piVar27) {
        FUN_140072450(&piStack_168,piVar25,&pppppppuStack_190);
        piVar25 = piStack_160;
        piVar27 = piStack_158;
        piVar37 = piStack_168;
      }
      else {
        *piVar25 = iVar40;
        piStack_160 = piVar25 + 1;
        piVar25 = piStack_160;
      }
    }
    if (*(int *)(param_1 + 7) == 0x22) {
      if ((*(short *)((longlong)param_1 + 0x3c) != 4) && (*(short *)((longlong)param_1 + 0x3c) != 5)
         ) goto LAB_140acc84f;
      sVar29 = _DAT_1418be318 - 1;
      if (((((short)uVar6 < 0) || ((_DAT_14250a55c <= (short)uVar6 || ((short)uVar36 < 0)))) ||
          (_DAT_14250a560 <= (short)uVar36)) ||
         ((((sVar29 < 0 || (_DAT_14250a564 <= sVar29)) || (_DAT_14250a528 == 0)) ||
          (lVar23 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)(_DAT_14250a528 + ((longlong)(short)uVar6 >> 4) * 8) +
                       ((longlong)(short)uVar36 >> 4) * 8) + (longlong)sVar29 * 8), lVar23 == 0))))
      {
        uVar22 = 0;
      }
      else {
        uVar22 = (int)(short)uVar6 & 0x8000000f;
        if ((int)uVar22 < 0) {
          uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
        }
        uVar33 = (int)(short)uVar36 & 0x8000000f;
        if ((int)uVar33 < 0) {
          uVar33 = (uVar33 - 1 | 0xfffffff0) + 1;
        }
        uVar22 = (uint)*(ushort *)
                        (lVar23 + (((longlong)(int)uVar22 + 5) * 0x10 + (longlong)(int)uVar33) * 2);
      }
      if (uVar22 < 0x37) {
        if ((0x48024008000010U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0) goto LAB_140acc7d9;
LAB_140acc7aa:
        if (uVar22 < 0x35) {
          if ((0x12009002000040U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0) goto LAB_140acc7d9;
        }
        else if ((((uVar22 == 0x37) || (uVar22 == 0x3a)) || (uVar22 == 0x3d)) ||
                ((uVar22 == 0x1dd || (uVar22 == 0x1ff)))) goto LAB_140acc7d9;
      }
      else {
        if (((uVar22 != 0x39) && (uVar22 != 0x3c)) &&
           ((uVar22 != 0x3f && ((uVar22 != 0x1df && (uVar22 != 0x201)))))) goto LAB_140acc7aa;
LAB_140acc7d9:
        iVar40 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318 - 1);
        if (iVar40 != 0) {
          iVar40 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318 - 1);
          pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar40);
          if (piVar25 == piVar27) {
            FUN_140072450(&piStack_168,piVar25,&pppppppuStack_190);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar37 = piStack_168;
          }
          else {
            *piVar25 = iVar40;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
      }
LAB_140acc84f:
      if ((*(short *)((longlong)param_1 + 0x3c) == 3) || (*(short *)((longlong)param_1 + 0x3c) == 5)
         ) {
        sVar29 = _DAT_1418be318 + 1;
        if ((((short)uVar6 < 0) ||
            (((_DAT_14250a55c <= (short)uVar6 || ((short)uVar36 < 0)) ||
             (_DAT_14250a560 <= (short)uVar36)))) ||
           ((((sVar29 < 0 || (_DAT_14250a564 <= sVar29)) || (_DAT_14250a528 == 0)) ||
            (lVar23 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(_DAT_14250a528 + ((longlong)(short)uVar6 >> 4) * 8) +
                         ((longlong)(short)uVar36 >> 4) * 8) + (longlong)sVar29 * 8), lVar23 == 0)))
           ) {
          uVar22 = 0;
        }
        else {
          uVar22 = (int)(short)uVar6 & 0x8000000f;
          if ((int)uVar22 < 0) {
            uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
          }
          uVar33 = (int)(short)uVar36 & 0x8000000f;
          if ((int)uVar33 < 0) {
            uVar33 = (uVar33 - 1 | 0xfffffff0) + 1;
          }
          uVar22 = (uint)*(ushort *)
                          (lVar23 + (((longlong)(int)uVar22 + 5) * 0x10 + (longlong)(int)uVar33) * 2
                          );
        }
        if (uVar22 < 0x36) {
          if ((0x24012004000020U >> ((ulonglong)uVar22 & 0x3f) & 1) == 0) {
LAB_140acc953:
            if (uVar22 < 0x35) {
              if ((0x12009002000040U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0) goto LAB_140acc982;
            }
            else if ((((uVar22 == 0x37) || (uVar22 == 0x3a)) || (uVar22 == 0x3d)) ||
                    ((uVar22 == 0x1dd || (uVar22 == 0x1ff)))) goto LAB_140acc982;
            goto LAB_140acc9f4;
          }
        }
        else if (((uVar22 != 0x38) && (uVar22 != 0x3b)) &&
                ((uVar22 != 0x3e && ((uVar22 != 0x1de && (uVar22 != 0x200)))))) goto LAB_140acc953;
LAB_140acc982:
        iVar40 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318 + 1);
        if (iVar40 != 0) {
          iVar40 = FUN_14010c680(0x1423f3970,uVar6,uVar36,_DAT_1418be318 + 1);
          pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar40);
          if (piVar25 == piVar27) {
            FUN_140072450(&piStack_168,piVar25,&pppppppuStack_190);
            piVar25 = piStack_160;
            piVar37 = piStack_168;
          }
          else {
            *piVar25 = iVar40;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
      }
    }
  }
LAB_140acc9f4:
  uVar26 = (longlong)piVar25 - (longlong)piVar37 >> 2;
  if (uVar26 == 0) {
    pppppppuVar24 = (undefined8 *******)FUN_1415530e0(0x20);
    *pppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar24[1] = (undefined8 ******)0x0;
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuVar24 = 0;
    pppppppuStack_138 = pppppppuVar24;
    FUN_140070f00(pppppppuVar24,"No access",9);
    ppppppuVar18 = param_1[0xb];
    if (ppppppuVar18 == param_1[0xc]) {
      FUN_1400bc360(param_1 + 10,ppppppuVar18,&pppppppuStack_138);
    }
    else {
      *ppppppuVar18 = pppppppuVar24;
      param_1[0xb] = param_1[0xb] + 1;
    }
  }
  else {
    lVar23 = 0;
    uStack_16c = 0;
    ppppppuVar18 = param_1[1];
    if ((longlong)param_1[2] - (longlong)ppppppuVar18 >> 3 != 0) {
      do {
        uVar28 = 0;
        uVar35 = uVar28;
        if (*(longlong *)(*(longlong *)((longlong)ppppppuVar18 + lVar23) + 0x160) !=
            *(longlong *)(*(longlong *)((longlong)ppppppuVar18 + lVar23) + 0x158)) {
          do {
            *(undefined1 *)
             (uVar35 + *(longlong *)(*(longlong *)((longlong)ppppppuVar18 + lVar23) + 0x158)) = 0;
            uVar22 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar22;
            uVar35 = uVar35 + 1;
            ppppppuVar18 = param_1[1];
          } while ((ulonglong)(longlong)(int)uVar22 <
                   (ulonglong)
                   (*(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x160) -
                   *(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x158)));
        }
        iVar40 = 0;
        piVar27 = piVar37;
        iVar7 = iVar40;
        do {
          piVar25 = piVar27;
          uVar32 = 0;
          iVar34 = 0;
          uVar35 = uVar32;
          uVar28 = uVar32;
          if (*(longlong *)(*(longlong *)((longlong)ppppppuVar18 + lVar23) + 0x148) -
              *(longlong *)(*(longlong *)((longlong)ppppppuVar18 + lVar23) + 0x140) >> 2 != 0) {
            do {
              if (*(int *)(*(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x140) +
                          uVar32 * 4) == *piVar25) {
                *(undefined1 *)
                 (uVar32 + *(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x158)) =
                     1;
                uVar28 = (ulonglong)((int)uVar28 + 1);
              }
              iVar34 = (int)uVar28;
              uVar22 = (int)uVar35 + 1;
              uVar32 = uVar32 + 1;
              ppppppuVar18 = param_1[1];
              uVar35 = (ulonglong)uVar22;
            } while ((ulonglong)(longlong)(int)uVar22 <
                     (ulonglong)
                     (*(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x148) -
                      *(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x140) >> 2));
          }
          if (iVar40 < iVar34) {
            iVar40 = iVar34;
          }
          iVar7 = iVar7 + 1;
          piVar27 = piVar25 + 1;
        } while ((ulonglong)(longlong)iVar7 < uVar26);
        if (iVar40 < *(short *)(*(longlong *)(lVar23 + (longlong)ppppppuVar18) + 0x170)) {
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0xf;
          pppppppuStack_98 = (undefined8 *******)0x0;
          uStack_b0 = 0;
          ppppppuStack_a8 = (undefined8 ******)0x0;
          uStack_a0 = 0xf;
          pppppppuStack_b8 = (undefined8 *******)0x0;
          FUN_140a44860(*(longlong *)(lVar23 + (longlong)ppppppuVar18),&pppppppuStack_b8);
          pppppppuStack_138 = (undefined8 *******)ppppppuStack_a8;
          cVar5 = -1;
          if (0x7fffffffffffffffU - (longlong)ppppppuStack_a8 < 0xd) {
            ppppppuVar18 = ppppppuStack_a8;
            uVar14 = FUN_140066ec0();
            cVar15 = (char)((ulonglong)uVar14 >> 8) + *(char *)((longlong)piVar25 + 5);
            uVar3 = CONCAT61((int6)((ulonglong)uVar14 >> 0x10),cVar15);
            pcVar19 = (char *)(CONCAT71(uVar3,*(undefined1 *)((longlong)piVar25 + 7)) + -0x43);
            *pcVar19 = *pcVar19 + cVar5;
            iVar40 = piVar25[2];
            acStack_14c[lVar23 * 4] = acStack_14c[lVar23 * 4] + (char)((ulonglong)ppppppuVar18 >> 8)
            ;
            pcVar19 = (char *)(CONCAT71(uVar3,(char)iVar40) + -0x57ff5343);
            *pcVar19 = *pcVar19 + (char)ppppppuVar18;
            (&stack0xffffffffbd33ffb4)[lVar23 * 4] = (&stack0xffffffffbd33ffb4)[lVar23 * 4] + cVar15
            ;
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pppppppuStack_190 = &pppppppuStack_b8;
          if (0xf < uStack_a0) {
            pppppppuStack_190 = pppppppuStack_b8;
          }
          pppppppuStack_78 = (undefined8 *******)0x0;
          uStack_70 = 0;
          uVar35 = (longlong)ppppppuStack_a8 + 0xd;
          uVar28 = 0xf;
          pppppppuVar24 = &pppppppuStack_78;
          if (0xf < uVar35) {
            uVar28 = uVar35 | 0xf;
            if (uVar28 < 0x8000000000000000) {
              if (uVar28 < 0x16) {
                uVar28 = 0x16;
              }
            }
            else {
              uVar28 = 0x7fffffffffffffff;
            }
            pppppppuVar24 = (undefined8 *******)FUN_140071e00(uVar28 + 1);
            pppppppuStack_78 = pppppppuVar24;
          }
          uStack_68 = uVar35;
          uStack_60 = uVar28;
          *pppppppuVar24 = (undefined8 ******)0x7365636361206f4e;
          *(undefined4 *)(pppppppuVar24 + 1) = 0x6f742073;
          *(undefined1 *)((longlong)pppppppuVar24 + 0xc) = 0x20;
          func_0x00014155454e((longlong)pppppppuVar24 + 0xd,pppppppuStack_190,pppppppuStack_138);
          *(undefined1 *)((longlong)pppppppuVar24 + uVar35) = 0;
          uVar28 = uStack_60;
          uVar35 = uStack_68;
          pppppppuVar24 = pppppppuStack_78;
          pppppppuStack_98 = pppppppuStack_78;
          uStack_90 = uStack_70;
          uStack_88 = uStack_68;
          uStack_80 = uStack_60;
          pppppppuVar13 = (undefined8 *******)FUN_1415530e0(0x20);
          *pppppppuVar13 = (undefined8 ******)0x0;
          pppppppuVar13[1] = (undefined8 ******)0x0;
          pppppppuVar13[2] = (undefined8 ******)0x0;
          pppppppuVar13[3] = (undefined8 ******)0xf;
          *(undefined1 *)pppppppuVar13 = 0;
          pppppppuStack_138 = pppppppuVar13;
          if ((undefined8 ********)pppppppuVar13 != &pppppppuStack_98) {
            pppppppuVar20 = &pppppppuStack_98;
            if (0xf < uVar28) {
              pppppppuVar20 = pppppppuVar24;
            }
            FUN_140070f00(pppppppuVar13,pppppppuVar20,uVar35);
          }
          ppppppuVar18 = param_1[0xb];
          if (ppppppuVar18 == param_1[0xc]) {
            FUN_1400bc360(param_1 + 10,ppppppuVar18,&pppppppuStack_138);
          }
          else {
            *ppppppuVar18 = pppppppuVar13;
            param_1[0xb] = param_1[0xb] + 1;
          }
          FUN_140070e80(&pppppppuStack_b8);
          FUN_140070e80(&pppppppuStack_98);
        }
        uStack_16c = uStack_16c + 1;
        lVar23 = lVar23 + 8;
        ppppppuVar18 = param_1[1];
      } while ((ulonglong)(longlong)(int)uStack_16c <
               (ulonglong)((longlong)param_1[2] - (longlong)ppppppuVar18 >> 3));
    }
  }
  FUN_140070d80(&piStack_168);
LAB_140accd68:
  FUN_140070d80(&piStack_130);
  FUN_14013d2d0(auStack_d0);
  FUN_140070de0(auStack_e8);
  FUN_140070de0(auStack_100);
  FUN_140070de0(&lStack_118);
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_1f8);
  return;
}

