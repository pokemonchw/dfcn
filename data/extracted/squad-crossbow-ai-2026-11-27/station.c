/* squad_order_movest::follow_order | VA [0x141106b70, 0x141106be7) | Ghidra decompilation */

void FUN_141106b70(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  if ((((param_4 != 0) && (*(short *)(param_1 + 0x20) != -30000)) &&
      (cVar1 = FUN_1413bd210(param_4,*(short *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                             *(undefined2 *)(param_1 + 0x24),1), cVar1 != '\0')) &&
     ((int)param_2[1] < 0x4b)) {
    *param_2 = 0x1f;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 0x20);
    *(undefined2 *)((longlong)param_2 + 0x32) = *(undefined2 *)(param_1 + 0x22);
    *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(param_1 + 0x24);
    param_2[1] = 0x4b;
  }
  return;
}

/* SQUAD_ORDER_MOVE in FUN_14150ce70 | VA [0x14151075a, 0x1415109d3) | Ghidra excerpt */
  case 0x1f:
    if (((_DAT_1418be238 == 0) &&
        (plVar32 = (longlong *)FUN_1413e51b0(), plVar32 != (longlong *)0x0)) &&
       ((iVar18 = (**(code **)(*plVar32 + 0x18))(plVar32), iVar18 == 0 &&
        (((puVar30 = (undefined8 *)FUN_141356c40(param_1,1), puVar30 != (undefined8 *)0x0 &&
          (sVar61 = (**(code **)*puVar30)(puVar30), sVar61 == 0x18)) &&
         (*(short *)(puVar30[0x1d] + 0xd2) != -1)))))) {
      if (*(int *)(param_1 + 0xfa) != 0) {
        iVar18 = 0;
        uVar53 = (int)(short)param_1[0x54] - 1;
        uVar35 = (ulonglong)uVar53;
        if ((int)(short)uVar53 <= (short)param_1[0x54] + 1) {
          lVar34 = 0;
          do {
            uVar62 = (uint)(short)param_1[0x55];
            uVar50 = (ulonglong)uVar62;
            uVar53 = uVar62 - 1;
            uVar63 = (ushort)uVar35;
            if ((int)(short)uVar53 <= (int)(uVar62 + 1)) {
              uVar62 = (uint)param_1[0x55];
              do {
                sVar61 = (short)uVar53;
                if ((uVar63 != param_1[0x54]) || (sVar61 != (short)uVar62)) {
                  puStack_ba8 = (undefined4 *)((ulonglong)puStack_ba8 & 0xffffffffffffff00);
                  cVar6 = FUN_14137f170(param_1,uVar35 & 0xffff,uVar53 & 0xffff,param_1[0x56]);
                  if (cVar6 != '\0') {
                    uVar14 = func_0x0001400695b0(0x1423f3970,(int)uVar35 + -1,uVar53 & 0xffff,
                                                 param_1[0x56]);
                    cVar6 = func_0x0001402c6cb0(uVar14);
                    if (cVar6 == '\0') {
                      uVar14 = func_0x0001400695b0(0x1423f3970,(int)uVar35 + 1,uVar53 & 0xffff,
                                                   param_1[0x56]);
                      cVar6 = func_0x0001402c6cb0(uVar14);
                      if (cVar6 == '\0') {
                        uVar14 = func_0x0001400695b0(0x1423f3970,uVar35 & 0xffff,(int)uVar50 + -2,
                                                     param_1[0x56]);
                        cVar6 = func_0x0001402c6cb0(uVar14);
                        if (cVar6 == '\0') {
                          uVar14 = func_0x0001400695b0(0x1423f3970,uVar35 & 0xffff,uVar50 & 0xffff,
                                                       param_1[0x56]);
                          cVar6 = func_0x0001402c6cb0(uVar14);
                          if (cVar6 == '\0') goto code_r0x00014151093b;
                        }
                      }
                    }
                    *(ushort *)((longlong)&puStack_98 + lVar34 * 2) = uVar63;
                    *(short *)((longlong)&uStack_88 + lVar34 * 2) = sVar61;
                    iVar18 = iVar18 + 1;
                    lVar34 = lVar34 + 1;
                  }
                }
code_r0x00014151093b:
                uVar53 = (uint)(ushort)(sVar61 + 1U);
                uVar50 = CONCAT62((int6)(uVar50 >> 0x10),(short)uVar50 + 1);
                uVar62 = (uint)(short)param_1[0x55];
              } while ((int)(short)(sVar61 + 1U) <= (int)(uVar62 + 1));
            }
            uVar35 = CONCAT62((int6)(uVar35 >> 0x10),uVar63 + 1);
          } while ((int)(short)(uVar63 + 1) <= (short)param_1[0x54] + 1);
        }
        iVar19 = *(int *)(param_1 + 0xfa);
        if ((-1 < iVar19 + -1) && (iVar19 + -1 < iVar18)) {
          uStack_ba0 = (uint *)CONCAT44(uStack_ba0._4_4_,0x1e);
          puStack_ba8 = (undefined4 *)((ulonglong)puStack_ba8 & 0xffffffffffff0000);
          FUN_141391170(param_1,(&uStack_9a)[iVar19],(&sStack_8a)[iVar19],param_1[0x56]);
          FUN_141388210(param_1);
          break;
        }
        goto code_r0x0001415109bf;
      }
      puStack_ba8 = (undefined4 *)((ulonglong)puStack_ba8 & 0xffffffffffff0000);
    }
    else {
code_r0x0001415109bf:
      puStack_ba8 = (undefined4 *)CONCAT62(puStack_ba8._2_6_,3);
    }
    uStack_ba0 = (uint *)CONCAT44(uStack_ba0._4_4_,0x1e);
    FUN_141391170(param_1,(short)param_2[0xc],*(undefined2 *)((longlong)param_2 + 0x32),
                  (short)param_2[0xd]);
    FUN_141388210(param_1);
    break;
