/* reference PE:6aea05a1:02734000; art_image_element_creaturest; RVA 0x1499c0..0x14a56f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_creaturest
               (longlong param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined1 auStack_148 [32];
  undefined8 ***pppuStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  ulonglong uStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_148;
  uVar13 = 0;
  param_2[2] = 0;
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar9 = 0;
  iVar8 = *(int *)(param_1 + 0x18);
  uVar15 = uVar13;
  if (((iVar8 != -1) && (param_4 != '\0')) &&
     (lVar17 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, uVar15 = 0, lVar17 != 0)) {
    iVar16 = (int)lVar17 + -1;
    if (-1 < iVar16) {
      do {
        iVar10 = iVar16 + (int)uVar13 >> 1;
        uVar15 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar10 * 8);
        if (*(int *)(uVar15 + 0xe0) == iVar8) goto LAB_140149a6e;
        iVar7 = iVar10 + -1;
        if (*(int *)(uVar15 + 0xe0) < iVar8) {
          uVar13 = (ulonglong)(iVar10 + 1);
          iVar7 = iVar16;
        }
        iVar16 = iVar7;
      } while ((int)uVar13 <= iVar16);
    }
    uVar15 = 0;
  }
LAB_140149a6e:
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  if (uVar15 == 0) {
    if (param_3 == '\0') {
      if (*(int *)(param_1 + 8) == 1) {
        uVar18 = 2;
        pcVar14 = "a ";
        goto LAB_14014a49b;
      }
    }
    else {
      uVar18 = 4;
      pcVar14 = "the ";
LAB_14014a49b:
      FUN_140071040(param_2,pcVar14,uVar18);
    }
    if (1 < *(int *)(param_1 + 8)) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0xf;
      pppuStack_108 = (undefined8 ****)0x0;
      image_number_words(*(int *)(param_1 + 8),&pppuStack_108);
      ppppuVar12 = &pppuStack_108;
      if (0xf < uStack_f0) {
        ppppuVar12 = (undefined8 ****)pppuStack_108;
      }
      FUN_140071040(param_2,ppppuVar12,uStack_f8);
      FUN_140071040(param_2," ",1);
      FUN_140070e80(&pppuStack_108);
    }
    FUN_140abd670(*(undefined2 *)(param_1 + 0x10),&pppuStack_68,*(int *)(param_1 + 8) != 1,
                  *(undefined2 *)(param_1 + 0x14));
    ppppuVar12 = &pppuStack_68;
    uVar18 = uStack_58;
    if (0xf < uStack_50) {
      ppppuVar12 = (undefined8 ****)pppuStack_68;
    }
  }
  else {
    if (param_5 != '\0') {
      FUN_140071040(param_2,"[LPAGE:HF:",10);
      FUN_140545610(*(undefined4 *)(uVar15 + 0xe0),param_2);
      FUN_140071040(param_2,"]",1);
    }
    if (*(char *)(uVar15 + 0xaa) == '\0') {
      if (*(short *)(uVar15 + 2) != -1) {
        if ((*(int *)(uVar15 + 0xd0) < 1) || ((**(byte **)(uVar15 + 200) & 4) == 0)) {
          uVar18 = 4;
          if (param_3 == '\0') {
            uVar18 = 2;
          }
          pcVar14 = "the ";
          if (param_3 == '\0') {
            pcVar14 = "a ";
          }
          FUN_140071040(param_2,pcVar14,uVar18);
          uStack_e0 = 0;
          uStack_d0 = 0xf;
          sVar1 = *(short *)(uVar15 + 4);
          sVar2 = *(short *)(uVar15 + 2);
          uVar13 = (ulonglong)sVar2;
          lStack_d8 = 0;
          pppuStack_e8 = (undefined8 ****)0x0;
          if (sVar1 == -1) {
            if (-1 < sVar2) goto LAB_14014a3b2;
          }
          else if (-1 < sVar2) {
            if (((uVar13 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
               (lVar17 = *(longlong *)(_DAT_14250eee8 + uVar13 * 8),
               lVar3 = *(longlong *)(lVar17 + 0x178),
               (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar17 + 0x180) - lVar3 >> 3))
               ) {
              lVar17 = *(longlong *)(lVar3 + (longlong)sVar1 * 8);
              ppppuVar12 = (undefined8 ****)(lVar17 + 0x20);
              if (&pppuStack_e8 != ppppuVar12) {
                if (0xf < *(ulonglong *)(lVar17 + 0x38)) {
                  ppppuVar12 = (undefined8 ****)*ppppuVar12;
                }
                FUN_140070f00(&pppuStack_e8,ppppuVar12,*(undefined8 *)(lVar17 + 0x30));
                if (lStack_d8 != 0) goto LAB_14014a3fb;
              }
            }
LAB_14014a3b2:
            if (uVar13 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
              lVar17 = *(longlong *)(_DAT_14250eee8 + uVar13 * 8);
              ppppuVar12 = (undefined8 ****)(lVar17 + 0x20);
              if (&pppuStack_e8 != ppppuVar12) {
                if (0xf < *(ulonglong *)(lVar17 + 0x38)) {
                  ppppuVar12 = (undefined8 ****)*ppppuVar12;
                }
                FUN_140070f00(&pppuStack_e8,ppppuVar12,*(undefined8 *)(lVar17 + 0x30));
              }
            }
          }
LAB_14014a3fb:
          ppppuVar12 = &pppuStack_e8;
          if (0xf < uStack_d0) {
            ppppuVar12 = (undefined8 ****)pppuStack_e8;
          }
          FUN_140071040(param_2,ppppuVar12,lStack_d8);
          if (0xf < uStack_d0) {
            uVar13 = uStack_d0 + 1;
            ppppuVar12 = (undefined8 ****)pppuStack_e8;
            if (0xfff < uVar13) {
              uVar13 = uStack_d0 + 0x28;
              ppppuVar12 = (undefined8 ****)pppuStack_e8[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_e8 + (-8 - (longlong)ppppuVar12))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar12,uVar13);
          }
        }
        else {
          FUN_140071040(param_2,"the deity of ",0xd);
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0xf;
          pppuStack_108 = (undefined8 ****)0x0;
          iVar8 = (int)(((longlong *)**(longlong **)(uVar15 + 0x130))[1] -
                        *(longlong *)**(longlong **)(uVar15 + 0x130) >> 1) + -1;
          lVar17 = (longlong)iVar8;
          if (-1 < iVar8) {
LAB_140149fb3:
            do {
              image_deity_domain_article
                        (*(undefined2 *)
                          (*(longlong *)**(undefined8 **)(uVar15 + 0x130) + lVar17 * 2),
                         &pppuStack_108);
              ppppuVar12 = &pppuStack_108;
              if (0xf < uStack_f0) {
                ppppuVar12 = (undefined8 ****)pppuStack_108;
              }
              FUN_140071040(param_2,ppppuVar12,uStack_f8);
              if (lVar17 < 2) {
                if (lVar17 == 1) {
                  FUN_140071040(param_2," and ",5);
                  lVar17 = 0;
                  goto LAB_140149fb3;
                }
              }
              else {
                FUN_140071040(param_2,", ",2);
              }
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
          }
          FUN_140071040(param_2,", depicted as a ",0x10);
          if (0 < *(int *)(uVar15 + 0xd0)) {
            if ((**(byte **)(uVar15 + 200) & 0x10) != 0) {
              FUN_140071040(param_2,"skeletal ",9);
            }
            if (0 < *(int *)(uVar15 + 0xd0)) {
              if ((**(byte **)(uVar15 + 200) & 0x20) != 0) {
                FUN_140071040(param_2,"rotting ",8);
              }
              if ((0 < *(int *)(uVar15 + 0xd0)) && (**(char **)(uVar15 + 200) < '\0')) {
                FUN_140071040(param_2,"ghostly ",8);
              }
            }
          }
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_110 = 0xf;
          pppuStack_128 = (undefined8 ****)0x0;
          FUN_140abd670(*(undefined2 *)(uVar15 + 2),&pppuStack_128,0,*(undefined2 *)(uVar15 + 4));
          uVar13 = uStack_110;
          lVar17 = lStack_118;
          uVar19 = (ulonglong)*(short *)(uVar15 + 2);
          if ((-1 < *(short *)(uVar15 + 2)) &&
             (uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
            lVar3 = *(longlong *)(_DAT_14250eee8 + uVar19 * 8);
            if ((*(int *)(lVar3 + 0x1b0) < 9) ||
               ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 8) & 4) == 0)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uStack_80 = 0;
              lStack_78 = 0;
              uStack_70 = 0xf;
              pppuStack_88 = (undefined8 ****)0x0;
              sVar1 = *(short *)(uVar15 + 4);
              if (((uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
                 ((ulonglong)(longlong)sVar1 <
                  (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3))) {
                lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar1 * 8);
                ppppuVar12 = (undefined8 ****)(lVar3 + 0x20);
                if (&pppuStack_88 != ppppuVar12) {
                  if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
                    ppppuVar12 = (undefined8 ****)*ppppuVar12;
                  }
                  FUN_140070f00(&pppuStack_88,ppppuVar12,*(undefined8 *)(lVar3 + 0x30));
                }
              }
              uVar19 = uStack_70;
              lVar3 = lStack_78;
              pppuVar6 = pppuStack_88;
              ppppuVar12 = &pppuStack_128;
              if (0xf < uVar13) {
                ppppuVar12 = (undefined8 ****)pppuStack_128;
              }
              ppppuVar11 = &pppuStack_88;
              if (0xf < uStack_70) {
                ppppuVar11 = (undefined8 ****)pppuStack_88;
              }
              if (((lStack_78 == lVar17) &&
                  (iVar8 = load_supplier_0x1554864(ppppuVar11,ppppuVar12,lStack_78), iVar8 == 0)) ||
                 (lVar3 == 0)) {
                if (*(char *)(uVar15 + 6) == '\0') {
                  FUN_140071040(param_2,"female ",7);
                }
                if (*(char *)(uVar15 + 6) == '\x01') {
                  FUN_140071040(param_2,"male ",5);
                }
              }
              if (0xf < uVar19) {
                uVar15 = uVar19 + 1;
                ppppuVar12 = (undefined8 ****)pppuVar6;
                if (0xfff < uVar15) {
                  uVar15 = uVar19 + 0x28;
                  ppppuVar12 = (undefined8 ****)pppuVar6[-1];
                  if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar12))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                load_supplier_0x15530d0(ppppuVar12,uVar15);
              }
            }
          }
          ppppuVar12 = &pppuStack_128;
          if (0xf < uVar13) {
            ppppuVar12 = (undefined8 ****)pppuStack_128;
          }
          FUN_140071040(param_2,ppppuVar12,lVar17);
          if (0xf < uStack_110) {
            uVar13 = uStack_110 + 1;
            ppppuVar12 = (undefined8 ****)pppuStack_128;
            if (0xfff < uVar13) {
              uVar13 = uStack_110 + 0x28;
              ppppuVar12 = (undefined8 ****)pppuStack_128[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_128 + (-8 - (longlong)ppppuVar12))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar12,uVar13);
          }
          FUN_140070e80(&pppuStack_108);
        }
      }
    }
    else {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0xf;
      pppuStack_108 = (undefined8 ****)0x0;
      FUN_140aae180(uVar15 + 0x38,&pppuStack_108,1,0);
      ppppuVar12 = &pppuStack_108;
      if (0xf < uStack_f0) {
        ppppuVar12 = (undefined8 ****)pppuStack_108;
      }
      FUN_140071040(param_2,ppppuVar12,uStack_f8);
      if ((param_3 == '\0') && (*(short *)(uVar15 + 2) != -1)) {
        if ((*(int *)(uVar15 + 0xd0) < 1) || ((**(byte **)(uVar15 + 200) & 4) == 0)) {
          FUN_140071040(param_2," the ",5);
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_110 = 0xf;
          pppuStack_128 = (undefined8 ****)0x0;
          FUN_140abd670(*(undefined2 *)(uVar15 + 2),&pppuStack_128,0,*(undefined2 *)(uVar15 + 4));
          ppppuVar12 = &pppuStack_128;
          if (0xf < uStack_110) {
            ppppuVar12 = (undefined8 ****)pppuStack_128;
          }
          FUN_140071040(param_2,ppppuVar12,lStack_118);
          if (0xf < uStack_110) {
            uVar13 = uStack_110 + 1;
            ppppuVar12 = (undefined8 ****)pppuStack_128;
            if (0xfff < uVar13) {
              uVar13 = uStack_110 + 0x28;
              ppppuVar12 = (undefined8 ****)pppuStack_128[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_128 + (-8 - (longlong)ppppuVar12))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar12,uVar13);
          }
        }
        else {
          FUN_140071040(param_2,", the deity of ",0xf);
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0xf;
          pppuStack_a8 = (undefined8 ****)0x0;
          iVar8 = (int)(((longlong *)**(longlong **)(uVar15 + 0x130))[1] -
                        *(longlong *)**(longlong **)(uVar15 + 0x130) >> 1) + -1;
          lVar17 = (longlong)iVar8;
          if (-1 < iVar8) {
LAB_140149ba0:
            do {
              image_deity_domain_article
                        (*(undefined2 *)
                          (*(longlong *)**(undefined8 **)(uVar15 + 0x130) + lVar17 * 2),
                         &pppuStack_a8);
              ppppuVar12 = &pppuStack_a8;
              if (0xf < uStack_90) {
                ppppuVar12 = (undefined8 ****)pppuStack_a8;
              }
              FUN_140071040(param_2,ppppuVar12,uStack_98);
              if (lVar17 < 2) {
                if (lVar17 == 1) {
                  FUN_140071040(param_2," and ",5);
                  lVar17 = 0;
                  goto LAB_140149ba0;
                }
              }
              else {
                FUN_140071040(param_2,", ",2);
              }
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
          }
          FUN_140071040(param_2,", depicted as a ",0x10);
          if (0 < *(int *)(uVar15 + 0xd0)) {
            if ((**(byte **)(uVar15 + 200) & 0x10) != 0) {
              FUN_140071040(param_2,"skeletal ",9);
            }
            if (0 < *(int *)(uVar15 + 0xd0)) {
              if ((**(byte **)(uVar15 + 200) & 0x20) != 0) {
                FUN_140071040(param_2,"rotting ",8);
              }
              if ((0 < *(int *)(uVar15 + 0xd0)) && (**(char **)(uVar15 + 200) < '\0')) {
                FUN_140071040(param_2,"ghostly ",8);
              }
            }
          }
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_110 = 0xf;
          pppuStack_128 = (undefined8 ****)0x0;
          FUN_140abd670(*(undefined2 *)(uVar15 + 2),&pppuStack_128,0,*(undefined2 *)(uVar15 + 4));
          uVar13 = uStack_110;
          lVar17 = lStack_118;
          uVar19 = (ulonglong)*(short *)(uVar15 + 2);
          if ((-1 < *(short *)(uVar15 + 2)) &&
             (uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
            lVar3 = *(longlong *)(_DAT_14250eee8 + uVar19 * 8);
            if ((*(int *)(lVar3 + 0x1b0) < 9) ||
               ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 8) & 4) == 0)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uStack_c0 = 0;
              lStack_b8 = 0;
              uStack_b0 = 0xf;
              pppuStack_c8 = (undefined8 ****)0x0;
              sVar1 = *(short *)(uVar15 + 4);
              if (((uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
                 ((ulonglong)(longlong)sVar1 <
                  (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3))) {
                lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar1 * 8);
                ppppuVar12 = (undefined8 ****)(lVar3 + 0x20);
                if (&pppuStack_c8 != ppppuVar12) {
                  if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
                    ppppuVar12 = (undefined8 ****)*ppppuVar12;
                  }
                  FUN_140070f00(&pppuStack_c8,ppppuVar12,*(undefined8 *)(lVar3 + 0x30));
                }
              }
              uVar19 = uStack_b0;
              lVar3 = lStack_b8;
              pppuVar6 = pppuStack_c8;
              ppppuVar12 = &pppuStack_128;
              if (0xf < uVar13) {
                ppppuVar12 = (undefined8 ****)pppuStack_128;
              }
              ppppuVar11 = &pppuStack_c8;
              if (0xf < uStack_b0) {
                ppppuVar11 = (undefined8 ****)pppuStack_c8;
              }
              if (((lStack_b8 == lVar17) &&
                  (iVar8 = load_supplier_0x1554864(ppppuVar11,ppppuVar12,lStack_b8), iVar8 == 0)) ||
                 (lVar3 == 0)) {
                if (*(char *)(uVar15 + 6) == '\0') {
                  FUN_140071040(param_2,"female ",7);
                }
                if (*(char *)(uVar15 + 6) == '\x01') {
                  FUN_140071040(param_2,"male ",5);
                }
              }
              if (0xf < uVar19) {
                uVar15 = uVar19 + 1;
                ppppuVar12 = (undefined8 ****)pppuVar6;
                if (0xfff < uVar15) {
                  uVar15 = uVar19 + 0x28;
                  ppppuVar12 = (undefined8 ****)pppuVar6[-1];
                  if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar12))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                load_supplier_0x15530d0(ppppuVar12,uVar15);
              }
            }
          }
          ppppuVar12 = &pppuStack_128;
          if (0xf < uVar13) {
            ppppuVar12 = (undefined8 ****)pppuStack_128;
          }
          FUN_140071040(param_2,ppppuVar12,lVar17);
          FUN_140070e80(&pppuStack_128);
          FUN_140070e80(&pppuStack_a8);
        }
      }
      FUN_140070e80(&pppuStack_108);
    }
    if (param_5 == '\0') goto LAB_14014a53f;
    ppppuVar12 = (undefined8 ****)"[/LPAGE]";
    uVar18 = 8;
  }
  FUN_140071040(param_2,ppppuVar12,uVar18);
LAB_14014a53f:
  FUN_140070e80(&pppuStack_68);
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_148);
  return;
}

