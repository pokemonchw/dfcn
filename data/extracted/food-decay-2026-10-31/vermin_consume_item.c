/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 140a464c0..140a4661c */

void vermin_consume_item(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  lStack_28 = 0;
  lStack_20 = 0;
  uVar3 = 0;
  lStack_18 = 0;
  vermin_collect_edible(0,&lStack_28,param_2);
  uVar6 = lStack_20 - lStack_28 >> 3;
  if (uVar6 != 0) {
    if (1 < (uint)uVar6) {
      uVar3 = FUN_140eb68b0();
      uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar6 & 0xffffffff)) + 1U);
    }
    if (-1 < *(short *)(param_1 + 0xc)) {
      *(undefined2 *)(param_1 + 0xc) = 300;
    }
    lVar5 = (longlong)(int)uVar3 * 8;
    sVar2 = (**(code **)**(undefined8 **)(lVar5 + lStack_28))();
    if (sVar2 != 0x17) {
      (**(code **)(**(longlong **)(lVar5 + lStack_28) + 0x480))
                (*(longlong **)(lVar5 + lStack_28),0xffffffff);
    }
    iVar4 = (**(code **)(**(longlong **)(lVar5 + lStack_28) + 0x478))();
    if (iVar4 < 1) {
      FUN_140ab52d0(*(undefined8 *)(lVar5 + lStack_28),0,*(undefined2 *)(param_1 + 4),
                    *(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 8),1);
    }
  }
  if (lStack_28 != 0) {
    uVar6 = lStack_18 - lStack_28 & 0xfffffffffffffff8;
    lVar5 = lStack_28;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lStack_28 + -8);
      if (0x1f < (lStack_28 - lVar5) - 8U) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x000141539680(lVar5,uVar6);
  }
  return;
}

