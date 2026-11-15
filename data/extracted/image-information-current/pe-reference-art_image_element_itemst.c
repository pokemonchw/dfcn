/* reference PE:6aea05a1:02734000; art_image_element_itemst; RVA 0x149200..0x1497b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_itemst
               (longlong param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  int iStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  char cStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_f8;
  puVar12 = (undefined4 *)0x0;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  cStack_88 = param_3;
  if ((*(int *)(param_1 + 0x1c) != -1) && (param_4 != '\0')) {
    iVar7 = (int)(_DAT_142408608 - _DAT_142408600 >> 3) + -1;
    if (-1 < iVar7) {
      lVar9 = (longlong)iVar7;
      do {
        lVar1 = *(longlong *)(*(longlong *)(_DAT_142408600 + lVar9 * 8) + 0x90);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1c) == *(int *)(param_1 + 0x1c))) {
          puVar12 = *(undefined4 **)(_DAT_142408600 + (longlong)iVar7 * 8);
          break;
        }
        iVar7 = iVar7 + -1;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    if (puVar12 != (undefined4 *)0x0) {
      if (param_5 != '\0') {
        FUN_140071040(param_2,"[LPAGE:ARTIFACT:",0x10);
        FUN_140545610(*puVar12,param_2);
        FUN_140071040(param_2,"]",1);
      }
      uStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      FUN_140aae180(puVar12 + 2,&pppuStack_80,1,0);
      uVar11 = uStack_68;
      bVar14 = false;
      if (lStack_70 == 0) {
        if (uStack_68 < 8) {
          if (0x7fffffffffffffff - (uStack_68 >> 1) < uStack_68) {
            uVar13 = 0x7fffffffffffffff;
          }
          else {
            uVar10 = uStack_68 + (uStack_68 >> 1);
            uVar13 = 0xf;
            if (0xf < uVar10) {
              uVar13 = uVar10;
            }
          }
          ppppuVar6 = (undefined8 ****)FUN_140071e00(uVar13 + 1);
          lStack_70 = 8;
          *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar6 + 1) = 0;
          param_3 = cStack_88;
          uStack_68 = uVar13;
          if (0xf < uVar11) {
            uVar10 = uVar11 + 1;
            ppppuVar8 = (undefined8 ****)pppuStack_80;
            if (0xfff < uVar10) {
              uVar10 = uVar11 + 0x28;
              ppppuVar8 = (undefined8 ****)pppuStack_80[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar8)))
              goto LAB_140149508;
            }
            load_supplier_0x15530d0(ppppuVar8,uVar10);
            param_3 = cStack_88;
          }
        }
        else {
          ppppuVar6 = &pppuStack_80;
          if (0xf < uStack_68) {
            ppppuVar6 = (undefined8 ****)pppuStack_80;
          }
          lStack_70 = 8;
          *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar6 + 1) = 0;
          ppppuVar6 = (undefined8 ****)pppuStack_80;
        }
        pppuStack_80 = ppppuVar6;
        sVar4 = (**(code **)**(undefined8 **)(puVar12 + 0x24))();
        if (((sVar4 == 0x59) ||
            (cVar3 = (**(code **)(**(longlong **)(puVar12 + 0x24) + 0xe0))
                               (*(longlong **)(puVar12 + 0x24),0x14), cVar3 != '\0')) ||
           (sVar4 = (**(code **)**(undefined8 **)(puVar12 + 0x24))(), sVar4 == 0x57)) {
          uVar11 = uStack_68;
          if (uStack_68 < 8) {
            uVar10 = 0x7fffffffffffffff;
            if (uStack_68 <= 0x7fffffffffffffff - (uStack_68 >> 1)) {
              uVar13 = uStack_68 + (uStack_68 >> 1);
              uVar10 = 0xf;
              if (0xf < uVar13) {
                uVar10 = uVar13;
              }
            }
            ppppuVar6 = (undefined8 ****)FUN_140071e00(uVar10 + 1);
            lStack_70 = 8;
            *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
            *(undefined1 *)(ppppuVar6 + 1) = 0;
            uStack_68 = uVar10;
            if (0xf < uVar11) {
              uVar10 = uVar11 + 1;
              ppppuVar8 = (undefined8 ****)pppuStack_80;
              if (0xfff < uVar10) {
                uVar10 = uVar11 + 0x28;
                ppppuVar8 = (undefined8 ****)pppuStack_80[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar8))) {
LAB_140149508:
                  lStack_70 = 8;
                  _invalid_parameter_noinfo_noreturn();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              load_supplier_0x15530d0(ppppuVar8,uVar10);
            }
          }
          else {
            ppppuVar6 = &pppuStack_80;
            if (0xf < uStack_68) {
              ppppuVar6 = (undefined8 ****)pppuStack_80;
            }
            lStack_70 = 8;
            *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
            *(undefined1 *)(ppppuVar6 + 1) = 0;
            ppppuVar6 = (undefined8 ****)pppuStack_80;
          }
          pppuStack_80 = ppppuVar6;
          bVar14 = false;
        }
        else {
          FUN_140c7d140(*(undefined8 *)(puVar12 + 0x24),&pppuStack_80,0,1);
          bVar14 = true;
        }
      }
      ppppuVar6 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar6 = (undefined8 ****)pppuStack_80;
      }
      FUN_140071040(param_2,ppppuVar6,lStack_70);
      if (((param_3 == '\0') && (*(longlong *)(puVar12 + 0x24) != 0)) && (!bVar14)) {
        FUN_140071040(param_2," the ",5);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0xf;
        pppuStack_60 = (undefined8 ****)0x0;
        FUN_140c7d140(*(undefined8 *)(puVar12 + 0x24),&pppuStack_60,1,0xffffffff);
        ppppuVar6 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar6 = (undefined8 ****)pppuStack_60;
        }
        FUN_140071040(param_2,ppppuVar6,uStack_50);
        if (0xf < uStack_48) {
          uVar11 = uStack_48 + 1;
          ppppuVar6 = (undefined8 ****)pppuStack_60;
          if (0xfff < uVar11) {
            uVar11 = uStack_48 + 0x28;
            ppppuVar6 = (undefined8 ****)pppuStack_60[-1];
            if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar6))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x15530d0(ppppuVar6,uVar11);
        }
      }
      if (param_5 != '\0') {
        FUN_140071040(param_2,"[/LPAGE]",8);
      }
      if (0xf < uStack_68) {
        uVar11 = uStack_68 + 1;
        ppppuVar6 = (undefined8 ****)pppuStack_80;
        if (0xfff < uVar11) {
          uVar11 = uStack_68 + 0x28;
          ppppuVar6 = (undefined8 ****)pppuStack_80[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar6))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        load_supplier_0x15530d0(ppppuVar6,uVar11);
      }
      goto LAB_14014978b;
    }
  }
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_140071040(param_2,"a ",2);
    }
  }
  else {
    FUN_140071040(param_2,"the ",4);
  }
  iVar7 = *(int *)(param_1 + 8);
  if (1 < iVar7) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0xf;
    pppuStack_60 = (undefined8 ****)0x0;
    image_number_words(iVar7,&pppuStack_60);
    ppppuVar6 = &pppuStack_60;
    if (0xf < uStack_48) {
      ppppuVar6 = (undefined8 ****)pppuStack_60;
    }
    FUN_140071040(param_2,ppppuVar6,uStack_50);
    FUN_140071040(param_2," ",1);
    if (0xf < uStack_48) {
      uVar11 = uStack_48 + 1;
      ppppuVar6 = (undefined8 ****)pppuStack_60;
      if (0xfff < uVar11) {
        uVar11 = uStack_48 + 0x28;
        ppppuVar6 = (undefined8 ****)pppuStack_60[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar6))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar6,uVar11);
    }
  }
  uStack_d0 = 1;
  if (*(int *)(param_1 + 8) != 1) {
    uStack_d0 = 0xffffffff;
  }
  iStack_d8 = (int)*(short *)(param_1 + 0x16);
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 1;
  uStack_a8 = 0xffffffff;
  uStack_b0 = 0xffffffff;
  uStack_b8 = 0;
  uStack_c0 = 1;
  uStack_c8 = 0;
  image_item_noun(param_2,*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x12),
                  *(undefined2 *)(param_1 + 0x14));
LAB_14014978b:
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_f8);
  return;
}

