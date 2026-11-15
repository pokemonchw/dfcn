/* dig PE:6af2166e:00067000; onJobCompleted; RVA 0x241d0..0x24828 */

void load_onJobCompleted(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uStackX_10;
  undefined4 uStackX_18;
  undefined2 uStackX_1c;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [160];
  
  uStackX_10 = param_2;
  lVar5 = _attrs___enum_traits_W4job_type_1enums_df___df__SAAEBUattr_entry_type_12_W4job_type_4enums_2__Z
                    (*(undefined2 *)(param_2 + 0x14));
  if (*(int *)(lVar5 + 8) != 1) {
    return;
  }
  cVar2 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
  if (cVar2 != '\0') {
    uVar6 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12_AEAVcolor_ostream_2__Z
                      (0x18005d018,auStack_d8,0,param_1);
    pcStack_e8 = "handing dig job at ({},{},{})\n";
    uStack_e0 = 0x1e;
    FUN_18000bd30(uVar6,&pcStack_e8,param_2 + 0x1c,param_2 + 0x1e,param_2 + 0x20);
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_d8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uStackX_18._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar9 = (int)uStackX_18._2_2_;
  uStackX_18 = uVar1;
  lVar5 = _getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z
                    ((int)(short)uVar1,iVar9,(int)*(short *)(param_2 + 0x20));
  if (lVar5 != 0) {
    cVar2 = '\0';
    cVar3 = '\0';
    lVar7 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                      (0x18005efe8,lVar5,0);
    if (lVar7 != 0) {
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      cVar2 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                        (lVar7,&uStackX_18);
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z(lVar7,&uStackX_18,0)
      ;
    }
    lVar5 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                      (0x18005ef78,lVar5,0);
    if (lVar5 != 0) {
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      cVar3 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                        (lVar5,&uStackX_18);
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z(lVar5,&uStackX_18,0)
      ;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    uStackX_18._2_2_ = (short)((uint)uVar1 >> 0x10);
    iVar9 = (int)uStackX_18._2_2_;
    uStackX_18 = uVar1;
    puVar8 = (uint *)_getTileOccupancy_Maps_DFHack__YAPEATtile_occupancy_df__HHH_Z
                               ((int)(short)uVar1,iVar9,(int)*(short *)(param_2 + 0x20));
    if (((puVar8 != (uint *)0x0) && ((*puVar8 & 0x2000000) != 0)) &&
       ((cVar2 != '\0' || (cVar3 != '\0')))) {
      FUN_18001cfd0(param_1,cVar2,cVar3,param_2 + 0x1c);
    }
  }
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + -1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(undefined2 *)(param_2 + 0x1c));
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + 1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + -1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + 1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + -1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(undefined2 *)(param_2 + 0x1c));
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + 1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  sVar4 = *(short *)(uStackX_10 + 0x14);
  if (sVar4 == 6) {
LAB_1800247cd:
    uStackX_10 = CONCAT62(uStackX_10._2_6_,*(undefined2 *)(param_2 + 0x1c));
    sVar4 = *(short *)(param_2 + 0x1e);
  }
  else {
    if (sVar4 == 7) {
      uStackX_10 = CONCAT44(uStackX_10._4_4_,*(undefined4 *)(param_2 + 0x1c));
      sVar4 = *(short *)(param_2 + 0x20) + -1;
      goto LAB_1800247e4;
    }
    if (sVar4 == 8) {
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,*(undefined4 *)(param_2 + 0x1c));
      FUN_180024830(param_1,&uStackX_10);
      goto LAB_1800247cd;
    }
    if (sVar4 != 9) {
      if (sVar4 != 10) {
        return;
      }
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + -1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(undefined2 *)(param_2 + 0x1c));
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + 1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + -1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + 1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + -1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(undefined2 *)(param_2 + 0x1c));
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + 1);
      sVar4 = *(short *)(param_2 + 0x20) + -1;
      goto LAB_1800247e4;
    }
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + -1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(undefined2 *)(param_2 + 0x1c));
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + 1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + -1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + 1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + -1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(undefined2 *)(param_2 + 0x1c));
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10 = CONCAT62(uStackX_10._2_6_,*(short *)(param_2 + 0x1c) + 1);
    sVar4 = *(short *)(param_2 + 0x1e) + 1;
  }
  uStackX_10._0_4_ = CONCAT22(sVar4,(undefined2)uStackX_10);
  sVar4 = *(short *)(param_2 + 0x20) + 1;
LAB_1800247e4:
  uStackX_10._0_6_ = CONCAT24(sVar4,(undefined4)uStackX_10);
  FUN_180024830(param_1,&uStackX_10);
  return;
}

