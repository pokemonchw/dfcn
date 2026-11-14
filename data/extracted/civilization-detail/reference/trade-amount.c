/* Original PE owner: reference	trade-amount	0x140798f10	0x1407991c0 */

void mission_trade_amount(undefined8 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  iVar4 = 0;
  param_1[2] = 0;
  puVar6 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar6 = 0;
  if (0x7fffffff < param_3) {
    FUN_140070f00(param_1,"?",1);
    FUN_1400bb1b0(param_1,0xf);
    return;
  }
  if (0xe < (int)param_3) {
    FUN_140545790(param_2,param_1);
    FUN_1400bb1b0(param_1,0xf);
    return;
  }
  iVar1 = -param_2;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (param_3 < 0xf) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 1:
      iVar4 = 10;
      break;
    case 2:
      iVar4 = 0x19;
      break;
    case 3:
      iVar4 = 0x32;
      break;
    case 4:
      iVar4 = 100;
      break;
    case 5:
      iVar4 = 200;
      break;
    case 6:
      iVar4 = 500;
      break;
    case 7:
      iVar4 = 1000;
      break;
    case 8:
      iVar4 = 0x5dc;
      break;
    case 9:
      iVar4 = 2000;
      break;
    case 10:
      iVar4 = 0x9c4;
      break;
    case 0xb:
      iVar4 = 3000;
      break;
    case 0xc:
      iVar4 = 4000;
      break;
    case 0xd:
      iVar4 = 5000;
      break;
    case 0xe:
      iVar4 = 10000;
    }
  }
  if (iVar1 <= iVar4) {
    FUN_140545790(iVar1,param_1);
    FUN_1400bb1b0(param_1,0xf);
    return;
  }
  iVar4 = iVar4 + 0x32;
  bVar3 = false;
  if (iVar4 < iVar1) {
    if (iVar4 * 3 < iVar1) {
      if (iVar4 * 0x1e < iVar1) {
        bVar3 = true;
        iVar4 = iVar4 * 0x1e + 500;
        goto LAB_140799130;
      }
      uVar7 = (ulonglong)(uint)(iVar1 / 1000);
      iVar5 = (iVar1 / 1000) * 1000;
      iVar4 = iVar5 + 1000;
      if (iVar1 % 1000 < 500) {
        iVar4 = iVar5;
      }
      if (iVar4 < 1000) {
        iVar4 = 1000;
      }
    }
    else {
      uVar2 = iVar1 / 100;
      uVar7 = (ulonglong)uVar2;
      iVar4 = uVar2 * 100 + 100;
      if (iVar1 % 100 < 0x32) {
        iVar4 = uVar2 * 100;
      }
      if (iVar4 < 100) {
        iVar4 = 100;
        FUN_1400bb1b0(param_1,CONCAT71((uint7)(uint3)(uVar2 >> 8),0x7e));
        goto LAB_140799130;
      }
    }
  }
  else {
    uVar2 = iVar1 / 10;
    uVar7 = (ulonglong)uVar2;
    iVar4 = uVar2 * 10 + 10;
    if (iVar1 % 10 < 5) {
      iVar4 = uVar2 * 10;
    }
    if (iVar4 < 10) {
      iVar4 = 10;
      FUN_1400bb1b0(param_1,CONCAT71((uint7)(uint3)(uVar2 >> 8),0x7e));
      goto LAB_140799130;
    }
  }
  FUN_1400bb1b0(param_1,CONCAT71((int7)(uVar7 >> 8),0x7e));
LAB_140799130:
  if (param_2 < 0) {
    FUN_140071040(param_1,"-",1);
  }
  FUN_140545610(iVar4,param_1);
  FUN_1400bb1b0(param_1,0xf);
  if (bVar3) {
    FUN_1400bb1b0(param_1,0x3f);
  }
  return;
}

