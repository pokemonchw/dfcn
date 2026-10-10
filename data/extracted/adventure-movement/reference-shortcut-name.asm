# reference PE:6a70a6d9:02711000; shortcut-name; RVA 0x8ecb30..0x8ece32
0x008ecb30: mov    QWORD PTR [rsp+0x8],rbx
0x008ecb35: mov    QWORD PTR [rsp+0x18],rbp
0x008ecb3a: mov    QWORD PTR [rsp+0x20],rsi
0x008ecb3f: push   rdi
0x008ecb40: push   r12
0x008ecb42: push   r13
0x008ecb44: push   r14
0x008ecb46: push   r15
0x008ecb48: sub    rsp,0x80
0x008ecb4f: mov    rax,QWORD PTR [rip+0xfaf4ea]        # 0x14189c040
0x008ecb56: xor    rax,rsp
0x008ecb59: mov    QWORD PTR [rsp+0x78],rax
0x008ecb5e: mov    ebx,r8d
0x008ecb61: mov    rdi,rdx
0x008ecb64: mov    QWORD PTR [rsp+0x28],rdx
0x008ecb69: xor    r13d,r13d
0x008ecb6c: mov    rdx,QWORD PTR [rip+0x1aa3ae5]        # 0x142390658
0x008ecb73: mov    rax,QWORD PTR [rdx+0x8]
0x008ecb77: mov    rcx,rdx
0x008ecb7a: cmp    BYTE PTR [rax+0x19],r13b
0x008ecb7e: jne    0x1408ecb97
0x008ecb80: cmp    DWORD PTR [rax+0x20],ebx
0x008ecb83: jge    0x1408ecb8b
0x008ecb85: mov    rax,QWORD PTR [rax+0x10]
0x008ecb89: jmp    0x1408ecb91
0x008ecb8b: mov    rcx,rax
0x008ecb8e: mov    rax,QWORD PTR [rax]
0x008ecb91: cmp    BYTE PTR [rax+0x19],r13b
0x008ecb95: je     0x1408ecb80
0x008ecb97: cmp    BYTE PTR [rcx+0x19],r13b
0x008ecb9b: jne    0x1408ecba2
0x008ecb9d: cmp    ebx,DWORD PTR [rcx+0x20]
0x008ecba0: jge    0x1408ecba5
0x008ecba2: mov    rcx,rdx
0x008ecba5: cmp    rcx,rdx
0x008ecba8: je     0x1408ecbc8
0x008ecbaa: cmp    QWORD PTR [rcx+0x30],r13
0x008ecbae: je     0x1408ecbc8
0x008ecbb0: mov    rcx,QWORD PTR [rcx+0x28]
0x008ecbb4: mov    rdx,QWORD PTR [rcx]
0x008ecbb7: add    rdx,0x20
0x008ecbbb: mov    rcx,rdi
0x008ecbbe: call   0x14006f5d0
0x008ecbc3: jmp    0x1408ecdf5
0x008ecbc8: mov    r12,QWORD PTR [rip+0xcf8761]        # 0x1415e5330
0x008ecbcf: mov    rsi,QWORD PTR [rip+0x1dacc3a]        # 0x142699810
0x008ecbd6: mov    rax,QWORD PTR [rsi+0x8]
0x008ecbda: mov    QWORD PTR [rsp+0x40],rax
0x008ecbdf: mov    DWORD PTR [rsp+0x48],r13d
0x008ecbe4: mov    rcx,rsi
0x008ecbe7: cmp    BYTE PTR [rax+0x19],r13b
0x008ecbeb: jne    0x1408ecc19
0x008ecbed: nop    DWORD PTR [rax]
0x008ecbf0: mov    QWORD PTR [rsp+0x40],rax
0x008ecbf5: cmp    DWORD PTR [rax+0x20],ebx
0x008ecbf8: jge    0x1408ecc05
0x008ecbfa: mov    DWORD PTR [rsp+0x48],r13d
0x008ecbff: mov    rax,QWORD PTR [rax+0x10]
0x008ecc03: jmp    0x1408ecc13
0x008ecc05: mov    DWORD PTR [rsp+0x48],0x1
0x008ecc0d: mov    rcx,rax
0x008ecc10: mov    rax,QWORD PTR [rax]
0x008ecc13: cmp    BYTE PTR [rax+0x19],r13b
0x008ecc17: je     0x1408ecbf0
0x008ecc19: cmp    BYTE PTR [rcx+0x19],r13b
0x008ecc1d: jne    0x1408ecc24
0x008ecc1f: cmp    ebx,DWORD PTR [rcx+0x20]
0x008ecc22: jge    0x1408ecc9f
0x008ecc24: movabs rax,0x38e38e38e38e38e
0x008ecc2e: cmp    QWORD PTR [rip+0x1dacbe3],rax        # 0x142699818
0x008ecc35: je     0x1408ece2c
0x008ecc3b: lea    rbp,[rip+0x1dacbce]        # 0x142699810
0x008ecc42: mov    QWORD PTR [rsp+0x30],rbp
0x008ecc47: mov    QWORD PTR [rsp+0x38],r13
0x008ecc4c: mov    ecx,0x48
0x008ecc51: call   0x141539690
0x008ecc56: nop
0x008ecc57: mov    DWORD PTR [rax+0x20],ebx
0x008ecc5a: xorps  xmm0,xmm0
0x008ecc5d: movups XMMWORD PTR [rax+0x28],xmm0
0x008ecc61: mov    QWORD PTR [rax+0x38],r13
0x008ecc65: mov    QWORD PTR [rax+0x40],0xf
0x008ecc6d: mov    BYTE PTR [rax+0x28],0x0
0x008ecc71: mov    QWORD PTR [rax],rsi
0x008ecc74: mov    QWORD PTR [rax+0x8],rsi
0x008ecc78: mov    QWORD PTR [rax+0x10],rsi
0x008ecc7c: mov    WORD PTR [rax+0x18],0x0
0x008ecc82: movups xmm0,XMMWORD PTR [rsp+0x40]
0x008ecc87: movaps XMMWORD PTR [rsp+0x30],xmm0
0x008ecc8c: mov    r8,rax
0x008ecc8f: lea    rdx,[rsp+0x30]
0x008ecc94: mov    rcx,rbp
0x008ecc97: call   0x1400bae50
0x008ecc9c: mov    rcx,rax
0x008ecc9f: lea    rsi,[rcx+0x28]
0x008ecca3: mov    r15,QWORD PTR [rsi+0x10]
0x008ecca7: movabs rcx,0x7fffffffffffffff
0x008eccb1: mov    rax,rcx
0x008eccb4: sub    rax,r15
0x008eccb7: cmp    rax,0x1b
0x008eccbb: jb     0x1408ece26
0x008eccc1: cmp    QWORD PTR [rsi+0x18],0xf
0x008eccc6: jbe    0x1408ecccb
0x008eccc8: mov    rsi,QWORD PTR [rsi]
0x008ecccb: xorps  xmm0,xmm0
0x008eccce: movups XMMWORD PTR [rsp+0x58],xmm0
0x008eccd3: xorps  xmm1,xmm1
0x008eccd6: movdqu XMMWORD PTR [rsp+0x68],xmm1
0x008eccdc: lea    rbp,[r15+0x1b]
0x008ecce0: mov    ebx,0xf
0x008ecce5: lea    r14,[rsp+0x58]
0x008eccea: cmp    rbp,rbx
0x008ecced: jbe    0x1408ecd1d
0x008eccef: mov    rbx,rbp
0x008eccf2: or     rbx,0xf
0x008eccf6: cmp    rbx,rcx
0x008eccf9: jbe    0x1408ecd00
0x008eccfb: mov    rbx,rcx
0x008eccfe: jmp    0x1408ecd0c
0x008ecd00: mov    eax,0x16
0x008ecd05: cmp    rbx,rax
0x008ecd08: cmovb  rbx,rax
0x008ecd0c: lea    rcx,[rbx+0x1]
0x008ecd10: call   0x1400707d0
0x008ecd15: mov    r14,rax
0x008ecd18: mov    QWORD PTR [rsp+0x58],rax
0x008ecd1d: mov    QWORD PTR [rsp+0x68],rbp
0x008ecd22: mov    QWORD PTR [rsp+0x70],rbx
0x008ecd27: movups xmm0,XMMWORD PTR [rip+0xdd282a]        # 0x1416bf558 ; literal="Missing binding displayed: "
0x008ecd2e: movups XMMWORD PTR [r14],xmm0
0x008ecd32: movsd  xmm0,QWORD PTR [rip+0xdd282e]        # 0x1416bf568 ; literal="displayed: "
0x008ecd3a: movsd  QWORD PTR [r14+0x10],xmm0
0x008ecd40: movzx  eax,WORD PTR [rip+0xdd2829]        # 0x1416bf570 ; literal="d: "
0x008ecd47: mov    WORD PTR [r14+0x18],ax
0x008ecd4c: movzx  eax,BYTE PTR [rip+0xdd281f]        # 0x1416bf572 ; literal=" "
0x008ecd53: mov    BYTE PTR [r14+0x1a],al
0x008ecd57: lea    rcx,[r14+0x1b]
0x008ecd5b: mov    r8,r15
0x008ecd5e: mov    rdx,rsi
0x008ecd61: call   0x14153aa78
0x008ecd66: mov    BYTE PTR [r14+rbp*1],0x0
0x008ecd6b: lea    rdx,[rsp+0x58]
0x008ecd70: cmp    QWORD PTR [rsp+0x70],0xf
0x008ecd76: cmova  rdx,QWORD PTR [rsp+0x58]
0x008ecd7c: mov    r8,QWORD PTR [rsp+0x68]
0x008ecd81: mov    rcx,r12
0x008ecd84: call   0x140070920
0x008ecd89: lea    rdx,[rip+0xffffffffff7834f0]        # 0x140070280
0x008ecd90: mov    rcx,rax
0x008ecd93: call   QWORD PTR [rip+0xcf86bf]        # 0x1415e5458
0x008ecd99: nop
0x008ecd9a: mov    rdx,QWORD PTR [rsp+0x70]
0x008ecd9f: cmp    rdx,0xf
0x008ecda3: jbe    0x1408ecdda
0x008ecda5: inc    rdx
0x008ecda8: mov    rcx,QWORD PTR [rsp+0x58]
0x008ecdad: mov    rax,rcx
0x008ecdb0: cmp    rdx,0x1000
0x008ecdb7: jb     0x1408ecdd5
0x008ecdb9: add    rdx,0x27
0x008ecdbd: mov    rcx,QWORD PTR [rcx-0x8]
0x008ecdc1: sub    rax,rcx
0x008ecdc4: add    rax,0xfffffffffffffff8
0x008ecdc8: cmp    rax,0x1f
0x008ecdcc: jbe    0x1408ecdd5
0x008ecdce: call   QWORD PTR [rip+0xcf8d54]        # 0x1415e5b28
0x008ecdd4: int3
0x008ecdd5: call   0x141539680
0x008ecdda: xorps  xmm0,xmm0
0x008ecddd: movups XMMWORD PTR [rdi],xmm0
0x008ecde0: mov    QWORD PTR [rdi+0x10],0x1
0x008ecde8: mov    QWORD PTR [rdi+0x18],0xf
0x008ecdf0: mov    WORD PTR [rdi],0x3f
0x008ecdf5: mov    rax,rdi
0x008ecdf8: mov    rcx,QWORD PTR [rsp+0x78]
0x008ecdfd: xor    rcx,rsp
0x008ece00: call   0x141539660
0x008ece05: lea    r11,[rsp+0x80]
0x008ece0d: mov    rbx,QWORD PTR [r11+0x30]
0x008ece11: mov    rbp,QWORD PTR [r11+0x40]
0x008ece15: mov    rsi,QWORD PTR [r11+0x48]
0x008ece19: mov    rsp,r11
0x008ece1c: pop    r15
0x008ece1e: pop    r14
0x008ece20: pop    r13
0x008ece22: pop    r12
0x008ece24: pop    rdi
0x008ece25: ret
0x008ece26: call   0x140065890
0x008ece2b: int3
0x008ece2c: call   0x140071e70
0x008ece31: int3
