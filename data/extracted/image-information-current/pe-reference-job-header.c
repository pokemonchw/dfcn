/* reference PE:6aea05a1:02734000; job-header; RVA 0xd1afa0..0xd1fbe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_job_header(undefined8 param_1,undefined8 *param_2,ushort param_3,short param_4,
                     short param_5,short param_6,int param_7,undefined8 *param_8,uint param_9,
                     int param_10,uint param_11,longlong param_12,undefined8 param_13,int param_14,
                     int param_15)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong ****pppplVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong ***ppplVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_338 [32];
  uint uStack_318;
  undefined1 uStack_310;
  undefined2 uStack_308;
  short sStack_2f8;
  short sStack_2f6;
  longlong ***ppplStack_2f0;
  undefined8 uStack_2e8;
  longlong **pplStack_2e0;
  ulonglong uStack_2d8;
  undefined1 auStack_2d0 [32];
  undefined8 ***pppuStack_2b0;
  longlong lStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  undefined8 ***apppuStack_290 [2];
  undefined8 uStack_280;
  ulonglong uStack_278;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_338;
  sStack_2f8 = param_5;
  uVar22 = (ulonglong)param_10;
  uVar21 = (ulonglong)param_14;
  uVar24 = (ulonglong)param_15;
  uStack_2e8 = 0;
  iVar6 = 0;
  pplStack_2e0 = (longlong **)0x0;
  uStack_2d8 = 0xf;
  ppplStack_2f0 = (longlong ***)0x0;
  param_2[2] = 0;
  puVar13 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar13 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar13 = 0;
  puVar13 = _DAT_1425196e8;
  sStack_2f6 = param_4;
  if (0xf7 < param_3) goto override_jmp_140d1b05a_case_133;
                    /* WARNING: Switch is manually overridden */
  switch(param_3) {
  case 0:
    pcVar15 = "Carve fortification";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 1:
    pcVar15 = "Smooth wall";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 2:
    pcVar15 = "Smooth floor";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 3:
    pcVar15 = "Detail wall";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 4:
    pcVar15 = "Detail floor";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 5:
    pcVar15 = "Dig";
    ppplVar19 = (longlong ***)0x3;
    break;
  case 6:
    pcVar15 = "Carve upward staircase";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 7:
    pcVar15 = "Carve downward staircase";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 8:
    pcVar15 = "Carve up/down staircase";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 9:
    pcVar15 = "Carve ramp";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 10:
    pcVar15 = "Dig channel";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xb:
    pcVar15 = "Fell tree";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xc:
    pcVar15 = "Gather plants";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xd:
    pcVar15 = "Remove construction";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xe:
    pcVar15 = "Collect webs";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xf:
    pcVar15 = "Bring item to depot";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x10:
    pcVar15 = "Bring item to shop";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x11:
    pcVar15 = "Eat";
    ppplVar19 = (longlong ***)0x3;
    break;
  case 0x12:
    pcVar15 = "Get provisions";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x13:
  case 0x14:
    pcVar15 = "Drink";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x15:
  case 0x16:
    pcVar15 = "Fill waterskin";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x17:
    pcVar15 = "Sleep";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x18:
    pcVar15 = "Collect sand";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x19:
    pcVar15 = "Fish";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x1a:
    pcVar15 = "Hunt";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x1b:
    pcVar15 = "Hunt for small creature";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x1c:
    pcVar15 = "Kidnap";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x1d:
    pcVar15 = "Beat criminal";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x1e:
    pcVar15 = "Starting fist fight";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x1f:
    pcVar15 = "Collect taxes";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x20:
    pcVar15 = "Guard tax collector";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x21:
    pcVar15 = "Catch live land animal";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0x22:
    pcVar15 = "Catch live fish";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x23:
    pcVar15 = "Return kill";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x24:
    pcVar15 = "Store owned item";
    goto LAB_140d1fb5c;
  case 0x25:
    pcVar15 = "Place item in tomb";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x26:
    pcVar15 = "Store item in stockpile";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x27:
    pcVar15 = "Store item in bag";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x28:
    pcVar15 = "Store item in location";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0x29:
    pcVar15 = "Store weapon";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x2a:
    pcVar15 = "Store armor";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x2b:
    pcVar15 = "Store item in barrel";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0x2c:
    pcVar15 = "Store item in bin";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x2d:
    pcVar15 = "Seek artifact";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x2e:
    pcVar15 = "Seek infant";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x2f:
  case 0x30:
    pcVar15 = "Go shopping";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x31:
    pcVar15 = "Clean";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x32:
    pcVar15 = "Rest";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x33:
    pcVar15 = "Pickup equipment";
    goto LAB_140d1fb5c;
  case 0x34:
    pcVar15 = "Dump item";
    ppplVar19 = (longlong ***)0x9;
    break;
  default:
    pcVar15 = "Strange mood";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x42:
    pcVar15 = "Construct building";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x43:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " Portal";
        ppplVar19 = (longlong ***)0x7;
        break;
      }
    }
    pcVar15 = " door";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x44:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " floodgate";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x45:
    FUN_140071040(param_2,"Make",4);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 3) == 0)) {
      load_supplier_0x70b90(param_2," ");
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      load_supplier_0xbb340(param_2,&ppplStack_2f0);
    }
    pcVar15 = " bed";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x46:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      load_supplier_0x70b90(param_2," throne");
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " chair";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x47:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      cVar5 = FUN_141475150(0x1423f3970,0x2f,param_6,param_7);
      if (cVar5 == '\0') {
        load_supplier_0x70b90(param_2," coffin");
      }
      else {
        load_supplier_0x70b90(param_2," sarcophagus");
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " casket";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x48:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " table";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x49:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " box";
        ppplVar19 = (longlong ***)0x4;
        break;
      }
    }
    if ((param_6 == 0) && (cVar5 = FUN_141475150(0x1423f3970,0x2f,0,param_7), cVar5 == '\0')) {
      load_supplier_0x70b90(param_2," coffer");
    }
    else {
      load_supplier_0x70b90(param_2," chest");
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x4a:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bag";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x4b:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bin";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x4c:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " armor stand";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x4d:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " weapon rack";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x4e:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " cabinet";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0x4f:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " statue";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x50:
    FUN_140071040(param_2,"Make ",5);
    if ((param_11 & 2) == 0) {
      lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 8) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 0x10) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_140d1c852;
      }
    }
    else {
LAB_140d1c852:
      FUN_140071040(param_2,"four ",5);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " blocks";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x51:
    FUN_140071040(param_2,"Make raw ",9);
    goto LAB_140d1c3a5;
  case 0x52:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crafts";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x53:
    FUN_140071040(param_2,"Mint ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " coins";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x54:
    if (param_6 == -1) {
      pcVar15 = "Cut gems";
      ppplVar19 = (longlong ***)0x8;
    }
    else {
      FUN_140071040(param_2,"Cut ",4);
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pcVar15 = (char *)&ppplStack_2f0;
      ppplVar19 = (longlong ***)pplStack_2e0;
      if (0xf < uStack_2d8) {
        pcVar15 = (char *)ppplStack_2f0;
      }
    }
    break;
  case 0x55:
    if (param_6 != -1) {
      uVar18 = 4;
      pcVar15 = "Cut ";
LAB_140d1c399:
      FUN_140071040(param_2,pcVar15,uVar18);
      goto LAB_140d1c3a5;
    }
    pcVar15 = "Cut raw glass into gems";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x56:
    FUN_140071040(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,"ammo",4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d1c3a5;
    pcVar15 = "cut gems";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0x57:
    FUN_140071040(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,"ammo",4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d1c3a5;
    pcVar15 = "cut glass";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0x58:
    pcVar15 = "Destroy building";
    goto LAB_140d1fb5c;
  case 0x59:
    FUN_140071040(param_2,"Smelt ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ore";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x5a:
    pcVar15 = "Melt a metal object";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x5b:
    pcVar15 = "Extract metal strands";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x5c:
    pcVar15 = "Plant seeds";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x5d:
    pcVar15 = "Harvest plants";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x5e:
    FUN_140071040(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_90);
            FUN_141349540(lVar7,auStack_90,0);
            load_supplier_0xbb340(param_2,auStack_90);
            load_supplier_0x70b90(param_2," to hunt");
            FUN_140070e80(auStack_90);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "hunting animal";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x5f:
    FUN_140071040(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_70);
            FUN_141349540(lVar7,auStack_70,0);
            load_supplier_0xbb340(param_2,auStack_70);
            load_supplier_0x70b90(param_2," for war");
            FUN_140070e80(auStack_70);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "war animal";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x60:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e557:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e557;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250efa8 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x61:
    FUN_140071040(param_2,"Forge ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " anvil";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x62:
    FUN_140071040(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " catapult parts";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 99:
    FUN_140071040(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " ballista parts";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 100:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e416:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e416;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x19,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f290 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x65:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e12e:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e12e;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1c,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f320 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x66:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e26f:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e26f;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x3c,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f338 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x67:
    FUN_140071040(param_2,"Stud with ",10);
    goto LAB_140d1c3a5;
  case 0x68:
    pcVar15 = "Butcher an animal";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x69:
    pcVar15 = "Prepare a raw fish";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x6a:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Mill ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Mill plants";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x6b:
    FUN_140071040(param_2,"Bait trap with ",0xf);
    if (sStack_2f6 == 0x2c) {
      load_supplier_0x70b90(param_2,"gem");
    }
    else if (sStack_2f6 == 0x30) {
      load_supplier_0x70b90(param_2,"meat");
    }
    else if (sStack_2f6 == 0x31) {
      load_supplier_0x70b90(param_2,"fish");
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x6c:
    FUN_140071040(param_2,"Milk ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xe) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_270);
            FUN_141349540(lVar7,auStack_270,0);
            load_supplier_0xbb340(param_2,auStack_270);
            FUN_140070e80(auStack_270);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b246;
  case 0x6d:
    pcVar15 = "Make cheese";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x6e:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Process ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Process plants";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x6f:
    if (param_6 != -1) {
      uVar18 = 7;
      pcVar15 = "Polish ";
      goto LAB_140d1c399;
    }
    pcVar15 = "Polish stones";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x70:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Process ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      load_supplier_0x70b90(param_2," (vial)");
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Process plants (vial)";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x71:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Process ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      load_supplier_0x70b90(param_2," (barrel)");
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Process plants (barrel)";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x72:
    if (param_6 == 2) {
      load_supplier_0x70b90(param_2,"Prepare easy meal");
    }
    else if (param_6 == 3) {
      load_supplier_0x70b90(param_2,"Prepare fine meal");
    }
    else if (param_6 == 4) {
      load_supplier_0x70b90(param_2,"Prepare lavish meal");
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x73:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1f5e2:
      if ((param_6 == 0) && (param_7 == -1)) goto LAB_140d1f5ec;
      if ((param_11 & 8) == 0) {
        pcVar15 = "Weave yarn into cloth";
        if ((param_11 >> 0xc & 1) == 0) {
          pcVar15 = "Weave thread into cloth";
        }
      }
      else {
        pcVar15 = "Weave thread into silk";
      }
      load_supplier_0x70b90(param_2,pcVar15);
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1f5e2;
LAB_140d1f5ec:
      FUN_140071040(param_2,"Weave metal cloth",0x11);
    }
    if (param_9 == 0) goto override_jmp_140d1b05a_case_133;
    pcVar15 = " (dyed only)";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x74:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d183:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d183;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"pair of ",8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1d,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_14250f2d8 + (longlong)sVar3 * 8);
    goto LAB_140d1d281;
  case 0x75:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d300:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d300;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"pair of ",8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1a,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_14250f2f0 + (longlong)sVar3 * 8);
    pcVar15 = (char *)(lVar7 + 0x88);
    ppplVar19 = *(longlong ****)(lVar7 + 0x98);
    if (0xf < *(ulonglong *)(lVar7 + 0xa0)) {
      pcVar15 = (char *)*(longlong *****)(lVar7 + 0x88);
    }
    break;
  case 0x76:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d46b:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d46b;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f308 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x77:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d548:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d548;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " terrarium";
        ppplVar19 = (longlong ***)0xa;
        break;
      }
    }
    pcVar15 = " cage";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x78:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d652:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d652;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((param_11 & 2) == 0) {
      if ((((param_11 & 8) == 0) && (199 < (ushort)(param_6 - 0x1a3U))) &&
         ((param_11 & 0x1015) == 0)) {
        load_supplier_0x70b90(param_2," chain");
        goto override_jmp_140d1b05a_case_133;
      }
      pcVar15 = " rope";
      ppplVar19 = (longlong ***)0x5;
    }
    else {
      pcVar15 = " chain";
      ppplVar19 = (longlong ***)0x6;
    }
    break;
  case 0x79:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d75e:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d75e;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"three ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((param_11 & 0x10) == 0) {
      lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 7) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          load_supplier_0x70b90(param_2," vials");
          goto override_jmp_140d1b05a_case_133;
        }
      }
      load_supplier_0x70b90(param_2," flasks");
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " waterskins";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x7a:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d898:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d898;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"three ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      if ((param_6 == 0) && (cVar5 = FUN_141475150(0x1423f3970,0x2f,0,param_7), cVar5 == '\0')) {
        load_supplier_0x70b90(param_2," mugs");
      }
      else {
        load_supplier_0x70b90(param_2," goblets");
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " cups";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x7b:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1dbc5:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1dbc5;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " toy";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x7c:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1dc85:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1dc85;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " animal trap";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x7d:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1dd45:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1dd45;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " barrel";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x7e:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1df0f:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1df0f;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bucket";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x7f:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " window";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x80:
    pcVar15 = "Make totem";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x81:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e786:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e786;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    if ((param_11 & 0x20) == 0) {
      uVar18 = 0xc;
      pcVar15 = "twenty-five ";
    }
    else {
      uVar18 = 5;
      pcVar15 = "five ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_14250f2a8 + (longlong)sStack_2f8 * 8);
LAB_140d1d281:
    pppplVar16 = (longlong ****)(lVar7 + 0x88);
    goto LAB_140d1d288;
  case 0x82:
    FUN_140071040(param_2,"Decorate with ",0xe);
LAB_140d1c3a5:
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pcVar15 = (char *)&ppplStack_2f0;
    ppplVar19 = (longlong ***)pplStack_2e0;
    if (0xf < uStack_2d8) {
      pcVar15 = (char *)ppplStack_2f0;
    }
    break;
  case 0x83:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " backpack";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0x84:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " quiver";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x85:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e634:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e634;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ballista arrow head";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0x86:
    FUN_140071040(param_2,"Assemble ",9);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f2c0 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x87:
    pcVar15 = "Load catapult";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x88:
    pcVar15 = "Load ballista";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x89:
    pcVar15 = "Fire catapult";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x8a:
    pcVar15 = "Fire ballista";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x8b:
    FUN_140071040(param_2,"Make",4);
    FUN_140071040(param_2," ",1);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " mechanisms";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x8c:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e91a:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e91a;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    lVar8 = (longlong)sStack_2f8;
    lVar7 = *(longlong *)(lVar8 * 8 + _DAT_14250efc0);
    if (*(longlong *)(lVar7 + 0xb8) != 0) {
      puVar13 = (undefined8 *)(lVar7 + 0xa8);
      if (0xf < *(ulonglong *)(lVar7 + 0xc0)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_140071040(param_2,puVar13,*(undefined8 *)(lVar7 + 0xb8));
      FUN_140071040(param_2," ",1);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(lVar8 * 8 + _DAT_14250efc0) + 0x68);
    goto LAB_140d1d288;
  case 0x8d:
    pcVar15 = "Load cage trap";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x8e:
    pcVar15 = "Load stone trap";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x8f:
    pcVar15 = "Load weapon trap";
    goto LAB_140d1fb5c;
  case 0x90:
    pcVar15 = "Clean trap";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x91:
    FUN_140071040(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,"ammo",4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d1c3a5;
    pcVar15 = "polished stones";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x92:
    pcVar15 = "Link a building to trigger";
    ppplVar19 = (longlong ***)0x1a;
    break;
  case 0x93:
    pcVar15 = "Pull the lever";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x94:
    goto override_jmp_140d1b05a_case_133;
  case 0x95:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Extract from ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Extract from plants";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x96:
    pcVar15 = "Extract from raw fish";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x97:
    pcVar15 = "Extract from land animal";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0x98:
    pcVar15 = "Tame a small animal";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x99:
    FUN_140071040(param_2,"Tame ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_f0);
            FUN_141349540(lVar7,auStack_f0,0);
            load_supplier_0xbb340(param_2,auStack_f0);
            FUN_140070e80(auStack_f0);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    goto LAB_140d1b5de;
  case 0x9a:
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70b90(param_2,"Chain ");
            load_supplier_0x70cc0(auStack_170);
            FUN_141349540(lVar7,auStack_170,0);
            load_supplier_0xbb340(param_2,auStack_170);
            FUN_140070e80(auStack_170);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    pcVar15 = "Put in chains";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x9b:
    FUN_140071040(param_2,"Unchain",7);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70b90(param_2," ");
            load_supplier_0x70cc0(auStack_110);
            FUN_141349540(lVar7,auStack_110,0);
            load_supplier_0xbb340(param_2,auStack_110);
            FUN_140070e80(auStack_110);
          }
          break;
        }
      }
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x9c:
    pcVar15 = "Unchain pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x9d:
    FUN_140071040(param_2,"Release ",8);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_1f0);
            FUN_141349540(lVar7,auStack_1f0,0);
            load_supplier_0xbb340(param_2,auStack_1f0);
            FUN_140070e80(auStack_1f0);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0x9e:
    pcVar15 = "Release pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x9f:
    pcVar15 = "Release small creature";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0xa0:
    pcVar15 = "Handle small creature";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xa1:
    FUN_140071040(param_2,"Handle ",7);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_230);
            FUN_141349540(lVar7,auStack_230,0);
            load_supplier_0xbb340(param_2,auStack_230);
            FUN_140070e80(auStack_230);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0xa2:
    FUN_140071040(param_2,"Cage ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_1d0);
            FUN_141349540(lVar7,auStack_1d0,0);
            load_supplier_0xbb340(param_2,auStack_1d0);
            FUN_140070e80(auStack_1d0);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0xa3:
    pcVar15 = "Cage small animal";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xa4:
    pcVar15 = "Recover wounded";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0xa5:
    pcVar15 = "Diagnose patient";
    goto LAB_140d1fb5c;
  case 0xa6:
    pcVar15 = "Immobilize break";
    goto LAB_140d1fb5c;
  case 0xa7:
    pcVar15 = "Dress wound";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xa8:
    pcVar15 = "Clean patient";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xa9:
    pcVar15 = "Surgery";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xaa:
    pcVar15 = "Suture";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xab:
    pcVar15 = "Set bone";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xac:
    pcVar15 = "Place in traction";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xad:
    pcVar15 = "Drain aquarium";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xae:
    pcVar15 = "Fill aquarium";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xaf:
    pcVar15 = "Fill pond";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xb0:
  case 0xb2:
    pcVar15 = "Give water";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xb1:
  case 0xb3:
    pcVar15 = "Give food";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xb4:
    pcVar15 = "Recover pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xb5:
    FUN_140071040(param_2,"Pit/pond ",9);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_1b0);
            FUN_141349540(lVar7,auStack_1b0,0);
            load_supplier_0xbb340(param_2,auStack_1b0);
            FUN_140070e80(auStack_1b0);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0xb6:
    pcVar15 = "Pit/pond small animal";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xb7:
    FUN_140071040(param_2,"Slaughter ",10);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x1a) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_150);
            FUN_141349540(lVar7,auStack_150,0);
            load_supplier_0xbb340(param_2,auStack_150);
            FUN_140070e80(auStack_150);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b246;
  case 0xb8:
    pcVar15 = "Make charcoal";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xb9:
    pcVar15 = "Make ash";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xba:
    pcVar15 = "Make lye";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xbb:
    pcVar15 = "Make potash from lye";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0xbc:
    pcVar15 = "Fertilize field";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0xbd:
    pcVar15 = "Make potash from ash";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0xbe:
    if (param_10 == -1) {
      load_supplier_0x70b90(param_2,"Dye thread");
      goto override_jmp_140d1b05a_case_133;
    }
    if ((param_14 != -1) && (param_15 != -1)) {
      load_supplier_0x70b90(param_2,"Tint ");
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
      pcVar15 = " thread ";
      goto LAB_140d1f287;
    }
    FUN_140071040(param_2,"Dye thread ",0xb);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
LAB_140d1d288:
    pcVar15 = (char *)pppplVar16;
    ppplVar19 = pppplVar16[2];
    if ((longlong ***)0xf < pppplVar16[3]) {
      pcVar15 = (char *)*pppplVar16;
    }
    break;
  case 0xbf:
    if (param_10 == -1) {
      load_supplier_0x70b90(param_2,"Dye cloth");
      goto override_jmp_140d1b05a_case_133;
    }
    if ((param_14 == -1) || (param_15 == -1)) {
      load_supplier_0x70b90(param_2,"Dye cloth ");
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
      goto override_jmp_140d1b05a_case_133;
    }
    load_supplier_0x70b90(param_2,"Tint ");
    load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
    pcVar15 = " cloth ";
LAB_140d1f287:
    load_supplier_0x70b90(param_2,pcVar15);
    load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
    load_supplier_0x70b90(param_2," using ");
    load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar24 * 8) + 0x50);
    load_supplier_0x70b90(param_2," dye");
    goto override_jmp_140d1b05a_case_133;
  case 0xc0:
    FUN_140071040(param_2,"Sew ",4);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " image";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xc1:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1de05:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1de05;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " tube";
        ppplVar19 = (longlong ***)0x5;
        break;
      }
    }
    pcVar15 = " pipe section";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xc2:
    pcVar15 = "Operate pump";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xc3:
    pcVar15 = "Manage work orders";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0xc4:
    pcVar15 = "Update stockpile records";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0xc5:
    pcVar15 = "Trade at depot";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xc6:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " hatch cover";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 199:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " grate";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 200:
    pcVar15 = "Remove stairs/ramps";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xc9:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " quern";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xca:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " millstone";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xcb:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " splint";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xcc:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crutch";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xcd:
    pcVar15 = "Make traction bench";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xce:
    pcVar15 = "Clean self";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xcf:
    pcVar15 = "Bring crutch";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xd0:
    pcVar15 = "Apply cast";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xd1:
    puVar20 = param_8;
    if (0xf < (ulonglong)param_8[3]) {
      puVar20 = (undefined8 *)*param_8;
    }
    lVar7 = param_8[2];
    uVar21 = _DAT_1425196f0 - (longlong)_DAT_1425196e8 >> 3;
    puVar17 = _DAT_1425196e8;
    if (uVar21 != 0) {
      do {
        plVar23 = (longlong *)*puVar17;
        plVar14 = plVar23;
        if (0xf < (ulonglong)plVar23[3]) {
          plVar14 = (longlong *)*plVar23;
        }
        if ((lVar7 == plVar23[2]) &&
           (iVar11 = load_supplier_0x1554864(puVar20,plVar14,lVar7), iVar11 == 0)) {
          if (puVar13[iVar6] != 0) {
            FUN_140070c00(apppuStack_290,puVar13[iVar6] + 0x20);
            FUN_140546b30(apppuStack_290);
            ppppuVar12 = apppuStack_290;
            if (0xf < uStack_278) {
              ppppuVar12 = (undefined8 ****)apppuStack_290[0];
            }
            FUN_140071040(param_2,ppppuVar12,uStack_280);
            FUN_140070e80(apppuStack_290);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        puVar17 = puVar17 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar21);
    }
    pcVar15 = "Reaction";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xd2:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " slab";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0xd3:
    if (((param_10 != -1) && (lVar7 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar7 != 0)) &&
       (iVar11 = (int)lVar7 + -1, -1 < iVar11)) {
      do {
        iVar9 = iVar11 + iVar6 >> 1;
        lVar7 = *(longlong *)(_DAT_14251c198 + (longlong)iVar9 * 8);
        if (*(int *)(lVar7 + 0xe0) == param_10) {
          if (lVar7 != 0) {
            if (*(char *)(lVar7 + 0xaa) == '\0') {
              lVar8 = FUN_1400751a0(0x142407530,*(undefined4 *)(lVar7 + 0xd8));
              if (lVar8 == 0) {
                load_supplier_0x70cc0(auStack_2d0);
                FUN_140abd670(*(undefined2 *)(lVar7 + 2),auStack_2d0,0,*(undefined2 *)(lVar7 + 4));
                load_supplier_0xbb340(param_2,auStack_2d0);
                puVar10 = auStack_2d0;
              }
              else {
                load_supplier_0x70cc0(auStack_b0);
                FUN_141349540(lVar8,auStack_b0,0);
                load_supplier_0xbb340(param_2,auStack_b0);
                puVar10 = auStack_b0;
              }
            }
            else {
              load_supplier_0x70cc0(auStack_d0);
              FUN_140aadad0(lVar7 + 0x38,auStack_d0);
              load_supplier_0xbb340(param_2,auStack_d0);
              puVar10 = auStack_d0;
            }
            FUN_140070e80(puVar10);
            load_supplier_0x70b90(param_2," (engrave memorial)");
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
        iVar4 = iVar9 + -1;
        if (*(int *)(lVar7 + 0xe0) < param_10) {
          iVar4 = iVar11;
          iVar6 = iVar9 + 1;
        }
        iVar11 = iVar4;
      } while (iVar6 <= iVar11);
    }
    pcVar15 = "Engrave memorial slab";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xd4:
    FUN_140071040(param_2,"Shear ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x1b) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_250);
            FUN_141349540(lVar7,auStack_250,0);
            load_supplier_0xbb340(param_2,auStack_250);
            FUN_140070e80(auStack_250);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b246;
  case 0xd5:
    pcVar15 = "Spin thread";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xd6:
    FUN_140071040(param_2,"Pen/pasture ",0xc);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_190);
            FUN_141349540(lVar7,auStack_190,0);
            load_supplier_0xbb340(param_2,auStack_190);
            FUN_140070e80(auStack_190);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
LAB_140d1b5de:
    pcVar15 = "a large animal";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xd7:
    pcVar15 = "Pen/pasture small animal";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0xd8:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d9d4:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d9d4;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    iVar6 = (int)(_DAT_14250eff8 - _DAT_14250eff0 >> 3) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250eff0 + lVar7 * 8) + 0x28) == sStack_2f8) {
          lVar7 = *(longlong *)(_DAT_14250eff0 + (longlong)iVar6 * 8);
          FUN_140071040(param_2," ",1);
          if (lVar7 == 0) goto LAB_140d1da88;
          plVar23 = (longlong *)(lVar7 + 0x68);
          pppuStack_2b0 = (undefined8 ***)0x0;
          lStack_2a8 = 0;
          uStack_2a0 = 0;
          uStack_298 = 0;
          uVar21 = *(ulonglong *)(lVar7 + 0x78);
          if (0xf < *(ulonglong *)(lVar7 + 0x80)) {
            plVar23 = (longlong *)*plVar23;
          }
          if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_140066ec0();
          }
          if (uVar21 < 0x10) {
            uStack_298 = 0xf;
            pppuStack_2b0 = (undefined8 ***)*plVar23;
            lStack_2a8 = plVar23[1];
            uStack_2a0 = uVar21;
          }
          else {
            uVar24 = uVar21 | 0xf;
            uVar22 = 0x7fffffffffffffff;
            if ((uVar24 < 0x8000000000000000) && (uVar22 = uVar24, uVar24 < 0x16)) {
              uVar22 = 0x16;
            }
            pppuStack_2b0 = (undefined8 ***)FUN_140071e00(uVar22 + 1);
            uStack_2a0 = uVar21;
            uStack_298 = uVar22;
            load_supplier_0x155454e(pppuStack_2b0,plVar23,uVar21 + 1);
          }
          ppppuVar12 = &pppuStack_2b0;
          if (0xf < uStack_298) {
            ppppuVar12 = (undefined8 ****)pppuStack_2b0;
          }
          FUN_140071040(param_2,ppppuVar12,uStack_2a0);
          FUN_140070e80(&pppuStack_2b0);
          goto override_jmp_140d1b05a_case_133;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_140071040(param_2," ",1);
LAB_140d1da88:
    pcVar15 = "tool";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0xd9:
    pcVar15 = "Collect clay";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xda:
    pcVar15 = "Install colony in hive";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0xdb:
    pcVar15 = "Collect hive products";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xdc:
    pcVar15 = "Cause trouble";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xdd:
  case 0xef:
    pcVar15 = "No job";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xde:
    pcVar15 = "Report crime";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xdf:
    pcVar15 = "Execute criminal";
LAB_140d1fb5c:
    ppplVar19 = (longlong ***)0x10;
    break;
  case 0xe0:
    FUN_140071040(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_50);
            FUN_141349540(lVar7,auStack_50,0);
            load_supplier_0xbb340(param_2,auStack_50);
            FUN_140070e80(auStack_50);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    goto LAB_140d1b246;
  case 0xe1:
    pcVar15 = "Carve track";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xe2:
    pcVar15 = "Push track vehicle";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0xe3:
    pcVar15 = "Place track vehicle";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xe4:
    pcVar15 = "Store item in vehicle";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xe5:
    FUN_140071040(param_2,"Geld ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x3b) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_130);
            FUN_141349540(lVar7,auStack_130,0);
            load_supplier_0xbb340(param_2,auStack_130);
            FUN_140070e80(auStack_130);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
LAB_140d1b246:
    pcVar15 = "animal";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xe6:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " figurine";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xe7:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " amulet";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xe8:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " scepter";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xe9:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crown";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xea:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ring";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0xeb:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " earring";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xec:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bracelet";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xed:
    FUN_140071040(param_2,"Make large ",0xb);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " gem";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0xee:
    pcVar15 = "Put item on display";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xf0:
    FUN_140071040(param_2,"Interrogate ",0xc);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x45) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_210);
            FUN_141349540(lVar7,auStack_210,0);
            load_supplier_0xbb340(param_2,auStack_210);
            FUN_140070e80(auStack_210);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    pcVar15 = "subject";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xf1:
    pcVar15 = "No activity";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xf2:
    pcVar15 = "Store squad equipment";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xf3:
    FUN_140071040(param_2,"Mix ",4);
    if ((-1 < param_7) &&
       ((ulonglong)(longlong)param_7 < (ulonglong)(_DAT_142519540 - _DAT_142519538 >> 3))) {
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + (longlong)param_7 * 8) + 0x50);
      load_supplier_0x70b90(param_2," ");
    }
    FUN_140071040(param_2,"dye",3);
    if ((param_14 != -1) && (param_15 != -1)) {
      load_supplier_0x70b90(param_2," using ");
      if ((-1 < param_14) && (uVar21 < (ulonglong)(_DAT_142519540 - _DAT_142519538 >> 3))) {
        load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
      }
      load_supplier_0x70b90(param_2," and ");
      if ((-1 < param_15) && (uVar24 < (ulonglong)(_DAT_142519540 - _DAT_142519538 >> 3))) {
        load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar24 * 8) + 0x50);
      }
    }
    goto override_jmp_140d1b05a_case_133;
  case 0xf4:
    if (param_10 != -1) {
      if ((param_14 != -1) && (param_15 != -1)) {
        load_supplier_0x70b90(param_2,"Tint ");
        load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
        pcVar15 = " leather ";
        goto LAB_140d1f287;
      }
      load_supplier_0x70b90(param_2,"Dye leather ");
      pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
      goto LAB_140d1d288;
    }
    pcVar15 = "Dye leather";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xf5:
    FUN_140071040(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " bolt thrower parts";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xf6:
    pcVar15 = "Load bolt thrower";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xf7:
    pcVar15 = "Fire bolt thrower";
    ppplVar19 = (longlong ***)0x11;
  }
  FUN_140071040(param_2,pcVar15,ppplVar19);
override_jmp_140d1b05a_case_133:
  if (0xf < uStack_2d8) {
    uVar21 = uStack_2d8 + 1;
    pppplVar16 = (longlong ****)ppplStack_2f0;
    if (0xfff < uVar21) {
      uVar21 = uStack_2d8 + 0x28;
      pppplVar16 = (longlong ****)ppplStack_2f0[-1];
      if (0x1f < (ulonglong)((longlong)ppplStack_2f0 + (-8 - (longlong)pppplVar16))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    load_supplier_0x15530d0(pppplVar16,uVar21);
  }
  FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_338);
  return;
}

