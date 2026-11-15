/* classic PE:6aea11a5:0272d000; number-words; RVA 0x545040..0x5457dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_number_words(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418b8040 ^ (ulonglong)auStack_68;
  param_2[2] = 0;
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar3 = 0;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    FUN_140070e90(param_2,"negative ",9);
  }
  if (param_1 < 0x14) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      FUN_140070e90(param_2,"zero",4);
      break;
    case 1:
      FUN_140070e90(param_2,"one",3);
      break;
    case 2:
      FUN_140070e90(param_2,"two",3);
      break;
    case 3:
      FUN_140070e90(param_2,"three",5);
      break;
    case 4:
      FUN_140070e90(param_2,"four",4);
      break;
    case 5:
      FUN_140070e90(param_2,"five",4);
      break;
    case 6:
      FUN_140070e90(param_2,"six",3);
      break;
    case 7:
      FUN_140070e90(param_2,"seven",5);
      break;
    case 8:
      FUN_140070e90(param_2,"eight",5);
      break;
    case 9:
      FUN_140070e90(param_2,"nine",4);
      break;
    case 10:
      FUN_140070e90(param_2,"ten",3);
      break;
    case 0xb:
      FUN_140070e90(param_2,"eleven",6);
      break;
    case 0xc:
      FUN_140070e90(param_2,"twelve",6);
      break;
    case 0xd:
      FUN_140070e90(param_2,"thirteen",8);
      break;
    case 0xe:
      FUN_140070e90(param_2,"fourteen",8);
      break;
    case 0xf:
      FUN_140070e90(param_2,"fifteen",7);
      break;
    case 0x10:
      FUN_140070e90(param_2,"sixteen",7);
      break;
    case 0x11:
      FUN_140070e90(param_2,"seventeen",9);
      break;
    case 0x12:
      FUN_140070e90(param_2,"eighteen",8);
      break;
    case 0x13:
      FUN_140070e90(param_2,"nineteen",8);
    }
    goto LAB_1405457bb;
  }
  if (999999999 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 1000000000,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    FUN_140070fd0(param_2," billion",8);
    if ((int)param_1 % 1000000000 != 0) {
      FUN_140070fd0(param_2," ",1);
      image_number_words((int)param_1 % 1000000000,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    }
    FUN_140070e10(&pppuStack_48);
    goto LAB_1405457bb;
  }
  if (999999 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 1000000,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    FUN_140070fd0(param_2," million",8);
    if ((int)param_1 % 1000000 != 0) {
      FUN_140070fd0(param_2," ",1);
      image_number_words((int)param_1 % 1000000,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    }
    if (uStack_30 < 0x10) goto LAB_1405457bb;
    uVar5 = uStack_30 + 1;
    ppppuVar4 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)pppuStack_48[-1]))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_140545477;
  }
  if (999 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 1000,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    FUN_140070fd0(param_2," thousand",9);
    if ((int)param_1 % 1000 != 0) {
      FUN_140070fd0(param_2," ",1);
      image_number_words((int)param_1 % 1000,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    }
    if (uStack_30 < 0x10) goto LAB_1405457bb;
    uVar5 = uStack_30 + 1;
    ppppuVar4 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar4))) {
        _invalid_parameter_noinfo_noreturn(ppppuVar4,uVar5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_140545477;
  }
  if (99 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 100,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    FUN_140070fd0(param_2," hundred",8);
    if ((int)param_1 % 100 != 0) {
      FUN_140070fd0(param_2," ",1);
      image_number_words((int)param_1 % 100,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    }
    if (uStack_30 < 0x10) goto LAB_1405457bb;
    uVar5 = uStack_30 + 1;
    ppppuVar4 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar4))) {
        _invalid_parameter_noinfo_noreturn(ppppuVar4,uVar5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_140545477;
  }
  if (0x4f < param_1 - 0x14) {
    FUN_140542fb0(param_1,param_2);
    goto LAB_1405457bb;
  }
  uVar1 = (int)param_1 / 10 - 2;
  if (7 < uVar1) goto LAB_140545711;
                    /* WARNING: Switch is manually overridden */
  switch(uVar1) {
  case 0:
    pcVar6 = "twenty";
    goto LAB_140545703;
  case 1:
    pcVar6 = "thirty";
    goto LAB_140545703;
  case 2:
    uVar7 = 5;
    pcVar6 = "forty";
    break;
  case 3:
    uVar7 = 5;
    pcVar6 = "fifty";
    break;
  case 4:
    uVar7 = 5;
    pcVar6 = "sixty";
    break;
  case 5:
    uVar7 = 7;
    pcVar6 = "seventy";
    break;
  case 6:
    pcVar6 = "eighty";
    goto LAB_140545703;
  case 7:
    pcVar6 = "ninety";
LAB_140545703:
    uVar7 = 6;
  }
  FUN_140070e90(param_2,pcVar6,uVar7);
LAB_140545711:
  if ((int)param_1 % 10 != 0) {
    FUN_140070fd0(param_2,"-",1);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 % 10,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar4,uStack_38);
    if (0xf < uStack_30) {
      uVar5 = uStack_30 + 1;
      ppppuVar4 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar5) {
        uVar5 = uStack_30 + 0x28;
        ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar4))) {
          _invalid_parameter_noinfo_noreturn(ppppuVar4,uVar5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_140545477:
      load_supplier_0x154de20(ppppuVar4,uVar5);
    }
  }
LAB_1405457bb:
  FUN_14154de00(uStack_28 ^ (ulonglong)auStack_68);
  return;
}

