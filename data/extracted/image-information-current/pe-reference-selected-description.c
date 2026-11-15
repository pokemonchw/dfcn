/* reference PE:6aea05a1:02734000; selected-description; RVA 0x2159e0..0x2166cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_selected_description(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  undefined8 *****pppppuVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 auStack_218 [32];
  undefined1 *puStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  ushort uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [32];
  undefined4 uStack_188;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_218;
  lVar1 = param_1 + 0x428;
  FUN_1400bcfe0(lVar1);
  iVar5 = *(int *)(param_1 + 0x28);
  if (0xc < iVar5 - 1U) goto override_jmp_140215a4c_case_3;
                    /* WARNING: Switch is manually overridden */
  switch(iVar5 - 1U) {
  case 0:
  case 7:
    if (iVar5 == 1) {
      iVar5 = *(int *)(param_1 + 0x444);
      if (iVar5 < 0) goto override_jmp_140215a4c_case_3;
      lVar18 = *(longlong *)(param_1 + 0x158);
      lVar9 = *(longlong *)(param_1 + 0x160);
    }
    else {
      if ((iVar5 != 8) || (iVar5 = *(int *)(param_1 + 0x444), iVar5 < 0))
      goto override_jmp_140215a4c_case_3;
      lVar18 = *(longlong *)(param_1 + 0x2e0);
      lVar9 = *(longlong *)(param_1 + 0x2e8);
    }
    if (((ulonglong)(lVar9 - lVar18 >> 3) <= (ulonglong)(longlong)iVar5) ||
       (lVar18 = *(longlong *)(lVar18 + (longlong)iVar5 * 8), lVar18 == 0))
    goto override_jmp_140215a4c_case_3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf;
    ppppuStack_d8 = (undefined8 *****)0x0;
    load_supplier_0x736b0(auStack_1a8);
    uStack_188 = *(undefined4 *)(lVar18 + 0xe0);
    puStack_1f8 = auStack_1a8;
    image_selected_biography(0x14251c138,&ppppuStack_d8);
    FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    if (uStack_c0 < 0x10) goto override_jmp_140215a4c_case_3;
    uVar11 = uStack_c0 + 1;
    pppppuVar14 = (undefined8 *****)ppppuStack_d8;
    if (0xfff < uVar11) {
      uVar11 = uStack_c0 + 0x28;
      pppppuVar14 = (undefined8 *****)ppppuStack_d8[-1];
      if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar14))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    goto LAB_140215b53;
  case 1:
    iVar5 = *(int *)(param_1 + 0x444);
    if ((iVar5 < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x178) - *(longlong *)(param_1 + 0x170) >> 3) <=
        (ulonglong)(longlong)iVar5)) goto override_jmp_140215a4c_case_3;
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar5 * 8);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xf;
    ppppuStack_98 = (undefined8 *****)0x0;
    sVar3 = *(short *)(lVar18 + 0x80);
    if (sVar3 == 0) {
LAB_140215c01:
      if ((*(int *)(lVar18 + 0x348) != 0) || (pcVar13 = "This is a ", *(int *)(lVar18 + 0x34c) < 1))
      {
        pcVar13 = "These are ";
      }
    }
    else if (sVar3 == 1) {
      if ((*(int *)(lVar18 + 0x2a8) < 1) || ((**(byte **)(lVar18 + 0x2a0) & 8) == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pcVar13 = "This is a ";
      if (!bVar8) {
        pcVar13 = "These are ";
      }
    }
    else {
      if (sVar3 == 3) goto LAB_140215c01;
      pcVar13 = "This is a ";
    }
    FUN_140071040(&ppppuStack_98,pcVar13,10);
    lVar9 = load_supplier_0x9ce920(lVar18);
    if (lVar9 != 0) {
      sVar3 = *(short *)(lVar9 + 0x98);
      if (sVar3 != -1) {
        uStack_70 = 0;
        uStack_60 = 0xf;
        uStack_68 = 0;
        ppppuStack_78 = (undefined8 *****)0x0;
        if ((-1 < sVar3) &&
           ((ulonglong)(longlong)sVar3 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
          lVar9 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar3 * 8);
          pppppuVar14 = (undefined8 *****)(lVar9 + 0x60);
          if (&ppppuStack_78 != pppppuVar14) {
            if (0xf < *(ulonglong *)(lVar9 + 0x78)) {
              pppppuVar14 = (undefined8 *****)*pppppuVar14;
            }
            FUN_140070f00(&ppppuStack_78,pppppuVar14,*(undefined8 *)(lVar9 + 0x70));
          }
        }
        pppppuVar14 = &ppppuStack_78;
        if (0xf < uStack_60) {
          pppppuVar14 = (undefined8 *****)ppppuStack_78;
        }
        FUN_140071040(&ppppuStack_98,pppppuVar14,uStack_68);
        FUN_140071040(&ppppuStack_98," ",1);
        if (0xf < uStack_60) {
          uVar11 = uStack_60 + 1;
          pppppuVar14 = (undefined8 *****)ppppuStack_78;
          if (0xfff < uVar11) {
            uVar11 = uStack_60 + 0x28;
            pppppuVar14 = (undefined8 *****)ppppuStack_78[-1];
            if (0x1f < (ulonglong)((longlong)ppppuStack_78 + (-8 - (longlong)pppppuVar14)))
            goto LAB_140215ebf;
          }
          load_supplier_0x15530d0(pppppuVar14,uVar11);
        }
      }
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 *****)0x0;
    load_supplier_0x10e4760(lVar18,&ppppuStack_b8);
    pppppuVar14 = &ppppuStack_b8;
    if (0xf < uStack_a0) {
      pppppuVar14 = (undefined8 *****)ppppuStack_b8;
    }
    FUN_140071040(&ppppuStack_98,pppppuVar14,uStack_a8);
    lVar18 = load_supplier_0x1be9f0
                       (_DAT_14250dfd8,(int)*(short *)(lVar18 + 0x82),(int)*(short *)(lVar18 + 0x84)
                       );
    if (lVar18 != 0) {
      FUN_140071040(&ppppuStack_98," in ",4);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0xf;
      ppppuStack_d8 = (undefined8 *****)0x0;
      FUN_140aae180(lVar18,&ppppuStack_d8,1,0);
      pppppuVar14 = &ppppuStack_d8;
      if (0xf < uStack_c0) {
        pppppuVar14 = (undefined8 *****)ppppuStack_d8;
      }
      FUN_140071040(&ppppuStack_98,pppppuVar14,uStack_c8);
      if (0xf < uStack_c0) {
        uVar11 = uStack_c0 + 1;
        pppppuVar14 = (undefined8 *****)ppppuStack_d8;
        if (0xfff < uVar11) {
          uVar11 = uStack_c0 + 0x28;
          pppppuVar14 = (undefined8 *****)ppppuStack_d8[-1];
          if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar14))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        load_supplier_0x15530d0(pppppuVar14,uVar11);
      }
    }
    FUN_140071040(&ppppuStack_98,".",1);
    FUN_140900dc0(lVar1,&ppppuStack_98,*(undefined4 *)(param_1 + 0x440));
    if (0xf < uStack_a0) {
      uVar11 = uStack_a0 + 1;
      pppppuVar14 = (undefined8 *****)ppppuStack_b8;
      if (0xfff < uVar11) {
        uVar11 = uStack_a0 + 0x28;
        pppppuVar14 = (undefined8 *****)ppppuStack_b8[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_b8 + (-8 - (longlong)pppppuVar14))) {
LAB_140215ebf:
          _invalid_parameter_noinfo_noreturn();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      load_supplier_0x15530d0(pppppuVar14,uVar11);
    }
    uStack_a8 = 0;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 ****)((ulonglong)ppppuStack_b8 & 0xffffffffffffff00);
    if (uStack_80 < 0x10) goto override_jmp_140215a4c_case_3;
    uVar11 = uStack_80 + 1;
    pppppuVar14 = (undefined8 *****)ppppuStack_98;
    if (0xfff < uVar11) {
      uVar11 = uStack_80 + 0x28;
      pppppuVar14 = (undefined8 *****)ppppuStack_98[-1];
      if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)pppppuVar14))) {
        _invalid_parameter_noinfo_noreturn(pppppuVar14,uVar11);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
LAB_140215b53:
    load_supplier_0x15530d0(pppppuVar14,uVar11);
    goto override_jmp_140215a4c_case_3;
  case 2:
    iVar5 = *(int *)(param_1 + 0x444);
    if ((iVar5 < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 3) <=
        (ulonglong)(longlong)iVar5)) goto override_jmp_140215a4c_case_3;
    puVar6 = *(ushort **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8);
    uStack_a8 = 10;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 *****)0x2073692073696854;
    uStack_b0 = 0x2061;
    uVar2 = *puVar6;
    if (uVar2 == 1) {
      uVar17 = 6;
      pcVar13 = "local ";
LAB_140215fdb:
      FUN_140071040(&ppppuStack_b8,pcVar13,uVar17);
    }
    else {
      if (uVar2 == 3) {
        uVar17 = 10;
        pcVar13 = "migrating ";
        goto LAB_140215fdb;
      }
      if (uVar2 == 4) {
        uVar17 = 8;
        pcVar13 = "nomadic ";
        goto LAB_140215fdb;
      }
      if (uVar2 == 7) {
        uVar17 = 8;
        pcVar13 = "outcast ";
        goto LAB_140215fdb;
      }
    }
    uVar2 = puVar6[0x4c];
    if (uVar2 != 0xffff) {
      uStack_50 = 0;
      uStack_40 = 0xf;
      uStack_48 = 0;
      ppppuStack_58 = (undefined8 *****)0x0;
      if ((-1 < (short)uVar2) &&
         ((ulonglong)(longlong)(short)uVar2 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
        lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)(short)uVar2 * 8);
        pppppuVar14 = (undefined8 *****)(lVar18 + 0x60);
        if (&ppppuStack_58 != pppppuVar14) {
          if (0xf < *(ulonglong *)(lVar18 + 0x78)) {
            pppppuVar14 = (undefined8 *****)*pppppuVar14;
          }
          FUN_140070f00(&ppppuStack_58,pppppuVar14,*(undefined8 *)(lVar18 + 0x70));
        }
      }
      pppppuVar14 = &ppppuStack_58;
      if (0xf < uStack_40) {
        pppppuVar14 = (undefined8 *****)ppppuStack_58;
      }
      FUN_140071040(&ppppuStack_b8,pppppuVar14,uStack_48);
      FUN_140071040(&ppppuStack_b8," ",1);
      FUN_140070e80(&ppppuStack_58);
    }
    if (*puVar6 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(*puVar6) {
      case 0:
        uVar17 = 0xc;
        pcVar13 = "civilization";
        break;
      case 1:
        uVar17 = 10;
        pcVar13 = "government";
        break;
      case 2:
        uVar17 = 6;
        pcVar13 = "vessel";
        break;
      default:
        uVar17 = 5;
        pcVar13 = "group";
        break;
      case 5:
        uVar17 = 8;
        pcVar13 = "religion";
        break;
      case 6:
        uVar17 = 0x15;
        pcVar13 = "military organization";
        break;
      case 8:
        uVar17 = 0x12;
        pcVar13 = "performance troupe";
        break;
      case 9:
        uVar17 = 0x10;
        pcVar13 = "merchant company";
        break;
      case 10:
        for (puVar15 = *(undefined8 **)(puVar6 + 0x50); puVar15 < *(undefined8 **)(puVar6 + 0x54);
            puVar15 = puVar15 + 1) {
          if (*(int *)*puVar15 == 0) {
            sVar3 = (short)((int *)*puVar15)[1];
            if (sVar3 != -1) {
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0xf;
              ppppuStack_d8 = (undefined8 *****)0x0;
              uStack_90 = 0;
              uStack_88 = 0;
              uStack_80 = 0xf;
              ppppuStack_98 = (undefined8 ****)0x0;
              uStack_1e0 = uStack_1e0 & 0xff00;
              uStack_1e8 = CONCAT31(uStack_1e8._1_3_,1);
              uStack_1f0 = CONCAT22(uStack_1f0._2_2_,0xffff);
              puStack_1f8 = auStack_1b8;
              image_guild_profession(&ppppuStack_d8,&ppppuStack_98,sVar3,_DAT_1423b5afc);
              pppppuVar14 = &ppppuStack_d8;
              if (0xf < uStack_c0) {
                pppppuVar14 = (undefined8 *****)ppppuStack_d8;
              }
              FUN_140071040(&ppppuStack_b8,pppppuVar14,uStack_c8);
              if (0xf < uStack_80) {
                uVar11 = uStack_80 + 1;
                ppppuVar12 = ppppuStack_98;
                if (0xfff < uVar11) {
                  uVar11 = uStack_80 + 0x28;
                  ppppuVar12 = (undefined8 ****)ppppuStack_98[-1];
                  if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)ppppuVar12))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                load_supplier_0x15530d0(ppppuVar12,uVar11);
              }
              uStack_88 = 0;
              uStack_80 = 0xf;
              ppppuStack_98 = (undefined8 ****)((ulonglong)ppppuStack_98 & 0xffffffffffffff00);
              if (uStack_c0 < 0x10) goto LAB_140216268;
              uVar11 = uStack_c0 + 1;
              pppppuVar14 = (undefined8 *****)ppppuStack_d8;
              if (0xfff < uVar11) {
                uVar11 = uStack_c0 + 0x28;
                pppppuVar14 = (undefined8 *****)ppppuStack_d8[-1];
                if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar14))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              load_supplier_0x15530d0(pppppuVar14,uVar11);
              uVar17 = 6;
              pcVar13 = " guild";
              goto LAB_1402162cf;
            }
            break;
          }
        }
        FUN_140071040(&ppppuStack_b8,"craft",5);
LAB_140216268:
        uVar17 = 6;
        pcVar13 = " guild";
      }
LAB_1402162cf:
      FUN_140071040(&ppppuStack_b8,pcVar13,uVar17);
    }
    FUN_140071040(&ppppuStack_b8,".",1);
    FUN_140900dc0(lVar1,&ppppuStack_b8,*(undefined4 *)(param_1 + 0x440));
    pppppuVar14 = &ppppuStack_b8;
    goto LAB_14021668e;
  default:
    goto override_jmp_140215a4c_case_3;
  case 4:
    iVar5 = *(int *)(param_1 + 0x444);
    if ((iVar5 < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x1c0) - *(longlong *)(param_1 + 0x1b8) >> 3) <=
        (ulonglong)(longlong)iVar5)) goto override_jmp_140215a4c_case_3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf;
    ppppuStack_d8 = (undefined8 *****)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 1;
    uStack_1d8 = 0xffffffff;
    uStack_1e0 = 0xffff;
    uStack_1e8 = 0xffffffff;
    uStack_1f0 = CONCAT31(uStack_1f0._1_3_,1);
    puStack_1f8 = (undefined1 *)CONCAT71(puStack_1f8._1_7_,1);
    image_artwork_description
              (0x1423f3970,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar5 * 8),
               &ppppuStack_d8,0);
    FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    break;
  case 6:
    uVar11 = (ulonglong)*(int *)(param_1 + 0x444);
    if ((*(int *)(param_1 + 0x444) < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 2) <= uVar11)
       ) goto override_jmp_140215a4c_case_3;
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x2c8) + uVar11 * 4);
    lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + uVar11 * 4);
    if (iVar5 == -1) {
      lVar9 = *(longlong *)(_DAT_14250eee8 + lVar18 * 8);
      if (*(longlong *)(lVar9 + 0x180) - *(longlong *)(lVar9 + 0x178) >> 3 == 0)
      goto override_jmp_140215a4c_case_3;
      lVar18 = **(longlong **)(*(longlong *)(_DAT_14250eee8 + lVar18 * 8) + 0x178);
      puVar15 = (undefined8 *)(lVar18 + 0x220);
      ppppuStack_d8 = (undefined8 ****)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uVar11 = *(ulonglong *)(lVar18 + 0x230);
      if (0xf < *(ulonglong *)(lVar18 + 0x238)) {
        puVar15 = (undefined8 *)*puVar15;
      }
      if (0x7fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140066ec0();
      }
      if (uVar11 < 0x10) {
        uStack_c0 = 0xf;
        ppppuStack_d8 = (undefined8 ****)*puVar15;
        uStack_d0 = puVar15[1];
        uStack_c8 = uVar11;
      }
      else {
        uVar10 = uVar11 | 0xf;
        uVar16 = 0x7fffffffffffffff;
        if ((uVar10 < 0x8000000000000000) && (uVar16 = uVar10, uVar10 < 0x16)) {
          uVar16 = 0x16;
        }
        ppppuStack_d8 = (undefined8 ****)FUN_140071e00(uVar16 + 1);
        uStack_c8 = uVar11;
        uStack_c0 = uVar16;
        load_supplier_0x155454e(ppppuStack_d8,puVar15,uVar11 + 1);
      }
      FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    }
    else {
      FUN_140070c00(&ppppuStack_d8,
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(_DAT_14250eee8 + lVar18 * 8) + 0x178) +
                     (longlong)iVar5 * 8) + 0x220);
      FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    }
    break;
  case 0xb:
    uVar11 = (ulonglong)*(int *)(param_1 + 0x444);
    if ((-1 < *(int *)(param_1 + 0x444)) &&
       (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 2)))
    {
      sVar3 = *(short *)(*(longlong *)(param_1 + 0x358) + uVar11 * 4);
      sVar4 = *(short *)(*(longlong *)(param_1 + 0x370) + uVar11 * 4);
      uVar11 = (ulonglong)sVar4;
      if (sVar3 == 0xd) {
        if (((-1 < sVar4) && (uVar11 < (ulonglong)(_DAT_14250f280 - _DAT_14250f278 >> 3))) &&
           (lVar18 = *(longlong *)(_DAT_14250f278 + uVar11 * 8), *(longlong *)(lVar18 + 0x288) != 0)
           ) {
          FUN_140900dc0(lVar1,lVar18 + 0x278,*(undefined4 *)(param_1 + 0x440));
        }
      }
      else if (((sVar3 == 0x56) && (-1 < sVar4)) &&
              ((uVar11 < (ulonglong)(_DAT_14250eff8 - _DAT_14250eff0 >> 3) &&
               (lVar18 = *(longlong *)(_DAT_14250eff0 + uVar11 * 8),
               *(longlong *)(lVar18 + 0x198) != 0)))) {
        FUN_140900dc0(lVar1,lVar18 + 0x188,*(undefined4 *)(param_1 + 0x440));
      }
    }
    goto override_jmp_140215a4c_case_3;
  case 0xc:
    iVar5 = *(int *)(param_1 + 0x444);
    if (((iVar5 < 0) ||
        ((ulonglong)(*(longlong *)(param_1 + 0x390) - *(longlong *)(param_1 + 0x388) >> 3) <=
         (ulonglong)(longlong)iVar5)) ||
       (lVar18 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar5 * 8) + 0x90),
       lVar18 == 0)) goto override_jmp_140215a4c_case_3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf;
    ppppuStack_d8 = (undefined8 *****)0x0;
    uStack_1f0 = 0;
    puStack_1f8 = (undefined1 *)((ulonglong)puStack_1f8._1_7_ << 8);
    image_selected_item_description(lVar18,&ppppuStack_d8,1);
    FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
  }
  pppppuVar14 = &ppppuStack_d8;
LAB_14021668e:
  FUN_140070e80(pppppuVar14);
override_jmp_140215a4c_case_3:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_218);
  return;
}

