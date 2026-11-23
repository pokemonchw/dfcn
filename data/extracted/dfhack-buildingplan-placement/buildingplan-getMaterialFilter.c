/* 09d199a00f90e048598ab445c87ec21bd2038abf0009821482624ed897c89bfe 1800031c0..180003ac3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800031c0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_298 [32];
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  longlong **pplStack_250;
  longlong lStack_248;
  undefined8 *puStack_240;
  undefined4 uStack_238;
  undefined2 uStack_234;
  undefined4 uStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  longlong *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong *plStack_1f8;
  longlong lStack_1f0;
  char *pcStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [152];
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  undefined4 uStack_b8;
  int iStack_a8;
  longlong alStack_98 [3];
  ulonglong uStack_80;
  undefined1 auStack_78 [32];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180095200 ^ (ulonglong)auStack_298;
  lVar7 = _GetOutput_Lua_DFHack__YAPEAVcolor_ostream_2_PEAUlua_State___Z();
  if (lVar7 == 0) {
    lVar7 = _getInstance_Core_DFHack__SAAEAV12_XZ();
    lVar7 = lVar7 + 0x11b8;
  }
  uVar4 = _luaL_checkinteger__YA_JPEAUlua_State__H_Z(param_1,1);
  sVar3 = _luaL_checkinteger__YA_JPEAUlua_State__H_Z(param_1,2);
  uVar5 = _luaL_checkinteger__YA_JPEAUlua_State__H_Z(param_1,3);
  iVar6 = _luaL_checkinteger__YA_JPEAUlua_State__H_Z(param_1,4);
  cVar2 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x180095018,1);
  if (cVar2 != '\0') {
    plVar8 = (longlong *)
             _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12_AEAVcolor_ostream_2__Z
                       (0x180095018,auStack_1b0,1,lVar7);
    puVar9 = (undefined8 *)FUN_1800189c0(&uStack_118,uVar4);
    uStack_d8 = puVar9;
    if (0xf < (ulonglong)puVar9[3]) {
      uStack_d8 = (undefined8 *)*puVar9;
    }
    lStack_d0 = puVar9[2];
    iStack_c8 = (int)sVar3;
    lStack_248 = 0x111d;
    puStack_240 = &uStack_d8;
    uStack_208 = &UNK_18007aa50;
    uStack_200 = 0x4a;
    uStack_b8 = uVar5;
    iStack_a8 = iVar6;
    FUN_180070330(alStack_98,&uStack_208,&lStack_248);
    _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar8,0);
    (**(code **)(*plVar8 + 0x10))(plVar8,(int)plVar8[2],alStack_98);
    if (0xf < uStack_80) {
      if ((0xfff < uStack_80 + 1) &&
         (0x1f < (alStack_98[0] - *(longlong *)(alStack_98[0] + -8)) - 8U)) {
        uStack_278 = 0;
        _invoke_watson(0,0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      func_0x0001800717fc();
    }
    if (0xf < uStack_100) {
      if ((0xfff < uStack_100 + 1) && (0x1f < (uStack_118 - *(longlong *)(uStack_118 - 8)) - 8)) {
        uStack_278 = 0;
        _invoke_watson(0,0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      func_0x0001800717fc();
    }
    uStack_108 = 0;
    uStack_100 = 0xf;
    uStack_118 = uStack_118 & 0xffffffffffffff00;
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_1b0);
  }
  func_0x00018004ab60(&uStack_238,uVar4,sVar3,uVar5);
  lVar10 = FUN_1800388c0(lVar7,&uStack_238);
  if (-1 < iVar6) {
    uVar13 = (ulonglong)iVar6;
    if (uVar13 < (ulonglong)(*(longlong *)(lVar10 + 0x30) - *(longlong *)(lVar10 + 0x28) >> 5)) {
      FUN_180024310(&plStack_1f8,uVar13 * 0x20 + 0x10 + *(longlong *)(lVar10 + 0x28));
      plStack_218 = (longlong *)0x0;
      uStack_210 = 0;
      plStack_218 = (longlong *)FUN_1800717c0(0x60);
      *plStack_218 = (longlong)plStack_218;
      plStack_218[1] = (longlong)plStack_218;
      plStack_218[2] = (longlong)plStack_218;
      *(undefined2 *)(plStack_218 + 3) = 0x101;
      pplStack_250 = &plStack_218;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,iVar6);
      FUN_18003d5c0(lVar7,uVar4,sVar3,uVar5);
      uVar4 = FUN_1800387a0(&uStack_238);
      uStack_208._0_6_ = CONCAT24(uStack_234,uStack_238);
      uStack_200 = CONCAT44(uStack_200._4_4_,uStack_230);
      plVar8 = (longlong *)FUN_180038b00(lVar7,&uStack_208);
      lVar7 = *(longlong *)(*plVar8 + uVar13 * 8);
      lStack_228 = 0;
      uStack_220 = 0;
      lStack_228 = FUN_1800717c0(0x50);
      *(longlong *)lStack_228 = lStack_228;
      *(longlong *)(lStack_228 + 8) = lStack_228;
      *(longlong *)(lStack_228 + 0x10) = lStack_228;
      *(undefined2 *)(lStack_228 + 0x18) = 0x101;
      plVar8 = (longlong *)*_DAT_180097370;
      cVar2 = *(char *)((longlong)plVar8 + 0x19);
      while (cVar2 == '\0') {
        if (lVar7 == 0) {
          uVar13 = 0xffffffff;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(lVar7 + 8);
          uVar13 = (ulonglong)*(ushort *)(lVar7 + 4);
        }
        _decode_MaterialInfo_DFHack__QEAA_NFH_Z(&uStack_d8,uVar13,uVar5);
        if (((lStack_d0 == 0) ||
            (((short)plVar8[8] == (short)uStack_d8 &&
             ((uStack_d8._4_4_ == -1 || (*(int *)((longlong)plVar8 + 0x44) == uStack_d8._4_4_))))))
           && (cVar2 = FUN_18004a330((short)plVar8[8],*(undefined4 *)((longlong)plVar8 + 0x44),uVar4
                                    ), cVar2 != '\0')) {
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0xf;
          uStack_118 = 0;
          cVar2 = FUN_18004a330((short)plVar8[8],*(undefined4 *)((longlong)plVar8 + 0x44),2);
          if (cVar2 == '\0') {
            cVar2 = FUN_18004a330((short)plVar8[8],*(undefined4 *)((longlong)plVar8 + 0x44),1);
            if (cVar2 != '\0') {
              uVar14 = 9;
              pcVar12 = "fire-safe";
              goto LAB_18000360c;
            }
          }
          else {
            uVar14 = 10;
            pcVar12 = "magma-safe";
LAB_18000360c:
            FUN_1800323c0(&uStack_118,pcVar12,uVar14);
          }
          lStack_248 = 0;
          puStack_240 = (undefined8 *)0x0;
          lStack_248 = FUN_1800717c0(0x60);
          *(longlong *)lStack_248 = lStack_248;
          *(longlong *)(lStack_248 + 8) = lStack_248;
          *(longlong *)(lStack_248 + 0x10) = lStack_248;
          *(undefined2 *)(lStack_248 + 0x18) = 0x101;
          uStack_f0 = 0;
          uStack_e8 = 1;
          uStack_e0 = 0xf;
          uStack_f8 = 0x30;
          plVar11 = (longlong *)plStack_218[1];
          plVar16 = plStack_218;
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            plVar15 = plStack_218;
            do {
              if (((short)plVar11[4] < (short)plVar8[8]) ||
                 ((plVar16 = plVar11, (short)plVar11[4] == (short)plVar8[8] &&
                  (*(int *)((longlong)plVar11 + 0x24) < *(int *)((longlong)plVar8 + 0x44))))) {
                plVar11 = plVar11 + 2;
                plVar16 = plVar15;
              }
              plVar11 = (longlong *)*plVar11;
              plVar15 = plVar16;
            } while (*(char *)((longlong)plVar11 + 0x19) == '\0');
          }
          if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
            sVar3 = (short)plVar8[8];
            if (((short)plVar16[4] <= sVar3) &&
               ((sVar3 != (short)plVar16[4] ||
                (*(int *)((longlong)plVar16 + 0x24) <= *(int *)((longlong)plVar8 + 0x44))))) {
              plVar11 = (longlong *)plStack_218[1];
              cVar2 = *(char *)((longlong)plVar11 + 0x19);
              plVar16 = plStack_218;
              while (cVar2 == '\0') {
                if (((short)plVar11[4] < sVar3) ||
                   ((plVar15 = plVar11, (short)plVar11[4] == sVar3 &&
                    (*(int *)((longlong)plVar11 + 0x24) < *(int *)((longlong)plVar8 + 0x44))))) {
                  plVar11 = plVar11 + 2;
                  plVar15 = plVar16;
                }
                plVar11 = (longlong *)*plVar11;
                plVar16 = plVar15;
                cVar2 = *(char *)((longlong)plVar11 + 0x19);
              }
              if (((*(char *)((longlong)plVar16 + 0x19) != '\0') || (sVar3 < (short)plVar16[4])) ||
                 ((sVar3 == (short)plVar16[4] &&
                  (*(int *)((longlong)plVar8 + 0x44) < *(int *)((longlong)plVar16 + 0x24))))) {
                func_0x0001800714b7("invalid map<K, T> key");
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              puVar9 = (undefined8 *)FUN_1800390a0(auStack_78,(int)plVar16[0xb]);
              if (&uStack_f8 != puVar9) {
                uStack_f8 = *puVar9;
                uStack_f0 = puVar9[1];
                uStack_e8 = puVar9[2];
                uStack_e0 = puVar9[3];
                puVar9[2] = 0;
                puVar9[3] = 0xf;
                *(undefined1 *)puVar9 = 0;
              }
              FUN_180030f40(auStack_78);
            }
          }
          FUN_18000d220(&lStack_248,auStack_1e0,"count",&uStack_f8);
          if (lStack_1f0 == 0) {
LAB_1800037da:
            pcStack_1e8 = "true";
          }
          else {
            plVar11 = (longlong *)plStack_1f8[1];
            plVar16 = plStack_1f8;
            if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
              plVar15 = plStack_1f8;
              do {
                if (((short)plVar11[4] < (short)plVar8[8]) ||
                   ((plVar16 = plVar11, (short)plVar11[4] == (short)plVar8[8] &&
                    (*(int *)((longlong)plVar11 + 0x24) < *(int *)((longlong)plVar8 + 0x44))))) {
                  plVar11 = plVar11 + 2;
                  plVar16 = plVar15;
                }
                plVar11 = (longlong *)*plVar11;
                plVar15 = plVar16;
              } while (*(char *)((longlong)plVar11 + 0x19) == '\0');
            }
            if (((*(char *)((longlong)plVar16 + 0x19) == '\0') &&
                ((short)plVar16[4] <= (short)plVar8[8])) &&
               (((short)plVar8[8] != (short)plVar16[4] ||
                (*(int *)((longlong)plVar16 + 0x24) <= *(int *)((longlong)plVar8 + 0x44)))))
            goto LAB_1800037da;
            pcStack_1e8 = "false";
          }
          FUN_18000d770(&lStack_248,auStack_1d0,"enabled",&pcStack_1e8);
          FUN_18000d960(&lStack_248,auStack_1c0,"category",plVar8 + 0xf);
          FUN_18000e390(&lStack_228,alStack_98,plVar8 + 4,&lStack_248);
          FUN_180030f40(&uStack_f8);
          cVar2 = *(char *)((longlong)*(longlong **)(lStack_248 + 8) + 0x19);
          plVar11 = *(longlong **)(lStack_248 + 8);
          while (cVar2 == '\0') {
            FUN_1800103c0(&lStack_248,&lStack_248,plVar11[2]);
            plVar16 = (longlong *)*plVar11;
            FUN_180030f40(plVar11 + 8);
            FUN_180030f40(plVar11 + 4);
            func_0x0001800717fc(plVar11,0x60);
            plVar11 = plVar16;
            cVar2 = *(char *)((longlong)plVar16 + 0x19);
          }
          func_0x0001800717fc(lStack_248,0x60);
          if (0xf < uStack_100) {
            if ((0xfff < uStack_100 + 1) &&
               (0x1f < (uStack_118 - *(longlong *)(uStack_118 - 8)) - 8)) {
              uStack_278 = 0;
              _invoke_watson(0,0,0,0);
              goto LAB_180003a7c;
            }
            func_0x0001800717fc();
          }
        }
        plVar11 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar8 = plVar11;
          plVar11 = (longlong *)*plVar11;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar11 + 0x19);
            plVar8 = plVar11;
            plVar11 = (longlong *)*plVar11;
          }
        }
        else {
          cVar2 = *(char *)(plVar8[1] + 0x19);
          plVar16 = (longlong *)plVar8[1];
          plVar11 = plVar8;
          while ((plVar8 = plVar16, cVar2 == '\0' && (plVar11 == (longlong *)plVar8[2]))) {
            cVar2 = *(char *)(plVar8[1] + 0x19);
            plVar16 = (longlong *)plVar8[1];
            plVar11 = plVar8;
          }
        }
        cVar2 = *(char *)((longlong)plVar8 + 0x19);
      }
      FUN_18000acf0(param_1,&lStack_228);
      cVar2 = *(char *)((longlong)*(longlong **)(lStack_228 + 8) + 0x19);
      plVar8 = *(longlong **)(lStack_228 + 8);
      while (cVar2 == '\0') {
        FUN_1800104e0(&lStack_228,&lStack_228,plVar8[2]);
        plVar11 = (longlong *)*plVar8;
        FUN_1800103c0(plVar8 + 8,plVar8 + 8,*(undefined8 *)(plVar8[8] + 8));
        func_0x0001800717fc(plVar8[8],0x60);
        FUN_180030f40(plVar8 + 4);
        func_0x0001800717fc(plVar8,0x50);
        plVar8 = plVar11;
        cVar2 = *(char *)((longlong)plVar11 + 0x19);
      }
      func_0x0001800717fc(lStack_228,0x50);
      cVar2 = *(char *)(plStack_218[1] + 0x19);
      plVar8 = (longlong *)plStack_218[1];
      while (cVar2 == '\0') {
        FUN_180010250(&plStack_218,&plStack_218,plVar8[2]);
        plVar11 = (longlong *)*plVar8;
        func_0x0001800717fc(plVar8,0x60);
        plVar8 = plVar11;
        cVar2 = *(char *)((longlong)plVar11 + 0x19);
      }
      func_0x0001800717fc(plStack_218,0x60);
      cVar2 = *(char *)(plStack_1f8[1] + 0x19);
      plVar8 = (longlong *)plStack_1f8[1];
      while (cVar2 == '\0') {
        FUN_1800106a0(&plStack_1f8,&plStack_1f8,plVar8[2]);
        plVar11 = (longlong *)*plVar8;
        func_0x0001800717fc(plVar8,0x58);
        plVar8 = plVar11;
        cVar2 = *(char *)((longlong)plVar11 + 0x19);
      }
      func_0x0001800717fc(plStack_1f8,0x58);
    }
  }
LAB_180003a7c:
  FUN_180071d50(uStack_58 ^ (ulonglong)auStack_298);
  return;
}

