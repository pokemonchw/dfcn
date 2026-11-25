
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14134e000(longlong param_1,char param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  short *psVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  char *pcVar23;
  int *piVar24;
  ulonglong uVar25;
  longlong lVar26;
  short *psVar27;
  undefined1 auStack_358 [32];
  int iStack_338;
  undefined1 uStack_334;
  char cStack_333;
  char cStack_332;
  uint uStack_330;
  longlong lStack_328;
  undefined2 *puStack_320;
  undefined2 *puStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined8 uStack_2f0;
  short *psStack_2e8;
  undefined2 *puStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  int aiStack_2a8 [152];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_358;
  bVar6 = true;
  uStack_334 = 1;
  cStack_333 = param_2;
  cStack_332 = param_3;
  if (((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0) ||
     (*(int *)(param_1 + 0x140) == -1)) {
    lStack_310 = 0;
  }
  else {
    lStack_310 = FUN_1400bb6d0(*(int *)(param_1 + 0x140),&DAT_1423f3c78);
  }
  puVar12 = (undefined2 *)
            FUN_140b6ad70(0x14251c138,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
  bVar7 = true;
  if (((puVar12 != (undefined2 *)0x0) &&
      (lVar26 = *(longlong *)(puVar12 + 0x98), bVar7 = true, lVar26 != 0)) &&
     (uStack_334 = *(longlong *)(lVar26 + 8) == 0, bVar7 = (bool)uStack_334,
     *(longlong *)(lVar26 + 0x18) != 0)) {
    bVar6 = false;
  }
  puStack_2e0 = puVar12;
  if (param_4 == 0) {
    if ((bVar6) && (*(longlong *)(param_1 + 0xa98) != 0)) {
      FUN_140e2cf40(*(longlong *)(param_1 + 0xa98) + 0x248,*(undefined2 *)(param_1 + 0xa4),
                    *(undefined2 *)(param_1 + 300));
      *(undefined4 *)(*(longlong *)(param_1 + 0xa98) + 0x32c) = *(undefined4 *)(param_1 + 0x140);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa98) + 0x330) = *(undefined4 *)(param_1 + 0x14c);
      lVar26 = *(longlong *)(param_1 + 0xa98);
      sVar2 = *(short *)(lVar26 + 0x86);
      sVar4 = *(short *)(lVar26 + 0x80);
      if (((-1 < sVar4) &&
          (((ulonglong)(longlong)sVar4 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) &&
           (-1 < sVar2)))) &&
         (lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar4 * 8),
         lVar13 = *(longlong *)(lVar18 + 0x178),
         (ulonglong)(longlong)sVar2 < (ulonglong)(*(longlong *)(lVar18 + 0x180) - lVar13 >> 3))) {
        lVar18 = *(longlong *)(lVar13 + (longlong)sVar2 * 8);
        if ((*(int *)(lVar18 + 0x6b0) < 8) ||
           ((*(byte *)(*(longlong *)(lVar18 + 0x6a8) + 7) & 4) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          FUN_140e30fe0(lVar26 + 0x248);
        }
      }
      if (puVar12 != (undefined2 *)0x0) {
        FUN_140c38790(puVar12,*(longlong *)(param_1 + 0xa98) + 0x248);
        psVar27 = *(short **)(puVar12 + 0x98);
        if (psVar27 == (short *)0x0) {
          psVar27 = (short *)FUN_1415530e0(0x68);
          psVar27[0] = 0;
          psVar27[1] = 0;
          psVar27[2] = 0;
          psVar27[3] = 0;
          psVar27[4] = 0;
          psVar27[5] = 0;
          psVar27[6] = 0;
          psVar27[7] = 0;
          psVar27[8] = 0;
          psVar27[9] = 0;
          psVar27[10] = 0;
          psVar27[0xb] = 0;
          psVar27[0xc] = 0;
          psVar27[0xd] = 0;
          psVar27[0xe] = 0;
          psVar27[0xf] = 0;
          psVar27[0x10] = 0;
          psVar27[0x11] = 0;
          psVar27[0x12] = 0;
          psVar27[0x13] = 0;
          psVar27[0x14] = 0;
          psVar27[0x15] = 0;
          psVar27[0x16] = 0;
          psVar27[0x17] = 0;
          psVar27[0x18] = 0;
          psVar27[0x19] = 0;
          psVar27[0x1a] = 0;
          psVar27[0x1b] = 0;
          psVar27[0x1c] = 0;
          psVar27[0x1d] = 0;
          psVar27[0x1e] = 0;
          psVar27[0x1f] = 0;
          psVar27[0x20] = 0;
          psVar27[0x21] = 0;
          psVar27[0x22] = 0;
          psVar27[0x23] = 0;
          psVar27[0x24] = 0;
          psVar27[0x25] = 0;
          psVar27[0x26] = 0;
          psVar27[0x27] = 0;
          psVar27[0x28] = 0;
          psVar27[0x29] = 0;
          psVar27[0x2a] = 0;
          psVar27[0x2b] = 0;
          psVar27[0x2c] = 0;
          psVar27[0x2d] = 0;
          psVar27[0x2e] = 0;
          psVar27[0x2f] = 0;
          psVar27[0x30] = 0;
          psVar27[0x31] = 0;
          psVar27[0x32] = 0;
          psVar27[0x33] = 0;
          *(short **)(puVar12 + 0x98) = psVar27;
          psStack_2e8 = psVar27;
        }
        if (*(longlong *)(psVar27 + 0xc) == 0) {
          psVar27 = (short *)FUN_1415530e0(0xa70);
          psStack_2e8 = psVar27;
          FUN_1405d9770(psVar27);
          psVar27[0x534] = -1;
          *(short **)(*(longlong *)(puVar12 + 0x98) + 0x18) = psVar27;
          FUN_1407f7ab0(*(undefined8 *)(*(longlong *)(puVar12 + 0x98) + 0x18),
                        *(longlong *)(param_1 + 0xa98) + 0x248);
        }
      }
    }
  }
  else {
    bVar7 = false;
    uStack_334 = 0;
  }
  if ((*(longlong *)(param_1 + 0xa98) != 0) && (bVar7)) {
    if ((-1 < *(short *)(param_1 + 0xa4)) &&
       ((uVar25 = (ulonglong)*(short *)(param_1 + 300),
        uVar25 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) &&
        (lVar26 = *(longlong *)(_DAT_14250eee8 + (longlong)*(short *)(param_1 + 0xa4) * 8),
        lVar18 = *(longlong *)(lVar26 + 0x178),
        uVar25 < (ulonglong)(*(longlong *)(lVar26 + 0x180) - lVar18 >> 3))))) {
      lVar26 = *(longlong *)(lVar18 + uVar25 * 8);
      plVar1 = (longlong *)(lVar26 + 0x17d8);
      if ((plVar1 != (longlong *)0x0) &&
         (iVar9 = (int)(*(longlong *)(lVar26 + 0x17e0) - *plVar1 >> 1) + -1,
         lVar18 = (longlong)iVar9, -1 < iVar9)) {
        do {
          iVar9 = *(int *)(*(longlong *)(lVar26 + 0x1808) + lVar18 * 4);
          sVar2 = *(short *)(*plVar1 + lVar18 * 2);
          if (((*(longlong *)(param_1 + 0xa98) != 0) && (sVar2 != -1)) && (-1 < iVar9)) {
            if (3000 < iVar9) {
              iVar9 = 3000;
            }
            lVar13 = FUN_1400bb7d0(sVar2,*(longlong *)(param_1 + 0xa98) + 0x218);
            if (lVar13 == 0) {
              if (iVar9 != 0) {
                psStack_2e8 = (short *)FUN_1415530e0(0x20);
                psStack_2e8[2] = 0;
                psStack_2e8[3] = 0;
                psStack_2e8[4] = 0;
                psStack_2e8[5] = 0;
                psStack_2e8[6] = 0;
                psStack_2e8[7] = 0;
                psStack_2e8[8] = 0;
                psStack_2e8[9] = 0;
                psStack_2e8[10] = 0;
                psStack_2e8[0xb] = 0;
                psStack_2e8[0xc] = 0;
                psStack_2e8[0xd] = 0;
                psStack_2e8[0xe] = 0;
                psStack_2e8[0xf] = 0;
                *psStack_2e8 = sVar2;
                *(int *)(psStack_2e8 + 2) = iVar9;
                psStack_2e8[4] = 0;
                psStack_2e8[5] = 0;
                FUN_141101c40(psStack_2e8,*(longlong *)(param_1 + 0xa98) + 0x218);
              }
            }
            else {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + iVar9;
            }
          }
          puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0xa98) + 0x220);
          for (puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0xa98) + 0x218); puVar14 < puVar5;
              puVar14 = puVar14 + 1) {
            if (*(short *)*puVar14 == *(short *)(*plVar1 + lVar18 * 2)) {
              *(undefined4 *)((short *)*puVar14 + 0xe) =
                   *(undefined4 *)(*(longlong *)(lVar26 + 0x1808) + lVar18 * 4);
            }
          }
          lVar18 = lVar18 + -1;
        } while (-1 < lVar18);
      }
    }
    iVar9 = 0;
    iStack_338 = 0;
    uStack_330 = 3;
    uVar3 = *(ushort *)(param_1 + 0xa2);
    if (((uVar3 == 0x67) || (uVar3 == 0x68)) || (cStack_333 == '\0')) {
      uStack_330 = 0;
    }
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    lStack_2d0 = 0;
    uStack_2c8 = 0;
    if (uVar3 < 0x87) {
      plVar1 = (longlong *)((longlong)(short)uVar3 * 0x18 + 0x14250bb68);
      if (&lStack_2c0 != plVar1) {
        lVar26 = *plVar1;
        FUN_140071af0(&lStack_2c0,lVar26,
                      *(longlong *)((longlong)(short)uVar3 * 0x18 + 0x14250bb70) - lVar26 >> 1);
      }
      lVar26 = (longlong)*(short *)(param_1 + 0xa2) * 0x18;
      plVar1 = (longlong *)(lVar26 + 0x14250c810);
      if (&lStack_2d8 != plVar1) {
        lVar18 = *plVar1;
        FUN_140071af0(&lStack_2d8,lVar18,*(longlong *)(lVar26 + 0x14250c818) - lVar18 >> 1);
      }
    }
    iVar19 = 0;
    switch(*(undefined2 *)(param_1 + 0xa2)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x65:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      iVar9 = 3;
      uVar11 = FUN_140ece790();
      if (0xccccccc <
          uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
        iVar9 = 10;
        uVar11 = FUN_140ece790();
        if (0x3fffffff <
            uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar11 = FUN_140ece790();
          iVar9 = 0x14;
          if (0x3fffffff <
              uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
            iVar9 = 0x1e;
          }
        }
      }
      uVar11 = FUN_140ece790();
      iVar19 = iVar9;
      iStack_338 = iVar9;
      if (0xccccccc <
          uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
        uVar22 = 10;
        uStack_330 = 10;
        uVar11 = FUN_140ece790();
        if (0x3fffffff <
            uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar22 = 0xf;
          uStack_330 = 0xf;
          uVar11 = FUN_140ece790();
          if (0x3fffffff <
              uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
            uVar11 = FUN_140ece790();
            uVar22 = 0x14;
            uStack_330 = uVar22;
            if (0x3fffffff <
                uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
              uVar22 = 0x1e;
              uStack_330 = uVar22;
            }
          }
        }
        uVar11 = iVar9 * 3 >> 2;
        iStack_338 = iVar9;
        if (uVar11 < uVar22) goto code_r0x00014134e705;
      }
      break;
    case 0x4a:
      if (*(longlong *)(param_1 + 0xa98) != 0) {
        FUN_141100e20();
      }
      iVar9 = 5;
      uVar11 = uStack_330;
code_r0x00014134e705:
      uStack_330 = uVar11;
      iVar19 = iVar9;
      iStack_338 = iVar9;
      break;
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x55:
    case 0x57:
    case 0x59:
    case 0x5b:
    case 0x5d:
    case 0x5f:
      iVar19 = 6;
      iVar9 = 6;
      iStack_338 = 6;
      break;
    case 0x4c:
    case 0x4e:
    case 0x50:
    case 0x56:
    case 0x58:
    case 0x5a:
    case 0x5c:
    case 0x5e:
    case 0x60:
      iVar19 = 0x3c;
      iVar9 = 0x3c;
      iStack_338 = 0x3c;
      break;
    case 0x51:
      iVar9 = 4;
      iVar19 = 2;
      iStack_338 = 2;
      break;
    case 0x52:
      iVar19 = 0x19;
      iVar9 = 0x19;
      iStack_338 = 0x19;
      break;
    case 0x53:
      iVar19 = 6;
      iStack_338 = 6;
      iVar9 = 6;
      break;
    case 0x54:
      iVar19 = 0x3c;
      iStack_338 = 0x3c;
      iVar9 = 0x3c;
      break;
    case 100:
      iVar19 = 0x19;
      iStack_338 = 0x19;
      iVar9 = 0x19;
    }
    lVar26 = lStack_2b8;
    if (lStack_310 == 0) {
      lStack_308 = lStack_2d0;
      lVar18 = lStack_308;
    }
    else {
      iVar17 = (int)(lStack_2b8 - lStack_2c0 >> 1) + -1;
      lVar13 = lStack_310;
      if (-1 < iVar17) {
        psVar27 = (short *)(lStack_2c0 + (longlong)iVar17 * 2);
        psVar15 = psVar27 + 1;
        do {
          if (*(char *)((longlong)*psVar27 + 0xe1c + lVar13) == '\0') {
            func_0x00014155486a(psVar15 + -1,psVar15,lVar26 - (longlong)psVar15);
            lVar26 = lVar26 + -2;
            lVar13 = lStack_310;
            lStack_2b8 = lVar26;
          }
          psVar27 = psVar27 + -1;
          iVar17 = iVar17 + -1;
          psVar15 = psVar15 + -1;
          iVar19 = iStack_338;
        } while (-1 < iVar17);
      }
      lStack_308 = lStack_2d0;
      iVar17 = (int)(lStack_2d0 - lStack_2d8 >> 1) + -1;
      lVar18 = lStack_308;
      if (-1 < iVar17) {
        psVar27 = (short *)(lStack_2d8 + (longlong)iVar17 * 2);
        psVar15 = psVar27 + 1;
        lVar18 = lStack_2d0;
        do {
          if (*(char *)((longlong)*psVar27 + 0xe1c + lVar13) == '\0') {
            func_0x00014155486a(psVar15 + -1,psVar15,lVar18 - (longlong)psVar15);
            lVar18 = lVar18 + -2;
            lVar13 = lStack_310;
            lStack_2d0 = lVar18;
          }
          psVar27 = psVar27 + -1;
          iVar17 = iVar17 + -1;
          psVar15 = psVar15 + -1;
          iVar19 = iStack_338;
        } while (-1 < iVar17);
      }
    }
    lStack_308 = lVar18;
    uVar22 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2f0 = 0;
    uVar11 = 0;
    if ((iVar9 == 0) ||
       (psVar27 = (short *)(lVar26 - lStack_2c0 >> 1), psStack_2e8 = psVar27,
       psVar27 == (short *)0x0)) {
      lVar18 = 0;
      lVar26 = 0;
    }
    else {
      lVar18 = 0;
      lVar26 = 0;
      do {
        if ((lVar18 - lVar26 & 0xfffffffffffffffeU) == 0) {
          FUN_140071af0(&lStack_300,lStack_2c0,psVar27);
          lVar26 = lStack_300;
          lVar18 = lStack_2f8;
        }
        uVar25 = lVar18 - lVar26 >> 1;
        if (uVar25 != 0) {
          uVar20 = uVar11;
          if (1 < (uint)uVar25) {
            uVar20 = FUN_140ece790();
            uVar20 = (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar25 & 0xffffffff)) + 1U);
          }
          puVar12 = (undefined2 *)(lVar26 + (longlong)(int)uVar20 * 2);
          FUN_141354400(param_1,*puVar12,500);
          func_0x00014155486a(puVar12,puVar12 + 1,lVar18 - (longlong)(puVar12 + 1));
          lVar18 = lVar18 + -2;
          lStack_2f8 = lVar18;
        }
        iVar9 = iVar9 + -1;
        iVar19 = iStack_338;
      } while (0 < iVar9);
    }
    if (lVar26 != lVar18) {
      lVar18 = lVar26;
    }
    lStack_2f8 = lVar18;
    if ((0 < iVar19) && (lStack_308 = lStack_308 - lStack_2d8 >> 1, lStack_308 != 0)) {
      do {
        if ((lVar18 - lVar26 & 0xfffffffffffffffeU) == 0) {
          FUN_140071af0(&lStack_300,lStack_2d8,lStack_308);
          lVar26 = lStack_300;
          lVar18 = lStack_2f8;
        }
        uVar25 = lVar18 - lVar26 >> 1;
        if (uVar25 != 0) {
          uVar20 = uVar11;
          if (1 < (uint)uVar25) {
            uVar20 = FUN_140ece790();
            uVar20 = (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar25 & 0xffffffff)) + 1U);
          }
          puVar12 = (undefined2 *)(lVar26 + (longlong)(int)uVar20 * 2);
          FUN_141354400(param_1,*puVar12,500);
          func_0x00014155486a(puVar12,puVar12 + 1,lVar18 - (longlong)(puVar12 + 1));
          lVar18 = lVar18 + -2;
          lStack_2f8 = lVar18;
        }
        iVar19 = iVar19 + -1;
      } while (0 < iVar19);
    }
    if (lStack_310 != 0) {
      iVar9 = 0x94;
      piVar24 = aiStack_2a8;
      pcVar23 = (char *)(lStack_310 + 0xeb0);
      uVar20 = uVar22;
      do {
        switch(iVar9) {
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x37:
        case 0x53:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x61:
        case 0x62:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x72:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
          break;
        default:
          if (*pcVar23 != '\0') {
            *piVar24 = iVar9;
            uVar20 = uVar20 + 1;
            piVar24 = piVar24 + 1;
          }
        }
        pcVar23 = pcVar23 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      psVar27 = *(short **)(lStack_310 + 0x1c50);
      uVar25 = *(longlong *)(lStack_310 + 0x1c58) - (longlong)psVar27 >> 1;
      if (uVar25 != 0) {
        piVar24 = aiStack_2a8 + (int)uVar20;
        do {
          switch((int)*psVar27) {
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
            *piVar24 = (int)*psVar27;
            uVar20 = uVar20 + 1;
            piVar24 = piVar24 + 1;
          }
          uVar22 = uVar22 + 1;
          psVar27 = psVar27 + 1;
        } while ((ulonglong)(longlong)(int)uVar22 < uVar25);
      }
      uVar22 = uStack_330;
      uVar10 = uVar20;
      if (0 < (int)uStack_330) {
        while (0 < (int)uVar10) {
          uVar10 = uVar11;
          if (1 < uVar22) {
            uVar10 = FUN_140ece790();
            uVar10 = (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (ulonglong)uVar22) + 1U);
          }
          iVar9 = uVar10 + 1;
          uVar10 = uVar11;
          if (1 < uVar20) {
            uVar10 = FUN_140ece790();
            uVar10 = (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (ulonglong)uVar20) + 1U);
          }
          iVar19 = iVar9 * 500;
          FUN_141354400(param_1,(short)aiStack_2a8[(int)uVar10],iVar19);
          switch(aiStack_2a8[(int)uVar10]) {
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x31:
          case 0x32:
            FUN_141354400(param_1,0x61,iVar19);
            FUN_141354400(param_1,0x57,iVar19);
            FUN_141354400(param_1,0x72,iVar19);
            FUN_141354400(param_1,0x56,iVar19);
            FUN_141354400(param_1,0x67,iVar19);
            uVar16 = 0x2c;
            break;
          case 0x2b:
          case 0x33:
          case 0x34:
            FUN_141354400(param_1,0x62,iVar19);
            FUN_141354400(param_1,0x57,iVar19);
            FUN_141354400(param_1,0x72,iVar19);
            FUN_141354400(param_1,0x56,iVar19);
            iVar19 = (iVar9 / 2 + 1) * 500;
            FUN_141354400(param_1,0x67,iVar19);
            goto code_r0x00014134eca9;
          default:
            goto LAB_14134ecb6;
          case 99:
          case 100:
          case 0x65:
          case 0x66:
            FUN_141354400(param_1,0x61,iVar19);
            FUN_141354400(param_1,0x57,iVar19);
            FUN_141354400(param_1,0x72,iVar19);
            FUN_141354400(param_1,0x56,iVar19);
            uVar16 = 0x67;
          }
          FUN_141354400(param_1,uVar16,iVar19);
code_r0x00014134eca9:
          FUN_141354400(param_1,0x2d,iVar19);
LAB_14134ecb6:
          uVar22 = uVar22 - iVar9;
          uVar10 = uVar22;
        }
      }
      lVar26 = lStack_310;
      if (cStack_333 != '\0') {
        lStack_328 = 0;
        puStack_320 = (undefined2 *)0x0;
        puStack_318 = (undefined2 *)0x0;
        iStack_338._0_2_ = 0x46;
        FUN_140072670(&lStack_328,0,&iStack_338);
        iStack_338._0_2_ = 0x47;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x47;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x4c;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x4c;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x4d;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x4d;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x48;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x48;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x4e;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x4e;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x4f;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x4f;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x50;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x50;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338._0_2_ = 0x51;
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x51;
          puStack_320 = puStack_320 + 1;
        }
        iStack_338 = CONCAT22(iStack_338._2_2_,0x52);
        if (puStack_320 == puStack_318) {
          FUN_140072670(&lStack_328,puStack_320,&iStack_338);
        }
        else {
          *puStack_320 = 0x52;
          puStack_320 = puStack_320 + 1;
        }
        lVar18 = lStack_328;
        uVar25 = (longlong)puStack_320 - lStack_328 >> 1;
        if (uVar25 != 0) {
          uVar22 = FUN_140ece790();
          uVar22 = ((uVar22 + (int)((longlong)((ulonglong)uVar22 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x28f5c29 + 1) * 5;
          if (uVar22 != 0) {
            uVar21 = (ulonglong)uVar22;
            do {
              uVar22 = uVar11;
              if (1 < (uint)uVar25) {
                uVar22 = FUN_140ece790();
                uVar22 = (uVar22 + (int)((longlong)((ulonglong)uVar22 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / ((int)(0x7fffffff / (uVar25 & 0xffffffff)) + 1U);
              }
              FUN_141354400(param_1,*(undefined2 *)(lVar18 + (longlong)(int)uVar22 * 2),100);
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        uVar11 = FUN_140ece790();
        if (0xccccccc <
            uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          uVar25 = (ulonglong)*(short *)(param_1 + 300);
          sVar2 = *(short *)(param_1 + 0xa4);
          if ((((-1 < sVar2) &&
               ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
              (-1 < *(short *)(param_1 + 300))) &&
             (lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar2 * 8),
             lVar13 = *(longlong *)(lVar18 + 0x178),
             uVar25 < (ulonglong)(*(longlong *)(lVar18 + 0x180) - lVar13 >> 3))) {
            lVar18 = *(longlong *)(lVar13 + uVar25 * 8);
            if ((*(int *)(lVar18 + 0x6b0) < 2) ||
               ((*(byte *)(*(longlong *)(lVar18 + 0x6a8) + 1) & 4) == 0)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              lVar18 = *(longlong *)(lVar13 + uVar25 * 8);
              if ((*(int *)(lVar18 + 0x6b0) < 0x10) ||
                 ((*(byte *)(*(longlong *)(lVar18 + 0x6a8) + 0xf) & 8) == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) {
                FUN_141354400(param_1,0x45,500);
              }
            }
          }
        }
        FUN_140070de0(&lStack_328);
      }
      FUN_141410490(param_1,puStack_2e0,lVar26,uStack_334);
    }
    FUN_140070de0(&lStack_300);
    FUN_140070de0(&lStack_2d8);
    FUN_140070de0(&lStack_2c0);
    param_3 = cStack_332;
  }
  iVar19 = 0;
  iVar9 = 0;
  if ((_DAT_1418be238 == 0) && (cVar8 = func_0x0001413a7620(param_1), cVar8 == '\0')) {
    *(undefined8 *)(param_1 + 0xab8) = 0;
    *(undefined8 *)(param_1 + 0xac0) = 0;
    *(undefined8 *)(param_1 + 0xac8) = 0;
    *(undefined8 *)(param_1 + 0xad0) = 0;
    *(undefined8 *)(param_1 + 0xad8) = 0;
    *(undefined8 *)(param_1 + 0xae0) = 0;
    *(undefined8 *)(param_1 + 0xae8) = 0;
    *(undefined8 *)(param_1 + 0xaf0) = 0;
    *(undefined8 *)(param_1 + 0xaf8) = 0;
    *(undefined8 *)(param_1 + 0xb00) = 0;
    *(undefined8 *)(param_1 + 0xb08) = 0;
    *(undefined4 *)(param_1 + 0xb10) = 0;
    *(undefined2 *)(param_1 + 0xb14) = 0;
  }
  else {
    FUN_140442370(param_1);
  }
  if (param_3 != '\0') goto LAB_14134f393;
  sVar2 = *(short *)(param_1 + 300);
  sVar4 = *(short *)(param_1 + 0xa4);
  if ((((-1 < sVar4) &&
       ((ulonglong)(longlong)sVar4 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
      (-1 < sVar2)) &&
     (lVar26 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar4 * 8),
     lVar18 = *(longlong *)(lVar26 + 0x178),
     (ulonglong)(longlong)sVar2 < (ulonglong)(*(longlong *)(lVar26 + 0x180) - lVar18 >> 3))) {
    lVar26 = *(longlong *)(lVar18 + (longlong)sVar2 * 8);
    if ((*(int *)(lVar26 + 0x6b0) < 0x10) ||
       ((*(byte *)(*(longlong *)(lVar26 + 0x6a8) + 0xf) & 4) == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      for (puVar14 = *(undefined8 **)(param_1 + 0x9a8); puVar14 < *(undefined8 **)(param_1 + 0x9b0);
          puVar14 = puVar14 + 1) {
        psVar27 = (short *)*puVar14;
        if (*psVar27 == 0xd) {
          psVar27[2] = 0;
          psVar27[3] = 0;
          goto LAB_14134f243;
        }
      }
      puStack_2e0 = (undefined2 *)FUN_1415530e0(8);
      *puStack_2e0 = 0xd;
      *(undefined4 *)(puStack_2e0 + 2) = 0;
      puVar14 = *(undefined8 **)(param_1 + 0x9b0);
      if (puVar14 == *(undefined8 **)(param_1 + 0x9b8)) {
        FUN_1400bc360(param_1 + 0x9a8,puVar14,&puStack_2e0);
      }
      else {
        *puVar14 = puStack_2e0;
        *(longlong *)(param_1 + 0x9b0) = *(longlong *)(param_1 + 0x9b0) + 8;
      }
LAB_14134f243:
      if (*(longlong *)(param_1 + 0xa98) != 0) {
        FUN_140b5f8b0(*(longlong *)(param_1 + 0xa98) + 0x248,1,0xffffffff,10);
      }
    }
  }
  uVar11 = FUN_140ece790();
  if (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x2aaaaaab)
  {
    uVar11 = FUN_140ece790();
    lVar26 = *(longlong *)(param_1 + 0xa98);
    if (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff <
        0x2aaaaaab) {
      if (lVar26 != 0) {
        *(undefined4 *)(lVar26 + 0x374) = 2;
      }
    }
    else if (lVar26 != 0) {
      *(undefined4 *)(lVar26 + 0x374) = 1;
    }
  }
  lVar26 = *(longlong *)(param_1 + 0xa98);
  if (lVar26 != 0) {
    puVar14 = *(undefined8 **)(lVar26 + 0x218);
    uVar25 = *(longlong *)(lVar26 + 0x220) - (longlong)puVar14 >> 3;
    iVar17 = iVar19;
    if (uVar25 != 0) {
      do {
        puVar12 = (undefined2 *)*puVar14;
        iVar9 = iVar19;
        switch(*puVar12) {
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
          if (iVar19 < *(int *)(puVar12 + 2)) {
            iVar9 = *(int *)(puVar12 + 2);
          }
        }
        iVar17 = iVar17 + 1;
        puVar14 = puVar14 + 1;
        iVar19 = iVar9;
      } while ((ulonglong)(longlong)iVar17 < uVar25);
    }
  }
  iVar9 = iVar9 * 10;
  if (iVar9 < 0x65) {
    if (0 < iVar9) goto LAB_14134f373;
  }
  else {
    iVar9 = 100;
LAB_14134f373:
    if (*(longlong *)(param_1 + 0xa98) != 0) {
      *(int *)(*(longlong *)(param_1 + 0xa98) + 0x378) = iVar9;
    }
  }
  FUN_14134f700(param_1,cStack_333);
LAB_14134f393:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_358);
  return;
}

