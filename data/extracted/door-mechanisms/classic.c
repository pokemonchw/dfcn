/* Dwarf Fortress 53.17 classic. Ghidra 12.1.4, x86-64 Windows.
   Independent decompilations of the selected native regions. Comments give the image SHA-256 and VA range. */

/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 140566f10..140567240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140566f10(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar12 = 0;
    param_2[2] = 0;
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar5 = 0;
    uStack_70 = 0;
    uStack_60 = 0xf;
    iVar2 = *(int *)(param_1 + 0x2c);
    sVar1 = *(short *)(param_1 + 0x28);
    uStack_68 = 0;
    pppuStack_78 = (undefined8 ****)0x0;
    if (((((ushort)(sVar1 - 0xdbU) < 200) &&
         (lVar15 = _DAT_1425160a0 - _DAT_142516098 >> 3, lVar15 != 0)) && (iVar2 != -1)) &&
       (iVar14 = (int)lVar15 + -1, uVar9 = uVar12, -1 < iVar14)) {
      do {
        iVar7 = iVar14 + (int)uVar9 >> 1;
        lVar15 = *(longlong *)(_DAT_142516098 + (longlong)iVar7 * 8);
        if (*(int *)(lVar15 + 0xe0) == iVar2) {
          if ((lVar15 != 0) && (*(char *)(lVar15 + 0xaa) != '\0')) {
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0xf;
            pppuStack_58 = (undefined8 ****)0x0;
            if (((*(longlong *)(lVar15 + 0x130) == 0) ||
                ((lVar6 = *(longlong *)(*(longlong *)(lVar15 + 0x130) + 0x58), lVar6 == 0 ||
                 (*(int *)(lVar6 + 0x30) == -1)))) ||
               (lVar6 = FUN_140073b30(0x142504068), lVar6 == 0)) {
              lVar15 = lVar15 + 0x38;
            }
            else {
              lVar15 = FUN_140c4f000(lVar6);
            }
            uVar9 = 0xf;
            if ((lVar15 != 0) && (*(char *)(lVar15 + 0x72) != '\0')) {
              FUN_140aaafe0(lVar15,&pppuStack_58,1,0);
              uVar12 = uStack_48;
              uVar9 = uStack_40;
            }
            ppppuVar8 = &pppuStack_58;
            if (0xf < uVar9) {
              ppppuVar8 = (undefined8 ****)pppuStack_58;
            }
            FUN_140070fd0(&pppuStack_78,ppppuVar8,uVar12);
            FUN_140070fd0(&pppuStack_78,"\'s ",3);
            if (0xf < uStack_40) {
              uVar12 = uStack_40 + 1;
              ppppuVar8 = (undefined8 ****)pppuStack_58;
              if (0xfff < uVar12) {
                uVar12 = uStack_40 + 0x28;
                ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              sheet_supplier_14154de20(ppppuVar8,uVar12);
            }
          }
          break;
        }
        iVar4 = iVar7 + -1;
        if (*(int *)(lVar15 + 0xe0) < iVar2) {
          uVar9 = (ulonglong)(iVar7 + 1);
          iVar4 = iVar14;
        }
        iVar14 = iVar4;
      } while ((int)uVar9 <= iVar14);
    }
    lVar15 = FUN_1414c1d30(0x1423ed870,sVar1,iVar2);
    if (lVar15 == 0) {
      pcVar11 = "unknown material";
      uVar13 = 0x10;
    }
    else {
      if (*(longlong *)(lVar15 + 0x530) != 0) {
        plVar10 = (longlong *)(lVar15 + 0x520);
        if (0xf < *(ulonglong *)(lVar15 + 0x538)) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_78,plVar10,*(undefined8 *)(lVar15 + 0x530));
        FUN_140070fd0(&pppuStack_78," ",1);
      }
      pcVar11 = (char *)(lVar15 + 0x178);
      uVar13 = *(undefined8 *)(lVar15 + 0x188);
      if (0xf < *(ulonglong *)(lVar15 + 400)) {
        pcVar11 = *(char **)pcVar11;
      }
    }
    FUN_140070fd0(&pppuStack_78,pcVar11,uVar13);
    ppppuVar8 = &pppuStack_78;
    if (0xf < uStack_60) {
      ppppuVar8 = (undefined8 ****)pppuStack_78;
    }
    FUN_140070fd0(param_2,ppppuVar8,uStack_68);
    FUN_140070fd0(param_2," Door",5);
    if (0xf < uStack_60) {
      uVar12 = uStack_60 + 1;
      ppppuVar8 = (undefined8 ****)pppuStack_78;
      if (0xfff < uVar12) {
        uVar12 = uStack_60 + 0x28;
        ppppuVar8 = (undefined8 ****)pppuStack_78[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_78 + (-8 - (longlong)ppppuVar8))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      sheet_supplier_14154de20(ppppuVar8,uVar12);
    }
  }
  else {
    puVar5 = (undefined8 *)(param_1 + 0xd0);
    if (param_2 != puVar5) {
      if (0xf < *(ulonglong *)(param_1 + 0xe8)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_140070e90(param_2,puVar5,*(undefined8 *)(param_1 + 0xe0));
    }
  }
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_98);
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 140567240..140567570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140567240(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar12 = 0;
    param_2[2] = 0;
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar5 = 0;
    uStack_70 = 0;
    uStack_60 = 0xf;
    iVar2 = *(int *)(param_1 + 0x2c);
    sVar1 = *(short *)(param_1 + 0x28);
    uStack_68 = 0;
    pppuStack_78 = (undefined8 ****)0x0;
    if (((((ushort)(sVar1 - 0xdbU) < 200) &&
         (lVar15 = _DAT_1425160a0 - _DAT_142516098 >> 3, lVar15 != 0)) && (iVar2 != -1)) &&
       (iVar14 = (int)lVar15 + -1, uVar9 = uVar12, -1 < iVar14)) {
      do {
        iVar7 = iVar14 + (int)uVar9 >> 1;
        lVar15 = *(longlong *)(_DAT_142516098 + (longlong)iVar7 * 8);
        if (*(int *)(lVar15 + 0xe0) == iVar2) {
          if ((lVar15 != 0) && (*(char *)(lVar15 + 0xaa) != '\0')) {
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0xf;
            pppuStack_58 = (undefined8 ****)0x0;
            if (((*(longlong *)(lVar15 + 0x130) == 0) ||
                ((lVar6 = *(longlong *)(*(longlong *)(lVar15 + 0x130) + 0x58), lVar6 == 0 ||
                 (*(int *)(lVar6 + 0x30) == -1)))) ||
               (lVar6 = FUN_140073b30(0x142504068), lVar6 == 0)) {
              lVar15 = lVar15 + 0x38;
            }
            else {
              lVar15 = FUN_140c4f000(lVar6);
            }
            uVar9 = 0xf;
            if ((lVar15 != 0) && (*(char *)(lVar15 + 0x72) != '\0')) {
              FUN_140aaafe0(lVar15,&pppuStack_58,1,0);
              uVar12 = uStack_48;
              uVar9 = uStack_40;
            }
            ppppuVar8 = &pppuStack_58;
            if (0xf < uVar9) {
              ppppuVar8 = (undefined8 ****)pppuStack_58;
            }
            FUN_140070fd0(&pppuStack_78,ppppuVar8,uVar12);
            FUN_140070fd0(&pppuStack_78,"\'s ",3);
            if (0xf < uStack_40) {
              uVar12 = uStack_40 + 1;
              ppppuVar8 = (undefined8 ****)pppuStack_58;
              if (0xfff < uVar12) {
                uVar12 = uStack_40 + 0x28;
                ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              sheet_supplier_14154de20(ppppuVar8,uVar12);
            }
          }
          break;
        }
        iVar4 = iVar7 + -1;
        if (*(int *)(lVar15 + 0xe0) < iVar2) {
          uVar9 = (ulonglong)(iVar7 + 1);
          iVar4 = iVar14;
        }
        iVar14 = iVar4;
      } while ((int)uVar9 <= iVar14);
    }
    lVar15 = FUN_1414c1d30(0x1423ed870,sVar1,iVar2);
    if (lVar15 == 0) {
      pcVar11 = "unknown material";
      uVar13 = 0x10;
    }
    else {
      if (*(longlong *)(lVar15 + 0x530) != 0) {
        plVar10 = (longlong *)(lVar15 + 0x520);
        if (0xf < *(ulonglong *)(lVar15 + 0x538)) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_78,plVar10,*(undefined8 *)(lVar15 + 0x530));
        FUN_140070fd0(&pppuStack_78," ",1);
      }
      pcVar11 = (char *)(lVar15 + 0x178);
      uVar13 = *(undefined8 *)(lVar15 + 0x188);
      if (0xf < *(ulonglong *)(lVar15 + 400)) {
        pcVar11 = *(char **)pcVar11;
      }
    }
    FUN_140070fd0(&pppuStack_78,pcVar11,uVar13);
    ppppuVar8 = &pppuStack_78;
    if (0xf < uStack_60) {
      ppppuVar8 = (undefined8 ****)pppuStack_78;
    }
    FUN_140070fd0(param_2,ppppuVar8,uStack_68);
    FUN_140070fd0(param_2," Floor Hatch",0xc);
    if (0xf < uStack_60) {
      uVar12 = uStack_60 + 1;
      ppppuVar8 = (undefined8 ****)pppuStack_78;
      if (0xfff < uVar12) {
        uVar12 = uStack_60 + 0x28;
        ppppuVar8 = (undefined8 ****)pppuStack_78[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_78 + (-8 - (longlong)ppppuVar8))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      sheet_supplier_14154de20(ppppuVar8,uVar12);
    }
  }
  else {
    puVar5 = (undefined8 *)(param_1 + 0xd0);
    if (param_2 != puVar5) {
      if (0xf < *(ulonglong *)(param_1 + 0xe8)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_140070e90(param_2,puVar5,*(undefined8 *)(param_1 + 0xe0));
    }
  }
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_98);
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 140181a52..140181caa */

void header(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  int in_stack_00000088;
  longlong *in_stack_000000d0;
  int in_stack_00000108;
  undefined1 uStack0000000000000132;
  int iStack0000000000000144;
  char cStack0000000000000194;
  int iStack0000000000000204;
  longlong *in_stack_00000368;
  char in_stack_00000496;
  undefined1 in_stack_00000740;
  undefined1 in_stack_00000743;
  int in_stack_0000095c;
  int in_stack_00000960;
  int in_stack_00001144;
  longlong in_stack_0000b260;
  uint in_stack_0000b268;
  
  cVar2 = (**(code **)(*in_stack_000000d0 + 600))(in_stack_000000d0);
  if (cVar2 == '\0') {
    sheet_supplier_1400bc6f0(0x142666770,7,0,1);
  }
  else {
    sheet_supplier_1400bc6f0(0x142666770,4,0,1);
  }
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000960 + 1,in_stack_0000095c + 7);
  sheet_supplier_140070c50(&stack0x00003900);
  if (*(char *)(in_stack_0000b260 + 0x1d59) == '\0') {
    (**(code **)(*in_stack_000000d0 + 0x188))(in_stack_000000d0);
  }
  else {
    FUN_140070b60(&stack0x00003900);
  }
  if ((*(char *)(in_stack_0000b260 + 0x1d59) != '\0') && (in_stack_0000b268 % 1000 < 500)) {
    sheet_supplier_140070b20(&stack0x00003900,"_");
  }
  FUN_140544330(&stack0x00003900);
  FUN_140af0220(0x142666770,&stack0x00003900,0,0);
  cVar2 = (**(code **)(*in_stack_000000d0 + 600))(in_stack_000000d0);
  if (cVar2 == '\0') {
    sheet_supplier_140181caa();
    return;
  }
  sheet_supplier_1400bc6f0(0x142666770,4,0,0);
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000960,in_stack_0000095c + 7);
  FUN_140069710(&stack0x00008aa0,"*** Forbidden ***");
  FUN_140af0220(0x142666770,&stack0x00008aa0,0,0);
  sheet_supplier_1400693f0(&stack0x00008aa0);
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000960 + 2,in_stack_0000095c + 7);
  FUN_140069710(&stack0x00008ac0,"*** Forbidden ***");
  FUN_140af0220(0x142666770,&stack0x00008ac0,0,0);
  sheet_supplier_1400693f0(&stack0x00008ac0);
  iVar4 = in_stack_00000088 + 2;
  iStack0000000000000144 = in_stack_00001144 + 4;
  sheet_supplier_140070410(in_stack_000000d0 + 0xb);
  iStack0000000000000204 = in_stack_00001144 + 0x23;
  cStack0000000000000194 = '\0';
  iVar5 = (**(code **)(*in_stack_000000d0 + 0xd0))(in_stack_000000d0);
  if ((iVar5 == 0x17) &&
     (((short)in_stack_000000d0[0x29] == 0 || ((short)in_stack_000000d0[0x29] == 1)))) {
    cStack0000000000000194 = '\x01';
  }
  iVar5 = 0;
  func_0x000140070800(in_stack_00000368 + 0x25,&stack0x000016e8);
  func_0x0001400707f0(in_stack_00000368 + 0x25,&stack0x00002db8);
  do {
    puVar7 = &stack0x00000740;
    for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar7 = (undefined1 *)func_0x0001400703e0(&stack0x000016e8,&stack0x000011a3,&stack0x00002db8);
    cVar2 = func_0x000140066d70(*puVar7,in_stack_00000740);
    if (cVar2 == '\0') {
      if (0 < iVar5) {
        cStack0000000000000194 = '\x01';
      }
      if (cStack0000000000000194 != '\0') {
        iStack0000000000000204 = iStack0000000000000204 + 3;
      }
      sheet_supplier_140070410
                (in_stack_00000368 + 0x25,
                 (longlong)(in_stack_00000108 - iStack0000000000000204) % 3 & 0xffffffff);
      uStack0000000000000132 = 0;
      iVar5 = (**(code **)(*in_stack_00000368 + 0x118))(in_stack_00000368);
      iVar6 = (**(code **)(*in_stack_00000368 + 0x120))(in_stack_00000368);
      if ((iVar6 <= iVar5) && (in_stack_00000496 == '\0')) {
        sheet_supplier_140183230();
        return;
      }
      uStack0000000000000132 = 1;
      if (in_stack_00000496 == '\0') {
        construction();
        return;
      }
      sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144,iVar4);
      sheet_supplier_1400bc6f0(0x142666770,7,0,0);
      FUN_140069710(&stack0x00008ae0,"Slated for removal");
      FUN_140af0220(0x142666770,&stack0x00008ae0,0,0);
      sheet_supplier_1400693f0(&stack0x00008ae0);
      bVar1 = false;
      bVar12 = false;
      lVar11 = sheet_supplier_140070410(in_stack_000000d0 + 0xb);
      if (lVar11 != 0) {
        plVar9 = (longlong *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
        bVar12 = (*(uint *)(*plVar9 + 0x2c) & 2) != 0;
        puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
        cVar2 = FUN_140d17360(*puVar8);
        if (cVar2 != '\0') {
          bVar1 = true;
        }
      }
      if (bVar12) {
        sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144 + 2,iVar4);
        sheet_supplier_1400bc6f0(0x142666770,4,0,1);
        FUN_140069710(&stack0x00008b00,"Removal suspended.");
        FUN_140af0220(0x142666770,&stack0x00008b00,0,0);
        sheet_supplier_1400693f0(&stack0x00008b00);
      }
      else if (!bVar1) {
        sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144 + 2,iVar4);
        sheet_supplier_1400bc6f0(0x142666770,6,0,1);
        FUN_140069710(&stack0x00008b20,"Removal inactive.");
        FUN_140af0220(0x142666770,&stack0x00008b20,0,0);
        sheet_supplier_1400693f0(&stack0x00008b20);
      }
      for (iVar5 = 0; iVar6 = iVar4, iVar5 < 3; iVar5 = iVar5 + 1) {
        for (; iVar6 <= in_stack_00000088 + 0x19; iVar6 = iVar6 + 1) {
          sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144 + 4 + iVar5);
          if (iVar6 == iVar4) {
            sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar5 * 4 + 0x142670ed8))
            ;
          }
          else if (iVar6 == in_stack_00000088 + 0x19) {
            sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar5 * 4 + 0x142670ef0))
            ;
          }
          else {
            sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar5 * 4 + 0x142670ee4))
            ;
          }
          cVar2 = sheet_supplier_140073550(0x1423e9af0,0);
          if (cVar2 != '\0') {
            FUN_1400bc750(0x142666770,0);
          }
        }
      }
      sheet_supplier_1400bc6f0(0x142666770,4,0,1);
      sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144 + 5,in_stack_00000088 + 4);
      FUN_140069710(&stack0x00008b40,"Cancel removal");
      FUN_140af0220(0x142666770,&stack0x00008b40,0,0);
      sheet_supplier_1400693f0(&stack0x00008b40);
      iVar5 = (**(code **)(*in_stack_000000d0 + 0xd0))(in_stack_000000d0);
      if ((iVar5 == 0x18) &&
         (uVar10 = sheet_supplier_140070410(in_stack_000000d0 + 0x25), 1 < uVar10)) {
        puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0x25,1);
        sVar3 = (**(code **)**(undefined8 **)*puVar8)(*(undefined8 **)*puVar8);
        if (sVar3 == 0x33) {
          sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144 + 8,iVar4);
          sheet_supplier_1400bc6f0(0x142666770,7,0,1);
          FUN_140069710(&stack0x00008b60,"Trap Occupied:");
          FUN_140af0220(0x142666770,&stack0x00008b60,0,0);
          sheet_supplier_1400693f0(&stack0x00008b60);
          sheet_supplier_140070c50(&stack0x00004400);
          puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0x25,1);
          FUN_140c79f60(*(undefined8 *)*puVar8,&stack0x00004400,0,0xffffffff);
          sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000144 + 9,iVar4);
          FUN_140af0220(0x142666770,&stack0x00004400,0,0);
          sheet_supplier_1400693f0(&stack0x00004400);
        }
      }
      func_0x00014018322b();
      return;
    }
    puVar8 = (undefined8 *)func_0x0001400703d0(&stack0x000016e8);
    func_0x000140070800(*(longlong *)*puVar8 + 0x38,&stack0x00001630);
    puVar8 = (undefined8 *)func_0x0001400703d0(&stack0x000016e8);
    func_0x0001400707f0(*(longlong *)*puVar8 + 0x38,&stack0x00002dd0);
    while( true ) {
      puVar7 = &stack0x00000743;
      for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar7 = (undefined1 *)func_0x0001400703e0(&stack0x00001630,&stack0x000011a4,&stack0x00002dd0)
      ;
      cVar2 = func_0x000140066d70(*puVar7,in_stack_00000743);
      if (cVar2 == '\0') break;
      puVar8 = (undefined8 *)func_0x0001400703d0(&stack0x00001630);
      iVar6 = (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8);
      if (iVar6 == 0x20) {
code_r0x000140182025:
        puVar8 = (undefined8 *)func_0x0001400703d0(&stack0x00001630);
        lVar11 = (**(code **)(*(longlong *)*puVar8 + 0x30))((longlong *)*puVar8);
        if (lVar11 != 0) {
          iVar5 = iVar5 + 1;
        }
      }
      else {
        puVar8 = (undefined8 *)func_0x0001400703d0(&stack0x00001630);
        iVar6 = (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8);
        if (iVar6 == 0x21) goto code_r0x000140182025;
      }
      func_0x0001400703c0(&stack0x00001630);
    }
    func_0x0001400703c0(&stack0x000016e8);
  } while( true );
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 140182173..1401821fc */

void work_selector(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *in_stack_000000d0;
  int in_stack_000000f8;
  undefined1 uStack0000000000000132;
  undefined8 in_stack_00000140;
  longlong *in_stack_00000368;
  char in_stack_00000496;
  
  uStack0000000000000132 = 0;
  iVar4 = (**(code **)(*in_stack_00000368 + 0x118))(in_stack_00000368);
  iVar5 = (**(code **)(*in_stack_00000368 + 0x120))(in_stack_00000368);
  if ((iVar5 <= iVar4) && (in_stack_00000496 == '\0')) {
    sheet_supplier_140183230();
    return;
  }
  uStack0000000000000132 = 1;
  if (in_stack_00000496 == '\0') {
    construction();
    return;
  }
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_,in_stack_000000f8);
  sheet_supplier_1400bc6f0(0x142666770,7,0,0);
  FUN_140069710(&stack0x00008ae0,"Slated for removal");
  FUN_140af0220(0x142666770,&stack0x00008ae0,0,0);
  sheet_supplier_1400693f0(&stack0x00008ae0);
  bVar1 = false;
  bVar10 = false;
  lVar6 = sheet_supplier_140070410(in_stack_000000d0 + 0xb);
  if (lVar6 != 0) {
    plVar7 = (longlong *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
    bVar10 = (*(uint *)(*plVar7 + 0x2c) & 2) != 0;
    puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
    cVar2 = FUN_140d17360(*puVar8);
    if (cVar2 != '\0') {
      bVar1 = true;
    }
  }
  if (bVar10) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 2,in_stack_000000f8);
    sheet_supplier_1400bc6f0(0x142666770,4,0,1);
    FUN_140069710(&stack0x00008b00,"Removal suspended.");
    FUN_140af0220(0x142666770,&stack0x00008b00,0,0);
    sheet_supplier_1400693f0(&stack0x00008b00);
  }
  else if (!bVar1) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 2,in_stack_000000f8);
    sheet_supplier_1400bc6f0(0x142666770,6,0,1);
    FUN_140069710(&stack0x00008b20,"Removal inactive.");
    FUN_140af0220(0x142666770,&stack0x00008b20,0,0);
    sheet_supplier_1400693f0(&stack0x00008b20);
  }
  for (iVar4 = 0; iVar5 = in_stack_000000f8, iVar4 < 3; iVar4 = iVar4 + 1) {
    for (; iVar5 <= in_stack_000000f8 + 0x17; iVar5 = iVar5 + 1) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 4 + iVar4);
      if (iVar5 == in_stack_000000f8) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar4 * 4 + 0x142670ed8));
      }
      else if (iVar5 == in_stack_000000f8 + 0x17) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar4 * 4 + 0x142670ef0));
      }
      else {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar4 * 4 + 0x142670ee4));
      }
      cVar2 = sheet_supplier_140073550(0x1423e9af0,0);
      if (cVar2 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  sheet_supplier_1400bc6f0(0x142666770,4,0,1);
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 5,in_stack_000000f8 + 2);
  FUN_140069710(&stack0x00008b40,"Cancel removal");
  FUN_140af0220(0x142666770,&stack0x00008b40,0,0);
  sheet_supplier_1400693f0(&stack0x00008b40);
  iVar4 = (**(code **)(*in_stack_000000d0 + 0xd0))(in_stack_000000d0);
  if ((iVar4 == 0x18) && (uVar9 = sheet_supplier_140070410(in_stack_000000d0 + 0x25), 1 < uVar9)) {
    puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0x25,1);
    sVar3 = (**(code **)**(undefined8 **)*puVar8)(*(undefined8 **)*puVar8);
    if (sVar3 == 0x33) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 8,in_stack_000000f8);
      sheet_supplier_1400bc6f0(0x142666770,7,0,1);
      FUN_140069710(&stack0x00008b60,"Trap Occupied:");
      FUN_140af0220(0x142666770,&stack0x00008b60,0,0);
      sheet_supplier_1400693f0(&stack0x00008b60);
      sheet_supplier_140070c50(&stack0x00004400);
      puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0x25,1);
      FUN_140c79f60(*(undefined8 *)*puVar8,&stack0x00004400,0,0xffffffff);
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 9,in_stack_000000f8);
      FUN_140af0220(0x142666770,&stack0x00004400,0,0);
      sheet_supplier_1400693f0(&stack0x00004400);
    }
  }
  func_0x00014018322b();
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 1401821fc..1401827d7 */

void removal(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong *in_stack_000000d0;
  int in_stack_000000f8;
  undefined8 in_stack_00000140;
  int iVar9;
  int iVar10;
  
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_,in_stack_000000f8);
  sheet_supplier_1400bc6f0(0x142666770,7,0,0);
  FUN_140069710(&stack0x00008ae0,"Slated for removal");
  FUN_140af0220(0x142666770,&stack0x00008ae0,0,0);
  sheet_supplier_1400693f0(&stack0x00008ae0);
  bVar1 = false;
  bVar8 = false;
  lVar4 = sheet_supplier_140070410(in_stack_000000d0 + 0xb);
  if (lVar4 != 0) {
    plVar5 = (longlong *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
    bVar8 = (*(uint *)(*plVar5 + 0x2c) & 2) != 0;
    puVar6 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
    cVar2 = FUN_140d17360(*puVar6);
    if (cVar2 != '\0') {
      bVar1 = true;
    }
  }
  if (bVar8) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 2,in_stack_000000f8);
    sheet_supplier_1400bc6f0(0x142666770,4,0,1);
    FUN_140069710(&stack0x00008b00,"Removal suspended.");
    FUN_140af0220(0x142666770,&stack0x00008b00,0,0);
    sheet_supplier_1400693f0(&stack0x00008b00);
  }
  else if (!bVar1) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 2,in_stack_000000f8);
    sheet_supplier_1400bc6f0(0x142666770,6,0,1);
    FUN_140069710(&stack0x00008b20,"Removal inactive.");
    FUN_140af0220(0x142666770,&stack0x00008b20,0,0);
    sheet_supplier_1400693f0(&stack0x00008b20);
  }
  for (iVar9 = 0; iVar10 = in_stack_000000f8, iVar9 < 3; iVar9 = iVar9 + 1) {
    for (; iVar10 <= in_stack_000000f8 + 0x17; iVar10 = iVar10 + 1) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 4 + iVar9);
      if (iVar10 == in_stack_000000f8) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar9 * 4 + 0x142670ed8));
      }
      else if (iVar10 == in_stack_000000f8 + 0x17) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar9 * 4 + 0x142670ef0));
      }
      else {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar9 * 4 + 0x142670ee4));
      }
      cVar2 = sheet_supplier_140073550(0x1423e9af0,0);
      if (cVar2 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  sheet_supplier_1400bc6f0(0x142666770,4,0,1);
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 5,in_stack_000000f8 + 2);
  FUN_140069710(&stack0x00008b40,"Cancel removal");
  FUN_140af0220(0x142666770,&stack0x00008b40,0,0);
  sheet_supplier_1400693f0(&stack0x00008b40);
  iVar9 = (**(code **)(*in_stack_000000d0 + 0xd0))(in_stack_000000d0);
  if ((iVar9 == 0x18) && (uVar7 = sheet_supplier_140070410(in_stack_000000d0 + 0x25), 1 < uVar7)) {
    puVar6 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0x25,1);
    sVar3 = (**(code **)**(undefined8 **)*puVar6)(*(undefined8 **)*puVar6);
    if (sVar3 == 0x33) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 8,in_stack_000000f8);
      sheet_supplier_1400bc6f0(0x142666770,7,0,1);
      FUN_140069710(&stack0x00008b60,"Trap Occupied:");
      FUN_140af0220(0x142666770,&stack0x00008b60,0,0);
      sheet_supplier_1400693f0(&stack0x00008b60);
      sheet_supplier_140070c50(&stack0x00004400);
      puVar6 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0x25,1);
      FUN_140c79f60(*(undefined8 *)*puVar6,&stack0x00004400,0,0xffffffff);
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 9,in_stack_000000f8);
      FUN_140af0220(0x142666770,&stack0x00004400,0,0);
      sheet_supplier_1400693f0(&stack0x00004400);
    }
  }
  func_0x00014018322b();
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 1401827d7..140183230 */

void construction(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  float fVar10;
  longlong *in_stack_000000d0;
  int in_stack_000000f8;
  undefined8 in_stack_00000140;
  int iVar11;
  int iVar12;
  int iVar13;
  
  sVar4 = (**(code **)(*in_stack_000000d0 + 0x118))(in_stack_000000d0);
  iVar12 = 0;
  iVar13 = 0;
  (**(code **)(*in_stack_000000d0 + 0x110))(in_stack_000000d0,0);
  for (iVar11 = 0; iVar5 = (**(code **)(*in_stack_000000d0 + 0x120))(in_stack_000000d0),
      iVar11 < iVar5; iVar11 = iVar11 + 1) {
    iVar5 = (**(code **)(*in_stack_000000d0 + 0x128))(in_stack_000000d0);
    iVar13 = iVar13 + iVar5;
    if (iVar11 < sVar4) {
      iVar5 = (**(code **)(*in_stack_000000d0 + 0x128))(in_stack_000000d0);
      iVar12 = iVar12 + iVar5;
    }
    else if (((sVar4 == iVar11) &&
             (lVar6 = sheet_supplier_140070410(in_stack_000000d0 + 0xb), lVar6 != 0)) &&
            (plVar7 = (longlong *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0),
            *(int *)(*plVar7 + 0x24) != -1)) {
      iVar5 = (**(code **)(*in_stack_000000d0 + 0x128))(in_stack_000000d0);
      plVar7 = (longlong *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
      iVar12 = iVar12 + (iVar5 - *(int *)(*plVar7 + 0x24));
    }
    pcVar1 = *(code **)(*in_stack_000000d0 + 0x110);
    (**(code **)(*in_stack_000000d0 + 0x118))(in_stack_000000d0);
    (*pcVar1)(in_stack_000000d0);
  }
  (**(code **)(*in_stack_000000d0 + 0x110))(in_stack_000000d0,sVar4);
  bVar9 = false;
  if (0 < iVar13) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_,in_stack_000000f8);
    sheet_supplier_1400bc6f0(0x142666770,7,0,0);
    fVar10 = (float)iVar12 / (float)iVar13;
    if (0.0 < fVar10) {
      if (0.33 <= fVar10) {
        if (0.66 <= fVar10) {
          FUN_140069710(&stack0x00008be0,"Construction nearly done.");
          FUN_140af0220(0x142666770,&stack0x00008be0,0,0);
          sheet_supplier_1400693f0(&stack0x00008be0);
        }
        else {
          FUN_140069710(&stack0x00008bc0,"Partially constructed.");
          FUN_140af0220(0x142666770,&stack0x00008bc0,0,0);
          sheet_supplier_1400693f0(&stack0x00008bc0);
        }
      }
      else {
        FUN_140069710(&stack0x00008ba0,"Construction initiated.");
        FUN_140af0220(0x142666770,&stack0x00008ba0,0,0);
        sheet_supplier_1400693f0(&stack0x00008ba0);
      }
    }
    else {
      FUN_140069710(&stack0x00008b80,"Waiting for construction...");
      FUN_140af0220(0x142666770,&stack0x00008b80,0,0);
      sheet_supplier_1400693f0(&stack0x00008b80);
    }
    bVar2 = false;
    lVar6 = sheet_supplier_140070410(in_stack_000000d0 + 0xb);
    if (lVar6 != 0) {
      plVar7 = (longlong *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
      bVar9 = (*(uint *)(*plVar7 + 0x2c) & 2) != 0;
      puVar8 = (undefined8 *)sheet_supplier_1400707e0(in_stack_000000d0 + 0xb,0);
      cVar3 = FUN_140d17360(*puVar8);
      if (cVar3 != '\0') {
        bVar2 = true;
      }
    }
    if (bVar9) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 2,in_stack_000000f8);
      sheet_supplier_1400bc6f0(0x142666770,4,0,1);
      FUN_140069710(&stack0x00008c00,"Construction suspended.");
      FUN_140af0220(0x142666770,&stack0x00008c00,0,0);
      sheet_supplier_1400693f0(&stack0x00008c00);
    }
    else if (!bVar2) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 2,in_stack_000000f8);
      sheet_supplier_1400bc6f0(0x142666770,6,0,1);
      FUN_140069710(&stack0x00008c20,"Construction inactive.");
      FUN_140af0220(0x142666770,&stack0x00008c20,0,0);
      sheet_supplier_1400693f0(&stack0x00008c20);
    }
  }
  for (iVar11 = 0; iVar13 = in_stack_000000f8, iVar11 < 3; iVar11 = iVar11 + 1) {
    for (; iVar13 <= in_stack_000000f8 + 0x17; iVar13 = iVar13 + 1) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 4 + iVar11);
      if (iVar13 == in_stack_000000f8) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar11 * 4 + 0x142670ed8));
      }
      else if (iVar13 == in_stack_000000f8 + 0x17) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar11 * 4 + 0x142670ef0));
      }
      else {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar11 * 4 + 0x142670ee4));
      }
      cVar3 = sheet_supplier_140073550(0x1423e9af0,0);
      if (cVar3 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  sheet_supplier_1400bc6f0(0x142666770,6,0,1);
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 5,in_stack_000000f8 + 2);
  if (bVar9) {
    FUN_140069710(&stack0x00008c40,"Resume construction");
    FUN_140af0220(0x142666770,&stack0x00008c40,0,0);
    sheet_supplier_1400693f0(&stack0x00008c40);
  }
  else {
    FUN_140069710(&stack0x00008c60,"Suspend construction");
    FUN_140af0220(0x142666770,&stack0x00008c60,0,0);
    sheet_supplier_1400693f0(&stack0x00008c60);
  }
  for (iVar11 = 0; iVar13 = in_stack_000000f8, iVar11 < 3; iVar11 = iVar11 + 1) {
    for (; iVar13 <= in_stack_000000f8 + 0x17; iVar13 = iVar13 + 1) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 7 + iVar11);
      if (iVar13 == in_stack_000000f8) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar11 * 4 + 0x142670ed8));
      }
      else if (iVar13 == in_stack_000000f8 + 0x17) {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar11 * 4 + 0x142670ef0));
      }
      else {
        sheet_supplier_140af1390(0x142666770,*(undefined4 *)((longlong)iVar11 * 4 + 0x142670ee4));
      }
      cVar3 = sheet_supplier_140073550(0x1423e9af0,0);
      if (cVar3 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  sheet_supplier_1400bc6f0(0x142666770,4,0,1);
  sheet_supplier_1400bc6e0(0x142666770,in_stack_00000140._4_4_ + 8,in_stack_000000f8 + 2);
  iVar11 = (**(code **)(*in_stack_000000d0 + 0x118))(in_stack_000000d0);
  if (iVar11 == 0) {
    FUN_140069710(&stack0x00008c80,"Cancel construction");
    FUN_140af0220(0x142666770,&stack0x00008c80,0,0);
    sheet_supplier_1400693f0(&stack0x00008c80);
  }
  else {
    FUN_140069710(&stack0x00008ca0,"Remove building");
    FUN_140af0220(0x142666770,&stack0x00008ca0,0,0);
    sheet_supplier_1400693f0(&stack0x00008ca0);
  }
  sheet_supplier_140184f88();
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 140184cbe..140184f88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void header_actions(void)

{
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  int iVar1;
  int iVar2;
  int in_stack_000010e0;
  int in_stack_000010e4;
  
  if ((((in_stack_000010e0 + -0xc <= in_stack_000000c8) &&
       (in_stack_000000c8 < in_stack_000010e0 + -8)) &&
      (in_stack_000010e4 <= in_stack_000000c0._4_4_)) &&
     (in_stack_000000c0._4_4_ < in_stack_000010e4 + 3)) {
    _DAT_1418c53b8 = 0x12d;
    _DAT_1418c53dc = 0;
    _DAT_1418c53e0 = 0;
    DAT_1418c53d8 = 1;
  }
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      sheet_supplier_1400bc6e0
                (0x142666770,in_stack_000010e4 + iVar2,in_stack_000010e0 + -0xc + iVar1);
      sheet_supplier_140af19c0
                (0x142666770,
                 *(undefined4 *)((longlong)iVar1 * 0xc + 0x142671d44 + (longlong)iVar2 * 4),0);
    }
  }
  if (((in_stack_000010e0 + -8 <= in_stack_000000c8) && (in_stack_000000c8 < in_stack_000010e0 + -4)
      ) && ((in_stack_000010e4 <= in_stack_000000c0._4_4_ &&
            (in_stack_000000c0._4_4_ < in_stack_000010e4 + 3)))) {
    _DAT_1418c53b8 = 0x12e;
    _DAT_1418c53dc = 0;
    _DAT_1418c53e0 = 0;
    DAT_1418c53d8 = 1;
  }
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      sheet_supplier_1400bc6e0(0x142666770,in_stack_000010e4 + iVar1,in_stack_000010e0 + -8 + iVar2)
      ;
      sheet_supplier_140af19c0
                (0x142666770,
                 *(undefined4 *)((longlong)iVar2 * 0xc + 0x142671c84 + (longlong)iVar1 * 4),0);
    }
  }
  sheet_supplier_140184f88();
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 14019531d..1401959bd */

void door(void)

{
  undefined8 in_stack_00000088;
  longlong in_stack_000000d0;
  int iStack000000000000011c;
  int in_stack_00000190;
  int in_stack_000001a8;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iStack000000000000011c = in_stack_00000190;
  if ((*(ushort *)(in_stack_000000d0 + 0x148) & 0x20) == 0) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000190,in_stack_00000088._4_4_);
    iStack000000000000011c = iStack000000000000011c + 1;
    if ((*(ushort *)(in_stack_000000d0 + 0x148) & 1) == 0) {
      sheet_supplier_1400bc6f0(0x142666770,2,0,1);
      FUN_140069710(&stack0x0000a640,"Passable");
      FUN_140af0220(0x142666770,&stack0x0000a640,0,0);
      sheet_supplier_1400693f0(&stack0x0000a640);
    }
    else {
      sheet_supplier_1400bc6f0(0x142666770,4,0,1);
      FUN_140069710(&stack0x0000a620,"Forbidden");
      FUN_140af0220(0x142666770,&stack0x0000a620,0,0);
      sheet_supplier_1400693f0(&stack0x0000a620);
    }
    iStack000000000000011c = iStack000000000000011c + 1;
    if ((*(ushort *)(in_stack_000000d0 + 0x148) & 4) == 0) {
      if ((*(ushort *)(in_stack_000000d0 + 0x148) & 8) == 0) {
        for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
          for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
            for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
              sheet_supplier_1400bc6e0
                        (0x142666770,in_stack_00000190 + iVar2,
                         in_stack_000001a8 + -5 + iVar3 * 3 + iVar1);
              if (iVar3 == 0) {
                if ((*(ushort *)(in_stack_000000d0 + 0x148) & 1) == 0) {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar1 * 0xc + 0x1426718e8 + (longlong)iVar2 * 4),0);
                }
                else {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar1 * 0xc + 0x1426718c4 + (longlong)iVar2 * 4),0);
                }
              }
              else if (iVar3 == 1) {
                if ((*(ushort *)(in_stack_000000d0 + 0x148) & 1) == 0) {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar1 * 0xc + 0x14267190c + (longlong)iVar2 * 4),0);
                }
                else {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar1 * 0xc + 0x142671930 + (longlong)iVar2 * 4),0);
                }
              }
            }
          }
        }
      }
      else {
        sheet_supplier_1400bc6f0(0x142666770,6,0,1);
        sheet_supplier_1400bc6e0(0x142666770,iStack000000000000011c,in_stack_00000088._4_4_);
        iStack000000000000011c = iStack000000000000011c + 1;
        FUN_140069710(&stack0x0000a6a0,"DOOR USED BY INTRUDER");
        FUN_140af0220(0x142666770,&stack0x0000a6a0,0,0);
        sheet_supplier_1400693f0(&stack0x0000a6a0);
        iStack000000000000011c = iStack000000000000011c + 1;
        sheet_supplier_1400bc6f0(0x142666770,6,0,0);
        sheet_supplier_1400bc6e0(0x142666770,iStack000000000000011c,in_stack_00000088._4_4_);
        iStack000000000000011c = iStack000000000000011c + 1;
        FUN_140069710(&stack0x0000a6c0,"Retake door to forbid it.");
        FUN_140af0220(0x142666770,&stack0x0000a6c0,0,0);
        sheet_supplier_1400693f0(&stack0x0000a6c0);
        iStack000000000000011c = iStack000000000000011c + 1;
      }
    }
    else {
      sheet_supplier_1400bc6f0(0x142666770,4,0,1);
      sheet_supplier_1400bc6e0(0x142666770,iStack000000000000011c,in_stack_00000088._4_4_);
      iStack000000000000011c = iStack000000000000011c + 1;
      FUN_140069710(&stack0x0000a660,"DOOR TAKEN BY INVADERS");
      FUN_140af0220(0x142666770,&stack0x0000a660,0,0);
      sheet_supplier_1400693f0(&stack0x0000a660);
      iStack000000000000011c = iStack000000000000011c + 1;
      sheet_supplier_1400bc6f0(0x142666770,4,0,0);
      sheet_supplier_1400bc6e0(0x142666770,iStack000000000000011c,in_stack_00000088._4_4_);
      iStack000000000000011c = iStack000000000000011c + 1;
      FUN_140069710(&stack0x0000a680,"Retake door to forbid it.");
      FUN_140af0220(0x142666770,&stack0x0000a680,0,0);
      sheet_supplier_1400693f0(&stack0x0000a680);
      iStack000000000000011c = iStack000000000000011c + 1;
    }
  }
  else {
    sheet_supplier_1400bc6f0(0x142666770,7,0,1);
    sheet_supplier_1400bc6e0(0x142666770,iStack000000000000011c,in_stack_00000088._4_4_);
    iStack000000000000011c = iStack000000000000011c + 1;
    FUN_140069710(&stack0x0000a600,"Operated by Mechanisms");
    FUN_140af0220(0x142666770,&stack0x0000a600,0,0);
    sheet_supplier_1400693f0(&stack0x0000a600);
    iStack000000000000011c = iStack000000000000011c + 1;
  }
  contents();
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 1401959bd..140196123 */

void hatch(void)

{
  undefined8 in_stack_00000088;
  longlong in_stack_000000d0;
  int iStack0000000000000120;
  int in_stack_00000190;
  int in_stack_000001a8;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iStack0000000000000120 = in_stack_00000190;
  if ((*(ushort *)(in_stack_000000d0 + 0x148) & 0x20) == 0) {
    sheet_supplier_1400bc6e0(0x142666770,in_stack_00000190,in_stack_00000088._4_4_);
    iStack0000000000000120 = iStack0000000000000120 + 1;
    if ((*(ushort *)(in_stack_000000d0 + 0x148) & 1) == 0) {
      sheet_supplier_1400bc6f0(0x142666770,2,0,1);
      FUN_140069710(&stack0x0000a720,"Passable");
      FUN_140af0220(0x142666770,&stack0x0000a720,0,0);
      sheet_supplier_1400693f0(&stack0x0000a720);
    }
    else {
      sheet_supplier_1400bc6f0(0x142666770,4,0,1);
      FUN_140069710(&stack0x0000a700,"Forbidden");
      FUN_140af0220(0x142666770,&stack0x0000a700,0,0);
      sheet_supplier_1400693f0(&stack0x0000a700);
    }
    if ((*(ushort *)(in_stack_000000d0 + 0x148) & 0x10) == 0) {
      sheet_supplier_1400bc6f0(0x142666770,7,0,1);
      FUN_140069710(&stack0x0000a740,", ");
      FUN_140af0220(0x142666770,&stack0x0000a740,0,0);
      sheet_supplier_1400693f0(&stack0x0000a740);
      sheet_supplier_1400bc6f0(0x142666770,6,0,1);
      FUN_140069710(&stack0x0000a760,"Open");
      FUN_140af0220(0x142666770,&stack0x0000a760,0,0);
      sheet_supplier_1400693f0(&stack0x0000a760);
    }
    iStack0000000000000120 = iStack0000000000000120 + 1;
    if ((*(ushort *)(in_stack_000000d0 + 0x148) & 4) == 0) {
      if ((*(ushort *)(in_stack_000000d0 + 0x148) & 8) == 0) {
        for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
          for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
            for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
              sheet_supplier_1400bc6e0
                        (0x142666770,in_stack_00000190 + iVar1,
                         in_stack_000001a8 + -5 + iVar3 * 3 + iVar2);
              if (iVar3 == 0) {
                if ((*(ushort *)(in_stack_000000d0 + 0x148) & 1) == 0) {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar2 * 0xc + 0x1426718e8 + (longlong)iVar1 * 4),0);
                }
                else {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar2 * 0xc + 0x1426718c4 + (longlong)iVar1 * 4),0);
                }
              }
              else if (iVar3 == 1) {
                if ((*(ushort *)(in_stack_000000d0 + 0x148) & 1) == 0) {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar2 * 0xc + 0x14267190c + (longlong)iVar1 * 4),0);
                }
                else {
                  sheet_supplier_140af19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar2 * 0xc + 0x142671930 + (longlong)iVar1 * 4),0);
                }
              }
            }
          }
        }
      }
      else {
        sheet_supplier_1400bc6f0(0x142666770,6,0,1);
        sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000120,in_stack_00000088._4_4_);
        iStack0000000000000120 = iStack0000000000000120 + 1;
        FUN_140069710(&stack0x0000a7c0,"HATCH USED BY INTRUDER");
        FUN_140af0220(0x142666770,&stack0x0000a7c0,0,0);
        sheet_supplier_1400693f0(&stack0x0000a7c0);
        iStack0000000000000120 = iStack0000000000000120 + 1;
        sheet_supplier_1400bc6f0(0x142666770,6,0,0);
        sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000120,in_stack_00000088._4_4_);
        iStack0000000000000120 = iStack0000000000000120 + 1;
        FUN_140069710(&stack0x0000a7e0,"Retake hatch to forbid it.");
        FUN_140af0220(0x142666770,&stack0x0000a7e0,0,0);
        sheet_supplier_1400693f0(&stack0x0000a7e0);
        iStack0000000000000120 = iStack0000000000000120 + 1;
      }
    }
    else {
      sheet_supplier_1400bc6f0(0x142666770,4,0,1);
      sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000120,in_stack_00000088._4_4_);
      iStack0000000000000120 = iStack0000000000000120 + 1;
      FUN_140069710(&stack0x0000a780,"HATCH TAKEN BY INVADERS");
      FUN_140af0220(0x142666770,&stack0x0000a780,0,0);
      sheet_supplier_1400693f0(&stack0x0000a780);
      iStack0000000000000120 = iStack0000000000000120 + 1;
      sheet_supplier_1400bc6f0(0x142666770,4,0,0);
      sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000120,in_stack_00000088._4_4_);
      iStack0000000000000120 = iStack0000000000000120 + 1;
      FUN_140069710(&stack0x0000a7a0,"Retake hatch to forbid it.");
      FUN_140af0220(0x142666770,&stack0x0000a7a0,0,0);
      sheet_supplier_1400693f0(&stack0x0000a7a0);
      iStack0000000000000120 = iStack0000000000000120 + 1;
    }
  }
  else {
    sheet_supplier_1400bc6f0(0x142666770,7,0,1);
    sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000120,in_stack_00000088._4_4_);
    iStack0000000000000120 = iStack0000000000000120 + 1;
    FUN_140069710(&stack0x0000a6e0,"Operated by Mechanisms");
    FUN_140af0220(0x142666770,&stack0x0000a6e0,0,0);
    sheet_supplier_1400693f0(&stack0x0000a6e0);
    iStack0000000000000120 = iStack0000000000000120 + 1;
  }
  contents();
  return;
}


/* 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f 14019c84f..14019f79c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void contents(void)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  int in_stack_00000088;
  int iStack00000000000000a0;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  undefined8 in_stack_00000130;
  int iStack0000000000000158;
  int iStack000000000000018c;
  undefined8 in_stack_00000190;
  int iStack00000000000001ac;
  int in_stack_000001b0;
  int iStack00000000000001e0;
  undefined8 in_stack_00000200;
  int in_stack_00000298;
  char in_stack_0000029c;
  longlong *in_stack_00000368;
  uint uVar16;
  undefined1 in_stack_0000077b;
  undefined1 in_stack_0000077e;
  undefined1 in_stack_00000781;
  int in_stack_00000898;
  int in_stack_000009fc;
  int iVar17;
  int in_stack_00000cc8;
  uint uVar18;
  int in_stack_00001158;
  int in_stack_0000147c;
  ulonglong in_stack_0000b240;
  longlong in_stack_0000b260;
  undefined4 in_stack_0000b268;
  
  if (in_stack_0000029c != '\0') {
    if ((in_stack_00000130._2_1_ == '\0') && (in_stack_00000190._4_1_ != '\0')) {
      iVar5 = in_stack_00000200._4_4_ + -3;
      uVar18 = (uint)(*(char *)(in_stack_0000b260 + 0x1d50) == '\0');
      for (uVar16 = 0; (int)uVar16 < 2; uVar16 = uVar16 + 1) {
        cVar1 = sheet_supplier_140073550(0x1423e9af0,0);
        if (cVar1 == '\0') {
          if (uVar16 == uVar18) {
            sheet_supplier_1400bc6f0(0x142666770,7,0,1);
          }
          else {
            sheet_supplier_1400bc6f0(0x142666770,7,0,0);
          }
        }
        else if (uVar16 == uVar18) {
          sheet_supplier_1400bc710(0x142666770);
          sheet_supplier_1400bc730(0x142666770);
        }
        else {
          sheet_supplier_1400bc710(0x142666770);
          sheet_supplier_1400bc730(0x142666770);
        }
        if (uVar16 == 0) {
          in_stack_00000898 = in_stack_00000088 + 1;
          in_stack_000009fc = in_stack_00000088 + 0x1e;
        }
        else if (uVar16 == 1) {
          in_stack_00000898 = in_stack_00000088 + 0x1f;
          in_stack_000009fc = in_stack_00000088 + 0x2d;
        }
        for (iVar6 = iVar5; iVar14 = in_stack_00000898, iVar6 <= in_stack_00000200._4_4_ + -2;
            iVar6 = iVar6 + 1) {
          for (; iVar14 <= in_stack_000009fc; iVar14 = iVar14 + 1) {
            sheet_supplier_1400bc6e0(0x142666770,iVar6);
            if (uVar16 == uVar18) {
              if (iVar14 == in_stack_00000898) {
                uVar9 = sheet_supplier_1400e27a0(0x1426686fc,0);
                sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
                sheet_supplier_140af1390(0x142666770);
              }
              else if (iVar14 == in_stack_00000898 + 1) {
                uVar9 = sheet_supplier_1400e27a0(0x1426686fc,1);
                sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
                sheet_supplier_140af1390(0x142666770);
              }
              else if (iVar14 == in_stack_000009fc) {
                uVar9 = sheet_supplier_1400e27a0(0x1426686fc,4);
                sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
                sheet_supplier_140af1390(0x142666770);
              }
              else if (iVar14 == in_stack_000009fc + -1) {
                uVar9 = sheet_supplier_1400e27a0(0x1426686fc,3);
                sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
                sheet_supplier_140af1390(0x142666770);
              }
              else {
                uVar9 = sheet_supplier_1400e27a0(0x1426686fc,2);
                sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
                sheet_supplier_140af1390(0x142666770);
              }
            }
            else if (iVar14 == in_stack_00000898) {
              uVar9 = sheet_supplier_1400e27a0(0x1426686d4,0);
              sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
              sheet_supplier_140af1390(0x142666770);
            }
            else if (iVar14 == in_stack_00000898 + 1) {
              uVar9 = sheet_supplier_1400e27a0(0x1426686d4,1);
              sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
              sheet_supplier_140af1390(0x142666770);
            }
            else if (iVar14 == in_stack_000009fc) {
              uVar9 = sheet_supplier_1400e27a0(0x1426686d4,4);
              sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
              sheet_supplier_140af1390(0x142666770);
            }
            else if (iVar14 == in_stack_000009fc + -1) {
              uVar9 = sheet_supplier_1400e27a0(0x1426686d4,3);
              sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
              sheet_supplier_140af1390(0x142666770);
            }
            else {
              uVar9 = sheet_supplier_1400e27a0(0x1426686d4,2);
              sheet_supplier_140070810(uVar9,(longlong)(iVar6 - iVar5));
              sheet_supplier_140af1390(0x142666770);
            }
          }
        }
        for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {
          sheet_supplier_1400bc6e0(0x142666770);
          cVar1 = sheet_supplier_140073550(0x1423e9af0,0);
          if ((cVar1 != '\0') || (iVar6 != 0)) {
            if (uVar16 == 0) {
              FUN_140069710(&stack0x0000b1a0,"Show linked buildings");
              FUN_140af0130(0x142666770);
              sheet_supplier_1400693f0(&stack0x0000b1a0);
            }
            else if (uVar16 == 1) {
              FUN_140069710(&stack0x0000b1c0,"Show items");
              FUN_140af0130(0x142666770);
              sheet_supplier_1400693f0(&stack0x0000b1c0);
            }
          }
        }
      }
    }
    if (((in_stack_00000190._4_1_ == '\0') || (*(char *)(in_stack_0000b260 + 0x1d50) == '\0')) ||
       (in_stack_00000130._2_1_ != '\0')) {
      iStack0000000000000158 = in_stack_00000200._4_4_ - _DAT_1418c204c;
      iVar6 = in_stack_00000200._4_4_ + in_stack_00000cc8 * 3;
      iVar5 = iVar6 + -1;
      sheet_supplier_140070800(in_stack_00000368 + 0x25,&stack0x00000420);
      sheet_supplier_1400707f0(in_stack_00000368 + 0x25,&stack0x00003378);
      while( true ) {
        puVar10 = &stack0x00000781;
        for (lVar15 = 1; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        puVar10 = (undefined1 *)
                  sheet_supplier_1400703e0(&stack0x00000420,&stack0x000011f8,&stack0x00003378);
        cVar1 = sheet_supplier_140066d70(*puVar10,in_stack_00000781);
        if (cVar1 == '\0') break;
        if ((in_stack_00000200._4_4_ + -2 <= iStack0000000000000158) &&
           (iStack0000000000000158 <= iVar5)) {
          sheet_supplier_1400bc6f0(0x142666770,7,0,1);
          for (iVar14 = in_stack_000001b0; iVar8 = iStack0000000000000158,
              iVar14 <= in_stack_00000298; iVar14 = iVar14 + 1) {
            for (; iVar8 < iStack0000000000000158 + 3; iVar8 = iVar8 + 1) {
              if ((in_stack_00000200._4_4_ <= iVar8) && (iVar8 <= iVar5)) {
                sheet_supplier_1400bc6e0(0x142666770,iVar8);
                if (iVar14 == in_stack_000001b0) {
                  sheet_supplier_140af1390(0x142666770);
                }
                else if (iVar14 == in_stack_000001b0 + 1) {
                  sheet_supplier_140af1390(0x142666770);
                }
                else if (iVar14 == in_stack_000001b0 + 2) {
                  sheet_supplier_140af1390(0x142666770);
                }
                else if (iVar14 == in_stack_000001b0 + 3) {
                  sheet_supplier_140af1390(0x142666770);
                }
                else if (iVar14 == in_stack_000001b0 + 4) {
                  sheet_supplier_140af1390(0x142666770);
                }
                else if (iVar14 == in_stack_00000298) {
                  sheet_supplier_140af1390(0x142666770);
                }
                else {
                  sheet_supplier_140af1390(0x142666770);
                }
                cVar1 = sheet_supplier_140073550(0x1423e9af0,0);
                if (cVar1 != '\0') {
                  FUN_1400bc750(0x142666770);
                }
              }
            }
          }
          if ((in_stack_00000200._4_4_ <= iStack0000000000000158) &&
             (iStack0000000000000158 <= iVar6 + -3)) {
            cVar1 = sheet_supplier_140073550(0x1423e9af0,0);
            if (cVar1 == '\0') {
              sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000158 + 1,in_stack_000001b0 + 2)
              ;
              puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
              (**(code **)(**(longlong **)*puVar11 + 0x370))(*(longlong **)*puVar11,0);
              puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
              uVar2 = (**(code **)(**(longlong **)*puVar11 + 0x640))(*(longlong **)*puVar11);
              FUN_1400bc750(0x142666770,uVar2,1);
            }
            else {
              sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000158,in_stack_000001b0);
              puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
              iVar14 = FUN_140c916d0(*(undefined8 *)*puVar11,in_stack_0000b268);
              if (iVar14 != 0) {
                FUN_140af1630(0x142666770,iVar14,2,2,5);
              }
            }
          }
          if ((in_stack_00000200._4_4_ <= iStack0000000000000158 + 1) &&
             (iStack0000000000000158 + 1 <= iVar5)) {
            iVar14 = 0;
            puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
            if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 2) == 0) {
              puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
              if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x20) != 0) {
                iVar14 = 3;
              }
            }
            else {
              iVar14 = 3;
            }
            sheet_supplier_1400bc6f0(0x142666770,7,0,1);
            sheet_supplier_1400bc6e0(0x142666770,iStack0000000000000158 + 1,in_stack_000001b0 + 7);
            sheet_supplier_140070c50(&stack0x00003b80);
            puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
            FUN_140c79f60(*(undefined8 *)*puVar11,&stack0x00003b80,0,0xffffffff);
            uVar13 = sheet_supplier_1400708f0(&stack0x00003b80);
            if ((ulonglong)(longlong)(((in_stack_00000298 - in_stack_000001b0) + -0x16) - iVar14) <=
                uVar13) {
              iVar14 = ((in_stack_00000298 - in_stack_000001b0) + -0x17) - iVar14;
              if (-1 < iVar14) {
                sheet_supplier_1400e27f0(&stack0x00003b80,(longlong)iVar14,0);
              }
              if (3 < iVar14) {
                puVar10 = (undefined1 *)
                          sheet_supplier_1400fcb70(&stack0x00003b80,(longlong)(iVar14 + -3));
                *puVar10 = 0x2e;
                puVar10 = (undefined1 *)
                          sheet_supplier_1400fcb70(&stack0x00003b80,(longlong)(iVar14 + -2));
                *puVar10 = 0x2e;
                puVar10 = (undefined1 *)
                          sheet_supplier_1400fcb70(&stack0x00003b80,(longlong)(iVar14 + -1));
                *puVar10 = 0x2e;
              }
            }
            FUN_140af0220(0x142666770,&stack0x00003b80,0,0);
            sheet_supplier_1400693f0(&stack0x00003b80);
          }
          for (iVar14 = 0; iVar14 < 6; iVar14 = iVar14 + 1) {
            iVar8 = in_stack_00000298 + iVar14 * 3;
            if ((((iVar8 + -0x13 <= in_stack_000000c8) && (in_stack_000000c8 < iVar8 + -0x10)) &&
                (iStack0000000000000158 <= in_stack_000000c0._4_4_)) &&
               (in_stack_000000c0._4_4_ < iStack0000000000000158 + 3)) {
              switch(iVar14) {
              case 0:
                puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 2) == 0) {
                  puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                  if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x20) != 0) {
                    plVar12 = (longlong *)sheet_supplier_1400703d0(&stack0x00000420);
                    if (*(short *)(*plVar12 + 8) == 2) {
                      _DAT_1418c53b8 = 0x13d;
                      _DAT_1418c53dc = 0;
                      _DAT_1418c53e0 = 0;
                      DAT_1418c53d8 = 1;
                    }
                    else {
                      iVar8 = (**(code **)(*in_stack_00000368 + 0xd0))(in_stack_00000368);
                      if (iVar8 == 3) {
                        _DAT_1418c53b8 = 0x142;
                      }
                      else if ((iVar8 == 6) || (iVar8 == 7)) {
                        _DAT_1418c53b8 = 0x13e;
                      }
                      else if (iVar8 == 0x16) {
                        _DAT_1418c53b8 = 0x141;
                      }
                      else if (iVar8 == 0x18) {
                        puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                        sVar3 = (**(code **)**(undefined8 **)*puVar11)(*(undefined8 **)*puVar11);
                        if (sVar3 == 0x33) {
                          _DAT_1418c53b8 = 0x13f;
                        }
                        else {
                          _DAT_1418c53b8 = 0x140;
                        }
                      }
                      else {
                        _DAT_1418c53b8 = 0x143;
                      }
                      _DAT_1418c53dc = 0;
                      _DAT_1418c53e0 = 0;
                      DAT_1418c53d8 = 1;
                    }
                  }
                }
                else {
                  _DAT_1418c53b8 = 0x11e;
                  _DAT_1418c53dc = 0;
                  _DAT_1418c53e0 = 0;
                  DAT_1418c53d8 = 1;
                }
                break;
              case 1:
                _DAT_1418c53b8 = 0x144;
                _DAT_1418c53dc = 0;
                _DAT_1418c53e0 = 0;
                DAT_1418c53d8 = 1;
                break;
              case 2:
                _DAT_1418c53b8 = 0x145;
                _DAT_1418c53dc = 0;
                _DAT_1418c53e0 = 0;
                DAT_1418c53d8 = 1;
                break;
              case 3:
                puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                cVar1 = sheet_supplier_1400fd8a0(*(undefined8 *)*puVar11);
                if (cVar1 != '\0') {
                  _DAT_1418c53b8 = 0x146;
                  _DAT_1418c53dc = 0;
                  _DAT_1418c53e0 = 0;
                  DAT_1418c53d8 = 1;
                }
                break;
              case 4:
                puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                cVar1 = FUN_140cc02d0(*(undefined8 *)*puVar11);
                if (cVar1 != '\0') {
                  _DAT_1418c53b8 = 0x147;
                  _DAT_1418c53dc = 0;
                  _DAT_1418c53e0 = 0;
                  DAT_1418c53d8 = 1;
                }
                break;
              case 5:
                _DAT_1418c53b8 = 0x148;
                _DAT_1418c53dc = 0;
                _DAT_1418c53e0 = 0;
                DAT_1418c53d8 = 1;
              }
            }
            for (iStack000000000000018c = 0; iStack000000000000018c < 3;
                iStack000000000000018c = iStack000000000000018c + 1) {
              if ((in_stack_00000200._4_4_ <= iStack0000000000000158 + iStack000000000000018c) &&
                 (iStack0000000000000158 + iStack000000000000018c <= iVar5)) {
                for (iStack00000000000001ac = 0; iStack00000000000001ac < 3;
                    iStack00000000000001ac = iStack00000000000001ac + 1) {
                  sheet_supplier_1400bc6e0
                            (0x142666770,iStack0000000000000158 + iStack000000000000018c);
                  switch(iVar14) {
                  case 0:
                    puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                    if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 2) == 0) {
                      puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                      if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x20) != 0) {
                        plVar12 = (longlong *)sheet_supplier_1400703d0(&stack0x00000420);
                        if (*(short *)(*plVar12 + 8) == 2) {
                          sheet_supplier_140af19c0
                                    (0x142666770,
                                     *(undefined4 *)
                                      ((longlong)iStack00000000000001ac * 0xc + 0x142671588 +
                                      (longlong)iStack000000000000018c * 4));
                        }
                        else {
                          iVar8 = (**(code **)(*in_stack_00000368 + 0xd0))(in_stack_00000368);
                          if (iVar8 == 3) {
                            sheet_supplier_140af19c0
                                      (0x142666770,
                                       *(undefined4 *)
                                        ((longlong)iStack00000000000001ac * 0xc + 0x14267163c +
                                        (longlong)iStack000000000000018c * 4));
                          }
                          else if ((iVar8 == 6) || (iVar8 == 7)) {
                            sheet_supplier_140af19c0
                                      (0x142666770,
                                       *(undefined4 *)
                                        ((longlong)iStack00000000000001ac * 0xc + 0x1426715ac +
                                        (longlong)iStack000000000000018c * 4));
                          }
                          else if (iVar8 == 0x16) {
                            sheet_supplier_140af19c0
                                      (0x142666770,
                                       *(undefined4 *)
                                        ((longlong)iStack00000000000001ac * 0xc + 0x142671618 +
                                        (longlong)iStack000000000000018c * 4));
                          }
                          else if (iVar8 == 0x18) {
                            puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                            sVar3 = (**(code **)**(undefined8 **)*puVar11)(*(undefined8 **)*puVar11)
                            ;
                            if (sVar3 == 0x33) {
                              sheet_supplier_140af19c0
                                        (0x142666770,
                                         *(undefined4 *)
                                          ((longlong)iStack00000000000001ac * 0xc + 0x1426715d0 +
                                          (longlong)iStack000000000000018c * 4));
                            }
                            else {
                              sheet_supplier_140af19c0
                                        (0x142666770,
                                         *(undefined4 *)
                                          ((longlong)iStack00000000000001ac * 0xc + 0x1426715f4 +
                                          (longlong)iStack000000000000018c * 4));
                            }
                          }
                          else {
                            sheet_supplier_140af19c0
                                      (0x142666770,
                                       *(undefined4 *)
                                        ((longlong)iStack00000000000001ac * 0xc + 0x142671660 +
                                        (longlong)iStack000000000000018c * 4));
                          }
                        }
                      }
                    }
                    else {
                      sheet_supplier_140af19c0
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)iStack00000000000001ac * 0xc + 0x142671564 +
                                  (longlong)iStack000000000000018c * 4));
                    }
                    break;
                  case 1:
                    sheet_supplier_140af19c0
                              (0x142666770,
                               *(undefined4 *)
                                ((longlong)iStack00000000000001ac * 0xc + 0x142671348 +
                                (longlong)iStack000000000000018c * 4));
                    break;
                  case 2:
                    puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                    if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x80000) == 0) {
                      sheet_supplier_140af19c0
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)iStack00000000000001ac * 0xc + 0x14267136c +
                                  (longlong)iStack000000000000018c * 4));
                    }
                    else {
                      sheet_supplier_140af19c0
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)iStack00000000000001ac * 0xc + 0x142671390 +
                                  (longlong)iStack000000000000018c * 4));
                    }
                    break;
                  case 3:
                    puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                    cVar1 = sheet_supplier_1400fd8a0(*(undefined8 *)*puVar11);
                    if (cVar1 != '\0') {
                      puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                      if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x200000) == 0) {
                        sheet_supplier_140af19c0
                                  (0x142666770,
                                   *(undefined4 *)
                                    ((longlong)iStack00000000000001ac * 0xc + 0x1426713b4 +
                                    (longlong)iStack000000000000018c * 4));
                      }
                      else {
                        sheet_supplier_140af19c0
                                  (0x142666770,
                                   *(undefined4 *)
                                    ((longlong)iStack00000000000001ac * 0xc + 0x1426713d8 +
                                    (longlong)iStack000000000000018c * 4));
                      }
                    }
                    break;
                  case 4:
                    puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                    cVar1 = FUN_140cc02d0(*(undefined8 *)*puVar11);
                    if (cVar1 != '\0') {
                      puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                      if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x800000) == 0) {
                        sheet_supplier_140af19c0
                                  (0x142666770,
                                   *(undefined4 *)
                                    ((longlong)iStack00000000000001ac * 0xc + 0x1426713fc +
                                    (longlong)iStack000000000000018c * 4));
                      }
                      else {
                        sheet_supplier_140af19c0
                                  (0x142666770,
                                   *(undefined4 *)
                                    ((longlong)iStack00000000000001ac * 0xc + 0x142671420 +
                                    (longlong)iStack000000000000018c * 4));
                      }
                    }
                    break;
                  case 5:
                    puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00000420);
                    if ((*(uint *)(*(longlong *)*puVar11 + 0x10) & 0x1000000) == 0) {
                      sheet_supplier_140af19c0
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)iStack00000000000001ac * 0xc + 0x142671444 +
                                  (longlong)iStack000000000000018c * 4));
                    }
                    else {
                      sheet_supplier_140af19c0
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)iStack00000000000001ac * 0xc + 0x142671468 +
                                  (longlong)iStack000000000000018c * 4));
                    }
                  }
                }
              }
            }
          }
        }
        iStack0000000000000158 = iStack0000000000000158 + 3;
        if (iVar5 < iStack0000000000000158) break;
        sheet_supplier_1400703c0(&stack0x00000420);
      }
      if (in_stack_00000cc8 < in_stack_00001158) {
        sheet_supplier_1400bc920(&stack0x000034c8);
        sheet_supplier_1400bc940
                  (&stack0x000034c8,_DAT_1418c204c,0,in_stack_00001158 * 3 + -1,
                   in_stack_00000cc8 * 3);
        FUN_141423200(&stack0x000034c8,in_stack_000000c8,in_stack_000000c0._4_4_,
                      in_stack_00000298 + 1,*(undefined1 *)(in_stack_0000b260 + 0x1d00));
      }
    }
    else {
      iStack00000000000001e0 = in_stack_00000200._4_4_ - _DAT_1418c20a4;
      iVar5 = in_stack_00000200._4_4_ + in_stack_0000147c * 3;
      sheet_supplier_140070800(in_stack_00000368 + 0x25,&stack0x00001750);
      sheet_supplier_1400707f0(in_stack_00000368 + 0x25,&stack0x00003338);
      while( true ) {
        puVar10 = &stack0x0000077b;
        for (lVar15 = 1; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        puVar10 = (undefined1 *)
                  sheet_supplier_1400703e0(&stack0x00001750,&stack0x00000fe7,&stack0x00003338);
        cVar1 = sheet_supplier_140066d70(*puVar10,in_stack_0000077b);
        if (cVar1 == '\0') break;
        puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00001750);
        sheet_supplier_140070800(*(longlong *)*puVar11 + 0x38,&stack0x00001668);
        puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00001750);
        sheet_supplier_1400707f0(*(longlong *)*puVar11 + 0x38,&stack0x00003350);
        while( true ) {
          puVar10 = &stack0x0000077e;
          for (lVar15 = 1; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar10 = (undefined1 *)
                    sheet_supplier_1400703e0(&stack0x00001668,&stack0x00000fe8,&stack0x00003350);
          cVar1 = sheet_supplier_140066d70(*puVar10,in_stack_0000077e);
          if (cVar1 == '\0') break;
          puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00001668);
          iVar6 = (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11);
          if (iVar6 == 0x20) {
LAB_14019d274:
            puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00001668);
            plVar12 = (longlong *)(**(code **)(*(longlong *)*puVar11 + 0x30))((longlong *)*puVar11);
            if (plVar12 != (longlong *)0x0) {
              if ((in_stack_00000200._4_4_ <= iStack00000000000001e0) &&
                 (iStack00000000000001e0 <= iVar5 + -3)) {
                sheet_supplier_1400bc6f0(0x142666770,7,0,1);
                for (iVar6 = in_stack_000001b0; iVar14 = iStack00000000000001e0,
                    iVar6 <= in_stack_00000298; iVar6 = iVar6 + 1) {
                  for (; iVar14 < iStack00000000000001e0 + 3; iVar14 = iVar14 + 1) {
                    sheet_supplier_1400bc6e0(0x142666770,iVar14,iVar6);
                    if (iVar6 == in_stack_000001b0) {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x142668310));
                    }
                    else if (iVar6 == in_stack_000001b0 + 1) {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x14266831c));
                    }
                    else if (iVar6 == in_stack_000001b0 + 2) {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x14266831c));
                    }
                    else if (iVar6 == in_stack_000001b0 + 3) {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x14266831c));
                    }
                    else if (iVar6 == in_stack_000001b0 + 4) {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x142668328));
                    }
                    else if (iVar6 == in_stack_00000298) {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x142668130));
                    }
                    else {
                      sheet_supplier_140af1390
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)(iVar14 - iStack00000000000001e0) * 4 + 0x142668124));
                    }
                    cVar1 = sheet_supplier_140073550(0x1423e9af0,0);
                    if (cVar1 != '\0') {
                      FUN_1400bc750(0x142666770,0,1);
                    }
                  }
                }
                sheet_supplier_1400bc6e0(0x142666770,iStack00000000000001e0,in_stack_000001b0);
                iStack00000000000000a0 = 0;
                uVar7 = (**(code **)(*plVar12 + 0xd0))(plVar12);
                switch(uVar7) {
                case 0:
                  iStack00000000000000a0 = iRam0000000142667430;
                  break;
                case 1:
                  iStack00000000000000a0 = iRam000000014266742c;
                  break;
                case 2:
                  iStack00000000000000a0 = iRam0000000142667434;
                  break;
                case 3:
                  iStack00000000000000a0 = iRam0000000142667440;
                  break;
                case 4:
                  iStack00000000000000a0 = iRam0000000142667400;
                  break;
                case 5:
                  uVar4 = (**(code **)(*plVar12 + 0xd8))(plVar12);
                  switch(uVar4) {
                  case 0:
                    iStack00000000000000a0 = iRam00000001426673e0;
                    break;
                  case 1:
                    iStack00000000000000a0 = iRam00000001426673e4;
                    break;
                  case 2:
                    iStack00000000000000a0 = iRam00000001426673e8;
                    break;
                  case 3:
                    iStack00000000000000a0 = iRam00000001426673ec;
                    break;
                  case 4:
                    iStack00000000000000a0 = iRam00000001426673e4;
                    break;
                  case 5:
                    iStack00000000000000a0 = iRam00000001426673e8;
                    break;
                  case 6:
                    iStack00000000000000a0 = iRam00000001426673ec;
                    break;
                  case 7:
                    iStack00000000000000a0 = iRam00000001426673bc;
                  }
                  break;
                case 6:
                  iStack00000000000000a0 = iRam00000001426673ac;
                  break;
                case 8:
                  iStack00000000000000a0 = iRam0000000142667460;
                  break;
                case 9:
                  iStack00000000000000a0 = iRam00000001426674b8;
                  break;
                case 10:
                  iStack00000000000000a0 = iRam0000000142667438;
                  break;
                case 0xb:
                  iStack00000000000000a0 = iRam0000000142667500;
                  break;
                case 0xc:
                  iStack00000000000000a0 = iRam0000000142667504;
                  break;
                case 0xd:
                  uVar4 = (**(code **)(*plVar12 + 0xd8))(plVar12);
                  switch(uVar4) {
                  case 0:
                    iStack00000000000000a0 = iRam00000001426673b0;
                    break;
                  case 1:
                    iStack00000000000000a0 = iRam0000000142667418;
                    break;
                  case 2:
                    iStack00000000000000a0 = iRam00000001426673b4;
                    break;
                  case 3:
                    iStack00000000000000a0 = iRam00000001426673c0;
                    break;
                  case 4:
                    iStack00000000000000a0 = iRam00000001426673c4;
                    break;
                  case 5:
                  case 6:
                    iStack00000000000000a0 = iRam00000001426673b8;
                    break;
                  case 7:
                    iStack00000000000000a0 = iRam00000001426673d0;
                    break;
                  case 8:
                    iStack00000000000000a0 = iRam00000001426673d4;
                    break;
                  case 9:
                    iStack00000000000000a0 = iRam00000001426673d8;
                    break;
                  case 10:
                    iStack00000000000000a0 = iRam0000000142667408;
                    break;
                  case 0xb:
                    iStack00000000000000a0 = iRam00000001426673f0;
                    break;
                  case 0xc:
                    iStack00000000000000a0 = iRam000000014266740c;
                    break;
                  case 0xd:
                    iStack00000000000000a0 = iRam00000001426673f8;
                    break;
                  case 0xe:
                    iStack00000000000000a0 = iRam0000000142667410;
                    break;
                  case 0xf:
                    iStack00000000000000a0 = iRam0000000142667404;
                    break;
                  case 0x10:
                    iStack00000000000000a0 = iRam00000001426673f4;
                    break;
                  case 0x11:
                    iStack00000000000000a0 = iRam000000014266741c;
                    break;
                  case 0x12:
                    iStack00000000000000a0 = iRam0000000142667420;
                    break;
                  case 0x13:
                    iStack00000000000000a0 = iRam0000000142667414;
                    break;
                  case 0x14:
                    iStack00000000000000a0 = iRam00000001426673dc;
                    break;
                  case 0x15:
                    iStack00000000000000a0 = iRam00000001426673fc;
                    break;
                  case 0x16:
                    iStack00000000000000a0 = iRam00000001426674d4;
                    break;
                  case 0x17:
                  case 0x18:
                    iStack00000000000000a0 = iRam000000014266738c;
                  }
                  break;
                case 0xe:
                  iStack00000000000000a0 = iRam000000014266743c;
                  break;
                case 0xf:
                  iStack00000000000000a0 = iRam0000000142667448;
                  break;
                case 0x10:
                  iStack00000000000000a0 = iRam000000014266749c;
                  break;
                case 0x11:
                  iStack00000000000000a0 = iRam00000001426674a0;
                  break;
                case 0x12:
                  iStack00000000000000a0 = iRam00000001426674b4;
                  break;
                case 0x13:
                  iStack00000000000000a0 = iRam000000014266747c;
                  break;
                case 0x14:
                  iStack00000000000000a0 = iRam0000000142667484;
                  break;
                case 0x15:
                  iStack00000000000000a0 = iRam0000000142667480;
                  break;
                case 0x16:
                  sVar3 = (**(code **)(*plVar12 + 0xd8))(plVar12);
                  if (sVar3 == 0) {
                    iStack00000000000000a0 = iRam000000014266750c;
                  }
                  else if (sVar3 == 1) {
                    iStack00000000000000a0 = iRam0000000142667508;
                  }
                  else if (sVar3 == 2) {
                    iStack00000000000000a0 = iRam0000000142667510;
                  }
                  break;
                case 0x17:
                  uVar4 = (**(code **)(*plVar12 + 0xd8))(plVar12);
                  switch(uVar4) {
                  case 0:
                    iStack00000000000000a0 = iRam00000001426674b0;
                    break;
                  case 1:
                    iStack00000000000000a0 = iRam00000001426674e8;
                    break;
                  case 2:
                    iStack00000000000000a0 = iRam00000001426674f4;
                    break;
                  case 3:
                    iStack00000000000000a0 = iRam00000001426674ec;
                    break;
                  case 4:
                    iStack00000000000000a0 = iRam00000001426674f0;
                    break;
                  case 5:
                    iStack00000000000000a0 = iRam00000001426674ac;
                  }
                  break;
                case 0x18:
                  iStack00000000000000a0 = iRam00000001426674e4;
                  break;
                case 0x19:
                  iStack00000000000000a0 = iRam00000001426674a4;
                  break;
                case 0x1a:
                  iStack00000000000000a0 = iRam00000001426674fc;
                  break;
                case 0x1b:
                  iStack00000000000000a0 = iRam00000001426674dc;
                  break;
                case 0x1c:
                  iStack00000000000000a0 = iRam00000001426674e0;
                  break;
                case 0x1d:
                  uVar16 = *(uint *)(plVar12 + 0x24);
                  if (uVar16 < 0x101) {
                    if (uVar16 == 0x100) {
                      iStack00000000000000a0 = iRam0000000142667820;
                    }
                    else {
                      switch(uVar16) {
                      case 0:
                        iStack00000000000000a0 = iRam0000000142667810;
                        break;
                      case 1:
                        iStack00000000000000a0 = iRam0000000142667818;
                        break;
                      case 2:
                        iStack00000000000000a0 = iRam0000000142667834;
                        break;
                      default:
code_r0x00014019e055:
                        iStack00000000000000a0 = iRam0000000142667858;
                        break;
                      case 4:
                        iStack00000000000000a0 = iRam0000000142667838;
                        break;
                      case 8:
                        iStack00000000000000a0 = iRam000000014266782c;
                        break;
                      case 0x10:
                        iStack00000000000000a0 = iRam0000000142667844;
                        break;
                      case 0x20:
                        iStack00000000000000a0 = iRam000000014266784c;
                        break;
                      case 0x40:
                        iStack00000000000000a0 = iRam0000000142667814;
                        break;
                      case 0x80:
                        iStack00000000000000a0 = iRam0000000142667828;
                      }
                    }
                  }
                  else if (uVar16 < 0x2001) {
                    if (uVar16 == 0x2000) {
                      iStack00000000000000a0 = iRam0000000142667854;
                    }
                    else if (uVar16 == 0x200) {
                      iStack00000000000000a0 = iRam000000014266783c;
                    }
                    else if (uVar16 == 0x400) {
                      iStack00000000000000a0 = iRam0000000142667830;
                    }
                    else if (uVar16 == 0x800) {
                      iStack00000000000000a0 = iRam0000000142667840;
                    }
                    else {
                      if (uVar16 != 0x1000) goto code_r0x00014019e055;
                      iStack00000000000000a0 = iRam0000000142667824;
                    }
                  }
                  else if (uVar16 == 0x4000) {
                    iStack00000000000000a0 = iRam0000000142667850;
                  }
                  else if (uVar16 == 0x8000) {
                    iStack00000000000000a0 = iRam000000014266781c;
                  }
                  else {
                    if (uVar16 != 0x10000) goto code_r0x00014019e055;
                    iStack00000000000000a0 = iRam0000000142667848;
                  }
                  break;
                case 0x1f:
                  iStack00000000000000a0 = iRam00000001426674f8;
                  break;
                case 0x20:
                  iStack00000000000000a0 = iRam0000000142667514;
                  break;
                case 0x21:
                  iStack00000000000000a0 = iRam00000001426674bc;
                  break;
                case 0x22:
                  uVar4 = (**(code **)(*plVar12 + 0xd8))(plVar12);
                  switch(uVar4) {
                  case 0:
                    iStack00000000000000a0 = iRam0000000142667488;
                    break;
                  case 1:
                    iStack00000000000000a0 = iRam0000000142667468;
                    break;
                  case 2:
                    iStack00000000000000a0 = iRam0000000142667470;
                    break;
                  case 3:
                  case 4:
                  case 5:
                    iStack00000000000000a0 = iRam0000000142667478;
                    break;
                  case 6:
                    iStack00000000000000a0 = iRam0000000142667474;
                    break;
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
                    iStack00000000000000a0 = iRam00000001426674a8;
                    break;
                  case 0x25:
                    iStack00000000000000a0 = iRam000000014266746c;
                  }
                  break;
                case 0x23:
                  iStack00000000000000a0 = iRam0000000142667464;
                  break;
                case 0x24:
                  iStack00000000000000a0 = iRam000000014266748c;
                  break;
                case 0x25:
                  iStack00000000000000a0 = iRam0000000142667490;
                  break;
                case 0x26:
                  iStack00000000000000a0 = iRam0000000142667494;
                  break;
                case 0x27:
                  iStack00000000000000a0 = iRam0000000142667498;
                  break;
                case 0x28:
                  iStack00000000000000a0 = iRam00000001426674c8;
                  break;
                case 0x29:
                  iStack00000000000000a0 = iRam00000001426674cc;
                  break;
                case 0x2a:
                  iStack00000000000000a0 = iRam00000001426674d0;
                  break;
                case 0x2b:
                  iStack00000000000000a0 = iRam00000001426674c0;
                  break;
                case 0x2c:
                  iStack00000000000000a0 = iRam00000001426674c4;
                  break;
                case 0x2d:
                  iStack00000000000000a0 = iRam000000014266744c;
                  break;
                case 0x2e:
                  iStack00000000000000a0 = iRam0000000142667444;
                  break;
                case 0x2f:
                case 0x30:
                  iStack00000000000000a0 = iRam0000000142667424;
                  break;
                case 0x31:
                  iStack00000000000000a0 = iRam0000000142667428;
                  break;
                case 0x32:
                  iStack00000000000000a0 = iRam00000001426674d8;
                  break;
                case 0x33:
                  iStack00000000000000a0 = iRam000000014266745c;
                  break;
                case 0x34:
                  iStack00000000000000a0 = iRam0000000142667450;
                  break;
                case 0x35:
                  iStack00000000000000a0 = iRam0000000142667454;
                  break;
                case 0x36:
                  iStack00000000000000a0 = iRam0000000142667458;
                }
                if (iStack00000000000000a0 != 0) {
                  FUN_140af1630(0x142666770,iStack00000000000000a0,2,2,5);
                }
                sheet_supplier_1400bc6f0(0x142666770,7,0,1);
                sheet_supplier_1400bc6e0
                          (0x142666770,iStack00000000000001e0 + 1,in_stack_000001b0 + 7);
                sheet_supplier_140070c50(&stack0x00003b60);
                (**(code **)(*plVar12 + 0x188))(plVar12,&stack0x00003b60);
                uVar13 = sheet_supplier_1400708f0(&stack0x00003b60);
                if ((ulonglong)(longlong)((in_stack_00000298 - in_stack_000001b0) + -0x16) <= uVar13
                   ) {
                  iVar14 = in_stack_00000298 - in_stack_000001b0;
                  iVar6 = iVar14 + -0x17;
                  if (-1 < iVar6) {
                    sheet_supplier_1400e27f0(&stack0x00003b60,(longlong)iVar6,0);
                  }
                  if (3 < iVar6) {
                    puVar10 = (undefined1 *)
                              sheet_supplier_1400fcb70(&stack0x00003b60,(longlong)(iVar14 + -0x1a));
                    *puVar10 = 0x2e;
                    puVar10 = (undefined1 *)
                              sheet_supplier_1400fcb70(&stack0x00003b60,(longlong)(iVar14 + -0x19));
                    *puVar10 = 0x2e;
                    puVar10 = (undefined1 *)
                              sheet_supplier_1400fcb70(&stack0x00003b60,(longlong)(iVar14 + -0x18));
                    *puVar10 = 0x2e;
                  }
                }
                FUN_140af0220(0x142666770,&stack0x00003b60,0,0);
                for (iVar6 = 0; iVar6 < 1; iVar6 = iVar6 + 1) {
                  iVar14 = in_stack_00000298 + iVar6 * 3;
                  iVar8 = iVar14 + -4;
                  if ((((iVar8 <= in_stack_000000c8) && (in_stack_000000c8 < iVar14 + -1)) &&
                      (iStack00000000000001e0 <= in_stack_000000c0._4_4_)) &&
                     (in_stack_000000c0._4_4_ < iStack00000000000001e0 + 3)) {
                    _DAT_1418c53b8 = 0x13b;
                    _DAT_1418c53dc = 0;
                    _DAT_1418c53e0 = 0;
                    DAT_1418c53d8 = 1;
                  }
                  for (iVar14 = 0; iVar14 < 3; iVar14 = iVar14 + 1) {
                    for (iVar17 = 0; iVar17 < 3; iVar17 = iVar17 + 1) {
                      sheet_supplier_1400bc6e0
                                (0x142666770,iStack00000000000001e0 + iVar14,iVar8 + iVar17);
                      sheet_supplier_140af19c0
                                (0x142666770,
                                 *(undefined4 *)
                                  ((longlong)iVar17 * 0xc + 0x142671324 + (longlong)iVar14 * 4),0);
                    }
                  }
                }
                sheet_supplier_1400693f0(&stack0x00003b60);
              }
              iStack00000000000001e0 = iStack00000000000001e0 + 3;
              if (iVar5 + -1 < iStack00000000000001e0) break;
            }
          }
          else {
            puVar11 = (undefined8 *)sheet_supplier_1400703d0(&stack0x00001668);
            iVar6 = (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11);
            if (iVar6 == 0x21) goto LAB_14019d274;
          }
          sheet_supplier_1400703c0(&stack0x00001668);
        }
        sheet_supplier_1400703c0(&stack0x00001750);
      }
    }
  }
  sheet_supplier_1400693f0(&stack0x00003900);
  FUN_14154de00(in_stack_0000b240 ^ (ulonglong)&stack0x00000000);
  return;
}

