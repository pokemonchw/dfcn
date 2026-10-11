# reference; PE:6a70a6d9:02711000; intelligence mode reset; RVA 0x4792d0..0x479330; PE disassembly
0x004792d0: lea    rax,[rcx+0x298]
0x004792d7: xor    edx,edx
0x004792d9: mov    QWORD PTR [rax+0x10],rdx
0x004792dd: cmp    QWORD PTR [rax+0x18],0xf
0x004792e2: jbe    0x1404792e7
0x004792e4: mov    rax,QWORD PTR [rax]
0x004792e7: mov    BYTE PTR [rax],dl
0x004792e9: mov    DWORD PTR [rcx+0x294],edx
0x004792ef: mov    QWORD PTR [rcx+0x2c0],rdx
0x004792f6: mov    DWORD PTR [rcx+0x2c8],edx
0x004792fc: mov    BYTE PTR [rcx+0x2cc],dl
0x00479302: mov    QWORD PTR [rcx+0x230],rdx
0x00479309: mov    DWORD PTR [rcx+0x238],edx
0x0047930f: mov    BYTE PTR [rcx+0x23c],dl
0x00479315: mov    DWORD PTR [rcx+0x240],edx
0x0047931b: mov    BYTE PTR [rcx+0x244],dl
0x00479321: jmp    0x140479330
0x00479326: int3
0x00479327: int3
0x00479328: int3
0x00479329: int3
0x0047932a: int3
0x0047932b: int3
0x0047932c: int3
0x0047932d: int3
0x0047932e: int3
0x0047932f: int3
