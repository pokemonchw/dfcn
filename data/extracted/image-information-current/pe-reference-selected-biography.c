/* reference PE:6aea05a1:02734000; selected-biography; RVA 0xc43530..0xc44b68 */

/* WARNING: Switch with 1 destination removed at 0x000140c43f37 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_selected_biography
               (longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  int iVar8;
  char cVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined8 ****ppppuVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined8 ****ppppuVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  short sVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_248 [32];
  undefined2 uStack_228;
  ushort uStack_220;
  longlong lStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined4 uStack_1a2;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  undefined1 auStack_70 [32];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_248;
  uStack_208 = param_5;
  iVar26 = 0;
  iVar27 = 0;
  iVar12 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) + -1;
  lVar19 = (longlong)iVar12;
  if (-1 < iVar12) {
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar19 * 8);
    iVar26 = 0;
    iVar27 = 0;
    do {
      if ((*(short *)(*plVar14 + 2) == *(short *)(param_3 + 2)) &&
         (iVar26 = iVar26 + 1, 0 < *(int *)(*plVar14 + 0x10))) {
        iVar27 = iVar27 + 1;
      }
      plVar14 = plVar14 + -1;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  auStack_1f8[0] = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uVar13 = 0xffffffff;
  uStack_1e0 = 0xffffffffffffffff;
  uStack_1d8 = 0xffffffffffffffff;
  uStack_1d0 = 0xffffffffffffffff;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 1;
  uStack_1b0 = 0xffffffff;
  uStack_1ac = 0xffff;
  uStack_1a8 = 0xffffffff;
  uStack_1a4 = 0xff;
  uStack_1a2 = 0xffff;
  uStack_19e = 0xffff;
  uStack_19c = 0xffffffff;
  uStack_198 = 0xffffffffffffffff;
  uStack_190 = 0xffffffffffffffff;
  uStack_188 = 0xffffffffffffffff;
  uStack_180 = 0xffffffffffffffff;
  uStack_178 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0xffffffffffffffff;
  uStack_150 = 0xffffffffffffffff;
  uStack_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  lStack_218 = param_1;
  uStack_210 = param_4;
  if (*(char *)(param_3 + 0xaa) == '\0') {
    FUN_140071040(param_2,"This nameless being",0x13);
  }
  else {
    uStack_220 = 1;
    uStack_228 = 0;
    FUN_140baabd0(param_1,param_2,param_4,auStack_1f8);
  }
  if (_DAT_1418be238 == 3) {
    pcVar21 = " was ";
    uVar30 = 5;
  }
  else {
    pcVar21 = " is ";
    uVar30 = 4;
  }
  FUN_140071040(param_2,pcVar21,uVar30);
  if (*(int *)(param_3 + 0xd0) < 1) {
LAB_140c43928:
    lVar19 = 0;
    if (*(longlong *)(param_3 + 0x130) != 0) {
      lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x130) + 0x48);
      bVar33 = false;
      if (lVar19 != 0) {
        bVar33 = *(int *)(lVar19 + 0x144) != -1;
      }
      if (bVar33) {
        iVar26 = *(int *)(lVar19 + 0x140);
        lVar16 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
        if ((lVar16 != 0) && (iVar26 != -1)) {
          iVar27 = 0;
          iVar12 = (int)lVar16 + -1;
          if (-1 < iVar12) {
            do {
              iVar17 = iVar27 + iVar12 >> 1;
              lVar16 = *(longlong *)(_DAT_14251c198 + (longlong)iVar17 * 8);
              iVar18 = *(int *)(lVar16 + 0xe0);
              if (iVar18 == iVar26) {
                if (lVar16 != 0) goto LAB_140c439ef;
                break;
              }
              iVar8 = iVar17 + -1;
              if (iVar18 < iVar26) {
                iVar8 = iVar12;
                iVar27 = iVar17 + 1;
              }
              iVar12 = iVar8;
            } while (iVar27 <= iVar12);
          }
        }
        FUN_140071040(param_2,"a ",2);
LAB_140c439ef:
        puVar25 = (undefined8 *)(lVar19 + 0x150);
        if (0xf < *(ulonglong *)(lVar19 + 0x168)) {
          puVar25 = (undefined8 *)*puVar25;
        }
        FUN_140071040(param_2,puVar25,*(undefined8 *)(lVar19 + 0x160));
        FUN_140071040(param_2,", animated by unknown forces",0x1c);
        goto LAB_140c43bf3;
      }
    }
    uVar30 = FUN_140071040(param_2,"a ",2);
    if (((0 < *(int *)(param_3 + 0xd0)) && (**(char **)(param_3 + 200) < '\0')) &&
       ((lVar19 == 0 || (*(char *)(lVar19 + 0x88) == '\0')))) {
      uVar30 = load_supplier_0x70b90(param_2,"ghostly ");
    }
    uStack_220 = uStack_220 & 0xff00;
    uStack_228 = *(undefined2 *)(param_3 + 4);
    FUN_140bacb90(uVar30,param_2,(int)*(short *)(param_3 + 2),0);
    if ((lVar19 != 0) && (*(char *)(lVar19 + 0x88) != '\0')) {
      FUN_140071040(param_2," ",1);
      plVar14 = (longlong *)(lVar19 + 0x90);
      if (0xf < *(ulonglong *)(lVar19 + 0xa8)) {
        plVar14 = (longlong *)*plVar14;
      }
      FUN_140071040(param_2,plVar14,*(undefined8 *)(lVar19 + 0xa0));
    }
    if (*(int *)(param_3 + 0x10) < 1) {
      sVar10 = *(short *)(param_3 + 2);
      if ((-1 < sVar10) &&
         ((ulonglong)(longlong)sVar10 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
        lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar10 * 8);
        if ((*(int *)(lVar19 + 0x1b0) < 2) ||
           ((*(byte *)(*(longlong *)(lVar19 + 0x1a8) + 1) & 1) == 0)) {
          bVar33 = false;
        }
        else {
          bVar33 = true;
        }
        if (bVar33) goto LAB_140c43bf3;
      }
      load_supplier_0x70b90(param_2,".  ");
      load_supplier_0x70cc0(&pppuStack_d0);
      FUN_140abe1d0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,1);
      load_supplier_0xbb340(param_2,&pppuStack_d0);
      pcVar21 = " is";
      if (_DAT_1418be238 == 3) {
        pcVar21 = " was";
      }
      load_supplier_0x70b90(param_2,pcVar21);
      if (iVar27 < 1) {
        if (iVar26 < 2) {
LAB_140c44264:
          pcVar21 = " the only one of ";
        }
        else {
          pcVar21 = " one of the only ones of ";
        }
      }
      else if (iVar26 - iVar27 < 2) {
        pcVar21 = " the first of ";
      }
      else {
        if (iVar26 < 2) goto LAB_140c44264;
        pcVar21 = " one of the first of ";
      }
      load_supplier_0x70b90(param_2,pcVar21);
      FUN_140abe2f0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,0);
      load_supplier_0xbb340(param_2,&pppuStack_d0);
      load_supplier_0x70b90(param_2," kind");
    }
    else {
      uVar30 = FUN_140071040(param_2," born in ",9);
      FUN_140baa300(uVar30,param_2,*(undefined4 *)(param_3 + 0x10),0xffffffff);
      FUN_140071040(param_2,".  ",3);
      plVar2 = *(longlong **)(param_3 + 0x120);
      for (plVar14 = *(longlong **)(param_3 + 0x118); plVar14 < plVar2; plVar14 = plVar14 + 1) {
        puVar25 = (undefined8 *)*plVar14;
        sVar10 = (**(code **)*puVar25)(puVar25);
        if (sVar10 == 0) {
          iVar26 = *(int *)(puVar25 + 1);
          goto LAB_140c43b44;
        }
      }
      iVar26 = -1;
LAB_140c43b44:
      plVar2 = *(longlong **)(param_3 + 0x120);
      for (plVar14 = *(longlong **)(param_3 + 0x118); plVar14 < plVar2; plVar14 = plVar14 + 1) {
        puVar25 = (undefined8 *)*plVar14;
        sVar10 = (**(code **)*puVar25)(puVar25);
        if (sVar10 == 1) {
          iVar27 = *(int *)(puVar25 + 1);
          goto LAB_140c43b76;
        }
      }
      iVar27 = -1;
LAB_140c43b76:
      if ((iVar26 != -1) || (iVar27 != -1)) {
        uStack_108 = 0;
        uStack_100 = 0;
        uVar24 = 0;
        uVar22 = 0;
        uStack_f8 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uVar32 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
        if ((uVar32 == 0) || (iVar26 == -1)) {
          bVar33 = uVar32 != 0;
          uVar28 = 0;
          uVar29 = uVar24;
          uVar32 = uVar32 & 0xffffffff;
          if (bVar33) goto LAB_140c43d32;
        }
        else {
          iVar12 = (int)uVar32 + -1;
          uVar22 = uVar24;
          uVar28 = uVar24;
          if (-1 < iVar12) {
            do {
              iVar17 = (int)uVar22 + iVar12 >> 1;
              uVar28 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar17 * 8);
              iVar18 = *(int *)(uVar28 + 0xe0);
              if (iVar18 == iVar26) {
                uVar32 = uVar32 & 0xffffffff;
                break;
              }
              iVar8 = iVar17 + -1;
              if (iVar18 < iVar26) {
                uVar22 = (ulonglong)(iVar17 + 1);
                iVar8 = iVar12;
              }
              iVar12 = iVar8;
              uVar28 = uVar24;
            } while ((int)uVar22 <= iVar12);
          }
LAB_140c43d32:
          uVar22 = uVar24;
          uVar29 = uVar28;
          if ((iVar27 != -1) && (iVar12 = (int)uVar32 + -1, -1 < iVar12)) {
            do {
              iVar18 = (int)uVar24 + iVar12 >> 1;
              uVar22 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar18 * 8);
              if (*(int *)(uVar22 + 0xe0) == iVar27) goto LAB_140c43d6b;
              iVar17 = iVar18 + -1;
              if (*(int *)(uVar22 + 0xe0) < iVar27) {
                uVar24 = (ulonglong)(iVar18 + 1);
                iVar17 = iVar12;
              }
              iVar12 = iVar17;
            } while ((int)uVar24 <= iVar17);
            uVar22 = 0;
          }
        }
LAB_140c43d6b:
        if ((uVar29 == 0) && (uVar22 == 0)) {
          uVar22 = (ulonglong)*(ushort *)(param_3 + 2);
          cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar22,0x43);
          if ((cVar9 != '\0') &&
             (cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar22 & 0xffff,0x44), cVar9 != '\0')) {
            cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar22 & 0xffff,0x45);
            if (cVar9 != '\0') {
              load_supplier_0x70cc0(&pppuStack_d0);
              FUN_140abe1d0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,1);
              load_supplier_0xbb340(param_2,&pppuStack_d0);
              pcVar21 = " is";
              if (_DAT_1418be238 == 3) {
                pcVar21 = " was";
              }
              load_supplier_0x70b90(param_2,pcVar21);
              load_supplier_0x70b90(param_2," of unknown parentage");
              FUN_140070e80(&pppuStack_d0);
            }
          }
        }
        else {
          uStack_c8 = 0;
          uStack_b8 = 0xf;
          if (*(char *)(param_3 + 6) == '\x01') {
            uVar11 = 0x6568;
LAB_140c43e99:
            pppuStack_d0 = (undefined8 ***)(ulonglong)uVar11;
            uStack_c0 = 2;
          }
          else {
            if (*(char *)(param_3 + 6) != '\0') {
              uVar11 = 0x7469;
              goto LAB_140c43e99;
            }
            uStack_c0 = 3;
            pppuStack_d0 = (undefined8 ****)0x656873;
          }
          pcVar21 = (char *)load_supplier_0xfcbe0(&pppuStack_d0,0);
          *pcVar21 = *pcVar21 + -0x61;
          pcVar21 = (char *)load_supplier_0xfcbe0(&pppuStack_d0);
          *pcVar21 = *pcVar21 + 'A';
          load_supplier_0xbb340(param_2,&pppuStack_d0);
          pcVar21 = " is the ";
          if (_DAT_1418be238 == 3) {
            pcVar21 = " was the ";
          }
          load_supplier_0x70b90(param_2,pcVar21);
          uVar24 = uVar29;
          if ((uVar29 != 0) || (uVar24 = uVar22, uVar22 != 0)) {
            uVar13 = FUN_140bcabf0(uVar24,*(undefined4 *)(param_3 + 0xe0));
          }
          if (uVar13 - 6 < 0x27) {
                    /* WARNING: Switch is manually overridden */
            FUN_140773b70(uVar13 & 0xffff,&pppuStack_d0,0,0);
            load_supplier_0xbb340(param_2,&pppuStack_d0);
          }
          else {
            load_supplier_0x70b90(param_2,"child");
          }
          load_supplier_0x70b90(param_2," of ");
          lVar19 = lStack_218;
          if ((iVar26 != -1) && (uVar29 != 0)) {
            uStack_220 = 1;
            uStack_228 = 1;
            FUN_140baabd0(lStack_218,param_2,iVar26,uStack_208);
          }
          if ((iVar27 != -1) && (uVar22 != 0)) {
            if ((iVar26 != -1) && (uVar29 != 0)) {
              load_supplier_0x70b90(param_2," and ");
            }
            uStack_220 = 1;
            uStack_228 = 1;
            FUN_140baabd0(lVar19,param_2,iVar27,uStack_208);
          }
          sVar10 = *(short *)(param_3 + 2);
          uVar24 = (ulonglong)sVar10;
          if ((-1 < sVar10) && (uVar24 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
            lVar19 = *(longlong *)(_DAT_14250eee8 + uVar24 * 8);
            if ((*(int *)(lVar19 + 0x1b0) < 9) ||
               ((*(byte *)(*(longlong *)(lVar19 + 0x1a8) + 8) & 8) == 0)) {
              bVar33 = false;
            }
            else {
              bVar33 = true;
            }
            if ((((bVar33) &&
                 (cVar9 = image_supplier_0xe4bf0(0x14250eec8,sVar10,0x44), cVar9 != '\0')) &&
                (cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar24 & 0xffff,0x45), cVar9 != '\0'))
               && ((uVar29 == 0 || (uVar22 == 0)))) {
              load_supplier_0x70b90(param_2,".  ");
              load_supplier_0x70b90(param_2,"The identity of ");
              load_supplier_0x70cc0(auStack_70);
              FUN_140abe2f0(*(undefined1 *)(param_3 + 6),auStack_70,0);
              load_supplier_0xbb340(param_2,auStack_70);
              load_supplier_0x70b90(param_2," ");
              pcVar21 = "mother";
              if (uVar29 != 0) {
                pcVar21 = "father";
              }
              load_supplier_0x70b90(param_2,pcVar21);
              load_supplier_0x70b90(param_2," has been lost to time");
              FUN_140070e80(auStack_70);
            }
          }
          if (0xf < uStack_b8) {
            uVar22 = uStack_b8 + 1;
            ppppuVar23 = (undefined8 ****)pppuStack_d0;
            if (0xfff < uVar22) {
              uVar22 = uStack_b8 + 0x28;
              ppppuVar23 = (undefined8 ****)pppuStack_d0[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_d0 + (-8 - (longlong)ppppuVar23))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar23,uVar22);
          }
        }
        FUN_140070d80(&uStack_f0);
        FUN_140070de0(&uStack_120);
        FUN_140070d80(&uStack_108);
        goto LAB_140c43bf3;
      }
      load_supplier_0x70cc0(&pppuStack_d0);
      FUN_140abe1d0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,1);
      load_supplier_0xbb340(param_2,&pppuStack_d0);
      pcVar21 = " is";
      if (_DAT_1418be238 == 3) {
        pcVar21 = " was";
      }
      load_supplier_0x70b90(param_2,pcVar21);
      load_supplier_0x70b90(param_2," of unknown parentage");
    }
    FUN_140070e80(&pppuStack_d0);
  }
  else if ((**(byte **)(param_3 + 200) & 4) == 0) {
    if ((**(byte **)(param_3 + 200) & 8) == 0) goto LAB_140c43928;
    FUN_140071040(param_2,"a force",7);
    lVar19 = FUN_1405dcc30(_DAT_14250dfd8,*(undefined4 *)(param_3 + 0xe0));
    if (lVar19 != 0) {
      if (_DAT_1418be238 == 3) {
        pcVar21 = " which was said to permeate ";
        uVar30 = 0x1c;
      }
      else {
        pcVar21 = " which permeates ";
        uVar30 = 0x11;
      }
      FUN_140071040(param_2,pcVar21,uVar30);
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0xf;
      pppuStack_d0 = (undefined8 ****)0x0;
      FUN_140aae180(lVar19,&pppuStack_d0,1,0);
      ppppuVar23 = &pppuStack_d0;
      if (0xf < uStack_b8) {
        ppppuVar23 = (undefined8 ****)pppuStack_d0;
      }
      FUN_140071040(param_2,ppppuVar23,uStack_c0);
      if (0xf < uStack_b8) {
        uVar22 = uStack_b8 + 1;
        ppppuVar23 = (undefined8 ****)pppuStack_d0;
        if (0xfff < uVar22) {
          uVar22 = uStack_b8 + 0x28;
          ppppuVar23 = (undefined8 ****)pppuStack_d0[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_d0 + (-8 - (longlong)ppppuVar23))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        load_supplier_0x15530d0(ppppuVar23,uVar22);
      }
    }
  }
  else {
    FUN_140071040(param_2,"a deity",7);
    iVar26 = 0;
    uVar22 = _DAT_1423f3c80 - (longlong)_DAT_1423f3c78 >> 3;
    if (uVar22 != 0) {
      plVar14 = _DAT_1423f3c78;
      do {
        piVar1 = *(int **)(*plVar14 + 0xfc8);
        for (piVar15 = piVar1; piVar15 < *(int **)(*plVar14 + 0xfd0); piVar15 = piVar15 + 1) {
          if (*piVar15 == *(int *)(param_3 + 0xe0)) {
            if ((int)((longlong)piVar15 - (longlong)piVar1 >> 2) != -1) {
              lVar19 = _DAT_1423f3c78[iVar26];
              if (lVar19 != 0) {
                if (_DAT_1418be238 == 3) {
                  pcVar21 = " that occurs in the myths of ";
                  uVar30 = 0x1d;
                }
                else {
                  pcVar21 = " of ";
                  uVar30 = 4;
                }
                FUN_140071040(param_2,pcVar21,uVar30);
                uStack_c8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0xf;
                pppuStack_d0 = (undefined8 ****)0x0;
                FUN_140aae180(lVar19 + 0x20,&pppuStack_d0,1,0);
                ppppuVar23 = &pppuStack_d0;
                if (0xf < uStack_b8) {
                  ppppuVar23 = (undefined8 ****)pppuStack_d0;
                }
                FUN_140071040(param_2,ppppuVar23,uStack_c0);
                FUN_140070e80(&pppuStack_d0);
              }
              goto LAB_140c43bf3;
            }
            break;
          }
        }
        iVar26 = iVar26 + 1;
        plVar14 = plVar14 + 1;
      } while ((ulonglong)(longlong)iVar26 < uVar22);
    }
  }
LAB_140c43bf3:
  FUN_140071040(param_2,".  ",3);
  lVar16 = FUN_140df5d70(0x1424075f8,*(undefined4 *)(param_3 + 0xe0));
  lVar19 = lStack_218;
  if (((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x60))) && ((**(byte **)(lVar16 + 0x58) & 4) != 0)) {
    if (_DAT_1418be238 == 3) {
      FUN_140071040(param_2,"Although accounts vary, it is universally agreed that ",0x36);
    }
    lVar19 = lStack_218;
    uStack_220 = 1;
    uStack_228 = 0;
    FUN_140baabd0(lStack_218,param_2,uStack_210,uStack_208);
    if (_DAT_1418be238 == 3) {
      pcVar21 = " was ";
      uVar30 = 5;
    }
    else {
      pcVar21 = " is ";
      uVar30 = 4;
    }
    FUN_140071040(param_2,pcVar21,uVar30);
    if (*(int *)(lVar16 + 0x60) < 2) {
LAB_140c44307:
      FUN_140071040(param_2,"guided by forces unknown.  ",0x1b);
    }
    else if ((*(byte *)(*(longlong *)(lVar16 + 0x58) + 1) & 4) == 0) {
      if ((*(byte *)(*(longlong *)(lVar16 + 0x58) + 1) & 2) == 0) goto LAB_140c44307;
      FUN_140071040(param_2,"possessed of an unusual destiny.  ",0x22);
    }
    else {
      FUN_140071040(param_2,"chosen by fate as the vanguard of destiny.  ",0x2c);
    }
  }
  bVar5 = false;
  bVar33 = true;
  if ((*(int *)(param_3 + 0xd0) < 1) || ((**(byte **)(param_3 + 200) & 4) == 0)) {
    sVar10 = *(short *)(param_3 + 4);
    uVar22 = (ulonglong)sVar10;
    sVar31 = *(short *)(param_3 + 2);
    uVar24 = (ulonglong)sVar31;
    if (sVar31 < 0) goto LAB_140c4481c;
    if (uVar24 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
      if ((sVar10 < 0) ||
         (lVar19 = *(longlong *)(_DAT_14250eee8 + uVar24 * 8),
         (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3) <= uVar22))
      goto LAB_140c447ab;
      lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + uVar22 * 8);
      if ((*(int *)(lVar19 + 0x6b0) < 0x11) ||
         (bVar4 = bVar33, (*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 0x10) & 0x10) == 0)) {
        bVar4 = false;
      }
      if (!bVar4) goto LAB_140c44789;
LAB_140c44944:
      sVar10 = *(short *)(param_3 + 2);
      if ((((-1 < sVar10) &&
           ((ulonglong)(longlong)sVar10 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
          (lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar10 * 8), lVar19 != 0)) &&
         (*(short *)(param_3 + 4) != -1)) {
        lVar19 = *(longlong *)
                  (*(longlong *)(lVar19 + 0x178) + (longlong)*(short *)(param_3 + 4) * 8);
        puVar25 = (undefined8 *)(lVar19 + 0x220);
        if (0xf < *(ulonglong *)(lVar19 + 0x238)) {
          puVar25 = (undefined8 *)*puVar25;
        }
        FUN_140071040(param_2,puVar25,*(undefined8 *)(lVar19 + 0x230));
        FUN_140071040(param_2,"  ",2);
      }
    }
    else {
LAB_140c44789:
      if ((sVar31 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar24)) {
LAB_140c4481c:
        sVar10 = *(short *)(param_3 + 4);
        sVar31 = *(short *)(param_3 + 2);
        if (sVar31 < 0) goto LAB_140c449ae;
      }
      else {
LAB_140c447ab:
        if ((-1 < sVar10) &&
           (lVar19 = *(longlong *)(uVar24 * 8 + _DAT_14250eee8),
           uVar22 < (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3))
           ) {
          lVar19 = *(longlong *)
                    (*(longlong *)(*(longlong *)(_DAT_14250eee8 + uVar24 * 8) + 0x178) + uVar22 * 8)
          ;
          if ((*(int *)(lVar19 + 0x6b0) < 0x11) ||
             ((*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 0x10) & 0x40) == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140c44944;
          goto LAB_140c4481c;
        }
        sVar10 = *(short *)(param_3 + 4);
        sVar31 = *(short *)(param_3 + 2);
      }
      if ((ulonglong)(longlong)sVar31 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if (-1 < sVar10) {
          lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar31 * 8);
          if ((ulonglong)(longlong)sVar10 <
              (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) {
            lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar10 * 8);
            if ((*(int *)(lVar19 + 0x6b0) < 0x12) ||
               (-1 < *(char *)(*(longlong *)(lVar19 + 0x6a8) + 0x11))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) goto LAB_140c44944;
            goto LAB_140c448bd;
          }
        }
      }
      else {
LAB_140c448bd:
        if ((sVar31 < 0) ||
           ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar31))
        goto LAB_140c449ae;
      }
      if (-1 < sVar10) {
        lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar31 * 8);
        if ((ulonglong)(longlong)sVar10 <
            (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) {
          lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar10 * 8);
          if ((*(int *)(lVar19 + 0x6b0) < 0x11) ||
             ((*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 0x10) & 8) == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140c44944;
        }
      }
    }
  }
  else {
    uStack_220 = 1;
    uStack_228 = 0;
    FUN_140baabd0(lVar19,param_2,uStack_210,uStack_208);
    if (_DAT_1418be238 == 3) {
      pcVar21 = " was most often depicted as a ";
      uVar30 = 0x1e;
    }
    else {
      pcVar21 = " most often takes the form of a ";
      uVar30 = 0x20;
    }
    FUN_140071040(param_2,pcVar21,uVar30);
    if (0 < *(int *)(param_3 + 0xd0)) {
      if ((**(byte **)(param_3 + 200) & 0x10) != 0) {
        FUN_140071040(param_2,"skeletal ",9);
      }
      if (0 < *(int *)(param_3 + 0xd0)) {
        if ((**(byte **)(param_3 + 200) & 0x20) != 0) {
          FUN_140071040(param_2,"rotting ",8);
        }
        if ((0 < *(int *)(param_3 + 0xd0)) && (**(char **)(param_3 + 200) < '\0')) {
          FUN_140071040(param_2,"ghostly ",8);
        }
      }
    }
    uStack_a8 = 0;
    uStack_98 = 0xf;
    sVar10 = *(short *)(param_3 + 4);
    sVar31 = *(short *)(param_3 + 2);
    uVar22 = (ulonglong)sVar31;
    lStack_a0 = 0;
    pppuStack_b0 = (undefined8 ****)0x0;
    if (sVar10 == -1) {
      if (-1 < sVar31) goto LAB_140c444da;
    }
    else if (-1 < sVar31) {
      if (((uVar22 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar10)) &&
         (lVar19 = *(longlong *)(_DAT_14250eee8 + uVar22 * 8),
         (ulonglong)(longlong)sVar10 <
         (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3))) {
        lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar10 * 8);
        ppppuVar23 = (undefined8 ****)(lVar19 + 0x20);
        if (&pppuStack_b0 != ppppuVar23) {
          if (0xf < *(ulonglong *)(lVar19 + 0x38)) {
            ppppuVar23 = (undefined8 ****)*ppppuVar23;
          }
          FUN_140070f00(&pppuStack_b0,ppppuVar23,*(undefined8 *)(lVar19 + 0x30));
          if (lStack_a0 != 0) goto LAB_140c44529;
        }
      }
LAB_140c444da:
      if (uVar22 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        lVar19 = *(longlong *)(_DAT_14250eee8 + uVar22 * 8);
        ppppuVar23 = (undefined8 ****)(lVar19 + 0x20);
        if (&pppuStack_b0 != ppppuVar23) {
          if (0xf < *(ulonglong *)(lVar19 + 0x38)) {
            ppppuVar23 = (undefined8 ****)*ppppuVar23;
          }
          FUN_140070f00(&pppuStack_b0,ppppuVar23,*(undefined8 *)(lVar19 + 0x30));
        }
      }
    }
LAB_140c44529:
    lVar19 = lStack_a0;
    pppuVar6 = pppuStack_b0;
    uVar22 = (ulonglong)*(short *)(param_3 + 2);
    if ((-1 < *(short *)(param_3 + 2)) &&
       (uVar22 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
      lVar16 = *(longlong *)(_DAT_14250eee8 + uVar22 * 8);
      if ((*(int *)(lVar16 + 0x1b0) < 9) ||
         ((*(byte *)(*(longlong *)(lVar16 + 0x1a8) + 8) & 4) == 0)) {
        bVar33 = false;
      }
      else {
        bVar33 = true;
      }
      if (bVar33) {
        uStack_88 = 0;
        lStack_80 = 0;
        uStack_78 = 0xf;
        pppuStack_90 = (undefined8 ****)0x0;
        sVar10 = *(short *)(param_3 + 4);
        if ((-1 < sVar10) &&
           ((ulonglong)(longlong)sVar10 <
            (ulonglong)(*(longlong *)(lVar16 + 0x180) - *(longlong *)(lVar16 + 0x178) >> 3))) {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(_DAT_14250eee8 + uVar22 * 8) + 0x178) +
                    (longlong)sVar10 * 8);
          ppppuVar23 = (undefined8 ****)(lVar16 + 0x20);
          if (&pppuStack_90 != ppppuVar23) {
            if (0xf < *(ulonglong *)(lVar16 + 0x38)) {
              ppppuVar23 = (undefined8 ****)*ppppuVar23;
            }
            FUN_140070f00(&pppuStack_90,ppppuVar23,*(undefined8 *)(lVar16 + 0x30));
          }
        }
        uVar22 = uStack_78;
        lVar16 = lStack_80;
        pppuVar7 = pppuStack_90;
        ppppuVar23 = &pppuStack_b0;
        if (0xf < uStack_98) {
          ppppuVar23 = (undefined8 ****)pppuVar6;
        }
        ppppuVar20 = &pppuStack_90;
        if (0xf < uStack_78) {
          ppppuVar20 = (undefined8 ****)pppuStack_90;
        }
        if (((lStack_80 == lVar19) &&
            (iVar26 = load_supplier_0x1554864(ppppuVar20,ppppuVar23,lStack_80), iVar26 == 0)) ||
           (lVar16 == 0)) {
          if (*(char *)(param_3 + 6) == '\0') {
            FUN_140071040(param_2,"female ",7);
          }
          if (*(char *)(param_3 + 6) == '\x01') {
            FUN_140071040(param_2,"male ",5);
          }
        }
        if (0xf < uVar22) {
          uVar24 = uVar22 + 1;
          ppppuVar23 = (undefined8 ****)pppuVar7;
          if (0xfff < uVar24) {
            uVar24 = uVar22 + 0x28;
            ppppuVar23 = (undefined8 ****)pppuVar7[-1];
            if (0x1f < (ulonglong)((longlong)pppuVar7 + (-8 - (longlong)ppppuVar23))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          load_supplier_0x15530d0(ppppuVar23,uVar24);
        }
      }
    }
    ppppuVar23 = &pppuStack_b0;
    if (0xf < uStack_98) {
      ppppuVar23 = (undefined8 ****)pppuVar6;
    }
    FUN_140071040(param_2,ppppuVar23,lVar19);
    bVar33 = false;
    bVar5 = true;
    FUN_140070e80(&pppuStack_b0);
  }
LAB_140c449ae:
  if (((*(longlong **)(param_3 + 0x130) == (longlong *)0x0) ||
      (plVar14 = (longlong *)**(longlong **)(param_3 + 0x130), plVar14 == (longlong *)0x0)) ||
     (plVar14[1] - *plVar14 >> 1 == 0)) {
    if (!bVar5) goto LAB_140c44b43;
  }
  else {
    if (bVar33) {
      uStack_220 = 1;
      uStack_228 = 0;
      FUN_140baabd0(lStack_218,param_2,uStack_210,uStack_208);
    }
    else {
      FUN_140071040(param_2," and",4);
    }
    uVar30 = 4;
    if (_DAT_1418be238 == 3) {
      pcVar21 = " was ";
      uVar30 = 5;
    }
    else {
      pcVar21 = " is ";
    }
    FUN_140071040(param_2,pcVar21,uVar30);
    FUN_140071040(param_2,"associated with ",0x10);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0xf;
    pppuStack_d0 = (undefined8 ****)0x0;
    iVar26 = (int)(((longlong *)**(longlong **)(param_3 + 0x130))[1] -
                   *(longlong *)**(longlong **)(param_3 + 0x130) >> 1) + -1;
    lVar19 = (longlong)iVar26;
    if (-1 < iVar26) {
LAB_140c44aa0:
      do {
        image_deity_domain_article
                  (*(undefined2 *)(*(longlong *)**(undefined8 **)(param_3 + 0x130) + lVar19 * 2),
                   &pppuStack_d0);
        ppppuVar23 = &pppuStack_d0;
        if (0xf < uStack_b8) {
          ppppuVar23 = (undefined8 ****)pppuStack_d0;
        }
        FUN_140071040(param_2,ppppuVar23,uStack_c0);
        if (lVar19 < 2) {
          if (lVar19 == 1) {
            FUN_140071040(param_2," and ",5);
            lVar19 = 0;
            goto LAB_140c44aa0;
          }
        }
        else {
          FUN_140071040(param_2,", ",2);
        }
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
    FUN_140070e80(&pppuStack_d0);
  }
  FUN_140071040(param_2,".  ",3);
LAB_140c44b43:
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_248);
  return;
}

