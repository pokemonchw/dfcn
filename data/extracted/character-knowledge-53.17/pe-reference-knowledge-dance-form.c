/* reference PE:6aea05a1:02734000; knowledge-dance-form; RVA 0x4f47b0..0x4f8564 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_knowledge_dance_form(longlong param_1,undefined8 ****param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  short *psVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  char cVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  longlong *plVar19;
  undefined8 ****ppppuVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined8 *puVar27;
  uint *puVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar35;
  undefined8 *puVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong *plVar39;
  bool bVar40;
  undefined8 uVar41;
  undefined1 auStack_288 [32];
  ushort uStack_268;
  ushort uStack_260;
  undefined1 auStack_258 [4];
  uint uStack_254;
  int iStack_250;
  longlong *plStack_248;
  ulonglong uStack_240;
  longlong lStack_238;
  uint uStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  uint uStack_220;
  uint uStack_21c;
  int iStack_218;
  uint uStack_214;
  int iStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  int iStack_1f0;
  ulonglong uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  undefined1 auStack_1b8 [208];
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  int aiStack_88 [2];
  longlong lStack_80;
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_288;
  lStack_238 = param_1;
  pppuStack_c8 = param_2;
  load_supplier_0x70cc0(auStack_68);
  load_generated_form_name(param_1 + 8,auStack_68,1,0);
  load_supplier_0xbb340(param_2,auStack_68);
  load_supplier_0x70b90(param_2," is a ");
  if (*(uint *)(param_1 + 0x88) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0x88)) {
    case 0:
      load_supplier_0x70b90(param_2,"sacred");
      if (*(int *)(param_1 + 0x98) == 0) {
        pcVar17 = " solo";
      }
      else {
        if (*(int *)(param_1 + 0x98) != 2) goto LAB_1404f496a;
        pcVar17 = " group";
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x98) == 0) {
        load_supplier_0x70b90(param_2,"solo ");
      }
      else if (*(int *)(param_1 + 0x98) == 2) {
        load_supplier_0x70b90(param_2,"group ");
        pcVar17 = "celebration";
        break;
      }
      pcVar17 = "celebration";
      break;
    case 2:
      pcVar17 = "participation";
      break;
    case 3:
      load_supplier_0x70b90(param_2,"social");
      if (*(int *)(param_1 + 0x98) == 1) {
LAB_1404f4952:
        pcVar17 = " partner";
      }
      else {
        if (*(int *)(param_1 + 0x98) != 2) goto LAB_1404f496a;
        pcVar17 = " group";
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x98) == 0) {
        pcVar17 = "solo ";
LAB_1404f4930:
        load_supplier_0x70b90(param_2,pcVar17);
      }
      else if (*(int *)(param_1 + 0x98) == 2) {
        pcVar17 = "group ";
        goto LAB_1404f4930;
      }
      load_supplier_0x70b90(param_2,"performance");
      if (*(int *)(param_1 + 0x98) == 1) goto LAB_1404f4952;
      goto LAB_1404f496a;
    case 5:
      pcVar17 = "war";
    }
    load_supplier_0x70b90(param_2,pcVar17);
  }
LAB_1404f496a:
  load_supplier_0x70b90(param_2," dance");
  if ((*(int *)(param_1 + 0x98) == 1) && (*(int *)(param_1 + 0xa0) == 1)) {
    pcVar17 = " for a single pair";
LAB_1404f4a64:
    load_supplier_0x70b90(param_2,pcVar17);
  }
  else if (1 < *(int *)(param_1 + 0xa0)) {
    load_supplier_0x70b90(param_2," for ");
    load_supplier_0x70cc0(&puStack_e8);
    FUN_140547840(*(undefined4 *)(param_1 + 0x9c),&puStack_e8);
    load_supplier_0xbb340(param_2,&puStack_e8);
    FUN_140070e80(&puStack_e8);
    load_supplier_0x70b90(param_2," to ");
    load_supplier_0x70cc0(&puStack_e8);
    FUN_140547840(*(undefined4 *)(param_1 + 0xa0),&puStack_e8);
    load_supplier_0xbb340(param_2,&puStack_e8);
    FUN_140070e80(&puStack_e8);
    if (*(int *)(param_1 + 0x98) == 1) {
      pcVar17 = " pairs";
    }
    else {
      if (*(int *)(param_1 + 0x98) != 2) goto LAB_1404f4a6c;
      pcVar17 = " dancers";
    }
    goto LAB_1404f4a64;
  }
LAB_1404f4a6c:
  uVar21 = 0;
  bVar3 = false;
  if (*(int *)(param_1 + 0x8c) == -1) {
    if (*(int *)(param_1 + 0x90) != -1) {
      load_supplier_0x736b0(auStack_1b8);
      load_supplier_0x70b90(param_2," originally devised by ");
      uStack_260 = 0;
      uStack_268 = 1;
      FUN_140baabd0(0x14251c138,param_2,*(undefined4 *)(param_1 + 0x90),auStack_1b8);
    }
  }
  else {
    psVar7 = (short *)load_supplier_0x7f120(0x1423f3c78);
    bVar40 = bVar3;
    if (psVar7 != (short *)0x0) {
      bVar40 = *psVar7 == 8;
    }
    pcVar17 = " which grew out of the performances of ";
    if (!bVar40) {
      pcVar17 = " originating in ";
    }
    uVar41 = load_supplier_0x70b90(param_2,pcVar17);
    FUN_140baa5c0(uVar41,param_2,*(undefined4 *)(param_1 + 0x8c),0);
  }
  load_supplier_0x70b90(param_2,".  ");
  pcVar17 = 
  "The rules of the form are applied by choreographers to produce individual dances which can be performed.  "
  ;
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    pcVar17 = "The form guides dancers during improvised performances.  ";
  }
  load_supplier_0x70b90(param_2,pcVar17);
  uVar25 = 0;
  uStack_1e8 = 0;
  if (*(int *)(param_1 + 0x84) == -1) {
    if ((*(int *)(param_1 + 0x80) != -1) &&
       (uVar25 = FUN_140073ba0(0x14250a378), uStack_1e8 = uVar25, uVar25 != 0)) {
      load_supplier_0x70b90(param_2,"The dance is accompanied by ");
      if ((*(byte *)(uVar25 + 0x120) & 1) != 0) {
        load_supplier_0x70b90(param_2,"a composition of ");
      }
      load_supplier_0x70cc0(&puStack_e8);
      load_generated_form_name(uVar25 + 8,&puStack_e8,1,0);
      load_supplier_0xbb340(param_2,&puStack_e8);
      FUN_140070e80(&puStack_e8);
      if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
        pcVar17 = " as the dancer acts out ";
        if (*(int *)(param_1 + 0x98) != 0) {
          pcVar17 = " as the dancers act out ";
        }
        load_supplier_0x70b90(param_2,pcVar17);
        if (*(int *)(uVar25 + 0xf8) != -1) goto LAB_1404f4d39;
        if ((*(int *)(uVar25 + 0xf4) != -1) && (lVar8 = FUN_140073ba0(0x14250a348), lVar8 != 0)) {
          if ((*(byte *)(lVar8 + 0x8c) & 2) != 0) {
            load_supplier_0x70b90(param_2,"a composition of ");
          }
          load_supplier_0x70cc0(&puStack_e8);
          load_generated_form_name(lVar8 + 8,&puStack_e8,1,0);
          load_supplier_0xbb340(param_2,&puStack_e8);
          goto LAB_1404f4dc6;
        }
      }
    }
  }
  else {
    lVar8 = FUN_140073ba0(0x14250a138);
    uVar25 = uVar21;
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x68) == 0xc)) &&
       (uVar25 = FUN_140073ba0(0x14250a378,*(undefined4 *)(lVar8 + 0x6c)), uStack_1e8 = uVar25,
       uVar25 != 0)) {
      load_supplier_0x70b90(param_2,"The dance is accompanied by ");
      load_supplier_0xbb340(param_2,lVar8 + 8);
      if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
        pcVar17 = " as the dancer acts out ";
        if (*(int *)(param_1 + 0x98) != 0) {
          pcVar17 = " as the dancers act out ";
        }
        load_supplier_0x70b90(param_2,pcVar17);
        if (*(int *)(uVar25 + 0xf8) == -1) {
          if ((*(int *)(uVar25 + 0xf4) != -1) && (lVar8 = FUN_140073ba0(0x14250a348), lVar8 != 0)) {
            if ((*(byte *)(lVar8 + 0x8c) & 2) != 0) {
              load_supplier_0x70b90(param_2,"a composition of ");
            }
            load_supplier_0x70cc0(&puStack_e8);
            load_generated_form_name(lVar8 + 8,&puStack_e8,1,0);
            load_supplier_0xbb340(param_2,&puStack_e8);
LAB_1404f4dc6:
            FUN_140070e80(&puStack_e8);
          }
        }
        else {
LAB_1404f4d39:
          lVar8 = FUN_140073ba0(0x14250a138);
          if (lVar8 != 0) {
            load_supplier_0xbb340(param_2,lVar8 + 8);
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0xdc) != -1) || (*(int *)(param_1 + 0xe0) != -1)) {
    pcVar17 = " as the dancer acts out ";
    if (*(int *)(param_1 + 0x98) != 0) {
      pcVar17 = " as the dancers act out ";
    }
    load_supplier_0x70b90(param_2,pcVar17);
  }
  if (*(int *)(param_1 + 0xdc) == -1) {
    if (*(int *)(param_1 + 0xe0) != -1) {
      load_supplier_0x70b90(param_2,"the story of ");
      load_supplier_0x736b0(auStack_1b8);
      uStack_260 = 0;
      uStack_268 = 1;
      FUN_140baabd0(0x14251c138,param_2,*(undefined4 *)(param_1 + 0xe0),auStack_1b8);
    }
  }
  else {
    plVar9 = (longlong *)FUN_14007f060(0x14251c138);
    if (plVar9 != (longlong *)0x0) {
      load_supplier_0x70cc0(&puStack_e8);
      load_supplier_0x736b0(auStack_1b8);
      uStack_268 = uStack_268 & 0xff00;
      (**(code **)(*plVar9 + 0xd8))(plVar9,&puStack_e8,auStack_1b8,1);
      load_supplier_0xbb340(param_2,&puStack_e8);
      FUN_140070e80(&puStack_e8);
    }
  }
  load_supplier_0x70b90(param_2);
  if ((*(int *)(param_1 + 0xa4) == -1) && (*(int *)(param_1 + 0xa8) == -1)) {
    if (uVar25 != 0) {
      if ((*(int *)(uVar25 + 0xe8) + 1U < 2) || (bVar40 = bVar3, *(int *)(uVar25 + 0xe8) == 4)) {
        bVar40 = true;
      }
      if (((*(int *)(uVar25 + 0x104) == -1) && (*(int *)(uVar25 + 0xe8) == -1)) ||
         (bVar4 = true, bVar40)) {
        bVar4 = bVar3;
      }
      if (bVar4) goto LAB_1404f4f05;
    }
  }
  else {
LAB_1404f4f05:
    pcVar17 = "The dancer performs ";
    if (*(int *)(param_1 + 0x98) != 0) {
      pcVar17 = "The dancers perform ";
    }
    load_supplier_0x70b90(param_2,pcVar17);
    iVar35 = *(int *)(param_1 + 0xa4);
    if (iVar35 == 0) {
      pcVar17 = "in a single line";
LAB_1404f4fcf:
      load_supplier_0x70b90(param_2,pcVar17);
    }
    else {
      if (iVar35 == 1) {
        pcVar17 = "in several lines";
        goto LAB_1404f4fcf;
      }
      if (iVar35 == 2) {
        pcVar17 = "in a circle";
        goto LAB_1404f4fcf;
      }
      if (iVar35 == 3) {
        pcVar17 = "in a double circle";
        goto LAB_1404f4fcf;
      }
      if (iVar35 == 4) {
        pcVar17 = "loosely mingled";
        goto LAB_1404f4fcf;
      }
    }
    if (*(int *)(param_1 + 0xa8) != -1) {
      if (*(int *)(param_1 + 0xa4) != -1) {
        load_supplier_0x70b90(param_2," ");
      }
      iVar35 = *(int *)(param_1 + 0xa8);
      if (iVar35 == 0) {
        pcVar17 = "along a clockwise circle";
        if (*(int *)(param_1 + 0x98) != 0) {
          pcVar17 = "turning clockwise";
        }
      }
      else if (iVar35 == 1) {
        pcVar17 = "along a counterclockwise circle";
        if (*(int *)(param_1 + 0x98) != 0) {
          pcVar17 = "turning counterclockwise";
        }
      }
      else if (iVar35 == 2) {
        pcVar17 = "along an improvised path";
      }
      else {
        if (iVar35 != 3) goto LAB_1404f5060;
        pcVar17 = "along an intricate path";
      }
      load_supplier_0x70b90(param_2,pcVar17);
    }
LAB_1404f5060:
    if (uVar25 != 0) {
      if ((*(int *)(uVar25 + 0x104) != -1) || (*(int *)(uVar25 + 0xe8) != -1)) {
        bVar3 = true;
      }
      if (bVar3) {
        if ((*(int *)(param_1 + 0xa4) != -1) || (*(int *)(param_1 + 0xa8) != -1)) {
          load_supplier_0x70b90(param_2,", moving ");
        }
        uVar6 = *(int *)(uVar25 + 0xe8) - 1;
        if (uVar6 < 0x21) {
                    /* WARNING: Switch is manually overridden */
          switch((&UNK_1404f8598)[(int)uVar6]) {
          case 0:
            pcVar17 = "very slowly ";
            break;
          case 1:
            pcVar17 = "slowly ";
            break;
          case 2:
            pcVar17 = "quickly ";
            break;
          case 3:
            pcVar17 = "very quickly ";
            break;
          case 4:
            pcVar17 = "faster and faster ";
            break;
          case 5:
            pcVar17 = "slower and slower ";
            break;
          case 6:
            goto override_jmp_1404f50d0_case_2;
          }
          load_supplier_0x70b90(param_2,pcVar17);
        }
override_jmp_1404f50d0_case_2:
        lVar8 = FUN_140073ba0(&DAT_14250a408,*(undefined4 *)(uVar25 + 0x104));
        if (lVar8 == 0) {
LAB_1404f51af:
          pcVar17 = "with the music";
        }
        else {
          if ((*(int *)(uVar25 + 0x108) < 0) ||
             ((ulonglong)(*(longlong *)(lVar8 + 0x28) - *(longlong *)(lVar8 + 0x20) >> 3) <=
              (ulonglong)(longlong)*(int *)(uVar25 + 0x108))) {
            if ((*(int *)(uVar25 + 0x10c) < 0) ||
               ((ulonglong)(*(longlong *)(lVar8 + 0x10) - *(longlong *)(lVar8 + 8) >> 3) <=
                (ulonglong)(longlong)*(int *)(uVar25 + 0x10c))) goto LAB_1404f51af;
            load_supplier_0x70b90(param_2,"to the music\'s ");
            iVar35 = *(int *)(uVar25 + 0x10c);
            lVar8 = *(longlong *)(lVar8 + 8);
          }
          else {
            load_supplier_0x70b90(param_2,"to the music\'s ");
            iVar35 = *(int *)(uVar25 + 0x108);
            lVar8 = *(longlong *)(lVar8 + 0x20);
          }
          load_supplier_0xbb340(param_2,*(undefined8 *)(lVar8 + (longlong)iVar35 * 8));
          pcVar17 = " rhythm";
        }
        load_supplier_0x70b90(param_2,pcVar17);
      }
    }
    load_supplier_0x70b90(param_2,".  ");
  }
  if (*(int *)(param_1 + 0xb0) == -1) goto LAB_1404f53a8;
  load_supplier_0x70b90(param_2,"The partners ");
  iVar35 = *(int *)(param_1 + 0xb0);
  if (iVar35 == 0) {
    pcVar17 = "dance closely";
LAB_1404f521a:
    load_supplier_0x70b90(param_2,pcVar17);
  }
  else {
    if (iVar35 == 1) {
      pcVar17 = "maintain open contact";
      goto LAB_1404f521a;
    }
    if (iVar35 == 2) {
      pcVar17 = "rarely make contact";
      goto LAB_1404f521a;
    }
  }
  load_supplier_0x70b90(param_2,", communicating intent ");
  if (5 < *(uint *)(param_1 + 0xb4)) goto LAB_1404f5399;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0xb4)) {
  case 0:
    pcVar17 = "by pushing together";
    goto LAB_1404f5256;
  case 1:
    pcVar17 = "by pulling away";
LAB_1404f5256:
    load_supplier_0x70b90(param_2,pcVar17);
    if (*(int *)(param_1 + 0xb8) == 0) {
      load_supplier_0x70b90(param_2," constantly");
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      pcVar17 = " briefly";
      break;
    }
    goto LAB_1404f5399;
  case 2:
    if (*(int *)(param_1 + 0xb8) == 0) {
      load_supplier_0x70b90(param_2,"constantly ");
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      load_supplier_0x70b90(param_2,"briefly ");
    }
    pcVar17 = "through touch";
    break;
  case 3:
    if (*(int *)(param_1 + 0xb8) == 0) {
      load_supplier_0x70b90(param_2,"constantly ");
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      load_supplier_0x70b90(param_2,"briefly ");
    }
    pcVar17 = "through a light touch";
    break;
  case 4:
    if (*(int *)(param_1 + 0xb8) == 0) {
      load_supplier_0x70b90(param_2,"constantly ");
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      load_supplier_0x70b90(param_2,"briefly ");
    }
    pcVar17 = "through visual cues";
    break;
  case 5:
    if (*(int *)(param_1 + 0xb8) == 0) {
      load_supplier_0x70b90(param_2,"constantly ");
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      load_supplier_0x70b90(param_2,"briefly ");
    }
    pcVar17 = "through spoken cues";
  }
  load_supplier_0x70b90(param_2,pcVar17);
LAB_1404f5399:
  load_supplier_0x70b90(param_2,".  ");
LAB_1404f53a8:
  uStack_240 = *(ulonglong *)(param_1 + 200);
  plVar9 = *(longlong **)(param_1 + 0xc0);
  if (((longlong)(uStack_240 - (longlong)plVar9) >> 2 != 0) &&
     (plStack_248 = plVar9,
     pcVar17 = (char *)load_supplier_0x70450(&plStack_248,auStack_258,&uStack_240), *pcVar17 < '\0')
     ) {
    do {
      iVar35 = (int)*plVar9;
      if ((iVar35 == 0) || (((iVar35 == 1 || (iVar35 == 2)) || (iVar35 == 3)))) {
        uVar21 = (ulonglong)((int)uVar21 + 1);
      }
      plVar9 = (longlong *)((longlong)plVar9 + 4);
      plStack_248 = plVar9;
      pcVar17 = (char *)load_supplier_0x70450(&plStack_248,auStack_258,&uStack_240);
    } while (*pcVar17 < '\0');
    if (0 < (int)uVar21) {
      load_supplier_0x70b90(param_2,"There are partner changes throughout the dance ");
      plVar9 = *(longlong **)(param_1 + 0xc0);
      uStack_240 = *(ulonglong *)(param_1 + 200);
      plStack_248 = plVar9;
      pcVar17 = (char *)load_supplier_0x70450(&plStack_248,auStack_258,&uStack_240);
      cVar12 = *pcVar17;
      while (cVar12 < '\0') {
        iVar35 = (int)*plVar9;
        if (((iVar35 == 0) || (iVar35 == 1)) || ((iVar35 == 2 || (iVar35 == 3)))) {
          uVar6 = (int)uVar21 - 1;
          uVar21 = (ulonglong)uVar6;
          if (iVar35 == 0) {
            pcVar17 = "with the lead advancing along the main line of motion";
LAB_1404f54df:
            load_supplier_0x70b90(param_2,pcVar17);
          }
          else {
            if (iVar35 == 1) {
              pcVar17 = "with the lead advancing against the main line of motion";
              goto LAB_1404f54df;
            }
            if (iVar35 == 2) {
              pcVar17 = "with the lead turning out clockwise";
              goto LAB_1404f54df;
            }
            if (iVar35 == 3) {
              pcVar17 = "with the lead turning out counterclockwise";
              goto LAB_1404f54df;
            }
          }
          if ((int)uVar6 < 2) {
            if (uVar6 != 1) goto LAB_1404f5509;
            pcVar17 = " and ";
          }
          else {
            pcVar17 = ",";
          }
          load_supplier_0x70b90(param_2,pcVar17);
        }
LAB_1404f5509:
        plVar9 = (longlong *)((longlong)plVar9 + 4);
        plStack_248 = plVar9;
        pcVar17 = (char *)load_supplier_0x70450(&plStack_248,auStack_258,&uStack_240);
        cVar12 = *pcVar17;
      }
      load_supplier_0x70b90(param_2,".  ");
    }
  }
  puStack_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  puStack_208 = (undefined8 *)0x0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  plVar9 = *(longlong **)(param_1 + 0x160);
  uStack_240 = *(ulonglong *)(param_1 + 0x168);
  plStack_248 = plVar9;
  pcVar17 = (char *)load_supplier_0x70450(&plStack_248,auStack_258);
  cVar12 = *pcVar17;
  puVar23 = puStack_208;
  puVar10 = puStack_e8;
  puVar27 = puStack_e0;
  while (puStack_208 = puVar23, puStack_e8 = puVar10, puStack_e0 = puVar27, cVar12 < '\0') {
    if ((*(uint *)(*plVar9 + 0x80) & 2) == 0) {
      if ((*(uint *)(*plVar9 + 0x80) & 4) != 0) {
        load_supplier_0xbafb0(&puStack_208,plVar9);
      }
    }
    else {
      load_supplier_0xbafb0(&puStack_e8,plVar9);
    }
    plVar9 = plVar9 + 1;
    plStack_248 = plVar9;
    pcVar17 = (char *)load_supplier_0x70450(&plStack_248,auStack_258);
    puVar23 = puStack_208;
    puVar10 = puStack_e8;
    puVar27 = puStack_e0;
    cVar12 = *pcVar17;
  }
  if ((((longlong)puVar27 - (longlong)puVar10 >> 3 != 0) ||
      ((longlong)puStack_200 - (longlong)puVar23 >> 3 != 0)) ||
     ((*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 2 != 0 ||
      ((*(int *)(param_1 + 0xac) != -1 || (*(int *)(param_1 + 0xe4) != -1)))))) {
    if (*(int *)(param_1 + 0xe4) != -1) {
      uVar41 = load_supplier_0x70b90(param_2,"The dancers imitate the movement of the ");
      uStack_260 = uStack_260 & 0xff00;
      uStack_268 = 0xffff;
      FUN_140bacb90(uVar41,param_2,*(undefined4 *)(param_1 + 0xe4),0);
      load_supplier_0x70b90(param_2,".  ");
    }
    if (((longlong)puVar27 - (longlong)puVar10 >> 3 != 0) ||
       (puVar36 = puStack_200, (longlong)puStack_200 - (longlong)puVar23 >> 3 != 0)) {
      load_supplier_0x70b90(param_2,"This dance is a refined artform, with ");
      puVar36 = puStack_200;
      if ((longlong)puVar27 - (longlong)puVar10 >> 3 != 0) {
        load_supplier_0x70cc0(aiStack_88);
        FUN_140547840((longlong)puVar27 - (longlong)puVar10 >> 3,aiStack_88);
        load_supplier_0xbb340(param_2,aiStack_88);
        load_supplier_0x70b90(param_2," special position");
        if (1 < (ulonglong)((longlong)puVar27 - (longlong)puVar10 >> 3)) {
          load_supplier_0x70b90(param_2,"s");
        }
        puVar36 = puStack_200;
        if ((longlong)puStack_200 - (longlong)puVar23 >> 3 != 0) {
          load_supplier_0x70b90(param_2," and ");
        }
        FUN_140070e80(aiStack_88);
      }
      uVar21 = (longlong)puVar36 - (longlong)puVar23 >> 3;
      if (uVar21 != 0) {
        load_supplier_0x70cc0(aiStack_88);
        FUN_140547840(uVar21 & 0xffffffff,aiStack_88);
        load_supplier_0xbb340(param_2,aiStack_88);
        load_supplier_0x70b90(param_2," specific move");
        if (1 < uVar21) {
          load_supplier_0x70b90(param_2,"s");
        }
        FUN_140070e80(aiStack_88);
      }
      load_supplier_0x70b90(param_2);
      puVar10 = puStack_e8;
    }
    if (*(int *)(param_1 + 0xac) != -1) {
      load_supplier_0x70b90(param_2,"The entire dance has a basic movement ");
      load_dance_movement_description
                (param_2,*(undefined8 *)
                          (*(longlong *)(param_1 + 0x160) + (longlong)*(int *)(param_1 + 0xac) * 8),
                 (longlong)puVar27 - (longlong)puVar10 >> 3,
                 (longlong)puVar36 - (longlong)puVar23 >> 3);
    }
    pppuVar5 = pppuStack_c8;
    puVar10 = puStack_208;
    uVar21 = *(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 2;
    if (uVar21 != 0) {
      iVar32 = 0;
      iVar26 = 0;
      iVar35 = 0;
      uVar6 = 0;
      iVar30 = 0;
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xe8) + lVar8) == 5) {
          uVar14 = *(uint *)(lVar8 + *(longlong *)(lStack_238 + 0x100));
          if (uVar14 == 0xffffffff) {
            uVar6 = uVar6 + 1;
          }
          else {
            if (uVar14 < 0x2e) {
                    /* WARNING: Switch is manually overridden */
              switch((&UNK_1404f85e0)[(int)uVar14]) {
              case 0:
                iVar26 = iVar26 + 1;
                goto LAB_1404f58e2;
              }
            }
            iVar35 = iVar35 + 1;
          }
        }
        else {
          iVar32 = iVar32 + 1;
        }
LAB_1404f58e2:
        iVar30 = iVar30 + 1;
        lVar8 = lVar8 + 4;
      } while ((ulonglong)(longlong)iVar30 < uVar21);
      uStack_254 = uVar6;
      iStack_22c = iVar35;
      iStack_228 = iVar32;
      if ((((0 < iVar32) || (0 < (int)uVar6)) || (0 < iVar35)) ||
         (uVar25 = uStack_1e8, param_1 = lStack_238, param_2 = (undefined8 ****)pppuStack_c8,
         puVar23 = puStack_208, 0 < iVar26)) {
        load_supplier_0x70b90(pppuStack_c8,"The");
        if (((iVar32 == 0) && (uVar6 == 0)) && (iVar35 == 0)) {
          load_supplier_0x70b90(pppuVar5," dance is");
        }
        pppuVar5 = pppuStack_c8;
        iVar30 = 0;
        lVar8 = *(longlong *)(lStack_238 + 0xe8);
        if (*(longlong *)(lStack_238 + 0xf0) - lVar8 >> 2 != 0) {
          lVar22 = 0;
          do {
            if (((*(int *)(lVar8 + lVar22) == 5) &&
                (uVar14 = *(uint *)(lVar22 + *(longlong *)(lStack_238 + 0x100)),
                uVar14 != 0xffffffff)) && (uVar14 < 0x2e)) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar14) {
              case 0:
                pcVar17 = " graceful";
                break;
              case 1:
                pcVar17 = " serene";
                break;
              case 2:
                pcVar17 = " calm";
                break;
              case 3:
                pcVar17 = " grotesque";
                break;
              case 4:
                pcVar17 = " crude";
                break;
              case 5:
                pcVar17 = " refined";
                break;
              case 6:
                pcVar17 = " understated";
                break;
              case 7:
                pcVar17 = " delicate";
                break;
              case 8:
                pcVar17 = " elaborate";
                break;
              case 9:
                pcVar17 = " expressive";
                break;
              case 10:
                pcVar17 = " strong";
                break;
              default:
                goto override_jmp_1404f59b8_case_11;
              case 0xc:
                pcVar17 = " weightless";
                break;
              case 0xd:
                pcVar17 = " fluid";
                break;
              case 0xe:
                pcVar17 = " undulating";
                break;
              case 0xf:
                pcVar17 = " soft";
                break;
              case 0x10:
                pcVar17 = " jerking";
                break;
              case 0x11:
                pcVar17 = " sharp-edged";
                break;
              case 0x12:
                pcVar17 = " straight-lined";
                break;
              case 0x19:
                pcVar17 = " energetic";
                break;
              case 0x1a:
                pcVar17 = " passionate";
                break;
              case 0x1b:
                pcVar17 = " vivacious";
                break;
              case 0x1c:
                pcVar17 = " joyous";
                break;
              case 0x1d:
                pcVar17 = " proud";
                break;
              case 0x1e:
                pcVar17 = " flamboyant";
                break;
              case 0x1f:
                pcVar17 = " lively";
                break;
              case 0x20:
                pcVar17 = " spirited";
                break;
              case 0x21:
                pcVar17 = " vigorous";
                break;
              case 0x22:
                pcVar17 = " intense";
                break;
              case 0x23:
                pcVar17 = " aggressive";
                break;
              case 0x24:
                pcVar17 = " powerful";
                break;
              case 0x25:
                pcVar17 = " sluggish";
                break;
              case 0x26:
                pcVar17 = " relaxed";
                break;
              case 0x27:
                pcVar17 = " passive";
                break;
              case 0x28:
                pcVar17 = " subtle";
                break;
              case 0x29:
                pcVar17 = " sensual";
                break;
              case 0x2a:
                pcVar17 = " debauched";
                break;
              case 0x2b:
                pcVar17 = " twisting";
                break;
              case 0x2c:
                pcVar17 = " sprightly";
                break;
              case 0x2d:
                pcVar17 = " sinuous";
              }
              load_supplier_0x70b90(pppuVar5,pcVar17);
              if (((iVar32 == 0) && (uVar6 == 0)) && (iVar35 == 0)) {
                if (iVar26 < 3) {
                  if (iVar26 == 2) {
                    pcVar17 = " and";
                    goto LAB_1404f5b90;
                  }
                }
                else {
                  pcVar17 = ",";
LAB_1404f5b90:
                  load_supplier_0x70b90(pppuVar5,pcVar17);
                }
                iVar26 = iVar26 + -1;
              }
            }
override_jmp_1404f59b8_case_11:
            iVar30 = iVar30 + 1;
            lVar22 = lVar22 + 4;
            lVar8 = *(longlong *)(lStack_238 + 0xe8);
            puVar10 = puStack_208;
          } while ((ulonglong)(longlong)iVar30 <
                   (ulonglong)(*(longlong *)(lStack_238 + 0xf0) - lVar8 >> 2));
        }
        ppppuVar20 = (undefined8 ****)pppuStack_c8;
        if (((0 < iVar32) || (0 < (int)uVar6)) || (0 < iVar35)) {
          load_supplier_0x70b90(pppuStack_c8," dance is punctuated by ");
          iVar30 = 0;
          uStack_240 = uStack_240 & 0xffffffff00000000;
          lVar8 = *(longlong *)(lStack_238 + 0xe8);
          iVar26 = iVar32;
          if (*(longlong *)(lStack_238 + 0xf0) - lVar8 >> 2 != 0) {
            lVar37 = 0;
            lVar22 = lStack_238;
            uVar6 = (uint)pppuStack_c8;
            do {
              if (*(int *)(lVar8 + lVar37 * 4) != 5) {
                iVar32 = iVar32 + -1;
                if ((*(byte *)(*(longlong *)(lVar22 + 0x130) + lVar37 * 4) & 0xc0) != 0) {
                  load_supplier_0x70b90(ppppuVar20,"the ");
                }
                uVar14 = *(uint *)(*(longlong *)(lVar22 + 0x100) + lVar37 * 4);
                if (uVar14 < 0x2e) {
                    /* WARNING: Switch is manually overridden */
                  switch(uVar14) {
                  case 0:
                    pcVar17 = "graceful";
                    break;
                  case 1:
                    pcVar17 = "serene";
                    break;
                  case 2:
                    pcVar17 = "calm";
                    break;
                  case 3:
                    pcVar17 = "grotesque";
                    break;
                  case 4:
                    pcVar17 = "crude";
                    break;
                  case 5:
                    pcVar17 = "refined";
                    break;
                  case 6:
                    pcVar17 = "understated";
                    break;
                  case 7:
                    pcVar17 = "delicate";
                    break;
                  case 8:
                    pcVar17 = "elaborate";
                    break;
                  case 9:
                    pcVar17 = "expressive";
                    break;
                  case 10:
                    pcVar17 = "strong";
                    break;
                  case 0xb:
                    pcVar17 = "large";
                    break;
                  case 0xc:
                    pcVar17 = "weightless";
                    break;
                  case 0xd:
                    pcVar17 = "fluid";
                    break;
                  case 0xe:
                    pcVar17 = "undulating";
                    break;
                  case 0xf:
                    pcVar17 = "soft";
                    break;
                  case 0x10:
                    pcVar17 = "jerking";
                    break;
                  case 0x11:
                    pcVar17 = "sharp-edged";
                    break;
                  case 0x12:
                    pcVar17 = "straight-lined";
                    break;
                  case 0x13:
                    pcVar17 = "high";
                    break;
                  case 0x14:
                    pcVar17 = "low";
                    break;
                  case 0x15:
                    pcVar17 = "loudly percussive";
                    break;
                  case 0x16:
                    pcVar17 = "softly percussive";
                    break;
                  case 0x17:
                    pcVar17 = "aborted";
                    break;
                  case 0x18:
                    pcVar17 = "partially realized";
                    break;
                  case 0x19:
                    pcVar17 = "energetic";
                    break;
                  case 0x1a:
                    pcVar17 = "passionate";
                    break;
                  case 0x1b:
                    pcVar17 = "vivacious";
                    break;
                  case 0x1c:
                    pcVar17 = "joyous";
                    break;
                  case 0x1d:
                    pcVar17 = "proud";
                    break;
                  case 0x1e:
                    pcVar17 = "flamboyant";
                    break;
                  case 0x1f:
                    pcVar17 = "lively";
                    break;
                  case 0x20:
                    pcVar17 = "spirited";
                    break;
                  case 0x21:
                    pcVar17 = "vigorous";
                    break;
                  case 0x22:
                    pcVar17 = "intense";
                    break;
                  case 0x23:
                    pcVar17 = "aggressive";
                    break;
                  case 0x24:
                    pcVar17 = "powerful";
                    break;
                  case 0x25:
                    pcVar17 = "sluggish";
                    break;
                  case 0x26:
                    pcVar17 = "relaxed";
                    break;
                  case 0x27:
                    pcVar17 = "passive";
                    break;
                  case 0x28:
                    pcVar17 = "subtle";
                    break;
                  case 0x29:
                    pcVar17 = "sensual";
                    break;
                  case 0x2a:
                    pcVar17 = "debauched";
                    break;
                  case 0x2b:
                    pcVar17 = "twisting";
                    break;
                  case 0x2c:
                    pcVar17 = "sprightly";
                    break;
                  case 0x2d:
                    pcVar17 = "sinuous";
                  }
                  load_supplier_0x70b90(ppppuVar20,pcVar17);
                }
                if (*(int *)(*(longlong *)(lVar22 + 0x100) + lVar37 * 4) != -1) {
                  load_supplier_0x70b90(ppppuVar20," ");
                }
                iVar35 = *(int *)(*(longlong *)(lVar22 + 0xe8) + lVar37 * 4);
                if (iVar35 == 6) {
                  if (*(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4) < 0) {
                    load_supplier_0x70b90(ppppuVar20,"counterclockwise ");
                  }
                  if (0 < *(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4)) {
                    load_supplier_0x70b90(ppppuVar20,"clockwise ");
                  }
                  iVar35 = -*(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4);
                  if (iVar35 < 0) {
                    iVar35 = *(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4);
                  }
                  if (iVar35 == 0x2d) {
                    load_supplier_0x70b90(ppppuVar20,"eighth ");
                  }
                  iVar35 = -*(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4);
                  if (iVar35 < 0) {
                    iVar35 = *(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4);
                  }
                  if (iVar35 == 0x5a) {
                    load_supplier_0x70b90(ppppuVar20,"quarter ");
                  }
                  iVar35 = -*(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4);
                  if (iVar35 < 0) {
                    iVar35 = *(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4);
                  }
                  if (iVar35 == 0xb4) {
                    pcVar17 = "half ";
                    goto LAB_1404f5f89;
                  }
                }
                else if ((((iVar35 == 0xd) || (iVar35 == 0xe)) || (iVar35 == 0xf)) &&
                        (*(int *)(*(longlong *)(lVar22 + 0x118) + lVar37 * 4) == 2)) {
                  pcVar17 = "repeated ";
LAB_1404f5f89:
                  load_supplier_0x70b90(ppppuVar20,pcVar17);
                }
                uVar14 = *(int *)(*(longlong *)(lVar22 + 0xe8) + lVar37 * 4) - 6;
                if (uVar14 < 0x1c) {
                    /* WARNING: Switch is manually overridden */
                  switch(uVar14) {
                  case 0:
                    pcVar17 = "turns";
                    break;
                  case 1:
                    pcVar17 = "facial expressions";
                    break;
                  case 2:
                    pcVar17 = "hand gestures";
                    break;
                  case 3:
                    pcVar17 = "straight walks";
                    break;
                  case 4:
                    pcVar17 = "curved walks";
                    break;
                  case 5:
                    pcVar17 = "runs";
                    break;
                  case 6:
                    pcVar17 = "leaps";
                    break;
                  case 7:
                    pcVar17 = "kicks";
                    break;
                  case 8:
                    pcVar17 = "left kicks";
                    break;
                  case 9:
                    pcVar17 = "right kicks";
                    break;
                  case 10:
                    pcVar17 = "leg lifts";
                    break;
                  case 0xb:
                    pcVar17 = "left leg lifts";
                    break;
                  case 0xc:
                    pcVar17 = "right leg lifts";
                    break;
                  case 0xd:
                    pcVar17 = "body level";
                    break;
                  case 0xe:
                    pcVar17 = "body level changes";
                    break;
                  case 0xf:
                    pcVar17 = "arm carriage";
                    break;
                  case 0x10:
                    pcVar17 = "raised left arms";
                    break;
                  case 0x11:
                    pcVar17 = "raised right arms";
                    break;
                  case 0x12:
                    pcVar17 = "raised arms";
                    break;
                  case 0x13:
                    pcVar17 = "spins";
                    break;
                  case 0x14:
                    pcVar17 = "independent body movement";
                    break;
                  case 0x15:
                    pcVar17 = "sway";
                    break;
                  case 0x16:
                    pcVar17 = "forward bends";
                    break;
                  case 0x17:
                    pcVar17 = "backward bends";
                    break;
                  case 0x18:
                    pcVar17 = "leftward bends";
                    break;
                  case 0x19:
                    pcVar17 = "rightward bends";
                    break;
                  case 0x1a:
                    pcVar17 = "footwork";
                    break;
                  case 0x1b:
                    pcVar17 = "movement along the line of dance";
                  }
                  load_supplier_0x70b90(ppppuVar20,pcVar17);
                }
                pppuVar5 = pppuStack_c8;
                lVar8 = lStack_238;
                uVar14 = *(uint *)(*(longlong *)(lVar22 + 0x130) + lVar37 * 4);
                uVar15 = uVar14 >> 2 & 1;
                uVar24 = uVar15 + 1;
                if ((uVar14 & 8) == 0) {
                  uVar24 = uVar15;
                }
                uVar15 = uVar24 + 1;
                if ((uVar14 & 0x10) == 0) {
                  uVar15 = uVar24;
                }
                uVar24 = uVar15 + 1;
                if ((uVar14 & 0x20) == 0) {
                  uVar24 = uVar15;
                }
                if (uVar24 != 0) {
                  iVar35 = 0;
                  do {
                    if (iVar35 == 0) {
                      uVar6 = 4;
                    }
                    else if (iVar35 == 1) {
                      uVar6 = 8;
                    }
                    else if (iVar35 == 2) {
                      uVar6 = 0x10;
                    }
                    else if (iVar35 == 3) {
                      uVar6 = 0x20;
                    }
                    if ((*(uint *)(*(longlong *)(lVar8 + 0x130) + lVar37 * 4) & uVar6) != 0) {
                      uVar24 = uVar24 - 1;
                      if (uVar6 == 4) {
                        pcVar17 = " mirrored";
LAB_1404f6198:
                        load_supplier_0x70b90(pppuVar5,pcVar17);
                      }
                      else {
                        if (uVar6 == 8) {
                          pcVar17 = " performed in retrograde";
                          goto LAB_1404f6198;
                        }
                        if (uVar6 == 0x10) {
                          pcVar17 = " performed in succession";
                          goto LAB_1404f6198;
                        }
                        if (uVar6 == 0x20) {
                          pcVar17 = " shadowed";
                          goto LAB_1404f6198;
                        }
                      }
                      if ((int)uVar24 < 2) {
                        if (uVar24 != 1) goto LAB_1404f61c2;
                        pcVar17 = " and";
                      }
                      else {
                        pcVar17 = ",";
                      }
                      load_supplier_0x70b90(pppuVar5,pcVar17);
                    }
LAB_1404f61c2:
                    iVar35 = iVar35 + 1;
                  } while (iVar35 < 4);
                  FUN_140071040(pppuVar5," by group members",0x11);
                  ppppuVar20 = (undefined8 ****)pppuVar5;
                  lVar22 = lStack_238;
                  iVar30 = (int)uStack_240;
                }
                uVar14 = *(uint *)(*(longlong *)(lVar22 + 0x130) + lVar37 * 4);
                if ((uVar14 & 0x40) == 0) {
                  if ((char)uVar14 < '\0') {
                    load_supplier_0x70b90(ppppuVar20," of the follower");
                  }
                }
                else {
                  FUN_140071040(ppppuVar20," of the lead",0xc);
                }
                if (iVar32 < 2) {
                  if (iVar32 != 1) goto LAB_1404f6259;
                  uVar41 = 5;
                  pcVar17 = " and ";
                }
                else {
                  uVar41 = 2;
                  pcVar17 = ", ";
                }
                FUN_140071040(ppppuVar20,pcVar17,uVar41);
              }
LAB_1404f6259:
              iVar30 = iVar30 + 1;
              uStack_240 = CONCAT44(uStack_240._4_4_,iVar30);
              lVar37 = lVar37 + 1;
              lVar8 = *(longlong *)(lVar22 + 0xe8);
              puVar10 = puStack_208;
              iVar26 = iStack_228;
              iVar35 = iStack_22c;
            } while ((ulonglong)(longlong)iVar30 <
                     (ulonglong)(*(longlong *)(lVar22 + 0xf0) - lVar8 >> 2));
          }
          uVar6 = uStack_254;
          if ((0 < iVar35) || (0 < (int)uStack_254)) {
            if (0 < iVar26) {
              FUN_140071040(ppppuVar20,", with ",7);
            }
            pppuVar5 = pppuStack_c8;
            lVar8 = lStack_238;
            if (0 < iVar35) {
              iVar26 = 0;
              lVar22 = *(longlong *)(lStack_238 + 0xe8);
              if (*(longlong *)(lStack_238 + 0xf0) - lVar22 >> 2 != 0) {
                lVar37 = 0;
                do {
                  if ((*(int *)(lVar22 + lVar37) == 5) &&
                     (iVar30 = *(int *)(lVar37 + *(longlong *)(lVar8 + 0x100)), iVar30 != -1)) {
                    if (iVar30 == 0xb) {
                      pcVar17 = "large ";
                    }
                    else if (iVar30 == 0x17) {
                      pcVar17 = "aborted ";
                    }
                    else {
                      if (iVar30 != 0x18) goto LAB_1404f6336;
                      pcVar17 = "partially realized ";
                    }
                    load_supplier_0x70b90(pppuVar5,pcVar17);
                  }
LAB_1404f6336:
                  iVar26 = iVar26 + 1;
                  lVar37 = lVar37 + 4;
                  lVar22 = *(longlong *)(lVar8 + 0xe8);
                  uVar6 = uStack_254;
                } while ((ulonglong)(longlong)iVar26 <
                         (ulonglong)(*(longlong *)(lVar8 + 0xf0) - lVar22 >> 2));
              }
              ppppuVar20 = (undefined8 ****)pppuStack_c8;
              FUN_140071040(pppuStack_c8,"moves",5);
            }
            if (0 < (int)uVar6) {
              if (0 < iVar35) {
                FUN_140071040(ppppuVar20," and ",5);
              }
              FUN_140071040(ppppuVar20,"movement ",9);
              pppuVar5 = pppuStack_c8;
              uVar25 = 0;
              iVar35 = 0;
              uVar21 = *(longlong *)(lVar8 + 0xf0) - *(longlong *)(lVar8 + 0xe8) >> 2;
              if (uVar21 != 0) {
                lVar22 = 0;
                do {
                  if (*(int *)(*(longlong *)(lVar8 + 0xe8) + lVar22) == 5) {
                    uVar25 = (ulonglong)
                             ((uint)uVar25 | *(uint *)(lVar22 + *(longlong *)(lVar8 + 0x130)));
                  }
                  iVar35 = iVar35 + 1;
                  lVar22 = lVar22 + 4;
                } while ((ulonglong)(longlong)iVar35 < uVar21);
              }
              uVar14 = (uint)(uVar25 >> 2) & 1;
              uVar6 = uVar14 + 1;
              if ((uVar25 & 8) == 0) {
                uVar6 = uVar14;
              }
              uVar14 = uVar6 + 1;
              if ((uVar25 & 0x10) == 0) {
                uVar14 = uVar6;
              }
              uVar6 = uVar14 + 1;
              if ((uVar25 & 0x20) == 0) {
                uVar6 = uVar14;
              }
              if (uVar6 != 0) {
                iVar35 = 0;
                uVar14 = (uint)pppuStack_c8;
                do {
                  if (iVar35 == 0) {
                    uVar14 = 4;
                  }
                  else if (iVar35 == 1) {
                    uVar14 = 8;
                  }
                  else if (iVar35 == 2) {
                    uVar14 = 0x10;
                  }
                  else if (iVar35 == 3) {
                    uVar14 = 0x20;
                  }
                  if (((uint)uVar25 & uVar14) != 0) {
                    uVar6 = uVar6 - 1;
                    if (uVar14 == 4) {
                      pcVar17 = "mirrored";
LAB_1404f64ac:
                      uVar41 = 8;
LAB_1404f64b2:
                      FUN_140071040(pppuVar5,pcVar17,uVar41);
                    }
                    else {
                      if (uVar14 == 8) {
                        uVar41 = 0x17;
                        pcVar17 = "performed in retrograde";
                        goto LAB_1404f64b2;
                      }
                      if (uVar14 == 0x10) {
                        uVar41 = 0x17;
                        pcVar17 = "performed in succession";
                        goto LAB_1404f64b2;
                      }
                      if (uVar14 == 0x20) {
                        pcVar17 = "shadowed";
                        goto LAB_1404f64ac;
                      }
                    }
                    if ((int)uVar6 < 2) {
                      if (uVar6 != 1) goto LAB_1404f64e8;
                      uVar41 = 5;
                      pcVar17 = " and ";
                    }
                    else {
                      uVar41 = 2;
                      pcVar17 = ", ";
                    }
                    FUN_140071040(pppuVar5,pcVar17,uVar41);
                  }
LAB_1404f64e8:
                  iVar35 = iVar35 + 1;
                } while (iVar35 < 4);
                FUN_140071040(pppuVar5," by group members",0x11);
                puVar10 = puStack_208;
              }
            }
          }
        }
        param_2 = (undefined8 ****)pppuStack_c8;
        FUN_140071040(pppuStack_c8,".  ",3);
        uVar25 = uStack_1e8;
        puVar27 = puStack_e0;
        param_1 = lStack_238;
        puVar23 = puVar10;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x150) - *(longlong *)(param_1 + 0x148) >> 3 != 0) {
    uStack_220 = 0;
    iStack_1f0 = 0;
    iStack_22c = 0;
    iStack_228 = 0;
    uStack_240 = uStack_240 & 0xffffffff00000000;
    uStack_230 = 0xffffffff;
    uVar6 = 0xffffffff;
    uStack_254 = 0xffffffff;
    if (uVar25 != 0) {
      puVar10 = *(undefined8 **)(uVar25 + 0x88);
      uStack_230 = 0xffffffff;
      uStack_220 = 0;
      uVar14 = 0;
      while (uStack_254 = uVar6, puVar10 < *(undefined8 **)(uVar25 + 0x90)) {
        if (*(int *)*puVar10 == 10) {
          uStack_220 = uStack_220 + 1;
          if (uStack_230 != 0xffffffff) {
            if (uVar6 == 0xffffffff) {
              uVar6 = uVar14;
            }
            goto LAB_1404f65d9;
          }
          puVar10 = puVar10 + 1;
          uStack_230 = uVar14;
          uVar14 = uVar14 + 1;
        }
        else {
LAB_1404f65d9:
          puVar10 = puVar10 + 1;
          uVar14 = uVar14 + 1;
        }
      }
    }
    iStack_210 = 0;
    plVar39 = *(longlong **)(param_1 + 0x150);
    uStack_1c8 = (longlong)puStack_200 - (longlong)puVar23 >> 3;
    uStack_1c0 = (longlong)puVar27 - (longlong)puStack_e8 >> 3;
    plVar9 = *(longlong **)(param_1 + 0x148);
    uVar6 = uStack_254;
    plStack_248 = plVar39;
    for (; plVar9 < plVar39; plVar9 = plVar9 + 1) {
      lVar8 = *plVar9;
      puVar28 = (uint *)0x0;
      puVar18 = puVar28;
      if (*(int *)(lVar8 + 0x18) == -1) {
        puVar18 = (uint *)(ulonglong)(*(int *)(lVar8 + 0x10) == -1);
      }
      puVar16 = puVar28;
      if (*(longlong *)(lVar8 + 0x30) - *(longlong *)(lVar8 + 0x28) >> 2 == 0) {
        puVar16 = puVar18;
      }
      puVar18 = puVar28;
      if (*(int *)(lVar8 + 0x14) == -1) {
        puVar18 = puVar16;
      }
      puVar16 = puVar28;
      if (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2 == 0) {
        puVar16 = puVar18;
      }
      cVar12 = '\0';
      if (*(int *)(lVar8 + 0x4c) == -1) {
        cVar12 = (char)puVar16;
      }
      if (cVar12 != '\0') goto LAB_1404f8423;
      FUN_140071040(param_2,"[B]",3);
      if ((uStack_1e8 == 0) || (*(int *)(*plVar9 + 0xb0) == -1)) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0xf;
        pppuStack_c8 = (undefined8 ****)0x0;
        FUN_140548050(iStack_210 + 1,&pppuStack_c8,0);
        load_supplier_0x546560(&pppuStack_c8);
        FUN_140071040(param_2,"The ",4);
        ppppuVar20 = &pppuStack_c8;
        if (0xf < uStack_b0) {
          ppppuVar20 = (undefined8 ****)pppuStack_c8;
        }
        FUN_140071040(param_2,ppppuVar20,uStack_b8);
        FUN_140071040(param_2," section is distinct.  ");
        FUN_140070e80(&pppuStack_c8);
        goto LAB_1404f6ad1;
      }
      puVar28 = *(uint **)(*(longlong *)(uStack_1e8 + 0x88) + (longlong)*(int *)(*plVar9 + 0xb0) * 8
                          );
      if (iStack_210 == 0) {
        uVar41 = 0x1a;
        pcVar17 = "The dance begins with the ";
      }
      else {
        uVar41 = 0x28;
        pcVar17 = "The dance enters a new section with the ";
      }
      FUN_140071040(param_2,pcVar17,uVar41);
      if ((*puVar28 == 0) && (0 < iStack_1f0)) {
        FUN_140071040(param_2,"next ",5);
      }
      if ((*puVar28 == 5) && (0 < iStack_22c)) {
        FUN_140071040(param_2,"next ",5);
      }
      if ((*puVar28 == 6) && (0 < iStack_228)) {
        FUN_140071040(param_2,"next ",5);
      }
      if ((*puVar28 == 9) && (0 < (int)uStack_240)) {
        FUN_140071040(param_2,"next ",5);
      }
      if (0xb < *puVar28) goto LAB_1404f6a16;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0:
        FUN_140071040(param_2,"passage",7);
        if (1 < (int)puVar28[4]) {
          load_supplier_0x70b90(param_2,"s");
        }
        iStack_1f0 = iStack_1f0 + 1;
        break;
      case 1:
        FUN_140071040(param_2,"introduction",0xc);
        break;
      case 2:
        FUN_140071040(param_2,"exposition",10);
        uVar14 = puVar28[1];
        if (uVar14 == uStack_230) {
          if (uStack_220 == 1) {
            pcVar17 = " of the theme";
          }
          else {
LAB_1404f6833:
            pcVar17 = " of the first theme";
          }
        }
        else {
LAB_1404f683f:
          if (uVar14 != uVar6) break;
          pcVar17 = " of the second theme";
        }
        goto LAB_1404f6a11;
      case 3:
        FUN_140071040(param_2,"recapitulation",0xe);
        uVar14 = puVar28[1];
        if (uVar14 != uStack_230) goto LAB_1404f683f;
        if (uStack_220 != 1) goto LAB_1404f6833;
        pcVar17 = " of the theme";
        goto LAB_1404f6a11;
      case 4:
        FUN_140071040(param_2,"synthesis",9);
        if ((puVar28[1] == uStack_230) && (puVar28[1] == uVar6)) {
          pcVar17 = " of the two themes";
          goto LAB_1404f6a11;
        }
        break;
      case 5:
        FUN_140071040(param_2,"verse",5);
        if (1 < (int)puVar28[4]) {
          load_supplier_0x70b90(param_2,"s");
        }
        iStack_22c = iStack_22c + 1;
        break;
      case 6:
        FUN_140071040(param_2,"chorus",6);
        iStack_228 = iStack_228 + 1;
        break;
      case 7:
        FUN_140071040(param_2,"finale",6);
        break;
      case 8:
        FUN_140071040(param_2,"coda",4);
        break;
      case 9:
        FUN_140071040(param_2,"bridge-passage",0xe);
        if (1 < (int)puVar28[4]) {
          load_supplier_0x70b90(param_2,"s");
        }
        uStack_240 = CONCAT44(uStack_240._4_4_,(int)uStack_240 + 1);
        break;
      case 10:
        if (uVar6 != 0xffffffff) {
          if (*(uint *)(*plVar9 + 0xb0) == uStack_230) {
            pcVar17 = "first ";
          }
          else {
            if (*(uint *)(*plVar9 + 0xb0) != uVar6) goto LAB_1404f69a5;
            pcVar17 = "second ";
          }
          load_supplier_0x70b90(param_2,pcVar17);
        }
LAB_1404f69a5:
        FUN_140071040(param_2,"theme",5);
        if (1 < (int)puVar28[4]) {
          pcVar17 = "s";
          goto LAB_1404f6a11;
        }
        break;
      case 0xb:
        FUN_140071040(param_2,"variations",10);
        if (puVar28[1] == uStack_230) {
          if (uStack_220 == 1) {
            pcVar17 = " on the theme";
          }
          else {
            pcVar17 = " on the first theme";
          }
        }
        else {
          if (puVar28[1] != uVar6) break;
          pcVar17 = " on the second theme";
        }
LAB_1404f6a11:
        load_supplier_0x70b90(param_2,pcVar17);
      }
LAB_1404f6a16:
      FUN_140071040(param_2," of the music.  ");
LAB_1404f6ad1:
      if ((*(int *)(*plVar9 + 0xc) == -1) && (*(int *)(*plVar9 + 0x10) == -1)) {
        if (puVar28 != (uint *)0x0) {
          if ((puVar28[9] == 0xffffffff) && ((puVar28[0x2a] + 1 < 2 || (puVar28[0x2a] == 4)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_1404f6b13;
        }
      }
      else {
LAB_1404f6b13:
        pcVar17 = "The dancer performs ";
        if (*(int *)(param_1 + 0x98) != 0) {
          pcVar17 = "The dancers perform ";
        }
        FUN_140071040(param_2,pcVar17,0x14);
        iVar35 = *(int *)(*plVar9 + 0xc);
        if (iVar35 == 0) {
          pcVar17 = "in a single line";
LAB_1404f6b95:
          uVar41 = 0x10;
LAB_1404f6b9b:
          FUN_140071040(param_2,pcVar17,uVar41);
        }
        else {
          if (iVar35 == 1) {
            pcVar17 = "in several lines";
            goto LAB_1404f6b95;
          }
          if (iVar35 == 2) {
            uVar41 = 0xb;
            pcVar17 = "in a circle";
            goto LAB_1404f6b9b;
          }
          if (iVar35 == 3) {
            uVar41 = 0x12;
            pcVar17 = "in a double circle";
            goto LAB_1404f6b9b;
          }
          if (iVar35 == 4) {
            uVar41 = 0xf;
            pcVar17 = "loosely mingled";
            goto LAB_1404f6b9b;
          }
        }
        if (*(int *)(*plVar9 + 0x10) != -1) {
          if (*(int *)(*plVar9 + 0xc) != -1) {
            FUN_140071040(param_2," ",1);
          }
          iVar35 = *(int *)(*plVar9 + 0x10);
          if (iVar35 == 0) {
            if (*(int *)(param_1 + 0x98) == 0) {
              uVar41 = 0x18;
              pcVar17 = "along a clockwise circle";
            }
            else {
              uVar41 = 0x11;
              pcVar17 = "turning clockwise";
            }
          }
          else if (iVar35 == 1) {
            if (*(int *)(param_1 + 0x98) == 0) {
              uVar41 = 0x1f;
              pcVar17 = "along a counterclockwise circle";
            }
            else {
              uVar41 = 0x18;
              pcVar17 = "turning counterclockwise";
            }
          }
          else if (iVar35 == 2) {
            uVar41 = 0x18;
            pcVar17 = "along an improvised path";
          }
          else {
            if (iVar35 != 3) goto LAB_1404f6c5d;
            uVar41 = 0x17;
            pcVar17 = "along an intricate path";
          }
          FUN_140071040(param_2,pcVar17,uVar41);
        }
LAB_1404f6c5d:
        if (puVar28 != (uint *)0x0) {
          if ((puVar28[9] == 0xffffffff) && ((puVar28[0x2a] + 1 < 2 || (puVar28[0x2a] == 4)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if ((*(int *)(*plVar9 + 0xc) != -1) || (*(int *)(*plVar9 + 0x10) != -1)) {
              FUN_140071040(param_2,", moving ",9);
            }
            if (puVar28[0x2a] - 1 < 0x21) {
                    /* WARNING: Switch is manually overridden */
              switch((&UNK_1404f883c)[(int)(puVar28[0x2a] - 1)]) {
              case 0:
                uVar41 = 0xc;
                pcVar17 = "very slowly ";
                break;
              case 1:
                uVar41 = 7;
                pcVar17 = "slowly ";
                break;
              case 2:
                uVar41 = 8;
                pcVar17 = "quickly ";
                break;
              case 3:
                uVar41 = 0xd;
                pcVar17 = "very quickly ";
                break;
              case 4:
                uVar41 = 0x12;
                pcVar17 = "faster and faster ";
                break;
              case 5:
                uVar41 = 0x12;
                pcVar17 = "slower and slower ";
                break;
              case 6:
                goto override_jmp_1404f6cdc_case_2;
              }
              FUN_140071040(param_2,pcVar17,uVar41);
            }
override_jmp_1404f6cdc_case_2:
            uVar21 = _DAT_14250a410 - _DAT_14250a408 >> 3;
            uVar6 = (uint)uVar21;
            if (uVar6 != 0) {
              iVar35 = 0;
              while (0x40 < (int)uVar6) {
                uVar6 = (uint)(uVar21 >> 1) & 0x7fffffff;
                iVar26 = uVar6 + iVar35;
                if ((int)puVar28[9] < **(int **)(_DAT_14250a408 + (longlong)iVar26 * 8)) {
                  iVar26 = iVar35;
                }
                uVar6 = (int)uVar21 - uVar6;
                uVar21 = (ulonglong)uVar6;
                iVar35 = iVar26;
              }
              iVar26 = iVar35 + uVar6;
              if ((iVar26 != -1) && (iVar35 < iVar26)) {
                lVar8 = (longlong)iVar35;
                do {
                  if (puVar28[9] == **(uint **)(_DAT_14250a408 + lVar8 * 8)) {
                    lVar8 = *(longlong *)(_DAT_14250a408 + (longlong)iVar35 * 8);
                    uStack_1d8 = 0xffffffff;
                    uStack_1d0 = 0;
                    aiStack_88[0] = iVar35;
                    lStack_80 = lVar8;
                    if (lVar8 == 0) goto LAB_1404f6de4;
                    if (((int)puVar28[10] < 0) ||
                       ((ulonglong)(*(longlong *)(lVar8 + 0x28) - *(longlong *)(lVar8 + 0x20) >> 3)
                        <= (ulonglong)(longlong)(int)puVar28[10])) {
                      if (((int)puVar28[0xb] < 0) ||
                         ((ulonglong)(*(longlong *)(lVar8 + 0x10) - *(longlong *)(lVar8 + 8) >> 3)
                          <= (ulonglong)(longlong)(int)puVar28[0xb])) goto LAB_1404f6de4;
                      FUN_140071040(param_2,"to the ",7);
                      uVar6 = puVar28[0xb];
                      lVar8 = *(longlong *)(lVar8 + 8);
                    }
                    else {
                      FUN_140071040(param_2,"to the ",7);
                      uVar6 = puVar28[10];
                      lVar8 = *(longlong *)(lVar8 + 0x20);
                    }
                    plVar19 = *(longlong **)(lVar8 + (longlong)(int)uVar6 * 8);
                    plVar38 = plVar19 + 2;
                    if (0xf < (ulonglong)plVar19[3]) {
                      plVar19 = (longlong *)*plVar19;
                    }
                    FUN_140071040(param_2,plVar19,*plVar38);
                    uVar41 = 7;
                    pcVar17 = " rhythm";
                    goto LAB_1404f6df1;
                  }
                  iVar35 = iVar35 + 1;
                  lVar8 = lVar8 + 1;
                } while (lVar8 < iVar26);
              }
            }
            pppuStack_c8 = (undefined8 ***)CONCAT44(uStack_1d4,0xffffffff);
            uStack_c0 = 0;
LAB_1404f6de4:
            uStack_1d0 = 0;
            uStack_1d8 = 0xffffffff;
            pcVar17 = "with the music";
            uVar41 = 0xe;
LAB_1404f6df1:
            FUN_140071040(param_2,pcVar17,uVar41);
          }
        }
        FUN_140071040(param_2,".  ");
      }
      if (*(int *)(*plVar9 + 0x18) == -1) goto LAB_1404f717f;
      FUN_140071040(param_2,"The partners ",0xd);
      iVar35 = *(int *)(*plVar9 + 0x18);
      if (iVar35 == 0) {
        uVar41 = 0xd;
        pcVar17 = "dance closely";
LAB_1404f6f5f:
        FUN_140071040(param_2,pcVar17,uVar41);
      }
      else {
        if (iVar35 == 1) {
          uVar41 = 0x15;
          pcVar17 = "maintain open contact";
          goto LAB_1404f6f5f;
        }
        if (iVar35 == 2) {
          uVar41 = 0x13;
          pcVar17 = "rarely make contact";
          goto LAB_1404f6f5f;
        }
      }
      FUN_140071040(param_2,", communicating intent ",0x17);
      lVar8 = *plVar9;
      if (5 < *(uint *)(lVar8 + 0x1c)) goto LAB_1404f716a;
                    /* WARNING: Switch is manually overridden */
      switch(*(uint *)(lVar8 + 0x1c)) {
      case 0:
        FUN_140071040(param_2,"by pushing together",0x13);
        if (*(int *)(*plVar9 + 0x20) == 0) {
          FUN_140071040(param_2," constantly",0xb);
        }
        if (*(int *)(*plVar9 + 0x20) != 1) goto LAB_1404f716a;
        uVar41 = 8;
        pcVar17 = " briefly";
        break;
      case 1:
        FUN_140071040(param_2,"by pulling away",0xf);
        if (*(int *)(*plVar9 + 0x20) == 0) {
          FUN_140071040(param_2," constantly",0xb);
        }
        if (*(int *)(*plVar9 + 0x20) != 1) goto LAB_1404f716a;
        uVar41 = 8;
        pcVar17 = " briefly";
        break;
      case 2:
        if (*(int *)(lVar8 + 0x20) == 0) {
          FUN_140071040(param_2,"constantly ",0xb);
        }
        if (*(int *)(*plVar9 + 0x20) == 1) {
          FUN_140071040(param_2,"briefly ",8);
        }
        uVar41 = 0xd;
        pcVar17 = "through touch";
        break;
      case 3:
        if (*(int *)(lVar8 + 0x20) == 0) {
          FUN_140071040(param_2,"constantly ",0xb);
        }
        if (*(int *)(*plVar9 + 0x20) == 1) {
          FUN_140071040(param_2,"briefly ",8);
        }
        uVar41 = 0x15;
        pcVar17 = "through a light touch";
        break;
      case 4:
        if (*(int *)(lVar8 + 0x20) == 0) {
          FUN_140071040(param_2,"constantly ",0xb);
        }
        if (*(int *)(*plVar9 + 0x20) == 1) {
          FUN_140071040(param_2,"briefly ",8);
        }
        pcVar17 = "through visual cues";
        goto LAB_1404f715c;
      case 5:
        if (*(int *)(lVar8 + 0x20) == 0) {
          FUN_140071040(param_2,"constantly ",0xb);
        }
        if (*(int *)(*plVar9 + 0x20) == 1) {
          FUN_140071040(param_2,"briefly ",8);
        }
        pcVar17 = "through spoken cues";
LAB_1404f715c:
        uVar41 = 0x13;
      }
      FUN_140071040(param_2,pcVar17,uVar41);
LAB_1404f716a:
      FUN_140071040(param_2,".  ");
LAB_1404f717f:
      if (*(int *)(*plVar9 + 0x4c) != -1) {
        FUN_140071040(param_2,"The dancers imitate the movement of the ",0x28);
        iVar35 = *(int *)(*plVar9 + 0x4c);
        if ((iVar35 < 0) || (uVar21 = _DAT_14250eef0 - _DAT_14250eee8 >> 3, (int)uVar21 <= iVar35))
        {
          FUN_140071040(param_2,"creature",8);
        }
        else {
          uStack_a0 = 0;
          uStack_90 = 0xf;
          uStack_98 = 0;
          pppuStack_a8 = (undefined8 ****)0x0;
          sVar13 = (short)iVar35;
          if ((-1 < sVar13) && ((ulonglong)(longlong)sVar13 < uVar21)) {
            lVar8 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar13 * 8);
            ppppuVar20 = (undefined8 ****)(lVar8 + 0x20);
            if (&pppuStack_a8 != ppppuVar20) {
              if (0xf < *(ulonglong *)(lVar8 + 0x38)) {
                ppppuVar20 = (undefined8 ****)*ppppuVar20;
              }
              FUN_140070f00(&pppuStack_a8,ppppuVar20,*(undefined8 *)(lVar8 + 0x30));
            }
          }
          ppppuVar20 = &pppuStack_a8;
          if (0xf < uStack_90) {
            ppppuVar20 = (undefined8 ****)pppuStack_a8;
          }
          FUN_140071040(param_2,ppppuVar20,uStack_98);
          if (0xf < uStack_90) {
            if (0xfff < uStack_90 + 1) {
              if (0x1f < (ulonglong)((longlong)pppuStack_a8 + (-8 - (longlong)pppuStack_a8[-1]))) {
                _invalid_parameter_noinfo_noreturn(pppuStack_a8[-1],uStack_90 + 0x28);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            load_supplier_0x15530d0();
          }
        }
        FUN_140071040(param_2,".  ");
      }
      lVar8 = *plVar9;
      piVar11 = *(int **)(lVar8 + 0x28);
      iVar35 = 0;
      if (*(longlong *)(lVar8 + 0x30) - (longlong)piVar11 >> 2 != 0) {
        for (; piVar11 < *(int **)(lVar8 + 0x30); piVar11 = piVar11 + 1) {
          iVar26 = *piVar11;
          if ((((iVar26 == 0) || (iVar26 == 1)) || (iVar26 == 2)) || (iVar26 == 3)) {
            iVar35 = iVar35 + 1;
          }
        }
        param_1 = lStack_238;
        if (0 < iVar35) {
          FUN_140071040(param_2,"There are partner changes ",0x1a);
          piVar11 = *(int **)(*plVar9 + 0x28);
          piVar1 = *(int **)(*plVar9 + 0x30);
          while (piVar11 < piVar1) {
            iVar26 = *piVar11;
            if (((iVar26 == 0) || (iVar26 == 1)) || ((iVar26 == 2 || (iVar26 == 3)))) {
              iVar35 = iVar35 + -1;
              if (iVar26 == 0) {
                uVar41 = 0x35;
                pcVar17 = "with the lead advancing along the main line of motion";
LAB_1404f73b5:
                FUN_140071040(param_2,pcVar17,uVar41);
              }
              else {
                if (iVar26 == 1) {
                  uVar41 = 0x37;
                  pcVar17 = "with the lead advancing against the main line of motion";
                  goto LAB_1404f73b5;
                }
                if (iVar26 == 2) {
                  uVar41 = 0x23;
                  pcVar17 = "with the lead turning out clockwise";
                  goto LAB_1404f73b5;
                }
                if (iVar26 == 3) {
                  uVar41 = 0x2a;
                  pcVar17 = "with the lead turning out counterclockwise";
                  goto LAB_1404f73b5;
                }
              }
              if (iVar35 < 2) {
                if (iVar35 == 1) {
                  FUN_140071040(param_2," and ",5);
                }
                goto LAB_1404f73fc;
              }
              FUN_140071040(param_2,",",1);
              piVar11 = piVar11 + 1;
            }
            else {
LAB_1404f73fc:
              piVar11 = piVar11 + 1;
            }
          }
          FUN_140071040(param_2);
          param_1 = lStack_238;
        }
      }
      iVar35 = 0;
      lVar8 = *plVar9;
      if (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2 == 0) {
        uVar6 = uStack_254;
        if (*(int *)(lVar8 + 0x14) != -1) {
LAB_1404f7447:
          FUN_140071040(param_2,"There is a basic movement ",0x1a);
          load_dance_movement_description
                    (param_2,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x160) +
                              (longlong)*(int *)(*plVar9 + 0x14) * 8),uStack_1c0 & 0xffffffff,
                     uStack_1c8 & 0xffffffff);
          goto LAB_1404f747f;
        }
      }
      else {
        if (*(int *)(lVar8 + 0x14) != -1) goto LAB_1404f7447;
LAB_1404f747f:
        plVar38 = plStack_248;
        lVar8 = *plVar9;
        uVar21 = *(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2;
        uVar6 = uStack_254;
        if (uVar21 != 0) {
          iVar30 = 0;
          iVar33 = 0;
          iVar26 = 0;
          iStack_250 = 0;
          iVar32 = 0;
          lVar22 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar8 + 0x50) + lVar22) == 5) {
              uVar14 = *(uint *)(lVar22 + *(longlong *)(lVar8 + 0x68));
              if (uVar14 == 0xffffffff) {
                iStack_250 = iStack_250 + 1;
                iVar26 = iStack_250;
              }
              else {
                iVar26 = iStack_250;
                if (uVar14 < 0x2e) {
                    /* WARNING: Switch is manually overridden */
                  switch((&UNK_1404f8884)[(int)uVar14]) {
                  case 0:
                    iVar33 = iVar33 + 1;
                    goto LAB_1404f74ff;
                  }
                }
                iVar35 = iVar35 + 1;
              }
            }
            else {
              iVar30 = iVar30 + 1;
            }
LAB_1404f74ff:
            iVar32 = iVar32 + 1;
            lVar22 = lVar22 + 4;
          } while ((ulonglong)(longlong)iVar32 < uVar21);
          iStack_224 = iVar35;
          iStack_218 = iVar30;
          if (((0 < iVar30) || (0 < iVar26)) ||
             ((0 < iVar35 || (plVar39 = plStack_248, 0 < iVar33)))) {
            FUN_140071040(param_2,"This",4);
            if (((iVar30 == 0) && (iStack_250 == 0)) && (iVar35 == 0)) {
              FUN_140071040(param_2," section is",0xb);
            }
            iVar26 = iStack_218;
            iVar35 = iStack_224;
            iVar32 = 0;
            lVar8 = *plVar9;
            if (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2 != 0) {
              lVar22 = 0;
              do {
                if (((*(int *)(lVar22 + *(longlong *)(lVar8 + 0x50)) != 5) ||
                    (uVar6 = *(uint *)(lVar22 + *(longlong *)(lVar8 + 0x68)), uVar6 == 0xffffffff))
                   || (0x2d < uVar6)) goto override_jmp_1404f75c9_case_11;
                    /* WARNING: Switch is manually overridden */
                switch(uVar6) {
                case 0:
                  uVar41 = 9;
                  pcVar17 = " graceful";
                  break;
                case 1:
                  uVar41 = 7;
                  pcVar17 = " serene";
                  break;
                case 2:
                  uVar41 = 5;
                  pcVar17 = " calm";
                  break;
                case 3:
                  uVar41 = 10;
                  pcVar17 = " grotesque";
                  break;
                case 4:
                  uVar41 = 6;
                  pcVar17 = " crude";
                  break;
                case 5:
                  pcVar17 = " refined";
                  goto LAB_1404f783f;
                case 6:
                  uVar41 = 0xc;
                  pcVar17 = " understated";
                  break;
                case 7:
                  uVar41 = 9;
                  pcVar17 = " delicate";
                  break;
                case 8:
                  uVar41 = 10;
                  pcVar17 = " elaborate";
                  break;
                case 9:
                  uVar41 = 0xb;
                  pcVar17 = " expressive";
                  break;
                case 10:
                  uVar41 = 7;
                  pcVar17 = " strong";
                  break;
                default:
                  goto override_jmp_1404f75c9_case_11;
                case 0xc:
                  uVar41 = 0xb;
                  pcVar17 = " weightless";
                  break;
                case 0xd:
                  uVar41 = 6;
                  pcVar17 = " fluid";
                  break;
                case 0xe:
                  uVar41 = 0xb;
                  pcVar17 = " undulating";
                  break;
                case 0xf:
                  uVar41 = 5;
                  pcVar17 = " soft";
                  break;
                case 0x10:
                  pcVar17 = " jerking";
                  goto LAB_1404f783f;
                case 0x11:
                  uVar41 = 0xc;
                  pcVar17 = " sharp-edged";
                  break;
                case 0x12:
                  uVar41 = 0xf;
                  pcVar17 = " straight-lined";
                  break;
                case 0x19:
                  uVar41 = 10;
                  pcVar17 = " energetic";
                  break;
                case 0x1a:
                  uVar41 = 0xb;
                  pcVar17 = " passionate";
                  break;
                case 0x1b:
                  uVar41 = 10;
                  pcVar17 = " vivacious";
                  break;
                case 0x1c:
                  uVar41 = 7;
                  pcVar17 = " joyous";
                  break;
                case 0x1d:
                  uVar41 = 6;
                  pcVar17 = " proud";
                  break;
                case 0x1e:
                  uVar41 = 0xb;
                  pcVar17 = " flamboyant";
                  break;
                case 0x1f:
                  uVar41 = 7;
                  pcVar17 = " lively";
                  break;
                case 0x20:
                  uVar41 = 9;
                  pcVar17 = " spirited";
                  break;
                case 0x21:
                  uVar41 = 9;
                  pcVar17 = " vigorous";
                  break;
                case 0x22:
                  pcVar17 = " intense";
                  goto LAB_1404f783f;
                case 0x23:
                  uVar41 = 0xb;
                  pcVar17 = " aggressive";
                  break;
                case 0x24:
                  uVar41 = 9;
                  pcVar17 = " powerful";
                  break;
                case 0x25:
                  uVar41 = 9;
                  pcVar17 = " sluggish";
                  break;
                case 0x26:
                  pcVar17 = " relaxed";
                  goto LAB_1404f783f;
                case 0x27:
                  pcVar17 = " passive";
                  goto LAB_1404f783f;
                case 0x28:
                  uVar41 = 7;
                  pcVar17 = " subtle";
                  break;
                case 0x29:
                  pcVar17 = " sensual";
                  goto LAB_1404f783f;
                case 0x2a:
                  uVar41 = 10;
                  pcVar17 = " debauched";
                  break;
                case 0x2b:
                  uVar41 = 9;
                  pcVar17 = " twisting";
                  break;
                case 0x2c:
                  uVar41 = 10;
                  pcVar17 = " sprightly";
                  break;
                case 0x2d:
                  pcVar17 = " sinuous";
LAB_1404f783f:
                  uVar41 = 8;
                }
                FUN_140071040(param_2,pcVar17,uVar41);
                if (((iVar26 == 0) && (iStack_250 == 0)) && (iVar35 == 0)) {
                  if (iVar33 < 3) {
                    if (iVar33 == 2) {
                      uVar41 = 4;
                      pcVar17 = " and";
                      goto LAB_1404f7886;
                    }
                  }
                  else {
                    uVar41 = 1;
                    pcVar17 = ",";
LAB_1404f7886:
                    FUN_140071040(param_2,pcVar17,uVar41);
                  }
                  iVar33 = iVar33 + -1;
                }
override_jmp_1404f75c9_case_11:
                iVar32 = iVar32 + 1;
                lVar22 = lVar22 + 4;
                lVar8 = *plVar9;
                plVar38 = plStack_248;
                puVar23 = puStack_208;
                iVar30 = iStack_218;
              } while ((ulonglong)(longlong)iVar32 <
                       (ulonglong)(*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2));
            }
            if (((0 < iVar30) || (0 < iStack_250)) || (plVar39 = plVar38, 0 < iStack_224)) {
              FUN_140071040(param_2," section is punctuated by ",0x1a);
              uVar25 = 0;
              lVar8 = *plVar9;
              uVar21 = uVar25;
              uVar6 = uStack_21c;
              iVar35 = iVar30;
              if (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2 != 0) {
                do {
                  if (*(int *)(*(longlong *)(lVar8 + 0x50) + uVar25 * 4) == 5) goto LAB_1404f8160;
                  pppuStack_c8 = (undefined8 ***)CONCAT44(pppuStack_c8._4_4_,iVar30 + -1);
                  if ((*(byte *)(*(longlong *)(lVar8 + 0x98) + uVar25 * 4) & 0xc0) != 0) {
                    FUN_140071040(param_2,"the ",4);
                  }
                  uVar14 = *(uint *)(*(longlong *)(*plVar9 + 0x68) + uVar25 * 4);
                  if (0x2d < uVar14) goto LAB_1404f7c6b;
                    /* WARNING: Switch is manually overridden */
                  switch(uVar14) {
                  case 0:
                    uVar41 = 8;
                    pcVar17 = "graceful";
                    break;
                  case 1:
                    uVar41 = 6;
                    pcVar17 = "serene";
                    break;
                  case 2:
                    uVar41 = 4;
                    pcVar17 = "calm";
                    break;
                  case 3:
                    uVar41 = 9;
                    pcVar17 = "grotesque";
                    break;
                  case 4:
                    uVar41 = 5;
                    pcVar17 = "crude";
                    break;
                  case 5:
                    pcVar17 = "refined";
                    goto LAB_1404f7c5d;
                  case 6:
                    uVar41 = 0xb;
                    pcVar17 = "understated";
                    break;
                  case 7:
                    uVar41 = 8;
                    pcVar17 = "delicate";
                    break;
                  case 8:
                    uVar41 = 9;
                    pcVar17 = "elaborate";
                    break;
                  case 9:
                    uVar41 = 10;
                    pcVar17 = "expressive";
                    break;
                  case 10:
                    uVar41 = 6;
                    pcVar17 = "strong";
                    break;
                  case 0xb:
                    uVar41 = 5;
                    pcVar17 = "large";
                    break;
                  case 0xc:
                    uVar41 = 10;
                    pcVar17 = "weightless";
                    break;
                  case 0xd:
                    uVar41 = 5;
                    pcVar17 = "fluid";
                    break;
                  case 0xe:
                    uVar41 = 10;
                    pcVar17 = "undulating";
                    break;
                  case 0xf:
                    uVar41 = 4;
                    pcVar17 = "soft";
                    break;
                  case 0x10:
                    pcVar17 = "jerking";
                    goto LAB_1404f7c5d;
                  case 0x11:
                    uVar41 = 0xb;
                    pcVar17 = "sharp-edged";
                    break;
                  case 0x12:
                    uVar41 = 0xe;
                    pcVar17 = "straight-lined";
                    break;
                  case 0x13:
                    uVar41 = 4;
                    pcVar17 = "high";
                    break;
                  case 0x14:
                    uVar41 = 3;
                    pcVar17 = "low";
                    break;
                  case 0x15:
                    uVar41 = 0x11;
                    pcVar17 = "loudly percussive";
                    break;
                  case 0x16:
                    uVar41 = 0x11;
                    pcVar17 = "softly percussive";
                    break;
                  case 0x17:
                    pcVar17 = "aborted";
                    goto LAB_1404f7c5d;
                  case 0x18:
                    uVar41 = 0x12;
                    pcVar17 = "partially realized";
                    break;
                  case 0x19:
                    uVar41 = 9;
                    pcVar17 = "energetic";
                    break;
                  case 0x1a:
                    uVar41 = 10;
                    pcVar17 = "passionate";
                    break;
                  case 0x1b:
                    uVar41 = 9;
                    pcVar17 = "vivacious";
                    break;
                  case 0x1c:
                    uVar41 = 6;
                    pcVar17 = "joyous";
                    break;
                  case 0x1d:
                    uVar41 = 5;
                    pcVar17 = "proud";
                    break;
                  case 0x1e:
                    uVar41 = 10;
                    pcVar17 = "flamboyant";
                    break;
                  case 0x1f:
                    uVar41 = 6;
                    pcVar17 = "lively";
                    break;
                  case 0x20:
                    uVar41 = 8;
                    pcVar17 = "spirited";
                    break;
                  case 0x21:
                    uVar41 = 8;
                    pcVar17 = "vigorous";
                    break;
                  case 0x22:
                    pcVar17 = "intense";
                    goto LAB_1404f7c5d;
                  case 0x23:
                    uVar41 = 10;
                    pcVar17 = "aggressive";
                    break;
                  case 0x24:
                    uVar41 = 8;
                    pcVar17 = "powerful";
                    break;
                  case 0x25:
                    uVar41 = 8;
                    pcVar17 = "sluggish";
                    break;
                  case 0x26:
                    pcVar17 = "relaxed";
                    goto LAB_1404f7c5d;
                  case 0x27:
                    pcVar17 = "passive";
                    goto LAB_1404f7c5d;
                  case 0x28:
                    uVar41 = 6;
                    pcVar17 = "subtle";
                    break;
                  case 0x29:
                    pcVar17 = "sensual";
                    goto LAB_1404f7c5d;
                  case 0x2a:
                    uVar41 = 9;
                    pcVar17 = "debauched";
                    break;
                  case 0x2b:
                    uVar41 = 8;
                    pcVar17 = "twisting";
                    break;
                  case 0x2c:
                    uVar41 = 9;
                    pcVar17 = "sprightly";
                    break;
                  case 0x2d:
                    pcVar17 = "sinuous";
LAB_1404f7c5d:
                    uVar41 = 7;
                  }
                  FUN_140071040(param_2,pcVar17,uVar41);
LAB_1404f7c6b:
                  if (*(int *)(*(longlong *)(*plVar9 + 0x68) + uVar25 * 4) != -1) {
                    FUN_140071040(param_2," ",1);
                  }
                  lVar8 = *plVar9;
                  iVar35 = *(int *)(*(longlong *)(lVar8 + 0x50) + uVar25 * 4);
                  if (iVar35 == 6) {
                    if (*(int *)(*(longlong *)(lVar8 + 0x80) + uVar25 * 4) < 0) {
                      FUN_140071040(param_2,"counterclockwise ",0x11);
                    }
                    if (0 < *(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4)) {
                      FUN_140071040(param_2,"clockwise ",10);
                    }
                    iVar35 = -*(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4);
                    if (iVar35 < 0) {
                      iVar35 = *(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4);
                    }
                    if (iVar35 == 0x2d) {
                      FUN_140071040(param_2,"eighth ",7);
                    }
                    iVar35 = -*(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4);
                    if (iVar35 < 0) {
                      iVar35 = *(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4);
                    }
                    if (iVar35 == 0x5a) {
                      FUN_140071040(param_2,"quarter ",8);
                    }
                    iVar35 = -*(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4);
                    if (iVar35 < 0) {
                      iVar35 = *(int *)(*(longlong *)(*plVar9 + 0x80) + uVar25 * 4);
                    }
                    if (iVar35 == 0xb4) {
                      uVar41 = 5;
                      pcVar17 = "half ";
                      goto LAB_1404f7da5;
                    }
                  }
                  else if ((((iVar35 == 0xd) || (iVar35 == 0xe)) || (iVar35 == 0xf)) &&
                          (*(int *)(*(longlong *)(lVar8 + 0x80) + uVar25 * 4) == 2)) {
                    uVar41 = 9;
                    pcVar17 = "repeated ";
LAB_1404f7da5:
                    FUN_140071040(param_2,pcVar17,uVar41);
                  }
                  uVar14 = *(int *)(*(longlong *)(*plVar9 + 0x50) + uVar25 * 4) - 5;
                  if (uVar14 < 0x1d) {
                    /* WARNING: Switch is manually overridden */
                    switch(uVar14) {
                    case 0:
                      uVar41 = 5;
                      pcVar17 = "moves";
                      break;
                    case 1:
                      uVar41 = 5;
                      pcVar17 = "turns";
                      break;
                    case 2:
                      uVar41 = 0x12;
                      pcVar17 = "facial expressions";
                      break;
                    case 3:
                      uVar41 = 0xd;
                      pcVar17 = "hand gestures";
                      break;
                    case 4:
                      uVar41 = 0xe;
                      pcVar17 = "straight walks";
                      break;
                    case 5:
                      uVar41 = 0xc;
                      pcVar17 = "curved walks";
                      break;
                    case 6:
                      uVar41 = 4;
                      pcVar17 = "runs";
                      break;
                    case 7:
                      uVar41 = 5;
                      pcVar17 = "leaps";
                      break;
                    case 8:
                      uVar41 = 5;
                      pcVar17 = "kicks";
                      break;
                    case 9:
                      uVar41 = 10;
                      pcVar17 = "left kicks";
                      break;
                    case 10:
                      uVar41 = 0xb;
                      pcVar17 = "right kicks";
                      break;
                    case 0xb:
                      uVar41 = 9;
                      pcVar17 = "leg lifts";
                      break;
                    case 0xc:
                      uVar41 = 0xe;
                      pcVar17 = "left leg lifts";
                      break;
                    case 0xd:
                      uVar41 = 0xf;
                      pcVar17 = "right leg lifts";
                      break;
                    case 0xe:
                      uVar41 = 10;
                      pcVar17 = "body level";
                      break;
                    case 0xf:
                      uVar41 = 0x12;
                      pcVar17 = "body level changes";
                      break;
                    case 0x10:
                      uVar41 = 0xc;
                      pcVar17 = "arm carriage";
                      break;
                    case 0x11:
                      uVar41 = 0x10;
                      pcVar17 = "raised left arms";
                      break;
                    case 0x12:
                      uVar41 = 0x11;
                      pcVar17 = "raised right arms";
                      break;
                    case 0x13:
                      uVar41 = 0xb;
                      pcVar17 = "raised arms";
                      break;
                    case 0x14:
                      uVar41 = 5;
                      pcVar17 = "spins";
                      break;
                    case 0x15:
                      uVar41 = 0x19;
                      pcVar17 = "independent body movement";
                      break;
                    case 0x16:
                      uVar41 = 4;
                      pcVar17 = "sway";
                      break;
                    case 0x17:
                      uVar41 = 0xd;
                      pcVar17 = "forward bends";
                      break;
                    case 0x18:
                      uVar41 = 0xe;
                      pcVar17 = "backward bends";
                      break;
                    case 0x19:
                      uVar41 = 0xe;
                      pcVar17 = "leftward bends";
                      break;
                    case 0x1a:
                      uVar41 = 0xf;
                      pcVar17 = "rightward bends";
                      break;
                    case 0x1b:
                      uVar41 = 8;
                      pcVar17 = "footwork";
                      break;
                    case 0x1c:
                      uVar41 = 0x20;
                      pcVar17 = "movement along the line of dance";
                    }
                    FUN_140071040(param_2,pcVar17,uVar41);
                  }
                  uVar14 = *(uint *)(*(longlong *)(*plVar9 + 0x98) + uVar25 * 4);
                  uVar15 = uVar14 >> 2 & 1;
                  uVar24 = uVar15 + 1;
                  if ((uVar14 & 8) == 0) {
                    uVar24 = uVar15;
                  }
                  uVar15 = uVar24 + 1;
                  if ((uVar14 & 0x10) == 0) {
                    uVar15 = uVar24;
                  }
                  uVar24 = uVar15 + 1;
                  if ((uVar14 & 0x20) == 0) {
                    uVar24 = uVar15;
                  }
                  iVar30 = iVar30 + -1;
                  if (uVar24 != 0) {
                    iVar35 = 0;
                    do {
                      if (iVar35 == 0) {
                        uVar6 = 4;
                      }
                      else if (iVar35 == 1) {
                        uVar6 = 8;
                      }
                      else if (iVar35 == 2) {
                        uVar6 = 0x10;
                      }
                      else if (iVar35 == 3) {
                        uVar6 = 0x20;
                      }
                      if ((*(uint *)(*(longlong *)(*plVar9 + 0x98) + uVar25 * 4) & uVar6) != 0) {
                        uVar24 = uVar24 - 1;
                        if (uVar6 == 4) {
                          pcVar17 = " mirrored";
LAB_1404f8091:
                          uVar41 = 9;
LAB_1404f8097:
                          FUN_140071040(param_2,pcVar17,uVar41);
                        }
                        else {
                          if (uVar6 == 8) {
                            uVar41 = 0x18;
                            pcVar17 = " performed in retrograde";
                            goto LAB_1404f8097;
                          }
                          if (uVar6 == 0x10) {
                            uVar41 = 0x18;
                            pcVar17 = " performed in succession";
                            goto LAB_1404f8097;
                          }
                          if (uVar6 == 0x20) {
                            pcVar17 = " shadowed";
                            goto LAB_1404f8091;
                          }
                        }
                        if ((int)uVar24 < 2) {
                          if (uVar24 != 1) goto LAB_1404f80cd;
                          uVar41 = 4;
                          pcVar17 = " and";
                        }
                        else {
                          uVar41 = 1;
                          pcVar17 = ",";
                        }
                        FUN_140071040(param_2,pcVar17,uVar41);
                      }
LAB_1404f80cd:
                      iVar35 = iVar35 + 1;
                    } while (iVar35 < 4);
                    uStack_21c = uVar6;
                    FUN_140071040(param_2," by group members",0x11);
                    iVar30 = (uint)pppuStack_c8;
                  }
                  uVar14 = *(uint *)(*(longlong *)(*plVar9 + 0x98) + uVar25 * 4);
                  if ((uVar14 & 0x40) == 0) {
                    if ((char)uVar14 < '\0') {
                      uVar41 = 0x10;
                      pcVar17 = " of the follower";
                      goto LAB_1404f812a;
                    }
                  }
                  else {
                    uVar41 = 0xc;
                    pcVar17 = " of the lead";
LAB_1404f812a:
                    FUN_140071040(param_2,pcVar17,uVar41);
                  }
                  if (iVar30 < 2) {
                    if (iVar30 == 1) {
                      uVar41 = 5;
                      pcVar17 = " and ";
                      goto LAB_1404f8158;
                    }
                  }
                  else {
                    uVar41 = 2;
                    pcVar17 = ", ";
LAB_1404f8158:
                    FUN_140071040(param_2,pcVar17,uVar41);
                  }
LAB_1404f8160:
                  uVar14 = (int)uVar21 + 1;
                  uVar25 = uVar25 + 1;
                  lVar8 = *plVar9;
                  plVar38 = plStack_248;
                  puVar23 = puStack_208;
                  uVar21 = (ulonglong)uVar14;
                  iVar35 = iStack_218;
                } while ((ulonglong)(longlong)(int)uVar14 <
                         (ulonglong)(*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2)
                        );
              }
              iVar30 = iStack_224;
              iVar26 = iStack_250;
              plVar39 = plVar38;
              if ((0 < iStack_224) || (0 < iStack_250)) {
                if (0 < iVar35) {
                  FUN_140071040(param_2,", with ",7);
                }
                if (0 < iVar30) {
                  iVar35 = 0;
                  lVar8 = *plVar9;
                  if (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2 != 0) {
                    lVar22 = 0;
                    do {
                      if ((*(int *)(lVar22 + *(longlong *)(lVar8 + 0x50)) == 5) &&
                         (iVar30 = *(int *)(lVar22 + *(longlong *)(lVar8 + 0x68)), iVar30 != -1)) {
                        if (iVar30 == 0xb) {
                          uVar41 = 6;
                          pcVar17 = "large ";
                        }
                        else if (iVar30 == 0x17) {
                          uVar41 = 8;
                          pcVar17 = "aborted ";
                        }
                        else {
                          if (iVar30 != 0x18) goto LAB_1404f8239;
                          uVar41 = 0x13;
                          pcVar17 = "partially realized ";
                        }
                        FUN_140071040(param_2,pcVar17,uVar41);
                      }
LAB_1404f8239:
                      iVar35 = iVar35 + 1;
                      lVar22 = lVar22 + 4;
                      lVar8 = *plVar9;
                    } while ((ulonglong)(longlong)iVar35 <
                             (ulonglong)
                             (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2));
                  }
                  FUN_140071040(param_2,"moves",5);
                  iVar30 = iStack_224;
                }
                if (0 < iVar26) {
                  if (0 < iVar30) {
                    FUN_140071040(param_2," and ",5);
                  }
                  FUN_140071040(param_2,"movement ",9);
                  uVar29 = 0;
                  lVar8 = *plVar9;
                  uVar31 = *(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 2;
                  uVar21 = uVar29;
                  uVar25 = uVar29;
                  uVar34 = uVar29;
                  if (uVar31 != 0) {
                    do {
                      if (*(int *)(uVar21 + *(longlong *)(lVar8 + 0x50)) == 5) {
                        uVar34 = (ulonglong)
                                 ((uint)uVar34 | *(uint *)(uVar21 + *(longlong *)(lVar8 + 0x98)));
                      }
                      uVar6 = (int)uVar25 + 1;
                      uVar21 = uVar21 + 4;
                      uVar25 = (ulonglong)uVar6;
                    } while ((ulonglong)(longlong)(int)uVar6 < uVar31);
                  }
                  uVar14 = (uint)(uVar34 >> 2) & 1;
                  uVar6 = uVar14 + 1;
                  if ((uVar34 & 8) == 0) {
                    uVar6 = uVar14;
                  }
                  uVar14 = uVar6 + 1;
                  if ((uVar34 & 0x10) == 0) {
                    uVar14 = uVar6;
                  }
                  uVar6 = uVar14 + 1;
                  if ((uVar34 & 0x20) == 0) {
                    uVar6 = uVar14;
                  }
                  uVar14 = uStack_214;
                  if (uVar6 != 0) {
                    do {
                      iVar35 = (int)uVar29;
                      if (iVar35 == 0) {
                        uVar14 = 4;
                      }
                      else if (iVar35 == 1) {
                        uVar14 = 8;
                      }
                      else if (iVar35 == 2) {
                        uVar14 = 0x10;
                      }
                      else if (iVar35 == 3) {
                        uVar14 = 0x20;
                      }
                      if (((uint)uVar34 & uVar14) != 0) {
                        uVar6 = uVar6 - 1;
                        if (uVar14 == 4) {
                          pcVar17 = "mirrored";
LAB_1404f83a4:
                          uVar41 = 8;
LAB_1404f83aa:
                          FUN_140071040(param_2,pcVar17,uVar41);
                        }
                        else {
                          if (uVar14 == 8) {
                            uVar41 = 0x17;
                            pcVar17 = "performed in retrograde";
                            goto LAB_1404f83aa;
                          }
                          if (uVar14 == 0x10) {
                            uVar41 = 0x17;
                            pcVar17 = "performed in succession";
                            goto LAB_1404f83aa;
                          }
                          if (uVar14 == 0x20) {
                            pcVar17 = "shadowed";
                            goto LAB_1404f83a4;
                          }
                        }
                        if ((int)uVar6 < 2) {
                          if (uVar6 != 1) goto LAB_1404f83e0;
                          uVar41 = 5;
                          pcVar17 = " and ";
                        }
                        else {
                          uVar41 = 2;
                          pcVar17 = ", ";
                        }
                        FUN_140071040(param_2,pcVar17,uVar41);
                      }
LAB_1404f83e0:
                      uVar29 = (ulonglong)(iVar35 + 1U);
                    } while ((int)(iVar35 + 1U) < 4);
                    uStack_214 = uVar14;
                    FUN_140071040(param_2," by group members",0x11);
                    plVar39 = plStack_248;
                  }
                }
              }
            }
            FUN_140071040(param_2,".  ",3);
            uVar6 = uStack_254;
          }
        }
      }
LAB_1404f8423:
      iStack_210 = iStack_210 + 1;
      param_1 = lStack_238;
    }
  }
  puVar27 = puStack_e0;
  puVar10 = puStack_e8;
  lVar22 = (longlong)puStack_200 - (longlong)puVar23;
  lVar8 = (longlong)puStack_e0 - (longlong)puStack_e8;
  for (puVar23 = puStack_e8; puVar23 != puVar27; puVar23 = puVar23 + 1) {
    cVar12 = '\x01';
    if (puVar23 < puVar27) {
      cVar12 = -1;
    }
    if (-1 < cVar12) break;
    FUN_140071040(param_2,"[B]",3);
    load_dance_movement_description
              (param_2,*puVar23,lVar8 >> 3 & 0xffffffff,lVar22 >> 3 & 0xffffffff);
  }
  lVar8 = (longlong)puStack_200 - (longlong)puStack_208;
  lVar22 = (longlong)puStack_e0 - (longlong)puVar10;
  for (puVar23 = puStack_208; puVar23 != puStack_200; puVar23 = puVar23 + 1) {
    cVar12 = '\x01';
    if (puVar23 < puStack_200) {
      cVar12 = -1;
    }
    if (-1 < cVar12) break;
    FUN_140071040(param_2,"[B]",3);
    load_dance_movement_description
              (param_2,*puVar23,lVar22 >> 3 & 0xffffffff,lVar8 >> 3 & 0xffffffff);
  }
  FUN_1400681a0(&puStack_208);
  FUN_1400681a0(&puStack_e8);
  FUN_140070e80(auStack_68);
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_288);
  return;
}

