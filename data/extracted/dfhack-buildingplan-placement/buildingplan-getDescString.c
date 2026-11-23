/* 09d199a00f90e048598ab445c87ec21bd2038abf0009821482624ed897c89bfe 180037620..1800379e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180037620(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  undefined1 uStack_138;
  undefined1 auStack_130 [152];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  ulonglong uStack_60;
  longlong alStack_58 [3];
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180095200 ^ (ulonglong)auStack_168;
  puStack_98 = param_1;
  cVar6 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x180095018,1);
  if (cVar6 != '\0') {
    uVar7 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12_AEAVcolor_ostream_2__Z
                      (0x180095018,auStack_130,1,param_2);
    puStack_98 = (undefined8 *)&UNK_18007ad90;
    uStack_90 = 0x17;
    FUN_18001e370(uVar7,&puStack_98);
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_130);
  }
  cVar6 = FUN_18003f920(param_2,param_3,param_4);
  if (cVar6 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 7;
    param_1[3] = 0xf;
    *(undefined4 *)param_1 = 0x41564e49;
    *(undefined2 *)((longlong)param_1 + 4) = 0x494c;
    *(undefined1 *)((longlong)param_1 + 6) = 0x44;
    *(undefined1 *)((longlong)param_1 + 7) = 0;
    uVar7 = uStack_68;
    uVar10 = uStack_60;
LAB_180037709:
    uStack_60 = uVar10;
    uStack_68 = uVar7;
    FUN_180071d50(uStack_38 ^ (ulonglong)auStack_168);
    return;
  }
  uVar10 = (((((ulonglong)*(byte *)(param_3 + 0x50) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_3 + 0x51)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_3 + 0x52)) * 0x100000001b3 ^
           (ulonglong)*(byte *)(param_3 + 0x53)) * 0x100000001b3 & _DAT_180097520;
  lVar3 = *(longlong *)(_DAT_180097508 + 8 + uVar10 * 0x10);
  if (lVar3 != _DAT_1800974f8) {
    iVar2 = *(int *)(lVar3 + 0x10);
    while (*(int *)(param_3 + 0x50) != iVar2) {
      if (lVar3 == *(longlong *)(_DAT_180097508 + uVar10 * 0x10)) goto LAB_1800379d5;
      lVar3 = *(longlong *)(lVar3 + 8);
      iVar2 = *(int *)(lVar3 + 0x10);
    }
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(**(longlong **)(param_3 + 0x58) + 200);
      plVar1 = (longlong *)
               (lVar4 + (longlong)
                        (((int)(*(longlong *)(**(longlong **)(param_3 + 0x58) + 0xd0) - lVar4 >> 3)
                         - param_4) + -1) * 8);
      uVar7 = FUN_1800383f0(alStack_58,param_2,*plVar1,
                            *(longlong *)(lVar3 + 0x20) + (longlong)param_4 * 0x18);
      puVar8 = (undefined8 *)FUN_1800390a0(&uStack_78,*(undefined4 *)(*plVar1 + 0x10));
      uVar10 = puVar8[2];
      if (puVar8[3] == uVar10) {
        uStack_148 = 1;
        puVar8 = (undefined8 *)FUN_180012550(puVar8,1,uStack_138,&UNK_18007ada8);
      }
      else {
        puVar8[2] = uVar10 + 1;
        puVar9 = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar9 = (undefined8 *)*puVar8;
        }
        *(undefined2 *)((longlong)puVar9 + uVar10) = 0x20;
      }
      puStack_98 = (undefined8 *)*puVar8;
      uStack_90 = puVar8[1];
      uStack_88 = *(undefined4 *)(puVar8 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uStack_80 = *(undefined4 *)(puVar8 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar8 + 0x1c);
      *(undefined1 *)puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      FUN_1800231e0(param_1,uStack_138,&puStack_98,uVar7);
      if (0xf < CONCAT44(uStack_7c,uStack_80)) {
        if ((0xfff < CONCAT44(uStack_7c,uStack_80) + 1) &&
           (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - puStack_98[-1])))) {
          uStack_148 = 0;
          _invoke_watson(0,0,0,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        func_0x0001800717fc();
      }
      if (0xf < uStack_60) {
        if ((0xfff < uStack_60 + 1) &&
           (0x1f < (CONCAT71(uStack_77,uStack_78) -
                   *(longlong *)(CONCAT71(uStack_77,uStack_78) + -8)) - 8U)) {
          uStack_148 = 0;
          _invoke_watson(0,0,0,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        func_0x0001800717fc();
      }
      uStack_68 = 0;
      uStack_60 = 0xf;
      uStack_78 = 0;
      uVar7 = 0;
      uVar10 = 0xf;
      if (0xf < uStack_40) {
        if ((0xfff < uStack_40 + 1) &&
           (0x1f < (alStack_58[0] - *(longlong *)(alStack_58[0] + -8)) - 8U)) {
          uStack_148 = 0;
          _invoke_watson(0,0,0,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        func_0x0001800717fc();
        uVar7 = uStack_68;
        uVar10 = uStack_60;
      }
      goto LAB_180037709;
    }
  }
LAB_1800379d5:
  func_0x0001800714b7("invalid unordered_map<K, T> key");
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

