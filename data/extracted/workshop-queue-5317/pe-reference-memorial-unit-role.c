/* reference PE:6aea05a1:02734000; memorial-unit-role; RVA 0x1348290..0x1348b6e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_unit_role(longlong param_1,char *param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  longlong lVar21;
  short sVar22;
  undefined1 auStack_b8 [32];
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined2 uStack_88;
  char cStack_78;
  char cStack_77;
  short sStack_76;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(param_1 + 0xd80);
  cStack_77 = param_3;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
    if (_DAT_1418be234 - 4U < 2) {
      pcVar13 = (char *)(param_1 + 8);
      goto LAB_141348b2c;
    }
    sVar22 = *(short *)(param_1 + 0xa0);
    sStack_76 = sVar22;
    lVar8 = FUN_140b6ad70(0x14251c138);
    if (lVar8 == 0) {
      lVar9 = 0;
LAB_14134842a:
      uStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0xf;
      pppuStack_60 = (undefined8 ****)0x0;
      if ((*(longlong *)(param_1 + 0xd80) == 0) && (*(char *)(param_1 + 0x838) == '\0')) {
        uStack_88 = 0xfffe;
      }
      else {
        uStack_88 = 0xffff;
      }
      uStack_90 = 1;
      puStack_98 = (undefined8 *)((ulonglong)puStack_98 & 0xffffffffffffff00);
      cVar4 = FUN_1413469d0(&pppuStack_60,sVar22,*(undefined2 *)(param_1 + 0xa4),
                            *(undefined2 *)(param_1 + 300));
      if ((lVar9 == 0) || (*(short *)(lVar9 + 0xac) == -1)) {
        lVar9 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if (lVar9 != 0) {
          puStack_98 = &uStack_70;
          lVar9 = FUN_140c032e0(lVar9,0xffffffff,&cStack_78,&uStack_68);
          if ((lVar9 != 0) && (lVar8 != 0)) {
            cVar4 = *(char *)(lVar8 + 6);
            if (cStack_78 == '\0') {
              if (cVar4 == '\0') {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
                if (*(longlong *)(lVar9 + 0xe8) != 0) {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0xd8);
                }
              }
              else if (cVar4 == '\x01') {
                if (*(longlong *)(lVar9 + 0x128) == 0) {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
                }
                else {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0x118);
                }
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
              }
            }
            else if (cVar4 == '\0') {
              if (*(longlong *)(lVar9 + 0x1a8) == 0) {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x198);
              }
            }
            else if (cVar4 == '\x01') {
              if (*(longlong *)(lVar9 + 0x1e8) == 0) {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x1d8);
              }
            }
            else {
              ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
            }
            if (&pppuStack_60 != ppppuVar10) {
              ppppuVar12 = ppppuVar10 + 2;
              if ((undefined8 ***)0xf < ppppuVar10[3]) {
                ppppuVar10 = (undefined8 ****)*ppppuVar10;
              }
              FUN_140070f00(&pppuStack_60,ppppuVar10,*ppppuVar12);
            }
            if (0 < *(short *)(lVar9 + 0x2c8)) {
              FUN_1409d7a60(uStack_68,uStack_70,&pppuStack_60);
            }
            cVar4 = '\0';
          }
        }
        lVar8 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if ((lVar8 != 0) &&
           (sVar7 = FUN_140baf080(lVar8,4,0xffffffff), uVar16 = uStack_48, 0 < sVar7)) {
          if (((ushort)(sVar22 - 0x67U) < 2) && (lStack_50 != 0)) {
            FUN_140071040(&pppuStack_60," Slave",6);
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          else if (uStack_48 < 5) {
            if (0x7fffffffffffffff - (uStack_48 >> 1) < uStack_48) {
              uVar17 = 0x7fffffffffffffff;
            }
            else {
              uVar14 = uStack_48 + (uStack_48 >> 1);
              uVar17 = 0xf;
              if (0xf < uVar14) {
                uVar17 = uVar14;
              }
            }
            ppppuVar10 = (undefined8 ****)FUN_140071e00(uVar17 + 1);
            lStack_50 = 5;
            *(undefined4 *)ppppuVar10 = 0x76616c53;
            *(undefined1 *)((longlong)ppppuVar10 + 4) = 0x65;
            *(undefined1 *)((longlong)ppppuVar10 + 5) = 0;
            sVar22 = sStack_76;
            uStack_48 = uVar17;
            if (0xf < uVar16) {
              uVar14 = uVar16 + 1;
              ppppuVar12 = (undefined8 ****)pppuStack_60;
              if (0xfff < uVar14) {
                uVar14 = uVar16 + 0x28;
                ppppuVar12 = (undefined8 ****)pppuStack_60[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar12)))
                goto LAB_141348887;
              }
              workshop_supplier_0x15530d0(ppppuVar12,uVar14);
              sVar22 = sStack_76;
            }
          }
          else {
            ppppuVar10 = &pppuStack_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)pppuStack_60;
            }
            lStack_50 = 5;
            workshop_supplier_0x155486a(ppppuVar10,"Slave",5);
            *(undefined1 *)((longlong)ppppuVar10 + 5) = 0;
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          pppuStack_60 = ppppuVar10;
          cVar4 = '\0';
        }
        lVar8 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if (((lVar8 != 0) && (sVar7 = FUN_140baf080(lVar8,6,0xffffffff), 0 < sVar7)) ||
           ((lVar8 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274),
            lVar8 != 0 && (sVar7 = FUN_140bb0a50(lVar8,7,0xffffffff), 0 < sVar7)))) {
          uVar16 = uStack_48;
          if (((ushort)(sVar22 - 0x67U) < 2) && (lStack_50 != 0)) {
            FUN_140071040(&pppuStack_60," Prisoner",9);
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          else if (uStack_48 < 8) {
            uVar14 = 0x7fffffffffffffff;
            if (uStack_48 <= 0x7fffffffffffffff - (uStack_48 >> 1)) {
              uVar17 = (uStack_48 >> 1) + uStack_48;
              uVar14 = 0xf;
              if (0xf < uVar17) {
                uVar14 = uVar17;
              }
            }
            ppppuVar10 = (undefined8 ****)FUN_140071e00(uVar14 + 1);
            lStack_50 = 8;
            *ppppuVar10 = (undefined8 ***)0x72656e6f73697250;
            *(undefined1 *)(ppppuVar10 + 1) = 0;
            uStack_48 = uVar14;
            if (0xf < uVar16) {
              uVar14 = uVar16 + 1;
              ppppuVar12 = (undefined8 ****)pppuStack_60;
              if (0xfff < uVar14) {
                uVar14 = uVar16 + 0x28;
                ppppuVar12 = (undefined8 ****)pppuStack_60[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar12))) {
LAB_141348887:
                  _invalid_parameter_noinfo_noreturn();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              workshop_supplier_0x15530d0(ppppuVar12,uVar14);
            }
          }
          else {
            ppppuVar10 = &pppuStack_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)pppuStack_60;
            }
            lStack_50 = 8;
            *ppppuVar10 = (undefined8 ***)0x72656e6f73697250;
            *(undefined1 *)(ppppuVar10 + 1) = 0;
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          pppuStack_60 = ppppuVar10;
          cVar4 = '\0';
        }
      }
      if ((*(longlong *)(param_1 + 0x90) != 0) && (cStack_77 != '\0')) {
        ppppuVar10 = (undefined8 ****)(param_1 + 0x80);
        if (&pppuStack_60 != ppppuVar10) {
          if (0xf < *(ulonglong *)(param_1 + 0x98)) {
            ppppuVar10 = (undefined8 ****)*ppppuVar10;
          }
          FUN_140070f00(&pppuStack_60,ppppuVar10,*(undefined8 *)(param_1 + 0x90));
        }
        cVar4 = '\0';
      }
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      pcVar13 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pcVar13 = *(char **)param_2;
      }
      *pcVar13 = '\0';
      cVar5 = FUN_14138ee10(*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300));
      if (((cVar5 == '\0') || (*(int *)(param_1 + 0x3bc) != -1)) ||
         ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0)) {
        if ((*(uint *)(param_1 + 0x11c) & 0x1000) != 0) {
          cVar5 = '\t';
          pcVar13 = "Agitated ";
          goto LAB_1413489a5;
        }
      }
      else {
        if ((((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0) ||
            (*(int *)(param_1 + 0x140) == -1)) ||
           ((lVar8 = FUN_1400bb6d0(*(int *)(param_1 + 0x140),&DAT_1423f3c78), lVar8 == 0 ||
            ((*(int *)(*(longlong *)(lVar8 + 8) + 0x3a8) < 8 ||
             ((*(byte *)(*(longlong *)(*(longlong *)(lVar8 + 8) + 0x3a0) + 7) & 0x10) == 0)))))) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        cVar5 = cVar6 + '\x06';
        pcVar13 = "Fierce ";
        if (cVar6 == '\0') {
          pcVar13 = "Stray ";
        }
LAB_1413489a5:
        FUN_140071040(param_2,pcVar13,cVar5);
      }
      if ((*(uint *)(param_1 + 0x118) & 0x1000) == 0) {
LAB_1413489fd:
        if (*(char *)(param_1 + 0x838) != '\0') {
LAB_141348a06:
          if ((*(longlong *)(param_1 + 0x850) == 0) && (*(longlong *)(param_1 + 0x890) != 0)) {
            plVar15 = (longlong *)(param_1 + 0x880);
            if (0xf < *(ulonglong *)(param_1 + 0x898)) {
              plVar15 = (longlong *)*plVar15;
            }
            FUN_140071040(param_2,plVar15,*(undefined8 *)(param_1 + 0x890));
            FUN_140071040(param_2," ",1);
          }
        }
        ppppuVar10 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar10 = (undefined8 ****)pppuStack_60;
        }
        FUN_140071040(param_2,ppppuVar10,lStack_50);
        if ((*(char *)(param_1 + 0x838) != '\0') && (*(longlong *)(param_1 + 0x850) != 0)) {
          if (*(longlong *)(param_2 + 0x10) != 0) {
            FUN_140071040(param_2," ",1);
          }
          plVar15 = (longlong *)(param_1 + 0x840);
          if (0xf < *(ulonglong *)(param_1 + 0x858)) {
            plVar15 = (longlong *)*plVar15;
          }
          FUN_140071040(param_2,plVar15,*(undefined8 *)(param_1 + 0x850));
        }
        if (*(longlong *)(param_1 + 0xd80) != 0) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            uVar19 = 6;
            pcVar13 = "Corpse";
          }
          else {
            uVar19 = 7;
            pcVar13 = " Corpse";
          }
          FUN_140071040(param_2,pcVar13,uVar19);
        }
      }
      else {
        if (*(char *)(param_1 + 0x838) != '\0') goto LAB_141348a06;
        if ((cVar4 == '\0') || (*(longlong *)(param_2 + 0x10) != 0)) {
          FUN_140071040(param_2,"Ghostly ",8);
          goto LAB_1413489fd;
        }
        FUN_140070f00(param_2,"Ghost",5);
      }
      if (0xf < uStack_48) {
        uVar16 = uStack_48 + 1;
        ppppuVar10 = (undefined8 ****)pppuStack_60;
        if (0xfff < uVar16) {
          uVar16 = uStack_48 + 0x28;
          ppppuVar10 = (undefined8 ****)pppuStack_60[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar10))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        workshop_supplier_0x15530d0(ppppuVar10,uVar16);
      }
      goto LAB_141348b47;
    }
    if (*(longlong *)(lVar8 + 0x130) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + 0x58);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else if (*(int *)(lVar9 + 0x30) == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_140073ba0(0x14250a168);
      }
    }
    if (lVar9 == 0) goto LAB_14134842a;
    iVar1 = *(int *)(lVar9 + 0x88);
    if (iVar1 == -1) {
LAB_141348411:
      sVar7 = *(short *)(lVar9 + 0xac);
      if (sVar7 != -1) {
        sVar22 = sVar7;
        sStack_76 = sVar7;
      }
      goto LAB_14134842a;
    }
    lVar21 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
    if (lVar21 != 0) {
      iVar18 = 0;
      iVar20 = (int)lVar21 + -1;
      if (-1 < iVar20) {
        do {
          iVar11 = iVar20 + iVar18 >> 1;
          lVar21 = *(longlong *)(_DAT_14251c198 + (longlong)iVar11 * 8);
          if (*(int *)(lVar21 + 0xe0) == iVar1) goto LAB_1413483ce;
          iVar3 = iVar11 + -1;
          if (*(int *)(lVar21 + 0xe0) < iVar1) {
            iVar18 = iVar11 + 1;
            iVar3 = iVar20;
          }
          iVar20 = iVar3;
        } while (iVar18 <= iVar20);
      }
    }
    lVar21 = 0;
LAB_1413483ce:
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0xd0) < 1)) goto LAB_141348411;
    if ((**(byte **)(lVar21 + 200) & 4) == 0) {
      if ((**(byte **)(lVar21 + 200) & 8) == 0) goto LAB_141348411;
      uVar19 = 5;
      pcVar13 = "force";
    }
    else {
      uVar19 = 5;
      pcVar13 = "deity";
    }
  }
  else {
    pcVar13 = (char *)(lVar8 + 0x20);
LAB_141348b2c:
    if (param_2 == pcVar13) goto LAB_141348b47;
    uVar19 = *(undefined8 *)(pcVar13 + 0x10);
    if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
      pcVar13 = *(char **)pcVar13;
    }
  }
  FUN_140070f00(param_2,pcVar13,uVar19);
LAB_141348b47:
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_b8);
  return;
}

