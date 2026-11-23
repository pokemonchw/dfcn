/* 09d199a00f90e048598ab445c87ec21bd2038abf0009821482624ed897c89bfe 180034740..1800349b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180034740(undefined8 param_1,undefined4 param_2,ushort param_3,undefined4 param_4,
                  int param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  undefined4 *puStack_178;
  int *piStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ushort auStack_148 [4];
  int aiStack_140 [2];
  undefined4 auStack_138 [4];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_108 [152];
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180095200 ^ (ulonglong)auStack_198;
  aiStack_140[0] = param_5;
  auStack_148[0] = param_3;
  auStack_138[0] = param_4;
  cVar4 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x180095018,1);
  if (cVar4 != '\0') {
    uVar6 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12_AEAVcolor_ostream_2__Z
                      (0x180095018,auStack_108,1,param_1);
    uVar7 = FUN_1800189c0(&uStack_70,param_2);
    uStack_128 = &UNK_18007a920;
    uStack_120 = 0x4c;
    piStack_170 = aiStack_140;
    puStack_178 = auStack_138;
    FUN_18001ee30(uVar6,&uStack_128,uVar7,auStack_148);
    if (0xf < uStack_58) {
      if ((0xfff < uStack_58 + 1) &&
         (0x1f < (CONCAT71(uStack_6f,uStack_70) - *(longlong *)(CONCAT71(uStack_6f,uStack_70) + -8))
                 - 8U)) {
        puStack_178 = (undefined4 *)0x0;
        _invoke_watson(0,0,0,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      func_0x0001800717fc();
    }
    uStack_60 = 0;
    uStack_58 = 0xf;
    uStack_70 = 0;
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_108);
  }
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  piStack_170 = (int *)((ulonglong)piStack_170 & 0xffffffffffffff00);
  puStack_178 = (undefined4 *)CONCAT44(puStack_178._4_4_,param_5);
  iVar5 = FUN_18003d5c0(param_1,param_2,param_3,param_4);
  if (iVar5 == 0) {
    func_0x00018004ab60(&uStack_118,param_2,param_3,param_4);
    uStack_128._0_6_ = CONCAT24(uStack_114,uStack_118);
    uStack_120 = CONCAT44(uStack_120._4_4_,uStack_110);
    plVar8 = (longlong *)FUN_180038b00(param_1,&uStack_128);
    puVar3 = _DAT_1800974f8;
    if ((-1 < param_5) && ((ulonglong)(longlong)param_5 < (ulonglong)(plVar8[1] - *plVar8 >> 3))) {
      for (puVar1 = (undefined8 *)*_DAT_1800974f8; puVar1 != puVar3; puVar1 = (undefined8 *)*puVar1)
      {
        lVar9 = FUN_180053b20(puVar1 + 3,param_1,1);
        if ((lVar9 != 0) &&
           ((*(longlong *)(lVar9 + 0x60) - (longlong)*(longlong **)(lVar9 + 0x58) &
            0xfffffffffffffff8U) == 8)) {
          lVar9 = **(longlong **)(lVar9 + 0x58);
          for (lVar10 = *(longlong *)(lVar9 + 200); lVar10 != *(longlong *)(lVar9 + 0xd0);
              lVar10 = lVar10 + 8) {
          }
        }
      }
    }
  }
  FUN_180071d50(uStack_50 ^ (ulonglong)auStack_198);
  return;
}

