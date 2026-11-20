0x141377970: test   rdx,rdx
0x141377973: je     0x14137884c
0x141377979: push   rbp
0x14137797a: push   rbx
0x14137797b: push   rsi
0x14137797c: push   rdi
0x14137797d: push   r12
0x14137797f: push   r13
0x141377981: push   r14
0x141377983: push   r15
0x141377985: lea    rbp,[rsp-0x48]
0x14137798a: sub    rsp,0x148
0x141377991: mov    rax,QWORD PTR [rip+0x5466a8]        # 0x1418be040
0x141377998: xor    rax,rsp
0x14137799b: mov    QWORD PTR [rbp+0x38],rax
0x14137799f: mov    r15,r9
0x1413779a2: mov    QWORD PTR [rbp-0x78],r9
0x1413779a6: mov    r13,r8
0x1413779a9: mov    QWORD PTR [rbp-0x70],r8
0x1413779ad: mov    r14,rdx
0x1413779b0: mov    rdi,rcx
0x1413779b3: test   r8,r8
0x1413779b6: je     0x14137882d
0x1413779bc: mov    rax,QWORD PTR [rcx+0x408]
0x1413779c3: mov    rbx,QWORD PTR [rcx+0x410]
0x1413779ca: sub    rbx,rax
0x1413779cd: sar    rbx,0x3
0x1413779d1: sub    ebx,0x1
0x1413779d4: js     0x141377a29
0x1413779d6: data16 nop WORD PTR [rax+rax*1+0x0]
0x1413779e0: movsxd r8,ebx
0x1413779e3: mov    rcx,QWORD PTR [rax+r8*8]
0x1413779e7: cmp    WORD PTR [rcx+0x8],0x0
0x1413779ec: jne    0x141377a24
0x1413779ee: cmp    QWORD PTR [rcx],r13
0x1413779f1: je     0x141377a24
0x1413779f3: mov    BYTE PTR [rsp+0x20],0x1
0x1413779f8: xor    r9d,r9d
0x1413779fb: mov    r8b,0x1
0x1413779fe: mov    rdx,QWORD PTR [rcx]
0x141377a01: mov    rcx,rdi
0x141377a04: call   0x141342500
0x141377a09: mov    rax,QWORD PTR [rdi+0x408]
0x141377a10: mov    rcx,QWORD PTR [rdi+0x410]
0x141377a17: sub    rcx,rax
0x141377a1a: sar    rcx,0x3
0x141377a1e: cmp    ebx,ecx
0x141377a20: jle    0x141377a24
0x141377a22: mov    ebx,ecx
0x141377a24: sub    ebx,0x1
0x141377a27: jns    0x1413779e0
0x141377a29: mov    rax,QWORD PTR [r13+0x0]
0x141377a2d: mov    rcx,r13
0x141377a30: call   QWORD PTR [rax+0x448]
0x141377a36: mov    rcx,r13
0x141377a39: test   al,al
0x141377a3b: je     0x141377a85
0x141377a3d: cmp    DWORD PTR [r13+0x80],0x1
0x141377a45: jne    0x141377a53
0x141377a47: mov    r12,r13
0x141377a4a: mov    dl,0x2
0x141377a4c: call   0x140c7b1e0
0x141377a51: jmp    0x141377a7a
0x141377a53: mov    rax,QWORD PTR [r13+0x0]
0x141377a57: xor    r8d,r8d
0x141377a5a: mov    edx,0x1
0x141377a5f: call   QWORD PTR [rax+0x388]
0x141377a65: mov    r12,rax
0x141377a68: mov    rcx,QWORD PTR [rax]
0x141377a6b: mov    r8,QWORD PTR [rcx+0x328]
0x141377a72: mov    dl,0x1
0x141377a74: mov    rcx,rax
0x141377a77: call   r8
0x141377a7a: test   r12,r12
0x141377a7d: je     0x14137882d
0x141377a83: jmp    0x141377a8f
0x141377a85: mov    r12,r13
0x141377a88: mov    dl,0x2
0x141377a8a: call   0x140c7b1e0
0x141377a8f: test   r15,r15
0x141377a92: je     0x141377aba
0x141377a94: movsx  ecx,WORD PTR [r15+0xa8]
0x141377a9c: mov    DWORD PTR [rsp+0x60],ecx
0x141377aa0: movsx  ecx,WORD PTR [r15+0xaa]
0x141377aa8: mov    DWORD PTR [rsp+0x64],ecx
0x141377aac: movsx  ecx,WORD PTR [r15+0xac]
0x141377ab4: mov    DWORD PTR [rsp+0x6c],ecx
0x141377ab8: jmp    0x141377ad8
0x141377aba: mov    eax,DWORD PTR [rbp+0xc0]
0x141377ac0: mov    DWORD PTR [rsp+0x6c],eax
0x141377ac4: mov    eax,DWORD PTR [rbp+0xb8]
0x141377aca: mov    DWORD PTR [rsp+0x64],eax
0x141377ace: mov    eax,DWORD PTR [rbp+0xb0]
0x141377ad4: mov    DWORD PTR [rsp+0x60],eax
0x141377ad8: mov    eax,DWORD PTR [rdi+0x118]
0x141377ade: bt     eax,0x16
0x141377ae2: jae    0x141377af6
0x141377ae4: btr    eax,0x16
0x141377ae8: mov    DWORD PTR [rdi+0x118],eax
0x141377aee: mov    rcx,rdi
0x141377af1: call   0x14065d210
0x141377af6: mov    rax,QWORD PTR [r12]
0x141377afa: mov    rcx,r12
0x141377afd: call   QWORD PTR [rax+0x710]
0x141377b03: lea    rdx,[rdi+0xd50]
0x141377b0a: mov    ecx,DWORD PTR [r12+0x1c]
0x141377b0f: call   0x1400bb3f0
0x141377b14: mov    rbx,rax
0x141377b17: test   rax,rax
0x141377b1a: jne    0x141377b53
0x141377b1c: mov    ecx,0x10
0x141377b21: call   0x1415530e0
0x141377b26: mov    rbx,rax
0x141377b29: mov    QWORD PTR [rsp+0x78],rax
0x141377b2e: mov    DWORD PTR [rax],0xffffffff
0x141377b34: xor    eax,eax
0x141377b36: mov    QWORD PTR [rbx+0x4],rax
0x141377b3a: mov    DWORD PTR [rbx+0xc],eax
0x141377b3d: mov    eax,DWORD PTR [r12+0x1c]
0x141377b42: mov    DWORD PTR [rbx],eax
0x141377b44: lea    rdx,[rdi+0xd50]
0x141377b4b: mov    rcx,rbx
0x141377b4e: call   0x1400bb5d0
0x141377b53: inc    DWORD PTR [rbx+0xc]
0x141377b56: mov    rax,QWORD PTR [r14]
0x141377b59: mov    rcx,r14
0x141377b5c: call   QWORD PTR [rax+0x710]
0x141377b62: lea    rdx,[rdi+0xd50]
0x141377b69: mov    ecx,DWORD PTR [r14+0x1c]
0x141377b6d: call   0x1400bb3f0
0x141377b72: mov    rbx,rax
0x141377b75: test   rax,rax
0x141377b78: jne    0x141377bb0
0x141377b7a: mov    ecx,0x10
0x141377b7f: call   0x1415530e0
0x141377b84: mov    rbx,rax
0x141377b87: mov    QWORD PTR [rsp+0x78],rax
0x141377b8c: mov    DWORD PTR [rax],0xffffffff
0x141377b92: xor    eax,eax
0x141377b94: mov    QWORD PTR [rbx+0x4],rax
0x141377b98: mov    DWORD PTR [rbx+0xc],eax
0x141377b9b: mov    eax,DWORD PTR [r14+0x1c]
0x141377b9f: mov    DWORD PTR [rbx],eax
0x141377ba1: lea    rdx,[rdi+0xd50]
0x141377ba8: mov    rcx,rbx
0x141377bab: call   0x1400bb5d0
0x141377bb0: inc    DWORD PTR [rbx+0xc]
0x141377bb3: mov    eax,DWORD PTR [rip+0x54667f]        # 0x1418be238
0x141377bb9: test   eax,eax
0x141377bbb: jne    0x141377c91
0x141377bc1: movzx  eax,BYTE PTR [rip+0x54671e]        # 0x1418be2e6
0x141377bc8: cmp    al,0x1
0x141377bca: je     0x141377c78
0x141377bd0: cmp    al,0x2
0x141377bd2: jne    0x141377f85
0x141377bd8: mov    rax,QWORD PTR [rip+0x103de01]        # 0x1423b59e0
0x141377bdf: mov    rcx,QWORD PTR [rip+0x103ddf2]        # 0x1423b59d8
0x141377be6: sub    rax,rcx
0x141377be9: sar    rax,0x3
0x141377bed: sub    eax,0x1
0x141377bf0: js     0x141377f85
0x141377bf6: movsxd rsi,eax
0x141377bf9: nop    DWORD PTR [rax+0x0]
0x141377c00: mov    r15,QWORD PTR [rcx+rsi*8]
0x141377c04: mov    ebx,DWORD PTR [r15+0x4]
0x141377c08: cmp    ebx,0xffffffff
0x141377c0b: je     0x141377c4f
0x141377c0d: mov    rax,QWORD PTR [rip+0x107c06c]        # 0x1423f3c80
0x141377c14: sub    rax,QWORD PTR [rip+0x107c05d]        # 0x1423f3c78
0x141377c1b: test   rax,0xfffffffffffffff8
0x141377c21: je     0x141377c4f
0x141377c23: lea    rdx,[rip+0x107c04e]        # 0x1423f3c78
0x141377c2a: mov    ecx,ebx
0x141377c2c: call   0x1400bb6d0
0x141377c31: test   rax,rax
0x141377c34: je     0x141377c4f
0x141377c36: mov    rax,QWORD PTR [rax+0x8]
0x141377c3a: cmp    DWORD PTR [rax+0x3a8],0x0
0x141377c41: jle    0x141377c4f
0x141377c43: mov    rax,QWORD PTR [rax+0x3a0]
0x141377c4a: test   BYTE PTR [rax],0x4
0x141377c4d: jne    0x141377c61
0x141377c4f: movzx  eax,WORD PTR [r15+0x18]
0x141377c54: test   al,0x1
0x141377c56: je     0x141377c61
0x141377c58: test   al,0x2
0x141377c5a: je     0x141377c61
0x141377c5c: cmp    ebx,0xffffffff
0x141377c5f: jne    0x141377c74
0x141377c61: sub    rsi,0x1
0x141377c65: js     0x141377f85
0x141377c6b: mov    rcx,QWORD PTR [rip+0x103dd66]        # 0x1423b59d8
0x141377c72: jmp    0x141377c00
0x141377c74: mov    r15,QWORD PTR [rbp-0x78]
0x141377c78: or     DWORD PTR [r12+0x10],0x80000
0x141377c81: mov    dl,0x3
0x141377c83: mov    rcx,r12
0x141377c86: call   0x140c7b1e0
0x141377c8b: mov    eax,DWORD PTR [rip+0x5465a7]        # 0x1418be238
0x141377c91: cmp    eax,0x1
0x141377c94: jne    0x141377f85
0x141377c9a: cmp    rdi,QWORD PTR [rip+0x108f8ef]        # 0x142407590
0x141377ca1: jne    0x141377f85
0x141377ca7: mov    rax,QWORD PTR [r14]
0x141377caa: mov    rcx,r14
0x141377cad: call   QWORD PTR [rax+0x38]
0x141377cb0: movzx  esi,ax
0x141377cb3: mov    rax,QWORD PTR [r14]
0x141377cb6: mov    rcx,r14
0x141377cb9: call   QWORD PTR [rax+0x40]
0x141377cbc: mov    ebx,eax
0x141377cbe: mov    r8d,eax
0x141377cc1: movzx  edx,si
0x141377cc4: lea    rcx,[rip+0x107bca5]        # 0x1423f3970
0x141377ccb: call   0x1414c6fe0
0x141377cd0: test   rax,rax
0x141377cd3: je     0x141377cfc
0x141377cd5: cmp    DWORD PTR [rax+0x298],0x5
0x141377cdc: jle    0x141377cef
0x141377cde: mov    rax,QWORD PTR [rax+0x290]
0x141377ce5: cmp    BYTE PTR [rax+0x5],0x0
0x141377ce9: jge    0x141377cef
0x141377ceb: mov    al,0x1
0x141377ced: jmp    0x141377cf1
0x141377cef: xor    al,al
0x141377cf1: test   al,al
0x141377cf3: je     0x141377cfc
0x141377cf5: mov    ecx,0x159c
0x141377cfa: jmp    0x141377d3c
0x141377cfc: mov    r8d,ebx
0x141377cff: movzx  edx,si
0x141377d02: lea    rcx,[rip+0x107bc67]        # 0x1423f3970
0x141377d09: call   0x1414c6fe0
0x141377d0e: test   rax,rax
0x141377d11: je     0x141377d37
0x141377d13: cmp    DWORD PTR [rax+0x298],0x0
0x141377d1a: jle    0x141377d2c
0x141377d1c: mov    rax,QWORD PTR [rax+0x290]
0x141377d23: test   BYTE PTR [rax],0x1
0x141377d26: je     0x141377d2c
0x141377d28: mov    al,0x1
0x141377d2a: jmp    0x141377d2e
0x141377d2c: xor    al,al
0x141377d2e: test   al,al
0x141377d30: mov    ecx,0x159b
0x141377d35: jne    0x141377d3c
0x141377d37: mov    ecx,0x159d
0x141377d3c: call   0x1407fdb30
0x141377d41: cmp    DWORD PTR [rip+0x5464f0],0x1        # 0x1418be238
0x141377d48: jne    0x141377f85
0x141377d4e: cmp    rdi,QWORD PTR [rip+0x108f83b]        # 0x142407590
0x141377d55: jne    0x141377f85
0x141377d5b: test   BYTE PTR [rip+0x103b766],0x8        # 0x1423b34c8
0x141377d62: je     0x141377f85
0x141377d68: xorps  xmm0,xmm0
0x141377d6b: movups XMMWORD PTR [rbp+0x18],xmm0
0x141377d6f: xor    esi,esi
0x141377d71: mov    QWORD PTR [rbp+0x28],rsi
0x141377d75: mov    QWORD PTR [rbp+0x30],0xf
0x141377d7d: mov    BYTE PTR [rbp+0x18],sil
0x141377d81: movups XMMWORD PTR [rbp-0x8],xmm0
0x141377d85: mov    QWORD PTR [rbp+0x8],rsi
0x141377d89: mov    QWORD PTR [rbp+0x10],0xf
0x141377d91: mov    BYTE PTR [rbp-0x8],sil
0x141377d95: mov    r8d,0xa
0x141377d9b: lea    rdx,[rip+0x42c086]        # 0x1417a3e28
0x141377da2: lea    rcx,[rbp+0x18]
0x141377da6: call   0x140070f00
0x141377dab: mov    r9d,0x1
0x141377db1: xor    r8d,r8d
0x141377db4: lea    rdx,[rbp-0x8]
0x141377db8: mov    rcx,r12
0x141377dbb: call   0x140c7d140
0x141377dc0: lea    rdx,[rbp-0x8]
0x141377dc4: cmp    QWORD PTR [rbp+0x10],0xf
0x141377dc9: cmova  rdx,QWORD PTR [rbp-0x8]
0x141377dce: mov    r8,QWORD PTR [rbp+0x8]
0x141377dd2: lea    rcx,[rbp+0x18]
0x141377dd6: call   0x140071040
0x141377ddb: test   r15,r15
0x141377dde: je     0x141377e35
0x141377de0: mov    r8d,0x4
0x141377de6: lea    rdx,[rip+0x2a62d7]        # 0x14161e0c4
0x141377ded: lea    rcx,[rbp+0x18]
0x141377df1: call   0x140071040
0x141377df6: mov    QWORD PTR [rbp+0x8],rsi
0x141377dfa: lea    rax,[rbp-0x8]
0x141377dfe: cmp    QWORD PTR [rbp+0x10],0xf
0x141377e03: cmova  rax,QWORD PTR [rbp-0x8]
0x141377e08: mov    BYTE PTR [rax],sil
0x141377e0b: mov    r8b,0x1
0x141377e0e: lea    rdx,[rbp-0x8]
0x141377e12: mov    rcx,r15
0x141377e15: call   0x141348290
0x141377e1a: lea    rdx,[rbp-0x8]
0x141377e1e: cmp    QWORD PTR [rbp+0x10],0xf
0x141377e23: cmova  rdx,QWORD PTR [rbp-0x8]
0x141377e28: mov    r8,QWORD PTR [rbp+0x8]
0x141377e2c: lea    rcx,[rbp+0x18]
0x141377e30: call   0x140071040
0x141377e35: mov    r8d,0x6
0x141377e3b: lea    rdx,[rip+0x290dba]        # 0x141608bfc
0x141377e42: lea    rcx,[rbp+0x18]
0x141377e46: call   0x140071040
0x141377e4b: mov    r9d,0x1
0x141377e51: xor    r8d,r8d
0x141377e54: lea    rdx,[rbp-0x8]
0x141377e58: mov    rcx,r14
0x141377e5b: call   0x140c7d140
0x141377e60: lea    rdx,[rbp-0x8]
0x141377e64: cmp    QWORD PTR [rbp+0x10],0xf
0x141377e69: cmova  rdx,QWORD PTR [rbp-0x8]
0x141377e6e: mov    r8,QWORD PTR [rbp+0x8]
0x141377e72: lea    rcx,[rbp+0x18]
0x141377e76: call   0x140071040
0x141377e7b: mov    r8d,0x1
0x141377e81: lea    rdx,[rip+0x28b9bc]        # 0x141603844
0x141377e88: lea    rcx,[rbp+0x18]
0x141377e8c: call   0x140071040
0x141377e91: mov    eax,0xffff8ad0
0x141377e96: mov    DWORD PTR [rbp-0x5a],0x8ad08ad0
0x141377e9d: mov    WORD PTR [rbp-0x56],ax
0x141377ea1: mov    DWORD PTR [rbp-0x54],esi
0x141377ea4: mov    DWORD PTR [rbp-0x50],0x8ad08ad0
0x141377eab: mov    WORD PTR [rbp-0x4c],ax
0x141377eaf: mov    DWORD PTR [rbp-0x48],esi
0x141377eb2: xorps  xmm0,xmm0
0x141377eb5: movdqa XMMWORD PTR [rbp-0x40],xmm0
0x141377eba: mov    eax,0xffffffff
0x141377ebf: mov    QWORD PTR [rbp-0x30],0xffffffffffffffff
0x141377ec7: mov    DWORD PTR [rbp-0x28],eax
0x141377eca: mov    DWORD PTR [rbp-0x24],esi
0x141377ecd: mov    DWORD PTR [rbp-0x20],eax
0x141377ed0: mov    DWORD PTR [rbp-0x60],0x600ea
0x141377ed7: mov    BYTE PTR [rbp-0x5c],0x1
0x141377edb: mov    eax,0x64
0x141377ee0: mov    WORD PTR [rbp-0x44],ax
0x141377ee4: lea    r8,[rbp-0x60]
0x141377ee8: lea    rdx,[rbp+0x18]
0x141377eec: lea    rcx,[rip+0x118dddd]        # 0x142505cd0
0x141377ef3: call   0x1400e5250
0x141377ef8: nop
0x141377ef9: mov    rdx,QWORD PTR [rbp+0x10]
0x141377efd: cmp    rdx,0xf
0x141377f01: jbe    0x141377f37
0x141377f03: inc    rdx
0x141377f06: mov    rcx,QWORD PTR [rbp-0x8]
0x141377f0a: mov    rax,rcx
0x141377f0d: cmp    rdx,0x1000
0x141377f14: jb     0x141377f32
0x141377f16: add    rdx,0x27
0x141377f1a: mov    rcx,QWORD PTR [rcx-0x8]
0x141377f1e: sub    rax,rcx
0x141377f21: add    rax,0xfffffffffffffff8
0x141377f25: cmp    rax,0x1f
0x141377f29: jbe    0x141377f32
0x141377f2b: call   QWORD PTR [rip+0x288c0f]        # 0x141600b40
0x141377f31: int3
0x141377f32: call   0x1415530d0
0x141377f37: mov    QWORD PTR [rbp+0x8],rsi
0x141377f3b: mov    QWORD PTR [rbp+0x10],0xf
0x141377f43: mov    BYTE PTR [rbp-0x8],0x0
0x141377f47: mov    rdx,QWORD PTR [rbp+0x30]
0x141377f4b: cmp    rdx,0xf
0x141377f4f: jbe    0x141377f85
0x141377f51: inc    rdx
0x141377f54: mov    rcx,QWORD PTR [rbp+0x18]
0x141377f58: mov    rax,rcx
0x141377f5b: cmp    rdx,0x1000
0x141377f62: jb     0x141377f80
0x141377f64: add    rdx,0x27
0x141377f68: mov    rcx,QWORD PTR [rcx-0x8]
0x141377f6c: sub    rax,rcx
0x141377f6f: add    rax,0xfffffffffffffff8
0x141377f73: cmp    rax,0x1f
0x141377f77: jbe    0x141377f80
0x141377f79: call   QWORD PTR [rip+0x288bc1]        # 0x141600b40
0x141377f7f: int3
0x141377f80: call   0x1415530d0
0x141377f85: mov    ecx,0xa0
0x141377f8a: call   0x1415530e0
0x141377f8f: mov    rsi,rax
0x141377f92: mov    QWORD PTR [rbp-0x80],rax
0x141377f96: mov    QWORD PTR [rsp+0x78],rax
0x141377f9b: xor    edx,edx
0x141377f9d: mov    rcx,rax
0x141377fa0: call   0x140ebf110
0x141377fa5: lea    rax,[rip+0x300474]        # 0x141678420
0x141377fac: mov    QWORD PTR [rsi],rax
0x141377faf: test   DWORD PTR [r12+0x10],0x20000000
0x141377fb8: jne    0x141377fc2
0x141377fba: mov    rcx,r12
0x141377fbd: call   0x140c7dc00
0x141377fc2: movsxd rbx,DWORD PTR [r12+0x74]
0x141377fc7: test   DWORD PTR [r12+0x10],0x20000000
0x141377fd0: jne    0x141377fda
0x141377fd2: mov    rcx,r12
0x141377fd5: call   0x140c7dc00
0x141377fda: imul   r15,rbx,0xf4240
0x141377fe1: movsxd rax,DWORD PTR [r12+0x78]
0x141377fe6: add    r15,rax
0x141377fe9: mov    QWORD PTR [rsp+0x78],r15
0x141377fee: mov    QWORD PTR [rsp+0x70],0x3b9aca00
0x141377ff7: mov    ebx,0xa
0x141377ffc: mov    rax,QWORD PTR [r14]
0x141377fff: mov    rcx,r14
0x141378002: call   QWORD PTR [rax]
0x141378004: cmp    ax,0x18
0x141378008: jne    0x14137829e
0x14137800e: mov    r8,QWORD PTR [r14+0xe8]
0x141378015: movsxd rax,DWORD PTR [r8+0x130]
0x14137801c: imul   rdx,rax,0xc350
0x141378023: mov    QWORD PTR [rsp+0x70],rdx
0x141378028: mov    r13,QWORD PTR [r8+0x140]
0x14137802f: sub    r13,QWORD PTR [r8+0x138]
0x141378036: sar    r13,0x2
0x14137803a: mov    rax,QWORD PTR [r8+0x170]
0x141378041: sub    rax,QWORD PTR [r8+0x168]
0x141378048: sar    rax,0x2
0x14137804c: mov    rcx,QWORD PTR [r8+0x1a0]
0x141378053: sub    rcx,QWORD PTR [r8+0x198]
0x14137805a: sar    rcx,1
0x14137805d: add    rax,r13
0x141378060: add    rcx,rax
0x141378063: mov    QWORD PTR [rbp-0x10],rcx
0x141378067: test   rcx,rcx
0x14137806a: jle    0x141378293
0x141378070: xor    edx,edx
0x141378072: mov    ebx,edx
0x141378074: mov    r11d,edx
0x141378077: test   r13d,r13d
0x14137807a: jle    0x14137811d
0x141378080: mov    r15,QWORD PTR [rdi+0x8e8]
0x141378087: mov    r10,QWORD PTR [r8+0x150]
0x14137808e: mov    rsi,QWORD PTR [r8+0x138]
0x141378095: sub    rsi,r10
0x141378098: nop    DWORD PTR [rax+rax*1+0x0]
0x1413780a0: movsxd r9,DWORD PTR [rsi+r10*1]
0x1413780a4: lea    rax,[r9+0x37]
0x1413780a8: imul   rcx,rax,0x1c
0x1413780ac: imul   rax,r9,0x1c
0x1413780b0: mov    r8d,DWORD PTR [rcx+rdi*1]
0x1413780b4: sub    r8d,DWORD PTR [rax+rdi*1+0x614]
0x1413780bc: test   r15,r15
0x1413780bf: je     0x1413780e5
0x1413780c1: imul   r8d,DWORD PTR [r15+r9*4]
0x1413780c6: mov    eax,0x51eb851f
0x1413780cb: imul   r8d
0x1413780ce: mov    r8d,edx
0x1413780d1: sar    r8d,0x5
0x1413780d5: mov    eax,r8d
0x1413780d8: shr    eax,0x1f
0x1413780db: add    r8d,eax
0x1413780de: add    r8d,DWORD PTR [r15+r9*4+0x18]
0x1413780e3: xor    edx,edx
0x1413780e5: mov    eax,edx
0x1413780e7: test   r8d,r8d
0x1413780ea: cmovns eax,r8d
0x1413780ee: mov    ecx,DWORD PTR [r10]
0x1413780f1: cmp    eax,ecx
0x1413780f3: jge    0x141378109
0x1413780f5: test   ecx,ecx
0x1413780f7: jle    0x141378109
0x1413780f9: imul   eax,eax,0x64
0x1413780fc: cdq
0x1413780fd: idiv   ecx
0x1413780ff: movsxd rcx,eax
0x141378102: add    rbx,rcx
0x141378105: xor    edx,edx
0x141378107: jmp    0x14137810d
0x141378109: add    rbx,0x64
0x14137810d: inc    r11d
0x141378110: add    r10,0x4
0x141378114: cmp    r11d,r13d
0x141378117: jl     0x1413780a0
0x141378119: mov    rsi,QWORD PTR [rbp-0x80]
0x14137811d: mov    r11d,edx
0x141378120: mov    rax,QWORD PTR [r14+0xe8]
0x141378127: mov    r13,QWORD PTR [rax+0x170]
0x14137812e: sub    r13,QWORD PTR [rax+0x168]
0x141378135: sar    r13,0x2
0x141378139: test   r13d,r13d
0x14137813c: jle    0x1413781e3
0x141378142: mov    r15,QWORD PTR [rdi+0xa98]
0x141378149: mov    r8,QWORD PTR [rax+0x180]
0x141378150: mov    rsi,QWORD PTR [rax+0x168]
0x141378157: sub    rsi,r8
0x14137815a: nop    WORD PTR [rax+rax*1+0x0]
0x141378160: test   r15,r15
0x141378163: jne    0x141378169
0x141378165: mov    eax,edx
0x141378167: jmp    0x1413781b4
0x141378169: movsxd r9,DWORD PTR [rsi+r8*1]
0x14137816d: imul   rax,r9,0x1c
0x141378171: mov    ecx,DWORD PTR [rax+r15*1+0xac]
0x141378179: sub    ecx,DWORD PTR [rax+r15*1+0xbc]
0x141378181: mov    r10,QWORD PTR [rdi+0x8e8]
0x141378188: test   r10,r10
0x14137818b: je     0x1413781ad
0x14137818d: imul   ecx,DWORD PTR [r10+r9*4+0x30]
0x141378193: mov    eax,0x51eb851f
0x141378198: imul   ecx
0x14137819a: mov    ecx,edx
0x14137819c: sar    ecx,0x5
0x14137819f: mov    eax,ecx
0x1413781a1: shr    eax,0x1f
0x1413781a4: add    ecx,eax
0x1413781a6: add    ecx,DWORD PTR [r10+r9*4+0x64]
0x1413781ab: xor    edx,edx
0x1413781ad: mov    eax,edx
0x1413781af: test   ecx,ecx
0x1413781b1: cmovns eax,ecx
0x1413781b4: mov    ecx,DWORD PTR [r8]
0x1413781b7: cmp    eax,ecx
0x1413781b9: jge    0x1413781cf
0x1413781bb: test   ecx,ecx
0x1413781bd: jle    0x1413781cf
0x1413781bf: imul   eax,eax,0x64
0x1413781c2: cdq
0x1413781c3: idiv   ecx
0x1413781c5: movsxd rcx,eax
0x1413781c8: add    rbx,rcx
0x1413781cb: xor    edx,edx
0x1413781cd: jmp    0x1413781d3
0x1413781cf: add    rbx,0x64
0x1413781d3: inc    r11d
0x1413781d6: add    r8,0x4
0x1413781da: cmp    r11d,r13d
0x1413781dd: jl     0x141378160
0x1413781df: mov    rsi,QWORD PTR [rbp-0x80]
0x1413781e3: mov    r8,QWORD PTR [r14+0xe8]
0x1413781ea: mov    rax,QWORD PTR [r8+0x1a0]
0x1413781f1: sub    rax,QWORD PTR [r8+0x198]
0x1413781f8: sar    rax,1
0x1413781fb: test   eax,eax
0x1413781fd: jle    0x141378276
0x1413781ff: mov    r15,rdx
0x141378202: mov    r13,rdx
0x141378205: mov    esi,edx
0x141378207: nop    WORD PTR [rax+rax*1+0x0]
0x141378210: mov    rdx,QWORD PTR [r8+0x198]
0x141378217: movzx  edx,WORD PTR [rdx+r13*1]
0x14137821c: mov    rcx,rdi
0x14137821f: call   0x1413570b0
0x141378224: mov    r8,QWORD PTR [r14+0xe8]
0x14137822b: mov    rcx,QWORD PTR [r8+0x1b0]
0x141378232: mov    r9d,DWORD PTR [r15+rcx*1]
0x141378236: cmp    eax,r9d
0x141378239: jge    0x14137824f
0x14137823b: test   r9d,r9d
0x14137823e: jle    0x14137824f
0x141378240: imul   eax,eax,0x64
0x141378243: cdq
0x141378244: idiv   r9d
0x141378247: movsxd rcx,eax
0x14137824a: add    rbx,rcx
0x14137824d: jmp    0x141378253
0x14137824f: add    rbx,0x64
0x141378253: inc    esi
0x141378255: add    r13,0x2
0x141378259: add    r15,0x4
0x14137825d: mov    rcx,QWORD PTR [r8+0x1a0]
0x141378264: sub    rcx,QWORD PTR [r8+0x198]
0x14137826b: sar    rcx,1
0x14137826e: cmp    esi,ecx
0x141378270: jl     0x141378210
0x141378272: mov    rsi,QWORD PTR [rbp-0x80]
0x141378276: imul   rbx,QWORD PTR [rsp+0x70]
0x14137827c: imul   rcx,QWORD PTR [rbp-0x10],0x64
0x141378281: mov    rax,rbx
0x141378284: cqo
0x141378286: idiv   rcx
0x141378289: mov    QWORD PTR [rsp+0x70],rax
0x14137828e: mov    r15,QWORD PTR [rsp+0x78]
0x141378293: mov    ebx,DWORD PTR [r8+0x1c8]
0x14137829a: mov    r13,QWORD PTR [rbp-0x70]
0x14137829e: test   r15,r15
0x1413782a1: jg     0x1413782a7
0x1413782a3: mov    eax,ebx
0x1413782a5: jmp    0x1413782b1
0x1413782a7: mov    rax,QWORD PTR [rsp+0x70]
0x1413782ac: cqo
0x1413782ae: idiv   r15
0x1413782b1: mov    DWORD PTR [rsi+0x58],eax
0x1413782b4: cmp    eax,ebx
0x1413782b6: jle    0x1413782bd
0x1413782b8: mov    DWORD PTR [rsi+0x58],ebx
0x1413782bb: mov    eax,ebx
0x1413782bd: cmp    eax,0x1
0x1413782c0: jge    0x1413782c9
0x1413782c2: mov    DWORD PTR [rsi+0x58],0x1
0x1413782c9: movzx  eax,WORD PTR [rdi+0xa8]
0x1413782d0: mov    WORD PTR [rsi+0x20],ax
0x1413782d4: movzx  eax,WORD PTR [rdi+0xaa]
0x1413782db: mov    WORD PTR [rsi+0x22],ax
0x1413782df: movzx  eax,WORD PTR [rdi+0xac]
0x1413782e6: mov    WORD PTR [rsi+0x24],ax
0x1413782ea: movzx  eax,WORD PTR [rdi+0xa8]
0x1413782f1: mov    WORD PTR [rsi+0x32],ax
0x1413782f5: movzx  eax,WORD PTR [rdi+0xaa]
0x1413782fc: mov    WORD PTR [rsi+0x34],ax
0x141378300: movzx  eax,WORD PTR [rdi+0xac]
0x141378307: mov    WORD PTR [rsi+0x36],ax
0x14137830b: movsx  r10d,WORD PTR [rdi+0xa8]
0x141378313: mov    eax,r10d
0x141378316: sub    eax,DWORD PTR [rsp+0x60]
0x14137831a: mov    r15d,eax
0x14137831d: neg    r15d
0x141378320: cmovs  r15d,eax
0x141378324: movsx  edx,WORD PTR [rdi+0xaa]
0x14137832b: mov    eax,edx
0x14137832d: sub    eax,DWORD PTR [rsp+0x64]
0x141378331: mov    ecx,eax
0x141378333: neg    ecx
0x141378335: cmovs  ecx,eax
0x141378338: cmp    ecx,r15d
0x14137833b: cmovg  r15d,ecx
0x14137833f: mov    ebx,DWORD PTR [rsp+0x60]
0x141378343: sub    ebx,r10d
0x141378346: mov    eax,DWORD PTR [rsp+0x64]
0x14137834a: sub    eax,edx
0x14137834c: mov    DWORD PTR [rsp+0x68],eax
0x141378350: mov    r9d,0xa
0x141378356: mov    r8,r13
0x141378359: mov    rdx,r14
0x14137835c: mov    rcx,rdi
0x14137835f: call   0x141377720
0x141378364: mov    r13d,eax
0x141378367: test   ebx,ebx
0x141378369: jne    0x141378371
0x14137836b: cmp    DWORD PTR [rsp+0x68],ebx
0x14137836f: je     0x141378376
0x141378371: test   r13d,r13d
0x141378374: jne    0x141378391
0x141378376: mov    edx,DWORD PTR [rsp+0x60]
0x14137837a: mov    WORD PTR [rsi+0x26],dx
0x14137837e: mov    r8d,DWORD PTR [rsp+0x64]
0x141378383: mov    WORD PTR [rsi+0x28],r8w
0x141378388: mov    eax,DWORD PTR [rsp+0x6c]
0x14137838c: jmp    0x1413784a9
0x141378391: mov    BYTE PTR [rsp+0x48],0x0
0x141378396: mov    DWORD PTR [rsp+0x40],0x64
0x14137839e: mov    BYTE PTR [rsp+0x38],0x0
0x1413783a3: mov    BYTE PTR [rsp+0x30],0x0
0x1413783a8: mov    eax,DWORD PTR [rsp+0x6c]
0x1413783ac: mov    WORD PTR [rsp+0x28],ax
0x1413783b1: mov    ecx,DWORD PTR [rsp+0x64]
0x1413783b5: mov    WORD PTR [rsp+0x20],cx
0x1413783ba: movzx  r9d,WORD PTR [rsp+0x60]
0x1413783c0: movzx  r8d,WORD PTR [rdi+0xac]
0x1413783c8: movzx  edx,WORD PTR [rdi+0xaa]
0x1413783cf: movzx  ecx,WORD PTR [rdi+0xa8]
0x1413783d6: call   0x140aa8e50
0x1413783db: movsx  eax,WORD PTR [rip+0x85db42]        # 0x141bd5f24
0x1413783e2: mov    DWORD PTR [rsp+0x70],eax
0x1413783e6: movsx  ebx,WORD PTR [rip+0x85db39]        # 0x141bd5f26
0x1413783ed: lea    ecx,[r13*2+0x1]
0x1413783f5: mov    DWORD PTR [rsp+0x68],ecx
0x1413783f9: cmp    ecx,0x1
0x1413783fc: ja     0x14137840d
0x1413783fe: sub    ax,r13w
0x141378402: mov    WORD PTR [rsi+0x26],ax
0x141378406: xor    eax,eax
0x141378408: jmp    0x14137848e
0x14137840d: call   0x140ece790
0x141378412: mov    r8d,eax
0x141378415: mov    eax,0x3
0x14137841a: mul    r8d
0x14137841d: mov    ecx,r8d
0x141378420: sub    ecx,edx
0x141378422: shr    ecx,1
0x141378424: add    ecx,edx
0x141378426: shr    ecx,0x1e
0x141378429: imul   ecx,ecx,0x7fffffff
0x14137842f: sub    r8d,ecx
0x141378432: xor    edx,edx
0x141378434: mov    eax,0x7fffffff
0x141378439: div    DWORD PTR [rsp+0x68]
0x14137843d: lea    ecx,[rax+0x1]
0x141378440: xor    edx,edx
0x141378442: mov    eax,r8d
0x141378445: div    ecx
0x141378447: sub    ax,r13w
0x14137844b: add    ax,WORD PTR [rsp+0x70]
0x141378450: mov    WORD PTR [rsi+0x26],ax
0x141378454: call   0x140ece790
0x141378459: mov    r8d,eax
0x14137845c: mov    eax,0x3
0x141378461: mul    r8d
0x141378464: mov    ecx,r8d
0x141378467: sub    ecx,edx
0x141378469: shr    ecx,1
0x14137846b: add    ecx,edx
0x14137846d: shr    ecx,0x1e
0x141378470: imul   ecx,ecx,0x7fffffff
0x141378476: sub    r8d,ecx
0x141378479: xor    edx,edx
0x14137847b: mov    eax,0x7fffffff
0x141378480: div    DWORD PTR [rsp+0x68]
0x141378484: lea    ecx,[rax+0x1]
0x141378487: xor    edx,edx
0x141378489: mov    eax,r8d
0x14137848c: div    ecx
0x14137848e: sub    bx,r13w
0x141378492: add    bx,ax
0x141378495: mov    WORD PTR [rsi+0x28],bx
0x141378499: movzx  eax,WORD PTR [rip+0x85da88]        # 0x141bd5f28
0x1413784a0: mov    edx,DWORD PTR [rsp+0x60]
0x1413784a4: mov    r8d,DWORD PTR [rsp+0x64]
0x1413784a9: mov    WORD PTR [rsi+0x2a],ax
0x1413784ad: mov    DWORD PTR [rsi+0x38],0x0
0x1413784b4: sar    r15d,1
0x1413784b7: mov    DWORD PTR [rsi+0x40],r15d
0x1413784bb: mov    ecx,DWORD PTR [rsi+0x58]
0x1413784be: mov    DWORD PTR [rsi+0x3c],ecx
0x1413784c1: cmp    ecx,0x3c
0x1413784c4: jle    0x1413784ce
0x1413784c6: mov    ecx,0x3c
0x1413784cb: mov    DWORD PTR [rsi+0x3c],ecx
0x1413784ce: mov    rax,QWORD PTR [rbp-0x78]
0x1413784d2: test   rax,rax
0x1413784d5: je     0x141378510
0x1413784d7: test   DWORD PTR [rax+0x110],0x8000
0x1413784e1: je     0x141378510
0x1413784e3: movsx  eax,WORD PTR [rdi+0xa8]
0x1413784ea: sub    eax,edx
0x1413784ec: mov    ecx,eax
0x1413784ee: neg    ecx
0x1413784f0: cmovs  ecx,eax
0x1413784f3: mov    DWORD PTR [rsi+0x3c],ecx
0x1413784f6: movsx  eax,WORD PTR [rdi+0xaa]
0x1413784fd: sub    eax,r8d
0x141378500: mov    edx,eax
0x141378502: neg    edx
0x141378504: cmovs  edx,eax
0x141378507: cmp    edx,ecx
0x141378509: jle    0x141378510
0x14137850b: mov    DWORD PTR [rsi+0x3c],edx
0x14137850e: mov    ecx,edx
0x141378510: lea    eax,[rcx-0x1]
0x141378513: mov    DWORD PTR [rsi+0x44],eax
0x141378516: movzx  ecx,WORD PTR [rsi+0x20]
0x14137851a: mov    WORD PTR [rsi+0x2c],cx
0x14137851e: movzx  eax,WORD PTR [rsi+0x22]
0x141378522: mov    WORD PTR [rsi+0x2e],ax
0x141378526: movzx  eax,WORD PTR [rsi+0x24]
0x14137852a: mov    WORD PTR [rsi+0x30],ax
0x14137852e: mov    QWORD PTR [rsi+0x98],r12
0x141378535: mov    WORD PTR [r12+0x8],cx
0x14137853b: mov    rcx,QWORD PTR [rsi+0x98]
0x141378542: movzx  eax,WORD PTR [rsi+0x2e]
0x141378546: mov    WORD PTR [rcx+0xa],ax
0x14137854a: mov    rcx,QWORD PTR [rsi+0x98]
0x141378551: movzx  eax,WORD PTR [rsi+0x30]
0x141378555: mov    WORD PTR [rcx+0xc],ax
0x141378559: mov    r15,QWORD PTR [rsi+0x98]
0x141378560: mov    ebx,DWORD PTR [rsi+0x10]
0x141378563: mov    ecx,0xc
0x141378568: call   0x140ef6f50
0x14137856d: mov    r13,rax
0x141378570: mov    QWORD PTR [rbp-0x70],rax
0x141378574: mov    r8,QWORD PTR [rax]
0x141378577: mov    edx,ebx
0x141378579: mov    rcx,rax
0x14137857c: call   QWORD PTR [r8+0x58]
0x141378580: lea    rcx,[r15+0x38]
0x141378584: mov    rdx,QWORD PTR [r15+0x40]
0x141378588: cmp    rdx,QWORD PTR [r15+0x48]
0x14137858c: je     0x141378598
0x14137858e: mov    QWORD PTR [rdx],r13
0x141378591: add    QWORD PTR [r15+0x40],0x8
0x141378596: jmp    0x1413785a1
0x141378598: lea    r8,[rbp-0x70]
0x14137859c: call   0x1400bc360
0x1413785a1: mov    QWORD PTR [rsi+0x18],rdi
0x1413785a5: mov    eax,DWORD PTR [r14+0x1c]
0x1413785a9: mov    DWORD PTR [rsi+0x5c],eax
0x1413785ac: xor    r15d,r15d
0x1413785af: mov    DWORD PTR [rsi+0x4c],r15d
0x1413785b3: mov    rax,QWORD PTR [rbp-0x78]
0x1413785b7: mov    r13d,0xffffffff
0x1413785bd: test   rax,rax
0x1413785c0: je     0x1413785cb
0x1413785c2: mov    r8d,DWORD PTR [rax+0x130]
0x1413785c9: jmp    0x1413785ce
0x1413785cb: mov    r8d,r13d
0x1413785ce: mov    DWORD PTR [rsi+0x68],r8d
0x1413785d2: movsx  rbx,WORD PTR [rbp+0xc8]
0x1413785da: mov    WORD PTR [rsi+0x6c],bx
0x1413785de: cmp    bx,0xffff
0x1413785e2: je     0x141378666
0x1413785e8: mov    rax,QWORD PTR [rip+0x108ef49]        # 0x142407538
0x1413785ef: mov    r11,QWORD PTR [rip+0x108ef3a]        # 0x142407530
0x1413785f6: sub    rax,r11
0x1413785f9: sar    rax,0x3
0x1413785fd: test   eax,eax
0x1413785ff: je     0x141378666
0x141378601: cmp    r8d,0xffffffff
0x141378605: je     0x141378666
0x141378607: sub    eax,0x1
0x14137860a: mov    edx,r15d
0x14137860d: js     0x141378639
0x14137860f: nop
0x141378610: mov    r10d,eax
0x141378613: lea    ecx,[rdx+rax*1]
0x141378616: sar    ecx,1
0x141378618: movsxd rax,ecx
0x14137861b: mov    rax,QWORD PTR [r11+rax*8]
0x14137861f: cmp    DWORD PTR [rax+0x130],r8d
0x141378626: je     0x14137863c
0x141378628: lea    eax,[rcx+0x1]
0x14137862b: cmovle edx,eax
0x14137862e: lea    eax,[rcx-0x1]
0x141378631: cmovle eax,r10d
0x141378635: cmp    edx,eax
0x141378637: jle    0x141378610
0x141378639: mov    rax,r15
0x14137863c: test   rax,rax
0x14137863f: je     0x141378666
0x141378641: mov    rax,QWORD PTR [rax+0x5f8]
0x141378648: mov    rcx,QWORD PTR [rax]
0x14137864b: mov    rax,QWORD PTR [rcx+rbx*8]
0x14137864f: cmp    DWORD PTR [rax+0x50],0x1
0x141378653: jle    0x141378666
0x141378655: mov    rax,QWORD PTR [rax+0x48]
0x141378659: test   BYTE PTR [rax+0x1],0x20
0x14137865d: je     0x141378666
0x14137865f: or     DWORD PTR [rsi+0x48],0x10000
0x141378666: mov    eax,DWORD PTR [rbp+0xd0]
0x14137866c: mov    DWORD PTR [rsi+0x70],eax
0x14137866f: or     DWORD PTR [r12+0x10],0x2
0x141378675: mov    edx,0x9
0x14137867a: mov    DWORD PTR [rsp+0x50],r13d
0x14137867f: mov    WORD PTR [rsp+0x48],r13w
0x141378685: mov    DWORD PTR [rsp+0x40],0x1
0x14137868d: mov    QWORD PTR [rsp+0x38],r14
0x141378692: mov    QWORD PTR [rsp+0x30],r12
0x141378697: mov    DWORD PTR [rsp+0x28],r15d
0x14137869c: mov    DWORD PTR [rsp+0x20],0x32
0x1413786a4: mov    r9d,0xf
0x1413786aa: mov    r8d,0xb
0x1413786b0: mov    rcx,rdi
0x1413786b3: call   0x1413812a0
0x1413786b8: mov    DWORD PTR [rsi+0x50],eax
0x1413786bb: movzx  eax,WORD PTR [rdi+0xa8]
0x1413786c2: sub    ax,WORD PTR [rsp+0x60]
0x1413786c7: movsx  r8d,ax
0x1413786cb: movzx  eax,WORD PTR [rdi+0xaa]
0x1413786d2: mov    ecx,DWORD PTR [rsp+0x64]
0x1413786d6: sub    ax,cx
0x1413786d9: movsx  ecx,ax
0x1413786dc: movzx  eax,WORD PTR [rdi+0xac]
0x1413786e3: sub    ax,WORD PTR [rsp+0x6c]
0x1413786e8: movsx  edx,ax
0x1413786eb: imul   edx,edx
0x1413786ee: imul   ecx,ecx
0x1413786f1: add    edx,ecx
0x1413786f3: imul   r8d,r8d
0x1413786f7: add    edx,r8d
0x1413786fa: movd   xmm1,edx
0x1413786fe: cvtdq2ps xmm1,xmm1
0x141378701: xorps  xmm0,xmm0
0x141378704: ucomiss xmm0,xmm1
0x141378707: ja     0x141378712
0x141378709: xorps  xmm0,xmm0
0x14137870c: sqrtss xmm0,xmm1
0x141378710: jmp    0x14137871a
0x141378712: movaps xmm0,xmm1
0x141378715: call   0x1415548d6
0x14137871a: cvttss2si edx,xmm0
0x14137871e: lea    rcx,[rsi+0x50]
0x141378722: call   0x141377860
0x141378727: cmp    WORD PTR [rdi+0x814],0x2
0x14137872f: jne    0x141378735
0x141378731: or     DWORD PTR [rsi+0x48],0x40
0x141378735: mov    rax,QWORD PTR [r14]
0x141378738: mov    rdx,QWORD PTR [rax+0x4f8]
0x14137873f: mov    rcx,r14
0x141378742: test   BYTE PTR [rdi+0x114],0x2
0x141378749: jne    0x141378755
0x14137874b: call   rdx
0x14137874d: mov    r15d,0x1e
0x141378753: jmp    0x14137875d
0x141378755: call   rdx
0x141378757: mov    r15d,0x6
0x14137875d: mov    ebx,0x62
0x141378762: mov    rsi,rdi
0x141378765: mov    r8d,r15d
0x141378768: movzx  edx,ax
0x14137876b: mov    rcx,rdi
0x14137876e: call   0x141354400
0x141378773: mov    r8d,r15d
0x141378776: movzx  edx,bx
0x141378779: mov    rcx,rdi
0x14137877c: call   0x141354400
0x141378781: mov    rax,QWORD PTR [r14]
0x141378784: mov    rcx,r14
0x141378787: call   QWORD PTR [rax]
0x141378789: cmp    ax,0x18
0x14137878d: jne    0x1413787bd
0x14137878f: mov    rax,QWORD PTR [r14+0xe8]
0x141378796: cmp    DWORD PTR [rax+0x1e0],0x0
0x14137879d: jle    0x1413787bd
0x14137879f: mov    rcx,rdi
0x1413787a2: call   0x140660420
0x1413787a7: mov    DWORD PTR [rax],0x1b
0x1413787ad: mov    rcx,QWORD PTR [r14+0xe8]
0x1413787b4: mov    edx,DWORD PTR [rcx+0x1e0]
0x1413787ba: mov    DWORD PTR [rax+0x8],edx
0x1413787bd: mov    ecx,DWORD PTR [rdi+0x118]
0x1413787c3: mov    eax,ecx
0x1413787c5: shr    eax,0xa
0x1413787c8: test   al,0x1
0x1413787ca: jne    0x141378816
0x1413787cc: cmp    QWORD PTR [rdi+0xd80],0x0
0x1413787d4: jne    0x141378816
0x1413787d6: bt     ecx,0xc
0x1413787da: jb     0x141378816
0x1413787dc: cmp    DWORD PTR [rdi+0x1280],0x7
0x1413787e3: jle    0x1413787fd
0x1413787e5: mov    rax,QWORD PTR [rdi+0x1278]
0x1413787ec: cmp    BYTE PTR [rax+0x7],0x0
0x1413787f0: jge    0x1413787fd
0x1413787f2: test   BYTE PTR [rdi+0x82c],0x8
0x1413787f9: je     0x141378816
0x1413787fb: jmp    0x14137880f
0x1413787fd: test   BYTE PTR [rdi+0x82c],0x8
0x141378804: jne    0x14137880f
0x141378806: test   BYTE PTR [rdi+0x828],0x8
0x14137880d: jne    0x141378816
0x14137880f: add    DWORD PTR [rdi+0x984],0x14
0x141378816: cmp    DWORD PTR [rip+0x545a1b],0x0        # 0x1418be238
0x14137881d: jne    0x14137882d
0x14137881f: or     DWORD PTR [rdi+0x280],0x1
0x141378826: or     DWORD PTR [rip+0x10434ab],0x40        # 0x1423bbcd8
0x14137882d: mov    rcx,QWORD PTR [rbp+0x38]
0x141378831: xor    rcx,rsp
0x141378834: call   0x1415530b0
0x141378839: add    rsp,0x148
0x141378840: pop    r15
0x141378842: pop    r14
0x141378844: pop    r13
0x141378846: pop    r12
0x141378848: pop    rdi
0x141378849: pop    rsi
0x14137884a: pop    rbx
0x14137884b: pop    rbp
0x14137884c: ret
