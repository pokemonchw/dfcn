140ab6840: mov    QWORD PTR [rsp+0x10],rbx
140ab6845: mov    QWORD PTR [rsp+0x18],rsi
140ab684a: mov    QWORD PTR [rsp+0x20],rdi
140ab684f: push   rbp
140ab6850: push   r12
140ab6852: push   r13
140ab6854: push   r14
140ab6856: push   r15
140ab6858: lea    rbp,[rsp-0x2b0]
140ab6860: sub    rsp,0x3b0
140ab6867: mov    rax,QWORD PTR [rip+0xde57d2]        # 0x14189c040
140ab686e: xor    rax,rsp
140ab6871: mov    QWORD PTR [rbp+0x2a0],rax
140ab6878: mov    r15,rcx
140ab687b: mov    QWORD PTR [rbp-0x18],rcx
140ab687f: mov    r8d,DWORD PTR [rip+0x18bdeae]        # 0x142374734
140ab6886: mov    eax,0xc22e4507
140ab688b: imul   r8d
140ab688e: add    edx,r8d
140ab6891: sar    edx,0xe
140ab6894: mov    eax,edx
140ab6896: shr    eax,0x1f
140ab6899: add    edx,eax
140ab689b: imul   eax,edx,0x5460
140ab68a1: sub    r8d,eax
140ab68a4: xor    r12d,r12d
140ab68a7: mov    ebx,0x1
140ab68ac: cmp    r8d,0x870
140ab68b3: jne    0x140ab8a80
140ab68b9: mov    DWORD PTR [rsp+0x70],r12d
140ab68be: xor    esi,esi
140ab68c0: mov    r14d,esi
140ab68c3: mov    rcx,QWORD PTR [rcx+0x14278]
140ab68ca: mov    rax,QWORD PTR [r15+0x14280]
140ab68d1: sub    rax,rcx
140ab68d4: sar    rax,0x3
140ab68d8: sub    eax,ebx
140ab68da: movsxd rdx,eax
140ab68dd: js     0x140ab6912
140ab68df: lea    r8,[rcx+rdx*8]
140ab68e3: nop    DWORD PTR [rax+0x0]
140ab68e7: nop    WORD PTR [rax+rax*1+0x0]
140ab68f0: mov    rax,QWORD PTR [r8]
140ab68f3: mov    ecx,DWORD PTR [rax+0x10]
140ab68f6: and    ecx,0x400c11
140ab68fc: lea    eax,[r14+0x1]
140ab6900: cmp    ecx,ebx
140ab6902: cmovne eax,r14d
140ab6906: mov    r14d,eax
140ab6909: lea    r8,[r8-0x8]
140ab690d: sub    rdx,rbx
140ab6910: jns    0x140ab68f0
140ab6912: mov    rax,QWORD PTR [r15+0x14298]
140ab6919: sub    rax,QWORD PTR [r15+0x14290]
140ab6920: sar    rax,0x3
140ab6924: sub    eax,ebx
140ab6926: movsxd rbx,eax
140ab6929: js     0x140ab69f3
140ab692f: lea    rdi,[rbx*8+0x0]
140ab6937: nop    WORD PTR [rax+rax*1+0x0]
140ab6940: mov    rax,QWORD PTR [r15+0x14290]
140ab6947: mov    rcx,QWORD PTR [rdi+rax*1]
140ab694b: mov    rax,QWORD PTR [rcx]
140ab694e: call   QWORD PTR [rax+0x170]
140ab6954: test   al,al
140ab6956: je     0x140ab69e0
140ab695c: mov    rax,QWORD PTR [r15+0x14290]
140ab6963: mov    rcx,QWORD PTR [rax+rbx*8]
140ab6967: test   DWORD PTR [rcx+0x10],0x400c38
140ab696e: jne    0x140ab69e0
140ab6970: lea    r9,[rbp+0x18]
140ab6974: lea    r8,[rbp+0x14]
140ab6978: lea    rdx,[rbp+0x10]
140ab697c: call   0x140c8baa0
140ab6981: mov    rax,QWORD PTR [r15+0x14290]
140ab6988: mov    dl,0x1
140ab698a: mov    rcx,QWORD PTR [rax+rbx*8]
140ab698e: call   0x140c738a0
140ab6993: test   al,al
140ab6995: je     0x140ab69c5
140ab6997: movzx  r9d,WORD PTR [rbp+0x18]
140ab699c: movzx  r8d,WORD PTR [rbp+0x14]
140ab69a1: movzx  edx,WORD PTR [rbp+0x10]
140ab69a5: mov    rcx,r15
140ab69a8: call   0x14007dc40
140ab69ad: test   al,0x8
140ab69af: je     0x140ab69c5
140ab69b1: mov    rax,QWORD PTR [r15+0x14290]
140ab69b8: mov    rcx,QWORD PTR [rax+rbx*8]
140ab69bc: test   DWORD PTR [rcx+0x10],0x100
140ab69c3: je     0x140ab69e0
140ab69c5: mov    rax,QWORD PTR [r15+0x14290]
140ab69cc: mov    rcx,QWORD PTR [rax+rbx*8]
140ab69d0: mov    eax,DWORD PTR [rcx+0x10]
140ab69d3: test   al,0x4
140ab69d5: je     0x140ab69dd
140ab69d7: bt     eax,0x8
140ab69db: jae    0x140ab69e0
140ab69dd: inc    r12d
140ab69e0: sub    rbx,0x1
140ab69e4: lea    rdi,[rdi-0x8]
140ab69e8: jns    0x140ab6940
140ab69ee: mov    DWORD PTR [rsp+0x70],r12d
140ab69f3: mov    ebx,esi
140ab69f5: mov    r11d,esi
140ab69f8: mov    DWORD PTR [rbp-0x70],esi
140ab69fb: mov    edi,esi
140ab69fd: mov    DWORD PTR [rbp+0x8],esi
140ab6a00: mov    r10,QWORD PTR [r15+0x90]
140ab6a07: mov    QWORD PTR [rbp-0x38],r10
140ab6a0b: mov    rax,QWORD PTR [r15+0x98]
140ab6a12: mov    QWORD PTR [rsp+0x78],rax
140ab6a17: lea    r8,[rsp+0x78]
140ab6a1c: lea    rdx,[rbp-0x41]
140ab6a20: lea    rcx,[rbp-0x38]
140ab6a24: call   0x14006ee20
140ab6a29: cmp    BYTE PTR [rax],sil
140ab6a2c: jge    0x140ab6a9f
140ab6a2e: xchg   ax,ax
140ab6a30: mov    rax,QWORD PTR [r10]
140ab6a33: cmp    WORD PTR [rax+0x24],0xffff
140ab6a38: jne    0x140ab6a79
140ab6a3a: cmp    DWORD PTR [rax+0x28],0xffffffff
140ab6a3e: jne    0x140ab6a79
140ab6a40: cmp    DWORD PTR [rax+0x2c],0xffffffff
140ab6a44: jne    0x140ab6a79
140ab6a46: test   BYTE PTR [rax+0x18],0x8
140ab6a4a: jne    0x140ab6a79
140ab6a4c: cmp    QWORD PTR [rax+0x10],0x0
140ab6a51: jne    0x140ab6a79
140ab6a53: movsx  ecx,WORD PTR [rax+0x38]
140ab6a57: test   ecx,ecx
140ab6a59: je     0x140ab6a77
140ab6a5b: sub    ecx,0x1
140ab6a5e: je     0x140ab6a72
140ab6a60: sub    ecx,0x1
140ab6a63: je     0x140ab6a6e
140ab6a65: cmp    ecx,0x1
140ab6a68: jne    0x140ab6a79
140ab6a6a: inc    edi
140ab6a6c: jmp    0x140ab6a79
140ab6a6e: inc    esi
140ab6a70: jmp    0x140ab6a79
140ab6a72: inc    r11d
140ab6a75: jmp    0x140ab6a79
140ab6a77: inc    ebx
140ab6a79: add    r10,0x8
140ab6a7d: mov    QWORD PTR [rbp-0x38],r10
140ab6a81: lea    r8,[rsp+0x78]
140ab6a86: lea    rdx,[rbp-0x41]
140ab6a8a: lea    rcx,[rbp-0x38]
140ab6a8e: call   0x14006ee20
140ab6a93: cmp    BYTE PTR [rax],0x0
140ab6a96: jl     0x140ab6a30
140ab6a98: mov    DWORD PTR [rbp+0x8],edi
140ab6a9b: mov    DWORD PTR [rbp-0x70],r11d
140ab6a9f: sar    r14d,0x2
140ab6aa3: mov    DWORD PTR [rbp-0x38],r14d
140ab6aa7: mov    r13d,0x64
140ab6aad: cmp    r14d,ebx
140ab6ab0: jle    0x140ab6d2f
140ab6ab6: mov    ecx,0x1e
140ab6abb: call   0x140071f30
140ab6ac0: test   eax,eax
140ab6ac2: jne    0x140ab6d2f
140ab6ac8: cmp    ebx,0xa
140ab6acb: jge    0x140ab6d2f
140ab6ad1: mov    rcx,QWORD PTR [r15+0x14280]
140ab6ad8: sub    rcx,QWORD PTR [r15+0x14278]
140ab6adf: sar    rcx,0x3
140ab6ae3: call   0x140071f30
140ab6ae8: movsxd rcx,eax
140ab6aeb: lea    r14,[rcx*8+0x0]
140ab6af3: mov    rax,QWORD PTR [r15+0x14278]
140ab6afa: mov    r9,QWORD PTR [r14+rax*1]
140ab6afe: mov    eax,DWORD PTR [r9+0x10]
140ab6b02: and    eax,0x400c11
140ab6b07: cmp    eax,0x1
140ab6b0a: jne    0x140ab6ad1
140ab6b0c: movzx  eax,WORD PTR [r9+0xc]
140ab6b11: movzx  ecx,WORD PTR [r9+0xa]
140ab6b16: mov    WORD PTR [rsp+0x28],ax
140ab6b1b: mov    WORD PTR [rsp+0x20],cx
140ab6b20: movzx  r9d,WORD PTR [r9+0x8]
140ab6b25: lea    r8,[rsp+0x60]
140ab6b2a: lea    rdx,[rsp+0x68]
140ab6b2f: mov    rcx,r15
140ab6b32: call   0x14007dcd0
140ab6b37: xorps  xmm0,xmm0
140ab6b3a: movdqu XMMWORD PTR [rbp+0x88],xmm0
140ab6b42: xor    ecx,ecx
140ab6b44: mov    QWORD PTR [rbp+0x98],rcx
140ab6b4b: mov    rbx,QWORD PTR [r15+0x2b8]
140ab6b52: mov    QWORD PTR [rbp-0x50],rbx
140ab6b56: mov    rax,QWORD PTR [r15+0x2c0]
140ab6b5d: mov    QWORD PTR [rsp+0x78],rax
140ab6b62: mov    edi,ecx
140ab6b64: mov    DWORD PTR [rbp-0x68],ecx
140ab6b67: lea    r8,[rsp+0x78]
140ab6b6c: lea    rdx,[rbp-0x48]
140ab6b70: lea    rcx,[rbp-0x50]
140ab6b74: call   0x14006ee20
140ab6b79: cmp    BYTE PTR [rax],dil
140ab6b7c: jge    0x140ab6c51
140ab6b82: movzx  r12d,WORD PTR [rsp+0x60]
140ab6b88: movzx  r13d,WORD PTR [rsp+0x68]
140ab6b8e: xchg   ax,ax
140ab6b90: mov    rax,QWORD PTR [rbx]
140ab6b93: test   BYTE PTR [rax+0xc],0xa
140ab6b97: jne    0x140ab6c1e
140ab6b9d: movzx  r11d,WORD PTR [rax+0x10]
140ab6ba2: cmp    r11w,r13w
140ab6ba6: jne    0x140ab6c1e
140ab6ba8: cmp    WORD PTR [rax+0x12],r12w
140ab6bad: jne    0x140ab6c1e
140ab6baf: cmp    WORD PTR [rax+0x14],0xffff
140ab6bb4: jne    0x140ab6c1e
140ab6bb6: cmp    DWORD PTR [rax+0x18],0xffffffff
140ab6bba: jne    0x140ab6c1e
140ab6bbc: cmp    DWORD PTR [rax+0x1c],0xffffffff
140ab6bc0: jne    0x140ab6c1e
140ab6bc2: cmp    DWORD PTR [rax+0x4],0x0
140ab6bc6: jbe    0x140ab6c1e
140ab6bc8: cmp    BYTE PTR [rax],0x1
140ab6bcb: jne    0x140ab6c1e
140ab6bcd: lea    rcx,[r15+0x11b558]
140ab6bd4: movzx  r10d,WORD PTR [rax+0x2]
140ab6bd9: mov    r8d,0x3
140ab6bdf: movzx  edx,r10w
140ab6be3: call   0x1400e35c0
140ab6be8: test   al,al
140ab6bea: je     0x140ab6c1e
140ab6bec: mov    DWORD PTR [rsp+0x20],0x23
140ab6bf4: mov    r9d,0xffffffff
140ab6bfa: mov    r8b,0x1
140ab6bfd: movzx  edx,r11w
140ab6c01: movzx  ecx,r10w
140ab6c05: call   0x140abd3a0
140ab6c0a: test   al,al
140ab6c0c: jne    0x140ab6c1e
140ab6c0e: lea    rdx,[rbp-0x68]
140ab6c12: lea    rcx,[rbp+0x88]
140ab6c19: call   0x14006f410
140ab6c1e: add    rbx,0x8
140ab6c22: mov    QWORD PTR [rbp-0x50],rbx
140ab6c26: inc    edi
140ab6c28: mov    DWORD PTR [rbp-0x68],edi
140ab6c2b: lea    r8,[rsp+0x78]
140ab6c30: lea    rdx,[rbp-0x48]
140ab6c34: lea    rcx,[rbp-0x50]
140ab6c38: call   0x14006ee20
140ab6c3d: cmp    BYTE PTR [rax],0x0
140ab6c40: jl     0x140ab6b90
140ab6c46: mov    r12d,DWORD PTR [rsp+0x70]
140ab6c4b: mov    r13d,0x64
140ab6c51: mov    rcx,QWORD PTR [rbp+0x90]
140ab6c58: mov    rax,rcx
140ab6c5b: mov    rdx,QWORD PTR [rbp+0x88]
140ab6c62: sub    rax,rdx
140ab6c65: sar    rax,0x2
140ab6c69: test   rax,rax
140ab6c6c: je     0x140ab6d23
140ab6c72: sub    rcx,rdx
140ab6c75: sar    rcx,0x2
140ab6c79: call   0x140071f30
140ab6c7e: movsxd rcx,eax
140ab6c81: mov    rax,QWORD PTR [rbp+0x88]
140ab6c88: movsxd rcx,DWORD PTR [rax+rcx*4]
140ab6c8c: lea    rdi,[rcx*8+0x0]
140ab6c94: mov    rax,QWORD PTR [r15+0x2b8]
140ab6c9b: mov    rcx,QWORD PTR [rdi+rax*1]
140ab6c9f: movzx  ecx,WORD PTR [rcx+0x2]
140ab6ca3: call   0x140abd500
140ab6ca8: movsx  ebx,ax
140ab6cab: mov    ecx,r13d
140ab6cae: call   0x140071f30
140ab6cb3: cmp    eax,ebx
140ab6cb5: jl     0x140ab6cc7
140ab6cb7: mov    rcx,QWORD PTR [rbp+0x90]
140ab6cbe: mov    rdx,QWORD PTR [rbp+0x88]
140ab6cc5: jmp    0x140ab6c72
140ab6cc7: mov    rcx,QWORD PTR [r15+0x2b8]
140ab6cce: mov    rcx,QWORD PTR [rdi+rcx*1]
140ab6cd2: call   0x141435fb0
140ab6cd7: mov    rax,QWORD PTR [r15+0x2b8]
140ab6cde: mov    rdx,QWORD PTR [rdi+rax*1]
140ab6ce2: lea    r8,[rdx+0x10]
140ab6ce6: mov    rax,QWORD PTR [r15+0x14278]
140ab6ced: mov    rcx,QWORD PTR [r14+rax*1]
140ab6cf1: movzx  eax,WORD PTR [rcx+0xc]
140ab6cf5: mov    QWORD PTR [rsp+0x38],rdx
140ab6cfa: mov    QWORD PTR [rsp+0x30],r8
140ab6cff: xor    r8d,r8d
140ab6d02: mov    DWORD PTR [rsp+0x28],r8d
140ab6d07: mov    WORD PTR [rsp+0x20],ax
140ab6d0c: movzx  r9d,WORD PTR [rcx+0xa]
140ab6d11: movzx  r8d,WORD PTR [rcx+0x8]
140ab6d16: movzx  edx,WORD PTR [rdx+0x2]
140ab6d1a: mov    rcx,r15
140ab6d1d: call   0x1414c6320
140ab6d22: nop
140ab6d23: lea    rcx,[rbp+0x88]
140ab6d2a: call   0x14006f750
140ab6d2f: cmp    esi,0x1e
140ab6d32: jge    0x140ab6ffe
140ab6d38: lea    eax,[rsi+rsi*1]
140ab6d3b: cmp    eax,r12d
140ab6d3e: jge    0x140ab6ffe
140ab6d44: mov    edi,0xffff8ad0
140ab6d49: mov    WORD PTR [rbp-0x30],di
140ab6d4d: mov    WORD PTR [rbp-0x2c],di
140ab6d51: mov    WORD PTR [rbp-0x28],di
140ab6d55: data16 data16 nop WORD PTR [rax+rax*1+0x0]
140ab6d60: mov    rcx,QWORD PTR [r15+0x14298]
140ab6d67: sub    rcx,QWORD PTR [r15+0x14290]
140ab6d6e: sar    rcx,0x3
140ab6d72: call   0x140071f30
140ab6d77: movsxd rcx,eax
140ab6d7a: lea    rbx,[rcx*8+0x0]
140ab6d82: mov    rax,QWORD PTR [r15+0x14290]
140ab6d89: mov    rcx,QWORD PTR [rbx+rax*1]
140ab6d8d: mov    rax,QWORD PTR [rcx]
140ab6d90: call   QWORD PTR [rax+0x170]
140ab6d96: test   al,al
140ab6d98: je     0x140ab6dd6
140ab6d9a: mov    rax,QWORD PTR [r15+0x14290]
140ab6da1: mov    rcx,QWORD PTR [rbx+rax*1]
140ab6da5: mov    eax,DWORD PTR [rcx+0x10]
140ab6da8: test   eax,0x400c18
140ab6dad: jne    0x140ab6d60
140ab6daf: test   al,0x20
140ab6db1: jne    0x140ab6d60
140ab6db3: lea    r9,[rbp-0x28]
140ab6db7: lea    r8,[rbp-0x2c]
140ab6dbb: lea    rdx,[rbp-0x30]
140ab6dbf: call   0x140c8baa0
140ab6dc4: mov    rax,QWORD PTR [r15+0x14290]
140ab6dcb: mov    dl,0x1
140ab6dcd: mov    rcx,QWORD PTR [rbx+rax*1]
140ab6dd1: call   0x140c738a0
140ab6dd6: movzx  r12d,WORD PTR [rbp-0x30]
140ab6ddb: mov    WORD PTR [rbp-0x58],r12w
140ab6de0: movzx  r13d,WORD PTR [rbp-0x2c]
140ab6de5: movzx  esi,WORD PTR [rbp-0x28]
140ab6de9: mov    WORD PTR [rbp-0x8],si
140ab6ded: cmp    r12w,di
140ab6df1: je     0x140ab6ffe
140ab6df7: mov    WORD PTR [rsp+0x28],si
140ab6dfc: mov    WORD PTR [rsp+0x20],r13w
140ab6e02: movzx  r9d,r12w
140ab6e06: lea    r8,[rsp+0x60]
140ab6e0b: lea    rdx,[rsp+0x68]
140ab6e10: mov    rcx,r15
140ab6e13: call   0x14007dcd0
140ab6e18: xorps  xmm0,xmm0
140ab6e1b: movdqu XMMWORD PTR [rbp+0xa0],xmm0
140ab6e23: xor    ecx,ecx
140ab6e25: mov    QWORD PTR [rbp+0xb0],rcx
140ab6e2c: mov    rbx,QWORD PTR [r15+0x2b8]
140ab6e33: mov    QWORD PTR [rbp-0x68],rbx
140ab6e37: mov    rax,QWORD PTR [r15+0x2c0]
140ab6e3e: mov    QWORD PTR [rsp+0x78],rax
140ab6e43: movzx  edi,cx
140ab6e46: mov    WORD PTR [rbp-0x78],cx
140ab6e4a: lea    r8,[rsp+0x78]
140ab6e4f: lea    rdx,[rbp-0x47]
140ab6e53: lea    rcx,[rbp-0x68]
140ab6e57: call   0x14006ee20
140ab6e5c: cmp    BYTE PTR [rax],dil
140ab6e5f: jge    0x140ab6f2c
140ab6e65: movzx  esi,WORD PTR [rsp+0x60]
140ab6e6a: movzx  r14d,WORD PTR [rsp+0x68]
140ab6e70: mov    r12d,0xffffffff
140ab6e76: mov    rax,QWORD PTR [rbx]
140ab6e79: test   BYTE PTR [rax+0xc],0xa
140ab6e7d: jne    0x140ab6ef9
140ab6e7f: movzx  r11d,WORD PTR [rax+0x10]
140ab6e84: cmp    r11w,r14w
140ab6e88: jne    0x140ab6ef9
140ab6e8a: cmp    WORD PTR [rax+0x12],si
140ab6e8e: jne    0x140ab6ef9
140ab6e90: cmp    WORD PTR [rax+0x14],r12w
140ab6e95: jne    0x140ab6ef9
140ab6e97: cmp    DWORD PTR [rax+0x18],r12d
140ab6e9b: jne    0x140ab6ef9
140ab6e9d: cmp    DWORD PTR [rax+0x1c],r12d
140ab6ea1: jne    0x140ab6ef9
140ab6ea3: cmp    DWORD PTR [rax+0x4],0x0
140ab6ea7: jbe    0x140ab6ef9
140ab6ea9: cmp    BYTE PTR [rax],0x1
140ab6eac: jne    0x140ab6ef9
140ab6eae: lea    rcx,[r15+0x11b558]
140ab6eb5: movzx  r10d,WORD PTR [rax+0x2]
140ab6eba: mov    r8d,0x5
140ab6ec0: movzx  edx,r10w
140ab6ec4: call   0x1400e35c0
140ab6ec9: test   al,al
140ab6ecb: je     0x140ab6ef9
140ab6ecd: mov    DWORD PTR [rsp+0x20],r12d
140ab6ed2: mov    r9d,r12d
140ab6ed5: mov    r8b,0x1
140ab6ed8: movzx  edx,r11w
140ab6edc: movzx  ecx,r10w
140ab6ee0: call   0x140abd3a0
140ab6ee5: test   al,al
140ab6ee7: jne    0x140ab6ef9
140ab6ee9: lea    rdx,[rbp-0x78]
140ab6eed: lea    rcx,[rbp+0xa0]
140ab6ef4: call   0x14006f4f0
140ab6ef9: add    rbx,0x8
140ab6efd: mov    QWORD PTR [rbp-0x68],rbx
140ab6f01: inc    di
140ab6f04: mov    WORD PTR [rbp-0x78],di
140ab6f08: lea    r8,[rsp+0x78]
140ab6f0d: lea    rdx,[rbp-0x47]
140ab6f11: lea    rcx,[rbp-0x68]
140ab6f15: call   0x14006ee20
140ab6f1a: cmp    BYTE PTR [rax],0x0
140ab6f1d: jl     0x140ab6e76
140ab6f23: movzx  r12d,WORD PTR [rbp-0x58]
140ab6f28: movzx  esi,WORD PTR [rbp-0x8]
140ab6f2c: mov    rcx,QWORD PTR [rbp+0xa8]
140ab6f33: mov    rax,rcx
140ab6f36: mov    rdx,QWORD PTR [rbp+0xa0]
140ab6f3d: sub    rax,rdx
140ab6f40: sar    rax,1
140ab6f43: je     0x140ab6ff2
140ab6f49: nop    DWORD PTR [rax+0x0]
140ab6f50: sub    rcx,rdx
140ab6f53: sar    rcx,1
140ab6f56: call   0x140071f30
140ab6f5b: movsxd rcx,eax
140ab6f5e: mov    rax,QWORD PTR [rbp+0xa0]
140ab6f65: movsx  rcx,WORD PTR [rax+rcx*2]
140ab6f6a: lea    rdi,[rcx*8+0x0]
140ab6f72: mov    rax,QWORD PTR [r15+0x2b8]
140ab6f79: mov    rcx,QWORD PTR [rdi+rax*1]
140ab6f7d: movzx  ecx,WORD PTR [rcx+0x2]
140ab6f81: call   0x140abd500
140ab6f86: movsx  ebx,ax
140ab6f89: mov    ecx,0x64
140ab6f8e: call   0x140071f30
140ab6f93: cmp    eax,ebx
140ab6f95: jl     0x140ab6fa7
140ab6f97: mov    rcx,QWORD PTR [rbp+0xa8]
140ab6f9e: mov    rdx,QWORD PTR [rbp+0xa0]
140ab6fa5: jmp    0x140ab6f50
140ab6fa7: mov    rcx,QWORD PTR [r15+0x2b8]
140ab6fae: mov    rcx,QWORD PTR [rdi+rcx*1]
140ab6fb2: call   0x141435fb0
140ab6fb7: mov    rax,QWORD PTR [r15+0x2b8]
140ab6fbe: mov    rcx,QWORD PTR [rdi+rax*1]
140ab6fc2: lea    rax,[rcx+0x10]
140ab6fc6: mov    QWORD PTR [rsp+0x38],rcx
140ab6fcb: mov    QWORD PTR [rsp+0x30],rax
140ab6fd0: mov    DWORD PTR [rsp+0x28],0x2
140ab6fd8: mov    WORD PTR [rsp+0x20],si
140ab6fdd: movzx  r9d,r13w
140ab6fe1: movzx  r8d,r12w
140ab6fe5: movzx  edx,WORD PTR [rcx+0x2]
140ab6fe9: mov    rcx,r15
140ab6fec: call   0x1414c6320
140ab6ff1: nop
140ab6ff2: lea    rcx,[rbp+0xa0]
140ab6ff9: call   0x14006f7b0
140ab6ffe: mov    ecx,DWORD PTR [r15+0x116bec]
140ab7005: imul   ecx,DWORD PTR [r15+0x116bf0]
140ab700d: mov    eax,0x2572fb07
140ab7012: imul   ecx
140ab7014: sar    edx,0x9
140ab7017: mov    ecx,edx
140ab7019: shr    ecx,0x1f
140ab701c: inc    ecx
140ab701e: add    ecx,edx
140ab7020: mov    edi,0x64
140ab7025: cmp    DWORD PTR [rbp-0x70],ecx
140ab7028: jge    0x140ab72d1
140ab702e: movzx  ebx,di
140ab7031: mov    ecx,DWORD PTR [r15+0x116bec]
140ab7038: call   0x140071f30
140ab703d: mov    esi,eax
140ab703f: mov    DWORD PTR [rbp-0x70],eax
140ab7042: mov    ecx,DWORD PTR [r15+0x116bf0]
140ab7049: call   0x140071f30
140ab704e: mov    r14d,eax
140ab7051: movzx  r8d,ax
140ab7055: movzx  edx,si
140ab7058: mov    rcx,r15
140ab705b: call   0x14149fb70
140ab7060: movzx  r13d,ax
140ab7064: dec    bx
140ab7067: movzx  r9d,ax
140ab706b: movzx  r8d,r14w
140ab706f: movzx  edx,si
140ab7072: mov    rcx,r15
140ab7075: call   0x14007dc40
140ab707a: bt     eax,0xe
140ab707e: jb     0x140ab708a
140ab7080: test   bx,bx
140ab7083: jg     0x140ab7031
140ab7085: jmp    0x140ab72d1
140ab708a: test   bx,bx
140ab708d: jle    0x140ab72d1
140ab7093: mov    WORD PTR [rsp+0x28],r13w
140ab7099: mov    WORD PTR [rsp+0x20],r14w
140ab709f: movzx  r9d,si
140ab70a3: lea    r8,[rsp+0x68]
140ab70a8: lea    rdx,[rsp+0x60]
140ab70ad: mov    rcx,r15
140ab70b0: call   0x14007dcd0
140ab70b5: xorps  xmm0,xmm0
140ab70b8: movdqu XMMWORD PTR [rbp+0xb8],xmm0
140ab70c0: xor    ecx,ecx
140ab70c2: mov    QWORD PTR [rbp+0xc8],rcx
140ab70c9: mov    rbx,QWORD PTR [r15+0x2b8]
140ab70d0: mov    QWORD PTR [rbp-0x50],rbx
140ab70d4: mov    rax,QWORD PTR [r15+0x2c0]
140ab70db: mov    QWORD PTR [rsp+0x78],rax
140ab70e0: mov    r12d,ecx
140ab70e3: mov    DWORD PTR [rbp-0x68],ecx
140ab70e6: lea    r8,[rsp+0x78]
140ab70eb: lea    rdx,[rbp-0x46]
140ab70ef: lea    rcx,[rbp-0x50]
140ab70f3: call   0x14006ee20
140ab70f8: cmp    BYTE PTR [rax],r12b
140ab70fb: jge    0x140ab71f7
140ab7101: mov    rdi,QWORD PTR [rbx]
140ab7104: test   BYTE PTR [rdi+0xc],0xa
140ab7108: jne    0x140ab71cd
140ab710e: movzx  eax,WORD PTR [rsp+0x60]
140ab7113: cmp    WORD PTR [rdi+0x10],ax
140ab7117: jne    0x140ab71cd
140ab711d: movzx  eax,WORD PTR [rsp+0x68]
140ab7122: cmp    WORD PTR [rdi+0x12],ax
140ab7126: jne    0x140ab71cd
140ab712c: cmp    WORD PTR [rdi+0x14],0xffff
140ab7131: jne    0x140ab71cd
140ab7137: cmp    DWORD PTR [rdi+0x18],0xffffffff
140ab713b: jne    0x140ab71cd
140ab7141: cmp    DWORD PTR [rdi+0x1c],0xffffffff
140ab7145: jne    0x140ab71cd
140ab714b: cmp    DWORD PTR [rdi+0x4],0x0
140ab714f: jbe    0x140ab71cd
140ab7151: cmp    BYTE PTR [rdi],0x1
140ab7154: jne    0x140ab71cd
140ab7156: lea    rcx,[r15+0x11b558]
140ab715d: movzx  r10d,WORD PTR [rdi+0x2]
140ab7162: mov    r8d,0x4
140ab7168: movzx  edx,r10w
140ab716c: call   0x1400e35c0
140ab7171: test   al,al
140ab7173: je     0x140ab71cd
140ab7175: mov    r8d,0xffffffff
140ab717b: mov    WORD PTR [rsp+0x28],r13w
140ab7181: mov    WORD PTR [rsp+0x20],r14w
140ab7187: movzx  r9d,si
140ab718b: movzx  edx,r10w
140ab718f: mov    rcx,r15
140ab7192: call   0x1414c95a0
140ab7197: test   al,al
140ab7199: je     0x140ab71cd
140ab719b: mov    DWORD PTR [rsp+0x20],0x23
140ab71a3: mov    r9d,0xffffffff
140ab71a9: mov    r8b,0x1
140ab71ac: movzx  edx,WORD PTR [rdi+0x10]
140ab71b0: movzx  ecx,WORD PTR [rdi+0x2]
140ab71b4: call   0x140abd3a0
140ab71b9: test   al,al
140ab71bb: jne    0x140ab71cd
140ab71bd: lea    rdx,[rbp-0x68]
140ab71c1: lea    rcx,[rbp+0xb8]
140ab71c8: call   0x14006f410
140ab71cd: add    rbx,0x8
140ab71d1: mov    QWORD PTR [rbp-0x50],rbx
140ab71d5: inc    r12d
140ab71d8: mov    DWORD PTR [rbp-0x68],r12d
140ab71dc: lea    r8,[rsp+0x78]
140ab71e1: lea    rdx,[rbp-0x46]
140ab71e5: lea    rcx,[rbp-0x50]
140ab71e9: call   0x14006ee20
140ab71ee: cmp    BYTE PTR [rax],0x0
140ab71f1: jl     0x140ab7101
140ab71f7: mov    rcx,QWORD PTR [rbp+0xc0]
140ab71fe: mov    rax,rcx
140ab7201: mov    rdx,QWORD PTR [rbp+0xb8]
140ab7208: sub    rax,rdx
140ab720b: sar    rax,0x2
140ab720f: test   rax,rax
140ab7212: je     0x140ab72c0
140ab7218: mov    esi,0x64
140ab721d: nop    DWORD PTR [rax]
140ab7220: sub    rcx,rdx
140ab7223: sar    rcx,0x2
140ab7227: call   0x140071f30
140ab722c: movsxd rcx,eax
140ab722f: mov    rax,QWORD PTR [rbp+0xb8]
140ab7236: movsxd rcx,DWORD PTR [rax+rcx*4]
140ab723a: lea    rdi,[rcx*8+0x0]
140ab7242: mov    rax,QWORD PTR [r15+0x2b8]
140ab7249: mov    rcx,QWORD PTR [rdi+rax*1]
140ab724d: movzx  ecx,WORD PTR [rcx+0x2]
140ab7251: call   0x140abd500
140ab7256: movsx  ebx,ax
140ab7259: mov    ecx,esi
140ab725b: call   0x140071f30
140ab7260: cmp    eax,ebx
140ab7262: jl     0x140ab7274
140ab7264: mov    rcx,QWORD PTR [rbp+0xc0]
140ab726b: mov    rdx,QWORD PTR [rbp+0xb8]
140ab7272: jmp    0x140ab7220
140ab7274: mov    rcx,QWORD PTR [r15+0x2b8]
140ab727b: mov    rcx,QWORD PTR [rdi+rcx*1]
140ab727f: call   0x141435fb0
140ab7284: mov    rax,QWORD PTR [r15+0x2b8]
140ab728b: mov    rcx,QWORD PTR [rdi+rax*1]
140ab728f: lea    rax,[rcx+0x10]
140ab7293: mov    QWORD PTR [rsp+0x38],rcx
140ab7298: mov    QWORD PTR [rsp+0x30],rax
140ab729d: mov    DWORD PTR [rsp+0x28],0x1
140ab72a5: mov    WORD PTR [rsp+0x20],r13w
140ab72ab: movzx  r9d,r14w
140ab72af: mov    r8d,DWORD PTR [rbp-0x70]
140ab72b3: movzx  edx,WORD PTR [rcx+0x2]
140ab72b7: mov    rcx,r15
140ab72ba: call   0x1414c6320
140ab72bf: nop
140ab72c0: lea    rcx,[rbp+0xb8]
140ab72c7: call   0x14006f750
140ab72cc: mov    edi,0x64
140ab72d1: mov    ecx,DWORD PTR [r15+0x116bec]
140ab72d8: imul   ecx,DWORD PTR [r15+0x116bf0]
140ab72e0: mov    eax,0x57619f1
140ab72e5: imul   ecx
140ab72e7: sar    edx,0x7
140ab72ea: mov    ecx,edx
140ab72ec: shr    ecx,0x1f
140ab72ef: inc    ecx
140ab72f1: add    ecx,edx
140ab72f3: cmp    DWORD PTR [rbp+0x8],ecx
140ab72f6: jge    0x140ab766c
140ab72fc: movzx  ebx,di
140ab72ff: nop
140ab7300: mov    ecx,DWORD PTR [r15+0x116bec]
140ab7307: call   0x140071f30
140ab730c: mov    esi,eax
140ab730e: mov    DWORD PTR [rbp-0x70],eax
140ab7311: mov    ecx,DWORD PTR [r15+0x116bf0]
140ab7318: call   0x140071f30
140ab731d: mov    r14d,eax
140ab7320: mov    ecx,0x2
140ab7325: call   0x140071f30
140ab732a: movzx  r8d,r14w
140ab732e: movzx  edx,si
140ab7331: mov    rcx,r15
140ab7334: test   eax,eax
140ab7336: je     0x140ab733f
140ab7338: call   0x14149fd10
140ab733d: jmp    0x140ab7344
140ab733f: call   0x14149fb70
140ab7344: movzx  r12d,ax
140ab7348: dec    bx
140ab734b: movzx  r9d,ax
140ab734f: movzx  r8d,r14w
140ab7353: movzx  edx,si
140ab7356: mov    rcx,r15
140ab7359: call   0x14007dc40
140ab735e: bt     eax,0xe
140ab7362: jae    0x140ab738f
140ab7364: movzx  r8d,r14w
140ab7368: movzx  edx,si
140ab736b: mov    rcx,r15
140ab736e: call   0x140247d80
140ab7373: test   al,al
140ab7375: jne    0x140ab739d
140ab7377: lea    r9d,[r12-0x1]
140ab737c: movzx  r8d,r14w
140ab7380: movzx  edx,si
140ab7383: mov    rcx,r15
140ab7386: call   0x140247d80
140ab738b: test   al,al
140ab738d: jne    0x140ab739d
140ab738f: test   bx,bx
140ab7392: jg     0x140ab7300
140ab7398: jmp    0x140ab766c
140ab739d: test   bx,bx
140ab73a0: jle    0x140ab766c
140ab73a6: mov    WORD PTR [rsp+0x28],r12w
140ab73ac: mov    WORD PTR [rsp+0x20],r14w
140ab73b2: movzx  r9d,si
140ab73b6: lea    r8,[rsp+0x68]
140ab73bb: lea    rdx,[rsp+0x60]
140ab73c0: mov    rcx,r15
140ab73c3: call   0x14007dcd0
140ab73c8: xorps  xmm0,xmm0
140ab73cb: movdqu XMMWORD PTR [rbp+0xd0],xmm0
140ab73d3: xor    ecx,ecx
140ab73d5: mov    QWORD PTR [rbp+0xe0],rcx
140ab73dc: mov    rbx,QWORD PTR [r15+0x2b8]
140ab73e3: mov    QWORD PTR [rbp+0x8],rbx
140ab73e7: mov    rax,QWORD PTR [r15+0x2c0]
140ab73ee: mov    QWORD PTR [rsp+0x78],rax
140ab73f3: mov    r13d,ecx
140ab73f6: mov    DWORD PTR [rbp-0x68],ecx
140ab73f9: lea    r8,[rsp+0x78]
140ab73fe: lea    rdx,[rbp-0x45]
140ab7402: lea    rcx,[rbp+0x8]
140ab7406: call   0x14006ee20
140ab740b: cmp    BYTE PTR [rax],r13b
140ab740e: jge    0x140ab758f
140ab7414: nop    DWORD PTR [rax+0x0]
140ab7418: nop    DWORD PTR [rax+rax*1+0x0]
140ab7420: mov    rdi,QWORD PTR [rbx]
140ab7423: test   BYTE PTR [rdi+0xc],0xa
140ab7427: jne    0x140ab7565
140ab742d: movzx  eax,WORD PTR [rsp+0x60]
140ab7432: cmp    WORD PTR [rdi+0x10],ax
140ab7436: jne    0x140ab7565
140ab743c: movzx  eax,WORD PTR [rsp+0x68]
140ab7441: cmp    WORD PTR [rdi+0x12],ax
140ab7445: jne    0x140ab7565
140ab744b: cmp    WORD PTR [rdi+0x14],0xffff
140ab7450: jne    0x140ab7565
140ab7456: cmp    DWORD PTR [rdi+0x18],0xffffffff
140ab745a: jne    0x140ab7565
140ab7460: cmp    DWORD PTR [rdi+0x1c],0xffffffff
140ab7464: jne    0x140ab7565
140ab746a: cmp    DWORD PTR [rdi+0x4],0x0
140ab746e: jbe    0x140ab7565
140ab7474: cmp    BYTE PTR [rdi],0x1
140ab7477: jne    0x140ab7565
140ab747d: lea    r11,[r15+0x11b558]
140ab7484: movzx  r10d,WORD PTR [rdi+0x2]
140ab7489: mov    r8d,0x2d
140ab748f: movzx  edx,r10w
140ab7493: mov    rcx,r11
140ab7496: call   0x1400e35c0
140ab749b: test   al,al
140ab749d: jne    0x140ab750d
140ab749f: mov    r8d,0x2e
140ab74a5: movzx  edx,r10w
140ab74a9: mov    rcx,r11
140ab74ac: call   0x1400e35c0
140ab74b1: test   al,al
140ab74b3: jne    0x140ab750d
140ab74b5: mov    r8d,0x2f
140ab74bb: movzx  edx,r10w
140ab74bf: mov    rcx,r11
140ab74c2: call   0x1400e35c0
140ab74c7: test   al,al
140ab74c9: jne    0x140ab750d
140ab74cb: mov    r8d,0x30
140ab74d1: movzx  edx,r10w
140ab74d5: mov    rcx,r11
140ab74d8: call   0x1400e35c0
140ab74dd: test   al,al
140ab74df: jne    0x140ab750d
140ab74e1: mov    r8d,0x31
140ab74e7: movzx  edx,r10w
140ab74eb: mov    rcx,r11
140ab74ee: call   0x1400e35c0
140ab74f3: test   al,al
140ab74f5: jne    0x140ab750d
140ab74f7: mov    r8d,0x32
140ab74fd: movzx  edx,r10w
140ab7501: mov    rcx,r11
140ab7504: call   0x1400e35c0
140ab7509: test   al,al
140ab750b: je     0x140ab7565
140ab750d: mov    r8d,0xffffffff
140ab7513: mov    WORD PTR [rsp+0x28],r12w
140ab7519: mov    WORD PTR [rsp+0x20],r14w
140ab751f: movzx  r9d,si
140ab7523: movzx  edx,r10w
140ab7527: mov    rcx,r15
140ab752a: call   0x1414c95a0
140ab752f: test   al,al
140ab7531: je     0x140ab7565
140ab7533: mov    DWORD PTR [rsp+0x20],0x23
140ab753b: mov    r9d,0xffffffff
140ab7541: mov    r8b,0x1
140ab7544: movzx  edx,WORD PTR [rdi+0x10]
140ab7548: movzx  ecx,WORD PTR [rdi+0x2]
140ab754c: call   0x140abd3a0
140ab7551: test   al,al
140ab7553: jne    0x140ab7565
140ab7555: lea    rdx,[rbp-0x68]
140ab7559: lea    rcx,[rbp+0xd0]
140ab7560: call   0x14006f410
140ab7565: add    rbx,0x8
140ab7569: mov    QWORD PTR [rbp+0x8],rbx
140ab756d: inc    r13d
140ab7570: mov    DWORD PTR [rbp-0x68],r13d
140ab7574: lea    r8,[rsp+0x78]
140ab7579: lea    rdx,[rbp-0x45]
140ab757d: lea    rcx,[rbp+0x8]
140ab7581: call   0x14006ee20
140ab7586: cmp    BYTE PTR [rax],0x0
140ab7589: jl     0x140ab7420
140ab758f: mov    rcx,QWORD PTR [rbp+0xd8]
140ab7596: mov    rax,rcx
140ab7599: mov    rdx,QWORD PTR [rbp+0xd0]
140ab75a0: sub    rax,rdx
140ab75a3: sar    rax,0x2
140ab75a7: test   rax,rax
140ab75aa: je     0x140ab7660
140ab75b0: mov    esi,0x64
140ab75b5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
140ab75c0: sub    rcx,rdx
140ab75c3: sar    rcx,0x2
140ab75c7: call   0x140071f30
140ab75cc: movsxd rcx,eax
140ab75cf: mov    rax,QWORD PTR [rbp+0xd0]
140ab75d6: movsxd rcx,DWORD PTR [rax+rcx*4]
140ab75da: lea    rdi,[rcx*8+0x0]
140ab75e2: mov    rax,QWORD PTR [r15+0x2b8]
140ab75e9: mov    rcx,QWORD PTR [rdi+rax*1]
140ab75ed: movzx  ecx,WORD PTR [rcx+0x2]
140ab75f1: call   0x140abd500
140ab75f6: movsx  ebx,ax
140ab75f9: mov    ecx,esi
140ab75fb: call   0x140071f30
140ab7600: cmp    eax,ebx
140ab7602: jl     0x140ab7614
140ab7604: mov    rcx,QWORD PTR [rbp+0xd8]
140ab760b: mov    rdx,QWORD PTR [rbp+0xd0]
140ab7612: jmp    0x140ab75c0
140ab7614: mov    rcx,QWORD PTR [r15+0x2b8]
140ab761b: mov    rcx,QWORD PTR [rcx+rdi*1]
140ab761f: call   0x141435fb0
140ab7624: mov    rax,QWORD PTR [r15+0x2b8]
140ab762b: mov    rcx,QWORD PTR [rdi+rax*1]
140ab762f: lea    rax,[rcx+0x10]
140ab7633: mov    QWORD PTR [rsp+0x38],rcx
140ab7638: mov    QWORD PTR [rsp+0x30],rax
140ab763d: mov    DWORD PTR [rsp+0x28],0x3
140ab7645: mov    WORD PTR [rsp+0x20],r12w
140ab764b: movzx  r9d,r14w
140ab764f: mov    r8d,DWORD PTR [rbp-0x70]
140ab7653: movzx  edx,WORD PTR [rcx+0x2]
140ab7657: mov    rcx,r15
140ab765a: call   0x1414c6320
140ab765f: nop
140ab7660: lea    rcx,[rbp+0xd0]
140ab7667: call   0x14006f750
140ab766c: xor    r14d,r14d
140ab766f: mov    WORD PTR [rsp+0x60],r14w
140ab7675: mov    rdx,QWORD PTR [r15+0x26dc00]
140ab767c: mov    rax,QWORD PTR [r15+0x26dc08]
140ab7683: sub    rax,rdx
140ab7686: sar    rax,0x3
140ab768a: test   rax,rax
140ab768d: je     0x140ab8056
140ab7693: mov    ecx,r14d
140ab7696: data16 nop WORD PTR [rax+rax*1+0x0]
140ab76a0: mov    rdi,QWORD PTR [rdx+rcx*8]
140ab76a4: mov    rax,QWORD PTR [r15+0x26dc18]
140ab76ab: movzx  r13d,WORD PTR [rax+rcx*2]
140ab76b0: mov    WORD PTR [rbp-0x58],r13w
140ab76b5: mov    rax,QWORD PTR [r15+0x26dc30]
140ab76bc: movzx  r12d,WORD PTR [rax+rcx*2]
140ab76c1: mov    WORD PTR [rsp+0x68],r12w
140ab76c7: mov    rax,QWORD PTR [r15+0x26dc48]
140ab76ce: movzx  esi,WORD PTR [rax+rcx*2]
140ab76d2: mov    WORD PTR [rbp-0x78],si
140ab76d6: mov    rax,QWORD PTR [r15+0x26dc60]
140ab76dd: mov    eax,DWORD PTR [rax+rcx*4]
140ab76e0: mov    DWORD PTR [rbp-0x70],eax
140ab76e3: mov    rax,QWORD PTR [rdi]
140ab76e6: mov    rcx,rdi
140ab76e9: call   QWORD PTR [rax+0x30]
140ab76ec: mov    QWORD PTR [rbp+0x50],rax
140ab76f0: test   rax,rax
140ab76f3: je     0x140ab8027
140ab76f9: mov    ebx,r14d
140ab76fc: mov    r11d,r14d
140ab76ff: mov    DWORD PTR [rbp-0x68],r14d
140ab7703: mov    DWORD PTR [rbp-0x54],r14d
140ab7707: xor    r8d,r8d
140ab770a: mov    rdx,QWORD PTR [r15+0x90]
140ab7711: mov    r9,QWORD PTR [r15+0x98]
140ab7718: sub    r9,rdx
140ab771b: sar    r9,0x3
140ab771f: test   r9,r9
140ab7722: je     0x140ab7795
140ab7724: mov    r10d,DWORD PTR [rbp-0x70]
140ab7728: nop    DWORD PTR [rax+rax*1+0x0]
140ab7730: mov    rax,QWORD PTR [rdx]
140ab7733: cmp    WORD PTR [rax+0x20],r13w
140ab7738: jne    0x140ab777e
140ab773a: cmp    WORD PTR [rax+0x22],r12w
140ab773f: jne    0x140ab777e
140ab7741: cmp    WORD PTR [rax+0x24],si
140ab7745: jne    0x140ab777e
140ab7747: cmp    DWORD PTR [rax+0x28],r10d
140ab774b: jne    0x140ab777e
140ab774d: cmp    DWORD PTR [rax+0x2c],0xffffffff
140ab7751: jne    0x140ab777e
140ab7753: test   BYTE PTR [rax+0x18],0x8
140ab7757: jne    0x140ab777e
140ab7759: cmp    QWORD PTR [rax+0x10],0x0
140ab775e: jne    0x140ab777e
140ab7760: movsx  ecx,WORD PTR [rax+0x38]
140ab7764: test   ecx,ecx
140ab7766: je     0x140ab777c
140ab7768: sub    ecx,0x1
140ab776b: je     0x140ab7777
140ab776d: cmp    ecx,0x1
140ab7770: jne    0x140ab777e
140ab7772: inc    r14d
140ab7775: jmp    0x140ab777e
140ab7777: inc    r11d
140ab777a: jmp    0x140ab777e
140ab777c: inc    ebx
140ab777e: inc    r8d
140ab7781: add    rdx,0x8
140ab7785: movsxd rax,r8d
140ab7788: cmp    rax,r9
140ab778b: jb     0x140ab7730
140ab778d: mov    DWORD PTR [rbp-0x68],r11d
140ab7791: mov    DWORD PTR [rbp-0x54],r14d
140ab7795: lea    rcx,[rdi+0x8]
140ab7799: mov    edx,0x3
140ab779e: call   0x140071f90
140ab77a3: test   al,al
140ab77a5: je     0x140ab7d0d
140ab77ab: cmp    DWORD PTR [rbp-0x38],ebx
140ab77ae: jle    0x140ab7a31
140ab77b4: mov    ecx,0x1e
140ab77b9: call   0x140071f30
140ab77be: test   eax,eax
140ab77c0: jne    0x140ab7a31
140ab77c6: cmp    ebx,0xa
140ab77c9: jge    0x140ab7a31
140ab77cf: nop
140ab77d0: mov    rcx,QWORD PTR [r15+0x14280]
140ab77d7: sub    rcx,QWORD PTR [r15+0x14278]
140ab77de: sar    rcx,0x3
140ab77e2: call   0x140071f30
140ab77e7: movsxd rsi,eax
140ab77ea: mov    QWORD PTR [rbp+0x0],rsi
140ab77ee: mov    rax,QWORD PTR [r15+0x14278]
140ab77f5: mov    r9,QWORD PTR [rax+rsi*8]
140ab77f9: mov    eax,DWORD PTR [r9+0x10]
140ab77fd: and    eax,0x400c11
140ab7802: cmp    eax,0x1
140ab7805: jne    0x140ab77d0
140ab7807: movzx  eax,WORD PTR [r9+0xc]
140ab780c: movzx  ecx,WORD PTR [r9+0xa]
140ab7811: mov    WORD PTR [rsp+0x28],ax
140ab7816: mov    WORD PTR [rsp+0x20],cx
140ab781b: movzx  r9d,WORD PTR [r9+0x8]
140ab7820: lea    r8,[rbp+0x78]
140ab7824: lea    rdx,[rbp+0x7c]
140ab7828: mov    rcx,r15
140ab782b: call   0x14007dcd0
140ab7830: xorps  xmm0,xmm0
140ab7833: movdqu XMMWORD PTR [rbp+0xe8],xmm0
140ab783b: xor    ecx,ecx
140ab783d: mov    QWORD PTR [rbp+0xf8],rcx
140ab7844: mov    rbx,QWORD PTR [r15+0x2b8]
140ab784b: mov    QWORD PTR [rbp-0x8],rbx
140ab784f: mov    rax,QWORD PTR [r15+0x2c0]
140ab7856: mov    QWORD PTR [rsp+0x78],rax
140ab785b: mov    edi,ecx
140ab785d: mov    DWORD PTR [rbp-0x50],ecx
140ab7860: lea    r8,[rsp+0x78]
140ab7865: lea    rdx,[rbp-0x44]
140ab7869: lea    rcx,[rbp-0x8]
140ab786d: call   0x14006ee20
140ab7872: cmp    BYTE PTR [rax],dil
140ab7875: jge    0x140ab7940
140ab787b: movzx  esi,WORD PTR [rbp-0x78]
140ab787f: mov    r14d,DWORD PTR [rbp-0x70]
140ab7883: mov    rax,QWORD PTR [rbx]
140ab7886: test   BYTE PTR [rax+0xc],0xa
140ab788a: jne    0x140ab7910
140ab7890: movzx  r11d,WORD PTR [rax+0x10]
140ab7895: cmp    r11w,r13w
140ab7899: jne    0x140ab7910
140ab789b: cmp    WORD PTR [rax+0x12],r12w
140ab78a0: jne    0x140ab7910
140ab78a2: cmp    WORD PTR [rax+0x14],si
140ab78a6: jne    0x140ab7910
140ab78a8: cmp    DWORD PTR [rax+0x18],r14d
140ab78ac: jne    0x140ab7910
140ab78ae: cmp    DWORD PTR [rax+0x1c],0xffffffff
140ab78b2: jne    0x140ab7910
140ab78b4: cmp    DWORD PTR [rax+0x4],0x0
140ab78b8: jbe    0x140ab7910
140ab78ba: cmp    BYTE PTR [rax],0x1
140ab78bd: jne    0x140ab7910
140ab78bf: lea    rcx,[r15+0x11b558]
140ab78c6: movzx  r10d,WORD PTR [rax+0x2]
140ab78cb: mov    r8d,0x3
140ab78d1: movzx  edx,r10w
140ab78d5: call   0x1400e35c0
140ab78da: test   al,al
140ab78dc: je     0x140ab7910
140ab78de: mov    DWORD PTR [rsp+0x20],0x23
140ab78e6: mov    r9d,0xffffffff
140ab78ec: mov    r8b,0x1
140ab78ef: movzx  edx,r11w
140ab78f3: movzx  ecx,r10w
140ab78f7: call   0x140abd3a0
140ab78fc: test   al,al
140ab78fe: jne    0x140ab7910
140ab7900: lea    rdx,[rbp-0x50]
140ab7904: lea    rcx,[rbp+0xe8]
140ab790b: call   0x14006f410
140ab7910: add    rbx,0x8
140ab7914: mov    QWORD PTR [rbp-0x8],rbx
140ab7918: inc    edi
140ab791a: mov    DWORD PTR [rbp-0x50],edi
140ab791d: lea    r8,[rsp+0x78]
140ab7922: lea    rdx,[rbp-0x44]
140ab7926: lea    rcx,[rbp-0x8]
140ab792a: call   0x14006ee20
140ab792f: cmp    BYTE PTR [rax],0x0
140ab7932: jl     0x140ab7883
140ab7938: mov    rsi,QWORD PTR [rbp+0x0]
140ab793c: mov    r14d,DWORD PTR [rbp-0x54]
140ab7940: mov    rcx,QWORD PTR [rbp+0xf0]
140ab7947: mov    rax,rcx
140ab794a: mov    rdx,QWORD PTR [rbp+0xe8]
140ab7951: sub    rax,rdx
140ab7954: sar    rax,0x2
140ab7958: test   rax,rax
140ab795b: je     0x140ab7a25
140ab7961: mov    r13d,0x64
140ab7967: nop    WORD PTR [rax+rax*1+0x0]
140ab7970: sub    rcx,rdx
140ab7973: sar    rcx,0x2
140ab7977: call   0x140071f30
140ab797c: movsxd rcx,eax
140ab797f: mov    rax,QWORD PTR [rbp+0xe8]
140ab7986: movsxd rcx,DWORD PTR [rax+rcx*4]
140ab798a: lea    rdi,[rcx*8+0x0]
140ab7992: mov    rax,QWORD PTR [r15+0x2b8]
140ab7999: mov    rcx,QWORD PTR [rdi+rax*1]
140ab799d: movzx  ecx,WORD PTR [rcx+0x2]
140ab79a1: call   0x140abd500
140ab79a6: movsx  ebx,ax
140ab79a9: mov    ecx,r13d
140ab79ac: call   0x140071f30
140ab79b1: cmp    eax,ebx
140ab79b3: jl     0x140ab79c5
140ab79b5: mov    rcx,QWORD PTR [rbp+0xf0]
140ab79bc: mov    rdx,QWORD PTR [rbp+0xe8]
140ab79c3: jmp    0x140ab7970
140ab79c5: mov    rcx,QWORD PTR [r15+0x2b8]
140ab79cc: mov    rcx,QWORD PTR [rdi+rcx*1]
140ab79d0: call   0x141435fb0
140ab79d5: mov    rax,QWORD PTR [r15+0x2b8]
140ab79dc: mov    rdx,QWORD PTR [rdi+rax*1]
140ab79e0: lea    r8,[rdx+0x10]
140ab79e4: mov    rax,QWORD PTR [r15+0x14278]
140ab79eb: mov    rcx,QWORD PTR [rax+rsi*8]
140ab79ef: movzx  eax,WORD PTR [rcx+0xc]
140ab79f3: mov    QWORD PTR [rsp+0x38],rdx
140ab79f8: mov    QWORD PTR [rsp+0x30],r8
140ab79fd: xor    r8d,r8d
140ab7a00: mov    DWORD PTR [rsp+0x28],r8d
140ab7a05: mov    WORD PTR [rsp+0x20],ax
140ab7a0a: movzx  r9d,WORD PTR [rcx+0xa]
140ab7a0f: movzx  r8d,WORD PTR [rcx+0x8]
140ab7a14: movzx  edx,WORD PTR [rdx+0x2]
140ab7a18: mov    rcx,r15
140ab7a1b: call   0x1414c6320
140ab7a20: movzx  r13d,WORD PTR [rbp-0x58]
140ab7a25: lea    rcx,[rbp+0xe8]
140ab7a2c: call   0x14006f750
140ab7a31: cmp    r14d,0x1e
140ab7a35: jge    0x140ab7d0d
140ab7a3b: lea    eax,[r14+r14*1]
140ab7a3f: cmp    eax,DWORD PTR [rsp+0x70]
140ab7a43: jge    0x140ab7d0d
140ab7a49: mov    edi,0xffff8ad0
140ab7a4e: mov    WORD PTR [rbp-0x24],di
140ab7a52: mov    WORD PTR [rbp-0x20],di
140ab7a56: mov    WORD PTR [rbp-0x10],di
140ab7a5a: nop    WORD PTR [rax+rax*1+0x0]
140ab7a60: mov    rcx,QWORD PTR [r15+0x14298]
140ab7a67: sub    rcx,QWORD PTR [r15+0x14290]
140ab7a6e: sar    rcx,0x3
140ab7a72: call   0x140071f30
140ab7a77: movsxd rcx,eax
140ab7a7a: lea    rbx,[rcx*8+0x0]
140ab7a82: mov    rax,QWORD PTR [r15+0x14290]
140ab7a89: mov    rcx,QWORD PTR [rbx+rax*1]
140ab7a8d: mov    rax,QWORD PTR [rcx]
140ab7a90: call   QWORD PTR [rax+0x170]
140ab7a96: test   al,al
140ab7a98: je     0x140ab7ad6
140ab7a9a: mov    rax,QWORD PTR [r15+0x14290]
140ab7aa1: mov    rcx,QWORD PTR [rbx+rax*1]
140ab7aa5: mov    eax,DWORD PTR [rcx+0x10]
140ab7aa8: test   eax,0x400c18
140ab7aad: jne    0x140ab7a60
140ab7aaf: test   al,0x20
140ab7ab1: jne    0x140ab7a60
140ab7ab3: lea    r9,[rbp-0x10]
140ab7ab7: lea    r8,[rbp-0x20]
140ab7abb: lea    rdx,[rbp-0x24]
140ab7abf: call   0x140c8baa0
140ab7ac4: mov    rax,QWORD PTR [r15+0x14290]
140ab7acb: mov    dl,0x1
140ab7acd: mov    rcx,QWORD PTR [rbx+rax*1]
140ab7ad1: call   0x140c738a0
140ab7ad6: movzx  esi,WORD PTR [rbp-0x24]
140ab7ada: mov    WORD PTR [rbp-0x8],si
140ab7ade: movzx  r14d,WORD PTR [rbp-0x20]
140ab7ae3: mov    WORD PTR [rbp-0x54],r14w
140ab7ae8: movzx  r12d,WORD PTR [rbp-0x10]
140ab7aed: mov    WORD PTR [rbp-0x50],r12w
140ab7af2: cmp    si,di
140ab7af5: je     0x140ab7d0d
140ab7afb: mov    WORD PTR [rsp+0x28],r12w
140ab7b01: mov    WORD PTR [rsp+0x20],r14w
140ab7b07: movzx  r9d,si
140ab7b0b: lea    r8,[rbp+0x80]
140ab7b12: lea    rdx,[rbp+0x8]
140ab7b16: mov    rcx,r15
140ab7b19: call   0x14007dcd0
140ab7b1e: xorps  xmm0,xmm0
140ab7b21: movdqu XMMWORD PTR [rbp+0x100],xmm0
140ab7b29: xor    ecx,ecx
140ab7b2b: mov    QWORD PTR [rbp+0x110],rcx
140ab7b32: mov    rbx,QWORD PTR [r15+0x2b8]
140ab7b39: mov    QWORD PTR [rsp+0x78],rbx
140ab7b3e: mov    rax,QWORD PTR [r15+0x2c0]
140ab7b45: mov    QWORD PTR [rbp+0x0],rax
140ab7b49: movzx  edi,cx
140ab7b4c: mov    WORD PTR [rsp+0x64],cx
140ab7b51: lea    r8,[rbp+0x0]
140ab7b55: lea    rdx,[rbp-0x43]
140ab7b59: lea    rcx,[rsp+0x78]
140ab7b5e: call   0x14006ee20
140ab7b63: cmp    BYTE PTR [rax],dil
140ab7b66: jge    0x140ab7c3e
140ab7b6c: movzx  esi,WORD PTR [rsp+0x68]
140ab7b71: movzx  r14d,WORD PTR [rbp-0x78]
140ab7b76: mov    r12d,DWORD PTR [rbp-0x70]
140ab7b7a: nop    WORD PTR [rax+rax*1+0x0]
140ab7b80: mov    rax,QWORD PTR [rbx]
140ab7b83: test   BYTE PTR [rax+0xc],0xa
140ab7b87: jne    0x140ab7c08
140ab7b89: movzx  r11d,WORD PTR [rax+0x10]
140ab7b8e: cmp    r11w,r13w
140ab7b92: jne    0x140ab7c08
140ab7b94: cmp    WORD PTR [rax+0x12],si
140ab7b98: jne    0x140ab7c08
140ab7b9a: cmp    WORD PTR [rax+0x14],r14w
140ab7b9f: jne    0x140ab7c08
140ab7ba1: cmp    DWORD PTR [rax+0x18],r12d
140ab7ba5: jne    0x140ab7c08
140ab7ba7: cmp    DWORD PTR [rax+0x1c],0xffffffff
140ab7bab: jne    0x140ab7c08
140ab7bad: cmp    DWORD PTR [rax+0x4],0x0
140ab7bb1: jbe    0x140ab7c08
140ab7bb3: cmp    BYTE PTR [rax],0x1
140ab7bb6: jne    0x140ab7c08
140ab7bb8: lea    rcx,[r15+0x11b558]
140ab7bbf: movzx  r10d,WORD PTR [rax+0x2]
140ab7bc4: mov    r8d,0x5
140ab7bca: movzx  edx,r10w
140ab7bce: call   0x1400e35c0
140ab7bd3: test   al,al
140ab7bd5: je     0x140ab7c08
140ab7bd7: mov    eax,0xffffffff
140ab7bdc: mov    DWORD PTR [rsp+0x20],eax
140ab7be0: mov    r9d,eax
140ab7be3: mov    r8b,0x1
140ab7be6: movzx  edx,r11w
140ab7bea: movzx  ecx,r10w
140ab7bee: call   0x140abd3a0
140ab7bf3: test   al,al
140ab7bf5: jne    0x140ab7c08
140ab7bf7: lea    rdx,[rsp+0x64]
140ab7bfc: lea    rcx,[rbp+0x100]
140ab7c03: call   0x14006f4f0
140ab7c08: add    rbx,0x8
140ab7c0c: mov    QWORD PTR [rsp+0x78],rbx
140ab7c11: inc    di
140ab7c14: mov    WORD PTR [rsp+0x64],di
140ab7c19: lea    r8,[rbp+0x0]
140ab7c1d: lea    rdx,[rbp-0x43]
140ab7c21: lea    rcx,[rsp+0x78]
140ab7c26: call   0x14006ee20
140ab7c2b: cmp    BYTE PTR [rax],0x0
140ab7c2e: jl     0x140ab7b80
140ab7c34: movzx  r14d,WORD PTR [rbp-0x54]
140ab7c39: movzx  r12d,WORD PTR [rbp-0x50]
140ab7c3e: mov    rcx,QWORD PTR [rbp+0x108]
140ab7c45: mov    rax,rcx
140ab7c48: mov    rdx,QWORD PTR [rbp+0x100]
140ab7c4f: sub    rax,rdx
140ab7c52: sar    rax,1
140ab7c55: je     0x140ab7d01
140ab7c5b: mov    esi,0x64
140ab7c60: sub    rcx,rdx
140ab7c63: sar    rcx,1
140ab7c66: call   0x140071f30
140ab7c6b: movsxd rcx,eax
140ab7c6e: mov    rax,QWORD PTR [rbp+0x100]
140ab7c75: movsx  rcx,WORD PTR [rax+rcx*2]
140ab7c7a: lea    rdi,[rcx*8+0x0]
140ab7c82: mov    rax,QWORD PTR [r15+0x2b8]
140ab7c89: mov    rcx,QWORD PTR [rdi+rax*1]
140ab7c8d: movzx  ecx,WORD PTR [rcx+0x2]
140ab7c91: call   0x140abd500
140ab7c96: movsx  ebx,ax
140ab7c99: mov    ecx,esi
140ab7c9b: call   0x140071f30
140ab7ca0: cmp    eax,ebx
140ab7ca2: jl     0x140ab7cb4
140ab7ca4: mov    rcx,QWORD PTR [rbp+0x108]
140ab7cab: mov    rdx,QWORD PTR [rbp+0x100]
140ab7cb2: jmp    0x140ab7c60
140ab7cb4: mov    rcx,QWORD PTR [r15+0x2b8]
140ab7cbb: mov    rcx,QWORD PTR [rdi+rcx*1]
140ab7cbf: call   0x141435fb0
140ab7cc4: mov    rax,QWORD PTR [r15+0x2b8]
140ab7ccb: mov    rcx,QWORD PTR [rdi+rax*1]
140ab7ccf: lea    rax,[rcx+0x10]
140ab7cd3: mov    QWORD PTR [rsp+0x38],rcx
140ab7cd8: mov    QWORD PTR [rsp+0x30],rax
140ab7cdd: mov    DWORD PTR [rsp+0x28],0x2
140ab7ce5: mov    WORD PTR [rsp+0x20],r12w
140ab7ceb: movzx  r9d,r14w
140ab7cef: movzx  r8d,WORD PTR [rbp-0x8]
140ab7cf4: movzx  edx,WORD PTR [rcx+0x2]
140ab7cf8: mov    rcx,r15
140ab7cfb: call   0x1414c6320
140ab7d00: nop
140ab7d01: lea    rcx,[rbp+0x100]
140ab7d08: call   0x14006f7b0
140ab7d0d: mov    r13,QWORD PTR [rbp+0x50]
140ab7d11: mov    rbx,QWORD PTR [r13+0x28]
140ab7d15: mov    rax,QWORD PTR [r13+0x30]
140ab7d19: sub    rax,rbx
140ab7d1c: sar    rax,1
140ab7d1f: lea    ecx,[rax+rax*4]
140ab7d22: mov    DWORD PTR [rbp-0x8],ecx
140ab7d25: mov    r14d,0x0
140ab7d2b: movzx  eax,r14w
140ab7d2f: mov    WORD PTR [rsp+0x64],ax
140ab7d34: je     0x140ab8027
140ab7d3a: mov    edi,r14d
140ab7d3d: mov    esi,DWORD PTR [rbp-0x68]
140ab7d40: cmp    esi,ecx
140ab7d42: jge    0x140ab7ffc
140ab7d48: mov    ecx,0x30
140ab7d4d: call   0x140071f30
140ab7d52: mov    r14d,eax
140ab7d55: movzx  edx,WORD PTR [rbx+rdi*2]
140ab7d59: sub    dx,WORD PTR [r15+0x116bf8]
140ab7d61: movzx  ecx,dx
140ab7d64: add    cx,cx
140ab7d67: add    dx,cx
140ab7d6a: shl    dx,0x4
140ab7d6e: add    r14w,dx
140ab7d72: mov    DWORD PTR [rbp-0x54],r14d
140ab7d76: mov    rcx,QWORD PTR [r13+0x40]
140ab7d7a: lea    rbx,[rcx+rdi*2]
140ab7d7e: mov    ecx,0x30
140ab7d83: call   0x140071f30
140ab7d88: movzx  edx,WORD PTR [rbx]
140ab7d8b: sub    dx,WORD PTR [r15+0x116bfc]
140ab7d93: movzx  ecx,dx
140ab7d96: add    cx,cx
140ab7d99: add    dx,cx
140ab7d9c: shl    dx,0x4
140ab7da0: lea    r12d,[rdx+rax*1]
140ab7da4: mov    rax,QWORD PTR [r13+0x70]
140ab7da8: lea    rcx,[rax+rdi*2]
140ab7dac: mov    rax,QWORD PTR [r13+0x58]
140ab7db0: lea    rbx,[rax+rdi*2]
140ab7db4: movsx  ecx,WORD PTR [rcx]
140ab7db7: movsx  eax,WORD PTR [rbx]
140ab7dba: sub    ecx,eax
140ab7dbc: inc    ecx
140ab7dbe: call   0x140071f30
140ab7dc3: mov    r13d,eax
140ab7dc6: add    r13w,WORD PTR [rbx]
140ab7dca: inc    esi
140ab7dcc: mov    DWORD PTR [rbp-0x68],esi
140ab7dcf: xorps  xmm0,xmm0
140ab7dd2: movdqu XMMWORD PTR [rbp+0x118],xmm0
140ab7dda: xor    eax,eax
140ab7ddc: mov    QWORD PTR [rbp+0x128],rax
140ab7de3: mov    rbx,QWORD PTR [r15+0x2b8]
140ab7dea: mov    QWORD PTR [rsp+0x78],rbx
140ab7def: mov    rcx,QWORD PTR [r15+0x2c0]
140ab7df6: mov    QWORD PTR [rbp+0x0],rcx
140ab7dfa: mov    esi,eax
140ab7dfc: mov    DWORD PTR [rbp-0x50],eax
140ab7dff: lea    r8,[rbp+0x0]
140ab7e03: lea    rdx,[rbp-0x42]
140ab7e07: lea    rcx,[rsp+0x78]
140ab7e0c: call   0x14006ee20
140ab7e11: cmp    BYTE PTR [rax],sil
140ab7e14: jge    0x140ab7f19
140ab7e1a: nop    WORD PTR [rax+rax*1+0x0]
140ab7e20: mov    rdi,QWORD PTR [rbx]
140ab7e23: test   BYTE PTR [rdi+0xc],0xa
140ab7e27: jne    0x140ab7ef0
140ab7e2d: movzx  eax,WORD PTR [rbp-0x58]
140ab7e31: cmp    WORD PTR [rdi+0x10],ax
140ab7e35: jne    0x140ab7ef0
140ab7e3b: movzx  eax,WORD PTR [rsp+0x68]
140ab7e40: cmp    WORD PTR [rdi+0x12],ax
140ab7e44: jne    0x140ab7ef0
140ab7e4a: movzx  eax,WORD PTR [rbp-0x78]
140ab7e4e: cmp    WORD PTR [rdi+0x14],ax
140ab7e52: jne    0x140ab7ef0
140ab7e58: mov    eax,DWORD PTR [rbp-0x70]
140ab7e5b: cmp    DWORD PTR [rdi+0x18],eax
140ab7e5e: jne    0x140ab7ef0
140ab7e64: cmp    DWORD PTR [rdi+0x1c],0xffffffff
140ab7e68: jne    0x140ab7ef0
140ab7e6e: cmp    DWORD PTR [rdi+0x4],0x0
140ab7e72: jbe    0x140ab7ef0
140ab7e74: cmp    BYTE PTR [rdi],0x1
140ab7e77: jne    0x140ab7ef0
140ab7e79: lea    rcx,[r15+0x11b558]
140ab7e80: movzx  r10d,WORD PTR [rdi+0x2]
140ab7e85: mov    r8d,0x4
140ab7e8b: movzx  edx,r10w
140ab7e8f: call   0x1400e35c0
140ab7e94: test   al,al
140ab7e96: je     0x140ab7ef0
140ab7e98: mov    r8d,0xffffffff
140ab7e9e: mov    WORD PTR [rsp+0x28],r13w
140ab7ea4: mov    WORD PTR [rsp+0x20],r12w
140ab7eaa: movzx  r9d,r14w
140ab7eae: movzx  edx,r10w
140ab7eb2: mov    rcx,r15
140ab7eb5: call   0x1414c95a0
140ab7eba: test   al,al
140ab7ebc: je     0x140ab7ef0
140ab7ebe: mov    DWORD PTR [rsp+0x20],0x23
140ab7ec6: mov    r9d,0xffffffff
140ab7ecc: mov    r8b,0x1
140ab7ecf: movzx  edx,WORD PTR [rdi+0x10]
140ab7ed3: movzx  ecx,WORD PTR [rdi+0x2]
140ab7ed7: call   0x140abd3a0
140ab7edc: test   al,al
140ab7ede: jne    0x140ab7ef0
140ab7ee0: lea    rdx,[rbp-0x50]
140ab7ee4: lea    rcx,[rbp+0x118]
140ab7eeb: call   0x14006f410
140ab7ef0: add    rbx,0x8
140ab7ef4: mov    QWORD PTR [rsp+0x78],rbx
140ab7ef9: inc    esi
140ab7efb: mov    DWORD PTR [rbp-0x50],esi
140ab7efe: lea    r8,[rbp+0x0]
140ab7f02: lea    rdx,[rbp-0x42]
140ab7f06: lea    rcx,[rsp+0x78]
140ab7f0b: call   0x14006ee20
140ab7f10: cmp    BYTE PTR [rax],0x0
140ab7f13: jl     0x140ab7e20
140ab7f19: mov    rcx,QWORD PTR [rbp+0x120]
140ab7f20: mov    rax,rcx
140ab7f23: mov    rdx,QWORD PTR [rbp+0x118]
140ab7f2a: sub    rax,rdx
140ab7f2d: sar    rax,0x2
140ab7f31: test   rax,rax
140ab7f34: je     0x140ab7fe1
140ab7f3a: mov    r14d,0x64
140ab7f40: sub    rcx,rdx
140ab7f43: sar    rcx,0x2
140ab7f47: call   0x140071f30
140ab7f4c: movsxd rcx,eax
140ab7f4f: mov    rax,QWORD PTR [rbp+0x118]
140ab7f56: movsxd rcx,DWORD PTR [rax+rcx*4]
140ab7f5a: lea    rdi,[rcx*8+0x0]
140ab7f62: mov    rax,QWORD PTR [r15+0x2b8]
140ab7f69: mov    rcx,QWORD PTR [rdi+rax*1]
140ab7f6d: movzx  ecx,WORD PTR [rcx+0x2]
140ab7f71: call   0x140abd500
140ab7f76: movsx  ebx,ax
140ab7f79: mov    ecx,r14d
140ab7f7c: call   0x140071f30
140ab7f81: cmp    eax,ebx
140ab7f83: jl     0x140ab7f95
140ab7f85: mov    rcx,QWORD PTR [rbp+0x120]
140ab7f8c: mov    rdx,QWORD PTR [rbp+0x118]
140ab7f93: jmp    0x140ab7f40
140ab7f95: mov    rcx,QWORD PTR [r15+0x2b8]
140ab7f9c: mov    rcx,QWORD PTR [rdi+rcx*1]
140ab7fa0: call   0x141435fb0
140ab7fa5: mov    rax,QWORD PTR [r15+0x2b8]
140ab7fac: mov    rcx,QWORD PTR [rdi+rax*1]
140ab7fb0: lea    rax,[rcx+0x10]
140ab7fb4: mov    QWORD PTR [rsp+0x38],rcx
140ab7fb9: mov    QWORD PTR [rsp+0x30],rax
140ab7fbe: mov    DWORD PTR [rsp+0x28],0x1
140ab7fc6: mov    WORD PTR [rsp+0x20],r13w
140ab7fcc: movzx  r9d,r12w
140ab7fd0: mov    r8d,DWORD PTR [rbp-0x54]
140ab7fd4: movzx  edx,WORD PTR [rcx+0x2]
140ab7fd8: mov    rcx,r15
140ab7fdb: call   0x1414c6320
140ab7fe0: nop
140ab7fe1: lea    rcx,[rbp+0x118]
140ab7fe8: call   0x14006f750
140ab7fed: movzx  eax,WORD PTR [rsp+0x64]
140ab7ff2: mov    ecx,DWORD PTR [rbp-0x8]
140ab7ff5: mov    esi,DWORD PTR [rbp-0x68]
140ab7ff8: mov    r13,QWORD PTR [rbp+0x50]
140ab7ffc: inc    ax
140ab7fff: mov    WORD PTR [rsp+0x64],ax
140ab8004: mov    rbx,QWORD PTR [r13+0x28]
140ab8008: movsx  rdi,ax
140ab800c: mov    rax,QWORD PTR [r13+0x30]
140ab8010: sub    rax,rbx
140ab8013: sar    rax,1
140ab8016: cmp    rdi,rax
140ab8019: movzx  eax,WORD PTR [rsp+0x64]
140ab801e: jb     0x140ab7d40
140ab8024: xor    r14d,r14d
140ab8027: movzx  eax,WORD PTR [rsp+0x60]
140ab802c: inc    ax
140ab802f: mov    WORD PTR [rsp+0x60],ax
140ab8034: mov    rdx,QWORD PTR [r15+0x26dc00]
140ab803b: movsx  rcx,ax
140ab803f: mov    rax,QWORD PTR [r15+0x26dc08]
140ab8046: sub    rax,rdx
140ab8049: sar    rax,0x3
140ab804d: cmp    rcx,rax
140ab8050: jb     0x140ab76a0
140ab8056: mov    ecx,0x64
140ab805b: call   0x140071f30
140ab8060: test   eax,eax
140ab8062: jne    0x140ab84a7
140ab8068: mov    eax,DWORD PTR [r15+0x116bec]
140ab806f: mov    DWORD PTR [rbp-0x38],eax
140ab8072: mov    r12d,DWORD PTR [r15+0x116bf0]
140ab8079: mov    DWORD PTR [rsp+0x70],r12d
140ab807e: mov    r13d,r12d
140ab8081: imul   r13d,eax
140ab8085: mov    ecx,r12d
140ab8088: call   0x140071f30
140ab808d: mov    ebx,eax
140ab808f: mov    ecx,DWORD PTR [r15+0x116bec]
140ab8096: call   0x140071f30
140ab809b: mov    WORD PTR [rsp+0x28],r14w
140ab80a1: mov    WORD PTR [rsp+0x20],bx
140ab80a6: movzx  r9d,ax
140ab80aa: lea    r8,[rbp-0x50]
140ab80ae: lea    rdx,[rbp-0x54]
140ab80b2: mov    rcx,r15
140ab80b5: call   0x14007dcd0
140ab80ba: xorps  xmm0,xmm0
140ab80bd: movdqu XMMWORD PTR [rbp+0x130],xmm0
140ab80c5: mov    QWORD PTR [rbp+0x140],r14
140ab80cc: mov    rbx,QWORD PTR [r15+0x2b8]
140ab80d3: mov    QWORD PTR [rsp+0x78],rbx
140ab80d8: mov    rax,QWORD PTR [r15+0x2c0]
140ab80df: mov    QWORD PTR [rbp+0x50],rax
140ab80e3: mov    esi,r14d
140ab80e6: mov    DWORD PTR [rbp-0x68],r14d
140ab80ea: lea    r8,[rbp+0x50]
140ab80ee: lea    rdx,[rbp-0x3f]
140ab80f2: lea    rcx,[rsp+0x78]
140ab80f7: call   0x14006ee20
140ab80fc: cmp    BYTE PTR [rax],0x0
140ab80ff: jge    0x140ab81a5
140ab8105: movzx  r14d,WORD PTR [rbp-0x50]
140ab810a: movzx  r12d,WORD PTR [rbp-0x54]
140ab810f: mov    r15d,0xffffffff
140ab8115: mov    rdi,QWORD PTR [rbx]
140ab8118: test   BYTE PTR [rdi+0xc],0xa
140ab811c: jne    0x140ab8175
140ab811e: movzx  edx,WORD PTR [rdi+0x10]
140ab8122: cmp    dx,r12w
140ab8126: jne    0x140ab8175
140ab8128: cmp    WORD PTR [rdi+0x12],r14w
140ab812d: jne    0x140ab8175
140ab812f: cmp    WORD PTR [rdi+0x14],r15w
140ab8134: jne    0x140ab8175
140ab8136: cmp    DWORD PTR [rdi+0x18],r15d
140ab813a: jne    0x140ab8175
140ab813c: cmp    DWORD PTR [rdi+0x1c],r15d
140ab8140: jne    0x140ab8175
140ab8142: cmp    DWORD PTR [rdi+0x4],0x0
140ab8146: jbe    0x140ab8175
140ab8148: mov    DWORD PTR [rsp+0x20],r15d
140ab814d: mov    r9d,r15d
140ab8150: mov    r8b,0x1
140ab8153: movzx  ecx,WORD PTR [rdi+0x2]
140ab8157: call   0x140abd3a0
140ab815c: test   al,al
140ab815e: jne    0x140ab8175
140ab8160: cmp    BYTE PTR [rdi],0x4
140ab8163: jne    0x140ab8175
140ab8165: lea    rdx,[rbp-0x68]
140ab8169: lea    rcx,[rbp+0x130]
140ab8170: call   0x14006f410
140ab8175: add    rbx,0x8
140ab8179: mov    QWORD PTR [rsp+0x78],rbx
140ab817e: inc    esi
140ab8180: mov    DWORD PTR [rbp-0x68],esi
140ab8183: lea    r8,[rbp+0x50]
140ab8187: lea    rdx,[rbp-0x3f]
140ab818b: lea    rcx,[rsp+0x78]
140ab8190: call   0x14006ee20
140ab8195: cmp    BYTE PTR [rax],0x0
140ab8198: jl     0x140ab8115
140ab819e: mov    r15,QWORD PTR [rbp-0x18]
140ab81a2: xor    r14d,r14d
140ab81a5: mov    rcx,QWORD PTR [rbp+0x138]
140ab81ac: mov    rax,rcx
140ab81af: mov    r8,QWORD PTR [rbp+0x130]
140ab81b6: sub    rax,r8
140ab81b9: sar    rax,0x2
140ab81bd: test   rax,rax
140ab81c0: je     0x140ab849b
140ab81c6: mov    eax,0x68db8bad
140ab81cb: imul   r13d
140ab81ce: mov    esi,edx
140ab81d0: sar    esi,0xc
140ab81d3: mov    eax,esi
140ab81d5: shr    eax,0x1f
140ab81d8: add    esi,eax
140ab81da: add    si,0x2
140ab81de: movzx  edi,r14w
140ab81e2: mov    r12d,0x64
140ab81e8: nop    DWORD PTR [rax+rax*1+0x0]
140ab81f0: sub    rcx,r8
140ab81f3: sar    rcx,0x2
140ab81f7: call   0x140071f30
140ab81fc: movsxd rcx,eax
140ab81ff: mov    rax,QWORD PTR [rbp+0x130]
140ab8206: movsxd rdx,DWORD PTR [rax+rcx*4]
140ab820a: mov    r14,rdx
140ab820d: mov    QWORD PTR [rbp+0x0],rdx
140ab8211: mov    rax,QWORD PTR [r15+0x2b8]
140ab8218: mov    rcx,QWORD PTR [rax+rdx*8]
140ab821c: movzx  ecx,WORD PTR [rcx+0x2]
140ab8220: call   0x140abd500
140ab8225: movsx  ebx,ax
140ab8228: mov    ecx,r12d
140ab822b: call   0x140071f30
140ab8230: cmp    eax,ebx
140ab8232: jl     0x140ab8244
140ab8234: mov    rcx,QWORD PTR [rbp+0x138]
140ab823b: mov    r8,QWORD PTR [rbp+0x130]
140ab8242: jmp    0x140ab81f0
140ab8244: lea    rcx,[r15+0x11b558]
140ab824b: mov    rax,QWORD PTR [r15+0x2b8]
140ab8252: mov    rdx,QWORD PTR [rax+r14*8]
140ab8256: movzx  ebx,WORD PTR [rdx+0x2]
140ab825a: movzx  edx,bx
140ab825d: call   0x1406dcfb0
140ab8262: mov    BYTE PTR [rsp+0x64],al
140ab8266: mov    r10,QWORD PTR [rip+0x191932b]        # 0x1423d1598
140ab826d: mov    QWORD PTR [rsp+0x78],r10
140ab8272: mov    rcx,QWORD PTR [rip+0x1919327]        # 0x1423d15a0
140ab8279: mov    QWORD PTR [rbp+0x50],rcx
140ab827d: lea    r8,[rbp+0x50]
140ab8281: lea    rdx,[rbp-0x40]
140ab8285: lea    rcx,[rsp+0x78]
140ab828a: call   0x14006ee20
140ab828f: cmp    BYTE PTR [rax],0x0
140ab8292: mov    r12d,DWORD PTR [rsp+0x70]
140ab8297: jge    0x140ab82dd
140ab8299: mov    r11,r10
140ab829c: mov    rdx,r10
140ab829f: nop
140ab82a0: mov    rax,QWORD PTR [r10]
140ab82a3: movzx  ecx,WORD PTR [rax]
140ab82a6: lea    eax,[rdi+0x1]
140ab82a9: cmp    cx,bx
140ab82ac: cmovne ax,di
140ab82b0: movzx  edi,ax
140ab82b3: cmovne rdx,r11
140ab82b7: lea    r10,[rdx+0x8]
140ab82bb: mov    r11,r10
140ab82be: mov    QWORD PTR [rsp+0x78],r10
140ab82c3: lea    r8,[rbp+0x50]
140ab82c7: lea    rdx,[rbp-0x40]
140ab82cb: lea    rcx,[rsp+0x78]
140ab82d0: call   0x14006ee20
140ab82d5: mov    rdx,r10
140ab82d8: cmp    BYTE PTR [rax],0x0
140ab82db: jl     0x140ab82a0
140ab82dd: cmp    di,si
140ab82e0: jge    0x140ab849b
140ab82e6: xor    edi,edi
140ab82e8: mov    WORD PTR [rsp+0x60],di
140ab82ed: nop    DWORD PTR [rax]
140ab82f0: mov    ecx,DWORD PTR [rbp-0x38]
140ab82f3: call   0x140071f30
140ab82f8: mov    r14d,eax
140ab82fb: mov    ecx,r12d
140ab82fe: call   0x140071f30
140ab8303: mov    r12d,eax
140ab8306: movzx  r8d,ax
140ab830a: movzx  edx,r14w
140ab830e: mov    rcx,r15
140ab8311: call   0x14149fb70
140ab8316: movzx  r13d,ax
140ab831a: mov    DWORD PTR [rsp+0x28],edi
140ab831e: mov    BYTE PTR [rsp+0x20],0x0
140ab8323: movzx  r9d,ax
140ab8327: movzx  r8d,r12w
140ab832b: movzx  edx,r14w
140ab832f: mov    rcx,r15
140ab8332: call   0x1414adea0
140ab8337: test   al,al
140ab8339: je     0x140ab8360
140ab833b: cmp    BYTE PTR [rsp+0x64],0x0
140ab8340: je     0x140ab835c
140ab8342: movzx  r9d,r13w
140ab8346: movzx  r8d,r12w
140ab834a: movzx  edx,r14w
140ab834e: mov    rcx,r15
140ab8351: call   0x14007dc40
140ab8356: bt     eax,0xf
140ab835a: jae    0x140ab8360
140ab835c: mov    bl,0x1
140ab835e: jmp    0x140ab8362
140ab8360: xor    bl,bl
140ab8362: movzx  r9d,r13w
140ab8366: movzx  r8d,r12w
140ab836a: movzx  edx,r14w
140ab836e: mov    rcx,r15
140ab8371: call   0x140067f80
140ab8376: movzx  ecx,ax
140ab8379: call   0x1407dd390
140ab837e: test   al,al
140ab8380: jne    0x140ab83a2
140ab8382: movzx  r8d,r12w
140ab8386: movzx  edx,r14w
140ab838a: mov    rcx,r15
140ab838d: call   0x140067f80
140ab8392: movzx  ecx,ax
140ab8395: call   0x140247a10
140ab839a: test   al,al
140ab839c: je     0x140ab856b
140ab83a2: test   bl,bl
140ab83a4: je     0x140ab856b
140ab83aa: mov    rbx,QWORD PTR [r15+0x90]
140ab83b1: mov    rsi,QWORD PTR [r15+0x98]
140ab83b8: sub    rsi,rbx
140ab83bb: sar    rsi,0x3
140ab83bf: test   rsi,rsi
140ab83c2: je     0x140ab8403
140ab83c4: mov    rcx,QWORD PTR [rbx]
140ab83c7: test   BYTE PTR [rcx+0x18],0x2
140ab83cb: je     0x140ab83f5
140ab83cd: movzx  r8d,WORD PTR [rcx+0x8]
140ab83d2: sub    r8w,r13w
140ab83d6: movzx  edx,WORD PTR [rcx+0x6]
140ab83da: sub    dx,r12w
140ab83de: movzx  ecx,WORD PTR [rcx+0x4]
140ab83e2: sub    cx,r14w
140ab83e6: call   0x1400721e0
140ab83eb: cmp    ax,0x14
140ab83ef: jl     0x140ab8569
140ab83f5: inc    edi
140ab83f7: add    rbx,0x8
140ab83fb: movsxd rax,edi
140ab83fe: cmp    rax,rsi
140ab8401: jb     0x140ab83c4
140ab8403: mov    eax,0xffff8ad0
140ab8408: cmp    r14w,ax
140ab840c: je     0x140ab849b
140ab8412: call   0x1405c1410
140ab8417: mov    rbx,rax
140ab841a: mov    WORD PTR [rax+0x4],r14w
140ab841f: mov    WORD PTR [rax+0x6],r12w
140ab8424: mov    WORD PTR [rax+0x8],r13w
140ab8429: mov    rcx,QWORD PTR [r15+0x2b8]
140ab8430: mov    rdi,QWORD PTR [rbp+0x0]
140ab8434: mov    rdx,QWORD PTR [rcx+rdi*8]
140ab8438: movzx  ecx,WORD PTR [rdx+0x2]
140ab843c: mov    WORD PTR [rax],cx
140ab843f: mov    eax,0xffffffff
140ab8444: mov    WORD PTR [rbx+0x2],ax
140ab8448: cmp    DWORD PTR [rip+0xde3e49],0x0        # 0x14189c298
140ab844f: sete   cl
140ab8452: mov    BYTE PTR [rbx+0xa],cl
140ab8455: mov    WORD PTR [rbx+0xc],ax
140ab8459: mov    WORD PTR [rbx+0x38],0x4
140ab845f: mov    ecx,0x2711
140ab8464: call   0x140071f30
140ab8469: add    eax,0x2710
140ab846e: mov    DWORD PTR [rbx+0x1c],eax
140ab8471: or     DWORD PTR [rbx+0x18],0x2
140ab8475: mov    rax,QWORD PTR [r15+0x2b8]
140ab847c: mov    rcx,QWORD PTR [rax+rdi*8]
140ab8480: movups xmm0,XMMWORD PTR [rcx+0x10]
140ab8484: movups XMMWORD PTR [rbx+0x20],xmm0
140ab8488: movsd  xmm1,QWORD PTR [rcx+0x20]
140ab848d: movsd  QWORD PTR [rbx+0x30],xmm1
140ab8492: mov    rcx,rbx
140ab8495: call   0x140a43700
140ab849a: nop
140ab849b: lea    rcx,[rbp+0x130]
140ab84a2: call   0x14006f750
140ab84a7: mov    rbx,QWORD PTR [rip+0x19190ea]        # 0x1423d1598
140ab84ae: mov    rdi,QWORD PTR [rip+0x19190eb]        # 0x1423d15a0
140ab84b5: mov    r12d,0x8
140ab84bb: xor    r15d,r15d
140ab84be: xchg   ax,ax
140ab84c0: cmp    rbx,rdi
140ab84c3: jae    0x140ab869d
140ab84c9: mov    ecx,0xf
140ab84ce: call   0x140071f30
140ab84d3: test   eax,eax
140ab84d5: jne    0x140ab8694
140ab84db: mov    r14,QWORD PTR [rbx]
140ab84de: xorps  xmm0,xmm0
140ab84e1: movdqu XMMWORD PTR [rbp+0x60],xmm0
140ab84e6: mov    QWORD PTR [rbp+0x70],r15
140ab84ea: mov    eax,0xffffffff
140ab84ef: mov    r9d,eax
140ab84f2: mov    DWORD PTR [rsp+0x30],eax
140ab84f6: mov    DWORD PTR [rsp+0x28],0x97
140ab84fe: mov    BYTE PTR [rsp+0x20],0x0
140ab8503: lea    r8,[rbp+0x60]
140ab8507: movzx  edx,WORD PTR [r14]
140ab850b: lea    rcx,[rip+0x1a34536]        # 0x1424eca48
140ab8512: call   0x140702470
140ab8517: mov    rax,QWORD PTR [rbp+0x68]
140ab851b: sub    rax,QWORD PTR [rbp+0x60]
140ab851f: test   rax,0xfffffffffffffffe
140ab8525: je     0x140ab868b
140ab852b: call   0x1405c1410
140ab8530: mov    rsi,rax
140ab8533: movzx  ecx,WORD PTR [r14+0x4]
140ab8538: mov    WORD PTR [rax+0x4],cx
140ab853c: movzx  ecx,WORD PTR [r14+0x6]
140ab8541: mov    WORD PTR [rax+0x6],cx
140ab8545: movzx  ecx,WORD PTR [r14+0x8]
140ab854a: mov    WORD PTR [rax+0x8],cx
140ab854e: movzx  ecx,WORD PTR [r14]
140ab8552: mov    WORD PTR [rax],cx
140ab8555: movzx  eax,WORD PTR [r14+0x2]
140ab855a: cmp    ax,0xffff
140ab855e: je     0x140ab858c
140ab8560: mov    WORD PTR [rsi+0x2],ax
140ab8564: jmp    0x140ab8642
140ab8569: xor    edi,edi
140ab856b: movzx  ebx,WORD PTR [rsp+0x60]
140ab8570: inc    bx
140ab8573: mov    WORD PTR [rsp+0x60],bx
140ab8578: cmp    bx,0x64
140ab857c: jge    0x140ab849b
140ab8582: mov    r12d,DWORD PTR [rsp+0x70]
140ab8587: jmp    0x140ab82f0
140ab858c: xorps  xmm0,xmm0
140ab858f: movdqu XMMWORD PTR [rbp+0x1f0],xmm0
140ab8597: mov    QWORD PTR [rbp+0x200],r15
140ab859e: mov    rdx,QWORD PTR [rbp+0x68]
140ab85a2: sub    rdx,QWORD PTR [rbp+0x60]
140ab85a6: sar    rdx,1
140ab85a9: lea    rcx,[rbp+0x1f0]
140ab85b0: call   0x14006f380
140ab85b5: movzx  edx,WORD PTR [rsi]
140ab85b8: lea    rcx,[rip+0x1a34489]        # 0x1424eca48
140ab85bf: call   0x1400bba60
140ab85c4: mov    r11,rax
140ab85c7: mov    r10d,r15d
140ab85ca: mov    rcx,QWORD PTR [rbp+0x68]
140ab85ce: mov    rdx,QWORD PTR [rbp+0x60]
140ab85d2: sub    rcx,rdx
140ab85d5: sar    rcx,1
140ab85d8: je     0x140ab861b
140ab85da: mov    r8,r15
140ab85dd: mov    r9,r15
140ab85e0: movsx  rcx,WORD PTR [rdx+r9*1]
140ab85e5: mov    rax,QWORD PTR [r11+0x190]
140ab85ec: mov    edx,DWORD PTR [rax+rcx*4]
140ab85ef: mov    rax,QWORD PTR [rbp+0x1f0]
140ab85f6: mov    DWORD PTR [rax+r8*1],edx
140ab85fa: inc    r10d
140ab85fd: lea    r9,[r9+0x2]
140ab8601: lea    r8,[r8+0x4]
140ab8605: mov    rcx,QWORD PTR [rbp+0x68]
140ab8609: mov    rdx,QWORD PTR [rbp+0x60]
140ab860d: sub    rcx,rdx
140ab8610: sar    rcx,1
140ab8613: movsxd rax,r10d
140ab8616: cmp    rax,rcx
140ab8619: jb     0x140ab85e0
140ab861b: lea    rcx,[rbp+0x1f0]
140ab8622: call   0x14013d0a0
140ab8627: movsxd rcx,eax
140ab862a: mov    rax,QWORD PTR [rbp+0x60]
140ab862e: movzx  ecx,WORD PTR [rax+rcx*2]
140ab8632: mov    WORD PTR [rsi+0x2],cx
140ab8636: lea    rcx,[rbp+0x1f0]
140ab863d: call   0x14006f750
140ab8642: mov    BYTE PTR [rsi+0xa],0x0
140ab8646: mov    rcx,rsi
140ab8649: call   0x140a45370
140ab864e: mov    r10d,eax
140ab8651: mov    eax,0xbb8
140ab8656: cdq
140ab8657: idiv   r10d
140ab865a: mov    WORD PTR [rsi+0xc],ax
140ab865e: movups xmm0,XMMWORD PTR [r14+0x20]
140ab8663: movups XMMWORD PTR [rsi+0x20],xmm0
140ab8667: movsd  xmm1,QWORD PTR [r14+0x30]
140ab866d: movsd  QWORD PTR [rsi+0x30],xmm1
140ab8672: mov    WORD PTR [rsi+0x38],r12w
140ab8677: mov    DWORD PTR [rsi+0x1c],0x1
140ab867e: or     DWORD PTR [rsi+0x18],0x8
140ab8682: mov    rcx,rsi
140ab8685: call   0x140a43700
140ab868a: nop
140ab868b: lea    rcx,[rbp+0x60]
140ab868f: call   0x14006f7b0
140ab8694: add    rbx,0x8
140ab8698: jmp    0x140ab84c0
140ab869d: mov    rsi,QWORD PTR [rip+0x192d61c]        # 0x1423e5cc0
140ab86a4: mov    r14,QWORD PTR [rip+0x192d61d]        # 0x1423e5cc8
140ab86ab: mov    r15,QWORD PTR [rbp-0x18]
140ab86af: nop
140ab86b0: cmp    rsi,r14
140ab86b3: jae    0x140ab8a78
140ab86b9: call   0x140eb68b0
140ab86be: mov    r8d,eax
140ab86c1: mov    eax,0x3
140ab86c6: mul    r8d
140ab86c9: mov    ecx,r8d
140ab86cc: sub    ecx,edx
140ab86ce: shr    ecx,1
140ab86d0: add    ecx,edx
140ab86d2: shr    ecx,0x1e
140ab86d5: imul   ecx,ecx,0x7fffffff
140ab86db: sub    r8d,ecx
140ab86de: cmp    r8d,0x8888889
140ab86e5: jae    0x140ab8a6f
140ab86eb: mov    r13,QWORD PTR [rsi]
140ab86ee: xorps  xmm0,xmm0
140ab86f1: movdqu XMMWORD PTR [rbp+0x20],xmm0
140ab86f6: xor    eax,eax
140ab86f8: mov    QWORD PTR [rbp+0x30],rax
140ab86fc: movsx  rax,WORD PTR [r13+0xb8]
140ab8704: test   ax,ax
140ab8707: js     0x140ab87bd
140ab870d: mov    rdi,rax
140ab8710: mov    rax,QWORD PTR [rip+0x1a34359]        # 0x1424eca70
140ab8717: mov    rcx,QWORD PTR [rip+0x1a3434a]        # 0x1424eca68
140ab871e: sub    rax,rcx
140ab8721: sar    rax,0x3
140ab8725: cmp    rdi,rax
140ab8728: jae    0x140ab87bd
140ab872e: mov    rdi,QWORD PTR [rcx+rdi*8]
140ab8732: mov    ebx,DWORD PTR [rdi+0x180]
140ab8738: sub    ebx,DWORD PTR [rdi+0x178]
140ab873e: sar    rbx,0x3
140ab8742: sub    bx,0x1
140ab8746: mov    WORD PTR [rsp+0x60],bx
140ab874b: js     0x140ab87bd
140ab874d: movzx  eax,bx
140ab8750: mov    rdx,QWORD PTR [rbp+0x28]
140ab8754: nop    DWORD PTR [rax+0x0]
140ab8758: nop    DWORD PTR [rax+rax*1+0x0]
140ab8760: movzx  ecx,ax
140ab8763: mov    rax,QWORD PTR [rdi+0x178]
140ab876a: mov    rax,QWORD PTR [rax+rcx*8]
140ab876e: cmp    DWORD PTR [rax+0x6b0],0x12
140ab8775: jle    0x140ab87ad
140ab8777: mov    rax,QWORD PTR [rax+0x6a8]
140ab877e: cmp    BYTE PTR [rax+0x12],0x0
140ab8782: jge    0x140ab87ad
140ab8784: cmp    rdx,QWORD PTR [rbp+0x30]
140ab8788: je     0x140ab879b
140ab878a: mov    WORD PTR [rdx],bx
140ab878d: mov    rdx,QWORD PTR [rbp+0x28]
140ab8791: add    rdx,0x2
140ab8795: mov    QWORD PTR [rbp+0x28],rdx
140ab8799: jmp    0x140ab87ad
140ab879b: lea    r8,[rsp+0x60]
140ab87a0: lea    rcx,[rbp+0x20]
140ab87a4: call   0x140071040
140ab87a9: mov    rdx,QWORD PTR [rbp+0x28]
140ab87ad: sub    bx,0x1
140ab87b1: mov    WORD PTR [rsp+0x60],bx
140ab87b6: movzx  eax,bx
140ab87b9: jns    0x140ab8760
140ab87bb: jmp    0x140ab87c1
140ab87bd: mov    rdx,QWORD PTR [rbp+0x28]
140ab87c1: mov    rcx,QWORD PTR [rbp+0x20]
140ab87c5: sub    rdx,rcx
140ab87c8: test   rdx,0xfffffffffffffffe
140ab87cf: jne    0x140ab8828
140ab87d1: test   rcx,rcx
140ab87d4: je     0x140ab8a6f
140ab87da: mov    rdx,QWORD PTR [rbp+0x30]
140ab87de: sub    rdx,rcx
140ab87e1: sar    rdx,1
140ab87e4: add    rdx,rdx
140ab87e7: mov    rax,rcx
140ab87ea: cmp    rdx,0x1000
140ab87f1: jb     0x140ab880c
140ab87f3: add    rdx,0x27
140ab87f7: mov    rcx,QWORD PTR [rcx-0x8]
140ab87fb: sub    rax,rcx
140ab87fe: add    rax,0xfffffffffffffff8
140ab8802: cmp    rax,0x1f
140ab8806: ja     0x140abab59
140ab880c: call   0x141539680
140ab8811: xorps  xmm0,xmm0
140ab8814: movdqu XMMWORD PTR [rbp+0x20],xmm0
140ab8819: xor    eax,eax
140ab881b: mov    QWORD PTR [rbp+0x30],rax
140ab881f: add    rsi,0x8
140ab8823: jmp    0x140ab86b0
140ab8828: mov    eax,0xffff8ad0
140ab882d: mov    WORD PTR [rbp-0x74],ax
140ab8831: mov    eax,DWORD PTR [r13+0x10]
140ab8835: test   al,0x10
140ab8837: jne    0x140ab8908
140ab883d: test   al,0x8
140ab883f: je     0x140ab88ed
140ab8845: mov    rbx,QWORD PTR [r13+0x38]
140ab8849: mov    rdi,QWORD PTR [r13+0x40]
140ab884d: nop    DWORD PTR [rax]
140ab8850: cmp    rbx,rdi
140ab8853: jae    0x140ab88b6
140ab8855: mov    rcx,QWORD PTR [rbx]
140ab8858: mov    rax,QWORD PTR [rcx]
140ab885b: call   QWORD PTR [rax+0x10]
140ab885e: cmp    eax,0xb
140ab8861: je     0x140ab888c
140ab8863: cmp    eax,0x12
140ab8866: jne    0x140ab889a
140ab8868: mov    rcx,QWORD PTR [rbx]
140ab886b: mov    rax,QWORD PTR [rcx]
140ab886e: call   QWORD PTR [rax+0x20]
140ab8871: test   rax,rax
140ab8874: je     0x140ab889a
140ab8876: lea    r9,[rbp-0x60]
140ab887a: lea    r8,[rbp-0x5c]
140ab887e: lea    rdx,[rbp-0x74]
140ab8882: mov    rcx,rax
140ab8885: call   0x141367430
140ab888a: jmp    0x140ab8908
140ab888c: mov    rcx,QWORD PTR [rbx]
140ab888f: mov    rax,QWORD PTR [rcx]
140ab8892: call   QWORD PTR [rax+0x18]
140ab8895: test   rax,rax
140ab8898: jne    0x140ab88a0
140ab889a: add    rbx,0x8
140ab889e: jmp    0x140ab8850
140ab88a0: lea    r9,[rbp-0x60]
140ab88a4: lea    r8,[rbp-0x5c]
140ab88a8: lea    rdx,[rbp-0x74]
140ab88ac: mov    rcx,rax
140ab88af: call   0x140c8baa0
140ab88b4: jmp    0x140ab8908
140ab88b6: mov    rax,QWORD PTR [r13+0x20]
140ab88ba: mov    rcx,QWORD PTR [r13+0x28]
140ab88be: xchg   ax,ax
140ab88c0: cmp    rax,rcx
140ab88c3: jae    0x140ab8908
140ab88c5: mov    rdx,QWORD PTR [rax]
140ab88c8: cmp    DWORD PTR [rdx],0x7
140ab88cb: je     0x140ab88d3
140ab88cd: add    rax,0x8
140ab88d1: jmp    0x140ab88c0
140ab88d3: mov    rcx,QWORD PTR [rdx+0x8]
140ab88d7: movzx  eax,WORD PTR [rcx+0x4]
140ab88db: mov    WORD PTR [rbp-0x74],ax
140ab88df: movzx  eax,WORD PTR [rcx+0x6]
140ab88e3: mov    WORD PTR [rbp-0x5c],ax
140ab88e7: movzx  eax,WORD PTR [rcx+0x8]
140ab88eb: jmp    0x140ab8904
140ab88ed: movzx  eax,WORD PTR [r13+0x8]
140ab88f2: mov    WORD PTR [rbp-0x74],ax
140ab88f6: movzx  eax,WORD PTR [r13+0xa]
140ab88fb: mov    WORD PTR [rbp-0x5c],ax
140ab88ff: movzx  eax,WORD PTR [r13+0xc]
140ab8904: mov    WORD PTR [rbp-0x60],ax
140ab8908: call   0x1405c1410
140ab890d: mov    rbx,rax
140ab8910: movzx  ecx,WORD PTR [rbp-0x74]
140ab8914: mov    WORD PTR [rax+0x4],cx
140ab8918: movzx  ecx,WORD PTR [rbp-0x5c]
140ab891c: mov    WORD PTR [rax+0x6],cx
140ab8920: movzx  ecx,WORD PTR [rbp-0x60]
140ab8924: mov    WORD PTR [rax+0x8],cx
140ab8928: movzx  ecx,WORD PTR [r13+0xb8]
140ab8930: mov    WORD PTR [rax],cx
140ab8933: movzx  eax,WORD PTR [r13+0xba]
140ab893b: cmp    ax,0xffff
140ab893f: je     0x140ab894a
140ab8941: mov    WORD PTR [rbx+0x2],ax
140ab8945: jmp    0x140ab8a02
140ab894a: xorps  xmm0,xmm0
140ab894d: movdqu XMMWORD PTR [rbp+0x208],xmm0
140ab8955: xor    edi,edi
140ab8957: mov    QWORD PTR [rbp+0x218],rdi
140ab895e: mov    rdx,QWORD PTR [rbp+0x28]
140ab8962: sub    rdx,QWORD PTR [rbp+0x20]
140ab8966: sar    rdx,1
140ab8969: lea    rcx,[rbp+0x208]
140ab8970: call   0x14006f380
140ab8975: movzx  edx,WORD PTR [rbx]
140ab8978: lea    rcx,[rip+0x1a340c9]        # 0x1424eca48
140ab897f: call   0x1400bba60
140ab8984: mov    r11,rax
140ab8987: mov    r10d,edi
140ab898a: mov    rcx,QWORD PTR [rbp+0x28]
140ab898e: mov    rdx,QWORD PTR [rbp+0x20]
140ab8992: sub    rcx,rdx
140ab8995: sar    rcx,1
140ab8998: je     0x140ab89db
140ab899a: mov    r8d,edi
140ab899d: mov    r9d,edi
140ab89a0: movsx  rcx,WORD PTR [rdx+r9*1]
140ab89a5: mov    rax,QWORD PTR [r11+0x190]
140ab89ac: mov    edx,DWORD PTR [rax+rcx*4]
140ab89af: mov    rax,QWORD PTR [rbp+0x208]
140ab89b6: mov    DWORD PTR [rax+r8*1],edx
140ab89ba: inc    r10d
140ab89bd: lea    r9,[r9+0x2]
140ab89c1: lea    r8,[r8+0x4]
140ab89c5: mov    rcx,QWORD PTR [rbp+0x28]
140ab89c9: mov    rdx,QWORD PTR [rbp+0x20]
140ab89cd: sub    rcx,rdx
140ab89d0: sar    rcx,1
140ab89d3: movsxd rax,r10d
140ab89d6: cmp    rax,rcx
140ab89d9: jb     0x140ab89a0
140ab89db: lea    rcx,[rbp+0x208]
140ab89e2: call   0x14013d0a0
140ab89e7: movsxd rcx,eax
140ab89ea: mov    rax,QWORD PTR [rbp+0x20]
140ab89ee: movzx  ecx,WORD PTR [rax+rcx*2]
140ab89f2: mov    WORD PTR [rbx+0x2],cx
140ab89f6: lea    rcx,[rbp+0x208]
140ab89fd: call   0x14006f750
140ab8a02: mov    BYTE PTR [rbx+0xa],0x0
140ab8a06: mov    rcx,rbx
140ab8a09: call   0x140a45370
140ab8a0e: mov    r10d,eax
140ab8a11: mov    eax,0xbb8
140ab8a16: cdq
140ab8a17: idiv   r10d
140ab8a1a: mov    WORD PTR [rbx+0xc],ax
140ab8a1e: mov    WORD PTR [rbx+0x38],r12w
140ab8a23: mov    DWORD PTR [rbx+0x1c],0x1
140ab8a2a: or     DWORD PTR [rbx+0x18],0x8
140ab8a2e: test   BYTE PTR [rbx+0x18],0x2
140ab8a32: je     0x140ab8a66
140ab8a34: mov    QWORD PTR [rbp-0x18],rbx
140ab8a38: mov    rdx,QWORD PTR [rip+0x1918b61]        # 0x1423d15a0
140ab8a3f: cmp    rdx,QWORD PTR [rip+0x1918b62]        # 0x1423d15a8
140ab8a46: je     0x140ab8a55
140ab8a48: mov    QWORD PTR [rdx],rbx
140ab8a4b: add    QWORD PTR [rip+0x1918b4d],0x8        # 0x1423d15a0
140ab8a53: jmp    0x140ab8a66
140ab8a55: lea    r8,[rbp-0x18]
140ab8a59: lea    rcx,[rip+0x1918b38]        # 0x1423d1598
140ab8a60: call   0x140070bd0
140ab8a65: nop
140ab8a66: lea    rcx,[rbp+0x20]
140ab8a6a: call   0x14006f7b0
140ab8a6f: add    rsi,0x8
140ab8a73: jmp    0x140ab86b0
140ab8a78: mov    ebx,0x1
140ab8a7d: xor    r12d,r12d
140ab8a80: mov    r11,QWORD PTR [r15+0x98]
140ab8a87: sub    r11,QWORD PTR [r15+0x90]
140ab8a8e: sar    r11,0x3
140ab8a92: sub    r11d,0x1
140ab8a96: mov    QWORD PTR [rsp+0x70],r11
140ab8a9b: js     0x140aba260
140ab8aa1: movsxd r13,r11d
140ab8aa4: mov    QWORD PTR [rbp-0x38],r13
140ab8aa8: mov    r14d,0xc8
140ab8aae: mov    rax,QWORD PTR [r15+0x90]
140ab8ab5: mov    rdi,QWORD PTR [rax+r13*8]
140ab8ab9: mov    rcx,rdi
140ab8abc: call   0x140a45370
140ab8ac1: mov    r10d,eax
140ab8ac4: cmp    DWORD PTR [rip+0xde37cd],0x0        # 0x14189c298
140ab8acb: mov    eax,DWORD PTR [rip+0x18cf4f3]        # 0x142387fc4
140ab8ad1: je     0x140ab8ad9
140ab8ad3: mov    eax,DWORD PTR [rip+0x18bbc5b]        # 0x142374734
140ab8ad9: add    eax,r11d
140ab8adc: cdq
140ab8add: idiv   r10d
140ab8ae0: test   edx,edx
140ab8ae2: jne    0x140aba184
140ab8ae8: test   BYTE PTR [rdi+0x18],0x4
140ab8aec: je     0x140ab9427
140ab8af2: cmp    DWORD PTR [rip+0xde379f],0x1        # 0x14189c298
140ab8af9: je     0x140ab8b32
140ab8afb: call   0x140eb68b0
140ab8b00: mov    r8d,eax
140ab8b03: mov    eax,0x3
140ab8b08: mul    r8d
140ab8b0b: mov    ecx,r8d
140ab8b0e: sub    ecx,edx
140ab8b10: shr    ecx,1
140ab8b12: add    ecx,edx
140ab8b14: shr    ecx,0x1e
140ab8b17: imul   ecx,ecx,0x7fffffff
140ab8b1d: sub    r8d,ecx
140ab8b20: cmp    r8d,0x147ae15
140ab8b27: jae    0x140ab9427
140ab8b2d: mov    r11,QWORD PTR [rsp+0x70]
140ab8b32: movsx  rcx,WORD PTR [rdi+0x8]
140ab8b37: movsx  r9,WORD PTR [rdi+0x6]
140ab8b3c: movsx  r8d,WORD PTR [rdi+0x4]
140ab8b41: test   r8w,r8w
140ab8b45: js     0x140ab8bfd
140ab8b4b: cmp    r8d,DWORD PTR [r15+0x116bec]
140ab8b52: jge    0x140ab8bfd
140ab8b58: test   r9w,r9w
140ab8b5c: js     0x140ab8bfd
140ab8b62: cmp    r9d,DWORD PTR [r15+0x116bf0]
140ab8b69: jge    0x140ab8bfd
140ab8b6f: test   cx,cx
140ab8b72: js     0x140ab8bfd
140ab8b78: cmp    ecx,DWORD PTR [r15+0x116bf4]
140ab8b7f: jge    0x140ab8bfd
140ab8b81: movzx  eax,r8w
140ab8b85: sar    ax,0x4
140ab8b89: mov    r10,QWORD PTR [r15+0x116bb8]
140ab8b90: test   r10,r10
140ab8b93: jne    0x140ab8ba5
140ab8b95: movzx  ecx,WORD PTR [rdi+0x8]
140ab8b99: movzx  r9d,WORD PTR [rdi+0x6]
140ab8b9e: movzx  r8d,WORD PTR [rdi+0x4]
140ab8ba3: jmp    0x140ab8c15
140ab8ba5: movsx  rax,ax
140ab8ba9: mov    rdx,r9
140ab8bac: sar    rdx,0x4
140ab8bb0: mov    rax,QWORD PTR [r10+rax*8]
140ab8bb4: mov    rax,QWORD PTR [rax+rdx*8]
140ab8bb8: mov    rdx,QWORD PTR [rax+rcx*8]
140ab8bbc: test   rdx,rdx
140ab8bbf: je     0x140ab8bfd
140ab8bc1: mov    eax,r8d
140ab8bc4: and    eax,0x8000000f
140ab8bc9: jge    0x140ab8bd2
140ab8bcb: dec    eax
140ab8bcd: or     eax,0xfffffff0
140ab8bd0: inc    eax
140ab8bd2: movsxd rcx,eax
140ab8bd5: shl    rcx,0x4
140ab8bd9: mov    eax,r9d
140ab8bdc: and    eax,0x8000000f
140ab8be1: jge    0x140ab8bea
140ab8be3: dec    eax
140ab8be5: or     eax,0xfffffff0
140ab8be8: inc    eax
140ab8bea: cdqe
140ab8bec: add    rcx,rax
140ab8bef: test   BYTE PTR [rdx+rcx*4+0x6a0],0x8
140ab8bf7: jne    0x140ab8cd9
140ab8bfd: movzx  ecx,WORD PTR [rdi+0x8]
140ab8c01: movzx  r9d,WORD PTR [rdi+0x6]
140ab8c06: movzx  r8d,WORD PTR [rdi+0x4]
140ab8c0b: test   r8w,r8w
140ab8c0f: js     0x140aba184
140ab8c15: movsx  eax,r8w
140ab8c19: cmp    eax,DWORD PTR [r15+0x116bec]
140ab8c20: jge    0x140aba184
140ab8c26: test   r9w,r9w
140ab8c2a: js     0x140aba184
140ab8c30: movsx  eax,r9w
140ab8c34: cmp    eax,DWORD PTR [r15+0x116bf0]
140ab8c3b: jge    0x140aba184
140ab8c41: test   cx,cx
140ab8c44: js     0x140aba184
140ab8c4a: movsx  eax,cx
140ab8c4d: cmp    eax,DWORD PTR [r15+0x116bf4]
140ab8c54: jge    0x140aba184
140ab8c5a: movzx  eax,r8w
140ab8c5e: sar    ax,0x4
140ab8c62: movzx  edx,r9w
140ab8c66: sar    dx,0x4
140ab8c6a: mov    r10,QWORD PTR [r15+0x116bb8]
140ab8c71: test   r10,r10
140ab8c74: je     0x140aba184
140ab8c7a: movsx  rax,ax
140ab8c7e: movsx  rdx,dx
140ab8c82: mov    rax,QWORD PTR [r10+rax*8]
140ab8c86: movsx  rcx,cx
140ab8c8a: mov    rax,QWORD PTR [rax+rdx*8]
140ab8c8e: mov    rdx,QWORD PTR [rax+rcx*8]
140ab8c92: test   rdx,rdx
140ab8c95: je     0x140aba184
140ab8c9b: movsx  eax,r8w
140ab8c9f: and    eax,0x8000000f
140ab8ca4: jge    0x140ab8cad
140ab8ca6: dec    eax
140ab8ca8: or     eax,0xfffffff0
140ab8cab: inc    eax
140ab8cad: movsxd rcx,eax
140ab8cb0: shl    rcx,0x4
140ab8cb4: movsx  eax,r9w
140ab8cb8: and    eax,0x8000000f
140ab8cbd: jge    0x140ab8cc6
140ab8cbf: dec    eax
140ab8cc1: or     eax,0xfffffff0
140ab8cc4: inc    eax
140ab8cc6: cdqe
140ab8cc8: add    rcx,rax
140ab8ccb: test   BYTE PTR [rdx+rcx*4+0x6a0],0x10
140ab8cd3: je     0x140aba184
140ab8cd9: xor    bl,bl
140ab8cdb: mov    r14d,r12d
140ab8cde: mov    rdx,QWORD PTR [r15+0x13bd8]
140ab8ce5: mov    rax,QWORD PTR [r15+0x13be0]
140ab8cec: sub    rax,rdx
140ab8cef: sar    rax,0x3
140ab8cf3: test   rax,rax
140ab8cf6: je     0x140aba184
140ab8cfc: mov    rsi,r12
140ab8cff: mov    r12d,0x1
140ab8d05: data16 data16 nop WORD PTR [rax+rax*1+0x0]
140ab8d10: mov    rcx,QWORD PTR [rdx+rsi*1]
140ab8d14: mov    eax,DWORD PTR [rcx+0x110]
140ab8d1a: test   eax,0x102
140ab8d1f: jne    0x140ab8d55
140ab8d21: bt     eax,0x10
140ab8d25: jb     0x140ab8d55
140ab8d27: bt     eax,0x19
140ab8d2b: jb     0x140ab8d55
140ab8d2d: test   DWORD PTR [rcx+0x114],0x80000
140ab8d37: jne    0x140ab8d55
140ab8d39: movzx  r9d,WORD PTR [rdi+0x8]
140ab8d3e: movzx  r8d,WORD PTR [rdi+0x6]
140ab8d43: movzx  edx,WORD PTR [rdi+0x4]
140ab8d47: call   0x14014da20
140ab8d4c: movzx  ebx,bl
140ab8d4f: test   al,al
140ab8d51: cmovne ebx,r12d
140ab8d55: inc    r14d
140ab8d58: add    rsi,0x8
140ab8d5c: mov    rdx,QWORD PTR [r15+0x13bd8]
140ab8d63: mov    rcx,QWORD PTR [r15+0x13be0]
140ab8d6a: sub    rcx,rdx
140ab8d6d: sar    rcx,0x3
140ab8d71: movsxd rax,r14d
140ab8d74: cmp    rax,rcx
140ab8d77: jb     0x140ab8d10
140ab8d79: xor    r12d,r12d
140ab8d7c: test   bl,bl
140ab8d7e: je     0x140aba17f
140ab8d84: xorps  xmm0,xmm0
140ab8d87: movdqu XMMWORD PTR [rbp+0x38],xmm0
140ab8d8c: mov    QWORD PTR [rbp+0x48],r12
140ab8d90: movzx  r12d,WORD PTR [rdi+0x20]
140ab8d95: movsx  rax,WORD PTR [rdi]
140ab8d99: test   ax,ax
140ab8d9c: js     0x140ab8e47
140ab8da2: mov    r14,rax
140ab8da5: mov    rax,QWORD PTR [rip+0x1a33cc4]        # 0x1424eca70
140ab8dac: mov    rcx,QWORD PTR [rip+0x1a33cb5]        # 0x1424eca68
140ab8db3: sub    rax,rcx
140ab8db6: sar    rax,0x3
140ab8dba: cmp    r14,rax
140ab8dbd: jae    0x140ab8e47
140ab8dc3: mov    r14,QWORD PTR [rcx+r14*8]
140ab8dc7: mov    esi,DWORD PTR [r14+0x180]
140ab8dce: sub    esi,DWORD PTR [r14+0x178]
140ab8dd5: sar    rsi,0x3
140ab8dd9: sub    si,0x1
140ab8ddd: mov    WORD PTR [rsp+0x60],si
140ab8de2: js     0x140ab8e47
140ab8de4: movzx  eax,si
140ab8de7: mov    rbx,QWORD PTR [rbp+0x40]
140ab8deb: nop    DWORD PTR [rax+rax*1+0x0]
140ab8df0: movzx  ecx,ax
140ab8df3: mov    rax,QWORD PTR [r14+0x178]
140ab8dfa: movzx  edx,r12w
140ab8dfe: mov    rcx,QWORD PTR [rax+rcx*8]
140ab8e02: call   0x140702630
140ab8e07: test   al,al
140ab8e09: jne    0x140ab8e37
140ab8e0b: cmp    rbx,QWORD PTR [rbp+0x48]
140ab8e0f: je     0x140ab8e22
140ab8e11: mov    WORD PTR [rbx],si
140ab8e14: mov    rbx,QWORD PTR [rbp+0x40]
140ab8e18: add    rbx,0x2
140ab8e1c: mov    QWORD PTR [rbp+0x40],rbx
140ab8e20: jmp    0x140ab8e37
140ab8e22: lea    r8,[rsp+0x60]
140ab8e27: mov    rdx,rbx
140ab8e2a: lea    rcx,[rbp+0x38]
140ab8e2e: call   0x140071040
140ab8e33: mov    rbx,QWORD PTR [rbp+0x40]
140ab8e37: sub    si,0x1
140ab8e3b: mov    WORD PTR [rsp+0x60],si
140ab8e40: movzx  eax,si
140ab8e43: jns    0x140ab8df0
140ab8e45: jmp    0x140ab8e4b
140ab8e47: mov    rbx,QWORD PTR [rbp+0x40]
140ab8e4b: mov    rcx,QWORD PTR [rbp+0x38]
140ab8e4f: sub    rbx,rcx
140ab8e52: sar    rbx,1
140ab8e55: je     0x140ab93d3
140ab8e5b: xor    r14b,r14b
140ab8e5e: cmp    DWORD PTR [rdi+0x1c],0x0
140ab8e62: jbe    0x140ab9387
140ab8e68: call   0x1405c1410
140ab8e6d: mov    rbx,rax
140ab8e70: call   0x140eb68b0
140ab8e75: mov    r8d,eax
140ab8e78: mov    eax,0x3
140ab8e7d: mul    r8d
140ab8e80: mov    ecx,r8d
140ab8e83: sub    ecx,edx
140ab8e85: shr    ecx,1
140ab8e87: add    ecx,edx
140ab8e89: shr    ecx,0x1e
140ab8e8c: imul   ecx,ecx,0x80000001
140ab8e92: add    r8d,ecx
140ab8e95: mov    eax,0xbfffffff
140ab8e9a: mul    r8d
140ab8e9d: shr    edx,0x1d
140ab8ea0: dec    dx
140ab8ea3: add    dx,WORD PTR [rdi+0x4]
140ab8ea7: mov    WORD PTR [rbx+0x4],dx
140ab8eab: call   0x140eb68b0
140ab8eb0: mov    r8d,eax
140ab8eb3: mov    eax,0x3
140ab8eb8: mul    r8d
140ab8ebb: mov    ecx,r8d
140ab8ebe: sub    ecx,edx
140ab8ec0: shr    ecx,1
140ab8ec2: add    ecx,edx
140ab8ec4: shr    ecx,0x1e
140ab8ec7: imul   ecx,ecx,0x80000001
140ab8ecd: add    r8d,ecx
140ab8ed0: mov    eax,0xbfffffff
140ab8ed5: mul    r8d
140ab8ed8: shr    edx,0x1d
140ab8edb: dec    dx
140ab8ede: add    dx,WORD PTR [rdi+0x6]
140ab8ee2: mov    WORD PTR [rbx+0x6],dx
140ab8ee6: movsx  eax,WORD PTR [rbx+0x4]
140ab8eea: test   ax,ax
140ab8eed: js     0x140ab8e70
140ab8eef: mov    ecx,DWORD PTR [r15+0x116bec]
140ab8ef6: dec    ecx
140ab8ef8: cmp    eax,ecx
140ab8efa: jg     0x140ab8e70
140ab8f00: test   dx,dx
140ab8f03: js     0x140ab8e70
140ab8f09: mov    ecx,DWORD PTR [r15+0x116bf0]
140ab8f10: dec    ecx
140ab8f12: movsx  eax,dx
140ab8f15: cmp    eax,ecx
140ab8f17: jg     0x140ab8e70
140ab8f1d: movzx  eax,WORD PTR [rdi+0x8]
140ab8f21: mov    WORD PTR [rbx+0x8],ax
140ab8f25: movzx  eax,WORD PTR [rdi]
140ab8f28: mov    WORD PTR [rbx],ax
140ab8f2b: movzx  eax,WORD PTR [rdi+0x2]
140ab8f2f: cmp    ax,0xffff
140ab8f33: jne    0x140ab8f8e
140ab8f35: mov    rsi,QWORD PTR [rbp+0x40]
140ab8f39: mov    rcx,QWORD PTR [rbp+0x38]
140ab8f3d: sub    rsi,rcx
140ab8f40: sar    rsi,1
140ab8f43: cmp    esi,0x1
140ab8f46: ja     0x140ab8f4c
140ab8f48: xor    eax,eax
140ab8f4a: jmp    0x140ab8f88
140ab8f4c: call   0x140eb68b0
140ab8f51: mov    r8d,eax
140ab8f54: mov    eax,0x3
140ab8f59: mul    r8d
140ab8f5c: mov    ecx,r8d
140ab8f5f: sub    ecx,edx
140ab8f61: shr    ecx,1
140ab8f63: add    ecx,edx
140ab8f65: shr    ecx,0x1e
140ab8f68: imul   ecx,ecx,0x80000001
140ab8f6e: add    r8d,ecx
140ab8f71: xor    edx,edx
140ab8f73: mov    eax,0x7fffffff
140ab8f78: div    esi
140ab8f7a: lea    ecx,[rax+0x1]
140ab8f7d: xor    edx,edx
140ab8f7f: mov    eax,r8d
140ab8f82: div    ecx
140ab8f84: mov    rcx,QWORD PTR [rbp+0x38]
140ab8f88: cdqe
140ab8f8a: movzx  eax,WORD PTR [rcx+rax*2]
140ab8f8e: mov    WORD PTR [rbx+0x2],ax
140ab8f92: mov    BYTE PTR [rbx+0xa],0x1
140ab8f96: mov    rcx,rbx
140ab8f99: call   0x140a45370
140ab8f9e: mov    r10d,eax
140ab8fa1: mov    eax,0x2328
140ab8fa6: cdq
140ab8fa7: idiv   r10d
140ab8faa: mov    WORD PTR [rbx+0xc],ax
140ab8fae: movups xmm0,XMMWORD PTR [rdi+0x20]
140ab8fb2: movups XMMWORD PTR [rbx+0x20],xmm0
140ab8fb6: movsd  xmm1,QWORD PTR [rdi+0x30]
140ab8fbb: movsd  QWORD PTR [rbx+0x30],xmm1
140ab8fc0: mov    WORD PTR [rbx+0x38],0x5
140ab8fc6: test   BYTE PTR [rbx+0x18],0x2
140ab8fca: je     0x140ab8ffd
140ab8fcc: mov    QWORD PTR [rbp-0x18],rbx
140ab8fd0: mov    rdx,QWORD PTR [rip+0x19185c9]        # 0x1423d15a0
140ab8fd7: cmp    rdx,QWORD PTR [rip+0x19185ca]        # 0x1423d15a8
140ab8fde: je     0x140ab8fed
140ab8fe0: mov    QWORD PTR [rdx],rbx
140ab8fe3: add    QWORD PTR [rip+0x19185b5],0x8        # 0x1423d15a0
140ab8feb: jmp    0x140ab8ffd
140ab8fed: lea    r8,[rbp-0x18]
140ab8ff1: lea    rcx,[rip+0x19185a0]        # 0x1423d1598
140ab8ff8: call   0x140070bd0
140ab8ffd: test   r14b,r14b
140ab9000: jne    0x140ab9379
140ab9006: cmp    DWORD PTR [rip+0xde328b],0x1        # 0x14189c298
140ab900d: jne    0x140ab9376
140ab9013: test   BYTE PTR [rip+0x18d807a],0x8        # 0x142391094
140ab901a: je     0x140ab9376
140ab9020: xorps  xmm0,xmm0
140ab9023: movups XMMWORD PTR [rbp+0x240],xmm0
140ab902a: mov    esi,0x2
140ab902f: mov    QWORD PTR [rbp+0x250],rsi
140ab9036: mov    QWORD PTR [rbp+0x258],0xf
140ab9041: mov    eax,0x2041
140ab9046: mov    WORD PTR [rbp+0x240],ax
140ab904d: mov    BYTE PTR [rbp+0x242],r14b
140ab9054: movups XMMWORD PTR [rbp+0x220],xmm0
140ab905b: xor    ebx,ebx
140ab905d: mov    QWORD PTR [rbp+0x230],rbx
140ab9064: mov    ecx,0xf
140ab9069: mov    QWORD PTR [rbp+0x238],rcx
140ab9070: mov    BYTE PTR [rbp+0x220],bl
140ab9076: mov    eax,DWORD PTR [rdi+0x1c]
140ab9079: cmp    eax,0x1
140ab907c: ja     0x140ab9130
140ab9082: movsx  rax,WORD PTR [rdi]
140ab9086: mov    r8d,ebx
140ab9089: mov    QWORD PTR [rbp+0x230],rbx
140ab9090: mov    BYTE PTR [rbp+0x220],bl
140ab9096: test   ax,ax
140ab9099: js     0x140ab90f3
140ab909b: mov    rdx,rax
140ab909e: mov    rax,QWORD PTR [rip+0x1a339cb]        # 0x1424eca70
140ab90a5: mov    r9,QWORD PTR [rip+0x1a339bc]        # 0x1424eca68
140ab90ac: sub    rax,r9
140ab90af: sar    rax,0x3
140ab90b3: cmp    rdx,rax
140ab90b6: jae    0x140ab90f3
140ab90b8: mov    rdx,QWORD PTR [r9+rdx*8]
140ab90bc: add    rdx,0x20
140ab90c0: lea    rax,[rbp+0x220]
140ab90c7: cmp    rax,rdx
140ab90ca: je     0x140ab90f3
140ab90cc: mov    r8,QWORD PTR [rdx+0x10]
140ab90d0: cmp    QWORD PTR [rdx+0x18],rcx
140ab90d4: jbe    0x140ab90d9
140ab90d6: mov    rdx,QWORD PTR [rdx]
140ab90d9: lea    rcx,[rbp+0x220]
140ab90e0: call   0x14006f8d0
140ab90e5: mov    rcx,QWORD PTR [rbp+0x238]
140ab90ec: mov    r8,QWORD PTR [rbp+0x230]
140ab90f3: lea    rdx,[rbp+0x220]
140ab90fa: cmp    rcx,0xf
140ab90fe: cmova  rdx,QWORD PTR [rbp+0x220]
140ab9106: lea    rcx,[rbp+0x240]
140ab910d: call   0x14006fa10
140ab9112: mov    r8d,0x14
140ab9118: lea    rdx,[rip+0xc16161]        # 0x1416cf280
140ab911f: lea    rcx,[rbp+0x240]
140ab9126: call   0x14006fa10
140ab912b: jmp    0x140ab921f
140ab9130: lea    rcx,[rbp+0x240]
140ab9137: cmp    eax,0xa
140ab913a: jae    0x140ab9190
140ab913c: mov    r8d,0x9
140ab9142: lea    rdx,[rip+0xc16127]        # 0x1416cf270
140ab9149: call   0x14006fa10
140ab914e: movzx  r8d,WORD PTR [rdi]
140ab9152: mov    QWORD PTR [rbp+0x230],rbx
140ab9159: lea    rax,[rbp+0x220]
140ab9160: cmp    QWORD PTR [rbp+0x238],0xf
140ab9168: cmova  rax,QWORD PTR [rbp+0x220]
140ab9170: mov    BYTE PTR [rax],0x0
140ab9173: mov    BYTE PTR [rsp+0x20],0x0
140ab9178: mov    r9d,esi
140ab917b: lea    rdx,[rbp+0x220]
140ab9182: lea    rcx,[rip+0x1a338bf]        # 0x1424eca48
140ab9189: call   0x140256880
140ab918e: jmp    0x140ab91f9
140ab9190: cmp    eax,0x32
140ab9193: jae    0x140ab91d5
140ab9195: lea    rdx,[rip+0xc15fec]        # 0x1416cf188
140ab919c: call   0x14006f580
140ab91a1: mov    r9d,0xffffffff
140ab91a7: mov    r8b,0x1
140ab91aa: lea    rdx,[rbp+0x220]
140ab91b1: movzx  ecx,WORD PTR [rdi]
140ab91b4: call   0x140aa3bd0
140ab91b9: lea    rdx,[rbp+0x220]
140ab91c0: lea    rcx,[rbp+0x240]
140ab91c7: call   0x1400b9d10
140ab91cc: lea    rdx,[rip+0xc15f9d]        # 0x1416cf170
140ab91d3: jmp    0x140ab9213
140ab91d5: lea    rdx,[rip+0xc15f84]        # 0x1416cf160
140ab91dc: call   0x14006f560
140ab91e1: mov    r9d,0xffffffff
140ab91e7: mov    r8b,0x1
140ab91ea: lea    rdx,[rbp+0x220]
140ab91f1: movzx  ecx,WORD PTR [rdi]
140ab91f4: call   0x140aa3bd0
140ab91f9: lea    rdx,[rbp+0x220]
140ab9200: lea    rcx,[rbp+0x240]
140ab9207: call   0x1400b9d10
140ab920c: lea    rdx,[rip+0xc1606d]        # 0x1416cf280
140ab9213: lea    rcx,[rbp+0x240]
140ab921a: call   0x14006f560
140ab921f: mov    DWORD PTR [rbp+0x15c],ebx
140ab9225: mov    eax,0xffff8ad0
140ab922a: mov    DWORD PTR [rbp+0x160],0x8ad08ad0
140ab9234: mov    WORD PTR [rbp+0x164],ax
140ab923b: mov    DWORD PTR [rbp+0x168],ebx
140ab9241: xorps  xmm0,xmm0
140ab9244: movdqa XMMWORD PTR [rbp+0x170],xmm0
140ab924c: mov    eax,0xffffffff
140ab9251: mov    QWORD PTR [rbp+0x180],0xffffffffffffffff
140ab925c: mov    DWORD PTR [rbp+0x188],eax
140ab9262: mov    DWORD PTR [rbp+0x18c],ebx
140ab9268: mov    DWORD PTR [rbp+0x190],eax
140ab926e: mov    DWORD PTR [rbp+0x150],0x200fd
140ab9278: mov    BYTE PTR [rbp+0x154],0x1
140ab927f: mov    WORD PTR [rbp+0x16c],bx
140ab9286: movzx  eax,WORD PTR [rdi+0x4]
140ab928a: mov    WORD PTR [rbp+0x156],ax
140ab9291: movzx  eax,WORD PTR [rdi+0x6]
140ab9295: mov    WORD PTR [rbp+0x158],ax
140ab929c: movzx  eax,WORD PTR [rdi+0x8]
140ab92a0: mov    WORD PTR [rbp+0x15a],ax
140ab92a7: lea    r8,[rbp+0x150]
140ab92ae: lea    rdx,[rbp+0x240]
140ab92b5: lea    rcx,[rip+0x1a2a594]        # 0x1424e3850
140ab92bc: call   0x1400e3c20
140ab92c1: nop
140ab92c2: mov    rdx,QWORD PTR [rbp+0x238]
140ab92c9: cmp    rdx,0xf
140ab92cd: jbe    0x140ab9303
140ab92cf: inc    rdx
140ab92d2: mov    rcx,QWORD PTR [rbp+0x220]
140ab92d9: mov    rax,rcx
140ab92dc: cmp    rdx,0x1000
140ab92e3: jb     0x140ab92fe
140ab92e5: add    rdx,0x27
140ab92e9: mov    rcx,QWORD PTR [rcx-0x8]
140ab92ed: sub    rax,rcx
140ab92f0: add    rax,0xfffffffffffffff8
140ab92f4: cmp    rax,0x1f
140ab92f8: ja     0x140aba252
140ab92fe: call   0x141539680
140ab9303: mov    QWORD PTR [rbp+0x230],rbx
140ab930a: mov    QWORD PTR [rbp+0x238],0xf
140ab9315: mov    BYTE PTR [rbp+0x220],0x0
140ab931c: mov    rdx,QWORD PTR [rbp+0x258]
140ab9323: cmp    rdx,0xf
140ab9327: jbe    0x140ab935d
140ab9329: inc    rdx
140ab932c: mov    rcx,QWORD PTR [rbp+0x240]
140ab9333: mov    rax,rcx
140ab9336: cmp    rdx,0x1000
140ab933d: jb     0x140ab9358
140ab933f: add    rdx,0x27
140ab9343: mov    rcx,QWORD PTR [rcx-0x8]
140ab9347: sub    rax,rcx
140ab934a: add    rax,0xfffffffffffffff8
140ab934e: cmp    rax,0x1f
140ab9352: ja     0x140aba259
140ab9358: call   0x141539680
140ab935d: mov    QWORD PTR [rbp+0x250],rbx
140ab9364: mov    QWORD PTR [rbp+0x258],0xf
140ab936f: mov    BYTE PTR [rbp+0x240],0x0
140ab9376: mov    r14b,0x1
140ab9379: add    DWORD PTR [rdi+0x1c],0xffffffff
140ab937d: jne    0x140ab8e68
140ab9383: mov    rcx,QWORD PTR [rbp+0x38]
140ab9387: mov    r10,QWORD PTR [rdi+0x10]
140ab938b: test   r10,r10
140ab938e: je     0x140ab93b7
140ab9390: or     DWORD PTR [rdi+0x18],0x1
140ab9394: mov    eax,0xffff8ad0
140ab9399: mov    r9d,eax
140ab939c: mov    r8d,eax
140ab939f: mov    BYTE PTR [rsp+0x28],0x1
140ab93a4: mov    WORD PTR [rsp+0x20],ax
140ab93a9: mov    dl,0x1
140ab93ab: mov    rcx,r10
140ab93ae: call   0x140ab52d0
140ab93b3: mov    rcx,QWORD PTR [rbp+0x38]
140ab93b7: mov    rax,QWORD PTR [r15+0x90]
140ab93be: mov    rdx,QWORD PTR [rax+r13*8]
140ab93c2: test   rdx,rdx
140ab93c5: je     0x140ab93d3
140ab93c7: mov    rcx,rdx
140ab93ca: call   0x14054b4b0
140ab93cf: mov    rcx,QWORD PTR [rbp+0x38]
140ab93d3: test   rcx,rcx
140ab93d6: je     0x140aba17c
140ab93dc: mov    rdx,QWORD PTR [rbp+0x48]
140ab93e0: sub    rdx,rcx
140ab93e3: sar    rdx,1
140ab93e6: add    rdx,rdx
140ab93e9: mov    rax,rcx
140ab93ec: cmp    rdx,0x1000
140ab93f3: jb     0x140ab940e
140ab93f5: add    rdx,0x27
140ab93f9: mov    rcx,QWORD PTR [rcx-0x8]
140ab93fd: sub    rax,rcx
140ab9400: add    rax,0xfffffffffffffff8
140ab9404: cmp    rax,0x1f
140ab9408: ja     0x140abab59
140ab940e: call   0x141539680
140ab9413: xorps  xmm0,xmm0
140ab9416: movdqu XMMWORD PTR [rbp+0x38],xmm0
140ab941b: xor    r12d,r12d
140ab941e: mov    QWORD PTR [rbp+0x48],r12
140ab9422: jmp    0x140aba17f
140ab9427: call   0x140eb68b0
140ab942c: mov    r8d,eax
140ab942f: mov    eax,0x3
140ab9434: mul    r8d
140ab9437: mov    ecx,r8d
140ab943a: sub    ecx,edx
140ab943c: shr    ecx,1
140ab943e: add    ecx,edx
140ab9440: shr    ecx,0x1e
140ab9443: imul   ecx,ecx,0x7fffffff
140ab9449: sub    r8d,ecx
140ab944c: cmp    r8d,0x1999999a
140ab9453: jae    0x140ab9463
140ab9455: test   BYTE PTR [rdi+0x18],0x6
140ab9459: jne    0x140ab9463
140ab945b: mov    eax,ebx
140ab945d: sub    al,BYTE PTR [rdi+0xa]
140ab9460: mov    BYTE PTR [rdi+0xa],al
140ab9463: movsx  rdx,WORD PTR [rdi+0x2]
140ab9468: movsx  rax,WORD PTR [rdi]
140ab946c: test   ax,ax
140ab946f: js     0x140ab95a3
140ab9475: mov    rcx,QWORD PTR [r15+0x11b578]
140ab947c: mov    r8,rax
140ab947f: mov    rax,QWORD PTR [r15+0x11b580]
140ab9486: sub    rax,rcx
140ab9489: sar    rax,0x3
140ab948d: cmp    r8,rax
140ab9490: jae    0x140ab95a3
140ab9496: test   dx,dx
140ab9499: js     0x140ab95a3
140ab949f: mov    rax,QWORD PTR [rcx+r8*8]
140ab94a3: mov    rcx,QWORD PTR [rax+0x178]
140ab94aa: mov    rax,QWORD PTR [rax+0x180]
140ab94b1: sub    rax,rcx
140ab94b4: sar    rax,0x3
140ab94b8: cmp    rdx,rax
140ab94bb: jae    0x140ab95a3
140ab94c1: mov    rax,QWORD PTR [rcx+rdx*8]
140ab94c5: cmp    DWORD PTR [rax+0x6b0],0x3
140ab94cc: jle    0x140ab94df
140ab94ce: mov    rax,QWORD PTR [rax+0x6a8]
140ab94d5: test   BYTE PTR [rax+0x3],0x1
140ab94d9: je     0x140ab94df
140ab94db: mov    al,0x1
140ab94dd: jmp    0x140ab94e1
140ab94df: xor    al,al
140ab94e1: test   al,al
140ab94e3: je     0x140ab95a3
140ab94e9: movsx  rcx,WORD PTR [rdi+0x8]
140ab94ee: movsx  r9,WORD PTR [rdi+0x6]
140ab94f3: movsx  r8d,WORD PTR [rdi+0x4]
140ab94f8: test   r8w,r8w
140ab94fc: js     0x140ab9594
140ab9502: cmp    r8d,DWORD PTR [r15+0x116bec]
140ab9509: jge    0x140ab9594
140ab950f: test   r9w,r9w
140ab9513: js     0x140ab9594
140ab9515: cmp    r9d,DWORD PTR [r15+0x116bf0]
140ab951c: jge    0x140ab9594
140ab951e: test   cx,cx
140ab9521: js     0x140ab9594
140ab9523: cmp    ecx,DWORD PTR [r15+0x116bf4]
140ab952a: jge    0x140ab9594
140ab952c: movzx  eax,r8w
140ab9530: sar    ax,0x4
140ab9534: mov    r10,QWORD PTR [r15+0x116bb8]
140ab953b: test   r10,r10
140ab953e: je     0x140ab9594
140ab9540: movsx  rax,ax
140ab9544: mov    rdx,r9
140ab9547: sar    rdx,0x4
140ab954b: mov    rax,QWORD PTR [r10+rax*8]
140ab954f: mov    rax,QWORD PTR [rax+rdx*8]
140ab9553: mov    rdx,QWORD PTR [rax+rcx*8]
140ab9557: test   rdx,rdx
140ab955a: je     0x140ab9594
140ab955c: mov    eax,r8d
140ab955f: and    eax,0x8000000f
140ab9564: jge    0x140ab956d
140ab9566: dec    eax
140ab9568: or     eax,0xfffffff0
140ab956b: inc    eax
140ab956d: movsxd rcx,eax
140ab9570: add    rcx,0x5
140ab9574: shl    rcx,0x4
140ab9578: mov    eax,r9d
140ab957b: and    eax,0x8000000f
140ab9580: jge    0x140ab9589
140ab9582: dec    eax
140ab9584: or     eax,0xfffffff0
140ab9587: inc    eax
140ab9589: cdqe
140ab958b: add    rcx,rax
140ab958e: movzx  ecx,WORD PTR [rdx+rcx*2]
140ab9592: jmp    0x140ab9597
140ab9594: mov    ecx,r12d
140ab9597: call   0x140289050
140ab959c: test   al,al
140ab959e: jne    0x140ab95a3
140ab95a0: mov    BYTE PTR [rdi+0xa],al
140ab95a3: call   0x140eb68b0
140ab95a8: mov    r8d,eax
140ab95ab: mov    eax,0x3
140ab95b0: mul    r8d
140ab95b3: mov    ecx,r8d
140ab95b6: sub    ecx,edx
140ab95b8: shr    ecx,1
140ab95ba: add    ecx,edx
140ab95bc: shr    ecx,0x1e
140ab95bf: imul   ecx,ecx,0x7fffffff
140ab95c5: sub    r8d,ecx
140ab95c8: cmp    r8d,0x2aaaaaab
140ab95cf: jb     0x140ab97ae
140ab95d5: movsx  rcx,WORD PTR [rdi+0x8]
140ab95da: movsx  r9,WORD PTR [rdi+0x6]
140ab95df: movsx  r8d,WORD PTR [rdi+0x4]
140ab95e4: test   r8w,r8w
140ab95e8: js     0x140ab96a0
140ab95ee: cmp    r8d,DWORD PTR [r15+0x116bec]
140ab95f5: jge    0x140ab96a0
140ab95fb: test   r9w,r9w
140ab95ff: js     0x140ab96a0
140ab9605: cmp    r9d,DWORD PTR [r15+0x116bf0]
140ab960c: jge    0x140ab96a0
140ab9612: test   cx,cx
140ab9615: js     0x140ab96a0
140ab961b: cmp    ecx,DWORD PTR [r15+0x116bf4]
140ab9622: jge    0x140ab96a0
140ab9624: movzx  eax,r8w
140ab9628: sar    ax,0x4
140ab962c: mov    r10,QWORD PTR [r15+0x116bb8]
140ab9633: test   r10,r10
140ab9636: jne    0x140ab9648
140ab9638: movzx  ecx,WORD PTR [rdi+0x8]
140ab963c: movzx  r9d,WORD PTR [rdi+0x6]
140ab9641: movzx  r8d,WORD PTR [rdi+0x4]
140ab9646: jmp    0x140ab96b8
140ab9648: movsx  rax,ax
140ab964c: mov    rdx,r9
140ab964f: sar    rdx,0x4
140ab9653: mov    rax,QWORD PTR [r10+rax*8]
140ab9657: mov    rax,QWORD PTR [rax+rdx*8]
140ab965b: mov    rdx,QWORD PTR [rax+rcx*8]
140ab965f: test   rdx,rdx
140ab9662: je     0x140ab96a0
140ab9664: mov    eax,r8d
140ab9667: and    eax,0x8000000f
140ab966c: jge    0x140ab9675
140ab966e: dec    eax
140ab9670: or     eax,0xfffffff0
140ab9673: inc    eax
140ab9675: movsxd rcx,eax
140ab9678: shl    rcx,0x4
140ab967c: mov    eax,r9d
140ab967f: and    eax,0x8000000f
140ab9684: jge    0x140ab968d
140ab9686: dec    eax
140ab9688: or     eax,0xfffffff0
140ab968b: inc    eax
140ab968d: cdqe
140ab968f: add    rcx,rax
140ab9692: test   BYTE PTR [rdx+rcx*4+0x6a0],0x8
140ab969a: jne    0x140ab977c
140ab96a0: movzx  ecx,WORD PTR [rdi+0x8]
140ab96a4: movzx  r9d,WORD PTR [rdi+0x6]
140ab96a9: movzx  r8d,WORD PTR [rdi+0x4]
140ab96ae: test   r8w,r8w
140ab96b2: js     0x140ab9a8e
140ab96b8: movsx  eax,r8w
140ab96bc: cmp    eax,DWORD PTR [r15+0x116bec]
140ab96c3: jge    0x140ab9a8e
140ab96c9: test   r9w,r9w
140ab96cd: js     0x140ab9a8e
140ab96d3: movsx  eax,r9w
140ab96d7: cmp    eax,DWORD PTR [r15+0x116bf0]
140ab96de: jge    0x140ab9a8e
140ab96e4: test   cx,cx
140ab96e7: js     0x140ab9a8e
140ab96ed: movsx  eax,cx
140ab96f0: cmp    eax,DWORD PTR [r15+0x116bf4]
140ab96f7: jge    0x140ab9a8e
140ab96fd: movzx  eax,r8w
140ab9701: sar    ax,0x4
140ab9705: movzx  edx,r9w
140ab9709: sar    dx,0x4
140ab970d: mov    r10,QWORD PTR [r15+0x116bb8]
140ab9714: test   r10,r10
140ab9717: je     0x140ab9a8e
140ab971d: movsx  rax,ax
140ab9721: movsx  rdx,dx
140ab9725: mov    rax,QWORD PTR [r10+rax*8]
140ab9729: movsx  rcx,cx
140ab972d: mov    rax,QWORD PTR [rax+rdx*8]
140ab9731: mov    rdx,QWORD PTR [rax+rcx*8]
140ab9735: test   rdx,rdx
140ab9738: je     0x140ab9a8e
140ab973e: movsx  eax,r8w
140ab9742: and    eax,0x8000000f
140ab9747: jge    0x140ab9750
140ab9749: dec    eax
140ab974b: or     eax,0xfffffff0
140ab974e: inc    eax
140ab9750: movsxd rcx,eax
140ab9753: shl    rcx,0x4
140ab9757: movsx  eax,r9w
140ab975b: and    eax,0x8000000f
140ab9760: jge    0x140ab9769
140ab9762: dec    eax
140ab9764: or     eax,0xfffffff0
140ab9767: inc    eax
140ab9769: cdqe
140ab976b: add    rcx,rax
140ab976e: test   BYTE PTR [rdx+rcx*4+0x6a0],0x10
140ab9776: je     0x140ab9a8e
140ab977c: call   0x140eb68b0
140ab9781: mov    r8d,eax
140ab9784: mov    eax,0x3
140ab9789: mul    r8d
140ab978c: mov    ecx,r8d
140ab978f: sub    ecx,edx
140ab9791: shr    ecx,1
140ab9793: add    ecx,edx
140ab9795: shr    ecx,0x1e
140ab9798: imul   ecx,ecx,0x7fffffff
140ab979e: sub    r8d,ecx
140ab97a1: cmp    r8d,0x2aaaaaab
140ab97a8: jb     0x140ab9a8e
140ab97ae: test   BYTE PTR [rdi+0x18],0x2
140ab97b2: jne    0x140ab9a8e
140ab97b8: call   0x140eb68b0
140ab97bd: mov    r8d,eax
140ab97c0: mov    eax,0x3
140ab97c5: mul    r8d
140ab97c8: mov    ecx,r8d
140ab97cb: sub    ecx,edx
140ab97cd: shr    ecx,1
140ab97cf: add    ecx,edx
140ab97d1: shr    ecx,0x1e
140ab97d4: imul   ecx,ecx,0x7fffffff
140ab97da: sub    r8d,ecx
140ab97dd: mov    eax,0xbfffffff
140ab97e2: mul    r8d
140ab97e5: mov    esi,edx
140ab97e7: shr    esi,0x1d
140ab97ea: dec    si
140ab97ed: call   0x140eb68b0
140ab97f2: mov    r8d,eax
140ab97f5: mov    eax,0x3
140ab97fa: mul    r8d
140ab97fd: mov    ecx,r8d
140ab9800: sub    ecx,edx
140ab9802: shr    ecx,1
140ab9804: add    ecx,edx
140ab9806: shr    ecx,0x1e
140ab9809: imul   ecx,ecx,0x7fffffff
140ab980f: sub    r8d,ecx
140ab9812: mov    eax,0xbfffffff
140ab9817: mul    r8d
140ab981a: mov    r14d,edx
140ab981d: shr    r14d,0x1d
140ab9821: dec    r14w
140ab9825: movzx  ebx,r12w
140ab9829: call   0x140eb68b0
140ab982e: mov    r8d,eax
140ab9831: mov    eax,0x3
140ab9836: mul    r8d
140ab9839: mov    ecx,r8d
140ab983c: sub    ecx,edx
140ab983e: shr    ecx,1
140ab9840: add    ecx,edx
140ab9842: shr    ecx,0x1e
140ab9845: imul   ecx,ecx,0x7fffffff
140ab984b: sub    r8d,ecx
140ab984e: cmp    r8d,0x2aaaaaab
140ab9855: jae    0x140ab9889
140ab9857: movzx  esi,r12w
140ab985b: movzx  r14d,r12w
140ab985f: call   0x140eb68b0
140ab9864: mov    ebx,eax
140ab9866: mov    eax,0x3
140ab986b: mul    ebx
140ab986d: mov    ecx,ebx
140ab986f: sub    ecx,edx
140ab9871: shr    ecx,1
140ab9873: add    ecx,edx
140ab9875: shr    ecx,0x1e
140ab9878: imul   ecx,ecx,0x80000001
140ab987e: add    ebx,ecx
140ab9880: shr    ebx,0x1e
140ab9883: add    bx,bx
140ab9886: dec    bx
140ab9889: movzx  ecx,bx
140ab988c: add    cx,WORD PTR [rdi+0x8]
140ab9890: movzx  eax,r14w
140ab9894: add    ax,WORD PTR [rdi+0x6]
140ab9898: movzx  r9d,si
140ab989c: add    r9w,WORD PTR [rdi+0x4]
140ab98a1: mov    WORD PTR [rsp+0x28],cx
140ab98a6: mov    WORD PTR [rsp+0x20],ax
140ab98ab: movzx  r8d,WORD PTR [rdi+0x2]
140ab98b0: movzx  edx,WORD PTR [rdi]
140ab98b3: mov    rcx,r15
140ab98b6: call   0x1414c95a0
140ab98bb: test   al,al
140ab98bd: je     0x140ab9a88
140ab98c3: movzx  r9d,WORD PTR [rdi+0x8]
140ab98c8: movzx  r8d,WORD PTR [rdi+0x6]
140ab98cd: movzx  edx,WORD PTR [rdi+0x4]
140ab98d1: lea    r10d,[rbx+r9*1]
140ab98d5: lea    ecx,[r14+r8*1]
140ab98d9: lea    eax,[rsi+rdx*1]
140ab98dc: mov    WORD PTR [rsp+0x30],r10w
140ab98e2: mov    WORD PTR [rsp+0x28],cx
140ab98e7: mov    WORD PTR [rsp+0x20],ax
140ab98ec: mov    rcx,r15
140ab98ef: call   0x1414472e0
140ab98f4: test   al,al
140ab98f6: je     0x140ab9a88
140ab98fc: add    si,WORD PTR [rdi+0x4]
140ab9900: mov    WORD PTR [rdi+0x4],si
140ab9904: add    WORD PTR [rdi+0x6],r14w
140ab9909: add    WORD PTR [rdi+0x8],bx
140ab990d: mov    rax,QWORD PTR [rdi+0x10]
140ab9911: test   rax,rax
140ab9914: je     0x140ab9932
140ab9916: mov    WORD PTR [rax+0x8],si
140ab991a: mov    rcx,QWORD PTR [rdi+0x10]
140ab991e: movzx  eax,WORD PTR [rdi+0x6]
140ab9922: mov    WORD PTR [rcx+0xa],ax
140ab9926: mov    rcx,QWORD PTR [rdi+0x10]
140ab992a: movzx  eax,WORD PTR [rdi+0x8]
140ab992e: mov    WORD PTR [rcx+0xc],ax
140ab9932: mov    rcx,rdi
140ab9935: call   0x140a456c0
140ab993a: test   al,al
140ab993c: je     0x140ab9a27
140ab9942: mov    ecx,0x14
140ab9947: call   0x140071f30
140ab994c: test   eax,eax
140ab994e: jne    0x140ab9a27
140ab9954: movzx  r8d,WORD PTR [rdi+0x2]
140ab9959: movzx  edx,WORD PTR [rdi]
140ab995c: lea    rcx,[rip+0x1a330e5]        # 0x1424eca48
140ab9963: call   0x1400bba90
140ab9968: mov    rsi,rax
140ab996b: test   rax,rax
140ab996e: je     0x140ab9a27
140ab9974: cmp    WORD PTR [rax+0x3ac0],0xffff
140ab997c: je     0x140ab9a27
140ab9982: mov    ecx,DWORD PTR [rax+0x3ac4]
140ab9988: mov    DWORD PTR [rsp+0x28],ecx
140ab998c: movzx  ecx,WORD PTR [rax+0x3ac0]
140ab9993: mov    WORD PTR [rsp+0x20],cx
140ab9998: movzx  r9d,WORD PTR [rdi+0x8]
140ab999d: movzx  r8d,WORD PTR [rdi+0x6]
140ab99a2: movzx  edx,WORD PTR [rdi+0x4]
140ab99a6: mov    rcx,r15
140ab99a9: call   0x1414c9d40
140ab99ae: test   al,al
140ab99b0: je     0x140ab9a27
140ab99b2: call   0x1408f24c0
140ab99b7: mov    rbx,rax
140ab99ba: movzx  ecx,WORD PTR [rsi+0x3ac0]
140ab99c1: mov    WORD PTR [rax+0xb8],cx
140ab99c8: mov    ecx,DWORD PTR [rsi+0x3ac4]
140ab99ce: mov    DWORD PTR [rax+0xbc],ecx
140ab99d4: lea    rcx,[rsi+0x6a8]
140ab99db: mov    edx,0x34
140ab99e0: call   0x140071f90
140ab99e5: test   al,al
140ab99e7: je     0x140ab99f0
140ab99e9: mov    BYTE PTR [rbx+0x144],0x1
140ab99f0: or     DWORD PTR [rbx+0x10],0x200
140ab99f7: mov    rax,QWORD PTR [rbx]
140ab99fa: mov    r8,QWORD PTR [rax+0x328]
140ab9a01: mov    dl,0x1
140ab9a03: mov    rcx,rbx
140ab9a06: call   r8
140ab9a09: mov    rax,QWORD PTR [rbx]
140ab9a0c: mov    r10,QWORD PTR [rax+0x320]
140ab9a13: movsx  r9d,WORD PTR [rdi+0x8]
140ab9a18: movsx  r8d,WORD PTR [rdi+0x6]
140ab9a1d: movsx  edx,WORD PTR [rdi+0x4]
140ab9a21: mov    rcx,rbx
140ab9a24: call   r10
140ab9a27: mov    rcx,QWORD PTR [r15+0x146b0]
140ab9a2e: mov    rax,QWORD PTR [r15+0x146b8]
140ab9a35: sub    rax,rcx
140ab9a38: sar    rax,0x3
140ab9a3c: sub    eax,0x1
140ab9a3f: js     0x140ab9a88
140ab9a41: movzx  r11d,WORD PTR [rdi+0x4]
140ab9a46: movsxd r9,eax
140ab9a49: lea    r10,[rcx+r9*8]
140ab9a4d: nop    DWORD PTR [rax]
140ab9a50: mov    rcx,QWORD PTR [r10]
140ab9a53: cmp    WORD PTR [rcx+0x8],r11w
140ab9a58: jne    0x140ab9a7e
140ab9a5a: movzx  eax,WORD PTR [rdi+0x6]
140ab9a5e: cmp    WORD PTR [rcx+0xa],ax
140ab9a62: jne    0x140ab9a7e
140ab9a64: movzx  eax,WORD PTR [rdi+0x8]
140ab9a68: cmp    WORD PTR [rcx+0xc],ax
140ab9a6c: jne    0x140ab9a7e
140ab9a6e: mov    rcx,rdi
140ab9a71: call   0x140a45730
140ab9a76: test   al,al
140ab9a78: jne    0x140ab9b25
140ab9a7e: sub    r10,0x8
140ab9a82: sub    r9,0x1
140ab9a86: jns    0x140ab9a50
140ab9a88: mov    r14d,0xc8
140ab9a8e: movzx  eax,WORD PTR [rdi+0xc]
140ab9a92: test   ax,ax
140ab9a95: jle    0x140ab9baf
140ab9a9b: sub    ax,0x1
140ab9a9f: mov    WORD PTR [rdi+0xc],ax
140ab9aa3: jne    0x140ab9baf
140ab9aa9: mov    rcx,QWORD PTR [rdi+0x10]
140ab9aad: test   rcx,rcx
140ab9ab0: je     0x140ab9ad2
140ab9ab2: or     DWORD PTR [rdi+0x18],0x1
140ab9ab6: mov    eax,0xffff8ad0
140ab9abb: mov    r9d,eax
140ab9abe: mov    r8d,eax
140ab9ac1: mov    BYTE PTR [rsp+0x28],0x1
140ab9ac6: mov    WORD PTR [rsp+0x20],ax
140ab9acb: mov    dl,0x1
140ab9acd: call   0x140ab52d0
140ab9ad2: lea    rdx,[rdi+0x20]
140ab9ad6: lea    rcx,[rip+0x1917ccb]        # 0x1423d17a8
140ab9add: call   0x140a422c0
140ab9ae2: test   rax,rax
140ab9ae5: je     0x140ab9b07
140ab9ae7: mov    edx,DWORD PTR [rax+0x4]
140ab9aea: cmp    edx,0x989681
140ab9af0: je     0x140ab9b07
140ab9af2: add    edx,DWORD PTR [rdi+0x1c]
140ab9af5: mov    DWORD PTR [rax+0x4],edx
140ab9af8: cmp    edx,0x989680
140ab9afe: jbe    0x140ab9b07
140ab9b00: mov    DWORD PTR [rax+0x4],0x989680
140ab9b07: mov    rax,QWORD PTR [r15+0x90]
140ab9b0e: mov    rcx,QWORD PTR [rax+r13*8]
140ab9b12: test   rcx,rcx
140ab9b15: je     0x140aba17f
140ab9b1b: call   0x14054b4b0
140ab9b20: jmp    0x140aba17f
140ab9b25: mov    rcx,rdi
140ab9b28: call   0x140a45470
140ab9b2d: test   al,al
140ab9b2f: je     0x140aba239
140ab9b35: call   0x140545360
140ab9b3a: mov    rbx,rax
140ab9b3d: movzx  ecx,WORD PTR [rdi]
140ab9b40: mov    WORD PTR [rax+0xb8],cx
140ab9b47: movzx  ecx,WORD PTR [rdi+0x2]
140ab9b4b: mov    WORD PTR [rax+0xba],cx
140ab9b52: mov    DWORD PTR [rax+0x80],0x1
140ab9b5c: or     DWORD PTR [rax+0x10],0x80000
140ab9b63: mov    rcx,QWORD PTR [rax]
140ab9b66: mov    r8,QWORD PTR [rcx+0x328]
140ab9b6d: mov    dl,0x1
140ab9b6f: mov    rcx,rax
140ab9b72: call   r8
140ab9b75: mov    rcx,QWORD PTR [rbx]
140ab9b78: mov    r10,QWORD PTR [rcx+0x320]
140ab9b7f: movsx  r9d,WORD PTR [rdi+0x8]
140ab9b84: movsx  r8d,WORD PTR [rdi+0x6]
140ab9b89: movsx  edx,WORD PTR [rdi+0x4]
140ab9b8d: mov    rcx,rbx
140ab9b90: call   r10
140ab9b93: mov    rax,QWORD PTR [rbx]
140ab9b96: mov    r9,QWORD PTR [rax+0x4a8]
140ab9b9d: mov    r8b,0x1
140ab9ba0: movzx  edx,r8b
140ab9ba4: mov    rcx,rbx
140ab9ba7: call   r9
140ab9baa: jmp    0x140aba239
140ab9baf: call   0x140eb68b0
140ab9bb4: mov    r8d,eax
140ab9bb7: mov    eax,0x3
140ab9bbc: mul    r8d
140ab9bbf: mov    ecx,r8d
140ab9bc2: sub    ecx,edx
140ab9bc4: shr    ecx,1
140ab9bc6: add    ecx,edx
140ab9bc8: shr    ecx,0x1e
140ab9bcb: imul   ecx,ecx,0x7fffffff
140ab9bd1: sub    r8d,ecx
140ab9bd4: cmp    r8d,0x1999999a
140ab9bdb: jae    0x140ab9cd1
140ab9be1: cmp    BYTE PTR [rdi+0xa],0x0
140ab9be5: je     0x140ab9cd1
140ab9beb: movsx  rax,WORD PTR [rdi]
140ab9bef: test   ax,ax
140ab9bf2: js     0x140ab9cd1
140ab9bf8: mov    rcx,rax
140ab9bfb: mov    rax,QWORD PTR [rip+0x1a32e6e]        # 0x1424eca70
140ab9c02: mov    rdx,QWORD PTR [rip+0x1a32e5f]        # 0x1424eca68
140ab9c09: sub    rax,rdx
140ab9c0c: sar    rax,0x3
140ab9c10: cmp    rcx,rax
140ab9c13: jae    0x140ab9cd1
140ab9c19: mov    rax,QWORD PTR [rdx+rcx*8]
140ab9c1d: cmp    DWORD PTR [rax+0x1b0],0x0
140ab9c24: jle    0x140ab9c36
140ab9c26: mov    rax,QWORD PTR [rax+0x1a8]
140ab9c2d: test   BYTE PTR [rax],0x8
140ab9c30: je     0x140ab9c36
140ab9c32: mov    al,0x1
140ab9c34: jmp    0x140ab9c38
140ab9c36: xor    al,al
140ab9c38: test   al,al
140ab9c3a: je     0x140ab9cd1
140ab9c40: mov    rbx,QWORD PTR [r15+0x14280]
140ab9c47: sub    rbx,QWORD PTR [r15+0x14278]
140ab9c4e: sar    rbx,0x3
140ab9c52: sub    ebx,0x1
140ab9c55: js     0x140ab9cd1
140ab9c57: movsxd rsi,ebx
140ab9c5a: nop    WORD PTR [rax+rax*1+0x0]
140ab9c60: mov    rax,QWORD PTR [r15+0x14278]
140ab9c67: mov    rcx,QWORD PTR [rax+rsi*8]
140ab9c6b: mov    eax,DWORD PTR [rcx+0x10]
140ab9c6e: and    eax,0x400c11
140ab9c73: cmp    eax,0x1
140ab9c76: jne    0x140ab9cb1
140ab9c78: movzx  eax,WORD PTR [rdi+0x4]
140ab9c7c: cmp    WORD PTR [rcx+0x8],ax
140ab9c80: jne    0x140ab9cb1
140ab9c82: movzx  eax,WORD PTR [rdi+0x6]
140ab9c86: cmp    WORD PTR [rcx+0xa],ax
140ab9c8a: jne    0x140ab9cb1
140ab9c8c: movzx  eax,WORD PTR [rdi+0x8]
140ab9c90: cmp    WORD PTR [rcx+0xc],ax
140ab9c94: jne    0x140ab9cb1
140ab9c96: movzx  eax,WORD PTR [rdi+0xc]
140ab9c9a: cmp    ax,r14w
140ab9c9e: jg     0x140ab9cb1
140ab9ca0: test   ax,ax
140ab9ca3: jns    0x140ab9cbb
140ab9ca5: mov    ecx,r14d
140ab9ca8: call   0x140071f30
140ab9cad: test   eax,eax
140ab9caf: je     0x140ab9cbb
140ab9cb1: dec    ebx
140ab9cb3: sub    rsi,0x1
140ab9cb7: jns    0x140ab9c60
140ab9cb9: jmp    0x140ab9cd1
140ab9cbb: movsxd rax,ebx
140ab9cbe: mov    rdx,QWORD PTR [r15+0x14278]
140ab9cc5: mov    rdx,QWORD PTR [rdx+rax*8]
140ab9cc9: mov    rcx,rdi
140ab9ccc: call   0x140a464c0
140ab9cd1: call   0x140eb68b0
140ab9cd6: mov    r8d,eax
140ab9cd9: mov    eax,0x3
140ab9cde: mul    r8d
140ab9ce1: mov    ecx,r8d
140ab9ce4: sub    ecx,edx
140ab9ce6: shr    ecx,1
140ab9ce8: add    ecx,edx
140ab9cea: shr    ecx,0x1e
140ab9ced: imul   ecx,ecx,0x7fffffff
140ab9cf3: sub    r8d,ecx
140ab9cf6: cmp    r8d,0x51eb852
140ab9cfd: jae    0x140ab9e62
140ab9d03: cmp    BYTE PTR [rdi+0xa],0x0
140ab9d07: je     0x140ab9e62
140ab9d0d: movsx  rdx,WORD PTR [rdi+0x2]
140ab9d12: movsx  rax,WORD PTR [rdi]
140ab9d16: test   ax,ax
140ab9d19: js     0x140ab9e62
140ab9d1f: mov    rcx,QWORD PTR [r15+0x11b578]
140ab9d26: mov    r8,rax
140ab9d29: mov    rax,QWORD PTR [r15+0x11b580]
140ab9d30: sub    rax,rcx
140ab9d33: sar    rax,0x3
140ab9d37: cmp    r8,rax
140ab9d3a: jae    0x140ab9e62
140ab9d40: test   dx,dx
140ab9d43: js     0x140ab9e62
140ab9d49: mov    rax,QWORD PTR [rcx+r8*8]
140ab9d4d: mov    rcx,QWORD PTR [rax+0x178]
140ab9d54: mov    rax,QWORD PTR [rax+0x180]
140ab9d5b: sub    rax,rcx
140ab9d5e: sar    rax,0x3
140ab9d62: cmp    rdx,rax
140ab9d65: jae    0x140ab9e62
140ab9d6b: mov    rax,QWORD PTR [rcx+rdx*8]
140ab9d6f: cmp    DWORD PTR [rax+0x6b0],0x3
140ab9d76: jle    0x140ab9d89
140ab9d78: mov    rax,QWORD PTR [rax+0x6a8]
140ab9d7f: test   BYTE PTR [rax+0x3],0x10
140ab9d83: je     0x140ab9d89
140ab9d85: mov    al,0x1
140ab9d87: jmp    0x140ab9d8b
140ab9d89: xor    al,al
140ab9d8b: test   al,al
140ab9d8d: je     0x140ab9e62
140ab9d93: mov    rbx,QWORD PTR [r15+0x13f80]
140ab9d9a: sub    rbx,QWORD PTR [r15+0x13f78]
140ab9da1: sar    rbx,0x3
140ab9da5: sub    ebx,0x1
140ab9da8: js     0x140ab9e62
140ab9dae: movsxd rsi,ebx
140ab9db1: mov    rax,QWORD PTR [r15+0x13f78]
140ab9db8: mov    rcx,QWORD PTR [rax+rsi*8]
140ab9dbc: test   DWORD PTR [rcx+0x10],0xc38
140ab9dc3: jne    0x140ab9dee
140ab9dc5: movzx  eax,WORD PTR [rdi+0x4]
140ab9dc9: cmp    WORD PTR [rcx+0x8],ax
140ab9dcd: jne    0x140ab9dee
140ab9dcf: movzx  eax,WORD PTR [rdi+0x6]
140ab9dd3: cmp    WORD PTR [rcx+0xa],ax
140ab9dd7: jne    0x140ab9dee
140ab9dd9: movzx  eax,WORD PTR [rdi+0x8]
140ab9ddd: cmp    WORD PTR [rcx+0xc],ax
140ab9de1: jne    0x140ab9dee
140ab9de3: xor    edx,edx
140ab9de5: call   0x140c89e30
140ab9dea: test   al,al
140ab9dec: jne    0x140ab9df8
140ab9dee: dec    ebx
140ab9df0: sub    rsi,0x1
140ab9df4: jns    0x140ab9db1
140ab9df6: jmp    0x140ab9e62
140ab9df8: movsxd rax,ebx
140ab9dfb: lea    rbx,[rax*8+0x0]
140ab9e03: mov    rax,QWORD PTR [r15+0x13f78]
140ab9e0a: mov    rcx,QWORD PTR [rbx+rax*1]
140ab9e0e: mov    rax,QWORD PTR [rcx]
140ab9e11: mov    r8,QWORD PTR [rax+0x480]
140ab9e18: mov    edx,0xffffffff
140ab9e1d: call   r8
140ab9e20: mov    rax,QWORD PTR [r15+0x13f78]
140ab9e27: mov    rcx,QWORD PTR [rbx+rax*1]
140ab9e2b: mov    rax,QWORD PTR [rcx]
140ab9e2e: call   QWORD PTR [rax+0x478]
140ab9e34: test   eax,eax
140ab9e36: jg     0x140ab9e62
140ab9e38: movzx  ecx,WORD PTR [rdi+0x8]
140ab9e3c: mov    rax,QWORD PTR [r15+0x13f78]
140ab9e43: mov    BYTE PTR [rsp+0x28],0x1
140ab9e48: mov    WORD PTR [rsp+0x20],cx
140ab9e4d: movzx  r9d,WORD PTR [rdi+0x6]
140ab9e52: movzx  r8d,WORD PTR [rdi+0x4]
140ab9e57: xor    edx,edx
140ab9e59: mov    rcx,QWORD PTR [rbx+rax*1]
140ab9e5d: call   0x140ab52d0
140ab9e62: movsx  rcx,WORD PTR [rdi+0x2]
140ab9e67: cmp    cx,0xffff
140ab9e6b: je     0x140ab9ec8
140ab9e6d: movsx  rax,WORD PTR [rdi]
140ab9e71: test   ax,ax
140ab9e74: js     0x140ab9ec8
140ab9e76: mov    rdx,rax
140ab9e79: mov    rax,QWORD PTR [rip+0x1a32bf0]        # 0x1424eca70
140ab9e80: mov    r8,QWORD PTR [rip+0x1a32be1]        # 0x1424eca68
140ab9e87: sub    rax,r8
140ab9e8a: sar    rax,0x3
140ab9e8e: cmp    rdx,rax
140ab9e91: jae    0x140ab9ec8
140ab9e93: test   cx,cx
140ab9e96: js     0x140ab9ec3
140ab9e98: mov    rax,QWORD PTR [r8+rdx*8]
140ab9e9c: mov    rdx,QWORD PTR [rax+0x178]
140ab9ea3: mov    rax,QWORD PTR [rax+0x180]
140ab9eaa: sub    rax,rdx
140ab9ead: sar    rax,0x3
140ab9eb1: cmp    rcx,rax
140ab9eb4: jae    0x140ab9ec3
140ab9eb6: mov    rax,QWORD PTR [rdx+rcx*8]
140ab9eba: movzx  ebx,WORD PTR [rax+0x47a]
140ab9ec1: jmp    0x140ab9ecc
140ab9ec3: mov    ebx,r12d
140ab9ec6: jmp    0x140ab9ecc
140ab9ec8: movzx  ebx,r12w
140ab9ecc: call   0x140eb68b0
140ab9ed1: mov    r8d,eax
140ab9ed4: mov    eax,0x3
140ab9ed9: mul    r8d
140ab9edc: mov    ecx,r8d
140ab9edf: sub    ecx,edx
140ab9ee1: shr    ecx,1
140ab9ee3: add    ecx,edx
140ab9ee5: shr    ecx,0x1e
140ab9ee8: imul   ecx,ecx,0x80000001
140ab9eee: add    r8d,ecx
140ab9ef1: mov    eax,0xf9fffd51
140ab9ef6: mul    r8d
140ab9ef9: shr    edx,0x15
140ab9efc: movsx  eax,bx
140ab9eff: cmp    eax,edx
140ab9f01: jle    0x140aba17f
140ab9f07: cmp    BYTE PTR [rdi+0xa],0x0
140ab9f0b: je     0x140aba17f
140ab9f11: movsx  r10,WORD PTR [rdi+0x8]
140ab9f16: movsx  r9d,WORD PTR [rdi+0x6]
140ab9f1b: movsx  r8d,WORD PTR [rdi+0x4]
140ab9f20: test   r8w,r8w
140ab9f24: js     0x140ab9fe6
140ab9f2a: cmp    r8d,DWORD PTR [r15+0x116bec]
140ab9f31: jge    0x140ab9fe6
140ab9f37: test   r9w,r9w
140ab9f3b: js     0x140ab9fe6
140ab9f41: cmp    r9d,DWORD PTR [r15+0x116bf0]
140ab9f48: jge    0x140ab9fe6
140ab9f4e: test   r10w,r10w
140ab9f52: js     0x140ab9fe6
140ab9f58: cmp    r10d,DWORD PTR [r15+0x116bf4]
140ab9f5f: jge    0x140ab9fe6
140ab9f65: movzx  eax,r8w
140ab9f69: sar    ax,0x4
140ab9f6d: movzx  ecx,r9w
140ab9f71: sar    cx,0x4
140ab9f75: mov    r11,QWORD PTR [r15+0x116bb8]
140ab9f7c: test   r11,r11
140ab9f7f: jne    0x140ab9f91
140ab9f81: movzx  ecx,WORD PTR [rdi+0x8]
140ab9f85: movzx  r9d,WORD PTR [rdi+0x6]
140ab9f8a: movzx  r8d,WORD PTR [rdi+0x4]
140ab9f8f: jmp    0x140ab9ffe
140ab9f91: movsx  rax,ax
140ab9f95: movsx  rdx,cx
140ab9f99: mov    rax,QWORD PTR [r11+rax*8]
140ab9f9d: mov    rax,QWORD PTR [rax+rdx*8]
140ab9fa1: mov    rdx,QWORD PTR [rax+r10*8]
140ab9fa5: test   rdx,rdx
140ab9fa8: je     0x140ab9fe6
140ab9faa: mov    eax,r8d
140ab9fad: and    eax,0x8000000f
140ab9fb2: jge    0x140ab9fbb
140ab9fb4: dec    eax
140ab9fb6: or     eax,0xfffffff0
140ab9fb9: inc    eax
140ab9fbb: movsxd rcx,eax
140ab9fbe: shl    rcx,0x4
140ab9fc2: mov    eax,r9d
140ab9fc5: and    eax,0x8000000f
140ab9fca: jge    0x140ab9fd3
140ab9fcc: dec    eax
140ab9fce: or     eax,0xfffffff0
140ab9fd1: inc    eax
140ab9fd3: cdqe
140ab9fd5: add    rcx,rax
140ab9fd8: test   BYTE PTR [rdx+rcx*4+0x6a0],0x8
140ab9fe0: jne    0x140aba0c2
140ab9fe6: movzx  ecx,WORD PTR [rdi+0x8]
140ab9fea: movzx  r9d,WORD PTR [rdi+0x6]
140ab9fef: movzx  r8d,WORD PTR [rdi+0x4]
140ab9ff4: test   r8w,r8w
140ab9ff8: js     0x140aba17f
140ab9ffe: movsx  eax,r8w
140aba002: cmp    eax,DWORD PTR [r15+0x116bec]
140aba009: jge    0x140aba17f
140aba00f: test   r9w,r9w
140aba013: js     0x140aba17f
140aba019: movsx  eax,r9w
140aba01d: cmp    eax,DWORD PTR [r15+0x116bf0]
140aba024: jge    0x140aba17f
140aba02a: test   cx,cx
140aba02d: js     0x140aba17f
140aba033: movsx  eax,cx
140aba036: cmp    eax,DWORD PTR [r15+0x116bf4]
140aba03d: jge    0x140aba17f
140aba043: movzx  eax,r8w
140aba047: sar    ax,0x4
140aba04b: movzx  edx,r9w
140aba04f: sar    dx,0x4
140aba053: mov    r10,QWORD PTR [r15+0x116bb8]
140aba05a: test   r10,r10
140aba05d: je     0x140aba17f
140aba063: movsx  rax,ax
140aba067: movsx  rdx,dx
140aba06b: mov    rax,QWORD PTR [r10+rax*8]
140aba06f: movsx  rcx,cx
140aba073: mov    rax,QWORD PTR [rax+rdx*8]
140aba077: mov    rdx,QWORD PTR [rax+rcx*8]
140aba07b: test   rdx,rdx
140aba07e: je     0x140aba17f
140aba084: movsx  eax,r8w
140aba088: and    eax,0x8000000f
140aba08d: jge    0x140aba096
140aba08f: dec    eax
140aba091: or     eax,0xfffffff0
140aba094: inc    eax
140aba096: movsxd rcx,eax
140aba099: shl    rcx,0x4
140aba09d: movsx  eax,r9w
140aba0a1: and    eax,0x8000000f
140aba0a6: jge    0x140aba0af
140aba0a8: dec    eax
140aba0aa: or     eax,0xfffffff0
140aba0ad: inc    eax
140aba0af: cdqe
140aba0b1: add    rcx,rax
140aba0b4: test   BYTE PTR [rdx+rcx*4+0x6a0],0x10
140aba0bc: je     0x140aba17f
140aba0c2: mov    esi,r12d
140aba0c5: mov    rdx,QWORD PTR [r15+0x13bd8]
140aba0cc: mov    rax,QWORD PTR [r15+0x13be0]
140aba0d3: sub    rax,rdx
140aba0d6: sar    rax,0x3
140aba0da: test   rax,rax
140aba0dd: je     0x140aba17f
140aba0e3: mov    rbx,r12
140aba0e6: data16 nop WORD PTR [rax+rax*1+0x0]
140aba0f0: mov    rcx,QWORD PTR [rdx+rbx*1]
140aba0f4: test   DWORD PTR [rcx+0x110],0x2010102
140aba0fe: jne    0x140aba151
140aba100: movzx  r9d,WORD PTR [rdi+0x8]
140aba105: movzx  r8d,WORD PTR [rdi+0x6]
140aba10a: movzx  edx,WORD PTR [rdi+0x4]
140aba10e: call   0x14014da20
140aba113: test   al,al
140aba115: je     0x140aba151
140aba117: mov    rdx,QWORD PTR [r15+0x13bd8]
140aba11e: mov    rdx,QWORD PTR [rdx+rbx*1]
140aba122: mov    rcx,rdi
140aba125: call   0x140a457a0
140aba12a: movzx  r14d,WORD PTR [rdi+0x2]
140aba12f: movzx  r12d,WORD PTR [rdi]
140aba133: mov    r9d,0x95
140aba139: movzx  r8d,r14w
140aba13d: movzx  edx,r12w
140aba141: lea    rcx,[r15+0x11b558]
140aba148: call   0x140072850
140aba14d: test   al,al
140aba14f: jne    0x140aba1a6
140aba151: inc    esi
140aba153: add    rbx,0x8
140aba157: mov    rdx,QWORD PTR [r15+0x13bd8]
140aba15e: mov    rcx,QWORD PTR [r15+0x13be0]
140aba165: sub    rcx,rdx
140aba168: sar    rcx,0x3
140aba16c: movsxd rax,esi
140aba16f: cmp    rax,rcx
140aba172: jb     0x140aba0f0
140aba178: mov    r13,QWORD PTR [rbp-0x38]
140aba17c: xor    r12d,r12d
140aba17f: mov    r11,QWORD PTR [rsp+0x70]
140aba184: dec    r11d
140aba187: mov    QWORD PTR [rsp+0x70],r11
140aba18c: dec    r13
140aba18f: mov    QWORD PTR [rbp-0x38],r13
140aba193: test   r11d,r11d
140aba196: js     0x140aba260
140aba19c: mov    ebx,0x1
140aba1a1: jmp    0x140ab8aa8
140aba1a6: mov    r9d,0x96
140aba1ac: movzx  r8d,r14w
140aba1b0: movzx  edx,r12w
140aba1b4: lea    rcx,[r15+0x11b558]
140aba1bb: call   0x140072850
140aba1c0: test   al,al
140aba1c2: je     0x140aba232
140aba1c4: call   0x140545360
140aba1c9: mov    rbx,rax
140aba1cc: movzx  ecx,WORD PTR [rdi]
140aba1cf: mov    WORD PTR [rax+0xb8],cx
140aba1d6: movzx  ecx,WORD PTR [rdi+0x2]
140aba1da: mov    WORD PTR [rax+0xba],cx
140aba1e1: mov    DWORD PTR [rax+0x80],0x1
140aba1eb: mov    rcx,QWORD PTR [rax]
140aba1ee: mov    r8,QWORD PTR [rcx+0x328]
140aba1f5: mov    dl,0x1
140aba1f7: mov    rcx,rax
140aba1fa: call   r8
140aba1fd: mov    rdx,QWORD PTR [rbx]
140aba200: mov    r10,QWORD PTR [rdx+0x320]
140aba207: movsx  r9d,WORD PTR [rdi+0x8]
140aba20c: movsx  r8d,WORD PTR [rdi+0x6]
140aba211: movsx  edx,WORD PTR [rdi+0x4]
140aba215: mov    rcx,rbx
140aba218: call   r10
140aba21b: mov    rax,QWORD PTR [rbx]
140aba21e: mov    r9,QWORD PTR [rax+0x4a8]
140aba225: mov    r8b,0x1
140aba228: movzx  edx,r8b
140aba22c: mov    rcx,rbx
140aba22f: call   r9
140aba232: xor    r12d,r12d
140aba235: mov    r13,QWORD PTR [rbp-0x38]
140aba239: mov    rcx,rdi
140aba23c: call   0x140a46280
140aba241: mov    edx,DWORD PTR [rsp+0x70]
140aba245: mov    rcx,r15
140aba248: call   0x14054b490
140aba24d: jmp    0x140aba17f
140aba252: call   QWORD PTR [rip+0xb2b8d0]        # 0x1415e5b28
140aba258: nop
140aba259: call   QWORD PTR [rip+0xb2b8c9]        # 0x1415e5b28
140aba25f: nop
140aba260: mov    rax,QWORD PTR [r15+0x147d8]
140aba267: sub    rax,QWORD PTR [r15+0x147d0]
140aba26e: sar    rax,0x3
140aba272: sub    eax,0x1
140aba275: js     0x140abab29
140aba27b: movsxd r12,eax
140aba27e: xchg   ax,ax
140aba280: mov    rax,QWORD PTR [r15+0x147d0]
140aba287: mov    rcx,QWORD PTR [rax+r12*8]
140aba28b: test   DWORD PTR [rcx+0x10],0xc10
140aba292: jne    0x140abab1f
140aba298: mov    rax,QWORD PTR [rcx]
140aba29b: call   QWORD PTR [rax+0x18]
140aba29e: movsxd rbx,eax
140aba2a1: mov    rcx,QWORD PTR [r15+0x147d0]
140aba2a8: mov    rcx,QWORD PTR [rcx+r12*8]
140aba2ac: mov    rdx,QWORD PTR [rcx]
140aba2af: call   QWORD PTR [rdx+0x10]
140aba2b2: movsx  rcx,ax
140aba2b6: test   cx,cx
140aba2b9: js     0x140aba344
140aba2bf: mov    rax,QWORD PTR [r15+0x11b578]
140aba2c6: mov    rdx,rcx
140aba2c9: mov    rcx,QWORD PTR [r15+0x11b580]
140aba2d0: sub    rcx,rax
140aba2d3: sar    rcx,0x3
140aba2d7: cmp    rdx,rcx
140aba2da: jae    0x140aba344
140aba2dc: test   bx,bx
140aba2df: js     0x140aba344
140aba2e1: mov    rax,QWORD PTR [rax+rdx*8]
140aba2e5: mov    rcx,QWORD PTR [rax+0x178]
140aba2ec: movsx  rdx,bx
140aba2f0: mov    rax,QWORD PTR [rax+0x180]
140aba2f7: sub    rax,rcx
140aba2fa: sar    rax,0x3
140aba2fe: cmp    rdx,rax
140aba301: jae    0x140aba344
140aba303: mov    rax,QWORD PTR [rcx+rdx*8]
140aba307: cmp    DWORD PTR [rax+0x6b0],0x3
140aba30e: jle    0x140aba321
140aba310: mov    rax,QWORD PTR [rax+0x6a8]
140aba317: test   BYTE PTR [rax+0x3],0x20
140aba31b: je     0x140aba321
140aba31d: mov    al,0x1
140aba31f: jmp    0x140aba323
140aba321: xor    al,al
140aba323: test   al,al
140aba325: je     0x140aba344
140aba327: mov    rax,QWORD PTR [r15+0x147d0]
140aba32e: mov    rcx,QWORD PTR [rax+r12*8]
140aba332: mov    eax,DWORD PTR [rcx+0xbc]
140aba338: test   eax,eax
140aba33a: jle    0x140aba344
140aba33c: dec    eax
140aba33e: mov    DWORD PTR [rcx+0xbc],eax
140aba344: mov    rax,QWORD PTR [r15+0x147d0]
140aba34b: mov    rsi,QWORD PTR [rax+r12*8]
140aba34f: test   BYTE PTR [rsi+0x10],0x28
140aba353: je     0x140aba8ef
140aba359: mov    r14d,0xffff8ad0
140aba35f: mov    WORD PTR [rsp+0x6c],r14w
140aba365: mov    eax,DWORD PTR [rsi+0x10]
140aba368: test   al,0x10
140aba36a: jne    0x140aba8ef
140aba370: test   al,0x8
140aba372: je     0x140aba41e
140aba378: mov    rbx,QWORD PTR [rsi+0x38]
140aba37c: mov    rdi,QWORD PTR [rsi+0x40]
140aba380: cmp    rbx,rdi
140aba383: jae    0x140aba3e8
140aba385: mov    rcx,QWORD PTR [rbx]
140aba388: mov    rax,QWORD PTR [rcx]
140aba38b: call   QWORD PTR [rax+0x10]
140aba38e: cmp    eax,0xb
140aba391: je     0x140aba3bd
140aba393: cmp    eax,0x12
140aba396: jne    0x140aba3cb
140aba398: mov    rcx,QWORD PTR [rbx]
140aba39b: mov    rax,QWORD PTR [rcx]
140aba39e: call   QWORD PTR [rax+0x20]
140aba3a1: test   rax,rax
140aba3a4: je     0x140aba3cb
140aba3a6: lea    r9,[rbp-0x80]
140aba3aa: lea    r8,[rbp-0x7c]
140aba3ae: lea    rdx,[rsp+0x6c]
140aba3b3: mov    rcx,rax
140aba3b6: call   0x141367430
140aba3bb: jmp    0x140aba437
140aba3bd: mov    rcx,QWORD PTR [rbx]
140aba3c0: mov    rax,QWORD PTR [rcx]
140aba3c3: call   QWORD PTR [rax+0x18]
140aba3c6: test   rax,rax
140aba3c9: jne    0x140aba3d1
140aba3cb: add    rbx,0x8
140aba3cf: jmp    0x140aba380
140aba3d1: lea    r9,[rbp-0x80]
140aba3d5: lea    r8,[rbp-0x7c]
140aba3d9: lea    rdx,[rsp+0x6c]
140aba3de: mov    rcx,rax
140aba3e1: call   0x140c8baa0
140aba3e6: jmp    0x140aba437
140aba3e8: mov    rax,QWORD PTR [rsi+0x20]
140aba3ec: mov    rcx,QWORD PTR [rsi+0x28]
140aba3f0: cmp    rax,rcx
140aba3f3: jae    0x140aba437
140aba3f5: mov    rdx,QWORD PTR [rax]
140aba3f8: cmp    DWORD PTR [rdx],0x7
140aba3fb: je     0x140aba403
140aba3fd: add    rax,0x8
140aba401: jmp    0x140aba3f0
140aba403: mov    rcx,QWORD PTR [rdx+0x8]
140aba407: movzx  eax,WORD PTR [rcx+0x4]
140aba40b: mov    WORD PTR [rsp+0x6c],ax
140aba410: movzx  eax,WORD PTR [rcx+0x6]
140aba414: mov    WORD PTR [rbp-0x7c],ax
140aba418: movzx  eax,WORD PTR [rcx+0x8]
140aba41c: jmp    0x140aba433
140aba41e: movzx  eax,WORD PTR [rsi+0x8]
140aba422: mov    WORD PTR [rsp+0x6c],ax
140aba427: movzx  eax,WORD PTR [rsi+0xa]
140aba42b: mov    WORD PTR [rbp-0x7c],ax
140aba42f: movzx  eax,WORD PTR [rsi+0xc]
140aba433: mov    WORD PTR [rbp-0x80],ax
140aba437: cmp    WORD PTR [rsp+0x6c],r14w
140aba43d: je     0x140aba8ef
140aba443: xor    sil,sil
140aba446: xor    edx,edx
140aba448: mov    r13d,edx
140aba44b: mov    QWORD PTR [rbp-0x18],rdx
140aba44f: mov    eax,0xffffffff
140aba454: mov    WORD PTR [rsp+0x60],ax
140aba459: mov    DWORD PTR [rsp+0x70],eax
140aba45d: mov    r14d,edx
140aba460: mov    r8,QWORD PTR [r15+0x147d0]
140aba467: mov    rcx,QWORD PTR [r8+r12*8]
140aba46b: mov    rax,QWORD PTR [rcx+0x40]
140aba46f: sub    rax,QWORD PTR [rcx+0x38]
140aba473: sar    rax,0x3
140aba477: test   rax,rax
140aba47a: je     0x140aba550
140aba480: mov    edi,edx
140aba482: lea    r13,[rip+0xffffffffff545b77]        # 0x140000000
140aba489: nop    DWORD PTR [rax+0x0]
140aba490: mov    rax,QWORD PTR [r8+r12*8]
140aba494: mov    rax,QWORD PTR [rax+0x38]
140aba498: mov    rcx,QWORD PTR [rdi+rax*1]
140aba49c: mov    rax,QWORD PTR [rcx]
140aba49f: call   QWORD PTR [rax+0x10]
140aba4a2: cmp    eax,0xb
140aba4a5: jne    0x140aba522
140aba4a7: mov    rax,QWORD PTR [r15+0x147d0]
140aba4ae: mov    rax,QWORD PTR [rax+r12*8]
140aba4b2: mov    rax,QWORD PTR [rax+0x38]
140aba4b6: mov    rcx,QWORD PTR [rdi+rax*1]
140aba4ba: mov    rax,QWORD PTR [rcx]
140aba4bd: call   QWORD PTR [rax+0x18]
140aba4c0: mov    rbx,rax
140aba4c3: test   rax,rax
140aba4c6: je     0x140aba522
140aba4c8: mov    rdx,QWORD PTR [rax]
140aba4cb: mov    rcx,rax
140aba4ce: call   QWORD PTR [rdx]
140aba4d0: movsx  ecx,ax
140aba4d3: add    ecx,0xffffffe9
140aba4d6: cmp    ecx,0x41
140aba4d9: ja     0x140aba4f4
140aba4db: movsxd rcx,ecx
140aba4de: movzx  eax,BYTE PTR [rcx+r13*1+0xabab68]
140aba4e7: mov    ecx,DWORD PTR [r13+rax*4+0xabab60]
140aba4ef: add    rcx,r13
140aba4f2: jmp    rcx
140aba4f4: mov    rax,QWORD PTR [rbx]
140aba4f7: mov    rcx,rbx
140aba4fa: call   QWORD PTR [rax+0x10]
140aba4fd: mov    WORD PTR [rsp+0x60],ax
140aba502: mov    rdx,QWORD PTR [rbx]
140aba505: mov    rcx,rbx
140aba508: call   QWORD PTR [rdx+0x18]
140aba50b: mov    DWORD PTR [rsp+0x70],eax
140aba50f: test   DWORD PTR [rbx+0x10],0x40000
140aba516: movzx  esi,sil
140aba51a: mov    eax,0x1
140aba51f: cmovne esi,eax
140aba522: inc    r14d
140aba525: add    rdi,0x8
140aba529: mov    r8,QWORD PTR [r15+0x147d0]
140aba530: mov    rcx,QWORD PTR [r8+r12*8]
140aba534: mov    rdx,QWORD PTR [rcx+0x40]
140aba538: sub    rdx,QWORD PTR [rcx+0x38]
140aba53c: sar    rdx,0x3
140aba540: movsxd rax,r14d
140aba543: cmp    rax,rdx
140aba546: jb     0x140aba490
140aba54c: mov    r13,QWORD PTR [rbp-0x18]
140aba550: xor    r14d,r14d
140aba553: mov    edi,r14d
140aba556: mov    rcx,QWORD PTR [r8+r12*8]
140aba55a: mov    rax,QWORD PTR [rcx+0x40]
140aba55e: sub    rax,QWORD PTR [rcx+0x38]
140aba562: sar    rax,0x3
140aba566: test   rax,rax
140aba569: je     0x140aba5c8
140aba56b: mov    ebx,r14d
140aba56e: xchg   ax,ax
140aba570: mov    rax,QWORD PTR [r8+r12*8]
140aba574: mov    rax,QWORD PTR [rax+0x38]
140aba578: mov    rcx,QWORD PTR [rbx+rax*1]
140aba57c: mov    rax,QWORD PTR [rcx]
140aba57f: call   QWORD PTR [rax+0x10]
140aba582: cmp    eax,0x13
140aba585: jne    0x140aba5a3
140aba587: mov    rax,QWORD PTR [r15+0x147d0]
140aba58e: mov    rax,QWORD PTR [rax+r12*8]
140aba592: mov    rax,QWORD PTR [rax+0x38]
140aba596: mov    rcx,QWORD PTR [rbx+rax*1]
140aba59a: mov    rax,QWORD PTR [rcx]
140aba59d: call   QWORD PTR [rax+0x20]
140aba5a0: mov    r13,rax
140aba5a3: inc    edi
140aba5a5: add    rbx,0x8
140aba5a9: mov    r8,QWORD PTR [r15+0x147d0]
140aba5b0: mov    rcx,QWORD PTR [r8+r12*8]
140aba5b4: mov    rdx,QWORD PTR [rcx+0x40]
140aba5b8: sub    rdx,QWORD PTR [rcx+0x38]
140aba5bc: sar    rdx,0x3
140aba5c0: movsxd rax,edi
140aba5c3: cmp    rax,rdx
140aba5c6: jb     0x140aba570
140aba5c8: test   r13,r13
140aba5cb: je     0x140aba658
140aba5d1: mov    rax,QWORD PTR [r13+0x4d8]
140aba5d8: test   rax,rax
140aba5db: je     0x140aba8f2
140aba5e1: cmp    WORD PTR [rax+0x14],0x17
140aba5e6: jne    0x140aba8f2
140aba5ec: call   0x140eb68b0
140aba5f1: mov    r8d,eax
140aba5f4: mov    eax,0x3
140aba5f9: mul    r8d
140aba5fc: mov    ecx,r8d
140aba5ff: sub    ecx,edx
140aba601: shr    ecx,1
140aba603: add    ecx,edx
140aba605: shr    ecx,0x1e
140aba608: imul   ecx,ecx,0x7fffffff
140aba60e: sub    r8d,ecx
140aba611: cmp    r8d,0x147ae15
140aba618: jae    0x140aba8f2
140aba61e: mov    rcx,QWORD PTR [r15+0x147d0]
140aba625: mov    dl,0x2
140aba627: mov    rcx,QWORD PTR [rcx+r12*8]
140aba62b: call   0x140c634f0
140aba630: mov    rax,QWORD PTR [r15+0x147d0]
140aba637: mov    rcx,QWORD PTR [rax+r12*8]
140aba63b: mov    rax,QWORD PTR [rcx]
140aba63e: movsx  r9d,WORD PTR [rbp-0x80]
140aba643: movsx  r8d,WORD PTR [rbp-0x7c]
140aba648: movsx  edx,WORD PTR [rsp+0x6c]
140aba64d: call   QWORD PTR [rax+0x320]
140aba653: jmp    0x140abab1f
140aba658: movzx  edi,WORD PTR [rsp+0x60]
140aba65d: cmp    di,0xffff
140aba661: je     0x140aba8f2
140aba667: test   sil,sil
140aba66a: jne    0x140aba8f2
140aba670: mov    rcx,QWORD PTR [r8+r12*8]
140aba674: mov    rax,QWORD PTR [rcx]
140aba677: call   QWORD PTR [rax+0x18]
140aba67a: mov    ebx,eax
140aba67c: mov    rcx,QWORD PTR [r15+0x147d0]
140aba683: mov    rcx,QWORD PTR [rcx+r12*8]
140aba687: mov    rdx,QWORD PTR [rcx]
140aba68a: call   QWORD PTR [rdx+0x10]
140aba68d: mov    r9d,DWORD PTR [rsp+0x70]
140aba692: movzx  r8d,di
140aba696: movzx  edx,bx
140aba699: movzx  ecx,ax
140aba69c: call   0x140a45ee0
140aba6a1: test   al,al
140aba6a3: je     0x140aba8f2
140aba6a9: xorps  xmm0,xmm0
140aba6ac: movups XMMWORD PTR [rbp+0x260],xmm0
140aba6b3: mov    QWORD PTR [rbp+0x270],r14
140aba6ba: mov    QWORD PTR [rbp+0x278],0xf
140aba6c5: mov    BYTE PTR [rbp+0x260],r14b
140aba6cc: movups XMMWORD PTR [rbp+0x280],xmm0
140aba6d3: mov    QWORD PTR [rbp+0x290],r14
140aba6da: mov    QWORD PTR [rbp+0x298],0xf
140aba6e5: mov    BYTE PTR [rbp+0x280],sil
140aba6ec: mov    rax,QWORD PTR [r15+0x147d0]
140aba6f3: mov    rcx,QWORD PTR [rax+r12*8]
140aba6f7: mov    rax,QWORD PTR [rcx]
140aba6fa: call   QWORD PTR [rax+0x18]
140aba6fd: mov    ebx,eax
140aba6ff: mov    rcx,QWORD PTR [r15+0x147d0]
140aba706: mov    rcx,QWORD PTR [rcx+r12*8]
140aba70a: mov    rdx,QWORD PTR [rcx]
140aba70d: call   QWORD PTR [rdx+0x10]
140aba710: lea    r8,[rbp+0x280]
140aba717: movzx  edx,bx
140aba71a: movzx  ecx,ax
140aba71d: call   0x140a460f0
140aba722: mov    rax,QWORD PTR [r15+0x147d0]
140aba729: mov    r13d,0xffffffff
140aba72f: mov    r9d,r13d
140aba732: xor    r8d,r8d
140aba735: lea    rdx,[rbp+0x260]
140aba73c: mov    rcx,QWORD PTR [rax+r12*8]
140aba740: call   0x140c65450
140aba745: mov    r8d,0x5
140aba74b: lea    rdx,[rip+0xbb7742]        # 0x141671e94
140aba752: lea    rcx,[rbp+0x260]
140aba759: call   0x14006fa10
140aba75e: lea    rdx,[rbp+0x280]
140aba765: cmp    QWORD PTR [rbp+0x298],0xf
140aba76d: cmova  rdx,QWORD PTR [rbp+0x280]
140aba775: mov    r8,QWORD PTR [rbp+0x290]
140aba77c: lea    rcx,[rbp+0x260]
140aba783: call   0x14006fa10
140aba788: mov    r8d,0x1c
140aba78e: lea    rdx,[rip+0xc149ab]        # 0x1416cf140
140aba795: lea    rcx,[rbp+0x260]
140aba79c: call   0x14006fa10
140aba7a1: mov    DWORD PTR [rbp+0x1ac],r14d
140aba7a8: mov    eax,0xffff8ad0
140aba7ad: mov    DWORD PTR [rbp+0x1b0],0x8ad08ad0
140aba7b7: mov    WORD PTR [rbp+0x1b4],ax
140aba7be: mov    DWORD PTR [rbp+0x1b8],r14d
140aba7c5: xorps  xmm0,xmm0
140aba7c8: movdqa XMMWORD PTR [rbp+0x1c0],xmm0
140aba7d0: mov    QWORD PTR [rbp+0x1d0],0xffffffffffffffff
140aba7db: mov    DWORD PTR [rbp+0x1d8],r13d
140aba7e2: mov    DWORD PTR [rbp+0x1dc],r14d
140aba7e9: mov    DWORD PTR [rbp+0x1e0],r13d
140aba7f0: mov    DWORD PTR [rbp+0x1a0],0x60059
140aba7fa: mov    BYTE PTR [rbp+0x1a4],0x1
140aba801: mov    eax,0x7d0
140aba806: mov    WORD PTR [rbp+0x1bc],ax
140aba80d: movzx  eax,WORD PTR [rsp+0x6c]
140aba812: mov    WORD PTR [rbp+0x1a6],ax
140aba819: movzx  eax,WORD PTR [rbp-0x7c]
140aba81d: mov    WORD PTR [rbp+0x1a8],ax
140aba824: movzx  eax,WORD PTR [rbp-0x80]
140aba828: mov    WORD PTR [rbp+0x1aa],ax
140aba82f: lea    r8,[rbp+0x1a0]
140aba836: lea    rdx,[rbp+0x260]
140aba83d: lea    rcx,[rip+0x1a2900c]        # 0x1424e3850
140aba844: call   0x1400e3c20
140aba849: mov    rax,QWORD PTR [r15+0x147d0]
140aba850: mov    dl,0x2
140aba852: mov    rcx,QWORD PTR [rax+r12*8]
140aba856: call   0x140c634f0
140aba85b: mov    rax,QWORD PTR [r15+0x147d0]
140aba862: mov    rcx,QWORD PTR [rax+r12*8]
140aba866: mov    rax,QWORD PTR [rcx]
140aba869: mov    r10,QWORD PTR [rax+0x320]
140aba870: movsx  r9d,WORD PTR [rbp-0x80]
140aba875: movsx  r8d,WORD PTR [rbp-0x7c]
140aba87a: movsx  edx,WORD PTR [rsp+0x6c]
140aba87f: call   r10
140aba882: nop
140aba883: lea    rcx,[rbp+0x280]
140aba88a: call   0x14006f850
140aba88f: nop
140aba890: mov    rdx,QWORD PTR [rbp+0x278]
140aba897: cmp    rdx,0xf
140aba89b: jbe    0x140aba8d1
140aba89d: inc    rdx
140aba8a0: mov    rcx,QWORD PTR [rbp+0x260]
140aba8a7: mov    rax,rcx
140aba8aa: cmp    rdx,0x1000
140aba8b1: jb     0x140aba8cc
140aba8b3: add    rdx,0x27
140aba8b7: mov    rcx,QWORD PTR [rcx-0x8]
140aba8bb: sub    rax,rcx
140aba8be: add    rax,0xfffffffffffffff8
140aba8c2: cmp    rax,0x1f
140aba8c6: ja     0x140abab59
140aba8cc: call   0x141539680
140aba8d1: mov    QWORD PTR [rbp+0x270],r14
140aba8d8: mov    QWORD PTR [rbp+0x278],0xf
140aba8e3: mov    BYTE PTR [rbp+0x260],0x0
140aba8ea: jmp    0x140abab1f
140aba8ef: xor    r14d,r14d
140aba8f2: mov    rax,QWORD PTR [r15+0x147d0]
140aba8f9: mov    rcx,QWORD PTR [rax+r12*8]
140aba8fd: test   BYTE PTR [rcx+0x10],0x20
140aba901: jne    0x140abab1f
140aba907: mov    rax,QWORD PTR [rcx]
140aba90a: call   QWORD PTR [rax+0x18]
140aba90d: movsxd rbx,eax
140aba910: mov    rcx,QWORD PTR [r15+0x147d0]
140aba917: mov    rcx,QWORD PTR [rcx+r12*8]
140aba91b: mov    rdx,QWORD PTR [rcx]
140aba91e: call   QWORD PTR [rdx+0x10]
140aba921: movsx  rcx,ax
140aba925: test   cx,cx
140aba928: js     0x140abab1f
140aba92e: mov    rax,QWORD PTR [r15+0x11b578]
140aba935: mov    rdx,rcx
140aba938: mov    rcx,QWORD PTR [r15+0x11b580]
140aba93f: sub    rcx,rax
140aba942: sar    rcx,0x3
140aba946: cmp    rdx,rcx
140aba949: jae    0x140abab1f
140aba94f: test   bx,bx
140aba952: js     0x140abab1f
140aba958: mov    rax,QWORD PTR [rax+rdx*8]
140aba95c: mov    rcx,QWORD PTR [rax+0x178]
140aba963: movsx  rdx,bx
140aba967: mov    rax,QWORD PTR [rax+0x180]
140aba96e: sub    rax,rcx
140aba971: sar    rax,0x3
140aba975: cmp    rdx,rax
140aba978: jae    0x140abab1f
140aba97e: mov    rax,QWORD PTR [rcx+rdx*8]
140aba982: cmp    DWORD PTR [rax+0x6b0],0x0
140aba989: jle    0x140aba99b
140aba98b: mov    rax,QWORD PTR [rax+0x6a8]
140aba992: test   BYTE PTR [rax],0x2
140aba995: je     0x140aba99b
140aba997: mov    al,0x1
140aba999: jmp    0x140aba99d
140aba99b: xor    al,al
140aba99d: test   al,al
140aba99f: je     0x140abab1f
140aba9a5: mov    rax,QWORD PTR [r15+0x147d0]
140aba9ac: mov    rsi,QWORD PTR [rax+r12*8]
140aba9b0: mov    rbx,QWORD PTR [rsi+0x38]
140aba9b4: mov    rdi,QWORD PTR [rsi+0x40]
140aba9b8: cmp    rbx,rdi
140aba9bb: jae    0x140aba9f4
140aba9bd: mov    rcx,QWORD PTR [rbx]
140aba9c0: mov    rax,QWORD PTR [rcx]
140aba9c3: call   QWORD PTR [rax+0x10]
140aba9c6: cmp    eax,0xb
140aba9c9: je     0x140aba9d1
140aba9cb: add    rbx,0x8
140aba9cf: jmp    0x140aba9b8
140aba9d1: mov    rcx,QWORD PTR [rbx]
140aba9d4: mov    rax,QWORD PTR [rcx]
140aba9d7: call   QWORD PTR [rax+0x18]
140aba9da: mov    rdi,rax
140aba9dd: test   rax,rax
140aba9e0: je     0x140aba9f7
140aba9e2: mov    rcx,rax
140aba9e5: call   0x140544f70
140aba9ea: test   al,al
140aba9ec: jne    0x140abab1f
140aba9f2: jmp    0x140aba9f7
140aba9f4: mov    rdi,r14
140aba9f7: mov    rax,QWORD PTR [rsi]
140aba9fa: mov    rcx,rsi
140aba9fd: call   QWORD PTR [rax+0x270]
140abaa03: mov    rax,QWORD PTR [rsi]
140abaa06: mov    rcx,rsi
140abaa09: call   QWORD PTR [rax+0x260]
140abaa0f: cmp    eax,0x4e20
140abaa14: jle    0x140abab1f
140abaa1a: mov    rax,QWORD PTR [rsi]
140abaa1d: mov    rcx,rsi
140abaa20: call   QWORD PTR [rax+0x18]
140abaa23: mov    ebx,eax
140abaa25: mov    rdx,QWORD PTR [rsi]
140abaa28: mov    rcx,rsi
140abaa2b: call   QWORD PTR [rdx+0x10]
140abaa2e: mov    r8d,0xffffffff
140abaa34: mov    edx,r8d
140abaa37: mov    ecx,0x32
140abaa3c: mov    BYTE PTR [rsp+0x28],0x1
140abaa41: mov    DWORD PTR [rsp+0x20],r8d
140abaa46: mov    r9d,ebx
140abaa49: movzx  r8d,ax
140abaa4d: call   0x140c9a510
140abaa52: mov    rbx,rax
140abaa55: mov    rdx,QWORD PTR [rsi]
140abaa58: mov    rcx,rsi
140abaa5b: call   QWORD PTR [rdx+0x478]
140abaa61: mov    DWORD PTR [rbx+0x80],eax
140abaa67: mov    r8,QWORD PTR [rbx]
140abaa6a: mov    dl,0x1
140abaa6c: mov    rcx,rbx
140abaa6f: call   QWORD PTR [r8+0x328]
140abaa76: mov    rdx,rsi
140abaa79: mov    rcx,rbx
140abaa7c: call   0x140ca6460
140abaa81: mov    rdx,rsi
140abaa84: mov    rcx,rbx
140abaa87: call   0x140ca66e0
140abaa8c: mov    rax,QWORD PTR [rbx]
140abaa8f: mov    r8b,0x1
140abaa92: movzx  edx,r8b
140abaa96: mov    rcx,rbx
140abaa99: call   QWORD PTR [rax+0x4a8]
140abaa9f: mov    QWORD PTR [rbp-0x18],rsi
140abaaa3: test   DWORD PTR [rsi+0x10],0x100000
140abaaaa: jne    0x140abaad7
140abaaac: xor    edx,edx
140abaaae: mov    rcx,rsi
140abaab1: call   0x140c634f0
140abaab6: cmp    DWORD PTR [rsi+0x50],0xffffffff
140abaaba: je     0x140abaac4
140abaabc: mov    rcx,rsi
140abaabf: call   0x140cc83e0
140abaac4: and    DWORD PTR [rsi+0x10],0x7fffffff
140abaacb: mov    rax,QWORD PTR [rsi]
140abaace: mov    rcx,rsi
140abaad1: call   QWORD PTR [rax+0x330]
140abaad7: lea    rcx,[r15+0x14c50]
140abaade: lea    r8,[rbp-0x18]
140abaae2: lea    rdx,[rbp+0x50]
140abaae6: call   0x140284f10
140abaaeb: mov    rcx,QWORD PTR [rbp-0x18]
140abaaef: call   0x140c67590
140abaaf4: test   rdi,rdi
140abaaf7: je     0x140abab1f
140abaaf9: test   BYTE PTR [rdi+0x10],0x1
140abaafd: je     0x140abab1f
140abaaff: mov    QWORD PTR [rsp+0x28],r14
140abab04: mov    BYTE PTR [rsp+0x20],0x1
140abab09: movzx  r9d,WORD PTR [rdi+0xc]
140abab0e: movzx  r8d,WORD PTR [rdi+0xa]
140abab13: movzx  edx,WORD PTR [rdi+0x8]
140abab17: mov    rcx,rdi
140abab1a: call   0x140c88d10
140abab1f: sub    r12,0x1
140abab23: jns    0x140aba280
140abab29: mov    rcx,QWORD PTR [rbp+0x2a0]
140abab30: xor    rcx,rsp
140abab33: call   0x141539660
140abab38: lea    r11,[rsp+0x3b0]
140abab40: mov    rbx,QWORD PTR [r11+0x38]
140abab44: mov    rsi,QWORD PTR [r11+0x40]
140abab48: mov    rdi,QWORD PTR [r11+0x48]
140abab4c: mov    rsp,r11
140abab4f: pop    r15
140abab51: pop    r14
140abab53: pop    r13
140abab55: pop    r12
140abab57: pop    rbp
140abab58: ret
140abab59: call   QWORD PTR [rip+0xb2afc9]        # 0x1415e5b28
140abab5f: int3
140abab60: and    ah,BYTE PTR [rbp-0x5b0bff55]
140abab66: stos   DWORD PTR [rdi],eax
140abab67: add    BYTE PTR [rax],al
140abab69: add    DWORD PTR [rcx],eax
140abab6b: add    DWORD PTR [rcx],eax
140abab6d: add    DWORD PTR [rcx],eax
140abab6f: add    DWORD PTR [rcx],eax
140abab71: add    DWORD PTR [rcx],eax
140abab73: add    DWORD PTR [rcx],eax
140abab75: add    DWORD PTR [rcx],eax
140abab77: add    DWORD PTR [rcx],eax
140abab79: add    DWORD PTR [rcx],eax
140abab7b: add    DWORD PTR [rcx],eax
140abab7d: add    DWORD PTR [rcx],eax
140abab7f: add    BYTE PTR [rax],al
140abab81: add    DWORD PTR [rax],eax
140abab83: add    BYTE PTR [rax],al
140abab85: add    BYTE PTR [rcx],al
140abab87: add    DWORD PTR [rcx],eax
140abab89: add    DWORD PTR [rcx],eax
140abab8b: add    DWORD PTR [rcx],eax
140abab8d: add    DWORD PTR [rcx],eax
140abab8f: add    DWORD PTR [rcx],eax
140abab91: add    DWORD PTR [rcx],eax
140abab93: add    DWORD PTR [rcx],eax
140abab95: add    DWORD PTR [rcx],eax
140abab97: add    DWORD PTR [rcx],eax
140abab99: add    BYTE PTR [rcx],al
140abab9b: add    DWORD PTR [rcx],eax
140abab9d: add    DWORD PTR [rcx],eax
140abab9f: add    DWORD PTR [rcx],eax
140ababa1: add    DWORD PTR [rcx],eax
140ababa3: add    DWORD PTR [rcx],eax
140ababa5: add    DWORD PTR [rcx],eax
140ababa7: add    DWORD PTR [rcx],eax