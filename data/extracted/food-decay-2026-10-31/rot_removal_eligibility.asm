140c73a80: rex push rbp
140c73a82: push   rbx
140c73a83: push   rsi
140c73a84: push   rdi
140c73a85: push   r12
140c73a87: push   r13
140c73a89: push   r14
140c73a8b: push   r15
140c73a8d: lea    rbp,[rsp-0x1f]
140c73a92: sub    rsp,0xa8
140c73a99: mov    rsi,rcx
140c73a9c: test   DWORD PTR [rcx+0x10],0x40000
140c73aa3: je     0x140c73aac
140c73aa5: xor    al,al
140c73aa7: jmp    0x140c74b41
140c73aac: xor    r13b,r13b
140c73aaf: mov    r12,QWORD PTR [rcx+0x28]
140c73ab3: sub    r12,QWORD PTR [rcx+0x20]
140c73ab7: sar    r12,0x3
140c73abb: mov    r15d,0x1
140c73ac1: sub    r12d,r15d
140c73ac4: mov    QWORD PTR [rbp+0x67],r12
140c73ac8: js     0x140c73bed
140c73ace: movsxd rax,r12d
140c73ad1: lea    rdi,[rax*8+0x0]
140c73ad9: mov    QWORD PTR [rbp+0x77],rdi
140c73add: mov    r15,rdi
140c73ae0: mov    QWORD PTR [rbp+0x6f],rdi
140c73ae4: mov    rax,QWORD PTR [rsi+0x20]
140c73ae8: mov    r14,QWORD PTR [rdi+rax*1]
140c73aec: cmp    DWORD PTR [r14],0x2
140c73af0: jne    0x140c73bc7
140c73af6: mov    r14,QWORD PTR [r14+0x8]
140c73afa: mov    rbx,QWORD PTR [r14+0x88]
140c73b01: sub    rbx,QWORD PTR [r14+0x80]
140c73b08: sar    rbx,0x3
140c73b0c: sub    ebx,0x1
140c73b0f: js     0x140c73b94
140c73b15: movsxd rax,ebx
140c73b18: lea    rdi,[rax*8+0x0]
140c73b20: mov    r15,rdi
140c73b23: mov    r12d,0x1
140c73b29: nop    DWORD PTR [rax+0x0]
140c73b30: mov    rax,QWORD PTR [r14+0x80]
140c73b37: mov    rcx,QWORD PTR [rdi+rax*1]
140c73b3b: cmp    QWORD PTR [rcx],rsi
140c73b3e: jne    0x140c73b7b
140c73b40: movzx  r13d,r13b
140c73b44: cmp    DWORD PTR [rcx+0x8],0x6
140c73b48: cmovne r13d,r12d
140c73b4c: mov    edx,0x18
140c73b51: call   0x141539680
140c73b56: mov    rcx,QWORD PTR [r14+0x80]
140c73b5d: add    rcx,r15
140c73b60: mov    r8,QWORD PTR [r14+0x88]
140c73b67: lea    rdx,[rcx+0x8]
140c73b6b: sub    r8,rdx
140c73b6e: call   0x14153ae1a
140c73b73: add    QWORD PTR [r14+0x88],0xfffffffffffffff8
140c73b7b: sub    r15,0x8
140c73b7f: sub    rdi,0x8
140c73b83: sub    ebx,r12d
140c73b86: jns    0x140c73b30
140c73b88: mov    r12,QWORD PTR [rbp+0x67]
140c73b8c: mov    rdi,QWORD PTR [rbp+0x77]
140c73b90: mov    r15,QWORD PTR [rbp+0x6f]
140c73b94: or     DWORD PTR [r14+0x2c],0x40
140c73b99: mov    rax,QWORD PTR [rsi+0x20]
140c73b9d: mov    edx,0x18
140c73ba2: mov    rcx,QWORD PTR [rdi+rax*1]
140c73ba6: call   0x141539680
140c73bab: mov    rcx,QWORD PTR [rsi+0x20]
140c73baf: add    rcx,r15
140c73bb2: mov    r8,QWORD PTR [rsi+0x28]
140c73bb6: lea    rdx,[rcx+0x8]
140c73bba: sub    r8,rdx
140c73bbd: call   0x14153ae1a
140c73bc2: add    QWORD PTR [rsi+0x28],0xfffffffffffffff8
140c73bc7: dec    r12d
140c73bca: mov    QWORD PTR [rbp+0x67],r12
140c73bce: sub    r15,0x8
140c73bd2: mov    QWORD PTR [rbp+0x6f],r15
140c73bd6: sub    rdi,0x8
140c73bda: mov    QWORD PTR [rbp+0x77],rdi
140c73bde: test   r12d,r12d
140c73be1: jns    0x140c73ae4
140c73be7: mov    r15d,0x1
140c73bed: mov    rdi,QWORD PTR [rsi+0x40]
140c73bf1: sub    rdi,QWORD PTR [rsi+0x38]
140c73bf5: sar    rdi,0x3
140c73bf9: sub    edi,0x1
140c73bfc: js     0x140c73cae
140c73c02: movsxd rax,edi
140c73c05: lea    rbx,[rax*8+0x0]
140c73c0d: mov    r14,rbx
140c73c10: mov    rax,QWORD PTR [rsi+0x38]
140c73c14: mov    rcx,QWORD PTR [rbx+rax*1]
140c73c18: mov    rax,QWORD PTR [rcx]
140c73c1b: call   QWORD PTR [rax+0x10]
140c73c1e: cmp    eax,0x3d
140c73c21: jne    0x140c73c9d
140c73c27: mov    rax,QWORD PTR [rsi+0x38]
140c73c2b: mov    rcx,QWORD PTR [rbx+rax*1]
140c73c2f: mov    rax,QWORD PTR [rcx]
140c73c32: call   QWORD PTR [rax+0x50]
140c73c35: test   rax,rax
140c73c38: je     0x140c73c9d
140c73c3a: mov    rcx,QWORD PTR [rax+0x18]
140c73c3e: mov    rax,QWORD PTR [rax+0x20]
140c73c42: cmp    rcx,rax
140c73c45: jae    0x140c73c6b
140c73c47: mov    r8,QWORD PTR [rcx]
140c73c4a: mov    edx,DWORD PTR [rsi+0x1c]
140c73c4d: cmp    DWORD PTR [r8+0x4],edx
140c73c51: jne    0x140c73c65
140c73c53: mov    DWORD PTR [r8+0x4],0xffffffff
140c73c5b: mov    rdx,QWORD PTR [rcx]
140c73c5e: or     DWORD PTR [rdx+0x8],0x1
140c73c62: mov    r13b,0x1
140c73c65: add    rcx,0x8
140c73c69: jmp    0x140c73c42
140c73c6b: mov    rax,QWORD PTR [rsi+0x38]
140c73c6f: mov    rcx,QWORD PTR [rbx+rax*1]
140c73c73: test   rcx,rcx
140c73c76: je     0x140c73c81
140c73c78: mov    rax,QWORD PTR [rcx]
140c73c7b: mov    edx,r15d
140c73c7e: call   QWORD PTR [rax+0x78]
140c73c81: mov    rcx,QWORD PTR [rsi+0x38]
140c73c85: add    rcx,r14
140c73c88: mov    r8,QWORD PTR [rsi+0x40]
140c73c8c: lea    rdx,[rcx+0x8]
140c73c90: sub    r8,rdx
140c73c93: call   0x14153ae1a
140c73c98: add    QWORD PTR [rsi+0x40],0xfffffffffffffff8
140c73c9d: sub    r14,0x8
140c73ca1: sub    rbx,0x8
140c73ca5: sub    edi,0x1
140c73ca8: jns    0x140c73c10
140c73cae: test   r13b,r13b
140c73cb1: je     0x140c73ced
140c73cb3: mov    rax,QWORD PTR [rsi+0x40]
140c73cb7: sub    rax,QWORD PTR [rsi+0x38]
140c73cbb: sar    rax,0x3
140c73cbf: sub    eax,0x1
140c73cc2: movsxd rbx,eax
140c73cc5: js     0x140c73ce9
140c73cc7: nop    WORD PTR [rax+rax*1+0x0]
140c73cd0: mov    rax,QWORD PTR [rsi+0x38]
140c73cd4: mov    rcx,QWORD PTR [rax+rbx*8]
140c73cd8: mov    rax,QWORD PTR [rcx]
140c73cdb: call   QWORD PTR [rax+0x10]
140c73cde: cmp    eax,0xc
140c73ce1: je     0x140c73ced
140c73ce3: sub    rbx,0x1
140c73ce7: jns    0x140c73cd0
140c73ce9: and    DWORD PTR [rsi+0x10],0xfffffffd
140c73ced: mov    rax,QWORD PTR [rsi]
140c73cf0: mov    rcx,rsi
140c73cf3: call   QWORD PTR [rax+0x290]
140c73cf9: test   al,al
140c73cfb: je     0x140c73d04
140c73cfd: mov    al,0x1
140c73cff: jmp    0x140c74b41
140c73d04: xor    bl,bl
140c73d06: mov    rax,QWORD PTR [rsi]
140c73d09: xor    edx,edx
140c73d0b: mov    rcx,rsi
140c73d0e: call   QWORD PTR [rax+0x280]
140c73d14: mov    rax,QWORD PTR [rsi]
140c73d17: mov    rcx,rsi
140c73d1a: call   QWORD PTR [rax+0x330]
140c73d20: mov    rax,QWORD PTR [rsi]
140c73d23: mov    rcx,rsi
140c73d26: call   QWORD PTR [rax]
140c73d28: movsx  ecx,ax
140c73d2b: add    ecx,0xffffffe9
140c73d2e: cmp    ecx,0x41
140c73d31: ja     0x140c74b23
140c73d37: movsxd rax,ecx
140c73d3a: lea    rdx,[rip+0xffffffffff38c2bf]        # 0x140000000
140c73d41: movzx  eax,BYTE PTR [rdx+rax*1+0xc74b68]
140c73d49: mov    ecx,DWORD PTR [rdx+rax*4+0xc74b58]
140c73d50: add    rcx,rdx
140c73d53: jmp    rcx
140c73d55: mov    eax,DWORD PTR [rsi+0x10]
140c73d58: bt     eax,0x8
140c73d5c: jae    0x140c74b1c
140c73d62: mov    BYTE PTR [rbp+0x67],bl
140c73d65: mov    r12b,0x1
140c73d68: cmp    BYTE PTR [rsi+0xd0],bl
140c73d6e: jne    0x140c748d7
140c73d74: movsx  r9,WORD PTR [rsi+0xc4]
140c73d7c: movsx  rdx,WORD PTR [rsi+0xb8]
140c73d84: xor    r14d,r14d
140c73d87: mov    r8,QWORD PTR [rip+0x1878ce2]        # 0x1424eca70
140c73d8e: mov    rcx,QWORD PTR [rip+0x1878cd3]        # 0x1424eca68
140c73d95: test   dx,dx
140c73d98: js     0x140c748d7
140c73d9e: mov    rax,r8
140c73da1: sub    rax,rcx
140c73da4: sar    rax,0x3
140c73da8: cmp    rdx,rax
140c73dab: jae    0x140c73df1
140c73dad: test   r9w,r9w
140c73db1: js     0x140c73de5
140c73db3: mov    rax,QWORD PTR [rcx+rdx*8]
140c73db7: mov    r8,QWORD PTR [rax+0x178]
140c73dbe: mov    rax,QWORD PTR [rax+0x180]
140c73dc5: sub    rax,r8
140c73dc8: sar    rax,0x3
140c73dcc: cmp    r9,rax
140c73dcf: jae    0x140c73de5
140c73dd1: mov    r9,QWORD PTR [r8+r9*8]
140c73dd5: add    r9,0x6c0
140c73ddc: mov    QWORD PTR [rbp+0x6f],r9
140c73de0: mov    r15,rdx
140c73de3: jmp    0x140c73e14
140c73de5: mov    r9,r14
140c73de8: mov    QWORD PTR [rbp+0x6f],r14
140c73dec: mov    r15,rdx
140c73def: jmp    0x140c73e14
140c73df1: test   dx,dx
140c73df4: js     0x140c748d7
140c73dfa: mov    r15,rdx
140c73dfd: mov    r9,r14
140c73e00: mov    QWORD PTR [rbp+0x6f],r14
140c73e04: sub    r8,rcx
140c73e07: sar    r8,0x3
140c73e0b: cmp    rdx,r8
140c73e0e: jae    0x140c748d7
140c73e14: mov    r15,QWORD PTR [rcx+r15*8]
140c73e18: test   r9,r9
140c73e1b: je     0x140c748d7
140c73e21: test   r15,r15
140c73e24: je     0x140c748d7
140c73e2a: mov    rax,QWORD PTR [r9+0x8]
140c73e2e: sub    rax,QWORD PTR [r9]
140c73e31: sar    rax,0x3
140c73e35: sub    eax,0x1
140c73e38: movsxd rcx,eax
140c73e3b: mov    QWORD PTR [rbp+0x77],rcx
140c73e3f: js     0x140c748d7
140c73e45: mov    r14,QWORD PTR [rbp+0x6f]
140c73e49: nop    DWORD PTR [rax+0x0]
140c73e50: mov    rax,QWORD PTR [rsi+0x120]
140c73e57: test   BYTE PTR [rax+rcx*4],0x2
140c73e5b: jne    0x140c73f6d
140c73e61: xor    r13b,r13b
140c73e64: mov    rax,QWORD PTR [r14]
140c73e67: mov    rdx,QWORD PTR [rax+rcx*8]
140c73e6b: mov    QWORD PTR [rbp+0x6f],rdx
140c73e6f: mov    rax,QWORD PTR [rdx+0x60]
140c73e73: sub    rax,QWORD PTR [rdx+0x58]
140c73e77: sar    rax,0x3
140c73e7b: sub    eax,0x1
140c73e7e: movsxd rdi,eax
140c73e81: js     0x140c73f5b
140c73e87: nop    WORD PTR [rax+rax*1+0x0]
140c73e90: mov    rax,QWORD PTR [rdx+0x58]
140c73e94: mov    rbx,QWORD PTR [rax+rdi*8]
140c73e98: movsxd rcx,DWORD PTR [rbx+0x68]
140c73e9c: mov    rax,QWORD PTR [rsi+0x168]
140c73ea3: test   BYTE PTR [rax+rcx*4],0x1
140c73ea7: jne    0x140c73f36
140c73ead: movsxd rax,DWORD PTR [rbx+0x20]
140c73eb1: test   eax,eax
140c73eb3: js     0x140c73f36
140c73eb9: mov    r8,QWORD PTR [r15+0x208]
140c73ec0: mov    rcx,rax
140c73ec3: mov    rax,QWORD PTR [r15+0x210]
140c73eca: sub    rax,r8
140c73ecd: sar    rax,0x3
140c73ed1: cmp    rcx,rax
140c73ed4: jae    0x140c73f36
140c73ed6: mov    r8,QWORD PTR [r8+rcx*8]
140c73eda: movzx  edx,WORD PTR [r8+0xd0]
140c73ee2: mov    r8d,DWORD PTR [r8+0xd4]
140c73ee9: lea    rcx,[rip+0x175d600]        # 0x1423d14f0
140c73ef0: call   0x1414add70
140c73ef5: test   rax,rax
140c73ef8: je     0x140c73f32
140c73efa: cmp    DWORD PTR [rax+0x298],0x4
140c73f01: jle    0x140c73f2c
140c73f03: mov    rax,QWORD PTR [rax+0x290]
140c73f0a: test   BYTE PTR [rax+0x4],0x1
140c73f0e: je     0x140c73f2c
140c73f10: movsxd rcx,DWORD PTR [rbx+0x68]
140c73f14: mov    rax,QWORD PTR [rsi+0x168]
140c73f1b: or     DWORD PTR [rax+rcx*4],0x1
140c73f1f: mov    r11b,0x1
140c73f22: mov    BYTE PTR [rbp+0x67],r11b
140c73f26: mov    rdx,QWORD PTR [rbp+0x6f]
140c73f2a: jmp    0x140c73f3b
140c73f2c: mov    r13b,0x1
140c73f2f: xor    r12b,r12b
140c73f32: mov    rdx,QWORD PTR [rbp+0x6f]
140c73f36: movzx  r11d,BYTE PTR [rbp+0x67]
140c73f3b: sub    rdi,0x1
140c73f3f: jns    0x140c73e90
140c73f45: mov    rcx,QWORD PTR [rbp+0x77]
140c73f49: test   r13b,r13b
140c73f4c: jne    0x140c73f72
140c73f4e: mov    rax,QWORD PTR [rsi+0x120]
140c73f55: or     DWORD PTR [rax+rcx*4],0x2
140c73f59: jmp    0x140c73f72
140c73f5b: movzx  r11d,BYTE PTR [rbp+0x67]
140c73f60: mov    rax,QWORD PTR [rsi+0x120]
140c73f67: or     DWORD PTR [rax+rcx*4],0x2
140c73f6b: jmp    0x140c73f72
140c73f6d: movzx  r11d,BYTE PTR [rbp+0x67]
140c73f72: movzx  edi,r12b
140c73f76: sub    rcx,0x1
140c73f7a: mov    QWORD PTR [rbp+0x77],rcx
140c73f7e: jns    0x140c73e50
140c73f84: test   r11b,r11b
140c73f87: mov    r14d,0x0
140c73f8d: je     0x140c748d7
140c73f93: mov    rax,QWORD PTR [rsi]
140c73f96: lea    rcx,[rbp-0x59]
140c73f9a: mov    QWORD PTR [rsp+0x20],rcx
140c73f9f: lea    r9,[rbp+0xf]
140c73fa3: lea    r8,[rbp+0x7f]
140c73fa7: lea    rdx,[rbp-0x9]
140c73fab: mov    rcx,rsi
140c73fae: call   QWORD PTR [rax+0x1f8]
140c73fb4: mov    rbx,QWORD PTR [rbp-0x59]
140c73fb8: test   rbx,rbx
140c73fbb: je     0x140c748d7
140c73fc1: test   BYTE PTR [rbx+0x110],0x2
140c73fc8: je     0x140c746a0
140c73fce: cmp    QWORD PTR [rbx+0xd80],r14
140c73fd5: jne    0x140c74013
140c73fd7: cmp    DWORD PTR [rbx+0x1280],0x7
140c73fde: jle    0x140c73ffb
140c73fe0: mov    rax,QWORD PTR [rbx+0x1278]
140c73fe7: test   BYTE PTR [rax+0x7],0x4
140c73feb: je     0x140c73ffb
140c73fed: test   DWORD PTR [rbx+0x82c],0x2000000
140c73ff7: jne    0x140c74013
140c73ff9: jmp    0x140c74023
140c73ffb: test   DWORD PTR [rbx+0x82c],0x2000000
140c74005: jne    0x140c74013
140c74007: test   DWORD PTR [rbx+0x828],0x2000000
140c74011: jne    0x140c74023
140c74013: mov    rcx,rbx
140c74016: call   0x14138ed20
140c7401b: test   al,al
140c7401d: je     0x140c746a0
140c74023: xor    r15b,r15b
140c74026: mov    r13d,r14d
140c74029: mov    rcx,QWORD PTR [rip+0x177acf0]        # 0x1423eed20
140c74030: movzx  r12d,dil
140c74034: mov    rax,QWORD PTR [rip+0x177aced]        # 0x1423eed28
140c7403b: sub    rax,rcx
140c7403e: sar    rax,0x3
140c74042: test   rax,rax
140c74045: je     0x140c7410c
140c7404b: mov    r15,rcx
140c7404e: mov    rdi,rcx
140c74051: mov    rax,QWORD PTR [r15]
140c74054: mov    rcx,QWORD PTR [rax+0xa8]
140c7405b: sub    rcx,QWORD PTR [rax+0xa0]
140c74062: sar    rcx,0x3
140c74066: test   rcx,rcx
140c74069: je     0x140c740e8
140c7406f: mov    rcx,QWORD PTR [rax+0xa8]
140c74076: mov    rax,QWORD PTR [rax+0xa0]
140c7407d: nop    DWORD PTR [rax]
140c74080: cmp    rax,rcx
140c74083: jae    0x140c740e8
140c74085: mov    r8,QWORD PTR [rax]
140c74088: mov    edx,DWORD PTR [rbx+0x130]
140c7408e: cmp    DWORD PTR [r8+0x1a0],edx
140c74095: je     0x140c7409d
140c74097: add    rax,0x8
140c7409b: jmp    0x140c74080
140c7409d: mov    r8d,r14d
140c740a0: mov    rax,QWORD PTR [r15]
140c740a3: mov    r11,QWORD PTR [rax+0x130]
140c740aa: mov    r10,QWORD PTR [rax+0x128]
140c740b1: mov    rax,r11
140c740b4: sub    rax,r10
140c740b7: sar    rax,0x3
140c740bb: test   rax,rax
140c740be: je     0x140c740e8
140c740c0: mov    rdx,r10
140c740c3: mov    rax,QWORD PTR [rdx]
140c740c6: cmp    QWORD PTR [rax],rsi
140c740c9: je     0x140c74541
140c740cf: inc    r8d
140c740d2: add    rdx,0x8
140c740d6: mov    rcx,r11
140c740d9: sub    rcx,r10
140c740dc: sar    rcx,0x3
140c740e0: movsxd rax,r8d
140c740e3: cmp    rax,rcx
140c740e6: jb     0x140c740c3
140c740e8: inc    r13d
140c740eb: add    r15,0x8
140c740ef: mov    rcx,QWORD PTR [rip+0x177ac32]        # 0x1423eed28
140c740f6: sub    rcx,rdi
140c740f9: sar    rcx,0x3
140c740fd: movsxd rax,r13d
140c74100: cmp    rax,rcx
140c74103: jb     0x140c74051
140c74109: xor    r15b,r15b
140c7410c: cmp    DWORD PTR [rip+0xc28185],r14d        # 0x14189c298
140c74113: jne    0x140c746a0
140c74119: mov    edi,DWORD PTR [rbx+0x7f8]
140c7411f: mov    r11,QWORD PTR [rip+0x1873bf2]        # 0x1424e7d18
140c74126: mov    r10,QWORD PTR [rip+0x1873bf3]        # 0x1424e7d20
140c7412d: sub    r10,r11
140c74130: sar    r10,0x3
140c74134: test   r10d,r10d
140c74137: je     0x140c74197
140c74139: mov    r9d,r14d
140c7413c: cmp    r10d,0x40
140c74140: jle    0x140c74165
140c74142: mov    r8d,r10d
140c74145: shr    r8d,1
140c74148: lea    edx,[r8+r9*1]
140c7414c: movsxd rax,edx
140c7414f: mov    rcx,QWORD PTR [r11+rax*8]
140c74153: cmp    edi,DWORD PTR [rcx]
140c74155: cmovl  edx,r9d
140c74159: mov    r9d,edx
140c7415c: sub    r10d,r8d
140c7415f: cmp    r10d,0x40
140c74163: jg     0x140c74142
140c74165: lea    eax,[r9+r10*1]
140c74169: cmp    eax,0xffffffff
140c7416c: je     0x140c74197
140c7416e: cmp    r9d,eax
140c74171: jge    0x140c74197
140c74173: movsxd rcx,r9d
140c74176: movsxd rdx,eax
140c74179: nop    DWORD PTR [rax+0x0]
140c74180: mov    rax,QWORD PTR [r11+rcx*8]
140c74184: cmp    edi,DWORD PTR [rax]
140c74186: je     0x140c74549
140c7418c: inc    r9d
140c7418f: inc    rcx
140c74192: cmp    rcx,rdx
140c74195: jl     0x140c74180
140c74197: mov    rax,r14
140c7419a: mov    rcx,r14
140c7419d: test   r15b,r15b
140c741a0: jne    0x140c746a0
140c741a6: test   rcx,rcx
140c741a9: je     0x140c746a0
140c741af: test   BYTE PTR [rax+0xec],0x2
140c741b6: je     0x140c746a0
140c741bc: xorps  xmm0,xmm0
140c741bf: movdqu XMMWORD PTR [rbp-0x21],xmm0
140c741c4: mov    QWORD PTR [rbp-0x11],r14
140c741c8: mov    r11d,DWORD PTR [rbx+0x3bc]
140c741cf: mov    r15,QWORD PTR [rip+0x1770ee2]        # 0x1423e50b8
140c741d6: mov    rdx,QWORD PTR [rip+0x1770ed3]        # 0x1423e50b0
140c741dd: cmp    r11d,0xffffffff
140c741e1: je     0x140c7422c
140c741e3: mov    r9,r15
140c741e6: sub    r9,rdx
140c741e9: sar    r9,0x3
140c741ed: test   r9d,r9d
140c741f0: je     0x140c7422c
140c741f2: sub    r9d,0x1
140c741f6: mov    r8d,r14d
140c741f9: js     0x140c7422c
140c741fb: nop    DWORD PTR [rax+rax*1+0x0]
140c74200: lea    ecx,[r9+r8*1]
140c74204: sar    ecx,1
140c74206: movsxd rax,ecx
140c74209: mov    rdi,QWORD PTR [rdx+rax*8]
140c7420d: cmp    DWORD PTR [rdi+0x130],r11d
140c74214: je     0x140c7422f
140c74216: lea    eax,[rcx-0x1]
140c74219: cmovle eax,r9d
140c7421d: mov    r9d,eax
140c74220: lea    eax,[rcx+0x1]
140c74223: cmovle r8d,eax
140c74227: cmp    r8d,r9d
140c7422a: jle    0x140c74200
140c7422c: mov    rdi,r14
140c7422f: test   rdi,rdi
140c74232: je     0x140c74284
140c74234: mov    QWORD PTR [rbp-0x4d],0x33
140c7423c: mov    QWORD PTR [rbp-0x45],0x32
140c74244: xorps  xmm0,xmm0
140c74247: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c7424c: mov    QWORD PTR [rbp-0x29],r14
140c74250: mov    DWORD PTR [rbp-0x51],0xb3
140c74257: lea    rdx,[rbp-0x51]
140c7425b: mov    rcx,rdi
140c7425e: call   0x1413eff80
140c74263: lea    rdx,[rbp-0x21]
140c74267: mov    ecx,DWORD PTR [rdi+0x130]
140c7426d: call   0x1400b9e70
140c74272: mov    rbx,QWORD PTR [rbp-0x59]
140c74276: mov    r15,QWORD PTR [rip+0x1770e3b]        # 0x1423e50b8
140c7427d: mov    rdx,QWORD PTR [rip+0x1770e2c]        # 0x1423e50b0
140c74284: mov    r11d,DWORD PTR [rbx+0x3c0]
140c7428b: cmp    r11d,0xffffffff
140c7428f: je     0x140c742dc
140c74291: mov    r9,r15
140c74294: sub    r9,rdx
140c74297: sar    r9,0x3
140c7429b: test   r9d,r9d
140c7429e: je     0x140c742dc
140c742a0: sub    r9d,0x1
140c742a4: mov    r8d,r14d
140c742a7: js     0x140c742dc
140c742a9: nop    DWORD PTR [rax+0x0]
140c742b0: lea    ecx,[r9+r8*1]
140c742b4: sar    ecx,1
140c742b6: movsxd rax,ecx
140c742b9: mov    rdi,QWORD PTR [rdx+rax*8]
140c742bd: cmp    DWORD PTR [rdi+0x130],r11d
140c742c4: je     0x140c742df
140c742c6: lea    eax,[rcx-0x1]
140c742c9: cmovle eax,r9d
140c742cd: mov    r9d,eax
140c742d0: lea    eax,[rcx+0x1]
140c742d3: cmovle r8d,eax
140c742d7: cmp    r8d,r9d
140c742da: jle    0x140c742b0
140c742dc: mov    rdi,r14
140c742df: test   rdi,rdi
140c742e2: je     0x140c74334
140c742e4: mov    QWORD PTR [rbp-0x4d],0x1
140c742ec: mov    QWORD PTR [rbp-0x45],0x64
140c742f4: xorps  xmm0,xmm0
140c742f7: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c742fc: mov    QWORD PTR [rbp-0x29],r14
140c74300: mov    DWORD PTR [rbp-0x51],0xb3
140c74307: lea    rdx,[rbp-0x51]
140c7430b: mov    rcx,rdi
140c7430e: call   0x1413eff80
140c74313: lea    rdx,[rbp-0x21]
140c74317: mov    ecx,DWORD PTR [rdi+0x130]
140c7431d: call   0x1400b9e70
140c74322: mov    rbx,QWORD PTR [rbp-0x59]
140c74326: mov    r15,QWORD PTR [rip+0x1770d8b]        # 0x1423e50b8
140c7432d: mov    rdx,QWORD PTR [rip+0x1770d7c]        # 0x1423e50b0
140c74334: mov    r11d,DWORD PTR [rbx+0x3c4]
140c7433b: cmp    r11d,0xffffffff
140c7433f: je     0x140c7438c
140c74341: mov    r9,r15
140c74344: sub    r9,rdx
140c74347: sar    r9,0x3
140c7434b: test   r9d,r9d
140c7434e: je     0x140c7438c
140c74350: sub    r9d,0x1
140c74354: mov    r8d,r14d
140c74357: js     0x140c7438c
140c74359: nop    DWORD PTR [rax+0x0]
140c74360: lea    ecx,[r9+r8*1]
140c74364: sar    ecx,1
140c74366: movsxd rax,ecx
140c74369: mov    rdi,QWORD PTR [rdx+rax*8]
140c7436d: cmp    DWORD PTR [rdi+0x130],r11d
140c74374: je     0x140c7438f
140c74376: lea    eax,[rcx-0x1]
140c74379: cmovle eax,r9d
140c7437d: mov    r9d,eax
140c74380: lea    eax,[rcx+0x1]
140c74383: cmovle r8d,eax
140c74387: cmp    r8d,r9d
140c7438a: jle    0x140c74360
140c7438c: mov    rdi,r14
140c7438f: test   rdi,rdi
140c74392: je     0x140c743e4
140c74394: mov    QWORD PTR [rbp-0x4d],0xc
140c7439c: mov    QWORD PTR [rbp-0x45],0x64
140c743a4: xorps  xmm0,xmm0
140c743a7: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c743ac: mov    QWORD PTR [rbp-0x29],r14
140c743b0: mov    DWORD PTR [rbp-0x51],0xb3
140c743b7: lea    rdx,[rbp-0x51]
140c743bb: mov    rcx,rdi
140c743be: call   0x1413eff80
140c743c3: lea    rdx,[rbp-0x21]
140c743c7: mov    ecx,DWORD PTR [rdi+0x130]
140c743cd: call   0x1400b9e70
140c743d2: mov    rbx,QWORD PTR [rbp-0x59]
140c743d6: mov    r15,QWORD PTR [rip+0x1770cdb]        # 0x1423e50b8
140c743dd: mov    rdx,QWORD PTR [rip+0x1770ccc]        # 0x1423e50b0
140c743e4: mov    r11d,DWORD PTR [rbx+0x3c8]
140c743eb: cmp    r11d,0xffffffff
140c743ef: je     0x140c7443c
140c743f1: sub    r15,rdx
140c743f4: sar    r15,0x3
140c743f8: test   r15d,r15d
140c743fb: je     0x140c7443c
140c743fd: lea    r9d,[r15-0x1]
140c74401: mov    r8d,r14d
140c74404: test   r9d,r9d
140c74407: js     0x140c7443c
140c74409: nop    DWORD PTR [rax+0x0]
140c74410: lea    ecx,[r9+r8*1]
140c74414: sar    ecx,1
140c74416: movsxd rax,ecx
140c74419: mov    rdi,QWORD PTR [rdx+rax*8]
140c7441d: cmp    DWORD PTR [rdi+0x130],r11d
140c74424: je     0x140c7443f
140c74426: lea    eax,[rcx-0x1]
140c74429: cmovle eax,r9d
140c7442d: mov    r9d,eax
140c74430: lea    eax,[rcx+0x1]
140c74433: cmovle r8d,eax
140c74437: cmp    r8d,r9d
140c7443a: jle    0x140c74410
140c7443c: mov    rdi,r14
140c7443f: test   rdi,rdi
140c74442: je     0x140c74486
140c74444: mov    QWORD PTR [rbp-0x4d],0xc
140c7444c: mov    QWORD PTR [rbp-0x45],0x64
140c74454: xorps  xmm0,xmm0
140c74457: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c7445c: mov    QWORD PTR [rbp-0x29],r14
140c74460: mov    DWORD PTR [rbp-0x51],0xb3
140c74467: lea    rdx,[rbp-0x51]
140c7446b: mov    rcx,rdi
140c7446e: call   0x1413eff80
140c74473: lea    rdx,[rbp-0x21]
140c74477: mov    ecx,DWORD PTR [rdi+0x130]
140c7447d: call   0x1400b9e70
140c74482: mov    rbx,QWORD PTR [rbp-0x59]
140c74486: mov    r13d,r14d
140c74489: mov    rax,QWORD PTR [rip+0x1770c40]        # 0x1423e50d0
140c74490: sub    rax,QWORD PTR [rip+0x1770c31]        # 0x1423e50c8
140c74497: sar    rax,0x3
140c7449b: test   rax,rax
140c7449e: je     0x140c74693
140c744a4: mov    r15,r14
140c744a7: nop    WORD PTR [rax+rax*1+0x0]
140c744b0: mov    rax,QWORD PTR [rip+0x1770c11]        # 0x1423e50c8
140c744b7: mov    rdi,QWORD PTR [r15+rax*1]
140c744bb: test   BYTE PTR [rdi+0x110],0x2
140c744c2: jne    0x140c7466e
140c744c8: cmp    rdi,rbx
140c744cb: je     0x140c7466e
140c744d1: mov    r8d,DWORD PTR [rdi+0x130]
140c744d8: lea    rdx,[rbp-0x21]
140c744dc: lea    rcx,[rbp-0x1]
140c744e0: call   0x1400babe0
140c744e5: mov    DWORD PTR [rbp+0x6f],0xffffffff
140c744ec: mov    DWORD PTR [rbp+0x73],r14d
140c744f0: mov    rax,QWORD PTR [rbp+0x6f]
140c744f4: cmp    BYTE PTR [rbp+0x7],0x0
140c744f8: cmovne rax,QWORD PTR [rbp-0x1]
140c744fd: cmp    eax,0xffffffff
140c74500: jne    0x140c7466e
140c74506: mov    eax,DWORD PTR [rdi+0x3c4]
140c7450c: mov    edx,DWORD PTR [rbx+0x130]
140c74512: cmp    eax,edx
140c74514: jne    0x140c74558
140c74516: mov    QWORD PTR [rbp-0x4d],0x2
140c7451e: mov    QWORD PTR [rbp-0x45],0x64
140c74526: xorps  xmm0,xmm0
140c74529: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c7452e: mov    QWORD PTR [rbp-0x29],r14
140c74532: mov    DWORD PTR [rbp-0x51],0xb3
140c74539: mov    rcx,rdi
140c7453c: jmp    0x140c74661
140c74541: mov    r15b,0x1
140c74544: jmp    0x140c7410c
140c74549: movsxd rax,r9d
140c7454c: mov    rcx,QWORD PTR [r11+rax*8]
140c74550: mov    rax,rcx
140c74553: jmp    0x140c7419d
140c74558: mov    ecx,DWORD PTR [rdi+0x3c8]
140c7455e: cmp    ecx,edx
140c74560: jne    0x140c7458d
140c74562: mov    QWORD PTR [rbp-0x4d],0x3
140c7456a: mov    QWORD PTR [rbp-0x45],0x64
140c74572: xorps  xmm0,xmm0
140c74575: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c7457a: mov    QWORD PTR [rbp-0x29],r14
140c7457e: mov    DWORD PTR [rbp-0x51],0xb3
140c74585: mov    rcx,rdi
140c74588: jmp    0x140c74661
140c7458d: cmp    eax,0xffffffff
140c74590: je     0x140c7459e
140c74592: cmp    eax,DWORD PTR [rbx+0x3c4]
140c74598: jne    0x140c7459e
140c7459a: mov    al,0x1
140c7459c: jmp    0x140c745b1
140c7459e: cmp    ecx,0xffffffff
140c745a1: je     0x140c745af
140c745a3: cmp    ecx,DWORD PTR [rbx+0x3c8]
140c745a9: jne    0x140c745af
140c745ab: mov    al,0x1
140c745ad: jmp    0x140c745b1
140c745af: xor    al,al
140c745b1: test   al,al
140c745b3: mov    rax,QWORD PTR [rip+0x1770b0e]        # 0x1423e50c8
140c745ba: je     0x140c745ce
140c745bc: mov    QWORD PTR [rbp-0x4d],0xb
140c745c4: mov    QWORD PTR [rbp-0x45],0x64
140c745cc: jmp    0x140c7464a
140c745ce: mov    rdx,QWORD PTR [r15+rax*1]
140c745d2: mov    ebx,DWORD PTR [rbx+0xc30]
140c745d8: lea    r8,[rdx+0x1274]
140c745df: mov    edx,DWORD PTR [rdx+0xc30]
140c745e5: lea    rcx,[rip+0x18856cc]        # 0x1424f9cb8
140c745ec: call   0x140b530b0
140c745f1: test   rax,rax
140c745f4: je     0x140c7466a
140c745f6: mov    rdx,QWORD PTR [rax+0x130]
140c745fd: test   rdx,rdx
140c74600: je     0x140c74616
140c74602: cmp    QWORD PTR [rdx+0x60],0x0
140c74607: je     0x140c74616
140c74609: mov    rdx,QWORD PTR [rdx+0x60]
140c7460d: mov    ecx,ebx
140c7460f: call   0x1400b9dc0
140c74614: jmp    0x140c74619
140c74616: mov    rax,r14
140c74619: test   rax,rax
140c7461c: je     0x140c7466a
140c7461e: lea    rdx,[rbp+0x67]
140c74622: mov    rcx,rax
140c74625: call   0x1402bf110
140c7462a: cmp    eax,0xd
140c7462d: je     0x140c74634
140c7462f: cmp    eax,0x12
140c74632: jne    0x140c7466a
140c74634: mov    DWORD PTR [rbp-0x49],r14d
140c74638: mov    QWORD PTR [rbp-0x45],0x32
140c74640: mov    DWORD PTR [rbp-0x4d],eax
140c74643: mov    rax,QWORD PTR [rip+0x1770a7e]        # 0x1423e50c8
140c7464a: xorps  xmm0,xmm0
140c7464d: movdqu XMMWORD PTR [rbp-0x39],xmm0
140c74652: mov    QWORD PTR [rbp-0x29],r14
140c74656: mov    DWORD PTR [rbp-0x51],0xb3
140c7465d: mov    rcx,QWORD PTR [r15+rax*1]
140c74661: lea    rdx,[rbp-0x51]
140c74665: call   0x1413eff80
140c7466a: mov    rbx,QWORD PTR [rbp-0x59]
140c7466e: inc    r13d
140c74671: add    r15,0x8
140c74675: mov    rcx,QWORD PTR [rip+0x1770a54]        # 0x1423e50d0
140c7467c: sub    rcx,QWORD PTR [rip+0x1770a45]        # 0x1423e50c8
140c74683: sar    rcx,0x3
140c74687: movsxd rax,r13d
140c7468a: cmp    rax,rcx
140c7468d: jb     0x140c744b0
140c74693: lea    rcx,[rbp-0x21]
140c74697: call   0x14006f750
140c7469c: mov    rbx,QWORD PTR [rbp-0x59]
140c746a0: test   rbx,rbx
140c746a3: je     0x140c748d7
140c746a9: mov    rax,QWORD PTR [rsi]
140c746ac: mov    rcx,rsi
140c746af: call   QWORD PTR [rax]
140c746b1: cmp    ax,0x17
140c746b5: jne    0x140c748d7
140c746bb: mov    ecx,0xffff8ad0
140c746c0: mov    WORD PTR [rbp+0x67],cx
140c746c4: mov    eax,DWORD PTR [rsi+0x10]
140c746c7: test   al,0x10
140c746c9: jne    0x140c74795
140c746cf: test   al,0x8
140c746d1: je     0x140c7477d
140c746d7: mov    rbx,QWORD PTR [rsi+0x38]
140c746db: mov    rdi,QWORD PTR [rsi+0x40]
140c746df: nop
140c746e0: cmp    rbx,rdi
140c746e3: jae    0x140c74746
140c746e5: mov    rcx,QWORD PTR [rbx]
140c746e8: mov    rax,QWORD PTR [rcx]
140c746eb: call   QWORD PTR [rax+0x10]
140c746ee: cmp    eax,0xb
140c746f1: je     0x140c7471c
140c746f3: cmp    eax,0x12
140c746f6: jne    0x140c7472a
140c746f8: mov    rcx,QWORD PTR [rbx]
140c746fb: mov    rax,QWORD PTR [rcx]
140c746fe: call   QWORD PTR [rax+0x20]
140c74701: test   rax,rax
140c74704: je     0x140c7472a
140c74706: lea    r9,[rbp+0x6f]
140c7470a: lea    r8,[rbp+0x77]
140c7470e: lea    rdx,[rbp+0x67]
140c74712: mov    rcx,rax
140c74715: call   0x141367430
140c7471a: jmp    0x140c74795
140c7471c: mov    rcx,QWORD PTR [rbx]
140c7471f: mov    rax,QWORD PTR [rcx]
140c74722: call   QWORD PTR [rax+0x18]
140c74725: test   rax,rax
140c74728: jne    0x140c74730
140c7472a: add    rbx,0x8
140c7472e: jmp    0x140c746e0
140c74730: lea    r9,[rbp+0x6f]
140c74734: lea    r8,[rbp+0x77]
140c74738: lea    rdx,[rbp+0x67]
140c7473c: mov    rcx,rax
140c7473f: call   0x140c8baa0
140c74744: jmp    0x140c74795
140c74746: mov    rax,QWORD PTR [rsi+0x20]
140c7474a: mov    rcx,QWORD PTR [rsi+0x28]
140c7474e: xchg   ax,ax
140c74750: cmp    rax,rcx
140c74753: jae    0x140c74795
140c74755: mov    rdx,QWORD PTR [rax]
140c74758: cmp    DWORD PTR [rdx],0x7
140c7475b: je     0x140c74763
140c7475d: add    rax,0x8
140c74761: jmp    0x140c74750
140c74763: mov    rcx,QWORD PTR [rdx+0x8]
140c74767: movzx  eax,WORD PTR [rcx+0x4]
140c7476b: mov    WORD PTR [rbp+0x67],ax
140c7476f: movzx  eax,WORD PTR [rcx+0x6]
140c74773: mov    WORD PTR [rbp+0x77],ax
140c74777: movzx  eax,WORD PTR [rcx+0x8]
140c7477b: jmp    0x140c74791
140c7477d: movzx  eax,WORD PTR [rsi+0x8]
140c74781: mov    WORD PTR [rbp+0x67],ax
140c74785: movzx  eax,WORD PTR [rsi+0xa]
140c74789: mov    WORD PTR [rbp+0x77],ax
140c7478d: movzx  eax,WORD PTR [rsi+0xc]
140c74791: mov    WORD PTR [rbp+0x6f],ax
140c74795: mov    r14,QWORD PTR [rbp-0x59]
140c74799: mov    r13,QWORD PTR [r14+0x410]
140c747a0: sub    r13,QWORD PTR [r14+0x408]
140c747a7: sar    r13,0x3
140c747ab: sub    r13d,0x1
140c747af: js     0x140c748d7
140c747b5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
140c747c0: mov    rdx,QWORD PTR [r14+0x408]
140c747c7: movsxd rax,r13d
140c747ca: mov    rcx,QWORD PTR [rdx+rax*8]
140c747ce: mov    rdi,QWORD PTR [rcx]
140c747d1: mov    rbx,QWORD PTR [r14+0x410]
140c747d8: sub    rbx,rdx
140c747db: sar    rbx,0x3
140c747df: sub    ebx,0x1
140c747e2: js     0x140c7482c
140c747e4: movsxd rax,ebx
140c747e7: lea    r15,[rax*8+0x0]
140c747ef: nop
140c747f0: mov    rax,QWORD PTR [r14+0x408]
140c747f7: mov    r8,QWORD PTR [r15+rax*1]
140c747fb: cmp    QWORD PTR [r8],rdi
140c747fe: jne    0x140c74823
140c74800: movzx  eax,WORD PTR [r8+0x8]
140c74805: cmp    ax,0x6
140c74809: je     0x140c74811
140c7480b: cmp    ax,0x9
140c7480f: jne    0x140c74819
140c74811: mov    rcx,r14
140c74814: call   0x141389580
140c74819: mov    edx,ebx
140c7481b: mov    rcx,r14
140c7481e: call   0x141324660
140c74823: sub    r15,0x8
140c74827: sub    ebx,0x1
140c7482a: jns    0x140c747f0
140c7482c: mov    BYTE PTR [rsp+0x20],0x1
140c74831: xor    r9d,r9d
140c74834: xor    r8d,r8d
140c74837: mov    rdx,rdi
140c7483a: mov    rcx,r14
140c7483d: call   0x141329520
140c74842: mov    rax,QWORD PTR [rdi]
140c74845: mov    rcx,rdi
140c74848: call   QWORD PTR [rax+0x330]
140c7484e: test   DWORD PTR [rsi+0x10],0x400
140c74855: je     0x140c7485e
140c74857: or     DWORD PTR [rdi+0x10],0x400
140c7485e: test   DWORD PTR [rsi+0x10],0x800
140c74865: je     0x140c7486e
140c74867: or     DWORD PTR [rdi+0x10],0x800
140c7486e: test   BYTE PTR [rsi+0x10],0x10
140c74872: je     0x140c74878
140c74874: or     DWORD PTR [rdi+0x10],0x10
140c74878: test   DWORD PTR [rsi+0x10],0x80000
140c7487f: je     0x140c74888
140c74881: or     DWORD PTR [rdi+0x10],0x80000
140c74888: mov    rax,QWORD PTR [rdi]
140c7488b: mov    dl,0x1
140c7488d: mov    rcx,rdi
140c74890: call   QWORD PTR [rax+0x328]
140c74896: mov    rax,QWORD PTR [rdi]
140c74899: movsx  r9d,WORD PTR [rbp+0x6f]
140c7489e: movsx  r8d,WORD PTR [rbp+0x77]
140c748a3: movsx  edx,WORD PTR [rbp+0x67]
140c748a7: mov    rcx,rdi
140c748aa: call   QWORD PTR [rax+0x320]
140c748b0: mov    r14,QWORD PTR [rbp-0x59]
140c748b4: mov    rax,QWORD PTR [r14+0x410]
140c748bb: sub    rax,QWORD PTR [r14+0x408]
140c748c2: sar    rax,0x3
140c748c6: cmp    r13d,eax
140c748c9: cmovg  r13d,eax
140c748cd: sub    r13d,0x1
140c748d1: jns    0x140c747c0
140c748d7: test   r12b,r12b
140c748da: setne  bl
140c748dd: jmp    0x140c74b23
140c748e2: mov    eax,DWORD PTR [rsi+0x10]
140c748e5: bt     eax,0x8
140c748e9: jae    0x140c74b1c
140c748ef: mov    ecx,0xffff8ad0
140c748f4: mov    WORD PTR [rbp+0x67],cx
140c748f8: test   al,0x10
140c748fa: jne    0x140c749c5
140c74900: test   al,0x8
140c74902: je     0x140c749ad
140c74908: mov    rbx,QWORD PTR [rsi+0x38]
140c7490c: mov    rdi,QWORD PTR [rsi+0x40]
140c74910: cmp    rbx,rdi
140c74913: jae    0x140c74976
140c74915: mov    rcx,QWORD PTR [rbx]
140c74918: mov    rax,QWORD PTR [rcx]
140c7491b: call   QWORD PTR [rax+0x10]
140c7491e: cmp    eax,0xb
140c74921: je     0x140c7494c
140c74923: cmp    eax,0x12
140c74926: jne    0x140c7495a
140c74928: mov    rcx,QWORD PTR [rbx]
140c7492b: mov    rax,QWORD PTR [rcx]
140c7492e: call   QWORD PTR [rax+0x20]
140c74931: test   rax,rax
140c74934: je     0x140c7495a
140c74936: lea    r9,[rbp+0x6f]
140c7493a: lea    r8,[rbp+0x77]
140c7493e: lea    rdx,[rbp+0x67]
140c74942: mov    rcx,rax
140c74945: call   0x141367430
140c7494a: jmp    0x140c749c5
140c7494c: mov    rcx,QWORD PTR [rbx]
140c7494f: mov    rax,QWORD PTR [rcx]
140c74952: call   QWORD PTR [rax+0x18]
140c74955: test   rax,rax
140c74958: jne    0x140c74960
140c7495a: add    rbx,0x8
140c7495e: jmp    0x140c74910
140c74960: lea    r9,[rbp+0x6f]
140c74964: lea    r8,[rbp+0x77]
140c74968: lea    rdx,[rbp+0x67]
140c7496c: mov    rcx,rax
140c7496f: call   0x140c8baa0
140c74974: jmp    0x140c749c5
140c74976: mov    rax,QWORD PTR [rsi+0x20]
140c7497a: mov    rcx,QWORD PTR [rsi+0x28]
140c7497e: xchg   ax,ax
140c74980: cmp    rax,rcx
140c74983: jae    0x140c749c5
140c74985: mov    rdx,QWORD PTR [rax]
140c74988: cmp    DWORD PTR [rdx],0x7
140c7498b: je     0x140c74993
140c7498d: add    rax,0x8
140c74991: jmp    0x140c74980
140c74993: mov    rcx,QWORD PTR [rdx+0x8]
140c74997: movzx  eax,WORD PTR [rcx+0x4]
140c7499b: mov    WORD PTR [rbp+0x67],ax
140c7499f: movzx  eax,WORD PTR [rcx+0x6]
140c749a3: mov    WORD PTR [rbp+0x77],ax
140c749a7: movzx  eax,WORD PTR [rcx+0x8]
140c749ab: jmp    0x140c749c1
140c749ad: movzx  eax,WORD PTR [rsi+0x8]
140c749b1: mov    WORD PTR [rbp+0x67],ax
140c749b5: movzx  eax,WORD PTR [rsi+0xa]
140c749b9: mov    WORD PTR [rbp+0x77],ax
140c749bd: movzx  eax,WORD PTR [rsi+0xc]
140c749c1: mov    WORD PTR [rbp+0x6f],ax
140c749c5: mov    rax,QWORD PTR [rsi]
140c749c8: mov    rcx,rsi
140c749cb: call   QWORD PTR [rax+0x478]
140c749d1: mov    r12d,eax
140c749d4: test   eax,eax
140c749d6: jle    0x140c74b18
140c749dc: xor    r14d,r14d
140c749df: nop
140c749e0: xorps  xmm0,xmm0
140c749e3: movdqu XMMWORD PTR [rbp-0x21],xmm0
140c749e8: mov    QWORD PTR [rbp-0x11],r14
140c749ec: mov    rax,QWORD PTR [rsi]
140c749ef: mov    rcx,rsi
140c749f2: call   QWORD PTR [rax+0x50]
140c749f5: movzx  ebx,ax
140c749f8: mov    rdx,QWORD PTR [rsi]
140c749fb: mov    rcx,rsi
140c749fe: call   QWORD PTR [rdx+0x48]
140c74a01: lea    r9,[rbp-0x21]
140c74a05: movzx  r8d,bx
140c74a09: movzx  edx,ax
140c74a0c: lea    rcx,[rip+0x1878035]        # 0x1424eca48
140c74a13: call   0x140709940
140c74a18: mov    rax,QWORD PTR [rbp-0x19]
140c74a1c: mov    rdi,QWORD PTR [rbp-0x21]
140c74a20: sub    rax,rdi
140c74a23: sar    rax,0x3
140c74a27: sub    eax,0x1
140c74a2a: movsxd r15,eax
140c74a2d: js     0x140c74af6
140c74a33: mov    rdi,QWORD PTR [rdi+r15*8]
140c74a37: test   BYTE PTR [rsi+0x10],0x80
140c74a3b: je     0x140c74a44
140c74a3d: or     DWORD PTR [rdi+0x10],0x80
140c74a44: test   DWORD PTR [rsi+0x10],0x400
140c74a4b: je     0x140c74a54
140c74a4d: or     DWORD PTR [rdi+0x10],0x400
140c74a54: test   DWORD PTR [rsi+0x10],0x800
140c74a5b: je     0x140c74a64
140c74a5d: or     DWORD PTR [rdi+0x10],0x800
140c74a64: test   BYTE PTR [rsi+0x10],0x10
140c74a68: je     0x140c74a6e
140c74a6a: or     DWORD PTR [rdi+0x10],0x10
140c74a6e: test   DWORD PTR [rsi+0x10],0x4000
140c74a75: je     0x140c74a7e
140c74a77: or     DWORD PTR [rdi+0x10],0x4000
140c74a7e: test   DWORD PTR [rsi+0x10],0x80000
140c74a85: je     0x140c74a8e
140c74a87: or     DWORD PTR [rdi+0x10],0x80000
140c74a8e: mov    rax,QWORD PTR [rdi]
140c74a91: mov    rbx,QWORD PTR [rax+0x4b0]
140c74a98: mov    rax,QWORD PTR [rsi]
140c74a9b: mov    rcx,rsi
140c74a9e: call   QWORD PTR [rax+0x178]
140c74aa4: mov    r9b,0x1
140c74aa7: movzx  r8d,r9b
140c74aab: movzx  edx,ax
140c74aae: mov    rcx,rdi
140c74ab1: call   rbx
140c74ab3: mov    rax,QWORD PTR [rdi]
140c74ab6: mov    rcx,rdi
140c74ab9: call   QWORD PTR [rax+0x188]
140c74abf: mov    rax,QWORD PTR [rdi]
140c74ac2: mov    dl,0x1
140c74ac4: mov    rcx,rdi
140c74ac7: call   QWORD PTR [rax+0x328]
140c74acd: mov    rax,QWORD PTR [rdi]
140c74ad0: movsx  r9d,WORD PTR [rbp+0x6f]
140c74ad5: movsx  r8d,WORD PTR [rbp+0x77]
140c74ada: movsx  edx,WORD PTR [rbp+0x67]
140c74ade: mov    rcx,rdi
140c74ae1: call   QWORD PTR [rax+0x320]
140c74ae7: sub    r15,0x1
140c74aeb: js     0x140c74af6
140c74aed: mov    rdi,QWORD PTR [rbp-0x21]
140c74af1: jmp    0x140c74a33
140c74af6: dec    r12d
140c74af9: lea    rcx,[rbp-0x21]
140c74afd: call   0x140066b70
140c74b02: test   r12d,r12d
140c74b05: jg     0x140c749e0
140c74b0b: mov    bl,0x1
140c74b0d: jmp    0x140c74b23
140c74b0f: mov    eax,DWORD PTR [rsi+0x10]
140c74b12: bt     eax,0x8
140c74b16: jae    0x140c74b1c
140c74b18: mov    bl,0x1
140c74b1a: jmp    0x140c74b23
140c74b1c: bts    eax,0x8
140c74b20: mov    DWORD PTR [rsi+0x10],eax
140c74b23: mov    rdx,QWORD PTR [rsi]
140c74b26: mov    rcx,rsi
140c74b29: call   QWORD PTR [rdx+0x188]
140c74b2f: mov    r8,QWORD PTR [rsi]
140c74b32: mov    dl,0x1
140c74b34: mov    rcx,rsi
140c74b37: call   QWORD PTR [r8+0x328]
140c74b3e: movzx  eax,bl
140c74b41: add    rsp,0xa8
140c74b48: pop    r15
140c74b4a: pop    r14
140c74b4c: pop    r13
140c74b4e: pop    r12
140c74b50: pop    rdi
140c74b51: pop    rsi
140c74b52: pop    rbx
140c74b53: pop    rbp
140c74b54: ret
140c74b55: nop    DWORD PTR [rax]
140c74b58: push   rbp
140c74b59: cmp    eax,0x4b0f00c7
140c74b5e: mov    DWORD PTR [rax],0xc748e2
140c74b64: and    ecx,DWORD PTR [rbx-0x39]
140c74b67: add    BYTE PTR [rax],al
140c74b69: add    eax,DWORD PTR [rbx]
140c74b6b: add    eax,DWORD PTR [rbx]
140c74b6d: add    eax,DWORD PTR [rbx]
140c74b6f: add    eax,DWORD PTR [rbx]
140c74b71: add    eax,DWORD PTR [rbx]
140c74b73: add    eax,DWORD PTR [rbx]
140c74b75: add    eax,DWORD PTR [rbx]
140c74b77: add    eax,DWORD PTR [rbx]
140c74b79: add    eax,DWORD PTR [rbx]
140c74b7b: add    eax,DWORD PTR [rbx]
140c74b7d: add    eax,DWORD PTR [rbx]
140c74b7f: add    BYTE PTR [rcx],al
140c74b81: add    DWORD PTR [rcx],eax
140c74b83: add    al,BYTE PTR [rbx]
140c74b85: add    eax,DWORD PTR [rbx]
140c74b87: add    DWORD PTR [rbx],eax
140c74b89: add    eax,DWORD PTR [rbx]
140c74b8b: add    eax,DWORD PTR [rbx]
140c74b8d: add    eax,DWORD PTR [rbx]
140c74b8f: add    eax,DWORD PTR [rbx]
140c74b91: add    eax,DWORD PTR [rbx]
140c74b93: add    eax,DWORD PTR [rbx]
140c74b95: add    eax,DWORD PTR [rbx]
140c74b97: add    eax,DWORD PTR [rcx]
140c74b99: add    DWORD PTR [rbx],eax
140c74b9b: add    eax,DWORD PTR [rbx]
140c74b9d: add    eax,DWORD PTR [rbx]
140c74b9f: add    eax,DWORD PTR [rbx]
140c74ba1: add    eax,DWORD PTR [rbx]
140c74ba3: add    eax,DWORD PTR [rbx]
140c74ba5: add    eax,DWORD PTR [rbx]
140c74ba7: add    eax,DWORD PTR [rbx]
140c74ba9: .byte 0x1