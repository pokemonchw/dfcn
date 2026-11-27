/* Dwarf Fortress 53.17 steam, PE:6aea05a1:02734000. Ghidra 12.1.4 decompiler output. */

/* Target selection mode of the renderer, from the mode test to the shared epilogue jump. */
  if (*(char *)(param_1 + 1) != '\0') {
    iVar8 = iVar5 + -0x1e;
    iVar26 = iVar5 + 0x1e;
    uVar30 = 0x14;
    uStack_490 = 0x14;
    uVar32 = _DAT_1423efc08 - 5;
    iVar7 = 0x27;
    uStack_494 = uVar32;
    iStack_470 = iVar8;
    iVar6 = sub_140070480(param_1 + 8);
    if ((iVar6 + 2) * 3 < 0x27) {
      iVar7 = sub_140070480(param_1 + 8);
      iVar7 = (iVar7 + 2) * 3;
    }
    uVar23 = uVar30;
    if (iVar7 < iVar35 + -0x18) {
      uVar30 = (uVar32 - iVar7) + 1;
      uStack_490 = uVar30;
      uVar23 = uVar30;
    }
    for (; iVar35 = iVar8, (int)uVar30 <= (int)uVar32; uVar30 = uVar30 + 1) {
      for (; iVar35 <= iVar26; iVar35 = iVar35 + 1) {
        sub_1400bc750(0x14266c870,uVar30,iVar35);
        FUN_1400bc7c0(0x14266c870,0,0);
        if (uVar30 == uVar23) {
          uVar9 = _DAT_14266e194;
          if ((iVar35 != iVar8) && (uVar9 = _DAT_14266e1a0, iVar35 == iVar26)) {
            uVar9 = _DAT_14266e1ac;
          }
        }
        else if (uVar30 == uVar32) {
          uVar9 = _DAT_14266e19c;
          if ((iVar35 != iVar8) && (uVar9 = _DAT_14266e1a8, iVar35 == iVar26)) {
            uVar9 = _DAT_14266e1b4;
          }
        }
        else {
          uVar9 = _DAT_14266e198;
          if ((iVar35 != iVar8) && (uVar9 = _DAT_14266e1b0, iVar35 != iVar26)) {
            uVar9 = _DAT_14266e1a4;
          }
        }
        sub_140af4570(0x14266c870,uVar9);
      }
    }
    iVar35 = 0;
    do {
      puVar25 = (undefined4 *)&DAT_142677068;
      uVar30 = uVar23;
      do {
        uVar30 = uVar30 + 1;
        sub_1400bc750(0x14266c870,uVar30,iVar35 + iVar26 + -0xc);
        if (iVar35 == 0) {
          uVar9 = puVar25[-6];
        }
        else if (iVar35 == 0xb) {
          uVar9 = *puVar25;
        }
        else {
          uVar9 = puVar25[-3];
        }
        sub_140af4570(0x14266c870,uVar9);
        puVar25 = puVar25 + 1;
      } while ((longlong)puVar25 < 0x142677074);
      iVar35 = iVar35 + 1;
    } while (iVar35 < 0xc);
    sub_1400bc760(0x14266c870,7,0,1);
    uVar30 = uStack_490;
    sub_1400bc750(0x14266c870,uStack_490 + 2,iVar5 + 0x15);
    FUN_140069780(auStack_3e0,&UNK_14161a44c /* "Cancel" */);
    FUN_140af3400(0x14266c870,auStack_3e0,0,0);
    sub_140069460(auStack_3e0);
    sub_1400bc760(0x14266c870,7,0,1);
    iVar35 = iStack_470;
    sub_1400bc750(0x14266c870,uVar30 + 2,iStack_470 + 2);
    FUN_140069780(auStack_3e0,&UNK_1416dbf20 /* "Click a creature to start a new conversation" */);
    FUN_140af3400(0x14266c870,auStack_3e0,0,0);
    sub_140069460(auStack_3e0);
    lVar11 = sub_140070480(lStack_478 + 8);
    if (lVar11 != 0) {
      iVar8 = iVar35 + 1;
      iVar6 = iVar5 + 0x1d;
      uVar32 = uVar30 + 4;
      iVar26 = (int)(uStack_494 - uVar32) / 3;
      lVar11 = lStack_478 + 8;
      auStack_480[0] = uVar32;
      iStack_464 = iVar26;
      iVar7 = sub_140070480(lVar11);
      lVar17 = lStack_478;
      if (iVar26 < iVar7) {
        iVar6 = iVar5 + 0x1b;
      }
      uVar23 = *(uint *)(lStack_478 + 0x24);
      iVar5 = sub_140070480(lVar11);
      if (iVar5 - iVar26 < (int)uVar23) {
        iVar5 = sub_140070480(lVar11);
        uVar23 = iVar5 - iVar26;
      }
      uStack_490 = 0;
      if (-1 < (int)uVar23) {
        uStack_490 = uVar23;
      }
      iStack_468 = uStack_490 + iVar26;
      if ((int)uStack_490 < iStack_468) {
        uVar30 = uVar30 + 5;
        iStack_488 = 0x52;
        uStack_494 = uVar30;
        do {
          puVar33 = (undefined8 *)(longlong)(int)uStack_490;
          uStack_3a0 = puVar33;
          puVar12 = (undefined8 *)sub_140070480(lVar11);
          uVar32 = auStack_480[0];
          iVar26 = iStack_464;
          if (puVar12 <= puVar33) break;
          puVar12 = (undefined8 *)sub_140070850(lVar11,puVar33);
          iVar5 = (**(code **)(*(longlong *)*puVar12 + 200))((longlong *)*puVar12,uStack_46c);
          sub_1400bc760(0x14266c870,7,0,1);
          if (iVar8 <= iVar6) {
            iStack_470 = uVar30 - 1;
            uStack_48c = uVar30 + 2;
            iVar26 = iVar8;
            iVar7 = iStack_470;
            uVar32 = uStack_48c;
            do {
              iVar27 = iVar7;
              if (iVar7 < (int)uVar32) {
                puVar25 = (undefined4 *)0x14266e41c;
                iVar31 = uVar30 + 2;
                do {
                  sub_1400bc750(0x14266c870,iVar7,iVar26);
                  if (iVar5 == 0) {
                    if (iVar26 == iVar8) {
                      uVar9 = puVar25[-0x81];
                    }
                    else {
LAB_1408819e9:
                      if (iVar26 == iVar6) {
                        uVar9 = puVar25[-0x7b];
                      }
                      else {
                        uVar9 = puVar25[-0x7e];
                      }
                    }
                  }
                  else if (iVar26 == iVar8) {
                    uVar9 = puVar25[-3];
                  }
                  else if (iVar26 == iVar35 + 2) {
                    uVar9 = *puVar25;
                  }
                  else if (iVar26 == iVar35 + 3) {
                    uVar9 = *puVar25;
                  }
                  else if (iVar26 == iVar35 + 4) {
                    uVar9 = *puVar25;
                  }
                  else {
                    if (iVar26 != iVar35 + 5) goto LAB_1408819e9;
                    uVar9 = puVar25[3];
                  }
                  sub_140af4570(0x14266c870,uVar9);
                  cVar3 = sub_1400735c0(&DAT_1423efbf0,0);
                  if (cVar3 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar7 = iVar7 + 1;
                  puVar25 = puVar25 + 1;
                  uVar30 = uStack_494;
                  iVar27 = iStack_470;
                  uVar32 = uStack_48c;
                } while (iVar7 < iVar31);
              }
              iVar7 = iVar27;
              iVar26 = iVar26 + 1;
              puVar33 = uStack_3a0;
            } while (iVar26 <= iVar6);
          }
          if (iVar5 != 0) {
            sub_1400bc750(0x14266c870,uVar30 - 1,iVar8);
            uStack_4a8 = uStack_4a8 & 0xffffff00;
            iStack_4b0 = 3;
            iStack_4b8 = 5;
            FUN_140af4810(0x14266c870,iVar5,2,2);
          }
          sub_1400bc750(0x14266c870,uVar30,iVar35 + 8);
          FUN_140c511a0(0x1418d0240,iStack_488,3);
          sub_140070cc0(&uStack_420);
          lVar17 = lStack_478;
          lVar11 = lStack_478 + 8;
          puVar33 = (undefined8 *)sub_140070850(lVar11,puVar33);
          (**(code **)(*(longlong *)*puVar33 + 8))((longlong *)*puVar33,&uStack_420);
          sub_1400bc760(0x14266c870,7,0,1);
          sub_1400bc750(0x14266c870,uVar30);
          iVar5 = iVar6 - iVar8;
          uVar13 = sub_140070960(&uStack_420);
          if ((longlong)iVar5 - 0xeU <= uVar13) {
            if (-1 < iVar5 + -0xd) {
              sub_1400e2860(&uStack_420,(longlong)iVar5 + -0xd);
            }
            lVar17 = lStack_478;
            uVar30 = uStack_494;
            if (3 < iVar5 + -0xd) {
              puVar14 = (undefined1 *)sub_1400fcbe0(&uStack_420,(longlong)iVar5 + -0x10);
              *puVar14 = 0x2e;
              puVar14 = (undefined1 *)sub_1400fcbe0(&uStack_420,(longlong)(iVar5 + -0xf));
              *puVar14 = 0x2e;
              puVar14 = (undefined1 *)sub_1400fcbe0(&uStack_420,(longlong)iVar5 - 0xeU);
              *puVar14 = 0x2e;
              lVar17 = lStack_478;
              uVar30 = uStack_494;
            }
          }
          FUN_140af3400(0x14266c870,&uStack_420,0,0);
          uVar30 = uVar30 + 3;
          uStack_494 = uVar30;
          sub_140069460(&uStack_420);
          uStack_490 = uStack_490 + 1;
          iStack_488 = iStack_488 + 1;
          uVar32 = auStack_480[0];
          iVar26 = iStack_464;
        } while ((int)uStack_490 < iStack_468);
      }
      iVar35 = sub_140070480(lVar11);
      if (iVar26 < iVar35) {
        sub_1400bc990(auStack_3e0);
        iVar35 = sub_140070480(lVar11);
        uStack_4a8 = uVar32 + iVar26 * 3 + -2;
        iStack_4b0 = uVar32 + 1;
        iStack_4b8 = iVar26;
        sub_1400bc9b0(auStack_3e0,*(undefined4 *)(lVar17 + 0x24),0,iVar35 + -1);
        iStack_4b0 = 0;
        iStack_4b8 = CONCAT31(iStack_4b8._1_3_,*(undefined1 *)(lVar17 + 0x20));
        FUN_1414284b0(auStack_3e0,uStack_454,uStack_458,iVar6 + 1);
      }
    }
    goto LAB_140887065;
  }

/* adventure_option_talk_new_conversationst, vtable + 8. Native literal operands in instruction order:
 * 6d0bbf: "Start new conversation with "
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406d0b90(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _s_2_____1418be040 ^ (ulonglong)auStack_58;
  FUN_140070f00(param_2,&UNK_141694310 /* "Start new conversation with " */,0x1c);
  uStack_30 = 0;
  uVar8 = 0;
  uStack_28 = 0;
  uStack_20 = 0xf;
  pppuStack_38 = (undefined8 ****)0x0;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar9 = (ulonglong)uVar1;
  if ((uVar1 != 0xffffffff) && (iVar12 = (int)(_DAT_142407538 - _DAT_142407530 >> 3), iVar12 != 0))
  {
    iVar12 = iVar12 + -1;
    uVar10 = uVar8;
    uVar11 = uVar8;
    if (-1 < iVar12) {
      do {
        iVar5 = (int)uVar11 + iVar12 >> 1;
        uVar10 = *(ulonglong *)(_DAT_142407530 + (longlong)iVar5 * 8);
        uVar2 = *(uint *)(uVar10 + 0x130);
        if (uVar2 == uVar1) break;
        iVar6 = iVar5 + -1;
        if ((int)uVar2 < (int)uVar1) {
          uVar11 = (ulonglong)(iVar5 + 1);
          iVar6 = iVar12;
        }
        iVar12 = iVar6;
        uVar10 = uVar8;
      } while ((int)uVar11 <= iVar12);
    }
    if (uVar10 != 0) {
      FUN_141349e10(uVar10,&pppuStack_38);
      goto LAB_1406d0cdc;
    }
  }
  iVar12 = *(int *)(param_1 + 0x14);
  if (((iVar12 != -1) && (lVar4 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar4 != 0)) &&
     (iVar5 = (int)lVar4 + -1, -1 < iVar5)) {
    do {
      iVar6 = iVar5 + (int)uVar8 >> 1;
      uVar9 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar6 * 8);
      if (*(int *)(uVar9 + 0xe0) == iVar12) goto LAB_1406d0d3e;
      iVar3 = iVar6 + -1;
      if (*(int *)(uVar9 + 0xe0) < iVar12) {
        uVar8 = (ulonglong)(iVar6 + 1);
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while ((int)uVar8 <= iVar5);
  }
LAB_1406d0cbf:
  uStack_30 = uStack_30 & 0xffffffffffffff00;
  pppuStack_38 = (undefined8 ****)0x64696f5620656874; /* "the Void" in the native string. */
  uStack_28 = 8;
LAB_1406d0cdc:
  do {
    ppppuVar7 = &pppuStack_38;
    if (0xf < uStack_20) {
      ppppuVar7 = (undefined8 ****)pppuStack_38;
    }
    FUN_140071040(param_2,ppppuVar7,uStack_28);
    if (uStack_20 < 0x10) goto LAB_1406d0db3;
    uVar8 = uStack_20 + 1;
    ppppuVar7 = (undefined8 ****)pppuStack_38;
    if (uVar8 < 0x1000) {
LAB_1406d0dae:
      sub_1415530d0(ppppuVar7,uVar8);
LAB_1406d0db3:
      FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
      return;
    }
    uVar8 = uStack_20 + 0x28;
    ppppuVar7 = (undefined8 ****)pppuStack_38[-1];
    if ((ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar7)) < 0x20) goto LAB_1406d0dae;
    _invalid_parameter_noinfo_noreturn();
LAB_1406d0d3e:
    if (uVar9 == 0) goto LAB_1406d0cbf;
    if (((*(longlong *)(uVar9 + 0x130) == 0) ||
        (lVar4 = *(longlong *)(*(longlong *)(uVar9 + 0x130) + 0x58), lVar4 == 0)) ||
       ((*(int *)(lVar4 + 0x30) == -1 || (lVar4 = FUN_140073ba0(0x14250a168), lVar4 == 0)))) {
      lVar4 = uVar9 + 0x38;
    }
    else {
      lVar4 = FUN_140c521e0(lVar4);
    }
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0x72) == '\0')) goto LAB_1406d0cbf;
    FUN_140aae180(lVar4,&pppuStack_38,1,0);
  } while( true );
}

/* adventure_option_talk_existing_conversationst, vtable + 8. Native literal operands in instruction order:
 * 6d06aa: "Continue shouting"
 * 6d06c1: "Continue conversation with "
 * 6d07d3: ", "
 * 6d089f: ", "
 * 6d08b9: " and "
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406d0670(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _s_2_____1418be040 ^ (ulonglong)auStack_68;
  lVar9 = *(longlong *)(param_1 + 0x18);
  if ((*(byte *)(lVar9 + 0x16c) & 2) == 0) {
    FUN_140070f00();
    puVar2 = *(undefined8 **)(lVar9 + 0x50);
    puVar6 = *(undefined8 **)(lVar9 + 0x48);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    uStack_48 = 0;
    iVar7 = (int)((longlong)puVar2 - (longlong)puVar6 >> 3) + -1;
LAB_1406d0700:
    if (puVar2 <= puVar6) goto LAB_1406d08d7;
    iVar1 = *(int *)*puVar6;
    if (iVar1 != *(int *)(_DAT_142407590 + 0x130)) {
      iVar10 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
      if ((iVar10 != 0) && (iVar1 != -1)) {
        iVar8 = 0;
        iVar10 = iVar10 + -1;
        if (-1 < iVar10) {
          do {
            iVar5 = iVar8 + iVar10 >> 1;
            lVar9 = *(longlong *)(_DAT_142407530 + (longlong)iVar5 * 8);
            if (*(int *)(lVar9 + 0x130) == iVar1) goto LAB_1406d0795;
            iVar4 = iVar5 + -1;
            if (*(int *)(lVar9 + 0x130) < iVar1) {
              iVar4 = iVar10;
              iVar8 = iVar5 + 1;
            }
            iVar10 = iVar4;
          } while (iVar8 <= iVar10);
        }
        lVar9 = 0;
LAB_1406d0795:
        if (lVar9 == 0) goto LAB_1406d07eb;
        FUN_141349e10(lVar9,&uStack_48);
        FUN_140071040();
        if (iVar7 + -1 < 2) {
LAB_1406d08b7:
          iVar7 = iVar7 + -1;
          if (iVar7 == 1) {
            FUN_140071040();
          }
          goto LAB_1406d08ce;
        }
        FUN_140071040();
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
        goto LAB_1406d0700;
      }
LAB_1406d07eb:
      iVar1 = ((int *)*puVar6)[1];
      lVar9 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
      if ((lVar9 != 0) && (iVar1 != -1)) {
        iVar8 = 0;
        iVar10 = (int)lVar9 + -1;
        if (iVar10 < 0) goto LAB_1406d08ce;
        do {
          iVar4 = iVar10 + iVar8 >> 1;
          lVar9 = *(longlong *)(_DAT_14251c198 + (longlong)iVar4 * 8);
          iVar5 = *(int *)(lVar9 + 0xe0);
          if (iVar5 == iVar1) {
            if (lVar9 == 0) goto LAB_1406d08ce;
            FUN_140aae180(lVar9 + 0x38,&uStack_48,CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1),0);
            FUN_140071040();
            if (iVar7 + -1 < 2) goto LAB_1406d08b7;
            FUN_140071040();
            puVar6 = puVar6 + 1;
            iVar7 = iVar7 + -1;
            goto LAB_1406d0700;
          }
          iVar3 = iVar4 + -1;
          if (iVar5 < iVar1) {
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
          if (iVar5 <= iVar1) {
            iVar8 = iVar4 + 1;
          }
        } while (iVar8 <= iVar10);
        puVar6 = puVar6 + 1;
        goto LAB_1406d0700;
      }
    }
LAB_1406d08ce:
    puVar6 = puVar6 + 1;
    goto LAB_1406d0700;
  }
  FUN_140070f00(param_2,&UNK_141694358 /* "Continue shouting" */,0x11);
LAB_1406d08e1:
  FUN_1415530b0(uStack_28 ^ (ulonglong)auStack_68);
  return;
LAB_1406d08d7:
  FUN_140070e80(&uStack_48);
  goto LAB_1406d08e1;
}

/* adventure_option_start_shoutingst, vtable + 8. Native literal operands in instruction order:
 * 6d0f89: "Shout out to everybody"
 */
void talk_start_shouting(undefined8 param_1,undefined8 param_2)

{
  FUN_140070f00(param_2,&UNK_1416942f8 /* "Shout out to everybody" */,0x16);
  return;
}

/* adventure_option_assume_identityst, vtable + 8. Native literal operands in instruction order:
 * 6d0fa9: "Assume an identity"
 */
void talk_assume_identity(undefined8 param_1,undefined8 param_2)

{
  FUN_140070f00(param_2,&UNK_1416942e0 /* "Assume an identity" */,0x12);
  return;
}

/* Candidate list builder 0x8b6ca0. */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b6ca0(undefined8 param_1,longlong param_2,short param_3,short param_4,short param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *apuStack_48 [2];
  
  FUN_140e9d2e0(0x142528500);
  cVar5 = FUN_140e9caa0();
  if ((cVar5 != '\0') &&
     (((uVar8 = sub_140069640(0x1423f3970,param_3), (uVar8 & 0x10) != 0 ||
       (uVar8 = sub_140069640(0x1423f3970,param_3), (uVar8 & 8) != 0)) &&
      (iVar7 = 0, _DAT_142407550 - _DAT_142407548 >> 3 != 0)))) {
    lVar13 = 0;
    do {
      if ((((*(longlong *)(lVar13 + _DAT_142407548) != _DAT_142407590) &&
           ((*(byte *)(*(longlong *)(lVar13 + _DAT_142407548) + 0x110) & 2) == 0)) &&
          ((cVar5 = FUN_141405bf0(), plVar4 = _DAT_142505ca8, cVar5 != '\0' &&
           ((lVar1 = *(longlong *)(lVar13 + _DAT_142407548), *(short *)(lVar1 + 0xa8) == param_3 &&
            (*(short *)(lVar1 + 0xaa) == param_4)))))) &&
         (plVar12 = _DAT_142505ca0, *(short *)(lVar1 + 0xac) == param_5)) {
        for (; plVar12 < plVar4; plVar12 = plVar12 + 1) {
          lVar1 = *plVar12;
          plVar2 = *(longlong **)(lVar1 + 0x10);
          for (plVar11 = *(longlong **)(lVar1 + 8); plVar11 < plVar2; plVar11 = plVar11 + 1) {
            sVar6 = (*(code *)**(undefined8 **)*plVar11)();
            if ((((sVar6 == 7) &&
                 (plVar3 = (longlong *)*plVar11, (*(byte *)((longlong)plVar3 + 0x14) & 1) == 0)) &&
                (cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar5 == '\0')) &&
               ((*(byte *)((longlong)plVar3 + 0x16c) & 2) == 0)) {
              puVar10 = (undefined8 *)plVar3[9];
              for (puVar9 = puVar10; puVar9 < (undefined8 *)plVar3[10]; puVar9 = puVar9 + 1) {
                if (*(int *)*puVar9 == *(int *)(_DAT_142407590 + 0x130)) goto LAB_1408b6e81;
              }
            }
LAB_1408b6e9f:
          }
        }
        apuStack_48[0] = (undefined8 *)FUN_1415530e0(0x18);
        *(undefined8 *)((longlong)apuStack_48[0] + 0xc) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)apuStack_48[0] + 0x14) = 0xffffffff;
        *(undefined4 *)(apuStack_48[0] + 1) = 0;
        *apuStack_48[0] = &UNK_1416ce618;
        *(undefined4 *)(apuStack_48[0] + 2) =
             *(undefined4 *)(*(longlong *)(lVar13 + _DAT_142407548) + 0x130);
        *(undefined4 *)((longlong)apuStack_48[0] + 0x14) =
             *(undefined4 *)(*(longlong *)(lVar13 + _DAT_142407548) + 0xc30);
        puVar10 = *(undefined8 **)(param_2 + 8);
        if (puVar10 == *(undefined8 **)(param_2 + 0x10)) {
LAB_1408b6f7a:
          FUN_1400bc360(param_2,puVar10,apuStack_48);
        }
        else {
          *puVar10 = apuStack_48[0];
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 8;
        }
      }
LAB_1408b6f9f:
      lVar13 = lVar13 + 8;
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
  }
  return;
LAB_1408b6e81:
  if ((undefined8 *)plVar3[10] <= puVar10) goto LAB_1408b6e9f;
  if (*(int *)*puVar10 == *(int *)(*(longlong *)(lVar13 + _DAT_142407548) + 0x130)) {
    apuStack_48[0] = (undefined8 *)FUN_1415530e0(0x20);
    *(undefined4 *)(apuStack_48[0] + 1) = 0;
    *(undefined4 *)((longlong)apuStack_48[0] + 0xc) = 0xffffffff;
    *apuStack_48[0] = &UNK_1416d6230;
    apuStack_48[0][2] = lVar1;
    apuStack_48[0][3] = plVar3;
    puVar10 = *(undefined8 **)(param_2 + 8);
    if (puVar10 == *(undefined8 **)(param_2 + 0x10)) goto LAB_1408b6f7a;
    *puVar10 = apuStack_48[0];
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 8;
    goto LAB_1408b6f9f;
  }
  puVar10 = puVar10 + 1;
  goto LAB_1408b6e81;
}

/* Candidate list builder 0x8b7000. */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b7000(undefined2 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  short sVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *****pppppuVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined2 *puVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined1 auStack_138 [32];
  char cStack_118;
  char cStack_117;
  longlong *plStack_110;
  char cStack_108;
  undefined8 uStack_100;
  undefined2 *puStack_f8;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e2;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  undefined8 *puStack_80;
  undefined8 ****ppppuStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _s_2_____1418be040 ^ (ulonglong)auStack_138;
  puStack_f8 = param_1;
  FUN_1408778e0(0x1418ca3b0,0);
  if ((*(byte *)(_DAT_142407590 + 0x110) & 2) != 0) goto LAB_1408b7c90;
  sVar11 = *(short *)(_DAT_142407590 + 300);
  uVar14 = (ulonglong)*(short *)(_DAT_142407590 + 0xa4);
  if ((((*(short *)(_DAT_142407590 + 0xa4) < 0) ||
       ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar14)) || (sVar11 < 0)) ||
     (lVar19 = *(longlong *)(_DAT_14250eee8 + uVar14 * 8), lVar15 = *(longlong *)(lVar19 + 0x178),
     (ulonglong)(*(longlong *)(lVar19 + 0x180) - lVar15 >> 3) <= (ulonglong)(longlong)sVar11)) {
LAB_1408b7b49:
    if (_DAT_1418be238 == 0) {
      bVar4 = DAT_1423b35d8 & 0x70;
    }
    else {
      bVar4 = DAT_1423b35d8 & 8;
    }
    if (bVar4 != 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0xf;
      ppppuStack_78 = (undefined8 *****)0x0;
      FUN_140abd670(uVar14,&ppppuStack_78,0);
      uStack_50 = 0;
      uStack_48 = 2;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ***)(ulonglong)(ushort)s_A_1416088fc._0_2_;
      pppppuVar16 = &ppppuStack_78;
      if (0xf < uStack_60) {
        pppppuVar16 = (undefined8 *****)ppppuStack_78;
      }
      FUN_140071040(&pppuStack_58,pppppuVar16,uStack_68);
      FUN_140071040(&pppuStack_58,&UNK_1416de868 /* " cannot speak." */,0xe);
      uStack_dc = 0;
      uStack_d8 = 0x8ad08ad0;
      uStack_d4 = 0x8ad0;
      uStack_d0 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0xffffffffffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0;
      uStack_a8 = 0xffffffff;
      uStack_e8 = 0x6012e;
      uStack_e4 = 0;
      uStack_cc = 0;
      uStack_e2 = *(undefined4 *)(_DAT_142407590 + 0xa8);
      uStack_de = *(undefined2 *)(_DAT_142407590 + 0xac);
      lStack_c8 = _DAT_142407590;
      FUN_1400e5250(0x142505cd0,&pppuStack_58,&uStack_e8);
      FUN_140070e80(&pppuStack_58);
      pppppuVar16 = &ppppuStack_78;
LAB_1408b7c84:
      FUN_140070e80(pppppuVar16);
    }
  }
  else {
    lVar19 = *(longlong *)(lVar15 + (longlong)sVar11 * 8);
    if ((*(int *)(lVar19 + 0x6b0) < 8) || ((*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 7) & 2) == 0))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1408b7b49;
    if (*(longlong *)(_DAT_142407590 + 0xd80) == 0) {
      if ((*(int *)(_DAT_142407590 + 0x1280) < 8) ||
         ((*(byte *)(*(longlong *)(_DAT_142407590 + 0x1278) + 7) & 2) == 0)) {
        if (((*(uint *)(_DAT_142407590 + 0x82c) & 0x1000000) == 0) &&
           ((*(uint *)(_DAT_142407590 + 0x828) & 0x1000000) != 0)) goto LAB_1408b7155;
      }
      else if ((*(uint *)(_DAT_142407590 + 0x82c) & 0x1000000) == 0) {
LAB_1408b7155:
        iVar29 = *(int *)(_DAT_142407590 + 0xd98);
        if (iVar29 == -1) {
          iVar29 = 0;
          if (_DAT_142505cf0 - _DAT_142505ce8 >> 3 != 0) {
            lVar19 = 0;
            do {
              *(undefined4 *)(*(longlong *)(lVar19 + _DAT_142505ce8) + 0x2c) = 0;
              iVar29 = iVar29 + 1;
              lVar19 = lVar19 + 8;
            } while ((ulonglong)(longlong)iVar29 < (ulonglong)(_DAT_142505cf0 - _DAT_142505ce8 >> 3)
                    );
          }
          _DAT_14250a090 = _DAT_14250a090 | 5;
          plStack_110 = _DAT_142505ca8;
          for (plStack_98 = _DAT_142505ca0; plVar25 = plStack_110, plStack_98 < plStack_110;
              plStack_98 = plStack_98 + 1) {
            lStack_88 = *plStack_98;
            puVar18 = *(undefined8 **)(lStack_88 + 8);
            puVar30 = *(undefined8 **)(lStack_88 + 0x10);
            puStack_80 = puVar30;
LAB_1408b73a7:
            if (puVar18 < puVar30) {
              sVar11 = (*(code *)**(undefined8 **)*puVar18)();
              if (((sVar11 == 7) &&
                  (plVar25 = (longlong *)*puVar18, plStack_90 = plVar25,
                  (*(byte *)((longlong)plVar25 + 0x14) & 1) == 0)) &&
                 (cVar10 = (**(code **)(*plVar25 + 0x20))(plVar25), cVar10 == '\0')) {
                bVar5 = false;
                uStack_100 = (longlong *)
                             (CONCAT44(uStack_100._4_4_,
                                       CONCAT31((uint3)(*(uint *)((longlong)plVar25 + 0x16c) >> 9),
                                                (char)(*(uint *)((longlong)plVar25 + 0x16c) >> 1)))
                             & 0xffffffffffffff01);
                puVar21 = (undefined8 *)plVar25[9];
                puVar1 = (undefined8 *)plVar25[10];
                uVar14 = 0;
                cStack_118 = '\0';
                cStack_117 = '\0';
LAB_1408b7412:
                puVar30 = puStack_80;
                lVar19 = lStack_88;
                if (puVar21 < puVar1) {
                  iVar29 = *(int *)*puVar21;
                  if (iVar29 == *(int *)(_DAT_142407590 + 0x130)) {
                    cStack_118 = '\x01';
                    puVar21 = puVar21 + 1;
                  }
                  else {
                    iVar28 = ((int *)*puVar21)[1];
                    if (((iVar28 != -1) &&
                        (lVar19 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar19 != 0)) &&
                       (iVar17 = (int)lVar19 + -1, uVar27 = uVar14, -1 < iVar17)) {
                      do {
                        iVar13 = iVar17 + (int)uVar27 >> 1;
                        lVar19 = *(longlong *)(_DAT_14251c198 + (longlong)iVar13 * 8);
                        if (*(int *)(lVar19 + 0xe0) == iVar28) {
                          if (((lVar19 != 0) && (0 < *(int *)(lVar19 + 0xd0))) &&
                             ((**(byte **)(lVar19 + 200) & 4) != 0)) {
                            cStack_117 = '\x01';
                            puVar21 = puVar21 + 1;
                            goto LAB_1408b7412;
                          }
                          break;
                        }
                        iVar9 = iVar13 + -1;
                        if (*(int *)(lVar19 + 0xe0) < iVar28) {
                          uVar27 = (ulonglong)(iVar13 + 1);
                          iVar9 = iVar17;
                        }
                        iVar17 = iVar9;
                      } while ((int)uVar27 <= iVar17);
                    }
                    iVar28 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
                    if ((iVar28 != 0) && (iVar29 != -1)) {
                      iVar28 = iVar28 + -1;
                      uVar20 = uVar14;
                      uVar27 = uVar14;
                      if (-1 < iVar28) {
                        do {
                          iVar13 = iVar28 + (int)uVar20 >> 1;
                          uVar27 = *(ulonglong *)(_DAT_142407530 + (longlong)iVar13 * 8);
                          iVar17 = *(int *)(uVar27 + 0x130);
                          if (iVar17 == iVar29) break;
                          if (iVar17 < iVar29) {
                            uVar20 = (ulonglong)(iVar13 + 1);
                          }
                          iVar13 = iVar13 + -1;
                          if (iVar17 <= iVar29) {
                            iVar13 = iVar28;
                          }
                          iVar28 = iVar13;
                          uVar27 = uVar14;
                        } while ((int)uVar20 <= iVar28);
                      }
                      if (((uVar27 != 0) && ((*(byte *)(uVar27 + 0x110) & 2) == 0)) &&
                         (cVar10 = FUN_141405bf0(_DAT_142407590,uVar27), cVar10 != '\0')) {
                        bVar5 = true;
                      }
                    }
                    puVar21 = puVar21 + 1;
                  }
                  goto LAB_1408b7412;
                }
                if ((cStack_118 != '\0') &&
                   (((bVar5 || (cStack_117 != '\0')) || ((char)uStack_100 != '\0')))) {
                  uStack_100 = (longlong *)FUN_1415530e0(0x20);
                  *(undefined4 *)(uStack_100 + 1) = 0;
                  *(undefined4 *)((longlong)uStack_100 + 0xc) = 0xffffffff;
                  *uStack_100 = (longlong)&UNK_1416d6230;
                  uStack_100[2] = lVar19;
                  uStack_100[3] = (longlong)plStack_90;
                  puVar21 = *(undefined8 **)(puStack_f8 + 8);
                  plStack_90 = uStack_100;
                  if (puVar21 == *(undefined8 **)(puStack_f8 + 0xc)) {
                    FUN_1400bc360(puStack_f8 + 4,puVar21,&plStack_90);
                    puVar18 = puVar18 + 1;
                  }
                  else {
                    *puVar21 = uStack_100;
                    *(longlong *)(puStack_f8 + 8) = *(longlong *)(puStack_f8 + 8) + 8;
                    puVar18 = puVar18 + 1;
                  }
                  goto LAB_1408b73a7;
                }
              }
              puVar18 = puVar18 + 1;
              goto LAB_1408b73a7;
            }
          }
          bVar5 = false;
          for (plVar24 = _DAT_142505ca0; plVar24 < plVar25; plVar24 = plVar24 + 1) {
            plVar23 = *(longlong **)(*plVar24 + 0x10);
            for (plVar22 = *(longlong **)(*plVar24 + 8); plVar22 < plVar23; plVar22 = plVar22 + 1) {
              sVar11 = (*(code *)**(undefined8 **)*plVar22)();
              if (((sVar11 == 7) &&
                  (plVar2 = (longlong *)*plVar22, (*(byte *)((longlong)plVar2 + 0x14) & 1) == 0)) &&
                 ((cVar10 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar10 == '\0' &&
                  ((*(byte *)((longlong)plVar2 + 0x16c) & 2) != 0)))) {
                for (puVar18 = (undefined8 *)plVar2[9]; puVar18 < (undefined8 *)plVar2[10];
                    puVar18 = puVar18 + 1) {
                  if (*(int *)*puVar18 == *(int *)(_DAT_142407590 + 0x130)) {
                    bVar5 = true;
                    break;
                  }
                }
              }
            }
          }
          puVar26 = puStack_f8;
          if (!bVar5) {
            plStack_110 = (longlong *)FUN_1415530e0(0x10);
            puVar26 = puStack_f8;
            *(undefined4 *)(plStack_110 + 1) = 0;
            *(undefined4 *)((longlong)plStack_110 + 0xc) = 0xffffffff;
            *plStack_110 = (longlong)&UNK_1416d67f8;
            puVar18 = *(undefined8 **)(puStack_f8 + 8);
            if (puVar18 == *(undefined8 **)(puStack_f8 + 0xc)) {
              FUN_1400bc360(puStack_f8 + 4,puVar18,&plStack_110);
            }
            else {
              *puVar18 = plStack_110;
              *(longlong *)(puStack_f8 + 8) = *(longlong *)(puStack_f8 + 8) + 8;
            }
          }
          iVar29 = *(int *)(_DAT_142407590 + 0xc30);
          lVar19 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
          if ((lVar19 != 0) && (iVar29 != -1)) {
            iVar17 = 0;
            iVar28 = (int)lVar19 + -1;
            if (-1 < iVar28) {
              do {
                iVar13 = iVar28 + iVar17 >> 1;
                lVar19 = *(longlong *)(_DAT_14251c198 + (longlong)iVar13 * 8);
                if (*(int *)(lVar19 + 0xe0) == iVar29) {
                  if ((lVar19 != 0) &&
                     (iVar29 = (int)(*(longlong *)(lVar19 + 0x120) - *(longlong *)(lVar19 + 0x118)
                                    >> 3) + -1, plVar25 = (longlong *)(longlong)iVar29,
                     puVar26 = puStack_f8, uStack_100 = plVar25, -1 < iVar29)) {
                    do {
                      uStack_100 = plVar25;
                      sVar11 = (**(code **)**(undefined8 **)
                                             (*(longlong *)(lVar19 + 0x118) + (longlong)plVar25 * 8)
                               )();
                      plVar24 = _DAT_142505ca8;
                      if (sVar11 == 4) {
                        iVar29 = *(int *)(*(longlong *)
                                           (*(longlong *)(lVar19 + 0x118) + (longlong)plVar25 * 8) +
                                         8);
                        lVar15 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
                        if ((lVar15 != 0) && (iVar29 != -1)) {
                          iVar17 = 0;
                          iVar28 = (int)lVar15 + -1;
                          if (-1 < iVar28) {
                            do {
                              iVar13 = iVar28 + iVar17 >> 1;
                              lVar15 = *(longlong *)(_DAT_14251c198 + (longlong)iVar13 * 8);
                              if (*(int *)(lVar15 + 0xe0) == iVar29) {
                                if (((lVar15 != 0) && (0 < *(int *)(lVar15 + 0xd0))) &&
                                   (plVar22 = _DAT_142505ca0, (**(byte **)(lVar15 + 200) & 4) != 0))
                                {
                                  for (; plVar22 < plVar24; plVar22 = plVar22 + 1) {
                                    plVar2 = *(longlong **)(*plVar22 + 0x10);
                                    for (plVar23 = *(longlong **)(*plVar22 + 8); plVar23 < plVar2;
                                        plVar23 = plVar23 + 1) {
                                      sVar11 = (*(code *)**(undefined8 **)*plVar23)();
                                      if (((sVar11 == 7) &&
                                          (plVar3 = (longlong *)*plVar23,
                                          (*(byte *)((longlong)plVar3 + 0x14) & 1) == 0)) &&
                                         (cVar10 = (**(code **)(*plVar3 + 0x20))(plVar3),
                                         cVar10 == '\0')) {
                                        plVar12 = (longlong *)plVar3[9];
                                        for (plVar25 = plVar12; plVar25 < (longlong *)plVar3[10];
                                            plVar25 = plVar25 + 1) {
                                          if (*(int *)*plVar25 == *(int *)(_DAT_142407590 + 0x130))
                                          goto LAB_1408b78f0;
                                        }
                                      }
LAB_1408b790b:
                                    }
                                  }
                                  plStack_110 = (longlong *)FUN_1415530e0(0x18);
                                  *(undefined4 *)(plStack_110 + 1) = 0;
                                  *(undefined8 *)((longlong)plStack_110 + 0xc) = 0xffffffffffffffff;
                                  *plStack_110 = (longlong)&UNK_1416ce618;
                                  *(undefined4 *)((longlong)plStack_110 + 0x14) = 0xffffffff;
                                  *(undefined4 *)((longlong)plStack_110 + 0x14) =
                                       *(undefined4 *)(lVar15 + 0xe0);
                                  puVar18 = *(undefined8 **)(puStack_f8 + 8);
                                  if (puVar18 == *(undefined8 **)(puStack_f8 + 0xc)) {
                                    FUN_1400bc360(puStack_f8 + 4,puVar18,&plStack_110);
                                    plVar25 = uStack_100;
                                  }
                                  else {
                                    *puVar18 = plStack_110;
                                    *(longlong *)(puStack_f8 + 8) =
                                         *(longlong *)(puStack_f8 + 8) + 8;
                                    plVar25 = uStack_100;
                                  }
                                }
                                break;
                              }
                              iVar9 = iVar13 + -1;
                              if (*(int *)(lVar15 + 0xe0) < iVar29) {
                                iVar9 = iVar28;
                                iVar17 = iVar13 + 1;
                              }
                              iVar28 = iVar9;
                            } while (iVar17 <= iVar28);
                          }
                        }
                      }
LAB_1408b7988:
                      plVar25 = (longlong *)((longlong)plVar25 + -1);
                      puVar26 = puStack_f8;
                      uStack_100 = plVar25;
                    } while (-1 < (longlong)plVar25);
                  }
                  break;
                }
                iVar9 = iVar13 + -1;
                if (*(int *)(lVar19 + 0xe0) < iVar29) {
                  iVar17 = iVar13 + 1;
                  iVar9 = iVar28;
                }
                iVar28 = iVar9;
              } while (iVar17 <= iVar28);
            }
          }
          plStack_110 = (longlong *)FUN_1415530e0(0x10);
          *(undefined4 *)(plStack_110 + 1) = 0;
          *(undefined4 *)((longlong)plStack_110 + 0xc) = 0xffffffff;
          *plStack_110 = (longlong)&UNK_1416ceab8;
          puVar18 = *(undefined8 **)(puVar26 + 8);
          if (puVar18 == *(undefined8 **)(puVar26 + 0xc)) {
            FUN_1400bc360(puVar26 + 4,puVar18,&plStack_110);
          }
          else {
            *puVar18 = plStack_110;
            *(longlong *)(puVar26 + 8) = *(longlong *)(puVar26 + 8) + 8;
          }
          if ((*(longlong *)(puVar26 + 8) - *(longlong *)(puVar26 + 4) >> 3 != 0) &&
             (*puVar26 = 0x101, DAT_1418c9608 == '\0')) {
            FUN_1400bc210(&plStack_110,0x1423bbf38,0x3d);
            plStack_98._0_4_ = -1;
            plStack_98 = (longlong *)0xffffffff;
            iVar29 = (int)plStack_98;
            if (cStack_108 != '\0') {
              iVar29 = (int)plStack_110;
            }
            if (iVar29 == -1) {
              FUN_1401f4fb0(&DAT_1418c9608,0x3d);
            }
          }
        }
        else if ((-1 < iVar29) &&
                ((ulonglong)(longlong)iVar29 <
                 (ulonglong)
                 (*(longlong *)(*(longlong *)(_DAT_142407590 + 0x5f8) + 0x38) -
                  *(longlong *)(*(longlong *)(_DAT_142407590 + 0x5f8) + 0x30) >> 3))) {
          iVar28 = 0;
          if (_DAT_142505cf0 - _DAT_142505ce8 >> 3 != 0) {
            lVar19 = 0;
            do {
              *(undefined4 *)(*(longlong *)(lVar19 + _DAT_142505ce8) + 0x2c) = 0;
              iVar28 = iVar28 + 1;
              lVar19 = lVar19 + 8;
            } while ((ulonglong)(longlong)iVar28 < (ulonglong)(_DAT_142505cf0 - _DAT_142505ce8 >> 3)
                    );
          }
          if (_DAT_1418be238 == 0) {
            bVar4 = DAT_1423b3478 & 0x70;
          }
          else {
            bVar4 = DAT_1423b3478 & 8;
          }
          if (bVar4 != 0) {
            lVar19 = *(longlong *)
                      (*(longlong *)(*(longlong *)(_DAT_142407590 + 0x5f8) + 0x30) +
                      (longlong)iVar29 * 8);
            uStack_68 = 9;
            uStack_60 = 0xf;
            ppppuStack_78 = (undefined8 ****)s_You_must_1416d7750._0_8_;
            uStack_70 = (ulonglong)(byte)s_You_must_1416d7750[8];
            puVar18 = (undefined8 *)(lVar19 + 0x160);
            if (0xf < *(ulonglong *)(lVar19 + 0x178)) {
              puVar18 = (undefined8 *)*puVar18;
            }
            FUN_140071040(&ppppuStack_78,puVar18,*(undefined8 *)(lVar19 + 0x170));
            FUN_1414011c0(_DAT_142407590,&ppppuStack_78);
            FUN_140071040(&ppppuStack_78,&UNK_141603844,1);
            uStack_e2 = 0x8ad08ad0;
            uStack_de = 0x8ad0;
            uStack_dc = 0;
            uStack_d8 = 0x8ad08ad0;
            uStack_d4 = 0x8ad0;
            uStack_d0 = 0;
            lStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0xffffffffffffffff;
            uStack_b0 = 0xffffffff;
            uStack_ac = 0;
            uStack_a8 = 0xffffffff;
            uStack_e8 = 0x600d6;
            uStack_e4 = 1;
            uStack_cc = 0;
            FUN_1400e5250(0x142505cd0,&ppppuStack_78,&uStack_e8);
            _DAT_14250a090 = _DAT_14250a090 | 4;
            FUN_140070e80(&ppppuStack_78);
          }
        }
        goto LAB_1408b7c90;
      }
    }
    if (_DAT_1418be238 == 0) {
      if ((DAT_1423b35d8 & 0x70) == 0) goto LAB_1408b7c89;
LAB_1408b7a6b:
      uStack_dc = 0;
      uStack_d8 = 0x8ad08ad0;
      uStack_d4 = 0x8ad0;
      uStack_d0 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0xffffffffffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0;
      uStack_a8 = 0xffffffff;
      uStack_e8 = 0x6012e;
      uStack_e4 = 0;
      uStack_cc = 0;
      uStack_e2 = *(undefined4 *)(_DAT_142407590 + 0xa8);
      uStack_de = *(undefined2 *)(_DAT_142407590 + 0xac);
      lStack_c8 = _DAT_142407590;
      pppuStack_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      pppuStack_58 = (undefined8 ***)FUN_140071e00(0x20);
      uVar8 = s_You_cannot_speak__1416de878._12_4_;
      uVar7 = s_You_cannot_speak__1416de878._8_4_;
      uVar6 = s_You_cannot_speak__1416de878._4_4_;
      uStack_48 = 0x11;
      uStack_40 = 0x1f;
      *(undefined4 *)pppuStack_58 = s_You_cannot_speak__1416de878._0_4_;
      *(undefined4 *)((longlong)pppuStack_58 + 4) = uVar6;
      *(undefined4 *)(pppuStack_58 + 1) = uVar7;
      *(undefined4 *)((longlong)pppuStack_58 + 0xc) = uVar8;
      *(char *)(pppuStack_58 + 2) = s_You_cannot_speak__1416de878[0x10];
      *(char *)((longlong)pppuStack_58 + 0x11) = '\0';
      FUN_1400e5250(0x142505cd0,&pppuStack_58,&uStack_e8);
      pppppuVar16 = (undefined8 *****)&pppuStack_58;
      goto LAB_1408b7c84;
    }
    if ((DAT_1423b35d8 & 8) != 0) goto LAB_1408b7a6b;
  }
LAB_1408b7c89:
  _DAT_14250a090 = _DAT_14250a090 | 4;
LAB_1408b7c90:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_138);
  return;
LAB_1408b78f0:
  if ((longlong *)plVar3[10] <= plVar12) goto LAB_1408b790b;
  plVar25 = uStack_100;
  if (*(int *)(*plVar12 + 4) == *(int *)(lVar15 + 0xe0)) goto LAB_1408b7988;
  plVar12 = plVar12 + 1;
  goto LAB_1408b78f0;
}
