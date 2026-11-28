/* classic PE:6aea11a5:0272d000; knowledge-poetic-form; RVA 0xe89030..0xe8f490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_knowledge_poetic_form(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  int *piVar13;
  byte *pbVar14;
  ulonglong *puVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  char *pcVar21;
  longlong lVar22;
  char cVar23;
  uint uVar24;
  char cVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  bool bVar31;
  char cVar32;
  undefined1 auStack_428 [32];
  undefined2 uStack_408;
  ushort uStack_400;
  char cStack_3f8;
  char cStack_3f7;
  char cStack_3f6;
  char acStack_3f5 [5];
  uint auStack_3f0 [2];
  char cStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  int iStack_3d8;
  uint *puStack_3d0;
  int *piStack_3c8;
  longlong *plStack_3c0;
  char cStack_3b8;
  uint uStack_3b4;
  byte *pbStack_3b0;
  ulonglong uStack_3a8;
  undefined1 auStack_3a0 [4];
  int iStack_39c;
  int *piStack_398;
  undefined1 auStack_390 [8];
  longlong lStack_388;
  uint uStack_380;
  int iStack_37c;
  undefined8 uStack_378;
  undefined4 uStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
  longlong lStack_360;
  ulonglong uStack_358;
  byte *pbStack_350;
  undefined1 auStack_348 [8];
  uint *puStack_340;
  uint *puStack_338;
  uint *puStack_330;
  int *piStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  longlong lStack_310;
  int *piStack_308;
  undefined1 auStack_300 [16];
  longlong lStack_2f0;
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418b8040 ^ (ulonglong)auStack_428;
  lStack_388 = param_1;
  uStack_378 = param_2;
  load_supplier_0x70c50(auStack_240);
  load_generated_form_name(param_1 + 8,auStack_240,1);
  load_supplier_0xbb2d0(param_2,auStack_240);
  load_supplier_0x70b20(param_2," is");
  iVar4 = *(int *)(param_1 + 0xd0);
  if (iVar4 == 1) {
    pcVar21 = " a dramatic";
  }
  else if (iVar4 == 2) {
    pcVar21 = " a reflective";
  }
  else if (iVar4 == 4) {
    pcVar21 = " a ribald";
  }
  else if (iVar4 == 5) {
    pcVar21 = " a light";
  }
  else if (iVar4 == 6) {
    pcVar21 = " a solemn";
  }
  else {
    pcVar21 = " a";
  }
  load_supplier_0x70b20(param_2,pcVar21);
  load_supplier_0x70b20(param_2," poetic ");
  if (*(int *)(param_1 + 0xd0) == 3) {
    pcVar21 = "riddle";
  }
  else {
    pcVar21 = "narrative";
    if (*(int *)(param_1 + 0xd0) != 0) {
      pcVar21 = "form";
    }
  }
  load_supplier_0x70b20(param_2,pcVar21);
  if (*(int *)(param_1 + 0xdc) == -1) {
    if (*(int *)(param_1 + 0xd4) != -1) {
      pcVar21 = " concerning ";
      goto LAB_140e892bd;
    }
    goto LAB_140e892f8;
  }
  bVar1 = false;
  bVar31 = false;
  load_supplier_0x70b20(param_2," intended ");
  if (0x16 < *(uint *)(param_1 + 0xdc)) goto override_jmp_140e891a4_case_11;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0xdc)) {
  case 0:
    load_supplier_0x70b20(param_2,"to describe");
    bVar1 = true;
    break;
  case 1:
    load_supplier_0x70b20(param_2,"to satirize");
    bVar1 = true;
    break;
  case 2:
    pcVar21 = "to amuse the audience";
    goto LAB_140e8928c;
  case 3:
    load_supplier_0x70b20(param_2,"to complain about");
    bVar1 = true;
    break;
  case 4:
    load_supplier_0x70b20(param_2,"to renounce");
    break;
  case 5:
    pcVar21 = "to make an apology";
    goto LAB_140e8928c;
  case 6:
    load_supplier_0x70b20(param_2,"to express pleasure with");
    bVar1 = true;
    break;
  case 7:
    load_supplier_0x70b20(param_2,"to express grief over");
    bVar1 = true;
    break;
  case 8:
    load_supplier_0x70b20(param_2,"to praise");
    bVar1 = true;
    break;
  case 9:
    pcVar21 = "to teach a moral lesson";
    goto LAB_140e8928c;
  case 10:
    pcVar21 = "to make an assertion";
    goto LAB_140e8928c;
  case 0xc:
    pcVar21 = "to make a concession";
    goto LAB_140e8928c;
  case 0x13:
    pcVar21 = "to console the audience";
    goto LAB_140e8928c;
  case 0x14:
    pcVar21 = "to refuse consolation";
LAB_140e8928c:
    load_supplier_0x70b20(param_2,pcVar21);
    bVar31 = true;
    break;
  case 0x16:
    load_supplier_0x70b20(param_2,"to beseech");
  }
override_jmp_140e891a4_case_11:
  if (*(int *)(param_1 + 0xd4) == -1) {
    if (bVar1) {
      load_supplier_0x70b20(param_2," a chosen subject");
    }
  }
  else {
    if (bVar31) {
      load_supplier_0x70b20(param_2," concerning");
    }
    pcVar21 = " ";
LAB_140e892bd:
    load_supplier_0x70b20(param_2,pcVar21);
    load_poetic_topic(param_2,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
  }
LAB_140e892f8:
  if (*(int *)(param_1 + 0x80) == -1) {
    if (*(int *)(param_1 + 0x84) != -1) {
      load_supplier_0x73640(&uStack_1f8);
      load_supplier_0x70b20(param_2," originally devised by ");
      uStack_400 = 0;
      uStack_408 = 1;
      FUN_140ba79f0(0x142516038,param_2,*(undefined4 *)(param_1 + 0x84));
    }
  }
  else {
    psVar6 = (short *)load_supplier_0x7f0b0(0x1423edb78);
    bVar31 = false;
    if (psVar6 != (short *)0x0) {
      bVar31 = *psVar6 == 8;
    }
    pcVar21 = " which grew out of the performances of ";
    if (!bVar31) {
      pcVar21 = ", originating in ";
    }
    load_supplier_0x70b20(param_2,pcVar21);
    FUN_140ba73e0(0x142516038,param_2,*(undefined4 *)(param_1 + 0x80));
  }
  load_supplier_0x70b20(param_2,".  ");
  pcVar21 = 
  "The rules of the form are applied by poets to produce individual poems which can be recited.  ";
  if ((*(byte *)(param_1 + 0x8c) & 2) == 0) {
    pcVar21 = "The form guides poets during improvised performances.  ";
  }
  load_supplier_0x70b20(param_2,pcVar21);
  load_supplier_0x70b20(param_2,"The poem ");
  lVar22 = param_1 + 0x90;
  lVar7 = load_supplier_0x70410(lVar22);
  if (lVar7 == 2) {
    load_supplier_0x70b20(param_2,"is divided into ");
    plVar8 = (longlong *)load_supplier_0x707e0(lVar22,0);
    iVar4 = *(int *)(*plVar8 + 0xc);
    plVar8 = (longlong *)load_supplier_0x707e0(lVar22,1);
    if ((((iVar4 == *(int *)(*plVar8 + 0xc)) &&
         (plVar8 = (longlong *)load_supplier_0x707e0(lVar22,0), *(int *)(*plVar8 + 8) == 1)) &&
        (plVar8 = (longlong *)load_supplier_0x707e0(lVar22,1), *(int *)(*plVar8 + 8) == 1)) &&
       ((puVar9 = (undefined8 *)load_supplier_0x707e0(lVar22,0), (*(byte *)*puVar9 & 2) == 0 &&
        (puVar9 = (undefined8 *)load_supplier_0x707e0(lVar22,1), (*(byte *)*puVar9 & 2) == 0)))) {
      load_supplier_0x70b20(param_2,"two distinct ");
      plVar8 = (longlong *)load_supplier_0x707e0(lVar22,0);
      lVar22 = *plVar8;
      iVar4 = *(int *)(lVar22 + 0xc);
      if (iVar4 < 9) {
        if (iVar4 == 8) {
          pcVar21 = "octet";
        }
        else if (iVar4 == 7) {
          pcVar21 = "septet";
        }
        else if (iVar4 == 6) {
          pcVar21 = "sexain";
        }
        else if (iVar4 == 5) {
          pcVar21 = "quintain";
        }
        else if (iVar4 == 4) {
          pcVar21 = "quatrain";
        }
        else if (iVar4 == 3) {
          pcVar21 = "tercet";
        }
        else {
          pcVar21 = "couplet";
          if (iVar4 != 2) {
            pcVar21 = "line";
          }
        }
        load_supplier_0x70b20(param_2,pcVar21);
        load_supplier_0x70b20(param_2,"s");
      }
      else {
        load_supplier_0x70c50(auStack_2a0);
        FUN_140545040(*(undefined4 *)(lVar22 + 0xc),auStack_2a0);
        load_supplier_0xbb2d0(param_2,auStack_2a0);
        load_supplier_0x70b20(param_2,"-line stanza");
        load_supplier_0x693f0(auStack_2a0);
        load_supplier_0x70b20(param_2,"s");
      }
    }
    else {
      iVar4 = 0;
LAB_140e895b2:
      do {
        puVar9 = (undefined8 *)load_supplier_0x707e0(lVar22,(longlong)iVar4);
        pbVar14 = (byte *)*puVar9;
        bVar31 = false;
        if ((iVar4 == 1) &&
           ((plVar8 = (longlong *)load_supplier_0x707e0(lVar22,0),
            *(int *)(pbVar14 + 0xc) == *(int *)(*plVar8 + 0xc) ||
            (((*pbVar14 & 2) != 0 &&
             (puVar9 = (undefined8 *)load_supplier_0x707e0(lVar22,0), (*(byte *)*puVar9 & 2) != 0)))
            ))) {
          load_supplier_0x70b20(param_2,"another");
          iVar5 = *(int *)(pbVar14 + 8);
          if (iVar5 < 10) {
            if (*(int *)(pbVar14 + 4) == iVar5) {
              load_supplier_0x70b20(param_2," ");
              load_supplier_0x70c50(auStack_2a0);
              FUN_140545040(*(undefined4 *)(pbVar14 + 4),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
            }
            else {
              load_supplier_0x70b20(param_2," ");
              load_supplier_0x70c50(auStack_2a0);
              FUN_140545040(*(undefined4 *)(pbVar14 + 4),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
              load_supplier_0x693f0(auStack_2a0);
              load_supplier_0x70b20(param_2," to ");
              load_supplier_0x70c50(auStack_2a0);
              FUN_140545040(*(undefined4 *)(pbVar14 + 8),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
            }
LAB_140e89810:
            load_supplier_0x693f0(auStack_2a0);
          }
          else if (iVar5 < 100) {
            pcVar21 = " numerous series of";
            if (iVar5 < 0x32) {
              pcVar21 = " series of";
            }
            load_supplier_0x70b20(param_2,pcVar21);
          }
          else {
            load_supplier_0x70b20(param_2," extremely long series of");
          }
        }
        else if ((*(int *)(pbVar14 + 4) == 1) && (*(int *)(pbVar14 + 8) == 1)) {
          load_supplier_0x70b20(param_2,"a");
          bVar31 = true;
        }
        else {
          iVar5 = *(int *)(pbVar14 + 8);
          if (iVar5 < 10) {
            if (*(int *)(pbVar14 + 4) == iVar5) {
              load_supplier_0x70c50(auStack_2a0);
              FUN_140545040(*(undefined4 *)(pbVar14 + 4),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
            }
            else {
              load_supplier_0x70c50(auStack_2a0);
              FUN_140545040(*(undefined4 *)(pbVar14 + 4),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
              load_supplier_0x693f0(auStack_2a0);
              load_supplier_0x70b20(param_2," to ");
              load_supplier_0x70c50(auStack_2a0);
              FUN_140545040(*(undefined4 *)(pbVar14 + 8),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
            }
            goto LAB_140e89810;
          }
          if (iVar5 < 100) {
            pcVar21 = "numerous series of";
            if (iVar5 < 0x32) {
              pcVar21 = "a series of";
            }
            load_supplier_0x70b20(param_2,pcVar21);
          }
          else {
            load_supplier_0x70b20(param_2,"an extremely long series of");
          }
        }
        if ((*pbVar14 & 2) == 0) {
          iVar5 = *(int *)(pbVar14 + 0xc);
          if (iVar5 < 9) {
            if (iVar5 == 8) {
              pcVar21 = "n ";
              if (!bVar31) {
                pcVar21 = " ";
              }
              load_supplier_0x70b20(param_2,pcVar21);
              pcVar21 = "octet";
            }
            else if (iVar5 == 7) {
              pcVar21 = " septet";
            }
            else if (iVar5 == 6) {
              pcVar21 = " sexain";
            }
            else if (iVar5 == 5) {
              pcVar21 = " quintain";
            }
            else if (iVar5 == 4) {
              pcVar21 = " quatrain";
            }
            else if (iVar5 == 3) {
              pcVar21 = " tercet";
            }
            else {
              pcVar21 = " couplet";
              if (iVar5 != 2) {
                pcVar21 = " line";
              }
            }
            goto LAB_140e8995a;
          }
          load_supplier_0x70b20(param_2," ");
          load_supplier_0x70c50(auStack_2a0);
          FUN_140545040(*(undefined4 *)(pbVar14 + 0xc),auStack_2a0);
          load_supplier_0xbb2d0(param_2,auStack_2a0);
          load_supplier_0x70b20(param_2,"-line stanza");
          load_supplier_0x693f0(auStack_2a0);
        }
        else {
          load_supplier_0x70b20(param_2," ");
          if (*(int *)(pbVar14 + 0xc) < 6) {
            load_supplier_0x70b20(param_2,"brief ");
            pcVar21 = "verse paragraph";
          }
          else {
            if (0x14 < *(int *)(pbVar14 + 0xc)) {
              load_supplier_0x70b20(param_2,"long ");
            }
            pcVar21 = "verse paragraph";
          }
LAB_140e8995a:
          load_supplier_0x70b20(param_2,pcVar21);
        }
        if (1 < *(int *)(pbVar14 + 8)) {
          load_supplier_0x70b20(param_2,"s");
        }
        if (iVar4 == 0) {
          load_supplier_0x70b20(param_2," and ");
          iVar4 = 1;
          goto LAB_140e895b2;
        }
        iVar4 = iVar4 + 1;
        param_1 = lStack_388;
      } while (iVar4 < 2);
    }
  }
  else {
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar12 = load_supplier_0x70410(lVar22);
    if (uVar12 < 3) {
      load_supplier_0x70b20(param_2,"is ");
    }
    else {
      load_supplier_0x70b20(param_2,"is divided into ");
      load_supplier_0x70c50(auStack_2a0);
      uVar26 = load_supplier_0x70410(lVar22);
      FUN_140545040(uVar26,auStack_2a0);
      load_supplier_0xbb2d0(param_2,auStack_2a0);
      load_supplier_0x70b20(param_2," distinct parts: ");
      load_supplier_0x693f0(auStack_2a0);
    }
    iVar4 = load_supplier_0x70410(lVar22);
    load_supplier_0x70800(lVar22,auStack_3f0);
    load_supplier_0x707f0(lVar22,&pbStack_3b0);
    puVar10 = (undefined1 *)load_supplier_0x703e0(auStack_3f0,&cStack_3f6,&pbStack_3b0);
    cVar3 = load_supplier_0x66d70(*puVar10,0);
    if (cVar3 != '\0') {
      iVar5 = (int)uStack_1f8;
      do {
        bVar31 = false;
        puVar9 = (undefined8 *)load_supplier_0x703d0(auStack_3f0);
        if ((*(byte *)*puVar9 & 2) == 0) {
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if (((*(int *)(*plVar8 + 0xc) < 1) ||
              (plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0),
              0x1e < *(int *)(*plVar8 + 0xc))) ||
             (plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0),
             *(int *)((longlong)&uStack_1f8 + (longlong)*(int *)(*plVar8 + 0xc) * 4) == 0))
          goto LAB_140e89ad0;
LAB_140e89b4e:
          load_supplier_0x70b20(param_2,"another");
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if (1 < *(int *)(*plVar8 + 8)) {
            load_supplier_0x70b20(param_2," ");
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            if (*(int *)(*plVar8 + 8) < 10) {
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              lVar7 = *plVar8;
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              if (*(int *)(*plVar8 + 4) == *(int *)(lVar7 + 8)) {
                load_supplier_0x70c50(auStack_2a0);
                plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                FUN_140545040(*(undefined4 *)(*plVar8 + 4),auStack_2a0);
                load_supplier_0xbb2d0(param_2,auStack_2a0);
              }
              else {
                load_supplier_0x70c50(auStack_2a0);
                plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                FUN_140545040(*(undefined4 *)(*plVar8 + 4),auStack_2a0);
                load_supplier_0xbb2d0(param_2,auStack_2a0);
                load_supplier_0x693f0(auStack_2a0);
                load_supplier_0x70b20(param_2," to ");
                load_supplier_0x70c50(auStack_2a0);
                plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                FUN_140545040(*(undefined4 *)(*plVar8 + 8),auStack_2a0);
                load_supplier_0xbb2d0(param_2,auStack_2a0);
              }
LAB_140e89e5d:
              load_supplier_0x693f0(auStack_2a0);
            }
            else {
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              if (*(int *)(*plVar8 + 8) < 100) {
                plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                pcVar21 = "numerous series of";
                if (*(int *)(*plVar8 + 8) < 0x32) {
                  pcVar21 = "series of";
                }
                load_supplier_0x70b20(param_2,pcVar21);
              }
              else {
                load_supplier_0x70b20(param_2,"extremely long series of");
              }
            }
          }
        }
        else {
          if (0 < iVar5) goto LAB_140e89b4e;
LAB_140e89ad0:
          lVar7 = load_supplier_0x70410(lVar22);
          if ((lVar7 != 1) ||
             (plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0), *(int *)(*plVar8 + 8) != 1))
          {
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            if ((*(int *)(*plVar8 + 4) == 1) &&
               (plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0), *(int *)(*plVar8 + 8) == 1)
               ) {
              load_supplier_0x70b20(param_2,"a");
              bVar31 = true;
              goto LAB_140e89e69;
            }
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            if (9 < *(int *)(*plVar8 + 8)) {
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              if (*(int *)(*plVar8 + 8) < 100) {
                plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                if (*(int *)(*plVar8 + 8) < 0x32) {
                  load_supplier_0x70b20(param_2,"a series of");
                }
                else {
                  load_supplier_0x70b20(param_2,"numerous series of");
                }
              }
              else {
                load_supplier_0x70b20(param_2,"an extremely long series of");
              }
              goto LAB_140e89e69;
            }
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            lVar7 = *plVar8;
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            if (*(int *)(*plVar8 + 4) == *(int *)(lVar7 + 8)) {
              load_supplier_0x70c50(auStack_2a0);
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              FUN_140545040(*(undefined4 *)(*plVar8 + 4),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
            }
            else {
              load_supplier_0x70c50(auStack_2a0);
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              FUN_140545040(*(undefined4 *)(*plVar8 + 4),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
              load_supplier_0x693f0(auStack_2a0);
              load_supplier_0x70b20(param_2," to ");
              load_supplier_0x70c50(auStack_2a0);
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              FUN_140545040(*(undefined4 *)(*plVar8 + 8),auStack_2a0);
              load_supplier_0xbb2d0(param_2,auStack_2a0);
            }
            goto LAB_140e89e5d;
          }
          load_supplier_0x70b20(param_2,"a single");
        }
LAB_140e89e69:
        puVar9 = (undefined8 *)load_supplier_0x703d0(auStack_3f0);
        if ((*(byte *)*puVar9 & 2) == 0) {
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if (*(int *)(*plVar8 + 0xc) < 9) {
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            if (*(int *)(*plVar8 + 0xc) == 8) {
              if (bVar31) {
                load_supplier_0x70b20(param_2,"n ");
                load_supplier_0x70b20(param_2,"octet");
              }
              else {
                load_supplier_0x70b20(param_2," ");
                load_supplier_0x70b20(param_2,"octet");
              }
            }
            else {
              plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
              if (*(int *)(*plVar8 + 0xc) == 7) {
                pcVar21 = " septet";
              }
              else {
                plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                if (*(int *)(*plVar8 + 0xc) == 6) {
                  pcVar21 = " sexain";
                }
                else {
                  plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                  if (*(int *)(*plVar8 + 0xc) == 5) {
                    pcVar21 = " quintain";
                  }
                  else {
                    plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                    if (*(int *)(*plVar8 + 0xc) == 4) {
                      pcVar21 = " quatrain";
                    }
                    else {
                      plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                      if (*(int *)(*plVar8 + 0xc) == 3) {
                        pcVar21 = " tercet";
                      }
                      else {
                        plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
                        pcVar21 = " couplet";
                        if (*(int *)(*plVar8 + 0xc) != 2) {
                          pcVar21 = " line";
                        }
                      }
                    }
                  }
                }
              }
              load_supplier_0x70b20(param_2,pcVar21);
            }
          }
          else {
            load_supplier_0x70b20(param_2," ");
            load_supplier_0x70c50(auStack_2a0);
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            FUN_140545040(*(undefined4 *)(*plVar8 + 0xc),auStack_2a0);
            load_supplier_0xbb2d0(param_2,auStack_2a0);
            load_supplier_0x70b20(param_2,"-line stanza");
            load_supplier_0x693f0(auStack_2a0);
          }
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if (1 < *(int *)(*plVar8 + 8)) {
            load_supplier_0x70b20(param_2,"s");
          }
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if ((0 < *(int *)(*plVar8 + 0xc)) &&
             (plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0),
             *(int *)(*plVar8 + 0xc) < 0x1f)) {
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            piVar13 = (int *)((longlong)&uStack_1f8 + (longlong)*(int *)(*plVar8 + 0xc) * 4);
            *piVar13 = *piVar13 + 1;
            iVar5 = (int)uStack_1f8;
          }
        }
        else {
          load_supplier_0x70b20(param_2," ");
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if (*(int *)(*plVar8 + 0xc) < 6) {
            pcVar21 = "brief ";
          }
          else {
            plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
            pcVar21 = "lengthy ";
            if (*(int *)(*plVar8 + 0xc) < 0x15) {
              pcVar21 = "full ";
            }
          }
          load_supplier_0x70b20(param_2,pcVar21);
          load_supplier_0x70b20(param_2,"verse paragraph");
          plVar8 = (longlong *)load_supplier_0x703d0(auStack_3f0);
          if (1 < *(int *)(*plVar8 + 8)) {
            load_supplier_0x70b20(param_2,"s");
          }
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,iVar5 + 1);
          iVar5 = iVar5 + 1;
        }
        if (iVar4 == 2) {
          pcVar21 = " and ";
LAB_140e8a137:
          load_supplier_0x70b20(param_2,pcVar21);
        }
        else if (2 < iVar4) {
          pcVar21 = ", ";
          goto LAB_140e8a137;
        }
        load_supplier_0x703c0(auStack_3f0);
        iVar4 = iVar4 + -1;
        puVar10 = (undefined1 *)load_supplier_0x703e0(auStack_3f0,&cStack_3f6,&pbStack_3b0);
        cVar3 = load_supplier_0x66d70(*puVar10,0);
      } while (cVar3 != '\0');
    }
  }
  load_supplier_0x70b20(param_2,".  ");
  if (*(int *)(param_1 + 0xe0) != -1) {
    load_supplier_0x70c50(auStack_2e0);
    load_generated_form_name(param_1 + 8,auStack_2e0,1);
    FUN_140544330(auStack_2e0);
    load_supplier_0xbb2d0(param_2,auStack_2e0);
    load_supplier_0x70b20(param_2," is always written from the perspective of ");
    puVar9 = (undefined8 *)load_supplier_0x707e0(param_1 + 0xe8,(longlong)*(int *)(param_1 + 0xe0));
    puVar11 = (uint *)*puVar9;
    if (*puVar11 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(*puVar11) {
      case 0:
        pcVar21 = "the author";
        break;
      case 1:
        pcVar21 = "a soldier";
        break;
      case 2:
        pcVar21 = "a traveler";
        break;
      case 3:
        pcVar21 = "a relative of the author";
        break;
      case 4:
        pcVar21 = "a party to a debate";
        break;
      case 5:
        pcVar21 = "a fictional poet";
        break;
      case 6:
        if (puVar11[1] != 0xffffffff) {
          load_supplier_0x73640(&uStack_1f8);
          uStack_400 = 0;
          uStack_408 = 1;
          FUN_140ba79f0(0x142516038,param_2,puVar11[1]);
          goto LAB_140e8a2e0;
        }
        pcVar21 = "a historical figure";
        break;
      case 7:
        if (puVar11[1] != 0xffffffff) {
          load_supplier_0x70b20(param_2,"a ");
          uStack_400 = uStack_400 & 0xff00;
          uStack_408 = (undefined2)puVar11[2];
          FUN_140ba99b0(0x142516038,param_2,puVar11[1]);
          goto LAB_140e8a2e0;
        }
        pcVar21 = "an animal";
      }
      load_supplier_0x70b20(param_2,pcVar21);
    }
LAB_140e8a2e0:
    load_supplier_0x70b20(param_2,".  ");
    load_supplier_0x693f0(auStack_2e0);
  }
  uVar29 = *(uint *)(param_1 + 0xe4);
  uVar20 = uVar29 & 1;
  if ((uVar29 & 4) != 0) {
    uVar20 = uVar20 + 1;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 & 8) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 & 0x10) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 9 & 1) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 10 & 1) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 0xb & 1) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 0xc & 1) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 0xd & 1) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 0xf & 1) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 0x10 & 1) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 0x11 & 1) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 0x12 & 1) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 0x13 & 1) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 0x14 & 1) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 0x15 & 1) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 >> 0x16 & 1) == 0) {
    uVar24 = uVar20;
  }
  if (uVar24 != 0) {
    load_supplier_0x70b20(param_2,"Use of ");
    uVar20 = 0;
    uVar29 = auStack_3f0[0];
    do {
      if (uVar20 < 0x11) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar20) {
        case 0:
          uVar29 = 1;
          break;
        case 1:
          uVar29 = 4;
          break;
        case 2:
          uVar29 = 8;
          break;
        case 3:
          uVar29 = 0x10;
          break;
        case 4:
          uVar29 = 0x200;
          break;
        case 5:
          uVar29 = 0x400;
          break;
        case 6:
          uVar29 = 0x800;
          break;
        case 7:
          uVar29 = 0x1000;
          break;
        case 8:
          uVar29 = 0x2000;
          break;
        case 9:
          uVar29 = 0x8000;
          break;
        case 10:
          uVar29 = 0x10000;
          break;
        case 0xb:
          uVar29 = 0x20000;
          break;
        case 0xc:
          uVar29 = 0x40000;
          break;
        case 0xd:
          uVar29 = 0x80000;
          break;
        case 0xe:
          uVar29 = 0x100000;
          break;
        case 0xf:
          uVar29 = 0x200000;
          break;
        case 0x10:
          uVar29 = 0x400000;
        }
      }
      if ((*(uint *)(param_1 + 0xe4) & uVar29) != 0) {
        if (uVar29 < 0x2001) {
          if (uVar29 == 0x2000) {
            pcVar21 = "synchysis";
          }
          else if (uVar29 < 0x201) {
            if (uVar29 == 0x200) {
              pcVar21 = "assonance";
            }
            else if (uVar29 == 1) {
              pcVar21 = "internal rhyme";
            }
            else if (uVar29 == 4) {
              pcVar21 = "alliteration";
            }
            else if (uVar29 == 8) {
              pcVar21 = "onomatopoeia";
            }
            else {
              if (uVar29 != 0x10) goto LAB_140e8a5a9;
              pcVar21 = "antanaclasis";
            }
          }
          else if (uVar29 == 0x400) {
            pcVar21 = "consonance";
          }
          else if (uVar29 == 0x800) {
            pcVar21 = "elision";
          }
          else {
            if (uVar29 != 0x1000) goto LAB_140e8a5a9;
            pcVar21 = "epenthesis";
          }
LAB_140e8a5a1:
          load_supplier_0x70b20(param_2,pcVar21);
        }
        else {
          if (uVar29 < 0x80001) {
            if (uVar29 == 0x80000) {
              pcVar21 = "simile";
            }
            else if (uVar29 == 0x8000) {
              pcVar21 = "allegory";
            }
            else if (uVar29 == 0x10000) {
              pcVar21 = "ambiguity";
            }
            else if (uVar29 == 0x20000) {
              pcVar21 = "symbolism";
            }
            else {
              if (uVar29 != 0x40000) goto LAB_140e8a5a9;
              pcVar21 = "metaphor";
            }
            goto LAB_140e8a5a1;
          }
          if (uVar29 == 0x100000) {
            pcVar21 = "metonymy";
            goto LAB_140e8a5a1;
          }
          if (uVar29 == 0x200000) {
            pcVar21 = "vivid imagery";
            goto LAB_140e8a5a1;
          }
          if (uVar29 == 0x400000) {
            pcVar21 = "juxtaposition";
            goto LAB_140e8a5a1;
          }
        }
LAB_140e8a5a9:
        if (uVar24 == 2) {
          pcVar21 = " and ";
LAB_140e8a5c0:
          load_supplier_0x70b20(param_2,pcVar21);
        }
        else if (2 < (int)uVar24) {
          pcVar21 = ", ";
          goto LAB_140e8a5c0;
        }
        uVar24 = uVar24 - 1;
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 0x11);
    load_supplier_0x70b20(param_2," is characteristic of the form.  ");
  }
  iVar4 = load_supplier_0x70930(param_1 + 0xb8);
  if (0 < iVar4) {
    if (iVar4 < 2) {
      load_supplier_0x70b20(param_2,"A form of ");
      load_supplier_0x70b20(param_2,"parallelism ");
      pcVar21 = "is";
    }
    else {
      load_supplier_0x70b20(param_2,"Forms of ");
      load_supplier_0x70b20(param_2,"parallelism ");
      pcVar21 = "are";
    }
    load_supplier_0x70b20(param_2,pcVar21);
    load_supplier_0x70b20(param_2," common throughout the poem, in that ");
    bVar31 = false;
    load_supplier_0x70800(param_1 + 0xb8,&plStack_3c0);
    load_supplier_0x707f0(param_1 + 0xb8,&pbStack_3b0);
    puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
    cVar3 = load_supplier_0x66d70(*puVar10,0);
    while (cVar3 != '\0') {
      if (bVar31) {
        load_supplier_0x70b20(param_2,"they ");
      }
      else {
        load_supplier_0x70b20(param_2,"certain lines ");
      }
      bVar31 = true;
      puVar11 = (uint *)load_supplier_0x703d0(&plStack_3c0);
      if (*puVar11 < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(*puVar11) {
        case 0:
          pcVar21 = "often share an underlying meaning";
          break;
        case 1:
          pcVar21 = "often contrast underlying meaning";
          break;
        case 2:
          pcVar21 = "are required to maintain phrasing";
          break;
        case 3:
          pcVar21 = "have similar grammatical structures";
          break;
        case 4:
          pcVar21 = "use the same placement of allusions";
          break;
        case 5:
          pcVar21 = "sometimes have reversed word orders";
          break;
        case 6:
          pcVar21 = "reverse grammatical structures";
        }
        load_supplier_0x70b20(param_2,pcVar21);
      }
      if (iVar4 == 2) {
        pcVar21 = " and ";
LAB_140e8a750:
        load_supplier_0x70b20(param_2,pcVar21);
      }
      else if (2 < iVar4) {
        pcVar21 = ", ";
        goto LAB_140e8a750;
      }
      iVar4 = iVar4 + -1;
      load_supplier_0x70910(&plStack_3c0);
      puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
      cVar3 = load_supplier_0x66d70(*puVar10,0);
    }
    load_supplier_0x70b20(param_2,".  ");
  }
  uVar29 = *(uint *)(param_1 + 0xe4);
  uVar24 = uVar29 >> 5 & 1;
  uVar20 = uVar24 + 1;
  if ((uVar29 & 0x40) == 0) {
    uVar20 = uVar24;
  }
  uVar24 = uVar20 + 1;
  if ((uVar29 & 0x80) == 0) {
    uVar24 = uVar20;
  }
  uVar20 = uVar24 + 1;
  if ((uVar29 >> 8 & 1) == 0) {
    uVar20 = uVar24;
  }
  if (uVar20 != 0) {
    load_supplier_0x70b20
              (param_2,"Linguistic skill is required in the visual presentation as well, as ");
    load_supplier_0x70c50(auStack_2a0);
    load_generated_form_name(param_1 + 8,auStack_2a0,1);
    load_supplier_0xbb2d0(param_2,auStack_2a0);
    load_supplier_0x693f0(auStack_2a0);
    load_supplier_0x70b20(param_2," must feature ");
    iVar4 = 0;
    uVar29 = auStack_3f0[0];
    uVar24 = uVar20;
    do {
      if (iVar4 == 0) {
        uVar29 = 0x20;
      }
      else if (iVar4 == 1) {
        uVar29 = 0x40;
      }
      else if (iVar4 == 2) {
        uVar29 = 0x80;
      }
      else if (iVar4 == 3) {
        uVar29 = 0x100;
      }
      if ((*(uint *)(param_1 + 0xe4) & uVar29) != 0) {
        if (uVar29 == 0x20) {
          pcVar21 = "lines with different readings depending on word breaks";
LAB_140e8a8be:
          load_supplier_0x70b20(param_2,pcVar21);
        }
        else {
          if (uVar29 == 0x40) {
            pcVar21 = "lines which can be read backwards as well as forwards";
            goto LAB_140e8a8be;
          }
          if (uVar29 == 0x80) {
            pcVar21 = "lines which can be read orthogonally across the standard lines";
            goto LAB_140e8a8be;
          }
          if (uVar29 == 0x100) {
            if (1 < uVar20) {
              load_supplier_0x70b20(param_2,"even ");
            }
            pcVar21 = 
            "lines which emerge when reading along certain prescribed paths across the body of the poem"
            ;
            goto LAB_140e8a8be;
          }
        }
        if (uVar24 == 2) {
          pcVar21 = " and ";
LAB_140e8a8dd:
          load_supplier_0x70b20(param_2,pcVar21);
        }
        else if (2 < (int)uVar24) {
          pcVar21 = ", ";
          goto LAB_140e8a8dd;
        }
        uVar24 = uVar24 - 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    load_supplier_0x70b20(param_2,".  ");
  }
  if (*(int *)(param_1 + 0xac) == -1) {
    if (*(int *)(param_1 + 0xa8) == 0) goto LAB_140e8b048;
    load_supplier_0x70800(param_1 + 0x90,&piStack_3c8);
    load_supplier_0x707f0(param_1 + 0x90,auStack_390);
    puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_3c8,acStack_3f5,auStack_390);
    cVar3 = load_supplier_0x66d70(*puVar10,0);
    while (cVar3 != '\0') {
      plVar8 = (longlong *)load_supplier_0x703d0(&piStack_3c8);
      if (*(int *)(*plVar8 + 0x15c) != -1) goto LAB_140e8b048;
      plVar8 = (longlong *)load_supplier_0x703d0(&piStack_3c8);
      load_supplier_0x70800(*plVar8 + 0x50,&plStack_3c0);
      plVar8 = (longlong *)load_supplier_0x703d0(&piStack_3c8);
      load_supplier_0x707f0(*plVar8 + 0x50,&pbStack_3b0);
      puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
      cVar3 = load_supplier_0x66d70(*puVar10,0);
      while (cVar3 != '\0') {
        piVar13 = (int *)load_supplier_0x703d0(&plStack_3c0);
        if (*piVar13 != -1) goto LAB_140e8b048;
        load_supplier_0x70910(&plStack_3c0);
        puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
        cVar3 = load_supplier_0x66d70(*puVar10,0);
      }
      load_supplier_0x703c0(&piStack_3c8);
      puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_3c8,acStack_3f5,auStack_390);
      cVar3 = load_supplier_0x66d70(*puVar10,0);
    }
    uVar12 = load_supplier_0x70410(param_1 + 0x90);
    if (uVar12 < 2) {
      plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
      pcVar21 = "The poem has ";
      if (1 < *(int *)(*plVar8 + 0xc)) goto LAB_140e8afee;
    }
    else {
LAB_140e8afee:
      pcVar21 = "Each line has ";
    }
    load_supplier_0x70b20(param_2,pcVar21);
    load_supplier_0x70c50(auStack_2a0);
    FUN_140545040(*(undefined4 *)(param_1 + 0xa8),auStack_2a0);
    load_supplier_0xbb2d0(param_2,auStack_2a0);
    load_supplier_0x70b20(param_2," syllables.  ");
LAB_140e8b03c:
    load_supplier_0x693f0(auStack_2a0);
  }
  else if (*(int *)(param_1 + 0xa8) != 0) {
    uVar12 = load_supplier_0x70410(param_1 + 0x90);
    if (uVar12 < 2) {
      plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
      pcVar21 = "The poem has ";
      if (1 < *(int *)(*plVar8 + 0xc)) goto LAB_140e8a94e;
    }
    else {
LAB_140e8a94e:
      pcVar21 = "Each line has ";
    }
    load_supplier_0x70b20(param_2,pcVar21);
    load_supplier_0x70c50(auStack_2a0);
    FUN_140545040(*(undefined4 *)(param_1 + 0xa8),auStack_2a0);
    load_supplier_0xbb2d0(param_2,auStack_2a0);
    load_supplier_0x70b20(param_2," ");
    pcVar21 = "foot";
    if (*(int *)(param_1 + 0xa8) != 1) {
      pcVar21 = "feet";
    }
    load_supplier_0x70b20(param_2,pcVar21);
    load_supplier_0x70b20(param_2," with ");
    if ((*(byte *)(param_1 + 0x8c) & 1) == 0) {
      if ((*(uint *)(param_1 + 0xe4) & 0x4000) == 0) {
        load_supplier_0x70b20(param_2,"an accent pattern of ");
        if (*(uint *)(param_1 + 0xac) < 0xc) {
                    /* WARNING: Switch is manually overridden */
          switch(*(uint *)(param_1 + 0xac)) {
          case 0:
            pcVar21 = "unstressed-unstressed";
            break;
          case 1:
            pcVar21 = "unstressed-stressed";
            break;
          case 2:
            pcVar21 = "stressed-unstressed";
            break;
          case 3:
            pcVar21 = "stressed-stressed";
            break;
          case 4:
            pcVar21 = "unstressed-unstressed-unstressed";
            break;
          case 5:
            pcVar21 = "stressed-unstressed-unstressed";
            break;
          case 6:
            pcVar21 = "unstressed-stressed-unstressed";
            break;
          case 7:
            pcVar21 = "unstressed-unstressed-stressed";
            break;
          case 8:
            pcVar21 = "unstressed-stressed-stressed";
            break;
          case 9:
            pcVar21 = "stressed-stressed-unstressed";
            break;
          case 10:
            pcVar21 = "stressed-unstressed-stressed";
            break;
          case 0xb:
            pcVar21 = "stressed-stressed-stressed";
          }
          load_supplier_0x70b20(param_2,pcVar21);
        }
        load_supplier_0x70b20(param_2," (qualitative ");
        if (*(uint *)(param_1 + 0xac) < 0xc) {
                    /* WARNING: Switch is manually overridden */
          switch(*(uint *)(param_1 + 0xac)) {
          case 0:
            pcVar21 = "pyrrhic";
            break;
          case 1:
            pcVar21 = "iambic";
            break;
          case 2:
            pcVar21 = "trochaic";
            break;
          case 3:
            pcVar21 = "spondaic";
            break;
          case 4:
            pcVar21 = "tribrachic";
            break;
          case 5:
            pcVar21 = "dactylic";
            break;
          case 6:
            pcVar21 = "amphibrachic";
            break;
          case 7:
            pcVar21 = "anapaestic";
            break;
          case 8:
            pcVar21 = "bacchic";
            break;
          case 9:
            pcVar21 = "antibacchic";
            break;
          case 10:
            pcVar21 = "cretic";
            break;
          case 0xb:
            pcVar21 = "molossic";
          }
          load_supplier_0x70b20(param_2,pcVar21);
        }
        load_supplier_0x70b20(param_2," ");
        uVar29 = *(int *)(param_1 + 0xa8) - 1;
        if (uVar29 < 8) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar29) {
          case 1:
            goto override_jmp_140e8acb7_case_1;
          case 2:
            goto override_jmp_140e8acb7_case_2;
          case 3:
            goto override_jmp_140e8acb7_case_3;
          case 4:
            goto override_jmp_140e8acb7_case_4;
          case 5:
            goto override_jmp_140e8acb7_case_5;
          case 6:
            goto override_jmp_140e8acb7_case_6;
          case 7:
            goto override_jmp_140e8acb7_case_7;
          }
override_jmp_140e8acb7_case_0:
          pcVar21 = "monometer";
          goto LAB_140e8ae6a;
        }
      }
      else {
        load_supplier_0x70b20(param_2,"a syllable weight pattern of ");
        if (*(uint *)(param_1 + 0xac) < 0xc) {
                    /* WARNING: Switch is manually overridden */
          switch(*(uint *)(param_1 + 0xac)) {
          case 0:
            pcVar21 = "short-short";
            break;
          case 1:
            pcVar21 = "short-long";
            break;
          case 2:
            pcVar21 = "long-short";
            break;
          case 3:
            pcVar21 = "long-long";
            break;
          case 4:
            pcVar21 = "short-short-short";
            break;
          case 5:
            pcVar21 = "long-short-short";
            break;
          case 6:
            pcVar21 = "short-long-short";
            break;
          case 7:
            pcVar21 = "short-short-long";
            break;
          case 8:
            pcVar21 = "short-long-long";
            break;
          case 9:
            pcVar21 = "long-long-short";
            break;
          case 10:
            pcVar21 = "long-short-long";
            break;
          case 0xb:
            pcVar21 = "long-long-long";
          }
          load_supplier_0x70b20(param_2,pcVar21);
        }
        load_supplier_0x70b20(param_2," (quantitative ");
        if (*(uint *)(param_1 + 0xac) < 0xc) {
                    /* WARNING: Switch is manually overridden */
          switch(*(uint *)(param_1 + 0xac)) {
          case 0:
            pcVar21 = "pyrrhic";
            break;
          case 1:
            pcVar21 = "iambic";
            break;
          case 2:
            pcVar21 = "trochaic";
            break;
          case 3:
            pcVar21 = "spondaic";
            break;
          case 4:
            pcVar21 = "tribrachic";
            break;
          case 5:
            pcVar21 = "dactylic";
            break;
          case 6:
            pcVar21 = "amphibrachic";
            break;
          case 7:
            pcVar21 = "anapaestic";
            break;
          case 8:
            pcVar21 = "bacchic";
            break;
          case 9:
            pcVar21 = "antibacchic";
            break;
          case 10:
            pcVar21 = "cretic";
            break;
          case 0xb:
            pcVar21 = "molossic";
          }
          load_supplier_0x70b20(param_2,pcVar21);
        }
        load_supplier_0x70b20(param_2," ");
        uVar29 = *(int *)(param_1 + 0xa8) - 1;
        if (uVar29 < 8) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar29) {
          case 0:
            goto override_jmp_140e8acb7_case_0;
          case 1:
override_jmp_140e8acb7_case_1:
            pcVar21 = "dimeter";
            break;
          case 2:
override_jmp_140e8acb7_case_2:
            pcVar21 = "trimeter";
            break;
          case 3:
override_jmp_140e8acb7_case_3:
            pcVar21 = "tetrameter";
            break;
          case 4:
override_jmp_140e8acb7_case_4:
            pcVar21 = "pentameter";
            break;
          case 5:
override_jmp_140e8acb7_case_5:
            pcVar21 = "hexameter";
            break;
          case 6:
override_jmp_140e8acb7_case_6:
            pcVar21 = "heptameter";
            break;
          case 7:
override_jmp_140e8acb7_case_7:
            pcVar21 = "octameter";
          }
LAB_140e8ae6a:
          load_supplier_0x70b20(param_2,pcVar21);
        }
      }
      pcVar21 = ").  ";
      goto LAB_140e8ae79;
    }
    load_supplier_0x70b20(param_2,"a tone pattern of ");
    if (*(uint *)(param_1 + 0xac) < 0xc) {
                    /* WARNING: Switch is manually overridden */
      switch(*(uint *)(param_1 + 0xac)) {
      case 0:
        load_supplier_0x70b20(param_2,"even-even");
        pcVar21 = ".  ";
        break;
      case 1:
        load_supplier_0x70b20(param_2,"even-uneven");
        pcVar21 = ".  ";
        break;
      case 2:
        load_supplier_0x70b20(param_2,"uneven-even");
        pcVar21 = ".  ";
        break;
      case 3:
        load_supplier_0x70b20(param_2,"uneven-uneven");
        pcVar21 = ".  ";
        break;
      case 4:
        load_supplier_0x70b20(param_2,"even-even-even");
        pcVar21 = ".  ";
        break;
      case 5:
        load_supplier_0x70b20(param_2,"uneven-even-even");
        pcVar21 = ".  ";
        break;
      case 6:
        load_supplier_0x70b20(param_2,"even-uneven-even");
        pcVar21 = ".  ";
        break;
      case 7:
        load_supplier_0x70b20(param_2,"even-even-uneven");
        pcVar21 = ".  ";
        break;
      case 8:
        load_supplier_0x70b20(param_2,"even-uneven-uneven");
        pcVar21 = ".  ";
        break;
      case 9:
        load_supplier_0x70b20(param_2,"uneven-uneven-even");
        pcVar21 = ".  ";
        break;
      case 10:
        load_supplier_0x70b20(param_2,"uneven-even-uneven");
        pcVar21 = ".  ";
        break;
      case 0xb:
        load_supplier_0x70b20(param_2,"uneven-uneven-uneven");
        goto LAB_140e8ab3f;
      }
    }
    else {
LAB_140e8ab3f:
      pcVar21 = ".  ";
    }
LAB_140e8ae79:
    load_supplier_0x70b20(param_2,pcVar21);
    goto LAB_140e8b03c;
  }
LAB_140e8b048:
  if (*(int *)(param_1 + 0xb0) != -1) {
    uVar12 = load_supplier_0x70410(param_1 + 0x90);
    if (uVar12 < 2) {
      plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
      pcVar21 = "The poem has ";
      if (1 < *(int *)(*plVar8 + 0xc)) goto LAB_140e8b086;
    }
    else {
LAB_140e8b086:
      pcVar21 = "Every line of the poem has ";
    }
    load_supplier_0x70b20(param_2,pcVar21);
    iVar4 = *(int *)(param_1 + 0xb0);
    if (iVar4 == 0) {
      pcVar21 = "an initial caesura";
LAB_140e8b0c3:
      load_supplier_0x70b20(param_2,pcVar21);
    }
    else {
      if (iVar4 == 1) {
        pcVar21 = "a medial caesura";
        goto LAB_140e8b0c3;
      }
      if (iVar4 == 2) {
        pcVar21 = "a terminal caesura";
        goto LAB_140e8b0c3;
      }
    }
    load_supplier_0x70b20(param_2,".  ");
  }
  cStack_3e8 = '\x01';
  load_supplier_0x70800(param_1 + 0x90,&uStack_3a8);
  load_supplier_0x707f0(param_1 + 0x90,&uStack_358);
  puVar10 = (undefined1 *)load_supplier_0x703e0(&uStack_3a8,acStack_3f5,&uStack_358);
  cVar3 = load_supplier_0x66d70(*puVar10,0);
  while (cVar3 != '\0') {
    puVar9 = (undefined8 *)load_supplier_0x703d0(&uStack_3a8);
    if (((((*(byte *)*puVar9 & 1) == 0) &&
         (uVar12 = load_supplier_0x70410(param_1 + 0x90), 1 < uVar12)) ||
        (plVar8 = (longlong *)load_supplier_0x703d0(&uStack_3a8), *(int *)(*plVar8 + 0x18) != -1))
       || (plVar8 = (longlong *)load_supplier_0x703d0(&uStack_3a8), *(int *)(*plVar8 + 0x1c) != -1))
    {
LAB_140e8b2d9:
      cStack_3e8 = '\0';
      goto LAB_140e8b703;
    }
    iVar4 = -1;
    bVar1 = true;
    bVar31 = false;
    plVar8 = (longlong *)load_supplier_0x703d0(&uStack_3a8);
    load_supplier_0x70800(*plVar8 + 0x20,&piStack_3c8);
    plVar8 = (longlong *)load_supplier_0x703d0(&uStack_3a8);
    load_supplier_0x707f0(*plVar8 + 0x20,&pbStack_3b0);
    puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_3c8,&cStack_3f6,&pbStack_3b0);
    cVar3 = load_supplier_0x66d70(*puVar10,0);
    if (cVar3 == '\0') goto LAB_140e8b2d9;
    do {
      piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
      if ((-1 < *piVar13) && (piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8), *piVar13 < 0x1a)
         ) {
        piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
        if (iVar4 == -1) {
          iVar4 = *piVar13;
        }
        else if (*piVar13 != iVar4) {
          bVar1 = false;
        }
        bVar31 = true;
      }
      load_supplier_0x70910(&piStack_3c8);
      puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_3c8,&cStack_3f6,&pbStack_3b0);
      cVar3 = load_supplier_0x66d70(*puVar10,0);
      param_2 = uStack_378;
    } while (cVar3 != '\0');
    if ((!bVar31) || (!bVar1)) goto LAB_140e8b2d9;
    load_supplier_0x703c0(&uStack_3a8);
    puVar10 = (undefined1 *)load_supplier_0x703e0(&uStack_3a8,acStack_3f5,&uStack_358);
    cVar3 = load_supplier_0x66d70(*puVar10,0);
  }
  uVar12 = load_supplier_0x70410(param_1 + 0x90);
  if ((uVar12 < 2) &&
     (plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0), *(int *)(*plVar8 + 0xc) < 2))
  goto LAB_140e8b703;
  load_supplier_0x70b20(param_2,"The ending of each line of the poem shares the same rhyme");
  if ((*(byte *)(param_1 + 0xe4) & 2) == 0) {
    uVar12 = load_supplier_0x70410(param_1 + 0x90);
    if (uVar12 < 2) {
      plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
      lVar22 = load_supplier_0x70930(*plVar8 + 0x80);
      if (lVar22 != 0) {
        iVar4 = 0;
        plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
        load_supplier_0x70800(*plVar8 + 0x80,&plStack_3c0);
        plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
        load_supplier_0x707f0(*plVar8 + 0x80,&pbStack_3b0);
        puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
        cVar3 = load_supplier_0x66d70(*puVar10,0);
        if (cVar3 != '\0') {
          do {
            pbVar14 = (byte *)load_supplier_0x703d0(&plStack_3c0);
            iVar5 = iVar4 + 1;
            if ((*pbVar14 & 2) == 0) {
              iVar5 = iVar4;
            }
            iVar4 = iVar5;
            load_supplier_0x70910(&plStack_3c0);
            puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
            cVar3 = load_supplier_0x66d70(*puVar10,0);
          } while (cVar3 != '\0');
          if (0 < iVar4) {
            load_supplier_0x70b20(param_2,", though the rhyme");
            if (1 < iVar4) {
              load_supplier_0x70b20(param_2,"s");
            }
            load_supplier_0x70b20(param_2," at the end of the ");
            iVar30 = 1;
            plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
            load_supplier_0x70800(*plVar8 + 0x80,&piStack_398);
            plVar8 = (longlong *)load_supplier_0x707e0(param_1 + 0x90,0);
            load_supplier_0x707f0(*plVar8 + 0x80,auStack_390);
            puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_398,&cStack_3f6,auStack_390);
            cVar3 = load_supplier_0x66d70(*puVar10,0);
            iVar5 = iVar4;
            while (cVar3 != '\0') {
              pbVar14 = (byte *)load_supplier_0x703d0(&piStack_398);
              if ((*pbVar14 & 2) != 0) {
                load_supplier_0x70c50(auStack_2e0);
                FUN_140545850(iVar30,auStack_2e0,0);
                load_supplier_0x543d60(auStack_2e0);
                load_supplier_0xbb2d0(param_2,auStack_2e0);
                if (iVar5 == 2) {
                  pcVar21 = " and ";
LAB_140e8b679:
                  load_supplier_0x70b20(param_2,pcVar21);
                }
                else if (2 < iVar5) {
                  pcVar21 = ", ";
                  goto LAB_140e8b679;
                }
                iVar5 = iVar5 + -1;
                load_supplier_0x693f0(auStack_2e0);
              }
              load_supplier_0x70910(&piStack_398);
              iVar30 = iVar30 + 1;
              puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_398,&cStack_3f6);
              cVar3 = load_supplier_0x66d70(*puVar10,0);
            }
            load_supplier_0x70b20(param_2," ");
            pcVar21 = "lines don\'t";
            if (iVar4 < 2) {
              pcVar21 = "line doesn\'t";
            }
            load_supplier_0x70b20(param_2,pcVar21);
            pcVar21 = " need to match perfectly";
            goto LAB_140e8b6ec;
          }
        }
      }
    }
    else {
      iVar4 = 0;
      load_supplier_0x70800(param_1 + 0x90,&plStack_3c0);
      load_supplier_0x707f0(param_1 + 0x90,&pbStack_3b0);
      puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
      cVar3 = load_supplier_0x66d70(*puVar10,0);
      if (cVar3 != '\0') {
        do {
          plVar8 = (longlong *)load_supplier_0x703d0(&plStack_3c0);
          iVar5 = iVar4 + 1;
          if ((*(byte *)(*plVar8 + 0x194) & 2) == 0) {
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          load_supplier_0x703c0(&plStack_3c0);
          puVar10 = (undefined1 *)load_supplier_0x703e0(&plStack_3c0,&cStack_3f6,&pbStack_3b0);
          cVar3 = load_supplier_0x66d70(*puVar10,0);
        } while (cVar3 != '\0');
        if (0 < iVar4) {
          load_supplier_0x70b20(param_2,", though rhymes at the end of lines in the ");
          iVar30 = 1;
          load_supplier_0x70800(param_1 + 0x90,&piStack_398);
          load_supplier_0x707f0(param_1 + 0x90,auStack_390);
          puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_398,&cStack_3f6,auStack_390);
          cVar3 = load_supplier_0x66d70(*puVar10,0);
          iVar5 = iVar4;
          while (cVar3 != '\0') {
            plVar8 = (longlong *)load_supplier_0x703d0(&piStack_398);
            if ((*(byte *)(*plVar8 + 0x194) & 2) != 0) {
              load_supplier_0x70c50(auStack_2e0);
              FUN_140545850(iVar30,auStack_2e0,0);
              load_supplier_0x543d60(auStack_2e0);
              load_supplier_0xbb2d0(param_2,auStack_2e0);
              if (iVar5 == 2) {
                pcVar21 = " and ";
LAB_140e8b449:
                load_supplier_0x70b20(param_2,pcVar21);
              }
              else if (2 < iVar5) {
                pcVar21 = ", ";
                goto LAB_140e8b449;
              }
              iVar5 = iVar5 + -1;
              load_supplier_0x693f0(auStack_2e0);
            }
            load_supplier_0x703c0(&piStack_398);
            iVar30 = iVar30 + 1;
            puVar10 = (undefined1 *)load_supplier_0x703e0(&piStack_398,&cStack_3f6);
            cVar3 = load_supplier_0x66d70(*puVar10,0);
          }
          load_supplier_0x70b20(param_2," ");
          pcVar21 = "sections";
          if (iVar4 < 2) {
            pcVar21 = "section";
          }
          load_supplier_0x70b20(param_2,pcVar21);
          pcVar21 = " don\'t need to match perfectly";
          goto LAB_140e8b6ec;
        }
      }
    }
  }
  else {
    pcVar21 = ", though the rhyming doesn\'t have to be perfect";
LAB_140e8b6ec:
    load_supplier_0x70b20(param_2,pcVar21);
  }
  load_supplier_0x70b20(param_2,".  ");
LAB_140e8b703:
  cStack_3b8 = '\x01';
  iVar4 = -1;
  puVar15 = (ulonglong *)load_supplier_0x70800(param_1 + 0x90,&pbStack_350);
  uStack_3a8 = *puVar15;
  puVar10 = (undefined1 *)load_supplier_0x703e0(&uStack_3a8,&cStack_3f6,&uStack_358);
  cVar3 = load_supplier_0x66d70(*puVar10,0);
  while (cVar3 != '\0') {
    lVar22 = 0x18;
    do {
      plVar8 = (longlong *)load_supplier_0x703d0(&uStack_3a8);
      if (*(int *)(lVar22 + *plVar8) != -1) {
        plVar8 = (longlong *)load_supplier_0x703d0(&uStack_3a8);
        if (iVar4 == -1) {
          iVar4 = *(int *)(lVar22 + *plVar8);
        }
        else if (iVar4 != *(int *)(lVar22 + *plVar8)) {
          cStack_3b8 = '\0';
          break;
        }
      }
      lVar22 = lVar22 + 4;
    } while (lVar22 < 0x20);
    load_supplier_0x703c0(&uStack_3a8);
    puVar10 = (undefined1 *)load_supplier_0x703e0(&uStack_3a8,&cStack_3f6,&uStack_358);
    cVar3 = load_supplier_0x66d70(*puVar10,0);
  }
  acStack_3f5[0] = '\0';
  uStack_220 = 0xffffffffffffffff;
  uStack_218 = 0xffffffffffffffff;
  uStack_210 = 0xffffffffffffffff;
  uStack_208 = 0xffffffffffffffff;
  uStack_200 = 0xffffffffffffffff;
  uStack_3dc = 0;
  uStack_1f8 = 0xffffffffffffffff;
  uStack_1f0 = 0xffffffffffffffff;
  uStack_1e8 = 0xffffffffffffffff;
  uStack_1e0 = 0xffffffffffffffff;
  uStack_1d8 = 0xffffffffffffffff;
  uStack_1d0 = 0xffffffffffffffff;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  uStack_1b8 = 0xffffffffffffffff;
  uStack_1b0 = 0xffffffffffffffff;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1a0 = 0xffffffffffffffff;
  uStack_198 = 0xffffffffffffffff;
  iStack_37c = 0;
  iStack_3d8 = 0;
  cStack_3f6 = '\0';
  puVar15 = (ulonglong *)load_supplier_0x70800(param_1 + 0x90);
  uStack_3a8 = *puVar15;
  plVar8 = (longlong *)(param_1 + 0x90);
  iStack_368 = 1;
  iStack_364 = 1;
  cVar23 = cStack_3f8;
  cVar3 = cStack_3f8;
  cVar25 = cStack_3f8;
  plStack_3c0 = plVar8;
  do {
    if (uStack_3a8 == uStack_358) {
      cVar32 = '\0';
    }
    else {
      cVar32 = '\x01';
      if (uStack_3a8 < uStack_358) {
        cVar32 = -1;
      }
    }
    if (-1 < cVar32) {
      load_supplier_0x693f0(auStack_240);
      FUN_14154de00(uStack_58 ^ (ulonglong)auStack_428);
      return;
    }
    puVar9 = (undefined8 *)load_supplier_0x703d0(&uStack_3a8);
    puVar11 = (uint *)*puVar9;
    puStack_3d0 = puVar11;
    lVar22 = load_supplier_0x70410(plVar8);
    cVar32 = lVar22 == 1;
    cStack_3f7 = cVar32;
    load_supplier_0x70c50(auStack_300);
    if (((puVar11[0x60] == 0xffffffff) && (puVar11[99] == 0xffffffff)) &&
       (puVar11[0x61] == 0xffffffff)) goto LAB_140e8bc24;
    if (lVar22 == 1) {
      load_supplier_0x70b20(auStack_300,"It");
      cStack_3f7 = cVar32;
    }
    else {
      load_supplier_0x70b20(auStack_300,"The ");
      load_supplier_0x70c50(auStack_2e0);
      FUN_140545850(iStack_368,auStack_2e0,0);
      load_supplier_0x543d60(auStack_2e0);
      load_supplier_0xbb2d0(auStack_300,auStack_2e0);
      load_supplier_0x70b20(auStack_300," part");
      cStack_3f7 = '\x01';
      load_supplier_0x693f0(auStack_2e0);
    }
    load_supplier_0x70b20(auStack_300," ");
    if (puVar11[0x60] < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(puVar11[0x60]) {
      case 0:
        pcVar21 = "is a narrative";
        break;
      case 1:
        pcVar21 = "is dramatic";
        break;
      case 2:
        pcVar21 = "is reflective";
        break;
      case 3:
        pcVar21 = "is a riddle";
        break;
      case 4:
        pcVar21 = "is ribald";
        break;
      case 5:
        pcVar21 = "is light";
        break;
      case 6:
        pcVar21 = "is solemn";
      }
      load_supplier_0x70b20(auStack_300,pcVar21);
    }
    if (puVar11[99] == 0xffffffff) {
      if (puVar11[0x61] != 0xffffffff) {
        if (puVar11[0x60] != 0xffffffff) {
          load_supplier_0x70b20(auStack_300," and ");
        }
        pcVar21 = "concerns ";
        goto LAB_140e8bbee;
      }
      goto LAB_140e8bc0e;
    }
    pcVar21 = " and";
    if (puVar11[0x60] == 0xffffffff) {
      pcVar21 = "is";
    }
    load_supplier_0x70b20(auStack_300,pcVar21);
    load_supplier_0x70b20(auStack_300," intended ");
    bVar31 = false;
    bVar1 = false;
    if (0x16 < puVar11[99]) goto LAB_140e8bb84;
    bVar1 = false;
                    /* WARNING: Switch is manually overridden */
    switch(puVar11[99]) {
    case 0:
      load_supplier_0x70b20(auStack_300,"to describe");
      bVar1 = true;
      goto LAB_140e8bb84;
    case 1:
      load_supplier_0x70b20(auStack_300,"to satirize");
      bVar1 = true;
      goto LAB_140e8bb84;
    case 2:
      pcVar21 = "to amuse the audience";
      break;
    case 3:
      load_supplier_0x70b20(auStack_300,"to complain about");
      bVar1 = true;
      goto LAB_140e8bb84;
    case 4:
      load_supplier_0x70b20(auStack_300,"to renounce");
      goto LAB_140e8bb84;
    case 5:
      pcVar21 = "to make an apology";
      break;
    case 6:
      load_supplier_0x70b20(auStack_300,"to express pleasure with");
      bVar1 = true;
      goto LAB_140e8bb84;
    case 7:
      load_supplier_0x70b20(auStack_300,"to express grief over");
      bVar1 = true;
      goto LAB_140e8bb84;
    case 8:
      load_supplier_0x70b20(auStack_300,"to praise");
      bVar1 = true;
      goto LAB_140e8bb84;
    case 9:
      pcVar21 = "to teach a moral lesson";
      break;
    case 10:
      pcVar21 = "to make an assertion";
      break;
    case 0xb:
      pcVar21 = "to make a counter-assertion";
      break;
    case 0xc:
      pcVar21 = "to make a concession";
      break;
    case 0xd:
      pcVar21 = "to synthesize previous ideas";
      break;
    case 0xe:
      pcVar21 = "to develop the previous idea";
      break;
    case 0xf:
      pcVar21 = "to invert the previous assertion";
      break;
    case 0x10:
      pcVar21 = "to undercut the previous assertion";
      break;
    case 0x11:
      pcVar21 = "to move away from previous ideas";
      break;
    case 0x12:
      pcVar21 = "to reflect on previous ideas";
      break;
    case 0x13:
      pcVar21 = "to console the audience";
      break;
    case 0x14:
      pcVar21 = "to refuse consolation";
      break;
    case 0x15:
      pcVar21 = "to offer a different perspective";
      break;
    case 0x16:
      load_supplier_0x70b20(param_2,"to beseech");
      bVar1 = false;
      goto LAB_140e8bb84;
    }
    load_supplier_0x70b20(auStack_300,pcVar21);
    bVar31 = true;
LAB_140e8bb84:
    if (puVar11[0x61] == 0xffffffff) {
      if (bVar1) {
        load_supplier_0x70b20(auStack_300," the subject of the poem");
      }
    }
    else {
      if (bVar31) {
        load_supplier_0x70b20(auStack_300," concerning");
      }
      pcVar21 = " ";
LAB_140e8bbee:
      load_supplier_0x70b20(auStack_300,pcVar21);
      load_poetic_topic(auStack_300,puVar11[0x61],puVar11[0x62]);
    }
LAB_140e8bc0e:
    load_supplier_0x70b20(auStack_300,".  ");
    cVar32 = cStack_3f7;
LAB_140e8bc24:
    if (puVar11[100] != 0xffffffff) {
      if (cVar32 == '\0') {
        load_supplier_0x70b20(auStack_300,"The ");
        load_supplier_0x70c50(auStack_2e0);
        FUN_140545850(iStack_364,auStack_2e0,0);
        load_supplier_0x543d60(auStack_2e0);
        load_supplier_0xbb2d0(auStack_300,auStack_2e0);
        load_supplier_0x70b20(auStack_300," part");
        cStack_3f7 = '\x01';
        load_supplier_0x693f0(auStack_2e0);
      }
      else {
        load_supplier_0x70b20(auStack_300,"It");
      }
      load_supplier_0x70b20(auStack_300," is written from the perspective of ");
      puVar9 = (undefined8 *)load_supplier_0x707e0(lStack_388 + 0xe8,(longlong)(int)puVar11[100]);
      puVar16 = (uint *)*puVar9;
      if (*puVar16 < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(*puVar16) {
        case 0:
          pcVar21 = "the author";
          break;
        case 1:
          pcVar21 = "a soldier";
          break;
        case 2:
          pcVar21 = "a traveler";
          break;
        case 3:
          pcVar21 = "a relative of the author";
          break;
        case 4:
          pcVar21 = "a party to a debate";
          break;
        case 5:
          pcVar21 = "a fictional poet";
          break;
        case 6:
          if (puVar16[1] != 0xffffffff) {
            load_supplier_0x73640(&uStack_128);
            uStack_400 = 0;
            uStack_408 = 1;
            FUN_140ba79f0(0x142516038,auStack_300,puVar16[1]);
            goto LAB_140e8bdc9;
          }
          pcVar21 = "a historical figure";
          break;
        case 7:
          if (puVar16[1] != 0xffffffff) {
            load_supplier_0x70b20(auStack_300,"a ");
            uStack_400 = uStack_400 & 0xff00;
            uStack_408 = (undefined2)puVar16[2];
            FUN_140ba99b0(0x142516038,auStack_300,puVar16[1]);
            goto LAB_140e8bdc9;
          }
          pcVar21 = "an animal";
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
      }
LAB_140e8bdc9:
      load_supplier_0x70b20(auStack_300,".  ");
    }
    uVar29 = puVar11[0x65];
    iVar4 = iStack_3d8;
    if (uVar29 != 0) {
      uVar20 = uVar29 & 1;
      if ((uVar29 & 4) != 0) {
        uVar20 = uVar20 + 1;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 & 8) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 & 0x10) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 9 & 1) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 10 & 1) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 0xb & 1) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 0xc & 1) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 0xd & 1) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 0xf & 1) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 0x10 & 1) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 0x11 & 1) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 0x12 & 1) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 0x13 & 1) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 0x14 & 1) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 0x15 & 1) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 >> 0x16 & 1) == 0) {
        uVar24 = uVar20;
      }
      if (uVar24 != 0) {
        if (cStack_3f7 == '\0') {
          load_supplier_0x70b20(auStack_300,"The ");
          load_supplier_0x70c50(auStack_2e0);
          iVar4 = iStack_3d8;
          FUN_140545850(iStack_3d8 + 1,auStack_2e0,0);
          load_supplier_0x543d60(auStack_2e0);
          load_supplier_0xbb2d0(auStack_300,auStack_2e0);
          load_supplier_0x70b20(auStack_300," part");
          cStack_3f7 = '\x01';
          load_supplier_0x693f0(auStack_2e0);
        }
        else {
          load_supplier_0x70b20(auStack_300,"It");
          iVar4 = iStack_3d8;
        }
        load_supplier_0x70b20(auStack_300," must make use of ");
        uVar20 = 0;
        uVar29 = uStack_3e4;
        do {
          if (uVar20 < 0x11) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar20) {
            case 0:
              uVar29 = 1;
              break;
            case 1:
              uVar29 = 4;
              break;
            case 2:
              uVar29 = 8;
              break;
            case 3:
              uVar29 = 0x10;
              break;
            case 4:
              uVar29 = 0x200;
              break;
            case 5:
              uVar29 = 0x400;
              break;
            case 6:
              uVar29 = 0x800;
              break;
            case 7:
              uVar29 = 0x1000;
              break;
            case 8:
              uVar29 = 0x2000;
              break;
            case 9:
              uVar29 = 0x8000;
              break;
            case 10:
              uVar29 = 0x10000;
              break;
            case 0xb:
              uVar29 = 0x20000;
              break;
            case 0xc:
              uVar29 = 0x40000;
              break;
            case 0xd:
              uVar29 = 0x80000;
              break;
            case 0xe:
              uVar29 = 0x100000;
              break;
            case 0xf:
              uVar29 = 0x200000;
              break;
            case 0x10:
              uVar29 = 0x400000;
            }
          }
          if ((puVar11[0x65] & uVar29) != 0) {
            if (uVar29 < 0x2001) {
              if (uVar29 == 0x2000) {
                pcVar21 = "synchysis";
              }
              else if (uVar29 < 0x201) {
                if (uVar29 == 0x200) {
                  pcVar21 = "assonance";
                }
                else if (uVar29 == 1) {
                  pcVar21 = "internal rhyme";
                }
                else if (uVar29 == 4) {
                  pcVar21 = "alliteration";
                }
                else if (uVar29 == 8) {
                  pcVar21 = "onomatopoeia";
                }
                else {
                  if (uVar29 != 0x10) goto LAB_140e8c11c;
                  pcVar21 = "antanaclasis";
                }
              }
              else if (uVar29 == 0x400) {
                pcVar21 = "consonance";
              }
              else if (uVar29 == 0x800) {
                pcVar21 = "elision";
              }
              else {
                if (uVar29 != 0x1000) goto LAB_140e8c11c;
                pcVar21 = "epenthesis";
              }
LAB_140e8c113:
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
            else {
              if (uVar29 < 0x80001) {
                if (uVar29 == 0x80000) {
                  pcVar21 = "simile";
                }
                else if (uVar29 == 0x8000) {
                  pcVar21 = "allegory";
                }
                else if (uVar29 == 0x10000) {
                  pcVar21 = "ambiguity";
                }
                else if (uVar29 == 0x20000) {
                  pcVar21 = "symbolism";
                }
                else {
                  if (uVar29 != 0x40000) goto LAB_140e8c11c;
                  pcVar21 = "metaphor";
                }
                goto LAB_140e8c113;
              }
              if (uVar29 == 0x100000) {
                pcVar21 = "metonymy";
                goto LAB_140e8c113;
              }
              if (uVar29 == 0x200000) {
                pcVar21 = "vivid imagery";
                goto LAB_140e8c113;
              }
              if (uVar29 == 0x400000) {
                pcVar21 = "juxtaposition";
                goto LAB_140e8c113;
              }
            }
LAB_140e8c11c:
            if (uVar24 == 2) {
              pcVar21 = " and ";
LAB_140e8c134:
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
            else if (2 < (int)uVar24) {
              pcVar21 = ", ";
              goto LAB_140e8c134;
            }
            uVar24 = uVar24 - 1;
          }
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < 0x11);
        uStack_3e4 = uVar29;
        load_supplier_0x70b20(auStack_300,".  ");
        cVar23 = cStack_3f8;
        cVar3 = cStack_3f8;
        cVar25 = cStack_3f8;
      }
    }
    lVar22 = load_supplier_0x70930(puVar11 + 0x5a);
    if (lVar22 != 0) {
      iVar5 = load_supplier_0x70930(puVar11 + 0x5a);
      load_supplier_0x70b20(auStack_300,"Certain lines");
      if (cStack_3f7 == '\0') {
        load_supplier_0x70b20(auStack_300," of the ");
        load_supplier_0x70c50(auStack_2e0);
        FUN_140545850(iVar4 + 1,auStack_2e0,0);
        load_supplier_0x543d60(auStack_2e0);
        load_supplier_0xbb2d0(auStack_300,auStack_2e0);
        load_supplier_0x70b20(auStack_300," part");
        cStack_3f7 = '\x01';
        load_supplier_0x693f0(auStack_2e0);
      }
      load_supplier_0x70b20(auStack_300," ");
      load_supplier_0x70800(puVar11 + 0x5a,auStack_390);
      load_supplier_0x707f0(puVar11 + 0x5a,auStack_348);
      puVar10 = (undefined1 *)load_supplier_0x703e0(auStack_390,auStack_3a0,auStack_348);
      cVar32 = load_supplier_0x66d70(*puVar10,0);
      while (cVar32 != '\0') {
        puVar16 = (uint *)load_supplier_0x703d0(auStack_390);
        if (*puVar16 < 8) {
                    /* WARNING: Switch is manually overridden */
          switch(*puVar16) {
          case 0:
            pcVar21 = "often share an underlying meaning";
            break;
          case 1:
            pcVar21 = "often contrast underlying meaning";
            break;
          case 2:
            pcVar21 = "are required to maintain phrasing";
            break;
          case 3:
            pcVar21 = "have similar grammatical structures";
            break;
          case 4:
            pcVar21 = "use the same placement of allusions";
            break;
          case 5:
            pcVar21 = "sometimes have reversed word orders";
            break;
          case 6:
            pcVar21 = "reverse grammatical structures";
            break;
          case 7:
            pcVar21 = "present different views of the same subject";
          }
          load_supplier_0x70b20(auStack_300,pcVar21);
        }
        if (iVar5 == 2) {
          pcVar21 = " and ";
LAB_140e8c2f4:
          load_supplier_0x70b20(auStack_300,pcVar21);
        }
        else if (2 < iVar5) {
          pcVar21 = ", ";
          goto LAB_140e8c2f4;
        }
        iVar5 = iVar5 + -1;
        load_supplier_0x70910(auStack_390);
        puVar10 = (undefined1 *)load_supplier_0x703e0(auStack_390,auStack_3a0,auStack_348);
        cVar32 = load_supplier_0x66d70(*puVar10,0);
        cVar3 = cStack_3f8;
      }
      load_supplier_0x70b20(auStack_300,".  ");
    }
    iVar4 = 0;
    puVar11 = puVar11 + 0x26;
    lVar22 = load_supplier_0x70930(puVar11);
    puVar16 = puStack_3d0;
    if (lVar22 != 0) {
      uVar12 = 0;
      do {
        piVar13 = (int *)load_supplier_0x70920(puVar16 + 0x2c,uVar12);
        iStack_39c = *piVar13;
        puVar17 = (undefined4 *)load_supplier_0x70920(puVar16 + 0x32,uVar12);
        uVar27 = *puVar17;
        if (cStack_3f7 == '\0') {
          load_supplier_0x70b20(auStack_300,"In the ");
          load_supplier_0x70c50(auStack_2e0);
          FUN_140545850(iStack_3d8 + 1,auStack_2e0,0);
          load_supplier_0x543d60(auStack_2e0);
          load_supplier_0xbb2d0(auStack_300,auStack_2e0);
          load_supplier_0x70b20(auStack_300," part, the ");
          cStack_3f7 = '\x01';
          load_supplier_0x693f0(auStack_2e0);
        }
        else {
          load_supplier_0x70b20(auStack_300,"The ");
        }
        load_supplier_0x70c50(auStack_2e0);
        FUN_140545850(uVar27,auStack_2e0,0);
        load_supplier_0x543d60(auStack_2e0);
        load_supplier_0xbb2d0(auStack_300,auStack_2e0);
        load_supplier_0x693f0(auStack_2e0);
        load_supplier_0x70b20(auStack_300," line of ");
        pcVar21 = "each ";
        if ((int)puVar16[2] < 2) {
          pcVar21 = "the ";
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
        if ((*puVar16 & 2) == 0) {
          uVar29 = puVar16[3];
          if (8 < (int)uVar29) {
            pcVar21 = "stanza";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 8) {
            pcVar21 = "octet";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 7) {
            pcVar21 = "septet";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 6) {
            pcVar21 = "sexain";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 5) {
            pcVar21 = "quintain";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 4) {
            pcVar21 = "quatrain";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 3) {
            pcVar21 = "tercet";
            goto LAB_140e8c4f0;
          }
          if (uVar29 == 2) {
            pcVar21 = "couplet";
            goto LAB_140e8c4f0;
          }
        }
        else {
          pcVar21 = "verse paragraph";
LAB_140e8c4f0:
          load_supplier_0x70b20(auStack_300,pcVar21);
        }
        load_supplier_0x70b20(auStack_300," ");
        puVar18 = (uint *)load_supplier_0x70920(puVar11,uVar12);
        if (*puVar18 < 9) {
                    /* WARNING: Switch is manually overridden */
          switch(*puVar18) {
          case 0:
            pcVar21 = "shares the underlying meaning of";
            break;
          case 1:
            pcVar21 = "contrasts the underlying meaning of";
            break;
          case 2:
            pcVar21 = "is required to maintain the phrasing of";
            break;
          case 3:
            pcVar21 = "has the same grammatical structure as";
            break;
          case 4:
            pcVar21 = "uses the same placement of allusions as";
            break;
          case 5:
            pcVar21 = "reverses the word order of";
            break;
          case 6:
            pcVar21 = "reverses the grammatical structure of";
            break;
          case 7:
            pcVar21 = "presents a different view of the subject of";
            break;
          case 8:
            pcVar21 = "must expand the idea of";
          }
          load_supplier_0x70b20(auStack_300,pcVar21);
        }
        load_supplier_0x70b20(auStack_300," the ");
        load_supplier_0x70c50(auStack_2e0);
        FUN_140545850(iStack_39c,auStack_2e0,0);
        load_supplier_0x543d60(auStack_2e0);
        load_supplier_0xbb2d0(auStack_300,auStack_2e0);
        load_supplier_0x693f0(auStack_2e0);
        load_supplier_0x70b20(auStack_300," line.  ");
        iVar4 = iVar4 + 1;
        uVar12 = (ulonglong)iVar4;
        uVar19 = load_supplier_0x70930(puVar11);
        cVar23 = cStack_3f8;
        cVar3 = cStack_3f8;
        cVar25 = cStack_3f8;
      } while (uVar12 < uVar19);
    }
    iVar4 = 0;
    uVar29 = puStack_3d0[0x65];
    if (uVar29 != 0) {
      uVar24 = uVar29 >> 5 & 1;
      uVar20 = uVar24 + 1;
      if ((uVar29 & 0x40) == 0) {
        uVar20 = uVar24;
      }
      uVar24 = uVar20 + 1;
      if ((uVar29 & 0x80) == 0) {
        uVar24 = uVar20;
      }
      uVar20 = uVar24 + 1;
      if ((uVar29 >> 8 & 1) == 0) {
        uVar20 = uVar24;
      }
      if (uVar20 != 0) {
        if (cStack_3f7 == '\0') {
          load_supplier_0x70b20(auStack_300,"The ");
          load_supplier_0x70c50(auStack_2e0);
          FUN_140545850(iStack_3d8 + 1,auStack_2e0,0);
          load_supplier_0x543d60(auStack_2e0);
          load_supplier_0xbb2d0(auStack_300,auStack_2e0);
          load_supplier_0x70b20(auStack_300," part");
          cStack_3f7 = '\x01';
          load_supplier_0x693f0(auStack_2e0);
        }
        else {
          load_supplier_0x70b20(auStack_300,"It");
        }
        load_supplier_0x70b20(auStack_300," includes ");
        uVar26 = uStack_378;
        puVar11 = puStack_3d0;
        uVar29 = uStack_380;
        uVar24 = uVar20;
        do {
          if (iVar4 == 0) {
            uVar29 = 0x20;
          }
          else if (iVar4 == 1) {
            uVar29 = 0x40;
          }
          else if (iVar4 == 2) {
            uVar29 = 0x80;
          }
          else if (iVar4 == 3) {
            uVar29 = 0x100;
          }
          if ((puVar11[0x65] & uVar29) != 0) {
            if (uVar29 == 0x20) {
              pcVar21 = "lines with different readings depending on word breaks";
LAB_140e8c768:
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
            else {
              if (uVar29 == 0x40) {
                pcVar21 = "lines which can be read backwards as well as forwards";
                goto LAB_140e8c768;
              }
              if (uVar29 == 0x80) {
                pcVar21 = "lines which can be read orthogonally across the standard lines";
                goto LAB_140e8c768;
              }
              if (uVar29 == 0x100) {
                if (1 < uVar20) {
                  load_supplier_0x70b20(uVar26,"even ");
                }
                pcVar21 = "lines which emerge when reading along certain prescribed paths";
                goto LAB_140e8c768;
              }
            }
            if (uVar24 == 2) {
              pcVar21 = " and ";
LAB_140e8c789:
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
            else if (2 < (int)uVar24) {
              pcVar21 = ", ";
              goto LAB_140e8c789;
            }
            uVar24 = uVar24 - 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        uStack_380 = uVar29;
        load_supplier_0x70b20(auStack_300);
        cVar23 = cStack_3f8;
        cVar25 = cStack_3f8;
      }
    }
    lVar22 = lStack_388;
    puVar11 = puStack_3d0;
    uVar29 = puStack_3d0[0x57];
    if ((uVar29 != 0xffffffff) || (puStack_3d0[0x56] != 0)) {
      uVar20 = puStack_3d0[0x56];
      if ((*(uint *)(lStack_388 + 0xa8) != 0) && (uVar20 == 0)) {
        uVar20 = *(uint *)(lStack_388 + 0xa8);
      }
      uVar24 = uVar29;
      if (((*(uint *)(lStack_388 + 0xac) == 0xffffffff) ||
          (uVar24 = *(uint *)(lStack_388 + 0xac), uVar29 == 0xffffffff)) &&
         (uVar29 = uVar24, uVar24 == 0xffffffff)) {
        if (uVar20 == 0) goto LAB_140e8d050;
        if (cStack_3f7 == '\0') {
          load_supplier_0x70b20(auStack_300,"The ");
          load_supplier_0x70c50(auStack_2e0);
          FUN_140545850(iStack_3d8 + 1,auStack_2e0,0);
          load_supplier_0x543d60(auStack_2e0);
          load_supplier_0xbb2d0(auStack_300,auStack_2e0);
          load_supplier_0x70b20(auStack_300," part");
          cStack_3f7 = '\x01';
          load_supplier_0x693f0(auStack_2e0);
        }
        else {
          load_supplier_0x70b20(auStack_300,"It");
        }
        pcVar21 = " has lines with ";
        if ((int)puVar11[3] < 2) {
          pcVar21 = " has ";
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
        load_supplier_0x70c50(auStack_2c0);
        FUN_140545040(uVar20,auStack_2c0);
        load_supplier_0xbb2d0(auStack_300,auStack_2c0);
        load_supplier_0x70b20(auStack_300);
        puVar10 = auStack_2c0;
      }
      else {
        if (cStack_3f7 == '\0') {
          load_supplier_0x70b20(auStack_300,"The ");
          load_supplier_0x70c50(auStack_2e0);
          FUN_140545850(iStack_3d8 + 1,auStack_2e0,0);
          load_supplier_0x543d60(auStack_2e0);
          load_supplier_0xbb2d0(auStack_300,auStack_2e0);
          load_supplier_0x70b20(auStack_300," part");
          cStack_3f7 = '\x01';
          load_supplier_0x693f0(auStack_2e0);
        }
        else {
          load_supplier_0x70b20(auStack_300,"It");
        }
        pcVar21 = " has lines with ";
        if ((int)puVar11[3] < 2) {
          pcVar21 = " has ";
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
        load_supplier_0x70c50(auStack_260);
        FUN_140545040(uVar20,auStack_260);
        load_supplier_0xbb2d0(auStack_300,auStack_260);
        load_supplier_0x70b20(auStack_300," ");
        pcVar21 = "foot";
        if (uVar20 != 1) {
          pcVar21 = "feet";
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
        load_supplier_0x70b20(auStack_300," with ");
        if ((*(byte *)(lVar22 + 0x8c) & 1) == 0) {
          if ((*(uint *)(lVar22 + 0xe4) & 0x4000) == 0) {
            load_supplier_0x70b20(auStack_300,"an accent pattern of ");
            if (uVar29 < 0xc) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar29) {
              case 0:
                load_supplier_0x70b20(auStack_300,"unstressed-unstressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_0:
                pcVar21 = "pyrrhic";
                break;
              case 1:
                load_supplier_0x70b20(auStack_300,"unstressed-stressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_1:
                pcVar21 = "iambic";
                break;
              case 2:
                load_supplier_0x70b20(auStack_300,"stressed-unstressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_2:
                pcVar21 = "trochaic";
                break;
              case 3:
                load_supplier_0x70b20(auStack_300,"stressed-stressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_3:
                pcVar21 = "spondaic";
                break;
              case 4:
                load_supplier_0x70b20(auStack_300,"unstressed-unstressed-unstressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_4:
                pcVar21 = "tribrachic";
                break;
              case 5:
                load_supplier_0x70b20(auStack_300,"stressed-unstressed-unstressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_5:
                pcVar21 = "dactylic";
                break;
              case 6:
                load_supplier_0x70b20(auStack_300,"unstressed-stressed-unstressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_6:
                pcVar21 = "amphibrachic";
                break;
              case 7:
                load_supplier_0x70b20(auStack_300,"unstressed-unstressed-stressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_7:
                pcVar21 = "anapaestic";
                break;
              case 8:
                load_supplier_0x70b20(auStack_300,"unstressed-stressed-stressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_8:
                pcVar21 = "bacchic";
                break;
              case 9:
                load_supplier_0x70b20(auStack_300,"stressed-stressed-unstressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_9:
                pcVar21 = "antibacchic";
                break;
              case 10:
                load_supplier_0x70b20(auStack_300,"stressed-unstressed-stressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_10:
                pcVar21 = "cretic";
                break;
              case 0xb:
                load_supplier_0x70b20(auStack_300,"stressed-stressed-stressed");
                load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8cf3f_case_11:
                pcVar21 = "molossic";
              }
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
            else {
              load_supplier_0x70b20(auStack_300," (qualitative ");
              if (uVar29 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                switch(uVar29) {
                case 1:
                  goto override_jmp_140e8cf3f_case_1;
                case 2:
                  goto override_jmp_140e8cf3f_case_2;
                case 3:
                  goto override_jmp_140e8cf3f_case_3;
                case 4:
                  goto override_jmp_140e8cf3f_case_4;
                case 5:
                  goto override_jmp_140e8cf3f_case_5;
                case 6:
                  goto override_jmp_140e8cf3f_case_6;
                case 7:
                  goto override_jmp_140e8cf3f_case_7;
                case 8:
                  goto override_jmp_140e8cf3f_case_8;
                case 9:
                  goto override_jmp_140e8cf3f_case_9;
                case 10:
                  goto override_jmp_140e8cf3f_case_10;
                case 0xb:
                  goto override_jmp_140e8cf3f_case_11;
                }
                goto override_jmp_140e8cf3f_case_0;
              }
            }
            load_supplier_0x70b20(auStack_300," ");
            if (uVar20 - 1 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar20 - 1) {
              case 1:
                goto override_jmp_140e8cc4b_case_1;
              case 2:
                goto override_jmp_140e8cc4b_case_2;
              case 3:
                goto override_jmp_140e8cc4b_case_3;
              case 4:
                goto override_jmp_140e8cc4b_case_4;
              case 5:
                goto override_jmp_140e8cc4b_case_5;
              case 6:
                goto override_jmp_140e8cc4b_case_6;
              case 7:
                goto override_jmp_140e8cc4b_case_7;
              }
override_jmp_140e8cc4b_case_0:
              pcVar21 = "monometer";
              goto LAB_140e8cf51;
            }
          }
          else {
            load_supplier_0x70b20(auStack_300,"a syllable weight pattern of ");
            if (uVar29 < 0xc) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar29) {
              case 0:
                load_supplier_0x70b20(auStack_300,"short-short");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_0:
                pcVar21 = "pyrrhic";
                break;
              case 1:
                load_supplier_0x70b20(auStack_300,"short-long");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_1:
                pcVar21 = "iambic";
                break;
              case 2:
                load_supplier_0x70b20(auStack_300,"long-short");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_2:
                pcVar21 = "trochaic";
                break;
              case 3:
                load_supplier_0x70b20(auStack_300,"long-long");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_3:
                pcVar21 = "spondaic";
                break;
              case 4:
                load_supplier_0x70b20(auStack_300,"short-short-short");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_4:
                pcVar21 = "tribrachic";
                break;
              case 5:
                load_supplier_0x70b20(auStack_300,"long-short-short");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_5:
                pcVar21 = "dactylic";
                break;
              case 6:
                load_supplier_0x70b20(auStack_300,"short-long-short");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_6:
                pcVar21 = "amphibrachic";
                break;
              case 7:
                load_supplier_0x70b20(auStack_300,"short-short-long");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_7:
                pcVar21 = "anapaestic";
                break;
              case 8:
                load_supplier_0x70b20(auStack_300,"short-long-long");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_8:
                pcVar21 = "bacchic";
                break;
              case 9:
                load_supplier_0x70b20(auStack_300,"long-long-short");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_9:
                pcVar21 = "antibacchic";
                break;
              case 10:
                load_supplier_0x70b20(auStack_300,"long-short-long");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_10:
                pcVar21 = "cretic";
                break;
              case 0xb:
                load_supplier_0x70b20(auStack_300,"long-long-long");
                load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8cc71_case_11:
                pcVar21 = "molossic";
              }
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
            else {
              load_supplier_0x70b20(auStack_300," (quantitative ");
              if (uVar29 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                switch(uVar29) {
                case 1:
                  goto override_jmp_140e8cc71_case_1;
                case 2:
                  goto override_jmp_140e8cc71_case_2;
                case 3:
                  goto override_jmp_140e8cc71_case_3;
                case 4:
                  goto override_jmp_140e8cc71_case_4;
                case 5:
                  goto override_jmp_140e8cc71_case_5;
                case 6:
                  goto override_jmp_140e8cc71_case_6;
                case 7:
                  goto override_jmp_140e8cc71_case_7;
                case 8:
                  goto override_jmp_140e8cc71_case_8;
                case 9:
                  goto override_jmp_140e8cc71_case_9;
                case 10:
                  goto override_jmp_140e8cc71_case_10;
                case 0xb:
                  goto override_jmp_140e8cc71_case_11;
                }
                goto override_jmp_140e8cc71_case_0;
              }
            }
            load_supplier_0x70b20(auStack_300," ");
            if (uVar20 - 1 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar20 - 1) {
              case 0:
                goto override_jmp_140e8cc4b_case_0;
              case 1:
override_jmp_140e8cc4b_case_1:
                pcVar21 = "dimeter";
                break;
              case 2:
override_jmp_140e8cc4b_case_2:
                pcVar21 = "trimeter";
                break;
              case 3:
override_jmp_140e8cc4b_case_3:
                pcVar21 = "tetrameter";
                break;
              case 4:
override_jmp_140e8cc4b_case_4:
                pcVar21 = "pentameter";
                break;
              case 5:
override_jmp_140e8cc4b_case_5:
                pcVar21 = "hexameter";
                break;
              case 6:
override_jmp_140e8cc4b_case_6:
                pcVar21 = "heptameter";
                break;
              case 7:
override_jmp_140e8cc4b_case_7:
                pcVar21 = "octameter";
              }
LAB_140e8cf51:
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
          }
        }
        else {
          load_supplier_0x70b20(auStack_300,"a tone pattern of ");
          if (uVar29 < 0xc) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar29) {
            case 0:
              pcVar21 = "even-even";
              break;
            case 1:
              pcVar21 = "even-uneven";
              break;
            case 2:
              pcVar21 = "uneven-even";
              break;
            case 3:
              pcVar21 = "uneven-uneven";
              break;
            case 4:
              pcVar21 = "even-even-even";
              break;
            case 5:
              pcVar21 = "uneven-even-even";
              break;
            case 6:
              pcVar21 = "even-uneven-even";
              break;
            case 7:
              pcVar21 = "even-even-uneven";
              break;
            case 8:
              pcVar21 = "even-uneven-uneven";
              break;
            case 9:
              pcVar21 = "uneven-uneven-even";
              break;
            case 10:
              pcVar21 = "uneven-even-uneven";
              break;
            case 0xb:
              pcVar21 = "uneven-uneven-uneven";
            }
            load_supplier_0x70b20(auStack_300,pcVar21);
          }
        }
        load_supplier_0x70b20(auStack_300);
        puVar10 = auStack_260;
      }
      load_supplier_0x693f0(puVar10);
    }
LAB_140e8d050:
    if (puVar11[0x58] != 0xffffffff) {
      if (cStack_3f7 == '\0') {
        load_supplier_0x70b20(auStack_300,"The ");
        load_supplier_0x70c50(auStack_2e0);
        FUN_140545850(iStack_3d8 + 1,auStack_2e0,0);
        load_supplier_0x543d60(auStack_2e0);
        load_supplier_0xbb2d0(auStack_300,auStack_2e0);
        load_supplier_0x70b20(auStack_300," part");
        cStack_3f7 = '\x01';
        load_supplier_0x693f0(auStack_2e0);
      }
      else {
        load_supplier_0x70b20(auStack_300,"It");
      }
      load_supplier_0x70b20(auStack_300," has ");
      uVar29 = puVar11[0x58];
      if (uVar29 == 0) {
        pcVar21 = "an initial caesura";
LAB_140e8d111:
        load_supplier_0x70b20(auStack_300,pcVar21);
      }
      else {
        if (uVar29 == 1) {
          pcVar21 = "a medial caesura";
          goto LAB_140e8d111;
        }
        if (uVar29 == 2) {
          pcVar21 = "a terminal caesura";
          goto LAB_140e8d111;
        }
      }
      if (1 < (int)puVar11[3]) {
        load_supplier_0x70b20(auStack_300," in each line");
      }
      load_supplier_0x70b20(auStack_300);
    }
    iVar5 = load_supplier_0x70930(puVar11 + 0xe);
    puStack_338 = puVar11 + 0x14;
    iVar4 = load_supplier_0x70930();
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    iVar5 = load_supplier_0x70930(puVar11 + 0x1a);
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    puStack_340 = puVar11 + 0x20;
    iVar4 = load_supplier_0x70930();
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    iVar5 = load_supplier_0x70930(puVar11 + 0x38);
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = load_supplier_0x70930(puVar11 + 0x3e);
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    iVar5 = load_supplier_0x70930(puVar11 + 0x4a);
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    puStack_330 = puVar11 + 0x50;
    iVar4 = load_supplier_0x70930();
    uVar12 = 0;
    uStack_3b4 = 0;
    lStack_360 = 0;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    lStack_310 = (longlong)iVar4;
    if (0 < lStack_310) {
      iStack_36c = 1;
      iStack_39c = 1;
      uVar26 = uStack_378;
      puVar11 = puVar11 + 0x50;
      do {
        puVar16 = puStack_3d0;
        cStack_3f8 = '\0';
        if (((*(longlong *)(puStack_3d0 + 0x3a) - *(longlong *)(puStack_3d0 + 0x38) >> 2 == 0) &&
            (lVar22 = load_supplier_0x70930(puStack_3d0 + 0x3e), lVar22 == 0)) &&
           (lVar22 = load_supplier_0x70930(puVar16 + 0x4a), cVar3 = '\0', lVar22 == 0))
        goto LAB_140e8d64a;
        uVar29 = 0xffffffff;
        uVar20 = 0xffffffff;
        iVar4 = -1;
        uStack_370 = 0xffffffff;
        uVar12 = (ulonglong)uStack_3b4;
        if (uVar12 < (ulonglong)
                     (*(longlong *)(puStack_3d0 + 0x3a) - *(longlong *)(puStack_3d0 + 0x38) >> 2)) {
          puVar11 = (uint *)load_supplier_0x70920(puStack_3d0 + 0x38,uVar12);
          uVar29 = *puVar11;
        }
        if (uVar12 < (ulonglong)
                     (*(longlong *)(puStack_3d0 + 0x4c) - *(longlong *)(puStack_3d0 + 0x4a) >> 2)) {
          puVar11 = (uint *)load_supplier_0x70920(puStack_3d0 + 0x4a,uVar12);
          uVar20 = *puVar11;
        }
        if (uVar12 < (ulonglong)
                     (*(longlong *)(puStack_3d0 + 0x40) - *(longlong *)(puStack_3d0 + 0x3e) >> 2)) {
          piVar13 = (int *)load_supplier_0x70920(puStack_3d0 + 0x3e,uVar12);
          iVar4 = *piVar13;
          puVar17 = (undefined4 *)load_supplier_0x70920(puStack_3d0 + 0x44,uVar12);
          uVar27 = *puVar17;
          uStack_370 = uVar27;
        }
        else {
          uVar27 = 0xffffffff;
        }
        load_supplier_0x70b20(auStack_300,"The ");
        load_supplier_0x70c50(auStack_280);
        FUN_140545850(iStack_36c,auStack_280,0);
        load_supplier_0x543d60(auStack_280);
        load_supplier_0xbb2d0(auStack_300,auStack_280);
        load_supplier_0x70b20(auStack_300," line");
        cStack_3f8 = '\x01';
        load_supplier_0x693f0(auStack_280);
        FUN_140070fd0(auStack_300," ",1);
        if (uVar29 < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar29) {
          case 0:
            pcVar21 = "is a narrative";
            break;
          case 1:
            pcVar21 = "is dramatic";
            break;
          case 2:
            pcVar21 = "is reflective";
            break;
          case 3:
            pcVar21 = "is a riddle";
            break;
          case 4:
            pcVar21 = "is ribald";
            break;
          case 5:
            pcVar21 = "is light";
            break;
          case 6:
            pcVar21 = "is solemn";
          }
          load_supplier_0x70b20(auStack_300,pcVar21);
        }
        if (uVar20 == 0xffffffff) {
          if (iVar4 != -1) {
            if (uVar29 != 0xffffffff) {
              load_supplier_0x70b20(auStack_300," and ");
            }
            load_supplier_0x70b20(auStack_300,"concerns ");
            goto LAB_140e8d619;
          }
          goto LAB_140e8d625;
        }
        pcVar21 = " and";
        if (uVar29 == 0xffffffff) {
          pcVar21 = "is";
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
        load_supplier_0x70b20(auStack_300," intended ");
        bVar1 = false;
        bVar31 = false;
        if (0x16 < uVar20) goto LAB_140e8d5a2;
                    /* WARNING: Switch is manually overridden */
        switch(uVar20) {
        case 0:
          load_supplier_0x70b20(auStack_300,"to describe");
          bVar1 = true;
          goto LAB_140e8d5a2;
        case 1:
          load_supplier_0x70b20(auStack_300,"to satirize");
          bVar1 = true;
          goto LAB_140e8d5a2;
        case 2:
          pcVar21 = "to amuse the audience";
          break;
        case 3:
          load_supplier_0x70b20(auStack_300,"to complain about");
          bVar1 = true;
          goto LAB_140e8d5a2;
        case 4:
          load_supplier_0x70b20(auStack_300,"to renounce");
          goto LAB_140e8d5a2;
        case 5:
          pcVar21 = "to make an apology";
          break;
        case 6:
          load_supplier_0x70b20(auStack_300,"to express pleasure with");
          bVar1 = true;
          goto LAB_140e8d5a2;
        case 7:
          load_supplier_0x70b20(auStack_300,"to express grief over");
          bVar1 = true;
          goto LAB_140e8d5a2;
        case 8:
          load_supplier_0x70b20(auStack_300,"to praise");
          bVar1 = true;
          goto LAB_140e8d5a2;
        case 9:
          pcVar21 = "to teach a moral lesson";
          break;
        case 10:
          pcVar21 = "to make an assertion";
          break;
        case 0xb:
          pcVar21 = "to make a counter-assertion";
          break;
        case 0xc:
          pcVar21 = "to make a concession";
          break;
        case 0xd:
          pcVar21 = "to synthesize previous ideas";
          break;
        case 0xe:
          pcVar21 = "to develop the previous idea";
          break;
        case 0xf:
          pcVar21 = "to invert the previous assertion";
          break;
        case 0x10:
          pcVar21 = "to undercut the previous assertion";
          break;
        case 0x11:
          pcVar21 = "to move away from previous ideas";
          break;
        case 0x12:
          pcVar21 = "to reflect on previous ideas";
          break;
        case 0x13:
          pcVar21 = "to console the audience";
          break;
        case 0x14:
          pcVar21 = "to refuse consolation";
          break;
        case 0x15:
          pcVar21 = "to offer a different perspective";
          break;
        case 0x16:
          load_supplier_0x70b20(uVar26,"to beseech");
          goto LAB_140e8d5a2;
        }
        load_supplier_0x70b20(auStack_300,pcVar21);
        bVar31 = true;
LAB_140e8d5a2:
        if (iVar4 == -1) {
          if (bVar1) {
            load_supplier_0x70b20(auStack_300," the subject of the poem");
          }
        }
        else {
          if (bVar31) {
            load_supplier_0x70b20(auStack_300," concerning");
          }
          load_supplier_0x70b20(auStack_300," ");
          uVar27 = uStack_370;
LAB_140e8d619:
          load_poetic_topic(auStack_300,iVar4,uVar27);
        }
LAB_140e8d625:
        FUN_140070fd0(auStack_300,".  ",3);
        uVar12 = (ulonglong)uStack_3b4;
        puVar11 = puStack_330;
        cVar3 = cStack_3f8;
LAB_140e8d64a:
        if (uVar12 < (ulonglong)(*(longlong *)(puVar11 + 2) - *(longlong *)puVar11 >> 2)) {
          piVar13 = (int *)load_supplier_0x70920(puVar11);
          iVar4 = *piVar13;
          if (iVar4 != -1) {
            if (cVar3 == '\0') {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2e0);
              FUN_140545850(iStack_39c,auStack_2e0,0);
              load_supplier_0x543d60(auStack_2e0);
              load_supplier_0xbb2d0(auStack_300,auStack_2e0);
              load_supplier_0x70b20(auStack_300," line");
              cVar3 = '\x01';
              cStack_3f8 = '\x01';
              load_supplier_0x693f0(auStack_2e0);
            }
            else {
              load_supplier_0x70b20(auStack_300,"It");
            }
            load_supplier_0x70b20(auStack_300," is written from the perspective of ");
            puVar9 = (undefined8 *)load_supplier_0x707e0(lStack_388 + 0xe8,(longlong)iVar4);
            puVar11 = (uint *)*puVar9;
            if (*puVar11 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(*puVar11) {
              case 0:
                pcVar21 = "the author";
                break;
              case 1:
                pcVar21 = "a soldier";
                break;
              case 2:
                pcVar21 = "a traveler";
                break;
              case 3:
                pcVar21 = "a relative of the author";
                break;
              case 4:
                pcVar21 = "a party to a debate";
                break;
              case 5:
                pcVar21 = "a fictional poet";
                break;
              case 6:
                if (puVar11[1] != 0xffffffff) {
                  load_supplier_0x73640(&uStack_128);
                  uStack_400 = 0;
                  uStack_408 = 1;
                  FUN_140ba79f0(0x142516038,auStack_300,puVar11[1],&uStack_128);
                  goto LAB_140e8d80c;
                }
                pcVar21 = "a historical figure";
                break;
              case 7:
                if (puVar11[1] != 0xffffffff) {
                  load_supplier_0x70b20(auStack_300,"a ");
                  uStack_400 = uStack_400 & 0xff00;
                  uStack_408 = (undefined2)puVar11[2];
                  FUN_140ba99b0(0x142516038,auStack_300,puVar11[1],0);
                  goto LAB_140e8d80c;
                }
                pcVar21 = "an animal";
              }
              load_supplier_0x70b20(auStack_300,pcVar21);
            }
LAB_140e8d80c:
            load_supplier_0x70b20(auStack_300,".  ");
          }
        }
        puVar11 = puStack_340;
        if (uVar12 < (ulonglong)(*(longlong *)(puStack_340 + 2) - *(longlong *)puStack_340 >> 2)) {
          puVar16 = (uint *)load_supplier_0x70920(puStack_340,uVar12);
          uVar29 = *puVar16;
          uVar20 = uVar29 & 1;
          if ((uVar29 & 4) != 0) {
            uVar20 = uVar20 + 1;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 & 8) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 & 0x10) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 9 & 1) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 >> 10 & 1) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 0xb & 1) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 >> 0xc & 1) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 0xd & 1) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 >> 0xf & 1) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 0x10 & 1) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 >> 0x11 & 1) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 0x12 & 1) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 >> 0x13 & 1) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 0x14 & 1) == 0) {
            uVar24 = uVar20;
          }
          uVar20 = uVar24 + 1;
          if ((uVar29 >> 0x15 & 1) == 0) {
            uVar20 = uVar24;
          }
          uVar24 = uVar20 + 1;
          if ((uVar29 >> 0x16 & 1) == 0) {
            uVar24 = uVar20;
          }
          if (uVar24 != 0) {
            if (cVar3 == '\0') {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2e0);
              FUN_140545850(uStack_3b4 + 1,auStack_2e0,0);
              load_supplier_0x543d60(auStack_2e0);
              load_supplier_0xbb2d0(auStack_300,auStack_2e0);
              load_supplier_0x70b20(auStack_300," line");
              cVar3 = '\x01';
              cStack_3f8 = '\x01';
              load_supplier_0x693f0(auStack_2e0);
            }
            else {
              load_supplier_0x70b20(auStack_300,"It");
            }
            load_supplier_0x70b20(auStack_300," must make use of ");
            uVar28 = 0;
            uVar20 = uStack_3e0;
            do {
              if (uVar28 < 0x11) {
                    /* WARNING: Switch is manually overridden */
                switch(uVar28) {
                case 0:
                  uVar20 = 1;
                  break;
                case 1:
                  uVar20 = 4;
                  break;
                case 2:
                  uVar20 = 8;
                  break;
                case 3:
                  uVar20 = 0x10;
                  break;
                case 4:
                  uVar20 = 0x200;
                  break;
                case 5:
                  uVar20 = 0x400;
                  break;
                case 6:
                  uVar20 = 0x800;
                  break;
                case 7:
                  uVar20 = 0x1000;
                  break;
                case 8:
                  uVar20 = 0x2000;
                  break;
                case 9:
                  uVar20 = 0x8000;
                  break;
                case 10:
                  uVar20 = 0x10000;
                  break;
                case 0xb:
                  uVar20 = 0x20000;
                  break;
                case 0xc:
                  uVar20 = 0x40000;
                  break;
                case 0xd:
                  uVar20 = 0x80000;
                  break;
                case 0xe:
                  uVar20 = 0x100000;
                  break;
                case 0xf:
                  uVar20 = 0x200000;
                  break;
                case 0x10:
                  uVar20 = 0x400000;
                }
              }
              if ((uVar29 & uVar20) != 0) {
                if (uVar20 < 0x2001) {
                  if (uVar20 == 0x2000) {
                    pcVar21 = "synchysis";
                  }
                  else if (uVar20 < 0x201) {
                    if (uVar20 == 0x200) {
                      pcVar21 = "assonance";
                    }
                    else if (uVar20 == 1) {
                      pcVar21 = "internal rhyme";
                    }
                    else if (uVar20 == 4) {
                      pcVar21 = "alliteration";
                    }
                    else if (uVar20 == 8) {
                      pcVar21 = "onomatopoeia";
                    }
                    else {
                      if (uVar20 != 0x10) goto LAB_140e8db82;
                      pcVar21 = "antanaclasis";
                    }
                  }
                  else if (uVar20 == 0x400) {
                    pcVar21 = "consonance";
                  }
                  else if (uVar20 == 0x800) {
                    pcVar21 = "elision";
                  }
                  else {
                    if (uVar20 != 0x1000) goto LAB_140e8db82;
                    pcVar21 = "epenthesis";
                  }
LAB_140e8db79:
                  load_supplier_0x70b20(auStack_300,pcVar21);
                }
                else {
                  if (uVar20 < 0x80001) {
                    if (uVar20 == 0x80000) {
                      pcVar21 = "simile";
                    }
                    else if (uVar20 == 0x8000) {
                      pcVar21 = "allegory";
                    }
                    else if (uVar20 == 0x10000) {
                      pcVar21 = "ambiguity";
                    }
                    else if (uVar20 == 0x20000) {
                      pcVar21 = "symbolism";
                    }
                    else {
                      if (uVar20 != 0x40000) goto LAB_140e8db82;
                      pcVar21 = "metaphor";
                    }
                    goto LAB_140e8db79;
                  }
                  if (uVar20 == 0x100000) {
                    pcVar21 = "metonymy";
                    goto LAB_140e8db79;
                  }
                  if (uVar20 == 0x200000) {
                    pcVar21 = "vivid imagery";
                    goto LAB_140e8db79;
                  }
                  if (uVar20 == 0x400000) {
                    pcVar21 = "juxtaposition";
                    goto LAB_140e8db79;
                  }
                }
LAB_140e8db82:
                if (uVar24 == 2) {
                  pcVar21 = " and ";
LAB_140e8db9a:
                  load_supplier_0x70b20(auStack_300,pcVar21);
                }
                else if (2 < (int)uVar24) {
                  pcVar21 = ", ";
                  goto LAB_140e8db9a;
                }
                uVar24 = uVar24 - 1;
              }
              uVar28 = uVar28 + 1;
            } while ((int)uVar28 < 0x11);
            uStack_3e0 = uVar20;
            FUN_140070fd0(auStack_300,".  ",3);
            uVar26 = uStack_378;
            puVar11 = puStack_340;
            cVar23 = cStack_3f8;
            cVar25 = cStack_3f8;
          }
          uVar12 = (ulonglong)uStack_3b4;
        }
        if (uVar12 < (ulonglong)(*(longlong *)(puVar11 + 2) - *(longlong *)puVar11 >> 2)) {
          uVar29 = *(uint *)(*(longlong *)puVar11 + lStack_360 * 4);
          uVar24 = uVar29 >> 5 & 1;
          uVar20 = uVar24 + 1;
          if ((uVar29 & 0x40) == 0) {
            uVar20 = uVar24;
          }
          if (uVar20 != 0) {
            if (cVar3 == '\0') {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2e0);
              FUN_140545850((int)uVar12 + 1,auStack_2e0,0);
              load_supplier_0x543d60(auStack_2e0);
              load_supplier_0xbb2d0(auStack_300,auStack_2e0);
              load_supplier_0x70b20(auStack_300," line");
              cStack_3f8 = '\x01';
              load_supplier_0x693f0(auStack_2e0);
            }
            else {
              load_supplier_0x70b20(auStack_300,"It");
            }
            load_supplier_0x70b20(auStack_300," ");
            puVar11 = puStack_3d0;
            iVar4 = 0;
            uVar29 = auStack_3f0[0];
            do {
              if (iVar4 == 0) {
                uVar29 = 0x20;
              }
              else if (iVar4 == 1) {
                uVar29 = 0x40;
              }
              if ((puVar11[0x65] & uVar29) != 0) {
                if (uVar29 == 0x20) {
                  FUN_140070fd0(auStack_300,"has different readings depending on word breaks",0x2f);
                }
                else if (uVar29 == 0x40) {
                  load_supplier_0x70b20(auStack_300,"can be read backwards as well as forwards");
                }
                if (uVar20 == 2) {
                  FUN_140070fd0(auStack_300," and ",5);
                }
                else if (2 < (int)uVar20) {
                  load_supplier_0x70b20(auStack_300,", ");
                }
                uVar20 = uVar20 - 1;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 2);
            auStack_3f0[0] = uVar29;
            FUN_140070fd0(auStack_300,".  ",3);
            uVar26 = uStack_378;
            cVar23 = cStack_3f8;
          }
        }
        lVar22 = lStack_388;
        cVar3 = cStack_3f8;
        uVar29 = 0;
        if (uVar12 < (ulonglong)
                     (*(longlong *)(puStack_3d0 + 0x10) - *(longlong *)(puStack_3d0 + 0xe) >> 2)) {
          uVar29 = *(uint *)(*(longlong *)(puStack_3d0 + 0xe) + lStack_360 * 4);
LAB_140e8de4c:
          uVar20 = 0xffffffff;
          if (uVar12 < (ulonglong)(*(longlong *)(puStack_338 + 2) - *(longlong *)puStack_338 >> 2))
          {
            uVar20 = *(uint *)(*(longlong *)puStack_338 + lStack_360 * 4);
          }
          uVar24 = uVar29;
          if (uVar29 == 0) {
            if (uVar20 != 0xffffffff) {
              uVar24 = puStack_3d0[0x56];
              if ((puStack_3d0[0x56] == 0) && (uVar24 = uVar29, *(uint *)(lStack_388 + 0xa8) != 0))
              {
                uVar24 = *(uint *)(lStack_388 + 0xa8);
              }
              goto LAB_140e8dfc4;
            }
          }
          else if (((uVar20 == 0xffffffff) && (uVar20 = puStack_3d0[0x57], uVar20 == 0xffffffff)) &&
                  (uVar20 = *(uint *)(lStack_388 + 0xac), uVar20 == 0xffffffff)) {
            if (cStack_3f8 == '\0') {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2e0);
              FUN_140545850(uStack_3b4 + 1,auStack_2e0,0);
              load_supplier_0x543d60(auStack_2e0);
              load_supplier_0xbb2d0(auStack_300,auStack_2e0);
              load_supplier_0x70b20(auStack_300," line");
              load_supplier_0x693f0(auStack_2e0);
              cVar3 = '\x01';
            }
            else {
              load_supplier_0x70b20(auStack_300,"It");
            }
            FUN_140070fd0(auStack_300," has ");
            load_supplier_0x69750(auStack_2c0,cVar25);
            load_supplier_0x71140(auStack_2c0);
            FUN_140545040(uVar29,auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            load_supplier_0x70b20(auStack_300," syllables.  ");
            load_supplier_0x693f0(auStack_2c0);
          }
          else {
LAB_140e8dfc4:
            if (cStack_3f8 == '\0') {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545850(uStack_3b4 + 1,auStack_2c0,0);
              load_supplier_0x543d60(auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x70b20(auStack_300," line");
              load_supplier_0x693f0(auStack_2c0);
              cVar3 = '\x01';
            }
            else {
              load_supplier_0x70b20(auStack_300,"It");
            }
            FUN_140070fd0(auStack_300," has ",5);
            load_supplier_0x69750(auStack_2a0,cVar23);
            load_supplier_0x71140(auStack_2a0);
            FUN_140545040(uVar24,auStack_2a0);
            load_supplier_0xbb2d0(auStack_300,auStack_2a0);
            FUN_140070fd0(auStack_300," ",1);
            pcVar21 = "foot";
            if (uVar24 != 1) {
              pcVar21 = "feet";
            }
            load_supplier_0x70b20(auStack_300,pcVar21);
            FUN_140070fd0(auStack_300," with ");
            if ((*(byte *)(lVar22 + 0x8c) & 1) == 0) {
              if ((*(uint *)(lVar22 + 0xe4) & 0x4000) == 0) {
                load_supplier_0x70b20(auStack_300,"an accent pattern of ");
                if (uVar20 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                  switch(uVar20) {
                  case 0:
                    load_supplier_0x70b20(auStack_300,"unstressed-unstressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_0:
                    pcVar21 = "pyrrhic";
                    break;
                  case 1:
                    load_supplier_0x70b20(auStack_300,"unstressed-stressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_1:
                    pcVar21 = "iambic";
                    break;
                  case 2:
                    load_supplier_0x70b20(auStack_300,"stressed-unstressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_2:
                    pcVar21 = "trochaic";
                    break;
                  case 3:
                    load_supplier_0x70b20(auStack_300,"stressed-stressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_3:
                    pcVar21 = "spondaic";
                    break;
                  case 4:
                    load_supplier_0x70b20(auStack_300,"unstressed-unstressed-unstressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_4:
                    pcVar21 = "tribrachic";
                    break;
                  case 5:
                    load_supplier_0x70b20(auStack_300,"stressed-unstressed-unstressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_5:
                    pcVar21 = "dactylic";
                    break;
                  case 6:
                    load_supplier_0x70b20(auStack_300,"unstressed-stressed-unstressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_6:
                    pcVar21 = "amphibrachic";
                    break;
                  case 7:
                    load_supplier_0x70b20(auStack_300,"unstressed-unstressed-stressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_7:
                    pcVar21 = "anapaestic";
                    break;
                  case 8:
                    load_supplier_0x70b20(auStack_300,"unstressed-stressed-stressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_8:
                    pcVar21 = "bacchic";
                    break;
                  case 9:
                    load_supplier_0x70b20(auStack_300,"stressed-stressed-unstressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_9:
                    pcVar21 = "antibacchic";
                    break;
                  case 10:
                    load_supplier_0x70b20(auStack_300,"stressed-unstressed-stressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_10:
                    pcVar21 = "cretic";
                    break;
                  case 0xb:
                    load_supplier_0x70b20(auStack_300,"stressed-stressed-stressed");
                    load_supplier_0x70b20(auStack_300," (qualitative ");
override_jmp_140e8e6fc_case_11:
                    pcVar21 = "molossic";
                  }
                  load_supplier_0x70b20(auStack_300,pcVar21);
                }
                else {
                  load_supplier_0x70b20(auStack_300," (qualitative ");
                  if (uVar20 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                    switch(uVar20) {
                    case 1:
                      goto override_jmp_140e8e6fc_case_1;
                    case 2:
                      goto override_jmp_140e8e6fc_case_2;
                    case 3:
                      goto override_jmp_140e8e6fc_case_3;
                    case 4:
                      goto override_jmp_140e8e6fc_case_4;
                    case 5:
                      goto override_jmp_140e8e6fc_case_5;
                    case 6:
                      goto override_jmp_140e8e6fc_case_6;
                    case 7:
                      goto override_jmp_140e8e6fc_case_7;
                    case 8:
                      goto override_jmp_140e8e6fc_case_8;
                    case 9:
                      goto override_jmp_140e8e6fc_case_9;
                    case 10:
                      goto override_jmp_140e8e6fc_case_10;
                    case 0xb:
                      goto override_jmp_140e8e6fc_case_11;
                    }
                    goto override_jmp_140e8e6fc_case_0;
                  }
                }
                load_supplier_0x70b20(auStack_300," ");
                if (uVar24 - 1 < 8) {
                    /* WARNING: Switch is manually overridden */
                  switch(uVar24 - 1) {
                  case 1:
                    goto override_jmp_140e8e408_case_1;
                  case 2:
                    goto override_jmp_140e8e408_case_2;
                  case 3:
                    goto override_jmp_140e8e408_case_3;
                  case 4:
                    goto override_jmp_140e8e408_case_4;
                  case 5:
                    goto override_jmp_140e8e408_case_5;
                  case 6:
                    goto override_jmp_140e8e408_case_6;
                  case 7:
                    goto override_jmp_140e8e408_case_7;
                  }
override_jmp_140e8e408_case_0:
                  pcVar21 = "monometer";
                  goto LAB_140e8e70e;
                }
              }
              else {
                load_supplier_0x70b20(auStack_300,"a syllable weight pattern of ");
                if (uVar20 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                  switch(uVar20) {
                  case 0:
                    load_supplier_0x70b20(auStack_300,"short-short");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_0:
                    pcVar21 = "pyrrhic";
                    break;
                  case 1:
                    load_supplier_0x70b20(auStack_300,"short-long");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_1:
                    pcVar21 = "iambic";
                    break;
                  case 2:
                    load_supplier_0x70b20(auStack_300,"long-short");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_2:
                    pcVar21 = "trochaic";
                    break;
                  case 3:
                    load_supplier_0x70b20(auStack_300,"long-long");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_3:
                    pcVar21 = "spondaic";
                    break;
                  case 4:
                    load_supplier_0x70b20(auStack_300,"short-short-short");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_4:
                    pcVar21 = "tribrachic";
                    break;
                  case 5:
                    load_supplier_0x70b20(auStack_300,"long-short-short");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_5:
                    pcVar21 = "dactylic";
                    break;
                  case 6:
                    load_supplier_0x70b20(auStack_300,"short-long-short");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_6:
                    pcVar21 = "amphibrachic";
                    break;
                  case 7:
                    load_supplier_0x70b20(auStack_300,"short-short-long");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_7:
                    pcVar21 = "anapaestic";
                    break;
                  case 8:
                    load_supplier_0x70b20(auStack_300,"short-long-long");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_8:
                    pcVar21 = "bacchic";
                    break;
                  case 9:
                    load_supplier_0x70b20(auStack_300,"long-long-short");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_9:
                    pcVar21 = "antibacchic";
                    break;
                  case 10:
                    load_supplier_0x70b20(auStack_300,"long-short-long");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_10:
                    pcVar21 = "cretic";
                    break;
                  case 0xb:
                    load_supplier_0x70b20(auStack_300,"long-long-long");
                    load_supplier_0x70b20(auStack_300," (quantitative ");
override_jmp_140e8e42e_case_11:
                    pcVar21 = "molossic";
                  }
                  load_supplier_0x70b20(auStack_300,pcVar21);
                }
                else {
                  load_supplier_0x70b20(auStack_300," (quantitative ");
                  if (uVar20 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                    switch(uVar20) {
                    case 1:
                      goto override_jmp_140e8e42e_case_1;
                    case 2:
                      goto override_jmp_140e8e42e_case_2;
                    case 3:
                      goto override_jmp_140e8e42e_case_3;
                    case 4:
                      goto override_jmp_140e8e42e_case_4;
                    case 5:
                      goto override_jmp_140e8e42e_case_5;
                    case 6:
                      goto override_jmp_140e8e42e_case_6;
                    case 7:
                      goto override_jmp_140e8e42e_case_7;
                    case 8:
                      goto override_jmp_140e8e42e_case_8;
                    case 9:
                      goto override_jmp_140e8e42e_case_9;
                    case 10:
                      goto override_jmp_140e8e42e_case_10;
                    case 0xb:
                      goto override_jmp_140e8e42e_case_11;
                    }
                    goto override_jmp_140e8e42e_case_0;
                  }
                }
                load_supplier_0x70b20(auStack_300," ");
                if (uVar24 - 1 < 8) {
                    /* WARNING: Switch is manually overridden */
                  switch(uVar24 - 1) {
                  case 0:
                    goto override_jmp_140e8e408_case_0;
                  case 1:
override_jmp_140e8e408_case_1:
                    pcVar21 = "dimeter";
                    break;
                  case 2:
override_jmp_140e8e408_case_2:
                    pcVar21 = "trimeter";
                    break;
                  case 3:
override_jmp_140e8e408_case_3:
                    pcVar21 = "tetrameter";
                    break;
                  case 4:
override_jmp_140e8e408_case_4:
                    pcVar21 = "pentameter";
                    break;
                  case 5:
override_jmp_140e8e408_case_5:
                    pcVar21 = "hexameter";
                    break;
                  case 6:
override_jmp_140e8e408_case_6:
                    pcVar21 = "heptameter";
                    break;
                  case 7:
override_jmp_140e8e408_case_7:
                    pcVar21 = "octameter";
                  }
LAB_140e8e70e:
                  load_supplier_0x70b20(auStack_300,pcVar21);
                }
              }
              pcVar21 = ").  ";
            }
            else {
              load_supplier_0x70b20(auStack_300,"a tone pattern of ");
              if (uVar20 < 0xc) {
                    /* WARNING: Switch is manually overridden */
                switch(uVar20) {
                case 0:
                  pcVar21 = "even-even";
                  break;
                case 1:
                  pcVar21 = "even-uneven";
                  break;
                case 2:
                  pcVar21 = "uneven-even";
                  break;
                case 3:
                  pcVar21 = "uneven-uneven";
                  break;
                case 4:
                  pcVar21 = "even-even-even";
                  break;
                case 5:
                  pcVar21 = "uneven-even-even";
                  break;
                case 6:
                  pcVar21 = "even-uneven-even";
                  break;
                case 7:
                  pcVar21 = "even-even-uneven";
                  break;
                case 8:
                  pcVar21 = "even-uneven-uneven";
                  break;
                case 9:
                  pcVar21 = "uneven-uneven-even";
                  break;
                case 10:
                  pcVar21 = "uneven-even-uneven";
                  break;
                case 0xb:
                  pcVar21 = "uneven-uneven-uneven";
                }
                load_supplier_0x70b20(auStack_300,pcVar21);
              }
              pcVar21 = ".  ";
            }
            load_supplier_0x70b20(auStack_300,pcVar21);
            FUN_140070e10(auStack_2a0);
          }
        }
        else if (uVar12 < (ulonglong)
                          (*(longlong *)(puStack_338 + 2) - *(longlong *)puStack_338 >> 2))
        goto LAB_140e8de4c;
        lVar7 = lStack_360;
        uVar29 = uStack_3b4;
        puVar11 = puStack_3d0 + 0x1a;
        lVar22 = *(longlong *)puVar11;
        if (((ulonglong)uStack_3b4 < (ulonglong)(*(longlong *)(puStack_3d0 + 0x1c) - lVar22 >> 2))
           && (*(int *)(lVar22 + lStack_360 * 4) != -1)) {
          if (cVar3 == '\0') {
            load_supplier_0x70b20(auStack_300,"The ");
            load_supplier_0x70c50(auStack_2c0);
            FUN_140545850(uVar29 + 1,auStack_2c0,0);
            load_supplier_0x543d60(auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            load_supplier_0x70b20(auStack_300," line");
            load_supplier_0x693f0(auStack_2c0);
          }
          else {
            load_supplier_0x70b20(auStack_300,"It");
          }
          FUN_140070fd0(auStack_300," has ",5);
          iVar4 = *(int *)(*(longlong *)puVar11 + lVar7 * 4);
          if (iVar4 == 0) {
            pcVar21 = "an initial caesura";
LAB_140e8e78f:
            load_supplier_0x70b20(auStack_300,pcVar21);
          }
          else {
            if (iVar4 == 1) {
              pcVar21 = "a medial caesura";
              goto LAB_140e8e78f;
            }
            if (iVar4 == 2) {
              pcVar21 = "a terminal caesura";
              goto LAB_140e8e78f;
            }
          }
          FUN_140070fd0(auStack_300);
        }
        uStack_3b4 = uStack_3b4 + 1;
        uVar12 = (ulonglong)uStack_3b4;
        lStack_360 = lVar7 + 1;
        iStack_36c = iStack_36c + 1;
        iStack_39c = iStack_39c + 1;
        puVar11 = puStack_330;
        cVar3 = cStack_3f8;
      } while (lStack_360 < lStack_310);
    }
    puVar11 = puStack_3d0;
    if (cStack_3e8 == '\0') {
      iVar4 = -1;
      bVar2 = true;
      bVar1 = true;
      bVar31 = false;
      load_supplier_0x70800(puStack_3d0 + 8,&piStack_398);
      load_supplier_0x707f0(puVar11 + 8,&piStack_328);
      piVar13 = piStack_328;
      for (; puVar11 = puStack_3d0, cVar25 = cStack_3f8, piStack_398 != piVar13;
          piStack_398 = piStack_398 + 1) {
        cVar23 = '\x01';
        if (piStack_398 < piVar13) {
          cVar23 = -1;
        }
        if (-1 < cVar23) break;
        if ((-1 < *piStack_398) && (*piStack_398 < 0x1a)) {
          piVar13 = (int *)load_supplier_0x703d0(&piStack_398);
          if (iVar4 == -1) {
            iVar4 = *piVar13;
          }
          else {
            bVar1 = bVar2;
            if (*piVar13 != iVar4) {
              bVar2 = false;
              bVar1 = false;
            }
          }
          bVar31 = true;
          piVar13 = piStack_328;
        }
      }
      cVar23 = cVar25;
      if ((puStack_3d0[6] == 0xffffffff) && (puStack_3d0[7] == 0xffffffff)) {
        if (!bVar31) goto LAB_140e8f3ed;
LAB_140e8ecfb:
        if ((((puStack_3d0[7] != 0xffffffff) || (!bVar31)) || (!bVar1)) || ((*puStack_3d0 & 1) != 0)
           ) goto LAB_140e8ede7;
        if (1 < (int)puStack_3d0[3]) {
          load_supplier_0x70b20(auStack_300,"The ending of each line ");
          lVar22 = load_supplier_0x70410(plStack_3c0);
          if (lVar22 == 1) {
            load_supplier_0x70b20(auStack_300,"of the poem");
          }
          else {
            if (cStack_3f7 == '\0') {
              load_supplier_0x70b20(auStack_300,"of the ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545850(iStack_3d8 + 1,auStack_2c0,0);
              load_supplier_0x543d60(auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x70b20(auStack_300," part");
              load_supplier_0x693f0(auStack_2c0);
            }
            else {
              load_supplier_0x70b20(auStack_300,"of this part");
            }
            load_supplier_0x70b20(auStack_300," shares the same rhyme.  ");
          }
        }
      }
      else {
        if (!bVar31) {
          uVar29 = puStack_3d0[4];
          uVar20 = puStack_3d0[5];
          lVar22 = 1;
          lVar7 = 0;
          uVar24 = uVar29;
          if (((int)uVar20 < (int)uVar29) && (lVar22 = 1, lVar7 = 0, puStack_3d0[7] != 0xffffffff))
          {
            lVar7 = 1;
            lVar22 = 0;
            uVar24 = uVar20;
            uVar20 = uVar29;
          }
          uVar29 = puStack_3d0[lVar7 + 6];
          if ((uVar29 != 0xffffffff) &&
             (*(int *)((longlong)&uStack_220 + (longlong)(int)uVar29 * 4) == -1)) {
            *(uint *)((longlong)&uStack_220 + (longlong)(int)uVar29 * 4) = uStack_3dc;
            uStack_3dc = uStack_3dc + 1;
          }
          uVar29 = puStack_3d0[lVar22 + 6];
          if ((uVar29 != 0xffffffff) &&
             (*(int *)((longlong)&uStack_220 + (longlong)(int)uVar29 * 4) == -1)) {
            *(uint *)((longlong)&uStack_220 + (longlong)(int)uVar29 * 4) = uStack_3dc;
            uStack_3dc = uStack_3dc + 1;
          }
          if (cStack_3b8 == '\0') {
            if (puStack_3d0[6] == puStack_3d0[7]) {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545850(*(int *)((longlong)&uStack_220 + (longlong)(int)puStack_3d0[6] * 4) + 1,
                            auStack_2c0,0);
              load_supplier_0x543d60(auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x693f0(auStack_2c0);
              load_supplier_0x70b20(auStack_300," refrain occurs as lines ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545040(uVar24,auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x693f0(auStack_2c0);
              load_supplier_0x70b20(auStack_300," and ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545040(uVar20,auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            }
            else if (puStack_3d0[7] == 0xffffffff) {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2c0);
              puVar11 = puStack_3d0;
              FUN_140545850(*(int *)((longlong)&uStack_220 + (longlong)(int)puStack_3d0[6] * 4) + 1,
                            auStack_2c0,0);
              load_supplier_0x543d60(auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x693f0(auStack_2c0);
              load_supplier_0x70b20(auStack_300," refrain occurs as line ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545040(puVar11[4],auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            }
            else {
              load_supplier_0x70b20(auStack_300,"The ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545850(*(int *)((longlong)&uStack_220 +
                                    (longlong)(int)puStack_3d0[lVar7 + 6] * 4) + 1,auStack_2c0,0);
              load_supplier_0x543d60(auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x693f0(auStack_2c0);
              load_supplier_0x70b20(auStack_300," refrain occurs as line ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545040(uVar24,auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x693f0(auStack_2c0);
              load_supplier_0x70b20(auStack_300," and the ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545850(*(int *)((longlong)&uStack_220 + (longlong)(int)puVar11[lVar22 + 6] * 4)
                            + 1,auStack_2c0,0);
              load_supplier_0x543d60(auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
              load_supplier_0x693f0(auStack_2c0);
              load_supplier_0x70b20(auStack_300," refrain occurs as line ");
              load_supplier_0x70c50(auStack_2c0);
              FUN_140545040(uVar20,auStack_2c0);
              load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            }
          }
          else if (puStack_3d0[7] == 0xffffffff) {
            load_supplier_0x70b20(auStack_300,"The refrain occurs as line ");
            load_supplier_0x70c50(auStack_2c0);
            FUN_140545040(puStack_3d0[4],auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
          }
          else {
            load_supplier_0x70b20(auStack_300,"The refrain occurs as lines ");
            load_supplier_0x70c50(auStack_2c0);
            FUN_140545040(uVar24,auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            load_supplier_0x693f0(auStack_2c0);
            load_supplier_0x70b20(auStack_300," and ");
            load_supplier_0x70c50(auStack_2c0);
            FUN_140545040(uVar20,auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
          }
          load_supplier_0x693f0(auStack_2c0);
          if (cStack_3f7 == '\0') {
            load_supplier_0x70b20(auStack_300," of the ");
            load_supplier_0x70c50(auStack_2c0);
            FUN_140545850(iStack_3d8 + 1,auStack_2c0,0);
            load_supplier_0x543d60(auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            load_supplier_0x70b20(auStack_300," part");
            load_supplier_0x693f0(auStack_2c0);
          }
          FUN_140070fd0(auStack_300,".  ",3);
          goto LAB_140e8f3ed;
        }
        if (puStack_3d0[6] == 0xffffffff) goto LAB_140e8ecfb;
LAB_140e8ede7:
        FUN_140070fd0(auStack_300,"The rhyme scheme ",0x11);
        if ((plStack_3c0[1] - *plStack_3c0 & 0xfffffffffffffff8U) == 8) {
          pcVar21 = "of the poem";
LAB_140e8ef27:
          load_supplier_0x70b20(auStack_300,pcVar21);
        }
        else {
          uVar29 = *puVar11;
          if (cStack_3f7 == '\0') {
            if ((uVar29 & 1) == 0) {
              if ((uVar29 & 4) == 0) {
                if ((int)puVar11[2] < 2) {
                  pcVar21 = "within";
                }
                else {
                  pcVar21 = "within each stanza of";
                }
              }
              else {
                pcVar21 = "repeating in each stanza of";
              }
            }
            else {
              pcVar21 = "of";
            }
            load_supplier_0x70b20(auStack_300,pcVar21);
            load_supplier_0x70b20(auStack_300," the ");
            load_supplier_0x70c50(auStack_2c0);
            FUN_140545850(iStack_3d8 + 1,auStack_2c0,0);
            load_supplier_0x543d60(auStack_2c0);
            load_supplier_0xbb2d0(auStack_300,auStack_2c0);
            load_supplier_0x70b20(auStack_300," part");
            if ((*puVar11 & 1) != 0) {
              load_supplier_0x70b20(auStack_300," ");
            }
            load_supplier_0x693f0(auStack_2c0);
          }
          else if ((uVar29 & 1) == 0) {
            if ((uVar29 & 4) == 0) {
              pcVar21 = "within each stanza";
              if ((int)puVar11[2] < 2) {
                pcVar21 = "within this stanza";
              }
            }
            else {
              pcVar21 = "repeating in each stanza";
            }
            load_supplier_0x70b20(auStack_300,pcVar21);
          }
          if ((*puVar11 & 1) != 0) {
            pcVar21 = "respecting the full poem";
            goto LAB_140e8ef27;
          }
        }
        FUN_140070fd0(auStack_300," is ",4);
        uStack_128 = 0xffffffffffffffff;
        uStack_120 = 0xffffffffffffffff;
        uStack_118 = 0xffffffffffffffff;
        uStack_110 = 0xffffffffffffffff;
        uStack_108 = 0xffffffffffffffff;
        uStack_100 = 0xffffffffffffffff;
        uStack_f8 = 0xffffffffffffffff;
        uStack_f0 = 0xffffffffffffffff;
        uStack_e8 = 0xffffffffffffffff;
        uStack_e0 = 0xffffffffffffffff;
        uStack_d8 = 0xffffffffffffffff;
        uStack_d0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        iVar5 = 0;
        uVar29 = 1;
        load_supplier_0x70d00(&piStack_3c8,*(undefined8 *)(puVar11 + 8));
        load_supplier_0x70d00(&piStack_308,*(undefined8 *)(puVar11 + 10));
        plVar8 = plStack_3c0;
        uVar12 = (ulonglong)uStack_3dc;
        iVar4 = iStack_37c;
        while( true ) {
          cVar3 = cStack_3f8;
          if (piStack_3c8 == piStack_308) break;
          cVar25 = '\x01';
          if (piStack_3c8 < piStack_308) {
            cVar25 = -1;
          }
          if (-1 < cVar25) break;
          if (uVar29 == puVar11[4]) {
            uVar20 = puVar11[6];
LAB_140e8eff0:
            uVar24 = *(uint *)((longlong)&uStack_220 + (longlong)(int)uVar20 * 4);
            uVar19 = (ulonglong)uVar24;
            if (uVar24 == 0xffffffff) {
              *(int *)((longlong)&uStack_220 + (longlong)(int)uVar20 * 4) = (int)uVar12;
              uStack_3dc = (int)uVar12 + 1;
              uVar19 = uVar12;
            }
            FUN_1400bb140(auStack_300,CONCAT71((int7)(uVar19 >> 8),(char)uVar19 + '1'));
            uVar12 = (ulonglong)uStack_3dc;
            piStack_3c8 = piStack_3c8 + 1;
            uVar29 = uVar29 + 1;
          }
          else {
            if (uVar29 == puVar11[5]) {
              uVar20 = puVar11[7];
              goto LAB_140e8eff0;
            }
            if ((-1 < *piStack_3c8) && (*piStack_3c8 < 0x1a)) {
              if (((*puVar11 & 1) == 0) && (lVar22 = load_supplier_0x70410(plVar8), lVar22 != 1)) {
                piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
                if (*(int *)((longlong)&uStack_128 + (longlong)*piVar13 * 4) == -1) {
                  piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
                  *(int *)((longlong)&uStack_128 + (longlong)*piVar13 * 4) = iVar5;
                  iVar5 = iVar5 + 1;
                }
                piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
                cVar3 = *(char *)((longlong)&uStack_128 + (longlong)*piVar13 * 4) + 'a';
              }
              else {
                piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
                if (*(int *)((longlong)&uStack_1f8 + (longlong)*piVar13 * 4) == -1) {
                  piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
                  *(int *)((longlong)&uStack_1f8 + (longlong)*piVar13 * 4) = iVar4;
                  iVar4 = iVar4 + 1;
                }
                piVar13 = (int *)load_supplier_0x703d0(&piStack_3c8);
                cVar3 = *(char *)((longlong)&uStack_1f8 + (longlong)*piVar13 * 4) + 'A';
              }
              FUN_1400bb2f0(auStack_300,cVar3);
              uVar12 = (ulonglong)uStack_3dc;
            }
            piStack_3c8 = piStack_3c8 + 1;
            uVar29 = uVar29 + 1;
          }
        }
        iStack_37c = iVar4;
        if ((acStack_3f5[0] == '\0') && ((puVar11[6] != 0xffffffff || (puVar11[7] != 0xffffffff))))
        {
          FUN_140070fd0(auStack_300,", where numbers indicate a refrain",0x22);
          acStack_3f5[0] = '\x01';
        }
        FUN_140070fd0(auStack_300,".  ",3);
        cVar23 = cVar3;
        cVar25 = cVar3;
        if (!bVar31) goto LAB_140e8f3ed;
      }
      if ((*(byte *)(lStack_388 + 0xe4) & 2) == 0) {
        if ((puVar11[0x65] & 2) != 0) {
          FUN_140070fd0(auStack_300,
                        "In this part of the poem, the end rhymes don\'t need to match perfectly.  "
                        ,0x49);
        }
      }
      else if (cStack_3f6 == '\0') {
        FUN_140070fd0(auStack_300,
                      "As a rule throughout the poem, the end rhymes don\'t generally match perfectly.  "
                      ,0x50);
        cStack_3f6 = '\x01';
      }
      cVar23 = cVar25;
      if (*(longlong *)(puVar11 + 0x22) - *(longlong *)(puVar11 + 0x20) >> 2 != 0) {
        iVar4 = 0;
        load_supplier_0x70d00(&pbStack_320,*(longlong *)(puVar11 + 0x20),puVar11 + 0x20);
        load_supplier_0x70d00(&pbStack_350,*(undefined8 *)(puVar11 + 0x22),puVar11 + 0x20);
        iVar5 = 1;
        for (; pbStack_320 != pbStack_350; pbStack_320 = pbStack_320 + 4) {
          cVar32 = '\x01';
          if (pbStack_320 < pbStack_350) {
            cVar32 = -1;
          }
          if (-1 < cVar32) break;
          if ((*pbStack_320 & 2) != 0) {
            iVar4 = iVar4 + 1;
          }
        }
        if (0 < iVar4) {
          FUN_140070fd0(auStack_300,"The rhyme",9);
          if (1 < iVar4) {
            FUN_140070fd0(auStack_300,"s",1);
          }
          FUN_140070fd0(auStack_300," at the end of the ",0x13);
          puVar11 = puStack_3d0;
          load_supplier_0x70d00(&pbStack_3b0,*(undefined8 *)(puStack_3d0 + 0x20));
          load_supplier_0x70d00(&pbStack_318,*(undefined8 *)(puVar11 + 0x22));
          pbVar14 = pbStack_318;
          iVar30 = iVar4;
          for (; pbStack_3b0 != pbVar14; pbStack_3b0 = pbStack_3b0 + 4) {
            cVar23 = '\x01';
            if (pbStack_3b0 < pbVar14) {
              cVar23 = -1;
            }
            if (-1 < cVar23) break;
            if ((*pbStack_3b0 & 2) != 0) {
              load_supplier_0x69750(auStack_2e0,cVar3);
              load_supplier_0x71140(auStack_2e0);
              FUN_140545850(iVar5,auStack_2e0,0);
              load_supplier_0x543d60(auStack_2e0);
              load_supplier_0xbb2d0(auStack_300,auStack_2e0);
              if (iVar30 == 2) {
                pcVar21 = " and ";
LAB_140e8f360:
                load_supplier_0x70b20(auStack_300,pcVar21);
              }
              else if (2 < iVar30) {
                pcVar21 = ", ";
                goto LAB_140e8f360;
              }
              iVar30 = iVar30 + -1;
              FUN_140070e10(auStack_2e0);
              pbVar14 = pbStack_318;
            }
            iVar5 = iVar5 + 1;
          }
          FUN_140070fd0(auStack_300," ",1);
          if (iVar4 < 2) {
            uVar26 = 0xc;
            pcVar21 = "line doesn\'t";
          }
          else {
            uVar26 = 0xb;
            pcVar21 = "lines don\'t";
          }
          FUN_140070fd0(auStack_300,pcVar21,uVar26);
          FUN_140070fd0(auStack_300," need to match perfectly.  ",0x1b);
          cVar23 = cStack_3f8;
        }
      }
    }
LAB_140e8f3ed:
    param_2 = uStack_378;
    plVar8 = plStack_3c0;
    if (lStack_2f0 != 0) {
      if (1 < (ulonglong)(plStack_3c0[1] - *plStack_3c0 >> 3)) {
        FUN_140070fd0(uStack_378,"[B]",3);
      }
      load_supplier_0xbb2d0(param_2);
    }
    FUN_140070e10(auStack_300);
    uStack_3a8 = uStack_3a8 + 8;
    iStack_3d8 = iStack_3d8 + 1;
    iStack_368 = iStack_368 + 1;
    iStack_364 = iStack_364 + 1;
  } while( true );
}

