/* reference PE:6aea05a1:02734000; dance-movement-description; RVA 0x4f3980..0x4f4664 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_dance_movement_description(undefined8 param_1,undefined8 *param_2,int param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *****pppppuVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_d8 [32];
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  int aiStack_70 [10];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_d8;
  uVar15 = *(uint *)(param_2 + 0x10);
  if ((uVar15 & 1) == 0) {
    if ((uVar15 & 4) == 0) {
      if ((uVar15 & 2) == 0) goto LAB_1404f3aa9;
      FUN_140071040(param_1,"The ",4);
      puVar10 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar10 = (undefined8 *)*param_2;
      }
      FUN_140071040(param_1,puVar10,param_2[2]);
      if (param_3 < 2) {
        uVar17 = 0x22;
        pcVar9 = " the fundamental dance position.  ";
      }
      else {
        uVar17 = 0x2d;
        pcVar9 = " is one of the fundamental dance positions.  ";
      }
    }
    else {
      FUN_140071040(param_1,"The ",4);
      puVar10 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar10 = (undefined8 *)*param_2;
      }
      FUN_140071040(param_1,puVar10,param_2[2]);
      uVar17 = 0x1e;
      if (1 < param_4) {
        uVar17 = 0x29;
      }
      pcVar9 = " the fundamental dance move.  ";
      if (1 < param_4) {
        pcVar9 = " is one of the fundamental dance moves.  ";
      }
    }
  }
  else {
    FUN_140071040(param_1,"called the ",0xb);
    puVar10 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar10 = (undefined8 *)*param_2;
    }
    FUN_140071040(param_1,puVar10,param_2[2]);
    uVar17 = 3;
    pcVar9 = ".  ";
  }
  FUN_140071040(param_1,pcVar9,uVar17);
LAB_1404f3aa9:
  iStack_b4 = 1;
  uVar8 = 0;
  aiStack_70[0] = 0;
  pbVar2 = (byte *)param_2[0xe];
  lVar19 = 1;
  uVar11 = uVar8;
  for (pbVar5 = (byte *)param_2[0xd]; iVar18 = (int)uVar11, pbVar5 < pbVar2; pbVar5 = pbVar5 + 4) {
    if ((*pbVar5 & 2) != 0) {
      aiStack_70[lVar19] = iVar18;
      iStack_b4 = iStack_b4 + 1;
      lVar19 = lVar19 + 1;
    }
    uVar11 = (ulonglong)(iVar18 + 1);
  }
  aiStack_70[iStack_b4] = iVar18;
  uStack_b8 = 0;
  uVar11 = uVar8;
  uVar15 = uStack_b0;
  if (0 < lVar19) {
    do {
      if (1 < lVar19) {
        if (uVar11 == 0) {
          uVar17 = 7;
          pcVar9 = "First, ";
        }
        else if ((lVar19 == 2) || ((int)uVar8 < iStack_b4 + -1)) {
          uVar17 = 5;
          pcVar9 = "Then ";
        }
        else {
          uVar17 = 9;
          pcVar9 = "Finally, ";
        }
        FUN_140071040(param_1,pcVar9,uVar17);
      }
      iVar18 = aiStack_70[uVar11];
      lVar12 = (longlong)iVar18;
      uStack_98 = uVar11 + 1;
      uStack_b0 = aiStack_70[uStack_98] - 1;
      lStack_a8 = (longlong)(int)uStack_b0;
      iStack_ac = iVar18;
      lStack_a0 = lVar12;
      if (lVar12 <= lStack_a8) {
        do {
          bVar3 = false;
          if (lVar12 == lStack_a0) {
            pcVar9 = "There";
            if (lVar19 != 1) {
              pcVar9 = "there";
            }
            FUN_140071040(param_1,pcVar9,5);
            if ((*(byte *)(param_2 + 0x10) & 2) == 0) {
              uVar17 = 3;
              pcVar9 = " is";
            }
            else {
              uVar17 = 10;
              pcVar9 = " should be";
            }
            FUN_140071040(param_1,pcVar9,uVar17);
          }
          uVar1 = *(uint *)(param_2[4] + lVar12 * 4);
          if ((0x21 < uVar1) || ((0x30400001fU >> ((longlong)(int)uVar1 & 0x3fU) & 1) == 0)) {
            FUN_140071040(param_1," a",2);
            bVar3 = true;
          }
          iVar14 = *(int *)(param_2[4] + lVar12 * 4);
          if ((((iVar14 == 0) || (iVar14 == 1)) || (iVar14 == 2)) ||
             ((iVar14 == 3 || (iVar14 == 4)))) {
            FUN_140071040(param_1," a series of ",0xd);
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0xf;
            ppppuStack_90 = (undefined8 *****)0x0;
            FUN_140547840(*(undefined4 *)(param_2[10] + lVar12 * 4),&ppppuStack_90);
            pppppuVar13 = &ppppuStack_90;
            if (0xf < uStack_78) {
              pppppuVar13 = (undefined8 *****)ppppuStack_90;
            }
            FUN_140071040(param_1,pppppuVar13,uStack_80);
            bVar3 = false;
            FUN_140070e80(&ppppuStack_90);
          }
          uVar1 = *(uint *)(param_2[7] + lVar12 * 4);
          if (0x2d < uVar1) goto LAB_1404f409d;
                    /* WARNING: Switch is manually overridden */
          switch(uVar1) {
          case 0:
            uVar17 = 9;
            pcVar9 = " graceful";
            break;
          case 1:
            uVar17 = 7;
            pcVar9 = " serene";
            break;
          case 2:
            uVar17 = 5;
            pcVar9 = " calm";
            break;
          case 3:
            uVar17 = 10;
            pcVar9 = " grotesque";
            break;
          case 4:
            uVar17 = 6;
            pcVar9 = " crude";
            break;
          case 5:
            pcVar9 = " refined";
            goto LAB_1404f408f;
          case 6:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            uVar17 = 0xc;
            pcVar9 = " understated";
            break;
          case 7:
            uVar17 = 9;
            pcVar9 = " delicate";
            break;
          case 8:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            uVar17 = 10;
            pcVar9 = " elaborate";
            break;
          case 9:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            uVar17 = 0xb;
            pcVar9 = " expressive";
            break;
          case 10:
            uVar17 = 7;
            pcVar9 = " strong";
            break;
          case 0xb:
            uVar17 = 6;
            pcVar9 = " large";
            break;
          case 0xc:
            uVar17 = 0xb;
            pcVar9 = " weightless";
            break;
          case 0xd:
            uVar17 = 6;
            pcVar9 = " fluid";
            break;
          case 0xe:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            uVar17 = 0xb;
            pcVar9 = " undulating";
            break;
          case 0xf:
            uVar17 = 5;
            pcVar9 = " soft";
            break;
          case 0x10:
            pcVar9 = " jerking";
            goto LAB_1404f408f;
          case 0x11:
            uVar17 = 0xc;
            pcVar9 = " sharp-edged";
            break;
          case 0x12:
            uVar17 = 0xf;
            pcVar9 = " straight-lined";
            break;
          case 0x13:
            uVar17 = 5;
            pcVar9 = " high";
            break;
          case 0x14:
            uVar17 = 4;
            pcVar9 = " low";
            break;
          case 0x15:
            uVar17 = 0x12;
            pcVar9 = " loudly percussive";
            break;
          case 0x16:
            uVar17 = 0x12;
            pcVar9 = " softly percussive";
            break;
          case 0x17:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            pcVar9 = " aborted";
            goto LAB_1404f408f;
          case 0x18:
            uVar17 = 0x13;
            pcVar9 = " partially realized";
            break;
          case 0x19:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            uVar17 = 10;
            pcVar9 = " energetic";
            break;
          case 0x1a:
            uVar17 = 0xb;
            pcVar9 = " passionate";
            break;
          case 0x1b:
            uVar17 = 10;
            pcVar9 = " vivacious";
            break;
          case 0x1c:
            uVar17 = 7;
            pcVar9 = " joyous";
            break;
          case 0x1d:
            uVar17 = 6;
            pcVar9 = " proud";
            break;
          case 0x1e:
            uVar17 = 0xb;
            pcVar9 = " flamboyant";
            break;
          case 0x1f:
            uVar17 = 7;
            pcVar9 = " lively";
            break;
          case 0x20:
            uVar17 = 9;
            pcVar9 = " spirited";
            break;
          case 0x21:
            uVar17 = 9;
            pcVar9 = " vigorous";
            break;
          case 0x22:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            pcVar9 = " intense";
            goto LAB_1404f408f;
          case 0x23:
            if (bVar3) {
              FUN_140071040(param_1,"n",1);
            }
            uVar17 = 0xb;
            pcVar9 = " aggressive";
            break;
          case 0x24:
            uVar17 = 9;
            pcVar9 = " powerful";
            break;
          case 0x25:
            uVar17 = 9;
            pcVar9 = " sluggish";
            break;
          case 0x26:
            pcVar9 = " relaxed";
            goto LAB_1404f408f;
          case 0x27:
            pcVar9 = " passive";
            goto LAB_1404f408f;
          case 0x28:
            uVar17 = 7;
            pcVar9 = " subtle";
            break;
          case 0x29:
            pcVar9 = " sensual";
            goto LAB_1404f408f;
          case 0x2a:
            uVar17 = 10;
            pcVar9 = " debauched";
            break;
          case 0x2b:
            uVar17 = 9;
            pcVar9 = " twisting";
            break;
          case 0x2c:
            uVar17 = 10;
            pcVar9 = " sprightly";
            break;
          case 0x2d:
            pcVar9 = " sinuous";
LAB_1404f408f:
            uVar17 = 8;
          }
          FUN_140071040(param_1,pcVar9,uVar17);
LAB_1404f409d:
          iVar14 = 0;
          if (*(int *)(param_2[7] + lVar12 * 4) != -1) {
            bVar3 = false;
          }
          iVar6 = *(int *)(param_2[4] + lVar12 * 4);
          if (iVar6 == 6) {
            if (*(int *)(param_2[10] + lVar12 * 4) < 0) {
              FUN_140071040(param_1," counterclockwise");
              bVar3 = false;
            }
            if (0 < *(int *)(param_2[10] + lVar12 * 4)) {
              FUN_140071040(param_1," clockwise");
              bVar3 = false;
            }
            iVar6 = -*(int *)(param_2[10] + lVar12 * 4);
            if (iVar6 < 0) {
              iVar6 = *(int *)(param_2[10] + lVar12 * 4);
            }
            if ((iVar6 == 0x2d) && (bVar3)) {
              FUN_140071040(param_1,"n",1);
            }
            FUN_140071040(param_1," eighth",7);
            iVar6 = -*(int *)(param_2[10] + lVar12 * 4);
            if (iVar6 < 0) {
              iVar6 = *(int *)(param_2[10] + lVar12 * 4);
            }
            if (iVar6 == 0x5a) {
              FUN_140071040(param_1," quarter",8);
            }
            iVar6 = -*(int *)(param_2[10] + lVar12 * 4);
            if (iVar6 < 0) {
              iVar6 = *(int *)(param_2[10] + lVar12 * 4);
            }
            if (iVar6 == 0xb4) {
              uVar17 = 5;
              pcVar9 = " half";
              goto LAB_1404f41c8;
            }
          }
          else if ((((iVar6 == 0xd) || (iVar6 == 0xe)) || (iVar6 == 0xf)) &&
                  (*(int *)(param_2[10] + lVar12 * 4) == 2)) {
            uVar17 = 9;
            pcVar9 = " repeated";
LAB_1404f41c8:
            FUN_140071040(param_1,pcVar9,uVar17);
          }
          uVar1 = *(uint *)(param_2[4] + lVar12 * 4);
          if (uVar1 < 0x22) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              uVar17 = 0x1a;
              pcVar9 = " steps in a square pattern";
              break;
            case 1:
              uVar17 = 0x1c;
              pcVar9 = " steps in a circular pattern";
              break;
            case 2:
              uVar17 = 0x1c;
              pcVar9 = " steps in a triangle pattern";
              break;
            case 3:
              uVar17 = 0x20;
              pcVar9 = " steps in a figure-eight pattern";
              break;
            case 4:
              uVar17 = 0x1e;
              pcVar9 = " steps in an intricate pattern";
              break;
            case 5:
              uVar17 = 5;
              pcVar9 = " move";
              break;
            case 6:
              uVar17 = 5;
              pcVar9 = " turn";
              break;
            case 7:
              uVar17 = 0x12;
              pcVar9 = " facial expression";
              break;
            case 8:
              uVar17 = 0xd;
              pcVar9 = " hand gesture";
              break;
            case 9:
              uVar17 = 0xe;
              pcVar9 = " straight walk";
              break;
            case 10:
              uVar17 = 0xc;
              pcVar9 = " curved walk";
              break;
            case 0xb:
              uVar17 = 4;
              pcVar9 = " run";
              break;
            case 0xc:
              uVar17 = 5;
              pcVar9 = " leap";
              break;
            case 0xd:
              uVar17 = 5;
              pcVar9 = " kick";
              break;
            case 0xe:
              uVar17 = 10;
              pcVar9 = " left kick";
              break;
            case 0xf:
              uVar17 = 0xb;
              pcVar9 = " right kick";
              break;
            case 0x10:
              uVar17 = 9;
              pcVar9 = " leg lift";
              break;
            case 0x11:
              uVar17 = 0xe;
              pcVar9 = " left leg lift";
              break;
            case 0x12:
              uVar17 = 0xf;
              pcVar9 = " right leg lift";
              break;
            case 0x13:
              uVar17 = 0xb;
              pcVar9 = " body level";
              break;
            case 0x14:
              uVar17 = 0x12;
              pcVar9 = " body level change";
              break;
            case 0x15:
              uVar17 = 0xd;
              pcVar9 = " arm carriage";
              break;
            case 0x16:
              uVar17 = 0x10;
              pcVar9 = " raised left arm";
              break;
            case 0x17:
              uVar17 = 0x11;
              pcVar9 = " raised right arm";
              break;
            case 0x18:
              uVar17 = 0xb;
              pcVar9 = " raised arm";
              break;
            case 0x19:
              uVar17 = 5;
              pcVar9 = " spin";
              break;
            case 0x1a:
              uVar17 = 0x1a;
              pcVar9 = " independent body movement";
              break;
            case 0x1b:
              uVar17 = 5;
              pcVar9 = " sway";
              break;
            case 0x1c:
              uVar17 = 0xd;
              pcVar9 = " forward bend";
              break;
            case 0x1d:
              uVar17 = 0xe;
              pcVar9 = " backward bend";
              break;
            case 0x1e:
              uVar17 = 0xe;
              pcVar9 = " leftward bend";
              break;
            case 0x1f:
              uVar17 = 0xf;
              pcVar9 = " rightward bend";
              break;
            case 0x20:
              uVar17 = 9;
              pcVar9 = " footwork";
              break;
            case 0x21:
              uVar17 = 0x21;
              pcVar9 = " movement along the line of dance";
            }
            FUN_140071040(param_1,pcVar9,uVar17);
          }
          uVar1 = *(uint *)(param_2[0xd] + lVar12 * 4);
          uVar7 = uVar1 >> 2 & 1;
          uVar16 = uVar7 + 1;
          if ((uVar1 & 8) == 0) {
            uVar16 = uVar7;
          }
          uVar7 = uVar16 + 1;
          if ((uVar1 & 0x10) == 0) {
            uVar7 = uVar16;
          }
          uVar16 = uVar7 + 1;
          if ((uVar1 & 0x20) == 0) {
            uVar16 = uVar7;
          }
          if (uVar16 != 0) {
            do {
              if (iVar14 == 0) {
                uVar15 = 4;
              }
              else if (iVar14 == 1) {
                uVar15 = 8;
              }
              else if (iVar14 == 2) {
                uVar15 = 0x10;
              }
              else if (iVar14 == 3) {
                uVar15 = 0x20;
              }
              if ((*(uint *)(param_2[0xd] + lVar12 * 4) & uVar15) != 0) {
                uVar16 = uVar16 - 1;
                if (uVar15 == 4) {
                  pcVar9 = " mirrored";
LAB_1404f44f1:
                  uVar17 = 9;
LAB_1404f44f7:
                  FUN_140071040(param_1,pcVar9,uVar17);
                }
                else {
                  if (uVar15 == 8) {
                    uVar17 = 0x18;
                    pcVar9 = " performed in retrograde";
                    goto LAB_1404f44f7;
                  }
                  if (uVar15 == 0x10) {
                    uVar17 = 0x18;
                    pcVar9 = " performed in succession";
                    goto LAB_1404f44f7;
                  }
                  if (uVar15 == 0x20) {
                    pcVar9 = " shadowed";
                    goto LAB_1404f44f1;
                  }
                }
                if ((int)uVar16 < 2) {
                  if (uVar16 != 1) goto LAB_1404f452d;
                  uVar17 = 4;
                  pcVar9 = " and";
                }
                else {
                  uVar17 = 1;
                  pcVar9 = ",";
                }
                FUN_140071040(param_1,pcVar9,uVar17);
              }
LAB_1404f452d:
              iVar14 = iVar14 + 1;
            } while (iVar14 < 4);
            FUN_140071040(param_1," by group members",0x11);
          }
          uVar1 = *(uint *)(param_2[0xd] + lVar12 * 4);
          if ((uVar1 & 0x40) == 0) {
            if ((char)uVar1 < '\0') {
              uVar17 = 0x12;
              pcVar9 = " from the follower";
              goto LAB_1404f457a;
            }
          }
          else {
            uVar17 = 0xe;
            pcVar9 = " from the lead";
LAB_1404f457a:
            FUN_140071040(param_1,pcVar9,uVar17);
          }
          lVar4 = lStack_a8;
          if ((lVar12 == lStack_a0) && (lVar12 != lStack_a8)) {
            uVar17 = 5;
            pcVar9 = " with";
LAB_1404f45dd:
            FUN_140071040(param_1,pcVar9,uVar17);
          }
          else if (iStack_ac + 1 <= iVar18) {
            if ((int)(uStack_b0 - 2) < iVar18) {
              if (iVar18 != uStack_b0 - 1) goto LAB_1404f45e5;
              uVar17 = 4;
              pcVar9 = " and";
            }
            else {
              uVar17 = 1;
              pcVar9 = ",";
            }
            goto LAB_1404f45dd;
          }
LAB_1404f45e5:
          iVar18 = iVar18 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 <= lVar4);
      }
      uVar11 = uStack_98;
      FUN_140071040(param_1,".  ",3);
      uStack_b8 = uStack_b8 + 1;
      uVar8 = (ulonglong)uStack_b8;
    } while ((longlong)uVar11 < lVar19);
  }
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_d8);
  return;
}

