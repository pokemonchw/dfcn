# reference; PE:6a70a6d9:02711000; intelligence-renderer; RVA 0x4769d0..0x4792c7; PE disassembly
0x004769d0: rex push rbp
0x004769d2: push   rbx
0x004769d3: push   rsi
0x004769d4: push   rdi
0x004769d5: push   r12
0x004769d7: push   r13
0x004769d9: push   r14
0x004769db: push   r15
0x004769dd: lea    rbp,[rsp-0x48]
0x004769e2: sub    rsp,0x148
0x004769e9: mov    rax,QWORD PTR [rip+0x1425650]        # 0x14189c040
0x004769f0: xor    rax,rsp
0x004769f3: mov    QWORD PTR [rbp+0x30],rax
0x004769f7: mov    DWORD PTR [rsp+0x60],r9d
0x004769fc: mov    ebx,r8d
0x004769ff: mov    DWORD PTR [rsp+0x64],ebx
0x00476a03: mov    r15d,edx
0x00476a06: mov    DWORD PTR [rbp-0x80],edx
0x00476a09: mov    r14,rcx
0x00476a0c: mov    QWORD PTR [rsp+0x70],rcx
0x00476a11: xor    r13d,r13d
0x00476a14: cmp    BYTE PTR [rcx+0x420],r13b
0x00476a1b: je     0x140476a2e
0x00476a1d: mov    BYTE PTR [rcx+0x420],r13b
0x00476a24: call   0x14046faa0
0x00476a29: mov    r9d,DWORD PTR [rsp+0x60]
0x00476a2e: mov    esi,0xffffffff
0x00476a33: mov    DWORD PTR [rbp-0x54],esi
0x00476a36: mov    DWORD PTR [rbp-0x58],esi
0x00476a39: cmp    BYTE PTR [rip+0x1f19b95],r13b        # 0x1423905d5
0x00476a40: je     0x140476a54
0x00476a42: mov    eax,DWORD PTR [rip+0x21d3b68]        # 0x14264a5b0
0x00476a48: mov    DWORD PTR [rbp-0x54],eax
0x00476a4b: mov    eax,DWORD PTR [rip+0x21d3b63]        # 0x14264a5b4
0x00476a51: mov    DWORD PTR [rbp-0x58],eax
0x00476a54: mov    eax,DWORD PTR [rip+0x1f56d2e]        # 0x1423cd788
0x00476a5a: add    eax,0xfffffffc
0x00476a5d: mov    DWORD PTR [rbp-0x7c],eax
0x00476a60: lea    ecx,[r9-0x1d]
0x00476a64: lea    eax,[rbx+0x7d]
0x00476a67: mov    edi,0xa
0x00476a6c: mov    r12d,0x8
0x00476a72: cmp    eax,ecx
0x00476a74: cmovle edi,r12d
0x00476a78: mov    DWORD PTR [rsp+0x68],edi
0x00476a7c: lea    eax,[rbx+0x61]
0x00476a7f: cmp    eax,ecx
0x00476a81: jle    0x140476a8a
0x00476a83: add    edi,0x2
0x00476a86: mov    DWORD PTR [rsp+0x68],edi
0x00476a8a: xorps  xmm0,xmm0
0x00476a8d: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476a91: mov    QWORD PTR [rbp+0x0],0x4
0x00476a99: mov    QWORD PTR [rbp+0x8],0xf
0x00476aa1: mov    eax,DWORD PTR [rip+0x1180699]        # 0x1415f7140 ; literal='Tabs'
0x00476aa7: mov    DWORD PTR [rbp-0x10],eax
0x00476aaa: mov    BYTE PTR [rbp-0xc],r13b
0x00476aae: lea    r8,[rbp-0x10]
0x00476ab2: lea    rdx,[rbp-0x20]
0x00476ab6: mov    rcx,r14
0x00476ab9: call   0x1400f0000
0x00476abe: nop
0x00476abf: lea    rcx,[rbp-0x10]
0x00476ac3: call   0x14006f850
0x00476ac8: mov    DWORD PTR [r14+0xb0],r12d
0x00476acf: mov    DWORD PTR [r14+0xa8],0x5
0x00476ada: mov    DWORD PTR [r14+0xac],0xffffffe0
0x00476ae5: mov    DWORD PTR [r14+0xa4],0xfffffffc
0x00476af0: mov    ecx,DWORD PTR [r14+0x18]
0x00476af4: sub    ecx,DWORD PTR [r14+0x10]
0x00476af8: inc    ecx
0x00476afa: mov    eax,DWORD PTR [r14+0xc4]
0x00476b01: cmp    ecx,eax
0x00476b03: cmovle ecx,eax
0x00476b06: cmp    ecx,0x76
0x00476b09: jl     0x140476b16
0x00476b0b: mov    DWORD PTR [r14+0xb0],0x6
0x00476b16: mov    rdx,QWORD PTR [rbp-0x20]
0x00476b1a: mov    rcx,QWORD PTR [rdx+0x180]
0x00476b21: mov    rax,QWORD PTR [rdx+0x188]
0x00476b28: sub    rax,rcx
0x00476b2b: test   rax,0xffffffffffffffe0
0x00476b31: jne    0x140476b50
0x00476b33: xorps  xmm0,xmm0
0x00476b36: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476b3a: mov    r8,r13
0x00476b3d: mov    QWORD PTR [rbp+0x0],r13
0x00476b41: mov    eax,0xf
0x00476b46: mov    QWORD PTR [rbp+0x8],rax
0x00476b4a: mov    BYTE PTR [rbp-0x10],r8b
0x00476b4e: jmp    0x140476b6f
0x00476b50: mov    rdx,QWORD PTR [rdx+0x178]
0x00476b57: shl    rdx,0x5
0x00476b5b: add    rdx,rcx
0x00476b5e: lea    rcx,[rbp-0x10]
0x00476b62: call   0x14006f5d0
0x00476b67: mov    rax,QWORD PTR [rbp+0x8]
0x00476b6b: mov    r8,QWORD PTR [rbp+0x0]
0x00476b6f: lea    rcx,[rbp-0x10]
0x00476b73: cmp    rax,0xf
0x00476b77: cmova  rcx,QWORD PTR [rbp-0x10]
0x00476b7c: cmp    r8,0xc
0x00476b80: jne    0x1404791de
0x00476b86: lea    rdx,[rip+0x11c85fb]        # 0x14163f188 ; literal='Intelligence'
0x00476b8d: call   0x14153ae14
0x00476b92: test   eax,eax
0x00476b94: jne    0x1404791de
0x00476b9a: lea    rcx,[rbp-0x10]
0x00476b9e: call   0x14006f850
0x00476ba3: mov    rax,QWORD PTR [rip+0x206cd96]        # 0x1424e3940
0x00476baa: sub    rax,QWORD PTR [rip+0x206cd87]        # 0x1424e3938
0x00476bb1: mov    r10,QWORD PTR [rsp+0x70]
0x00476bb6: test   rax,0xfffffffffffffff8
0x00476bbc: jne    0x140476d7d
0x00476bc2: mov    rax,QWORD PTR [r10+0x250]
0x00476bc9: sub    rax,QWORD PTR [r10+0x248]
0x00476bd0: test   rax,0xfffffffffffffff8
0x00476bd6: jne    0x140476d7d
0x00476bdc: mov    rax,QWORD PTR [r10+0x268]
0x00476be3: sub    rax,QWORD PTR [r10+0x260]
0x00476bea: test   rax,0xfffffffffffffff8
0x00476bf0: jne    0x140476d7d
0x00476bf6: mov    rax,QWORD PTR [r10+0x280]
0x00476bfd: sub    rax,QWORD PTR [r10+0x278]
0x00476c04: test   rax,0xfffffffffffffff8
0x00476c0a: jne    0x140476d7d
0x00476c10: mov    DWORD PTR [rip+0x21d3862],0x1000007        # 0x14264a47c
0x00476c1a: add    ebx,0x6
0x00476c1d: mov    DWORD PTR [rip+0x21d3851],ebx        # 0x14264a474
0x00476c23: lea    eax,[rdi+0x2]
0x00476c26: mov    DWORD PTR [rip+0x21d384c],eax        # 0x14264a478
0x00476c2c: xorps  xmm0,xmm0
0x00476c2f: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476c33: mov    ecx,0x30
0x00476c38: call   0x1400707d0
0x00476c3d: mov    rcx,rax
0x00476c40: mov    QWORD PTR [rbp-0x10],rax
0x00476c44: mov    QWORD PTR [rbp+0x0],0x29
0x00476c4c: mov    QWORD PTR [rbp+0x8],0x2f
0x00476c54: movups xmm0,XMMWORD PTR [rip+0x11c84fd]        # 0x14163f158 ; literal='There is no intelligence information yet.'
0x00476c5b: movups XMMWORD PTR [rax],xmm0
0x00476c5e: movups xmm1,XMMWORD PTR [rip+0x11c8503]        # 0x14163f168 ; literal='lligence information yet.'
0x00476c65: movups XMMWORD PTR [rax+0x10],xmm1
0x00476c69: movsd  xmm0,QWORD PTR [rip+0x11c8507]        # 0x14163f178 ; literal='tion yet.'
0x00476c71: movsd  QWORD PTR [rax+0x20],xmm0
0x00476c76: movzx  eax,BYTE PTR [rip+0x11c8503]        # 0x14163f180 ; literal='.'
0x00476c7d: mov    BYTE PTR [rcx+0x28],al
0x00476c80: mov    BYTE PTR [rcx+0x29],0x0
0x00476c84: xor    r9d,r9d
0x00476c87: lea    rdx,[rbp-0x10]
0x00476c8b: lea    rsi,[rip+0x21d375e]        # 0x14264a3f0
0x00476c92: mov    rcx,rsi
0x00476c95: call   0x140ad9960
0x00476c9a: nop
0x00476c9b: lea    rcx,[rbp-0x10]
0x00476c9f: call   0x14006f850
0x00476ca4: mov    DWORD PTR [rip+0x21d37ca],ebx        # 0x14264a474
0x00476caa: lea    eax,[rdi+0x4]
0x00476cad: mov    DWORD PTR [rip+0x21d37c5],eax        # 0x14264a478
0x00476cb3: xorps  xmm0,xmm0
0x00476cb6: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476cba: mov    ecx,0x50
0x00476cbf: call   0x1400707d0
0x00476cc4: mov    rcx,rax
0x00476cc7: mov    QWORD PTR [rbp-0x10],rax
0x00476ccb: mov    QWORD PTR [rbp+0x0],0x47
0x00476cd3: mov    QWORD PTR [rbp+0x8],0x4f
0x00476cdb: movaps xmm0,XMMWORD PTR [rip+0x11c842e]        # 0x14163f110 ; literal='If a crime involves a conspiracy, an interrogation may reveal the plot.'
0x00476ce2: movups XMMWORD PTR [rax],xmm0
0x00476ce5: movaps xmm1,XMMWORD PTR [rip+0x11c8434]        # 0x14163f120 ; literal='ves a conspiracy, an interrogation may reveal the plot.'
0x00476cec: movups XMMWORD PTR [rax+0x10],xmm1
0x00476cf0: movaps xmm0,XMMWORD PTR [rip+0x11c8439]        # 0x14163f130 ; literal=', an interrogation may reveal the plot.'
0x00476cf7: movups XMMWORD PTR [rax+0x20],xmm0
0x00476cfb: movaps xmm1,XMMWORD PTR [rip+0x11c843e]        # 0x14163f140 ; literal='on may reveal the plot.'
0x00476d02: movups XMMWORD PTR [rax+0x30],xmm1
0x00476d06: mov    eax,DWORD PTR [rip+0x11c8444]        # 0x14163f150 ; literal='e plot.'
0x00476d0c: mov    DWORD PTR [rcx+0x40],eax
0x00476d0f: movzx  eax,WORD PTR [rip+0x11c843e]        # 0x14163f154 ; literal='ot.'
0x00476d16: mov    WORD PTR [rcx+0x44],ax
0x00476d1a: movzx  eax,BYTE PTR [rip+0x11c8435]        # 0x14163f156 ; literal='.'
0x00476d21: mov    BYTE PTR [rcx+0x46],al
0x00476d24: mov    BYTE PTR [rcx+0x47],0x0
0x00476d28: xor    r9d,r9d
0x00476d2b: lea    rdx,[rbp-0x10]
0x00476d2f: mov    rcx,rsi
0x00476d32: call   0x140ad9960
0x00476d37: nop
0x00476d38: mov    rdx,QWORD PTR [rbp+0x8]
0x00476d3c: cmp    rdx,0xf
0x00476d40: jbe    0x140476d73
0x00476d42: inc    rdx
0x00476d45: mov    rcx,QWORD PTR [rbp-0x10]
0x00476d49: mov    rax,rcx
0x00476d4c: cmp    rdx,0x1000
0x00476d53: jb     0x140476d6e
0x00476d55: add    rdx,0x27
0x00476d59: mov    rcx,QWORD PTR [rcx-0x8]
0x00476d5d: sub    rax,rcx
0x00476d60: add    rax,0xfffffffffffffff8
0x00476d64: cmp    rax,0x1f
0x00476d68: ja     0x1404791d0
0x00476d6e: call   0x141539680
0x00476d73: mov    r14,QWORD PTR [rsp+0x70]
0x00476d78: jmp    0x1404791f7
0x00476d7d: lea    edx,[rdi+0x1]
0x00476d80: mov    DWORD PTR [rsp+0x78],edx
0x00476d84: xor    r11d,r11d
0x00476d87: mov    r12d,r11d
0x00476d8a: mov    r8d,edx
0x00476d8d: lea    r9d,[rdx+0x1]
0x00476d91: mov    QWORD PTR [rbp-0x50],r9
0x00476d95: lea    rsi,[rip+0x21d3654]        # 0x14264a3f0
0x00476d9c: mov    r14d,DWORD PTR [rbp-0x68]
0x00476da0: mov    edi,DWORD PTR [rbp-0x68]
0x00476da3: cmp    DWORD PTR [rip+0x1f569ce],0x0        # 0x1423cd778
0x00476daa: jle    0x140476df1
0x00476dac: mov    rax,QWORD PTR [rip+0x1f569bd]        # 0x1423cd770
0x00476db3: test   BYTE PTR [rax],0x1
0x00476db6: je     0x140476df1
0x00476db8: lea    r13,[r10+0x290]
0x00476dbf: mov    QWORD PTR [rbp-0x68],r13
0x00476dc3: cmp    r12d,DWORD PTR [r13+0x0]
0x00476dc7: mov    WORD PTR [rip+0x21d36b4],0x0        # 0x14264a484
0x00476dd0: mov    BYTE PTR [rip+0x21d36a8],0x0        # 0x14264a47f
0x00476dd7: jne    0x140476de5
0x00476dd9: mov    DWORD PTR [rip+0x21d369d],0x2c0046        # 0x14264a480
0x00476de3: jmp    0x140476e1c
0x00476de5: mov    DWORD PTR [rip+0x21d3691],0xffffff        # 0x14264a480
0x00476def: jmp    0x140476e1c
0x00476df1: lea    r13,[r10+0x290]
0x00476df8: mov    QWORD PTR [rbp-0x68],r13
0x00476dfc: cmp    r12d,DWORD PTR [r13+0x0]
0x00476e00: jne    0x140476e0e
0x00476e02: mov    DWORD PTR [rip+0x21d3670],0x1010007        # 0x14264a47c
0x00476e0c: jmp    0x140476e1c
0x00476e0e: mov    DWORD PTR [rip+0x21d3664],0x1000007        # 0x14264a47c
0x00476e18: mov    QWORD PTR [rbp-0x68],r13
0x00476e1c: mov    ecx,r12d
0x00476e1f: test   r12d,r12d
0x00476e22: je     0x140476e4e
0x00476e24: sub    ecx,0x1
0x00476e27: je     0x140476e45
0x00476e29: sub    ecx,0x1
0x00476e2c: je     0x140476e3c
0x00476e2e: cmp    ecx,0x1
0x00476e31: jne    0x140476e55
0x00476e33: lea    r14d,[rbx+0x33]
0x00476e37: lea    edi,[rbx+0x3b]
0x00476e3a: jmp    0x140476e55
0x00476e3c: lea    r14d,[rbx+0x21]
0x00476e40: lea    edi,[rbx+0x32]
0x00476e43: jmp    0x140476e55
0x00476e45: lea    r14d,[rbx+0x17]
0x00476e49: lea    edi,[rbx+0x20]
0x00476e4c: jmp    0x140476e55
0x00476e4e: lea    r14d,[rbx+0x5]
0x00476e52: lea    edi,[rbx+0x16]
0x00476e55: mov    r15d,edx
0x00476e58: cmp    r8,r9
0x00476e5b: ja     0x140476f69
0x00476e61: mov    rbx,r11
0x00476e64: mov    r13,r9
0x00476e67: sub    r13,r8
0x00476e6a: inc    r13
0x00476e6d: mov    QWORD PTR [rbp-0x60],r13
0x00476e71: mov    r11d,r14d
0x00476e74: cmp    r14d,edi
0x00476e77: jg     0x140476f44
0x00476e7d: mov    r13,QWORD PTR [rbp-0x68]
0x00476e81: mov    DWORD PTR [rip+0x21d35ec],r11d        # 0x14264a474
0x00476e88: mov    DWORD PTR [rip+0x21d35e9],r15d        # 0x14264a478
0x00476e8f: cmp    r12d,DWORD PTR [r13+0x0]
0x00476e93: jne    0x140476ee3
0x00476e95: cmp    r11d,r14d
0x00476e98: jne    0x140476ea6
0x00476e9a: lea    rdx,[rsi+0x202c]
0x00476ea1: jmp    0x140476f27
0x00476ea6: lea    eax,[r14+0x1]
0x00476eaa: cmp    r11d,eax
0x00476ead: jne    0x140476eb8
0x00476eaf: lea    rdx,[rip+0x21d556e]        # 0x14264c424
0x00476eb6: jmp    0x140476f27
0x00476eb8: cmp    r11d,edi
0x00476ebb: jne    0x140476ec6
0x00476ebd: lea    rdx,[rip+0x21d5578]        # 0x14264c43c
0x00476ec4: jmp    0x140476f27
0x00476ec6: lea    eax,[rdi-0x1]
0x00476ec9: mov    rcx,rsi
0x00476ecc: cmp    r11d,eax
0x00476ecf: jne    0x140476eda
0x00476ed1: lea    rdx,[rip+0x21d555c]        # 0x14264c434
0x00476ed8: jmp    0x140476f2a
0x00476eda: lea    rdx,[rip+0x21d554b]        # 0x14264c42c
0x00476ee1: jmp    0x140476f2a
0x00476ee3: cmp    r11d,r14d
0x00476ee6: jne    0x140476ef1
0x00476ee8: lea    rdx,[rsi+0x2004]
0x00476eef: jmp    0x140476f27
0x00476ef1: lea    eax,[r14+0x1]
0x00476ef5: cmp    r11d,eax
0x00476ef8: jne    0x140476f03
0x00476efa: lea    rdx,[rip+0x21d54fb]        # 0x14264c3fc
0x00476f01: jmp    0x140476f27
0x00476f03: cmp    r11d,edi
0x00476f06: jne    0x140476f11
0x00476f08: lea    rdx,[rip+0x21d5505]        # 0x14264c414
0x00476f0f: jmp    0x140476f27
0x00476f11: lea    eax,[rdi-0x1]
0x00476f14: cmp    r11d,eax
0x00476f17: lea    rdx,[rip+0x21d54ee]        # 0x14264c40c
0x00476f1e: je     0x140476f27
0x00476f20: lea    rdx,[rip+0x21d54dd]        # 0x14264c404
0x00476f27: mov    rcx,rsi
0x00476f2a: add    rdx,rbx
0x00476f2d: mov    edx,DWORD PTR [rdx]
0x00476f2f: call   0x140adaad0
0x00476f34: inc    r11d
0x00476f37: cmp    r11d,edi
0x00476f3a: jle    0x140476e81
0x00476f40: mov    r13,QWORD PTR [rbp-0x60]
0x00476f44: inc    r15d
0x00476f47: add    rbx,0x4
0x00476f4b: sub    r13,0x1
0x00476f4f: mov    QWORD PTR [rbp-0x60],r13
0x00476f53: jne    0x140476e71
0x00476f59: mov    r13,QWORD PTR [rbp-0x68]
0x00476f5d: mov    edx,DWORD PTR [rsp+0x78]
0x00476f61: mov    r10,QWORD PTR [rsp+0x70]
0x00476f66: xor    r11d,r11d
0x00476f69: mov    ebx,r11d
0x00476f6c: lea    r15d,[r14+0x2]
0x00476f70: mov    DWORD PTR [rip+0x21d34fd],r15d        # 0x14264a474
0x00476f77: lea    eax,[rbx+rdx*1]
0x00476f7a: mov    DWORD PTR [rip+0x21d34f8],eax        # 0x14264a478
0x00476f80: mov    edx,0x10
0x00476f85: cmp    ebx,0x1
0x00476f88: mov    eax,0x8
0x00476f8d: cmovne edx,eax
0x00476f90: cmp    DWORD PTR [rip+0x1f567e1],0x0        # 0x1423cd778
0x00476f97: jle    0x140476fa5
0x00476f99: mov    rax,QWORD PTR [rip+0x1f567d0]        # 0x1423cd770
0x00476fa0: test   BYTE PTR [rax],0x1
0x00476fa3: jne    0x140476fb0
0x00476fa5: test   ebx,ebx
0x00476fa7: je     0x1404771cb
0x00476fad: mov    edx,r11d
0x00476fb0: mov    ecx,r12d
0x00476fb3: test   r12d,r12d
0x00476fb6: je     0x14047711f
0x00476fbc: sub    ecx,0x1
0x00476fbf: je     0x1404770ae
0x00476fc5: sub    ecx,0x1
0x00476fc8: je     0x14047703a
0x00476fca: cmp    ecx,0x1
0x00476fcd: jne    0x1404771cb
0x00476fd3: mov    rax,QWORD PTR [r10+0x280]
0x00476fda: sub    rax,QWORD PTR [r10+0x278]
0x00476fe1: test   rax,0xfffffffffffffff8
0x00476fe7: jne    0x140476ff3
0x00476fe9: mov    DWORD PTR [rip+0x21d3489],0x1010000        # 0x14264a47c
0x00476ff3: xorps  xmm0,xmm0
0x00476ff6: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476ffa: mov    QWORD PTR [rbp+0x0],0x5
0x00477002: mov    QWORD PTR [rbp+0x8],0xf
0x0047700a: mov    eax,DWORD PTR [rip+0x1175278]        # 0x1415ec288 ; literal='Plots'
0x00477010: mov    DWORD PTR [rbp-0x10],eax
0x00477013: movzx  eax,BYTE PTR [rip+0x1175272]        # 0x1415ec28c ; literal='s'
0x0047701a: mov    BYTE PTR [rbp-0xc],al
0x0047701d: mov    BYTE PTR [rbp-0xb],0x0
0x00477021: mov    DWORD PTR [rsp+0x20],edx
0x00477025: xor    r9d,r9d
0x00477028: lea    rdx,[rbp-0x10]
0x0047702c: mov    rcx,rsi
0x0047702f: call   0x140ad9870
0x00477034: nop
0x00477035: jmp    0x14047718d
0x0047703a: mov    rax,QWORD PTR [r10+0x268]
0x00477041: sub    rax,QWORD PTR [r10+0x260]
0x00477048: test   rax,0xfffffffffffffff8
0x0047704e: jne    0x14047705a
0x00477050: mov    DWORD PTR [rip+0x21d3422],0x1010000        # 0x14264a47c
0x0047705a: xorps  xmm0,xmm0
0x0047705d: movups XMMWORD PTR [rbp-0x10],xmm0
0x00477061: mov    QWORD PTR [rbp+0x0],0xd
0x00477069: mov    QWORD PTR [rbp+0x8],0xf
0x00477071: movsd  xmm0,QWORD PTR [rip+0x11751af]        # 0x1415ec228 ; literal='Organizations'
0x00477079: movsd  QWORD PTR [rbp-0x10],xmm0
0x0047707e: mov    eax,DWORD PTR [rip+0x11751ac]        # 0x1415ec230 ; literal='tions'
0x00477084: mov    DWORD PTR [rbp-0x8],eax
0x00477087: movzx  eax,BYTE PTR [rip+0x11751a6]        # 0x1415ec234 ; literal='s'
0x0047708e: mov    BYTE PTR [rbp-0x4],al
0x00477091: mov    BYTE PTR [rbp-0x3],0x0
0x00477095: mov    DWORD PTR [rsp+0x20],edx
0x00477099: xor    r9d,r9d
0x0047709c: lea    rdx,[rbp-0x10]
0x004770a0: mov    rcx,rsi
0x004770a3: call   0x140ad9870
0x004770a8: nop
0x004770a9: jmp    0x14047718d
0x004770ae: mov    rax,QWORD PTR [r10+0x250]
0x004770b5: sub    rax,QWORD PTR [r10+0x248]
0x004770bc: test   rax,0xfffffffffffffff8
0x004770c2: jne    0x1404770ce
0x004770c4: mov    DWORD PTR [rip+0x21d33ae],0x1010000        # 0x14264a47c
0x004770ce: xorps  xmm0,xmm0
0x004770d1: movups XMMWORD PTR [rbp-0x10],xmm0
0x004770d5: mov    QWORD PTR [rbp+0x0],0x6
0x004770dd: mov    QWORD PTR [rbp+0x8],0xf
0x004770e5: mov    eax,DWORD PTR [rip+0x1175131]        # 0x1415ec21c ; literal='Actors'
0x004770eb: mov    DWORD PTR [rbp-0x10],eax
0x004770ee: movzx  eax,WORD PTR [rip+0x117512b]        # 0x1415ec220 ; literal='rs'
0x004770f5: mov    WORD PTR [rbp-0xc],ax
0x004770f9: mov    BYTE PTR [rbp-0xa],0x0
0x004770fd: mov    DWORD PTR [rsp+0x20],edx
0x00477101: xor    r9d,r9d
0x00477104: lea    rdx,[rbp-0x10]
0x00477108: mov    rcx,rsi
0x0047710b: call   0x140ad9870
0x00477110: nop
0x00477111: lea    rcx,[rbp-0x10]
0x00477115: call   0x14006f850
0x0047711a: jmp    0x1404771c8
0x0047711f: mov    rax,QWORD PTR [rip+0x206c81a]        # 0x1424e3940
0x00477126: sub    rax,QWORD PTR [rip+0x206c80b]        # 0x1424e3938
0x0047712d: test   rax,0xfffffffffffffff8
0x00477133: jne    0x14047713f
0x00477135: mov    DWORD PTR [rip+0x21d333d],0x1010000        # 0x14264a47c
0x0047713f: mov    WORD PTR [rbp-0x2],r11w
0x00477144: mov    QWORD PTR [rbp+0x0],0xe
0x0047714c: mov    QWORD PTR [rbp+0x8],0xf
0x00477154: movsd  xmm0,QWORD PTR [rip+0x11c7fa4]        # 0x14163f100 ; literal='Interrogations'
0x0047715c: movsd  QWORD PTR [rbp-0x10],xmm0
0x00477161: mov    eax,DWORD PTR [rip+0x11c7fa1]        # 0x14163f108 ; literal='ations'
0x00477167: mov    DWORD PTR [rbp-0x8],eax
0x0047716a: movzx  eax,WORD PTR [rip+0x11c7f9b]        # 0x14163f10c ; literal='ns'
0x00477171: mov    WORD PTR [rbp-0x4],ax
0x00477175: mov    BYTE PTR [rbp-0x2],0x0
0x00477179: mov    DWORD PTR [rsp+0x20],edx
0x0047717d: xor    r9d,r9d
0x00477180: lea    rdx,[rbp-0x10]
0x00477184: mov    rcx,rsi
0x00477187: call   0x140ad9870
0x0047718c: nop
0x0047718d: mov    rdx,QWORD PTR [rbp+0x8]
0x00477191: cmp    rdx,0xf
0x00477195: jbe    0x1404771c8
0x00477197: mov    rcx,QWORD PTR [rbp-0x10]
0x0047719b: inc    rdx
0x0047719e: mov    rax,rcx
0x004771a1: cmp    rdx,0x1000
0x004771a8: jb     0x1404771c3
0x004771aa: mov    rcx,QWORD PTR [rcx-0x8]
0x004771ae: sub    rax,rcx
0x004771b1: add    rdx,0x27
0x004771b5: add    rax,0xfffffffffffffff8
0x004771b9: cmp    rax,0x1f
0x004771bd: ja     0x1404791d0
0x004771c3: call   0x141539680
0x004771c8: xor    r11d,r11d
0x004771cb: inc    ebx
0x004771cd: cmp    ebx,0x2
0x004771d0: mov    edx,DWORD PTR [rsp+0x78]
0x004771d4: mov    r10,QWORD PTR [rsp+0x70]
0x004771d9: jl     0x140476f70
0x004771df: inc    r12d
0x004771e2: cmp    r12d,0x4
0x004771e6: mov    ebx,DWORD PTR [rsp+0x64]
0x004771ea: mov    r8d,edx
0x004771ed: mov    r9,QWORD PTR [rbp-0x50]
0x004771f1: jl     0x140476da3
0x004771f7: mov    ecx,DWORD PTR [r13+0x0]
0x004771fb: test   ecx,ecx
0x004771fd: je     0x1404789aa
0x00477203: sub    ecx,0x1
0x00477206: je     0x140478433
0x0047720c: sub    ecx,0x1
0x0047720f: je     0x1404777bb
0x00477215: cmp    ecx,0x1
0x00477218: jne    0x1404791e9
0x0047721e: mov    rbx,r10
0x00477221: mov    r9,QWORD PTR [r10+0x350]
0x00477228: sub    r9,QWORD PTR [r10+0x348]
0x0047722f: sar    r9,0x3
0x00477233: mov    QWORD PTR [rbp-0x68],r9
0x00477237: lea    r11d,[r9+r9*4]
0x0047723b: mov    DWORD PTR [rbp-0x70],r11d
0x0047723f: mov    r14d,DWORD PTR [rsp+0x64]
0x00477244: add    r14d,0x6
0x00477248: mov    eax,DWORD PTR [rsp+0x60]
0x0047724c: add    eax,0xffffffe2
0x0047724f: mov    edx,DWORD PTR [rsp+0x68]
0x00477253: add    edx,0x4
0x00477256: mov    DWORD PTR [rsp+0x68],edx
0x0047725a: mov    r8d,DWORD PTR [rbp-0x7c]
0x0047725e: add    r8d,0xfffffffe
0x00477262: mov    DWORD PTR [rsp+0x64],r8d
0x00477267: mov    r10d,r8d
0x0047726a: sub    r10d,edx
0x0047726d: inc    r10d
0x00477270: mov    DWORD PTR [rbp-0x78],r10d
0x00477274: lea    edi,[rax-0x2]
0x00477277: cmp    r11d,r10d
0x0047727a: cmovle edi,eax
0x0047727d: mov    eax,DWORD PTR [rbx+0x2c8]
0x00477283: mov    ecx,r11d
0x00477286: sub    ecx,r10d
0x00477289: cmp    eax,ecx
0x0047728b: cmovle ecx,eax
0x0047728e: xor    r15d,r15d
0x00477291: mov    eax,r15d
0x00477294: test   ecx,ecx
0x00477296: cmovns eax,ecx
0x00477299: mov    r13d,edx
0x0047729c: sub    r13d,eax
0x0047729f: mov    DWORD PTR [rsp+0x60],r15d
0x004772a4: test   r9d,r9d
0x004772a7: jle    0x140477748
0x004772ad: mov    ecx,r15d
0x004772b0: mov    QWORD PTR [rbp-0x60],rcx
0x004772b4: movsxd rax,r9d
0x004772b7: mov    QWORD PTR [rbp-0x40],rax
0x004772bb: lea    r12d,[r13+0x1]
0x004772bf: mov    DWORD PTR [rsp+0x78],r12d
0x004772c4: nop    DWORD PTR [rax+0x0]
0x004772c8: nop    DWORD PTR [rax+rax*1+0x0]
0x004772d0: mov    rax,QWORD PTR [rbx+0x348]
0x004772d7: mov    rbx,QWORD PTR [rax+rcx*8]
0x004772db: mov    QWORD PTR [rbp-0x50],rbx
0x004772df: cmp    QWORD PTR [rbx+0x50],0x0
0x004772e4: jne    0x14047730e
0x004772e6: lea    rcx,[rbx+0x40]
0x004772ea: cmp    rcx,rbx
0x004772ed: je     0x14047730e
0x004772ef: mov    rdx,rbx
0x004772f2: cmp    QWORD PTR [rbx+0x18],0xf
0x004772f7: jbe    0x1404772fc
0x004772f9: mov    rdx,QWORD PTR [rbx]
0x004772fc: mov    r8,QWORD PTR [rbx+0x10]
0x00477300: call   0x14006f8d0
0x00477305: mov    edx,DWORD PTR [rsp+0x68]
0x00477309: mov    r8d,DWORD PTR [rsp+0x64]
0x0047730e: lea    eax,[r12+0x3]
0x00477313: mov    DWORD PTR [rsp+0x7c],eax
0x00477317: mov    r15d,r13d
0x0047731a: cmp    r13d,eax
0x0047731d: jg     0x140477415
0x00477323: movsxd r12,r13d
0x00477326: cmp    r15d,edx
0x00477329: jl     0x1404773f8
0x0047732f: cmp    r15d,r8d
0x00477332: jg     0x1404773f8
0x00477338: mov    ebx,r14d
0x0047733b: cmp    r14d,edi
0x0047733e: jg     0x1404773f8
0x00477344: nop    DWORD PTR [rax+0x0]
0x00477348: nop    DWORD PTR [rax+rax*1+0x0]
0x00477350: mov    DWORD PTR [rip+0x21d311e],ebx        # 0x14264a474
0x00477356: mov    DWORD PTR [rip+0x21d311b],r15d        # 0x14264a478
0x0047735d: xor    r8d,r8d
0x00477360: xor    edx,edx
0x00477362: mov    rcx,rsi
0x00477365: call   0x1400bb190
0x0047736a: cmp    r15d,r13d
0x0047736d: jne    0x140477393
0x0047736f: cmp    ebx,r14d
0x00477372: jne    0x14047737c
0x00477374: mov    edx,DWORD PTR [rip+0x21d4a1e]        # 0x14264bd98
0x0047737a: jmp    0x1404773de
0x0047737c: mov    rcx,rsi
0x0047737f: cmp    ebx,edi
0x00477381: jne    0x14047738b
0x00477383: mov    edx,DWORD PTR [rip+0x21d4a27]        # 0x14264bdb0
0x00477389: jmp    0x1404773e1
0x0047738b: mov    edx,DWORD PTR [rip+0x21d4a13]        # 0x14264bda4
0x00477391: jmp    0x1404773e1
0x00477393: movsxd rcx,DWORD PTR [rsp+0x7c]
0x00477398: cmp    r12,rcx
0x0047739b: jne    0x1404773c1
0x0047739d: cmp    ebx,r14d
0x004773a0: jne    0x1404773aa
0x004773a2: mov    edx,DWORD PTR [rip+0x21d49f8]        # 0x14264bda0
0x004773a8: jmp    0x1404773de
0x004773aa: mov    rcx,rsi
0x004773ad: cmp    ebx,edi
0x004773af: jne    0x1404773b9
0x004773b1: mov    edx,DWORD PTR [rip+0x21d4a01]        # 0x14264bdb8
0x004773b7: jmp    0x1404773e1
0x004773b9: mov    edx,DWORD PTR [rip+0x21d49ed]        # 0x14264bdac
0x004773bf: jmp    0x1404773e1
0x004773c1: cmp    ebx,r14d
0x004773c4: jne    0x1404773ce
0x004773c6: mov    edx,DWORD PTR [rip+0x21d49d0]        # 0x14264bd9c
0x004773cc: jmp    0x1404773de
0x004773ce: cmp    ebx,edi
0x004773d0: mov    edx,DWORD PTR [rip+0x21d49de]        # 0x14264bdb4
0x004773d6: je     0x1404773de
0x004773d8: mov    edx,DWORD PTR [rip+0x21d49ca]        # 0x14264bda8
0x004773de: mov    rcx,rsi
0x004773e1: call   0x140adaad0
0x004773e6: inc    ebx
0x004773e8: cmp    ebx,edi
0x004773ea: jle    0x140477350
0x004773f0: mov    eax,DWORD PTR [rsp+0x7c]
0x004773f4: mov    edx,DWORD PTR [rsp+0x68]
0x004773f8: inc    r15d
0x004773fb: inc    r12
0x004773fe: cmp    r15d,eax
0x00477401: mov    r8d,DWORD PTR [rsp+0x64]
0x00477406: jle    0x140477326
0x0047740c: mov    rbx,QWORD PTR [rbp-0x50]
0x00477410: mov    r12d,DWORD PTR [rsp+0x78]
0x00477415: mov    r15d,DWORD PTR [rsp+0x64]
0x0047741a: cmp    r13d,edx
0x0047741d: jl     0x14047761c
0x00477423: cmp    r13d,r15d
0x00477426: jg     0x14047761c
0x0047742c: mov    eax,DWORD PTR [rsp+0x60]
0x00477430: mov    rcx,QWORD PTR [rsp+0x70]
0x00477435: cmp    eax,DWORD PTR [rcx+0x294]
0x0047743b: mov    DWORD PTR [rip+0x21d3037],0x1010006        # 0x14264a47c
0x00477445: je     0x140477451
0x00477447: mov    DWORD PTR [rip+0x21d302b],0x1000006        # 0x14264a47c
0x00477451: lea    eax,[r14+0x2]
0x00477455: mov    DWORD PTR [rip+0x21d3019],eax        # 0x14264a474
0x0047745b: mov    DWORD PTR [rip+0x21d3016],r13d        # 0x14264a478
0x00477462: lea    rdx,[rbx+0x40]
0x00477466: xor    r9d,r9d
0x00477469: mov    rcx,rsi
0x0047746c: call   0x140ad9960
0x00477471: mov    eax,DWORD PTR [rsp+0x60]
0x00477475: mov    rcx,QWORD PTR [rsp+0x70]
0x0047747a: cmp    eax,DWORD PTR [rcx+0x294]
0x00477480: mov    DWORD PTR [rip+0x21d2ff2],0x1010004        # 0x14264a47c
0x0047748a: je     0x140477496
0x0047748c: mov    DWORD PTR [rip+0x21d2fe6],0x1000004        # 0x14264a47c
0x00477496: xorps  xmm0,xmm0
0x00477499: movups XMMWORD PTR [rbp-0x10],xmm0
0x0047749d: xor    ecx,ecx
0x0047749f: mov    QWORD PTR [rbp+0x0],rcx
0x004774a3: mov    QWORD PTR [rbp+0x8],0xf
0x004774ab: mov    BYTE PTR [rbp-0x10],cl
0x004774ae: movups XMMWORD PTR [rbp+0x10],xmm0
0x004774b2: mov    QWORD PTR [rbp+0x20],rcx
0x004774b6: mov    QWORD PTR [rbp+0x28],0xf
0x004774be: mov    BYTE PTR [rbp+0x10],cl
0x004774c1: lea    ecx,[rax+0x1]
0x004774c4: lea    rdx,[rbp+0x10]
0x004774c8: call   0x14052c2b0
0x004774cd: lea    rdx,[rbp+0x10]
0x004774d1: cmp    QWORD PTR [rbp+0x28],0xf
0x004774d6: cmova  rdx,QWORD PTR [rbp+0x10]
0x004774db: mov    r8,QWORD PTR [rbp+0x20]
0x004774df: lea    rcx,[rbp-0x10]
0x004774e3: call   0x14006fa10
0x004774e8: nop
0x004774e9: mov    rdx,QWORD PTR [rbp+0x28]
0x004774ed: cmp    rdx,0xf
0x004774f1: jbe    0x140477524
0x004774f3: inc    rdx
0x004774f6: mov    rcx,QWORD PTR [rbp+0x10]
0x004774fa: mov    rax,rcx
0x004774fd: cmp    rdx,0x1000
0x00477504: jb     0x14047751f
0x00477506: add    rdx,0x27
0x0047750a: mov    rcx,QWORD PTR [rcx-0x8]
0x0047750e: sub    rax,rcx
0x00477511: add    rax,0xfffffffffffffff8
0x00477515: cmp    rax,0x1f
0x00477519: ja     0x14047772f
0x0047751f: call   0x141539680
0x00477524: mov    r8d,0x1
0x0047752a: lea    rdx,[rip+0x1173fe3]        # 0x1415eb514 ; literal='/'
0x00477531: lea    rcx,[rbp-0x10]
0x00477535: call   0x14006fa10
0x0047753a: xorps  xmm0,xmm0
0x0047753d: movups XMMWORD PTR [rbp+0x10],xmm0
0x00477541: mov    QWORD PTR [rbp+0x20],0x0
0x00477549: mov    QWORD PTR [rbp+0x28],0xf
0x00477551: mov    BYTE PTR [rbp+0x10],0x0
0x00477555: lea    rdx,[rbp+0x10]
0x00477559: mov    ecx,DWORD PTR [rbp-0x68]
0x0047755c: call   0x14052c2b0
0x00477561: lea    rdx,[rbp+0x10]
0x00477565: cmp    QWORD PTR [rbp+0x28],0xf
0x0047756a: cmova  rdx,QWORD PTR [rbp+0x10]
0x0047756f: mov    r8,QWORD PTR [rbp+0x20]
0x00477573: lea    rcx,[rbp-0x10]
0x00477577: call   0x14006fa10
0x0047757c: nop
0x0047757d: mov    rdx,QWORD PTR [rbp+0x28]
0x00477581: cmp    rdx,0xf
0x00477585: jbe    0x1404775b8
0x00477587: inc    rdx
0x0047758a: mov    rcx,QWORD PTR [rbp+0x10]
0x0047758e: mov    rax,rcx
0x00477591: cmp    rdx,0x1000
0x00477598: jb     0x1404775b3
0x0047759a: add    rdx,0x27
0x0047759e: mov    rcx,QWORD PTR [rcx-0x8]
0x004775a2: sub    rax,rcx
0x004775a5: add    rax,0xfffffffffffffff8
0x004775a9: cmp    rax,0x1f
0x004775ad: ja     0x14047772f
0x004775b3: call   0x141539680
0x004775b8: mov    eax,edi
0x004775ba: sub    eax,DWORD PTR [rbp+0x0]
0x004775bd: sub    eax,0x2
0x004775c0: mov    DWORD PTR [rip+0x21d2eae],eax        # 0x14264a474
0x004775c6: mov    DWORD PTR [rip+0x21d2eab],r13d        # 0x14264a478
0x004775cd: xor    r9d,r9d
0x004775d0: lea    rdx,[rbp-0x10]
0x004775d4: mov    rcx,rsi
0x004775d7: call   0x140ad9960
0x004775dc: nop
0x004775dd: mov    rdx,QWORD PTR [rbp+0x8]
0x004775e1: cmp    rdx,0xf
0x004775e5: jbe    0x140477618
0x004775e7: inc    rdx
0x004775ea: mov    rcx,QWORD PTR [rbp-0x10]
0x004775ee: mov    rax,rcx
0x004775f1: cmp    rdx,0x1000
0x004775f8: jb     0x140477613
0x004775fa: add    rdx,0x27
0x004775fe: mov    rcx,QWORD PTR [rcx-0x8]
0x00477602: sub    rax,rcx
0x00477605: add    rax,0xfffffffffffffff8
0x00477609: cmp    rax,0x1f
0x0047760d: ja     0x140477736
0x00477613: call   0x141539680
0x00477618: mov    edx,DWORD PTR [rsp+0x68]
0x0047761c: cmp    r12d,edx
0x0047761f: jl     0x1404776fe
0x00477625: cmp    r12d,r15d
0x00477628: jg     0x1404776fe
0x0047762e: cmp    QWORD PTR [rbx+0x80],0x0
0x00477636: je     0x1404776fe
0x0047763c: mov    eax,DWORD PTR [rsp+0x60]
0x00477640: mov    rcx,QWORD PTR [rsp+0x70]
0x00477645: cmp    eax,DWORD PTR [rcx+0x294]
0x0047764b: mov    DWORD PTR [rip+0x21d2e27],0x1010003        # 0x14264a47c
0x00477655: je     0x140477661
0x00477657: mov    DWORD PTR [rip+0x21d2e1b],0x1000003        # 0x14264a47c
0x00477661: lea    eax,[r14+0x2]
0x00477665: mov    DWORD PTR [rip+0x21d2e09],eax        # 0x14264a474
0x0047766b: mov    DWORD PTR [rip+0x21d2e06],r12d        # 0x14264a478
0x00477672: xorps  xmm0,xmm0
0x00477675: movups XMMWORD PTR [rbp-0x10],xmm0
0x00477679: mov    QWORD PTR [rbp+0x0],0x5
0x00477681: mov    QWORD PTR [rbp+0x8],0xf
0x00477689: mov    eax,DWORD PTR [rip+0x1175195]        # 0x1415ec824 ; literal='Org: '
0x0047768f: mov    DWORD PTR [rbp-0x10],eax
0x00477692: movzx  eax,BYTE PTR [rip+0x117518f]        # 0x1415ec828 ; literal=' '
0x00477699: mov    BYTE PTR [rbp-0xc],al
0x0047769c: mov    BYTE PTR [rbp-0xb],0x0
0x004776a0: xor    r9d,r9d
0x004776a3: lea    rdx,[rbp-0x10]
0x004776a7: mov    rcx,rsi
0x004776aa: call   0x140ad9960
0x004776af: nop
0x004776b0: mov    rdx,QWORD PTR [rbp+0x8]
0x004776b4: cmp    rdx,0xf
0x004776b8: jbe    0x1404776eb
0x004776ba: inc    rdx
0x004776bd: mov    rcx,QWORD PTR [rbp-0x10]
0x004776c1: mov    rax,rcx
0x004776c4: cmp    rdx,0x1000
0x004776cb: jb     0x1404776e6
0x004776cd: add    rdx,0x27
0x004776d1: mov    rcx,QWORD PTR [rcx-0x8]
0x004776d5: sub    rax,rcx
0x004776d8: add    rax,0xfffffffffffffff8
0x004776dc: cmp    rax,0x1f
0x004776e0: ja     0x1404791d0
0x004776e6: call   0x141539680
0x004776eb: lea    rdx,[rbx+0x70]
0x004776ef: xor    r9d,r9d
0x004776f2: mov    rcx,rsi
0x004776f5: call   0x140ad9960
0x004776fa: mov    edx,DWORD PTR [rsp+0x68]
0x004776fe: add    r13d,0x5
0x00477702: add    r12d,0x5
0x00477706: mov    DWORD PTR [rsp+0x78],r12d
0x0047770b: inc    DWORD PTR [rsp+0x60]
0x0047770f: mov    rcx,QWORD PTR [rbp-0x60]
0x00477713: inc    rcx
0x00477716: mov    QWORD PTR [rbp-0x60],rcx
0x0047771a: cmp    rcx,QWORD PTR [rbp-0x40]
0x0047771e: jge    0x14047773d
0x00477720: mov    r8d,DWORD PTR [rsp+0x64]
0x00477725: mov    rbx,QWORD PTR [rsp+0x70]
0x0047772a: jmp    0x1404772d0
0x0047772f: call   QWORD PTR [rip+0x116e3f3]        # 0x1415e5b28
0x00477735: nop
0x00477736: call   QWORD PTR [rip+0x116e3ec]        # 0x1415e5b28
0x0047773c: int3
0x0047773d: mov    r10d,DWORD PTR [rbp-0x78]
0x00477741: mov    r11d,DWORD PTR [rbp-0x70]
0x00477745: xor    r15d,r15d
0x00477748: mov    r14,QWORD PTR [rsp+0x70]
0x0047774d: cmp    r11d,r10d
0x00477750: jle    0x1404791f3
0x00477756: lea    ecx,[rdx+0x1]
0x00477759: lea    r9d,[rdx-0x2]
0x0047775d: add    r9d,r10d
0x00477760: mov    QWORD PTR [rbp+0x8],0x0
0x00477768: mov    eax,DWORD PTR [r14+0x2c8]
0x0047776f: mov    DWORD PTR [rbp-0x10],eax
0x00477772: mov    DWORD PTR [rbp-0xc],r15d
0x00477776: lea    eax,[r11-0x1]
0x0047777a: mov    DWORD PTR [rbp-0x8],eax
0x0047777d: mov    DWORD PTR [rbp+0x0],ecx
0x00477780: mov    DWORD PTR [rbp+0x4],r9d
0x00477784: mov    DWORD PTR [rbp-0x4],r10d
0x00477788: lea    rcx,[rbp-0x10]
0x0047778c: call   0x1400bb3b0
0x00477791: mov    DWORD PTR [rsp+0x28],r15d
0x00477796: lea    r9d,[rdi+0x1]
0x0047779a: movzx  eax,BYTE PTR [r14+0x2cc]
0x004777a2: mov    BYTE PTR [rsp+0x20],al
0x004777a6: mov    r8d,DWORD PTR [rbp-0x58]
0x004777aa: mov    edx,DWORD PTR [rbp-0x54]
0x004777ad: lea    rcx,[rbp-0x10]
0x004777b1: call   0x14140f4d0
0x004777b6: jmp    0x1404791f3
0x004777bb: lea    r15d,[rbx+0x6]
0x004777bf: mov    DWORD PTR [rsp+0x7c],r15d
0x004777c4: mov    r13d,DWORD PTR [rsp+0x60]
0x004777c9: add    r13d,0xffffffe2
0x004777cd: mov    DWORD PTR [rbp-0x70],r13d
0x004777d1: mov    edi,DWORD PTR [rsp+0x68]
0x004777d5: add    edi,0x4
0x004777d8: mov    DWORD PTR [rsp+0x78],edi
0x004777dc: mov    r14d,DWORD PTR [rbp-0x7c]
0x004777e0: add    r14d,0xfffffffe
0x004777e4: mov    DWORD PTR [rsp+0x64],r14d
0x004777e9: mov    rbx,QWORD PTR [r10+0x330]
0x004777f0: mov    rax,QWORD PTR [r10+0x338]
0x004777f7: sub    rax,rbx
0x004777fa: sar    rax,0x3
0x004777fe: lea    r12d,[rax+rax*4]
0x00477802: mov    DWORD PTR [rbp-0x78],r12d
0x00477806: movsxd rcx,DWORD PTR [r10+0x294]
0x0047780d: test   ecx,ecx
0x0047780f: js     0x140477853
0x00477811: mov    rax,QWORD PTR [r10+0x320]
0x00477818: sub    rax,QWORD PTR [r10+0x318]
0x0047781f: sar    rax,0x3
0x00477823: cmp    ecx,eax
0x00477825: jge    0x140477853
0x00477827: mov    rbx,QWORD PTR [rbx+rcx*8]
0x0047782b: mov    rcx,rbx
0x0047782e: call   0x1400d1650
0x00477833: mov    rax,QWORD PTR [rbx+0x8]
0x00477837: sub    rax,QWORD PTR [rbx]
0x0047783a: sar    rax,0x3
0x0047783e: cmp    rax,0x1
0x00477842: jb     0x140477853
0x00477844: mov    eax,r14d
0x00477847: sub    eax,edi
0x00477849: add    eax,0xfffffff5
0x0047784c: add    r12d,eax
0x0047784f: mov    DWORD PTR [rbp-0x78],r12d
0x00477853: mov    edx,r14d
0x00477856: sub    edx,edi
0x00477858: mov    DWORD PTR [rbp-0x40],edx
0x0047785b: lea    r8d,[rdx+0x1]
0x0047785f: mov    DWORD PTR [rbp-0x68],r8d
0x00477863: cmp    r12d,r8d
0x00477866: jle    0x140477870
0x00477868: add    r13d,0xfffffffe
0x0047786c: mov    DWORD PTR [rbp-0x70],r13d
0x00477870: mov    r14,QWORD PTR [rsp+0x70]
0x00477875: mov    eax,DWORD PTR [r14+0x2c8]
0x0047787c: mov    ecx,r12d
0x0047787f: sub    ecx,r8d
0x00477882: cmp    eax,ecx
0x00477884: cmovle ecx,eax
0x00477887: xor    r9d,r9d
0x0047788a: mov    eax,r9d
0x0047788d: test   ecx,ecx
0x0047788f: cmovns eax,ecx
0x00477892: mov    ebx,edi
0x00477894: sub    ebx,eax
0x00477896: mov    DWORD PTR [rsp+0x60],ebx
0x0047789a: mov    rax,QWORD PTR [r14+0x338]
0x004778a1: sub    rax,QWORD PTR [r14+0x330]
0x004778a8: sar    rax,0x3
0x004778ac: mov    QWORD PTR [rbp-0x28],rax
0x004778b0: mov    DWORD PTR [rsp+0x68],r9d
0x004778b5: test   eax,eax
0x004778b7: jle    0x1404783e1
0x004778bd: mov    ecx,r9d
0x004778c0: mov    QWORD PTR [rbp-0x50],rcx
0x004778c4: cdqe
0x004778c6: mov    QWORD PTR [rbp-0x48],rax
0x004778ca: lea    eax,[rdx-0x8]
0x004778cd: nop    DWORD PTR [rax]
0x004778d0: mov    DWORD PTR [rbp-0x7c],eax
0x004778d3: mov    rax,QWORD PTR [r14+0x330]
0x004778da: mov    r14,QWORD PTR [rax+rcx*8]
0x004778de: mov    QWORD PTR [rbp-0x60],r14
0x004778e2: mov    rcx,r14
0x004778e5: call   0x1400d1650
0x004778ea: lea    r12d,[rbx+0x4]
0x004778ee: mov    DWORD PTR [rbp-0x74],r12d
0x004778f2: mov    eax,DWORD PTR [rsp+0x68]
0x004778f6: mov    rcx,QWORD PTR [rsp+0x70]
0x004778fb: cmp    eax,DWORD PTR [rcx+0x294]
0x00477901: jne    0x140477920
0x00477903: mov    rax,QWORD PTR [r14+0x8]
0x00477907: sub    rax,QWORD PTR [r14]
0x0047790a: sar    rax,0x3
0x0047790e: test   rax,rax
0x00477911: je     0x140477920
0x00477913: mov    eax,DWORD PTR [rbp-0x7c]
0x00477916: add    eax,0xfffffffd
0x00477919: add    r12d,eax
0x0047791c: mov    DWORD PTR [rbp-0x74],r12d
0x00477920: mov    edi,ebx
0x00477922: cmp    ebx,r12d
0x00477925: jg     0x140477a27
0x0047792b: movsxd r14,ebx
0x0047792e: mov    eax,DWORD PTR [rsp+0x78]
0x00477932: cmp    edi,eax
0x00477934: jl     0x140477a0c
0x0047793a: cmp    edi,DWORD PTR [rsp+0x64]
0x0047793e: jg     0x140477a0c
0x00477944: mov    ebx,r15d
0x00477947: cmp    r15d,r13d
0x0047794a: jg     0x140477a0c
0x00477950: movsxd r15,r12d
0x00477953: mov    r12d,DWORD PTR [rsp+0x7c]
0x00477958: nop    DWORD PTR [rax+rax*1+0x0]
0x00477960: mov    DWORD PTR [rip+0x21d2b0e],ebx        # 0x14264a474
0x00477966: mov    DWORD PTR [rip+0x21d2b0c],edi        # 0x14264a478
0x0047796c: xor    r8d,r8d
0x0047796f: xor    edx,edx
0x00477971: mov    rcx,rsi
0x00477974: call   0x1400bb190
0x00477979: cmp    edi,DWORD PTR [rsp+0x60]
0x0047797d: jne    0x1404779a4
0x0047797f: cmp    ebx,r12d
0x00477982: jne    0x14047798c
0x00477984: mov    edx,DWORD PTR [rip+0x21d440e]        # 0x14264bd98
0x0047798a: jmp    0x1404779ec
0x0047798c: mov    rcx,rsi
0x0047798f: cmp    ebx,r13d
0x00477992: jne    0x14047799c
0x00477994: mov    edx,DWORD PTR [rip+0x21d4416]        # 0x14264bdb0
0x0047799a: jmp    0x1404779ef
0x0047799c: mov    edx,DWORD PTR [rip+0x21d4402]        # 0x14264bda4
0x004779a2: jmp    0x1404779ef
0x004779a4: cmp    r14,r15
0x004779a7: jne    0x1404779ce
0x004779a9: cmp    ebx,r12d
0x004779ac: jne    0x1404779b6
0x004779ae: mov    edx,DWORD PTR [rip+0x21d43ec]        # 0x14264bda0
0x004779b4: jmp    0x1404779ec
0x004779b6: mov    rcx,rsi
0x004779b9: cmp    ebx,r13d
0x004779bc: jne    0x1404779c6
0x004779be: mov    edx,DWORD PTR [rip+0x21d43f4]        # 0x14264bdb8
0x004779c4: jmp    0x1404779ef
0x004779c6: mov    edx,DWORD PTR [rip+0x21d43e0]        # 0x14264bdac
0x004779cc: jmp    0x1404779ef
0x004779ce: cmp    ebx,r12d
0x004779d1: jne    0x1404779db
0x004779d3: mov    edx,DWORD PTR [rip+0x21d43c3]        # 0x14264bd9c
0x004779d9: jmp    0x1404779ec
0x004779db: cmp    ebx,r13d
0x004779de: mov    edx,DWORD PTR [rip+0x21d43d0]        # 0x14264bdb4
0x004779e4: je     0x1404779ec
0x004779e6: mov    edx,DWORD PTR [rip+0x21d43bc]        # 0x14264bda8
0x004779ec: mov    rcx,rsi
0x004779ef: call   0x140adaad0
0x004779f4: inc    ebx
0x004779f6: cmp    ebx,r13d
0x004779f9: jle    0x140477960
0x004779ff: mov    r12d,DWORD PTR [rbp-0x74]
0x00477a03: mov    r15d,DWORD PTR [rsp+0x7c]
0x00477a08: mov    eax,DWORD PTR [rsp+0x78]
0x00477a0c: inc    edi
0x00477a0e: inc    r14
0x00477a11: cmp    edi,r12d
0x00477a14: jle    0x140477932
0x00477a1a: mov    ebx,DWORD PTR [rsp+0x60]
0x00477a1e: mov    r14,QWORD PTR [rbp-0x60]
0x00477a22: mov    rcx,QWORD PTR [rsp+0x70]
0x00477a27: mov    edi,DWORD PTR [rsp+0x78]
0x00477a2b: mov    edx,DWORD PTR [rsp+0x64]
0x00477a2f: mov    r12d,DWORD PTR [rsp+0x68]
0x00477a34: cmp    ebx,edi
0x00477a36: jl     0x140477bf8
0x00477a3c: cmp    ebx,edx
0x00477a3e: jg     0x140477bf8
0x00477a44: cmp    r12d,DWORD PTR [rcx+0x294]
0x00477a4b: mov    DWORD PTR [rip+0x21d2a27],0x1010006        # 0x14264a47c
0x00477a55: je     0x140477a61
0x00477a57: mov    DWORD PTR [rip+0x21d2a1b],0x1000006        # 0x14264a47c
0x00477a61: lea    eax,[r15+0x2]
0x00477a65: mov    DWORD PTR [rip+0x21d2a09],eax        # 0x14264a474
0x00477a6b: mov    DWORD PTR [rip+0x21d2a07],ebx        # 0x14264a478
0x00477a71: lea    rdx,[r14+0x58]
0x00477a75: xor    r9d,r9d
0x00477a78: mov    rcx,rsi
0x00477a7b: call   0x140ad9960
0x00477a80: mov    rax,QWORD PTR [rsp+0x70]
0x00477a85: cmp    r12d,DWORD PTR [rax+0x294]
0x00477a8c: mov    DWORD PTR [rip+0x21d29e6],0x1010004        # 0x14264a47c
0x00477a96: je     0x140477aa2
0x00477a98: mov    DWORD PTR [rip+0x21d29da],0x1000004        # 0x14264a47c
0x00477aa2: xorps  xmm0,xmm0
0x00477aa5: movups XMMWORD PTR [rbp+0x10],xmm0
0x00477aa9: xor    eax,eax
0x00477aab: mov    QWORD PTR [rbp+0x20],rax
0x00477aaf: mov    QWORD PTR [rbp+0x28],0xf
0x00477ab7: mov    BYTE PTR [rbp+0x10],al
0x00477aba: movups XMMWORD PTR [rbp-0x10],xmm0
0x00477abe: mov    QWORD PTR [rbp+0x0],rax
0x00477ac2: mov    QWORD PTR [rbp+0x8],0xf
0x00477aca: mov    BYTE PTR [rbp-0x10],al
0x00477acd: lea    ecx,[r12+0x1]
0x00477ad2: lea    rdx,[rbp-0x10]
0x00477ad6: call   0x14052c2b0
0x00477adb: lea    rdx,[rbp-0x10]
0x00477adf: cmp    QWORD PTR [rbp+0x8],0xf
0x00477ae4: cmova  rdx,QWORD PTR [rbp-0x10]
0x00477ae9: mov    r8,QWORD PTR [rbp+0x0]
0x00477aed: lea    rcx,[rbp+0x10]
0x00477af1: call   0x14006fa10
0x00477af6: nop
0x00477af7: mov    rdx,QWORD PTR [rbp+0x8]
0x00477afb: cmp    rdx,0xf
0x00477aff: jbe    0x140477b32
0x00477b01: inc    rdx
0x00477b04: mov    rcx,QWORD PTR [rbp-0x10]
0x00477b08: mov    rax,rcx
0x00477b0b: cmp    rdx,0x1000
0x00477b12: jb     0x140477b2d
0x00477b14: add    rdx,0x27
0x00477b18: mov    rcx,QWORD PTR [rcx-0x8]
0x00477b1c: sub    rax,rcx
0x00477b1f: add    rax,0xfffffffffffffff8
0x00477b23: cmp    rax,0x1f
0x00477b27: ja     0x1404783cf
0x00477b2d: call   0x141539680
0x00477b32: mov    r8d,0x1
0x00477b38: lea    rdx,[rip+0x11739d5]        # 0x1415eb514 ; literal='/'
0x00477b3f: lea    rcx,[rbp+0x10]
0x00477b43: call   0x14006fa10
0x00477b48: xorps  xmm0,xmm0
0x00477b4b: movups XMMWORD PTR [rbp-0x10],xmm0
0x00477b4f: mov    QWORD PTR [rbp+0x0],0x0
0x00477b57: mov    QWORD PTR [rbp+0x8],0xf
0x00477b5f: mov    BYTE PTR [rbp-0x10],0x0
0x00477b63: lea    rdx,[rbp-0x10]
0x00477b67: mov    ecx,DWORD PTR [rbp-0x28]
0x00477b6a: call   0x14052c2b0
0x00477b6f: lea    rdx,[rbp-0x10]
0x00477b73: cmp    QWORD PTR [rbp+0x8],0xf
0x00477b78: cmova  rdx,QWORD PTR [rbp-0x10]
0x00477b7d: mov    r8,QWORD PTR [rbp+0x0]
0x00477b81: lea    rcx,[rbp+0x10]
0x00477b85: call   0x14006fa10
0x00477b8a: nop
0x00477b8b: mov    rdx,QWORD PTR [rbp+0x8]
0x00477b8f: cmp    rdx,0xf
0x00477b93: jbe    0x140477bc6
0x00477b95: inc    rdx
0x00477b98: mov    rcx,QWORD PTR [rbp-0x10]
0x00477b9c: mov    rax,rcx
0x00477b9f: cmp    rdx,0x1000
0x00477ba6: jb     0x140477bc1
0x00477ba8: add    rdx,0x27
0x00477bac: mov    rcx,QWORD PTR [rcx-0x8]
0x00477bb0: sub    rax,rcx
0x00477bb3: add    rax,0xfffffffffffffff8
0x00477bb7: cmp    rax,0x1f
0x00477bbb: ja     0x1404783cf
0x00477bc1: call   0x141539680
0x00477bc6: mov    eax,r13d
0x00477bc9: sub    eax,DWORD PTR [rbp+0x20]
0x00477bcc: sub    eax,0x2
0x00477bcf: mov    DWORD PTR [rip+0x21d289f],eax        # 0x14264a474
0x00477bd5: mov    DWORD PTR [rip+0x21d289d],ebx        # 0x14264a478
0x00477bdb: xor    r9d,r9d
0x00477bde: lea    rdx,[rbp+0x10]
0x00477be2: mov    rcx,rsi
0x00477be5: call   0x140ad9960
0x00477bea: nop
0x00477beb: lea    rcx,[rbp+0x10]
0x00477bef: call   0x14006f850
0x00477bf4: mov    edx,DWORD PTR [rsp+0x64]
0x00477bf8: mov    rax,QWORD PTR [rsp+0x70]
0x00477bfd: cmp    r12d,DWORD PTR [rax+0x294]
0x00477c04: jne    0x14047829b
0x00477c0a: lea    eax,[rbx+0x1]
0x00477c0d: mov    DWORD PTR [rbp-0x74],eax
0x00477c10: mov    ecx,DWORD PTR [rbp-0x7c]
0x00477c13: add    ecx,ebx
0x00477c15: mov    DWORD PTR [rbp-0x30],ecx
0x00477c18: mov    r9d,eax
0x00477c1b: cmp    eax,edi
0x00477c1d: cmovl  r9d,edi
0x00477c21: mov    r8d,ecx
0x00477c24: cmp    ecx,edx
0x00477c26: cmovg  r8d,edx
0x00477c2a: lea    edx,[r13-0x2]
0x00477c2e: lea    eax,[r15+0x2]
0x00477c32: mov    DWORD PTR [rbp-0x38],eax
0x00477c35: xor    r11d,r11d
0x00477c38: mov    ecx,r11d
0x00477c3b: test   eax,eax
0x00477c3d: cmovns ecx,eax
0x00477c40: mov    eax,DWORD PTR [rip+0x1f55b3e]        # 0x1423cd784
0x00477c46: dec    eax
0x00477c48: cmp    edx,eax
0x00477c4a: cmovg  edx,eax
0x00477c4d: test   r9d,r9d
0x00477c50: cmovs  r9d,r11d
0x00477c54: mov    eax,DWORD PTR [rip+0x1f55b2e]        # 0x1423cd788
0x00477c5a: dec    eax
0x00477c5c: cmp    r8d,eax
0x00477c5f: cmovg  r8d,eax
0x00477c63: mov    DWORD PTR [rip+0x21d2a0f],ecx        # 0x14264a678
0x00477c69: mov    DWORD PTR [rip+0x21d2a0d],edx        # 0x14264a67c
0x00477c6f: mov    DWORD PTR [rip+0x21d2a0a],r9d        # 0x14264a680
0x00477c76: mov    DWORD PTR [rip+0x21d2a07],r8d        # 0x14264a684
0x00477c7d: sub    r13d,r15d
0x00477c80: mov    r10d,r11d
0x00477c83: mov    r9d,r11d
0x00477c86: mov    r14d,r11d
0x00477c89: mov    rcx,QWORD PTR [rbp-0x60]
0x00477c8d: mov    rbx,QWORD PTR [rcx]
0x00477c90: mov    rax,rbx
0x00477c93: mov    rdi,QWORD PTR [rcx+0x8]
0x00477c97: cmp    rax,rdi
0x00477c9a: jae    0x140477cd5
0x00477c9c: mov    rcx,QWORD PTR [rax]
0x00477c9f: mov    edx,DWORD PTR [rcx+0x18]
0x00477ca2: mov    ecx,DWORD PTR [rcx+0x14]
0x00477ca5: lea    r8d,[rcx+rcx*2]
0x00477ca9: add    r8d,r8d
0x00477cac: cmp    r10d,edx
0x00477caf: cmovg  r10d,edx
0x00477cb3: cmp    r14d,r8d
0x00477cb6: cmovg  r14d,r8d
0x00477cba: lea    ecx,[rdx+0x4]
0x00477cbd: cmp    r9d,ecx
0x00477cc0: cmovl  r9d,ecx
0x00477cc4: lea    ecx,[r8+0x4]
0x00477cc8: cmp    r11d,ecx
0x00477ccb: cmovl  r11d,ecx
0x00477ccf: add    rax,0x8
0x00477cd3: jmp    0x140477c97
0x00477cd5: lea    eax,[r13-0x3]
0x00477cd9: cdq
0x00477cda: sub    eax,edx
0x00477cdc: sar    eax,1
0x00477cde: mov    r8d,eax
0x00477ce1: lea    r12d,[r15-0x1]
0x00477ce5: add    r12d,eax
0x00477ce8: mov    rax,QWORD PTR [rsp+0x70]
0x00477ced: mov    r15,QWORD PTR [rax+0x2c0]
0x00477cf4: test   r15,r15
0x00477cf7: je     0x140477d8b
0x00477cfd: mov    ecx,r9d
0x00477d00: sub    ecx,r10d
0x00477d03: inc    ecx
0x00477d05: lea    eax,[r13-0x5]
0x00477d09: cmp    ecx,eax
0x00477d0b: jl     0x140477d44
0x00477d0d: mov    edx,DWORD PTR [r15+0x18]
0x00477d11: mov    ecx,edx
0x00477d13: neg    ecx
0x00477d15: lea    eax,[rdx-0x2]
0x00477d18: add    eax,r8d
0x00477d1b: cmp    eax,r9d
0x00477d1e: jle    0x140477d2b
0x00477d20: mov    ecx,r8d
0x00477d23: sub    ecx,r9d
0x00477d26: sub    ecx,0x2
0x00477d29: jmp    0x140477d41
0x00477d2b: sub    edx,r8d
0x00477d2e: add    edx,0x2
0x00477d31: cmp    edx,r10d
0x00477d34: jge    0x140477d41
0x00477d36: mov    ecx,0x2
0x00477d3b: sub    ecx,r10d
0x00477d3e: sub    ecx,r8d
0x00477d41: add    r12d,ecx
0x00477d44: mov    ecx,r11d
0x00477d47: sub    ecx,r14d
0x00477d4a: inc    ecx
0x00477d4c: mov    r8d,DWORD PTR [rbp-0x7c]
0x00477d50: lea    eax,[r8-0x2]
0x00477d54: cmp    ecx,eax
0x00477d56: jl     0x140477d92
0x00477d58: mov    eax,DWORD PTR [r15+0x14]
0x00477d5c: lea    ecx,[rax+rax*2]
0x00477d5f: add    ecx,ecx
0x00477d61: mov    edx,0x6
0x00477d66: sub    edx,ecx
0x00477d68: lea    eax,[r8-0x8]
0x00477d6c: add    eax,ecx
0x00477d6e: cmp    eax,r11d
0x00477d71: jle    0x140477d7c
0x00477d73: mov    edx,r8d
0x00477d76: sub    edx,r11d
0x00477d79: sub    edx,0x2
0x00477d7c: mov    r14d,DWORD PTR [rsp+0x60]
0x00477d81: add    r14d,edx
0x00477d84: mov    DWORD PTR [rsp+0x60],r14d
0x00477d89: jmp    0x140477d97
0x00477d8b: mov    r14d,DWORD PTR [rsp+0x60]
0x00477d90: jmp    0x140477da0
0x00477d92: mov    r14d,DWORD PTR [rsp+0x60]
0x00477d97: mov    rax,QWORD PTR [rsp+0x70]
0x00477d9c: nop    DWORD PTR [rax+0x0]
0x00477da0: cmp    rbx,rdi
0x00477da3: jae    0x140477f5e
0x00477da9: mov    rcx,QWORD PTR [rbx]
0x00477dac: mov    rdx,QWORD PTR [rcx+0x8]
0x00477db0: test   rdx,rdx
0x00477db3: je     0x140477f55
0x00477db9: mov    rax,QWORD PTR [rax+0x2c0]
0x00477dc0: cmp    rcx,rax
0x00477dc3: je     0x140477dd4
0x00477dc5: cmp    rdx,rax
0x00477dc8: mov    DWORD PTR [rip+0x21d26aa],0x1000002        # 0x14264a47c
0x00477dd2: jne    0x140477dde
0x00477dd4: mov    DWORD PTR [rip+0x21d269e],0x1010002        # 0x14264a47c
0x00477dde: mov    r10,QWORD PTR [rbx]
0x00477de1: mov    rcx,QWORD PTR [r10+0x8]
0x00477de5: movzx  r9d,WORD PTR [rcx+0x14]
0x00477dea: movzx  eax,r9w
0x00477dee: add    ax,ax
0x00477df1: add    r9w,ax
0x00477df5: add    r9w,r9w
0x00477df9: add    r9w,0x2
0x00477dfe: add    r9w,r14w
0x00477e02: lea    r8d,[r12+0x2]
0x00477e07: add    r8w,WORD PTR [rcx+0x18]
0x00477e0c: movzx  edx,WORD PTR [r10+0x14]
0x00477e11: movzx  eax,dx
0x00477e14: add    ax,ax
0x00477e17: add    dx,ax
0x00477e1a: add    dx,dx
0x00477e1d: add    dx,0x2
0x00477e21: add    dx,r14w
0x00477e25: lea    ecx,[r12+0x2]
0x00477e2a: add    cx,WORD PTR [r10+0x18]
0x00477e2f: call   0x140a8f210
0x00477e34: mov    r15d,0x1
0x00477e3a: mov    eax,DWORD PTR [rip+0x1cb9cc0]        # 0x142131b00
0x00477e40: dec    eax
0x00477e42: cmp    eax,r15d
0x00477e45: jle    0x140477f55
0x00477e4b: lea    r14,[rip+0x173b8b0]        # 0x141bb3702
0x00477e52: lea    rax,[r14]
0x00477e55: movsx  r11d,WORD PTR [r14-0x2]
0x00477e5a: movsx  r8d,WORD PTR [r14]
0x00477e5e: movsx  edx,WORD PTR [r14+0xa]
0x00477e63: lea    r14,[r14+0xc]
0x00477e67: movsx  ecx,WORD PTR [r14]
0x00477e6b: movsx  r10d,WORD PTR [rax+0x16]
0x00477e70: movsx  r9d,WORD PTR [rax+0x18]
0x00477e75: mov    DWORD PTR [rip+0x21d25f9],edx        # 0x14264a474
0x00477e7b: mov    DWORD PTR [rip+0x21d25f7],ecx        # 0x14264a478
0x00477e81: cmp    edx,DWORD PTR [rip+0x21d27f1]        # 0x14264a678
0x00477e87: jl     0x140477f41
0x00477e8d: cmp    edx,DWORD PTR [rip+0x21d27e9]        # 0x14264a67c
0x00477e93: jg     0x140477f41
0x00477e99: cmp    ecx,DWORD PTR [rip+0x21d27e1]        # 0x14264a680
0x00477e9f: jl     0x140477f41
0x00477ea5: cmp    ecx,DWORD PTR [rip+0x21d27d9]        # 0x14264a684
0x00477eab: jg     0x140477f41
0x00477eb1: cmp    r11d,edx
0x00477eb4: jge    0x140477ee6
0x00477eb6: cmp    r8d,ecx
0x00477eb9: jge    0x140477ed6
0x00477ebb: cmp    r10d,edx
0x00477ebe: jle    0x140477f1d
0x00477ec0: cmp    r9d,ecx
0x00477ec3: jle    0x140477f20
0x00477ec5: mov    r8b,0x1
0x00477ec8: mov    dl,0x5c
0x00477eca: mov    rcx,rsi
0x00477ecd: call   0x1400bb190
0x00477ed2: mov    dl,0xfe
0x00477ed4: jmp    0x140477f36
0x00477ed6: jle    0x140477f18
0x00477ed8: cmp    r10d,edx
0x00477edb: jle    0x140477f1d
0x00477edd: cmp    r9d,ecx
0x00477ee0: jge    0x140477f20
0x00477ee2: mov    dl,0x2f
0x00477ee4: jmp    0x140477f36
0x00477ee6: jle    0x140477f18
0x00477ee8: cmp    r8d,ecx
0x00477eeb: jge    0x140477f08
0x00477eed: cmp    r10d,edx
0x00477ef0: jge    0x140477f1d
0x00477ef2: cmp    r9d,ecx
0x00477ef5: jle    0x140477f20
0x00477ef7: mov    r8b,0x1
0x00477efa: mov    dl,0x2f
0x00477efc: mov    rcx,rsi
0x00477eff: call   0x1400bb190
0x00477f04: mov    dl,0xfe
0x00477f06: jmp    0x140477f36
0x00477f08: jle    0x140477f18
0x00477f0a: cmp    r10d,edx
0x00477f0d: jge    0x140477f1d
0x00477f0f: cmp    r9d,ecx
0x00477f12: jge    0x140477f20
0x00477f14: mov    dl,0x5c
0x00477f16: jmp    0x140477f36
0x00477f18: cmp    r8d,ecx
0x00477f1b: je     0x140477f34
0x00477f1d: cmp    r9d,ecx
0x00477f20: je     0x140477f34
0x00477f22: cmp    r11d,edx
0x00477f25: je     0x140477f30
0x00477f27: cmp    r10d,edx
0x00477f2a: je     0x140477f30
0x00477f2c: mov    dl,0xfe
0x00477f2e: jmp    0x140477f36
0x00477f30: mov    dl,0x7c
0x00477f32: jmp    0x140477f36
0x00477f34: mov    dl,0x2d
0x00477f36: mov    r8b,0x1
0x00477f39: mov    rcx,rsi
0x00477f3c: call   0x1400bb190
0x00477f41: inc    r15d
0x00477f44: mov    eax,DWORD PTR [rip+0x1cb9bb6]        # 0x142131b00
0x00477f4a: dec    eax
0x00477f4c: cmp    r15d,eax
0x00477f4f: jl     0x140477e52
0x00477f55: add    rbx,0x8
0x00477f59: jmp    0x140477d92
0x00477f5e: mov    rbx,QWORD PTR [rbp-0x60]
0x00477f62: mov    rbx,QWORD PTR [rbx]
0x00477f65: xor    r15d,r15d
0x00477f68: nop    DWORD PTR [rax+rax*1+0x0]
0x00477f70: cmp    rbx,rdi
0x00477f73: jae    0x14047817f
0x00477f79: mov    rax,QWORD PTR [rax+0x2c0]
0x00477f80: cmp    QWORD PTR [rbx],rax
0x00477f83: mov    DWORD PTR [rip+0x21d24ef],0x1010007        # 0x14264a47c
0x00477f8d: je     0x140477f99
0x00477f8f: mov    DWORD PTR [rip+0x21d24e3],0x1010000        # 0x14264a47c
0x00477f99: mov    rdx,QWORD PTR [rbx]
0x00477f9c: mov    eax,DWORD PTR [rdx+0x14]
0x00477f9f: lea    ecx,[rax+rax*2]
0x00477fa2: lea    r9d,[r14+rcx*2]
0x00477fa6: mov    edx,DWORD PTR [rdx+0x18]
0x00477fa9: add    edx,r12d
0x00477fac: lea    eax,[r9+0x4]
0x00477fb0: lea    r8d,[rdx+0x4]
0x00477fb4: mov    WORD PTR [rsp+0x50],r15w
0x00477fba: mov    WORD PTR [rsp+0x48],r15w
0x00477fc0: mov    WORD PTR [rsp+0x40],r15w
0x00477fc6: mov    BYTE PTR [rsp+0x38],0x20
0x00477fcb: mov    BYTE PTR [rsp+0x30],0x1
0x00477fd0: mov    BYTE PTR [rsp+0x28],r15b
0x00477fd5: mov    DWORD PTR [rsp+0x20],eax
0x00477fd9: lea    rcx,[rip+0x1f22640]        # 0x14239a620
0x00477fe0: call   0x140b04050
0x00477fe5: mov    rax,QWORD PTR [rbx]
0x00477fe8: movzx  edx,BYTE PTR [rax+0x44]
0x00477fec: movzx  ecx,WORD PTR [rax+0x42]
0x00477ff0: movzx  eax,BYTE PTR [rax+0x40]
0x00477ff4: mov    BYTE PTR [rip+0x21d2482],al        # 0x14264a47c
0x00477ffa: mov    BYTE PTR [rip+0x21d247d],cl        # 0x14264a47d
0x00478000: mov    BYTE PTR [rip+0x21d2478],dl        # 0x14264a47e
0x00478006: mov    BYTE PTR [rip+0x21d2472],0x1        # 0x14264a47f
0x0047800d: mov    rdx,QWORD PTR [rbx]
0x00478010: mov    eax,DWORD PTR [rdx+0x14]
0x00478013: lea    ecx,[rax+rax*2]
0x00478016: lea    r8d,[r14+rcx*2]
0x0047801a: mov    ecx,DWORD PTR [rdx+0x18]
0x0047801d: add    ecx,r12d
0x00478020: mov    DWORD PTR [rip+0x21d244e],ecx        # 0x14264a474
0x00478026: mov    DWORD PTR [rip+0x21d244b],r8d        # 0x14264a478
0x0047802d: mov    rdx,QWORD PTR [rbx]
0x00478030: mov    ecx,DWORD PTR [rdx+0x18]
0x00478033: add    ecx,r12d
0x00478036: mov    r9d,DWORD PTR [rip+0x21d263b]        # 0x14264a678
0x0047803d: cmp    ecx,r9d
0x00478040: jl     0x14047807a
0x00478042: cmp    ecx,DWORD PTR [rip+0x21d2634]        # 0x14264a67c
0x00478048: jg     0x14047807a
0x0047804a: mov    eax,DWORD PTR [rdx+0x14]
0x0047804d: lea    ecx,[rax+rax*2]
0x00478050: lea    eax,[r14+rcx*2]
0x00478054: cmp    eax,DWORD PTR [rip+0x21d2626]        # 0x14264a680
0x0047805a: jl     0x14047807a
0x0047805c: cmp    eax,DWORD PTR [rip+0x21d2622]        # 0x14264a684
0x00478062: jg     0x14047807a
0x00478064: add    rdx,0x20
0x00478068: xor    r9d,r9d
0x0047806b: mov    rcx,rsi
0x0047806e: call   0x140ad9960
0x00478073: mov    r9d,DWORD PTR [rip+0x21d25fe]        # 0x14264a678
0x0047807a: mov    DWORD PTR [rip+0x21d23f8],0x1010007        # 0x14264a47c
0x00478084: mov    rdx,QWORD PTR [rbx]
0x00478087: mov    eax,DWORD PTR [rdx+0x14]
0x0047808a: lea    ecx,[rax*2+0x1]
0x00478091: add    ecx,eax
0x00478093: lea    r8d,[r14+rcx*2]
0x00478097: mov    ecx,DWORD PTR [rdx+0x18]
0x0047809a: inc    ecx
0x0047809c: add    ecx,r12d
0x0047809f: mov    DWORD PTR [rip+0x21d23cf],ecx        # 0x14264a474
0x004780a5: mov    DWORD PTR [rip+0x21d23cc],r8d        # 0x14264a478
0x004780ac: mov    rdx,QWORD PTR [rbx]
0x004780af: mov    ecx,DWORD PTR [rdx+0x18]
0x004780b2: inc    ecx
0x004780b4: add    ecx,r12d
0x004780b7: cmp    ecx,r9d
0x004780ba: jl     0x1404780f7
0x004780bc: cmp    ecx,DWORD PTR [rip+0x21d25ba]        # 0x14264a67c
0x004780c2: jg     0x1404780f7
0x004780c4: mov    eax,DWORD PTR [rdx+0x14]
0x004780c7: lea    eax,[rax+rax*2]
0x004780ca: lea    eax,[rax+0x1]
0x004780cd: lea    eax,[r14+rax*2]
0x004780d1: cmp    eax,DWORD PTR [rip+0x21d25a9]        # 0x14264a680
0x004780d7: jl     0x1404780f7
0x004780d9: cmp    eax,DWORD PTR [rip+0x21d25a5]        # 0x14264a684
0x004780df: jg     0x1404780f7
0x004780e1: add    rdx,0x48
0x004780e5: xor    r9d,r9d
0x004780e8: mov    rcx,rsi
0x004780eb: call   0x140ad9960
0x004780f0: mov    r9d,DWORD PTR [rip+0x21d2581]        # 0x14264a678
0x004780f7: mov    DWORD PTR [rip+0x21d237b],0x1010007        # 0x14264a47c
0x00478101: mov    rdx,QWORD PTR [rbx]
0x00478104: mov    eax,DWORD PTR [rdx+0x14]
0x00478107: lea    ecx,[rax+rax*2]
0x0047810a: lea    r8d,[rcx*2+0x3]
0x00478112: add    r8d,r14d
0x00478115: mov    ecx,DWORD PTR [rdx+0x18]
0x00478118: inc    ecx
0x0047811a: add    ecx,r12d
0x0047811d: mov    DWORD PTR [rip+0x21d2351],ecx        # 0x14264a474
0x00478123: mov    DWORD PTR [rip+0x21d234e],r8d        # 0x14264a478
0x0047812a: mov    rdx,QWORD PTR [rbx]
0x0047812d: mov    ecx,DWORD PTR [rdx+0x18]
0x00478130: inc    ecx
0x00478132: add    ecx,r12d
0x00478135: cmp    ecx,r9d
0x00478138: jl     0x140478171
0x0047813a: cmp    ecx,DWORD PTR [rip+0x21d253c]        # 0x14264a67c
0x00478140: jg     0x140478171
0x00478142: mov    eax,DWORD PTR [rdx+0x14]
0x00478145: lea    ecx,[rax+rax*2]
0x00478148: lea    eax,[rcx*2+0x3]
0x0047814f: add    eax,r14d
0x00478152: cmp    eax,DWORD PTR [rip+0x21d2528]        # 0x14264a680
0x00478158: jl     0x140478171
0x0047815a: cmp    eax,DWORD PTR [rip+0x21d2524]        # 0x14264a684
0x00478160: jg     0x140478171
0x00478162: add    rdx,0x68
0x00478166: xor    r9d,r9d
0x00478169: mov    rcx,rsi
0x0047816c: call   0x140ad9960
0x00478171: add    rbx,0x8
0x00478175: mov    rax,QWORD PTR [rsp+0x70]
0x0047817a: jmp    0x140477f70
0x0047817f: mov    ecx,DWORD PTR [rip+0x1f55603]        # 0x1423cd788
0x00478185: dec    ecx
0x00478187: mov    eax,DWORD PTR [rip+0x1f555f7]        # 0x1423cd784
0x0047818d: dec    eax
0x0047818f: mov    DWORD PTR [rip+0x21d24e2],r15d        # 0x14264a678
0x00478196: mov    DWORD PTR [rip+0x21d24e0],eax        # 0x14264a67c
0x0047819c: mov    DWORD PTR [rip+0x21d24dd],r15d        # 0x14264a680
0x004781a3: mov    DWORD PTR [rip+0x21d24db],ecx        # 0x14264a684
0x004781a9: mov    eax,DWORD PTR [rbp-0x74]
0x004781ac: mov    edi,DWORD PTR [rsp+0x78]
0x004781b0: cmp    eax,edi
0x004781b2: jl     0x140478284
0x004781b8: cmp    eax,DWORD PTR [rsp+0x64]
0x004781bc: jg     0x140478284
0x004781c2: mov    rbx,QWORD PTR [rsp+0x70]
0x004781c7: cmp    QWORD PTR [rbx+0x2c0],r15
0x004781ce: je     0x140478284
0x004781d4: mov    DWORD PTR [rip+0x21d229e],0x1010007        # 0x14264a47c
0x004781de: mov    ecx,DWORD PTR [rbp-0x38]
0x004781e1: mov    DWORD PTR [rip+0x21d228d],ecx        # 0x14264a474
0x004781e7: mov    DWORD PTR [rip+0x21d228b],eax        # 0x14264a478
0x004781ed: xorps  xmm0,xmm0
0x004781f0: movups XMMWORD PTR [rbp-0x10],xmm0
0x004781f4: mov    ecx,0x20
0x004781f9: call   0x1400707d0
0x004781fe: mov    QWORD PTR [rbp-0x10],rax
0x00478202: mov    QWORD PTR [rbp+0x0],0x10
0x0047820a: mov    QWORD PTR [rbp+0x8],0x1f
0x00478212: movups xmm0,XMMWORD PTR [rip+0x11c6f97]        # 0x14163f1b0 ; literal='Selected actor: '
0x00478219: movups XMMWORD PTR [rax],xmm0
0x0047821c: mov    BYTE PTR [rax+0x10],r15b
0x00478220: xor    r9d,r9d
0x00478223: lea    rdx,[rbp-0x10]
0x00478227: mov    rcx,rsi
0x0047822a: call   0x140ad9960
0x0047822f: nop
0x00478230: mov    rdx,QWORD PTR [rbp+0x8]
0x00478234: cmp    rdx,0xf
0x00478238: jbe    0x14047826b
0x0047823a: inc    rdx
0x0047823d: mov    rcx,QWORD PTR [rbp-0x10]
0x00478241: mov    rax,rcx
0x00478244: cmp    rdx,0x1000
0x0047824b: jb     0x140478266
0x0047824d: add    rdx,0x27
0x00478251: mov    rcx,QWORD PTR [rcx-0x8]
0x00478255: sub    rax,rcx
0x00478258: add    rax,0xfffffffffffffff8
0x0047825c: cmp    rax,0x1f
0x00478260: ja     0x1404791d0
0x00478266: call   0x141539680
0x0047826b: mov    rax,QWORD PTR [rbx+0x2c0]
0x00478272: mov    rdx,QWORD PTR [rax]
0x00478275: add    rdx,0x18
0x00478279: xor    r9d,r9d
0x0047827c: mov    rcx,rsi
0x0047827f: call   0x140ad9960
0x00478284: mov    ebx,DWORD PTR [rbp-0x30]
0x00478287: add    ebx,0x2
0x0047828a: mov    r13d,DWORD PTR [rbp-0x70]
0x0047828e: mov    eax,DWORD PTR [rbp-0x7c]
0x00478291: mov    r12d,DWORD PTR [rsp+0x68]
0x00478296: jmp    0x1404783a3
0x0047829b: lea    ecx,[rbx+0x2]
0x0047829e: cmp    ecx,edi
0x004782a0: jl     0x14047839a
0x004782a6: cmp    ecx,edx
0x004782a8: jg     0x14047839a
0x004782ae: mov    DWORD PTR [rip+0x21d21c4],0x1000007        # 0x14264a47c
0x004782b8: lea    eax,[r15+0x2]
0x004782bc: mov    DWORD PTR [rip+0x21d21b2],eax        # 0x14264a474
0x004782c2: mov    DWORD PTR [rip+0x21d21b0],ecx        # 0x14264a478
0x004782c8: mov    rcx,QWORD PTR [r14+0x8]
0x004782cc: sub    rcx,QWORD PTR [r14]
0x004782cf: sar    rcx,0x3
0x004782d3: xorps  xmm0,xmm0
0x004782d6: mov    QWORD PTR [rbp+0x8],0xf
0x004782de: movups XMMWORD PTR [rbp-0x10],xmm0
0x004782e2: cmp    rcx,0x1
0x004782e6: jne    0x140478359
0x004782e8: mov    QWORD PTR [rbp+0x0],0xa
0x004782f0: movsd  xmm0,QWORD PTR [rip+0x11744c0]        # 0x1415ec7b8 ; literal='One member'
0x004782f8: movsd  QWORD PTR [rbp-0x10],xmm0
0x004782fd: movzx  eax,WORD PTR [rip+0x11744bc]        # 0x1415ec7c0 ; literal='er'
0x00478304: mov    WORD PTR [rbp-0x8],ax
0x00478308: mov    BYTE PTR [rbp-0x6],0x0
0x0047830c: xor    r9d,r9d
0x0047830f: lea    rdx,[rbp-0x10]
0x00478313: mov    rcx,rsi
0x00478316: call   0x140ad9960
0x0047831b: nop
0x0047831c: mov    rdx,QWORD PTR [rbp+0x8]
0x00478320: cmp    rdx,0xf
0x00478324: jbe    0x14047839a
0x00478326: inc    rdx
0x00478329: mov    rcx,QWORD PTR [rbp-0x10]
0x0047832d: mov    rax,rcx
0x00478330: cmp    rdx,0x1000
0x00478337: jb     0x140478352
0x00478339: add    rdx,0x27
0x0047833d: mov    rcx,QWORD PTR [rcx-0x8]
0x00478341: sub    rax,rcx
0x00478344: add    rax,0xfffffffffffffff8
0x00478348: cmp    rax,0x1f
0x0047834c: ja     0x1404791d0
0x00478352: call   0x141539680
0x00478357: jmp    0x14047839a
0x00478359: xor    eax,eax
0x0047835b: mov    QWORD PTR [rbp+0x0],rax
0x0047835f: mov    BYTE PTR [rbp-0x10],al
0x00478362: lea    rdx,[rbp-0x10]
0x00478366: call   0x14052c130
0x0047836b: mov    r8d,0x8
0x00478371: lea    rdx,[rip+0x11744a0]        # 0x1415ec818 ; literal=' members'
0x00478378: lea    rcx,[rbp-0x10]
0x0047837c: call   0x14006fa10
0x00478381: xor    r9d,r9d
0x00478384: lea    rdx,[rbp-0x10]
0x00478388: mov    rcx,rsi
0x0047838b: call   0x140ad9960
0x00478390: nop
0x00478391: lea    rcx,[rbp-0x10]
0x00478395: call   0x14006f850
0x0047839a: add    ebx,0x5
0x0047839d: mov    eax,DWORD PTR [rbp-0x40]
0x004783a0: add    eax,0xfffffff8
0x004783a3: mov    DWORD PTR [rsp+0x60],ebx
0x004783a7: inc    r12d
0x004783aa: mov    DWORD PTR [rsp+0x68],r12d
0x004783af: mov    rcx,QWORD PTR [rbp-0x50]
0x004783b3: inc    rcx
0x004783b6: mov    QWORD PTR [rbp-0x50],rcx
0x004783ba: mov    r14,QWORD PTR [rsp+0x70]
0x004783bf: cmp    rcx,QWORD PTR [rbp-0x48]
0x004783c3: jge    0x1404783d6
0x004783c5: mov    r15d,DWORD PTR [rsp+0x7c]
0x004783ca: jmp    0x1404778d0
0x004783cf: call   QWORD PTR [rip+0x116d753]        # 0x1415e5b28
0x004783d5: nop
0x004783d6: mov    r12d,DWORD PTR [rbp-0x78]
0x004783da: mov    r8d,DWORD PTR [rbp-0x68]
0x004783de: xor    r9d,r9d
0x004783e1: cmp    r12d,r8d
0x004783e4: jle    0x1404791f3
0x004783ea: lea    ecx,[rdi+0x1]
0x004783ed: lea    edx,[rdi-0x2]
0x004783f0: add    edx,r8d
0x004783f3: mov    QWORD PTR [rbp+0x8],0x0
0x004783fb: mov    eax,DWORD PTR [r14+0x2c8]
0x00478402: mov    DWORD PTR [rbp-0x10],eax
0x00478405: mov    DWORD PTR [rbp-0xc],r9d
0x00478409: lea    eax,[r12-0x1]
0x0047840e: mov    DWORD PTR [rbp-0x8],eax
0x00478411: mov    DWORD PTR [rbp+0x0],ecx
0x00478414: mov    DWORD PTR [rbp+0x4],edx
0x00478417: mov    DWORD PTR [rbp-0x4],r8d
0x0047841b: lea    rcx,[rbp-0x10]
0x0047841f: call   0x1400bb3b0
0x00478424: lea    r9d,[r13+0x1]
0x00478428: xor    eax,eax
0x0047842a: mov    DWORD PTR [rsp+0x28],eax
0x0047842e: jmp    0x14047779a
0x00478433: mov    r9,r10
0x00478436: mov    rbx,QWORD PTR [r10+0x318]
0x0047843d: mov    rax,QWORD PTR [r10+0x320]
0x00478444: sub    rax,rbx
0x00478447: sar    rax,0x3
0x0047844b: lea    r12d,[rax+rax*4]
0x0047844f: mov    DWORD PTR [rbp-0x74],r12d
0x00478453: movsxd rcx,DWORD PTR [r10+0x294]
0x0047845a: mov    edi,0x3
0x0047845f: test   ecx,ecx
0x00478461: js     0x140478496
0x00478463: cmp    ecx,eax
0x00478465: jge    0x140478496
0x00478467: mov    rbx,QWORD PTR [rbx+rcx*8]
0x0047846b: mov    rcx,rbx
0x0047846e: call   0x1400d1840
0x00478473: mov    rax,QWORD PTR [rbx+0x80]
0x0047847a: sub    rax,QWORD PTR [rbx+0x78]
0x0047847e: sar    rax,0x3
0x00478482: cmp    eax,edi
0x00478484: cmovl  eax,edi
0x00478487: dec    r12d
0x0047848a: add    r12d,eax
0x0047848d: mov    DWORD PTR [rbp-0x74],r12d
0x00478491: mov    r9,QWORD PTR [rsp+0x70]
0x00478496: mov    r14d,DWORD PTR [rsp+0x64]
0x0047849b: add    r14d,0x6
0x0047849f: mov    eax,DWORD PTR [rsp+0x60]
0x004784a3: add    eax,0xffffffe2
0x004784a6: mov    ebx,DWORD PTR [rsp+0x68]
0x004784aa: add    ebx,0x4
0x004784ad: mov    DWORD PTR [rsp+0x60],ebx
0x004784b1: mov    ecx,DWORD PTR [rbp-0x7c]
0x004784b4: add    ecx,0xfffffffe
0x004784b7: mov    DWORD PTR [rsp+0x64],ecx
0x004784bb: mov    r8d,ecx
0x004784be: sub    r8d,ebx
0x004784c1: inc    r8d
0x004784c4: mov    DWORD PTR [rbp-0x40],r8d
0x004784c8: lea    edi,[rax-0x2]
0x004784cb: cmp    r12d,r8d
0x004784ce: cmovle edi,eax
0x004784d1: mov    DWORD PTR [rbp-0x68],edi
0x004784d4: mov    eax,DWORD PTR [r9+0x2c8]
0x004784db: mov    ecx,r12d
0x004784de: sub    ecx,r8d
0x004784e1: cmp    eax,ecx
0x004784e3: cmovle ecx,eax
0x004784e6: xor    r10d,r10d
0x004784e9: mov    eax,r10d
0x004784ec: test   ecx,ecx
0x004784ee: cmovns eax,ecx
0x004784f1: mov    r13d,ebx
0x004784f4: sub    r13d,eax
0x004784f7: mov    DWORD PTR [rbp-0x70],r13d
0x004784fb: mov    rax,QWORD PTR [r9+0x320]
0x00478502: sub    rax,QWORD PTR [r9+0x318]
0x00478509: sar    rax,0x3
0x0047850d: mov    QWORD PTR [rbp-0x48],rax
0x00478511: mov    r15d,r10d
0x00478514: mov    DWORD PTR [rsp+0x68],r10d
0x00478519: test   eax,eax
0x0047851b: jle    0x140478957
0x00478521: mov    ecx,r10d
0x00478524: mov    QWORD PTR [rbp-0x60],rcx
0x00478528: cdqe
0x0047852a: mov    QWORD PTR [rbp-0x30],rax
0x0047852e: xchg   ax,ax
0x00478530: mov    rax,QWORD PTR [r9+0x318]
0x00478537: mov    r12,QWORD PTR [rax+rcx*8]
0x0047853b: mov    QWORD PTR [rbp-0x50],r12
0x0047853f: mov    rcx,r12
0x00478542: call   0x1400d1840
0x00478547: lea    ecx,[r13+0x4]
0x0047854b: mov    DWORD PTR [rsp+0x7c],ecx
0x0047854f: mov    rdx,QWORD PTR [rsp+0x70]
0x00478554: cmp    r15d,DWORD PTR [rdx+0x294]
0x0047855b: jne    0x14047857d
0x0047855d: mov    rax,QWORD PTR [r12+0x80]
0x00478565: sub    rax,QWORD PTR [r12+0x78]
0x0047856a: sar    rax,0x3
0x0047856e: cmp    rax,0x3
0x00478572: jb     0x14047857d
0x00478574: add    ecx,0xfffffffd
0x00478577: add    ecx,eax
0x00478579: mov    DWORD PTR [rsp+0x7c],ecx
0x0047857d: mov    r15d,r13d
0x00478580: cmp    r13d,ecx
0x00478583: jg     0x140478670
0x00478589: movsxd r12,r13d
0x0047858c: nop    DWORD PTR [rax+0x0]
0x00478590: cmp    r15d,ebx
0x00478593: jl     0x140478658
0x00478599: cmp    r15d,DWORD PTR [rsp+0x64]
0x0047859e: jg     0x140478658
0x004785a4: mov    ebx,r14d
0x004785a7: cmp    r14d,edi
0x004785aa: jg     0x140478654
0x004785b0: mov    DWORD PTR [rip+0x21d1ebe],ebx        # 0x14264a474
0x004785b6: mov    DWORD PTR [rip+0x21d1ebb],r15d        # 0x14264a478
0x004785bd: xor    r8d,r8d
0x004785c0: xor    edx,edx
0x004785c2: mov    rcx,rsi
0x004785c5: call   0x1400bb190
0x004785ca: cmp    r15d,r13d
0x004785cd: jne    0x1404785f3
0x004785cf: cmp    ebx,r14d
0x004785d2: jne    0x1404785dc
0x004785d4: mov    edx,DWORD PTR [rip+0x21d37be]        # 0x14264bd98
0x004785da: jmp    0x14047863e
0x004785dc: mov    rcx,rsi
0x004785df: cmp    ebx,edi
0x004785e1: jne    0x1404785eb
0x004785e3: mov    edx,DWORD PTR [rip+0x21d37c7]        # 0x14264bdb0
0x004785e9: jmp    0x140478641
0x004785eb: mov    edx,DWORD PTR [rip+0x21d37b3]        # 0x14264bda4
0x004785f1: jmp    0x140478641
0x004785f3: movsxd rcx,DWORD PTR [rsp+0x7c]
0x004785f8: cmp    r12,rcx
0x004785fb: jne    0x140478621
0x004785fd: cmp    ebx,r14d
0x00478600: jne    0x14047860a
0x00478602: mov    edx,DWORD PTR [rip+0x21d3798]        # 0x14264bda0
0x00478608: jmp    0x14047863e
0x0047860a: mov    rcx,rsi
0x0047860d: cmp    ebx,edi
0x0047860f: jne    0x140478619
0x00478611: mov    edx,DWORD PTR [rip+0x21d37a1]        # 0x14264bdb8
0x00478617: jmp    0x140478641
0x00478619: mov    edx,DWORD PTR [rip+0x21d378d]        # 0x14264bdac
0x0047861f: jmp    0x140478641
0x00478621: cmp    ebx,r14d
0x00478624: jne    0x14047862e
0x00478626: mov    edx,DWORD PTR [rip+0x21d3770]        # 0x14264bd9c
0x0047862c: jmp    0x14047863e
0x0047862e: cmp    ebx,edi
0x00478630: mov    edx,DWORD PTR [rip+0x21d377e]        # 0x14264bdb4
0x00478636: je     0x14047863e
0x00478638: mov    edx,DWORD PTR [rip+0x21d376a]        # 0x14264bda8
0x0047863e: mov    rcx,rsi
0x00478641: call   0x140adaad0
0x00478646: inc    ebx
0x00478648: cmp    ebx,edi
0x0047864a: jle    0x1404785b0
0x00478650: mov    ecx,DWORD PTR [rsp+0x7c]
0x00478654: mov    ebx,DWORD PTR [rsp+0x60]
0x00478658: inc    r15d
0x0047865b: inc    r12
0x0047865e: cmp    r15d,ecx
0x00478661: jle    0x140478590
0x00478667: mov    r12,QWORD PTR [rbp-0x50]
0x0047866b: mov    rdx,QWORD PTR [rsp+0x70]
0x00478670: mov    ecx,DWORD PTR [rsp+0x64]
0x00478674: cmp    r13d,ebx
0x00478677: jl     0x14047883d
0x0047867d: cmp    r13d,ecx
0x00478680: jg     0x14047883d
0x00478686: mov    ebx,DWORD PTR [rsp+0x68]
0x0047868a: cmp    ebx,DWORD PTR [rdx+0x294]
0x00478690: mov    DWORD PTR [rip+0x21d1de2],0x1010006        # 0x14264a47c
0x0047869a: je     0x1404786a6
0x0047869c: mov    DWORD PTR [rip+0x21d1dd6],0x1000006        # 0x14264a47c
0x004786a6: lea    eax,[r14+0x2]
0x004786aa: mov    DWORD PTR [rip+0x21d1dc4],eax        # 0x14264a474
0x004786b0: mov    DWORD PTR [rip+0x21d1dc1],r13d        # 0x14264a478
0x004786b7: lea    rdx,[r12+0x58]
0x004786bc: xor    r9d,r9d
0x004786bf: mov    rcx,rsi
0x004786c2: call   0x140ad9960
0x004786c7: mov    rax,QWORD PTR [rsp+0x70]
0x004786cc: cmp    ebx,DWORD PTR [rax+0x294]
0x004786d2: mov    DWORD PTR [rip+0x21d1da0],0x1010004        # 0x14264a47c
0x004786dc: je     0x1404786e8
0x004786de: mov    DWORD PTR [rip+0x21d1d94],0x1000004        # 0x14264a47c
0x004786e8: xorps  xmm0,xmm0
0x004786eb: movups XMMWORD PTR [rbp+0x10],xmm0
0x004786ef: xor    r15d,r15d
0x004786f2: mov    QWORD PTR [rbp+0x20],r15
0x004786f6: mov    QWORD PTR [rbp+0x28],0xf
0x004786fe: mov    BYTE PTR [rbp+0x10],r15b
0x00478702: movups XMMWORD PTR [rbp-0x10],xmm0
0x00478706: mov    QWORD PTR [rbp+0x0],r15
0x0047870a: mov    QWORD PTR [rbp+0x8],0xf
0x00478712: mov    BYTE PTR [rbp-0x10],r15b
0x00478716: lea    ecx,[rbx+0x1]
0x00478719: lea    rdx,[rbp-0x10]
0x0047871d: call   0x14052c2b0
0x00478722: lea    rdx,[rbp-0x10]
0x00478726: cmp    QWORD PTR [rbp+0x8],0xf
0x0047872b: cmova  rdx,QWORD PTR [rbp-0x10]
0x00478730: mov    r8,QWORD PTR [rbp+0x0]
0x00478734: lea    rcx,[rbp+0x10]
0x00478738: call   0x14006fa10
0x0047873d: nop
0x0047873e: mov    rdx,QWORD PTR [rbp+0x8]
0x00478742: cmp    rdx,0xf
0x00478746: jbe    0x140478779
0x00478748: inc    rdx
0x0047874b: mov    rcx,QWORD PTR [rbp-0x10]
0x0047874f: mov    rax,rcx
0x00478752: cmp    rdx,0x1000
0x00478759: jb     0x140478774
0x0047875b: add    rdx,0x27
0x0047875f: mov    rcx,QWORD PTR [rcx-0x8]
0x00478763: sub    rax,rcx
0x00478766: add    rax,0xfffffffffffffff8
0x0047876a: cmp    rax,0x1f
0x0047876e: ja     0x140478945
0x00478774: call   0x141539680
0x00478779: mov    r8d,0x1
0x0047877f: lea    rdx,[rip+0x1172d8e]        # 0x1415eb514 ; literal='/'
0x00478786: lea    rcx,[rbp+0x10]
0x0047878a: call   0x14006fa10
0x0047878f: xorps  xmm0,xmm0
0x00478792: movups XMMWORD PTR [rbp-0x10],xmm0
0x00478796: mov    QWORD PTR [rbp+0x0],r15
0x0047879a: mov    QWORD PTR [rbp+0x8],0xf
0x004787a2: mov    BYTE PTR [rbp-0x10],0x0
0x004787a6: lea    rdx,[rbp-0x10]
0x004787aa: mov    ecx,DWORD PTR [rbp-0x48]
0x004787ad: call   0x14052c2b0
0x004787b2: lea    rdx,[rbp-0x10]
0x004787b6: cmp    QWORD PTR [rbp+0x8],0xf
0x004787bb: cmova  rdx,QWORD PTR [rbp-0x10]
0x004787c0: mov    r8,QWORD PTR [rbp+0x0]
0x004787c4: lea    rcx,[rbp+0x10]
0x004787c8: call   0x14006fa10
0x004787cd: nop
0x004787ce: mov    rdx,QWORD PTR [rbp+0x8]
0x004787d2: cmp    rdx,0xf
0x004787d6: jbe    0x140478809
0x004787d8: inc    rdx
0x004787db: mov    rcx,QWORD PTR [rbp-0x10]
0x004787df: mov    rax,rcx
0x004787e2: cmp    rdx,0x1000
0x004787e9: jb     0x140478804
0x004787eb: add    rdx,0x27
0x004787ef: mov    rcx,QWORD PTR [rcx-0x8]
0x004787f3: sub    rax,rcx
0x004787f6: add    rax,0xfffffffffffffff8
0x004787fa: cmp    rax,0x1f
0x004787fe: ja     0x140478945
0x00478804: call   0x141539680
0x00478809: mov    eax,edi
0x0047880b: sub    eax,DWORD PTR [rbp+0x20]
0x0047880e: sub    eax,0x2
0x00478811: mov    DWORD PTR [rip+0x21d1c5d],eax        # 0x14264a474
0x00478817: mov    DWORD PTR [rip+0x21d1c5a],r13d        # 0x14264a478
0x0047881e: xor    r9d,r9d
0x00478821: lea    rdx,[rbp+0x10]
0x00478825: mov    rcx,rsi
0x00478828: call   0x140ad9960
0x0047882d: nop
0x0047882e: lea    rcx,[rbp+0x10]
0x00478832: call   0x14006f850
0x00478837: mov    ecx,DWORD PTR [rsp+0x64]
0x0047883b: jmp    0x140478840
0x0047883d: xor    r15d,r15d
0x00478840: mov    edx,DWORD PTR [rsp+0x68]
0x00478844: mov    r9,QWORD PTR [rsp+0x70]
0x00478849: cmp    edx,DWORD PTR [r9+0x294]
0x00478850: mov    DWORD PTR [rip+0x21d1c22],0x1010007        # 0x14264a47c
0x0047885a: je     0x140478866
0x0047885c: mov    DWORD PTR [rip+0x21d1c16],0x1000007        # 0x14264a47c
0x00478866: lea    ebx,[r13+0x1]
0x0047886a: mov    rax,QWORD PTR [r12+0x80]
0x00478872: sub    rax,QWORD PTR [r12+0x78]
0x00478877: sar    rax,0x3
0x0047887b: cmp    eax,0x1
0x0047887e: jne    0x140478884
0x00478880: lea    ebx,[r13+0x2]
0x00478884: mov    r8d,0x3
0x0047888a: mov    r12d,r8d
0x0047888d: mov    DWORD PTR [rbp-0x78],r8d
0x00478891: cmp    edx,DWORD PTR [r9+0x294]
0x00478898: jne    0x1404788a8
0x0047889a: mov    r12d,eax
0x0047889d: cmp    eax,r8d
0x004788a0: cmovl  r12d,r8d
0x004788a4: mov    DWORD PTR [rbp-0x78],r12d
0x004788a8: movsxd r13,r12d
0x004788ab: test   r12d,r12d
0x004788ae: jle    0x140478913
0x004788b0: cdqe
0x004788b2: mov    QWORD PTR [rbp-0x28],rax
0x004788b6: mov    rdi,QWORD PTR [rbp-0x50]
0x004788ba: mov    r12d,DWORD PTR [rsp+0x60]
0x004788bf: nop
0x004788c0: cmp    r15,rax
0x004788c3: jge    0x140478903
0x004788c5: cmp    ebx,r12d
0x004788c8: jl     0x1404788f5
0x004788ca: cmp    ebx,ecx
0x004788cc: jg     0x1404788f5
0x004788ce: lea    eax,[r14+0x2]
0x004788d2: mov    DWORD PTR [rip+0x21d1b9c],eax        # 0x14264a474
0x004788d8: mov    DWORD PTR [rip+0x21d1b9a],ebx        # 0x14264a478
0x004788de: mov    rdx,QWORD PTR [rdi+0x78]
0x004788e2: xor    r9d,r9d
0x004788e5: mov    rdx,QWORD PTR [rdx+r15*8]
0x004788e9: mov    rcx,rsi
0x004788ec: call   0x140ad9960
0x004788f1: mov    rax,QWORD PTR [rbp-0x28]
0x004788f5: inc    r15
0x004788f8: inc    ebx
0x004788fa: cmp    r15,r13
0x004788fd: mov    ecx,DWORD PTR [rsp+0x64]
0x00478901: jl     0x1404788c0
0x00478903: mov    edi,DWORD PTR [rbp-0x68]
0x00478906: mov    r12d,DWORD PTR [rbp-0x78]
0x0047890a: mov    edx,DWORD PTR [rsp+0x68]
0x0047890e: mov    r9,QWORD PTR [rsp+0x70]
0x00478913: mov    r13d,DWORD PTR [rbp-0x70]
0x00478917: add    r13d,0x2
0x0047891b: add    r13d,r12d
0x0047891e: mov    DWORD PTR [rbp-0x70],r13d
0x00478922: inc    edx
0x00478924: mov    DWORD PTR [rsp+0x68],edx
0x00478928: mov    rcx,QWORD PTR [rbp-0x60]
0x0047892c: inc    rcx
0x0047892f: mov    QWORD PTR [rbp-0x60],rcx
0x00478933: mov    ebx,DWORD PTR [rsp+0x60]
0x00478937: cmp    rcx,QWORD PTR [rbp-0x30]
0x0047893b: jge    0x14047894c
0x0047893d: mov    r15d,edx
0x00478940: jmp    0x140478530
0x00478945: call   QWORD PTR [rip+0x116d1dd]        # 0x1415e5b28
0x0047894b: nop
0x0047894c: mov    r8d,DWORD PTR [rbp-0x40]
0x00478950: mov    r12d,DWORD PTR [rbp-0x74]
0x00478954: xor    r10d,r10d
0x00478957: mov    r14,QWORD PTR [rsp+0x70]
0x0047895c: cmp    r12d,r8d
0x0047895f: jle    0x1404791f3
0x00478965: lea    ecx,[rbx+0x1]
0x00478968: lea    edx,[rbx-0x2]
0x0047896b: add    edx,r8d
0x0047896e: mov    QWORD PTR [rbp+0x8],0x0
0x00478976: mov    eax,DWORD PTR [r14+0x2c8]
0x0047897d: mov    DWORD PTR [rbp-0x10],eax
0x00478980: mov    DWORD PTR [rbp-0xc],r10d
0x00478984: lea    eax,[r12-0x1]
0x00478989: mov    DWORD PTR [rbp-0x8],eax
0x0047898c: mov    DWORD PTR [rbp+0x0],ecx
0x0047898f: mov    DWORD PTR [rbp+0x4],edx
0x00478992: mov    DWORD PTR [rbp-0x4],r8d
0x00478996: lea    rcx,[rbp-0x10]
0x0047899a: call   0x1400bb3b0
0x0047899f: xor    eax,eax
0x004789a1: mov    DWORD PTR [rsp+0x28],eax
0x004789a5: jmp    0x140477796
0x004789aa: lea    r15d,[rbx+0x6]
0x004789ae: mov    DWORD PTR [rbp-0x74],r15d
0x004789b2: mov    r14,r10
0x004789b5: cmp    QWORD PTR [r10+0x230],0x0
0x004789bd: je     0x140478c8a
0x004789c3: mov    r13d,DWORD PTR [rsp+0x60]
0x004789c8: add    r13d,0xffffffe0
0x004789cc: mov    DWORD PTR [rbp-0x78],r13d
0x004789d0: mov    r12d,r13d
0x004789d3: sub    r12d,r15d
0x004789d6: inc    r12d
0x004789d9: cmp    DWORD PTR [r10+0x210],r12d
0x004789e0: je     0x140478b63
0x004789e6: add    r14,0x1f8
0x004789ed: mov    rcx,r14
0x004789f0: call   0x1400bb9b0
0x004789f5: mov    rdi,QWORD PTR [rsp+0x70]
0x004789fa: mov    DWORD PTR [rdi+0x210],r12d
0x00478a01: mov    r8d,r12d
0x00478a04: mov    rdx,QWORD PTR [rdi+0x230]
0x00478a0b: mov    rcx,r14
0x00478a0e: call   0x1408e7310
0x00478a13: xor    r15d,r15d
0x00478a16: mov    DWORD PTR [rbp-0x4],r15d
0x00478a1a: mov    QWORD PTR [rbp+0x0],0xc
0x00478a22: mov    QWORD PTR [rbp+0x8],0xf
0x00478a2a: movsd  xmm0,QWORD PTR [rip+0x11c67b6]        # 0x14163f1e8 ; literal='Prepared by '
0x00478a32: movsd  QWORD PTR [rbp-0x10],xmm0
0x00478a37: mov    eax,DWORD PTR [rip+0x11c67b3]        # 0x14163f1f0 ; literal=' by '
0x00478a3d: mov    DWORD PTR [rbp-0x8],eax
0x00478a40: mov    BYTE PTR [rbp-0x4],r15b
0x00478a44: mov    rdx,QWORD PTR [rdi+0x230]
0x00478a4b: add    rdx,0x28
0x00478a4f: mov    r8,QWORD PTR [rdx+0x10]
0x00478a53: cmp    QWORD PTR [rdx+0x18],0xf
0x00478a58: jbe    0x140478a5d
0x00478a5a: mov    rdx,QWORD PTR [rdx]
0x00478a5d: lea    rcx,[rbp-0x10]
0x00478a61: call   0x14006fa10
0x00478a66: mov    r8d,r12d
0x00478a69: lea    rdx,[rbp-0x10]
0x00478a6d: mov    rcx,r14
0x00478a70: call   0x1408e7310
0x00478a75: mov    ecx,0x20
0x00478a7a: call   0x141539690
0x00478a7f: mov    rbx,rax
0x00478a82: xorps  xmm0,xmm0
0x00478a85: movups XMMWORD PTR [rax],xmm0
0x00478a88: mov    QWORD PTR [rax+0x10],r15
0x00478a8c: mov    QWORD PTR [rax+0x18],0xf
0x00478a94: mov    BYTE PTR [rax],0x0
0x00478a97: mov    QWORD PTR [rbp-0x48],rax
0x00478a9b: xor    r8d,r8d
0x00478a9e: lea    rdx,[rip+0x1172a53]        # 0x1415eb4f8
0x00478aa5: mov    rcx,rax
0x00478aa8: call   0x14006f8d0
0x00478aad: mov    rdx,QWORD PTR [r14+0x8]
0x00478ab1: cmp    rdx,QWORD PTR [r14+0x10]
0x00478ab5: je     0x140478ac1
0x00478ab7: mov    QWORD PTR [rdx],rbx
0x00478aba: add    QWORD PTR [r14+0x8],0x8
0x00478abf: jmp    0x140478acd
0x00478ac1: lea    r8,[rbp-0x48]
0x00478ac5: mov    rcx,r14
0x00478ac8: call   0x1400bad30
0x00478acd: mov    rdi,QWORD PTR [rdi+0x230]
0x00478ad4: mov    rbx,QWORD PTR [rdi+0x110]
0x00478adb: mov    rdi,QWORD PTR [rdi+0x118]
0x00478ae2: xor    r13d,r13d
0x00478ae5: cmp    rbx,rdi
0x00478ae8: jae    0x140478b56
0x00478aea: mov    ecx,0x20
0x00478aef: call   0x141539690
0x00478af4: mov    r15,rax
0x00478af7: xorps  xmm0,xmm0
0x00478afa: movups XMMWORD PTR [rax],xmm0
0x00478afd: mov    QWORD PTR [rax+0x10],r13
0x00478b01: mov    QWORD PTR [rax+0x18],0xf
0x00478b09: mov    BYTE PTR [rax],r13b
0x00478b0c: mov    QWORD PTR [rbp-0x48],rax
0x00478b10: xor    r8d,r8d
0x00478b13: lea    rdx,[rip+0x11729de]        # 0x1415eb4f8
0x00478b1a: mov    rcx,rax
0x00478b1d: call   0x14006f8d0
0x00478b22: mov    rdx,QWORD PTR [r14+0x8]
0x00478b26: cmp    rdx,QWORD PTR [r14+0x10]
0x00478b2a: je     0x140478b36
0x00478b2c: mov    QWORD PTR [rdx],r15
0x00478b2f: add    QWORD PTR [r14+0x8],0x8
0x00478b34: jmp    0x140478b42
0x00478b36: lea    r8,[rbp-0x48]
0x00478b3a: mov    rcx,r14
0x00478b3d: call   0x1400bad30
0x00478b42: mov    r8d,r12d
0x00478b45: mov    rdx,QWORD PTR [rbx]
0x00478b48: mov    rcx,r14
0x00478b4b: call   0x1408e7310
0x00478b50: add    rbx,0x8
0x00478b54: jmp    0x140478ae5
0x00478b56: lea    rcx,[rbp-0x10]
0x00478b5a: call   0x14006f850
0x00478b5f: mov    r13d,DWORD PTR [rbp-0x78]
0x00478b63: mov    r8d,DWORD PTR [rsp+0x68]
0x00478b68: add    r8d,0x4
0x00478b6c: mov    DWORD PTR [rbp-0x40],r8d
0x00478b70: mov    r14d,DWORD PTR [rbp-0x7c]
0x00478b74: add    r14d,0xfffffffe
0x00478b78: sub    r14d,r8d
0x00478b7b: inc    r14d
0x00478b7e: mov    DWORD PTR [rbp-0x68],r14d
0x00478b82: mov    r9,QWORD PTR [rsp+0x70]
0x00478b87: mov    r15,QWORD PTR [r9+0x200]
0x00478b8e: sub    r15,QWORD PTR [r9+0x1f8]
0x00478b95: sar    r15,0x3
0x00478b99: mov    QWORD PTR [rbp-0x48],r15
0x00478b9d: mov    DWORD PTR [rip+0x21d18d5],0x1010007        # 0x14264a47c
0x00478ba7: mov    edi,r8d
0x00478baa: mov    eax,DWORD PTR [r9+0x240]
0x00478bb1: mov    edx,r15d
0x00478bb4: sub    edx,r14d
0x00478bb7: cmp    eax,edx
0x00478bb9: cmovle edx,eax
0x00478bbc: xor    r10d,r10d
0x00478bbf: mov    ecx,r10d
0x00478bc2: test   edx,edx
0x00478bc4: cmovns ecx,edx
0x00478bc7: lea    eax,[rcx+r14*1]
0x00478bcb: movsxd rbx,ecx
0x00478bce: movsxd r12,eax
0x00478bd1: cmp    rbx,r12
0x00478bd4: jge    0x140478c2a
0x00478bd6: movsxd r13,r15d
0x00478bd9: mov    r14d,DWORD PTR [rbp-0x74]
0x00478bdd: mov    r15,r9
0x00478be0: cmp    rbx,r13
0x00478be3: jge    0x140478c12
0x00478be5: mov    DWORD PTR [rip+0x21d1888],r14d        # 0x14264a474
0x00478bec: mov    DWORD PTR [rip+0x21d1886],edi        # 0x14264a478
0x00478bf2: mov    rdx,QWORD PTR [r15+0x1f8]
0x00478bf9: xor    r9d,r9d
0x00478bfc: mov    rdx,QWORD PTR [rdx+rbx*8]
0x00478c00: mov    rcx,rsi
0x00478c03: call   0x140ad9960
0x00478c08: inc    edi
0x00478c0a: inc    rbx
0x00478c0d: cmp    rbx,r12
0x00478c10: jl     0x140478be0
0x00478c12: mov    r14d,DWORD PTR [rbp-0x68]
0x00478c16: mov    r15,QWORD PTR [rbp-0x48]
0x00478c1a: mov    r8d,DWORD PTR [rbp-0x40]
0x00478c1e: mov    r13d,DWORD PTR [rbp-0x78]
0x00478c22: mov    r9,QWORD PTR [rsp+0x70]
0x00478c27: xor    r10d,r10d
0x00478c2a: cmp    r15d,r14d
0x00478c2d: jle    0x1404791ee
0x00478c33: lea    ecx,[r8+0x1]
0x00478c37: lea    edx,[r8-0x2]
0x00478c3b: add    edx,r14d
0x00478c3e: mov    QWORD PTR [rbp+0x8],0x0
0x00478c46: mov    eax,DWORD PTR [r9+0x240]
0x00478c4d: mov    DWORD PTR [rbp-0x10],eax
0x00478c50: mov    DWORD PTR [rbp-0xc],r10d
0x00478c54: lea    eax,[r15-0x1]
0x00478c58: mov    DWORD PTR [rbp-0x8],eax
0x00478c5b: mov    DWORD PTR [rbp+0x0],ecx
0x00478c5e: mov    DWORD PTR [rbp+0x4],edx
0x00478c61: mov    DWORD PTR [rbp-0x4],r14d
0x00478c65: lea    rcx,[rbp-0x10]
0x00478c69: call   0x1400bb3b0
0x00478c6e: lea    r9d,[r13+0x1]
0x00478c72: xor    eax,eax
0x00478c74: mov    DWORD PTR [rsp+0x28],eax
0x00478c78: mov    r14,QWORD PTR [rsp+0x70]
0x00478c7d: movzx  eax,BYTE PTR [r14+0x244]
0x00478c85: jmp    0x1404777a2
0x00478c8a: mov    r9,QWORD PTR [r10+0x220]
0x00478c91: sub    r9,QWORD PTR [r10+0x218]
0x00478c98: sar    r9,0x3
0x00478c9c: mov    QWORD PTR [rbp-0x60],r9
0x00478ca0: mov    r11d,DWORD PTR [rsp+0x68]
0x00478ca5: add    r11d,0x4
0x00478ca9: mov    DWORD PTR [rsp+0x64],r11d
0x00478cae: test   r9,r9
0x00478cb1: je     0x14047912c
0x00478cb7: mov    r8d,DWORD PTR [rsp+0x60]
0x00478cbc: add    r8d,0xffffffe2
0x00478cc0: mov    ecx,DWORD PTR [rbp-0x7c]
0x00478cc3: add    ecx,0xfffffffe
0x00478cc6: sub    ecx,r11d
0x00478cc9: inc    ecx
0x00478ccb: mov    eax,0x55555556
0x00478cd0: imul   ecx
0x00478cd2: mov    r10d,edx
0x00478cd5: shr    r10d,0x1f
0x00478cd9: add    r10d,edx
0x00478cdc: mov    DWORD PTR [rbp-0x7c],r10d
0x00478ce0: lea    edi,[r8-0x2]
0x00478ce4: cmp    r9d,r10d
0x00478ce7: cmovle edi,r8d
0x00478ceb: mov    DWORD PTR [rbp-0x78],edi
0x00478cee: mov    eax,DWORD PTR [r14+0x238]
0x00478cf5: mov    ecx,r9d
0x00478cf8: sub    ecx,r10d
0x00478cfb: cmp    eax,ecx
0x00478cfd: cmovle ecx,eax
0x00478d00: xor    ebx,ebx
0x00478d02: mov    eax,ebx
0x00478d04: test   ecx,ecx
0x00478d06: cmovns eax,ecx
0x00478d09: mov    DWORD PTR [rsp+0x78],eax
0x00478d0d: lea    ecx,[r10+rax*1]
0x00478d11: mov    DWORD PTR [rbp-0x68],ecx
0x00478d14: cmp    eax,ecx
0x00478d16: jge    0x1404790d0
0x00478d1c: movsxd r14,eax
0x00478d1f: mov    QWORD PTR [rbp-0x50],r14
0x00478d23: movsxd r13,r15d
0x00478d26: movsxd rax,r9d
0x00478d29: mov    QWORD PTR [rbp-0x48],rax
0x00478d2d: lea    r12d,[r11+0x1]
0x00478d31: mov    DWORD PTR [rsp+0x7c],r12d
0x00478d36: movsxd rbx,edi
0x00478d39: cmp    r14,rax
0x00478d3c: jge    0x1404790bc
0x00478d42: mov    DWORD PTR [rip+0x21d1730],0x1010007        # 0x14264a47c
0x00478d4c: mov    r14d,r15d
0x00478d4f: cmp    r15d,edi
0x00478d52: jg     0x140478e61
0x00478d58: add    r12d,0x2
0x00478d5c: mov    r15,r13
0x00478d5f: mov    eax,DWORD PTR [rsp+0x7c]
0x00478d63: dec    eax
0x00478d65: mov    DWORD PTR [rbp-0x70],eax
0x00478d68: nop    DWORD PTR [rax+rax*1+0x0]
0x00478d70: mov    ebx,eax
0x00478d72: cmp    eax,r12d
0x00478d75: jge    0x140478e46
0x00478d7b: cmp    r14d,edi
0x00478d7e: jne    0x140478de2
0x00478d80: lea    rdi,[rip+0x21d3029]        # 0x14264bdb0
0x00478d87: nop    WORD PTR [rax+rax*1+0x0]
0x00478d90: mov    DWORD PTR [rip+0x21d16dd],r14d        # 0x14264a474
0x00478d97: mov    DWORD PTR [rip+0x21d16db],ebx        # 0x14264a478
0x00478d9d: mov    rcx,rsi
0x00478da0: cmp    r15,r13
0x00478da3: lea    rdx,[rdi-0x18]
0x00478da7: je     0x140478dac
0x00478da9: mov    rdx,rdi
0x00478dac: mov    edx,DWORD PTR [rdx]
0x00478dae: call   0x140adaad0
0x00478db3: cmp    DWORD PTR [rip+0x1f549be],0x0        # 0x1423cd778
0x00478dba: jle    0x140478dd5
0x00478dbc: mov    rax,QWORD PTR [rip+0x1f549ad]        # 0x1423cd770
0x00478dc3: test   BYTE PTR [rax],0x1
0x00478dc6: je     0x140478dd5
0x00478dc8: mov    r8b,0x1
0x00478dcb: xor    edx,edx
0x00478dcd: mov    rcx,rsi
0x00478dd0: call   0x1400bb190
0x00478dd5: inc    ebx
0x00478dd7: add    rdi,0x4
0x00478ddb: cmp    ebx,r12d
0x00478dde: jl     0x140478d90
0x00478de0: jmp    0x140478e40
0x00478de2: lea    rdi,[rip+0x21d2fbb]        # 0x14264bda4
0x00478de9: nop    DWORD PTR [rax+0x0]
0x00478df0: mov    DWORD PTR [rip+0x21d167d],r14d        # 0x14264a474
0x00478df7: mov    DWORD PTR [rip+0x21d167b],ebx        # 0x14264a478
0x00478dfd: mov    rcx,rsi
0x00478e00: cmp    r15,r13
0x00478e03: lea    rdx,[rdi-0xc]
0x00478e07: je     0x140478e0c
0x00478e09: mov    rdx,rdi
0x00478e0c: mov    edx,DWORD PTR [rdx]
0x00478e0e: call   0x140adaad0
0x00478e13: cmp    DWORD PTR [rip+0x1f5495e],0x0        # 0x1423cd778
0x00478e1a: jle    0x140478e35
0x00478e1c: mov    rax,QWORD PTR [rip+0x1f5494d]        # 0x1423cd770
0x00478e23: test   BYTE PTR [rax],0x1
0x00478e26: je     0x140478e35
0x00478e28: mov    r8b,0x1
0x00478e2b: xor    edx,edx
0x00478e2d: mov    rcx,rsi
0x00478e30: call   0x1400bb190
0x00478e35: inc    ebx
0x00478e37: add    rdi,0x4
0x00478e3b: cmp    ebx,r12d
0x00478e3e: jl     0x140478df0
0x00478e40: mov    eax,DWORD PTR [rbp-0x70]
0x00478e43: mov    edi,DWORD PTR [rbp-0x78]
0x00478e46: inc    r14d
0x00478e49: inc    r15
0x00478e4c: cmp    r14d,edi
0x00478e4f: jle    0x140478d70
0x00478e55: mov    r15d,DWORD PTR [rbp-0x74]
0x00478e59: mov    r12d,DWORD PTR [rsp+0x7c]
0x00478e5e: movsxd rbx,edi
0x00478e61: mov    DWORD PTR [rip+0x21d1611],0x1010007        # 0x14264a47c
0x00478e6b: lea    eax,[r15+0x2]
0x00478e6f: mov    DWORD PTR [rip+0x21d15ff],eax        # 0x14264a474
0x00478e75: mov    DWORD PTR [rip+0x21d15fc],r12d        # 0x14264a478
0x00478e7c: mov    rax,QWORD PTR [rsp+0x70]
0x00478e81: mov    rdx,QWORD PTR [rax+0x218]
0x00478e88: mov    r14,QWORD PTR [rbp-0x50]
0x00478e8c: mov    rdx,QWORD PTR [rdx+r14*8]
0x00478e90: lea    rcx,[rbp+0x10]
0x00478e94: call   0x14006f5d0
0x00478e99: nop
0x00478e9a: mov    eax,edi
0x00478e9c: sub    eax,r15d
0x00478e9f: sub    eax,0x2
0x00478ea2: cdqe
0x00478ea4: mov    rcx,QWORD PTR [rbp+0x20]
0x00478ea8: cmp    rcx,rax
0x00478eab: jb     0x140478f24
0x00478ead: sub    rbx,r13
0x00478eb0: sub    rbx,0x3
0x00478eb4: js     0x140478ee5
0x00478eb6: cmp    rbx,rcx
0x00478eb9: ja     0x140478ed3
0x00478ebb: mov    QWORD PTR [rbp+0x20],rbx
0x00478ebf: lea    rax,[rbp+0x10]
0x00478ec3: cmp    QWORD PTR [rbp+0x28],0xf
0x00478ec8: cmova  rax,QWORD PTR [rbp+0x10]
0x00478ecd: mov    BYTE PTR [rax+rbx*1],0x0
0x00478ed1: jmp    0x140478ee5
0x00478ed3: mov    rdx,rbx
0x00478ed6: sub    rdx,rcx
0x00478ed9: xor    r8d,r8d
0x00478edc: lea    rcx,[rbp+0x10]
0x00478ee0: call   0x1400e12b0
0x00478ee5: cmp    rbx,0x3
0x00478ee9: jle    0x140478f24
0x00478eeb: lea    rax,[rbp+0x10]
0x00478eef: cmp    QWORD PTR [rbp+0x28],0xf
0x00478ef4: cmova  rax,QWORD PTR [rbp+0x10]
0x00478ef9: mov    BYTE PTR [rax+rbx*1-0x3],0x2e
0x00478efe: lea    rax,[rbp+0x10]
0x00478f02: cmp    QWORD PTR [rbp+0x28],0xf
0x00478f07: cmova  rax,QWORD PTR [rbp+0x10]
0x00478f0c: mov    BYTE PTR [rax+rbx*1-0x2],0x2e
0x00478f11: lea    rax,[rbp+0x10]
0x00478f15: cmp    QWORD PTR [rbp+0x28],0xf
0x00478f1a: cmova  rax,QWORD PTR [rbp+0x10]
0x00478f1f: mov    BYTE PTR [rax+rbx*1-0x1],0x2e
0x00478f24: xor    r9d,r9d
0x00478f27: lea    rdx,[rbp+0x10]
0x00478f2b: mov    rcx,rsi
0x00478f2e: call   0x140ad9960
0x00478f33: nop
0x00478f34: lea    rcx,[rbp+0x10]
0x00478f38: call   0x14006f850
0x00478f3d: mov    DWORD PTR [rip+0x21d1535],0x1010001        # 0x14264a47c
0x00478f47: lea    eax,[r15+0x3]
0x00478f4b: mov    DWORD PTR [rip+0x21d1523],eax        # 0x14264a474
0x00478f51: lea    eax,[r12+0x1]
0x00478f56: mov    DWORD PTR [rip+0x21d151c],eax        # 0x14264a478
0x00478f5c: xorps  xmm0,xmm0
0x00478f5f: movups XMMWORD PTR [rbp+0x10],xmm0
0x00478f63: mov    QWORD PTR [rbp+0x20],0x9
0x00478f6b: mov    QWORD PTR [rbp+0x28],0xf
0x00478f73: movsd  xmm0,QWORD PTR [rip+0x11c5f35]        # 0x14163eeb0 ; literal='Officer: '
0x00478f7b: movsd  QWORD PTR [rbp+0x10],xmm0
0x00478f80: movzx  eax,BYTE PTR [rip+0x11c5f31]        # 0x14163eeb8 ; literal=' '
0x00478f87: mov    BYTE PTR [rbp+0x18],al
0x00478f8a: mov    BYTE PTR [rbp+0x19],0x0
0x00478f8e: mov    rax,QWORD PTR [rsp+0x70]
0x00478f93: mov    rax,QWORD PTR [rax+0x218]
0x00478f9a: mov    rdx,QWORD PTR [rax+r14*8]
0x00478f9e: add    rdx,0x28
0x00478fa2: mov    r8,QWORD PTR [rdx+0x10]
0x00478fa6: cmp    QWORD PTR [rdx+0x18],0xf
0x00478fab: jbe    0x140478fb0
0x00478fad: mov    rdx,QWORD PTR [rdx]
0x00478fb0: lea    rcx,[rbp+0x10]
0x00478fb4: call   0x14006fa10
0x00478fb9: mov    eax,edi
0x00478fbb: sub    eax,r15d
0x00478fbe: sub    eax,0x3
0x00478fc1: cdqe
0x00478fc3: mov    rcx,QWORD PTR [rbp+0x20]
0x00478fc7: cmp    rcx,rax
0x00478fca: jb     0x140479046
0x00478fcc: movsxd rbx,edi
0x00478fcf: sub    rbx,r13
0x00478fd2: sub    rbx,0x4
0x00478fd6: js     0x140479007
0x00478fd8: cmp    rbx,rcx
0x00478fdb: ja     0x140478ff5
0x00478fdd: mov    QWORD PTR [rbp+0x20],rbx
0x00478fe1: lea    rax,[rbp+0x10]
0x00478fe5: cmp    QWORD PTR [rbp+0x28],0xf
0x00478fea: cmova  rax,QWORD PTR [rbp+0x10]
0x00478fef: mov    BYTE PTR [rax+rbx*1],0x0
0x00478ff3: jmp    0x140479007
0x00478ff5: mov    rdx,rbx
0x00478ff8: sub    rdx,rcx
0x00478ffb: xor    r8d,r8d
0x00478ffe: lea    rcx,[rbp+0x10]
0x00479002: call   0x1400e12b0
0x00479007: cmp    rbx,0x3
0x0047900b: jle    0x140479046
0x0047900d: lea    rax,[rbp+0x10]
0x00479011: cmp    QWORD PTR [rbp+0x28],0xf
0x00479016: cmova  rax,QWORD PTR [rbp+0x10]
0x0047901b: mov    BYTE PTR [rax+rbx*1-0x3],0x2e
0x00479020: lea    rax,[rbp+0x10]
0x00479024: cmp    QWORD PTR [rbp+0x28],0xf
0x00479029: cmova  rax,QWORD PTR [rbp+0x10]
0x0047902e: mov    BYTE PTR [rax+rbx*1-0x2],0x2e
0x00479033: lea    rax,[rbp+0x10]
0x00479037: cmp    QWORD PTR [rbp+0x28],0xf
0x0047903c: cmova  rax,QWORD PTR [rbp+0x10]
0x00479041: mov    BYTE PTR [rax+rbx*1-0x1],0x2e
0x00479046: xor    r9d,r9d
0x00479049: lea    rdx,[rbp+0x10]
0x0047904d: mov    rcx,rsi
0x00479050: call   0x140ad9960
0x00479055: nop
0x00479056: mov    rdx,QWORD PTR [rbp+0x28]
0x0047905a: cmp    rdx,0xf
0x0047905e: jbe    0x14047908d
0x00479060: inc    rdx
0x00479063: mov    rcx,QWORD PTR [rbp+0x10]
0x00479067: mov    rax,rcx
0x0047906a: cmp    rdx,0x1000
0x00479071: jb     0x140479088
0x00479073: add    rdx,0x27
0x00479077: mov    rcx,QWORD PTR [rcx-0x8]
0x0047907b: sub    rax,rcx
0x0047907e: add    rax,0xfffffffffffffff8
0x00479082: cmp    rax,0x1f
0x00479086: ja     0x1404790b5
0x00479088: call   0x141539680
0x0047908d: add    r12d,0x3
0x00479091: mov    DWORD PTR [rsp+0x7c],r12d
0x00479096: mov    eax,DWORD PTR [rsp+0x78]
0x0047909a: inc    eax
0x0047909c: mov    DWORD PTR [rsp+0x78],eax
0x004790a0: inc    r14
0x004790a3: mov    QWORD PTR [rbp-0x50],r14
0x004790a7: cmp    eax,DWORD PTR [rbp-0x68]
0x004790aa: jge    0x1404790bc
0x004790ac: mov    rax,QWORD PTR [rbp-0x48]
0x004790b0: jmp    0x140478d36
0x004790b5: call   QWORD PTR [rip+0x116ca6d]        # 0x1415e5b28
0x004790bb: int3
0x004790bc: xor    ebx,ebx
0x004790be: mov    r14,QWORD PTR [rsp+0x70]
0x004790c3: mov    r11d,DWORD PTR [rsp+0x64]
0x004790c8: mov    r10d,DWORD PTR [rbp-0x7c]
0x004790cc: mov    r9,QWORD PTR [rbp-0x60]
0x004790d0: cmp    r9d,r10d
0x004790d3: jle    0x1404791f3
0x004790d9: lea    edx,[r11+0x1]
0x004790dd: lea    ecx,[r11-0x2]
0x004790e1: lea    ecx,[rcx+r10*2]
0x004790e5: add    ecx,r10d
0x004790e8: mov    QWORD PTR [rbp+0x8],0x0
0x004790f0: mov    eax,DWORD PTR [r14+0x238]
0x004790f7: mov    DWORD PTR [rbp-0x10],eax
0x004790fa: mov    DWORD PTR [rbp-0xc],ebx
0x004790fd: lea    eax,[r9-0x1]
0x00479101: mov    DWORD PTR [rbp-0x8],eax
0x00479104: mov    DWORD PTR [rbp+0x0],edx
0x00479107: mov    DWORD PTR [rbp+0x4],ecx
0x0047910a: mov    DWORD PTR [rbp-0x4],r10d
0x0047910e: lea    rcx,[rbp-0x10]
0x00479112: call   0x1400bb3b0
0x00479117: lea    r9d,[rdi+0x1]
0x0047911b: mov    DWORD PTR [rsp+0x28],ebx
0x0047911f: movzx  eax,BYTE PTR [r14+0x23c]
0x00479127: jmp    0x1404777a2
0x0047912c: mov    DWORD PTR [rip+0x21d1346],0x1010007        # 0x14264a47c
0x00479136: mov    DWORD PTR [rip+0x21d1337],r15d        # 0x14264a474
0x0047913d: mov    DWORD PTR [rip+0x21d1334],r11d        # 0x14264a478
0x00479144: xorps  xmm0,xmm0
0x00479147: movups XMMWORD PTR [rbp-0x10],xmm0
0x0047914b: mov    ecx,0x20
0x00479150: call   0x1400707d0
0x00479155: mov    QWORD PTR [rbp-0x10],rax
0x00479159: mov    QWORD PTR [rbp+0x0],0x19
0x00479161: mov    QWORD PTR [rbp+0x8],0x1f
0x00479169: movups xmm0,XMMWORD PTR [rip+0x11c6058]        # 0x14163f1c8 ; literal='No interrogation reports.'
0x00479170: movups XMMWORD PTR [rax],xmm0
0x00479173: movsd  xmm0,QWORD PTR [rip+0x11c605d]        # 0x14163f1d8 ; literal=' reports.'
0x0047917b: movsd  QWORD PTR [rax+0x10],xmm0
0x00479180: movzx  ecx,BYTE PTR [rip+0x11c6059]        # 0x14163f1e0 ; literal='.'
0x00479187: mov    BYTE PTR [rax+0x18],cl
0x0047918a: mov    BYTE PTR [rax+0x19],0x0
0x0047918e: xor    r9d,r9d
0x00479191: lea    rdx,[rbp-0x10]
0x00479195: mov    rcx,rsi
0x00479198: call   0x140ad9960
0x0047919d: nop
0x0047919e: mov    rdx,QWORD PTR [rbp+0x8]
0x004791a2: cmp    rdx,0xf
0x004791a6: jbe    0x1404791f3
0x004791a8: inc    rdx
0x004791ab: mov    rcx,QWORD PTR [rbp-0x10]
0x004791af: mov    rax,rcx
0x004791b2: cmp    rdx,0x1000
0x004791b9: jb     0x1404791d7
0x004791bb: add    rdx,0x27
0x004791bf: mov    rcx,QWORD PTR [rcx-0x8]
0x004791c3: sub    rax,rcx
0x004791c6: add    rax,0xfffffffffffffff8
0x004791ca: cmp    rax,0x1f
0x004791ce: jbe    0x1404791d7
0x004791d0: call   QWORD PTR [rip+0x116c952]        # 0x1415e5b28
0x004791d6: int3
0x004791d7: call   0x141539680
0x004791dc: jmp    0x1404791f3
0x004791de: lea    rcx,[rbp-0x10]
0x004791e2: call   0x14006f850
0x004791e7: jmp    0x1404791fc
0x004791e9: mov    r14,r10
0x004791ec: jmp    0x1404791f3
0x004791ee: mov    r14,QWORD PTR [rsp+0x70]
0x004791f3: mov    r15d,DWORD PTR [rbp-0x80]
0x004791f7: mov    esi,0xffffffff
0x004791fc: mov    rcx,r14
0x004791ff: call   0x1414101a0
0x00479204: mov    rbx,QWORD PTR [r14+0x160]
0x0047920b: mov    rdi,QWORD PTR [r14+0x168]
0x00479212: cmp    rbx,rdi
0x00479215: je     0x140479229
0x00479217: mov    rcx,QWORD PTR [rbx]
0x0047921a: mov    rax,QWORD PTR [rcx]
0x0047921d: call   QWORD PTR [rax+0x20]
0x00479220: add    rbx,0x10
0x00479224: cmp    rbx,rdi
0x00479227: jne    0x140479217
0x00479229: mov    edx,r15d
0x0047922c: mov    rcx,r14
0x0047922f: call   0x141412fb0
0x00479234: mov    rbx,QWORD PTR [r14+0x160]
0x0047923b: mov    rdi,QWORD PTR [r14+0x168]
0x00479242: cmp    rbx,rdi
0x00479245: je     0x140479272
0x00479247: nop    WORD PTR [rax+rax*1+0x0]
0x00479250: mov    rcx,QWORD PTR [rbx]
0x00479253: movzx  eax,BYTE PTR [rcx+0xa0]
0x0047925a: and    al,0x3
0x0047925c: cmp    al,0x3
0x0047925e: jne    0x140479269
0x00479260: mov    rax,QWORD PTR [rcx]
0x00479263: mov    edx,r15d
0x00479266: call   QWORD PTR [rax+0x18]
0x00479269: add    rbx,0x10
0x0047926d: cmp    rbx,rdi
0x00479270: jne    0x140479250
0x00479272: mov    rcx,QWORD PTR [rbp-0x18]
0x00479276: test   rcx,rcx
0x00479279: je     0x1404792a7
0x0047927b: mov    eax,esi
0x0047927d: lock xadd DWORD PTR [rcx+0x8],eax
0x00479282: cmp    eax,0x1
0x00479285: jne    0x1404792a7
0x00479287: mov    rbx,QWORD PTR [rbp-0x18]
0x0047928b: mov    rax,QWORD PTR [rbx]
0x0047928e: mov    rcx,rbx
0x00479291: call   QWORD PTR [rax]
0x00479293: lock xadd DWORD PTR [rbx+0xc],esi
0x00479298: cmp    esi,0x1
0x0047929b: jne    0x1404792a7
0x0047929d: mov    rcx,QWORD PTR [rbp-0x18]
0x004792a1: mov    rax,QWORD PTR [rcx]
0x004792a4: call   QWORD PTR [rax+0x8]
0x004792a7: mov    rcx,QWORD PTR [rbp+0x30]
0x004792ab: xor    rcx,rsp
0x004792ae: call   0x141539660
0x004792b3: add    rsp,0x148
0x004792ba: pop    r15
0x004792bc: pop    r14
0x004792be: pop    r13
0x004792c0: pop    r12
0x004792c2: pop    rdi
0x004792c3: pop    rsi
0x004792c4: pop    rbx
0x004792c5: pop    rbp
0x004792c6: ret
