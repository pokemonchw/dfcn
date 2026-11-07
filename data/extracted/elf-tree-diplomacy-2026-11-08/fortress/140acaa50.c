
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acaa50(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined4 *puVar20;
  int iVar21;
  ulonglong uVar22;
  int iStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong *plStack_48;
  longlong lStack_40;
  int *piStack_38;
  
  iVar18 = *param_2;
  iVar10 = (int)(_DAT_1423e50b8 - _DAT_1423e50b0 >> 3);
  if ((iVar10 == 0) || (iVar18 == -1)) {
    iVar18 = param_2[1];
    lVar19 = 0;
    if (iVar10 != 0) goto LAB_140acaaef;
  }
  else {
    iVar9 = iVar10 + -1;
    iVar21 = 0;
    lVar19 = 0;
    if (-1 < iVar9) {
      do {
        iVar17 = iVar21 + iVar9 >> 1;
        lVar19 = *(longlong *)(_DAT_1423e50b0 + (longlong)iVar17 * 8);
        iVar2 = *(int *)(lVar19 + 0x130);
        if (iVar2 == iVar18) break;
        iVar6 = iVar17 + -1;
        if (iVar2 < iVar18) {
          iVar6 = iVar9;
          iVar21 = iVar17 + 1;
        }
        iVar9 = iVar6;
        lVar19 = 0;
      } while (iVar21 <= iVar9);
    }
    iVar18 = param_2[1];
LAB_140acaaef:
    if (iVar18 != -1) {
      iVar10 = iVar10 + -1;
      iVar21 = 0;
      if (-1 < iVar10) {
        do {
          iVar9 = iVar21 + iVar10 >> 1;
          lVar13 = *(longlong *)(_DAT_1423e50b0 + (longlong)iVar9 * 8);
          if (*(int *)(lVar13 + 0x130) == iVar18) goto LAB_140acab2c;
          iVar2 = iVar9 + -1;
          if (*(int *)(lVar13 + 0x130) < iVar18) {
            iVar2 = iVar10;
            iVar21 = iVar9 + 1;
          }
          iVar10 = iVar2;
        } while (iVar21 <= iVar10);
      }
    }
  }
  lVar13 = 0;
LAB_140acab2c:
  if (lVar19 == 0) {
    return;
  }
  if (lVar13 == 0) {
    return;
  }
  if (*param_1 == -1) {
    return;
  }
  if ((_DAT_1423d1800 - _DAT_1423d17f8 & 0xfffffffffffffff8U) == 0) {
    return;
  }
  piStack_70 = param_1;
  lVar12 = FUN_1400ba0a0(*param_1,&DAT_1423d17f8);
  if (lVar12 == 0) {
    return;
  }
  piVar1 = (int *)(lVar12 + 4);
  piStack_38 = piVar1;
  cVar7 = FUN_1413b9c00(lVar19,5,*piVar1,0xffffffff,0xffffffff);
  if (cVar7 == '\0') {
    iVar18 = *param_1;
    if (iVar18 != _DAT_142393670) {
      sVar8 = 0;
      if ((6 < *(int *)(*(longlong *)(lVar12 + 8) + 0x3a8)) &&
         ((*(byte *)(*(longlong *)(*(longlong *)(lVar12 + 8) + 0x3a0) + 6) & 1) != 0)) {
        if ((((_DAT_1423d1800 - _DAT_1423d17f8 & 0xfffffffffffffff8U) != 0) && (iVar18 != -1)) &&
           ((lVar19 = FUN_1400ba0a0(iVar18,&DAT_1423d17f8), lVar19 != 0 &&
            (lVar19 = FUN_1400b9dc0(_DAT_142393678,lVar19 + 0x1028), sVar8 = 0, lVar19 != 0)))) {
          sVar8 = *(short *)(lVar19 + 4);
        }
        lStack_68 = 0;
        lStack_60 = 0;
        uStack_58 = 0;
        if ((sVar8 - 1U & 0xfffb) == 0) {
          iStack_78 = 1;
          puVar20 = *(undefined4 **)(param_1 + 6);
          if (puVar20 == *(undefined4 **)(param_1 + 8)) {
            FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
          }
          else {
            *puVar20 = 1;
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
          }
          iStack_78 = -1;
          puVar20 = *(undefined4 **)(param_1 + 0xc);
          if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
            FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
          }
          else {
            *puVar20 = 0xffffffff;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
          }
        }
        FUN_14134bb20(lVar13,_DAT_142393670,_DAT_142393678);
        iStack_78 = 2;
        FUN_140070e20(&lStack_68,0,&iStack_78);
        uVar11 = FUN_140eb68b0();
        lVar19 = lStack_68;
        if ((short)((ulonglong)
                    (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x2aaaaaab) != -2) {
          while (lVar13 = lStack_60, uVar22 = lStack_60 - lVar19 >> 2, param_1 = piStack_70,
                uVar22 != 0) {
            uVar11 = 0;
            if (1 < (uint)uVar22) {
              uVar11 = FUN_140eb68b0();
              uVar11 = (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / ((int)(0x7fffffff / (uVar22 & 0xffffffff)) + 1U);
            }
            puVar20 = (undefined4 *)(lVar19 + (longlong)(int)uVar11 * 4);
            puVar4 = *(undefined4 **)(piStack_70 + 6);
            if (puVar4 == *(undefined4 **)(piStack_70 + 8)) {
              FUN_140070e20(piStack_70 + 4,puVar4,puVar20);
            }
            else {
              *puVar4 = *puVar20;
              *(longlong *)(piStack_70 + 6) = *(longlong *)(piStack_70 + 6) + 4;
            }
            iStack_78 = -1;
            puVar4 = *(undefined4 **)(piStack_70 + 0xc);
            if (puVar4 == *(undefined4 **)(piStack_70 + 0xe)) {
              FUN_140070e20(piStack_70 + 10,puVar4,&iStack_78);
            }
            else {
              *puVar4 = 0xffffffff;
              *(longlong *)(piStack_70 + 0xc) = *(longlong *)(piStack_70 + 0xc) + 4;
            }
            func_0x00014153ae1a(puVar20,puVar20 + 1,lVar13 - (longlong)(puVar20 + 1));
            lStack_60 = lVar13 + -4;
          }
        }
        iVar18 = (int)(*(longlong *)(lVar12 + 0x13a0) - *(longlong *)(lVar12 + 0x1398) >> 3);
        while (iVar18 = iVar18 + -1, iStack_78 = iVar18, -1 < iVar18) {
          if (**(short **)(*(longlong *)(lVar12 + 0x1398) + (longlong)iVar18 * 8) == 0) {
            uStack_74 = 0;
            puVar20 = *(undefined4 **)(param_1 + 6);
            if (puVar20 == *(undefined4 **)(param_1 + 8)) {
              FUN_140070e20(param_1 + 4,puVar20,&uStack_74);
            }
            else {
              *puVar20 = 0;
              *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
            }
            piVar1 = *(int **)(param_1 + 0xc);
            if (piVar1 == *(int **)(param_1 + 0xe)) {
              FUN_140070e20(param_1 + 10,piVar1,&iStack_78);
            }
            else {
              *piVar1 = iVar18;
              *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
            }
          }
        }
        if ((sVar8 - 1U & 0xfffb) != 0) {
          iStack_78 = 8;
          puVar20 = *(undefined4 **)(param_1 + 6);
          if (puVar20 == *(undefined4 **)(param_1 + 8)) {
            FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
          }
          else {
            *puVar20 = 8;
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
          }
          iStack_78 = -1;
          puVar20 = *(undefined4 **)(param_1 + 0xc);
          if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
            FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
          }
          else {
            *puVar20 = 0xffffffff;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
          }
        }
        goto LAB_140acb801;
      }
      sVar8 = 0;
      if (((_DAT_1423d1800 - _DAT_1423d17f8 & 0xfffffffffffffff8U) != 0) &&
         (((iVar18 != -1 && (lVar19 = FUN_1400ba0a0(iVar18,&DAT_1423d17f8), lVar19 != 0)) &&
          (lVar19 = FUN_1400b9dc0(_DAT_142393678,lVar19 + 0x1028), lVar19 != 0)))) {
        sVar8 = *(short *)(lVar19 + 4);
      }
      lStack_68 = 0;
      lStack_60 = 0;
      uStack_58 = 0;
      if ((sVar8 - 1U & 0xfffb) == 0) {
        iStack_78 = 1;
        puVar20 = *(undefined4 **)(param_1 + 6);
        if (puVar20 == *(undefined4 **)(param_1 + 8)) {
          FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
        }
        else {
          *puVar20 = 1;
          *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
        }
        plVar16 = (longlong *)(param_1 + 10);
        iStack_78 = -1;
        puVar20 = *(undefined4 **)(param_1 + 0xc);
        if (puVar20 == *(undefined4 **)(param_1 + 0xe)) goto LAB_140acb591;
        *puVar20 = 0xffffffff;
        *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
      }
      else {
        iStack_78 = 7;
        puVar20 = (undefined4 *)0x0;
        plVar16 = &lStack_68;
LAB_140acb591:
        FUN_140070e20(plVar16,puVar20,&iStack_78);
      }
      FUN_14134bb20(lVar13,_DAT_142393670,_DAT_142393678);
      uVar11 = FUN_140eb68b0();
      lVar19 = lStack_68;
      piVar1 = piStack_70;
      if ((short)((ulonglong)
                  (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / 0x2aaaaaab) != -2) {
        while (lVar13 = lStack_60, uVar22 = lStack_60 - lVar19 >> 2, param_1 = piStack_70,
              uVar22 != 0) {
          uVar11 = 0;
          if (1 < (uint)uVar22) {
            uVar11 = FUN_140eb68b0();
            uVar11 = (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar22 & 0xffffffff)) + 1U);
          }
          puVar20 = (undefined4 *)(lVar19 + (longlong)(int)uVar11 * 4);
          puVar4 = *(undefined4 **)(piVar1 + 6);
          if (puVar4 == *(undefined4 **)(piVar1 + 8)) {
            FUN_140070e20(piVar1 + 4,puVar4,puVar20);
          }
          else {
            *puVar4 = *puVar20;
            *(longlong *)(piVar1 + 6) = *(longlong *)(piVar1 + 6) + 4;
          }
          iStack_78 = -1;
          puVar4 = *(undefined4 **)(piVar1 + 0xc);
          if (puVar4 == *(undefined4 **)(piVar1 + 0xe)) {
            FUN_140070e20(piVar1 + 10,puVar4,&iStack_78);
          }
          else {
            *puVar4 = 0xffffffff;
            *(longlong *)(piVar1 + 0xc) = *(longlong *)(piVar1 + 0xc) + 4;
          }
          func_0x00014153ae1a(puVar20,puVar20 + 1,lVar13 - (longlong)(puVar20 + 1));
          lStack_60 = lVar13 + -4;
        }
      }
      iVar18 = (int)(*(longlong *)(lVar12 + 0x13a0) - *(longlong *)(lVar12 + 0x1398) >> 3);
      while (iVar18 = iVar18 + -1, iStack_78 = iVar18, -1 < iVar18) {
        if (**(short **)(*(longlong *)(lVar12 + 0x1398) + (longlong)iVar18 * 8) == 0) {
          uStack_74 = 0;
          puVar20 = *(undefined4 **)(param_1 + 6);
          if (puVar20 == *(undefined4 **)(param_1 + 8)) {
            FUN_140070e20(param_1 + 4,puVar20,&uStack_74);
          }
          else {
            *puVar20 = 0;
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
          }
          piVar1 = *(int **)(param_1 + 0xc);
          if (piVar1 == *(int **)(param_1 + 0xe)) {
            FUN_140070e20(param_1 + 10,piVar1,&iStack_78);
          }
          else {
            *piVar1 = iVar18;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
          }
        }
      }
      if ((sVar8 - 1U & 0xfffb) != 0) {
        iStack_78 = 8;
        puVar20 = *(undefined4 **)(param_1 + 6);
        if (puVar20 == *(undefined4 **)(param_1 + 8)) {
          FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
        }
        else {
          *puVar20 = 8;
          *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
        }
        iStack_78 = -1;
        puVar20 = *(undefined4 **)(param_1 + 0xc);
        if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
          FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
        }
        else {
          *puVar20 = 0xffffffff;
          *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
        }
      }
LAB_140acb801:
      FUN_14006f750(&lStack_68);
      return;
    }
    sVar8 = FUN_14099a910(lVar12,_DAT_142393674);
    uStack_74 = CONCAT22(uStack_74._2_2_,sVar8);
    bVar5 = false;
    plStack_48 = (longlong *)(lVar12 + 0x10c0);
    iVar18 = (int)(*(longlong *)(lVar12 + 0x10c8) - *plStack_48 >> 3) + -1;
    lVar19 = (longlong)iVar18;
    if (-1 < iVar18) {
      do {
        lVar13 = *(longlong *)(*plStack_48 + lVar19 * 8);
        if ((*(short *)(lVar13 + 0x2d8) == -1) && ((int)*(short *)(lVar13 + 0x2c8) == sVar8 + 1)) {
          bVar5 = true;
        }
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
      if (bVar5) {
        iStack_78 = -1;
        lStack_40 = lVar12 + 0xd0;
        lVar19 = FUN_1400b9dc0(_DAT_142393674,lStack_40);
        if ((lVar19 != 0) && (*(int *)(lVar19 + 4) == *piVar1)) {
          iStack_78 = *(int *)(lVar19 + 0xc);
        }
        iVar18 = iStack_78;
        lStack_68 = 0;
        lStack_60 = 0;
        uStack_58 = 0;
        plVar16 = *(longlong **)(_DAT_1424ebb58 + 0x178);
        plVar3 = *(longlong **)(_DAT_1424ebb58 + 0x180);
        while (plVar16 < plVar3) {
          lVar19 = *plVar16;
          lVar13 = func_0x0001409b4e70(lVar19);
          if ((lVar13 == 0) || (lVar13 == _DAT_14239a1e8)) {
LAB_140acaea3:
            plVar16 = plVar16 + 1;
          }
          else {
            lStack_50 = FUN_14093ce30(lVar13);
            iVar10 = *(int *)(lVar19 + 0x88);
            iStack_78 = iVar10;
            lVar14 = FUN_1400b9dc0(iVar10,lStack_40);
            lVar19 = lStack_50;
            if ((iVar18 == -1) || (lVar14 == 0)) {
LAB_140acae3c:
              lVar14 = FUN_1400b9dc0(*(undefined4 *)(lVar13 + 4),_DAT_14239a1e8 + 0x1028);
              if (((lVar14 == 0) || (*(short *)(lVar14 + 4) != 3)) || (lVar19 != lVar12)) {
                for (puVar15 = *(undefined8 **)(lVar13 + 0xd0);
                    puVar15 < *(undefined8 **)(lVar13 + 0xd8); puVar15 = puVar15 + 1) {
                  if ((*(byte *)((int *)*puVar15 + 7) & 8) != 0) {
                    iVar10 = *(int *)*puVar15;
                    goto LAB_140acae8f;
                  }
                }
                iVar10 = -1;
LAB_140acae8f:
                if (iVar10 != _DAT_142393674) goto LAB_140acaea3;
              }
LAB_140acae97:
              FUN_1400b9e70(iStack_78,&lStack_68);
              goto LAB_140acaea3;
            }
            if (*(int *)(lVar14 + 0xc) != iVar18) {
              if ((((*(int *)(lVar14 + 0xc) == -1) ||
                   (lVar14 = FUN_1400b9dc0(*(int *)(lVar14 + 0xc),lStack_50 + 0x1110), lVar14 == 0))
                  || (*(int *)(lVar14 + 0x34) != *piStack_38)) ||
                 (*(int *)(lVar14 + 0x38) != iVar18)) goto LAB_140acae3c;
              goto LAB_140acae97;
            }
            FUN_1400b9e70(iVar10,&lStack_68);
            plVar16 = plVar16 + 1;
          }
        }
        lVar19 = lStack_60 - lStack_68;
        FUN_140e638d0(0x142391230);
        FUN_140e64380(0x142391230);
        FUN_140e640d0(0x142391230);
        param_1 = piStack_70;
        iVar9 = (int)_DAT_14239158c;
        iVar21 = (int)(lVar19 >> 2);
        sVar8 = 0;
        iVar18 = _DAT_142391780;
        iVar10 = _DAT_1423917a8;
        if (0 < iVar21) {
          iVar18 = _DAT_142391780 + iVar21 * 20000;
          iVar10 = _DAT_1423917a8 + iVar21 * 2000;
        }
        if (((_DAT_14239a140 <= iVar9) && (_DAT_14239a168 <= iVar18)) && (_DAT_14239a190 <= iVar10))
        {
          sVar8 = 1;
        }
        if (((_DAT_14239a144 <= iVar9) && (_DAT_14239a16c <= iVar18)) && (_DAT_14239a194 <= iVar10))
        {
          sVar8 = 2;
        }
        if (((_DAT_14239a148 <= iVar9) && (_DAT_14239a170 <= iVar18)) && (_DAT_14239a198 <= iVar10))
        {
          sVar8 = 3;
        }
        if (((_DAT_14239a14c <= iVar9) && (_DAT_14239a174 <= iVar18)) && (_DAT_14239a19c <= iVar10))
        {
          sVar8 = 4;
        }
        if (((_DAT_14239a150 <= iVar9) && (_DAT_14239a178 <= iVar18)) && (_DAT_14239a1a0 <= iVar10))
        {
          sVar8 = 5;
        }
        if (((_DAT_14239a154 <= iVar9) && (_DAT_14239a17c <= iVar18)) && (_DAT_14239a1a4 <= iVar10))
        {
          sVar8 = 6;
        }
        if (((_DAT_14239a158 <= iVar9) && (_DAT_14239a180 <= iVar18)) && (_DAT_14239a1a8 <= iVar10))
        {
          sVar8 = 7;
        }
        if (((_DAT_14239a15c <= iVar9) && (_DAT_14239a184 <= iVar18)) && (_DAT_14239a1ac <= iVar10))
        {
          sVar8 = 8;
        }
        if (((_DAT_14239a160 <= iVar9) && (_DAT_14239a188 <= iVar18)) && (_DAT_14239a1b0 <= iVar10))
        {
          sVar8 = 9;
        }
        if (((_DAT_14239a164 <= iVar9) && (_DAT_14239a18c <= iVar18)) && (_DAT_14239a1b4 <= iVar10))
        {
          sVar8 = 10;
        }
        if ((short)uStack_74 < sVar8) {
          plVar16 = (longlong *)*plStack_48;
          do {
            for (; plVar16 < (longlong *)plStack_48[1]; plVar16 = plVar16 + 1) {
              lVar19 = *plVar16;
              if (((*(short *)(lVar19 + 0x2c8) == sVar8) &&
                  ((*(int *)(lVar19 + 0x30) < 3 ||
                   ((*(byte *)(*(longlong *)(lVar19 + 0x28) + 2) & 8) == 0)))) &&
                 (*(short *)(lVar19 + 0x2d8) == -1)) {
                if ((short)uStack_74 < sVar8) {
                  puVar20 = *(undefined4 **)(piStack_70 + 6);
                  if ((short)uStack_74 == 0) {
                    iStack_78 = 3;
                    if (puVar20 == *(undefined4 **)(piStack_70 + 8)) {
LAB_140acb102:
                      FUN_140070e20(piStack_70 + 4,puVar20,&iStack_78);
                    }
                    else {
                      *puVar20 = 3;
                      *(longlong *)(piStack_70 + 6) = *(longlong *)(piStack_70 + 6) + 4;
                    }
                  }
                  else {
                    iStack_78 = 4;
                    if (puVar20 == *(undefined4 **)(piStack_70 + 8)) goto LAB_140acb102;
                    *puVar20 = 4;
                    *(longlong *)(piStack_70 + 6) = *(longlong *)(piStack_70 + 6) + 4;
                  }
                  iStack_78 = -1;
                  puVar20 = *(undefined4 **)(param_1 + 0xc);
                  if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
                    FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
                  }
                  else {
                    *puVar20 = 0xffffffff;
                    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
                  }
                }
                goto LAB_140acb0aa;
              }
            }
            sVar8 = sVar8 + -1;
            plVar16 = (longlong *)*plStack_48;
          } while ((short)uStack_74 < sVar8);
        }
LAB_140acb0aa:
        FUN_14006f750(&lStack_68);
      }
    }
    iStack_78 = 8;
    puVar20 = *(undefined4 **)(param_1 + 6);
    if (puVar20 == *(undefined4 **)(param_1 + 8)) {
      FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 8;
      *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
    }
    iStack_78 = -1;
    puVar20 = *(undefined4 **)(param_1 + 0xc);
    if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
      FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 0xffffffff;
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
    }
    iStack_78 = 6;
    puVar20 = *(undefined4 **)(param_1 + 6);
    if (puVar20 == *(undefined4 **)(param_1 + 8)) {
      FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 6;
      *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
    }
    iStack_78 = -1;
    puVar20 = *(undefined4 **)(param_1 + 0xc);
    if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
      FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 0xffffffff;
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
    }
    puVar20 = *(undefined4 **)(param_1 + 6);
    if (puVar20 != *(undefined4 **)(param_1 + 8)) {
      *puVar20 = 5;
      *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
      goto LAB_140acac7a;
    }
  }
  else {
    iStack_78 = 8;
    puVar20 = *(undefined4 **)(param_1 + 6);
    if (puVar20 == *(undefined4 **)(param_1 + 8)) {
      FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 8;
      *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
    }
    iStack_78 = -1;
    puVar20 = *(undefined4 **)(param_1 + 0xc);
    if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
      FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 0xffffffff;
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
    }
    iStack_78 = 6;
    puVar20 = *(undefined4 **)(param_1 + 6);
    if (puVar20 == *(undefined4 **)(param_1 + 8)) {
      FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 6;
      *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
    }
    iStack_78 = -1;
    puVar20 = *(undefined4 **)(param_1 + 0xc);
    if (puVar20 == *(undefined4 **)(param_1 + 0xe)) {
      FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
    }
    else {
      *puVar20 = 0xffffffff;
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
    }
    puVar20 = *(undefined4 **)(param_1 + 6);
    if (puVar20 != *(undefined4 **)(param_1 + 8)) {
      *puVar20 = 5;
      *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 4;
      goto LAB_140acac7a;
    }
  }
  iStack_78 = 5;
  FUN_140070e20(param_1 + 4,puVar20,&iStack_78);
LAB_140acac7a:
  iStack_78 = -1;
  puVar20 = *(undefined4 **)(param_1 + 0xc);
  if (puVar20 != *(undefined4 **)(param_1 + 0xe)) {
    *puVar20 = 0xffffffff;
    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
    return;
  }
  FUN_140070e20(param_1 + 10,puVar20,&iStack_78);
  return;
}

