/* squad_order_kill_listst::follow_order | VA [0x141106c50, 0x141106ef2) | Ghidra decompilation */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141106c50(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  short sVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  short sVar13;
  undefined8 uVar14;
  short sVar15;
  float fVar16;
  short sStackX_20;
  short sStack_38;
  short asStack_34 [2];
  short asStack_30 [2];
  short asStack_2c [2];
  
  if ((param_4 != 0) && (*(longlong *)(param_4 + 0x490) == 0)) {
    uVar14 = 0xffff8ad0;
    sVar13 = -30000;
    iVar6 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 2) + -1;
    lVar12 = (longlong)iVar6;
    plVar7 = _DAT_142407548;
    sVar15 = sVar13;
    if (-1 < iVar6) {
LAB_141106cd0:
      do {
        if (plVar7 < _DAT_142407550) {
          lVar8 = *plVar7;
          if (*(int *)(lVar8 + 0x130) != *(int *)(*(longlong *)(param_1 + 0x20) + lVar12 * 4)) {
            plVar7 = plVar7 + 1;
            goto LAB_141106cd0;
          }
          if (((lVar8 != 0) && ((*(byte *)(lVar8 + 0x110) & 2) == 0)) &&
             (cVar4 = func_0x0001413a7620(lVar8), cVar4 == '\0')) {
            asStack_34[0] = (short)uVar14;
            if ((*(uint *)(lVar8 + 0x110) & 0x2000000) == 0) {
              asStack_34[0] = *(short *)(lVar8 + 0xa8);
              asStack_30[0] = *(short *)(lVar8 + 0xaa);
              asStack_2c[0] = *(short *)(lVar8 + 0xac);
            }
            else {
              puVar1 = *(undefined8 **)(lVar8 + 0x1e0);
              for (puVar11 = *(undefined8 **)(lVar8 + 0x1d8); puVar11 < puVar1;
                  puVar11 = puVar11 + 1) {
                iVar6 = (**(code **)(*(longlong *)*puVar11 + 0x10))();
                if ((iVar6 == 0xb) &&
                   (lVar8 = (**(code **)(*(longlong *)*puVar11 + 0x18))(), lVar8 != 0)) {
                  FUN_140ca3790(lVar8,asStack_34,asStack_30,asStack_2c);
                  break;
                }
              }
              uVar14 = 0xffff8ad0;
            }
            if (asStack_34[0] != (short)uVar14) {
              cVar4 = FUN_1413bd210(param_4,asStack_34[0],asStack_30[0],asStack_2c[0],1);
              sVar3 = asStack_30[0];
              sVar2 = asStack_34[0];
              if (cVar4 == '\0') {
                uVar14 = 0xffff8ad0;
              }
              else {
                iVar10 = (int)(short)(*(short *)(param_4 + 0xa8) - asStack_34[0]);
                iVar6 = (int)(short)(*(short *)(param_4 + 0xaa) - asStack_30[0]);
                fVar16 = (float)(iVar6 * iVar6 + iVar10 * iVar10);
                if (fVar16 < 0.0) {
                  fVar16 = (float)func_0x0001415548d6(fVar16);
                }
                else {
                  fVar16 = SQRT(fVar16);
                }
                uVar14 = 0xffff8ad0;
                sVar5 = *(short *)(param_4 + 0xac) - asStack_2c[0];
                iVar6 = -(int)sVar5;
                sVar9 = (short)iVar6;
                if (iVar6 < 0) {
                  sVar9 = sVar5;
                }
                sVar9 = (short)(int)fVar16 + sVar9;
                if ((sVar9 < sVar13) || (sVar13 == -30000)) {
                  sStackX_20 = sVar3;
                  sStack_38 = asStack_2c[0];
                  sVar15 = sVar2;
                  sVar13 = sVar9;
                }
              }
            }
          }
        }
        lVar12 = lVar12 + -1;
        plVar7 = _DAT_142407548;
      } while (-1 < lVar12);
      if ((sVar15 != (short)uVar14) && ((int)param_2[1] < 0x4b)) {
        *param_2 = 0x20;
        *(short *)(param_2 + 0xc) = sVar15;
        *(short *)((longlong)param_2 + 0x32) = sStackX_20;
        *(short *)(param_2 + 0xd) = sStack_38;
        param_2[1] = 0x4b;
      }
    }
  }
  return;
}

/* SQUAD_ORDER_KILL_LIST in FUN_14150ce70 | VA [0x1415109d3, 0x141510a02) | Ghidra excerpt */
  case 0x20:
    uStack_ba0 = (uint *)CONCAT44(uStack_ba0._4_4_,0x1f);
    puStack_ba8 = (undefined4 *)CONCAT62(uVar4,3);
    FUN_141391170(param_1,(short)param_2[0xc],*(undefined2 *)((longlong)param_2 + 0x32),
                  (short)param_2[0xd]);
    FUN_141388210(param_1);
    break;
