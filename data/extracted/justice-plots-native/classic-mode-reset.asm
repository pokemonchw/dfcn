# classic; PE:6a70b91c:0270a000; intelligence mode reset; RVA 0x476e90..0x476ef0; PE disassembly
0x00476e90: lea    rax,[rcx+0x298]
0x00476e97: xor    edx,edx
0x00476e99: mov    QWORD PTR [rax+0x10],rdx
0x00476e9d: cmp    QWORD PTR [rax+0x18],0xf
0x00476ea2: jbe    0x140476ea7
0x00476ea4: mov    rax,QWORD PTR [rax]
0x00476ea7: mov    BYTE PTR [rax],dl
0x00476ea9: mov    DWORD PTR [rcx+0x294],edx
0x00476eaf: mov    QWORD PTR [rcx+0x2c0],rdx
0x00476eb6: mov    DWORD PTR [rcx+0x2c8],edx
0x00476ebc: mov    BYTE PTR [rcx+0x2cc],dl
0x00476ec2: mov    QWORD PTR [rcx+0x230],rdx
0x00476ec9: mov    DWORD PTR [rcx+0x238],edx
0x00476ecf: mov    BYTE PTR [rcx+0x23c],dl
0x00476ed5: mov    DWORD PTR [rcx+0x240],edx
0x00476edb: mov    BYTE PTR [rcx+0x244],dl
0x00476ee1: jmp    0x140476ef0
0x00476ee6: int3
0x00476ee7: int3
0x00476ee8: int3
0x00476ee9: int3
0x00476eea: int3
0x00476eeb: int3
0x00476eec: int3
0x00476eed: int3
0x00476eee: int3
0x00476eef: int3
