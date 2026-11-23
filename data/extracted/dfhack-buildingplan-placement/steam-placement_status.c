/* 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16 1403c9d10..1403caf00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c9d10(undefined8 *param_1,short param_2,short param_3,short param_4,int param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  char *pcVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ushort uVar21;
  ushort uVar22;
  int *piVar23;
  undefined8 uVar24;
  uint uVar25;
  int iVar26;
  ushort uVar27;
  int *piVar28;
  int *piVar29;
  ushort uVar30;
  short sVar31;
  uint uVar32;
  ulonglong uVar33;
  bool bVar34;
  bool bVar35;
  undefined8 *puStackX_8;
  undefined2 uStackX_10;
  ushort *puVar36;
  ushort *puVar37;
  ulonglong uVar38;
  ushort auStack_f8 [2];
  ushort auStack_f4 [2];
  undefined8 *puStack_f0;
  ushort uStack_e8;
  ushort auStack_e4 [2];
  char cStack_e0;
  ushort uStack_de;
  uint uStack_dc;
  int iStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  undefined8 *puStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((((param_2 != *(short *)((longlong)param_1 + 0x1034)) ||
       (param_3 != *(short *)((longlong)param_1 + 0x1036))) ||
      (param_4 != *(short *)(param_1 + 0x207))) || (param_5 != *(int *)((longlong)param_1 + 0x103c))
     ) {
    *(short *)((longlong)param_1 + 0x1034) = param_2;
    *(short *)((longlong)param_1 + 0x1036) = param_3;
    *(short *)(param_1 + 0x207) = param_4;
    *(int *)((longlong)param_1 + 0x103c) = param_5;
    if (_DAT_14266cf78 < 2) {
      _DAT_14266cf78 = 2;
    }
    puStackX_8 = param_1;
    FUN_1400bcfe0(param_1 + 10);
    FUN_1400bcfe0(param_1 + 0xd);
    puVar37 = auStack_f4;
    puVar36 = auStack_f8;
    FUN_1403caf40(param_1,*(undefined2 *)(param_1 + 7),*(undefined2 *)((longlong)param_1 + 0x3c),
                  *(undefined4 *)(param_1 + 8),puVar36,auStack_e4,puVar37,&uStackX_10);
    uVar15 = auStack_e4[0];
    uVar27 = uStackX_10;
    uStack_d4 = uStack_d4 & 0xffffff00;
    uVar25 = *(uint *)(param_1 + 7);
    uStack_de = uStackX_10;
    uStack_e8 = auStack_e4[0];
    auStack_e4[0] = auStack_f8[0];
    if ((uVar25 == 0x14) || ((uVar25 < 0x1f && ((0x40200010U >> (uVar25 & 0x1f) & 1) != 0)))) {
      uVar33 = CONCAT71((uint7)(byte)(auStack_f4[0] >> 8),1);
      uStack_d4 = (uint)uVar33;
      uVar22 = auStack_f4[0];
      uVar21 = auStack_f8[0];
      if ((short)auStack_f8[0] <= (short)auStack_f4[0]) {
        do {
          if ((short)uVar15 <= (short)uVar27) {
            do {
              puVar36 = (ushort *)
                        CONCAT71((int7)((ulonglong)puVar36 >> 8),*(int *)(param_1 + 7) == 0x14);
              iVar4 = FUN_1414c9d70(0x1423f3970,uVar21,uVar15,param_4,puVar36);
              if ((iVar4 == 0) &&
                 ((*(int *)(param_1 + 7) == 0x14 || (*(int *)(param_1 + 7) == 0x15)))) {
                uVar33 = uVar33 & 0xffffffffffffff00;
              }
              iVar4 = FUN_1414ca6d0(0x1423f3970,uVar21,uVar15,param_4);
              if ((iVar4 == 0) && (uVar33 = uVar33 & 0xff, *(int *)(param_1 + 7) == 4)) {
                uVar33 = 0;
              }
              uVar15 = uVar15 + 1;
            } while ((short)uVar15 <= (short)uVar27);
            uStack_d4 = (uint)uVar33;
            uVar15 = uStack_e8;
            uVar22 = auStack_f4[0];
          }
          uVar21 = uVar21 + 1;
        } while ((short)uVar21 <= (short)uVar22);
        if (((char)uVar33 == '\0') && (cVar3 = FUN_1403cb720(param_1), cVar3 != '\0')) {
          puVar9 = (undefined8 *)FUN_1415530e0(0x20);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0xf;
          *(undefined1 *)puVar9 = 0;
          puStack_f0 = puVar9;
          FUN_140070f00(puVar9,"Disconnected",0xc);
          puVar19 = (undefined8 *)param_1[0xb];
          if (puVar19 == (undefined8 *)param_1[0xc]) {
            FUN_1400bc360(param_1 + 10,puVar19,&puStack_f0);
          }
          else {
            *puVar19 = puVar9;
            param_1[0xb] = param_1[0xb] + 8;
          }
        }
      }
    }
    uVar15 = auStack_f4[0];
    if (((*(int *)(param_1 + 7) == 0x17) && (*(short *)((longlong)param_1 + 0x3c) == 1)) &&
       ((DAT_1418c341c & 0x27) == 0)) {
      puVar9 = (undefined8 *)FUN_1415530e0(0x20);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puStack_f0 = puVar9;
      FUN_140070f00(puVar9,"Need trigger type",0x11);
      puVar19 = (undefined8 *)param_1[0xb];
      if (puVar19 == (undefined8 *)param_1[0xc]) {
        FUN_1400bc360(param_1 + 10,puVar19,&puStack_f0);
      }
      else {
        *puVar19 = puVar9;
        param_1[0xb] = param_1[0xb] + 8;
      }
    }
    uVar21 = auStack_e4[0];
    cStack_e0 = '\0';
    uStackX_10 = (ushort)uStackX_10._1_1_ << 8;
    lStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar38 = CONCAT62((int6)((ulonglong)puVar37 >> 0x10),uVar15);
    uVar33 = CONCAT62((int6)((ulonglong)puVar36 >> 0x10),auStack_e4[0]);
    FUN_1405c4730(0x142410388,&lStack_98,*(undefined2 *)(param_1 + 7),
                  *(undefined2 *)((longlong)param_1 + 0x3c),uVar33,uStack_e8,uVar38,uVar27,param_4,
                  0 < param_5);
    if (lStack_90 - lStack_98 >> 1 != 0) {
      cStack_e0 = '\x01';
      iVar4 = (int)(_DAT_142410d70 - _DAT_142410d68 >> 3) + -1;
      lVar18 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          cVar3 = (**(code **)(**(longlong **)(_DAT_142410d68 + lVar18 * 8) + 200))();
          if (cVar3 != '\0') {
            uStackX_10 = CONCAT11(uStackX_10._1_1_,1);
            break;
          }
          lVar18 = lVar18 + -1;
        } while (-1 < lVar18);
      }
    }
    uVar22 = (uVar27 - uStack_e8) + 1;
    uVar21 = (uVar15 - uVar21) + 1;
    if (0 < (short)uVar21) {
      puVar19 = param_1 + 0x10;
      uVar20 = (ulonglong)uVar21;
      do {
        if (0 < (short)uVar22) {
          func_0x000141554566(puVar19,0,(ulonglong)uVar22 << 2);
        }
        puVar19 = (undefined8 *)((longlong)puVar19 + 0x7c);
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    uStack_c8 = uStack_c8 & 0xffffff00;
    auStack_f8[0] = auStack_e4[0];
    uVar21 = auStack_e4[0];
    uVar22 = uStack_e8;
    if ((short)auStack_e4[0] <= (short)uVar15) {
      do {
        uVar25 = (uint)auStack_f8[0];
        uVar32 = (uint)(short)uVar22;
        uVar15 = auStack_f8[0];
        if ((short)uVar22 <= (short)uVar27) {
          uVar16 = (uint)(short)auStack_f8[0];
          iStack_c4 = (int)(short)uVar21;
          iStack_d8 = uVar16 - iStack_c4;
          puStack_f0 = (undefined8 *)((longlong)iStack_d8 * 0x1f);
          uStack_dc = uVar32;
          uStack_d0 = uVar16;
          do {
            iStack_cc = 0;
            uVar38 = uVar38 & 0xffffffffffffff00;
            uVar33 = uVar33 & 0xffffffff00000000;
            uVar30 = (ushort)uVar32;
            sVar31 = (short)uVar25;
            uVar5 = FUN_140a9b9e0(uVar25 & 0xffff,uVar32 & 0xffff,param_4,1,uVar33,1,uVar38);
            puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,uVar5);
            iVar4 = 6;
            if (((((sVar31 < 0) || (_DAT_14250a55c <= (int)uVar16)) ||
                 (((short)uVar30 < 0 ||
                  ((uVar16 = (uint)(short)uVar30, _DAT_14250a560 <= (int)uVar16 || (param_4 < 0)))))
                 ) || (_DAT_14250a564 <= param_4)) ||
               ((_DAT_14250a528 == 0 ||
                (lVar18 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(_DAT_14250a528 + (longlong)(sVar31 >> 4) * 8) +
                             (longlong)((short)uVar30 >> 4) * 8) + (longlong)param_4 * 8),
                lVar18 == 0)))) {
LAB_1403ca2b0:
              iVar8 = *(int *)(param_1 + 7);
              if ((iVar8 == 0x14) || (iVar8 == 0x15)) {
                uVar33 = CONCAT71((int7)(uVar33 >> 8),iVar8 == 0x14);
                iVar8 = FUN_1414c9d70(0x1423f3970,uVar25 & 0xffff,uVar32 & 0xffff,param_4,uVar33);
                if (iVar8 != 0) {
                  lVar18 = (longlong)
                           ((longlong)(int)((int)(short)uVar30 - uStack_dc) + (longlong)puStack_f0)
                           * 4;
                  if ((char)uStack_d4 == '\0') {
                    *(undefined4 *)(lVar18 + 0x80 + (longlong)param_1) = 4;
                    uVar16 = (int)sVar31;
                  }
                  else {
                    uVar33 = CONCAT71((int7)(uVar33 >> 8),*(int *)(param_1 + 7) == 0x14);
                    uVar5 = FUN_1414c9d70(0x1423f3970,uVar25 & 0xffff,uVar32 & 0xffff,param_4,uVar33
                                         );
                    *(undefined4 *)(lVar18 + 0x80 + (longlong)param_1) = uVar5;
                    uVar16 = (int)sVar31;
                  }
                  goto LAB_1403ca979;
                }
              }
              if ((*(int *)(param_1 + 7) == 4) &&
                 (iVar8 = FUN_1414ca6d0(0x1423f3970,uVar25 & 0xffff,uVar32 & 0xffff,param_4),
                 iVar8 != 0)) {
                puVar12 = (undefined1 *)
                          ((longlong)(int)((int)(short)uVar30 - uStack_dc) + (longlong)puStack_f0);
                if ((char)uStack_d4 == '\0') {
                  *(undefined4 *)((longlong)param_1 + (longlong)puVar12 * 4 + 0x80) = 4;
                  uVar16 = (int)sVar31;
                }
                else {
                  uVar5 = FUN_1414ca6d0(0x1423f3970,uVar25 & 0xffff,uVar32 & 0xffff,param_4);
                  *(undefined4 *)((longlong)param_1 + (longlong)puVar12 * 4 + 0x80) = uVar5;
                  uVar16 = (int)sVar31;
                }
              }
              else {
                uVar15 = auStack_f8[0];
                bVar35 = true;
                bVar34 = (char)uStackX_10 != '\0';
                if (bVar34) {
                  iStack_cc = 5;
                  uVar38 = uVar38 & 0xffffffffffffff00;
                  uVar33 = CONCAT44((int)(uVar33 >> 0x20),5);
                  iVar4 = FUN_140a9b9e0(auStack_f8[0],uVar32 & 0xffff,param_4,1,uVar33,1,uVar38);
                }
                uVar25 = *(uint *)(param_1 + 7);
                if ((uVar25 == 0x13) ||
                   ((uVar25 < 0x28 && ((0xac01040000U >> ((longlong)(int)uVar25 & 0x3fU) & 1) != 0))
                   )) {
                  iStack_cc = 1;
                  uVar38 = uVar38 & 0xffffffffffffff00;
                  uVar33 = CONCAT44((int)(uVar33 >> 0x20),1);
                  iVar8 = FUN_140a9b9e0(uVar15,uVar32 & 0xffff,param_4,1,uVar33,1,uVar38);
                  if ((!bVar34) || (iVar4 == 0)) {
                    bVar34 = true;
                    iVar4 = iVar8;
                  }
                }
                bVar2 = false;
                if (*(int *)(param_1 + 7) == 0xd) {
                  if (*(short *)((longlong)param_1 + 0x3c) == 6) {
LAB_1403ca49b:
                    bVar2 = true;
                  }
                }
                else if ((*(int *)(param_1 + 7) == 5) &&
                        ((*(short *)((longlong)param_1 + 0x3c) == 4 ||
                         ((ushort)(*(short *)((longlong)param_1 + 0x3c) - 5U) < 2))))
                goto LAB_1403ca49b;
                iVar8 = *(int *)(param_1 + 8);
                iVar17 = iStack_cc;
                if (iVar8 != -1) {
                  uVar20 = _DAT_142519720 - _DAT_142519718 >> 3;
                  uVar25 = (uint)uVar20;
                  if (uVar25 == 0) {
                    iVar13 = -1;
                    iVar26 = -1;
                  }
                  else {
                    iVar26 = 0;
                    while (0x40 < (int)uVar25) {
                      uVar25 = (uint)(uVar20 >> 1) & 0x7fffffff;
                      iVar13 = uVar25 + iVar26;
                      if (iVar8 < *(int *)(*(longlong *)(_DAT_142519718 + (longlong)iVar13 * 8) +
                                          0x28)) {
                        iVar13 = iVar26;
                      }
                      uVar25 = (int)uVar20 - uVar25;
                      uVar20 = (ulonglong)uVar25;
                      iVar26 = iVar13;
                    }
                    iVar13 = iVar26 + (int)uVar20;
                  }
                  if ((iVar13 != -1) && (iVar26 < iVar13)) {
                    lVar18 = (longlong)iVar26;
                    do {
                      if (iVar8 == *(int *)(*(longlong *)(_DAT_142519718 + lVar18 * 8) + 0x28)) {
                        lVar18 = *(longlong *)(_DAT_142519718 + (longlong)iVar26 * 8);
                        if ((lVar18 != 0) && (*(char *)(lVar18 + 0xbc34) != '\0'))
                        goto LAB_1403ca550;
                        break;
                      }
                      iVar26 = iVar26 + 1;
                      lVar18 = lVar18 + 1;
                    } while (lVar18 < iVar13);
                  }
                }
                if (bVar2) {
LAB_1403ca550:
                  if ((iStack_d8 != 1) || ((int)(short)uVar30 - uStack_dc != 1)) {
                    uVar38 = uVar38 & 0xffffffffffffff00;
                    uVar33 = CONCAT44((int)(uVar33 >> 0x20),2);
                    iVar8 = FUN_140a9b9e0(auStack_f8[0],uVar32 & 0xffff,param_4,1,uVar33,1,uVar38);
                    if ((!bVar34) || (iVar17 = 2, iVar4 == 0)) {
                      bVar34 = true;
                      iVar17 = 2;
                      iVar4 = iVar8;
                    }
                  }
                }
                uVar5 = (undefined4)(uVar33 >> 0x20);
                if (*(int *)(param_1 + 7) == 0x22) {
                  if (iVar4 == 0) {
                    uVar33 = CONCAT62((int6)(uVar33 >> 0x10),param_4);
                    cVar3 = FUN_140ac2e80(auStack_e4[0],auStack_f4[0],uStack_e8,uStack_de,uVar33);
                    uVar5 = (undefined4)(uVar33 >> 0x20);
                    if (cVar3 != '\0') goto LAB_1403ca612;
                  }
                  iVar17 = 4;
                  uVar38 = uVar38 & 0xffffffffffffff00;
                  uVar33 = CONCAT44(uVar5,4);
                  iVar8 = FUN_140a9b9e0(auStack_f8[0],uVar32 & 0xffff,param_4,1,uVar33,1,uVar38);
                  if ((!bVar34) || (iVar4 == 0)) {
                    bVar35 = false;
                    iVar4 = iVar8;
                  }
                }
LAB_1403ca612:
                if ((int)puStack_c0 == 0) {
LAB_1403ca65d:
                  iVar4 = *(int *)(param_1 + 7);
                  if (iVar4 == 0x13) {
                    uVar15 = auStack_e4[0];
                    if ((param_5 == 0) || (uVar15 = auStack_f4[0], param_5 == 1)) {
                      if (auStack_f8[0] == uVar15) {
LAB_1403ca6aa:
                        if ((int)puStack_c0 != 0) {
                          *(undefined4 *)
                           ((longlong)param_1 +
                           (longlong)
                           ((longlong)(int)((int)(short)uVar30 - uStack_dc) + (longlong)puStack_f0)
                           * 4 + 0x80) = 5;
                          iVar4 = 5;
                          goto LAB_1403ca869;
                        }
                      }
                    }
                    else {
                      uVar15 = uStack_e8;
                      if (((param_5 == 2) || (uVar15 = uStack_de, param_5 == 3)) &&
                         (uVar30 == uVar15)) goto LAB_1403ca6aa;
                    }
LAB_1403ca6f8:
                    if ((auStack_f8[0] == auStack_f4[0]) && (uVar30 == uStack_de)) {
                      uVar33 = CONCAT62((int6)(uVar33 >> 0x10),param_4);
                      cVar3 = FUN_140ac2e80(auStack_e4[0],auStack_f4[0],uStack_e8,uStack_de,uVar33);
                      if (cVar3 == '\0') {
                        puVar9 = (undefined8 *)FUN_1415530e0(0x20);
                        *puVar9 = 0;
                        puVar9[1] = 0;
                        puVar9[2] = 0;
                        puVar9[3] = 0xf;
                        *(undefined1 *)puVar9 = 0;
                        puStack_c0 = puVar9;
                        FUN_140070f00(puVar9,"Needs walkable perimeter",0x18);
                        puVar19 = (undefined8 *)param_1[0xb];
                        if (puVar19 == (undefined8 *)param_1[0xc]) {
                          FUN_1400bc360(param_1 + 10,puVar19,&puStack_c0);
                        }
                        else {
                          *puVar19 = puVar9;
                          param_1[0xb] = param_1[0xb] + 8;
                        }
                      }
                    }
                  }
                  else if (((iVar4 == 0x18) || (iVar4 == 0x12)) ||
                          ((iVar4 == 0x22 && (((int)puStack_c0 != 0 && (bVar35))))))
                  goto LAB_1403ca6f8;
                  iVar4 = 0;
                  iVar8 = (int)(short)uVar30 - uStack_dc;
                  if (*(int *)(param_1 + 7) == 0x21) {
                    if ((char)param_5 == '\0') {
                      if (iStack_d8 == 0) {
                        bVar35 = iVar8 == 1;
LAB_1403ca7e6:
                        if (bVar35) {
LAB_1403ca7e8:
                          iVar4 = 1;
                        }
                      }
                    }
                    else if (((char)param_5 == '\x01') || ((char)param_5 == '\x02')) {
                      if ((iStack_d8 == 0) && (iVar8 == 0)) goto LAB_1403ca7e8;
                    }
                    else if (((char)param_5 == '\x03') && (iStack_d8 == 1)) {
                      bVar35 = iVar8 == 0;
                      goto LAB_1403ca7e6;
                    }
                    *(int *)((longlong)param_1 +
                            (longlong)((longlong)iVar8 + (longlong)puStack_f0) * 4 + 0x80) = iVar4;
                  }
                  else {
                    lVar18 = (longlong)((longlong)iVar8 + (longlong)puStack_f0) * 4;
                    uVar38 = CONCAT44((int)(uVar38 >> 0x20),uStack_dc);
                    uVar33 = CONCAT44((int)(uVar33 >> 0x20),iVar8);
                    cVar3 = FUN_1405658a0(*(int *)(param_1 + 7),
                                          *(undefined2 *)((longlong)param_1 + 0x3c),
                                          *(undefined4 *)(param_1 + 8),iStack_d8,uVar33,iStack_c4,
                                          uVar38,(int)param_4);
                    if (cVar3 == '\0') {
                      *(undefined4 *)(lVar18 + 0x80 + (longlong)param_1) = 0;
                      iVar4 = 0;
                    }
                    else {
                      *(undefined4 *)(lVar18 + 0x80 + (longlong)param_1) = 1;
                      iVar4 = 1;
                    }
                  }
                }
                else if (iVar17 == 0) {
                  *(int *)((longlong)param_1 +
                          (longlong)
                          ((longlong)(int)((int)(short)uVar30 - uStack_dc) + (longlong)puStack_f0) *
                          4 + 0x80) = (int)puStack_c0;
                  iVar4 = (int)puStack_c0;
                }
                else {
                  if (iVar4 == 0) goto LAB_1403ca65d;
                  *(int *)((longlong)param_1 +
                          (longlong)
                          ((longlong)(int)((int)(short)uVar30 - uStack_dc) + (longlong)puStack_f0) *
                          4 + 0x80) = iVar4;
                }
LAB_1403ca869:
                if ((*(int *)(param_1 + 7) == 4) && (iVar4 == 0)) {
                  uVar16 = (uint)(short)auStack_f8[0];
                  uVar25 = uVar16;
                  if (((((-1 < (short)auStack_f8[0]) && ((int)uVar16 < _DAT_14250a55c)) &&
                       (-1 < (short)uVar30)) && (((short)uVar30 < _DAT_14250a560 && (-1 < param_4)))
                      ) && ((param_4 < _DAT_14250a564 &&
                            ((_DAT_14250a528 != 0 &&
                             (lVar18 = *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)
                                            (_DAT_14250a528 +
                                            (longlong)((short)auStack_f8[0] >> 4) * 8) +
                                          (longlong)((short)uVar30 >> 4) * 8) +
                                        (longlong)param_4 * 8), lVar18 != 0)))))) {
                    uVar6 = uVar16 & 0x8000000f;
                    if ((int)uVar6 < 0) {
                      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
                    }
                    uVar7 = (int)(short)uVar30 & 0x8000000f;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                    }
                    if ((*(uint *)(lVar18 + 0x2a0 +
                                  ((longlong)(int)uVar6 * 0x10 + (longlong)(int)uVar7) * 4) & 0x8000
                        ) != 0) {
                      cVar3 = FUN_1414eb3a0(0x1423f3970,auStack_f8[0],uVar32 & 0xffff,param_4);
                      uStack_c8 = uStack_c8 & 0xff;
                      if (cVar3 != '\0') {
                        uStack_c8 = 1;
                      }
                    }
                  }
                }
                else {
                  uVar16 = uStack_d0;
                  uVar25 = (uint)auStack_f8[0];
                }
              }
            }
            else {
              uVar6 = (int)sVar31 & 0x8000000f;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
              }
              uVar7 = uVar16 & 0x8000000f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
              }
              if ((((*(uint *)(lVar18 + 0x2a0 +
                              ((longlong)(int)uVar6 * 0x10 + (longlong)(int)uVar7) * 4) & 0x200) ==
                    0) || (uVar6 = *(uint *)(param_1 + 7), uVar6 == 0x14)) ||
                 ((uVar6 < 0x1f && ((0x40200010U >> (uVar6 & 0x1f) & 1) != 0)))) goto LAB_1403ca2b0;
              *(undefined4 *)
               ((longlong)param_1 +
               (longlong)((longlong)(int)(uVar16 - uStack_dc) + (longlong)puStack_f0) * 4 + 0x80) =
                   7;
              uVar16 = (int)sVar31;
            }
LAB_1403ca979:
            uVar15 = (ushort)uVar25;
            uVar32 = (uint)(ushort)(uVar30 + 1);
            uVar27 = uStack_de;
            uVar21 = auStack_e4[0];
            uVar22 = uStack_e8;
          } while ((short)(uVar30 + 1) <= (short)uStack_de);
        }
        auStack_f8[0] = uVar15 + 1;
        uVar15 = auStack_f4[0];
      } while ((short)auStack_f8[0] <= (short)auStack_f4[0]);
    }
    puVar19 = puStackX_8;
    piStack_b8 = (int *)0x0;
    piStack_b0 = (int *)0x0;
    piVar29 = (int *)0x0;
    piStack_a8 = (int *)0x0;
    uStackX_10 = 0;
    uStack_d0 = ((int)(short)uVar15 - (int)(short)uVar21) + 1;
    if (0 < (int)uStack_d0) {
      iVar4 = ((int)(short)uVar27 - (int)(short)uVar22) + 1;
      puVar9 = puStackX_8 + 10;
      piVar23 = (int *)0x0;
      piVar28 = (int *)0x0;
      puVar11 = puStackX_8;
      iStack_c4 = iVar4;
      uVar25 = uStack_d0;
      do {
        sVar31 = 0;
        if (0 < iVar4) {
          lVar18 = (longlong)(short)uStackX_10 * 0x1f;
          do {
            for (piVar10 = piVar28; piVar10 < piVar23; piVar10 = piVar10 + 1) {
              if (*piVar10 == *(int *)((longlong)puVar11 + (sVar31 + lVar18) * 4 + 0x80)) {
                if ((int)((longlong)piVar10 - (longlong)piVar28 >> 2) != -1) goto LAB_1403cacee;
                break;
              }
            }
            if (piVar23 == piVar29) {
              FUN_14028ae70(&piStack_b8,piVar23);
              piVar28 = piStack_b8;
              piVar29 = piStack_a8;
            }
            else {
              *piVar23 = *(int *)((longlong)puVar11 + ((longlong)sVar31 + 0x20 + lVar18) * 4);
              piStack_b0 = piVar23 + 1;
            }
            piVar23 = piStack_b0;
            switch(*(undefined4 *)((longlong)puVar11 + (sVar31 + lVar18) * 4 + 0x80)) {
            case 5:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x1c;
              pcVar14 = "Needs to be anchored on edge";
              break;
            case 6:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x18;
              pcVar14 = "Blocked at this location";
              break;
            case 7:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x25;
              pcVar14 = "Hidden, cannot build at this location";
              break;
            case 8:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x13;
              pcVar14 = "Needs adjacent wall";
              break;
            case 9:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 7;
              pcVar14 = "Off map";
              break;
            case 10:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x16;
              pcVar14 = "Water at this location";
              break;
            case 0xb:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x1b;
              pcVar14 = "Lava/Magma at this location";
              break;
            case 0xc:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x10;
              pcVar14 = "Building present";
              break;
            case 0xd:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0xe;
              pcVar14 = "Must be inside";
              break;
            case 0xe:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x11;
              pcVar14 = "Too close to edge";
              break;
            case 0xf:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0xf;
              pcVar14 = "Must be outside";
              break;
            case 0x10:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x10;
              pcVar14 = "Needs open space";
              break;
            case 0x11:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x19;
              pcVar14 = "Surrounded by empty space";
              break;
            case 0x12:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x1d;
              pcVar14 = "Cannot build at highest level";
              break;
            case 0x13:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x18;
              pcVar14 = "Must remove construction";
              break;
            case 0x14:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x1c;
              pcVar14 = "Need soil or mud at location";
              break;
            case 0x15:
              puVar11 = (undefined8 *)FUN_1415530e0(0x20);
              uVar24 = 0x15;
              pcVar14 = "Need soil at location";
              break;
            default:
              goto LAB_1403cacee;
            }
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0xf;
            *(undefined1 *)puVar11 = 0;
            puStack_f0 = puVar11;
            FUN_140070f00(puVar11,pcVar14,uVar24);
            puVar1 = (undefined8 *)puVar19[0xb];
            if (puVar1 == (undefined8 *)puVar19[0xc]) {
              FUN_1400bc360(puVar9,puVar1,&puStack_f0);
              puVar11 = puStackX_8;
            }
            else {
              *puVar1 = puVar11;
              puVar19[0xb] = puVar19[0xb] + 8;
              puVar11 = puStackX_8;
            }
LAB_1403cacee:
            sVar31 = sVar31 + 1;
            iVar4 = iStack_c4;
            uVar25 = uStack_d0;
          } while (sVar31 < iStack_c4);
        }
        uStackX_10 = uStackX_10 + 1;
      } while ((int)(short)uStackX_10 < (int)uVar25);
    }
    puVar19 = puStackX_8;
    if (((longlong)(puStackX_8[0xb] - puStackX_8[10]) >> 3 != 0) && (cStack_e0 != '\0')) {
      puVar11 = (undefined8 *)FUN_1415530e0(0x20);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      *(undefined1 *)puVar11 = 0;
      puStackX_8 = puVar11;
      FUN_140070f00(puVar11,"Needs ground or near machine",0x1c);
      puVar9 = (undefined8 *)puVar19[0xb];
      if (puVar9 == (undefined8 *)puVar19[0xc]) {
        FUN_1400bc360(puVar19 + 10,puVar9,&puStackX_8);
      }
      else {
        *puVar9 = puVar11;
        puVar19[0xb] = puVar19[0xb] + 8;
      }
    }
    if ((*(int *)(puVar19 + 7) == 4) && ((char)uStack_c8 == '\0')) {
      puVar11 = (undefined8 *)FUN_1415530e0(0x20);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      *(undefined1 *)puVar11 = 0;
      puStackX_8 = puVar11;
      FUN_140070f00(puVar11,"No mud/soil for farm",0x14);
      puVar9 = (undefined8 *)puVar19[0xe];
      if (puVar9 == (undefined8 *)puVar19[0xf]) {
        FUN_1400bc360(puVar19 + 0xd,puVar9,&puStackX_8);
      }
      else {
        *puVar9 = puVar11;
        puVar19[0xe] = puVar19[0xe] + 8;
      }
      puVar11 = (undefined8 *)FUN_1415530e0(0x20);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      *(undefined1 *)puVar11 = 0;
      puStackX_8 = puVar11;
      FUN_140070f00(puVar11,"Mud is left by water",0x14);
      puVar9 = (undefined8 *)puVar19[0xe];
      if (puVar9 == (undefined8 *)puVar19[0xf]) {
        FUN_1400bc360(puVar19 + 0xd,puVar9,&puStackX_8);
      }
      else {
        *puVar9 = puVar11;
        puVar19[0xe] = puVar19[0xe] + 8;
      }
    }
    FUN_140070d80(&piStack_b8);
    FUN_14013d2d0(&uStack_50);
    FUN_140070de0(&uStack_68);
    FUN_140070de0(&uStack_80);
    FUN_140070de0(&lStack_98);
  }
  return;
}

