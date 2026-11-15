/* classic PE:6aea11a5:0272d000; art_image_property_intransitive_verbst; RVA 0x1484e0..0x148bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_property_intransitive_verbst
               (longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
               undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined1 uStack_98;
  longlong alStack_88 [3];
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_b8;
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 < 0) || ((ulonglong)(param_3[1] - *param_3 >> 3) <= (ulonglong)(longlong)iVar1))
  goto LAB_140148b8f;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar10 = 0xf;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  plVar2 = *(longlong **)(*param_3 + (longlong)iVar1 * 8);
  uStack_98 = param_5;
  (**(code **)(*plVar2 + 0x38))(plVar2,&pppuStack_68,1);
  iVar1 = *(int *)(*(longlong *)(*param_3 + (longlong)*(int *)(param_1 + 0x18) * 8) + 8);
  alStack_88[1] = 0;
  uStack_70 = 0xf;
  if (iVar1 == 1) {
    uVar9 = 4;
    alStack_88[0] = 0x20736920;
  }
  else {
    uVar9 = 5;
    alStack_88[0] = 0x2065726120;
  }
  ppppuVar6 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar6 = (undefined8 ****)pppuStack_68;
  }
  alStack_88[2] = uVar9;
  FUN_140070fd0(param_2,ppppuVar6,uStack_58);
  if (0x2f < *(ushort *)(param_1 + 0x1c)) goto override_jmp_14014860d_case_1;
                    /* WARNING: Switch is manually overridden */
  switch(*(ushort *)(param_1 + 0x1c)) {
  case 0:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0xe;
    pcVar7 = "withering away";
    break;
  default:
    goto override_jmp_14014860d_case_1;
  case 4:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 8;
    pcVar7 = "laboring";
    break;
  case 10:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x18;
    pcVar7 = "striking a menacing pose";
    break;
  case 0xb:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "traveling";
    break;
  case 0xe:
    FUN_140070fd0(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140070fd0(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140070fd0(param_2," confused",9);
    goto override_jmp_14014860d_case_1;
  case 0xf:
    FUN_140070fd0(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140070fd0(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140070fd0(param_2," terrified",10);
    goto override_jmp_14014860d_case_1;
  case 0x12:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "burning";
    break;
  case 0x13:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "weeping";
    break;
  case 0x14:
    FUN_140070fd0(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140070fd0(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140070fd0(param_2," dejected",9);
    goto override_jmp_14014860d_case_1;
  case 0x15:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 8;
    pcVar7 = "cringing";
    break;
  case 0x16:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "screaming";
    break;
  case 0x17:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x1b;
    pcVar7 = "making a submissive gesture";
    break;
  case 0x18:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x13;
    pcVar7 = "in a fetal position";
    break;
  case 0x19:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x19;
    pcVar7 = "smeared out into a spiral";
    break;
  case 0x1a:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "falling";
    break;
  case 0x1b:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 4;
    pcVar7 = "dead";
    break;
  case 0x1c:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 8;
    pcVar7 = "laughing";
    break;
  case 0x1d:
    FUN_140070fd0(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140070fd0(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140070fd0(param_2," offended",9);
    goto override_jmp_14014860d_case_1;
  case 0x1e:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 10;
    pcVar7 = "being shot";
    break;
  case 0x1f:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x1a;
    pcVar7 = "making a plaintive gesture";
    break;
  case 0x20:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "melting";
    break;
  case 0x22:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0xe;
    pcVar7 = "being tortured";
    break;
  case 0x23:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x19;
    pcVar7 = "committing a depraved act";
    break;
  case 0x24:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "praying";
    break;
  case 0x25:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0xd;
    pcVar7 = "contemplating";
    break;
  case 0x26:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "cooking";
    break;
  case 0x27:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "engraving";
    break;
  case 0x29:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "suffering";
    break;
  case 0x2b:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x15;
    pcVar7 = "unnaturally contorted";
    break;
  case 0x2c:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0xc;
    pcVar7 = "being flayed";
    break;
  case 0x2e:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0xf;
    pcVar7 = "being mutilated";
    break;
  case 0x2f:
    FUN_140070fd0(param_2,alStack_88,uVar9);
    uVar9 = 0x1a;
    pcVar7 = "striking a triumphant pose";
  }
  FUN_140070fd0(param_2,pcVar7,uVar9);
  uVar10 = uStack_70;
override_jmp_14014860d_case_1:
  FUN_140070fd0(param_2,".  ",3);
  FUN_140544330(param_2);
  if (0xf < uVar10) {
    uVar8 = uVar10 + 1;
    lVar5 = alStack_88[0];
    if (0xfff < uVar8) {
      uVar8 = uVar10 + 0x28;
      lVar5 = *(longlong *)(alStack_88[0] + -8);
      if (0x1f < (alStack_88[0] - lVar5) - 8U) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x154de20(lVar5,uVar8);
  }
  if (0xf < uStack_50) {
    uVar10 = uStack_50 + 1;
    ppppuVar6 = (undefined8 ****)pppuStack_68;
    if (0xfff < uVar10) {
      uVar10 = uStack_50 + 0x28;
      ppppuVar6 = (undefined8 ****)pppuStack_68[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar6))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x154de20(ppppuVar6,uVar10);
  }
LAB_140148b8f:
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_b8);
  return;
}

