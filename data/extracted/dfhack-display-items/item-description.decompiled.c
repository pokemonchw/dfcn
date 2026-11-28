/* Ghidra 12.1.4, installed Windows x64 dfhack.dll.
 * Decompiled text suppliers for internal/caravan/pedestal.lua.
 * DFHack contributors; third_party/dfhack-help.LICENSE.
 * Local function names describe their calls in getReadableDescription.
 */

/* getReadableDescription, RVA 0xa00f50..0xa01468 (exclusive) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void getReadableDescription(longlong ****param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong ***ppplVar7;
  ulonglong uVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  longlong ****pppplVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_138 [32];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  longlong ***ppplStack_100;
  longlong ***ppplStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 ***pppuStack_b0;
  longlong **pplStack_a8;
  longlong **pplStack_a0;
  longlong **pplStack_98;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_48;
  
                    /* 0xa00f50  28226
                       ?getReadableDescription@Items@DFHack@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUitem@df@@@Z
                        */
  uStack_48 = _DAT_181434540 ^ (ulonglong)auStack_138;
  puVar18 = (undefined1 *)0x0;
  ppplStack_100 = (longlong ***)param_1;
  if (param_2 == 0) goto LAB_180a01440;
  getReadableBase(&pppuStack_b0);
  plVar10 = (longlong *)
            _findRef_DFHack__YAPEAUgeneral_ref_df__AEAV__vector_PEAUgeneral_ref_df__V__allocator_PEAUgeneral_ref_df___std___std__W4general_ref_type_6enums_3__Z
                      (param_2 + 0x38,9);
  if (plVar10 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar10 + 0x20))(plVar10);
    if (lVar11 != 0) {
      puVar12 = (undefined8 *)
                _getReadableName_Units_DFHack__YA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEAUunit_df___N_Z
                          (&uStack_88,lVar11,0);
      lVar2 = puVar12[2];
      if ((ulonglong)(puVar12[3] - lVar2) < 2) {
        uStack_110 = 2;
        puStack_118 = &UNK_180e0894c;
        puVar12 = (undefined8 *)FUN_180168ae0(puVar12,2,uStack_108,0);
      }
      else {
        puVar12[2] = lVar2 + 2;
        puVar17 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          puVar17 = (undefined8 *)*puVar12;
        }
        if ((&UNK_180e0894d < puVar17) ||
           ((undefined1 *)(lVar2 + (longlong)puVar17) < &UNK_180e0894c)) {
          puVar18 = (undefined1 *)0x2;
        }
        else if (&UNK_180e0894c < puVar17) {
          puVar18 = (undefined1 *)((longlong)puVar17 + -0x180e0894c);
        }
        func_0x000180b0bbe6((undefined1 *)((longlong)puVar17 + 2),puVar17,lVar2 + 1);
        func_0x000180b0bbe0(puVar17,&UNK_180e0894c,puVar18);
        func_0x000180b0bbe0((undefined1 *)((longlong)puVar17 + (longlong)puVar18),
                            puVar18 + 0x180e0894e,2 - (longlong)puVar18);
      }
      ppplStack_f0 = (longlong ***)*puVar12;
      uStack_e8 = puVar12[1];
      uStack_e0 = puVar12[2];
      uStack_d8 = puVar12[3];
      *(undefined1 *)puVar12 = 0;
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      if (0xf < uStack_70) {
        if (0xfff < uStack_70 + 1) {
          if (0x1f < (CONCAT71(uStack_87,uStack_88) -
                     *(longlong *)(CONCAT71(uStack_87,uStack_88) + -8)) - 8U) {
            puStack_118 = (undefined *)0x0;
            _invoke_watson(0,0,0,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        func_0x000180b0a058();
      }
      uStack_78 = _DAT_180b8fd40;
      uStack_70 = _UNK_180b8fd48;
      uStack_88 = 0;
      cVar9 = _isInvader_Units_DFHack__YA_NPEAUunit_df___Z(lVar11);
      if (cVar9 == '\0') {
        cVar9 = _isOpposedToLife_Units_DFHack__YA_NPEAUunit_df___Z(lVar11);
        if (cVar9 != '\0') goto LAB_180a01140;
      }
      else {
LAB_180a01140:
        if (uStack_d8 - uStack_e0 < 10) {
          puStack_118 = (undefined *)0xa;
          FUN_1801685b0(&ppplStack_f0,10,uStack_108,&UNK_180e08950);
        }
        else {
          pppplVar15 = &ppplStack_f0;
          if (0xf < uStack_d8) {
            pppplVar15 = (longlong ****)ppplStack_f0;
          }
          lVar11 = (longlong)pppplVar15 + uStack_e0;
          uStack_e0 = uStack_e0 + 10;
          func_0x000180b0bbe6(lVar11,&UNK_180e08950,10);
          *(undefined1 *)(lVar11 + 10) = 0;
        }
      }
      uVar8 = uStack_e0;
      if (0x7fffffffffffffffU - (longlong)pplStack_a0 < uStack_e0) {
        FUN_180330280();
LAB_180a01440:
        __0NullPointer_Error_DFHack__QEAA_PEBD0_Z(&uStack_88,&UNK_180c49b18,&UNK_180e088b0);
        func_0x000180b0bbc8(&uStack_88,&UNK_181094658);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ppppuVar14 = &pppuStack_b0;
      if ((longlong ***)0xf < pplStack_98) {
        ppppuVar14 = (undefined8 ****)pppuStack_b0;
      }
      ppplStack_100 = (longlong ***)&ppplStack_f0;
      if (0xf < uStack_d8) {
        ppplStack_100 = ppplStack_f0;
      }
      pppuStack_d0 = (undefined8 ****)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uVar1 = (longlong)pplStack_a0 + uStack_e0;
      uVar16 = 0xf;
      ppppuVar13 = &pppuStack_d0;
      if (0xf < uVar1) {
        uVar16 = uVar1 | 0xf;
        if (uVar16 < 0x8000000000000000) {
          if (uVar16 < 0x16) {
            uVar16 = 0x16;
          }
        }
        else {
          uVar16 = 0x7fffffffffffffff;
        }
        ppppuVar13 = (undefined8 ****)FUN_1800ed6e0(uVar16 + 1);
        pppuStack_d0 = ppppuVar13;
      }
      uStack_c0 = uVar1;
      uStack_b8 = uVar16;
      func_0x000180b0bbe0(ppppuVar13,ppppuVar14,pplStack_a0);
      func_0x000180b0bbe0((longlong)ppppuVar13 + (longlong)pplStack_a0,ppplStack_100,uVar8);
      *(undefined1 *)((longlong)ppppuVar13 + uVar1) = 0;
      uVar8 = uStack_c0;
      if (uStack_b8 == uStack_c0) {
        puStack_118 = (undefined *)0x1;
        ppppuVar14 = (undefined8 ****)FUN_1801685b0(&pppuStack_d0,1,uStack_108,&UNK_180b8d660);
      }
      else {
        uStack_c0 = uStack_c0 + 1;
        ppppuVar14 = &pppuStack_d0;
        if (0xf < uStack_b8) {
          ppppuVar14 = (undefined8 ****)pppuStack_d0;
        }
        *(undefined2 *)((longlong)ppppuVar14 + uVar8) = 0x5d;
        ppppuVar14 = &pppuStack_d0;
      }
      *param_1 = (longlong ***)0x0;
      param_1[1] = (longlong ***)0x0;
      param_1[2] = (longlong ***)0x0;
      param_1[3] = (longlong ***)0x0;
      ppplVar7 = ppppuVar14[1];
      *param_1 = *ppppuVar14;
      param_1[1] = ppplVar7;
      uVar4 = *(undefined4 *)((longlong)ppppuVar14 + 0x14);
      uVar5 = *(undefined4 *)(ppppuVar14 + 3);
      uVar6 = *(undefined4 *)((longlong)ppppuVar14 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(ppppuVar14 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 3) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
      *(undefined1 *)ppppuVar14 = 0;
      ppppuVar14[2] = (undefined8 ***)0x0;
      ppppuVar14[3] = (undefined8 ***)0xf;
      if (0xf < uStack_b8) {
        if (0xfff < uStack_b8 + 1) {
          if (0x1f < (ulonglong)((longlong)pppuStack_d0 + (-8 - (longlong)pppuStack_d0[-1]))) {
            puStack_118 = (undefined *)0x0;
            _invoke_watson(0,0,0,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        func_0x000180b0a058();
      }
      uStack_c0 = _DAT_180b8fd40;
      uStack_b8 = _UNK_180b8fd48;
      pppuStack_d0 = (undefined8 ***)((ulonglong)pppuStack_d0 & 0xffffffffffffff00);
      if (0xf < uStack_d8) {
        if (0xfff < uStack_d8 + 1) {
          if (0x1f < (ulonglong)((longlong)ppplStack_f0 + (-8 - (longlong)ppplStack_f0[-1]))) {
            puStack_118 = (undefined *)0x0;
            _invoke_watson(0,0,0,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        func_0x000180b0a058();
      }
      uStack_e0 = 0;
      uStack_d8 = 0xf;
      ppplStack_f0 = (longlong ***)((ulonglong)ppplStack_f0 & 0xffffffffffffff00);
      if ((longlong ***)0xf < pplStack_98) {
        if (0xfff < (longlong)pplStack_98 + 1U) {
          if (0x1f < (ulonglong)((longlong)pppuStack_b0 + (-8 - (longlong)pppuStack_b0[-1]))) {
            puStack_118 = (undefined *)0x0;
            _invoke_watson(0,0,0,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        func_0x000180b0a058();
      }
      goto LAB_180a01410;
    }
  }
  *param_1 = pppuStack_b0;
  param_1[1] = (longlong ***)pplStack_a8;
  param_1[2] = (longlong ***)pplStack_a0;
  param_1[3] = (longlong ***)pplStack_98;
LAB_180a01410:
  FUN_180b0a9d0(uStack_48 ^ (ulonglong)auStack_138);
  return;
}


/* getReadableBase, RVA 0xa02050..0xa025dc (exclusive) */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void getReadableBase(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_158 [32];
  undefined8 uStack_138;
  undefined1 uStack_128;
  undefined8 *puStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined8 auStack_f8 [2];
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  ulonglong uStack_68;
  ulonglong uStack_60;
  longlong alStack_58 [3];
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_181434540 ^ (ulonglong)auStack_158;
  puStack_120 = param_1;
  getBookTitle(&lStack_118);
  if (uStack_108 == 0) {
    if (0xf < uStack_100) {
      if (0xfff < uStack_100 + 1) {
        if (0x1f < (CONCAT71(lStack_118._1_7_,(undefined1)lStack_118) -
                   *(longlong *)(CONCAT71(lStack_118._1_7_,(undefined1)lStack_118) + -8)) - 8U) {
          uStack_138 = 0;
          _invoke_watson(0,0,0,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x000180b0a058();
    }
    if ((*(uint *)(param_2 + 0x10) & 0x40000) != 0) {
      plVar6 = (longlong *)
               _findRef_DFHack__YAPEAUgeneral_ref_df__AEAV__vector_PEAUgeneral_ref_df__V__allocator_PEAUgeneral_ref_df___std___std__W4general_ref_type_6enums_3__Z
                         (param_2 + 0x38,1);
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x7a) != '\0')) {
          uVar8 = artifactType(alStack_58,param_2);
          uVar9 = _translateName_Translation_DFHack__YA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUlanguage_name_df___N1_Z
                            (&uStack_78,lVar7 + 8,1,0);
          plVar6 = (longlong *)
                   _translateName_Translation_DFHack__YA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUlanguage_name_df___N1_Z
                             (&uStack_98,lVar7 + 8,0,0);
          lVar7 = plVar6[2];
          if ((ulonglong)(plVar6[3] - lVar7) < 2) {
            uStack_138 = 2;
            plVar6 = (longlong *)FUN_1801685b0(plVar6,2,uStack_128,&UNK_180d3cddc);
          }
          else {
            plVar6[2] = lVar7 + 2;
            plVar10 = plVar6;
            if (0xf < (ulonglong)plVar6[3]) {
              plVar10 = (longlong *)*plVar6;
            }
            *(undefined2 *)((longlong)plVar10 + lVar7) = 0x202c;
            *(undefined1 *)((longlong)plVar10 + lVar7 + 2) = 0;
          }
          lStack_b8 = *plVar6;
          lStack_b0 = plVar6[1];
          uStack_a8 = (undefined4)plVar6[2];
          uStack_a4 = *(undefined4 *)((longlong)plVar6 + 0x14);
          uStack_a0 = (undefined4)plVar6[3];
          uStack_9c = *(undefined4 *)((longlong)plVar6 + 0x1c);
          *(undefined1 *)plVar6 = 0;
          plVar6[2] = 0;
          plVar6[3] = 0xf;
          FUN_180391f00(&lStack_118,uStack_128,&lStack_b8,uVar9);
          uVar5 = uStack_108;
          if (uStack_100 - uStack_108 < 2) {
            uStack_138 = 2;
            plVar6 = (longlong *)FUN_1801685b0(&lStack_118,2,uStack_128,&UNK_180b8e9c4);
          }
          else {
            uStack_108 = uStack_108 + 2;
            puVar11 = (undefined1 *)&lStack_118;
            if (0xf < uStack_100) {
              puVar11 = (undefined1 *)CONCAT71(lStack_118._1_7_,(undefined1)lStack_118);
            }
            *(undefined2 *)(puVar11 + uVar5) = 0x2820;
            puVar11[uVar5 + 2] = 0;
            plVar6 = &lStack_118;
          }
          lStack_d8 = *plVar6;
          lStack_d0 = plVar6[1];
          uStack_c8 = (undefined4)plVar6[2];
          uStack_c4 = *(undefined4 *)((longlong)plVar6 + 0x14);
          uStack_c0 = (undefined4)plVar6[3];
          uStack_bc = *(undefined4 *)((longlong)plVar6 + 0x1c);
          *(undefined1 *)plVar6 = 0;
          plVar6[2] = 0;
          plVar6[3] = 0xf;
          FUN_180391f00(auStack_f8,uStack_128,&lStack_d8,uVar8);
          uVar5 = uStack_e8;
          if (uStack_e0 == uStack_e8) {
            uStack_138 = 1;
            puVar12 = (undefined8 *)FUN_1801685b0(auStack_f8,1,uStack_128,&UNK_180b8d644);
          }
          else {
            uStack_e8 = uStack_e8 + 1;
            puVar11 = (undefined1 *)auStack_f8;
            if (0xf < uStack_e0) {
              puVar11 = (undefined1 *)CONCAT71(auStack_f8[0]._1_7_,(undefined1)auStack_f8[0]);
            }
            *(undefined2 *)(puVar11 + uVar5) = 0x29;
            puVar12 = auStack_f8;
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          uVar8 = puVar12[1];
          *param_1 = *puVar12;
          param_1[1] = uVar8;
          uVar2 = *(undefined4 *)((longlong)puVar12 + 0x14);
          uVar3 = *(undefined4 *)(puVar12 + 3);
          uVar4 = *(undefined4 *)((longlong)puVar12 + 0x1c);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
          *(undefined4 *)(param_1 + 3) = uVar3;
          *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
          *(undefined1 *)puVar12 = 0;
          puVar12[2] = 0;
          puVar12[3] = 0xf;
          if (0xf < uStack_e0) {
            if (0xfff < uStack_e0 + 1) {
              if (0x1f < (CONCAT71(auStack_f8[0]._1_7_,(undefined1)auStack_f8[0]) -
                         *(longlong *)(CONCAT71(auStack_f8[0]._1_7_,(undefined1)auStack_f8[0]) + -8)
                         ) - 8U) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          uStack_e8 = _DAT_180b8fd40;
          uStack_e0 = _UNK_180b8fd48;
          auStack_f8[0]._0_1_ = 0;
          if (0xf < CONCAT44(uStack_bc,uStack_c0)) {
            if (0xfff < CONCAT44(uStack_bc,uStack_c0) + 1) {
              if (0x1f < (lStack_d8 - *(longlong *)(lStack_d8 + -8)) - 8U) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          if (0xf < uStack_100) {
            if (0xfff < uStack_100 + 1) {
              if (0x1f < (CONCAT71(lStack_118._1_7_,(undefined1)lStack_118) -
                         *(longlong *)(CONCAT71(lStack_118._1_7_,(undefined1)lStack_118) + -8)) - 8U
                 ) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          lStack_118._0_1_ = 0;
          uStack_108 = _DAT_180b8fd40;
          uStack_100 = _UNK_180b8fd48;
          if (0xf < CONCAT44(uStack_9c,uStack_a0)) {
            if (0xfff < CONCAT44(uStack_9c,uStack_a0) + 1) {
              if (0x1f < (lStack_b8 - *(longlong *)(lStack_b8 + -8)) - 8U) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          if (0xf < uStack_80) {
            if (0xfff < uStack_80 + 1) {
              if (0x1f < (CONCAT71(uStack_97,uStack_98) -
                         *(longlong *)(CONCAT71(uStack_97,uStack_98) + -8)) - 8U) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          uStack_98 = 0;
          uStack_88 = _DAT_180b8fd40;
          uStack_80 = _UNK_180b8fd48;
          if (0xf < uStack_60) {
            if (0xfff < uStack_60 + 1) {
              if (0x1f < (CONCAT71(uStack_77,uStack_78) -
                         *(longlong *)(CONCAT71(uStack_77,uStack_78) + -8)) - 8U) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          uStack_78 = 0;
          uStack_68 = _DAT_180b8fd40;
          uStack_60 = _UNK_180b8fd48;
          if (0xf < uStack_40) {
            if (0xfff < uStack_40 + 1) {
              if (0x1f < (alStack_58[0] - *(longlong *)(alStack_58[0] + -8)) - 8U) {
                uStack_138 = 0;
                _invoke_watson(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            func_0x000180b0a058();
          }
          goto LAB_180a025b6;
        }
      }
    }
    getDescription(param_1,param_2,0,1);
  }
  else {
    *param_1 = CONCAT71(lStack_118._1_7_,(undefined1)lStack_118);
    param_1[1] = uStack_110;
    param_1[2] = uStack_108;
    param_1[3] = uStack_100;
  }
LAB_180a025b6:
  FUN_180b0a9d0(uStack_38 ^ (ulonglong)auStack_158);
  return;
}


/* getBookTitle, RVA 0x9ff5a0..0x9ff823 (exclusive) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void getBookTitle(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  ulonglong uStack_70;
  longlong alStack_68 [3];
  ulonglong uStack_50;
  ulonglong uStack_28;
  
                    /* 0x9ff5a0  27926
                       ?getBookTitle@Items@DFHack@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUitem@df@@@Z
                        */
  uStack_28 = _DAT_181434540 ^ (ulonglong)auStack_c8;
  uStack_90 = 0;
  puStack_98 = param_1;
  if (param_2 == (longlong *)0x0) {
    __0NullPointer_Error_DFHack__QEAA_PEBD0_Z(alStack_68,&UNK_180c49b18,&UNK_180e08770);
    func_0x000180b0bbc8(alStack_68,&UNK_181094658);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar6 = func_0x0001803763e0(&
                              __identity_item_bookst_df__2V__type_identity_for_Uitem_bookst_df___DFHack__B
                             );
  if (lVar6 == 0) {
LAB_1809ff62f:
    uVar7 = func_0x00018039c900(param_2);
    cVar5 = _is_subclass_struct_identity_DFHack__QEBA_NPEBV12__Z
                      (&__identity_item_bookst_df__2V__type_identity_for_Uitem_bookst_df___DFHack__B
                       ,uVar7);
  }
  else {
    lVar6 = func_0x0001803763e0(&
                                __identity_item_bookst_df__2V__type_identity_for_Uitem_bookst_df___DFHack__B
                               );
    if (*param_2 == lVar6) {
      cVar5 = '\x01';
    }
    else {
      puStack_98 = (undefined8 *)
                   &__identity_item_bookst_df__2V__type_identity_for_Uitem_bookst_df___DFHack__B;
      plVar9 = (longlong *)
               FUN_18016d2e0(__children_map_struct_identity_DFHack__0PEAV__unordered_map_PEBVstruct_identity_DFHack__V__vector_PEBVstruct_identity_DFHack__V__allocator_PEBVstruct_identity_DFHack___std___std__U__hash_PEBVstruct_identity_DFHack___4_U__equal_to_PEBVstruct_identity_DFHack___4_V__allocator_U__pair_QEBVstruct_identity_DFHack__V__vector_PEBVstruct_identity_DFHack__V__allocator_PEBVstruct_identity_DFHack___std___std___std___4__std__EA
                             ,&uStack_88,&puStack_98);
      cVar5 = '\0';
      if (*(longlong *)(*plVar9 + 0x20) - *(longlong *)(*plVar9 + 0x18) >> 3 != 0)
      goto LAB_1809ff62f;
    }
  }
  plVar9 = (longlong *)0x0;
  if (cVar5 != '\0') {
    plVar9 = param_2;
  }
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)FUN_1809fbc90(param_2);
    if (plVar9 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0xe0))(plVar9,0x14);
      if (cVar5 != '\0') {
        firstImprovementTitle(param_1,plVar9 + 0x1a);
        goto LAB_1809ff7d3;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    bVar10 = plVar9[0x1f] != 0;
    if (bVar10) {
      puVar8 = (undefined8 *)FUN_1801bbb80(&uStack_88,plVar9 + 0x1d);
    }
    else {
      puVar8 = (undefined8 *)firstImprovementTitle(alStack_68,plVar9 + 0x1a);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar7 = puVar8[1];
    *param_1 = *puVar8;
    param_1[1] = uVar7;
    uVar2 = *(undefined4 *)((longlong)puVar8 + 0x14);
    uVar3 = *(undefined4 *)(puVar8 + 3);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar8 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    if (bVar10) {
      if (0xf < uStack_70) {
        if (0xfff < uStack_70 + 1) {
          if (0x1f < (CONCAT71(uStack_87,uStack_88) -
                     *(longlong *)(CONCAT71(uStack_87,uStack_88) + -8)) - 8U) {
            uStack_a8 = 0;
            _invoke_watson(0,0,0,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        func_0x000180b0a058();
      }
      uStack_78 = _DAT_180b8fd40;
      uStack_70 = _UNK_180b8fd48;
      uStack_88 = 0;
    }
    if ((!bVar10) && (0xf < uStack_50)) {
      if (0xfff < uStack_50 + 1) {
        if (0x1f < (alStack_68[0] - *(longlong *)(alStack_68[0] + -8)) - 8U) {
          uStack_a8 = 0;
          _invoke_watson(0,0,0,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x000180b0a058();
    }
  }
LAB_1809ff7d3:
  FUN_180b0a9d0(uStack_28 ^ (ulonglong)auStack_c8);
  return;
}


/* firstImprovementTitle, RVA 0xa053c0..0xa0555a (exclusive) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
firstImprovementTitle(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined *puStackX_10;
  undefined4 uVar8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar8 = 1;
  plVar7 = (longlong *)*param_2;
  plVar1 = (longlong *)param_2[1];
  do {
    if (plVar7 == plVar1) {
      return param_1;
    }
    plVar2 = (longlong *)*plVar7;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = func_0x0001803763e0(&
                                  __identity_itemimprovement_pagesst_df__2V__type_identity_for_Uitemimprovement_pagesst_df___DFHack__B
                                 );
      if (lVar4 == 0) {
LAB_180a05480:
        func_0x00018039c900(plVar2);
        cVar3 = _is_subclass_struct_identity_DFHack__QEBA_NPEBV12__Z
                          (&
                           __identity_itemimprovement_pagesst_df__2V__type_identity_for_Uitemimprovement_pagesst_df___DFHack__B
                          );
        plVar5 = (longlong *)0x0;
        if (cVar3 != '\0') {
          plVar5 = plVar2;
        }
        if (plVar5 != (longlong *)0x0) {
LAB_180a054a0:
          cVar3 = firstContentTitle(param_1,plVar5 + 6);
          if (cVar3 != '\0') {
            return param_1;
          }
        }
      }
      else {
        lVar4 = func_0x0001803763e0(&
                                    __identity_itemimprovement_pagesst_df__2V__type_identity_for_Uitemimprovement_pagesst_df___DFHack__B
                                   );
        plVar5 = plVar2;
        if (*plVar2 == lVar4) goto LAB_180a054a0;
        puStackX_10 = &
                      __identity_itemimprovement_pagesst_df__2V__type_identity_for_Uitemimprovement_pagesst_df___DFHack__B
        ;
        plVar5 = (longlong *)
                 FUN_18016d2e0(__children_map_struct_identity_DFHack__0PEAV__unordered_map_PEBVstruct_identity_DFHack__V__vector_PEBVstruct_identity_DFHack__V__allocator_PEBVstruct_identity_DFHack___std___std__U__hash_PEBVstruct_identity_DFHack___4_U__equal_to_PEBVstruct_identity_DFHack___4_V__allocator_U__pair_QEBVstruct_identity_DFHack__V__vector_PEBVstruct_identity_DFHack__V__allocator_PEBVstruct_identity_DFHack___std___std___std___4__std__EA
                               ,auStack_50,&puStackX_10,param_4,uVar8);
        if (*(longlong *)(*plVar5 + 0x20) - *(longlong *)(*plVar5 + 0x18) >> 3 != 0)
        goto LAB_180a05480;
      }
      lVar4 = func_0x0001803763e0(&
                                  __identity_itemimprovement_writingst_df__2V__type_identity_for_Uitemimprovement_writingst_df___DFHack__B
                                 );
      if (lVar4 == 0) {
LAB_180a05503:
        uVar6 = func_0x00018039c900(plVar2);
        cVar3 = _is_subclass_struct_identity_DFHack__QEBA_NPEBV12__Z
                          (&
                           __identity_itemimprovement_writingst_df__2V__type_identity_for_Uitemimprovement_writingst_df___DFHack__B
                           ,uVar6);
        plVar5 = (longlong *)0x0;
        if (cVar3 != '\0') {
          plVar5 = plVar2;
        }
        if (plVar5 == (longlong *)0x0) goto LAB_180a05536;
      }
      else {
        lVar4 = func_0x0001803763e0(&
                                    __identity_itemimprovement_writingst_df__2V__type_identity_for_Uitemimprovement_writingst_df___DFHack__B
                                   );
        plVar5 = plVar2;
        if (*plVar2 != lVar4) {
          puStackX_10 = &
                        __identity_itemimprovement_writingst_df__2V__type_identity_for_Uitemimprovement_writingst_df___DFHack__B
          ;
          plVar5 = (longlong *)
                   FUN_18016d2e0(__children_map_struct_identity_DFHack__0PEAV__unordered_map_PEBVstruct_identity_DFHack__V__vector_PEBVstruct_identity_DFHack__V__allocator_PEBVstruct_identity_DFHack___std___std__U__hash_PEBVstruct_identity_DFHack___4_U__equal_to_PEBVstruct_identity_DFHack___4_V__allocator_U__pair_QEBVstruct_identity_DFHack__V__vector_PEBVstruct_identity_DFHack__V__allocator_PEBVstruct_identity_DFHack___std___std___std___4__std__EA
                                 ,auStack_40,&puStackX_10);
          if (*(longlong *)(*plVar5 + 0x20) - *(longlong *)(*plVar5 + 0x18) >> 3 == 0)
          goto LAB_180a05536;
          goto LAB_180a05503;
        }
      }
      cVar3 = firstContentTitle(param_1,plVar5 + 5);
      if (cVar3 != '\0') {
        return param_1;
      }
    }
LAB_180a05536:
    plVar7 = plVar7 + 1;
  } while( true );
}


/* firstContentTitle, RVA 0xa05340..0xa053bf (exclusive) */

undefined1 firstContentTitle(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  while( true ) {
    if (puVar4 == puVar1) {
      return 0;
    }
    lVar2 = _find_written_content_df__SAPEAU12_H_Z(*puVar4);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) break;
    puVar4 = puVar4 + 1;
  }
  plVar3 = (longlong *)(lVar2 + 8);
  if ((longlong *)param_1 != plVar3) {
    if (0xf < *(ulonglong *)(lVar2 + 0x20)) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_18033ccb0(param_1,plVar3,*(undefined8 *)(lVar2 + 0x18));
  }
  return 1;
}


/* artifactType, RVA 0xa02710..0xa02885 (exclusive) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void artifactType(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  short sVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  longlong *plStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_181434540 ^ (ulonglong)auStack_88;
  uStack_58 = 0;
  plStack_40 = param_1;
  if (param_2 == (longlong *)0x0) {
    iVar8 = -1;
    uStack_50 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  else {
    sVar2 = (**(code **)(*param_2 + 8))(param_2);
    iVar8 = (int)sVar2;
    uVar3 = (**(code **)*param_2)(param_2);
    uStack_50 = CONCAT22(sVar2,uVar3);
    uVar6 = (ulonglong)uVar3;
  }
  uStack_48 = func_0x000180a016a0(uVar6,iVar8);
  uVar4 = _toString_ItemTypeInfo_DFHack__QEAA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__XZ
                    (&uStack_50,&uStack_38);
  _capitalize_string_words__YA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__AEBV12__Z
            (param_1,uVar4);
  uStack_58 = 1;
  if (0xf < uStack_20) {
    if (0xfff < uStack_20 + 1) {
      if (0x1f < (CONCAT71(uStack_37,uStack_38) - *(longlong *)(CONCAT71(uStack_37,uStack_38) + -8))
                 - 8U) {
        uStack_68 = 0;
        _invoke_watson(0,0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x000180b0a058();
  }
  uStack_28 = _DAT_180b8fd40;
  uStack_20 = _UNK_180b8fd48;
  uStack_38 = 0;
  plVar7 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar7 = (longlong *)*param_1;
  }
  if (param_1[2] == 9) {
    lVar5 = *plVar7 + -0x7472617070617254;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(byte *)(plVar7 + 1) - 0x73;
    }
    if (lVar5 == 0) {
      FUN_18033ccb0(param_1,&UNK_180e088a0,9);
    }
  }
  FUN_180b0a9d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* getDescription, RVA 0x9ffb90..0xa00730 (exclusive) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void getDescription(uint *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  short sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_1b8 [32];
  undefined8 uStack_198;
  uint *puStack_190;
  longlong lStack_188;
  char acStack_178 [8];
  uint uStack_170;
  uint *puStack_168;
  longlong lStack_160;
  int iStack_158;
  uint *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [64];
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
                    /* 0x9ffb90  27987
                       ?getDescription@Items@DFHack@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUitem@df@@H_N@Z
                        */
  uStack_48 = _DAT_181434540 ^ (ulonglong)auStack_1b8;
  uStack_170 = 0;
  puStack_150 = param_1;
  if (param_2 == (longlong *)0x0) {
    __0NullPointer_Error_DFHack__QEAA_PEBD0_Z(auStack_128,&UNK_180c49b18,&UNK_180e08800);
    func_0x000180b0bbc8(auStack_128,&UNK_181094658);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)param_1 = 0;
  uVar9 = 1;
  uStack_170 = 1;
  (**(code **)(*param_2 + 0x5e8))(param_2,param_1);
  if (param_4 != '\0') {
    sVar2 = (**(code **)(*param_2 + 0x508))(param_2);
    iVar8 = (int)sVar2;
    sVar2 = (**(code **)(*param_2 + 0x518))(param_2);
    iVar11 = (int)sVar2;
    iStack_158 = iVar11;
    acStack_178[0] = (**(code **)(*param_2 + 0x5d8))(param_2);
    if ((acStack_178[0] == '\0') && (iVar8 < iVar11)) {
      iVar8 = iVar11;
    }
    formatQuality(param_1,iVar8);
    lVar3 = (**(code **)(*param_2 + 0x5e0))(param_2);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(param_1 + 4);
      if (lVar3 == 0x7fffffffffffffff) goto LAB_180a006f0;
      puStack_168 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_168 = *(uint **)param_1;
      }
      uStack_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      uVar7 = lVar3 + 1;
      uVar10 = 0xf;
      puVar4 = &uStack_148;
      if (0xf < uVar7) {
        uVar10 = uVar7 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        puVar4 = (undefined8 *)FUN_1800ed6e0(uVar10 + 1);
        uStack_148 = puVar4;
      }
      uStack_138 = uVar7;
      uStack_130 = uVar10;
      *(undefined1 *)puVar4 = 0x11;
      func_0x000180b0bbe0((undefined1 *)((longlong)puVar4 + 1),puStack_168,lVar3);
      *(undefined1 *)((longlong)puVar4 + uVar7) = 0;
      uStack_170 = 3;
      FUN_180369a20(&uStack_148,0x10);
      uStack_e8 = (uint)uStack_148;
      uStack_e4 = uStack_148._4_4_;
      uStack_e0 = (uint)uStack_140;
      uStack_dc = uStack_140._4_4_;
      uStack_d8 = (uint)uStack_138;
      uStack_d4 = uStack_138._4_4_;
      uStack_d0 = (uint)uStack_130;
      uStack_cc = uStack_130._4_4_;
      uVar9 = 7;
      uStack_170 = 7;
      uVar7 = uStack_130;
      if (param_1 != &uStack_e8) {
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          lVar3 = *(longlong *)param_1;
          lVar6 = lVar3;
          if ((0xfff < *(ulonglong *)(param_1 + 6) + 1) &&
             (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) goto LAB_1809ffdc3;
          func_0x000180b0a058(lVar6);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)param_1 = 0;
        *param_1 = (uint)uStack_148;
        param_1[1] = uStack_148._4_4_;
        param_1[2] = (uint)uStack_140;
        param_1[3] = uStack_140._4_4_;
        param_1[4] = (uint)uStack_138;
        param_1[5] = uStack_138._4_4_;
        param_1[6] = (uint)uStack_130;
        param_1[7] = uStack_130._4_4_;
        uStack_e8 = uStack_e8 & 0xffffff00;
        uVar7 = 0xf;
      }
      if (0xf < uVar7) {
        if ((0xfff < uVar7 + 1) &&
           (0x1f < (CONCAT44(uStack_e4,uStack_e8) -
                   *(longlong *)(CONCAT44(uStack_e4,uStack_e8) + -8)) - 8U)) {
LAB_1809ffdc3:
          uStack_198 = 0;
          _invoke_watson(0,0,0,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        func_0x000180b0a058();
      }
    }
    if (acStack_178[0] != '\0') {
      lStack_160 = *(longlong *)(param_1 + 4);
      if (lStack_160 == 0x7fffffffffffffff) goto LAB_180a006f0;
      puStack_168 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_168 = *(uint **)param_1;
      }
      uStack_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      uVar7 = lStack_160 + 1;
      uVar10 = 0xf;
      puVar4 = &uStack_148;
      if (0xf < uVar7) {
        uVar10 = uVar7 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        puVar4 = (undefined8 *)FUN_1800ed6e0(uVar10 + 1);
        uStack_148 = puVar4;
      }
      uStack_138 = uVar7;
      uStack_130 = uVar10;
      *(undefined1 *)puVar4 = 0xae;
      func_0x000180b0bbe0((undefined1 *)((longlong)puVar4 + 1),puStack_168,lStack_160);
      *(undefined1 *)((longlong)puVar4 + uVar7) = 0;
      uStack_170 = uVar9 | 8;
      FUN_180369a20(&uStack_148,0xaf);
      uStack_c8 = (uint)uStack_148;
      uStack_c4 = uStack_148._4_4_;
      uStack_c0 = (uint)uStack_140;
      uStack_bc = uStack_140._4_4_;
      uStack_b8 = (uint)uStack_138;
      uStack_b4 = uStack_138._4_4_;
      uStack_b0 = (uint)uStack_130;
      uStack_ac = uStack_130._4_4_;
      uVar9 = uVar9 | 0x18;
      uVar7 = uStack_130;
      uStack_170 = uVar9;
      if (param_1 != &uStack_c8) {
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          lVar3 = *(longlong *)param_1;
          lVar6 = lVar3;
          if ((0xfff < *(ulonglong *)(param_1 + 6) + 1) &&
             (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) goto LAB_1809fff59;
          func_0x000180b0a058(lVar6);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)param_1 = 0;
        *param_1 = (uint)uStack_148;
        param_1[1] = uStack_148._4_4_;
        param_1[2] = (uint)uStack_140;
        param_1[3] = uStack_140._4_4_;
        param_1[4] = (uint)uStack_138;
        param_1[5] = uStack_138._4_4_;
        param_1[6] = (uint)uStack_130;
        param_1[7] = uStack_130._4_4_;
        uStack_c8 = uStack_c8 & 0xffffff00;
        uVar7 = 0xf;
      }
      if (0xf < uVar7) {
        if ((0xfff < uVar7 + 1) &&
           (0x1f < (CONCAT44(uStack_c4,uStack_c8) -
                   *(longlong *)(CONCAT44(uStack_c4,uStack_c8) + -8)) - 8U)) {
LAB_1809fff59:
          uStack_198 = 0;
          _invoke_watson(0,0,0,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        func_0x000180b0a058();
      }
      if ((0 < *(int *)(__d_init_global_df__3PEAU02_EA + 1)) &&
         ((*(byte *)*__d_init_global_df__3PEAU02_EA & 4) != 0)) {
        formatQuality(param_1,iStack_158);
      }
    }
    if (*__gamemode_global_df__3PEAW4game_mode_3enums_2_EA == 0) {
      if ((*(uint *)(param_2 + 2) & 0x80000) != 0) {
        acStack_178[0] = '{';
        lStack_188 = *(longlong *)(param_1 + 4);
        if (lStack_188 == 0x7fffffffffffffff) {
          FUN_180330280();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puStack_190 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          puStack_190 = *(uint **)param_1;
        }
        uStack_198 = 1;
        FUN_1801bbd30(&uStack_148,0x7b,param_1,acStack_178);
        uVar9 = uVar9 | 0x1000;
        uStack_170 = uVar9;
        uVar5 = FUN_18038c8a0(auStack_128,&uStack_148,0x7d);
        FUN_18023be20(param_1,uVar5);
        FUN_18032cd40(auStack_128);
        FUN_18032cd40(&uStack_148);
      }
      if ((*(uint *)(param_2 + 2) & 0x4000) != 0) {
        acStack_178[0] = '(';
        if (*(longlong *)(param_1 + 4) == 0x7fffffffffffffff) goto LAB_180a006f0;
        puStack_190 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          puStack_190 = *(uint **)param_1;
        }
        uStack_198 = 1;
        lStack_188 = *(longlong *)(param_1 + 4);
        FUN_1801bbd30(&uStack_148,0x28,param_1,acStack_178);
        uStack_170 = uVar9 | 0x4000;
        FUN_180369a20(&uStack_148,0x29);
        uStack_a8 = (uint)uStack_148;
        uStack_a4 = uStack_148._4_4_;
        uStack_a0 = (uint)uStack_140;
        uStack_9c = uStack_140._4_4_;
        uStack_98 = (uint)uStack_138;
        uStack_94 = uStack_138._4_4_;
        uStack_90 = (uint)uStack_130;
        uStack_8c = uStack_130._4_4_;
        uVar9 = uVar9 | 0x4080;
        uVar7 = uStack_130;
        uStack_170 = uVar9;
        if (param_1 != &uStack_a8) {
          if (0xf < *(ulonglong *)(param_1 + 6)) {
            lVar3 = *(longlong *)param_1;
            lVar6 = lVar3;
            if ((0xfff < *(ulonglong *)(param_1 + 6) + 1) &&
               (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) goto LAB_180a0015c;
            func_0x000180b0a058(lVar6);
          }
          param_1[4] = 0;
          param_1[5] = 0;
          *(undefined1 *)param_1 = 0;
          *param_1 = (uint)uStack_148;
          param_1[1] = uStack_148._4_4_;
          param_1[2] = (uint)uStack_140;
          param_1[3] = uStack_140._4_4_;
          param_1[4] = (uint)uStack_138;
          param_1[5] = uStack_138._4_4_;
          param_1[6] = (uint)uStack_130;
          param_1[7] = uStack_130._4_4_;
          uStack_a8 = uStack_a8 & 0xffffff00;
          uVar7 = 0xf;
        }
        if (0xf < uVar7) {
          if ((0xfff < uVar7 + 1) &&
             (0x1f < (CONCAT44(uStack_a4,uStack_a8) -
                     *(longlong *)(CONCAT44(uStack_a4,uStack_a8) + -8)) - 8U)) {
LAB_180a0015c:
            uStack_198 = 0;
            _invoke_watson(0,0,0,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          func_0x000180b0a058();
        }
      }
    }
    sVar2 = (**(code **)(*param_2 + 0x1d8))(param_2);
    if (sVar2 == 1) {
      lStack_160 = *(longlong *)(param_1 + 4);
      if (lStack_160 == 0x7fffffffffffffff) goto LAB_180a006f0;
      puStack_168 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_168 = *(uint **)param_1;
      }
      uStack_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      uVar7 = lStack_160 + 1;
      uVar10 = 0xf;
      puVar4 = &uStack_148;
      if (0xf < uVar7) {
        uVar10 = uVar7 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        puVar4 = (undefined8 *)FUN_1800ed6e0(uVar10 + 1);
        uStack_148 = puVar4;
      }
      uStack_138 = uVar7;
      uStack_130 = uVar10;
      *(undefined1 *)puVar4 = 0x78;
      func_0x000180b0bbe0((undefined1 *)((longlong)puVar4 + 1),puStack_168,lStack_160);
      *(undefined1 *)((longlong)puVar4 + uVar7) = 0;
      uStack_170 = uVar9 | 0x100;
      FUN_180369a20(&uStack_148,0x78);
      uStack_88 = (uint)uStack_148;
      uStack_84 = uStack_148._4_4_;
      uStack_80 = (uint)uStack_140;
      uStack_7c = uStack_140._4_4_;
      uStack_78 = (uint)uStack_138;
      uStack_74 = uStack_138._4_4_;
      uStack_70 = (uint)uStack_130;
      uStack_6c = uStack_130._4_4_;
      uVar9 = uVar9 | 0x300;
      uVar7 = uStack_130;
      uStack_170 = uVar9;
      if (param_1 != &uStack_88) {
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          lVar3 = *(longlong *)param_1;
          lVar6 = lVar3;
          if ((0xfff < *(ulonglong *)(param_1 + 6) + 1) &&
             (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) goto LAB_180a0044f;
          func_0x000180b0a058(lVar6);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)param_1 = 0;
        *param_1 = (uint)uStack_148;
        param_1[1] = uStack_148._4_4_;
        param_1[2] = (uint)uStack_140;
        param_1[3] = uStack_140._4_4_;
        param_1[4] = (uint)uStack_138;
        param_1[5] = uStack_138._4_4_;
        param_1[6] = (uint)uStack_130;
        param_1[7] = uStack_130._4_4_;
        uStack_88 = uStack_88 & 0xffffff00;
        uVar7 = 0xf;
      }
      if (0xf < uVar7) {
        if ((0xfff < uVar7 + 1) &&
           (0x1f < (CONCAT44(uStack_84,uStack_88) -
                   *(longlong *)(CONCAT44(uStack_84,uStack_88) + -8)) - 8U)) {
LAB_180a0044f:
          uStack_198 = 0;
          _invoke_watson(0,0,0,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        func_0x000180b0a058();
      }
    }
    else if (sVar2 == 2) {
      acStack_178[0] = 'X';
      if (*(longlong *)(param_1 + 4) == 0x7fffffffffffffff) {
        FUN_180330280();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_190 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_190 = *(uint **)param_1;
      }
      uStack_198 = 1;
      lStack_188 = *(longlong *)(param_1 + 4);
      FUN_1801bbd30(auStack_128,0x58,param_1,acStack_178);
      uVar9 = uVar9 | 0x400;
      uStack_170 = uVar9;
      uVar5 = FUN_18038c8a0(&uStack_148,auStack_128,0x58);
      FUN_18023be20(param_1,uVar5);
      FUN_18032cd40(&uStack_148);
      FUN_18032cd40(auStack_128);
    }
    else if (sVar2 == 3) {
      if (0x7fffffffffffffffU - *(longlong *)(param_1 + 4) < 2) {
        FUN_180330280();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_190 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_190 = *(uint **)param_1;
      }
      uStack_198 = 2;
      lStack_188 = *(longlong *)(param_1 + 4);
      FUN_1801bbd30(auStack_128,acStack_178[0],param_1,&UNK_180e0889c);
      uStack_170 = uVar9 | 0x800;
      puVar4 = (undefined8 *)FUN_18033c730(auStack_128,&UNK_180e0889c,2);
      uStack_148 = (undefined8 *)*puVar4;
      uStack_140 = puVar4[1];
      uStack_138 = puVar4[2];
      uStack_130 = puVar4[3];
      *(undefined1 *)puVar4 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      uVar9 = uVar9 | 0x2800;
      uStack_170 = uVar9;
      FUN_18023be20(param_1,&uStack_148);
      FUN_18032cd40(&uStack_148);
      FUN_18032cd40(auStack_128);
    }
    if ((*(uint *)(param_2 + 2) & 0x400000) != 0) {
      lStack_160 = *(longlong *)(param_1 + 4);
      if (lStack_160 == 0x7fffffffffffffff) {
LAB_180a006f0:
        FUN_180330280();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_168 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_168 = *(uint **)param_1;
      }
      uStack_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      uVar7 = lStack_160 + 1;
      uVar10 = 0xf;
      puVar4 = &uStack_148;
      if (0xf < uVar7) {
        uVar10 = uVar7 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        puVar4 = (undefined8 *)FUN_1800ed6e0(uVar10 + 1);
        uStack_148 = puVar4;
      }
      uStack_138 = uVar7;
      uStack_130 = uVar10;
      *(undefined1 *)puVar4 = 0x13;
      func_0x000180b0bbe0((undefined1 *)((longlong)puVar4 + 1),puStack_168,lStack_160);
      *(undefined1 *)((longlong)puVar4 + uVar7) = 0;
      uStack_170 = uVar9 | 0x20;
      FUN_180369a20(&uStack_148,0x13);
      uStack_68 = (uint)uStack_148;
      uStack_64 = uStack_148._4_4_;
      uStack_60 = (uint)uStack_140;
      uStack_5c = uStack_140._4_4_;
      uStack_58 = (uint)uStack_138;
      uStack_54 = uStack_138._4_4_;
      uStack_50 = (uint)uStack_130;
      uStack_4c = uStack_130._4_4_;
      uVar9 = uVar9 | 0x60;
      uVar7 = uStack_130;
      uStack_170 = uVar9;
      if (param_1 != &uStack_68) {
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          lVar3 = *(longlong *)param_1;
          lVar6 = lVar3;
          if ((0xfff < *(ulonglong *)(param_1 + 6) + 1) &&
             (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) goto LAB_180a005f0;
          func_0x000180b0a058(lVar6);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)param_1 = 0;
        *param_1 = (uint)uStack_148;
        param_1[1] = uStack_148._4_4_;
        param_1[2] = (uint)uStack_140;
        param_1[3] = uStack_140._4_4_;
        param_1[4] = (uint)uStack_138;
        param_1[5] = uStack_138._4_4_;
        param_1[6] = (uint)uStack_130;
        param_1[7] = uStack_130._4_4_;
        uStack_68 = uStack_68 & 0xffffff00;
        uVar7 = 0xf;
      }
      if (0xf < uVar7) {
        if ((0xfff < uVar7 + 1) &&
           (0x1f < (CONCAT44(uStack_64,uStack_68) -
                   *(longlong *)(CONCAT44(uStack_64,uStack_68) + -8)) - 8U)) {
LAB_180a005f0:
          uStack_198 = 0;
          _invoke_watson(0,0,0,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        func_0x000180b0a058();
      }
    }
    if ((*__gamemode_global_df__3PEAW4game_mode_3enums_2_EA == 1) &&
       (lVar3 = _getGeneralRef_Items_DFHack__YAPEAUgeneral_ref_df__PEAUitem_4_W4general_ref_type_6enums_4__Z
                          (param_2,0x1f), lVar3 != 0)) {
      acStack_178[0] = '$';
      if (*(longlong *)(param_1 + 4) == 0x7fffffffffffffff) {
        FUN_180330280();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_190 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 6)) {
        puStack_190 = *(uint **)param_1;
      }
      uStack_198 = 1;
      lStack_188 = *(longlong *)(param_1 + 4);
      FUN_1801bbd30(auStack_128,0x24,param_1,acStack_178);
      uStack_170 = uVar9 | 0x8000;
      uVar5 = FUN_18038c8a0(&uStack_148,auStack_128,0x24);
      FUN_18023be20(param_1,uVar5);
      FUN_18032cd40(&uStack_148);
      FUN_18032cd40(auStack_128);
    }
  }
  FUN_180b0a9d0(uStack_48 ^ (ulonglong)auStack_1b8);
  return;
}


/* formatQuality, RVA 0x9fd210..0x9fd395 (exclusive) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void formatQuality(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_181434540 ^ (ulonglong)auStack_a8;
  if (param_2 - 1U < 5) {
    uVar2 = (&UNK_180e08450)[param_2];
    lVar3 = param_1[2];
    if (lVar3 == 0x7fffffffffffffff) {
      FUN_180330280();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar7 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar7 = (undefined8 *)*param_1;
    }
    uStack_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    uVar1 = lVar3 + 1;
    uVar6 = 0xf;
    puVar5 = &uStack_70;
    if (0xf < uVar1) {
      uVar6 = uVar1 | 0xf;
      if (uVar6 < 0x8000000000000000) {
        if (uVar6 < 0x16) {
          uVar6 = 0x16;
        }
      }
      else {
        uVar6 = 0x7fffffffffffffff;
      }
      puVar5 = (undefined8 *)FUN_1800ed6e0(uVar6 + 1);
      uStack_70 = puVar5;
    }
    uStack_60 = uVar1;
    uStack_58 = uVar6;
    *(undefined1 *)puVar5 = uVar2;
    func_0x000180b0bbe0((undefined1 *)((longlong)puVar5 + 1),puVar7,lVar3);
    *(undefined1 *)((longlong)puVar5 + uVar1) = 0;
    FUN_180369a20(&uStack_70,uVar2);
    uStack_50 = (undefined4)uStack_70;
    uStack_4c = uStack_70._4_4_;
    uStack_48 = (undefined4)uStack_68;
    uStack_44 = uStack_68._4_4_;
    uStack_40 = (undefined4)uStack_60;
    uStack_3c = uStack_60._4_4_;
    uStack_38 = (undefined4)uStack_58;
    uStack_34 = uStack_58._4_4_;
    FUN_18023be20(param_1,&uStack_50);
    if (0xf < CONCAT44(uStack_34,uStack_38)) {
      if (0xfff < CONCAT44(uStack_34,uStack_38) + 1) {
        if (0x1f < (CONCAT44(uStack_4c,uStack_50) -
                   *(longlong *)(CONCAT44(uStack_4c,uStack_50) + -8)) - 8U) {
          uStack_88 = 0;
          _invoke_watson(0,0,0,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_0x000180b0a058();
    }
  }
  FUN_180b0a9d0(uStack_30 ^ (ulonglong)auStack_a8);
  return;
}

