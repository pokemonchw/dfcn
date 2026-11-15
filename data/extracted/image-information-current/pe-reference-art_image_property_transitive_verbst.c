/* reference PE:6aea05a1:02734000; art_image_property_transitive_verbst; RVA 0x147df0..0x14848c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_property_transitive_verbst
               (longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
               undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_108 [32];
  undefined1 uStack_e8;
  undefined8 ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong alStack_b8 [3];
  ulonglong uStack_a0;
  longlong alStack_98 [4];
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418be040 ^ (ulonglong)auStack_108;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0) goto LAB_14014846c;
  uVar6 = param_3[1] - *param_3 >> 3;
  if (((uVar6 <= (ulonglong)(longlong)iVar1) || (*(int *)(param_1 + 0x1c) < 0)) ||
     (uVar6 <= (ulonglong)(longlong)*(int *)(param_1 + 0x1c))) goto LAB_14014846c;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0xf;
  pppuStack_78 = (undefined8 ****)0x0;
  plVar2 = *(longlong **)(*param_3 + (longlong)iVar1 * 8);
  uStack_e8 = param_5;
  (**(code **)(*plVar2 + 0x38))(plVar2,&pppuStack_78,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  pppuStack_d8 = (undefined8 ****)0x0;
  plVar2 = *(longlong **)(*param_3 + (longlong)*(int *)(param_1 + 0x1c) * 8);
  uStack_e8 = param_5;
  (**(code **)(*plVar2 + 0x38))(plVar2,&pppuStack_d8,1,param_4);
  iVar1 = *(int *)(*(longlong *)(*param_3 + (longlong)*(int *)(param_1 + 0x18) * 8) + 8);
  alStack_b8[1] = 0;
  uStack_a0 = 0xf;
  if (iVar1 == 1) {
    uVar11 = 4;
    alStack_b8[0] = 0x20736920;
  }
  else {
    uVar11 = 5;
    alStack_b8[0] = 0x2065726120;
  }
  ppppuVar8 = &pppuStack_78;
  if (0xf < uStack_60) {
    ppppuVar8 = (undefined8 ****)pppuStack_78;
  }
  alStack_b8[2] = uVar11;
  FUN_140071040(param_2,ppppuVar8,uStack_68);
  uVar4 = (int)*(short *)(param_1 + 0x20) - 1;
  uVar6 = 0xf;
  if (uVar4 < 0x2e) {
    uVar6 = 0xf;
                    /* WARNING: Switch is manually overridden */
    switch(uVar4) {
    case 0:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "surrounded by ";
      break;
    case 1:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xb;
      pcVar9 = "massacring ";
      break;
    case 2:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "fighting with ";
      break;
    default:
      goto override_jmp_140147f74_case_3;
    case 4:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "greeting ";
      break;
    case 5:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "refusing ";
      break;
    case 6:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "speaking with ";
      break;
    case 7:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "embracing ";
      break;
    case 8:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "striking down ";
      break;
    case 0xb:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 8;
      pcVar9 = "raising ";
      break;
    case 0xc:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 7;
      pcVar9 = "hiding ";
      break;
    case 0xf:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "devouring ";
      break;
    case 0x10:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "admiring ";
      break;
    case 0x11:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 8;
      pcVar9 = "burning ";
      break;
    case 0x20:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "shooting ";
      break;
    case 0x21:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "torturing ";
      break;
    case 0x22:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0x1f;
      pcVar9 = "committing a depraved act upon ";
      break;
    case 0x23:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xb;
      pcVar9 = "praying to ";
      break;
    case 0x24:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "contemplating ";
      break;
    case 0x25:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 8;
      pcVar9 = "cooking ";
      break;
    case 0x26:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "engraving ";
      break;
    case 0x27:
      FUN_140071040(param_2,alStack_b8,uVar11);
      FUN_140071040(param_2,"prostrating ",0xc);
      if (iVar1 == 1) {
        alStack_98[1] = 0;
        alStack_98[3] = 0xf;
        alStack_98[2] = 6;
        alStack_98[0] = 0x666c65737469;
        FUN_140071040(param_2,alStack_98,6);
        if (0xf < (ulonglong)alStack_98[3]) {
          uVar6 = alStack_98[3] + 1;
          lVar7 = alStack_98[0];
          if (0xfff < uVar6) {
            uVar6 = alStack_98[3] + 0x28;
            lVar7 = *(longlong *)(alStack_98[0] + -8);
            if (0x1f < (alStack_98[0] - lVar7) - 8U) {
              _invalid_parameter_noinfo_noreturn();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          load_supplier_0x15530d0(lVar7,uVar6);
        }
        uVar11 = 8;
        pcVar9 = " before ";
      }
      else {
        FUN_140071040(param_2,"themselves",10);
        uVar11 = 8;
        pcVar9 = " before ";
      }
      break;
    case 0x29:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xb;
      pcVar9 = "impaled on ";
      break;
    case 0x2b:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0x10;
      pcVar9 = "being flayed by ";
      break;
    case 0x2c:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xd;
      pcVar9 = "hanging from ";
      break;
    case 0x2d:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0x13;
      pcVar9 = "being mutilated by ";
    }
    FUN_140071040(param_2,pcVar9,uVar11);
    ppppuVar8 = &pppuStack_d8;
    if (0xf < uStack_c0) {
      ppppuVar8 = (undefined8 ****)pppuStack_d8;
    }
    FUN_140071040(param_2,ppppuVar8,uStack_c8);
    uVar6 = uStack_a0;
  }
override_jmp_140147f74_case_3:
  FUN_140071040(param_2,".  ",3);
  FUN_140546b30(param_2);
  if (0xf < uVar6) {
    uVar10 = uVar6 + 1;
    lVar7 = alStack_b8[0];
    if (0xfff < uVar10) {
      uVar10 = uVar6 + 0x28;
      lVar7 = *(longlong *)(alStack_b8[0] + -8);
      if (0x1f < (alStack_b8[0] - lVar7) - 8U) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(lVar7,uVar10);
  }
  if (0xf < uStack_c0) {
    uVar6 = uStack_c0 + 1;
    ppppuVar8 = (undefined8 ****)pppuStack_d8;
    if (0xfff < uVar6) {
      uVar6 = uStack_c0 + 0x28;
      ppppuVar8 = (undefined8 ****)pppuStack_d8[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_d8 + (-8 - (longlong)ppppuVar8))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar8,uVar6);
  }
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  pppuStack_d8 = (undefined8 ***)((ulonglong)pppuStack_d8 & 0xffffffffffffff00);
  if (0xf < uStack_60) {
    uVar6 = uStack_60 + 1;
    ppppuVar8 = (undefined8 ****)pppuStack_78;
    if (0xfff < uVar6) {
      uVar6 = uStack_60 + 0x28;
      ppppuVar8 = (undefined8 ****)pppuStack_78[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_78 + (-8 - (longlong)ppppuVar8))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar8,uVar6);
  }
LAB_14014846c:
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_108);
  return;
}

