# classic PE:6a70b91c:0270a000; instrument-raw-writer; RVA 0xeb9810..0xec7260
0x00eb9810: mov    QWORD PTR [rsp+0x8],rbx
0x00eb9815: push   rbp
0x00eb9816: push   rsi
0x00eb9817: push   rdi
0x00eb9818: push   r12
0x00eb981a: push   r13
0x00eb981c: push   r14
0x00eb981e: push   r15
0x00eb9820: lea    rbp,[rsp-0x11b0]
0x00eb9828: mov    eax,0x12b0
0x00eb982d: call   0x141535d30
0x00eb9832: sub    rsp,rax
0x00eb9835: mov    rax,QWORD PTR [rip+0x9dc804]        # 0x141896040
0x00eb983c: xor    rax,rsp
0x00eb983f: mov    QWORD PTR [rbp+0x11a0],rax
0x00eb9846: mov    rax,r9
0x00eb9849: mov    QWORD PTR [rsp+0x78],rax
0x00eb984e: mov    r14,rdx
0x00eb9851: mov    QWORD PTR [rsp+0x50],rdx
0x00eb9856: mov    ebx,DWORD PTR [rbp+0x1210]
0x00eb985c: mov    DWORD PTR [rbp-0x64],ebx
0x00eb985f: cmp    DWORD PTR [rdx+0xd8],0x0
0x00eb9866: jg     0x140eb9887
0x00eb9868: cmp    DWORD PTR [rdx+0xdc],0x0
0x00eb986f: jg     0x140eb9887
0x00eb9871: cmp    DWORD PTR [rdx+0xe0],0x0
0x00eb9878: jg     0x140eb9887
0x00eb987a: cmp    DWORD PTR [rdx+0xe4],0x0
0x00eb9881: jle    0x140ec7235
0x00eb9887: test   rax,rax
0x00eb988a: je     0x140ec7235
0x00eb9890: lea    rcx,[rbp+0x78]
0x00eb9894: call   0x140065a90
0x00eb9899: nop
0x00eb989a: lea    rcx,[rbp-0x48]
0x00eb989e: call   0x140065a90
0x00eb98a3: nop
0x00eb98a4: lea    rcx,[rbp+0x100]
0x00eb98ab: call   0x140065a90
0x00eb98b0: nop
0x00eb98b1: lea    rcx,[rsp+0x28]
0x00eb98b6: call   0x140065a90
0x00eb98bb: nop
0x00eb98bc: lea    rdx,[r14+0x20]
0x00eb98c0: lea    rcx,[rbp+0x760]
0x00eb98c7: call   0x14006f560
0x00eb98cc: nop
0x00eb98cd: lea    rdx,[rip+0x846124]        # 0x1416ff9f8 ; literal="item_layer"
0x00eb98d4: lea    rcx,[rsp+0x28]
0x00eb98d9: call   0x1400bb870
0x00eb98de: lea    rdx,[rip+0x846123]        # 0x1416ffa08 ; literal="[OBJECT:ITEM]"
0x00eb98e5: lea    rcx,[rsp+0x28]
0x00eb98ea: call   0x1400bb870
0x00eb98ef: xor    r15d,r15d
0x00eb98f2: mov    DWORD PTR [rsp+0x70],r15d
0x00eb98f7: mov    r12d,0x1
0x00eb98fd: cmp    DWORD PTR [r14+0xd8],r15d
0x00eb9904: jle    0x140ebba16
0x00eb990a: mov    r14d,r12d
0x00eb990d: mov    DWORD PTR [rsp+0x5c],r12d
0x00eb9912: lea    rcx,[rbp+0x3c0]
0x00eb9919: call   0x14006f620
0x00eb991e: nop
0x00eb991f: cmp    ebx,0xffffffff
0x00eb9922: je     0x140eb9aa6
0x00eb9928: movsxd rdx,ebx
0x00eb992b: lea    rcx,[rip+0x162dd5e]        # 0x1424e7690
0x00eb9932: call   0x14006f1b0
0x00eb9937: mov    rsi,QWORD PTR [rax]
0x00eb993a: lea    rcx,[rsi+0x50]
0x00eb993e: call   0x14006ede0
0x00eb9943: mov    rdi,rax
0x00eb9946: test   eax,eax
0x00eb9948: jle    0x140eb9aa6
0x00eb994e: mov    ebx,r15d
0x00eb9951: mov    ecx,edi
0x00eb9953: call   0x140071ec0
0x00eb9958: movsxd rdx,eax
0x00eb995b: lea    rcx,[rsi+0x50]
0x00eb995f: call   0x14006f1b0
0x00eb9964: mov    rdx,QWORD PTR [rax]
0x00eb9967: lea    rcx,[rbp+0x3c0]
0x00eb996e: call   0x14006f530
0x00eb9973: lea    rdx,[rbp+0x70]
0x00eb9977: lea    rcx,[rip+0x162d36a]        # 0x1424e6ce8
0x00eb997e: call   0x14006f1d0
0x00eb9983: lea    rdx,[rbp+0x90]
0x00eb998a: lea    rcx,[rip+0x162d357]        # 0x1424e6ce8
0x00eb9991: call   0x14006f1c0
0x00eb9996: lea    r8,[rbp+0x90]
0x00eb999d: lea    rdx,[rbp-0x78]
0x00eb99a1: lea    rcx,[rbp+0x70]
0x00eb99a5: call   0x14006edb0
0x00eb99aa: xor    edx,edx
0x00eb99ac: movzx  ecx,BYTE PTR [rax]
0x00eb99af: call   0x140065740
0x00eb99b4: test   al,al
0x00eb99b6: je     0x140eb9a0f
0x00eb99b8: nop    DWORD PTR [rax+rax*1+0x0]
0x00eb99c0: lea    rcx,[rbp+0x70]
0x00eb99c4: call   0x14006eda0
0x00eb99c9: mov    rcx,QWORD PTR [rax]
0x00eb99cc: add    rcx,0x68
0x00eb99d0: lea    rdx,[rbp+0x3c0]
0x00eb99d7: call   0x14006fdd0
0x00eb99dc: test   al,al
0x00eb99de: jne    0x140eb9a99
0x00eb99e4: lea    rcx,[rbp+0x70]
0x00eb99e8: call   0x14006ed90
0x00eb99ed: lea    r8,[rbp+0x90]
0x00eb99f4: lea    rdx,[rbp-0x78]
0x00eb99f8: lea    rcx,[rbp+0x70]
0x00eb99fc: call   0x14006edb0
0x00eb9a01: xor    edx,edx
0x00eb9a03: movzx  ecx,BYTE PTR [rax]
0x00eb9a06: call   0x140065740
0x00eb9a0b: test   al,al
0x00eb9a0d: jne    0x140eb99c0
0x00eb9a0f: lea    rdx,[rbp+0x30]
0x00eb9a13: lea    rcx,[rbp+0x78]
0x00eb9a17: call   0x14006f1d0
0x00eb9a1c: lea    rdx,[rbp+0x98]
0x00eb9a23: lea    rcx,[rbp+0x78]
0x00eb9a27: call   0x14006f1c0
0x00eb9a2c: lea    r8,[rbp+0x98]
0x00eb9a33: lea    rdx,[rbp-0x77]
0x00eb9a37: lea    rcx,[rbp+0x30]
0x00eb9a3b: call   0x14006edb0
0x00eb9a40: xor    edx,edx
0x00eb9a42: movzx  ecx,BYTE PTR [rax]
0x00eb9a45: call   0x140065740
0x00eb9a4a: test   al,al
0x00eb9a4c: je     0x140eb9ab2
0x00eb9a4e: xchg   ax,ax
0x00eb9a50: lea    rcx,[rbp+0x30]
0x00eb9a54: call   0x14006eda0
0x00eb9a59: lea    rdx,[rbp+0x3c0]
0x00eb9a60: mov    rcx,QWORD PTR [rax]
0x00eb9a63: call   0x14006fdd0
0x00eb9a68: test   al,al
0x00eb9a6a: jne    0x140eb9a99
0x00eb9a6c: lea    rcx,[rbp+0x30]
0x00eb9a70: call   0x14006ed90
0x00eb9a75: lea    r8,[rbp+0x98]
0x00eb9a7c: lea    rdx,[rbp-0x77]
0x00eb9a80: lea    rcx,[rbp+0x30]
0x00eb9a84: call   0x14006edb0
0x00eb9a89: xor    edx,edx
0x00eb9a8b: movzx  ecx,BYTE PTR [rax]
0x00eb9a8e: call   0x140065740
0x00eb9a93: test   al,al
0x00eb9a95: jne    0x140eb9a50
0x00eb9a97: jmp    0x140eb9ab2
0x00eb9a99: inc    ebx
0x00eb9a9b: cmp    ebx,0x19
0x00eb9a9e: jl     0x140eb9951
0x00eb9aa4: jmp    0x140eb9ab2
0x00eb9aa6: lea    rcx,[rbp+0x3c0]
0x00eb9aad: call   0x14092e410
0x00eb9ab2: lea    rdx,[rbp+0x3c0]
0x00eb9ab9: lea    rcx,[rbp+0x78]
0x00eb9abd: call   0x1400bb700
0x00eb9ac2: lea    rdx,[rbp+0x760]
0x00eb9ac9: lea    rcx,[rbp+0x4e0]
0x00eb9ad0: call   0x14006f560
0x00eb9ad5: nop
0x00eb9ad6: lea    rdx,[rip+0x873ad7]        # 0x14172d5b4 ; literal="INK"
0x00eb9add: lea    rcx,[rbp+0x4e0]
0x00eb9ae4: call   0x14006f4f0
0x00eb9ae9: lea    rdx,[rbp+0x4e0]
0x00eb9af0: mov    ecx,r14d
0x00eb9af3: call   0x140529cf0
0x00eb9af8: lea    rdx,[rbp+0x4e0]
0x00eb9aff: lea    rcx,[rbp+0x100]
0x00eb9b06: call   0x1400bb700
0x00eb9b0b: mov    ecx,0x50
0x00eb9b10: call   0x140071ec0
0x00eb9b15: inc    eax
0x00eb9b17: imul   esi,eax,0x3e8
0x00eb9b1d: lea    rcx,[rbp+0x260]
0x00eb9b24: call   0x14006f620
0x00eb9b29: nop
0x00eb9b2a: mov    ebx,0x3e8
0x00eb9b2f: mov    edi,ebx
0x00eb9b31: mov    r15d,ebx
0x00eb9b34: mov    DWORD PTR [rsp+0x64],ebx
0x00eb9b38: mov    BYTE PTR [rsp+0x43],0x0
0x00eb9b3d: xor    al,al
0x00eb9b3f: mov    BYTE PTR [rsp+0x42],al
0x00eb9b43: mov    BYTE PTR [rsp+0x20],al
0x00eb9b47: mov    BYTE PTR [rsp+0x41],al
0x00eb9b4b: mov    BYTE PTR [rsp+0x40],al
0x00eb9b4f: mov    DWORD PTR [rsp+0x60],r12d
0x00eb9b54: mov    ecx,0x5
0x00eb9b59: call   0x140071ec0
0x00eb9b5e: test   eax,eax
0x00eb9b60: je     0x140eb9c8f
0x00eb9b66: sub    eax,0x1
0x00eb9b69: je     0x140eb9c88
0x00eb9b6f: sub    eax,0x1
0x00eb9b72: je     0x140eb9c3c
0x00eb9b78: sub    eax,0x1
0x00eb9b7b: je     0x140eb9bd5
0x00eb9b7d: cmp    eax,0x1
0x00eb9b80: jne    0x140eb9ce9
0x00eb9b86: mov    BYTE PTR [rsp+0x40],al
0x00eb9b8a: lea    ecx,[rsi+rsi*4]
0x00eb9b8d: shl    ecx,0x2
0x00eb9b90: mov    eax,0x51eb851f
0x00eb9b95: imul   ecx
0x00eb9b97: mov    ebx,edx
0x00eb9b99: sar    ebx,0x5
0x00eb9b9c: mov    eax,ebx
0x00eb9b9e: shr    eax,0x1f
0x00eb9ba1: add    ebx,eax
0x00eb9ba3: lea    ecx,[rsi+rsi*4]
0x00eb9ba6: shl    ecx,0x3
0x00eb9ba9: mov    eax,0x51eb851f
0x00eb9bae: imul   ecx
0x00eb9bb0: mov    edi,edx
0x00eb9bb2: sar    edi,0x5
0x00eb9bb5: mov    eax,edi
0x00eb9bb7: shr    eax,0x1f
0x00eb9bba: add    edi,eax
0x00eb9bbc: mov    eax,0x10624dd3
0x00eb9bc1: imul   esi
0x00eb9bc3: sar    edx,0x6
0x00eb9bc6: mov    eax,edx
0x00eb9bc8: shr    eax,0x1f
0x00eb9bcb: add    eax,0xc
0x00eb9bce: add    eax,edx
0x00eb9bd0: jmp    0x140eb9ce2
0x00eb9bd5: mov    BYTE PTR [rsp+0x41],0x1
0x00eb9bda: imul   ecx,esi,0xf
0x00eb9bdd: mov    eax,0x51eb851f
0x00eb9be2: imul   ecx
0x00eb9be4: mov    ebx,edx
0x00eb9be6: sar    ebx,0x5
0x00eb9be9: mov    eax,ebx
0x00eb9beb: shr    eax,0x1f
0x00eb9bee: add    ebx,eax
0x00eb9bf0: lea    ecx,[rsi+rsi*4]
0x00eb9bf3: shl    ecx,0x4
0x00eb9bf6: mov    eax,0x51eb851f
0x00eb9bfb: imul   ecx
0x00eb9bfd: mov    edi,edx
0x00eb9bff: sar    edi,0x5
0x00eb9c02: mov    eax,edi
0x00eb9c04: shr    eax,0x1f
0x00eb9c07: add    edi,eax
0x00eb9c09: lea    ecx,[rsi+rsi*4]
0x00eb9c0c: mov    eax,0x51eb851f
0x00eb9c11: imul   ecx
0x00eb9c13: mov    r15d,edx
0x00eb9c16: sar    r15d,0x5
0x00eb9c1a: mov    eax,r15d
0x00eb9c1d: shr    eax,0x1f
0x00eb9c20: add    r15d,eax
0x00eb9c23: mov    eax,0x10624dd3
0x00eb9c28: imul   esi
0x00eb9c2a: sar    edx,0x6
0x00eb9c2d: mov    eax,edx
0x00eb9c2f: shr    eax,0x1f
0x00eb9c32: add    eax,0xc
0x00eb9c35: add    eax,edx
0x00eb9c37: jmp    0x140eb9ce5
0x00eb9c3c: mov    BYTE PTR [rsp+0x20],0x1
0x00eb9c41: mov    ecx,0x1e
0x00eb9c46: call   0x140071ec0
0x00eb9c4b: inc    eax
0x00eb9c4d: imul   esi,eax,0x3e8
0x00eb9c53: lea    ecx,[rsi+rsi*4]
0x00eb9c56: shl    ecx,0x2
0x00eb9c59: mov    eax,0x51eb851f
0x00eb9c5e: imul   ecx
0x00eb9c60: mov    ebx,edx
0x00eb9c62: sar    ebx,0x5
0x00eb9c65: mov    eax,ebx
0x00eb9c67: shr    eax,0x1f
0x00eb9c6a: add    ebx,eax
0x00eb9c6c: imul   ecx,esi,0x3c
0x00eb9c6f: mov    eax,0x51eb851f
0x00eb9c74: imul   ecx
0x00eb9c76: mov    edi,edx
0x00eb9c78: sar    edi,0x5
0x00eb9c7b: mov    eax,edi
0x00eb9c7d: shr    eax,0x1f
0x00eb9c80: add    edi,eax
0x00eb9c82: mov    DWORD PTR [rsp+0x64],ebx
0x00eb9c86: jmp    0x140eb9ce9
0x00eb9c88: mov    BYTE PTR [rsp+0x42],0x1
0x00eb9c8d: jmp    0x140eb9c94
0x00eb9c8f: mov    BYTE PTR [rsp+0x43],0x1
0x00eb9c94: lea    ecx,[rsi+rsi*4]
0x00eb9c97: add    ecx,ecx
0x00eb9c99: mov    eax,0x51eb851f
0x00eb9c9e: imul   ecx
0x00eb9ca0: mov    ebx,edx
0x00eb9ca2: sar    ebx,0x5
0x00eb9ca5: mov    eax,ebx
0x00eb9ca7: shr    eax,0x1f
0x00eb9caa: add    ebx,eax
0x00eb9cac: lea    ecx,[rsi+rsi*4]
0x00eb9caf: mov    eax,0x51eb851f
0x00eb9cb4: shl    ecx,0x3
0x00eb9cb7: imul   ecx
0x00eb9cb9: mov    edi,edx
0x00eb9cbb: sar    edi,0x5
0x00eb9cbe: mov    eax,edi
0x00eb9cc0: shr    eax,0x1f
0x00eb9cc3: add    edi,eax
0x00eb9cc5: mov    eax,0x10624dd3
0x00eb9cca: imul   esi
0x00eb9ccc: sar    edx,0x6
0x00eb9ccf: mov    eax,edx
0x00eb9cd1: shr    eax,0x1f
0x00eb9cd4: add    eax,0x2
0x00eb9cd7: add    eax,edx
0x00eb9cd9: lea    eax,[rax+rax*2]
0x00eb9cdc: add    eax,eax
0x00eb9cde: mov    DWORD PTR [rsp+0x64],ebx
0x00eb9ce2: mov    r15d,edi
0x00eb9ce5: mov    DWORD PTR [rsp+0x60],eax
0x00eb9ce9: mov    r14d,0x6
0x00eb9cef: cmp    ebx,0x9c40
0x00eb9cf5: mov    ecx,0x3
0x00eb9cfa: cmovl  r14d,ecx
0x00eb9cfe: mov    r12d,0x6
0x00eb9d04: cmp    edi,0x9c40
0x00eb9d0a: cmovl  r12d,ecx
0x00eb9d0e: mov    r13d,0x6
0x00eb9d14: cmp    r15d,0x9c40
0x00eb9d1b: cmovl  r13d,ecx
0x00eb9d1f: mov    eax,0x6
0x00eb9d24: cmp    DWORD PTR [rsp+0x64],0x9c40
0x00eb9d2c: cmovl  eax,ecx
0x00eb9d2f: mov    DWORD PTR [rbp-0x50],eax
0x00eb9d32: lea    rdx,[rbp+0x4e0]
0x00eb9d39: lea    rcx,[rbp+0x720]
0x00eb9d40: call   0x14006f560
0x00eb9d45: nop
0x00eb9d46: lea    rdx,[rip+0x87385b]        # 0x14172d5a8 ; literal="_KEYBOARD"
0x00eb9d4d: lea    rcx,[rbp+0x720]
0x00eb9d54: call   0x14006f4f0
0x00eb9d59: lea    rdx,[rbp+0x720]
0x00eb9d60: lea    rcx,[rbp-0x48]
0x00eb9d64: call   0x1400bb700
0x00eb9d69: mov    DWORD PTR [rbp-0x68],0x0
0x00eb9d70: lea    rdx,[rip+0x873859]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00eb9d77: lea    rcx,[rbp+0x260]
0x00eb9d7e: call   0x14006f510
0x00eb9d83: lea    rdx,[rbp+0x720]
0x00eb9d8a: lea    rcx,[rbp+0x260]
0x00eb9d91: call   0x1400b9ca0
0x00eb9d96: lea    rdx,[rip+0x73e8c7]        # 0x1415f8664 ; literal="]"
0x00eb9d9d: lea    rcx,[rbp+0x260]
0x00eb9da4: call   0x14006f4f0
0x00eb9da9: lea    rdx,[rbp+0x260]
0x00eb9db0: lea    rcx,[rsp+0x28]
0x00eb9db5: call   0x1400bb700
0x00eb9dba: lea    rdx,[rip+0x7ec217]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00eb9dc1: lea    rcx,[rsp+0x28]
0x00eb9dc6: call   0x1400bb870
0x00eb9dcb: mov    rax,QWORD PTR [rsp+0x50]
0x00eb9dd0: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00eb9dd4: je     0x140eb9e34
0x00eb9dd6: lea    rdx,[rip+0x872c83]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00eb9ddd: lea    rcx,[rbp+0xf60]
0x00eb9de4: call   0x1400680e0
0x00eb9de9: nop
0x00eb9dea: lea    rdx,[rbp+0xf60]
0x00eb9df1: mov    rax,QWORD PTR [rsp+0x50]
0x00eb9df6: mov    ecx,DWORD PTR [rax+0x40]
0x00eb9df9: call   0x140529cf0
0x00eb9dfe: lea    rdx,[rip+0x73e85f]        # 0x1415f8664 ; literal="]"
0x00eb9e05: lea    rcx,[rbp+0xf60]
0x00eb9e0c: call   0x14006f4f0
0x00eb9e11: lea    rdx,[rbp+0xf60]
0x00eb9e18: lea    rcx,[rsp+0x28]
0x00eb9e1d: call   0x1400bb700
0x00eb9e22: nop
0x00eb9e23: lea    rcx,[rbp+0xf60]
0x00eb9e2a: call   0x140067dc0
0x00eb9e2f: mov    rax,QWORD PTR [rsp+0x50]
0x00eb9e34: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00eb9e38: je     0x140eb9e93
0x00eb9e3a: lea    rdx,[rip+0x872c0f]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00eb9e41: lea    rcx,[rbp+0xf80]
0x00eb9e48: call   0x1400680e0
0x00eb9e4d: nop
0x00eb9e4e: lea    rdx,[rbp+0xf80]
0x00eb9e55: mov    rax,QWORD PTR [rsp+0x50]
0x00eb9e5a: mov    ecx,DWORD PTR [rax+0x44]
0x00eb9e5d: call   0x140529cf0
0x00eb9e62: lea    rdx,[rip+0x73e7fb]        # 0x1415f8664 ; literal="]"
0x00eb9e69: lea    rcx,[rbp+0xf80]
0x00eb9e70: call   0x14006f4f0
0x00eb9e75: lea    rdx,[rbp+0xf80]
0x00eb9e7c: lea    rcx,[rsp+0x28]
0x00eb9e81: call   0x1400bb700
0x00eb9e86: nop
0x00eb9e87: lea    rcx,[rbp+0xf80]
0x00eb9e8e: call   0x140067dc0
0x00eb9e93: lea    rdx,[rip+0x87371e]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00eb9e9a: lea    rcx,[rsp+0x28]
0x00eb9e9f: call   0x1400bb870
0x00eb9ea4: lea    rdx,[rip+0x8742ad]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00eb9eab: lea    rcx,[rsp+0x28]
0x00eb9eb0: call   0x1400bb870
0x00eb9eb5: lea    rdx,[rip+0x874294]        # 0x14172e150 ; literal="[NAME:"
0x00eb9ebc: lea    rcx,[rbp+0x260]
0x00eb9ec3: call   0x14006f510
0x00eb9ec8: lea    rdx,[rbp+0x3c0]
0x00eb9ecf: lea    rcx,[rbp+0x260]
0x00eb9ed6: call   0x1400b9ca0
0x00eb9edb: lea    rdx,[rip+0x87429e]        # 0x14172e180 ; literal=" keyboard"
0x00eb9ee2: lea    rcx,[rbp+0x260]
0x00eb9ee9: call   0x14006f4f0
0x00eb9eee: lea    rdx,[rip+0x75950f]        # 0x141613404 ; literal=":"
0x00eb9ef5: lea    rcx,[rbp+0x260]
0x00eb9efc: call   0x14006f4f0
0x00eb9f01: lea    rdx,[rbp+0x3c0]
0x00eb9f08: lea    rcx,[rbp+0x260]
0x00eb9f0f: call   0x1400b9ca0
0x00eb9f14: lea    rdx,[rip+0x874255]        # 0x14172e170 ; literal=" keyboards"
0x00eb9f1b: lea    rcx,[rbp+0x260]
0x00eb9f22: call   0x14006f4f0
0x00eb9f27: lea    rdx,[rip+0x73e736]        # 0x1415f8664 ; literal="]"
0x00eb9f2e: lea    rcx,[rbp+0x260]
0x00eb9f35: call   0x14006f4f0
0x00eb9f3a: lea    rdx,[rbp+0x260]
0x00eb9f41: lea    rcx,[rsp+0x28]
0x00eb9f46: call   0x1400bb700
0x00eb9f4b: lea    rdx,[rip+0x8741d6]        # 0x14172e128 ; literal="[VALUE:10]"
0x00eb9f52: lea    rcx,[rsp+0x28]
0x00eb9f57: call   0x1400bb870
0x00eb9f5c: lea    r8,[rbp-0x68]
0x00eb9f60: lea    rdx,[rsp+0x28]
0x00eb9f65: mov    rcx,QWORD PTR [rsp+0x78]
0x00eb9f6a: call   0x140eb4380
0x00eb9f6f: lea    rdx,[rip+0x874192]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00eb9f76: lea    rcx,[rsp+0x28]
0x00eb9f7b: call   0x1400bb870
0x00eb9f80: lea    rdx,[rip+0x8741c1]        # 0x14172e148 ; literal="[SIZE:"
0x00eb9f87: lea    rcx,[rbp+0x260]
0x00eb9f8e: call   0x14006f510
0x00eb9f93: lea    rdx,[rbp+0x260]
0x00eb9f9a: mov    ecx,ebx
0x00eb9f9c: call   0x140529cf0
0x00eb9fa1: lea    rdx,[rip+0x73e6bc]        # 0x1415f8664 ; literal="]"
0x00eb9fa8: lea    rcx,[rbp+0x260]
0x00eb9faf: call   0x14006f4f0
0x00eb9fb4: lea    rdx,[rbp+0x260]
0x00eb9fbb: lea    rcx,[rsp+0x28]
0x00eb9fc0: call   0x1400bb700
0x00eb9fc5: lea    rdx,[rip+0x87416c]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00eb9fcc: lea    rcx,[rbp+0x260]
0x00eb9fd3: call   0x14006f510
0x00eb9fd8: lea    rdx,[rbp+0x260]
0x00eb9fdf: mov    ecx,r14d
0x00eb9fe2: call   0x140529cf0
0x00eb9fe7: lea    rdx,[rip+0x73e676]        # 0x1415f8664 ; literal="]"
0x00eb9fee: lea    rcx,[rbp+0x260]
0x00eb9ff5: call   0x14006f4f0
0x00eb9ffa: lea    rdx,[rbp+0x260]
0x00eba001: lea    rcx,[rsp+0x28]
0x00eba006: call   0x1400bb700
0x00eba00b: lea    rdx,[rip+0x8741f6]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00eba012: lea    rcx,[rbp+0x260]
0x00eba019: call   0x14006f510
0x00eba01e: lea    rdx,[rbp+0x3c0]
0x00eba025: lea    rcx,[rbp+0x260]
0x00eba02c: call   0x1400b9ca0
0x00eba031: lea    rdx,[rip+0x874188]        # 0x14172e1c0 ; literal=" keyboard allows the musician to select the pitch of the instrument.]"
0x00eba038: lea    rcx,[rbp+0x260]
0x00eba03f: call   0x14006f4f0
0x00eba044: lea    rdx,[rbp+0x260]
0x00eba04b: lea    rcx,[rsp+0x28]
0x00eba050: call   0x1400bb700
0x00eba055: lea    rdx,[rbp+0x4e0]
0x00eba05c: lea    rcx,[rbp+0x700]
0x00eba063: call   0x14006f560
0x00eba068: nop
0x00eba069: lea    rdx,[rip+0x8741c0]        # 0x14172e230 ; literal="_BODY"
0x00eba070: lea    rcx,[rbp+0x700]
0x00eba077: call   0x14006f4f0
0x00eba07c: lea    rdx,[rbp+0x700]
0x00eba083: lea    rcx,[rbp-0x48]
0x00eba087: call   0x1400bb700
0x00eba08c: mov    DWORD PTR [rbp+0x4],0x0
0x00eba093: lea    rdx,[rip+0x873536]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00eba09a: lea    rcx,[rbp+0x260]
0x00eba0a1: call   0x14006f510
0x00eba0a6: lea    rdx,[rbp+0x700]
0x00eba0ad: lea    rcx,[rbp+0x260]
0x00eba0b4: call   0x1400b9ca0
0x00eba0b9: lea    rdx,[rip+0x73e5a4]        # 0x1415f8664 ; literal="]"
0x00eba0c0: lea    rcx,[rbp+0x260]
0x00eba0c7: call   0x14006f4f0
0x00eba0cc: lea    rdx,[rbp+0x260]
0x00eba0d3: lea    rcx,[rsp+0x28]
0x00eba0d8: call   0x1400bb700
0x00eba0dd: lea    rdx,[rip+0x7ebef4]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00eba0e4: lea    rcx,[rsp+0x28]
0x00eba0e9: call   0x1400bb870
0x00eba0ee: mov    rbx,QWORD PTR [rsp+0x50]
0x00eba0f3: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00eba0f7: je     0x140eba14d
0x00eba0f9: lea    rdx,[rip+0x872960]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00eba100: lea    rcx,[rbp+0xfa0]
0x00eba107: call   0x1400680e0
0x00eba10c: nop
0x00eba10d: lea    rdx,[rbp+0xfa0]
0x00eba114: mov    ecx,DWORD PTR [rbx+0x40]
0x00eba117: call   0x140529cf0
0x00eba11c: lea    rdx,[rip+0x73e541]        # 0x1415f8664 ; literal="]"
0x00eba123: lea    rcx,[rbp+0xfa0]
0x00eba12a: call   0x14006f4f0
0x00eba12f: lea    rdx,[rbp+0xfa0]
0x00eba136: lea    rcx,[rsp+0x28]
0x00eba13b: call   0x1400bb700
0x00eba140: nop
0x00eba141: lea    rcx,[rbp+0xfa0]
0x00eba148: call   0x140067dc0
0x00eba14d: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00eba151: je     0x140eba1a7
0x00eba153: lea    rdx,[rip+0x8728f6]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00eba15a: lea    rcx,[rbp+0xfc0]
0x00eba161: call   0x1400680e0
0x00eba166: nop
0x00eba167: lea    rdx,[rbp+0xfc0]
0x00eba16e: mov    ecx,DWORD PTR [rbx+0x44]
0x00eba171: call   0x140529cf0
0x00eba176: lea    rdx,[rip+0x73e4e7]        # 0x1415f8664 ; literal="]"
0x00eba17d: lea    rcx,[rbp+0xfc0]
0x00eba184: call   0x14006f4f0
0x00eba189: lea    rdx,[rbp+0xfc0]
0x00eba190: lea    rcx,[rsp+0x28]
0x00eba195: call   0x1400bb700
0x00eba19a: nop
0x00eba19b: lea    rcx,[rbp+0xfc0]
0x00eba1a2: call   0x140067dc0
0x00eba1a7: lea    rdx,[rip+0x87340a]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00eba1ae: lea    rcx,[rsp+0x28]
0x00eba1b3: call   0x1400bb870
0x00eba1b8: lea    rdx,[rip+0x873f99]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00eba1bf: lea    rcx,[rsp+0x28]
0x00eba1c4: call   0x1400bb870
0x00eba1c9: lea    rdx,[rip+0x874050]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00eba1d0: lea    rcx,[rsp+0x28]
0x00eba1d5: call   0x1400bb870
0x00eba1da: lea    rdx,[rip+0x873f6f]        # 0x14172e150 ; literal="[NAME:"
0x00eba1e1: lea    rcx,[rbp+0x260]
0x00eba1e8: call   0x14006f510
0x00eba1ed: lea    rdx,[rbp+0x3c0]
0x00eba1f4: lea    rcx,[rbp+0x260]
0x00eba1fb: call   0x1400b9ca0
0x00eba200: movzx  r14d,BYTE PTR [rsp+0x43]
0x00eba206: movzx  ebx,BYTE PTR [rsp+0x42]
0x00eba20b: test   r14b,r14b
0x00eba20e: jne    0x140eba214
0x00eba210: test   bl,bl
0x00eba212: je     0x140eba22e
0x00eba214: cmp    esi,0x9c40
0x00eba21a: jl     0x140eba225
0x00eba21c: lea    rdx,[rip+0x873f75]        # 0x14172e198 ; literal=" console"
0x00eba223: jmp    0x140eba24e
0x00eba225: test   r14b,r14b
0x00eba228: jne    0x140eba247
0x00eba22a: test   bl,bl
0x00eba22c: jne    0x140eba247
0x00eba22e: lea    rdx,[rip+0x86a7c7]        # 0x1417249fc ; literal=" body"
0x00eba235: cmp    BYTE PTR [rsp+0x20],0x0
0x00eba23a: lea    rax,[rip+0x873f4b]        # 0x14172e18c ; literal=" case"
0x00eba241: cmove  rdx,rax
0x00eba245: jmp    0x140eba24e
0x00eba247: lea    rdx,[rip+0x845c6a]        # 0x1416ffeb8 ; literal=" chest"
0x00eba24e: lea    rcx,[rbp+0x260]
0x00eba255: call   0x14006f4f0
0x00eba25a: lea    rdx,[rip+0x7591a3]        # 0x141613404 ; literal=":"
0x00eba261: lea    rcx,[rbp+0x260]
0x00eba268: call   0x14006f4f0
0x00eba26d: lea    rdx,[rbp+0x3c0]
0x00eba274: lea    rcx,[rbp+0x260]
0x00eba27b: call   0x1400b9ca0
0x00eba280: test   r14b,r14b
0x00eba283: jne    0x140eba289
0x00eba285: test   bl,bl
0x00eba287: je     0x140eba2a3
0x00eba289: cmp    esi,0x9c40
0x00eba28f: jl     0x140eba29a
0x00eba291: lea    rdx,[rip+0x873f18]        # 0x14172e1b0 ; literal=" consoles"
0x00eba298: jmp    0x140eba2c3
0x00eba29a: test   r14b,r14b
0x00eba29d: jne    0x140eba2bc
0x00eba29f: test   bl,bl
0x00eba2a1: jne    0x140eba2bc
0x00eba2a3: lea    rdx,[rip+0x873fee]        # 0x14172e298 ; literal=" bodies"
0x00eba2aa: cmp    BYTE PTR [rsp+0x20],0x0
0x00eba2af: lea    rax,[rip+0x873fd6]        # 0x14172e28c ; literal=" cases"
0x00eba2b6: cmove  rdx,rax
0x00eba2ba: jmp    0x140eba2c3
0x00eba2bc: lea    rdx,[rip+0x873ee5]        # 0x14172e1a8 ; literal=" chests"
0x00eba2c3: lea    rcx,[rbp+0x260]
0x00eba2ca: call   0x14006f4f0
0x00eba2cf: lea    rdx,[rip+0x73e38e]        # 0x1415f8664 ; literal="]"
0x00eba2d6: lea    rcx,[rbp+0x260]
0x00eba2dd: call   0x14006f4f0
0x00eba2e2: lea    rdx,[rbp+0x260]
0x00eba2e9: lea    rcx,[rsp+0x28]
0x00eba2ee: call   0x1400bb700
0x00eba2f3: lea    rdx,[rip+0x873e2e]        # 0x14172e128 ; literal="[VALUE:10]"
0x00eba2fa: lea    rcx,[rsp+0x28]
0x00eba2ff: call   0x1400bb870
0x00eba304: lea    r8,[rbp+0x4]
0x00eba308: lea    rdx,[rsp+0x28]
0x00eba30d: mov    rcx,QWORD PTR [rsp+0x78]
0x00eba312: call   0x140eb4380
0x00eba317: lea    rdx,[rip+0x873dea]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00eba31e: lea    rcx,[rsp+0x28]
0x00eba323: call   0x1400bb870
0x00eba328: lea    rdx,[rip+0x873e19]        # 0x14172e148 ; literal="[SIZE:"
0x00eba32f: lea    rcx,[rbp+0x260]
0x00eba336: call   0x14006f510
0x00eba33b: lea    rdx,[rbp+0x260]
0x00eba342: mov    ecx,edi
0x00eba344: call   0x140529cf0
0x00eba349: lea    rdx,[rip+0x73e314]        # 0x1415f8664 ; literal="]"
0x00eba350: lea    rcx,[rbp+0x260]
0x00eba357: call   0x14006f4f0
0x00eba35c: lea    rdx,[rbp+0x260]
0x00eba363: lea    rcx,[rsp+0x28]
0x00eba368: call   0x1400bb700
0x00eba36d: lea    rdx,[rip+0x873dc4]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00eba374: lea    rcx,[rbp+0x260]
0x00eba37b: call   0x14006f510
0x00eba380: lea    rdx,[rbp+0x260]
0x00eba387: mov    ecx,r12d
0x00eba38a: call   0x140529cf0
0x00eba38f: lea    rdx,[rip+0x73e2ce]        # 0x1415f8664 ; literal="]"
0x00eba396: lea    rcx,[rbp+0x260]
0x00eba39d: call   0x14006f4f0
0x00eba3a2: lea    rdx,[rbp+0x260]
0x00eba3a9: lea    rcx,[rsp+0x28]
0x00eba3ae: call   0x1400bb700
0x00eba3b3: lea    rdx,[rip+0x873e4e]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00eba3ba: lea    rcx,[rbp+0x260]
0x00eba3c1: call   0x14006f510
0x00eba3c6: lea    rdx,[rbp+0x3c0]
0x00eba3cd: lea    rcx,[rbp+0x260]
0x00eba3d4: call   0x1400b9ca0
0x00eba3d9: test   r14b,r14b
0x00eba3dc: jne    0x140eba3e2
0x00eba3de: test   bl,bl
0x00eba3e0: je     0x140eba3fc
0x00eba3e2: cmp    esi,0x9c40
0x00eba3e8: jl     0x140eba3f3
0x00eba3ea: lea    rdx,[rip+0x873da7]        # 0x14172e198 ; literal=" console"
0x00eba3f1: jmp    0x140eba420
0x00eba3f3: test   r14b,r14b
0x00eba3f6: jne    0x140eba419
0x00eba3f8: test   bl,bl
0x00eba3fa: jne    0x140eba419
0x00eba3fc: lea    rdx,[rip+0x86a5f9]        # 0x1417249fc ; literal=" body"
0x00eba403: movzx  r12d,BYTE PTR [rsp+0x20]
0x00eba409: test   r12b,r12b
0x00eba40c: lea    rax,[rip+0x873d79]        # 0x14172e18c ; literal=" case"
0x00eba413: cmove  rdx,rax
0x00eba417: jmp    0x140eba426
0x00eba419: lea    rdx,[rip+0x845a98]        # 0x1416ffeb8 ; literal=" chest"
0x00eba420: movzx  r12d,BYTE PTR [rsp+0x20]
0x00eba426: lea    rcx,[rbp+0x260]
0x00eba42d: call   0x14006f4f0
0x00eba432: lea    rdx,[rip+0x873e6f]        # 0x14172e2a8 ; literal=" is the housing for the workings of the instrument.]"
0x00eba439: lea    rcx,[rbp+0x260]
0x00eba440: call   0x14006f4f0
0x00eba445: lea    rdx,[rbp+0x260]
0x00eba44c: lea    rcx,[rsp+0x28]
0x00eba451: call   0x1400bb700
0x00eba456: lea    rcx,[rbp+0x560]
0x00eba45d: call   0x14006f620
0x00eba462: nop
0x00eba463: mov    DWORD PTR [rbp-0x6c],0x0
0x00eba46a: test   r12b,r12b
0x00eba46d: jne    0x140eba80c
0x00eba473: lea    rdx,[rbp+0x4e0]
0x00eba47a: lea    rcx,[rbp+0x560]
0x00eba481: call   0x14006f530
0x00eba486: lea    rdx,[rip+0x873e13]        # 0x14172e2a0 ; literal="_VIB"
0x00eba48d: lea    rcx,[rbp+0x560]
0x00eba494: call   0x14006f4f0
0x00eba499: lea    rdx,[rbp+0x560]
0x00eba4a0: lea    rcx,[rbp-0x48]
0x00eba4a4: call   0x1400bb700
0x00eba4a9: lea    rdx,[rip+0x873120]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00eba4b0: lea    rcx,[rbp+0x260]
0x00eba4b7: call   0x14006f510
0x00eba4bc: lea    rdx,[rbp+0x560]
0x00eba4c3: lea    rcx,[rbp+0x260]
0x00eba4ca: call   0x1400b9ca0
0x00eba4cf: lea    rdx,[rip+0x73e18e]        # 0x1415f8664 ; literal="]"
0x00eba4d6: lea    rcx,[rbp+0x260]
0x00eba4dd: call   0x14006f4f0
0x00eba4e2: lea    rdx,[rbp+0x260]
0x00eba4e9: lea    rcx,[rsp+0x28]
0x00eba4ee: call   0x1400bb700
0x00eba4f3: lea    rdx,[rip+0x7ebade]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00eba4fa: lea    rcx,[rsp+0x28]
0x00eba4ff: call   0x1400bb870
0x00eba504: mov    rbx,QWORD PTR [rsp+0x50]
0x00eba509: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00eba50d: je     0x140eba563
0x00eba50f: lea    rdx,[rip+0x87254a]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00eba516: lea    rcx,[rbp+0x780]
0x00eba51d: call   0x1400680e0
0x00eba522: nop
0x00eba523: lea    rdx,[rbp+0x780]
0x00eba52a: mov    ecx,DWORD PTR [rbx+0x40]
0x00eba52d: call   0x140529cf0
0x00eba532: lea    rdx,[rip+0x73e12b]        # 0x1415f8664 ; literal="]"
0x00eba539: lea    rcx,[rbp+0x780]
0x00eba540: call   0x14006f4f0
0x00eba545: lea    rdx,[rbp+0x780]
0x00eba54c: lea    rcx,[rsp+0x28]
0x00eba551: call   0x1400bb700
0x00eba556: nop
0x00eba557: lea    rcx,[rbp+0x780]
0x00eba55e: call   0x140067dc0
0x00eba563: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00eba567: je     0x140eba5bd
0x00eba569: lea    rdx,[rip+0x8724e0]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00eba570: lea    rcx,[rbp+0x7a0]
0x00eba577: call   0x1400680e0
0x00eba57c: nop
0x00eba57d: lea    rdx,[rbp+0x7a0]
0x00eba584: mov    ecx,DWORD PTR [rbx+0x44]
0x00eba587: call   0x140529cf0
0x00eba58c: lea    rdx,[rip+0x73e0d1]        # 0x1415f8664 ; literal="]"
0x00eba593: lea    rcx,[rbp+0x7a0]
0x00eba59a: call   0x14006f4f0
0x00eba59f: lea    rdx,[rbp+0x7a0]
0x00eba5a6: lea    rcx,[rsp+0x28]
0x00eba5ab: call   0x1400bb700
0x00eba5b0: nop
0x00eba5b1: lea    rcx,[rbp+0x7a0]
0x00eba5b8: call   0x140067dc0
0x00eba5bd: lea    rdx,[rip+0x872ff4]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00eba5c4: lea    rcx,[rsp+0x28]
0x00eba5c9: call   0x1400bb870
0x00eba5ce: lea    rdx,[rip+0x873b83]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00eba5d5: lea    rcx,[rsp+0x28]
0x00eba5da: call   0x1400bb870
0x00eba5df: lea    rdx,[rip+0x873c3a]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00eba5e6: lea    rcx,[rsp+0x28]
0x00eba5eb: call   0x1400bb870
0x00eba5f0: lea    rdx,[rip+0x873b59]        # 0x14172e150 ; literal="[NAME:"
0x00eba5f7: lea    rcx,[rbp+0x260]
0x00eba5fe: call   0x14006f510
0x00eba603: lea    rdx,[rbp+0x3c0]
0x00eba60a: lea    rcx,[rbp+0x260]
0x00eba611: call   0x1400b9ca0
0x00eba616: movzx  ebx,BYTE PTR [rsp+0x41]
0x00eba61b: movzx  edi,BYTE PTR [rsp+0x40]
0x00eba620: test   bl,bl
0x00eba622: je     0x140eba62d
0x00eba624: lea    rdx,[rip+0x873c15]        # 0x14172e240 ; literal=" strings"
0x00eba62b: jmp    0x140eba642
0x00eba62d: lea    rdx,[rip+0x873c04]        # 0x14172e238 ; literal=" bells"
0x00eba634: test   dil,dil
0x00eba637: lea    rax,[rip+0x873c46]        # 0x14172e284 ; literal=" pipes"
0x00eba63e: cmove  rdx,rax
0x00eba642: lea    rcx,[rbp+0x260]
0x00eba649: call   0x14006f4f0
0x00eba64e: lea    rdx,[rip+0x758daf]        # 0x141613404 ; literal=":"
0x00eba655: lea    rcx,[rbp+0x260]
0x00eba65c: call   0x14006f4f0
0x00eba661: lea    rdx,[rbp+0x3c0]
0x00eba668: lea    rcx,[rbp+0x260]
0x00eba66f: call   0x1400b9ca0
0x00eba674: test   bl,bl
0x00eba676: je     0x140eba681
0x00eba678: lea    rdx,[rip+0x873bc1]        # 0x14172e240 ; literal=" strings"
0x00eba67f: jmp    0x140eba696
0x00eba681: lea    rdx,[rip+0x873bb0]        # 0x14172e238 ; literal=" bells"
0x00eba688: test   dil,dil
0x00eba68b: lea    rax,[rip+0x873bf2]        # 0x14172e284 ; literal=" pipes"
0x00eba692: cmove  rdx,rax
0x00eba696: lea    rcx,[rbp+0x260]
0x00eba69d: call   0x14006f4f0
0x00eba6a2: lea    rdx,[rip+0x73dfbb]        # 0x1415f8664 ; literal="]"
0x00eba6a9: lea    rcx,[rbp+0x260]
0x00eba6b0: call   0x14006f4f0
0x00eba6b5: lea    rdx,[rbp+0x260]
0x00eba6bc: lea    rcx,[rsp+0x28]
0x00eba6c1: call   0x1400bb700
0x00eba6c6: lea    rdx,[rip+0x873a5b]        # 0x14172e128 ; literal="[VALUE:10]"
0x00eba6cd: lea    rcx,[rsp+0x28]
0x00eba6d2: call   0x1400bb870
0x00eba6d7: lea    r8,[rbp-0x6c]
0x00eba6db: lea    rdx,[rsp+0x28]
0x00eba6e0: mov    rcx,QWORD PTR [rsp+0x78]
0x00eba6e5: test   bl,bl
0x00eba6e7: je     0x140eba6f0
0x00eba6e9: call   0x140eb4160
0x00eba6ee: jmp    0x140eba6f5
0x00eba6f0: call   0x140eb4380
0x00eba6f5: lea    rdx,[rip+0x873a0c]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00eba6fc: lea    rcx,[rsp+0x28]
0x00eba701: call   0x1400bb870
0x00eba706: lea    rdx,[rip+0x873a3b]        # 0x14172e148 ; literal="[SIZE:"
0x00eba70d: lea    rcx,[rbp+0x260]
0x00eba714: call   0x14006f510
0x00eba719: lea    rdx,[rbp+0x260]
0x00eba720: mov    ecx,r15d
0x00eba723: call   0x140529cf0
0x00eba728: lea    rdx,[rip+0x73df35]        # 0x1415f8664 ; literal="]"
0x00eba72f: lea    rcx,[rbp+0x260]
0x00eba736: call   0x14006f4f0
0x00eba73b: lea    rdx,[rbp+0x260]
0x00eba742: lea    rcx,[rsp+0x28]
0x00eba747: call   0x1400bb700
0x00eba74c: lea    rdx,[rip+0x8739e5]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00eba753: lea    rcx,[rbp+0x260]
0x00eba75a: call   0x14006f510
0x00eba75f: lea    rdx,[rbp+0x260]
0x00eba766: mov    ecx,r13d
0x00eba769: call   0x140529cf0
0x00eba76e: lea    rdx,[rip+0x73deef]        # 0x1415f8664 ; literal="]"
0x00eba775: lea    rcx,[rbp+0x260]
0x00eba77c: call   0x14006f4f0
0x00eba781: lea    rdx,[rbp+0x260]
0x00eba788: lea    rcx,[rsp+0x28]
0x00eba78d: call   0x1400bb700
0x00eba792: lea    rdx,[rip+0x873a6f]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00eba799: lea    rcx,[rbp+0x260]
0x00eba7a0: call   0x14006f510
0x00eba7a5: lea    rdx,[rbp+0x3c0]
0x00eba7ac: lea    rcx,[rbp+0x260]
0x00eba7b3: call   0x1400b9ca0
0x00eba7b8: test   bl,bl
0x00eba7ba: je     0x140eba7c5
0x00eba7bc: lea    rdx,[rip+0x873a7d]        # 0x14172e240 ; literal=" strings"
0x00eba7c3: jmp    0x140eba7da
0x00eba7c5: lea    rdx,[rip+0x873a6c]        # 0x14172e238 ; literal=" bells"
0x00eba7cc: test   dil,dil
0x00eba7cf: lea    rax,[rip+0x873aae]        # 0x14172e284 ; literal=" pipes"
0x00eba7d6: cmove  rdx,rax
0x00eba7da: lea    rcx,[rbp+0x260]
0x00eba7e1: call   0x14006f4f0
0x00eba7e6: lea    rdx,[rip+0x873a63]        # 0x14172e250 ; literal=" vibrate, producing the sound of the instrument.]"
0x00eba7ed: lea    rcx,[rbp+0x260]
0x00eba7f4: call   0x14006f4f0
0x00eba7f9: lea    rdx,[rbp+0x260]
0x00eba800: lea    rcx,[rsp+0x28]
0x00eba805: call   0x1400bb700
0x00eba80a: jmp    0x140eba811
0x00eba80c: movzx  ebx,BYTE PTR [rsp+0x41]
0x00eba811: lea    rcx,[rbp+0x6e0]
0x00eba818: call   0x14006f620
0x00eba81d: nop
0x00eba81e: mov    DWORD PTR [rbp-0x5c],0x0
0x00eba825: movzx  r15d,BYTE PTR [rsp+0x40]
0x00eba82b: test   bl,bl
0x00eba82d: jne    0x140ebab87
0x00eba833: test   r15b,r15b
0x00eba836: jne    0x140ebab87
0x00eba83c: lea    rdx,[rbp+0x4e0]
0x00eba843: lea    rcx,[rbp+0x6e0]
0x00eba84a: call   0x14006f530
0x00eba84f: lea    rdx,[rip+0x873b0a]        # 0x14172e360 ; literal="_BELLOWS"
0x00eba856: lea    rcx,[rbp+0x6e0]
0x00eba85d: call   0x14006f4f0
0x00eba862: lea    rdx,[rbp+0x6e0]
0x00eba869: lea    rcx,[rbp-0x48]
0x00eba86d: call   0x1400bb700
0x00eba872: lea    rdx,[rip+0x872d57]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00eba879: lea    rcx,[rbp+0x260]
0x00eba880: call   0x14006f510
0x00eba885: lea    rdx,[rbp+0x6e0]
0x00eba88c: lea    rcx,[rbp+0x260]
0x00eba893: call   0x1400b9ca0
0x00eba898: lea    rdx,[rip+0x73ddc5]        # 0x1415f8664 ; literal="]"
0x00eba89f: lea    rcx,[rbp+0x260]
0x00eba8a6: call   0x14006f4f0
0x00eba8ab: lea    rdx,[rbp+0x260]
0x00eba8b2: lea    rcx,[rsp+0x28]
0x00eba8b7: call   0x1400bb700
0x00eba8bc: lea    rdx,[rip+0x7eb715]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00eba8c3: lea    rcx,[rsp+0x28]
0x00eba8c8: call   0x1400bb870
0x00eba8cd: mov    rdi,QWORD PTR [rsp+0x50]
0x00eba8d2: cmp    DWORD PTR [rdi+0x40],0xffffffff
0x00eba8d6: je     0x140eba92c
0x00eba8d8: lea    rdx,[rip+0x872181]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00eba8df: lea    rcx,[rbp+0x7c0]
0x00eba8e6: call   0x1400680e0
0x00eba8eb: nop
0x00eba8ec: lea    rdx,[rbp+0x7c0]
0x00eba8f3: mov    ecx,DWORD PTR [rdi+0x40]
0x00eba8f6: call   0x140529cf0
0x00eba8fb: lea    rdx,[rip+0x73dd62]        # 0x1415f8664 ; literal="]"
0x00eba902: lea    rcx,[rbp+0x7c0]
0x00eba909: call   0x14006f4f0
0x00eba90e: lea    rdx,[rbp+0x7c0]
0x00eba915: lea    rcx,[rsp+0x28]
0x00eba91a: call   0x1400bb700
0x00eba91f: nop
0x00eba920: lea    rcx,[rbp+0x7c0]
0x00eba927: call   0x140067dc0
0x00eba92c: cmp    DWORD PTR [rdi+0x44],0xffffffff
0x00eba930: je     0x140eba986
0x00eba932: lea    rdx,[rip+0x872117]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00eba939: lea    rcx,[rbp+0x7e0]
0x00eba940: call   0x1400680e0
0x00eba945: nop
0x00eba946: lea    rdx,[rbp+0x7e0]
0x00eba94d: mov    ecx,DWORD PTR [rdi+0x44]
0x00eba950: call   0x140529cf0
0x00eba955: lea    rdx,[rip+0x73dd08]        # 0x1415f8664 ; literal="]"
0x00eba95c: lea    rcx,[rbp+0x7e0]
0x00eba963: call   0x14006f4f0
0x00eba968: lea    rdx,[rbp+0x7e0]
0x00eba96f: lea    rcx,[rsp+0x28]
0x00eba974: call   0x1400bb700
0x00eba979: nop
0x00eba97a: lea    rcx,[rbp+0x7e0]
0x00eba981: call   0x140067dc0
0x00eba986: lea    rdx,[rip+0x872c2b]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00eba98d: lea    rcx,[rsp+0x28]
0x00eba992: call   0x1400bb870
0x00eba997: lea    rdx,[rip+0x8737ba]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00eba99e: lea    rcx,[rsp+0x28]
0x00eba9a3: call   0x1400bb870
0x00eba9a8: lea    rdx,[rip+0x873871]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00eba9af: lea    rcx,[rsp+0x28]
0x00eba9b4: call   0x1400bb870
0x00eba9b9: lea    rdx,[rip+0x873790]        # 0x14172e150 ; literal="[NAME:"
0x00eba9c0: lea    rcx,[rbp+0x260]
0x00eba9c7: call   0x14006f510
0x00eba9cc: lea    rdx,[rbp+0x3c0]
0x00eba9d3: lea    rcx,[rbp+0x260]
0x00eba9da: call   0x1400b9ca0
0x00eba9df: lea    rbx,[rip+0x87396e]        # 0x14172e354 ; literal=" pump"
0x00eba9e6: test   r14b,r14b
0x00eba9e9: lea    rax,[rip+0x8739b0]        # 0x14172e3a0 ; literal=" bellows"
0x00eba9f0: cmove  rbx,rax
0x00eba9f4: mov    rdx,rbx
0x00eba9f7: lea    rcx,[rbp+0x260]
0x00eba9fe: call   0x14006f4f0
0x00ebaa03: lea    rdx,[rip+0x7589fa]        # 0x141613404 ; literal=":"
0x00ebaa0a: lea    rcx,[rbp+0x260]
0x00ebaa11: call   0x14006f4f0
0x00ebaa16: lea    rdx,[rbp+0x3c0]
0x00ebaa1d: lea    rcx,[rbp+0x260]
0x00ebaa24: call   0x1400b9ca0
0x00ebaa29: mov    rdx,rbx
0x00ebaa2c: lea    rcx,[rbp+0x260]
0x00ebaa33: call   0x14006f4f0
0x00ebaa38: lea    rdx,[rip+0x73dc25]        # 0x1415f8664 ; literal="]"
0x00ebaa3f: lea    rcx,[rbp+0x260]
0x00ebaa46: call   0x14006f4f0
0x00ebaa4b: lea    rdx,[rbp+0x260]
0x00ebaa52: lea    rcx,[rsp+0x28]
0x00ebaa57: call   0x1400bb700
0x00ebaa5c: lea    rdx,[rip+0x8736c5]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebaa63: lea    rcx,[rsp+0x28]
0x00ebaa68: call   0x1400bb870
0x00ebaa6d: lea    r8,[rbp-0x5c]
0x00ebaa71: lea    rdx,[rsp+0x28]
0x00ebaa76: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebaa7b: test   r14b,r14b
0x00ebaa7e: je     0x140ebaa87
0x00ebaa80: call   0x140eb4380
0x00ebaa85: jmp    0x140ebaa8c
0x00ebaa87: call   0x140eb3f60
0x00ebaa8c: lea    rdx,[rip+0x873675]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebaa93: lea    rcx,[rsp+0x28]
0x00ebaa98: call   0x1400bb870
0x00ebaa9d: lea    rdx,[rip+0x8736a4]        # 0x14172e148 ; literal="[SIZE:"
0x00ebaaa4: lea    rcx,[rbp+0x260]
0x00ebaaab: call   0x14006f510
0x00ebaab0: lea    rdx,[rbp+0x260]
0x00ebaab7: mov    ecx,DWORD PTR [rsp+0x64]
0x00ebaabb: call   0x140529cf0
0x00ebaac0: lea    rdx,[rip+0x73db9d]        # 0x1415f8664 ; literal="]"
0x00ebaac7: lea    rcx,[rbp+0x260]
0x00ebaace: call   0x14006f4f0
0x00ebaad3: lea    rdx,[rbp+0x260]
0x00ebaada: lea    rcx,[rsp+0x28]
0x00ebaadf: call   0x1400bb700
0x00ebaae4: lea    rdx,[rip+0x87364d]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebaaeb: lea    rcx,[rbp+0x260]
0x00ebaaf2: call   0x14006f510
0x00ebaaf7: lea    rdx,[rbp+0x260]
0x00ebaafe: mov    ecx,DWORD PTR [rbp-0x50]
0x00ebab01: call   0x140529cf0
0x00ebab06: lea    rdx,[rip+0x73db57]        # 0x1415f8664 ; literal="]"
0x00ebab0d: lea    rcx,[rbp+0x260]
0x00ebab14: call   0x14006f4f0
0x00ebab19: lea    rdx,[rbp+0x260]
0x00ebab20: lea    rcx,[rsp+0x28]
0x00ebab25: call   0x1400bb700
0x00ebab2a: lea    rdx,[rip+0x8736d7]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebab31: lea    rcx,[rbp+0x260]
0x00ebab38: call   0x14006f510
0x00ebab3d: lea    rdx,[rbp+0x3c0]
0x00ebab44: lea    rcx,[rbp+0x260]
0x00ebab4b: call   0x1400b9ca0
0x00ebab50: lea    rcx,[rbp+0x260]
0x00ebab57: test   r14b,r14b
0x00ebab5a: lea    rdx,[rip+0x87380f]        # 0x14172e370 ; literal=" pump is used to supply air to the instrument.]"
0x00ebab61: jne    0x140ebab6a
0x00ebab63: lea    rdx,[rip+0x87378e]        # 0x14172e2f8 ; literal=" bellows is used to send air through the instrument.]"
0x00ebab6a: call   0x14006f4f0
0x00ebab6f: lea    rdx,[rbp+0x260]
0x00ebab76: lea    rcx,[rsp+0x28]
0x00ebab7b: call   0x1400bb700
0x00ebab80: movzx  ebx,BYTE PTR [rsp+0x41]
0x00ebab85: jmp    0x140ebab8c
0x00ebab87: mov    rdi,QWORD PTR [rsp+0x50]
0x00ebab8c: lea    rdx,[rip+0x87374d]        # 0x14172e2e0 ; literal="[ITEM_INSTRUMENT:"
0x00ebab93: lea    rcx,[rbp+0x260]
0x00ebab9a: call   0x14006f510
0x00ebab9f: lea    rdx,[rbp+0x4e0]
0x00ebaba6: lea    rcx,[rbp+0x260]
0x00ebabad: call   0x1400b9ca0
0x00ebabb2: lea    rdx,[rip+0x73daab]        # 0x1415f8664 ; literal="]"
0x00ebabb9: lea    rcx,[rbp+0x260]
0x00ebabc0: call   0x14006f4f0
0x00ebabc5: lea    rdx,[rbp+0x260]
0x00ebabcc: lea    rcx,[rsp+0x28]
0x00ebabd1: call   0x1400bb700
0x00ebabd6: lea    rdx,[rip+0x7eb3fb]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebabdd: lea    rcx,[rsp+0x28]
0x00ebabe2: call   0x1400bb870
0x00ebabe7: cmp    DWORD PTR [rdi+0x40],0xffffffff
0x00ebabeb: je     0x140ebac41
0x00ebabed: lea    rdx,[rip+0x871e6c]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebabf4: lea    rcx,[rbp+0x800]
0x00ebabfb: call   0x1400680e0
0x00ebac00: nop
0x00ebac01: lea    rdx,[rbp+0x800]
0x00ebac08: mov    ecx,DWORD PTR [rdi+0x40]
0x00ebac0b: call   0x140529cf0
0x00ebac10: lea    rdx,[rip+0x73da4d]        # 0x1415f8664 ; literal="]"
0x00ebac17: lea    rcx,[rbp+0x800]
0x00ebac1e: call   0x14006f4f0
0x00ebac23: lea    rdx,[rbp+0x800]
0x00ebac2a: lea    rcx,[rsp+0x28]
0x00ebac2f: call   0x1400bb700
0x00ebac34: nop
0x00ebac35: lea    rcx,[rbp+0x800]
0x00ebac3c: call   0x140067dc0
0x00ebac41: cmp    DWORD PTR [rdi+0x44],0xffffffff
0x00ebac45: je     0x140ebac9b
0x00ebac47: lea    rdx,[rip+0x871e02]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebac4e: lea    rcx,[rbp+0x820]
0x00ebac55: call   0x1400680e0
0x00ebac5a: nop
0x00ebac5b: lea    rdx,[rbp+0x820]
0x00ebac62: mov    ecx,DWORD PTR [rdi+0x44]
0x00ebac65: call   0x140529cf0
0x00ebac6a: lea    rdx,[rip+0x73d9f3]        # 0x1415f8664 ; literal="]"
0x00ebac71: lea    rcx,[rbp+0x820]
0x00ebac78: call   0x14006f4f0
0x00ebac7d: lea    rdx,[rbp+0x820]
0x00ebac84: lea    rcx,[rsp+0x28]
0x00ebac89: call   0x1400bb700
0x00ebac8e: nop
0x00ebac8f: lea    rcx,[rbp+0x820]
0x00ebac96: call   0x140067dc0
0x00ebac9b: lea    rdx,[rip+0x8734ae]        # 0x14172e150 ; literal="[NAME:"
0x00ebaca2: lea    rcx,[rbp+0x260]
0x00ebaca9: call   0x14006f510
0x00ebacae: lea    rdx,[rbp+0x3c0]
0x00ebacb5: lea    rcx,[rbp+0x260]
0x00ebacbc: call   0x1400b9ca0
0x00ebacc1: lea    rdx,[rip+0x75873c]        # 0x141613404 ; literal=":"
0x00ebacc8: lea    rcx,[rbp+0x260]
0x00ebaccf: call   0x14006f4f0
0x00ebacd4: lea    rdx,[rbp+0x3c0]
0x00ebacdb: lea    rcx,[rbp+0x260]
0x00ebace2: call   0x1400b9ca0
0x00ebace7: lea    rdx,[rip+0x73d976]        # 0x1415f8664 ; literal="]"
0x00ebacee: lea    rcx,[rbp+0x260]
0x00ebacf5: call   0x14006f4f0
0x00ebacfa: lea    rdx,[rbp+0x260]
0x00ebad01: lea    rcx,[rsp+0x28]
0x00ebad06: call   0x1400bb700
0x00ebad0b: lea    rdx,[rip+0x873636]        # 0x14172e348 ; literal="[VALUE:50]"
0x00ebad12: lea    rcx,[rsp+0x28]
0x00ebad17: call   0x1400bb870
0x00ebad1c: lea    rdx,[rip+0x873425]        # 0x14172e148 ; literal="[SIZE:"
0x00ebad23: lea    rcx,[rbp+0x260]
0x00ebad2a: call   0x14006f510
0x00ebad2f: lea    rdx,[rbp+0x260]
0x00ebad36: mov    ecx,esi
0x00ebad38: call   0x140529cf0
0x00ebad3d: lea    rdx,[rip+0x73d920]        # 0x1415f8664 ; literal="]"
0x00ebad44: lea    rcx,[rbp+0x260]
0x00ebad4b: call   0x14006f4f0
0x00ebad50: lea    rdx,[rbp+0x260]
0x00ebad57: lea    rcx,[rsp+0x28]
0x00ebad5c: call   0x1400bb700
0x00ebad61: cmp    esi,0x9c40
0x00ebad67: jl     0x140ebad7a
0x00ebad69: lea    rdx,[rip+0x8735c0]        # 0x14172e330 ; literal="[PLACED_AS_BUILDING]"
0x00ebad70: lea    rcx,[rsp+0x28]
0x00ebad75: call   0x1400bb870
0x00ebad7a: lea    rdx,[rip+0x873687]        # 0x14172e408 ; literal="[DOMINANT_MATERIAL_PIECE:BODY]"
0x00ebad81: lea    rcx,[rsp+0x28]
0x00ebad86: call   0x1400bb870
0x00ebad8b: lea    rdx,[rip+0x87365e]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebad92: lea    rcx,[rbp+0x260]
0x00ebad99: call   0x14006f510
0x00ebad9e: lea    rdx,[rip+0x87369b]        # 0x14172e440 ; literal="KEYBOARD:"
0x00ebada5: lea    rcx,[rbp+0x260]
0x00ebadac: call   0x14006f4f0
0x00ebadb1: lea    rdx,[rbp+0x720]
0x00ebadb8: lea    rcx,[rbp+0x260]
0x00ebadbf: call   0x1400b9ca0
0x00ebadc4: lea    rdx,[rip+0x87365d]        # 0x14172e428 ; literal=":keyboard:keyboards"
0x00ebadcb: lea    rcx,[rbp+0x260]
0x00ebadd2: call   0x14006f4f0
0x00ebadd7: lea    rdx,[rip+0x8735da]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebadde: lea    rcx,[rbp+0x260]
0x00ebade5: call   0x14006f4f0
0x00ebadea: lea    rdx,[rbp+0x260]
0x00ebadf1: lea    rcx,[rsp+0x28]
0x00ebadf6: call   0x1400bb700
0x00ebadfb: lea    rdx,[rip+0x8735ee]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebae02: lea    rcx,[rbp+0x260]
0x00ebae09: call   0x14006f510
0x00ebae0e: lea    rdx,[rip+0x873597]        # 0x14172e3ac ; literal="BODY:"
0x00ebae15: lea    rcx,[rbp+0x260]
0x00ebae1c: call   0x14006f4f0
0x00ebae21: lea    rdx,[rbp+0x700]
0x00ebae28: lea    rcx,[rbp+0x260]
0x00ebae2f: call   0x1400b9ca0
0x00ebae34: movzx  edi,BYTE PTR [rsp+0x42]
0x00ebae39: test   r14b,r14b
0x00ebae3c: jne    0x140ebae43
0x00ebae3e: test   dil,dil
0x00ebae41: je     0x140ebae5e
0x00ebae43: cmp    esi,0x9c40
0x00ebae49: jl     0x140ebae54
0x00ebae4b: lea    rdx,[rip+0x873586]        # 0x14172e3d8 ; literal=":console:consoles"
0x00ebae52: jmp    0x140ebaebb
0x00ebae54: test   r14b,r14b
0x00ebae57: jne    0x140ebaeb4
0x00ebae59: test   dil,dil
0x00ebae5c: jne    0x140ebaeb4
0x00ebae5e: lea    rcx,[rbp+0x260]
0x00ebae65: test   r12b,r12b
0x00ebae68: je     0x140ebae82
0x00ebae6a: lea    rdx,[rip+0x87362f]        # 0x14172e4a0 ; literal=":body:bodies"
0x00ebae71: call   0x14006f4f0
0x00ebae76: lea    rdx,[rip+0x87353b]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebae7d: jmp    0x140ebaf60
0x00ebae82: lea    rdx,[rip+0x873607]        # 0x14172e490 ; literal=":case:cases"
0x00ebae89: call   0x14006f4f0
0x00ebae8e: lea    rdx,[rip+0x873523]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebae95: lea    rcx,[rbp+0x260]
0x00ebae9c: call   0x14006f4f0
0x00ebaea1: lea    rdx,[rbp+0x260]
0x00ebaea8: lea    rcx,[rsp+0x28]
0x00ebaead: call   0x1400bb700
0x00ebaeb2: jmp    0x140ebaef4
0x00ebaeb4: lea    rdx,[rip+0x87350d]        # 0x14172e3c8 ; literal=":chest:chests"
0x00ebaebb: lea    rcx,[rbp+0x260]
0x00ebaec2: call   0x14006f4f0
0x00ebaec7: lea    rdx,[rip+0x8734ea]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebaece: lea    rcx,[rbp+0x260]
0x00ebaed5: call   0x14006f4f0
0x00ebaeda: lea    rdx,[rbp+0x260]
0x00ebaee1: lea    rcx,[rsp+0x28]
0x00ebaee6: call   0x1400bb700
0x00ebaeeb: test   r12b,r12b
0x00ebaeee: jne    0x140ebaf7d
0x00ebaef4: lea    rdx,[rip+0x8734f5]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebaefb: lea    rcx,[rbp+0x260]
0x00ebaf02: call   0x14006f510
0x00ebaf07: lea    rdx,[rip+0x8735b6]        # 0x14172e4c4 ; literal="VIB:"
0x00ebaf0e: lea    rcx,[rbp+0x260]
0x00ebaf15: call   0x14006f4f0
0x00ebaf1a: lea    rdx,[rbp+0x560]
0x00ebaf21: lea    rcx,[rbp+0x260]
0x00ebaf28: call   0x1400b9ca0
0x00ebaf2d: test   bl,bl
0x00ebaf2f: je     0x140ebaf3a
0x00ebaf31: lea    rdx,[rip+0x873578]        # 0x14172e4b0 ; literal=":strings:strings"
0x00ebaf38: jmp    0x140ebaf4d
0x00ebaf3a: test   r15b,r15b
0x00ebaf3d: lea    rdx,[rip+0x87351c]        # 0x14172e460 ; literal=":bells:bells"
0x00ebaf44: jne    0x140ebaf4d
0x00ebaf46: lea    rdx,[rip+0x873503]        # 0x14172e450 ; literal=":pipes:pipes"
0x00ebaf4d: lea    rcx,[rbp+0x260]
0x00ebaf54: call   0x14006f4f0
0x00ebaf59: lea    rdx,[rip+0x873520]        # 0x14172e480 ; literal=":ALWAYS_PLURAL]"
0x00ebaf60: lea    rcx,[rbp+0x260]
0x00ebaf67: call   0x14006f4f0
0x00ebaf6c: lea    rdx,[rbp+0x260]
0x00ebaf73: lea    rcx,[rsp+0x28]
0x00ebaf78: call   0x1400bb700
0x00ebaf7d: test   bl,bl
0x00ebaf7f: jne    0x140ebb006
0x00ebaf85: test   r15b,r15b
0x00ebaf88: jne    0x140ebb006
0x00ebaf8a: lea    rdx,[rip+0x87345f]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebaf91: lea    rcx,[rbp+0x260]
0x00ebaf98: call   0x14006f510
0x00ebaf9d: lea    rdx,[rip+0x8734cc]        # 0x14172e470 ; literal="BELLOWS:"
0x00ebafa4: lea    rcx,[rbp+0x260]
0x00ebafab: call   0x14006f4f0
0x00ebafb0: lea    rdx,[rbp+0x6e0]
0x00ebafb7: lea    rcx,[rbp+0x260]
0x00ebafbe: call   0x1400b9ca0
0x00ebafc3: lea    rcx,[rbp+0x260]
0x00ebafca: test   r14b,r14b
0x00ebafcd: lea    rdx,[rip+0x8735dc]        # 0x14172e5b0 ; literal=":pump:pumps"
0x00ebafd4: jne    0x140ebafdd
0x00ebafd6: lea    rdx,[rip+0x8735bb]        # 0x14172e598 ; literal=":bellows:bellows"
0x00ebafdd: call   0x14006f4f0
0x00ebafe2: lea    rdx,[rip+0x8733cf]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebafe9: lea    rcx,[rbp+0x260]
0x00ebaff0: call   0x14006f4f0
0x00ebaff5: lea    rdx,[rbp+0x260]
0x00ebaffc: lea    rcx,[rsp+0x28]
0x00ebb001: call   0x1400bb700
0x00ebb006: imul   ecx,esi,0xffffe890
0x00ebb00c: mov    eax,0x68db8bad
0x00ebb011: imul   ecx
0x00ebb013: mov    r12d,edx
0x00ebb016: sar    r12d,0xf
0x00ebb01a: mov    eax,r12d
0x00ebb01d: shr    eax,0x1f
0x00ebb020: add    r12d,eax
0x00ebb023: mov    ecx,0xd
0x00ebb028: call   0x140071ec0
0x00ebb02d: mov    ecx,DWORD PTR [rsp+0x60]
0x00ebb031: add    ecx,0x24
0x00ebb034: add    ecx,eax
0x00ebb036: imul   ebx,ecx,0x64
0x00ebb039: add    ebx,r12d
0x00ebb03c: mov    eax,0x12c0
0x00ebb041: cmp    ebx,eax
0x00ebb043: cmovg  ebx,eax
0x00ebb046: mov    DWORD PTR [rsp+0x6c],ebx
0x00ebb04a: lea    rdx,[rip+0x873597]        # 0x14172e5e8 ; literal="[PITCH_RANGE:"
0x00ebb051: lea    rcx,[rbp+0x260]
0x00ebb058: call   0x14006f510
0x00ebb05d: lea    rdx,[rbp+0x260]
0x00ebb064: mov    ecx,r12d
0x00ebb067: call   0x140529cf0
0x00ebb06c: lea    rdx,[rip+0x758391]        # 0x141613404 ; literal=":"
0x00ebb073: lea    rcx,[rbp+0x260]
0x00ebb07a: call   0x14006f4f0
0x00ebb07f: lea    rdx,[rbp+0x260]
0x00ebb086: mov    ecx,ebx
0x00ebb088: call   0x140529cf0
0x00ebb08d: lea    rdx,[rip+0x73d5d0]        # 0x1415f8664 ; literal="]"
0x00ebb094: lea    rcx,[rbp+0x260]
0x00ebb09b: call   0x14006f4f0
0x00ebb0a0: lea    rdx,[rbp+0x260]
0x00ebb0a7: lea    rcx,[rsp+0x28]
0x00ebb0ac: call   0x1400bb700
0x00ebb0b1: xor    r15b,r15b
0x00ebb0b4: xor    r14b,r14b
0x00ebb0b7: xor    r13b,r13b
0x00ebb0ba: xor    bl,bl
0x00ebb0bc: mov    BYTE PTR [rsp+0x44],bl
0x00ebb0c0: cmp    BYTE PTR [rsp+0x41],bl
0x00ebb0c4: je     0x140ebb105
0x00ebb0c6: mov    ecx,0x2
0x00ebb0cb: call   0x140071ec0
0x00ebb0d0: lea    rcx,[rsp+0x28]
0x00ebb0d5: test   eax,eax
0x00ebb0d7: je     0x140ebb0f0
0x00ebb0d9: lea    rdx,[rip+0x8734e0]        # 0x14172e5c0 ; literal="[SOUND_PRODUCTION:PLUCKED:BODY:VIB]"
0x00ebb0e0: call   0x1400bb870
0x00ebb0e5: mov    bl,0x1
0x00ebb0e7: mov    BYTE PTR [rsp+0x44],bl
0x00ebb0eb: jmp    0x140ebb212
0x00ebb0f0: lea    rdx,[rip+0x873411]        # 0x14172e508 ; literal="[SOUND_PRODUCTION:STRUCK:BODY:VIB]"
0x00ebb0f7: call   0x1400bb870
0x00ebb0fc: mov    BYTE PTR [rsp+0x44],bl
0x00ebb100: jmp    0x140ebb212
0x00ebb105: cmp    BYTE PTR [rsp+0x40],bl
0x00ebb109: je     0x140ebb121
0x00ebb10b: lea    rdx,[rip+0x8733f6]        # 0x14172e508 ; literal="[SOUND_PRODUCTION:STRUCK:BODY:VIB]"
0x00ebb112: lea    rcx,[rsp+0x28]
0x00ebb117: call   0x1400bb870
0x00ebb11c: jmp    0x140ebb212
0x00ebb121: cmp    BYTE PTR [rsp+0x20],bl
0x00ebb125: je     0x140ebb13d
0x00ebb127: lea    rdx,[rip+0x8733a2]        # 0x14172e4d0 ; literal="[SOUND_PRODUCTION:AIR_OVER_FREE_REED:BELLOWS:BODY]"
0x00ebb12e: lea    rcx,[rsp+0x28]
0x00ebb133: call   0x1400bb870
0x00ebb138: jmp    0x140ebb210
0x00ebb13d: test   dil,dil
0x00ebb140: je     0x140ebb19c
0x00ebb142: mov    edi,0x3
0x00ebb147: mov    ecx,edi
0x00ebb149: call   0x140071ec0
0x00ebb14e: test   eax,eax
0x00ebb150: je     0x140ebb169
0x00ebb152: lea    rdx,[rip+0x87340f]        # 0x14172e568 ; literal="[SOUND_PRODUCTION:AIR_OVER_REED:BELLOWS:VIB]"
0x00ebb159: lea    rcx,[rsp+0x28]
0x00ebb15e: call   0x1400bb870
0x00ebb163: mov    bl,0x1
0x00ebb165: movzx  r15d,bl
0x00ebb169: mov    ecx,edi
0x00ebb16b: call   0x140071ec0
0x00ebb170: test   eax,eax
0x00ebb172: je     0x140ebb18b
0x00ebb174: lea    rdx,[rip+0x8733b5]        # 0x14172e530 ; literal="[SOUND_PRODUCTION:AIR_OVER_FREE_REED:BELLOWS:VIB]"
0x00ebb17b: lea    rcx,[rsp+0x28]
0x00ebb180: call   0x1400bb870
0x00ebb185: mov    bl,0x1
0x00ebb187: movzx  r14d,bl
0x00ebb18b: mov    ecx,edi
0x00ebb18d: call   0x140071ec0
0x00ebb192: test   eax,eax
0x00ebb194: jne    0x140ebb1fc
0x00ebb196: test   bl,bl
0x00ebb198: je     0x140ebb147
0x00ebb19a: jmp    0x140ebb210
0x00ebb19c: cmp    BYTE PTR [rsp+0x43],bl
0x00ebb1a0: je     0x140ebb212
0x00ebb1a2: mov    edi,0x3
0x00ebb1a7: mov    ecx,edi
0x00ebb1a9: call   0x140071ec0
0x00ebb1ae: test   eax,eax
0x00ebb1b0: je     0x140ebb1c9
0x00ebb1b2: lea    rdx,[rip+0x8733af]        # 0x14172e568 ; literal="[SOUND_PRODUCTION:AIR_OVER_REED:BELLOWS:VIB]"
0x00ebb1b9: lea    rcx,[rsp+0x28]
0x00ebb1be: call   0x1400bb870
0x00ebb1c3: mov    bl,0x1
0x00ebb1c5: movzx  r15d,bl
0x00ebb1c9: mov    ecx,edi
0x00ebb1cb: call   0x140071ec0
0x00ebb1d0: test   eax,eax
0x00ebb1d2: je     0x140ebb1eb
0x00ebb1d4: lea    rdx,[rip+0x873355]        # 0x14172e530 ; literal="[SOUND_PRODUCTION:AIR_OVER_FREE_REED:BELLOWS:VIB]"
0x00ebb1db: lea    rcx,[rsp+0x28]
0x00ebb1e0: call   0x1400bb870
0x00ebb1e5: mov    bl,0x1
0x00ebb1e7: movzx  r14d,bl
0x00ebb1eb: mov    ecx,edi
0x00ebb1ed: call   0x140071ec0
0x00ebb1f2: test   eax,eax
0x00ebb1f4: jne    0x140ebb1fc
0x00ebb1f6: test   bl,bl
0x00ebb1f8: je     0x140ebb1a7
0x00ebb1fa: jmp    0x140ebb210
0x00ebb1fc: lea    rdx,[rip+0x873465]        # 0x14172e668 ; literal="[SOUND_PRODUCTION:AIR_AGAINST_FIPPLE:BELLOWS:VIB]"
0x00ebb203: lea    rcx,[rsp+0x28]
0x00ebb208: call   0x1400bb870
0x00ebb20d: mov    r13b,0x1
0x00ebb210: mov    bl,0x1
0x00ebb212: lea    rdx,[rip+0x87343f]        # 0x14172e658 ; literal="[VOLUME_mB:"
0x00ebb219: lea    rcx,[rbp+0x260]
0x00ebb220: call   0x14006f510
0x00ebb225: movzx  eax,bl
0x00ebb228: neg    al
0x00ebb22a: sbb    ecx,ecx
0x00ebb22c: and    ecx,0x2710
0x00ebb232: lea    rdx,[rbp+0x260]
0x00ebb239: call   0x140529cf0
0x00ebb23e: lea    rdx,[rip+0x7581bf]        # 0x141613404 ; literal=":"
0x00ebb245: lea    rcx,[rbp+0x260]
0x00ebb24c: call   0x14006f4f0
0x00ebb251: lea    rdx,[rbp+0x260]
0x00ebb258: mov    ecx,0x2710
0x00ebb25d: call   0x140529cf0
0x00ebb262: lea    rdx,[rip+0x73d3fb]        # 0x1415f8664 ; literal="]"
0x00ebb269: lea    rcx,[rbp+0x260]
0x00ebb270: call   0x14006f4f0
0x00ebb275: lea    rdx,[rbp+0x260]
0x00ebb27c: lea    rcx,[rsp+0x28]
0x00ebb281: call   0x1400bb700
0x00ebb286: lea    rdx,[rip+0x87343b]        # 0x14172e6c8 ; literal="[PITCH_CHOICE:KEYBOARD:KEYBOARD]"
0x00ebb28d: lea    rcx,[rsp+0x28]
0x00ebb292: call   0x1400bb870
0x00ebb297: xor    dil,dil
0x00ebb29a: cmp    esi,0x9c40
0x00ebb2a0: jl     0x140ebb2cb
0x00ebb2a2: mov    ecx,0x6
0x00ebb2a7: call   0x140071ec0
0x00ebb2ac: test   eax,eax
0x00ebb2ae: jne    0x140ebb2cb
0x00ebb2b0: cmp    BYTE PTR [rsp+0x20],dil
0x00ebb2b5: jne    0x140ebb2cb
0x00ebb2b7: lea    rdx,[rip+0x8733e2]        # 0x14172e6a0 ; literal="[PITCH_CHOICE:FOOT_PEDALS:VIB:BODY]"
0x00ebb2be: lea    rcx,[rsp+0x28]
0x00ebb2c3: call   0x1400bb870
0x00ebb2c8: mov    dil,0x1
0x00ebb2cb: lea    rcx,[rbp+0x178]
0x00ebb2d2: call   0x140296b90
0x00ebb2d7: nop
0x00ebb2d8: cmp    BYTE PTR [rsp+0x41],0x0
0x00ebb2dd: jne    0x140ebb2eb
0x00ebb2df: cmp    BYTE PTR [rsp+0x40],0x0
0x00ebb2e4: jne    0x140ebb2eb
0x00ebb2e6: mov    r9b,0x1
0x00ebb2e9: jmp    0x140ebb2ee
0x00ebb2eb: xor    r9d,r9d
0x00ebb2ee: mov    r8d,DWORD PTR [rsp+0x6c]
0x00ebb2f3: mov    edx,r12d
0x00ebb2f6: lea    rcx,[rbp+0x178]
0x00ebb2fd: call   0x140eb2f60
0x00ebb302: lea    rdx,[rbp+0x178]
0x00ebb309: lea    rcx,[rsp+0x28]
0x00ebb30e: call   0x140eb36d0
0x00ebb313: lea    rdx,[rip+0x8732ee]        # 0x14172e608 ; literal="[MUSIC_SKILL:PLAY_KEYBOARD_INSTRUMENT]"
0x00ebb31a: lea    rcx,[rsp+0x28]
0x00ebb31f: call   0x1400bb870
0x00ebb324: lea    rdx,[rip+0x8732cd]        # 0x14172e5f8 ; literal="[DESCRIPTION:"
0x00ebb32b: lea    rcx,[rbp+0x260]
0x00ebb332: call   0x14006f510
0x00ebb337: lea    rcx,[rbp+0x2e0]
0x00ebb33e: call   0x14006f620
0x00ebb343: nop
0x00ebb344: lea    rdx,[rip+0x72d679]        # 0x1415e89c4 ; literal="The "
0x00ebb34b: lea    rcx,[rbp+0x2e0]
0x00ebb352: call   0x14006f510
0x00ebb357: lea    rdx,[rbp+0x3c0]
0x00ebb35e: lea    rcx,[rbp+0x2e0]
0x00ebb365: call   0x1400b9ca0
0x00ebb36a: lea    rdx,[rip+0x789283]        # 0x1416445f4 ; literal=" is a "
0x00ebb371: lea    rcx,[rbp+0x2e0]
0x00ebb378: call   0x14006f4f0
0x00ebb37d: cmp    esi,0xea60
0x00ebb383: jl     0x140ebb38e
0x00ebb385: lea    rdx,[rip+0x8732bc]        # 0x14172e648 ; literal="huge stationary"
0x00ebb38c: jmp    0x140ebb3d7
0x00ebb38e: cmp    esi,0x9c40
0x00ebb394: jl     0x140ebb39f
0x00ebb396: lea    rdx,[rip+0x873293]        # 0x14172e630 ; literal="large stationary"
0x00ebb39d: jmp    0x140ebb3d7
0x00ebb39f: cmp    esi,0x7530
0x00ebb3a5: jl     0x140ebb3b0
0x00ebb3a7: lea    rdx,[rip+0x8726f2]        # 0x14172daa0 ; literal="large hand-held"
0x00ebb3ae: jmp    0x140ebb3d7
0x00ebb3b0: cmp    esi,0x2710
0x00ebb3b6: jl     0x140ebb3c1
0x00ebb3b8: lea    rdx,[rip+0x8726c9]        # 0x14172da88 ; literal="mid-size hand-held"
0x00ebb3bf: jmp    0x140ebb3d7
0x00ebb3c1: cmp    esi,0x1388
0x00ebb3c7: lea    rdx,[rip+0x8726f2]        # 0x14172dac0 ; literal="small hand-held"
0x00ebb3ce: jge    0x140ebb3d7
0x00ebb3d0: lea    rdx,[rip+0x8726d9]        # 0x14172dab0 ; literal="tiny hand-held"
0x00ebb3d7: lea    rcx,[rbp+0x2e0]
0x00ebb3de: call   0x14006f4f0
0x00ebb3e3: lea    rdx,[rip+0x728336]        # 0x1415e3720 ; literal=" "
0x00ebb3ea: lea    rcx,[rbp+0x2e0]
0x00ebb3f1: call   0x14006f4f0
0x00ebb3f6: lea    rdx,[rbp+0x2e0]
0x00ebb3fd: mov    ecx,DWORD PTR [rbp+0x4]
0x00ebb400: call   0x140eb3dd0
0x00ebb405: lea    rdx,[rip+0x8725e4]        # 0x14172d9f0 ; literal=" musical instrument"
0x00ebb40c: lea    rcx,[rbp+0x2e0]
0x00ebb413: call   0x14006f4f0
0x00ebb418: movzx  esi,BYTE PTR [rsp+0x43]
0x00ebb41d: test   sil,sil
0x00ebb420: jne    0x140ebb42d
0x00ebb422: cmp    BYTE PTR [rsp+0x42],sil
0x00ebb427: je     0x140ebb5e5
0x00ebb42d: lea    rdx,[rip+0x8725ac]        # 0x14172d9e0 ; literal=" which uses a "
0x00ebb434: lea    rcx,[rbp+0x2e0]
0x00ebb43b: call   0x14006f4f0
0x00ebb440: lea    rdx,[rbp+0x2e0]
0x00ebb447: mov    ecx,DWORD PTR [rbp-0x5c]
0x00ebb44a: call   0x140eb3dd0
0x00ebb44f: lea    rcx,[rbp+0x2e0]
0x00ebb456: test   sil,sil
0x00ebb459: lea    rdx,[rip+0x8725e0]        # 0x14172da40 ; literal=" pump to send water into a chamber, ultimately supplying air to blow"
0x00ebb460: jne    0x140ebb469
0x00ebb462: lea    rdx,[rip+0x87259f]        # 0x14172da08 ; literal=" bellows to pressurize air, ultimately blowing it"
0x00ebb469: call   0x14006f4f0
0x00ebb46e: lea    rdx,[rip+0x872763]        # 0x14172dbd8 ; literal=" through any of "
0x00ebb475: lea    rcx,[rbp+0x2e0]
0x00ebb47c: call   0x14006f4f0
0x00ebb481: lea    rcx,[rbp+0x1000]
0x00ebb488: call   0x14006f620
0x00ebb48d: nop
0x00ebb48e: lea    rdx,[rbp+0x1000]
0x00ebb495: mov    ecx,DWORD PTR [rsp+0x60]
0x00ebb499: call   0x14052bd80
0x00ebb49e: lea    rdx,[rbp+0x1000]
0x00ebb4a5: lea    rcx,[rbp+0x2e0]
0x00ebb4ac: call   0x1400b9ca0
0x00ebb4b1: lea    rdx,[rip+0x728268]        # 0x1415e3720 ; literal=" "
0x00ebb4b8: lea    rcx,[rbp+0x2e0]
0x00ebb4bf: call   0x14006f4f0
0x00ebb4c4: lea    rdx,[rbp+0x2e0]
0x00ebb4cb: mov    ecx,DWORD PTR [rbp-0x6c]
0x00ebb4ce: call   0x140eb3dd0
0x00ebb4d3: lea    rdx,[rip+0x8726ee]        # 0x14172dbc8 ; literal=" pipes.  "
0x00ebb4da: lea    rcx,[rbp+0x2e0]
0x00ebb4e1: call   0x14006f4f0
0x00ebb4e6: lea    rdx,[rip+0x87271b]        # 0x14172dc08 ; literal="The musician directs air through chosen pipes by playing a "
0x00ebb4ed: lea    rcx,[rbp+0x2e0]
0x00ebb4f4: call   0x14006f4f0
0x00ebb4f9: lea    rdx,[rbp+0x2e0]
0x00ebb500: mov    ecx,DWORD PTR [rbp-0x68]
0x00ebb503: call   0x140eb3dd0
0x00ebb508: lea    rdx,[rip+0x872c71]        # 0x14172e180 ; literal=" keyboard"
0x00ebb50f: lea    rcx,[rbp+0x2e0]
0x00ebb516: call   0x14006f4f0
0x00ebb51b: test   dil,dil
0x00ebb51e: je     0x140ebb533
0x00ebb520: lea    rdx,[rip+0x8726c9]        # 0x14172dbf0 ; literal=" and a pedalboard"
0x00ebb527: lea    rcx,[rbp+0x2e0]
0x00ebb52e: call   0x14006f4f0
0x00ebb533: lea    rdx,[rip+0x73d316]        # 0x1415f8850 ; literal=".  "
0x00ebb53a: lea    rcx,[rbp+0x2e0]
0x00ebb541: call   0x14006f4f0
0x00ebb546: test   r15b,r15b
0x00ebb549: je     0x140ebb585
0x00ebb54b: lea    rcx,[rbp+0x2e0]
0x00ebb552: test   r14b,r14b
0x00ebb555: je     0x140ebb56e
0x00ebb557: test   r13b,r13b
0x00ebb55a: je     0x140ebb565
0x00ebb55c: lea    rdx,[rip+0x8725ad]        # 0x14172db10 ; literal="The instrument has flue pipes and both single reed and free reed pipes.  "
0x00ebb563: jmp    0x140ebb5bb
0x00ebb565: lea    rdx,[rip+0x872564]        # 0x14172dad0 ; literal="The instrument has both single reed and free reed pipes.  "
0x00ebb56c: jmp    0x140ebb5bb
0x00ebb56e: test   r13b,r13b
0x00ebb571: je     0x140ebb57c
0x00ebb573: lea    rdx,[rip+0x8725e6]        # 0x14172db60 ; literal="The instrument has flue pipes and free reed pipes.  "
0x00ebb57a: jmp    0x140ebb5bb
0x00ebb57c: lea    rdx,[rip+0x872765]        # 0x14172dce8 ; literal="All of the pipes are single reed.  "
0x00ebb583: jmp    0x140ebb5bb
0x00ebb585: test   r14b,r14b
0x00ebb588: je     0x140ebb5a8
0x00ebb58a: lea    rcx,[rbp+0x2e0]
0x00ebb591: test   r13b,r13b
0x00ebb594: je     0x140ebb59f
0x00ebb596: lea    rdx,[rip+0x8725fb]        # 0x14172db98 ; literal="The instrument has flue pipes and reed pipes.  "
0x00ebb59d: jmp    0x140ebb5bb
0x00ebb59f: lea    rdx,[rip+0x87271a]        # 0x14172dcc0 ; literal="All of the pipes are free reed.  "
0x00ebb5a6: jmp    0x140ebb5bb
0x00ebb5a8: test   r13b,r13b
0x00ebb5ab: je     0x140ebb5c0
0x00ebb5ad: lea    rdx,[rip+0x872774]        # 0x14172dd28 ; literal="All of the pipes are flue pipes.  "
0x00ebb5b4: lea    rcx,[rbp+0x2e0]
0x00ebb5bb: call   0x14006f4f0
0x00ebb5c0: mov    esi,DWORD PTR [rsp+0x6c]
0x00ebb5c4: mov    r8d,esi
0x00ebb5c7: mov    edx,r12d
0x00ebb5ca: lea    rcx,[rbp+0x2e0]
0x00ebb5d1: call   0x140eb1f50
0x00ebb5d6: nop
0x00ebb5d7: lea    rcx,[rbp+0x1000]
0x00ebb5de: call   0x140067dc0
0x00ebb5e3: jmp    0x140ebb5e9
0x00ebb5e5: mov    esi,DWORD PTR [rsp+0x6c]
0x00ebb5e9: cmp    BYTE PTR [rsp+0x20],0x0
0x00ebb5ee: je     0x140ebb670
0x00ebb5f4: lea    rdx,[rip+0x872715]        # 0x14172dd10 ; literal=".  The musician uses a "
0x00ebb5fb: lea    rcx,[rbp+0x2e0]
0x00ebb602: call   0x14006f4f0
0x00ebb607: lea    rdx,[rbp+0x2e0]
0x00ebb60e: mov    ecx,DWORD PTR [rbp-0x5c]
0x00ebb611: call   0x140eb3dd0
0x00ebb616: lea    rdx,[rip+0x872653]        # 0x14172dc70 ; literal=" bellows to send air over interior reeds.  "
0x00ebb61d: lea    rcx,[rbp+0x2e0]
0x00ebb624: call   0x14006f4f0
0x00ebb629: lea    rdx,[rip+0x872618]        # 0x14172dc48 ; literal="The desired pitch is selected using a "
0x00ebb630: lea    rcx,[rbp+0x2e0]
0x00ebb637: call   0x14006f4f0
0x00ebb63c: lea    rdx,[rbp+0x2e0]
0x00ebb643: mov    ecx,DWORD PTR [rbp-0x68]
0x00ebb646: call   0x140eb3dd0
0x00ebb64b: lea    rdx,[rip+0x87265e]        # 0x14172dcb0 ; literal=" keyboard.  "
0x00ebb652: lea    rcx,[rbp+0x2e0]
0x00ebb659: call   0x14006f4f0
0x00ebb65e: mov    r8d,esi
0x00ebb661: mov    edx,r12d
0x00ebb664: lea    rcx,[rbp+0x2e0]
0x00ebb66b: call   0x140eb1f50
0x00ebb670: cmp    BYTE PTR [rsp+0x41],0x0
0x00ebb675: je     0x140ebb7b0
0x00ebb67b: lea    rdx,[rip+0x87261e]        # 0x14172dca0 ; literal=" which houses "
0x00ebb682: lea    rcx,[rbp+0x2e0]
0x00ebb689: call   0x14006f4f0
0x00ebb68e: lea    rcx,[rbp+0x1100]
0x00ebb695: call   0x14006f620
0x00ebb69a: nop
0x00ebb69b: lea    rdx,[rbp+0x1100]
0x00ebb6a2: mov    r14d,DWORD PTR [rsp+0x60]
0x00ebb6a7: mov    ecx,r14d
0x00ebb6aa: call   0x14052bd80
0x00ebb6af: lea    rdx,[rbp+0x1100]
0x00ebb6b6: lea    rcx,[rbp+0x2e0]
0x00ebb6bd: call   0x1400b9ca0
0x00ebb6c2: lea    rdx,[rip+0x728057]        # 0x1415e3720 ; literal=" "
0x00ebb6c9: lea    rcx,[rbp+0x2e0]
0x00ebb6d0: call   0x14006f4f0
0x00ebb6d5: lea    rdx,[rbp+0x2e0]
0x00ebb6dc: mov    ecx,DWORD PTR [rbp-0x6c]
0x00ebb6df: call   0x140eb3dd0
0x00ebb6e4: lea    rdx,[rip+0x8726f5]        # 0x14172dde0 ; literal=" strings.  "
0x00ebb6eb: lea    rcx,[rbp+0x2e0]
0x00ebb6f2: call   0x14006f4f0
0x00ebb6f7: lea    rdx,[rip+0x8726ca]        # 0x14172ddc8 ; literal="The musician uses a "
0x00ebb6fe: lea    rcx,[rbp+0x2e0]
0x00ebb705: call   0x14006f4f0
0x00ebb70a: lea    rdx,[rbp+0x2e0]
0x00ebb711: mov    ecx,DWORD PTR [rbp-0x68]
0x00ebb714: call   0x140eb3dd0
0x00ebb719: lea    rdx,[rip+0x8726e8]        # 0x14172de08 ; literal=" keyboard "
0x00ebb720: lea    rcx,[rbp+0x2e0]
0x00ebb727: call   0x14006f4f0
0x00ebb72c: test   dil,dil
0x00ebb72f: je     0x140ebb744
0x00ebb731: lea    rdx,[rip+0x8726b8]        # 0x14172ddf0 ; literal="and a pedalboard "
0x00ebb738: lea    rcx,[rbp+0x2e0]
0x00ebb73f: call   0x14006f4f0
0x00ebb744: lea    rdx,[rip+0x872615]        # 0x14172dd60 ; literal="to select which of these strings are "
0x00ebb74b: lea    rcx,[rbp+0x2e0]
0x00ebb752: call   0x14006f4f0
0x00ebb757: lea    rcx,[rbp+0x2e0]
0x00ebb75e: cmp    BYTE PTR [rsp+0x44],0x0
0x00ebb763: lea    rdx,[rip+0x8725e6]        # 0x14172dd50 ; literal="plucked.  "
0x00ebb76a: jne    0x140ebb773
0x00ebb76c: lea    rdx,[rip+0x872645]        # 0x14172ddb8 ; literal="struck.  "
0x00ebb773: call   0x14006f4f0
0x00ebb778: mov    r8d,esi
0x00ebb77b: mov    edx,r12d
0x00ebb77e: lea    rcx,[rbp+0x2e0]
0x00ebb785: call   0x140eb1f50
0x00ebb78a: test   bl,bl
0x00ebb78c: je     0x140ebb7a2
0x00ebb78e: lea    rdx,[rip+0x8725f3]        # 0x14172dd88 ; literal="The musician cannot control the volume.  "
0x00ebb795: lea    rcx,[rbp+0x2e0]
0x00ebb79c: call   0x14006f4f0
0x00ebb7a1: nop
0x00ebb7a2: lea    rcx,[rbp+0x1100]
0x00ebb7a9: call   0x140067dc0
0x00ebb7ae: jmp    0x140ebb7b5
0x00ebb7b0: mov    r14d,DWORD PTR [rsp+0x60]
0x00ebb7b5: cmp    BYTE PTR [rsp+0x40],0x0
0x00ebb7ba: je     0x140ebb8b6
0x00ebb7c0: lea    rdx,[rip+0x8726a1]        # 0x14172de68 ; literal=" above which hang "
0x00ebb7c7: lea    rcx,[rbp+0x2e0]
0x00ebb7ce: call   0x14006f4f0
0x00ebb7d3: lea    rcx,[rbp+0x1120]
0x00ebb7da: call   0x14006f620
0x00ebb7df: nop
0x00ebb7e0: lea    rdx,[rbp+0x1120]
0x00ebb7e7: mov    ecx,r14d
0x00ebb7ea: call   0x14052bd80
0x00ebb7ef: lea    rdx,[rbp+0x1120]
0x00ebb7f6: lea    rcx,[rbp+0x2e0]
0x00ebb7fd: call   0x1400b9ca0
0x00ebb802: lea    rdx,[rip+0x727f17]        # 0x1415e3720 ; literal=" "
0x00ebb809: lea    rcx,[rbp+0x2e0]
0x00ebb810: call   0x14006f4f0
0x00ebb815: lea    rdx,[rbp+0x2e0]
0x00ebb81c: mov    ecx,DWORD PTR [rbp-0x6c]
0x00ebb81f: call   0x140eb3dd0
0x00ebb824: lea    rdx,[rip+0x87262d]        # 0x14172de58 ; literal=" bells.  "
0x00ebb82b: lea    rcx,[rbp+0x2e0]
0x00ebb832: call   0x14006f4f0
0x00ebb837: lea    rdx,[rip+0x87258a]        # 0x14172ddc8 ; literal="The musician uses a "
0x00ebb83e: lea    rcx,[rbp+0x2e0]
0x00ebb845: call   0x14006f4f0
0x00ebb84a: lea    rdx,[rbp+0x2e0]
0x00ebb851: mov    ecx,DWORD PTR [rbp-0x68]
0x00ebb854: call   0x140eb3dd0
0x00ebb859: lea    rdx,[rip+0x8725a8]        # 0x14172de08 ; literal=" keyboard "
0x00ebb860: lea    rcx,[rbp+0x2e0]
0x00ebb867: call   0x14006f4f0
0x00ebb86c: test   dil,dil
0x00ebb86f: je     0x140ebb884
0x00ebb871: lea    rdx,[rip+0x872578]        # 0x14172ddf0 ; literal="and a pedalboard "
0x00ebb878: lea    rcx,[rbp+0x2e0]
0x00ebb87f: call   0x14006f4f0
0x00ebb884: lea    rdx,[rip+0x8725f5]        # 0x14172de80 ; literal="to select which of these bells are struck.  "
0x00ebb88b: lea    rcx,[rbp+0x2e0]
0x00ebb892: call   0x14006f4f0
0x00ebb897: mov    r8d,esi
0x00ebb89a: mov    edx,r12d
0x00ebb89d: lea    rcx,[rbp+0x2e0]
0x00ebb8a4: call   0x140eb1f50
0x00ebb8a9: nop
0x00ebb8aa: lea    rcx,[rbp+0x1120]
0x00ebb8b1: call   0x140067dc0
0x00ebb8b6: lea    rdx,[rbp+0x178]
0x00ebb8bd: lea    rcx,[rbp+0x2e0]
0x00ebb8c4: call   0x140eb3a60
0x00ebb8c9: lea    rcx,[rbp+0x2e0]
0x00ebb8d0: call   0x14006f2c0
0x00ebb8d5: lea    rdx,[rax-0x1]
0x00ebb8d9: lea    rcx,[rbp+0x2e0]
0x00ebb8e0: call   0x1400fb4d0
0x00ebb8e5: cmp    BYTE PTR [rax],0x20
0x00ebb8e8: jne    0x140ebb930
0x00ebb8ea: nop    WORD PTR [rax+rax*1+0x0]
0x00ebb8f0: lea    rcx,[rbp+0x2e0]
0x00ebb8f7: call   0x14006f2c0
0x00ebb8fc: lea    rdx,[rax-0x1]
0x00ebb900: xor    r8d,r8d
0x00ebb903: lea    rcx,[rbp+0x2e0]
0x00ebb90a: call   0x1400e11c0
0x00ebb90f: lea    rcx,[rbp+0x2e0]
0x00ebb916: call   0x14006f2c0
0x00ebb91b: lea    rdx,[rax-0x1]
0x00ebb91f: lea    rcx,[rbp+0x2e0]
0x00ebb926: call   0x1400fb4d0
0x00ebb92b: cmp    BYTE PTR [rax],0x20
0x00ebb92e: je     0x140ebb8f0
0x00ebb930: lea    rdx,[rbp+0x2e0]
0x00ebb937: lea    rcx,[rbp+0x260]
0x00ebb93e: call   0x1400b9ca0
0x00ebb943: lea    rdx,[rip+0x73cd1a]        # 0x1415f8664 ; literal="]"
0x00ebb94a: lea    rcx,[rbp+0x260]
0x00ebb951: call   0x14006f4f0
0x00ebb956: lea    rdx,[rbp+0x260]
0x00ebb95d: lea    rcx,[rsp+0x28]
0x00ebb962: call   0x1400bb700
0x00ebb967: nop
0x00ebb968: lea    rcx,[rbp+0x2e0]
0x00ebb96f: call   0x140067dc0
0x00ebb974: nop
0x00ebb975: lea    rcx,[rbp+0x178]
0x00ebb97c: call   0x140cc88d0
0x00ebb981: nop
0x00ebb982: lea    rcx,[rbp+0x6e0]
0x00ebb989: call   0x140067dc0
0x00ebb98e: nop
0x00ebb98f: lea    rcx,[rbp+0x560]
0x00ebb996: call   0x140067dc0
0x00ebb99b: nop
0x00ebb99c: lea    rcx,[rbp+0x700]
0x00ebb9a3: call   0x140067dc0
0x00ebb9a8: nop
0x00ebb9a9: lea    rcx,[rbp+0x720]
0x00ebb9b0: call   0x140067dc0
0x00ebb9b5: nop
0x00ebb9b6: lea    rcx,[rbp+0x260]
0x00ebb9bd: call   0x140067dc0
0x00ebb9c2: nop
0x00ebb9c3: lea    rcx,[rbp+0x4e0]
0x00ebb9ca: call   0x140067dc0
0x00ebb9cf: nop
0x00ebb9d0: lea    rcx,[rbp+0x3c0]
0x00ebb9d7: call   0x140067dc0
0x00ebb9dc: mov    ebx,DWORD PTR [rsp+0x70]
0x00ebb9e0: inc    ebx
0x00ebb9e2: mov    DWORD PTR [rsp+0x70],ebx
0x00ebb9e6: mov    r14d,DWORD PTR [rsp+0x5c]
0x00ebb9eb: inc    r14d
0x00ebb9ee: mov    DWORD PTR [rsp+0x5c],r14d
0x00ebb9f3: mov    rax,QWORD PTR [rsp+0x50]
0x00ebb9f8: cmp    ebx,DWORD PTR [rax+0xd8]
0x00ebb9fe: mov    ebx,DWORD PTR [rbp-0x64]
0x00ebba01: mov    r15d,0x0
0x00ebba07: mov    r12d,0x1
0x00ebba0d: jl     0x140eb9912
0x00ebba13: mov    r14,rax
0x00ebba16: mov    DWORD PTR [rsp+0x70],r15d
0x00ebba1b: cmp    DWORD PTR [r14+0xdc],0x0
0x00ebba23: jle    0x140ebf997
0x00ebba29: mov    r14d,r12d
0x00ebba2c: mov    DWORD PTR [rsp+0x6c],r12d
0x00ebba31: lea    rcx,[rbp+0x340]
0x00ebba38: call   0x14006f620
0x00ebba3d: nop
0x00ebba3e: cmp    ebx,0xffffffff
0x00ebba41: je     0x140ebbbbb
0x00ebba47: movsxd rdx,ebx
0x00ebba4a: lea    rcx,[rip+0x162bc3f]        # 0x1424e7690
0x00ebba51: call   0x14006f1b0
0x00ebba56: mov    rsi,QWORD PTR [rax]
0x00ebba59: lea    rcx,[rsi+0x50]
0x00ebba5d: call   0x14006ede0
0x00ebba62: mov    rdi,rax
0x00ebba65: test   eax,eax
0x00ebba67: jle    0x140ebbbbb
0x00ebba6d: mov    ebx,r15d
0x00ebba70: mov    ecx,edi
0x00ebba72: call   0x140071ec0
0x00ebba77: movsxd rdx,eax
0x00ebba7a: lea    rcx,[rsi+0x50]
0x00ebba7e: call   0x14006f1b0
0x00ebba83: mov    rdx,QWORD PTR [rax]
0x00ebba86: lea    rcx,[rbp+0x340]
0x00ebba8d: call   0x14006f530
0x00ebba92: lea    rdx,[rbp+0x38]
0x00ebba96: lea    rcx,[rip+0x162b24b]        # 0x1424e6ce8
0x00ebba9d: call   0x14006f1d0
0x00ebbaa2: lea    rdx,[rbp+0xa0]
0x00ebbaa9: lea    rcx,[rip+0x162b238]        # 0x1424e6ce8
0x00ebbab0: call   0x14006f1c0
0x00ebbab5: lea    r8,[rbp+0xa0]
0x00ebbabc: lea    rdx,[rbp-0x76]
0x00ebbac0: lea    rcx,[rbp+0x38]
0x00ebbac4: call   0x14006edb0
0x00ebbac9: xor    edx,edx
0x00ebbacb: movzx  ecx,BYTE PTR [rax]
0x00ebbace: call   0x140065740
0x00ebbad3: test   al,al
0x00ebbad5: je     0x140ebbb26
0x00ebbad7: lea    rcx,[rbp+0x38]
0x00ebbadb: call   0x14006eda0
0x00ebbae0: mov    rcx,QWORD PTR [rax]
0x00ebbae3: add    rcx,0x68
0x00ebbae7: lea    rdx,[rbp+0x340]
0x00ebbaee: call   0x14006fdd0
0x00ebbaf3: test   al,al
0x00ebbaf5: jne    0x140ebbbae
0x00ebbafb: lea    rcx,[rbp+0x38]
0x00ebbaff: call   0x14006ed90
0x00ebbb04: lea    r8,[rbp+0xa0]
0x00ebbb0b: lea    rdx,[rbp-0x76]
0x00ebbb0f: lea    rcx,[rbp+0x38]
0x00ebbb13: call   0x14006edb0
0x00ebbb18: xor    edx,edx
0x00ebbb1a: movzx  ecx,BYTE PTR [rax]
0x00ebbb1d: call   0x140065740
0x00ebbb22: test   al,al
0x00ebbb24: jne    0x140ebbad7
0x00ebbb26: lea    rdx,[rbp+0x40]
0x00ebbb2a: lea    rcx,[rbp+0x78]
0x00ebbb2e: call   0x14006f1d0
0x00ebbb33: lea    rdx,[rbp+0xa8]
0x00ebbb3a: lea    rcx,[rbp+0x78]
0x00ebbb3e: call   0x14006f1c0
0x00ebbb43: lea    r8,[rbp+0xa8]
0x00ebbb4a: lea    rdx,[rbp-0x6f]
0x00ebbb4e: lea    rcx,[rbp+0x40]
0x00ebbb52: call   0x14006edb0
0x00ebbb57: xor    edx,edx
0x00ebbb59: movzx  ecx,BYTE PTR [rax]
0x00ebbb5c: call   0x140065740
0x00ebbb61: test   al,al
0x00ebbb63: je     0x140ebbbc7
0x00ebbb65: lea    rcx,[rbp+0x40]
0x00ebbb69: call   0x14006eda0
0x00ebbb6e: lea    rdx,[rbp+0x340]
0x00ebbb75: mov    rcx,QWORD PTR [rax]
0x00ebbb78: call   0x14006fdd0
0x00ebbb7d: test   al,al
0x00ebbb7f: jne    0x140ebbbae
0x00ebbb81: lea    rcx,[rbp+0x40]
0x00ebbb85: call   0x14006ed90
0x00ebbb8a: lea    r8,[rbp+0xa8]
0x00ebbb91: lea    rdx,[rbp-0x6f]
0x00ebbb95: lea    rcx,[rbp+0x40]
0x00ebbb99: call   0x14006edb0
0x00ebbb9e: xor    edx,edx
0x00ebbba0: movzx  ecx,BYTE PTR [rax]
0x00ebbba3: call   0x140065740
0x00ebbba8: test   al,al
0x00ebbbaa: jne    0x140ebbb65
0x00ebbbac: jmp    0x140ebbbc7
0x00ebbbae: inc    ebx
0x00ebbbb0: cmp    ebx,0x19
0x00ebbbb3: jl     0x140ebba70
0x00ebbbb9: jmp    0x140ebbbc7
0x00ebbbbb: lea    rcx,[rbp+0x340]
0x00ebbbc2: call   0x14092e410
0x00ebbbc7: lea    rdx,[rbp+0x340]
0x00ebbbce: lea    rcx,[rbp+0x78]
0x00ebbbd2: call   0x1400bb700
0x00ebbbd7: lea    rdx,[rbp+0x760]
0x00ebbbde: lea    rcx,[rbp+0x420]
0x00ebbbe5: call   0x14006f560
0x00ebbbea: nop
0x00ebbbeb: lea    rdx,[rip+0x87228a]        # 0x14172de7c ; literal="INS"
0x00ebbbf2: lea    rcx,[rbp+0x420]
0x00ebbbf9: call   0x14006f4f0
0x00ebbbfe: lea    rdx,[rbp+0x420]
0x00ebbc05: mov    ecx,r14d
0x00ebbc08: call   0x140529cf0
0x00ebbc0d: lea    rdx,[rbp+0x420]
0x00ebbc14: lea    rcx,[rbp+0x100]
0x00ebbc1b: call   0x1400bb700
0x00ebbc20: lea    rcx,[rbp+0x200]
0x00ebbc27: call   0x14006f620
0x00ebbc2c: nop
0x00ebbc2d: mov    ecx,0x27
0x00ebbc32: call   0x140071ec0
0x00ebbc37: inc    eax
0x00ebbc39: imul   r13d,eax,0x3e8
0x00ebbc40: mov    DWORD PTR [rsp+0x60],r13d
0x00ebbc45: mov    r12d,0x3e8
0x00ebbc4b: lea    rcx,[rbp+0x5e0]
0x00ebbc52: call   0x14006f620
0x00ebbc57: nop
0x00ebbc58: lea    rcx,[rbp+0x5c0]
0x00ebbc5f: call   0x14006f620
0x00ebbc64: nop
0x00ebbc65: lea    rcx,[rbp+0x5a0]
0x00ebbc6c: call   0x14006f620
0x00ebbc71: nop
0x00ebbc72: lea    rcx,[rbp+0x3e0]
0x00ebbc79: call   0x14006f620
0x00ebbc7e: nop
0x00ebbc7f: mov    DWORD PTR [rbp+0x28],r15d
0x00ebbc83: mov    DWORD PTR [rbp+0x2c],r15d
0x00ebbc87: mov    DWORD PTR [rbp-0x18],r15d
0x00ebbc8b: mov    DWORD PTR [rbp-0x7c],r15d
0x00ebbc8f: mov    BYTE PTR [rsp+0x47],0x0
0x00ebbc94: xor    sil,sil
0x00ebbc97: mov    BYTE PTR [rsp+0x45],sil
0x00ebbc9c: xor    r14b,r14b
0x00ebbc9f: mov    BYTE PTR [rsp+0x46],r14b
0x00ebbca4: mov    BYTE PTR [rsp+0x42],sil
0x00ebbca9: mov    BYTE PTR [rsp+0x48],sil
0x00ebbcae: xor    dil,dil
0x00ebbcb1: mov    BYTE PTR [rsp+0x40],dil
0x00ebbcb6: mov    BYTE PTR [rsp+0x20],sil
0x00ebbcbb: xor    al,al
0x00ebbcbd: mov    DWORD PTR [rsp+0x64],eax
0x00ebbcc1: mov    ecx,0x4
0x00ebbcc6: mov    r15d,0x1
0x00ebbccc: call   0x140071ec0
0x00ebbcd1: test   eax,eax
0x00ebbcd3: je     0x140ebd665
0x00ebbcd9: sub    eax,r15d
0x00ebbcdc: je     0x140ebcf13
0x00ebbce2: sub    eax,r15d
0x00ebbce5: je     0x140ebca92
0x00ebbceb: cmp    eax,r15d
0x00ebbcee: jne    0x140ebc450
0x00ebbcf4: mov    BYTE PTR [rsp+0x46],r15b
0x00ebbcf9: imul   ecx,r13d,0xf
0x00ebbcfd: mov    eax,0x51eb851f
0x00ebbd02: imul   ecx
0x00ebbd04: mov    ebx,edx
0x00ebbd06: sar    ebx,0x5
0x00ebbd09: mov    eax,ebx
0x00ebbd0b: shr    eax,0x1f
0x00ebbd0e: add    ebx,eax
0x00ebbd10: lea    ecx,[r13*4+0x0]
0x00ebbd18: add    ecx,r13d
0x00ebbd1b: shl    ecx,0x4
0x00ebbd1e: mov    eax,0x51eb851f
0x00ebbd23: imul   ecx
0x00ebbd25: mov    esi,edx
0x00ebbd27: sar    esi,0x5
0x00ebbd2a: mov    eax,esi
0x00ebbd2c: shr    eax,0x1f
0x00ebbd2f: add    esi,eax
0x00ebbd31: lea    ecx,[r13*4+0x0]
0x00ebbd39: add    ecx,r13d
0x00ebbd3c: mov    eax,0x51eb851f
0x00ebbd41: imul   ecx
0x00ebbd43: mov    r12d,edx
0x00ebbd46: sar    r12d,0x5
0x00ebbd4a: mov    eax,r12d
0x00ebbd4d: shr    eax,0x1f
0x00ebbd50: add    r12d,eax
0x00ebbd53: mov    ecx,0x5
0x00ebbd58: call   0x140071ec0
0x00ebbd5d: test   eax,eax
0x00ebbd5f: je     0x140ebbd71
0x00ebbd61: mov    ecx,0x36
0x00ebbd66: call   0x140071ec0
0x00ebbd6b: lea    r15d,[rax+0x7]
0x00ebbd6f: jmp    0x140ebbd7f
0x00ebbd71: mov    ecx,0x5
0x00ebbd76: call   0x140071ec0
0x00ebbd7b: lea    r15d,[rax+0x2]
0x00ebbd7f: cmp    r13d,0x1388
0x00ebbd86: jge    0x140ebbd96
0x00ebbd88: cmp    r15d,0x6
0x00ebbd8c: jle    0x140ebbdac
0x00ebbd8e: mov    r15d,0x6
0x00ebbd94: jmp    0x140ebbdac
0x00ebbd96: cmp    r13d,0x2710
0x00ebbd9d: jge    0x140ebbdac
0x00ebbd9f: cmp    r15d,0xc
0x00ebbda3: mov    eax,0xc
0x00ebbda8: cmovg  r15d,eax
0x00ebbdac: lea    rdx,[rbp+0x420]
0x00ebbdb3: lea    rcx,[rbp+0x5a0]
0x00ebbdba: call   0x14006f530
0x00ebbdbf: lea    rdx,[rip+0x87221a]        # 0x14172dfe0 ; literal="_YOKE"
0x00ebbdc6: lea    rcx,[rbp+0x5a0]
0x00ebbdcd: call   0x14006f4f0
0x00ebbdd2: lea    rdx,[rbp+0x5a0]
0x00ebbdd9: lea    rcx,[rbp-0x48]
0x00ebbddd: call   0x1400bb700
0x00ebbde2: lea    rdx,[rbp+0x420]
0x00ebbde9: lea    rcx,[rbp+0x3e0]
0x00ebbdf0: call   0x14006f530
0x00ebbdf5: lea    rdx,[rip+0x872434]        # 0x14172e230 ; literal="_BODY"
0x00ebbdfc: lea    rcx,[rbp+0x3e0]
0x00ebbe03: call   0x14006f4f0
0x00ebbe08: lea    rdx,[rbp+0x3e0]
0x00ebbe0f: lea    rcx,[rbp-0x48]
0x00ebbe13: call   0x1400bb700
0x00ebbe18: mov    edi,0x6
0x00ebbe1d: cmp    ebx,0x9c40
0x00ebbe23: mov    eax,0x3
0x00ebbe28: cmovl  edi,eax
0x00ebbe2b: mov    r14d,0x6
0x00ebbe31: cmp    esi,0x9c40
0x00ebbe37: cmovl  r14d,eax
0x00ebbe3b: lea    rdx,[rip+0x87178e]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebbe42: lea    rcx,[rbp+0x200]
0x00ebbe49: call   0x14006f510
0x00ebbe4e: lea    rdx,[rbp+0x5a0]
0x00ebbe55: lea    rcx,[rbp+0x200]
0x00ebbe5c: call   0x1400b9ca0
0x00ebbe61: lea    rdx,[rip+0x73c7fc]        # 0x1415f8664 ; literal="]"
0x00ebbe68: lea    rcx,[rbp+0x200]
0x00ebbe6f: call   0x14006f4f0
0x00ebbe74: lea    rdx,[rbp+0x200]
0x00ebbe7b: lea    rcx,[rsp+0x28]
0x00ebbe80: call   0x1400bb700
0x00ebbe85: lea    rdx,[rip+0x7ea14c]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebbe8c: lea    rcx,[rsp+0x28]
0x00ebbe91: call   0x1400bb870
0x00ebbe96: mov    rax,QWORD PTR [rsp+0x50]
0x00ebbe9b: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebbe9f: je     0x140ebbeff
0x00ebbea1: lea    rdx,[rip+0x870bb8]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebbea8: lea    rcx,[rbp+0x840]
0x00ebbeaf: call   0x1400680e0
0x00ebbeb4: nop
0x00ebbeb5: lea    rdx,[rbp+0x840]
0x00ebbebc: mov    rax,QWORD PTR [rsp+0x50]
0x00ebbec1: mov    ecx,DWORD PTR [rax+0x40]
0x00ebbec4: call   0x140529cf0
0x00ebbec9: lea    rdx,[rip+0x73c794]        # 0x1415f8664 ; literal="]"
0x00ebbed0: lea    rcx,[rbp+0x840]
0x00ebbed7: call   0x14006f4f0
0x00ebbedc: lea    rdx,[rbp+0x840]
0x00ebbee3: lea    rcx,[rsp+0x28]
0x00ebbee8: call   0x1400bb700
0x00ebbeed: nop
0x00ebbeee: lea    rcx,[rbp+0x840]
0x00ebbef5: call   0x140067dc0
0x00ebbefa: mov    rax,QWORD PTR [rsp+0x50]
0x00ebbeff: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebbf03: je     0x140ebbf5e
0x00ebbf05: lea    rdx,[rip+0x870b44]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebbf0c: lea    rcx,[rbp+0x860]
0x00ebbf13: call   0x1400680e0
0x00ebbf18: nop
0x00ebbf19: lea    rdx,[rbp+0x860]
0x00ebbf20: mov    rax,QWORD PTR [rsp+0x50]
0x00ebbf25: mov    ecx,DWORD PTR [rax+0x44]
0x00ebbf28: call   0x140529cf0
0x00ebbf2d: lea    rdx,[rip+0x73c730]        # 0x1415f8664 ; literal="]"
0x00ebbf34: lea    rcx,[rbp+0x860]
0x00ebbf3b: call   0x14006f4f0
0x00ebbf40: lea    rdx,[rbp+0x860]
0x00ebbf47: lea    rcx,[rsp+0x28]
0x00ebbf4c: call   0x1400bb700
0x00ebbf51: nop
0x00ebbf52: lea    rcx,[rbp+0x860]
0x00ebbf59: call   0x140067dc0
0x00ebbf5e: lea    rdx,[rip+0x871653]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebbf65: lea    rcx,[rsp+0x28]
0x00ebbf6a: call   0x1400bb870
0x00ebbf6f: lea    rdx,[rip+0x8721e2]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebbf76: lea    rcx,[rsp+0x28]
0x00ebbf7b: call   0x1400bb870
0x00ebbf80: lea    rdx,[rip+0x872299]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebbf87: lea    rcx,[rsp+0x28]
0x00ebbf8c: call   0x1400bb870
0x00ebbf91: lea    rdx,[rip+0x8721b8]        # 0x14172e150 ; literal="[NAME:"
0x00ebbf98: lea    rcx,[rbp+0x200]
0x00ebbf9f: call   0x14006f510
0x00ebbfa4: lea    rdx,[rbp+0x340]
0x00ebbfab: lea    rcx,[rbp+0x200]
0x00ebbfb2: call   0x1400b9ca0
0x00ebbfb7: lea    rdx,[rip+0x871fa6]        # 0x14172df64 ; literal=" yoke"
0x00ebbfbe: lea    rcx,[rbp+0x200]
0x00ebbfc5: call   0x14006f4f0
0x00ebbfca: lea    rdx,[rip+0x757433]        # 0x141613404 ; literal=":"
0x00ebbfd1: lea    rcx,[rbp+0x200]
0x00ebbfd8: call   0x14006f4f0
0x00ebbfdd: lea    rdx,[rbp+0x340]
0x00ebbfe4: lea    rcx,[rbp+0x200]
0x00ebbfeb: call   0x1400b9ca0
0x00ebbff0: lea    rdx,[rip+0x871f65]        # 0x14172df5c ; literal=" yokes"
0x00ebbff7: lea    rcx,[rbp+0x200]
0x00ebbffe: call   0x14006f4f0
0x00ebc003: lea    rdx,[rip+0x73c65a]        # 0x1415f8664 ; literal="]"
0x00ebc00a: lea    rcx,[rbp+0x200]
0x00ebc011: call   0x14006f4f0
0x00ebc016: lea    rdx,[rbp+0x200]
0x00ebc01d: lea    rcx,[rsp+0x28]
0x00ebc022: call   0x1400bb700
0x00ebc027: lea    rdx,[rip+0x8720fa]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebc02e: lea    rcx,[rsp+0x28]
0x00ebc033: call   0x1400bb870
0x00ebc038: lea    r8,[rbp-0x18]
0x00ebc03c: lea    rdx,[rsp+0x28]
0x00ebc041: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebc046: call   0x140eb4380
0x00ebc04b: lea    rdx,[rip+0x8720b6]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebc052: lea    rcx,[rsp+0x28]
0x00ebc057: call   0x1400bb870
0x00ebc05c: lea    rdx,[rip+0x8720e5]        # 0x14172e148 ; literal="[SIZE:"
0x00ebc063: lea    rcx,[rbp+0x200]
0x00ebc06a: call   0x14006f510
0x00ebc06f: lea    rdx,[rbp+0x200]
0x00ebc076: mov    ecx,ebx
0x00ebc078: call   0x140529cf0
0x00ebc07d: lea    rdx,[rip+0x73c5e0]        # 0x1415f8664 ; literal="]"
0x00ebc084: lea    rcx,[rbp+0x200]
0x00ebc08b: call   0x14006f4f0
0x00ebc090: lea    rdx,[rbp+0x200]
0x00ebc097: lea    rcx,[rsp+0x28]
0x00ebc09c: call   0x1400bb700
0x00ebc0a1: lea    rdx,[rip+0x872090]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebc0a8: lea    rcx,[rbp+0x200]
0x00ebc0af: call   0x14006f510
0x00ebc0b4: lea    rdx,[rbp+0x200]
0x00ebc0bb: mov    ecx,edi
0x00ebc0bd: call   0x140529cf0
0x00ebc0c2: lea    rdx,[rip+0x73c59b]        # 0x1415f8664 ; literal="]"
0x00ebc0c9: lea    rcx,[rbp+0x200]
0x00ebc0d0: call   0x14006f4f0
0x00ebc0d5: lea    rdx,[rbp+0x200]
0x00ebc0dc: lea    rcx,[rsp+0x28]
0x00ebc0e1: call   0x1400bb700
0x00ebc0e6: lea    rdx,[rip+0x871eb3]        # 0x14172dfa0 ; literal="[DESCRIPTION:The strings of the instrument are attached to the "
0x00ebc0ed: lea    rcx,[rbp+0x200]
0x00ebc0f4: call   0x14006f510
0x00ebc0f9: lea    rdx,[rbp+0x340]
0x00ebc100: lea    rcx,[rbp+0x200]
0x00ebc107: call   0x1400b9ca0
0x00ebc10c: lea    rdx,[rip+0x871e6d]        # 0x14172df80 ; literal=" yoke.]"
0x00ebc113: lea    rcx,[rbp+0x200]
0x00ebc11a: call   0x14006f4f0
0x00ebc11f: lea    rdx,[rbp+0x200]
0x00ebc126: lea    rcx,[rsp+0x28]
0x00ebc12b: call   0x1400bb700
0x00ebc130: lea    rdx,[rip+0x871499]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebc137: lea    rcx,[rbp+0x200]
0x00ebc13e: call   0x14006f510
0x00ebc143: lea    rdx,[rbp+0x3e0]
0x00ebc14a: lea    rcx,[rbp+0x200]
0x00ebc151: call   0x1400b9ca0
0x00ebc156: lea    rdx,[rip+0x73c507]        # 0x1415f8664 ; literal="]"
0x00ebc15d: lea    rcx,[rbp+0x200]
0x00ebc164: call   0x14006f4f0
0x00ebc169: lea    rdx,[rbp+0x200]
0x00ebc170: lea    rcx,[rsp+0x28]
0x00ebc175: call   0x1400bb700
0x00ebc17a: lea    rdx,[rip+0x7e9e57]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebc181: lea    rcx,[rsp+0x28]
0x00ebc186: call   0x1400bb870
0x00ebc18b: mov    rbx,QWORD PTR [rsp+0x50]
0x00ebc190: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ebc194: je     0x140ebc1ea
0x00ebc196: lea    rdx,[rip+0x8708c3]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebc19d: lea    rcx,[rbp+0x880]
0x00ebc1a4: call   0x1400680e0
0x00ebc1a9: nop
0x00ebc1aa: lea    rdx,[rbp+0x880]
0x00ebc1b1: mov    ecx,DWORD PTR [rbx+0x40]
0x00ebc1b4: call   0x140529cf0
0x00ebc1b9: lea    rdx,[rip+0x73c4a4]        # 0x1415f8664 ; literal="]"
0x00ebc1c0: lea    rcx,[rbp+0x880]
0x00ebc1c7: call   0x14006f4f0
0x00ebc1cc: lea    rdx,[rbp+0x880]
0x00ebc1d3: lea    rcx,[rsp+0x28]
0x00ebc1d8: call   0x1400bb700
0x00ebc1dd: nop
0x00ebc1de: lea    rcx,[rbp+0x880]
0x00ebc1e5: call   0x140067dc0
0x00ebc1ea: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ebc1ee: je     0x140ebc244
0x00ebc1f0: lea    rdx,[rip+0x870859]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebc1f7: lea    rcx,[rbp+0x8a0]
0x00ebc1fe: call   0x1400680e0
0x00ebc203: nop
0x00ebc204: lea    rdx,[rbp+0x8a0]
0x00ebc20b: mov    ecx,DWORD PTR [rbx+0x44]
0x00ebc20e: call   0x140529cf0
0x00ebc213: lea    rdx,[rip+0x73c44a]        # 0x1415f8664 ; literal="]"
0x00ebc21a: lea    rcx,[rbp+0x8a0]
0x00ebc221: call   0x14006f4f0
0x00ebc226: lea    rdx,[rbp+0x8a0]
0x00ebc22d: lea    rcx,[rsp+0x28]
0x00ebc232: call   0x1400bb700
0x00ebc237: nop
0x00ebc238: lea    rcx,[rbp+0x8a0]
0x00ebc23f: call   0x140067dc0
0x00ebc244: lea    rdx,[rip+0x87136d]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebc24b: lea    rcx,[rsp+0x28]
0x00ebc250: call   0x1400bb870
0x00ebc255: lea    rdx,[rip+0x871efc]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebc25c: lea    rcx,[rsp+0x28]
0x00ebc261: call   0x1400bb870
0x00ebc266: lea    rdx,[rip+0x871fb3]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebc26d: lea    rcx,[rsp+0x28]
0x00ebc272: call   0x1400bb870
0x00ebc277: lea    rdx,[rip+0x871ed2]        # 0x14172e150 ; literal="[NAME:"
0x00ebc27e: lea    rcx,[rbp+0x200]
0x00ebc285: call   0x14006f510
0x00ebc28a: lea    rdx,[rbp+0x340]
0x00ebc291: lea    rcx,[rbp+0x200]
0x00ebc298: call   0x1400b9ca0
0x00ebc29d: lea    rdx,[rip+0x871ccc]        # 0x14172df70 ; literal=" sound-chest"
0x00ebc2a4: lea    rcx,[rbp+0x200]
0x00ebc2ab: call   0x14006f4f0
0x00ebc2b0: lea    rdx,[rip+0x75714d]        # 0x141613404 ; literal=":"
0x00ebc2b7: lea    rcx,[rbp+0x200]
0x00ebc2be: call   0x14006f4f0
0x00ebc2c3: lea    rdx,[rbp+0x340]
0x00ebc2ca: lea    rcx,[rbp+0x200]
0x00ebc2d1: call   0x1400b9ca0
0x00ebc2d6: lea    rdx,[rip+0x871e03]        # 0x14172e0e0 ; literal=" sound-chests"
0x00ebc2dd: lea    rcx,[rbp+0x200]
0x00ebc2e4: call   0x14006f4f0
0x00ebc2e9: lea    rdx,[rip+0x73c374]        # 0x1415f8664 ; literal="]"
0x00ebc2f0: lea    rcx,[rbp+0x200]
0x00ebc2f7: call   0x14006f4f0
0x00ebc2fc: lea    rdx,[rbp+0x200]
0x00ebc303: lea    rcx,[rsp+0x28]
0x00ebc308: call   0x1400bb700
0x00ebc30d: lea    rdx,[rip+0x871e14]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebc314: lea    rcx,[rsp+0x28]
0x00ebc319: call   0x1400bb870
0x00ebc31e: lea    r8,[rbp-0x7c]
0x00ebc322: lea    rdx,[rsp+0x28]
0x00ebc327: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebc32c: call   0x140eb4380
0x00ebc331: lea    rdx,[rip+0x871dd0]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebc338: lea    rcx,[rsp+0x28]
0x00ebc33d: call   0x1400bb870
0x00ebc342: lea    rdx,[rip+0x871dff]        # 0x14172e148 ; literal="[SIZE:"
0x00ebc349: lea    rcx,[rbp+0x200]
0x00ebc350: call   0x14006f510
0x00ebc355: lea    rdx,[rbp+0x200]
0x00ebc35c: mov    ecx,esi
0x00ebc35e: call   0x140529cf0
0x00ebc363: lea    rdx,[rip+0x73c2fa]        # 0x1415f8664 ; literal="]"
0x00ebc36a: lea    rcx,[rbp+0x200]
0x00ebc371: call   0x14006f4f0
0x00ebc376: lea    rdx,[rbp+0x200]
0x00ebc37d: lea    rcx,[rsp+0x28]
0x00ebc382: call   0x1400bb700
0x00ebc387: lea    rdx,[rip+0x871daa]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebc38e: lea    rcx,[rbp+0x200]
0x00ebc395: call   0x14006f510
0x00ebc39a: lea    rdx,[rbp+0x200]
0x00ebc3a1: mov    ecx,r14d
0x00ebc3a4: call   0x140529cf0
0x00ebc3a9: lea    rdx,[rip+0x73c2b4]        # 0x1415f8664 ; literal="]"
0x00ebc3b0: lea    rcx,[rbp+0x200]
0x00ebc3b7: call   0x14006f4f0
0x00ebc3bc: lea    rdx,[rbp+0x200]
0x00ebc3c3: lea    rcx,[rsp+0x28]
0x00ebc3c8: call   0x1400bb700
0x00ebc3cd: lea    rdx,[rip+0x871e34]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebc3d4: lea    rcx,[rbp+0x200]
0x00ebc3db: call   0x14006f510
0x00ebc3e0: lea    rdx,[rbp+0x340]
0x00ebc3e7: lea    rcx,[rbp+0x200]
0x00ebc3ee: call   0x1400b9ca0
0x00ebc3f3: lea    rdx,[rip+0x871c96]        # 0x14172e090 ; literal=" sound-chest of the instrument vibrates with the strings, producing sound.]"
0x00ebc3fa: lea    rcx,[rbp+0x200]
0x00ebc401: call   0x14006f4f0
0x00ebc406: lea    rdx,[rbp+0x200]
0x00ebc40d: lea    rcx,[rsp+0x28]
0x00ebc412: call   0x1400bb700
0x00ebc417: mov    ecx,0x3
0x00ebc41c: call   0x140071ec0
0x00ebc421: test   eax,eax
0x00ebc423: je     0x140ebc43c
0x00ebc425: cmp    eax,0x1
0x00ebc428: jne    0x140ebc441
0x00ebc42a: movzx  edi,al
0x00ebc42d: mov    BYTE PTR [rsp+0x40],al
0x00ebc431: movzx  esi,BYTE PTR [rsp+0x45]
0x00ebc436: movzx  r14d,al
0x00ebc43a: jmp    0x140ebc450
0x00ebc43c: mov    BYTE PTR [rsp+0x48],0x1
0x00ebc441: movzx  edi,BYTE PTR [rsp+0x40]
0x00ebc446: movzx  esi,dil
0x00ebc44a: movzx  r14d,BYTE PTR [rsp+0x46]
0x00ebc450: mov    ebx,0x6
0x00ebc455: cmp    r12d,0x9c40
0x00ebc45c: mov    eax,0x3
0x00ebc461: cmovl  ebx,eax
0x00ebc464: mov    DWORD PTR [rbp+0x8],0x0
0x00ebc46b: lea    rdx,[rbp+0x420]
0x00ebc472: lea    rcx,[rbp+0x740]
0x00ebc479: call   0x14006f560
0x00ebc47e: nop
0x00ebc47f: lea    rdx,[rip+0x871c7a]        # 0x14172e100 ; literal="STRINGS"
0x00ebc486: lea    rcx,[rbp+0x740]
0x00ebc48d: call   0x14006f4f0
0x00ebc492: lea    rdx,[rbp+0x740]
0x00ebc499: lea    rcx,[rbp-0x48]
0x00ebc49d: call   0x1400bb700
0x00ebc4a2: lea    rdx,[rip+0x871127]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebc4a9: lea    rcx,[rbp+0x200]
0x00ebc4b0: call   0x14006f510
0x00ebc4b5: lea    rdx,[rbp+0x740]
0x00ebc4bc: lea    rcx,[rbp+0x200]
0x00ebc4c3: call   0x1400b9ca0
0x00ebc4c8: lea    rdx,[rip+0x73c195]        # 0x1415f8664 ; literal="]"
0x00ebc4cf: lea    rcx,[rbp+0x200]
0x00ebc4d6: call   0x14006f4f0
0x00ebc4db: lea    rdx,[rbp+0x200]
0x00ebc4e2: lea    rcx,[rsp+0x28]
0x00ebc4e7: call   0x1400bb700
0x00ebc4ec: lea    rdx,[rip+0x7e9ae5]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebc4f3: lea    rcx,[rsp+0x28]
0x00ebc4f8: call   0x1400bb870
0x00ebc4fd: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc502: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebc506: je     0x140ebc566
0x00ebc508: lea    rdx,[rip+0x870551]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebc50f: lea    rcx,[rbp+0xa00]
0x00ebc516: call   0x1400680e0
0x00ebc51b: nop
0x00ebc51c: lea    rdx,[rbp+0xa00]
0x00ebc523: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc528: mov    ecx,DWORD PTR [rax+0x40]
0x00ebc52b: call   0x140529cf0
0x00ebc530: lea    rdx,[rip+0x73c12d]        # 0x1415f8664 ; literal="]"
0x00ebc537: lea    rcx,[rbp+0xa00]
0x00ebc53e: call   0x14006f4f0
0x00ebc543: lea    rdx,[rbp+0xa00]
0x00ebc54a: lea    rcx,[rsp+0x28]
0x00ebc54f: call   0x1400bb700
0x00ebc554: nop
0x00ebc555: lea    rcx,[rbp+0xa00]
0x00ebc55c: call   0x140067dc0
0x00ebc561: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc566: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebc56a: je     0x140ebc5c5
0x00ebc56c: lea    rdx,[rip+0x8704dd]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebc573: lea    rcx,[rbp+0xa20]
0x00ebc57a: call   0x1400680e0
0x00ebc57f: nop
0x00ebc580: lea    rdx,[rbp+0xa20]
0x00ebc587: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc58c: mov    ecx,DWORD PTR [rax+0x44]
0x00ebc58f: call   0x140529cf0
0x00ebc594: lea    rdx,[rip+0x73c0c9]        # 0x1415f8664 ; literal="]"
0x00ebc59b: lea    rcx,[rbp+0xa20]
0x00ebc5a2: call   0x14006f4f0
0x00ebc5a7: lea    rdx,[rbp+0xa20]
0x00ebc5ae: lea    rcx,[rsp+0x28]
0x00ebc5b3: call   0x1400bb700
0x00ebc5b8: nop
0x00ebc5b9: lea    rcx,[rbp+0xa20]
0x00ebc5c0: call   0x140067dc0
0x00ebc5c5: lea    rdx,[rip+0x870fec]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebc5cc: lea    rcx,[rsp+0x28]
0x00ebc5d1: call   0x1400bb870
0x00ebc5d6: lea    rdx,[rip+0x871b7b]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebc5dd: lea    rcx,[rsp+0x28]
0x00ebc5e2: call   0x1400bb870
0x00ebc5e7: lea    rdx,[rip+0x871c32]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebc5ee: lea    rcx,[rsp+0x28]
0x00ebc5f3: call   0x1400bb870
0x00ebc5f8: lea    rdx,[rip+0x871b51]        # 0x14172e150 ; literal="[NAME:"
0x00ebc5ff: lea    rcx,[rbp+0x200]
0x00ebc606: call   0x14006f510
0x00ebc60b: lea    rdx,[rbp+0x340]
0x00ebc612: lea    rcx,[rbp+0x200]
0x00ebc619: call   0x1400b9ca0
0x00ebc61e: lea    rdx,[rip+0x7270fb]        # 0x1415e3720 ; literal=" "
0x00ebc625: lea    rcx,[rbp+0x200]
0x00ebc62c: call   0x14006f4f0
0x00ebc631: lea    rcx,[rbp+0x200]
0x00ebc638: cmp    r15d,0x2
0x00ebc63c: lea    rdx,[rip+0x8718ad]        # 0x14172def0 ; literal="strings"
0x00ebc643: jge    0x140ebc64c
0x00ebc645: lea    rdx,[rip+0x811344]        # 0x1416cd990 ; literal="string"
0x00ebc64c: call   0x14006f4f0
0x00ebc651: lea    rdx,[rip+0x756dac]        # 0x141613404 ; literal=":"
0x00ebc658: lea    rcx,[rbp+0x200]
0x00ebc65f: call   0x14006f4f0
0x00ebc664: lea    rdx,[rbp+0x340]
0x00ebc66b: lea    rcx,[rbp+0x200]
0x00ebc672: call   0x1400b9ca0
0x00ebc677: lea    rdx,[rip+0x871bc2]        # 0x14172e240 ; literal=" strings"
0x00ebc67e: lea    rcx,[rbp+0x200]
0x00ebc685: call   0x14006f4f0
0x00ebc68a: lea    rdx,[rip+0x73bfd3]        # 0x1415f8664 ; literal="]"
0x00ebc691: lea    rcx,[rbp+0x200]
0x00ebc698: call   0x14006f4f0
0x00ebc69d: lea    rdx,[rbp+0x200]
0x00ebc6a4: lea    rcx,[rsp+0x28]
0x00ebc6a9: call   0x1400bb700
0x00ebc6ae: lea    rdx,[rip+0x871a73]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebc6b5: lea    rcx,[rsp+0x28]
0x00ebc6ba: call   0x1400bb870
0x00ebc6bf: lea    r8,[rbp+0x8]
0x00ebc6c3: lea    rdx,[rsp+0x28]
0x00ebc6c8: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebc6cd: call   0x140eb4160
0x00ebc6d2: lea    rdx,[rip+0x871a2f]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebc6d9: lea    rcx,[rsp+0x28]
0x00ebc6de: call   0x1400bb870
0x00ebc6e3: lea    rdx,[rip+0x871a5e]        # 0x14172e148 ; literal="[SIZE:"
0x00ebc6ea: lea    rcx,[rbp+0x200]
0x00ebc6f1: call   0x14006f510
0x00ebc6f6: lea    rdx,[rbp+0x200]
0x00ebc6fd: mov    ecx,r12d
0x00ebc700: call   0x140529cf0
0x00ebc705: lea    rdx,[rip+0x73bf58]        # 0x1415f8664 ; literal="]"
0x00ebc70c: lea    rcx,[rbp+0x200]
0x00ebc713: call   0x14006f4f0
0x00ebc718: lea    rdx,[rbp+0x200]
0x00ebc71f: lea    rcx,[rsp+0x28]
0x00ebc724: call   0x1400bb700
0x00ebc729: lea    rdx,[rip+0x871a08]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebc730: lea    rcx,[rbp+0x200]
0x00ebc737: call   0x14006f510
0x00ebc73c: lea    rdx,[rbp+0x200]
0x00ebc743: mov    ecx,ebx
0x00ebc745: call   0x140529cf0
0x00ebc74a: lea    rdx,[rip+0x73bf13]        # 0x1415f8664 ; literal="]"
0x00ebc751: lea    rcx,[rbp+0x200]
0x00ebc758: call   0x14006f4f0
0x00ebc75d: lea    rdx,[rbp+0x200]
0x00ebc764: lea    rcx,[rsp+0x28]
0x00ebc769: call   0x1400bb700
0x00ebc76e: lea    rdx,[rip+0x871a93]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebc775: lea    rcx,[rbp+0x200]
0x00ebc77c: call   0x14006f510
0x00ebc781: lea    rdx,[rbp+0x340]
0x00ebc788: lea    rcx,[rbp+0x200]
0x00ebc78f: call   0x1400b9ca0
0x00ebc794: lea    rdx,[rip+0x726f85]        # 0x1415e3720 ; literal=" "
0x00ebc79b: lea    rcx,[rbp+0x200]
0x00ebc7a2: call   0x14006f4f0
0x00ebc7a7: lea    rcx,[rbp+0x200]
0x00ebc7ae: cmp    r15d,0x2
0x00ebc7b2: lea    rdx,[rip+0x871937]        # 0x14172e0f0 ; literal="strings vibrate"
0x00ebc7b9: jge    0x140ebc7c2
0x00ebc7bb: lea    rdx,[rip+0x8718a6]        # 0x14172e068 ; literal="string vibrates"
0x00ebc7c2: call   0x14006f4f0
0x00ebc7c7: lea    rdx,[rip+0x87186a]        # 0x14172e038 ; literal=", causing the instrument to produce sound.]"
0x00ebc7ce: lea    rcx,[rbp+0x200]
0x00ebc7d5: call   0x14006f4f0
0x00ebc7da: lea    rdx,[rbp+0x200]
0x00ebc7e1: lea    rcx,[rsp+0x28]
0x00ebc7e6: call   0x1400bb700
0x00ebc7eb: lea    rcx,[rbp+0x540]
0x00ebc7f2: call   0x14006f620
0x00ebc7f7: nop
0x00ebc7f8: lea    rcx,[rbp+0x580]
0x00ebc7ff: call   0x14006f620
0x00ebc804: nop
0x00ebc805: movzx  r12d,BYTE PTR [rsp+0x48]
0x00ebc80b: test   r12b,r12b
0x00ebc80e: jne    0x140ebc81c
0x00ebc810: test   dil,dil
0x00ebc813: jne    0x140ebc81c
0x00ebc815: cmp    BYTE PTR [rsp+0x20],dil
0x00ebc81a: je     0x140ebc852
0x00ebc81c: lea    rdx,[rbp+0x420]
0x00ebc823: lea    rcx,[rbp+0x540]
0x00ebc82a: call   0x14006f530
0x00ebc82f: lea    rdx,[rip+0x87184e]        # 0x14172e084 ; literal="_PROD"
0x00ebc836: lea    rcx,[rbp+0x540]
0x00ebc83d: call   0x14006f4f0
0x00ebc842: lea    rdx,[rbp+0x540]
0x00ebc849: lea    rcx,[rbp-0x48]
0x00ebc84d: call   0x1400bb700
0x00ebc852: mov    ebx,DWORD PTR [rsp+0x64]
0x00ebc856: test   bl,bl
0x00ebc858: je     0x140ebc890
0x00ebc85a: lea    rdx,[rbp+0x420]
0x00ebc861: lea    rcx,[rbp+0x580]
0x00ebc868: call   0x14006f530
0x00ebc86d: lea    rdx,[rip+0x871804]        # 0x14172e078 ; literal="_NECK_RES"
0x00ebc874: lea    rcx,[rbp+0x580]
0x00ebc87b: call   0x14006f4f0
0x00ebc880: lea    rdx,[rbp+0x580]
0x00ebc887: lea    rcx,[rbp-0x48]
0x00ebc88b: call   0x1400bb700
0x00ebc890: xor    eax,eax
0x00ebc892: mov    DWORD PTR [rbp-0x58],eax
0x00ebc895: mov    DWORD PTR [rbp-0x14],eax
0x00ebc898: lea    rcx,[rbp+0x540]
0x00ebc89f: call   0x14006f4b0
0x00ebc8a4: test   al,al
0x00ebc8a6: jne    0x140ebe09b
0x00ebc8ac: mov    ebx,0x64
0x00ebc8b1: test   dil,dil
0x00ebc8b4: mov    eax,0x7d0
0x00ebc8b9: cmove  ebx,eax
0x00ebc8bc: lea    rdx,[rip+0x870d0d]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebc8c3: lea    rcx,[rbp+0x200]
0x00ebc8ca: call   0x14006f510
0x00ebc8cf: lea    rdx,[rbp+0x540]
0x00ebc8d6: lea    rcx,[rbp+0x200]
0x00ebc8dd: call   0x1400b9ca0
0x00ebc8e2: lea    rdx,[rip+0x73bd7b]        # 0x1415f8664 ; literal="]"
0x00ebc8e9: lea    rcx,[rbp+0x200]
0x00ebc8f0: call   0x14006f4f0
0x00ebc8f5: lea    rdx,[rbp+0x200]
0x00ebc8fc: lea    rcx,[rsp+0x28]
0x00ebc901: call   0x1400bb700
0x00ebc906: lea    rdx,[rip+0x7e96cb]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebc90d: lea    rcx,[rsp+0x28]
0x00ebc912: call   0x1400bb870
0x00ebc917: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc91c: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebc920: je     0x140ebc980
0x00ebc922: lea    rdx,[rip+0x870137]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebc929: lea    rcx,[rbp+0xa40]
0x00ebc930: call   0x1400680e0
0x00ebc935: nop
0x00ebc936: lea    rdx,[rbp+0xa40]
0x00ebc93d: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc942: mov    ecx,DWORD PTR [rax+0x40]
0x00ebc945: call   0x140529cf0
0x00ebc94a: lea    rdx,[rip+0x73bd13]        # 0x1415f8664 ; literal="]"
0x00ebc951: lea    rcx,[rbp+0xa40]
0x00ebc958: call   0x14006f4f0
0x00ebc95d: lea    rdx,[rbp+0xa40]
0x00ebc964: lea    rcx,[rsp+0x28]
0x00ebc969: call   0x1400bb700
0x00ebc96e: nop
0x00ebc96f: lea    rcx,[rbp+0xa40]
0x00ebc976: call   0x140067dc0
0x00ebc97b: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc980: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebc984: je     0x140ebc9df
0x00ebc986: lea    rdx,[rip+0x8700c3]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebc98d: lea    rcx,[rbp+0xa60]
0x00ebc994: call   0x1400680e0
0x00ebc999: nop
0x00ebc99a: lea    rdx,[rbp+0xa60]
0x00ebc9a1: mov    rax,QWORD PTR [rsp+0x50]
0x00ebc9a6: mov    ecx,DWORD PTR [rax+0x44]
0x00ebc9a9: call   0x140529cf0
0x00ebc9ae: lea    rdx,[rip+0x73bcaf]        # 0x1415f8664 ; literal="]"
0x00ebc9b5: lea    rcx,[rbp+0xa60]
0x00ebc9bc: call   0x14006f4f0
0x00ebc9c1: lea    rdx,[rbp+0xa60]
0x00ebc9c8: lea    rcx,[rsp+0x28]
0x00ebc9cd: call   0x1400bb700
0x00ebc9d2: nop
0x00ebc9d3: lea    rcx,[rbp+0xa60]
0x00ebc9da: call   0x140067dc0
0x00ebc9df: lea    rdx,[rip+0x870bd2]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebc9e6: lea    rcx,[rsp+0x28]
0x00ebc9eb: call   0x1400bb870
0x00ebc9f0: lea    rdx,[rip+0x871761]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebc9f7: lea    rcx,[rsp+0x28]
0x00ebc9fc: call   0x1400bb870
0x00ebca01: lea    rdx,[rip+0x871818]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebca08: lea    rcx,[rsp+0x28]
0x00ebca0d: call   0x1400bb870
0x00ebca12: lea    rdx,[rip+0x871737]        # 0x14172e150 ; literal="[NAME:"
0x00ebca19: lea    rcx,[rbp+0x200]
0x00ebca20: call   0x14006f510
0x00ebca25: lea    rdx,[rbp+0x340]
0x00ebca2c: lea    rcx,[rbp+0x200]
0x00ebca33: call   0x1400b9ca0
0x00ebca38: lea    rcx,[rbp+0x200]
0x00ebca3f: test   r12b,r12b
0x00ebca42: je     0x140ebde5f
0x00ebca48: lea    rdx,[rip+0x8725a5]        # 0x14172eff4 ; literal=" bow"
0x00ebca4f: call   0x14006f4f0
0x00ebca54: lea    rdx,[rip+0x7569a9]        # 0x141613404 ; literal=":"
0x00ebca5b: lea    rcx,[rbp+0x200]
0x00ebca62: call   0x14006f4f0
0x00ebca67: lea    rdx,[rbp+0x340]
0x00ebca6e: lea    rcx,[rbp+0x200]
0x00ebca75: call   0x1400b9ca0
0x00ebca7a: lea    rdx,[rip+0x87257b]        # 0x14172effc ; literal=" bows"
0x00ebca81: lea    rcx,[rbp+0x200]
0x00ebca88: call   0x14006f4f0
0x00ebca8d: jmp    0x140ebdf18
0x00ebca92: mov    ecx,0x4f
0x00ebca97: call   0x140071ec0
0x00ebca9c: inc    eax
0x00ebca9e: imul   r13d,eax,0x3e8
0x00ebcaa5: mov    DWORD PTR [rsp+0x60],r13d
0x00ebcaaa: mov    BYTE PTR [rsp+0x42],r15b
0x00ebcaaf: imul   ecx,r13d,0x5f
0x00ebcab3: mov    eax,0x51eb851f
0x00ebcab8: imul   ecx
0x00ebcaba: mov    edi,edx
0x00ebcabc: sar    edi,0x5
0x00ebcabf: mov    eax,edi
0x00ebcac1: shr    eax,0x1f
0x00ebcac4: add    edi,eax
0x00ebcac6: lea    ecx,[r13*4+0x0]
0x00ebcace: add    ecx,r13d
0x00ebcad1: mov    eax,0x51eb851f
0x00ebcad6: imul   ecx
0x00ebcad8: mov    r12d,edx
0x00ebcadb: sar    r12d,0x5
0x00ebcadf: mov    eax,r12d
0x00ebcae2: shr    eax,0x1f
0x00ebcae5: add    r12d,eax
0x00ebcae8: mov    ecx,0x1e
0x00ebcaed: call   0x140071ec0
0x00ebcaf2: test   eax,eax
0x00ebcaf4: je     0x140ebcb24
0x00ebcaf6: mov    ecx,0x5
0x00ebcafb: call   0x140071ec0
0x00ebcb00: test   eax,eax
0x00ebcb02: je     0x140ebcb14
0x00ebcb04: mov    ecx,0x36
0x00ebcb09: call   0x140071ec0
0x00ebcb0e: lea    r15d,[rax+0x7]
0x00ebcb12: jmp    0x140ebcb36
0x00ebcb14: mov    ecx,0x4
0x00ebcb19: call   0x140071ec0
0x00ebcb1e: lea    r15d,[rax+0x3]
0x00ebcb22: jmp    0x140ebcb36
0x00ebcb24: mov    ebx,0x2
0x00ebcb29: mov    ecx,ebx
0x00ebcb2b: call   0x140071ec0
0x00ebcb30: test   eax,eax
0x00ebcb32: cmovne r15d,ebx
0x00ebcb36: cmp    r13d,0x1388
0x00ebcb3d: jge    0x140ebcb4d
0x00ebcb3f: cmp    r15d,0x6
0x00ebcb43: jle    0x140ebcb63
0x00ebcb45: mov    r15d,0x6
0x00ebcb4b: jmp    0x140ebcb63
0x00ebcb4d: cmp    r13d,0x2710
0x00ebcb54: jge    0x140ebcb63
0x00ebcb56: cmp    r15d,0xc
0x00ebcb5a: mov    eax,0xc
0x00ebcb5f: cmovg  r15d,eax
0x00ebcb63: lea    rdx,[rbp+0x420]
0x00ebcb6a: lea    rcx,[rbp+0x3e0]
0x00ebcb71: call   0x14006f530
0x00ebcb76: lea    rdx,[rip+0x8716b3]        # 0x14172e230 ; literal="_BODY"
0x00ebcb7d: lea    rcx,[rbp+0x3e0]
0x00ebcb84: call   0x14006f4f0
0x00ebcb89: lea    rdx,[rbp+0x3e0]
0x00ebcb90: lea    rcx,[rbp-0x48]
0x00ebcb94: call   0x1400bb700
0x00ebcb99: mov    ebx,0x6
0x00ebcb9e: cmp    edi,0x9c40
0x00ebcba4: mov    ecx,0x3
0x00ebcba9: cmovl  ebx,ecx
0x00ebcbac: lea    rdx,[rip+0x870a1d]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebcbb3: lea    rcx,[rbp+0x200]
0x00ebcbba: call   0x14006f510
0x00ebcbbf: lea    rdx,[rbp+0x3e0]
0x00ebcbc6: lea    rcx,[rbp+0x200]
0x00ebcbcd: call   0x1400b9ca0
0x00ebcbd2: lea    rdx,[rip+0x73ba8b]        # 0x1415f8664 ; literal="]"
0x00ebcbd9: lea    rcx,[rbp+0x200]
0x00ebcbe0: call   0x14006f4f0
0x00ebcbe5: lea    rdx,[rbp+0x200]
0x00ebcbec: lea    rcx,[rsp+0x28]
0x00ebcbf1: call   0x1400bb700
0x00ebcbf6: lea    rdx,[rip+0x7e93db]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebcbfd: lea    rcx,[rsp+0x28]
0x00ebcc02: call   0x1400bb870
0x00ebcc07: mov    rax,QWORD PTR [rsp+0x50]
0x00ebcc0c: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebcc10: je     0x140ebcc70
0x00ebcc12: lea    rdx,[rip+0x86fe47]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebcc19: lea    rcx,[rbp+0x8c0]
0x00ebcc20: call   0x1400680e0
0x00ebcc25: nop
0x00ebcc26: lea    rdx,[rbp+0x8c0]
0x00ebcc2d: mov    rax,QWORD PTR [rsp+0x50]
0x00ebcc32: mov    ecx,DWORD PTR [rax+0x40]
0x00ebcc35: call   0x140529cf0
0x00ebcc3a: lea    rdx,[rip+0x73ba23]        # 0x1415f8664 ; literal="]"
0x00ebcc41: lea    rcx,[rbp+0x8c0]
0x00ebcc48: call   0x14006f4f0
0x00ebcc4d: lea    rdx,[rbp+0x8c0]
0x00ebcc54: lea    rcx,[rsp+0x28]
0x00ebcc59: call   0x1400bb700
0x00ebcc5e: nop
0x00ebcc5f: lea    rcx,[rbp+0x8c0]
0x00ebcc66: call   0x140067dc0
0x00ebcc6b: mov    rax,QWORD PTR [rsp+0x50]
0x00ebcc70: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebcc74: je     0x140ebcccf
0x00ebcc76: lea    rdx,[rip+0x86fdd3]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebcc7d: lea    rcx,[rbp+0x8e0]
0x00ebcc84: call   0x1400680e0
0x00ebcc89: nop
0x00ebcc8a: lea    rdx,[rbp+0x8e0]
0x00ebcc91: mov    rax,QWORD PTR [rsp+0x50]
0x00ebcc96: mov    ecx,DWORD PTR [rax+0x44]
0x00ebcc99: call   0x140529cf0
0x00ebcc9e: lea    rdx,[rip+0x73b9bf]        # 0x1415f8664 ; literal="]"
0x00ebcca5: lea    rcx,[rbp+0x8e0]
0x00ebccac: call   0x14006f4f0
0x00ebccb1: lea    rdx,[rbp+0x8e0]
0x00ebccb8: lea    rcx,[rsp+0x28]
0x00ebccbd: call   0x1400bb700
0x00ebccc2: nop
0x00ebccc3: lea    rcx,[rbp+0x8e0]
0x00ebccca: call   0x140067dc0
0x00ebcccf: lea    rdx,[rip+0x8708e2]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebccd6: lea    rcx,[rsp+0x28]
0x00ebccdb: call   0x1400bb870
0x00ebcce0: lea    rdx,[rip+0x871471]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebcce7: lea    rcx,[rsp+0x28]
0x00ebccec: call   0x1400bb870
0x00ebccf1: lea    rdx,[rip+0x871528]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebccf8: lea    rcx,[rsp+0x28]
0x00ebccfd: call   0x1400bb870
0x00ebcd02: lea    rdx,[rip+0x871447]        # 0x14172e150 ; literal="[NAME:"
0x00ebcd09: lea    rcx,[rbp+0x200]
0x00ebcd10: call   0x14006f510
0x00ebcd15: lea    rdx,[rbp+0x340]
0x00ebcd1c: lea    rcx,[rbp+0x200]
0x00ebcd23: call   0x1400b9ca0
0x00ebcd28: lea    rdx,[rip+0x867ccd]        # 0x1417249fc ; literal=" body"
0x00ebcd2f: lea    rcx,[rbp+0x200]
0x00ebcd36: call   0x14006f4f0
0x00ebcd3b: lea    rdx,[rip+0x7566c2]        # 0x141613404 ; literal=":"
0x00ebcd42: lea    rcx,[rbp+0x200]
0x00ebcd49: call   0x14006f4f0
0x00ebcd4e: lea    rdx,[rbp+0x340]
0x00ebcd55: lea    rcx,[rbp+0x200]
0x00ebcd5c: call   0x1400b9ca0
0x00ebcd61: lea    rdx,[rip+0x871530]        # 0x14172e298 ; literal=" bodies"
0x00ebcd68: lea    rcx,[rbp+0x200]
0x00ebcd6f: call   0x14006f4f0
0x00ebcd74: lea    rdx,[rip+0x73b8e9]        # 0x1415f8664 ; literal="]"
0x00ebcd7b: lea    rcx,[rbp+0x200]
0x00ebcd82: call   0x14006f4f0
0x00ebcd87: lea    rdx,[rbp+0x200]
0x00ebcd8e: lea    rcx,[rsp+0x28]
0x00ebcd93: call   0x1400bb700
0x00ebcd98: lea    rdx,[rip+0x871389]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebcd9f: lea    rcx,[rsp+0x28]
0x00ebcda4: call   0x1400bb870
0x00ebcda9: lea    r8,[rbp-0x7c]
0x00ebcdad: lea    rdx,[rsp+0x28]
0x00ebcdb2: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebcdb7: call   0x140eb4380
0x00ebcdbc: lea    rdx,[rip+0x871345]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebcdc3: lea    rcx,[rsp+0x28]
0x00ebcdc8: call   0x1400bb870
0x00ebcdcd: lea    rdx,[rip+0x871374]        # 0x14172e148 ; literal="[SIZE:"
0x00ebcdd4: lea    rcx,[rbp+0x200]
0x00ebcddb: call   0x14006f510
0x00ebcde0: lea    rdx,[rbp+0x200]
0x00ebcde7: mov    ecx,edi
0x00ebcde9: call   0x140529cf0
0x00ebcdee: lea    rdx,[rip+0x73b86f]        # 0x1415f8664 ; literal="]"
0x00ebcdf5: lea    rcx,[rbp+0x200]
0x00ebcdfc: call   0x14006f4f0
0x00ebce01: lea    rdx,[rbp+0x200]
0x00ebce08: lea    rcx,[rsp+0x28]
0x00ebce0d: call   0x1400bb700
0x00ebce12: lea    rdx,[rip+0x87131f]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebce19: lea    rcx,[rbp+0x200]
0x00ebce20: call   0x14006f510
0x00ebce25: lea    rdx,[rbp+0x200]
0x00ebce2c: mov    ecx,ebx
0x00ebce2e: call   0x140529cf0
0x00ebce33: lea    rdx,[rip+0x73b82a]        # 0x1415f8664 ; literal="]"
0x00ebce3a: lea    rcx,[rbp+0x200]
0x00ebce41: call   0x14006f4f0
0x00ebce46: lea    rdx,[rbp+0x200]
0x00ebce4d: lea    rcx,[rsp+0x28]
0x00ebce52: call   0x1400bb700
0x00ebce57: lea    rdx,[rip+0x8713aa]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebce5e: lea    rcx,[rbp+0x200]
0x00ebce65: call   0x14006f510
0x00ebce6a: lea    rdx,[rbp+0x340]
0x00ebce71: lea    rcx,[rbp+0x200]
0x00ebce78: call   0x1400b9ca0
0x00ebce7d: lea    rdx,[rip+0x871074]        # 0x14172def8 ; literal=" body of the instrument vibrates with the string"
0x00ebce84: lea    rcx,[rbp+0x200]
0x00ebce8b: call   0x14006f4f0
0x00ebce90: cmp    r15d,0x2
0x00ebce94: jl     0x140ebcea9
0x00ebce96: lea    rdx,[rip+0x727383]        # 0x1415e4220 ; literal="s"
0x00ebce9d: lea    rcx,[rbp+0x200]
0x00ebcea4: call   0x14006f4f0
0x00ebcea9: lea    rdx,[rip+0x871008]        # 0x14172deb8 ; literal=", producing sound.]"
0x00ebceb0: lea    rcx,[rbp+0x200]
0x00ebceb7: call   0x14006f4f0
0x00ebcebc: lea    rdx,[rbp+0x200]
0x00ebcec3: lea    rcx,[rsp+0x28]
0x00ebcec8: call   0x1400bb700
0x00ebcecd: mov    ecx,0x4
0x00ebced2: call   0x140071ec0
0x00ebced7: test   eax,eax
0x00ebced9: je     0x140ebcf04
0x00ebcedb: sub    eax,0x1
0x00ebcede: je     0x140ebcef7
0x00ebcee0: movzx  edi,BYTE PTR [rsp+0x40]
0x00ebcee5: cmp    eax,0x1
0x00ebcee8: jne    0x140ebc450
0x00ebceee: mov    BYTE PTR [rsp+0x20],al
0x00ebcef2: jmp    0x140ebc450
0x00ebcef7: mov    dil,0x1
0x00ebcefa: mov    BYTE PTR [rsp+0x40],dil
0x00ebceff: jmp    0x140ebc450
0x00ebcf04: mov    BYTE PTR [rsp+0x48],0x1
0x00ebcf09: movzx  edi,BYTE PTR [rsp+0x40]
0x00ebcf0e: jmp    0x140ebc450
0x00ebcf13: mov    ecx,0x4f
0x00ebcf18: call   0x140071ec0
0x00ebcf1d: inc    eax
0x00ebcf1f: imul   r13d,eax,0x3e8
0x00ebcf26: mov    DWORD PTR [rsp+0x60],r13d
0x00ebcf2b: mov    BYTE PTR [rsp+0x45],r15b
0x00ebcf30: imul   ecx,r13d,0x1e
0x00ebcf34: mov    eax,0x51eb851f
0x00ebcf39: imul   ecx
0x00ebcf3b: mov    ebx,edx
0x00ebcf3d: sar    ebx,0x5
0x00ebcf40: mov    eax,ebx
0x00ebcf42: shr    eax,0x1f
0x00ebcf45: add    ebx,eax
0x00ebcf47: imul   ecx,r13d,0x3c
0x00ebcf4b: mov    eax,0x51eb851f
0x00ebcf50: imul   ecx
0x00ebcf52: mov    esi,edx
0x00ebcf54: sar    esi,0x5
0x00ebcf57: mov    eax,esi
0x00ebcf59: shr    eax,0x1f
0x00ebcf5c: add    esi,eax
0x00ebcf5e: lea    ecx,[r13*4+0x0]
0x00ebcf66: add    ecx,r13d
0x00ebcf69: add    ecx,ecx
0x00ebcf6b: mov    eax,0x51eb851f
0x00ebcf70: imul   ecx
0x00ebcf72: mov    r12d,edx
0x00ebcf75: sar    r12d,0x5
0x00ebcf79: mov    eax,r12d
0x00ebcf7c: shr    eax,0x1f
0x00ebcf7f: add    r12d,eax
0x00ebcf82: mov    ecx,0x5
0x00ebcf87: call   0x140071ec0
0x00ebcf8c: test   eax,eax
0x00ebcf8e: je     0x140ebcfa0
0x00ebcf90: mov    ecx,0x36
0x00ebcf95: call   0x140071ec0
0x00ebcf9a: lea    r15d,[rax+0x7]
0x00ebcf9e: jmp    0x140ebcfae
0x00ebcfa0: mov    ecx,0x5
0x00ebcfa5: call   0x140071ec0
0x00ebcfaa: lea    r15d,[rax+0x2]
0x00ebcfae: cmp    r13d,0x1388
0x00ebcfb5: jge    0x140ebcfc5
0x00ebcfb7: cmp    r15d,0x6
0x00ebcfbb: jle    0x140ebcfdb
0x00ebcfbd: mov    r15d,0x6
0x00ebcfc3: jmp    0x140ebcfdb
0x00ebcfc5: cmp    r13d,0x2710
0x00ebcfcc: jge    0x140ebcfdb
0x00ebcfce: cmp    r15d,0xc
0x00ebcfd2: mov    eax,0xc
0x00ebcfd7: cmovg  r15d,eax
0x00ebcfdb: lea    rdx,[rbp+0x420]
0x00ebcfe2: lea    rcx,[rbp+0x5c0]
0x00ebcfe9: call   0x14006f530
0x00ebcfee: lea    rdx,[rip+0x870ebb]        # 0x14172deb0 ; literal="_FRAME"
0x00ebcff5: lea    rcx,[rbp+0x5c0]
0x00ebcffc: call   0x14006f4f0
0x00ebd001: lea    rdx,[rbp+0x5c0]
0x00ebd008: lea    rcx,[rbp-0x48]
0x00ebd00c: call   0x1400bb700
0x00ebd011: lea    rdx,[rbp+0x420]
0x00ebd018: lea    rcx,[rbp+0x3e0]
0x00ebd01f: call   0x14006f530
0x00ebd024: lea    rdx,[rip+0x871205]        # 0x14172e230 ; literal="_BODY"
0x00ebd02b: lea    rcx,[rbp+0x3e0]
0x00ebd032: call   0x14006f4f0
0x00ebd037: lea    rdx,[rbp+0x3e0]
0x00ebd03e: lea    rcx,[rbp-0x48]
0x00ebd042: call   0x1400bb700
0x00ebd047: mov    edi,0x6
0x00ebd04c: cmp    ebx,0x9c40
0x00ebd052: mov    eax,0x3
0x00ebd057: cmovl  edi,eax
0x00ebd05a: mov    r14d,0x6
0x00ebd060: cmp    esi,0x9c40
0x00ebd066: cmovl  r14d,eax
0x00ebd06a: lea    rdx,[rip+0x87055f]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebd071: lea    rcx,[rbp+0x200]
0x00ebd078: call   0x14006f510
0x00ebd07d: lea    rdx,[rbp+0x5c0]
0x00ebd084: lea    rcx,[rbp+0x200]
0x00ebd08b: call   0x1400b9ca0
0x00ebd090: lea    rdx,[rip+0x73b5cd]        # 0x1415f8664 ; literal="]"
0x00ebd097: lea    rcx,[rbp+0x200]
0x00ebd09e: call   0x14006f4f0
0x00ebd0a3: lea    rdx,[rbp+0x200]
0x00ebd0aa: lea    rcx,[rsp+0x28]
0x00ebd0af: call   0x1400bb700
0x00ebd0b4: lea    rdx,[rip+0x7e8f1d]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebd0bb: lea    rcx,[rsp+0x28]
0x00ebd0c0: call   0x1400bb870
0x00ebd0c5: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd0ca: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebd0ce: je     0x140ebd12e
0x00ebd0d0: lea    rdx,[rip+0x86f989]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebd0d7: lea    rcx,[rbp+0x900]
0x00ebd0de: call   0x1400680e0
0x00ebd0e3: nop
0x00ebd0e4: lea    rdx,[rbp+0x900]
0x00ebd0eb: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd0f0: mov    ecx,DWORD PTR [rax+0x40]
0x00ebd0f3: call   0x140529cf0
0x00ebd0f8: lea    rdx,[rip+0x73b565]        # 0x1415f8664 ; literal="]"
0x00ebd0ff: lea    rcx,[rbp+0x900]
0x00ebd106: call   0x14006f4f0
0x00ebd10b: lea    rdx,[rbp+0x900]
0x00ebd112: lea    rcx,[rsp+0x28]
0x00ebd117: call   0x1400bb700
0x00ebd11c: nop
0x00ebd11d: lea    rcx,[rbp+0x900]
0x00ebd124: call   0x140067dc0
0x00ebd129: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd12e: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebd132: je     0x140ebd18d
0x00ebd134: lea    rdx,[rip+0x86f915]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebd13b: lea    rcx,[rbp+0x920]
0x00ebd142: call   0x1400680e0
0x00ebd147: nop
0x00ebd148: lea    rdx,[rbp+0x920]
0x00ebd14f: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd154: mov    ecx,DWORD PTR [rax+0x44]
0x00ebd157: call   0x140529cf0
0x00ebd15c: lea    rdx,[rip+0x73b501]        # 0x1415f8664 ; literal="]"
0x00ebd163: lea    rcx,[rbp+0x920]
0x00ebd16a: call   0x14006f4f0
0x00ebd16f: lea    rdx,[rbp+0x920]
0x00ebd176: lea    rcx,[rsp+0x28]
0x00ebd17b: call   0x1400bb700
0x00ebd180: nop
0x00ebd181: lea    rcx,[rbp+0x920]
0x00ebd188: call   0x140067dc0
0x00ebd18d: lea    rdx,[rip+0x870424]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebd194: lea    rcx,[rsp+0x28]
0x00ebd199: call   0x1400bb870
0x00ebd19e: lea    rdx,[rip+0x870fb3]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebd1a5: lea    rcx,[rsp+0x28]
0x00ebd1aa: call   0x1400bb870
0x00ebd1af: lea    rdx,[rip+0x87106a]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebd1b6: lea    rcx,[rsp+0x28]
0x00ebd1bb: call   0x1400bb870
0x00ebd1c0: lea    rdx,[rip+0x870f89]        # 0x14172e150 ; literal="[NAME:"
0x00ebd1c7: lea    rcx,[rbp+0x200]
0x00ebd1ce: call   0x14006f510
0x00ebd1d3: lea    rdx,[rbp+0x340]
0x00ebd1da: lea    rcx,[rbp+0x200]
0x00ebd1e1: call   0x1400b9ca0
0x00ebd1e6: lea    rdx,[rip+0x870ceb]        # 0x14172ded8 ; literal=" frame"
0x00ebd1ed: lea    rcx,[rbp+0x200]
0x00ebd1f4: call   0x14006f4f0
0x00ebd1f9: lea    rdx,[rip+0x756204]        # 0x141613404 ; literal=":"
0x00ebd200: lea    rcx,[rbp+0x200]
0x00ebd207: call   0x14006f4f0
0x00ebd20c: lea    rdx,[rbp+0x340]
0x00ebd213: lea    rcx,[rbp+0x200]
0x00ebd21a: call   0x1400b9ca0
0x00ebd21f: lea    rdx,[rip+0x870caa]        # 0x14172ded0 ; literal=" frames"
0x00ebd226: lea    rcx,[rbp+0x200]
0x00ebd22d: call   0x14006f4f0
0x00ebd232: lea    rdx,[rip+0x73b42b]        # 0x1415f8664 ; literal="]"
0x00ebd239: lea    rcx,[rbp+0x200]
0x00ebd240: call   0x14006f4f0
0x00ebd245: lea    rdx,[rbp+0x200]
0x00ebd24c: lea    rcx,[rsp+0x28]
0x00ebd251: call   0x1400bb700
0x00ebd256: lea    rdx,[rip+0x870ecb]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebd25d: lea    rcx,[rsp+0x28]
0x00ebd262: call   0x1400bb870
0x00ebd267: lea    r8,[rbp+0x2c]
0x00ebd26b: lea    rdx,[rsp+0x28]
0x00ebd270: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebd275: call   0x140eb4380
0x00ebd27a: lea    rdx,[rip+0x870e87]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebd281: lea    rcx,[rsp+0x28]
0x00ebd286: call   0x1400bb870
0x00ebd28b: lea    rdx,[rip+0x870eb6]        # 0x14172e148 ; literal="[SIZE:"
0x00ebd292: lea    rcx,[rbp+0x200]
0x00ebd299: call   0x14006f510
0x00ebd29e: lea    rdx,[rbp+0x200]
0x00ebd2a5: mov    ecx,ebx
0x00ebd2a7: call   0x140529cf0
0x00ebd2ac: lea    rdx,[rip+0x73b3b1]        # 0x1415f8664 ; literal="]"
0x00ebd2b3: lea    rcx,[rbp+0x200]
0x00ebd2ba: call   0x14006f4f0
0x00ebd2bf: lea    rdx,[rbp+0x200]
0x00ebd2c6: lea    rcx,[rsp+0x28]
0x00ebd2cb: call   0x1400bb700
0x00ebd2d0: lea    rdx,[rip+0x870e61]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebd2d7: lea    rcx,[rbp+0x200]
0x00ebd2de: call   0x14006f510
0x00ebd2e3: lea    rdx,[rbp+0x200]
0x00ebd2ea: mov    ecx,edi
0x00ebd2ec: call   0x140529cf0
0x00ebd2f1: lea    rdx,[rip+0x73b36c]        # 0x1415f8664 ; literal="]"
0x00ebd2f8: lea    rcx,[rbp+0x200]
0x00ebd2ff: call   0x14006f4f0
0x00ebd304: lea    rdx,[rbp+0x200]
0x00ebd30b: lea    rcx,[rsp+0x28]
0x00ebd310: call   0x1400bb700
0x00ebd315: lea    rdx,[rip+0x870c84]        # 0x14172dfa0 ; literal="[DESCRIPTION:The strings of the instrument are attached to the "
0x00ebd31c: lea    rcx,[rbp+0x200]
0x00ebd323: call   0x14006f510
0x00ebd328: lea    rdx,[rbp+0x340]
0x00ebd32f: lea    rcx,[rbp+0x200]
0x00ebd336: call   0x1400b9ca0
0x00ebd33b: lea    rdx,[rip+0x870c46]        # 0x14172df88 ; literal=" frame.]"
0x00ebd342: lea    rcx,[rbp+0x200]
0x00ebd349: call   0x14006f4f0
0x00ebd34e: lea    rdx,[rbp+0x200]
0x00ebd355: lea    rcx,[rsp+0x28]
0x00ebd35a: call   0x1400bb700
0x00ebd35f: lea    rdx,[rip+0x87026a]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebd366: lea    rcx,[rbp+0x200]
0x00ebd36d: call   0x14006f510
0x00ebd372: lea    rdx,[rbp+0x3e0]
0x00ebd379: lea    rcx,[rbp+0x200]
0x00ebd380: call   0x1400b9ca0
0x00ebd385: lea    rdx,[rip+0x73b2d8]        # 0x1415f8664 ; literal="]"
0x00ebd38c: lea    rcx,[rbp+0x200]
0x00ebd393: call   0x14006f4f0
0x00ebd398: lea    rdx,[rbp+0x200]
0x00ebd39f: lea    rcx,[rsp+0x28]
0x00ebd3a4: call   0x1400bb700
0x00ebd3a9: lea    rdx,[rip+0x7e8c28]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebd3b0: lea    rcx,[rsp+0x28]
0x00ebd3b5: call   0x1400bb870
0x00ebd3ba: mov    rbx,QWORD PTR [rsp+0x50]
0x00ebd3bf: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ebd3c3: je     0x140ebd419
0x00ebd3c5: lea    rdx,[rip+0x86f694]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebd3cc: lea    rcx,[rbp+0x940]
0x00ebd3d3: call   0x1400680e0
0x00ebd3d8: nop
0x00ebd3d9: lea    rdx,[rbp+0x940]
0x00ebd3e0: mov    ecx,DWORD PTR [rbx+0x40]
0x00ebd3e3: call   0x140529cf0
0x00ebd3e8: lea    rdx,[rip+0x73b275]        # 0x1415f8664 ; literal="]"
0x00ebd3ef: lea    rcx,[rbp+0x940]
0x00ebd3f6: call   0x14006f4f0
0x00ebd3fb: lea    rdx,[rbp+0x940]
0x00ebd402: lea    rcx,[rsp+0x28]
0x00ebd407: call   0x1400bb700
0x00ebd40c: nop
0x00ebd40d: lea    rcx,[rbp+0x940]
0x00ebd414: call   0x140067dc0
0x00ebd419: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ebd41d: je     0x140ebd473
0x00ebd41f: lea    rdx,[rip+0x86f62a]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebd426: lea    rcx,[rbp+0x960]
0x00ebd42d: call   0x1400680e0
0x00ebd432: nop
0x00ebd433: lea    rdx,[rbp+0x960]
0x00ebd43a: mov    ecx,DWORD PTR [rbx+0x44]
0x00ebd43d: call   0x140529cf0
0x00ebd442: lea    rdx,[rip+0x73b21b]        # 0x1415f8664 ; literal="]"
0x00ebd449: lea    rcx,[rbp+0x960]
0x00ebd450: call   0x14006f4f0
0x00ebd455: lea    rdx,[rbp+0x960]
0x00ebd45c: lea    rcx,[rsp+0x28]
0x00ebd461: call   0x1400bb700
0x00ebd466: nop
0x00ebd467: lea    rcx,[rbp+0x960]
0x00ebd46e: call   0x140067dc0
0x00ebd473: lea    rdx,[rip+0x87013e]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebd47a: lea    rcx,[rsp+0x28]
0x00ebd47f: call   0x1400bb870
0x00ebd484: lea    rdx,[rip+0x870ccd]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebd48b: lea    rcx,[rsp+0x28]
0x00ebd490: call   0x1400bb870
0x00ebd495: lea    rdx,[rip+0x870d84]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebd49c: lea    rcx,[rsp+0x28]
0x00ebd4a1: call   0x1400bb870
0x00ebd4a6: lea    rdx,[rip+0x870ca3]        # 0x14172e150 ; literal="[NAME:"
0x00ebd4ad: lea    rcx,[rbp+0x200]
0x00ebd4b4: call   0x14006f510
0x00ebd4b9: lea    rdx,[rbp+0x340]
0x00ebd4c0: lea    rcx,[rbp+0x200]
0x00ebd4c7: call   0x1400b9ca0
0x00ebd4cc: lea    rdx,[rip+0x867529]        # 0x1417249fc ; literal=" body"
0x00ebd4d3: lea    rcx,[rbp+0x200]
0x00ebd4da: call   0x14006f4f0
0x00ebd4df: lea    rdx,[rip+0x755f1e]        # 0x141613404 ; literal=":"
0x00ebd4e6: lea    rcx,[rbp+0x200]
0x00ebd4ed: call   0x14006f4f0
0x00ebd4f2: lea    rdx,[rbp+0x340]
0x00ebd4f9: lea    rcx,[rbp+0x200]
0x00ebd500: call   0x1400b9ca0
0x00ebd505: lea    rdx,[rip+0x870d8c]        # 0x14172e298 ; literal=" bodies"
0x00ebd50c: lea    rcx,[rbp+0x200]
0x00ebd513: call   0x14006f4f0
0x00ebd518: lea    rdx,[rip+0x73b145]        # 0x1415f8664 ; literal="]"
0x00ebd51f: lea    rcx,[rbp+0x200]
0x00ebd526: call   0x14006f4f0
0x00ebd52b: lea    rdx,[rbp+0x200]
0x00ebd532: lea    rcx,[rsp+0x28]
0x00ebd537: call   0x1400bb700
0x00ebd53c: lea    rdx,[rip+0x870be5]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebd543: lea    rcx,[rsp+0x28]
0x00ebd548: call   0x1400bb870
0x00ebd54d: lea    r8,[rbp-0x7c]
0x00ebd551: lea    rdx,[rsp+0x28]
0x00ebd556: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebd55b: call   0x140eb4380
0x00ebd560: lea    rdx,[rip+0x870ba1]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebd567: lea    rcx,[rsp+0x28]
0x00ebd56c: call   0x1400bb870
0x00ebd571: lea    rdx,[rip+0x870bd0]        # 0x14172e148 ; literal="[SIZE:"
0x00ebd578: lea    rcx,[rbp+0x200]
0x00ebd57f: call   0x14006f510
0x00ebd584: lea    rdx,[rbp+0x200]
0x00ebd58b: mov    ecx,esi
0x00ebd58d: call   0x140529cf0
0x00ebd592: lea    rdx,[rip+0x73b0cb]        # 0x1415f8664 ; literal="]"
0x00ebd599: lea    rcx,[rbp+0x200]
0x00ebd5a0: call   0x14006f4f0
0x00ebd5a5: lea    rdx,[rbp+0x200]
0x00ebd5ac: lea    rcx,[rsp+0x28]
0x00ebd5b1: call   0x1400bb700
0x00ebd5b6: lea    rdx,[rip+0x870b7b]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebd5bd: lea    rcx,[rbp+0x200]
0x00ebd5c4: call   0x14006f510
0x00ebd5c9: lea    rdx,[rbp+0x200]
0x00ebd5d0: mov    ecx,r14d
0x00ebd5d3: call   0x140529cf0
0x00ebd5d8: lea    rdx,[rip+0x73b085]        # 0x1415f8664 ; literal="]"
0x00ebd5df: lea    rcx,[rbp+0x200]
0x00ebd5e6: call   0x14006f4f0
0x00ebd5eb: lea    rdx,[rbp+0x200]
0x00ebd5f2: lea    rcx,[rsp+0x28]
0x00ebd5f7: call   0x1400bb700
0x00ebd5fc: lea    rdx,[rip+0x870c05]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebd603: lea    rcx,[rbp+0x200]
0x00ebd60a: call   0x14006f510
0x00ebd60f: lea    rdx,[rbp+0x340]
0x00ebd616: lea    rcx,[rbp+0x200]
0x00ebd61d: call   0x1400b9ca0
0x00ebd622: lea    rdx,[rip+0x8709c7]        # 0x14172dff0 ; literal=" body of the instrument vibrates with the strings, producing sound.]"
0x00ebd629: lea    rcx,[rbp+0x200]
0x00ebd630: call   0x14006f4f0
0x00ebd635: lea    rdx,[rbp+0x200]
0x00ebd63c: lea    rcx,[rsp+0x28]
0x00ebd641: call   0x1400bb700
0x00ebd646: mov    ecx,0x2
0x00ebd64b: call   0x140071ec0
0x00ebd650: test   eax,eax
0x00ebd652: setne  dil
0x00ebd656: mov    BYTE PTR [rsp+0x40],dil
0x00ebd65b: movzx  esi,BYTE PTR [rsp+0x45]
0x00ebd660: jmp    0x140ebc44a
0x00ebd665: mov    BYTE PTR [rsp+0x47],r15b
0x00ebd66a: imul   ecx,r13d,0xf
0x00ebd66e: mov    eax,0x51eb851f
0x00ebd673: imul   ecx
0x00ebd675: mov    edi,edx
0x00ebd677: sar    edi,0x5
0x00ebd67a: mov    eax,edi
0x00ebd67c: shr    eax,0x1f
0x00ebd67f: add    edi,eax
0x00ebd681: lea    ecx,[r13*4+0x0]
0x00ebd689: add    ecx,r13d
0x00ebd68c: shl    ecx,0x4
0x00ebd68f: mov    eax,0x51eb851f
0x00ebd694: imul   ecx
0x00ebd696: mov    r14d,edx
0x00ebd699: sar    r14d,0x5
0x00ebd69d: mov    eax,r14d
0x00ebd6a0: shr    eax,0x1f
0x00ebd6a3: add    r14d,eax
0x00ebd6a6: lea    ecx,[r13*4+0x0]
0x00ebd6ae: add    ecx,r13d
0x00ebd6b1: mov    eax,0x51eb851f
0x00ebd6b6: imul   ecx
0x00ebd6b8: mov    r12d,edx
0x00ebd6bb: sar    r12d,0x5
0x00ebd6bf: mov    eax,r12d
0x00ebd6c2: shr    eax,0x1f
0x00ebd6c5: add    r12d,eax
0x00ebd6c8: mov    ecx,0x1e
0x00ebd6cd: call   0x140071ec0
0x00ebd6d2: test   eax,eax
0x00ebd6d4: je     0x140ebd704
0x00ebd6d6: mov    ecx,0x5
0x00ebd6db: call   0x140071ec0
0x00ebd6e0: test   eax,eax
0x00ebd6e2: jne    0x140ebd6f4
0x00ebd6e4: mov    ecx,0x18
0x00ebd6e9: call   0x140071ec0
0x00ebd6ee: lea    r15d,[rax+0x7]
0x00ebd6f2: jmp    0x140ebd716
0x00ebd6f4: mov    ecx,0x4
0x00ebd6f9: call   0x140071ec0
0x00ebd6fe: lea    r15d,[rax+0x3]
0x00ebd702: jmp    0x140ebd716
0x00ebd704: mov    ebx,0x2
0x00ebd709: mov    ecx,ebx
0x00ebd70b: call   0x140071ec0
0x00ebd710: test   eax,eax
0x00ebd712: cmovne r15d,ebx
0x00ebd716: cmp    r13d,0x1388
0x00ebd71d: jge    0x140ebd72d
0x00ebd71f: cmp    r15d,0x6
0x00ebd723: jle    0x140ebd743
0x00ebd725: mov    r15d,0x6
0x00ebd72b: jmp    0x140ebd743
0x00ebd72d: cmp    r13d,0x2710
0x00ebd734: jge    0x140ebd743
0x00ebd736: cmp    r15d,0xc
0x00ebd73a: mov    eax,0xc
0x00ebd73f: cmovg  r15d,eax
0x00ebd743: lea    rdx,[rbp+0x420]
0x00ebd74a: lea    rcx,[rbp+0x5e0]
0x00ebd751: call   0x14006f530
0x00ebd756: lea    rdx,[rip+0x8706bf]        # 0x14172de1c ; literal="_NECK"
0x00ebd75d: lea    rcx,[rbp+0x5e0]
0x00ebd764: call   0x14006f4f0
0x00ebd769: lea    rdx,[rbp+0x5e0]
0x00ebd770: lea    rcx,[rbp-0x48]
0x00ebd774: call   0x1400bb700
0x00ebd779: lea    rdx,[rbp+0x420]
0x00ebd780: lea    rcx,[rbp+0x3e0]
0x00ebd787: call   0x14006f530
0x00ebd78c: lea    rdx,[rip+0x870a9d]        # 0x14172e230 ; literal="_BODY"
0x00ebd793: lea    rcx,[rbp+0x3e0]
0x00ebd79a: call   0x14006f4f0
0x00ebd79f: lea    rdx,[rbp+0x3e0]
0x00ebd7a6: lea    rcx,[rbp-0x48]
0x00ebd7aa: call   0x1400bb700
0x00ebd7af: mov    ebx,0x6
0x00ebd7b4: cmp    edi,0x9c40
0x00ebd7ba: mov    eax,0x3
0x00ebd7bf: cmovl  ebx,eax
0x00ebd7c2: mov    esi,0x6
0x00ebd7c7: cmp    r14d,0x9c40
0x00ebd7ce: cmovl  esi,eax
0x00ebd7d1: lea    rdx,[rip+0x86fdf8]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebd7d8: lea    rcx,[rbp+0x200]
0x00ebd7df: call   0x14006f510
0x00ebd7e4: lea    rdx,[rbp+0x5e0]
0x00ebd7eb: lea    rcx,[rbp+0x200]
0x00ebd7f2: call   0x1400b9ca0
0x00ebd7f7: lea    rdx,[rip+0x73ae66]        # 0x1415f8664 ; literal="]"
0x00ebd7fe: lea    rcx,[rbp+0x200]
0x00ebd805: call   0x14006f4f0
0x00ebd80a: lea    rdx,[rbp+0x200]
0x00ebd811: lea    rcx,[rsp+0x28]
0x00ebd816: call   0x1400bb700
0x00ebd81b: lea    rdx,[rip+0x7e87b6]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebd822: lea    rcx,[rsp+0x28]
0x00ebd827: call   0x1400bb870
0x00ebd82c: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd831: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebd835: je     0x140ebd895
0x00ebd837: lea    rdx,[rip+0x86f222]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebd83e: lea    rcx,[rbp+0x980]
0x00ebd845: call   0x1400680e0
0x00ebd84a: nop
0x00ebd84b: lea    rdx,[rbp+0x980]
0x00ebd852: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd857: mov    ecx,DWORD PTR [rax+0x40]
0x00ebd85a: call   0x140529cf0
0x00ebd85f: lea    rdx,[rip+0x73adfe]        # 0x1415f8664 ; literal="]"
0x00ebd866: lea    rcx,[rbp+0x980]
0x00ebd86d: call   0x14006f4f0
0x00ebd872: lea    rdx,[rbp+0x980]
0x00ebd879: lea    rcx,[rsp+0x28]
0x00ebd87e: call   0x1400bb700
0x00ebd883: nop
0x00ebd884: lea    rcx,[rbp+0x980]
0x00ebd88b: call   0x140067dc0
0x00ebd890: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd895: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebd899: je     0x140ebd8f4
0x00ebd89b: lea    rdx,[rip+0x86f1ae]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebd8a2: lea    rcx,[rbp+0x9a0]
0x00ebd8a9: call   0x1400680e0
0x00ebd8ae: nop
0x00ebd8af: lea    rdx,[rbp+0x9a0]
0x00ebd8b6: mov    rax,QWORD PTR [rsp+0x50]
0x00ebd8bb: mov    ecx,DWORD PTR [rax+0x44]
0x00ebd8be: call   0x140529cf0
0x00ebd8c3: lea    rdx,[rip+0x73ad9a]        # 0x1415f8664 ; literal="]"
0x00ebd8ca: lea    rcx,[rbp+0x9a0]
0x00ebd8d1: call   0x14006f4f0
0x00ebd8d6: lea    rdx,[rbp+0x9a0]
0x00ebd8dd: lea    rcx,[rsp+0x28]
0x00ebd8e2: call   0x1400bb700
0x00ebd8e7: nop
0x00ebd8e8: lea    rcx,[rbp+0x9a0]
0x00ebd8ef: call   0x140067dc0
0x00ebd8f4: lea    rdx,[rip+0x86fcbd]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebd8fb: lea    rcx,[rsp+0x28]
0x00ebd900: call   0x1400bb870
0x00ebd905: lea    rdx,[rip+0x87084c]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebd90c: lea    rcx,[rsp+0x28]
0x00ebd911: call   0x1400bb870
0x00ebd916: lea    rdx,[rip+0x870903]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebd91d: lea    rcx,[rsp+0x28]
0x00ebd922: call   0x1400bb870
0x00ebd927: lea    rdx,[rip+0x870822]        # 0x14172e150 ; literal="[NAME:"
0x00ebd92e: lea    rcx,[rbp+0x200]
0x00ebd935: call   0x14006f510
0x00ebd93a: lea    rdx,[rbp+0x340]
0x00ebd941: lea    rcx,[rbp+0x200]
0x00ebd948: call   0x1400b9ca0
0x00ebd94d: lea    rdx,[rip+0x8704c0]        # 0x14172de14 ; literal=" neck"
0x00ebd954: lea    rcx,[rbp+0x200]
0x00ebd95b: call   0x14006f4f0
0x00ebd960: lea    rdx,[rip+0x755a9d]        # 0x141613404 ; literal=":"
0x00ebd967: lea    rcx,[rbp+0x200]
0x00ebd96e: call   0x14006f4f0
0x00ebd973: lea    rdx,[rbp+0x340]
0x00ebd97a: lea    rcx,[rbp+0x200]
0x00ebd981: call   0x1400b9ca0
0x00ebd986: lea    rdx,[rip+0x8704c3]        # 0x14172de50 ; literal=" necks"
0x00ebd98d: lea    rcx,[rbp+0x200]
0x00ebd994: call   0x14006f4f0
0x00ebd999: lea    rdx,[rip+0x73acc4]        # 0x1415f8664 ; literal="]"
0x00ebd9a0: lea    rcx,[rbp+0x200]
0x00ebd9a7: call   0x14006f4f0
0x00ebd9ac: lea    rdx,[rbp+0x200]
0x00ebd9b3: lea    rcx,[rsp+0x28]
0x00ebd9b8: call   0x1400bb700
0x00ebd9bd: lea    rdx,[rip+0x870764]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebd9c4: lea    rcx,[rsp+0x28]
0x00ebd9c9: call   0x1400bb870
0x00ebd9ce: lea    r8,[rbp+0x28]
0x00ebd9d2: lea    rdx,[rsp+0x28]
0x00ebd9d7: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebd9dc: call   0x140eb4380
0x00ebd9e1: lea    rdx,[rip+0x870720]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebd9e8: lea    rcx,[rsp+0x28]
0x00ebd9ed: call   0x1400bb870
0x00ebd9f2: lea    rdx,[rip+0x87074f]        # 0x14172e148 ; literal="[SIZE:"
0x00ebd9f9: lea    rcx,[rbp+0x200]
0x00ebda00: call   0x14006f510
0x00ebda05: lea    rdx,[rbp+0x200]
0x00ebda0c: mov    ecx,edi
0x00ebda0e: call   0x140529cf0
0x00ebda13: lea    rdx,[rip+0x73ac4a]        # 0x1415f8664 ; literal="]"
0x00ebda1a: lea    rcx,[rbp+0x200]
0x00ebda21: call   0x14006f4f0
0x00ebda26: lea    rdx,[rbp+0x200]
0x00ebda2d: lea    rcx,[rsp+0x28]
0x00ebda32: call   0x1400bb700
0x00ebda37: lea    rdx,[rip+0x8706fa]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebda3e: lea    rcx,[rbp+0x200]
0x00ebda45: call   0x14006f510
0x00ebda4a: lea    rdx,[rbp+0x200]
0x00ebda51: mov    ecx,ebx
0x00ebda53: call   0x140529cf0
0x00ebda58: lea    rdx,[rip+0x73ac05]        # 0x1415f8664 ; literal="]"
0x00ebda5f: lea    rcx,[rbp+0x200]
0x00ebda66: call   0x14006f4f0
0x00ebda6b: lea    rdx,[rbp+0x200]
0x00ebda72: lea    rcx,[rsp+0x28]
0x00ebda77: call   0x1400bb700
0x00ebda7c: lea    rdx,[rip+0x870785]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebda83: lea    rcx,[rbp+0x200]
0x00ebda8a: call   0x14006f510
0x00ebda8f: lea    rdx,[rbp+0x340]
0x00ebda96: lea    rcx,[rbp+0x200]
0x00ebda9d: call   0x1400b9ca0
0x00ebdaa2: lea    rdx,[rip+0x87037f]        # 0x14172de28 ; literal=" neck allows the musician room to stop "
0x00ebdaa9: lea    rcx,[rbp+0x200]
0x00ebdab0: call   0x14006f4f0
0x00ebdab5: lea    rcx,[rbp+0x200]
0x00ebdabc: cmp    r15d,0x2
0x00ebdac0: lea    rdx,[rip+0x870429]        # 0x14172def0 ; literal="strings"
0x00ebdac7: jge    0x140ebdad0
0x00ebdac9: lea    rdx,[rip+0x870410]        # 0x14172dee0 ; literal="the string"
0x00ebdad0: call   0x14006f4f0
0x00ebdad5: lea    rdx,[rip+0x870454]        # 0x14172df30 ; literal=" and select the pitch of the instrument.]"
0x00ebdadc: lea    rcx,[rbp+0x200]
0x00ebdae3: call   0x14006f4f0
0x00ebdae8: lea    rdx,[rbp+0x200]
0x00ebdaef: lea    rcx,[rsp+0x28]
0x00ebdaf4: call   0x1400bb700
0x00ebdaf9: lea    rdx,[rip+0x86fad0]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebdb00: lea    rcx,[rbp+0x200]
0x00ebdb07: call   0x14006f510
0x00ebdb0c: lea    rdx,[rbp+0x3e0]
0x00ebdb13: lea    rcx,[rbp+0x200]
0x00ebdb1a: call   0x1400b9ca0
0x00ebdb1f: lea    rdx,[rip+0x73ab3e]        # 0x1415f8664 ; literal="]"
0x00ebdb26: lea    rcx,[rbp+0x200]
0x00ebdb2d: call   0x14006f4f0
0x00ebdb32: lea    rdx,[rbp+0x200]
0x00ebdb39: lea    rcx,[rsp+0x28]
0x00ebdb3e: call   0x1400bb700
0x00ebdb43: lea    rdx,[rip+0x7e848e]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebdb4a: lea    rcx,[rsp+0x28]
0x00ebdb4f: call   0x1400bb870
0x00ebdb54: mov    rbx,QWORD PTR [rsp+0x50]
0x00ebdb59: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ebdb5d: je     0x140ebdbb3
0x00ebdb5f: lea    rdx,[rip+0x86eefa]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebdb66: lea    rcx,[rbp+0x9c0]
0x00ebdb6d: call   0x1400680e0
0x00ebdb72: nop
0x00ebdb73: lea    rdx,[rbp+0x9c0]
0x00ebdb7a: mov    ecx,DWORD PTR [rbx+0x40]
0x00ebdb7d: call   0x140529cf0
0x00ebdb82: lea    rdx,[rip+0x73aadb]        # 0x1415f8664 ; literal="]"
0x00ebdb89: lea    rcx,[rbp+0x9c0]
0x00ebdb90: call   0x14006f4f0
0x00ebdb95: lea    rdx,[rbp+0x9c0]
0x00ebdb9c: lea    rcx,[rsp+0x28]
0x00ebdba1: call   0x1400bb700
0x00ebdba6: nop
0x00ebdba7: lea    rcx,[rbp+0x9c0]
0x00ebdbae: call   0x140067dc0
0x00ebdbb3: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ebdbb7: je     0x140ebdc0d
0x00ebdbb9: lea    rdx,[rip+0x86ee90]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebdbc0: lea    rcx,[rbp+0x9e0]
0x00ebdbc7: call   0x1400680e0
0x00ebdbcc: nop
0x00ebdbcd: lea    rdx,[rbp+0x9e0]
0x00ebdbd4: mov    ecx,DWORD PTR [rbx+0x44]
0x00ebdbd7: call   0x140529cf0
0x00ebdbdc: lea    rdx,[rip+0x73aa81]        # 0x1415f8664 ; literal="]"
0x00ebdbe3: lea    rcx,[rbp+0x9e0]
0x00ebdbea: call   0x14006f4f0
0x00ebdbef: lea    rdx,[rbp+0x9e0]
0x00ebdbf6: lea    rcx,[rsp+0x28]
0x00ebdbfb: call   0x1400bb700
0x00ebdc00: nop
0x00ebdc01: lea    rcx,[rbp+0x9e0]
0x00ebdc08: call   0x140067dc0
0x00ebdc0d: lea    rdx,[rip+0x86f9a4]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebdc14: lea    rcx,[rsp+0x28]
0x00ebdc19: call   0x1400bb870
0x00ebdc1e: lea    rdx,[rip+0x870533]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebdc25: lea    rcx,[rsp+0x28]
0x00ebdc2a: call   0x1400bb870
0x00ebdc2f: lea    rdx,[rip+0x8705ea]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebdc36: lea    rcx,[rsp+0x28]
0x00ebdc3b: call   0x1400bb870
0x00ebdc40: lea    rdx,[rip+0x870509]        # 0x14172e150 ; literal="[NAME:"
0x00ebdc47: lea    rcx,[rbp+0x200]
0x00ebdc4e: call   0x14006f510
0x00ebdc53: lea    rdx,[rbp+0x340]
0x00ebdc5a: lea    rcx,[rbp+0x200]
0x00ebdc61: call   0x1400b9ca0
0x00ebdc66: lea    rdx,[rip+0x866d8f]        # 0x1417249fc ; literal=" body"
0x00ebdc6d: lea    rcx,[rbp+0x200]
0x00ebdc74: call   0x14006f4f0
0x00ebdc79: lea    rdx,[rip+0x755784]        # 0x141613404 ; literal=":"
0x00ebdc80: lea    rcx,[rbp+0x200]
0x00ebdc87: call   0x14006f4f0
0x00ebdc8c: lea    rdx,[rbp+0x340]
0x00ebdc93: lea    rcx,[rbp+0x200]
0x00ebdc9a: call   0x1400b9ca0
0x00ebdc9f: lea    rdx,[rip+0x8705f2]        # 0x14172e298 ; literal=" bodies"
0x00ebdca6: lea    rcx,[rbp+0x200]
0x00ebdcad: call   0x14006f4f0
0x00ebdcb2: lea    rdx,[rip+0x73a9ab]        # 0x1415f8664 ; literal="]"
0x00ebdcb9: lea    rcx,[rbp+0x200]
0x00ebdcc0: call   0x14006f4f0
0x00ebdcc5: lea    rdx,[rbp+0x200]
0x00ebdccc: lea    rcx,[rsp+0x28]
0x00ebdcd1: call   0x1400bb700
0x00ebdcd6: lea    rdx,[rip+0x87044b]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebdcdd: lea    rcx,[rsp+0x28]
0x00ebdce2: call   0x1400bb870
0x00ebdce7: lea    r8,[rbp-0x7c]
0x00ebdceb: lea    rdx,[rsp+0x28]
0x00ebdcf0: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebdcf5: call   0x140eb4380
0x00ebdcfa: lea    rdx,[rip+0x870407]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebdd01: lea    rcx,[rsp+0x28]
0x00ebdd06: call   0x1400bb870
0x00ebdd0b: lea    rdx,[rip+0x870436]        # 0x14172e148 ; literal="[SIZE:"
0x00ebdd12: lea    rcx,[rbp+0x200]
0x00ebdd19: call   0x14006f510
0x00ebdd1e: lea    rdx,[rbp+0x200]
0x00ebdd25: mov    ecx,r14d
0x00ebdd28: call   0x140529cf0
0x00ebdd2d: lea    rdx,[rip+0x73a930]        # 0x1415f8664 ; literal="]"
0x00ebdd34: lea    rcx,[rbp+0x200]
0x00ebdd3b: call   0x14006f4f0
0x00ebdd40: lea    rdx,[rbp+0x200]
0x00ebdd47: lea    rcx,[rsp+0x28]
0x00ebdd4c: call   0x1400bb700
0x00ebdd51: lea    rdx,[rip+0x8703e0]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebdd58: lea    rcx,[rbp+0x200]
0x00ebdd5f: call   0x14006f510
0x00ebdd64: lea    rdx,[rbp+0x200]
0x00ebdd6b: mov    ecx,esi
0x00ebdd6d: call   0x140529cf0
0x00ebdd72: lea    rdx,[rip+0x73a8eb]        # 0x1415f8664 ; literal="]"
0x00ebdd79: lea    rcx,[rbp+0x200]
0x00ebdd80: call   0x14006f4f0
0x00ebdd85: lea    rdx,[rbp+0x200]
0x00ebdd8c: lea    rcx,[rsp+0x28]
0x00ebdd91: call   0x1400bb700
0x00ebdd96: lea    rdx,[rip+0x87046b]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebdd9d: lea    rcx,[rbp+0x200]
0x00ebdda4: call   0x14006f510
0x00ebdda9: lea    rdx,[rbp+0x340]
0x00ebddb0: lea    rcx,[rbp+0x200]
0x00ebddb7: call   0x1400b9ca0
0x00ebddbc: lea    rdx,[rip+0x870135]        # 0x14172def8 ; literal=" body of the instrument vibrates with the string"
0x00ebddc3: lea    rcx,[rbp+0x200]
0x00ebddca: call   0x14006f4f0
0x00ebddcf: cmp    r15d,0x2
0x00ebddd3: jl     0x140ebdde8
0x00ebddd5: lea    rdx,[rip+0x726444]        # 0x1415e4220 ; literal="s"
0x00ebdddc: lea    rcx,[rbp+0x200]
0x00ebdde3: call   0x14006f4f0
0x00ebdde8: lea    rdx,[rip+0x8700c9]        # 0x14172deb8 ; literal=", producing sound.]"
0x00ebddef: lea    rcx,[rbp+0x200]
0x00ebddf6: call   0x14006f4f0
0x00ebddfb: lea    rdx,[rbp+0x200]
0x00ebde02: lea    rcx,[rsp+0x28]
0x00ebde07: call   0x1400bb700
0x00ebde0c: mov    ecx,0x3
0x00ebde11: call   0x140071ec0
0x00ebde16: test   eax,eax
0x00ebde18: je     0x140ebde28
0x00ebde1a: cmp    eax,0x1
0x00ebde1d: jne    0x140ebde2d
0x00ebde1f: movzx  edi,al
0x00ebde22: mov    BYTE PTR [rsp+0x40],al
0x00ebde26: jmp    0x140ebde32
0x00ebde28: mov    BYTE PTR [rsp+0x48],0x1
0x00ebde2d: movzx  edi,BYTE PTR [rsp+0x40]
0x00ebde32: mov    ecx,0x14
0x00ebde37: call   0x140071ec0
0x00ebde3c: mov    ecx,DWORD PTR [rsp+0x64]
0x00ebde40: movzx  ecx,cl
0x00ebde43: test   eax,eax
0x00ebde45: mov    eax,0x1
0x00ebde4a: cmove  ecx,eax
0x00ebde4d: mov    DWORD PTR [rsp+0x64],ecx
0x00ebde51: movzx  esi,BYTE PTR [rsp+0x45]
0x00ebde56: movzx  r14d,sil
0x00ebde5a: jmp    0x140ebc450
0x00ebde5f: test   dil,dil
0x00ebde62: je     0x140ebdeab
0x00ebde64: lea    rdx,[rip+0x87117d]        # 0x14172efe8 ; literal=" plectrum"
0x00ebde6b: call   0x14006f4f0
0x00ebde70: lea    rdx,[rip+0x75558d]        # 0x141613404 ; literal=":"
0x00ebde77: lea    rcx,[rbp+0x200]
0x00ebde7e: call   0x14006f4f0
0x00ebde83: lea    rdx,[rbp+0x340]
0x00ebde8a: lea    rcx,[rbp+0x200]
0x00ebde91: call   0x1400b9ca0
0x00ebde96: lea    rdx,[rip+0x8710fb]        # 0x14172ef98 ; literal=" plectra"
0x00ebde9d: lea    rcx,[rbp+0x200]
0x00ebdea4: call   0x14006f4f0
0x00ebdea9: jmp    0x140ebdf18
0x00ebdeab: cmp    BYTE PTR [rsp+0x20],0x0
0x00ebdeb0: je     0x140ebdef9
0x00ebdeb2: lea    rdx,[rip+0x87114f]        # 0x14172f008 ; literal=" hammers"
0x00ebdeb9: call   0x14006f4f0
0x00ebdebe: lea    rdx,[rip+0x75553f]        # 0x141613404 ; literal=":"
0x00ebdec5: lea    rcx,[rbp+0x200]
0x00ebdecc: call   0x14006f4f0
0x00ebded1: lea    rdx,[rbp+0x340]
0x00ebded8: lea    rcx,[rbp+0x200]
0x00ebdedf: call   0x1400b9ca0
0x00ebdee4: lea    rdx,[rip+0x87111d]        # 0x14172f008 ; literal=" hammers"
0x00ebdeeb: lea    rcx,[rbp+0x200]
0x00ebdef2: call   0x14006f4f0
0x00ebdef7: jmp    0x140ebdf18
0x00ebdef9: lea    rdx,[rip+0x755504]        # 0x141613404 ; literal=":"
0x00ebdf00: call   0x14006f4f0
0x00ebdf05: lea    rdx,[rbp+0x340]
0x00ebdf0c: lea    rcx,[rbp+0x200]
0x00ebdf13: call   0x1400b9ca0
0x00ebdf18: lea    rdx,[rip+0x73a745]        # 0x1415f8664 ; literal="]"
0x00ebdf1f: lea    rcx,[rbp+0x200]
0x00ebdf26: call   0x14006f4f0
0x00ebdf2b: lea    rdx,[rbp+0x200]
0x00ebdf32: lea    rcx,[rsp+0x28]
0x00ebdf37: call   0x1400bb700
0x00ebdf3c: lea    rdx,[rip+0x8701e5]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebdf43: lea    rcx,[rsp+0x28]
0x00ebdf48: call   0x1400bb870
0x00ebdf4d: lea    r8,[rbp-0x58]
0x00ebdf51: lea    rdx,[rsp+0x28]
0x00ebdf56: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebdf5b: call   0x140eb4380
0x00ebdf60: lea    rdx,[rip+0x8701a1]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebdf67: lea    rcx,[rsp+0x28]
0x00ebdf6c: call   0x1400bb870
0x00ebdf71: lea    rdx,[rip+0x8701d0]        # 0x14172e148 ; literal="[SIZE:"
0x00ebdf78: lea    rcx,[rbp+0x200]
0x00ebdf7f: call   0x14006f510
0x00ebdf84: lea    rdx,[rbp+0x200]
0x00ebdf8b: mov    ecx,ebx
0x00ebdf8d: call   0x140529cf0
0x00ebdf92: lea    rdx,[rip+0x73a6cb]        # 0x1415f8664 ; literal="]"
0x00ebdf99: lea    rcx,[rbp+0x200]
0x00ebdfa0: call   0x14006f4f0
0x00ebdfa5: lea    rdx,[rbp+0x200]
0x00ebdfac: lea    rcx,[rsp+0x28]
0x00ebdfb1: call   0x1400bb700
0x00ebdfb6: lea    rdx,[rip+0x87017b]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebdfbd: lea    rcx,[rbp+0x200]
0x00ebdfc4: call   0x14006f510
0x00ebdfc9: lea    rdx,[rbp+0x200]
0x00ebdfd0: mov    ecx,0x3
0x00ebdfd5: call   0x140529cf0
0x00ebdfda: lea    rdx,[rip+0x73a683]        # 0x1415f8664 ; literal="]"
0x00ebdfe1: lea    rcx,[rbp+0x200]
0x00ebdfe8: call   0x14006f4f0
0x00ebdfed: lea    rdx,[rbp+0x200]
0x00ebdff4: lea    rcx,[rsp+0x28]
0x00ebdff9: call   0x1400bb700
0x00ebdffe: lea    rdx,[rip+0x870203]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebe005: lea    rcx,[rbp+0x200]
0x00ebe00c: call   0x14006f510
0x00ebe011: lea    rdx,[rbp+0x340]
0x00ebe018: lea    rcx,[rbp+0x200]
0x00ebe01f: call   0x1400b9ca0
0x00ebe024: test   r12b,r12b
0x00ebe027: je     0x140ebe032
0x00ebe029: lea    rdx,[rip+0x870f48]        # 0x14172ef78 ; literal=" bow is drawn across the string"
0x00ebe030: jmp    0x140ebe04e
0x00ebe032: test   dil,dil
0x00ebe035: je     0x140ebe040
0x00ebe037: lea    rdx,[rip+0x870f8a]        # 0x14172efc8 ; literal=" plectrum plucks the string"
0x00ebe03e: jmp    0x140ebe04e
0x00ebe040: cmp    BYTE PTR [rsp+0x20],0x0
0x00ebe045: je     0x140ebe05a
0x00ebe047: lea    rdx,[rip+0x870f5a]        # 0x14172efa8 ; literal=" hammers strike the string"
0x00ebe04e: lea    rcx,[rbp+0x200]
0x00ebe055: call   0x14006f4f0
0x00ebe05a: cmp    r15d,0x2
0x00ebe05e: jl     0x140ebe073
0x00ebe060: lea    rdx,[rip+0x7261b9]        # 0x1415e4220 ; literal="s"
0x00ebe067: lea    rcx,[rbp+0x200]
0x00ebe06e: call   0x14006f4f0
0x00ebe073: lea    rdx,[rip+0x870fee]        # 0x14172f068 ; literal=" of the instrument.]"
0x00ebe07a: lea    rcx,[rbp+0x200]
0x00ebe081: call   0x14006f4f0
0x00ebe086: lea    rdx,[rbp+0x200]
0x00ebe08d: lea    rcx,[rsp+0x28]
0x00ebe092: call   0x1400bb700
0x00ebe097: mov    ebx,DWORD PTR [rsp+0x64]
0x00ebe09b: test   bl,bl
0x00ebe09d: je     0x140ebe39e
0x00ebe0a3: lea    rdx,[rip+0x86f526]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebe0aa: lea    rcx,[rbp+0x200]
0x00ebe0b1: call   0x14006f510
0x00ebe0b6: lea    rdx,[rbp+0x580]
0x00ebe0bd: lea    rcx,[rbp+0x200]
0x00ebe0c4: call   0x1400b9ca0
0x00ebe0c9: lea    rdx,[rip+0x73a594]        # 0x1415f8664 ; literal="]"
0x00ebe0d0: lea    rcx,[rbp+0x200]
0x00ebe0d7: call   0x14006f4f0
0x00ebe0dc: lea    rdx,[rbp+0x200]
0x00ebe0e3: lea    rcx,[rsp+0x28]
0x00ebe0e8: call   0x1400bb700
0x00ebe0ed: lea    rdx,[rip+0x7e7ee4]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebe0f4: lea    rcx,[rsp+0x28]
0x00ebe0f9: call   0x1400bb870
0x00ebe0fe: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe103: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebe107: je     0x140ebe167
0x00ebe109: lea    rdx,[rip+0x86e950]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebe110: lea    rcx,[rbp+0xa80]
0x00ebe117: call   0x1400680e0
0x00ebe11c: nop
0x00ebe11d: lea    rdx,[rbp+0xa80]
0x00ebe124: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe129: mov    ecx,DWORD PTR [rax+0x40]
0x00ebe12c: call   0x140529cf0
0x00ebe131: lea    rdx,[rip+0x73a52c]        # 0x1415f8664 ; literal="]"
0x00ebe138: lea    rcx,[rbp+0xa80]
0x00ebe13f: call   0x14006f4f0
0x00ebe144: lea    rdx,[rbp+0xa80]
0x00ebe14b: lea    rcx,[rsp+0x28]
0x00ebe150: call   0x1400bb700
0x00ebe155: nop
0x00ebe156: lea    rcx,[rbp+0xa80]
0x00ebe15d: call   0x140067dc0
0x00ebe162: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe167: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebe16b: je     0x140ebe1c6
0x00ebe16d: lea    rdx,[rip+0x86e8dc]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebe174: lea    rcx,[rbp+0xaa0]
0x00ebe17b: call   0x1400680e0
0x00ebe180: nop
0x00ebe181: lea    rdx,[rbp+0xaa0]
0x00ebe188: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe18d: mov    ecx,DWORD PTR [rax+0x44]
0x00ebe190: call   0x140529cf0
0x00ebe195: lea    rdx,[rip+0x73a4c8]        # 0x1415f8664 ; literal="]"
0x00ebe19c: lea    rcx,[rbp+0xaa0]
0x00ebe1a3: call   0x14006f4f0
0x00ebe1a8: lea    rdx,[rbp+0xaa0]
0x00ebe1af: lea    rcx,[rsp+0x28]
0x00ebe1b4: call   0x1400bb700
0x00ebe1b9: nop
0x00ebe1ba: lea    rcx,[rbp+0xaa0]
0x00ebe1c1: call   0x140067dc0
0x00ebe1c6: lea    rdx,[rip+0x86f3eb]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebe1cd: lea    rcx,[rsp+0x28]
0x00ebe1d2: call   0x1400bb870
0x00ebe1d7: lea    rdx,[rip+0x86ff7a]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebe1de: lea    rcx,[rsp+0x28]
0x00ebe1e3: call   0x1400bb870
0x00ebe1e8: lea    rdx,[rip+0x870031]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebe1ef: lea    rcx,[rsp+0x28]
0x00ebe1f4: call   0x1400bb870
0x00ebe1f9: lea    rdx,[rip+0x86ff50]        # 0x14172e150 ; literal="[NAME:"
0x00ebe200: lea    rcx,[rbp+0x200]
0x00ebe207: call   0x14006f510
0x00ebe20c: lea    rdx,[rbp+0x340]
0x00ebe213: lea    rcx,[rbp+0x200]
0x00ebe21a: call   0x1400b9ca0
0x00ebe21f: lea    rdx,[rip+0x870e32]        # 0x14172f058 ; literal=" neck bowl"
0x00ebe226: lea    rcx,[rbp+0x200]
0x00ebe22d: call   0x14006f4f0
0x00ebe232: lea    rdx,[rip+0x7551cb]        # 0x141613404 ; literal=":"
0x00ebe239: lea    rcx,[rbp+0x200]
0x00ebe240: call   0x14006f4f0
0x00ebe245: lea    rdx,[rbp+0x340]
0x00ebe24c: lea    rcx,[rbp+0x200]
0x00ebe253: call   0x1400b9ca0
0x00ebe258: lea    rdx,[rip+0x870e69]        # 0x14172f0c8 ; literal=" neck bowls"
0x00ebe25f: lea    rcx,[rbp+0x200]
0x00ebe266: call   0x14006f4f0
0x00ebe26b: lea    rdx,[rip+0x73a3f2]        # 0x1415f8664 ; literal="]"
0x00ebe272: lea    rcx,[rbp+0x200]
0x00ebe279: call   0x14006f4f0
0x00ebe27e: lea    rdx,[rbp+0x200]
0x00ebe285: lea    rcx,[rsp+0x28]
0x00ebe28a: call   0x1400bb700
0x00ebe28f: lea    rdx,[rip+0x86fe92]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebe296: lea    rcx,[rsp+0x28]
0x00ebe29b: call   0x1400bb870
0x00ebe2a0: lea    r8,[rbp-0x14]
0x00ebe2a4: lea    rdx,[rsp+0x28]
0x00ebe2a9: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebe2ae: call   0x140eb4380
0x00ebe2b3: lea    rdx,[rip+0x86fe4e]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebe2ba: lea    rcx,[rsp+0x28]
0x00ebe2bf: call   0x1400bb870
0x00ebe2c4: lea    rdx,[rip+0x86fe7d]        # 0x14172e148 ; literal="[SIZE:"
0x00ebe2cb: lea    rcx,[rbp+0x200]
0x00ebe2d2: call   0x14006f510
0x00ebe2d7: lea    rdx,[rbp+0x200]
0x00ebe2de: mov    ecx,0x7d0
0x00ebe2e3: call   0x140529cf0
0x00ebe2e8: lea    rdx,[rip+0x73a375]        # 0x1415f8664 ; literal="]"
0x00ebe2ef: lea    rcx,[rbp+0x200]
0x00ebe2f6: call   0x14006f4f0
0x00ebe2fb: lea    rdx,[rbp+0x200]
0x00ebe302: lea    rcx,[rsp+0x28]
0x00ebe307: call   0x1400bb700
0x00ebe30c: lea    rdx,[rip+0x86fe25]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ebe313: lea    rcx,[rbp+0x200]
0x00ebe31a: call   0x14006f510
0x00ebe31f: lea    rdx,[rbp+0x200]
0x00ebe326: mov    ecx,0x3
0x00ebe32b: call   0x140529cf0
0x00ebe330: lea    rdx,[rip+0x73a32d]        # 0x1415f8664 ; literal="]"
0x00ebe337: lea    rcx,[rbp+0x200]
0x00ebe33e: call   0x14006f4f0
0x00ebe343: lea    rdx,[rbp+0x200]
0x00ebe34a: lea    rcx,[rsp+0x28]
0x00ebe34f: call   0x1400bb700
0x00ebe354: lea    rdx,[rip+0x86fead]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ebe35b: lea    rcx,[rbp+0x200]
0x00ebe362: call   0x14006f510
0x00ebe367: lea    rdx,[rbp+0x340]
0x00ebe36e: lea    rcx,[rbp+0x200]
0x00ebe375: call   0x1400b9ca0
0x00ebe37a: lea    rdx,[rip+0x870cff]        # 0x14172f080 ; literal=" neck bowl vibrates with the rest of the instrument, producing sound.]"
0x00ebe381: lea    rcx,[rbp+0x200]
0x00ebe388: call   0x14006f4f0
0x00ebe38d: lea    rdx,[rbp+0x200]
0x00ebe394: lea    rcx,[rsp+0x28]
0x00ebe399: call   0x1400bb700
0x00ebe39e: lea    rdx,[rip+0x86ff3b]        # 0x14172e2e0 ; literal="[ITEM_INSTRUMENT:"
0x00ebe3a5: lea    rcx,[rbp+0x200]
0x00ebe3ac: call   0x14006f510
0x00ebe3b1: lea    rdx,[rbp+0x420]
0x00ebe3b8: lea    rcx,[rbp+0x200]
0x00ebe3bf: call   0x1400b9ca0
0x00ebe3c4: lea    rdx,[rip+0x73a299]        # 0x1415f8664 ; literal="]"
0x00ebe3cb: lea    rcx,[rbp+0x200]
0x00ebe3d2: call   0x14006f4f0
0x00ebe3d7: lea    rdx,[rbp+0x200]
0x00ebe3de: lea    rcx,[rsp+0x28]
0x00ebe3e3: call   0x1400bb700
0x00ebe3e8: lea    rdx,[rip+0x7e7be9]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebe3ef: lea    rcx,[rsp+0x28]
0x00ebe3f4: call   0x1400bb870
0x00ebe3f9: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe3fe: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebe402: je     0x140ebe462
0x00ebe404: lea    rdx,[rip+0x86e655]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebe40b: lea    rcx,[rbp+0xac0]
0x00ebe412: call   0x1400680e0
0x00ebe417: nop
0x00ebe418: lea    rdx,[rbp+0xac0]
0x00ebe41f: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe424: mov    ecx,DWORD PTR [rax+0x40]
0x00ebe427: call   0x140529cf0
0x00ebe42c: lea    rdx,[rip+0x73a231]        # 0x1415f8664 ; literal="]"
0x00ebe433: lea    rcx,[rbp+0xac0]
0x00ebe43a: call   0x14006f4f0
0x00ebe43f: lea    rdx,[rbp+0xac0]
0x00ebe446: lea    rcx,[rsp+0x28]
0x00ebe44b: call   0x1400bb700
0x00ebe450: nop
0x00ebe451: lea    rcx,[rbp+0xac0]
0x00ebe458: call   0x140067dc0
0x00ebe45d: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe462: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebe466: je     0x140ebe4c1
0x00ebe468: lea    rdx,[rip+0x86e5e1]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebe46f: lea    rcx,[rbp+0xe20]
0x00ebe476: call   0x1400680e0
0x00ebe47b: nop
0x00ebe47c: lea    rdx,[rbp+0xe20]
0x00ebe483: mov    rax,QWORD PTR [rsp+0x50]
0x00ebe488: mov    ecx,DWORD PTR [rax+0x44]
0x00ebe48b: call   0x140529cf0
0x00ebe490: lea    rdx,[rip+0x73a1cd]        # 0x1415f8664 ; literal="]"
0x00ebe497: lea    rcx,[rbp+0xe20]
0x00ebe49e: call   0x14006f4f0
0x00ebe4a3: lea    rdx,[rbp+0xe20]
0x00ebe4aa: lea    rcx,[rsp+0x28]
0x00ebe4af: call   0x1400bb700
0x00ebe4b4: nop
0x00ebe4b5: lea    rcx,[rbp+0xe20]
0x00ebe4bc: call   0x140067dc0
0x00ebe4c1: lea    rdx,[rip+0x86fc88]        # 0x14172e150 ; literal="[NAME:"
0x00ebe4c8: lea    rcx,[rbp+0x200]
0x00ebe4cf: call   0x14006f510
0x00ebe4d4: lea    rdx,[rbp+0x340]
0x00ebe4db: lea    rcx,[rbp+0x200]
0x00ebe4e2: call   0x1400b9ca0
0x00ebe4e7: lea    rdx,[rip+0x754f16]        # 0x141613404 ; literal=":"
0x00ebe4ee: lea    rcx,[rbp+0x200]
0x00ebe4f5: call   0x14006f4f0
0x00ebe4fa: lea    rdx,[rbp+0x340]
0x00ebe501: lea    rcx,[rbp+0x200]
0x00ebe508: call   0x1400b9ca0
0x00ebe50d: lea    rdx,[rip+0x73a150]        # 0x1415f8664 ; literal="]"
0x00ebe514: lea    rcx,[rbp+0x200]
0x00ebe51b: call   0x14006f4f0
0x00ebe520: lea    rdx,[rbp+0x200]
0x00ebe527: lea    rcx,[rsp+0x28]
0x00ebe52c: call   0x1400bb700
0x00ebe531: lea    rdx,[rip+0x86fe10]        # 0x14172e348 ; literal="[VALUE:50]"
0x00ebe538: lea    rcx,[rsp+0x28]
0x00ebe53d: call   0x1400bb870
0x00ebe542: lea    rdx,[rip+0x86fbff]        # 0x14172e148 ; literal="[SIZE:"
0x00ebe549: lea    rcx,[rbp+0x200]
0x00ebe550: call   0x14006f510
0x00ebe555: lea    rdx,[rbp+0x200]
0x00ebe55c: mov    ecx,r13d
0x00ebe55f: call   0x140529cf0
0x00ebe564: lea    rdx,[rip+0x73a0f9]        # 0x1415f8664 ; literal="]"
0x00ebe56b: lea    rcx,[rbp+0x200]
0x00ebe572: call   0x14006f4f0
0x00ebe577: lea    rdx,[rbp+0x200]
0x00ebe57e: lea    rcx,[rsp+0x28]
0x00ebe583: call   0x1400bb700
0x00ebe588: cmp    r13d,0x9c40
0x00ebe58f: jl     0x140ebe5a2
0x00ebe591: lea    rdx,[rip+0x86fd98]        # 0x14172e330 ; literal="[PLACED_AS_BUILDING]"
0x00ebe598: lea    rcx,[rsp+0x28]
0x00ebe59d: call   0x1400bb870
0x00ebe5a2: cmp    BYTE PTR [rsp+0x47],0x0
0x00ebe5a7: je     0x140ebe69e
0x00ebe5ad: lea    rdx,[rip+0x86fe54]        # 0x14172e408 ; literal="[DOMINANT_MATERIAL_PIECE:BODY]"
0x00ebe5b4: lea    rcx,[rsp+0x28]
0x00ebe5b9: call   0x1400bb870
0x00ebe5be: lea    rdx,[rip+0x86fe2b]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe5c5: lea    rcx,[rbp+0x200]
0x00ebe5cc: call   0x14006f510
0x00ebe5d1: lea    rdx,[rip+0x870a4c]        # 0x14172f024 ; literal="NECK:"
0x00ebe5d8: lea    rcx,[rbp+0x200]
0x00ebe5df: call   0x14006f4f0
0x00ebe5e4: lea    rdx,[rbp+0x5e0]
0x00ebe5eb: lea    rcx,[rbp+0x200]
0x00ebe5f2: call   0x1400b9ca0
0x00ebe5f7: lea    rdx,[rip+0x870a1a]        # 0x14172f018 ; literal=":neck:necks"
0x00ebe5fe: lea    rcx,[rbp+0x200]
0x00ebe605: call   0x14006f4f0
0x00ebe60a: lea    rdx,[rip+0x86fda7]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe611: lea    rcx,[rbp+0x200]
0x00ebe618: call   0x14006f4f0
0x00ebe61d: lea    rdx,[rbp+0x200]
0x00ebe624: lea    rcx,[rsp+0x28]
0x00ebe629: call   0x1400bb700
0x00ebe62e: lea    rdx,[rip+0x86fdbb]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe635: lea    rcx,[rbp+0x200]
0x00ebe63c: call   0x14006f510
0x00ebe641: lea    rdx,[rip+0x86fd64]        # 0x14172e3ac ; literal="BODY:"
0x00ebe648: lea    rcx,[rbp+0x200]
0x00ebe64f: call   0x14006f4f0
0x00ebe654: lea    rdx,[rbp+0x3e0]
0x00ebe65b: lea    rcx,[rbp+0x200]
0x00ebe662: call   0x1400b9ca0
0x00ebe667: lea    rdx,[rip+0x86fe32]        # 0x14172e4a0 ; literal=":body:bodies"
0x00ebe66e: lea    rcx,[rbp+0x200]
0x00ebe675: call   0x14006f4f0
0x00ebe67a: lea    rdx,[rip+0x86fd37]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe681: lea    rcx,[rbp+0x200]
0x00ebe688: call   0x14006f4f0
0x00ebe68d: lea    rdx,[rbp+0x200]
0x00ebe694: lea    rcx,[rsp+0x28]
0x00ebe699: call   0x1400bb700
0x00ebe69e: test   sil,sil
0x00ebe6a1: je     0x140ebe798
0x00ebe6a7: lea    rdx,[rip+0x87098a]        # 0x14172f038 ; literal="[DOMINANT_MATERIAL_PIECE:FRAME]"
0x00ebe6ae: lea    rcx,[rsp+0x28]
0x00ebe6b3: call   0x1400bb870
0x00ebe6b8: lea    rdx,[rip+0x86fd31]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe6bf: lea    rcx,[rbp+0x200]
0x00ebe6c6: call   0x14006f510
0x00ebe6cb: lea    rdx,[rip+0x87095a]        # 0x14172f02c ; literal="FRAME:"
0x00ebe6d2: lea    rcx,[rbp+0x200]
0x00ebe6d9: call   0x14006f4f0
0x00ebe6de: lea    rdx,[rbp+0x5c0]
0x00ebe6e5: lea    rcx,[rbp+0x200]
0x00ebe6ec: call   0x1400b9ca0
0x00ebe6f1: lea    rdx,[rip+0x870a40]        # 0x14172f138 ; literal=":frame:frames"
0x00ebe6f8: lea    rcx,[rbp+0x200]
0x00ebe6ff: call   0x14006f4f0
0x00ebe704: lea    rdx,[rip+0x86fcad]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe70b: lea    rcx,[rbp+0x200]
0x00ebe712: call   0x14006f4f0
0x00ebe717: lea    rdx,[rbp+0x200]
0x00ebe71e: lea    rcx,[rsp+0x28]
0x00ebe723: call   0x1400bb700
0x00ebe728: lea    rdx,[rip+0x86fcc1]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe72f: lea    rcx,[rbp+0x200]
0x00ebe736: call   0x14006f510
0x00ebe73b: lea    rdx,[rip+0x86fc6a]        # 0x14172e3ac ; literal="BODY:"
0x00ebe742: lea    rcx,[rbp+0x200]
0x00ebe749: call   0x14006f4f0
0x00ebe74e: lea    rdx,[rbp+0x3e0]
0x00ebe755: lea    rcx,[rbp+0x200]
0x00ebe75c: call   0x1400b9ca0
0x00ebe761: lea    rdx,[rip+0x86fd38]        # 0x14172e4a0 ; literal=":body:bodies"
0x00ebe768: lea    rcx,[rbp+0x200]
0x00ebe76f: call   0x14006f4f0
0x00ebe774: lea    rdx,[rip+0x86fc3d]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe77b: lea    rcx,[rbp+0x200]
0x00ebe782: call   0x14006f4f0
0x00ebe787: lea    rdx,[rbp+0x200]
0x00ebe78e: lea    rcx,[rsp+0x28]
0x00ebe793: call   0x1400bb700
0x00ebe798: cmp    BYTE PTR [rsp+0x42],0x0
0x00ebe79d: je     0x140ebe824
0x00ebe7a3: lea    rdx,[rip+0x86fc5e]        # 0x14172e408 ; literal="[DOMINANT_MATERIAL_PIECE:BODY]"
0x00ebe7aa: lea    rcx,[rsp+0x28]
0x00ebe7af: call   0x1400bb870
0x00ebe7b4: lea    rdx,[rip+0x86fc35]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe7bb: lea    rcx,[rbp+0x200]
0x00ebe7c2: call   0x14006f510
0x00ebe7c7: lea    rdx,[rip+0x86fbde]        # 0x14172e3ac ; literal="BODY:"
0x00ebe7ce: lea    rcx,[rbp+0x200]
0x00ebe7d5: call   0x14006f4f0
0x00ebe7da: lea    rdx,[rbp+0x3e0]
0x00ebe7e1: lea    rcx,[rbp+0x200]
0x00ebe7e8: call   0x1400b9ca0
0x00ebe7ed: lea    rdx,[rip+0x86fcac]        # 0x14172e4a0 ; literal=":body:bodies"
0x00ebe7f4: lea    rcx,[rbp+0x200]
0x00ebe7fb: call   0x14006f4f0
0x00ebe800: lea    rdx,[rip+0x86fbb1]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe807: lea    rcx,[rbp+0x200]
0x00ebe80e: call   0x14006f4f0
0x00ebe813: lea    rdx,[rbp+0x200]
0x00ebe81a: lea    rcx,[rsp+0x28]
0x00ebe81f: call   0x1400bb700
0x00ebe824: test   r14b,r14b
0x00ebe827: je     0x140ebe91e
0x00ebe82d: lea    rdx,[rip+0x86fbd4]        # 0x14172e408 ; literal="[DOMINANT_MATERIAL_PIECE:BODY]"
0x00ebe834: lea    rcx,[rsp+0x28]
0x00ebe839: call   0x1400bb870
0x00ebe83e: lea    rdx,[rip+0x86fbab]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe845: lea    rcx,[rbp+0x200]
0x00ebe84c: call   0x14006f510
0x00ebe851: lea    rdx,[rip+0x8708d4]        # 0x14172f12c ; literal="YOKE:"
0x00ebe858: lea    rcx,[rbp+0x200]
0x00ebe85f: call   0x14006f4f0
0x00ebe864: lea    rdx,[rbp+0x5a0]
0x00ebe86b: lea    rcx,[rbp+0x200]
0x00ebe872: call   0x1400b9ca0
0x00ebe877: lea    rdx,[rip+0x8708ea]        # 0x14172f168 ; literal=":yoke:yokes"
0x00ebe87e: lea    rcx,[rbp+0x200]
0x00ebe885: call   0x14006f4f0
0x00ebe88a: lea    rdx,[rip+0x86fb27]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe891: lea    rcx,[rbp+0x200]
0x00ebe898: call   0x14006f4f0
0x00ebe89d: lea    rdx,[rbp+0x200]
0x00ebe8a4: lea    rcx,[rsp+0x28]
0x00ebe8a9: call   0x1400bb700
0x00ebe8ae: lea    rdx,[rip+0x86fb3b]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe8b5: lea    rcx,[rbp+0x200]
0x00ebe8bc: call   0x14006f510
0x00ebe8c1: lea    rdx,[rip+0x86fae4]        # 0x14172e3ac ; literal="BODY:"
0x00ebe8c8: lea    rcx,[rbp+0x200]
0x00ebe8cf: call   0x14006f4f0
0x00ebe8d4: lea    rdx,[rbp+0x3e0]
0x00ebe8db: lea    rcx,[rbp+0x200]
0x00ebe8e2: call   0x1400b9ca0
0x00ebe8e7: lea    rdx,[rip+0x87085a]        # 0x14172f148 ; literal=":sound-chest:sound-chests"
0x00ebe8ee: lea    rcx,[rbp+0x200]
0x00ebe8f5: call   0x14006f4f0
0x00ebe8fa: lea    rdx,[rip+0x86fab7]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebe901: lea    rcx,[rbp+0x200]
0x00ebe908: call   0x14006f4f0
0x00ebe90d: lea    rdx,[rbp+0x200]
0x00ebe914: lea    rcx,[rsp+0x28]
0x00ebe919: call   0x1400bb700
0x00ebe91e: lea    rdx,[rip+0x86facb]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe925: lea    rcx,[rbp+0x200]
0x00ebe92c: call   0x14006f510
0x00ebe931: lea    rdx,[rip+0x8707c0]        # 0x14172f0f8 ; literal="STRINGS:"
0x00ebe938: lea    rcx,[rbp+0x200]
0x00ebe93f: call   0x14006f4f0
0x00ebe944: lea    rdx,[rbp+0x740]
0x00ebe94b: lea    rcx,[rbp+0x200]
0x00ebe952: call   0x1400b9ca0
0x00ebe957: lea    rcx,[rbp+0x200]
0x00ebe95e: cmp    r15d,0x2
0x00ebe962: lea    rdx,[rip+0x87076f]        # 0x14172f0d8 ; literal=":strings:strings:ALWAYS_PLURAL]"
0x00ebe969: jge    0x140ebe972
0x00ebe96b: lea    rdx,[rip+0x87079e]        # 0x14172f110 ; literal=":string:strings:STANDARD]"
0x00ebe972: call   0x14006f4f0
0x00ebe977: lea    rdx,[rbp+0x200]
0x00ebe97e: lea    rcx,[rsp+0x28]
0x00ebe983: call   0x1400bb700
0x00ebe988: lea    rcx,[rbp+0x540]
0x00ebe98f: call   0x14006f4b0
0x00ebe994: test   al,al
0x00ebe996: jne    0x140ebea1c
0x00ebe99c: lea    rdx,[rip+0x86fa4d]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebe9a3: lea    rcx,[rbp+0x200]
0x00ebe9aa: call   0x14006f510
0x00ebe9af: lea    rdx,[rip+0x87074e]        # 0x14172f104 ; literal="PROD:"
0x00ebe9b6: lea    rcx,[rbp+0x200]
0x00ebe9bd: call   0x14006f4f0
0x00ebe9c2: lea    rdx,[rbp+0x540]
0x00ebe9c9: lea    rcx,[rbp+0x200]
0x00ebe9d0: call   0x1400b9ca0
0x00ebe9d5: test   r12b,r12b
0x00ebe9d8: je     0x140ebe9e3
0x00ebe9da: lea    rdx,[rip+0x870847]        # 0x14172f228 ; literal=":bow:bows:STANDARD]"
0x00ebe9e1: jmp    0x140ebe9ff
0x00ebe9e3: test   dil,dil
0x00ebe9e6: je     0x140ebe9f1
0x00ebe9e8: lea    rdx,[rip+0x870819]        # 0x14172f208 ; literal=":plectrum:plectra:STANDARD]"
0x00ebe9ef: jmp    0x140ebe9ff
0x00ebe9f1: cmp    BYTE PTR [rsp+0x20],0x0
0x00ebe9f6: je     0x140ebea0b
0x00ebe9f8: lea    rdx,[rip+0x870851]        # 0x14172f250 ; literal=":hammers:hammers:ALWAYS_PLURAL]"
0x00ebe9ff: lea    rcx,[rbp+0x200]
0x00ebea06: call   0x14006f4f0
0x00ebea0b: lea    rdx,[rbp+0x200]
0x00ebea12: lea    rcx,[rsp+0x28]
0x00ebea17: call   0x1400bb700
0x00ebea1c: test   bl,bl
0x00ebea1e: je     0x140ebea90
0x00ebea20: lea    rdx,[rip+0x86f9c9]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ebea27: lea    rcx,[rbp+0x200]
0x00ebea2e: call   0x14006f510
0x00ebea33: lea    rdx,[rip+0x870806]        # 0x14172f240 ; literal="NECK_RES:"
0x00ebea3a: lea    rcx,[rbp+0x200]
0x00ebea41: call   0x14006f4f0
0x00ebea46: lea    rdx,[rbp+0x580]
0x00ebea4d: lea    rcx,[rbp+0x200]
0x00ebea54: call   0x1400b9ca0
0x00ebea59: lea    rdx,[rip+0x870740]        # 0x14172f1a0 ; literal=":neck bowl:neck bowls"
0x00ebea60: lea    rcx,[rbp+0x200]
0x00ebea67: call   0x14006f4f0
0x00ebea6c: lea    rdx,[rip+0x86f945]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ebea73: lea    rcx,[rbp+0x200]
0x00ebea7a: call   0x14006f4f0
0x00ebea7f: lea    rdx,[rbp+0x200]
0x00ebea86: lea    rcx,[rsp+0x28]
0x00ebea8b: call   0x1400bb700
0x00ebea90: lea    rdx,[rip+0x86fbc1]        # 0x14172e658 ; literal="[VOLUME_mB:"
0x00ebea97: lea    rcx,[rbp+0x200]
0x00ebea9e: call   0x14006f510
0x00ebeaa3: lea    rdx,[rbp+0x200]
0x00ebeaaa: xor    ecx,ecx
0x00ebeaac: call   0x140529cf0
0x00ebeab1: lea    rdx,[rip+0x75494c]        # 0x141613404 ; literal=":"
0x00ebeab8: lea    rcx,[rbp+0x200]
0x00ebeabf: call   0x14006f4f0
0x00ebeac4: lea    rdx,[rbp+0x200]
0x00ebeacb: mov    ecx,0x2710
0x00ebead0: call   0x140529cf0
0x00ebead5: lea    rdx,[rip+0x739b88]        # 0x1415f8664 ; literal="]"
0x00ebeadc: lea    rcx,[rbp+0x200]
0x00ebeae3: call   0x14006f4f0
0x00ebeae8: lea    rdx,[rbp+0x200]
0x00ebeaef: lea    rcx,[rsp+0x28]
0x00ebeaf4: call   0x1400bb700
0x00ebeaf9: test   r12b,r12b
0x00ebeafc: je     0x140ebeb0f
0x00ebeafe: lea    rdx,[rip+0x870673]        # 0x14172f178 ; literal="[SOUND_PRODUCTION:BOWED:PROD:STRINGS]"
0x00ebeb05: lea    rcx,[rsp+0x28]
0x00ebeb0a: call   0x1400bb870
0x00ebeb0f: test   dil,dil
0x00ebeb12: je     0x140ebeb25
0x00ebeb14: lea    rdx,[rip+0x8706c5]        # 0x14172f1e0 ; literal="[SOUND_PRODUCTION:PLUCKED:PROD:STRINGS]"
0x00ebeb1b: lea    rcx,[rsp+0x28]
0x00ebeb20: call   0x1400bb870
0x00ebeb25: movzx  eax,BYTE PTR [rsp+0x20]
0x00ebeb2a: test   al,al
0x00ebeb2c: je     0x140ebeb44
0x00ebeb2e: lea    rdx,[rip+0x870683]        # 0x14172f1b8 ; literal="[SOUND_PRODUCTION:STRUCK:PROD:STRINGS]"
0x00ebeb35: lea    rcx,[rsp+0x28]
0x00ebeb3a: call   0x1400bb870
0x00ebeb3f: movzx  eax,BYTE PTR [rsp+0x20]
0x00ebeb44: test   r12b,r12b
0x00ebeb47: jne    0x140ebeb63
0x00ebeb49: test   dil,dil
0x00ebeb4c: jne    0x140ebeb63
0x00ebeb4e: test   al,al
0x00ebeb50: jne    0x140ebeb63
0x00ebeb52: lea    rdx,[rip+0x8707ff]        # 0x14172f358 ; literal="[SOUND_PRODUCTION:PLUCKED_BY_BP:STRINGS]"
0x00ebeb59: lea    rcx,[rsp+0x28]
0x00ebeb5e: call   0x1400bb870
0x00ebeb63: test   bl,bl
0x00ebeb65: je     0x140ebeb78
0x00ebeb67: lea    rdx,[rip+0x8707c2]        # 0x14172f330 ; literal="[SOUND_PRODUCTION:RESONATOR:NECK_RES]"
0x00ebeb6e: lea    rcx,[rsp+0x28]
0x00ebeb73: call   0x1400bb870
0x00ebeb78: xor    eax,eax
0x00ebeb7a: mov    r12d,eax
0x00ebeb7d: mov    r13d,eax
0x00ebeb80: cmp    r15d,0x2
0x00ebeb84: jl     0x140ebec40
0x00ebeb8a: mov    eax,r15d
0x00ebeb8d: cdq
0x00ebeb8e: sub    eax,edx
0x00ebeb90: sar    eax,1
0x00ebeb92: mov    ecx,eax
0x00ebeb94: call   0x140071ec0
0x00ebeb99: mov    r14d,eax
0x00ebeb9c: lea    esi,[rax+0x1]
0x00ebeb9f: mov    ecx,0xa
0x00ebeba4: call   0x140071ec0
0x00ebeba9: mov    ebx,eax
0x00ebebab: test   eax,eax
0x00ebebad: sete   dil
0x00ebebb1: mov    ecx,0xa
0x00ebebb6: call   0x140071ec0
0x00ebebbb: test   eax,eax
0x00ebebbd: sete   r8b
0x00ebebc1: movzx  edx,dil
0x00ebebc5: movzx  ecx,r8b
0x00ebebc9: test   ebx,ebx
0x00ebebcb: jne    0x140ebebd6
0x00ebebcd: test   eax,eax
0x00ebebcf: jne    0x140ebebd6
0x00ebebd1: cmp    esi,0x1
0x00ebebd4: jle    0x140ebec40
0x00ebebd6: test   dl,dl
0x00ebebd8: je     0x140ebec23
0x00ebebda: test   cl,cl
0x00ebebdc: je     0x140ebec0a
0x00ebebde: mov    ecx,r14d
0x00ebebe1: call   0x140071ec0
0x00ebebe6: lea    r12d,[rax+0x1]
0x00ebebea: mov    r13d,esi
0x00ebebed: sub    r13d,r12d
0x00ebebf0: mov    edi,r15d
0x00ebebf3: sub    edi,r13d
0x00ebebf6: sub    edi,r12d
0x00ebebf9: mov    BYTE PTR [rsp+0x43],0x0
0x00ebebfe: mov    BYTE PTR [rsp+0x49],0x0
0x00ebec03: mov    BYTE PTR [rsp+0x41],0x0
0x00ebec08: jmp    0x140ebec60
0x00ebec0a: mov    r12d,esi
0x00ebec0d: mov    edi,r15d
0x00ebec10: sub    edi,esi
0x00ebec12: mov    BYTE PTR [rsp+0x43],0x0
0x00ebec17: mov    BYTE PTR [rsp+0x49],0x0
0x00ebec1c: mov    BYTE PTR [rsp+0x41],r13b
0x00ebec21: jmp    0x140ebec60
0x00ebec23: test   cl,cl
0x00ebec25: je     0x140ebec40
0x00ebec27: mov    r13d,esi
0x00ebec2a: mov    edi,r15d
0x00ebec2d: sub    edi,esi
0x00ebec2f: mov    BYTE PTR [rsp+0x43],0x0
0x00ebec34: mov    BYTE PTR [rsp+0x49],0x0
0x00ebec39: mov    BYTE PTR [rsp+0x41],r12b
0x00ebec3e: jmp    0x140ebec60
0x00ebec40: mov    edi,r15d
0x00ebec43: sub    edi,r13d
0x00ebec46: sub    edi,r12d
0x00ebec49: mov    BYTE PTR [rsp+0x43],r12b
0x00ebec4e: mov    BYTE PTR [rsp+0x49],r12b
0x00ebec53: mov    BYTE PTR [rsp+0x41],r12b
0x00ebec58: xor    bl,bl
0x00ebec5a: cmp    r15d,0x1
0x00ebec5e: jle    0x140ebec73
0x00ebec60: lea    rdx,[rip+0x870751]        # 0x14172f3b8 ; literal="[PITCH_CHOICE:SUBPART_CHOICE:STRINGS]"
0x00ebec67: lea    rcx,[rsp+0x28]
0x00ebec6c: call   0x1400bb870
0x00ebec71: mov    bl,0x1
0x00ebec73: mov    esi,0x2
0x00ebec78: cmp    BYTE PTR [rsp+0x47],0x0
0x00ebec7d: je     0x140ebecb5
0x00ebec7f: mov    ecx,esi
0x00ebec81: call   0x140071ec0
0x00ebec86: lea    rcx,[rsp+0x28]
0x00ebec8b: test   eax,eax
0x00ebec8d: je     0x140ebeca2
0x00ebec8f: lea    rdx,[rip+0x8706f2]        # 0x14172f388 ; literal="[PITCH_CHOICE:STOPPING_FRET:STRINGS:NECK]"
0x00ebec96: call   0x1400bb870
0x00ebec9b: mov    BYTE PTR [rsp+0x49],0x1
0x00ebeca0: jmp    0x140ebecb3
0x00ebeca2: lea    rdx,[rip+0x8705ff]        # 0x14172f2a8 ; literal="[PITCH_CHOICE:STOPPING_AGAINST_BODY:STRINGS:NECK]"
0x00ebeca9: call   0x1400bb870
0x00ebecae: mov    BYTE PTR [rsp+0x41],0x1
0x00ebecb3: mov    bl,0x1
0x00ebecb5: cmp    BYTE PTR [rsp+0x42],0x0
0x00ebecba: je     0x140ebece4
0x00ebecbc: mov    ecx,esi
0x00ebecbe: call   0x140071ec0
0x00ebecc3: test   eax,eax
0x00ebecc5: jne    0x140ebeccd
0x00ebecc7: cmp    r15d,0x1
0x00ebeccb: jne    0x140ebece4
0x00ebeccd: lea    rdx,[rip+0x87059c]        # 0x14172f270 ; literal="[PITCH_CHOICE:STOPPING_AGAINST_BODY:STRINGS:BODY]"
0x00ebecd4: lea    rcx,[rsp+0x28]
0x00ebecd9: call   0x1400bb870
0x00ebecde: mov    bl,0x1
0x00ebece0: mov    BYTE PTR [rsp+0x41],bl
0x00ebece4: mov    esi,DWORD PTR [rsp+0x60]
0x00ebece8: cmp    esi,0x9c40
0x00ebecee: jl     0x140ebed15
0x00ebecf0: mov    ecx,0x6
0x00ebecf5: call   0x140071ec0
0x00ebecfa: test   eax,eax
0x00ebecfc: jne    0x140ebed15
0x00ebecfe: lea    rdx,[rip+0x870603]        # 0x14172f308 ; literal="[PITCH_CHOICE:FOOT_PEDALS:STRINGS:BODY]"
0x00ebed05: lea    rcx,[rsp+0x28]
0x00ebed0a: call   0x1400bb870
0x00ebed0f: mov    bl,0x1
0x00ebed11: mov    BYTE PTR [rsp+0x43],bl
0x00ebed15: imul   ecx,esi,0xfffff1f0
0x00ebed1b: mov    eax,0x68db8bad
0x00ebed20: imul   ecx
0x00ebed22: mov    r14d,edx
0x00ebed25: sar    r14d,0xe
0x00ebed29: mov    eax,r14d
0x00ebed2c: shr    eax,0x1f
0x00ebed2f: add    r14d,eax
0x00ebed32: mov    ecx,0xd
0x00ebed37: call   0x140071ec0
0x00ebed3c: add    eax,0x24
0x00ebed3f: imul   ecx,eax,0x64
0x00ebed42: cmp    r15d,0x3c
0x00ebed46: jl     0x140ebed50
0x00ebed48: add    ecx,0x960
0x00ebed4e: jmp    0x140ebed78
0x00ebed50: cmp    r15d,0x28
0x00ebed54: jl     0x140ebed5e
0x00ebed56: add    ecx,0x708
0x00ebed5c: jmp    0x140ebed78
0x00ebed5e: cmp    r15d,0x14
0x00ebed62: jl     0x140ebed6c
0x00ebed64: add    ecx,0x4b0
0x00ebed6a: jmp    0x140ebed78
0x00ebed6c: cmp    r15d,0x6
0x00ebed70: jl     0x140ebed78
0x00ebed72: add    ecx,0x258
0x00ebed78: xor    esi,esi
0x00ebed7a: test   bl,bl
0x00ebed7c: cmovne esi,ecx
0x00ebed7f: add    esi,r14d
0x00ebed82: lea    rdx,[rip+0x86f85f]        # 0x14172e5e8 ; literal="[PITCH_RANGE:"
0x00ebed89: lea    rcx,[rbp+0x200]
0x00ebed90: call   0x14006f510
0x00ebed95: lea    rdx,[rbp+0x200]
0x00ebed9c: mov    ecx,r14d
0x00ebed9f: call   0x140529cf0
0x00ebeda4: lea    rdx,[rip+0x754659]        # 0x141613404 ; literal=":"
0x00ebedab: lea    rcx,[rbp+0x200]
0x00ebedb2: call   0x14006f4f0
0x00ebedb7: lea    rdx,[rbp+0x200]
0x00ebedbe: mov    ecx,esi
0x00ebedc0: call   0x140529cf0
0x00ebedc5: lea    rdx,[rip+0x739898]        # 0x1415f8664 ; literal="]"
0x00ebedcc: lea    rcx,[rbp+0x200]
0x00ebedd3: call   0x14006f4f0
0x00ebedd8: lea    rdx,[rbp+0x200]
0x00ebeddf: lea    rcx,[rsp+0x28]
0x00ebede4: call   0x1400bb700
0x00ebede9: xor    bl,bl
0x00ebedeb: mov    BYTE PTR [rsp+0x44],bl
0x00ebedef: mov    BYTE PTR [rsp+0x4a],bl
0x00ebedf3: cmp    BYTE PTR [rsp+0x42],bl
0x00ebedf7: je     0x140ebee1c
0x00ebedf9: mov    ecx,0x2
0x00ebedfe: call   0x140071ec0
0x00ebee03: test   eax,eax
0x00ebee05: je     0x140ebee1c
0x00ebee07: lea    rdx,[rip+0x8704d2]        # 0x14172f2e0 ; literal="[TUNING:ADJUSTABLE_BRIDGES:STRINGS]"
0x00ebee0e: lea    rcx,[rsp+0x28]
0x00ebee13: call   0x1400bb870
0x00ebee18: mov    bl,0x1
0x00ebee1a: jmp    0x140ebee32
0x00ebee1c: lea    rdx,[rip+0x87065d]        # 0x14172f480 ; literal="[TUNING:PEGS:STRINGS]"
0x00ebee23: lea    rcx,[rsp+0x28]
0x00ebee28: call   0x1400bb870
0x00ebee2d: mov    BYTE PTR [rsp+0x44],0x1
0x00ebee32: mov    ecx,0x4
0x00ebee37: call   0x140071ec0
0x00ebee3c: test   eax,eax
0x00ebee3e: jne    0x140ebee56
0x00ebee40: lea    rdx,[rip+0x870621]        # 0x14172f468 ; literal="[TUNING:LEVERS:STRINGS]"
0x00ebee47: lea    rcx,[rsp+0x28]
0x00ebee4c: call   0x1400bb870
0x00ebee51: mov    BYTE PTR [rsp+0x4a],0x1
0x00ebee56: lea    rcx,[rbp+0x1a8]
0x00ebee5d: call   0x140296b90
0x00ebee62: nop
0x00ebee63: xor    r9d,r9d
0x00ebee66: mov    r8d,esi
0x00ebee69: mov    edx,r14d
0x00ebee6c: lea    rcx,[rbp+0x1a8]
0x00ebee73: call   0x140eb2f60
0x00ebee78: lea    rdx,[rbp+0x1a8]
0x00ebee7f: lea    rcx,[rsp+0x28]
0x00ebee84: call   0x140eb36d0
0x00ebee89: lea    rdx,[rip+0x870620]        # 0x14172f4b0 ; literal="[MUSIC_SKILL:PLAY_STRINGED_INSTRUMENT]"
0x00ebee90: lea    rcx,[rsp+0x28]
0x00ebee95: call   0x1400bb870
0x00ebee9a: lea    rdx,[rip+0x86f757]        # 0x14172e5f8 ; literal="[DESCRIPTION:"
0x00ebeea1: lea    rcx,[rbp+0x200]
0x00ebeea8: call   0x14006f510
0x00ebeead: lea    rcx,[rbp+0x2a0]
0x00ebeeb4: call   0x14006f620
0x00ebeeb9: nop
0x00ebeeba: lea    rdx,[rip+0x729b03]        # 0x1415e89c4 ; literal="The "
0x00ebeec1: lea    rcx,[rbp+0x2a0]
0x00ebeec8: call   0x14006f510
0x00ebeecd: lea    rdx,[rbp+0x340]
0x00ebeed4: lea    rcx,[rbp+0x2a0]
0x00ebeedb: call   0x1400b9ca0
0x00ebeee0: lea    rdx,[rip+0x78570d]        # 0x1416445f4 ; literal=" is a "
0x00ebeee7: lea    rcx,[rbp+0x2a0]
0x00ebeeee: call   0x14006f4f0
0x00ebeef3: mov    eax,DWORD PTR [rsp+0x60]
0x00ebeef7: cmp    eax,0xea60
0x00ebeefc: jl     0x140ebef07
0x00ebeefe: lea    rdx,[rip+0x86f743]        # 0x14172e648 ; literal="huge stationary"
0x00ebef05: jmp    0x140ebef4c
0x00ebef07: cmp    eax,0x9c40
0x00ebef0c: jl     0x140ebef17
0x00ebef0e: lea    rdx,[rip+0x86f71b]        # 0x14172e630 ; literal="large stationary"
0x00ebef15: jmp    0x140ebef4c
0x00ebef17: cmp    eax,0x7530
0x00ebef1c: jl     0x140ebef27
0x00ebef1e: lea    rdx,[rip+0x86eb7b]        # 0x14172daa0 ; literal="large hand-held"
0x00ebef25: jmp    0x140ebef4c
0x00ebef27: cmp    eax,0x2710
0x00ebef2c: jl     0x140ebef37
0x00ebef2e: lea    rdx,[rip+0x86eb53]        # 0x14172da88 ; literal="mid-size hand-held"
0x00ebef35: jmp    0x140ebef4c
0x00ebef37: cmp    eax,0x1388
0x00ebef3c: lea    rdx,[rip+0x86eb7d]        # 0x14172dac0 ; literal="small hand-held"
0x00ebef43: jge    0x140ebef4c
0x00ebef45: lea    rdx,[rip+0x86eb64]        # 0x14172dab0 ; literal="tiny hand-held"
0x00ebef4c: lea    rcx,[rbp+0x2a0]
0x00ebef53: call   0x14006f4f0
0x00ebef58: lea    rdx,[rip+0x7247c1]        # 0x1415e3720 ; literal=" "
0x00ebef5f: lea    rcx,[rbp+0x2a0]
0x00ebef66: call   0x14006f4f0
0x00ebef6b: lea    rdx,[rbp+0x2a0]
0x00ebef72: mov    ecx,DWORD PTR [rbp+0x8]
0x00ebef75: call   0x140eb3dd0
0x00ebef7a: lea    rdx,[rip+0x870517]        # 0x14172f498 ; literal="-stringed instrument"
0x00ebef81: lea    rcx,[rbp+0x2a0]
0x00ebef88: call   0x14006f4f0
0x00ebef8d: cmp    BYTE PTR [rsp+0x47],0x0
0x00ebef92: je     0x140ebefeb
0x00ebef94: lea    rdx,[rip+0x79c5f5]        # 0x14165b590 ; literal=" with a "
0x00ebef9b: lea    rcx,[rbp+0x2a0]
0x00ebefa2: call   0x14006f4f0
0x00ebefa7: lea    rdx,[rbp+0x2a0]
0x00ebefae: mov    ecx,DWORD PTR [rbp+0x28]
0x00ebefb1: call   0x140eb3dd0
0x00ebefb6: lea    rdx,[rip+0x870433]        # 0x14172f3f0 ; literal=" neck connecting to a "
0x00ebefbd: lea    rcx,[rbp+0x2a0]
0x00ebefc4: call   0x14006f4f0
0x00ebefc9: lea    rdx,[rbp+0x2a0]
0x00ebefd0: mov    ecx,DWORD PTR [rbp-0x7c]
0x00ebefd3: call   0x140eb3dd0
0x00ebefd8: lea    rdx,[rip+0x865a1d]        # 0x1417249fc ; literal=" body"
0x00ebefdf: lea    rcx,[rbp+0x2a0]
0x00ebefe6: call   0x14006f4f0
0x00ebefeb: cmp    BYTE PTR [rsp+0x45],0x0
0x00ebeff0: je     0x140ebf049
0x00ebeff2: lea    rdx,[rip+0x79c597]        # 0x14165b590 ; literal=" with a "
0x00ebeff9: lea    rcx,[rbp+0x2a0]
0x00ebf000: call   0x14006f4f0
0x00ebf005: lea    rdx,[rbp+0x2a0]
0x00ebf00c: mov    ecx,DWORD PTR [rbp+0x2c]
0x00ebf00f: call   0x140eb3dd0
0x00ebf014: lea    rdx,[rip+0x8703c5]        # 0x14172f3e0 ; literal=" frame and a "
0x00ebf01b: lea    rcx,[rbp+0x2a0]
0x00ebf022: call   0x14006f4f0
0x00ebf027: lea    rdx,[rbp+0x2a0]
0x00ebf02e: mov    ecx,DWORD PTR [rbp-0x7c]
0x00ebf031: call   0x140eb3dd0
0x00ebf036: lea    rdx,[rip+0x8659bf]        # 0x1417249fc ; literal=" body"
0x00ebf03d: lea    rcx,[rbp+0x2a0]
0x00ebf044: call   0x14006f4f0
0x00ebf049: cmp    BYTE PTR [rsp+0x46],0x0
0x00ebf04e: je     0x140ebf0a7
0x00ebf050: lea    rdx,[rip+0x79c539]        # 0x14165b590 ; literal=" with a "
0x00ebf057: lea    rcx,[rbp+0x2a0]
0x00ebf05e: call   0x14006f4f0
0x00ebf063: lea    rdx,[rbp+0x2a0]
0x00ebf06a: mov    ecx,DWORD PTR [rbp-0x18]
0x00ebf06d: call   0x140eb3dd0
0x00ebf072: lea    rdx,[rip+0x8703df]        # 0x14172f458 ; literal=" yoke and a "
0x00ebf079: lea    rcx,[rbp+0x2a0]
0x00ebf080: call   0x14006f4f0
0x00ebf085: lea    rdx,[rbp+0x2a0]
0x00ebf08c: mov    ecx,DWORD PTR [rbp-0x7c]
0x00ebf08f: call   0x140eb3dd0
0x00ebf094: lea    rdx,[rip+0x865961]        # 0x1417249fc ; literal=" body"
0x00ebf09b: lea    rcx,[rbp+0x2a0]
0x00ebf0a2: call   0x14006f4f0
0x00ebf0a7: cmp    BYTE PTR [rsp+0x42],0x0
0x00ebf0ac: je     0x140ebf0e3
0x00ebf0ae: lea    rdx,[rip+0x79c4db]        # 0x14165b590 ; literal=" with a "
0x00ebf0b5: lea    rcx,[rbp+0x2a0]
0x00ebf0bc: call   0x14006f4f0
0x00ebf0c1: lea    rdx,[rbp+0x2a0]
0x00ebf0c8: mov    ecx,DWORD PTR [rbp-0x7c]
0x00ebf0cb: call   0x140eb3dd0
0x00ebf0d0: lea    rdx,[rip+0x865925]        # 0x1417249fc ; literal=" body"
0x00ebf0d7: lea    rcx,[rbp+0x2a0]
0x00ebf0de: call   0x14006f4f0
0x00ebf0e3: lea    rdx,[rip+0x739766]        # 0x1415f8850 ; literal=".  "
0x00ebf0ea: lea    rcx,[rbp+0x2a0]
0x00ebf0f1: call   0x14006f4f0
0x00ebf0f6: cmp    BYTE PTR [rsp+0x47],0x0
0x00ebf0fb: je     0x140ebf110
0x00ebf0fd: lea    rdx,[rip+0x87030c]        # 0x14172f410 ; literal="The strings are tied from the top of the neck down over the body and"
0x00ebf104: lea    rcx,[rbp+0x2a0]
0x00ebf10b: call   0x14006f4f0
0x00ebf110: cmp    BYTE PTR [rsp+0x45],0x0
0x00ebf115: je     0x140ebf12a
0x00ebf117: lea    rdx,[rip+0x870422]        # 0x14172f540 ; literal="The strings are suspended from the frame down to the body and"
0x00ebf11e: lea    rcx,[rbp+0x2a0]
0x00ebf125: call   0x14006f4f0
0x00ebf12a: cmp    BYTE PTR [rsp+0x46],0x0
0x00ebf12f: je     0x140ebf144
0x00ebf131: lea    rdx,[rip+0x8703c8]        # 0x14172f500 ; literal="The strings are suspended from the yoke down to the body and"
0x00ebf138: lea    rcx,[rbp+0x2a0]
0x00ebf13f: call   0x14006f4f0
0x00ebf144: cmp    BYTE PTR [rsp+0x42],0x0
0x00ebf149: je     0x140ebf15e
0x00ebf14b: lea    rdx,[rip+0x87043e]        # 0x14172f590 ; literal="The instrument rests flat as"
0x00ebf152: lea    rcx,[rbp+0x2a0]
0x00ebf159: call   0x14006f4f0
0x00ebf15e: lea    rdx,[rip+0x87041b]        # 0x14172f580 ; literal=" the musician "
0x00ebf165: lea    rcx,[rbp+0x2a0]
0x00ebf16c: call   0x14006f4f0
0x00ebf171: cmp    BYTE PTR [rsp+0x48],0x0
0x00ebf176: je     0x140ebf26e
0x00ebf17c: lea    rdx,[rip+0x870365]        # 0x14172f4e8 ; literal="plays "
0x00ebf183: lea    rcx,[rbp+0x2a0]
0x00ebf18a: call   0x14006f4f0
0x00ebf18f: lea    rcx,[rbp+0x2a0]
0x00ebf196: cmp    edi,0x1
0x00ebf199: jne    0x140ebf1c2
0x00ebf19b: cmp    r15d,edi
0x00ebf19e: jne    0x140ebf1b1
0x00ebf1a0: lea    rdx,[rip+0x86ed39]        # 0x14172dee0 ; literal="the string"
0x00ebf1a7: call   0x14006f4f0
0x00ebf1ac: jmp    0x140ebf239
0x00ebf1b1: lea    rdx,[rip+0x870320]        # 0x14172f4d8 ; literal="the main string"
0x00ebf1b8: call   0x14006f4f0
0x00ebf1bd: jmp    0x140ebf239
0x00ebf1c2: lea    rdx,[rip+0x724c6b]        # 0x1415e3e34 ; literal="the "
0x00ebf1c9: call   0x14006f4f0
0x00ebf1ce: lea    rcx,[rbp+0x1140]
0x00ebf1d5: call   0x14006f620
0x00ebf1da: nop
0x00ebf1db: lea    rdx,[rbp+0x1140]
0x00ebf1e2: mov    ecx,edi
0x00ebf1e4: call   0x14052bd80
0x00ebf1e9: lea    rdx,[rbp+0x1140]
0x00ebf1f0: lea    rcx,[rbp+0x2a0]
0x00ebf1f7: call   0x1400b9ca0
0x00ebf1fc: test   r12d,r12d
0x00ebf1ff: jg     0x140ebf206
0x00ebf201: test   r13d,r13d
0x00ebf204: jle    0x140ebf219
0x00ebf206: lea    rdx,[rip+0x8702eb]        # 0x14172f4f8 ; literal=" main"
0x00ebf20d: lea    rcx,[rbp+0x2a0]
0x00ebf214: call   0x14006f4f0
0x00ebf219: lea    rdx,[rip+0x86f020]        # 0x14172e240 ; literal=" strings"
0x00ebf220: lea    rcx,[rbp+0x2a0]
0x00ebf227: call   0x14006f4f0
0x00ebf22c: nop
0x00ebf22d: lea    rcx,[rbp+0x1140]
0x00ebf234: call   0x140067dc0
0x00ebf239: lea    rdx,[rip+0x79c350]        # 0x14165b590 ; literal=" with a "
0x00ebf240: lea    rcx,[rbp+0x2a0]
0x00ebf247: call   0x14006f4f0
0x00ebf24c: lea    rdx,[rbp+0x2a0]
0x00ebf253: mov    ecx,DWORD PTR [rbp-0x58]
0x00ebf256: call   0x140eb3dd0
0x00ebf25b: lea    rdx,[rip+0x86fd92]        # 0x14172eff4 ; literal=" bow"
0x00ebf262: lea    rcx,[rbp+0x2a0]
0x00ebf269: call   0x14006f4f0
0x00ebf26e: cmp    BYTE PTR [rsp+0x40],0x0
0x00ebf273: je     0x140ebf36b
0x00ebf279: lea    rdx,[rip+0x870270]        # 0x14172f4f0 ; literal="picks "
0x00ebf280: lea    rcx,[rbp+0x2a0]
0x00ebf287: call   0x14006f4f0
0x00ebf28c: lea    rcx,[rbp+0x2a0]
0x00ebf293: cmp    edi,0x1
0x00ebf296: jne    0x140ebf2bf
0x00ebf298: cmp    r15d,edi
0x00ebf29b: jne    0x140ebf2ae
0x00ebf29d: lea    rdx,[rip+0x86ec3c]        # 0x14172dee0 ; literal="the string"
0x00ebf2a4: call   0x14006f4f0
0x00ebf2a9: jmp    0x140ebf336
0x00ebf2ae: lea    rdx,[rip+0x870223]        # 0x14172f4d8 ; literal="the main string"
0x00ebf2b5: call   0x14006f4f0
0x00ebf2ba: jmp    0x140ebf336
0x00ebf2bf: lea    rdx,[rip+0x724b6e]        # 0x1415e3e34 ; literal="the "
0x00ebf2c6: call   0x14006f4f0
0x00ebf2cb: lea    rcx,[rbp+0x1160]
0x00ebf2d2: call   0x14006f620
0x00ebf2d7: nop
0x00ebf2d8: lea    rdx,[rbp+0x1160]
0x00ebf2df: mov    ecx,edi
0x00ebf2e1: call   0x14052bd80
0x00ebf2e6: lea    rdx,[rbp+0x1160]
0x00ebf2ed: lea    rcx,[rbp+0x2a0]
0x00ebf2f4: call   0x1400b9ca0
0x00ebf2f9: test   r12d,r12d
0x00ebf2fc: jg     0x140ebf303
0x00ebf2fe: test   r13d,r13d
0x00ebf301: jle    0x140ebf316
0x00ebf303: lea    rdx,[rip+0x8701ee]        # 0x14172f4f8 ; literal=" main"
0x00ebf30a: lea    rcx,[rbp+0x2a0]
0x00ebf311: call   0x14006f4f0
0x00ebf316: lea    rdx,[rip+0x86ef23]        # 0x14172e240 ; literal=" strings"
0x00ebf31d: lea    rcx,[rbp+0x2a0]
0x00ebf324: call   0x14006f4f0
0x00ebf329: nop
0x00ebf32a: lea    rcx,[rbp+0x1160]
0x00ebf331: call   0x140067dc0
0x00ebf336: lea    rdx,[rip+0x79c253]        # 0x14165b590 ; literal=" with a "
0x00ebf33d: lea    rcx,[rbp+0x2a0]
0x00ebf344: call   0x14006f4f0
0x00ebf349: lea    rdx,[rbp+0x2a0]
0x00ebf350: mov    ecx,DWORD PTR [rbp-0x58]
0x00ebf353: call   0x140eb3dd0
0x00ebf358: lea    rdx,[rip+0x86fc89]        # 0x14172efe8 ; literal=" plectrum"
0x00ebf35f: lea    rcx,[rbp+0x2a0]
0x00ebf366: call   0x14006f4f0
0x00ebf36b: movzx  eax,BYTE PTR [rsp+0x20]
0x00ebf370: test   al,al
0x00ebf372: je     0x140ebf46f
0x00ebf378: lea    rdx,[rip+0x8702a1]        # 0x14172f620 ; literal="strikes "
0x00ebf37f: lea    rcx,[rbp+0x2a0]
0x00ebf386: call   0x14006f4f0
0x00ebf38b: lea    rcx,[rbp+0x2a0]
0x00ebf392: cmp    edi,0x1
0x00ebf395: jne    0x140ebf3be
0x00ebf397: cmp    r15d,edi
0x00ebf39a: jne    0x140ebf3ad
0x00ebf39c: lea    rdx,[rip+0x86eb3d]        # 0x14172dee0 ; literal="the string"
0x00ebf3a3: call   0x14006f4f0
0x00ebf3a8: jmp    0x140ebf435
0x00ebf3ad: lea    rdx,[rip+0x870124]        # 0x14172f4d8 ; literal="the main string"
0x00ebf3b4: call   0x14006f4f0
0x00ebf3b9: jmp    0x140ebf435
0x00ebf3be: lea    rdx,[rip+0x724a6f]        # 0x1415e3e34 ; literal="the "
0x00ebf3c5: call   0x14006f4f0
0x00ebf3ca: lea    rcx,[rbp+0xfe0]
0x00ebf3d1: call   0x14006f620
0x00ebf3d6: nop
0x00ebf3d7: lea    rdx,[rbp+0xfe0]
0x00ebf3de: mov    ecx,edi
0x00ebf3e0: call   0x14052bd80
0x00ebf3e5: lea    rdx,[rbp+0xfe0]
0x00ebf3ec: lea    rcx,[rbp+0x2a0]
0x00ebf3f3: call   0x1400b9ca0
0x00ebf3f8: test   r12d,r12d
0x00ebf3fb: jg     0x140ebf402
0x00ebf3fd: test   r13d,r13d
0x00ebf400: jle    0x140ebf415
0x00ebf402: lea    rdx,[rip+0x8700ef]        # 0x14172f4f8 ; literal=" main"
0x00ebf409: lea    rcx,[rbp+0x2a0]
0x00ebf410: call   0x14006f4f0
0x00ebf415: lea    rdx,[rip+0x86ee24]        # 0x14172e240 ; literal=" strings"
0x00ebf41c: lea    rcx,[rbp+0x2a0]
0x00ebf423: call   0x14006f4f0
0x00ebf428: nop
0x00ebf429: lea    rcx,[rbp+0xfe0]
0x00ebf430: call   0x140067dc0
0x00ebf435: lea    rdx,[rip+0x72a154]        # 0x1415e9590 ; literal=" with "
0x00ebf43c: lea    rcx,[rbp+0x2a0]
0x00ebf443: call   0x14006f4f0
0x00ebf448: lea    rdx,[rbp+0x2a0]
0x00ebf44f: mov    ecx,DWORD PTR [rbp-0x58]
0x00ebf452: call   0x140eb3dd0
0x00ebf457: lea    rdx,[rip+0x86fbaa]        # 0x14172f008 ; literal=" hammers"
0x00ebf45e: lea    rcx,[rbp+0x2a0]
0x00ebf465: call   0x14006f4f0
0x00ebf46a: movzx  eax,BYTE PTR [rsp+0x20]
0x00ebf46f: cmp    BYTE PTR [rsp+0x48],0x0
0x00ebf474: jne    0x140ebf54a
0x00ebf47a: cmp    BYTE PTR [rsp+0x40],0x0
0x00ebf47f: jne    0x140ebf54a
0x00ebf485: test   al,al
0x00ebf487: jne    0x140ebf54a
0x00ebf48d: lea    rdx,[rip+0x870184]        # 0x14172f618 ; literal="plucks "
0x00ebf494: lea    rcx,[rbp+0x2a0]
0x00ebf49b: call   0x14006f4f0
0x00ebf4a0: lea    rcx,[rbp+0x2a0]
0x00ebf4a7: cmp    edi,0x1
0x00ebf4aa: jne    0x140ebf4d3
0x00ebf4ac: cmp    r15d,edi
0x00ebf4af: jne    0x140ebf4c2
0x00ebf4b1: lea    rdx,[rip+0x86ea28]        # 0x14172dee0 ; literal="the string"
0x00ebf4b8: call   0x14006f4f0
0x00ebf4bd: jmp    0x140ebf54a
0x00ebf4c2: lea    rdx,[rip+0x87000f]        # 0x14172f4d8 ; literal="the main string"
0x00ebf4c9: call   0x14006f4f0
0x00ebf4ce: jmp    0x140ebf54a
0x00ebf4d3: lea    rdx,[rip+0x72495a]        # 0x1415e3e34 ; literal="the "
0x00ebf4da: call   0x14006f4f0
0x00ebf4df: lea    rcx,[rbp+0x1180]
0x00ebf4e6: call   0x14006f620
0x00ebf4eb: nop
0x00ebf4ec: lea    rdx,[rbp+0x1180]
0x00ebf4f3: mov    ecx,edi
0x00ebf4f5: call   0x14052bd80
0x00ebf4fa: lea    rdx,[rbp+0x1180]
0x00ebf501: lea    rcx,[rbp+0x2a0]
0x00ebf508: call   0x1400b9ca0
0x00ebf50d: test   r12d,r12d
0x00ebf510: jg     0x140ebf517
0x00ebf512: test   r13d,r13d
0x00ebf515: jle    0x140ebf52a
0x00ebf517: lea    rdx,[rip+0x86ffda]        # 0x14172f4f8 ; literal=" main"
0x00ebf51e: lea    rcx,[rbp+0x2a0]
0x00ebf525: call   0x14006f4f0
0x00ebf52a: lea    rdx,[rip+0x86ed0f]        # 0x14172e240 ; literal=" strings"
0x00ebf531: lea    rcx,[rbp+0x2a0]
0x00ebf538: call   0x14006f4f0
0x00ebf53d: nop
0x00ebf53e: lea    rcx,[rbp+0x1180]
0x00ebf545: call   0x140067dc0
0x00ebf54a: lea    rdx,[rip+0x7392ff]        # 0x1415f8850 ; literal=".  "
0x00ebf551: lea    rcx,[rbp+0x2a0]
0x00ebf558: call   0x14006f4f0
0x00ebf55d: test   r12d,r12d
0x00ebf560: jle    0x140ebf5ef
0x00ebf566: cmp    r12d,0x1
0x00ebf56a: jne    0x140ebf581
0x00ebf56c: lea    rdx,[rip+0x87010d]        # 0x14172f680 ; literal="Another string vibrates in sympathy and is rarely played itself"
0x00ebf573: lea    rcx,[rbp+0x2a0]
0x00ebf57a: call   0x14006f4f0
0x00ebf57f: jmp    0x140ebf5dc
0x00ebf581: lea    rcx,[rbp+0xae0]
0x00ebf588: call   0x14006f620
0x00ebf58d: nop
0x00ebf58e: lea    rdx,[rbp+0xae0]
0x00ebf595: mov    ecx,r12d
0x00ebf598: call   0x14052bd80
0x00ebf59d: lea    rcx,[rbp+0xae0]
0x00ebf5a4: call   0x14052b070
0x00ebf5a9: lea    rdx,[rbp+0xae0]
0x00ebf5b0: lea    rcx,[rbp+0x2a0]
0x00ebf5b7: call   0x1400b9ca0
0x00ebf5bc: lea    rdx,[rip+0x87006d]        # 0x14172f630 ; literal=" other strings vibrate in sympathy and are rarely played themselves"
0x00ebf5c3: lea    rcx,[rbp+0x2a0]
0x00ebf5ca: call   0x14006f4f0
0x00ebf5cf: nop
0x00ebf5d0: lea    rcx,[rbp+0xae0]
0x00ebf5d7: call   0x140067dc0
0x00ebf5dc: lea    rdx,[rip+0x73926d]        # 0x1415f8850 ; literal=".  "
0x00ebf5e3: lea    rcx,[rbp+0x2a0]
0x00ebf5ea: call   0x14006f4f0
0x00ebf5ef: test   r13d,r13d
0x00ebf5f2: jle    0x140ebf68f
0x00ebf5f8: cmp    r13d,0x1
0x00ebf5fc: jne    0x140ebf613
0x00ebf5fe: lea    rdx,[rip+0x86ffc3]        # 0x14172f5c8 ; literal="A drone string is"
0x00ebf605: lea    rcx,[rbp+0x2a0]
0x00ebf60c: call   0x14006f4f0
0x00ebf611: jmp    0x140ebf66e
0x00ebf613: lea    rcx,[rbp+0xb00]
0x00ebf61a: call   0x14006f620
0x00ebf61f: nop
0x00ebf620: lea    rdx,[rbp+0xb00]
0x00ebf627: mov    ecx,r13d
0x00ebf62a: call   0x14052bd80
0x00ebf62f: lea    rcx,[rbp+0xb00]
0x00ebf636: call   0x14052b070
0x00ebf63b: lea    rdx,[rbp+0xb00]
0x00ebf642: lea    rcx,[rbp+0x2a0]
0x00ebf649: call   0x1400b9ca0
0x00ebf64e: lea    rdx,[rip+0x86ff5b]        # 0x14172f5b0 ; literal=" drone strings are"
0x00ebf655: lea    rcx,[rbp+0x2a0]
0x00ebf65c: call   0x14006f4f0
0x00ebf661: nop
0x00ebf662: lea    rcx,[rbp+0xb00]
0x00ebf669: call   0x140067dc0
0x00ebf66e: lea    rcx,[rbp+0x2a0]
0x00ebf675: cmp    BYTE PTR [rsp+0x20],0x0
0x00ebf67a: lea    rdx,[rip+0x86ff7f]        # 0x14172f600 ; literal=" occasionally struck.  "
0x00ebf681: jne    0x140ebf68a
0x00ebf683: lea    rdx,[rip+0x86ff56]        # 0x14172f5e0 ; literal=" occasionally plucked.  "
0x00ebf68a: call   0x14006f4f0
0x00ebf68f: cmp    BYTE PTR [rsp+0x47],0x0
0x00ebf694: je     0x140ebf706
0x00ebf696: cmp    BYTE PTR [rsp+0x49],0x0
0x00ebf69b: je     0x140ebf6b0
0x00ebf69d: lea    rdx,[rip+0x86f124]        # 0x14172e7c8 ; literal="Frets on the neck allow the musician to alter the pitch.  "
0x00ebf6a4: lea    rcx,[rbp+0x2a0]
0x00ebf6ab: call   0x14006f4f0
0x00ebf6b0: movzx  eax,BYTE PTR [rsp+0x41]
0x00ebf6b5: test   al,al
0x00ebf6b7: je     0x140ebf70b
0x00ebf6b9: lea    rdx,[rip+0x86f0e0]        # 0x14172e7a0 ; literal="The musician can alter the pitch of "
0x00ebf6c0: lea    rcx,[rbp+0x2a0]
0x00ebf6c7: call   0x14006f4f0
0x00ebf6cc: lea    rcx,[rbp+0x2a0]
0x00ebf6d3: cmp    r15d,0x2
0x00ebf6d7: jl     0x140ebf6e7
0x00ebf6d9: lea    rdx,[rip+0x73e584]        # 0x1415fdc64 ; literal="a"
0x00ebf6e0: call   0x14006f4f0
0x00ebf6e5: jmp    0x140ebf6f3
0x00ebf6e7: lea    rdx,[rip+0x79f02e]        # 0x14165e71c ; literal="the"
0x00ebf6ee: call   0x14006f510
0x00ebf6f3: lea    rdx,[rip+0x86f13e]        # 0x14172e838 ; literal=" string by stopping it against the neck.  "
0x00ebf6fa: lea    rcx,[rbp+0x2a0]
0x00ebf701: call   0x14006f4f0
0x00ebf706: movzx  eax,BYTE PTR [rsp+0x41]
0x00ebf70b: cmp    BYTE PTR [rsp+0x42],0x0
0x00ebf710: je     0x140ebf763
0x00ebf712: test   al,al
0x00ebf714: je     0x140ebf763
0x00ebf716: lea    rdx,[rip+0x86f083]        # 0x14172e7a0 ; literal="The musician can alter the pitch of "
0x00ebf71d: lea    rcx,[rbp+0x2a0]
0x00ebf724: call   0x14006f4f0
0x00ebf729: lea    rcx,[rbp+0x2a0]
0x00ebf730: cmp    r15d,0x2
0x00ebf734: jl     0x140ebf744
0x00ebf736: lea    rdx,[rip+0x73e527]        # 0x1415fdc64 ; literal="a"
0x00ebf73d: call   0x14006f4f0
0x00ebf742: jmp    0x140ebf750
0x00ebf744: lea    rdx,[rip+0x79efd1]        # 0x14165e71c ; literal="the"
0x00ebf74b: call   0x14006f510
0x00ebf750: lea    rdx,[rip+0x86f0b1]        # 0x14172e808 ; literal=" string by stopping it against the body.  "
0x00ebf757: lea    rcx,[rbp+0x2a0]
0x00ebf75e: call   0x14006f4f0
0x00ebf763: test   bl,bl
0x00ebf765: je     0x140ebf77a
0x00ebf767: lea    rdx,[rip+0x86efaa]        # 0x14172e718 ; literal="Tuning is possible with adjustable bridges.  "
0x00ebf76e: lea    rcx,[rbp+0x2a0]
0x00ebf775: call   0x14006f4f0
0x00ebf77a: cmp    BYTE PTR [rsp+0x44],0x0
0x00ebf77f: je     0x140ebf794
0x00ebf781: lea    rdx,[rip+0x86ef68]        # 0x14172e6f0 ; literal="Tuning is accomplished by pegs.  "
0x00ebf788: lea    rcx,[rbp+0x2a0]
0x00ebf78f: call   0x14006f4f0
0x00ebf794: cmp    BYTE PTR [rsp+0x4a],0x0
0x00ebf799: je     0x140ebf7ae
0x00ebf79b: lea    rdx,[rip+0x86efce]        # 0x14172e770 ; literal="Tuning is also possible using small levers.  "
0x00ebf7a2: lea    rcx,[rbp+0x2a0]
0x00ebf7a9: call   0x14006f4f0
0x00ebf7ae: cmp    BYTE PTR [rsp+0x43],0x0
0x00ebf7b3: je     0x140ebf7c8
0x00ebf7b5: lea    rdx,[rip+0x86ef8c]        # 0x14172e748 ; literal="Pitch can also be altered by pedals.  "
0x00ebf7bc: lea    rcx,[rbp+0x2a0]
0x00ebf7c3: call   0x14006f4f0
0x00ebf7c8: mov    r8d,esi
0x00ebf7cb: mov    edx,r14d
0x00ebf7ce: lea    rcx,[rbp+0x2a0]
0x00ebf7d5: call   0x140eb1f50
0x00ebf7da: cmp    BYTE PTR [rsp+0x64],0x0
0x00ebf7df: je     0x140ebf816
0x00ebf7e1: lea    rdx,[rip+0x728dfc]        # 0x1415e85e4 ; literal="A "
0x00ebf7e8: lea    rcx,[rbp+0x2a0]
0x00ebf7ef: call   0x14006f4f0
0x00ebf7f4: lea    rdx,[rbp+0x2a0]
0x00ebf7fb: mov    ecx,DWORD PTR [rbp-0x14]
0x00ebf7fe: call   0x140eb3dd0
0x00ebf803: lea    rdx,[rip+0x86f0d6]        # 0x14172e8e0 ; literal=" bowl is attached to the neck to provide additional overtones.  "
0x00ebf80a: lea    rcx,[rbp+0x2a0]
0x00ebf811: call   0x14006f4f0
0x00ebf816: lea    rdx,[rbp+0x1a8]
0x00ebf81d: lea    rcx,[rbp+0x2a0]
0x00ebf824: call   0x140eb3a60
0x00ebf829: lea    rcx,[rbp+0x2a0]
0x00ebf830: call   0x14006f2c0
0x00ebf835: lea    rdx,[rax-0x1]
0x00ebf839: lea    rcx,[rbp+0x2a0]
0x00ebf840: call   0x1400fb4d0
0x00ebf845: cmp    BYTE PTR [rax],0x20
0x00ebf848: jne    0x140ebf890
0x00ebf84a: nop    WORD PTR [rax+rax*1+0x0]
0x00ebf850: lea    rcx,[rbp+0x2a0]
0x00ebf857: call   0x14006f2c0
0x00ebf85c: lea    rdx,[rax-0x1]
0x00ebf860: xor    r8d,r8d
0x00ebf863: lea    rcx,[rbp+0x2a0]
0x00ebf86a: call   0x1400e11c0
0x00ebf86f: lea    rcx,[rbp+0x2a0]
0x00ebf876: call   0x14006f2c0
0x00ebf87b: lea    rdx,[rax-0x1]
0x00ebf87f: lea    rcx,[rbp+0x2a0]
0x00ebf886: call   0x1400fb4d0
0x00ebf88b: cmp    BYTE PTR [rax],0x20
0x00ebf88e: je     0x140ebf850
0x00ebf890: lea    rdx,[rbp+0x2a0]
0x00ebf897: lea    rcx,[rbp+0x200]
0x00ebf89e: call   0x1400b9ca0
0x00ebf8a3: lea    rdx,[rip+0x738dba]        # 0x1415f8664 ; literal="]"
0x00ebf8aa: lea    rcx,[rbp+0x200]
0x00ebf8b1: call   0x14006f4f0
0x00ebf8b6: lea    rdx,[rbp+0x200]
0x00ebf8bd: lea    rcx,[rsp+0x28]
0x00ebf8c2: call   0x1400bb700
0x00ebf8c7: nop
0x00ebf8c8: lea    rcx,[rbp+0x2a0]
0x00ebf8cf: call   0x140067dc0
0x00ebf8d4: nop
0x00ebf8d5: lea    rcx,[rbp+0x1a8]
0x00ebf8dc: call   0x140cc88d0
0x00ebf8e1: nop
0x00ebf8e2: lea    rcx,[rbp+0x580]
0x00ebf8e9: call   0x140067dc0
0x00ebf8ee: nop
0x00ebf8ef: lea    rcx,[rbp+0x540]
0x00ebf8f6: call   0x140067dc0
0x00ebf8fb: nop
0x00ebf8fc: lea    rcx,[rbp+0x740]
0x00ebf903: call   0x140067dc0
0x00ebf908: nop
0x00ebf909: lea    rcx,[rbp+0x3e0]
0x00ebf910: call   0x140067dc0
0x00ebf915: nop
0x00ebf916: lea    rcx,[rbp+0x5a0]
0x00ebf91d: call   0x140067dc0
0x00ebf922: nop
0x00ebf923: lea    rcx,[rbp+0x5c0]
0x00ebf92a: call   0x140067dc0
0x00ebf92f: nop
0x00ebf930: lea    rcx,[rbp+0x5e0]
0x00ebf937: call   0x140067dc0
0x00ebf93c: nop
0x00ebf93d: lea    rcx,[rbp+0x200]
0x00ebf944: call   0x140067dc0
0x00ebf949: nop
0x00ebf94a: lea    rcx,[rbp+0x420]
0x00ebf951: call   0x140067dc0
0x00ebf956: nop
0x00ebf957: lea    rcx,[rbp+0x340]
0x00ebf95e: call   0x140067dc0
0x00ebf963: mov    ebx,DWORD PTR [rsp+0x70]
0x00ebf967: inc    ebx
0x00ebf969: mov    DWORD PTR [rsp+0x70],ebx
0x00ebf96d: mov    r14d,DWORD PTR [rsp+0x6c]
0x00ebf972: inc    r14d
0x00ebf975: mov    DWORD PTR [rsp+0x6c],r14d
0x00ebf97a: mov    rax,QWORD PTR [rsp+0x50]
0x00ebf97f: cmp    ebx,DWORD PTR [rax+0xdc]
0x00ebf985: mov    ebx,DWORD PTR [rbp-0x64]
0x00ebf988: mov    r15d,0x0
0x00ebf98e: jl     0x140ebba31
0x00ebf994: mov    r14,rax
0x00ebf997: mov    DWORD PTR [rbp-0x60],r15d
0x00ebf99b: cmp    DWORD PTR [r14+0xe0],0x0
0x00ebf9a3: jle    0x140ec2d46
0x00ebf9a9: mov    r12d,0x1
0x00ebf9af: mov    r14d,r12d
0x00ebf9b2: mov    DWORD PTR [rbp-0x50],r12d
0x00ebf9b6: jmp    0x140ebf9c6
0x00ebf9b8: nop    DWORD PTR [rax+rax*1+0x0]
0x00ebf9c0: mov    r12d,0x1
0x00ebf9c6: lea    rcx,[rbp+0x360]
0x00ebf9cd: call   0x14006f620
0x00ebf9d2: nop
0x00ebf9d3: movsxd rax,DWORD PTR [rbp-0x64]
0x00ebf9d7: cmp    eax,0xffffffff
0x00ebf9da: je     0x140ebfb5b
0x00ebf9e0: mov    rdx,rax
0x00ebf9e3: lea    rcx,[rip+0x1627ca6]        # 0x1424e7690
0x00ebf9ea: call   0x14006f1b0
0x00ebf9ef: mov    rsi,QWORD PTR [rax]
0x00ebf9f2: lea    rcx,[rsi+0x50]
0x00ebf9f6: call   0x14006ede0
0x00ebf9fb: mov    rdi,rax
0x00ebf9fe: test   eax,eax
0x00ebfa00: jle    0x140ebfb5b
0x00ebfa06: mov    ebx,r15d
0x00ebfa09: nop    DWORD PTR [rax+0x0]
0x00ebfa10: mov    ecx,edi
0x00ebfa12: call   0x140071ec0
0x00ebfa17: movsxd rdx,eax
0x00ebfa1a: lea    rcx,[rsi+0x50]
0x00ebfa1e: call   0x14006f1b0
0x00ebfa23: mov    rdx,QWORD PTR [rax]
0x00ebfa26: lea    rcx,[rbp+0x360]
0x00ebfa2d: call   0x14006f530
0x00ebfa32: lea    rdx,[rbp+0x48]
0x00ebfa36: lea    rcx,[rip+0x16272ab]        # 0x1424e6ce8
0x00ebfa3d: call   0x14006f1d0
0x00ebfa42: lea    rdx,[rbp+0xb0]
0x00ebfa49: lea    rcx,[rip+0x1627298]        # 0x1424e6ce8
0x00ebfa50: call   0x14006f1c0
0x00ebfa55: lea    r8,[rbp+0xb0]
0x00ebfa5c: lea    rdx,[rbp-0x6e]
0x00ebfa60: lea    rcx,[rbp+0x48]
0x00ebfa64: call   0x14006edb0
0x00ebfa69: xor    edx,edx
0x00ebfa6b: movzx  ecx,BYTE PTR [rax]
0x00ebfa6e: call   0x140065740
0x00ebfa73: test   al,al
0x00ebfa75: je     0x140ebfac6
0x00ebfa77: lea    rcx,[rbp+0x48]
0x00ebfa7b: call   0x14006eda0
0x00ebfa80: mov    rcx,QWORD PTR [rax]
0x00ebfa83: add    rcx,0x68
0x00ebfa87: lea    rdx,[rbp+0x360]
0x00ebfa8e: call   0x14006fdd0
0x00ebfa93: test   al,al
0x00ebfa95: jne    0x140ebfb4e
0x00ebfa9b: lea    rcx,[rbp+0x48]
0x00ebfa9f: call   0x14006ed90
0x00ebfaa4: lea    r8,[rbp+0xb0]
0x00ebfaab: lea    rdx,[rbp-0x6e]
0x00ebfaaf: lea    rcx,[rbp+0x48]
0x00ebfab3: call   0x14006edb0
0x00ebfab8: xor    edx,edx
0x00ebfaba: movzx  ecx,BYTE PTR [rax]
0x00ebfabd: call   0x140065740
0x00ebfac2: test   al,al
0x00ebfac4: jne    0x140ebfa77
0x00ebfac6: lea    rdx,[rbp+0x50]
0x00ebfaca: lea    rcx,[rbp+0x78]
0x00ebface: call   0x14006f1d0
0x00ebfad3: lea    rdx,[rbp+0xb8]
0x00ebfada: lea    rcx,[rbp+0x78]
0x00ebfade: call   0x14006f1c0
0x00ebfae3: lea    r8,[rbp+0xb8]
0x00ebfaea: lea    rdx,[rbp-0x70]
0x00ebfaee: lea    rcx,[rbp+0x50]
0x00ebfaf2: call   0x14006edb0
0x00ebfaf7: xor    edx,edx
0x00ebfaf9: movzx  ecx,BYTE PTR [rax]
0x00ebfafc: call   0x140065740
0x00ebfb01: test   al,al
0x00ebfb03: je     0x140ebfb67
0x00ebfb05: lea    rcx,[rbp+0x50]
0x00ebfb09: call   0x14006eda0
0x00ebfb0e: lea    rdx,[rbp+0x360]
0x00ebfb15: mov    rcx,QWORD PTR [rax]
0x00ebfb18: call   0x14006fdd0
0x00ebfb1d: test   al,al
0x00ebfb1f: jne    0x140ebfb4e
0x00ebfb21: lea    rcx,[rbp+0x50]
0x00ebfb25: call   0x14006ed90
0x00ebfb2a: lea    r8,[rbp+0xb8]
0x00ebfb31: lea    rdx,[rbp-0x70]
0x00ebfb35: lea    rcx,[rbp+0x50]
0x00ebfb39: call   0x14006edb0
0x00ebfb3e: xor    edx,edx
0x00ebfb40: movzx  ecx,BYTE PTR [rax]
0x00ebfb43: call   0x140065740
0x00ebfb48: test   al,al
0x00ebfb4a: jne    0x140ebfb05
0x00ebfb4c: jmp    0x140ebfb67
0x00ebfb4e: inc    ebx
0x00ebfb50: cmp    ebx,0x19
0x00ebfb53: jl     0x140ebfa10
0x00ebfb59: jmp    0x140ebfb67
0x00ebfb5b: lea    rcx,[rbp+0x360]
0x00ebfb62: call   0x14092e410
0x00ebfb67: lea    rdx,[rbp+0x360]
0x00ebfb6e: lea    rcx,[rbp+0x78]
0x00ebfb72: call   0x1400bb700
0x00ebfb77: lea    rdx,[rbp+0x760]
0x00ebfb7e: lea    rcx,[rbp+0x460]
0x00ebfb85: call   0x14006f560
0x00ebfb8a: nop
0x00ebfb8b: lea    rdx,[rip+0x86ed42]        # 0x14172e8d4 ; literal="INW"
0x00ebfb92: lea    rcx,[rbp+0x460]
0x00ebfb99: call   0x14006f4f0
0x00ebfb9e: lea    rdx,[rbp+0x460]
0x00ebfba5: mov    ecx,r14d
0x00ebfba8: call   0x140529cf0
0x00ebfbad: lea    rdx,[rbp+0x460]
0x00ebfbb4: lea    rcx,[rbp+0x100]
0x00ebfbbb: call   0x1400bb700
0x00ebfbc0: lea    rcx,[rbp+0x220]
0x00ebfbc7: call   0x14006f620
0x00ebfbcc: nop
0x00ebfbcd: mov    ecx,0x27
0x00ebfbd2: call   0x140071ec0
0x00ebfbd7: inc    eax
0x00ebfbd9: imul   r15d,eax,0x3e8
0x00ebfbe0: mov    DWORD PTR [rsp+0x6c],r15d
0x00ebfbe5: xor    bl,bl
0x00ebfbe7: mov    BYTE PTR [rsp+0x43],bl
0x00ebfbeb: xor    dil,dil
0x00ebfbee: mov    BYTE PTR [rsp+0x46],dil
0x00ebfbf3: xor    sil,sil
0x00ebfbf6: mov    BYTE PTR [rsp+0x47],sil
0x00ebfbfb: xor    r14b,r14b
0x00ebfbfe: mov    BYTE PTR [rsp+0x49],r14b
0x00ebfc03: xor    r13b,r13b
0x00ebfc06: mov    BYTE PTR [rsp+0x68],r13b
0x00ebfc0b: mov    BYTE PTR [rsp+0x44],bl
0x00ebfc0f: lea    rcx,[rbp+0x440]
0x00ebfc16: call   0x14006f620
0x00ebfc1b: nop
0x00ebfc1c: lea    rcx,[rbp+0x480]
0x00ebfc23: call   0x14006f620
0x00ebfc28: nop
0x00ebfc29: lea    rcx,[rbp+0x640]
0x00ebfc30: call   0x14006f620
0x00ebfc35: nop
0x00ebfc36: lea    rcx,[rbp+0x620]
0x00ebfc3d: call   0x14006f620
0x00ebfc42: nop
0x00ebfc43: lea    rcx,[rbp+0x600]
0x00ebfc4a: call   0x14006f620
0x00ebfc4f: nop
0x00ebfc50: xor    eax,eax
0x00ebfc52: mov    DWORD PTR [rbp-0x30],eax
0x00ebfc55: mov    DWORD PTR [rbp-0x80],eax
0x00ebfc58: mov    DWORD PTR [rbp-0xc],eax
0x00ebfc5b: mov    DWORD PTR [rbp-0x8],eax
0x00ebfc5e: mov    DWORD PTR [rbp-0x4],eax
0x00ebfc61: mov    DWORD PTR [rbp-0x10],eax
0x00ebfc64: mov    DWORD PTR [rsp+0x64],r12d
0x00ebfc69: mov    ecx,0x5
0x00ebfc6e: call   0x140071ec0
0x00ebfc73: test   eax,eax
0x00ebfc75: je     0x140ec06c7
0x00ebfc7b: sub    eax,0x1
0x00ebfc7e: je     0x140ec06ba
0x00ebfc84: sub    eax,0x1
0x00ebfc87: je     0x140ec06ad
0x00ebfc8d: sub    eax,0x1
0x00ebfc90: je     0x140ec06a0
0x00ebfc96: cmp    eax,0x1
0x00ebfc99: jne    0x140ec16e0
0x00ebfc9f: mov    BYTE PTR [rsp+0x44],al
0x00ebfca3: lea    ecx,[r15+r15*4]
0x00ebfca7: add    ecx,ecx
0x00ebfca9: mov    eax,0x51eb851f
0x00ebfcae: imul   ecx
0x00ebfcb0: mov    ebx,edx
0x00ebfcb2: sar    ebx,0x5
0x00ebfcb5: mov    eax,ebx
0x00ebfcb7: shr    eax,0x1f
0x00ebfcba: add    ebx,eax
0x00ebfcbc: lea    ecx,[r15+r15*4]
0x00ebfcc0: shl    ecx,0x3
0x00ebfcc3: mov    eax,0x51eb851f
0x00ebfcc8: imul   ecx
0x00ebfcca: mov    esi,edx
0x00ebfccc: sar    esi,0x5
0x00ebfccf: mov    eax,esi
0x00ebfcd1: shr    eax,0x1f
0x00ebfcd4: add    esi,eax
0x00ebfcd6: imul   ecx,r15d,0x32
0x00ebfcda: mov    eax,0x51eb851f
0x00ebfcdf: imul   ecx
0x00ebfce1: mov    r15d,edx
0x00ebfce4: sar    r15d,0x5
0x00ebfce8: mov    eax,r15d
0x00ebfceb: shr    eax,0x1f
0x00ebfcee: add    r15d,eax
0x00ebfcf1: lea    rdx,[rbp+0x460]
0x00ebfcf8: lea    rcx,[rbp+0x440]
0x00ebfcff: call   0x14006f530
0x00ebfd04: lea    rdx,[rip+0x86ec25]        # 0x14172e930 ; literal="_BLOW"
0x00ebfd0b: lea    rcx,[rbp+0x440]
0x00ebfd12: call   0x14006f4f0
0x00ebfd17: lea    rdx,[rbp+0x440]
0x00ebfd1e: lea    rcx,[rbp-0x48]
0x00ebfd22: call   0x1400bb700
0x00ebfd27: lea    rdx,[rbp+0x460]
0x00ebfd2e: lea    rcx,[rbp+0x480]
0x00ebfd35: call   0x14006f530
0x00ebfd3a: lea    rdx,[rip+0x86e4ef]        # 0x14172e230 ; literal="_BODY"
0x00ebfd41: lea    rcx,[rbp+0x480]
0x00ebfd48: call   0x14006f4f0
0x00ebfd4d: lea    rdx,[rbp+0x480]
0x00ebfd54: lea    rcx,[rbp-0x48]
0x00ebfd58: call   0x1400bb700
0x00ebfd5d: lea    rdx,[rbp+0x460]
0x00ebfd64: lea    rcx,[rbp+0x600]
0x00ebfd6b: call   0x14006f530
0x00ebfd70: lea    rdx,[rip+0x86ed85]        # 0x14172eafc ; literal="_PIPES"
0x00ebfd77: lea    rcx,[rbp+0x600]
0x00ebfd7e: call   0x14006f4f0
0x00ebfd83: lea    rdx,[rbp+0x600]
0x00ebfd8a: lea    rcx,[rbp-0x48]
0x00ebfd8e: call   0x1400bb700
0x00ebfd93: mov    edi,0x6
0x00ebfd98: cmp    ebx,0x9c40
0x00ebfd9e: mov    eax,0x3
0x00ebfda3: cmovl  edi,eax
0x00ebfda6: mov    r14d,0x6
0x00ebfdac: cmp    esi,0x9c40
0x00ebfdb2: cmovl  r14d,eax
0x00ebfdb6: mov    r12d,0x6
0x00ebfdbc: cmp    r15d,0x9c40
0x00ebfdc3: cmovl  r12d,eax
0x00ebfdc7: lea    rdx,[rip+0x86d802]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ebfdce: lea    rcx,[rbp+0x220]
0x00ebfdd5: call   0x14006f510
0x00ebfdda: lea    rdx,[rbp+0x440]
0x00ebfde1: lea    rcx,[rbp+0x220]
0x00ebfde8: call   0x1400b9ca0
0x00ebfded: lea    rdx,[rip+0x738870]        # 0x1415f8664 ; literal="]"
0x00ebfdf4: lea    rcx,[rbp+0x220]
0x00ebfdfb: call   0x14006f4f0
0x00ebfe00: lea    rdx,[rbp+0x220]
0x00ebfe07: lea    rcx,[rsp+0x28]
0x00ebfe0c: call   0x1400bb700
0x00ebfe11: lea    rdx,[rip+0x7e61c0]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ebfe18: lea    rcx,[rsp+0x28]
0x00ebfe1d: call   0x1400bb870
0x00ebfe22: mov    rax,QWORD PTR [rsp+0x50]
0x00ebfe27: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ebfe2b: je     0x140ebfe8b
0x00ebfe2d: lea    rdx,[rip+0x86cc2c]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ebfe34: lea    rcx,[rbp+0xb20]
0x00ebfe3b: call   0x1400680e0
0x00ebfe40: nop
0x00ebfe41: lea    rdx,[rbp+0xb20]
0x00ebfe48: mov    rax,QWORD PTR [rsp+0x50]
0x00ebfe4d: mov    ecx,DWORD PTR [rax+0x40]
0x00ebfe50: call   0x140529cf0
0x00ebfe55: lea    rdx,[rip+0x738808]        # 0x1415f8664 ; literal="]"
0x00ebfe5c: lea    rcx,[rbp+0xb20]
0x00ebfe63: call   0x14006f4f0
0x00ebfe68: lea    rdx,[rbp+0xb20]
0x00ebfe6f: lea    rcx,[rsp+0x28]
0x00ebfe74: call   0x1400bb700
0x00ebfe79: nop
0x00ebfe7a: lea    rcx,[rbp+0xb20]
0x00ebfe81: call   0x140067dc0
0x00ebfe86: mov    rax,QWORD PTR [rsp+0x50]
0x00ebfe8b: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ebfe8f: je     0x140ebfeea
0x00ebfe91: lea    rdx,[rip+0x86cbb8]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ebfe98: lea    rcx,[rbp+0xb40]
0x00ebfe9f: call   0x1400680e0
0x00ebfea4: nop
0x00ebfea5: lea    rdx,[rbp+0xb40]
0x00ebfeac: mov    rax,QWORD PTR [rsp+0x50]
0x00ebfeb1: mov    ecx,DWORD PTR [rax+0x44]
0x00ebfeb4: call   0x140529cf0
0x00ebfeb9: lea    rdx,[rip+0x7387a4]        # 0x1415f8664 ; literal="]"
0x00ebfec0: lea    rcx,[rbp+0xb40]
0x00ebfec7: call   0x14006f4f0
0x00ebfecc: lea    rdx,[rbp+0xb40]
0x00ebfed3: lea    rcx,[rsp+0x28]
0x00ebfed8: call   0x1400bb700
0x00ebfedd: nop
0x00ebfede: lea    rcx,[rbp+0xb40]
0x00ebfee5: call   0x140067dc0
0x00ebfeea: lea    rdx,[rip+0x86d6c7]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ebfef1: lea    rcx,[rsp+0x28]
0x00ebfef6: call   0x1400bb870
0x00ebfefb: lea    rdx,[rip+0x86e256]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ebff02: lea    rcx,[rsp+0x28]
0x00ebff07: call   0x1400bb870
0x00ebff0c: lea    rdx,[rip+0x86e30d]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ebff13: lea    rcx,[rsp+0x28]
0x00ebff18: call   0x1400bb870
0x00ebff1d: lea    rdx,[rip+0x86e22c]        # 0x14172e150 ; literal="[NAME:"
0x00ebff24: lea    rcx,[rbp+0x220]
0x00ebff2b: call   0x14006f510
0x00ebff30: lea    rdx,[rbp+0x360]
0x00ebff37: lea    rcx,[rbp+0x220]
0x00ebff3e: call   0x1400b9ca0
0x00ebff43: lea    rdx,[rip+0x86e91e]        # 0x14172e868 ; literal=" blowpipe"
0x00ebff4a: lea    rcx,[rbp+0x220]
0x00ebff51: call   0x14006f4f0
0x00ebff56: lea    rdx,[rip+0x7534a7]        # 0x141613404 ; literal=":"
0x00ebff5d: lea    rcx,[rbp+0x220]
0x00ebff64: call   0x14006f4f0
0x00ebff69: lea    rdx,[rbp+0x360]
0x00ebff70: lea    rcx,[rbp+0x220]
0x00ebff77: call   0x1400b9ca0
0x00ebff7c: lea    rdx,[rip+0x86e945]        # 0x14172e8c8 ; literal=" blowpipes"
0x00ebff83: lea    rcx,[rbp+0x220]
0x00ebff8a: call   0x14006f4f0
0x00ebff8f: lea    rdx,[rip+0x7386ce]        # 0x1415f8664 ; literal="]"
0x00ebff96: lea    rcx,[rbp+0x220]
0x00ebff9d: call   0x14006f4f0
0x00ebffa2: lea    rdx,[rbp+0x220]
0x00ebffa9: lea    rcx,[rsp+0x28]
0x00ebffae: call   0x1400bb700
0x00ebffb3: lea    rdx,[rip+0x86e16e]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ebffba: lea    rcx,[rsp+0x28]
0x00ebffbf: call   0x1400bb870
0x00ebffc4: lea    r8,[rbp-0x30]
0x00ebffc8: lea    rdx,[rsp+0x28]
0x00ebffcd: mov    rcx,QWORD PTR [rsp+0x78]
0x00ebffd2: call   0x140eb4380
0x00ebffd7: lea    rdx,[rip+0x86e12a]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ebffde: lea    rcx,[rsp+0x28]
0x00ebffe3: call   0x1400bb870
0x00ebffe8: lea    rdx,[rip+0x86e159]        # 0x14172e148 ; literal="[SIZE:"
0x00ebffef: lea    rcx,[rbp+0x220]
0x00ebfff6: call   0x14006f510
0x00ebfffb: lea    rdx,[rbp+0x220]
0x00ec0002: mov    ecx,ebx
0x00ec0004: call   0x140529cf0
0x00ec0009: lea    rdx,[rip+0x738654]        # 0x1415f8664 ; literal="]"
0x00ec0010: lea    rcx,[rbp+0x220]
0x00ec0017: call   0x14006f4f0
0x00ec001c: lea    rdx,[rbp+0x220]
0x00ec0023: lea    rcx,[rsp+0x28]
0x00ec0028: call   0x1400bb700
0x00ec002d: lea    rdx,[rip+0x86e104]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec0034: lea    rcx,[rbp+0x220]
0x00ec003b: call   0x14006f510
0x00ec0040: lea    rdx,[rbp+0x220]
0x00ec0047: mov    ecx,edi
0x00ec0049: call   0x140529cf0
0x00ec004e: lea    rdx,[rip+0x73860f]        # 0x1415f8664 ; literal="]"
0x00ec0055: lea    rcx,[rbp+0x220]
0x00ec005c: call   0x14006f4f0
0x00ec0061: lea    rdx,[rbp+0x220]
0x00ec0068: lea    rcx,[rsp+0x28]
0x00ec006d: call   0x1400bb700
0x00ec0072: lea    rdx,[rip+0x86e18f]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec0079: lea    rcx,[rbp+0x220]
0x00ec0080: call   0x14006f510
0x00ec0085: lea    rdx,[rbp+0x360]
0x00ec008c: lea    rcx,[rbp+0x220]
0x00ec0093: call   0x1400b9ca0
0x00ec0098: lea    rdx,[rip+0x86e7e1]        # 0x14172e880 ; literal=" blowpipe is used by the musician to send air into the instrument.]"
0x00ec009f: lea    rcx,[rbp+0x220]
0x00ec00a6: call   0x14006f4f0
0x00ec00ab: lea    rdx,[rbp+0x220]
0x00ec00b2: lea    rcx,[rsp+0x28]
0x00ec00b7: call   0x1400bb700
0x00ec00bc: lea    rdx,[rip+0x86d50d]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec00c3: lea    rcx,[rbp+0x220]
0x00ec00ca: call   0x14006f510
0x00ec00cf: lea    rdx,[rbp+0x480]
0x00ec00d6: lea    rcx,[rbp+0x220]
0x00ec00dd: call   0x1400b9ca0
0x00ec00e2: lea    rdx,[rip+0x73857b]        # 0x1415f8664 ; literal="]"
0x00ec00e9: lea    rcx,[rbp+0x220]
0x00ec00f0: call   0x14006f4f0
0x00ec00f5: lea    rdx,[rbp+0x220]
0x00ec00fc: lea    rcx,[rsp+0x28]
0x00ec0101: call   0x1400bb700
0x00ec0106: lea    rdx,[rip+0x7e5ecb]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec010d: lea    rcx,[rsp+0x28]
0x00ec0112: call   0x1400bb870
0x00ec0117: mov    rbx,QWORD PTR [rsp+0x50]
0x00ec011c: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec0120: je     0x140ec0176
0x00ec0122: lea    rdx,[rip+0x86c937]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec0129: lea    rcx,[rbp+0xb60]
0x00ec0130: call   0x1400680e0
0x00ec0135: nop
0x00ec0136: lea    rdx,[rbp+0xb60]
0x00ec013d: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec0140: call   0x140529cf0
0x00ec0145: lea    rdx,[rip+0x738518]        # 0x1415f8664 ; literal="]"
0x00ec014c: lea    rcx,[rbp+0xb60]
0x00ec0153: call   0x14006f4f0
0x00ec0158: lea    rdx,[rbp+0xb60]
0x00ec015f: lea    rcx,[rsp+0x28]
0x00ec0164: call   0x1400bb700
0x00ec0169: nop
0x00ec016a: lea    rcx,[rbp+0xb60]
0x00ec0171: call   0x140067dc0
0x00ec0176: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec017a: je     0x140ec01d0
0x00ec017c: lea    rdx,[rip+0x86c8cd]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec0183: lea    rcx,[rbp+0xb80]
0x00ec018a: call   0x1400680e0
0x00ec018f: nop
0x00ec0190: lea    rdx,[rbp+0xb80]
0x00ec0197: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec019a: call   0x140529cf0
0x00ec019f: lea    rdx,[rip+0x7384be]        # 0x1415f8664 ; literal="]"
0x00ec01a6: lea    rcx,[rbp+0xb80]
0x00ec01ad: call   0x14006f4f0
0x00ec01b2: lea    rdx,[rbp+0xb80]
0x00ec01b9: lea    rcx,[rsp+0x28]
0x00ec01be: call   0x1400bb700
0x00ec01c3: nop
0x00ec01c4: lea    rcx,[rbp+0xb80]
0x00ec01cb: call   0x140067dc0
0x00ec01d0: lea    rdx,[rip+0x86d3e1]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec01d7: lea    rcx,[rsp+0x28]
0x00ec01dc: call   0x1400bb870
0x00ec01e1: lea    rdx,[rip+0x86df70]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec01e8: lea    rcx,[rsp+0x28]
0x00ec01ed: call   0x1400bb870
0x00ec01f2: lea    rdx,[rip+0x86e027]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec01f9: lea    rcx,[rsp+0x28]
0x00ec01fe: call   0x1400bb870
0x00ec0203: lea    rdx,[rip+0x86df46]        # 0x14172e150 ; literal="[NAME:"
0x00ec020a: lea    rcx,[rbp+0x220]
0x00ec0211: call   0x14006f510
0x00ec0216: lea    rdx,[rbp+0x360]
0x00ec021d: lea    rcx,[rbp+0x220]
0x00ec0224: call   0x1400b9ca0
0x00ec0229: lea    rdx,[rip+0x86e928]        # 0x14172eb58 ; literal=" wind chest"
0x00ec0230: lea    rcx,[rbp+0x220]
0x00ec0237: call   0x14006f4f0
0x00ec023c: lea    rdx,[rip+0x7531c1]        # 0x141613404 ; literal=":"
0x00ec0243: lea    rcx,[rbp+0x220]
0x00ec024a: call   0x14006f4f0
0x00ec024f: lea    rdx,[rbp+0x360]
0x00ec0256: lea    rcx,[rbp+0x220]
0x00ec025d: call   0x1400b9ca0
0x00ec0262: lea    rdx,[rip+0x86e8df]        # 0x14172eb48 ; literal=" wind chests"
0x00ec0269: lea    rcx,[rbp+0x220]
0x00ec0270: call   0x14006f4f0
0x00ec0275: lea    rdx,[rip+0x7383e8]        # 0x1415f8664 ; literal="]"
0x00ec027c: lea    rcx,[rbp+0x220]
0x00ec0283: call   0x14006f4f0
0x00ec0288: lea    rdx,[rbp+0x220]
0x00ec028f: lea    rcx,[rsp+0x28]
0x00ec0294: call   0x1400bb700
0x00ec0299: lea    rdx,[rip+0x86de88]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec02a0: lea    rcx,[rsp+0x28]
0x00ec02a5: call   0x1400bb870
0x00ec02aa: lea    r8,[rbp-0x80]
0x00ec02ae: lea    rdx,[rsp+0x28]
0x00ec02b3: mov    rdi,QWORD PTR [rsp+0x78]
0x00ec02b8: mov    rcx,rdi
0x00ec02bb: call   0x140eb4380
0x00ec02c0: lea    rdx,[rip+0x86de41]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec02c7: lea    rcx,[rsp+0x28]
0x00ec02cc: call   0x1400bb870
0x00ec02d1: lea    rdx,[rip+0x86de70]        # 0x14172e148 ; literal="[SIZE:"
0x00ec02d8: lea    rcx,[rbp+0x220]
0x00ec02df: call   0x14006f510
0x00ec02e4: lea    rdx,[rbp+0x220]
0x00ec02eb: mov    ecx,esi
0x00ec02ed: call   0x140529cf0
0x00ec02f2: lea    rdx,[rip+0x73836b]        # 0x1415f8664 ; literal="]"
0x00ec02f9: lea    rcx,[rbp+0x220]
0x00ec0300: call   0x14006f4f0
0x00ec0305: lea    rdx,[rbp+0x220]
0x00ec030c: lea    rcx,[rsp+0x28]
0x00ec0311: call   0x1400bb700
0x00ec0316: lea    rdx,[rip+0x86de1b]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec031d: lea    rcx,[rbp+0x220]
0x00ec0324: call   0x14006f510
0x00ec0329: lea    rdx,[rbp+0x220]
0x00ec0330: mov    ecx,r14d
0x00ec0333: call   0x140529cf0
0x00ec0338: lea    rdx,[rip+0x738325]        # 0x1415f8664 ; literal="]"
0x00ec033f: lea    rcx,[rbp+0x220]
0x00ec0346: call   0x14006f4f0
0x00ec034b: lea    rdx,[rbp+0x220]
0x00ec0352: lea    rcx,[rsp+0x28]
0x00ec0357: call   0x1400bb700
0x00ec035c: lea    rdx,[rip+0x86dea5]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec0363: lea    rcx,[rbp+0x220]
0x00ec036a: call   0x14006f510
0x00ec036f: lea    rdx,[rbp+0x360]
0x00ec0376: lea    rcx,[rbp+0x220]
0x00ec037d: call   0x1400b9ca0
0x00ec0382: lea    rdx,[rip+0x86e6df]        # 0x14172ea68 ; literal=" wind chest is the body of the instrument.]"
0x00ec0389: lea    rcx,[rbp+0x220]
0x00ec0390: call   0x14006f4f0
0x00ec0395: lea    rdx,[rbp+0x220]
0x00ec039c: lea    rcx,[rsp+0x28]
0x00ec03a1: call   0x1400bb700
0x00ec03a6: lea    rdx,[rip+0x86d223]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec03ad: lea    rcx,[rbp+0x220]
0x00ec03b4: call   0x14006f510
0x00ec03b9: lea    rdx,[rbp+0x600]
0x00ec03c0: lea    rcx,[rbp+0x220]
0x00ec03c7: call   0x1400b9ca0
0x00ec03cc: lea    rdx,[rip+0x738291]        # 0x1415f8664 ; literal="]"
0x00ec03d3: lea    rcx,[rbp+0x220]
0x00ec03da: call   0x14006f4f0
0x00ec03df: lea    rdx,[rbp+0x220]
0x00ec03e6: lea    rcx,[rsp+0x28]
0x00ec03eb: call   0x1400bb700
0x00ec03f0: lea    rdx,[rip+0x7e5be1]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec03f7: lea    rcx,[rsp+0x28]
0x00ec03fc: call   0x1400bb870
0x00ec0401: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec0405: je     0x140ec045b
0x00ec0407: lea    rdx,[rip+0x86c652]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec040e: lea    rcx,[rbp+0xba0]
0x00ec0415: call   0x1400680e0
0x00ec041a: nop
0x00ec041b: lea    rdx,[rbp+0xba0]
0x00ec0422: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec0425: call   0x140529cf0
0x00ec042a: lea    rdx,[rip+0x738233]        # 0x1415f8664 ; literal="]"
0x00ec0431: lea    rcx,[rbp+0xba0]
0x00ec0438: call   0x14006f4f0
0x00ec043d: lea    rdx,[rbp+0xba0]
0x00ec0444: lea    rcx,[rsp+0x28]
0x00ec0449: call   0x1400bb700
0x00ec044e: nop
0x00ec044f: lea    rcx,[rbp+0xba0]
0x00ec0456: call   0x140067dc0
0x00ec045b: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec045f: je     0x140ec04b5
0x00ec0461: lea    rdx,[rip+0x86c5e8]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec0468: lea    rcx,[rbp+0xbc0]
0x00ec046f: call   0x1400680e0
0x00ec0474: nop
0x00ec0475: lea    rdx,[rbp+0xbc0]
0x00ec047c: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec047f: call   0x140529cf0
0x00ec0484: lea    rdx,[rip+0x7381d9]        # 0x1415f8664 ; literal="]"
0x00ec048b: lea    rcx,[rbp+0xbc0]
0x00ec0492: call   0x14006f4f0
0x00ec0497: lea    rdx,[rbp+0xbc0]
0x00ec049e: lea    rcx,[rsp+0x28]
0x00ec04a3: call   0x1400bb700
0x00ec04a8: nop
0x00ec04a9: lea    rcx,[rbp+0xbc0]
0x00ec04b0: call   0x140067dc0
0x00ec04b5: lea    rdx,[rip+0x86d0fc]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec04bc: lea    rcx,[rsp+0x28]
0x00ec04c1: call   0x1400bb870
0x00ec04c6: lea    rdx,[rip+0x86dc8b]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec04cd: lea    rcx,[rsp+0x28]
0x00ec04d2: call   0x1400bb870
0x00ec04d7: lea    rdx,[rip+0x86dd42]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec04de: lea    rcx,[rsp+0x28]
0x00ec04e3: call   0x1400bb870
0x00ec04e8: lea    rdx,[rip+0x86dc61]        # 0x14172e150 ; literal="[NAME:"
0x00ec04ef: lea    rcx,[rbp+0x220]
0x00ec04f6: call   0x14006f510
0x00ec04fb: lea    rdx,[rbp+0x360]
0x00ec0502: lea    rcx,[rbp+0x220]
0x00ec0509: call   0x1400b9ca0
0x00ec050e: lea    rdx,[rip+0x86e54b]        # 0x14172ea60 ; literal=" pipe"
0x00ec0515: lea    rcx,[rbp+0x220]
0x00ec051c: call   0x14006f4f0
0x00ec0521: lea    rdx,[rip+0x752edc]        # 0x141613404 ; literal=":"
0x00ec0528: lea    rcx,[rbp+0x220]
0x00ec052f: call   0x14006f4f0
0x00ec0534: lea    rdx,[rbp+0x360]
0x00ec053b: lea    rcx,[rbp+0x220]
0x00ec0542: call   0x1400b9ca0
0x00ec0547: lea    rdx,[rip+0x86dd36]        # 0x14172e284 ; literal=" pipes"
0x00ec054e: lea    rcx,[rbp+0x220]
0x00ec0555: call   0x14006f4f0
0x00ec055a: lea    rdx,[rip+0x738103]        # 0x1415f8664 ; literal="]"
0x00ec0561: lea    rcx,[rbp+0x220]
0x00ec0568: call   0x14006f4f0
0x00ec056d: lea    rdx,[rbp+0x220]
0x00ec0574: lea    rcx,[rsp+0x28]
0x00ec0579: call   0x1400bb700
0x00ec057e: lea    rdx,[rip+0x86dba3]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec0585: lea    rcx,[rsp+0x28]
0x00ec058a: call   0x1400bb870
0x00ec058f: lea    r8,[rbp-0x4]
0x00ec0593: lea    rdx,[rsp+0x28]
0x00ec0598: mov    rcx,rdi
0x00ec059b: call   0x140eb4380
0x00ec05a0: lea    rdx,[rip+0x86db61]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec05a7: lea    rcx,[rsp+0x28]
0x00ec05ac: call   0x1400bb870
0x00ec05b1: lea    rdx,[rip+0x86db90]        # 0x14172e148 ; literal="[SIZE:"
0x00ec05b8: lea    rcx,[rbp+0x220]
0x00ec05bf: call   0x14006f510
0x00ec05c4: lea    rdx,[rbp+0x220]
0x00ec05cb: mov    ecx,r15d
0x00ec05ce: call   0x140529cf0
0x00ec05d3: lea    rdx,[rip+0x73808a]        # 0x1415f8664 ; literal="]"
0x00ec05da: lea    rcx,[rbp+0x220]
0x00ec05e1: call   0x14006f4f0
0x00ec05e6: lea    rdx,[rbp+0x220]
0x00ec05ed: lea    rcx,[rsp+0x28]
0x00ec05f2: call   0x1400bb700
0x00ec05f7: lea    rdx,[rip+0x86db3a]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec05fe: lea    rcx,[rbp+0x220]
0x00ec0605: call   0x14006f510
0x00ec060a: lea    rdx,[rbp+0x220]
0x00ec0611: mov    ecx,r12d
0x00ec0614: call   0x140529cf0
0x00ec0619: lea    rdx,[rip+0x738044]        # 0x1415f8664 ; literal="]"
0x00ec0620: lea    rcx,[rbp+0x220]
0x00ec0627: call   0x14006f4f0
0x00ec062c: lea    rdx,[rbp+0x220]
0x00ec0633: lea    rcx,[rsp+0x28]
0x00ec0638: call   0x1400bb700
0x00ec063d: lea    rdx,[rip+0x86e494]        # 0x14172ead8 ; literal="[DESCRIPTION:The musician uses the "
0x00ec0644: lea    rcx,[rbp+0x220]
0x00ec064b: call   0x14006f510
0x00ec0650: lea    rdx,[rbp+0x360]
0x00ec0657: lea    rcx,[rbp+0x220]
0x00ec065e: call   0x1400b9ca0
0x00ec0663: lea    rdx,[rip+0x86e42e]        # 0x14172ea98 ; literal=" pipes to select the pitch as the air leaves the instrument.]"
0x00ec066a: lea    rcx,[rbp+0x220]
0x00ec0671: call   0x14006f4f0
0x00ec0676: lea    rdx,[rbp+0x220]
0x00ec067d: lea    rcx,[rsp+0x28]
0x00ec0682: call   0x1400bb700
0x00ec0687: movzx  ebx,BYTE PTR [rsp+0x43]
0x00ec068c: movzx  edi,bl
0x00ec068f: movzx  esi,bl
0x00ec0692: movzx  r14d,bl
0x00ec0696: mov    r12d,DWORD PTR [rsp+0x64]
0x00ec069b: jmp    0x140ec16db
0x00ec06a0: mov    r13b,0x1
0x00ec06a3: mov    BYTE PTR [rsp+0x68],r13b
0x00ec06a8: jmp    0x140ec16e0
0x00ec06ad: mov    r14b,0x1
0x00ec06b0: mov    BYTE PTR [rsp+0x49],r14b
0x00ec06b5: jmp    0x140ec16e0
0x00ec06ba: mov    sil,0x1
0x00ec06bd: mov    BYTE PTR [rsp+0x47],sil
0x00ec06c2: jmp    0x140ec16e0
0x00ec06c7: mov    BYTE PTR [rsp+0x43],0x1
0x00ec06cc: mov    ecx,0x2
0x00ec06d1: call   0x140071ec0
0x00ec06d6: mov    ebx,eax
0x00ec06d8: test   eax,eax
0x00ec06da: sete   al
0x00ec06dd: mov    BYTE PTR [rsp+0x46],al
0x00ec06e1: mov    ecx,0x3
0x00ec06e6: call   0x140071ec0
0x00ec06eb: inc    eax
0x00ec06ed: mov    DWORD PTR [rsp+0x64],eax
0x00ec06f1: lea    ecx,[r15+r15*4]
0x00ec06f5: add    ecx,ecx
0x00ec06f7: mov    eax,0x51eb851f
0x00ec06fc: imul   ecx
0x00ec06fe: mov    edi,edx
0x00ec0700: sar    edi,0x5
0x00ec0703: mov    eax,edi
0x00ec0705: shr    eax,0x1f
0x00ec0708: add    edi,eax
0x00ec070a: lea    ecx,[r15+r15*4]
0x00ec070e: shl    ecx,0x3
0x00ec0711: mov    eax,0x51eb851f
0x00ec0716: imul   ecx
0x00ec0718: mov    r14d,edx
0x00ec071b: sar    r14d,0x5
0x00ec071f: mov    eax,r14d
0x00ec0722: shr    eax,0x1f
0x00ec0725: add    r14d,eax
0x00ec0728: lea    ecx,[r15+r15*4]
0x00ec072c: shl    ecx,0x2
0x00ec072f: mov    eax,0x51eb851f
0x00ec0734: imul   ecx
0x00ec0736: mov    r12d,edx
0x00ec0739: sar    r12d,0x5
0x00ec073d: mov    eax,r12d
0x00ec0740: shr    eax,0x1f
0x00ec0743: add    r12d,eax
0x00ec0746: imul   ecx,r15d,0x1e
0x00ec074a: mov    eax,0x51eb851f
0x00ec074f: imul   ecx
0x00ec0751: mov    ecx,edx
0x00ec0753: sar    ecx,0x5
0x00ec0756: mov    eax,ecx
0x00ec0758: shr    eax,0x1f
0x00ec075b: add    ecx,eax
0x00ec075d: mov    DWORD PTR [rsp+0x70],ecx
0x00ec0761: lea    rdx,[rbp+0x460]
0x00ec0768: lea    rcx,[rbp+0x440]
0x00ec076f: call   0x14006f530
0x00ec0774: lea    rdx,[rip+0x86e1b5]        # 0x14172e930 ; literal="_BLOW"
0x00ec077b: lea    rcx,[rbp+0x440]
0x00ec0782: call   0x14006f4f0
0x00ec0787: lea    rdx,[rbp+0x440]
0x00ec078e: lea    rcx,[rbp-0x48]
0x00ec0792: call   0x1400bb700
0x00ec0797: lea    rdx,[rbp+0x460]
0x00ec079e: lea    rcx,[rbp+0x480]
0x00ec07a5: call   0x14006f530
0x00ec07aa: lea    rdx,[rip+0x86da7f]        # 0x14172e230 ; literal="_BODY"
0x00ec07b1: lea    rcx,[rbp+0x480]
0x00ec07b8: call   0x14006f4f0
0x00ec07bd: lea    rdx,[rbp+0x480]
0x00ec07c4: lea    rcx,[rbp-0x48]
0x00ec07c8: call   0x1400bb700
0x00ec07cd: lea    rdx,[rbp+0x460]
0x00ec07d4: lea    rcx,[rbp+0x640]
0x00ec07db: call   0x14006f530
0x00ec07e0: lea    rdx,[rip+0x86e141]        # 0x14172e928 ; literal="_MELODY"
0x00ec07e7: lea    rcx,[rbp+0x640]
0x00ec07ee: call   0x14006f4f0
0x00ec07f3: lea    rdx,[rbp+0x640]
0x00ec07fa: lea    rcx,[rbp-0x48]
0x00ec07fe: call   0x1400bb700
0x00ec0803: lea    rdx,[rbp+0x460]
0x00ec080a: lea    rcx,[rbp+0x620]
0x00ec0811: call   0x14006f530
0x00ec0816: lea    rdx,[rip+0x86e057]        # 0x14172e874 ; literal="_DRONE"
0x00ec081d: lea    rcx,[rbp+0x620]
0x00ec0824: call   0x14006f4f0
0x00ec0829: lea    rdx,[rbp+0x620]
0x00ec0830: lea    rcx,[rbp-0x48]
0x00ec0834: call   0x1400bb700
0x00ec0839: mov    esi,0x6
0x00ec083e: cmp    edi,0x9c40
0x00ec0844: mov    ecx,0x3
0x00ec0849: cmovl  esi,ecx
0x00ec084c: mov    r15d,0x6
0x00ec0852: cmp    r14d,0x9c40
0x00ec0859: cmovl  r15d,ecx
0x00ec085d: mov    r13d,0x6
0x00ec0863: cmp    r12d,0x9c40
0x00ec086a: cmovl  r13d,ecx
0x00ec086e: mov    eax,0x6
0x00ec0873: cmp    DWORD PTR [rsp+0x70],0x9c40
0x00ec087b: cmovl  eax,ecx
0x00ec087e: mov    DWORD PTR [rbp+0x68],eax
0x00ec0881: lea    rdx,[rip+0x86cd48]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec0888: lea    rcx,[rbp+0x220]
0x00ec088f: call   0x14006f510
0x00ec0894: lea    rdx,[rbp+0x440]
0x00ec089b: lea    rcx,[rbp+0x220]
0x00ec08a2: call   0x1400b9ca0
0x00ec08a7: lea    rdx,[rip+0x737db6]        # 0x1415f8664 ; literal="]"
0x00ec08ae: lea    rcx,[rbp+0x220]
0x00ec08b5: call   0x14006f4f0
0x00ec08ba: lea    rdx,[rbp+0x220]
0x00ec08c1: lea    rcx,[rsp+0x28]
0x00ec08c6: call   0x1400bb700
0x00ec08cb: lea    rdx,[rip+0x7e5706]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec08d2: lea    rcx,[rsp+0x28]
0x00ec08d7: call   0x1400bb870
0x00ec08dc: test   ebx,ebx
0x00ec08de: mov    rbx,QWORD PTR [rsp+0x50]
0x00ec08e3: jne    0x140ec0b57
0x00ec08e9: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec08ed: je     0x140ec0943
0x00ec08ef: lea    rdx,[rip+0x86c16a]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec08f6: lea    rcx,[rbp+0xbe0]
0x00ec08fd: call   0x1400680e0
0x00ec0902: nop
0x00ec0903: lea    rdx,[rbp+0xbe0]
0x00ec090a: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec090d: call   0x140529cf0
0x00ec0912: lea    rdx,[rip+0x737d4b]        # 0x1415f8664 ; literal="]"
0x00ec0919: lea    rcx,[rbp+0xbe0]
0x00ec0920: call   0x14006f4f0
0x00ec0925: lea    rdx,[rbp+0xbe0]
0x00ec092c: lea    rcx,[rsp+0x28]
0x00ec0931: call   0x1400bb700
0x00ec0936: nop
0x00ec0937: lea    rcx,[rbp+0xbe0]
0x00ec093e: call   0x140067dc0
0x00ec0943: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec0947: je     0x140ec099d
0x00ec0949: lea    rdx,[rip+0x86c100]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec0950: lea    rcx,[rbp+0xc00]
0x00ec0957: call   0x1400680e0
0x00ec095c: nop
0x00ec095d: lea    rdx,[rbp+0xc00]
0x00ec0964: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec0967: call   0x140529cf0
0x00ec096c: lea    rdx,[rip+0x737cf1]        # 0x1415f8664 ; literal="]"
0x00ec0973: lea    rcx,[rbp+0xc00]
0x00ec097a: call   0x14006f4f0
0x00ec097f: lea    rdx,[rbp+0xc00]
0x00ec0986: lea    rcx,[rsp+0x28]
0x00ec098b: call   0x1400bb700
0x00ec0990: nop
0x00ec0991: lea    rcx,[rbp+0xc00]
0x00ec0998: call   0x140067dc0
0x00ec099d: lea    rdx,[rip+0x86cc14]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec09a4: lea    rcx,[rsp+0x28]
0x00ec09a9: call   0x1400bb870
0x00ec09ae: lea    rdx,[rip+0x86d7a3]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec09b5: lea    rcx,[rsp+0x28]
0x00ec09ba: call   0x1400bb870
0x00ec09bf: lea    rdx,[rip+0x86d85a]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec09c6: lea    rcx,[rsp+0x28]
0x00ec09cb: call   0x1400bb870
0x00ec09d0: lea    rdx,[rip+0x86d779]        # 0x14172e150 ; literal="[NAME:"
0x00ec09d7: lea    rcx,[rbp+0x220]
0x00ec09de: call   0x14006f510
0x00ec09e3: lea    rdx,[rbp+0x360]
0x00ec09ea: lea    rcx,[rbp+0x220]
0x00ec09f1: call   0x1400b9ca0
0x00ec09f6: lea    rdx,[rip+0x86d9a3]        # 0x14172e3a0 ; literal=" bellows"
0x00ec09fd: lea    rcx,[rbp+0x220]
0x00ec0a04: call   0x14006f4f0
0x00ec0a09: lea    rdx,[rip+0x7529f4]        # 0x141613404 ; literal=":"
0x00ec0a10: lea    rcx,[rbp+0x220]
0x00ec0a17: call   0x14006f4f0
0x00ec0a1c: lea    rdx,[rbp+0x360]
0x00ec0a23: lea    rcx,[rbp+0x220]
0x00ec0a2a: call   0x1400b9ca0
0x00ec0a2f: lea    rdx,[rip+0x86d96a]        # 0x14172e3a0 ; literal=" bellows"
0x00ec0a36: lea    rcx,[rbp+0x220]
0x00ec0a3d: call   0x14006f4f0
0x00ec0a42: lea    rdx,[rip+0x737c1b]        # 0x1415f8664 ; literal="]"
0x00ec0a49: lea    rcx,[rbp+0x220]
0x00ec0a50: call   0x14006f4f0
0x00ec0a55: lea    rdx,[rbp+0x220]
0x00ec0a5c: lea    rcx,[rsp+0x28]
0x00ec0a61: call   0x1400bb700
0x00ec0a66: lea    rdx,[rip+0x86d6bb]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec0a6d: lea    rcx,[rsp+0x28]
0x00ec0a72: call   0x1400bb870
0x00ec0a77: lea    r8,[rbp-0x10]
0x00ec0a7b: lea    rdx,[rsp+0x28]
0x00ec0a80: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec0a85: call   0x140eb3f60
0x00ec0a8a: lea    rdx,[rip+0x86d677]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec0a91: lea    rcx,[rsp+0x28]
0x00ec0a96: call   0x1400bb870
0x00ec0a9b: lea    rdx,[rip+0x86d6a6]        # 0x14172e148 ; literal="[SIZE:"
0x00ec0aa2: lea    rcx,[rbp+0x220]
0x00ec0aa9: call   0x14006f510
0x00ec0aae: lea    rdx,[rbp+0x220]
0x00ec0ab5: mov    ecx,edi
0x00ec0ab7: call   0x140529cf0
0x00ec0abc: lea    rdx,[rip+0x737ba1]        # 0x1415f8664 ; literal="]"
0x00ec0ac3: lea    rcx,[rbp+0x220]
0x00ec0aca: call   0x14006f4f0
0x00ec0acf: lea    rdx,[rbp+0x220]
0x00ec0ad6: lea    rcx,[rsp+0x28]
0x00ec0adb: call   0x1400bb700
0x00ec0ae0: lea    rdx,[rip+0x86d651]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec0ae7: lea    rcx,[rbp+0x220]
0x00ec0aee: call   0x14006f510
0x00ec0af3: lea    rdx,[rbp+0x220]
0x00ec0afa: mov    ecx,esi
0x00ec0afc: call   0x140529cf0
0x00ec0b01: lea    rdx,[rip+0x737b5c]        # 0x1415f8664 ; literal="]"
0x00ec0b08: lea    rcx,[rbp+0x220]
0x00ec0b0f: call   0x14006f4f0
0x00ec0b14: lea    rdx,[rbp+0x220]
0x00ec0b1b: lea    rcx,[rsp+0x28]
0x00ec0b20: call   0x1400bb700
0x00ec0b25: lea    rdx,[rip+0x86d6dc]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec0b2c: lea    rcx,[rbp+0x220]
0x00ec0b33: call   0x14006f510
0x00ec0b38: lea    rdx,[rbp+0x360]
0x00ec0b3f: lea    rcx,[rbp+0x220]
0x00ec0b46: call   0x1400b9ca0
0x00ec0b4b: lea    rdx,[rip+0x86d7a6]        # 0x14172e2f8 ; literal=" bellows is used to send air through the instrument.]"
0x00ec0b52: jmp    0x140ec0dc0
0x00ec0b57: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec0b5b: je     0x140ec0bb1
0x00ec0b5d: lea    rdx,[rip+0x86befc]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec0b64: lea    rcx,[rbp+0xc20]
0x00ec0b6b: call   0x1400680e0
0x00ec0b70: nop
0x00ec0b71: lea    rdx,[rbp+0xc20]
0x00ec0b78: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec0b7b: call   0x140529cf0
0x00ec0b80: lea    rdx,[rip+0x737add]        # 0x1415f8664 ; literal="]"
0x00ec0b87: lea    rcx,[rbp+0xc20]
0x00ec0b8e: call   0x14006f4f0
0x00ec0b93: lea    rdx,[rbp+0xc20]
0x00ec0b9a: lea    rcx,[rsp+0x28]
0x00ec0b9f: call   0x1400bb700
0x00ec0ba4: nop
0x00ec0ba5: lea    rcx,[rbp+0xc20]
0x00ec0bac: call   0x140067dc0
0x00ec0bb1: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec0bb5: je     0x140ec0c0b
0x00ec0bb7: lea    rdx,[rip+0x86be92]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec0bbe: lea    rcx,[rbp+0xc40]
0x00ec0bc5: call   0x1400680e0
0x00ec0bca: nop
0x00ec0bcb: lea    rdx,[rbp+0xc40]
0x00ec0bd2: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec0bd5: call   0x140529cf0
0x00ec0bda: lea    rdx,[rip+0x737a83]        # 0x1415f8664 ; literal="]"
0x00ec0be1: lea    rcx,[rbp+0xc40]
0x00ec0be8: call   0x14006f4f0
0x00ec0bed: lea    rdx,[rbp+0xc40]
0x00ec0bf4: lea    rcx,[rsp+0x28]
0x00ec0bf9: call   0x1400bb700
0x00ec0bfe: nop
0x00ec0bff: lea    rcx,[rbp+0xc40]
0x00ec0c06: call   0x140067dc0
0x00ec0c0b: lea    rdx,[rip+0x86c9a6]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec0c12: lea    rcx,[rsp+0x28]
0x00ec0c17: call   0x1400bb870
0x00ec0c1c: lea    rdx,[rip+0x86d535]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec0c23: lea    rcx,[rsp+0x28]
0x00ec0c28: call   0x1400bb870
0x00ec0c2d: lea    rdx,[rip+0x86d5ec]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec0c34: lea    rcx,[rsp+0x28]
0x00ec0c39: call   0x1400bb870
0x00ec0c3e: lea    rdx,[rip+0x86d50b]        # 0x14172e150 ; literal="[NAME:"
0x00ec0c45: lea    rcx,[rbp+0x220]
0x00ec0c4c: call   0x14006f510
0x00ec0c51: lea    rdx,[rbp+0x360]
0x00ec0c58: lea    rcx,[rbp+0x220]
0x00ec0c5f: call   0x1400b9ca0
0x00ec0c64: lea    rdx,[rip+0x86dbfd]        # 0x14172e868 ; literal=" blowpipe"
0x00ec0c6b: lea    rcx,[rbp+0x220]
0x00ec0c72: call   0x14006f4f0
0x00ec0c77: lea    rdx,[rip+0x752786]        # 0x141613404 ; literal=":"
0x00ec0c7e: lea    rcx,[rbp+0x220]
0x00ec0c85: call   0x14006f4f0
0x00ec0c8a: lea    rdx,[rbp+0x360]
0x00ec0c91: lea    rcx,[rbp+0x220]
0x00ec0c98: call   0x1400b9ca0
0x00ec0c9d: lea    rdx,[rip+0x86dc24]        # 0x14172e8c8 ; literal=" blowpipes"
0x00ec0ca4: lea    rcx,[rbp+0x220]
0x00ec0cab: call   0x14006f4f0
0x00ec0cb0: lea    rdx,[rip+0x7379ad]        # 0x1415f8664 ; literal="]"
0x00ec0cb7: lea    rcx,[rbp+0x220]
0x00ec0cbe: call   0x14006f4f0
0x00ec0cc3: lea    rdx,[rbp+0x220]
0x00ec0cca: lea    rcx,[rsp+0x28]
0x00ec0ccf: call   0x1400bb700
0x00ec0cd4: lea    rdx,[rip+0x86d44d]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec0cdb: lea    rcx,[rsp+0x28]
0x00ec0ce0: call   0x1400bb870
0x00ec0ce5: lea    r8,[rbp-0x30]
0x00ec0ce9: lea    rdx,[rsp+0x28]
0x00ec0cee: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec0cf3: call   0x140eb4380
0x00ec0cf8: lea    rdx,[rip+0x86d409]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec0cff: lea    rcx,[rsp+0x28]
0x00ec0d04: call   0x1400bb870
0x00ec0d09: lea    rdx,[rip+0x86d438]        # 0x14172e148 ; literal="[SIZE:"
0x00ec0d10: lea    rcx,[rbp+0x220]
0x00ec0d17: call   0x14006f510
0x00ec0d1c: lea    rdx,[rbp+0x220]
0x00ec0d23: mov    ecx,edi
0x00ec0d25: call   0x140529cf0
0x00ec0d2a: lea    rdx,[rip+0x737933]        # 0x1415f8664 ; literal="]"
0x00ec0d31: lea    rcx,[rbp+0x220]
0x00ec0d38: call   0x14006f4f0
0x00ec0d3d: lea    rdx,[rbp+0x220]
0x00ec0d44: lea    rcx,[rsp+0x28]
0x00ec0d49: call   0x1400bb700
0x00ec0d4e: lea    rdx,[rip+0x86d3e3]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec0d55: lea    rcx,[rbp+0x220]
0x00ec0d5c: call   0x14006f510
0x00ec0d61: lea    rdx,[rbp+0x220]
0x00ec0d68: mov    ecx,esi
0x00ec0d6a: call   0x140529cf0
0x00ec0d6f: lea    rdx,[rip+0x7378ee]        # 0x1415f8664 ; literal="]"
0x00ec0d76: lea    rcx,[rbp+0x220]
0x00ec0d7d: call   0x14006f4f0
0x00ec0d82: lea    rdx,[rbp+0x220]
0x00ec0d89: lea    rcx,[rsp+0x28]
0x00ec0d8e: call   0x1400bb700
0x00ec0d93: lea    rdx,[rip+0x86d46e]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec0d9a: lea    rcx,[rbp+0x220]
0x00ec0da1: call   0x14006f510
0x00ec0da6: lea    rdx,[rbp+0x360]
0x00ec0dad: lea    rcx,[rbp+0x220]
0x00ec0db4: call   0x1400b9ca0
0x00ec0db9: lea    rdx,[rip+0x86dac0]        # 0x14172e880 ; literal=" blowpipe is used by the musician to send air into the instrument.]"
0x00ec0dc0: lea    rcx,[rbp+0x220]
0x00ec0dc7: call   0x14006f4f0
0x00ec0dcc: lea    rdx,[rbp+0x220]
0x00ec0dd3: lea    rcx,[rsp+0x28]
0x00ec0dd8: call   0x1400bb700
0x00ec0ddd: lea    rdx,[rip+0x86c7ec]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec0de4: lea    rcx,[rbp+0x220]
0x00ec0deb: call   0x14006f510
0x00ec0df0: lea    rdx,[rbp+0x480]
0x00ec0df7: lea    rcx,[rbp+0x220]
0x00ec0dfe: call   0x1400b9ca0
0x00ec0e03: lea    rdx,[rip+0x73785a]        # 0x1415f8664 ; literal="]"
0x00ec0e0a: lea    rcx,[rbp+0x220]
0x00ec0e11: call   0x14006f4f0
0x00ec0e16: lea    rdx,[rbp+0x220]
0x00ec0e1d: lea    rcx,[rsp+0x28]
0x00ec0e22: call   0x1400bb700
0x00ec0e27: lea    rdx,[rip+0x7e51aa]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec0e2e: lea    rcx,[rsp+0x28]
0x00ec0e33: call   0x1400bb870
0x00ec0e38: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec0e3c: je     0x140ec0e92
0x00ec0e3e: lea    rdx,[rip+0x86bc1b]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec0e45: lea    rcx,[rbp+0xc60]
0x00ec0e4c: call   0x1400680e0
0x00ec0e51: nop
0x00ec0e52: lea    rdx,[rbp+0xc60]
0x00ec0e59: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec0e5c: call   0x140529cf0
0x00ec0e61: lea    rdx,[rip+0x7377fc]        # 0x1415f8664 ; literal="]"
0x00ec0e68: lea    rcx,[rbp+0xc60]
0x00ec0e6f: call   0x14006f4f0
0x00ec0e74: lea    rdx,[rbp+0xc60]
0x00ec0e7b: lea    rcx,[rsp+0x28]
0x00ec0e80: call   0x1400bb700
0x00ec0e85: nop
0x00ec0e86: lea    rcx,[rbp+0xc60]
0x00ec0e8d: call   0x140067dc0
0x00ec0e92: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec0e96: je     0x140ec0eec
0x00ec0e98: lea    rdx,[rip+0x86bbb1]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec0e9f: lea    rcx,[rbp+0xc80]
0x00ec0ea6: call   0x1400680e0
0x00ec0eab: nop
0x00ec0eac: lea    rdx,[rbp+0xc80]
0x00ec0eb3: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec0eb6: call   0x140529cf0
0x00ec0ebb: lea    rdx,[rip+0x7377a2]        # 0x1415f8664 ; literal="]"
0x00ec0ec2: lea    rcx,[rbp+0xc80]
0x00ec0ec9: call   0x14006f4f0
0x00ec0ece: lea    rdx,[rbp+0xc80]
0x00ec0ed5: lea    rcx,[rsp+0x28]
0x00ec0eda: call   0x1400bb700
0x00ec0edf: nop
0x00ec0ee0: lea    rcx,[rbp+0xc80]
0x00ec0ee7: call   0x140067dc0
0x00ec0eec: lea    rdx,[rip+0x86c6c5]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec0ef3: lea    rcx,[rsp+0x28]
0x00ec0ef8: call   0x1400bb870
0x00ec0efd: lea    rdx,[rip+0x86d254]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec0f04: lea    rcx,[rsp+0x28]
0x00ec0f09: call   0x1400bb870
0x00ec0f0e: lea    rdx,[rip+0x86d30b]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec0f15: lea    rcx,[rsp+0x28]
0x00ec0f1a: call   0x1400bb870
0x00ec0f1f: lea    rdx,[rip+0x86d22a]        # 0x14172e150 ; literal="[NAME:"
0x00ec0f26: lea    rcx,[rbp+0x220]
0x00ec0f2d: call   0x14006f510
0x00ec0f32: lea    rdx,[rbp+0x360]
0x00ec0f39: lea    rcx,[rbp+0x220]
0x00ec0f40: call   0x1400b9ca0
0x00ec0f45: lea    rdx,[rip+0x83ef74]        # 0x1416ffec0 ; literal=" bag"
0x00ec0f4c: lea    rcx,[rbp+0x220]
0x00ec0f53: call   0x14006f4f0
0x00ec0f58: lea    rdx,[rip+0x7524a5]        # 0x141613404 ; literal=":"
0x00ec0f5f: lea    rcx,[rbp+0x220]
0x00ec0f66: call   0x14006f4f0
0x00ec0f6b: lea    rdx,[rbp+0x360]
0x00ec0f72: lea    rcx,[rbp+0x220]
0x00ec0f79: call   0x1400b9ca0
0x00ec0f7e: lea    rdx,[rip+0x8189b7]        # 0x1416d993c ; literal=" bags"
0x00ec0f85: lea    rcx,[rbp+0x220]
0x00ec0f8c: call   0x14006f4f0
0x00ec0f91: lea    rdx,[rip+0x7376cc]        # 0x1415f8664 ; literal="]"
0x00ec0f98: lea    rcx,[rbp+0x220]
0x00ec0f9f: call   0x14006f4f0
0x00ec0fa4: lea    rdx,[rbp+0x220]
0x00ec0fab: lea    rcx,[rsp+0x28]
0x00ec0fb0: call   0x1400bb700
0x00ec0fb5: lea    rdx,[rip+0x86d16c]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec0fbc: lea    rcx,[rsp+0x28]
0x00ec0fc1: call   0x1400bb870
0x00ec0fc6: lea    r8,[rbp-0x80]
0x00ec0fca: lea    rdx,[rsp+0x28]
0x00ec0fcf: mov    rdi,QWORD PTR [rsp+0x78]
0x00ec0fd4: mov    rcx,rdi
0x00ec0fd7: call   0x140eb3f60
0x00ec0fdc: lea    rdx,[rip+0x86d125]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec0fe3: lea    rcx,[rsp+0x28]
0x00ec0fe8: call   0x1400bb870
0x00ec0fed: lea    rdx,[rip+0x86d154]        # 0x14172e148 ; literal="[SIZE:"
0x00ec0ff4: lea    rcx,[rbp+0x220]
0x00ec0ffb: call   0x14006f510
0x00ec1000: lea    rdx,[rbp+0x220]
0x00ec1007: mov    ecx,r14d
0x00ec100a: call   0x140529cf0
0x00ec100f: lea    rdx,[rip+0x73764e]        # 0x1415f8664 ; literal="]"
0x00ec1016: lea    rcx,[rbp+0x220]
0x00ec101d: call   0x14006f4f0
0x00ec1022: lea    rdx,[rbp+0x220]
0x00ec1029: lea    rcx,[rsp+0x28]
0x00ec102e: call   0x1400bb700
0x00ec1033: lea    rdx,[rip+0x86d0fe]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec103a: lea    rcx,[rbp+0x220]
0x00ec1041: call   0x14006f510
0x00ec1046: lea    rdx,[rbp+0x220]
0x00ec104d: mov    ecx,r15d
0x00ec1050: call   0x140529cf0
0x00ec1055: lea    rdx,[rip+0x737608]        # 0x1415f8664 ; literal="]"
0x00ec105c: lea    rcx,[rbp+0x220]
0x00ec1063: call   0x14006f4f0
0x00ec1068: lea    rdx,[rbp+0x220]
0x00ec106f: lea    rcx,[rsp+0x28]
0x00ec1074: call   0x1400bb700
0x00ec1079: lea    rdx,[rip+0x86d188]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec1080: lea    rcx,[rbp+0x220]
0x00ec1087: call   0x14006f510
0x00ec108c: lea    rdx,[rbp+0x360]
0x00ec1093: lea    rcx,[rbp+0x220]
0x00ec109a: call   0x1400b9ca0
0x00ec109f: lea    rdx,[rip+0x86d8fa]        # 0x14172e9a0 ; literal=" bag is used by the musician to control the steady flow of air through the instrument.]"
0x00ec10a6: lea    rcx,[rbp+0x220]
0x00ec10ad: call   0x14006f4f0
0x00ec10b2: lea    rdx,[rbp+0x220]
0x00ec10b9: lea    rcx,[rsp+0x28]
0x00ec10be: call   0x1400bb700
0x00ec10c3: lea    rdx,[rip+0x86c506]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec10ca: lea    rcx,[rbp+0x220]
0x00ec10d1: call   0x14006f510
0x00ec10d6: lea    rdx,[rbp+0x640]
0x00ec10dd: lea    rcx,[rbp+0x220]
0x00ec10e4: call   0x1400b9ca0
0x00ec10e9: lea    rdx,[rip+0x737574]        # 0x1415f8664 ; literal="]"
0x00ec10f0: lea    rcx,[rbp+0x220]
0x00ec10f7: call   0x14006f4f0
0x00ec10fc: lea    rdx,[rbp+0x220]
0x00ec1103: lea    rcx,[rsp+0x28]
0x00ec1108: call   0x1400bb700
0x00ec110d: lea    rdx,[rip+0x7e4ec4]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec1114: lea    rcx,[rsp+0x28]
0x00ec1119: call   0x1400bb870
0x00ec111e: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec1122: je     0x140ec1178
0x00ec1124: lea    rdx,[rip+0x86b935]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec112b: lea    rcx,[rbp+0xca0]
0x00ec1132: call   0x1400680e0
0x00ec1137: nop
0x00ec1138: lea    rdx,[rbp+0xca0]
0x00ec113f: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec1142: call   0x140529cf0
0x00ec1147: lea    rdx,[rip+0x737516]        # 0x1415f8664 ; literal="]"
0x00ec114e: lea    rcx,[rbp+0xca0]
0x00ec1155: call   0x14006f4f0
0x00ec115a: lea    rdx,[rbp+0xca0]
0x00ec1161: lea    rcx,[rsp+0x28]
0x00ec1166: call   0x1400bb700
0x00ec116b: nop
0x00ec116c: lea    rcx,[rbp+0xca0]
0x00ec1173: call   0x140067dc0
0x00ec1178: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec117c: je     0x140ec11d2
0x00ec117e: lea    rdx,[rip+0x86b8cb]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec1185: lea    rcx,[rbp+0xcc0]
0x00ec118c: call   0x1400680e0
0x00ec1191: nop
0x00ec1192: lea    rdx,[rbp+0xcc0]
0x00ec1199: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec119c: call   0x140529cf0
0x00ec11a1: lea    rdx,[rip+0x7374bc]        # 0x1415f8664 ; literal="]"
0x00ec11a8: lea    rcx,[rbp+0xcc0]
0x00ec11af: call   0x14006f4f0
0x00ec11b4: lea    rdx,[rbp+0xcc0]
0x00ec11bb: lea    rcx,[rsp+0x28]
0x00ec11c0: call   0x1400bb700
0x00ec11c5: nop
0x00ec11c6: lea    rcx,[rbp+0xcc0]
0x00ec11cd: call   0x140067dc0
0x00ec11d2: lea    rdx,[rip+0x86c3df]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec11d9: lea    rcx,[rsp+0x28]
0x00ec11de: call   0x1400bb870
0x00ec11e3: lea    rdx,[rip+0x86cf6e]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec11ea: lea    rcx,[rsp+0x28]
0x00ec11ef: call   0x1400bb870
0x00ec11f4: lea    rdx,[rip+0x86d025]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec11fb: lea    rcx,[rsp+0x28]
0x00ec1200: call   0x1400bb870
0x00ec1205: lea    rdx,[rip+0x86cf44]        # 0x14172e150 ; literal="[NAME:"
0x00ec120c: lea    rcx,[rbp+0x220]
0x00ec1213: call   0x14006f510
0x00ec1218: lea    rdx,[rbp+0x360]
0x00ec121f: lea    rcx,[rbp+0x220]
0x00ec1226: call   0x1400b9ca0
0x00ec122b: lea    rdx,[rip+0x86d756]        # 0x14172e988 ; literal=" melody pipe"
0x00ec1232: lea    rcx,[rbp+0x220]
0x00ec1239: call   0x14006f4f0
0x00ec123e: lea    rdx,[rip+0x7521bf]        # 0x141613404 ; literal=":"
0x00ec1245: lea    rcx,[rbp+0x220]
0x00ec124c: call   0x14006f4f0
0x00ec1251: lea    rdx,[rbp+0x360]
0x00ec1258: lea    rcx,[rbp+0x220]
0x00ec125f: call   0x1400b9ca0
0x00ec1264: lea    rdx,[rip+0x86d7e5]        # 0x14172ea50 ; literal=" melody pipes"
0x00ec126b: lea    rcx,[rbp+0x220]
0x00ec1272: call   0x14006f4f0
0x00ec1277: lea    rdx,[rip+0x7373e6]        # 0x1415f8664 ; literal="]"
0x00ec127e: lea    rcx,[rbp+0x220]
0x00ec1285: call   0x14006f4f0
0x00ec128a: lea    rdx,[rbp+0x220]
0x00ec1291: lea    rcx,[rsp+0x28]
0x00ec1296: call   0x1400bb700
0x00ec129b: lea    rdx,[rip+0x86ce86]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec12a2: lea    rcx,[rsp+0x28]
0x00ec12a7: call   0x1400bb870
0x00ec12ac: lea    r8,[rbp-0xc]
0x00ec12b0: lea    rdx,[rsp+0x28]
0x00ec12b5: mov    rcx,rdi
0x00ec12b8: call   0x140eb4380
0x00ec12bd: lea    rdx,[rip+0x86ce44]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec12c4: lea    rcx,[rsp+0x28]
0x00ec12c9: call   0x1400bb870
0x00ec12ce: lea    rdx,[rip+0x86ce73]        # 0x14172e148 ; literal="[SIZE:"
0x00ec12d5: lea    rcx,[rbp+0x220]
0x00ec12dc: call   0x14006f510
0x00ec12e1: lea    rdx,[rbp+0x220]
0x00ec12e8: mov    ecx,r12d
0x00ec12eb: call   0x140529cf0
0x00ec12f0: lea    rdx,[rip+0x73736d]        # 0x1415f8664 ; literal="]"
0x00ec12f7: lea    rcx,[rbp+0x220]
0x00ec12fe: call   0x14006f4f0
0x00ec1303: lea    rdx,[rbp+0x220]
0x00ec130a: lea    rcx,[rsp+0x28]
0x00ec130f: call   0x1400bb700
0x00ec1314: lea    rdx,[rip+0x86ce1d]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec131b: lea    rcx,[rbp+0x220]
0x00ec1322: call   0x14006f510
0x00ec1327: lea    rdx,[rbp+0x220]
0x00ec132e: mov    ecx,r13d
0x00ec1331: call   0x140529cf0
0x00ec1336: lea    rdx,[rip+0x737327]        # 0x1415f8664 ; literal="]"
0x00ec133d: lea    rcx,[rbp+0x220]
0x00ec1344: call   0x14006f4f0
0x00ec1349: lea    rdx,[rbp+0x220]
0x00ec1350: lea    rcx,[rsp+0x28]
0x00ec1355: call   0x1400bb700
0x00ec135a: lea    rdx,[rip+0x86cea7]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec1361: lea    rcx,[rbp+0x220]
0x00ec1368: call   0x14006f510
0x00ec136d: lea    rdx,[rbp+0x360]
0x00ec1374: lea    rcx,[rbp+0x220]
0x00ec137b: call   0x1400b9ca0
0x00ec1380: lea    rdx,[rip+0x86d679]        # 0x14172ea00 ; literal=" melody pipe is used by the musician to select the pitch of the instrument.]"
0x00ec1387: lea    rcx,[rbp+0x220]
0x00ec138e: call   0x14006f4f0
0x00ec1393: lea    rdx,[rbp+0x220]
0x00ec139a: lea    rcx,[rsp+0x28]
0x00ec139f: call   0x1400bb700
0x00ec13a4: lea    rdx,[rip+0x86c225]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec13ab: lea    rcx,[rbp+0x220]
0x00ec13b2: call   0x14006f510
0x00ec13b7: lea    rdx,[rbp+0x620]
0x00ec13be: lea    rcx,[rbp+0x220]
0x00ec13c5: call   0x1400b9ca0
0x00ec13ca: lea    rdx,[rip+0x737293]        # 0x1415f8664 ; literal="]"
0x00ec13d1: lea    rcx,[rbp+0x220]
0x00ec13d8: call   0x14006f4f0
0x00ec13dd: lea    rdx,[rbp+0x220]
0x00ec13e4: lea    rcx,[rsp+0x28]
0x00ec13e9: call   0x1400bb700
0x00ec13ee: lea    rdx,[rip+0x7e4be3]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec13f5: lea    rcx,[rsp+0x28]
0x00ec13fa: call   0x1400bb870
0x00ec13ff: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec1403: je     0x140ec1459
0x00ec1405: lea    rdx,[rip+0x86b654]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec140c: lea    rcx,[rbp+0xce0]
0x00ec1413: call   0x1400680e0
0x00ec1418: nop
0x00ec1419: lea    rdx,[rbp+0xce0]
0x00ec1420: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec1423: call   0x140529cf0
0x00ec1428: lea    rdx,[rip+0x737235]        # 0x1415f8664 ; literal="]"
0x00ec142f: lea    rcx,[rbp+0xce0]
0x00ec1436: call   0x14006f4f0
0x00ec143b: lea    rdx,[rbp+0xce0]
0x00ec1442: lea    rcx,[rsp+0x28]
0x00ec1447: call   0x1400bb700
0x00ec144c: nop
0x00ec144d: lea    rcx,[rbp+0xce0]
0x00ec1454: call   0x140067dc0
0x00ec1459: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec145d: je     0x140ec14b3
0x00ec145f: lea    rdx,[rip+0x86b5ea]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec1466: lea    rcx,[rbp+0xd00]
0x00ec146d: call   0x1400680e0
0x00ec1472: nop
0x00ec1473: lea    rdx,[rbp+0xd00]
0x00ec147a: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec147d: call   0x140529cf0
0x00ec1482: lea    rdx,[rip+0x7371db]        # 0x1415f8664 ; literal="]"
0x00ec1489: lea    rcx,[rbp+0xd00]
0x00ec1490: call   0x14006f4f0
0x00ec1495: lea    rdx,[rbp+0xd00]
0x00ec149c: lea    rcx,[rsp+0x28]
0x00ec14a1: call   0x1400bb700
0x00ec14a6: nop
0x00ec14a7: lea    rcx,[rbp+0xd00]
0x00ec14ae: call   0x140067dc0
0x00ec14b3: lea    rdx,[rip+0x86c0fe]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec14ba: lea    rcx,[rsp+0x28]
0x00ec14bf: call   0x1400bb870
0x00ec14c4: lea    rdx,[rip+0x86cc8d]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec14cb: lea    rcx,[rsp+0x28]
0x00ec14d0: call   0x1400bb870
0x00ec14d5: lea    rdx,[rip+0x86cd44]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec14dc: lea    rcx,[rsp+0x28]
0x00ec14e1: call   0x1400bb870
0x00ec14e6: lea    rdx,[rip+0x86cc63]        # 0x14172e150 ; literal="[NAME:"
0x00ec14ed: lea    rcx,[rbp+0x220]
0x00ec14f4: call   0x14006f510
0x00ec14f9: lea    rdx,[rbp+0x360]
0x00ec1500: lea    rcx,[rbp+0x220]
0x00ec1507: call   0x1400b9ca0
0x00ec150c: lea    rdx,[rip+0x86d435]        # 0x14172e948 ; literal=" drone pipe"
0x00ec1513: lea    rcx,[rbp+0x220]
0x00ec151a: call   0x14006f4f0
0x00ec151f: mov    r12d,DWORD PTR [rsp+0x64]
0x00ec1524: cmp    r12d,0x2
0x00ec1528: jl     0x140ec153d
0x00ec152a: lea    rdx,[rip+0x722cef]        # 0x1415e4220 ; literal="s"
0x00ec1531: lea    rcx,[rbp+0x220]
0x00ec1538: call   0x14006f4f0
0x00ec153d: lea    rdx,[rip+0x751ec0]        # 0x141613404 ; literal=":"
0x00ec1544: lea    rcx,[rbp+0x220]
0x00ec154b: call   0x14006f4f0
0x00ec1550: lea    rdx,[rbp+0x360]
0x00ec1557: lea    rcx,[rbp+0x220]
0x00ec155e: call   0x1400b9ca0
0x00ec1563: lea    rdx,[rip+0x86d3ce]        # 0x14172e938 ; literal=" drone pipes"
0x00ec156a: lea    rcx,[rbp+0x220]
0x00ec1571: call   0x14006f4f0
0x00ec1576: lea    rdx,[rip+0x7370e7]        # 0x1415f8664 ; literal="]"
0x00ec157d: lea    rcx,[rbp+0x220]
0x00ec1584: call   0x14006f4f0
0x00ec1589: lea    rdx,[rbp+0x220]
0x00ec1590: lea    rcx,[rsp+0x28]
0x00ec1595: call   0x1400bb700
0x00ec159a: lea    rdx,[rip+0x86cb87]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec15a1: lea    rcx,[rsp+0x28]
0x00ec15a6: call   0x1400bb870
0x00ec15ab: lea    r8,[rbp-0x8]
0x00ec15af: lea    rdx,[rsp+0x28]
0x00ec15b4: mov    rcx,rdi
0x00ec15b7: call   0x140eb4380
0x00ec15bc: lea    rdx,[rip+0x86cb45]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec15c3: lea    rcx,[rsp+0x28]
0x00ec15c8: call   0x1400bb870
0x00ec15cd: lea    rdx,[rip+0x86cb74]        # 0x14172e148 ; literal="[SIZE:"
0x00ec15d4: lea    rcx,[rbp+0x220]
0x00ec15db: call   0x14006f510
0x00ec15e0: lea    rdx,[rbp+0x220]
0x00ec15e7: mov    ecx,DWORD PTR [rsp+0x70]
0x00ec15eb: call   0x140529cf0
0x00ec15f0: lea    rdx,[rip+0x73706d]        # 0x1415f8664 ; literal="]"
0x00ec15f7: lea    rcx,[rbp+0x220]
0x00ec15fe: call   0x14006f4f0
0x00ec1603: lea    rdx,[rbp+0x220]
0x00ec160a: lea    rcx,[rsp+0x28]
0x00ec160f: call   0x1400bb700
0x00ec1614: lea    rdx,[rip+0x86cb1d]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec161b: lea    rcx,[rbp+0x220]
0x00ec1622: call   0x14006f510
0x00ec1627: lea    rdx,[rbp+0x220]
0x00ec162e: mov    ecx,DWORD PTR [rbp+0x68]
0x00ec1631: call   0x140529cf0
0x00ec1636: lea    rdx,[rip+0x737027]        # 0x1415f8664 ; literal="]"
0x00ec163d: lea    rcx,[rbp+0x220]
0x00ec1644: call   0x14006f4f0
0x00ec1649: lea    rdx,[rbp+0x220]
0x00ec1650: lea    rcx,[rsp+0x28]
0x00ec1655: call   0x1400bb700
0x00ec165a: lea    rdx,[rip+0x86cba7]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec1661: lea    rcx,[rbp+0x220]
0x00ec1668: call   0x14006f510
0x00ec166d: lea    rdx,[rbp+0x360]
0x00ec1674: lea    rcx,[rbp+0x220]
0x00ec167b: call   0x1400b9ca0
0x00ec1680: lea    rcx,[rbp+0x220]
0x00ec1687: cmp    r12d,0x2
0x00ec168b: lea    rdx,[rip+0x86d2de]        # 0x14172e970 ; literal=" drone pipes produce"
0x00ec1692: jge    0x140ec169b
0x00ec1694: lea    rdx,[rip+0x86d2bd]        # 0x14172e958 ; literal=" drone pipe produces"
0x00ec169b: call   0x14006f4f0
0x00ec16a0: lea    rdx,[rip+0x86d461]        # 0x14172eb08 ; literal=" a constant pitch with the flow of air out of the instrument.]"
0x00ec16a7: lea    rcx,[rbp+0x220]
0x00ec16ae: call   0x14006f4f0
0x00ec16b3: lea    rdx,[rbp+0x220]
0x00ec16ba: lea    rcx,[rsp+0x28]
0x00ec16bf: call   0x1400bb700
0x00ec16c4: movzx  ebx,BYTE PTR [rsp+0x43]
0x00ec16c9: movzx  edi,BYTE PTR [rsp+0x46]
0x00ec16ce: movzx  esi,BYTE PTR [rsp+0x47]
0x00ec16d3: movzx  r14d,sil
0x00ec16d7: movzx  r13d,sil
0x00ec16db: mov    r15d,DWORD PTR [rsp+0x6c]
0x00ec16e0: lea    rdx,[rip+0x86cbf9]        # 0x14172e2e0 ; literal="[ITEM_INSTRUMENT:"
0x00ec16e7: lea    rcx,[rbp+0x220]
0x00ec16ee: call   0x14006f510
0x00ec16f3: lea    rdx,[rbp+0x460]
0x00ec16fa: lea    rcx,[rbp+0x220]
0x00ec1701: call   0x1400b9ca0
0x00ec1706: lea    rdx,[rip+0x736f57]        # 0x1415f8664 ; literal="]"
0x00ec170d: lea    rcx,[rbp+0x220]
0x00ec1714: call   0x14006f4f0
0x00ec1719: lea    rdx,[rbp+0x220]
0x00ec1720: lea    rcx,[rsp+0x28]
0x00ec1725: call   0x1400bb700
0x00ec172a: lea    rdx,[rip+0x7e48a7]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec1731: lea    rcx,[rsp+0x28]
0x00ec1736: call   0x1400bb870
0x00ec173b: mov    rax,QWORD PTR [rsp+0x50]
0x00ec1740: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ec1744: je     0x140ec17a4
0x00ec1746: lea    rdx,[rip+0x86b313]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec174d: lea    rcx,[rbp+0xd20]
0x00ec1754: call   0x1400680e0
0x00ec1759: nop
0x00ec175a: lea    rdx,[rbp+0xd20]
0x00ec1761: mov    rax,QWORD PTR [rsp+0x50]
0x00ec1766: mov    ecx,DWORD PTR [rax+0x40]
0x00ec1769: call   0x140529cf0
0x00ec176e: lea    rdx,[rip+0x736eef]        # 0x1415f8664 ; literal="]"
0x00ec1775: lea    rcx,[rbp+0xd20]
0x00ec177c: call   0x14006f4f0
0x00ec1781: lea    rdx,[rbp+0xd20]
0x00ec1788: lea    rcx,[rsp+0x28]
0x00ec178d: call   0x1400bb700
0x00ec1792: nop
0x00ec1793: lea    rcx,[rbp+0xd20]
0x00ec179a: call   0x140067dc0
0x00ec179f: mov    rax,QWORD PTR [rsp+0x50]
0x00ec17a4: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ec17a8: je     0x140ec1803
0x00ec17aa: lea    rdx,[rip+0x86b29f]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec17b1: lea    rcx,[rbp+0xd40]
0x00ec17b8: call   0x1400680e0
0x00ec17bd: nop
0x00ec17be: lea    rdx,[rbp+0xd40]
0x00ec17c5: mov    rax,QWORD PTR [rsp+0x50]
0x00ec17ca: mov    ecx,DWORD PTR [rax+0x44]
0x00ec17cd: call   0x140529cf0
0x00ec17d2: lea    rdx,[rip+0x736e8b]        # 0x1415f8664 ; literal="]"
0x00ec17d9: lea    rcx,[rbp+0xd40]
0x00ec17e0: call   0x14006f4f0
0x00ec17e5: lea    rdx,[rbp+0xd40]
0x00ec17ec: lea    rcx,[rsp+0x28]
0x00ec17f1: call   0x1400bb700
0x00ec17f6: nop
0x00ec17f7: lea    rcx,[rbp+0xd40]
0x00ec17fe: call   0x140067dc0
0x00ec1803: lea    rdx,[rip+0x86c946]        # 0x14172e150 ; literal="[NAME:"
0x00ec180a: lea    rcx,[rbp+0x220]
0x00ec1811: call   0x14006f510
0x00ec1816: lea    rdx,[rbp+0x360]
0x00ec181d: lea    rcx,[rbp+0x220]
0x00ec1824: call   0x1400b9ca0
0x00ec1829: lea    rdx,[rip+0x751bd4]        # 0x141613404 ; literal=":"
0x00ec1830: lea    rcx,[rbp+0x220]
0x00ec1837: call   0x14006f4f0
0x00ec183c: lea    rdx,[rbp+0x360]
0x00ec1843: lea    rcx,[rbp+0x220]
0x00ec184a: call   0x1400b9ca0
0x00ec184f: lea    rdx,[rip+0x736e0e]        # 0x1415f8664 ; literal="]"
0x00ec1856: lea    rcx,[rbp+0x220]
0x00ec185d: call   0x14006f4f0
0x00ec1862: lea    rdx,[rbp+0x220]
0x00ec1869: lea    rcx,[rsp+0x28]
0x00ec186e: call   0x1400bb700
0x00ec1873: lea    rdx,[rip+0x86cace]        # 0x14172e348 ; literal="[VALUE:50]"
0x00ec187a: lea    rcx,[rsp+0x28]
0x00ec187f: call   0x1400bb870
0x00ec1884: lea    rdx,[rip+0x86c8bd]        # 0x14172e148 ; literal="[SIZE:"
0x00ec188b: lea    rcx,[rbp+0x220]
0x00ec1892: call   0x14006f510
0x00ec1897: lea    rdx,[rbp+0x220]
0x00ec189e: mov    ecx,r15d
0x00ec18a1: call   0x140529cf0
0x00ec18a6: lea    rdx,[rip+0x736db7]        # 0x1415f8664 ; literal="]"
0x00ec18ad: lea    rcx,[rbp+0x220]
0x00ec18b4: call   0x14006f4f0
0x00ec18b9: lea    rdx,[rbp+0x220]
0x00ec18c0: lea    rcx,[rsp+0x28]
0x00ec18c5: call   0x1400bb700
0x00ec18ca: test   sil,sil
0x00ec18cd: jne    0x140ec18d9
0x00ec18cf: test   r14b,r14b
0x00ec18d2: jne    0x140ec18d9
0x00ec18d4: test   r13b,r13b
0x00ec18d7: je     0x140ec1943
0x00ec18d9: lea    rdx,[rip+0x86c858]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec18e0: lea    rcx,[rbp+0x220]
0x00ec18e7: call   0x14006f510
0x00ec18ec: mov    ecx,0x6
0x00ec18f1: cmp    r15d,0x9c40
0x00ec18f8: mov    eax,0x3
0x00ec18fd: cmovl  ecx,eax
0x00ec1900: lea    rdx,[rbp+0x220]
0x00ec1907: call   0x140529cf0
0x00ec190c: lea    rdx,[rip+0x736d51]        # 0x1415f8664 ; literal="]"
0x00ec1913: lea    rcx,[rbp+0x220]
0x00ec191a: call   0x14006f4f0
0x00ec191f: lea    rdx,[rbp+0x220]
0x00ec1926: lea    rcx,[rsp+0x28]
0x00ec192b: call   0x1400bb700
0x00ec1930: lea    r8,[rbp-0x80]
0x00ec1934: lea    rdx,[rsp+0x28]
0x00ec1939: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec193e: call   0x140eb4380
0x00ec1943: cmp    r15d,0x9c40
0x00ec194a: jl     0x140ec195d
0x00ec194c: lea    rdx,[rip+0x86c9dd]        # 0x14172e330 ; literal="[PLACED_AS_BUILDING]"
0x00ec1953: lea    rcx,[rsp+0x28]
0x00ec1958: call   0x1400bb870
0x00ec195d: test   bl,bl
0x00ec195f: je     0x140ec1b3c
0x00ec1965: lea    rdx,[rip+0x86d244]        # 0x14172ebb0 ; literal="[DOMINANT_MATERIAL_PIECE:BAG]"
0x00ec196c: lea    rcx,[rsp+0x28]
0x00ec1971: call   0x1400bb870
0x00ec1976: lea    rdx,[rip+0x86ca73]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec197d: lea    rcx,[rbp+0x220]
0x00ec1984: call   0x14006f510
0x00ec1989: lea    rdx,[rip+0x86d214]        # 0x14172eba4 ; literal="BLOW:"
0x00ec1990: lea    rcx,[rbp+0x220]
0x00ec1997: call   0x14006f4f0
0x00ec199c: lea    rdx,[rbp+0x440]
0x00ec19a3: lea    rcx,[rbp+0x220]
0x00ec19aa: call   0x1400b9ca0
0x00ec19af: lea    rcx,[rbp+0x220]
0x00ec19b6: test   dil,dil
0x00ec19b9: lea    rdx,[rip+0x86cbd8]        # 0x14172e598 ; literal=":bellows:bellows"
0x00ec19c0: jne    0x140ec19c9
0x00ec19c2: lea    rdx,[rip+0x86d20f]        # 0x14172ebd8 ; literal=":blowpipe:blowpipes"
0x00ec19c9: call   0x14006f4f0
0x00ec19ce: lea    rdx,[rip+0x86c9e3]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec19d5: lea    rcx,[rbp+0x220]
0x00ec19dc: call   0x14006f4f0
0x00ec19e1: lea    rdx,[rbp+0x220]
0x00ec19e8: lea    rcx,[rsp+0x28]
0x00ec19ed: call   0x1400bb700
0x00ec19f2: lea    rdx,[rip+0x86c9f7]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec19f9: lea    rcx,[rbp+0x220]
0x00ec1a00: call   0x14006f510
0x00ec1a05: lea    rdx,[rip+0x86d1c4]        # 0x14172ebd0 ; literal="BAG:"
0x00ec1a0c: lea    rcx,[rbp+0x220]
0x00ec1a13: call   0x14006f4f0
0x00ec1a18: lea    rdx,[rbp+0x480]
0x00ec1a1f: lea    rcx,[rbp+0x220]
0x00ec1a26: call   0x1400b9ca0
0x00ec1a2b: lea    rdx,[rip+0x86d13e]        # 0x14172eb70 ; literal=":bag:bags"
0x00ec1a32: lea    rcx,[rbp+0x220]
0x00ec1a39: call   0x14006f4f0
0x00ec1a3e: lea    rdx,[rip+0x86c973]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec1a45: lea    rcx,[rbp+0x220]
0x00ec1a4c: call   0x14006f4f0
0x00ec1a51: lea    rdx,[rbp+0x220]
0x00ec1a58: lea    rcx,[rsp+0x28]
0x00ec1a5d: call   0x1400bb700
0x00ec1a62: lea    rdx,[rip+0x86c987]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec1a69: lea    rcx,[rbp+0x220]
0x00ec1a70: call   0x14006f510
0x00ec1a75: lea    rdx,[rip+0x86d0ec]        # 0x14172eb68 ; literal="MELODY:"
0x00ec1a7c: lea    rcx,[rbp+0x220]
0x00ec1a83: call   0x14006f4f0
0x00ec1a88: lea    rdx,[rbp+0x640]
0x00ec1a8f: lea    rcx,[rbp+0x220]
0x00ec1a96: call   0x1400b9ca0
0x00ec1a9b: lea    rdx,[rip+0x86d0e6]        # 0x14172eb88 ; literal=":melody pipe:melody pipes"
0x00ec1aa2: lea    rcx,[rbp+0x220]
0x00ec1aa9: call   0x14006f4f0
0x00ec1aae: lea    rdx,[rip+0x86c903]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec1ab5: lea    rcx,[rbp+0x220]
0x00ec1abc: call   0x14006f4f0
0x00ec1ac1: lea    rdx,[rbp+0x220]
0x00ec1ac8: lea    rcx,[rsp+0x28]
0x00ec1acd: call   0x1400bb700
0x00ec1ad2: lea    rdx,[rip+0x86c917]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec1ad9: lea    rcx,[rbp+0x220]
0x00ec1ae0: call   0x14006f510
0x00ec1ae5: lea    rdx,[rip+0x86d094]        # 0x14172eb80 ; literal="DRONES:"
0x00ec1aec: lea    rcx,[rbp+0x220]
0x00ec1af3: call   0x14006f4f0
0x00ec1af8: lea    rdx,[rbp+0x620]
0x00ec1aff: lea    rcx,[rbp+0x220]
0x00ec1b06: call   0x1400b9ca0
0x00ec1b0b: lea    rcx,[rbp+0x220]
0x00ec1b12: cmp    r12d,0x2
0x00ec1b16: lea    rdx,[rip+0x86d15b]        # 0x14172ec78 ; literal=":drone pipes:drone pipes:ALWAYS_PLURAL]"
0x00ec1b1d: jge    0x140ec1b26
0x00ec1b1f: lea    rdx,[rip+0x86d12a]        # 0x14172ec50 ; literal=":drone pipe:drone pipes:STANDARD]"
0x00ec1b26: call   0x14006f4f0
0x00ec1b2b: lea    rdx,[rbp+0x220]
0x00ec1b32: lea    rcx,[rsp+0x28]
0x00ec1b37: call   0x1400bb700
0x00ec1b3c: cmp    BYTE PTR [rsp+0x44],0x0
0x00ec1b41: je     0x140ec1ca8
0x00ec1b47: lea    rdx,[rip+0x86d15a]        # 0x14172eca8 ; literal="[DOMINANT_MATERIAL_PIECE:CHEST]"
0x00ec1b4e: lea    rcx,[rsp+0x28]
0x00ec1b53: call   0x1400bb870
0x00ec1b58: lea    rdx,[rip+0x86c891]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec1b5f: lea    rcx,[rbp+0x220]
0x00ec1b66: call   0x14006f510
0x00ec1b6b: lea    rdx,[rip+0x86d032]        # 0x14172eba4 ; literal="BLOW:"
0x00ec1b72: lea    rcx,[rbp+0x220]
0x00ec1b79: call   0x14006f4f0
0x00ec1b7e: lea    rdx,[rbp+0x440]
0x00ec1b85: lea    rcx,[rbp+0x220]
0x00ec1b8c: call   0x1400b9ca0
0x00ec1b91: lea    rdx,[rip+0x86d040]        # 0x14172ebd8 ; literal=":blowpipe:blowpipes"
0x00ec1b98: lea    rcx,[rbp+0x220]
0x00ec1b9f: call   0x14006f4f0
0x00ec1ba4: lea    rdx,[rip+0x86c80d]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec1bab: lea    rcx,[rbp+0x220]
0x00ec1bb2: call   0x14006f4f0
0x00ec1bb7: lea    rdx,[rbp+0x220]
0x00ec1bbe: lea    rcx,[rsp+0x28]
0x00ec1bc3: call   0x1400bb700
0x00ec1bc8: lea    rdx,[rip+0x86c821]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec1bcf: lea    rcx,[rbp+0x220]
0x00ec1bd6: call   0x14006f510
0x00ec1bdb: lea    rdx,[rip+0x86d0be]        # 0x14172eca0 ; literal="CHEST:"
0x00ec1be2: lea    rcx,[rbp+0x220]
0x00ec1be9: call   0x14006f4f0
0x00ec1bee: lea    rdx,[rbp+0x480]
0x00ec1bf5: lea    rcx,[rbp+0x220]
0x00ec1bfc: call   0x1400b9ca0
0x00ec1c01: lea    rdx,[rip+0x86cff0]        # 0x14172ebf8 ; literal=":wind chest:wind chests"
0x00ec1c08: lea    rcx,[rbp+0x220]
0x00ec1c0f: call   0x14006f4f0
0x00ec1c14: lea    rdx,[rip+0x86c79d]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec1c1b: lea    rcx,[rbp+0x220]
0x00ec1c22: call   0x14006f4f0
0x00ec1c27: lea    rdx,[rbp+0x220]
0x00ec1c2e: lea    rcx,[rsp+0x28]
0x00ec1c33: call   0x1400bb700
0x00ec1c38: lea    rdx,[rip+0x86c7b1]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec1c3f: lea    rcx,[rbp+0x220]
0x00ec1c46: call   0x14006f510
0x00ec1c4b: lea    rdx,[rip+0x86cf9a]        # 0x14172ebec ; literal="PIPES:"
0x00ec1c52: lea    rcx,[rbp+0x220]
0x00ec1c59: call   0x14006f4f0
0x00ec1c5e: lea    rdx,[rbp+0x600]
0x00ec1c65: lea    rcx,[rbp+0x220]
0x00ec1c6c: call   0x1400b9ca0
0x00ec1c71: lea    rdx,[rip+0x86cfc8]        # 0x14172ec40 ; literal=":pipe:pipes"
0x00ec1c78: lea    rcx,[rbp+0x220]
0x00ec1c7f: call   0x14006f4f0
0x00ec1c84: lea    rdx,[rip+0x86c72d]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec1c8b: lea    rcx,[rbp+0x220]
0x00ec1c92: call   0x14006f4f0
0x00ec1c97: lea    rdx,[rbp+0x220]
0x00ec1c9e: lea    rcx,[rsp+0x28]
0x00ec1ca3: call   0x1400bb700
0x00ec1ca8: xor    bl,bl
0x00ec1caa: mov    BYTE PTR [rsp+0x60],bl
0x00ec1cae: mov    BYTE PTR [rsp+0x5c],bl
0x00ec1cb2: mov    BYTE PTR [rsp+0x20],bl
0x00ec1cb6: mov    BYTE PTR [rsp+0x58],bl
0x00ec1cba: xor    r13b,r13b
0x00ec1cbd: xor    r14b,r14b
0x00ec1cc0: xor    r12b,r12b
0x00ec1cc3: xor    sil,sil
0x00ec1cc6: mov    BYTE PTR [rsp+0x45],bl
0x00ec1cca: mov    BYTE PTR [rsp+0x41],bl
0x00ec1cce: mov    BYTE PTR [rsp+0x40],bl
0x00ec1cd2: mov    BYTE PTR [rsp+0x48],bl
0x00ec1cd6: mov    BYTE PTR [rsp+0x42],bl
0x00ec1cda: mov    BYTE PTR [rsp+0x59],bl
0x00ec1cde: mov    BYTE PTR [rsp+0x4a],bl
0x00ec1ce2: xor    edi,edi
0x00ec1ce4: cmp    BYTE PTR [rsp+0x43],bl
0x00ec1ce8: je     0x140ec1d88
0x00ec1cee: mov    ecx,0xa
0x00ec1cf3: call   0x140071ec0
0x00ec1cf8: test   eax,eax
0x00ec1cfa: sete   bl
0x00ec1cfd: mov    ecx,0x2
0x00ec1d02: call   0x140071ec0
0x00ec1d07: test   eax,eax
0x00ec1d09: sete   BYTE PTR [rsp+0x60]
0x00ec1d0e: mov    ecx,0x3
0x00ec1d13: call   0x140071ec0
0x00ec1d18: test   eax,eax
0x00ec1d1a: sete   BYTE PTR [rsp+0x5c]
0x00ec1d1f: lea    rdx,[rip+0x86ceea]        # 0x14172ec10 ; literal="[SOUND_PRODUCTION:BAG_OVER_REED:BAG:MELODY]"
0x00ec1d26: lea    rcx,[rsp+0x28]
0x00ec1d2b: call   0x1400bb870
0x00ec1d30: lea    rdx,[rip+0x86d049]        # 0x14172ed80 ; literal="[SOUND_PRODUCTION:BAG_OVER_REED:BAG:DRONES]"
0x00ec1d37: lea    rcx,[rsp+0x28]
0x00ec1d3c: call   0x1400bb870
0x00ec1d41: mov    ecx,0x2
0x00ec1d46: call   0x140071ec0
0x00ec1d4b: lea    rcx,[rsp+0x28]
0x00ec1d50: test   eax,eax
0x00ec1d52: je     0x140ec1d67
0x00ec1d54: lea    rdx,[rip+0x86cffd]        # 0x14172ed58 ; literal="[PITCH_CHOICE:STOPPING_HOLE:MELODY]"
0x00ec1d5b: call   0x1400bb870
0x00ec1d60: mov    BYTE PTR [rsp+0x45],0x1
0x00ec1d65: jmp    0x140ec1d88
0x00ec1d67: lea    rdx,[rip+0x86d07a]        # 0x14172ede8 ; literal="[PITCH_CHOICE:STOPPING_HOLE_KEY:MELODY]"
0x00ec1d6e: call   0x1400bb870
0x00ec1d73: mov    BYTE PTR [rsp+0x41],0x1
0x00ec1d78: mov    eax,DWORD PTR [rsp+0x60]
0x00ec1d7c: mov    DWORD PTR [rsp+0x60],eax
0x00ec1d80: mov    eax,DWORD PTR [rsp+0x5c]
0x00ec1d84: mov    DWORD PTR [rsp+0x5c],eax
0x00ec1d88: cmp    BYTE PTR [rsp+0x47],sil
0x00ec1d8d: je     0x140ec1e23
0x00ec1d93: mov    ecx,0x3
0x00ec1d98: call   0x140071ec0
0x00ec1d9d: mov    edi,eax
0x00ec1d9f: lea    rdx,[rip+0x86d00a]        # 0x14172edb0 ; literal="[SOUND_PRODUCTION:VIBRATE_BP_AGAINST_OPENING:SELF]"
0x00ec1da6: lea    rcx,[rsp+0x28]
0x00ec1dab: call   0x1400bb870
0x00ec1db0: mov    ecx,0x4
0x00ec1db5: call   0x140071ec0
0x00ec1dba: test   eax,eax
0x00ec1dbc: je     0x140ec1e0f
0x00ec1dbe: sub    eax,0x1
0x00ec1dc1: je     0x140ec1df9
0x00ec1dc3: sub    eax,0x1
0x00ec1dc6: je     0x140ec1de3
0x00ec1dc8: cmp    eax,0x1
0x00ec1dcb: jne    0x140ec1e23
0x00ec1dcd: lea    rdx,[rip+0x86cf3c]        # 0x14172ed10 ; literal="[PITCH_CHOICE:BP_IN_BELL:SELF]"
0x00ec1dd4: lea    rcx,[rsp+0x28]
0x00ec1dd9: call   0x1400bb870
0x00ec1dde: mov    r12b,0x1
0x00ec1de1: jmp    0x140ec1e23
0x00ec1de3: lea    rdx,[rip+0x86cf46]        # 0x14172ed30 ; literal="[PITCH_CHOICE:VALVE_ROUTES_AIR:SELF]"
0x00ec1dea: lea    rcx,[rsp+0x28]
0x00ec1def: call   0x1400bb870
0x00ec1df4: mov    r14b,0x1
0x00ec1df7: jmp    0x140ec1e23
0x00ec1df9: lea    rdx,[rip+0x86cec8]        # 0x14172ecc8 ; literal="[PITCH_CHOICE:HARMONIC_SERIES:SELF]"
0x00ec1e00: lea    rcx,[rsp+0x28]
0x00ec1e05: call   0x1400bb870
0x00ec1e0a: mov    r13b,0x1
0x00ec1e0d: jmp    0x140ec1e23
0x00ec1e0f: lea    rdx,[rip+0x86ceda]        # 0x14172ecf0 ; literal="[PITCH_CHOICE:SLIDE:SELF]"
0x00ec1e16: lea    rcx,[rsp+0x28]
0x00ec1e1b: call   0x1400bb870
0x00ec1e20: mov    sil,0x1
0x00ec1e23: cmp    BYTE PTR [rsp+0x49],0x0
0x00ec1e28: je     0x140ec1fbd
0x00ec1e2e: mov    ecx,0xa
0x00ec1e33: call   0x140071ec0
0x00ec1e38: test   eax,eax
0x00ec1e3a: jne    0x140ec1e5c
0x00ec1e3c: mov    BYTE PTR [rsp+0x20],0x1
0x00ec1e41: lea    rdx,[rip+0x86d0a0]        # 0x14172eee8 ; literal="[SOUND_PRODUCTION:BLOW_OVER_OPENING_END:SELF]"
0x00ec1e48: lea    rcx,[rsp+0x28]
0x00ec1e4d: call   0x1400bb870
0x00ec1e52: mov    BYTE PTR [rsp+0x42],0x1
0x00ec1e57: jmp    0x140ec1f53
0x00ec1e5c: mov    ecx,0xa
0x00ec1e61: call   0x140071ec0
0x00ec1e66: mov    r13d,0x2
0x00ec1e6c: test   eax,eax
0x00ec1e6e: jne    0x140ec1e77
0x00ec1e70: mov    BYTE PTR [rsp+0x58],0x1
0x00ec1e75: jmp    0x140ec1eb3
0x00ec1e77: mov    ecx,r13d
0x00ec1e7a: call   0x140071ec0
0x00ec1e7f: mov    ecx,DWORD PTR [rsp+0x60]
0x00ec1e83: movzx  ecx,cl
0x00ec1e86: test   eax,eax
0x00ec1e88: mov    eax,0x1
0x00ec1e8d: cmove  ecx,eax
0x00ec1e90: mov    DWORD PTR [rsp+0x60],ecx
0x00ec1e94: mov    ecx,0x3
0x00ec1e99: call   0x140071ec0
0x00ec1e9e: mov    ecx,DWORD PTR [rsp+0x5c]
0x00ec1ea2: movzx  ecx,cl
0x00ec1ea5: test   eax,eax
0x00ec1ea7: mov    eax,0x1
0x00ec1eac: cmove  ecx,eax
0x00ec1eaf: mov    DWORD PTR [rsp+0x5c],ecx
0x00ec1eb3: mov    ecx,0x3
0x00ec1eb8: call   0x140071ec0
0x00ec1ebd: test   eax,eax
0x00ec1ebf: je     0x140ec1f3d
0x00ec1ec1: sub    eax,0x1
0x00ec1ec4: je     0x140ec1f06
0x00ec1ec6: cmp    eax,0x1
0x00ec1ec9: jne    0x140ec1f53
0x00ec1ecf: mov    ecx,r13d
0x00ec1ed2: call   0x140071ec0
0x00ec1ed7: lea    rcx,[rsp+0x28]
0x00ec1edc: test   eax,eax
0x00ec1ede: je     0x140ec1ef3
0x00ec1ee0: lea    rdx,[rip+0x86d031]        # 0x14172ef18 ; literal="[SOUND_PRODUCTION:BLOW_OVER_SINGLE_REED:SELF]"
0x00ec1ee7: call   0x1400bb870
0x00ec1eec: mov    BYTE PTR [rsp+0x59],0x1
0x00ec1ef1: jmp    0x140ec1f53
0x00ec1ef3: lea    rdx,[rip+0x86cf3e]        # 0x14172ee38 ; literal="[SOUND_PRODUCTION:BLOW_OVER_DOUBLE_REED:SELF]"
0x00ec1efa: call   0x1400bb870
0x00ec1eff: mov    BYTE PTR [rsp+0x4a],0x1
0x00ec1f04: jmp    0x140ec1f53
0x00ec1f06: mov    ecx,r13d
0x00ec1f09: call   0x140071ec0
0x00ec1f0e: lea    rcx,[rsp+0x28]
0x00ec1f13: test   eax,eax
0x00ec1f15: je     0x140ec1f2a
0x00ec1f17: lea    rdx,[rip+0x86d02a]        # 0x14172ef48 ; literal="[SOUND_PRODUCTION:BLOW_OVER_OPENING_SIDE:SELF]"
0x00ec1f1e: call   0x1400bb870
0x00ec1f23: mov    BYTE PTR [rsp+0x48],0x1
0x00ec1f28: jmp    0x140ec1f53
0x00ec1f2a: lea    rdx,[rip+0x86cfb7]        # 0x14172eee8 ; literal="[SOUND_PRODUCTION:BLOW_OVER_OPENING_END:SELF]"
0x00ec1f31: call   0x1400bb870
0x00ec1f36: mov    BYTE PTR [rsp+0x42],0x1
0x00ec1f3b: jmp    0x140ec1f53
0x00ec1f3d: lea    rdx,[rip+0x86cf74]        # 0x14172eeb8 ; literal="[SOUND_PRODUCTION:BLOW_AGAINST_FIPPLE:SELF]"
0x00ec1f44: lea    rcx,[rsp+0x28]
0x00ec1f49: call   0x1400bb870
0x00ec1f4e: mov    BYTE PTR [rsp+0x40],0x1
0x00ec1f53: mov    ecx,0x3
0x00ec1f58: call   0x140071ec0
0x00ec1f5d: test   eax,eax
0x00ec1f5f: sete   r13b
0x00ec1f63: test   eax,eax
0x00ec1f65: jne    0x140ec1f86
0x00ec1f67: lea    rdx,[rip+0x86cd5a]        # 0x14172ecc8 ; literal="[PITCH_CHOICE:HARMONIC_SERIES:SELF]"
0x00ec1f6e: lea    rcx,[rsp+0x28]
0x00ec1f73: call   0x1400bb870
0x00ec1f78: mov    ecx,0x3
0x00ec1f7d: call   0x140071ec0
0x00ec1f82: test   eax,eax
0x00ec1f84: je     0x140ec1fbd
0x00ec1f86: mov    ecx,0x2
0x00ec1f8b: call   0x140071ec0
0x00ec1f90: lea    rcx,[rsp+0x28]
0x00ec1f95: test   eax,eax
0x00ec1f97: je     0x140ec1fac
0x00ec1f99: lea    rdx,[rip+0x86ce70]        # 0x14172ee10 ; literal="[PITCH_CHOICE:STOPPING_HOLE:SELF]"
0x00ec1fa0: call   0x1400bb870
0x00ec1fa5: mov    BYTE PTR [rsp+0x45],0x1
0x00ec1faa: jmp    0x140ec1fbd
0x00ec1fac: lea    rdx,[rip+0x86cedd]        # 0x14172ee90 ; literal="[PITCH_CHOICE:STOPPING_HOLE_KEY:SELF]"
0x00ec1fb3: call   0x1400bb870
0x00ec1fb8: mov    BYTE PTR [rsp+0x41],0x1
0x00ec1fbd: cmp    BYTE PTR [rsp+0x68],0x0
0x00ec1fc2: je     0x140ec20e1
0x00ec1fc8: mov    ecx,0xa
0x00ec1fcd: call   0x140071ec0
0x00ec1fd2: test   eax,eax
0x00ec1fd4: jne    0x140ec1fdd
0x00ec1fd6: mov    BYTE PTR [rsp+0x20],0x1
0x00ec1fdb: jmp    0x140ec2017
0x00ec1fdd: mov    ecx,0x2
0x00ec1fe2: call   0x140071ec0
0x00ec1fe7: movzx  ecx,BYTE PTR [rsp+0x60]
0x00ec1fec: test   eax,eax
0x00ec1fee: mov    eax,0x1
0x00ec1ff3: cmove  ecx,eax
0x00ec1ff6: mov    BYTE PTR [rsp+0x60],cl
0x00ec1ffa: mov    ecx,0x3
0x00ec1fff: call   0x140071ec0
0x00ec2004: movzx  ecx,BYTE PTR [rsp+0x5c]
0x00ec2009: test   eax,eax
0x00ec200b: mov    eax,0x1
0x00ec2010: cmove  ecx,eax
0x00ec2013: mov    BYTE PTR [rsp+0x5c],cl
0x00ec2017: mov    ecx,0xe
0x00ec201c: call   0x140071ec0
0x00ec2021: add    eax,0x2
0x00ec2024: mov    DWORD PTR [rsp+0x64],eax
0x00ec2028: mov    ecx,0x3
0x00ec202d: call   0x140071ec0
0x00ec2032: test   eax,eax
0x00ec2034: je     0x140ec20ba
0x00ec203a: sub    eax,0x1
0x00ec203d: je     0x140ec2081
0x00ec203f: cmp    eax,0x1
0x00ec2042: jne    0x140ec20d0
0x00ec2048: mov    ecx,0x2
0x00ec204d: call   0x140071ec0
0x00ec2052: lea    rcx,[rsp+0x28]
0x00ec2057: test   eax,eax
0x00ec2059: je     0x140ec206e
0x00ec205b: lea    rdx,[rip+0x86ceb6]        # 0x14172ef18 ; literal="[SOUND_PRODUCTION:BLOW_OVER_SINGLE_REED:SELF]"
0x00ec2062: call   0x1400bb870
0x00ec2067: mov    BYTE PTR [rsp+0x59],0x1
0x00ec206c: jmp    0x140ec20d0
0x00ec206e: lea    rdx,[rip+0x86cdc3]        # 0x14172ee38 ; literal="[SOUND_PRODUCTION:BLOW_OVER_DOUBLE_REED:SELF]"
0x00ec2075: call   0x1400bb870
0x00ec207a: mov    BYTE PTR [rsp+0x4a],0x1
0x00ec207f: jmp    0x140ec20d0
0x00ec2081: mov    ecx,0x2
0x00ec2086: call   0x140071ec0
0x00ec208b: lea    rcx,[rsp+0x28]
0x00ec2090: test   eax,eax
0x00ec2092: je     0x140ec20a7
0x00ec2094: lea    rdx,[rip+0x86cead]        # 0x14172ef48 ; literal="[SOUND_PRODUCTION:BLOW_OVER_OPENING_SIDE:SELF]"
0x00ec209b: call   0x1400bb870
0x00ec20a0: mov    BYTE PTR [rsp+0x48],0x1
0x00ec20a5: jmp    0x140ec20d0
0x00ec20a7: lea    rdx,[rip+0x86ce3a]        # 0x14172eee8 ; literal="[SOUND_PRODUCTION:BLOW_OVER_OPENING_END:SELF]"
0x00ec20ae: call   0x1400bb870
0x00ec20b3: mov    BYTE PTR [rsp+0x42],0x1
0x00ec20b8: jmp    0x140ec20d0
0x00ec20ba: lea    rdx,[rip+0x86cdf7]        # 0x14172eeb8 ; literal="[SOUND_PRODUCTION:BLOW_AGAINST_FIPPLE:SELF]"
0x00ec20c1: lea    rcx,[rsp+0x28]
0x00ec20c6: call   0x1400bb870
0x00ec20cb: mov    BYTE PTR [rsp+0x40],0x1
0x00ec20d0: lea    rdx,[rip+0x86cd91]        # 0x14172ee68 ; literal="[PITCH_CHOICE:SUBPART_CHOICE:SELF]"
0x00ec20d7: lea    rcx,[rsp+0x28]
0x00ec20dc: call   0x1400bb870
0x00ec20e1: cmp    BYTE PTR [rsp+0x44],0x0
0x00ec20e6: je     0x140ec217f
0x00ec20ec: mov    ecx,0x2
0x00ec20f1: call   0x140071ec0
0x00ec20f6: movzx  ecx,BYTE PTR [rsp+0x60]
0x00ec20fb: test   eax,eax
0x00ec20fd: mov    eax,0x1
0x00ec2102: cmove  ecx,eax
0x00ec2105: mov    BYTE PTR [rsp+0x60],cl
0x00ec2109: mov    ecx,0x3
0x00ec210e: call   0x140071ec0
0x00ec2113: movzx  ecx,BYTE PTR [rsp+0x5c]
0x00ec2118: test   eax,eax
0x00ec211a: mov    eax,0x1
0x00ec211f: cmove  ecx,eax
0x00ec2122: mov    BYTE PTR [rsp+0x5c],cl
0x00ec2126: mov    ecx,0xe
0x00ec212b: call   0x140071ec0
0x00ec2130: add    eax,0x2
0x00ec2133: mov    DWORD PTR [rsp+0x64],eax
0x00ec2137: lea    rdx,[rip+0x86dcaa]        # 0x14172fde8 ; literal="[SOUND_PRODUCTION:BLOW_OVER_FREE_REED:CHEST]"
0x00ec213e: lea    rcx,[rsp+0x28]
0x00ec2143: call   0x1400bb870
0x00ec2148: mov    ecx,0x2
0x00ec214d: call   0x140071ec0
0x00ec2152: lea    rcx,[rsp+0x28]
0x00ec2157: test   eax,eax
0x00ec2159: je     0x140ec216e
0x00ec215b: lea    rdx,[rip+0x86dc5e]        # 0x14172fdc0 ; literal="[PITCH_CHOICE:STOPPING_HOLE:CHEST]"
0x00ec2162: call   0x1400bb870
0x00ec2167: mov    BYTE PTR [rsp+0x45],0x1
0x00ec216c: jmp    0x140ec217f
0x00ec216e: lea    rdx,[rip+0x86dcbb]        # 0x14172fe30 ; literal="[PITCH_CHOICE:STOPPING_HOLE_KEY:CHEST]"
0x00ec2175: call   0x1400bb870
0x00ec217a: mov    BYTE PTR [rsp+0x41],0x1
0x00ec217f: lea    rdx,[rip+0x86c4d2]        # 0x14172e658 ; literal="[VOLUME_mB:"
0x00ec2186: lea    rcx,[rbp+0x220]
0x00ec218d: call   0x14006f510
0x00ec2192: lea    rdx,[rbp+0x220]
0x00ec2199: xor    ecx,ecx
0x00ec219b: call   0x140529cf0
0x00ec21a0: lea    rdx,[rip+0x75125d]        # 0x141613404 ; literal=":"
0x00ec21a7: lea    rcx,[rbp+0x220]
0x00ec21ae: call   0x14006f4f0
0x00ec21b3: lea    rdx,[rbp+0x220]
0x00ec21ba: mov    ecx,0x2710
0x00ec21bf: call   0x140529cf0
0x00ec21c4: lea    rdx,[rip+0x736499]        # 0x1415f8664 ; literal="]"
0x00ec21cb: lea    rcx,[rbp+0x220]
0x00ec21d2: call   0x14006f4f0
0x00ec21d7: lea    rdx,[rbp+0x220]
0x00ec21de: lea    rcx,[rsp+0x28]
0x00ec21e3: call   0x1400bb700
0x00ec21e8: imul   ecx,r15d,0x1770
0x00ec21ef: mov    eax,0x68db8bad
0x00ec21f4: imul   ecx
0x00ec21f6: sar    edx,0xe
0x00ec21f9: mov    eax,edx
0x00ec21fb: shr    eax,0x1f
0x00ec21fe: add    edx,eax
0x00ec2200: mov    eax,0x4b0
0x00ec2205: sub    eax,edx
0x00ec2207: mov    DWORD PTR [rsp+0x6c],eax
0x00ec220b: mov    ecx,0xd
0x00ec2210: call   0x140071ec0
0x00ec2215: add    eax,0x24
0x00ec2218: imul   eax,eax,0x64
0x00ec221b: add    eax,DWORD PTR [rsp+0x6c]
0x00ec221f: mov    DWORD PTR [rsp+0x70],eax
0x00ec2223: lea    rdx,[rip+0x86c3be]        # 0x14172e5e8 ; literal="[PITCH_RANGE:"
0x00ec222a: lea    rcx,[rbp+0x220]
0x00ec2231: call   0x14006f510
0x00ec2236: lea    rdx,[rbp+0x220]
0x00ec223d: mov    ecx,DWORD PTR [rsp+0x6c]
0x00ec2241: call   0x140529cf0
0x00ec2246: lea    rdx,[rip+0x7511b7]        # 0x141613404 ; literal=":"
0x00ec224d: lea    rcx,[rbp+0x220]
0x00ec2254: call   0x14006f4f0
0x00ec2259: lea    rdx,[rbp+0x220]
0x00ec2260: mov    ecx,DWORD PTR [rsp+0x70]
0x00ec2264: call   0x140529cf0
0x00ec2269: lea    rdx,[rip+0x7363f4]        # 0x1415f8664 ; literal="]"
0x00ec2270: lea    rcx,[rbp+0x220]
0x00ec2277: call   0x14006f4f0
0x00ec227c: lea    rdx,[rbp+0x220]
0x00ec2283: lea    rcx,[rsp+0x28]
0x00ec2288: call   0x1400bb700
0x00ec228d: cmp    BYTE PTR [rsp+0x47],0x0
0x00ec2292: je     0x140ec22b3
0x00ec2294: mov    ecx,0x2
0x00ec2299: call   0x140071ec0
0x00ec229e: test   eax,eax
0x00ec22a0: je     0x140ec22b3
0x00ec22a2: lea    rdx,[rip+0x86db6f]        # 0x14172fe18 ; literal="[TUNING:CROOKS:SELF]"
0x00ec22a9: lea    rcx,[rsp+0x28]
0x00ec22ae: call   0x1400bb870
0x00ec22b3: lea    rcx,[rbp+0x118]
0x00ec22ba: call   0x140296b90
0x00ec22bf: nop
0x00ec22c0: mov    r9b,0x1
0x00ec22c3: mov    r8d,DWORD PTR [rsp+0x70]
0x00ec22c8: mov    edx,DWORD PTR [rsp+0x6c]
0x00ec22cc: lea    rcx,[rbp+0x118]
0x00ec22d3: call   0x140eb2f60
0x00ec22d8: lea    rdx,[rbp+0x118]
0x00ec22df: lea    rcx,[rsp+0x28]
0x00ec22e4: call   0x140eb36d0
0x00ec22e9: lea    rdx,[rip+0x86da60]        # 0x14172fd50 ; literal="[MUSIC_SKILL:PLAY_WIND_INSTRUMENT]"
0x00ec22f0: lea    rcx,[rsp+0x28]
0x00ec22f5: call   0x1400bb870
0x00ec22fa: lea    rdx,[rip+0x86c2f7]        # 0x14172e5f8 ; literal="[DESCRIPTION:"
0x00ec2301: lea    rcx,[rbp+0x220]
0x00ec2308: call   0x14006f510
0x00ec230d: lea    rcx,[rbp+0x280]
0x00ec2314: call   0x14006f620
0x00ec2319: nop
0x00ec231a: lea    rdx,[rip+0x7266a3]        # 0x1415e89c4 ; literal="The "
0x00ec2321: lea    rcx,[rbp+0x280]
0x00ec2328: call   0x14006f510
0x00ec232d: lea    rdx,[rbp+0x360]
0x00ec2334: lea    rcx,[rbp+0x280]
0x00ec233b: call   0x1400b9ca0
0x00ec2340: lea    rdx,[rip+0x7822ad]        # 0x1416445f4 ; literal=" is a "
0x00ec2347: lea    rcx,[rbp+0x280]
0x00ec234e: call   0x14006f4f0
0x00ec2353: cmp    r15d,0xea60
0x00ec235a: jl     0x140ec2365
0x00ec235c: lea    rdx,[rip+0x86c2e5]        # 0x14172e648 ; literal="huge stationary"
0x00ec2363: jmp    0x140ec23b2
0x00ec2365: cmp    r15d,0x9c40
0x00ec236c: jl     0x140ec2377
0x00ec236e: lea    rdx,[rip+0x86c2bb]        # 0x14172e630 ; literal="large stationary"
0x00ec2375: jmp    0x140ec23b2
0x00ec2377: cmp    r15d,0x7530
0x00ec237e: jl     0x140ec2389
0x00ec2380: lea    rdx,[rip+0x86b719]        # 0x14172daa0 ; literal="large hand-held"
0x00ec2387: jmp    0x140ec23b2
0x00ec2389: cmp    r15d,0x2710
0x00ec2390: jl     0x140ec239b
0x00ec2392: lea    rdx,[rip+0x86b6ef]        # 0x14172da88 ; literal="mid-size hand-held"
0x00ec2399: jmp    0x140ec23b2
0x00ec239b: cmp    r15d,0x1388
0x00ec23a2: lea    rdx,[rip+0x86b717]        # 0x14172dac0 ; literal="small hand-held"
0x00ec23a9: jge    0x140ec23b2
0x00ec23ab: lea    rdx,[rip+0x86b6fe]        # 0x14172dab0 ; literal="tiny hand-held"
0x00ec23b2: lea    rcx,[rbp+0x280]
0x00ec23b9: call   0x14006f4f0
0x00ec23be: lea    rdx,[rip+0x72135b]        # 0x1415e3720 ; literal=" "
0x00ec23c5: lea    rcx,[rbp+0x280]
0x00ec23cc: call   0x14006f4f0
0x00ec23d1: cmp    BYTE PTR [rsp+0x43],0x0
0x00ec23d6: je     0x140ec263f
0x00ec23dc: lea    rdx,[rip+0x86d91d]        # 0x14172fd00 ; literal="wind instrument through which constant air flow is maintained by use of a "
0x00ec23e3: lea    rcx,[rbp+0x280]
0x00ec23ea: call   0x14006f4f0
0x00ec23ef: lea    rdx,[rbp+0x280]
0x00ec23f6: mov    ecx,DWORD PTR [rbp-0x80]
0x00ec23f9: call   0x140eb3dd0
0x00ec23fe: lea    rdx,[rip+0x86d99b]        # 0x14172fda0 ; literal=" bag, itself supplied by a "
0x00ec2405: lea    rcx,[rbp+0x280]
0x00ec240c: call   0x14006f4f0
0x00ec2411: lea    rdx,[rbp+0x280]
0x00ec2418: cmp    BYTE PTR [rsp+0x46],0x0
0x00ec241d: je     0x140ec2430
0x00ec241f: mov    ecx,DWORD PTR [rbp-0x10]
0x00ec2422: call   0x140eb3dd0
0x00ec2427: lea    rdx,[rip+0x86bf72]        # 0x14172e3a0 ; literal=" bellows"
0x00ec242e: jmp    0x140ec243f
0x00ec2430: mov    ecx,DWORD PTR [rbp-0x30]
0x00ec2433: call   0x140eb3dd0
0x00ec2438: lea    rdx,[rip+0x86c429]        # 0x14172e868 ; literal=" blowpipe"
0x00ec243f: lea    rcx,[rbp+0x280]
0x00ec2446: call   0x14006f4f0
0x00ec244b: lea    rdx,[rip+0x7363fe]        # 0x1415f8850 ; literal=".  "
0x00ec2452: lea    rcx,[rbp+0x280]
0x00ec2459: call   0x14006f4f0
0x00ec245e: lea    rdx,[rip+0x86d913]        # 0x14172fd78 ; literal="The musician selects the pitch by "
0x00ec2465: lea    rcx,[rbp+0x280]
0x00ec246c: call   0x14006f4f0
0x00ec2471: lea    rcx,[rbp+0x280]
0x00ec2478: cmp    BYTE PTR [rsp+0x41],0x0
0x00ec247d: lea    rdx,[rip+0x86da34]        # 0x14172feb8 ; literal="pressing keys to stop holes"
0x00ec2484: jne    0x140ec248d
0x00ec2486: lea    rdx,[rip+0x86da1b]        # 0x14172fea8 ; literal="stopping holes"
0x00ec248d: call   0x14006f4f0
0x00ec2492: lea    rdx,[rip+0x72701f]        # 0x1415e94b8 ; literal=" in the "
0x00ec2499: lea    rcx,[rbp+0x280]
0x00ec24a0: call   0x14006f4f0
0x00ec24a5: lea    rdx,[rbp+0x280]
0x00ec24ac: mov    ecx,DWORD PTR [rbp-0xc]
0x00ec24af: call   0x140eb3dd0
0x00ec24b4: lea    rdx,[rip+0x86da35]        # 0x14172fef0 ; literal=" melody pipe attached to the bag.  "
0x00ec24bb: lea    rcx,[rbp+0x280]
0x00ec24c2: call   0x14006f4f0
0x00ec24c7: lea    rdx,[rip+0x86da0a]        # 0x14172fed8 ; literal="The melody pipe is a "
0x00ec24ce: lea    rcx,[rbp+0x280]
0x00ec24d5: call   0x14006f4f0
0x00ec24da: mov    r15d,DWORD PTR [rsp+0x60]
0x00ec24df: lea    rcx,[rbp+0x280]
0x00ec24e6: test   r15b,r15b
0x00ec24e9: lea    rdx,[rip+0x86d980]        # 0x14172fe70 ; literal="conical bore"
0x00ec24f0: jne    0x140ec24f9
0x00ec24f2: lea    rdx,[rip+0x86d95f]        # 0x14172fe58 ; literal="cylindrical bore"
0x00ec24f9: call   0x14006f4f0
0x00ec24fe: lea    rdx,[rip+0x72121b]        # 0x1415e3720 ; literal=" "
0x00ec2505: lea    rcx,[rbp+0x280]
0x00ec250c: call   0x14006f4f0
0x00ec2511: lea    rcx,[rbp+0x280]
0x00ec2518: test   bl,bl
0x00ec251a: je     0x140ec2538
0x00ec251c: lea    rdx,[rip+0x86d975]        # 0x14172fe98 ; literal="double-tube"
0x00ec2523: call   0x14006f4f0
0x00ec2528: cmp    BYTE PTR [rsp+0x5c],0x0
0x00ec252d: je     0x140ec255e
0x00ec252f: lea    rdx,[rip+0x86d94a]        # 0x14172fe80 ; literal=" with flared bells"
0x00ec2536: jmp    0x140ec2552
0x00ec2538: lea    rdx,[rip+0x808351]        # 0x1416ca890 ; literal="tube"
0x00ec253f: call   0x14006f4f0
0x00ec2544: cmp    BYTE PTR [rsp+0x5c],0x0
0x00ec2549: je     0x140ec255e
0x00ec254b: lea    rdx,[rip+0x86da2e]        # 0x14172ff80 ; literal=" with a flared bell"
0x00ec2552: lea    rcx,[rbp+0x280]
0x00ec2559: call   0x14006f4f0
0x00ec255e: lea    rdx,[rip+0x7362eb]        # 0x1415f8850 ; literal=".  "
0x00ec2565: lea    rcx,[rbp+0x280]
0x00ec256c: call   0x14006f4f0
0x00ec2571: mov    ebx,DWORD PTR [rsp+0x64]
0x00ec2575: cmp    ebx,0x1
0x00ec2578: jne    0x140ec258f
0x00ec257a: lea    rdx,[rip+0x7a47ab]        # 0x141666d2c ; literal="A"
0x00ec2581: lea    rcx,[rbp+0x280]
0x00ec2588: call   0x14006f4f0
0x00ec258d: jmp    0x140ec25d6
0x00ec258f: lea    rcx,[rbp+0xd60]
0x00ec2596: call   0x14006f620
0x00ec259b: nop
0x00ec259c: lea    rdx,[rbp+0xd60]
0x00ec25a3: mov    ecx,ebx
0x00ec25a5: call   0x14052bd80
0x00ec25aa: lea    rcx,[rbp+0xd60]
0x00ec25b1: call   0x14052b070
0x00ec25b6: lea    rdx,[rbp+0xd60]
0x00ec25bd: lea    rcx,[rbp+0x280]
0x00ec25c4: call   0x1400b9ca0
0x00ec25c9: nop
0x00ec25ca: lea    rcx,[rbp+0xd60]
0x00ec25d1: call   0x140067dc0
0x00ec25d6: lea    rdx,[rip+0x721143]        # 0x1415e3720 ; literal=" "
0x00ec25dd: lea    rcx,[rbp+0x280]
0x00ec25e4: call   0x14006f4f0
0x00ec25e9: lea    rdx,[rbp+0x280]
0x00ec25f0: mov    ecx,DWORD PTR [rbp-0x8]
0x00ec25f3: call   0x140eb3dd0
0x00ec25f8: lea    rdx,[rip+0x86c349]        # 0x14172e948 ; literal=" drone pipe"
0x00ec25ff: lea    rcx,[rbp+0x280]
0x00ec2606: call   0x14006f4f0
0x00ec260b: lea    rcx,[rbp+0x280]
0x00ec2612: cmp    ebx,0x2
0x00ec2615: lea    rdx,[rip+0x86d954]        # 0x14172ff70 ; literal="s provide"
0x00ec261c: jge    0x140ec2625
0x00ec261e: lea    rdx,[rip+0x86d993]        # 0x14172ffb8 ; literal=" provides"
0x00ec2625: call   0x14006f4f0
0x00ec262a: lea    rdx,[rip+0x86d967]        # 0x14172ff98 ; literal=" constant accompaniment.  "
0x00ec2631: lea    rcx,[rbp+0x280]
0x00ec2638: call   0x14006f4f0
0x00ec263d: jmp    0x140ec2644
0x00ec263f: mov    r15d,DWORD PTR [rsp+0x60]
0x00ec2644: cmp    BYTE PTR [rsp+0x47],0x0
0x00ec2649: je     0x140ec2750
0x00ec264f: test   edi,edi
0x00ec2651: jne    0x140ec265c
0x00ec2653: lea    rdx,[rip+0x7bd80e]        # 0x14167fe68 ; literal="straight"
0x00ec265a: jmp    0x140ec2676
0x00ec265c: cmp    edi,0x1
0x00ec265f: jne    0x140ec266a
0x00ec2661: lea    rdx,[rip+0x86d8b8]        # 0x14172ff20 ; literal="curved"
0x00ec2668: jmp    0x140ec2676
0x00ec266a: cmp    edi,0x2
0x00ec266d: jne    0x140ec2682
0x00ec266f: lea    rdx,[rip+0x86d8a2]        # 0x14172ff18 ; literal="looping"
0x00ec2676: lea    rcx,[rbp+0x280]
0x00ec267d: call   0x14006f4f0
0x00ec2682: lea    rdx,[rip+0x721097]        # 0x1415e3720 ; literal=" "
0x00ec2689: lea    rcx,[rbp+0x280]
0x00ec2690: call   0x14006f4f0
0x00ec2695: lea    rdx,[rbp+0x280]
0x00ec269c: mov    ecx,DWORD PTR [rbp-0x80]
0x00ec269f: call   0x140eb3dd0
0x00ec26a4: lea    rdx,[rip+0x721075]        # 0x1415e3720 ; literal=" "
0x00ec26ab: lea    rcx,[rbp+0x280]
0x00ec26b2: call   0x14006f4f0
0x00ec26b7: lea    rdx,[rip+0x86d8aa]        # 0x14172ff68 ; literal="horn.  "
0x00ec26be: lea    rcx,[rbp+0x280]
0x00ec26c5: call   0x14006f4f0
0x00ec26ca: lea    rdx,[rip+0x86d857]        # 0x14172ff28 ; literal="The musician blows into the instrument and selects pitch "
0x00ec26d1: lea    rcx,[rbp+0x280]
0x00ec26d8: call   0x14006f4f0
0x00ec26dd: test   sil,sil
0x00ec26e0: je     0x140ec26f5
0x00ec26e2: lea    rdx,[rip+0x86d97f]        # 0x141730068 ; literal="by adjusting a slide"
0x00ec26e9: lea    rcx,[rbp+0x280]
0x00ec26f0: call   0x14006f4f0
0x00ec26f5: test   r13b,r13b
0x00ec26f8: je     0x140ec270d
0x00ec26fa: lea    rdx,[rip+0x86d937]        # 0x141730038 ; literal="by achieving higher and higher harmonics"
0x00ec2701: lea    rcx,[rbp+0x280]
0x00ec2708: call   0x14006f4f0
0x00ec270d: test   r14b,r14b
0x00ec2710: je     0x140ec2725
0x00ec2712: lea    rdx,[rip+0x86d98f]        # 0x1417300a8 ; literal="by pressing valves to route air through different tube"
0x00ec2719: lea    rcx,[rbp+0x280]
0x00ec2720: call   0x14006f4f0
0x00ec2725: test   r12b,r12b
0x00ec2728: je     0x140ec273d
0x00ec272a: lea    rdx,[rip+0x86d94f]        # 0x141730080 ; literal="by restricting air flow out of the bell"
0x00ec2731: lea    rcx,[rbp+0x280]
0x00ec2738: call   0x14006f4f0
0x00ec273d: lea    rdx,[rip+0x73610c]        # 0x1415f8850 ; literal=".  "
0x00ec2744: lea    rcx,[rbp+0x280]
0x00ec274b: call   0x14006f4f0
0x00ec2750: movzx  edi,BYTE PTR [rsp+0x20]
0x00ec2755: cmp    BYTE PTR [rsp+0x49],0x0
0x00ec275a: je     0x140ec293b
0x00ec2760: test   dil,dil
0x00ec2763: je     0x140ec276e
0x00ec2765: lea    rdx,[rip+0x86d86c]        # 0x14172ffd8 ; literal="closed cylindrical"
0x00ec276c: jmp    0x140ec2791
0x00ec276e: cmp    BYTE PTR [rsp+0x58],0x0
0x00ec2773: je     0x140ec277e
0x00ec2775: lea    rdx,[rip+0x86d84c]        # 0x14172ffc8 ; literal="globular"
0x00ec277c: jmp    0x140ec2791
0x00ec277e: test   r15b,r15b
0x00ec2781: lea    rdx,[rip+0x86d6e8]        # 0x14172fe70 ; literal="conical bore"
0x00ec2788: jne    0x140ec2791
0x00ec278a: lea    rdx,[rip+0x86d6c7]        # 0x14172fe58 ; literal="cylindrical bore"
0x00ec2791: lea    rcx,[rbp+0x280]
0x00ec2798: call   0x14006f4f0
0x00ec279d: lea    rdx,[rip+0x720f7c]        # 0x1415e3720 ; literal=" "
0x00ec27a4: lea    rcx,[rbp+0x280]
0x00ec27ab: call   0x14006f4f0
0x00ec27b0: lea    rdx,[rbp+0x280]
0x00ec27b7: mov    ecx,DWORD PTR [rbp-0x80]
0x00ec27ba: call   0x140eb3dd0
0x00ec27bf: lea    rdx,[rip+0x86d85a]        # 0x141730020 ; literal=" wind instrument"
0x00ec27c6: lea    rcx,[rbp+0x280]
0x00ec27cd: call   0x14006f4f0
0x00ec27d2: mov    ebx,DWORD PTR [rsp+0x5c]
0x00ec27d6: test   bl,bl
0x00ec27d8: je     0x140ec27ed
0x00ec27da: lea    rdx,[rip+0x86d79f]        # 0x14172ff80 ; literal=" with a flared bell"
0x00ec27e1: lea    rcx,[rbp+0x280]
0x00ec27e8: call   0x14006f4f0
0x00ec27ed: lea    rdx,[rip+0x73605c]        # 0x1415f8850 ; literal=".  "
0x00ec27f4: lea    rcx,[rbp+0x280]
0x00ec27fb: call   0x14006f4f0
0x00ec2800: movzx  r14d,BYTE PTR [rsp+0x40]
0x00ec2806: test   r14b,r14b
0x00ec2809: je     0x140ec282b
0x00ec280b: lea    rdx,[rip+0x86d7de]        # 0x14172fff0 ; literal="The musician blows into the fipple at one end"
0x00ec2812: lea    rcx,[rbp+0x280]
0x00ec2819: call   0x14006f4f0
0x00ec281e: movzx  esi,BYTE PTR [rsp+0x42]
0x00ec2823: movzx  r12d,BYTE PTR [rsp+0x48]
0x00ec2829: jmp    0x140ec288d
0x00ec282b: movzx  r12d,BYTE PTR [rsp+0x48]
0x00ec2831: test   r12b,r12b
0x00ec2834: je     0x140ec2850
0x00ec2836: lea    rdx,[rip+0x86d953]        # 0x141730190 ; literal="The musician blows across a hole in the side"
0x00ec283d: lea    rcx,[rbp+0x280]
0x00ec2844: call   0x14006f4f0
0x00ec2849: movzx  esi,BYTE PTR [rsp+0x42]
0x00ec284e: jmp    0x140ec288d
0x00ec2850: movzx  esi,BYTE PTR [rsp+0x42]
0x00ec2855: test   sil,sil
0x00ec2858: je     0x140ec2863
0x00ec285a: lea    rdx,[rip+0x86d907]        # 0x141730168 ; literal="The musician blows across the end hole"
0x00ec2861: jmp    0x140ec2881
0x00ec2863: cmp    BYTE PTR [rsp+0x59],0x0
0x00ec2868: je     0x140ec2873
0x00ec286a: lea    rdx,[rip+0x86d987]        # 0x1417301f8 ; literal="The musician blows over a single reed at one end"
0x00ec2871: jmp    0x140ec2881
0x00ec2873: cmp    BYTE PTR [rsp+0x4a],0x0
0x00ec2878: je     0x140ec288d
0x00ec287a: lea    rdx,[rip+0x86d93f]        # 0x1417301c0 ; literal="The musician blows through a double reed at one end"
0x00ec2881: lea    rcx,[rbp+0x280]
0x00ec2888: call   0x14006f4f0
0x00ec288d: lea    rdx,[rip+0x735fbc]        # 0x1415f8850 ; literal=".  "
0x00ec2894: lea    rcx,[rbp+0x280]
0x00ec289b: call   0x14006f4f0
0x00ec28a0: lea    rcx,[rbp+0x280]
0x00ec28a7: test   r13b,r13b
0x00ec28aa: je     0x140ec28f9
0x00ec28ac: lea    rdx,[rip+0x86d83d]        # 0x1417300f0 ; literal="The musician selects the pitch by achieving higher and higher harmonics"
0x00ec28b3: call   0x14006f4f0
0x00ec28b8: cmp    BYTE PTR [rsp+0x45],0x0
0x00ec28bd: jne    0x140ec28c6
0x00ec28bf: cmp    BYTE PTR [rsp+0x41],0x0
0x00ec28c4: je     0x140ec2926
0x00ec28c6: lea    rdx,[rip+0x86d813]        # 0x1417300e0 ; literal=" and can also "
0x00ec28cd: lea    rcx,[rbp+0x280]
0x00ec28d4: call   0x14006f4f0
0x00ec28d9: lea    rcx,[rbp+0x280]
0x00ec28e0: cmp    BYTE PTR [rsp+0x41],0x0
0x00ec28e5: je     0x140ec28f0
0x00ec28e7: lea    rdx,[rip+0x86d85a]        # 0x141730148 ; literal="press keys to stop holes"
0x00ec28ee: jmp    0x140ec2921
0x00ec28f0: lea    rdx,[rip+0x86d841]        # 0x141730138 ; literal="stop holes"
0x00ec28f7: jmp    0x140ec2921
0x00ec28f9: lea    rdx,[rip+0x86d478]        # 0x14172fd78 ; literal="The musician selects the pitch by "
0x00ec2900: call   0x14006f4f0
0x00ec2905: lea    rcx,[rbp+0x280]
0x00ec290c: cmp    BYTE PTR [rsp+0x41],0x0
0x00ec2911: lea    rdx,[rip+0x86d5a0]        # 0x14172feb8 ; literal="pressing keys to stop holes"
0x00ec2918: jne    0x140ec2921
0x00ec291a: lea    rdx,[rip+0x86d587]        # 0x14172fea8 ; literal="stopping holes"
0x00ec2921: call   0x14006f4f0
0x00ec2926: lea    rdx,[rip+0x735f23]        # 0x1415f8850 ; literal=".  "
0x00ec292d: lea    rcx,[rbp+0x280]
0x00ec2934: call   0x14006f4f0
0x00ec2939: jmp    0x140ec2950
0x00ec293b: mov    ebx,DWORD PTR [rsp+0x5c]
0x00ec293f: movzx  esi,BYTE PTR [rsp+0x42]
0x00ec2944: movzx  r14d,BYTE PTR [rsp+0x40]
0x00ec294a: movzx  r12d,BYTE PTR [rsp+0x48]
0x00ec2950: cmp    BYTE PTR [rsp+0x68],0x0
0x00ec2955: je     0x140ec2a8d
0x00ec295b: lea    rdx,[rip+0x86d99e]        # 0x141730300 ; literal="wind instrument consisting of "
0x00ec2962: lea    rcx,[rbp+0x280]
0x00ec2969: call   0x14006f4f0
0x00ec296e: lea    rcx,[rbp+0x1020]
0x00ec2975: call   0x14006f620
0x00ec297a: nop
0x00ec297b: lea    rdx,[rbp+0x1020]
0x00ec2982: mov    r13d,DWORD PTR [rsp+0x64]
0x00ec2987: mov    ecx,r13d
0x00ec298a: call   0x14052bd80
0x00ec298f: lea    rdx,[rbp+0x1020]
0x00ec2996: lea    rcx,[rbp+0x280]
0x00ec299d: call   0x1400b9ca0
0x00ec29a2: lea    rdx,[rip+0x86d947]        # 0x1417302f0 ; literal=" adjacent "
0x00ec29a9: lea    rcx,[rbp+0x280]
0x00ec29b0: call   0x14006f4f0
0x00ec29b5: test   dil,dil
0x00ec29b8: je     0x140ec29c3
0x00ec29ba: lea    rdx,[rip+0x86d967]        # 0x141730328 ; literal="closed"
0x00ec29c1: jmp    0x140ec29d6
0x00ec29c3: test   r15b,r15b
0x00ec29c6: lea    rdx,[rip+0x86d953]        # 0x141730320 ; literal="conical"
0x00ec29cd: jne    0x140ec29d6
0x00ec29cf: lea    rdx,[rip+0x86d89a]        # 0x141730270 ; literal="cylindrical"
0x00ec29d6: lea    rcx,[rbp+0x280]
0x00ec29dd: call   0x14006f4f0
0x00ec29e2: lea    rdx,[rip+0x720d37]        # 0x1415e3720 ; literal=" "
0x00ec29e9: lea    rcx,[rbp+0x280]
0x00ec29f0: call   0x14006f4f0
0x00ec29f5: lea    rdx,[rbp+0x280]
0x00ec29fc: mov    ecx,DWORD PTR [rbp-0x80]
0x00ec29ff: call   0x140eb3dd0
0x00ec2a04: lea    rdx,[rip+0x86b1bd]        # 0x14172dbc8 ; literal=" pipes.  "
0x00ec2a0b: lea    rcx,[rbp+0x280]
0x00ec2a12: call   0x14006f4f0
0x00ec2a17: test   r14b,r14b
0x00ec2a1a: je     0x140ec2a25
0x00ec2a1c: lea    rdx,[rip+0x86d80d]        # 0x141730230 ; literal="The musician blows into the fipple at the end of each pipe"
0x00ec2a23: jmp    0x140ec2a5f
0x00ec2a25: test   r12b,r12b
0x00ec2a28: je     0x140ec2a33
0x00ec2a2a: lea    rdx,[rip+0x86d87f]        # 0x1417302b0 ; literal="The musician blows across a hole in the side of each pipe"
0x00ec2a31: jmp    0x140ec2a5f
0x00ec2a33: test   sil,sil
0x00ec2a36: je     0x140ec2a41
0x00ec2a38: lea    rdx,[rip+0x86d841]        # 0x141730280 ; literal="The musician blows across the end of each pipe"
0x00ec2a3f: jmp    0x140ec2a5f
0x00ec2a41: cmp    BYTE PTR [rsp+0x59],0x0
0x00ec2a46: je     0x140ec2a51
0x00ec2a48: lea    rdx,[rip+0x86d939]        # 0x141730388 ; literal="The musician blows over a single reed in each pipe"
0x00ec2a4f: jmp    0x140ec2a5f
0x00ec2a51: cmp    BYTE PTR [rsp+0x4a],0x0
0x00ec2a56: je     0x140ec2a6b
0x00ec2a58: lea    rdx,[rip+0x86d8f1]        # 0x141730350 ; literal="The musician blows through a double reed in each pipe"
0x00ec2a5f: lea    rcx,[rbp+0x280]
0x00ec2a66: call   0x14006f4f0
0x00ec2a6b: lea    rdx,[rip+0x735dde]        # 0x1415f8850 ; literal=".  "
0x00ec2a72: lea    rcx,[rbp+0x280]
0x00ec2a79: call   0x14006f4f0
0x00ec2a7e: nop
0x00ec2a7f: lea    rcx,[rbp+0x1020]
0x00ec2a86: call   0x140067dc0
0x00ec2a8b: jmp    0x140ec2a92
0x00ec2a8d: mov    r13d,DWORD PTR [rsp+0x64]
0x00ec2a92: cmp    BYTE PTR [rsp+0x44],0x0
0x00ec2a97: je     0x140ec2bd3
0x00ec2a9d: lea    rdx,[rbp+0x280]
0x00ec2aa4: mov    ecx,DWORD PTR [rbp-0x80]
0x00ec2aa7: call   0x140eb3dd0
0x00ec2aac: lea    rdx,[rip+0x86d92d]        # 0x1417303e0 ; literal=" wind instrument consisting of a central wind chest and "
0x00ec2ab3: lea    rcx,[rbp+0x280]
0x00ec2aba: call   0x14006f4f0
0x00ec2abf: lea    rcx,[rbp+0x1040]
0x00ec2ac6: call   0x14006f620
0x00ec2acb: nop
0x00ec2acc: lea    rdx,[rbp+0x1040]
0x00ec2ad3: mov    ecx,r13d
0x00ec2ad6: call   0x14052bd80
0x00ec2adb: lea    rdx,[rbp+0x1040]
0x00ec2ae2: lea    rcx,[rbp+0x280]
0x00ec2ae9: call   0x1400b9ca0
0x00ec2aee: lea    rdx,[rip+0x720c2b]        # 0x1415e3720 ; literal=" "
0x00ec2af5: lea    rcx,[rbp+0x280]
0x00ec2afc: call   0x14006f4f0
0x00ec2b01: lea    rcx,[rbp+0x280]
0x00ec2b08: test   r15b,r15b
0x00ec2b0b: lea    rdx,[rip+0x86d80e]        # 0x141730320 ; literal="conical"
0x00ec2b12: jne    0x140ec2b1b
0x00ec2b14: lea    rdx,[rip+0x86d755]        # 0x141730270 ; literal="cylindrical"
0x00ec2b1b: call   0x14006f4f0
0x00ec2b20: lea    rdx,[rip+0x720bf9]        # 0x1415e3720 ; literal=" "
0x00ec2b27: lea    rcx,[rbp+0x280]
0x00ec2b2e: call   0x14006f4f0
0x00ec2b33: lea    rdx,[rbp+0x280]
0x00ec2b3a: mov    ecx,DWORD PTR [rbp-0x4]
0x00ec2b3d: call   0x140eb3dd0
0x00ec2b42: lea    rdx,[rip+0x86b73b]        # 0x14172e284 ; literal=" pipes"
0x00ec2b49: lea    rcx,[rbp+0x280]
0x00ec2b50: call   0x14006f4f0
0x00ec2b55: test   bl,bl
0x00ec2b57: je     0x140ec2b6c
0x00ec2b59: lea    rdx,[rip+0x86d320]        # 0x14172fe80 ; literal=" with flared bells"
0x00ec2b60: lea    rcx,[rbp+0x280]
0x00ec2b67: call   0x14006f4f0
0x00ec2b6c: lea    rdx,[rip+0x86d84d]        # 0x1417303c0 ; literal=", fitted with free reeds.  "
0x00ec2b73: lea    rcx,[rbp+0x280]
0x00ec2b7a: call   0x14006f4f0
0x00ec2b7f: lea    rdx,[rip+0x86d1f2]        # 0x14172fd78 ; literal="The musician selects the pitch by "
0x00ec2b86: lea    rcx,[rbp+0x280]
0x00ec2b8d: call   0x14006f4f0
0x00ec2b92: lea    rcx,[rbp+0x280]
0x00ec2b99: cmp    BYTE PTR [rsp+0x41],0x0
0x00ec2b9e: lea    rdx,[rip+0x86d313]        # 0x14172feb8 ; literal="pressing keys to stop holes"
0x00ec2ba5: jne    0x140ec2bae
0x00ec2ba7: lea    rdx,[rip+0x86d2fa]        # 0x14172fea8 ; literal="stopping holes"
0x00ec2bae: call   0x14006f4f0
0x00ec2bb3: lea    rdx,[rip+0x735c96]        # 0x1415f8850 ; literal=".  "
0x00ec2bba: lea    rcx,[rbp+0x280]
0x00ec2bc1: call   0x14006f4f0
0x00ec2bc6: nop
0x00ec2bc7: lea    rcx,[rbp+0x1040]
0x00ec2bce: call   0x140067dc0
0x00ec2bd3: mov    r8d,DWORD PTR [rsp+0x70]
0x00ec2bd8: mov    edx,DWORD PTR [rsp+0x6c]
0x00ec2bdc: lea    rcx,[rbp+0x280]
0x00ec2be3: call   0x140eb1f50
0x00ec2be8: lea    rdx,[rbp+0x118]
0x00ec2bef: lea    rcx,[rbp+0x280]
0x00ec2bf6: call   0x140eb3a60
0x00ec2bfb: lea    rcx,[rbp+0x280]
0x00ec2c02: call   0x14006f2c0
0x00ec2c07: lea    rdx,[rax-0x1]
0x00ec2c0b: lea    rcx,[rbp+0x280]
0x00ec2c12: call   0x1400fb4d0
0x00ec2c17: cmp    BYTE PTR [rax],0x20
0x00ec2c1a: jne    0x140ec2c60
0x00ec2c1c: nop    DWORD PTR [rax+0x0]
0x00ec2c20: lea    rcx,[rbp+0x280]
0x00ec2c27: call   0x14006f2c0
0x00ec2c2c: lea    rdx,[rax-0x1]
0x00ec2c30: xor    r8d,r8d
0x00ec2c33: lea    rcx,[rbp+0x280]
0x00ec2c3a: call   0x1400e11c0
0x00ec2c3f: lea    rcx,[rbp+0x280]
0x00ec2c46: call   0x14006f2c0
0x00ec2c4b: lea    rdx,[rax-0x1]
0x00ec2c4f: lea    rcx,[rbp+0x280]
0x00ec2c56: call   0x1400fb4d0
0x00ec2c5b: cmp    BYTE PTR [rax],0x20
0x00ec2c5e: je     0x140ec2c20
0x00ec2c60: lea    rdx,[rbp+0x280]
0x00ec2c67: lea    rcx,[rbp+0x220]
0x00ec2c6e: call   0x1400b9ca0
0x00ec2c73: lea    rdx,[rip+0x7359ea]        # 0x1415f8664 ; literal="]"
0x00ec2c7a: lea    rcx,[rbp+0x220]
0x00ec2c81: call   0x14006f4f0
0x00ec2c86: lea    rdx,[rbp+0x220]
0x00ec2c8d: lea    rcx,[rsp+0x28]
0x00ec2c92: call   0x1400bb700
0x00ec2c97: nop
0x00ec2c98: lea    rcx,[rbp+0x280]
0x00ec2c9f: call   0x140067dc0
0x00ec2ca4: nop
0x00ec2ca5: lea    rcx,[rbp+0x118]
0x00ec2cac: call   0x140cc88d0
0x00ec2cb1: nop
0x00ec2cb2: lea    rcx,[rbp+0x600]
0x00ec2cb9: call   0x140067dc0
0x00ec2cbe: nop
0x00ec2cbf: lea    rcx,[rbp+0x620]
0x00ec2cc6: call   0x140067dc0
0x00ec2ccb: nop
0x00ec2ccc: lea    rcx,[rbp+0x640]
0x00ec2cd3: call   0x140067dc0
0x00ec2cd8: nop
0x00ec2cd9: lea    rcx,[rbp+0x480]
0x00ec2ce0: call   0x140067dc0
0x00ec2ce5: nop
0x00ec2ce6: lea    rcx,[rbp+0x440]
0x00ec2ced: call   0x140067dc0
0x00ec2cf2: nop
0x00ec2cf3: lea    rcx,[rbp+0x220]
0x00ec2cfa: call   0x140067dc0
0x00ec2cff: nop
0x00ec2d00: lea    rcx,[rbp+0x460]
0x00ec2d07: call   0x140067dc0
0x00ec2d0c: nop
0x00ec2d0d: lea    rcx,[rbp+0x360]
0x00ec2d14: call   0x140067dc0
0x00ec2d19: mov    ebx,DWORD PTR [rbp-0x60]
0x00ec2d1c: inc    ebx
0x00ec2d1e: mov    DWORD PTR [rbp-0x60],ebx
0x00ec2d21: mov    r14d,DWORD PTR [rbp-0x50]
0x00ec2d25: inc    r14d
0x00ec2d28: mov    DWORD PTR [rbp-0x50],r14d
0x00ec2d2c: mov    rax,QWORD PTR [rsp+0x50]
0x00ec2d31: cmp    ebx,DWORD PTR [rax+0xe0]
0x00ec2d37: mov    r15d,0x0
0x00ec2d3d: jl     0x140ebf9c0
0x00ec2d43: mov    r14,rax
0x00ec2d46: mov    DWORD PTR [rbp-0x50],r15d
0x00ec2d4a: cmp    DWORD PTR [r14+0xe4],0x0
0x00ec2d52: jle    0x140ec5474
0x00ec2d58: mov    eax,0x1
0x00ec2d5d: mov    r14d,eax
0x00ec2d60: mov    DWORD PTR [rbp-0x60],eax
0x00ec2d63: jmp    0x140ec2d73
0x00ec2d65: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00ec2d70: xor    r15d,r15d
0x00ec2d73: lea    rcx,[rbp+0x3a0]
0x00ec2d7a: call   0x14006f620
0x00ec2d7f: nop
0x00ec2d80: movsxd rax,DWORD PTR [rbp-0x64]
0x00ec2d84: cmp    eax,0xffffffff
0x00ec2d87: je     0x140ec2f06
0x00ec2d8d: mov    rdx,rax
0x00ec2d90: lea    rcx,[rip+0x16248f9]        # 0x1424e7690
0x00ec2d97: call   0x14006f1b0
0x00ec2d9c: mov    rsi,QWORD PTR [rax]
0x00ec2d9f: lea    rcx,[rsi+0x50]
0x00ec2da3: call   0x14006ede0
0x00ec2da8: mov    rdi,rax
0x00ec2dab: test   eax,eax
0x00ec2dad: jle    0x140ec2f06
0x00ec2db3: mov    ebx,r15d
0x00ec2db6: mov    ecx,edi
0x00ec2db8: call   0x140071ec0
0x00ec2dbd: movsxd rdx,eax
0x00ec2dc0: lea    rcx,[rsi+0x50]
0x00ec2dc4: call   0x14006f1b0
0x00ec2dc9: mov    rdx,QWORD PTR [rax]
0x00ec2dcc: lea    rcx,[rbp+0x3a0]
0x00ec2dd3: call   0x14006f530
0x00ec2dd8: lea    rdx,[rbp+0x58]
0x00ec2ddc: lea    rcx,[rip+0x1623f05]        # 0x1424e6ce8
0x00ec2de3: call   0x14006f1d0
0x00ec2de8: lea    rdx,[rbp+0xc0]
0x00ec2def: lea    rcx,[rip+0x1623ef2]        # 0x1424e6ce8
0x00ec2df6: call   0x14006f1c0
0x00ec2dfb: lea    r8,[rbp+0xc0]
0x00ec2e02: lea    rdx,[rbp-0x72]
0x00ec2e06: lea    rcx,[rbp+0x58]
0x00ec2e0a: call   0x14006edb0
0x00ec2e0f: xor    edx,edx
0x00ec2e11: movzx  ecx,BYTE PTR [rax]
0x00ec2e14: call   0x140065740
0x00ec2e19: test   al,al
0x00ec2e1b: je     0x140ec2e6f
0x00ec2e1d: nop    DWORD PTR [rax]
0x00ec2e20: lea    rcx,[rbp+0x58]
0x00ec2e24: call   0x14006eda0
0x00ec2e29: mov    rcx,QWORD PTR [rax]
0x00ec2e2c: add    rcx,0x68
0x00ec2e30: lea    rdx,[rbp+0x3a0]
0x00ec2e37: call   0x14006fdd0
0x00ec2e3c: test   al,al
0x00ec2e3e: jne    0x140ec2ef9
0x00ec2e44: lea    rcx,[rbp+0x58]
0x00ec2e48: call   0x14006ed90
0x00ec2e4d: lea    r8,[rbp+0xc0]
0x00ec2e54: lea    rdx,[rbp-0x72]
0x00ec2e58: lea    rcx,[rbp+0x58]
0x00ec2e5c: call   0x14006edb0
0x00ec2e61: xor    edx,edx
0x00ec2e63: movzx  ecx,BYTE PTR [rax]
0x00ec2e66: call   0x140065740
0x00ec2e6b: test   al,al
0x00ec2e6d: jne    0x140ec2e20
0x00ec2e6f: lea    rdx,[rbp+0x60]
0x00ec2e73: lea    rcx,[rbp+0x78]
0x00ec2e77: call   0x14006f1d0
0x00ec2e7c: lea    rdx,[rbp+0xc8]
0x00ec2e83: lea    rcx,[rbp+0x78]
0x00ec2e87: call   0x14006f1c0
0x00ec2e8c: lea    r8,[rbp+0xc8]
0x00ec2e93: lea    rdx,[rbp-0x73]
0x00ec2e97: lea    rcx,[rbp+0x60]
0x00ec2e9b: call   0x14006edb0
0x00ec2ea0: xor    edx,edx
0x00ec2ea2: movzx  ecx,BYTE PTR [rax]
0x00ec2ea5: call   0x140065740
0x00ec2eaa: test   al,al
0x00ec2eac: je     0x140ec2f12
0x00ec2eae: xchg   ax,ax
0x00ec2eb0: lea    rcx,[rbp+0x60]
0x00ec2eb4: call   0x14006eda0
0x00ec2eb9: lea    rdx,[rbp+0x3a0]
0x00ec2ec0: mov    rcx,QWORD PTR [rax]
0x00ec2ec3: call   0x14006fdd0
0x00ec2ec8: test   al,al
0x00ec2eca: jne    0x140ec2ef9
0x00ec2ecc: lea    rcx,[rbp+0x60]
0x00ec2ed0: call   0x14006ed90
0x00ec2ed5: lea    r8,[rbp+0xc8]
0x00ec2edc: lea    rdx,[rbp-0x73]
0x00ec2ee0: lea    rcx,[rbp+0x60]
0x00ec2ee4: call   0x14006edb0
0x00ec2ee9: xor    edx,edx
0x00ec2eeb: movzx  ecx,BYTE PTR [rax]
0x00ec2eee: call   0x140065740
0x00ec2ef3: test   al,al
0x00ec2ef5: jne    0x140ec2eb0
0x00ec2ef7: jmp    0x140ec2f12
0x00ec2ef9: inc    ebx
0x00ec2efb: cmp    ebx,0x19
0x00ec2efe: jl     0x140ec2db6
0x00ec2f04: jmp    0x140ec2f12
0x00ec2f06: lea    rcx,[rbp+0x3a0]
0x00ec2f0d: call   0x14092e410
0x00ec2f12: lea    rdx,[rbp+0x3a0]
0x00ec2f19: lea    rcx,[rbp+0x78]
0x00ec2f1d: call   0x1400bb700
0x00ec2f22: lea    rdx,[rbp+0x760]
0x00ec2f29: lea    rcx,[rbp+0x520]
0x00ec2f30: call   0x14006f560
0x00ec2f35: nop
0x00ec2f36: lea    rdx,[rip+0x86d3fb]        # 0x141730338 ; literal="INP"
0x00ec2f3d: lea    rcx,[rbp+0x520]
0x00ec2f44: call   0x14006f4f0
0x00ec2f49: lea    rdx,[rbp+0x520]
0x00ec2f50: mov    ecx,r14d
0x00ec2f53: call   0x140529cf0
0x00ec2f58: lea    rdx,[rbp+0x520]
0x00ec2f5f: lea    rcx,[rbp+0x100]
0x00ec2f66: call   0x1400bb700
0x00ec2f6b: lea    rcx,[rbp+0x240]
0x00ec2f72: call   0x14006f620
0x00ec2f77: nop
0x00ec2f78: mov    ecx,0x4f
0x00ec2f7d: call   0x140071ec0
0x00ec2f82: inc    eax
0x00ec2f84: imul   edi,eax,0x3e8
0x00ec2f8a: mov    DWORD PTR [rsp+0x70],edi
0x00ec2f8e: xor    r12b,r12b
0x00ec2f91: mov    BYTE PTR [rsp+0x20],r12b
0x00ec2f96: mov    r14d,0x3
0x00ec2f9c: cmp    edi,0x2710
0x00ec2fa2: jl     0x140ec2fb7
0x00ec2fa4: mov    ecx,r14d
0x00ec2fa7: call   0x140071ec0
0x00ec2fac: test   eax,eax
0x00ec2fae: sete   r12b
0x00ec2fb2: mov    BYTE PTR [rsp+0x20],r12b
0x00ec2fb7: mov    ecx,r14d
0x00ec2fba: call   0x140071ec0
0x00ec2fbf: mov    r13d,eax
0x00ec2fc2: mov    DWORD PTR [rsp+0x5c],eax
0x00ec2fc6: mov    ecx,r14d
0x00ec2fc9: call   0x140071ec0
0x00ec2fce: mov    ebx,eax
0x00ec2fd0: mov    DWORD PTR [rsp+0x6c],eax
0x00ec2fd4: lea    rcx,[rbp+0x4a0]
0x00ec2fdb: call   0x14006f620
0x00ec2fe0: nop
0x00ec2fe1: lea    rcx,[rbp+0x500]
0x00ec2fe8: call   0x14006f620
0x00ec2fed: nop
0x00ec2fee: mov    ecx,0x2
0x00ec2ff3: call   0x140071ec0
0x00ec2ff8: mov    esi,eax
0x00ec2ffa: mov    DWORD PTR [rsp+0x64],eax
0x00ec2ffe: test   ebx,ebx
0x00ec3000: jne    0x140ec30b4
0x00ec3006: mov    ecx,r14d
0x00ec3009: call   0x140071ec0
0x00ec300e: test   eax,eax
0x00ec3010: je     0x140ec3075
0x00ec3012: sub    eax,0x1
0x00ec3015: je     0x140ec3040
0x00ec3017: cmp    eax,0x1
0x00ec301a: jne    0x140ec30b4
0x00ec3020: lea    rdx,[rip+0x86d41d]        # 0x141730444 ; literal="sticks"
0x00ec3027: lea    rcx,[rbp+0x500]
0x00ec302e: call   0x14006f510
0x00ec3033: test   esi,esi
0x00ec3035: je     0x140ec308c
0x00ec3037: lea    rdx,[rip+0x86d3fe]        # 0x14173043c ; literal="stick"
0x00ec303e: jmp    0x140ec30a8
0x00ec3040: lea    rdx,[rip+0x86d2f9]        # 0x141730340 ; literal="hammers"
0x00ec3047: lea    rcx,[rbp+0x500]
0x00ec304e: call   0x14006f510
0x00ec3053: lea    rcx,[rbp+0x4a0]
0x00ec305a: test   esi,esi
0x00ec305c: jne    0x140ec306c
0x00ec305e: lea    rdx,[rbp+0x500]
0x00ec3065: call   0x14006f530
0x00ec306a: jmp    0x140ec30b4
0x00ec306c: lea    rdx,[rip+0x7f8f49]        # 0x1416bbfbc ; literal="hammer"
0x00ec3073: jmp    0x140ec30af
0x00ec3075: lea    rdx,[rip+0x86d2b4]        # 0x141730330 ; literal="mallets"
0x00ec307c: lea    rcx,[rbp+0x500]
0x00ec3083: call   0x14006f510
0x00ec3088: test   esi,esi
0x00ec308a: jne    0x140ec30a1
0x00ec308c: lea    rdx,[rbp+0x500]
0x00ec3093: lea    rcx,[rbp+0x4a0]
0x00ec309a: call   0x14006f530
0x00ec309f: jmp    0x140ec30b4
0x00ec30a1: lea    rdx,[rip+0x86d2a0]        # 0x141730348 ; literal="mallet"
0x00ec30a8: lea    rcx,[rbp+0x4a0]
0x00ec30af: call   0x14006f510
0x00ec30b4: lea    rcx,[rbp+0x6c0]
0x00ec30bb: call   0x14006f620
0x00ec30c0: nop
0x00ec30c1: lea    rcx,[rbp+0x6a0]
0x00ec30c8: call   0x14006f620
0x00ec30cd: nop
0x00ec30ce: lea    rcx,[rbp+0x680]
0x00ec30d5: call   0x14006f620
0x00ec30da: nop
0x00ec30db: lea    rcx,[rbp+0x660]
0x00ec30e2: call   0x14006f620
0x00ec30e7: nop
0x00ec30e8: mov    DWORD PTR [rbp-0x54],r15d
0x00ec30ec: mov    DWORD PTR [rbp-0x28],r15d
0x00ec30f0: mov    DWORD PTR [rbp-0x2c],r15d
0x00ec30f4: mov    DWORD PTR [rbp+0x0],r15d
0x00ec30f8: mov    ebx,edi
0x00ec30fa: mov    esi,0x3e8
0x00ec30ff: mov    r14d,esi
0x00ec3102: test   r12b,r12b
0x00ec3105: je     0x140ec316b
0x00ec3107: mov    eax,0x51eb851f
0x00ec310c: test   r13d,r13d
0x00ec310f: jne    0x140ec3142
0x00ec3111: imul   ecx,edi,0x46
0x00ec3114: imul   ecx
0x00ec3116: mov    ebx,edx
0x00ec3118: sar    ebx,0x5
0x00ec311b: mov    eax,ebx
0x00ec311d: shr    eax,0x1f
0x00ec3120: add    ebx,eax
0x00ec3122: lea    ecx,[rdi+rdi*4]
0x00ec3125: shl    ecx,0x2
0x00ec3128: mov    eax,0x51eb851f
0x00ec312d: imul   ecx
0x00ec312f: mov    esi,edx
0x00ec3131: sar    esi,0x5
0x00ec3134: mov    eax,esi
0x00ec3136: shr    eax,0x1f
0x00ec3139: add    esi,eax
0x00ec313b: lea    ecx,[rdi+rdi*4]
0x00ec313e: add    ecx,ecx
0x00ec3140: jmp    0x140ec3189
0x00ec3142: imul   ecx,edi,0x4b
0x00ec3145: imul   ecx
0x00ec3147: mov    ebx,edx
0x00ec3149: sar    ebx,0x5
0x00ec314c: mov    eax,ebx
0x00ec314e: shr    eax,0x1f
0x00ec3151: add    ebx,eax
0x00ec3153: imul   ecx,edi,0x19
0x00ec3156: mov    eax,0x51eb851f
0x00ec315b: imul   ecx
0x00ec315d: mov    esi,edx
0x00ec315f: sar    esi,0x5
0x00ec3162: mov    eax,esi
0x00ec3164: shr    eax,0x1f
0x00ec3167: add    esi,eax
0x00ec3169: jmp    0x140ec31a0
0x00ec316b: test   r13d,r13d
0x00ec316e: jne    0x140ec31a0
0x00ec3170: imul   ecx,edi,0x55
0x00ec3173: mov    eax,0x51eb851f
0x00ec3178: imul   ecx
0x00ec317a: mov    ebx,edx
0x00ec317c: sar    ebx,0x5
0x00ec317f: mov    eax,ebx
0x00ec3181: shr    eax,0x1f
0x00ec3184: add    ebx,eax
0x00ec3186: imul   ecx,edi,0xf
0x00ec3189: mov    eax,0x51eb851f
0x00ec318e: imul   ecx
0x00ec3190: mov    r14d,edx
0x00ec3193: sar    r14d,0x5
0x00ec3197: mov    eax,r14d
0x00ec319a: shr    eax,0x1f
0x00ec319d: add    r14d,eax
0x00ec31a0: lea    rcx,[rbp+0x380]
0x00ec31a7: call   0x14006f620
0x00ec31ac: nop
0x00ec31ad: lea    rcx,[rbp+0x400]
0x00ec31b4: call   0x14006f620
0x00ec31b9: nop
0x00ec31ba: lea    rcx,[rbp+0x4c0]
0x00ec31c1: call   0x14006f620
0x00ec31c6: nop
0x00ec31c7: mov    r15d,0x1
0x00ec31cd: test   r13d,r13d
0x00ec31d0: jne    0x140ec32ca
0x00ec31d6: mov    ecx,0x2
0x00ec31db: call   0x140071ec0
0x00ec31e0: test   eax,eax
0x00ec31e2: jne    0x140ec320a
0x00ec31e4: test   r12b,r12b
0x00ec31e7: je     0x140ec320a
0x00ec31e9: mov    ecx,0x4
0x00ec31ee: call   0x140071ec0
0x00ec31f3: test   eax,eax
0x00ec31f5: mov    ecx,0x4
0x00ec31fa: jne    0x140ec3201
0x00ec31fc: mov    ecx,0x13
0x00ec3201: call   0x140071ec0
0x00ec3206: lea    r15d,[rax+0x2]
0x00ec320a: lea    rdx,[rip+0x7876b7]        # 0x14164a8c8 ; literal="drums"
0x00ec3211: lea    rcx,[rbp+0x400]
0x00ec3218: call   0x14006f510
0x00ec321d: lea    rcx,[rbp+0x380]
0x00ec3224: cmp    r15d,0x2
0x00ec3228: jl     0x140ec3238
0x00ec322a: lea    rdx,[rbp+0x400]
0x00ec3231: call   0x14006f530
0x00ec3236: jmp    0x140ec3244
0x00ec3238: lea    rdx,[rip+0x86d21d]        # 0x14173045c ; literal="drum"
0x00ec323f: call   0x14006f510
0x00ec3244: mov    ecx,0x5
0x00ec3249: call   0x140071ec0
0x00ec324e: test   eax,eax
0x00ec3250: je     0x140ec326b
0x00ec3252: sub    eax,0x1
0x00ec3255: je     0x140ec327e
0x00ec3257: sub    eax,0x1
0x00ec325a: je     0x140ec3291
0x00ec325c: sub    eax,0x1
0x00ec325f: je     0x140ec32a4
0x00ec3261: cmp    eax,0x1
0x00ec3264: je     0x140ec32b7
0x00ec3266: jmp    0x140ec34b4
0x00ec326b: lea    rdx,[rip+0x86d1de]        # 0x141730450 ; literal="bowl-shaped"
0x00ec3272: lea    rcx,[rbp+0x4c0]
0x00ec3279: call   0x14006f510
0x00ec327e: lea    rdx,[rip+0x80760b]        # 0x1416ca890 ; literal="tube"
0x00ec3285: lea    rcx,[rbp+0x4c0]
0x00ec328c: call   0x14006f510
0x00ec3291: lea    rdx,[rip+0x807744]        # 0x1416ca9dc ; literal="barrel"
0x00ec3298: lea    rcx,[rbp+0x4c0]
0x00ec329f: call   0x14006f510
0x00ec32a4: lea    rdx,[rip+0x807715]        # 0x1416ca9c0 ; literal="goblet"
0x00ec32ab: lea    rcx,[rbp+0x4c0]
0x00ec32b2: call   0x14006f510
0x00ec32b7: lea    rdx,[rip+0x86d162]        # 0x141730420 ; literal="hourglass"
0x00ec32be: lea    rcx,[rbp+0x4c0]
0x00ec32c5: jmp    0x140ec34af
0x00ec32ca: test   r12b,r12b
0x00ec32cd: je     0x140ec32f0
0x00ec32cf: mov    ecx,0x4
0x00ec32d4: call   0x140071ec0
0x00ec32d9: test   eax,eax
0x00ec32db: mov    ecx,0x4
0x00ec32e0: jne    0x140ec32e7
0x00ec32e2: mov    ecx,0x13
0x00ec32e7: call   0x140071ec0
0x00ec32ec: lea    r15d,[rax+0x2]
0x00ec32f0: mov    ecx,0x7
0x00ec32f5: call   0x140071ec0
0x00ec32fa: cmp    eax,0x6
0x00ec32fd: ja     0x140ec34b4
0x00ec3303: cdqe
0x00ec3305: lea    rdx,[rip+0xffffffffff13ccf4]        # 0x140000000
0x00ec330c: mov    ecx,DWORD PTR [rdx+rax*4+0xec7260]
0x00ec3313: add    rcx,rdx
0x00ec3316: jmp    rcx
0x00ec3318: lea    rdx,[rip+0x806e69]        # 0x1416ca188 ; literal="bars"
0x00ec331f: lea    rcx,[rbp+0x400]
0x00ec3326: call   0x14006f510
0x00ec332b: lea    rcx,[rbp+0x380]
0x00ec3332: cmp    r15d,0x2
0x00ec3336: jl     0x140ec3349
0x00ec3338: lea    rdx,[rbp+0x400]
0x00ec333f: call   0x14006f530
0x00ec3344: jmp    0x140ec34b4
0x00ec3349: lea    rdx,[rip+0x86d0cc]        # 0x14173041c ; literal="bar"
0x00ec3350: jmp    0x140ec34af
0x00ec3355: lea    rdx,[rip+0x86d0d8]        # 0x141730434 ; literal="chimes"
0x00ec335c: lea    rcx,[rbp+0x400]
0x00ec3363: call   0x14006f510
0x00ec3368: lea    rcx,[rbp+0x380]
0x00ec336f: cmp    r15d,0x2
0x00ec3373: jl     0x140ec3386
0x00ec3375: lea    rdx,[rbp+0x400]
0x00ec337c: call   0x14006f530
0x00ec3381: jmp    0x140ec34b4
0x00ec3386: lea    rdx,[rip+0x86d09f]        # 0x14173042c ; literal="chime"
0x00ec338d: jmp    0x140ec34af
0x00ec3392: lea    rdx,[rip+0x806e0f]        # 0x1416ca1a8 ; literal="blocks"
0x00ec3399: lea    rcx,[rbp+0x400]
0x00ec33a0: call   0x14006f510
0x00ec33a5: lea    rcx,[rbp+0x380]
0x00ec33ac: cmp    r15d,0x2
0x00ec33b0: jl     0x140ec33c3
0x00ec33b2: lea    rdx,[rbp+0x400]
0x00ec33b9: call   0x14006f530
0x00ec33be: jmp    0x140ec34b4
0x00ec33c3: lea    rdx,[rip+0x86c322]        # 0x14172f6ec ; literal="block"
0x00ec33ca: jmp    0x140ec34af
0x00ec33cf: lea    rdx,[rip+0x86c30e]        # 0x14172f6e4 ; literal="bowls"
0x00ec33d6: lea    rcx,[rbp+0x400]
0x00ec33dd: call   0x14006f510
0x00ec33e2: lea    rcx,[rbp+0x380]
0x00ec33e9: cmp    r15d,0x2
0x00ec33ed: jl     0x140ec3400
0x00ec33ef: lea    rdx,[rbp+0x400]
0x00ec33f6: call   0x14006f530
0x00ec33fb: jmp    0x140ec34b4
0x00ec3400: lea    rdx,[rip+0x86c2fd]        # 0x14172f704 ; literal="bowl"
0x00ec3407: jmp    0x140ec34af
0x00ec340c: lea    rdx,[rip+0x86c2e5]        # 0x14172f6f8 ; literal="triangles"
0x00ec3413: lea    rcx,[rbp+0x400]
0x00ec341a: call   0x14006f510
0x00ec341f: lea    rcx,[rbp+0x380]
0x00ec3426: cmp    r15d,0x2
0x00ec342a: jl     0x140ec343a
0x00ec342c: lea    rdx,[rbp+0x400]
0x00ec3433: call   0x14006f530
0x00ec3438: jmp    0x140ec34b4
0x00ec343a: lea    rdx,[rip+0x86c287]        # 0x14172f6c8 ; literal="triangle"
0x00ec3441: jmp    0x140ec34af
0x00ec3443: lea    rdx,[rip+0x86c276]        # 0x14172f6c0 ; literal="bells"
0x00ec344a: lea    rcx,[rbp+0x400]
0x00ec3451: call   0x14006f510
0x00ec3456: lea    rcx,[rbp+0x380]
0x00ec345d: cmp    r15d,0x2
0x00ec3461: jl     0x140ec3471
0x00ec3463: lea    rdx,[rbp+0x400]
0x00ec346a: call   0x14006f530
0x00ec346f: jmp    0x140ec34b4
0x00ec3471: lea    rdx,[rip+0x86c264]        # 0x14172f6dc ; literal="bell"
0x00ec3478: jmp    0x140ec34af
0x00ec347a: lea    rdx,[rip+0x86c253]        # 0x14172f6d4 ; literal="rings"
0x00ec3481: lea    rcx,[rbp+0x400]
0x00ec3488: call   0x14006f510
0x00ec348d: lea    rcx,[rbp+0x380]
0x00ec3494: cmp    r15d,0x2
0x00ec3498: jl     0x140ec34a8
0x00ec349a: lea    rdx,[rbp+0x400]
0x00ec34a1: call   0x14006f530
0x00ec34a6: jmp    0x140ec34b4
0x00ec34a8: lea    rdx,[rip+0x807991]        # 0x1416cae40 ; literal="ring"
0x00ec34af: call   0x14006f510
0x00ec34b4: cmp    r15d,0x2
0x00ec34b8: setge  r13b
0x00ec34bc: test   r12b,r12b
0x00ec34bf: jne    0x140ec34d3
0x00ec34c1: cmp    DWORD PTR [rsp+0x5c],0x0
0x00ec34c6: je     0x140ec34d3
0x00ec34c8: cmp    DWORD PTR [rsp+0x6c],0x0
0x00ec34cd: jne    0x140ec3f67
0x00ec34d3: lea    rdx,[rbp+0x520]
0x00ec34da: lea    rcx,[rbp+0x6c0]
0x00ec34e1: call   0x14006f530
0x00ec34e6: lea    rdx,[rip+0x86ad43]        # 0x14172e230 ; literal="_BODY"
0x00ec34ed: lea    rcx,[rbp+0x6c0]
0x00ec34f4: call   0x14006f4f0
0x00ec34f9: lea    rdx,[rbp+0x6c0]
0x00ec3500: lea    rcx,[rbp-0x48]
0x00ec3504: call   0x1400bb700
0x00ec3509: mov    edi,0x6
0x00ec350e: cmp    ebx,0x9c40
0x00ec3514: mov    eax,0x3
0x00ec3519: cmovl  edi,eax
0x00ec351c: lea    rdx,[rip+0x86a0ad]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec3523: lea    rcx,[rbp+0x240]
0x00ec352a: call   0x14006f510
0x00ec352f: lea    rdx,[rbp+0x6c0]
0x00ec3536: lea    rcx,[rbp+0x240]
0x00ec353d: call   0x1400b9ca0
0x00ec3542: lea    rdx,[rip+0x73511b]        # 0x1415f8664 ; literal="]"
0x00ec3549: lea    rcx,[rbp+0x240]
0x00ec3550: call   0x14006f4f0
0x00ec3555: lea    rdx,[rbp+0x240]
0x00ec355c: lea    rcx,[rsp+0x28]
0x00ec3561: call   0x1400bb700
0x00ec3566: lea    rdx,[rip+0x7e2a6b]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec356d: lea    rcx,[rsp+0x28]
0x00ec3572: call   0x1400bb870
0x00ec3577: mov    rax,QWORD PTR [rsp+0x50]
0x00ec357c: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ec3580: je     0x140ec35e0
0x00ec3582: lea    rdx,[rip+0x8694d7]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec3589: lea    rcx,[rbp+0xd80]
0x00ec3590: call   0x1400680e0
0x00ec3595: nop
0x00ec3596: lea    rdx,[rbp+0xd80]
0x00ec359d: mov    rax,QWORD PTR [rsp+0x50]
0x00ec35a2: mov    ecx,DWORD PTR [rax+0x40]
0x00ec35a5: call   0x140529cf0
0x00ec35aa: lea    rdx,[rip+0x7350b3]        # 0x1415f8664 ; literal="]"
0x00ec35b1: lea    rcx,[rbp+0xd80]
0x00ec35b8: call   0x14006f4f0
0x00ec35bd: lea    rdx,[rbp+0xd80]
0x00ec35c4: lea    rcx,[rsp+0x28]
0x00ec35c9: call   0x1400bb700
0x00ec35ce: nop
0x00ec35cf: lea    rcx,[rbp+0xd80]
0x00ec35d6: call   0x140067dc0
0x00ec35db: mov    rax,QWORD PTR [rsp+0x50]
0x00ec35e0: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ec35e4: je     0x140ec363f
0x00ec35e6: lea    rdx,[rip+0x869463]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec35ed: lea    rcx,[rbp+0xda0]
0x00ec35f4: call   0x1400680e0
0x00ec35f9: nop
0x00ec35fa: lea    rdx,[rbp+0xda0]
0x00ec3601: mov    rax,QWORD PTR [rsp+0x50]
0x00ec3606: mov    ecx,DWORD PTR [rax+0x44]
0x00ec3609: call   0x140529cf0
0x00ec360e: lea    rdx,[rip+0x73504f]        # 0x1415f8664 ; literal="]"
0x00ec3615: lea    rcx,[rbp+0xda0]
0x00ec361c: call   0x14006f4f0
0x00ec3621: lea    rdx,[rbp+0xda0]
0x00ec3628: lea    rcx,[rsp+0x28]
0x00ec362d: call   0x1400bb700
0x00ec3632: nop
0x00ec3633: lea    rcx,[rbp+0xda0]
0x00ec363a: call   0x140067dc0
0x00ec363f: lea    rdx,[rip+0x869f72]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec3646: lea    rcx,[rsp+0x28]
0x00ec364b: call   0x1400bb870
0x00ec3650: lea    rdx,[rip+0x86ab01]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec3657: lea    rcx,[rsp+0x28]
0x00ec365c: call   0x1400bb870
0x00ec3661: lea    rdx,[rip+0x86abb8]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec3668: lea    rcx,[rsp+0x28]
0x00ec366d: call   0x1400bb870
0x00ec3672: lea    rdx,[rip+0x86aad7]        # 0x14172e150 ; literal="[NAME:"
0x00ec3679: lea    rcx,[rbp+0x240]
0x00ec3680: call   0x14006f510
0x00ec3685: lea    rdx,[rbp+0x3a0]
0x00ec368c: lea    rcx,[rbp+0x240]
0x00ec3693: call   0x1400b9ca0
0x00ec3698: lea    rdx,[rip+0x720081]        # 0x1415e3720 ; literal=" "
0x00ec369f: lea    rcx,[rbp+0x240]
0x00ec36a6: call   0x14006f4f0
0x00ec36ab: lea    rdx,[rbp+0x380]
0x00ec36b2: lea    rcx,[rbp+0x240]
0x00ec36b9: call   0x1400b9ca0
0x00ec36be: lea    rdx,[rip+0x74fd3f]        # 0x141613404 ; literal=":"
0x00ec36c5: lea    rcx,[rbp+0x240]
0x00ec36cc: call   0x14006f4f0
0x00ec36d1: lea    rdx,[rbp+0x3a0]
0x00ec36d8: lea    rcx,[rbp+0x240]
0x00ec36df: call   0x1400b9ca0
0x00ec36e4: lea    rdx,[rip+0x720035]        # 0x1415e3720 ; literal=" "
0x00ec36eb: lea    rcx,[rbp+0x240]
0x00ec36f2: call   0x14006f4f0
0x00ec36f7: lea    rdx,[rbp+0x400]
0x00ec36fe: lea    rcx,[rbp+0x240]
0x00ec3705: call   0x1400b9ca0
0x00ec370a: lea    rdx,[rip+0x734f53]        # 0x1415f8664 ; literal="]"
0x00ec3711: lea    rcx,[rbp+0x240]
0x00ec3718: call   0x14006f4f0
0x00ec371d: lea    rdx,[rbp+0x240]
0x00ec3724: lea    rcx,[rsp+0x28]
0x00ec3729: call   0x1400bb700
0x00ec372e: lea    rdx,[rip+0x86a9f3]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec3735: lea    rcx,[rsp+0x28]
0x00ec373a: call   0x1400bb870
0x00ec373f: lea    r8,[rbp-0x54]
0x00ec3743: lea    rdx,[rsp+0x28]
0x00ec3748: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec374d: call   0x140eb4380
0x00ec3752: lea    rdx,[rip+0x86a9af]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec3759: lea    rcx,[rsp+0x28]
0x00ec375e: call   0x1400bb870
0x00ec3763: lea    rdx,[rip+0x86a9de]        # 0x14172e148 ; literal="[SIZE:"
0x00ec376a: lea    rcx,[rbp+0x240]
0x00ec3771: call   0x14006f510
0x00ec3776: lea    rdx,[rbp+0x240]
0x00ec377d: mov    ecx,ebx
0x00ec377f: call   0x140529cf0
0x00ec3784: lea    rdx,[rip+0x734ed9]        # 0x1415f8664 ; literal="]"
0x00ec378b: lea    rcx,[rbp+0x240]
0x00ec3792: call   0x14006f4f0
0x00ec3797: lea    rdx,[rbp+0x240]
0x00ec379e: lea    rcx,[rsp+0x28]
0x00ec37a3: call   0x1400bb700
0x00ec37a8: lea    rdx,[rip+0x86a989]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec37af: lea    rcx,[rbp+0x240]
0x00ec37b6: call   0x14006f510
0x00ec37bb: lea    rdx,[rbp+0x240]
0x00ec37c2: mov    ecx,edi
0x00ec37c4: call   0x140529cf0
0x00ec37c9: lea    rdx,[rip+0x734e94]        # 0x1415f8664 ; literal="]"
0x00ec37d0: lea    rcx,[rbp+0x240]
0x00ec37d7: call   0x14006f4f0
0x00ec37dc: lea    rdx,[rbp+0x240]
0x00ec37e3: lea    rcx,[rsp+0x28]
0x00ec37e8: call   0x1400bb700
0x00ec37ed: lea    rdx,[rip+0x86aa14]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec37f4: lea    rcx,[rbp+0x240]
0x00ec37fb: call   0x14006f510
0x00ec3800: lea    rcx,[rbp+0x4c0]
0x00ec3807: call   0x14006f4b0
0x00ec380c: test   al,al
0x00ec380e: jne    0x140ec3836
0x00ec3810: lea    rdx,[rbp+0x4c0]
0x00ec3817: lea    rcx,[rbp+0x240]
0x00ec381e: call   0x1400b9ca0
0x00ec3823: lea    rdx,[rip+0x71fef6]        # 0x1415e3720 ; literal=" "
0x00ec382a: lea    rcx,[rbp+0x240]
0x00ec3831: call   0x14006f4f0
0x00ec3836: lea    rdx,[rbp+0x3a0]
0x00ec383d: lea    rcx,[rbp+0x240]
0x00ec3844: call   0x1400b9ca0
0x00ec3849: lea    rdx,[rip+0x71fed0]        # 0x1415e3720 ; literal=" "
0x00ec3850: lea    rcx,[rbp+0x240]
0x00ec3857: call   0x14006f4f0
0x00ec385c: lea    rdx,[rbp+0x380]
0x00ec3863: lea    rcx,[rbp+0x240]
0x00ec386a: call   0x1400b9ca0
0x00ec386f: lea    rdx,[rip+0x720d3a]        # 0x1415e45b0 ; literal=" make"
0x00ec3876: lea    rcx,[rbp+0x240]
0x00ec387d: call   0x14006f4f0
0x00ec3882: cmp    r15d,0x1
0x00ec3886: jne    0x140ec389b
0x00ec3888: lea    rdx,[rip+0x720991]        # 0x1415e4220 ; literal="s"
0x00ec388f: lea    rcx,[rbp+0x240]
0x00ec3896: call   0x14006f4f0
0x00ec389b: lea    rdx,[rip+0x86bebe]        # 0x14172f760 ; literal=" up the bulk of the instrument.]"
0x00ec38a2: lea    rcx,[rbp+0x240]
0x00ec38a9: call   0x14006f4f0
0x00ec38ae: lea    rdx,[rbp+0x240]
0x00ec38b5: lea    rcx,[rsp+0x28]
0x00ec38ba: call   0x1400bb700
0x00ec38bf: test   r12b,r12b
0x00ec38c2: je     0x140ec3bf9
0x00ec38c8: lea    rdx,[rbp+0x520]
0x00ec38cf: lea    rcx,[rbp+0x6a0]
0x00ec38d6: call   0x14006f530
0x00ec38db: lea    rdx,[rip+0x86be72]        # 0x14172f754 ; literal="_STAND"
0x00ec38e2: lea    rcx,[rbp+0x6a0]
0x00ec38e9: call   0x14006f4f0
0x00ec38ee: lea    rdx,[rbp+0x6a0]
0x00ec38f5: lea    rcx,[rbp-0x48]
0x00ec38f9: call   0x1400bb700
0x00ec38fe: mov    ebx,0x6
0x00ec3903: cmp    esi,0x9c40
0x00ec3909: mov    eax,0x3
0x00ec390e: cmovl  ebx,eax
0x00ec3911: lea    rdx,[rip+0x869cb8]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec3918: lea    rcx,[rbp+0x240]
0x00ec391f: call   0x14006f510
0x00ec3924: lea    rdx,[rbp+0x6a0]
0x00ec392b: lea    rcx,[rbp+0x240]
0x00ec3932: call   0x1400b9ca0
0x00ec3937: lea    rdx,[rip+0x734d26]        # 0x1415f8664 ; literal="]"
0x00ec393e: lea    rcx,[rbp+0x240]
0x00ec3945: call   0x14006f4f0
0x00ec394a: lea    rdx,[rbp+0x240]
0x00ec3951: lea    rcx,[rsp+0x28]
0x00ec3956: call   0x1400bb700
0x00ec395b: lea    rdx,[rip+0x7e2676]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec3962: lea    rcx,[rsp+0x28]
0x00ec3967: call   0x1400bb870
0x00ec396c: mov    rdi,QWORD PTR [rsp+0x50]
0x00ec3971: cmp    DWORD PTR [rdi+0x40],0xffffffff
0x00ec3975: je     0x140ec39cb
0x00ec3977: lea    rdx,[rip+0x8690e2]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec397e: lea    rcx,[rbp+0xdc0]
0x00ec3985: call   0x1400680e0
0x00ec398a: nop
0x00ec398b: lea    rdx,[rbp+0xdc0]
0x00ec3992: mov    ecx,DWORD PTR [rdi+0x40]
0x00ec3995: call   0x140529cf0
0x00ec399a: lea    rdx,[rip+0x734cc3]        # 0x1415f8664 ; literal="]"
0x00ec39a1: lea    rcx,[rbp+0xdc0]
0x00ec39a8: call   0x14006f4f0
0x00ec39ad: lea    rdx,[rbp+0xdc0]
0x00ec39b4: lea    rcx,[rsp+0x28]
0x00ec39b9: call   0x1400bb700
0x00ec39be: nop
0x00ec39bf: lea    rcx,[rbp+0xdc0]
0x00ec39c6: call   0x140067dc0
0x00ec39cb: cmp    DWORD PTR [rdi+0x44],0xffffffff
0x00ec39cf: je     0x140ec3a25
0x00ec39d1: lea    rdx,[rip+0x869078]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec39d8: lea    rcx,[rbp+0xde0]
0x00ec39df: call   0x1400680e0
0x00ec39e4: nop
0x00ec39e5: lea    rdx,[rbp+0xde0]
0x00ec39ec: mov    ecx,DWORD PTR [rdi+0x44]
0x00ec39ef: call   0x140529cf0
0x00ec39f4: lea    rdx,[rip+0x734c69]        # 0x1415f8664 ; literal="]"
0x00ec39fb: lea    rcx,[rbp+0xde0]
0x00ec3a02: call   0x14006f4f0
0x00ec3a07: lea    rdx,[rbp+0xde0]
0x00ec3a0e: lea    rcx,[rsp+0x28]
0x00ec3a13: call   0x1400bb700
0x00ec3a18: nop
0x00ec3a19: lea    rcx,[rbp+0xde0]
0x00ec3a20: call   0x140067dc0
0x00ec3a25: lea    rdx,[rip+0x869b8c]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec3a2c: lea    rcx,[rsp+0x28]
0x00ec3a31: call   0x1400bb870
0x00ec3a36: lea    rdx,[rip+0x86a71b]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec3a3d: lea    rcx,[rsp+0x28]
0x00ec3a42: call   0x1400bb870
0x00ec3a47: lea    rdx,[rip+0x86a7d2]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec3a4e: lea    rcx,[rsp+0x28]
0x00ec3a53: call   0x1400bb870
0x00ec3a58: lea    rdx,[rip+0x86a6f1]        # 0x14172e150 ; literal="[NAME:"
0x00ec3a5f: lea    rcx,[rbp+0x240]
0x00ec3a66: call   0x14006f510
0x00ec3a6b: lea    rdx,[rbp+0x3a0]
0x00ec3a72: lea    rcx,[rbp+0x240]
0x00ec3a79: call   0x1400b9ca0
0x00ec3a7e: lea    rdx,[rip+0x86bd0b]        # 0x14172f790 ; literal=" stand"
0x00ec3a85: lea    rcx,[rbp+0x240]
0x00ec3a8c: call   0x14006f4f0
0x00ec3a91: lea    rdx,[rip+0x74f96c]        # 0x141613404 ; literal=":"
0x00ec3a98: lea    rcx,[rbp+0x240]
0x00ec3a9f: call   0x14006f4f0
0x00ec3aa4: lea    rdx,[rbp+0x3a0]
0x00ec3aab: lea    rcx,[rbp+0x240]
0x00ec3ab2: call   0x1400b9ca0
0x00ec3ab7: lea    rdx,[rip+0x86bcca]        # 0x14172f788 ; literal=" stands"
0x00ec3abe: lea    rcx,[rbp+0x240]
0x00ec3ac5: call   0x14006f4f0
0x00ec3aca: lea    rdx,[rip+0x734b93]        # 0x1415f8664 ; literal="]"
0x00ec3ad1: lea    rcx,[rbp+0x240]
0x00ec3ad8: call   0x14006f4f0
0x00ec3add: lea    rdx,[rbp+0x240]
0x00ec3ae4: lea    rcx,[rsp+0x28]
0x00ec3ae9: call   0x1400bb700
0x00ec3aee: lea    rdx,[rip+0x86a633]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec3af5: lea    rcx,[rsp+0x28]
0x00ec3afa: call   0x1400bb870
0x00ec3aff: lea    r8,[rbp-0x28]
0x00ec3b03: lea    rdx,[rsp+0x28]
0x00ec3b08: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec3b0d: call   0x140eb4380
0x00ec3b12: lea    rdx,[rip+0x86a5ef]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec3b19: lea    rcx,[rsp+0x28]
0x00ec3b1e: call   0x1400bb870
0x00ec3b23: lea    rdx,[rip+0x86a61e]        # 0x14172e148 ; literal="[SIZE:"
0x00ec3b2a: lea    rcx,[rbp+0x240]
0x00ec3b31: call   0x14006f510
0x00ec3b36: lea    rdx,[rbp+0x240]
0x00ec3b3d: mov    ecx,esi
0x00ec3b3f: call   0x140529cf0
0x00ec3b44: lea    rdx,[rip+0x734b19]        # 0x1415f8664 ; literal="]"
0x00ec3b4b: lea    rcx,[rbp+0x240]
0x00ec3b52: call   0x14006f4f0
0x00ec3b57: lea    rdx,[rbp+0x240]
0x00ec3b5e: lea    rcx,[rsp+0x28]
0x00ec3b63: call   0x1400bb700
0x00ec3b68: lea    rdx,[rip+0x86a5c9]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec3b6f: lea    rcx,[rbp+0x240]
0x00ec3b76: call   0x14006f510
0x00ec3b7b: lea    rdx,[rbp+0x240]
0x00ec3b82: mov    ecx,ebx
0x00ec3b84: call   0x140529cf0
0x00ec3b89: lea    rdx,[rip+0x734ad4]        # 0x1415f8664 ; literal="]"
0x00ec3b90: lea    rcx,[rbp+0x240]
0x00ec3b97: call   0x14006f4f0
0x00ec3b9c: lea    rdx,[rbp+0x240]
0x00ec3ba3: lea    rcx,[rsp+0x28]
0x00ec3ba8: call   0x1400bb700
0x00ec3bad: lea    rdx,[rip+0x86a654]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec3bb4: lea    rcx,[rbp+0x240]
0x00ec3bbb: call   0x14006f510
0x00ec3bc0: lea    rdx,[rbp+0x3a0]
0x00ec3bc7: lea    rcx,[rbp+0x240]
0x00ec3bce: call   0x1400b9ca0
0x00ec3bd3: lea    rdx,[rip+0x86bb3e]        # 0x14172f718 ; literal=" stand is used to support the instrument.]"
0x00ec3bda: lea    rcx,[rbp+0x240]
0x00ec3be1: call   0x14006f4f0
0x00ec3be6: lea    rdx,[rbp+0x240]
0x00ec3bed: lea    rcx,[rsp+0x28]
0x00ec3bf2: call   0x1400bb700
0x00ec3bf7: jmp    0x140ec3bfe
0x00ec3bf9: mov    rdi,QWORD PTR [rsp+0x50]
0x00ec3bfe: mov    ebx,DWORD PTR [rsp+0x5c]
0x00ec3c02: test   ebx,ebx
0x00ec3c04: jne    0x140ec42d4
0x00ec3c0a: lea    rdx,[rbp+0x520]
0x00ec3c11: lea    rcx,[rbp+0x680]
0x00ec3c18: call   0x14006f530
0x00ec3c1d: lea    rdx,[rip+0x86bae8]        # 0x14172f70c ; literal="_HEAD"
0x00ec3c24: lea    rcx,[rbp+0x680]
0x00ec3c2b: call   0x14006f4f0
0x00ec3c30: lea    rdx,[rbp+0x680]
0x00ec3c37: lea    rcx,[rbp-0x48]
0x00ec3c3b: call   0x1400bb700
0x00ec3c40: mov    ebx,0x6
0x00ec3c45: cmp    r14d,0x9c40
0x00ec3c4c: mov    eax,0x3
0x00ec3c51: cmovl  ebx,eax
0x00ec3c54: lea    rdx,[rip+0x869975]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec3c5b: lea    rcx,[rbp+0x240]
0x00ec3c62: call   0x14006f510
0x00ec3c67: lea    rdx,[rbp+0x680]
0x00ec3c6e: lea    rcx,[rbp+0x240]
0x00ec3c75: call   0x1400b9ca0
0x00ec3c7a: lea    rdx,[rip+0x7349e3]        # 0x1415f8664 ; literal="]"
0x00ec3c81: lea    rcx,[rbp+0x240]
0x00ec3c88: call   0x14006f4f0
0x00ec3c8d: lea    rdx,[rbp+0x240]
0x00ec3c94: lea    rcx,[rsp+0x28]
0x00ec3c99: call   0x1400bb700
0x00ec3c9e: lea    rdx,[rip+0x7e2333]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec3ca5: lea    rcx,[rsp+0x28]
0x00ec3caa: call   0x1400bb870
0x00ec3caf: cmp    DWORD PTR [rdi+0x40],0xffffffff
0x00ec3cb3: je     0x140ec3d09
0x00ec3cb5: lea    rdx,[rip+0x868da4]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec3cbc: lea    rcx,[rbp+0xe00]
0x00ec3cc3: call   0x1400680e0
0x00ec3cc8: nop
0x00ec3cc9: lea    rdx,[rbp+0xe00]
0x00ec3cd0: mov    ecx,DWORD PTR [rdi+0x40]
0x00ec3cd3: call   0x140529cf0
0x00ec3cd8: lea    rdx,[rip+0x734985]        # 0x1415f8664 ; literal="]"
0x00ec3cdf: lea    rcx,[rbp+0xe00]
0x00ec3ce6: call   0x14006f4f0
0x00ec3ceb: lea    rdx,[rbp+0xe00]
0x00ec3cf2: lea    rcx,[rsp+0x28]
0x00ec3cf7: call   0x1400bb700
0x00ec3cfc: nop
0x00ec3cfd: lea    rcx,[rbp+0xe00]
0x00ec3d04: call   0x140067dc0
0x00ec3d09: cmp    DWORD PTR [rdi+0x44],0xffffffff
0x00ec3d0d: je     0x140ec3d63
0x00ec3d0f: lea    rdx,[rip+0x868d3a]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec3d16: lea    rcx,[rbp+0xf40]
0x00ec3d1d: call   0x1400680e0
0x00ec3d22: nop
0x00ec3d23: lea    rdx,[rbp+0xf40]
0x00ec3d2a: mov    ecx,DWORD PTR [rdi+0x44]
0x00ec3d2d: call   0x140529cf0
0x00ec3d32: lea    rdx,[rip+0x73492b]        # 0x1415f8664 ; literal="]"
0x00ec3d39: lea    rcx,[rbp+0xf40]
0x00ec3d40: call   0x14006f4f0
0x00ec3d45: lea    rdx,[rbp+0xf40]
0x00ec3d4c: lea    rcx,[rsp+0x28]
0x00ec3d51: call   0x1400bb700
0x00ec3d56: nop
0x00ec3d57: lea    rcx,[rbp+0xf40]
0x00ec3d5e: call   0x140067dc0
0x00ec3d63: lea    rdx,[rip+0x86984e]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec3d6a: lea    rcx,[rsp+0x28]
0x00ec3d6f: call   0x1400bb870
0x00ec3d74: lea    rdx,[rip+0x86a3dd]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec3d7b: lea    rcx,[rsp+0x28]
0x00ec3d80: call   0x1400bb870
0x00ec3d85: lea    rdx,[rip+0x86a494]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec3d8c: lea    rcx,[rsp+0x28]
0x00ec3d91: call   0x1400bb870
0x00ec3d96: lea    rdx,[rip+0x86a3b3]        # 0x14172e150 ; literal="[NAME:"
0x00ec3d9d: lea    rcx,[rbp+0x240]
0x00ec3da4: call   0x14006f510
0x00ec3da9: lea    rdx,[rbp+0x3a0]
0x00ec3db0: lea    rcx,[rbp+0x240]
0x00ec3db7: call   0x1400b9ca0
0x00ec3dbc: lea    rcx,[rbp+0x240]
0x00ec3dc3: cmp    r15d,0x2
0x00ec3dc7: lea    rdx,[rip+0x86b97e]        # 0x14172f74c ; literal=" heads"
0x00ec3dce: jge    0x140ec3dd7
0x00ec3dd0: lea    rdx,[rip+0x86b96d]        # 0x14172f744 ; literal=" head"
0x00ec3dd7: call   0x14006f4f0
0x00ec3ddc: lea    rdx,[rip+0x74f621]        # 0x141613404 ; literal=":"
0x00ec3de3: lea    rcx,[rbp+0x240]
0x00ec3dea: call   0x14006f4f0
0x00ec3def: lea    rdx,[rbp+0x3a0]
0x00ec3df6: lea    rcx,[rbp+0x240]
0x00ec3dfd: call   0x1400b9ca0
0x00ec3e02: lea    rdx,[rip+0x86b943]        # 0x14172f74c ; literal=" heads"
0x00ec3e09: lea    rcx,[rbp+0x240]
0x00ec3e10: call   0x14006f4f0
0x00ec3e15: lea    rdx,[rip+0x734848]        # 0x1415f8664 ; literal="]"
0x00ec3e1c: lea    rcx,[rbp+0x240]
0x00ec3e23: call   0x14006f4f0
0x00ec3e28: lea    rdx,[rbp+0x240]
0x00ec3e2f: lea    rcx,[rsp+0x28]
0x00ec3e34: call   0x1400bb700
0x00ec3e39: lea    rdx,[rip+0x86a2e8]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec3e40: lea    rcx,[rsp+0x28]
0x00ec3e45: call   0x1400bb870
0x00ec3e4a: lea    r8,[rbp-0x2c]
0x00ec3e4e: lea    rdx,[rsp+0x28]
0x00ec3e53: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec3e58: call   0x140eb3f60
0x00ec3e5d: lea    rdx,[rip+0x86a2a4]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec3e64: lea    rcx,[rsp+0x28]
0x00ec3e69: call   0x1400bb870
0x00ec3e6e: lea    rdx,[rip+0x86a2d3]        # 0x14172e148 ; literal="[SIZE:"
0x00ec3e75: lea    rcx,[rbp+0x240]
0x00ec3e7c: call   0x14006f510
0x00ec3e81: lea    rdx,[rbp+0x240]
0x00ec3e88: mov    ecx,r14d
0x00ec3e8b: call   0x140529cf0
0x00ec3e90: lea    rdx,[rip+0x7347cd]        # 0x1415f8664 ; literal="]"
0x00ec3e97: lea    rcx,[rbp+0x240]
0x00ec3e9e: call   0x14006f4f0
0x00ec3ea3: lea    rdx,[rbp+0x240]
0x00ec3eaa: lea    rcx,[rsp+0x28]
0x00ec3eaf: call   0x1400bb700
0x00ec3eb4: lea    rdx,[rip+0x86a27d]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec3ebb: lea    rcx,[rbp+0x240]
0x00ec3ec2: call   0x14006f510
0x00ec3ec7: lea    rdx,[rbp+0x240]
0x00ec3ece: mov    ecx,ebx
0x00ec3ed0: call   0x140529cf0
0x00ec3ed5: lea    rdx,[rip+0x734788]        # 0x1415f8664 ; literal="]"
0x00ec3edc: lea    rcx,[rbp+0x240]
0x00ec3ee3: call   0x14006f4f0
0x00ec3ee8: lea    rdx,[rbp+0x240]
0x00ec3eef: lea    rcx,[rsp+0x28]
0x00ec3ef4: call   0x1400bb700
0x00ec3ef9: lea    rdx,[rip+0x86a308]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec3f00: lea    rcx,[rbp+0x240]
0x00ec3f07: call   0x14006f510
0x00ec3f0c: lea    rdx,[rbp+0x3a0]
0x00ec3f13: lea    rcx,[rbp+0x240]
0x00ec3f1a: call   0x1400b9ca0
0x00ec3f1f: lea    rcx,[rbp+0x240]
0x00ec3f26: cmp    r15d,0x2
0x00ec3f2a: lea    rdx,[rip+0x86b8df]        # 0x14172f810 ; literal=" heads are"
0x00ec3f31: jge    0x140ec3f3a
0x00ec3f33: lea    rdx,[rip+0x86b8c6]        # 0x14172f800 ; literal=" head is"
0x00ec3f3a: call   0x14006f4f0
0x00ec3f3f: lea    rdx,[rip+0x86b8e2]        # 0x14172f828 ; literal=" stretched over the instrument and used to produce sound.]"
0x00ec3f46: lea    rcx,[rbp+0x240]
0x00ec3f4d: call   0x14006f4f0
0x00ec3f52: lea    rdx,[rbp+0x240]
0x00ec3f59: lea    rcx,[rsp+0x28]
0x00ec3f5e: call   0x1400bb700
0x00ec3f63: mov    edi,DWORD PTR [rsp+0x70]
0x00ec3f67: mov    ebx,DWORD PTR [rsp+0x5c]
0x00ec3f6b: mov    r14d,DWORD PTR [rsp+0x6c]
0x00ec3f70: test   r14d,r14d
0x00ec3f73: jne    0x140ec4322
0x00ec3f79: lea    rdx,[rbp+0x520]
0x00ec3f80: lea    rcx,[rbp+0x660]
0x00ec3f87: call   0x14006f530
0x00ec3f8c: lea    rdx,[rip+0x86b88d]        # 0x14172f820 ; literal="_MALLET"
0x00ec3f93: lea    rcx,[rbp+0x660]
0x00ec3f9a: call   0x14006f4f0
0x00ec3f9f: lea    rdx,[rbp+0x660]
0x00ec3fa6: lea    rcx,[rbp-0x48]
0x00ec3faa: call   0x1400bb700
0x00ec3faf: lea    rdx,[rip+0x86961a]        # 0x14172d5d0 ; literal="[ITEM_TOOL:"
0x00ec3fb6: lea    rcx,[rbp+0x240]
0x00ec3fbd: call   0x14006f510
0x00ec3fc2: lea    rdx,[rbp+0x660]
0x00ec3fc9: lea    rcx,[rbp+0x240]
0x00ec3fd0: call   0x1400b9ca0
0x00ec3fd5: lea    rdx,[rip+0x734688]        # 0x1415f8664 ; literal="]"
0x00ec3fdc: lea    rcx,[rbp+0x240]
0x00ec3fe3: call   0x14006f4f0
0x00ec3fe8: lea    rdx,[rbp+0x240]
0x00ec3fef: lea    rcx,[rsp+0x28]
0x00ec3ff4: call   0x1400bb700
0x00ec3ff9: lea    rdx,[rip+0x7e1fd8]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec4000: lea    rcx,[rsp+0x28]
0x00ec4005: call   0x1400bb870
0x00ec400a: mov    rsi,QWORD PTR [rsp+0x50]
0x00ec400f: cmp    DWORD PTR [rsi+0x40],0xffffffff
0x00ec4013: je     0x140ec4069
0x00ec4015: lea    rdx,[rip+0x868a44]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec401c: lea    rcx,[rbp+0xe40]
0x00ec4023: call   0x1400680e0
0x00ec4028: nop
0x00ec4029: lea    rdx,[rbp+0xe40]
0x00ec4030: mov    ecx,DWORD PTR [rsi+0x40]
0x00ec4033: call   0x140529cf0
0x00ec4038: lea    rdx,[rip+0x734625]        # 0x1415f8664 ; literal="]"
0x00ec403f: lea    rcx,[rbp+0xe40]
0x00ec4046: call   0x14006f4f0
0x00ec404b: lea    rdx,[rbp+0xe40]
0x00ec4052: lea    rcx,[rsp+0x28]
0x00ec4057: call   0x1400bb700
0x00ec405c: nop
0x00ec405d: lea    rcx,[rbp+0xe40]
0x00ec4064: call   0x140067dc0
0x00ec4069: cmp    DWORD PTR [rsi+0x44],0xffffffff
0x00ec406d: je     0x140ec40c3
0x00ec406f: lea    rdx,[rip+0x8689da]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec4076: lea    rcx,[rbp+0xe60]
0x00ec407d: call   0x1400680e0
0x00ec4082: nop
0x00ec4083: lea    rdx,[rbp+0xe60]
0x00ec408a: mov    ecx,DWORD PTR [rsi+0x44]
0x00ec408d: call   0x140529cf0
0x00ec4092: lea    rdx,[rip+0x7345cb]        # 0x1415f8664 ; literal="]"
0x00ec4099: lea    rcx,[rbp+0xe60]
0x00ec40a0: call   0x14006f4f0
0x00ec40a5: lea    rdx,[rbp+0xe60]
0x00ec40ac: lea    rcx,[rsp+0x28]
0x00ec40b1: call   0x1400bb700
0x00ec40b6: nop
0x00ec40b7: lea    rcx,[rbp+0xe60]
0x00ec40be: call   0x140067dc0
0x00ec40c3: lea    rdx,[rip+0x8694ee]        # 0x14172d5b8 ; literal="[NO_DEFAULT_JOB]"
0x00ec40ca: lea    rcx,[rsp+0x28]
0x00ec40cf: call   0x1400bb870
0x00ec40d4: lea    rdx,[rip+0x86a07d]        # 0x14172e158 ; literal="[INCOMPLETE_ITEM]"
0x00ec40db: lea    rcx,[rsp+0x28]
0x00ec40e0: call   0x1400bb870
0x00ec40e5: lea    rdx,[rip+0x86a134]        # 0x14172e220 ; literal="[UNIMPROVABLE]"
0x00ec40ec: lea    rcx,[rsp+0x28]
0x00ec40f1: call   0x1400bb870
0x00ec40f6: lea    rdx,[rip+0x86a053]        # 0x14172e150 ; literal="[NAME:"
0x00ec40fd: lea    rcx,[rbp+0x240]
0x00ec4104: call   0x14006f510
0x00ec4109: lea    rdx,[rbp+0x3a0]
0x00ec4110: lea    rcx,[rbp+0x240]
0x00ec4117: call   0x1400b9ca0
0x00ec411c: lea    rdx,[rip+0x71f5fd]        # 0x1415e3720 ; literal=" "
0x00ec4123: lea    rcx,[rbp+0x240]
0x00ec412a: call   0x14006f4f0
0x00ec412f: lea    rdx,[rbp+0x4a0]
0x00ec4136: lea    rcx,[rbp+0x240]
0x00ec413d: call   0x1400b9ca0
0x00ec4142: lea    rdx,[rip+0x74f2bb]        # 0x141613404 ; literal=":"
0x00ec4149: lea    rcx,[rbp+0x240]
0x00ec4150: call   0x14006f4f0
0x00ec4155: lea    rdx,[rbp+0x3a0]
0x00ec415c: lea    rcx,[rbp+0x240]
0x00ec4163: call   0x1400b9ca0
0x00ec4168: lea    rdx,[rip+0x71f5b1]        # 0x1415e3720 ; literal=" "
0x00ec416f: lea    rcx,[rbp+0x240]
0x00ec4176: call   0x14006f4f0
0x00ec417b: lea    rdx,[rbp+0x500]
0x00ec4182: lea    rcx,[rbp+0x240]
0x00ec4189: call   0x1400b9ca0
0x00ec418e: lea    rdx,[rip+0x7344cf]        # 0x1415f8664 ; literal="]"
0x00ec4195: lea    rcx,[rbp+0x240]
0x00ec419c: call   0x14006f4f0
0x00ec41a1: lea    rdx,[rbp+0x240]
0x00ec41a8: lea    rcx,[rsp+0x28]
0x00ec41ad: call   0x1400bb700
0x00ec41b2: lea    rdx,[rip+0x869f6f]        # 0x14172e128 ; literal="[VALUE:10]"
0x00ec41b9: lea    rcx,[rsp+0x28]
0x00ec41be: call   0x1400bb870
0x00ec41c3: lea    r8,[rbp+0x0]
0x00ec41c7: lea    rdx,[rsp+0x28]
0x00ec41cc: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec41d1: call   0x140eb4380
0x00ec41d6: lea    rdx,[rip+0x869f2b]        # 0x14172e108 ; literal="[TILE:155][UNIMPROVABLE]"
0x00ec41dd: lea    rcx,[rsp+0x28]
0x00ec41e2: call   0x1400bb870
0x00ec41e7: lea    rdx,[rip+0x869f5a]        # 0x14172e148 ; literal="[SIZE:"
0x00ec41ee: lea    rcx,[rbp+0x240]
0x00ec41f5: call   0x14006f510
0x00ec41fa: lea    rdx,[rbp+0x240]
0x00ec4201: mov    ecx,0x3e8
0x00ec4206: call   0x140529cf0
0x00ec420b: lea    rdx,[rip+0x734452]        # 0x1415f8664 ; literal="]"
0x00ec4212: lea    rcx,[rbp+0x240]
0x00ec4219: call   0x14006f4f0
0x00ec421e: lea    rdx,[rbp+0x240]
0x00ec4225: lea    rcx,[rsp+0x28]
0x00ec422a: call   0x1400bb700
0x00ec422f: lea    rdx,[rip+0x869f02]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec4236: lea    rcx,[rbp+0x240]
0x00ec423d: call   0x14006f510
0x00ec4242: lea    rdx,[rbp+0x240]
0x00ec4249: mov    ecx,0x3
0x00ec424e: call   0x140529cf0
0x00ec4253: lea    rdx,[rip+0x73440a]        # 0x1415f8664 ; literal="]"
0x00ec425a: lea    rcx,[rbp+0x240]
0x00ec4261: call   0x14006f4f0
0x00ec4266: lea    rdx,[rbp+0x240]
0x00ec426d: lea    rcx,[rsp+0x28]
0x00ec4272: call   0x1400bb700
0x00ec4277: lea    rdx,[rip+0x869f8a]        # 0x14172e208 ; literal="[DESCRIPTION:The "
0x00ec427e: lea    rcx,[rbp+0x240]
0x00ec4285: call   0x14006f510
0x00ec428a: lea    rdx,[rbp+0x3a0]
0x00ec4291: lea    rcx,[rbp+0x240]
0x00ec4298: call   0x1400b9ca0
0x00ec429d: lea    rdx,[rip+0x71f47c]        # 0x1415e3720 ; literal=" "
0x00ec42a4: lea    rcx,[rbp+0x240]
0x00ec42ab: call   0x14006f4f0
0x00ec42b0: mov    esi,DWORD PTR [rsp+0x64]
0x00ec42b4: lea    rcx,[rbp+0x240]
0x00ec42bb: test   esi,esi
0x00ec42bd: jne    0x140ec42dd
0x00ec42bf: lea    rdx,[rbp+0x500]
0x00ec42c6: call   0x1400b9ca0
0x00ec42cb: lea    rdx,[rip+0x7258ae]        # 0x1415e9b80 ; literal=" are"
0x00ec42d2: jmp    0x140ec42f0
0x00ec42d4: mov    edi,DWORD PTR [rsp+0x70]
0x00ec42d8: jmp    0x140ec3f6b
0x00ec42dd: lea    rdx,[rbp+0x4a0]
0x00ec42e4: call   0x1400b9ca0
0x00ec42e9: lea    rdx,[rip+0x725898]        # 0x1415e9b88 ; literal=" is"
0x00ec42f0: lea    rcx,[rbp+0x240]
0x00ec42f7: call   0x14006f4f0
0x00ec42fc: lea    rdx,[rip+0x86b49d]        # 0x14172f7a0 ; literal=" used by the musician to strike the instrument and produce sound.]"
0x00ec4303: lea    rcx,[rbp+0x240]
0x00ec430a: call   0x14006f4f0
0x00ec430f: lea    rdx,[rbp+0x240]
0x00ec4316: lea    rcx,[rsp+0x28]
0x00ec431b: call   0x1400bb700
0x00ec4320: jmp    0x140ec4326
0x00ec4322: mov    esi,DWORD PTR [rsp+0x64]
0x00ec4326: lea    rdx,[rip+0x869fb3]        # 0x14172e2e0 ; literal="[ITEM_INSTRUMENT:"
0x00ec432d: lea    rcx,[rbp+0x240]
0x00ec4334: call   0x14006f510
0x00ec4339: lea    rdx,[rbp+0x520]
0x00ec4340: lea    rcx,[rbp+0x240]
0x00ec4347: call   0x1400b9ca0
0x00ec434c: lea    rdx,[rip+0x734311]        # 0x1415f8664 ; literal="]"
0x00ec4353: lea    rcx,[rbp+0x240]
0x00ec435a: call   0x14006f4f0
0x00ec435f: lea    rdx,[rbp+0x240]
0x00ec4366: lea    rcx,[rsp+0x28]
0x00ec436b: call   0x1400bb700
0x00ec4370: lea    rdx,[rip+0x7e1c61]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec4377: lea    rcx,[rsp+0x28]
0x00ec437c: call   0x1400bb870
0x00ec4381: mov    rax,QWORD PTR [rsp+0x50]
0x00ec4386: cmp    DWORD PTR [rax+0x40],0xffffffff
0x00ec438a: je     0x140ec43ea
0x00ec438c: lea    rdx,[rip+0x8686cd]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec4393: lea    rcx,[rbp+0xe80]
0x00ec439a: call   0x1400680e0
0x00ec439f: nop
0x00ec43a0: lea    rdx,[rbp+0xe80]
0x00ec43a7: mov    rax,QWORD PTR [rsp+0x50]
0x00ec43ac: mov    ecx,DWORD PTR [rax+0x40]
0x00ec43af: call   0x140529cf0
0x00ec43b4: lea    rdx,[rip+0x7342a9]        # 0x1415f8664 ; literal="]"
0x00ec43bb: lea    rcx,[rbp+0xe80]
0x00ec43c2: call   0x14006f4f0
0x00ec43c7: lea    rdx,[rbp+0xe80]
0x00ec43ce: lea    rcx,[rsp+0x28]
0x00ec43d3: call   0x1400bb700
0x00ec43d8: nop
0x00ec43d9: lea    rcx,[rbp+0xe80]
0x00ec43e0: call   0x140067dc0
0x00ec43e5: mov    rax,QWORD PTR [rsp+0x50]
0x00ec43ea: cmp    DWORD PTR [rax+0x44],0xffffffff
0x00ec43ee: je     0x140ec4449
0x00ec43f0: lea    rdx,[rip+0x868659]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec43f7: lea    rcx,[rbp+0xea0]
0x00ec43fe: call   0x1400680e0
0x00ec4403: nop
0x00ec4404: lea    rdx,[rbp+0xea0]
0x00ec440b: mov    rax,QWORD PTR [rsp+0x50]
0x00ec4410: mov    ecx,DWORD PTR [rax+0x44]
0x00ec4413: call   0x140529cf0
0x00ec4418: lea    rdx,[rip+0x734245]        # 0x1415f8664 ; literal="]"
0x00ec441f: lea    rcx,[rbp+0xea0]
0x00ec4426: call   0x14006f4f0
0x00ec442b: lea    rdx,[rbp+0xea0]
0x00ec4432: lea    rcx,[rsp+0x28]
0x00ec4437: call   0x1400bb700
0x00ec443c: nop
0x00ec443d: lea    rcx,[rbp+0xea0]
0x00ec4444: call   0x140067dc0
0x00ec4449: lea    rdx,[rip+0x869d00]        # 0x14172e150 ; literal="[NAME:"
0x00ec4450: lea    rcx,[rbp+0x240]
0x00ec4457: call   0x14006f510
0x00ec445c: lea    rdx,[rbp+0x3a0]
0x00ec4463: lea    rcx,[rbp+0x240]
0x00ec446a: call   0x1400b9ca0
0x00ec446f: lea    rdx,[rip+0x74ef8e]        # 0x141613404 ; literal=":"
0x00ec4476: lea    rcx,[rbp+0x240]
0x00ec447d: call   0x14006f4f0
0x00ec4482: lea    rdx,[rbp+0x3a0]
0x00ec4489: lea    rcx,[rbp+0x240]
0x00ec4490: call   0x1400b9ca0
0x00ec4495: lea    rdx,[rip+0x7341c8]        # 0x1415f8664 ; literal="]"
0x00ec449c: lea    rcx,[rbp+0x240]
0x00ec44a3: call   0x14006f4f0
0x00ec44a8: lea    rdx,[rbp+0x240]
0x00ec44af: lea    rcx,[rsp+0x28]
0x00ec44b4: call   0x1400bb700
0x00ec44b9: lea    rdx,[rip+0x869e88]        # 0x14172e348 ; literal="[VALUE:50]"
0x00ec44c0: lea    rcx,[rsp+0x28]
0x00ec44c5: call   0x1400bb870
0x00ec44ca: lea    rdx,[rip+0x869c77]        # 0x14172e148 ; literal="[SIZE:"
0x00ec44d1: lea    rcx,[rbp+0x240]
0x00ec44d8: call   0x14006f510
0x00ec44dd: lea    rdx,[rbp+0x240]
0x00ec44e4: mov    ecx,edi
0x00ec44e6: call   0x140529cf0
0x00ec44eb: lea    rdx,[rip+0x734172]        # 0x1415f8664 ; literal="]"
0x00ec44f2: lea    rcx,[rbp+0x240]
0x00ec44f9: call   0x14006f4f0
0x00ec44fe: lea    rdx,[rbp+0x240]
0x00ec4505: lea    rcx,[rsp+0x28]
0x00ec450a: call   0x1400bb700
0x00ec450f: test   r12b,r12b
0x00ec4512: jne    0x140ec4586
0x00ec4514: test   ebx,ebx
0x00ec4516: je     0x140ec4586
0x00ec4518: test   r14d,r14d
0x00ec451b: je     0x140ec4586
0x00ec451d: lea    rdx,[rip+0x869c14]        # 0x14172e138 ; literal="[MATERIAL_SIZE:"
0x00ec4524: lea    rcx,[rbp+0x240]
0x00ec452b: call   0x14006f510
0x00ec4530: mov    ecx,0x6
0x00ec4535: cmp    edi,0x9c40
0x00ec453b: mov    eax,0x3
0x00ec4540: cmovl  ecx,eax
0x00ec4543: lea    rdx,[rbp+0x240]
0x00ec454a: call   0x140529cf0
0x00ec454f: lea    rdx,[rip+0x73410e]        # 0x1415f8664 ; literal="]"
0x00ec4556: lea    rcx,[rbp+0x240]
0x00ec455d: call   0x14006f4f0
0x00ec4562: lea    rdx,[rbp+0x240]
0x00ec4569: lea    rcx,[rsp+0x28]
0x00ec456e: call   0x1400bb700
0x00ec4573: lea    r8,[rbp-0x54]
0x00ec4577: lea    rdx,[rsp+0x28]
0x00ec457c: mov    rcx,QWORD PTR [rsp+0x78]
0x00ec4581: call   0x140eb4380
0x00ec4586: cmp    edi,0x9c40
0x00ec458c: jge    0x140ec4593
0x00ec458e: test   r12b,r12b
0x00ec4591: je     0x140ec45a9
0x00ec4593: lea    rdx,[rip+0x869d96]        # 0x14172e330 ; literal="[PLACED_AS_BUILDING]"
0x00ec459a: lea    rcx,[rsp+0x28]
0x00ec459f: call   0x1400bb870
0x00ec45a4: test   r12b,r12b
0x00ec45a7: jne    0x140ec45b6
0x00ec45a9: test   ebx,ebx
0x00ec45ab: je     0x140ec45b6
0x00ec45ad: test   r14d,r14d
0x00ec45b0: jne    0x140ec4842
0x00ec45b6: lea    rdx,[rip+0x869e4b]        # 0x14172e408 ; literal="[DOMINANT_MATERIAL_PIECE:BODY]"
0x00ec45bd: lea    rcx,[rsp+0x28]
0x00ec45c2: call   0x1400bb870
0x00ec45c7: lea    rdx,[rip+0x869e22]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec45ce: lea    rcx,[rbp+0x240]
0x00ec45d5: call   0x14006f510
0x00ec45da: lea    rdx,[rip+0x869dcb]        # 0x14172e3ac ; literal="BODY:"
0x00ec45e1: lea    rcx,[rbp+0x240]
0x00ec45e8: call   0x14006f4f0
0x00ec45ed: lea    rdx,[rbp+0x6c0]
0x00ec45f4: lea    rcx,[rbp+0x240]
0x00ec45fb: call   0x1400b9ca0
0x00ec4600: lea    rdx,[rip+0x74edfd]        # 0x141613404 ; literal=":"
0x00ec4607: lea    rcx,[rbp+0x240]
0x00ec460e: call   0x14006f4f0
0x00ec4613: lea    rdx,[rbp+0x380]
0x00ec461a: lea    rcx,[rbp+0x240]
0x00ec4621: call   0x1400b9ca0
0x00ec4626: lea    rdx,[rip+0x74edd7]        # 0x141613404 ; literal=":"
0x00ec462d: lea    rcx,[rbp+0x240]
0x00ec4634: call   0x14006f4f0
0x00ec4639: lea    rdx,[rbp+0x400]
0x00ec4640: lea    rcx,[rbp+0x240]
0x00ec4647: call   0x1400b9ca0
0x00ec464c: lea    rcx,[rbp+0x240]
0x00ec4653: cmp    r15d,0x2
0x00ec4657: lea    rdx,[rip+0x869e22]        # 0x14172e480 ; literal=":ALWAYS_PLURAL]"
0x00ec465e: jge    0x140ec4667
0x00ec4660: lea    rdx,[rip+0x869d51]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec4667: call   0x14006f4f0
0x00ec466c: lea    rdx,[rbp+0x240]
0x00ec4673: lea    rcx,[rsp+0x28]
0x00ec4678: call   0x1400bb700
0x00ec467d: test   r12b,r12b
0x00ec4680: je     0x140ec46f2
0x00ec4682: lea    rdx,[rip+0x869d67]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec4689: lea    rcx,[rbp+0x240]
0x00ec4690: call   0x14006f510
0x00ec4695: lea    rdx,[rip+0x86b0fc]        # 0x14172f798 ; literal="STAND:"
0x00ec469c: lea    rcx,[rbp+0x240]
0x00ec46a3: call   0x14006f4f0
0x00ec46a8: lea    rdx,[rbp+0x6a0]
0x00ec46af: lea    rcx,[rbp+0x240]
0x00ec46b6: call   0x1400b9ca0
0x00ec46bb: lea    rdx,[rip+0x86b12e]        # 0x14172f7f0 ; literal=":stand:stands"
0x00ec46c2: lea    rcx,[rbp+0x240]
0x00ec46c9: call   0x14006f4f0
0x00ec46ce: lea    rdx,[rip+0x869ce3]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec46d5: lea    rcx,[rbp+0x240]
0x00ec46dc: call   0x14006f4f0
0x00ec46e1: lea    rdx,[rbp+0x240]
0x00ec46e8: lea    rcx,[rsp+0x28]
0x00ec46ed: call   0x1400bb700
0x00ec46f2: test   ebx,ebx
0x00ec46f4: jne    0x140ec4785
0x00ec46fa: lea    rdx,[rip+0x869cef]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec4701: lea    rcx,[rbp+0x240]
0x00ec4708: call   0x14006f510
0x00ec470d: lea    rdx,[rip+0x86b0d0]        # 0x14172f7e4 ; literal="HEAD:"
0x00ec4714: lea    rcx,[rbp+0x240]
0x00ec471b: call   0x14006f4f0
0x00ec4720: lea    rdx,[rbp+0x680]
0x00ec4727: lea    rcx,[rbp+0x240]
0x00ec472e: call   0x1400b9ca0
0x00ec4733: lea    rcx,[rbp+0x240]
0x00ec473a: cmp    r15d,0x2
0x00ec473e: jl     0x140ec4755
0x00ec4740: lea    rdx,[rip+0x86b1d1]        # 0x14172f918 ; literal=":heads:heads"
0x00ec4747: call   0x14006f4f0
0x00ec474c: lea    rdx,[rip+0x869d2d]        # 0x14172e480 ; literal=":ALWAYS_PLURAL]"
0x00ec4753: jmp    0x140ec4768
0x00ec4755: lea    rdx,[rip+0x86b1ac]        # 0x14172f908 ; literal=":head:heads"
0x00ec475c: call   0x14006f4f0
0x00ec4761: lea    rdx,[rip+0x869c50]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec4768: lea    rcx,[rbp+0x240]
0x00ec476f: call   0x14006f4f0
0x00ec4774: lea    rdx,[rbp+0x240]
0x00ec477b: lea    rcx,[rsp+0x28]
0x00ec4780: call   0x1400bb700
0x00ec4785: test   r14d,r14d
0x00ec4788: jne    0x140ec4842
0x00ec478e: lea    rdx,[rip+0x869c5b]        # 0x14172e3f0 ; literal="[INSTRUMENT_PIECE:"
0x00ec4795: lea    rcx,[rbp+0x240]
0x00ec479c: call   0x14006f510
0x00ec47a1: lea    rdx,[rip+0x86b198]        # 0x14172f940 ; literal="MALLET:"
0x00ec47a8: lea    rcx,[rbp+0x240]
0x00ec47af: call   0x14006f4f0
0x00ec47b4: lea    rdx,[rbp+0x660]
0x00ec47bb: lea    rcx,[rbp+0x240]
0x00ec47c2: call   0x1400b9ca0
0x00ec47c7: lea    rdx,[rip+0x74ec36]        # 0x141613404 ; literal=":"
0x00ec47ce: lea    rcx,[rbp+0x240]
0x00ec47d5: call   0x14006f4f0
0x00ec47da: lea    rdx,[rbp+0x4a0]
0x00ec47e1: lea    rcx,[rbp+0x240]
0x00ec47e8: call   0x1400b9ca0
0x00ec47ed: lea    rdx,[rip+0x74ec10]        # 0x141613404 ; literal=":"
0x00ec47f4: lea    rcx,[rbp+0x240]
0x00ec47fb: call   0x14006f4f0
0x00ec4800: lea    rdx,[rbp+0x500]
0x00ec4807: lea    rcx,[rbp+0x240]
0x00ec480e: call   0x1400b9ca0
0x00ec4813: lea    rcx,[rbp+0x240]
0x00ec481a: test   esi,esi
0x00ec481c: lea    rdx,[rip+0x869c5d]        # 0x14172e480 ; literal=":ALWAYS_PLURAL]"
0x00ec4823: je     0x140ec482c
0x00ec4825: lea    rdx,[rip+0x869b8c]        # 0x14172e3b8 ; literal=":STANDARD]"
0x00ec482c: call   0x14006f4f0
0x00ec4831: lea    rdx,[rbp+0x240]
0x00ec4838: lea    rcx,[rsp+0x28]
0x00ec483d: call   0x1400bb700
0x00ec4842: lea    rdx,[rip+0x869e0f]        # 0x14172e658 ; literal="[VOLUME_mB:"
0x00ec4849: lea    rcx,[rbp+0x240]
0x00ec4850: call   0x14006f510
0x00ec4855: lea    rdx,[rbp+0x240]
0x00ec485c: xor    ecx,ecx
0x00ec485e: call   0x140529cf0
0x00ec4863: lea    rdx,[rip+0x74eb9a]        # 0x141613404 ; literal=":"
0x00ec486a: lea    rcx,[rbp+0x240]
0x00ec4871: call   0x14006f4f0
0x00ec4876: lea    rdx,[rbp+0x240]
0x00ec487d: mov    ecx,0x2710
0x00ec4882: call   0x140529cf0
0x00ec4887: lea    rdx,[rip+0x733dd6]        # 0x1415f8664 ; literal="]"
0x00ec488e: lea    rcx,[rbp+0x240]
0x00ec4895: call   0x14006f4f0
0x00ec489a: lea    rdx,[rbp+0x240]
0x00ec48a1: lea    rcx,[rsp+0x28]
0x00ec48a6: call   0x1400bb700
0x00ec48ab: cmp    edi,0x9c40
0x00ec48b1: jl     0x140ec48c8
0x00ec48b3: test   ebx,ebx
0x00ec48b5: jne    0x140ec48c8
0x00ec48b7: lea    rdx,[rip+0x86b06a]        # 0x14172f928 ; literal="[INDEFINITE_PITCH]"
0x00ec48be: lea    rcx,[rsp+0x28]
0x00ec48c3: call   0x1400bb870
0x00ec48c8: xor    sil,sil
0x00ec48cb: xor    r12b,r12b
0x00ec48ce: mov    BYTE PTR [rsp+0x58],sil
0x00ec48d3: mov    BYTE PTR [rsp+0x44],sil
0x00ec48d8: mov    BYTE PTR [rsp+0x59],sil
0x00ec48dd: mov    BYTE PTR [rsp+0x4a],sil
0x00ec48e2: test   r14d,r14d
0x00ec48e5: jne    0x140ec49c3
0x00ec48eb: test   ebx,ebx
0x00ec48ed: jne    0x140ec4936
0x00ec48ef: mov    ecx,0x5
0x00ec48f4: call   0x140071ec0
0x00ec48f9: lea    rcx,[rsp+0x28]
0x00ec48fe: test   eax,eax
0x00ec4900: je     0x140ec491c
0x00ec4902: lea    rdx,[rip+0x86af87]        # 0x14172f890 ; literal="[SOUND_PRODUCTION:STRUCK:MALLET:HEAD]"
0x00ec4909: call   0x1400bb870
0x00ec490e: mov    sil,0x1
0x00ec4911: movzx  r14d,BYTE PTR [rsp+0x20]
0x00ec4917: jmp    0x140ec4ace
0x00ec491c: lea    rdx,[rip+0x86af45]        # 0x14172f868 ; literal="[SOUND_PRODUCTION:SCRAPED:MALLET:HEAD]"
0x00ec4923: call   0x1400bb870
0x00ec4928: mov    r12b,0x1
0x00ec492b: movzx  r14d,BYTE PTR [rsp+0x20]
0x00ec4931: jmp    0x140ec4ace
0x00ec4936: lea    rdx,[rip+0x86ada7]        # 0x14172f6e4 ; literal="bowls"
0x00ec493d: lea    rcx,[rbp+0x400]
0x00ec4944: call   0x14006fe10
0x00ec4949: test   al,al
0x00ec494b: je     0x140ec497c
0x00ec494d: mov    ecx,0xf
0x00ec4952: call   0x140071ec0
0x00ec4957: test   eax,eax
0x00ec4959: jne    0x140ec497c
0x00ec495b: lea    rdx,[rip+0x86af7e]        # 0x14172f8e0 ; literal="[SOUND_PRODUCTION:FRICTION:MALLET:BODY]"
0x00ec4962: lea    rcx,[rsp+0x28]
0x00ec4967: call   0x1400bb870
0x00ec496c: mov    BYTE PTR [rsp+0x58],0x1
0x00ec4971: movzx  r14d,BYTE PTR [rsp+0x20]
0x00ec4977: jmp    0x140ec4ace
0x00ec497c: mov    ecx,0x5
0x00ec4981: call   0x140071ec0
0x00ec4986: lea    rcx,[rsp+0x28]
0x00ec498b: test   eax,eax
0x00ec498d: je     0x140ec49a9
0x00ec498f: lea    rdx,[rip+0x86af22]        # 0x14172f8b8 ; literal="[SOUND_PRODUCTION:STRUCK:MALLET:BODY]"
0x00ec4996: call   0x1400bb870
0x00ec499b: mov    sil,0x1
0x00ec499e: movzx  r14d,BYTE PTR [rsp+0x20]
0x00ec49a4: jmp    0x140ec4ace
0x00ec49a9: lea    rdx,[rip+0x86b058]        # 0x14172fa08 ; literal="[SOUND_PRODUCTION:SCRAPED:MALLET:BODY]"
0x00ec49b0: call   0x1400bb870
0x00ec49b5: mov    r12b,0x1
0x00ec49b8: movzx  r14d,BYTE PTR [rsp+0x20]
0x00ec49be: jmp    0x140ec4ace
0x00ec49c3: movzx  r14d,BYTE PTR [rsp+0x20]
0x00ec49c9: test   r14b,r14b
0x00ec49cc: je     0x140ec4a05
0x00ec49ce: test   ebx,ebx
0x00ec49d0: je     0x140ec4a09
0x00ec49d2: mov    ecx,0x3
0x00ec49d7: call   0x140071ec0
0x00ec49dc: lea    rcx,[rsp+0x28]
0x00ec49e1: test   eax,eax
0x00ec49e3: je     0x140ec49f9
0x00ec49e5: lea    rdx,[rip+0x86b06c]        # 0x14172fa58 ; literal="[SOUND_PRODUCTION:STRUCK_BY_BP:BODY]"
0x00ec49ec: call   0x1400bb870
0x00ec49f1: mov    sil,0x1
0x00ec49f4: jmp    0x140ec4ace
0x00ec49f9: lea    rdx,[rip+0x86b030]        # 0x14172fa30 ; literal="[SOUND_PRODUCTION:PLUCKED_BY_BP:BODY]"
0x00ec4a00: jmp    0x140ec4ac4
0x00ec4a05: test   ebx,ebx
0x00ec4a07: jne    0x140ec4a22
0x00ec4a09: lea    rdx,[rip+0x86afd0]        # 0x14172f9e0 ; literal="[SOUND_PRODUCTION:STRUCK_BY_BP:HEAD]"
0x00ec4a10: lea    rcx,[rsp+0x28]
0x00ec4a15: call   0x1400bb870
0x00ec4a1a: mov    sil,0x1
0x00ec4a1d: jmp    0x140ec4ace
0x00ec4a22: mov    ebx,0x3
0x00ec4a27: mov    ecx,ebx
0x00ec4a29: call   0x140071ec0
0x00ec4a2e: test   eax,eax
0x00ec4a30: je     0x140ec4a4b
0x00ec4a32: lea    rdx,[rip+0x86af37]        # 0x14172f970 ; literal="[SOUND_PRODUCTION:STRUCK_BY_BP:SELF]"
0x00ec4a39: lea    rcx,[rsp+0x28]
0x00ec4a3e: call   0x1400bb870
0x00ec4a43: mov    sil,0x1
0x00ec4a46: jmp    0x140ec4ace
0x00ec4a4b: mov    ecx,ebx
0x00ec4a4d: call   0x140071ec0
0x00ec4a52: test   eax,eax
0x00ec4a54: je     0x140ec4ab8
0x00ec4a56: sub    eax,0x1
0x00ec4a59: je     0x140ec4a78
0x00ec4a5b: cmp    eax,0x1
0x00ec4a5e: jne    0x140ec4ace
0x00ec4a60: lea    rdx,[rip+0x86af31]        # 0x14172f998 ; literal="[SOUND_PRODUCTION:SHAKEN:SELF]"
0x00ec4a67: lea    rcx,[rsp+0x28]
0x00ec4a6c: call   0x1400bb870
0x00ec4a71: mov    BYTE PTR [rsp+0x59],0x1
0x00ec4a76: jmp    0x140ec4ace
0x00ec4a78: lea    rcx,[rsp+0x28]
0x00ec4a7d: cmp    r15d,0x2
0x00ec4a81: jl     0x140ec4aa7
0x00ec4a83: lea    rdx,[rip+0x86af2e]        # 0x14172f9b8 ; literal="[SOUND_PRODUCTION:STRUCK_TOGETHER:SELF]"
0x00ec4a8a: call   0x1400bb870
0x00ec4a8f: movzx  r13d,r13b
0x00ec4a93: cmp    r15d,0x2
0x00ec4a97: mov    eax,0x0
0x00ec4a9c: cmove  r13d,eax
0x00ec4aa0: mov    BYTE PTR [rsp+0x4a],0x1
0x00ec4aa5: jmp    0x140ec4ace
0x00ec4aa7: lea    rdx,[rip+0x86aec2]        # 0x14172f970 ; literal="[SOUND_PRODUCTION:STRUCK_BY_BP:SELF]"
0x00ec4aae: call   0x1400bb870
0x00ec4ab3: mov    sil,0x1
0x00ec4ab6: jmp    0x140ec4ace
0x00ec4ab8: lea    rdx,[rip+0x86ae89]        # 0x14172f948 ; literal="[SOUND_PRODUCTION:PLUCKED_BY_BP:SELF]"
0x00ec4abf: lea    rcx,[rsp+0x28]
0x00ec4ac4: call   0x1400bb870
0x00ec4ac9: mov    BYTE PTR [rsp+0x44],0x1
0x00ec4ace: xor    bl,bl
0x00ec4ad0: mov    eax,DWORD PTR [rsp+0x5c]
0x00ec4ad4: cmp    edi,0x9c40
0x00ec4ada: jge    0x140ec4af7
0x00ec4adc: test   eax,eax
0x00ec4ade: jne    0x140ec4af7
0x00ec4ae0: lea    rdx,[rip+0x86b031]        # 0x14172fb18 ; literal="[PITCH_CHOICE:MEMBRANE_POSITION:HEAD]"
0x00ec4ae7: lea    rcx,[rsp+0x28]
0x00ec4aec: call   0x1400bb870
0x00ec4af1: mov    bl,0x1
0x00ec4af3: mov    eax,DWORD PTR [rsp+0x5c]
0x00ec4af7: test   r13b,r13b
0x00ec4afa: je     0x140ec4b31
0x00ec4afc: test   eax,eax
0x00ec4afe: je     0x140ec4b1e
0x00ec4b00: test   r14b,r14b
0x00ec4b03: jne    0x140ec4b15
0x00ec4b05: cmp    DWORD PTR [rsp+0x6c],0x0
0x00ec4b0a: je     0x140ec4b15
0x00ec4b0c: lea    rdx,[rip+0x86a355]        # 0x14172ee68 ; literal="[PITCH_CHOICE:SUBPART_CHOICE:SELF]"
0x00ec4b13: jmp    0x140ec4b25
0x00ec4b15: lea    rdx,[rip+0x86b044]        # 0x14172fb60 ; literal="[PITCH_CHOICE:SUBPART_CHOICE:BODY]"
0x00ec4b1c: jmp    0x140ec4b25
0x00ec4b1e: lea    rdx,[rip+0x86afcb]        # 0x14172faf0 ; literal="[PITCH_CHOICE:SUBPART_CHOICE:HEAD]"
0x00ec4b25: lea    rcx,[rsp+0x28]
0x00ec4b2a: call   0x1400bb870
0x00ec4b2f: mov    bl,0x1
0x00ec4b31: mov    eax,DWORD PTR [rsp+0x5c]
0x00ec4b35: cmp    edi,0x9c40
0x00ec4b3b: jge    0x140ec4b56
0x00ec4b3d: test   eax,eax
0x00ec4b3f: jne    0x140ec4b56
0x00ec4b41: lea    rdx,[rip+0x86aff8]        # 0x14172fb40 ; literal="[TUNING:TIGHTENING:HEAD]"
0x00ec4b48: lea    rcx,[rsp+0x28]
0x00ec4b4d: call   0x1400bb870
0x00ec4b52: mov    eax,DWORD PTR [rsp+0x5c]
0x00ec4b56: xor    ecx,ecx
0x00ec4b58: mov    r14d,ecx
0x00ec4b5b: mov    edi,ecx
0x00ec4b5d: mov    r13d,DWORD PTR [rsp+0x70]
0x00ec4b62: cmp    r13d,0x9c40
0x00ec4b69: jl     0x140ec4b73
0x00ec4b6b: test   eax,eax
0x00ec4b6d: je     0x140ec4c52
0x00ec4b73: mov    eax,0x13880
0x00ec4b78: sub    eax,r13d
0x00ec4b7b: imul   ecx,eax,0x12c0
0x00ec4b81: mov    eax,0x68db8bad
0x00ec4b86: imul   ecx
0x00ec4b88: sar    edx,0xf
0x00ec4b8b: mov    r14d,edx
0x00ec4b8e: shr    r14d,0x1f
0x00ec4b92: add    edx,0xfffff6a0
0x00ec4b98: add    r14d,edx
0x00ec4b9b: mov    ecx,0xd
0x00ec4ba0: call   0x140071ec0
0x00ec4ba5: add    eax,0xc
0x00ec4ba8: imul   ecx,eax,0x64
0x00ec4bab: cmp    r15d,0x14
0x00ec4baf: jl     0x140ec4bb9
0x00ec4bb1: add    ecx,0x960
0x00ec4bb7: jmp    0x140ec4be1
0x00ec4bb9: cmp    r15d,0xe
0x00ec4bbd: jl     0x140ec4bc7
0x00ec4bbf: add    ecx,0x708
0x00ec4bc5: jmp    0x140ec4be1
0x00ec4bc7: cmp    r15d,0xa
0x00ec4bcb: jl     0x140ec4bd5
0x00ec4bcd: add    ecx,0x4b0
0x00ec4bd3: jmp    0x140ec4be1
0x00ec4bd5: cmp    r15d,0x6
0x00ec4bd9: jl     0x140ec4be1
0x00ec4bdb: add    ecx,0x258
0x00ec4be1: xor    eax,eax
0x00ec4be3: test   bl,bl
0x00ec4be5: cmovne edi,ecx
0x00ec4be8: add    edi,r14d
0x00ec4beb: lea    rdx,[rip+0x8699f6]        # 0x14172e5e8 ; literal="[PITCH_RANGE:"
0x00ec4bf2: lea    rcx,[rbp+0x240]
0x00ec4bf9: call   0x14006f510
0x00ec4bfe: lea    rdx,[rbp+0x240]
0x00ec4c05: mov    ecx,r14d
0x00ec4c08: call   0x140529cf0
0x00ec4c0d: lea    rdx,[rip+0x74e7f0]        # 0x141613404 ; literal=":"
0x00ec4c14: lea    rcx,[rbp+0x240]
0x00ec4c1b: call   0x14006f4f0
0x00ec4c20: lea    rdx,[rbp+0x240]
0x00ec4c27: mov    ecx,edi
0x00ec4c29: call   0x140529cf0
0x00ec4c2e: lea    rdx,[rip+0x733a2f]        # 0x1415f8664 ; literal="]"
0x00ec4c35: lea    rcx,[rbp+0x240]
0x00ec4c3c: call   0x14006f4f0
0x00ec4c41: lea    rdx,[rbp+0x240]
0x00ec4c48: lea    rcx,[rsp+0x28]
0x00ec4c4d: call   0x1400bb700
0x00ec4c52: lea    rcx,[rbp+0x148]
0x00ec4c59: call   0x140296b90
0x00ec4c5e: nop
0x00ec4c5f: xor    r9d,r9d
0x00ec4c62: mov    r8d,edi
0x00ec4c65: mov    edx,r14d
0x00ec4c68: lea    rcx,[rbp+0x148]
0x00ec4c6f: call   0x140eb2f60
0x00ec4c74: lea    rdx,[rbp+0x148]
0x00ec4c7b: lea    rcx,[rsp+0x28]
0x00ec4c80: call   0x140eb36d0
0x00ec4c85: lea    rdx,[rip+0x86ae0c]        # 0x14172fa98 ; literal="[MUSIC_SKILL:PLAY_PERCUSSION_INSTRUMENT]"
0x00ec4c8c: lea    rcx,[rsp+0x28]
0x00ec4c91: call   0x1400bb870
0x00ec4c96: lea    rdx,[rip+0x86995b]        # 0x14172e5f8 ; literal="[DESCRIPTION:"
0x00ec4c9d: lea    rcx,[rbp+0x240]
0x00ec4ca4: call   0x14006f510
0x00ec4ca9: lea    rcx,[rbp+0x2c0]
0x00ec4cb0: call   0x14006f620
0x00ec4cb5: nop
0x00ec4cb6: lea    rdx,[rip+0x723d07]        # 0x1415e89c4 ; literal="The "
0x00ec4cbd: lea    rcx,[rbp+0x2c0]
0x00ec4cc4: call   0x14006f510
0x00ec4cc9: lea    rdx,[rbp+0x3a0]
0x00ec4cd0: lea    rcx,[rbp+0x2c0]
0x00ec4cd7: call   0x1400b9ca0
0x00ec4cdc: lea    rdx,[rip+0x77f911]        # 0x1416445f4 ; literal=" is a "
0x00ec4ce3: lea    rcx,[rbp+0x2c0]
0x00ec4cea: call   0x14006f4f0
0x00ec4cef: cmp    r13d,0xea60
0x00ec4cf6: jl     0x140ec4d15
0x00ec4cf8: lea    rdx,[rip+0x869949]        # 0x14172e648 ; literal="huge stationary"
0x00ec4cff: lea    rcx,[rbp+0x2c0]
0x00ec4d06: call   0x14006f4f0
0x00ec4d0b: movzx  ebx,BYTE PTR [rsp+0x20]
0x00ec4d10: jmp    0x140ec4dd1
0x00ec4d15: cmp    r13d,0x9c40
0x00ec4d1c: jl     0x140ec4d3b
0x00ec4d1e: lea    rdx,[rip+0x86990b]        # 0x14172e630 ; literal="large stationary"
0x00ec4d25: lea    rcx,[rbp+0x2c0]
0x00ec4d2c: call   0x14006f4f0
0x00ec4d31: movzx  ebx,BYTE PTR [rsp+0x20]
0x00ec4d36: jmp    0x140ec4dd1
0x00ec4d3b: movzx  ebx,BYTE PTR [rsp+0x20]
0x00ec4d40: test   bl,bl
0x00ec4d42: je     0x140ec4d8a
0x00ec4d44: cmp    r13d,0x7530
0x00ec4d4b: jl     0x140ec4d56
0x00ec4d4d: lea    rdx,[rip+0x8698dc]        # 0x14172e630 ; literal="large stationary"
0x00ec4d54: jmp    0x140ec4dc5
0x00ec4d56: cmp    r13d,0x2710
0x00ec4d5d: jl     0x140ec4d68
0x00ec4d5f: lea    rdx,[rip+0x86ad1a]        # 0x14172fa80 ; literal="mid-size stationary"
0x00ec4d66: jmp    0x140ec4dc5
0x00ec4d68: lea    rcx,[rbp+0x2c0]
0x00ec4d6f: cmp    r13d,0x1388
0x00ec4d76: jl     0x140ec4d81
0x00ec4d78: lea    rdx,[rip+0x86ad59]        # 0x14172fad8 ; literal="small stationary"
0x00ec4d7f: jmp    0x140ec4dcc
0x00ec4d81: lea    rdx,[rip+0x86ad40]        # 0x14172fac8 ; literal="tiny stationary"
0x00ec4d88: jmp    0x140ec4dcc
0x00ec4d8a: cmp    r13d,0x7530
0x00ec4d91: jl     0x140ec4d9c
0x00ec4d93: lea    rdx,[rip+0x868d06]        # 0x14172daa0 ; literal="large hand-held"
0x00ec4d9a: jmp    0x140ec4dc5
0x00ec4d9c: cmp    r13d,0x2710
0x00ec4da3: jl     0x140ec4dae
0x00ec4da5: lea    rdx,[rip+0x868cdc]        # 0x14172da88 ; literal="mid-size hand-held"
0x00ec4dac: jmp    0x140ec4dc5
0x00ec4dae: cmp    r13d,0x1388
0x00ec4db5: lea    rdx,[rip+0x868d04]        # 0x14172dac0 ; literal="small hand-held"
0x00ec4dbc: jge    0x140ec4dc5
0x00ec4dbe: lea    rdx,[rip+0x868ceb]        # 0x14172dab0 ; literal="tiny hand-held"
0x00ec4dc5: lea    rcx,[rbp+0x2c0]
0x00ec4dcc: call   0x14006f4f0
0x00ec4dd1: lea    rdx,[rip+0x86ae00]        # 0x14172fbd8 ; literal=" percussion instrument.  "
0x00ec4dd8: lea    rcx,[rbp+0x2c0]
0x00ec4ddf: call   0x14006f4f0
0x00ec4de4: lea    rdx,[rip+0x86addd]        # 0x14172fbc8 ; literal="It consists of "
0x00ec4deb: lea    rcx,[rbp+0x2c0]
0x00ec4df2: call   0x14006f4f0
0x00ec4df7: cmp    DWORD PTR [rsp+0x5c],0x0
0x00ec4dfc: jne    0x140ec4fb0
0x00ec4e02: cmp    r15d,0x1
0x00ec4e06: jne    0x140ec4e47
0x00ec4e08: lea    rdx,[rip+0x738e55]        # 0x1415fdc64 ; literal="a"
0x00ec4e0f: lea    rcx,[rbp+0x2c0]
0x00ec4e16: call   0x14006f4f0
0x00ec4e1b: lea    rdx,[rip+0x86b5fe]        # 0x141730420 ; literal="hourglass"
0x00ec4e22: lea    rcx,[rbp+0x4c0]
0x00ec4e29: call   0x14006fe10
0x00ec4e2e: test   al,al
0x00ec4e30: je     0x140ec4e83
0x00ec4e32: lea    rdx,[rip+0x77f2f3]        # 0x14164412c ; literal="n"
0x00ec4e39: lea    rcx,[rbp+0x2c0]
0x00ec4e40: call   0x14006f4f0
0x00ec4e45: jmp    0x140ec4e83
0x00ec4e47: lea    rcx,[rbp+0x1060]
0x00ec4e4e: call   0x14006f620
0x00ec4e53: nop
0x00ec4e54: lea    rdx,[rbp+0x1060]
0x00ec4e5b: mov    ecx,r15d
0x00ec4e5e: call   0x14052bd80
0x00ec4e63: lea    rdx,[rbp+0x1060]
0x00ec4e6a: lea    rcx,[rbp+0x2c0]
0x00ec4e71: call   0x1400b9ca0
0x00ec4e76: nop
0x00ec4e77: lea    rcx,[rbp+0x1060]
0x00ec4e7e: call   0x140067dc0
0x00ec4e83: lea    rdx,[rip+0x71e896]        # 0x1415e3720 ; literal=" "
0x00ec4e8a: lea    rcx,[rbp+0x2c0]
0x00ec4e91: call   0x14006f4f0
0x00ec4e96: lea    rdx,[rbp+0x4c0]
0x00ec4e9d: lea    rcx,[rbp+0x2c0]
0x00ec4ea4: call   0x1400b9ca0
0x00ec4ea9: lea    rdx,[rip+0x71e870]        # 0x1415e3720 ; literal=" "
0x00ec4eb0: lea    rcx,[rbp+0x2c0]
0x00ec4eb7: call   0x14006f4f0
0x00ec4ebc: lea    rdx,[rbp+0x2c0]
0x00ec4ec3: mov    ecx,DWORD PTR [rbp-0x54]
0x00ec4ec6: call   0x140eb3dd0
0x00ec4ecb: lea    rdx,[rip+0x71e84e]        # 0x1415e3720 ; literal=" "
0x00ec4ed2: lea    rcx,[rbp+0x2c0]
0x00ec4ed9: call   0x14006f4f0
0x00ec4ede: lea    rdx,[rbp+0x380]
0x00ec4ee5: lea    rcx,[rbp+0x2c0]
0x00ec4eec: call   0x1400b9ca0
0x00ec4ef1: lea    rdx,[rip+0x724698]        # 0x1415e9590 ; literal=" with "
0x00ec4ef8: lea    rcx,[rbp+0x2c0]
0x00ec4eff: call   0x14006f4f0
0x00ec4f04: cmp    r15d,0x1
0x00ec4f08: jne    0x140ec4f35
0x00ec4f0a: lea    rdx,[rip+0x723707]        # 0x1415e8618 ; literal="a "
0x00ec4f11: lea    rcx,[rbp+0x2c0]
0x00ec4f18: call   0x14006f4f0
0x00ec4f1d: lea    rdx,[rbp+0x2c0]
0x00ec4f24: mov    ecx,DWORD PTR [rbp-0x2c]
0x00ec4f27: call   0x140eb3dd0
0x00ec4f2c: lea    rdx,[rip+0x86a811]        # 0x14172f744 ; literal=" head"
0x00ec4f33: jmp    0x140ec4f64
0x00ec4f35: lea    rdx,[rbp+0x2c0]
0x00ec4f3c: mov    ecx,DWORD PTR [rbp-0x2c]
0x00ec4f3f: call   0x140eb3dd0
0x00ec4f44: lea    rdx,[rip+0x86a7f9]        # 0x14172f744 ; literal=" head"
0x00ec4f4b: lea    rcx,[rbp+0x2c0]
0x00ec4f52: call   0x14006f4f0
0x00ec4f57: cmp    r15d,0x2
0x00ec4f5b: jl     0x140ec4f70
0x00ec4f5d: lea    rdx,[rip+0x71f2bc]        # 0x1415e4220 ; literal="s"
0x00ec4f64: lea    rcx,[rbp+0x2c0]
0x00ec4f6b: call   0x14006f4f0
0x00ec4f70: test   bl,bl
0x00ec4f72: je     0x140ec5088
0x00ec4f78: lea    rdx,[rip+0x86ac81]        # 0x14172fc00 ; literal=" which rest"
0x00ec4f7f: lea    rcx,[rbp+0x2c0]
0x00ec4f86: call   0x14006f4f0
0x00ec4f8b: cmp    r15d,0x1
0x00ec4f8f: jne    0x140ec4fa4
0x00ec4f91: lea    rdx,[rip+0x71f288]        # 0x1415e4220 ; literal="s"
0x00ec4f98: lea    rcx,[rbp+0x2c0]
0x00ec4f9f: call   0x14006f4f0
0x00ec4fa4: lea    rdx,[rip+0x86ac49]        # 0x14172fbf4 ; literal=" on a "
0x00ec4fab: jmp    0x140ec505a
0x00ec4fb0: cmp    r15d,0x1
0x00ec4fb4: jne    0x140ec4fcb
0x00ec4fb6: lea    rdx,[rip+0x738ca7]        # 0x1415fdc64 ; literal="a"
0x00ec4fbd: lea    rcx,[rbp+0x2c0]
0x00ec4fc4: call   0x14006f4f0
0x00ec4fc9: jmp    0x140ec5007
0x00ec4fcb: lea    rcx,[rbp+0x1080]
0x00ec4fd2: call   0x14006f620
0x00ec4fd7: nop
0x00ec4fd8: lea    rdx,[rbp+0x1080]
0x00ec4fdf: mov    ecx,r15d
0x00ec4fe2: call   0x14052bd80
0x00ec4fe7: lea    rdx,[rbp+0x1080]
0x00ec4fee: lea    rcx,[rbp+0x2c0]
0x00ec4ff5: call   0x1400b9ca0
0x00ec4ffa: nop
0x00ec4ffb: lea    rcx,[rbp+0x1080]
0x00ec5002: call   0x140067dc0
0x00ec5007: lea    rdx,[rip+0x71e712]        # 0x1415e3720 ; literal=" "
0x00ec500e: lea    rcx,[rbp+0x2c0]
0x00ec5015: call   0x14006f4f0
0x00ec501a: lea    rdx,[rbp+0x2c0]
0x00ec5021: mov    ecx,DWORD PTR [rbp-0x54]
0x00ec5024: call   0x140eb3dd0
0x00ec5029: lea    rdx,[rip+0x71e6f0]        # 0x1415e3720 ; literal=" "
0x00ec5030: lea    rcx,[rbp+0x2c0]
0x00ec5037: call   0x14006f4f0
0x00ec503c: lea    rdx,[rbp+0x380]
0x00ec5043: lea    rcx,[rbp+0x2c0]
0x00ec504a: call   0x1400b9ca0
0x00ec504f: test   bl,bl
0x00ec5051: je     0x140ec5088
0x00ec5053: lea    rdx,[rip+0x86ab3e]        # 0x14172fb98 ; literal=" attached to a "
0x00ec505a: lea    rcx,[rbp+0x2c0]
0x00ec5061: call   0x14006f4f0
0x00ec5066: lea    rdx,[rbp+0x2c0]
0x00ec506d: mov    ecx,DWORD PTR [rbp-0x28]
0x00ec5070: call   0x140eb3dd0
0x00ec5075: lea    rdx,[rip+0x86a714]        # 0x14172f790 ; literal=" stand"
0x00ec507c: lea    rcx,[rbp+0x2c0]
0x00ec5083: call   0x14006f4f0
0x00ec5088: lea    rdx,[rip+0x7337c1]        # 0x1415f8850 ; literal=".  "
0x00ec508f: lea    rcx,[rbp+0x2c0]
0x00ec5096: call   0x14006f4f0
0x00ec509b: lea    rdx,[rip+0x86aae6]        # 0x14172fb88 ; literal="The musician "
0x00ec50a2: lea    rcx,[rbp+0x2c0]
0x00ec50a9: call   0x14006f4f0
0x00ec50ae: cmp    DWORD PTR [rsp+0x6c],0x0
0x00ec50b3: jne    0x140ec51be
0x00ec50b9: test   sil,sil
0x00ec50bc: je     0x140ec50c7
0x00ec50be: lea    rdx,[rip+0x79852b]        # 0x14165d5f0 ; literal="strikes"
0x00ec50c5: jmp    0x140ec50e3
0x00ec50c7: test   r12b,r12b
0x00ec50ca: je     0x140ec50d5
0x00ec50cc: lea    rdx,[rip+0x86aaed]        # 0x14172fbc0 ; literal="scrapes"
0x00ec50d3: jmp    0x140ec50e3
0x00ec50d5: cmp    BYTE PTR [rsp+0x58],0x0
0x00ec50da: je     0x140ec50ef
0x00ec50dc: lea    rdx,[rip+0x86aac5]        # 0x14172fba8 ; literal="rubs around the lip of"
0x00ec50e3: lea    rcx,[rbp+0x2c0]
0x00ec50ea: call   0x14006f4f0
0x00ec50ef: lea    rdx,[rip+0x71f452]        # 0x1415e4548 ; literal=" the "
0x00ec50f6: lea    rcx,[rbp+0x2c0]
0x00ec50fd: call   0x14006f4f0
0x00ec5102: mov    ebx,DWORD PTR [rsp+0x5c]
0x00ec5106: lea    rcx,[rbp+0x2c0]
0x00ec510d: test   ebx,ebx
0x00ec510f: jne    0x140ec5138
0x00ec5111: lea    rdx,[rip+0x795b40]        # 0x14165ac58 ; literal="head"
0x00ec5118: call   0x14006f4f0
0x00ec511d: cmp    r15d,0x2
0x00ec5121: jl     0x140ec5144
0x00ec5123: lea    rdx,[rip+0x71f0f6]        # 0x1415e4220 ; literal="s"
0x00ec512a: lea    rcx,[rbp+0x2c0]
0x00ec5131: call   0x14006f4f0
0x00ec5136: jmp    0x140ec5144
0x00ec5138: lea    rdx,[rbp+0x380]
0x00ec513f: call   0x1400b9ca0
0x00ec5144: lea    rdx,[rip+0x724445]        # 0x1415e9590 ; literal=" with "
0x00ec514b: lea    rcx,[rbp+0x2c0]
0x00ec5152: call   0x14006f4f0
0x00ec5157: cmp    DWORD PTR [rsp+0x64],0x0
0x00ec515c: je     0x140ec5171
0x00ec515e: lea    rdx,[rip+0x7234b3]        # 0x1415e8618 ; literal="a "
0x00ec5165: lea    rcx,[rbp+0x2c0]
0x00ec516c: call   0x14006f4f0
0x00ec5171: lea    rdx,[rbp+0x2c0]
0x00ec5178: mov    ecx,DWORD PTR [rbp+0x0]
0x00ec517b: call   0x140eb3dd0
0x00ec5180: lea    rdx,[rip+0x71e599]        # 0x1415e3720 ; literal=" "
0x00ec5187: lea    rcx,[rbp+0x2c0]
0x00ec518e: call   0x14006f4f0
0x00ec5193: lea    rdx,[rbp+0x4a0]
0x00ec519a: lea    rcx,[rbp+0x2c0]
0x00ec51a1: call   0x1400b9ca0
0x00ec51a6: lea    rdx,[rip+0x7336a3]        # 0x1415f8850 ; literal=".  "
0x00ec51ad: lea    rcx,[rbp+0x2c0]
0x00ec51b4: call   0x14006f4f0
0x00ec51b9: jmp    0x140ec528f
0x00ec51be: movzx  ebx,BYTE PTR [rsp+0x4a]
0x00ec51c3: test   sil,sil
0x00ec51c6: jne    0x140ec51fa
0x00ec51c8: test   bl,bl
0x00ec51ca: jne    0x140ec51fa
0x00ec51cc: test   r12b,r12b
0x00ec51cf: je     0x140ec51da
0x00ec51d1: lea    rdx,[rip+0x86a9e8]        # 0x14172fbc0 ; literal="scrapes"
0x00ec51d8: jmp    0x140ec5201
0x00ec51da: cmp    BYTE PTR [rsp+0x44],0x0
0x00ec51df: je     0x140ec51ea
0x00ec51e1: lea    rdx,[rip+0x86aa9c]        # 0x14172fc84 ; literal="plucks"
0x00ec51e8: jmp    0x140ec5201
0x00ec51ea: cmp    BYTE PTR [rsp+0x59],0x0
0x00ec51ef: je     0x140ec520d
0x00ec51f1: lea    rdx,[rip+0x86aa84]        # 0x14172fc7c ; literal="shakes"
0x00ec51f8: jmp    0x140ec5201
0x00ec51fa: lea    rdx,[rip+0x7983ef]        # 0x14165d5f0 ; literal="strikes"
0x00ec5201: lea    rcx,[rbp+0x2c0]
0x00ec5208: call   0x14006f4f0
0x00ec520d: lea    rdx,[rip+0x71f334]        # 0x1415e4548 ; literal=" the "
0x00ec5214: lea    rcx,[rbp+0x2c0]
0x00ec521b: call   0x14006f4f0
0x00ec5220: lea    rcx,[rbp+0x2c0]
0x00ec5227: cmp    DWORD PTR [rsp+0x5c],0x0
0x00ec522c: jne    0x140ec5255
0x00ec522e: lea    rdx,[rip+0x795a23]        # 0x14165ac58 ; literal="head"
0x00ec5235: call   0x14006f4f0
0x00ec523a: cmp    r15d,0x2
0x00ec523e: jl     0x140ec5261
0x00ec5240: lea    rdx,[rip+0x71efd9]        # 0x1415e4220 ; literal="s"
0x00ec5247: lea    rcx,[rbp+0x2c0]
0x00ec524e: call   0x14006f4f0
0x00ec5253: jmp    0x140ec5261
0x00ec5255: lea    rdx,[rbp+0x380]
0x00ec525c: call   0x1400b9ca0
0x00ec5261: test   bl,bl
0x00ec5263: je     0x140ec5278
0x00ec5265: lea    rdx,[rip+0x86aa7c]        # 0x14172fce8 ; literal=" together"
0x00ec526c: lea    rcx,[rbp+0x2c0]
0x00ec5273: call   0x14006f4f0
0x00ec5278: lea    rdx,[rip+0x7335d1]        # 0x1415f8850 ; literal=".  "
0x00ec527f: lea    rcx,[rbp+0x2c0]
0x00ec5286: call   0x14006f4f0
0x00ec528b: mov    ebx,DWORD PTR [rsp+0x5c]
0x00ec528f: cmp    r13d,0x9c40
0x00ec5296: jl     0x140ec52b1
0x00ec5298: test   ebx,ebx
0x00ec529a: jne    0x140ec52b1
0x00ec529c: lea    rdx,[rip+0x86a9ed]        # 0x14172fc90 ; literal="The instrument produces a complex sound that cannot be said to be of a single pitch.  "
0x00ec52a3: lea    rcx,[rbp+0x2c0]
0x00ec52aa: call   0x14006f4f0
0x00ec52af: jmp    0x140ec52c3
0x00ec52b1: mov    r8d,edi
0x00ec52b4: mov    edx,r14d
0x00ec52b7: lea    rcx,[rbp+0x2c0]
0x00ec52be: call   0x140eb1f50
0x00ec52c3: cmp    r13d,0x9c40
0x00ec52ca: jge    0x140ec52e3
0x00ec52cc: test   ebx,ebx
0x00ec52ce: jne    0x140ec52e3
0x00ec52d0: lea    rdx,[rip+0x86a949]        # 0x14172fc20 ; literal="Tuning is accomplished by adjusting the tension of the head.  "
0x00ec52d7: lea    rcx,[rbp+0x2c0]
0x00ec52de: call   0x14006f4f0
0x00ec52e3: lea    rdx,[rbp+0x148]
0x00ec52ea: lea    rcx,[rbp+0x2c0]
0x00ec52f1: call   0x140eb3a60
0x00ec52f6: lea    rcx,[rbp+0x2c0]
0x00ec52fd: call   0x14006f2c0
0x00ec5302: lea    rdx,[rax-0x1]
0x00ec5306: lea    rcx,[rbp+0x2c0]
0x00ec530d: call   0x1400fb4d0
0x00ec5312: cmp    BYTE PTR [rax],0x20
0x00ec5315: jne    0x140ec5360
0x00ec5317: nop    WORD PTR [rax+rax*1+0x0]
0x00ec5320: lea    rcx,[rbp+0x2c0]
0x00ec5327: call   0x14006f2c0
0x00ec532c: lea    rdx,[rax-0x1]
0x00ec5330: xor    r8d,r8d
0x00ec5333: lea    rcx,[rbp+0x2c0]
0x00ec533a: call   0x1400e11c0
0x00ec533f: lea    rcx,[rbp+0x2c0]
0x00ec5346: call   0x14006f2c0
0x00ec534b: lea    rdx,[rax-0x1]
0x00ec534f: lea    rcx,[rbp+0x2c0]
0x00ec5356: call   0x1400fb4d0
0x00ec535b: cmp    BYTE PTR [rax],0x20
0x00ec535e: je     0x140ec5320
0x00ec5360: lea    rdx,[rbp+0x2c0]
0x00ec5367: lea    rcx,[rbp+0x240]
0x00ec536e: call   0x1400b9ca0
0x00ec5373: lea    rdx,[rip+0x7332ea]        # 0x1415f8664 ; literal="]"
0x00ec537a: lea    rcx,[rbp+0x240]
0x00ec5381: call   0x14006f4f0
0x00ec5386: lea    rdx,[rbp+0x240]
0x00ec538d: lea    rcx,[rsp+0x28]
0x00ec5392: call   0x1400bb700
0x00ec5397: nop
0x00ec5398: lea    rcx,[rbp+0x2c0]
0x00ec539f: call   0x140067dc0
0x00ec53a4: nop
0x00ec53a5: lea    rcx,[rbp+0x148]
0x00ec53ac: call   0x140cc88d0
0x00ec53b1: nop
0x00ec53b2: lea    rcx,[rbp+0x4c0]
0x00ec53b9: call   0x140067dc0
0x00ec53be: nop
0x00ec53bf: lea    rcx,[rbp+0x400]
0x00ec53c6: call   0x140067dc0
0x00ec53cb: nop
0x00ec53cc: lea    rcx,[rbp+0x380]
0x00ec53d3: call   0x140067dc0
0x00ec53d8: nop
0x00ec53d9: lea    rcx,[rbp+0x660]
0x00ec53e0: call   0x140067dc0
0x00ec53e5: nop
0x00ec53e6: lea    rcx,[rbp+0x680]
0x00ec53ed: call   0x140067dc0
0x00ec53f2: nop
0x00ec53f3: lea    rcx,[rbp+0x6a0]
0x00ec53fa: call   0x140067dc0
0x00ec53ff: nop
0x00ec5400: lea    rcx,[rbp+0x6c0]
0x00ec5407: call   0x140067dc0
0x00ec540c: nop
0x00ec540d: lea    rcx,[rbp+0x500]
0x00ec5414: call   0x140067dc0
0x00ec5419: nop
0x00ec541a: lea    rcx,[rbp+0x4a0]
0x00ec5421: call   0x140067dc0
0x00ec5426: nop
0x00ec5427: lea    rcx,[rbp+0x240]
0x00ec542e: call   0x140067dc0
0x00ec5433: nop
0x00ec5434: lea    rcx,[rbp+0x520]
0x00ec543b: call   0x140067dc0
0x00ec5440: nop
0x00ec5441: lea    rcx,[rbp+0x3a0]
0x00ec5448: call   0x140067dc0
0x00ec544d: mov    ebx,DWORD PTR [rbp-0x50]
0x00ec5450: inc    ebx
0x00ec5452: mov    DWORD PTR [rbp-0x50],ebx
0x00ec5455: mov    r14d,DWORD PTR [rbp-0x60]
0x00ec5459: inc    r14d
0x00ec545c: mov    DWORD PTR [rbp-0x60],r14d
0x00ec5460: mov    rax,QWORD PTR [rsp+0x50]
0x00ec5465: cmp    ebx,DWORD PTR [rax+0xe4]
0x00ec546b: jl     0x140ec2d70
0x00ec5471: mov    r14,rax
0x00ec5474: lea    rcx,[rip+0x16215e5]        # 0x1424e6a60
0x00ec547b: call   0x14006ede0
0x00ec5480: mov    rdi,rax
0x00ec5483: lea    rcx,[rip+0x162185e]        # 0x1424e6ce8
0x00ec548a: call   0x14006ede0
0x00ec548f: mov    r12,rax
0x00ec5492: mov    QWORD PTR [rbp-0x50],rax
0x00ec5496: lea    rcx,[rip+0x1621563]        # 0x1424e6a00
0x00ec549d: call   0x14006ede0
0x00ec54a2: mov    rbx,rax
0x00ec54a5: mov    r8b,0x1
0x00ec54a8: lea    rdx,[rsp+0x28]
0x00ec54ad: lea    rcx,[rip+0x162154c]        # 0x1424e6a00
0x00ec54b4: call   0x140cd3b50
0x00ec54b9: lea    rcx,[rbp+0xf0]
0x00ec54c0: call   0x140cc8e40
0x00ec54c5: lea    rcx,[rip+0x1621534]        # 0x1424e6a00
0x00ec54cc: call   0x14006ede0
0x00ec54d1: cmp    ebx,eax
0x00ec54d3: jge    0x140ec552d
0x00ec54d5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00ec54e0: lea    rcx,[rbp+0xf0]
0x00ec54e7: call   0x140cc8e50
0x00ec54ec: movsxd rdx,ebx
0x00ec54ef: lea    rcx,[rip+0x162150a]        # 0x1424e6a00
0x00ec54f6: call   0x14006f1b0
0x00ec54fb: mov    rcx,QWORD PTR [rax]
0x00ec54fe: mov    QWORD PTR [rbp+0xf0],rcx
0x00ec5505: mov    r8b,0x1
0x00ec5508: lea    rdx,[rbp+0xf0]
0x00ec550f: lea    rcx,[rip+0x16214ea]        # 0x1424e6a00
0x00ec5516: call   0x140cc9ae0
0x00ec551b: inc    ebx
0x00ec551d: lea    rcx,[rip+0x16214dc]        # 0x1424e6a00
0x00ec5524: call   0x14006ede0
0x00ec5529: cmp    ebx,eax
0x00ec552b: jl     0x140ec54e0
0x00ec552d: lea    rcx,[rip+0x162152c]        # 0x1424e6a60
0x00ec5534: call   0x14006ede0
0x00ec5539: mov    rbx,rax
0x00ec553c: lea    rcx,[rip+0x16217a5]        # 0x1424e6ce8
0x00ec5543: call   0x14006ede0
0x00ec5548: mov    QWORD PTR [rbp+0x68],rax
0x00ec554c: lea    rcx,[rsp+0x28]
0x00ec5551: call   0x14014d670
0x00ec5556: lea    rdx,[rip+0x86a6b3]        # 0x14172fc10 ; literal="reaction_layer"
0x00ec555d: lea    rcx,[rsp+0x28]
0x00ec5562: call   0x1400bb870
0x00ec5567: lea    rdx,[rip+0x86a6fa]        # 0x14172fc68 ; literal="[OBJECT:REACTION]"
0x00ec556e: lea    rcx,[rsp+0x28]
0x00ec5573: call   0x1400bb870
0x00ec5578: xor    r13b,r13b
0x00ec557b: xor    cl,cl
0x00ec557d: mov    BYTE PTR [rsp+0x58],cl
0x00ec5581: cmp    edi,ebx
0x00ec5583: jge    0x140ec6263
0x00ec5589: movsxd r12,edi
0x00ec558c: sub    ebx,edi
0x00ec558e: mov    eax,ebx
0x00ec5590: mov    QWORD PTR [rsp+0x78],rax
0x00ec5595: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00ec55a0: mov    rdx,r12
0x00ec55a3: lea    rcx,[rip+0x16214b6]        # 0x1424e6a60
0x00ec55aa: call   0x14006f1b0
0x00ec55af: mov    rsi,QWORD PTR [rax]
0x00ec55b2: lea    rdx,[rip+0x86a6a7]        # 0x14172fc60 ; literal="MAKE_"
0x00ec55b9: lea    rcx,[rbp+0x10a0]
0x00ec55c0: call   0x1400680e0
0x00ec55c5: nop
0x00ec55c6: lea    rdx,[rsi+0x8]
0x00ec55ca: lea    rcx,[rbp+0x10a0]
0x00ec55d1: call   0x1400b9ca0
0x00ec55d6: lea    rdx,[rip+0x86b0c3]        # 0x1417306a0 ; literal="[REACTION:"
0x00ec55dd: lea    rcx,[rbp+0x320]
0x00ec55e4: call   0x1400680e0
0x00ec55e9: nop
0x00ec55ea: lea    rdx,[rbp+0x10a0]
0x00ec55f1: lea    rcx,[rbp+0x320]
0x00ec55f8: call   0x1400b9ca0
0x00ec55fd: lea    rdx,[rip+0x733060]        # 0x1415f8664 ; literal="]"
0x00ec5604: lea    rcx,[rbp+0x320]
0x00ec560b: call   0x14006f4f0
0x00ec5610: lea    rdx,[rbp+0x320]
0x00ec5617: lea    rcx,[rsp+0x28]
0x00ec561c: call   0x1400bb700
0x00ec5621: lea    rdx,[rip+0x7e09b0]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec5628: lea    rcx,[rsp+0x28]
0x00ec562d: call   0x1400bb870
0x00ec5632: cmp    DWORD PTR [r14+0x40],0xffffffff
0x00ec5637: je     0x140ec568e
0x00ec5639: lea    rdx,[rip+0x867420]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec5640: lea    rcx,[rbp+0xec0]
0x00ec5647: call   0x1400680e0
0x00ec564c: nop
0x00ec564d: lea    rdx,[rbp+0xec0]
0x00ec5654: mov    ecx,DWORD PTR [r14+0x40]
0x00ec5658: call   0x140529cf0
0x00ec565d: lea    rdx,[rip+0x733000]        # 0x1415f8664 ; literal="]"
0x00ec5664: lea    rcx,[rbp+0xec0]
0x00ec566b: call   0x14006f4f0
0x00ec5670: lea    rdx,[rbp+0xec0]
0x00ec5677: lea    rcx,[rsp+0x28]
0x00ec567c: call   0x1400bb700
0x00ec5681: nop
0x00ec5682: lea    rcx,[rbp+0xec0]
0x00ec5689: call   0x140067dc0
0x00ec568e: cmp    DWORD PTR [r14+0x44],0xffffffff
0x00ec5693: je     0x140ec56ea
0x00ec5695: lea    rdx,[rip+0x8673b4]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec569c: lea    rcx,[rbp+0xee0]
0x00ec56a3: call   0x1400680e0
0x00ec56a8: nop
0x00ec56a9: lea    rdx,[rbp+0xee0]
0x00ec56b0: mov    ecx,DWORD PTR [r14+0x44]
0x00ec56b4: call   0x140529cf0
0x00ec56b9: lea    rdx,[rip+0x732fa4]        # 0x1415f8664 ; literal="]"
0x00ec56c0: lea    rcx,[rbp+0xee0]
0x00ec56c7: call   0x14006f4f0
0x00ec56cc: lea    rdx,[rbp+0xee0]
0x00ec56d3: lea    rcx,[rsp+0x28]
0x00ec56d8: call   0x1400bb700
0x00ec56dd: nop
0x00ec56de: lea    rcx,[rbp+0xee0]
0x00ec56e5: call   0x140067dc0
0x00ec56ea: lea    rdi,[rsi+0xa8]
0x00ec56f1: mov    r14d,0x1
0x00ec56f7: mov    edx,r14d
0x00ec56fa: mov    rcx,rdi
0x00ec56fd: call   0x140071f20
0x00ec5702: lea    rcx,[rbp+0x320]
0x00ec5709: test   al,al
0x00ec570b: lea    rdx,[rip+0x86af7e]        # 0x141730690 ; literal="[NAME:forge "
0x00ec5712: jne    0x140ec571b
0x00ec5714: lea    rdx,[rip+0x86afad]        # 0x1417306c8 ; literal="[NAME:make "
0x00ec571b: call   0x14006f510
0x00ec5720: lea    rdx,[rsi+0x68]
0x00ec5724: lea    rcx,[rbp+0x320]
0x00ec572b: call   0x1400b9ca0
0x00ec5730: lea    rdx,[rip+0x732f2d]        # 0x1415f8664 ; literal="]"
0x00ec5737: lea    rcx,[rbp+0x320]
0x00ec573e: call   0x14006f4f0
0x00ec5743: lea    rdx,[rbp+0x320]
0x00ec574a: lea    rcx,[rsp+0x28]
0x00ec574f: call   0x1400bb700
0x00ec5754: lea    rdx,[rip+0x86af55]        # 0x1417306b0 ; literal="[MAX_MULTIPLIER:1]"
0x00ec575b: lea    rcx,[rsp+0x28]
0x00ec5760: call   0x1400bb870
0x00ec5765: mov    edx,0xd
0x00ec576a: mov    rcx,rdi
0x00ec576d: call   0x140071f20
0x00ec5772: test   al,al
0x00ec5774: je     0x140ec5816
0x00ec577a: lea    rdx,[rip+0x86aeaf]        # 0x141730630 ; literal="[BUILDING:KILN:NONE]"
0x00ec5781: lea    rcx,[rsp+0x28]
0x00ec5786: call   0x1400bb870
0x00ec578b: lea    rdx,[rip+0x86ae76]        # 0x141730608 ; literal="[REAGENT:clay:1:BOULDER:NONE:NONE:NONE]"
0x00ec5792: lea    rcx,[rsp+0x28]
0x00ec5797: call   0x1400bb870
0x00ec579c: lea    rdx,[rip+0x86aebd]        # 0x141730660 ; literal="[HAS_MATERIAL_REACTION_PRODUCT:FIRED_MAT]"
0x00ec57a3: lea    rcx,[rsp+0x28]
0x00ec57a8: call   0x1400bb870
0x00ec57ad: lea    rdx,[rip+0x86ae94]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec57b4: lea    rcx,[rbp+0x320]
0x00ec57bb: call   0x14006f510
0x00ec57c0: lea    rdx,[rsi+0x8]
0x00ec57c4: lea    rcx,[rbp+0x320]
0x00ec57cb: call   0x1400b9ca0
0x00ec57d0: lea    rdx,[rip+0x86af99]        # 0x141730770 ; literal=":GET_MATERIAL_FROM_REAGENT:clay:FIRED_MAT]"
0x00ec57d7: lea    rcx,[rbp+0x320]
0x00ec57de: call   0x14006f4f0
0x00ec57e3: lea    rdx,[rbp+0x320]
0x00ec57ea: lea    rcx,[rsp+0x28]
0x00ec57ef: call   0x1400bb700
0x00ec57f4: lea    rdx,[rip+0x86af69]        # 0x141730764 ; literal="[FUEL]"
0x00ec57fb: lea    rcx,[rsp+0x28]
0x00ec5800: call   0x1400bb870
0x00ec5805: lea    rdx,[rip+0x86afac]        # 0x1417307b8 ; literal="[SKILL:POTTERY]"
0x00ec580c: lea    rcx,[rsp+0x28]
0x00ec5811: call   0x1400bb870
0x00ec5816: mov    edx,0x9
0x00ec581b: mov    rcx,rdi
0x00ec581e: call   0x140071f20
0x00ec5823: test   al,al
0x00ec5825: je     0x140ec58a1
0x00ec5827: lea    rdx,[rip+0x86af72]        # 0x1417307a0 ; literal="[BUILDING:LEATHER:NONE]"
0x00ec582e: lea    rcx,[rsp+0x28]
0x00ec5833: call   0x1400bb870
0x00ec5838: lea    rdx,[rip+0x86aec9]        # 0x141730708 ; literal="[REAGENT:leather:1:SKIN_TANNED:NONE:NONE:NONE]"
0x00ec583f: lea    rcx,[rsp+0x28]
0x00ec5844: call   0x1400bb870
0x00ec5849: lea    rdx,[rip+0x86adf8]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5850: lea    rcx,[rbp+0x320]
0x00ec5857: call   0x14006f510
0x00ec585c: lea    rdx,[rsi+0x8]
0x00ec5860: lea    rcx,[rbp+0x320]
0x00ec5867: call   0x1400b9ca0
0x00ec586c: lea    rdx,[rip+0x86ae65]        # 0x1417306d8 ; literal=":GET_MATERIAL_FROM_REAGENT:leather:NONE]"
0x00ec5873: lea    rcx,[rbp+0x320]
0x00ec587a: call   0x14006f4f0
0x00ec587f: lea    rdx,[rbp+0x320]
0x00ec5886: lea    rcx,[rsp+0x28]
0x00ec588b: call   0x1400bb700
0x00ec5890: lea    rdx,[rip+0x86aeb9]        # 0x141730750 ; literal="[SKILL:LEATHERWORK]"
0x00ec5897: lea    rcx,[rsp+0x28]
0x00ec589c: call   0x1400bb870
0x00ec58a1: mov    edx,0xc
0x00ec58a6: mov    rcx,rdi
0x00ec58a9: call   0x140071f20
0x00ec58ae: test   al,al
0x00ec58b0: je     0x140ec5996
0x00ec58b6: lea    rdx,[rip+0x86ae7b]        # 0x141730738 ; literal="[BUILDING:GLASS:NONE]"
0x00ec58bd: lea    rcx,[rsp+0x28]
0x00ec58c2: call   0x1400bb870
0x00ec58c7: lea    rdx,[rip+0x86af82]        # 0x141730850 ; literal="[REAGENT:sand:150:POWDER_MISC:NONE:NONE:NONE]"
0x00ec58ce: lea    rcx,[rsp+0x28]
0x00ec58d3: call   0x1400bb870
0x00ec58d8: lea    rdx,[rip+0x86af59]        # 0x141730838 ; literal="[IS_SAND_MATERIAL]"
0x00ec58df: lea    rcx,[rsp+0x28]
0x00ec58e4: call   0x1400bb870
0x00ec58e9: lea    rdx,[rip+0x86afa0]        # 0x141730890 ; literal="[REAGENT:sand bag:1:NONE:NONE:NONE:NONE]"
0x00ec58f0: lea    rcx,[rsp+0x28]
0x00ec58f5: call   0x1400bb870
0x00ec58fa: lea    rdx,[rip+0x86af7f]        # 0x141730880 ; literal="[CONTAINS:sand]"
0x00ec5901: lea    rcx,[rsp+0x28]
0x00ec5906: call   0x1400bb870
0x00ec590b: lea    rdx,[rip+0x86aede]        # 0x1417307f0 ; literal="[PRESERVE_REAGENT]"
0x00ec5912: lea    rcx,[rsp+0x28]
0x00ec5917: call   0x1400bb870
0x00ec591c: lea    rdx,[rip+0x86aea5]        # 0x1417307c8 ; literal="[DOES_NOT_DETERMINE_PRODUCT_AMOUNT]"
0x00ec5923: lea    rcx,[rsp+0x28]
0x00ec5928: call   0x1400bb870
0x00ec592d: lea    rdx,[rip+0x86ad14]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5934: lea    rcx,[rbp+0x320]
0x00ec593b: call   0x14006f510
0x00ec5940: lea    rdx,[rsi+0x8]
0x00ec5944: lea    rcx,[rbp+0x320]
0x00ec594b: call   0x1400b9ca0
0x00ec5950: lea    rdx,[rip+0x86aec9]        # 0x141730820 ; literal=":GLASS_GREEN:NONE]"
0x00ec5957: lea    rcx,[rbp+0x320]
0x00ec595e: call   0x14006f4f0
0x00ec5963: lea    rdx,[rbp+0x320]
0x00ec596a: lea    rcx,[rsp+0x28]
0x00ec596f: call   0x1400bb700
0x00ec5974: lea    rdx,[rip+0x86ade9]        # 0x141730764 ; literal="[FUEL]"
0x00ec597b: lea    rcx,[rsp+0x28]
0x00ec5980: call   0x1400bb870
0x00ec5985: lea    rdx,[rip+0x86ae7c]        # 0x141730808 ; literal="[SKILL:GLASSMAKER]"
0x00ec598c: lea    rcx,[rsp+0x28]
0x00ec5991: call   0x1400bb870
0x00ec5996: mov    edx,r14d
0x00ec5999: mov    rcx,rdi
0x00ec599c: call   0x140071f20
0x00ec59a1: test   al,al
0x00ec59a3: je     0x140ec5a44
0x00ec59a9: lea    rdx,[rip+0x86afd8]        # 0x141730988 ; literal="[BUILDING:METALSMITH:NONE]"
0x00ec59b0: lea    rcx,[rsp+0x28]
0x00ec59b5: call   0x1400bb870
0x00ec59ba: lea    rcx,[rsp+0x28]
0x00ec59bf: cmp    DWORD PTR [rsi+0x128],0x6
0x00ec59c6: lea    rdx,[rip+0x86af83]        # 0x141730950 ; literal="[REAGENT:metal bars:300:BAR:NONE:INORGANIC:NONE]"
0x00ec59cd: jge    0x140ec59d6
0x00ec59cf: lea    rdx,[rip+0x86afea]        # 0x1417309c0 ; literal="[REAGENT:metal bars:150:BAR:NONE:INORGANIC:NONE]"
0x00ec59d6: call   0x1400bb870
0x00ec59db: lea    rdx,[rip+0x86afc6]        # 0x1417309a8 ; literal="[METAL_ITEM_MATERIAL]"
0x00ec59e2: lea    rcx,[rsp+0x28]
0x00ec59e7: call   0x1400bb870
0x00ec59ec: lea    rdx,[rip+0x86ac55]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec59f3: lea    rcx,[rbp+0x320]
0x00ec59fa: call   0x14006f510
0x00ec59ff: lea    rdx,[rsi+0x8]
0x00ec5a03: lea    rcx,[rbp+0x320]
0x00ec5a0a: call   0x1400b9ca0
0x00ec5a0f: lea    rdx,[rip+0x86aec2]        # 0x1417308d8 ; literal=":GET_MATERIAL_FROM_REAGENT:metal bars:NONE]"
0x00ec5a16: lea    rcx,[rbp+0x320]
0x00ec5a1d: call   0x14006f4f0
0x00ec5a22: lea    rdx,[rbp+0x320]
0x00ec5a29: lea    rcx,[rsp+0x28]
0x00ec5a2e: call   0x1400bb700
0x00ec5a33: lea    rdx,[rip+0x86ae86]        # 0x1417308c0 ; literal="[SKILL:METALCRAFT]"
0x00ec5a3a: lea    rcx,[rsp+0x28]
0x00ec5a3f: call   0x1400bb870
0x00ec5a44: mov    edx,0x6
0x00ec5a49: mov    rcx,rdi
0x00ec5a4c: call   0x140071f20
0x00ec5a51: test   al,al
0x00ec5a53: je     0x140ec5adf
0x00ec5a59: cmp    DWORD PTR [rsi+0xf8],0xfa0
0x00ec5a63: jl     0x140ec5adf
0x00ec5a65: lea    rdx,[rip+0x86aec4]        # 0x141730930 ; literal="[BUILDING:CARPENTER:NONE]"
0x00ec5a6c: lea    rcx,[rsp+0x28]
0x00ec5a71: call   0x1400bb870
0x00ec5a76: lea    rdx,[rip+0x86ae8b]        # 0x141730908 ; literal="[REAGENT:wood:1:WOOD:NONE:NONE:NONE]"
0x00ec5a7d: lea    rcx,[rsp+0x28]
0x00ec5a82: call   0x1400bb870
0x00ec5a87: lea    rdx,[rip+0x86abba]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5a8e: lea    rcx,[rbp+0x320]
0x00ec5a95: call   0x14006f510
0x00ec5a9a: lea    rdx,[rsi+0x8]
0x00ec5a9e: lea    rcx,[rbp+0x320]
0x00ec5aa5: call   0x1400b9ca0
0x00ec5aaa: lea    rdx,[rip+0x86afcf]        # 0x141730a80 ; literal=":GET_MATERIAL_FROM_REAGENT:wood:NONE]"
0x00ec5ab1: lea    rcx,[rbp+0x320]
0x00ec5ab8: call   0x14006f4f0
0x00ec5abd: lea    rdx,[rbp+0x320]
0x00ec5ac4: lea    rcx,[rsp+0x28]
0x00ec5ac9: call   0x1400bb700
0x00ec5ace: lea    rdx,[rip+0x86af93]        # 0x141730a68 ; literal="[SKILL:CARPENTRY]"
0x00ec5ad5: lea    rcx,[rsp+0x28]
0x00ec5ada: call   0x1400bb870
0x00ec5adf: mov    edx,0xe
0x00ec5ae4: mov    rcx,rdi
0x00ec5ae7: call   0x140071f20
0x00ec5aec: test   al,al
0x00ec5aee: je     0x140ec5ba0
0x00ec5af4: cmp    DWORD PTR [rsi+0xf8],0xfa0
0x00ec5afe: jl     0x140ec5ba0
0x00ec5b04: lea    rdx,[rip+0x86afcd]        # 0x141730ad8 ; literal="[BUILDING:MASON:NONE]"
0x00ec5b0b: lea    rcx,[rsp+0x28]
0x00ec5b10: call   0x1400bb870
0x00ec5b15: lea    rdx,[rip+0x86af8c]        # 0x141730aa8 ; literal="[REAGENT:stone:1:BOULDER:NONE:INORGANIC:NONE]"
0x00ec5b1c: lea    rcx,[rsp+0x28]
0x00ec5b21: call   0x1400bb870
0x00ec5b26: lea    rdx,[rip+0x86aee3]        # 0x141730a10 ; literal="[WORTHLESS_STONE_ONLY]"
0x00ec5b2d: lea    rcx,[rsp+0x28]
0x00ec5b32: call   0x1400bb870
0x00ec5b37: lea    rdx,[rip+0x86aeba]        # 0x1417309f8 ; literal="[HARD_ITEM_MATERIAL]"
0x00ec5b3e: lea    rcx,[rsp+0x28]
0x00ec5b43: call   0x1400bb870
0x00ec5b48: lea    rdx,[rip+0x86aaf9]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5b4f: lea    rcx,[rbp+0x320]
0x00ec5b56: call   0x14006f510
0x00ec5b5b: lea    rdx,[rsi+0x8]
0x00ec5b5f: lea    rcx,[rbp+0x320]
0x00ec5b66: call   0x1400b9ca0
0x00ec5b6b: lea    rdx,[rip+0x86aece]        # 0x141730a40 ; literal=":GET_MATERIAL_FROM_REAGENT:stone:NONE]"
0x00ec5b72: lea    rcx,[rbp+0x320]
0x00ec5b79: call   0x14006f4f0
0x00ec5b7e: lea    rdx,[rbp+0x320]
0x00ec5b85: lea    rcx,[rsp+0x28]
0x00ec5b8a: call   0x1400bb700
0x00ec5b8f: lea    rdx,[rip+0x86ae92]        # 0x141730a28 ; literal="[SKILL:CARVE_STONE]"
0x00ec5b96: lea    rcx,[rsp+0x28]
0x00ec5b9b: call   0x1400bb870
0x00ec5ba0: mov    edx,0x6
0x00ec5ba5: mov    rcx,rdi
0x00ec5ba8: call   0x140071f20
0x00ec5bad: test   al,al
0x00ec5baf: je     0x140ec5c3b
0x00ec5bb5: cmp    DWORD PTR [rsi+0xf8],0xfa0
0x00ec5bbf: jge    0x140ec5c3b
0x00ec5bc1: lea    rdx,[rip+0x86afc0]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec5bc8: lea    rcx,[rsp+0x28]
0x00ec5bcd: call   0x1400bb870
0x00ec5bd2: lea    rdx,[rip+0x86ad2f]        # 0x141730908 ; literal="[REAGENT:wood:1:WOOD:NONE:NONE:NONE]"
0x00ec5bd9: lea    rcx,[rsp+0x28]
0x00ec5bde: call   0x1400bb870
0x00ec5be3: lea    rdx,[rip+0x86aa5e]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5bea: lea    rcx,[rbp+0x320]
0x00ec5bf1: call   0x14006f510
0x00ec5bf6: lea    rdx,[rsi+0x8]
0x00ec5bfa: lea    rcx,[rbp+0x320]
0x00ec5c01: call   0x1400b9ca0
0x00ec5c06: lea    rdx,[rip+0x86ae73]        # 0x141730a80 ; literal=":GET_MATERIAL_FROM_REAGENT:wood:NONE]"
0x00ec5c0d: lea    rcx,[rbp+0x320]
0x00ec5c14: call   0x14006f4f0
0x00ec5c19: lea    rdx,[rbp+0x320]
0x00ec5c20: lea    rcx,[rsp+0x28]
0x00ec5c25: call   0x1400bb700
0x00ec5c2a: lea    rdx,[rip+0x86af3f]        # 0x141730b70 ; literal="[SKILL:WOODCRAFT]"
0x00ec5c31: lea    rcx,[rsp+0x28]
0x00ec5c36: call   0x1400bb870
0x00ec5c3b: mov    edx,0xe
0x00ec5c40: mov    rcx,rdi
0x00ec5c43: call   0x140071f20
0x00ec5c48: test   al,al
0x00ec5c4a: je     0x140ec5cfc
0x00ec5c50: cmp    DWORD PTR [rsi+0xf8],0xfa0
0x00ec5c5a: jge    0x140ec5cfc
0x00ec5c60: lea    rdx,[rip+0x86af21]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec5c67: lea    rcx,[rsp+0x28]
0x00ec5c6c: call   0x1400bb870
0x00ec5c71: lea    rdx,[rip+0x86ae30]        # 0x141730aa8 ; literal="[REAGENT:stone:1:BOULDER:NONE:INORGANIC:NONE]"
0x00ec5c78: lea    rcx,[rsp+0x28]
0x00ec5c7d: call   0x1400bb870
0x00ec5c82: lea    rdx,[rip+0x86ad87]        # 0x141730a10 ; literal="[WORTHLESS_STONE_ONLY]"
0x00ec5c89: lea    rcx,[rsp+0x28]
0x00ec5c8e: call   0x1400bb870
0x00ec5c93: lea    rdx,[rip+0x86ad5e]        # 0x1417309f8 ; literal="[HARD_ITEM_MATERIAL]"
0x00ec5c9a: lea    rcx,[rsp+0x28]
0x00ec5c9f: call   0x1400bb870
0x00ec5ca4: lea    rdx,[rip+0x86a99d]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5cab: lea    rcx,[rbp+0x320]
0x00ec5cb2: call   0x14006f510
0x00ec5cb7: lea    rdx,[rsi+0x8]
0x00ec5cbb: lea    rcx,[rbp+0x320]
0x00ec5cc2: call   0x1400b9ca0
0x00ec5cc7: lea    rdx,[rip+0x86ad72]        # 0x141730a40 ; literal=":GET_MATERIAL_FROM_REAGENT:stone:NONE]"
0x00ec5cce: lea    rcx,[rbp+0x320]
0x00ec5cd5: call   0x14006f4f0
0x00ec5cda: lea    rdx,[rbp+0x320]
0x00ec5ce1: lea    rcx,[rsp+0x28]
0x00ec5ce6: call   0x1400bb700
0x00ec5ceb: lea    rdx,[rip+0x86aee6]        # 0x141730bd8 ; literal="[SKILL:STONECRAFT]"
0x00ec5cf2: lea    rcx,[rsp+0x28]
0x00ec5cf7: call   0x1400bb870
0x00ec5cfc: mov    edx,0xa
0x00ec5d01: mov    rcx,rdi
0x00ec5d04: call   0x140071f20
0x00ec5d09: test   al,al
0x00ec5d0b: je     0x140ec5ea5
0x00ec5d11: lea    rdx,[rip+0x86ae70]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec5d18: lea    rcx,[rsp+0x28]
0x00ec5d1d: call   0x1400bb870
0x00ec5d22: lea    r14,[rsi+0x88]
0x00ec5d29: mov    rcx,r14
0x00ec5d2c: call   0x14006f2c0
0x00ec5d31: cmp    eax,0x7
0x00ec5d34: jl     0x140ec5e2b
0x00ec5d3a: movsxd r15,eax
0x00ec5d3d: lea    rdx,[r15-0x7]
0x00ec5d41: mov    rcx,r14
0x00ec5d44: call   0x1400fb4d0
0x00ec5d49: cmp    BYTE PTR [rax],0x73
0x00ec5d4c: jne    0x140ec5e2b
0x00ec5d52: lea    rdx,[r15-0x6]
0x00ec5d56: mov    rcx,r14
0x00ec5d59: call   0x1400fb4d0
0x00ec5d5e: cmp    BYTE PTR [rax],0x74
0x00ec5d61: jne    0x140ec5e2b
0x00ec5d67: lea    rdx,[r15-0x5]
0x00ec5d6b: mov    rcx,r14
0x00ec5d6e: call   0x1400fb4d0
0x00ec5d73: cmp    BYTE PTR [rax],0x72
0x00ec5d76: jne    0x140ec5e2b
0x00ec5d7c: lea    rdx,[r15-0x4]
0x00ec5d80: mov    rcx,r14
0x00ec5d83: call   0x1400fb4d0
0x00ec5d88: cmp    BYTE PTR [rax],0x69
0x00ec5d8b: jne    0x140ec5e2b
0x00ec5d91: lea    rdx,[r15-0x3]
0x00ec5d95: mov    rcx,r14
0x00ec5d98: call   0x1400fb4d0
0x00ec5d9d: cmp    BYTE PTR [rax],0x6e
0x00ec5da0: jne    0x140ec5e2b
0x00ec5da6: lea    rdx,[r15-0x2]
0x00ec5daa: mov    rcx,r14
0x00ec5dad: call   0x1400fb4d0
0x00ec5db2: cmp    BYTE PTR [rax],0x67
0x00ec5db5: jne    0x140ec5e2b
0x00ec5db7: lea    rcx,[rsi+0x88]
0x00ec5dbe: lea    rdx,[r15-0x1]
0x00ec5dc2: call   0x1400fb4d0
0x00ec5dc7: cmp    BYTE PTR [rax],0x73
0x00ec5dca: jne    0x140ec5e2b
0x00ec5dcc: lea    rdx,[rip+0x86add5]        # 0x141730ba8 ; literal="[REAGENT:thread:15000:THREAD:NONE:NONE:NONE]"
0x00ec5dd3: lea    rcx,[rsp+0x28]
0x00ec5dd8: call   0x1400bb870
0x00ec5ddd: lea    rdx,[rip+0x86ad3c]        # 0x141730b20 ; literal="[NOT_WEB]"
0x00ec5de4: lea    rcx,[rsp+0x28]
0x00ec5de9: call   0x1400bb870
0x00ec5dee: lea    rdx,[rip+0x86ad63]        # 0x141730b58 ; literal="[ANY_SILK_MATERIAL]"
0x00ec5df5: lea    rcx,[rsp+0x28]
0x00ec5dfa: call   0x1400bb870
0x00ec5dff: lea    rdx,[rip+0x86a842]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5e06: lea    rcx,[rbp+0x320]
0x00ec5e0d: call   0x14006f510
0x00ec5e12: lea    rdx,[rsi+0x8]
0x00ec5e16: lea    rcx,[rbp+0x320]
0x00ec5e1d: call   0x1400b9ca0
0x00ec5e22: lea    rdx,[rip+0x86ad07]        # 0x141730b30 ; literal=":GET_MATERIAL_FROM_REAGENT:thread:NONE]"
0x00ec5e29: jmp    0x140ec5e77
0x00ec5e2b: lea    rdx,[rip+0x86acbe]        # 0x141730af0 ; literal="[REAGENT:cloth:10000:CLOTH:NONE:NONE:NONE]"
0x00ec5e32: lea    rcx,[rsp+0x28]
0x00ec5e37: call   0x1400bb870
0x00ec5e3c: lea    rdx,[rip+0x86ad15]        # 0x141730b58 ; literal="[ANY_SILK_MATERIAL]"
0x00ec5e43: lea    rcx,[rsp+0x28]
0x00ec5e48: call   0x1400bb870
0x00ec5e4d: lea    rdx,[rip+0x86a7f4]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5e54: lea    rcx,[rbp+0x320]
0x00ec5e5b: call   0x14006f510
0x00ec5e60: lea    rdx,[rsi+0x8]
0x00ec5e64: lea    rcx,[rbp+0x320]
0x00ec5e6b: call   0x1400b9ca0
0x00ec5e70: lea    rdx,[rip+0x86ae01]        # 0x141730c78 ; literal=":GET_MATERIAL_FROM_REAGENT:cloth:NONE]"
0x00ec5e77: lea    rcx,[rbp+0x320]
0x00ec5e7e: call   0x14006f4f0
0x00ec5e83: lea    rdx,[rbp+0x320]
0x00ec5e8a: lea    rcx,[rsp+0x28]
0x00ec5e8f: call   0x1400bb700
0x00ec5e94: lea    rdx,[rip+0x86adcd]        # 0x141730c68 ; literal="[SKILL:WEAVING]"
0x00ec5e9b: lea    rcx,[rsp+0x28]
0x00ec5ea0: call   0x1400bb870
0x00ec5ea5: mov    edx,0xb
0x00ec5eaa: mov    rcx,rdi
0x00ec5ead: call   0x140071f20
0x00ec5eb2: test   al,al
0x00ec5eb4: je     0x140ec604e
0x00ec5eba: lea    rdx,[rip+0x86acc7]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec5ec1: lea    rcx,[rsp+0x28]
0x00ec5ec6: call   0x1400bb870
0x00ec5ecb: lea    r14,[rsi+0x88]
0x00ec5ed2: mov    rcx,r14
0x00ec5ed5: call   0x14006f2c0
0x00ec5eda: cmp    eax,0x7
0x00ec5edd: jl     0x140ec5fd4
0x00ec5ee3: movsxd r15,eax
0x00ec5ee6: lea    rdx,[r15-0x7]
0x00ec5eea: mov    rcx,r14
0x00ec5eed: call   0x1400fb4d0
0x00ec5ef2: cmp    BYTE PTR [rax],0x73
0x00ec5ef5: jne    0x140ec5fd4
0x00ec5efb: lea    rdx,[r15-0x6]
0x00ec5eff: mov    rcx,r14
0x00ec5f02: call   0x1400fb4d0
0x00ec5f07: cmp    BYTE PTR [rax],0x74
0x00ec5f0a: jne    0x140ec5fd4
0x00ec5f10: lea    rdx,[r15-0x5]
0x00ec5f14: mov    rcx,r14
0x00ec5f17: call   0x1400fb4d0
0x00ec5f1c: cmp    BYTE PTR [rax],0x72
0x00ec5f1f: jne    0x140ec5fd4
0x00ec5f25: lea    rdx,[r15-0x4]
0x00ec5f29: mov    rcx,r14
0x00ec5f2c: call   0x1400fb4d0
0x00ec5f31: cmp    BYTE PTR [rax],0x69
0x00ec5f34: jne    0x140ec5fd4
0x00ec5f3a: lea    rdx,[r15-0x3]
0x00ec5f3e: mov    rcx,r14
0x00ec5f41: call   0x1400fb4d0
0x00ec5f46: cmp    BYTE PTR [rax],0x6e
0x00ec5f49: jne    0x140ec5fd4
0x00ec5f4f: lea    rdx,[r15-0x2]
0x00ec5f53: mov    rcx,r14
0x00ec5f56: call   0x1400fb4d0
0x00ec5f5b: cmp    BYTE PTR [rax],0x67
0x00ec5f5e: jne    0x140ec5fd4
0x00ec5f60: lea    rcx,[rsi+0x88]
0x00ec5f67: lea    rdx,[r15-0x1]
0x00ec5f6b: call   0x1400fb4d0
0x00ec5f70: cmp    BYTE PTR [rax],0x73
0x00ec5f73: jne    0x140ec5fd4
0x00ec5f75: lea    rdx,[rip+0x86ac2c]        # 0x141730ba8 ; literal="[REAGENT:thread:15000:THREAD:NONE:NONE:NONE]"
0x00ec5f7c: lea    rcx,[rsp+0x28]
0x00ec5f81: call   0x1400bb870
0x00ec5f86: lea    rdx,[rip+0x86ab93]        # 0x141730b20 ; literal="[NOT_WEB]"
0x00ec5f8d: lea    rcx,[rsp+0x28]
0x00ec5f92: call   0x1400bb870
0x00ec5f97: lea    rdx,[rip+0x86ad2a]        # 0x141730cc8 ; literal="[ANY_PLANT_MATERIAL]"
0x00ec5f9e: lea    rcx,[rsp+0x28]
0x00ec5fa3: call   0x1400bb870
0x00ec5fa8: lea    rdx,[rip+0x86a699]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5faf: lea    rcx,[rbp+0x320]
0x00ec5fb6: call   0x14006f510
0x00ec5fbb: lea    rdx,[rsi+0x8]
0x00ec5fbf: lea    rcx,[rbp+0x320]
0x00ec5fc6: call   0x1400b9ca0
0x00ec5fcb: lea    rdx,[rip+0x86ab5e]        # 0x141730b30 ; literal=":GET_MATERIAL_FROM_REAGENT:thread:NONE]"
0x00ec5fd2: jmp    0x140ec6020
0x00ec5fd4: lea    rdx,[rip+0x86ab15]        # 0x141730af0 ; literal="[REAGENT:cloth:10000:CLOTH:NONE:NONE:NONE]"
0x00ec5fdb: lea    rcx,[rsp+0x28]
0x00ec5fe0: call   0x1400bb870
0x00ec5fe5: lea    rdx,[rip+0x86acdc]        # 0x141730cc8 ; literal="[ANY_PLANT_MATERIAL]"
0x00ec5fec: lea    rcx,[rsp+0x28]
0x00ec5ff1: call   0x1400bb870
0x00ec5ff6: lea    rdx,[rip+0x86a64b]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec5ffd: lea    rcx,[rbp+0x320]
0x00ec6004: call   0x14006f510
0x00ec6009: lea    rdx,[rsi+0x8]
0x00ec600d: lea    rcx,[rbp+0x320]
0x00ec6014: call   0x1400b9ca0
0x00ec6019: lea    rdx,[rip+0x86ac58]        # 0x141730c78 ; literal=":GET_MATERIAL_FROM_REAGENT:cloth:NONE]"
0x00ec6020: lea    rcx,[rbp+0x320]
0x00ec6027: call   0x14006f4f0
0x00ec602c: lea    rdx,[rbp+0x320]
0x00ec6033: lea    rcx,[rsp+0x28]
0x00ec6038: call   0x1400bb700
0x00ec603d: lea    rdx,[rip+0x86ac24]        # 0x141730c68 ; literal="[SKILL:WEAVING]"
0x00ec6044: lea    rcx,[rsp+0x28]
0x00ec6049: call   0x1400bb870
0x00ec604e: mov    edx,0xf
0x00ec6053: mov    rcx,rdi
0x00ec6056: call   0x140071f20
0x00ec605b: test   al,al
0x00ec605d: je     0x140ec60ff
0x00ec6063: lea    rdx,[rip+0x86ab1e]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec606a: lea    rcx,[rsp+0x28]
0x00ec606f: call   0x1400bb870
0x00ec6074: lea    rdx,[rip+0x86ac25]        # 0x141730ca0 ; literal="[REAGENT:shell:1:NONE:NONE:NONE:NONE]"
0x00ec607b: lea    rcx,[rsp+0x28]
0x00ec6080: call   0x1400bb870
0x00ec6085: lea    rdx,[rip+0x86ab7c]        # 0x141730c08 ; literal="[USE_BODY_COMPONENT][UNROTTEN]"
0x00ec608c: lea    rcx,[rsp+0x28]
0x00ec6091: call   0x1400bb870
0x00ec6096: lea    rdx,[rip+0x86ab53]        # 0x141730bf0 ; literal="[ANY_SHELL_MATERIAL]"
0x00ec609d: lea    rcx,[rsp+0x28]
0x00ec60a2: call   0x1400bb870
0x00ec60a7: lea    rdx,[rip+0x86a59a]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec60ae: lea    rcx,[rbp+0x320]
0x00ec60b5: call   0x14006f510
0x00ec60ba: lea    rdx,[rsi+0x8]
0x00ec60be: lea    rcx,[rbp+0x320]
0x00ec60c5: call   0x1400b9ca0
0x00ec60ca: lea    rdx,[rip+0x86ab6f]        # 0x141730c40 ; literal=":GET_MATERIAL_FROM_REAGENT:shell:NONE]"
0x00ec60d1: lea    rcx,[rbp+0x320]
0x00ec60d8: call   0x14006f4f0
0x00ec60dd: lea    rdx,[rbp+0x320]
0x00ec60e4: lea    rcx,[rsp+0x28]
0x00ec60e9: call   0x1400bb700
0x00ec60ee: lea    rdx,[rip+0x86ab33]        # 0x141730c28 ; literal="[SKILL:BONECARVE]"
0x00ec60f5: lea    rcx,[rsp+0x28]
0x00ec60fa: call   0x1400bb870
0x00ec60ff: mov    edx,0x10
0x00ec6104: mov    rcx,rdi
0x00ec6107: call   0x140071f20
0x00ec610c: test   al,al
0x00ec610e: je     0x140ec61b0
0x00ec6114: lea    rdx,[rip+0x86aa6d]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec611b: lea    rcx,[rsp+0x28]
0x00ec6120: call   0x1400bb870
0x00ec6125: lea    rdx,[rip+0x86ac9c]        # 0x141730dc8 ; literal="[REAGENT:bone:1:NONE:NONE:NONE:NONE]"
0x00ec612c: lea    rcx,[rsp+0x28]
0x00ec6131: call   0x1400bb870
0x00ec6136: lea    rdx,[rip+0x86aacb]        # 0x141730c08 ; literal="[USE_BODY_COMPONENT][UNROTTEN]"
0x00ec613d: lea    rcx,[rsp+0x28]
0x00ec6142: call   0x1400bb870
0x00ec6147: lea    rdx,[rip+0x86ac62]        # 0x141730db0 ; literal="[ANY_BONE_MATERIAL]"
0x00ec614e: lea    rcx,[rsp+0x28]
0x00ec6153: call   0x1400bb870
0x00ec6158: lea    rdx,[rip+0x86a4e9]        # 0x141730648 ; literal="[PRODUCT:100:1:TOOL:"
0x00ec615f: lea    rcx,[rbp+0x320]
0x00ec6166: call   0x14006f510
0x00ec616b: lea    rdx,[rsi+0x8]
0x00ec616f: lea    rcx,[rbp+0x320]
0x00ec6176: call   0x1400b9ca0
0x00ec617b: lea    rdx,[rip+0x86ac86]        # 0x141730e08 ; literal=":GET_MATERIAL_FROM_REAGENT:bone:NONE]"
0x00ec6182: lea    rcx,[rbp+0x320]
0x00ec6189: call   0x14006f4f0
0x00ec618e: lea    rdx,[rbp+0x320]
0x00ec6195: lea    rcx,[rsp+0x28]
0x00ec619a: call   0x1400bb700
0x00ec619f: lea    rdx,[rip+0x86aa82]        # 0x141730c28 ; literal="[SKILL:BONECARVE]"
0x00ec61a6: lea    rcx,[rsp+0x28]
0x00ec61ab: call   0x1400bb870
0x00ec61b0: lea    rdx,[rip+0x86ac39]        # 0x141730df0 ; literal="[DESCRIPTION:USE_TOOL:"
0x00ec61b7: lea    rcx,[rbp+0x320]
0x00ec61be: call   0x14006f510
0x00ec61c3: lea    rdx,[rsi+0x8]
0x00ec61c7: lea    rcx,[rbp+0x320]
0x00ec61ce: call   0x1400b9ca0
0x00ec61d3: lea    rdx,[rip+0x73248a]        # 0x1415f8664 ; literal="]"
0x00ec61da: lea    rcx,[rbp+0x320]
0x00ec61e1: call   0x14006f4f0
0x00ec61e6: lea    rdx,[rbp+0x320]
0x00ec61ed: lea    rcx,[rsp+0x28]
0x00ec61f2: call   0x1400bb700
0x00ec61f7: lea    rdx,[rip+0x86ab0a]        # 0x141730d08 ; literal="[CATEGORY:INSTRUMENT_PIECE]"
0x00ec61fe: lea    rcx,[rsp+0x28]
0x00ec6203: call   0x1400bb870
0x00ec6208: test   r13b,r13b
0x00ec620b: jne    0x140ec6232
0x00ec620d: lea    rdx,[rip+0x86aacc]        # 0x141730ce0 ; literal="[CATEGORY_NAME:Make instrument piece"
0x00ec6214: lea    rcx,[rsp+0x28]
0x00ec6219: call   0x1400bb870
0x00ec621e: lea    rdx,[rip+0x86ab1b]        # 0x141730d40 ; literal="[CATEGORY_DESCRIPTION:Make instrument pieces which can be used to assemble complete musical instruments.]"
0x00ec6225: lea    rcx,[rsp+0x28]
0x00ec622a: call   0x1400bb870
0x00ec622f: mov    r13b,0x1
0x00ec6232: lea    rcx,[rbp+0x320]
0x00ec6239: call   0x140067dc0
0x00ec623e: nop
0x00ec623f: lea    rcx,[rbp+0x10a0]
0x00ec6246: call   0x140067dc0
0x00ec624b: inc    r12
0x00ec624e: sub    QWORD PTR [rsp+0x78],0x1
0x00ec6254: mov    r14,QWORD PTR [rsp+0x50]
0x00ec6259: jne    0x140ec55a0
0x00ec625f: mov    r12,QWORD PTR [rbp-0x50]
0x00ec6263: mov    rdi,QWORD PTR [rbp+0x68]
0x00ec6267: cmp    r12d,edi
0x00ec626a: jge    0x140ec7169
0x00ec6270: mov    r13d,0xff
0x00ec6276: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ec6280: movsxd rdx,r12d
0x00ec6283: lea    rcx,[rip+0x1620a5e]        # 0x1424e6ce8
0x00ec628a: call   0x14006f1b0
0x00ec628f: mov    rsi,QWORD PTR [rax]
0x00ec6292: lea    rdx,[rip+0x8699c7]        # 0x14172fc60 ; literal="MAKE_"
0x00ec6299: lea    rcx,[rbp+0x10e0]
0x00ec62a0: call   0x1400680e0
0x00ec62a5: nop
0x00ec62a6: lea    rdx,[rsi+0x8]
0x00ec62aa: lea    rcx,[rbp+0x10e0]
0x00ec62b1: call   0x1400b9ca0
0x00ec62b6: lea    rdx,[rip+0x86a3e3]        # 0x1417306a0 ; literal="[REACTION:"
0x00ec62bd: lea    rcx,[rbp+0x300]
0x00ec62c4: call   0x1400680e0
0x00ec62c9: nop
0x00ec62ca: lea    rdx,[rbp+0x10e0]
0x00ec62d1: lea    rcx,[rbp+0x300]
0x00ec62d8: call   0x1400b9ca0
0x00ec62dd: lea    rdx,[rip+0x732380]        # 0x1415f8664 ; literal="]"
0x00ec62e4: lea    rcx,[rbp+0x300]
0x00ec62eb: call   0x14006f4f0
0x00ec62f0: lea    rdx,[rbp+0x300]
0x00ec62f7: lea    rcx,[rsp+0x28]
0x00ec62fc: call   0x1400bb700
0x00ec6301: lea    rdx,[rip+0x7dfcd0]        # 0x1416a5fd8 ; literal="[GENERATED]"
0x00ec6308: lea    rcx,[rsp+0x28]
0x00ec630d: call   0x1400bb870
0x00ec6312: mov    rbx,QWORD PTR [rsp+0x50]
0x00ec6317: cmp    DWORD PTR [rbx+0x40],0xffffffff
0x00ec631b: je     0x140ec6371
0x00ec631d: lea    rdx,[rip+0x86673c]        # 0x14172ca60 ; literal="[SOURCE_HFID:"
0x00ec6324: lea    rcx,[rbp+0xf00]
0x00ec632b: call   0x1400680e0
0x00ec6330: nop
0x00ec6331: lea    rdx,[rbp+0xf00]
0x00ec6338: mov    ecx,DWORD PTR [rbx+0x40]
0x00ec633b: call   0x140529cf0
0x00ec6340: lea    rdx,[rip+0x73231d]        # 0x1415f8664 ; literal="]"
0x00ec6347: lea    rcx,[rbp+0xf00]
0x00ec634e: call   0x14006f4f0
0x00ec6353: lea    rdx,[rbp+0xf00]
0x00ec635a: lea    rcx,[rsp+0x28]
0x00ec635f: call   0x1400bb700
0x00ec6364: nop
0x00ec6365: lea    rcx,[rbp+0xf00]
0x00ec636c: call   0x140067dc0
0x00ec6371: cmp    DWORD PTR [rbx+0x44],0xffffffff
0x00ec6375: je     0x140ec63cb
0x00ec6377: lea    rdx,[rip+0x8666d2]        # 0x14172ca50 ; literal="[SOURCE_ENID:"
0x00ec637e: lea    rcx,[rbp+0xf20]
0x00ec6385: call   0x1400680e0
0x00ec638a: nop
0x00ec638b: lea    rdx,[rbp+0xf20]
0x00ec6392: mov    ecx,DWORD PTR [rbx+0x44]
0x00ec6395: call   0x140529cf0
0x00ec639a: lea    rdx,[rip+0x7322c3]        # 0x1415f8664 ; literal="]"
0x00ec63a1: lea    rcx,[rbp+0xf20]
0x00ec63a8: call   0x14006f4f0
0x00ec63ad: lea    rdx,[rbp+0xf20]
0x00ec63b4: lea    rcx,[rsp+0x28]
0x00ec63b9: call   0x1400bb700
0x00ec63be: nop
0x00ec63bf: lea    rcx,[rbp+0xf20]
0x00ec63c6: call   0x140067dc0
0x00ec63cb: lea    r14,[rsi+0xc8]
0x00ec63d2: lea    rbx,[rsi+0xa8]
0x00ec63d9: mov    rcx,r14
0x00ec63dc: call   0x14006ede0
0x00ec63e1: test   rax,rax
0x00ec63e4: jne    0x140ec6410
0x00ec63e6: mov    edx,0x2
0x00ec63eb: mov    rcx,rbx
0x00ec63ee: call   0x140071f20
0x00ec63f3: lea    rcx,[rbp+0x300]
0x00ec63fa: test   al,al
0x00ec63fc: je     0x140ec6407
0x00ec63fe: lea    rdx,[rip+0x86a28b]        # 0x141730690 ; literal="[NAME:forge "
0x00ec6405: jmp    0x140ec641e
0x00ec6407: lea    rdx,[rip+0x86a2ba]        # 0x1417306c8 ; literal="[NAME:make "
0x00ec640e: jmp    0x140ec641e
0x00ec6410: lea    rdx,[rip+0x86a911]        # 0x141730d28 ; literal="[NAME:assemble "
0x00ec6417: lea    rcx,[rbp+0x300]
0x00ec641e: call   0x14006f510
0x00ec6423: lea    rdx,[rsi+0x68]
0x00ec6427: lea    rcx,[rbp+0x300]
0x00ec642e: call   0x1400b9ca0
0x00ec6433: lea    rdx,[rip+0x73222a]        # 0x1415f8664 ; literal="]"
0x00ec643a: lea    rcx,[rbp+0x300]
0x00ec6441: call   0x14006f4f0
0x00ec6446: lea    rdx,[rbp+0x300]
0x00ec644d: lea    rcx,[rsp+0x28]
0x00ec6452: call   0x1400bb700
0x00ec6457: lea    rdx,[rip+0x86a252]        # 0x1417306b0 ; literal="[MAX_MULTIPLIER:1]"
0x00ec645e: lea    rcx,[rsp+0x28]
0x00ec6463: call   0x1400bb870
0x00ec6468: mov    rcx,r14
0x00ec646b: call   0x14006ede0
0x00ec6470: test   rax,rax
0x00ec6473: je     0x140ec6a40
0x00ec6479: lea    rcx,[rbp+0x10c0]
0x00ec6480: call   0x14006f620
0x00ec6485: nop
0x00ec6486: xor    eax,eax
0x00ec6488: mov    edi,eax
0x00ec648a: lea    rdx,[rbp-0x20]
0x00ec648e: mov    rcx,r14
0x00ec6491: call   0x14006f1d0
0x00ec6496: lea    rdx,[rbp+0xd8]
0x00ec649d: mov    rcx,r14
0x00ec64a0: call   0x14006f1c0
0x00ec64a5: lea    r8,[rbp+0xd8]
0x00ec64ac: lea    rdx,[rbp-0x71]
0x00ec64b0: lea    rcx,[rbp-0x20]
0x00ec64b4: call   0x14006edb0
0x00ec64b9: xor    edx,edx
0x00ec64bb: movzx  ecx,BYTE PTR [rax]
0x00ec64be: call   0x140065740
0x00ec64c3: test   al,al
0x00ec64c5: je     0x140ec65de
0x00ec64cb: nop    DWORD PTR [rax+rax*1+0x0]
0x00ec64d0: lea    rcx,[rbp-0x20]
0x00ec64d4: call   0x14006eda0
0x00ec64d9: lea    rdx,[rsi+0xe0]
0x00ec64e0: mov    rcx,QWORD PTR [rax]
0x00ec64e3: call   0x14006fdd0
0x00ec64e8: test   al,al
0x00ec64ea: je     0x140ec65af
0x00ec64f0: lea    rcx,[rbp-0x20]
0x00ec64f4: call   0x14006eda0
0x00ec64f9: mov    rdx,QWORD PTR [rax]
0x00ec64fc: add    rdx,0x48
0x00ec6500: lea    rcx,[rbp+0x10c0]
0x00ec6507: call   0x14006f530
0x00ec650c: lea    rdx,[rbp+0x10]
0x00ec6510: lea    rcx,[rip+0x1620549]        # 0x1424e6a60
0x00ec6517: call   0x14006f1d0
0x00ec651c: lea    rdx,[rbp+0xd0]
0x00ec6523: lea    rcx,[rip+0x1620536]        # 0x1424e6a60
0x00ec652a: call   0x14006f1c0
0x00ec652f: lea    r8,[rbp+0xd0]
0x00ec6536: lea    rdx,[rbp-0x74]
0x00ec653a: lea    rcx,[rbp+0x10]
0x00ec653e: call   0x14006edb0
0x00ec6543: xor    edx,edx
0x00ec6545: movzx  ecx,BYTE PTR [rax]
0x00ec6548: call   0x140065740
0x00ec654d: test   al,al
0x00ec654f: je     0x140ec65af
0x00ec6551: lea    rcx,[rbp-0x20]
0x00ec6555: call   0x14006eda0
0x00ec655a: mov    rbx,QWORD PTR [rax]
0x00ec655d: lea    rcx,[rbp+0x10]
0x00ec6561: call   0x14006eda0
0x00ec6566: mov    rcx,QWORD PTR [rax]
0x00ec6569: add    rcx,0x8
0x00ec656d: lea    rdx,[rbx+0x20]
0x00ec6571: call   0x14006fdd0
0x00ec6576: lea    rcx,[rbp+0x10]
0x00ec657a: test   al,al
0x00ec657c: jne    0x140ec65a7
0x00ec657e: call   0x14006ed90
0x00ec6583: lea    r8,[rbp+0xd0]
0x00ec658a: lea    rdx,[rbp-0x74]
0x00ec658e: lea    rcx,[rbp+0x10]
0x00ec6592: call   0x14006edb0
0x00ec6597: xor    edx,edx
0x00ec6599: movzx  ecx,BYTE PTR [rax]
0x00ec659c: call   0x140065740
0x00ec65a1: test   al,al
0x00ec65a3: jne    0x140ec6551
0x00ec65a5: jmp    0x140ec65af
0x00ec65a7: call   0x14006eda0
0x00ec65ac: mov    rdi,QWORD PTR [rax]
0x00ec65af: lea    rcx,[rbp-0x20]
0x00ec65b3: call   0x14006ed90
0x00ec65b8: lea    r8,[rbp+0xd8]
0x00ec65bf: lea    rdx,[rbp-0x71]
0x00ec65c3: lea    rcx,[rbp-0x20]
0x00ec65c7: call   0x14006edb0
0x00ec65cc: xor    edx,edx
0x00ec65ce: movzx  ecx,BYTE PTR [rax]
0x00ec65d1: call   0x140065740
0x00ec65d6: test   al,al
0x00ec65d8: jne    0x140ec64d0
0x00ec65de: lea    rdx,[rip+0x86a5a3]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec65e5: lea    rcx,[rsp+0x28]
0x00ec65ea: call   0x1400bb870
0x00ec65ef: lea    rdx,[rbp+0x18]
0x00ec65f3: mov    rcx,r14
0x00ec65f6: call   0x14006f1d0
0x00ec65fb: lea    rdx,[rbp+0xe0]
0x00ec6602: mov    rcx,r14
0x00ec6605: call   0x14006f1c0
0x00ec660a: lea    r8,[rbp+0xe0]
0x00ec6611: lea    rdx,[rbp-0x75]
0x00ec6615: lea    rcx,[rbp+0x18]
0x00ec6619: call   0x14006edb0
0x00ec661e: xor    edx,edx
0x00ec6620: movzx  ecx,BYTE PTR [rax]
0x00ec6623: call   0x140065740
0x00ec6628: test   al,al
0x00ec662a: je     0x140ec66e1
0x00ec6630: lea    rdx,[rip+0x869eb9]        # 0x1417304f0 ; literal="[REAGENT:"
0x00ec6637: lea    rcx,[rbp+0x300]
0x00ec663e: call   0x14006f510
0x00ec6643: lea    rcx,[rbp+0x18]
0x00ec6647: call   0x14006eda0
0x00ec664c: mov    rdx,QWORD PTR [rax]
0x00ec664f: add    rdx,0x48
0x00ec6653: lea    rcx,[rbp+0x300]
0x00ec665a: call   0x1400b9ca0
0x00ec665f: lea    rdx,[rip+0x869e7a]        # 0x1417304e0 ; literal=":1:TOOL:"
0x00ec6666: lea    rcx,[rbp+0x300]
0x00ec666d: call   0x14006f4f0
0x00ec6672: lea    rcx,[rbp+0x18]
0x00ec6676: call   0x14006eda0
0x00ec667b: mov    rdx,QWORD PTR [rax]
0x00ec667e: add    rdx,0x20
0x00ec6682: lea    rcx,[rbp+0x300]
0x00ec6689: call   0x1400b9ca0
0x00ec668e: lea    rdx,[rip+0x869e8b]        # 0x141730520 ; literal=":NONE:NONE]"
0x00ec6695: lea    rcx,[rbp+0x300]
0x00ec669c: call   0x14006f4f0
0x00ec66a1: lea    rdx,[rbp+0x300]
0x00ec66a8: lea    rcx,[rsp+0x28]
0x00ec66ad: call   0x1400bb700
0x00ec66b2: lea    rcx,[rbp+0x18]
0x00ec66b6: call   0x14006ed90
0x00ec66bb: lea    r8,[rbp+0xe0]
0x00ec66c2: lea    rdx,[rbp-0x75]
0x00ec66c6: lea    rcx,[rbp+0x18]
0x00ec66ca: call   0x14006edb0
0x00ec66cf: xor    edx,edx
0x00ec66d1: movzx  ecx,BYTE PTR [rax]
0x00ec66d4: call   0x140065740
0x00ec66d9: test   al,al
0x00ec66db: jne    0x140ec6630
0x00ec66e1: lea    rdx,[rip+0x869e18]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec66e8: lea    rcx,[rbp+0x300]
0x00ec66ef: call   0x14006f510
0x00ec66f4: lea    rdx,[rsi+0x8]
0x00ec66f8: lea    rcx,[rbp+0x300]
0x00ec66ff: call   0x1400b9ca0
0x00ec6704: lea    rdx,[rip+0x869d65]        # 0x141730470 ; literal=":GET_MATERIAL_FROM_REAGENT:"
0x00ec670b: lea    rcx,[rbp+0x300]
0x00ec6712: call   0x14006f4f0
0x00ec6717: lea    rdx,[rbp+0x10c0]
0x00ec671e: lea    rcx,[rbp+0x300]
0x00ec6725: call   0x1400b9ca0
0x00ec672a: lea    rdx,[rip+0x869d33]        # 0x141730464 ; literal=":NONE]"
0x00ec6731: lea    rcx,[rbp+0x300]
0x00ec6738: call   0x14006f4f0
0x00ec673d: lea    rdx,[rbp+0x300]
0x00ec6744: lea    rcx,[rsp+0x28]
0x00ec6749: call   0x1400bb700
0x00ec674e: lea    rdx,[rip+0x869d6b]        # 0x1417304c0 ; literal="[PRODUCT_TOKEN:instrument]"
0x00ec6755: lea    rcx,[rbp+0x300]
0x00ec675c: call   0x14006f510
0x00ec6761: lea    rdx,[rbp+0x300]
0x00ec6768: lea    rcx,[rsp+0x28]
0x00ec676d: call   0x1400bb700
0x00ec6772: lea    rdx,[rbp+0x20]
0x00ec6776: mov    rcx,r14
0x00ec6779: call   0x14006f1d0
0x00ec677e: lea    rdx,[rbp+0xe8]
0x00ec6785: mov    rcx,r14
0x00ec6788: call   0x14006f1c0
0x00ec678d: mov    rax,QWORD PTR [rbp+0x20]
0x00ec6791: cmp    rax,QWORD PTR [rbp+0xe8]
0x00ec6798: je     0x140ec6846
0x00ec679e: mov    edx,0x1
0x00ec67a3: cmovb  edx,r13d
0x00ec67a7: test   dl,dl
0x00ec67a9: jns    0x140ec6846
0x00ec67af: mov    r8d,0x2d
0x00ec67b5: lea    rdx,[rip+0x869cd4]        # 0x141730490 ; literal="[IMPROVEMENT:100:instrument:INSTRUMENT_PIECE:"
0x00ec67bc: lea    rcx,[rbp+0x300]
0x00ec67c3: call   0x14006f860
0x00ec67c8: mov    rdx,QWORD PTR [rbp+0x20]
0x00ec67cc: mov    rdx,QWORD PTR [rdx]
0x00ec67cf: lea    rcx,[rbp+0x300]
0x00ec67d6: call   0x1400b9ca0
0x00ec67db: mov    r8d,0x1b
0x00ec67e1: lea    rdx,[rip+0x869c88]        # 0x141730470 ; literal=":GET_MATERIAL_FROM_REAGENT:"
0x00ec67e8: lea    rcx,[rbp+0x300]
0x00ec67ef: call   0x14006f9a0
0x00ec67f4: mov    rax,QWORD PTR [rbp+0x20]
0x00ec67f8: mov    rdx,QWORD PTR [rax]
0x00ec67fb: add    rdx,0x48
0x00ec67ff: lea    rcx,[rbp+0x300]
0x00ec6806: call   0x1400b9ca0
0x00ec680b: mov    r8d,0x6
0x00ec6811: lea    rdx,[rip+0x869c4c]        # 0x141730464 ; literal=":NONE]"
0x00ec6818: lea    rcx,[rbp+0x300]
0x00ec681f: call   0x14006f9a0
0x00ec6824: lea    rdx,[rbp+0x300]
0x00ec682b: lea    rcx,[rsp+0x28]
0x00ec6830: call   0x1400bb700
0x00ec6835: mov    rax,QWORD PTR [rbp+0x20]
0x00ec6839: add    rax,0x8
0x00ec683d: mov    QWORD PTR [rbp+0x20],rax
0x00ec6841: jmp    0x140ec6791
0x00ec6846: test   rdi,rdi
0x00ec6849: je     0x140ec6a2b
0x00ec684f: lea    rbx,[rdi+0xa8]
0x00ec6856: mov    edx,0xd
0x00ec685b: mov    rcx,rbx
0x00ec685e: call   0x140071f20
0x00ec6863: test   al,al
0x00ec6865: je     0x140ec6878
0x00ec6867: lea    rdx,[rip+0x869f4a]        # 0x1417307b8 ; literal="[SKILL:POTTERY]"
0x00ec686e: lea    rcx,[rsp+0x28]
0x00ec6873: call   0x1400bb870
0x00ec6878: mov    edx,0x9
0x00ec687d: mov    rcx,rbx
0x00ec6880: call   0x140071f20
0x00ec6885: test   al,al
0x00ec6887: je     0x140ec689a
0x00ec6889: lea    rdx,[rip+0x869ec0]        # 0x141730750 ; literal="[SKILL:LEATHERWORK]"
0x00ec6890: lea    rcx,[rsp+0x28]
0x00ec6895: call   0x1400bb870
0x00ec689a: mov    edx,0xc
0x00ec689f: mov    rcx,rbx
0x00ec68a2: call   0x140071f20
0x00ec68a7: test   al,al
0x00ec68a9: je     0x140ec68bc
0x00ec68ab: lea    rdx,[rip+0x869f56]        # 0x141730808 ; literal="[SKILL:GLASSMAKER]"
0x00ec68b2: lea    rcx,[rsp+0x28]
0x00ec68b7: call   0x1400bb870
0x00ec68bc: cmp    DWORD PTR [rbx+0x8],0x0
0x00ec68c0: jle    0x140ec68db
0x00ec68c2: mov    rax,QWORD PTR [rbx]
0x00ec68c5: test   BYTE PTR [rax],0x2
0x00ec68c8: je     0x140ec68db
0x00ec68ca: lea    rdx,[rip+0x869fef]        # 0x1417308c0 ; literal="[SKILL:METALCRAFT]"
0x00ec68d1: lea    rcx,[rsp+0x28]
0x00ec68d6: call   0x1400bb870
0x00ec68db: mov    edx,0x6
0x00ec68e0: mov    rcx,rbx
0x00ec68e3: call   0x140071f20
0x00ec68e8: test   al,al
0x00ec68ea: je     0x140ec6909
0x00ec68ec: cmp    DWORD PTR [rdi+0xf8],0xfa0
0x00ec68f6: jl     0x140ec6909
0x00ec68f8: lea    rdx,[rip+0x86a169]        # 0x141730a68 ; literal="[SKILL:CARPENTRY]"
0x00ec68ff: lea    rcx,[rsp+0x28]
0x00ec6904: call   0x1400bb870
0x00ec6909: mov    edx,0xe
0x00ec690e: mov    rcx,rbx
0x00ec6911: call   0x140071f20
0x00ec6916: test   al,al
0x00ec6918: je     0x140ec6937
0x00ec691a: cmp    DWORD PTR [rdi+0xf8],0xfa0
0x00ec6924: jl     0x140ec6937
0x00ec6926: lea    rdx,[rip+0x86a0fb]        # 0x141730a28 ; literal="[SKILL:CARVE_STONE]"
0x00ec692d: lea    rcx,[rsp+0x28]
0x00ec6932: call   0x1400bb870
0x00ec6937: mov    edx,0x6
0x00ec693c: mov    rcx,rbx
0x00ec693f: call   0x140071f20
0x00ec6944: test   al,al
0x00ec6946: je     0x140ec6965
0x00ec6948: cmp    DWORD PTR [rdi+0xf8],0xfa0
0x00ec6952: jge    0x140ec6965
0x00ec6954: lea    rdx,[rip+0x86a215]        # 0x141730b70 ; literal="[SKILL:WOODCRAFT]"
0x00ec695b: lea    rcx,[rsp+0x28]
0x00ec6960: call   0x1400bb870
0x00ec6965: cmp    DWORD PTR [rdi+0xb0],0x1
0x00ec696c: jle    0x140ec69e6
0x00ec696e: mov    rax,QWORD PTR [rdi+0xa8]
0x00ec6975: test   BYTE PTR [rax+0x1],0x40
0x00ec6979: je     0x140ec6998
0x00ec697b: cmp    DWORD PTR [rdi+0xf8],0xfa0
0x00ec6985: jge    0x140ec6998
0x00ec6987: lea    rdx,[rip+0x86a24a]        # 0x141730bd8 ; literal="[SKILL:STONECRAFT]"
0x00ec698e: lea    rcx,[rsp+0x28]
0x00ec6993: call   0x1400bb870
0x00ec6998: cmp    DWORD PTR [rdi+0xb0],0x1
0x00ec699f: jle    0x140ec69e6
0x00ec69a1: mov    rax,QWORD PTR [rdi+0xa8]
0x00ec69a8: test   BYTE PTR [rax+0x1],0x4
0x00ec69ac: je     0x140ec69bf
0x00ec69ae: lea    rdx,[rip+0x86a2b3]        # 0x141730c68 ; literal="[SKILL:WEAVING]"
0x00ec69b5: lea    rcx,[rsp+0x28]
0x00ec69ba: call   0x1400bb870
0x00ec69bf: cmp    DWORD PTR [rdi+0xb0],0x1
0x00ec69c6: jle    0x140ec69e6
0x00ec69c8: mov    rax,QWORD PTR [rdi+0xa8]
0x00ec69cf: test   BYTE PTR [rax+0x1],0x8
0x00ec69d3: je     0x140ec69e6
0x00ec69d5: lea    rdx,[rip+0x86a28c]        # 0x141730c68 ; literal="[SKILL:WEAVING]"
0x00ec69dc: lea    rcx,[rsp+0x28]
0x00ec69e1: call   0x1400bb870
0x00ec69e6: mov    edx,0xf
0x00ec69eb: mov    rcx,rbx
0x00ec69ee: call   0x140071f20
0x00ec69f3: test   al,al
0x00ec69f5: je     0x140ec6a08
0x00ec69f7: lea    rdx,[rip+0x86a22a]        # 0x141730c28 ; literal="[SKILL:BONECARVE]"
0x00ec69fe: lea    rcx,[rsp+0x28]
0x00ec6a03: call   0x1400bb870
0x00ec6a08: mov    edx,0x10
0x00ec6a0d: mov    rcx,rbx
0x00ec6a10: call   0x140071f20
0x00ec6a15: test   al,al
0x00ec6a17: je     0x140ec6a2b
0x00ec6a19: lea    rdx,[rip+0x86a208]        # 0x141730c28 ; literal="[SKILL:BONECARVE]"
0x00ec6a20: lea    rcx,[rsp+0x28]
0x00ec6a25: call   0x1400bb870
0x00ec6a2a: nop
0x00ec6a2b: lea    rcx,[rbp+0x10c0]
0x00ec6a32: call   0x14006f7e0
0x00ec6a37: mov    rdi,QWORD PTR [rbp+0x68]
0x00ec6a3b: jmp    0x140ec70b2
0x00ec6a40: mov    edx,0x2
0x00ec6a45: mov    rcx,rbx
0x00ec6a48: call   0x140071f20
0x00ec6a4d: test   al,al
0x00ec6a4f: je     0x140ec6af0
0x00ec6a55: lea    rdx,[rip+0x869f2c]        # 0x141730988 ; literal="[BUILDING:METALSMITH:NONE]"
0x00ec6a5c: lea    rcx,[rsp+0x28]
0x00ec6a61: call   0x1400bb870
0x00ec6a66: lea    rcx,[rsp+0x28]
0x00ec6a6b: cmp    DWORD PTR [rsi+0xc4],0x6
0x00ec6a72: lea    rdx,[rip+0x869ed7]        # 0x141730950 ; literal="[REAGENT:metal bars:300:BAR:NONE:INORGANIC:NONE]"
0x00ec6a79: jge    0x140ec6a82
0x00ec6a7b: lea    rdx,[rip+0x869f3e]        # 0x1417309c0 ; literal="[REAGENT:metal bars:150:BAR:NONE:INORGANIC:NONE]"
0x00ec6a82: call   0x1400bb870
0x00ec6a87: lea    rdx,[rip+0x869f1a]        # 0x1417309a8 ; literal="[METAL_ITEM_MATERIAL]"
0x00ec6a8e: lea    rcx,[rsp+0x28]
0x00ec6a93: call   0x1400bb870
0x00ec6a98: lea    rdx,[rip+0x869a61]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6a9f: lea    rcx,[rbp+0x300]
0x00ec6aa6: call   0x14006f510
0x00ec6aab: lea    rdx,[rsi+0x8]
0x00ec6aaf: lea    rcx,[rbp+0x300]
0x00ec6ab6: call   0x1400b9ca0
0x00ec6abb: lea    rdx,[rip+0x869e16]        # 0x1417308d8 ; literal=":GET_MATERIAL_FROM_REAGENT:metal bars:NONE]"
0x00ec6ac2: lea    rcx,[rbp+0x300]
0x00ec6ac9: call   0x14006f4f0
0x00ec6ace: lea    rdx,[rbp+0x300]
0x00ec6ad5: lea    rcx,[rsp+0x28]
0x00ec6ada: call   0x1400bb700
0x00ec6adf: lea    rdx,[rip+0x869dda]        # 0x1417308c0 ; literal="[SKILL:METALCRAFT]"
0x00ec6ae6: lea    rcx,[rsp+0x28]
0x00ec6aeb: call   0x1400bb870
0x00ec6af0: mov    r14d,0x3
0x00ec6af6: mov    edx,r14d
0x00ec6af9: mov    rcx,rbx
0x00ec6afc: call   0x140071f20
0x00ec6b01: test   al,al
0x00ec6b03: je     0x140ec6bb5
0x00ec6b09: cmp    DWORD PTR [rsi+0xbc],0xfa0
0x00ec6b13: jl     0x140ec6bb5
0x00ec6b19: lea    rdx,[rip+0x869fb8]        # 0x141730ad8 ; literal="[BUILDING:MASON:NONE]"
0x00ec6b20: lea    rcx,[rsp+0x28]
0x00ec6b25: call   0x1400bb870
0x00ec6b2a: lea    rdx,[rip+0x869f77]        # 0x141730aa8 ; literal="[REAGENT:stone:1:BOULDER:NONE:INORGANIC:NONE]"
0x00ec6b31: lea    rcx,[rsp+0x28]
0x00ec6b36: call   0x1400bb870
0x00ec6b3b: lea    rdx,[rip+0x869ece]        # 0x141730a10 ; literal="[WORTHLESS_STONE_ONLY]"
0x00ec6b42: lea    rcx,[rsp+0x28]
0x00ec6b47: call   0x1400bb870
0x00ec6b4c: lea    rdx,[rip+0x869ea5]        # 0x1417309f8 ; literal="[HARD_ITEM_MATERIAL]"
0x00ec6b53: lea    rcx,[rsp+0x28]
0x00ec6b58: call   0x1400bb870
0x00ec6b5d: lea    rdx,[rip+0x86999c]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6b64: lea    rcx,[rbp+0x300]
0x00ec6b6b: call   0x14006f510
0x00ec6b70: lea    rdx,[rsi+0x8]
0x00ec6b74: lea    rcx,[rbp+0x300]
0x00ec6b7b: call   0x1400b9ca0
0x00ec6b80: lea    rdx,[rip+0x869eb9]        # 0x141730a40 ; literal=":GET_MATERIAL_FROM_REAGENT:stone:NONE]"
0x00ec6b87: lea    rcx,[rbp+0x300]
0x00ec6b8e: call   0x14006f4f0
0x00ec6b93: lea    rdx,[rbp+0x300]
0x00ec6b9a: lea    rcx,[rsp+0x28]
0x00ec6b9f: call   0x1400bb700
0x00ec6ba4: lea    rdx,[rip+0x869a0d]        # 0x1417305b8 ; literal="[SKILL:MASONRY]"
0x00ec6bab: lea    rcx,[rsp+0x28]
0x00ec6bb0: call   0x1400bb870
0x00ec6bb5: mov    edx,r14d
0x00ec6bb8: mov    rcx,rbx
0x00ec6bbb: call   0x140071f20
0x00ec6bc0: test   al,al
0x00ec6bc2: je     0x140ec6c74
0x00ec6bc8: cmp    DWORD PTR [rsi+0xbc],0xfa0
0x00ec6bd2: jge    0x140ec6c74
0x00ec6bd8: lea    rdx,[rip+0x869fa9]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec6bdf: lea    rcx,[rsp+0x28]
0x00ec6be4: call   0x1400bb870
0x00ec6be9: lea    rdx,[rip+0x869eb8]        # 0x141730aa8 ; literal="[REAGENT:stone:1:BOULDER:NONE:INORGANIC:NONE]"
0x00ec6bf0: lea    rcx,[rsp+0x28]
0x00ec6bf5: call   0x1400bb870
0x00ec6bfa: lea    rdx,[rip+0x869e0f]        # 0x141730a10 ; literal="[WORTHLESS_STONE_ONLY]"
0x00ec6c01: lea    rcx,[rsp+0x28]
0x00ec6c06: call   0x1400bb870
0x00ec6c0b: lea    rdx,[rip+0x869de6]        # 0x1417309f8 ; literal="[HARD_ITEM_MATERIAL]"
0x00ec6c12: lea    rcx,[rsp+0x28]
0x00ec6c17: call   0x1400bb870
0x00ec6c1c: lea    rdx,[rip+0x8698dd]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6c23: lea    rcx,[rbp+0x300]
0x00ec6c2a: call   0x14006f510
0x00ec6c2f: lea    rdx,[rsi+0x8]
0x00ec6c33: lea    rcx,[rbp+0x300]
0x00ec6c3a: call   0x1400b9ca0
0x00ec6c3f: lea    rdx,[rip+0x869dfa]        # 0x141730a40 ; literal=":GET_MATERIAL_FROM_REAGENT:stone:NONE]"
0x00ec6c46: lea    rcx,[rbp+0x300]
0x00ec6c4d: call   0x14006f4f0
0x00ec6c52: lea    rdx,[rbp+0x300]
0x00ec6c59: lea    rcx,[rsp+0x28]
0x00ec6c5e: call   0x1400bb700
0x00ec6c63: lea    rdx,[rip+0x869f6e]        # 0x141730bd8 ; literal="[SKILL:STONECRAFT]"
0x00ec6c6a: lea    rcx,[rsp+0x28]
0x00ec6c6f: call   0x1400bb870
0x00ec6c74: mov    edx,0x4
0x00ec6c79: mov    rcx,rbx
0x00ec6c7c: call   0x140071f20
0x00ec6c81: test   al,al
0x00ec6c83: je     0x140ec6d0f
0x00ec6c89: cmp    DWORD PTR [rsi+0xbc],0xfa0
0x00ec6c93: jl     0x140ec6d0f
0x00ec6c95: lea    rdx,[rip+0x869c94]        # 0x141730930 ; literal="[BUILDING:CARPENTER:NONE]"
0x00ec6c9c: lea    rcx,[rsp+0x28]
0x00ec6ca1: call   0x1400bb870
0x00ec6ca6: lea    rdx,[rip+0x869c5b]        # 0x141730908 ; literal="[REAGENT:wood:1:WOOD:NONE:NONE:NONE]"
0x00ec6cad: lea    rcx,[rsp+0x28]
0x00ec6cb2: call   0x1400bb870
0x00ec6cb7: lea    rdx,[rip+0x869842]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6cbe: lea    rcx,[rbp+0x300]
0x00ec6cc5: call   0x14006f510
0x00ec6cca: lea    rdx,[rsi+0x8]
0x00ec6cce: lea    rcx,[rbp+0x300]
0x00ec6cd5: call   0x1400b9ca0
0x00ec6cda: lea    rdx,[rip+0x869d9f]        # 0x141730a80 ; literal=":GET_MATERIAL_FROM_REAGENT:wood:NONE]"
0x00ec6ce1: lea    rcx,[rbp+0x300]
0x00ec6ce8: call   0x14006f4f0
0x00ec6ced: lea    rdx,[rbp+0x300]
0x00ec6cf4: lea    rcx,[rsp+0x28]
0x00ec6cf9: call   0x1400bb700
0x00ec6cfe: lea    rdx,[rip+0x869d63]        # 0x141730a68 ; literal="[SKILL:CARPENTRY]"
0x00ec6d05: lea    rcx,[rsp+0x28]
0x00ec6d0a: call   0x1400bb870
0x00ec6d0f: mov    edx,0x4
0x00ec6d14: mov    rcx,rbx
0x00ec6d17: call   0x140071f20
0x00ec6d1c: test   al,al
0x00ec6d1e: je     0x140ec6daa
0x00ec6d24: cmp    DWORD PTR [rsi+0xbc],0xfa0
0x00ec6d2e: jge    0x140ec6daa
0x00ec6d30: lea    rdx,[rip+0x869e51]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec6d37: lea    rcx,[rsp+0x28]
0x00ec6d3c: call   0x1400bb870
0x00ec6d41: lea    rdx,[rip+0x869bc0]        # 0x141730908 ; literal="[REAGENT:wood:1:WOOD:NONE:NONE:NONE]"
0x00ec6d48: lea    rcx,[rsp+0x28]
0x00ec6d4d: call   0x1400bb870
0x00ec6d52: lea    rdx,[rip+0x8697a7]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6d59: lea    rcx,[rbp+0x300]
0x00ec6d60: call   0x14006f510
0x00ec6d65: lea    rdx,[rsi+0x8]
0x00ec6d69: lea    rcx,[rbp+0x300]
0x00ec6d70: call   0x1400b9ca0
0x00ec6d75: lea    rdx,[rip+0x869d04]        # 0x141730a80 ; literal=":GET_MATERIAL_FROM_REAGENT:wood:NONE]"
0x00ec6d7c: lea    rcx,[rbp+0x300]
0x00ec6d83: call   0x14006f4f0
0x00ec6d88: lea    rdx,[rbp+0x300]
0x00ec6d8f: lea    rcx,[rsp+0x28]
0x00ec6d94: call   0x1400bb700
0x00ec6d99: lea    rdx,[rip+0x869dd0]        # 0x141730b70 ; literal="[SKILL:WOODCRAFT]"
0x00ec6da0: lea    rcx,[rsp+0x28]
0x00ec6da5: call   0x1400bb870
0x00ec6daa: mov    edx,0x5
0x00ec6daf: mov    rcx,rbx
0x00ec6db2: call   0x140071f20
0x00ec6db7: test   al,al
0x00ec6db9: je     0x140ec6e9f
0x00ec6dbf: lea    rdx,[rip+0x869972]        # 0x141730738 ; literal="[BUILDING:GLASS:NONE]"
0x00ec6dc6: lea    rcx,[rsp+0x28]
0x00ec6dcb: call   0x1400bb870
0x00ec6dd0: lea    rdx,[rip+0x869a79]        # 0x141730850 ; literal="[REAGENT:sand:150:POWDER_MISC:NONE:NONE:NONE]"
0x00ec6dd7: lea    rcx,[rsp+0x28]
0x00ec6ddc: call   0x1400bb870
0x00ec6de1: lea    rdx,[rip+0x869a50]        # 0x141730838 ; literal="[IS_SAND_MATERIAL]"
0x00ec6de8: lea    rcx,[rsp+0x28]
0x00ec6ded: call   0x1400bb870
0x00ec6df2: lea    rdx,[rip+0x869a97]        # 0x141730890 ; literal="[REAGENT:sand bag:1:NONE:NONE:NONE:NONE]"
0x00ec6df9: lea    rcx,[rsp+0x28]
0x00ec6dfe: call   0x1400bb870
0x00ec6e03: lea    rdx,[rip+0x869a76]        # 0x141730880 ; literal="[CONTAINS:sand]"
0x00ec6e0a: lea    rcx,[rsp+0x28]
0x00ec6e0f: call   0x1400bb870
0x00ec6e14: lea    rdx,[rip+0x8699d5]        # 0x1417307f0 ; literal="[PRESERVE_REAGENT]"
0x00ec6e1b: lea    rcx,[rsp+0x28]
0x00ec6e20: call   0x1400bb870
0x00ec6e25: lea    rdx,[rip+0x86999c]        # 0x1417307c8 ; literal="[DOES_NOT_DETERMINE_PRODUCT_AMOUNT]"
0x00ec6e2c: lea    rcx,[rsp+0x28]
0x00ec6e31: call   0x1400bb870
0x00ec6e36: lea    rdx,[rip+0x8696c3]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6e3d: lea    rcx,[rbp+0x300]
0x00ec6e44: call   0x14006f510
0x00ec6e49: lea    rdx,[rsi+0x8]
0x00ec6e4d: lea    rcx,[rbp+0x300]
0x00ec6e54: call   0x1400b9ca0
0x00ec6e59: lea    rdx,[rip+0x8699c0]        # 0x141730820 ; literal=":GLASS_GREEN:NONE]"
0x00ec6e60: lea    rcx,[rbp+0x300]
0x00ec6e67: call   0x14006f4f0
0x00ec6e6c: lea    rdx,[rbp+0x300]
0x00ec6e73: lea    rcx,[rsp+0x28]
0x00ec6e78: call   0x1400bb700
0x00ec6e7d: lea    rdx,[rip+0x8698e0]        # 0x141730764 ; literal="[FUEL]"
0x00ec6e84: lea    rcx,[rsp+0x28]
0x00ec6e89: call   0x1400bb870
0x00ec6e8e: lea    rdx,[rip+0x869973]        # 0x141730808 ; literal="[SKILL:GLASSMAKER]"
0x00ec6e95: lea    rcx,[rsp+0x28]
0x00ec6e9a: call   0x1400bb870
0x00ec6e9f: mov    edx,0x6
0x00ec6ea4: mov    rcx,rbx
0x00ec6ea7: call   0x140071f20
0x00ec6eac: test   al,al
0x00ec6eae: je     0x140ec6f50
0x00ec6eb4: lea    rdx,[rip+0x869775]        # 0x141730630 ; literal="[BUILDING:KILN:NONE]"
0x00ec6ebb: lea    rcx,[rsp+0x28]
0x00ec6ec0: call   0x1400bb870
0x00ec6ec5: lea    rdx,[rip+0x86973c]        # 0x141730608 ; literal="[REAGENT:clay:1:BOULDER:NONE:NONE:NONE]"
0x00ec6ecc: lea    rcx,[rsp+0x28]
0x00ec6ed1: call   0x1400bb870
0x00ec6ed6: lea    rdx,[rip+0x869783]        # 0x141730660 ; literal="[HAS_MATERIAL_REACTION_PRODUCT:FIRED_MAT]"
0x00ec6edd: lea    rcx,[rsp+0x28]
0x00ec6ee2: call   0x1400bb870
0x00ec6ee7: lea    rdx,[rip+0x869612]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6eee: lea    rcx,[rbp+0x300]
0x00ec6ef5: call   0x14006f510
0x00ec6efa: lea    rdx,[rsi+0x8]
0x00ec6efe: lea    rcx,[rbp+0x300]
0x00ec6f05: call   0x1400b9ca0
0x00ec6f0a: lea    rdx,[rip+0x86985f]        # 0x141730770 ; literal=":GET_MATERIAL_FROM_REAGENT:clay:FIRED_MAT]"
0x00ec6f11: lea    rcx,[rbp+0x300]
0x00ec6f18: call   0x14006f4f0
0x00ec6f1d: lea    rdx,[rbp+0x300]
0x00ec6f24: lea    rcx,[rsp+0x28]
0x00ec6f29: call   0x1400bb700
0x00ec6f2e: lea    rdx,[rip+0x86982f]        # 0x141730764 ; literal="[FUEL]"
0x00ec6f35: lea    rcx,[rsp+0x28]
0x00ec6f3a: call   0x1400bb870
0x00ec6f3f: lea    rdx,[rip+0x869872]        # 0x1417307b8 ; literal="[SKILL:POTTERY]"
0x00ec6f46: lea    rcx,[rsp+0x28]
0x00ec6f4b: call   0x1400bb870
0x00ec6f50: mov    edx,0x7
0x00ec6f55: mov    rcx,rbx
0x00ec6f58: call   0x140071f20
0x00ec6f5d: test   al,al
0x00ec6f5f: je     0x140ec7001
0x00ec6f65: lea    rdx,[rip+0x869c1c]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec6f6c: lea    rcx,[rsp+0x28]
0x00ec6f71: call   0x1400bb870
0x00ec6f76: lea    rdx,[rip+0x869d23]        # 0x141730ca0 ; literal="[REAGENT:shell:1:NONE:NONE:NONE:NONE]"
0x00ec6f7d: lea    rcx,[rsp+0x28]
0x00ec6f82: call   0x1400bb870
0x00ec6f87: lea    rdx,[rip+0x869c7a]        # 0x141730c08 ; literal="[USE_BODY_COMPONENT][UNROTTEN]"
0x00ec6f8e: lea    rcx,[rsp+0x28]
0x00ec6f93: call   0x1400bb870
0x00ec6f98: lea    rdx,[rip+0x869c51]        # 0x141730bf0 ; literal="[ANY_SHELL_MATERIAL]"
0x00ec6f9f: lea    rcx,[rsp+0x28]
0x00ec6fa4: call   0x1400bb870
0x00ec6fa9: lea    rdx,[rip+0x869550]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec6fb0: lea    rcx,[rbp+0x300]
0x00ec6fb7: call   0x14006f510
0x00ec6fbc: lea    rdx,[rsi+0x8]
0x00ec6fc0: lea    rcx,[rbp+0x300]
0x00ec6fc7: call   0x1400b9ca0
0x00ec6fcc: lea    rdx,[rip+0x869c6d]        # 0x141730c40 ; literal=":GET_MATERIAL_FROM_REAGENT:shell:NONE]"
0x00ec6fd3: lea    rcx,[rbp+0x300]
0x00ec6fda: call   0x14006f4f0
0x00ec6fdf: lea    rdx,[rbp+0x300]
0x00ec6fe6: lea    rcx,[rsp+0x28]
0x00ec6feb: call   0x1400bb700
0x00ec6ff0: lea    rdx,[rip+0x869c31]        # 0x141730c28 ; literal="[SKILL:BONECARVE]"
0x00ec6ff7: lea    rcx,[rsp+0x28]
0x00ec6ffc: call   0x1400bb870
0x00ec7001: mov    edx,0x8
0x00ec7006: mov    rcx,rbx
0x00ec7009: call   0x140071f20
0x00ec700e: test   al,al
0x00ec7010: je     0x140ec70b2
0x00ec7016: lea    rdx,[rip+0x869b6b]        # 0x141730b88 ; literal="[BUILDING:CRAFTSMAN:NONE]"
0x00ec701d: lea    rcx,[rsp+0x28]
0x00ec7022: call   0x1400bb870
0x00ec7027: lea    rdx,[rip+0x869d9a]        # 0x141730dc8 ; literal="[REAGENT:bone:1:NONE:NONE:NONE:NONE]"
0x00ec702e: lea    rcx,[rsp+0x28]
0x00ec7033: call   0x1400bb870
0x00ec7038: lea    rdx,[rip+0x869bc9]        # 0x141730c08 ; literal="[USE_BODY_COMPONENT][UNROTTEN]"
0x00ec703f: lea    rcx,[rsp+0x28]
0x00ec7044: call   0x1400bb870
0x00ec7049: lea    rdx,[rip+0x869d60]        # 0x141730db0 ; literal="[ANY_BONE_MATERIAL]"
0x00ec7050: lea    rcx,[rsp+0x28]
0x00ec7055: call   0x1400bb870
0x00ec705a: lea    rdx,[rip+0x86949f]        # 0x141730500 ; literal="[PRODUCT:100:1:INSTRUMENT:"
0x00ec7061: lea    rcx,[rbp+0x300]
0x00ec7068: call   0x14006f510
0x00ec706d: lea    rdx,[rsi+0x8]
0x00ec7071: lea    rcx,[rbp+0x300]
0x00ec7078: call   0x1400b9ca0
0x00ec707d: lea    rdx,[rip+0x869d84]        # 0x141730e08 ; literal=":GET_MATERIAL_FROM_REAGENT:bone:NONE]"
0x00ec7084: lea    rcx,[rbp+0x300]
0x00ec708b: call   0x14006f4f0
0x00ec7090: lea    rdx,[rbp+0x300]
0x00ec7097: lea    rcx,[rsp+0x28]
0x00ec709c: call   0x1400bb700
0x00ec70a1: lea    rdx,[rip+0x869b80]        # 0x141730c28 ; literal="[SKILL:BONECARVE]"
0x00ec70a8: lea    rcx,[rsp+0x28]
0x00ec70ad: call   0x1400bb870
0x00ec70b2: mov    r8d,0x1c
0x00ec70b8: lea    rdx,[rip+0x8694d9]        # 0x141730598 ; literal="[DESCRIPTION:USE_INSTRUMENT:"
0x00ec70bf: lea    rcx,[rbp+0x300]
0x00ec70c6: call   0x14006f860
0x00ec70cb: lea    rdx,[rsi+0x8]
0x00ec70cf: lea    rcx,[rbp+0x300]
0x00ec70d6: call   0x1400b9ca0
0x00ec70db: mov    r8d,0x1
0x00ec70e1: lea    rdx,[rip+0x73157c]        # 0x1415f8664 ; literal="]"
0x00ec70e8: lea    rcx,[rbp+0x300]
0x00ec70ef: call   0x14006f9a0
0x00ec70f4: lea    rdx,[rbp+0x300]
0x00ec70fb: lea    rcx,[rsp+0x28]
0x00ec7100: call   0x1400bb700
0x00ec7105: lea    rdx,[rip+0x8694dc]        # 0x1417305e8 ; literal="[CATEGORY:INSTRUMENT]"
0x00ec710c: lea    rcx,[rsp+0x28]
0x00ec7111: call   0x1400bb870
0x00ec7116: cmp    BYTE PTR [rsp+0x58],0x0
0x00ec711b: jne    0x140ec7144
0x00ec711d: lea    rdx,[rip+0x8694a4]        # 0x1417305c8 ; literal="[CATEGORY_NAME:Make instrument"
0x00ec7124: lea    rcx,[rsp+0x28]
0x00ec7129: call   0x1400bb870
0x00ec712e: lea    rdx,[rip+0x8693fb]        # 0x141730530 ; literal="[CATEGORY_DESCRIPTION:Assemble complete musical instruments and construct single-piece instruments.]"
0x00ec7135: lea    rcx,[rsp+0x28]
0x00ec713a: call   0x1400bb870
0x00ec713f: mov    BYTE PTR [rsp+0x58],0x1
0x00ec7144: lea    rcx,[rbp+0x300]
0x00ec714b: call   0x14006f7e0
0x00ec7150: nop
0x00ec7151: lea    rcx,[rbp+0x10e0]
0x00ec7158: call   0x14006f7e0
0x00ec715d: inc    r12d
0x00ec7160: cmp    r12d,edi
0x00ec7163: jl     0x140ec6280
0x00ec7169: lea    rcx,[rip+0x1629fe8]        # 0x1424f1158
0x00ec7170: call   0x14006ede0
0x00ec7175: mov    rbx,rax
0x00ec7178: mov    r8b,0x1
0x00ec717b: lea    rdx,[rsp+0x28]
0x00ec7180: lea    rcx,[rip+0x1629fd1]        # 0x1424f1158
0x00ec7187: call   0x140ecb7d0
0x00ec718c: lea    rcx,[rbp+0x1d8]
0x00ec7193: call   0x140de0ea0
0x00ec7198: lea    rcx,[rip+0x1629fb9]        # 0x1424f1158
0x00ec719f: call   0x14006ede0
0x00ec71a4: cmp    ebx,eax
0x00ec71a6: jge    0x140ec71fd
0x00ec71a8: nop    DWORD PTR [rax+rax*1+0x0]
0x00ec71b0: lea    rcx,[rbp+0x1d8]
0x00ec71b7: call   0x140de0ec0
0x00ec71bc: movsxd rdx,ebx
0x00ec71bf: lea    rcx,[rip+0x1629f92]        # 0x1424f1158
0x00ec71c6: call   0x14006f1b0
0x00ec71cb: mov    rcx,QWORD PTR [rax]
0x00ec71ce: mov    QWORD PTR [rbp+0x1d8],rcx
0x00ec71d5: mov    r8b,0x1
0x00ec71d8: lea    rdx,[rbp+0x1d8]
0x00ec71df: lea    rcx,[rip+0x1629f72]        # 0x1424f1158
0x00ec71e6: call   0x140eccb40
0x00ec71eb: inc    ebx
0x00ec71ed: lea    rcx,[rip+0x1629f64]        # 0x1424f1158
0x00ec71f4: call   0x14006ede0
0x00ec71f9: cmp    ebx,eax
0x00ec71fb: jl     0x140ec71b0
0x00ec71fd: lea    rcx,[rbp+0x760]
0x00ec7204: call   0x140067dc0
0x00ec7209: nop
0x00ec720a: lea    rcx,[rsp+0x28]
0x00ec720f: call   0x1400bb920
0x00ec7214: nop
0x00ec7215: lea    rcx,[rbp+0x100]
0x00ec721c: call   0x1400bb920
0x00ec7221: nop
0x00ec7222: lea    rcx,[rbp-0x48]
0x00ec7226: call   0x1400bb920
0x00ec722b: nop
0x00ec722c: lea    rcx,[rbp+0x78]
0x00ec7230: call   0x1400bb920
0x00ec7235: mov    rcx,QWORD PTR [rbp+0x11a0]
0x00ec723c: xor    rcx,rsp
0x00ec723f: call   0x1415345d0
0x00ec7244: mov    rbx,QWORD PTR [rsp+0x12f0]
0x00ec724c: add    rsp,0x12b0
0x00ec7253: pop    r15
0x00ec7255: pop    r14
0x00ec7257: pop    r13
0x00ec7259: pop    r12
0x00ec725b: pop    rdi
0x00ec725c: pop    rsi
0x00ec725d: pop    rbp
0x00ec725e: ret
0x00ec725f: nop
