; reference PE:6aea05a1:02734000; reference-description:general_ref_item_typest; RVA 0xf0ccf0..0xf0cd93; code ends 0xf0cd93
0x00f0ccf0: mov    QWORD PTR [rsp+0x8],rbx
0x00f0ccf5: mov    QWORD PTR [rsp+0x10],rsi
0x00f0ccfa: push   rdi
0x00f0ccfb: sub    rsp,0x70
0x00f0ccff: xor    esi,esi
0x00f0cd01: mov    rbx,rdx
0x00f0cd04: mov    QWORD PTR [rdx+0x10],rsi
0x00f0cd08: mov    rdi,rcx
0x00f0cd0b: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0cd10: mov    rax,rdx
0x00f0cd13: jbe    0x140f0cd18
0x00f0cd15: mov    rax,QWORD PTR [rdx]
0x00f0cd18: mov    r8d,0x2
0x00f0cd1e: mov    BYTE PTR [rax],sil
0x00f0cd21: lea    rdx,[rip+0x6fbb78]        # 0x1416088a0 ; literal="a "
0x00f0cd28: mov    rcx,rbx
0x00f0cd2b: call   0x140071040
0x00f0cd30: movsx  eax,WORD PTR [rdi+0x12]
0x00f0cd34: mov    rcx,rbx
0x00f0cd37: movzx  r9d,WORD PTR [rdi+0x10]
0x00f0cd3c: movzx  r8d,WORD PTR [rdi+0xc]
0x00f0cd41: movzx  edx,WORD PTR [rdi+0x8]
0x00f0cd45: mov    DWORD PTR [rsp+0x68],esi
0x00f0cd49: mov    DWORD PTR [rsp+0x60],esi
0x00f0cd4d: mov    BYTE PTR [rsp+0x58],sil
0x00f0cd52: mov    DWORD PTR [rsp+0x50],0xffffffff
0x00f0cd5a: mov    DWORD PTR [rsp+0x48],0xffffffff
0x00f0cd62: mov    QWORD PTR [rsp+0x40],rsi
0x00f0cd67: mov    BYTE PTR [rsp+0x38],0x1
0x00f0cd6c: mov    DWORD PTR [rsp+0x30],esi
0x00f0cd70: mov    DWORD PTR [rsp+0x28],0x1
0x00f0cd78: mov    DWORD PTR [rsp+0x20],eax
0x00f0cd7c: call   0x140a9c6b0
0x00f0cd81: lea    r11,[rsp+0x70]
0x00f0cd86: mov    rbx,QWORD PTR [r11+0x10]
0x00f0cd8a: mov    rsi,QWORD PTR [r11+0x18]
0x00f0cd8e: mov    rsp,r11
0x00f0cd91: pop    rdi
0x00f0cd92: ret
