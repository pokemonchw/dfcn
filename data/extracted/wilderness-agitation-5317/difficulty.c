
void difficulty(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 3) {
    if (iVar1 == 0) {
      param_1[0x11] = 10;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x12] = 10000;
      param_1[0x13] = 5000;
      param_1[0x14] = 0x28;
      param_1[0x15] = 10000;
      param_1[0x16] = 2000;
      param_1[0x17] = 500;
      param_1[0x18] = 10;
      param_1[0x19] = 0;
      param_1[2] = 0x14;
      param_1[3] = 0x32;
      param_1[4] = 0x50;
      param_1[5] = 0x6e;
      param_1[6] = 0x8c;
      param_1[7] = 5000;
      param_1[8] = 25000;
      param_1[9] = 100000;
      param_1[10] = 200000;
      param_1[0xb] = 300000;
      param_1[0xc] = 500;
      param_1[0xd] = 0x9c4;
      param_1[0xe] = 10000;
      param_1[0xf] = 20000;
      param_1[0x10] = 30000;
      param_1[0x24] = 5;
      param_1[0x25] = 0x19;
      param_1[0x26] = 0xff;
      param_1[0x27] = 10;
      param_1[0x28] = 0x14;
      param_1[0x29] = 10;
      param_1[0x2a] = 0x32;
      param_1[0x2b] = 1000;
      param_1[0x2c] = 0x54;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x37] = 10;
    }
    else if (iVar1 == 1) {
      param_1[0x11] = 10;
      param_1[0x12] = 10000;
      param_1[0x13] = 5000;
      param_1[0x14] = 0x28;
      param_1[0x15] = 10000;
      param_1[0x16] = 2000;
      param_1[0x17] = 500;
      param_1[0x18] = 10;
      param_1[0x19] = 100;
      param_1[2] = 0x14;
      param_1[3] = 0x32;
      param_1[4] = 0x50;
      param_1[5] = 0x6e;
      param_1[6] = 0x8c;
      param_1[7] = 5000;
      param_1[8] = 25000;
      param_1[9] = 100000;
      param_1[10] = 200000;
      param_1[0xb] = 300000;
      param_1[0xc] = 500;
      param_1[0xd] = 0x9c4;
      param_1[0xe] = 10000;
      param_1[0xf] = 20000;
      param_1[0x10] = 30000;
      param_1[0x1a] = 0x8c;
      param_1[0x1b] = 0x32;
      param_1[0x1c] = 300;
      param_1[0x1d] = 1000;
      param_1[0x1e] = 500;
      param_1[0x1f] = 2;
      param_1[0x20] = 3;
      param_1[0x21] = 0x19;
      param_1[0x22] = 10;
      param_1[0x23] = 0x32;
      param_1[0x24] = 5;
      param_1[0x25] = 0x19;
      param_1[0x26] = 0;
      param_1[0x27] = 0x32;
      param_1[0x28] = 0x14;
      param_1[0x29] = 0x32;
      param_1[0x2a] = 0x32;
      param_1[0x2b] = 1000;
      param_1[0x2c] = 0x54;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x37] = 0x32;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      param_1[0x11] = 8;
      param_1[0x12] = 10000;
      param_1[0x13] = 2000;
      param_1[0x14] = 0x28;
      param_1[0x15] = 10000;
      param_1[0x16] = 0;
      param_1[0x17] = 100;
      param_1[0x18] = 8;
      param_1[0x19] = 0x4b;
      param_1[2] = 0xf;
      param_1[3] = 0x1e;
      param_1[4] = 0x28;
      param_1[5] = 0x37;
      param_1[6] = 0x46;
      param_1[7] = 0x9c4;
      param_1[8] = 0x30d4;
      param_1[9] = 50000;
      param_1[10] = 100000;
      param_1[0xb] = 150000;
      param_1[0xc] = 0xfa;
      param_1[0xd] = 0x4e2;
      param_1[0xe] = 5000;
      param_1[0xf] = 10000;
      param_1[0x10] = 15000;
      param_1[0x1a] = 0x8c;
      param_1[0x1b] = 100;
      param_1[0x1c] = 600;
      param_1[0x1d] = 0x5dc;
      param_1[0x1e] = 0x2ee;
      param_1[0x1f] = 2;
      param_1[0x20] = 2;
      param_1[0x21] = 0x32;
      param_1[0x22] = 0x14;
      param_1[0x23] = 0x4b;
      param_1[0x24] = 1;
      param_1[0x25] = 10;
      param_1[0x26] = 0;
      param_1[0x27] = 100;
      param_1[0x28] = 0x14;
      param_1[0x29] = 100;
      param_1[0x2a] = 0x32;
      param_1[0x2b] = 1000;
      param_1[0x2c] = 0x54;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x37] = 100;
    }
    param_1[0x31] = 5;
    param_1[0x32] = 6;
    param_1[0x33] = 8;
    param_1[0x34] = 10;
    param_1[0x35] = 0x14;
    param_1[0x36] = 100;
    param_1[0x38] = 5;
  }
  return;
}

