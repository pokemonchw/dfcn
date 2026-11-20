/* Dwarf Fortress 53.17 | classic | PE:6aea11a5:0272d000 | sha256=4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f
   Native PE image base 0x140000000. Ghidra decompilation, with descriptive function names. */

/* Actual Ghidra output, research name; VA 0x1401e0de0..0x1401e0e1d. */

void recenter_open(undefined1 *param_1)

{
  FUN_1403c3420(0x1418bd660,0);
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}

/* Actual Ghidra output, research name; VA 0x140e75fe0..0x140e763c8. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initial_wagon_name(ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  int iStackX_18;
  ushort in_stack_ffffffffffffff98;
  undefined2 uVar16;
  int *piStack_58;
  int *piStack_50;
  longlong lStack_48;
  
  piStack_58 = (int *)0x0;
  piStack_50 = (int *)0x0;
  lStack_48 = 0;
  uStackX_8 = param_1;
  uStackX_10 = param_2;
  FUN_1414b0420(0x1423ed870,&piStack_58);
  piVar12 = piStack_50;
  piVar2 = piStack_58;
  iVar13 = -1;
  sVar10 = 0;
  if (0 < _DAT_14250445c) {
    iStackX_18 = 0;
    iVar5 = _DAT_14250445c;
    iVar7 = _DAT_142504460;
    do {
      iVar14 = 0;
      uVar11 = 0;
      if (0 < iVar7) {
LAB_140e76070:
        sVar9 = 0;
        do {
          uVar16 = 0;
          in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xff00;
          cVar3 = FUN_1414c1e60(0x1423ed870,sVar10,uVar11,sVar9,in_stack_ffffffffffffff98,0);
          if ((cVar3 != '\0') &&
             (uVar4 = callee_14007f200(0x1423ed870,sVar10,uVar11,sVar9),
             (uVar4 & 0x14000) == 0x14000)) {
            if (sVar9 != -30000) {
              iVar7 = (int)(short)(sVar10 - (short)(_DAT_14250445c >> 1));
              iVar5 = (int)(short)(uVar11 - (short)(_DAT_142504460 >> 1));
              fVar15 = (float)(iVar5 * iVar5 + iVar7 * iVar7);
              if (fVar15 < 0.0) {
                fVar15 = (float)callee_14154f626(fVar15);
              }
              else {
                fVar15 = SQRT(fVar15);
              }
              iVar5 = (int)(short)(int)fVar15;
              in_stack_ffffffffffffff98 = uVar11;
              FUN_14007f290(0x1423ed870,&uStackX_8,&uStackX_10,sVar10,uVar11,CONCAT22(uVar16,sVar9))
              ;
              uVar4 = FUN_140f69600(_DAT_142507ed8,uStackX_8 & 0xffff,uStackX_10 & 0xffff);
              if (uVar4 < 0x30) {
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined1 *)((longlong)(int)uVar4 + 0x140e76398)) {
                case 0:
                  iVar5 = iVar5 + 50000;
                  break;
                case 1:
                  iVar5 = iVar5 + 100000;
                }
              }
              if ((iVar5 < iVar13) || (iVar13 == -1)) {
                iVar7 = FUN_14010c610(0x1423ed870,sVar10,uVar11,sVar9);
                piVar6 = piVar2;
                goto LAB_140e761e8;
              }
            }
            break;
          }
          sVar9 = sVar9 + 1;
        } while (sVar9 < _DAT_142504464);
        goto LAB_140e76269;
      }
LAB_140e76285:
      sVar10 = sVar10 + 1;
      iStackX_18 = (int)sVar10;
    } while (iStackX_18 < iVar5);
  }
  _DAT_1418b826c = 0x303;
  iVar13 = _DAT_1423e9b04;
  iVar5 = _DAT_1423e9b08;
  if (((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) && (_DAT_142666788 != 0)) {
    iVar13 = *(int *)(_DAT_142666788 + 4);
    iVar5 = *(int *)(_DAT_142666788 + 8);
  }
  _DAT_1423a4240 = _DAT_1423b6004 - (iVar13 >> 1);
  _DAT_1423a4244 = _DAT_1423b6008 - (iVar5 >> 1);
  _DAT_1423a423c = _DAT_1423b600c;
  DAT_1418c9581 = 1;
  _DAT_1418b82f0 = 0xffff8ad0;
  _DAT_1418b82f4 = 0xffff8ad0;
  _DAT_1418b82f8 = 0xffff8ad0;
  FUN_1408d5e70(0);
  FUN_1414b0c30(0x1423ed870);
  if (piVar2 != (int *)0x0) {
    uVar8 = lStack_48 - (longlong)piVar2 & 0xfffffffffffffffc;
    piVar12 = piVar2;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      piVar12 = *(int **)(piVar2 + -2);
      if (0x1f < (ulonglong)((longlong)piVar2 + (-8 - (longlong)piVar12))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    callee_14154de20(piVar12,uVar8);
  }
  return;
LAB_140e761e8:
  if (piVar6 == piVar12) goto LAB_140e76210;
  cVar3 = '\x01';
  if (piVar6 < piVar12) {
    cVar3 = -1;
  }
  if (-1 < cVar3) goto LAB_140e76210;
  if (*piVar6 == iVar7) {
    if ((int)((longlong)piVar6 - (longlong)piVar2 >> 2) != -1) goto LAB_140e7621e;
    goto LAB_140e76210;
  }
  piVar6 = piVar6 + 1;
  goto LAB_140e761e8;
LAB_140e76210:
  if (((longlong)piVar12 - (longlong)piVar2 & 0xfffffffffffffffcU) == 0) {
LAB_140e7621e:
    FUN_140070e90(0x1423b5fe0,&UNK_14174ab08,0x16);
    _DAT_1423b6000 = 0;
    _DAT_1423b6004 = iStackX_18;
    _DAT_1423b600c = (int)sVar9;
    iVar13 = iVar5;
    _DAT_1423b6008 = iVar14;
  }
LAB_140e76269:
  uVar11 = uVar11 + 1;
  iVar14 = (int)(short)uVar11;
  iVar5 = _DAT_14250445c;
  iVar7 = _DAT_142504460;
  if (_DAT_142504460 <= iVar14) goto LAB_140e76285;
  goto LAB_140e76070;
}

/* Actual Ghidra output, research name; VA 0x1401dedb0..0x1401e04f1. */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recenter_panel(ulonglong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  undefined1 auStack_148 [32];
  undefined1 uStack_128;
  undefined4 uStack_120;
  short asStack_118 [2];
  short asStack_114 [2];
  short asStack_110 [2];
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  ulonglong uStack_f0;
  undefined8 *puStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 *******pppppppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_148;
  iStack_f8 = -1;
  iStack_fc = -1;
  if (DAT_1423ac955 != '\0') {
    iStack_f8 = _DAT_142666930;
    iStack_fc = _DAT_142666934;
  }
  iVar23 = _DAT_1423e9b08 + -4;
  iVar20 = param_4 + -0x4e;
  iStack_dc = (_DAT_1423e9b08 + -0x14) / 6;
  uVar19 = (int)(_DAT_1423b6368 - _DAT_1423b6360 >> 3) + 0x10;
  uStack_a0 = (ulonglong)uVar19;
  iStack_104 = 4;
  if ((int)uVar19 <= iStack_dc) {
    iStack_104 = 2;
  }
  iStack_104 = (param_4 + -0x1e) - iStack_104;
  iStack_e0 = param_4 + -0x30;
  iStack_d8 = iStack_104 + -0xd;
  iStack_c8 = iStack_104 + -9;
  iStack_c4 = iStack_104 + -5;
  iStack_b8 = param_4 + -0x32;
  iStack_bc = _DAT_1423e9b08 + -8;
  iVar15 = 9;
  iStack_100 = iVar20;
  uStack_f0 = param_1;
  iVar16 = param_4 + -0x50;
  if (8 < iVar23) {
    do {
      for (; iVar16 <= param_4 + -0x1e; iVar16 = iVar16 + 1) {
        _DAT_1426667f4 = iVar16;
        _DAT_1426667f8 = iVar15;
        FUN_1400bc750(0x142666770,0,0);
        callee_140af1390(0x142666770);
      }
      iVar15 = iVar15 + 1;
      iVar16 = param_4 + -0x50;
    } while (iVar15 <= iVar23);
    uVar19 = (uint)uStack_a0;
  }
  param_4 = param_4 + -0x30;
  iStack_10c = 0xb;
  iVar23 = uVar19 - iStack_dc;
  if (*(int *)(uStack_f0 + 4) <= (int)(uVar19 - iStack_dc)) {
    iVar23 = *(int *)(uStack_f0 + 4);
  }
  iStack_108 = 0;
  if (-1 < iVar23) {
    iStack_108 = iVar23;
  }
  iStack_c0 = iStack_108 + iStack_dc;
  uVar14 = uStack_f0;
  if (iStack_108 < iStack_c0) {
    lStack_98 = (longlong)iStack_108;
    lStack_b0 = (longlong)iStack_104;
    lStack_a8 = (longlong)iVar20;
    lStack_90 = (longlong)(int)uVar19;
    lStack_d0 = 0xb;
    do {
      iVar23 = iStack_10c;
      uVar14 = uStack_f0;
      if (lStack_90 <= lStack_98) break;
      if (iStack_108 < 0x10) {
        puStack_e8 = (undefined8 *)((longlong)iStack_108 * 0x38 + 0x1423b5fe0);
      }
      else {
        puStack_e8 = *(undefined8 **)(_DAT_1423b6360 + -0x80 + lStack_98 * 8);
      }
      _DAT_1426667fc = 0x1010007;
      if (iVar20 <= iStack_104) {
        iVar16 = iStack_10c + 6;
        iVar12 = iVar23;
        param_4 = iStack_e0;
        iVar24 = iStack_104;
        iVar15 = iVar20;
        do {
          for (; iVar20 = iStack_100, iStack_100 = iVar20, iStack_e0 = param_4, iVar12 < iVar16;
              iVar12 = iVar12 + 1) {
            _DAT_1426667f4 = iVar15;
            _DAT_1426667f8 = iVar12;
            callee_140af1390();
            if ((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) {
              FUN_1400bc750(0x142666770,0,1);
            }
            param_4 = iStack_e0;
            iVar24 = iStack_104;
          }
          iVar15 = iVar15 + 1;
          iVar12 = iVar23;
        } while (iVar15 <= iVar24);
      }
      puVar8 = puStack_e8;
      iVar23 = iStack_10c;
      uVar14 = uStack_f0;
      if ((*(int *)(uStack_f0 + 0x14) == -1) || (*(int *)(uStack_f0 + 0x14) != iStack_108)) {
        iVar23 = iStack_10c + 2;
        if (iStack_10c <= iVar23) {
          lVar18 = 0;
          iVar16 = iVar20;
          iVar15 = iStack_10c;
          do {
            for (; iVar16 <= param_4; iVar16 = iVar16 + 1) {
              if (iVar16 == iVar20) {
                lVar7 = 0x14266828c;
              }
              else if (iVar16 == param_4 + -3) {
                lVar7 = 0x1426682e0;
              }
              else if (iVar16 == param_4 + -2) {
                lVar7 = 0x1426682ec;
              }
              else if (iVar16 == param_4 + -1) {
                lVar7 = 0x1426682f8;
              }
              else {
                lVar7 = 0x142668304;
                if (iVar16 != param_4) {
                  lVar7 = 0x142668298;
                }
              }
              _DAT_1426667f4 = iVar16;
              _DAT_1426667f8 = iVar15;
              callee_140af1390(0x142666770,*(undefined4 *)(lVar7 + lVar18));
              if ((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) {
                uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
                FUN_1400bc750(0x142666770,0);
              }
            }
            iVar15 = iVar15 + 1;
            lVar18 = lVar18 + 4;
            iVar16 = iVar20;
          } while (iVar15 <= iVar23);
        }
        puVar8 = puStack_e8;
        pppppppuStack_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uVar11 = puStack_e8[2];
        puVar22 = puStack_e8;
        if (0xf < (ulonglong)puStack_e8[3]) {
          puVar22 = (undefined8 *)*puStack_e8;
        }
        if (0x7fffffffffffffff < uVar11) {
          FUN_140066e50();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar11 < 0x10) {
          uStack_50 = 0xf;
          pppppppuStack_68 = (undefined8 *******)*puVar22;
          uStack_60 = puVar22[1];
          uStack_58 = uVar11;
        }
        else {
          uVar10 = uVar11 | 0xf;
          if (uVar10 < 0x8000000000000000) {
            if (uVar10 < 0x16) {
              uVar10 = 0x16;
            }
          }
          else {
            uVar10 = 0x7fffffffffffffff;
          }
          pppppppuStack_68 = (undefined8 *******)FUN_140071d90(uVar10 + 1);
          uVar14 = uVar11 + 1;
          uStack_58 = uVar11;
          uStack_50 = uVar10;
          callee_14154f29e(pppppppuStack_68,puVar22);
        }
        uVar11 = uStack_50;
        iVar23 = iStack_108;
        pppppppuVar6 = pppppppuStack_68;
        if ((uStack_58 == 0) &&
           ((*(char *)(uStack_f0 + 0x10) == '\0' || (iStack_108 != *(int *)(uStack_f0 + 0xc))))) {
          if (uStack_50 < 0x19) {
            if (0x7fffffffffffffff - (uStack_50 >> 1) < uStack_50) {
              uVar13 = 0x7fffffffffffffff;
            }
            else {
              uVar10 = (uStack_50 >> 1) + uStack_50;
              uVar13 = 0x1f;
              if (0x1f < uVar10) {
                uVar13 = uVar10;
              }
            }
            pppppppuVar6 = (undefined8 *******)FUN_140071d90(uVar13 + 1);
            uStack_58 = 0x19;
            *pppppppuVar6 = (undefined8 ******)0x2064656d616e6e55;
            pppppppuVar6[1] = (undefined8 ******)0x7265746e65636572;
            pppppppuVar6[2] = (undefined8 ******)0x6f697461636f6c20;
            *(undefined1 *)(pppppppuVar6 + 3) = 0x6e;
            *(undefined1 *)((longlong)pppppppuVar6 + 0x19) = 0;
            uStack_50 = uVar13;
            if (0xf < uVar11) {
              uVar10 = uVar11 + 1;
              if ((0xfff < uVar10) &&
                 (uVar10 = uVar11 + 0x28,
                 0x1f < (ulonglong)
                        ((longlong)pppppppuStack_68 + (-8 - (longlong)pppppppuStack_68[-1]))))
              goto LAB_1401e0319;
              callee_14154de20(0x6f697461636f6c20,uVar10);
            }
          }
          else {
            pppppppuVar6 = &pppppppuStack_68;
            if (0xf < uStack_50) {
              pppppppuVar6 = pppppppuStack_68;
            }
            uStack_58 = 0x19;
            uVar14 = 0x19;
            callee_14154f5ba(pppppppuVar6,&DAT_14161b3e8);
            *(undefined1 *)((longlong)pppppppuVar6 + 0x19) = 0;
            pppppppuVar6 = pppppppuStack_68;
          }
        }
        pppppppuStack_68 = pppppppuVar6;
        if ((iVar23 == *(int *)(uStack_f0 + 0xc)) && (*(char *)(uStack_f0 + 0x10) != '\0')) {
          uVar19 = GetTickCount();
          uVar14 = (ulonglong)(uVar19 % 1000);
          if (uVar19 % 1000 < 500) {
            uVar14 = 1;
            FUN_140070fd0(&pppppppuStack_68,&UNK_141602a6c);
          }
        }
        iVar23 = iStack_10c;
        _DAT_1426667fc = 0x1010007;
        _DAT_1426667f4 = iVar20 + 1;
        puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,_DAT_1426667f4);
        _DAT_1426667f8 = iStack_10c + 1;
        FUN_140af0220(0x142666770,&pppppppuStack_68);
        if (0xf < uStack_50) {
          if ((0xfff < uStack_50 + 1) &&
             (0x1f < (ulonglong)((longlong)pppppppuStack_68 + (-8 - (longlong)pppppppuStack_68[-1]))
             )) {
LAB_1401e0320:
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          callee_14154de20();
        }
      }
      else if (*(char *)(uStack_f0 + 0x18) == '\0') {
        if (*(char *)(uStack_f0 + 0x20) != '\0') {
          _DAT_1426667fc = 0x1010006;
          _DAT_1426667f4 = iVar20 + 1;
          _DAT_1426667f8 = iStack_10c + 1;
          uStack_78 = 0xd;
          uStack_70 = 0xf;
          pppppppuStack_88 = (undefined8 *******)0x6320796c6c616552;
          uStack_80 = 0x3f7261656c;
          FUN_140af0220(0x142666770,&pppppppuStack_88,uStack_f0,0);
          if (0xf < uStack_70) {
            if ((0xfff < uStack_70 + 1) &&
               (0x1f < (ulonglong)
                       ((longlong)pppppppuStack_88 + (-8 - (longlong)pppppppuStack_88[-1])))) {
              _invalid_parameter_noinfo_noreturn();
LAB_1401e0319:
              _invalid_parameter_noinfo_noreturn();
              goto LAB_1401e0320;
            }
            callee_14154de20();
            puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,iVar20 + 1);
            goto LAB_1401df5e6;
          }
        }
        puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,iVar20 + 1);
      }
      else {
        _DAT_1426667fc = 0x1010006;
        _DAT_1426667f4 = iVar20 + 1;
        _DAT_1426667f8 = iStack_10c + 1;
        pppppppuStack_88 = (undefined8 *******)0x0;
        uStack_80 = 0;
        pppppppuStack_88 = (undefined8 *******)FUN_140071d90(0x20);
        uStack_78 = 0x11;
        uStack_70 = 0x1f;
        *pppppppuStack_88 = (undefined8 ******)0x6f20796c6c616552;
        pppppppuStack_88[1] = (undefined8 ******)0x6574697277726576;
        *(undefined1 *)(pppppppuStack_88 + 2) = 0x3f;
        *(undefined1 *)((longlong)pppppppuStack_88 + 0x11) = 0;
        FUN_140af0220(0x142666770);
        FUN_140070e10(&pppppppuStack_88);
        puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,iVar20 + 1);
      }
LAB_1401df5e6:
      iVar20 = iVar20 + 1;
      _DAT_1426667f8 = iVar23 + 3;
      sVar1 = *(short *)(puVar8 + 4);
      _DAT_1426667f4 = iVar20;
      if (sVar1 == 0) {
        _DAT_1426667fc = 0x1010003;
        uStack_78 = 0xc;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x7265746e65636552;
        uStack_80 = 0x206f7420;
        FUN_140af0220(0x142666770,&pppppppuStack_88);
        if (0xf < uStack_70) {
          if (uStack_70 + 1 < 0x1000) {
LAB_1401dfc51:
            callee_14154de20();
            goto LAB_1401dfc56;
          }
          if ((ulonglong)((longlong)pppppppuStack_88 + (-8 - (longlong)pppppppuStack_88[-1])) < 0x20
             ) goto LAB_1401dfc51;
          _invalid_parameter_noinfo_noreturn(pppppppuStack_88[-1],uStack_70 + 0x28);
LAB_1401e0335:
          _invalid_parameter_noinfo_noreturn();
          break;
        }
LAB_1401dfc56:
        uStack_58 = 10;
        uStack_50 = 0xf;
        pppppppuStack_68 = (undefined8 *******)0x6f69746176656c65;
        uStack_60 = 0x206e;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x0;
        decimal(*(int *)((longlong)puVar8 + 0x2c) + _DAT_142504470 + -100,&pppppppuStack_88);
        pppppppuVar6 = &pppppppuStack_88;
        if (0xf < uStack_70) {
          pppppppuVar6 = pppppppuStack_88;
        }
        uVar14 = uStack_78;
        FUN_140070fd0(&pppppppuStack_68,pppppppuVar6);
        if (0xf < uStack_70) {
          uVar11 = uStack_70 + 1;
          pppppppuVar6 = pppppppuStack_88;
          if (0xfff < uVar11) {
            uVar11 = uStack_70 + 0x28;
            pppppppuVar6 = (undefined8 *******)pppppppuStack_88[-1];
            if (0x1f < (ulonglong)((longlong)pppppppuStack_88 + (-8 - (longlong)pppppppuVar6)))
            goto LAB_1401e0335;
          }
          callee_14154de20(pppppppuVar6,uVar11);
        }
        FUN_140070fd0(&pppppppuStack_68,&UNK_14161b428,0xb);
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x0;
        decimal(*(int *)((longlong)puVar8 + 0x24) + 1,&pppppppuStack_88);
        pppppppuVar6 = &pppppppuStack_88;
        if (0xf < uStack_70) {
          pppppppuVar6 = pppppppuStack_88;
        }
        uVar14 = uStack_78;
        FUN_140070fd0(&pppppppuStack_68,pppppppuVar6);
        if (0xf < uStack_70) {
          uVar11 = uStack_70 + 1;
          pppppppuVar6 = pppppppuStack_88;
          if (0xfff < uVar11) {
            uVar11 = uStack_70 + 0x28;
            pppppppuVar6 = (undefined8 *******)pppppppuStack_88[-1];
            if (0x1f < (ulonglong)((longlong)pppppppuStack_88 + (-8 - (longlong)pppppppuVar6)))
            goto LAB_1401e0335;
          }
          callee_14154de20(pppppppuVar6,uVar11);
        }
        FUN_140070fd0(&pppppppuStack_68,&UNK_141614204,1);
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x0;
        decimal(*(int *)(puVar8 + 5) + 1,&pppppppuStack_88);
        pppppppuVar6 = &pppppppuStack_88;
        if (0xf < uStack_70) {
          pppppppuVar6 = pppppppuStack_88;
        }
        uVar14 = uStack_78;
        FUN_140070fd0(&pppppppuStack_68,pppppppuVar6);
        if (0xf < uStack_70) {
          uVar11 = uStack_70 + 1;
          pppppppuVar6 = pppppppuStack_88;
          if (0xfff < uVar11) {
            uVar11 = uStack_70 + 0x28;
            pppppppuVar6 = (undefined8 *******)pppppppuStack_88[-1];
            if (0x1f < (ulonglong)((longlong)pppppppuStack_88 + (-8 - (longlong)pppppppuVar6)))
            goto LAB_1401e0335;
          }
          callee_14154de20(pppppppuVar6,uVar11);
        }
        FUN_140af0220(0x142666770,&pppppppuStack_68);
LAB_1401dfe47:
        pppppppuVar6 = &pppppppuStack_68;
LAB_1401dfe4b:
        FUN_140070e10(pppppppuVar6);
      }
      else {
        if (sVar1 != 1) {
          if (sVar1 == 2) {
            _DAT_1426667fc = 0x1010006;
            uStack_58 = 0xc;
            uStack_50 = 0xf;
            pppppppuStack_68 = (undefined8 *******)0x206e776f6e6b6e55;
            uStack_60 = 0x6d657469;
            iVar20 = *(int *)(puVar8 + 6);
            iVar16 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3);
            if ((iVar16 != 0) && (iVar20 != -1)) {
              iVar15 = 0;
              iVar16 = iVar16 + -1;
              if (-1 < iVar16) {
                do {
                  iVar12 = iVar15 + iVar16 >> 1;
                  lVar18 = *(longlong *)(_DAT_1424017d0 + (longlong)iVar12 * 8);
                  if (*(int *)(lVar18 + 0x1c) == iVar20) goto LAB_1401df709;
                  iVar24 = iVar12 + -1;
                  if (*(int *)(lVar18 + 0x1c) < iVar20) {
                    iVar24 = iVar16;
                    iVar15 = iVar12 + 1;
                  }
                  iVar16 = iVar24;
                } while (iVar15 <= iVar24);
              }
              lVar18 = 0;
LAB_1401df709:
              if (lVar18 != 0) {
                uVar19 = *(uint *)(lVar18 + 0x10);
                asStack_118[0] = -30000;
                if ((uVar19 >> 4 & 1) == 0) {
                  if ((uVar19 & 8) == 0) {
                    asStack_118[0] = *(short *)(lVar18 + 8);
                    asStack_114[0] = *(short *)(lVar18 + 10);
                    asStack_110[0] = *(short *)(lVar18 + 0xc);
                  }
                  else {
                    puVar22 = *(undefined8 **)(lVar18 + 0x40);
                    for (puVar8 = *(undefined8 **)(lVar18 + 0x38); puVar8 < puVar22;
                        puVar8 = puVar8 + 1) {
                      iVar20 = (**(code **)(*(longlong *)*puVar8 + 0x10))();
                      if (iVar20 == 0xb) {
                        lVar7 = (**(code **)(*(longlong *)*puVar8 + 0x18))();
                        if (lVar7 != 0) {
                          FUN_140ca05b0(lVar7,asStack_118,asStack_114,asStack_110);
                          goto LAB_1401df834;
                        }
                      }
                      else if ((iVar20 == 0x12) &&
                              (lVar7 = (**(code **)(*(longlong *)*puVar8 + 0x20))(), lVar7 != 0)) {
                        FUN_14137aa90(lVar7,asStack_118,asStack_114,asStack_110);
                        goto LAB_1401df834;
                      }
                    }
                    for (puVar8 = *(undefined8 **)(lVar18 + 0x20);
                        puVar8 < *(undefined8 **)(lVar18 + 0x28); puVar8 = puVar8 + 1) {
                      if (*(int *)*puVar8 == 7) {
                        lVar7 = *(longlong *)((int *)*puVar8 + 2);
                        asStack_118[0] = *(short *)(lVar7 + 4);
                        asStack_114[0] = *(short *)(lVar7 + 6);
                        asStack_110[0] = *(short *)(lVar7 + 8);
                        break;
                      }
                    }
                  }
LAB_1401df834:
                  if (((((asStack_118[0] < 0) || (_DAT_14250445c <= asStack_118[0])) ||
                       (asStack_114[0] < 0)) ||
                      ((_DAT_142504460 <= asStack_114[0] || (asStack_110[0] < 0)))) ||
                     (_DAT_142504464 <= asStack_110[0])) goto LAB_1401df90e;
                  if ((_DAT_142504428 == 0) ||
                     (lVar7 = *(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (_DAT_142504428 + (longlong)(asStack_118[0] >> 4) * 8) +
                                 (longlong)(asStack_114[0] >> 4) * 8) + (longlong)asStack_110[0] * 8
                               ), lVar7 == 0)) goto LAB_1401df90e;
                  uVar4 = (int)asStack_118[0] & 0x8000000f;
                  if ((int)uVar4 < 0) {
                    uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
                  }
                  uVar5 = (int)asStack_114[0] & 0x8000000f;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
                  }
                  if ((*(uint *)(lVar7 + 0x2a0 +
                                ((longlong)(int)uVar4 * 0x10 + (longlong)(int)uVar5) * 4) & 0x200)
                      == 0) goto LAB_1401df90e;
                  FUN_140c79f60(lVar18,&pppppppuStack_68,0,0xffffffff);
                }
                else {
LAB_1401df90e:
                  FUN_140c79f60(lVar18,&pppppppuStack_68,0,0xffffffff);
                  iVar23 = iStack_10c;
                  if ((uVar19 >> 4 & 1) == 0) goto LAB_1401df94e;
                }
                FUN_140070fd0(&pppppppuStack_68,&UNK_14161b470,9);
                iVar23 = iStack_10c;
              }
            }
LAB_1401df94e:
            if ((ulonglong)(longlong)((iStack_104 - iStack_100) + -2) <= uStack_58) {
              lVar18 = lStack_b0 - lStack_a8;
              uVar14 = lVar18 - 3;
              if (-1 < (longlong)uVar14) {
                if (uStack_58 < uVar14) {
                  FUN_1400e2870(&pppppppuStack_68,uVar14 - uStack_58,0);
                }
                else {
                  pppppppuVar6 = &pppppppuStack_68;
                  if (0xf < uStack_50) {
                    pppppppuVar6 = pppppppuStack_68;
                  }
                  uStack_58 = uVar14;
                  *(undefined1 *)(uVar14 + (longlong)pppppppuVar6) = 0;
                }
              }
              if (3 < (longlong)uVar14) {
                pppppppuVar6 = &pppppppuStack_68;
                if (0xf < uStack_50) {
                  pppppppuVar6 = pppppppuStack_68;
                }
                *(undefined1 *)(lVar18 + -6 + (longlong)pppppppuVar6) = 0x2e;
                pppppppuVar6 = &pppppppuStack_68;
                if (0xf < uStack_50) {
                  pppppppuVar6 = pppppppuStack_68;
                }
                *(undefined1 *)(lVar18 + -5 + (longlong)pppppppuVar6) = 0x2e;
                pppppppuVar6 = &pppppppuStack_68;
                if (0xf < uStack_50) {
                  pppppppuVar6 = pppppppuStack_68;
                }
                *(undefined1 *)(lVar18 + -4 + (longlong)pppppppuVar6) = 0x2e;
              }
            }
            FUN_140af0220(0x142666770,&pppppppuStack_68);
            goto LAB_1401dfe47;
          }
          _DAT_1426667fc = 0x1010000;
          pppppppuStack_88 = (undefined8 *******)0x0;
          uStack_80 = 0;
          pppppppuStack_88 = (undefined8 *******)FUN_140071d90(0x20);
          uStack_78 = 0x10;
          uStack_70 = 0x1f;
          *pppppppuStack_88 = (undefined8 ******)0x2074657920746f4e;
          pppppppuStack_88[1] = (undefined8 ******)0x64656e6769737361;
          *(undefined1 *)(pppppppuStack_88 + 2) = 0;
          FUN_140af0220(0x142666770,&pppppppuStack_88);
          pppppppuVar6 = &pppppppuStack_88;
          goto LAB_1401dfe4b;
        }
        _DAT_1426667fc = 0x1010002;
        pppppppuStack_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        uVar14 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        pppppppuStack_68 = (undefined8 *******)FUN_140071d90(0x20);
        uStack_58 = 0x10;
        uStack_50 = 0x1f;
        *pppppppuStack_68 = (undefined8 ******)0x206e776f6e6b6e55;
        pppppppuStack_68[1] = (undefined8 ******)0x6572757461657263;
        *(undefined1 *)(pppppppuStack_68 + 2) = 0;
        iVar20 = *(int *)(puVar8 + 6);
        iVar16 = (int)(_DAT_142401438 - _DAT_142401430 >> 3);
        if ((iVar16 != 0) && (iVar20 != -1)) {
          iVar16 = iVar16 + -1;
          uVar10 = uVar14;
          uVar11 = uVar14;
          if (-1 < iVar16) {
            do {
              iVar12 = (int)uVar10 + iVar16 >> 1;
              uVar11 = *(ulonglong *)(_DAT_142401430 + (longlong)iVar12 * 8);
              iVar15 = *(int *)(uVar11 + 0x130);
              if (iVar15 == iVar20) break;
              iVar24 = iVar12 + -1;
              if (iVar15 < iVar20) {
                uVar10 = (ulonglong)(iVar12 + 1);
                iVar24 = iVar16;
              }
              uVar11 = uVar14;
              iVar16 = iVar24;
            } while ((int)uVar10 <= iVar24);
          }
          if (uVar11 != 0) {
            if (((*(byte *)(uVar11 + 0x110) & 2) == 0) &&
               (cVar3 = unit_follow_unavailable(uVar11), cVar3 == '\0')) {
              FUN_141344290(uVar11,&pppppppuStack_68,0);
            }
            else {
              FUN_141344290(uVar11,&pppppppuStack_68,0);
              FUN_140070fd0(&pppppppuStack_68,&UNK_14161b450,0xf);
            }
          }
        }
        if ((ulonglong)(longlong)((iStack_104 - iStack_100) + -2) <= uStack_58) {
          lVar18 = lStack_b0 - lStack_a8;
          uVar14 = lVar18 - 3;
          if (-1 < (longlong)uVar14) {
            if (uStack_58 < uVar14) {
              FUN_1400e2870(&pppppppuStack_68,uVar14 - uStack_58,0);
            }
            else {
              pppppppuVar6 = &pppppppuStack_68;
              if (0xf < uStack_50) {
                pppppppuVar6 = pppppppuStack_68;
              }
              uStack_58 = uVar14;
              *(undefined1 *)(uVar14 + (longlong)pppppppuVar6) = 0;
            }
          }
          if (3 < (longlong)uVar14) {
            pppppppuVar6 = &pppppppuStack_68;
            if (0xf < uStack_50) {
              pppppppuVar6 = pppppppuStack_68;
            }
            *(undefined1 *)(lVar18 + -6 + (longlong)pppppppuVar6) = 0x2e;
            pppppppuVar6 = &pppppppuStack_68;
            if (0xf < uStack_50) {
              pppppppuVar6 = pppppppuStack_68;
            }
            *(undefined1 *)(lVar18 + -5 + (longlong)pppppppuVar6) = 0x2e;
            pppppppuVar6 = &pppppppuStack_68;
            if (0xf < uStack_50) {
              pppppppuVar6 = pppppppuStack_68;
            }
            *(undefined1 *)(lVar18 + -4 + (longlong)pppppppuVar6) = 0x2e;
          }
        }
        FUN_140af0220(0x142666770,&pppppppuStack_68);
        if (0xf < uStack_50) {
          if (0xfff < uStack_50 + 1) {
            if (0x1f < (ulonglong)
                       ((longlong)pppppppuStack_68 + (-8 - (longlong)pppppppuStack_68[-1]))) {
              _invalid_parameter_noinfo_noreturn(pppppppuStack_68[-1],uStack_50 + 0x28);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          callee_14154de20();
        }
      }
      iVar16 = iStack_d8;
      iVar20 = iStack_108;
      if ((*(int *)(uStack_f0 + 0x14) == -1) || (*(int *)(uStack_f0 + 0x14) != iStack_108)) {
        _DAT_1426667fc = 0x1010007;
        if ((iStack_d8 <= iStack_f8) &&
           (((iStack_f8 < iStack_d8 + 4 && (lStack_d0 <= iStack_fc)) && (iStack_fc < iVar23 + 3))))
        {
          _DAT_1418c53b8 = 0x179;
          _DAT_1418c53dc = 0;
          DAT_1418c53d8 = 1;
        }
        puVar17 = (undefined4 *)0x14266e798;
        do {
          lVar18 = 3;
          iVar15 = iVar23;
          do {
            _DAT_1426667f4 = iVar16;
            _DAT_1426667f8 = iVar15;
            callee_140af19c0(0x142666770,*puVar17,0);
            iVar15 = iVar15 + 1;
            puVar17 = puVar17 + 1;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          iVar16 = iVar16 + 1;
        } while ((longlong)puVar17 < 0x14266e7c8);
        iVar16 = (int)puStack_e8;
        if (((iStack_c8 <= iStack_f8) && (iStack_f8 < iStack_c8 + 4)) &&
           ((lStack_d0 <= iStack_fc && (iStack_fc < iVar23 + 3)))) {
          _DAT_1418c53b8 = 0x17a;
          _DAT_1418c53dc = 0;
          DAT_1418c53d8 = 1;
        }
        puVar17 = (undefined4 *)0x14266e7c8;
        iVar15 = iStack_c8;
        do {
          lVar18 = 3;
          iVar12 = iVar23;
          do {
            _DAT_1426667f4 = iVar15;
            _DAT_1426667f8 = iVar12;
            callee_140af19c0(0x142666770,*puVar17,0);
            param_4 = iStack_e0;
            iVar12 = iVar12 + 1;
            puVar17 = puVar17 + 1;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          iVar15 = iVar15 + 1;
        } while ((longlong)puVar17 < 0x14266e7f8);
        if (((iStack_c4 <= iStack_f8) && (iStack_f8 < iStack_c4 + 4)) &&
           ((lStack_d0 <= iStack_fc && (iStack_fc < iVar23 + 3)))) {
          _DAT_1418c53b8 = (0xf < iVar20) + 0x17b;
          _DAT_1418c53dc = 0;
          DAT_1418c53d8 = 1;
        }
        puVar17 = (undefined4 *)0x14266e7f8;
        iVar20 = iStack_c4;
        do {
          lVar18 = 3;
          iVar15 = iVar23;
          do {
            _DAT_1426667f4 = iVar20;
            _DAT_1426667f8 = iVar15;
            callee_140af19c0(0x142666770,*puVar17,0);
            iVar15 = iVar15 + 1;
            puVar17 = puVar17 + 1;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          iVar20 = iVar20 + 1;
        } while ((longlong)puVar17 < 0x14266e828);
      }
      else {
        iVar21 = iStack_d8 + -5;
        iVar20 = iStack_d8 + 1;
        iVar15 = iStack_d8 + 9;
        puVar17 = (undefined4 *)0x142670ef0;
        iVar12 = iVar21;
        iVar23 = iStack_10c;
        iVar24 = iStack_10c;
        do {
          for (; iStack_10c = iVar23, iVar12 <= iVar20; iVar12 = iVar12 + 1) {
            if (iVar12 == iVar21) {
              uVar9 = puVar17[-6];
            }
            else if (iVar12 == iVar20) {
              uVar9 = *puVar17;
            }
            else {
              uVar9 = puVar17[-3];
            }
            _DAT_1426667f4 = iVar12;
            _DAT_1426667f8 = iVar24;
            callee_140af1390(0x142666770,uVar9);
            if ((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) {
              FUN_1400bc750(0x142666770,0,1);
            }
            iVar23 = iStack_10c;
          }
          iVar24 = iVar24 + 1;
          puVar17 = puVar17 + 1;
          iVar12 = iVar21;
        } while ((longlong)puVar17 < 0x142670efc);
        iVar20 = iVar16 + 3;
        _DAT_1426667fc = 0x1010002;
        _DAT_1426667f4 = iVar16 + -3;
        _DAT_1426667f8 = iVar23 + 1;
        uStack_80 = 0;
        uStack_78 = 3;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x736559;
        FUN_140af0220(0x142666770,&pppppppuStack_88);
        FUN_140070e10(&pppppppuStack_88);
        puVar17 = (undefined4 *)0x142670f68;
        iVar12 = iVar20;
        iVar24 = iVar23;
        do {
          for (; iVar12 <= iVar15; iVar12 = iVar12 + 1) {
            if (iVar12 == iVar20) {
              uVar9 = puVar17[-6];
            }
            else if (iVar12 == iVar15) {
              uVar9 = *puVar17;
            }
            else {
              uVar9 = puVar17[-3];
            }
            _DAT_1426667f4 = iVar12;
            _DAT_1426667f8 = iVar24;
            callee_140af1390(0x142666770,uVar9);
            if ((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) {
              FUN_1400bc750(0x142666770,0,1);
            }
          }
          iVar24 = iVar24 + 1;
          puVar17 = puVar17 + 1;
          iVar12 = iVar20;
        } while ((longlong)puVar17 < 0x142670f74);
        _DAT_1426667fc = 0x1010007;
        _DAT_1426667f4 = iVar16 + 5;
        _DAT_1426667f8 = iVar23 + 1;
        uStack_80 = 0;
        uStack_78 = 2;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x6f4e;
        FUN_140af0220(0x142666770,&pppppppuStack_88);
        FUN_140070e10(&pppppppuStack_88);
        iVar16 = (int)puStack_e8;
        param_4 = iStack_e0;
      }
      iVar20 = iStack_108;
      if (iStack_108 < 0x10) {
        _DAT_1426667f8 = iVar23 + 4;
        _DAT_1426667fc = 0x1010007;
        uStack_78 = 8;
        uStack_70 = 0xf;
        pppppppuStack_88 = (undefined8 *******)0x203a79656b746f48;
        uStack_80 = 0;
        _DAT_1426667f4 = iVar16;
        FUN_140af0220(0x142666770,&pppppppuStack_88);
        uVar25 = FUN_140070e10(&pppppppuStack_88);
        binding_key(uVar25,iVar20 + 0x25c);
      }
      iStack_10c = iVar23 + 6;
      lStack_d0 = lStack_d0 + 6;
      iStack_108 = iVar20 + 1;
      lStack_98 = lStack_98 + 1;
      uVar14 = uStack_f0;
      iVar20 = iStack_100;
    } while (iStack_108 < iStack_c0);
    uVar19 = (uint)uStack_a0;
  }
  puVar17 = (undefined4 *)0x142670ef0;
  iVar15 = iVar20;
  iVar16 = iStack_bc;
  iVar23 = iStack_b8;
  iVar12 = iStack_bc;
  if (iStack_dc < (int)uVar19) {
    uStack_70 = 0;
    pppppppuStack_88 = (undefined8 *******)(ulonglong)*(uint *)(uVar14 + 4);
    uStack_78 = CONCAT44(iStack_dc * 6 + 9,0xc);
    uStack_80 = CONCAT44(iStack_dc,uVar19 - 1);
    FUN_1400bc970(&pppppppuStack_88);
    uStack_120 = 0;
    uStack_128 = *(undefined1 *)(uStack_f0 + 8);
    FUN_141423200(&pppppppuStack_88,iStack_f8,iStack_fc,iStack_104 + 1);
    iVar16 = iStack_bc;
    iVar23 = iStack_b8;
    iVar12 = iStack_bc;
  }
  do {
    for (; iVar15 <= iVar23; iVar15 = iVar15 + 1) {
      if (iVar15 == iVar20) {
        uVar9 = puVar17[-6];
      }
      else if (iVar15 == iVar23) {
        uVar9 = *puVar17;
      }
      else {
        uVar9 = puVar17[-3];
      }
      _DAT_1426667f4 = iVar15;
      _DAT_1426667f8 = iVar12;
      callee_140af1390(0x142666770,uVar9);
      if ((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) {
        FUN_1400bc750(0x142666770,0,1);
      }
    }
    puVar17 = puVar17 + 1;
    iVar15 = iVar20;
    iVar12 = iVar12 + 1;
  } while ((longlong)puVar17 < 0x142670efc);
  _DAT_1426667fc = 0x1010002;
  _DAT_1426667f4 = iVar20 + 2;
  _DAT_1426667f8 = iVar16 + 1;
  pppppppuStack_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  pppppppuStack_88 = (undefined8 *******)FUN_140071d90(0x20);
  uStack_78 = 0x19;
  uStack_70 = 0x1f;
  *pppppppuStack_88 = (undefined8 ******)0x2077656e20646441;
  pppppppuStack_88[1] = (undefined8 ******)0x7265746e65636572;
  pppppppuStack_88[2] = (undefined8 ******)0x6f697461636f6c20;
  *(undefined1 *)(pppppppuStack_88 + 3) = 0x6e;
  *(undefined1 *)((longlong)pppppppuStack_88 + 0x19) = 0;
  FUN_140af0220(0x142666770,&pppppppuStack_88);
  FUN_140070e10(&pppppppuStack_88);
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_148);
  return;
}

/* Actual Ghidra output, research name; VA 0x1401e0500..0x1401e0dd8. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong recenter_input(undefined1 *param_1,longlong *param_2,int param_3,uint param_4,
                        undefined8 param_5,int param_6)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint7 uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  short sVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  byte *pbStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  
  if ((DAT_1423ac955 == 0) || (DAT_1423ac94d == '\0')) {
    puVar11 = (undefined8 *)((undefined8 *)*param_2)[1];
    cVar2 = *(char *)((longlong)puVar11 + 0x19);
    puVar14 = (undefined8 *)*param_2;
    while (cVar2 == '\0') {
      if (*(int *)((longlong)puVar11 + 0x1c) < 5) {
        puVar5 = (undefined8 *)puVar11[2];
        puVar11 = puVar14;
      }
      else {
        puVar5 = (undefined8 *)*puVar11;
      }
      puVar14 = puVar11;
      puVar11 = puVar5;
      cVar2 = *(char *)((longlong)puVar5 + 0x19);
    }
    if ((*(char *)((longlong)puVar14 + 0x19) != '\0') || (5 < *(int *)((longlong)puVar14 + 0x1c))) {
      iVar17 = param_6 + -0x1e;
      iStack_54 = param_6 + -0x50;
      iStack_58 = _DAT_1423e9b08;
      iStack_40 = _DAT_1423e9b08 + -4;
      iVar12 = (_DAT_1423e9b08 + -0x14) / 6;
      iVar10 = (int)((longlong)_DAT_1423b6368 - _DAT_1423b6360 >> 3);
      uVar13 = iVar10 + 0x10;
      pbStack_48 = (byte *)(ulonglong)uVar13;
      iStack_30 = param_6 + -0x30;
      iStack_38 = -0x11;
      if ((int)uVar13 <= iVar12) {
        iStack_38 = -0xf;
      }
      iStack_38 = iStack_38 + iVar17;
      iStack_34 = -0xd;
      if ((int)uVar13 <= iVar12) {
        iStack_34 = -0xb;
      }
      iStack_34 = iStack_34 + iVar17;
      iVar4 = -9;
      if ((int)uVar13 <= iVar12) {
        iVar4 = -7;
      }
      uStack_2c = iVar4 + iVar17;
      uStack_50 = param_6 + -0x32;
      iStack_3c = _DAT_1423e9b08 + -8;
      uStack_4c = _DAT_1423e9b08 + -6;
      pbVar6 = (byte *)(ulonglong)DAT_1423ac955;
      if (((((*(int *)(param_1 + 0x14) == -1) && (DAT_1423ac955 != 0)) && (iVar12 < (int)uVar13)) &&
          ((iStack_54 <= param_3 && (param_3 <= iVar17)))) &&
         ((8 < (int)param_4 && ((int)param_4 <= iStack_40)))) {
        iStack_64 = iVar12 * 6 + 9;
        uStack_60 = 0;
        uStack_78 = *(uint *)(param_1 + 4);
        uStack_74 = 0;
        iStack_70 = iVar10 + 0xf;
        iStack_68 = 0xc;
        iStack_6c = iVar12;
        FUN_1400bc970(&uStack_78);
        pbVar6 = (byte *)FUN_141422fe0(&uStack_78,param_2,param_1 + 4,param_1 + 8);
        if ((char)pbVar6 != '\0') goto LAB_1401e0853;
        iStack_58 = _DAT_1423e9b08;
        pbVar6 = (byte *)(ulonglong)DAT_1423ac955;
      }
      _DAT_1423e9b08 = iStack_58;
      if (param_1[8] == '\0') {
        if ((char)pbVar6 == '\0') goto LAB_1401e0853;
        if (DAT_1423ac94c != '\0') {
          if (*(int *)(param_1 + 0x14) == -1) {
            if (iVar12 < (int)uVar13) {
              iVar4 = -3;
              if ((int)uVar13 <= iVar12) {
                iVar4 = -1;
              }
              if (((iVar4 + iVar17 <= param_3) && (param_3 <= iVar4 + iVar17 + 1)) &&
                 ((10 < (int)param_4 && ((int)param_4 <= iVar12 * 6 + 10)))) {
                _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                uStack_60 = 0;
                uStack_78 = *(uint *)(param_1 + 4);
                uStack_74 = 0;
                iStack_70 = iVar10 + 0xf;
                iStack_68 = 0xc;
                iStack_6c = iVar12;
                iStack_64 = iVar12 * 6 + 9;
                FUN_1400bc970(&uStack_78);
                param_1[8] = 0;
                pbVar6 = (byte *)(ulonglong)(iStack_68 - 1U);
                if (param_4 == iStack_68 - 1U) {
                  uVar13 = uStack_78 - 1;
                  if ((int)(uStack_78 - 1) < (int)uStack_74) {
                    uVar13 = uStack_74;
                  }
                  *(uint *)(param_1 + 4) = uVar13;
                }
                else {
                  pbVar6 = (byte *)(ulonglong)(iStack_64 + 1U);
                  if (param_4 == iStack_64 + 1U) {
                    uVar9 = (iStack_70 - iStack_6c) + 1;
                    pbVar6 = (byte *)(ulonglong)uVar9;
                    uVar13 = uStack_78 + 1;
                    if ((int)uVar9 < (int)(uStack_78 + 1)) {
                      uVar13 = uVar9;
                    }
                    *(uint *)(param_1 + 4) = uVar13;
                  }
                  else if ((int)param_4 < (int)uStack_60) {
                    uVar13 = uStack_78 - iStack_6c;
                    if ((int)(uStack_78 - iStack_6c) < (int)uStack_74) {
                      uVar13 = uStack_74;
                    }
                    *(uint *)(param_1 + 4) = uVar13;
                  }
                  else if (uStack_60._4_4_ < (int)param_4) {
                    iVar10 = (iStack_70 - iStack_6c) + 1;
                    iVar12 = uStack_78 + iStack_6c;
                    if (iVar10 < (int)(uStack_78 + iStack_6c)) {
                      iVar12 = iVar10;
                    }
                    *(int *)(param_1 + 4) = iVar12;
                  }
                  else {
                    param_1[8] = 1;
                  }
                }
                goto LAB_1401e0853;
              }
            }
            if ((((iStack_54 + 2 <= param_3) && (param_3 <= (int)uStack_50)) &&
                (iStack_3c <= (int)param_4)) && ((int)param_4 <= (int)uStack_4c)) {
              _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
              pbStack_48 = (byte *)FUN_14154de30(0x38);
              pbStack_48[0] = 0;
              pbStack_48[1] = 0;
              pbStack_48[2] = 0;
              pbStack_48[3] = 0;
              pbStack_48[4] = 0;
              pbStack_48[5] = 0;
              pbStack_48[6] = 0;
              pbStack_48[7] = 0;
              pbStack_48[8] = 0;
              pbStack_48[9] = 0;
              pbStack_48[10] = 0;
              pbStack_48[0xb] = 0;
              pbStack_48[0xc] = 0;
              pbStack_48[0xd] = 0;
              pbStack_48[0xe] = 0;
              pbStack_48[0xf] = 0;
              pbStack_48[0x18] = 0xf;
              pbStack_48[0x19] = 0;
              pbStack_48[0x1a] = 0;
              pbStack_48[0x1b] = 0;
              pbStack_48[0x1c] = 0;
              pbStack_48[0x1d] = 0;
              pbStack_48[0x1e] = 0;
              pbStack_48[0x1f] = 0;
              *pbStack_48 = 0;
              pbStack_48[0x20] = 0xff;
              pbStack_48[0x21] = 0xff;
              pbStack_48[0x10] = 0;
              pbStack_48[0x11] = 0;
              pbStack_48[0x12] = 0;
              pbStack_48[0x13] = 0;
              pbStack_48[0x14] = 0;
              pbStack_48[0x15] = 0;
              pbStack_48[0x16] = 0;
              pbStack_48[0x17] = 0;
              *pbStack_48 = 0;
              if (_DAT_1423b6368 == _DAT_1423b6370) {
                FUN_1400bc2f0(&DAT_1423b6360,_DAT_1423b6368,&pbStack_48);
                uVar13 = (uVar13 - iVar12) + 1;
                pbVar6 = (byte *)(ulonglong)uVar13;
                *(uint *)(param_1 + 4) = uVar13;
              }
              else {
                *_DAT_1423b6368 = pbStack_48;
                _DAT_1423b6368 = _DAT_1423b6368 + 1;
                uVar13 = (uVar13 - iVar12) + 1;
                pbVar6 = (byte *)(ulonglong)uVar13;
                *(uint *)(param_1 + 4) = uVar13;
              }
LAB_1401e0c5a:
              if ((int)pbVar6 < 0) {
                *(undefined4 *)(param_1 + 4) = 0;
              }
              goto LAB_1401e0853;
            }
          }
          iVar10 = 0xb;
          uStack_50 = uVar13 - iVar12;
          uVar9 = uStack_50;
          if (*(int *)(param_1 + 4) <= (int)uStack_50) {
            uVar9 = *(uint *)(param_1 + 4);
          }
          uVar18 = 0;
          if (-1 < (int)uVar9) {
            uVar18 = uVar9;
          }
          uStack_4c = uVar18 + iVar12;
          pbVar6 = (byte *)(ulonglong)uStack_4c;
          if ((int)uVar18 < (int)uStack_4c) {
            lVar16 = (longlong)(int)uVar18;
            pbStack_48 = (byte *)(longlong)(int)uVar13;
            puVar11 = (undefined8 *)(_DAT_1423b6360 + (lVar16 + -0x10) * 8);
            do {
              pbVar6 = pbStack_48;
              if ((longlong)pbStack_48 <= lVar16) break;
              if ((int)uVar18 < 0x10) {
                puVar14 = (undefined8 *)((longlong)(int)uVar18 * 0x38 + 0x1423b5fe0);
              }
              else {
                puVar14 = (undefined8 *)*puVar11;
              }
              uVar13 = *(uint *)(param_1 + 0x14);
              pbVar6 = (byte *)(ulonglong)uVar13;
              if (uVar13 == 0xffffffff) {
                if (((iStack_54 + 2 <= param_3) && (param_3 <= iStack_30)) &&
                   ((iVar10 <= (int)param_4 && ((int)param_4 < iVar10 + 3)))) {
                  _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                  uVar7 = (uint7)(uint3)((uint)(iVar10 + 3) >> 8);
                  if (param_1[0x10] == '\0') {
                    *(uint *)(param_1 + 0xc) = uVar18;
                    pbVar6 = (byte *)CONCAT71(uVar7,1);
                    param_1[0x10] = 1;
                  }
                  else {
                    pbVar6 = (byte *)((ulonglong)uVar7 << 8);
                    param_1[0x10] = 0;
                  }
                  goto LAB_1401e0853;
                }
                if (((iStack_38 <= param_3) && (param_3 < iStack_38 + 4)) &&
                   ((iVar10 <= (int)param_4 && ((int)param_4 < iVar10 + 3)))) {
                  _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                  pbVar6 = (byte *)FUN_1408ea8e0(puVar14);
                  goto LAB_1401e0853;
                }
                if ((((iStack_34 <= param_3) && (param_3 < iStack_34 + 4)) &&
                    (iVar10 <= (int)param_4)) && ((int)param_4 < (int)(iVar10 + 3U))) {
                  _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                  if (*(short *)(puVar14 + 4) == -1) {
LAB_1401e0d48:
                    *(undefined2 *)(puVar14 + 4) = 0;
                    iVar12 = _DAT_1423e9b04;
                    iVar10 = _DAT_1423e9b08;
                    if (((0 < _DAT_1423e9af8) && ((*_DAT_1423e9af0 & 1) != 0)) &&
                       (_DAT_142666788 != (byte *)0x0)) {
                      iVar12 = *(int *)(_DAT_142666788 + 4);
                      iVar10 = *(int *)(_DAT_142666788 + 8);
                    }
                    *(int *)((longlong)puVar14 + 0x24) = (iVar12 >> 1) + _DAT_1423a4240;
                    *(int *)(puVar14 + 5) = (iVar10 >> 1) + _DAT_1423a4244;
                    pbVar6 = (byte *)(ulonglong)_DAT_1423a423c;
                    *(uint *)((longlong)puVar14 + 0x2c) = _DAT_1423a423c;
                  }
                  else {
                    pbVar6 = (byte *)(ulonglong)(iVar10 + 3U);
                    iVar12 = _DAT_1423e9b04;
                    if (((0 < _DAT_1423e9af8) &&
                        (pbVar6 = _DAT_1423e9af0, (*_DAT_1423e9af0 & 1) != 0)) &&
                       (pbVar6 = _DAT_142666788, _DAT_142666788 != (byte *)0x0)) {
                      iVar12 = *(int *)(_DAT_142666788 + 4);
                      iStack_58 = *(int *)(_DAT_142666788 + 8);
                    }
                    sVar8 = (short)(iVar12 >> 1) + _DAT_1423a4240;
                    sVar15 = (short)(iStack_58 >> 1) + _DAT_1423a4244;
                    sVar3 = _DAT_1423a423c;
                    if (((*(short *)(puVar14 + 4) != 0) ||
                        (pbVar6 = (byte *)(ulonglong)(uint)(int)sVar8,
                        *(uint *)((longlong)puVar14 + 0x24) != (int)sVar8)) ||
                       ((pbVar6 = (byte *)(ulonglong)(uint)(int)sVar15,
                        *(uint *)(puVar14 + 5) != (int)sVar15 ||
                        (*(int *)((longlong)puVar14 + 0x2c) != (int)_DAT_1423a423c)))) {
                      *(uint *)(param_1 + 0x14) = uVar18;
                      param_1[0x18] = 1;
                      *(short *)(param_1 + 0x1a) = sVar8;
                      *(short *)(param_1 + 0x1c) = sVar15;
                      *(short *)(param_1 + 0x1e) = sVar3;
                      param_1[0x20] = 0;
                    }
                  }
                  goto LAB_1401e0853;
                }
                pbVar6 = (byte *)(ulonglong)uStack_2c;
                if (((((int)uStack_2c <= param_3) &&
                     (pbVar6 = (byte *)(ulonglong)(uStack_2c + 4), param_3 < (int)(uStack_2c + 4)))
                    && (iVar10 <= (int)param_4)) &&
                   (pbVar6 = (byte *)(ulonglong)(iVar10 + 3U), (int)param_4 < (int)(iVar10 + 3U))) {
                  _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                  if (*(short *)(puVar14 + 4) != -1) {
                    *(uint *)(param_1 + 0x14) = uVar18;
                    param_1[0x20] = 1;
                    param_1[0x18] = 0;
                    goto LAB_1401e0853;
                  }
                  if ((int)uVar18 < 0x10) {
                    *(undefined2 *)(puVar14 + 4) = 0xffff;
                    goto LAB_1401e0bec;
                  }
LAB_1401e0c07:
                  FUN_140070e10(puVar14);
                  callee_14154de20(puVar14,0x38);
LAB_1401e0c1c:
                  lVar1 = _DAT_1423b6360 + (longlong)(int)(uVar18 - 0x10) * 8;
                  lVar16 = lVar1 + 8;
                  callee_14154f5ba(lVar1,lVar16,(longlong)_DAT_1423b6368 - lVar16);
                  _DAT_1423b6368 = _DAT_1423b6368 + -1;
                  uStack_50 = uStack_50 - 1;
                  pbVar6 = (byte *)(ulonglong)*(uint *)(param_1 + 4);
                  if ((int)uStack_50 < (int)*(uint *)(param_1 + 4)) {
                    *(uint *)(param_1 + 4) = uStack_50;
                    pbVar6 = (byte *)(ulonglong)uStack_50;
                  }
                  goto LAB_1401e0c5a;
                }
              }
              else if (uVar13 == uVar18) {
                pbVar6 = (byte *)(ulonglong)(iStack_38 - 5U);
                if ((((int)(iStack_38 - 5U) <= param_3) &&
                    (pbVar6 = (byte *)(ulonglong)(iStack_38 + 1U), param_3 <= (int)(iStack_38 + 1U))
                    ) && ((iVar10 <= (int)param_4 &&
                          (pbVar6 = (byte *)(ulonglong)(iVar10 + 2U),
                          (int)param_4 <= (int)(iVar10 + 2U))))) {
                  _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                  if (param_1[0x18] != '\0') goto LAB_1401e0d48;
                  if (param_1[0x20] != '\0') {
                    if (0xf < (int)uVar18) {
                      if (puVar14 != (undefined8 *)0x0) goto LAB_1401e0c07;
                      goto LAB_1401e0c1c;
                    }
                    *(undefined2 *)(puVar14 + 4) = 0xffff;
LAB_1401e0bec:
                    puVar14[2] = 0;
                    if (0xf < (ulonglong)puVar14[3]) {
                      puVar14 = (undefined8 *)*puVar14;
                    }
                    *(undefined1 *)puVar14 = 0;
                  }
                  goto LAB_1401e0853;
                }
                if ((((iStack_38 + 3 <= param_3) && (param_3 <= iStack_38 + 9)) &&
                    (iVar10 <= (int)param_4)) &&
                   (pbVar6 = (byte *)(ulonglong)(iVar10 + 2U), (int)param_4 <= (int)(iVar10 + 2U)))
                {
                  _DAT_1423ac94c = (ushort)DAT_1423ac94d << 8;
                  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                  goto LAB_1401e0853;
                }
              }
              iVar10 = iVar10 + 6;
              uVar18 = uVar18 + 1;
              lVar16 = lVar16 + 1;
              puVar11 = puVar11 + 1;
            } while ((int)uVar18 < (int)uStack_4c);
          }
        }
      }
      else if (*(int *)(param_1 + 0x14) == -1) {
        if (((char)pbVar6 == '\0') || (DAT_1423ac94e == '\0')) {
          param_1[8] = 0;
        }
        else {
          uStack_60 = 0;
          uStack_78 = *(uint *)(param_1 + 4);
          uStack_74 = 0;
          iStack_70 = iVar10 + 0xf;
          iStack_68 = 0xc;
          iStack_64 = iVar12 * 6 + 9;
          iStack_6c = iVar12;
          FUN_1400bc970(&uStack_78);
          if (iStack_68 < (int)param_4) {
            if ((int)param_4 < iStack_64) {
              if (iStack_68 < iStack_64) {
                uVar9 = ((iStack_70 - iStack_6c) - uStack_74) + 1;
                uVar13 = 0;
                if (-1 < (int)uVar9) {
                  uVar13 = uVar9;
                }
                uVar9 = (int)(uVar13 * (param_4 - iStack_68)) / ((iStack_64 - iStack_68) + 1) +
                        uStack_74;
                uVar13 = (iStack_70 - iStack_6c) + 1;
                if ((int)uVar13 < (int)uVar9) {
                  uVar9 = uVar13;
                }
                if ((int)uVar9 < (int)uStack_74) {
                  uVar9 = uStack_74;
                }
                goto LAB_1401e0819;
              }
            }
            else {
              uStack_78 = (iStack_70 - iStack_6c) + 1;
              uVar9 = uStack_74;
              if ((int)uStack_78 < (int)uStack_74) {
LAB_1401e0819:
                uStack_78 = uVar9;
              }
            }
          }
          else {
            uStack_78 = uStack_74;
          }
          FUN_1400bc970(&uStack_78);
          *(uint *)(param_1 + 4) = uStack_78;
          pbVar6 = (byte *)(ulonglong)uStack_78;
        }
      }
      if (((DAT_1423ac955 != 0) && (iStack_54 <= param_3)) &&
         ((param_3 <= iVar17 && ((8 < (int)param_4 && ((int)param_4 <= iStack_40)))))) {
        _DAT_1423ac94c = 0;
      }
      goto LAB_1401e0853;
    }
  }
  if (DAT_1426b4f10 != '\0') {
    FUN_1404f8ed0(_DAT_1426b4ef0,0x3f);
  }
  _DAT_1423ac94c = _DAT_1423ac94c & 0xff;
  FUN_1400e2730(param_2);
  uVar13 = *(uint *)(param_1 + 0x14);
  pbVar6 = (byte *)(ulonglong)uVar13;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if ((uVar13 == 0xffffffff) && (*param_1 = 0, _DAT_142666e78 < 2)) {
    pbVar6 = (byte *)0x0;
    _DAT_142666e78 = 2;
  }
LAB_1401e0853:
  return (ulonglong)pbVar6 & 0xffffffffffffff00;
}

/* Actual Ghidra output, research name; VA 0x14138f3b0..0x14138f680. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unit_follow_unavailable(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  short asStackX_10 [4];
  short asStackX_18 [4];
  short asStackX_20 [4];
  int aiStack_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (DAT_1418f320c == '\0') {
    if (_DAT_1418b821c == 1) {
      if (param_1 != _DAT_142401490) {
        if ((*(uint *)(param_1 + 0x110) >> 0x12 & 1) != 0) {
          return 1;
        }
        if ((*(uint *)(param_1 + 0x110) >> 0x19 & 1) != 0) {
          puVar7 = *(undefined8 **)(param_1 + 0x1d8);
          puVar1 = *(undefined8 **)(param_1 + 0x1e0);
          uStack_30 = 0;
          uStack_28 = 0;
          aiStack_38[0] = -1;
          for (; puVar7 < puVar1; puVar7 = puVar7 + 1) {
            iVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
            if ((iVar3 == 0xb) && (lVar6 = (**(code **)(*(longlong *)*puVar7 + 0x18))(), lVar6 != 0)
               ) {
              FUN_140ca0920(lVar6,aiStack_38,1);
              break;
            }
          }
          if (aiStack_38[0] == 1) {
LAB_14138f462:
            uVar4 = unit_follow_unavailable(uStack_30);
            return uVar4;
          }
        }
      }
    }
    else if (_DAT_1418b8218 != 4) {
      uVar4 = *(uint *)(param_1 + 0x110);
      lVar6 = param_1;
      if (((uVar4 >> 0x12 & 1) != 0) && (cVar2 = callee_1413a2370(), cVar2 == '\0')) {
        return 1;
      }
      if ((uVar4 >> 0x19 & 1) != 0) {
        puVar7 = *(undefined8 **)(lVar6 + 0x1d8);
        puVar1 = *(undefined8 **)(lVar6 + 0x1e0);
        uStack_30 = 0;
        uStack_28 = 0;
        aiStack_38[0] = -1;
        for (; puVar7 < puVar1; puVar7 = puVar7 + 1) {
          iVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
          if ((iVar3 == 0xb) && (lVar6 = (**(code **)(*(longlong *)*puVar7 + 0x18))(), lVar6 != 0))
          {
            FUN_140ca0920(lVar6,aiStack_38,1);
            break;
          }
        }
        if (aiStack_38[0] == 1) goto LAB_14138f462;
      }
      cVar2 = callee_1413a2370(param_1);
      if (cVar2 == '\0') {
        asStackX_10[0] = -30000;
        if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
          asStackX_10[0] = *(short *)(param_1 + 0xa8);
          asStackX_18[0] = *(short *)(param_1 + 0xaa);
          asStackX_20[0] = *(short *)(param_1 + 0xac);
        }
        else {
          puVar1 = *(undefined8 **)(param_1 + 0x1e0);
          for (puVar7 = *(undefined8 **)(param_1 + 0x1d8); puVar7 < puVar1; puVar7 = puVar7 + 1) {
            iVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
            if ((iVar3 == 0xb) && (lVar6 = (**(code **)(*(longlong *)*puVar7 + 0x18))(), lVar6 != 0)
               ) {
              FUN_140ca05b0(lVar6,asStackX_10,asStackX_18,asStackX_20);
              break;
            }
          }
        }
        if (((((-1 < asStackX_10[0]) && (asStackX_10[0] < _DAT_14250445c)) && (-1 < asStackX_18[0]))
            && ((asStackX_18[0] < _DAT_142504460 && (-1 < asStackX_20[0])))) &&
           ((asStackX_20[0] < _DAT_142504464 &&
            ((_DAT_142504428 != 0 &&
             (lVar6 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(_DAT_142504428 + ((longlong)asStackX_10[0] >> 4) * 8) +
                         ((longlong)asStackX_18[0] >> 4) * 8) + (longlong)asStackX_20[0] * 8),
             lVar6 != 0)))))) {
          uVar4 = (int)asStackX_10[0] & 0x8000000f;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
          }
          uVar5 = (int)asStackX_18[0] & 0x8000000f;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
          }
          return *(uint *)(lVar6 + 0x2a0 + ((longlong)(int)uVar4 * 0x10 + (longlong)(int)uVar5) * 4)
                 >> 9 & 0xffffff01;
        }
      }
    }
  }
  return 0;
}

/* Actual Ghidra output, research name; VA 0x140c4dfc0..0x140c4e0c5. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void binding_key(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  uVar1 = _DAT_1426667fc;
  uStack_28 = _DAT_1418b8040 ^ (ulonglong)auStack_68;
  bVar2 = DAT_142666800 != '\0';
  bVar3 = DAT_142666801 != '\0';
  bVar4 = DAT_142666802 != '\0';
  _DAT_1426667fc = 0x1010002;
  binding_text(0x1423ac610,auStack_48,param_2);
  FUN_140af0220(0x142666770,auStack_48);
  _DAT_1426667fc = uVar1;
  DAT_142666800 = bVar2;
  DAT_142666801 = bVar3;
  DAT_142666802 = bVar4;
  FUN_140070e10(auStack_48);
  FUN_14154de00(uStack_28 ^ (ulonglong)auStack_68);
  return;
}

/* Actual Ghidra output, research name; VA 0x140903bf0..0x140903ef2. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void binding_text(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [40];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 ***pppuStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  puVar4 = _DAT_1426b5bb0;
  pcVar3 = _cout_std__3V__basic_ostream_DU__char_traits_D_std___1_A_exref;
  uStack_30 = _DAT_1418b8040 ^ (ulonglong)auStack_a8;
  cVar1 = *(char *)((longlong)_DAT_1423ac9d8[1] + 0x19);
  puVar5 = (undefined8 *)_DAT_1423ac9d8[1];
  puVar6 = _DAT_1423ac9d8;
  while (puVar9 = puVar5, cVar1 == '\0') {
    if (*(int *)(puVar9 + 4) < param_3) {
      puVar5 = (undefined8 *)puVar9[2];
      puVar9 = puVar6;
    }
    else {
      puVar5 = (undefined8 *)*puVar9;
    }
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
    puVar6 = puVar9;
  }
  if ((*(char *)((longlong)puVar6 + 0x19) != '\0') || (param_3 < *(int *)(puVar6 + 4))) {
    puVar6 = _DAT_1423ac9d8;
  }
  puStack_80 = param_2;
  if ((puVar6 == _DAT_1423ac9d8) || (puVar6[6] == 0)) {
    puVar5 = (undefined8 *)_DAT_1426b5bb0[1];
    uStack_60 = 0;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
    puStack_68 = puVar5;
    puVar6 = _DAT_1426b5bb0;
    while (puVar9 = puVar5, cVar1 == '\0') {
      if (param_3 <= *(int *)(puVar9 + 4)) {
        puVar5 = (undefined8 *)*puVar9;
        puVar6 = puVar9;
      }
      else {
        puVar5 = (undefined8 *)puVar9[2];
      }
      uStack_60 = (uint)(param_3 <= *(int *)(puVar9 + 4));
      cVar1 = *(char *)((longlong)puVar5 + 0x19);
      puStack_68 = puVar9;
    }
    if ((*(char *)((longlong)puVar6 + 0x19) != '\0') || (param_3 < *(int *)(puVar6 + 4))) {
      if (_DAT_1426b5bb8 == 0x38e38e38e38e38e) {
        FUN_140073430();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puStack_78 = (undefined8 *)&DAT_1426b5bb0;
      uStack_70 = 0;
      puVar5 = (undefined8 *)FUN_14154de30(0x48);
      *(int *)(puVar5 + 4) = param_3;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0xf;
      *(undefined1 *)(puVar5 + 5) = 0;
      *puVar5 = puVar4;
      puVar5[1] = puVar4;
      puVar5[2] = puVar4;
      *(undefined2 *)(puVar5 + 3) = 0;
      puStack_78 = puStack_68;
      uStack_70 = CONCAT44(uStack_5c,uStack_60);
      puVar6 = (undefined8 *)callee_1400bc410(&DAT_1426b5bb0,&puStack_78,puVar5);
    }
    plVar12 = puVar6 + 5;
    lVar2 = puVar6[7];
    if (0x7fffffffffffffffU - lVar2 < 0x1b) {
      FUN_140066e50();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0xf < (ulonglong)puVar6[8]) {
      plVar12 = (longlong *)*plVar12;
    }
    pppuStack_50 = (undefined8 ****)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uVar10 = lVar2 + 0x1b;
    uVar11 = 0xf;
    ppppuVar7 = &pppuStack_50;
    if (0xf < uVar10) {
      uVar11 = uVar10 | 0xf;
      if (uVar11 < 0x8000000000000000) {
        if (uVar11 < 0x16) {
          uVar11 = 0x16;
        }
      }
      else {
        uVar11 = 0x7fffffffffffffff;
      }
      ppppuVar7 = (undefined8 ****)FUN_140071d90(uVar11 + 1);
      pppuStack_50 = ppppuVar7;
    }
    uStack_40 = uVar10;
    uStack_38 = uVar11;
    *ppppuVar7 = (undefined8 ***)0x20676e697373694d;
    ppppuVar7[1] = (undefined8 ***)0x20676e69646e6962;
    ppppuVar7[2] = (undefined8 ***)0x6579616c70736964;
    *(undefined2 *)(ppppuVar7 + 3) = 0x3a64;
    *(undefined1 *)((longlong)ppppuVar7 + 0x1a) = 0x20;
    callee_14154f29e((longlong)ppppuVar7 + 0x1b,plVar12,lVar2);
    *(undefined1 *)((longlong)ppppuVar7 + uVar10) = 0;
    ppppuVar7 = &pppuStack_50;
    if (0xf < uStack_38) {
      ppppuVar7 = (undefined8 ****)pppuStack_50;
    }
    uVar8 = FUN_140071ee0(pcVar3,ppppuVar7,uStack_40);
    __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
              (uVar8,FUN_140071840);
    if (0xf < uStack_38) {
      uVar10 = uStack_38 + 1;
      ppppuVar7 = (undefined8 ****)pppuStack_50;
      if (0xfff < uVar10) {
        uVar10 = uStack_38 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuStack_50[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_50 + (-8 - (longlong)ppppuVar7))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      callee_14154de20(ppppuVar7,uVar10);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 1;
    param_2[3] = 0xf;
    *(undefined2 *)param_2 = 0x3f;
  }
  else {
    FUN_140070b90(param_2,*(longlong *)puVar6[5] + 0x20);
  }
  FUN_14154de00(uStack_30 ^ (ulonglong)auStack_a8);
  return;
}

/* Actual Ghidra output, research name; VA 0x140543070..0x140543148. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decimal(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_158 [44];
  int iStack_12c;
  longlong lStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [120];
  undefined1 auStack_a0 [104];
  undefined1 auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_158;
  FUN_1402480a0(&lStack_128);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_H_Z(&lStack_128,param_1);
  FUN_140248370(auStack_120,auStack_38);
  FUN_1401fc910(param_2,auStack_38);
  FUN_140070e10(auStack_38);
  *(undefined **)(auStack_120 + (longlong)*(int *)(lStack_128 + 4) + -8) = &UNK_14162c7f8;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(lStack_128 + 4)) =
       *(int *)(lStack_128 + 4) + -0x88;
  FUN_140247fb0(auStack_120);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_118);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_a0);
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_158);
  return;
}

/* Recenter field in the shared keyboard input dispatcher (objdump, Intel syntax)
0x1408d026a: cmp    BYTE PTR [rip+0xff3027],0x0        # 0x1418c3298
0x1408d0271: je     0x1408d0362
0x1408d0277: cmp    BYTE PTR [rip+0xff302a],0x0        # 0x1418c32a8
0x1408d027e: je     0x1408d0362
0x1408d0284: mov    rcx,rdi
0x1408d0287: call   0x1408c85f0
0x1408d028c: movsxd rax,DWORD PTR [rip+0xff3011]        # 0x1418c32a4
0x1408d0293: test   eax,eax
0x1408d0295: js     0x1408d02f7
0x1408d0297: cmp    eax,0x10
0x1408d029a: jge    0x1408d02a5
0x1408d029c: imul   rcx,rax,0x38
0x1408d02a0: add    rcx,rbx
0x1408d02a3: jmp    0x1408d02c8
0x1408d02a5: lea    ecx,[rax-0x10]
0x1408d02a8: mov    rax,QWORD PTR [rip+0x1ae60b9]        # 0x1423b6368
0x1408d02af: mov    r10,QWORD PTR [rip+0x1ae60aa]        # 0x1423b6360
0x1408d02b6: sub    rax,r10
0x1408d02b9: sar    rax,0x3
0x1408d02bd: cmp    ecx,eax
0x1408d02bf: jge    0x1408d02f7
0x1408d02c1: movsxd rax,ecx
0x1408d02c4: mov    rcx,QWORD PTR [r10+rax*8]
0x1408d02c8: mov    r8d,0x17
0x1408d02ce: mov    edx,0x18
0x1408d02d3: mov    r9,rdi
0x1408d02d6: mov    QWORD PTR [rsp+0x20],rsi
0x1408d02db: call   0x140c4e210
0x1408d02e0: test   al,al
0x1408d02e2: je     0x1408d02fe
0x1408d02e4: xorps  xmm0,xmm0
0x1408d02e7: movups XMMWORD PTR [rip+0x1adc6af],xmm0        # 0x1423ac99d
0x1408d02ee: movups XMMWORD PTR [rip+0x1adc6b8],xmm0        # 0x1423ac9ad
0x1408d02f5: jmp    0x1408d02fe
0x1408d02f7: mov    BYTE PTR [rip+0xff2faa],0x0        # 0x1418c32a8
0x1408d02fe: mov    rcx,QWORD PTR [rdi]
0x1408d0301: mov    rax,QWORD PTR [rcx+0x8]
0x1408d0305: cmp    BYTE PTR [rax+0x19],0x0
0x1408d0309: jne    0x1408d0328
0x1408d030b: nop    DWORD PTR [rax+rax*1+0x0]
0x1408d0310: cmp    DWORD PTR [rax+0x1c],0x1
0x1408d0314: jge    0x1408d031c
0x1408d0316: mov    rax,QWORD PTR [rax+0x10]
0x1408d031a: jmp    0x1408d0322
0x1408d031c: mov    rcx,rax
0x1408d031f: mov    rax,QWORD PTR [rax]
0x1408d0322: cmp    BYTE PTR [rax+0x19],0x0
0x1408d0326: je     0x1408d0310
0x1408d0328: cmp    BYTE PTR [rcx+0x19],0x0
0x1408d032c: jne    0x1408d0362
0x1408d032e: cmp    DWORD PTR [rcx+0x1c],0x1
0x1408d0332: jg     0x1408d0362
0x1408d0334: cmp    BYTE PTR [rip+0x1de4bd5],0x0        # 0x1426b4f10
0x1408d033b: je     0x1408d034e
0x1408d033d: mov    edx,0x4c
0x1408d0342: mov    rcx,QWORD PTR [rip+0x1de4ba7]        # 0x1426b4ef0
0x1408d0349: call   0x1404f8ed0
0x1408d034e: mov    rcx,rdi
0x1408d0351: call   0x1400e2730
0x1408d0356: mov    BYTE PTR [rip+0xff2f4b],0x0        # 0x1418c32a8
0x1408d035d: jmp    0x1408d3c2a
*/

/* Recenter entries in the native tooltip table initializer, 0x176 through 0x17c (objdump, Intel syntax)
0x140408dcd: lea    rdx,[rip+0x1242d0c]        # 0x14164bae0  'Edit the recenter hotkey locations.'
0x140408dd4: lea    rcx,[rbp-0x30]
0x140408dd8: call   0x140069710
0x140408ddd: nop
0x140408dde: mov    r8d,0x18
0x140408de4: lea    rdx,[rbp-0x30]
0x140408de8: lea    rcx,[rip+0x14be909]        # 0x1418c76f8
0x140408def: call   0x1408fe410
0x140408df4: nop
0x140408df5: lea    rcx,[rbp-0x30]
0x140408df9: call   0x1400693f0
0x140408dfe: lea    rdx,[rip+0x1242d03]        # 0x14164bb08  'Recenter on the surface at this location.'
0x140408e05: lea    rcx,[rbp-0x30]
0x140408e09: call   0x140069710
0x140408e0e: nop
0x140408e0f: mov    r8d,0x18
0x140408e15: lea    rdx,[rbp-0x30]
0x140408e19: lea    rcx,[rip+0x14be8f0]        # 0x1418c7710
0x140408e20: call   0x1408fe410
0x140408e25: nop
0x140408e26: lea    rcx,[rbp-0x30]
0x140408e2a: call   0x1400693f0
0x140408e2f: lea    rdx,[rip+0x1242daa]        # 0x14164bbe0  'Recenter on the deepest discovered area at this location.'
0x140408e36: lea    rcx,[rbp-0x30]
0x140408e3a: call   0x140069710
0x140408e3f: nop
0x140408e40: mov    r8d,0x18
0x140408e46: lea    rdx,[rbp-0x30]
0x140408e4a: lea    rcx,[rip+0x14be8d7]        # 0x1418c7728
0x140408e51: call   0x1408fe410
0x140408e56: nop
0x140408e57: lea    rcx,[rbp-0x30]
0x140408e5b: call   0x1400693f0
0x140408e60: lea    rdx,[rip+0x1242db9]        # 0x14164bc20  'Recenter on this location.'
0x140408e67: lea    rcx,[rbp-0x30]
0x140408e6b: call   0x140069710
0x140408e70: nop
0x140408e71: mov    r8d,0x18
0x140408e77: lea    rdx,[rbp-0x30]
0x140408e7b: lea    rcx,[rip+0x14be8be]        # 0x1418c7740
0x140408e82: call   0x1408fe410
0x140408e87: nop
0x140408e88: lea    rcx,[rbp-0x30]
0x140408e8c: call   0x1400693f0
0x140408e91: lea    rdx,[rip+0x1242cf0]        # 0x14164bb88  'Set this entry to recenter on the current view.'
0x140408e98: lea    rcx,[rbp-0x30]
0x140408e9c: call   0x140069710
0x140408ea1: nop
0x140408ea2: mov    r8d,0x18
0x140408ea8: lea    rdx,[rbp-0x30]
0x140408eac: lea    rcx,[rip+0x14be8a5]        # 0x1418c7758
0x140408eb3: call   0x1408fe410
0x140408eb8: nop
0x140408eb9: lea    rcx,[rbp-0x30]
0x140408ebd: call   0x1400693f0
0x140408ec2: lea    rdx,[rip+0x1242cef]        # 0x14164bbb8  'Clear this recenter hotkey location.'
0x140408ec9: lea    rcx,[rbp-0x30]
0x140408ecd: call   0x140069710
0x140408ed2: nop
0x140408ed3: mov    r8d,0x18
0x140408ed9: lea    rdx,[rbp-0x30]
0x140408edd: lea    rcx,[rip+0x14be88c]        # 0x1418c7770
0x140408ee4: call   0x1408fe410
0x140408ee9: nop
0x140408eea: lea    rcx,[rbp-0x30]
0x140408eee: call   0x1400693f0
0x140408ef3: lea    rdx,[rip+0x124401e]        # 0x14164cf18  'Delete this recenter location.'
0x140408efa: lea    rcx,[rbp-0x30]
0x140408efe: call   0x140069710
0x140408f03: nop
0x140408f04: mov    r8d,0x18
0x140408f0a: lea    rdx,[rbp-0x30]
0x140408f0e: lea    rcx,[rip+0x14be873]        # 0x1418c7788
0x140408f15: call   0x1408fe410
0x140408f1a: nop
0x140408f1b: lea    rcx,[rbp-0x30]
0x140408f1f: call   0x1400693f0
*/
