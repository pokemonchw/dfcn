# steam PE:6a70a6d9:02711000; item-location-label; RVA 0x1393900..0x13946f4
0x01393900: rex push rbp
0x01393902: push   rbx
0x01393903: push   rsi
0x01393904: push   rdi
0x01393905: push   r12
0x01393907: push   r14
0x01393909: push   r15
0x0139390b: mov    rbp,rsp
0x0139390e: sub    rsp,0x80
0x01393915: mov    rax,QWORD PTR [rip+0x508724]        # 0x14189c040
0x0139391c: xor    rax,rsp
0x0139391f: mov    QWORD PTR [rbp-0x10],rax
0x01393923: mov    rsi,r8
0x01393926: mov    rdi,rdx
0x01393929: mov    rbx,rcx
0x0139392c: xor    r14d,r14d
0x0139392f: mov    QWORD PTR [rdx+0x10],r14
0x01393933: mov    rax,rdx
0x01393936: cmp    QWORD PTR [rdx+0x18],0xf
0x0139393b: jbe    0x141393940
0x0139393d: mov    rax,QWORD PTR [rdx]
0x01393940: mov    BYTE PTR [rax],r14b
0x01393943: xorps  xmm0,xmm0
0x01393946: movups XMMWORD PTR [rbp-0x50],xmm0
0x0139394a: mov    QWORD PTR [rbp-0x40],r14
0x0139394e: mov    QWORD PTR [rbp-0x38],0xf
0x01393956: mov    BYTE PTR [rbp-0x50],r14b
0x0139395a: movsx  rax,WORD PTR [r8+0x8]
0x0139395f: cmp    eax,0xb
0x01393962: ja     0x1413946c6
0x01393968: lea    rdx,[rip+0xfffffffffec6c691]        # 0x140000000
0x0139396f: mov    ecx,DWORD PTR [rdx+rax*4+0x13946f4]
0x01393976: add    rcx,rdx
0x01393979: jmp    rcx
0x0139397b: cmp    DWORD PTR [rip+0x508916],0x0        # 0x14189c298
0x01393982: jne    0x1413939bd
0x01393984: mov    r9d,0x99
0x0139398a: movzx  r8d,WORD PTR [rbx+0x12c]
0x01393992: movzx  edx,WORD PTR [rbx+0xa4]
0x01393999: lea    rcx,[rip+0x11590a8]        # 0x1424eca48
0x013939a0: call   0x140072850
0x013939a5: test   al,al
0x013939a7: je     0x1413939bd
0x013939a9: lea    rdx,[rip+0x3f06b8]        # 0x141784068 ; literal="In Mouth"
0x013939b0: mov    rcx,rdi
0x013939b3: call   0x14006f580
0x013939b8: jmp    0x1413946c6
0x013939bd: mov    rcx,QWORD PTR [rbx+0x4d8]
0x013939c4: test   rcx,rcx
0x013939c7: je     0x1413939fb
0x013939c9: mov    edx,0xef
0x013939ce: movzx  eax,WORD PTR [rcx+0x14]
0x013939d2: sub    ax,dx
0x013939d5: mov    edx,0xfffd
0x013939da: test   dx,ax
0x013939dd: jne    0x1413939ef
0x013939df: call   0x140d09a30
0x013939e4: cmp    rax,QWORD PTR [rsi]
0x013939e7: jne    0x1413939ef
0x013939e9: mov    r14d,0x1
0x013939ef: test   r14d,r14d
0x013939f2: lea    rdx,[rip+0x3f06ab]        # 0x1417840a4 ; literal="Hidden"
0x013939f9: jne    0x141393a02
0x013939fb: lea    rdx,[rip+0x3f069a]        # 0x14178409c ; literal="Hauled"
0x01393a02: mov    rcx,rdi
0x01393a05: call   0x14006f580
0x01393a0a: jmp    0x1413946c6
0x01393a0f: movsx  rcx,WORD PTR [r8+0xa]
0x01393a14: test   cx,cx
0x01393a17: js     0x141393c21
0x01393a1d: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393a24: mov    rdx,QWORD PTR [rax]
0x01393a27: mov    rsi,rcx
0x01393a2a: mov    rcx,QWORD PTR [rax+0x8]
0x01393a2e: sub    rcx,rdx
0x01393a31: sar    rcx,0x3
0x01393a35: cmp    rsi,rcx
0x01393a38: jae    0x141393c21
0x01393a3e: mov    rax,QWORD PTR [rdx+rsi*8]
0x01393a42: mov    rcx,QWORD PTR [rax+0x98]
0x01393a49: mov    rax,QWORD PTR [rax+0x90]
0x01393a50: mov    QWORD PTR [rdi+0x10],r14
0x01393a54: mov    rdx,QWORD PTR [rdi+0x18]
0x01393a58: sub    rcx,rax
0x01393a5b: sar    rcx,0x3
0x01393a5f: mov    rax,rdi
0x01393a62: test   rcx,rcx
0x01393a65: je     0x141393bd2
0x01393a6b: cmp    rdx,0xf
0x01393a6f: jbe    0x141393a74
0x01393a71: mov    rax,QWORD PTR [rdi]
0x01393a74: mov    BYTE PTR [rax],0x0
0x01393a77: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393a7e: mov    rcx,QWORD PTR [rax]
0x01393a81: mov    rax,QWORD PTR [rcx+rsi*8]
0x01393a85: cmp    DWORD PTR [rax+0x84],0x1
0x01393a8c: jg     0x141393a97
0x01393a8e: mov    rax,QWORD PTR [rax+0x90]
0x01393a95: jmp    0x141393a9e
0x01393a97: mov    rax,QWORD PTR [rax+0xa8]
0x01393a9e: mov    rdx,QWORD PTR [rax]
0x01393aa1: cmp    QWORD PTR [rdx+0x18],0xf
0x01393aa6: mov    r8,QWORD PTR [rdx+0x10]
0x01393aaa: jbe    0x141393aaf
0x01393aac: mov    rdx,QWORD PTR [rdx]
0x01393aaf: mov    rcx,rdi
0x01393ab2: call   0x14006fa10
0x01393ab7: mov    rcx,rdi
0x01393aba: call   0x14052d650
0x01393abf: jmp    0x1413946c6
0x01393ac4: mov    rcx,QWORD PTR [r8]
0x01393ac7: mov    rax,QWORD PTR [rcx]
0x01393aca: mov    edx,DWORD PTR [rbx+0x6b0]
0x01393ad0: call   QWORD PTR [rax+0x380]
0x01393ad6: test   al,al
0x01393ad8: je     0x141393afa
0x01393ada: mov    rcx,rbx
0x01393add: call   0x14135edf0
0x01393ae2: test   al,al
0x01393ae4: jne    0x141393afa
0x01393ae6: lea    rdx,[rip+0x3f049b]        # 0x141783f88 ; literal="Multigrasp"
0x01393aed: mov    rcx,rdi
0x01393af0: call   0x14006f560
0x01393af5: jmp    0x1413946c6
0x01393afa: mov    WORD PTR [rsp+0x20],0x2
0x01393b01: xor    r9d,r9d
0x01393b04: movzx  r8d,WORD PTR [rsi+0xa]
0x01393b09: mov    rdx,rdi
0x01393b0c: mov    rcx,rbx
0x01393b0f: call   0x1413345d0
0x01393b14: mov    rcx,rdi
0x01393b17: call   0x14052d650
0x01393b1c: jmp    0x1413946c6
0x01393b21: movsx  rcx,WORD PTR [r8+0xa]
0x01393b26: test   cx,cx
0x01393b29: js     0x141393c21
0x01393b2f: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393b36: mov    rdx,QWORD PTR [rax]
0x01393b39: mov    rsi,rcx
0x01393b3c: mov    rcx,QWORD PTR [rax+0x8]
0x01393b40: sub    rcx,rdx
0x01393b43: sar    rcx,0x3
0x01393b47: cmp    rsi,rcx
0x01393b4a: jae    0x141393c21
0x01393b50: mov    rax,QWORD PTR [rdx+rsi*8]
0x01393b54: mov    rcx,QWORD PTR [rax+0x98]
0x01393b5b: mov    rax,QWORD PTR [rax+0x90]
0x01393b62: mov    QWORD PTR [rdi+0x10],r14
0x01393b66: mov    rdx,QWORD PTR [rdi+0x18]
0x01393b6a: sub    rcx,rax
0x01393b6d: sar    rcx,0x3
0x01393b71: mov    rax,rdi
0x01393b74: test   rcx,rcx
0x01393b77: je     0x141393bd2
0x01393b79: cmp    rdx,0xf
0x01393b7d: jbe    0x141393b82
0x01393b7f: mov    rax,QWORD PTR [rdi]
0x01393b82: mov    BYTE PTR [rax],0x0
0x01393b85: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393b8c: mov    rcx,QWORD PTR [rax]
0x01393b8f: mov    rax,QWORD PTR [rcx+rsi*8]
0x01393b93: cmp    DWORD PTR [rax+0x84],0x1
0x01393b9a: jg     0x141393ba5
0x01393b9c: mov    rax,QWORD PTR [rax+0x90]
0x01393ba3: jmp    0x141393bac
0x01393ba5: mov    rax,QWORD PTR [rax+0xa8]
0x01393bac: mov    rdx,QWORD PTR [rax]
0x01393baf: mov    r8,QWORD PTR [rdx+0x10]
0x01393bb3: cmp    QWORD PTR [rdx+0x18],0xf
0x01393bb8: jbe    0x141393bbd
0x01393bba: mov    rdx,QWORD PTR [rdx]
0x01393bbd: mov    rcx,rdi
0x01393bc0: call   0x14006fa10
0x01393bc5: mov    rcx,rdi
0x01393bc8: call   0x14052d650
0x01393bcd: jmp    0x1413946c6
0x01393bd2: cmp    rdx,0xf
0x01393bd6: jbe    0x141393bdb
0x01393bd8: mov    rax,QWORD PTR [rdi]
0x01393bdb: mov    BYTE PTR [rax],0x0
0x01393bde: mov    r8d,0x9
0x01393be4: lea    rdx,[rip+0x2ed465]        # 0x141681050 ; literal="body part"
0x01393beb: mov    rcx,rdi
0x01393bee: call   0x14006fa10
0x01393bf3: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393bfa: mov    rcx,QWORD PTR [rax]
0x01393bfd: mov    rax,QWORD PTR [rcx+rsi*8]
0x01393c01: cmp    DWORD PTR [rax+0x84],0x1
0x01393c08: jle    0x141393c36
0x01393c0a: mov    dl,0x73
0x01393c0c: mov    rcx,rdi
0x01393c0f: call   0x1400b9b80
0x01393c14: mov    rcx,rdi
0x01393c17: call   0x14052d650
0x01393c1c: jmp    0x1413946c6
0x01393c21: mov    r8d,0x9
0x01393c27: lea    rdx,[rip+0x2ed422]        # 0x141681050 ; literal="body part"
0x01393c2e: mov    rcx,rdi
0x01393c31: call   0x14006f8d0
0x01393c36: mov    rcx,rdi
0x01393c39: call   0x14052d650
0x01393c3e: jmp    0x1413946c6
0x01393c43: mov    r8d,0x3
0x01393c49: lea    rdx,[rip+0x26a428]        # 0x1415fe078 ; literal="In "
0x01393c50: mov    rcx,rdi
0x01393c53: call   0x14006f8d0
0x01393c58: movsx  rcx,WORD PTR [rsi+0xa]
0x01393c5d: test   cx,cx
0x01393c60: js     0x141393e37
0x01393c66: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393c6d: mov    rdx,QWORD PTR [rax]
0x01393c70: mov    rsi,rcx
0x01393c73: mov    rcx,QWORD PTR [rax+0x8]
0x01393c77: sub    rcx,rdx
0x01393c7a: sar    rcx,0x3
0x01393c7e: cmp    rsi,rcx
0x01393c81: jae    0x141393e37
0x01393c87: mov    rcx,QWORD PTR [rdx+rsi*8]
0x01393c8b: mov    rax,QWORD PTR [rcx+0x98]
0x01393c92: sub    rax,QWORD PTR [rcx+0x90]
0x01393c99: sar    rax,0x3
0x01393c9d: mov    QWORD PTR [rbp-0x40],r14
0x01393ca1: test   rax,rax
0x01393ca4: lea    rax,[rbp-0x50]
0x01393ca8: je     0x141393cfd
0x01393caa: cmp    QWORD PTR [rbp-0x38],0xf
0x01393caf: cmova  rax,QWORD PTR [rbp-0x50]
0x01393cb4: mov    BYTE PTR [rax],0x0
0x01393cb7: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393cbe: mov    rcx,QWORD PTR [rax]
0x01393cc1: mov    rax,QWORD PTR [rcx+rsi*8]
0x01393cc5: cmp    DWORD PTR [rax+0x84],0x1
0x01393ccc: jg     0x141393cd7
0x01393cce: mov    rax,QWORD PTR [rax+0x90]
0x01393cd5: jmp    0x141393cde
0x01393cd7: mov    rax,QWORD PTR [rax+0xa8]
0x01393cde: mov    rdx,QWORD PTR [rax]
0x01393ce1: cmp    QWORD PTR [rdx+0x18],0xf
0x01393ce6: mov    r8,QWORD PTR [rdx+0x10]
0x01393cea: jbe    0x141393cef
0x01393cec: mov    rdx,QWORD PTR [rdx]
0x01393cef: lea    rcx,[rbp-0x50]
0x01393cf3: call   0x14006fa10
0x01393cf8: jmp    0x141393f0d
0x01393cfd: cmp    QWORD PTR [rbp-0x38],0xf
0x01393d02: cmova  rax,QWORD PTR [rbp-0x50]
0x01393d07: mov    BYTE PTR [rax],0x0
0x01393d0a: mov    r8d,0x9
0x01393d10: lea    rdx,[rip+0x2ed339]        # 0x141681050 ; literal="body part"
0x01393d17: lea    rcx,[rbp-0x50]
0x01393d1b: call   0x14006fa10
0x01393d20: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393d27: mov    rcx,QWORD PTR [rax]
0x01393d2a: mov    rax,QWORD PTR [rcx+rsi*8]
0x01393d2e: cmp    DWORD PTR [rax+0x84],0x1
0x01393d35: jle    0x141393f0d
0x01393d3b: mov    rsi,QWORD PTR [rbp-0x40]
0x01393d3f: mov    r14,QWORD PTR [rbp-0x38]
0x01393d43: cmp    rsi,r14
0x01393d46: jae    0x141393d68
0x01393d48: lea    rax,[rsi+0x1]
0x01393d4c: mov    QWORD PTR [rbp-0x40],rax
0x01393d50: lea    rax,[rbp-0x50]
0x01393d54: cmp    r14,0xf
0x01393d58: cmova  rax,QWORD PTR [rbp-0x50]
0x01393d5d: mov    WORD PTR [rax+rsi*1],0x73
0x01393d63: jmp    0x141393f0d
0x01393d68: movabs rbx,0x7fffffffffffffff
0x01393d72: mov    rax,rbx
0x01393d75: sub    rax,rsi
0x01393d78: cmp    rax,0x1
0x01393d7c: jb     0x1413946ed
0x01393d82: lea    r12,[rsi+0x1]
0x01393d86: mov    rcx,r12
0x01393d89: or     rcx,0xf
0x01393d8d: cmp    rcx,rbx
0x01393d90: ja     0x141393db1
0x01393d92: mov    rdx,r14
0x01393d95: shr    rdx,1
0x01393d98: mov    rax,rbx
0x01393d9b: sub    rax,rdx
0x01393d9e: cmp    r14,rax
0x01393da1: ja     0x141393db1
0x01393da3: lea    rax,[r14+rdx*1]
0x01393da7: mov    rbx,rcx
0x01393daa: cmp    rcx,rax
0x01393dad: cmovb  rbx,rax
0x01393db1: lea    rcx,[rbx+0x1]
0x01393db5: call   0x1400707d0
0x01393dba: mov    r15,rax
0x01393dbd: cmp    r14,0xf
0x01393dc1: mov    rcx,rax
0x01393dc4: mov    r8,rsi
0x01393dc7: mov    QWORD PTR [rbp-0x38],rbx
0x01393dcb: mov    QWORD PTR [rbp-0x40],r12
0x01393dcf: jbe    0x141393e1e
0x01393dd1: mov    rbx,QWORD PTR [rbp-0x50]
0x01393dd5: mov    rdx,rbx
0x01393dd8: call   0x14153aa78
0x01393ddd: lea    rdx,[r14+0x1]
0x01393de1: cmp    rdx,0x1000
0x01393de8: mov    WORD PTR [rsi+r15*1],0x73
0x01393def: jb     0x141393e0d
0x01393df1: add    rdx,0x27
0x01393df5: mov    rcx,QWORD PTR [rbx-0x8]
0x01393df9: sub    rbx,rcx
0x01393dfc: lea    rax,[rbx-0x8]
0x01393e00: cmp    rax,0x1f
0x01393e04: ja     0x1413945f6
0x01393e0a: mov    rbx,rcx
0x01393e0d: mov    rcx,rbx
0x01393e10: call   0x141539680
0x01393e15: mov    QWORD PTR [rbp-0x50],r15
0x01393e19: jmp    0x141393f0d
0x01393e1e: lea    rdx,[rbp-0x50]
0x01393e22: call   0x14153aa78
0x01393e27: mov    WORD PTR [rsi+r15*1],0x73
0x01393e2e: mov    QWORD PTR [rbp-0x50],r15
0x01393e32: jmp    0x141393f0d
0x01393e37: mov    rsi,QWORD PTR [rbp-0x38]
0x01393e3b: cmp    rsi,0x9
0x01393e3f: jb     0x141393e74
0x01393e41: lea    rbx,[rbp-0x50]
0x01393e45: cmp    rsi,0xf
0x01393e49: cmova  rbx,QWORD PTR [rbp-0x50]
0x01393e4e: mov    QWORD PTR [rbp-0x40],0x9
0x01393e56: mov    r8d,0x9
0x01393e5c: lea    rdx,[rip+0x2ed1ed]        # 0x141681050 ; literal="body part"
0x01393e63: mov    rcx,rbx
0x01393e66: call   0x14153ae1a
0x01393e6b: mov    BYTE PTR [rbx+0x9],0x0
0x01393e6f: jmp    0x141393f0d
0x01393e74: mov    rcx,rsi
0x01393e77: shr    rcx,1
0x01393e7a: movabs rbx,0x7fffffffffffffff
0x01393e84: mov    rax,rbx
0x01393e87: sub    rax,rcx
0x01393e8a: cmp    rsi,rax
0x01393e8d: ja     0x141393e9f
0x01393e8f: lea    rax,[rsi+rcx*1]
0x01393e93: mov    ebx,0xf
0x01393e98: cmp    rax,rbx
0x01393e9b: cmova  rbx,rax
0x01393e9f: lea    rcx,[rbx+0x1]
0x01393ea3: call   0x1400707d0
0x01393ea8: mov    QWORD PTR [rbp-0x40],0x9
0x01393eb0: mov    QWORD PTR [rbp-0x38],rbx
0x01393eb4: movsd  xmm0,QWORD PTR [rip+0x2ed194]        # 0x141681050 ; literal="body part"
0x01393ebc: movsd  QWORD PTR [rax],xmm0
0x01393ec0: movzx  ecx,BYTE PTR [rip+0x2ed191]        # 0x141681058 ; literal="t"
0x01393ec7: mov    BYTE PTR [rax+0x8],cl
0x01393eca: cmp    rsi,0xf
0x01393ece: mov    BYTE PTR [rax+0x9],0x0
0x01393ed2: mov    r14,rax
0x01393ed5: jbe    0x141393f09
0x01393ed7: lea    rdx,[rsi+0x1]
0x01393edb: mov    rcx,QWORD PTR [rbp-0x50]
0x01393edf: cmp    rdx,0x1000
0x01393ee6: mov    rax,rcx
0x01393ee9: jb     0x141393f04
0x01393eeb: add    rdx,0x27
0x01393eef: mov    rcx,QWORD PTR [rcx-0x8]
0x01393ef3: sub    rax,rcx
0x01393ef6: add    rax,0xfffffffffffffff8
0x01393efa: cmp    rax,0x1f
0x01393efe: ja     0x1413945f6
0x01393f04: call   0x141539680
0x01393f09: mov    QWORD PTR [rbp-0x50],r14
0x01393f0d: lea    rcx,[rbp-0x50]
0x01393f11: call   0x14052d650
0x01393f16: lea    rdx,[rbp-0x50]
0x01393f1a: cmp    QWORD PTR [rbp-0x38],0xf
0x01393f1f: cmova  rdx,QWORD PTR [rbp-0x50]
0x01393f24: mov    r8,QWORD PTR [rbp-0x40]
0x01393f28: mov    rcx,rdi
0x01393f2b: call   0x14006fa10
0x01393f30: jmp    0x1413946c6
0x01393f35: mov    r8d,0xf
0x01393f3b: lea    rdx,[rip+0x3f0036]        # 0x141783f78 ; literal="Wrapped around "
0x01393f42: mov    rcx,rdi
0x01393f45: call   0x14006f8d0
0x01393f4a: mov    WORD PTR [rsp+0x20],0x2
0x01393f51: xor    r9d,r9d
0x01393f54: movzx  r8d,WORD PTR [rsi+0xa]
0x01393f59: lea    rdx,[rbp-0x50]
0x01393f5d: mov    rcx,rbx
0x01393f60: call   0x1413345d0
0x01393f65: jmp    0x141393f0d
0x01393f67: mov    r8d,0xc
0x01393f6d: lea    rdx,[rip+0x3f0034]        # 0x141783fa8 ; literal="Strapped to "
0x01393f74: mov    rcx,rdi
0x01393f77: call   0x14006f8d0
0x01393f7c: movsx  rcx,WORD PTR [rsi+0xa]
0x01393f81: test   cx,cx
0x01393f84: js     0x141394075
0x01393f8a: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393f91: mov    rdx,QWORD PTR [rax]
0x01393f94: mov    rsi,rcx
0x01393f97: mov    rcx,QWORD PTR [rax+0x8]
0x01393f9b: sub    rcx,rdx
0x01393f9e: sar    rcx,0x3
0x01393fa2: cmp    rsi,rcx
0x01393fa5: jae    0x141394075
0x01393fab: mov    rcx,QWORD PTR [rdx+rsi*8]
0x01393faf: mov    rax,QWORD PTR [rcx+0x98]
0x01393fb6: sub    rax,QWORD PTR [rcx+0x90]
0x01393fbd: sar    rax,0x3
0x01393fc1: mov    QWORD PTR [rbp-0x40],r14
0x01393fc5: test   rax,rax
0x01393fc8: lea    rax,[rbp-0x50]
0x01393fcc: je     0x141394021
0x01393fce: cmp    QWORD PTR [rbp-0x38],0xf
0x01393fd3: cmova  rax,QWORD PTR [rbp-0x50]
0x01393fd8: mov    BYTE PTR [rax],0x0
0x01393fdb: mov    rax,QWORD PTR [rbx+0x5f8]
0x01393fe2: mov    rcx,QWORD PTR [rax]
0x01393fe5: mov    rax,QWORD PTR [rcx+rsi*8]
0x01393fe9: cmp    DWORD PTR [rax+0x84],0x1
0x01393ff0: jg     0x141393ffb
0x01393ff2: mov    rax,QWORD PTR [rax+0x90]
0x01393ff9: jmp    0x141394002
0x01393ffb: mov    rax,QWORD PTR [rax+0xa8]
0x01394002: mov    rdx,QWORD PTR [rax]
0x01394005: cmp    QWORD PTR [rdx+0x18],0xf
0x0139400a: mov    r8,QWORD PTR [rdx+0x10]
0x0139400e: jbe    0x141394013
0x01394010: mov    rdx,QWORD PTR [rdx]
0x01394013: lea    rcx,[rbp-0x50]
0x01394017: call   0x14006fa10
0x0139401c: jmp    0x141393f0d
0x01394021: cmp    QWORD PTR [rbp-0x38],0xf
0x01394026: cmova  rax,QWORD PTR [rbp-0x50]
0x0139402b: mov    BYTE PTR [rax],0x0
0x0139402e: mov    r8d,0x9
0x01394034: lea    rdx,[rip+0x2ed015]        # 0x141681050 ; literal="body part"
0x0139403b: lea    rcx,[rbp-0x50]
0x0139403f: call   0x14006fa10
0x01394044: mov    rax,QWORD PTR [rbx+0x5f8]
0x0139404b: mov    rcx,QWORD PTR [rax]
0x0139404e: mov    rax,QWORD PTR [rcx+rsi*8]
0x01394052: cmp    DWORD PTR [rax+0x84],0x1
0x01394059: jle    0x141393f0d
0x0139405f: mov    rsi,QWORD PTR [rbp-0x40]
0x01394063: mov    r14,QWORD PTR [rbp-0x38]
0x01394067: cmp    rsi,r14
0x0139406a: jb     0x141393d48
0x01394070: jmp    0x141393d68
0x01394075: mov    rsi,QWORD PTR [rbp-0x38]
0x01394079: cmp    rsi,0x9
0x0139407d: jae    0x141393e41
0x01394083: mov    rcx,rsi
0x01394086: shr    rcx,1
0x01394089: movabs rbx,0x7fffffffffffffff
0x01394093: mov    rax,rbx
0x01394096: sub    rax,rcx
0x01394099: cmp    rsi,rax
0x0139409c: ja     0x141393e9f
0x013940a2: lea    rax,[rcx+rsi*1]
0x013940a6: jmp    0x141393e93
0x013940ab: mov    edx,r14d
0x013940ae: mov    r10,QWORD PTR [rbx+0x410]
0x013940b5: mov    r9,QWORD PTR [rbx+0x408]
0x013940bc: mov    rax,r10
0x013940bf: sub    rax,r9
0x013940c2: sar    rax,0x3
0x013940c6: test   rax,rax
0x013940c9: je     0x141394109
0x013940cb: mov    r8,r9
0x013940ce: xchg   ax,ax
0x013940d0: mov    rcx,QWORD PTR [r8]
0x013940d3: movzx  eax,WORD PTR [rcx+0x8]
0x013940d7: cmp    ax,0x2
0x013940db: je     0x1413940e3
0x013940dd: cmp    ax,0x5
0x013940e1: jne    0x1413940f1
0x013940e3: movzx  eax,WORD PTR [rsi+0xa]
0x013940e7: cmp    WORD PTR [rcx+0xa],ax
0x013940eb: je     0x141394198
0x013940f1: inc    edx
0x013940f3: add    r8,0x8
0x013940f7: mov    rcx,r10
0x013940fa: sub    rcx,r9
0x013940fd: sar    rcx,0x3
0x01394101: movsxd rax,edx
0x01394104: cmp    rax,rcx
0x01394107: jb     0x1413940d0
0x01394109: movsx  rcx,WORD PTR [rsi+0xa]
0x0139410e: test   cx,cx
0x01394111: js     0x141393c21
0x01394117: mov    rax,QWORD PTR [rbx+0x5f8]
0x0139411e: mov    rdx,QWORD PTR [rax]
0x01394121: mov    rsi,rcx
0x01394124: mov    rcx,QWORD PTR [rax+0x8]
0x01394128: sub    rcx,rdx
0x0139412b: sar    rcx,0x3
0x0139412f: cmp    rsi,rcx
0x01394132: jae    0x141393c21
0x01394138: mov    rax,QWORD PTR [rdx+rsi*8]
0x0139413c: mov    rcx,QWORD PTR [rax+0x98]
0x01394143: mov    rax,QWORD PTR [rax+0x90]
0x0139414a: mov    QWORD PTR [rdi+0x10],r14
0x0139414e: mov    rdx,QWORD PTR [rdi+0x18]
0x01394152: sub    rcx,rax
0x01394155: sar    rcx,0x3
0x01394159: mov    rax,rdi
0x0139415c: test   rcx,rcx
0x0139415f: je     0x141393bd2
0x01394165: cmp    rdx,0xf
0x01394169: jbe    0x14139416e
0x0139416b: mov    rax,QWORD PTR [rdi]
0x0139416e: mov    BYTE PTR [rax],0x0
0x01394171: mov    rax,QWORD PTR [rbx+0x5f8]
0x01394178: mov    rcx,QWORD PTR [rax]
0x0139417b: mov    rax,QWORD PTR [rcx+rsi*8]
0x0139417f: cmp    DWORD PTR [rax+0x84],0x1
0x01394186: jg     0x141393ba5
0x0139418c: mov    rax,QWORD PTR [rax+0x90]
0x01394193: jmp    0x141393bac
0x01394198: movsxd rax,edx
0x0139419b: mov    rcx,QWORD PTR [r9+rax*8]
0x0139419f: mov    rcx,QWORD PTR [rcx]
0x013941a2: test   rcx,rcx
0x013941a5: je     0x141394109
0x013941ab: mov    r9d,0xffffffff
0x013941b1: xor    r8d,r8d
0x013941b4: mov    rdx,rdi
0x013941b7: call   0x140c65450
0x013941bc: mov    rcx,rdi
0x013941bf: call   0x14052d650
0x013941c4: jmp    0x1413946c6
0x013941c9: movsxd rcx,DWORD PTR [r8+0xc]
0x013941cd: mov    QWORD PTR [rdi+0x10],r14
0x013941d1: mov    rax,rdi
0x013941d4: cmp    QWORD PTR [rdi+0x18],0xf
0x013941d9: jbe    0x1413941de
0x013941db: mov    rax,QWORD PTR [rdi]
0x013941de: mov    BYTE PTR [rax],0x0
0x013941e1: mov    rax,rcx
0x013941e4: movabs rcx,0x9e3779b97f4a7c15
0x013941ee: add    rcx,rax
0x013941f1: mov    QWORD PTR [rip+0x519da0],rcx        # 0x1418adf98
0x013941f8: mov    rax,rcx
0x013941fb: shr    rax,0x1e
0x013941ff: xor    rax,rcx
0x01394202: movabs rcx,0xbf58476d1ce4e5b9
0x0139420c: imul   rax,rcx
0x01394210: mov    rcx,rax
0x01394213: shr    rcx,0x1b
0x01394217: xor    rcx,rax
0x0139421a: movabs rax,0x94d049bb133111eb
0x01394224: imul   rcx,rax
0x01394228: mov    r11,rcx
0x0139422b: shr    r11,0x3f
0x0139422f: shr    rcx,0x20
0x01394233: xor    r11d,ecx
0x01394236: mov    eax,0xaaaaaaab
0x0139423b: mul    r11d
0x0139423e: shr    edx,1
0x01394240: lea    eax,[rdx+rdx*2]
0x01394243: sub    r11d,eax
0x01394246: data16 nop WORD PTR [rax+rax*1+0x0]
0x01394250: mov    ecx,r11d
0x01394253: test   r11d,r11d
0x01394256: je     0x14139431e
0x0139425c: sub    ecx,0x1
0x0139425f: je     0x141394304
0x01394265: cmp    ecx,0x1
0x01394268: jne    0x141394250
0x0139426a: movzx  r8d,r14w
0x0139426e: mov    rax,QWORD PTR [rbx+0x5f8]
0x01394275: mov    r9,QWORD PTR [rax+0x8]
0x01394279: mov    rcx,QWORD PTR [rax]
0x0139427c: mov    rax,r9
0x0139427f: sub    rax,rcx
0x01394282: sar    rax,0x3
0x01394286: test   rax,rax
0x01394289: je     0x141394250
0x0139428b: mov    rdx,r14
0x0139428e: mov    r10,QWORD PTR [rbx+0x4f0]
0x01394295: test   BYTE PTR [r10+rdx*4],0x2
0x0139429a: jne    0x1413942ce
0x0139429c: test   r8w,r8w
0x013942a0: js     0x1413942ce
0x013942a2: mov    rax,r9
0x013942a5: sub    rax,rcx
0x013942a8: sar    rax,0x3
0x013942ac: cmp    rdx,rax
0x013942af: jae    0x1413942ce
0x013942b1: mov    rax,QWORD PTR [rcx+rdx*8]
0x013942b5: cmp    DWORD PTR [rax+0x50],0x0
0x013942b9: jle    0x1413942c8
0x013942bb: mov    rax,QWORD PTR [rax+0x48]
0x013942bf: test   BYTE PTR [rax],0x1
0x013942c2: je     0x1413942c8
0x013942c4: mov    al,0x1
0x013942c6: jmp    0x1413942ca
0x013942c8: xor    al,al
0x013942ca: test   al,al
0x013942cc: jne    0x1413942ea
0x013942ce: inc    r8w
0x013942d2: movsx  rdx,r8w
0x013942d6: mov    rax,r9
0x013942d9: sub    rax,rcx
0x013942dc: sar    rax,0x3
0x013942e0: cmp    rdx,rax
0x013942e3: jb     0x141394295
0x013942e5: jmp    0x141394250
0x013942ea: mov    r8d,0x7
0x013942f0: lea    rdx,[rip+0x3f0c01]        # 0x141784ef8 ; literal="On head"
0x013942f7: mov    rcx,rdi
0x013942fa: call   0x14006fa10
0x013942ff: jmp    0x1413946c6
0x01394304: mov    r8d,0xd
0x0139430a: lea    rdx,[rip+0x3efcbf]        # 0x141783fd0 ; literal="Left shoulder"
0x01394311: mov    rcx,rdi
0x01394314: call   0x14006fa10
0x01394319: jmp    0x1413946c6
0x0139431e: mov    r8d,0xe
0x01394324: lea    rdx,[rip+0x3efcb5]        # 0x141783fe0 ; literal="Right shoulder"
0x0139432b: mov    rcx,rdi
0x0139432e: call   0x14006fa10
0x01394333: jmp    0x1413946c6
0x01394338: mov    r8d,0x9
0x0139433e: lea    rdx,[rip+0x3efc53]        # 0x141783f98 ; literal="Stuck in "
0x01394345: mov    rcx,rdi
0x01394348: call   0x14006fa10
0x0139434d: movsx  rcx,WORD PTR [rsi+0xa]
0x01394352: test   cx,cx
0x01394355: js     0x14139452d
0x0139435b: mov    rax,QWORD PTR [rbx+0x5f8]
0x01394362: mov    rdx,QWORD PTR [rax]
0x01394365: mov    rsi,rcx
0x01394368: mov    rcx,QWORD PTR [rax+0x8]
0x0139436c: sub    rcx,rdx
0x0139436f: sar    rcx,0x3
0x01394373: cmp    rsi,rcx
0x01394376: jae    0x14139452d
0x0139437c: mov    rcx,QWORD PTR [rdx+rsi*8]
0x01394380: mov    rax,QWORD PTR [rcx+0x98]
0x01394387: sub    rax,QWORD PTR [rcx+0x90]
0x0139438e: sar    rax,0x3
0x01394392: mov    QWORD PTR [rbp-0x40],r14
0x01394396: test   rax,rax
0x01394399: lea    rax,[rbp-0x50]
0x0139439d: je     0x1413943f3
0x0139439f: cmp    QWORD PTR [rbp-0x38],0xf
0x013943a4: cmova  rax,QWORD PTR [rbp-0x50]
0x013943a9: mov    BYTE PTR [rax],0x0
0x013943ac: mov    rax,QWORD PTR [rbx+0x5f8]
0x013943b3: mov    rcx,QWORD PTR [rax]
0x013943b6: mov    rax,QWORD PTR [rcx+rsi*8]
0x013943ba: cmp    DWORD PTR [rax+0x84],0x1
0x013943c1: jg     0x1413943db
0x013943c3: mov    rdx,QWORD PTR [rax+0x90]
0x013943ca: mov    rdx,QWORD PTR [rdx]
0x013943cd: lea    rcx,[rbp-0x50]
0x013943d1: call   0x1400b9d10
0x013943d6: jmp    0x141394606
0x013943db: mov    rdx,QWORD PTR [rax+0xa8]
0x013943e2: mov    rdx,QWORD PTR [rdx]
0x013943e5: lea    rcx,[rbp-0x50]
0x013943e9: call   0x1400b9d10
0x013943ee: jmp    0x141394606
0x013943f3: cmp    QWORD PTR [rbp-0x38],0xf
0x013943f8: cmova  rax,QWORD PTR [rbp-0x50]
0x013943fd: mov    BYTE PTR [rax],0x0
0x01394400: mov    r8d,0x9
0x01394406: lea    rdx,[rip+0x2ecc43]        # 0x141681050 ; literal="body part"
0x0139440d: lea    rcx,[rbp-0x50]
0x01394411: call   0x14006fa10
0x01394416: mov    rax,QWORD PTR [rbx+0x5f8]
0x0139441d: mov    rcx,QWORD PTR [rax]
0x01394420: mov    rax,QWORD PTR [rcx+rsi*8]
0x01394424: cmp    DWORD PTR [rax+0x84],0x1
0x0139442b: jle    0x141394606
0x01394431: mov    rsi,QWORD PTR [rbp-0x40]
0x01394435: mov    r14,QWORD PTR [rbp-0x38]
0x01394439: cmp    rsi,r14
0x0139443c: jae    0x14139445e
0x0139443e: lea    rax,[rsi+0x1]
0x01394442: mov    QWORD PTR [rbp-0x40],rax
0x01394446: lea    rax,[rbp-0x50]
0x0139444a: cmp    r14,0xf
0x0139444e: cmova  rax,QWORD PTR [rbp-0x50]
0x01394453: mov    WORD PTR [rax+rsi*1],0x73
0x01394459: jmp    0x141394606
0x0139445e: movabs rbx,0x7fffffffffffffff
0x01394468: mov    rax,rbx
0x0139446b: sub    rax,rsi
0x0139446e: cmp    rax,0x1
0x01394472: jb     0x1413946ed
0x01394478: lea    r12,[rsi+0x1]
0x0139447c: mov    rcx,r12
0x0139447f: or     rcx,0xf
0x01394483: cmp    rcx,rbx
0x01394486: ja     0x1413944a7
0x01394488: mov    rdx,r14
0x0139448b: shr    rdx,1
0x0139448e: mov    rax,rbx
0x01394491: sub    rax,rdx
0x01394494: cmp    r14,rax
0x01394497: ja     0x1413944a7
0x01394499: lea    rax,[rdx+r14*1]
0x0139449d: mov    rbx,rcx
0x013944a0: cmp    rcx,rax
0x013944a3: cmovb  rbx,rax
0x013944a7: lea    rcx,[rbx+0x1]
0x013944ab: call   0x1400707d0
0x013944b0: mov    r15,rax
0x013944b3: mov    QWORD PTR [rbp-0x40],r12
0x013944b7: mov    QWORD PTR [rbp-0x38],rbx
0x013944bb: mov    r8,rsi
0x013944be: mov    rcx,rax
0x013944c1: cmp    r14,0xf
0x013944c5: jbe    0x141394514
0x013944c7: mov    rbx,QWORD PTR [rbp-0x50]
0x013944cb: mov    rdx,rbx
0x013944ce: call   0x14153aa78
0x013944d3: mov    WORD PTR [rsi+r15*1],0x73
0x013944da: lea    rdx,[r14+0x1]
0x013944de: cmp    rdx,0x1000
0x013944e5: jb     0x141394503
0x013944e7: add    rdx,0x27
0x013944eb: mov    rcx,QWORD PTR [rbx-0x8]
0x013944ef: sub    rbx,rcx
0x013944f2: lea    rax,[rbx-0x8]
0x013944f6: cmp    rax,0x1f
0x013944fa: ja     0x1413945f6
0x01394500: mov    rbx,rcx
0x01394503: mov    rcx,rbx
0x01394506: call   0x141539680
0x0139450b: mov    QWORD PTR [rbp-0x50],r15
0x0139450f: jmp    0x141394606
0x01394514: lea    rdx,[rbp-0x50]
0x01394518: call   0x14153aa78
0x0139451d: mov    WORD PTR [rsi+r15*1],0x73
0x01394524: mov    QWORD PTR [rbp-0x50],r15
0x01394528: jmp    0x141394606
0x0139452d: mov    rsi,QWORD PTR [rbp-0x38]
0x01394531: cmp    rsi,0x9
0x01394535: jb     0x14139456a
0x01394537: lea    rbx,[rbp-0x50]
0x0139453b: cmp    rsi,0xf
0x0139453f: cmova  rbx,QWORD PTR [rbp-0x50]
0x01394544: mov    QWORD PTR [rbp-0x40],0x9
0x0139454c: mov    r8d,0x9
0x01394552: lea    rdx,[rip+0x2ecaf7]        # 0x141681050 ; literal="body part"
0x01394559: mov    rcx,rbx
0x0139455c: call   0x14153ae1a
0x01394561: mov    BYTE PTR [rbx+0x9],0x0
0x01394565: jmp    0x141394606
0x0139456a: mov    rcx,rsi
0x0139456d: shr    rcx,1
0x01394570: movabs rbx,0x7fffffffffffffff
0x0139457a: mov    rax,rbx
0x0139457d: sub    rax,rcx
0x01394580: cmp    rsi,rax
0x01394583: ja     0x141394595
0x01394585: lea    rax,[rsi+rcx*1]
0x01394589: mov    ebx,0xf
0x0139458e: cmp    rax,rbx
0x01394591: cmova  rbx,rax
0x01394595: lea    rcx,[rbx+0x1]
0x01394599: call   0x1400707d0
0x0139459e: mov    r14,rax
0x013945a1: mov    QWORD PTR [rbp-0x40],0x9
0x013945a9: mov    QWORD PTR [rbp-0x38],rbx
0x013945ad: movsd  xmm0,QWORD PTR [rip+0x2eca9b]        # 0x141681050 ; literal="body part"
0x013945b5: movsd  QWORD PTR [rax],xmm0
0x013945b9: movzx  ecx,BYTE PTR [rip+0x2eca98]        # 0x141681058 ; literal="t"
0x013945c0: mov    BYTE PTR [rax+0x8],cl
0x013945c3: mov    BYTE PTR [rax+0x9],0x0
0x013945c7: cmp    rsi,0xf
0x013945cb: jbe    0x141394602
0x013945cd: lea    rdx,[rsi+0x1]
0x013945d1: mov    rcx,QWORD PTR [rbp-0x50]
0x013945d5: mov    rax,rcx
0x013945d8: cmp    rdx,0x1000
0x013945df: jb     0x1413945fd
0x013945e1: add    rdx,0x27
0x013945e5: mov    rcx,QWORD PTR [rcx-0x8]
0x013945e9: sub    rax,rcx
0x013945ec: add    rax,0xfffffffffffffff8
0x013945f0: cmp    rax,0x1f
0x013945f4: jbe    0x1413945fd
0x013945f6: call   QWORD PTR [rip+0x25152c]        # 0x1415e5b28
0x013945fc: int3
0x013945fd: call   0x141539680
0x01394602: mov    QWORD PTR [rbp-0x50],r14
0x01394606: lea    rcx,[rbp-0x50]
0x0139460a: call   0x14052d650
0x0139460f: lea    rdx,[rbp-0x50]
0x01394613: mov    rcx,rdi
0x01394616: call   0x1400b9d10
0x0139461b: jmp    0x1413946c6
0x01394620: mov    r8d,0xa
0x01394626: lea    rdx,[rip+0x3ef993]        # 0x141783fc0 ; literal="Sewn into "
0x0139462d: mov    rcx,rdi
0x01394630: call   0x14006fa10
0x01394635: mov    WORD PTR [rsp+0x20],0x2
0x0139463c: xor    r9d,r9d
0x0139463f: movzx  r8d,WORD PTR [rsi+0xa]
0x01394644: lea    rdx,[rbp-0x50]
0x01394648: mov    rcx,rbx
0x0139464b: call   0x1413345d0
0x01394650: jmp    0x141394606
0x01394652: lea    rdx,[rip+0x3ef95f]        # 0x141783fb8 ; literal="Nocked"
0x01394659: mov    rcx,rdi
0x0139465c: call   0x14006f560
0x01394661: mov    edx,DWORD PTR [rsi+0x10]
0x01394664: lea    rcx,[rip+0x1050de5]        # 0x1423e5450
0x0139466b: call   0x1400726e0
0x01394670: mov    rbx,rax
0x01394673: test   rax,rax
0x01394676: je     0x1413946c6
0x01394678: lea    rdx,[rip+0x258935]        # 0x1415ecfb4 ; literal=" in "
0x0139467f: mov    rcx,rdi
0x01394682: call   0x14006f560
0x01394687: lea    rcx,[rbp-0x30]
0x0139468b: call   0x14006f690
0x01394690: nop
0x01394691: mov    r9d,0xffffffff
0x01394697: xor    r8d,r8d
0x0139469a: lea    rdx,[rbp-0x30]
0x0139469e: mov    rcx,rbx
0x013946a1: call   0x140c65450
0x013946a6: lea    rcx,[rbp-0x30]
0x013946aa: call   0x14052d650
0x013946af: lea    rdx,[rbp-0x30]
0x013946b3: mov    rcx,rdi
0x013946b6: call   0x1400b9d10
0x013946bb: nop
0x013946bc: lea    rcx,[rbp-0x30]
0x013946c0: call   0x14006f850
0x013946c5: nop
0x013946c6: lea    rcx,[rbp-0x50]
0x013946ca: call   0x14006f850
0x013946cf: mov    rcx,QWORD PTR [rbp-0x10]
0x013946d3: xor    rcx,rsp
0x013946d6: call   0x141539660
0x013946db: add    rsp,0x80
0x013946e2: pop    r15
0x013946e4: pop    r14
0x013946e6: pop    r12
0x013946e8: pop    rdi
0x013946e9: pop    rsi
0x013946ea: pop    rbx
0x013946eb: pop    rbp
0x013946ec: ret
0x013946ed: call   0x140065890
0x013946f2: nop
0x013946f3: nop
