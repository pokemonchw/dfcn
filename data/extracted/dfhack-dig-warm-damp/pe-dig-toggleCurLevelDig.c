/* dig PE:6af2166e:00067000; toggleCurLevelDig; RVA 0x23930..0x2407c */

void load_toggleCurLevelDig(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  uint uStackX_20;
  ushort uStack_128;
  ushort uStack_126;
  ushort uStack_124;
  float afStack_118 [2];
  undefined8 *puStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  int iStack_d8;
  longlong *plStack_d0;
  ulonglong uStack_c8;
  longlong *plStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 *puStack_a0;
  longlong alStack_90 [3];
  ulonglong uStack_78;
  undefined1 auStack_68 [40];
  
  FUN_180010290(auStack_a8);
  load_collectLevelDesignations(auStack_a8);
  afStack_118[0] = 0.0;
  puStack_110 = (undefined8 *)0x0;
  lStack_108 = 0;
  puVar7 = (undefined8 *)FUN_1800437d8(0x18);
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  puStack_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_e8 = 7;
  uStack_e0 = 8;
  afStack_118[0] = 1.0;
  puStack_110 = puVar7;
  puVar8 = (undefined8 *)FUN_1800437d8(0x80);
  if ((longlong)puStack_f0 - (longlong)puStack_100 >> 3 != 0) {
    FUN_180018ed0(&puStack_100);
  }
  puStack_f8 = puVar8 + 0x10;
  for (puVar14 = puVar8; puVar14 != puStack_f8; puVar14 = puVar14 + 1) {
    *puVar14 = puVar7;
  }
  bVar3 = false;
  bVar6 = 1;
  iVar13 = **(int **)_window_z_global_df__3PEAHEA_exref;
  plStack_d0 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba0);
  plStack_c0 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba8);
  puStack_100 = puVar8;
  puStack_f0 = puStack_f8;
  iStack_d8 = iVar13;
  bVar5 = false;
  if (plStack_d0 != plStack_c0) {
    do {
      bVar3 = bVar5;
      lVar1 = *plStack_d0;
      if (*(short *)(lVar1 + 0x8c) == iVar13) {
        lVar10 = 0;
        uStackX_20 = 0;
LAB_180023a90:
        uVar18 = 0;
        uStack_c8 = (ulonglong)uStackX_20;
LAB_180023ab0:
        uStack_124 = *(ushort *)(lVar1 + 0x8c);
        uStack_128 = (short)uStackX_20 + *(short *)(lVar1 + 0x88);
        uStack_126 = (short)uVar18 + *(short *)(lVar1 + 0x8a);
        lVar11 = *plStack_d0;
        if ((*(uint *)(lVar11 + 0x2a0 +
                      ((ulonglong)((uint)uVar18 & 0xf) + (ulonglong)(uStackX_20 & 0xf) * 0x10) * 4)
            & 0x200) == 0) goto LAB_180023f3a;
        uVar16 = (((ulonglong)(byte)uStack_128 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uStack_128 >> 8)) * 0x100000001b3 + 0x9e3779b97f4a7c15;
        uVar16 = (((ulonglong)(byte)uStack_126 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uStack_126 >> 8)) * 0x100000001b3 + uVar16 * 0x1000 +
                 -0x61c8864680b583eb + (uVar16 >> 4) ^ uVar16;
        uVar16 = (uVar16 * 0x1000 +
                  (((ulonglong)(byte)uStack_124 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)(uStack_124 >> 8)) * 0x100000001b3 + (uVar16 >> 4) +
                  -0x61c8864680b583eb ^ uVar16) & uStack_78;
        puVar7 = *(undefined8 **)(alStack_90[0] + 8 + uVar16 * 0x10);
        if (puVar7 != puStack_a0) {
          while( true ) {
            if (((uStack_128 == *(ushort *)(puVar7 + 2)) &&
                (uStack_126 == *(ushort *)((longlong)puVar7 + 0x12))) &&
               (uStack_124 == *(ushort *)((longlong)puVar7 + 0x14))) {
              plVar9 = (longlong *)FUN_180005f80(auStack_a8,auStack_68,&uStack_128);
              lVar11 = *plVar9;
              uVar16 = (((((((((ulonglong)*(byte *)(lVar11 + 0x18) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)(lVar11 + 0x19)) * 0x100000001b3 ^
                            (ulonglong)*(byte *)(lVar11 + 0x1a)) * 0x100000001b3 ^
                           (ulonglong)*(byte *)(lVar11 + 0x1b)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)(lVar11 + 0x1c)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)(lVar11 + 0x1d)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)(lVar11 + 0x1e)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)(lVar11 + 0x1f)) * 0x100000001b3;
              puVar7 = (undefined8 *)puStack_100[(uVar16 & uStack_e8) * 2 + 1];
              puVar8 = puStack_110;
              if (puVar7 == puStack_110) goto LAB_180023d07;
              if (*(longlong *)(lVar11 + 0x18) == puVar7[2]) goto LAB_180023f3a;
              goto LAB_180023cf0;
            }
            if (puVar7 == *(undefined8 **)(alStack_90[0] + uVar16 * 0x10)) break;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        if ((*(byte *)(lVar11 + 0x2a0 + (uStack_c8 * 0x10 + uVar18) * 4) & 0x70) != 0) {
          if ((lVar10 == 0) &&
             (lVar10 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                 (param_2,lVar11,bVar6), lVar10 == 0)) goto LAB_180023f4f;
          if (!bVar3) {
            bVar6 = _getassignment_tile_bitmask_df__QEAA_NHH_Z(lVar10,uStackX_20,uVar18);
            bVar6 = bVar6 ^ 1;
          }
          _setassignment_tile_bitmask_df__QEAAXHH_N_Z(lVar10,uStackX_20,uVar18,bVar6);
          bVar3 = true;
        }
        goto LAB_180023f3a;
      }
LAB_180023f6c:
      plStack_d0 = plStack_d0 + 1;
      bVar5 = bVar3;
    } while (plStack_d0 != plStack_c0);
    if (bVar6 == 0) goto LAB_180023fc1;
  }
  puVar8 = puStack_110;
  for (puVar7 = (undefined8 *)*puStack_110; puVar7 != puVar8; puVar7 = (undefined8 *)*puVar7) {
    load_onJobCompleted(param_1,puVar7[2]);
  }
  if (bVar3) {
    load_setPluginEnabled(1);
  }
LAB_180023fc1:
  FUN_180011320(&puStack_100);
  *(undefined8 *)puStack_110[1] = 0;
  puVar7 = (undefined8 *)*puStack_110;
  while (puVar7 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar7;
    load_supplier_0x43814(puVar7,0x18);
    puVar7 = puVar8;
  }
  load_supplier_0x43814(puStack_110,0x18);
  FUN_180011390(alStack_90);
  *(undefined8 *)puStack_a0[1] = 0;
  puVar7 = (undefined8 *)*puStack_a0;
  while (puVar7 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar7;
    load_supplier_0x43814(puVar7,0x20);
    puVar7 = puVar8;
  }
  load_supplier_0x43814(puStack_a0,0x20);
  return;
  while (puVar7 = (undefined8 *)puVar7[1], *(longlong *)(lVar11 + 0x18) != puVar7[2]) {
LAB_180023cf0:
    puVar8 = puVar7;
    if (puVar7 == (undefined8 *)puStack_100[(uVar16 & uStack_e8) * 2]) goto LAB_180023d07;
  }
  goto LAB_180023f3a;
LAB_180023d07:
  if (lStack_108 == 0xaaaaaaaaaaaaaaa) {
    load_supplier_0x41949("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppuStack_b8 = &puStack_110;
  puStack_b0 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_1800437d8(0x18);
  uVar4 = uStack_e0;
  puVar7[2] = *(undefined8 *)(lVar11 + 0x18);
  if (afStack_118[0] < (float)(lStack_108 + 1) / (float)uStack_e0) {
    puStack_b0 = puVar7;
    fVar19 = (float)load_supplier_0x45086((float)(lStack_108 + 1) / afStack_118[0]);
    lVar11 = 0;
    if ((9.223372e+18 <= fVar19) && (fVar19 = fVar19 - 9.223372e+18, fVar19 < 9.223372e+18)) {
      lVar11 = -0x8000000000000000;
    }
    uVar12 = 8;
    if (8 < (ulonglong)((longlong)fVar19 + lVar11)) {
      uVar12 = (longlong)fVar19 + lVar11;
    }
    uVar15 = uVar4;
    if ((uVar4 < uVar12) && ((0x1ff < uVar4 || (uVar15 = uVar4 * 8, uVar4 * 8 < uVar12)))) {
      uVar15 = uVar12;
    }
    FUN_180015750(afStack_118,uVar15);
    puVar14 = (undefined8 *)puStack_100[(uStack_e8 & uVar16) * 2 + 1];
    puVar8 = puStack_110;
    if (puVar14 != puStack_110) {
      lVar11 = puVar14[2];
      puVar8 = puVar14;
      while (puVar7[2] != lVar11) {
        if (puVar8 == (undefined8 *)puStack_100[(uStack_e8 & uVar16) * 2]) goto LAB_180023e67;
        puVar8 = (undefined8 *)puVar8[1];
        lVar11 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180023e67:
  puStack_b0 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)puVar8[1];
  lStack_108 = lStack_108 + 1;
  *puVar7 = puVar8;
  puVar7[1] = puVar14;
  *puVar14 = puVar7;
  puVar8[1] = puVar7;
  uVar16 = uStack_e8 & uVar16;
  if ((undefined8 *)puStack_100[uVar16 * 2] == puStack_110) {
    puStack_100[uVar16 * 2] = puVar7;
  }
  else {
    if ((undefined8 *)puStack_100[uVar16 * 2] == puVar8) {
      puStack_100[uVar16 * 2] = puVar7;
      goto LAB_180023f3a;
    }
    if ((undefined8 *)puStack_100[uVar16 * 2 + 1] != puVar14) goto LAB_180023f3a;
  }
  puStack_100[uVar16 * 2 + 1] = puVar7;
LAB_180023f3a:
  uVar17 = (uint)uVar18 + 1;
  uVar18 = (ulonglong)uVar17;
  if (0xf < uVar17) goto LAB_180023f4f;
  goto LAB_180023ab0;
LAB_180023f4f:
  uStackX_20 = uStackX_20 + 1;
  iVar13 = iStack_d8;
  if (0xf < uStackX_20) goto LAB_180023f6c;
  goto LAB_180023a90;
}

