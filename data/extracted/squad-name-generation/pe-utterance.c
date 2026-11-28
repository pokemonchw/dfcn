/* Actual Ghidra decompilation; PE:6aea05a1:02734000	utterance	0x14094a690	0x14094b1f6	0x14094b30c */

/* WARNING: Removing unreachable block (ram,0x00014094a812) */
/* WARNING: Removing unreachable block (ram,0x00014094a889) */
/* WARNING: Removing unreachable block (ram,0x00014094a900) */
/* WARNING: Removing unreachable block (ram,0x00014094aa5e) */
/* WARNING: Removing unreachable block (ram,0x00014094aa70) */
/* WARNING: Removing unreachable block (ram,0x00014094a923) */
/* WARNING: Removing unreachable block (ram,0x00014094a8ac) */
/* WARNING: Removing unreachable block (ram,0x00014094a835) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14094a690(undefined8 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_78 [32];
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_78;
  uVar6 = FUN_140ece790();
  iVar13 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1d)
           + 1;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0xf;
  pppuStack_58 = (undefined8 ****)0x0;
  uVar6 = FUN_140ece790();
  uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
  uVar8 = uVar6 >> 0x1d;
  if (uVar6 >> 0x1d == 0) {
    pppuStack_58 = (undefined8 ***)CONCAT62(pppuStack_58._2_6_,0x61);
LAB_14094a75e:
    lStack_48 = 1;
  }
  else {
    if (uVar8 == 1) {
      pppuStack_58 = (undefined8 ***)CONCAT62(pppuStack_58._2_6_,0x69);
      goto LAB_14094a75e;
    }
    if (uVar8 == 2) {
      pppuStack_58 = (undefined8 ***)CONCAT62(pppuStack_58._2_6_,0x6f);
      goto LAB_14094a75e;
    }
    if (uVar8 == 3) {
      pppuStack_58 = (undefined8 ***)CONCAT62(pppuStack_58._2_6_,0x75);
      goto LAB_14094a75e;
    }
  }
  bVar3 = true;
  uVar12 = 0xf;
  do {
    uVar10 = uVar12;
    ppppuVar7 = (undefined8 ****)pppuStack_58;
    if (iVar13 == 1) {
      uVar6 = FUN_140ece790();
      uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
      ppppuVar7 = (undefined8 ****)pppuStack_58;
      if (uVar6 < 0x80000004) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 / 0x15555556) {
        case 0:
          if (uVar12 == 0) {
            ppppuVar7 = (undefined8 ****)FUN_140071e00(0x10);
            *(undefined2 *)ppppuVar7 = 0x61;
LAB_14094aa82:
            uVar10 = 0xf;
            lStack_48 = 1;
LAB_14094aa8a:
            uStack_40 = uVar10;
            if (0xf < uVar12) {
              if (0xfff < uVar12 + 1) {
                if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)pppuStack_58[-1])))
                {
                  _invalid_parameter_noinfo_noreturn(pppuStack_58[-1],uVar12 + 0x28);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              supplier_0x1415530d0();
            }
          }
          else {
            ppppuVar7 = &pppuStack_58;
            if (0xf < uVar12) {
              ppppuVar7 = (undefined8 ****)pppuStack_58;
            }
            lStack_48 = 1;
            *(undefined2 *)ppppuVar7 = 0x61;
            uVar10 = uStack_40;
            ppppuVar7 = (undefined8 ****)pppuStack_58;
          }
          break;
        case 1:
          if (uVar12 == 0) {
            ppppuVar7 = (undefined8 ****)FUN_140071e00(0x10);
            *(undefined2 *)ppppuVar7 = 0x6f;
            goto LAB_14094aa82;
          }
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuStack_58;
          }
          lStack_48 = 1;
          *(undefined2 *)ppppuVar7 = 0x6f;
          uVar10 = uStack_40;
          ppppuVar7 = (undefined8 ****)pppuStack_58;
          break;
        case 2:
          if (uVar12 == 0) {
            ppppuVar7 = (undefined8 ****)FUN_140071e00(0x10);
            *(undefined2 *)ppppuVar7 = 0x75;
            goto LAB_14094aa82;
          }
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuStack_58;
          }
          lStack_48 = 1;
          *(undefined2 *)ppppuVar7 = 0x75;
          uVar10 = uStack_40;
          ppppuVar7 = (undefined8 ****)pppuStack_58;
          break;
        case 3:
          if (uVar12 < 2) {
            if (0x7fffffffffffffff - (uVar12 >> 1) < uVar12) {
              uVar10 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = uVar12 + (uVar12 >> 1);
              uVar10 = 0xf;
              if (0xf < uVar1) {
                uVar10 = uVar1;
              }
            }
            ppppuVar7 = (undefined8 ****)FUN_140071e00(uVar10 + 1);
            lStack_48 = 2;
            *(undefined2 *)ppppuVar7 = 0x7961;
            *(undefined1 *)((longlong)ppppuVar7 + 2) = 0;
            goto LAB_14094aa8a;
          }
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuStack_58;
          }
          lStack_48 = 2;
          *(undefined2 *)ppppuVar7 = 0x7961;
          *(undefined1 *)((longlong)ppppuVar7 + 2) = 0;
          uVar10 = uStack_40;
          ppppuVar7 = (undefined8 ****)pppuStack_58;
          break;
        case 4:
          if (uVar12 < 2) {
            if (0x7fffffffffffffff - (uVar12 >> 1) < uVar12) {
              uVar10 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = (uVar12 >> 1) + uVar12;
              uVar10 = 0xf;
              if (0xf < uVar1) {
                uVar10 = uVar1;
              }
            }
            ppppuVar7 = (undefined8 ****)FUN_140071e00(uVar10 + 1);
            lStack_48 = 2;
            *(undefined2 *)ppppuVar7 = 0x6565;
            *(undefined1 *)((longlong)ppppuVar7 + 2) = 0;
            goto LAB_14094aa8a;
          }
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuStack_58;
          }
          lStack_48 = 2;
          *(undefined2 *)ppppuVar7 = 0x6565;
          *(undefined1 *)((longlong)ppppuVar7 + 2) = 0;
          uVar10 = uStack_40;
          ppppuVar7 = (undefined8 ****)pppuStack_58;
          break;
        case 5:
          if (uVar12 == 0) {
            ppppuVar7 = (undefined8 ****)FUN_140071e00(0x10);
            *(undefined2 *)ppppuVar7 = 0x69;
            goto LAB_14094aa82;
          }
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuStack_58;
          }
          lStack_48 = 1;
          *(undefined2 *)ppppuVar7 = 0x69;
          uVar10 = uStack_40;
          ppppuVar7 = (undefined8 ****)pppuStack_58;
        }
      }
    }
    pppuStack_58 = ppppuVar7;
    if ((!bVar3) && (iVar13 != 1)) {
      uVar6 = FUN_140ece790();
      uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
      if (uVar6 < 0x80000004) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 / 0x15555556) {
        case 0:
          FUN_140071040(param_1,"b",1);
          break;
        case 1:
          FUN_140071040(param_1,"d",1);
          break;
        case 2:
          FUN_140071040(param_1,"l",1);
          break;
        case 3:
          FUN_140071040(param_1,"f",1);
          break;
        case 4:
          FUN_140071040(param_1,"g",1);
          break;
        case 5:
          FUN_140071040(param_1,"k",1);
        }
      }
      goto LAB_14094ae5d;
    }
    uVar6 = FUN_140ece790();
    uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
    if (0x80000001 < uVar6) goto LAB_14094ae5a;
                    /* WARNING: Switch is manually overridden */
    switch((ulonglong)uVar6 / 0x31f3832) {
    case 0:
      uVar11 = 1;
      pcVar9 = "b";
      goto LAB_14094ae52;
    case 1:
      pcVar9 = "br";
      break;
    case 2:
      pcVar9 = "bl";
      break;
    case 3:
      uVar11 = 1;
      pcVar9 = "d";
      goto LAB_14094ae52;
    case 4:
      pcVar9 = "dr";
      break;
    case 5:
      pcVar9 = "dl";
      break;
    case 6:
      pcVar9 = "st";
      break;
    case 7:
      uVar11 = 3;
      pcVar9 = "str";
      goto LAB_14094ae52;
    case 8:
      uVar11 = 3;
      pcVar9 = "stl";
      goto LAB_14094ae52;
    case 9:
      pcVar9 = "sh";
      break;
    case 10:
      uVar11 = 3;
      pcVar9 = "shr";
      goto LAB_14094ae52;
    case 0xb:
      uVar11 = 3;
      pcVar9 = "shl";
      goto LAB_14094ae52;
    case 0xc:
      uVar11 = 1;
      pcVar9 = "s";
      goto LAB_14094ae52;
    case 0xd:
      pcVar9 = "sr";
      break;
    case 0xe:
      pcVar9 = "sl";
      break;
    case 0xf:
      uVar11 = 1;
      pcVar9 = "t";
      goto LAB_14094ae52;
    case 0x10:
      pcVar9 = "tr";
      break;
    case 0x11:
      pcVar9 = "tl";
      break;
    case 0x12:
      pcVar9 = "th";
      break;
    case 0x13:
      uVar11 = 3;
      pcVar9 = "thr";
      goto LAB_14094ae52;
    case 0x14:
      uVar11 = 3;
      pcVar9 = "thl";
      goto LAB_14094ae52;
    case 0x15:
      pcVar9 = "ch";
      break;
    case 0x16:
      uVar11 = 3;
      pcVar9 = "chr";
      goto LAB_14094ae52;
    case 0x17:
      uVar11 = 3;
      pcVar9 = "chl";
      goto LAB_14094ae52;
    case 0x18:
      uVar11 = 1;
      pcVar9 = "l";
      goto LAB_14094ae52;
    case 0x19:
      pcVar9 = "lr";
      break;
    case 0x1a:
      uVar11 = 1;
      pcVar9 = "f";
      goto LAB_14094ae52;
    case 0x1b:
      pcVar9 = "fr";
      break;
    case 0x1c:
      pcVar9 = "fl";
      break;
    case 0x1d:
      uVar11 = 1;
      pcVar9 = "g";
      goto LAB_14094ae52;
    case 0x1e:
      pcVar9 = "gr";
      break;
    case 0x1f:
      pcVar9 = "gl";
      break;
    case 0x20:
      uVar11 = 1;
      pcVar9 = "k";
      goto LAB_14094ae52;
    case 0x21:
      pcVar9 = "kr";
      break;
    case 0x22:
      pcVar9 = "kl";
      break;
    case 0x23:
      uVar11 = 1;
      pcVar9 = "p";
      goto LAB_14094ae52;
    case 0x24:
      pcVar9 = "pr";
      break;
    case 0x25:
      pcVar9 = "pl";
      break;
    case 0x26:
      uVar11 = 1;
      pcVar9 = "j";
      goto LAB_14094ae52;
    case 0x27:
      pcVar9 = "jr";
      break;
    case 0x28:
      pcVar9 = "jl";
    }
    uVar11 = 2;
LAB_14094ae52:
    FUN_140071040(param_1,pcVar9,uVar11);
LAB_14094ae5a:
    bVar3 = false;
LAB_14094ae5d:
    ppppuVar7 = &pppuStack_58;
    if (0xf < uVar10) {
      ppppuVar7 = (undefined8 ****)pppuStack_58;
    }
    FUN_140071040(param_1,ppppuVar7,lStack_48);
    iVar13 = iVar13 + -1;
    uVar12 = uStack_40;
  } while (0 < iVar13);
  uVar6 = FUN_140ece790();
  uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1b;
  if (uVar6 < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar6) {
    case 0:
      uVar11 = 1;
      pcVar9 = "m";
      break;
    case 1:
      uVar11 = 1;
      pcVar9 = "r";
      break;
    case 2:
      uVar11 = 2;
      pcVar9 = "ng";
      break;
    case 3:
      uVar11 = 1;
      pcVar9 = "b";
      break;
    case 4:
      uVar11 = 2;
      pcVar9 = "rb";
      break;
    case 5:
      uVar11 = 2;
      pcVar9 = "mb";
      break;
    case 6:
      uVar11 = 1;
      pcVar9 = "g";
      break;
    case 7:
      uVar11 = 2;
      pcVar9 = "lg";
      break;
    case 8:
      uVar11 = 1;
      pcVar9 = "l";
      break;
    case 9:
      uVar11 = 2;
      pcVar9 = "lb";
      break;
    case 10:
      uVar11 = 2;
      pcVar9 = "lm";
      break;
    case 0xb:
      uVar11 = 1;
      pcVar9 = "k";
      break;
    case 0xc:
      uVar11 = 2;
      pcVar9 = "nk";
      break;
    case 0xd:
      uVar11 = 2;
      pcVar9 = "ld";
      break;
    case 0xe:
      uVar11 = 1;
      pcVar9 = "d";
      break;
    case 0xf:
      uVar11 = 3;
      pcVar9 = "rsn";
    }
    FUN_140071040(param_1,pcVar9,uVar11);
  }
  uVar6 = FUN_140ece790();
  uVar12 = uStack_40;
  lVar5 = lStack_48;
  pppuVar4 = pppuStack_58;
  uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
  uVar8 = uVar6 >> 0x1d;
  if (uVar6 >> 0x1d == 0) {
LAB_14094b17c:
    pcVar9 = "is";
  }
  else if (uVar8 == 1) {
LAB_14094b0cf:
    pcVar9 = "us";
  }
  else if (uVar8 == 2) {
    ppppuVar7 = &pppuStack_58;
    if (0xf < uStack_40) {
      ppppuVar7 = (undefined8 ****)pppuStack_58;
    }
    if ((lStack_48 != 1) || (iVar13 = supplier_0x141554864(ppppuVar7,"o",1), iVar13 != 0)) {
      ppppuVar7 = &pppuStack_58;
      if (0xf < uVar12) {
        ppppuVar7 = (undefined8 ****)pppuVar4;
      }
      if ((lVar5 != 2) || (iVar13 = supplier_0x141554864(ppppuVar7,"ay",2), iVar13 != 0)) {
        ppppuVar7 = &pppuStack_58;
        if (0xf < uVar12) {
          ppppuVar7 = (undefined8 ****)pppuVar4;
        }
        if ((lVar5 != 1) || (iVar13 = supplier_0x141554864(ppppuVar7,"u",1), iVar13 != 0)) {
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuVar4;
          }
          if ((lVar5 != 1) || (iVar13 = supplier_0x141554864(ppppuVar7,"a",1), iVar13 != 0))
          goto LAB_14094b17c;
        }
      }
    }
    pcVar9 = "er";
  }
  else {
    if (uVar8 != 3) goto LAB_14094b192;
    ppppuVar7 = &pppuStack_58;
    if (0xf < uStack_40) {
      ppppuVar7 = (undefined8 ****)pppuStack_58;
    }
    if ((lStack_48 != 1) || (iVar13 = supplier_0x141554864(ppppuVar7,"o",1), iVar13 != 0)) {
      ppppuVar7 = &pppuStack_58;
      if (0xf < uVar12) {
        ppppuVar7 = (undefined8 ****)pppuVar4;
      }
      if ((lVar5 != 2) || (iVar13 = supplier_0x141554864(ppppuVar7,"ay",2), iVar13 != 0)) {
        ppppuVar7 = &pppuStack_58;
        if (0xf < uVar12) {
          ppppuVar7 = (undefined8 ****)pppuVar4;
        }
        if ((lVar5 != 1) || (iVar13 = supplier_0x141554864(ppppuVar7,"u",1), iVar13 != 0)) {
          ppppuVar7 = &pppuStack_58;
          if (0xf < uVar12) {
            ppppuVar7 = (undefined8 ****)pppuVar4;
          }
          if ((lVar5 != 1) || (iVar13 = supplier_0x141554864(ppppuVar7,"a",1), iVar13 != 0))
          goto LAB_14094b0cf;
        }
      }
    }
    pcVar9 = "in";
  }
  FUN_140071040(param_1,pcVar9,2);
LAB_14094b192:
  if (0xf < uVar12) {
    uVar10 = uVar12 + 1;
    ppppuVar7 = (undefined8 ****)pppuVar4;
    if (0xfff < uVar10) {
      uVar10 = uVar12 + 0x28;
      ppppuVar7 = (undefined8 ****)pppuVar4[-1];
      if (0x1f < (ulonglong)((longlong)pppuVar4 + (-8 - (longlong)ppppuVar7))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    supplier_0x1415530d0(ppppuVar7,uVar10);
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_78);
  return;
}

