/* Actual Ghidra output; current installed Steam PE:6a70a6d9:02711000; VA 0x140eb68b0..0x140eb6a93. Function names assigned by analysis. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 random_u32(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  auVar12 = _DAT_14178c120;
  uVar11 = _UNK_14178c0fc;
  uVar10 = _UNK_14178c0f8;
  uVar9 = _UNK_14178c0f4;
  uVar8 = _DAT_14178c0f0;
  uVar7 = _UNK_14178c0cc;
  uVar6 = _UNK_14178c0c8;
  uVar5 = _UNK_14178c0c4;
  uVar4 = _DAT_14178c0c0;
  uVar3 = _UNK_14178b66c;
  uVar2 = _UNK_14178b668;
  uVar1 = _UNK_14178b664;
  uVar17 = _DAT_14178b660;
  lVar13 = (longlong)_DAT_142159084;
  lVar18 = lVar13 * 0x9c0;
  puVar19 = (uint *)(lVar18 + 0x14234e990);
  iVar20 = *(int *)(lVar13 * 4 + 0x142131b30);
  if (iVar20 == 0x9c0) {
    lVar16 = 0;
    iVar20 = 0;
    if (1 < _DAT_14189c010) {
      lVar16 = 0x1c;
      puVar14 = (uint *)(lVar18 + 0x14234efc4);
      do {
        uVar23 = puVar14[-0x18c] & uVar4 | puVar14[-0x18d] & uVar8;
        uVar24 = puVar14[-0x18b] & uVar5 | puVar14[-0x18c] & uVar9;
        uVar25 = puVar14[-0x18a] & uVar6 | puVar14[-0x18b] & uVar10;
        uVar26 = puVar14[-0x189] & uVar7 | puVar14[-0x18a] & uVar11;
        auVar21._0_4_ = uVar17 & uVar23;
        auVar21._4_4_ = uVar1 & uVar24;
        auVar21._8_4_ = uVar2 & uVar25;
        auVar21._12_4_ = uVar3 & uVar26;
        auVar21 = pmulld(auVar21,auVar12);
        puVar14[-0x18d] = auVar21._0_4_ ^ *puVar14 ^ uVar23 >> 1;
        puVar14[-0x18c] = auVar21._4_4_ ^ puVar14[1] ^ uVar24 >> 1;
        puVar14[-0x18b] = auVar21._8_4_ ^ puVar14[2] ^ uVar25 >> 1;
        puVar14[-0x18a] = auVar21._12_4_ ^ puVar14[3] ^ uVar26 >> 1;
        uVar23 = puVar14[-0x188] & uVar4 | puVar14[-0x189] & uVar8;
        uVar24 = puVar14[-0x187] & uVar5 | puVar14[-0x188] & uVar9;
        uVar25 = puVar14[-0x186] & uVar6 | puVar14[-0x187] & uVar10;
        uVar26 = puVar14[-0x185] & uVar7 | puVar14[-0x186] & uVar11;
        auVar22._0_4_ = uVar17 & uVar23;
        auVar22._4_4_ = uVar1 & uVar24;
        auVar22._8_4_ = uVar2 & uVar25;
        auVar22._12_4_ = uVar3 & uVar26;
        auVar21 = pmulld(auVar22,auVar12);
        puVar14[-0x189] = auVar21._0_4_ ^ puVar14[4] ^ uVar23 >> 1;
        puVar14[-0x188] = auVar21._4_4_ ^ puVar14[5] ^ uVar24 >> 1;
        puVar14[-0x187] = auVar21._8_4_ ^ puVar14[6] ^ uVar25 >> 1;
        puVar14[-0x186] = auVar21._12_4_ ^ puVar14[7] ^ uVar26 >> 1;
        lVar16 = lVar16 + -1;
        puVar14 = puVar14 + 8;
      } while (lVar16 != 0);
      lVar16 = 0xe0;
    }
    lVar15 = 0xe3;
    do {
      uVar17 = (puVar19[lVar16] ^ *(uint *)(lVar18 + 0x14234e994 + lVar16 * 4)) & 0x7fffffff ^
               puVar19[lVar16];
      puVar19[lVar16] =
           (uVar17 & 1) * -0x66f74f21 ^ *(uint *)(lVar18 + 0x14234efc4 + lVar16 * 4) ^ uVar17 >> 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < 0xe3);
    do {
      uVar17 = (puVar19[lVar15] ^ *(uint *)(lVar18 + 0x14234e994 + lVar15 * 4)) & 0x7fffffff ^
               puVar19[lVar15];
      puVar19[lVar15] =
           (uVar17 & 1) * -0x66f74f21 ^ *(uint *)(lVar18 + 0x14234e604 + lVar15 * 4) ^ uVar17 >> 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < 0x26f);
    uVar17 = (*(uint *)(lVar18 + 0x14234f34c) ^ *puVar19) & 0x7fffffff ^
             *(uint *)(lVar18 + 0x14234f34c);
    *(uint *)(lVar18 + 0x14234f34c) =
         (uVar17 & 1) * -0x66f74f21 ^ *(uint *)(lVar18 + 0x14234efc0) ^ uVar17 >> 1;
  }
  *(int *)(lVar13 * 4 + 0x142131b30) = iVar20 + 4;
  return *(undefined4 *)((longlong)iVar20 + (longlong)puVar19);
}

