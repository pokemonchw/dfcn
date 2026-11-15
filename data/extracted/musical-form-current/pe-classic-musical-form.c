/* classic PE:6aea11a5:0272d000; musical-form; RVA 0xde8720..0xdef744 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_musical_form(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  short *psVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int *piVar23;
  uint *puVar24;
  longlong *plVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  byte *pbVar28;
  char *pcVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint *puVar35;
  bool bVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  bool bVar40;
  undefined1 auStack_3b8 [32];
  undefined2 uStack_398;
  undefined2 uStack_390;
  bool bStack_388;
  char cStack_387;
  char cStack_386;
  char cStack_385;
  char cStack_384;
  undefined1 auStack_383 [3];
  uint uStack_380;
  uint uStack_37c;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined1 auStack_36e [6];
  undefined8 uStack_368;
  undefined8 *puStack_360;
  uint uStack_358;
  uint uStack_354;
  undefined8 uStack_350;
  longlong *plStack_348;
  longlong *plStack_340;
  int iStack_338;
  longlong *plStack_330;
  undefined1 auStack_328 [8];
  longlong lStack_320;
  uint uStack_318;
  int iStack_314;
  longlong *plStack_310;
  uint *puStack_308;
  int iStack_300;
  ulonglong uStack_2f8;
  longlong lStack_2f0;
  longlong *plStack_2e8;
  undefined8 uStack_2e0;
  longlong *plStack_2d8;
  undefined8 *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  longlong lStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  int iStack_290;
  undefined1 auStack_288 [8];
  longlong lStack_280;
  longlong *plStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [208];
  undefined8 auStack_128 [4];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_3b8;
  lStack_2f0 = param_1;
  uStack_2e0 = param_2;
  load_supplier_0x70c50(auStack_c8);
  FUN_140aaafe0(param_1 + 8,auStack_c8,1);
  load_supplier_0xbb2d0(param_2,auStack_c8);
  load_supplier_0x70b20(param_2," is a ");
  iVar9 = *(int *)(param_1 + 0x118);
  if (iVar9 == 0) {
    pcVar29 = "form of music used for entertainment";
LAB_140de8833:
    load_supplier_0x70b20(param_2,pcVar29);
  }
  else {
    if (iVar9 == 1) {
      pcVar29 = "form of music used to commemorate important events";
      goto LAB_140de8833;
    }
    if (iVar9 == 2) {
      load_supplier_0x70b20(param_2,"devotional form of music");
      if (*(int *)(param_1 + 0x11c) != -1) {
        load_supplier_0x70b20(param_2," directed toward the worship of ");
        load_supplier_0x73640(auStack_1f8);
        uStack_390 = 0;
        uStack_398 = 1;
        FUN_140ba79f0(0x142516038,param_2,*(undefined4 *)(param_1 + 0x11c));
      }
    }
    else if (iVar9 == 3) {
      pcVar29 = "form of music used during marches and military engagements";
      goto LAB_140de8833;
    }
  }
  if (*(int *)(param_1 + 0x80) == -1) {
    if (*(int *)(param_1 + 0x84) != -1) {
      load_supplier_0x73640(auStack_1f8);
      load_supplier_0x70b20(param_2," originally devised by ");
      uStack_390 = 0;
      uStack_398 = 1;
      FUN_140ba79f0(0x142516038,param_2,*(undefined4 *)(param_1 + 0x84));
    }
  }
  else {
    psVar14 = (short *)load_supplier_0x7f0b0(0x1423edb78);
    bVar40 = false;
    if (psVar14 != (short *)0x0) {
      bVar40 = *psVar14 == 8;
    }
    pcVar29 = " which grew out of the performances of ";
    if (!bVar40) {
      pcVar29 = " originating in ";
    }
    load_supplier_0x70b20(param_2,pcVar29);
    FUN_140ba73e0(0x142516038,param_2,*(undefined4 *)(param_1 + 0x80));
  }
  load_supplier_0x70b20(param_2,".  ");
  pcVar29 = 
  "The rules of the form are applied by composers to produce individual pieces of music which can be performed.  "
  ;
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    pcVar29 = "The form guides musicians during improvised performances.  ";
  }
  load_supplier_0x70b20(param_2,pcVar29);
  bVar40 = false;
  lVar22 = param_1 + 0xa0;
  iVar9 = load_supplier_0x70410(lVar22);
  load_supplier_0x70800(lVar22,&uStack_378);
  load_supplier_0x707f0(lVar22,auStack_288);
  puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_378,&bStack_388,auStack_288);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  while (cVar4 != '\0') {
    plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
    if ((*(byte *)(*plVar16 + 4) & 7) == 0) {
      puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_378);
      if (*(int *)*puVar21 != -1) {
        puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_378);
        plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*(int *)*puVar21);
        lVar17 = *plVar16;
        if (lVar17 != 0) {
          if (!bVar40) {
            lVar20 = load_supplier_0x70410(lVar22);
            pcVar29 = "The";
            if (iVar9 != lVar20) {
              pcVar29 = "while the";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            load_supplier_0x70b20(param_2," music is played on ");
            bVar40 = true;
          }
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          if (*(int *)(*plVar16 + 0x10) == 1) {
            load_supplier_0x70b20(param_2,"a");
          }
          else {
            load_supplier_0x70c50(auStack_128);
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
            load_cardinal(*(undefined4 *)(*plVar16 + 0xc),auStack_128);
            load_supplier_0xbb2d0(param_2,auStack_128);
            load_supplier_0x693f0(auStack_128);
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
            lVar20 = *plVar16;
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
            if (*(int *)(*plVar16 + 0xc) < *(int *)(lVar20 + 0x10)) {
              load_supplier_0x70b20(param_2," to ");
              load_supplier_0x70c50(auStack_128);
              plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
              load_cardinal(*(undefined4 *)(*plVar16 + 0x10),auStack_128);
              load_supplier_0xbb2d0(param_2,auStack_128);
              load_supplier_0x693f0(auStack_128);
            }
          }
          load_supplier_0x70b20(param_2," ");
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          lVar20 = lVar17 + 0x88;
          if (*(int *)(*plVar16 + 0x10) < 2) {
            lVar20 = lVar17 + 0x68;
          }
          load_supplier_0xbb2d0(param_2,lVar20);
        }
        if (iVar9 < 3) {
          if (iVar9 != 2) goto LAB_140de8e57;
          pcVar29 = " and ";
        }
        else {
          pcVar29 = ", ";
        }
        load_supplier_0x70b20(param_2,pcVar29);
      }
    }
    else {
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
      if (*(int *)(*plVar16 + 0x10) == 1) {
        lVar17 = load_supplier_0x70410(lVar22);
        pcVar29 = "A";
        if (iVar9 != lVar17) {
          pcVar29 = "a";
        }
        load_supplier_0x70b20(param_2,pcVar29);
      }
      else {
        load_supplier_0x70c50(auStack_108);
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        load_cardinal(*(undefined4 *)(*plVar16 + 0xc),auStack_108);
        lVar17 = load_supplier_0x70410(lVar22);
        if (iVar9 == lVar17) {
          FUN_140544330(auStack_108);
        }
        load_supplier_0xbb2d0(param_2,auStack_108);
        load_supplier_0x693f0(auStack_108);
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        lVar17 = *plVar16;
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if (*(int *)(*plVar16 + 0xc) < *(int *)(lVar17 + 0x10)) {
          load_supplier_0x70b20(param_2," to ");
          load_supplier_0x70c50(auStack_128);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          load_cardinal(*(undefined4 *)(*plVar16 + 0x10),auStack_128);
          load_supplier_0xbb2d0(param_2,auStack_128);
          load_supplier_0x693f0(auStack_128);
        }
      }
      load_supplier_0x70b20(param_2," ");
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
      if ((*(byte *)(*plVar16 + 4) & 1) == 0) {
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if ((*(byte *)(*plVar16 + 4) & 2) != 0) {
          pcVar29 = "speaker";
          goto LAB_140de8b01;
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if ((*(byte *)(*plVar16 + 4) & 4) != 0) {
          pcVar29 = "chanter";
          goto LAB_140de8b01;
        }
      }
      else {
        pcVar29 = "singer";
LAB_140de8b01:
        load_supplier_0x70b20(param_2,pcVar29);
      }
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
      if (1 < *(int *)(*plVar16 + 0x10)) {
        load_supplier_0x70b20(param_2,"s");
      }
      load_supplier_0x70b20(param_2," ");
      if (*(int *)(param_1 + 0xf8) == -1) {
        if (*(int *)(param_1 + 0xf4) == -1) {
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          pcVar29 = "recite";
          if (*(int *)(*plVar16 + 0x10) < 2) {
            pcVar29 = "recites";
          }
          load_supplier_0x70b20(param_2,pcVar29);
          load_supplier_0x70b20(param_2," nonsensical words and sounds");
        }
        else {
          lVar17 = FUN_140073b30(0x142504248);
          if (lVar17 != 0) {
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
            pcVar29 = "recite";
            if (*(int *)(*plVar16 + 0x10) < 2) {
              pcVar29 = "recites";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            if ((*(byte *)(lVar17 + 0x8c) & 2) != 0) {
              load_supplier_0x70b20(param_2," a composition of");
            }
            load_supplier_0x70b20(param_2," ");
            load_supplier_0x70c50(auStack_128);
            FUN_140aaafe0(lVar17 + 8,auStack_128,1);
            load_supplier_0xbb2d0(param_2,auStack_128);
            load_supplier_0x693f0(auStack_128);
          }
        }
      }
      else {
        lVar17 = FUN_140073b30(0x142504038);
        if (lVar17 != 0) {
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          pcVar29 = "recite";
          if (*(int *)(*plVar16 + 0x10) < 2) {
            pcVar29 = "recites";
          }
          load_supplier_0x70b20(param_2,pcVar29);
          load_supplier_0x70b20(param_2," the words of ");
          load_supplier_0xbb2d0(param_2,lVar17 + 8);
        }
      }
      if (1 < iVar9) {
        load_supplier_0x70b20(param_2," ");
      }
    }
LAB_140de8e57:
    load_supplier_0x703c0(&uStack_378);
    iVar9 = iVar9 + -1;
    puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_378,&bStack_388,auStack_288);
    cVar4 = load_supplier_0x66d70(*puVar15,0);
  }
  load_supplier_0x70b20(param_2,".  ");
  bVar40 = false;
  bVar1 = false;
  bVar2 = false;
  bVar36 = false;
  param_1 = param_1 + 0x88;
  load_supplier_0x70800(param_1,&puStack_360);
  load_supplier_0x707f0(param_1,&plStack_330);
  puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,&cStack_384,&plStack_330);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  if (cVar4 != '\0') {
    do {
      plVar16 = (longlong *)load_supplier_0x703d0(&puStack_360);
      load_supplier_0x70800(*plVar16 + 0x48,&lStack_320);
      plVar16 = (longlong *)load_supplier_0x703d0(&puStack_360);
      load_supplier_0x707f0(*plVar16 + 0x48,&plStack_340);
      puVar15 = (undefined1 *)load_supplier_0x703e0(&lStack_320,&bStack_388,&plStack_340);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
      while (cVar4 != '\0') {
        piVar18 = (int *)load_supplier_0x703d0(&lStack_320);
        iVar9 = *piVar18;
        if (iVar9 == 0) {
          bVar40 = true;
        }
        else if (iVar9 == 1) {
          bVar1 = true;
        }
        else if (iVar9 == 2) {
          bVar2 = true;
        }
        else if (iVar9 == 3) {
          bVar36 = true;
        }
        load_supplier_0x70910(&lStack_320);
        puVar15 = (undefined1 *)load_supplier_0x703e0(&lStack_320,&bStack_388,&plStack_340);
        cVar4 = load_supplier_0x66d70(*puVar15,0);
      }
      load_supplier_0x703c0(&puStack_360);
      puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,&cStack_384,&plStack_330);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
    } while (cVar4 != '\0');
    if (((bVar40) || (bVar36)) && (uVar19 = load_supplier_0x70410(lVar22), 1 < uVar19)) {
      if (bVar40) {
        if (bVar36) {
          load_supplier_0x70b20(param_2,"The music");
          if (bVar1) {
            pcVar29 = "al voices join in melody and counterpoint, harmony and rhythm";
            if (!bVar2) {
              pcVar29 = "al voices bring melody, counterpoint and rhythm";
            }
          }
          else {
            pcVar29 = "al voices cover melody, harmony and rhythm";
            if (!bVar2) {
              pcVar29 = " is melody and rhythm without harmony";
            }
          }
        }
        else {
          load_supplier_0x70b20(param_2,"The musical voices ");
          if (bVar1) {
            pcVar29 = "join in melody, counterpoint and harmony";
            if (!bVar2) {
              pcVar29 = "bring melody and counterpoint";
            }
          }
          else {
            pcVar29 = "bring melody with harmony";
            if (!bVar2) {
              pcVar29 = "are joined in melody";
            }
          }
        }
      }
      else {
        pcVar29 = "The musical voices are purely rhythmic";
      }
      load_supplier_0x70b20(param_2,pcVar29);
      load_supplier_0x70b20(param_2,".  ");
    }
  }
  lVar22 = lStack_2f0;
  if (((*(int *)(lStack_2f0 + 0xe8) != -1) || (*(int *)(lStack_2f0 + 0xec) != -1)) ||
     (*(int *)(lStack_2f0 + 0xf0) != -1)) {
    load_supplier_0x70b20(param_2,"The entire performance ");
    if (*(int *)(lVar22 + 0xf0) != -1) {
      load_supplier_0x70b20(param_2,"should ");
      uVar10 = *(int *)(lVar22 + 0xf0) - 0x22;
      if (uVar10 < 0x27) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar10) {
        case 0:
          pcVar29 = "stress the rhythm";
          break;
        case 1:
          pcVar29 = "be stately";
          break;
        case 2:
          pcVar29 = "be bright";
          break;
        case 3:
          pcVar29 = "be lively";
          break;
        case 4:
          pcVar29 = "be made with skill";
          break;
        case 5:
          pcVar29 = "be vigorous";
          break;
        case 6:
          pcVar29 = "be spirited";
          break;
        case 7:
          pcVar29 = "be delicate";
          break;
        default:
          pcVar29 = "be fiery";
          break;
        case 9:
          pcVar29 = "bring a sense of motion";
          break;
        case 0xb:
          pcVar29 = "be made with feeling";
          break;
        case 0xc:
          pcVar29 = "feel agitated";
          break;
        case 0xd:
          pcVar29 = "be passionate";
          break;
        case 0xe:
          pcVar29 = "sparkle";
          break;
        case 0xf:
          pcVar29 = "be broad";
          break;
        case 0x10:
          pcVar29 = "be made sweetly";
          break;
        case 0x11:
          pcVar29 = "be strong";
          break;
        case 0x12:
          pcVar29 = "be energetic";
          break;
        case 0x13:
          pcVar29 = "be forceful";
          break;
        case 0x14:
          pcVar29 = "feel heroic";
          break;
        case 0x15:
          pcVar29 = "be made expressively";
          break;
        case 0x16:
          pcVar29 = "feel furious";
          break;
        case 0x17:
          pcVar29 = "be joyful";
          break;
        case 0x18:
          pcVar29 = "be grand";
          break;
        case 0x19:
          pcVar29 = "be merry";
          break;
        case 0x1a:
          pcVar29 = "be graceful";
          break;
        case 0x1b:
          pcVar29 = "build as it proceeds";
          break;
        case 0x1c:
          pcVar29 = "evoke tears";
          break;
        case 0x1d:
          pcVar29 = "be melancholic";
          break;
        case 0x1e:
          pcVar29 = "feel mournful";
          break;
        case 0x1f:
          pcVar29 = "be made with a light touch";
          break;
        case 0x20:
          pcVar29 = "feel heavy";
          break;
        case 0x21:
          pcVar29 = "feel mysterious";
          break;
        case 0x22:
          pcVar29 = "be jumpy";
          break;
        case 0x23:
          pcVar29 = "feel playful";
          break;
        case 0x24:
          pcVar29 = "feel tender";
          break;
        case 0x25:
          pcVar29 = "feel calm";
          break;
        case 0x26:
          pcVar29 = "be triumphant";
        }
        load_supplier_0x70b20(param_2,pcVar29);
      }
    }
    if (*(int *)(lVar22 + 0xe8) != -1) {
      if (*(int *)(lVar22 + 0xf0) != -1) {
        load_supplier_0x70b20(param_2," and ");
      }
      if (*(uint *)(lVar22 + 0xe8) < 0x22) {
                    /* WARNING: Switch is manually overridden */
        switch(*(uint *)(lVar22 + 0xe8)) {
        case 0:
          pcVar29 = "is at a free tempo";
          break;
        case 1:
          pcVar29 = "is very slow";
          break;
        case 2:
          pcVar29 = "is slow";
          break;
        case 3:
          pcVar29 = "is at a walking pace";
          break;
        case 4:
          pcVar29 = "is moderately paced";
          break;
        case 5:
          pcVar29 = "is moderately fast";
          break;
        case 6:
          pcVar29 = "is fast";
          break;
        case 7:
          pcVar29 = "is very fast";
          break;
        case 8:
          pcVar29 = "is extremely fast";
          break;
        default:
          goto override_jmp_140de92fc_case_9;
        case 0xf:
          pcVar29 = "accelerates as it proceeds";
          break;
        case 0x10:
          pcVar29 = "slows and broadens";
          break;
        case 0x11:
          pcVar29 = "is consistently slowing";
          break;
        case 0x12:
          pcVar29 = "is at a hurried pace";
          break;
        case 0x13:
          pcVar29 = "gradually slows as it comes to an end";
          break;
        case 0x1f:
          pcVar29 = "slows down and dies away as it draws to a close";
          break;
        case 0x20:
          pcVar29 = "becomes calmer as the end is approached";
          break;
        case 0x21:
          pcVar29 = "becomes frenzied as it proceeds";
        }
        load_supplier_0x70b20(param_2,pcVar29);
      }
    }
override_jmp_140de92fc_case_9:
    if (*(int *)(lVar22 + 0xec) != -1) {
      if ((*(int *)(lVar22 + 0xe8) != -1) || (pcVar29 = "is to", *(int *)(lVar22 + 0xf0) != -1)) {
        pcVar29 = ", and it is to";
      }
      load_supplier_0x70b20(param_2,pcVar29);
      load_supplier_0x70b20(param_2," ");
      uVar10 = *(int *)(lVar22 + 0xec) - 0x14;
      if (uVar10 < 0xb) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar10) {
        case 0:
          pcVar29 = "be in whispered undertones";
          break;
        case 1:
          pcVar29 = "be very soft";
          break;
        case 2:
          pcVar29 = "be soft";
          break;
        case 3:
          pcVar29 = "be moderately soft";
          break;
        case 4:
          pcVar29 = "be moderately loud";
          break;
        case 5:
          pcVar29 = "be loud";
          break;
        case 6:
          pcVar29 = "be very loud";
          break;
        case 7:
          pcVar29 = "become louder and louder";
          break;
        case 8:
          pcVar29 = "become softer and softer";
          break;
        case 9:
          pcVar29 = "fade into silence";
          break;
        case 10:
          pcVar29 = "start loud then be immediately soft";
        }
        load_supplier_0x70b20(param_2,pcVar29);
      }
    }
    load_supplier_0x70b20(param_2,".  ");
  }
  iVar37 = -1;
  iVar12 = -1;
  iVar9 = -1;
  iStack_338 = -1;
  iVar11 = -1;
  iStack_290 = -1;
  load_supplier_0x70800(param_1,&uStack_350);
  load_supplier_0x707f0(param_1,&plStack_330);
  puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&cStack_384,&plStack_330);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  if (cVar4 != '\0') {
    do {
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
      load_supplier_0x70800(*plVar16 + 0x48,&plStack_348);
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
      load_supplier_0x707f0(*plVar16 + 0x48,&plStack_340);
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
      load_supplier_0x70800(*plVar16 + 0x60,&puStack_360);
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
      load_supplier_0x707f0(*plVar16 + 0x60,&puStack_2d0);
      puVar15 = (undefined1 *)load_supplier_0x703e0(&plStack_348,&bStack_388,&plStack_340);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
      while (cVar4 != '\0') {
        piVar18 = (int *)load_supplier_0x703d0(&plStack_348);
        if ((*piVar18 == 0) &&
           (piVar18 = (int *)load_supplier_0x703d0(&puStack_360), iVar9 != *piVar18)) {
          if (iVar9 == -1) {
            piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
            iVar9 = *piVar18;
            iVar12 = iVar9;
          }
          else {
            iVar12 = -2;
            iVar9 = -2;
          }
        }
        piVar18 = (int *)load_supplier_0x703d0(&plStack_348);
        if ((*piVar18 == 1) &&
           (piVar18 = (int *)load_supplier_0x703d0(&puStack_360), iVar37 != *piVar18)) {
          if (iVar37 == -1) {
            piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
            iVar37 = *piVar18;
            iVar11 = iVar37;
          }
          else {
            iVar11 = -2;
            iVar37 = -2;
          }
        }
        load_supplier_0x70910(&plStack_348);
        load_supplier_0x70910(&puStack_360);
        puVar15 = (undefined1 *)load_supplier_0x703e0(&plStack_348,&bStack_388,&plStack_340);
        cVar4 = load_supplier_0x66d70(*puVar15,0);
      }
      load_supplier_0x703c0(&uStack_350);
      puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&cStack_384,&plStack_330);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
    } while (cVar4 != '\0');
    if (iVar9 == -2) {
      iVar12 = -1;
    }
    if (iVar37 == -2) {
      iVar11 = -1;
    }
    iStack_338 = iVar12;
    iStack_290 = iVar11;
    if (iVar12 == -1) {
      if (iVar11 == -1) goto LAB_140de975c;
      load_supplier_0x70b20(param_2,"The counterpoint melody has ");
      bVar40 = iVar11 == 0;
    }
    else {
      if (iVar11 == -1) {
        pcVar29 = "The melody has ";
      }
      else {
        if (iVar12 != iVar11) {
          load_supplier_0x70b20(param_2,"The melody has ");
          if (iVar12 == 0) {
            pcVar29 = "short phrases";
LAB_140de96f5:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          else {
            if (iVar12 == 1) {
              pcVar29 = "mid-length phrases";
              goto LAB_140de96f5;
            }
            if (iVar12 == 2) {
              pcVar29 = "long phrases";
              goto LAB_140de96f5;
            }
            if (iVar12 == 3) {
              pcVar29 = "phrases of varied length";
              goto LAB_140de96f5;
            }
          }
          load_supplier_0x70b20(param_2,", while the counterpoint has ");
          bVar40 = iVar11 == 0;
          goto LAB_140de9675;
        }
        pcVar29 = "The melody and counterpoint both have ";
      }
      load_supplier_0x70b20(param_2,pcVar29);
      bVar40 = iVar12 == 0;
      iVar11 = iVar12;
    }
LAB_140de9675:
    if (bVar40) {
      pcVar29 = "short phrases";
LAB_140de9745:
      load_supplier_0x70b20(param_2,pcVar29);
    }
    else {
      if (iVar11 == 1) {
        pcVar29 = "mid-length phrases";
        goto LAB_140de9745;
      }
      if (iVar11 == 2) {
        pcVar29 = "long phrases";
        goto LAB_140de9745;
      }
      if (iVar11 == 3) {
        pcVar29 = "phrases of varied length";
        goto LAB_140de9745;
      }
    }
    load_supplier_0x70b20(param_2," throughout the form.  ");
  }
LAB_140de975c:
  iVar9 = *(int *)(lVar22 + 0x114);
  if (iVar9 == 0) {
    pcVar29 = "Only one pitch is ever played at a time.  ";
LAB_140de97a7:
    load_supplier_0x70b20(param_2,pcVar29);
  }
  else {
    if (iVar9 == 1) {
      pcVar29 = "Never more than an interval sounds at once.  ";
      goto LAB_140de97a7;
    }
    if (iVar9 == 2) {
      pcVar29 = "Chords, seldom-used, are sparse -- intervals and single pitches are favored.  ";
      goto LAB_140de97a7;
    }
    if (iVar9 == 3) {
      pcVar29 = "Pitches are densely packed in clusters as music moves from chord to chord.  ";
      goto LAB_140de97a7;
    }
    if (iVar9 == 4) {
      pcVar29 = "The music is broadly layered with chords spanning the range.  ";
      goto LAB_140de97a7;
    }
  }
  if ((*(byte *)(lVar22 + 0x120) & 2) != 0) {
    load_supplier_0x70b20(param_2,"The music repeats for as long as necessary.  ");
  }
  bVar1 = false;
  bVar40 = false;
  bVar36 = false;
  load_supplier_0x70800(param_1,auStack_298);
  load_supplier_0x707f0(param_1,auStack_270);
  puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_298,&bStack_388,auStack_270);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  while (cVar4 != '\0') {
    plVar16 = (longlong *)load_supplier_0x703d0(auStack_298);
    if (*(int *)(*plVar16 + 0x1c) != -1) {
      bVar40 = true;
    }
    plVar16 = (longlong *)load_supplier_0x703d0(auStack_298);
    if (*(int *)(*plVar16 + 0x24) != -1) {
      bVar36 = true;
    }
    load_supplier_0x703c0(auStack_298);
    puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_298,&bStack_388,auStack_270);
    cVar4 = load_supplier_0x66d70(*puVar15,0);
  }
  if (*(int *)(lVar22 + 0xfc) == -1) {
    if (!bVar40) {
      load_supplier_0x70b20(param_2,"It is performed ");
      pcVar29 = "without preference for a scale";
LAB_140de9917:
      bVar1 = true;
      load_supplier_0x70b20(param_2,pcVar29);
    }
  }
  else {
    lVar17 = FUN_140073b30(0x1425042d8);
    if ((lVar17 != 0) && (-1 < *(int *)(lVar22 + 0x100))) {
      uVar19 = load_supplier_0x70410(lVar17 + 0x90);
      if ((ulonglong)(longlong)*(int *)(lVar22 + 0x100) < uVar19) {
        load_supplier_0x70b20(param_2,"It is performed ");
        load_supplier_0x70b20(param_2,"using the ");
        plVar16 = (longlong *)
                  load_supplier_0x707e0(lVar17 + 0x90,(longlong)*(int *)(lVar22 + 0x100));
        load_supplier_0xbb2d0(param_2,*plVar16 + 8);
        pcVar29 = " scale";
        goto LAB_140de9917;
      }
    }
  }
  if ((*(int *)(lVar22 + 0x104) == -1) && (bVar36)) goto LAB_140de9a32;
  if (!bVar1) {
    load_supplier_0x70b20(param_2,"It is performed ");
    bVar1 = true;
  }
  if ((*(int *)(lVar22 + 0xfc) != -1) || (pcVar29 = "in ", !bVar40)) {
    pcVar29 = " and in ";
  }
  load_supplier_0x70b20(param_2,pcVar29);
  if (*(int *)(lVar22 + 0x104) == -1) {
    if (bVar36) goto LAB_140de9a32;
    pcVar29 = "free rhythm";
  }
  else {
    load_supplier_0x70b20(param_2,"the ");
    lVar17 = FUN_140073b30(0x142504308,*(undefined4 *)(lVar22 + 0x104));
    if (lVar17 != 0) {
      if (*(int *)(lVar22 + 0x108) < 0) {
LAB_140de99e9:
        if (-1 < *(int *)(lVar22 + 0x10c)) {
          iVar9 = *(int *)(lVar22 + 0x10c);
          uVar19 = load_supplier_0x70410(lVar17 + 8);
          if ((ulonglong)(longlong)iVar9 < uVar19) {
            puVar21 = (undefined8 *)load_supplier_0x707e0(lVar17 + 8,(longlong)iVar9);
            goto LAB_140de9a18;
          }
        }
      }
      else {
        iVar9 = *(int *)(lVar22 + 0x108);
        uVar19 = load_supplier_0x70410(lVar17 + 0x20);
        if (uVar19 <= (ulonglong)(longlong)iVar9) goto LAB_140de99e9;
        puVar21 = (undefined8 *)load_supplier_0x707e0(lVar17 + 0x20,(longlong)iVar9);
LAB_140de9a18:
        load_supplier_0xbb2d0(param_2,*puVar21);
      }
    }
    pcVar29 = " rhythm";
  }
  load_supplier_0x70b20(param_2,pcVar29);
LAB_140de9a32:
  if (bVar1) {
    load_supplier_0x70b20(param_2,".  ");
  }
  if (*(int *)(lVar22 + 0x110) != 0) {
    pcVar29 = "Throughout, when possible, composers and performers are to ";
    if ((*(byte *)(lVar22 + 0x120) & 1) == 0) {
      pcVar29 = "Throughout, when possible, performers are to ";
    }
    load_supplier_0x70b20(param_2,pcVar29);
    param_2 = uStack_2e0;
    iVar9 = 0;
    uVar33 = 0;
    uVar10 = (uint)uStack_368;
    do {
      if (uVar33 < 0x10) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar33) {
        case 0:
          uVar10 = 1;
          break;
        case 1:
          uVar10 = 2;
          break;
        case 2:
          uVar10 = 4;
          break;
        case 3:
          uVar10 = 8;
          break;
        case 4:
          uVar10 = 0x10;
          break;
        case 5:
          uVar10 = 0x80;
          break;
        case 6:
          uVar10 = 0x100;
          break;
        case 7:
          uVar10 = 0x200;
          break;
        case 8:
          uVar10 = 0x400;
          break;
        case 9:
          uVar10 = 0x800;
          break;
        case 10:
          uVar10 = 0x1000;
          break;
        case 0xb:
          uVar10 = 0x2000;
          break;
        case 0xc:
          uVar10 = 0x4000;
          break;
        case 0xd:
          uVar10 = 0x8000;
          break;
        case 0xe:
          uVar10 = 0x20;
          break;
        case 0xf:
          uVar10 = 0x40;
        }
      }
      if ((*(uint *)(lVar22 + 0x110) & uVar10) != 0) {
        iVar9 = iVar9 + 1;
      }
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < 0x10);
    uVar33 = 0;
    uVar10 = (uint)uStack_368;
    do {
      if (uVar33 < 0x10) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar33) {
        case 0:
          uVar10 = 1;
          break;
        case 1:
          uVar10 = 2;
          break;
        case 2:
          uVar10 = 4;
          break;
        case 3:
          uVar10 = 8;
          break;
        case 4:
          uVar10 = 0x10;
          break;
        case 5:
          uVar10 = 0x80;
          break;
        case 6:
          uVar10 = 0x100;
          break;
        case 7:
          uVar10 = 0x200;
          break;
        case 8:
          uVar10 = 0x400;
          break;
        case 9:
          uVar10 = 0x800;
          break;
        case 10:
          uVar10 = 0x1000;
          break;
        case 0xb:
          uVar10 = 0x2000;
          break;
        case 0xc:
          uVar10 = 0x4000;
          break;
        case 0xd:
          uVar10 = 0x8000;
          break;
        case 0xe:
          uVar10 = 0x20;
          break;
        case 0xf:
          uVar10 = 0x40;
        }
      }
      if ((*(uint *)(lVar22 + 0x110) & uVar10) != 0) {
        if (uVar10 < 0x101) {
          if (uVar10 == 0x100) {
            pcVar29 = "syncopate";
            goto LAB_140de9ced;
          }
          if (uVar10 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140def938)[uVar10 - 1]) {
            case 0:
              pcVar29 = "glide from note to note";
              break;
            case 1:
              pcVar29 = "use grace notes";
              break;
            case 2:
              pcVar29 = "use mordents";
              break;
            case 3:
              pcVar29 = "make trills";
              break;
            case 4:
              pcVar29 = "play rapid runs";
              break;
            case 5:
              pcVar29 = "spread syllables over many notes";
              break;
            case 6:
              pcVar29 = "match notes and syllables";
              break;
            case 7:
              pcVar29 = "locally improvise";
              break;
            case 8:
              goto override_jmp_140de9c0b_case_2;
            }
            goto LAB_140de9ced;
          }
        }
        else {
          if (uVar10 < 0x1001) {
            if (uVar10 == 0x1000) {
              pcVar29 = "play arpeggios";
            }
            else if (uVar10 == 0x200) {
              pcVar29 = "add fills";
            }
            else if (uVar10 == 0x400) {
              pcVar29 = "alternate tension and repose";
            }
            else {
              if (uVar10 != 0x800) goto override_jmp_140de9c0b_case_2;
              pcVar29 = "modulate frequently";
            }
          }
          else if (uVar10 == 0x2000) {
            pcVar29 = "play staccato";
          }
          else if (uVar10 == 0x4000) {
            pcVar29 = "play legato";
          }
          else {
            if (uVar10 != 0x8000) goto override_jmp_140de9c0b_case_2;
            pcVar29 = "freely adjust the beats";
          }
LAB_140de9ced:
          load_supplier_0x70b20(param_2,pcVar29);
        }
override_jmp_140de9c0b_case_2:
        if (iVar9 < 3) {
          if (iVar9 == 2) {
            pcVar29 = " and ";
            goto LAB_140de9d0f;
          }
        }
        else {
          pcVar29 = ", ";
LAB_140de9d0f:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        iVar9 = iVar9 + -1;
      }
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < 0x10);
    load_supplier_0x70b20(param_2,".  ");
  }
  lVar17 = lVar22 + 0xb8;
  lVar20 = load_supplier_0x70410(lVar17);
  if (lVar20 != 0) {
    load_supplier_0x70b20(param_2,"From beginning to end, when improvising");
    if ((*(byte *)(lVar22 + 0x120) & 1) != 0) {
      load_supplier_0x70b20(param_2," or composing");
    }
    load_supplier_0x70b20(param_2,", artists should ");
    plVar16 = (longlong *)load_supplier_0x70410(lVar17);
    plStack_330 = plVar16;
    load_supplier_0x70800(lVar17,&uStack_368);
    load_supplier_0x707f0(lVar17,&puStack_308);
    puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_368,&cStack_384,&puStack_308);
    cVar4 = load_supplier_0x66d70(*puVar15,0);
    if (cVar4 != '\0') {
      uVar10 = (uint)uStack_368;
      uVar33 = (uint)uStack_368;
      do {
        iVar37 = (int)plVar16;
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        iVar9 = *(int *)(*plVar16 + 4);
        if (iVar9 == 0) {
          pcVar29 = "always";
LAB_140de9e17:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        else {
          if (iVar9 == 1) {
            pcVar29 = "often";
            goto LAB_140de9e17;
          }
          if (iVar9 == 2) {
            pcVar29 = "sometimes";
            goto LAB_140de9e17;
          }
        }
        load_supplier_0x70b20(param_2," include a ");
        puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_368);
        iVar9 = *(int *)*puVar21;
        if (iVar9 == 0) {
          pcVar29 = "rising";
LAB_140de9e72:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        else {
          if (iVar9 == 1) {
            pcVar29 = "falling";
            goto LAB_140de9e72;
          }
          if (iVar9 == 2) {
            pcVar29 = "rising-falling";
            goto LAB_140de9e72;
          }
          if (iVar9 == 3) {
            pcVar29 = "falling-rising";
            goto LAB_140de9e72;
          }
        }
        load_supplier_0x70b20(param_2," melody pattern");
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        lVar22 = load_supplier_0x70410(*plVar16 + 8);
        if (lVar22 != 0) {
          load_supplier_0x70b20(param_2," with ");
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          iVar9 = load_supplier_0x70410(*plVar16 + 8);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x70800(*plVar16 + 8,&uStack_350);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x707f0(*plVar16 + 8,&plStack_340);
          puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&bStack_388,&plStack_340);
          cVar4 = load_supplier_0x66d70(*puVar15,0);
          while (cVar4 != '\0') {
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
            if ((*(byte *)(*plVar16 + 4) & 2) != 0) {
              load_supplier_0x70b20(param_2,"flattened");
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
            if ((*(byte *)(*plVar16 + 4) & 4) != 0) {
              load_supplier_0x70b20(param_2,"sharpened");
            }
            load_supplier_0x70b20(param_2," ");
            load_supplier_0x70c50(auStack_108);
            puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_350);
            load_ordinal(*(undefined4 *)*puVar21,auStack_108,0);
            load_supplier_0x543d60(auStack_108);
            load_supplier_0xbb2d0(param_2,auStack_108);
            load_supplier_0x70b20(param_2," degree");
            puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_368);
            if ((*(int *)*puVar21 == 2) ||
               (puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_368), *(int *)*puVar21 == 3))
            {
              plVar16 = (longlong *)load_supplier_0x703d0(&uStack_350);
              pcVar29 = " on the rise";
              if ((*(byte *)(*plVar16 + 4) & 1) == 0) {
                pcVar29 = " on the fall";
              }
              load_supplier_0x70b20(param_2,pcVar29);
            }
            if (iVar9 < 3) {
              if (iVar9 == 2) {
                pcVar29 = " and ";
                goto LAB_140dea03f;
              }
            }
            else {
              pcVar29 = ", ";
LAB_140dea03f:
              load_supplier_0x70b20(param_2,pcVar29);
            }
            load_supplier_0x693f0(auStack_108);
            load_supplier_0x703c0(&uStack_350);
            iVar9 = iVar9 + -1;
            puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&bStack_388);
            cVar4 = load_supplier_0x66d70(*puVar15,0);
          }
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        if (*(int *)(*plVar16 + 0x20) != 0) {
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          lVar22 = load_supplier_0x70410(*plVar16 + 8);
          pcVar29 = " as well as ";
          if (lVar22 == 0) {
            pcVar29 = " with ";
          }
          load_supplier_0x70b20(param_2,pcVar29);
          iVar9 = 0;
          uVar30 = 0;
          do {
            if (uVar30 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar30) {
              case 0:
                uVar10 = 1;
                break;
              case 1:
                uVar10 = 2;
                break;
              case 2:
                uVar10 = 4;
                break;
              case 3:
                uVar10 = 8;
                break;
              case 4:
                uVar10 = 0x10;
                break;
              case 5:
                uVar10 = 0x1000;
                break;
              case 6:
                uVar10 = 0x2000;
                break;
              case 7:
                uVar10 = 0x4000;
              }
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
            param_2 = uStack_2e0;
            if ((*(uint *)(*plVar16 + 0x20) & uVar10) != 0) {
              iVar9 = iVar9 + 1;
            }
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < 8);
          uVar30 = 0;
          do {
            if (uVar30 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar30) {
              case 0:
                uVar33 = 1;
                break;
              case 1:
                uVar33 = 2;
                break;
              case 2:
                uVar33 = 4;
                break;
              case 3:
                uVar33 = 8;
                break;
              case 4:
                uVar33 = 0x10;
                break;
              case 5:
                uVar33 = 0x1000;
                break;
              case 6:
                uVar33 = 0x2000;
                break;
              case 7:
                uVar33 = 0x4000;
              }
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
            if ((*(uint *)(*plVar16 + 0x20) & uVar33) != 0) {
              if (uVar33 < 0x11) {
                if (uVar33 == 0x10) {
                  pcVar29 = "rapid runs";
                }
                else if (uVar33 == 1) {
                  pcVar29 = "glides";
                }
                else if (uVar33 == 2) {
                  pcVar29 = "grace notes";
                }
                else if (uVar33 == 4) {
                  pcVar29 = "mordents";
                }
                else {
                  if (uVar33 != 8) goto LAB_140dea246;
                  pcVar29 = "trills";
                }
LAB_140dea23e:
                load_supplier_0x70b20(param_2,pcVar29);
              }
              else {
                if (uVar33 == 0x1000) {
                  pcVar29 = "arpeggios";
                  goto LAB_140dea23e;
                }
                if (uVar33 == 0x2000) {
                  pcVar29 = "staccato";
                  goto LAB_140dea23e;
                }
                if (uVar33 == 0x4000) {
                  pcVar29 = "legato";
                  goto LAB_140dea23e;
                }
              }
LAB_140dea246:
              if (iVar9 < 3) {
                if (iVar9 == 2) {
                  pcVar29 = " and ";
                  goto LAB_140dea262;
                }
              }
              else {
                pcVar29 = ", ";
LAB_140dea262:
                load_supplier_0x70b20(param_2,pcVar29);
              }
              iVar9 = iVar9 + -1;
            }
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < 8);
          iVar37 = (int)plStack_330;
        }
        if (iVar37 < 3) {
          if (iVar37 == 2) {
            pcVar29 = " and ";
            goto LAB_140dea29b;
          }
        }
        else {
          pcVar29 = ", ";
LAB_140dea29b:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        load_supplier_0x703c0(&uStack_368);
        plVar16 = (longlong *)(ulonglong)(iVar37 - 1);
        plStack_330 = plVar16;
        puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_368,&cStack_384,&puStack_308);
        cVar4 = load_supplier_0x66d70(*puVar15,0);
      } while (cVar4 != '\0');
    }
    load_supplier_0x70b20(param_2,".  ");
    lVar22 = lStack_2f0;
  }
  cStack_384 = '\x01';
  uStack_318 = CONCAT31(uStack_318._1_3_,1);
  uVar10 = 0;
  uStack_354 = 0;
  puVar21 = (undefined8 *)load_supplier_0x70800(lVar22 + 0xa0,&puStack_2d0);
  uStack_378 = *puVar21;
  puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_378,auStack_383,auStack_288);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  if (cVar4 != '\0') {
    plStack_330 = (longlong *)(lVar22 + 0x88);
    do {
      plVar16 = plStack_330;
      bVar40 = true;
      cStack_385 = '\x01';
      iVar9 = -1;
      load_supplier_0x70800(plStack_330,&uStack_368);
      load_supplier_0x707f0(plVar16,&uStack_350);
      puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_368,&cStack_386,&uStack_350);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
      while (cVar4 != '\0') {
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        load_supplier_0x70800(*plVar16 + 0x30,&puStack_360);
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        load_supplier_0x707f0(*plVar16 + 0x30,auStack_2b8);
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        load_supplier_0x70800(*plVar16 + 0x48,&puStack_308);
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
        load_supplier_0x707f0(*plVar16 + 0x48,&puStack_2d0);
        puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,&bStack_388,auStack_2b8);
        cVar4 = load_supplier_0x66d70(*puVar15,0);
        while (cVar4 != '\0') {
          piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
          if (*piVar18 == uVar10) {
            piVar18 = (int *)load_supplier_0x703d0(&puStack_308);
            if (iVar9 == -1) {
              iVar9 = *piVar18;
            }
            else if (iVar9 != *piVar18) goto LAB_140dea4e1;
            break;
          }
          load_supplier_0x70910(&puStack_360);
          load_supplier_0x70910(&puStack_308);
          puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,&bStack_388,auStack_2b8);
          cVar4 = load_supplier_0x66d70(*puVar15,0);
        }
        puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,auStack_36e,auStack_2b8);
        cVar4 = load_supplier_0x73420(*puVar15,0);
        if (cVar4 != '\0') {
LAB_140dea4e1:
          bVar40 = false;
          cStack_385 = '\0';
          cStack_384 = '\0';
          break;
        }
        load_supplier_0x703c0(&uStack_368);
        puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_368,&cStack_386,&uStack_350);
        cVar4 = load_supplier_0x66d70(*puVar15,0);
      }
      cVar4 = '\x01';
      cStack_387 = '\x01';
      uVar33 = -2;
      iVar37 = -2;
      uStack_37c = -2;
      uStack_358 = -2;
      puVar21 = (undefined8 *)load_supplier_0x70800(plStack_330,&plStack_278);
      uStack_368 = *puVar21;
      puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_368,&uStack_36f,&uStack_350);
      cVar5 = load_supplier_0x66d70(*puVar15,0);
      if (cVar5 != '\0') {
        do {
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x70800(*plVar16 + 0x30,&lStack_320);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x707f0(*plVar16 + 0x30,&plStack_340);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x70800(*plVar16 + 0x78,&uStack_2c0);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x707f0(*plVar16 + 0x78,&plStack_2d8);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x70800(*plVar16 + 0x90,auStack_2c8);
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_368);
          load_supplier_0x707f0(*plVar16 + 0x90,&lStack_2b0);
          puVar15 = (undefined1 *)load_supplier_0x703e0(&lStack_320,&uStack_370,&plStack_340);
          cVar5 = load_supplier_0x66d70(*puVar15,0);
          while (cVar5 != '\0') {
            piVar18 = (int *)load_supplier_0x703d0(&lStack_320);
            if (*piVar18 == uVar10) {
              piVar18 = (int *)load_supplier_0x703d0(&uStack_2c0);
              if (uVar33 == -2) {
                uVar33 = *piVar18;
                uStack_37c = uVar33;
                piVar18 = (int *)load_supplier_0x703d0(auStack_2c8);
                iVar37 = *piVar18;
                uStack_358 = iVar37;
              }
              else if ((uVar33 != *piVar18) ||
                      (piVar18 = (int *)load_supplier_0x703d0(auStack_2c8), iVar37 != *piVar18)) {
                cVar4 = '\0';
                break;
              }
            }
            if (cVar4 == '\0') break;
            load_supplier_0x70910(&lStack_320);
            load_supplier_0x70910(&uStack_2c0);
            load_supplier_0x70910(auStack_2c8);
            puVar15 = (undefined1 *)load_supplier_0x703e0(&lStack_320,&uStack_370,&plStack_340);
            cVar5 = load_supplier_0x66d70(*puVar15,0);
          }
          load_supplier_0x703c0(&uStack_368);
          puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_368,&uStack_36f,&uStack_350);
          cVar5 = load_supplier_0x66d70(*puVar15,0);
        } while (cVar5 != '\0');
        uStack_318 = uStack_318 & 0xff;
        cStack_387 = cVar4;
        if (cVar4 == '\0') {
          uStack_318 = 0;
        }
      }
      plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
      if ((((*(int *)(*plVar16 + 8) != 0) ||
           (plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378),
           *(int *)(*plVar16 + 0x14) != -1)) ||
          (plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378), *(int *)(*plVar16 + 0x18) != -1
          )) || ((bVar40 && (iVar9 != 4)))) {
        load_supplier_0x70b20(param_2,"[B]");
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        pcVar29 = "Each ";
        if (*(int *)(*plVar16 + 0x10) < 2) {
          pcVar29 = "The ";
        }
        load_supplier_0x70b20(param_2,pcVar29);
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if ((*(byte *)(*plVar16 + 4) & 1) != 0) {
          load_supplier_0x70b20(param_2,"singer");
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if ((*(byte *)(*plVar16 + 4) & 2) != 0) {
          load_supplier_0x70b20(param_2,"speaker");
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if ((*(byte *)(*plVar16 + 4) & 4) != 0) {
          load_supplier_0x70b20(param_2,"chanter");
        }
        puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_378);
        if (*(int *)*puVar21 != -1) {
          puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_378);
          plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*(int *)*puVar21);
          lVar22 = *plVar16;
          if (lVar22 != 0) {
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
            lVar17 = lVar22 + 0x88;
            if (*(int *)(*plVar16 + 0x10) < 2) {
              lVar17 = lVar22 + 0x68;
            }
            load_supplier_0xbb2d0(param_2,lVar17);
          }
        }
        iVar37 = 0;
        if (bVar40) {
          iVar37 = 0;
          if (iVar9 != 4) {
            iVar37 = 1;
          }
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        iVar12 = iVar37 + 1;
        if (*(int *)(*plVar16 + 0x18) == -1) {
          iVar12 = iVar37;
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        uVar33 = 0;
        uVar10 = uStack_380;
        iVar37 = iVar12 + 1;
        if (*(int *)(*plVar16 + 0x14) == -1) {
          iVar37 = iVar12;
        }
        do {
          if (uVar33 < 0xe) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar33) {
            case 0:
              uVar10 = 1;
              break;
            case 1:
              uVar10 = 2;
              break;
            case 2:
              uVar10 = 4;
              break;
            case 3:
              uVar10 = 8;
              break;
            case 4:
              uVar10 = 0x10;
              break;
            case 5:
              uVar10 = 0x20;
              break;
            case 6:
              uVar10 = 0x40;
              break;
            case 7:
              uVar10 = 0x80;
              break;
            case 8:
              uVar10 = 0x800;
              break;
            case 9:
              uVar10 = 0x1000;
              break;
            case 10:
              uVar10 = 0x100;
              break;
            case 0xb:
              uVar10 = 0x200;
              break;
            case 0xc:
              uVar10 = 0x2000;
              break;
            case 0xd:
              uVar10 = 0x4000;
            }
          }
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          param_2 = uStack_2e0;
          if ((*(uint *)(*plVar16 + 8) & uVar10) != 0) {
            iVar37 = iVar37 + 1;
          }
          uVar33 = uVar33 + 1;
        } while ((int)uVar33 < 0xe);
        uStack_380 = uVar10;
        load_supplier_0x70b20(uStack_2e0," always ");
        uVar33 = uStack_37c;
        if ((cStack_385 != '\0') && (iVar9 != 4)) {
          if (iVar9 == 0) {
            pcVar29 = "does the main melody";
LAB_140dea985:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          else {
            if (iVar9 == 1) {
              pcVar29 = "does the counterpoint melody";
              goto LAB_140dea985;
            }
            if (iVar9 == 2) {
              pcVar29 = "does harmony";
              goto LAB_140dea985;
            }
            if (iVar9 == 3) {
              pcVar29 = "provides the rhythm";
              goto LAB_140dea985;
            }
          }
          if (iVar37 < 3) {
            if (iVar37 == 2) {
              pcVar29 = " and ";
              goto LAB_140dea9a9;
            }
          }
          else {
            pcVar29 = ", ";
LAB_140dea9a9:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          iVar37 = iVar37 + -1;
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if (*(int *)(*plVar16 + 0x18) != -1) {
          load_supplier_0x70b20(param_2,"should ");
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          uVar10 = *(int *)(*plVar16 + 0x18) - 0x22;
          if (uVar10 < 0x27) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar10) {
            case 0:
              pcVar29 = "stress the rhythm";
              break;
            case 1:
              pcVar29 = "be stately";
              break;
            case 2:
              pcVar29 = "be bright";
              break;
            case 3:
              pcVar29 = "be lively";
              break;
            case 4:
              pcVar29 = "perform with skill";
              break;
            case 5:
              pcVar29 = "be vigorous";
              break;
            case 6:
              pcVar29 = "be spirited";
              break;
            case 7:
              pcVar29 = "be delicate";
              break;
            default:
              pcVar29 = "be fiery";
              break;
            case 9:
              pcVar29 = "bring a sense of motion";
              break;
            case 0xb:
              pcVar29 = "perform with feeling";
              break;
            case 0xc:
              pcVar29 = "feel agitated";
              break;
            case 0xd:
              pcVar29 = "be passionate";
              break;
            case 0xe:
              pcVar29 = "sparkle";
              break;
            case 0xf:
              pcVar29 = "be broad";
              break;
            case 0x10:
              pcVar29 = "perform sweetly";
              break;
            case 0x11:
              pcVar29 = "be strong";
              break;
            case 0x12:
              pcVar29 = "be energetic";
              break;
            case 0x13:
              pcVar29 = "be forceful";
              break;
            case 0x14:
              pcVar29 = "feel heroic";
              break;
            case 0x15:
              pcVar29 = "perform expressively";
              break;
            case 0x16:
              pcVar29 = "feel furious";
              break;
            case 0x17:
              pcVar29 = "be joyful";
              break;
            case 0x18:
              pcVar29 = "be grand";
              break;
            case 0x19:
              pcVar29 = "be merry";
              break;
            case 0x1a:
              pcVar29 = "be graceful";
              break;
            case 0x1b:
              pcVar29 = "build as the performance proceeds";
              break;
            case 0x1c:
              pcVar29 = "evoke tears";
              break;
            case 0x1d:
              pcVar29 = "be melancholic";
              break;
            case 0x1e:
              pcVar29 = "feel mournful";
              break;
            case 0x1f:
              pcVar29 = "perform with a light touch";
              break;
            case 0x20:
              pcVar29 = "feel heavy";
              break;
            case 0x21:
              pcVar29 = "feel mysterious";
              break;
            case 0x22:
              pcVar29 = "be jumpy";
              break;
            case 0x23:
              pcVar29 = "feel playful";
              break;
            case 0x24:
              pcVar29 = "feel tender";
              break;
            case 0x25:
              pcVar29 = "feel calm";
              break;
            case 0x26:
              pcVar29 = "be triumphant";
            }
            load_supplier_0x70b20(param_2,pcVar29);
          }
          if (iVar37 < 3) {
            if (iVar37 == 2) {
              load_supplier_0x70b20(param_2," and ");
            }
            iVar37 = iVar37 + -1;
          }
          else {
            load_supplier_0x70b20(param_2,", ");
            iVar37 = iVar37 + -1;
          }
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        if (*(int *)(*plVar16 + 0x14) != -1) {
          load_supplier_0x70b20(param_2,"is to ");
          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
          uVar10 = *(int *)(*plVar16 + 0x14) - 0x14;
          if (uVar10 < 0xb) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar10) {
            case 0:
              pcVar29 = "be in whispered undertones";
              break;
            case 1:
              pcVar29 = "be very soft";
              break;
            case 2:
              pcVar29 = "be soft";
              break;
            case 3:
              pcVar29 = "be moderately soft";
              break;
            case 4:
              pcVar29 = "be moderately loud";
              break;
            case 5:
              pcVar29 = "be loud";
              break;
            case 6:
              pcVar29 = "be very loud";
              break;
            case 7:
              pcVar29 = "become louder and louder";
              break;
            case 8:
              pcVar29 = "become softer and softer";
              break;
            case 9:
              pcVar29 = "fade into silence";
              break;
            case 10:
              pcVar29 = "start loud then be immediately soft";
            }
            load_supplier_0x70b20(param_2,pcVar29);
          }
          if (iVar37 < 3) {
            if (iVar37 == 2) {
              pcVar29 = " and ";
              goto LAB_140deacb8;
            }
          }
          else {
            pcVar29 = ", ";
LAB_140deacb8:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          iVar37 = iVar37 + -1;
        }
        plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
        uVar10 = uStack_380;
        if (*(int *)(*plVar16 + 8) != 0) {
          uVar30 = 0;
          do {
            if (uVar30 < 0xe) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar30) {
              case 0:
                uVar10 = 1;
                break;
              case 1:
                uVar10 = 2;
                break;
              case 2:
                uVar10 = 4;
                break;
              case 3:
                uVar10 = 8;
                break;
              case 4:
                uVar10 = 0x10;
                break;
              case 5:
                uVar10 = 0x20;
                break;
              case 6:
                uVar10 = 0x40;
                break;
              case 7:
                uVar10 = 0x80;
                break;
              case 8:
                uVar10 = 0x800;
                break;
              case 9:
                uVar10 = 0x1000;
                break;
              case 10:
                uVar10 = 0x100;
                break;
              case 0xb:
                uVar10 = 0x200;
                break;
              case 0xc:
                uVar10 = 0x2000;
                break;
              case 0xd:
                uVar10 = 0x4000;
              }
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&uStack_378);
            if ((*(uint *)(*plVar16 + 8) & uVar10) != 0) {
              if (uVar10 < 0x81) {
                if (uVar10 == 0x80) {
                  pcVar29 = "locally improvises";
                  goto LAB_140deae75;
                }
                if (uVar10 - 1 < 0x40) {
                    /* WARNING: Switch is manually overridden */
                  switch((&UNK_140defb50)[uVar10 - 1]) {
                  case 0:
                    pcVar29 = "glides from note to note";
                    break;
                  case 1:
                    pcVar29 = "uses grace notes";
                    break;
                  case 2:
                    pcVar29 = "uses mordents";
                    break;
                  case 3:
                    pcVar29 = "makes trills";
                    break;
                  case 4:
                    pcVar29 = "plays rapid runs";
                    break;
                  case 5:
                    pcVar29 = "spreads syllables over many notes";
                    break;
                  case 6:
                    pcVar29 = "matches notes and syllables";
                    break;
                  case 7:
                    goto override_jmp_140deadad_case_2;
                  }
                  goto LAB_140deae75;
                }
              }
              else {
                if (uVar10 < 0x1001) {
                  if (uVar10 == 0x1000) {
                    pcVar29 = "plays arpeggios";
                  }
                  else if (uVar10 == 0x100) {
                    pcVar29 = "syncopates";
                  }
                  else if (uVar10 == 0x200) {
                    pcVar29 = "adds fills";
                  }
                  else {
                    if (uVar10 != 0x800) goto override_jmp_140deadad_case_2;
                    pcVar29 = "modulates frequently";
                  }
                }
                else if (uVar10 == 0x2000) {
                  pcVar29 = "plays staccato";
                }
                else {
                  if (uVar10 != 0x4000) goto override_jmp_140deadad_case_2;
                  pcVar29 = "plays legato";
                }
LAB_140deae75:
                load_supplier_0x70b20(param_2,pcVar29);
              }
override_jmp_140deadad_case_2:
              if (iVar37 < 3) {
                if (iVar37 == 2) {
                  pcVar29 = " and ";
                  goto LAB_140deae99;
                }
              }
              else {
                pcVar29 = ", ";
LAB_140deae99:
                load_supplier_0x70b20(param_2,pcVar29);
              }
              iVar37 = iVar37 + -1;
            }
            uVar30 = uVar30 + 1;
            uVar33 = uStack_37c;
          } while ((int)uVar30 < 0xe);
        }
        uStack_380 = uVar10;
        load_supplier_0x70b20(param_2,".  ");
        cVar4 = cStack_387;
        uVar10 = uStack_354;
      }
      if ((cVar4 != '\0') && (-1 < (int)uVar33)) {
        puVar21 = (undefined8 *)load_supplier_0x703d0(&uStack_378);
        uVar30 = uStack_358;
        piVar18 = (int *)*puVar21;
        if (*piVar18 == -1) {
          if (uVar33 == uStack_358) {
            load_supplier_0x70b20(param_2,"The voice stays in the ");
            if (uVar33 == 0) goto LAB_140deafcf;
            if (uVar33 == 1) {
LAB_140deaf3a:
              pcVar29 = "middle";
              goto LAB_140deafd6;
            }
            if (uVar33 == 2) {
              pcVar29 = "high";
              goto LAB_140deafd6;
            }
          }
          else {
            if ((uVar33 == 0) && (uStack_358 == 2)) {
              load_supplier_0x70b20(param_2,"The voice uses its entire range.  ");
              goto LAB_140deb359;
            }
            load_supplier_0x70b20(param_2,"The voice ranges from the ");
            if (uVar33 == 0) {
              pcVar29 = "low";
LAB_140deaf9d:
              load_supplier_0x70b20(param_2,pcVar29);
            }
            else {
              if (uVar33 == 1) {
                pcVar29 = "middle";
                goto LAB_140deaf9d;
              }
              if (uVar33 == 2) {
                pcVar29 = "high";
                goto LAB_140deaf9d;
              }
            }
            load_supplier_0x70b20(param_2," register to the ");
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                if (uVar30 == 2) {
                  pcVar29 = "high";
                  goto LAB_140deafd6;
                }
                goto LAB_140deafde;
              }
              goto LAB_140deaf3a;
            }
LAB_140deafcf:
            pcVar29 = "low";
LAB_140deafd6:
            load_supplier_0x70b20(param_2,pcVar29);
          }
LAB_140deafde:
          load_supplier_0x70b20(param_2," register.  ");
        }
        else {
          plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
          iVar9 = load_supplier_0x70410(*plVar16 + 0x248);
          uVar10 = uStack_358;
          lVar22 = (longlong)(int)uStack_358;
          if (uVar33 == uStack_358) {
            pcVar29 = "The voice is confined to the ";
            if (iVar9 < 4) {
              pcVar29 = "The voice stays in the ";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
            puVar21 = (undefined8 *)load_supplier_0x707e0(*plVar16 + 0x248,(longlong)(int)uVar33);
            iVar37 = load_supplier_0xde77f0(*puVar21);
            if (iVar37 != -1) {
              load_timbre_selector(iVar37,param_2);
              load_supplier_0x70b20(param_2," ");
            }
            if (uVar33 == 0) {
              pcVar29 = "low";
            }
            else if ((uVar33 == 1) && (2 < iVar9)) {
              pcVar29 = "middle";
            }
            else {
              bVar40 = uVar33 == iVar9 + -1;
LAB_140deb0b4:
              if ((bVar40) && (3 < iVar9)) {
                pcVar29 = "top";
                goto LAB_140deb33d;
              }
LAB_140deb336:
              pcVar29 = "high";
            }
LAB_140deb33d:
            load_supplier_0x70b20(param_2,pcVar29);
            pcVar29 = " register.  ";
          }
          else {
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
            puVar21 = (undefined8 *)load_supplier_0x707e0(*plVar16 + 0x248,(longlong)(int)uVar33);
            iVar37 = load_supplier_0xde77f0(*puVar21);
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
            puVar21 = (undefined8 *)load_supplier_0x707e0(*plVar16 + 0x248,lVar22);
            iVar12 = load_supplier_0xde77f0(*puVar21);
            iVar11 = iVar9 + -1;
            if ((uVar33 != 0) || (uVar10 != iVar11)) {
LAB_140deb17d:
              if (iVar37 == iVar12) {
                load_supplier_0x70b20(param_2,"The ");
                load_timbre_selector(iVar37,param_2);
                load_supplier_0x70b20(param_2," voice ranges from the ");
                if (uVar33 == 0) {
                  pcVar29 = "low";
                }
                else if ((uVar33 == 1) && (2 < iVar9)) {
                  pcVar29 = "middle";
                }
                else if ((uVar33 != iVar9 + -1) || (pcVar29 = "top", iVar9 < 4)) {
                  pcVar29 = "high";
                }
                load_supplier_0x70b20(param_2,pcVar29);
                load_supplier_0x70b20(param_2," register to the ");
                if (uVar10 == 0) {
                  pcVar29 = "low";
                }
                else {
                  if ((uVar10 != 1) || (iVar9 < 3)) {
                    bVar40 = uVar10 == iVar9 + -1;
                    goto LAB_140deb0b4;
                  }
                  pcVar29 = "middle";
                }
                goto LAB_140deb33d;
              }
              if (uVar33 == 0) goto LAB_140deb23f;
LAB_140deb259:
              load_supplier_0x70b20(param_2,"The voice ranges from the ");
LAB_140deb26b:
              if (iVar37 != -1) {
                load_timbre_selector(iVar37,param_2);
                load_supplier_0x70b20(param_2," ");
              }
              if (uVar33 == 0) {
                pcVar29 = "low";
              }
              else if ((uVar33 == 1) && (2 < iVar9)) {
                pcVar29 = "middle";
              }
              else if ((uVar33 != iVar11) || (pcVar29 = "top", iVar9 < 4)) {
                pcVar29 = "high";
              }
              load_supplier_0x70b20(param_2,pcVar29);
              load_supplier_0x70b20(param_2," register to the ");
              if (iVar12 != -1) {
                load_timbre_selector(iVar12,param_2);
                load_supplier_0x70b20(param_2," ");
              }
              if (uStack_358 == 0) {
                pcVar29 = "low";
              }
              else if ((uStack_358 == 1) && (2 < iVar9)) {
                pcVar29 = "middle";
              }
              else if ((uStack_358 != iVar9 + -1) || (pcVar29 = "top", iVar9 < 4))
              goto LAB_140deb336;
              goto LAB_140deb33d;
            }
            if ((iVar37 != -1) || (iVar12 != -1)) {
              if (uVar10 != iVar11) goto LAB_140deb17d;
              if (iVar37 == iVar12) {
                load_supplier_0x70b20(param_2,"The ");
                load_timbre_selector(iVar37,param_2);
                pcVar29 = " voice uses its entire range.  ";
                goto LAB_140deb34c;
              }
LAB_140deb23f:
              if (uStack_358 != iVar11) goto LAB_140deb259;
              load_supplier_0x70b20(param_2,"The voice uses its entire range from the ");
              goto LAB_140deb26b;
            }
            pcVar29 = "The voice uses its entire range.  ";
          }
LAB_140deb34c:
          load_supplier_0x70b20(param_2,pcVar29);
          uVar10 = uStack_354;
        }
      }
LAB_140deb359:
      load_supplier_0x703c0(&uStack_378);
      uVar10 = uVar10 + 1;
      uStack_354 = uVar10;
      puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_378,auStack_383,auStack_288);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
      lVar22 = lStack_2f0;
    } while (cVar4 != '\0');
  }
  iStack_300 = 0;
  uVar38 = 0;
  uStack_354 = 0;
  uVar10 = 0xffffffff;
  uStack_358 = 0xffffffff;
  uVar32 = 0xffffffff;
  uVar33 = 0;
  load_supplier_0x70800(lVar22 + 0x88,&puStack_360);
  load_supplier_0x707f0(lVar22 + 0x88,&plStack_340);
  puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,auStack_383,&plStack_340);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  uVar30 = 0xffffffff;
  uVar31 = uStack_358;
  uVar3 = uStack_354;
  iVar9 = iStack_300;
  iVar37 = 0;
  while (cVar4 != '\0') {
    puVar21 = (undefined8 *)load_supplier_0x703d0(&puStack_360);
    iVar9 = iVar37 + 1;
    if (*(int *)*puVar21 != 0) {
      iVar9 = iVar37;
    }
    puVar21 = (undefined8 *)load_supplier_0x703d0(&puStack_360);
    uVar31 = uVar30;
    if (((*(int *)*puVar21 == 10) && (uVar38 = uVar38 + 1, uVar31 = uVar33, uVar30 != 0xffffffff))
       && (bVar40 = uVar10 == 0xffffffff, uVar10 = uVar32, uVar31 = uVar30, bVar40)) {
      uVar10 = uVar33;
      uVar32 = uVar33;
    }
    load_supplier_0x703c0(&puStack_360);
    uVar33 = uVar33 + 1;
    puVar15 = (undefined1 *)load_supplier_0x703e0(&puStack_360,auStack_383,&plStack_340);
    cVar4 = load_supplier_0x66d70(*puVar15,0);
    uVar30 = uVar31;
    uVar3 = uVar38;
    iVar37 = iVar9;
  }
  uStack_358 = uVar31;
  uStack_354 = uVar3;
  iStack_300 = iVar9;
  load_supplier_0x70b20(param_2,"[B]");
  load_supplier_0x70c50(auStack_108);
  FUN_140aaafe0(lVar22 + 8,auStack_108,1);
  FUN_140544330(auStack_108);
  load_supplier_0xbb2d0(param_2,auStack_108);
  load_supplier_0x693f0(auStack_108);
  lVar17 = load_supplier_0x70410(lVar22 + 0x88);
  if (lVar17 == 1) {
    pcVar29 = " has a simple structure: ";
  }
  else {
    lVar17 = load_supplier_0x70410(lVar22 + 0x88);
    pcVar29 = " has the following structure: ";
    if (lVar17 != 2) {
      pcVar29 = " has a well-defined multi-passage structure: ";
    }
  }
  load_supplier_0x70b20(param_2,pcVar29);
  uStack_37c = 0;
  plVar16 = (longlong *)load_supplier_0x70410(lVar22 + 0xd0);
  plStack_340 = plVar16;
  load_supplier_0x70800(lVar22 + 0xd0,auStack_328);
  load_supplier_0x707f0(lVar22 + 0xd0,auStack_268);
  puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_328,auStack_383,auStack_268);
  cVar4 = load_supplier_0x66d70(*puVar15,0);
  if (cVar4 != '\0') {
    plStack_330 = (longlong *)(lVar22 + 0x88);
    do {
      plVar25 = plStack_330;
      uVar34 = 0;
      iVar37 = (int)plVar16;
      plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
      iVar9 = *(int *)(*plVar16 + 0xc);
      plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
      uVar19 = uVar34;
      if (0 < *(int *)(*plVar16 + 0xc)) {
        do {
          plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
          puVar21 = (undefined8 *)
                    load_supplier_0x707e0(plVar25,(longlong)*(int *)(uVar19 + *plVar16));
          puVar35 = (uint *)*puVar21;
          bVar40 = false;
          if ((*puVar35 == 0) && (0 < (int)uStack_37c)) {
            if (puVar35[4] == 1) {
              load_supplier_0x70b20(param_2,"an additional");
            }
            else {
              if (puVar35[3] == puVar35[4]) {
                load_supplier_0x70b20(param_2,"another ");
                load_supplier_0x70c50(auStack_128);
                load_cardinal(puVar35[3],auStack_128);
                load_supplier_0xbb2d0(param_2,auStack_128);
              }
              else {
                load_supplier_0x70b20(param_2,"another ");
                load_supplier_0x70c50(auStack_128);
                load_cardinal(puVar35[3],auStack_128);
                load_supplier_0xbb2d0(param_2,auStack_128);
                load_supplier_0x693f0(auStack_128);
                load_supplier_0x70b20(param_2," to ");
                load_supplier_0x70c50(auStack_128);
                load_cardinal(puVar35[4],auStack_128);
                load_supplier_0xbb2d0(param_2,auStack_128);
              }
LAB_140deb78b:
              load_supplier_0x693f0(auStack_128);
            }
          }
          else {
            if (puVar35[4] != 1) {
              if (puVar35[3] == puVar35[4]) {
                load_supplier_0x70c50(auStack_128);
                load_cardinal(puVar35[3],auStack_128);
                load_supplier_0xbb2d0(param_2,auStack_128);
              }
              else {
                load_supplier_0x70c50(auStack_128);
                load_cardinal(puVar35[3],auStack_128);
                load_supplier_0xbb2d0(param_2,auStack_128);
                load_supplier_0x693f0(auStack_128);
                load_supplier_0x70b20(param_2," to ");
                load_supplier_0x70c50(auStack_128);
                load_cardinal(puVar35[4],auStack_128);
                load_supplier_0xbb2d0(param_2,auStack_128);
              }
              goto LAB_140deb78b;
            }
            load_supplier_0x70b20(param_2,"a");
            bVar40 = true;
          }
          uVar33 = puVar35[0x36];
          if (uVar33 != 0xffffffff) {
            if ((int)uVar33 < 0x14) {
              if (4 < (int)uVar33) goto LAB_140deb7c7;
              pcVar29 = " brief";
            }
            else {
              pcVar29 = " lengthy";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            bVar40 = false;
          }
LAB_140deb7c7:
          if (0xb < *puVar35) goto LAB_140deba1a;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar35) {
          case 0:
            if ((iStack_300 == 1) && (1 < (int)puVar35[4])) {
              load_supplier_0x70b20(param_2," unrelated");
            }
            load_supplier_0x70b20(param_2," passage");
            if (1 < (int)puVar35[4]) {
              load_supplier_0x70b20(param_2,"s");
            }
            uStack_37c = uStack_37c + 1;
            goto LAB_140deba1a;
          case 1:
            if (bVar40) {
              load_supplier_0x70b20(param_2,"n");
            }
            pcVar29 = " introduction";
            break;
          case 2:
            if (bVar40) {
              load_supplier_0x70b20(param_2,"n");
            }
            load_supplier_0x70b20(param_2," exposition");
            uVar33 = puVar35[1];
            if (uVar33 == uStack_358) {
              if (uStack_354 == 1) {
                pcVar29 = " of the theme";
              }
              else {
LAB_140deb890:
                pcVar29 = " of the first theme";
              }
            }
            else {
LAB_140deb89c:
              if (uVar33 == uVar10) {
                pcVar29 = " of the second theme";
              }
              else {
                pcVar29 = " of the previous passage";
              }
            }
            break;
          case 3:
            load_supplier_0x70b20(param_2," recapitulation");
            uVar33 = puVar35[1];
            if (uVar33 != uStack_358) goto LAB_140deb89c;
            if (uStack_354 != 1) goto LAB_140deb890;
            pcVar29 = " of the theme";
            break;
          case 4:
            load_supplier_0x70b20(param_2," synthesis");
            if ((puVar35[1] == uStack_358) && (puVar35[1] == uVar10)) {
              pcVar29 = " of the two themes";
            }
            else {
              pcVar29 = " of previous passages";
            }
            break;
          case 5:
            pcVar29 = " verse";
            goto LAB_140deb926;
          case 6:
            pcVar29 = " chorus";
            break;
          case 7:
            pcVar29 = " finale";
            break;
          case 8:
            pcVar29 = " coda";
            break;
          case 9:
            pcVar29 = " bridge-passage";
            goto LAB_140deb926;
          case 10:
            if (uVar10 != 0xffffffff) {
              plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
              if (*(uint *)(uVar19 + *plVar16) == uStack_358) {
                load_supplier_0x70b20(param_2," first");
                pcVar29 = " theme";
                goto LAB_140deb926;
              }
              plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
              if (*(uint *)(uVar19 + *plVar16) == uVar10) {
                load_supplier_0x70b20(param_2," second");
              }
            }
            pcVar29 = " theme";
LAB_140deb926:
            load_supplier_0x70b20(param_2,pcVar29);
            if (1 < (int)puVar35[4]) {
              pcVar29 = "s";
              break;
            }
            goto LAB_140deba1a;
          case 0xb:
            load_supplier_0x70b20(param_2," series of variations");
            if (puVar35[1] == uStack_358) {
              if (uStack_354 == 1) {
                pcVar29 = " on the theme";
              }
              else {
                pcVar29 = " on the first theme";
              }
            }
            else {
              if (puVar35[1] != uVar10) goto LAB_140deba1a;
              pcVar29 = " on the second theme";
            }
          }
          load_supplier_0x70b20(param_2,pcVar29);
LAB_140deba1a:
          if (iVar9 < 3) {
            if (iVar9 == 2) {
              pcVar29 = " and ";
              goto LAB_140deba36;
            }
          }
          else {
            pcVar29 = ", ";
LAB_140deba36:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          iVar9 = iVar9 + -1;
          uVar33 = (int)uVar34 + 1;
          uVar34 = (ulonglong)uVar33;
          uVar19 = uVar19 + 4;
          plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
          plVar25 = plStack_330;
        } while ((int)uVar33 < *(int *)(*plVar16 + 0xc));
        iVar37 = (int)plStack_340;
      }
      plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
      if (1 < *(int *)(*plVar16 + 0x14)) {
        load_supplier_0x70b20(param_2," ");
        plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
        if ((*(int *)(*plVar16 + 0x10) == 1) &&
           (plVar16 = (longlong *)load_supplier_0x703d0(auStack_328), *(int *)(*plVar16 + 0x14) == 2
           )) {
          load_supplier_0x70b20(param_2,"possibly ");
        }
        plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
        pcVar29 = "all repeated";
        if (*(int *)(*plVar16 + 0xc) < 2) {
          pcVar29 = "repeated";
        }
        load_supplier_0x70b20(param_2,pcVar29);
        plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
        if ((*(int *)(*plVar16 + 0x10) == 1) &&
           (plVar16 = (longlong *)load_supplier_0x703d0(auStack_328), 2 < *(int *)(*plVar16 + 0x14))
           ) {
          load_supplier_0x70b20(param_2," up to ");
          load_supplier_0x70c50(auStack_128);
          plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
          load_cardinal(*(int *)(*plVar16 + 0x14) + -1,auStack_128);
          load_supplier_0xbb2d0(param_2,auStack_128);
          load_supplier_0x70b20(param_2," times");
          load_supplier_0x693f0(auStack_128);
        }
        plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
        lVar22 = *plVar16;
        plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
        if (*(int *)(*plVar16 + 0x10) == *(int *)(lVar22 + 0x14)) {
          load_supplier_0x70b20(param_2," ");
          load_supplier_0x70c50(auStack_128);
          plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
          load_cardinal(*(int *)(*plVar16 + 0x14) + -1,auStack_128);
          load_supplier_0xbb2d0(param_2,auStack_128);
          load_supplier_0x70b20(param_2," times");
          load_supplier_0x693f0(auStack_128);
        }
        else {
          plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
          if (1 < *(int *)(*plVar16 + 0x10)) {
            load_supplier_0x70b20(param_2," ");
            load_supplier_0x70c50(auStack_128);
            plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
            load_cardinal(*(int *)(*plVar16 + 0x10) + -1,auStack_128);
            load_supplier_0xbb2d0(param_2,auStack_128);
            load_supplier_0x693f0(auStack_128);
            load_supplier_0x70b20(param_2," to ");
            load_supplier_0x70c50(auStack_128);
            plVar16 = (longlong *)load_supplier_0x703d0(auStack_328);
            load_cardinal(*(int *)(*plVar16 + 0x14) + -1,auStack_128);
            load_supplier_0xbb2d0(param_2,auStack_128);
            load_supplier_0x693f0(auStack_128);
            load_supplier_0x70b20(param_2," times");
          }
        }
      }
      if (iVar37 < 3) {
        if (iVar37 == 2) {
          pcVar29 = " and ";
          goto LAB_140debce4;
        }
      }
      else {
        pcVar29 = ", ";
LAB_140debce4:
        load_supplier_0x70b20(param_2,pcVar29);
      }
      plVar16 = (longlong *)(ulonglong)(iVar37 - 1);
      plStack_340 = plVar16;
      load_supplier_0x703c0(auStack_328);
      puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_328,auStack_383,auStack_268);
      cVar4 = load_supplier_0x66d70(*puVar15,0);
      lVar22 = lStack_2f0;
    } while (cVar4 != '\0');
  }
  load_supplier_0x70b20(param_2,".  ");
  cStack_385 = '\x01';
  cStack_387 = '\x01';
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  load_supplier_0x70800(lVar22 + 0x88,&plStack_2e8);
  load_supplier_0x707f0(lVar22 + 0x88,&plStack_330);
  puVar15 = (undefined1 *)load_supplier_0x703e0(&plStack_2e8,auStack_383,&plStack_330);
  cVar6 = load_supplier_0x66d70(*puVar15,0);
  cVar4 = '\x01';
  cVar5 = cStack_387;
  cVar7 = cStack_385;
  cVar8 = '\x01';
  while (cVar6 != '\0') {
    puVar21 = (undefined8 *)load_supplier_0x703d0(&plStack_2e8);
    piVar18 = (int *)((longlong)&uStack_a8 + (longlong)*(int *)*puVar21 * 4);
    *piVar18 = *piVar18 + 1;
    plVar16 = (longlong *)load_supplier_0x703d0(&plStack_2e8);
    cVar7 = '\0';
    if (*(int *)(*plVar16 + 0x1c) == -1) {
      cVar7 = cVar8;
    }
    plVar16 = (longlong *)load_supplier_0x703d0(&plStack_2e8);
    cVar5 = '\0';
    if (*(int *)(*plVar16 + 0x24) == -1) {
      cVar5 = cVar4;
    }
    load_supplier_0x703c0(&plStack_2e8);
    puVar15 = (undefined1 *)load_supplier_0x703e0(&plStack_2e8,auStack_383,&plStack_330);
    cVar6 = load_supplier_0x66d70(*puVar15,0);
    cVar4 = cVar5;
    cVar8 = cVar7;
  }
  cStack_387 = cVar5;
  cStack_385 = cVar7;
  puVar21 = (undefined8 *)load_supplier_0x70800(lVar22 + 0x88);
  plStack_2e8 = (longlong *)*puVar21;
  lStack_2b0 = lVar22 + 0xa0;
  cVar4 = cStack_387;
  while( true ) {
    iVar9 = iStack_338;
    if (plStack_2e8 == plStack_330) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
      if (plStack_2e8 < plStack_330) {
        cVar5 = -1;
      }
    }
    if (-1 < cVar5) break;
    puVar21 = (undefined8 *)load_supplier_0x703d0(&plStack_2e8);
    puVar35 = (uint *)*puVar21;
    iVar37 = -1;
    iVar12 = -1;
    uStack_368 = CONCAT44(uStack_368._4_4_,0xffffffff);
    iStack_300 = -1;
    puStack_308 = puVar35;
    load_supplier_0x70800(puVar35 + 0x12,&lStack_320);
    load_supplier_0x707f0(puVar35 + 0x12,auStack_260);
    load_supplier_0x70800(puVar35 + 0x18,&plStack_340);
    load_supplier_0x707f0(puVar35 + 0x18,auStack_218);
    puVar15 = (undefined1 *)load_supplier_0x703e0(&lStack_320,auStack_383,auStack_260);
    cVar5 = load_supplier_0x66d70(*puVar15,0);
    iVar11 = iStack_290;
    if (cVar5 != '\0') {
      do {
        piVar18 = (int *)load_supplier_0x703d0(&lStack_320);
        if ((*piVar18 == 0) && (iVar9 == -1)) {
          piVar18 = (int *)load_supplier_0x703d0(&plStack_340);
          iVar37 = *piVar18;
        }
        piVar18 = (int *)load_supplier_0x703d0(&lStack_320);
        if ((*piVar18 == 1) && (iVar11 == -1)) {
          piVar18 = (int *)load_supplier_0x703d0(&plStack_340);
          iVar12 = *piVar18;
        }
        load_supplier_0x70910(&lStack_320);
        load_supplier_0x70910(&plStack_340);
        puVar15 = (undefined1 *)load_supplier_0x703e0(&lStack_320,auStack_383,auStack_260);
        cVar4 = load_supplier_0x66d70(*puVar15,0);
      } while (cVar4 != '\0');
      uStack_368 = CONCAT44(uStack_368._4_4_,iVar37);
      cVar4 = cStack_387;
      iStack_300 = iVar12;
    }
    uVar19 = load_supplier_0x70930(puVar35 + 0xc);
    uStack_2f8 = uVar19;
    load_supplier_0x70800(puVar35 + 0x1e,&uStack_350);
    load_supplier_0x707f0(puVar35 + 0x1e,&lStack_280);
    load_supplier_0x70800(puVar35 + 0x24,&uStack_2c0);
    load_supplier_0x707f0(puVar35 + 0x24,auStack_210);
    puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&uStack_36f,&lStack_280);
    cVar7 = load_supplier_0x66d70(*puVar15);
    cVar5 = cStack_384;
    uVar34 = uStack_2f8;
    while (uVar10 = (uint)uVar19, cStack_384 = cVar5, cVar7 != '\0') {
      piVar18 = (int *)load_supplier_0x703d0(&uStack_350);
      uVar33 = uVar10 - 1;
      if (*piVar18 != -1) {
        uVar33 = uVar10;
      }
      load_supplier_0x70910(&uStack_350);
      load_supplier_0x70910(&uStack_2c0);
      puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&uStack_36f,&lStack_280);
      uVar19 = (ulonglong)uVar33;
      cVar7 = load_supplier_0x66d70(*puVar15);
      cVar5 = cStack_384;
      uVar34 = uVar19;
    }
    uStack_2f8 = uVar34;
    if (((((cVar5 != '\0') && ((((char)uStack_318 != '\0' || ((int)uVar10 < 1)) && (iVar37 == -1))))
         && (((iVar12 == -1 && (puVar35[6] == 0xffffffff)) && (puVar35[5] == 0xffffffff)))) &&
        ((puVar35[0x2a] == 0xffffffff && (puVar35[0x2b] == 0xffffffff)))) &&
       (((puVar35[0x2c] == 0xffffffff &&
         (((((puVar35[7] == 0xffffffff && (cStack_385 != '\0')) && (puVar35[9] == 0xffffffff)) &&
           ((cStack_387 != '\0' && (puVar35[0x2e] == 0xffffffff)))) && (puVar35[0x2d] == 0)))) &&
        (lVar22 = load_supplier_0x70410(puVar35 + 0x30), lVar22 == 0)))) goto LAB_140dee0e7;
    load_supplier_0x70b20(param_2,"[B]");
    load_supplier_0x70c50(auStack_108);
    load_supplier_0x70b20(auStack_108);
    if (1 < *(int *)((longlong)&uStack_a8 + (longlong)(int)*puVar35 * 4)) {
      load_supplier_0x70c50(auStack_e8);
      load_ordinal(*(int *)((longlong)&uStack_78 + (longlong)(int)*puVar35 * 4) + 1,auStack_e8,0);
      load_supplier_0x543d60(auStack_e8);
      load_supplier_0xbb2d0(auStack_108,auStack_e8);
      load_supplier_0x70b20(auStack_108);
      load_supplier_0x693f0(auStack_e8);
    }
    if (0xb < *puVar35) goto LAB_140dec25c;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      goto LAB_140dec250;
    case 5:
      break;
    case 6:
      goto LAB_140dec250;
    case 7:
      goto LAB_140dec250;
    case 8:
      goto LAB_140dec250;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      goto LAB_140dec250;
    }
    load_supplier_0x70b20(auStack_108);
    if (1 < (int)puVar35[4]) {
LAB_140dec250:
      load_supplier_0x70b20(auStack_108);
    }
LAB_140dec25c:
    piVar18 = (int *)((longlong)&uStack_78 + (longlong)(int)*puVar35 * 4);
    *piVar18 = *piVar18 + 1;
    cVar7 = '\0';
    cStack_386 = '\0';
    if (cVar5 == '\0') {
      load_supplier_0xbb2d0(param_2,auStack_108);
      cStack_386 = '\x01';
      load_supplier_0x70b20(param_2," is voiced by ");
      iVar9 = load_supplier_0x70930(puVar35 + 0xc);
      puVar35 = puStack_308;
      load_supplier_0x70800(puStack_308 + 0xc,auStack_2c8);
      load_supplier_0x707f0(puVar35 + 0xc,auStack_2a0);
      load_supplier_0x70800(puVar35 + 0x12,auStack_2a8);
      load_supplier_0x707f0(puVar35 + 0x12,auStack_208);
      puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_2c8,&uStack_370,auStack_2a0);
      cVar5 = load_supplier_0x66d70(*puVar15,0);
      lVar17 = lStack_2b0;
      lVar22 = lStack_2f0;
      cVar7 = '\x01';
      while (cVar5 != '\0') {
        piVar18 = (int *)load_supplier_0x703d0(auStack_2a8);
        iVar37 = *piVar18;
        if (iVar37 == 0) {
          pcVar29 = "the melody of the";
LAB_140dec360:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        else {
          if (iVar37 == 1) {
            pcVar29 = "the counterpoint of the";
            goto LAB_140dec360;
          }
          if (iVar37 == 2) {
            pcVar29 = "the harmony of the";
            goto LAB_140dec360;
          }
          if (iVar37 == 3) {
            pcVar29 = "the rhythm of the";
            goto LAB_140dec360;
          }
          if (iVar37 == 4) {
            pcVar29 = "the";
            goto LAB_140dec360;
          }
        }
        load_supplier_0x70b20(param_2," ");
        bVar40 = false;
        piVar18 = (int *)load_supplier_0x703d0(auStack_2c8);
        puVar21 = (undefined8 *)load_supplier_0x707e0(lVar17,(longlong)*piVar18);
        piVar18 = (int *)*puVar21;
        if ((*(byte *)(piVar18 + 1) & 1) != 0) {
          load_supplier_0x70b20(param_2,"singer");
          if (1 < piVar18[4]) {
            load_supplier_0x70b20(param_2,"s");
          }
          bVar40 = true;
        }
        if ((*(byte *)(piVar18 + 1) & 2) != 0) {
          load_supplier_0x70b20(param_2,"speaker");
          if (1 < piVar18[4]) {
            load_supplier_0x70b20(param_2,"s");
          }
          bVar40 = true;
        }
        if ((*(byte *)(piVar18 + 1) & 4) != 0) {
          load_supplier_0x70b20(param_2,"chanter");
          if (1 < piVar18[4]) {
            load_supplier_0x70b20(param_2,"s");
          }
          bVar40 = true;
        }
        iVar37 = *piVar18;
        if (iVar37 != -1) {
          if (piVar18[4] < 2) {
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)iVar37);
            lVar20 = *plVar16 + 0x68;
          }
          else {
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)iVar37);
            lVar20 = *plVar16 + 0x88;
          }
          load_supplier_0xbb2d0(param_2,lVar20);
        }
        if (bVar40) {
          if (puStack_308[6] == 0xffffffff) {
            if (puStack_308[5] == 0xffffffff) {
              if ((*(int *)(lVar22 + 0xf4) == -1) && (*(int *)(lVar22 + 0xf8) == -1)) {
                load_supplier_0x70b20(param_2," reciting nonsensical words and sounds");
              }
            }
            else {
              lVar20 = FUN_140073b30(0x142504248);
              if (lVar20 != 0) {
                load_supplier_0x70b20(param_2," reciting");
                if ((*(byte *)(lVar20 + 0x8c) & 2) != 0) {
                  load_supplier_0x70b20(param_2," a composition of");
                }
                load_supplier_0x70b20(param_2," ");
                load_supplier_0x70c50(auStack_128);
                FUN_140aaafe0(lVar20 + 8,auStack_128,1);
                load_supplier_0xbb2d0(param_2,auStack_128);
                load_supplier_0x693f0(auStack_128);
              }
            }
          }
          else {
            lVar20 = FUN_140073b30(0x142504038);
            if (lVar20 != 0) {
              load_supplier_0x70b20(param_2," reciting the words of ");
              load_supplier_0xbb2d0(param_2,lVar20 + 8);
            }
          }
        }
        if (iVar9 < 3) {
          if (iVar9 == 2) {
            pcVar29 = " and ";
            goto LAB_140dec583;
          }
        }
        else {
          pcVar29 = ", ";
LAB_140dec583:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        load_supplier_0x70910(auStack_2c8);
        load_supplier_0x70910(auStack_2a8);
        iVar9 = iVar9 + -1;
        puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_2c8,&uStack_370,auStack_2a0);
        cVar5 = load_supplier_0x66d70(*puVar15,0);
        uVar19 = uStack_2f8;
        cVar4 = cStack_387;
        cVar7 = cStack_386;
      }
      load_supplier_0x70b20(param_2);
      puVar35 = puStack_308;
    }
    if (((puVar35[0x2a] != 0xffffffff) || (puVar35[0x2b] != 0xffffffff)) ||
       (puVar35[0x2c] != 0xffffffff)) {
      if (cVar7 == '\0') {
        load_supplier_0xbb2d0(param_2,auStack_108);
        cVar7 = '\x01';
        cStack_386 = '\x01';
      }
      else if ((int)puVar35[4] < 2) {
        load_supplier_0x70b20(param_2,"The passage");
      }
      else {
        load_supplier_0x70b20(param_2,"Each passage");
      }
      load_supplier_0x70b20(param_2," ");
      if (puVar35[0x2c] != 0xffffffff) {
        load_supplier_0x70b20(param_2,"should ");
        if (puVar35[0x2c] - 0x22 < 0x27) {
                    /* WARNING: Switch is manually overridden */
          switch(puVar35[0x2c] - 0x22) {
          case 0:
            load_supplier_0x70b20(param_2,"stress the rhythm");
            break;
          case 1:
            load_supplier_0x70b20(param_2,"be stately");
            break;
          case 2:
            load_supplier_0x70b20(param_2,"be bright");
            break;
          case 3:
            load_supplier_0x70b20(param_2,"be lively");
            break;
          case 4:
            load_supplier_0x70b20(param_2,"be made with skill");
            break;
          case 5:
            load_supplier_0x70b20(param_2,"be vigorous");
            break;
          case 6:
            load_supplier_0x70b20(param_2,"be spirited");
            break;
          case 7:
            load_supplier_0x70b20(param_2,"be delicate");
            break;
          default:
            load_supplier_0x70b20(param_2,"be fiery");
            break;
          case 9:
            load_supplier_0x70b20(param_2,"bring a sense of motion");
            break;
          case 0xb:
            load_supplier_0x70b20(param_2,"be made with feeling");
            break;
          case 0xc:
            load_supplier_0x70b20(param_2,"feel agitated");
            break;
          case 0xd:
            load_supplier_0x70b20(param_2,"be passionate");
            break;
          case 0xe:
            load_supplier_0x70b20(param_2,"sparkle");
            break;
          case 0xf:
            load_supplier_0x70b20(param_2,"be broad");
            break;
          case 0x10:
            load_supplier_0x70b20(param_2,"be made sweetly");
            break;
          case 0x11:
            load_supplier_0x70b20(param_2,"be strong");
            break;
          case 0x12:
            load_supplier_0x70b20(param_2,"be energetic");
            break;
          case 0x13:
            load_supplier_0x70b20(param_2,"be forceful");
            break;
          case 0x14:
            load_supplier_0x70b20(param_2,"feel heroic");
            break;
          case 0x15:
            load_supplier_0x70b20(param_2,"be made expressively");
            break;
          case 0x16:
            load_supplier_0x70b20(param_2,"feel furious");
            break;
          case 0x17:
            load_supplier_0x70b20(param_2,"be joyful");
            break;
          case 0x18:
            load_supplier_0x70b20(param_2,"be grand");
            break;
          case 0x19:
            load_supplier_0x70b20(param_2,"be merry");
            break;
          case 0x1a:
            load_supplier_0x70b20(param_2,"be graceful");
            break;
          case 0x1b:
            load_supplier_0x70b20(param_2,"build as it proceeds");
            break;
          case 0x1c:
            load_supplier_0x70b20(param_2,"evoke tears");
            break;
          case 0x1d:
            load_supplier_0x70b20(param_2,"be melancholic");
            break;
          case 0x1e:
            load_supplier_0x70b20(param_2,"feel mournful");
            break;
          case 0x1f:
            load_supplier_0x70b20(param_2,"be made with a light touch");
            break;
          case 0x20:
            load_supplier_0x70b20(param_2,"feel heavy");
            break;
          case 0x21:
            load_supplier_0x70b20(param_2,"feel mysterious");
            break;
          case 0x22:
            load_supplier_0x70b20(param_2,"be jumpy");
            break;
          case 0x23:
            load_supplier_0x70b20(param_2,"feel playful");
            break;
          case 0x24:
            load_supplier_0x70b20(param_2,"feel tender");
            break;
          case 0x25:
            load_supplier_0x70b20(param_2,"feel calm");
            break;
          case 0x26:
            load_supplier_0x70b20(param_2,"be triumphant");
          }
        }
      }
      if (puVar35[0x2a] != 0xffffffff) {
        if (puVar35[0x2c] != 0xffffffff) {
          load_supplier_0x70b20(param_2," and ");
        }
        if (puVar35[0x2a] < 0x22) {
                    /* WARNING: Switch is manually overridden */
          switch(puVar35[0x2a]) {
          case 0:
            pcVar29 = "is at a free tempo";
            break;
          case 1:
            pcVar29 = "is very slow";
            break;
          case 2:
            pcVar29 = "is slow";
            break;
          case 3:
            pcVar29 = "is at a walking pace";
            break;
          case 4:
            pcVar29 = "is moderately paced";
            break;
          case 5:
            pcVar29 = "is moderately fast";
            break;
          case 6:
            pcVar29 = "is fast";
            break;
          case 7:
            pcVar29 = "is very fast";
            break;
          case 8:
            pcVar29 = "is extremely fast";
            break;
          case 9:
            pcVar29 = "is twice the tempo of the last passage";
            break;
          case 10:
            pcVar29 = "is half the tempo of the last passage";
            break;
          case 0xb:
            pcVar29 = "moves more quickly than the last passage";
            break;
          case 0xc:
            pcVar29 = "is slower than the last passage";
            break;
          case 0xd:
            pcVar29 = "resumes the previous tempo";
            break;
          case 0xe:
            pcVar29 = "resumes the original tempo";
            break;
          case 0xf:
            pcVar29 = "accelerates as it proceeds";
            break;
          case 0x10:
            pcVar29 = "slows and broadens";
            break;
          case 0x11:
            pcVar29 = "is consistently slowing";
            break;
          case 0x12:
            pcVar29 = "is at a hurried pace";
            break;
          case 0x13:
            pcVar29 = "gradually slows as it comes to an end";
            break;
          default:
            goto override_jmp_140dec9cf_case_20;
          case 0x1f:
            pcVar29 = "slows down and dies away as it draws to a close";
            break;
          case 0x20:
            pcVar29 = "becomes calmer as the end is approached";
            break;
          case 0x21:
            pcVar29 = "becomes frenzied as it proceeds";
          }
          load_supplier_0x70b20(param_2,pcVar29);
        }
      }
override_jmp_140dec9cf_case_20:
      if (puVar35[0x2b] != 0xffffffff) {
        if ((puVar35[0x2a] != 0xffffffff) || (pcVar29 = "is to", puVar35[0x2c] != 0xffffffff)) {
          pcVar29 = ", and it is to";
        }
        load_supplier_0x70b20(param_2,pcVar29);
        load_supplier_0x70b20(param_2," ");
        if (puVar35[0x2b] - 0x14 < 0xb) {
                    /* WARNING: Switch is manually overridden */
          switch(puVar35[0x2b] - 0x14) {
          case 0:
            pcVar29 = "be in whispered undertones";
            break;
          case 1:
            pcVar29 = "be very soft";
            break;
          case 2:
            pcVar29 = "be soft";
            break;
          case 3:
            pcVar29 = "be moderately soft";
            break;
          case 4:
            pcVar29 = "be moderately loud";
            break;
          case 5:
            pcVar29 = "be loud";
            break;
          case 6:
            pcVar29 = "be very loud";
            break;
          case 7:
            pcVar29 = "become louder and louder";
            break;
          case 8:
            pcVar29 = "become softer and softer";
            break;
          case 9:
            pcVar29 = "fade into silence";
            break;
          case 10:
            pcVar29 = "start loud then be immediately soft";
          }
          load_supplier_0x70b20(param_2,pcVar29);
        }
      }
      load_supplier_0x70b20(param_2);
    }
    if (((char)uStack_318 == '\0') && (0 < (int)uVar19)) {
      bStack_388 = true;
      if (cVar7 == '\0') {
        load_supplier_0x543d60(auStack_108);
        load_supplier_0x70b20(param_2,"In ");
        load_supplier_0xbb2d0(param_2,auStack_108);
        load_supplier_0x70b20(param_2,", ");
        cStack_386 = '\x01';
      }
      bStack_388 = cVar7 != '\0';
      load_supplier_0x70800(puVar35 + 0xc,auStack_2b8);
      load_supplier_0x707f0(puVar35 + 0xc,&plStack_2d8);
      puVar21 = (undefined8 *)load_supplier_0x70800(puVar35 + 0x1e,auStack_258);
      uStack_350 = *puVar21;
      puVar21 = (undefined8 *)load_supplier_0x70800(puVar35 + 0x24,auStack_250);
      uStack_2c0 = *puVar21;
      puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_2b8,auStack_36e,&plStack_2d8);
      cVar7 = load_supplier_0x66d70(*puVar15,0);
      cVar5 = bStack_388;
      while (cVar7 != '\0') {
        iVar9 = (int)uVar19;
        piVar18 = (int *)load_supplier_0x703d0(&uStack_350);
        if (*piVar18 != -1) {
          piVar18 = (int *)load_supplier_0x703d0(auStack_2b8);
          puVar21 = (undefined8 *)load_supplier_0x707e0(lStack_2b0,(longlong)*piVar18);
          piVar18 = (int *)*puVar21;
          if (cVar5 == '\0') {
            pcVar29 = "each of the ";
            if (piVar18[4] < 2) {
              pcVar29 = "the ";
            }
            load_supplier_0x70b20(param_2,pcVar29);
          }
          else {
            pcVar29 = "Each of the ";
            if (piVar18[4] < 2) {
              pcVar29 = "The ";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            cVar5 = '\0';
          }
          if ((*(byte *)(piVar18 + 1) & 1) != 0) {
            load_supplier_0x70b20(param_2,"singer");
            pcVar29 = "s\'";
            if (piVar18[4] < 2) {
              pcVar29 = "\'s";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            load_supplier_0x70b20(param_2," voice");
            if (1 < piVar18[4]) {
              load_supplier_0x70b20(param_2,"s");
            }
          }
          if ((*(byte *)(piVar18 + 1) & 2) != 0) {
            load_supplier_0x70b20(param_2,"speaker");
            pcVar29 = "s\'";
            if (piVar18[4] < 2) {
              pcVar29 = "\'s";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            load_supplier_0x70b20(param_2," voice");
            if (1 < piVar18[4]) {
              load_supplier_0x70b20(param_2,"s");
            }
          }
          if ((*(byte *)(piVar18 + 1) & 4) != 0) {
            load_supplier_0x70b20(param_2,"chanter");
            pcVar29 = "s\'";
            if (piVar18[4] < 2) {
              pcVar29 = "\'s";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            load_supplier_0x70b20(param_2," voice");
            if (1 < piVar18[4]) {
              load_supplier_0x70b20(param_2,"s");
            }
          }
          iVar37 = *piVar18;
          if (iVar37 != -1) {
            if (piVar18[4] < 2) {
              plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)iVar37);
              lVar22 = *plVar16 + 0x68;
            }
            else {
              plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)iVar37);
              lVar22 = *plVar16 + 0x88;
            }
            load_supplier_0xbb2d0(param_2,lVar22);
          }
          load_supplier_0x70b20(param_2," ");
          piVar23 = (int *)load_supplier_0x703d0(&uStack_350);
          iVar37 = *piVar23;
          piVar23 = (int *)load_supplier_0x703d0(&uStack_2c0);
          iVar12 = *piVar23;
          iStack_314 = iVar12;
          if (*piVar18 == -1) {
            if (iVar37 == iVar12) {
              load_supplier_0x70b20(param_2,"stays in the ");
              if (iVar37 == 0) {
LAB_140decfd6:
                load_supplier_0x70b20(param_2,"low");
                goto LAB_140ded296;
              }
              if (iVar37 != 1) {
                if (iVar37 == 2) {
                  load_supplier_0x70b20(param_2,"high");
                }
                goto LAB_140ded296;
              }
LAB_140dece98:
              load_supplier_0x70b20(param_2,"middle");
              goto LAB_140ded296;
            }
            if ((iVar37 != 0) || (iVar12 != 2)) {
              load_supplier_0x70b20(param_2,"ranges from the ");
              if (iVar37 == 0) {
                pcVar29 = "low";
LAB_140decef8:
                load_supplier_0x70b20(param_2,pcVar29);
              }
              else {
                if (iVar37 == 1) {
                  pcVar29 = "middle";
                  goto LAB_140decef8;
                }
                if (iVar37 == 2) {
                  pcVar29 = "high";
                  goto LAB_140decef8;
                }
              }
              load_supplier_0x70b20(param_2," register to the ");
              if (iVar12 == 0) goto LAB_140decfd6;
              if (iVar12 != 1) {
                if (iVar12 == 2) {
                  load_supplier_0x70b20(param_2,"high");
                }
                goto LAB_140ded296;
              }
              goto LAB_140dece98;
            }
            pcVar29 = "covers its entire range";
LAB_140ded29d:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          else {
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
            plStack_348 = (longlong *)load_supplier_0x70410(*plVar16 + 0x248);
            if (iVar37 == iVar12) {
              iVar12 = (int)plStack_348;
              pcVar29 = "is confined to the ";
              if (iVar12 < 4) {
                pcVar29 = "stays in the ";
              }
              load_supplier_0x70b20(param_2,pcVar29);
              plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
              puVar21 = (undefined8 *)load_supplier_0x707e0(*plVar16 + 0x248,(longlong)iVar37);
              iVar11 = load_supplier_0xde77f0(*puVar21);
              if (iVar11 != -1) {
                load_timbre_selector(iVar11,param_2);
                load_supplier_0x70b20(param_2," ");
              }
              if (iVar37 == 0) goto LAB_140decfd6;
              if ((iVar37 == 1) && (2 < iVar12)) {
                load_supplier_0x70b20(param_2,"middle");
              }
              else if ((iVar37 == iVar12 + -1) && (3 < iVar12)) {
                load_supplier_0x70b20(param_2,"top");
              }
              else {
                load_supplier_0x70b20(param_2,"high");
              }
LAB_140ded296:
              pcVar29 = " register";
              goto LAB_140ded29d;
            }
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
            puVar21 = (undefined8 *)load_supplier_0x707e0(*plVar16 + 0x248,(longlong)iVar37);
            iVar9 = load_supplier_0xde77f0(*puVar21);
            plVar16 = (longlong *)load_supplier_0x707e0(0x142509178,(longlong)*piVar18);
            puVar21 = (undefined8 *)load_supplier_0x707e0(*plVar16 + 0x248,(longlong)iVar12);
            iVar11 = load_supplier_0xde77f0(*puVar21);
            iVar39 = (int)plStack_348 + -1;
            if ((iVar37 != 0) || (iVar12 != iVar39)) {
              if (iVar9 != iVar11) {
                if (iVar37 == 0) goto LAB_140ded188;
LAB_140ded1a2:
                load_supplier_0x70b20(param_2,"ranges from the ");
                goto LAB_140ded1b4;
              }
              load_supplier_0x70b20(param_2,"ranges from the ");
              if (iVar37 == 0) {
                pcVar29 = "low";
              }
              else if ((iVar37 == 1) && (2 < (int)plStack_348)) {
                pcVar29 = "middle";
              }
              else if ((iVar37 != iVar39) || (pcVar29 = "top", (int)plStack_348 < 4)) {
                pcVar29 = "high";
              }
              load_supplier_0x70b20(param_2,pcVar29);
              load_supplier_0x70b20(param_2," register to the ");
              if (iVar12 == 0) {
                pcVar29 = "low";
              }
              else {
                iVar9 = (int)plStack_348;
                if ((iVar12 == 1) && (2 < iVar9)) {
                  pcVar29 = "middle";
                }
                else {
                  if ((iVar12 != iVar9 + -1) || (iVar9 < 4)) goto LAB_140ded283;
                  pcVar29 = "top";
                }
              }
LAB_140ded28a:
              load_supplier_0x70b20(param_2,pcVar29);
              iVar9 = (int)uStack_2f8;
              goto LAB_140ded296;
            }
            if (iVar9 != iVar11) {
LAB_140ded188:
              if (iStack_314 != iVar39) goto LAB_140ded1a2;
              load_supplier_0x70b20(param_2,"covers its entire range from the ");
LAB_140ded1b4:
              if (iVar9 != -1) {
                load_timbre_selector(iVar9,param_2);
                load_supplier_0x70b20(param_2," ");
              }
              if (iVar37 == 0) {
                pcVar29 = "low";
              }
              else if ((iVar37 == 1) && (2 < (int)plStack_348)) {
                pcVar29 = "middle";
              }
              else if ((iVar37 != iVar39) || (pcVar29 = "top", (int)plStack_348 < 4)) {
                pcVar29 = "high";
              }
              load_supplier_0x70b20(param_2,pcVar29);
              load_supplier_0x70b20(param_2," register to the ");
              if (iVar11 != -1) {
                load_timbre_selector(iVar11,param_2);
                load_supplier_0x70b20(param_2," ");
              }
              if (iStack_314 == 0) {
                pcVar29 = "low";
              }
              else {
                iVar9 = (int)plStack_348;
                if ((iStack_314 == 1) && (2 < iVar9)) {
                  pcVar29 = "middle";
                }
                else if ((iStack_314 != iVar9 + -1) || (pcVar29 = "top", iVar9 < 4)) {
LAB_140ded283:
                  pcVar29 = "high";
                }
              }
              goto LAB_140ded28a;
            }
            load_supplier_0x70b20(param_2,"covers its entire range");
            iVar9 = (int)uStack_2f8;
          }
          if (iVar9 < 3) {
            if (iVar9 == 2) {
              pcVar29 = " and ";
              goto LAB_140ded2c1;
            }
          }
          else {
            pcVar29 = ", ";
LAB_140ded2c1:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          uVar19 = (ulonglong)(iVar9 - 1);
          uStack_2f8 = uVar19;
        }
        load_supplier_0x70910(auStack_2b8);
        load_supplier_0x70910(&uStack_350);
        load_supplier_0x70910(&uStack_2c0);
        puVar15 = (undefined1 *)load_supplier_0x703e0(auStack_2b8,auStack_36e,&plStack_2d8);
        cVar7 = load_supplier_0x66d70(*puVar15,0);
        puVar35 = puStack_308;
        cVar4 = cStack_387;
      }
      load_supplier_0x70b20(param_2);
    }
    iVar37 = iStack_300;
    cVar5 = cStack_386;
    iVar9 = (uint)uStack_368;
    if (((uint)uStack_368 != -1) || (iStack_300 != -1)) {
      if (cStack_386 == '\0') {
        load_supplier_0xbb2d0(param_2);
        cStack_386 = '\x01';
        cVar5 = '\x01';
      }
      else if ((int)puVar35[4] < 2) {
        load_supplier_0x70b20();
      }
      else {
        load_supplier_0x70b20();
      }
      if (iVar9 == -1) {
        if (iVar37 == -1) goto LAB_140ded589;
        load_supplier_0x70b20(param_2," has ");
        if (iVar37 == 0) {
          pcVar29 = "short phrases";
LAB_140ded56a:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        else {
          if (iVar37 == 1) {
            pcVar29 = "mid-length phrases";
            goto LAB_140ded56a;
          }
          if (iVar37 == 2) {
            pcVar29 = "long phrases";
            goto LAB_140ded56a;
          }
          if (iVar37 == 3) {
            pcVar29 = "phrases of varied length";
            goto LAB_140ded56a;
          }
        }
        load_supplier_0x70b20(param_2);
      }
      else {
        load_supplier_0x70b20(param_2," has ");
        if (iVar37 == -1) {
          if (iVar9 == 0) {
            pcVar29 = "short phrases";
LAB_140ded503:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          else {
            if (iVar9 == 1) {
              pcVar29 = "mid-length phrases";
              goto LAB_140ded503;
            }
            if (iVar9 == 2) {
              pcVar29 = "long phrases";
              goto LAB_140ded503;
            }
            if (iVar9 == 3) {
              pcVar29 = "phrases of varied length";
              goto LAB_140ded503;
            }
          }
          load_supplier_0x70b20(param_2);
        }
        else {
          if (iVar9 == iVar37) {
            if (iVar9 == 0) {
              load_supplier_0x70b20(param_2,"short phrases");
LAB_140ded421:
              pcVar29 = " in the melody and counterpoint";
            }
            else if (iVar9 == 1) {
              load_supplier_0x70b20(param_2,"mid-length phrases");
              pcVar29 = " in the melody and counterpoint";
            }
            else if (iVar9 == 2) {
              load_supplier_0x70b20(param_2,"long phrases");
              pcVar29 = " in the melody and counterpoint";
            }
            else {
              if (iVar9 != 3) goto LAB_140ded421;
              load_supplier_0x70b20(param_2,"phrases of varied length");
              pcVar29 = " in the melody and counterpoint";
            }
LAB_140ded4b2:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          else {
            if (iVar9 == 0) {
              pcVar29 = "short phrases";
LAB_140ded462:
              load_supplier_0x70b20(param_2,pcVar29);
            }
            else {
              if (iVar9 == 1) {
                pcVar29 = "mid-length phrases";
                goto LAB_140ded462;
              }
              if (iVar9 == 2) {
                pcVar29 = "long phrases";
                goto LAB_140ded462;
              }
              if (iVar9 == 3) {
                pcVar29 = "phrases of varied length";
                goto LAB_140ded462;
              }
            }
            load_supplier_0x70b20(param_2," in the melody, while the counterpoint has ");
            if (iVar37 == 0) {
              pcVar29 = "short phrases";
              goto LAB_140ded4b2;
            }
            if (iVar37 == 1) {
              pcVar29 = "mid-length phrases";
              goto LAB_140ded4b2;
            }
            if (iVar37 == 2) {
              pcVar29 = "long phrases";
              goto LAB_140ded4b2;
            }
            if (iVar37 == 3) {
              pcVar29 = "phrases of varied length";
              goto LAB_140ded4b2;
            }
          }
          load_supplier_0x70b20(param_2);
        }
      }
    }
LAB_140ded589:
    uVar10 = puVar35[0x2e];
    if ((((uVar10 == 0) || (uVar10 == 1)) || (uVar10 == 2)) || ((uVar10 == 3 || (uVar10 == 4)))) {
      load_supplier_0x70b20(param_2);
    }
    cVar8 = cStack_385;
    cVar7 = cStack_387;
    if (((puVar35[7] != 0xffffffff) || (cStack_385 == '\0')) ||
       ((puVar35[9] != 0xffffffff || (cStack_387 == '\0')))) {
      if (cVar5 == '\0') {
        load_supplier_0xbb2d0(param_2,auStack_108);
        cStack_386 = '\x01';
        cVar5 = '\x01';
      }
      else if ((int)puVar35[4] < 2) {
        load_supplier_0x70b20(param_2,"The passage");
      }
      else {
        load_supplier_0x70b20(param_2,"Each passage");
      }
      load_supplier_0x70b20(param_2," is performed ");
      if (puVar35[7] == 0xffffffff) {
        if (cVar8 == '\0') {
          pcVar29 = "without preference for a scale";
LAB_140ded6d4:
          load_supplier_0x70b20(param_2,pcVar29);
        }
      }
      else {
        lVar22 = FUN_140073b30(0x1425042d8);
        if ((lVar22 != 0) && (-1 < (int)puVar35[8])) {
          uVar19 = load_supplier_0x70410(lVar22 + 0x90);
          if ((ulonglong)(longlong)(int)puVar35[8] < uVar19) {
            load_supplier_0x70b20(param_2,"using the ");
            plVar16 = (longlong *)load_supplier_0x707e0(lVar22 + 0x90,(longlong)(int)puVar35[8]);
            load_supplier_0xbb2d0(param_2,*plVar16 + 8);
            pcVar29 = " scale";
            goto LAB_140ded6d4;
          }
        }
      }
      if ((puVar35[9] != 0xffffffff) || (cVar7 == '\0')) {
        if ((puVar35[7] != 0xffffffff) || (pcVar29 = "in ", cVar8 == '\0')) {
          pcVar29 = " and in ";
        }
        load_supplier_0x70b20(param_2,pcVar29);
        if (puVar35[9] == 0xffffffff) {
          if (cVar7 != '\0') goto LAB_140ded7bf;
          pcVar29 = "free rhythm";
        }
        else {
          load_supplier_0x70b20(param_2,"the ");
          lVar22 = FUN_140073b30(0x142504308,puVar35[9]);
          if (lVar22 != 0) {
            if ((int)puVar35[10] < 0) {
LAB_140ded77e:
              if (-1 < (int)puVar35[0xb]) {
                uVar10 = puVar35[0xb];
                uVar19 = load_supplier_0x70410(lVar22 + 8);
                if ((ulonglong)(longlong)(int)uVar10 < uVar19) {
                  puVar21 = (undefined8 *)load_supplier_0x707e0(lVar22 + 8,(longlong)(int)uVar10);
                  goto LAB_140ded7a5;
                }
              }
            }
            else {
              uVar10 = puVar35[10];
              uVar19 = load_supplier_0x70410(lVar22 + 0x20);
              if (uVar19 <= (ulonglong)(longlong)(int)uVar10) goto LAB_140ded77e;
              puVar21 = (undefined8 *)load_supplier_0x707e0(lVar22 + 0x20,(longlong)(int)uVar10);
LAB_140ded7a5:
              load_supplier_0xbb2d0(param_2,*puVar21);
            }
          }
          pcVar29 = " rhythm";
        }
        load_supplier_0x70b20(param_2,pcVar29);
      }
LAB_140ded7bf:
      load_supplier_0x70b20(param_2);
    }
    if (puVar35[0x2d] != 0) {
      if (cVar5 == '\0') {
        load_supplier_0xbb2d0(param_2,auStack_108);
        cStack_386 = '\x01';
      }
      else if ((int)puVar35[4] < 2) {
        load_supplier_0x70b20(param_2,"The passage");
      }
      else {
        load_supplier_0x70b20(param_2,"Each passage");
      }
      pcVar29 = " should be composed and performed using ";
      if ((*(byte *)(lStack_2f0 + 0x120) & 1) == 0) {
        pcVar29 = " should be performed using ";
      }
      load_supplier_0x70b20(param_2,pcVar29);
      cVar5 = cStack_386;
      iVar9 = 0;
      uVar33 = 0;
      uVar10 = uStack_380;
      do {
        if (uVar33 < 0x10) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar33) {
          case 0:
            uStack_380 = 1;
            uVar10 = 1;
            break;
          case 1:
            uStack_380 = 2;
            uVar10 = 2;
            break;
          case 2:
            uStack_380 = 4;
            uVar10 = 4;
            break;
          case 3:
            uStack_380 = 8;
            uVar10 = 8;
            break;
          case 4:
            uStack_380 = 0x10;
            uVar10 = 0x10;
            break;
          case 5:
            uStack_380 = 0x80;
            uVar10 = 0x80;
            break;
          case 6:
            uStack_380 = 0x100;
            uVar10 = 0x100;
            break;
          case 7:
            uStack_380 = 0x200;
            uVar10 = 0x200;
            break;
          case 8:
            uStack_380 = 0x400;
            uVar10 = 0x400;
            break;
          case 9:
            uStack_380 = 0x800;
            uVar10 = 0x800;
            break;
          case 10:
            uStack_380 = 0x1000;
            uVar10 = 0x1000;
            break;
          case 0xb:
            uStack_380 = 0x2000;
            uVar10 = 0x2000;
            break;
          case 0xc:
            uStack_380 = 0x4000;
            uVar10 = 0x4000;
            break;
          case 0xd:
            uStack_380 = 0x8000;
            uVar10 = 0x8000;
            break;
          case 0xe:
            uStack_380 = 0x20;
            uVar10 = 0x20;
            break;
          case 0xf:
            uStack_380 = 0x40;
            uVar10 = 0x40;
          }
        }
        if ((puVar35[0x2d] & uVar10) != 0) {
          iVar9 = iVar9 + 1;
        }
        uVar33 = uVar33 + 1;
      } while ((int)uVar33 < 0x10);
      uVar33 = 0;
      uVar10 = uStack_37c;
      do {
        if (uVar33 < 0x10) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar33) {
          case 0:
            uVar10 = 1;
            break;
          case 1:
            uVar10 = 2;
            break;
          case 2:
            uVar10 = 4;
            break;
          case 3:
            uVar10 = 8;
            break;
          case 4:
            uVar10 = 0x10;
            break;
          case 5:
            uVar10 = 0x80;
            break;
          case 6:
            uVar10 = 0x100;
            break;
          case 7:
            uVar10 = 0x200;
            break;
          case 8:
            uVar10 = 0x400;
            break;
          case 9:
            uVar10 = 0x800;
            break;
          case 10:
            uVar10 = 0x1000;
            break;
          case 0xb:
            uVar10 = 0x2000;
            break;
          case 0xc:
            uVar10 = 0x4000;
            break;
          case 0xd:
            uVar10 = 0x8000;
            break;
          case 0xe:
            uVar10 = 0x20;
            break;
          case 0xf:
            uVar10 = 0x40;
          }
        }
        if ((puVar35[0x2d] & uVar10) != 0) {
          if (uVar10 < 0x101) {
            if (uVar10 == 0x100) {
              pcVar29 = "syncopation";
              goto LAB_140dedb09;
            }
            if (uVar10 - 1 < 0x80) {
                    /* WARNING: Switch is manually overridden */
              switch((&UNK_140defde4)[uVar10 - 1]) {
              case 0:
                pcVar29 = "glides";
                break;
              case 1:
                pcVar29 = "grace notes";
                break;
              case 2:
                pcVar29 = "mordents";
                break;
              case 3:
                pcVar29 = "trills";
                break;
              case 4:
                pcVar29 = "rapid runs";
                break;
              case 5:
                pcVar29 = "melismatic phrasing";
                break;
              case 6:
                pcVar29 = "syllabic phrasing";
                break;
              case 7:
                pcVar29 = "locally improvisation";
                break;
              case 8:
                goto override_jmp_140deda27_case_2;
              }
              goto LAB_140dedb09;
            }
          }
          else {
            if (uVar10 < 0x1001) {
              if (uVar10 == 0x1000) {
                pcVar29 = "arpeggios";
              }
              else if (uVar10 == 0x200) {
                pcVar29 = "fills";
              }
              else if (uVar10 == 0x400) {
                pcVar29 = "alternation between tension and repose";
              }
              else {
                if (uVar10 != 0x800) goto override_jmp_140deda27_case_2;
                pcVar29 = "frequent modulation";
              }
            }
            else if (uVar10 == 0x2000) {
              pcVar29 = "staccato";
            }
            else if (uVar10 == 0x4000) {
              pcVar29 = "legato";
            }
            else {
              if (uVar10 != 0x8000) goto override_jmp_140deda27_case_2;
              pcVar29 = "free adjustment of the beats";
            }
LAB_140dedb09:
            load_supplier_0x70b20(param_2,pcVar29);
          }
override_jmp_140deda27_case_2:
          if (iVar9 < 3) {
            if (iVar9 == 2) {
              pcVar29 = " and ";
              goto LAB_140dedb2d;
            }
          }
          else {
            pcVar29 = ", ";
LAB_140dedb2d:
            load_supplier_0x70b20(param_2,pcVar29);
          }
          iVar9 = iVar9 + -1;
        }
        uVar33 = uVar33 + 1;
      } while ((int)uVar33 < 0x10);
      uStack_37c = uVar10;
      FUN_140070fd0(param_2,".  ",3);
      cVar4 = cStack_387;
    }
    if (*(longlong *)(puVar35 + 0x32) - *(longlong *)(puVar35 + 0x30) >> 3 != 0) {
      if (cVar5 == '\0') {
        load_supplier_0xbb2d0(param_2,auStack_108);
      }
      else if ((int)puVar35[4] < 2) {
        load_supplier_0x70b20(param_2,"The passage");
      }
      else {
        load_supplier_0x70b20(param_2,"Each passage");
      }
      load_supplier_0x70b20(param_2," should ");
      puVar24 = (uint *)load_supplier_0x70410(puVar35 + 0x30);
      puStack_308 = puVar24;
      load_supplier_0x70800(puVar35 + 0x30,&plStack_310);
      load_supplier_0x707f0(puVar35 + 0x30,&plStack_278);
      while( true ) {
        iVar9 = (int)puVar24;
        if (plStack_310 == plStack_278) break;
        cVar5 = '\x01';
        if (plStack_310 < plStack_278) {
          cVar5 = -1;
        }
        if (-1 < cVar5) break;
        plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
        iVar37 = *(int *)(*plVar16 + 4);
        if (iVar37 == 0) {
          pcVar29 = "always";
LAB_140dedc5a:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        else {
          if (iVar37 == 1) {
            pcVar29 = "often";
            goto LAB_140dedc5a;
          }
          if (iVar37 == 2) {
            pcVar29 = "sometimes";
            goto LAB_140dedc5a;
          }
        }
        load_supplier_0x70b20(param_2," include a ");
        puVar21 = (undefined8 *)load_supplier_0x703d0(&plStack_310);
        iVar37 = *(int *)*puVar21;
        if (iVar37 == 0) {
          pcVar29 = "rising";
LAB_140dedcb4:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        else {
          if (iVar37 == 1) {
            pcVar29 = "falling";
            goto LAB_140dedcb4;
          }
          if (iVar37 == 2) {
            pcVar29 = "rising-falling";
            goto LAB_140dedcb4;
          }
          if (iVar37 == 3) {
            pcVar29 = "falling-rising";
            goto LAB_140dedcb4;
          }
        }
        load_supplier_0x70b20(param_2," melody pattern");
        plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
        lVar22 = load_supplier_0x70410(*plVar16 + 8);
        if (lVar22 != 0) {
          load_supplier_0x70b20(param_2," with ");
          plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
          iVar37 = load_supplier_0x70410(*plVar16 + 8);
          plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
          load_supplier_0x70800(*plVar16 + 8,&puStack_360);
          plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
          load_supplier_0x707f0(*plVar16 + 8);
          while( true ) {
            if (puStack_360 == puStack_2d0) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\x01';
              if (puStack_360 < puStack_2d0) {
                cVar5 = -1;
              }
            }
            if (-1 < cVar5) break;
            plVar16 = (longlong *)load_supplier_0x703d0(&puStack_360);
            if ((*(byte *)(*plVar16 + 4) & 2) != 0) {
              load_supplier_0x70b20(param_2,"flattened");
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&puStack_360);
            if ((*(byte *)(*plVar16 + 4) & 4) != 0) {
              load_supplier_0x70b20(param_2,"sharpened");
            }
            load_supplier_0x70b20(param_2," ");
            load_supplier_0x69750(auStack_e8,cVar4);
            load_supplier_0x71140(auStack_e8);
            load_ordinal(*(undefined4 *)*puStack_360,auStack_e8,0);
            load_supplier_0x543d60(auStack_e8);
            load_supplier_0xbb2d0(param_2,auStack_e8);
            load_supplier_0x70b20(param_2);
            puVar21 = (undefined8 *)load_supplier_0x703d0(&plStack_310);
            if ((*(int *)*puVar21 == 2) ||
               (puVar21 = (undefined8 *)load_supplier_0x703d0(&plStack_310), *(int *)*puVar21 == 3))
            {
              load_supplier_0x703d0(&puStack_360);
              load_supplier_0x70b20(param_2);
            }
            if ((2 < iVar37) || (iVar37 == 2)) {
              load_supplier_0x70b20(param_2);
            }
            load_supplier_0x693f0(auStack_e8);
            puStack_360 = puStack_360 + 1;
            iVar37 = iVar37 + -1;
          }
        }
        uVar10 = uStack_358;
        if (*(int *)(*plStack_310 + 0x20) != 0) {
          plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
          lVar22 = load_supplier_0x70410(*plVar16 + 8);
          pcVar29 = " as well as ";
          if (lVar22 == 0) {
            pcVar29 = " with ";
          }
          load_supplier_0x70b20(param_2,pcVar29);
          uVar32 = 0;
          uVar33 = uStack_354;
          uVar10 = uVar32;
          uVar30 = uVar32;
          do {
            if (uVar10 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar10) {
              case 0:
                uVar33 = 1;
                break;
              case 1:
                uVar33 = 2;
                break;
              case 2:
                uVar33 = 4;
                break;
              case 3:
                uVar33 = 8;
                break;
              case 4:
                uVar33 = 0x10;
                break;
              case 5:
                uVar33 = 0x1000;
                break;
              case 6:
                uVar33 = 0x2000;
                break;
              case 7:
                uVar33 = 0x4000;
              }
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
            param_2 = uStack_2e0;
            if ((*(uint *)(*plVar16 + 0x20) & uVar33) != 0) {
              uVar30 = uVar30 + 1;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < 8);
          iVar9 = (int)puStack_308;
          uVar10 = uStack_358;
          uStack_354 = uVar33;
          do {
            if (uVar32 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar32) {
              case 0:
                uVar10 = 1;
                break;
              case 1:
                uVar10 = 2;
                break;
              case 2:
                uVar10 = 4;
                break;
              case 3:
                uVar10 = 8;
                break;
              case 4:
                uVar10 = 0x10;
                break;
              case 5:
                uVar10 = 0x1000;
                break;
              case 6:
                uVar10 = 0x2000;
                break;
              case 7:
                uVar10 = 0x4000;
              }
            }
            plVar16 = (longlong *)load_supplier_0x703d0(&plStack_310);
            if ((*(uint *)(*plVar16 + 0x20) & uVar10) != 0) {
              if (uVar10 < 0x11) {
                if (uVar10 == 0x10) {
                  pcVar29 = "rapid runs";
                }
                else if (uVar10 == 1) {
                  pcVar29 = "glides";
                }
                else if (uVar10 == 2) {
                  pcVar29 = "grace notes";
                }
                else if (uVar10 == 4) {
                  pcVar29 = "mordents";
                }
                else {
                  if (uVar10 != 8) goto LAB_140dee057;
                  pcVar29 = "trills";
                }
LAB_140dee04f:
                load_supplier_0x70b20(param_2,pcVar29);
              }
              else {
                if (uVar10 == 0x1000) {
                  pcVar29 = "arpeggios";
                  goto LAB_140dee04f;
                }
                if (uVar10 == 0x2000) {
                  pcVar29 = "staccato";
                  goto LAB_140dee04f;
                }
                if (uVar10 == 0x4000) {
                  pcVar29 = "legato";
                  goto LAB_140dee04f;
                }
              }
LAB_140dee057:
              if ((int)uVar30 < 3) {
                if (uVar30 == 2) {
                  pcVar29 = " and ";
                  goto LAB_140dee073;
                }
              }
              else {
                pcVar29 = ", ";
LAB_140dee073:
                load_supplier_0x70b20(param_2,pcVar29);
              }
              uVar30 = uVar30 - 1;
            }
            uVar32 = uVar32 + 1;
            cVar4 = cStack_387;
          } while ((int)uVar32 < 8);
        }
        uStack_358 = uVar10;
        if (iVar9 < 3) {
          if (iVar9 == 2) {
            pcVar29 = " and ";
            goto LAB_140dee0ae;
          }
        }
        else {
          pcVar29 = ", ";
LAB_140dee0ae:
          load_supplier_0x70b20(param_2,pcVar29);
        }
        load_supplier_0x703c0(&plStack_310);
        puVar24 = (uint *)(ulonglong)(iVar9 - 1);
        puStack_308 = puVar24;
      }
      load_supplier_0x70b20(param_2);
    }
    FUN_140070e10(auStack_108);
LAB_140dee0e7:
    plStack_2e8 = plStack_2e8 + 1;
  }
  load_supplier_0x670c0(auStack_230);
  lVar22 = lStack_2f0;
  iVar9 = -1;
  iStack_314 = -1;
  iVar37 = load_supplier_0x70410(lStack_2f0 + 0x88);
  if (-1 < iVar37) {
    plVar16 = (longlong *)(lVar22 + 0x88);
    plStack_2d8 = plVar16;
    do {
      if (iVar9 == -1) {
        iVar37 = *(int *)(lVar22 + 0xfc);
      }
      else {
        plVar25 = (longlong *)load_supplier_0x707e0(plVar16,(longlong)iVar9);
        iVar37 = *(int *)(*plVar25 + 0x1c);
      }
      iStack_338 = iVar37;
      if ((iVar37 != -1) && (iVar12 = FUN_1400bb530(iVar37,auStack_230), iVar12 == -1)) {
        FUN_1400bb430(iVar37,auStack_230);
        lVar22 = FUN_140073b30(0x1425042d8,iVar37);
        if (lVar22 != 0) {
          load_supplier_0x70b20(param_2,"[B]");
          iVar9 = *(int *)(lVar22 + 8);
          if (iVar9 == 0) {
            load_supplier_0x70b20(param_2,"Scales are constructed from ");
            load_supplier_0x70c50(&uStack_a8);
            load_cardinal(*(undefined4 *)(lVar22 + 0x70),&uStack_a8);
            load_supplier_0xbb2d0(param_2,&uStack_a8);
            load_supplier_0x70b20(param_2," notes spaced evenly throughout the octave.  ");
            puVar21 = &uStack_a8;
LAB_140dee36f:
            load_supplier_0x693f0(puVar21);
          }
          else if (iVar9 == 1) {
            load_supplier_0x70b20(param_2,"Scales are constructed from ");
            load_supplier_0x70c50(&uStack_a8);
            load_cardinal(*(undefined4 *)(lVar22 + 0x70),&uStack_a8);
            load_supplier_0xbb2d0(param_2,&uStack_a8);
            load_supplier_0x70b20(param_2," notes dividing the octave.  ");
            load_supplier_0x70b20(param_2,"In quartertones, their spacing is roughly ");
            uStack_70 = 0x2d2d2d2d2d2d2d2d;
            uStack_68 = 0x2d2d2d2d2d2d2d2d;
            uStack_78 = 0x2d2d2d2d2d2d2d31;
            uStack_60 = CONCAT71(uStack_60._1_7_,0x4f);
            if (1 < (longlong)*(int *)(lVar22 + 0x70)) {
              piVar18 = (int *)(lVar22 + 0x10);
              lVar17 = (longlong)*(int *)(lVar22 + 0x70) + -1;
              do {
                *(undefined1 *)((longlong)&uStack_78 + (longlong)*piVar18) = 0x78;
                piVar18 = piVar18 + 1;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            lVar17 = 0;
            do {
              FUN_1400bb140(param_2,*(undefined1 *)((longlong)&uStack_78 + lVar17));
              lVar17 = lVar17 + 1;
            } while (lVar17 < 0x19);
            FUN_140070fd0(param_2,
                          ", where 1 is the tonic, O marks the octave and x marks other notes.  ",
                          0x45);
            FUN_140070e10(&uStack_a8);
          }
          else if (iVar9 == 2) {
            load_supplier_0x70b20
                      (param_2,
                       "Scales are conceived of as two chords built using a division of the perfect fourth interval into "
                      );
            load_supplier_0x70c50(auStack_128);
            load_cardinal(*(undefined4 *)(lVar22 + 0x70),auStack_128);
            load_supplier_0xbb2d0(param_2,auStack_128);
            load_supplier_0x70b20(param_2," notes.  ");
            puVar21 = auStack_128;
            goto LAB_140dee36f;
          }
          iVar9 = 0;
          pcVar29 = "The tonic note is fixed only at the time of performance.  ";
          if ((*(byte *)(lVar22 + 4) & 1) == 0) {
            pcVar29 = "The tonic note is a fixed tone passed from teacher to student.  ";
          }
          load_supplier_0x70b20(param_2,pcVar29);
          iVar12 = *(int *)(lVar22 + 0xa8);
          if ((iVar12 != -1) && (0 < *(int *)(lVar22 + 0x754))) {
            if (iVar12 == 0) {
              pcVar29 = "Every note is named.  ";
LAB_140dee3fc:
              load_supplier_0x70b20(param_2,pcVar29);
            }
            else {
              if (iVar12 == 1) {
                if (*(int *)(lVar22 + 0x754) == 1) {
                  pcVar29 = "A single note in the fundamental scale is named.  ";
                }
                else {
                  pcVar29 = "Preferred notes in the fundamental scale are named.  ";
                }
                goto LAB_140dee3fc;
              }
              if (iVar12 == 2) {
                pcVar29 = "After a scale is constructed, notes are named according to degree.  ";
                goto LAB_140dee3fc;
              }
              if (iVar12 == 3) {
                pcVar29 = "After a scale is constructed, the root note of chords are named.  ";
                goto LAB_140dee3fc;
              }
            }
            pcVar29 = "It is called ";
            if (*(int *)(lVar22 + 0x754) != 1) {
              pcVar29 = "The names are ";
            }
            load_supplier_0x70b20(param_2,pcVar29);
            if (0 < *(int *)(lVar22 + 0x754)) {
              puVar26 = (undefined4 *)(lVar22 + 0x6f0);
              do {
                load_supplier_0xbb2d0(param_2,(longlong)iVar9 * 0x20 + 0xb0 + lVar22);
                load_supplier_0x70b20(param_2," (");
                if (iVar9 == 0) {
                  load_supplier_0x70b20(param_2,"spoken ");
                }
                load_supplier_0xbb2d0(param_2,lVar22 + 0x3d0 + (longlong)iVar9 * 0x20);
                if (*(int *)(lVar22 + 0xa8) == 1) {
                  load_supplier_0x70b20(param_2,", ");
                  load_supplier_0x70c50(&uStack_a8);
                  load_ordinal(*puVar26,&uStack_a8,1);
                  load_supplier_0xbb2d0(param_2,&uStack_a8);
                  load_supplier_0x693f0(&uStack_a8);
                }
                load_supplier_0x70b20(param_2,")");
                if (iVar9 <= *(int *)(lVar22 + 0x754) + -3) {
                  load_supplier_0x70b20(param_2,", ");
                }
                if (iVar9 == *(int *)(lVar22 + 0x754) + -2) {
                  load_supplier_0x70b20(param_2," and ");
                }
                iVar9 = iVar9 + 1;
                puVar26 = puVar26 + 1;
                plVar16 = plStack_2d8;
                iVar37 = iStack_338;
              } while (iVar9 < *(int *)(lVar22 + 0x754));
            }
            load_supplier_0x70b20(param_2,".  ");
          }
          load_supplier_0x670c0(auStack_108);
          load_supplier_0x670c0(auStack_e8);
          iVar9 = -1;
          uStack_368 = CONCAT44(uStack_368._4_4_,0xffffffff);
          if (-1 < (int)(plVar16[1] - *plVar16 >> 3)) {
            do {
              if (iVar9 == -1) {
                if (*(int *)(lStack_2f0 + 0xfc) == iVar37) {
                  iVar12 = *(int *)(lStack_2f0 + 0x100);
LAB_140dee5db:
                  if ((iVar12 != -1) && (iVar11 = FUN_1400bb530(iVar12,auStack_108), iVar11 == -1))
                  {
                    FUN_1400bb430(iVar12,auStack_108);
                    puVar21 = (undefined8 *)load_supplier_0x707e0(lVar22 + 0x90,(longlong)iVar12);
                    piVar18 = (int *)*puVar21;
                    load_supplier_0x70b20(param_2,"[B]");
                    pcVar29 = "As always, the ";
                    if (*(int *)(lVar22 + 8) != 2) {
                      pcVar29 = "The ";
                    }
                    load_supplier_0x70b20(param_2,pcVar29);
                    load_supplier_0xbb2d0(param_2,piVar18 + 2);
                    if (*piVar18 == 0) {
                      iVar9 = piVar18[0x11];
LAB_140dee6a7:
                      load_supplier_0x70b20(param_2," ");
                      if (iVar9 == 5) {
                        pcVar29 = "pentatonic";
                        goto LAB_140dee6f2;
                      }
                      if (iVar9 == 6) {
                        pcVar29 = "hexatonic";
                        goto LAB_140dee6f2;
                      }
                      if (iVar9 == 7) goto LAB_140dee6eb;
                    }
                    else {
                      if ((piVar18[0x12] != -1) && (piVar18[0x13] != -1)) {
                        plVar16 = (longlong *)
                                  load_supplier_0x707e0(lVar22 + 0x78,(longlong)piVar18[0x12]);
                        iVar9 = *(int *)(*plVar16 + 0x34);
                        plVar16 = (longlong *)
                                  load_supplier_0x707e0(lVar22 + 0x78,(longlong)piVar18[0x13]);
                        iVar9 = iVar9 + (*(int *)(*plVar16 + 0x34) - ((*piVar18 == 1) + 1));
                        goto LAB_140dee6a7;
                      }
                      load_supplier_0x70b20(param_2," ");
LAB_140dee6eb:
                      pcVar29 = "heptatonic";
LAB_140dee6f2:
                      load_supplier_0x70b20(param_2,pcVar29);
                    }
                    load_supplier_0x70b20(param_2," scale is ");
                    iVar9 = *piVar18;
                    if (iVar9 == 0) {
                      load_supplier_0x70b20
                                (param_2,
                                 "constructed by selection of degrees from the fundamental scale.  The degrees selected are "
                                );
                      iVar9 = 0;
                      if (0 < piVar18[0x11]) {
                        piVar23 = piVar18 + 10;
                        do {
                          load_supplier_0x70b20(param_2,"the ");
                          load_supplier_0x70c50(&uStack_a8);
                          load_ordinal(*piVar23 + 1,&uStack_a8,1);
                          load_supplier_0xbb2d0(param_2,&uStack_a8);
                          if (iVar9 <= piVar18[0x11] + -3) {
                            load_supplier_0x70b20(param_2,", ");
                          }
                          if (iVar9 == piVar18[0x11] + -2) {
                            load_supplier_0x70b20(param_2," and ");
                          }
                          load_supplier_0x693f0(&uStack_a8);
                          iVar9 = iVar9 + 1;
                          piVar23 = piVar23 + 1;
                        } while (iVar9 < piVar18[0x11]);
                      }
                    }
                    else if (iVar9 == 1) {
                      load_supplier_0x70b20
                                (param_2,
                                 "thought of as joined chords spanning a perfect fifth and a perfect fourth"
                                );
                    }
                    else if (iVar9 == 2) {
                      load_supplier_0x70b20
                                (param_2,
                                 "thought of as two disjoint chords spanning a perfect fifth and a major third"
                                );
                    }
                    else if (iVar9 == 3) {
                      load_supplier_0x70b20
                                (param_2,
                                 "thought of as two disjoint chords spanning a tritone and a perfect fourth"
                                );
                    }
                    else if (iVar9 == 4) {
                      if (*(int *)(lVar22 + 8) == 2) {
                        load_supplier_0x70b20
                                  (param_2,
                                   "thought of as two disjoint chords drawn from the fundamental division of the perfect fourth"
                                  );
                      }
                      else {
                        load_supplier_0x70b20
                                  (param_2,
                                   "thought of as two disjoint chords spanning two perfect fourths")
                        ;
                      }
                    }
                    load_supplier_0x70b20(param_2,".  ");
                    if ((piVar18[0x12] != -1) && (piVar18[0x13] != -1)) {
                      load_supplier_0x70b20(param_2,"These chords are named ");
                      puVar21 = (undefined8 *)
                                load_supplier_0x707e0(lVar22 + 0x78,(longlong)piVar18[0x12]);
                      load_supplier_0xbb2d0(param_2,*puVar21);
                      load_supplier_0x70b20(param_2," and ");
                      puVar21 = (undefined8 *)
                                load_supplier_0x707e0(lVar22 + 0x78,(longlong)piVar18[0x13]);
                      load_supplier_0xbb2d0(param_2,*puVar21);
                      load_supplier_0x70b20(param_2,".  ");
                    }
                    load_supplier_0x670c0(&uStack_78);
                    if (piVar18[0x12] != -1) {
                      load_supplier_0x709d0(&uStack_78,piVar18 + 0x12);
                    }
                    if (piVar18[0x13] != -1) {
                      load_supplier_0x709d0(&uStack_78);
                    }
                    load_supplier_0x70800(&uStack_78,&puStack_360);
                    load_supplier_0x707f0(&uStack_78,&puStack_2d0);
                    for (; puStack_360 != puStack_2d0;
                        puStack_360 = (undefined8 *)((longlong)puStack_360 + 4)) {
                      cVar4 = '\x01';
                      if (puStack_360 < puStack_2d0) {
                        cVar4 = -1;
                      }
                      if (-1 < cVar4) break;
                      puVar26 = (undefined4 *)load_supplier_0x703d0(&puStack_360);
                      iVar9 = FUN_1400bb530(*puVar26,auStack_e8);
                      if (iVar9 == -1) {
                        puVar26 = (undefined4 *)load_supplier_0x703d0(&puStack_360);
                        FUN_1400bb430(*puVar26,auStack_e8);
                        piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
                        plVar16 = (longlong *)
                                  load_supplier_0x707e0(lVar22 + 0x78,(longlong)*piVar18);
                        lVar17 = *plVar16;
                        load_supplier_0x70b20(param_2,"[B]The ");
                        load_supplier_0xbb2d0(param_2,lVar17);
                        load_supplier_0x70b20(param_2," ");
                        iVar9 = *(int *)(lVar17 + 0x34);
                        if (iVar9 == 3) {
                          pcVar29 = "trichord";
LAB_140dee9f4:
                          load_supplier_0x70b20(param_2,pcVar29);
                        }
                        else {
                          if (iVar9 == 4) {
                            pcVar29 = "tetrachord";
                            goto LAB_140dee9f4;
                          }
                          if (iVar9 == 5) {
                            pcVar29 = "pentachord";
                            goto LAB_140dee9f4;
                          }
                        }
                        load_supplier_0x70b20(param_2," is ");
                        iVar9 = 0;
                        if (0 < *(int *)(lVar17 + 0x34)) {
                          piVar18 = (int *)(lVar17 + 0x20);
                          do {
                            FUN_140070fd0(param_2,"the ",4);
                            load_supplier_0x69750(auStack_128,auStack_36e[0]);
                            load_supplier_0x71140(auStack_128);
                            load_ordinal(*piVar18 + 1,auStack_128,1);
                            load_supplier_0xbb2d0(param_2,auStack_128);
                            if ((*(int *)(lVar22 + 8) == 0) && (*piVar18 == *(int *)(lVar22 + 0x70))
                               ) {
                              load_supplier_0x70b20(param_2," (completing the octave)");
                            }
                            if (*(int *)(lVar17 + 0x34) + -3 < iVar9) {
                              if (iVar9 == *(int *)(lVar17 + 0x34) + -2) {
                                pcVar29 = " and ";
                                goto LAB_140deeab6;
                              }
                            }
                            else {
                              pcVar29 = ", ";
LAB_140deeab6:
                              load_supplier_0x70b20(param_2,pcVar29);
                            }
                            FUN_140070e10(auStack_128);
                            iVar9 = iVar9 + 1;
                            piVar18 = piVar18 + 1;
                          } while (iVar9 < *(int *)(lVar17 + 0x34));
                        }
                        FUN_140070fd0(param_2," ",1);
                        iVar9 = *(int *)(lVar22 + 8);
                        if (iVar9 == 0) {
                          pcVar29 = "degrees of the semitone octave scale";
                          if (*(int *)(lVar22 + 0x70) != 0xc) {
                            pcVar29 = "degrees of the quartertone octave scale";
                          }
LAB_140deeb26:
                          load_supplier_0x70b20(param_2,pcVar29);
                        }
                        else {
                          if (iVar9 == 1) {
                            pcVar29 = "degrees of the octave scale";
                            goto LAB_140deeb26;
                          }
                          if (iVar9 == 2) {
                            pcVar29 = "degrees of the fundamental perfect fourth division";
                            goto LAB_140deeb26;
                          }
                        }
                        FUN_140070fd0(param_2,".  ",3);
                      }
                    }
                    load_supplier_0x670e0(&uStack_78);
                    plVar16 = plStack_2d8;
                    iVar37 = iStack_338;
                    iVar9 = (uint)uStack_368;
                  }
                }
              }
              else {
                plVar25 = (longlong *)load_supplier_0x707e0(plVar16,(longlong)iVar9);
                if (*(int *)(*plVar25 + 0x1c) == iVar37) {
                  plVar25 = (longlong *)load_supplier_0x707e0(plVar16,(longlong)iVar9);
                  iVar12 = *(int *)(*plVar25 + 0x20);
                  goto LAB_140dee5db;
                }
              }
              iVar9 = iVar9 + 1;
              uStack_368 = CONCAT44(uStack_368._4_4_,iVar9);
            } while (iVar9 < (int)(plVar16[1] - *plVar16 >> 3));
          }
          load_supplier_0x670e0(auStack_e8);
          load_supplier_0x670e0(auStack_108);
          iVar9 = iStack_314;
        }
      }
      iVar9 = iVar9 + 1;
      iStack_314 = iVar9;
      iVar37 = load_supplier_0x70410(plVar16);
      lVar22 = lStack_2f0;
    } while (iVar9 < iVar37);
  }
  load_supplier_0x670c0(auStack_248);
  iVar9 = -1;
  iStack_314 = -1;
  iVar37 = load_supplier_0x70410(lVar22 + 0x88);
  if (-1 < iVar37) {
    lVar22 = lVar22 + 0x88;
    lStack_280 = lVar22;
    cVar4 = bStack_388;
    do {
      if (iVar9 == -1) {
        iVar37 = *(int *)(lStack_2f0 + 0x104);
      }
      else {
        plVar16 = (longlong *)load_supplier_0x707e0(lVar22,(longlong)iVar9);
        iVar37 = *(int *)(*plVar16 + 0x24);
      }
      iStack_338 = iVar37;
      if ((iVar37 != -1) && (iVar12 = FUN_1400bb530(iVar37,auStack_248), iVar12 == -1)) {
        FUN_1400bb430(iVar37,auStack_248);
        lVar17 = FUN_140073b30(0x142504308,iVar37);
        lStack_320 = lVar17;
        if (lVar17 != 0) {
          if ((*(byte *)(lVar17 + 0x38) & 1) != 0) {
            load_supplier_0x70b20
                      (param_2,
                       "[B]The rhythm system is fundamentally polyrhythmic.  There are always multiple rhythm lines, and each of their bars is played over the same period of time, regardless of the number of beats.  The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named.  "
                      );
          }
          if ((*(byte *)(lVar17 + 0x38) & 2) != 0) {
            load_supplier_0x70b20
                      (param_2,
                       "[B]The rhythm system is fundamentally polymetric.  There are always multiple rhythm lines, and the beats are always played together, even if one rhythm line completes (and then repeats) before the other is finished.  The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named.  "
                      );
          }
          load_supplier_0x670c0(auStack_e8);
          load_supplier_0x670c0(auStack_108);
          uVar10 = 0xffffffff;
          uStack_318 = 0xffffffff;
          iVar12 = load_supplier_0x70410(lVar22);
          if (-1 < iVar12) {
            do {
              if (uVar10 == 0xffffffff) {
                uVar10 = 0xffffffff;
                if (*(int *)(lStack_2f0 + 0x104) == iVar37) {
                  iVar9 = *(int *)(lStack_2f0 + 0x108);
                  uVar13 = *(undefined4 *)(lStack_2f0 + 0x10c);
LAB_140deed34:
                  uStack_368 = CONCAT44(uStack_368._4_4_,uVar13);
                  if (iVar9 != -1) {
                    iVar12 = FUN_1400bb530(iVar9,auStack_e8);
                    iVar37 = iStack_338;
                    if (iVar12 != -1) goto LAB_140def69d;
                    FUN_1400bb430(iVar9,auStack_e8);
                  }
                  load_supplier_0x670c0(&uStack_78);
                  if ((uint)uStack_368 != -1) {
                    load_supplier_0x709d0(&uStack_78,&uStack_368);
                  }
                  if (iVar9 != -1) {
                    puVar21 = (undefined8 *)load_supplier_0x707e0(lVar17 + 0x20,(longlong)iVar9);
                    puVar21 = (undefined8 *)*puVar21;
                    puStack_2d0 = puVar21;
                    load_supplier_0x70b20(param_2,"[B]The ");
                    load_supplier_0xbb2d0(param_2,puVar21);
                    load_supplier_0x70b20(param_2," rhythm is made from ");
                    load_supplier_0x70c50(&uStack_a8);
                    uVar27 = load_supplier_0x70930(puVar21 + 4);
                    load_cardinal(uVar27,&uStack_a8);
                    load_supplier_0xbb2d0(param_2,&uStack_a8);
                    load_supplier_0x693f0(&uStack_a8);
                    load_supplier_0x70b20(param_2," patterns: ");
                    bVar36 = false;
                    bVar40 = false;
                    iVar37 = -1;
                    iVar9 = load_supplier_0x70930(puVar21 + 4);
                    load_supplier_0x70800(puVar21 + 4,&puStack_360);
                    load_supplier_0x707f0(puVar21 + 4,auStack_2a0);
                    load_supplier_0x70800(puVar21 + 7,&lStack_2b0);
                    load_supplier_0x707f0(puVar21 + 7,auStack_250);
                    puVar15 = (undefined1 *)
                              load_supplier_0x703e0(&puStack_360,auStack_383,auStack_2a0);
                    cVar5 = load_supplier_0x66d70(*puVar15,0);
                    if (cVar5 != '\0') {
                      lVar22 = lStack_320 + 8;
                      do {
                        load_supplier_0x70b20(param_2,"the ");
                        piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
                        puVar21 = (undefined8 *)load_supplier_0x707e0(lVar22,(longlong)*piVar18);
                        load_supplier_0xbb2d0(param_2,*puVar21);
                        pbVar28 = (byte *)load_supplier_0x703d0(&lStack_2b0);
                        if ((*pbVar28 & 1) != 0) {
                          load_supplier_0x70b20(param_2," (considered the primary)");
                        }
                        if (iVar9 < 3) {
                          if (iVar9 == 2) {
                            pcVar29 = " and ";
                            goto LAB_140deef08;
                          }
                        }
                        else {
                          pcVar29 = ", ";
LAB_140deef08:
                          load_supplier_0x70b20(param_2,pcVar29);
                        }
                        iVar12 = 0;
                        piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
                        plVar16 = (longlong *)load_supplier_0x707e0(lVar22,(longlong)*piVar18);
                        load_supplier_0x70800(*plVar16 + 0x20,&uStack_2e0);
                        piVar18 = (int *)load_supplier_0x703d0(&puStack_360);
                        plVar16 = (longlong *)load_supplier_0x707e0(lVar22,(longlong)*piVar18);
                        load_supplier_0x707f0(*plVar16 + 0x20,&plStack_2d8);
                        puVar15 = (undefined1 *)
                                  load_supplier_0x703e0(&uStack_2e0,auStack_36e,&plStack_2d8);
                        cVar4 = load_supplier_0x66d70(*puVar15,0);
                        while (cVar4 != '\0') {
                          plVar16 = (longlong *)load_supplier_0x703d0(&uStack_2e0);
                          iVar12 = iVar12 + *(int *)(*plVar16 + 8);
                          load_supplier_0x703c0(&uStack_2e0);
                          puVar15 = (undefined1 *)
                                    load_supplier_0x703e0(&uStack_2e0,auStack_36e,&plStack_2d8);
                          cVar4 = load_supplier_0x66d70(*puVar15,0);
                        }
                        iVar11 = iVar12;
                        if ((iVar37 != -1) && (iVar11 = iVar37, bVar40 = bVar36, iVar37 != iVar12))
                        {
                          bVar36 = true;
                          bVar40 = true;
                        }
                        iVar37 = iVar11;
                        uVar27 = load_supplier_0x703d0(&puStack_360);
                        load_supplier_0x709d0(&uStack_78,uVar27);
                        load_supplier_0x70910(&puStack_360);
                        load_supplier_0x70910(&lStack_2b0);
                        iVar9 = iVar9 + -1;
                        puVar15 = (undefined1 *)
                                  load_supplier_0x703e0(&puStack_360,auStack_383,auStack_2a0);
                        cVar5 = load_supplier_0x66d70(*puVar15,0);
                        puVar21 = puStack_2d0;
                        cVar4 = bStack_388;
                      } while (cVar5 != '\0');
                    }
                    load_supplier_0x70b20(param_2,".  ");
                    lVar17 = lStack_320;
                    if (bVar40) {
                      if ((*(uint *)(lStack_320 + 0x38) & 1) == 0) {
                        if ((*(uint *)(lStack_320 + 0x38) & 2) == 0) {
                          pcVar29 = 
                          "The patterns are to be played in the same beat, allowing one to repeat before the other is concluded.  "
                          ;
                          if ((*(byte *)(puVar21 + 10) & 1) == 0) {
                            pcVar29 = 
                            "The patterns are to be played over the same period of time, concluding together regardless of beat number.  "
                            ;
                          }
                        }
                        else {
                          pcVar29 = "As stated above, they are to be played in polymeter.  ";
                        }
                      }
                      else {
                        pcVar29 = "As stated above, they are to be played in polyrhythm.  ";
                      }
                      load_supplier_0x70b20(param_2,pcVar29);
                    }
                  }
                  load_supplier_0x70800(&uStack_78,&uStack_350);
                  load_supplier_0x707f0(&uStack_78,auStack_2a8);
                  puVar15 = (undefined1 *)load_supplier_0x703e0(&uStack_350,&uStack_370,auStack_2a8)
                  ;
                  cVar5 = load_supplier_0x66d70(*puVar15,0);
                  while (cVar5 != '\0') {
                    puVar26 = (undefined4 *)load_supplier_0x703d0(&uStack_350);
                    iVar9 = FUN_1400bb530(*puVar26,auStack_108);
                    if (iVar9 == -1) {
                      puVar26 = (undefined4 *)load_supplier_0x703d0(&uStack_350);
                      FUN_1400bb430(*puVar26,auStack_108);
                      piVar18 = (int *)load_supplier_0x703d0(&uStack_350);
                      plVar16 = (longlong *)load_supplier_0x707e0(lVar17 + 8,(longlong)*piVar18);
                      lVar22 = *plVar16;
                      iVar9 = 0;
                      load_supplier_0x70800(lVar22 + 0x20,&plStack_348);
                      load_supplier_0x707f0(lVar22 + 0x20,&plStack_330);
                      for (; plStack_348 != plStack_330; plStack_348 = plStack_348 + 1) {
                        cVar5 = '\x01';
                        if (plStack_348 < plStack_330) {
                          cVar5 = -1;
                        }
                        if (-1 < cVar5) break;
                        iVar9 = iVar9 + *(int *)(*plStack_348 + 8);
                      }
                      FUN_140070fd0(param_2,"[B]The ",7);
                      load_supplier_0xbb2d0(param_2,lVar22);
                      FUN_140070fd0(param_2," rhythm is a single line with ",0x1e);
                      load_supplier_0x69750(auStack_128,cVar4);
                      load_supplier_0x71140(auStack_128);
                      load_cardinal(iVar9,auStack_128);
                      load_supplier_0xbb2d0(param_2,auStack_128);
                      FUN_140070e10(auStack_128);
                      FUN_140070fd0(param_2," beats",6);
                      if (1 < (ulonglong)
                              (*(longlong *)(lVar22 + 0x28) - *(longlong *)(lVar22 + 0x20) >> 3)) {
                        load_supplier_0x70b20(param_2," divided into ");
                        load_supplier_0x70c50(&uStack_a8);
                        uVar27 = load_supplier_0x70410(lVar22 + 0x20);
                        load_cardinal(uVar27,&uStack_a8);
                        load_supplier_0xbb2d0(param_2,&uStack_a8);
                        load_supplier_0x693f0(&uStack_a8);
                        load_supplier_0x70b20(param_2," bars in a ");
                        iVar9 = 0;
                        load_supplier_0x70800(lVar22 + 0x20,&plStack_340);
                        load_supplier_0x707f0(lVar22 + 0x20,&plStack_278);
                        while (plStack_340 != plStack_278) {
                          cVar5 = '\x01';
                          if (plStack_340 < plStack_278) {
                            cVar5 = -1;
                          }
                          if (-1 < cVar5) break;
                          plVar16 = (longlong *)load_supplier_0x703d0(&plStack_340);
                          FUN_140542fb0(*(undefined4 *)(*plVar16 + 8),param_2);
                          lVar17 = load_supplier_0x70410(lVar22 + 0x20);
                          if ((longlong)iVar9 != lVar17 + -1) {
                            load_supplier_0x70b20(param_2,"-");
                          }
                          load_supplier_0x703c0(&plStack_340);
                          iVar9 = iVar9 + 1;
                        }
                        load_supplier_0x70b20(param_2," pattern");
                      }
                      iVar9 = 0;
                      FUN_140070fd0(param_2,".  ",3);
                      if (0 < *(int *)(lVar22 + 0x48)) {
                        load_supplier_0x70b20(param_2,"The beats are named ");
                        if (0 < *(int *)(lVar22 + 0x48)) {
                          do {
                            load_supplier_0xbb2d0
                                      (param_2,*(longlong *)(lVar22 + 0x38) + (longlong)iVar9 * 0x20
                                      );
                            load_supplier_0x70b20(param_2," (");
                            if (iVar9 == 0) {
                              load_supplier_0x70b20(param_2,"spoken ");
                            }
                            load_supplier_0xbb2d0
                                      (param_2,*(longlong *)(lVar22 + 0x40) + (longlong)iVar9 * 0x20
                                      );
                            load_supplier_0x70b20(param_2,")");
                            iVar37 = *(int *)(lVar22 + 0x48) + -2;
                            if (iVar9 < iVar37) {
                              pcVar29 = ", ";
LAB_140def3d3:
                              load_supplier_0x70b20(param_2,pcVar29);
                            }
                            else if (iVar9 == iVar37) {
                              pcVar29 = " and ";
                              goto LAB_140def3d3;
                            }
                            iVar9 = iVar9 + 1;
                          } while (iVar9 < *(int *)(lVar22 + 0x48));
                        }
                        load_supplier_0x70b20(param_2,".  ");
                      }
                      load_supplier_0x70b20(param_2,"The beat is stressed as follows:");
                      load_supplier_0x70b20(param_2,"[B]");
                      bVar40 = false;
                      bVar36 = false;
                      cVar5 = '\0';
                      cStack_385 = '\0';
                      bStack_388 = false;
                      cStack_384 = '\0';
                      load_supplier_0x70b20(param_2,"| ");
                      puVar21 = (undefined8 *)load_supplier_0x70800(lVar22 + 0x20,auStack_258);
                      plStack_348 = (longlong *)*puVar21;
                      puVar15 = (undefined1 *)
                                load_supplier_0x703e0(&plStack_348,&uStack_36f,&plStack_330);
                      cVar8 = load_supplier_0x66d70(*puVar15,0);
                      cVar7 = '\0';
                      if (cVar8 != '\0') {
                        bVar40 = false;
                        do {
                          plVar16 = (longlong *)load_supplier_0x703d0(&plStack_348);
                          uVar19 = 0;
                          uVar34 = 0;
                          if (0 < *(int *)(*plVar16 + 8)) {
                            do {
                              puVar21 = (undefined8 *)load_supplier_0x703d0(&plStack_348);
                              uVar10 = *(uint *)(uVar19 + *(longlong *)*puVar21);
                              uVar33 = uVar10 & 3;
                              if (uVar33 == 3) {
                                load_supplier_0x70b20(param_2,"!");
                                bVar40 = true;
                              }
                              else if (uVar33 == 1) {
                                load_supplier_0x70b20(param_2,"X");
                                bVar36 = true;
                              }
                              else if (uVar33 == 2) {
                                load_supplier_0x70b20(param_2,"x");
                              }
                              else {
                                load_supplier_0x70b20(param_2,"-");
                                cStack_384 = '\x01';
                              }
                              if ((uVar10 & 4) == 0) {
                                if ((uVar10 & 8) == 0) {
                                  load_supplier_0x70b20(param_2," ");
                                }
                                else {
                                  load_supplier_0x70b20(param_2,"\'");
                                  bStack_388 = true;
                                }
                              }
                              else {
                                load_supplier_0x70b20(param_2,"`");
                                cStack_385 = '\x01';
                              }
                              cVar5 = cStack_385;
                              uVar10 = (int)uVar34 + 1;
                              plVar16 = (longlong *)load_supplier_0x703d0(&plStack_348);
                              uVar19 = uVar19 + 4;
                              uVar34 = (ulonglong)uVar10;
                            } while ((int)uVar10 < *(int *)(*plVar16 + 8));
                          }
                          load_supplier_0x70b20(param_2,"| ");
                          load_supplier_0x703c0(&plStack_348);
                          puVar15 = (undefined1 *)
                                    load_supplier_0x703e0(&plStack_348,&uStack_36f,&plStack_330);
                          cVar8 = load_supplier_0x66d70(*puVar15,0);
                          cVar7 = bStack_388;
                          cVar4 = bStack_388;
                        } while (cVar8 != '\0');
                      }
                      load_supplier_0x70b20(param_2,"[B]where ");
                      if (bVar40) {
                        load_supplier_0x70b20(param_2,"! marks the primary accent, ");
                      }
                      if (bVar36) {
                        load_supplier_0x70b20(param_2,"X marks an accented beat, ");
                      }
                      if (cVar5 != '\0') {
                        load_supplier_0x70b20(param_2,"` marks a beat as early, ");
                      }
                      if (cVar7 != '\0') {
                        load_supplier_0x70b20(param_2,"\' marks a beat as late, ");
                      }
                      load_supplier_0x70b20(param_2,"x is a beat");
                      if (cStack_384 != '\0') {
                        load_supplier_0x70b20(param_2,", - is silent");
                      }
                      load_supplier_0x70b20(param_2," and | indicates a bar.  ");
                    }
                    load_supplier_0x70910(&uStack_350);
                    puVar15 = (undefined1 *)
                              load_supplier_0x703e0(&uStack_350,&uStack_370,auStack_2a8);
                    cVar5 = load_supplier_0x66d70(*puVar15,0);
                    lVar17 = lStack_320;
                  }
                  load_supplier_0x670e0(&uStack_78);
                  lVar22 = lStack_280;
                  lVar17 = lStack_320;
                  iVar37 = iStack_338;
                  uVar10 = uStack_318;
                }
              }
              else {
                lVar20 = (longlong)(int)uVar10;
                plVar16 = (longlong *)load_supplier_0x707e0(lVar22,lVar20);
                uVar10 = uStack_318;
                if (*(int *)(*plVar16 + 0x24) == iVar37) {
                  plVar16 = (longlong *)load_supplier_0x707e0(lVar22,lVar20);
                  iVar9 = *(int *)(*plVar16 + 0x28);
                  plVar16 = (longlong *)load_supplier_0x707e0(lVar22,lVar20);
                  uVar13 = *(undefined4 *)(*plVar16 + 0x2c);
                  uVar10 = uStack_318;
                  goto LAB_140deed34;
                }
              }
LAB_140def69d:
              uVar10 = uVar10 + 1;
              uStack_318 = uVar10;
              iVar12 = load_supplier_0x70410(lVar22);
              iVar9 = iStack_314;
            } while ((int)uVar10 < iVar12);
          }
          load_supplier_0x670e0(auStack_108);
          load_supplier_0x670e0(auStack_e8);
        }
      }
      iVar9 = iVar9 + 1;
      iStack_314 = iVar9;
      iVar37 = load_supplier_0x70410(lVar22);
    } while (iVar9 < iVar37);
  }
  load_supplier_0x670e0(auStack_248);
  load_supplier_0x670e0(auStack_230);
  load_supplier_0x693f0(auStack_c8);
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_3b8);
  return;
}

