
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14135bec0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined *puVar23;
  short sVar24;
  short sVar25;
  ushort *puVar26;
  ushort *puVar27;
  short sVar28;
  ushort uVar29;
  undefined8 ******ppppppuVar30;
  undefined8 uVar31;
  int iVar32;
  ushort uVar33;
  undefined1 auStack_188 [32];
  short *psStack_168;
  longlong *plStack_160;
  ushort *puStack_158;
  short *psStack_150;
  short *psStack_148;
  short asStack_138 [2];
  ushort auStack_134 [2];
  short asStack_130 [2];
  short asStack_12c [2];
  undefined2 auStack_128 [2];
  short asStack_124 [2];
  ushort auStack_120 [4];
  longlong lStack_118;
  uint uStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  short sStack_102;
  ushort uStack_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  longlong lStack_b8;
  ushort *puStack_b0;
  ushort *puStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 *******pppppppuStack_60;
  ushort *puStack_58;
  ushort *puStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_188;
  lStack_a0 = param_2;
  lStack_90 = param_1;
  if (*(longlong *)(param_1 + 0x4d8) == 0) goto LAB_14135d168;
  iVar13 = FUN_1413570b0(param_1,0x17);
  uVar14 = FUN_140ece790();
  uVar14 = uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e;
  uVar15 = FUN_140ece790();
  if ((int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0x1999999a) < iVar13) {
    uVar14 = uVar14 + 1;
  }
  uVar15 = FUN_140ece790();
  if ((int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0xccccccd) < iVar13) {
    uVar14 = uVar14 + 1;
  }
  uVar15 = FUN_140ece790();
  if ((int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0x8888889) < iVar13) {
    uVar14 = uVar14 + 1;
  }
  uVar15 = FUN_140ece790();
  if ((int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0x6666667) < iVar13) {
    uVar14 = uVar14 + 1;
  }
  uVar15 = FUN_140ece790();
  if (((int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x51eb852) < iVar13) &&
     (uVar15 = FUN_140ece790(),
     uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x2aaaaaab))
  {
    uVar14 = uVar14 + 1;
  }
  if (uVar14 == 0) goto LAB_14135d168;
  if (param_2 != 0) {
    uVar14 = 1;
  }
  lVar18 = *(longlong *)(param_1 + 0x4d8);
  puStack_158 = (ushort *)CONCAT62(puStack_158._2_6_,*(undefined2 *)(lVar18 + 0x20));
  plStack_160 = (longlong *)CONCAT62(plStack_160._2_6_,*(undefined2 *)(lVar18 + 0x1e));
  psStack_168 = (short *)CONCAT62(psStack_168._2_6_,*(undefined2 *)(lVar18 + 0x1c));
  uStack_110 = uVar14;
  FUN_1414bdb90(0x1423f3970,asStack_124,auStack_134,auStack_128);
  sVar28 = asStack_124[0];
  uVar11 = auStack_128[0];
  uVar33 = auStack_134[0];
  if (asStack_124[0] == -30000) goto LAB_14135d168;
  psStack_148 = asStack_12c;
  psStack_150 = asStack_130;
  puStack_158 = auStack_120;
  plStack_160 = &lStack_118;
  psStack_168 = asStack_138;
  FUN_1414bba50(0x1423f3970,asStack_124[0],auStack_134[0],auStack_128[0]);
  sVar25 = asStack_138[0];
  if ((asStack_138[0] == -1) && ((int)lStack_118 == -1)) {
    plStack_160 = (longlong *)CONCAT62(plStack_160._2_6_,uVar11);
    psStack_168 = (short *)CONCAT62(psStack_168._2_6_,uVar33);
    FUN_14007f300(0x1423f3970,asStack_130,asStack_12c,sVar28);
  }
  lStack_b8 = 0;
  puStack_b0 = (ushort *)0x0;
  puVar27 = (ushort *)0x0;
  puStack_a8 = (ushort *)0x0;
  auStack_120[0] = 0;
  puVar26 = (ushort *)0x0;
  if (_DAT_1423f3c30 - _DAT_1423f3c28 >> 3 != 0) {
    uVar22 = 0;
    iVar13 = (int)lStack_118;
    do {
      uVar33 = auStack_120[0];
      pcVar1 = *(char **)(_DAT_1423f3c28 + (longlong)(short)uVar22 * 8);
      if (((((((pcVar1[0xc] & 10U) == 0) &&
             (sVar28 = *(short *)(pcVar1 + 0x10), sVar28 == asStack_130[0])) &&
            (*(short *)(pcVar1 + 0x12) == asStack_12c[0])) &&
           (((*(short *)(pcVar1 + 0x14) == sVar25 && (*(int *)(pcVar1 + 0x18) == iVar13)) &&
            ((*(int *)(pcVar1 + 0x1c) == -1 && ((*(int *)(pcVar1 + 4) != 0 && (*pcVar1 == '\x01'))))
            )))) && (sVar24 = *(short *)(pcVar1 + 2), -1 < sVar24)) &&
         (sVar25 = asStack_138[0],
         (ulonglong)(longlong)sVar24 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
        lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar24 * 8);
        if ((*(int *)(lVar18 + 0x1b0) < 2) ||
           ((*(byte *)(*(longlong *)(lVar18 + 0x1a8) + 1) & 2) == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((bVar7) && (lVar18 != 0)) {
          lVar19 = *(longlong *)(lVar18 + 0x178);
          sVar24 = (short)(*(longlong *)(lVar18 + 0x180) - lVar19 >> 3);
          do {
            sVar24 = sVar24 + -1;
            sVar25 = asStack_138[0];
            if (sVar24 < 0) goto LAB_14135c327;
            lVar18 = *(longlong *)(lVar19 + (longlong)sVar24 * 8);
            cVar12 = callee_14071bc20(lVar18,sVar28);
          } while ((cVar12 != '\0') ||
                  ((4 < *(int *)(lVar18 + 0x6b0) &&
                   ((*(byte *)(*(longlong *)(lVar18 + 0x6a8) + 4) & 0x20) != 0))));
          if (puVar26 == puVar27) {
            FUN_140072670(&lStack_b8,puVar26,auStack_120);
            puVar26 = puStack_b0;
            puVar27 = puStack_a8;
            sVar25 = asStack_138[0];
          }
          else {
            *puVar26 = uVar33;
            puStack_b0 = puVar26 + 1;
            puVar26 = puStack_b0;
            sVar25 = asStack_138[0];
          }
        }
      }
LAB_14135c327:
      auStack_120[0] = uVar33 + 1;
      uVar22 = (ulonglong)(short)auStack_120[0];
      sVar28 = asStack_124[0];
      uVar33 = auStack_134[0];
      iVar13 = (int)lStack_118;
      uVar14 = uStack_110;
    } while (uVar22 < (ulonglong)(_DAT_1423f3c30 - _DAT_1423f3c28 >> 3));
  }
  uVar11 = auStack_128[0];
  puVar27 = (ushort *)0x0;
  plVar17 = (longlong *)FUN_1414bbbe0(0x1423f3970,sVar28,uVar33,auStack_128[0]);
  if (plVar17 == (longlong *)0x0) {
    uVar15 = callee_14007f270(0x1423f3970,sVar28,uVar33,uVar11);
    if (((uVar15 >> 0xf & 1) == 0) && (_DAT_1423b38b4 = _DAT_1423b38b4 + 1, 100000 < _DAT_1423b38b4)
       ) {
      _DAT_1423b38b4 = 100000;
    }
  }
  else {
    lVar18 = (**(code **)(*plVar17 + 0x30))(plVar17);
    if ((lVar18 != 0) &&
       (iVar13 = *(int *)(lVar18 + 0x20) + 1, *(int *)(lVar18 + 0x20) = iVar13, 100000 < iVar13)) {
      *(undefined4 *)(lVar18 + 0x20) = 100000;
    }
  }
  lVar18 = lStack_b8;
  uVar22 = (longlong)puVar26 - lStack_b8 >> 1;
  if (uVar22 == 0) {
    if (_DAT_1423b9b30 == _DAT_1423b9b38) {
      FUN_140072670(&DAT_1423b9b28,_DAT_1423b9b30,asStack_130);
      sVar28 = asStack_130[0];
    }
    else {
      *_DAT_1423b9b30 = asStack_130[0];
      _DAT_1423b9b30 = _DAT_1423b9b30 + 1;
      sVar28 = asStack_130[0];
    }
    if (_DAT_1423b9b48 == _DAT_1423b9b50) {
      FUN_140072670(&DAT_1423b9b40,_DAT_1423b9b48,asStack_12c);
      sVar24 = asStack_12c[0];
    }
    else {
      *_DAT_1423b9b48 = asStack_12c[0];
      _DAT_1423b9b48 = _DAT_1423b9b48 + 1;
      sVar24 = asStack_12c[0];
    }
    if (_DAT_1423b9b60 == _DAT_1423b9b68) {
      FUN_140072670(&DAT_1423b9b58,_DAT_1423b9b60,asStack_138);
    }
    else {
      *_DAT_1423b9b60 = sVar25;
      _DAT_1423b9b60 = _DAT_1423b9b60 + 1;
    }
    if (_DAT_1423b9b78 == _DAT_1423b9b80) {
      FUN_140072450(&DAT_1423b9b70,_DAT_1423b9b78,&lStack_118);
      iVar13 = (int)lStack_118;
    }
    else {
      *_DAT_1423b9b78 = (int)lStack_118;
      _DAT_1423b9b78 = _DAT_1423b9b78 + 1;
      iVar13 = (int)lStack_118;
    }
    if (sVar25 == -1) {
      if (iVar13 == -1) {
        if (_DAT_1418be238 == 0) {
          bVar4 = DAT_1423b3560 & 0x70;
        }
        else {
          bVar4 = DAT_1423b3560 & 8;
        }
        if (bVar4 != 0) {
          plStack_160 = (longlong *)CONCAT62(plStack_160._2_6_,auStack_128[0]);
          psStack_168 = (short *)CONCAT62(psStack_168._2_6_,uVar33);
          iVar32 = (int)asStack_124[0];
          FUN_14007f300(0x1423f3970,auStack_120,auStack_134,asStack_124[0]);
          iVar16 = FUN_140f6e8b0(_DAT_14250dfd8,auStack_120[0],auStack_134[0]);
          puStack_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          puStack_88 = (undefined8 *)FUN_140071e00(0x30);
          uVar31 = _UNK_1417a2b58;
          uStack_78 = _DAT_1417abbe0;
          uStack_70 = _UNK_1417abbe8;
          *puStack_88 = _DAT_1417a2b50;
          puStack_88[1] = uVar31;
          uVar10 = _UNK_1417a2b6c;
          uVar9 = _UNK_1417a2b68;
          uVar8 = _UNK_1417a2b64;
          *(undefined4 *)(puStack_88 + 2) = _DAT_1417a2b60;
          *(undefined4 *)((longlong)puStack_88 + 0x14) = uVar8;
          *(undefined4 *)(puStack_88 + 3) = uVar9;
          *(undefined4 *)((longlong)puStack_88 + 0x1c) = uVar10;
          *(undefined1 *)(puStack_88 + 4) = DAT_1417a2b70;
          *(undefined1 *)((longlong)puStack_88 + 0x21) = 0;
          iVar13 = _DAT_14250a560 >> 0x1f;
          if (iVar32 < _DAT_14250a55c / 3) {
            if ((int)(short)uVar33 <
                _DAT_14250a560 / 3 + iVar13 +
                (int)(((longlong)_DAT_14250a560 / 3 + ((longlong)_DAT_14250a560 >> 0x3f) &
                      0xffffffffU) >> 0x1f)) {
              puVar23 = &UNK_1417a2cd0;
              uVar31 = 0xc;
            }
            else {
              iVar5 = _DAT_14250a560 * 2;
              if ((int)(short)uVar33 <=
                  iVar5 / 3 + (iVar5 >> 0x1f) +
                  (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
              goto LAB_14135cb9a;
              puVar23 = &UNK_1417a2ce0;
              uVar31 = 0xc;
            }
          }
          else {
LAB_14135cb9a:
            iVar5 = (_DAT_14250a55c * 2) / 3;
            if (iVar5 < iVar32) {
              if ((int)(short)uVar33 <
                  _DAT_14250a560 / 3 + iVar13 +
                  (int)(((longlong)_DAT_14250a560 / 3 + ((longlong)_DAT_14250a560 >> 0x3f) &
                        0xffffffffU) >> 0x1f)) {
                puVar23 = &UNK_1417a2cb0;
                uVar31 = 0xc;
              }
              else {
                iVar6 = _DAT_14250a560 * 2;
                if ((int)(short)uVar33 <=
                    iVar6 / 3 + (iVar6 >> 0x1f) +
                    (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f))
                goto LAB_14135cbff;
                puVar23 = &UNK_1417a2cc0;
                uVar31 = 0xc;
              }
            }
            else {
LAB_14135cbff:
              if (iVar32 < _DAT_14250a55c / 3) {
                puVar23 = &UNK_1416f1e38;
              }
              else {
                if ((int)(short)uVar33 <
                    _DAT_14250a560 / 3 + iVar13 +
                    (int)(((longlong)_DAT_14250a560 / 3 + ((longlong)_DAT_14250a560 >> 0x3f) &
                          0xffffffffU) >> 0x1f)) {
                  puVar23 = &UNK_1417a2d08;
                  uVar31 = 8;
                  goto LAB_14135cc72;
                }
                if (iVar5 < iVar32) {
                  puVar23 = &UNK_1416f1de0;
                }
                else {
                  iVar13 = _DAT_14250a560 * 2;
                  if (iVar13 / 3 + (iVar13 >> 0x1f) +
                      (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >>
                           0x1f) < (int)(short)uVar33) {
                    puVar23 = &UNK_1417a2d18;
                    uVar31 = 8;
                    goto LAB_14135cc72;
                  }
                  puVar23 = &UNK_1417a2cf0;
                }
              }
              uVar31 = 7;
            }
          }
LAB_14135cc72:
          FUN_140071040(&puStack_88,puVar23,uVar31);
          FUN_140071040(&puStack_88,&UNK_1416039f0,1);
          if (((iVar16 == 0x1b) || (iVar16 == 0x1c)) || (iVar16 == 0x1d)) {
            puVar23 = &UNK_14166cfbc;
            uVar31 = 5;
          }
          else {
            switch(iVar16) {
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
              puVar23 = &UNK_14166cf84;
              uVar31 = 4;
              break;
            default:
              puVar23 = &UNK_1417a2c30;
              uVar31 = 6;
            }
          }
          FUN_140071040(&puStack_88,puVar23,uVar31);
          FUN_140071040(&puStack_88,&UNK_141603844,1);
          uStack_fc = 0;
          uStack_f8 = 0x8ad08ad0;
          uStack_f4 = 0x8ad0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0xffffffffffffffff;
          uStack_d0 = 0xffffffff;
          uStack_cc = 0;
          uStack_c8 = 0xffffffff;
          uStack_108 = 0x60110;
          uStack_104 = 0;
          uStack_ec = 2000;
          sStack_102 = asStack_124[0];
          uStack_fe = auStack_128[0];
          uStack_100 = uVar33;
          FUN_1400e5250(0x142505cd0,&puStack_88,&uStack_108);
          FUN_140070e80(&puStack_88);
        }
      }
      else {
        if (_DAT_1418be238 == 0) {
          bVar4 = DAT_1423b3560 & 0x70;
        }
        else {
          bVar4 = DAT_1423b3560 & 8;
        }
        if (bVar4 != 0) {
          puStack_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          puStack_88 = (undefined8 *)FUN_140071e00(0x30);
          uVar31 = _UNK_1417a2b58;
          uStack_78 = _DAT_1417abbe0;
          uStack_70 = _UNK_1417abbe8;
          *puStack_88 = _DAT_1417a2b50;
          puStack_88[1] = uVar31;
          uVar10 = _UNK_1417a2b6c;
          uVar9 = _UNK_1417a2b68;
          uVar8 = _UNK_1417a2b64;
          *(undefined4 *)(puStack_88 + 2) = _DAT_1417a2b60;
          *(undefined4 *)((longlong)puStack_88 + 0x14) = uVar8;
          *(undefined4 *)(puStack_88 + 3) = uVar9;
          *(undefined4 *)((longlong)puStack_88 + 0x1c) = uVar10;
          *(undefined1 *)(puStack_88 + 4) = DAT_1417a2b70;
          *(undefined1 *)((longlong)puStack_88 + 0x21) = 0;
          iVar32 = (int)asStack_124[0];
          iVar16 = _DAT_14250a560 >> 0x1f;
          if (iVar32 < _DAT_14250a55c / 3) {
            if ((int)(short)uVar33 <
                _DAT_14250a560 / 3 + iVar16 +
                (int)(((longlong)_DAT_14250a560 / 3 + ((longlong)_DAT_14250a560 >> 0x3f) &
                      0xffffffffU) >> 0x1f)) {
              puVar23 = &UNK_1417a2cd0;
              uVar31 = 0xc;
            }
            else {
              iVar5 = _DAT_14250a560 * 2;
              if ((int)(short)uVar33 <=
                  iVar5 / 3 + (iVar5 >> 0x1f) +
                  (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
              goto LAB_14135c849;
              puVar23 = &UNK_1417a2ce0;
              uVar31 = 0xc;
            }
          }
          else {
LAB_14135c849:
            iVar5 = (_DAT_14250a55c * 2) / 3;
            if (iVar5 < iVar32) {
              if ((int)(short)uVar33 <
                  _DAT_14250a560 / 3 + iVar16 +
                  (int)(((longlong)_DAT_14250a560 / 3 + ((longlong)_DAT_14250a560 >> 0x3f) &
                        0xffffffffU) >> 0x1f)) {
                puVar23 = &UNK_1417a2cb0;
                uVar31 = 0xc;
              }
              else {
                iVar6 = _DAT_14250a560 * 2;
                if ((int)(short)uVar33 <=
                    iVar6 / 3 + (iVar6 >> 0x1f) +
                    (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f))
                goto LAB_14135c8aa;
                puVar23 = &UNK_1417a2cc0;
                uVar31 = 0xc;
              }
            }
            else {
LAB_14135c8aa:
              if (iVar32 < _DAT_14250a55c / 3) {
                puVar23 = &UNK_1416f1e38;
              }
              else {
                if ((int)(short)uVar33 <
                    _DAT_14250a560 / 3 + iVar16 +
                    (int)(((longlong)_DAT_14250a560 / 3 + ((longlong)_DAT_14250a560 >> 0x3f) &
                          0xffffffffU) >> 0x1f)) {
                  puVar23 = &UNK_1417a2d08;
                  uVar31 = 8;
                  goto LAB_14135c91d;
                }
                if (iVar5 < iVar32) {
                  puVar23 = &UNK_1416f1de0;
                }
                else {
                  iVar16 = _DAT_14250a560 * 2;
                  if (iVar16 / 3 + (iVar16 >> 0x1f) +
                      (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >>
                           0x1f) < (int)(short)uVar33) {
                    puVar23 = &UNK_1417a2d18;
                    uVar31 = 8;
                    goto LAB_14135c91d;
                  }
                  puVar23 = &UNK_1417a2cf0;
                }
              }
              uVar31 = 7;
            }
          }
LAB_14135c91d:
          FUN_140071040(&puStack_88,puVar23,uVar31);
          FUN_140071040(&puStack_88,&UNK_1416039f0,1);
          sVar28 = **(short **)(*(longlong *)(_DAT_14250dfd8 + 0x250) + (longlong)iVar13 * 8);
          if (sVar28 == 0) {
            uVar31 = 6;
            puVar23 = &UNK_14166ce9c;
LAB_14135c990:
            FUN_140071040(&puStack_88,puVar23,uVar31);
          }
          else {
            if (sVar28 == 1) {
              uVar31 = 9;
              puVar23 = &UNK_1417a2cf8;
              goto LAB_14135c990;
            }
            if (sVar28 == 2) {
              uVar31 = 0xc;
              puVar23 = &UNK_1417a2c20;
              goto LAB_14135c990;
            }
          }
          FUN_140071040(&puStack_88,&UNK_141603844,1);
          uStack_fc = 0;
          uStack_f8 = 0x8ad08ad0;
          uStack_f4 = 0x8ad0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0xffffffffffffffff;
          uStack_d0 = 0xffffffff;
          uStack_cc = 0;
          uStack_c8 = 0xffffffff;
          uStack_108 = 0x60110;
          uStack_104 = 0;
          uStack_ec = 2000;
          sStack_102 = asStack_124[0];
          uStack_fe = auStack_128[0];
          uStack_100 = uVar33;
          FUN_1400e5250(0x142505cd0,&puStack_88,&uStack_108);
          if (0xf < uStack_70) {
            uVar22 = uStack_70 + 1;
            puVar21 = puStack_88;
            if (0xfff < uVar22) {
              uVar22 = uStack_70 + 0x28;
              puVar21 = (undefined8 *)puStack_88[-1];
              if (0x1f < (ulonglong)((longlong)puStack_88 + (-8 - (longlong)puVar21))) {
                _invalid_parameter_noinfo_noreturn(puVar21,uVar22);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
LAB_14135ca62:
            callee_1415530d0(puVar21,uVar22);
          }
        }
      }
    }
    else {
      uVar14 = (int)sVar28 & 0x8000000f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
      }
      uVar15 = (int)sVar24 & 0x8000000f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
      }
      lVar18 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(_DAT_14250dfd8 + 0x483c8) + (longlong)(sVar28 >> 4) * 8) + 8 +
                (longlong)(sVar24 >> 4) * 0x20);
      if (lVar18 != 0) {
        lVar19 = (longlong)(short)uVar14 * 0x10 + (longlong)(short)(ushort)uVar15;
        if (-1 < sVar25) {
          lVar2 = *(longlong *)(lVar18 + lVar19 * 0x18);
          if ((ulonglong)(longlong)asStack_138[0] <
              (ulonglong)(*(longlong *)(lVar18 + 8 + lVar19 * 0x18) - lVar2 >> 3)) {
            if (_DAT_1418be238 == 0) {
              bVar4 = DAT_1423b3560 & 0x70;
            }
            else {
              bVar4 = DAT_1423b3560 & 8;
            }
            if (bVar4 != 0) {
              plVar17 = *(longlong **)(lVar2 + (longlong)asStack_138[0] * 8);
              puStack_88 = (undefined8 *)0x0;
              uStack_80 = 0;
              uStack_78 = 0;
              uStack_70 = 0;
              puStack_88 = (undefined8 *)FUN_140071e00(0x20);
              uVar31 = _UNK_1417a2b38;
              uStack_78 = _DAT_1417abba0;
              uStack_70 = _UNK_1417abba8;
              *puStack_88 = _DAT_1417a2b30;
              puStack_88[1] = uVar31;
              puStack_88[2] = _DAT_1417a2b40;
              *(undefined4 *)(puStack_88 + 3) = _DAT_1417a2b48;
              *(undefined1 *)((longlong)puStack_88 + 0x1c) = DAT_1417a2b4c;
              *(undefined1 *)((longlong)puStack_88 + 0x1d) = 0;
              puStack_58 = (ushort *)0x0;
              puStack_50 = (ushort *)0x0;
              uStack_48 = 0xf;
              pppppppuStack_60 = (undefined8 *******)0x0;
              (**(code **)(*plVar17 + 0x70))(plVar17,&pppppppuStack_60);
              pppppppuVar20 = &pppppppuStack_60;
              if (0xf < uStack_48) {
                pppppppuVar20 = pppppppuStack_60;
              }
              FUN_140071040(&puStack_88,pppppppuVar20,puStack_50);
              FUN_140071040(&puStack_88,&UNK_141603844,1);
              uStack_fc = 0;
              uStack_f8 = 0x8ad08ad0;
              uStack_f4 = 0x8ad0;
              uStack_f0 = 0;
              uStack_e8 = 0;
              uStack_e0 = 0;
              uStack_d8 = 0xffffffffffffffff;
              uStack_d0 = 0xffffffff;
              uStack_cc = 0;
              uStack_c8 = 0xffffffff;
              uStack_108 = 0x60110;
              uStack_104 = 0;
              uStack_ec = 2000;
              uStack_fe = auStack_128[0];
              sStack_102 = (short)uVar14;
              uStack_100 = (ushort)uVar15;
              FUN_1400e5250(0x142505cd0,&puStack_88,&uStack_108);
              if (0xf < uStack_48) {
                uVar22 = uStack_48 + 1;
                pppppppuVar20 = pppppppuStack_60;
                if (0xfff < uVar22) {
                  uVar22 = uStack_48 + 0x28;
                  pppppppuVar20 = (undefined8 *******)pppppppuStack_60[-1];
                  if (0x1f < (ulonglong)
                             ((longlong)pppppppuStack_60 + (-8 - (longlong)pppppppuVar20))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                callee_1415530d0(pppppppuVar20,uVar22);
              }
              puStack_50 = (ushort *)0x0;
              uStack_48 = 0xf;
              pppppppuStack_60 =
                   (undefined8 *******)((ulonglong)pppppppuStack_60 & 0xffffffffffffff00);
              if (uStack_70 < 0x10) goto LAB_14135c580;
              uVar22 = uStack_70 + 1;
              puVar21 = puStack_88;
              if (0xfff < uVar22) {
                uVar22 = uStack_70 + 0x28;
                puVar21 = (undefined8 *)puStack_88[-1];
                if (0x1f < (ulonglong)((longlong)puStack_88 + (-8 - (longlong)puStack_88[-1]))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              goto LAB_14135ca62;
            }
          }
        }
      }
    }
  }
  else {
    do {
      uVar15 = 0;
      if (1 < (uint)uVar22) {
        uVar15 = FUN_140ece790();
        uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar22 & 0xffffffff)) + 1U);
      }
      lVar19 = (longlong)*(short *)(lVar18 + (longlong)(int)uVar15 * 2);
      sVar28 = *(short *)(*(longlong *)(_DAT_1423f3c28 + lVar19 * 8) + 2);
      if ((sVar28 < 0) ||
         ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar28)) {
        sVar28 = 0;
      }
      else {
        sVar28 = *(short *)(*(longlong *)(_DAT_14250eee8 + (longlong)sVar28 * 8) + 0x12a);
      }
      uVar15 = FUN_140ece790();
    } while ((int)sVar28 <=
             (int)((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / 0x147ae15));
    lVar18 = *(longlong *)(_DAT_1423f3c28 + lVar19 * 8);
    uVar15 = *(uint *)(lVar18 + 4);
    if (uVar15 != 0x989681) {
      if (uVar15 < uVar14) {
        uVar14 = uVar15;
      }
      *(uint *)(lVar18 + 4) = uVar15 - uVar14;
      uStack_110 = uVar14;
    }
    lStack_98 = lVar18;
    FUN_14144f220(lVar18);
    sVar28 = *(short *)(lVar18 + 2);
    if (sVar28 == -1) goto LAB_14135c580;
    pppppppuStack_60 = (undefined8 *******)0x0;
    puStack_58 = (ushort *)0x0;
    puStack_50 = (ushort *)0x0;
    uVar33 = *(ushort *)(lVar18 + 0x10);
    auStack_120[0] = uVar33;
    if ((sVar28 < 0) ||
       ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar28)) {
LAB_14135cfa7:
      puVar26 = (ushort *)0x0;
    }
    else {
      lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar28 * 8);
      uVar29 = (short)((longlong)
                       (ulonglong)(uint)(*(int *)(lVar19 + 0x180) - *(int *)(lVar19 + 0x178)) >> 3)
               - 1;
      auStack_134[0] = uVar29;
      lStack_118 = lVar19;
      if ((short)uVar29 < 0) goto LAB_14135cfa7;
      puVar26 = (ushort *)0x0;
      do {
        lVar18 = *(longlong *)(lVar19 + 0x178);
        auStack_134[0] = uVar29;
        cVar12 = callee_14071bc20(*(undefined8 *)(lVar18 + (ulonglong)uVar29 * 8),uVar33);
        if ((cVar12 == '\0') &&
           ((lVar18 = *(longlong *)(lVar18 + (ulonglong)uVar29 * 8), *(int *)(lVar18 + 0x6b0) < 5 ||
            ((*(byte *)(*(longlong *)(lVar18 + 0x6a8) + 4) & 0x20) == 0)))) {
          if (puVar26 == puVar27) {
            FUN_140072670(&pppppppuStack_60,puVar26,auStack_134);
            puVar26 = puStack_58;
            puVar27 = puStack_50;
          }
          else {
            *puVar26 = uVar29;
            puStack_58 = puVar26 + 1;
            puVar26 = puStack_58;
          }
        }
        uVar29 = uVar29 - 1;
        lVar18 = lStack_98;
        uVar14 = uStack_110;
        auStack_134[0] = uVar29;
      } while (-1 < (short)uVar29);
    }
    pppppppuVar20 = pppppppuStack_60;
    uVar15 = 0;
    if (lStack_a0 == 0) {
      uVar22 = (longlong)puVar26 - (longlong)pppppppuStack_60 >> 1;
      if (1 < (uint)uVar22) {
        uVar15 = FUN_140ece790();
        uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar22 & 0xffffffff)) + 1U);
      }
      plStack_160._0_1_ = 1;
      psStack_168._0_4_ = 0xffffffff;
      plVar17 = (longlong *)
                FUN_140cb2200(0x32,0xffffffff,*(undefined2 *)(lVar18 + 2),
                              (int)*(short *)((longlong)pppppppuVar20 + (longlong)(int)uVar15 * 2));
      *(uint *)(plVar17 + 0x10) = uVar14;
      (**(code **)(*plVar17 + 0x328))(plVar17,CONCAT71((int7)((ulonglong)*plVar17 >> 8),1));
      plStack_160 = (longlong *)CONCAT71(plStack_160._1_7_,1);
      psStack_168 = (short *)CONCAT44(psStack_168._4_4_,0xffffffff);
      FUN_1413412c0(lStack_90,plVar17,0,0xffffffff);
      (**(code **)(*plVar17 + 0x4a8))(plVar17,1);
    }
    else {
      plVar17 = (longlong *)FUN_14055ed50();
      pppppppuVar20 = pppppppuStack_60;
      *(undefined2 *)(plVar17 + 0x17) = *(undefined2 *)(lVar18 + 2);
      uVar22 = (longlong)puVar26 - (longlong)pppppppuStack_60 >> 1;
      if (1 < (uint)uVar22) {
        uVar15 = FUN_140ece790();
        uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar22 & 0xffffffff)) + 1U);
      }
      *(undefined2 *)((longlong)plVar17 + 0xba) =
           *(undefined2 *)((longlong)pppppppuVar20 + (longlong)(int)uVar15 * 2);
      *(uint *)(plVar17 + 0x10) = uVar14;
      (**(code **)(*plVar17 + 0x328))(plVar17,1);
      FUN_140ca00d0(plVar17,lStack_a0);
      (**(code **)(*plVar17 + 0x4a8))(plVar17,1);
    }
    if (pppppppuVar20 != (undefined8 *******)0x0) {
      uVar22 = ((longlong)puVar27 - (longlong)pppppppuVar20 >> 1) * 2;
      ppppppuVar30 = pppppppuVar20;
      if (0xfff < uVar22) {
        uVar22 = uVar22 + 0x27;
        ppppppuVar30 = pppppppuVar20[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuVar20 + (-8 - (longlong)ppppppuVar30))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      callee_1415530d0(ppppppuVar30,uVar22);
    }
  }
LAB_14135c580:
  FUN_140070de0(&lStack_b8);
LAB_14135d168:
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_188);
  return;
}

