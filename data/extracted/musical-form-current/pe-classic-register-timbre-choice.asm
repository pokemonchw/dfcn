; classic PE:6aea11a5:0272d000; register-timbre-choice; leaf code followed by selector table 0xde77f0..0xde7900; code ends 0xde78ac
0xde77f0: mov    rax,QWORD PTR [rcx+0x8]
0xde77f4: lea    r11,[rip+0xffffffffff218805]        # 0x140000000
0xde77fb: mov    rcx,QWORD PTR [rcx+0x10]
0xde77ff: mov    r10d,0xffffffff
0xde7805: cmp    rax,rcx
0xde7808: jae    0x140de78a8
0xde780e: movsxd r9,DWORD PTR [rax]
0xde7811: cmp    r9d,0x3e
0xde7815: ja     0x140de7894
0xde7817: movzx  edx,BYTE PTR [r11+r9*1+0xde78c0]
0xde7820: mov    r8d,DWORD PTR [r11+rdx*4+0xde78ac]
0xde7828: add    r8,r11
0xde782b: jmp    r8
0xde782e: mov    edx,0x1
0xde7833: add    rax,0x4
0xde7837: test   edx,edx
0xde7839: cmove  r9d,r10d
0xde783d: mov    r10d,r9d
0xde7840: jmp    0x140de7805
0xde7842: mov    edx,0x2
0xde7847: add    rax,0x4
0xde784b: test   edx,edx
0xde784d: cmove  r9d,r10d
0xde7851: mov    r10d,r9d
0xde7854: jmp    0x140de7805
0xde7856: mov    edx,0x3
0xde785b: add    rax,0x4
0xde785f: test   edx,edx
0xde7861: cmove  r9d,r10d
0xde7865: mov    r10d,r9d
0xde7868: jmp    0x140de7805
0xde786a: mov    edx,0x4
0xde786f: add    rax,rdx
0xde7872: test   edx,edx
0xde7874: cmove  r9d,r10d
0xde7878: mov    r10d,r9d
0xde787b: jmp    0x140de7805
0xde787d: mov    edx,0x5
0xde7882: add    rax,0x4
0xde7886: test   edx,edx
0xde7888: cmove  r9d,r10d
0xde788c: mov    r10d,r9d
0xde788f: jmp    0x140de7805
0xde7894: xor    edx,edx
0xde7896: add    rax,0x4
0xde789a: test   edx,edx
0xde789c: cmove  r9d,r10d
0xde78a0: mov    r10d,r9d
0xde78a3: jmp    0x140de7805
0xde78a8: mov    eax,r10d
0xde78ab: ret
