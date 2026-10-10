# classic PE:6a70b91c:0270a000; inventory-options-builder; RVA 0x85d8c0..0x85f6ac
0x0085d8c0: mov    QWORD PTR [rsp+0x8],rcx
0x0085d8c5: push   rbp
0x0085d8c6: push   rbx
0x0085d8c7: push   rsi
0x0085d8c8: push   rdi
0x0085d8c9: push   r12
0x0085d8cb: push   r13
0x0085d8cd: push   r14
0x0085d8cf: push   r15
0x0085d8d1: lea    rbp,[rsp-0x1f]
0x0085d8d6: sub    rsp,0xc8
0x0085d8dd: mov    r12,rcx
0x0085d8e0: mov    rsi,QWORD PTR [rip+0x1b81719]        # 0x1423df000
0x0085d8e7: mov    r13d,0xffff8ad0
0x0085d8ed: mov    WORD PTR [rbp+0x77],r13w
0x0085d8f2: test   DWORD PTR [rsi+0x110],0x2000000
0x0085d8fc: je     0x14085d951
0x0085d8fe: mov    rbx,QWORD PTR [rsi+0x1d8]
0x0085d905: mov    rdi,QWORD PTR [rsi+0x1e0]
0x0085d90c: nop    DWORD PTR [rax+0x0]
0x0085d910: cmp    rbx,rdi
0x0085d913: jae    0x14085d94b
0x0085d915: mov    rcx,QWORD PTR [rbx]
0x0085d918: mov    rax,QWORD PTR [rcx]
0x0085d91b: call   QWORD PTR [rax+0x10]
0x0085d91e: cmp    eax,0xb
0x0085d921: jne    0x14085d931
0x0085d923: mov    rcx,QWORD PTR [rbx]
0x0085d926: mov    rax,QWORD PTR [rcx]
0x0085d929: call   QWORD PTR [rax+0x18]
0x0085d92c: test   rax,rax
0x0085d92f: jne    0x14085d937
0x0085d931: add    rbx,0x8
0x0085d935: jmp    0x14085d910
0x0085d937: lea    r9,[rbp+0x6f]
0x0085d93b: lea    r8,[rbp+0x7f]
0x0085d93f: lea    rdx,[rbp+0x77]
0x0085d943: mov    rcx,rax
0x0085d946: call   0x140c88ae0
0x0085d94b: movzx  esi,WORD PTR [rbp+0x6f]
0x0085d94f: jmp    0x14085d972
0x0085d951: movzx  eax,WORD PTR [rsi+0xa8]
0x0085d958: mov    WORD PTR [rbp+0x77],ax
0x0085d95c: movzx  eax,WORD PTR [rsi+0xaa]
0x0085d963: mov    WORD PTR [rbp+0x7f],ax
0x0085d967: movzx  esi,WORD PTR [rsi+0xac]
0x0085d96e: mov    WORD PTR [rbp+0x6f],si
0x0085d972: mov    r8,QWORD PTR [rip+0x1b81687]        # 0x1423df000
0x0085d979: xor    r9d,r9d
0x0085d97c: cmp    DWORD PTR [r8+0x1280],0x14
0x0085d984: jle    0x14085d9a6
0x0085d986: mov    rax,QWORD PTR [r8+0x1278]
0x0085d98d: test   BYTE PTR [rax+0x14],0x4
0x0085d991: je     0x14085d9a6
0x0085d993: test   DWORD PTR [r8+0x82c],0x10000000
0x0085d99e: jne    0x14085dc0e
0x0085d9a4: jmp    0x14085d9cf
0x0085d9a6: mov    r8,QWORD PTR [rip+0x1b81653]        # 0x1423df000
0x0085d9ad: test   DWORD PTR [r8+0x82c],0x10000000
0x0085d9b8: jne    0x14085dc0e
0x0085d9be: test   DWORD PTR [r8+0x828],0x10000000
0x0085d9c9: je     0x14085dc0e
0x0085d9cf: mov    rbx,QWORD PTR [rip+0x1b815e2]        # 0x1423defb8
0x0085d9d6: mov    rdi,QWORD PTR [rip+0x1b815e3]        # 0x1423defc0
0x0085d9dd: lea    r15,[rip+0xe59d24]        # 0x1416b7708
0x0085d9e4: cmp    rbx,rdi
0x0085d9e7: jae    0x14085dc0b
0x0085d9ed: mov    r14,QWORD PTR [rbx]
0x0085d9f0: cmp    r14,QWORD PTR [rip+0x1b81609]        # 0x1423df000
0x0085d9f7: je     0x14085dc02
0x0085d9fd: test   DWORD PTR [r14+0x110],0x2000002
0x0085da08: jne    0x14085dc02
0x0085da0e: cmp    WORD PTR [r14+0x800],0x0
0x0085da17: jle    0x14085dc02
0x0085da1d: mov    rcx,r14
0x0085da20: call   0x1400e3660
0x0085da25: test   al,al
0x0085da27: je     0x14085dc02
0x0085da2d: movsx  ecx,WORD PTR [r14+0xa8]
0x0085da35: movsx  eax,WORD PTR [rbp+0x77]
0x0085da39: sub    ecx,eax
0x0085da3b: mov    eax,ecx
0x0085da3d: neg    eax
0x0085da3f: cmovs  eax,ecx
0x0085da42: cmp    eax,0x1
0x0085da45: jg     0x14085dc02
0x0085da4b: movsx  ecx,WORD PTR [r14+0xaa]
0x0085da53: movsx  eax,WORD PTR [rbp+0x7f]
0x0085da57: sub    ecx,eax
0x0085da59: mov    eax,ecx
0x0085da5b: neg    eax
0x0085da5d: cmovs  eax,ecx
0x0085da60: cmp    eax,0x1
0x0085da63: jg     0x14085dc02
0x0085da69: cmp    WORD PTR [r14+0xac],si
0x0085da71: jne    0x14085dc02
0x0085da77: movsx  rcx,WORD PTR [r14+0x12c]
0x0085da7f: movsx  rax,WORD PTR [r14+0xa4]
0x0085da87: test   ax,ax
0x0085da8a: js     0x14085dc02
0x0085da90: mov    rdx,rax
0x0085da93: mov    rax,QWORD PTR [rip+0x1c88ec6]        # 0x1424e6960
0x0085da9a: mov    r8,QWORD PTR [rip+0x1c88eb7]        # 0x1424e6958
0x0085daa1: sub    rax,r8
0x0085daa4: sar    rax,0x3
0x0085daa8: cmp    rdx,rax
0x0085daab: jae    0x14085dc02
0x0085dab1: test   cx,cx
0x0085dab4: js     0x14085dc02
0x0085daba: mov    rax,QWORD PTR [r8+rdx*8]
0x0085dabe: mov    rdx,QWORD PTR [rax+0x178]
0x0085dac5: mov    rax,QWORD PTR [rax+0x180]
0x0085dacc: sub    rax,rdx
0x0085dacf: sar    rax,0x3
0x0085dad3: cmp    rcx,rax
0x0085dad6: jae    0x14085dc02
0x0085dadc: mov    rax,QWORD PTR [rdx+rcx*8]
0x0085dae0: test   rax,rax
0x0085dae3: je     0x14085dc02
0x0085dae9: movzx  edx,WORD PTR [rax+0x3c76]
0x0085daf0: cmp    dx,0xffff
0x0085daf4: je     0x14085dc02
0x0085dafa: mov    r8d,DWORD PTR [rax+0x3c78]
0x0085db01: lea    rcx,[rip+0x1b6d8d8]        # 0x1423cb3e0
0x0085db08: call   0x1414a8ce0
0x0085db0d: test   rax,rax
0x0085db10: je     0x14085dbfe
0x0085db16: cmp    DWORD PTR [rax+0x298],0x4
0x0085db1d: jle    0x14085db30
0x0085db1f: mov    rax,QWORD PTR [rax+0x290]
0x0085db26: test   BYTE PTR [rax+0x4],0x1
0x0085db2a: je     0x14085db30
0x0085db2c: mov    al,0x1
0x0085db2e: jmp    0x14085db32
0x0085db30: xor    al,al
0x0085db32: test   al,al
0x0085db34: je     0x14085dbfe
0x0085db3a: mov    ecx,0x28
0x0085db3f: call   0x141534600
0x0085db44: mov    rcx,rax
0x0085db47: mov    QWORD PTR [rbp-0x51],rax
0x0085db4b: mov    DWORD PTR [rax+0x8],0x0
0x0085db52: mov    r10d,0xffffffff
0x0085db58: mov    DWORD PTR [rax+0xc],r10d
0x0085db5c: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x0085db63: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0085db6a: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x0085db71: mov    QWORD PTR [rax],r15
0x0085db74: mov    DWORD PTR [rax+0x20],r10d
0x0085db78: mov    eax,DWORD PTR [r14+0x130]
0x0085db7f: mov    DWORD PTR [rcx+0x20],eax
0x0085db82: movzx  eax,WORD PTR [r14+0xa8]
0x0085db8a: mov    WORD PTR [rcx+0x10],ax
0x0085db8e: movzx  eax,WORD PTR [r14+0xaa]
0x0085db96: mov    WORD PTR [rcx+0x12],ax
0x0085db9a: movzx  eax,WORD PTR [r14+0xac]
0x0085dba2: mov    WORD PTR [rcx+0x14],ax
0x0085dba6: movzx  eax,WORD PTR [rbp+0x77]
0x0085dbaa: mov    WORD PTR [rcx+0x16],ax
0x0085dbae: movzx  eax,WORD PTR [rbp+0x7f]
0x0085dbb2: mov    WORD PTR [rcx+0x18],ax
0x0085dbb6: movzx  eax,WORD PTR [rbp+0x6f]
0x0085dbba: mov    WORD PTR [rcx+0x1a],ax
0x0085dbbe: mov    QWORD PTR [rbp-0x51],rcx
0x0085dbc2: mov    rdx,QWORD PTR [r12+0xc8]
0x0085dbca: cmp    rdx,QWORD PTR [r12+0xd0]
0x0085dbd2: je     0x14085dbed
0x0085dbd4: mov    QWORD PTR [rdx],rcx
0x0085dbd7: add    QWORD PTR [r12+0xc8],0x8
0x0085dbe0: movzx  esi,WORD PTR [rbp+0x6f]
0x0085dbe4: add    rbx,0x8
0x0085dbe8: jmp    0x14085d9e4
0x0085dbed: lea    r8,[rbp-0x51]
0x0085dbf1: lea    rcx,[r12+0xc0]
0x0085dbf9: call   0x1400bacc0
0x0085dbfe: movzx  esi,WORD PTR [rbp+0x6f]
0x0085dc02: add    rbx,0x8
0x0085dc06: jmp    0x14085d9e4
0x0085dc0b: xor    r9d,r9d
0x0085dc0e: mov    DWORD PTR [rbp-0x49],r9d
0x0085dc12: mov    rax,QWORD PTR [rip+0x1b813e7]        # 0x1423df000
0x0085dc19: mov    rcx,QWORD PTR [rax+0x410]
0x0085dc20: sub    rcx,QWORD PTR [rax+0x408]
0x0085dc27: sar    rcx,0x3
0x0085dc2b: test   rcx,rcx
0x0085dc2e: je     0x14085e6b4
0x0085dc34: mov    r13,r9
0x0085dc37: mov    QWORD PTR [rbp-0x51],r9
0x0085dc3b: mov    eax,0x124
0x0085dc40: lea    r8,[rip+0xffffffffff7a23b9]        # 0x140000000
0x0085dc47: nop    WORD PTR [rax+rax*1+0x0]
0x0085dc50: mov    edi,r9d
0x0085dc53: mov    DWORD PTR [rbp-0x45],r9d
0x0085dc57: mov    rsi,r9
0x0085dc5a: mov    QWORD PTR [rbp-0x31],r9
0x0085dc5e: mov    r14d,0x2
0x0085dc64: mov    QWORD PTR [rbp-0x59],r14
0x0085dc68: mov    r12d,r14d
0x0085dc6b: mov    QWORD PTR [rbp-0x39],r14
0x0085dc6f: nop
0x0085dc70: mov    r15b,0x1
0x0085dc73: cmp    edi,0x8
0x0085dc76: ja     0x14085dd40
0x0085dc7c: bt     eax,edi
0x0085dc7f: jae    0x14085dd40
0x0085dc85: mov    rax,QWORD PTR [rip+0x1b81374]        # 0x1423df000
0x0085dc8c: mov    rax,QWORD PTR [rax+0x408]
0x0085dc93: mov    rdx,QWORD PTR [rax+r13*8]
0x0085dc97: movsx  eax,WORD PTR [rdx+0x8]
0x0085dc9b: add    eax,0xfffffffe
0x0085dc9e: cmp    eax,0x8
0x0085dca1: ja     0x14085dcb5
0x0085dca3: cdqe
0x0085dca5: mov    ecx,DWORD PTR [r8+rax*4+0x85f6ac]
0x0085dcad: add    rcx,r8
0x0085dcb0: jmp    rcx
0x0085dcb2: xor    r15b,r15b
0x0085dcb5: movzx  ebx,r15b
0x0085dcb9: cmp    edi,0x2
0x0085dcbc: je     0x14085df01
0x0085dcc2: mov    rdx,QWORD PTR [rdx]
0x0085dcc5: mov    rcx,QWORD PTR [rip+0x1b81334]        # 0x1423df000
0x0085dccc: call   0x14135c060
0x0085dcd1: xor    r15d,r15d
0x0085dcd4: test   al,al
0x0085dcd6: cmove  r15d,ebx
0x0085dcda: mov    r8,QWORD PTR [rip+0x1b8131f]        # 0x1423df000
0x0085dce1: mov    rax,QWORD PTR [r8+0x408]
0x0085dce8: mov    rcx,QWORD PTR [rax+r13*8]
0x0085dcec: mov    rdx,QWORD PTR [rcx]
0x0085dcef: test   rdx,rdx
0x0085dcf2: je     0x14085dd39
0x0085dcf4: mov    r9,QWORD PTR [r8+0xb18]
0x0085dcfb: mov    rax,QWORD PTR [r8+0xb20]
0x0085dd02: sub    rax,r9
0x0085dd05: sar    rax,0x4
0x0085dd09: sub    eax,0x1
0x0085dd0c: js     0x14085dd39
0x0085dd0e: mov    r8d,DWORD PTR [rdx+0x1c]
0x0085dd12: movsxd rdx,eax
0x0085dd15: mov    rcx,rdx
0x0085dd18: shl    rcx,0x4
0x0085dd1c: nop    DWORD PTR [rax+0x0]
0x0085dd20: mov    rax,QWORD PTR [r9+rcx*1]
0x0085dd24: cmp    DWORD PTR [rax+0x14],r8d
0x0085dd28: je     0x14085dd36
0x0085dd2a: sub    rcx,0x10
0x0085dd2e: sub    rdx,0x1
0x0085dd32: jns    0x14085dd20
0x0085dd34: jmp    0x14085dd39
0x0085dd36: xor    r15b,r15b
0x0085dd39: lea    r8,[rip+0xffffffffff7a22c0]        # 0x140000000
0x0085dd40: cmp    edi,0x3
0x0085dd43: jne    0x14085df01
0x0085dd49: mov    rax,QWORD PTR [rip+0x1b812b0]        # 0x1423df000
0x0085dd50: mov    rax,QWORD PTR [rax+0x408]
0x0085dd57: mov    rdx,QWORD PTR [rax+r13*8]
0x0085dd5b: movsx  eax,WORD PTR [rdx+0x8]
0x0085dd5f: add    eax,0xfffffffe
0x0085dd62: cmp    eax,0x8
0x0085dd65: ja     0x14085dd79
0x0085dd67: cdqe
0x0085dd69: mov    ecx,DWORD PTR [r8+rax*4+0x85f6d0]
0x0085dd71: add    rcx,r8
0x0085dd74: jmp    rcx
0x0085dd76: xor    r15b,r15b
0x0085dd79: mov    rdx,QWORD PTR [rdx]
0x0085dd7c: mov    rcx,QWORD PTR [rip+0x1b8127d]        # 0x1423df000
0x0085dd83: call   0x14135c060
0x0085dd88: xor    r10d,r10d
0x0085dd8b: movzx  ecx,r15b
0x0085dd8f: test   al,al
0x0085dd91: cmove  r10d,ecx
0x0085dd95: mov    r8,QWORD PTR [rip+0x1b81264]        # 0x1423df000
0x0085dd9c: mov    rax,QWORD PTR [r8+0x408]
0x0085dda3: mov    rcx,QWORD PTR [rax+r13*8]
0x0085dda7: mov    r12,QWORD PTR [rcx]
0x0085ddaa: test   r12,r12
0x0085ddad: je     0x14085e5ef
0x0085ddb3: mov    r9,QWORD PTR [r8+0xb18]
0x0085ddba: mov    rax,QWORD PTR [r8+0xb20]
0x0085ddc1: sub    rax,r9
0x0085ddc4: sar    rax,0x4
0x0085ddc8: sub    eax,0x1
0x0085ddcb: js     0x14085ddf8
0x0085ddcd: mov    r8d,DWORD PTR [r12+0x1c]
0x0085ddd2: movsxd rdx,eax
0x0085ddd5: mov    rcx,rdx
0x0085ddd8: shl    rcx,0x4
0x0085dddc: nop    DWORD PTR [rax+0x0]
0x0085dde0: mov    rax,QWORD PTR [r9+rcx*1]
0x0085dde4: cmp    DWORD PTR [rax+0x14],r8d
0x0085dde8: je     0x14085def9
0x0085ddee: sub    rcx,0x10
0x0085ddf2: sub    rdx,0x1
0x0085ddf6: jns    0x14085dde0
0x0085ddf8: movzx  r15d,r10b
0x0085ddfc: mov    r13,QWORD PTR [rip+0x1b811fd]        # 0x1423df000
0x0085de03: movzx  edx,WORD PTR [r13+0xa4]
0x0085de0b: mov    rcx,r12
0x0085de0e: call   0x14135bdc0
0x0085de13: test   eax,eax
0x0085de15: jne    0x14085e5eb
0x0085de1b: mov    rax,QWORD PTR [r12]
0x0085de1f: mov    rcx,r12
0x0085de22: call   QWORD PTR [rax+0x1d8]
0x0085de28: movzx  r14d,ax
0x0085de2c: mov    rdx,QWORD PTR [r12]
0x0085de30: mov    rcx,r12
0x0085de33: call   QWORD PTR [rdx+0x5a0]
0x0085de39: movzx  esi,al
0x0085de3c: mov    rdx,QWORD PTR [r12]
0x0085de40: mov    rcx,r12
0x0085de43: call   QWORD PTR [rdx+0x198]
0x0085de49: mov    edi,eax
0x0085de4b: mov    rdx,QWORD PTR [r12]
0x0085de4f: mov    rcx,r12
0x0085de52: call   QWORD PTR [rdx+0x8]
0x0085de55: movzx  ebx,ax
0x0085de58: mov    rdx,QWORD PTR [r12]
0x0085de5c: mov    rcx,r12
0x0085de5f: call   QWORD PTR [rdx]
0x0085de61: mov    BYTE PTR [rsp+0x48],0x0
0x0085de66: lea    rcx,[rbp-0x29]
0x0085de6a: mov    QWORD PTR [rsp+0x40],rcx
0x0085de6f: lea    rcx,[rbp-0x25]
0x0085de73: mov    QWORD PTR [rsp+0x38],rcx
0x0085de78: lea    rcx,[rbp-0x41]
0x0085de7c: mov    QWORD PTR [rsp+0x30],rcx
0x0085de81: mov    BYTE PTR [rsp+0x28],r14b
0x0085de86: mov    BYTE PTR [rsp+0x20],sil
0x0085de8b: mov    r9d,edi
0x0085de8e: movzx  r8d,bx
0x0085de92: movzx  edx,ax
0x0085de95: mov    rcx,r13
0x0085de98: call   0x14138fd90
0x0085de9d: test   al,al
0x0085de9f: je     0x14085e5e0
0x0085dea5: movzx  ecx,WORD PTR [rbp-0x41]
0x0085dea9: lea    eax,[rcx-0x2]
0x0085deac: cmp    ax,0x3
0x0085deb0: jbe    0x14085debc
0x0085deb2: cmp    cx,0xa
0x0085deb6: jne    0x14085e5e0
0x0085debc: mov    edi,DWORD PTR [rbp-0x45]
0x0085debf: mov    rsi,QWORD PTR [rbp-0x31]
0x0085dec3: mov    r14,QWORD PTR [rbp-0x59]
0x0085dec7: mov    r12,QWORD PTR [rbp-0x39]
0x0085decb: mov    r13,QWORD PTR [rbp-0x51]
0x0085decf: xor    ebx,ebx
0x0085ded1: test   r15b,r15b
0x0085ded4: je     0x14085e5f3
0x0085deda: cmp    edi,0x8
0x0085dedd: ja     0x14085e5f3
0x0085dee3: movsxd rax,edi
0x0085dee6: lea    rdx,[rip+0xffffffffff7a2113]        # 0x140000000
0x0085deed: mov    ecx,DWORD PTR [rdx+rax*4+0x85f6f4]
0x0085def4: add    rcx,rdx
0x0085def7: jmp    rcx
0x0085def9: xor    r15b,r15b
0x0085defc: jmp    0x14085ddfc
0x0085df01: cmp    edi,0x4
0x0085df04: jne    0x14085dfd0
0x0085df0a: mov    r8,QWORD PTR [rip+0x1b810ef]        # 0x1423df000
0x0085df11: mov    rax,QWORD PTR [r8+0x408]
0x0085df18: mov    rdx,QWORD PTR [rax+r13*8]
0x0085df1c: mov    rdx,QWORD PTR [rdx]
0x0085df1f: mov    rcx,r8
0x0085df22: call   0x14135c060
0x0085df27: xor    ebx,ebx
0x0085df29: mov    r10d,ebx
0x0085df2c: movzx  ecx,r15b
0x0085df30: test   al,al
0x0085df32: cmove  r10d,ecx
0x0085df36: mov    r8,QWORD PTR [rip+0x1b810c3]        # 0x1423df000
0x0085df3d: mov    rax,QWORD PTR [r8+0x408]
0x0085df44: mov    r11,QWORD PTR [rax+r13*8]
0x0085df48: mov    rcx,QWORD PTR [r11]
0x0085df4b: movzx  r15d,r10b
0x0085df4f: test   rcx,rcx
0x0085df52: je     0x14085df99
0x0085df54: mov    r9,QWORD PTR [r8+0xb18]
0x0085df5b: mov    rax,QWORD PTR [r8+0xb20]
0x0085df62: sub    rax,r9
0x0085df65: sar    rax,0x4
0x0085df69: sub    eax,0x1
0x0085df6c: js     0x14085df99
0x0085df6e: mov    r8d,DWORD PTR [rcx+0x1c]
0x0085df72: movsxd rdx,eax
0x0085df75: mov    rcx,rdx
0x0085df78: shl    rcx,0x4
0x0085df7c: nop    DWORD PTR [rax+0x0]
0x0085df80: mov    rax,QWORD PTR [r9+rcx*1]
0x0085df84: cmp    DWORD PTR [rax+0x14],r8d
0x0085df88: je     0x14085df96
0x0085df8a: sub    rcx,0x10
0x0085df8e: sub    rdx,0x1
0x0085df92: jns    0x14085df80
0x0085df94: jmp    0x14085df99
0x0085df96: xor    r15b,r15b
0x0085df99: movsx  ecx,WORD PTR [r11+0x8]
0x0085df9e: sub    ecx,0x2
0x0085dfa1: je     0x14085ded1
0x0085dfa7: sub    ecx,0x1
0x0085dfaa: je     0x14085ded1
0x0085dfb0: sub    ecx,0x1
0x0085dfb3: je     0x14085ded1
0x0085dfb9: sub    ecx,0x1
0x0085dfbc: je     0x14085ded1
0x0085dfc2: cmp    ecx,0x5
0x0085dfc5: je     0x14085ded1
0x0085dfcb: jmp    0x14085e5f3
0x0085dfd0: cmp    edi,0x6
0x0085dfd3: jne    0x14085decf
0x0085dfd9: mov    rax,QWORD PTR [rip+0x1b81020]        # 0x1423df000
0x0085dfe0: mov    rax,QWORD PTR [rax+0x408]
0x0085dfe7: mov    rdx,QWORD PTR [rax+r13*8]
0x0085dfeb: movsx  eax,WORD PTR [rdx+0x8]
0x0085dfef: add    eax,0xfffffffe
0x0085dff2: cmp    eax,0x8
0x0085dff5: ja     0x14085e009
0x0085dff7: cdqe
0x0085dff9: mov    ecx,DWORD PTR [r8+rax*4+0x85f718]
0x0085e001: add    rcx,r8
0x0085e004: jmp    rcx
0x0085e006: xor    r15b,r15b
0x0085e009: mov    rdx,QWORD PTR [rdx]
0x0085e00c: mov    rcx,QWORD PTR [rip+0x1b80fed]        # 0x1423df000
0x0085e013: call   0x14135c060
0x0085e018: xor    ebx,ebx
0x0085e01a: mov    r10d,ebx
0x0085e01d: movzx  ecx,r15b
0x0085e021: test   al,al
0x0085e023: cmove  r10d,ecx
0x0085e027: mov    r8,QWORD PTR [rip+0x1b80fd2]        # 0x1423df000
0x0085e02e: mov    rax,QWORD PTR [r8+0x408]
0x0085e035: mov    rcx,QWORD PTR [rax+r13*8]
0x0085e039: mov    rdx,QWORD PTR [rcx]
0x0085e03c: movzx  r15d,r10b
0x0085e040: test   rdx,rdx
0x0085e043: je     0x14085ded1
0x0085e049: mov    r9,QWORD PTR [r8+0xb18]
0x0085e050: mov    rax,QWORD PTR [r8+0xb20]
0x0085e057: sub    rax,r9
0x0085e05a: sar    rax,0x4
0x0085e05e: sub    eax,0x1
0x0085e061: js     0x14085ded1
0x0085e067: mov    r8d,DWORD PTR [rdx+0x1c]
0x0085e06b: movsxd rdx,eax
0x0085e06e: mov    rcx,rdx
0x0085e071: shl    rcx,0x4
0x0085e075: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x0085e080: mov    rax,QWORD PTR [r9+rcx*1]
0x0085e084: cmp    DWORD PTR [rax+0x14],r8d
0x0085e088: je     0x14085e5f3
0x0085e08e: sub    rcx,0x10
0x0085e092: sub    rdx,0x1
0x0085e096: jns    0x14085e080
0x0085e098: jmp    0x14085ded1
0x0085e09d: mov    ecx,0x28
0x0085e0a2: call   0x141534600
0x0085e0a7: mov    rdx,rax
0x0085e0aa: mov    QWORD PTR [rbp-0x59],rax
0x0085e0ae: mov    DWORD PTR [rax+0x8],ebx
0x0085e0b1: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e0b8: lea    rax,[rip+0xe56b29]        # 0x1416b4be8
0x0085e0bf: mov    QWORD PTR [rdx],rax
0x0085e0c2: mov    QWORD PTR [rdx+0x10],rbx
0x0085e0c6: mov    QWORD PTR [rdx+0x18],rbx
0x0085e0ca: mov    DWORD PTR [rdx+0x20],ebx
0x0085e0cd: mov    rcx,QWORD PTR [rip+0x1b80f2c]        # 0x1423df000
0x0085e0d4: mov    rcx,QWORD PTR [rcx+0x408]
0x0085e0db: mov    rax,QWORD PTR [rcx+r13*8]
0x0085e0df: mov    rcx,QWORD PTR [rax]
0x0085e0e2: mov    QWORD PTR [rdx+0x10],rcx
0x0085e0e6: mov    rax,QWORD PTR [rip+0x1b80f13]        # 0x1423df000
0x0085e0ed: mov    rax,QWORD PTR [rax+0x408]
0x0085e0f4: mov    rcx,QWORD PTR [rax+r13*8]
0x0085e0f8: mov    QWORD PTR [rdx+0x18],rcx
0x0085e0fc: mov    DWORD PTR [rdx+0x8],ebx
0x0085e0ff: lea    rax,[r14+r14*2]
0x0085e103: mov    r15,QWORD PTR [rbp+0x67]
0x0085e107: lea    rcx,[r15+rax*8]
0x0085e10b: mov    QWORD PTR [rbp-0x59],rdx
0x0085e10f: mov    rax,QWORD PTR [rcx+0x8]
0x0085e113: cmp    rax,QWORD PTR [rcx+0x10]
0x0085e117: je     0x14085e126
0x0085e119: mov    QWORD PTR [rax],rdx
0x0085e11c: add    QWORD PTR [rcx+0x8],0x8
0x0085e121: jmp    0x14085e5f3
0x0085e126: lea    r8,[rbp-0x59]
0x0085e12a: mov    rdx,rax
0x0085e12d: call   0x1400bacc0
0x0085e132: jmp    0x14085e5f3
0x0085e137: mov    ecx,0x20
0x0085e13c: call   0x141534600
0x0085e141: mov    r8,rax
0x0085e144: mov    QWORD PTR [rbp-0x59],rax
0x0085e148: mov    DWORD PTR [rax+0x8],ebx
0x0085e14b: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e152: lea    rax,[rip+0xe5404f]        # 0x1416b21a8
0x0085e159: mov    QWORD PTR [r8],rax
0x0085e15c: mov    QWORD PTR [r8+0x10],rbx
0x0085e160: mov    QWORD PTR [r8+0x18],rbx
0x0085e164: mov    rcx,QWORD PTR [rip+0x1b80e95]        # 0x1423df000
0x0085e16b: mov    rcx,QWORD PTR [rcx+0x408]
0x0085e172: mov    rdx,QWORD PTR [rcx+r13*8]
0x0085e176: mov    rax,QWORD PTR [rdx]
0x0085e179: mov    QWORD PTR [r8+0x10],rax
0x0085e17d: mov    rax,QWORD PTR [rip+0x1b80e7c]        # 0x1423df000
0x0085e184: mov    rax,QWORD PTR [rax+0x408]
0x0085e18b: mov    rcx,QWORD PTR [rax+r13*8]
0x0085e18f: mov    QWORD PTR [r8+0x18],rcx
0x0085e193: mov    DWORD PTR [r8+0x8],ebx
0x0085e197: lea    rax,[r12+r12*2]
0x0085e19b: mov    r15,QWORD PTR [rbp+0x67]
0x0085e19f: lea    rcx,[r15+rax*8]
0x0085e1a3: mov    QWORD PTR [rbp-0x59],r8
0x0085e1a7: mov    rdx,QWORD PTR [rcx+0x8]
0x0085e1ab: cmp    rdx,QWORD PTR [rcx+0x10]
0x0085e1af: je     0x14085e1be
0x0085e1b1: mov    QWORD PTR [rdx],r8
0x0085e1b4: add    QWORD PTR [rcx+0x8],0x8
0x0085e1b9: jmp    0x14085e5f3
0x0085e1be: lea    r8,[rbp-0x59]
0x0085e1c2: call   0x1400bacc0
0x0085e1c7: jmp    0x14085e5f3
0x0085e1cc: mov    ecx,0x20
0x0085e1d1: call   0x141534600
0x0085e1d6: mov    r8,rax
0x0085e1d9: mov    QWORD PTR [rbp-0x59],rax
0x0085e1dd: mov    DWORD PTR [rax+0x8],ebx
0x0085e1e0: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e1e7: lea    rax,[rip+0xe5a79a]        # 0x1416b8988
0x0085e1ee: mov    QWORD PTR [r8],rax
0x0085e1f1: mov    QWORD PTR [r8+0x10],rbx
0x0085e1f5: mov    QWORD PTR [r8+0x18],rbx
0x0085e1f9: mov    rcx,QWORD PTR [rip+0x1b80e00]        # 0x1423df000
0x0085e200: mov    rcx,QWORD PTR [rcx+0x408]
0x0085e207: mov    rdx,QWORD PTR [rcx+r13*8]
0x0085e20b: mov    rax,QWORD PTR [rdx]
0x0085e20e: mov    QWORD PTR [r8+0x10],rax
0x0085e212: mov    rax,QWORD PTR [rip+0x1b80de7]        # 0x1423df000
0x0085e219: mov    rax,QWORD PTR [rax+0x408]
0x0085e220: mov    rcx,QWORD PTR [rax+r13*8]
0x0085e224: mov    QWORD PTR [r8+0x18],rcx
0x0085e228: mov    DWORD PTR [r8+0x8],ebx
0x0085e22c: lea    rax,[rsi+0x2]
0x0085e230: lea    rax,[rax+rax*2]
0x0085e234: mov    r15,QWORD PTR [rbp+0x67]
0x0085e238: lea    rcx,[r15+rax*8]
0x0085e23c: mov    QWORD PTR [rbp-0x59],r8
0x0085e240: mov    rdx,QWORD PTR [rcx+0x8]
0x0085e244: cmp    rdx,QWORD PTR [rcx+0x10]
0x0085e248: je     0x14085e1be
0x0085e24e: mov    QWORD PTR [rdx],r8
0x0085e251: add    QWORD PTR [rcx+0x8],0x8
0x0085e256: jmp    0x14085e5f3
0x0085e25b: mov    ecx,0x20
0x0085e260: call   0x141534600
0x0085e265: mov    r8,rax
0x0085e268: mov    QWORD PTR [rbp-0x59],rax
0x0085e26c: mov    DWORD PTR [rax+0x8],ebx
0x0085e26f: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e276: lea    rax,[rip+0xe54b63]        # 0x1416b2de0
0x0085e27d: jmp    0x14085e1ee
0x0085e282: mov    ecx,0x20
0x0085e287: call   0x141534600
0x0085e28c: mov    r8,rax
0x0085e28f: mov    QWORD PTR [rbp-0x59],rax
0x0085e293: mov    DWORD PTR [rax+0x8],ebx
0x0085e296: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e29d: lea    rax,[rip+0xe55884]        # 0x1416b3b28
0x0085e2a4: mov    QWORD PTR [r8],rax
0x0085e2a7: mov    QWORD PTR [r8+0x10],rbx
0x0085e2ab: mov    QWORD PTR [r8+0x18],rbx
0x0085e2af: mov    rcx,QWORD PTR [rip+0x1b80d4a]        # 0x1423df000
0x0085e2b6: mov    rdx,QWORD PTR [rcx+0x408]
0x0085e2bd: mov    rcx,QWORD PTR [rdx+r13*8]
0x0085e2c1: mov    rdx,QWORD PTR [rcx]
0x0085e2c4: mov    QWORD PTR [r8+0x10],rdx
0x0085e2c8: mov    rax,QWORD PTR [rip+0x1b80d31]        # 0x1423df000
0x0085e2cf: mov    rcx,QWORD PTR [rax+0x408]
0x0085e2d6: mov    rax,QWORD PTR [rcx+r13*8]
0x0085e2da: mov    QWORD PTR [r8+0x18],rax
0x0085e2de: jmp    0x14085e228
0x0085e2e3: xorps  xmm0,xmm0
0x0085e2e6: movdqu XMMWORD PTR [rbp-0x21],xmm0
0x0085e2eb: mov    QWORD PTR [rbp-0x11],rbx
0x0085e2ef: mov    rax,QWORD PTR [rip+0x1b80d0a]        # 0x1423df000
0x0085e2f6: mov    rcx,QWORD PTR [rax+0x408]
0x0085e2fd: mov    r8,QWORD PTR [rcx+r13*8]
0x0085e301: mov    r8,QWORD PTR [r8]
0x0085e304: lea    rdx,[rbp-0x21]
0x0085e308: mov    r15,QWORD PTR [rbp+0x67]
0x0085e30c: mov    rcx,r15
0x0085e30f: call   0x140896bf0
0x0085e314: mov    rax,QWORD PTR [rbp-0x19]
0x0085e318: sub    rax,QWORD PTR [rbp-0x21]
0x0085e31c: sar    rax,0x3
0x0085e320: test   rax,rax
0x0085e323: je     0x14085e3ea
0x0085e329: mov    ecx,0x38
0x0085e32e: call   0x141534600
0x0085e333: mov    rbx,rax
0x0085e336: mov    QWORD PTR [rbp-0x59],rax
0x0085e33a: xor    r8d,r8d
0x0085e33d: mov    DWORD PTR [rax+0x8],r8d
0x0085e341: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e348: lea    rax,[rip+0xe57111]        # 0x1416b5460
0x0085e34f: mov    QWORD PTR [rbx],rax
0x0085e352: lea    r9,[rbx+0x20]
0x0085e356: mov    QWORD PTR [r9],r8
0x0085e359: mov    QWORD PTR [r9+0x8],r8
0x0085e35d: mov    QWORD PTR [r9+0x10],r8
0x0085e361: mov    QWORD PTR [rbx+0x10],r8
0x0085e365: mov    QWORD PTR [rbx+0x18],r8
0x0085e369: mov    rax,QWORD PTR [rip+0x1b80c90]        # 0x1423df000
0x0085e370: mov    rcx,QWORD PTR [rax+0x408]
0x0085e377: mov    rax,QWORD PTR [rcx+r13*8]
0x0085e37b: mov    rcx,QWORD PTR [rax]
0x0085e37e: mov    QWORD PTR [rbx+0x10],rcx
0x0085e382: mov    rax,QWORD PTR [rip+0x1b80c77]        # 0x1423df000
0x0085e389: mov    rax,QWORD PTR [rax+0x408]
0x0085e390: mov    rdx,QWORD PTR [rax+r13*8]
0x0085e394: mov    QWORD PTR [rbx+0x18],rdx
0x0085e398: mov    DWORD PTR [rbx+0x8],r8d
0x0085e39c: lea    rax,[rbp-0x21]
0x0085e3a0: cmp    r9,rax
0x0085e3a3: je     0x14085e3bc
0x0085e3a5: mov    r8,QWORD PTR [rbp-0x19]
0x0085e3a9: mov    rdx,QWORD PTR [rbp-0x21]
0x0085e3ad: sub    r8,rdx
0x0085e3b0: sar    r8,0x3
0x0085e3b4: mov    rcx,r9
0x0085e3b7: call   0x1400e1640
0x0085e3bc: lea    rax,[rsi+0x2]
0x0085e3c0: lea    rax,[rax+rax*2]
0x0085e3c4: lea    rcx,[r15+rax*8]
0x0085e3c8: mov    QWORD PTR [rbp-0x59],rbx
0x0085e3cc: mov    rdx,QWORD PTR [rcx+0x8]
0x0085e3d0: cmp    rdx,QWORD PTR [rcx+0x10]
0x0085e3d4: je     0x14085e3e0
0x0085e3d6: mov    QWORD PTR [rdx],rbx
0x0085e3d9: add    QWORD PTR [rcx+0x8],0x8
0x0085e3de: jmp    0x14085e3ea
0x0085e3e0: lea    r8,[rbp-0x59]
0x0085e3e4: call   0x1400bacc0
0x0085e3e9: nop
0x0085e3ea: lea    rcx,[rbp-0x21]
0x0085e3ee: call   0x140066b00
0x0085e3f3: jmp    0x14085e5f3
0x0085e3f8: mov    ecx,0x20
0x0085e3fd: call   0x141534600
0x0085e402: mov    r8,rax
0x0085e405: mov    QWORD PTR [rbp-0x59],rax
0x0085e409: mov    DWORD PTR [rax+0x8],ebx
0x0085e40c: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e413: lea    rax,[rip+0xe599de]        # 0x1416b7df8
0x0085e41a: jmp    0x14085e1ee
0x0085e41f: xorps  xmm0,xmm0
0x0085e422: movdqu XMMWORD PTR [rbp-0x9],xmm0
0x0085e427: mov    QWORD PTR [rbp+0x7],rbx
0x0085e42b: mov    rax,QWORD PTR [rip+0x1b80bce]        # 0x1423df000
0x0085e432: mov    rax,QWORD PTR [rax+0x408]
0x0085e439: mov    r8,QWORD PTR [rax+r13*8]
0x0085e43d: mov    eax,0xffff8ad0
0x0085e442: mov    WORD PTR [rsp+0x40],ax
0x0085e447: mov    WORD PTR [rsp+0x38],ax
0x0085e44c: mov    WORD PTR [rsp+0x30],ax
0x0085e451: mov    BYTE PTR [rsp+0x28],0x0
0x0085e456: mov    DWORD PTR [rsp+0x20],ebx
0x0085e45a: mov    r9,r8
0x0085e45d: mov    r8,QWORD PTR [r8]
0x0085e460: lea    rdx,[rbp-0x9]
0x0085e464: mov    r15,QWORD PTR [rbp+0x67]
0x0085e468: mov    rcx,r15
0x0085e46b: call   0x1408950a0
0x0085e470: mov    rax,QWORD PTR [rbp-0x1]
0x0085e474: sub    rax,QWORD PTR [rbp-0x9]
0x0085e478: sar    rax,0x3
0x0085e47c: test   rax,rax
0x0085e47f: je     0x14085e546
0x0085e485: mov    ecx,0x38
0x0085e48a: call   0x141534600
0x0085e48f: mov    rbx,rax
0x0085e492: mov    QWORD PTR [rbp-0x59],rax
0x0085e496: xor    r8d,r8d
0x0085e499: mov    DWORD PTR [rax+0x8],r8d
0x0085e49d: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e4a4: lea    rax,[rip+0xe58dbd]        # 0x1416b7268
0x0085e4ab: mov    QWORD PTR [rbx],rax
0x0085e4ae: lea    r9,[rbx+0x20]
0x0085e4b2: mov    QWORD PTR [r9],r8
0x0085e4b5: mov    QWORD PTR [r9+0x8],r8
0x0085e4b9: mov    QWORD PTR [r9+0x10],r8
0x0085e4bd: mov    QWORD PTR [rbx+0x10],r8
0x0085e4c1: mov    QWORD PTR [rbx+0x18],r8
0x0085e4c5: mov    rax,QWORD PTR [rip+0x1b80b34]        # 0x1423df000
0x0085e4cc: mov    rax,QWORD PTR [rax+0x408]
0x0085e4d3: mov    rcx,QWORD PTR [rax+r13*8]
0x0085e4d7: mov    rax,QWORD PTR [rcx]
0x0085e4da: mov    QWORD PTR [rbx+0x10],rax
0x0085e4de: mov    rax,QWORD PTR [rip+0x1b80b1b]        # 0x1423df000
0x0085e4e5: mov    rax,QWORD PTR [rax+0x408]
0x0085e4ec: mov    rdx,QWORD PTR [rax+r13*8]
0x0085e4f0: mov    QWORD PTR [rbx+0x18],rdx
0x0085e4f4: mov    DWORD PTR [rbx+0x8],r8d
0x0085e4f8: lea    rax,[rbp-0x9]
0x0085e4fc: cmp    r9,rax
0x0085e4ff: je     0x14085e518
0x0085e501: mov    r8,QWORD PTR [rbp-0x1]
0x0085e505: mov    rdx,QWORD PTR [rbp-0x9]
0x0085e509: sub    r8,rdx
0x0085e50c: sar    r8,0x3
0x0085e510: mov    rcx,r9
0x0085e513: call   0x1400e1640
0x0085e518: lea    rax,[rsi+0x2]
0x0085e51c: lea    rax,[rax+rax*2]
0x0085e520: lea    rcx,[r15+rax*8]
0x0085e524: mov    QWORD PTR [rbp-0x59],rbx
0x0085e528: mov    rdx,QWORD PTR [rcx+0x8]
0x0085e52c: cmp    rdx,QWORD PTR [rcx+0x10]
0x0085e530: je     0x14085e53c
0x0085e532: mov    QWORD PTR [rdx],rbx
0x0085e535: add    QWORD PTR [rcx+0x8],0x8
0x0085e53a: jmp    0x14085e546
0x0085e53c: lea    r8,[rbp-0x59]
0x0085e540: call   0x1400bacc0
0x0085e545: nop
0x0085e546: lea    rcx,[rbp-0x9]
0x0085e54a: call   0x140066b00
0x0085e54f: jmp    0x14085e5f3
0x0085e554: mov    ecx,0x20
0x0085e559: call   0x141534600
0x0085e55e: mov    r8,rax
0x0085e561: mov    QWORD PTR [rbp-0x59],rax
0x0085e565: mov    DWORD PTR [rax+0x8],ebx
0x0085e568: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e56f: lea    rax,[rip+0xe56b72]        # 0x1416b50e8
0x0085e576: mov    QWORD PTR [r8],rax
0x0085e579: mov    QWORD PTR [r8+0x10],rbx
0x0085e57d: mov    QWORD PTR [r8+0x18],rbx
0x0085e581: mov    rcx,QWORD PTR [rip+0x1b80a78]        # 0x1423df000
0x0085e588: mov    rdx,QWORD PTR [rcx+0x408]
0x0085e58f: mov    rcx,QWORD PTR [rdx+r13*8]
0x0085e593: mov    rdx,QWORD PTR [rcx]
0x0085e596: mov    QWORD PTR [r8+0x10],rdx
0x0085e59a: mov    rax,QWORD PTR [rip+0x1b80a5f]        # 0x1423df000
0x0085e5a1: mov    rcx,QWORD PTR [rax+0x408]
0x0085e5a8: mov    rax,QWORD PTR [rcx+r13*8]
0x0085e5ac: mov    QWORD PTR [r8+0x18],rax
0x0085e5b0: mov    DWORD PTR [r8+0x8],ebx
0x0085e5b4: lea    rax,[rsi+0x2]
0x0085e5b8: lea    rax,[rax+rax*2]
0x0085e5bc: mov    r15,QWORD PTR [rbp+0x67]
0x0085e5c0: lea    rcx,[r15+rax*8]
0x0085e5c4: mov    QWORD PTR [rbp-0x59],r8
0x0085e5c8: mov    rdx,QWORD PTR [rcx+0x8]
0x0085e5cc: cmp    rdx,QWORD PTR [rcx+0x10]
0x0085e5d0: je     0x14085e1be
0x0085e5d6: mov    QWORD PTR [rdx],r8
0x0085e5d9: add    QWORD PTR [rcx+0x8],0x8
0x0085e5de: jmp    0x14085e5f3
0x0085e5e0: mov    edi,DWORD PTR [rbp-0x45]
0x0085e5e3: mov    r14,QWORD PTR [rbp-0x59]
0x0085e5e7: mov    rsi,QWORD PTR [rbp-0x31]
0x0085e5eb: mov    r13,QWORD PTR [rbp-0x51]
0x0085e5ef: mov    r12,QWORD PTR [rbp-0x39]
0x0085e5f3: mov    rax,QWORD PTR [rip+0x1b80a06]        # 0x1423df000
0x0085e5fa: mov    rax,QWORD PTR [rax+0x408]
0x0085e601: mov    rdx,QWORD PTR [rax+r13*8]
0x0085e605: mov    r15d,0xffff8ad0
0x0085e60b: mov    WORD PTR [rsp+0x38],r15w
0x0085e611: mov    WORD PTR [rsp+0x30],r15w
0x0085e617: mov    WORD PTR [rsp+0x28],r15w
0x0085e61d: mov    BYTE PTR [rsp+0x20],0x0
0x0085e622: mov    r9d,edi
0x0085e625: mov    r8d,0x1
0x0085e62b: mov    rdx,QWORD PTR [rdx]
0x0085e62e: mov    rcx,QWORD PTR [rbp+0x67]
0x0085e632: call   0x14085f740
0x0085e637: inc    edi
0x0085e639: mov    DWORD PTR [rbp-0x45],edi
0x0085e63c: inc    rsi
0x0085e63f: mov    QWORD PTR [rbp-0x31],rsi
0x0085e643: inc    r14
0x0085e646: mov    QWORD PTR [rbp-0x59],r14
0x0085e64a: inc    r12
0x0085e64d: mov    QWORD PTR [rbp-0x39],r12
0x0085e651: cmp    edi,0x9
0x0085e654: lea    r8,[rip+0xffffffffff7a19a5]        # 0x140000000
0x0085e65b: mov    eax,0x124
0x0085e660: jl     0x14085dc70
0x0085e666: mov    edx,DWORD PTR [rbp-0x49]
0x0085e669: inc    edx
0x0085e66b: mov    DWORD PTR [rbp-0x49],edx
0x0085e66e: inc    r13
0x0085e671: mov    QWORD PTR [rbp-0x51],r13
0x0085e675: mov    rax,QWORD PTR [rip+0x1b80984]        # 0x1423df000
0x0085e67c: mov    rcx,QWORD PTR [rax+0x410]
0x0085e683: sub    rcx,QWORD PTR [rax+0x408]
0x0085e68a: sar    rcx,0x3
0x0085e68e: movsxd rax,edx
0x0085e691: cmp    rax,rcx
0x0085e694: mov    r9d,0x0
0x0085e69a: lea    r8,[rip+0xffffffffff7a195f]        # 0x140000000
0x0085e6a1: mov    eax,0x124
0x0085e6a6: jb     0x14085dc50
0x0085e6ac: movzx  esi,WORD PTR [rbp+0x6f]
0x0085e6b0: mov    r12,QWORD PTR [rbp+0x67]
0x0085e6b4: mov    edi,r9d
0x0085e6b7: mov    rax,QWORD PTR [rip+0x1b80942]        # 0x1423df000
0x0085e6be: mov    rcx,QWORD PTR [rax+0x6d8]
0x0085e6c5: sub    rcx,QWORD PTR [rax+0x6d0]
0x0085e6cc: sar    rcx,0x3
0x0085e6d0: test   rcx,rcx
0x0085e6d3: je     0x14085e78c
0x0085e6d9: mov    rsi,r9
0x0085e6dc: lea    r14,[rip+0xe59bb5]        # 0x1416b8298
0x0085e6e3: mov    ecx,0x20
0x0085e6e8: call   0x141534600
0x0085e6ed: mov    rdx,rax
0x0085e6f0: mov    QWORD PTR [rbp-0x51],rax
0x0085e6f4: xor    r9d,r9d
0x0085e6f7: mov    DWORD PTR [rax+0x8],r9d
0x0085e6fb: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085e702: mov    QWORD PTR [rax],r14
0x0085e705: mov    QWORD PTR [rax+0x10],r9
0x0085e709: mov    QWORD PTR [rax+0x18],r9
0x0085e70d: mov    rcx,QWORD PTR [rip+0x1b808ec]        # 0x1423df000
0x0085e714: mov    QWORD PTR [rax+0x10],rcx
0x0085e718: mov    rcx,QWORD PTR [rip+0x1b808e1]        # 0x1423df000
0x0085e71f: mov    rcx,QWORD PTR [rcx+0x6d0]
0x0085e726: mov    rax,QWORD PTR [rsi+rcx*1]
0x0085e72a: mov    QWORD PTR [rdx+0x18],rax
0x0085e72e: mov    QWORD PTR [rbp-0x51],rdx
0x0085e732: mov    rax,QWORD PTR [r12+0x38]
0x0085e737: cmp    rax,QWORD PTR [r12+0x40]
0x0085e73c: je     0x14085e749
0x0085e73e: mov    QWORD PTR [rax],rdx
0x0085e741: add    QWORD PTR [r12+0x38],0x8
0x0085e747: jmp    0x14085e75d
0x0085e749: lea    r8,[rbp-0x51]
0x0085e74d: mov    rdx,rax
0x0085e750: lea    rcx,[r12+0x30]
0x0085e755: call   0x1400bacc0
0x0085e75a: xor    r9d,r9d
0x0085e75d: inc    edi
0x0085e75f: add    rsi,0x8
0x0085e763: mov    rax,QWORD PTR [rip+0x1b80896]        # 0x1423df000
0x0085e76a: mov    rcx,QWORD PTR [rax+0x6d8]
0x0085e771: sub    rcx,QWORD PTR [rax+0x6d0]
0x0085e778: sar    rcx,0x3
0x0085e77c: movsxd rax,edi
0x0085e77f: cmp    rax,rcx
0x0085e782: jb     0x14085e6e3
0x0085e788: movzx  esi,WORD PTR [rbp+0x6f]
0x0085e78c: mov    r15d,r9d
0x0085e78f: mov    DWORD PTR [rbp-0x49],r9d
0x0085e793: mov    rax,QWORD PTR [rip+0x1b8a1c6]        # 0x1423e8960
0x0085e79a: sub    rax,QWORD PTR [rip+0x1b8a1b7]        # 0x1423e8958
0x0085e7a1: sar    rax,0x3
0x0085e7a5: test   rax,rax
0x0085e7a8: je     0x14085ea09
0x0085e7ae: mov    r14,r9
0x0085e7b1: lea    r13,[rip+0xe55120]        # 0x1416b38d8
0x0085e7b8: nop    DWORD PTR [rax+rax*1+0x0]
0x0085e7c0: mov    rbx,QWORD PTR [rip+0x1b8a191]        # 0x1423e8958
0x0085e7c7: mov    rcx,QWORD PTR [rbx+r14*1]
0x0085e7cb: mov    rax,QWORD PTR [rcx]
0x0085e7ce: call   QWORD PTR [rax+0x120]
0x0085e7d4: mov    rcx,QWORD PTR [rbx+r14*1]
0x0085e7d8: movsx  edx,WORD PTR [rcx+0x120]
0x0085e7df: cmp    edx,eax
0x0085e7e1: jl     0x14085e9d9
0x0085e7e7: mov    rax,QWORD PTR [rip+0x1b8a16a]        # 0x1423e8958
0x0085e7ee: mov    rdx,QWORD PTR [r14+rax*1]
0x0085e7f2: movsx  eax,WORD PTR [rbp+0x77]
0x0085e7f6: mov    ecx,DWORD PTR [rdx+0x10]
0x0085e7f9: sub    ecx,eax
0x0085e7fb: mov    eax,ecx
0x0085e7fd: neg    eax
0x0085e7ff: cmovs  eax,ecx
0x0085e802: cmp    eax,0x1
0x0085e805: jg     0x14085e9d9
0x0085e80b: movsx  eax,WORD PTR [rbp+0x7f]
0x0085e80f: mov    ecx,DWORD PTR [rdx+0x1c]
0x0085e812: sub    ecx,eax
0x0085e814: mov    eax,ecx
0x0085e816: neg    eax
0x0085e818: cmovs  eax,ecx
0x0085e81b: cmp    eax,0x1
0x0085e81e: jg     0x14085e9d9
0x0085e824: mov    ecx,DWORD PTR [rdx+0x20]
0x0085e827: movsx  esi,WORD PTR [rbp+0x6f]
0x0085e82b: cmp    ecx,esi
0x0085e82d: jne    0x14085e9dd
0x0085e833: movsx  eax,WORD PTR [rdx+0x14c]
0x0085e83a: cmp    eax,ecx
0x0085e83c: jne    0x14085e9dd
0x0085e842: mov    rbx,QWORD PTR [rdx+0x130]
0x0085e849: sub    rbx,QWORD PTR [rdx+0x128]
0x0085e850: sar    rbx,0x3
0x0085e854: sub    ebx,0x1
0x0085e857: movsxd rdi,ebx
0x0085e85a: js     0x14085e9dd
0x0085e860: mov    rax,QWORD PTR [rip+0x1b8a0f1]        # 0x1423e8958
0x0085e867: mov    rax,QWORD PTR [r14+rax*1]
0x0085e86b: mov    rax,QWORD PTR [rax+0x128]
0x0085e872: mov    rcx,QWORD PTR [rax+rdi*8]
0x0085e876: mov    rcx,QWORD PTR [rcx]
0x0085e879: mov    rax,QWORD PTR [rcx]
0x0085e87c: call   QWORD PTR [rax]
0x0085e87e: cmp    ax,0x12
0x0085e882: je     0x14085e891
0x0085e884: dec    ebx
0x0085e886: sub    rdi,0x1
0x0085e88a: jns    0x14085e860
0x0085e88c: jmp    0x14085e9d9
0x0085e891: mov    rax,QWORD PTR [rip+0x1b8a0c0]        # 0x1423e8958
0x0085e898: mov    rax,QWORD PTR [r14+rax*1]
0x0085e89c: movsxd rcx,ebx
0x0085e89f: mov    rax,QWORD PTR [rax+0x128]
0x0085e8a6: mov    rcx,QWORD PTR [rax+rcx*8]
0x0085e8aa: mov    rdi,QWORD PTR [rcx]
0x0085e8ad: test   rdi,rdi
0x0085e8b0: je     0x14085e9d9
0x0085e8b6: test   BYTE PTR [rdi+0x10],0x40
0x0085e8ba: je     0x14085e9d9
0x0085e8c0: mov    rax,QWORD PTR [rdi+0x40]
0x0085e8c4: sub    rax,QWORD PTR [rdi+0x38]
0x0085e8c8: sar    rax,0x3
0x0085e8cc: sub    eax,0x1
0x0085e8cf: movsxd rbx,eax
0x0085e8d2: js     0x14085e9d9
0x0085e8d8: nop    DWORD PTR [rax+rax*1+0x0]
0x0085e8e0: mov    rax,QWORD PTR [rdi+0x38]
0x0085e8e4: mov    rcx,QWORD PTR [rax+rbx*8]
0x0085e8e8: mov    rax,QWORD PTR [rcx]
0x0085e8eb: call   QWORD PTR [rax+0x10]
0x0085e8ee: cmp    eax,0xa
0x0085e8f1: jne    0x14085e9cb
0x0085e8f7: mov    rax,QWORD PTR [rdi+0x38]
0x0085e8fb: mov    rcx,QWORD PTR [rax+rbx*8]
0x0085e8ff: mov    rax,QWORD PTR [rcx]
0x0085e902: call   QWORD PTR [rax+0x18]
0x0085e905: mov    rsi,rax
0x0085e908: test   rax,rax
0x0085e90b: je     0x14085e9cb
0x0085e911: mov    ecx,0x30
0x0085e916: call   0x141534600
0x0085e91b: mov    rdx,rax
0x0085e91e: mov    QWORD PTR [rbp-0x51],rax
0x0085e922: xor    eax,eax
0x0085e924: mov    DWORD PTR [rdx+0x8],eax
0x0085e927: mov    DWORD PTR [rdx+0xc],0xffffffff
0x0085e92e: mov    DWORD PTR [rdx+0x10],0x8ad08ad0
0x0085e935: mov    DWORD PTR [rdx+0x14],0x8ad08ad0
0x0085e93c: mov    DWORD PTR [rdx+0x18],0x8ad08ad0
0x0085e943: mov    QWORD PTR [rdx],r13
0x0085e946: mov    QWORD PTR [rdx+0x20],rdi
0x0085e94a: mov    QWORD PTR [rdx+0x28],rsi
0x0085e94e: mov    rax,QWORD PTR [rip+0x1b8a003]        # 0x1423e8958
0x0085e955: mov    rcx,QWORD PTR [r14+rax*1]
0x0085e959: movzx  eax,WORD PTR [rcx+0x10]
0x0085e95d: mov    WORD PTR [rdx+0x10],ax
0x0085e961: mov    rax,QWORD PTR [rip+0x1b89ff0]        # 0x1423e8958
0x0085e968: mov    rcx,QWORD PTR [r14+rax*1]
0x0085e96c: movzx  eax,WORD PTR [rcx+0x1c]
0x0085e970: mov    WORD PTR [rdx+0x12],ax
0x0085e974: mov    rax,QWORD PTR [rip+0x1b89fdd]        # 0x1423e8958
0x0085e97b: mov    rcx,QWORD PTR [r14+rax*1]
0x0085e97f: movzx  eax,WORD PTR [rcx+0x20]
0x0085e983: mov    WORD PTR [rdx+0x14],ax
0x0085e987: movzx  eax,WORD PTR [rbp+0x77]
0x0085e98b: mov    WORD PTR [rdx+0x16],ax
0x0085e98f: movzx  eax,WORD PTR [rbp+0x7f]
0x0085e993: mov    WORD PTR [rdx+0x18],ax
0x0085e997: movzx  eax,WORD PTR [rbp+0x6f]
0x0085e99b: mov    WORD PTR [rdx+0x1a],ax
0x0085e99f: lea    rcx,[r12+0xc0]
0x0085e9a7: mov    QWORD PTR [rbp-0x51],rdx
0x0085e9ab: mov    rax,QWORD PTR [rcx+0x8]
0x0085e9af: cmp    rax,QWORD PTR [rcx+0x10]
0x0085e9b3: je     0x14085e9bf
0x0085e9b5: mov    QWORD PTR [rax],rdx
0x0085e9b8: add    QWORD PTR [rcx+0x8],0x8
0x0085e9bd: jmp    0x14085e9cb
0x0085e9bf: lea    r8,[rbp-0x51]
0x0085e9c3: mov    rdx,rax
0x0085e9c6: call   0x1400bacc0
0x0085e9cb: sub    rbx,0x1
0x0085e9cf: jns    0x14085e8e0
0x0085e9d5: mov    r15d,DWORD PTR [rbp-0x49]
0x0085e9d9: movzx  esi,WORD PTR [rbp+0x6f]
0x0085e9dd: inc    r15d
0x0085e9e0: mov    DWORD PTR [rbp-0x49],r15d
0x0085e9e4: add    r14,0x8
0x0085e9e8: mov    rcx,QWORD PTR [rip+0x1b89f71]        # 0x1423e8960
0x0085e9ef: sub    rcx,QWORD PTR [rip+0x1b89f62]        # 0x1423e8958
0x0085e9f6: sar    rcx,0x3
0x0085e9fa: movsxd rax,r15d
0x0085e9fd: cmp    rax,rcx
0x0085ea00: jb     0x14085e7c0
0x0085ea06: xor    r9d,r9d
0x0085ea09: movsx  eax,WORD PTR [rbp+0x77]
0x0085ea0d: lea    r15d,[rax-0x1]
0x0085ea11: movsx  r13d,r15w
0x0085ea15: inc    eax
0x0085ea17: cmp    r13d,eax
0x0085ea1a: jg     0x14085f1ed
0x0085ea20: lea    rdi,[rip+0xe55e49]        # 0x1416b4870
0x0085ea27: nop    WORD PTR [rax+rax*1+0x0]
0x0085ea30: movsx  eax,WORD PTR [rbp+0x7f]
0x0085ea34: lea    r14d,[rax-0x1]
0x0085ea38: movsx  ebx,r14w
0x0085ea3c: inc    eax
0x0085ea3e: cmp    ebx,eax
0x0085ea40: jg     0x14085f1d6
0x0085ea46: test   r15w,r15w
0x0085ea4a: js     0x14085eaf6
0x0085ea50: cmp    r13d,DWORD PTR [rip+0x1c83575]        # 0x1424e1fcc
0x0085ea57: jge    0x14085eaf6
0x0085ea5d: test   r14w,r14w
0x0085ea61: js     0x14085eaf6
0x0085ea67: cmp    ebx,DWORD PTR [rip+0x1c83563]        # 0x1424e1fd0
0x0085ea6d: jge    0x14085eaf6
0x0085ea73: test   si,si
0x0085ea76: js     0x14085eaf6
0x0085ea78: movsx  eax,si
0x0085ea7b: cmp    eax,DWORD PTR [rip+0x1c83553]        # 0x1424e1fd4
0x0085ea81: jge    0x14085eaf6
0x0085ea83: movzx  eax,r15w
0x0085ea87: sar    ax,0x4
0x0085ea8b: movzx  edx,r14w
0x0085ea8f: sar    dx,0x4
0x0085ea93: mov    rcx,QWORD PTR [rip+0x1c834fe]        # 0x1424e1f98
0x0085ea9a: test   rcx,rcx
0x0085ea9d: je     0x14085eaf6
0x0085ea9f: movsx  rax,ax
0x0085eaa3: movsx  rdx,dx
0x0085eaa7: mov    rax,QWORD PTR [rcx+rax*8]
0x0085eaab: movsx  rcx,si
0x0085eaaf: mov    rax,QWORD PTR [rax+rdx*8]
0x0085eab3: mov    rdx,QWORD PTR [rax+rcx*8]
0x0085eab7: test   rdx,rdx
0x0085eaba: je     0x14085eaf6
0x0085eabc: mov    eax,r13d
0x0085eabf: and    eax,0x8000000f
0x0085eac4: jge    0x14085eacd
0x0085eac6: dec    eax
0x0085eac8: or     eax,0xfffffff0
0x0085eacb: inc    eax
0x0085eacd: movsxd rcx,eax
0x0085ead0: add    rcx,0x5
0x0085ead4: shl    rcx,0x4
0x0085ead8: mov    eax,ebx
0x0085eada: and    eax,0x8000000f
0x0085eadf: jge    0x14085eae8
0x0085eae1: dec    eax
0x0085eae3: or     eax,0xfffffff0
0x0085eae6: inc    eax
0x0085eae8: cdqe
0x0085eaea: add    rcx,rax
0x0085eaed: movzx  eax,WORD PTR [rdx+rcx*2]
0x0085eaf1: mov    DWORD PTR [rbp-0x49],eax
0x0085eaf4: jmp    0x14085eafa
0x0085eaf6: mov    DWORD PTR [rbp-0x49],r9d
0x0085eafa: cmp    r15w,WORD PTR [rbp+0x77]
0x0085eaff: jne    0x14085ebdd
0x0085eb05: cmp    r14w,WORD PTR [rbp+0x7f]
0x0085eb0a: jne    0x14085ebdd
0x0085eb10: movzx  r9d,si
0x0085eb14: movzx  r8d,r14w
0x0085eb18: movzx  edx,r15w
0x0085eb1c: lea    rcx,[rip+0x1b6c8bd]        # 0x1423cb3e0
0x0085eb23: call   0x140247d10
0x0085eb28: cmp    al,0x1
0x0085eb2a: jle    0x14085ebdd
0x0085eb30: mov    ecx,0x30
0x0085eb35: call   0x141534600
0x0085eb3a: mov    rcx,rax
0x0085eb3d: mov    QWORD PTR [rbp-0x51],rax
0x0085eb41: mov    DWORD PTR [rax+0x8],0x0
0x0085eb48: mov    edx,0xffffffff
0x0085eb4d: mov    DWORD PTR [rax+0xc],edx
0x0085eb50: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x0085eb57: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0085eb5e: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x0085eb65: mov    QWORD PTR [rax],rdi
0x0085eb68: mov    DWORD PTR [rax+0x24],edx
0x0085eb6b: mov    edx,0x1
0x0085eb70: mov    WORD PTR [rax+0x20],0x6
0x0085eb76: mov    WORD PTR [rax+0x28],dx
0x0085eb7a: mov    WORD PTR [rax+0x10],r15w
0x0085eb7f: mov    WORD PTR [rax+0x12],r14w
0x0085eb84: movzx  eax,WORD PTR [rbp+0x6f]
0x0085eb88: mov    WORD PTR [rcx+0x14],ax
0x0085eb8c: movzx  eax,WORD PTR [rbp+0x77]
0x0085eb90: mov    WORD PTR [rcx+0x16],ax
0x0085eb94: movzx  eax,WORD PTR [rbp+0x7f]
0x0085eb98: mov    WORD PTR [rcx+0x18],ax
0x0085eb9c: movzx  eax,WORD PTR [rbp+0x6f]
0x0085eba0: mov    WORD PTR [rcx+0x1a],ax
0x0085eba4: mov    QWORD PTR [rbp-0x51],rcx
0x0085eba8: mov    rdx,QWORD PTR [r12+0xc8]
0x0085ebb0: cmp    rdx,QWORD PTR [r12+0xd0]
0x0085ebb8: je     0x14085ebc8
0x0085ebba: mov    QWORD PTR [rdx],rcx
0x0085ebbd: add    QWORD PTR [r12+0xc8],0x8
0x0085ebc6: jmp    0x14085ebd9
0x0085ebc8: lea    r8,[rbp-0x51]
0x0085ebcc: lea    rcx,[r12+0xc0]
0x0085ebd4: call   0x1400bacc0
0x0085ebd9: movzx  esi,WORD PTR [rbp+0x6f]
0x0085ebdd: movzx  r9d,si
0x0085ebe1: movzx  r8d,r14w
0x0085ebe5: movzx  edx,r15w
0x0085ebe9: lea    rcx,[rip+0x1b6c7f0]        # 0x1423cb3e0
0x0085ebf0: call   0x140247d10
0x0085ebf5: test   al,al
0x0085ebf7: jne    0x14085f1bd
0x0085ebfd: movzx  r8d,r14w
0x0085ec01: movzx  edx,r15w
0x0085ec05: lea    rcx,[rip+0x1b6c7d4]        # 0x1423cb3e0
0x0085ec0c: call   0x1402c1650
0x0085ec11: test   al,al
0x0085ec13: jne    0x14085f1bd
0x0085ec19: test   r15w,r15w
0x0085ec1d: js     0x14085eedd
0x0085ec23: cmp    r13d,DWORD PTR [rip+0x1c833a2]        # 0x1424e1fcc
0x0085ec2a: jge    0x14085eedd
0x0085ec30: test   r14w,r14w
0x0085ec34: js     0x14085eedd
0x0085ec3a: cmp    ebx,DWORD PTR [rip+0x1c83390]        # 0x1424e1fd0
0x0085ec40: jge    0x14085eedd
0x0085ec46: test   si,si
0x0085ec49: js     0x14085eedd
0x0085ec4f: movsx  edi,si
0x0085ec52: cmp    edi,DWORD PTR [rip+0x1c8337c]        # 0x1424e1fd4
0x0085ec58: jge    0x14085eedd
0x0085ec5e: movzx  r8d,r14w
0x0085ec62: movzx  edx,r15w
0x0085ec66: lea    rcx,[rip+0x1b6c773]        # 0x1423cb3e0
0x0085ec6d: call   0x140067f10
0x0085ec72: movzx  r12d,ax
0x0085ec76: movzx  r8d,r14w
0x0085ec7a: movzx  edx,r15w
0x0085ec7e: lea    rcx,[rip+0x1b6c75b]        # 0x1423cb3e0
0x0085ec85: call   0x1414a57a0
0x0085ec8a: test   al,al
0x0085ec8c: je     0x14085eedd
0x0085ec92: mov    ecx,r12d
0x0085ec95: cmp    r12d,0x164
0x0085ec9c: ja     0x14085ecbe
0x0085ec9e: je     0x14085eed8
0x0085eca4: sub    ecx,0x41
0x0085eca7: je     0x14085eed8
0x0085ecad: sub    ecx,0x101
0x0085ecb3: je     0x14085eed8
0x0085ecb9: cmp    ecx,0x1
0x0085ecbc: jmp    0x14085eccd
0x0085ecbe: sub    ecx,0x1b0
0x0085ecc4: je     0x14085eed8
0x0085ecca: cmp    ecx,0x3a
0x0085eccd: je     0x14085eed8
0x0085ecd3: movzx  edx,r15w
0x0085ecd7: lea    rcx,[rip+0x1b6c702]        # 0x1423cb3e0
0x0085ecde: call   0x140067fa0
0x0085ece3: and    eax,0x7
0x0085ece6: sub    eax,0x6
0x0085ece9: je     0x14085eed8
0x0085ecef: cmp    eax,0x1
0x0085ecf2: jne    0x14085ed48
0x0085ecf4: movzx  r8d,r14w
0x0085ecf8: movzx  edx,r15w
0x0085ecfc: lea    rcx,[rip+0x1b890f5]        # 0x1423e7df8
0x0085ed03: call   0x1405a5e90
0x0085ed08: test   al,al
0x0085ed0a: jne    0x14085eedd
0x0085ed10: movzx  r8d,r14w
0x0085ed14: movzx  edx,r15w
0x0085ed18: lea    rcx,[rip+0x1b890d9]        # 0x1423e7df8
0x0085ed1f: call   0x1405a5f70
0x0085ed24: test   al,al
0x0085ed26: jne    0x14085eedd
0x0085ed2c: movzx  r8d,r14w
0x0085ed30: movzx  edx,r15w
0x0085ed34: lea    rcx,[rip+0x1b890bd]        # 0x1423e7df8
0x0085ed3b: call   0x1405a5d40
0x0085ed40: test   al,al
0x0085ed42: jne    0x14085eedd
0x0085ed48: cmp    r13d,DWORD PTR [rip+0x1c8327d]        # 0x1424e1fcc
0x0085ed4f: jge    0x14085eed8
0x0085ed55: cmp    ebx,DWORD PTR [rip+0x1c83275]        # 0x1424e1fd0
0x0085ed5b: jge    0x14085eed8
0x0085ed61: cmp    edi,DWORD PTR [rip+0x1c8326d]        # 0x1424e1fd4
0x0085ed67: jge    0x14085eed8
0x0085ed6d: movzx  eax,r15w
0x0085ed71: sar    ax,0x4
0x0085ed75: movzx  edx,r14w
0x0085ed79: sar    dx,0x4
0x0085ed7d: mov    rcx,QWORD PTR [rip+0x1c83214]        # 0x1424e1f98
0x0085ed84: test   rcx,rcx
0x0085ed87: je     0x14085eed8
0x0085ed8d: movsx  rax,ax
0x0085ed91: movsx  rdx,dx
0x0085ed95: mov    rax,QWORD PTR [rcx+rax*8]
0x0085ed99: movsx  rcx,si
0x0085ed9d: mov    rax,QWORD PTR [rax+rdx*8]
0x0085eda1: mov    rcx,QWORD PTR [rax+rcx*8]
0x0085eda5: test   rcx,rcx
0x0085eda8: je     0x14085eed8
0x0085edae: mov    r8d,ebx
0x0085edb1: and    r8d,0x8000000f
0x0085edb8: jge    0x14085edc4
0x0085edba: dec    r8d
0x0085edbd: or     r8d,0xfffffff0
0x0085edc1: inc    r8d
0x0085edc4: mov    edx,r13d
0x0085edc7: and    edx,0x8000000f
0x0085edcd: jge    0x14085edd6
0x0085edcf: dec    edx
0x0085edd1: or     edx,0xfffffff0
0x0085edd4: inc    edx
0x0085edd6: xor    edi,edi
0x0085edd8: mov    DWORD PTR [rsp+0x38],edi
0x0085eddc: mov    BYTE PTR [rsp+0x30],0x1
0x0085ede1: mov    BYTE PTR [rsp+0x28],dil
0x0085ede6: mov    BYTE PTR [rsp+0x20],0x1
0x0085edeb: xor    r9d,r9d
0x0085edee: call   0x1405327c0
0x0085edf3: movzx  esi,WORD PTR [rbp+0x6f]
0x0085edf7: test   al,al
0x0085edf9: je     0x14085eedd
0x0085edff: lea    r9d,[rsi-0x1]
0x0085ee03: movzx  r8d,r14w
0x0085ee07: movzx  edx,r15w
0x0085ee0b: lea    rcx,[rip+0x1b6c5ce]        # 0x1423cb3e0
0x0085ee12: call   0x140247d10
0x0085ee17: cmp    al,0x1
0x0085ee19: jle    0x14085eedd
0x0085ee1f: mov    ecx,0x30
0x0085ee24: call   0x141534600
0x0085ee29: mov    rcx,rax
0x0085ee2c: mov    QWORD PTR [rbp-0x51],rax
0x0085ee30: mov    DWORD PTR [rax+0x8],edi
0x0085ee33: mov    edx,0xffffffff
0x0085ee38: mov    DWORD PTR [rax+0xc],edx
0x0085ee3b: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x0085ee42: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0085ee49: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x0085ee50: lea    rax,[rip+0xe55a19]        # 0x1416b4870
0x0085ee57: mov    QWORD PTR [rcx],rax
0x0085ee5a: mov    DWORD PTR [rcx+0x24],edx
0x0085ee5d: mov    edx,0x1
0x0085ee62: mov    WORD PTR [rcx+0x20],0x6
0x0085ee68: mov    WORD PTR [rcx+0x28],dx
0x0085ee6c: mov    WORD PTR [rcx+0x10],r15w
0x0085ee71: mov    WORD PTR [rcx+0x12],r14w
0x0085ee76: movzx  eax,WORD PTR [rbp+0x6f]
0x0085ee7a: dec    ax
0x0085ee7d: mov    WORD PTR [rcx+0x14],ax
0x0085ee81: movzx  eax,WORD PTR [rbp+0x77]
0x0085ee85: mov    WORD PTR [rcx+0x16],ax
0x0085ee89: movzx  eax,WORD PTR [rbp+0x7f]
0x0085ee8d: mov    WORD PTR [rcx+0x18],ax
0x0085ee91: movzx  eax,WORD PTR [rbp+0x6f]
0x0085ee95: mov    WORD PTR [rcx+0x1a],ax
0x0085ee99: mov    rax,QWORD PTR [rbp+0x67]
0x0085ee9d: mov    QWORD PTR [rbp-0x51],rcx
0x0085eea1: mov    rdx,QWORD PTR [rax+0xc8]
0x0085eea8: cmp    rdx,QWORD PTR [rax+0xd0]
0x0085eeaf: je     0x14085eec2
0x0085eeb1: mov    QWORD PTR [rdx],rcx
0x0085eeb4: add    QWORD PTR [rax+0xc8],0x8
0x0085eebc: movzx  esi,WORD PTR [rbp+0x6f]
0x0085eec0: jmp    0x14085eeea
0x0085eec2: lea    r8,[rbp-0x51]
0x0085eec6: lea    rcx,[rax+0xc0]
0x0085eecd: call   0x1400bacc0
0x0085eed2: movzx  esi,WORD PTR [rbp+0x6f]
0x0085eed6: jmp    0x14085eeea
0x0085eed8: xor    dil,dil
0x0085eedb: jmp    0x14085eeea
0x0085eedd: xor    dil,dil
0x0085eee0: test   r15w,r15w
0x0085eee4: js     0x14085f0d8
0x0085eeea: cmp    r13d,DWORD PTR [rip+0x1c830db]        # 0x1424e1fcc
0x0085eef1: jge    0x14085f0d8
0x0085eef7: test   r14w,r14w
0x0085eefb: js     0x14085f0d8
0x0085ef01: cmp    ebx,DWORD PTR [rip+0x1c830c9]        # 0x1424e1fd0
0x0085ef07: jge    0x14085f0d8
0x0085ef0d: test   si,si
0x0085ef10: js     0x14085f0d8
0x0085ef16: movsx  eax,si
0x0085ef19: cmp    eax,DWORD PTR [rip+0x1c830b5]        # 0x1424e1fd4
0x0085ef1f: jge    0x14085f0d8
0x0085ef25: movzx  eax,r15w
0x0085ef29: sar    ax,0x4
0x0085ef2d: movzx  edx,r14w
0x0085ef31: sar    dx,0x4
0x0085ef35: mov    rcx,QWORD PTR [rip+0x1c8305c]        # 0x1424e1f98
0x0085ef3c: test   rcx,rcx
0x0085ef3f: je     0x14085f0d8
0x0085ef45: movsx  rax,ax
0x0085ef49: movsx  rdx,dx
0x0085ef4d: mov    rax,QWORD PTR [rcx+rax*8]
0x0085ef51: movsx  rcx,si
0x0085ef55: mov    rax,QWORD PTR [rax+rdx*8]
0x0085ef59: mov    r13,QWORD PTR [rax+rcx*8]
0x0085ef5d: test   r13,r13
0x0085ef60: je     0x14085f0d4
0x0085ef66: mov    rax,QWORD PTR [r13+0x10]
0x0085ef6a: sub    rax,QWORD PTR [r13+0x8]
0x0085ef6e: sar    rax,0x3
0x0085ef72: sub    eax,0x1
0x0085ef75: movsxd r12,eax
0x0085ef78: js     0x14085f0d4
0x0085ef7e: movsx  esi,r14w
0x0085ef82: mov    rax,QWORD PTR [r13+0x8]
0x0085ef86: mov    rcx,QWORD PTR [rax+r12*8]
0x0085ef8a: mov    rax,QWORD PTR [rcx]
0x0085ef8d: call   QWORD PTR [rax]
0x0085ef8f: cmp    ax,0x3
0x0085ef93: jne    0x14085f0c6
0x0085ef99: mov    rax,QWORD PTR [r13+0x8]
0x0085ef9d: mov    rbx,QWORD PTR [rax+r12*8]
0x0085efa1: movsx  eax,r15w
0x0085efa5: and    eax,0x8000000f
0x0085efaa: jge    0x14085efb3
0x0085efac: dec    eax
0x0085efae: or     eax,0xfffffff0
0x0085efb1: inc    eax
0x0085efb3: movsxd rdx,eax
0x0085efb6: add    rdx,rdx
0x0085efb9: mov    eax,esi
0x0085efbb: and    eax,0x8000000f
0x0085efc0: jge    0x14085efc9
0x0085efc2: dec    eax
0x0085efc4: or     eax,0xfffffff0
0x0085efc7: inc    eax
0x0085efc9: movsxd rcx,eax
0x0085efcc: lea    rax,[rbx+rdx*8]
0x0085efd0: cmp    BYTE PTR [rcx+rax*1+0x12],0x64
0x0085efd5: jb     0x14085f0c6
0x0085efdb: cmp    WORD PTR [rbx+0x10],0x2
0x0085efe0: je     0x14085f0c6
0x0085efe6: mov    ecx,0x30
0x0085efeb: call   0x141534600
0x0085eff0: mov    rcx,rax
0x0085eff3: mov    QWORD PTR [rbp-0x51],rax
0x0085eff7: mov    DWORD PTR [rax+0x8],0x0
0x0085effe: mov    edx,0xffffffff
0x0085f003: mov    DWORD PTR [rax+0xc],edx
0x0085f006: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x0085f00d: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0085f014: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x0085f01b: lea    rax,[rip+0xe5584e]        # 0x1416b4870
0x0085f022: mov    QWORD PTR [rcx],rax
0x0085f025: mov    WORD PTR [rcx+0x20],dx
0x0085f029: mov    DWORD PTR [rcx+0x24],edx
0x0085f02c: mov    r8d,0x1
0x0085f032: mov    WORD PTR [rcx+0x28],r8w
0x0085f037: movzx  eax,WORD PTR [rbx+0x8]
0x0085f03b: mov    WORD PTR [rcx+0x20],ax
0x0085f03f: mov    eax,DWORD PTR [rbx+0xc]
0x0085f042: mov    DWORD PTR [rcx+0x24],eax
0x0085f045: movzx  eax,WORD PTR [rbx+0x10]
0x0085f049: mov    WORD PTR [rcx+0x28],ax
0x0085f04d: mov    WORD PTR [rcx+0x10],r15w
0x0085f052: mov    WORD PTR [rcx+0x12],r14w
0x0085f057: movzx  eax,WORD PTR [rbp+0x6f]
0x0085f05b: mov    WORD PTR [rcx+0x14],ax
0x0085f05f: movzx  eax,WORD PTR [rbp+0x77]
0x0085f063: mov    WORD PTR [rcx+0x16],ax
0x0085f067: movzx  eax,WORD PTR [rbp+0x7f]
0x0085f06b: mov    WORD PTR [rcx+0x18],ax
0x0085f06f: movzx  eax,WORD PTR [rbp+0x6f]
0x0085f073: mov    WORD PTR [rcx+0x1a],ax
0x0085f077: mov    rax,QWORD PTR [rbp+0x67]
0x0085f07b: mov    QWORD PTR [rbp-0x51],rcx
0x0085f07f: mov    rdx,QWORD PTR [rax+0xc8]
0x0085f086: cmp    rdx,QWORD PTR [rax+0xd0]
0x0085f08d: je     0x14085f09c
0x0085f08f: mov    QWORD PTR [rdx],rcx
0x0085f092: add    QWORD PTR [rax+0xc8],0x8
0x0085f09a: jmp    0x14085f0b2
0x0085f09c: lea    r8,[rbp-0x51]
0x0085f0a0: lea    rcx,[rax+0xc0]
0x0085f0a7: call   0x1400bacc0
0x0085f0ac: mov    r8d,0x1
0x0085f0b2: cmp    WORD PTR [rbx+0x8],0xc
0x0085f0b7: jne    0x14085f0c6
0x0085f0b9: movzx  edi,dil
0x0085f0bd: cmp    WORD PTR [rbx+0x10],0x0
0x0085f0c2: cmove  edi,r8d
0x0085f0c6: sub    r12,0x1
0x0085f0ca: jns    0x14085ef82
0x0085f0d0: movzx  esi,WORD PTR [rbp+0x6f]
0x0085f0d4: movsx  r13d,r15w
0x0085f0d8: movzx  ecx,WORD PTR [rbp-0x49]
0x0085f0dc: call   0x1407dab40
0x0085f0e1: test   al,al
0x0085f0e3: je     0x14085f1b2
0x0085f0e9: test   dil,dil
0x0085f0ec: jne    0x14085f1b2
0x0085f0f2: mov    ecx,0x30
0x0085f0f7: call   0x141534600
0x0085f0fc: mov    rcx,rax
0x0085f0ff: mov    QWORD PTR [rbp-0x51],rax
0x0085f103: xor    r9d,r9d
0x0085f106: mov    DWORD PTR [rax+0x8],r9d
0x0085f10a: mov    edx,0xffffffff
0x0085f10f: mov    DWORD PTR [rax+0xc],edx
0x0085f112: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x0085f119: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0085f120: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x0085f127: lea    rdi,[rip+0xe55742]        # 0x1416b4870
0x0085f12e: mov    QWORD PTR [rax],rdi
0x0085f131: mov    DWORD PTR [rax+0x24],edx
0x0085f134: mov    WORD PTR [rax+0x28],0x1
0x0085f13a: mov    WORD PTR [rax+0x20],0xc
0x0085f140: mov    WORD PTR [rax+0x28],r9w
0x0085f145: mov    WORD PTR [rax+0x10],r15w
0x0085f14a: mov    WORD PTR [rax+0x12],r14w
0x0085f14f: movzx  eax,WORD PTR [rbp+0x6f]
0x0085f153: mov    WORD PTR [rcx+0x14],ax
0x0085f157: movzx  eax,WORD PTR [rbp+0x77]
0x0085f15b: mov    WORD PTR [rcx+0x16],ax
0x0085f15f: movzx  eax,WORD PTR [rbp+0x7f]
0x0085f163: mov    WORD PTR [rcx+0x18],ax
0x0085f167: movzx  eax,WORD PTR [rbp+0x6f]
0x0085f16b: mov    WORD PTR [rcx+0x1a],ax
0x0085f16f: mov    r12,QWORD PTR [rbp+0x67]
0x0085f173: mov    QWORD PTR [rbp-0x51],rcx
0x0085f177: mov    rdx,QWORD PTR [r12+0xc8]
0x0085f17f: cmp    rdx,QWORD PTR [r12+0xd0]
0x0085f187: je     0x14085f19b
0x0085f189: mov    QWORD PTR [rdx],rcx
0x0085f18c: add    QWORD PTR [r12+0xc8],0x8
0x0085f195: movzx  esi,WORD PTR [rbp+0x6f]
0x0085f199: jmp    0x14085f1c0
0x0085f19b: lea    r8,[rbp-0x51]
0x0085f19f: lea    rcx,[r12+0xc0]
0x0085f1a7: call   0x1400bacc0
0x0085f1ac: movzx  esi,WORD PTR [rbp+0x6f]
0x0085f1b0: jmp    0x14085f1bd
0x0085f1b2: lea    rdi,[rip+0xe556b7]        # 0x1416b4870
0x0085f1b9: mov    r12,QWORD PTR [rbp+0x67]
0x0085f1bd: xor    r9d,r9d
0x0085f1c0: inc    r14w
0x0085f1c4: movsx  ebx,r14w
0x0085f1c8: movsx  eax,WORD PTR [rbp+0x7f]
0x0085f1cc: inc    eax
0x0085f1ce: cmp    ebx,eax
0x0085f1d0: jle    0x14085ea46
0x0085f1d6: inc    r15w
0x0085f1da: movsx  r13d,r15w
0x0085f1de: movsx  eax,WORD PTR [rbp+0x77]
0x0085f1e2: inc    eax
0x0085f1e4: cmp    r13d,eax
0x0085f1e7: jle    0x14085ea30
0x0085f1ed: mov    edi,r9d
0x0085f1f0: mov    rax,QWORD PTR [rip+0x1b7fe09]        # 0x1423df000
0x0085f1f7: mov    rcx,QWORD PTR [rax+0x6d8]
0x0085f1fe: sub    rcx,QWORD PTR [rax+0x6d0]
0x0085f205: sar    rcx,0x3
0x0085f209: mov    r13,QWORD PTR [rbp+0x67]
0x0085f20d: test   rcx,rcx
0x0085f210: je     0x14085f2d1
0x0085f216: mov    rsi,r9
0x0085f219: lea    r14,[rip+0xe51460]        # 0x1416b0680
0x0085f220: mov    ecx,0x20
0x0085f225: call   0x141534600
0x0085f22a: mov    rdx,rax
0x0085f22d: mov    QWORD PTR [rbp-0x51],rax
0x0085f231: xor    r9d,r9d
0x0085f234: mov    DWORD PTR [rax+0x8],r9d
0x0085f238: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085f23f: mov    QWORD PTR [rax],r14
0x0085f242: mov    QWORD PTR [rax+0x10],r9
0x0085f246: mov    QWORD PTR [rax+0x18],r9
0x0085f24a: mov    rcx,QWORD PTR [rip+0x1b7fdaf]        # 0x1423df000
0x0085f251: mov    QWORD PTR [rax+0x10],rcx
0x0085f255: mov    rcx,QWORD PTR [rip+0x1b7fda4]        # 0x1423df000
0x0085f25c: mov    rcx,QWORD PTR [rcx+0x6d0]
0x0085f263: mov    rax,QWORD PTR [rsi+rcx*1]
0x0085f267: mov    QWORD PTR [rdx+0x18],rax
0x0085f26b: mov    QWORD PTR [rbp-0x51],rdx
0x0085f26f: mov    rax,QWORD PTR [r13+0xc8]
0x0085f276: cmp    rax,QWORD PTR [r13+0xd0]
0x0085f27d: je     0x14085f28c
0x0085f27f: mov    QWORD PTR [rax],rdx
0x0085f282: add    QWORD PTR [r13+0xc8],0x8
0x0085f28a: jmp    0x14085f2a2
0x0085f28c: lea    r8,[rbp-0x51]
0x0085f290: mov    rdx,rax
0x0085f293: lea    rcx,[r13+0xc0]
0x0085f29a: call   0x1400bacc0
0x0085f29f: xor    r9d,r9d
0x0085f2a2: inc    edi
0x0085f2a4: add    rsi,0x8
0x0085f2a8: mov    rax,QWORD PTR [rip+0x1b7fd51]        # 0x1423df000
0x0085f2af: mov    rcx,QWORD PTR [rax+0x6d8]
0x0085f2b6: sub    rcx,QWORD PTR [rax+0x6d0]
0x0085f2bd: sar    rcx,0x3
0x0085f2c1: movsxd rax,edi
0x0085f2c4: cmp    rax,rcx
0x0085f2c7: jb     0x14085f220
0x0085f2cd: mov    r13,QWORD PTR [rbp+0x67]
0x0085f2d1: mov    r12d,r9d
0x0085f2d4: mov    DWORD PTR [rbp-0x49],r9d
0x0085f2d8: mov    rax,QWORD PTR [rip+0x1b7fd21]        # 0x1423df000
0x0085f2df: mov    rcx,QWORD PTR [rax+0x410]
0x0085f2e6: sub    rcx,QWORD PTR [rax+0x408]
0x0085f2ed: sar    rcx,0x3
0x0085f2f1: test   rcx,rcx
0x0085f2f4: je     0x14085f4b4
0x0085f2fa: mov    r14,r9
0x0085f2fd: nop    DWORD PTR [rax]
0x0085f300: mov    rax,QWORD PTR [rip+0x1b7fcf9]        # 0x1423df000
0x0085f307: mov    rax,QWORD PTR [rax+0x408]
0x0085f30e: mov    rcx,QWORD PTR [r14+rax*1]
0x0085f312: mov    rcx,QWORD PTR [rcx]
0x0085f315: test   rcx,rcx
0x0085f318: je     0x14085f484
0x0085f31e: mov    rax,QWORD PTR [rcx]
0x0085f321: call   QWORD PTR [rax+0x448]
0x0085f327: test   al,al
0x0085f329: je     0x14085f484
0x0085f32f: mov    rax,QWORD PTR [rip+0x1b7fcca]        # 0x1423df000
0x0085f336: mov    rax,QWORD PTR [rax+0x408]
0x0085f33d: mov    rcx,QWORD PTR [r14+rax*1]
0x0085f341: mov    rcx,QWORD PTR [rcx]
0x0085f344: mov    rax,QWORD PTR [rcx]
0x0085f347: call   QWORD PTR [rax+0x2a8]
0x0085f34d: test   al,al
0x0085f34f: jne    0x14085f484
0x0085f355: mov    rax,QWORD PTR [rip+0x1b7fca4]        # 0x1423df000
0x0085f35c: mov    rax,QWORD PTR [rax+0x408]
0x0085f363: mov    rcx,QWORD PTR [r14+rax*1]
0x0085f367: mov    rcx,QWORD PTR [rcx]
0x0085f36a: mov    rax,QWORD PTR [rcx]
0x0085f36d: call   QWORD PTR [rax]
0x0085f36f: cmp    ax,0x4b
0x0085f373: je     0x14085f484
0x0085f379: mov    rax,QWORD PTR [rip+0x1b7fc80]        # 0x1423df000
0x0085f380: mov    rax,QWORD PTR [rax+0x408]
0x0085f387: mov    rcx,QWORD PTR [r14+rax*1]
0x0085f38b: mov    r15,QWORD PTR [rcx]
0x0085f38e: mov    rcx,QWORD PTR [r15+0x98]
0x0085f395: test   rcx,rcx
0x0085f398: je     0x14085f484
0x0085f39e: xor    r9d,r9d
0x0085f3a1: mov    edi,r9d
0x0085f3a4: mov    rax,QWORD PTR [rcx+0x8]
0x0085f3a8: sub    rax,QWORD PTR [rcx]
0x0085f3ab: sar    rax,0x3
0x0085f3af: test   rax,rax
0x0085f3b2: je     0x14085f484
0x0085f3b8: lea    rbx,[r13+0xc0]
0x0085f3bf: mov    esi,r9d
0x0085f3c2: lea    r13,[rip+0xe586b7]        # 0x1416b7a80
0x0085f3c9: nop    DWORD PTR [rax+0x0]
0x0085f3d0: mov    ecx,0x28
0x0085f3d5: call   0x141534600
0x0085f3da: mov    rdx,rax
0x0085f3dd: mov    QWORD PTR [rbp-0x51],rax
0x0085f3e1: xor    r9d,r9d
0x0085f3e4: mov    DWORD PTR [rax+0x8],r9d
0x0085f3e8: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085f3ef: mov    QWORD PTR [rax],r13
0x0085f3f2: mov    QWORD PTR [rax+0x10],r9
0x0085f3f6: mov    QWORD PTR [rax+0x18],r9
0x0085f3fa: mov    QWORD PTR [rax+0x20],r9
0x0085f3fe: mov    rcx,QWORD PTR [rip+0x1b7fbfb]        # 0x1423df000
0x0085f405: mov    QWORD PTR [rax+0x10],rcx
0x0085f409: mov    rcx,QWORD PTR [rip+0x1b7fbf0]        # 0x1423df000
0x0085f410: mov    rax,QWORD PTR [rcx+0x408]
0x0085f417: mov    rcx,QWORD PTR [r14+rax*1]
0x0085f41b: mov    QWORD PTR [rdx+0x18],rcx
0x0085f41f: mov    rax,QWORD PTR [r15+0x98]
0x0085f426: mov    rcx,QWORD PTR [rax]
0x0085f429: mov    rax,QWORD PTR [rsi+rcx*1]
0x0085f42d: mov    QWORD PTR [rdx+0x20],rax
0x0085f431: mov    QWORD PTR [rbp-0x51],rdx
0x0085f435: mov    rax,QWORD PTR [rbx+0x8]
0x0085f439: cmp    rax,QWORD PTR [rbx+0x10]
0x0085f43d: je     0x14085f449
0x0085f43f: mov    QWORD PTR [rax],rdx
0x0085f442: add    QWORD PTR [rbx+0x8],0x8
0x0085f447: jmp    0x14085f458
0x0085f449: lea    r8,[rbp-0x51]
0x0085f44d: mov    rdx,rax
0x0085f450: mov    rcx,rbx
0x0085f453: call   0x1400bacc0
0x0085f458: inc    edi
0x0085f45a: add    rsi,0x8
0x0085f45e: mov    rax,QWORD PTR [r15+0x98]
0x0085f465: mov    rcx,QWORD PTR [rax+0x8]
0x0085f469: sub    rcx,QWORD PTR [rax]
0x0085f46c: sar    rcx,0x3
0x0085f470: movsxd rax,edi
0x0085f473: cmp    rax,rcx
0x0085f476: jb     0x14085f3d0
0x0085f47c: mov    r12d,DWORD PTR [rbp-0x49]
0x0085f480: mov    r13,QWORD PTR [rbp+0x67]
0x0085f484: inc    r12d
0x0085f487: mov    DWORD PTR [rbp-0x49],r12d
0x0085f48b: add    r14,0x8
0x0085f48f: mov    rax,QWORD PTR [rip+0x1b7fb6a]        # 0x1423df000
0x0085f496: mov    rcx,QWORD PTR [rax+0x410]
0x0085f49d: sub    rcx,QWORD PTR [rax+0x408]
0x0085f4a4: sar    rcx,0x3
0x0085f4a8: movsxd rax,r12d
0x0085f4ab: cmp    rax,rcx
0x0085f4ae: jb     0x14085f300
0x0085f4b4: mov    rbx,QWORD PTR [r13+0x30]
0x0085f4b8: mov    r14,QWORD PTR [r13+0x38]
0x0085f4bc: nop    DWORD PTR [rax+0x0]
0x0085f4c0: cmp    rbx,r14
0x0085f4c3: jae    0x14085f696
0x0085f4c9: mov    rcx,QWORD PTR [rbx]
0x0085f4cc: mov    rax,QWORD PTR [rcx]
0x0085f4cf: call   QWORD PTR [rax+0x90]
0x0085f4d5: mov    r15,rax
0x0085f4d8: test   rax,rax
0x0085f4db: je     0x14085f68d
0x0085f4e1: mov    rdi,QWORD PTR [r13+0x48]
0x0085f4e5: mov    rsi,QWORD PTR [r13+0x50]
0x0085f4e9: nop    DWORD PTR [rax+0x0]
0x0085f4f0: cmp    rdi,rsi
0x0085f4f3: jae    0x14085f51d
0x0085f4f5: mov    rcx,QWORD PTR [rdi]
0x0085f4f8: mov    rax,QWORD PTR [rcx]
0x0085f4fb: call   QWORD PTR [rax+0x90]
0x0085f501: cmp    rax,r15
0x0085f504: jne    0x14085f517
0x0085f506: mov    rcx,QWORD PTR [rbx]
0x0085f509: mov    rax,QWORD PTR [rcx]
0x0085f50c: mov    edx,0x1
0x0085f511: call   QWORD PTR [rax+0xf0]
0x0085f517: add    rdi,0x8
0x0085f51b: jmp    0x14085f4f0
0x0085f51d: mov    rdi,QWORD PTR [r13+0x60]
0x0085f521: mov    rsi,QWORD PTR [r13+0x68]
0x0085f525: cmp    rdi,rsi
0x0085f528: jae    0x14085f552
0x0085f52a: mov    rcx,QWORD PTR [rdi]
0x0085f52d: mov    rax,QWORD PTR [rcx]
0x0085f530: call   QWORD PTR [rax+0x90]
0x0085f536: cmp    rax,r15
0x0085f539: jne    0x14085f54c
0x0085f53b: mov    rcx,QWORD PTR [rbx]
0x0085f53e: mov    rax,QWORD PTR [rcx]
0x0085f541: mov    edx,0x2
0x0085f546: call   QWORD PTR [rax+0xf0]
0x0085f54c: add    rdi,0x8
0x0085f550: jmp    0x14085f525
0x0085f552: mov    rdi,QWORD PTR [r13+0x78]
0x0085f556: mov    rsi,QWORD PTR [r13+0x80]
0x0085f55d: nop    DWORD PTR [rax]
0x0085f560: cmp    rdi,rsi
0x0085f563: jae    0x14085f58d
0x0085f565: mov    rcx,QWORD PTR [rdi]
0x0085f568: mov    rax,QWORD PTR [rcx]
0x0085f56b: call   QWORD PTR [rax+0x90]
0x0085f571: cmp    rax,r15
0x0085f574: jne    0x14085f587
0x0085f576: mov    rcx,QWORD PTR [rbx]
0x0085f579: mov    rax,QWORD PTR [rcx]
0x0085f57c: mov    edx,0x4
0x0085f581: call   QWORD PTR [rax+0xf0]
0x0085f587: add    rdi,0x8
0x0085f58b: jmp    0x14085f560
0x0085f58d: mov    rdi,QWORD PTR [r13+0x90]
0x0085f594: mov    rsi,QWORD PTR [r13+0x98]
0x0085f59b: nop    DWORD PTR [rax+rax*1+0x0]
0x0085f5a0: cmp    rdi,rsi
0x0085f5a3: jae    0x14085f5cd
0x0085f5a5: mov    rcx,QWORD PTR [rdi]
0x0085f5a8: mov    rax,QWORD PTR [rcx]
0x0085f5ab: call   QWORD PTR [rax+0x90]
0x0085f5b1: cmp    rax,r15
0x0085f5b4: jne    0x14085f5c7
0x0085f5b6: mov    rcx,QWORD PTR [rbx]
0x0085f5b9: mov    rax,QWORD PTR [rcx]
0x0085f5bc: mov    edx,0x8
0x0085f5c1: call   QWORD PTR [rax+0xf0]
0x0085f5c7: add    rdi,0x8
0x0085f5cb: jmp    0x14085f5a0
0x0085f5cd: mov    rdi,QWORD PTR [r13+0xa8]
0x0085f5d4: mov    rsi,QWORD PTR [r13+0xb0]
0x0085f5db: nop    DWORD PTR [rax+rax*1+0x0]
0x0085f5e0: cmp    rdi,rsi
0x0085f5e3: jae    0x14085f60d
0x0085f5e5: mov    rcx,QWORD PTR [rdi]
0x0085f5e8: mov    rax,QWORD PTR [rcx]
0x0085f5eb: call   QWORD PTR [rax+0x90]
0x0085f5f1: cmp    rax,r15
0x0085f5f4: jne    0x14085f607
0x0085f5f6: mov    rcx,QWORD PTR [rbx]
0x0085f5f9: mov    rax,QWORD PTR [rcx]
0x0085f5fc: mov    edx,0x10
0x0085f601: call   QWORD PTR [rax+0xf0]
0x0085f607: add    rdi,0x8
0x0085f60b: jmp    0x14085f5e0
0x0085f60d: mov    rdi,QWORD PTR [r13+0xc0]
0x0085f614: mov    rsi,QWORD PTR [r13+0xc8]
0x0085f61b: nop    DWORD PTR [rax+rax*1+0x0]
0x0085f620: cmp    rdi,rsi
0x0085f623: jae    0x14085f64d
0x0085f625: mov    rcx,QWORD PTR [rdi]
0x0085f628: mov    rax,QWORD PTR [rcx]
0x0085f62b: call   QWORD PTR [rax+0x90]
0x0085f631: cmp    rax,r15
0x0085f634: jne    0x14085f647
0x0085f636: mov    rcx,QWORD PTR [rbx]
0x0085f639: mov    rax,QWORD PTR [rcx]
0x0085f63c: mov    edx,0x20
0x0085f641: call   QWORD PTR [rax+0xf0]
0x0085f647: add    rdi,0x8
0x0085f64b: jmp    0x14085f620
0x0085f64d: mov    rdi,QWORD PTR [r13+0xd8]
0x0085f654: mov    rsi,QWORD PTR [r13+0xe0]
0x0085f65b: nop    DWORD PTR [rax+rax*1+0x0]
0x0085f660: cmp    rdi,rsi
0x0085f663: jae    0x14085f68d
0x0085f665: mov    rcx,QWORD PTR [rdi]
0x0085f668: mov    rax,QWORD PTR [rcx]
0x0085f66b: call   QWORD PTR [rax+0x90]
0x0085f671: cmp    rax,r15
0x0085f674: jne    0x14085f687
0x0085f676: mov    rcx,QWORD PTR [rbx]
0x0085f679: mov    rax,QWORD PTR [rcx]
0x0085f67c: mov    edx,0x40
0x0085f681: call   QWORD PTR [rax+0xf0]
0x0085f687: add    rdi,0x8
0x0085f68b: jmp    0x14085f660
0x0085f68d: add    rbx,0x8
0x0085f691: jmp    0x14085f4c0
0x0085f696: add    rsp,0xc8
0x0085f69d: pop    r15
0x0085f69f: pop    r14
0x0085f6a1: pop    r13
0x0085f6a3: pop    r12
0x0085f6a5: pop    rdi
0x0085f6a6: pop    rsi
0x0085f6a7: pop    rbx
0x0085f6a8: pop    rbp
0x0085f6a9: ret
0x0085f6aa: xchg   ax,ax
