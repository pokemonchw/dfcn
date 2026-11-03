/* Actual Ghidra output; current installed Steam PE:6a70a6d9:02711000; VA 0x1405702b0..0x1405713f3. Function names assigned by analysis. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void farm_update(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  undefined4 uVar13;
  short *psVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  bool bVar32;
  short asStackX_8 [4];
  undefined2 auStackX_10 [4];
  longlong lStackX_18;
  longlong *plStackX_20;
  int in_stack_ffffffffffffff98;
  undefined2 uVar33;
  
  sVar11 = (short)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3);
  do {
    sVar11 = sVar11 + -1;
    if (sVar11 < 0) {
      cVar10 = '\0';
      goto LAB_140570300;
    }
  } while (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)sVar11 * 8) + 0x14) !=
           0x58);
  cVar10 = '\x01';
LAB_140570300:
  asStackX_8[0] = CONCAT11(asStackX_8[0]._1_1_,cVar10);
  psVar14 = (short *)(param_1 + 0x164);
  *psVar14 = *psVar14 + -1;
  if (*psVar14 < 0) {
    uVar25 = (uint)*(short *)(param_1 + 8);
    uVar24 = uVar25;
    if ((int)uVar25 <= *(int *)(param_1 + 0x14)) {
      do {
        uVar21 = (uint)*(short *)(param_1 + 0xc);
        uVar19 = uVar21;
        if ((int)uVar21 <= *(int *)(param_1 + 0x18)) {
          do {
            if ((*(longlong *)(param_1 + 0x30) == 0) ||
               (*(char *)((longlong)
                          (int)((((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 8)) + 1) *
                                 (uVar19 - *(int *)(param_1 + 0xc)) - *(int *)(param_1 + 8)) +
                               uVar24) + *(longlong *)(param_1 + 0x30)) != '\0')) {
              in_stack_ffffffffffffff98 = CONCAT31((int3)((uint)in_stack_ffffffffffffff98 >> 8),1);
              FUN_1414c45a0(&map_world,uVar25 & 0xffff,uVar21 & 0xffff,
                            *(undefined2 *)(param_1 + 0x20),in_stack_ffffffffffffff98,1);
            }
            uVar20 = (short)uVar21 + 1;
            uVar21 = (uint)uVar20;
            uVar19 = (uint)(short)uVar20;
          } while ((int)uVar19 <= *(int *)(param_1 + 0x18));
        }
        uVar20 = (short)uVar25 + 1;
        uVar25 = (uint)uVar20;
        uVar24 = (uint)(short)uVar20;
      } while ((int)uVar24 <= *(int *)(param_1 + 0x14));
    }
    *(undefined2 *)(param_1 + 0x164) = 500;
  }
  plVar17 = (longlong *)(param_1 + 0x58);
  if (_DAT_142387fc4 == (_DAT_142387fc4 / 100) * 100) {
    iVar12 = (int)(*(longlong *)(param_1 + 0x130) - *(longlong *)(param_1 + 0x128) >> 3) + -1;
    lVar22 = (longlong)iVar12;
    lStackX_18 = lVar22;
    if (-1 < iVar12) {
      do {
        uVar30 = 0;
        plVar6 = (longlong *)**(longlong **)(*(longlong *)(param_1 + 0x128) + lVar22 * 8);
        if ((*(byte *)(plVar6 + 2) & 0x20) != 0) {
          lStackX_18 = lVar22;
          sVar11 = (**(code **)*plVar6)();
          uVar24 = 0;
          if (sVar11 == 0x35) {
            sVar11 = (*(code *)((undefined8 *)*plVar6)[0xb])();
            uVar33 = (undefined2)((uint)in_stack_ffffffffffffff98 >> 0x10);
            uVar30 = (ulonglong)sVar11;
            if (sVar11 != -1) {
              *(int *)(plVar6 + 0x18) = (int)plVar6[0x18] + 1;
              if ((-1 < sVar11) && (uVar30 < (ulonglong)(_DAT_1424ec900 - _DAT_1424ec8f8 >> 3))) {
                uVar24 = *(uint *)(*(longlong *)(_DAT_1424ec8f8 + uVar30 * 8) + 0x218);
              }
              func_0x000140aae1a0(sVar11,auStackX_10);
              if (*(char *)((longlong)auStackX_10 + (longlong)DAT_1418d6f0e) == '\0') {
LAB_140570ab0:
                uVar24 = (int)DAT_1418d6f0e + 3U & 0x80000003;
                if ((int)uVar24 < 0) {
                  uVar24 = (uVar24 - 1 | 0xfffffffc) + 1;
                }
                FUN_14054b670(0x142391230,sVar11,uVar24);
              }
              else {
                in_stack_ffffffffffffff98 = (int)sVar11;
                cVar10 = FUN_1414b1520(&map_world,(short)plVar6[1],
                                       *(undefined2 *)((longlong)plVar6 + 10),
                                       *(undefined2 *)((longlong)plVar6 + 0xc),
                                       in_stack_ffffffffffffff98);
                uVar33 = (undefined2)((uint)in_stack_ffffffffffffff98 >> 0x10);
                if (cVar10 == '\0') goto LAB_140570ab0;
                lVar22 = lStackX_18;
                if ((int)plVar6[0x18] < (int)uVar24) goto LAB_140570cdd;
                uVar24 = 1;
                piVar1 = (int *)(param_1 + 0x15c);
                if (0 < *piVar1) {
                  if ((int)(*(int *)(param_1 + 0x160) + (*(int *)(param_1 + 0x160) >> 0x1f & 3U)) >>
                      2 <= *piVar1) {
                    uVar24 = random_u32();
                    uVar24 = (uVar24 + (int)((longlong)((ulonglong)uVar24 * 0x100000003) >> 0x3f) *
                                       0x7fffffff >> 0x1e) + 1;
                  }
                  if (*(int *)(param_1 + 0x160) / 2 <= *piVar1) {
                    uVar25 = random_u32();
                    uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff >> 0x1e);
                  }
                  iVar12 = *(int *)(param_1 + 0x160) * 3;
                  if ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2 <= *piVar1) {
                    uVar25 = random_u32();
                    uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff >> 0x1e);
                  }
                  if (*(int *)(param_1 + 0x160) <= *(int *)(param_1 + 0x15c)) {
                    uVar25 = random_u32();
                    uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff >> 0x1e);
                  }
                }
                iVar12 = (int)*(short *)((longlong)plVar6 + 0xc4);
                uVar25 = random_u32();
                if ((int)((uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >> 0x3f) *
                                    0x7fffffff) / 0x1999999a) < iVar12) {
                  uVar25 = random_u32();
                  uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff >> 0x1e);
                }
                uVar25 = random_u32();
                if ((int)((uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >> 0x3f) *
                                    0x7fffffff) / 0xccccccd) < iVar12) {
                  uVar25 = random_u32();
                  uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff >> 0x1e);
                }
                uVar25 = random_u32();
                if ((int)((uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >> 0x3f) *
                                    0x7fffffff) / 0x8888889) < iVar12) {
                  uVar25 = random_u32();
                  uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff >> 0x1e);
                }
                uVar25 = random_u32();
                if ((int)((uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >> 0x3f) *
                                    0x7fffffff) / 0x6666667) < iVar12) {
                  uVar25 = random_u32();
                  uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff >> 0x1e);
                }
                uVar25 = random_u32();
                if (((int)((uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / 0x51eb852) < iVar12) &&
                   (uVar25 = random_u32(),
                   uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >> 0x3f) * 0x7fffffff
                   < 0x2aaaaaab)) {
                  uVar25 = random_u32();
                  uVar24 = uVar24 + (uVar25 + (int)((longlong)((ulonglong)uVar25 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff >> 0x1e);
                }
                uVar2 = *(undefined2 *)((longlong)plVar6 + 10);
                lVar22 = plVar6[1];
                uVar25 = tile_designation(&map_world,(short)lVar22,uVar2,
                                          *(undefined2 *)((longlong)plVar6 + 0xc));
                if ((((uVar25 >> 0xf & 1) == 0) ||
                    (iVar12 = tile_geological_material(&map_world,(short)lVar22,uVar2), iVar12 < 0))
                   || ((ulonglong)(_DAT_1424ec8d0 - _inorganic_raws >> 3) <=
                       (ulonglong)(longlong)iVar12)) {
LAB_140570993:
                  if (uVar24 != 0) goto LAB_14057099b;
                }
                else {
                  lVar22 = *(longlong *)(_inorganic_raws + (longlong)iVar12 * 8);
                  if ((*(int *)(lVar22 + 0x40) < 2) ||
                     ((*(byte *)(*(longlong *)(lVar22 + 0x38) + 1) & 8) == 0)) {
                    bVar32 = false;
                  }
                  else {
                    bVar32 = true;
                  }
                  if (!bVar32) goto LAB_140570993;
                  sVar3 = *(short *)((longlong)plVar6 + 0xc);
                  sVar4 = *(short *)((longlong)plVar6 + 10);
                  sVar5 = (short)plVar6[1];
                  if (((-1 < sVar5) && (sVar5 < _DAT_1424e80dc)) &&
                     ((-1 < sVar4 &&
                      ((((sVar4 < _DAT_1424e80e0 && (-1 < sVar3)) && (sVar3 < _DAT_1424e80e4)) &&
                       ((_DAT_1424e80a8 != 0 &&
                        (lVar22 = *(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(_DAT_1424e80a8 + (longlong)(sVar5 >> 4) * 8) +
                                     ((longlong)sVar4 >> 4) * 8) + (longlong)sVar3 * 8), lVar22 != 0
                        )))))))) {
                    uVar25 = (int)sVar5 & 0x8000000f;
                    if ((int)uVar25 < 0) {
                      uVar25 = (uVar25 - 1 | 0xfffffff0) + 1;
                    }
                    uVar19 = (int)sVar4 & 0x8000000f;
                    if ((int)uVar19 < 0) {
                      uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
                    }
                    if ((((*(uint *)(lVar22 + 0x2a0 +
                                    ((longlong)(int)uVar25 * 0x10 + (longlong)(int)uVar19) * 4) &
                          0x20000000) != 0) && (*(int *)(lVar22 + 0x3c) != -1)) &&
                       ((psVar14 = (short *)FUN_1400e1560(*(int *)(lVar22 + 0x3c),
                                                          _world_data_ptr + 0x250),
                        psVar14 != (short *)0x0 && (*psVar14 == 0)))) goto LAB_140570993;
                  }
                  if (3 < uVar24) {
                    uVar24 = ((int)uVar24 >> 2) + 1;
                    goto LAB_140570993;
                  }
                  uVar24 = 1;
LAB_14057099b:
                  plVar15 = (longlong *)FUN_141539690(200);
                  plStackX_20 = plVar15;
                  FUN_1400fc720(plVar15,0);
                  *plVar15 = (longlong)&UNK_141659a68;
                  *(undefined2 *)(plVar15 + 0x17) = 0x1a3;
                  *(undefined8 *)((longlong)plVar15 + 0xbc) = 0;
                  *(uint *)(plVar15 + 0x10) = uVar24;
                  if ((sVar11 < 0) || ((ulonglong)(_DAT_1424ec900 - _DAT_1424ec8f8 >> 3) <= uVar30))
                  {
                    uVar13 = 0xffffffff;
                    *(undefined2 *)(plVar15 + 0x17) = 0xffff;
                  }
                  else {
                    *(undefined2 *)(plVar15 + 0x17) =
                         *(undefined2 *)(*(longlong *)(_DAT_1424ec8f8 + uVar30 * 8) + 0x2b8);
                    uVar13 = *(undefined4 *)(*(longlong *)(_DAT_1424ec8f8 + uVar30 * 8) + 0x2cc);
                  }
                  *(undefined4 *)((longlong)plVar15 + 0xbc) = uVar13;
                  (**(code **)(*plVar15 + 0x328))(plVar15,1);
                  lVar22 = FUN_14054bdc0(param_1,plVar15);
                  *(undefined2 *)(lVar22 + 8) = 2;
                  *(uint *)(plVar15 + 2) = *(uint *)(plVar15 + 2) | 0x20;
                  *(short *)(plVar15 + 1) = (short)plVar6[1];
                  *(undefined2 *)((longlong)plVar15 + 10) = *(undefined2 *)((longlong)plVar6 + 10);
                  *(undefined2 *)((longlong)plVar15 + 0xc) = *(undefined2 *)((longlong)plVar6 + 0xc)
                  ;
                }
              }
              in_stack_ffffffffffffff98 = CONCAT22(uVar33,0x8ad0);
              FUN_140ab52d0(plVar6,1,0xffff8ad0,0xffff8ad0,in_stack_ffffffffffffff98,1);
              lVar22 = lStackX_18;
            }
          }
          else {
            sVar11 = (**(code **)*plVar6)(plVar6);
            if (sVar11 == 0x36) {
              if (cVar10 == '\0') {
                lVar26 = *(longlong *)(param_1 + 0x60);
                lVar7 = *plVar17;
                uVar23 = uVar30;
                if (lVar26 - lVar7 >> 3 != 0) {
                  do {
                    uVar24 = (uint)uVar30;
                    lVar22 = *(longlong *)(uVar23 + lVar7);
                    if ((((*(short *)(lVar22 + 0x14) == 0x5d) &&
                         (*(short *)(lVar22 + 0x1c) == (short)plVar6[1])) &&
                        (*(short *)(lVar22 + 0x1e) == *(short *)((longlong)plVar6 + 10))) &&
                       (*(short *)(lVar22 + 0x20) == *(short *)((longlong)plVar6 + 0xc))) break;
                    uVar24 = uVar24 + 1;
                    uVar30 = (ulonglong)uVar24;
                    uVar23 = uVar23 + 8;
                  } while ((ulonglong)(longlong)(int)uVar24 < (ulonglong)(lVar26 - lVar7 >> 3));
                }
                lVar22 = lStackX_18;
                if ((longlong)(int)uVar24 == lVar26 - lVar7 >> 3) {
                  uVar16 = FUN_141539690(0x148);
                  lVar22 = FUN_140d020c0(uVar16,0);
                  *(undefined2 *)(lVar22 + 0x14) = 0x5d;
                  *(short *)(lVar22 + 0x1c) = (short)plVar6[1];
                  *(undefined2 *)(lVar22 + 0x1e) = *(undefined2 *)((longlong)plVar6 + 10);
                  *(undefined2 *)(lVar22 + 0x20) = *(undefined2 *)((longlong)plVar6 + 0xc);
                  FUN_14054bcf0(param_1,lVar22,1);
                  FUN_140d09b70(lVar22);
                  lVar22 = lStackX_18;
                }
              }
              (**(code **)(*plVar6 + 0x288))(plVar6);
              sVar11 = (**(code **)(*plVar6 + 0x58))(plVar6);
              in_stack_ffffffffffffff98 = (int)sVar11;
              cVar10 = FUN_1414b1520(&map_world,(short)plVar6[1],
                                     *(undefined2 *)((longlong)plVar6 + 10),
                                     *(undefined2 *)((longlong)plVar6 + 0xc),
                                     in_stack_ffffffffffffff98);
              if (cVar10 == '\0') {
                (**(code **)(*plVar6 + 0x288))(plVar6);
                (**(code **)(*plVar6 + 0x288))(plVar6);
                (**(code **)(*plVar6 + 0x288))(plVar6);
              }
              iVar12 = (**(code **)(*plVar6 + 0x278))(plVar6);
              if (199 < iVar12) {
                iVar12 = (int)(*(longlong *)(param_1 + 0x60) - *plVar17 >> 3) + -1;
                lVar22 = (longlong)iVar12;
                if (-1 < iVar12) {
                  do {
                    lVar26 = *(longlong *)(*plVar17 + lVar22 * 8);
                    if ((*(short *)(lVar26 + 0x14) == 0x5d) && (lVar26 != 0)) {
                      FUN_140a67820(lVar26);
                    }
                    lVar22 = lVar22 + -1;
                  } while (-1 < lVar22);
                }
                FUN_140c634f0(plVar6,1);
                (**(code **)(*plVar6 + 0x330))(plVar6);
                (**(code **)(*plVar6 + 0x280))(plVar6,0);
                *(uint *)(plVar6 + 2) = *(uint *)(plVar6 + 2) | 0x100;
                (**(code **)(*plVar6 + 0x328))(plVar6,1);
                (**(code **)(*plVar6 + 800))
                          (plVar6,(int)(short)plVar6[1],(int)*(short *)((longlong)plVar6 + 10),
                           (int)*(short *)((longlong)plVar6 + 0xc));
                lVar22 = lStackX_18;
              }
            }
          }
        }
LAB_140570cdd:
        lVar22 = lVar22 + -1;
        cVar10 = (char)asStackX_8[0];
        lStackX_18 = lVar22;
      } while (-1 < lVar22);
    }
    if (*(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2) == -1) {
      bVar32 = true;
      bVar9 = false;
    }
    else {
      cVar10 = FUN_14057c050();
      bVar32 = cVar10 != '\0';
      bVar9 = bVar32;
    }
    iVar12 = (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3) + -1;
    lVar22 = (longlong)iVar12;
    if (-1 < iVar12) {
      lVar26 = lVar22 * 8;
      do {
        lVar7 = *(longlong *)(param_1 + 0x58);
        if ((*(short *)(*(longlong *)(lVar7 + lVar26) + 0x14) == 0x5c) &&
           (((lVar7 = *(longlong *)(lVar7 + lVar22 * 8), bVar32 ||
             (*(int *)(lVar7 + 0x34) !=
              (int)*(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2))) && (lVar7 != 0)))) {
          FUN_140a67820();
        }
        lVar22 = lVar22 + -1;
        lVar26 = lVar26 + -8;
      } while (-1 < lVar22);
    }
    if ((*(char *)(param_1 + 0x158) < DAT_1418d6f0e) &&
       (FUN_1405897e0(param_1), (*(byte *)(param_1 + 0x154) & 1) != 0)) {
      FUN_1405894a0(param_1);
    }
    *(char *)(param_1 + 0x158) = DAT_1418d6f0e;
    if ((((*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) & 0xfffffffffffffff8U) == 0
         ) && (sVar11 = *(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2), sVar11 != -1)) &&
       ((char)asStackX_8[0] == '\0')) {
      uVar23 = 0;
      uVar25 = (uint)*(short *)(param_1 + 8);
      uVar30 = uVar23;
      uVar24 = uVar25;
      if ((int)uVar25 <= *(int *)(param_1 + 0x14)) {
        do {
          uVar21 = (uint)*(short *)(param_1 + 0xc);
          uVar19 = uVar21;
          if ((int)uVar21 <= *(int *)(param_1 + 0x18)) {
            do {
              if ((((*(longlong *)(param_1 + 0x30) == 0) ||
                   (*(char *)((longlong)
                              (int)((((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 8)) + 1) *
                                     (uVar19 - *(int *)(param_1 + 0xc)) - *(int *)(param_1 + 8)) +
                                   uVar25) + *(longlong *)(param_1 + 0x30)) != '\0')) &&
                  (iVar12 = FUN_1414b1460(&map_world,uVar24 & 0xffff,uVar21 & 0xffff,
                                          *(undefined2 *)(param_1 + 0x20)), iVar12 == 0)) &&
                 (cVar10 = FUN_1414b1520(&map_world,uVar24 & 0xffff,uVar21 & 0xffff,
                                         *(undefined2 *)(param_1 + 0x20),(int)sVar11),
                 cVar10 != '\0')) {
                uVar30 = (ulonglong)((int)uVar30 + 1);
              }
              uVar20 = (short)uVar21 + 1;
              uVar21 = (uint)uVar20;
              uVar19 = (int)(short)uVar20;
            } while ((int)(short)uVar20 <= *(int *)(param_1 + 0x18));
          }
          uVar20 = (short)uVar24 + 1;
          uVar25 = (uint)(short)uVar20;
          uVar24 = (uint)uVar20;
        } while ((int)uVar25 <= *(int *)(param_1 + 0x14));
      }
      iVar12 = (int)uVar30;
      plVar17 = *(longlong **)(param_1 + 0x128);
      uVar29 = *(longlong *)(param_1 + 0x130) - (longlong)plVar17 >> 3;
      uVar28 = uVar23;
      if (uVar29 != 0) {
        do {
          uVar27 = (ulonglong)((int)uVar30 - 1);
          if (*(short *)(*plVar17 + 8) != 2) {
            uVar27 = uVar30;
          }
          iVar12 = (int)uVar27;
          uVar24 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar24;
          plVar17 = plVar17 + 1;
          uVar30 = uVar27;
        } while ((ulonglong)(longlong)(int)uVar24 < uVar29);
      }
      if ((0 < iVar12) && (!bVar9)) {
        lVar22 = _DAT_1423e5a98;
        uVar30 = uVar23;
        uVar28 = uVar23;
        uVar29 = uVar23;
        if (_DAT_1423e5aa0 - _DAT_1423e5a98 >> 3 != 0) {
          do {
            lVar26 = *(longlong *)(lVar22 + uVar29);
            uVar24 = *(uint *)(lVar26 + 0x10);
            if ((((uVar24 & 0x20) == 0) && ((*(byte *)(lVar26 + 0x14) & 8) == 0)) &&
               ((uVar24 & 0xe90c12) == 0)) {
              if ((uVar24 & 8) == 0) {
LAB_140570faa:
                uVar27 = uVar23;
                uVar31 = uVar23;
                if (*(longlong *)(*(longlong *)(lVar22 + uVar29) + 0x40) -
                    *(longlong *)(*(longlong *)(lVar22 + uVar29) + 0x38) >> 3 != 0) {
                  do {
                    iVar12 = (**(code **)(**(longlong **)
                                            (uVar27 + *(longlong *)
                                                       (*(longlong *)(lVar22 + uVar29) + 0x38)) +
                                         0x10))();
                    if ((((((iVar12 == 10) &&
                           (puVar18 = (undefined8 *)
                                      (**(code **)(**(longlong **)
                                                     (uVar27 + *(longlong *)
                                                                (*(longlong *)
                                                                  (_DAT_1423e5a98 + uVar29) + 0x38))
                                                  + 0x18))(), puVar18 != (undefined8 *)0x0)) &&
                          (sVar11 = (**(code **)*puVar18)(puVar18), sVar11 == 0x35)) &&
                         ((*(int *)((longlong)puVar18 + 0xbc) ==
                           (int)*(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2) &&
                          ((*(uint *)(puVar18 + 2) & 0x20) == 0)))) &&
                        ((*(byte *)((longlong)puVar18 + 0x14) & 8) == 0)) &&
                       ((*(uint *)(puVar18 + 2) & 0xe90c12) == 0)) {
                      uVar30 = (ulonglong)((int)uVar30 + 1);
                    }
                    uVar24 = (int)uVar31 + 1;
                    lVar22 = _DAT_1423e5a98;
                    uVar27 = uVar27 + 8;
                    uVar31 = (ulonglong)uVar24;
                  } while ((ulonglong)(longlong)(int)uVar24 <
                           (ulonglong)
                           (*(longlong *)(*(longlong *)(_DAT_1423e5a98 + uVar29) + 0x40) -
                            *(longlong *)(*(longlong *)(_DAT_1423e5a98 + uVar29) + 0x38) >> 3));
                }
              }
              else {
                puVar8 = *(undefined8 **)(lVar26 + 0x40);
                for (puVar18 = *(undefined8 **)(lVar26 + 0x38); lVar22 = _DAT_1423e5a98,
                    puVar18 < puVar8; puVar18 = puVar18 + 1) {
                  iVar12 = (**(code **)(*(longlong *)*puVar18 + 0x10))();
                  if (iVar12 == 0xb) {
                    plVar17 = (longlong *)(**(code **)(*(longlong *)*puVar18 + 0x18))();
                    lVar22 = _DAT_1423e5a98;
                    if ((plVar17 != (longlong *)0x0) &&
                       (cVar10 = (**(code **)(*plVar17 + 0x90))(plVar17), lVar22 = _DAT_1423e5a98,
                       cVar10 != '\0')) goto LAB_140570faa;
                    break;
                  }
                }
              }
            }
            uVar24 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar24;
            uVar29 = uVar29 + 8;
          } while ((ulonglong)(longlong)(int)uVar24 < (ulonglong)(_DAT_1423e5aa0 - lVar22 >> 3));
        }
        lVar22 = _DAT_1423e60b0;
        lVar26 = _DAT_1423e60b8;
        uVar28 = uVar23;
        uVar29 = uVar23;
        if (_DAT_1423e60b8 - _DAT_1423e60b0 >> 3 != 0) {
          do {
            lVar7 = *(longlong *)(lVar22 + uVar29);
            if ((((*(uint *)(lVar7 + 0x10) & 0x28) == 0) && ((*(byte *)(lVar7 + 0x14) & 8) == 0)) &&
               (((*(uint *)(lVar7 + 0x10) & 0xe90c12) == 0 &&
                (uVar27 = uVar23, uVar31 = uVar23,
                *(longlong *)(lVar7 + 0x40) - *(longlong *)(lVar7 + 0x38) >> 3 != 0)))) {
              do {
                iVar12 = (**(code **)(**(longlong **)
                                        (uVar27 + *(longlong *)
                                                   (*(longlong *)(lVar22 + uVar29) + 0x38)) + 0x10))
                                   ();
                if ((((((iVar12 == 10) &&
                       (puVar18 = (undefined8 *)
                                  (**(code **)(**(longlong **)
                                                 (uVar27 + *(longlong *)
                                                            (*(longlong *)(_DAT_1423e60b0 + uVar29)
                                                            + 0x38)) + 0x18))(),
                       puVar18 != (undefined8 *)0x0)) &&
                      (sVar11 = (**(code **)*puVar18)(puVar18), sVar11 == 0x35)) &&
                     ((*(int *)((longlong)puVar18 + 0xbc) ==
                       (int)*(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2) &&
                      ((*(uint *)(puVar18 + 2) & 0x20) == 0)))) &&
                    ((*(byte *)((longlong)puVar18 + 0x14) & 8) == 0)) &&
                   ((*(uint *)(puVar18 + 2) & 0xe90c12) == 0)) {
                  uVar30 = (ulonglong)((int)uVar30 + 1);
                }
                uVar24 = (int)uVar31 + 1;
                lVar22 = _DAT_1423e60b0;
                uVar27 = uVar27 + 8;
                lVar26 = _DAT_1423e60b8;
                uVar31 = (ulonglong)uVar24;
              } while ((ulonglong)(longlong)(int)uVar24 <
                       (ulonglong)
                       (*(longlong *)(*(longlong *)(_DAT_1423e60b0 + uVar29) + 0x40) -
                        *(longlong *)(*(longlong *)(_DAT_1423e60b0 + uVar29) + 0x38) >> 3));
            }
            uVar24 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar24;
            uVar29 = uVar29 + 8;
          } while ((ulonglong)(longlong)(int)uVar24 < (ulonglong)(lVar26 - lVar22 >> 3));
        }
        uVar28 = uVar23;
        if (_DAT_1423e5680 - _DAT_1423e5678 >> 3 != 0) {
          do {
            sVar11 = (**(code **)**(undefined8 **)(_DAT_1423e5678 + uVar23))();
            if (((sVar11 == 0x35) &&
                (lVar22 = *(longlong *)(_DAT_1423e5678 + uVar23),
                *(int *)(lVar22 + 0xbc) ==
                (int)*(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2))) &&
               (((*(uint *)(lVar22 + 0x10) & 0x28) == 0 &&
                (((*(byte *)(lVar22 + 0x14) & 8) == 0 &&
                 ((*(uint *)(lVar22 + 0x10) & 0xe90c12) == 0)))))) {
              uVar30 = (ulonglong)((int)uVar30 + 1);
            }
            uVar24 = (int)uVar28 + 1;
            uVar23 = uVar23 + 8;
            uVar28 = (ulonglong)uVar24;
          } while ((ulonglong)(longlong)(int)uVar24 <
                   (ulonglong)(_DAT_1423e5680 - _DAT_1423e5678 >> 3));
        }
        if (_DAT_1423e61c8 != (longlong *)0x0) {
          plVar17 = _DAT_1423e61c8;
          do {
            lVar22 = *plVar17;
            if (((*(short *)(lVar22 + 0x14) == 0x5c) &&
                (*(int *)(lVar22 + 0x34) ==
                 (int)*(short *)(param_1 + (longlong)DAT_1418d6f0e * 2 + 0x148))) &&
               ((*(longlong *)(lVar22 + 0x88) - *(longlong *)(lVar22 + 0x80) & 0xfffffffffffffff8U)
                == 0)) {
              uVar30 = (ulonglong)((int)uVar30 - 1);
            }
            plVar17 = (longlong *)plVar17[2];
          } while (plVar17 != (longlong *)0x0);
        }
        uVar24 = (uint)uVar30;
        while (0 < (int)uVar24) {
          uVar24 = (int)uVar30 - 1;
          uVar30 = (ulonglong)uVar24;
          FUN_140557850(param_1,asStackX_8,auStackX_10,
                        (int)*(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2));
          sVar11 = asStackX_8[0];
          if (asStackX_8[0] == -30000) {
            return;
          }
          plStackX_20 = (longlong *)FUN_141539690(0x148);
          lVar22 = FUN_140d020c0(plStackX_20,0);
          *(undefined2 *)(lVar22 + 0x14) = 0x5c;
          sVar3 = *(short *)(param_1 + 0x148 + (longlong)DAT_1418d6f0e * 2);
          uVar23 = (ulonglong)sVar3;
          if ((sVar3 < 0) || ((ulonglong)(_DAT_1424ec900 - _DAT_1424ec8f8 >> 3) <= uVar23)) {
            uVar13 = 0xffffffff;
            *(undefined2 *)(lVar22 + 0x30) = 0xffff;
          }
          else {
            *(undefined2 *)(lVar22 + 0x30) =
                 *(undefined2 *)(*(longlong *)(_DAT_1424ec8f8 + uVar23 * 8) + 0x2be);
            uVar13 = *(undefined4 *)(*(longlong *)(_DAT_1424ec8f8 + uVar23 * 8) + 0x2d8);
          }
          *(undefined4 *)(lVar22 + 0x34) = uVar13;
          *(short *)(lVar22 + 0x1c) = sVar11;
          *(undefined2 *)(lVar22 + 0x1e) = auStackX_10[0];
          *(undefined2 *)(lVar22 + 0x20) = *(undefined2 *)(param_1 + 0x20);
          lStackX_18 = lVar22;
          FUN_140d09750(lVar22,0x24,*(undefined4 *)(param_1 + 0x50));
          plVar17 = *(longlong **)(param_1 + 0x60);
          if (plVar17 == *(longlong **)(param_1 + 0x68)) {
            FUN_1400bad30(param_1 + 0x58,plVar17,&lStackX_18);
          }
          else {
            *plVar17 = lVar22;
            *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 8;
          }
          FUN_140d09b70(lVar22);
        }
      }
    }
  }
  return;
}

