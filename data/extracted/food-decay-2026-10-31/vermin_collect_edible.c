/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 140a462c0..140a464b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vermin_collect_edible(short *param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  undefined8 *puVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  short sVar9;
  longlong lVar10;
  longlong *plStackX_18;
  
  plStackX_18 = param_3;
  cVar3 = (**(code **)(*param_3 + 0x638))(param_3);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_3 + 0x90))(param_3);
    if (((cVar3 != '\0') || (sVar4 = (**(code **)*param_3)(param_3), sVar4 == 0x1f)) &&
       ((*(byte *)(param_3 + 2) & 0x40) != 0)) {
      sVar4 = *param_1;
      uVar6 = 0;
      sVar5 = 0;
      sVar9 = sVar5;
      if (((-1 < sVar4) &&
          ((ulonglong)(longlong)sVar4 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) &&
         ((sVar1 = param_1[1], -1 < sVar1 &&
          (lVar10 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar4 * 8),
          lVar8 = *(longlong *)(lVar10 + 0x178),
          (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar10 + 0x180) - lVar8 >> 3))))) {
        sVar9 = *(short *)(*(longlong *)(lVar8 + (longlong)sVar1 * 8) + 0x478);
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      (**(code **)(*param_3 + 0x10))(param_3);
      if (0 < sVar9) {
        sVar4 = container_material_weakness();
        if (-1 < (short)(100 - sVar4)) {
          sVar5 = 100 - sVar4;
        }
        if (1 < (int)sVar5 + 1U) {
          uVar6 = FUN_140eb68b0();
          uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  ((int)(0x7fffffff / (ulonglong)((int)sVar5 + 1U)) + 1U);
        }
        if (((int)uVar6 <= (int)sVar9) &&
           (iVar7 = (int)(param_3[8] - param_3[7] >> 3) + -1, lVar10 = (longlong)iVar7, -1 < iVar7))
        {
          do {
            iVar7 = (**(code **)(**(longlong **)(param_3[7] + lVar10 * 8) + 0x10))();
            if ((iVar7 == 10) &&
               (lVar8 = (**(code **)(**(longlong **)(param_3[7] + lVar10 * 8) + 0x18))(), lVar8 != 0
               )) {
              vermin_collect_edible(param_1,param_2,lVar8);
            }
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
      }
    }
  }
  else if ((*(byte *)(param_3 + 2) & 0x20) == 0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    if (puVar2 == *(undefined8 **)(param_2 + 0x10)) {
      FUN_1400bad30(param_2,puVar2,&plStackX_18);
      return;
    }
    *puVar2 = param_3;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 8;
    return;
  }
  return;
}

