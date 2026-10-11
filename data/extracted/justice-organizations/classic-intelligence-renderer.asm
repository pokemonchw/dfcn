# classic PE:6a70b91c:0270a000; intelligence-renderer; RVA 0x474590..0x476e87
0x00474590: rex push rbp
0x00474592: push   rbx
0x00474593: push   rsi
0x00474594: push   rdi
0x00474595: push   r12
0x00474597: push   r13
0x00474599: push   r14
0x0047459b: push   r15
0x0047459d: lea    rbp,[rsp-0x48]
0x004745a2: sub    rsp,0x148
0x004745a9: mov    rax,QWORD PTR [rip+0x1421a90]        # 0x141896040
0x004745b0: xor    rax,rsp
0x004745b3: mov    QWORD PTR [rbp+0x30],rax
0x004745b7: mov    DWORD PTR [rsp+0x60],r9d
0x004745bc: mov    ebx,r8d
0x004745bf: mov    DWORD PTR [rsp+0x64],ebx
0x004745c3: mov    r15d,edx
0x004745c6: mov    DWORD PTR [rbp-0x80],edx
0x004745c9: mov    r14,rcx
0x004745cc: mov    QWORD PTR [rsp+0x70],rcx
0x004745d1: xor    r13d,r13d
0x004745d4: cmp    BYTE PTR [rcx+0x420],r13b
0x004745db: je     0x1404745ee
0x004745dd: mov    BYTE PTR [rcx+0x420],r13b
0x004745e4: call   0x14046d660
0x004745e9: mov    r9d,DWORD PTR [rsp+0x60]
0x004745ee: mov    esi,0xffffffff
0x004745f3: mov    DWORD PTR [rbp-0x54],esi
0x004745f6: mov    DWORD PTR [rbp-0x58],esi
0x004745f9: cmp    BYTE PTR [rip+0x1f15ec5],r13b        # 0x14238a4c5
0x00474600: je     0x140474614
0x00474602: mov    eax,DWORD PTR [rip+0x21cfe98]        # 0x1426444a0
0x00474608: mov    DWORD PTR [rbp-0x54],eax
0x0047460b: mov    eax,DWORD PTR [rip+0x21cfe93]        # 0x1426444a4
0x00474611: mov    DWORD PTR [rbp-0x58],eax
0x00474614: mov    eax,DWORD PTR [rip+0x1f5305e]        # 0x1423c7678
0x0047461a: add    eax,0xfffffffc
0x0047461d: mov    DWORD PTR [rbp-0x7c],eax
0x00474620: lea    ecx,[r9-0x1d]
0x00474624: lea    eax,[rbx+0x7d]
0x00474627: mov    edi,0xa
0x0047462c: mov    r12d,0x8
0x00474632: cmp    eax,ecx
0x00474634: cmovle edi,r12d
0x00474638: mov    DWORD PTR [rsp+0x68],edi
0x0047463c: lea    eax,[rbx+0x61]
0x0047463f: cmp    eax,ecx
0x00474641: jle    0x14047464a
0x00474643: add    edi,0x2
0x00474646: mov    DWORD PTR [rsp+0x68],edi
0x0047464a: xorps  xmm0,xmm0
0x0047464d: movups XMMWORD PTR [rbp-0x10],xmm0
0x00474651: mov    QWORD PTR [rbp+0x0],0x4
0x00474659: mov    QWORD PTR [rbp+0x8],0xf
0x00474661: mov    eax,DWORD PTR [rip+0x117dacd]        # 0x1415f2134 ; literal="Tabs"
0x00474667: mov    DWORD PTR [rbp-0x10],eax
0x0047466a: mov    BYTE PTR [rbp-0xc],r13b
0x0047466e: lea    r8,[rbp-0x10]
0x00474672: lea    rdx,[rbp-0x20]
0x00474676: mov    rcx,r14
0x00474679: call   0x1400eff90
0x0047467e: nop
0x0047467f: lea    rcx,[rbp-0x10]
0x00474683: call   0x14006f7e0
0x00474688: mov    DWORD PTR [r14+0xb0],r12d
0x0047468f: mov    DWORD PTR [r14+0xa8],0x5
0x0047469a: mov    DWORD PTR [r14+0xac],0xffffffe0
0x004746a5: mov    DWORD PTR [r14+0xa4],0xfffffffc
0x004746b0: mov    ecx,DWORD PTR [r14+0x18]
0x004746b4: sub    ecx,DWORD PTR [r14+0x10]
0x004746b8: inc    ecx
0x004746ba: mov    eax,DWORD PTR [r14+0xc4]
0x004746c1: cmp    ecx,eax
0x004746c3: cmovle ecx,eax
0x004746c6: cmp    ecx,0x76
0x004746c9: jl     0x1404746d6
0x004746cb: mov    DWORD PTR [r14+0xb0],0x6
0x004746d6: mov    rdx,QWORD PTR [rbp-0x20]
0x004746da: mov    rcx,QWORD PTR [rdx+0x180]
0x004746e1: mov    rax,QWORD PTR [rdx+0x188]
0x004746e8: sub    rax,rcx
0x004746eb: test   rax,0xffffffffffffffe0
0x004746f1: jne    0x140474710
0x004746f3: xorps  xmm0,xmm0
0x004746f6: movups XMMWORD PTR [rbp-0x10],xmm0
0x004746fa: mov    r8,r13
0x004746fd: mov    QWORD PTR [rbp+0x0],r13
0x00474701: mov    eax,0xf
0x00474706: mov    QWORD PTR [rbp+0x8],rax
0x0047470a: mov    BYTE PTR [rbp-0x10],r8b
0x0047470e: jmp    0x14047472f
0x00474710: mov    rdx,QWORD PTR [rdx+0x178]
0x00474717: shl    rdx,0x5
0x0047471b: add    rdx,rcx
0x0047471e: lea    rcx,[rbp-0x10]
0x00474722: call   0x14006f560
0x00474727: mov    rax,QWORD PTR [rbp+0x8]
0x0047472b: mov    r8,QWORD PTR [rbp+0x0]
0x0047472f: lea    rcx,[rbp-0x10]
0x00474733: cmp    rax,0xf
0x00474737: cmova  rcx,QWORD PTR [rbp-0x10]
0x0047473c: cmp    r8,0xc
0x00474740: jne    0x140476d9e
0x00474746: lea    rdx,[rip+0x11c55a3]        # 0x141639cf0 ; literal="Intelligence"
0x0047474d: call   0x141535d84
0x00474752: test   eax,eax
0x00474754: jne    0x140476d9e
0x0047475a: lea    rcx,[rbp-0x10]
0x0047475e: call   0x14006f7e0
0x00474763: mov    rax,QWORD PTR [rip+0x20690c6]        # 0x1424dd830
0x0047476a: sub    rax,QWORD PTR [rip+0x20690b7]        # 0x1424dd828
0x00474771: mov    r10,QWORD PTR [rsp+0x70]
0x00474776: test   rax,0xfffffffffffffff8
0x0047477c: jne    0x14047493d
0x00474782: mov    rax,QWORD PTR [r10+0x250]
0x00474789: sub    rax,QWORD PTR [r10+0x248]
0x00474790: test   rax,0xfffffffffffffff8
0x00474796: jne    0x14047493d
0x0047479c: mov    rax,QWORD PTR [r10+0x268]
0x004747a3: sub    rax,QWORD PTR [r10+0x260]
0x004747aa: test   rax,0xfffffffffffffff8
0x004747b0: jne    0x14047493d
0x004747b6: mov    rax,QWORD PTR [r10+0x280]
0x004747bd: sub    rax,QWORD PTR [r10+0x278]
0x004747c4: test   rax,0xfffffffffffffff8
0x004747ca: jne    0x14047493d
0x004747d0: mov    DWORD PTR [rip+0x21cfb92],0x1000007        # 0x14264436c
0x004747da: add    ebx,0x6
0x004747dd: mov    DWORD PTR [rip+0x21cfb81],ebx        # 0x142644364
0x004747e3: lea    eax,[rdi+0x2]
0x004747e6: mov    DWORD PTR [rip+0x21cfb7c],eax        # 0x142644368
0x004747ec: xorps  xmm0,xmm0
0x004747ef: movups XMMWORD PTR [rbp-0x10],xmm0
0x004747f3: mov    ecx,0x30
0x004747f8: call   0x140070760
0x004747fd: mov    rcx,rax
0x00474800: mov    QWORD PTR [rbp-0x10],rax
0x00474804: mov    QWORD PTR [rbp+0x0],0x29
0x0047480c: mov    QWORD PTR [rbp+0x8],0x2f
0x00474814: movups xmm0,XMMWORD PTR [rip+0x11c557d]        # 0x141639d98 ; literal="There is no intelligence information yet."
0x0047481b: movups XMMWORD PTR [rax],xmm0
0x0047481e: movups xmm1,XMMWORD PTR [rip+0x11c5583]        # 0x141639da8 ; literal="lligence information yet."
0x00474825: movups XMMWORD PTR [rax+0x10],xmm1
0x00474829: movsd  xmm0,QWORD PTR [rip+0x11c5587]        # 0x141639db8 ; literal="tion yet."
0x00474831: movsd  QWORD PTR [rax+0x20],xmm0
0x00474836: movzx  eax,BYTE PTR [rip+0x11c5583]        # 0x141639dc0 ; literal="."
0x0047483d: mov    BYTE PTR [rcx+0x28],al
0x00474840: mov    BYTE PTR [rcx+0x29],0x0
0x00474844: xor    r9d,r9d
0x00474847: lea    rdx,[rbp-0x10]
0x0047484b: lea    rsi,[rip+0x21cfa8e]        # 0x1426442e0
0x00474852: mov    rcx,rsi
0x00474855: call   0x140ad69a0
0x0047485a: nop
0x0047485b: lea    rcx,[rbp-0x10]
0x0047485f: call   0x14006f7e0
0x00474864: mov    DWORD PTR [rip+0x21cfafa],ebx        # 0x142644364
0x0047486a: lea    eax,[rdi+0x4]
0x0047486d: mov    DWORD PTR [rip+0x21cfaf5],eax        # 0x142644368
0x00474873: xorps  xmm0,xmm0
0x00474876: movups XMMWORD PTR [rbp-0x10],xmm0
0x0047487a: mov    ecx,0x50
0x0047487f: call   0x140070760
0x00474884: mov    rcx,rax
0x00474887: mov    QWORD PTR [rbp-0x10],rax
0x0047488b: mov    QWORD PTR [rbp+0x0],0x47
0x00474893: mov    QWORD PTR [rbp+0x8],0x4f
0x0047489b: movaps xmm0,XMMWORD PTR [rip+0x11c54ae]        # 0x141639d50 ; literal="If a crime involves a conspiracy, an interrogation may reveal the plot."
0x004748a2: movups XMMWORD PTR [rax],xmm0
0x004748a5: movaps xmm1,XMMWORD PTR [rip+0x11c54b4]        # 0x141639d60 ; literal="ves a conspiracy, an interrogation may reveal the plot."
0x004748ac: movups XMMWORD PTR [rax+0x10],xmm1
0x004748b0: movaps xmm0,XMMWORD PTR [rip+0x11c54b9]        # 0x141639d70 ; literal=", an interrogation may reveal the plot."
0x004748b7: movups XMMWORD PTR [rax+0x20],xmm0
0x004748bb: movaps xmm1,XMMWORD PTR [rip+0x11c54be]        # 0x141639d80 ; literal="on may reveal the plot."
0x004748c2: movups XMMWORD PTR [rax+0x30],xmm1
0x004748c6: mov    eax,DWORD PTR [rip+0x11c54c4]        # 0x141639d90 ; literal="e plot."
0x004748cc: mov    DWORD PTR [rcx+0x40],eax
0x004748cf: movzx  eax,WORD PTR [rip+0x11c54be]        # 0x141639d94 ; literal="ot."
0x004748d6: mov    WORD PTR [rcx+0x44],ax
0x004748da: movzx  eax,BYTE PTR [rip+0x11c54b5]        # 0x141639d96 ; literal="."
0x004748e1: mov    BYTE PTR [rcx+0x46],al
0x004748e4: mov    BYTE PTR [rcx+0x47],0x0
0x004748e8: xor    r9d,r9d
0x004748eb: lea    rdx,[rbp-0x10]
0x004748ef: mov    rcx,rsi
0x004748f2: call   0x140ad69a0
0x004748f7: nop
0x004748f8: mov    rdx,QWORD PTR [rbp+0x8]
0x004748fc: cmp    rdx,0xf
0x00474900: jbe    0x140474933
0x00474902: inc    rdx
0x00474905: mov    rcx,QWORD PTR [rbp-0x10]
0x00474909: mov    rax,rcx
0x0047490c: cmp    rdx,0x1000
0x00474913: jb     0x14047492e
0x00474915: add    rdx,0x27
0x00474919: mov    rcx,QWORD PTR [rcx-0x8]
0x0047491d: sub    rax,rcx
0x00474920: add    rax,0xfffffffffffffff8
0x00474924: cmp    rax,0x1f
0x00474928: ja     0x140476d90
0x0047492e: call   0x1415345f0
0x00474933: mov    r14,QWORD PTR [rsp+0x70]
0x00474938: jmp    0x140476db7
0x0047493d: lea    edx,[rdi+0x1]
0x00474940: mov    DWORD PTR [rsp+0x78],edx
0x00474944: xor    r11d,r11d
0x00474947: mov    r12d,r11d
0x0047494a: mov    r8d,edx
0x0047494d: lea    r9d,[rdx+0x1]
0x00474951: mov    QWORD PTR [rbp-0x50],r9
0x00474955: lea    rsi,[rip+0x21cf984]        # 0x1426442e0
0x0047495c: mov    r14d,DWORD PTR [rbp-0x68]
0x00474960: mov    edi,DWORD PTR [rbp-0x68]
0x00474963: cmp    DWORD PTR [rip+0x1f52cfe],0x0        # 0x1423c7668
0x0047496a: jle    0x1404749b1
0x0047496c: mov    rax,QWORD PTR [rip+0x1f52ced]        # 0x1423c7660
0x00474973: test   BYTE PTR [rax],0x1
0x00474976: je     0x1404749b1
0x00474978: lea    r13,[r10+0x290]
0x0047497f: mov    QWORD PTR [rbp-0x68],r13
0x00474983: cmp    r12d,DWORD PTR [r13+0x0]
0x00474987: mov    WORD PTR [rip+0x21cf9e4],0x0        # 0x142644374
0x00474990: mov    BYTE PTR [rip+0x21cf9d8],0x0        # 0x14264436f
0x00474997: jne    0x1404749a5
0x00474999: mov    DWORD PTR [rip+0x21cf9cd],0x2c0046        # 0x142644370
0x004749a3: jmp    0x1404749dc
0x004749a5: mov    DWORD PTR [rip+0x21cf9c1],0xffffff        # 0x142644370
0x004749af: jmp    0x1404749dc
0x004749b1: lea    r13,[r10+0x290]
0x004749b8: mov    QWORD PTR [rbp-0x68],r13
0x004749bc: cmp    r12d,DWORD PTR [r13+0x0]
0x004749c0: jne    0x1404749ce
0x004749c2: mov    DWORD PTR [rip+0x21cf9a0],0x1010007        # 0x14264436c
0x004749cc: jmp    0x1404749dc
0x004749ce: mov    DWORD PTR [rip+0x21cf994],0x1000007        # 0x14264436c
0x004749d8: mov    QWORD PTR [rbp-0x68],r13
0x004749dc: mov    ecx,r12d
0x004749df: test   r12d,r12d
0x004749e2: je     0x140474a0e
0x004749e4: sub    ecx,0x1
0x004749e7: je     0x140474a05
0x004749e9: sub    ecx,0x1
0x004749ec: je     0x1404749fc
0x004749ee: cmp    ecx,0x1
0x004749f1: jne    0x140474a15
0x004749f3: lea    r14d,[rbx+0x33]
0x004749f7: lea    edi,[rbx+0x3b]
0x004749fa: jmp    0x140474a15
0x004749fc: lea    r14d,[rbx+0x21]
0x00474a00: lea    edi,[rbx+0x32]
0x00474a03: jmp    0x140474a15
0x00474a05: lea    r14d,[rbx+0x17]
0x00474a09: lea    edi,[rbx+0x20]
0x00474a0c: jmp    0x140474a15
0x00474a0e: lea    r14d,[rbx+0x5]
0x00474a12: lea    edi,[rbx+0x16]
0x00474a15: mov    r15d,edx
0x00474a18: cmp    r8,r9
0x00474a1b: ja     0x140474b29
0x00474a21: mov    rbx,r11
0x00474a24: mov    r13,r9
0x00474a27: sub    r13,r8
0x00474a2a: inc    r13
0x00474a2d: mov    QWORD PTR [rbp-0x60],r13
0x00474a31: mov    r11d,r14d
0x00474a34: cmp    r14d,edi
0x00474a37: jg     0x140474b04
0x00474a3d: mov    r13,QWORD PTR [rbp-0x68]
0x00474a41: mov    DWORD PTR [rip+0x21cf91c],r11d        # 0x142644364
0x00474a48: mov    DWORD PTR [rip+0x21cf919],r15d        # 0x142644368
0x00474a4f: cmp    r12d,DWORD PTR [r13+0x0]
0x00474a53: jne    0x140474aa3
0x00474a55: cmp    r11d,r14d
0x00474a58: jne    0x140474a66
0x00474a5a: lea    rdx,[rsi+0x202c]
0x00474a61: jmp    0x140474ae7
0x00474a66: lea    eax,[r14+0x1]
0x00474a6a: cmp    r11d,eax
0x00474a6d: jne    0x140474a78
0x00474a6f: lea    rdx,[rip+0x21d189e]        # 0x142646314
0x00474a76: jmp    0x140474ae7
0x00474a78: cmp    r11d,edi
0x00474a7b: jne    0x140474a86
0x00474a7d: lea    rdx,[rip+0x21d18a8]        # 0x14264632c
0x00474a84: jmp    0x140474ae7
0x00474a86: lea    eax,[rdi-0x1]
0x00474a89: mov    rcx,rsi
0x00474a8c: cmp    r11d,eax
0x00474a8f: jne    0x140474a9a
0x00474a91: lea    rdx,[rip+0x21d188c]        # 0x142646324
0x00474a98: jmp    0x140474aea
0x00474a9a: lea    rdx,[rip+0x21d187b]        # 0x14264631c
0x00474aa1: jmp    0x140474aea
0x00474aa3: cmp    r11d,r14d
0x00474aa6: jne    0x140474ab1
0x00474aa8: lea    rdx,[rsi+0x2004]
0x00474aaf: jmp    0x140474ae7
0x00474ab1: lea    eax,[r14+0x1]
0x00474ab5: cmp    r11d,eax
0x00474ab8: jne    0x140474ac3
0x00474aba: lea    rdx,[rip+0x21d182b]        # 0x1426462ec
0x00474ac1: jmp    0x140474ae7
0x00474ac3: cmp    r11d,edi
0x00474ac6: jne    0x140474ad1
0x00474ac8: lea    rdx,[rip+0x21d1835]        # 0x142646304
0x00474acf: jmp    0x140474ae7
0x00474ad1: lea    eax,[rdi-0x1]
0x00474ad4: cmp    r11d,eax
0x00474ad7: lea    rdx,[rip+0x21d181e]        # 0x1426462fc
0x00474ade: je     0x140474ae7
0x00474ae0: lea    rdx,[rip+0x21d180d]        # 0x1426462f4
0x00474ae7: mov    rcx,rsi
0x00474aea: add    rdx,rbx
0x00474aed: mov    edx,DWORD PTR [rdx]
0x00474aef: call   0x140ad7b10
0x00474af4: inc    r11d
0x00474af7: cmp    r11d,edi
0x00474afa: jle    0x140474a41
0x00474b00: mov    r13,QWORD PTR [rbp-0x60]
0x00474b04: inc    r15d
0x00474b07: add    rbx,0x4
0x00474b0b: sub    r13,0x1
0x00474b0f: mov    QWORD PTR [rbp-0x60],r13
0x00474b13: jne    0x140474a31
0x00474b19: mov    r13,QWORD PTR [rbp-0x68]
0x00474b1d: mov    edx,DWORD PTR [rsp+0x78]
0x00474b21: mov    r10,QWORD PTR [rsp+0x70]
0x00474b26: xor    r11d,r11d
0x00474b29: mov    ebx,r11d
0x00474b2c: lea    r15d,[r14+0x2]
0x00474b30: mov    DWORD PTR [rip+0x21cf82d],r15d        # 0x142644364
0x00474b37: lea    eax,[rbx+rdx*1]
0x00474b3a: mov    DWORD PTR [rip+0x21cf828],eax        # 0x142644368
0x00474b40: mov    edx,0x10
0x00474b45: cmp    ebx,0x1
0x00474b48: mov    eax,0x8
0x00474b4d: cmovne edx,eax
0x00474b50: cmp    DWORD PTR [rip+0x1f52b11],0x0        # 0x1423c7668
0x00474b57: jle    0x140474b65
0x00474b59: mov    rax,QWORD PTR [rip+0x1f52b00]        # 0x1423c7660
0x00474b60: test   BYTE PTR [rax],0x1
0x00474b63: jne    0x140474b70
0x00474b65: test   ebx,ebx
0x00474b67: je     0x140474d8b
0x00474b6d: mov    edx,r11d
0x00474b70: mov    ecx,r12d
0x00474b73: test   r12d,r12d
0x00474b76: je     0x140474cdf
0x00474b7c: sub    ecx,0x1
0x00474b7f: je     0x140474c6e
0x00474b85: sub    ecx,0x1
0x00474b88: je     0x140474bfa
0x00474b8a: cmp    ecx,0x1
0x00474b8d: jne    0x140474d8b
0x00474b93: mov    rax,QWORD PTR [r10+0x280]
0x00474b9a: sub    rax,QWORD PTR [r10+0x278]
0x00474ba1: test   rax,0xfffffffffffffff8
0x00474ba7: jne    0x140474bb3
0x00474ba9: mov    DWORD PTR [rip+0x21cf7b9],0x1010000        # 0x14264436c
0x00474bb3: xorps  xmm0,xmm0
0x00474bb6: movups XMMWORD PTR [rbp-0x10],xmm0
0x00474bba: mov    QWORD PTR [rbp+0x0],0x5
0x00474bc2: mov    QWORD PTR [rbp+0x8],0xf
0x00474bca: mov    eax,DWORD PTR [rip+0x1172624]        # 0x1415e71f4 ; literal="Plots"
0x00474bd0: mov    DWORD PTR [rbp-0x10],eax
0x00474bd3: movzx  eax,BYTE PTR [rip+0x117261e]        # 0x1415e71f8 ; literal="s"
0x00474bda: mov    BYTE PTR [rbp-0xc],al
0x00474bdd: mov    BYTE PTR [rbp-0xb],0x0
0x00474be1: mov    DWORD PTR [rsp+0x20],edx
0x00474be5: xor    r9d,r9d
0x00474be8: lea    rdx,[rbp-0x10]
0x00474bec: mov    rcx,rsi
0x00474bef: call   0x140ad68b0
0x00474bf4: nop
0x00474bf5: jmp    0x140474d4d
0x00474bfa: mov    rax,QWORD PTR [r10+0x268]
0x00474c01: sub    rax,QWORD PTR [r10+0x260]
0x00474c08: test   rax,0xfffffffffffffff8
0x00474c0e: jne    0x140474c1a
0x00474c10: mov    DWORD PTR [rip+0x21cf752],0x1010000        # 0x14264436c
0x00474c1a: xorps  xmm0,xmm0
0x00474c1d: movups XMMWORD PTR [rbp-0x10],xmm0
0x00474c21: mov    QWORD PTR [rbp+0x0],0xd
0x00474c29: mov    QWORD PTR [rbp+0x8],0xf
0x00474c31: movsd  xmm0,QWORD PTR [rip+0x11725e7]        # 0x1415e7220 ; literal="Organizations"
0x00474c39: movsd  QWORD PTR [rbp-0x10],xmm0
0x00474c3e: mov    eax,DWORD PTR [rip+0x11725e4]        # 0x1415e7228 ; literal="tions"
0x00474c44: mov    DWORD PTR [rbp-0x8],eax
0x00474c47: movzx  eax,BYTE PTR [rip+0x11725de]        # 0x1415e722c ; literal="s"
0x00474c4e: mov    BYTE PTR [rbp-0x4],al
0x00474c51: mov    BYTE PTR [rbp-0x3],0x0
0x00474c55: mov    DWORD PTR [rsp+0x20],edx
0x00474c59: xor    r9d,r9d
0x00474c5c: lea    rdx,[rbp-0x10]
0x00474c60: mov    rcx,rsi
0x00474c63: call   0x140ad68b0
0x00474c68: nop
0x00474c69: jmp    0x140474d4d
0x00474c6e: mov    rax,QWORD PTR [r10+0x250]
0x00474c75: sub    rax,QWORD PTR [r10+0x248]
0x00474c7c: test   rax,0xfffffffffffffff8
0x00474c82: jne    0x140474c8e
0x00474c84: mov    DWORD PTR [rip+0x21cf6de],0x1010000        # 0x14264436c
0x00474c8e: xorps  xmm0,xmm0
0x00474c91: movups XMMWORD PTR [rbp-0x10],xmm0
0x00474c95: mov    QWORD PTR [rbp+0x0],0x6
0x00474c9d: mov    QWORD PTR [rbp+0x8],0xf
0x00474ca5: mov    eax,DWORD PTR [rip+0x117256d]        # 0x1415e7218 ; literal="Actors"
0x00474cab: mov    DWORD PTR [rbp-0x10],eax
0x00474cae: movzx  eax,WORD PTR [rip+0x1172567]        # 0x1415e721c ; literal="rs"
0x00474cb5: mov    WORD PTR [rbp-0xc],ax
0x00474cb9: mov    BYTE PTR [rbp-0xa],0x0
0x00474cbd: mov    DWORD PTR [rsp+0x20],edx
0x00474cc1: xor    r9d,r9d
0x00474cc4: lea    rdx,[rbp-0x10]
0x00474cc8: mov    rcx,rsi
0x00474ccb: call   0x140ad68b0
0x00474cd0: nop
0x00474cd1: lea    rcx,[rbp-0x10]
0x00474cd5: call   0x14006f7e0
0x00474cda: jmp    0x140474d88
0x00474cdf: mov    rax,QWORD PTR [rip+0x2068b4a]        # 0x1424dd830
0x00474ce6: sub    rax,QWORD PTR [rip+0x2068b3b]        # 0x1424dd828
0x00474ced: test   rax,0xfffffffffffffff8
0x00474cf3: jne    0x140474cff
0x00474cf5: mov    DWORD PTR [rip+0x21cf66d],0x1010000        # 0x14264436c
0x00474cff: mov    WORD PTR [rbp-0x2],r11w
0x00474d04: mov    QWORD PTR [rbp+0x0],0xe
0x00474d0c: mov    QWORD PTR [rbp+0x8],0xf
0x00474d14: movsd  xmm0,QWORD PTR [rip+0x11c5024]        # 0x141639d40 ; literal="Interrogations"
0x00474d1c: movsd  QWORD PTR [rbp-0x10],xmm0
0x00474d21: mov    eax,DWORD PTR [rip+0x11c5021]        # 0x141639d48 ; literal="ations"
0x00474d27: mov    DWORD PTR [rbp-0x8],eax
0x00474d2a: movzx  eax,WORD PTR [rip+0x11c501b]        # 0x141639d4c ; literal="ns"
0x00474d31: mov    WORD PTR [rbp-0x4],ax
0x00474d35: mov    BYTE PTR [rbp-0x2],0x0
0x00474d39: mov    DWORD PTR [rsp+0x20],edx
0x00474d3d: xor    r9d,r9d
0x00474d40: lea    rdx,[rbp-0x10]
0x00474d44: mov    rcx,rsi
0x00474d47: call   0x140ad68b0
0x00474d4c: nop
0x00474d4d: mov    rdx,QWORD PTR [rbp+0x8]
0x00474d51: cmp    rdx,0xf
0x00474d55: jbe    0x140474d88
0x00474d57: mov    rcx,QWORD PTR [rbp-0x10]
0x00474d5b: inc    rdx
0x00474d5e: mov    rax,rcx
0x00474d61: cmp    rdx,0x1000
0x00474d68: jb     0x140474d83
0x00474d6a: mov    rcx,QWORD PTR [rcx-0x8]
0x00474d6e: sub    rax,rcx
0x00474d71: add    rdx,0x27
0x00474d75: add    rax,0xfffffffffffffff8
0x00474d79: cmp    rax,0x1f
0x00474d7d: ja     0x140476d90
0x00474d83: call   0x1415345f0
0x00474d88: xor    r11d,r11d
0x00474d8b: inc    ebx
0x00474d8d: cmp    ebx,0x2
0x00474d90: mov    edx,DWORD PTR [rsp+0x78]
0x00474d94: mov    r10,QWORD PTR [rsp+0x70]
0x00474d99: jl     0x140474b30
0x00474d9f: inc    r12d
0x00474da2: cmp    r12d,0x4
0x00474da6: mov    ebx,DWORD PTR [rsp+0x64]
0x00474daa: mov    r8d,edx
0x00474dad: mov    r9,QWORD PTR [rbp-0x50]
0x00474db1: jl     0x140474963
0x00474db7: mov    ecx,DWORD PTR [r13+0x0]
0x00474dbb: test   ecx,ecx
0x00474dbd: je     0x14047656a
0x00474dc3: sub    ecx,0x1
0x00474dc6: je     0x140475ff3
0x00474dcc: sub    ecx,0x1
0x00474dcf: je     0x14047537b
0x00474dd5: cmp    ecx,0x1
0x00474dd8: jne    0x140476da9
0x00474dde: mov    rbx,r10
0x00474de1: mov    r9,QWORD PTR [r10+0x350]
0x00474de8: sub    r9,QWORD PTR [r10+0x348]
0x00474def: sar    r9,0x3
0x00474df3: mov    QWORD PTR [rbp-0x68],r9
0x00474df7: lea    r11d,[r9+r9*4]
0x00474dfb: mov    DWORD PTR [rbp-0x70],r11d
0x00474dff: mov    r14d,DWORD PTR [rsp+0x64]
0x00474e04: add    r14d,0x6
0x00474e08: mov    eax,DWORD PTR [rsp+0x60]
0x00474e0c: add    eax,0xffffffe2
0x00474e0f: mov    edx,DWORD PTR [rsp+0x68]
0x00474e13: add    edx,0x4
0x00474e16: mov    DWORD PTR [rsp+0x68],edx
0x00474e1a: mov    r8d,DWORD PTR [rbp-0x7c]
0x00474e1e: add    r8d,0xfffffffe
0x00474e22: mov    DWORD PTR [rsp+0x64],r8d
0x00474e27: mov    r10d,r8d
0x00474e2a: sub    r10d,edx
0x00474e2d: inc    r10d
0x00474e30: mov    DWORD PTR [rbp-0x78],r10d
0x00474e34: lea    edi,[rax-0x2]
0x00474e37: cmp    r11d,r10d
0x00474e3a: cmovle edi,eax
0x00474e3d: mov    eax,DWORD PTR [rbx+0x2c8]
0x00474e43: mov    ecx,r11d
0x00474e46: sub    ecx,r10d
0x00474e49: cmp    eax,ecx
0x00474e4b: cmovle ecx,eax
0x00474e4e: xor    r15d,r15d
0x00474e51: mov    eax,r15d
0x00474e54: test   ecx,ecx
0x00474e56: cmovns eax,ecx
0x00474e59: mov    r13d,edx
0x00474e5c: sub    r13d,eax
0x00474e5f: mov    DWORD PTR [rsp+0x60],r15d
0x00474e64: test   r9d,r9d
0x00474e67: jle    0x140475308
0x00474e6d: mov    ecx,r15d
0x00474e70: mov    QWORD PTR [rbp-0x60],rcx
0x00474e74: movsxd rax,r9d
0x00474e77: mov    QWORD PTR [rbp-0x40],rax
0x00474e7b: lea    r12d,[r13+0x1]
0x00474e7f: mov    DWORD PTR [rsp+0x78],r12d
0x00474e84: nop    DWORD PTR [rax+0x0]
0x00474e88: nop    DWORD PTR [rax+rax*1+0x0]
0x00474e90: mov    rax,QWORD PTR [rbx+0x348]
0x00474e97: mov    rbx,QWORD PTR [rax+rcx*8]
0x00474e9b: mov    QWORD PTR [rbp-0x50],rbx
0x00474e9f: cmp    QWORD PTR [rbx+0x50],0x0
0x00474ea4: jne    0x140474ece
0x00474ea6: lea    rcx,[rbx+0x40]
0x00474eaa: cmp    rcx,rbx
0x00474ead: je     0x140474ece
0x00474eaf: mov    rdx,rbx
0x00474eb2: cmp    QWORD PTR [rbx+0x18],0xf
0x00474eb7: jbe    0x140474ebc
0x00474eb9: mov    rdx,QWORD PTR [rbx]
0x00474ebc: mov    r8,QWORD PTR [rbx+0x10]
0x00474ec0: call   0x14006f860
0x00474ec5: mov    edx,DWORD PTR [rsp+0x68]
0x00474ec9: mov    r8d,DWORD PTR [rsp+0x64]
0x00474ece: lea    eax,[r12+0x3]
0x00474ed3: mov    DWORD PTR [rsp+0x7c],eax
0x00474ed7: mov    r15d,r13d
0x00474eda: cmp    r13d,eax
0x00474edd: jg     0x140474fd5
0x00474ee3: movsxd r12,r13d
0x00474ee6: cmp    r15d,edx
0x00474ee9: jl     0x140474fb8
0x00474eef: cmp    r15d,r8d
0x00474ef2: jg     0x140474fb8
0x00474ef8: mov    ebx,r14d
0x00474efb: cmp    r14d,edi
0x00474efe: jg     0x140474fb8
0x00474f04: nop    DWORD PTR [rax+0x0]
0x00474f08: nop    DWORD PTR [rax+rax*1+0x0]
0x00474f10: mov    DWORD PTR [rip+0x21cf44e],ebx        # 0x142644364
0x00474f16: mov    DWORD PTR [rip+0x21cf44b],r15d        # 0x142644368
0x00474f1d: xor    r8d,r8d
0x00474f20: xor    edx,edx
0x00474f22: mov    rcx,rsi
0x00474f25: call   0x1400bb120
0x00474f2a: cmp    r15d,r13d
0x00474f2d: jne    0x140474f53
0x00474f2f: cmp    ebx,r14d
0x00474f32: jne    0x140474f3c
0x00474f34: mov    edx,DWORD PTR [rip+0x21d0d4e]        # 0x142645c88
0x00474f3a: jmp    0x140474f9e
0x00474f3c: mov    rcx,rsi
0x00474f3f: cmp    ebx,edi
0x00474f41: jne    0x140474f4b
0x00474f43: mov    edx,DWORD PTR [rip+0x21d0d57]        # 0x142645ca0
0x00474f49: jmp    0x140474fa1
0x00474f4b: mov    edx,DWORD PTR [rip+0x21d0d43]        # 0x142645c94
0x00474f51: jmp    0x140474fa1
0x00474f53: movsxd rcx,DWORD PTR [rsp+0x7c]
0x00474f58: cmp    r12,rcx
0x00474f5b: jne    0x140474f81
0x00474f5d: cmp    ebx,r14d
0x00474f60: jne    0x140474f6a
0x00474f62: mov    edx,DWORD PTR [rip+0x21d0d28]        # 0x142645c90
0x00474f68: jmp    0x140474f9e
0x00474f6a: mov    rcx,rsi
0x00474f6d: cmp    ebx,edi
0x00474f6f: jne    0x140474f79
0x00474f71: mov    edx,DWORD PTR [rip+0x21d0d31]        # 0x142645ca8
0x00474f77: jmp    0x140474fa1
0x00474f79: mov    edx,DWORD PTR [rip+0x21d0d1d]        # 0x142645c9c
0x00474f7f: jmp    0x140474fa1
0x00474f81: cmp    ebx,r14d
0x00474f84: jne    0x140474f8e
0x00474f86: mov    edx,DWORD PTR [rip+0x21d0d00]        # 0x142645c8c
0x00474f8c: jmp    0x140474f9e
0x00474f8e: cmp    ebx,edi
0x00474f90: mov    edx,DWORD PTR [rip+0x21d0d0e]        # 0x142645ca4
0x00474f96: je     0x140474f9e
0x00474f98: mov    edx,DWORD PTR [rip+0x21d0cfa]        # 0x142645c98
0x00474f9e: mov    rcx,rsi
0x00474fa1: call   0x140ad7b10
0x00474fa6: inc    ebx
0x00474fa8: cmp    ebx,edi
0x00474faa: jle    0x140474f10
0x00474fb0: mov    eax,DWORD PTR [rsp+0x7c]
0x00474fb4: mov    edx,DWORD PTR [rsp+0x68]
0x00474fb8: inc    r15d
0x00474fbb: inc    r12
0x00474fbe: cmp    r15d,eax
0x00474fc1: mov    r8d,DWORD PTR [rsp+0x64]
0x00474fc6: jle    0x140474ee6
0x00474fcc: mov    rbx,QWORD PTR [rbp-0x50]
0x00474fd0: mov    r12d,DWORD PTR [rsp+0x78]
0x00474fd5: mov    r15d,DWORD PTR [rsp+0x64]
0x00474fda: cmp    r13d,edx
0x00474fdd: jl     0x1404751dc
0x00474fe3: cmp    r13d,r15d
0x00474fe6: jg     0x1404751dc
0x00474fec: mov    eax,DWORD PTR [rsp+0x60]
0x00474ff0: mov    rcx,QWORD PTR [rsp+0x70]
0x00474ff5: cmp    eax,DWORD PTR [rcx+0x294]
0x00474ffb: mov    DWORD PTR [rip+0x21cf367],0x1010006        # 0x14264436c
0x00475005: je     0x140475011
0x00475007: mov    DWORD PTR [rip+0x21cf35b],0x1000006        # 0x14264436c
0x00475011: lea    eax,[r14+0x2]
0x00475015: mov    DWORD PTR [rip+0x21cf349],eax        # 0x142644364
0x0047501b: mov    DWORD PTR [rip+0x21cf346],r13d        # 0x142644368
0x00475022: lea    rdx,[rbx+0x40]
0x00475026: xor    r9d,r9d
0x00475029: mov    rcx,rsi
0x0047502c: call   0x140ad69a0
0x00475031: mov    eax,DWORD PTR [rsp+0x60]
0x00475035: mov    rcx,QWORD PTR [rsp+0x70]
0x0047503a: cmp    eax,DWORD PTR [rcx+0x294]
0x00475040: mov    DWORD PTR [rip+0x21cf322],0x1010004        # 0x14264436c
0x0047504a: je     0x140475056
0x0047504c: mov    DWORD PTR [rip+0x21cf316],0x1000004        # 0x14264436c
0x00475056: xorps  xmm0,xmm0
0x00475059: movups XMMWORD PTR [rbp-0x10],xmm0
0x0047505d: xor    ecx,ecx
0x0047505f: mov    QWORD PTR [rbp+0x0],rcx
0x00475063: mov    QWORD PTR [rbp+0x8],0xf
0x0047506b: mov    BYTE PTR [rbp-0x10],cl
0x0047506e: movups XMMWORD PTR [rbp+0x10],xmm0
0x00475072: mov    QWORD PTR [rbp+0x20],rcx
0x00475076: mov    QWORD PTR [rbp+0x28],0xf
0x0047507e: mov    BYTE PTR [rbp+0x10],cl
0x00475081: lea    ecx,[rax+0x1]
0x00475084: lea    rdx,[rbp+0x10]
0x00475088: call   0x140529db0
0x0047508d: lea    rdx,[rbp+0x10]
0x00475091: cmp    QWORD PTR [rbp+0x28],0xf
0x00475096: cmova  rdx,QWORD PTR [rbp+0x10]
0x0047509b: mov    r8,QWORD PTR [rbp+0x20]
0x0047509f: lea    rcx,[rbp-0x10]
0x004750a3: call   0x14006f9a0
0x004750a8: nop
0x004750a9: mov    rdx,QWORD PTR [rbp+0x28]
0x004750ad: cmp    rdx,0xf
0x004750b1: jbe    0x1404750e4
0x004750b3: inc    rdx
0x004750b6: mov    rcx,QWORD PTR [rbp+0x10]
0x004750ba: mov    rax,rcx
0x004750bd: cmp    rdx,0x1000
0x004750c4: jb     0x1404750df
0x004750c6: add    rdx,0x27
0x004750ca: mov    rcx,QWORD PTR [rcx-0x8]
0x004750ce: sub    rax,rcx
0x004750d1: add    rax,0xfffffffffffffff8
0x004750d5: cmp    rax,0x1f
0x004750d9: ja     0x1404752ef
0x004750df: call   0x1415345f0
0x004750e4: mov    r8d,0x1
0x004750ea: lea    rdx,[rip+0x11713db]        # 0x1415e64cc ; literal="/"
0x004750f1: lea    rcx,[rbp-0x10]
0x004750f5: call   0x14006f9a0
0x004750fa: xorps  xmm0,xmm0
0x004750fd: movups XMMWORD PTR [rbp+0x10],xmm0
0x00475101: mov    QWORD PTR [rbp+0x20],0x0
0x00475109: mov    QWORD PTR [rbp+0x28],0xf
0x00475111: mov    BYTE PTR [rbp+0x10],0x0
0x00475115: lea    rdx,[rbp+0x10]
0x00475119: mov    ecx,DWORD PTR [rbp-0x68]
0x0047511c: call   0x140529db0
0x00475121: lea    rdx,[rbp+0x10]
0x00475125: cmp    QWORD PTR [rbp+0x28],0xf
0x0047512a: cmova  rdx,QWORD PTR [rbp+0x10]
0x0047512f: mov    r8,QWORD PTR [rbp+0x20]
0x00475133: lea    rcx,[rbp-0x10]
0x00475137: call   0x14006f9a0
0x0047513c: nop
0x0047513d: mov    rdx,QWORD PTR [rbp+0x28]
0x00475141: cmp    rdx,0xf
0x00475145: jbe    0x140475178
0x00475147: inc    rdx
0x0047514a: mov    rcx,QWORD PTR [rbp+0x10]
0x0047514e: mov    rax,rcx
0x00475151: cmp    rdx,0x1000
0x00475158: jb     0x140475173
0x0047515a: add    rdx,0x27
0x0047515e: mov    rcx,QWORD PTR [rcx-0x8]
0x00475162: sub    rax,rcx
0x00475165: add    rax,0xfffffffffffffff8
0x00475169: cmp    rax,0x1f
0x0047516d: ja     0x1404752ef
0x00475173: call   0x1415345f0
0x00475178: mov    eax,edi
0x0047517a: sub    eax,DWORD PTR [rbp+0x0]
0x0047517d: sub    eax,0x2
0x00475180: mov    DWORD PTR [rip+0x21cf1de],eax        # 0x142644364
0x00475186: mov    DWORD PTR [rip+0x21cf1db],r13d        # 0x142644368
0x0047518d: xor    r9d,r9d
0x00475190: lea    rdx,[rbp-0x10]
0x00475194: mov    rcx,rsi
0x00475197: call   0x140ad69a0
0x0047519c: nop
0x0047519d: mov    rdx,QWORD PTR [rbp+0x8]
0x004751a1: cmp    rdx,0xf
0x004751a5: jbe    0x1404751d8
0x004751a7: inc    rdx
0x004751aa: mov    rcx,QWORD PTR [rbp-0x10]
0x004751ae: mov    rax,rcx
0x004751b1: cmp    rdx,0x1000
0x004751b8: jb     0x1404751d3
0x004751ba: add    rdx,0x27
0x004751be: mov    rcx,QWORD PTR [rcx-0x8]
0x004751c2: sub    rax,rcx
0x004751c5: add    rax,0xfffffffffffffff8
0x004751c9: cmp    rax,0x1f
0x004751cd: ja     0x1404752f6
0x004751d3: call   0x1415345f0
0x004751d8: mov    edx,DWORD PTR [rsp+0x68]
0x004751dc: cmp    r12d,edx
0x004751df: jl     0x1404752be
0x004751e5: cmp    r12d,r15d
0x004751e8: jg     0x1404752be
0x004751ee: cmp    QWORD PTR [rbx+0x80],0x0
0x004751f6: je     0x1404752be
0x004751fc: mov    eax,DWORD PTR [rsp+0x60]
0x00475200: mov    rcx,QWORD PTR [rsp+0x70]
0x00475205: cmp    eax,DWORD PTR [rcx+0x294]
0x0047520b: mov    DWORD PTR [rip+0x21cf157],0x1010003        # 0x14264436c
0x00475215: je     0x140475221
0x00475217: mov    DWORD PTR [rip+0x21cf14b],0x1000003        # 0x14264436c
0x00475221: lea    eax,[r14+0x2]
0x00475225: mov    DWORD PTR [rip+0x21cf139],eax        # 0x142644364
0x0047522b: mov    DWORD PTR [rip+0x21cf136],r12d        # 0x142644368
0x00475232: xorps  xmm0,xmm0
0x00475235: movups XMMWORD PTR [rbp-0x10],xmm0
0x00475239: mov    QWORD PTR [rbp+0x0],0x5
0x00475241: mov    QWORD PTR [rbp+0x8],0xf
0x00475249: mov    eax,DWORD PTR [rip+0x117253d]        # 0x1415e778c ; literal="Org: "
0x0047524f: mov    DWORD PTR [rbp-0x10],eax
0x00475252: movzx  eax,BYTE PTR [rip+0x1172537]        # 0x1415e7790 ; literal=" "
0x00475259: mov    BYTE PTR [rbp-0xc],al
0x0047525c: mov    BYTE PTR [rbp-0xb],0x0
0x00475260: xor    r9d,r9d
0x00475263: lea    rdx,[rbp-0x10]
0x00475267: mov    rcx,rsi
0x0047526a: call   0x140ad69a0
0x0047526f: nop
0x00475270: mov    rdx,QWORD PTR [rbp+0x8]
0x00475274: cmp    rdx,0xf
0x00475278: jbe    0x1404752ab
0x0047527a: inc    rdx
0x0047527d: mov    rcx,QWORD PTR [rbp-0x10]
0x00475281: mov    rax,rcx
0x00475284: cmp    rdx,0x1000
0x0047528b: jb     0x1404752a6
0x0047528d: add    rdx,0x27
0x00475291: mov    rcx,QWORD PTR [rcx-0x8]
0x00475295: sub    rax,rcx
0x00475298: add    rax,0xfffffffffffffff8
0x0047529c: cmp    rax,0x1f
0x004752a0: ja     0x140476d90
0x004752a6: call   0x1415345f0
0x004752ab: lea    rdx,[rbx+0x70]
0x004752af: xor    r9d,r9d
0x004752b2: mov    rcx,rsi
0x004752b5: call   0x140ad69a0
0x004752ba: mov    edx,DWORD PTR [rsp+0x68]
0x004752be: add    r13d,0x5
0x004752c2: add    r12d,0x5
0x004752c6: mov    DWORD PTR [rsp+0x78],r12d
0x004752cb: inc    DWORD PTR [rsp+0x60]
0x004752cf: mov    rcx,QWORD PTR [rbp-0x60]
0x004752d3: inc    rcx
0x004752d6: mov    QWORD PTR [rbp-0x60],rcx
0x004752da: cmp    rcx,QWORD PTR [rbp-0x40]
0x004752de: jge    0x1404752fd
0x004752e0: mov    r8d,DWORD PTR [rsp+0x64]
0x004752e5: mov    rbx,QWORD PTR [rsp+0x70]
0x004752ea: jmp    0x140474e90
0x004752ef: call   QWORD PTR [rip+0x116b7ab]        # 0x1415e0aa0
0x004752f5: nop
0x004752f6: call   QWORD PTR [rip+0x116b7a4]        # 0x1415e0aa0
0x004752fc: int3
0x004752fd: mov    r10d,DWORD PTR [rbp-0x78]
0x00475301: mov    r11d,DWORD PTR [rbp-0x70]
0x00475305: xor    r15d,r15d
0x00475308: mov    r14,QWORD PTR [rsp+0x70]
0x0047530d: cmp    r11d,r10d
0x00475310: jle    0x140476db3
0x00475316: lea    ecx,[rdx+0x1]
0x00475319: lea    r9d,[rdx-0x2]
0x0047531d: add    r9d,r10d
0x00475320: mov    QWORD PTR [rbp+0x8],0x0
0x00475328: mov    eax,DWORD PTR [r14+0x2c8]
0x0047532f: mov    DWORD PTR [rbp-0x10],eax
0x00475332: mov    DWORD PTR [rbp-0xc],r15d
0x00475336: lea    eax,[r11-0x1]
0x0047533a: mov    DWORD PTR [rbp-0x8],eax
0x0047533d: mov    DWORD PTR [rbp+0x0],ecx
0x00475340: mov    DWORD PTR [rbp+0x4],r9d
0x00475344: mov    DWORD PTR [rbp-0x4],r10d
0x00475348: lea    rcx,[rbp-0x10]
0x0047534c: call   0x1400bb340
0x00475351: mov    DWORD PTR [rsp+0x28],r15d
0x00475356: lea    r9d,[rdi+0x1]
0x0047535a: movzx  eax,BYTE PTR [r14+0x2cc]
0x00475362: mov    BYTE PTR [rsp+0x20],al
0x00475366: mov    r8d,DWORD PTR [rbp-0x58]
0x0047536a: mov    edx,DWORD PTR [rbp-0x54]
0x0047536d: lea    rcx,[rbp-0x10]
0x00475371: call   0x14140a440
0x00475376: jmp    0x140476db3
0x0047537b: lea    r15d,[rbx+0x6]
0x0047537f: mov    DWORD PTR [rsp+0x7c],r15d
0x00475384: mov    r13d,DWORD PTR [rsp+0x60]
0x00475389: add    r13d,0xffffffe2
0x0047538d: mov    DWORD PTR [rbp-0x70],r13d
0x00475391: mov    edi,DWORD PTR [rsp+0x68]
0x00475395: add    edi,0x4
0x00475398: mov    DWORD PTR [rsp+0x78],edi
0x0047539c: mov    r14d,DWORD PTR [rbp-0x7c]
0x004753a0: add    r14d,0xfffffffe
0x004753a4: mov    DWORD PTR [rsp+0x64],r14d
0x004753a9: mov    rbx,QWORD PTR [r10+0x330]
0x004753b0: mov    rax,QWORD PTR [r10+0x338]
0x004753b7: sub    rax,rbx
0x004753ba: sar    rax,0x3
0x004753be: lea    r12d,[rax+rax*4]
0x004753c2: mov    DWORD PTR [rbp-0x78],r12d
0x004753c6: movsxd rcx,DWORD PTR [r10+0x294]
0x004753cd: test   ecx,ecx
0x004753cf: js     0x140475413
0x004753d1: mov    rax,QWORD PTR [r10+0x320]
0x004753d8: sub    rax,QWORD PTR [r10+0x318]
0x004753df: sar    rax,0x3
0x004753e3: cmp    ecx,eax
0x004753e5: jge    0x140475413
0x004753e7: mov    rbx,QWORD PTR [rbx+rcx*8]
0x004753eb: mov    rcx,rbx
0x004753ee: call   0x1400d15e0
0x004753f3: mov    rax,QWORD PTR [rbx+0x8]
0x004753f7: sub    rax,QWORD PTR [rbx]
0x004753fa: sar    rax,0x3
0x004753fe: cmp    rax,0x1
0x00475402: jb     0x140475413
0x00475404: mov    eax,r14d
0x00475407: sub    eax,edi
0x00475409: add    eax,0xfffffff5
0x0047540c: add    r12d,eax
0x0047540f: mov    DWORD PTR [rbp-0x78],r12d
0x00475413: mov    edx,r14d
0x00475416: sub    edx,edi
0x00475418: mov    DWORD PTR [rbp-0x40],edx
0x0047541b: lea    r8d,[rdx+0x1]
0x0047541f: mov    DWORD PTR [rbp-0x68],r8d
0x00475423: cmp    r12d,r8d
0x00475426: jle    0x140475430
0x00475428: add    r13d,0xfffffffe
0x0047542c: mov    DWORD PTR [rbp-0x70],r13d
0x00475430: mov    r14,QWORD PTR [rsp+0x70]
0x00475435: mov    eax,DWORD PTR [r14+0x2c8]
0x0047543c: mov    ecx,r12d
0x0047543f: sub    ecx,r8d
0x00475442: cmp    eax,ecx
0x00475444: cmovle ecx,eax
0x00475447: xor    r9d,r9d
0x0047544a: mov    eax,r9d
0x0047544d: test   ecx,ecx
0x0047544f: cmovns eax,ecx
0x00475452: mov    ebx,edi
0x00475454: sub    ebx,eax
0x00475456: mov    DWORD PTR [rsp+0x60],ebx
0x0047545a: mov    rax,QWORD PTR [r14+0x338]
0x00475461: sub    rax,QWORD PTR [r14+0x330]
0x00475468: sar    rax,0x3
0x0047546c: mov    QWORD PTR [rbp-0x28],rax
0x00475470: mov    DWORD PTR [rsp+0x68],r9d
0x00475475: test   eax,eax
0x00475477: jle    0x140475fa1
0x0047547d: mov    ecx,r9d
0x00475480: mov    QWORD PTR [rbp-0x50],rcx
0x00475484: cdqe
0x00475486: mov    QWORD PTR [rbp-0x48],rax
0x0047548a: lea    eax,[rdx-0x8]
0x0047548d: nop    DWORD PTR [rax]
0x00475490: mov    DWORD PTR [rbp-0x7c],eax
0x00475493: mov    rax,QWORD PTR [r14+0x330]
0x0047549a: mov    r14,QWORD PTR [rax+rcx*8]
0x0047549e: mov    QWORD PTR [rbp-0x60],r14
0x004754a2: mov    rcx,r14
0x004754a5: call   0x1400d15e0
0x004754aa: lea    r12d,[rbx+0x4]
0x004754ae: mov    DWORD PTR [rbp-0x74],r12d
0x004754b2: mov    eax,DWORD PTR [rsp+0x68]
0x004754b6: mov    rcx,QWORD PTR [rsp+0x70]
0x004754bb: cmp    eax,DWORD PTR [rcx+0x294]
0x004754c1: jne    0x1404754e0
0x004754c3: mov    rax,QWORD PTR [r14+0x8]
0x004754c7: sub    rax,QWORD PTR [r14]
0x004754ca: sar    rax,0x3
0x004754ce: test   rax,rax
0x004754d1: je     0x1404754e0
0x004754d3: mov    eax,DWORD PTR [rbp-0x7c]
0x004754d6: add    eax,0xfffffffd
0x004754d9: add    r12d,eax
0x004754dc: mov    DWORD PTR [rbp-0x74],r12d
0x004754e0: mov    edi,ebx
0x004754e2: cmp    ebx,r12d
0x004754e5: jg     0x1404755e7
0x004754eb: movsxd r14,ebx
0x004754ee: mov    eax,DWORD PTR [rsp+0x78]
0x004754f2: cmp    edi,eax
0x004754f4: jl     0x1404755cc
0x004754fa: cmp    edi,DWORD PTR [rsp+0x64]
0x004754fe: jg     0x1404755cc
0x00475504: mov    ebx,r15d
0x00475507: cmp    r15d,r13d
0x0047550a: jg     0x1404755cc
0x00475510: movsxd r15,r12d
0x00475513: mov    r12d,DWORD PTR [rsp+0x7c]
0x00475518: nop    DWORD PTR [rax+rax*1+0x0]
0x00475520: mov    DWORD PTR [rip+0x21cee3e],ebx        # 0x142644364
0x00475526: mov    DWORD PTR [rip+0x21cee3c],edi        # 0x142644368
0x0047552c: xor    r8d,r8d
0x0047552f: xor    edx,edx
0x00475531: mov    rcx,rsi
0x00475534: call   0x1400bb120
0x00475539: cmp    edi,DWORD PTR [rsp+0x60]
0x0047553d: jne    0x140475564
0x0047553f: cmp    ebx,r12d
0x00475542: jne    0x14047554c
0x00475544: mov    edx,DWORD PTR [rip+0x21d073e]        # 0x142645c88
0x0047554a: jmp    0x1404755ac
0x0047554c: mov    rcx,rsi
0x0047554f: cmp    ebx,r13d
0x00475552: jne    0x14047555c
0x00475554: mov    edx,DWORD PTR [rip+0x21d0746]        # 0x142645ca0
0x0047555a: jmp    0x1404755af
0x0047555c: mov    edx,DWORD PTR [rip+0x21d0732]        # 0x142645c94
0x00475562: jmp    0x1404755af
0x00475564: cmp    r14,r15
0x00475567: jne    0x14047558e
0x00475569: cmp    ebx,r12d
0x0047556c: jne    0x140475576
0x0047556e: mov    edx,DWORD PTR [rip+0x21d071c]        # 0x142645c90
0x00475574: jmp    0x1404755ac
0x00475576: mov    rcx,rsi
0x00475579: cmp    ebx,r13d
0x0047557c: jne    0x140475586
0x0047557e: mov    edx,DWORD PTR [rip+0x21d0724]        # 0x142645ca8
0x00475584: jmp    0x1404755af
0x00475586: mov    edx,DWORD PTR [rip+0x21d0710]        # 0x142645c9c
0x0047558c: jmp    0x1404755af
0x0047558e: cmp    ebx,r12d
0x00475591: jne    0x14047559b
0x00475593: mov    edx,DWORD PTR [rip+0x21d06f3]        # 0x142645c8c
0x00475599: jmp    0x1404755ac
0x0047559b: cmp    ebx,r13d
0x0047559e: mov    edx,DWORD PTR [rip+0x21d0700]        # 0x142645ca4
0x004755a4: je     0x1404755ac
0x004755a6: mov    edx,DWORD PTR [rip+0x21d06ec]        # 0x142645c98
0x004755ac: mov    rcx,rsi
0x004755af: call   0x140ad7b10
0x004755b4: inc    ebx
0x004755b6: cmp    ebx,r13d
0x004755b9: jle    0x140475520
0x004755bf: mov    r12d,DWORD PTR [rbp-0x74]
0x004755c3: mov    r15d,DWORD PTR [rsp+0x7c]
0x004755c8: mov    eax,DWORD PTR [rsp+0x78]
0x004755cc: inc    edi
0x004755ce: inc    r14
0x004755d1: cmp    edi,r12d
0x004755d4: jle    0x1404754f2
0x004755da: mov    ebx,DWORD PTR [rsp+0x60]
0x004755de: mov    r14,QWORD PTR [rbp-0x60]
0x004755e2: mov    rcx,QWORD PTR [rsp+0x70]
0x004755e7: mov    edi,DWORD PTR [rsp+0x78]
0x004755eb: mov    edx,DWORD PTR [rsp+0x64]
0x004755ef: mov    r12d,DWORD PTR [rsp+0x68]
0x004755f4: cmp    ebx,edi
0x004755f6: jl     0x1404757b8
0x004755fc: cmp    ebx,edx
0x004755fe: jg     0x1404757b8
0x00475604: cmp    r12d,DWORD PTR [rcx+0x294]
0x0047560b: mov    DWORD PTR [rip+0x21ced57],0x1010006        # 0x14264436c
0x00475615: je     0x140475621
0x00475617: mov    DWORD PTR [rip+0x21ced4b],0x1000006        # 0x14264436c
0x00475621: lea    eax,[r15+0x2]
0x00475625: mov    DWORD PTR [rip+0x21ced39],eax        # 0x142644364
0x0047562b: mov    DWORD PTR [rip+0x21ced37],ebx        # 0x142644368
0x00475631: lea    rdx,[r14+0x58]
0x00475635: xor    r9d,r9d
0x00475638: mov    rcx,rsi
0x0047563b: call   0x140ad69a0
0x00475640: mov    rax,QWORD PTR [rsp+0x70]
0x00475645: cmp    r12d,DWORD PTR [rax+0x294]
0x0047564c: mov    DWORD PTR [rip+0x21ced16],0x1010004        # 0x14264436c
0x00475656: je     0x140475662
0x00475658: mov    DWORD PTR [rip+0x21ced0a],0x1000004        # 0x14264436c
0x00475662: xorps  xmm0,xmm0
0x00475665: movups XMMWORD PTR [rbp+0x10],xmm0
0x00475669: xor    eax,eax
0x0047566b: mov    QWORD PTR [rbp+0x20],rax
0x0047566f: mov    QWORD PTR [rbp+0x28],0xf
0x00475677: mov    BYTE PTR [rbp+0x10],al
0x0047567a: movups XMMWORD PTR [rbp-0x10],xmm0
0x0047567e: mov    QWORD PTR [rbp+0x0],rax
0x00475682: mov    QWORD PTR [rbp+0x8],0xf
0x0047568a: mov    BYTE PTR [rbp-0x10],al
0x0047568d: lea    ecx,[r12+0x1]
0x00475692: lea    rdx,[rbp-0x10]
0x00475696: call   0x140529db0
0x0047569b: lea    rdx,[rbp-0x10]
0x0047569f: cmp    QWORD PTR [rbp+0x8],0xf
0x004756a4: cmova  rdx,QWORD PTR [rbp-0x10]
0x004756a9: mov    r8,QWORD PTR [rbp+0x0]
0x004756ad: lea    rcx,[rbp+0x10]
0x004756b1: call   0x14006f9a0
0x004756b6: nop
0x004756b7: mov    rdx,QWORD PTR [rbp+0x8]
0x004756bb: cmp    rdx,0xf
0x004756bf: jbe    0x1404756f2
0x004756c1: inc    rdx
0x004756c4: mov    rcx,QWORD PTR [rbp-0x10]
0x004756c8: mov    rax,rcx
0x004756cb: cmp    rdx,0x1000
0x004756d2: jb     0x1404756ed
0x004756d4: add    rdx,0x27
0x004756d8: mov    rcx,QWORD PTR [rcx-0x8]
0x004756dc: sub    rax,rcx
0x004756df: add    rax,0xfffffffffffffff8
0x004756e3: cmp    rax,0x1f
0x004756e7: ja     0x140475f8f
0x004756ed: call   0x1415345f0
0x004756f2: mov    r8d,0x1
0x004756f8: lea    rdx,[rip+0x1170dcd]        # 0x1415e64cc ; literal="/"
0x004756ff: lea    rcx,[rbp+0x10]
0x00475703: call   0x14006f9a0
0x00475708: xorps  xmm0,xmm0
0x0047570b: movups XMMWORD PTR [rbp-0x10],xmm0
0x0047570f: mov    QWORD PTR [rbp+0x0],0x0
0x00475717: mov    QWORD PTR [rbp+0x8],0xf
0x0047571f: mov    BYTE PTR [rbp-0x10],0x0
0x00475723: lea    rdx,[rbp-0x10]
0x00475727: mov    ecx,DWORD PTR [rbp-0x28]
0x0047572a: call   0x140529db0
0x0047572f: lea    rdx,[rbp-0x10]
0x00475733: cmp    QWORD PTR [rbp+0x8],0xf
0x00475738: cmova  rdx,QWORD PTR [rbp-0x10]
0x0047573d: mov    r8,QWORD PTR [rbp+0x0]
0x00475741: lea    rcx,[rbp+0x10]
0x00475745: call   0x14006f9a0
0x0047574a: nop
0x0047574b: mov    rdx,QWORD PTR [rbp+0x8]
0x0047574f: cmp    rdx,0xf
0x00475753: jbe    0x140475786
0x00475755: inc    rdx
0x00475758: mov    rcx,QWORD PTR [rbp-0x10]
0x0047575c: mov    rax,rcx
0x0047575f: cmp    rdx,0x1000
0x00475766: jb     0x140475781
0x00475768: add    rdx,0x27
0x0047576c: mov    rcx,QWORD PTR [rcx-0x8]
0x00475770: sub    rax,rcx
0x00475773: add    rax,0xfffffffffffffff8
0x00475777: cmp    rax,0x1f
0x0047577b: ja     0x140475f8f
0x00475781: call   0x1415345f0
0x00475786: mov    eax,r13d
0x00475789: sub    eax,DWORD PTR [rbp+0x20]
0x0047578c: sub    eax,0x2
0x0047578f: mov    DWORD PTR [rip+0x21cebcf],eax        # 0x142644364
0x00475795: mov    DWORD PTR [rip+0x21cebcd],ebx        # 0x142644368
0x0047579b: xor    r9d,r9d
0x0047579e: lea    rdx,[rbp+0x10]
0x004757a2: mov    rcx,rsi
0x004757a5: call   0x140ad69a0
0x004757aa: nop
0x004757ab: lea    rcx,[rbp+0x10]
0x004757af: call   0x14006f7e0
0x004757b4: mov    edx,DWORD PTR [rsp+0x64]
0x004757b8: mov    rax,QWORD PTR [rsp+0x70]
0x004757bd: cmp    r12d,DWORD PTR [rax+0x294]
0x004757c4: jne    0x140475e5b
0x004757ca: lea    eax,[rbx+0x1]
0x004757cd: mov    DWORD PTR [rbp-0x74],eax
0x004757d0: mov    ecx,DWORD PTR [rbp-0x7c]
0x004757d3: add    ecx,ebx
0x004757d5: mov    DWORD PTR [rbp-0x30],ecx
0x004757d8: mov    r9d,eax
0x004757db: cmp    eax,edi
0x004757dd: cmovl  r9d,edi
0x004757e1: mov    r8d,ecx
0x004757e4: cmp    ecx,edx
0x004757e6: cmovg  r8d,edx
0x004757ea: lea    edx,[r13-0x2]
0x004757ee: lea    eax,[r15+0x2]
0x004757f2: mov    DWORD PTR [rbp-0x38],eax
0x004757f5: xor    r11d,r11d
0x004757f8: mov    ecx,r11d
0x004757fb: test   eax,eax
0x004757fd: cmovns ecx,eax
0x00475800: mov    eax,DWORD PTR [rip+0x1f51e6e]        # 0x1423c7674
0x00475806: dec    eax
0x00475808: cmp    edx,eax
0x0047580a: cmovg  edx,eax
0x0047580d: test   r9d,r9d
0x00475810: cmovs  r9d,r11d
0x00475814: mov    eax,DWORD PTR [rip+0x1f51e5e]        # 0x1423c7678
0x0047581a: dec    eax
0x0047581c: cmp    r8d,eax
0x0047581f: cmovg  r8d,eax
0x00475823: mov    DWORD PTR [rip+0x21ced3f],ecx        # 0x142644568
0x00475829: mov    DWORD PTR [rip+0x21ced3d],edx        # 0x14264456c
0x0047582f: mov    DWORD PTR [rip+0x21ced3a],r9d        # 0x142644570
0x00475836: mov    DWORD PTR [rip+0x21ced37],r8d        # 0x142644574
0x0047583d: sub    r13d,r15d
0x00475840: mov    r10d,r11d
0x00475843: mov    r9d,r11d
0x00475846: mov    r14d,r11d
0x00475849: mov    rcx,QWORD PTR [rbp-0x60]
0x0047584d: mov    rbx,QWORD PTR [rcx]
0x00475850: mov    rax,rbx
0x00475853: mov    rdi,QWORD PTR [rcx+0x8]
0x00475857: cmp    rax,rdi
0x0047585a: jae    0x140475895
0x0047585c: mov    rcx,QWORD PTR [rax]
0x0047585f: mov    edx,DWORD PTR [rcx+0x18]
0x00475862: mov    ecx,DWORD PTR [rcx+0x14]
0x00475865: lea    r8d,[rcx+rcx*2]
0x00475869: add    r8d,r8d
0x0047586c: cmp    r10d,edx
0x0047586f: cmovg  r10d,edx
0x00475873: cmp    r14d,r8d
0x00475876: cmovg  r14d,r8d
0x0047587a: lea    ecx,[rdx+0x4]
0x0047587d: cmp    r9d,ecx
0x00475880: cmovl  r9d,ecx
0x00475884: lea    ecx,[r8+0x4]
0x00475888: cmp    r11d,ecx
0x0047588b: cmovl  r11d,ecx
0x0047588f: add    rax,0x8
0x00475893: jmp    0x140475857
0x00475895: lea    eax,[r13-0x3]
0x00475899: cdq
0x0047589a: sub    eax,edx
0x0047589c: sar    eax,1
0x0047589e: mov    r8d,eax
0x004758a1: lea    r12d,[r15-0x1]
0x004758a5: add    r12d,eax
0x004758a8: mov    rax,QWORD PTR [rsp+0x70]
0x004758ad: mov    r15,QWORD PTR [rax+0x2c0]
0x004758b4: test   r15,r15
0x004758b7: je     0x14047594b
0x004758bd: mov    ecx,r9d
0x004758c0: sub    ecx,r10d
0x004758c3: inc    ecx
0x004758c5: lea    eax,[r13-0x5]
0x004758c9: cmp    ecx,eax
0x004758cb: jl     0x140475904
0x004758cd: mov    edx,DWORD PTR [r15+0x18]
0x004758d1: mov    ecx,edx
0x004758d3: neg    ecx
0x004758d5: lea    eax,[rdx-0x2]
0x004758d8: add    eax,r8d
0x004758db: cmp    eax,r9d
0x004758de: jle    0x1404758eb
0x004758e0: mov    ecx,r8d
0x004758e3: sub    ecx,r9d
0x004758e6: sub    ecx,0x2
0x004758e9: jmp    0x140475901
0x004758eb: sub    edx,r8d
0x004758ee: add    edx,0x2
0x004758f1: cmp    edx,r10d
0x004758f4: jge    0x140475901
0x004758f6: mov    ecx,0x2
0x004758fb: sub    ecx,r10d
0x004758fe: sub    ecx,r8d
0x00475901: add    r12d,ecx
0x00475904: mov    ecx,r11d
0x00475907: sub    ecx,r14d
0x0047590a: inc    ecx
0x0047590c: mov    r8d,DWORD PTR [rbp-0x7c]
0x00475910: lea    eax,[r8-0x2]
0x00475914: cmp    ecx,eax
0x00475916: jl     0x140475952
0x00475918: mov    eax,DWORD PTR [r15+0x14]
0x0047591c: lea    ecx,[rax+rax*2]
0x0047591f: add    ecx,ecx
0x00475921: mov    edx,0x6
0x00475926: sub    edx,ecx
0x00475928: lea    eax,[r8-0x8]
0x0047592c: add    eax,ecx
0x0047592e: cmp    eax,r11d
0x00475931: jle    0x14047593c
0x00475933: mov    edx,r8d
0x00475936: sub    edx,r11d
0x00475939: sub    edx,0x2
0x0047593c: mov    r14d,DWORD PTR [rsp+0x60]
0x00475941: add    r14d,edx
0x00475944: mov    DWORD PTR [rsp+0x60],r14d
0x00475949: jmp    0x140475957
0x0047594b: mov    r14d,DWORD PTR [rsp+0x60]
0x00475950: jmp    0x140475960
0x00475952: mov    r14d,DWORD PTR [rsp+0x60]
0x00475957: mov    rax,QWORD PTR [rsp+0x70]
0x0047595c: nop    DWORD PTR [rax+0x0]
0x00475960: cmp    rbx,rdi
0x00475963: jae    0x140475b1e
0x00475969: mov    rcx,QWORD PTR [rbx]
0x0047596c: mov    rdx,QWORD PTR [rcx+0x8]
0x00475970: test   rdx,rdx
0x00475973: je     0x140475b15
0x00475979: mov    rax,QWORD PTR [rax+0x2c0]
0x00475980: cmp    rcx,rax
0x00475983: je     0x140475994
0x00475985: cmp    rdx,rax
0x00475988: mov    DWORD PTR [rip+0x21ce9da],0x1000002        # 0x14264436c
0x00475992: jne    0x14047599e
0x00475994: mov    DWORD PTR [rip+0x21ce9ce],0x1010002        # 0x14264436c
0x0047599e: mov    r10,QWORD PTR [rbx]
0x004759a1: mov    rcx,QWORD PTR [r10+0x8]
0x004759a5: movzx  r9d,WORD PTR [rcx+0x14]
0x004759aa: movzx  eax,r9w
0x004759ae: add    ax,ax
0x004759b1: add    r9w,ax
0x004759b5: add    r9w,r9w
0x004759b9: add    r9w,0x2
0x004759be: add    r9w,r14w
0x004759c2: lea    r8d,[r12+0x2]
0x004759c7: add    r8w,WORD PTR [rcx+0x18]
0x004759cc: movzx  edx,WORD PTR [r10+0x14]
0x004759d1: movzx  eax,dx
0x004759d4: add    ax,ax
0x004759d7: add    dx,ax
0x004759da: add    dx,dx
0x004759dd: add    dx,0x2
0x004759e1: add    dx,r14w
0x004759e5: lea    ecx,[r12+0x2]
0x004759ea: add    cx,WORD PTR [r10+0x18]
0x004759ef: call   0x140a8c290
0x004759f4: mov    r15d,0x1
0x004759fa: mov    eax,DWORD PTR [rip+0x1cb5ff0]        # 0x14212b9f0
0x00475a00: dec    eax
0x00475a02: cmp    eax,r15d
0x00475a05: jle    0x140475b15
0x00475a0b: lea    r14,[rip+0x1737be0]        # 0x141bad5f2
0x00475a12: lea    rax,[r14]
0x00475a15: movsx  r11d,WORD PTR [r14-0x2]
0x00475a1a: movsx  r8d,WORD PTR [r14]
0x00475a1e: movsx  edx,WORD PTR [r14+0xa]
0x00475a23: lea    r14,[r14+0xc]
0x00475a27: movsx  ecx,WORD PTR [r14]
0x00475a2b: movsx  r10d,WORD PTR [rax+0x16]
0x00475a30: movsx  r9d,WORD PTR [rax+0x18]
0x00475a35: mov    DWORD PTR [rip+0x21ce929],edx        # 0x142644364
0x00475a3b: mov    DWORD PTR [rip+0x21ce927],ecx        # 0x142644368
0x00475a41: cmp    edx,DWORD PTR [rip+0x21ceb21]        # 0x142644568
0x00475a47: jl     0x140475b01
0x00475a4d: cmp    edx,DWORD PTR [rip+0x21ceb19]        # 0x14264456c
0x00475a53: jg     0x140475b01
0x00475a59: cmp    ecx,DWORD PTR [rip+0x21ceb11]        # 0x142644570
0x00475a5f: jl     0x140475b01
0x00475a65: cmp    ecx,DWORD PTR [rip+0x21ceb09]        # 0x142644574
0x00475a6b: jg     0x140475b01
0x00475a71: cmp    r11d,edx
0x00475a74: jge    0x140475aa6
0x00475a76: cmp    r8d,ecx
0x00475a79: jge    0x140475a96
0x00475a7b: cmp    r10d,edx
0x00475a7e: jle    0x140475add
0x00475a80: cmp    r9d,ecx
0x00475a83: jle    0x140475ae0
0x00475a85: mov    r8b,0x1
0x00475a88: mov    dl,0x5c
0x00475a8a: mov    rcx,rsi
0x00475a8d: call   0x1400bb120
0x00475a92: mov    dl,0xfe
0x00475a94: jmp    0x140475af6
0x00475a96: jle    0x140475ad8
0x00475a98: cmp    r10d,edx
0x00475a9b: jle    0x140475add
0x00475a9d: cmp    r9d,ecx
0x00475aa0: jge    0x140475ae0
0x00475aa2: mov    dl,0x2f
0x00475aa4: jmp    0x140475af6
0x00475aa6: jle    0x140475ad8
0x00475aa8: cmp    r8d,ecx
0x00475aab: jge    0x140475ac8
0x00475aad: cmp    r10d,edx
0x00475ab0: jge    0x140475add
0x00475ab2: cmp    r9d,ecx
0x00475ab5: jle    0x140475ae0
0x00475ab7: mov    r8b,0x1
0x00475aba: mov    dl,0x2f
0x00475abc: mov    rcx,rsi
0x00475abf: call   0x1400bb120
0x00475ac4: mov    dl,0xfe
0x00475ac6: jmp    0x140475af6
0x00475ac8: jle    0x140475ad8
0x00475aca: cmp    r10d,edx
0x00475acd: jge    0x140475add
0x00475acf: cmp    r9d,ecx
0x00475ad2: jge    0x140475ae0
0x00475ad4: mov    dl,0x5c
0x00475ad6: jmp    0x140475af6
0x00475ad8: cmp    r8d,ecx
0x00475adb: je     0x140475af4
0x00475add: cmp    r9d,ecx
0x00475ae0: je     0x140475af4
0x00475ae2: cmp    r11d,edx
0x00475ae5: je     0x140475af0
0x00475ae7: cmp    r10d,edx
0x00475aea: je     0x140475af0
0x00475aec: mov    dl,0xfe
0x00475aee: jmp    0x140475af6
0x00475af0: mov    dl,0x7c
0x00475af2: jmp    0x140475af6
0x00475af4: mov    dl,0x2d
0x00475af6: mov    r8b,0x1
0x00475af9: mov    rcx,rsi
0x00475afc: call   0x1400bb120
0x00475b01: inc    r15d
0x00475b04: mov    eax,DWORD PTR [rip+0x1cb5ee6]        # 0x14212b9f0
0x00475b0a: dec    eax
0x00475b0c: cmp    r15d,eax
0x00475b0f: jl     0x140475a12
0x00475b15: add    rbx,0x8
0x00475b19: jmp    0x140475952
0x00475b1e: mov    rbx,QWORD PTR [rbp-0x60]
0x00475b22: mov    rbx,QWORD PTR [rbx]
0x00475b25: xor    r15d,r15d
0x00475b28: nop    DWORD PTR [rax+rax*1+0x0]
0x00475b30: cmp    rbx,rdi
0x00475b33: jae    0x140475d3f
0x00475b39: mov    rax,QWORD PTR [rax+0x2c0]
0x00475b40: cmp    QWORD PTR [rbx],rax
0x00475b43: mov    DWORD PTR [rip+0x21ce81f],0x1010007        # 0x14264436c
0x00475b4d: je     0x140475b59
0x00475b4f: mov    DWORD PTR [rip+0x21ce813],0x1010000        # 0x14264436c
0x00475b59: mov    rdx,QWORD PTR [rbx]
0x00475b5c: mov    eax,DWORD PTR [rdx+0x14]
0x00475b5f: lea    ecx,[rax+rax*2]
0x00475b62: lea    r9d,[r14+rcx*2]
0x00475b66: mov    edx,DWORD PTR [rdx+0x18]
0x00475b69: add    edx,r12d
0x00475b6c: lea    eax,[r9+0x4]
0x00475b70: lea    r8d,[rdx+0x4]
0x00475b74: mov    WORD PTR [rsp+0x50],r15w
0x00475b7a: mov    WORD PTR [rsp+0x48],r15w
0x00475b80: mov    WORD PTR [rsp+0x40],r15w
0x00475b86: mov    BYTE PTR [rsp+0x38],0x20
0x00475b8b: mov    BYTE PTR [rsp+0x30],0x1
0x00475b90: mov    BYTE PTR [rsp+0x28],r15b
0x00475b95: mov    DWORD PTR [rsp+0x20],eax
0x00475b99: lea    rcx,[rip+0x1f1e970]        # 0x142394510
0x00475ba0: call   0x140b01090
0x00475ba5: mov    rax,QWORD PTR [rbx]
0x00475ba8: movzx  edx,BYTE PTR [rax+0x44]
0x00475bac: movzx  ecx,WORD PTR [rax+0x42]
0x00475bb0: movzx  eax,BYTE PTR [rax+0x40]
0x00475bb4: mov    BYTE PTR [rip+0x21ce7b2],al        # 0x14264436c
0x00475bba: mov    BYTE PTR [rip+0x21ce7ad],cl        # 0x14264436d
0x00475bc0: mov    BYTE PTR [rip+0x21ce7a8],dl        # 0x14264436e
0x00475bc6: mov    BYTE PTR [rip+0x21ce7a2],0x1        # 0x14264436f
0x00475bcd: mov    rdx,QWORD PTR [rbx]
0x00475bd0: mov    eax,DWORD PTR [rdx+0x14]
0x00475bd3: lea    ecx,[rax+rax*2]
0x00475bd6: lea    r8d,[r14+rcx*2]
0x00475bda: mov    ecx,DWORD PTR [rdx+0x18]
0x00475bdd: add    ecx,r12d
0x00475be0: mov    DWORD PTR [rip+0x21ce77e],ecx        # 0x142644364
0x00475be6: mov    DWORD PTR [rip+0x21ce77b],r8d        # 0x142644368
0x00475bed: mov    rdx,QWORD PTR [rbx]
0x00475bf0: mov    ecx,DWORD PTR [rdx+0x18]
0x00475bf3: add    ecx,r12d
0x00475bf6: mov    r9d,DWORD PTR [rip+0x21ce96b]        # 0x142644568
0x00475bfd: cmp    ecx,r9d
0x00475c00: jl     0x140475c3a
0x00475c02: cmp    ecx,DWORD PTR [rip+0x21ce964]        # 0x14264456c
0x00475c08: jg     0x140475c3a
0x00475c0a: mov    eax,DWORD PTR [rdx+0x14]
0x00475c0d: lea    ecx,[rax+rax*2]
0x00475c10: lea    eax,[r14+rcx*2]
0x00475c14: cmp    eax,DWORD PTR [rip+0x21ce956]        # 0x142644570
0x00475c1a: jl     0x140475c3a
0x00475c1c: cmp    eax,DWORD PTR [rip+0x21ce952]        # 0x142644574
0x00475c22: jg     0x140475c3a
0x00475c24: add    rdx,0x20
0x00475c28: xor    r9d,r9d
0x00475c2b: mov    rcx,rsi
0x00475c2e: call   0x140ad69a0
0x00475c33: mov    r9d,DWORD PTR [rip+0x21ce92e]        # 0x142644568
0x00475c3a: mov    DWORD PTR [rip+0x21ce728],0x1010007        # 0x14264436c
0x00475c44: mov    rdx,QWORD PTR [rbx]
0x00475c47: mov    eax,DWORD PTR [rdx+0x14]
0x00475c4a: lea    ecx,[rax*2+0x1]
0x00475c51: add    ecx,eax
0x00475c53: lea    r8d,[r14+rcx*2]
0x00475c57: mov    ecx,DWORD PTR [rdx+0x18]
0x00475c5a: inc    ecx
0x00475c5c: add    ecx,r12d
0x00475c5f: mov    DWORD PTR [rip+0x21ce6ff],ecx        # 0x142644364
0x00475c65: mov    DWORD PTR [rip+0x21ce6fc],r8d        # 0x142644368
0x00475c6c: mov    rdx,QWORD PTR [rbx]
0x00475c6f: mov    ecx,DWORD PTR [rdx+0x18]
0x00475c72: inc    ecx
0x00475c74: add    ecx,r12d
0x00475c77: cmp    ecx,r9d
0x00475c7a: jl     0x140475cb7
0x00475c7c: cmp    ecx,DWORD PTR [rip+0x21ce8ea]        # 0x14264456c
0x00475c82: jg     0x140475cb7
0x00475c84: mov    eax,DWORD PTR [rdx+0x14]
0x00475c87: lea    eax,[rax+rax*2]
0x00475c8a: lea    eax,[rax+0x1]
0x00475c8d: lea    eax,[r14+rax*2]
0x00475c91: cmp    eax,DWORD PTR [rip+0x21ce8d9]        # 0x142644570
0x00475c97: jl     0x140475cb7
0x00475c99: cmp    eax,DWORD PTR [rip+0x21ce8d5]        # 0x142644574
0x00475c9f: jg     0x140475cb7
0x00475ca1: add    rdx,0x48
0x00475ca5: xor    r9d,r9d
0x00475ca8: mov    rcx,rsi
0x00475cab: call   0x140ad69a0
0x00475cb0: mov    r9d,DWORD PTR [rip+0x21ce8b1]        # 0x142644568
0x00475cb7: mov    DWORD PTR [rip+0x21ce6ab],0x1010007        # 0x14264436c
0x00475cc1: mov    rdx,QWORD PTR [rbx]
0x00475cc4: mov    eax,DWORD PTR [rdx+0x14]
0x00475cc7: lea    ecx,[rax+rax*2]
0x00475cca: lea    r8d,[rcx*2+0x3]
0x00475cd2: add    r8d,r14d
0x00475cd5: mov    ecx,DWORD PTR [rdx+0x18]
0x00475cd8: inc    ecx
0x00475cda: add    ecx,r12d
0x00475cdd: mov    DWORD PTR [rip+0x21ce681],ecx        # 0x142644364
0x00475ce3: mov    DWORD PTR [rip+0x21ce67e],r8d        # 0x142644368
0x00475cea: mov    rdx,QWORD PTR [rbx]
0x00475ced: mov    ecx,DWORD PTR [rdx+0x18]
0x00475cf0: inc    ecx
0x00475cf2: add    ecx,r12d
0x00475cf5: cmp    ecx,r9d
0x00475cf8: jl     0x140475d31
0x00475cfa: cmp    ecx,DWORD PTR [rip+0x21ce86c]        # 0x14264456c
0x00475d00: jg     0x140475d31
0x00475d02: mov    eax,DWORD PTR [rdx+0x14]
0x00475d05: lea    ecx,[rax+rax*2]
0x00475d08: lea    eax,[rcx*2+0x3]
0x00475d0f: add    eax,r14d
0x00475d12: cmp    eax,DWORD PTR [rip+0x21ce858]        # 0x142644570
0x00475d18: jl     0x140475d31
0x00475d1a: cmp    eax,DWORD PTR [rip+0x21ce854]        # 0x142644574
0x00475d20: jg     0x140475d31
0x00475d22: add    rdx,0x68
0x00475d26: xor    r9d,r9d
0x00475d29: mov    rcx,rsi
0x00475d2c: call   0x140ad69a0
0x00475d31: add    rbx,0x8
0x00475d35: mov    rax,QWORD PTR [rsp+0x70]
0x00475d3a: jmp    0x140475b30
0x00475d3f: mov    ecx,DWORD PTR [rip+0x1f51933]        # 0x1423c7678
0x00475d45: dec    ecx
0x00475d47: mov    eax,DWORD PTR [rip+0x1f51927]        # 0x1423c7674
0x00475d4d: dec    eax
0x00475d4f: mov    DWORD PTR [rip+0x21ce812],r15d        # 0x142644568
0x00475d56: mov    DWORD PTR [rip+0x21ce810],eax        # 0x14264456c
0x00475d5c: mov    DWORD PTR [rip+0x21ce80d],r15d        # 0x142644570
0x00475d63: mov    DWORD PTR [rip+0x21ce80b],ecx        # 0x142644574
0x00475d69: mov    eax,DWORD PTR [rbp-0x74]
0x00475d6c: mov    edi,DWORD PTR [rsp+0x78]
0x00475d70: cmp    eax,edi
0x00475d72: jl     0x140475e44
0x00475d78: cmp    eax,DWORD PTR [rsp+0x64]
0x00475d7c: jg     0x140475e44
0x00475d82: mov    rbx,QWORD PTR [rsp+0x70]
0x00475d87: cmp    QWORD PTR [rbx+0x2c0],r15
0x00475d8e: je     0x140475e44
0x00475d94: mov    DWORD PTR [rip+0x21ce5ce],0x1010007        # 0x14264436c
0x00475d9e: mov    ecx,DWORD PTR [rbp-0x38]
0x00475da1: mov    DWORD PTR [rip+0x21ce5bd],ecx        # 0x142644364
0x00475da7: mov    DWORD PTR [rip+0x21ce5bb],eax        # 0x142644368
0x00475dad: xorps  xmm0,xmm0
0x00475db0: movups XMMWORD PTR [rbp-0x10],xmm0
0x00475db4: mov    ecx,0x20
0x00475db9: call   0x140070760
0x00475dbe: mov    QWORD PTR [rbp-0x10],rax
0x00475dc2: mov    QWORD PTR [rbp+0x0],0x10
0x00475dca: mov    QWORD PTR [rbp+0x8],0x1f
0x00475dd2: movups xmm0,XMMWORD PTR [rip+0x11c3e87]        # 0x141639c60 ; literal="Selected actor: "
0x00475dd9: movups XMMWORD PTR [rax],xmm0
0x00475ddc: mov    BYTE PTR [rax+0x10],r15b
0x00475de0: xor    r9d,r9d
0x00475de3: lea    rdx,[rbp-0x10]
0x00475de7: mov    rcx,rsi
0x00475dea: call   0x140ad69a0
0x00475def: nop
0x00475df0: mov    rdx,QWORD PTR [rbp+0x8]
0x00475df4: cmp    rdx,0xf
0x00475df8: jbe    0x140475e2b
0x00475dfa: inc    rdx
0x00475dfd: mov    rcx,QWORD PTR [rbp-0x10]
0x00475e01: mov    rax,rcx
0x00475e04: cmp    rdx,0x1000
0x00475e0b: jb     0x140475e26
0x00475e0d: add    rdx,0x27
0x00475e11: mov    rcx,QWORD PTR [rcx-0x8]
0x00475e15: sub    rax,rcx
0x00475e18: add    rax,0xfffffffffffffff8
0x00475e1c: cmp    rax,0x1f
0x00475e20: ja     0x140476d90
0x00475e26: call   0x1415345f0
0x00475e2b: mov    rax,QWORD PTR [rbx+0x2c0]
0x00475e32: mov    rdx,QWORD PTR [rax]
0x00475e35: add    rdx,0x18
0x00475e39: xor    r9d,r9d
0x00475e3c: mov    rcx,rsi
0x00475e3f: call   0x140ad69a0
0x00475e44: mov    ebx,DWORD PTR [rbp-0x30]
0x00475e47: add    ebx,0x2
0x00475e4a: mov    r13d,DWORD PTR [rbp-0x70]
0x00475e4e: mov    eax,DWORD PTR [rbp-0x7c]
0x00475e51: mov    r12d,DWORD PTR [rsp+0x68]
0x00475e56: jmp    0x140475f63
0x00475e5b: lea    ecx,[rbx+0x2]
0x00475e5e: cmp    ecx,edi
0x00475e60: jl     0x140475f5a
0x00475e66: cmp    ecx,edx
0x00475e68: jg     0x140475f5a
0x00475e6e: mov    DWORD PTR [rip+0x21ce4f4],0x1000007        # 0x14264436c
0x00475e78: lea    eax,[r15+0x2]
0x00475e7c: mov    DWORD PTR [rip+0x21ce4e2],eax        # 0x142644364
0x00475e82: mov    DWORD PTR [rip+0x21ce4e0],ecx        # 0x142644368
0x00475e88: mov    rcx,QWORD PTR [r14+0x8]
0x00475e8c: sub    rcx,QWORD PTR [r14]
0x00475e8f: sar    rcx,0x3
0x00475e93: xorps  xmm0,xmm0
0x00475e96: mov    QWORD PTR [rbp+0x8],0xf
0x00475e9e: movups XMMWORD PTR [rbp-0x10],xmm0
0x00475ea2: cmp    rcx,0x1
0x00475ea6: jne    0x140475f19
0x00475ea8: mov    QWORD PTR [rbp+0x0],0xa
0x00475eb0: movsd  xmm0,QWORD PTR [rip+0x11718f8]        # 0x1415e77b0 ; literal="One member"
0x00475eb8: movsd  QWORD PTR [rbp-0x10],xmm0
0x00475ebd: movzx  eax,WORD PTR [rip+0x11718f4]        # 0x1415e77b8 ; literal="er"
0x00475ec4: mov    WORD PTR [rbp-0x8],ax
0x00475ec8: mov    BYTE PTR [rbp-0x6],0x0
0x00475ecc: xor    r9d,r9d
0x00475ecf: lea    rdx,[rbp-0x10]
0x00475ed3: mov    rcx,rsi
0x00475ed6: call   0x140ad69a0
0x00475edb: nop
0x00475edc: mov    rdx,QWORD PTR [rbp+0x8]
0x00475ee0: cmp    rdx,0xf
0x00475ee4: jbe    0x140475f5a
0x00475ee6: inc    rdx
0x00475ee9: mov    rcx,QWORD PTR [rbp-0x10]
0x00475eed: mov    rax,rcx
0x00475ef0: cmp    rdx,0x1000
0x00475ef7: jb     0x140475f12
0x00475ef9: add    rdx,0x27
0x00475efd: mov    rcx,QWORD PTR [rcx-0x8]
0x00475f01: sub    rax,rcx
0x00475f04: add    rax,0xfffffffffffffff8
0x00475f08: cmp    rax,0x1f
0x00475f0c: ja     0x140476d90
0x00475f12: call   0x1415345f0
0x00475f17: jmp    0x140475f5a
0x00475f19: xor    eax,eax
0x00475f1b: mov    QWORD PTR [rbp+0x0],rax
0x00475f1f: mov    BYTE PTR [rbp-0x10],al
0x00475f22: lea    rdx,[rbp-0x10]
0x00475f26: call   0x140529cf0
0x00475f2b: mov    r8d,0x8
0x00475f31: lea    rdx,[rip+0x1171848]        # 0x1415e7780 ; literal=" members"
0x00475f38: lea    rcx,[rbp-0x10]
0x00475f3c: call   0x14006f9a0
0x00475f41: xor    r9d,r9d
0x00475f44: lea    rdx,[rbp-0x10]
0x00475f48: mov    rcx,rsi
0x00475f4b: call   0x140ad69a0
0x00475f50: nop
0x00475f51: lea    rcx,[rbp-0x10]
0x00475f55: call   0x14006f7e0
0x00475f5a: add    ebx,0x5
0x00475f5d: mov    eax,DWORD PTR [rbp-0x40]
0x00475f60: add    eax,0xfffffff8
0x00475f63: mov    DWORD PTR [rsp+0x60],ebx
0x00475f67: inc    r12d
0x00475f6a: mov    DWORD PTR [rsp+0x68],r12d
0x00475f6f: mov    rcx,QWORD PTR [rbp-0x50]
0x00475f73: inc    rcx
0x00475f76: mov    QWORD PTR [rbp-0x50],rcx
0x00475f7a: mov    r14,QWORD PTR [rsp+0x70]
0x00475f7f: cmp    rcx,QWORD PTR [rbp-0x48]
0x00475f83: jge    0x140475f96
0x00475f85: mov    r15d,DWORD PTR [rsp+0x7c]
0x00475f8a: jmp    0x140475490
0x00475f8f: call   QWORD PTR [rip+0x116ab0b]        # 0x1415e0aa0
0x00475f95: nop
0x00475f96: mov    r12d,DWORD PTR [rbp-0x78]
0x00475f9a: mov    r8d,DWORD PTR [rbp-0x68]
0x00475f9e: xor    r9d,r9d
0x00475fa1: cmp    r12d,r8d
0x00475fa4: jle    0x140476db3
0x00475faa: lea    ecx,[rdi+0x1]
0x00475fad: lea    edx,[rdi-0x2]
0x00475fb0: add    edx,r8d
0x00475fb3: mov    QWORD PTR [rbp+0x8],0x0
0x00475fbb: mov    eax,DWORD PTR [r14+0x2c8]
0x00475fc2: mov    DWORD PTR [rbp-0x10],eax
0x00475fc5: mov    DWORD PTR [rbp-0xc],r9d
0x00475fc9: lea    eax,[r12-0x1]
0x00475fce: mov    DWORD PTR [rbp-0x8],eax
0x00475fd1: mov    DWORD PTR [rbp+0x0],ecx
0x00475fd4: mov    DWORD PTR [rbp+0x4],edx
0x00475fd7: mov    DWORD PTR [rbp-0x4],r8d
0x00475fdb: lea    rcx,[rbp-0x10]
0x00475fdf: call   0x1400bb340
0x00475fe4: lea    r9d,[r13+0x1]
0x00475fe8: xor    eax,eax
0x00475fea: mov    DWORD PTR [rsp+0x28],eax
0x00475fee: jmp    0x14047535a
0x00475ff3: mov    r9,r10
0x00475ff6: mov    rbx,QWORD PTR [r10+0x318]
0x00475ffd: mov    rax,QWORD PTR [r10+0x320]
0x00476004: sub    rax,rbx
0x00476007: sar    rax,0x3
0x0047600b: lea    r12d,[rax+rax*4]
0x0047600f: mov    DWORD PTR [rbp-0x74],r12d
0x00476013: movsxd rcx,DWORD PTR [r10+0x294]
0x0047601a: mov    edi,0x3
0x0047601f: test   ecx,ecx
0x00476021: js     0x140476056
0x00476023: cmp    ecx,eax
0x00476025: jge    0x140476056
0x00476027: mov    rbx,QWORD PTR [rbx+rcx*8]
0x0047602b: mov    rcx,rbx
0x0047602e: call   0x1400d17d0
0x00476033: mov    rax,QWORD PTR [rbx+0x80]
0x0047603a: sub    rax,QWORD PTR [rbx+0x78]
0x0047603e: sar    rax,0x3
0x00476042: cmp    eax,edi
0x00476044: cmovl  eax,edi
0x00476047: dec    r12d
0x0047604a: add    r12d,eax
0x0047604d: mov    DWORD PTR [rbp-0x74],r12d
0x00476051: mov    r9,QWORD PTR [rsp+0x70]
0x00476056: mov    r14d,DWORD PTR [rsp+0x64]
0x0047605b: add    r14d,0x6
0x0047605f: mov    eax,DWORD PTR [rsp+0x60]
0x00476063: add    eax,0xffffffe2
0x00476066: mov    ebx,DWORD PTR [rsp+0x68]
0x0047606a: add    ebx,0x4
0x0047606d: mov    DWORD PTR [rsp+0x60],ebx
0x00476071: mov    ecx,DWORD PTR [rbp-0x7c]
0x00476074: add    ecx,0xfffffffe
0x00476077: mov    DWORD PTR [rsp+0x64],ecx
0x0047607b: mov    r8d,ecx
0x0047607e: sub    r8d,ebx
0x00476081: inc    r8d
0x00476084: mov    DWORD PTR [rbp-0x40],r8d
0x00476088: lea    edi,[rax-0x2]
0x0047608b: cmp    r12d,r8d
0x0047608e: cmovle edi,eax
0x00476091: mov    DWORD PTR [rbp-0x68],edi
0x00476094: mov    eax,DWORD PTR [r9+0x2c8]
0x0047609b: mov    ecx,r12d
0x0047609e: sub    ecx,r8d
0x004760a1: cmp    eax,ecx
0x004760a3: cmovle ecx,eax
0x004760a6: xor    r10d,r10d
0x004760a9: mov    eax,r10d
0x004760ac: test   ecx,ecx
0x004760ae: cmovns eax,ecx
0x004760b1: mov    r13d,ebx
0x004760b4: sub    r13d,eax
0x004760b7: mov    DWORD PTR [rbp-0x70],r13d
0x004760bb: mov    rax,QWORD PTR [r9+0x320]
0x004760c2: sub    rax,QWORD PTR [r9+0x318]
0x004760c9: sar    rax,0x3
0x004760cd: mov    QWORD PTR [rbp-0x48],rax
0x004760d1: mov    r15d,r10d
0x004760d4: mov    DWORD PTR [rsp+0x68],r10d
0x004760d9: test   eax,eax
0x004760db: jle    0x140476517
0x004760e1: mov    ecx,r10d
0x004760e4: mov    QWORD PTR [rbp-0x60],rcx
0x004760e8: cdqe
0x004760ea: mov    QWORD PTR [rbp-0x30],rax
0x004760ee: xchg   ax,ax
0x004760f0: mov    rax,QWORD PTR [r9+0x318]
0x004760f7: mov    r12,QWORD PTR [rax+rcx*8]
0x004760fb: mov    QWORD PTR [rbp-0x50],r12
0x004760ff: mov    rcx,r12
0x00476102: call   0x1400d17d0
0x00476107: lea    ecx,[r13+0x4]
0x0047610b: mov    DWORD PTR [rsp+0x7c],ecx
0x0047610f: mov    rdx,QWORD PTR [rsp+0x70]
0x00476114: cmp    r15d,DWORD PTR [rdx+0x294]
0x0047611b: jne    0x14047613d
0x0047611d: mov    rax,QWORD PTR [r12+0x80]
0x00476125: sub    rax,QWORD PTR [r12+0x78]
0x0047612a: sar    rax,0x3
0x0047612e: cmp    rax,0x3
0x00476132: jb     0x14047613d
0x00476134: add    ecx,0xfffffffd
0x00476137: add    ecx,eax
0x00476139: mov    DWORD PTR [rsp+0x7c],ecx
0x0047613d: mov    r15d,r13d
0x00476140: cmp    r13d,ecx
0x00476143: jg     0x140476230
0x00476149: movsxd r12,r13d
0x0047614c: nop    DWORD PTR [rax+0x0]
0x00476150: cmp    r15d,ebx
0x00476153: jl     0x140476218
0x00476159: cmp    r15d,DWORD PTR [rsp+0x64]
0x0047615e: jg     0x140476218
0x00476164: mov    ebx,r14d
0x00476167: cmp    r14d,edi
0x0047616a: jg     0x140476214
0x00476170: mov    DWORD PTR [rip+0x21ce1ee],ebx        # 0x142644364
0x00476176: mov    DWORD PTR [rip+0x21ce1eb],r15d        # 0x142644368
0x0047617d: xor    r8d,r8d
0x00476180: xor    edx,edx
0x00476182: mov    rcx,rsi
0x00476185: call   0x1400bb120
0x0047618a: cmp    r15d,r13d
0x0047618d: jne    0x1404761b3
0x0047618f: cmp    ebx,r14d
0x00476192: jne    0x14047619c
0x00476194: mov    edx,DWORD PTR [rip+0x21cfaee]        # 0x142645c88
0x0047619a: jmp    0x1404761fe
0x0047619c: mov    rcx,rsi
0x0047619f: cmp    ebx,edi
0x004761a1: jne    0x1404761ab
0x004761a3: mov    edx,DWORD PTR [rip+0x21cfaf7]        # 0x142645ca0
0x004761a9: jmp    0x140476201
0x004761ab: mov    edx,DWORD PTR [rip+0x21cfae3]        # 0x142645c94
0x004761b1: jmp    0x140476201
0x004761b3: movsxd rcx,DWORD PTR [rsp+0x7c]
0x004761b8: cmp    r12,rcx
0x004761bb: jne    0x1404761e1
0x004761bd: cmp    ebx,r14d
0x004761c0: jne    0x1404761ca
0x004761c2: mov    edx,DWORD PTR [rip+0x21cfac8]        # 0x142645c90
0x004761c8: jmp    0x1404761fe
0x004761ca: mov    rcx,rsi
0x004761cd: cmp    ebx,edi
0x004761cf: jne    0x1404761d9
0x004761d1: mov    edx,DWORD PTR [rip+0x21cfad1]        # 0x142645ca8
0x004761d7: jmp    0x140476201
0x004761d9: mov    edx,DWORD PTR [rip+0x21cfabd]        # 0x142645c9c
0x004761df: jmp    0x140476201
0x004761e1: cmp    ebx,r14d
0x004761e4: jne    0x1404761ee
0x004761e6: mov    edx,DWORD PTR [rip+0x21cfaa0]        # 0x142645c8c
0x004761ec: jmp    0x1404761fe
0x004761ee: cmp    ebx,edi
0x004761f0: mov    edx,DWORD PTR [rip+0x21cfaae]        # 0x142645ca4
0x004761f6: je     0x1404761fe
0x004761f8: mov    edx,DWORD PTR [rip+0x21cfa9a]        # 0x142645c98
0x004761fe: mov    rcx,rsi
0x00476201: call   0x140ad7b10
0x00476206: inc    ebx
0x00476208: cmp    ebx,edi
0x0047620a: jle    0x140476170
0x00476210: mov    ecx,DWORD PTR [rsp+0x7c]
0x00476214: mov    ebx,DWORD PTR [rsp+0x60]
0x00476218: inc    r15d
0x0047621b: inc    r12
0x0047621e: cmp    r15d,ecx
0x00476221: jle    0x140476150
0x00476227: mov    r12,QWORD PTR [rbp-0x50]
0x0047622b: mov    rdx,QWORD PTR [rsp+0x70]
0x00476230: mov    ecx,DWORD PTR [rsp+0x64]
0x00476234: cmp    r13d,ebx
0x00476237: jl     0x1404763fd
0x0047623d: cmp    r13d,ecx
0x00476240: jg     0x1404763fd
0x00476246: mov    ebx,DWORD PTR [rsp+0x68]
0x0047624a: cmp    ebx,DWORD PTR [rdx+0x294]
0x00476250: mov    DWORD PTR [rip+0x21ce112],0x1010006        # 0x14264436c
0x0047625a: je     0x140476266
0x0047625c: mov    DWORD PTR [rip+0x21ce106],0x1000006        # 0x14264436c
0x00476266: lea    eax,[r14+0x2]
0x0047626a: mov    DWORD PTR [rip+0x21ce0f4],eax        # 0x142644364
0x00476270: mov    DWORD PTR [rip+0x21ce0f1],r13d        # 0x142644368
0x00476277: lea    rdx,[r12+0x58]
0x0047627c: xor    r9d,r9d
0x0047627f: mov    rcx,rsi
0x00476282: call   0x140ad69a0
0x00476287: mov    rax,QWORD PTR [rsp+0x70]
0x0047628c: cmp    ebx,DWORD PTR [rax+0x294]
0x00476292: mov    DWORD PTR [rip+0x21ce0d0],0x1010004        # 0x14264436c
0x0047629c: je     0x1404762a8
0x0047629e: mov    DWORD PTR [rip+0x21ce0c4],0x1000004        # 0x14264436c
0x004762a8: xorps  xmm0,xmm0
0x004762ab: movups XMMWORD PTR [rbp+0x10],xmm0
0x004762af: xor    r15d,r15d
0x004762b2: mov    QWORD PTR [rbp+0x20],r15
0x004762b6: mov    QWORD PTR [rbp+0x28],0xf
0x004762be: mov    BYTE PTR [rbp+0x10],r15b
0x004762c2: movups XMMWORD PTR [rbp-0x10],xmm0
0x004762c6: mov    QWORD PTR [rbp+0x0],r15
0x004762ca: mov    QWORD PTR [rbp+0x8],0xf
0x004762d2: mov    BYTE PTR [rbp-0x10],r15b
0x004762d6: lea    ecx,[rbx+0x1]
0x004762d9: lea    rdx,[rbp-0x10]
0x004762dd: call   0x140529db0
0x004762e2: lea    rdx,[rbp-0x10]
0x004762e6: cmp    QWORD PTR [rbp+0x8],0xf
0x004762eb: cmova  rdx,QWORD PTR [rbp-0x10]
0x004762f0: mov    r8,QWORD PTR [rbp+0x0]
0x004762f4: lea    rcx,[rbp+0x10]
0x004762f8: call   0x14006f9a0
0x004762fd: nop
0x004762fe: mov    rdx,QWORD PTR [rbp+0x8]
0x00476302: cmp    rdx,0xf
0x00476306: jbe    0x140476339
0x00476308: inc    rdx
0x0047630b: mov    rcx,QWORD PTR [rbp-0x10]
0x0047630f: mov    rax,rcx
0x00476312: cmp    rdx,0x1000
0x00476319: jb     0x140476334
0x0047631b: add    rdx,0x27
0x0047631f: mov    rcx,QWORD PTR [rcx-0x8]
0x00476323: sub    rax,rcx
0x00476326: add    rax,0xfffffffffffffff8
0x0047632a: cmp    rax,0x1f
0x0047632e: ja     0x140476505
0x00476334: call   0x1415345f0
0x00476339: mov    r8d,0x1
0x0047633f: lea    rdx,[rip+0x1170186]        # 0x1415e64cc ; literal="/"
0x00476346: lea    rcx,[rbp+0x10]
0x0047634a: call   0x14006f9a0
0x0047634f: xorps  xmm0,xmm0
0x00476352: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476356: mov    QWORD PTR [rbp+0x0],r15
0x0047635a: mov    QWORD PTR [rbp+0x8],0xf
0x00476362: mov    BYTE PTR [rbp-0x10],0x0
0x00476366: lea    rdx,[rbp-0x10]
0x0047636a: mov    ecx,DWORD PTR [rbp-0x48]
0x0047636d: call   0x140529db0
0x00476372: lea    rdx,[rbp-0x10]
0x00476376: cmp    QWORD PTR [rbp+0x8],0xf
0x0047637b: cmova  rdx,QWORD PTR [rbp-0x10]
0x00476380: mov    r8,QWORD PTR [rbp+0x0]
0x00476384: lea    rcx,[rbp+0x10]
0x00476388: call   0x14006f9a0
0x0047638d: nop
0x0047638e: mov    rdx,QWORD PTR [rbp+0x8]
0x00476392: cmp    rdx,0xf
0x00476396: jbe    0x1404763c9
0x00476398: inc    rdx
0x0047639b: mov    rcx,QWORD PTR [rbp-0x10]
0x0047639f: mov    rax,rcx
0x004763a2: cmp    rdx,0x1000
0x004763a9: jb     0x1404763c4
0x004763ab: add    rdx,0x27
0x004763af: mov    rcx,QWORD PTR [rcx-0x8]
0x004763b3: sub    rax,rcx
0x004763b6: add    rax,0xfffffffffffffff8
0x004763ba: cmp    rax,0x1f
0x004763be: ja     0x140476505
0x004763c4: call   0x1415345f0
0x004763c9: mov    eax,edi
0x004763cb: sub    eax,DWORD PTR [rbp+0x20]
0x004763ce: sub    eax,0x2
0x004763d1: mov    DWORD PTR [rip+0x21cdf8d],eax        # 0x142644364
0x004763d7: mov    DWORD PTR [rip+0x21cdf8a],r13d        # 0x142644368
0x004763de: xor    r9d,r9d
0x004763e1: lea    rdx,[rbp+0x10]
0x004763e5: mov    rcx,rsi
0x004763e8: call   0x140ad69a0
0x004763ed: nop
0x004763ee: lea    rcx,[rbp+0x10]
0x004763f2: call   0x14006f7e0
0x004763f7: mov    ecx,DWORD PTR [rsp+0x64]
0x004763fb: jmp    0x140476400
0x004763fd: xor    r15d,r15d
0x00476400: mov    edx,DWORD PTR [rsp+0x68]
0x00476404: mov    r9,QWORD PTR [rsp+0x70]
0x00476409: cmp    edx,DWORD PTR [r9+0x294]
0x00476410: mov    DWORD PTR [rip+0x21cdf52],0x1010007        # 0x14264436c
0x0047641a: je     0x140476426
0x0047641c: mov    DWORD PTR [rip+0x21cdf46],0x1000007        # 0x14264436c
0x00476426: lea    ebx,[r13+0x1]
0x0047642a: mov    rax,QWORD PTR [r12+0x80]
0x00476432: sub    rax,QWORD PTR [r12+0x78]
0x00476437: sar    rax,0x3
0x0047643b: cmp    eax,0x1
0x0047643e: jne    0x140476444
0x00476440: lea    ebx,[r13+0x2]
0x00476444: mov    r8d,0x3
0x0047644a: mov    r12d,r8d
0x0047644d: mov    DWORD PTR [rbp-0x78],r8d
0x00476451: cmp    edx,DWORD PTR [r9+0x294]
0x00476458: jne    0x140476468
0x0047645a: mov    r12d,eax
0x0047645d: cmp    eax,r8d
0x00476460: cmovl  r12d,r8d
0x00476464: mov    DWORD PTR [rbp-0x78],r12d
0x00476468: movsxd r13,r12d
0x0047646b: test   r12d,r12d
0x0047646e: jle    0x1404764d3
0x00476470: cdqe
0x00476472: mov    QWORD PTR [rbp-0x28],rax
0x00476476: mov    rdi,QWORD PTR [rbp-0x50]
0x0047647a: mov    r12d,DWORD PTR [rsp+0x60]
0x0047647f: nop
0x00476480: cmp    r15,rax
0x00476483: jge    0x1404764c3
0x00476485: cmp    ebx,r12d
0x00476488: jl     0x1404764b5
0x0047648a: cmp    ebx,ecx
0x0047648c: jg     0x1404764b5
0x0047648e: lea    eax,[r14+0x2]
0x00476492: mov    DWORD PTR [rip+0x21cdecc],eax        # 0x142644364
0x00476498: mov    DWORD PTR [rip+0x21cdeca],ebx        # 0x142644368
0x0047649e: mov    rdx,QWORD PTR [rdi+0x78]
0x004764a2: xor    r9d,r9d
0x004764a5: mov    rdx,QWORD PTR [rdx+r15*8]
0x004764a9: mov    rcx,rsi
0x004764ac: call   0x140ad69a0
0x004764b1: mov    rax,QWORD PTR [rbp-0x28]
0x004764b5: inc    r15
0x004764b8: inc    ebx
0x004764ba: cmp    r15,r13
0x004764bd: mov    ecx,DWORD PTR [rsp+0x64]
0x004764c1: jl     0x140476480
0x004764c3: mov    edi,DWORD PTR [rbp-0x68]
0x004764c6: mov    r12d,DWORD PTR [rbp-0x78]
0x004764ca: mov    edx,DWORD PTR [rsp+0x68]
0x004764ce: mov    r9,QWORD PTR [rsp+0x70]
0x004764d3: mov    r13d,DWORD PTR [rbp-0x70]
0x004764d7: add    r13d,0x2
0x004764db: add    r13d,r12d
0x004764de: mov    DWORD PTR [rbp-0x70],r13d
0x004764e2: inc    edx
0x004764e4: mov    DWORD PTR [rsp+0x68],edx
0x004764e8: mov    rcx,QWORD PTR [rbp-0x60]
0x004764ec: inc    rcx
0x004764ef: mov    QWORD PTR [rbp-0x60],rcx
0x004764f3: mov    ebx,DWORD PTR [rsp+0x60]
0x004764f7: cmp    rcx,QWORD PTR [rbp-0x30]
0x004764fb: jge    0x14047650c
0x004764fd: mov    r15d,edx
0x00476500: jmp    0x1404760f0
0x00476505: call   QWORD PTR [rip+0x116a595]        # 0x1415e0aa0
0x0047650b: nop
0x0047650c: mov    r8d,DWORD PTR [rbp-0x40]
0x00476510: mov    r12d,DWORD PTR [rbp-0x74]
0x00476514: xor    r10d,r10d
0x00476517: mov    r14,QWORD PTR [rsp+0x70]
0x0047651c: cmp    r12d,r8d
0x0047651f: jle    0x140476db3
0x00476525: lea    ecx,[rbx+0x1]
0x00476528: lea    edx,[rbx-0x2]
0x0047652b: add    edx,r8d
0x0047652e: mov    QWORD PTR [rbp+0x8],0x0
0x00476536: mov    eax,DWORD PTR [r14+0x2c8]
0x0047653d: mov    DWORD PTR [rbp-0x10],eax
0x00476540: mov    DWORD PTR [rbp-0xc],r10d
0x00476544: lea    eax,[r12-0x1]
0x00476549: mov    DWORD PTR [rbp-0x8],eax
0x0047654c: mov    DWORD PTR [rbp+0x0],ecx
0x0047654f: mov    DWORD PTR [rbp+0x4],edx
0x00476552: mov    DWORD PTR [rbp-0x4],r8d
0x00476556: lea    rcx,[rbp-0x10]
0x0047655a: call   0x1400bb340
0x0047655f: xor    eax,eax
0x00476561: mov    DWORD PTR [rsp+0x28],eax
0x00476565: jmp    0x140475356
0x0047656a: lea    r15d,[rbx+0x6]
0x0047656e: mov    DWORD PTR [rbp-0x74],r15d
0x00476572: mov    r14,r10
0x00476575: cmp    QWORD PTR [r10+0x230],0x0
0x0047657d: je     0x14047684a
0x00476583: mov    r13d,DWORD PTR [rsp+0x60]
0x00476588: add    r13d,0xffffffe0
0x0047658c: mov    DWORD PTR [rbp-0x78],r13d
0x00476590: mov    r12d,r13d
0x00476593: sub    r12d,r15d
0x00476596: inc    r12d
0x00476599: cmp    DWORD PTR [r10+0x210],r12d
0x004765a0: je     0x140476723
0x004765a6: add    r14,0x1f8
0x004765ad: mov    rcx,r14
0x004765b0: call   0x1400bb940
0x004765b5: mov    rdi,QWORD PTR [rsp+0x70]
0x004765ba: mov    DWORD PTR [rdi+0x210],r12d
0x004765c1: mov    r8d,r12d
0x004765c4: mov    rdx,QWORD PTR [rdi+0x230]
0x004765cb: mov    rcx,r14
0x004765ce: call   0x1408e4b80
0x004765d3: xor    r15d,r15d
0x004765d6: mov    DWORD PTR [rbp-0x4],r15d
0x004765da: mov    QWORD PTR [rbp+0x0],0xc
0x004765e2: mov    QWORD PTR [rbp+0x8],0xf
0x004765ea: movsd  xmm0,QWORD PTR [rip+0x11c373e]        # 0x141639d30 ; literal="Prepared by "
0x004765f2: movsd  QWORD PTR [rbp-0x10],xmm0
0x004765f7: mov    eax,DWORD PTR [rip+0x11c373b]        # 0x141639d38 ; literal=" by "
0x004765fd: mov    DWORD PTR [rbp-0x8],eax
0x00476600: mov    BYTE PTR [rbp-0x4],r15b
0x00476604: mov    rdx,QWORD PTR [rdi+0x230]
0x0047660b: add    rdx,0x28
0x0047660f: mov    r8,QWORD PTR [rdx+0x10]
0x00476613: cmp    QWORD PTR [rdx+0x18],0xf
0x00476618: jbe    0x14047661d
0x0047661a: mov    rdx,QWORD PTR [rdx]
0x0047661d: lea    rcx,[rbp-0x10]
0x00476621: call   0x14006f9a0
0x00476626: mov    r8d,r12d
0x00476629: lea    rdx,[rbp-0x10]
0x0047662d: mov    rcx,r14
0x00476630: call   0x1408e4b80
0x00476635: mov    ecx,0x20
0x0047663a: call   0x141534600
0x0047663f: mov    rbx,rax
0x00476642: xorps  xmm0,xmm0
0x00476645: movups XMMWORD PTR [rax],xmm0
0x00476648: mov    QWORD PTR [rax+0x10],r15
0x0047664c: mov    QWORD PTR [rax+0x18],0xf
0x00476654: mov    BYTE PTR [rax],0x0
0x00476657: mov    QWORD PTR [rbp-0x48],rax
0x0047665b: xor    r8d,r8d
0x0047665e: lea    rdx,[rip+0x116fe4b]        # 0x1415e64b0
0x00476665: mov    rcx,rax
0x00476668: call   0x14006f860
0x0047666d: mov    rdx,QWORD PTR [r14+0x8]
0x00476671: cmp    rdx,QWORD PTR [r14+0x10]
0x00476675: je     0x140476681
0x00476677: mov    QWORD PTR [rdx],rbx
0x0047667a: add    QWORD PTR [r14+0x8],0x8
0x0047667f: jmp    0x14047668d
0x00476681: lea    r8,[rbp-0x48]
0x00476685: mov    rcx,r14
0x00476688: call   0x1400bacc0
0x0047668d: mov    rdi,QWORD PTR [rdi+0x230]
0x00476694: mov    rbx,QWORD PTR [rdi+0x110]
0x0047669b: mov    rdi,QWORD PTR [rdi+0x118]
0x004766a2: xor    r13d,r13d
0x004766a5: cmp    rbx,rdi
0x004766a8: jae    0x140476716
0x004766aa: mov    ecx,0x20
0x004766af: call   0x141534600
0x004766b4: mov    r15,rax
0x004766b7: xorps  xmm0,xmm0
0x004766ba: movups XMMWORD PTR [rax],xmm0
0x004766bd: mov    QWORD PTR [rax+0x10],r13
0x004766c1: mov    QWORD PTR [rax+0x18],0xf
0x004766c9: mov    BYTE PTR [rax],r13b
0x004766cc: mov    QWORD PTR [rbp-0x48],rax
0x004766d0: xor    r8d,r8d
0x004766d3: lea    rdx,[rip+0x116fdd6]        # 0x1415e64b0
0x004766da: mov    rcx,rax
0x004766dd: call   0x14006f860
0x004766e2: mov    rdx,QWORD PTR [r14+0x8]
0x004766e6: cmp    rdx,QWORD PTR [r14+0x10]
0x004766ea: je     0x1404766f6
0x004766ec: mov    QWORD PTR [rdx],r15
0x004766ef: add    QWORD PTR [r14+0x8],0x8
0x004766f4: jmp    0x140476702
0x004766f6: lea    r8,[rbp-0x48]
0x004766fa: mov    rcx,r14
0x004766fd: call   0x1400bacc0
0x00476702: mov    r8d,r12d
0x00476705: mov    rdx,QWORD PTR [rbx]
0x00476708: mov    rcx,r14
0x0047670b: call   0x1408e4b80
0x00476710: add    rbx,0x8
0x00476714: jmp    0x1404766a5
0x00476716: lea    rcx,[rbp-0x10]
0x0047671a: call   0x14006f7e0
0x0047671f: mov    r13d,DWORD PTR [rbp-0x78]
0x00476723: mov    r8d,DWORD PTR [rsp+0x68]
0x00476728: add    r8d,0x4
0x0047672c: mov    DWORD PTR [rbp-0x40],r8d
0x00476730: mov    r14d,DWORD PTR [rbp-0x7c]
0x00476734: add    r14d,0xfffffffe
0x00476738: sub    r14d,r8d
0x0047673b: inc    r14d
0x0047673e: mov    DWORD PTR [rbp-0x68],r14d
0x00476742: mov    r9,QWORD PTR [rsp+0x70]
0x00476747: mov    r15,QWORD PTR [r9+0x200]
0x0047674e: sub    r15,QWORD PTR [r9+0x1f8]
0x00476755: sar    r15,0x3
0x00476759: mov    QWORD PTR [rbp-0x48],r15
0x0047675d: mov    DWORD PTR [rip+0x21cdc05],0x1010007        # 0x14264436c
0x00476767: mov    edi,r8d
0x0047676a: mov    eax,DWORD PTR [r9+0x240]
0x00476771: mov    edx,r15d
0x00476774: sub    edx,r14d
0x00476777: cmp    eax,edx
0x00476779: cmovle edx,eax
0x0047677c: xor    r10d,r10d
0x0047677f: mov    ecx,r10d
0x00476782: test   edx,edx
0x00476784: cmovns ecx,edx
0x00476787: lea    eax,[rcx+r14*1]
0x0047678b: movsxd rbx,ecx
0x0047678e: movsxd r12,eax
0x00476791: cmp    rbx,r12
0x00476794: jge    0x1404767ea
0x00476796: movsxd r13,r15d
0x00476799: mov    r14d,DWORD PTR [rbp-0x74]
0x0047679d: mov    r15,r9
0x004767a0: cmp    rbx,r13
0x004767a3: jge    0x1404767d2
0x004767a5: mov    DWORD PTR [rip+0x21cdbb8],r14d        # 0x142644364
0x004767ac: mov    DWORD PTR [rip+0x21cdbb6],edi        # 0x142644368
0x004767b2: mov    rdx,QWORD PTR [r15+0x1f8]
0x004767b9: xor    r9d,r9d
0x004767bc: mov    rdx,QWORD PTR [rdx+rbx*8]
0x004767c0: mov    rcx,rsi
0x004767c3: call   0x140ad69a0
0x004767c8: inc    edi
0x004767ca: inc    rbx
0x004767cd: cmp    rbx,r12
0x004767d0: jl     0x1404767a0
0x004767d2: mov    r14d,DWORD PTR [rbp-0x68]
0x004767d6: mov    r15,QWORD PTR [rbp-0x48]
0x004767da: mov    r8d,DWORD PTR [rbp-0x40]
0x004767de: mov    r13d,DWORD PTR [rbp-0x78]
0x004767e2: mov    r9,QWORD PTR [rsp+0x70]
0x004767e7: xor    r10d,r10d
0x004767ea: cmp    r15d,r14d
0x004767ed: jle    0x140476dae
0x004767f3: lea    ecx,[r8+0x1]
0x004767f7: lea    edx,[r8-0x2]
0x004767fb: add    edx,r14d
0x004767fe: mov    QWORD PTR [rbp+0x8],0x0
0x00476806: mov    eax,DWORD PTR [r9+0x240]
0x0047680d: mov    DWORD PTR [rbp-0x10],eax
0x00476810: mov    DWORD PTR [rbp-0xc],r10d
0x00476814: lea    eax,[r15-0x1]
0x00476818: mov    DWORD PTR [rbp-0x8],eax
0x0047681b: mov    DWORD PTR [rbp+0x0],ecx
0x0047681e: mov    DWORD PTR [rbp+0x4],edx
0x00476821: mov    DWORD PTR [rbp-0x4],r14d
0x00476825: lea    rcx,[rbp-0x10]
0x00476829: call   0x1400bb340
0x0047682e: lea    r9d,[r13+0x1]
0x00476832: xor    eax,eax
0x00476834: mov    DWORD PTR [rsp+0x28],eax
0x00476838: mov    r14,QWORD PTR [rsp+0x70]
0x0047683d: movzx  eax,BYTE PTR [r14+0x244]
0x00476845: jmp    0x140475362
0x0047684a: mov    r9,QWORD PTR [r10+0x220]
0x00476851: sub    r9,QWORD PTR [r10+0x218]
0x00476858: sar    r9,0x3
0x0047685c: mov    QWORD PTR [rbp-0x60],r9
0x00476860: mov    r11d,DWORD PTR [rsp+0x68]
0x00476865: add    r11d,0x4
0x00476869: mov    DWORD PTR [rsp+0x64],r11d
0x0047686e: test   r9,r9
0x00476871: je     0x140476cec
0x00476877: mov    r8d,DWORD PTR [rsp+0x60]
0x0047687c: add    r8d,0xffffffe2
0x00476880: mov    ecx,DWORD PTR [rbp-0x7c]
0x00476883: add    ecx,0xfffffffe
0x00476886: sub    ecx,r11d
0x00476889: inc    ecx
0x0047688b: mov    eax,0x55555556
0x00476890: imul   ecx
0x00476892: mov    r10d,edx
0x00476895: shr    r10d,0x1f
0x00476899: add    r10d,edx
0x0047689c: mov    DWORD PTR [rbp-0x7c],r10d
0x004768a0: lea    edi,[r8-0x2]
0x004768a4: cmp    r9d,r10d
0x004768a7: cmovle edi,r8d
0x004768ab: mov    DWORD PTR [rbp-0x78],edi
0x004768ae: mov    eax,DWORD PTR [r14+0x238]
0x004768b5: mov    ecx,r9d
0x004768b8: sub    ecx,r10d
0x004768bb: cmp    eax,ecx
0x004768bd: cmovle ecx,eax
0x004768c0: xor    ebx,ebx
0x004768c2: mov    eax,ebx
0x004768c4: test   ecx,ecx
0x004768c6: cmovns eax,ecx
0x004768c9: mov    DWORD PTR [rsp+0x78],eax
0x004768cd: lea    ecx,[r10+rax*1]
0x004768d1: mov    DWORD PTR [rbp-0x68],ecx
0x004768d4: cmp    eax,ecx
0x004768d6: jge    0x140476c90
0x004768dc: movsxd r14,eax
0x004768df: mov    QWORD PTR [rbp-0x50],r14
0x004768e3: movsxd r13,r15d
0x004768e6: movsxd rax,r9d
0x004768e9: mov    QWORD PTR [rbp-0x48],rax
0x004768ed: lea    r12d,[r11+0x1]
0x004768f1: mov    DWORD PTR [rsp+0x7c],r12d
0x004768f6: movsxd rbx,edi
0x004768f9: cmp    r14,rax
0x004768fc: jge    0x140476c7c
0x00476902: mov    DWORD PTR [rip+0x21cda60],0x1010007        # 0x14264436c
0x0047690c: mov    r14d,r15d
0x0047690f: cmp    r15d,edi
0x00476912: jg     0x140476a21
0x00476918: add    r12d,0x2
0x0047691c: mov    r15,r13
0x0047691f: mov    eax,DWORD PTR [rsp+0x7c]
0x00476923: dec    eax
0x00476925: mov    DWORD PTR [rbp-0x70],eax
0x00476928: nop    DWORD PTR [rax+rax*1+0x0]
0x00476930: mov    ebx,eax
0x00476932: cmp    eax,r12d
0x00476935: jge    0x140476a06
0x0047693b: cmp    r14d,edi
0x0047693e: jne    0x1404769a2
0x00476940: lea    rdi,[rip+0x21cf359]        # 0x142645ca0
0x00476947: nop    WORD PTR [rax+rax*1+0x0]
0x00476950: mov    DWORD PTR [rip+0x21cda0d],r14d        # 0x142644364
0x00476957: mov    DWORD PTR [rip+0x21cda0b],ebx        # 0x142644368
0x0047695d: mov    rcx,rsi
0x00476960: cmp    r15,r13
0x00476963: lea    rdx,[rdi-0x18]
0x00476967: je     0x14047696c
0x00476969: mov    rdx,rdi
0x0047696c: mov    edx,DWORD PTR [rdx]
0x0047696e: call   0x140ad7b10
0x00476973: cmp    DWORD PTR [rip+0x1f50cee],0x0        # 0x1423c7668
0x0047697a: jle    0x140476995
0x0047697c: mov    rax,QWORD PTR [rip+0x1f50cdd]        # 0x1423c7660
0x00476983: test   BYTE PTR [rax],0x1
0x00476986: je     0x140476995
0x00476988: mov    r8b,0x1
0x0047698b: xor    edx,edx
0x0047698d: mov    rcx,rsi
0x00476990: call   0x1400bb120
0x00476995: inc    ebx
0x00476997: add    rdi,0x4
0x0047699b: cmp    ebx,r12d
0x0047699e: jl     0x140476950
0x004769a0: jmp    0x140476a00
0x004769a2: lea    rdi,[rip+0x21cf2eb]        # 0x142645c94
0x004769a9: nop    DWORD PTR [rax+0x0]
0x004769b0: mov    DWORD PTR [rip+0x21cd9ad],r14d        # 0x142644364
0x004769b7: mov    DWORD PTR [rip+0x21cd9ab],ebx        # 0x142644368
0x004769bd: mov    rcx,rsi
0x004769c0: cmp    r15,r13
0x004769c3: lea    rdx,[rdi-0xc]
0x004769c7: je     0x1404769cc
0x004769c9: mov    rdx,rdi
0x004769cc: mov    edx,DWORD PTR [rdx]
0x004769ce: call   0x140ad7b10
0x004769d3: cmp    DWORD PTR [rip+0x1f50c8e],0x0        # 0x1423c7668
0x004769da: jle    0x1404769f5
0x004769dc: mov    rax,QWORD PTR [rip+0x1f50c7d]        # 0x1423c7660
0x004769e3: test   BYTE PTR [rax],0x1
0x004769e6: je     0x1404769f5
0x004769e8: mov    r8b,0x1
0x004769eb: xor    edx,edx
0x004769ed: mov    rcx,rsi
0x004769f0: call   0x1400bb120
0x004769f5: inc    ebx
0x004769f7: add    rdi,0x4
0x004769fb: cmp    ebx,r12d
0x004769fe: jl     0x1404769b0
0x00476a00: mov    eax,DWORD PTR [rbp-0x70]
0x00476a03: mov    edi,DWORD PTR [rbp-0x78]
0x00476a06: inc    r14d
0x00476a09: inc    r15
0x00476a0c: cmp    r14d,edi
0x00476a0f: jle    0x140476930
0x00476a15: mov    r15d,DWORD PTR [rbp-0x74]
0x00476a19: mov    r12d,DWORD PTR [rsp+0x7c]
0x00476a1e: movsxd rbx,edi
0x00476a21: mov    DWORD PTR [rip+0x21cd941],0x1010007        # 0x14264436c
0x00476a2b: lea    eax,[r15+0x2]
0x00476a2f: mov    DWORD PTR [rip+0x21cd92f],eax        # 0x142644364
0x00476a35: mov    DWORD PTR [rip+0x21cd92c],r12d        # 0x142644368
0x00476a3c: mov    rax,QWORD PTR [rsp+0x70]
0x00476a41: mov    rdx,QWORD PTR [rax+0x218]
0x00476a48: mov    r14,QWORD PTR [rbp-0x50]
0x00476a4c: mov    rdx,QWORD PTR [rdx+r14*8]
0x00476a50: lea    rcx,[rbp+0x10]
0x00476a54: call   0x14006f560
0x00476a59: nop
0x00476a5a: mov    eax,edi
0x00476a5c: sub    eax,r15d
0x00476a5f: sub    eax,0x2
0x00476a62: cdqe
0x00476a64: mov    rcx,QWORD PTR [rbp+0x20]
0x00476a68: cmp    rcx,rax
0x00476a6b: jb     0x140476ae4
0x00476a6d: sub    rbx,r13
0x00476a70: sub    rbx,0x3
0x00476a74: js     0x140476aa5
0x00476a76: cmp    rbx,rcx
0x00476a79: ja     0x140476a93
0x00476a7b: mov    QWORD PTR [rbp+0x20],rbx
0x00476a7f: lea    rax,[rbp+0x10]
0x00476a83: cmp    QWORD PTR [rbp+0x28],0xf
0x00476a88: cmova  rax,QWORD PTR [rbp+0x10]
0x00476a8d: mov    BYTE PTR [rax+rbx*1],0x0
0x00476a91: jmp    0x140476aa5
0x00476a93: mov    rdx,rbx
0x00476a96: sub    rdx,rcx
0x00476a99: xor    r8d,r8d
0x00476a9c: lea    rcx,[rbp+0x10]
0x00476aa0: call   0x1400e1240
0x00476aa5: cmp    rbx,0x3
0x00476aa9: jle    0x140476ae4
0x00476aab: lea    rax,[rbp+0x10]
0x00476aaf: cmp    QWORD PTR [rbp+0x28],0xf
0x00476ab4: cmova  rax,QWORD PTR [rbp+0x10]
0x00476ab9: mov    BYTE PTR [rax+rbx*1-0x3],0x2e
0x00476abe: lea    rax,[rbp+0x10]
0x00476ac2: cmp    QWORD PTR [rbp+0x28],0xf
0x00476ac7: cmova  rax,QWORD PTR [rbp+0x10]
0x00476acc: mov    BYTE PTR [rax+rbx*1-0x2],0x2e
0x00476ad1: lea    rax,[rbp+0x10]
0x00476ad5: cmp    QWORD PTR [rbp+0x28],0xf
0x00476ada: cmova  rax,QWORD PTR [rbp+0x10]
0x00476adf: mov    BYTE PTR [rax+rbx*1-0x1],0x2e
0x00476ae4: xor    r9d,r9d
0x00476ae7: lea    rdx,[rbp+0x10]
0x00476aeb: mov    rcx,rsi
0x00476aee: call   0x140ad69a0
0x00476af3: nop
0x00476af4: lea    rcx,[rbp+0x10]
0x00476af8: call   0x14006f7e0
0x00476afd: mov    DWORD PTR [rip+0x21cd865],0x1010001        # 0x14264436c
0x00476b07: lea    eax,[r15+0x3]
0x00476b0b: mov    DWORD PTR [rip+0x21cd853],eax        # 0x142644364
0x00476b11: lea    eax,[r12+0x1]
0x00476b16: mov    DWORD PTR [rip+0x21cd84c],eax        # 0x142644368
0x00476b1c: xorps  xmm0,xmm0
0x00476b1f: movups XMMWORD PTR [rbp+0x10],xmm0
0x00476b23: mov    QWORD PTR [rbp+0x20],0x9
0x00476b2b: mov    QWORD PTR [rbp+0x28],0xf
0x00476b33: movsd  xmm0,QWORD PTR [rip+0x11c2f75]        # 0x141639ab0 ; literal="Officer: "
0x00476b3b: movsd  QWORD PTR [rbp+0x10],xmm0
0x00476b40: movzx  eax,BYTE PTR [rip+0x11c2f71]        # 0x141639ab8 ; literal=" "
0x00476b47: mov    BYTE PTR [rbp+0x18],al
0x00476b4a: mov    BYTE PTR [rbp+0x19],0x0
0x00476b4e: mov    rax,QWORD PTR [rsp+0x70]
0x00476b53: mov    rax,QWORD PTR [rax+0x218]
0x00476b5a: mov    rdx,QWORD PTR [rax+r14*8]
0x00476b5e: add    rdx,0x28
0x00476b62: mov    r8,QWORD PTR [rdx+0x10]
0x00476b66: cmp    QWORD PTR [rdx+0x18],0xf
0x00476b6b: jbe    0x140476b70
0x00476b6d: mov    rdx,QWORD PTR [rdx]
0x00476b70: lea    rcx,[rbp+0x10]
0x00476b74: call   0x14006f9a0
0x00476b79: mov    eax,edi
0x00476b7b: sub    eax,r15d
0x00476b7e: sub    eax,0x3
0x00476b81: cdqe
0x00476b83: mov    rcx,QWORD PTR [rbp+0x20]
0x00476b87: cmp    rcx,rax
0x00476b8a: jb     0x140476c06
0x00476b8c: movsxd rbx,edi
0x00476b8f: sub    rbx,r13
0x00476b92: sub    rbx,0x4
0x00476b96: js     0x140476bc7
0x00476b98: cmp    rbx,rcx
0x00476b9b: ja     0x140476bb5
0x00476b9d: mov    QWORD PTR [rbp+0x20],rbx
0x00476ba1: lea    rax,[rbp+0x10]
0x00476ba5: cmp    QWORD PTR [rbp+0x28],0xf
0x00476baa: cmova  rax,QWORD PTR [rbp+0x10]
0x00476baf: mov    BYTE PTR [rax+rbx*1],0x0
0x00476bb3: jmp    0x140476bc7
0x00476bb5: mov    rdx,rbx
0x00476bb8: sub    rdx,rcx
0x00476bbb: xor    r8d,r8d
0x00476bbe: lea    rcx,[rbp+0x10]
0x00476bc2: call   0x1400e1240
0x00476bc7: cmp    rbx,0x3
0x00476bcb: jle    0x140476c06
0x00476bcd: lea    rax,[rbp+0x10]
0x00476bd1: cmp    QWORD PTR [rbp+0x28],0xf
0x00476bd6: cmova  rax,QWORD PTR [rbp+0x10]
0x00476bdb: mov    BYTE PTR [rax+rbx*1-0x3],0x2e
0x00476be0: lea    rax,[rbp+0x10]
0x00476be4: cmp    QWORD PTR [rbp+0x28],0xf
0x00476be9: cmova  rax,QWORD PTR [rbp+0x10]
0x00476bee: mov    BYTE PTR [rax+rbx*1-0x2],0x2e
0x00476bf3: lea    rax,[rbp+0x10]
0x00476bf7: cmp    QWORD PTR [rbp+0x28],0xf
0x00476bfc: cmova  rax,QWORD PTR [rbp+0x10]
0x00476c01: mov    BYTE PTR [rax+rbx*1-0x1],0x2e
0x00476c06: xor    r9d,r9d
0x00476c09: lea    rdx,[rbp+0x10]
0x00476c0d: mov    rcx,rsi
0x00476c10: call   0x140ad69a0
0x00476c15: nop
0x00476c16: mov    rdx,QWORD PTR [rbp+0x28]
0x00476c1a: cmp    rdx,0xf
0x00476c1e: jbe    0x140476c4d
0x00476c20: inc    rdx
0x00476c23: mov    rcx,QWORD PTR [rbp+0x10]
0x00476c27: mov    rax,rcx
0x00476c2a: cmp    rdx,0x1000
0x00476c31: jb     0x140476c48
0x00476c33: add    rdx,0x27
0x00476c37: mov    rcx,QWORD PTR [rcx-0x8]
0x00476c3b: sub    rax,rcx
0x00476c3e: add    rax,0xfffffffffffffff8
0x00476c42: cmp    rax,0x1f
0x00476c46: ja     0x140476c75
0x00476c48: call   0x1415345f0
0x00476c4d: add    r12d,0x3
0x00476c51: mov    DWORD PTR [rsp+0x7c],r12d
0x00476c56: mov    eax,DWORD PTR [rsp+0x78]
0x00476c5a: inc    eax
0x00476c5c: mov    DWORD PTR [rsp+0x78],eax
0x00476c60: inc    r14
0x00476c63: mov    QWORD PTR [rbp-0x50],r14
0x00476c67: cmp    eax,DWORD PTR [rbp-0x68]
0x00476c6a: jge    0x140476c7c
0x00476c6c: mov    rax,QWORD PTR [rbp-0x48]
0x00476c70: jmp    0x1404768f6
0x00476c75: call   QWORD PTR [rip+0x1169e25]        # 0x1415e0aa0
0x00476c7b: int3
0x00476c7c: xor    ebx,ebx
0x00476c7e: mov    r14,QWORD PTR [rsp+0x70]
0x00476c83: mov    r11d,DWORD PTR [rsp+0x64]
0x00476c88: mov    r10d,DWORD PTR [rbp-0x7c]
0x00476c8c: mov    r9,QWORD PTR [rbp-0x60]
0x00476c90: cmp    r9d,r10d
0x00476c93: jle    0x140476db3
0x00476c99: lea    edx,[r11+0x1]
0x00476c9d: lea    ecx,[r11-0x2]
0x00476ca1: lea    ecx,[rcx+r10*2]
0x00476ca5: add    ecx,r10d
0x00476ca8: mov    QWORD PTR [rbp+0x8],0x0
0x00476cb0: mov    eax,DWORD PTR [r14+0x238]
0x00476cb7: mov    DWORD PTR [rbp-0x10],eax
0x00476cba: mov    DWORD PTR [rbp-0xc],ebx
0x00476cbd: lea    eax,[r9-0x1]
0x00476cc1: mov    DWORD PTR [rbp-0x8],eax
0x00476cc4: mov    DWORD PTR [rbp+0x0],edx
0x00476cc7: mov    DWORD PTR [rbp+0x4],ecx
0x00476cca: mov    DWORD PTR [rbp-0x4],r10d
0x00476cce: lea    rcx,[rbp-0x10]
0x00476cd2: call   0x1400bb340
0x00476cd7: lea    r9d,[rdi+0x1]
0x00476cdb: mov    DWORD PTR [rsp+0x28],ebx
0x00476cdf: movzx  eax,BYTE PTR [r14+0x23c]
0x00476ce7: jmp    0x140475362
0x00476cec: mov    DWORD PTR [rip+0x21cd676],0x1010007        # 0x14264436c
0x00476cf6: mov    DWORD PTR [rip+0x21cd667],r15d        # 0x142644364
0x00476cfd: mov    DWORD PTR [rip+0x21cd664],r11d        # 0x142644368
0x00476d04: xorps  xmm0,xmm0
0x00476d07: movups XMMWORD PTR [rbp-0x10],xmm0
0x00476d0b: mov    ecx,0x20
0x00476d10: call   0x140070760
0x00476d15: mov    QWORD PTR [rbp-0x10],rax
0x00476d19: mov    QWORD PTR [rbp+0x0],0x19
0x00476d21: mov    QWORD PTR [rbp+0x8],0x1f
0x00476d29: movups xmm0,XMMWORD PTR [rip+0x11c2f48]        # 0x141639c78 ; literal="No interrogation reports."
0x00476d30: movups XMMWORD PTR [rax],xmm0
0x00476d33: movsd  xmm0,QWORD PTR [rip+0x11c2f4d]        # 0x141639c88 ; literal=" reports."
0x00476d3b: movsd  QWORD PTR [rax+0x10],xmm0
0x00476d40: movzx  ecx,BYTE PTR [rip+0x11c2f49]        # 0x141639c90 ; literal="."
0x00476d47: mov    BYTE PTR [rax+0x18],cl
0x00476d4a: mov    BYTE PTR [rax+0x19],0x0
0x00476d4e: xor    r9d,r9d
0x00476d51: lea    rdx,[rbp-0x10]
0x00476d55: mov    rcx,rsi
0x00476d58: call   0x140ad69a0
0x00476d5d: nop
0x00476d5e: mov    rdx,QWORD PTR [rbp+0x8]
0x00476d62: cmp    rdx,0xf
0x00476d66: jbe    0x140476db3
0x00476d68: inc    rdx
0x00476d6b: mov    rcx,QWORD PTR [rbp-0x10]
0x00476d6f: mov    rax,rcx
0x00476d72: cmp    rdx,0x1000
0x00476d79: jb     0x140476d97
0x00476d7b: add    rdx,0x27
0x00476d7f: mov    rcx,QWORD PTR [rcx-0x8]
0x00476d83: sub    rax,rcx
0x00476d86: add    rax,0xfffffffffffffff8
0x00476d8a: cmp    rax,0x1f
0x00476d8e: jbe    0x140476d97
0x00476d90: call   QWORD PTR [rip+0x1169d0a]        # 0x1415e0aa0
0x00476d96: int3
0x00476d97: call   0x1415345f0
0x00476d9c: jmp    0x140476db3
0x00476d9e: lea    rcx,[rbp-0x10]
0x00476da2: call   0x14006f7e0
0x00476da7: jmp    0x140476dbc
0x00476da9: mov    r14,r10
0x00476dac: jmp    0x140476db3
0x00476dae: mov    r14,QWORD PTR [rsp+0x70]
0x00476db3: mov    r15d,DWORD PTR [rbp-0x80]
0x00476db7: mov    esi,0xffffffff
0x00476dbc: mov    rcx,r14
0x00476dbf: call   0x14140b110
0x00476dc4: mov    rbx,QWORD PTR [r14+0x160]
0x00476dcb: mov    rdi,QWORD PTR [r14+0x168]
0x00476dd2: cmp    rbx,rdi
0x00476dd5: je     0x140476de9
0x00476dd7: mov    rcx,QWORD PTR [rbx]
0x00476dda: mov    rax,QWORD PTR [rcx]
0x00476ddd: call   QWORD PTR [rax+0x20]
0x00476de0: add    rbx,0x10
0x00476de4: cmp    rbx,rdi
0x00476de7: jne    0x140476dd7
0x00476de9: mov    edx,r15d
0x00476dec: mov    rcx,r14
0x00476def: call   0x14140df20
0x00476df4: mov    rbx,QWORD PTR [r14+0x160]
0x00476dfb: mov    rdi,QWORD PTR [r14+0x168]
0x00476e02: cmp    rbx,rdi
0x00476e05: je     0x140476e32
0x00476e07: nop    WORD PTR [rax+rax*1+0x0]
0x00476e10: mov    rcx,QWORD PTR [rbx]
0x00476e13: movzx  eax,BYTE PTR [rcx+0xa0]
0x00476e1a: and    al,0x3
0x00476e1c: cmp    al,0x3
0x00476e1e: jne    0x140476e29
0x00476e20: mov    rax,QWORD PTR [rcx]
0x00476e23: mov    edx,r15d
0x00476e26: call   QWORD PTR [rax+0x18]
0x00476e29: add    rbx,0x10
0x00476e2d: cmp    rbx,rdi
0x00476e30: jne    0x140476e10
0x00476e32: mov    rcx,QWORD PTR [rbp-0x18]
0x00476e36: test   rcx,rcx
0x00476e39: je     0x140476e67
0x00476e3b: mov    eax,esi
0x00476e3d: lock xadd DWORD PTR [rcx+0x8],eax
0x00476e42: cmp    eax,0x1
0x00476e45: jne    0x140476e67
0x00476e47: mov    rbx,QWORD PTR [rbp-0x18]
0x00476e4b: mov    rax,QWORD PTR [rbx]
0x00476e4e: mov    rcx,rbx
0x00476e51: call   QWORD PTR [rax]
0x00476e53: lock xadd DWORD PTR [rbx+0xc],esi
0x00476e58: cmp    esi,0x1
0x00476e5b: jne    0x140476e67
0x00476e5d: mov    rcx,QWORD PTR [rbp-0x18]
0x00476e61: mov    rax,QWORD PTR [rcx]
0x00476e64: call   QWORD PTR [rax+0x8]
0x00476e67: mov    rcx,QWORD PTR [rbp+0x30]
0x00476e6b: xor    rcx,rsp
0x00476e6e: call   0x1415345d0
0x00476e73: add    rsp,0x148
0x00476e7a: pop    r15
0x00476e7c: pop    r14
0x00476e7e: pop    r13
0x00476e80: pop    r12
0x00476e82: pop    rdi
0x00476e83: pop    rsi
0x00476e84: pop    rbx
0x00476e85: pop    rbp
0x00476e86: ret
