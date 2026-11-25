
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e517f0(void)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  undefined2 uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  longlong lVar26;
  int *piVar27;
  ushort *puVar28;
  undefined2 *puVar29;
  int *piVar30;
  int *piVar31;
  short *psVar32;
  byte bVar33;
  byte bVar34;
  int iVar35;
  uint uVar36;
  undefined *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  byte bVar41;
  uint uVar42;
  short sVar43;
  uint uVar44;
  short sVar45;
  int iVar46;
  bool bVar47;
  undefined1 auStack_6b8 [32];
  longlong *plStack_698;
  int *piStack_690;
  ushort uStack_688;
  longlong *plStack_680;
  longlong *plStack_678;
  undefined4 *puStack_670;
  int *piStack_668;
  longlong lStack_660;
  undefined1 auStack_658 [2];
  ushort uStack_656;
  char acStack_654 [2];
  ushort uStack_652;
  longlong *plStack_650;
  char acStack_648 [2];
  ushort uStack_646;
  undefined1 auStack_644 [4];
  int *piStack_640;
  longlong *plStack_638;
  short asStack_630 [2];
  int iStack_62c;
  longlong *plStack_628;
  longlong lStack_620;
  undefined1 auStack_618 [4];
  int iStack_614;
  int aiStack_610 [2];
  longlong lStack_608;
  ulonglong uStack_600;
  short asStack_5f8 [2];
  short asStack_5f4 [2];
  int *piStack_5f0;
  ulonglong uStack_5e8;
  int aiStack_5e0 [2];
  longlong lStack_5d8;
  longlong lStack_5d0;
  longlong lStack_5c0;
  ulonglong uStack_5b8;
  undefined2 auStack_5b0 [2];
  undefined2 auStack_5ac [2];
  longlong lStack_5a8;
  int *piStack_5a0;
  int iStack_598;
  int iStack_594;
  longlong lStack_590;
  longlong lStack_588;
  undefined2 auStack_578 [2];
  undefined2 auStack_574 [2];
  undefined2 auStack_570 [2];
  undefined2 auStack_56c [2];
  short asStack_568 [2];
  short asStack_564 [2];
  undefined2 auStack_560 [4];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_548 [8];
  longlong lStack_540;
  ulonglong uStack_538;
  longlong lStack_530;
  longlong lStack_528;
  undefined1 auStack_518 [8];
  undefined1 auStack_510 [8];
  longlong *plStack_508;
  ulonglong uStack_500;
  undefined8 *puStack_4f8;
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [8];
  undefined1 auStack_4e0 [8];
  undefined1 auStack_4d8 [8];
  undefined8 *puStack_4d0;
  undefined1 auStack_4c8 [8];
  undefined1 auStack_4c0 [8];
  longlong *plStack_4b8;
  ulonglong uStack_4b0;
  undefined8 uStack_4a8;
  longlong lStack_498;
  int iStack_490;
  undefined4 uStack_48c;
  undefined2 uStack_47c;
  undefined4 auStack_448 [2];
  longlong lStack_440;
  undefined1 auStack_428 [32];
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 auStack_3f0 [2];
  undefined8 auStack_3e0 [3];
  longlong alStack_3c8 [100];
  undefined8 uStack_a8;
  short sStack_a0;
  short sStack_9e;
  undefined2 uStack_8c;
  undefined8 uStack_88;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_6b8;
  if (_DAT_1418be234 == 4) goto LAB_140e57b9f;
  _DAT_1423b38bc = _DAT_1423b38bc + 1;
  func_0x000140070cc0(auStack_428);
  if (_DAT_1423aa348 % 100 == 0x46) {
    FUN_140acdf70();
  }
  if (_DAT_1423aa348 % 100 == 0x1e) {
    FUN_140e7d930(0x1423b36b0);
  }
  if (_DAT_1423aa348 % 0xe10 == 0xfa) {
    func_0x000140070870(&DAT_142407548,&plStack_638);
    func_0x000140070860(&DAT_142407548,&plStack_628);
    puVar17 = (undefined1 *)func_0x000140070450(&plStack_638,&uStack_656,&plStack_628);
    cVar6 = func_0x000140066de0(*puVar17,0);
    while (cVar6 != '\0') {
      puVar18 = (undefined8 *)func_0x000140070440(&plStack_638);
      piStack_690 = (int *)CONCAT71(piStack_690._1_7_,1);
      plStack_698 = (longlong *)CONCAT44(plStack_698._4_4_,100);
      FUN_1409ff280(*puVar18,0x39,0xffffffff);
      func_0x000140070430(&plStack_638);
      puVar17 = (undefined1 *)func_0x000140070450(&plStack_638,&uStack_656,&plStack_628);
      cVar6 = func_0x000140066de0(*puVar17,0);
    }
  }
  if (_DAT_1423aa348 % 0x4b0 == 0x104) {
    FUN_140e4e4a0();
  }
  if (_DAT_1423aa348 % 0x4b0 == 0x33e) {
    FUN_1402b97e0(0x1423f3970);
  }
  iVar35 = _DAT_1423aa348 / 0x4b0;
  iVar46 = 0;
  if (_DAT_1423aa348 % 0x4b0 == 0x5a) {
    func_0x000140070870(&DAT_142407548,aiStack_5e0);
    func_0x000140070860(&DAT_142407548,&lStack_5a8);
    puVar17 = (undefined1 *)func_0x000140070450(aiStack_5e0,acStack_654,&lStack_5a8);
    cVar6 = func_0x000140066de0(*puVar17,0);
    while (cVar6 != '\0') {
      plVar19 = (longlong *)func_0x000140070440(aiStack_5e0);
      lVar21 = *plVar19;
      if (iVar46 % 10 == iVar35 % 10) {
        func_0x000140067130(&lStack_498);
        func_0x000140070870(lVar21 + 0x420,&lStack_608);
        func_0x000140070860(lVar21 + 0x420,&piStack_5f0);
        puVar17 = (undefined1 *)
                  func_0x000140070450(&lStack_608,(longlong)acStack_648 + 2,&piStack_5f0);
        cVar6 = func_0x000140066de0(*puVar17,0);
        while (cVar6 != '\0') {
          puVar20 = (undefined4 *)func_0x000140070440(&lStack_608);
          plStack_638 = (longlong *)FUN_140073d10(0x1424078d0,*puVar20);
          if (plStack_638 != (longlong *)0x0) {
            func_0x000140070870(plStack_638 + 7,&plStack_650);
            func_0x000140070860(plStack_638 + 7,&plStack_628);
            puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,&uStack_656,&plStack_628);
            cVar6 = func_0x000140066de0(*puVar17,0);
            while (cVar6 != '\0') {
              puVar18 = (undefined8 *)func_0x000140070440(&plStack_650);
              iVar14 = (**(code **)(*(longlong *)*puVar18 + 0x10))();
              if (iVar14 == 0x10) {
                puVar18 = (undefined8 *)func_0x000140070440(&plStack_650);
                iVar14 = (**(code **)(*(longlong *)*puVar18 + 0x60))();
                if (iVar14 == *(int *)(lVar21 + 0x130)) {
                  plVar19 = (longlong *)func_0x000140070440(&plStack_650);
                  lVar22 = *plVar19;
                  func_0x000140073860(auStack_448);
                  func_0x000140073860(&lStack_5d8);
                  auStack_448[0] = 1;
                  lStack_440 = lVar21;
                  cVar6 = FUN_140ca3950(plStack_638,auStack_448,&lStack_5d8);
                  if ((cVar6 == '\0') && (cVar6 = FUN_140ca5ec0(plStack_638,lVar21), cVar6 == '\0'))
                  {
                    if ((*(uint *)(lVar22 + 0x10) & 1) == 0) {
                      *(uint *)(lVar22 + 0x10) = *(uint *)(lVar22 + 0x10) | 1;
                    }
                    else {
                      func_0x0001400bafb0(&lStack_498,&plStack_638);
                    }
                  }
                  else {
                    *(uint *)(lVar22 + 0x10) = *(uint *)(lVar22 + 0x10) & 0xfffffffe;
                  }
                  break;
                }
              }
              func_0x000140070430(&plStack_650);
              puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,&uStack_656,&plStack_628);
              cVar6 = func_0x000140066de0(*puVar17,0);
            }
          }
          func_0x000140070980(&lStack_608);
          puVar17 = (undefined1 *)
                    func_0x000140070450(&lStack_608,(longlong)acStack_648 + 2,&piStack_5f0);
          cVar6 = func_0x000140066de0(*puVar17,0);
        }
        func_0x000140070870(&lStack_498,&piStack_640);
        func_0x000140070860(&lStack_498,&uStack_5e8);
        puVar17 = (undefined1 *)func_0x000140070450(&piStack_640,acStack_648,&uStack_5e8);
        cVar6 = func_0x000140066de0(*puVar17,0);
        while (cVar6 != '\0') {
          plVar19 = (longlong *)func_0x000140070440(&piStack_640);
          FUN_1402888e0(*(undefined4 *)(*plVar19 + 0x1c),lVar21 + 0x420);
          puVar18 = (undefined8 *)func_0x000140070440(&piStack_640);
          FUN_140cc9110(*puVar18,0x10,*(undefined4 *)(lVar21 + 0x130));
          plVar19 = (longlong *)func_0x000140070440(&piStack_640);
          *(uint *)(*plVar19 + 0x10) = *(uint *)(*plVar19 + 0x10) & 0xfffeffff;
          func_0x000140070430(&piStack_640);
          puVar17 = (undefined1 *)func_0x000140070450(&piStack_640,acStack_648,&uStack_5e8);
          cVar6 = func_0x000140066de0(*puVar17,0);
        }
        func_0x000140068790(&lStack_498);
      }
      func_0x000140070430(aiStack_5e0);
      iVar46 = iVar46 + 1;
      puVar17 = (undefined1 *)func_0x000140070450(aiStack_5e0,acStack_654,&lStack_5a8);
      cVar6 = func_0x000140066de0(*puVar17,0);
    }
  }
  if (_DAT_1423aa348 % 100 == 0x3c) {
    func_0x000140070870(0x14250a198,&plStack_638);
    func_0x000140070860(0x14250a198,&plStack_628);
    puVar17 = (undefined1 *)func_0x000140070450(&plStack_638,&uStack_656,&plStack_628);
    cVar6 = func_0x000140066de0(*puVar17,0);
    while (cVar6 != '\0') {
      plVar19 = (longlong *)func_0x000140070440(&plStack_638);
      lVar21 = *plVar19;
      if ((((*(int *)(lVar21 + 0xd4) == _DAT_1423b5af4) &&
           (*(int *)(lVar21 + 0xe0) == _DAT_1423b5af8)) && (*(int *)(lVar21 + 4) == 0)) &&
         ((*(uint *)(lVar21 + 0xec) & 1) == 0)) {
        bVar47 = false;
        iVar35 = _DAT_142167754 - *(int *)(lVar21 + 0xe4);
        if (-1 < iVar35) {
          iVar46 = _DAT_1423aa348 - *(int *)(lVar21 + 0xe8);
          if (iVar35 < 2) {
            if (iVar35 == 1) {
              iVar46 = iVar46 + 0x62700;
            }
          }
          else {
            bVar47 = true;
          }
          if ((0x20cf < iVar46) || (bVar47)) {
            *(uint *)(lVar21 + 0xec) = *(uint *)(lVar21 + 0xec) | 1;
            lVar21 = FUN_1400751a0(0x142407530,*(undefined4 *)(lVar21 + 0x28));
            if (lVar21 != 0) {
              func_0x000140070cc0(&lStack_498);
              func_0x000140070cc0(auStack_448);
              lVar22 = FUN_1413fea70(lVar21);
              if ((lVar22 == 0) || (*(char *)(lVar22 + 0x72) == '\0')) {
                func_0x000140070bb0(&lStack_498,&UNK_141608c3c);
              }
              FUN_141349540(lVar21,auStack_448,0);
              func_0x0001400bb340(&lStack_498,auStack_448);
              func_0x000140070b90(&lStack_498,&UNK_14174e828);
              func_0x00014007f210(&uStack_a8);
              uStack_a8._0_2_ = 0x98;
              if ((*(uint *)(lVar21 + 0x110) & 0x4000000) == 0) {
                uStack_a8._0_2_ = 0x97;
              }
              uStack_a8._0_4_ = CONCAT22(5,(undefined2)uStack_a8);
              uStack_a8._4_1_ = 1;
              uStack_8c = 2000;
              FUN_1400e5250(0x142505cd0,&lStack_498,&uStack_a8);
              func_0x000140069460(auStack_448);
              func_0x000140069460(&lStack_498);
            }
          }
        }
      }
      func_0x000140070430(&plStack_638);
      puVar17 = (undefined1 *)func_0x000140070450(&plStack_638,&uStack_656,&plStack_628);
      cVar6 = func_0x000140066de0(*puVar17,0);
    }
  }
  func_0x000140e7d900(0x1423b36b0,1);
  func_0x000140e7d910(0x1423b3720);
  iVar35 = func_0x000140070480(&DAT_1423b3738);
  iVar35 = iVar35 + -1;
  if (-1 < iVar35) {
    lVar21 = (longlong)iVar35;
    do {
      puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423b3738,lVar21);
      FUN_140e6b750(*puVar18);
      lVar21 = lVar21 + -1;
      iVar35 = iVar35 + -1;
    } while (-1 < iVar35);
  }
  uVar38 = 0;
  if ((_DAT_142153ec4 == 0x275e) && (DAT_1423b375c != '\0')) {
    if (DAT_1423b375d == '\0') {
      lVar21 = func_0x000140070480(&DAT_142407548);
      uVar39 = uVar38;
      uVar24 = uVar38;
      if (lVar21 != 0) {
        do {
          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
          if (((*(byte *)(*plVar19 + 0x110) & 2) == 0) &&
             (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
             (*(uint *)(*plVar19 + 0x110) & 0x100) == 0)) {
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
            cVar6 = FUN_141387110(*puVar18);
            if (cVar6 == '\0') {
              plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
              switch(*(undefined2 *)(*plVar19 + 0xa0)) {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
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
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
              case 0x19:
              case 0x1a:
              case 0x1b:
              case 0x1c:
              case 0x1d:
              case 0x1e:
              case 0x1f:
              case 0x20:
              case 0x21:
              case 0x22:
              case 0x23:
              case 0x24:
              case 0x25:
              case 0x26:
              case 0x27:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
              case 0x2d:
              case 0x2e:
              case 0x2f:
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x34:
              case 0x35:
              case 0x36:
              case 0x37:
              case 0x38:
              case 0x39:
              case 0x3a:
              case 0x3b:
              case 0x3c:
              case 0x3d:
              case 0x3e:
              case 0x3f:
              case 0x40:
              case 0x41:
              case 0x6f:
              case 0x7e:
              case 0x7f:
                plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
                if (*(int *)(*plVar19 + 0x484) < 100) {
                  func_0x000140073b40(&lStack_498);
                  lStack_498 = CONCAT44(lStack_498._4_4_,0x4c);
                  uStack_48c = 100;
                  puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                  func_0x000141408f60(*puVar18,&lStack_498);
                  puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                  FUN_14135a770(*puVar18,0x19,0);
                }
              }
            }
          }
          uVar44 = (int)uVar24 + 1;
          uVar23 = func_0x000140070480(&DAT_142407548);
          uVar39 = (longlong)(int)uVar44;
          uVar24 = (ulonglong)uVar44;
        } while ((ulonglong)(longlong)(int)uVar44 < uVar23);
      }
    }
    else {
      DAT_1423b375d = '\0';
    }
    lVar21 = func_0x000140070480(&DAT_142407548);
    uVar39 = uVar38;
    if (lVar21 != 0) {
      do {
        plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar38);
        if ((*(byte *)(*plVar19 + 0x110) & 2) == 0) {
          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar38);
          *(undefined4 *)(*plVar19 + 0x484) = 0;
        }
        uVar44 = (int)uVar39 + 1;
        uVar38 = (ulonglong)(int)uVar44;
        uVar24 = func_0x000140070480(&DAT_142407548);
        uVar39 = (ulonglong)uVar44;
      } while (uVar38 < uVar24);
    }
  }
  if (DAT_1418f9296 == '\x02') {
    if (_DAT_142153ec4 == 0x2178) {
      _DAT_1423b5878 = _DAT_1423b5874;
      _DAT_1423b588c = _DAT_1423b5888;
      _DAT_1423b58a0 = _DAT_1423b589c;
      _DAT_1423b58b4 = _DAT_1423b58b0;
      _DAT_1423b5874 = _DAT_1423b5870;
      _DAT_1423b5888 = _DAT_1423b5884;
      _DAT_1423b589c = _DAT_1423b5898;
      _DAT_1423b58b0 = _DAT_1423b58ac;
      _DAT_1423b5870 = _DAT_1423b586c;
      _DAT_1423b5884 = _DAT_1423b5880;
      _DAT_1423b5898 = _DAT_1423b5894;
      _DAT_1423b58ac = _DAT_1423b58a8;
      _DAT_1423b586c = _DAT_1423b5868;
      _DAT_1423b5880 = _DAT_1423b587c;
      _DAT_1423b5894 = _DAT_1423b5890;
      _DAT_1423b58a8 = _DAT_1423b58a4;
      _DAT_1423b5868 = 0;
      _DAT_1423b587c = 0;
      _DAT_1423b5890 = 0;
      _DAT_1423b58a4 = 0;
      func_0x000141554566(0x1423b3c2c,0,0x408);
      func_0x000141554566(0x1423b4034,0,0x408);
      func_0x000141554566(0x1423b443c,0,0x408);
      func_0x000141554566(0x1423b4844,0,0x408);
      func_0x000141554566(0x1423b4c4c,0,0x408);
      func_0x000141554566(0x1423b5054,0,0x408);
      func_0x000141554566(0x1423b545c,0,0x408);
      iVar35 = func_0x000140070480(0x1423f3c78);
      iVar35 = iVar35 + -1;
      if (-1 < iVar35) {
        lVar21 = (longlong)iVar35;
        do {
          lVar22 = 0x13f0;
          do {
            plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,lVar21);
            lVar40 = lVar22 + -4;
            uVar16 = *(undefined4 *)(lVar40 + *plVar19);
            plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,lVar21);
            *(undefined4 *)(lVar22 + *plVar19) = uVar16;
            lVar22 = lVar40;
          } while (0x13cf < lVar40);
          plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,lVar21);
          *(undefined4 *)(*plVar19 + 0x13cc) = 0;
          lVar21 = lVar21 + -1;
          iVar35 = iVar35 + -1;
        } while (-1 < iVar35);
      }
      goto LAB_140e5241d;
    }
LAB_140e5242a:
    if (_DAT_142153ec4 == 0) {
      lVar21 = func_0x00014007f120(0x1423f3c78,_DAT_1423b5af0);
      bVar47 = false;
      func_0x000140070870(0x14250a288,&plStack_650);
      func_0x000140070860(0x14250a288,&plStack_628);
      puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,&uStack_656,&plStack_628);
      cVar6 = func_0x000140066de0(*puVar17,0);
      while (cVar6 != '\0') {
        plVar19 = (longlong *)func_0x000140070440(&plStack_650);
        if (*(int *)(*plVar19 + 4) == *(int *)(lVar21 + 4)) {
          puVar18 = (undefined8 *)func_0x000140070440(&plStack_650);
          iVar35 = func_0x000140076740(*puVar18);
          if ((iVar35 == 2) &&
             (plVar19 = (longlong *)func_0x000140070440(&plStack_650),
             *(int *)(*plVar19 + 8) == _DAT_1423b5af4)) {
            plVar19 = (longlong *)func_0x000140070440(&plStack_650);
            iVar35 = _DAT_142167754 - *(int *)(*plVar19 + 0x38);
            plVar19 = (longlong *)func_0x000140070440(&plStack_650);
            if ((iVar35 * 0x62700 - *(int *)(*plVar19 + 0x3c)) + _DAT_1423aa348 < 0x31380) {
              bVar47 = true;
              break;
            }
          }
        }
        func_0x000140070430(&plStack_650);
        puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,&uStack_656,&plStack_628);
        cVar6 = func_0x000140066de0(*puVar17,0);
      }
      bVar5 = false;
      uVar39 = 0;
      lVar22 = func_0x0001407e1df0(0x1426be068);
      uVar38 = uVar39;
      if (lVar22 != 0) {
        do {
          puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,uVar39);
          if ((*(short *)*puVar18 == 1) &&
             (plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,uVar39),
             *(longlong *)(*plVar19 + 8) == lVar21)) {
            bVar5 = true;
            break;
          }
          uVar44 = (int)uVar38 + 1;
          uVar38 = (ulonglong)uVar44;
          uVar39 = (ulonglong)(int)uVar44;
          uVar24 = func_0x0001407e1df0(0x1426be068);
        } while (uVar39 < uVar24);
      }
      if (((!bVar47) && (!bVar5)) && (lVar21 != 0)) {
        puStack_4d0 = (undefined8 *)FUN_1415530e0(0x20);
        plStack_638 = (longlong *)func_0x0001407aa6b0(puStack_4d0);
        *(undefined2 *)plStack_638 = 1;
        *(char *)((longlong)plStack_638 + 2) = DAT_1418f9296;
        sVar9 = FUN_140073560(0x1389);
        *(short *)((longlong)plStack_638 + 4) = sVar9 + 2000;
        plStack_638[1] = lVar21;
        func_0x0001409fdea0(0x1426be068,&plStack_638);
      }
      goto LAB_140e5261a;
    }
LAB_140e52f1e:
    uVar38 = 0;
    if (_DAT_142153ec4 % 200 == 0x7d) {
      FUN_140e7da50(0x1423b36b0);
      if ((DAT_1423b375a != '\0') && (4 < _DAT_1423b3752)) {
        func_0x000140067130(&lStack_590);
        func_0x000140067130(&lStack_5d8);
        func_0x000140067130(&lStack_530);
        if ((((_DAT_1423b5ae8 & 0x10) == 0) || ((_DAT_1423b5ae8 & 0x20) == 0)) &&
           (uVar39 = func_0x00014007f120(0x1423f3c78,_DAT_1423b5af0), uStack_5e8 = uVar39,
           uVar39 != 0)) {
          func_0x000140070870(uVar39 + 0x10c0,&lStack_608);
          func_0x000140070860(uVar39 + 0x10c0,&plStack_628);
          puVar17 = (undefined1 *)func_0x000140070450(&lStack_608,auStack_658,&plStack_628);
          cVar6 = func_0x000140066de0(*puVar17,0);
          while (cVar6 != '\0') {
            plVar19 = (longlong *)func_0x000140070440(&lStack_608);
            if (*(int *)(*plVar19 + 0x2d0) == 1) {
              func_0x000140070870(uVar39 + 0x1110,&plStack_650);
              func_0x000140070860(uVar39 + 0x1110,&piStack_5f0);
              puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,auStack_658,&piStack_5f0);
              cVar6 = func_0x000140066de0(*puVar17,0);
              if (cVar6 != '\0') goto LAB_140e53090;
              break;
            }
            func_0x000140070430(&lStack_608);
            puVar17 = (undefined1 *)func_0x000140070450(&lStack_608,auStack_658,&plStack_628);
            cVar6 = func_0x000140066de0(*puVar17,0);
          }
        }
        goto LAB_140e538bc;
      }
    }
    else if (((_DAT_142153ec4 == (_DAT_142153ec4 / 0x32) * 0x32) &&
             (FUN_140e7c260(0x1423b36b0), _DAT_1423b38c0 == 0)) &&
            ((_DAT_142167754 == -1 ||
             (0x189bf < ((_DAT_142167754 - _DAT_1423bbf68) * 0x62700 - _DAT_1423bbf6c) +
                        _DAT_1423aa348)))) {
      FUN_140069780(&lStack_498,&UNK_14174eca0);
      lVar21 = func_0x000140070480(0x142411050);
      puVar37 = &UNK_14174ec50;
      if (lVar21 != 0) {
        puVar37 = &UNK_14174ed10;
      }
      func_0x000140070b90(&lStack_498,puVar37);
      lVar21 = func_0x000140070480(0x1424112a8);
      puVar37 = &UNK_14174ecc0;
      if (lVar21 != 0) {
        puVar37 = &UNK_14174ebe8;
      }
      func_0x000140070b90(&lStack_498,puVar37);
      func_0x000140070b90(&lStack_498,&UNK_14174ebb0);
      func_0x00014007f210(&uStack_a8);
      uStack_a8._0_4_ = 0x4015c;
      uStack_a8._4_1_ = 1;
      uStack_8c = 2000;
      FUN_1400e5250(0x142505cd0,&lStack_498,&uStack_a8);
      _DAT_1423bbf68 = _DAT_142167754;
      _DAT_1423bbf6c = _DAT_1423aa348;
      func_0x000140069460(&lStack_498);
    }
  }
  else {
LAB_140e5241d:
    if (DAT_1418f9296 != '\x03') goto LAB_140e5242a;
LAB_140e5261a:
    uVar38 = 0;
    if (_DAT_142153ec4 != 0) goto LAB_140e52f1e;
    FUN_140e7da50(0x1423b36b0);
    FUN_1413a4170(0x142407530);
    lVar21 = func_0x00014007f120(0x1423f3c78,_DAT_1423b5af0);
    lVar22 = func_0x000140070480(0x1423f3c78);
    uVar39 = uVar38;
    if (lVar22 != 0) {
      do {
        plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39);
        if (((*(byte *)(*plVar19 + 0x9c) & 0x10) == 0) &&
           ((plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39),
            (*(byte *)(*plVar19 + 0x9c) & 1) != 0 ||
            (plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39),
            *(int *)(*plVar19 + 4) == _DAT_1423b5af0)))) {
          func_0x000140067130(&lStack_5d8);
          plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39);
          lVar22 = *plVar19;
          func_0x000140070870(lVar22 + 0x1420,&plStack_650);
          func_0x000140070860(lVar22 + 0x1420,auStack_548);
          puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,acStack_654,auStack_548);
          cVar6 = func_0x000140066de0(*puVar17,0);
          while (cVar6 != '\0') {
            puVar18 = (undefined8 *)func_0x000140070440(&plStack_650);
            iVar35 = func_0x000140076740(*puVar18);
            if ((iVar35 == 2) &&
               (plVar19 = (longlong *)func_0x000140070440(&plStack_650),
               *(int *)(*plVar19 + 8) == _DAT_1423b5af4)) {
              func_0x000140070870(0x14250a288,&plStack_638);
              func_0x000140070860(0x14250a288,&plStack_628);
              puVar17 = (undefined1 *)func_0x000140070450(&plStack_638,&uStack_656,&plStack_628);
              cVar6 = func_0x000140066de0(*puVar17,0);
              while (cVar6 != '\0') {
                plVar19 = (longlong *)func_0x000140070440(&plStack_638);
                lVar22 = *plVar19;
                if ((*(int *)(lVar22 + 0x40) != -1) &&
                   (puVar18 = (undefined8 *)func_0x000140070440(&plStack_650),
                   *(int *)(lVar22 + 0x40) == *(int *)*puVar18)) goto LAB_140e5292e;
                func_0x000140070430(&plStack_638);
                puVar17 = (undefined1 *)func_0x000140070450(&plStack_638,&uStack_656,&plStack_628);
                cVar6 = func_0x000140066de0(*puVar17,0);
              }
              func_0x000140070870(0x142407530,&uStack_600);
              func_0x000140070860(0x142407530,&piStack_5f0);
              puVar17 = (undefined1 *)
                        func_0x000140070450(&uStack_600,(longlong)acStack_648 + 2,&piStack_5f0);
              cVar6 = func_0x000140066de0(*puVar17,0);
              while (cVar6 != '\0') {
                plVar19 = (longlong *)func_0x000140070440(&uStack_600);
                lVar22 = *(longlong *)(*plVar19 + 0x1208);
                plVar19 = (longlong *)func_0x000140070440(&plStack_650);
                if (lVar22 == *plVar19) goto LAB_140e5292e;
                func_0x000140070430(&uStack_600);
                puVar17 = (undefined1 *)
                          func_0x000140070450(&uStack_600,(longlong)acStack_648 + 2,&piStack_5f0);
                cVar6 = func_0x000140066de0(*puVar17,0);
              }
              func_0x000140070870(0x14250a258,&lStack_620);
              func_0x000140070860(0x14250a258,&lStack_5a8);
              puVar17 = (undefined1 *)func_0x000140070450(&lStack_620,acStack_648,&lStack_5a8);
              cVar6 = func_0x000140066de0(*puVar17,0);
              while (cVar6 != '\0') {
                plVar19 = (longlong *)func_0x000140070440(&lStack_620);
                lVar22 = *(longlong *)(*plVar19 + 0x60);
                plVar19 = (longlong *)func_0x000140070440(&plStack_650);
                if (lVar22 == *plVar19) goto LAB_140e5292e;
                func_0x000140070430(&lStack_620);
                puVar17 = (undefined1 *)func_0x000140070450(&lStack_620,acStack_648,&lStack_5a8);
                cVar6 = func_0x000140066de0(*puVar17,0);
              }
              uVar25 = func_0x000140070440(&plStack_650);
              func_0x0001400bafb0(&lStack_5d8,uVar25);
            }
LAB_140e5292e:
            func_0x000140070430(&plStack_650);
            puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,acStack_654,auStack_548);
            cVar6 = func_0x000140066de0(*puVar17,0);
          }
          func_0x000140070870(&lStack_5d8,&lStack_608);
          func_0x000140070860(&lStack_5d8,&uStack_550);
          puVar17 = (undefined1 *)func_0x000140070450(&lStack_608,&uStack_652,&uStack_550);
          cVar6 = func_0x000140066de0(*puVar17,0);
          while (cVar6 != '\0') {
            plVar19 = (longlong *)func_0x000140070440(&lStack_608);
            *(uint *)(*plVar19 + 0x78) = *(uint *)(*plVar19 + 0x78) | 1;
            puVar18 = (undefined8 *)func_0x000140070440(&lStack_608);
            func_0x000140100970(0x14250a288,*puVar18);
            func_0x000140070430(&lStack_608);
            puVar17 = (undefined1 *)func_0x000140070450(&lStack_608,&uStack_652,&uStack_550);
            cVar6 = func_0x000140066de0(*puVar17,0);
          }
          puVar18 = (undefined8 *)func_0x000140070850(0x1423f3c78,uVar39);
          if (*(short *)*puVar18 == 0) {
            plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39);
            lVar22 = *plVar19;
            func_0x000140070870(0x14250a288,aiStack_5e0);
            func_0x000140070860(0x14250a288,&uStack_558);
            puVar17 = (undefined1 *)
                      func_0x000140070450(aiStack_5e0,(longlong)acStack_648 + 4,&uStack_558);
            cVar6 = func_0x000140066de0(*puVar17,0);
            while (cVar6 != '\0') {
              plVar19 = (longlong *)func_0x000140070440(aiStack_5e0);
              if (*(int *)(*plVar19 + 4) == *(int *)(lVar22 + 4)) {
                puVar18 = (undefined8 *)func_0x000140070440(aiStack_5e0);
                iVar35 = func_0x000140076740(*puVar18);
                if ((iVar35 == 2) &&
                   (plVar19 = (longlong *)func_0x000140070440(aiStack_5e0),
                   *(int *)(*plVar19 + 8) == _DAT_1423b5af4)) {
                  plVar19 = (longlong *)func_0x000140070440(aiStack_5e0);
                  iVar35 = _DAT_142167754 - *(int *)(*plVar19 + 0x38);
                  plVar19 = (longlong *)func_0x000140070440(aiStack_5e0);
                  if ((iVar35 * 0x62700 - *(int *)(*plVar19 + 0x3c)) + _DAT_1423aa348 < 0x31380)
                  goto LAB_140e52ef5;
                }
              }
              func_0x000140070430(aiStack_5e0);
              puVar17 = (undefined1 *)
                        func_0x000140070450(aiStack_5e0,(longlong)acStack_648 + 4,&uStack_558);
              cVar6 = func_0x000140066de0(*puVar17,0);
            }
            if (*(int *)(lVar22 + 4) == _DAT_1423b5af0) {
              if (*(char *)(*(longlong *)(lVar22 + 8) + 0x37a6 + (longlong)DAT_1418f9296) != '\0') {
                FUN_140938020(lVar22);
              }
            }
            else {
              bVar47 = false;
              cVar6 = '\x01';
              sVar9 = 2;
              if (lVar21 != 0) {
                sVar9 = FUN_140101130(lVar21 + 0x1028);
                cVar6 = func_0x0001409b1430(lVar22,lVar21);
                if (1 < (ushort)(sVar9 - 3U)) {
                  cVar7 = func_0x0001400735c0(*(longlong *)(lVar21 + 8) + 0x3a0,7);
                  bVar47 = false;
                  if (cVar7 == '\0') {
                    cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,7);
                    bVar47 = false;
                    if (cVar7 != '\0') {
                      bVar47 = true;
                    }
                  }
                  cVar7 = func_0x0001400735c0(*(longlong *)(lVar21 + 8) + 0x3a0,8);
                  if ((cVar7 == '\0') &&
                     (cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,8),
                     cVar7 != '\0')) {
                    bVar47 = true;
                  }
                  cVar7 = func_0x0001400735c0(*(longlong *)(lVar21 + 8) + 0x3a0,7);
                  if ((cVar7 != '\0') &&
                     (cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,7),
                     cVar7 == '\0')) {
                    bVar47 = true;
                  }
                  cVar7 = func_0x0001400735c0(*(longlong *)(lVar21 + 8) + 0x3a0,8);
                  if ((cVar7 != '\0') &&
                     (cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,8),
                     cVar7 == '\0')) {
                    bVar47 = true;
                  }
                  cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,2);
                  if (cVar7 != '\0') {
                    bVar47 = true;
                  }
                }
              }
              cVar7 = func_0x00014096f530(lVar22);
              if (cVar7 != '\0') {
                if ((((sVar9 - 1U & 0xfffb) == 0) || (cVar6 == '\0')) || (bVar47)) {
                  puVar18 = (undefined8 *)func_0x000140070850(0x1423f3c78,uVar39);
                  FUN_140e77690(*puVar18);
                }
                else if (*(char *)((longlong)DAT_1418f9296 + 0x37a6 + *(longlong *)(lVar22 + 8)) !=
                         '\0') {
                  FUN_140938020(lVar22);
                  cVar6 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,0x30);
                  iVar46 = _DAT_1423b5af4;
                  iVar35 = _DAT_1423b5af0;
                  if (cVar6 == '\0') {
                    FUN_140e75100(lVar22);
                  }
                  else {
                    plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39);
                    cVar6 = FUN_140b748d0(0x14251c138,*(undefined4 *)(*plVar19 + 4),iVar35,iVar46);
                    if (cVar6 == '\0') {
                      FUN_140e5d680(lVar22);
                    }
                    else {
                      FUN_140e75100();
                    }
                  }
                }
              }
            }
          }
          else {
            puVar18 = (undefined8 *)func_0x000140070850(0x1423f3c78,uVar39);
            if (*(short *)*puVar18 == 1) {
              plVar19 = (longlong *)func_0x000140070850(0x1423f3c78,uVar39);
              lVar22 = *plVar19;
              FUN_140937e70(lVar22);
              if (((*(uint *)(lVar22 + 0x9c) & 0x4000000) != 0) && ((DAT_1423bc538 & 1) == 0)) {
                *(int *)(lVar22 + 0x13f4) = *(int *)(lVar22 + 0x13f4) + 5;
                iVar35 = FUN_140073560(100);
                if (iVar35 < *(int *)(lVar22 + 0x13f4)) {
                  func_0x000140070870(0x14250a288,&piStack_640);
                  func_0x000140070860(0x14250a288,&uStack_5e8);
                  puVar17 = (undefined1 *)func_0x000140070450(&piStack_640,auStack_658,&uStack_5e8);
                  cVar6 = func_0x000140066de0(*puVar17,0);
                  while (cVar6 != '\0') {
                    plVar19 = (longlong *)func_0x000140070440(&piStack_640);
                    if (*(int *)(*plVar19 + 4) == *(int *)(lVar22 + 4)) {
                      puVar18 = (undefined8 *)func_0x000140070440(&piStack_640);
                      iVar35 = func_0x000140076740(*puVar18);
                      if ((iVar35 == 2) &&
                         (plVar19 = (longlong *)func_0x000140070440(&piStack_640),
                         *(int *)(*plVar19 + 8) == _DAT_1423b5af4)) {
                        plVar19 = (longlong *)func_0x000140070440(&piStack_640);
                        iVar35 = _DAT_142167754 - *(int *)(*plVar19 + 0x38);
                        plVar19 = (longlong *)func_0x000140070440(&piStack_640);
                        if ((iVar35 * 0x62700 - *(int *)(*plVar19 + 0x3c)) + _DAT_1423aa348 <
                            0x31380) break;
                      }
                    }
                    func_0x000140070430(&piStack_640);
                    puVar17 = (undefined1 *)
                              func_0x000140070450(&piStack_640,auStack_658,&uStack_5e8);
                    cVar6 = func_0x000140066de0(*puVar17,0);
                  }
                  puVar17 = (undefined1 *)func_0x000140070450(&piStack_640,auStack_618,&uStack_5e8);
                  cVar6 = func_0x000140073490(*puVar17,0);
                  if (cVar6 != '\0') {
                    FUN_140e77770(lVar22);
                  }
                }
              }
            }
          }
LAB_140e52ef5:
          func_0x000140068790(&lStack_5d8);
        }
        uVar44 = (int)uVar38 + 1;
        uVar38 = (ulonglong)uVar44;
        uVar24 = func_0x000140070480(0x1423f3c78);
        uVar39 = (longlong)(int)uVar44;
      } while ((ulonglong)(longlong)(int)uVar44 < uVar24);
    }
  }
  goto LAB_140e53a2c;
  while( true ) {
    func_0x000140070430();
    puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,auStack_658,&piStack_5f0);
    cVar6 = func_0x000140066de0(*puVar17,0);
    if (cVar6 == '\0') break;
LAB_140e53090:
    plVar19 = (longlong *)func_0x000140070440(&plStack_650);
    iVar35 = *(int *)(*plVar19 + 0xc);
    plVar19 = (longlong *)func_0x000140070440(&lStack_608);
    if (iVar35 == *(int *)(*plVar19 + 0x20)) {
      plVar19 = (longlong *)func_0x000140070440(&plStack_650);
      lVar21 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar19 + 4));
      uVar25 = func_0x000140070440(&plStack_650);
      func_0x0001400bafb0(&lStack_590,uVar25);
      plVar19 = (longlong *)func_0x000140070440(&plStack_650);
      func_0x000140070a40(&lStack_5d8,*plVar19 + 4);
      func_0x000140070a40(&lStack_530,uVar39 + 4);
      if (((lVar21 != 0) &&
          (lVar21 = FUN_1413e54b0(0x142407530,*(undefined4 *)(lVar21 + 0xe0)), lVar21 != 0)) &&
         ((*(byte *)(lVar21 + 0x110) & 2) == 0)) {
        plStack_698 = &lStack_530;
        FUN_141362ef0(lVar21,auStack_3f0,&lStack_590,&lStack_5d8);
        FUN_141363140(lVar21,auStack_3e0);
        uVar39 = uVar38;
        goto LAB_140e531b0;
      }
      break;
    }
  }
  goto LAB_140e538bc;
  while (uVar39 = uVar39 + 4, (longlong)uVar39 < 0x10) {
LAB_140e531b0:
    if (*(int *)((longlong)auStack_3e0 + uVar39) < *(int *)((longlong)auStack_3f0 + uVar39))
    goto LAB_140e538bc;
  }
  iVar35 = -1;
  FUN_1413855d0(lVar21,&uStack_a8,0xffffffff);
  iVar46 = FUN_1413649d0(lVar21,&lStack_590,&lStack_5d8,&lStack_530);
  iVar14 = FUN_141364bd0(lVar21,&lStack_590,&lStack_5d8,&lStack_530);
  iVar15 = FUN_141364dd0(lVar21,&lStack_590,&lStack_5d8,&lStack_530);
  uVar39 = (ulonglong)(iVar14 <= iStack_58 && iVar46 <= iStack_5c);
  if (iStack_54 < iVar15) {
    uVar39 = uVar38;
  }
  iVar46 = FUN_141364fd0(lVar21,&lStack_590,&lStack_5d8,&lStack_530);
  if ((iVar46 <= iStack_50) && ((char)uVar39 != '\0')) {
    uVar44 = _DAT_1423b5ae8 & 0x10;
    if ((_DAT_1423b5ae8 & 0x20) == 0) {
      iVar46 = 0;
      lVar22 = func_0x000140070480(lVar21 + 0x450);
      if (lVar22 != 0) {
        uVar24 = 0;
        uVar39 = uVar38;
        do {
          plVar19 = (longlong *)func_0x000140070850(lVar21 + 0x450,uVar24);
          lVar22 = *plVar19;
          if (*(int *)(lVar22 + 0x150) == 0x5d) {
            func_0x000140070870(lVar22 + 0x188,&plStack_650);
            func_0x000140070860(lVar22 + 0x188,&piStack_5f0);
            puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,auStack_658,&piStack_5f0);
            cVar6 = func_0x000140066de0(*puVar17,0);
            while (cVar6 != '\0') {
              puVar18 = (undefined8 *)func_0x000140070440(&plStack_650);
              iVar14 = (**(code **)(*(longlong *)*puVar18 + 0xd0))();
              if (iVar14 == 0) {
                plVar19 = (longlong *)func_0x000140070440(&plStack_650);
                lVar22 = *plVar19;
                lVar40 = func_0x000140070480(lVar22 + 0x128);
                if (lVar40 != 0) {
                  puVar18 = (undefined8 *)func_0x000140070850(lVar22 + 0x128,0);
                  plVar19 = *(longlong **)*puVar18;
                  if (((plVar19 != (longlong *)0x0) &&
                      (sVar9 = (**(code **)*plVar19)(plVar19), sVar9 == 9)) &&
                     (sVar9 = (**(code **)(*plVar19 + 0x10))(plVar19), sVar9 == 0)) {
                    uVar16 = (**(code **)(*plVar19 + 0x18))(plVar19);
                    cVar6 = func_0x00014014ee90(0x14250ed48,uVar16,0x10);
                    if (cVar6 != '\0') {
                      iVar35 = *(int *)((longlong)plVar19 + 0x1c);
                    }
                  }
                }
              }
              func_0x000140070430(&plStack_650);
              puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,auStack_658,&piStack_5f0);
              cVar6 = func_0x000140066de0(*puVar17);
            }
          }
          uVar42 = (int)uVar39 + 1;
          uVar39 = (ulonglong)uVar42;
          uVar24 = (ulonglong)(int)uVar42;
          uVar23 = func_0x000140070480(lVar21 + 0x450);
        } while (uVar24 < uVar23);
      }
      lVar22 = func_0x000140070480(&lStack_590);
      uVar39 = uStack_5e8;
      if (lVar22 != 0) {
        func_0x000140070870(uStack_5e8 + 0x1318,&plStack_650);
        func_0x000140070860(uVar39 + 0x1318,&piStack_5f0);
        puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,auStack_658,&piStack_5f0);
        cVar6 = func_0x000140066de0(*puVar17,0);
        while (cVar6 != '\0') {
          plVar19 = (longlong *)func_0x000140070440(&plStack_650);
          if (*(int *)(*plVar19 + 4) == 0) {
            plVar19 = (longlong *)func_0x000140070440(&plStack_650);
            iVar46 = *(int *)(*plVar19 + 8);
            puVar18 = (undefined8 *)func_0x000140070850(&lStack_590,0);
            if ((iVar46 == *(int *)*puVar18) &&
               (plVar19 = (longlong *)func_0x000140070440(&plStack_650),
               *(int *)(*plVar19 + 0x14) == -1)) {
              puVar18 = (undefined8 *)func_0x000140070440(&plStack_650);
              lVar22 = FUN_140073e10(0x142408600,*(undefined4 *)*puVar18);
              if ((lVar22 != 0) &&
                 ((((*(longlong *)(lVar22 + 0x90) != 0 &&
                    (FUN_140ca3790(*(longlong *)(lVar22 + 0x90),asStack_630,auStack_5b0,auStack_5ac)
                    , asStack_630[0] != -30000)) &&
                   ((*(uint *)(*(longlong **)(lVar22 + 0x90) + 2) & 0xe10) == 0)) &&
                  (sVar9 = (**(code **)(**(longlong **)(lVar22 + 0x90) + 0x38))(), sVar9 == 0)))) {
                uVar16 = (**(code **)(**(longlong **)(lVar22 + 0x90) + 0x40))();
                cVar6 = func_0x00014014ee90(0x14250ed48,uVar16,0x10);
                if (cVar6 != '\0') {
                  uVar38 = (ulonglong)((int)uVar38 + 1);
                }
              }
            }
          }
          iVar46 = (int)uVar38;
          func_0x000140070430(&plStack_650);
          puVar17 = (undefined1 *)func_0x000140070450(&plStack_650,auStack_658,&piStack_5f0);
          cVar6 = func_0x000140066de0(*puVar17);
        }
      }
      if ((iVar35 == -1) || (iVar46 < 7)) goto LAB_140e536a6;
      FUN_140069780(&lStack_498,&UNK_14174e7b0);
      if (DAT_14251bdd9 != '\0') {
        bVar47 = false;
        iVar35 = func_0x000140070480(0x1423f3970);
        do {
          iVar35 = iVar35 + -1;
          if (iVar35 < 0) goto LAB_140e535d1;
          puVar18 = (undefined8 *)func_0x000140070850(0x1423f3970,(longlong)iVar35);
        } while (*(char *)*puVar18 == '\0');
        bVar47 = true;
LAB_140e535d1:
        iVar35 = func_0x000140070480(0x1423f3988);
        do {
          iVar35 = iVar35 + -1;
          if (iVar35 < 0) {
            if (!bVar47) {
              uVar38 = func_0x0001400709a0(uVar39 + 0xfc8);
              puVar37 = &UNK_14174e848;
              if (uVar38 < 2) {
                puVar37 = &UNK_14174eb10;
              }
              goto LAB_140e5363a;
            }
            break;
          }
          puVar18 = (undefined8 *)func_0x000140070850(0x1423f3988,(longlong)iVar35);
        } while (*(char *)*puVar18 == '\0');
        puVar37 = &UNK_14174e878;
LAB_140e5363a:
        func_0x000140070b90(&lStack_498,puVar37);
      }
      func_0x00014007f210(&uStack_a8);
      uStack_a8._0_4_ = 0x7015b;
      uStack_a8._4_1_ = 1;
      uStack_8c = 2000;
      FUN_1400e5250(0x142505cd0,&lStack_498,&uStack_a8);
      _DAT_1423b5ae8 = _DAT_1423b5ae8 | 0x30;
      _DAT_1426b7fd0 = _DAT_1426b7fd0 | 1;
      _DAT_1426b7fd4 = 9;
    }
    else {
LAB_140e536a6:
      if (uVar44 != 0) goto LAB_140e538bc;
      FUN_14137fd40(lVar21,asStack_630,asStack_5f4,asStack_5f8);
      func_0x000140070cc0(&lStack_498);
      func_0x000140070cc0(auStack_448);
      FUN_141349e10(lVar21,auStack_448);
      FUN_140546b30(auStack_448);
      func_0x0001400bb340(&lStack_498,auStack_448);
      func_0x000140070b90(&lStack_498,&UNK_14174eae0);
      if ((DAT_14251bdd9 == '\0') ||
         ((lVar21 = func_0x000140070480(0x1423f3970), lVar21 == 0 &&
          (lVar21 = func_0x000140070480(0x1423f3988), lVar21 == 0)))) {
        puVar37 = &UNK_14174ea30;
      }
      else {
        func_0x000140070b90(&lStack_498,&UNK_14174eb70);
        func_0x000140070b90(&lStack_498,&UNK_14174eb40);
        func_0x000140070b90(&lStack_498,&UNK_14174e9c0);
        bVar47 = false;
        iVar35 = func_0x000140070480(0x1423f3970);
        do {
          iVar35 = iVar35 + -1;
          if (iVar35 < 0) goto LAB_140e537c2;
          puVar18 = (undefined8 *)func_0x000140070850(0x1423f3970,(longlong)iVar35);
        } while (*(char *)*puVar18 == '\0');
        bVar47 = true;
LAB_140e537c2:
        iVar35 = func_0x000140070480(0x1423f3988);
        do {
          iVar35 = iVar35 + -1;
          if (iVar35 < 0) {
            if (!bVar47) {
              puVar37 = &UNK_14174eac0;
              goto LAB_140e5381a;
            }
            break;
          }
          puVar18 = (undefined8 *)func_0x000140070850(0x1423f3988,(longlong)iVar35);
        } while (*(char *)*puVar18 == '\0');
        puVar37 = &UNK_14174e960;
      }
LAB_140e5381a:
      func_0x000140070b90(&lStack_498,puVar37);
      func_0x00014007f210(&uStack_a8);
      uStack_a8._0_4_ = 0x7015a;
      uStack_a8._4_1_ = 1;
      uStack_8c = 2000;
      uStack_a8._6_2_ = asStack_630[0];
      sStack_a0 = asStack_5f4[0];
      sStack_9e = asStack_5f8[0];
      FUN_1400e5250(0x142505cd0,&lStack_498,&uStack_a8);
      _DAT_1423b5ae8 = _DAT_1423b5ae8 | 0x10;
      _DAT_1426b7fd0 = _DAT_1426b7fd0 | 1;
      _DAT_1426b7fd4 = 9;
      func_0x000140069460(auStack_448);
    }
    func_0x000140069460(&lStack_498);
  }
LAB_140e538bc:
  func_0x000140067150(&lStack_530);
  func_0x000140067150(&lStack_5d8);
  func_0x000140068790(&lStack_590);
LAB_140e53a2c:
  if (_DAT_142153ec4 == 0) {
    FUN_140e76ed0();
    FUN_140e77360();
  }
  iVar35 = func_0x0001407e1df0(0x1426be068);
  iVar35 = iVar35 + -1;
  if (-1 < iVar35) {
    lVar21 = (longlong)iVar35;
    do {
      plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
      if ((*(char *)(*plVar19 + 2) == DAT_1418f9296) &&
         (plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21),
         *(short *)(*plVar19 + 4) <= _DAT_142153ec4)) {
        puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,lVar21);
        switch(*(undefined2 *)*puVar18) {
        case 0:
          iVar46 = FUN_1408f2f80(&DAT_1423b59d8,1);
          uVar39 = 0;
          lVar22 = func_0x000140070480(&DAT_1423b3738);
          uVar38 = uVar39;
          if (lVar22 != 0) {
            do {
              plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
              iVar14 = *(int *)(*(longlong *)(*plVar19 + 8) + 4);
              plVar19 = (longlong *)func_0x000140070850(&DAT_1423b3738,uVar38);
              if (*(int *)(*plVar19 + 0xc) == iVar14) goto LAB_140e54021;
              uVar44 = (int)uVar39 + 1;
              uVar39 = (ulonglong)uVar44;
              uVar24 = func_0x000140070480(&DAT_1423b3738);
              uVar38 = (longlong)(int)uVar44;
            } while ((ulonglong)(longlong)(int)uVar44 < uVar24);
          }
          if (iVar46 == -1) {
            puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_140e5ac00(*puVar18);
          }
          break;
        case 1:
          iVar46 = FUN_1408f2f80(&DAT_1423b59d8,1);
          if (iVar46 != -1) {
code_r0x000140e53c54:
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            uVar44 = (int)*(char *)(*plVar19 + 2) + 1U & 0x80000003;
            if ((int)uVar44 < 0) {
              uVar44 = (uVar44 - 1 | 0xfffffffc) + 1;
            }
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            *(char *)(*plVar19 + 2) = (char)uVar44;
            goto LAB_140e5404c;
          }
          puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,lVar21);
          FUN_140e5eb00(*puVar18);
          break;
        case 2:
          iVar46 = FUN_1408f2f80(&DAT_1423b59d8,1);
          if (iVar46 != -1) goto code_r0x000140e53c54;
          puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,lVar21);
          FUN_140e63630(*puVar18);
          break;
        case 4:
          plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
          FUN_140e68580(*(undefined4 *)(*plVar19 + 0x14));
          break;
        case 5:
          if (_DAT_1423b38bc < 0x4ec0) {
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_140aba230(0x1423f3970,1,1,*(undefined2 *)(*plVar19 + 0x14));
          }
          else {
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_140aba230(0x1423f3970,1,0,*(undefined2 *)(*plVar19 + 0x14));
          }
          break;
        case 6:
          if (_DAT_1423b38bc < 0x4ec0) {
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_140aba230(0x1423f3970,2,1,*(undefined2 *)(*plVar19 + 0x14));
          }
          else {
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_140aba230(0x1423f3970,2,0,*(undefined2 *)(*plVar19 + 0x14));
          }
          break;
        case 7:
          plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
          FUN_140aba230(0x1423f3970,3,0,*(undefined2 *)(*plVar19 + 0x14));
          break;
        case 8:
          plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
          cVar6 = FUN_140e69370(*(undefined4 *)(*plVar19 + 0x14));
          if (cVar6 != '\0') {
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            *(undefined2 *)(*plVar19 + 4) = 0;
            if (0x2755 < _DAT_142153ec4) goto code_r0x000140e53c54;
            goto LAB_140e5404c;
          }
          break;
        case 9:
          iVar46 = FUN_1408f2f80(&DAT_1423b59d8,1);
          uVar39 = 0;
          lVar22 = func_0x000140070480(&DAT_1423b3738);
          uVar38 = uVar39;
          if (lVar22 != 0) {
            do {
              plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
              iVar14 = *(int *)(*(longlong *)(*plVar19 + 8) + 4);
              plVar19 = (longlong *)func_0x000140070850(&DAT_1423b3738,uVar38);
              if (*(int *)(*plVar19 + 0xc) == iVar14) goto LAB_140e54021;
              uVar44 = (int)uVar39 + 1;
              uVar39 = (ulonglong)uVar44;
              uVar24 = func_0x000140070480(&DAT_1423b3738);
              uVar38 = (longlong)(int)uVar44;
            } while ((ulonglong)(longlong)(int)uVar44 < uVar24);
          }
          if (iVar46 == -1) {
            puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_140e59750(*puVar18);
          }
          break;
        case 10:
          plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
          if (*(longlong *)(*plVar19 + 8) != 0) {
            lVar22 = func_0x00014007f120(0x1423f3c78,_DAT_1423b5af0);
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            psVar32 = *(short **)(*plVar19 + 8);
            if (*psVar32 == 0) {
              bVar47 = false;
              if (lVar22 == 0) {
code_r0x000140e53fd4:
                func_0x00014094fb80(psVar32);
                cVar6 = FUN_14092f450(psVar32);
                if (cVar6 == '\0') break;
                cVar6 = FUN_14092f6e0(psVar32);
                bVar47 = cVar6 == '\0';
                goto code_r0x000140e54004;
              }
              sVar9 = FUN_140101130(lVar22 + 0x1028,*(undefined4 *)(psVar32 + 2));
              cVar6 = func_0x0001409b1430(psVar32,lVar22);
              if ((ushort)(sVar9 - 3U) < 2) {
code_r0x000140e53fcb:
                if ((cVar6 != '\0') && (!bVar47)) goto code_r0x000140e53fd4;
              }
              else {
                cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,7);
                bVar47 = false;
                if (cVar7 == '\0') {
                  cVar7 = func_0x0001400735c0(*(longlong *)(psVar32 + 4) + 0x3a0,7);
                  bVar47 = false;
                  if (cVar7 != '\0') {
                    bVar47 = true;
                  }
                }
                cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,8);
                if ((cVar7 == '\0') &&
                   (cVar7 = func_0x0001400735c0(*(longlong *)(psVar32 + 4) + 0x3a0,8), cVar7 != '\0'
                   )) {
                  bVar47 = true;
                }
                cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,7);
                if ((cVar7 != '\0') &&
                   (cVar7 = func_0x0001400735c0(*(longlong *)(psVar32 + 4) + 0x3a0,7), cVar7 == '\0'
                   )) {
                  bVar47 = true;
                }
                cVar7 = func_0x0001400735c0(*(longlong *)(lVar22 + 8) + 0x3a0,8);
                if ((cVar7 != '\0') &&
                   (cVar7 = func_0x0001400735c0(*(longlong *)(psVar32 + 4) + 0x3a0,8), cVar7 == '\0'
                   )) {
                  bVar47 = true;
                }
                cVar7 = func_0x0001400735c0(*(longlong *)(psVar32 + 4) + 0x3a0,2);
                if (cVar7 != '\0') {
                  bVar47 = true;
                }
                if ((sVar9 - 1U & 0xfffb) != 0) goto code_r0x000140e53fcb;
              }
            }
            else {
              if (*psVar32 != 1) break;
              bVar47 = (*(uint *)(psVar32 + 0x4e) & 0x4000000) == 0;
code_r0x000140e54004:
              if (bVar47) break;
            }
            plVar19 = (longlong *)func_0x0001407e1de0(0x1426be068,lVar21);
            FUN_14092f9c0(*(undefined8 *)(*plVar19 + 8));
          }
        }
LAB_140e54021:
        puVar18 = (undefined8 *)func_0x0001407e1de0(0x1426be068,lVar21);
        func_0x0001415530d0(*puVar18,0x20);
        FUN_1409fde70(0x1426be068,lVar21);
      }
LAB_140e5404c:
      lVar21 = lVar21 + -1;
      iVar35 = iVar35 + -1;
    } while (-1 < iVar35);
  }
  if (((_DAT_142153ec4 == 2000) && (DAT_1418f9296 == '\x01')) || ((_DAT_1423b5ae8 & 4) != 0)) {
    if (_DAT_1423bc668 != 0) {
      FUN_1409b3550();
    }
    FUN_140e7c5d0(0x1423b36b0,0);
  }
  if (_DAT_1423aa348 % 100 == 0x1e) {
    uStack_408 = 0;
    uStack_400 = 0;
    uVar38 = 0;
    uStack_3f8 = 0;
    iVar35 = 0;
    lVar21 = func_0x000140070480(&DAT_142407548);
    uVar39 = uVar38;
    uVar24 = uVar38;
    if (lVar21 != 0) {
      do {
        plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
        if ((((*(byte *)(*plVar19 + 0x110) & 2) == 0) &&
            (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
            (*(uint *)(*plVar19 + 0x110) & 0x100) == 0)) &&
           (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
           (*(uint *)(*plVar19 + 0x110) & 0x2000000) == 0)) {
          puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
          cVar6 = func_0x0001413a7400(*puVar18);
          if (((cVar6 != '\0') &&
              (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
              *(short *)(*plVar19 + 0x334) == -1)) &&
             (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
             *(int *)(*plVar19 + 0x33c) == -1)) {
            plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
            lVar21 = _DAT_14250dfd8;
            if (*(int *)(*plVar19 + 0x338) == -1) {
              uVar44 = (int)uVar38 + 1;
              uVar38 = (ulonglong)uVar44;
              uStack_3f8 = CONCAT44(uVar44,(undefined4)uStack_3f8);
            }
            else {
              plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
              plVar19 = (longlong *)
                        func_0x000140070850(lVar21 + 0x250,(longlong)*(int *)(*plVar19 + 0x338));
              sVar9 = *(short *)(*plVar19 + 0x84);
              if ((-1 < sVar9) && (sVar9 < 5)) {
                piVar31 = (int *)((longlong)&uStack_408 + (longlong)sVar9 * 4);
                *piVar31 = *piVar31 + 1;
                uVar38 = uStack_3f8 >> 0x20;
              }
            }
          }
        }
        iVar35 = (int)uVar38;
        uVar44 = (int)uVar24 + 1;
        uVar23 = func_0x000140070480(&DAT_142407548);
        uVar39 = (longlong)(int)uVar44;
        uVar24 = (ulonglong)uVar44;
      } while ((ulonglong)(longlong)(int)uVar44 < uVar23);
    }
    sVar9 = 0;
    iVar46 = (_DAT_14250a560 * _DAT_14250a55c * 0xf) / 0x38400;
    if (iVar46 < 1) {
      iVar46 = 1;
    }
    if (iVar35 < iVar46) {
      FUN_140aba230(0x1423f3970,0,0,0xffffffff);
    }
    piVar31 = (int *)&uStack_408;
    do {
      if (*piVar31 < iVar46) {
        FUN_140aba230(0x1423f3970,0,0,sVar9);
      }
      sVar9 = sVar9 + 1;
      piVar31 = piVar31 + 1;
    } while (sVar9 < 5);
  }
  iVar35 = func_0x000140070480(&DAT_1423f3c60);
  iVar35 = iVar35 + -1;
  if (-1 < iVar35) {
    lVar22 = (longlong)iVar35;
    lVar21 = lVar22 * 8;
    do {
      piVar31 = (int *)(*(longlong *)(lVar21 + _DAT_1423f3c60) + 0x18);
      *piVar31 = *piVar31 + 1;
      if (*(int *)(*(longlong *)(lVar21 + _DAT_1423f3c60) + 0x1c) <
          *(int *)(*(longlong *)(lVar21 + _DAT_1423f3c60) + 0x18)) {
        puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
        if (*(longlong *)*puVar18 == 0) {
          func_0x000140070b90(auStack_428,&UNK_14174ec18);
          cVar6 = func_0x00014007f460(0x1423b3120,0x107,_DAT_1418be238);
          if (cVar6 != '\0') {
            func_0x00014007f210(&lStack_498);
            lStack_498 = CONCAT35(lStack_498._5_3_,0x100010107);
            uStack_47c = 2000;
            FUN_1400e5250(0x142505cd0,auStack_428,&lStack_498);
          }
        }
        else {
          plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22);
          if ((*(short *)(*plVar19 + 8) == 1) ||
             (plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22),
             *(short *)(*plVar19 + 8) == 2)) {
            plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            sVar9 = *(short *)(*plVar19 + 0x16);
            plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            if (*(short *)(*plVar19 + 0x14) == sVar9) {
              func_0x000140073b40(&lStack_498);
              lStack_498 = CONCAT44(lStack_498._4_4_,0x4a);
            }
            else {
              func_0x000140073b40(&lStack_498);
              lStack_498 = CONCAT44(lStack_498._4_4_,0x4b);
            }
            uStack_48c = 100;
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            func_0x000141408f60(*(undefined8 *)*puVar18,&lStack_498);
          }
          lVar40 = 10;
          plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22);
          if ((*(short *)(*plVar19 + 8) == 1) ||
             (plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22),
             *(short *)(*plVar19 + 8) == 2)) {
            plVar19 = (longlong *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            if (*(char *)(*plVar19 + 0x2c) == '\0') {
              puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
              FUN_140e6a590(*puVar18,0);
            }
            else {
              do {
                puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
                FUN_140e6a590(*puVar18,0);
                lVar40 = lVar40 + -1;
              } while (lVar40 != 0);
            }
          }
          FUN_141349540(**(undefined8 **)(lVar21 + _DAT_1423f3c60),auStack_428,0);
          FUN_140071040(auStack_428,&UNK_14174ec30);
          if (_DAT_1418be238 == 0) {
            bVar41 = DAT_1423b353c & 0x70;
          }
          else {
            bVar41 = DAT_1423b353c & 8;
          }
          if (bVar41 != 0) {
            func_0x00014007f210(&uStack_a8);
            uStack_a8._0_4_ = 0x10107;
            uStack_a8._4_1_ = 1;
            uStack_8c = 2000;
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            uStack_a8._6_2_ = *(short *)(*(longlong *)*puVar18 + 0xa8);
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            sStack_a0 = *(short *)(*(longlong *)*puVar18 + 0xaa);
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            sStack_9e = *(short *)(*(longlong *)*puVar18 + 0xac);
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423f3c60,lVar22);
            uStack_88 = *(undefined8 *)*puVar18;
            FUN_1400e5250(0x142505cd0,auStack_428);
          }
        }
        FUN_140a84280(&DAT_1423f3c60,iVar35);
      }
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + -8;
      iVar35 = iVar35 + -1;
    } while (-1 < iVar35);
  }
  func_0x000140070d70(&uStack_538,*(undefined8 *)(_DAT_1423bc668 + 0x1110));
  func_0x000140070d70(&uStack_4b0,*(undefined8 *)(_DAT_1423bc668 + 0x1118));
  while (uStack_538 < uStack_4b0) {
    plVar19 = (longlong *)func_0x000140070440(&uStack_538);
    if (*(int *)(*plVar19 + 0x58) != -1) {
      plVar19 = (longlong *)func_0x000140070440(&uStack_538);
      lVar21 = FUN_140073ba0(0x14250a288,*(undefined4 *)(*plVar19 + 0x58));
      if (lVar21 == 0) {
        plVar19 = (longlong *)func_0x000140070440(&uStack_538);
        *(undefined4 *)(*plVar19 + 0x58) = 0xffffffff;
      }
    }
    func_0x000140070430(&uStack_538);
  }
  FUN_1402875a0((longlong)acStack_648 + 4,0x25);
  func_0x000140070870(_DAT_1423bc668 + 0x11c8,&uStack_5e8);
  func_0x000140070860(_DAT_1423bc668 + 0x11c8,&uStack_500);
  while (uStack_5e8 < uStack_500) {
    puVar20 = (undefined4 *)func_0x000140070440(&uStack_5e8);
    puVar20 = (undefined4 *)FUN_140076b30(0x142505c40,*puVar20);
    if (puVar20 != (undefined4 *)0x0) {
      FUN_140287660(auStack_658,6,puVar20);
      if ((puVar20[0x74] != -1) && (lVar21 = FUN_140073ba0(0x14250a288), lVar21 == 0)) {
        FUN_140100f10(puVar20,0);
        puVar20[0x74] = 0xffffffff;
      }
      iVar35 = -1;
      iVar46 = func_0x000140070480(puVar20 + 0x2e);
      iVar46 = iVar46 + -1;
      if (-1 < iVar46) {
        lVar22 = (longlong)iVar46;
        lVar21 = lVar22 * 8;
        do {
          plVar19 = *(longlong **)(*(longlong *)(puVar20 + 0x2e) + lVar21);
          if ((int)plVar19[3] == puVar20[0x74]) {
            cVar6 = (**(code **)(*plVar19 + 0x50))(plVar19);
            if (cVar6 == '\0') {
              if ((iVar35 == -1) && ((int)plVar19[3] != -1)) {
                iVar35 = (int)plVar19[3];
              }
            }
            else {
              (**(code **)(*plVar19 + 0x28))(plVar19,1);
              FUN_1400bafd0(puVar20 + 0x2e,lVar22);
            }
          }
          else {
            (**(code **)(*plVar19 + 0x28))(plVar19,1);
            FUN_1400bafd0(puVar20 + 0x2e,lVar22);
          }
          lVar22 = lVar22 + -1;
          lVar21 = lVar21 + -8;
          iVar46 = iVar46 + -1;
        } while (-1 < iVar46);
      }
      if (((puVar20[0x74] != -1) && (puVar20[0x74] != iVar35)) &&
         (lVar21 = FUN_140073ba0(0x14250a288), lVar21 != 0)) {
        FUN_1400bb780(*puVar20,lVar21 + 0x80);
        puVar20[0x74] = 0xffffffff;
      }
      func_0x000140070d70(&plStack_650,*(undefined8 *)(puVar20 + 0x28),puVar20 + 0x28);
      func_0x000140070d70(&plStack_508,*(undefined8 *)(puVar20 + 0x2a),puVar20 + 0x28);
      for (; plStack_650 < plStack_508; plStack_650 = plStack_650 + 1) {
        plVar19 = (longlong *)func_0x000140070440(&plStack_650);
        iVar35 = func_0x000140070480(*plVar19 + 8);
        iVar35 = iVar35 + -1;
        if (-1 < iVar35) {
          lVar22 = (longlong)iVar35;
          lVar21 = lVar22 * 8;
          do {
            plVar19 = *(longlong **)(lVar21 + *(longlong *)(*plStack_650 + 8));
            cVar6 = (**(code **)(*plVar19 + 0x50))(plVar19);
            if (cVar6 != '\0') {
              (**(code **)(*plVar19 + 0x28))(plVar19,1);
              FUN_1400bafd0(*plStack_650 + 8,lVar22);
            }
            lVar22 = lVar22 + -1;
            lVar21 = lVar21 + -8;
            iVar35 = iVar35 + -1;
          } while (-1 < iVar35);
        }
      }
      FUN_140287730(auStack_658);
    }
    func_0x000140070980(&uStack_5e8);
  }
  FUN_140287730((longlong)acStack_648 + 4);
  FUN_1402875a0(&uStack_656,0x26);
  iVar35 = _DAT_1423aa348 / 0x4b0;
  iVar46 = _DAT_142153ec4 % 0xd20;
  uVar38 = 0;
  uVar44 = 0;
  if ((_DAT_1423aa348 == iVar35 * 0x4b0) &&
     (uVar39 = uVar38, uVar24 = uVar38,
     *(longlong *)(_DAT_1423bc668 + 0x11d0) - *(longlong *)(_DAT_1423bc668 + 0x11c8) >> 2 != 0)) {
    do {
      lVar21 = FUN_140076b30(0x142505c40,
                             *(undefined4 *)(uVar24 + *(longlong *)(_DAT_1423bc668 + 0x11c8)));
      if (lVar21 != 0) {
        FUN_140287660(auStack_658,6,lVar21);
        FUN_1411099f0(lVar21,iVar35 / 0x1c,iVar46 == 0);
        FUN_140287730(auStack_658);
      }
      uVar42 = (int)uVar39 + 1;
      uVar39 = (ulonglong)uVar42;
      uVar24 = uVar24 + 4;
    } while ((ulonglong)(longlong)(int)uVar42 <
             (ulonglong)
             (*(longlong *)(_DAT_1423bc668 + 0x11d0) - *(longlong *)(_DAT_1423bc668 + 0x11c8) >> 2))
    ;
  }
  if (iVar46 == 0) {
    _DAT_1423bbcd8 = _DAT_1423bbcd8 | 0x17ff;
  }
  if ((_DAT_1423aa348 % 0x96 == 0x46) || (iVar46 == 0)) {
    if ((_DAT_1423bbcd8 >> 0xc & 1) != 0) {
      FUN_140e84660(0x1423b9d10);
    }
    FUN_140e853a0(0x1423b36b0,iVar46 == 0);
    FUN_140e83180(0x1423b9d10);
    FUN_140e84100(0x1423b9d10);
  }
  FUN_140287730(&uStack_656);
  uVar39 = uVar38;
  uVar24 = uVar38;
  if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
    do {
      plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
      if ((*(byte *)(*plVar19 + 0x110) & 2) == 0) {
        puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
        cVar6 = func_0x0001413a7620(*puVar18);
        if (cVar6 != '\0') {
          puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
          iVar35 = FUN_141364750(*puVar18);
          if (iVar35 < 1) {
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
            iVar35 = FUN_141364890(*puVar18);
            if (iVar35 < 1) goto LAB_140e54c5c;
          }
          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
          if (0 < *(int *)(*plVar19 + 0x9cc)) {
            plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
            *(int *)(*plVar19 + 0x9cc) = *(int *)(*plVar19 + 0x9cc) + -1;
          }
          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
          if (0 < *(int *)(*plVar19 + 0x9c8)) {
            plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
            *(int *)(*plVar19 + 0x9c8) = *(int *)(*plVar19 + 0x9c8) + -1;
          }
          puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
          FUN_141363520(*puVar18);
          puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
          FUN_141366730(*puVar18);
        }
      }
LAB_140e54c5c:
      uVar42 = (int)uVar24 + 1;
      uVar39 = (longlong)(int)uVar42;
      uVar24 = (ulonglong)uVar42;
    } while ((ulonglong)(longlong)(int)uVar42 < (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
  }
  bVar41 = 0;
  if (((_DAT_1423aa348 % 200 == 0x28) && (DAT_1423b375c != '\0')) &&
     (lVar22 = func_0x000140070480(_DAT_1423bc668 + 0x1810), lVar21 = _DAT_1423bc668, lVar22 != 0))
  {
    uVar25 = func_0x000140070480(_DAT_1423bc668 + 0x1810);
    iVar35 = FUN_140073560(uVar25);
    plVar19 = (longlong *)func_0x000140070850(lVar21 + 0x1810,(longlong)iVar35);
    lVar21 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar19 + 4));
    if ((lVar21 != 0) &&
       (lVar21 = FUN_1400751a0(0x142407530,*(undefined4 *)(lVar21 + 0xd8)), lVar21 != 0)) {
      uVar42 = *(uint *)(lVar21 + 0x110);
      uVar36 = uVar44;
      if ((uVar42 >> 0x10 & 1) == 0) {
        uVar36 = (uint)(~(byte)(uVar42 >> 8) & 1);
      }
      uVar39 = uVar38;
      if ((uVar42 >> 0x19 & 1) == 0) {
        uVar39 = (ulonglong)uVar36;
      }
      bVar33 = bVar41;
      if (*(short *)(lVar21 + 0x360) == -1) {
        bVar33 = (byte)uVar39;
      }
      cVar6 = func_0x000140074830(lVar21);
      bVar34 = bVar41;
      if (cVar6 == '\0') {
        bVar34 = bVar33;
      }
      uVar42 = uVar44;
      if (*(int *)(lVar21 + 0x81c) < 1) {
        uVar42 = (uint)bVar34;
      }
      uVar36 = uVar44;
      if (*(short *)(lVar21 + 0x7fc) < 1) {
        uVar36 = uVar42;
      }
      uVar39 = uVar38;
      if (*(short *)(lVar21 + 0x7fe) < 1) {
        uVar39 = (ulonglong)uVar36;
      }
      uVar24 = uVar38;
      if (*(int *)(lVar21 + 0x820) < 1) {
        uVar24 = uVar39;
      }
      bVar33 = bVar41;
      if (*(int *)(lVar21 + 0x980) < 1) {
        bVar33 = (byte)uVar24;
      }
      iVar35 = FUN_14014efe0(lVar21);
      bVar34 = bVar41;
      if (iVar35 < 1) {
        bVar34 = bVar33;
      }
      cVar6 = func_0x0001413a7620(lVar21);
      if ((cVar6 != '\0') && (bVar34 != 0)) {
        FUN_140ca6090(lVar21);
      }
    }
  }
  if ((_DAT_142153ec4 == 0) &&
     (lVar22 = func_0x000140070480(_DAT_1423bc668 + 0x17e0), lVar21 = _DAT_1423bc668, lVar22 != 0))
  {
    uVar25 = func_0x000140070480(_DAT_1423bc668 + 0x17e0);
    iVar35 = FUN_140073560(uVar25);
    plVar19 = (longlong *)func_0x000140070850(lVar21 + 0x17e0,(longlong)iVar35);
    lVar21 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar19 + 4));
    if ((lVar21 != 0) &&
       (lVar21 = FUN_1400751a0(0x142407530,*(undefined4 *)(lVar21 + 0xd8)), lVar21 != 0)) {
      uVar42 = *(uint *)(lVar21 + 0x110);
      if ((uVar42 & 0x100) == 0) {
        uVar44 = (uint)(~(byte)(uVar42 >> 1) & 1);
      }
      uVar39 = uVar38;
      if ((uVar42 >> 0x10 & 1) == 0) {
        uVar39 = (ulonglong)uVar44;
      }
      uVar24 = uVar38;
      if ((uVar42 >> 0x19 & 1) == 0) {
        uVar24 = uVar39;
      }
      bVar33 = bVar41;
      if (*(short *)(lVar21 + 0x360) == -1) {
        bVar33 = (byte)uVar24;
      }
      cVar6 = func_0x000140074830(lVar21);
      if (cVar6 == '\0') {
        bVar41 = bVar33;
      }
      cVar6 = func_0x0001413a7620(lVar21);
      if ((cVar6 != '\0') && (bVar41 != 0)) {
        FUN_141388910(lVar21);
      }
    }
  }
  if ((_DAT_1423aa348 % 0x96 == 0x1e) &&
     (lVar21 = func_0x000140070480(_DAT_1423bc668 + 0x17f8), lVar21 != 0)) {
    if (_DAT_1423b3764 < 1) {
      _DAT_1423b3764 = 10;
      FUN_140ad7270();
    }
    else {
      _DAT_1423b3764 = _DAT_1423b3764 + -1;
    }
  }
  if (((_DAT_1423aa348 == (_DAT_1423aa348 / 4000) * 4000) && (DAT_1423b375c != '\0')) &&
     (uVar39 = uVar38, uVar24 = uVar38, _DAT_142407550 - _DAT_142407548 >> 3 != 0)) {
    do {
      plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
      if ((((*(byte *)(*plVar19 + 0x110) & 2) == 0) &&
          (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
          (*(uint *)(*plVar19 + 0x110) & 0x100) == 0)) &&
         (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
         *(short *)(*plVar19 + 0x360) == -1)) {
        puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
        cVar6 = func_0x0001413a7620(*puVar18);
        if (cVar6 != '\0') {
          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
          cVar6 = func_0x000140a99f60((int)*(short *)(*plVar19 + 0xa0));
          if (cVar6 != '\0') {
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
            cVar6 = func_0x000140074860(*puVar18,0x3a);
            if (cVar6 != '\0') {
              puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
              cVar6 = FUN_141387110(*puVar18);
              if (cVar6 == '\0') {
                plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
                if (((*(short *)(*plVar19 + 0xa0) == 0x54) ||
                    (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                    *(short *)(*plVar19 + 0xa0) == 0x56)) ||
                   (((plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                     *(short *)(*plVar19 + 0xa0) == 0x58 ||
                     (((((plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                         *(short *)(*plVar19 + 0xa0) == 0x4c ||
                         (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                         *(short *)(*plVar19 + 0xa0) == 0x4e)) ||
                        (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                        *(short *)(*plVar19 + 0xa0) == 0x50)) ||
                       ((plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                        *(short *)(*plVar19 + 0xa0) == 0x5a ||
                        (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                        *(short *)(*plVar19 + 0xa0) == 0x5c)))) ||
                      (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                      *(short *)(*plVar19 + 0xa0) == 0x5e)))) ||
                    (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39),
                    *(short *)(*plVar19 + 0xa0) == 0x52)))) {
                  plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
                  if ((*(byte *)(*plVar19 + 0x110) & 2) == 0) {
                    puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                    uVar25 = 0x28;
                  }
                  else {
                    puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                    uVar25 = 0x3c;
                  }
                }
                else {
                  plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
                  if ((*(byte *)(*plVar19 + 0x110) & 2) == 0) {
                    puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                    uVar25 = 0x14;
                  }
                  else {
                    puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                    uVar25 = 0x1e;
                  }
                }
                FUN_1413841a0(*puVar18,uVar25);
              }
            }
          }
        }
      }
      uVar44 = (int)uVar24 + 1;
      uVar39 = (longlong)(int)uVar44;
      uVar24 = (ulonglong)uVar44;
    } while ((ulonglong)(longlong)(int)uVar44 < (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
  }
  if (DAT_1423b375e != '\0') {
    if (_DAT_1423aa348 % 100 == 0x3c) {
      FUN_1402bce90();
    }
    FUN_1402bd600();
  }
  if (((DAT_1423b375c != '\0') &&
      (lVar21 = func_0x000140070480(_DAT_1423bc668 + 0x18a0), lVar21 != 0)) && (_DAT_1423b36b8 == 0)
     ) {
    FUN_140e58d30();
  }
  uVar39 = uVar38;
  if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
    do {
      plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,uVar39);
      if ((*(byte *)(*plVar19 + 0x110) & 2) == 0) {
        puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
        cVar6 = func_0x0001413a7620(*puVar18);
        if (cVar6 != '\0') {
          puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
          plStack_698 = (longlong *)CONCAT44(plStack_698._4_4_,0xffffffff);
          cVar6 = FUN_1413d2be0(*puVar18,1,_DAT_1423b5af8,0xffffffff);
          if ((cVar6 != '\0') && (_DAT_1423aa348 % 4000 == 2000)) {
            puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
            lVar21 = func_0x000140074de0(*puVar18,8);
            if (lVar21 == 0) {
              sVar9 = FUN_140e6a170();
              sVar10 = FUN_140e6a250();
              if (sVar10 < sVar9) {
                func_0x000140073b40(&lStack_498);
                lStack_498 = CONCAT44(lStack_498._4_4_,0x49);
                uStack_48c = 100;
                puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,uVar39);
                func_0x000141408f60(*puVar18,&lStack_498);
              }
            }
          }
        }
      }
      uVar44 = (int)uVar38 + 1;
      uVar38 = (ulonglong)uVar44;
      uVar39 = (longlong)(int)uVar44;
    } while ((ulonglong)(longlong)(int)uVar44 < (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
  }
  iVar35 = func_0x000140070480(&DAT_1423b3738);
  iVar35 = iVar35 + -1;
  if (-1 < iVar35) {
    lVar22 = (longlong)iVar35;
    lVar21 = lVar22 * 8;
    do {
      uVar44 = *(uint *)(*(longlong *)(lVar21 + _DAT_1423b3738) + 0x20c0);
      if ((uVar44 & 2) != 0) {
        *(uint *)(*(longlong *)(lVar21 + _DAT_1423b3738) + 0x20c0) = uVar44 & 0xfffffffd;
        puVar1 = (uint *)(*(longlong *)(lVar21 + _DAT_1423b3738) + 0x20c0);
        *puVar1 = *puVar1 | 4;
        if (*(char *)(*(longlong *)(lVar21 + _DAT_1423b3738) + 8) < '\x03') {
          plVar19 = (longlong *)func_0x000140070850(&DAT_1423b3738,lVar22);
          *(undefined1 *)(*plVar19 + 8) = 3;
          FUN_140e7b7b0(0x1423b36b0);
          FUN_140e7c260(0x1423b36b0);
          FUN_140e7bfb0(0x1423b36b0);
          FUN_140e7b680(0x1423b36b0);
          plVar19 = (longlong *)func_0x000140070850(&DAT_1423b3738,lVar22);
          FUN_140e57cd0(*plVar19 + 0x10,&DAT_1423b38c0);
          cVar6 = func_0x000140e6b1d0(0x1423b36b0);
          if (cVar6 == '\0') {
            func_0x000140ad8270();
          }
        }
      }
      uVar44 = *(uint *)(*(longlong *)(lVar21 + _DAT_1423b3738) + 0x20c0);
      if ((uVar44 & 1) != 0) {
        *(uint *)(*(longlong *)(lVar21 + _DAT_1423b3738) + 0x20c0) = uVar44 & 0xfffffffe;
        cVar6 = FUN_140e6b250(*(undefined8 *)(lVar21 + _DAT_1423b3738));
        if (cVar6 != '\0') {
          plVar19 = (longlong *)func_0x000140070850(&DAT_1423b3738,lVar22);
          if (*plVar19 != 0) {
            FUN_140e586a0(*plVar19,1);
          }
          FUN_1400bafd0(&DAT_1423b3738,lVar22);
          cVar6 = func_0x000140e6b1d0(0x1423b36b0);
          if (cVar6 == '\0') {
            func_0x000140ad8270();
          }
        }
      }
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + -8;
      iVar35 = iVar35 + -1;
    } while (-1 < iVar35);
  }
  func_0x000140070d70(&plStack_638,_DAT_142407548,&DAT_142407548);
  func_0x000140070d70(&plStack_628,_DAT_142407550,&DAT_142407548);
  if (plStack_638 != plStack_628) {
    do {
      if (((((*(byte *)(*plStack_638 + 0x110) & 2) == 0) &&
           (lVar21 = func_0x0001413cc070(), lVar21 != 0)) && (*(longlong *)(lVar21 + 0x130) != 0))
         && ((*(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x60) != 0 &&
             (iVar35 = func_0x000140070480(), 0x31 < iVar35)))) {
        iVar35 = iVar35 + -1;
        lVar22 = (longlong)iVar35;
        do {
          plVar19 = (longlong *)
                    func_0x000140070850(*(undefined8 *)(*(longlong *)(lVar21 + 0x130) + 0x60),lVar22
                                       );
          lVar40 = *plVar19;
          if (((*(int *)(lVar40 + 0x6c) <= _DAT_142167754 + -2) && (-0x32 < *(int *)(lVar40 + 0x60))
              ) && ((*(int *)(lVar40 + 0x60) < 0x32 &&
                    ((lVar26 = func_0x0001400709a0(lVar40 + 0x20), lVar26 == 0 &&
                     (*(int *)(lVar40 + 0x68) < 0x1e)))))) {
            FUN_140b64420(lVar40,1);
            FUN_1400bafd0(*(undefined8 *)(*(longlong *)(lVar21 + 0x130) + 0x60),lVar22);
          }
          lVar22 = lVar22 + -1;
          iVar35 = iVar35 + -1;
        } while (-1 < iVar35);
      }
      plStack_638 = plStack_638 + 1;
    } while (plStack_638 != plStack_628);
  }
  iVar35 = (int)(_DAT_1423b59e0 - _DAT_1423b59d8 >> 3);
  while( true ) {
    uVar44 = iVar35 - 1;
    uStack_500 = (ulonglong)uVar44;
    if ((int)uVar44 < 0) break;
    puVar18 = (undefined8 *)func_0x000140070850(&DAT_1423b59d8,(longlong)(int)uVar44);
    piVar31 = (int *)*puVar18;
    uVar11 = *(ushort *)(piVar31 + 6);
    piStack_640 = piVar31;
    if ((((uVar11 & 1) == 0) && ((uVar11 >> 8 & 1) != 0)) &&
       ((piVar31[0x24] == -1 ||
        (0x833f < ((_DAT_142167754 - piVar31[0x24]) * 0x62700 - piVar31[0x25]) + _DAT_1423aa348))))
    {
      lVar21 = func_0x00014007f120(0x1423f3c78,piVar31[1]);
      if (lVar21 != 0) {
        piVar27 = (int *)FUN_1400bb3f0(_DAT_1423b5af4,lVar21 + 0x1380);
        if (piVar27 == (int *)0x0) {
          uStack_4a8 = FUN_1415530e0(0x38);
          piVar27 = (int *)func_0x0001409132a0(uStack_4a8);
          *piVar27 = _DAT_1423b5af4;
          FUN_1400bb9b0(piVar27,lVar21 + 0x1380);
        }
        FUN_14010ac80(piVar27 + 2,piVar31 + 0x18);
      }
      uVar11 = *(ushort *)(piVar31 + 6) & 0xfeff;
      *(ushort *)(piVar31 + 6) = uVar11;
    }
    if (((uVar11 & 1) != 0) && (0 < piVar31[3])) {
      if ((uVar11 & 0x10) == 0) {
        if ((*(short *)((longlong)piVar31 + 0x1a) == 0) && (10 < piVar31[5])) {
          func_0x000140070870(&DAT_142407548,&uStack_550);
          func_0x000140070860(&DAT_142407548,auStack_4d8);
          cVar6 = func_0x0001400bafa0(&uStack_550,auStack_4d8);
          while (cVar6 == '\0') {
            plVar19 = (longlong *)func_0x000140070440(&uStack_550);
            lVar21 = *plVar19;
            if (((((*(uint *)(lVar21 + 0x110) & 0x402) != 2) &&
                 ((*(uint *)(lVar21 + 0x110) >> 0x15 & 1) != 0)) &&
                (*(int *)(lVar21 + 0x140) == piVar31[1])) &&
               (((*(longlong *)(lVar21 + 0x4d8) != 0 &&
                 (*(short *)(*(longlong *)(lVar21 + 0x4d8) + 0x14) == 0xdc)) ||
                ((*(short *)(lVar21 + 0xa0) == 0x65 || (*(short *)(lVar21 + 0xa0) == 100))))))
            goto LAB_140e55f41;
            func_0x000140070430(&uStack_550);
            cVar6 = func_0x0001400bafa0(&uStack_550,auStack_4d8);
          }
          piVar31[5] = 10;
        }
LAB_140e55f41:
        if ((0 < piVar31[5]) && (iVar35 = piVar31[5] + -1, piVar31[5] = iVar35, iVar35 == 0)) {
          iVar35 = func_0x000140070480(&DAT_142407548);
          iVar35 = iVar35 + -1;
          if (-1 < iVar35) {
            lVar21 = (longlong)iVar35;
            do {
              plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar21);
              if ((((*(byte *)(*plVar19 + 0x110) & 2) == 0) ||
                  (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar21),
                  (*(uint *)(*plVar19 + 0x110) & 0x400) != 0)) &&
                 (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar21),
                 *(int *)(*plVar19 + 0x150) == *piVar31)) {
                puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,lVar21);
                FUN_14137d920(*puVar18);
              }
              lVar21 = lVar21 + -1;
              iVar35 = iVar35 + -1;
            } while (-1 < iVar35);
          }
        }
        if (piVar31[5] < 1) {
          if ((*(byte *)(piVar31 + 6) & 1) != 0) {
            FUN_140e7b190(&DAT_1423b59d8,*piVar31);
          }
        }
        else if ((*(byte *)(piVar31 + 6) & 1) != 0) {
          if ((short)piVar31[0x15] == -30000) {
            cVar6 = FUN_140e5e9c0(0x1423b36b0,auStack_570,auStack_56c,auStack_560);
            if (cVar6 != '\0') {
              *(undefined2 *)(piVar31 + 0x15) = auStack_570[0];
              *(undefined2 *)((longlong)piVar31 + 0x56) = auStack_56c[0];
              *(undefined2 *)(piVar31 + 0x16) = auStack_560[0];
            }
            if ((short)piVar31[0x15] == -30000) {
              piVar31[5] = 1;
              goto LAB_140e57b6f;
            }
          }
          lVar21 = func_0x000140070480(piVar31 + 0xe);
          if (lVar21 != 0) {
            iVar35 = -1;
            if (((char)*(ushort *)(piVar31 + 6) < '\0') && (iVar35 = -1, piVar31[0x4d3] != -1)) {
              iVar35 = ((_DAT_142167754 - piVar31[0x4d3]) * 0x62700 - piVar31[0x4d4]) +
                       _DAT_1423aa348;
            }
            iVar46 = -1;
            if (((*(ushort *)(piVar31 + 6) & 0x400) != 0) && (iVar46 = -1, piVar31[0x4d5] != -1)) {
              iVar46 = ((_DAT_142167754 - piVar31[0x4d5]) * 0x62700 - piVar31[0x4d6]) +
                       _DAT_1423aa348;
            }
            iVar14 = func_0x000140070480(piVar31 + 0xe);
            uVar44 = iVar14 - 1;
            uStack_600 = (ulonglong)uVar44;
            if (-1 < (int)uVar44) {
              lStack_5c0 = (longlong)iVar35;
              uStack_5b8 = (ulonglong)iVar46;
              piStack_5a0 = piVar31 + 0xe;
              lVar21 = (longlong)(int)uVar44;
              do {
                uVar38 = uStack_5b8;
                lVar22 = lStack_5c0;
                iVar35 = (int)uStack_600;
                lStack_620 = lVar21;
                puVar18 = (undefined8 *)func_0x000140070850(piStack_5a0,lVar21);
                piVar31 = (int *)*puVar18;
                cVar7 = '\0';
                acStack_654[0] = '\0';
                cVar6 = '\0';
                uStack_652 = uStack_652 & 0xff00;
                piVar27 = piStack_640;
                if (((((char)*(ushort *)(piStack_640 + 6) < '\0') &&
                     ((lVar22 == -1 || (0x4af < lVar22)))) ||
                    (((*(ushort *)(piStack_640 + 6) >> 10 & 1) != 0 &&
                     ((piVar31[0x1a] == -1 &&
                      ((uVar38 == 0xffffffffffffffff || (299 < (longlong)uVar38)))))))) ||
                   ((piVar31[0x18] != -1 &&
                    (lVar22 = FUN_140069380(0x142410388), piVar27 = piStack_640, lVar22 == 0))))
                goto LAB_140e5646d;
                if (((_DAT_142167754 - piVar31[0x14]) * 0x62700 - piVar31[0x15]) + _DAT_1423aa348 <
                    0x4b0) goto LAB_140e5635d;
                iVar46 = func_0x000140070a80(piVar31 + 2);
                piVar27 = piStack_640;
                if (iVar46 < 1) goto LAB_140e5646d;
                bVar5 = false;
                bVar47 = false;
                func_0x000140070870(&DAT_142407548,auStack_548);
                func_0x000140070860(&DAT_142407548,auStack_4c0);
                cVar6 = func_0x0001400bafa0(auStack_548,auStack_4c0);
                if (cVar6 == '\0') {
                  do {
                    plVar19 = (longlong *)func_0x000140070440(auStack_548);
                    lVar21 = *plVar19;
                    if ((((*(uint *)(lVar21 + 0x110) & 0x2010002) == 0) &&
                        (*(int *)(lVar21 + 0x150) == *piStack_640)) &&
                       (*(int *)(lVar21 + 0x15c) == *piVar31)) {
                      cVar6 = FUN_14137f1f0(lVar21);
                      bVar47 = bVar5;
                      if (cVar6 != '\0') {
                        bVar47 = true;
                      }
                      lVar22 = (longlong)iVar46 + -1;
                      puVar28 = (ushort *)func_0x000140070a70(piVar31 + 0xe,lVar22);
                      uVar11 = *puVar28;
                      puVar29 = (undefined2 *)func_0x000140070a70(piVar31 + 8,lVar22);
                      uVar12 = *puVar29;
                      puVar29 = (undefined2 *)func_0x000140070a70(piVar31 + 2,lVar22);
                      piStack_690 = (int *)CONCAT62(piStack_690._2_6_,uVar12);
                      plStack_698 = (longlong *)CONCAT62(plStack_698._2_6_,*puVar29);
                      uStack_688 = uVar11;
                      cVar6 = FUN_141465cd0(0x1423f3970,*(undefined2 *)(lVar21 + 0xa8),
                                            *(undefined2 *)(lVar21 + 0xaa),
                                            *(undefined2 *)(lVar21 + 0xac));
                      cVar7 = acStack_654[0];
                      bVar5 = bVar47;
                      if (cVar6 == '\0') goto LAB_140e562f7;
                      cVar7 = '\x01';
                      acStack_654[0] = '\x01';
                      uStack_652 = CONCAT11(uStack_652._1_1_,1);
                      cVar6 = '\x01';
                    }
                    else {
LAB_140e562f7:
                      cVar6 = (char)uStack_652;
                    }
                    func_0x000140070430(auStack_548);
                    cVar8 = func_0x0001400bafa0(auStack_548,auStack_4c0);
                    piVar27 = piStack_640;
                  } while (cVar8 == '\0');
                  if (!bVar47) {
                    if (cVar7 != '\0') {
                      if (piVar31[0x18] != -1) {
                        FUN_1400bb4a0(piVar31[0x18],piStack_640 + 0x412);
                      }
                      iVar35 = (int)uStack_600;
                      lVar21 = lStack_620;
                      goto LAB_140e5646d;
                    }
                    goto LAB_140e5635d;
                  }
                  if (cVar7 == '\0') goto LAB_140e5635d;
LAB_140e56460:
                  iVar35 = (int)uStack_600;
                  lVar21 = lStack_620;
                  piVar27 = piStack_640;
LAB_140e5646d:
                  if (((((piVar31[0x1a] != -1) &&
                        (piVar30 = (int *)FUN_1403dfa50(0x14250a1f8), piVar30 != (int *)0x0)) &&
                       ((*piVar30 == 1 &&
                        ((lVar22 = *(longlong *)(piVar30 + 0x14), lVar22 != 0 && (cVar6 == '\0')))))
                       ) && ((*(byte *)(piVar27 + 6) & 0x80) == 0)) &&
                     (*(int *)(lVar22 + 0x28) == -1)) {
                    *(int *)(lVar22 + 0x28) = _DAT_142167754;
                    *(int *)(*(longlong *)(piVar30 + 0x14) + 0x2c) = _DAT_1423aa348;
                    *(int *)(*(longlong *)(piVar30 + 0x14) + 0x30) =
                         *(int *)(*(longlong *)(piVar30 + 0x14) + 0x30) + 1;
                  }
                  func_0x000140070870(&DAT_142407548,&plStack_628);
                  func_0x000140070860(&DAT_142407548,&plStack_4b8);
                  plVar19 = plStack_4b8;
                  if (plStack_628 != plStack_4b8) {
                    do {
                      lVar21 = *plStack_628;
                      if ((*(int *)(lVar21 + 0x150) == *piVar27) &&
                         (*(int *)(lVar21 + 0x15c) == *piVar31)) {
                        *(undefined4 *)(lVar21 + 0x15c) = 0xffffffff;
                        piStack_690 = (int *)CONCAT44(piStack_690._4_4_,0xffffffff);
                        plStack_698 = (longlong *)CONCAT62(plStack_698._2_6_,3);
                        FUN_141391170(lVar21,*(undefined2 *)(lVar21 + 0xa8),
                                      *(undefined2 *)(lVar21 + 0xaa),*(undefined2 *)(lVar21 + 0xac))
                        ;
                        FUN_1400ff390(lVar21,0x42);
                        plVar19 = plStack_4b8;
                      }
                      plStack_628 = plStack_628 + 1;
                    } while (plStack_628 != plVar19);
                    iVar35 = (int)uStack_600;
                    lVar21 = lStack_620;
                  }
                  FUN_140e58710(piVar31,1);
                  FUN_1400bafd0(piStack_5a0,lVar21);
                  lStack_620 = lVar21;
                }
                else {
LAB_140e5635d:
                  if (0x4af < ((_DAT_142167754 - piVar31[0x16]) * 0x62700 - piVar31[0x17]) +
                              _DAT_1423aa348) {
                    piVar31[0x16] = _DAT_142167754;
                    piVar31[0x17] = _DAT_1423aa348;
                    uStack_656 = uStack_656 & 0xff00;
                    uStack_646 = uStack_646 & 0xff00;
                    bVar47 = false;
                    lStack_540 = func_0x000140070a80(piVar31 + 2);
                    if (0 < (int)lStack_540) {
                      iVar35 = 0;
                      do {
                        lVar21 = (longlong)iVar35;
                        puVar29 = (undefined2 *)func_0x000140070a70(piVar31 + 2,lVar21);
                        uVar12 = *puVar29;
                        puVar29 = (undefined2 *)func_0x000140070a70(piVar31 + 8,lVar21);
                        uVar2 = *puVar29;
                        puVar29 = (undefined2 *)func_0x000140070a70(piVar31 + 0xe,lVar21);
                        uVar3 = *puVar29;
                        sVar9 = func_0x0001400695b0(0x1423f3970,uVar12,uVar2,uVar3);
                        if ((*(byte *)(piVar31 + 0x1b) & 1) == 0) {
                          piStack_690 = aiStack_5e0;
                          plStack_698 = (longlong *)acStack_648;
                          FUN_140564f10(0x1423f3970,uVar12,uVar2,uVar3);
                          if (aiStack_5e0[0] == 0x200000) {
                            if ('\0' < acStack_648[0]) goto LAB_140e5645a;
                          }
                          else if ((aiStack_5e0[0] == 0) && ('\x03' < acStack_648[0]))
                          goto LAB_140e5645a;
                        }
                        if (((*(byte *)(piVar31 + 0x1b) & 2) == 0) &&
                           ((((cVar6 = func_0x000140e4de70(sVar9), cVar6 != '\0' || (sVar9 == 0x1ea)
                              ) || ((iVar46 = FUN_140069760(0x1423f3970,uVar12,uVar2,uVar3),
                                    iVar46 == 3 || ((iVar46 == 4 || (iVar46 == 6)))))) ||
                            ((iVar46 == 7 &&
                             ((((cVar6 = FUN_1405c1a20(0x142410388,uVar12,uVar2,uVar3),
                                cVar6 != '\0' ||
                                (cVar6 = FUN_1405c1940(0x142410388,uVar12,uVar2,uVar3),
                                cVar6 != '\0')) ||
                               (cVar6 = FUN_1405c19b0(0x142410388,uVar12,uVar2,uVar3), cVar6 != '\0'
                               )) || (cVar6 = FUN_1405c18d0(0x142410388,uVar12,uVar2,uVar3),
                                     cVar6 != '\0')))))))) {
                          bVar47 = true;
                        }
                        if (((*(byte *)(piVar31 + 0x1b) & 4) == 0) &&
                           (cVar6 = func_0x0001402c7390(sVar9), cVar6 != '\0')) {
                          piStack_690 = (int *)((ulonglong)piStack_690 & 0xffffffff00000000);
                          plStack_698 = (longlong *)((ulonglong)plStack_698 & 0xffffffffffffff00);
                          cVar6 = FUN_1414c7110(0x1423f3970,uVar12,uVar2,uVar3);
                          if (cVar6 == '\0') {
                            cVar7 = '\x01';
                            cVar6 = (char)uStack_656;
                            goto LAB_140e567db;
                          }
                        }
                        if (((*(byte *)(piVar31 + 0x1b) & 8) == 0) &&
                           (cVar6 = FUN_1409fee20(sVar9), cVar6 != '\0')) {
                          cVar6 = '\x01';
                          cVar7 = (char)uStack_646;
                          goto LAB_140e567db;
                        }
                        iVar35 = iVar35 + 1;
                      } while (iVar35 < (int)lStack_540);
                      cVar6 = (char)uStack_646;
                      cVar7 = (char)uStack_646;
LAB_140e567db:
                      if (((bVar47) || (cVar7 != '\0')) || (cVar7 = acStack_654[0], cVar6 != '\0'))
                      {
LAB_140e5645a:
                        cVar6 = (char)uStack_652;
                        goto LAB_140e56460;
                      }
                    }
                  }
                  iVar35 = (int)uStack_600;
                  if (cVar7 != '\0') {
                    lVar21 = lStack_620;
                    piVar27 = piStack_640;
                    cVar6 = (char)uStack_652;
                    goto LAB_140e5646d;
                  }
                }
                uStack_600 = (ulonglong)(iVar35 - 1U);
                lVar21 = lStack_620 + -1;
                piVar31 = piStack_640;
                lStack_620 = lVar21;
              } while (-1 < (int)(iVar35 - 1U));
            }
            uVar11 = *(ushort *)(piVar31 + 6);
            if ((char)uVar11 < '\0') {
              piVar31[0x4d3] = _DAT_142167754;
              piVar31[0x4d4] = _DAT_1423aa348;
            }
            if ((uVar11 & 0x400) != 0) {
              piVar31[0x4d5] = _DAT_142167754;
              piVar31[0x4d6] = _DAT_1423aa348;
            }
            *(ushort *)(piVar31 + 6) = uVar11 & 0xfb7f;
          }
          cVar6 = '\0';
          acStack_654[0] = '\0';
          iVar35 = -1;
          lStack_620 = CONCAT44(lStack_620._4_4_,0xffffffff);
          func_0x000140070870(piVar31 + 0xe,&puStack_4f8);
          func_0x000140070860(piVar31 + 0xe,&puStack_4d0);
          if (puStack_4f8 != puStack_4d0) {
            do {
              piVar27 = (int *)*puStack_4f8;
              if (piVar27[0x1a] == -1) {
                if ((*(byte *)(piVar27 + 0x1b) & 0x10) == 0) {
                  cVar6 = '\x01';
                }
                else {
                  iVar35 = *piVar27;
                }
              }
              puStack_4f8 = puStack_4f8 + 1;
            } while (puStack_4f8 != puStack_4d0);
            lStack_620 = CONCAT44(lStack_620._4_4_,iVar35);
            acStack_654[0] = cVar6;
          }
          if (((*(ushort *)(piVar31 + 6) & 0x200) != 0) &&
             (0xe0f < ((_DAT_142167754 - piVar31[0x4cf]) * 0x62700 - piVar31[0x4d0]) +
                      _DAT_1423aa348)) {
            *(ushort *)(piVar31 + 6) = *(ushort *)(piVar31 + 6) & 0xfdff;
          }
          iVar46 = 0;
          uStack_5b8 = uStack_5b8 & 0xffffffff00000000;
          do {
            lVar21 = 0;
            if (iVar46 == 0) {
              if ((piVar31[0x4d1] != -1) &&
                 (0xe0f < ((_DAT_142167754 - piVar31[0x4d1]) * 0x62700 - piVar31[0x4d2]) +
                          _DAT_1423aa348)) {
                piVar31[0x4d1] = -1;
              }
              if ((iVar35 == -1) && ((*(ushort *)(piVar31 + 6) & 0x1000) != 0)) goto LAB_140e568e2;
            }
            else {
              if (iVar46 == 1) {
                if ((*(ushort *)(piVar31 + 6) & 0x200) != 0) break;
                if (cVar6 != '\0') goto LAB_140e57ad1;
              }
LAB_140e568e2:
              uStack_600 = uStack_600 & 0xffffffff00000000;
              lStack_540 = 0;
              sVar9 = (short)piVar31[0x15];
              sVar10 = *(short *)((longlong)piVar31 + 0x56);
              sVar45 = (short)piVar31[0x16];
              if (iVar46 == 0) {
                func_0x000140070870(&DAT_142407548,&lStack_608);
                func_0x000140070860(&DAT_142407548,&lStack_5a8);
                _guard_check_icall(&lStack_608);
                piVar31 = piStack_640;
                if (lStack_608 != lStack_5a8) {
                  do {
                    plVar19 = (longlong *)func_0x000140070440(&lStack_608);
                    lVar21 = *plVar19;
                    lStack_540 = lVar21;
                    if (((((*(uint *)(lVar21 + 0x110) & 0x2000002) == 0) &&
                         (*(int *)(lVar21 + 0x150) == *piStack_640)) &&
                        (*(int *)(lVar21 + 0x158) == 8)) &&
                       (FUN_14137fd40(lVar21,asStack_5f8,asStack_5f4,asStack_630),
                       asStack_5f8[0] != -30000)) {
                      uVar16 = FUN_14010c680(0x1423f3970,asStack_5f8[0],asStack_5f4[0],
                                             asStack_630[0]);
                      uStack_600 = CONCAT44(uStack_600._4_4_,uVar16);
                      sVar9 = asStack_5f8[0];
                      sVar10 = asStack_5f4[0];
                      sVar45 = asStack_630[0];
                      goto LAB_140e569f1;
                    }
                    func_0x000140070430(&lStack_608);
                    _guard_check_icall(&lStack_608);
                    piVar31 = piStack_640;
                  } while (lStack_608 != lStack_5a8);
                }
              }
              else {
LAB_140e569f1:
                uStack_656 = 0x8ad0;
                uStack_652 = 0x8ad0;
                uStack_646 = 0x8ad0;
                lStack_5c0 = CONCAT44(lStack_5c0._4_4_,0xffffffff);
                piStack_5a0 = (int *)CONCAT44(piStack_5a0._4_4_,0xffffffff);
                func_0x000140067130();
                piVar31 = piStack_640;
                sVar43 = 30000;
                iStack_598 = 0;
                iVar35 = -1;
                if (_DAT_1424103b0 - _DAT_1424103a8 >> 3 != 0) {
                  do {
                    plVar19 = *(longlong **)(_DAT_1424103a8 + (longlong)iStack_598 * 8);
                    cVar6 = (**(code **)(*plVar19 + 0xe8))(plVar19);
                    if (((cVar6 != '\0') &&
                        (iVar35 = (**(code **)(*plVar19 + 0xd0))(plVar19), iVar35 == 6)) &&
                       ((iVar35 = FUN_1400bb5a0((int)plVar19[10],piVar31 + 0x412), iVar35 == -1 &&
                        (*(int *)((longlong)plVar19 + 0x14c) != 0)))) {
                      sVar13 = FUN_1409feef0((short)plVar19[2] - sVar9,
                                             *(short *)((longlong)plVar19 + 0x1c) - sVar10,
                                             (short)plVar19[4] - sVar45);
                      if (sVar13 < sVar43) {
                        func_0x0001400708c0(&lStack_590);
                        func_0x000140070a40(&lStack_590,&iStack_598);
                        sVar43 = sVar13;
                      }
                      else if (sVar13 == sVar43) {
                        func_0x000140070a40(&lStack_590,&iStack_598);
                      }
                    }
                    iStack_598 = iStack_598 + 1;
                  } while ((ulonglong)(longlong)iStack_598 <
                           (ulonglong)(_DAT_1424103b0 - _DAT_1424103a8 >> 3));
                  iVar35 = (int)lStack_5c0;
                  iVar46 = (int)uStack_5b8;
                }
                uVar11 = uStack_656;
                if (lStack_588 - lStack_590 >> 2 != 0) {
                  uVar25 = func_0x0001400709a0(&lStack_590);
                  iVar35 = FUN_140073560(uVar25);
                  piVar31 = (int *)func_0x000140070990(&lStack_590,(longlong)iVar35);
                  lVar22 = (longlong)*piVar31;
                  plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,lVar22);
                  uVar11 = *(ushort *)(*plVar19 + 0x10);
                  uStack_656 = uVar11;
                  plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,lVar22);
                  uStack_652 = *(ushort *)(*plVar19 + 0x1c);
                  plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,lVar22);
                  uStack_646 = *(ushort *)(*plVar19 + 0x20);
                  plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8);
                  iVar35 = *(int *)(*plVar19 + 0x50);
                  lStack_5c0 = CONCAT44(lStack_5c0._4_4_,iVar35);
                  piStack_5a0 = (int *)CONCAT44(piStack_5a0._4_4_,0xffffffff);
                  iVar46 = (int)uStack_5b8;
                }
                FUN_140070d80(&lStack_590);
                if (uVar11 == 0x8ad0) {
                  func_0x000140067130();
                  piVar31 = piStack_640;
                  sVar43 = 30000;
                  iStack_594 = 0;
                  if (_DAT_1424103b0 - _DAT_1424103a8 >> 3 != 0) {
                    do {
                      plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,(longlong)iStack_594)
                      ;
                      plVar19 = (longlong *)*plVar19;
                      cVar6 = (**(code **)(*plVar19 + 0xe8))(plVar19);
                      if (((((cVar6 != '\0') &&
                            ((iVar35 = (**(code **)(*plVar19 + 0xd0))(plVar19), iVar35 == 0xd ||
                             (iVar35 = (**(code **)(*plVar19 + 0xd0))(plVar19), iVar35 == 5)))) &&
                           (iVar35 = FUN_1400bb5a0((int)plVar19[10],piVar31 + 0x412), iVar35 == -1))
                          && ((iVar35 = (**(code **)(*plVar19 + 0xd0))(plVar19), iVar35 != 0xd ||
                              (9 < *(int *)((longlong)plVar19 + 0x244))))) &&
                         ((iVar35 = (**(code **)(*plVar19 + 0xd0))(plVar19), iVar35 != 5 ||
                          (9 < *(int *)((longlong)plVar19 + 0x254))))) {
                        sVar13 = FUN_1409feef0((short)plVar19[2] - sVar9,
                                               *(short *)((longlong)plVar19 + 0x1c) - sVar10,
                                               (short)plVar19[4] - sVar45);
                        if (sVar13 < sVar43) {
                          func_0x0001400708c0(&lStack_5d8);
                          func_0x000140070a40(&lStack_5d8,&iStack_594);
                          sVar43 = sVar13;
                        }
                        else if (sVar13 == sVar43) {
                          func_0x000140070a40(&lStack_5d8,&iStack_594);
                        }
                      }
                      iStack_594 = iStack_594 + 1;
                    } while ((ulonglong)(longlong)iStack_594 <
                             (ulonglong)(_DAT_1424103b0 - _DAT_1424103a8 >> 3));
                    iVar35 = (int)lStack_5c0;
                    iVar46 = (int)uStack_5b8;
                  }
                  lVar22 = func_0x0001400709a0(&lStack_5d8);
                  uVar11 = uStack_656;
                  if (lVar22 != 0) {
                    uVar25 = func_0x0001400709a0(&lStack_5d8);
                    iVar35 = FUN_140073560(uVar25);
                    piVar31 = (int *)func_0x000140070990(&lStack_5d8,(longlong)iVar35);
                    lVar22 = (longlong)*piVar31;
                    plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,lVar22);
                    uVar11 = *(ushort *)(*plVar19 + 0x10);
                    uStack_656 = uVar11;
                    plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,lVar22);
                    uStack_652 = *(ushort *)(*plVar19 + 0x1c);
                    plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8,lVar22);
                    uStack_646 = *(ushort *)(*plVar19 + 0x20);
                    plVar19 = (longlong *)func_0x000140070850(&DAT_1424103a8);
                    iVar35 = *(int *)(*plVar19 + 0x50);
                    lStack_5c0 = CONCAT44(lStack_5c0._4_4_,iVar35);
                    piStack_5a0 = (int *)CONCAT44(piStack_5a0._4_4_,0xffffffff);
                  }
                  func_0x000140067150(&lStack_5d8);
                  if (uVar11 == 0x8ad0) {
                    func_0x000140067130(&lStack_5d8);
                    sVar43 = 30000;
                    iStack_614 = 0;
                    if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
                      do {
                        if (((*(uint *)(*(longlong *)(_DAT_142407548 + (longlong)iStack_614 * 8) +
                                       0x110) & 0x2000002) == 0) &&
                           (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548),
                           (*(uint *)(*plVar19 + 0x110) & 0x10000) == 0)) {
                          puVar18 = (undefined8 *)
                                    func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                          cVar6 = func_0x0001413a7620(*puVar18);
                          if (cVar6 != '\0') {
                            puVar18 = (undefined8 *)
                                      func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                            cVar6 = func_0x00014138ef00(*puVar18);
                            if (cVar6 == '\0') {
                              puVar18 = (undefined8 *)
                                        func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                              sVar13 = FUN_1413a7e30(*puVar18,_DAT_1423b5af8,0xffffffff);
                              if (sVar13 == 0) {
                                puVar18 = (undefined8 *)
                                          func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                                sVar13 = FUN_1413a7e30(*puVar18,_DAT_1423b5af0,0xffffffff);
                                if (sVar13 == 0) goto LAB_140e56f85;
                              }
                              plVar19 = (longlong *)
                                        func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                              sVar13 = *(short *)(*plVar19 + 0xac);
                              plVar19 = (longlong *)
                                        func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                              sVar4 = *(short *)(*plVar19 + 0xaa);
                              plVar19 = (longlong *)
                                        func_0x000140070850(&DAT_142407548,(longlong)iStack_614);
                              sVar13 = FUN_1409feef0(*(short *)(*plVar19 + 0xa8) - sVar9,
                                                     sVar4 - sVar10,sVar13 - sVar45);
                              if (sVar13 < sVar43) {
                                func_0x0001400708c0(&lStack_5d8);
                                func_0x000140070a40(&lStack_5d8,&iStack_614);
                                sVar43 = sVar13;
                              }
                              else if (sVar13 == sVar43) {
                                func_0x000140070a40(&lStack_5d8,&iStack_614);
                              }
                            }
                          }
                        }
LAB_140e56f85:
                        iStack_614 = iStack_614 + 1;
                        lVar21 = lStack_540;
                        uVar11 = uStack_656;
                      } while ((ulonglong)(longlong)iStack_614 <
                               (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
                    }
                    uVar38 = lStack_5d0 - lStack_5d8 >> 2;
                    if (uVar38 == 0) {
                      iVar35 = (int)lStack_5c0;
                    }
                    else {
                      if ((uint)uVar38 < 2) {
                        uVar44 = 0;
                      }
                      else {
                        uVar44 = FUN_140ece790();
                        uVar44 = (uVar44 + (int)((longlong)((ulonglong)uVar44 * 0x100000003) >> 0x3f
                                                ) * 0x7fffffff) /
                                 ((int)(0x7fffffff / (uVar38 & 0xffffffff)) + 1U);
                      }
                      lVar22 = *(longlong *)
                                (_DAT_142407548 +
                                (longlong)*(int *)(lStack_5d8 + (longlong)(int)uVar44 * 4) * 8);
                      uVar11 = *(ushort *)(lVar22 + 0xa8);
                      uStack_652 = *(ushort *)(lVar22 + 0xaa);
                      uStack_646 = *(ushort *)(lVar22 + 0xac);
                      lStack_5c0 = CONCAT44(lStack_5c0._4_4_,0xffffffff);
                      piStack_5a0 = (int *)CONCAT44(piStack_5a0._4_4_,
                                                    *(undefined4 *)(lVar22 + 0x130));
                      iVar35 = -1;
                      uStack_656 = uVar11;
                    }
                    FUN_140070d80(&lStack_5d8);
                    if (uVar11 == 0x8ad0) {
                      func_0x000140067130();
                      sVar43 = 30000;
                      iStack_62c = 0;
                      if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
                        do {
                          if ((((*(byte *)(*(longlong *)(_DAT_142407548 + (longlong)iStack_62c * 8)
                                          + 0x110) & 2) == 0) &&
                              (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548),
                              (*(uint *)(*plVar19 + 0x110) & 0x2000000) == 0)) &&
                             (plVar19 = (longlong *)
                                        func_0x000140070850(&DAT_142407548,(longlong)iStack_62c),
                             (*(uint *)(*plVar19 + 0x110) & 0x10000) == 0)) {
                            puVar18 = (undefined8 *)
                                      func_0x000140070850(&DAT_142407548,(longlong)iStack_62c);
                            cVar6 = func_0x0001413a7620(*puVar18);
                            if (cVar6 != '\0') {
                              puVar18 = (undefined8 *)
                                        func_0x000140070850(&DAT_142407548,(longlong)iStack_62c);
                              cVar6 = func_0x00014138ef00(*puVar18);
                              if ((cVar6 == '\0') &&
                                 (plVar19 = (longlong *)
                                            func_0x000140070850(&DAT_142407548,(longlong)iStack_62c)
                                 , *(longlong *)(*plVar19 + 0xa98) != 0)) {
                                plVar19 = (longlong *)
                                          func_0x000140070850(&DAT_142407548,(longlong)iStack_62c);
                                lVar22 = *(longlong *)(*plVar19 + 0xa98);
                                func_0x000140070870(lVar22 + 0x218,&uStack_5e8);
                                func_0x000140070860(lVar22 + 0x218,auStack_4c8);
                                cVar6 = func_0x0001400bafa0(&uStack_5e8,auStack_4c8);
                                while (cVar6 == '\0') {
                                  plVar19 = (longlong *)func_0x000140070440(&uStack_5e8);
                                  if (2 < *(int *)(*plVar19 + 4)) {
                                    plVar19 = (longlong *)
                                              func_0x000140070850(&DAT_142407548,
                                                                  (longlong)iStack_62c);
                                    sVar13 = *(short *)(*plVar19 + 0xac);
                                    plVar19 = (longlong *)
                                              func_0x000140070850(&DAT_142407548,
                                                                  (longlong)iStack_62c);
                                    sVar4 = *(short *)(*plVar19 + 0xaa);
                                    plVar19 = (longlong *)
                                              func_0x000140070850(&DAT_142407548,
                                                                  (longlong)iStack_62c);
                                    sVar13 = FUN_1409feef0(*(short *)(*plVar19 + 0xa8) - sVar9,
                                                           sVar4 - sVar10,sVar13 - sVar45);
                                    if (sVar13 < sVar43) {
                                      func_0x0001400708c0(&lStack_590);
                                      func_0x000140070a40(&lStack_590,&iStack_62c);
                                      sVar43 = sVar13;
                                    }
                                    else if (sVar13 == sVar43) {
                                      func_0x000140070a40(&lStack_590,&iStack_62c);
                                    }
                                    break;
                                  }
                                  func_0x000140070430(&uStack_5e8);
                                  cVar6 = func_0x0001400bafa0(&uStack_5e8,auStack_4c8);
                                }
                              }
                            }
                          }
                          iStack_62c = iStack_62c + 1;
                          uVar11 = uStack_656;
                        } while ((ulonglong)(longlong)iStack_62c <
                                 (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
                      }
                      if (lStack_588 - lStack_590 >> 2 != 0) {
                        uVar25 = func_0x0001400709a0(&lStack_590);
                        iVar35 = FUN_140073560(uVar25);
                        piVar31 = (int *)func_0x000140070990(&lStack_590,(longlong)iVar35);
                        lVar22 = (longlong)*piVar31;
                        plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar22);
                        uVar11 = *(ushort *)(*plVar19 + 0xa8);
                        uStack_656 = uVar11;
                        plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar22);
                        uStack_652 = *(ushort *)(*plVar19 + 0xaa);
                        plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar22);
                        uStack_646 = *(ushort *)(*plVar19 + 0xac);
                        lStack_5c0 = CONCAT44(lStack_5c0._4_4_,0xffffffff);
                        plVar19 = (longlong *)func_0x000140070850(&DAT_142407548);
                        piStack_5a0 = (int *)CONCAT44(piStack_5a0._4_4_,
                                                      *(undefined4 *)(*plVar19 + 0x130));
                      }
                      FUN_140070d80(&lStack_590);
                      if (uVar11 == 0x8ad0) {
                        func_0x000140067130();
                        sVar43 = 30000;
                        aiStack_610[0] = 0;
                        if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
                          do {
                            plVar19 = (longlong *)
                                      func_0x000140070850(&DAT_142407548,(longlong)aiStack_610[0]);
                            if ((((*(byte *)(*plVar19 + 0x110) & 2) == 0) &&
                                (plVar19 = (longlong *)
                                           func_0x000140070850(&DAT_142407548,
                                                               (longlong)aiStack_610[0]),
                                (*(uint *)(*plVar19 + 0x110) & 0x2000000) == 0)) &&
                               (plVar19 = (longlong *)
                                          func_0x000140070850(&DAT_142407548,
                                                              (longlong)aiStack_610[0]),
                               (*(uint *)(*plVar19 + 0x110) & 0x10000) == 0)) {
                              puVar18 = (undefined8 *)
                                        func_0x000140070850(&DAT_142407548,(longlong)aiStack_610[0])
                              ;
                              cVar6 = func_0x0001413a7620(*puVar18);
                              if (cVar6 != '\0') {
                                puVar18 = (undefined8 *)
                                          func_0x000140070850(&DAT_142407548,
                                                              (longlong)aiStack_610[0]);
                                cVar6 = func_0x00014138ef00(*puVar18);
                                if (cVar6 == '\0') {
                                  plVar19 = (longlong *)
                                            func_0x000140070850(&DAT_142407548,
                                                                (longlong)aiStack_610[0]);
                                  sVar13 = *(short *)(*plVar19 + 0xac);
                                  plVar19 = (longlong *)
                                            func_0x000140070850(&DAT_142407548,
                                                                (longlong)aiStack_610[0]);
                                  sVar4 = *(short *)(*plVar19 + 0xaa);
                                  plVar19 = (longlong *)
                                            func_0x000140070850(&DAT_142407548,
                                                                (longlong)aiStack_610[0]);
                                  sVar13 = FUN_1409feef0(*(short *)(*plVar19 + 0xa8) - sVar9,
                                                         sVar4 - sVar10,sVar13 - sVar45);
                                  if (sVar13 < sVar43) {
                                    func_0x0001400708c0(&lStack_5d8);
                                    func_0x000140070a40(&lStack_5d8,aiStack_610);
                                    sVar43 = sVar13;
                                  }
                                  else if (sVar13 == sVar43) {
                                    func_0x000140070a40(&lStack_5d8,aiStack_610);
                                  }
                                }
                              }
                            }
                            aiStack_610[0] = aiStack_610[0] + 1;
                            uVar11 = uStack_656;
                          } while ((ulonglong)(longlong)aiStack_610[0] <
                                   (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
                        }
                        lVar22 = func_0x0001400709a0(&lStack_5d8);
                        if (lVar22 != 0) {
                          uVar25 = func_0x0001400709a0(&lStack_5d8);
                          iVar35 = FUN_140073560(uVar25);
                          piVar31 = (int *)func_0x000140070990(&lStack_5d8,(longlong)iVar35);
                          lVar22 = (longlong)*piVar31;
                          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar22);
                          uVar11 = *(ushort *)(*plVar19 + 0xa8);
                          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar22);
                          uStack_652 = *(ushort *)(*plVar19 + 0xaa);
                          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar22);
                          uStack_646 = *(ushort *)(*plVar19 + 0xac);
                          lStack_5c0 = CONCAT44(lStack_5c0._4_4_,0xffffffff);
                          plVar19 = (longlong *)func_0x000140070850(&DAT_142407548);
                          piStack_5a0 = (int *)CONCAT44(piStack_5a0._4_4_,
                                                        *(undefined4 *)(*plVar19 + 0x130));
                        }
                        func_0x000140067150(&lStack_5d8);
                        iVar46 = (int)uStack_5b8;
                        if (uVar11 == 0x8ad0) {
                          piVar31 = piStack_640;
                          if ((int)uStack_5b8 == 1) {
                            piStack_640[5] = 1;
                          }
                          goto LAB_140e57ad1;
                        }
                        iVar35 = (int)lStack_5c0;
                        goto LAB_140e5760e;
                      }
                      iVar35 = (int)lStack_5c0;
                    }
                    iVar46 = (int)uStack_5b8;
                  }
                }
LAB_140e5760e:
                func_0x000140067130(&lStack_530);
                func_0x000140067130(&lStack_498);
                func_0x000140067130(auStack_448);
                piVar31 = piStack_640;
                lStack_660 = 0;
                if (iVar46 == 0) {
                  lStack_660 = lVar21;
                }
                piStack_668 = piStack_640;
                puStack_670 = auStack_448;
                plStack_678 = &lStack_498;
                plStack_680 = &lStack_530;
                uStack_688 = uStack_646;
                piStack_690 = (int *)CONCAT62(piStack_690._2_6_,uStack_652);
                plStack_698 = (longlong *)CONCAT62(plStack_698._2_6_,uVar11);
                cVar6 = FUN_140e87d90(0x1423f3970,sVar9,sVar10,sVar45);
                if (((lStack_528 - lStack_530 & 0xfffffffffffffffeU) == 0) || (cVar6 == '\0')) {
                  if (iVar46 == 0) {
                    piVar31[0x4d1] = _DAT_142167754;
                    piVar31[0x4d2] = _DAT_1423aa348;
                    func_0x000140067610(auStack_448);
                    func_0x000140067610(&lStack_498);
                    func_0x000140067610(&lStack_530);
                  }
                  else {
                    if (iVar46 != 1) goto LAB_140e57772;
                    *(ushort *)(piVar31 + 6) = *(ushort *)(piVar31 + 6) | 0x200;
                    piVar31[0x4cf] = _DAT_142167754;
                    piVar31[0x4d0] = _DAT_1423aa348;
                    func_0x000140067610(auStack_448);
                    func_0x000140067610(&lStack_498);
                    func_0x000140067610(&lStack_530);
                  }
                }
                else {
LAB_140e57772:
                  auStack_3f0[0] = FUN_1415530e0(0x70);
                  plStack_650 = (longlong *)func_0x0001407aa6d0(auStack_3f0[0]);
                  *(int *)plStack_650 = piVar31[0x14];
                  piVar31[0x14] = piVar31[0x14] + 1;
                  *(int *)(plStack_650 + 10) = _DAT_142167754;
                  *(int *)((longlong)plStack_650 + 0x54) = _DAT_1423aa348;
                  *(int *)(plStack_650 + 0xb) = _DAT_142167754;
                  *(int *)((longlong)plStack_650 + 0x5c) = _DAT_1423aa348;
                  *(int *)(plStack_650 + 0xc) = iVar35;
                  *(int *)((longlong)plStack_650 + 100) = (int)piStack_5a0;
                  *(int *)(plStack_650 + 0xd) = -1;
                  if (iVar46 == 0) {
                    *(uint *)((longlong)plStack_650 + 0x6c) =
                         *(uint *)((longlong)plStack_650 + 0x6c) | 0x10;
                  }
                  func_0x0001400bafb0(piVar31 + 0xe,&plStack_650);
                  FUN_1400675e0(plStack_650 + 1,&lStack_530);
                  FUN_1400675e0(plStack_650 + 4,&lStack_498);
                  FUN_1400675e0(plStack_650 + 7,auStack_448);
                  FUN_140e8ab10(plStack_650);
                  func_0x000140070870(&DAT_142407548,&plStack_638);
                  func_0x000140070860(&DAT_142407548);
                  if (plStack_638 != plStack_508) {
                    do {
                      lVar21 = *plStack_638;
                      if ((*(int *)(lVar21 + 0x150) == *piVar31) && (*(int *)(lVar21 + 0x158) != 10)
                         ) {
                        if (iVar46 == 1) {
                          if ((*(int *)(lVar21 + 0x15c) != (int)lStack_620) ||
                             ((int)lStack_620 == -1)) {
LAB_140e57924:
                            iVar35 = *(int *)(lVar21 + 0x164);
                            *(int *)(lVar21 + 0x15c) = (int)*plStack_650;
                            *(undefined8 *)(lVar21 + 0x160) = 0xffffffffffffffff;
                            piStack_690 = (int *)CONCAT44(piStack_690._4_4_,0xffffffff);
                            plStack_698 = (longlong *)CONCAT62(plStack_698._2_6_,3);
                            FUN_141391170(lVar21,*(undefined2 *)(lVar21 + 0xa8),
                                          *(undefined2 *)(lVar21 + 0xaa),
                                          *(undefined2 *)(lVar21 + 0xac));
                            FUN_1400ff390(lVar21);
                            if (iVar35 != -1) {
                              sVar9 = -1;
                              iVar35 = func_0x000140070a80(plStack_650 + 1);
                              iVar35 = iVar35 + -1;
                              piVar31 = piStack_640;
                              if (-1 < iVar35) {
                                lVar40 = (longlong)iVar35;
                                lVar22 = lVar40 * 2;
                                do {
                                  plStack_698 = (longlong *)CONCAT71(plStack_698._1_7_,1);
                                  cVar6 = FUN_1413bd210(lVar21,*(undefined2 *)
                                                                (lVar22 + plStack_650[1]),
                                                        *(undefined2 *)(lVar22 + plStack_650[4]),
                                                        *(undefined2 *)(lVar22 + plStack_650[7]));
                                  if (cVar6 != '\0') {
                                    psVar32 = (short *)func_0x000140070a70(plStack_650 + 7,lVar40);
                                    sVar10 = *(short *)(lVar21 + 0xac);
                                    sVar45 = *psVar32;
                                    psVar32 = (short *)func_0x000140070a70(plStack_650 + 4,lVar40);
                                    sVar43 = *(short *)(lVar21 + 0xaa);
                                    sVar13 = *psVar32;
                                    psVar32 = (short *)func_0x000140070a70(plStack_650 + 1,lVar40);
                                    sVar10 = FUN_140073810(*(short *)(lVar21 + 0xa8) - *psVar32,
                                                           sVar43 - sVar13,sVar10 - sVar45);
                                    if ((sVar10 < sVar9) || (sVar9 == -1)) {
                                      *(int *)(lVar21 + 0x164) = iVar35;
                                      sVar9 = sVar10;
                                    }
                                  }
                                  lVar40 = lVar40 + -1;
                                  lVar22 = lVar22 + -2;
                                  iVar35 = iVar35 + -1;
                                } while (-1 < iVar35);
                                piVar31 = piStack_640;
                                iVar46 = (int)uStack_5b8;
                              }
                            }
                            if (iVar46 == 0) {
                              lStack_620 = CONCAT44(lStack_620._4_4_,(int)*plStack_650);
                            }
                            else {
                              acStack_654[0] = '\x01';
                            }
                          }
                        }
                        else if (((iVar46 != 0) || (*(int *)(lVar21 + 0x158) == 8)) ||
                                ((iVar35 = (int)uStack_600, (int)uStack_600 != 0 &&
                                 ((FUN_14137fd40(lVar21,asStack_564,auStack_5ac,auStack_5b0),
                                  asStack_564[0] != -30000 &&
                                  (iVar14 = FUN_14010c680(0x1423f3970,asStack_564[0],auStack_5ac[0],
                                                          auStack_5b0[0]), iVar14 == iVar35))))))
                        goto LAB_140e57924;
                      }
                      plStack_638 = plStack_638 + 1;
                    } while (plStack_638 != plStack_508);
                  }
                  FUN_140070de0(auStack_448);
                  FUN_140070de0(&lStack_498);
                  FUN_140070de0(&lStack_530);
                }
              }
            }
LAB_140e57ad1:
            iVar46 = iVar46 + 1;
            uStack_5b8 = CONCAT44(uStack_5b8._4_4_,iVar46);
            cVar6 = acStack_654[0];
            iVar35 = (int)lStack_620;
          } while (iVar46 < 2);
          iVar35 = 0;
          if (0 < piVar31[0x4ce]) {
            piVar27 = piVar31 + 0x469;
            do {
              if ((*piVar27 != -1) &&
                 (0x4af < ((_DAT_142167754 - *piVar27) * 0x62700 - piVar27[0x32]) + _DAT_1423aa348))
              {
                *piVar27 = -1;
              }
              iVar35 = iVar35 + 1;
              piVar27 = piVar27 + 1;
              uVar44 = piVar31[0x4ce];
            } while (iVar35 < (int)uVar44);
            while (0 < (int)uVar44) {
              uVar38 = (ulonglong)uVar44;
              uVar44 = uVar44 - 1;
              if ((0x31 < (int)uVar44) || (piVar31[uVar38 + 0x468] != -1)) break;
              piVar31[0x4cd] = uVar44;
              piVar31[0x4ce] = uVar44;
            }
          }
        }
      }
      else {
        if (piVar31[5] == 1) {
          piVar31[5] = 0;
          iVar35 = func_0x000140070480(&DAT_142407548);
          iVar35 = iVar35 + -1;
          if (-1 < iVar35) {
            lVar21 = (longlong)iVar35;
            do {
              plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar21);
              if ((((*(byte *)(*plVar19 + 0x110) & 2) == 0) ||
                  (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar21),
                  (*(uint *)(*plVar19 + 0x110) & 0x400) != 0)) &&
                 (plVar19 = (longlong *)func_0x000140070850(&DAT_142407548,lVar21),
                 *(int *)(*plVar19 + 0x150) == *piVar31)) {
                puVar18 = (undefined8 *)func_0x000140070850(&DAT_142407548,lVar21);
                FUN_14137d920(*puVar18);
              }
              lVar21 = lVar21 + -1;
              iVar35 = iVar35 + -1;
            } while (-1 < iVar35);
          }
        }
        if (piVar31[5] < 1) {
          if ((*(byte *)(piVar31 + 6) & 1) != 0) {
            FUN_140e7b190(&DAT_1423b59d8,*piVar31);
          }
          if (piVar31[5] < 1) goto LAB_140e57b6f;
        }
        if ((*(ushort *)(piVar31 + 6) & 0x20) != 0) {
          if ((*(ushort *)(piVar31 + 6) & 0x40) == 0) {
            uVar44 = func_0x000140070480(_DAT_1423bc668 + 0x17c8);
joined_r0x000140e5597f:
            uVar44 = uVar44 - 1;
            uStack_600 = (ulonglong)uVar44;
            if (-1 < (int)uVar44) {
              plVar19 = (longlong *)
                        func_0x000140070850(_DAT_1423bc668 + 0x17c8,(longlong)(int)uVar44);
              if (((*(int *)(*plVar19 + 4) != -1) &&
                  (lVar21 = FUN_1413e54b0(0x142407530), lStack_620 = lVar21, lVar21 != 0)) &&
                 (((*(byte *)(lVar21 + 0x110) & 2) == 0 &&
                  (cVar6 = func_0x0001413a7620(lVar21), cVar6 != '\0')))) {
                func_0x000140070870(lVar21 + 0xb60,auStack_510);
                func_0x000140070860(lVar21 + 0xb60,auStack_4f0);
                puVar17 = (undefined1 *)func_0x000140070450(auStack_510,auStack_658,auStack_4f0);
                cVar6 = func_0x000140066de0(*puVar17,0);
                while (cVar6 != '\0') {
                  puVar18 = (undefined8 *)func_0x000140070440(auStack_510);
                  if (*(int *)*puVar18 == *piVar31) goto joined_r0x000140e5597f;
                  func_0x000140070430(auStack_510);
                  puVar17 = (undefined1 *)func_0x000140070450(auStack_510,auStack_658,auStack_4f0);
                  cVar6 = func_0x000140066de0(*puVar17,0);
                }
                lVar22 = func_0x00014007f120(0x1423f3c78,piVar31[1]);
                lStack_540 = lVar22;
                if (lVar22 == 0) goto LAB_140e55e5d;
                if (((piVar31[0xd] == -1) || (lVar40 = FUN_140073ba0(0x14250a288), lVar40 == 0)) ||
                   ((iVar35 = func_0x000140076740(lVar40), iVar35 != 0x11 ||
                    (piVar27 = (int *)FUN_140073e10(0x142408600,**(undefined4 **)(lVar40 + 0x130)),
                    piVar27 == (int *)0x0)))) {
                  iVar35 = 0;
                  uVar38 = 0;
                  func_0x000140070870(lVar22 + 0x1318,auStack_518);
                  func_0x000140070860(lVar22 + 0x1318,auStack_4e8);
                  puVar17 = (undefined1 *)
                            func_0x000140070450(auStack_518,(longlong)acStack_648 + 4,auStack_4e8);
                  cVar6 = func_0x000140066de0(*puVar17,0);
                  if (cVar6 == '\0') {
LAB_140e55c31:
                    func_0x000140070870(0x142407900,&uStack_558);
                    func_0x000140070860(0x142407900,auStack_4e0);
                    puVar17 = (undefined1 *)func_0x000140070450(&uStack_558,auStack_618,auStack_4e0)
                    ;
                    cVar6 = func_0x000140066de0(*puVar17,0);
                    if (cVar6 == '\0') goto LAB_140e55e5d;
                    do {
                      plVar19 = (longlong *)func_0x000140070440(&uStack_558);
                      puVar18 = (undefined8 *)*plVar19;
                      puVar20 = (undefined4 *)FUN_140cc9410(puVar18,1);
                      if ((((puVar20 != (undefined4 *)0x0) &&
                           ((*(byte *)(*(longlong *)(puVar20 + 0x24) + 0x14) & 0x10) == 0)) &&
                          ((lVar21 = FUN_1400bb3f0(*puVar20,lVar22 + 0x1318), lVar21 == 0 &&
                           ((FUN_140ca3790(puVar18,asStack_568,auStack_574,auStack_578),
                            asStack_568[0] != -30000 &&
                            (uVar44 = func_0x00014007f270(0x1423f3970,asStack_568[0],auStack_574[0],
                                                          auStack_578[0]), (uVar44 >> 9 & 1) == 0)))
                           ))) && ((*(uint *)(puVar18 + 2) & 0x400c10) == 0)) {
                        uVar12 = (**(code **)*puVar18)(puVar18);
                        switch(uVar12) {
                        case 0xb:
                        case 0xc:
                        case 0xd:
                        case 0xe:
                        case 0x12:
                        case 0x13:
                        case 0x18:
                        case 0x19:
                        case 0x1a:
                        case 0x1b:
                        case 0x1c:
                        case 0x1d:
                        case 0x24:
                        case 0x25:
                        case 0x26:
                        case 0x27:
                        case 0x28:
                        case 0x29:
                        case 0x2a:
                        case 0x2b:
                        case 0x2c:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                          alStack_3c8[uVar38] = (longlong)puVar20;
                          *(undefined1 *)((longlong)&uStack_a8 + uVar38) = 1;
                          iVar35 = iVar35 + 1;
                          uVar38 = uVar38 + 1;
                          if (99 < (longlong)uVar38) goto code_r0x000140e55d96;
                        }
                      }
                      func_0x000140070430(&uStack_558);
                      puVar17 = (undefined1 *)
                                func_0x000140070450(&uStack_558,auStack_618,auStack_4e0);
                      cVar6 = func_0x000140066de0(*puVar17,0);
                    } while (cVar6 != '\0');
code_r0x000140e55d96:
                    if (iVar35 == 0) goto LAB_140e55e5d;
                    uVar44 = (uint)uStack_600;
                    lVar21 = lStack_620;
                    lVar22 = lStack_540;
                  }
                  else {
                    do {
                      puVar18 = (undefined8 *)func_0x000140070440(auStack_518);
                      if (((((undefined4 *)*puVar18)[5] == -1) &&
                          (lVar40 = FUN_140073e10(0x142408600,*(undefined4 *)*puVar18), lVar40 != 0)
                          ) && ((*(byte *)(*(longlong *)(lVar40 + 0x90) + 0x14) & 0x10) == 0)) {
                        func_0x000140074780(&lStack_498);
                        lStack_498 = lVar40;
                        func_0x0001409f8390(&lStack_498);
                        FUN_1409f83e0(&lStack_498,lVar22 + 0x1250);
                        if (iStack_490 == _DAT_1423b5af4) {
                          alStack_3c8[uVar38] = lVar40;
                          if (99 < uVar38) {
                            FUN_141553570();
                    /* WARNING: Bad instruction - Truncating control flow here */
                            halt_baddata();
                          }
                          *(undefined1 *)((longlong)&uStack_a8 + uVar38) = 0;
                          iVar35 = iVar35 + 1;
                          uVar38 = uVar38 + 1;
                          if (99 < (longlong)uVar38) break;
                        }
                      }
                      func_0x000140070430(auStack_518);
                      puVar17 = (undefined1 *)
                                func_0x000140070450(auStack_518,(longlong)acStack_648 + 4,
                                                    auStack_4e8);
                      cVar6 = func_0x000140066de0(*puVar17,0);
                    } while (cVar6 != '\0');
                    if (iVar35 == 0) goto LAB_140e55c31;
                  }
                  iVar35 = FUN_140073560(iVar35);
                  piVar27 = (int *)alStack_3c8[iVar35];
                  if (*(char *)((longlong)&uStack_a8 + (longlong)iVar35) != '\0') {
                    plStack_698 = (longlong *)CONCAT71(plStack_698._1_7_,1);
                    FUN_1409f68d0(lVar22,piVar27,2,0xffffffff);
                  }
                  piVar31 = piStack_640;
                  if (piVar27 == (int *)0x0) goto joined_r0x000140e5597f;
                }
                auStack_3e0[0] = FUN_1415530e0(0x10);
                piStack_5f0 = (int *)func_0x000140e4dec0(auStack_3e0[0]);
                *piStack_5f0 = *piVar31;
                piStack_5f0[1] = -1;
                piStack_5f0[2] = *piVar27;
                func_0x0001400bafb0(lVar21 + 0xb60,&piStack_5f0);
                *(ushort *)(piVar31 + 6) = *(ushort *)(piVar31 + 6) | 0x40;
                piVar31[9] = _DAT_142167754;
                piVar31[10] = _DAT_1423aa348;
              }
              goto joined_r0x000140e5597f;
            }
LAB_140e55e5d:
            if ((*(byte *)(piStack_640 + 6) & 0x40) == 0) {
              FUN_140e865b0(piStack_640);
            }
          }
          else if (piVar31[0xb] == -1) {
            if (0x189bf < ((_DAT_142167754 - piVar31[9]) * 0x62700 - piVar31[10]) + _DAT_1423aa348)
            {
              FUN_140e865b0(piVar31);
            }
          }
          else if (0xe0f < ((_DAT_142167754 - piVar31[0xb]) * 0x62700 - piVar31[0xc]) +
                           _DAT_1423aa348) {
            FUN_140e865b0(piVar31);
          }
        }
      }
    }
LAB_140e57b6f:
    iVar35 = (int)uStack_500;
  }
  FUN_140e58750(0x1423b36b0);
  func_0x000140069460(auStack_428);
LAB_140e57b9f:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_6b8);
  return;
}

