; reference PE:6aea05a1:02734000; register-timbre-choice; leaf code followed by selector table 0xdecaa0..0xdecbb0; code ends 0xdecb5c
0xdecaa0: mov    rax,QWORD PTR [rcx+0x8]
0xdecaa4: lea    r11,[rip+0xffffffffff213555]        # 0x140000000
0xdecaab: mov    rcx,QWORD PTR [rcx+0x10]
0xdecaaf: mov    r10d,0xffffffff
0xdecab5: cmp    rax,rcx
0xdecab8: jae    0x140decb58
0xdecabe: movsxd r9,DWORD PTR [rax]
0xdecac1: cmp    r9d,0x3e
0xdecac5: ja     0x140decb44
0xdecac7: movzx  edx,BYTE PTR [r11+r9*1+0xdecb70]
0xdecad0: mov    r8d,DWORD PTR [r11+rdx*4+0xdecb5c]
0xdecad8: add    r8,r11
0xdecadb: jmp    r8
0xdecade: mov    edx,0x1
0xdecae3: add    rax,0x4
0xdecae7: test   edx,edx
0xdecae9: cmove  r9d,r10d
0xdecaed: mov    r10d,r9d
0xdecaf0: jmp    0x140decab5
0xdecaf2: mov    edx,0x2
0xdecaf7: add    rax,0x4
0xdecafb: test   edx,edx
0xdecafd: cmove  r9d,r10d
0xdecb01: mov    r10d,r9d
0xdecb04: jmp    0x140decab5
0xdecb06: mov    edx,0x3
0xdecb0b: add    rax,0x4
0xdecb0f: test   edx,edx
0xdecb11: cmove  r9d,r10d
0xdecb15: mov    r10d,r9d
0xdecb18: jmp    0x140decab5
0xdecb1a: mov    edx,0x4
0xdecb1f: add    rax,rdx
0xdecb22: test   edx,edx
0xdecb24: cmove  r9d,r10d
0xdecb28: mov    r10d,r9d
0xdecb2b: jmp    0x140decab5
0xdecb2d: mov    edx,0x5
0xdecb32: add    rax,0x4
0xdecb36: test   edx,edx
0xdecb38: cmove  r9d,r10d
0xdecb3c: mov    r10d,r9d
0xdecb3f: jmp    0x140decab5
0xdecb44: xor    edx,edx
0xdecb46: add    rax,0x4
0xdecb4a: test   edx,edx
0xdecb4c: cmove  r9d,r10d
0xdecb50: mov    r10d,r9d
0xdecb53: jmp    0x140decab5
0xdecb58: mov    eax,r10d
0xdecb5b: ret
