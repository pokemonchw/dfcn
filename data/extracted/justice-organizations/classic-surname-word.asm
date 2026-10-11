# classic PE:6a70b91c:0270a000; surname-word; RVA 0xd29b90..0xd29c5c
0x00d29b90: mov    r10,r8
0x00d29b93: test   edx,edx
0x00d29b95: js     0x140d29c5b
0x00d29b9b: mov    rax,QWORD PTR [rip+0x17bdac6]        # 0x1424e7668
0x00d29ba2: mov    r9,QWORD PTR [rip+0x17bdab7]        # 0x1424e7660
0x00d29ba9: sub    rax,r9
0x00d29bac: movsxd rdx,edx
0x00d29baf: sar    rax,0x3
0x00d29bb3: cmp    rdx,rax
0x00d29bb6: jae    0x140d29c5b
0x00d29bbc: movsxd rax,DWORD PTR [rsp+0x28]
0x00d29bc1: cmp    eax,0x8
0x00d29bc4: ja     0x140d29c5b
0x00d29bca: lea    r8,[rip+0xffffffffff2d642f]        # 0x140000000
0x00d29bd1: mov    ecx,DWORD PTR [r8+rax*4+0xd29c5c]
0x00d29bd9: add    rcx,r8
0x00d29bdc: jmp    rcx
0x00d29bde: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29be2: add    rdx,0x20
0x00d29be6: jmp    0x140d29c45
0x00d29be8: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29bec: add    rdx,0x40
0x00d29bf0: jmp    0x140d29c45
0x00d29bf2: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29bf6: sub    rdx,0xffffffffffffff80
0x00d29bfa: jmp    0x140d29c45
0x00d29bfc: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29c00: add    rdx,0x60
0x00d29c04: jmp    0x140d29c45
0x00d29c06: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29c0a: add    rdx,0xa0
0x00d29c11: jmp    0x140d29c45
0x00d29c13: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29c17: add    rdx,0xc0
0x00d29c1e: jmp    0x140d29c45
0x00d29c20: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29c24: add    rdx,0xe0
0x00d29c2b: jmp    0x140d29c45
0x00d29c2d: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29c31: add    rdx,0x100
0x00d29c38: jmp    0x140d29c45
0x00d29c3a: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d29c3e: add    rdx,0x120
0x00d29c45: cmp    QWORD PTR [rdx+0x18],0xf
0x00d29c4a: mov    r8,QWORD PTR [rdx+0x10]
0x00d29c4e: jbe    0x140d29c53
0x00d29c50: mov    rdx,QWORD PTR [rdx]
0x00d29c53: mov    rcx,r10
0x00d29c56: jmp    0x14006f9a0
0x00d29c5b: ret
