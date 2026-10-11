# reference PE:6a70a6d9:02711000; surname-word; RVA 0xd2cb50..0xd2cc1c
0x00d2cb50: mov    r10,r8
0x00d2cb53: test   edx,edx
0x00d2cb55: js     0x140d2cc1b
0x00d2cb5b: mov    rax,QWORD PTR [rip+0x17c0c16]        # 0x1424ed778
0x00d2cb62: mov    r9,QWORD PTR [rip+0x17c0c07]        # 0x1424ed770
0x00d2cb69: sub    rax,r9
0x00d2cb6c: movsxd rdx,edx
0x00d2cb6f: sar    rax,0x3
0x00d2cb73: cmp    rdx,rax
0x00d2cb76: jae    0x140d2cc1b
0x00d2cb7c: movsxd rax,DWORD PTR [rsp+0x28]
0x00d2cb81: cmp    eax,0x8
0x00d2cb84: ja     0x140d2cc1b
0x00d2cb8a: lea    r8,[rip+0xffffffffff2d346f]        # 0x140000000
0x00d2cb91: mov    ecx,DWORD PTR [r8+rax*4+0xd2cc1c]
0x00d2cb99: add    rcx,r8
0x00d2cb9c: jmp    rcx
0x00d2cb9e: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cba2: add    rdx,0x20
0x00d2cba6: jmp    0x140d2cc05
0x00d2cba8: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbac: add    rdx,0x40
0x00d2cbb0: jmp    0x140d2cc05
0x00d2cbb2: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbb6: sub    rdx,0xffffffffffffff80
0x00d2cbba: jmp    0x140d2cc05
0x00d2cbbc: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbc0: add    rdx,0x60
0x00d2cbc4: jmp    0x140d2cc05
0x00d2cbc6: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbca: add    rdx,0xa0
0x00d2cbd1: jmp    0x140d2cc05
0x00d2cbd3: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbd7: add    rdx,0xc0
0x00d2cbde: jmp    0x140d2cc05
0x00d2cbe0: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbe4: add    rdx,0xe0
0x00d2cbeb: jmp    0x140d2cc05
0x00d2cbed: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbf1: add    rdx,0x100
0x00d2cbf8: jmp    0x140d2cc05
0x00d2cbfa: mov    rdx,QWORD PTR [r9+rdx*8]
0x00d2cbfe: add    rdx,0x120
0x00d2cc05: cmp    QWORD PTR [rdx+0x18],0xf
0x00d2cc0a: mov    r8,QWORD PTR [rdx+0x10]
0x00d2cc0e: jbe    0x140d2cc13
0x00d2cc10: mov    rdx,QWORD PTR [rdx]
0x00d2cc13: mov    rcx,r10
0x00d2cc16: jmp    0x14006fa10
0x00d2cc1b: ret
