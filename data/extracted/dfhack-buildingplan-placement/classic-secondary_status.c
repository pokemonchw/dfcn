/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 140ac79b0..140ac9c7c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac79b0(undefined8 *******param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  short sVar14;
  int *piVar15;
  undefined8 ******ppppppuVar16;
  longlong lVar17;
  undefined2 uVar20;
  char *pcVar18;
  undefined8 *******pppppppuVar19;
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
  undefined8 uVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  ulonglong uVar36;
  ushort uVar37;
  int *piVar38;
  ushort uVar39;
  short sVar40;
  int iVar41;
  bool bVar42;
  bool bVar43;
  char acStack_1f8 [32];
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
  
  uStack_58 = _DAT_1418b8040 ^ (ulonglong)acStack_1f8;
  pppppppuStack_138 = param_1;
  FUN_1400bcf70(param_1 + 10);
  FUN_1400bcf70(param_1 + 0xd);
  sVar29 = *(short *)((longlong)param_1 + 0x3c);
  puStack_1c8 = auStack_184;
  puStack_1d0 = auStack_1a4;
  puStack_1d8 = auStack_1a0;
  FUN_140a9ec00(*(undefined2 *)(param_1 + 7),sVar29,*(undefined4 *)(param_1 + 8),auStack_19c);
  uVar6 = auStack_184[0];
  uVar22 = *(uint *)(param_1 + 7);
  uStack_188 = auStack_184[0];
  iVar41 = (int)(short)auStack_1a4[0];
  auStack_184[0] = auStack_1a4[0];
  uVar34 = (uint)(short)auStack_1a0[0];
  uStack_198 = auStack_1a0[0];
  if (((uVar22 == 0x14) ||
      (((uVar22 < 0x2a && ((0x20000280000U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0)) ||
       (uVar22 == 0x32)))) && ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0)) {
    *(short *)(*param_1[1] + 0x2e) =
         (short)((int)(((short)auStack_19c[0] + 1 + iVar41) * ((short)uVar6 + 1 + uVar34)) >> 2) + 1
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
    sVar29 = (short)_DAT_1418b82f0 - auStack_19c[0];
    if ((int)sVar29 <= (int)(_DAT_1418b82f0 + iVar41)) {
      uVar22 = _DAT_1418b82f0;
      iVar7 = _DAT_1418b82f4;
      do {
        sVar21 = (short)iVar7 - (short)uVar34;
        if ((int)sVar21 <= iVar7 + (short)uVar6) {
          do {
            puStack_1d8 = (ushort *)CONCAT71(puStack_1d8._1_7_,*(int *)(param_1 + 7) == 0x14);
            iVar7 = FUN_1414c4ac0(0x1423ed870,sVar29,sVar21,_DAT_1418b82f8);
            if ((iVar7 == 0) && ((*(int *)(param_1 + 7) == 0x14 || (*(int *)(param_1 + 7) == 0x15)))
               ) {
              uVar26 = uVar26 & 0xffffffffffffff00;
            }
            iVar7 = FUN_1414c5420(0x1423ed870,sVar29,sVar21,_DAT_1418b82f8);
            if ((iVar7 == 0) && (uVar26 = uVar26 & 0xff, *(int *)(param_1 + 7) == 4)) {
              uVar26 = 0;
            }
            sVar21 = sVar21 + 1;
          } while ((int)sVar21 <= _DAT_1418b82f4 + (short)uVar6);
          uStack_140 = (uint)uVar26;
          uVar34 = (uint)uStack_198;
          uVar22 = _DAT_1418b82f0;
          iVar7 = _DAT_1418b82f4;
        }
        sVar29 = sVar29 + 1;
      } while ((int)sVar29 <= (int)(iVar41 + uVar22));
      if (((char)uVar26 == '\0') && (cVar5 = FUN_1408d6f20(), cVar5 != '\0')) {
        FUN_1400bcea0(param_1 + 10,"Disconnected");
      }
    }
  }
  uVar39 = auStack_184[0];
  uVar37 = uStack_188;
  uVar6 = auStack_19c[0];
  if (((*(int *)(param_1 + 7) == 0x17) && (*(short *)((longlong)param_1 + 0x3c) == 1)) &&
     ((DAT_1418bd3ec & 0x27) == 0)) {
    FUN_1400bcea0(param_1 + 10,"Need trigger type");
  }
  uStack_16e = (ushort)uStack_16e._1_1_ << 8;
  cStack_170 = '\0';
  func_0x0001401364d0(&lStack_118);
  uStack_1b0 = '\0' < DAT_142504408;
  uStack_1b8 = _DAT_1418b82f8;
  iStack_1c0 = CONCAT22(iStack_1c0._2_2_,(short)_DAT_1418b82f4 + uVar37);
  puStack_1c8 = (ushort *)CONCAT62(puStack_1c8._2_6_,(short)_DAT_1418b82f0 + uVar39);
  puStack_1d0 = (ushort *)CONCAT62(puStack_1d0._2_6_,(short)_DAT_1418b82f4 - uStack_198);
  puStack_1d8 = (ushort *)CONCAT62(puStack_1d8._2_6_,(short)_DAT_1418b82f0 - uVar6);
  FUN_1405c1f30(0x14240a288,&lStack_118,*(undefined2 *)(param_1 + 7));
  if (lStack_110 - lStack_118 >> 1 != 0) {
    uStack_16e = CONCAT11(uStack_16e._1_1_,1);
    iVar41 = (int)(_DAT_14240ac70 - _DAT_14240ac68 >> 3) + -1;
    lVar23 = (longlong)iVar41;
    if (-1 < iVar41) {
      do {
        plVar1 = *(longlong **)(_DAT_14240ac68 + lVar23 * 8);
        cVar5 = (**(code **)(*plVar1 + 200))(plVar1,&lStack_118);
        if (cVar5 != '\0') {
          cStack_170 = '\x01';
          break;
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
    }
  }
  uVar30 = uStack_198 + 1 + uVar37;
  uVar6 = uVar6 + 1 + uVar39;
  if (0 < (short)uVar6) {
    pppppppuVar24 = param_1 + 0x10;
    uVar26 = (ulonglong)uVar6;
    do {
      if (0 < (short)uVar30) {
        func_0x00014154f2b6(pppppppuVar24,0,(ulonglong)uVar30 << 2);
      }
      pppppppuVar24 = (undefined8 *******)((longlong)pppppppuVar24 + 0x7c);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  uStack_16c = uStack_16c & 0xffffff00;
  uVar26 = (ulonglong)_DAT_1418b82f8;
  auStack_1a4[0] = _DAT_1418b82f8;
  auStack_1a0[0] = (short)_DAT_1418b82f0 - auStack_19c[0];
  iVar41 = (int)(short)uVar39;
  uVar22 = (uint)(short)auStack_1a0[0];
  uVar6 = uStack_198;
  uVar30 = auStack_19c[0];
  iStack_150 = iVar41;
  if ((int)uVar22 <= (int)(iVar41 + _DAT_1418b82f0)) {
    iVar7 = (int)(short)uVar37;
    iStack_180 = iVar7;
    do {
      uStack_1a8 = (short)_DAT_1418b82f4 - uVar6;
      uVar34 = (uint)(short)uStack_1a8;
      uVar37 = auStack_1a0[0];
      if ((int)uVar34 <= _DAT_1418b82f4 + iVar7) {
        iStack_17c = (int)(short)uVar30;
        iStack_178 = (int)(short)uVar6;
        lStack_148._0_4_ = uVar22;
        do {
          iStack_174 = 0;
          puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
          puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
          puStack_1d8 = (ushort *)((ulonglong)puStack_1d8 & 0xffffffff00000000);
          sVar29 = (short)uVar26;
          uVar8 = FUN_140a98840(uVar37,uStack_1a8,uVar26 & 0xffff);
          pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,uVar8);
          iVar41 = 6;
          if ((((((short)uVar37 < 0) || (_DAT_14250445c <= (int)uVar22)) ||
               (((short)uStack_1a8 < 0 || ((_DAT_142504460 <= (int)uVar34 || (sVar29 < 0)))))) ||
              (_DAT_142504464 <= sVar29)) ||
             ((_DAT_142504428 == 0 ||
              (lVar23 = *(longlong *)
                         (*(longlong *)
                           (*(longlong *)(_DAT_142504428 + ((longlong)(short)uVar37 >> 4) * 8) +
                           ((longlong)(short)uStack_1a8 >> 4) * 8) + (longlong)sVar29 * 8),
              lVar23 == 0)))) {
LAB_140ac801f:
            iVar7 = *(int *)(param_1 + 7);
            if ((iVar7 == 0x14) || (iVar7 == 0x15)) {
              puStack_1d8 = (ushort *)CONCAT71(puStack_1d8._1_7_,iVar7 == 0x14);
              iVar7 = FUN_1414c4ac0(0x1423ed870,uVar37,uStack_1a8);
              if (iVar7 == 0) goto LAB_140ac80e8;
              if ((char)uStack_140 == '\0') {
                *(undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)(int)((uVar22 - _DAT_1418b82f0) + iStack_17c) * 0x1f +
                 (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) = 4;
                goto LAB_140ac88b9;
              }
              puStack_1d8 = (ushort *)CONCAT71(puStack_1d8._1_7_,*(int *)(param_1 + 7) == 0x14);
              uVar8 = FUN_1414c4ac0(0x1423ed870,uVar37,uStack_1a8);
            }
            else {
LAB_140ac80e8:
              uVar6 = uStack_1a8;
              if ((*(int *)(param_1 + 7) != 4) ||
                 (iVar7 = FUN_1414c5420(0x1423ed870,auStack_1a0[0],uStack_1a8),
                 uVar37 = auStack_1a0[0], iVar7 == 0)) {
                uVar6 = uStack_1a8;
                bVar43 = true;
                bVar42 = cStack_170 != '\0';
                if (bVar42) {
                  iStack_174 = 5;
                  puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                  puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                  puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,5);
                  iVar41 = FUN_140a98840(auStack_1a0[0],uStack_1a8,uVar26 & 0xffff);
                }
                uVar22 = *(uint *)(param_1 + 7);
                if ((uVar22 == 0x13) ||
                   ((uVar22 < 0x28 && ((0xac01040000U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0))
                   )) {
                  iStack_174 = 1;
                  puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                  puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                  puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,1);
                  iVar7 = FUN_140a98840(auStack_1a0[0],uVar6,uVar26 & 0xffff);
                  if ((!bVar42) || (iVar41 == 0)) {
                    bVar42 = true;
                    iVar41 = iVar7;
                  }
                }
                uVar22 = (uint)lStack_148;
                uVar6 = auStack_1a4[0];
                bVar4 = false;
                if (*(int *)(param_1 + 7) == 0xd) {
                  if (*(short *)((longlong)param_1 + 0x3c) == 6) {
LAB_140ac8243:
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = false;
                  if ((*(int *)(param_1 + 7) == 5) &&
                     ((*(short *)((longlong)param_1 + 0x3c) == 4 ||
                      ((ushort)(*(short *)((longlong)param_1 + 0x3c) - 5U) < 2))))
                  goto LAB_140ac8243;
                }
                iVar7 = *(int *)(param_1 + 8);
                if (iVar7 != -1) {
                  uVar26 = _DAT_142513620 - _DAT_142513618 >> 3;
                  uVar9 = (uint)uVar26;
                  if (uVar9 == 0) {
                    iVar31 = -1;
                    iVar35 = -1;
                  }
                  else {
                    iVar35 = 0;
                    while (0x40 < (int)uVar9) {
                      uVar9 = (uint)(uVar26 >> 1) & 0x7fffffff;
                      iVar31 = uVar9 + iVar35;
                      if (iVar7 < *(int *)(*(longlong *)(_DAT_142513618 + (longlong)iVar31 * 8) +
                                          0x28)) {
                        iVar31 = iVar35;
                      }
                      uVar9 = (int)uVar26 - uVar9;
                      uVar26 = (ulonglong)uVar9;
                      iVar35 = iVar31;
                    }
                    iVar31 = uVar9 + iVar35;
                  }
                  if ((iVar31 != -1) && (iVar35 < iVar31)) {
                    lVar23 = (longlong)iVar35;
                    do {
                      if (iVar7 == *(int *)(*(longlong *)(_DAT_142513618 + lVar23 * 8) + 0x28)) {
                        lVar23 = *(longlong *)(_DAT_142513618 + (longlong)iVar35 * 8);
                        if ((lVar23 != 0) && (*(char *)(lVar23 + 0xbc34) != '\0'))
                        goto LAB_140ac82f0;
                        break;
                      }
                      iVar35 = iVar35 + 1;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < iVar31);
                  }
                }
                if (bVar4) {
LAB_140ac82f0:
                  uVar26 = (ulonglong)_DAT_1418b82f0;
                  if ((((uint)lStack_148 - _DAT_1418b82f0) + iStack_17c != 1) ||
                     ((uVar34 - _DAT_1418b82f4) + iStack_178 != 1)) {
                    iStack_174 = 2;
                    puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                    puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                    puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,2);
                    iVar7 = FUN_140a98840(auStack_1a0[0],uStack_1a8,auStack_1a4[0]);
                    if ((bVar42) && (iVar41 != 0)) goto LAB_140ac8377;
                    bVar42 = true;
                    uVar26 = (ulonglong)_DAT_1418b82f0;
                    iVar41 = iVar7;
                  }
                }
                else {
LAB_140ac8377:
                  uVar26 = (ulonglong)_DAT_1418b82f0;
                }
                if (*(int *)(param_1 + 7) == 0x22) {
                  bVar4 = true;
                  if (iVar41 == 0) {
                    puStack_1d8 = (ushort *)CONCAT62(puStack_1d8._2_6_,uVar6);
                    cVar5 = FUN_140abfce0(CONCAT62((int6)(uVar26 >> 0x10),
                                                   (short)uVar26 - auStack_19c[0]),
                                          auStack_184[0] + (short)uVar26,
                                          (short)_DAT_1418b82f4 - uStack_198);
                    if (cVar5 == '\0') {
                      uVar26 = (ulonglong)_DAT_1418b82f0;
                      goto LAB_140ac83db;
                    }
                  }
                  else {
LAB_140ac83db:
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
                      if ((sVar29 - 3U & 0xfffd) != 0) goto LAB_140ac84a7;
                      iStack_174 = 4;
                      puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,4);
                    }
                    puStack_1c8 = (ushort *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
                    puStack_1d0 = (ushort *)CONCAT71(puStack_1d0._1_7_,1);
                    iVar7 = FUN_140a98840(auStack_1a0[0],uStack_1a8,uVar6);
                    if ((!bVar42) || (iVar41 == 0)) {
                      bVar4 = false;
                      iVar41 = iVar7;
                    }
                  }
                  bVar43 = bVar4;
                  uVar26 = (ulonglong)_DAT_1418b82f0;
                }
LAB_140ac84a7:
                uVar9 = (uint)uVar26;
                iVar7 = iStack_17c;
                iVar35 = iStack_178;
                if ((int)pppppppuStack_190 == 0) {
LAB_140ac851b:
                  iVar41 = *(int *)(param_1 + 7);
                  if (iVar41 == 0x13) {
                    if (DAT_142504408 == '\0') {
                      iVar41 = -iStack_17c;
joined_r0x000140ac8555:
                      if (uVar22 == iVar41 + uVar9) {
LAB_140ac8564:
                        if ((int)pppppppuStack_190 != 0) {
                          *(undefined4 *)
                           ((longlong)param_1 +
                           ((longlong)(int)((uVar22 - uVar9) + iStack_17c) * 0x1f +
                           (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) = 5;
                          goto LAB_140ac8787;
                        }
                      }
                    }
                    else {
                      iVar41 = iStack_150;
                      if (DAT_142504408 == '\x01') goto joined_r0x000140ac8555;
                      if (DAT_142504408 == '\x02') {
                        if (uVar34 != _DAT_1418b82f4 - iStack_178) goto LAB_140ac85ec;
                        goto LAB_140ac8564;
                      }
                      if ((DAT_142504408 == '\x03') && (uVar34 == _DAT_1418b82f4 + iStack_180))
                      goto LAB_140ac8564;
                    }
LAB_140ac85ec:
                    if ((uVar22 == iStack_150 + uVar9) && (uVar34 == _DAT_1418b82f4 + iStack_180)) {
                      puStack_1d8 = (ushort *)CONCAT62(puStack_1d8._2_6_,uVar6);
                      cVar5 = FUN_140abfce0(CONCAT62((int6)(uVar26 >> 0x10),
                                                     (short)uVar26 - auStack_19c[0]),
                                            auStack_184[0] + (short)uVar26,
                                            (short)_DAT_1418b82f4 - uStack_198,
                                            uStack_188 + (short)_DAT_1418b82f4);
                      uVar9 = _DAT_1418b82f0;
                      if (cVar5 == '\0') {
                        pppppppuStack_190 = (undefined8 *******)FUN_14154de30(0x20);
                        *pppppppuStack_190 = (undefined8 ******)0x0;
                        pppppppuStack_190[1] = (undefined8 ******)0x0;
                        pppppppuStack_190[2] = (undefined8 ******)0x0;
                        pppppppuStack_190[3] = (undefined8 ******)0xf;
                        *(undefined1 *)pppppppuStack_190 = 0;
                        func_0x000140070b40(pppppppuStack_190,"Needs walkable perimeter");
                        func_0x0001400baf40(param_1 + 10,&pppppppuStack_190);
                        uVar9 = _DAT_1418b82f0;
                      }
                    }
                  }
                  else if (((iVar41 == 0x18) || (iVar41 == 0x12)) ||
                          ((iVar41 == 0x22 && (((int)pppppppuStack_190 != 0 && (bVar43))))))
                  goto LAB_140ac85ec;
                  iVar35 = iStack_178;
                  iVar7 = iStack_17c;
                  uVar8 = 0;
                  if (*(uint *)(param_1 + 7) == 0x21) {
                    iVar41 = (uVar34 - _DAT_1418b82f4) + iStack_178;
                    iVar31 = (uVar22 - uVar9) + iStack_17c;
                    if (DAT_142504408 == '\0') {
                      if (iVar31 == 0) {
                        bVar43 = iVar41 == 1;
LAB_140ac871a:
                        if (bVar43) {
LAB_140ac871c:
                          uVar8 = 1;
                        }
                      }
                    }
                    else if ((DAT_142504408 == '\x01') || (DAT_142504408 == '\x02')) {
                      if ((iVar31 == 0) && (iVar41 == 0)) goto LAB_140ac871c;
                    }
                    else if ((DAT_142504408 == '\x03') && (iVar31 == 1)) {
                      bVar43 = iVar41 == 0;
                      goto LAB_140ac871a;
                    }
                    *(undefined4 *)
                     ((longlong)param_1 + ((longlong)iVar41 + 0x20 + (longlong)iVar31 * 0x1f) * 4) =
                         uVar8;
                  }
                  else {
                    iVar41 = (uVar34 - _DAT_1418b82f4) + iStack_178;
                    iVar31 = (uVar22 - uVar9) + iStack_17c;
                    iStack_1c0 = (int)(short)uVar6;
                    puStack_1c8 = (ushort *)CONCAT44(puStack_1c8._4_4_,_DAT_1418b82f4 - iStack_178);
                    puStack_1d0 = (ushort *)CONCAT44(puStack_1d0._4_4_,uVar9 - iStack_17c);
                    puStack_1d8 = (ushort *)CONCAT44(puStack_1d8._4_4_,iVar41);
                    cVar5 = FUN_1405630a0(*(uint *)(param_1 + 7) & 0xffff,
                                          *(undefined2 *)((longlong)param_1 + 0x3c),
                                          *(undefined4 *)(param_1 + 8));
                    *(uint *)(((longlong)iVar31 * 0x1f + (longlong)iVar41) * 4 + 0x80 +
                             (longlong)param_1) = (uint)(cVar5 != '\0');
                    uVar22 = (uint)lStack_148;
                  }
                }
                else if (iStack_174 == 0) {
                  *(int *)((longlong)param_1 +
                          ((longlong)(int)((uVar22 - uVar9) + iStack_17c) * 0x1f +
                          (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) =
                       (int)pppppppuStack_190;
                }
                else {
                  if (iVar41 == 0) goto LAB_140ac851b;
                  *(int *)((longlong)param_1 +
                          ((longlong)(int)((uVar22 - uVar9) + iStack_17c) * 0x1f +
                          (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) =
                       iVar41;
                }
LAB_140ac8787:
                uVar37 = auStack_1a0[0];
                if ((((*(int *)(param_1 + 7) == 4) &&
                     (*(int *)((longlong)param_1 +
                              ((longlong)(int)((uVar22 - _DAT_1418b82f0) + iVar7) * 0x1f +
                              (longlong)(int)((uVar34 - _DAT_1418b82f4) + iVar35)) * 4 + 0x80) == 0)
                     ) && (-1 < (short)auStack_1a0[0])) &&
                   ((((int)uVar22 < _DAT_14250445c && (-1 < (short)uStack_1a8)) &&
                    ((int)uVar34 < _DAT_142504460)))) {
                  uVar26 = (ulonglong)(short)auStack_1a4[0];
                  if ((-1 < (short)auStack_1a4[0]) && ((short)auStack_1a4[0] < _DAT_142504464)) {
                    if ((_DAT_142504428 != 0) &&
                       (lVar23 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)
                                      (_DAT_142504428 + (longlong)((short)auStack_1a0[0] >> 4) * 8)
                                    + (longlong)((short)uStack_1a8 >> 4) * 8) + uVar26 * 8),
                       lVar23 != 0)) {
                      uVar9 = uVar22 & 0x8000000f;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
                      }
                      uVar34 = uVar34 & 0x8000000f;
                      if ((int)uVar34 < 0) {
                        uVar34 = (uVar34 - 1 | 0xfffffff0) + 1;
                      }
                      if ((*(uint *)(lVar23 + 0x2a0 +
                                    ((longlong)(int)uVar9 * 0x10 + (longlong)(int)uVar34) * 4) &
                          0x8000) != 0) {
                        cVar5 = FUN_1414e60f0(0x1423ed870,auStack_1a0[0],uStack_1a8,auStack_1a4[0]);
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
                goto LAB_140ac88b9;
              }
              if ((char)uStack_140 == '\0') {
                *(undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)(int)((uVar22 - _DAT_1418b82f0) + iStack_17c) * 0x1f +
                 (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) = 4;
                goto LAB_140ac88b9;
              }
              uVar8 = FUN_1414c5420(0x1423ed870,auStack_1a0[0],uVar6);
            }
            *(undefined4 *)
             ((longlong)param_1 +
             ((longlong)(int)((uVar22 - _DAT_1418b82f0) + iStack_17c) * 0x1f +
             (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) = uVar8;
          }
          else {
            uVar9 = uVar22 & 0x8000000f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
            }
            uVar10 = uVar34 & 0x8000000f;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
            }
            if ((((*(uint *)(lVar23 + 0x2a0 +
                            ((longlong)(int)uVar9 * 0x10 + (longlong)(int)uVar10) * 4) & 0x200) == 0
                 ) || (uVar9 = *(uint *)(param_1 + 7), uVar9 == 0x14)) ||
               ((uVar9 < 0x1f && ((0x40200010U >> (uVar9 & 0x1f) & 1) != 0)))) goto LAB_140ac801f;
            *(undefined4 *)
             ((longlong)param_1 +
             ((longlong)(int)((uVar22 - _DAT_1418b82f0) + iStack_17c) * 0x1f +
             (longlong)(int)((uVar34 - _DAT_1418b82f4) + iStack_178)) * 4 + 0x80) = 7;
          }
LAB_140ac88b9:
          uStack_1a8 = uStack_1a8 + 1;
          uVar34 = (uint)(short)uStack_1a8;
          uVar6 = uStack_198;
          uVar30 = auStack_19c[0];
          iVar7 = iStack_180;
          iVar41 = iStack_150;
        } while ((int)uVar34 <= _DAT_1418b82f4 + iStack_180);
      }
      auStack_1a0[0] = uVar37 + 1;
      uVar22 = (uint)(short)auStack_1a0[0];
      uVar37 = uStack_188;
      uVar39 = auStack_184[0];
    } while ((int)uVar22 <= (int)(_DAT_1418b82f0 + iVar41));
  }
  piStack_130 = (int *)0x0;
  piStack_128 = (int *)0x0;
  piVar27 = (int *)0x0;
  piStack_120 = (int *)0x0;
  auStack_1a4[0] = 0;
  iVar41 = (short)uVar39 + 1 + (int)(short)uVar30;
  lStack_148 = CONCAT44(lStack_148._4_4_,iVar41);
  if (0 < iVar41) {
    iStack_150 = (int)(short)uVar37 + (short)uVar6 + 1;
    piVar25 = (int *)0x0;
    piVar38 = (int *)0x0;
    do {
      sVar29 = 0;
      if (0 < iStack_150) {
        lVar23 = (longlong)(short)auStack_1a4[0] * 0x1f;
        do {
          for (piVar11 = piVar38; piVar11 != piVar25; piVar11 = piVar11 + 1) {
            cVar5 = '\x01';
            if (piVar11 < piVar25) {
              cVar5 = -1;
            }
            if (-1 < cVar5) break;
            if (*piVar11 == *(int *)((longlong)param_1 + (sVar29 + lVar23) * 4 + 0x80)) {
              if ((int)((longlong)piVar11 - (longlong)piVar38 >> 2) != -1) goto LAB_140ac8c9b;
              break;
            }
          }
          if (piVar25 == piVar27) {
            FUN_140288810(&piStack_130,piVar25);
            piVar38 = piStack_130;
          }
          else {
            *piVar25 = *(int *)((longlong)param_1 + ((longlong)sVar29 + 0x20 + lVar23) * 4);
            piStack_128 = piVar25 + 1;
          }
          piVar25 = piStack_128;
          switch(*(undefined4 *)((longlong)param_1 + (sVar29 + lVar23) * 4 + 0x80)) {
          case 5:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x1c;
            pcVar18 = "Needs to be anchored on edge";
            break;
          case 6:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x18;
            pcVar18 = "Blocked at this location";
            break;
          case 7:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x25;
            pcVar18 = "Hidden, cannot build at this location";
            break;
          case 8:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x13;
            pcVar18 = "Needs adjacent wall";
            break;
          case 9:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 7;
            pcVar18 = "Off map";
            break;
          case 10:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x16;
            pcVar18 = "Water at this location";
            break;
          case 0xb:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x1b;
            pcVar18 = "Lava/Magma at this location";
            break;
          case 0xc:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x10;
            pcVar18 = "Building present";
            break;
          case 0xd:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0xe;
            pcVar18 = "Must be inside";
            break;
          case 0xe:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x11;
            pcVar18 = "Too close to edge";
            break;
          case 0xf:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0xf;
            pcVar18 = "Must be outside";
            break;
          case 0x10:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x10;
            pcVar18 = "Needs open space";
            break;
          case 0x11:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x19;
            pcVar18 = "Surrounded by empty space";
            break;
          case 0x12:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x1d;
            pcVar18 = "Cannot build at highest level";
            break;
          case 0x13:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x18;
            pcVar18 = "Must remove construction";
            break;
          case 0x14:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            uVar32 = 0x1c;
            pcVar18 = "Need soil or mud at location";
            break;
          case 0x15:
            pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
            *pppppppuVar24 = (undefined8 ******)0x0;
            pppppppuVar24[1] = (undefined8 ******)0x0;
            pppppppuVar24[2] = (undefined8 ******)0x0;
            pppppppuVar24[3] = (undefined8 ******)0xf;
            *(undefined1 *)pppppppuVar24 = 0;
            pppppppuStack_190 = pppppppuVar24;
            FUN_140070e90(pppppppuVar24,"Need soil at location",0x15);
            ppppppuVar16 = param_1[0xb];
            if (ppppppuVar16 == param_1[0xc]) goto code_r0x000140ac8c87;
            goto code_r0x000140ac8a91;
          default:
            goto LAB_140ac8c9b;
          }
          *pppppppuVar24 = (undefined8 ******)0x0;
          pppppppuVar24[1] = (undefined8 ******)0x0;
          pppppppuVar24[2] = (undefined8 ******)0x0;
          pppppppuVar24[3] = (undefined8 ******)0xf;
          *(undefined1 *)pppppppuVar24 = 0;
          pppppppuStack_190 = pppppppuVar24;
          FUN_140070e90(pppppppuVar24,pcVar18,uVar32);
          ppppppuVar16 = param_1[0xb];
          if (ppppppuVar16 == param_1[0xc]) {
code_r0x000140ac8c87:
            FUN_1400bc2f0(param_1 + 10,ppppppuVar16,&pppppppuStack_190);
          }
          else {
code_r0x000140ac8a91:
            *ppppppuVar16 = pppppppuVar24;
            param_1[0xb] = param_1[0xb] + 1;
          }
LAB_140ac8c9b:
          sVar29 = sVar29 + 1;
          piVar27 = piStack_120;
        } while (sVar29 < iStack_150);
        iVar41 = (uint)lStack_148;
      }
      auStack_1a4[0] = auStack_1a4[0] + 1;
    } while ((short)auStack_1a4[0] < iVar41);
  }
  if (((longlong)param_1[0xb] - (longlong)param_1[10] >> 3 != 0) && ((char)uStack_16e != '\0')) {
    pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
    *pppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar24[1] = (undefined8 ******)0x0;
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuVar24 = 0;
    pppppppuStack_190 = pppppppuVar24;
    FUN_140070e90(pppppppuVar24,"Needs ground or near machine",0x1c);
    ppppppuVar16 = param_1[0xb];
    if (ppppppuVar16 == param_1[0xc]) {
      FUN_1400bc2f0(param_1 + 10,ppppppuVar16,&pppppppuStack_190);
    }
    else {
      *ppppppuVar16 = pppppppuVar24;
      param_1[0xb] = param_1[0xb] + 1;
    }
  }
  if ((*(int *)(param_1 + 7) == 4) && ((char)uStack_16c == '\0')) {
    ppppppuVar12 = (undefined8 ******)FUN_14154de30(0x20);
    *ppppppuVar12 = (undefined8 *****)0x0;
    ppppppuVar12[1] = (undefined8 *****)0x0;
    ppppppuVar12[2] = (undefined8 *****)0x0;
    ppppppuVar12[3] = (undefined8 *****)0xf;
    *(undefined1 *)ppppppuVar12 = 0;
    pppppppuStack_190 = (undefined8 *******)ppppppuVar12;
    FUN_140070e90(ppppppuVar12,"No mud/soil for farm",0x14);
    ppppppuVar16 = param_1[0xe];
    if (ppppppuVar16 == param_1[0xf]) {
      FUN_1400bc2f0(param_1 + 0xd,ppppppuVar16,&pppppppuStack_190);
    }
    else {
      *ppppppuVar16 = ppppppuVar12;
      param_1[0xe] = param_1[0xe] + 1;
    }
    pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
    *pppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar24[1] = (undefined8 ******)0x0;
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuVar24 = 0;
    pppppppuStack_190 = pppppppuVar24;
    FUN_140070e90(pppppppuVar24,"Mud is left by water",0x14);
    ppppppuVar16 = param_1[0xe];
    if (ppppppuVar16 == param_1[0xf]) {
      FUN_1400bc2f0(param_1 + 0xd,ppppppuVar16,&pppppppuStack_190);
    }
    else {
      *ppppppuVar16 = pppppppuVar24;
      param_1[0xe] = param_1[0xe] + 1;
    }
  }
  if (((longlong)param_1[0xb] - (longlong)param_1[10] & 0xfffffffffffffff8U) != 0)
  goto LAB_140ac9bc8;
  FUN_140ac9ec0(param_1,auStack_1a4);
  uVar37 = auStack_1a0[0];
  uVar6 = auStack_1a4[0];
  piStack_168 = (int *)0x0;
  piStack_160 = (int *)0x0;
  piVar27 = (int *)0x0;
  iVar41 = 0;
  piStack_158 = (int *)0x0;
  bVar43 = false;
  uVar22 = *(uint *)(param_1 + 7);
  if ((uVar22 == 0x13) ||
     ((uVar22 < 0x2d && ((0x18ac01048200U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0)))) {
LAB_140ac8e9b:
    bVar43 = true;
  }
  else {
    uVar22 = *(uint *)(param_1 + 7);
    if ((uVar22 == 0x26) ||
       ((uVar22 < 0x33 && ((0x4071000000000U >> ((longlong)(int)uVar22 & 0x3fU) & 1) != 0))))
    goto LAB_140ac8e9b;
  }
  uVar22 = *(uint *)(param_1 + 7);
  if (((uVar22 == 0xd) && (*(short *)((longlong)param_1 + 0x3c) == 0x16)) || (bVar43)) {
    sVar29 = (short)_DAT_1418b82f0 - auStack_19c[0];
    sVar40 = (short)_DAT_1418b82f4 - uStack_198;
    iVar41 = (int)(short)auStack_184[0];
    uVar22 = _DAT_1418b82f0 + iVar41;
    uStack_1a8 = (ushort)uVar22;
    sVar21 = uStack_188 + (short)_DAT_1418b82f4;
    piVar25 = (int *)0x0;
    piVar38 = (int *)0x0;
    uStack_16e = sVar29;
    if ((int)sVar29 <= (int)(_DAT_1418b82f0 + iVar41)) {
      do {
        iStack_180 = FUN_14010c610(0x1423ed870,sVar29,sVar40 + -1,_DAT_1418b82f8);
        for (piVar11 = piVar38; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar38 >> 2) != -1) goto LAB_140ac8fa2;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_1400723e0(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar38 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140ac8fa2:
        iStack_180 = FUN_14010c610(0x1423ed870,sVar29,sVar21 + 1,_DAT_1418b82f8);
        for (piVar11 = piVar38; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar38 >> 2) != -1) goto LAB_140ac902a;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_1400723e0(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar38 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140ac902a:
        sVar29 = sVar29 + 1;
      } while ((int)sVar29 <= (int)(_DAT_1418b82f0 + iVar41));
      uVar22 = (uint)uStack_1a8;
      param_1 = pppppppuStack_138;
    }
    sVar29 = (short)_DAT_1418b82f4 - uStack_198;
    iVar41 = (int)(short)uStack_188;
    if ((int)sVar29 <= _DAT_1418b82f4 + iVar41) {
      sVar21 = uStack_16e + -1;
      do {
        iStack_180 = FUN_14010c610(0x1423ed870,sVar21,sVar29,_DAT_1418b82f8);
        for (piVar11 = piVar38; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar38 >> 2) != -1) goto LAB_140ac911a;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_1400723e0(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar38 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140ac911a:
        iStack_180 = FUN_14010c610(0x1423ed870,uVar22 + 1 & 0xffff,sVar29,_DAT_1418b82f8);
        for (piVar11 = piVar38; piVar11 != piVar25; piVar11 = piVar11 + 1) {
          cVar5 = '\x01';
          if (piVar11 < piVar25) {
            cVar5 = -1;
          }
          if (-1 < cVar5) break;
          if (*piVar11 == iStack_180) {
            if ((int)((longlong)piVar11 - (longlong)piVar38 >> 2) != -1) goto LAB_140ac919d;
            break;
          }
        }
        if (iStack_180 != 0) {
          if (piVar25 == piVar27) {
            FUN_1400723e0(&piStack_168,piVar25,&iStack_180);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar38 = piStack_168;
          }
          else {
            *piVar25 = iStack_180;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
LAB_140ac919d:
        sVar29 = sVar29 + 1;
        param_1 = pppppppuStack_138;
      } while ((int)sVar29 <= _DAT_1418b82f4 + iVar41);
    }
    uVar37 = auStack_1a0[0];
    uVar6 = auStack_1a4[0];
    if ((*(int *)(param_1 + 7) == 0x22) && ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0))
    {
      sVar21 = 0;
      iVar41 = (short)auStack_184[0] + 1 + (int)(short)auStack_19c[0];
      sVar29 = sVar21;
      if (0 < iVar41) {
        iVar7 = (short)uStack_188 + 1 + (int)(short)uStack_198;
        sVar40 = sVar21;
        do {
          if (0 < iVar7) {
            sVar14 = sVar21;
            do {
              if (*(uint *)((longlong)param_1 +
                           ((longlong)sVar14 + (longlong)sVar40 * 0x1f) * 4 + 0x80) < 4) {
                sVar29 = sVar29 + 1;
              }
              sVar14 = sVar14 + 1;
            } while (sVar14 < iVar7);
          }
          sVar40 = sVar40 + 1;
        } while (sVar40 < iVar41);
      }
      *(short *)(*param_1[1] + 0x2e) = sVar29;
    }
  }
  else if ((uVar22 < 0x1f) && ((0x40300010U >> (uVar22 & 0x1f) & 1) != 0)) {
    uVar34 = (uint)(short)auStack_19c[0];
    uVar22 = (short)auStack_184[0] + 1 + uVar34;
    sVar29 = 0;
    piVar25 = (int *)0x0;
    piVar38 = (int *)0x0;
    uStack_16c = uVar22;
    if (0 < (int)uVar22) {
      uVar9 = (uint)(short)uStack_198;
      iStack_174 = (short)uStack_188 + 1 + uVar9;
      piVar11 = piVar27;
      do {
        sVar21 = 0;
        if (0 < iStack_174) {
          lVar23 = (longlong)sVar29 * 0x1f;
          iVar41 = iStack_174;
          lStack_148 = lVar23;
          do {
            if (*(uint *)((longlong)param_1 + (sVar21 + lVar23) * 4 + 0x80) < 4) {
              piVar11 = (int *)(ulonglong)((int)piVar11 + 1);
              iVar41 = FUN_14010c610(0x1423ed870,((short)_DAT_1418b82f0 - (short)uVar34) + sVar29,
                                     ((short)_DAT_1418b82f4 - (short)uVar9) + sVar21,_DAT_1418b82f8)
              ;
              pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar41);
              for (piVar15 = piVar38; piVar15 != piVar25; piVar15 = piVar15 + 1) {
                cVar5 = '\x01';
                if (piVar15 < piVar25) {
                  cVar5 = -1;
                }
                if (-1 < cVar5) break;
                if (*piVar15 == iVar41) {
                  if ((int)((longlong)piVar15 - (longlong)piVar38 >> 2) != -1) goto LAB_140ac93fa;
                  break;
                }
              }
              if (iVar41 != 0) {
                if (piVar25 == piVar27) {
                  FUN_1400723e0(&piStack_168,piVar25);
                  piVar25 = piStack_160;
                  piVar27 = piStack_158;
                  piVar38 = piStack_168;
                }
                else {
                  *piVar25 = iVar41;
                  piStack_160 = piVar25 + 1;
                  piVar25 = piStack_160;
                }
              }
LAB_140ac93fa:
              uVar34 = (uint)auStack_19c[0];
              uVar9 = (uint)uStack_198;
              lVar23 = lStack_148;
              iVar41 = iStack_174;
            }
            sVar21 = sVar21 + 1;
            uVar22 = uStack_16c;
          } while (sVar21 < iVar41);
        }
        iVar41 = (int)piVar11;
        sVar29 = sVar29 + 1;
      } while ((int)sVar29 < (int)uVar22);
    }
    uVar6 = auStack_1a4[0];
    uVar37 = auStack_1a0[0];
    if (((*(int *)(param_1 + 7) == 0x14) || (*(int *)(param_1 + 7) == 0x15)) &&
       ((longlong)param_1[2] - (longlong)param_1[1] >> 3 != 0)) {
      *(short *)(*param_1[1] + 0x2e) = (short)(iVar41 >> 2) + 1;
    }
  }
  else {
    iVar41 = FUN_14010c610(0x1423ed870,auStack_1a4[0],auStack_1a0[0],_DAT_1418b82f8);
    piVar25 = piStack_160;
    piVar38 = piStack_168;
    if (iVar41 != 0) {
      uVar8 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8);
      pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,uVar8);
      func_0x0001400709d0(&piStack_168,&pppppppuStack_190);
      piVar25 = piStack_160;
      piVar27 = piStack_158;
      piVar38 = piStack_168;
    }
  }
  if (*(int *)(param_1 + 7) == 0x22) {
    iVar41 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8);
    if (iVar41 != 0) {
      iVar41 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8);
      pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar41);
      if (piVar25 == piVar27) {
        FUN_1400723e0(&piStack_168,piVar25,&pppppppuStack_190);
        piVar25 = piStack_160;
        piVar27 = piStack_158;
        piVar38 = piStack_168;
      }
      else {
        *piVar25 = iVar41;
        piStack_160 = piVar25 + 1;
        piVar25 = piStack_160;
      }
    }
    if (*(int *)(param_1 + 7) == 0x22) {
      if ((*(short *)((longlong)param_1 + 0x3c) != 4) && (*(short *)((longlong)param_1 + 0x3c) != 5)
         ) goto LAB_140ac96af;
      sVar29 = _DAT_1418b82f8 - 1;
      if (((((short)uVar6 < 0) || ((_DAT_14250445c <= (short)uVar6 || ((short)uVar37 < 0)))) ||
          (_DAT_142504460 <= (short)uVar37)) ||
         ((((sVar29 < 0 || (_DAT_142504464 <= sVar29)) || (_DAT_142504428 == 0)) ||
          (lVar23 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)(_DAT_142504428 + ((longlong)(short)uVar6 >> 4) * 8) +
                       ((longlong)(short)uVar37 >> 4) * 8) + (longlong)sVar29 * 8), lVar23 == 0))))
      {
        uVar22 = 0;
      }
      else {
        uVar22 = (int)(short)uVar6 & 0x8000000f;
        if ((int)uVar22 < 0) {
          uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
        }
        uVar34 = (int)(short)uVar37 & 0x8000000f;
        if ((int)uVar34 < 0) {
          uVar34 = (uVar34 - 1 | 0xfffffff0) + 1;
        }
        uVar22 = (uint)*(ushort *)
                        (lVar23 + (((longlong)(int)uVar22 + 5) * 0x10 + (longlong)(int)uVar34) * 2);
      }
      if (uVar22 < 0x37) {
        if ((0x48024008000010U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0) goto LAB_140ac9639;
LAB_140ac960a:
        if (uVar22 < 0x35) {
          if ((0x12009002000040U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0) goto LAB_140ac9639;
        }
        else if ((((uVar22 == 0x37) || (uVar22 == 0x3a)) || (uVar22 == 0x3d)) ||
                ((uVar22 == 0x1dd || (uVar22 == 0x1ff)))) goto LAB_140ac9639;
      }
      else {
        if (((uVar22 != 0x39) && (uVar22 != 0x3c)) &&
           ((uVar22 != 0x3f && ((uVar22 != 0x1df && (uVar22 != 0x201)))))) goto LAB_140ac960a;
LAB_140ac9639:
        iVar41 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8 - 1);
        if (iVar41 != 0) {
          iVar41 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8 - 1);
          pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar41);
          if (piVar25 == piVar27) {
            FUN_1400723e0(&piStack_168,piVar25,&pppppppuStack_190);
            piVar25 = piStack_160;
            piVar27 = piStack_158;
            piVar38 = piStack_168;
          }
          else {
            *piVar25 = iVar41;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
      }
LAB_140ac96af:
      if ((*(short *)((longlong)param_1 + 0x3c) == 3) || (*(short *)((longlong)param_1 + 0x3c) == 5)
         ) {
        sVar29 = _DAT_1418b82f8 + 1;
        if ((((short)uVar6 < 0) ||
            (((_DAT_14250445c <= (short)uVar6 || ((short)uVar37 < 0)) ||
             (_DAT_142504460 <= (short)uVar37)))) ||
           ((((sVar29 < 0 || (_DAT_142504464 <= sVar29)) || (_DAT_142504428 == 0)) ||
            (lVar23 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(_DAT_142504428 + ((longlong)(short)uVar6 >> 4) * 8) +
                         ((longlong)(short)uVar37 >> 4) * 8) + (longlong)sVar29 * 8), lVar23 == 0)))
           ) {
          uVar22 = 0;
        }
        else {
          uVar22 = (int)(short)uVar6 & 0x8000000f;
          if ((int)uVar22 < 0) {
            uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
          }
          uVar34 = (int)(short)uVar37 & 0x8000000f;
          if ((int)uVar34 < 0) {
            uVar34 = (uVar34 - 1 | 0xfffffff0) + 1;
          }
          uVar22 = (uint)*(ushort *)
                          (lVar23 + (((longlong)(int)uVar22 + 5) * 0x10 + (longlong)(int)uVar34) * 2
                          );
        }
        if (uVar22 < 0x36) {
          if ((0x24012004000020U >> ((ulonglong)uVar22 & 0x3f) & 1) == 0) {
LAB_140ac97b3:
            if (uVar22 < 0x35) {
              if ((0x12009002000040U >> ((ulonglong)uVar22 & 0x3f) & 1) != 0) goto LAB_140ac97e2;
            }
            else if ((((uVar22 == 0x37) || (uVar22 == 0x3a)) || (uVar22 == 0x3d)) ||
                    ((uVar22 == 0x1dd || (uVar22 == 0x1ff)))) goto LAB_140ac97e2;
            goto LAB_140ac9854;
          }
        }
        else if (((uVar22 != 0x38) && (uVar22 != 0x3b)) &&
                ((uVar22 != 0x3e && ((uVar22 != 0x1de && (uVar22 != 0x200)))))) goto LAB_140ac97b3;
LAB_140ac97e2:
        iVar41 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8 + 1);
        if (iVar41 != 0) {
          iVar41 = FUN_14010c610(0x1423ed870,uVar6,uVar37,_DAT_1418b82f8 + 1);
          pppppppuStack_190 = (undefined8 *******)CONCAT44(pppppppuStack_190._4_4_,iVar41);
          if (piVar25 == piVar27) {
            FUN_1400723e0(&piStack_168,piVar25,&pppppppuStack_190);
            piVar25 = piStack_160;
            piVar38 = piStack_168;
          }
          else {
            *piVar25 = iVar41;
            piStack_160 = piVar25 + 1;
            piVar25 = piStack_160;
          }
        }
      }
    }
  }
LAB_140ac9854:
  uVar26 = (longlong)piVar25 - (longlong)piVar38 >> 2;
  if (uVar26 == 0) {
    pppppppuVar24 = (undefined8 *******)FUN_14154de30(0x20);
    *pppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar24[1] = (undefined8 ******)0x0;
    pppppppuVar24[2] = (undefined8 ******)0x0;
    pppppppuVar24[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuVar24 = 0;
    pppppppuStack_138 = pppppppuVar24;
    FUN_140070e90(pppppppuVar24,"No access",9);
    ppppppuVar16 = param_1[0xb];
    if (ppppppuVar16 == param_1[0xc]) {
      FUN_1400bc2f0(param_1 + 10,ppppppuVar16,&pppppppuStack_138);
    }
    else {
      *ppppppuVar16 = pppppppuVar24;
      param_1[0xb] = param_1[0xb] + 1;
    }
  }
  else {
    lVar23 = 0;
    uStack_16c = 0;
    ppppppuVar16 = param_1[1];
    if ((longlong)param_1[2] - (longlong)ppppppuVar16 >> 3 != 0) {
      do {
        uVar28 = 0;
        uVar36 = uVar28;
        if (*(longlong *)(*(longlong *)((longlong)ppppppuVar16 + lVar23) + 0x160) !=
            *(longlong *)(*(longlong *)((longlong)ppppppuVar16 + lVar23) + 0x158)) {
          do {
            *(undefined1 *)
             (uVar36 + *(longlong *)(*(longlong *)((longlong)ppppppuVar16 + lVar23) + 0x158)) = 0;
            uVar22 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar22;
            uVar36 = uVar36 + 1;
            ppppppuVar16 = param_1[1];
          } while ((ulonglong)(longlong)(int)uVar22 <
                   (ulonglong)
                   (*(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x160) -
                   *(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x158)));
        }
        iVar41 = 0;
        piVar27 = piVar38;
        iVar7 = iVar41;
        do {
          piVar25 = piVar27;
          uVar33 = 0;
          iVar35 = 0;
          uVar36 = uVar33;
          uVar28 = uVar33;
          if (*(longlong *)(*(longlong *)((longlong)ppppppuVar16 + lVar23) + 0x148) -
              *(longlong *)(*(longlong *)((longlong)ppppppuVar16 + lVar23) + 0x140) >> 2 != 0) {
            do {
              if (*(int *)(*(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x140) +
                          uVar33 * 4) == *piVar25) {
                *(undefined1 *)
                 (uVar33 + *(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x158)) =
                     1;
                uVar28 = (ulonglong)((int)uVar28 + 1);
              }
              iVar35 = (int)uVar28;
              uVar22 = (int)uVar36 + 1;
              uVar33 = uVar33 + 1;
              ppppppuVar16 = param_1[1];
              uVar36 = (ulonglong)uVar22;
            } while ((ulonglong)(longlong)(int)uVar22 <
                     (ulonglong)
                     (*(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x148) -
                      *(longlong *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x140) >> 2));
          }
          if (iVar41 < iVar35) {
            iVar41 = iVar35;
          }
          iVar7 = iVar7 + 1;
          piVar27 = piVar25 + 1;
        } while ((ulonglong)(longlong)iVar7 < uVar26);
        if (iVar41 < *(short *)(*(longlong *)(lVar23 + (longlong)ppppppuVar16) + 0x170)) {
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0xf;
          pppppppuStack_98 = (undefined8 *******)0x0;
          uStack_b0 = 0;
          ppppppuStack_a8 = (undefined8 ******)0x0;
          uStack_a0 = 0xf;
          pppppppuStack_b8 = (undefined8 *******)0x0;
          FUN_140a41e70(*(longlong *)(lVar23 + (longlong)ppppppuVar16),&pppppppuStack_b8);
          pppppppuStack_138 = (undefined8 *******)ppppppuStack_a8;
          uVar20 = 0xffff;
          if (0x7fffffffffffffffU - (longlong)ppppppuStack_a8 < 0xd) {
            ppppppuVar16 = ppppppuStack_a8;
            lVar23 = FUN_140066e50();
            lVar17 = CONCAT62((int6)((ulonglong)ppppppuVar16 >> 0x10),
                              CONCAT11(*(undefined1 *)(lVar23 * 2 + 0xac8ab7),(byte)ppppppuVar16));
            uVar3 = (undefined7)((ulonglong)lVar23 >> 8);
            cVar5 = (char)piVar25[1];
            pcVar18 = (char *)(CONCAT71(uVar3,cVar5) + -0x75);
            *pcVar18 = *pcVar18 + cVar5;
            cVar5 = *(char *)((longlong)piVar25 + 5);
            pcVar18 = (char *)((uVar26 - 0x54) + lVar17 * 4);
            *pcVar18 = *pcVar18 + (char)uVar26;
            pcVar18 = (char *)(CONCAT71(uVar3,cVar5) + -0x75);
            cVar5 = (char)(uVar26 >> 8);
            *pcVar18 = *pcVar18 + cVar5;
            pcVar18 = (char *)(CONCAT71(uVar3,*(char *)((longlong)piVar25 + 6)) + -0x33ff5375);
            *pcVar18 = *pcVar18 + (char)((ushort)uVar20 >> 8);
            *(byte *)(uVar26 - 0x752fff54) = *(byte *)(uVar26 - 0x752fff54) | (byte)ppppppuVar16;
            acStack_1f8[lVar17 * 4] = acStack_1f8[lVar17 * 4] + *(char *)((longlong)piVar25 + 7);
            pcVar18 = (char *)((uVar26 - 0x73dfff54) + lVar17 * 4);
            *pcVar18 = *pcVar18 + (char)uVar20;
            acStack_1f8[lVar17 * 4] = acStack_1f8[lVar17 * 4] + cVar5;
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
          uVar36 = (longlong)ppppppuStack_a8 + 0xd;
          uVar28 = 0xf;
          pppppppuVar24 = &pppppppuStack_78;
          if (0xf < uVar36) {
            uVar28 = uVar36 | 0xf;
            if (uVar28 < 0x8000000000000000) {
              if (uVar28 < 0x16) {
                uVar28 = 0x16;
              }
            }
            else {
              uVar28 = 0x7fffffffffffffff;
            }
            pppppppuVar24 = (undefined8 *******)FUN_140071d90(uVar28 + 1);
            pppppppuStack_78 = pppppppuVar24;
          }
          uStack_68 = uVar36;
          uStack_60 = uVar28;
          *pppppppuVar24 = (undefined8 ******)0x7365636361206f4e;
          *(undefined4 *)(pppppppuVar24 + 1) = 0x6f742073;
          *(undefined1 *)((longlong)pppppppuVar24 + 0xc) = 0x20;
          func_0x00014154f29e((longlong)pppppppuVar24 + 0xd,pppppppuStack_190,pppppppuStack_138);
          *(undefined1 *)((longlong)pppppppuVar24 + uVar36) = 0;
          uVar28 = uStack_60;
          uVar36 = uStack_68;
          pppppppuVar24 = pppppppuStack_78;
          pppppppuStack_98 = pppppppuStack_78;
          uStack_90 = uStack_70;
          uStack_88 = uStack_68;
          uStack_80 = uStack_60;
          pppppppuVar13 = (undefined8 *******)FUN_14154de30(0x20);
          *pppppppuVar13 = (undefined8 ******)0x0;
          pppppppuVar13[1] = (undefined8 ******)0x0;
          pppppppuVar13[2] = (undefined8 ******)0x0;
          pppppppuVar13[3] = (undefined8 ******)0xf;
          *(undefined1 *)pppppppuVar13 = 0;
          pppppppuStack_138 = pppppppuVar13;
          if ((undefined8 ********)pppppppuVar13 != &pppppppuStack_98) {
            pppppppuVar19 = &pppppppuStack_98;
            if (0xf < uVar28) {
              pppppppuVar19 = pppppppuVar24;
            }
            FUN_140070e90(pppppppuVar13,pppppppuVar19,uVar36);
          }
          ppppppuVar16 = param_1[0xb];
          if (ppppppuVar16 == param_1[0xc]) {
            FUN_1400bc2f0(param_1 + 10,ppppppuVar16,&pppppppuStack_138);
          }
          else {
            *ppppppuVar16 = pppppppuVar13;
            param_1[0xb] = param_1[0xb] + 1;
          }
          FUN_140070e10(&pppppppuStack_b8);
          FUN_140070e10(&pppppppuStack_98);
        }
        uStack_16c = uStack_16c + 1;
        lVar23 = lVar23 + 8;
        ppppppuVar16 = param_1[1];
      } while ((ulonglong)(longlong)(int)uStack_16c <
               (ulonglong)((longlong)param_1[2] - (longlong)ppppppuVar16 >> 3));
    }
  }
  FUN_140070d10(&piStack_168);
LAB_140ac9bc8:
  FUN_140070d10(&piStack_130);
  FUN_14013d260(auStack_d0);
  FUN_140070d70(auStack_e8);
  FUN_140070d70(auStack_100);
  FUN_140070d70(&lStack_118);
  FUN_14154de00(uStack_58 ^ (ulonglong)acStack_1f8);
  return;
}

