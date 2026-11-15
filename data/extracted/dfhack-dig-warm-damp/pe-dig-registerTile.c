/* dig PE:6af2166e:00067000; registerTile; RVA 0x24ce0..0x24e84 */

void load_registerTile(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uStackX_8;
  
  uVar1 = *param_1;
  uStackX_8._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar6 = (int)uStackX_8._2_2_;
  uStackX_8 = uVar1;
  lVar3 = _getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z
                    ((int)(short)uVar1,iVar6,(int)*(short *)(param_1 + 1));
  uVar1 = *param_1;
  uStackX_8._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar6 = (int)uStackX_8._2_2_;
  uStackX_8 = uVar1;
  pbVar4 = (byte *)_getTileDesignation_Maps_DFHack__YAPEATtile_designation_df__HHH_Z
                             ((int)(short)uVar1,iVar6,(int)*(short *)(param_1 + 1));
  if ((lVar3 != 0) && (pbVar4 != (byte *)0x0)) {
    if (((*pbVar4 & 0x70) == 0) && (cVar2 = FUN_180018860(param_2,param_1), cVar2 == '\0')) {
      lVar5 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005efe8,lVar3,0);
      if (lVar5 != 0) {
        uStackX_8 = *param_1;
        _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z
                  (lVar5,&uStackX_8,0);
      }
      lVar3 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005ef78,lVar3,0);
      if (lVar3 == 0) {
        return;
      }
      uStackX_8 = *param_1;
      _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z(lVar3,&uStackX_8,0);
      return;
    }
    if (DAT_18005ef73 != '\0') {
      lVar5 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005efe8,lVar3,1);
      if (lVar5 != 0) {
        uStackX_8 = *param_1;
        _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z
                  (lVar5,&uStackX_8,1);
        load_setPluginEnabled(1);
      }
    }
    if (DAT_18005ef74 != '\0') {
      lVar3 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005ef78,lVar3,1);
      if (lVar3 != 0) {
        uStackX_8 = *param_1;
        _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z
                  (lVar3,&uStackX_8,1);
        load_setPluginEnabled(1);
      }
    }
  }
  return;
}

