/* Actual Ghidra output; researcher-assigned role. Native entry 1401a9da0; image 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_filter(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  ulonglong uVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  int iVar17;
  undefined8 ****ppppuVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 ****ppppuVar22;
  undefined8 ***pppuVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  int *piVar27;
  undefined4 *puVar28;
  int iVar29;
  bool bVar30;
  undefined1 auStack_1e0 [32];
  undefined1 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  longlong *plStack_1a0;
  undefined8 *puStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined4 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 ***apppuStack_168 [2];
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined8 ***apppuStack_148 [2];
  undefined8 uStack_138;
  ulonglong uStack_130;
  undefined8 ***apppuStack_128 [2];
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined8 ***apppuStack_108 [2];
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined1 auStack_a8 [24];
  longlong *plStack_90;
  undefined8 uStack_88;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 ***pppuStack_60;
  longlong lStack_58;
  undefined8 ***apppuStack_50 [2];
  undefined8 uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  plVar24 = _DAT_1418c3748;
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_a8;
  lStack_58 = param_1;
  if (*(longlong *)(param_1 + 0x1d20) == 0) {
    if (_DAT_1418c3760 != _DAT_1418c3768) {
      _DAT_1418c3768 = _DAT_1418c3760;
    }
    ppppuVar18 = (undefined8 ****)((longlong)_DAT_1418c3750 - (longlong)_DAT_1418c3748 >> 3);
    pppuStack_60 = ppppuVar18;
    if ((undefined8 ****)((longlong)_DAT_1418c3770 - (longlong)_DAT_1418c3760 >> 3) < ppppuVar18) {
      if ((undefined8 ****)0x1fffffffffffffff < ppppuVar18) {
        plVar21 = _DAT_1418c3760;
        FUN_140071f30();
        goto LAB_1401aa49a;
      }
      FUN_1400bbee0(&DAT_1418c3760,&pppuStack_60);
    }
    plVar24 = _DAT_1418c3750;
    plStack_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    plStack_68 = (longlong *)0x0;
    plVar21 = _DAT_1418c3748;
LAB_1401aa213:
    plVar19 = plStack_70;
    plVar25 = plStack_78;
    if (plVar21 < plVar24) {
      cVar4 = (**(code **)(*(longlong *)*plVar21 + 0x50))();
      if (cVar4 == '\0') {
        if (_DAT_1418c3768 == _DAT_1418c3770) {
          FUN_1400bc360(&DAT_1418c3760,_DAT_1418c3768,plVar21);
          plVar21 = plVar21 + 1;
        }
        else {
          *_DAT_1418c3768 = *plVar21;
          _DAT_1418c3768 = _DAT_1418c3768 + 1;
          plVar21 = plVar21 + 1;
        }
      }
      else {
        lVar11 = (longlong)plStack_70 - (longlong)plStack_78 >> 3;
        if ((lVar11 != 0) && (iVar29 = 0, lVar11 != 0)) {
          lVar11 = 0;
          plVar19 = plStack_78;
          do {
            plVar25 = (longlong *)*plVar21;
            iVar7 = (**(code **)(**(longlong **)(lVar11 + (longlong)plVar19) + 0x78))();
            iVar8 = (**(code **)(*plVar25 + 0x78))(plVar25);
            if (iVar8 < iVar7) {
              plVar19 = plStack_78 + iVar29;
              if (plStack_70 == plStack_68) {
                FUN_1400bc360(&plStack_78,plVar19,plVar21);
                plVar21 = plVar21 + 1;
              }
              else {
                lVar11 = *plVar21;
                if (plVar19 == plStack_70) {
                  *plStack_70 = lVar11;
                  plStack_70 = plStack_70 + 1;
                  plVar21 = plVar21 + 1;
                }
                else {
                  *plStack_70 = plStack_70[-1];
                  lVar20 = (longlong)plStack_70 - ((longlong)(plStack_70 + -1) - (longlong)plVar19);
                  plStack_70 = plStack_70 + 1;
                  func_0x00014155486a(lVar20,plVar19);
                  *plVar19 = lVar11;
                  plVar21 = plVar21 + 1;
                }
              }
              goto LAB_1401aa213;
            }
            plVar19 = *(longlong **)(lVar11 + (longlong)plStack_78);
            iVar7 = (**(code **)(*(longlong *)*plVar21 + 0x78))();
            iVar8 = (**(code **)(*plVar19 + 0x78))(plVar19);
            plVar19 = plStack_78;
            if (iVar7 == iVar8) {
              lVar20 = *(longlong *)(lVar11 + (longlong)plStack_78);
              lVar1 = *plVar21;
              cVar4 = FUN_1400bb380(lVar1 + 0x18,lVar20 + 0x18);
              iVar7 = *(int *)(lVar20 + 0x38);
              if (cVar4 < '\0') {
                if (*(int *)(lVar1 + 0x38) <= iVar7) {
LAB_1401aa2d7:
                  plVar19 = plVar19 + iVar29;
                  if (plStack_70 == plStack_68) goto LAB_1401aa355;
                  if (plVar19 == plStack_70) {
                    *plStack_70 = lVar1;
                    plStack_70 = plStack_70 + 1;
                    plVar21 = plVar21 + 1;
                  }
                  else {
                    *plStack_70 = plStack_70[-1];
                    lVar11 = (longlong)plStack_70 -
                             ((longlong)(plStack_70 + -1) - (longlong)plVar19);
                    plStack_70 = plStack_70 + 1;
                    func_0x00014155486a(lVar11,plVar19);
                    *plVar19 = lVar1;
                    plVar21 = plVar21 + 1;
                  }
                  goto LAB_1401aa213;
                }
              }
              else if (*(int *)(lVar1 + 0x38) < iVar7) goto LAB_1401aa2d7;
            }
            iVar29 = iVar29 + 1;
            lVar11 = lVar11 + 8;
          } while ((ulonglong)(longlong)iVar29 <
                   (ulonglong)((longlong)plStack_70 - (longlong)plVar19 >> 3));
        }
        plVar19 = plStack_70;
        if (plStack_70 == plStack_68) {
LAB_1401aa355:
          FUN_1400bc360(&plStack_78,plVar19,plVar21);
          plVar21 = plVar21 + 1;
        }
        else {
          *plStack_70 = *plVar21;
          plStack_70 = plStack_70 + 1;
          plVar21 = plVar21 + 1;
        }
      }
      goto LAB_1401aa213;
    }
    while (plVar25 < plVar19) {
      if (_DAT_1418c3768 == _DAT_1418c3770) {
        FUN_1400bc360(&DAT_1418c3760,_DAT_1418c3768,plVar25);
        plVar25 = plVar25 + 1;
      }
      else {
        *_DAT_1418c3768 = *plVar25;
        _DAT_1418c3768 = _DAT_1418c3768 + 1;
        plVar25 = plVar25 + 1;
      }
    }
    FUN_1400681a0(&plStack_78);
  }
  else {
    FUN_140070c00(apppuStack_50,param_1 + 0x1d10);
    func_0x0001405463c0(apppuStack_50);
    if (_DAT_1418c3760 != _DAT_1418c3768) {
      _DAT_1418c3768 = _DAT_1418c3760;
    }
    ppppuVar18 = (undefined8 ****)((longlong)_DAT_1418c3750 - (longlong)_DAT_1418c3748 >> 3);
    pppuStack_60 = ppppuVar18;
    if ((undefined8 ****)((longlong)_DAT_1418c3770 - (longlong)_DAT_1418c3760 >> 3) < ppppuVar18) {
      plVar21 = _DAT_1418c3760;
      plVar24 = _DAT_1418c3748;
      if ((undefined8 ****)0x1fffffffffffffff < ppppuVar18) {
LAB_1401aa49a:
        FUN_140071f30();
        uStack_e8 = _DAT_1418be040 ^ (ulonglong)auStack_1e0;
        pppuStack_1a8 = ppppuVar18;
        plStack_1a0 = plVar21;
        plStack_90 = plVar24;
        uVar10 = GetTickCount();
        *(undefined4 *)(ppppuVar18 + 0x22) = uVar10;
        ppppuVar18[0x3c4] = (undefined8 ***)0x0;
        ppppuVar16 = ppppuVar18 + 0x3c2;
        if ((undefined8 ***)0xf < ppppuVar18[0x3c5]) {
          ppppuVar16 = (undefined8 ****)ppppuVar18[0x3c2];
        }
        *(undefined1 *)ppppuVar16 = 0;
        *(undefined4 *)(ppppuVar18 + 0x3c9) = 0;
        ppppuVar16 = ppppuVar18 + 0x3cc;
        FUN_1400bcfe0(ppppuVar16);
        ppppuVar15 = ppppuVar18 + 0x3cf;
        if (*ppppuVar15 != ppppuVar18[0x3d0]) {
          ppppuVar18[0x3d0] = *ppppuVar15;
        }
        if (plVar21 == (longlong *)0x0) goto code_r0x0001401ab33f;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        FUN_140c8ccf0(plVar21,ppppuVar18 + 0x3c2,1);
        sVar5 = (**(code **)(*plVar21 + 0x10))(plVar21);
        iVar29 = (**(code **)(*plVar21 + 0x18))(plVar21);
        sVar6 = (**(code **)*plVar21)(plVar21);
        if (sVar6 == 0) {
          if (sVar5 == 7) {
            ppppuVar15 = (undefined8 ****)FUN_1415530e0(0x20);
            *ppppuVar15 = (undefined8 ***)0x0;
            ppppuVar15[1] = (undefined8 ***)0x0;
            ppppuVar15[2] = (undefined8 ***)0x0;
            ppppuVar15[3] = (undefined8 ***)0xf;
            *(undefined1 *)ppppuVar15 = 0;
            pppuStack_1a8 = ppppuVar15;
            FUN_140070f00(ppppuVar15,&UNK_14161e934,4);
            pppuVar23 = ppppuVar18[0x3cd];
            if (pppuVar23 == ppppuVar18[0x3ce]) {
              FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1a8);
            }
            else {
              *pppuVar23 = ppppuVar15;
              ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
            }
            pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
            pppuVar23 = ppppuVar18[0x3d0];
            if (pppuVar23 == ppppuVar18[0x3d1]) {
              FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
            }
            else {
              *(undefined4 *)pppuVar23 = 0xffffffff;
              ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
            }
          }
          lVar11 = FUN_1414c6fe0(0x1423f3970,sVar5,iVar29);
          if (lVar11 != 0) {
            if ((*(int *)(lVar11 + 0x298) < 4) ||
               (-1 < *(char *)(*(longlong *)(lVar11 + 0x290) + 3))) {
              bVar30 = false;
            }
            else {
              bVar30 = true;
            }
            if (bVar30) {
              ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
              *ppppuVar16 = (undefined8 ***)0x0;
              ppppuVar16[1] = (undefined8 ***)0x0;
              ppppuVar16[2] = (undefined8 ***)0x0;
              ppppuVar16[3] = (undefined8 ***)0xf;
              *(undefined1 *)ppppuVar16 = 0;
              pppuStack_1a8 = ppppuVar16;
              FUN_140070f00(ppppuVar16,&UNK_14161e928,8);
              pppuVar23 = ppppuVar18[0x3cd];
              if (pppuVar23 == ppppuVar18[0x3ce]) {
                FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
              }
              else {
                *pppuVar23 = ppppuVar16;
                ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
              }
              pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
              pppuVar23 = ppppuVar18[0x3d0];
              if (pppuVar23 == ppppuVar18[0x3d1]) {
                FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
              }
              else {
                *(undefined4 *)pppuVar23 = 0xffffffff;
                ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
              }
            }
          }
          if ((((sVar5 == 0) && (-1 < iVar29)) &&
              ((ulonglong)(longlong)iVar29 <
               (ulonglong)(lRam000000014250ed50 - lRam000000014250ed48 >> 3))) &&
             (lVar11 = *(longlong *)(lRam000000014250ed48 + (longlong)iVar29 * 8), lVar11 != 0)) {
            if ((7 < *(int *)(lVar11 + 0x440)) &&
               ((*(byte *)(*(longlong *)(lVar11 + 0x438) + 7) & 1) != 0)) {
              ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
              *ppppuVar16 = (undefined8 ***)0x0;
              ppppuVar16[1] = (undefined8 ***)0x0;
              ppppuVar16[2] = (undefined8 ***)0x0;
              ppppuVar16[3] = (undefined8 ***)0xf;
              *(undefined1 *)ppppuVar16 = 0;
              pppuStack_1a8 = ppppuVar16;
              FUN_140070f00(ppppuVar16,&UNK_14161eb18,0xc);
              pppuVar23 = ppppuVar18[0x3cd];
              if (pppuVar23 == ppppuVar18[0x3ce]) {
                FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
              }
              else {
                *pppuVar23 = ppppuVar16;
                ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
              }
              pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
              pppuVar23 = ppppuVar18[0x3d0];
              if (pppuVar23 == ppppuVar18[0x3d1]) {
                FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
              }
              else {
                *(undefined4 *)pppuVar23 = 0xffffffff;
                ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
              }
            }
            if (6 < *(int *)(lVar11 + 0x440)) {
              if ((*(byte *)(*(longlong *)(lVar11 + 0x438) + 6) & 8) != 0) {
                ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
                *ppppuVar16 = (undefined8 ***)0x0;
                ppppuVar16[1] = (undefined8 ***)0x0;
                ppppuVar16[2] = (undefined8 ***)0x0;
                ppppuVar16[3] = (undefined8 ***)0xf;
                *(undefined1 *)ppppuVar16 = 0;
                pppuStack_1a8 = ppppuVar16;
                FUN_140070f00(ppppuVar16,&UNK_14161eb08,0xe);
                pppuVar23 = ppppuVar18[0x3cd];
                if (pppuVar23 == ppppuVar18[0x3ce]) {
                  FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
                }
                else {
                  *pppuVar23 = ppppuVar16;
                  ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                }
                pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
                pppuVar23 = ppppuVar18[0x3d0];
                if (pppuVar23 == ppppuVar18[0x3d1]) {
                  FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
                }
                else {
                  *(undefined4 *)pppuVar23 = 0xffffffff;
                  ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                }
              }
              if (6 < *(int *)(lVar11 + 0x440)) {
                if ((*(byte *)(*(longlong *)(lVar11 + 0x438) + 6) & 0x40) != 0) {
                  ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
                  *ppppuVar16 = (undefined8 ***)0x0;
                  ppppuVar16[1] = (undefined8 ***)0x0;
                  ppppuVar16[2] = (undefined8 ***)0x0;
                  ppppuVar16[3] = (undefined8 ***)0xf;
                  *(undefined1 *)ppppuVar16 = 0;
                  pppuStack_1a8 = ppppuVar16;
                  FUN_140070f00(ppppuVar16,&UNK_14161e968,0x12);
                  pppuVar23 = ppppuVar18[0x3cd];
                  if (pppuVar23 == ppppuVar18[0x3ce]) {
                    FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
                  }
                  else {
                    *pppuVar23 = ppppuVar16;
                    ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                  }
                  pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
                  pppuVar23 = ppppuVar18[0x3d0];
                  if (pppuVar23 == ppppuVar18[0x3d1]) {
                    FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
                  }
                  else {
                    *(undefined4 *)pppuVar23 = 0xffffffff;
                    ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                  }
                }
                if ((6 < *(int *)(lVar11 + 0x440)) &&
                   ((*(byte *)(*(longlong *)(lVar11 + 0x438) + 6) & 0x20) != 0)) {
                  ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
                  *ppppuVar16 = (undefined8 ***)0x0;
                  ppppuVar16[1] = (undefined8 ***)0x0;
                  ppppuVar16[2] = (undefined8 ***)0x0;
                  ppppuVar16[3] = (undefined8 ***)0xf;
                  *(undefined1 *)ppppuVar16 = 0;
                  pppuStack_1a8 = ppppuVar16;
                  FUN_140070f00(ppppuVar16,&UNK_14161eaf8,0xd);
                  pppuVar23 = ppppuVar18[0x3cd];
                  if (pppuVar23 == ppppuVar18[0x3ce]) {
                    FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
                  }
                  else {
                    *pppuVar23 = ppppuVar16;
                    ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                  }
                  pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
                  pppuVar23 = ppppuVar18[0x3d0];
                  if (pppuVar23 == ppppuVar18[0x3d1]) {
                    FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
                  }
                  else {
                    *(undefined4 *)pppuVar23 = 0xffffffff;
                    ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                  }
                }
              }
            }
            if ((1 < *(int *)(lVar11 + 0x440)) &&
               ((*(byte *)(*(longlong *)(lVar11 + 0x438) + 1) & 8) != 0)) {
              ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
              *ppppuVar16 = (undefined8 ***)0x0;
              ppppuVar16[1] = (undefined8 ***)0x0;
              ppppuVar16[2] = (undefined8 ***)0x0;
              ppppuVar16[3] = (undefined8 ***)0xf;
              *(undefined1 *)ppppuVar16 = 0;
              pppuStack_1a8 = ppppuVar16;
              FUN_140070f00(ppppuVar16,&UNK_14161e950,0x10);
              pppuVar23 = ppppuVar18[0x3cd];
              if (pppuVar23 == ppppuVar18[0x3ce]) {
                FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
              }
              else {
                *pppuVar23 = ppppuVar16;
                ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
              }
              pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
              pppuVar23 = ppppuVar18[0x3d0];
              if (pppuVar23 == ppppuVar18[0x3d1]) {
                FUN_140072450(ppppuVar18 + 0x3cf,pppuVar23,&pppuStack_1b0);
              }
              else {
                *(undefined4 *)pppuVar23 = 0xffffffff;
                ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
              }
            }
            iVar29 = (int)(*(longlong *)(lVar11 + 0xe8) - *(longlong *)(lVar11 + 0xe0) >> 2) + -1;
            lVar20 = (longlong)iVar29;
            if (-1 < iVar29) {
              do {
                FUN_140070c00(apppuStack_108,
                              *(longlong *)
                               (_DAT_1425196e8 +
                               (longlong)*(int *)(*(longlong *)(lVar11 + 0xe0) + lVar20 * 4) * 8) +
                              0x20);
                FUN_140546b30(apppuStack_108);
                ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
                *ppppuVar16 = (undefined8 ***)0x0;
                ppppuVar16[1] = (undefined8 ***)0x0;
                ppppuVar16[2] = (undefined8 ***)0x0;
                ppppuVar16[3] = (undefined8 ***)0xf;
                *(undefined1 *)ppppuVar16 = 0;
                pppuStack_1a8 = ppppuVar16;
                if (ppppuVar16 != apppuStack_108) {
                  ppppuVar15 = apppuStack_108;
                  if (0xf < uStack_f0) {
                    ppppuVar15 = (undefined8 ****)apppuStack_108[0];
                  }
                  FUN_140070f00(ppppuVar16,ppppuVar15,uStack_f8);
                }
                pppuVar23 = ppppuVar18[0x3cd];
                if (pppuVar23 == ppppuVar18[0x3ce]) {
                  FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
                }
                else {
                  *pppuVar23 = ppppuVar16;
                  ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                }
                if (ppppuVar18[0x3d0] == ppppuVar18[0x3d1]) {
                  FUN_140072450(ppppuVar18 + 0x3cf);
                }
                else {
                  *(undefined4 *)ppppuVar18[0x3d0] =
                       *(undefined4 *)(*(longlong *)(lVar11 + 0xe0) + lVar20 * 4);
                  ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                }
                FUN_140070e80(apppuStack_108);
                lVar20 = lVar20 + -1;
              } while (-1 < lVar20);
            }
          }
          cVar4 = (**(code **)(*plStack_1a0 + 0x1b8))();
          if (cVar4 == '\0') goto code_r0x0001401ab33f;
          ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
          *ppppuVar16 = (undefined8 ***)0x0;
          ppppuVar16[1] = (undefined8 ***)0x0;
          ppppuVar16[2] = (undefined8 ***)0x0;
          ppppuVar16[3] = (undefined8 ***)0xf;
          *(undefined1 *)ppppuVar16 = 0;
          pppuStack_1a8 = ppppuVar16;
          FUN_140070f00(ppppuVar16,&UNK_14161e940,8);
          pppuVar23 = ppppuVar18[0x3cd];
          if (pppuVar23 == ppppuVar18[0x3ce]) {
            FUN_1400bc360(ppppuVar18 + 0x3cc,pppuVar23,&pppuStack_1a8);
          }
          else {
            *pppuVar23 = ppppuVar16;
            ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
          }
          ppppuVar16 = ppppuVar18 + 0x3cf;
          pppuVar23 = ppppuVar18[0x3d0];
          bVar30 = pppuVar23 == ppppuVar18[0x3d1];
        }
        else {
          if (sVar6 != 4) {
            if (sVar6 == 5) {
              pppuVar13 = (undefined8 ***)FUN_1415530e0(0x20);
              *pppuVar13 = (undefined8 **)0x0;
              pppuVar13[1] = (undefined8 **)0x0;
              pppuVar13[2] = (undefined8 **)0x0;
              pppuVar13[3] = (undefined8 **)0xf;
              *(undefined1 *)pppuVar13 = 0;
              pppuStack_1b0 = pppuVar13;
              FUN_140070f00(pppuVar13,&UNK_14161e968,0x12);
              pppuVar23 = ppppuVar18[0x3cd];
              if (pppuVar23 == ppppuVar18[0x3ce]) {
                FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1b0);
              }
              else {
                *pppuVar23 = pppuVar13;
                ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
              }
              pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
              pppuVar23 = ppppuVar18[0x3d0];
              if (pppuVar23 == ppppuVar18[0x3d1]) {
                FUN_140072450(ppppuVar15,pppuVar23,&pppuStack_1b0);
              }
              else {
                *(undefined4 *)pppuVar23 = 0xffffffff;
                ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
              }
              pppuVar13 = (undefined8 ***)FUN_1415530e0(0x20);
              *pppuVar13 = (undefined8 **)0x0;
              pppuVar13[1] = (undefined8 **)0x0;
              pppuVar13[2] = (undefined8 **)0x0;
              pppuVar13[3] = (undefined8 **)0xf;
              *(undefined1 *)pppuVar13 = 0;
              pppuStack_1b0 = pppuVar13;
              FUN_140070f00(pppuVar13,&UNK_14161e950,0x10);
              pppuVar23 = ppppuVar18[0x3cd];
              if (pppuVar23 == ppppuVar18[0x3ce]) {
                FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1b0);
              }
              else {
                *pppuVar23 = pppuVar13;
                ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
              }
              pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
              pppuVar23 = ppppuVar18[0x3d0];
              if (pppuVar23 == ppppuVar18[0x3d1]) {
                FUN_140072450(ppppuVar15,pppuVar23,&pppuStack_1b0);
              }
              else {
                *(undefined4 *)pppuVar23 = 0xffffffff;
                ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
              }
              cVar4 = (**(code **)(*plVar21 + 0x1b8))(plVar21);
              if (cVar4 != '\0') {
                pppuVar13 = (undefined8 ***)FUN_1415530e0(0x20);
                *pppuVar13 = (undefined8 **)0x0;
                pppuVar13[1] = (undefined8 **)0x0;
                pppuVar13[2] = (undefined8 **)0x0;
                pppuVar13[3] = (undefined8 **)0xf;
                *(undefined1 *)pppuVar13 = 0;
                pppuStack_1b0 = pppuVar13;
                FUN_140070f00(pppuVar13,&UNK_14161e940,8);
                pppuVar23 = ppppuVar18[0x3cd];
                if (pppuVar23 == ppppuVar18[0x3ce]) {
                  FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1b0);
                }
                else {
                  *pppuVar23 = pppuVar13;
                  ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                }
                pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
                pppuVar23 = ppppuVar18[0x3d0];
                if (pppuVar23 == ppppuVar18[0x3d1]) {
                  FUN_140072450(ppppuVar15,pppuVar23,&pppuStack_1b0);
                }
                else {
                  *(undefined4 *)pppuVar23 = 0xffffffff;
                  ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                }
              }
              if ((_DAT_1418be238 == 0) && (_DAT_1423bc668 != 0)) {
                piVar2 = *(int **)(_DAT_1423bc668 + 0x2a0);
                for (piVar27 = *(int **)(_DAT_1423bc668 + 0x298); piVar27 < piVar2;
                    piVar27 = piVar27 + 1) {
                  lVar11 = *(longlong *)(_DAT_1425196e8 + (longlong)*piVar27 * 8);
                  puVar3 = *(undefined8 **)(lVar11 + 0x58);
                  for (puVar26 = *(undefined8 **)(lVar11 + 0x50); puVar26 < puVar3;
                      puVar26 = puVar26 + 1) {
                    cVar4 = (**(code **)(*(longlong *)*puVar26 + 0x28))
                                      ((longlong *)*puVar26,plStack_1a0,*piVar27);
                    if (cVar4 != '\0') {
                      FUN_140070c00(apppuStack_148,lVar11 + 0x20);
                      FUN_140546b30(apppuStack_148);
                      ppppuVar12 = (undefined8 ****)FUN_1415530e0(0x20);
                      *ppppuVar12 = (undefined8 ***)0x0;
                      ppppuVar12[1] = (undefined8 ***)0x0;
                      ppppuVar12[2] = (undefined8 ***)0x0;
                      ppppuVar12[3] = (undefined8 ***)0xf;
                      *(undefined1 *)ppppuVar12 = 0;
                      pppuStack_1b0 = ppppuVar12;
                      if (ppppuVar12 != apppuStack_148) {
                        ppppuVar22 = apppuStack_148;
                        if (0xf < uStack_130) {
                          ppppuVar22 = (undefined8 ****)apppuStack_148[0];
                        }
                        FUN_140070f00(ppppuVar12,ppppuVar22,uStack_138);
                      }
                      pppuVar23 = ppppuVar18[0x3cd];
                      if (pppuVar23 == ppppuVar18[0x3ce]) {
                        FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1b0);
                      }
                      else {
                        *pppuVar23 = ppppuVar12;
                        ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                      }
                      pppuVar23 = ppppuVar18[0x3d0];
                      if (pppuVar23 == ppppuVar18[0x3d1]) {
                        FUN_140072450(ppppuVar15,pppuVar23,piVar27);
                      }
                      else {
                        *(int *)pppuVar23 = *piVar27;
                        ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                      }
                      FUN_140070e80(apppuStack_148);
                      break;
                    }
                  }
                }
              }
            }
            else if ((_DAT_1418be238 == 0) && (_DAT_1423bc668 != 0)) {
              piVar2 = *(int **)(_DAT_1423bc668 + 0x2a0);
              for (piVar27 = *(int **)(_DAT_1423bc668 + 0x298); piVar27 < piVar2;
                  piVar27 = piVar27 + 1) {
                lVar11 = *(longlong *)(_DAT_1425196e8 + (longlong)*piVar27 * 8);
                puVar3 = *(undefined8 **)(lVar11 + 0x58);
                for (puVar26 = *(undefined8 **)(lVar11 + 0x50); puVar26 < puVar3;
                    puVar26 = puVar26 + 1) {
                  cVar4 = (**(code **)(*(longlong *)*puVar26 + 0x28))
                                    ((longlong *)*puVar26,plStack_1a0,*piVar27);
                  if (cVar4 != '\0') {
                    FUN_140070c00(apppuStack_168,lVar11 + 0x20);
                    FUN_140546b30(apppuStack_168);
                    ppppuVar12 = (undefined8 ****)FUN_1415530e0(0x20);
                    *ppppuVar12 = (undefined8 ***)0x0;
                    ppppuVar12[1] = (undefined8 ***)0x0;
                    ppppuVar12[2] = (undefined8 ***)0x0;
                    ppppuVar12[3] = (undefined8 ***)0xf;
                    *(undefined1 *)ppppuVar12 = 0;
                    pppuStack_1b0 = ppppuVar12;
                    if (ppppuVar12 != apppuStack_168) {
                      ppppuVar22 = apppuStack_168;
                      if (0xf < uStack_150) {
                        ppppuVar22 = (undefined8 ****)apppuStack_168[0];
                      }
                      FUN_140070f00(ppppuVar12,ppppuVar22,uStack_158);
                    }
                    pppuVar23 = ppppuVar18[0x3cd];
                    if (pppuVar23 == ppppuVar18[0x3ce]) {
                      FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1b0);
                    }
                    else {
                      *pppuVar23 = ppppuVar12;
                      ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                    }
                    pppuVar23 = ppppuVar18[0x3d0];
                    if (pppuVar23 == ppppuVar18[0x3d1]) {
                      FUN_140072450(ppppuVar15,pppuVar23,piVar27);
                    }
                    else {
                      *(int *)pppuVar23 = *piVar27;
                      ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                    }
                    FUN_140070e80(apppuStack_168);
                    break;
                  }
                }
              }
            }
            goto code_r0x0001401ab33f;
          }
          ppppuVar12 = ppppuVar18;
          if (sVar5 == 0) {
            puStack_198 = (undefined8 *)0x0;
            lStack_190 = 0;
            iVar7 = 0;
            uStack_188 = 0;
            puStack_180 = (undefined4 *)0x0;
            uStack_178 = 0;
            uStack_170 = 0;
            FUN_140daf200(0x14250ed48,iVar29,&puStack_198,&puStack_180);
            uVar14 = lStack_190 - (longlong)puStack_198 >> 3;
            puVar28 = puStack_180;
            puVar26 = puStack_198;
            if (uVar14 != 0) {
              do {
                FUN_140070c00(apppuStack_128,*puVar26);
                FUN_140546b30(apppuStack_128);
                ppppuVar12 = (undefined8 ****)FUN_1415530e0(0x20);
                *ppppuVar12 = (undefined8 ***)0x0;
                ppppuVar12[1] = (undefined8 ***)0x0;
                ppppuVar12[2] = (undefined8 ***)0x0;
                ppppuVar12[3] = (undefined8 ***)0xf;
                *(undefined1 *)ppppuVar12 = 0;
                pppuStack_1b0 = ppppuVar12;
                if (ppppuVar12 != apppuStack_128) {
                  ppppuVar22 = apppuStack_128;
                  if (0xf < uStack_110) {
                    ppppuVar22 = (undefined8 ****)apppuStack_128[0];
                  }
                  FUN_140070f00(ppppuVar12,ppppuVar22,uStack_118);
                }
                pppuVar23 = ppppuVar18[0x3cd];
                if (pppuVar23 == ppppuVar18[0x3ce]) {
                  FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1b0);
                }
                else {
                  *pppuVar23 = ppppuVar12;
                  ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
                }
                pppuVar23 = ppppuVar18[0x3d0];
                if (pppuVar23 == ppppuVar18[0x3d1]) {
                  FUN_140072450(ppppuVar15,pppuVar23,puVar28);
                }
                else {
                  *(undefined4 *)pppuVar23 = *puVar28;
                  ppppuVar18[0x3d0] = (undefined8 ***)((longlong)ppppuVar18[0x3d0] + 4);
                }
                FUN_140070e80(apppuStack_128);
                iVar7 = iVar7 + 1;
                plVar21 = plStack_1a0;
                puVar28 = puVar28 + 1;
                ppppuVar12 = (undefined8 ****)pppuStack_1a8;
                puVar26 = puVar26 + 1;
              } while ((ulonglong)(longlong)iVar7 < uVar14);
            }
            FUN_140070d80(&puStack_180);
            FUN_1400bcfe0(&puStack_198);
            FUN_1400681a0(&puStack_198);
          }
          ppppuVar15 = (undefined8 ****)FUN_1415530e0(0x20);
          *ppppuVar15 = (undefined8 ***)0x0;
          ppppuVar15[1] = (undefined8 ***)0x0;
          ppppuVar15[2] = (undefined8 ***)0x0;
          ppppuVar15[3] = (undefined8 ***)0xf;
          *(undefined1 *)ppppuVar15 = 0;
          pppuStack_1a8 = ppppuVar15;
          FUN_140070f00(ppppuVar15,&UNK_14161e950,0x10);
          pppuVar23 = ppppuVar18[0x3cd];
          if (pppuVar23 == ppppuVar18[0x3ce]) {
            FUN_1400bc360(ppppuVar16,pppuVar23,&pppuStack_1a8);
          }
          else {
            *pppuVar23 = ppppuVar15;
            ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
          }
          pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
          pppuVar23 = ppppuVar12[0x3d0];
          if (pppuVar23 == ppppuVar12[0x3d1]) {
            FUN_140072450(ppppuVar12 + 0x3cf,pppuVar23,&pppuStack_1b0);
          }
          else {
            *(undefined4 *)pppuVar23 = 0xffffffff;
            ppppuVar12[0x3d0] = (undefined8 ***)((longlong)ppppuVar12[0x3d0] + 4);
          }
          cVar4 = (**(code **)(*plVar21 + 0x1b8))(plVar21);
          if (cVar4 == '\0') goto code_r0x0001401ab33f;
          ppppuVar16 = (undefined8 ****)FUN_1415530e0(0x20);
          *ppppuVar16 = (undefined8 ***)0x0;
          ppppuVar16[1] = (undefined8 ***)0x0;
          ppppuVar16[2] = (undefined8 ***)0x0;
          ppppuVar16[3] = (undefined8 ***)0xf;
          *(undefined1 *)ppppuVar16 = 0;
          pppuStack_1a8 = ppppuVar16;
          FUN_140070f00(ppppuVar16,&UNK_14161e940,8);
          pppuVar23 = ppppuVar18[0x3cd];
          if (pppuVar23 == ppppuVar18[0x3ce]) {
            FUN_1400bc360(ppppuVar12 + 0x3cc,pppuVar23,&pppuStack_1a8);
            ppppuVar16 = ppppuVar12 + 0x3cf;
            pppuVar23 = ppppuVar12[0x3d0];
            bVar30 = pppuVar23 == ppppuVar12[0x3d1];
          }
          else {
            *pppuVar23 = ppppuVar16;
            ppppuVar18[0x3cd] = ppppuVar18[0x3cd] + 1;
            ppppuVar16 = ppppuVar12 + 0x3cf;
            pppuVar23 = ppppuVar12[0x3d0];
            bVar30 = pppuVar23 == ppppuVar12[0x3d1];
          }
        }
        pppuStack_1b0 = (undefined8 ***)CONCAT44(pppuStack_1b0._4_4_,0xffffffff);
        if (bVar30) {
          FUN_140072450(ppppuVar16,pppuVar23,&pppuStack_1b0);
        }
        else {
          *(undefined4 *)pppuVar23 = 0xffffffff;
          ppppuVar16[1] = (undefined8 ***)((longlong)ppppuVar16[1] + 4);
        }
code_r0x0001401ab33f:
        FUN_1415530b0(uStack_e8 ^ (ulonglong)auStack_1e0);
        return;
      }
      FUN_1400bbee0(&DAT_1418c3760,&pppuStack_60);
    }
    plVar24 = _DAT_1418c3750;
    plStack_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    plStack_68 = (longlong *)0x0;
    plVar21 = _DAT_1418c3748;
LAB_1401a9e87:
    lVar11 = lStack_58;
    plVar19 = plStack_70;
    plVar25 = plStack_78;
    if (plVar21 < plVar24) {
      plVar25 = (longlong *)*plVar21;
      plVar19 = plVar25 + 3;
      ppppuVar18 = apppuStack_50;
      if (0xf < uStack_38) {
        ppppuVar18 = (undefined8 ****)apppuStack_50[0];
      }
      if (0xf < (ulonglong)plVar25[6]) {
        plVar19 = (longlong *)*plVar19;
      }
      uStack_88 = uStack_40;
      lVar11 = FUN_1400e2fc0(plVar19,plVar25[5],0,ppppuVar18);
      if (lVar11 == -1) {
LAB_1401aa041:
        plVar21 = plVar21 + 1;
      }
      else {
        cVar4 = (**(code **)(*plVar25 + 0x50))(plVar25);
        if (cVar4 == '\0') {
          if (_DAT_1418c3768 == _DAT_1418c3770) {
            FUN_1400bc360(&DAT_1418c3760);
            goto LAB_1401aa041;
          }
          *_DAT_1418c3768 = *plVar21;
          _DAT_1418c3768 = _DAT_1418c3768 + 1;
          plVar21 = plVar21 + 1;
        }
        else {
          lVar11 = (longlong)plStack_70 - (longlong)plStack_78 >> 3;
          if ((lVar11 != 0) && (iVar29 = 0, lVar11 != 0)) {
            lVar11 = 0;
            plVar19 = plStack_78;
            do {
              plVar25 = (longlong *)*plVar21;
              iVar7 = (**(code **)(**(longlong **)(lVar11 + (longlong)plVar19) + 0x78))();
              iVar8 = (**(code **)(*plVar25 + 0x78))(plVar25);
              plVar19 = plStack_78;
              if (iVar8 < iVar7) {
LAB_1401a9fa0:
                plVar19 = plVar19 + iVar29;
                if (plStack_70 == plStack_68) goto LAB_1401a9ff6;
                lVar11 = *plVar21;
                if (plVar19 == plStack_70) {
                  *plStack_70 = lVar11;
                  plStack_70 = plStack_70 + 1;
                  plVar21 = plVar21 + 1;
                }
                else {
                  *plStack_70 = plStack_70[-1];
                  lVar20 = (longlong)plStack_70 - ((longlong)(plStack_70 + -1) - (longlong)plVar19);
                  plStack_70 = plStack_70 + 1;
                  func_0x00014155486a(lVar20,plVar19);
                  *plVar19 = lVar11;
                  plVar21 = plVar21 + 1;
                }
                goto LAB_1401a9e87;
              }
              plVar19 = *(longlong **)(lVar11 + (longlong)plStack_78);
              iVar7 = (**(code **)(*(longlong *)*plVar21 + 0x78))();
              iVar8 = (**(code **)(*plVar19 + 0x78))(plVar19);
              plVar19 = plStack_78;
              if ((iVar7 == iVar8) &&
                 (cVar4 = FUN_1400bb380(*plVar21 + 0x18,
                                        *(longlong *)(lVar11 + (longlong)plStack_78) + 0x18),
                 cVar4 < '\0')) goto LAB_1401a9fa0;
              iVar29 = iVar29 + 1;
              lVar11 = lVar11 + 8;
            } while ((ulonglong)(longlong)iVar29 <
                     (ulonglong)((longlong)plStack_70 - (longlong)plVar19 >> 3));
          }
          plVar19 = plStack_70;
          if (plStack_70 == plStack_68) {
LAB_1401a9ff6:
            FUN_1400bc360(&plStack_78,plVar19);
            plVar21 = plVar21 + 1;
          }
          else {
            *plStack_70 = *plVar21;
            plStack_70 = plStack_70 + 1;
            plVar21 = plVar21 + 1;
          }
        }
      }
      goto LAB_1401a9e87;
    }
    while (plVar25 < plVar19) {
      if (_DAT_1418c3768 == _DAT_1418c3770) {
        FUN_1400bc360(&DAT_1418c3760,_DAT_1418c3768,plVar25);
        plVar25 = plVar25 + 1;
      }
      else {
        *_DAT_1418c3768 = *plVar25;
        _DAT_1418c3768 = _DAT_1418c3768 + 1;
        plVar25 = plVar25 + 1;
      }
    }
    func_0x000140c4b030(&pppuStack_60);
    if (*(int *)(lVar11 + 8) == 2) {
      iVar29 = *(int *)(lVar11 + 0xc);
      lVar20 = _DAT_142410398 - _DAT_142410390 >> 3;
      if ((lVar20 != 0) && (iVar29 != -1)) {
        iVar7 = 0;
        iVar8 = (int)lVar20 + -1;
        if (-1 < iVar8) {
          do {
            iVar17 = iVar7 + iVar8 >> 1;
            plVar24 = *(longlong **)(_DAT_142410390 + (longlong)iVar17 * 8);
            if ((int)plVar24[10] == iVar29) goto LAB_1401aa109;
            iVar9 = iVar17 + -1;
            if ((int)plVar24[10] < iVar29) {
              iVar9 = iVar8;
              iVar7 = iVar17 + 1;
            }
            iVar8 = iVar9;
          } while (iVar7 <= iVar9);
        }
        plVar24 = (longlong *)0x0;
LAB_1401aa109:
        if ((plVar24 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar24 + 0xe8))(plVar24), cVar4 != '\0')) {
          FUN_1405cb930(plVar24);
        }
      }
    }
    iVar29 = _DAT_1423efc08 + -0x17;
    iVar29 = iVar29 / 3 + (iVar29 >> 0x1f) +
             (int)(((longlong)iVar29 / 3 + ((longlong)iVar29 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar7 = (int)((longlong)_DAT_1418c3768 - (longlong)_DAT_1418c3760 >> 3);
    if ((iVar7 < *(int *)(lVar11 + 0x1d04) + iVar29) &&
       (iVar7 = iVar7 - iVar29, *(int *)(lVar11 + 0x1d04) = iVar7, iVar7 < 0)) {
      *(undefined4 *)(lVar11 + 0x1d04) = 0;
    }
    FUN_1400681a0(&plStack_78);
    FUN_140070e80(apppuStack_50);
  }
  FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_a8);
  return;
}

