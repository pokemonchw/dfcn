/* classic PE:6aea11a5:0272d000; mod-load-dialog; RVA 0x7ddab0..0x7de978 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_mod_load_dialog(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_e8 [32];
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  longlong lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_e8;
  iVar13 = *(int *)(param_1 + 8);
  lStack_a0 = param_1;
  if ((-1 < iVar13) && (iVar13 < (int)(_DAT_14265ade8 - _DAT_14265ade0 >> 3))) {
    FUN_140070b90(auStack_58,*(undefined8 *)(_DAT_14265ae60 + (longlong)iVar13 * 8));
    FUN_140070b90(auStack_78,*(undefined8 *)(_DAT_14265ae78 + (longlong)*(int *)(param_1 + 8) * 8));
    if (*(char *)(param_1 + 0xc) == '\0') {
      if (*(char *)(param_1 + 0xd) != '\0') {
        iVar7 = (param_2 + param_3) / 2;
        iVar13 = iVar7 + -0x23;
        iVar12 = iVar7 + 0x23;
        iVar8 = (iVar12 + iVar13) / 2;
        iVar1 = iVar8 + -8;
        iVar15 = iVar8 + 8;
        iStack_c8 = param_4 + -10;
        iStack_b4 = param_4 + -8;
        _DAT_1426667fc = 0x1000006;
        for (iVar14 = param_4 + -0xf; _DAT_1426667f4 = iVar13, iVar14 <= param_4 + -7;
            iVar14 = iVar14 + 1) {
          for (; _DAT_1426667f4 <= iVar12; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
            if (iVar14 == param_4 + -0xf) {
              uVar10 = _DAT_1423ed02c;
              if ((_DAT_1426667f4 != iVar13) && (uVar10 = _DAT_1423ed030, _DAT_1426667f4 == iVar12))
              {
                uVar10 = _DAT_1423ed034;
              }
            }
            else if (iVar14 == param_4 + -7) {
              uVar10 = _DAT_1423ed044;
              if ((_DAT_1426667f4 != iVar13) && (uVar10 = _DAT_1423ed048, _DAT_1426667f4 == iVar12))
              {
                uVar10 = _DAT_1423ed04c;
              }
            }
            else {
              uVar10 = _DAT_1423ed038;
              if ((_DAT_1426667f4 != iVar13) && (uVar10 = _DAT_1423ed040, _DAT_1426667f4 != iVar12))
              {
                uVar10 = _DAT_1423ed03c;
              }
            }
            _DAT_1426667f8 = iVar14;
            load_supplier_0xaf1390(0x142666770,uVar10);
          }
        }
        _DAT_1426667fc = 0x1010007;
        iVar7 = iVar7 + -0x21;
        _DAT_1426667f8 = param_4 + -0xd;
        puStack_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        _DAT_1426667f4 = iVar7;
        if (*(int *)(lStack_a0 + 0x10) == 0) {
          puStack_98 = (undefined8 *)FUN_140071d90(0x20);
          uStack_88 = 0x16;
          uStack_80 = 0x1f;
          *puStack_98 = 0x742064656c696146;
          puStack_98[1] = 0x6c6174736e69206f;
          *(undefined4 *)(puStack_98 + 2) = 0x6f6d206c;
          *(undefined2 *)((longlong)puStack_98 + 0x14) = 0x3a64;
          *(undefined1 *)((longlong)puStack_98 + 0x16) = 0;
          FUN_140af0220(0x142666770,&puStack_98);
        }
        else {
          puStack_98 = (undefined8 *)FUN_140071d90(0x20);
          uStack_88 = 0x1e;
          uStack_80 = 0x1f;
          *puStack_98 = 0x742064656c696146;
          puStack_98[1] = 0x6320646e6966206f;
          puStack_98[2] = 0x6c62697461706d6f;
          *(undefined4 *)(puStack_98 + 3) = 0x6f6d2065;
          *(undefined2 *)((longlong)puStack_98 + 0x1c) = 0x3a64;
          *(undefined1 *)((longlong)puStack_98 + 0x1e) = 0;
          FUN_140af0220(0x142666770,&puStack_98);
        }
        if (0xf < uStack_80) {
          uVar11 = uStack_80 + 1;
          puVar9 = puStack_98;
          if (0xfff < uVar11) {
            puVar9 = (undefined8 *)puStack_98[-1];
            uVar11 = uStack_80 + 0x28;
            if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
            goto LAB_1407de92b;
          }
          load_supplier_0x154de20(puVar9,uVar11);
        }
        _DAT_1426667f8 = param_4 + -0xc;
        _DAT_1426667f4 = iVar7;
        FUN_140af0220(0x142666770,auStack_58);
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x20;
        FUN_140af0220(0x142666770,&puStack_98);
        FUN_140070e10(&puStack_98);
        FUN_140af0220(0x142666770,auStack_78);
        iVar14 = iStack_b4;
        _DAT_1426667f8 = iStack_c8;
        for (iVar13 = iStack_c8; _DAT_1426667f4 = iVar1, iVar13 <= iVar14; iVar13 = iVar13 + 1) {
          for (; _DAT_1426667f4 <= iVar15; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
            if (iVar13 == _DAT_1426667f8) {
              uVar10 = _DAT_1423ece4c;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece50, _DAT_1426667f4 == iVar15))
              {
                uVar10 = _DAT_1423ece54;
              }
            }
            else if (iVar13 == iVar14) {
              uVar10 = _DAT_1423ece64;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece68, _DAT_1426667f4 == iVar15))
              {
                uVar10 = _DAT_1423ece6c;
              }
            }
            else {
              uVar10 = _DAT_1423ece58;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece60, _DAT_1426667f4 != iVar15))
              {
                uVar10 = _DAT_1423ece5c;
              }
            }
            _DAT_1426667f8 = iVar13;
            load_supplier_0xaf1390(0x142666770,uVar10);
            _DAT_1426667f8 = iStack_c8;
          }
        }
        _DAT_1426667f4 = iVar8 + -6;
        _DAT_1426667f8 = _DAT_1426667f8 + 1;
        uStack_88 = 0xd;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x206f74206b636142;
        uStack_90 = 0x656c746974;
        FUN_140af0220(0x142666770,&puStack_98);
        if (0xf < uStack_80) {
          uVar11 = uStack_80 + 1;
          puVar9 = puStack_98;
          if (0xfff < uVar11) {
            uVar11 = uStack_80 + 0x28;
            puVar9 = (undefined8 *)puStack_98[-1];
            if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
            goto LAB_1407de92b;
          }
          load_supplier_0x154de20(puVar9,uVar11);
        }
      }
    }
    else {
      iVar7 = (param_2 + param_3) / 2;
      iVar13 = iVar7 + -0x2a;
      iVar12 = iVar7 + 0x2a;
      iVar15 = iVar7 + -0x28;
      iStack_c4 = iVar7 + -0x1d;
      iVar1 = iVar7 + -0x10;
      iStack_c0 = iVar7 + -0xe;
      iStack_a8 = iVar7 + 1;
      iStack_bc = iVar7 + 3;
      iStack_a4 = iVar7 + 0x16;
      iStack_b8 = iVar7 + 0x18;
      iStack_b4 = iVar7 + 0x28;
      iStack_b0 = param_4 + -10;
      iStack_ac = param_4 + -8;
      _DAT_1426667fc = 0x1000006;
      iVar8 = param_4 + -0xf;
      iStack_c8 = iVar8;
      for (iVar14 = iVar8; _DAT_1426667f4 = iVar13, iVar14 <= param_4 + -7; iVar14 = iVar14 + 1) {
        for (; _DAT_1426667f4 <= iVar12; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
          if (iVar14 == iVar8) {
            uVar10 = _DAT_1423ed02c;
            if ((_DAT_1426667f4 != iVar13) && (uVar10 = _DAT_1423ed030, _DAT_1426667f4 == iVar12)) {
              uVar10 = _DAT_1423ed034;
            }
          }
          else if (iVar14 == param_4 + -7) {
            uVar10 = _DAT_1423ed044;
            if ((_DAT_1426667f4 != iVar13) && (uVar10 = _DAT_1423ed048, _DAT_1426667f4 == iVar12)) {
              uVar10 = _DAT_1423ed04c;
            }
          }
          else {
            uVar10 = _DAT_1423ed038;
            if ((_DAT_1426667f4 != iVar13) && (uVar10 = _DAT_1423ed040, _DAT_1426667f4 != iVar12)) {
              uVar10 = _DAT_1423ed03c;
            }
          }
          _DAT_1426667f8 = iVar14;
          load_supplier_0xaf1390(0x142666770,uVar10);
        }
      }
      iVar13 = iVar7 + -0x1f;
      _DAT_1426667fc = 0x1010007;
      _DAT_1426667f8 = iStack_c8 + 2;
      puStack_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      _DAT_1426667f4 = iVar15;
      puStack_98 = (undefined8 *)FUN_140071d90(0x30);
      uStack_88 = 0x29;
      uStack_80 = 0x2f;
      *puStack_98 = 0x6f6320726577654e;
      puStack_98[1] = 0x656c62697461706d;
      puStack_98[2] = 0x6e6f697372657620;
      puStack_98[3] = 0x20646f6d20666f20;
      puStack_98[4] = 0x6465746365746564;
      *(undefined1 *)(puStack_98 + 5) = 0x3a;
      *(undefined1 *)((longlong)puStack_98 + 0x29) = 0;
      FUN_140af0220(0x142666770,&puStack_98);
      if (0xf < uStack_80) {
        uVar11 = uStack_80 + 1;
        puVar9 = puStack_98;
        if (0xfff < uVar11) {
          uVar11 = uStack_80 + 0x28;
          puVar9 = (undefined8 *)puStack_98[-1];
          if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
          goto LAB_1407de92b;
        }
        load_supplier_0x154de20(puVar9,uVar11);
      }
      _DAT_1426667f8 = iStack_c8 + 3;
      _DAT_1426667f4 = iVar15;
      FUN_140af0220(0x142666770,auStack_58);
      uStack_90 = 0;
      uStack_88 = 1;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x20;
      FUN_140af0220(0x142666770,&puStack_98);
      FUN_140070e10(&puStack_98);
      lVar6 = lStack_a0;
      iVar14 = iStack_b0;
      iVar8 = iStack_b0;
      iVar12 = iStack_ac;
      if (*(longlong *)(lStack_a0 + 0x18) != 0) {
        FUN_140af0220(0x142666770,*(longlong *)(lStack_a0 + 0x18) + 0x68);
        uStack_88 = 0xc;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x7520657661732820;
        uStack_90 = 0x20736573;
        FUN_140af0220(0x142666770,&puStack_98);
        FUN_140070e10(&puStack_98);
        FUN_140af0220(0x142666770,auStack_78);
        if (*(longlong *)(lVar6 + 0x20) == 0) {
          uStack_88 = 0xb;
          uStack_80 = 0xf;
          puStack_98 = (undefined8 *)0x6f6620746f6e202c;
          uStack_90 = 0x646e75;
          FUN_140af0220(0x142666770,&puStack_98);
          if (0xf < uStack_80) {
            uVar11 = uStack_80 + 1;
            puVar9 = puStack_98;
            if (0xfff < uVar11) {
              uVar11 = uStack_80 + 0x28;
              puVar9 = (undefined8 *)puStack_98[-1];
              if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
              goto LAB_1407de92b;
            }
            load_supplier_0x154de20(puVar9,uVar11);
          }
        }
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x29;
        FUN_140af0220(0x142666770,&puStack_98);
        FUN_140070e10(&puStack_98);
        iVar14 = iStack_b0;
        iVar8 = iStack_b0;
        iVar12 = iStack_ac;
      }
      for (; iVar5 = iStack_ac, iVar4 = iStack_b0, bVar3 = iVar14 <= iStack_ac,
          _DAT_1426667f4 = iVar15, iStack_ac = iVar12, bVar3; iVar14 = iVar14 + 1) {
        for (; iStack_b0 = iVar8, _DAT_1426667f4 <= iVar13; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
          if (iVar14 == iVar4) {
            uVar10 = _DAT_1423ece28;
            if ((_DAT_1426667f4 != iVar15) && (uVar10 = _DAT_1423ece2c, _DAT_1426667f4 == iVar13)) {
              uVar10 = _DAT_1423ece30;
            }
          }
          else if (iVar14 == iVar5) {
            uVar10 = _DAT_1423ece40;
            if ((_DAT_1426667f4 != iVar15) && (uVar10 = _DAT_1423ece44, _DAT_1426667f4 == iVar13)) {
              uVar10 = _DAT_1423ece48;
            }
          }
          else {
            uVar10 = _DAT_1423ece34;
            if ((_DAT_1426667f4 != iVar15) && (uVar10 = _DAT_1423ece3c, _DAT_1426667f4 != iVar13)) {
              uVar10 = _DAT_1423ece38;
            }
          }
          _DAT_1426667f8 = iVar14;
          load_supplier_0xaf1390(0x142666770,uVar10);
          iVar8 = iStack_b0;
        }
        iVar8 = iStack_b0;
        iVar12 = iStack_ac;
        iStack_ac = iVar5;
        iStack_b0 = iVar4;
      }
      _DAT_1426667f4 = iVar7 + -0x26;
      iVar13 = iStack_b0 + 1;
      uStack_90 = 0;
      uStack_88 = 6;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x657461647055;
      _DAT_1426667f8 = iVar13;
      iStack_b0 = iVar8;
      FUN_140af0220(0x142666770,&puStack_98);
      FUN_140070e10(&puStack_98);
      _DAT_1426667f4 = iStack_c4;
      for (iVar14 = iVar4; iVar7 = _DAT_1426667f4, iVar14 <= iVar5; iVar14 = iVar14 + 1) {
        for (; _DAT_1426667f4 <= iVar1; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
          if (iVar14 == iVar4) {
            uVar10 = _DAT_1423ece28;
            if ((_DAT_1426667f4 != iVar7) && (uVar10 = _DAT_1423ece2c, _DAT_1426667f4 == iVar1)) {
              uVar10 = _DAT_1423ece30;
            }
          }
          else if (iVar14 == iVar5) {
            uVar10 = _DAT_1423ece40;
            if ((_DAT_1426667f4 != iVar7) && (uVar10 = _DAT_1423ece44, _DAT_1426667f4 == iVar1)) {
              uVar10 = _DAT_1423ece48;
            }
          }
          else {
            uVar10 = _DAT_1423ece34;
            if ((_DAT_1426667f4 != iVar7) && (uVar10 = _DAT_1423ece3c, _DAT_1426667f4 != iVar1)) {
              uVar10 = _DAT_1423ece38;
            }
          }
          _DAT_1426667f8 = iVar14;
          load_supplier_0xaf1390(0x142666770,uVar10);
          iVar7 = iStack_c4;
        }
        _DAT_1426667f4 = iVar7;
      }
      _DAT_1426667f4 = iStack_c4 + 2;
      uStack_88 = 10;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x6120657461647055;
      uStack_90 = 0x6c6c;
      _DAT_1426667f8 = iVar13;
      FUN_140af0220(0x142666770,&puStack_98);
      FUN_140070e10(&puStack_98);
      iVar15 = iStack_a8;
      iVar1 = iStack_c0;
      iVar14 = iVar4;
      iVar7 = iStack_b8;
      iVar8 = iStack_b4;
      iVar12 = iVar4;
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        for (; _DAT_1426667f4 = iVar1, iVar14 <= iVar5; iVar14 = iVar14 + 1) {
          for (; _DAT_1426667f4 <= iVar15; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
            if (iVar14 == iVar4) {
              uVar10 = _DAT_1423ece04;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece08, _DAT_1426667f4 == iVar15))
              {
                uVar10 = _DAT_1423ece0c;
              }
            }
            else if (iVar14 == iVar5) {
              uVar10 = _DAT_1423ece1c;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece20, _DAT_1426667f4 == iVar15))
              {
                uVar10 = _DAT_1423ece24;
              }
            }
            else {
              uVar10 = _DAT_1423ece10;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece18, _DAT_1426667f4 != iVar15))
              {
                uVar10 = _DAT_1423ece14;
              }
            }
            _DAT_1426667f8 = iVar14;
            load_supplier_0xaf1390(0x142666770,uVar10);
            iVar1 = iStack_c0;
          }
        }
        _DAT_1426667f4 = iStack_c0 + 2;
        uStack_88 = 0xc;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x70752074276e6f44;
        uStack_90 = 0x65746164;
        _DAT_1426667f8 = iVar13;
        FUN_140af0220(0x142666770,&puStack_98);
        FUN_140070e10(&puStack_98);
        iVar7 = iStack_a4;
        iVar1 = iStack_bc;
        for (iVar14 = iVar4; _DAT_1426667f4 = iVar1, iVar14 <= iVar5; iVar14 = iVar14 + 1) {
          for (; _DAT_1426667f4 <= iVar7; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
            if (iVar14 == iVar4) {
              uVar10 = _DAT_1423ece04;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece08, _DAT_1426667f4 == iVar7)) {
                uVar10 = _DAT_1423ece0c;
              }
            }
            else if (iVar14 == iVar5) {
              uVar10 = _DAT_1423ece1c;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece20, _DAT_1426667f4 == iVar7)) {
                uVar10 = _DAT_1423ece24;
              }
            }
            else {
              uVar10 = _DAT_1423ece10;
              if ((_DAT_1426667f4 != iVar1) && (uVar10 = _DAT_1423ece18, _DAT_1426667f4 != iVar7)) {
                uVar10 = _DAT_1423ece14;
              }
            }
            _DAT_1426667f8 = iVar14;
            load_supplier_0xaf1390(0x142666770,uVar10);
            iVar1 = iStack_bc;
          }
        }
        _DAT_1426667f4 = iStack_bc + 2;
        puStack_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        _DAT_1426667f8 = iVar13;
        puStack_98 = (undefined8 *)FUN_140071d90(0x20);
        uStack_88 = 0x10;
        uStack_80 = 0x1f;
        *puStack_98 = 0x70752074276e6f44;
        puStack_98[1] = 0x796e612065746164;
        *(undefined1 *)(puStack_98 + 2) = 0;
        FUN_140af0220(0x142666770,&puStack_98);
        iVar7 = iStack_b8;
        iVar8 = iStack_b4;
        if (0xf < uStack_80) {
          if (0xfff < uStack_80 + 1) {
            uVar11 = uStack_80 + 0x28;
            puVar9 = (undefined8 *)puStack_98[-1];
            if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9))) {
LAB_1407de92b:
              _invalid_parameter_noinfo_noreturn(puVar9,uVar11);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x154de20();
          iVar7 = iStack_b8;
          iVar8 = iStack_b4;
        }
      }
      for (; iVar1 = iStack_b4, iStack_b4 = iVar8, _DAT_1426667f4 = iVar7, iVar12 <= iVar5;
          iVar12 = iVar12 + 1) {
        for (; _DAT_1426667f4 <= iVar1; _DAT_1426667f4 = _DAT_1426667f4 + 1) {
          if (iVar12 == iVar4) {
            uVar10 = _DAT_1423ece4c;
            if ((_DAT_1426667f4 != iVar7) && (uVar10 = _DAT_1423ece50, _DAT_1426667f4 == iVar1)) {
              uVar10 = _DAT_1423ece54;
            }
          }
          else if (iVar12 == iVar5) {
            uVar10 = _DAT_1423ece64;
            if ((_DAT_1426667f4 != iVar7) && (uVar10 = _DAT_1423ece68, _DAT_1426667f4 == iVar1)) {
              uVar10 = _DAT_1423ece6c;
            }
          }
          else {
            uVar10 = _DAT_1423ece58;
            if ((_DAT_1426667f4 != iVar7) && (uVar10 = _DAT_1423ece60, _DAT_1426667f4 != iVar1)) {
              uVar10 = _DAT_1423ece5c;
            }
          }
          _DAT_1426667f8 = iVar12;
          load_supplier_0xaf1390(0x142666770,uVar10);
          iVar7 = iStack_b8;
        }
        iVar8 = iStack_b4;
        iStack_b4 = iVar1;
      }
      _DAT_1426667f4 = iStack_b8 + 2;
      uStack_88 = 0xd;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x206f74206b636142;
      uStack_90 = 0x656c746974;
      _DAT_1426667f8 = iVar13;
      FUN_140af0220(0x142666770,&puStack_98);
      FUN_140070e10(&puStack_98);
    }
    FUN_140070e10(auStack_78);
    FUN_140070e10(auStack_58);
  }
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_e8);
  return;
}

