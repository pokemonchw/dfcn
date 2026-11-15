/* dig PE:6af2166e:00067000; collectLevelDesignations; RVA 0x1e160..0x1e3a4 */

void load_collectLevelDesignations
               (float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  
  plVar2 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x14cd8);
  do {
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    lVar3 = *plVar2;
    lVar6 = _attrs___enum_traits_W4job_type_1enums_df___df__SAAEBUattr_entry_type_12_W4job_type_4enums_2__Z
                      (*(undefined2 *)(lVar3 + 0x14));
    if (*(int *)(lVar6 + 8) == 1) {
      uVar7 = FUN_180003350(param_1,lVar3 + 0x1c);
      uVar10 = uVar7 & *(ulonglong *)(param_1 + 0xc);
      uVar11 = uVar10 * 2;
      puVar8 = *(undefined8 **)(param_1 + 6);
      puVar9 = (undefined8 *)puVar8[uVar10 * 2 + 1];
      pfVar1 = param_1 + 2;
      puVar12 = *(undefined8 **)pfVar1;
      if (puVar9 != *(undefined8 **)pfVar1) {
        puVar8 = (undefined8 *)puVar8[uVar10 * 2];
        uVar11 = (ulonglong)*(ushort *)(lVar3 + 0x1c);
        while( true ) {
          if (((*(ushort *)(lVar3 + 0x1c) == *(ushort *)(puVar9 + 2)) &&
              (*(short *)(lVar3 + 0x1e) == *(short *)((longlong)puVar9 + 0x12))) &&
             (*(short *)(lVar3 + 0x20) == *(short *)((longlong)puVar9 + 0x14))) goto LAB_18001e36d;
          puVar12 = puVar9;
          if (puVar9 == puVar8) break;
          puVar9 = (undefined8 *)puVar9[1];
        }
      }
      if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
        load_supplier_0x41949("unordered_map/set too long");
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (undefined8 *)FUN_1800437d8(0x20,uVar11,puVar8,param_4,pfVar1,0);
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar3 + 0x1c);
      *(undefined2 *)((longlong)puVar8 + 0x14) = *(undefined2 *)(lVar3 + 0x20);
      puVar8[3] = lVar3;
      fVar13 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar13 && fVar13 != *param_1) {
        FUN_1800165d0(param_1);
        puVar9 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10);
        puVar12 = *(undefined8 **)pfVar1;
        if (puVar9 != *(undefined8 **)pfVar1) {
          for (; ((*(short *)(puVar8 + 2) != *(short *)(puVar9 + 2) ||
                  (*(short *)((longlong)puVar8 + 0x12) != *(short *)((longlong)puVar9 + 0x12))) ||
                 (*(short *)((longlong)puVar8 + 0x14) != *(short *)((longlong)puVar9 + 0x14)));
              puVar9 = (undefined8 *)puVar9[1]) {
            puVar12 = puVar9;
            if (puVar9 == *(undefined8 **)
                           (*(longlong *)(param_1 + 6) +
                           (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10)) goto LAB_18001e30f;
          }
          puVar12 = (undefined8 *)*puVar9;
        }
      }
LAB_18001e30f:
      puVar9 = (undefined8 *)puVar12[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar8 = puVar12;
      puVar8[1] = puVar9;
      *puVar9 = puVar8;
      puVar12[1] = puVar8;
      uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
      lVar3 = *(longlong *)(param_1 + 6);
      puVar4 = *(undefined8 **)(lVar3 + uVar7 * 0x10);
      if (puVar4 == *(undefined8 **)pfVar1) {
        *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar8;
LAB_18001e35e:
        *(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) = puVar8;
      }
      else if (puVar4 == puVar12) {
        *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar8;
      }
      else if (*(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) == puVar9) goto LAB_18001e35e;
    }
LAB_18001e36d:
    plVar2 = (longlong *)plVar2[2];
  } while( true );
}

