; reference PE:6aea05a1:02734000; musical-register-selector; RVA 0xdecaa0..0xdecbb0; code ends 0xdecb5c
0x00decaa0: mov    rax,QWORD PTR [rcx+0x8]
0x00decaa4: lea    r11,[rip+0xffffffffff213555]        # 0x140000000
0x00decaab: mov    rcx,QWORD PTR [rcx+0x10]
0x00decaaf: mov    r10d,0xffffffff
0x00decab5: cmp    rax,rcx
0x00decab8: jae    0x140decb58
0x00decabe: movsxd r9,DWORD PTR [rax]
0x00decac1: cmp    r9d,0x3e
0x00decac5: ja     0x140decb44
0x00decac7: movzx  edx,BYTE PTR [r11+r9*1+0xdecb70]
0x00decad0: mov    r8d,DWORD PTR [r11+rdx*4+0xdecb5c]
0x00decad8: add    r8,r11
0x00decadb: jmp    r8
0x00decade: mov    edx,0x1
0x00decae3: add    rax,0x4
0x00decae7: test   edx,edx
0x00decae9: cmove  r9d,r10d
0x00decaed: mov    r10d,r9d
0x00decaf0: jmp    0x140decab5
0x00decaf2: mov    edx,0x2
0x00decaf7: add    rax,0x4
0x00decafb: test   edx,edx
0x00decafd: cmove  r9d,r10d
0x00decb01: mov    r10d,r9d
0x00decb04: jmp    0x140decab5
0x00decb06: mov    edx,0x3
0x00decb0b: add    rax,0x4
0x00decb0f: test   edx,edx
0x00decb11: cmove  r9d,r10d
0x00decb15: mov    r10d,r9d
0x00decb18: jmp    0x140decab5
0x00decb1a: mov    edx,0x4
0x00decb1f: add    rax,rdx
0x00decb22: test   edx,edx
0x00decb24: cmove  r9d,r10d
0x00decb28: mov    r10d,r9d
0x00decb2b: jmp    0x140decab5
0x00decb2d: mov    edx,0x5
0x00decb32: add    rax,0x4
0x00decb36: test   edx,edx
0x00decb38: cmove  r9d,r10d
0x00decb3c: mov    r10d,r9d
0x00decb3f: jmp    0x140decab5
0x00decb44: xor    edx,edx
0x00decb46: add    rax,0x4
0x00decb4a: test   edx,edx
0x00decb4c: cmove  r9d,r10d
0x00decb50: mov    r10d,r9d
0x00decb53: jmp    0x140decab5
0x00decb58: mov    eax,r10d
0x00decb5b: ret
