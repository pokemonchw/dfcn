/* dig PE:6af2166e:00067000; getCurLevelDesignatedCount; RVA 0x1e850..0x1eb3f */

int load_getCurLevelDesignatedCount(void)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  longlong lStackX_18;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  longlong alStack_60 [3];
  ulonglong uStack_48;
  
  FUN_180010290(auStack_78);
  load_collectLevelDesignations(auStack_78);
  iVar11 = 0;
  plVar5 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba0);
  do {
    if (plVar5 == *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba8)) {
      FUN_180011390(alStack_60);
      *(undefined8 *)puStack_70[1] = 0;
      puVar4 = (undefined8 *)*puStack_70;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar4;
        load_supplier_0x43814(puVar4,0x20);
        puVar4 = puVar3;
      }
      load_supplier_0x43814(puStack_70,0x20);
      return iVar11;
    }
    lVar2 = *plVar5;
    uVar1 = *(ushort *)(lVar2 + 0x8c);
    if ((int)(short)uVar1 == **(int **)_window_z_global_df__3PEAHEA_exref) {
      uVar12 = 0;
      lStackX_18 = 0;
      do {
        uVar6 = 0;
        lVar7 = 0;
        do {
          if ((*(uint *)(lVar2 + 0x2a0 +
                        ((ulonglong)((uint)lVar7 & 0xf) + (ulonglong)((uint)lStackX_18 & 0xf) * 0x10
                        ) * 4) & 0x200) != 0) {
            uVar9 = (short)uVar12 + *(short *)(lVar2 + 0x88);
            uVar10 = (short)uVar6 + *(short *)(lVar2 + 0x8a);
            if ((*(byte *)(lVar2 + 0x2a0 + (lStackX_18 * 0x10 + lVar7) * 4) & 0x70) == 0) {
              uVar8 = (((ulonglong)(byte)uVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(uVar9 >> 8)) * 0x100000001b3 + 0x9e3779b97f4a7c15;
              uVar8 = (((ulonglong)(byte)uVar10 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(uVar10 >> 8)) * 0x100000001b3 + (uVar8 >> 4) + -0x61c8864680b583eb
                      + uVar8 * 0x1000 ^ uVar8;
              uVar8 = ((((ulonglong)(byte)uVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)(uVar1 >> 8)) * 0x100000001b3 + (uVar8 >> 4) + -0x61c8864680b583eb
                       + uVar8 * 0x1000 ^ uVar8) & uStack_48;
              puVar4 = *(undefined8 **)(alStack_60[0] + 8 + uVar8 * 0x10);
              if (puVar4 != puStack_70) {
                while( true ) {
                  if (((uVar9 == *(ushort *)(puVar4 + 2)) &&
                      (uVar10 == *(ushort *)((longlong)puVar4 + 0x12))) &&
                     (uVar1 == *(ushort *)((longlong)puVar4 + 0x14))) goto LAB_18001ea7f;
                  if (puVar4 == *(undefined8 **)(alStack_60[0] + uVar8 * 0x10)) break;
                  puVar4 = (undefined8 *)puVar4[1];
                }
              }
            }
            else {
LAB_18001ea7f:
              iVar11 = iVar11 + 1;
            }
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 1;
        } while (uVar6 < 0x10);
        uVar12 = uVar12 + 1;
        lStackX_18 = lStackX_18 + 1;
      } while (uVar12 < 0x10);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}

