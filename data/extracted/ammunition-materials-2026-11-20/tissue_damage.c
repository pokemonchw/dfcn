/* Actual Ghidra output, research name; VA 0x1413d49d0..0x1413d5f90. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tissue_damage(longlong param_1,ushort param_2,int *param_3,longlong param_4,uint *param_5,
                  int *param_6,longlong *param_7,undefined8 param_8,int param_9,int *param_10,
                  int param_11)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  ushort uVar4;
  int *piVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  ushort *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_2f8 [32];
  code *pcStack_2d8;
  undefined4 uStack_2d0;
  int *piStack_2c8;
  longlong *plStack_2c0;
  uint *puStack_2b8;
  int *piStack_2b0;
  undefined8 *puStack_2a8;
  int iStack_2a0;
  ushort uStack_298;
  int iStack_294;
  int iStack_290;
  uint uStack_28c;
  longlong lStack_288;
  longlong lStack_280;
  int iStack_278;
  longlong lStack_270;
  uint *puStack_268;
  longlong lStack_260;
  int *piStack_258;
  undefined8 uStack_250;
  int *piStack_248;
  longlong lStack_240;
  ushort *puStack_238;
  longlong lStack_230;
  longlong lStack_228;
  undefined4 *puStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  ushort auStack_118 [2];
  int iStack_114;
  undefined1 auStack_f8 [128];
  undefined4 uStack_78;
  ulonglong uStack_68;
  
  uStack_68 = _DAT_1418be040 ^ (ulonglong)auStack_2f8;
  uVar20 = (ulonglong)(short)param_2;
  puStack_268 = param_5;
  piStack_248 = param_6;
  piStack_258 = param_10;
  *param_5 = 1;
  iVar21 = 0;
  *param_6 = 0;
  *param_7 = 0;
  uStack_298 = param_2;
  lStack_270 = param_1;
  lStack_240 = param_4;
  if (((ulonglong)(*(longlong *)(param_1 + 0x4f8) - *(longlong *)(param_1 + 0x4f0) >> 2) <= uVar20)
     || ((*(byte *)(*(longlong *)(param_1 + 0x4f0) + uVar20 * 4) & 2) != 0)) goto LAB_1413d5eb8;
  if ((*param_3 < 1) ||
     ((1 < param_3[0x26] && ((*(byte *)(*(longlong *)(param_3 + 0x24) + 1) & 2) != 0)))) {
    *param_5 = 4;
    goto LAB_1413d5eb8;
  }
  pcStack_2d8 = callee_140069460;
  FUN_141553708(auStack_f8,0x20,4,callee_140070cc0);
  uStack_78 = 0;
  iStack_294 = 0;
  if ((((((_DAT_1418be238 == 1) && (param_1 != 0)) && (_DAT_142407550 - _DAT_142407548 >> 3 != 0))
       && ((_DAT_142407590 != 0 && (DAT_142663082 != '\0')))) && (*(int *)(param_1 + 0x978) < 100))
     && (param_1 == _DAT_142407590)) {
    *(undefined2 *)(param_1 + 0xbe0) = 1;
    DAT_142663083 = 1;
  }
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_180 = 0;
  lStack_170 = 0;
  lStack_160 = 0;
  uStack_178 = 0;
  lStack_168 = 0;
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_140 = 0;
  lStack_130 = 0;
  uStack_148 = 0;
  lStack_138 = 0;
  lStack_128 = 0;
  uStack_188 = 0;
  uStack_186 = 0;
  if (*(longlong **)(param_3 + 0xe) == (longlong *)0x0) {
    if (((short)param_3[0x50] != -1) &&
       (lStack_218 = FUN_1414c6fe0(0x1423f3970,(short)param_3[0x50],param_3[0x51]), lStack_218 != 0)
       ) {
      lStack_1f8 = (longlong)param_3[0x4f];
      switch((short)param_3[0x52]) {
      case 0:
      case 3:
      case 4:
      case 5:
        lStack_1d8 = (longlong)*(int *)(lStack_218 + 0x90);
        break;
      case 1:
        lStack_1d8 = (longlong)*(int *)(lStack_218 + 0x94);
        break;
      case 2:
        lStack_1d8 = (longlong)(*(int *)(lStack_218 + 0x98) / 1000 + 1);
      }
      lVar16 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lStack_1d8 * lStack_1f8),8) +
               lStack_1d8 * lStack_1f8;
      lStack_1c8 = (lVar16 >> 6) - (lVar16 >> 0x3f);
      if (((lStack_1c8 < 1) && (0 < lStack_1f8)) && (0 < lStack_1d8)) {
        lStack_1c8 = 1;
      }
      lVar16 = *param_3 * lStack_1c8;
      lStack_1e8 = lStack_1f8;
      goto LAB_1413d4d54;
    }
  }
  else {
    uVar10 = (**(code **)(**(longlong **)(param_3 + 0xe) + 0x40))();
    uVar7 = (**(code **)(**(longlong **)(param_3 + 0xe) + 0x38))();
    lStack_218 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar10);
    if (lStack_218 != 0) {
      iVar11 = (**(code **)(**(longlong **)(param_3 + 0xe) + 0x2c0))();
      lStack_1f8 = (longlong)iVar11;
      lStack_1e8 = lStack_1f8;
      iVar11 = (**(code **)(**(longlong **)(param_3 + 0xe) + 0x168))();
      lStack_1d8 = (longlong)iVar11;
      lVar16 = *(longlong *)(param_3 + 0xe);
      if ((*(uint *)(lVar16 + 0x10) & 0x20000000) == 0) {
        item_mass(lVar16);
      }
      iVar11 = *(int *)(lVar16 + 0x74);
      lVar16 = *(longlong *)(param_3 + 0xe);
      if ((*(uint *)(lVar16 + 0x10) & 0x20000000) == 0) {
        item_mass(lVar16);
      }
      iVar11 = *(int *)(lVar16 + 0x78) / 1000 + iVar11 * 1000;
      lStack_1c8 = (longlong)iVar11;
      if ((iVar11 < 1) && (0 < lStack_1d8)) {
        lStack_1c8 = 1;
      }
      lVar16 = *param_3 * lStack_1c8;
      uVar20 = (ulonglong)uStack_298;
LAB_1413d4d54:
      lStack_208 = (longlong)param_3[0x4c];
      uStack_198 = (ulonglong)param_3[0x4d];
      iStack_184 = param_3[0x4e];
      lStack_1b8 = lVar16 / 1000 + 1;
      *param_7 = lStack_1b8;
      if (((*(uint *)(param_1 + 0x110) & 0x8000) != 0) &&
         ((param_3[0x26] < 1 || ((**(byte **)(param_3 + 0x24) & 0x10) == 0)))) {
        lStack_1b8 = lStack_1b8 * 2;
      }
      puStack_238 = (ushort *)0x0;
      lStack_230 = 0;
      lStack_228 = 0;
      FUN_1413db080(param_1,uVar20 & 0xffff,&puStack_238);
      if (lStack_230 - (longlong)puStack_238 >> 1 != 0) {
        uStack_298 = *puStack_238;
        uVar20 = (ulonglong)uStack_298;
      }
      if (puStack_238 != (ushort *)0x0) {
        uVar18 = (lStack_228 - (longlong)puStack_238 >> 1) * 2;
        puVar17 = puStack_238;
        if (0xfff < uVar18) {
          uVar18 = uVar18 + 0x27;
          puVar17 = *(ushort **)(puStack_238 + -4);
          if (0x1f < (ulonglong)((longlong)puStack_238 + (-8 - (longlong)puVar17))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        callee_1415530d0(puVar17,uVar18);
      }
      puStack_2a8 = (undefined8 *)CONCAT44(puStack_2a8._4_4_,0xffffffff);
      piStack_2b0 = (int *)CONCAT62(piStack_2b0._2_6_,0xffff);
      puStack_2b8 = (uint *)CONCAT44(puStack_2b8._4_4_,3);
      plStack_2c0 = (longlong *)0x0;
      piStack_2c8 = (int *)0x0;
      uStack_2d0 = 3;
      pcStack_2d8 = (code *)CONCAT44(pcStack_2d8._4_4_,0x32);
      iStack_278 = FUN_1413812a0(param_1,2,0x65,5);
      uVar18 = (ulonglong)((longlong)iStack_278 * 0x66666667) >> 0x20;
      iVar11 = iStack_278 / 10;
      if (iStack_278 / 10 < param_9) {
        iVar11 = param_9;
      }
      if (iVar11 < 1) {
        *param_10 = 0x14;
        iVar13 = 0x14;
      }
      else {
        iVar13 = param_3[0x53];
        uVar18 = (longlong)iVar13 % (longlong)iVar11 & 0xffffffff;
        iVar13 = (iVar13 - iVar11) / 3 + iVar13 / iVar11;
        *param_10 = iVar13;
        if (iVar13 < 0) {
          *param_10 = 0;
          iVar13 = 0;
        }
      }
      iVar15 = iVar11 + 0x32;
      if (99 < iVar15) {
        iVar22 = iVar15 / 0x32;
        iVar15 = -(iVar15 >> 0x1f);
        uVar18 = (longlong)iVar13 % (longlong)iVar22 & 0xffffffff;
        *param_10 = iVar13 / iVar22;
      }
      uVar12 = FUN_140ece790(iVar15,uVar18);
      if (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff <
          0x2aaaaaab) {
        uVar12 = FUN_140ece790();
        *param_10 = *param_10 +
                    (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0xba2e8bb;
        uVar12 = FUN_140ece790();
        if (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x20000000) {
          uVar12 = FUN_140ece790();
          *param_10 = *param_10 +
                      (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                                0x7fffffff) / 0xba2e8bb;
        }
      }
      iVar13 = *param_10;
      if (iVar13 < 0) {
        *param_10 = 0;
        iVar13 = iVar21;
      }
      else if (0x14 < iVar13) {
        *param_10 = 0x14;
        iVar13 = 0x14;
      }
      if (0 < iVar11) {
        if (param_11 < -2) {
          *param_10 = 0;
        }
        else if (param_11 == -2) {
          iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2;
          *param_10 = iVar13;
LAB_1413d505c:
          if (iVar13 < 0) {
            *param_10 = 0;
          }
          else if (0x14 < iVar13) goto LAB_1413d506a;
        }
        else {
          if (param_11 == -1) {
            iVar13 = iVar13 / 2;
            *param_10 = iVar13;
            goto LAB_1413d505c;
          }
          if (param_11 == 1) {
            iVar13 = iVar13 * 2;
            *param_10 = iVar13;
            goto LAB_1413d505c;
          }
          if (param_11 == 2) {
            iVar13 = iVar13 * 4;
            *param_10 = iVar13;
            goto LAB_1413d505c;
          }
          if (param_11 < 3) goto LAB_1413d505c;
LAB_1413d506a:
          *param_10 = 0x14;
        }
      }
      iStack_290 = -1;
      lStack_260 = -1;
      iVar11 = (int)(*(longlong *)(param_1 + 0x410) - *(longlong *)(param_1 + 0x408) >> 3) + -1;
      if (-1 < iVar11) {
        lStack_288 = (longlong)iVar11;
        do {
          lVar16 = *(longlong *)(param_1 + 0x408);
          puVar1 = *(undefined8 **)(lVar16 + lStack_288 * 8);
          sVar8 = *(short *)(puVar1 + 1);
          if ((((sVar8 != 2) && (sVar8 != 5)) &&
              ((sVar8 = (*(code *)**(undefined8 **)*puVar1)(), sVar8 != 0x1b ||
               (lVar16 = *(longlong *)(param_1 + 0x408),
               *(short *)(*(longlong *)(lVar16 + lStack_288 * 8) + 8) != 1)))) ||
             (lVar19 = lStack_288,
             cVar6 = FUN_14139fa70(param_1,*(undefined8 *)(lVar16 + lStack_288 * 8),uVar20 & 0xffff)
             , cVar6 == '\0')) goto LAB_1413d5988;
          plVar2 = (longlong *)**(longlong **)(*(longlong *)(param_1 + 0x408) + lVar19 * 8);
          uVar12 = FUN_140ece790();
          sVar9 = (**(code **)(*plVar2 + 8))(plVar2);
          uVar20 = (ulonglong)sVar9;
          uVar7 = (**(code **)*plVar2)(plVar2);
          iVar11 = iStack_278;
          sVar8 = 0;
          switch(uVar7) {
          case 0x19:
            if ((sVar9 < 0) || ((ulonglong)(_DAT_14250f298 - _DAT_14250f290 >> 3) <= uVar20))
            goto LAB_1413d52be;
            sVar8 = *(short *)(*(longlong *)(_DAT_14250f290 + uVar20 * 8) + 0x130);
            break;
          case 0x1a:
            if ((sVar9 < 0) || ((ulonglong)(_DAT_14250f2f8 - _DAT_14250f2f0 >> 3) <= uVar20))
            goto LAB_1413d52be;
            sVar8 = *(short *)(*(longlong *)(_DAT_14250f2f0 + uVar20 * 8) + 0x100);
            break;
          default:
LAB_1413d52be:
            break;
          case 0x1c:
            if ((sVar9 < 0) || ((ulonglong)(_DAT_14250f328 - _DAT_14250f320 >> 3) <= uVar20))
            goto LAB_1413d52be;
            sVar8 = *(short *)(*(longlong *)(_DAT_14250f320 + uVar20 * 8) + 0x100);
            break;
          case 0x1d:
            if ((sVar9 < 0) || ((ulonglong)(_DAT_14250f2e0 - _DAT_14250f2d8 >> 3) <= uVar20))
            goto LAB_1413d52be;
            sVar8 = *(short *)(*(longlong *)(_DAT_14250f2d8 + uVar20 * 8) + 0x100);
            break;
          case 0x25:
          case 0x29:
          case 0x2a:
          case 0x2b:
            sVar8 = 1;
            break;
          case 0x28:
            sVar8 = 0x14;
            break;
          case 0x3c:
            if ((sVar9 < 0) || ((ulonglong)(_DAT_14250f340 - _DAT_14250f338 >> 3) <= uVar20))
            goto LAB_1413d52be;
            sVar8 = *(short *)(*(longlong *)(_DAT_14250f338 + uVar20 * 8) + 0x140);
            break;
          case 0x3d:
          case 0x52:
            sVar8 = 0x32;
            break;
          case 0x3e:
            sVar8 = 0x1e;
            break;
          case 0x55:
            sVar8 = 100;
          }
          if ((int)sVar8 <=
              (int)((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x147ae15)) goto LAB_1413d5988;
          sVar9 = (**(code **)(*plVar2 + 0x508))(plVar2);
          sVar8 = sVar9 + 5;
          if ((*(uint *)(plVar2 + 2) & 0x8000000) == 0) {
            sVar8 = sVar9;
          }
          switch(sVar8) {
          case 1:
            iVar11 = iVar11 * 6;
            break;
          case 2:
            iVar11 = iVar11 * 7;
            break;
          case 3:
            iVar11 = iVar11 * 8;
            break;
          case 4:
            iVar11 = iVar11 * 9;
            break;
          case 5:
            iVar11 = iVar11 * 2;
            goto LAB_1413d535c;
          case 6:
            iVar11 = iVar11 * 0xb;
            break;
          case 7:
            iVar11 = iVar11 * 0xc;
            break;
          case 8:
            iVar11 = iVar11 * 0xd;
            break;
          case 9:
            iVar11 = iVar11 * 0xe;
            break;
          case 10:
            iVar11 = iVar11 * 3;
          default:
            goto LAB_1413d535c;
          }
          iVar11 = iVar11 / 5;
LAB_1413d535c:
          lVar16 = FUN_1400bb3f0(*(undefined4 *)((longlong)plVar2 + 0x1c),param_1 + 0xd50);
          iVar13 = iVar21;
          if (((lVar16 != 0) &&
              (iVar15 = *(int *)(lVar16 + 4) / 0x127500 + *(int *)(lVar16 + 0xc) / 100, -1 < iVar15)
              ) && (iVar13 = iVar15, 100 < iVar15)) {
            iVar13 = 100;
          }
          (**(code **)(*plVar2 + 0x708))(plVar2);
          puVar14 = (undefined4 *)
                    FUN_1400bb3f0(*(undefined4 *)((longlong)plVar2 + 0x1c),param_1 + 0xd50);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)FUN_1415530e0(0x10);
            *puVar14 = 0xffffffff;
            *(undefined8 *)(puVar14 + 1) = 0;
            puVar14[3] = 0;
            *puVar14 = *(undefined4 *)((longlong)plVar2 + 0x1c);
            puStack_220 = puVar14;
            FUN_1400bb5d0(puVar14,param_1 + 0xd50);
          }
          puVar14[3] = puVar14[3] + 1;
          lStack_1b0 = (longlong)(((iVar13 + 100) * iVar11) / 100);
          uStack_1a8 = 1;
          uStack_1a0 = 1;
          uStack_200 = 0;
          iVar11 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
          uStack_190 = (ulonglong)iVar11;
          if ((longlong)uStack_198 < (longlong)uStack_190) {
            uStack_190 = uStack_198;
          }
          uVar10 = (**(code **)(*plVar2 + 0x40))(plVar2);
          uVar7 = (**(code **)(*plVar2 + 0x38))(plVar2);
          lStack_210 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar10);
          if (lStack_210 != 0) {
            iVar11 = (**(code **)(*plVar2 + 0x6e0))
                               (plVar2,*(undefined4 *)(param_1 + 0xa4),
                                *(undefined2 *)(param_1 + 300),uStack_198 & 0xffffffff);
            lStack_1f0 = (longlong)iVar11;
            uStack_1e0 = 5;
            lStack_1d0 = (longlong)*(int *)(lStack_210 + 0x90);
            lStack_1c0 = (lStack_1f0 * lStack_1d0) / 1000;
            if (((lStack_1c0 < 1) && (0 < lStack_1f0)) && (0 < lStack_1d0)) {
              lStack_1c0 = 1;
            }
            uStack_187 = (**(code **)(*plVar2 + 0x6e8))(plVar2);
            uStack_185 = (**(code **)(*plVar2 + 0x6f0))(plVar2);
            lVar16 = lStack_1b8;
            material_collision(&lStack_218);
            *puStack_268 = *puStack_268 & 0xfffffffe;
            if ((lStack_260 < lVar16 - lStack_1b8) || (lStack_260 == -1)) {
              iStack_290 = *(int *)((longlong)plVar2 + 0x1c);
              lStack_260 = lVar16 - lStack_1b8;
            }
            if ((0 < lStack_130 + lStack_140 + lStack_160 + lStack_170) &&
               (puVar1 = *(undefined8 **)(param_3 + 0xe), puVar1 != (undefined8 *)0x0)) {
              uVar20 = 0;
              if (0 < lStack_160) {
                uVar18 = (lStack_160 * 0x9d80) / 5;
                uVar20 = 0;
                if (0 < (int)uVar18) {
                  uVar20 = uVar18 & 0xffffffff;
                }
              }
              if (0 < lStack_170) {
                uVar12 = (int)lStack_170 * 4;
                if (0xc4e00 < (int)uVar12) {
                  uVar12 = 0xc4e00;
                }
                if ((int)uVar20 < (int)uVar12) {
                  uVar20 = (ulonglong)uVar12;
                }
              }
              if ((0 < lStack_130) &&
                 (uVar18 = (lStack_130 * 0x9d80) / 5, (int)uVar20 < (int)uVar18)) {
                uVar20 = uVar18 & 0xffffffff;
              }
              if (0 < lStack_140) {
                uVar12 = (int)lStack_140 * 4;
                if (0xc4e00 < (int)uVar12) {
                  uVar12 = 0xc4e00;
                }
                if ((int)uVar20 < (int)uVar12) {
                  uVar20 = (ulonglong)uVar12;
                }
              }
              if (0 < (int)uVar20) {
                sVar8 = (**(code **)*puVar1)(puVar1);
                if ((sVar8 == 0x18) &&
                   (uVar12 = (int)uVar20 / 100, uVar20 = (ulonglong)uVar12, (int)uVar12 < 1)) {
                  uVar20 = 1;
                }
                (**(code **)(**(longlong **)(param_3 + 0xe) + 0x3d8))
                          (*(longlong **)(param_3 + 0xe),uVar20,0,0);
              }
            }
            if (0 < lStack_128 + lStack_138 + lStack_158 + lStack_168) {
              iVar11 = 0;
              if (0 < lStack_158) {
                iVar13 = (int)((lStack_158 * 0x9d80) / 5);
                iVar11 = 0;
                if (0 < iVar13) {
                  iVar11 = iVar13;
                }
              }
              if (0 < lStack_168) {
                iVar13 = (int)lStack_168 * 4;
                if (0xc4e00 < iVar13) {
                  iVar13 = 0xc4e00;
                }
                if (iVar11 < iVar13) {
                  iVar11 = iVar13;
                }
              }
              if ((0 < lStack_128) && (iVar13 = (int)((lStack_128 * 0x9d80) / 5), iVar11 < iVar13))
              {
                iVar11 = iVar13;
              }
              if (0 < lStack_138) {
                iVar13 = (int)lStack_138 * 4;
                if (0xc4e00 < iVar13) {
                  iVar13 = 0xc4e00;
                }
                if (iVar11 < iVar13) {
                  iVar11 = iVar13;
                }
              }
              if (0 < iVar11) {
                (**(code **)(*plVar2 + 0x3d8))(plVar2,iVar11,0,0);
              }
            }
            if (((0 < lStack_130 + lStack_140 + lStack_160 + lStack_170) &&
                (*(longlong *)(param_3 + 0xe) == 0)) || (lStack_1b8 < 1)) {
              lStack_1b8 = 0;
              iStack_114 = iStack_290;
              if (iStack_290 == -1) {
                iStack_114 = *(int *)((longlong)plVar2 + 0x1c);
              }
              uStack_78 = 0;
              auStack_118[0] = 1;
              if (_DAT_14250a08c < 100) {
                FUN_14065bb60((longlong)_DAT_14250a08c * 0xa8 + 0x142505e08,auStack_118);
                if (auStack_118[0] < 0x26) {
                  lVar16 = (longlong)(short)auStack_118[0] * 2;
                  *(short *)(lVar16 + 0x142509fa8) = *(short *)(lVar16 + 0x142509fa8) + 1;
                  if (*(short *)(lVar16 + 0x142509ff4) == -1) {
                    *(short *)(lVar16 + 0x142509ff4) = _DAT_14250a08c;
                  }
                  *(short *)(lVar16 + 0x14250a040) = _DAT_14250a08c;
                }
                _DAT_14250a08c = _DAT_14250a08c + 1;
              }
              lVar16 = *(longlong *)(param_3 + 0xe);
              if ((lVar16 != 0) && ((*(uint *)(lVar16 + 0x10) & 0x20000) != 0)) {
                uStack_78 = 0;
                auStack_118[0] = 0x25;
                iStack_114 = *(int *)(lVar16 + 0x1c);
                if (_DAT_14250a08c < 100) {
                  FUN_14065bb60((longlong)_DAT_14250a08c * 0xa8 + 0x142505e08,auStack_118);
                  if (auStack_118[0] < 0x26) {
                    lVar16 = (longlong)(short)auStack_118[0] * 2;
                    *(short *)(lVar16 + 0x142509fa8) = *(short *)(lVar16 + 0x142509fa8) + 1;
                    if (*(short *)(lVar16 + 0x142509ff4) == -1) {
                      *(short *)(lVar16 + 0x142509ff4) = _DAT_14250a08c;
                    }
                    *(short *)(lVar16 + 0x14250a040) = _DAT_14250a08c;
                  }
                  _DAT_14250a08c = _DAT_14250a08c + 1;
                }
              }
              if ((*(uint *)(plVar2 + 2) & 0x20000) != 0) {
                uStack_78 = 0;
                auStack_118[0] = 0x25;
                iStack_114 = *(int *)((longlong)plVar2 + 0x1c);
                if (_DAT_14250a08c < 100) {
                  FUN_14065bb60((longlong)_DAT_14250a08c * 0xa8 + 0x142505e08,auStack_118);
                  if (auStack_118[0] < 0x26) {
                    lVar16 = (longlong)(short)auStack_118[0] * 2;
                    *(short *)(lVar16 + 0x142509fa8) = *(short *)(lVar16 + 0x142509fa8) + 1;
                    if (*(short *)(lVar16 + 0x142509ff4) == -1) {
                      *(short *)(lVar16 + 0x142509ff4) = _DAT_14250a08c;
                    }
                    *(short *)(lVar16 + 0x14250a040) = _DAT_14250a08c;
                  }
                  _DAT_14250a08c = _DAT_14250a08c + 1;
                }
              }
              goto LAB_1413d5e8b;
            }
            uStack_78 = 0;
            auStack_118[0] = 0;
            iStack_114 = *(int *)((longlong)plVar2 + 0x1c);
            if (_DAT_14250a08c < 100) {
              FUN_14065bb60((longlong)_DAT_14250a08c * 0xa8 + 0x142505e08,auStack_118);
              if (auStack_118[0] < 0x26) {
                lVar16 = (longlong)(short)auStack_118[0] * 2;
                *(short *)(lVar16 + 0x142509fa8) = *(short *)(lVar16 + 0x142509fa8) + 1;
                if (*(short *)(lVar16 + 0x142509ff4) == -1) {
                  *(short *)(lVar16 + 0x142509ff4) = _DAT_14250a08c;
                }
                *(short *)(lVar16 + 0x14250a040) = _DAT_14250a08c;
              }
              _DAT_14250a08c = _DAT_14250a08c + 1;
            }
            lVar16 = *(longlong *)(param_3 + 0xe);
            if ((lVar16 != 0) && ((*(uint *)(lVar16 + 0x10) & 0x20000) != 0)) {
              uStack_78 = 0;
              auStack_118[0] = 0x25;
              iStack_114 = *(int *)(lVar16 + 0x1c);
              if (_DAT_14250a08c < 100) {
                FUN_14065bb60((longlong)_DAT_14250a08c * 0xa8 + 0x142505e08,auStack_118);
                if (auStack_118[0] < 0x26) {
                  lVar16 = (longlong)(short)auStack_118[0] * 2;
                  *(short *)(lVar16 + 0x142509fa8) = *(short *)(lVar16 + 0x142509fa8) + 1;
                  if (*(short *)(lVar16 + 0x142509ff4) == -1) {
                    *(short *)(lVar16 + 0x142509ff4) = _DAT_14250a08c;
                  }
                  *(short *)(lVar16 + 0x14250a040) = _DAT_14250a08c;
                }
                _DAT_14250a08c = _DAT_14250a08c + 1;
              }
            }
            param_1 = lStack_270;
            if ((*(uint *)(plVar2 + 2) & 0x20000) != 0) {
              uStack_78 = 0;
              auStack_118[0] = 0x25;
              iStack_114 = *(int *)((longlong)plVar2 + 0x1c);
              if (_DAT_14250a08c < 100) {
                FUN_14065bb60((longlong)_DAT_14250a08c * 0xa8 + 0x142505e08,auStack_118);
                if (auStack_118[0] < 0x26) {
                  lVar16 = (longlong)(short)auStack_118[0] * 2;
                  *(short *)(lVar16 + 0x142509fa8) = *(short *)(lVar16 + 0x142509fa8) + 1;
                  if (*(short *)(lVar16 + 0x142509ff4) == -1) {
                    *(short *)(lVar16 + 0x142509ff4) = _DAT_14250a08c;
                  }
                  *(short *)(lVar16 + 0x14250a040) = _DAT_14250a08c;
                }
                _DAT_14250a08c = _DAT_14250a08c + 1;
                param_1 = lStack_270;
              }
            }
          }
LAB_1413d5988:
          lStack_288 = lStack_288 + -1;
          param_10 = piStack_258;
          if (lStack_288 < 0) break;
          uVar20 = (ulonglong)uStack_298;
        } while( true );
      }
      puStack_2a8 = (undefined8 *)CONCAT44(puStack_2a8._4_4_,0xffffffff);
      piStack_2b0 = (int *)CONCAT62(piStack_2b0._2_6_,0xffff);
      puStack_2b8 = (uint *)CONCAT44(puStack_2b8._4_4_,3);
      plStack_2c0 = (longlong *)0x0;
      piStack_2c8 = (int *)0x0;
      uStack_2d0 = 3;
      pcStack_2d8 = (code *)CONCAT44(pcStack_2d8._4_4_,0x32);
      iVar11 = FUN_1413812a0(param_1,1,0x65,5);
      lVar16 = lStack_240;
      piVar5 = piStack_248;
      uVar4 = uStack_298;
      lStack_1b0 = (longlong)iVar11;
      uStack_1a8 = 1;
      uStack_1a0 = 1;
      uStack_28c = 0;
      lStack_280 = 0;
      uStack_250 = 0;
      iStack_2a0 = *param_10;
      puStack_2a8 = &uStack_250;
      piStack_2b0 = piStack_248;
      puStack_2b8 = &uStack_28c;
      plStack_2c0 = &lStack_280;
      piStack_2c8 = &iStack_294;
      uStack_2d0 = CONCAT31(uStack_2d0._1_3_,1);
      pcStack_2d8 = (code *)&lStack_218;
      FUN_1413d5f90(param_1,uStack_298,param_3,lStack_240);
      if ((uStack_28c & 1) == 0) {
        *puStack_268 = *puStack_268 & 0xfffffffe;
      }
      if ((uStack_28c & 2) != 0) {
        *puStack_268 = *puStack_268 | 2;
      }
      callee_1400e4d60(param_1,iStack_294);
      iVar13 = iStack_294;
      iVar11 = iStack_294 * 10;
      if ((*(longlong *)(param_1 + 0xa98) != 0) && (0 < iVar11)) {
        piStack_2c8 = (int *)((ulonglong)piStack_2c8 & 0xffffffffffffff00);
        puVar14 = (undefined4 *)
                  FUN_1405d9c50(*(longlong *)(param_1 + 0xa98) + 0x248,1,0xffffffffffffffff,0);
        iVar15 = puVar14[1];
        puVar14[1] = iVar15 + iVar11;
        iVar22 = 100;
        if (100 < iVar15 + iVar11) {
          puVar14[1] = 100;
        }
        cVar6 = callee_14137f2c0(param_1);
        if (cVar6 == '\0') {
          *puVar14 = 0xffffffff;
          puVar14[2] = 0;
        }
        else {
          *puVar14 = 0x40;
          sVar8 = *(short *)(*(longlong *)(param_1 + 0xa98) + 0x2ec);
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 0xa98) + 0x3a0);
          if (((lVar19 == 0) ||
              ((sVar8 = sVar8 + *(short *)(lVar19 + 0x24), iVar15 = iVar22, -1 < sVar8 &&
               (iVar15 = iVar21, sVar8 < 0x65)))) && (iVar15 = iVar21, sVar8 < 0x5b)) {
            if (sVar8 < 0x4c) {
              if (sVar8 < 0x3d) {
                iVar15 = iVar22;
                if (9 < sVar8) {
                  if (sVar8 < 0x19) {
                    iVar15 = iVar13 * 100;
                    if (100 < iVar15) {
                      iVar15 = iVar22;
                    }
                  }
                  else {
                    iVar15 = iVar11;
                    if ((sVar8 < 0x28) && (iVar15 = iVar13 * 0x14, 100 < iVar15)) {
                      iVar15 = iVar22;
                    }
                  }
                }
              }
              else {
                iVar15 = iVar11 / 2;
              }
            }
            else {
              iVar15 = iVar11 / 10;
            }
          }
          iVar21 = puVar14[2];
          puVar14[2] = iVar21 + iVar15;
          if (100 < iVar21 + iVar15) {
            puVar14[2] = iVar22;
          }
        }
      }
      plVar2 = *(longlong **)(param_3 + 0xe);
      if (lStack_280 == 0) {
        if ((plVar2 != (longlong *)0x0) && (uVar4 != 0xffff)) {
          (**(code **)(*plVar2 + 0x408))(plVar2,param_1,uVar4);
        }
        if ((lVar16 != 0) &&
           (iVar21 = (int)(*(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2) >> 1) + -1,
           lVar19 = (longlong)iVar21, -1 < iVar21)) {
          do {
            FUN_1413e3a20(lVar16,*(undefined2 *)(*(longlong *)(param_3 + 2) + lVar19 * 2),param_1,
                          uVar4);
            lVar19 = lVar19 + -1;
          } while (-1 < lVar19);
        }
      }
      else {
        iVar21 = (*piVar5 < 0x32) + 1;
        if ((plVar2 != (longlong *)0x0) && (uVar4 != 0xffff)) {
          pcStack_2d8 = (code *)CONCAT62(pcStack_2d8._2_6_,uVar4);
          (**(code **)(*plVar2 + 0x420))(plVar2,param_1,lStack_280,iVar21);
        }
        if ((lVar16 != 0) &&
           (iVar11 = (int)(*(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2) >> 1) + -1,
           lVar19 = (longlong)iVar11, -1 < iVar11)) {
          do {
            uStack_2d0 = CONCAT22(uStack_2d0._2_2_,uVar4);
            pcStack_2d8 = (code *)CONCAT44(pcStack_2d8._4_4_,iVar21);
            FUN_1413e36d0(lVar16,*(undefined2 *)(*(longlong *)(param_3 + 2) + lVar19 * 2),param_1,
                          lStack_280);
            lVar19 = lVar19 + -1;
          } while (-1 < lVar19);
        }
      }
      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
    }
  }
LAB_1413d5e8b:
  FUN_14155311c(auStack_f8,0x20,4,callee_140069460);
LAB_1413d5eb8:
  FUN_1415530b0(uStack_68 ^ (ulonglong)auStack_2f8);
  return;
}

