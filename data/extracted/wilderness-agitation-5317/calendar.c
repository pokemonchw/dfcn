
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141463030(longlong param_1,char param_2)

{
  uint *puVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  short *psVar22;
  undefined4 *puVar23;
  ushort uVar24;
  short sVar25;
  longlong *plVar26;
  short sVar27;
  int iVar28;
  longlong lVar29;
  longlong *plVar30;
  ulonglong uVar31;
  undefined2 uVar32;
  longlong lVar33;
  ushort uVar34;
  longlong lVar35;
  short sVar36;
  longlong lVar37;
  ushort uVar38;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_138 [32];
  undefined4 uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  ushort auStack_f8 [2];
  ushort auStack_f4 [2];
  short asStack_f0 [4];
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e2;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_98;
  uint uStack_94;
  longlong *plStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined8 *puStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_138;
  asStack_f0[0] = CONCAT11(asStack_f0[0]._1_1_,param_2);
  iVar16 = (*(int *)(param_1 + 0x116bf8) >> 0x1f & 0xfU) + *(int *)(param_1 + 0x116bf8);
  iVar28 = (*(int *)(param_1 + 0x116bfc) >> 0x1f & 0xfU) + *(int *)(param_1 + 0x116bfc);
  lVar37 = *(longlong *)(param_1 + 0x11a668);
  uVar34 = (short)(iVar28 >> 4) - 1;
  uVar19 = CONCAT22((short)(iVar28 >> 0x14),uVar34);
  uVar38 = (short)(iVar16 >> 4) - 1;
  uVar17 = CONCAT22((short)(iVar16 >> 0x14),uVar38);
  lVar29 = 5;
  plVar26 = (longlong *)0x0;
  do {
    lVar33 = 5;
    uVar24 = uVar34;
    do {
      auStack_f8[0] = uVar38;
      if ((short)uVar38 < 0) {
        auStack_f8[0] = 0;
      }
      plVar30 = (longlong *)(ulonglong)uVar24;
      auStack_f4[0] = uVar24;
      if ((short)uVar24 < 0) {
        auStack_f4[0] = 0;
        plVar30 = plVar26;
      }
      if (*(int *)(lVar37 + 0xa0) <= (int)(uint)auStack_f8[0]) {
        auStack_f8[0] = *(short *)(lVar37 + 0xa0) - 1;
      }
      if (*(int *)(lVar37 + 0xa4) <= (int)plVar30) {
        auStack_f4[0] = *(short *)(lVar37 + 0xa4) - 1;
      }
      uVar24 = uVar24 + 1;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    uVar38 = uVar38 + 1;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  uStack_98 = uVar19;
  uStack_94 = uVar17;
  FUN_141495c00(param_1);
  FUN_141495c90(param_1);
  FUN_140f92220(*(undefined8 *)(param_1 + 0x11a668));
  callee_140f93cb0(*(undefined8 *)(param_1 + 0x11a668),1);
  if (_DAT_142153ec4 % 0x78 == 10) {
    FUN_1415239d0(param_1);
  }
  if (_DAT_142153ec4 % 0x78 == 0x14) {
    FUN_141523bc0(param_1);
  }
  if (_DAT_142153ec4 % 0x348 == 0x1e) {
    FUN_1415242a0(param_1);
  }
  if (_DAT_142153ec4 % 0x78 == 0x28) {
    FUN_1415255a0(param_1);
  }
  if (_DAT_142153ec4 % 0x348 == 0x32) {
    FUN_1415251f0(param_1);
  }
  if (_DAT_142153ec4 % 0x78 == 0x3c) {
    FUN_141526460(param_1);
  }
  if (_DAT_142153ec4 % 0x78 == 0x46) {
    FUN_141526ee0(0x1423f3970);
  }
  if (_DAT_142153ec4 % 0x78 == 0x50) {
    FUN_1415278e0(param_1);
  }
  if (_DAT_142153ec4 % 0x78 == 0x6e) {
    FUN_141526bd0(param_1);
  }
  FUN_141480500(param_1);
  FUN_1414815e0(param_1);
  if (_DAT_142153ec4 % 0x78 == 0x32) {
    FUN_14147d730(param_1);
  }
  FUN_14147e620(param_1);
  if (param_2 != '\0') {
    FUN_1414913f0(0x1423f3970);
  }
  lStack_80 = 0;
  plStack_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  puStack_68 = (undefined8 *)0x1418beb70;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  iVar16 = _Mtx_lock(0x1418beb70);
  plVar30 = _DAT_1426bde48;
  if (iVar16 != 0) {
    __Throw_Cpp_error_std__YAXH_Z(5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (_DAT_1418bebbc == 0x7fffffff) {
    _DAT_1418bebbc = 0x7ffffffe;
    __Throw_Cpp_error_std__YAXH_Z(6);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_60 = CONCAT71(uStack_60._1_7_,1);
  plStack_90 = (longlong *)CONCAT71(plStack_90._1_7_,0x17);
  uStack_88 = 0;
  if (_DAT_1426bde48 == _DAT_1426bde50) {
    FUN_14028ad50(extraout_XMM0_Qa,_DAT_1426bde48,&plStack_90);
  }
  else {
    *_DAT_1426bde48 = (longlong)plStack_90;
    plVar30[1] = 0;
    _DAT_1426bde48 = _DAT_1426bde48 + 2;
  }
  _Mtx_unlock(0x1418beb70);
  iVar16 = (int)(*(longlong *)(param_1 + 0x13f80) - *(longlong *)(param_1 + 0x13f78) >> 3) + -1;
  lVar37 = (longlong)iVar16;
  plVar30 = plStack_78;
  if (-1 < iVar16) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x13f78) + lVar37 * 8);
      plStack_90 = plVar2;
      if (((*(uint *)(plVar2 + 2) & 0x40000) == 0) &&
         (cVar9 = (**(code **)(*plVar2 + 600))(plVar2,1), cVar9 != '\0')) {
        if (plVar30 == plVar26) {
          FUN_1400bc360(&lStack_80,plVar30,&plStack_90);
          plVar30 = plStack_78;
          plVar26 = plStack_70;
        }
        else {
          *plVar30 = (longlong)plVar2;
          plStack_78 = plVar30 + 1;
          plVar30 = plStack_78;
        }
      }
      lVar37 = lVar37 + -1;
    } while (-1 < lVar37);
  }
  lVar37 = lStack_80;
  iVar16 = (int)((longlong)plVar30 - lStack_80 >> 3) + -1;
  lVar29 = (longlong)iVar16;
  if (-1 < iVar16) {
    do {
      plVar26 = *(longlong **)(lVar37 + lVar29 * 8);
      if ((*(uint *)(plVar26 + 2) & 0x20000) == 0) {
        (**(code **)(*plVar26 + 1000))(plVar26,0,0);
      }
      lVar29 = lVar29 + -1;
    } while (-1 < lVar29);
  }
  iVar16 = _Mtx_lock(0x1418beb70);
  if (iVar16 != 0) {
    __Throw_Cpp_error_std__YAXH_Z(5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (_DAT_1418bebbc == 0x7fffffff) {
    _DAT_1418bebbc = 0x7ffffffe;
    __Throw_Cpp_error_std__YAXH_Z(6);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  _DAT_1426bde48 = _DAT_1426bde48 + -2;
  _Mtx_unlock(0x1418beb70);
  FUN_141495d20(param_1);
  iVar16 = (int)(*(longlong *)(param_1 + 0x116ba8) - *(longlong *)(param_1 + 0x116ba0) >> 3) / 0x27
           + 1;
  if (0 < iVar16) {
    do {
      uVar31 = *(longlong *)(param_1 + 0x116ba8) - *(longlong *)(param_1 + 0x116ba0) >> 3;
      uVar19 = 0;
      if (1 < (uint)uVar31) {
        uVar19 = FUN_140ece790();
        uVar19 = (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar31 & 0xffffffff)) + 1U);
      }
      uVar32 = *(undefined2 *)
                (*(longlong *)((longlong)(int)uVar19 * 8 + *(longlong *)(param_1 + 0x116ba0)) + 0x8c
                );
      uVar17 = FUN_140ece790();
      uVar18 = FUN_140ece790();
      lVar37 = *(longlong *)((longlong)(int)uVar19 * 8 + *(longlong *)(param_1 + 0x116ba0));
      FUN_1414dba60(param_1,(ushort)(uVar17 + (int)((longlong)((ulonglong)uVar17 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff >> 0x1b) +
                            *(short *)(lVar37 + 0x88),
                    (ushort)(uVar18 + (int)((longlong)((ulonglong)uVar18 * 0x100000003) >> 0x3f) *
                                      0x7fffffff >> 0x1b) + *(short *)(lVar37 + 0x8a),uVar32);
      iVar16 = iVar16 + -1;
      uVar19 = uStack_98;
      uVar17 = uStack_94;
    } while (0 < iVar16);
  }
  if (((_DAT_142153ec4 == 1) && ((char)asStack_f0[0] == '\0')) &&
     (iVar16 = (int)(*(longlong *)(param_1 + 0x141a8) - *(longlong *)(param_1 + 0x141a0) >> 3) + -1,
     lVar37 = (longlong)iVar16, -1 < iVar16)) {
    do {
      plVar26 = *(longlong **)(*(longlong *)(param_1 + 0x141a0) + lVar37 * 8);
      if (((*(byte *)(plVar26 + 2) & 1) != 0) &&
         (cVar9 = (**(code **)(*plVar26 + 0x498))(plVar26), cVar9 != '\0')) {
        uStack_110 = CONCAT31(uStack_110._1_3_,1);
        uStack_118 = CONCAT22(uStack_118._2_2_,*(undefined2 *)((longlong)plVar26 + 0xc));
        FUN_140aced70(plVar26,0,(short)plVar26[1],*(undefined2 *)((longlong)plVar26 + 10));
      }
      lVar37 = lVar37 + -1;
    } while (-1 < lVar37);
  }
  lVar37 = *(longlong *)(param_1 + 0x11a668);
  lVar29 = 5;
  do {
    uVar38 = (ushort)uVar19;
    lVar33 = 5;
    do {
      uVar34 = (ushort)uVar17;
      auStack_f8[0] = uVar34;
      if ((short)uVar34 < 0) {
        auStack_f8[0] = 0;
      }
      auStack_f4[0] = uVar38;
      if ((short)uVar38 < 0) {
        auStack_f4[0] = 0;
      }
      if (*(int *)(lVar37 + 0xa0) <= (int)(uint)auStack_f8[0]) {
        auStack_f8[0] = *(short *)(lVar37 + 0xa0) - 1;
      }
      if (*(int *)(lVar37 + 0xa4) <= (int)(uint)auStack_f4[0]) {
        auStack_f4[0] = *(short *)(lVar37 + 0xa4) - 1;
      }
      uVar38 = uVar38 + 1;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    uVar17 = (uint)(ushort)(uVar34 + 1);
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  _DAT_142153ec4 = _DAT_142153ec4 + 1;
  if (_DAT_142153ec4 != 0x2760) goto LAB_1414647f2;
  uVar19 = (int)(*(int *)(param_1 + 0x116bfc) + (*(int *)(param_1 + 0x116bfc) >> 0x1f & 0xfU)) >> 4;
  bVar3 = false;
  sVar14 = (short)uVar19;
  lVar37 = *(longlong *)(param_1 + 0x11a668);
  sVar13 = *(short *)(lVar37 + 0xb0);
  sVar27 = (short)((int)(*(int *)(param_1 + 0x116bf8) +
                        (*(int *)(param_1 + 0x116bf8) >> 0x1f & 0xfU)) >> 4);
  if (sVar13 == -1) {
    bVar3 = false;
    if (0x54 < *(short *)(*(longlong *)(*(longlong *)(lVar37 + 0x2b0) + (longlong)sVar27 * 8) + 0x36
                         + (longlong)sVar14 * 0x70)) {
      bVar3 = true;
    }
  }
  else {
    sVar12 = sVar14;
    if (sVar13 != 0) {
      if (sVar13 != 1) {
        if (sVar13 == 2) {
          iVar16 = *(int *)(lVar37 + 0xa4);
          if ((int)sVar14 < iVar16 / 2) {
            sVar12 = sVar14 * 2;
          }
          else {
            sVar12 = ((short)(iVar16 / 2) - sVar14) * 2 + (short)iVar16 + -1;
            sVar36 = 0;
            if (-1 < sVar12) {
              sVar36 = sVar12;
            }
            sVar12 = (short)iVar16 + -1;
            if (sVar36 < iVar16) {
              sVar12 = sVar36;
            }
          }
          if (iVar16 == 0x11) {
            sVar12 = sVar12 << 4;
LAB_1414638c8:
            bVar3 = 199 < sVar12;
          }
          else if (iVar16 == 0x21) {
            bVar3 = 199 < (short)(sVar12 * 8);
          }
          else if (iVar16 == 0x41) {
            bVar3 = 199 < (short)(sVar12 * 4);
          }
          else {
            if (iVar16 != 0x81) goto LAB_1414638c8;
            bVar3 = 199 < (short)(sVar12 * 2);
          }
        }
        goto LAB_141463973;
      }
      sVar12 = (*(short *)(lVar37 + 0xa4) - sVar14) + -1;
    }
    iVar16 = *(int *)(lVar37 + 0xa4);
    if (iVar16 == 0x11) {
      sVar12 = sVar12 << 4;
LAB_14146393a:
      bVar3 = 199 < sVar12;
    }
    else if (iVar16 == 0x21) {
      bVar3 = 199 < (short)(sVar12 * 8);
    }
    else if (iVar16 == 0x41) {
      bVar3 = 199 < (short)(sVar12 * 4);
    }
    else {
      if (iVar16 != 0x81) goto LAB_14146393a;
      bVar3 = 199 < (short)(sVar12 * 2);
    }
  }
LAB_141463973:
  sVar27 = *(short *)(*(longlong *)(*(longlong *)(lVar37 + 0x2b0) + (longlong)sVar27 * 8) + 0x32 +
                     (longlong)sVar14 * 0x70);
  uStack_118 = CONCAT22(uStack_118._2_2_,sVar27);
  sVar13 = callee_140776ca0(*(undefined2 *)(lVar37 + 0xa4),(longlong)sVar14 * 0x70,uVar19 & 0xffff,
                            sVar13);
  if (_DAT_1423b311c == 0) {
    DAT_1423bc67e = 1;
    _DAT_1423bc680 = 5;
    _DAT_1423bc7d0 = 0;
    if (_DAT_1423bc7d8 != _DAT_1423bc7e0) {
      _DAT_1423bc7e0 = _DAT_1423bc7d8;
    }
    if (_DAT_1423bc7f0 != _DAT_1423bc7f8) {
      _DAT_1423bc7f8 = _DAT_1423bc7f0;
    }
    if (_DAT_1423bc808 != _DAT_1423bc810) {
      _DAT_1423bc810 = _DAT_1423bc808;
    }
    _DAT_1423bc820 = 0;
    _DAT_1423bc828 = 0xffffffffffffffff;
  }
  uVar19 = (int)(char)DAT_1418f9296 + 1U & 0x80000003;
  if ((int)uVar19 < 0) {
    uVar19 = (uVar19 - 1 | 0xfffffffc) + 1;
  }
  DAT_1418f9296 = (byte)uVar19;
  _DAT_142153ec4 = 0;
  if (DAT_1418f9296 == 0) {
    if (_DAT_1423b311c - 1U < 2) {
      DAT_1423bc67e = 1;
      _DAT_1423bc680 = 5;
      _DAT_1423bc7d0 = 0;
      if (_DAT_1423bc7d8 != _DAT_1423bc7e0) {
        _DAT_1423bc7e0 = _DAT_1423bc7d8;
      }
      if (_DAT_1423bc7f0 != _DAT_1423bc7f8) {
        _DAT_1423bc7f8 = _DAT_1423bc7f0;
      }
      if (_DAT_1423bc808 != _DAT_1423bc810) {
        _DAT_1423bc810 = _DAT_1423bc808;
      }
      _DAT_1423bc820 = 0;
      _DAT_1423bc828 = 0xffffffffffffffff;
    }
    _DAT_142167754 = _DAT_142167754 + 1;
    _DAT_1423b5ae8 = _DAT_1423b5ae8 & 0xfffffffe;
    FUN_140bd05d0(param_1 + 0x1287c8);
    FUN_140f91090(*(undefined8 *)(param_1 + 0x11a668));
    FUN_141528190(param_1);
    if (_DAT_142167754 == (_DAT_142167754 / 10) * 10) {
      FUN_140fb8960(*(undefined8 *)(param_1 + 0x11a668));
    }
    if ((char)asStack_f0[0] != '\0') goto LAB_141463ac8;
    _DAT_1423b38b4 = _DAT_1423b38b4 - _DAT_1423bc4fc;
    if (_DAT_1423b38b4 < 0) {
      _DAT_1423b38b4 = 0;
    }
    if ((sVar13 < 0x42) && (0x20 < sVar27)) {
      if (_DAT_1418be238 != 0) {
        if ((DAT_1423b35bc & 8) == 0) goto LAB_141464660;
LAB_14146444d:
        uStack_e2 = 0x8ad08ad0;
        uStack_de = 0x8ad0;
        uStack_dc = 0;
        uStack_d8 = 0x8ad08ad0;
        uStack_d4 = 0x8ad0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0;
        uStack_a8 = 0xffffffff;
        uStack_e8 = 0x10127;
        uStack_e4 = 1;
        uStack_cc = 2000;
        puStack_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        puStack_68 = (undefined8 *)FUN_140071e00(0x20);
        uVar5 = _UNK_1417a7c58;
        uStack_58 = _DAT_1417abb80;
        uStack_50 = _UNK_1417abb88;
        *puStack_68 = _DAT_1417a7c50;
        puStack_68[1] = uVar5;
        puStack_68[2] = _DAT_1417a7c60;
        *(undefined2 *)(puStack_68 + 3) = _DAT_1417a7c68;
        *(undefined1 *)((longlong)puStack_68 + 0x1a) = DAT_1417a7c6a;
        *(undefined1 *)((longlong)puStack_68 + 0x1b) = 0;
        FUN_1400e5250(0x142505cd0,&puStack_68);
        if (0xf < uStack_50) {
          uVar31 = uStack_50 + 1;
          puVar21 = puStack_68;
          if (0xfff < uVar31) {
            uVar31 = uStack_50 + 0x28;
            puVar21 = (undefined8 *)puStack_68[-1];
            if (0x1f < (ulonglong)((longlong)puStack_68 + (-8 - (longlong)puVar21))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          callee_1415530d0(puVar21,uVar31);
        }
        goto LAB_141464660;
      }
      if ((DAT_1423b35bc & 0x70) != 0) goto LAB_14146444d;
LAB_14146466d:
      bVar11 = DAT_1423b35c4 & 0x70;
    }
    else {
      if (!bVar3) {
        if (_DAT_1418be238 == 0) {
          bVar11 = DAT_1423b35c4 & 0x70;
        }
        else {
          bVar11 = DAT_1423b35c4 & 8;
        }
        if (bVar11 != 0) {
          uStack_e2 = 0x8ad08ad0;
          uStack_de = 0x8ad0;
          uStack_dc = 0;
          uStack_d8 = 0x8ad08ad0;
          uStack_d4 = 0x8ad0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0xffffffffffffffff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0;
          uStack_a8 = 0xffffffff;
          uStack_e8 = 0x20129;
          uStack_e4 = 1;
          uStack_cc = 2000;
          puStack_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          puStack_68 = (undefined8 *)FUN_140071e00(0x20);
          uVar5 = _UNK_1417a7c40;
          uStack_58 = _DAT_1417abb00;
          uStack_50 = _UNK_1417abb08;
          *puStack_68 = _DAT_1417a7c38;
          puStack_68[1] = uVar5;
          *(undefined2 *)(puStack_68 + 2) = _DAT_1417a7c48;
          *(undefined1 *)((longlong)puStack_68 + 0x12) = DAT_1417a7c4a;
          *(undefined1 *)((longlong)puStack_68 + 0x13) = 0;
          FUN_1400e5250(0x142505cd0,&puStack_68);
          FUN_140070e80(&puStack_68);
        }
        goto LAB_141463ac8;
      }
LAB_141464660:
      if (_DAT_1418be238 == 0) goto LAB_14146466d;
      bVar11 = DAT_1423b35c4 & 8;
    }
    if (bVar11 != 0) {
      uStack_e2 = 0x8ad08ad0;
      uStack_de = 0x8ad0;
      uStack_dc = 0;
      uStack_d8 = 0x8ad08ad0;
      uStack_d4 = 0x8ad0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0xffffffffffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0;
      uStack_a8 = 0xffffffff;
      uStack_e8 = 0x20129;
      uStack_e4 = 1;
      uStack_cc = 2000;
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      puStack_68 = (undefined8 *)FUN_140071e00(0x30);
      uVar5 = _UNK_1417a7b38;
      uStack_58 = _DAT_1417abc00;
      uStack_50 = _UNK_1417abc08;
      *puStack_68 = _DAT_1417a7b30;
      puStack_68[1] = uVar5;
      uVar8 = _UNK_1417a7b4c;
      uVar7 = _UNK_1417a7b48;
      uVar6 = _UNK_1417a7b44;
      *(undefined4 *)(puStack_68 + 2) = _DAT_1417a7b40;
      *(undefined4 *)((longlong)puStack_68 + 0x14) = uVar6;
      *(undefined4 *)(puStack_68 + 3) = uVar7;
      *(undefined4 *)((longlong)puStack_68 + 0x1c) = uVar8;
      *(undefined2 *)(puStack_68 + 4) = _DAT_1417a7b50;
      *(undefined1 *)((longlong)puStack_68 + 0x22) = DAT_1417a7b52;
      *(undefined1 *)((longlong)puStack_68 + 0x23) = 0;
      FUN_1400e5250(0x142505cd0,&puStack_68);
      FUN_140070e80(&puStack_68);
    }
  }
  else if (DAT_1418f9296 == 1) {
    if ((char)asStack_f0[0] == '\0') {
      if ((sVar13 < 0x42) || (bVar3)) {
        if (_DAT_1418be238 == 0) {
          bVar11 = DAT_1423b35c8 & 0x70;
        }
        else {
          bVar11 = DAT_1423b35c8 & 8;
        }
        if (bVar11 != 0) {
          uStack_e2 = 0x8ad08ad0;
          uStack_de = 0x8ad0;
          uStack_dc = 0;
          uStack_d8 = 0x8ad08ad0;
          uStack_d4 = 0x8ad0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0xffffffffffffffff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0;
          uStack_a8 = 0xffffffff;
          uStack_e8 = 0x6012a;
          uStack_e4 = 1;
          uStack_cc = 2000;
          puStack_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          puStack_68 = (undefined8 *)FUN_140071e00(0x30);
          uVar5 = _UNK_1417a7af8;
          uStack_58 = _DAT_1417abc00;
          uStack_50 = _UNK_1417abc08;
          *puStack_68 = _DAT_1417a7af0;
          puStack_68[1] = uVar5;
          uVar8 = _UNK_1417a7b0c;
          uVar7 = _UNK_1417a7b08;
          uVar6 = _UNK_1417a7b04;
          *(undefined4 *)(puStack_68 + 2) = _DAT_1417a7b00;
          *(undefined4 *)((longlong)puStack_68 + 0x14) = uVar6;
          *(undefined4 *)(puStack_68 + 3) = uVar7;
          *(undefined4 *)((longlong)puStack_68 + 0x1c) = uVar8;
          *(undefined2 *)(puStack_68 + 4) = _DAT_1417a7b10;
          *(undefined1 *)((longlong)puStack_68 + 0x22) = DAT_1417a7b12;
          *(undefined1 *)((longlong)puStack_68 + 0x23) = 0;
          FUN_1400e5250(0x142505cd0,&puStack_68);
          FUN_140070e80(&puStack_68);
        }
      }
      else {
        if (_DAT_1418be238 == 0) {
          bVar11 = DAT_1423b35c8 & 0x70;
        }
        else {
          bVar11 = DAT_1423b35c8 & 8;
        }
        if (bVar11 != 0) {
          uStack_e2 = 0x8ad08ad0;
          uStack_de = 0x8ad0;
          uStack_dc = 0;
          uStack_d8 = 0x8ad08ad0;
          uStack_d4 = 0x8ad0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0xffffffffffffffff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0;
          uStack_a8 = 0xffffffff;
          uStack_e8 = 0x6012a;
          uStack_e4 = 1;
          uStack_cc = 2000;
          puStack_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          puStack_68 = (undefined8 *)FUN_140071e00(0x20);
          uVar5 = _UNK_1417a7b20;
          uStack_58 = _DAT_1417abae0;
          uStack_50 = _UNK_1417abae8;
          *puStack_68 = _DAT_1417a7b18;
          puStack_68[1] = uVar5;
          *(undefined1 *)(puStack_68 + 2) = DAT_1417a7b28;
          *(undefined1 *)((longlong)puStack_68 + 0x11) = 0;
          FUN_1400e5250(0x142505cd0,&puStack_68);
          FUN_140070e80(&puStack_68);
        }
      }
    }
  }
  else if (DAT_1418f9296 == 2) {
    if (_DAT_1423b311c == 2) {
      DAT_1423bc67e = 1;
      _DAT_1423bc680 = 5;
      _DAT_1423bc7d0 = 0;
      if (_DAT_1423bc7d8 != _DAT_1423bc7e0) {
        _DAT_1423bc7e0 = _DAT_1423bc7d8;
      }
      if (_DAT_1423bc7f0 != _DAT_1423bc7f8) {
        _DAT_1423bc7f8 = _DAT_1423bc7f0;
      }
      if (_DAT_1423bc808 != _DAT_1423bc810) {
        _DAT_1423bc810 = _DAT_1423bc808;
      }
      _DAT_1423bc820 = 0;
      _DAT_1423bc828 = 0xffffffffffffffff;
    }
    if ((char)asStack_f0[0] == '\0') {
      if ((sVar13 < 0x42) && (0x20 < sVar27)) {
        if (_DAT_1418be238 != 0) {
          if ((DAT_1423b35c0 & 8) == 0) goto LAB_141464021;
LAB_141463e77:
          uStack_e2 = 0x8ad08ad0;
          uStack_de = 0x8ad0;
          uStack_dc = 0;
          uStack_d8 = 0x8ad08ad0;
          uStack_d4 = 0x8ad0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0xffffffffffffffff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0;
          uStack_a8 = 0xffffffff;
          uStack_e8 = 0x60128;
          uStack_e4 = 1;
          uStack_cc = 2000;
          puStack_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          puStack_68 = (undefined8 *)FUN_140071e00(0x20);
          uVar5 = _UNK_1417a7ad8;
          uStack_58 = _DAT_1417abb50;
          uStack_50 = _UNK_1417abb58;
          *puStack_68 = _DAT_1417a7ad0;
          puStack_68[1] = uVar5;
          puStack_68[2] = _DAT_1417a7ae0;
          *(undefined1 *)(puStack_68 + 3) = 0;
          FUN_1400e5250(0x142505cd0,&puStack_68);
          FUN_140070e80(&puStack_68);
          goto LAB_141464021;
        }
        if ((DAT_1423b35c0 & 0x70) != 0) goto LAB_141463e77;
LAB_14146402e:
        bVar11 = DAT_1423b35cc & 0x70;
      }
      else {
        if (!bVar3) {
          if (_DAT_1418be238 == 0) {
            bVar11 = DAT_1423b35cc & 0x70;
          }
          else {
            bVar11 = DAT_1423b35cc & 8;
          }
          if (bVar11 != 0) {
            uStack_e2 = 0x8ad08ad0;
            uStack_de = 0x8ad0;
            uStack_dc = 0;
            uStack_d8 = 0x8ad08ad0;
            uStack_d4 = 0x8ad0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0xffffffffffffffff;
            uStack_b0 = 0xffffffff;
            uStack_ac = 0;
            uStack_a8 = 0xffffffff;
            uStack_e8 = 0x4012b;
            uStack_e4 = 1;
            uStack_cc = 2000;
            puStack_68 = (undefined8 *)0x0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            puStack_68 = (undefined8 *)FUN_140071e00(0x20);
            uVar5 = _UNK_1417a7bc8;
            uStack_58 = _DAT_1417abad0;
            uStack_50 = _UNK_1417abad8;
            *puStack_68 = _DAT_1417a7bc0;
            puStack_68[1] = uVar5;
            *(undefined1 *)(puStack_68 + 2) = 0;
            FUN_1400e5250(0x142505cd0,&puStack_68);
            FUN_140070e80(&puStack_68);
          }
          goto LAB_141463ac8;
        }
LAB_141464021:
        if (_DAT_1418be238 == 0) goto LAB_14146402e;
        bVar11 = DAT_1423b35cc & 8;
      }
      if (bVar11 != 0) {
        uStack_e2 = 0x8ad08ad0;
        uStack_de = 0x8ad0;
        uStack_dc = 0;
        uStack_d8 = 0x8ad08ad0;
        uStack_d4 = 0x8ad0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0;
        uStack_a8 = 0xffffffff;
        uStack_e8 = 0x4012b;
        uStack_e4 = 1;
        uStack_cc = 2000;
        puStack_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        puStack_68 = (undefined8 *)FUN_140071e00(0x30);
        uVar5 = _UNK_1417a7ba0;
        uStack_58 = _DAT_1417abc00;
        uStack_50 = _UNK_1417abc08;
        *puStack_68 = _DAT_1417a7b98;
        puStack_68[1] = uVar5;
        uVar8 = _UNK_1417a7bb4;
        uVar7 = _UNK_1417a7bb0;
        uVar6 = _UNK_1417a7bac;
        *(undefined4 *)(puStack_68 + 2) = _DAT_1417a7ba8;
        *(undefined4 *)((longlong)puStack_68 + 0x14) = uVar6;
        *(undefined4 *)(puStack_68 + 3) = uVar7;
        *(undefined4 *)((longlong)puStack_68 + 0x1c) = uVar8;
        *(undefined2 *)(puStack_68 + 4) = _DAT_1417a7bb8;
        *(undefined1 *)((longlong)puStack_68 + 0x22) = DAT_1417a7bba;
        *(undefined1 *)((longlong)puStack_68 + 0x23) = 0;
        FUN_1400e5250(0x142505cd0,&puStack_68);
        FUN_140070e80(&puStack_68);
      }
    }
  }
  else if ((DAT_1418f9296 == 3) && ((char)asStack_f0[0] == '\0')) {
    if ((sVar13 < 0x42) || (bVar3)) {
      if (_DAT_1418be238 == 0) {
        bVar11 = DAT_1423b35d0 & 0x70;
      }
      else {
        bVar11 = DAT_1423b35d0 & 8;
      }
      if (bVar11 != 0) {
        uStack_e2 = 0x8ad08ad0;
        uStack_de = 0x8ad0;
        uStack_dc = 0;
        uStack_d8 = 0x8ad08ad0;
        uStack_d4 = 0x8ad0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0;
        uStack_a8 = 0xffffffff;
        uStack_e8 = 0x7012c;
        uStack_e4 = 1;
        uStack_cc = 2000;
        puStack_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        puStack_68 = (undefined8 *)FUN_140071e00(0x30);
        uVar5 = _UNK_1417a7b60;
        uStack_58 = _DAT_1417abc00;
        uStack_50 = _UNK_1417abc08;
        *puStack_68 = _DAT_1417a7b58;
        puStack_68[1] = uVar5;
        uVar8 = _UNK_1417a7b74;
        uVar7 = _UNK_1417a7b70;
        uVar6 = _UNK_1417a7b6c;
        *(undefined4 *)(puStack_68 + 2) = _DAT_1417a7b68;
        *(undefined4 *)((longlong)puStack_68 + 0x14) = uVar6;
        *(undefined4 *)(puStack_68 + 3) = uVar7;
        *(undefined4 *)((longlong)puStack_68 + 0x1c) = uVar8;
        *(undefined2 *)(puStack_68 + 4) = _DAT_1417a7b78;
        *(undefined1 *)((longlong)puStack_68 + 0x22) = DAT_1417a7b7a;
        *(undefined1 *)((longlong)puStack_68 + 0x23) = 0;
        FUN_1400e5250(0x142505cd0,&puStack_68);
        if (0xf < uStack_50) {
          uVar31 = uStack_50 + 1;
          puVar21 = puStack_68;
          if (0xfff < uVar31) {
            uVar31 = uStack_50 + 0x28;
            puVar21 = (undefined8 *)puStack_68[-1];
            if (0x1f < (ulonglong)((longlong)puStack_68 + (-8 - (longlong)puVar21))) {
              _invalid_parameter_noinfo_noreturn(puVar21,uVar31);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          goto LAB_141463dc9;
        }
      }
    }
    else {
      if (_DAT_1418be238 == 0) {
        bVar11 = DAT_1423b35d0 & 0x70;
      }
      else {
        bVar11 = DAT_1423b35d0 & 8;
      }
      if (bVar11 != 0) {
        uStack_e2 = 0x8ad08ad0;
        uStack_de = 0x8ad0;
        uStack_dc = 0;
        uStack_d8 = 0x8ad08ad0;
        uStack_d4 = 0x8ad0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0;
        uStack_a8 = 0xffffffff;
        uStack_e8 = 0x7012c;
        uStack_e4 = 1;
        uStack_cc = 2000;
        puStack_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        puStack_68 = (undefined8 *)FUN_140071e00(0x20);
        uVar5 = _UNK_1417a7b88;
        uStack_58 = _DAT_1417abb00;
        uStack_50 = _UNK_1417abb08;
        *puStack_68 = _DAT_1417a7b80;
        puStack_68[1] = uVar5;
        *(undefined2 *)(puStack_68 + 2) = _DAT_1417a7b90;
        *(undefined1 *)((longlong)puStack_68 + 0x12) = DAT_1417a7b92;
        *(undefined1 *)((longlong)puStack_68 + 0x13) = 0;
        FUN_1400e5250(0x142505cd0,&puStack_68);
        if (0xf < uStack_50) {
          uVar31 = uStack_50 + 1;
          puVar21 = puStack_68;
          if (0xfff < uVar31) {
            uVar31 = uStack_50 + 0x28;
            puVar21 = (undefined8 *)puStack_68[-1];
            if (0x1f < (ulonglong)((longlong)puStack_68 + (-8 - (longlong)puStack_68[-1]))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
LAB_141463dc9:
          callee_1415530d0(puVar21,uVar31);
        }
      }
    }
  }
LAB_141463ac8:
  if (_DAT_1423b9b28 != _DAT_1423b9b30) {
    _DAT_1423b9b30 = _DAT_1423b9b28;
  }
  if (_DAT_1423b9b40 != _DAT_1423b9b48) {
    _DAT_1423b9b48 = _DAT_1423b9b40;
  }
  if (_DAT_1423b9b58 != _DAT_1423b9b60) {
    _DAT_1423b9b60 = _DAT_1423b9b58;
  }
  if (_DAT_1423b9b70 != _DAT_1423b9b78) {
    _DAT_1423b9b78 = _DAT_1423b9b70;
  }
  iVar16 = (int)(*(longlong *)(param_1 + 0x13be0) - *(longlong *)(param_1 + 0x13bd8) >> 3) + -1;
  lVar37 = (longlong)iVar16;
  if (-1 < iVar16) {
    do {
      lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x13bd8) + lVar37 * 8);
      for (puVar21 = *(undefined8 **)(lVar29 + 0x9a8); puVar21 < *(undefined8 **)(lVar29 + 0x9b0);
          puVar21 = puVar21 + 1) {
        if (*(short *)*puVar21 == 0x12) {
          callee_1415530d0((short *)*puVar21,8);
          callee_14155486a();
          *(longlong *)(lVar29 + 0x9b0) = *(longlong *)(lVar29 + 0x9b0) + -8;
          break;
        }
      }
      lVar37 = lVar37 + -1;
    } while (-1 < lVar37);
  }
  lVar37 = *(longlong *)(param_1 + 0x1ddd8);
  iVar16 = (int)(*(longlong *)(param_1 + 0x1dde0) - lVar37 >> 3) + -1;
  lVar29 = (longlong)iVar16;
  if (-1 < iVar16) {
    do {
      psVar22 = *(short **)(lVar37 + lVar29 * 8);
      if (((*psVar22 == 2) || (*psVar22 == 3)) &&
         (cVar9 = callee_140ad6fe0(psVar22[1]), cVar9 != '\0')) {
        *(uint *)(psVar22 + 8) = *(uint *)(psVar22 + 8) | 2;
        lVar37 = *(longlong *)(param_1 + 0x1ddd8);
      }
      lVar29 = lVar29 + -1;
    } while (-1 < lVar29);
  }
LAB_1414647f2:
  uStack_94 = (*(int *)(param_1 + 0x116bf0) * *(int *)(param_1 + 0x116bec) * 500) / 0x38400;
  if ((int)uStack_94 < 0x501) goto joined_r0x00014146482b;
  uStack_94 = 0x500;
LAB_141464831:
  uVar19 = *(uint *)(param_1 + 0x116bec);
  if (uVar19 < 2) {
    uVar19 = 0;
  }
  else {
    uVar17 = FUN_140ece790();
    uVar19 = (uVar17 + (int)((longlong)((ulonglong)uVar17 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             ((int)(0x7fffffff / (ulonglong)uVar19) + 1U);
  }
  uVar18 = 0;
  uVar17 = *(uint *)(param_1 + 0x116bf0);
  if (1 < uVar17) {
    uVar18 = FUN_140ece790();
    uVar18 = (uVar18 + (int)((longlong)((ulonglong)uVar18 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             ((int)(0x7fffffff / (ulonglong)uVar17) + 1U);
  }
  sVar36 = (short)uVar18;
  sVar14 = FUN_141495ab0(param_1,uVar19 & 0xffff,uVar18 & 0xffff);
  lVar37 = (longlong)sVar14;
  uStack_110._0_2_ = sVar14;
  uStack_118._0_2_ = sVar36;
  FUN_14007f300(param_1,auStack_f8,auStack_f4,uVar19 & 0xffff);
  iVar16 = *(int *)(param_1 + 0x116bf8);
  iVar28 = *(int *)(param_1 + 0x116bfc);
  uStack_110 = CONCAT22(uStack_110._2_2_,sVar14);
  uStack_118 = CONCAT22(uStack_118._2_2_,sVar36);
  FUN_14007f300(param_1,asStack_f0,&uStack_98,uVar19 & 0xffff);
  uVar38 = auStack_f4[0];
  sVar13 = _DAT_1423aa328;
  sVar12 = asStack_f0[0] - (short)((int)((iVar16 >> 0x1f & 0xfU) + iVar16) >> 4);
  asStack_f0[0] = sVar12 + 1;
  sVar27 = (short)uStack_98 - (short)((int)((iVar28 >> 0x1f & 0xfU) + iVar28) >> 4);
  uStack_98 = CONCAT22(uStack_98._2_2_,sVar27 + 1);
  cVar9 = *(char *)((longlong)sVar12 * 5 + (longlong)sVar27 + 0x142153e8e);
  sVar27 = (short)uVar19;
  if (cVar9 != '\0') {
    iVar16 = (int)sVar14;
    sVar25 = sVar36 >> 4;
    sVar12 = sVar27 >> 4;
    if (cVar9 == '\x01') {
      if (0x4ff < _DAT_14238f5cc) goto LAB_141465559;
      if ((((-1 < sVar27) && ((int)sVar27 < *(int *)(param_1 + 0x116bec))) &&
          ((-1 < sVar36 && (((int)sVar36 < *(int *)(param_1 + 0x116bf0) && (-1 < sVar14)))))) &&
         ((iVar16 < *(int *)(param_1 + 0x116bf4) &&
          ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
           (lVar29 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (longlong)sVar12 * 8) +
                        (longlong)sVar25 * 8) + lVar37 * 8), lVar29 != 0)))))) {
        uVar17 = (int)sVar27 & 0x8000000f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
        }
        uVar20 = (int)sVar36 & 0x8000000f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
        }
        puVar1 = (uint *)(lVar29 + 0x2a0 +
                         ((longlong)(int)uVar17 * 0x10 + (longlong)(int)uVar20) * 4);
        *puVar1 = *puVar1 | 0x800000;
      }
      lVar29 = (longlong)_DAT_14238f5cc;
      *(short *)(lVar29 * 6 + 0x1423a8520) = sVar27;
      *(short *)(lVar29 * 6 + 0x1423a8522) = sVar36;
      *(short *)(lVar29 * 6 + 0x1423a8524) = sVar14;
      _DAT_14238f5cc = _DAT_14238f5cc + 1;
      FUN_1414eb7d0(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
      uVar38 = auStack_f4[0];
      lVar29 = *(longlong *)(param_1 + 0x11a668);
      lVar35 = (longlong)(short)auStack_f4[0];
      lVar33 = (longlong)(short)auStack_f8[0];
      sVar13 = FUN_140f93580(lVar29,auStack_f8[0],auStack_f4[0],0);
      if (sVar13 < 0x4b) {
LAB_1414651a7:
        FUN_1414b7490(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
      }
      else {
        sVar13 = *(short *)(*(longlong *)(*(longlong *)(lVar29 + 0x2b0) + lVar33 * 8) + 0x32 +
                           lVar35 * 0x70);
        if (1 < DAT_1418f9296) {
          uStack_118 = CONCAT22(uStack_118._2_2_,sVar13);
          sVar15 = callee_140776ca0(*(undefined2 *)(lVar29 + 0xa4),lVar35 * 0x70,uVar38,
                                    *(undefined2 *)(lVar29 + 0xb0));
          if (sVar15 != 100) {
            sVar13 = (short)(sVar13 * sVar15) / 100;
          }
        }
        if (0x41 < sVar13) goto LAB_1414651a7;
      }
      if (((((sVar27 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)sVar27)) || (sVar36 < 0)) ||
          ((*(int *)(param_1 + 0x116bf0) <= (int)sVar36 || (sVar14 < 0)))) ||
         ((*(int *)(param_1 + 0x116bf4) <= iVar16 ||
          ((*(longlong *)(param_1 + 0x116bb8) == 0 ||
           (lVar29 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x116bb8) + ((longlong)sVar27 >> 4) * 8) +
                        ((longlong)sVar36 >> 4) * 8) + lVar37 * 8), lVar29 == 0)))))) {
        sVar13 = 0;
LAB_141465421:
        switch(sVar13) {
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
          goto LAB_14146528f;
        }
      }
      else {
        uVar17 = (int)sVar27 & 0x8000000f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
        }
        uVar20 = (int)sVar36 & 0x8000000f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
        }
        sVar13 = *(short *)(lVar29 + (((longlong)(int)uVar17 + 5) * 0x10 + (longlong)(int)uVar20) *
                                     2);
        if ((((sVar13 != 2) && (sVar13 != 3)) && (sVar13 != 0x59)) && (sVar13 != 0x5a))
        goto LAB_141465421;
LAB_14146528f:
        cVar9 = callee_14024b990(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
        if ((((cVar9 < '\a') && (-1 < sVar27)) &&
            (((int)sVar27 < *(int *)(param_1 + 0x116bec) &&
             ((-1 < sVar36 && ((int)sVar36 < *(int *)(param_1 + 0x116bf0))))))) &&
           ((-1 < sVar14 &&
            (((iVar16 < *(int *)(param_1 + 0x116bf4) && (*(longlong *)(param_1 + 0x116bb8) != 0)) &&
             (lVar29 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (longlong)sVar12 * 8) +
                          (longlong)sVar25 * 8) + lVar37 * 8), lVar29 != 0)))))) {
          uVar17 = (int)sVar36 & 0x8000000f;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
          }
          uVar20 = (int)sVar27 & 0x8000000f;
          if ((int)uVar20 < 0) {
            uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
          }
          uStack_118 = 0;
          FUN_14054eab0(lVar29,uVar20,uVar17,cVar9 + '\x01');
        }
      }
      cVar9 = callee_1402c78e0(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
      if ((cVar9 == '\0') ||
         (uVar17 = FUN_140ece790(),
         0x10624d < uVar17 + (int)((longlong)((ulonglong)uVar17 * 0x100000003) >> 0x3f) * 0x7fffffff
         )) goto LAB_141465559;
      if (((sVar27 < 0) || ((_DAT_14250a55c <= sVar27 || (sVar36 < 0)))) ||
         ((_DAT_14250a560 <= sVar36 ||
          ((((sVar14 < 0 || (_DAT_14250a564 <= iVar16)) || (_DAT_14250a528 == 0)) ||
           (lVar37 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(_DAT_14250a528 + (longlong)sVar12 * 8) +
                        ((longlong)sVar36 >> 4) * 8) + lVar37 * 8), lVar37 == 0)))))) {
        plVar26 = (longlong *)0x142528588;
      }
      else {
        plVar26 = (longlong *)(lVar37 + 0x68);
      }
      iVar16 = (int)(plVar26[1] - *plVar26 >> 3) + -1;
      if (-1 < iVar16) {
        lVar37 = (longlong)iVar16;
        puVar21 = (undefined8 *)(*plVar26 + lVar37 * 8);
        do {
          psVar22 = (short *)*puVar21;
          if ((((*(byte *)((longlong)psVar22 + 0x17) & 1) == 0) && (*psVar22 == 1)) &&
             ((psVar22[5] == sVar27 && ((psVar22[6] == sVar36 && (psVar22[7] == sVar14))))))
          goto LAB_141464f62;
          iVar16 = iVar16 + -1;
          puVar21 = puVar21 + -1;
          lVar37 = lVar37 + -1;
        } while (-1 < lVar37);
      }
    }
    else {
      if ((cVar9 != '\x02') || (0xff < _DAT_1423aa328)) goto LAB_141465559;
      bVar3 = false;
      uVar17 = callee_140069640(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
      if (((uVar17 & 7) - 3 & 0xfffffffd) == 0) {
LAB_141464a2c:
        bVar3 = true;
      }
      else if (((uVar17 & 7) == 7) &&
              (iVar28 = (int)(_DAT_142410e60 - _DAT_142410e58 >> 3) + -1, -1 < iVar28)) {
        plVar26 = (longlong *)(_DAT_142410e58 + (longlong)iVar28 * 8);
        do {
          lVar29 = *plVar26;
          if ((((*(int *)(lVar29 + 0x10) == (int)sVar27) && (*(int *)(lVar29 + 0x1c) == (int)sVar36)
               ) && (*(int *)(lVar29 + 0x20) == iVar16)) &&
             ((*(byte *)(lVar29 + 0x148) & 0x10) != 0)) goto LAB_141464a2c;
          plVar26 = plVar26 + -1;
          iVar28 = iVar28 + -1;
        } while (-1 < iVar28);
      }
      if (((((sVar27 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)sVar27)) ||
           ((sVar36 < 0 || ((*(int *)(param_1 + 0x116bf0) <= (int)sVar36 || (sVar14 < 0)))))) ||
          (*(int *)(param_1 + 0x116bf4) <= iVar16)) ||
         ((*(longlong *)(param_1 + 0x116bb8) == 0 ||
          (lVar29 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)(param_1 + 0x116bb8) + ((longlong)sVar27 >> 4) * 8) +
                       ((longlong)sVar36 >> 4) * 8) + lVar37 * 8), lVar29 == 0)))) {
        uVar32 = 0;
      }
      else {
        uVar17 = (int)sVar27 & 0x8000000f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
        }
        uVar20 = (int)sVar36 & 0x8000000f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
        }
        uVar32 = *(undefined2 *)
                  (lVar29 + (((longlong)(int)uVar17 + 5) * 0x10 + (longlong)(int)uVar20) * 2);
      }
      cVar9 = callee_140310610(uVar32);
      if ((cVar9 != '\0') || (bVar3)) {
        if (-1 < sVar27) {
          if (((((int)sVar27 < *(int *)(param_1 + 0x116bec)) && (-1 < sVar36)) &&
              ((int)sVar36 < *(int *)(param_1 + 0x116bf0))) &&
             (((-1 < sVar14 && (iVar16 < *(int *)(param_1 + 0x116bf4))) &&
              ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
               (lVar29 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x116bb8) + ((longlong)sVar27 >> 4) * 8) +
                            (longlong)sVar25 * 8) + lVar37 * 8), lVar29 != 0)))))) {
            uVar17 = (int)sVar27 & 0x8000000f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
            }
            uVar20 = (int)sVar36 & 0x8000000f;
            if ((int)uVar20 < 0) {
              uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
            }
            sVar15 = *(short *)(lVar29 + (((longlong)(int)uVar17 + 5) * 0x10 + (longlong)(int)uVar20
                                         ) * 2);
            if ((((sVar15 != 0x179) && (sVar15 != 0x17a)) &&
                ((sVar15 != 0x17b && (sVar15 != 0x17c)))) ||
               (cVar9 = callee_14024b990(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14 + -1),
               cVar9 == '\0')) goto LAB_141464bfb;
            if (bVar3) {
              if (sVar27 < 0) goto LAB_141464d7b;
              goto LAB_141464bfb;
            }
          }
          else {
LAB_141464bfb:
            if ((((_DAT_14250a55c <= sVar27) || (sVar36 < 0)) || (_DAT_14250a560 <= sVar36)) ||
               ((sVar14 < 0 || (_DAT_14250a564 <= iVar16)))) goto LAB_141464cc5;
            if ((_DAT_14250a528 != 0) &&
               (lVar29 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(_DAT_14250a528 + (longlong)sVar12 * 8) +
                            ((longlong)sVar36 >> 4) * 8) + lVar37 * 8), lVar29 != 0)) {
              uVar17 = (int)sVar36 & 0x8000000f;
              if ((int)uVar17 < 0) {
                uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
              }
              uVar20 = (int)sVar27 & 0x8000000f;
              if ((int)uVar20 < 0) {
                uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
              }
              uStack_100 = uStack_100 & 0xffffff00;
              uStack_108 = 10;
              uStack_110 = CONCAT22(uStack_110._2_2_,3);
              uStack_118 = 0xffffffff;
              FUN_1405583f0(lVar29,uVar20,uVar17,6);
              sVar13 = _DAT_1423aa328;
            }
          }
          goto LAB_141464ccf;
        }
      }
      else {
LAB_141464cc5:
        if (-1 < sVar27) {
LAB_141464ccf:
          if (((((int)sVar27 < *(int *)(param_1 + 0x116bec)) && (-1 < sVar36)) &&
              (((int)sVar36 < *(int *)(param_1 + 0x116bf0) &&
               (((-1 < sVar14 && (iVar16 < *(int *)(param_1 + 0x116bf4))) &&
                (*(longlong *)(param_1 + 0x116bb8) != 0)))))) &&
             (lVar29 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + (longlong)sVar12 * 8) +
                          ((longlong)sVar36 >> 4) * 8) + lVar37 * 8), lVar29 != 0)) {
            uVar17 = (int)sVar27 & 0x8000000f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
            }
            uVar20 = (int)sVar36 & 0x8000000f;
            if ((int)uVar20 < 0) {
              uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
            }
            puVar1 = (uint *)(lVar29 + 0x2a0 +
                             ((longlong)(int)uVar17 * 0x10 + (longlong)(int)uVar20) * 4);
            *puVar1 = *puVar1 | 0x800000;
            sVar13 = _DAT_1423aa328;
          }
        }
      }
LAB_141464d7b:
      uVar38 = auStack_f4[0];
      lVar29 = (longlong)sVar13;
      *(short *)(lVar29 * 6 + 0x1422c8df0) = sVar27;
      *(short *)(lVar29 * 6 + 0x1422c8df2) = sVar36;
      *(short *)(lVar29 * 6 + 0x1422c8df4) = sVar14;
      _DAT_1423aa328 = sVar13 + 1;
      lVar29 = *(longlong *)(param_1 + 0x11a668);
      lVar35 = (longlong)(short)auStack_f4[0];
      lVar33 = (longlong)(short)auStack_f8[0];
      sVar13 = FUN_140f93580(lVar29,auStack_f8[0],auStack_f4[0],0);
      if (sVar13 < 0x4b) {
LAB_141464e3c:
        FUN_1414b7490(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
      }
      else {
        sVar13 = *(short *)(*(longlong *)(*(longlong *)(lVar29 + 0x2b0) + lVar33 * 8) + 0x32 +
                           lVar35 * 0x70);
        if (1 < DAT_1418f9296) {
          uStack_118 = CONCAT22(uStack_118._2_2_,sVar13);
          sVar15 = callee_140776ca0(*(undefined2 *)(lVar29 + 0xa4),lVar35 * 0x70,uVar38,
                                    *(undefined2 *)(lVar29 + 0xb0));
          if (sVar15 != 100) {
            sVar13 = (short)(sVar13 * sVar15) / 100;
          }
        }
        if (0x41 < sVar13) goto LAB_141464e3c;
      }
      cVar9 = callee_1402c78e0(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
      if ((cVar9 == '\0') ||
         (uVar17 = FUN_140ece790(),
         0x10624d < uVar17 + (int)((longlong)((ulonglong)uVar17 * 0x100000003) >> 0x3f) * 0x7fffffff
         )) goto LAB_141465559;
      if (((((sVar27 < 0) || ((_DAT_14250a55c <= sVar27 || (sVar36 < 0)))) ||
           (_DAT_14250a560 <= sVar36)) ||
          (((sVar14 < 0 || (_DAT_14250a564 <= iVar16)) || (_DAT_14250a528 == 0)))) ||
         (lVar37 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(_DAT_14250a528 + (longlong)sVar12 * 8) + (longlong)sVar25 * 8)
                    + lVar37 * 8), lVar37 == 0)) {
        plVar26 = (longlong *)0x142528588;
      }
      else {
        plVar26 = (longlong *)(lVar37 + 0x68);
      }
      iVar16 = (int)(plVar26[1] - *plVar26 >> 3) + -1;
      if (-1 < iVar16) {
        lVar37 = (longlong)iVar16;
        puVar21 = (undefined8 *)(*plVar26 + lVar37 * 8);
        do {
          psVar22 = (short *)*puVar21;
          if ((((*(byte *)((longlong)psVar22 + 0x17) & 1) == 0) && (*psVar22 == 1)) &&
             ((psVar22[5] == sVar27 && ((psVar22[6] == sVar36 && (psVar22[7] == sVar14))))))
          goto LAB_141464f62;
          iVar16 = iVar16 + -1;
          puVar21 = puVar21 + -1;
          lVar37 = lVar37 + -1;
        } while (-1 < lVar37);
      }
    }
    goto LAB_141464f78;
  }
  lVar37 = *(longlong *)(param_1 + 0x11a668);
  lVar33 = (longlong)(short)auStack_f4[0];
  lVar29 = (longlong)(short)auStack_f8[0];
  sVar13 = FUN_140f93580(lVar37,auStack_f8[0],auStack_f4[0],0);
  if (0x4a < sVar13) {
    sVar13 = *(short *)(*(longlong *)(*(longlong *)(lVar37 + 0x2b0) + lVar29 * 8) + 0x32 +
                       lVar33 * 0x70);
    if (1 < DAT_1418f9296) {
      uStack_118 = CONCAT22(uStack_118._2_2_,sVar13);
      sVar27 = callee_140776ca0(*(undefined2 *)(lVar37 + 0xa4),lVar33 * 0x70,uVar38,
                                *(undefined2 *)(lVar37 + 0xb0));
      if (sVar27 != 100) {
        sVar13 = (short)(sVar13 * sVar27) / 100;
      }
    }
    if (sVar13 < 0x42) {
      uStack_118 = CONCAT31(uStack_118._1_3_,1);
      FUN_1414b7200(param_1,uVar19 & 0xffff,uVar18 & 0xffff,sVar14);
    }
  }
  goto LAB_141465559;
LAB_141464f62:
  if (psVar22[4] < 0x19) {
    psVar22[4] = 0x19;
  }
  psVar22[1] = 1;
LAB_141464f78:
  if (iVar16 == -1) {
    puVar23 = (undefined4 *)FUN_140a6d290(param_1 + 0x11b3b8,uVar19 & 0xffff,uVar18 & 0xffff,sVar14)
    ;
    *puVar23 = 0x10001;
    *(undefined2 *)(puVar23 + 2) = 0x19;
    *(short *)((longlong)puVar23 + 10) = sVar27;
    *(short *)(puVar23 + 3) = sVar36;
    *(short *)((longlong)puVar23 + 0xe) = sVar14;
    if (*(longlong *)(param_1 + 0x126c68) == 0) {
      uVar32 = 0xea61;
    }
    else {
      uVar32 = *(undefined2 *)(*(longlong *)(param_1 + 0x126c68) + 0x8a);
    }
    uStack_108 = CONCAT22(uStack_108._2_2_,2);
    uStack_110 = 0xffffffff;
    uStack_118 = CONCAT22(uStack_118._2_2_,6);
    FUN_140ad5440(uVar19 & 0xffff,uVar18 & 0xffff,sVar14,uVar32);
  }
LAB_141465559:
  uStack_94 = uStack_94 + -1;
joined_r0x00014146482b:
  if ((int)uStack_94 < 1) {
    if (_DAT_1418be238 == 0) {
      FUN_1414606b0(param_1);
      FUN_141461ef0(param_1);
    }
    uVar31 = 0;
    auStack_f4[0] = 0;
    lVar37 = *(longlong *)(param_1 + 0x26dc00);
    if (*(longlong *)(param_1 + 0x26dc08) - lVar37 >> 3 != 0) {
      do {
        uVar38 = auStack_f4[0];
        plVar26 = (longlong *)(**(code **)(**(longlong **)(lVar37 + uVar31 * 8) + 0x30))();
        plStack_90 = plVar26;
        if ((plVar26 != (longlong *)0x0) &&
           ((sVar13 = (**(code **)*plVar26)(plVar26), sVar13 == 3 ||
            (sVar13 = (**(code **)*plVar26)(plVar26), sVar13 == 4)))) {
          auStack_f8[0] = 0xffff;
          sVar13 = (**(code **)*plVar26)(plVar26);
          if ((sVar13 == 3) || (uVar34 = 0xffff, sVar13 == 4)) {
            auStack_f8[0] = (short)plVar26[0x11] - *(short *)(param_1 + 0x116c00);
            uVar34 = auStack_f8[0];
          }
          uVar31 = 0;
          uStack_98 = uStack_98 & 0xffff0000;
          lVar37 = plVar26[5];
          if (plVar26[6] - lVar37 >> 1 != 0) {
            do {
              sVar13 = *(short *)(lVar37 + uVar31 * 2);
              sVar14 = *(short *)(param_1 + 0x116bf8);
              sVar27 = *(short *)(plVar26[8] + uVar31 * 2);
              sVar12 = *(short *)(param_1 + 0x116bfc);
              uVar19 = FUN_140ece790();
              sVar36 = (short)((uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f)
                                         * 0x7fffffff) / 0x2aaaaab) + (sVar13 - sVar14) * 0x30;
              uVar19 = FUN_140ece790();
              sVar14 = (short)((uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f)
                                         * 0x7fffffff) / 0x2aaaaab) + (sVar27 - sVar12) * 0x30;
              uVar19 = FUN_140ece790();
              uVar19 = (uint)(ushort)((short)((uVar19 + (int)((longlong)
                                                              ((ulonglong)uVar19 * 0x100000003) >>
                                                             0x3f) * 0x7fffffff) / 0x8888889) + 7);
              bVar3 = false;
              sVar13 = 0;
              if (-1 < (short)uVar34) {
                do {
                  sVar27 = sVar36 >> 4;
                  sVar12 = sVar14 >> 4;
                  if ((((((sVar36 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)sVar36)) ||
                        (sVar14 < 0)) ||
                       ((*(int *)(param_1 + 0x116bf0) <= (int)sVar14 || (sVar13 < 0)))) ||
                      (*(int *)(param_1 + 0x116bf4) <= (int)sVar13)) ||
                     ((*(longlong *)(param_1 + 0x116bb8) == 0 ||
                      (lVar37 = *(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(param_1 + 0x116bb8) + (longlong)sVar27 * 8) +
                                   (longlong)sVar12 * 8) + (longlong)sVar13 * 8), lVar37 == 0)))) {
LAB_1414657f6:
                    if (bVar3) goto LAB_1414657ff;
                  }
                  else {
                    uVar17 = (int)sVar36 & 0x8000000f;
                    if ((int)uVar17 < 0) {
                      uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
                    }
                    uVar18 = (int)sVar14 & 0x8000000f;
                    if ((int)uVar18 < 0) {
                      uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
                    }
                    if (*(short *)(lVar37 + (((longlong)(int)uVar17 + 5) * 0x10 +
                                            (longlong)(int)uVar18) * 2) != 0x104)
                    goto LAB_1414657f6;
                    bVar3 = true;
LAB_1414657ff:
                    cVar9 = FUN_1414c3940(param_1,sVar36,sVar14,sVar13);
                    if (cVar9 != '\0') {
                      if ((((sVar36 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)sVar36)) ||
                          (sVar14 < 0)) ||
                         (((*(int *)(param_1 + 0x116bf0) <= (int)sVar14 || (sVar13 < 0)) ||
                          ((*(int *)(param_1 + 0x116bf4) <= (int)sVar13 ||
                           ((*(longlong *)(param_1 + 0x116bb8) == 0 ||
                            (lVar37 = *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(param_1 + 0x116bb8) + (longlong)sVar27 * 8
                                           ) + (longlong)sVar12 * 8) + (longlong)sVar13 * 8),
                            lVar37 == 0)))))))) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0;
                        uVar18 = (int)sVar36 & 0x8000000f;
                        if ((int)uVar18 < 0) {
                          uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
                        }
                        uVar20 = (int)sVar14 & 0x8000000f;
                        if ((int)uVar20 < 0) {
                          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                        }
                        uVar18 = *(uint *)(lVar37 + 0x2a0 +
                                          ((longlong)(short)uVar18 * 0x10 + (longlong)(short)uVar20)
                                          * 4);
                        if ((uVar18 >> 0x15 & 1) != 0) {
                          bVar10 = (byte)uVar18 & 1;
                          bVar11 = bVar10 | 2;
                          if ((uVar18 & 2) == 0) {
                            bVar11 = bVar10;
                          }
                          uVar17 = (uint)bVar11;
                          if ((uVar18 & 4) != 0) {
                            uVar17 = bVar11 | 4;
                          }
                        }
                        uVar34 = auStack_f8[0];
                        if (6 < (byte)uVar17) goto LAB_141465aa8;
                      }
                      if (-1 < sVar36) {
                        if ((int)(short)uVar19 < (int)(7 - uVar17)) {
                          if ((((int)sVar36 < *(int *)(param_1 + 0x116bec)) && (-1 < sVar14)) &&
                             (((int)sVar14 < *(int *)(param_1 + 0x116bf0) &&
                              ((((-1 < sVar13 && ((int)sVar13 < *(int *)(param_1 + 0x116bf4))) &&
                                (*(longlong *)(param_1 + 0x116bb8) != 0)) &&
                               (lVar37 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(param_1 + 0x116bb8) +
                                              (longlong)sVar27 * 8) + (longlong)sVar12 * 8) +
                                          (longlong)sVar13 * 8), lVar37 != 0)))))) {
                            iVar16 = uVar19 + uVar17;
                            uVar18 = (int)sVar14 & 0x8000000f;
                            if ((int)uVar18 < 0) {
                              uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
                            }
                            uVar20 = (int)sVar36 & 0x8000000f;
                            if ((int)uVar20 < 0) {
                              uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                            }
LAB_141465a89:
                            uStack_118 = 0x200000;
                            FUN_14054eab0(lVar37,uVar20,uVar18,iVar16);
                          }
                        }
                        else if (((((int)sVar36 < *(int *)(param_1 + 0x116bec)) && (-1 < sVar14)) &&
                                 ((int)sVar14 < *(int *)(param_1 + 0x116bf0))) &&
                                (((-1 < sVar13 && ((int)sVar13 < *(int *)(param_1 + 0x116bf4))) &&
                                 ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
                                  (lVar37 = *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(param_1 + 0x116bb8) +
                                                 (longlong)sVar27 * 8) + (longlong)sVar12 * 8) +
                                             (longlong)sVar13 * 8), lVar37 != 0)))))) {
                          uVar18 = (int)sVar14 & 0x8000000f;
                          if ((int)uVar18 < 0) {
                            uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
                          }
                          uVar20 = (int)sVar36 & 0x8000000f;
                          if ((int)uVar20 < 0) {
                            uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                          }
                          iVar16 = 7;
                          goto LAB_141465a89;
                        }
                      }
                      uVar19 = (uint)(ushort)((short)uVar19 + (short)uVar17 + -7);
                      uVar34 = auStack_f8[0];
                    }
LAB_141465aa8:
                    if ((((short)uVar19 < 1) || (sVar36 < 0)) ||
                       ((((*(int *)(param_1 + 0x116bec) <= (int)sVar36 ||
                          ((sVar14 < 0 || (*(int *)(param_1 + 0x116bf0) <= (int)sVar14)))) ||
                         ((short)(sVar13 + 1) < 0)) ||
                        (((*(int *)(param_1 + 0x116bf4) <= sVar13 + 1 ||
                          (lVar37 = *(longlong *)(param_1 + 0x116bb8), lVar37 == 0)) ||
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(lVar37 + (longlong)sVar27 * 8) + (longlong)sVar12 * 8) +
                            8 + (longlong)sVar13 * 8) == 0)))))) break;
                    uVar17 = (int)sVar14 & 0x8000000f;
                    if ((int)uVar17 < 0) {
                      uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
                    }
                    uVar18 = (int)sVar36 & 0x8000000f;
                    if ((int)uVar18 < 0) {
                      uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
                    }
                    uStack_100 = 0;
                    uStack_108 = uStack_108 & 0xffffff00;
                    uStack_110 = uStack_110 & 0xffffff00;
                    uStack_118 = CONCAT31(uStack_118._1_3_,1);
                    cVar9 = FUN_14054e280(*(undefined8 *)
                                           (*(longlong *)
                                             (*(longlong *)(lVar37 + (longlong)sVar27 * 8) +
                                             (longlong)sVar12 * 8) + 8 + (longlong)sVar13 * 8),
                                          uVar18,uVar17,1);
                    if (cVar9 == '\0') break;
                  }
                  sVar13 = sVar13 + 1;
                } while (sVar13 <= (short)uVar34);
              }
              sVar13 = (short)uStack_98 + 1;
              uStack_98 = CONCAT22(uStack_98._2_2_,sVar13);
              lVar37 = plStack_90[5];
              uVar31 = (ulonglong)sVar13;
              plVar26 = plStack_90;
              uVar38 = auStack_f4[0];
            } while (uVar31 < (ulonglong)(plStack_90[6] - lVar37 >> 1));
          }
        }
        auStack_f4[0] = uVar38 + 1;
        lVar37 = *(longlong *)(param_1 + 0x26dc00);
        uVar31 = (ulonglong)(short)auStack_f4[0];
      } while (uVar31 < (ulonglong)(*(longlong *)(param_1 + 0x26dc08) - lVar37 >> 3));
    }
    FUN_1400681a0(&lStack_80);
    FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_138);
    return;
  }
  goto LAB_141464831;
}

