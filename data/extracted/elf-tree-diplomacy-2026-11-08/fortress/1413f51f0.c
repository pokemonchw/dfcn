
undefined8 FUN_1413f51f0(undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lStackX_10;
  
  if (*(int *)(param_2 + 0x24) == -1) {
LAB_1413f532b:
    uVar5 = 2;
  }
  else {
    plVar6 = (longlong *)*param_1;
    plVar1 = (longlong *)param_1[1];
    lVar4 = 0;
    while (plVar6 < plVar1) {
      lVar2 = *plVar6;
      cVar3 = func_0x0001400bbb30(lVar2,param_2);
      if (((cVar3 != '\0') && (*(int *)(lVar2 + 0x18) == *(int *)(param_2 + 0x18))) &&
         (*(int *)(lVar2 + 0x1c) == *(int *)(param_2 + 0x1c))) {
        if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
          if (param_3 < *(int *)(lVar2 + 0x10)) {
            *(int *)(lVar2 + 0x10) = param_3;
            *(int *)(lVar2 + 0x14) = param_4;
            return 1;
          }
          if ((*(int *)(lVar2 + 0x10) == param_3) && (param_4 < *(int *)(lVar2 + 0x14))) {
            *(int *)(lVar2 + 0x14) = param_4;
            return 1;
          }
        }
        goto LAB_1413f532b;
      }
      cVar3 = FUN_1413f4870();
      if (cVar3 == '\0') {
        cVar3 = FUN_1413f4870(param_2,lVar2);
        if (cVar3 != '\0') goto LAB_1413f532b;
        if ((*(byte *)(lVar2 + 0x20) & 1) != 0) {
          lVar4 = lVar2;
        }
        plVar6 = plVar6 + 1;
      }
      else {
        *(uint *)(lVar2 + 0x20) = *(uint *)(lVar2 + 0x20) | 1;
        plVar6 = plVar6 + 1;
        lVar4 = lVar2;
      }
    }
    if (lVar4 == 0) {
      lVar4 = FUN_141539690(0x28);
      lStackX_10 = lVar4;
      func_0x000140488010(lVar4,param_2);
      *(int *)(lVar4 + 0x10) = param_3;
      *(int *)(lVar4 + 0x14) = param_4;
      plVar6 = (longlong *)param_1[1];
      if (plVar6 == (longlong *)param_1[2]) {
        FUN_1400bad30(param_1,plVar6,&lStackX_10);
        uVar5 = 0;
      }
      else {
        *plVar6 = lVar4;
        param_1[1] = param_1[1] + 8;
        uVar5 = 0;
      }
    }
    else {
      func_0x000140488010(lVar4,param_2);
      uVar5 = 0;
      *(int *)(lVar4 + 0x10) = param_3;
      *(int *)(lVar4 + 0x14) = param_4;
    }
  }
  return uVar5;
}

