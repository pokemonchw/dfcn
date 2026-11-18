/* Actual Ghidra output, research name; VA 0x140a2faf0..0x140a30a44. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fire_140a2faf0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  short sVar22;
  longlong *plVar23;
  ushort uVar24;
  int iVar25;
  short sVar26;
  float fVar27;
  undefined1 auStack_188 [32];
  undefined8 *puStack_168;
  undefined4 uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined2 uStack_140;
  undefined4 uStack_138;
  char cStack_128;
  ushort uStack_126;
  short sStack_124;
  short sStack_122;
  short asStack_120 [2];
  ushort auStack_11c [2];
  undefined2 auStack_118 [2];
  int iStack_114;
  short sStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  undefined8 *apuStack_f8 [2];
  undefined2 auStack_e8 [6];
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_188;
  lVar17 = *(longlong *)(param_1 + 0x4d8);
  if (*(short *)(param_1 + 0xc0) == -30000) {
    uVar2 = *(uint *)(lVar17 + 0x2c);
    *(uint *)(lVar17 + 0x2c) = uVar2 & 0xfffffff3;
    if (*(short *)(lVar17 + 0x14) != 0x92) {
      *(uint *)(lVar17 + 0x2c) = uVar2 & 0xffffffd3;
    }
  }
  uVar2 = *(uint *)(lVar17 + 0x2c);
  lStack_108 = param_2;
  if ((((uVar2 & 4) != 0) || ((uVar2 & 8) != 0)) ||
     (((uVar2 & 0x20) != 0 && (*(short *)(lVar17 + 0x14) != 0x92)))) goto LAB_140a3097a;
  puVar16 = *(undefined8 **)(lVar17 + 0xb8);
  for (puVar18 = *(undefined8 **)(lVar17 + 0xb0); plVar21 = (longlong *)0x0, plVar15 = plVar21,
      puVar18 < puVar16; puVar18 = puVar18 + 1) {
    iVar9 = (**(code **)(*(longlong *)*puVar18 + 0x10))();
    if (iVar9 == 0x24) {
      plVar15 = (longlong *)(**(code **)(*(longlong *)*puVar18 + 0x30))();
      break;
    }
  }
  if (plVar15 == (longlong *)0x0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xf;
    uStack_a0 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_dc = 0;
    uStack_d4 = 0;
    uStack_cc = 0;
    uStack_80 = 0xffffffffffffffff;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffff;
    uStack_58 = 0xffffffff;
    uStack_54 = 0x8ad08ad0;
    uStack_50 = 0x8ad0;
    auStack_e8[0] = 0x20;
    puStack_168 = (undefined8 *)auStack_e8;
    FUN_14133d990(param_1,1,0,0);
    FUN_140070d80(&uStack_78);
    FUN_140070e80(&uStack_a0);
    FUN_140070e80(&uStack_c0);
    goto LAB_140a3097a;
  }
  iVar9 = (**(code **)(*plVar15 + 0xd0))(plVar15);
  if (iVar9 != 0x16) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xf;
    uStack_a0 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_dc = 0;
    uStack_d4 = 0;
    uStack_cc = 0;
    uStack_80 = 0xffffffffffffffff;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffff;
    uStack_58 = 0xffffffff;
    uStack_54 = 0x8ad08ad0;
    uStack_50 = 0x8ad0;
    auStack_e8[0] = 0x21;
    puStack_168 = (undefined8 *)auStack_e8;
    FUN_14133d990(param_1,1,0,0);
    FUN_140070d80(&uStack_78);
    FUN_140070e80(&uStack_a0);
    FUN_140070e80(&uStack_c0);
    goto LAB_140a3097a;
  }
  if ((short)plVar15[0x29] != 0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xf;
    uStack_a0 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_dc = 0;
    uStack_d4 = 0;
    uStack_cc = 0;
    uStack_80 = 0xffffffffffffffff;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffff;
    uStack_58 = 0xffffffff;
    uStack_54 = 0x8ad08ad0;
    uStack_50 = 0x8ad0;
    auStack_e8[0] = 0x21;
    puStack_168 = (undefined8 *)auStack_e8;
    FUN_14133d990(param_1,1,0,0);
    FUN_140070d80(&uStack_78);
    FUN_140070e80(&uStack_a0);
    FUN_140070e80(&uStack_c0);
    goto LAB_140a3097a;
  }
  if ((ulonglong)(plVar15[0x26] - plVar15[0x25] >> 3) < 4) {
    puStack_168 = (undefined8 *)0x0;
    FUN_14133d990(param_1,1,0,0);
    if (((('\0' < *(char *)((longlong)plVar15 + 0x14c)) && (*(longlong *)(param_1 + 0x4d8) == 0)) &&
        ((plVar15[0xc] - plVar15[0xb] & 0xfffffffffffffff8U) == 0)) &&
       (cVar5 = (**(code **)(*plVar15 + 600))(plVar15), cVar5 == '\0')) {
      apuStack_f8[0] = (undefined8 *)FUN_1415530e0(0x148);
      puVar16 = (undefined8 *)FUN_140d19db0(apuStack_f8[0],0);
      *(undefined2 *)((longlong)puVar16 + 0x14) = 0x87;
      puStack_168 = puVar16 + 4;
      uStack_160 = CONCAT31(uStack_160._1_3_,*(undefined1 *)((longlong)plVar15 + 0x14a));
      callee_140a5afd0(*(undefined1 *)((longlong)plVar15 + 0x14a),plVar15,(longlong)puVar16 + 0x1c,
                       (longlong)puVar16 + 0x1e);
      apuStack_f8[0] = puVar16;
      FUN_140d21440(puVar16,0x24,(int)plVar15[10]);
      puVar18 = (undefined8 *)plVar15[0xc];
      if (puVar18 == (undefined8 *)plVar15[0xd]) {
        FUN_1400bc360(plVar15 + 0xb,puVar18,apuStack_f8);
      }
      else {
        *puVar18 = puVar16;
        plVar15[0xc] = plVar15[0xc] + 8;
      }
      FUN_140d21860(puVar16);
      FUN_141340d60(param_1,puVar16);
    }
    goto LAB_140a3097a;
  }
  if (*(char *)((longlong)plVar15 + 0x14c) < '\x02') {
    puStack_168 = (undefined8 *)0x0;
    FUN_14133d990(param_1,1,0,0);
    goto LAB_140a3097a;
  }
  cVar5 = -1;
  cStack_128 = -1;
  sStack_110 = (short)plVar15[4];
  if (*(byte *)((longlong)plVar15 + 0x14a) < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)((longlong)plVar15 + 0x14a)) {
    case 0:
      sStack_122 = (short)plVar15[2];
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c) + 1;
      break;
    case 1:
      sStack_122 = (short)plVar15[2] + -1;
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c) + 1;
      break;
    case 2:
      sStack_122 = (short)plVar15[2] + -1;
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c);
      break;
    case 3:
      sStack_122 = (short)plVar15[2] + -1;
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c) + -1;
      break;
    case 4:
      sStack_122 = (short)plVar15[2];
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c) + -1;
      break;
    case 5:
      sStack_122 = (short)plVar15[2] + 1;
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c) + -1;
      break;
    case 6:
      sStack_122 = (short)plVar15[2] + 1;
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c);
      break;
    case 7:
      sStack_122 = (short)plVar15[2] + 1;
      sStack_124 = *(short *)((longlong)plVar15 + 0x1c) + 1;
    }
  }
  else {
    sStack_122 = (short)iStack_114;
    sStack_124 = (short)iStack_114;
  }
  plStack_100 = (longlong *)0x0;
  if (0 < *(int *)(lStack_108 + 0x660)) {
    uStack_126 = 0xffff;
    apuStack_f8[0] = (undefined8 *)(lStack_108 + 0x20);
    iStack_114 = 0;
    lVar17 = lStack_108;
    do {
      plVar23 = (longlong *)*apuStack_f8[0];
      cVar6 = cStack_128;
      uVar24 = uStack_126;
      plVar3 = plStack_100;
      if ((((int)plVar23[0x7b] == -1) && ((*(uint *)(plVar23 + 0x22) & 0x2010000) == 0)) &&
         ((short)plVar23[0x100] < 1)) {
        sVar8 = FUN_1413a7840(plVar23);
        if ((int)sVar8 - 1U < 0x10) {
                    /* WARNING: Switch is manually overridden */
          switch((int)sVar8 - 1U) {
          case 0:
          case 4:
            break;
          default:
            goto override_jmp_140a3003d_case_1;
          case 5:
            if ((*(byte *)((longlong)plVar23 + 0x11c) & 0x80) != 0)
            goto override_jmp_140a3003d_case_1;
          }
override_jmp_140a3003d_case_2:
          sVar8 = (short)plVar23[0x15];
          iVar9 = (int)plVar15[2];
          iVar10 = sVar8 - iVar9;
          iVar25 = -iVar10;
          if (iVar25 < 0) {
            iVar25 = iVar10;
          }
          sVar22 = *(short *)((longlong)plVar23 + 0xaa);
          iVar10 = *(int *)((longlong)plVar15 + 0x1c);
          iVar11 = sVar22 - iVar10;
          iVar19 = -iVar11;
          if (iVar19 < 0) {
            iVar19 = iVar11;
          }
          iVar12 = (int)*(short *)((longlong)plVar23 + 0xac) - (int)plVar15[4];
          iVar11 = -iVar12;
          if (iVar11 < 0) {
            iVar11 = iVar12;
          }
          iVar12 = (int)(short)iVar19 * (int)(short)iVar19;
          iVar25 = (int)(short)iVar25 * (int)(short)iVar25;
          iVar19 = (int)(short)iVar11 * (int)(short)iVar11;
          cVar7 = cStack_128;
          if ((iVar19 <= iVar25 + iVar12) && ((sVar8 != iVar9 || (sVar22 != iVar10)))) {
            fVar27 = (float)(iVar19 + iVar12 + iVar25);
            if (fVar27 < 0.0) {
              fVar27 = (float)callee_1415548d6(fVar27);
            }
            else {
              fVar27 = SQRT(fVar27);
            }
            uVar24 = (ushort)(int)fVar27;
            cVar7 = cStack_128;
            if (((uStack_126 == 0xffff) || ((short)uVar24 <= (short)uStack_126)) &&
               ((short)uVar24 < 0x1a)) {
              sVar22 = sVar22 - (short)iVar10;
              sVar8 = sVar8 - (short)iVar9;
              iVar9 = -(int)sVar8;
              if (iVar9 < 0) {
                iVar9 = (int)sVar8;
              }
              iVar25 = -(int)sVar22;
              if (iVar25 < 0) {
                iVar25 = (int)sVar22;
              }
              iVar10 = (int)(short)iVar9;
              iVar9 = (int)(short)iVar25;
              if ((sVar22 < 0) && (iVar10 * 2 <= iVar9)) {
LAB_140a3019c:
                cVar5 = '\0';
              }
              else if ((sVar22 < 1) || (iVar9 < iVar10 * 2)) {
                if (sVar8 < 0) {
                  if (iVar10 < iVar9 * 2) {
                    if (sVar22 < 1) {
                      if (-1 < sVar22) goto LAB_140a3019c;
                      cVar5 = '\a';
                    }
                    else {
                      cVar5 = '\x05';
                    }
                  }
                  else {
                    cVar5 = '\x06';
                  }
                }
                else {
                  if (sVar8 < 1) goto LAB_140a3019c;
                  if (iVar10 < iVar9 * 2) {
                    if (sVar22 < 0) {
                      cVar5 = '\x01';
                    }
                    else {
                      if (sVar22 < 1) goto LAB_140a3019c;
                      cVar5 = '\x03';
                    }
                  }
                  else {
                    cVar5 = '\x02';
                  }
                }
              }
              else {
                cVar5 = '\x04';
              }
              lVar17 = lStack_108;
              plVar21 = plVar23;
              cVar6 = cVar5;
              plVar3 = plVar23;
              if (*(char *)((longlong)plVar15 + 0x14a) == cVar5) goto LAB_140a301e5;
            }
          }
        }
        else {
override_jmp_140a3003d_case_1:
          cVar6 = FUN_14140bba0(param_1,plVar23);
          cVar7 = cVar5;
          if (cVar6 != '\0') goto override_jmp_140a3003d_case_2;
        }
        cVar5 = cVar7;
        lVar17 = lStack_108;
        plVar21 = plStack_100;
        cVar6 = cStack_128;
        uVar24 = uStack_126;
        plVar3 = plStack_100;
      }
LAB_140a301e5:
      plStack_100 = plVar3;
      uStack_126 = uVar24;
      cStack_128 = cVar6;
      iStack_114 = iStack_114 + 1;
      apuStack_f8[0] = apuStack_f8[0] + 1;
    } while (iStack_114 < *(int *)(lVar17 + 0x660));
  }
  asStack_120[0] = -30000;
  auStack_11c[0] = 0x8ad0;
  auStack_118[0] = 0x8ad0;
  if (plVar21 != (longlong *)0x0) {
    if ((*(uint *)(plVar21 + 0x22) & 0x2000000) == 0) {
      asStack_120[0] = (short)plVar21[0x15];
      auStack_11c[0] = *(ushort *)((longlong)plVar21 + 0xaa);
      auStack_118[0] = *(undefined2 *)((longlong)plVar21 + 0xac);
    }
    else {
      puVar16 = (undefined8 *)plVar21[0x3c];
      for (puVar18 = (undefined8 *)plVar21[0x3b]; puVar18 < puVar16; puVar18 = puVar18 + 1) {
        iVar9 = (**(code **)(*(longlong *)*puVar18 + 0x10))();
        if ((iVar9 == 0xb) && (lVar17 = (**(code **)(*(longlong *)*puVar18 + 0x18))(), lVar17 != 0))
        {
          FUN_140ca3790(lVar17,asStack_120,auStack_11c,auStack_118);
          break;
        }
      }
    }
  }
  plVar21 = _DAT_1424110e8;
  cVar6 = '\0';
  uStack_126 = uStack_126 & 0xff00;
  if ((asStack_120[0] != -30000) || (*(char *)((longlong)plVar15 + 0x14c) != '\x04'))
  goto LAB_140a3067b;
  iStack_114 = CONCAT22(iStack_114._2_2_,0xffff);
  plVar23 = _DAT_1424110e0;
  if (_DAT_1424110e0 != _DAT_1424110e8) {
    do {
      plVar3 = (longlong *)*plVar23;
      iVar9 = (**(code **)(*plVar3 + 0x120))(plVar3);
      cVar6 = cVar5;
      if (((short)plVar3[0x24] < iVar9) ||
         (cVar5 = (**(code **)(*plVar3 + 600))(plVar3), cVar5 != '\0')) {
LAB_140a30509:
        cVar5 = cVar6;
        cVar6 = (char)uStack_126;
      }
      else {
        lVar17 = plVar3[2];
        iVar9 = (int)plVar15[2];
        iVar10 = (int)lVar17 - iVar9;
        iVar25 = -iVar10;
        if (iVar25 < 0) {
          iVar25 = iVar10;
        }
        iVar10 = *(int *)((longlong)plVar3 + 0x1c);
        iVar19 = *(int *)((longlong)plVar15 + 0x1c);
        iVar12 = iVar10 - iVar19;
        iVar11 = -iVar12;
        if (iVar11 < 0) {
          iVar11 = iVar12;
        }
        iVar13 = (int)plVar3[4] - (int)plVar15[4];
        iVar12 = -iVar13;
        if (iVar12 < 0) {
          iVar12 = iVar13;
        }
        iVar13 = (int)(short)iVar11 * (int)(short)iVar11;
        iVar25 = (int)(short)iVar25 * (int)(short)iVar25;
        iVar11 = (int)(short)iVar12 * (int)(short)iVar12;
        cVar6 = cStack_128;
        if (iVar25 + iVar13 < iVar11) goto LAB_140a30509;
        fVar27 = (float)(iVar11 + iVar13 + iVar25);
        if (fVar27 < 0.0) {
          fVar27 = (float)callee_1415548d6(fVar27);
          iVar9 = (int)plVar15[2];
          iVar19 = *(int *)((longlong)plVar15 + 0x1c);
        }
        else {
          fVar27 = SQRT(fVar27);
        }
        lStack_108 = CONCAT44(lStack_108._4_4_,(int)fVar27);
        sVar8 = (short)(int)fVar27;
        cVar6 = cStack_128;
        if ((((short)iStack_114 != -1) && ((short)iStack_114 < sVar8)) || (0x19 < sVar8))
        goto LAB_140a30509;
        sVar22 = (short)iVar10 - (short)iVar19;
        sVar8 = (short)(int)lVar17 - (short)iVar9;
        iVar9 = -(int)sVar8;
        if (iVar9 < 0) {
          iVar9 = (int)sVar8;
        }
        iVar25 = -(int)sVar22;
        if (iVar25 < 0) {
          iVar25 = (int)sVar22;
        }
        iVar10 = (int)(short)iVar9;
        iVar9 = (int)(short)iVar25;
        if ((sVar22 < 0) && (iVar10 * 2 <= iVar9)) {
LAB_140a30461:
          cVar5 = '\0';
        }
        else if ((sVar22 < 1) || (iVar9 < iVar10 * 2)) {
          if (sVar8 < 0) {
            if (iVar10 < iVar9 * 2) {
              if (sVar22 < 1) {
                if (-1 < sVar22) goto LAB_140a30461;
                cVar5 = '\a';
              }
              else {
                cVar5 = '\x05';
              }
            }
            else {
              cVar5 = '\x06';
            }
          }
          else {
            if (sVar8 < 1) goto LAB_140a30461;
            if (iVar10 < iVar9 * 2) {
              if (sVar22 < 0) {
                cVar5 = '\x01';
              }
              else {
                if (sVar22 < 1) goto LAB_140a30461;
                cVar5 = '\x03';
              }
            }
            else {
              cVar5 = '\x02';
            }
          }
        }
        else {
          cVar5 = '\x04';
        }
        if ((*(char *)((longlong)plVar15 + 0x14a) != cVar5) ||
           (iVar9 = FUN_14139bee0(param_1), cVar6 = cStack_128, iVar9 == 0)) goto LAB_140a30509;
        uVar14 = FUN_14139be10(param_1);
        lStack_158 = CONCAT44(lStack_158._4_4_,uVar14);
        uStack_160 = CONCAT22(uStack_160._2_2_,(short)plVar3[4]);
        puStack_168 = (undefined8 *)
                      CONCAT62(puStack_168._2_6_,*(undefined2 *)((longlong)plVar3 + 0x1c));
        cVar7 = FUN_140aa84d0(*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xaa),
                              *(undefined2 *)(param_1 + 0xac),(short)plVar3[2]);
        cVar6 = cStack_128;
        if (cVar7 == '\0') goto LAB_140a30509;
        asStack_120[0] = (short)plVar3[2];
        auStack_11c[0] = *(ushort *)((longlong)plVar3 + 0x1c);
        auStack_118[0] = (undefined2)plVar3[4];
        iStack_114 = CONCAT22(iStack_114._2_2_,(undefined2)lStack_108);
        uStack_126 = CONCAT11(uStack_126._1_1_,1);
        cVar6 = '\x01';
        cStack_128 = cVar5;
      }
      plVar23 = plVar23 + 1;
    } while (plVar23 != plVar21);
    if (asStack_120[0] != -30000) goto LAB_140a3067b;
  }
  sVar8 = (short)plVar15[2];
  uVar24 = *(ushort *)((longlong)plVar15 + 0x1c);
  if (7 < *(byte *)((longlong)plVar15 + 0x14a)) goto LAB_140a3058b;
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)((longlong)plVar15 + 0x14a)) {
  case 0:
    goto override_jmp_140a30558_case_7;
  case 1:
    sVar8 = sVar8 + 0x19;
    goto override_jmp_140a30558_case_7;
  case 2:
    sVar8 = sVar8 + 0x19;
    break;
  case 3:
    sVar8 = sVar8 + 0x19;
  case 4:
    uVar24 = uVar24 + 0x19;
    break;
  case 5:
    sVar8 = sVar8 + -0x19;
    uVar24 = uVar24 + 0x19;
    break;
  case 6:
    sVar8 = sVar8 + -0x19;
    break;
  case 7:
    sVar8 = sVar8 + -0x19;
override_jmp_140a30558_case_7:
    uVar24 = uVar24 - 0x19;
  }
LAB_140a3058b:
  sVar22 = 0;
  if (-1 < sVar8) {
    sVar22 = sVar8;
  }
  if ((short)uVar24 < 0) {
    uVar24 = 0;
  }
  if (_DAT_14250a55c <= sVar22) {
    sVar22 = (short)_DAT_14250a55c + -1;
  }
  if (_DAT_14250a560 <= (int)(uint)uVar24) {
    uVar24 = (short)_DAT_14250a560 - 1;
  }
  sVar26 = uVar24 - *(short *)((longlong)plVar15 + 0x1c);
  sVar8 = sVar22 - (short)plVar15[2];
  iVar9 = -(int)sVar8;
  if (iVar9 < 0) {
    iVar9 = (int)sVar8;
  }
  iVar25 = -(int)sVar26;
  if (iVar25 < 0) {
    iVar25 = (int)sVar26;
  }
  iVar10 = (int)(short)iVar9;
  iVar9 = (int)(short)iVar25;
  if ((sVar26 < 0) && (iVar10 * 2 <= iVar9)) {
LAB_140a30652:
    cVar7 = '\0';
  }
  else if ((sVar26 < 1) || (iVar9 < iVar10 * 2)) {
    if (sVar8 < 0) {
      if (iVar10 < iVar9 * 2) {
        if (sVar26 < 1) {
          if (-1 < sVar26) goto LAB_140a30652;
          cVar7 = '\a';
        }
        else {
          cVar7 = '\x05';
        }
      }
      else {
        cVar7 = '\x06';
      }
    }
    else {
      if (sVar8 < 1) goto LAB_140a30652;
      if (iVar10 < iVar9 * 2) {
        if (sVar26 < 0) {
          cVar7 = '\x01';
        }
        else {
          if (sVar26 < 1) goto LAB_140a30652;
          cVar7 = '\x03';
        }
      }
      else {
        cVar7 = '\x02';
      }
    }
  }
  else {
    cVar7 = '\x04';
  }
  if (*(char *)((longlong)plVar15 + 0x14a) == cVar7) {
    asStack_120[0] = sVar22;
    auStack_11c[0] = uVar24;
    auStack_118[0] = (short)plVar15[4];
    cVar5 = cVar7;
  }
LAB_140a3067b:
  if (((*(short *)(param_1 + 0xa8) != sStack_122) || (*(short *)(param_1 + 0xaa) != sStack_124)) ||
     (*(short *)(param_1 + 0xac) != sStack_110)) {
    puStack_168 = (undefined8 *)((ulonglong)puStack_168 & 0xffffffff00000000);
    FUN_140074ea0(param_1,sStack_122);
    goto LAB_140a3097a;
  }
  if (((*(char *)((longlong)plVar15 + 0x14d) != '\0') ||
      (*(char *)((longlong)plVar15 + 0x14c) < '\x03')) ||
     ((*(char *)((longlong)plVar15 + 0x14a) != cVar5 || (asStack_120[0] == -30000))))
  goto LAB_140a3097a;
  lVar17 = **(longlong **)(plVar15[0x25] + 0x18);
  FUN_140c7b1e0(lVar17,2);
  puVar18 = (undefined8 *)FUN_1415530e0(0xa0);
  apuStack_f8[0] = puVar18;
  projectile_base_init(puVar18,0);
  *puVar18 = &UNK_141678420;
  if ((*(uint *)(lVar17 + 0x10) & 0x20000000) == 0) {
    FUN_140c7dc00(lVar17);
  }
  iVar9 = *(int *)(lVar17 + 0x74);
  if ((*(uint *)(lVar17 + 0x10) & 0x20000000) == 0) {
    FUN_140c7dc00(lVar17);
  }
  lVar20 = (longlong)iVar9 * 1000000 + (longlong)*(int *)(lVar17 + 0x78);
  if (lVar20 < 1) {
    iVar9 = 200;
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = SUB168(SEXT816(1000000000),8);
    iVar9 = SUB164((auVar4 << 0x40 | ZEXT816(1000000000)) / SEXT816(lVar20),0);
  }
  *(int *)(puVar18 + 0xb) = iVar9;
  if (iVar9 < 0xc9) {
    if (iVar9 < 0x14) {
      *(undefined4 *)(puVar18 + 0xb) = 0x14;
    }
  }
  else {
    *(undefined4 *)(puVar18 + 0xb) = 200;
  }
  sVar22 = (short)plVar15[2];
  *(short *)(puVar18 + 4) = sVar22;
  sVar8 = *(short *)((longlong)plVar15 + 0x1c);
  *(short *)((longlong)puVar18 + 0x22) = sVar8;
  uVar1 = (undefined2)plVar15[4];
  *(undefined2 *)((longlong)puVar18 + 0x24) = uVar1;
  if (7 < *(byte *)((longlong)plVar15 + 0x14a)) goto LAB_140a3081c;
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)((longlong)plVar15 + 0x14a)) {
  case 0:
    goto override_jmp_140a307d3_case_7;
  case 1:
    sVar22 = sVar22 + 1;
    goto LAB_140a3080f;
  case 2:
    sVar22 = sVar22 + 1;
    *(short *)(puVar18 + 4) = sVar22;
    goto LAB_140a3081c;
  case 3:
    sVar22 = sVar22 + 1;
    *(short *)(puVar18 + 4) = sVar22;
  case 4:
    sVar8 = sVar8 + 1;
    break;
  case 5:
    sVar22 = sVar22 + -1;
    *(short *)(puVar18 + 4) = sVar22;
    sVar8 = sVar8 + 1;
    break;
  case 6:
    sVar22 = sVar22 + -1;
    *(short *)(puVar18 + 4) = sVar22;
    goto LAB_140a3081c;
  case 7:
    sVar22 = sVar22 + -1;
LAB_140a3080f:
    *(short *)(puVar18 + 4) = sVar22;
override_jmp_140a307d3_case_7:
    sVar8 = sVar8 + -1;
  }
  *(short *)((longlong)puVar18 + 0x22) = sVar8;
LAB_140a3081c:
  *(short *)((longlong)puVar18 + 0x32) = sVar22;
  *(short *)((longlong)puVar18 + 0x34) = sVar8;
  *(undefined2 *)((longlong)puVar18 + 0x36) = uVar1;
  *(short *)((longlong)puVar18 + 0x26) = asStack_120[0];
  *(ushort *)(puVar18 + 5) = auStack_11c[0];
  *(undefined2 *)((longlong)puVar18 + 0x2a) = auStack_118[0];
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)(puVar18 + 8) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 200;
  *(short *)((longlong)puVar18 + 0x2c) = sVar22;
  *(short *)((longlong)puVar18 + 0x2e) = sVar8;
  *(undefined2 *)(puVar18 + 6) = uVar1;
  puVar18[0x13] = lVar17;
  *(short *)(lVar17 + 8) = sVar22;
  *(undefined2 *)(puVar18[0x13] + 10) = *(undefined2 *)((longlong)puVar18 + 0x2e);
  *(undefined2 *)(puVar18[0x13] + 0xc) = *(undefined2 *)(puVar18 + 6);
  FUN_140073c90(puVar18[0x13],0xc,*(undefined4 *)(puVar18 + 2));
  plVar21 = plStack_100;
  puVar18[3] = 0;
  *(undefined4 *)((longlong)puVar18 + 0x4c) = 0;
  *(uint *)(lVar17 + 0x10) = *(uint *)(lVar17 + 0x10) | 2;
  *(uint *)(puVar18 + 9) = *(uint *)(puVar18 + 9) | 0x14;
  if (plStack_100 != (longlong *)0x0) {
    *(int *)(puVar18 + 0xd) = (int)plStack_100[0x26];
  }
  uStack_160 = 0x4b;
  if (cVar6 == '\0') {
    uStack_160 = 0x19;
  }
  uStack_138 = 0xffffffff;
  uStack_140 = 0x2f;
  uStack_148 = 1;
  uStack_150 = 0;
  puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,uStack_160);
  lStack_158 = lVar17;
  iVar9 = FUN_1413812a0(param_1,0x3b,0xb,0xf);
  *(int *)(puVar18 + 10) = iVar9 + 100;
  if (plVar21 != (longlong *)0x0) {
    FUN_1414fc5c0(0x1423f3970,param_1,plVar21,6);
  }
  if (*(short *)(param_1 + 0x814) == 2) {
    *(uint *)(puVar18 + 9) = *(uint *)(puVar18 + 9) | 0x40;
  }
  *(undefined1 *)((longlong)plVar15 + 0x14d) = 1;
  FUN_1413843f0(param_1);
LAB_140a3097a:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_188);
  return;
}

