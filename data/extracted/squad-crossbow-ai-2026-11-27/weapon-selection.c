/* select wielded weapon | VA [0x141356c40, 0x141356e9f) | Ghidra decompilation */

longlong FUN_141356c40(longlong param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  
  if ((*(uint *)(param_1 + 0x110) & 0x40000000) == 0) {
    if ((*(longlong *)(param_1 + 0x4d8) != 0) &&
       (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) == 0xdf)) {
      for (plVar6 = *(longlong **)(param_1 + 0x408); plVar6 < *(longlong **)(param_1 + 0x410);
          plVar6 = plVar6 + 1) {
        if ((short)((longlong *)*plVar6)[1] == 0) {
          lVar5 = *(longlong *)*plVar6;
          if (lVar5 != 0) {
            return lVar5;
          }
          break;
        }
      }
    }
    puVar12 = (ulonglong *)(param_1 + 0x408);
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
    plStack_48 = (longlong *)0x0;
    bVar1 = false;
    bVar2 = false;
    uVar9 = *puVar12;
    plVar6 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    plVar14 = plVar8;
    plVar15 = plVar8;
    if ((longlong)(*(longlong *)(param_1 + 0x410) - uVar9) >> 3 != 0) {
      do {
        if (*(short *)(*(undefined8 **)((longlong)plVar15 + uVar9) + 1) == 1) {
          sVar3 = (*(code *)**(undefined8 **)**(undefined8 **)((longlong)plVar15 + uVar9))();
          if (sVar3 == 0x18) {
            uVar9 = *puVar12;
            if ((*(short *)(*(longlong *)(uVar9 + (longlong)plVar15) + 10) ==
                 *(short *)(param_1 + 0x600)) && (param_2 != '\0')) {
              lVar5 = **(longlong **)(uVar9 + (longlong)(int)plVar14 * 8);
              goto LAB_141356e7a;
            }
            if (!bVar1) {
              if (plVar11 != plVar6) {
                plVar6 = plVar11;
              }
              bVar1 = true;
              plStack_50 = plVar6;
            }
          }
          else {
            if (bVar1) goto LAB_141356ddb;
            uVar9 = *puVar12;
          }
          sVar3 = (*(code *)**(undefined8 **)**(undefined8 **)((longlong)plVar15 + uVar9))();
          if (sVar3 == 0x56) {
            if (!bVar2) {
              if (plVar11 != plVar6) {
                plVar6 = plVar11;
              }
              bVar2 = true;
              plStack_50 = plVar6;
            }
          }
          else if (bVar2) goto LAB_141356ddb;
          if (plVar6 == plVar8) {
            FUN_1400bc360(&plStack_58,plVar6);
            plVar6 = plStack_50;
            plVar8 = plStack_48;
            plVar11 = plStack_58;
          }
          else {
            *plVar6 = **(longlong **)((longlong)plVar15 + *puVar12);
            plStack_50 = plVar6 + 1;
            plVar6 = plStack_50;
          }
        }
LAB_141356ddb:
        uVar13 = (int)plVar14 + 1;
        uVar9 = *puVar12;
        plVar14 = (longlong *)(ulonglong)uVar13;
        plVar15 = plVar15 + 1;
      } while ((ulonglong)(longlong)(int)uVar13 <
               (ulonglong)((longlong)(*(longlong *)(param_1 + 0x410) - uVar9) >> 3));
    }
    uVar13 = 0;
    uVar10 = (longlong)plVar6 - (longlong)plVar11 >> 3;
    lVar5 = 0;
    if (uVar10 != 0) {
      if (param_2 == '\0') {
        if (1 < (uint)uVar10) {
          uVar4 = FUN_140ece790();
          uVar4 = uVar4 + (int)((longlong)((ulonglong)uVar4 * 0x100000003) >> 0x3f) * 0x7fffffff;
          uVar7 = (int)(0x7fffffff / (uVar10 & 0xffffffff)) + 1;
          uVar13 = uVar4 / uVar7;
          uVar9 = (ulonglong)uVar4 % (ulonglong)uVar7;
        }
        lVar5 = plVar11[(int)uVar13];
      }
      else {
        lVar5 = *plVar11;
      }
    }
LAB_141356e7a:
    FUN_1400681a0(&plStack_58,uVar9);
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}
