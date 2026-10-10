; reference; PE:6a70a6d9:02711000; lookinfo-producer; RVA 0x4085f0..0x40a1db
0x004085f0: mov    WORD PTR [rsp+0x20],r9w
0x004085f6: mov    WORD PTR [rsp+0x18],r8w
0x004085fc: mov    WORD PTR [rsp+0x10],dx
0x00408601: mov    QWORD PTR [rsp+0x8],rcx
0x00408606: push   rbp
0x00408607: push   rbx
0x00408608: push   r12
0x0040860a: push   r13
0x0040860c: push   r14
0x0040860e: push   r15
0x00408610: lea    rbp,[rsp-0x2f]
0x00408615: sub    rsp,0x88
0x0040861c: lea    r14,[rcx+0x134b90]
0x00408623: movsx  r13d,r8w
0x00408627: mov    r15,rcx
0x0040862a: movzx  r12d,dx
0x0040862e: mov    rcx,r14
0x00408631: call   0x140e85400
0x00408636: xor    ebx,ebx
0x00408638: mov    DWORD PTR [rip+0x1f6c0de],ebx        # 0x14237471c
0x0040863e: call   0x1408bf060
0x00408643: movzx  r9d,WORD PTR [rbp+0x7f]
0x00408648: movzx  r8d,r13w
0x0040864c: movzx  edx,r12w
0x00408650: mov    rcx,r15
0x00408653: call   0x140067f80
0x00408658: test   ax,ax
0x0040865b: je     0x14040a1c9
0x00408661: cmp    DWORD PTR [rip+0x1493c30],0x1        # 0x14189c298
0x00408668: mov    QWORD PTR [rsp+0x80],rsi
0x00408670: mov    QWORD PTR [rsp+0x78],rdi
0x00408675: jne    0x140408c29
0x0040867b: mov    QWORD PTR [rsp+0x38],r14
0x00408680: movzx  r8d,r13w
0x00408684: mov    BYTE PTR [rsp+0x30],0x1
0x00408689: movzx  edx,r12w
0x0040868d: mov    BYTE PTR [rsp+0x28],0x1
0x00408692: mov    BYTE PTR [rsp+0x20],0x1
0x00408697: call   0x140e84bc0
0x0040869c: test   al,al
0x0040869e: jne    0x140408c29
0x004086a4: movzx  r8d,r13w
0x004086a8: lea    rcx,[rip+0x1fc8e41]        # 0x1423d14f0
0x004086af: movzx  edx,r12w
0x004086b3: call   0x14007dc40
0x004086b8: shr    eax,0x3
0x004086bb: not    al
0x004086bd: test   al,0x1
0x004086bf: je     0x14040a1bc
0x004086c5: cmp    QWORD PTR [rip+0x1fdca44],rbx        # 0x1423e5110
0x004086cc: je     0x14040a1bc
0x004086d2: mov    edi,DWORD PTR [rip+0x2241b48]        # 0x14264a220
0x004086d8: lea    r15,[rip+0x2241051]        # 0x142649730
0x004086df: inc    edi
0x004086e1: mov    eax,0x51eb851f
0x004086e6: imul   edi
0x004086e8: mov    esi,0x64
0x004086ed: sar    edx,0x5
0x004086f0: mov    eax,edx
0x004086f2: shr    eax,0x1f
0x004086f5: add    edx,eax
0x004086f7: imul   eax,edx,0x64
0x004086fa: sub    edi,eax
0x004086fc: nop    DWORD PTR [rax+0x0]
0x00408700: movsxd rax,edi
0x00408703: imul   rbx,rax,0x1c
0x00408707: add    rbx,r15
0x0040870a: cmp    DWORD PTR [rbx],0xffffffff
0x0040870d: je     0x14040877b
0x0040870f: test   BYTE PTR [rbx+0x18],0x2
0x00408713: je     0x14040877b
0x00408715: cmp    DWORD PTR [rbx+0x14],0x0
0x00408719: jle    0x14040877b
0x0040871b: cmp    WORD PTR [rbx+0xa],r12w
0x00408720: jne    0x14040877b
0x00408722: cmp    WORD PTR [rbx+0xc],r13w
0x00408727: jne    0x14040877b
0x00408729: cmp    WORD PTR [rbx+0xe],r9w
0x0040872e: jne    0x14040877b
0x00408730: mov    ecx,0x50
0x00408735: call   0x141539690
0x0040873a: mov    rcx,rax
0x0040873d: call   0x14040a220
0x00408742: mov    rcx,rax
0x00408745: mov    QWORD PTR [rbp+0x67],rax
0x00408749: mov    edx,0xd
0x0040874e: call   0x1403d6860
0x00408753: mov    r9d,DWORD PTR [rbx]
0x00408756: mov    DWORD PTR [rcx+0x4],r9d
0x0040875a: mov    eax,DWORD PTR [rbx+0x14]
0x0040875d: mov    DWORD PTR [rcx+0xc],eax
0x00408760: movzx  eax,WORD PTR [rbx+0x10]
0x00408764: mov    WORD PTR [rcx+0x8],ax
0x00408768: call   0x140406860
0x0040876d: lea    rdx,[rbp+0x67]
0x00408771: call   0x140420e10
0x00408776: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040877b: inc    edi
0x0040877d: mov    eax,0x51eb851f
0x00408782: imul   edi
0x00408784: sar    edx,0x5
0x00408787: mov    eax,edx
0x00408789: shr    eax,0x1f
0x0040878c: add    edx,eax
0x0040878e: imul   eax,edx,0x64
0x00408791: sub    edi,eax
0x00408793: sub    rsi,0x1
0x00408797: jne    0x140408700
0x0040879d: mov    QWORD PTR [rsp+0x38],r14
0x004087a2: movzx  r8d,r13w
0x004087a6: mov    BYTE PTR [rsp+0x30],sil
0x004087ab: movzx  edx,r12w
0x004087af: mov    BYTE PTR [rsp+0x28],0x1
0x004087b4: mov    BYTE PTR [rsp+0x20],sil
0x004087b9: call   0x140e84bc0
0x004087be: test   al,al
0x004087c0: je     0x14040a1bc
0x004087c6: mov    rax,QWORD PTR [rip+0x1fdc903]        # 0x1423e50d0
0x004087cd: xor    r15d,r15d
0x004087d0: sub    rax,QWORD PTR [rip+0x1fdc8f1]        # 0x1423e50c8
0x004087d7: mov    r14d,r15d
0x004087da: sar    rax,0x3
0x004087de: mov    esi,0x2
0x004087e3: movsxd rdi,eax
0x004087e6: mov    QWORD PTR [rbp+0x7],rdi
0x004087ea: mov    QWORD PTR [rbp-0x1],r15
0x004087ee: test   eax,eax
0x004087f0: jle    0x1404089d5
0x004087f6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00408800: mov    rax,QWORD PTR [rip+0x1fdc8c1]        # 0x1423e50c8
0x00408807: mov    rbx,QWORD PTR [rax+r14*8]
0x0040880b: test   DWORD PTR [rbx+0x110],0x2000002
0x00408815: jne    0x1404089b8
0x0040881b: mov    rcx,QWORD PTR [rip+0x1fdc8ee]        # 0x1423e5110
0x00408822: lea    rax,[rbp-0x19]
0x00408826: mov    QWORD PTR [rsp+0x28],rax
0x0040882b: lea    r9,[rbp-0x11]
0x0040882f: lea    rax,[rbp-0x15]
0x00408833: mov    rdx,rbx
0x00408836: lea    r8,[rbp+0x67]
0x0040883a: mov    QWORD PTR [rsp+0x20],rax
0x0040883f: call   0x1413ea660
0x00408844: test   al,al
0x00408846: je     0x1404089b3
0x0040884c: mov    eax,DWORD PTR [rbx+0x118]
0x00408852: shr    eax,0xa
0x00408855: test   al,0x1
0x00408857: jne    0x1404089b3
0x0040885d: test   DWORD PTR [rbx+0x110],0x200
0x00408867: je     0x140408871
0x00408869: mov    rcx,rbx
0x0040886c: call   0x14134f2e0
0x00408871: test   DWORD PTR [rbx+0x114],0x4000
0x0040887b: movzx  r15d,WORD PTR [rbp-0x19]
0x00408880: movzx  r12d,WORD PTR [rbp-0x15]
0x00408885: movzx  r13d,WORD PTR [rbp-0x11]
0x0040888a: je     0x140408943
0x00408890: movzx  r14d,BYTE PTR [rbp+0x67]
0x00408895: lea    rdi,[rbx+0x808]
0x0040889c: nop    DWORD PTR [rax+0x0]
0x004088a0: movsx  eax,WORD PTR [rbx+0xa8]
0x004088a7: movsx  r8d,WORD PTR [rdi-0x2]
0x004088ac: movsx  edx,WORD PTR [rdi]
0x004088af: mov    ecx,r8d
0x004088b2: sub    ecx,eax
0x004088b4: mov    eax,ecx
0x004088b6: neg    eax
0x004088b8: cmovs  eax,ecx
0x004088bb: cmp    eax,0x1
0x004088be: jg     0x140408928
0x004088c0: movsx  eax,WORD PTR [rbx+0xaa]
0x004088c7: mov    ecx,edx
0x004088c9: sub    ecx,eax
0x004088cb: mov    eax,ecx
0x004088cd: neg    eax
0x004088cf: cmovs  eax,ecx
0x004088d2: cmp    eax,0x1
0x004088d5: jg     0x140408928
0x004088d7: cmp    r8w,WORD PTR [rbp+0x6f]
0x004088dc: jne    0x140408928
0x004088de: cmp    dx,WORD PTR [rbp+0x77]
0x004088e2: jne    0x140408928
0x004088e4: mov    ecx,0x50
0x004088e9: call   0x141539690
0x004088ee: mov    rcx,rax
0x004088f1: call   0x14040a220
0x004088f6: mov    rcx,rax
0x004088f9: mov    QWORD PTR [rbp-0x9],rax
0x004088fd: mov    edx,0xf
0x00408902: call   0x1403d6860
0x00408907: mov    BYTE PTR [rcx+0x4],r14b
0x0040890b: mov    WORD PTR [rcx+0x6],r13w
0x00408910: mov    WORD PTR [rcx+0x8],r12w
0x00408915: mov    WORD PTR [rcx+0xa],r15w
0x0040891a: call   0x140406860
0x0040891f: lea    rdx,[rbp-0x9]
0x00408923: call   0x140420e10
0x00408928: add    rdi,0x6
0x0040892c: sub    rsi,0x1
0x00408930: jne    0x1404088a0
0x00408936: mov    r14,QWORD PTR [rbp-0x1]
0x0040893a: mov    esi,0x2
0x0040893f: mov    rdi,QWORD PTR [rbp+0x7]
0x00408943: movzx  eax,WORD PTR [rbp+0x6f]
0x00408947: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040894c: cmp    WORD PTR [rbx+0xa8],ax
0x00408953: jne    0x1404089b8
0x00408955: movzx  eax,WORD PTR [rbp+0x77]
0x00408959: cmp    WORD PTR [rbx+0xaa],ax
0x00408960: jne    0x1404089b8
0x00408962: cmp    WORD PTR [rbx+0xac],r9w
0x0040896a: jne    0x1404089b8
0x0040896c: mov    ecx,0x50
0x00408971: call   0x141539690
0x00408976: mov    rcx,rax
0x00408979: call   0x14040a220
0x0040897e: mov    rcx,rax
0x00408981: mov    QWORD PTR [rbp-0x1],rax
0x00408985: mov    edx,0xf
0x0040898a: call   0x1403d6860
0x0040898f: movzx  eax,BYTE PTR [rbp+0x67]
0x00408993: mov    BYTE PTR [rcx+0x4],al
0x00408996: mov    WORD PTR [rcx+0x6],r13w
0x0040899b: mov    WORD PTR [rcx+0x8],r12w
0x004089a0: mov    WORD PTR [rcx+0xa],r15w
0x004089a5: call   0x140406860
0x004089aa: lea    rdx,[rbp-0x1]
0x004089ae: call   0x140420e10
0x004089b3: movzx  r9d,WORD PTR [rbp+0x7f]
0x004089b8: inc    r14
0x004089bb: mov    QWORD PTR [rbp-0x1],r14
0x004089bf: cmp    r14,rdi
0x004089c2: jl     0x140408800
0x004089c8: movzx  r13d,WORD PTR [rbp+0x77]
0x004089cd: xor    r15d,r15d
0x004089d0: movzx  r12d,WORD PTR [rbp+0x6f]
0x004089d5: movzx  r8d,r13w
0x004089d9: lea    rcx,[rip+0x1fc8b10]        # 0x1423d14f0
0x004089e0: movzx  edx,r12w
0x004089e4: call   0x14007dc40
0x004089e9: mov    edi,eax
0x004089eb: mov    esi,0xffff8ad0
0x004089f0: test   al,al
0x004089f2: jns    0x140408a5c
0x004089f4: mov    ecx,0x50
0x004089f9: call   0x141539690
0x004089fe: xorps  xmm0,xmm0
0x00408a01: mov    QWORD PTR [rbp+0x67],rax
0x00408a05: mov    rcx,rax
0x00408a08: mov    rbx,rax
0x00408a0b: movups XMMWORD PTR [rax+0x28],xmm0
0x00408a0f: mov    QWORD PTR [rax+0x38],r15
0x00408a13: mov    QWORD PTR [rax+0x40],0xf
0x00408a1b: mov    BYTE PTR [rax+0x28],0x0
0x00408a1f: mov    QWORD PTR [rax],0xe
0x00408a26: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00408a2d: mov    WORD PTR [rax+0x20],si
0x00408a31: call   0x140406860
0x00408a36: mov    rdx,QWORD PTR [rip+0x22931eb]        # 0x14269bc28
0x00408a3d: cmp    rdx,QWORD PTR [rip+0x22931ec]        # 0x14269bc30
0x00408a44: je     0x140408a53
0x00408a46: mov    QWORD PTR [rdx],rbx
0x00408a49: add    QWORD PTR [rip+0x22931d7],0x8        # 0x14269bc28
0x00408a51: jmp    0x140408a5c
0x00408a53: lea    r8,[rbp+0x67]
0x00408a57: call   0x140420e40
0x00408a5c: test   dil,0x40
0x00408a60: je     0x140408ad0
0x00408a62: mov    ecx,0x50
0x00408a67: call   0x141539690
0x00408a6c: xorps  xmm0,xmm0
0x00408a6f: mov    QWORD PTR [rbp+0x67],rax
0x00408a73: mov    rcx,rax
0x00408a76: mov    rbx,rax
0x00408a79: movups XMMWORD PTR [rax+0x28],xmm0
0x00408a7d: mov    QWORD PTR [rax+0x38],r15
0x00408a81: mov    QWORD PTR [rax+0x40],0xf
0x00408a89: mov    BYTE PTR [rax+0x28],0x0
0x00408a8d: mov    DWORD PTR [rax],0xe
0x00408a93: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00408a9a: mov    WORD PTR [rax+0x20],si
0x00408a9e: mov    DWORD PTR [rax+0x4],0x1
0x00408aa5: call   0x140406860
0x00408aaa: mov    rdx,QWORD PTR [rip+0x2293177]        # 0x14269bc28
0x00408ab1: cmp    rdx,QWORD PTR [rip+0x2293178]        # 0x14269bc30
0x00408ab8: je     0x140408ac7
0x00408aba: mov    QWORD PTR [rdx],rbx
0x00408abd: add    QWORD PTR [rip+0x2293163],0x8        # 0x14269bc28
0x00408ac5: jmp    0x140408ad0
0x00408ac7: lea    r8,[rbp+0x67]
0x00408acb: call   0x140420e40
0x00408ad0: test   dil,0x20
0x00408ad4: je     0x140408b44
0x00408ad6: mov    ecx,0x50
0x00408adb: call   0x141539690
0x00408ae0: xorps  xmm0,xmm0
0x00408ae3: mov    QWORD PTR [rbp+0x67],rax
0x00408ae7: mov    rcx,rax
0x00408aea: mov    rbx,rax
0x00408aed: movups XMMWORD PTR [rax+0x28],xmm0
0x00408af1: mov    QWORD PTR [rax+0x38],r15
0x00408af5: mov    QWORD PTR [rax+0x40],0xf
0x00408afd: mov    BYTE PTR [rax+0x28],0x0
0x00408b01: mov    DWORD PTR [rax],0xe
0x00408b07: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00408b0e: mov    WORD PTR [rax+0x20],si
0x00408b12: mov    DWORD PTR [rax+0x4],0x2
0x00408b19: call   0x140406860
0x00408b1e: mov    rdx,QWORD PTR [rip+0x2293103]        # 0x14269bc28
0x00408b25: cmp    rdx,QWORD PTR [rip+0x2293104]        # 0x14269bc30
0x00408b2c: je     0x140408b3b
0x00408b2e: mov    QWORD PTR [rdx],rbx
0x00408b31: add    QWORD PTR [rip+0x22930ef],0x8        # 0x14269bc28
0x00408b39: jmp    0x140408b44
0x00408b3b: lea    r8,[rbp+0x67]
0x00408b3f: call   0x140420e40
0x00408b44: movzx  r9d,WORD PTR [rbp+0x7f]
0x00408b49: lea    rcx,[rip+0x1fc89a0]        # 0x1423d14f0
0x00408b50: movzx  r8d,r13w
0x00408b54: movzx  edx,r12w
0x00408b58: call   0x1403d6730
0x00408b5d: cmp    al,0xdb
0x00408b5f: jne    0x140408b68
0x00408b61: mov    edi,0x3
0x00408b66: jmp    0x140408bb7
0x00408b68: cmp    al,0x3c
0x00408b6a: jne    0x140408b73
0x00408b6c: mov    edi,0x4
0x00408b71: jmp    0x140408bb7
0x00408b73: cmp    al,0x3e
0x00408b75: jne    0x140408b7e
0x00408b77: mov    edi,0x5
0x00408b7c: jmp    0x140408bb7
0x00408b7e: cmp    al,0x58
0x00408b80: jne    0x140408b89
0x00408b82: mov    edi,0x6
0x00408b87: jmp    0x140408bb7
0x00408b89: cmp    al,0x1e
0x00408b8b: jne    0x140408b94
0x00408b8d: mov    edi,0x7
0x00408b92: jmp    0x140408bb7
0x00408b94: cmp    al,0x1f
0x00408b96: jne    0x140408b9f
0x00408b98: mov    edi,0x8
0x00408b9d: jmp    0x140408bb7
0x00408b9f: cmp    al,0x2e
0x00408ba1: jne    0x140408baa
0x00408ba3: mov    edi,0x9
0x00408ba8: jmp    0x140408bb7
0x00408baa: cmp    al,0x20
0x00408bac: jne    0x14040a1bc
0x00408bb2: mov    edi,0xa
0x00408bb7: mov    ecx,0x50
0x00408bbc: call   0x141539690
0x00408bc1: xorps  xmm0,xmm0
0x00408bc4: mov    QWORD PTR [rbp+0x67],rax
0x00408bc8: mov    rcx,rax
0x00408bcb: mov    rbx,rax
0x00408bce: movups XMMWORD PTR [rax+0x28],xmm0
0x00408bd2: mov    QWORD PTR [rax+0x38],r15
0x00408bd6: mov    QWORD PTR [rax+0x40],0xf
0x00408bde: mov    BYTE PTR [rax+0x28],0x0
0x00408be2: mov    DWORD PTR [rax],0xe
0x00408be8: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00408bef: mov    WORD PTR [rax+0x20],si
0x00408bf3: mov    DWORD PTR [rax+0x4],edi
0x00408bf6: call   0x140406860
0x00408bfb: mov    rdx,QWORD PTR [rip+0x2293026]        # 0x14269bc28
0x00408c02: cmp    rdx,QWORD PTR [rip+0x2293027]        # 0x14269bc30
0x00408c09: je     0x140408c1b
0x00408c0b: mov    QWORD PTR [rdx],rbx
0x00408c0e: add    QWORD PTR [rip+0x2293012],0x8        # 0x14269bc28
0x00408c16: jmp    0x14040a1bc
0x00408c1b: lea    r8,[rbp+0x67]
0x00408c1f: call   0x140420e40
0x00408c24: jmp    0x14040a1bc
0x00408c29: movzx  r8d,r13w
0x00408c2d: movzx  edx,r12w
0x00408c31: mov    rcx,r15
0x00408c34: call   0x14007dc40
0x00408c39: bt     eax,0x9
0x00408c3d: jb     0x14040a1bc
0x00408c43: mov    rdx,QWORD PTR [r15+0x13bd8]
0x00408c4a: mov    esi,ebx
0x00408c4c: mov    rax,QWORD PTR [r15+0x13be0]
0x00408c53: sub    rax,rdx
0x00408c56: sar    rax,0x3
0x00408c5a: test   rax,rax
0x00408c5d: je     0x140408d68
0x00408c63: movzx  r14d,WORD PTR [rbp+0x7f]
0x00408c68: mov    rdi,rbx
0x00408c6b: nop    DWORD PTR [rax+rax*1+0x0]
0x00408c70: mov    rax,QWORD PTR [rdi+rdx*1]
0x00408c74: test   BYTE PTR [rax+0x110],0x2
0x00408c7b: jne    0x140408d3c
0x00408c81: test   DWORD PTR [rax+0x110],0x2000000
0x00408c8b: mov    rcx,rax
0x00408c8e: jne    0x140408d3c
0x00408c94: call   0x14137bd50
0x00408c99: test   al,al
0x00408c9b: jne    0x140408d3c
0x00408ca1: mov    rax,QWORD PTR [r15+0x13bd8]
0x00408ca8: movzx  r9d,r14w
0x00408cac: movzx  r8d,r13w
0x00408cb0: movzx  edx,r12w
0x00408cb4: mov    rcx,QWORD PTR [rdi+rax*1]
0x00408cb8: call   0x14014da20
0x00408cbd: test   al,al
0x00408cbf: je     0x140408d3c
0x00408cc1: mov    ecx,0x50
0x00408cc6: call   0x141539690
0x00408ccb: xorps  xmm0,xmm0
0x00408cce: mov    QWORD PTR [rbp-0x9],rax
0x00408cd2: mov    edx,0x2
0x00408cd7: mov    rcx,rax
0x00408cda: mov    rbx,rax
0x00408cdd: movups XMMWORD PTR [rax+0x28],xmm0
0x00408ce1: mov    QWORD PTR [rax+0x38],0x0
0x00408ce9: mov    QWORD PTR [rax+0x40],0xf
0x00408cf1: mov    BYTE PTR [rax+0x28],0x0
0x00408cf5: call   0x1403d6860
0x00408cfa: mov    rcx,QWORD PTR [r15+0x13bd8]
0x00408d01: mov    rdx,QWORD PTR [rdi+rcx*1]
0x00408d05: mov    ecx,DWORD PTR [rdx+0x130]
0x00408d0b: mov    DWORD PTR [rbx+0x4],ecx
0x00408d0e: mov    rcx,rbx
0x00408d11: call   0x140406860
0x00408d16: mov    rdx,QWORD PTR [rip+0x2292f0b]        # 0x14269bc28
0x00408d1d: cmp    rdx,QWORD PTR [rip+0x2292f0c]        # 0x14269bc30
0x00408d24: je     0x140408d33
0x00408d26: mov    QWORD PTR [rdx],rbx
0x00408d29: add    QWORD PTR [rip+0x2292ef7],0x8        # 0x14269bc28
0x00408d31: jmp    0x140408d3c
0x00408d33: lea    r8,[rbp-0x9]
0x00408d37: call   0x140420e40
0x00408d3c: mov    rdx,QWORD PTR [r15+0x13bd8]
0x00408d43: inc    esi
0x00408d45: mov    rcx,QWORD PTR [r15+0x13be0]
0x00408d4c: add    rdi,0x8
0x00408d50: sub    rcx,rdx
0x00408d53: movsxd rax,esi
0x00408d56: sar    rcx,0x3
0x00408d5a: cmp    rax,rcx
0x00408d5d: jb     0x140408c70
0x00408d63: movzx  r9d,WORD PTR [rbp+0x7f]
0x00408d68: mov    rbx,QWORD PTR [r15+0x90]
0x00408d6f: mov    r12d,0xffff8ad0
0x00408d75: mov    rdi,QWORD PTR [r15+0x98]
0x00408d7c: movzx  r15d,WORD PTR [rbp+0x6f]
0x00408d81: cmp    rbx,rdi
0x00408d84: jae    0x140408e7c
0x00408d8a: mov    r14,QWORD PTR [rbx]
0x00408d8d: cmp    BYTE PTR [r14+0xa],0x0
0x00408d92: je     0x140408e6e
0x00408d98: cmp    WORD PTR [r14+0x4],r15w
0x00408d9d: jne    0x140408e6e
0x00408da3: cmp    WORD PTR [r14+0x6],r13w
0x00408da8: jne    0x140408e6e
0x00408dae: cmp    WORD PTR [r14+0x8],r9w
0x00408db3: jne    0x140408e6e
0x00408db9: mov    ecx,0x50
0x00408dbe: call   0x141539690
0x00408dc3: mov    rsi,rax
0x00408dc6: xorps  xmm0,xmm0
0x00408dc9: mov    QWORD PTR [rbp-0x9],rsi
0x00408dcd: movups XMMWORD PTR [rax+0x28],xmm0
0x00408dd1: mov    QWORD PTR [rsi+0x40],0xf
0x00408dd9: xor    eax,eax
0x00408ddb: mov    QWORD PTR [rsi+0x38],rax
0x00408ddf: mov    BYTE PTR [rsi+0x28],al
0x00408de2: mov    QWORD PTR [rsi],0x4
0x00408de9: mov    DWORD PTR [rsi+0x8],0xffffffff
0x00408df0: mov    DWORD PTR [rsi+0xc],eax
0x00408df3: mov    DWORD PTR [rsi+0x10],0x1
0x00408dfa: mov    DWORD PTR [rsi+0x1c],0x8ad08ad0
0x00408e01: mov    WORD PTR [rsi+0x20],r12w
0x00408e06: mov    rax,QWORD PTR [r14+0x10]
0x00408e0a: test   rax,rax
0x00408e0d: je     0x140408e15
0x00408e0f: mov    eax,DWORD PTR [rax+0x1c]
0x00408e12: mov    DWORD PTR [rsi+0x8],eax
0x00408e15: movzx  eax,WORD PTR [r14]
0x00408e19: mov    rcx,rsi
0x00408e1c: mov    WORD PTR [rsi+0x4],ax
0x00408e20: movzx  eax,WORD PTR [r14+0x2]
0x00408e25: mov    WORD PTR [rsi+0x6],ax
0x00408e29: mov    eax,DWORD PTR [r14+0x18]
0x00408e2d: mov    DWORD PTR [rsi+0xc],eax
0x00408e30: mov    eax,DWORD PTR [r14+0x1c]
0x00408e34: mov    DWORD PTR [rsi+0x10],eax
0x00408e37: call   0x140406860
0x00408e3c: mov    rdx,QWORD PTR [rip+0x2292de5]        # 0x14269bc28
0x00408e43: cmp    rdx,QWORD PTR [rip+0x2292de6]        # 0x14269bc30
0x00408e4a: je     0x140408e65
0x00408e4c: movzx  r9d,WORD PTR [rbp+0x7f]
0x00408e51: mov    QWORD PTR [rdx],rsi
0x00408e54: add    QWORD PTR [rip+0x2292dcc],0x8        # 0x14269bc28
0x00408e5c: add    rbx,0x8
0x00408e60: jmp    0x140408d81
0x00408e65: lea    r8,[rbp-0x9]
0x00408e69: call   0x140420e40
0x00408e6e: movzx  r9d,WORD PTR [rbp+0x7f]
0x00408e73: add    rbx,0x8
0x00408e77: jmp    0x140408d81
0x00408e7c: movsx  rsi,WORD PTR [rbp+0x6f]
0x00408e81: mov    r15,QWORD PTR [rbp+0x67]
0x00408e85: test   si,si
0x00408e88: js     0x140408ec9
0x00408e8a: cmp    esi,DWORD PTR [r15+0x116bec]
0x00408e91: jge    0x140408ec9
0x00408e93: test   r13w,r13w
0x00408e97: js     0x140408ec9
0x00408e99: cmp    r13d,DWORD PTR [r15+0x116bf0]
0x00408ea0: jge    0x140408ec9
0x00408ea2: test   r9w,r9w
0x00408ea6: js     0x140408ec9
0x00408ea8: movsx  eax,r9w
0x00408eac: cmp    eax,DWORD PTR [r15+0x116bf4]
0x00408eb3: jge    0x140408ec9
0x00408eb5: mov    r8,QWORD PTR [r15+0x116bb8]
0x00408ebc: movzx  ecx,r13w
0x00408ec0: shr    cx,0x4
0x00408ec4: test   r8,r8
0x00408ec7: jne    0x140408ed5
0x00408ec9: xor    r12d,r12d
0x00408ecc: mov    QWORD PTR [rbp-0x1],r12
0x00408ed0: jmp    0x140409084
0x00408ed5: mov    rax,rsi
0x00408ed8: movzx  edx,cx
0x00408edb: shr    rax,0x4
0x00408edf: movsx  rcx,r9w
0x00408ee3: mov    rax,QWORD PTR [r8+rax*8]
0x00408ee7: mov    rax,QWORD PTR [rax+rdx*8]
0x00408eeb: mov    rsi,QWORD PTR [rax+rcx*8]
0x00408eef: mov    QWORD PTR [rbp-0x1],rsi
0x00408ef3: test   rsi,rsi
0x00408ef6: je     0x140409074
0x00408efc: mov    rdx,QWORD PTR [rsi+0x50]
0x00408f00: xor    r12d,r12d
0x00408f03: mov    rax,QWORD PTR [rsi+0x58]
0x00408f07: sub    rax,rdx
0x00408f0a: mov    DWORD PTR [rbp-0x11],r12d
0x00408f0e: sar    rax,0x2
0x00408f12: mov    QWORD PTR [rbp-0x1],rsi
0x00408f16: test   rax,rax
0x00408f19: je     0x140409080
0x00408f1f: mov    QWORD PTR [rbp-0x1],rsi
0x00408f23: mov    r14d,0xffff8ad0
0x00408f29: nop    DWORD PTR [rax+0x0]
0x00408f30: mov    r10d,DWORD PTR [r12+rdx*1]
0x00408f34: mov    rdx,QWORD PTR [r15+0x13f68]
0x00408f3b: mov    rdi,QWORD PTR [r15+0x13f60]
0x00408f42: sub    rdx,rdi
0x00408f45: sar    rdx,0x3
0x00408f49: test   edx,edx
0x00408f4b: je     0x140409045
0x00408f51: cmp    r10d,0xffffffff
0x00408f55: je     0x140409045
0x00408f5b: xor    eax,eax
0x00408f5d: sub    edx,0x1
0x00408f60: mov    r8d,eax
0x00408f63: js     0x140408f9b
0x00408f65: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00408f70: lea    ecx,[r8+rdx*1]
0x00408f74: mov    r11d,edx
0x00408f77: sar    ecx,1
0x00408f79: movsxd rax,ecx
0x00408f7c: mov    rbx,QWORD PTR [rdi+rax*8]
0x00408f80: cmp    DWORD PTR [rbx+0x1c],r10d
0x00408f84: je     0x140408f9e
0x00408f86: lea    edx,[rcx-0x1]
0x00408f89: lea    eax,[rcx+0x1]
0x00408f8c: cmovle edx,r11d
0x00408f90: cmovle r8d,eax
0x00408f94: cmp    r8d,edx
0x00408f97: jle    0x140408f70
0x00408f99: xor    eax,eax
0x00408f9b: mov    rbx,rax
0x00408f9e: test   rbx,rbx
0x00408fa1: je     0x140409045
0x00408fa7: test   DWORD PTR [rbx+0x10],0x1000000
0x00408fae: jne    0x140409045
0x00408fb4: movzx  eax,WORD PTR [rbp+0x6f]
0x00408fb8: cmp    WORD PTR [rbx+0x8],ax
0x00408fbc: jne    0x140409045
0x00408fc2: cmp    WORD PTR [rbx+0xa],r13w
0x00408fc7: jne    0x140409045
0x00408fc9: movzx  eax,WORD PTR [rbp+0x7f]
0x00408fcd: cmp    WORD PTR [rbx+0xc],ax
0x00408fd1: jne    0x140409045
0x00408fd3: mov    ecx,0x50
0x00408fd8: call   0x141539690
0x00408fdd: mov    rdi,rax
0x00408fe0: xorps  xmm0,xmm0
0x00408fe3: mov    rcx,rdi
0x00408fe6: mov    QWORD PTR [rbp-0x9],rdi
0x00408fea: movups XMMWORD PTR [rax+0x28],xmm0
0x00408fee: mov    QWORD PTR [rdi+0x40],0xf
0x00408ff6: xor    eax,eax
0x00408ff8: mov    QWORD PTR [rdi+0x38],rax
0x00408ffc: mov    BYTE PTR [rdi+0x28],al
0x00408fff: mov    DWORD PTR [rdi+0x4],0xffffffff
0x00409006: mov    DWORD PTR [rdi],eax
0x00409008: mov    DWORD PTR [rdi+0x1c],0x8ad08ad0
0x0040900f: mov    WORD PTR [rdi+0x20],r14w
0x00409014: mov    eax,DWORD PTR [rbx+0x1c]
0x00409017: mov    DWORD PTR [rdi+0x4],eax
0x0040901a: call   0x140406860
0x0040901f: mov    rdx,QWORD PTR [rip+0x2292c02]        # 0x14269bc28
0x00409026: cmp    rdx,QWORD PTR [rip+0x2292c03]        # 0x14269bc30
0x0040902d: je     0x14040903c
0x0040902f: mov    QWORD PTR [rdx],rdi
0x00409032: add    QWORD PTR [rip+0x2292bee],0x8        # 0x14269bc28
0x0040903a: jmp    0x140409045
0x0040903c: lea    r8,[rbp-0x9]
0x00409040: call   0x140420e40
0x00409045: mov    eax,DWORD PTR [rbp-0x11]
0x00409048: add    r12,0x4
0x0040904c: mov    rdx,QWORD PTR [rsi+0x50]
0x00409050: inc    eax
0x00409052: mov    rcx,QWORD PTR [rsi+0x58]
0x00409056: sub    rcx,rdx
0x00409059: mov    DWORD PTR [rbp-0x11],eax
0x0040905c: cdqe
0x0040905e: sar    rcx,0x2
0x00409062: cmp    rax,rcx
0x00409065: jb     0x140408f30
0x0040906b: movzx  esi,WORD PTR [rbp+0x6f]
0x0040906f: xor    r12d,r12d
0x00409072: jmp    0x14040908a
0x00409074: movzx  esi,WORD PTR [rbp+0x6f]
0x00409078: mov    r14d,r12d
0x0040907b: xor    r12d,r12d
0x0040907e: jmp    0x14040908a
0x00409080: movzx  esi,WORD PTR [rbp+0x6f]
0x00409084: mov    r14d,0xffff8ad0
0x0040908a: mov    rdi,QWORD PTR [r15+0x1ca10]
0x00409091: test   rdi,rdi
0x00409094: je     0x14040916b
0x0040909a: movzx  r15d,WORD PTR [rbp+0x7f]
0x0040909f: nop
0x004090a0: mov    rcx,QWORD PTR [rdi]
0x004090a3: test   BYTE PTR [rcx+0x48],0x20
0x004090a7: jne    0x140409155
0x004090ad: mov    rax,QWORD PTR [rcx]
0x004090b0: call   QWORD PTR [rax]
0x004090b2: test   eax,eax
0x004090b4: jne    0x140409155
0x004090ba: mov    rax,QWORD PTR [rdi]
0x004090bd: cmp    WORD PTR [rax+0x2c],si
0x004090c1: jne    0x140409155
0x004090c7: cmp    WORD PTR [rax+0x2e],r13w
0x004090cc: jne    0x140409155
0x004090d2: cmp    WORD PTR [rax+0x30],r15w
0x004090d7: jne    0x140409155
0x004090d9: mov    ecx,0x50
0x004090de: call   0x141539690
0x004090e3: mov    rbx,rax
0x004090e6: mov    QWORD PTR [rbp-0x9],rax
0x004090ea: xorps  xmm0,xmm0
0x004090ed: movups XMMWORD PTR [rax+0x28],xmm0
0x004090f1: mov    QWORD PTR [rax+0x38],r12
0x004090f5: mov    QWORD PTR [rax+0x40],0xf
0x004090fd: mov    BYTE PTR [rax+0x28],0x0
0x00409101: mov    DWORD PTR [rax+0x4],0xffffffff
0x00409108: mov    DWORD PTR [rax],r12d
0x0040910b: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00409112: mov    WORD PTR [rax+0x20],r14w
0x00409117: mov    rax,QWORD PTR [rdi]
0x0040911a: mov    rcx,QWORD PTR [rax+0x98]
0x00409121: mov    eax,DWORD PTR [rcx+0x1c]
0x00409124: mov    rcx,rbx
0x00409127: mov    DWORD PTR [rbx+0x4],eax
0x0040912a: call   0x140406860
0x0040912f: mov    rdx,QWORD PTR [rip+0x2292af2]        # 0x14269bc28
0x00409136: cmp    rdx,QWORD PTR [rip+0x2292af3]        # 0x14269bc30
0x0040913d: je     0x14040914c
0x0040913f: mov    QWORD PTR [rdx],rbx
0x00409142: add    QWORD PTR [rip+0x2292ade],0x8        # 0x14269bc28
0x0040914a: jmp    0x140409155
0x0040914c: lea    r8,[rbp-0x9]
0x00409150: call   0x140420e40
0x00409155: mov    eax,0x10
0x0040915a: mov    rdi,QWORD PTR [rdi+rax*1]
0x0040915e: test   rdi,rdi
0x00409161: jne    0x1404090a0
0x00409167: mov    r15,QWORD PTR [rbp+0x67]
0x0040916b: mov    rdx,QWORD PTR [r15+0x1ca38]
0x00409172: mov    rax,QWORD PTR [r15+0x1ca40]
0x00409179: sub    rax,rdx
0x0040917c: mov    DWORD PTR [rbp-0x15],r12d
0x00409180: sar    rax,0x3
0x00409184: mov    DWORD PTR [rbp-0x11],0x3
0x0040918b: test   rax,rax
0x0040918e: je     0x140409406
0x00409194: nop    DWORD PTR [rax+0x0]
0x00409198: nop    DWORD PTR [rax+rax*1+0x0]
0x004091a0: mov    rcx,QWORD PTR [r12+rdx*1]
0x004091a4: mov    rax,QWORD PTR [rcx]
0x004091a7: call   QWORD PTR [rax+0x270]
0x004091ad: test   al,al
0x004091af: je     0x1404093d6
0x004091b5: mov    rax,QWORD PTR [r15+0x1ca38]
0x004091bc: mov    rbx,QWORD PTR [r12+rax*1]
0x004091c0: mov    rcx,rbx
0x004091c3: mov    rax,QWORD PTR [rbx]
0x004091c6: call   QWORD PTR [rax+0x130]
0x004091cc: test   al,al
0x004091ce: je     0x1404093d6
0x004091d4: movsx  edi,WORD PTR [rbp+0x7f]
0x004091d8: cmp    edi,DWORD PTR [rbx+0x20]
0x004091db: jne    0x1404093d6
0x004091e1: mov    rax,QWORD PTR [rbx]
0x004091e4: mov    rcx,rbx
0x004091e7: call   QWORD PTR [rax+0x140]
0x004091ed: test   al,al
0x004091ef: je     0x140409214
0x004091f1: cmp    QWORD PTR [rbx+0x30],0x0
0x004091f6: je     0x140409214
0x004091f8: movzx  r9d,di
0x004091fc: movzx  r8d,r13w
0x00409200: movzx  edx,si
0x00409203: mov    rcx,rbx
0x00409206: call   0x1405587b0
0x0040920b: test   al,al
0x0040920d: jne    0x14040923f
0x0040920f: jmp    0x1404093d6
0x00409214: movsx  eax,si
0x00409217: cmp    eax,DWORD PTR [rbx+0x8]
0x0040921a: jl     0x1404093d6
0x00409220: cmp    eax,DWORD PTR [rbx+0x14]
0x00409223: jg     0x1404093d6
0x00409229: movsx  eax,r13w
0x0040922d: cmp    eax,DWORD PTR [rbx+0xc]
0x00409230: jl     0x1404093d6
0x00409236: cmp    eax,DWORD PTR [rbx+0x18]
0x00409239: jg     0x1404093d6
0x0040923f: mov    ecx,0x50
0x00409244: call   0x141539690
0x00409249: mov    rbx,rax
0x0040924c: xorps  xmm0,xmm0
0x0040924f: mov    QWORD PTR [rbp-0x9],rbx
0x00409253: movups XMMWORD PTR [rax+0x28],xmm0
0x00409257: mov    QWORD PTR [rbx+0x40],0xf
0x0040925f: xor    eax,eax
0x00409261: mov    QWORD PTR [rbx+0x38],rax
0x00409265: mov    BYTE PTR [rbx+0x28],al
0x00409268: mov    eax,DWORD PTR [rbp-0x11]
0x0040926b: mov    DWORD PTR [rbx+0x4],0xffffffff
0x00409272: mov    DWORD PTR [rbx],eax
0x00409274: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x0040927b: mov    WORD PTR [rbx+0x20],r14w
0x00409280: mov    rax,QWORD PTR [r15+0x1ca38]
0x00409287: mov    rcx,QWORD PTR [r12+rax*1]
0x0040928b: mov    eax,DWORD PTR [rcx+0x50]
0x0040928e: mov    rcx,rbx
0x00409291: mov    DWORD PTR [rbx+0x4],eax
0x00409294: call   0x140406860
0x00409299: mov    rdx,QWORD PTR [rip+0x2292988]        # 0x14269bc28
0x004092a0: cmp    rdx,QWORD PTR [rip+0x2292989]        # 0x14269bc30
0x004092a7: je     0x1404092b6
0x004092a9: mov    QWORD PTR [rdx],rbx
0x004092ac: add    QWORD PTR [rip+0x2292974],0x8        # 0x14269bc28
0x004092b4: jmp    0x1404092bf
0x004092b6: lea    r8,[rbp-0x9]
0x004092ba: call   0x140420e40
0x004092bf: cmp    DWORD PTR [rip+0x1492fd2],0x1        # 0x14189c298
0x004092c6: jne    0x1404093d6
0x004092cc: mov    rax,QWORD PTR [r15+0x1ca38]
0x004092d3: mov    rcx,QWORD PTR [r12+rax*1]
0x004092d7: mov    rax,QWORD PTR [rcx]
0x004092da: call   QWORD PTR [rax+0xe8]
0x004092e0: test   al,al
0x004092e2: je     0x1404093d6
0x004092e8: mov    rax,QWORD PTR [r15+0x1ca38]
0x004092ef: xor    ecx,ecx
0x004092f1: mov    esi,ecx
0x004092f3: mov    rdi,QWORD PTR [r12+rax*1]
0x004092f7: mov    rax,QWORD PTR [rdi+0x130]
0x004092fe: sub    rax,QWORD PTR [rdi+0x128]
0x00409305: sar    rax,0x3
0x00409309: test   rax,rax
0x0040930c: je     0x1404093d6
0x00409312: mov    r14d,ecx
0x00409315: mov    r13d,0xffff8ad0
0x0040931b: xor    r15d,r15d
0x0040931e: xchg   ax,ax
0x00409320: mov    ecx,0x50
0x00409325: call   0x141539690
0x0040932a: mov    rbx,rax
0x0040932d: mov    QWORD PTR [rbp-0x9],rax
0x00409331: xorps  xmm0,xmm0
0x00409334: movups XMMWORD PTR [rax+0x28],xmm0
0x00409338: mov    QWORD PTR [rax+0x38],r15
0x0040933c: mov    QWORD PTR [rax+0x40],0xf
0x00409344: mov    BYTE PTR [rax+0x28],r15b
0x00409348: mov    DWORD PTR [rax+0x4],0xffffffff
0x0040934f: mov    DWORD PTR [rax],0x8
0x00409355: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x0040935c: mov    WORD PTR [rax+0x20],r13w
0x00409361: mov    rax,QWORD PTR [rdi+0x128]
0x00409368: mov    rcx,QWORD PTR [r14+rax*1]
0x0040936c: mov    rax,QWORD PTR [rcx]
0x0040936f: mov    ecx,DWORD PTR [rax+0x1c]
0x00409372: mov    DWORD PTR [rbx+0x4],ecx
0x00409375: mov    rcx,rbx
0x00409378: call   0x140406860
0x0040937d: mov    rdx,QWORD PTR [rip+0x22928a4]        # 0x14269bc28
0x00409384: cmp    rdx,QWORD PTR [rip+0x22928a5]        # 0x14269bc30
0x0040938b: je     0x14040939a
0x0040938d: mov    QWORD PTR [rdx],rbx
0x00409390: add    QWORD PTR [rip+0x2292890],0x8        # 0x14269bc28
0x00409398: jmp    0x1404093a3
0x0040939a: lea    r8,[rbp-0x9]
0x0040939e: call   0x140420e40
0x004093a3: mov    rcx,QWORD PTR [rdi+0x130]
0x004093aa: inc    esi
0x004093ac: sub    rcx,QWORD PTR [rdi+0x128]
0x004093b3: add    r14,0x8
0x004093b7: sar    rcx,0x3
0x004093bb: movsxd rax,esi
0x004093be: cmp    rax,rcx
0x004093c1: jb     0x140409320
0x004093c7: mov    r15,QWORD PTR [rbp+0x67]
0x004093cb: mov    r14d,0xffff8ad0
0x004093d1: movzx  r13d,WORD PTR [rbp+0x77]
0x004093d6: mov    eax,DWORD PTR [rbp-0x15]
0x004093d9: add    r12,0x8
0x004093dd: mov    rdx,QWORD PTR [r15+0x1ca38]
0x004093e4: inc    eax
0x004093e6: mov    rcx,QWORD PTR [r15+0x1ca40]
0x004093ed: movzx  esi,WORD PTR [rbp+0x6f]
0x004093f1: sub    rcx,rdx
0x004093f4: mov    DWORD PTR [rbp-0x15],eax
0x004093f7: cdqe
0x004093f9: sar    rcx,0x3
0x004093fd: cmp    rax,rcx
0x00409400: jb     0x1404091a0
0x00409406: movzx  r11d,WORD PTR [rbp+0x6f]
0x0040940b: lea    rax,[rbp+0x7]
0x0040940f: movzx  r9d,WORD PTR [rbp+0x7f]
0x00409414: lea    rcx,[r15+0x11b3b8]
0x0040941b: mov    QWORD PTR [rsp+0x28],rax
0x00409420: movzx  r8d,r13w
0x00409424: lea    rax,[rbp-0x9]
0x00409428: movzx  edx,r11w
0x0040942c: mov    QWORD PTR [rsp+0x20],rax
0x00409431: call   0x140a53730
0x00409436: mov    r12,rax
0x00409439: xor    eax,eax
0x0040943b: mov    r14d,eax
0x0040943e: mov    rdx,QWORD PTR [r12]
0x00409442: mov    rcx,QWORD PTR [r12+0x8]
0x00409447: sub    rcx,rdx
0x0040944a: sar    rcx,0x3
0x0040944e: test   rcx,rcx
0x00409451: je     0x14040960b
0x00409457: mov    esi,eax
0x00409459: lea    r8,[rip+0xffffffffffbf6ba0]        # 0x140000000
0x00409460: mov    r15d,0xffff8ad0
0x00409466: data16 nop WORD PTR [rax+rax*1+0x0]
0x00409470: mov    rbx,QWORD PTR [rdx+rsi*1]
0x00409474: test   BYTE PTR [rbx+0x17],0x1
0x00409478: jne    0x1404095e4
0x0040947e: movsx  rax,WORD PTR [rbx]
0x00409482: cmp    eax,0xd
0x00409485: ja     0x1404095e4
0x0040948b: mov    ecx,DWORD PTR [r8+rax*4+0x40a1dc]
0x00409493: add    rcx,r8
0x00409496: jmp    rcx
0x00409498: cmp    WORD PTR [rbx+0xa],r11w
0x0040949d: jne    0x1404095e4
0x004094a3: cmp    WORD PTR [rbx+0xc],r13w
0x004094a8: jne    0x1404095e4
0x004094ae: cmp    WORD PTR [rbx+0xe],r9w
0x004094b3: jne    0x1404095e4
0x004094b9: mov    ecx,0x50
0x004094be: call   0x141539690
0x004094c3: movsx  r9d,WORD PTR [rbp+0x6f]
0x004094c8: mov    rdi,rax
0x004094cb: xorps  xmm0,xmm0
0x004094ce: mov    QWORD PTR [rbp-0x9],rdi
0x004094d2: movups XMMWORD PTR [rax+0x28],xmm0
0x004094d6: mov    QWORD PTR [rdi+0x40],0xf
0x004094de: xor    eax,eax
0x004094e0: mov    QWORD PTR [rdi+0x38],rax
0x004094e4: mov    BYTE PTR [rdi+0x28],al
0x004094e7: mov    DWORD PTR [rdi],0x5
0x004094ed: mov    DWORD PTR [rdi+0x10],eax
0x004094f0: mov    DWORD PTR [rdi+0x1c],0x8ad08ad0
0x004094f7: mov    WORD PTR [rdi+0x20],r15w
0x004094fc: movzx  eax,WORD PTR [rbx]
0x004094ff: mov    WORD PTR [rdi+0x4],ax
0x00409503: movzx  eax,WORD PTR [rbx+0x2]
0x00409507: mov    WORD PTR [rdi+0x6],ax
0x0040950b: mov    eax,DWORD PTR [rbx+0x4]
0x0040950e: mov    DWORD PTR [rdi+0x8],eax
0x00409511: mov    eax,DWORD PTR [rbx+0x18]
0x00409514: mov    DWORD PTR [rdi+0xc],eax
0x00409517: test   r9w,r9w
0x0040951b: js     0x1404095a5
0x00409521: cmp    r9d,DWORD PTR [rip+0x20debb4]        # 0x1424e80dc
0x00409528: jge    0x1404095a5
0x0040952a: test   r13w,r13w
0x0040952e: js     0x1404095a5
0x00409530: movsx  eax,r13w
0x00409534: cmp    eax,DWORD PTR [rip+0x20deba6]        # 0x1424e80e0
0x0040953a: mov    r8d,eax
0x0040953d: jge    0x1404095a5
0x0040953f: movsx  r10,WORD PTR [rbp+0x7f]
0x00409544: test   r10w,r10w
0x00409548: js     0x1404095a5
0x0040954a: cmp    r10d,DWORD PTR [rip+0x20deb93]        # 0x1424e80e4
0x00409551: jge    0x1404095a5
0x00409553: mov    rcx,QWORD PTR [rip+0x20deb4e]        # 0x1424e80a8
0x0040955a: movzx  eax,r9w
0x0040955e: shr    ax,0x4
0x00409562: test   rcx,rcx
0x00409565: je     0x1404095a5
0x00409567: movzx  eax,ax
0x0040956a: movsx  rdx,r13w
0x0040956e: shr    rdx,0x4
0x00409572: mov    rax,QWORD PTR [rcx+rax*8]
0x00409576: mov    rax,QWORD PTR [rax+rdx*8]
0x0040957a: mov    rdx,QWORD PTR [rax+r10*8]
0x0040957e: test   rdx,rdx
0x00409581: je     0x1404095a5
0x00409583: mov    ecx,r9d
0x00409586: and    r8d,0xf
0x0040958a: and    ecx,0xf
0x0040958d: shl    rcx,0x4
0x00409591: add    rcx,r8
0x00409594: test   DWORD PTR [rdx+rcx*4+0x2a0],0x8000
0x0040959f: je     0x1404095a5
0x004095a1: or     DWORD PTR [rdi+0x10],0x1
0x004095a5: mov    rcx,rdi
0x004095a8: call   0x140406860
0x004095ad: mov    rdx,QWORD PTR [rip+0x2292674]        # 0x14269bc28
0x004095b4: cmp    rdx,QWORD PTR [rip+0x2292675]        # 0x14269bc30
0x004095bb: je     0x1404095ca
0x004095bd: mov    QWORD PTR [rdx],rdi
0x004095c0: add    QWORD PTR [rip+0x2292660],0x8        # 0x14269bc28
0x004095c8: jmp    0x1404095d3
0x004095ca: lea    r8,[rbp-0x9]
0x004095ce: call   0x140420e40
0x004095d3: movzx  r9d,WORD PTR [rbp+0x7f]
0x004095d8: lea    r8,[rip+0xffffffffffbf6a21]        # 0x140000000
0x004095df: movzx  r11d,WORD PTR [rbp+0x6f]
0x004095e4: mov    rdx,QWORD PTR [r12]
0x004095e8: inc    r14d
0x004095eb: mov    rcx,QWORD PTR [r12+0x8]
0x004095f0: add    rsi,0x8
0x004095f4: sub    rcx,rdx
0x004095f7: movsxd rax,r14d
0x004095fa: sar    rcx,0x3
0x004095fe: cmp    rax,rcx
0x00409601: jb     0x140409470
0x00409607: mov    r15,QWORD PTR [rbp+0x67]
0x0040960b: mov    rdx,QWORD PTR [r15+0x108]
0x00409612: xor    r12d,r12d
0x00409615: mov    rax,QWORD PTR [r15+0x110]
0x0040961c: mov    esi,r12d
0x0040961f: movzx  r14d,WORD PTR [rbp+0x6f]
0x00409624: sub    rax,rdx
0x00409627: sar    rax,0x3
0x0040962b: test   rax,rax
0x0040962e: je     0x1404096f0
0x00409634: mov    edi,r12d
0x00409637: nop    WORD PTR [rax+rax*1+0x0]
0x00409640: mov    rax,QWORD PTR [rdx+rdi*1]
0x00409644: cmp    WORD PTR [rax],r14w
0x00409648: jne    0x1404096c4
0x0040964a: cmp    WORD PTR [rax+0x2],r13w
0x0040964f: jne    0x1404096c4
0x00409651: cmp    WORD PTR [rax+0x4],r9w
0x00409656: jne    0x1404096c4
0x00409658: mov    ecx,0x50
0x0040965d: call   0x141539690
0x00409662: mov    rbx,rax
0x00409665: mov    QWORD PTR [rbp-0x9],rax
0x00409669: xorps  xmm0,xmm0
0x0040966c: mov    rcx,rbx
0x0040966f: movups XMMWORD PTR [rax+0x28],xmm0
0x00409673: mov    QWORD PTR [rax+0x38],r12
0x00409677: mov    QWORD PTR [rax+0x40],0xf
0x0040967f: mov    BYTE PTR [rax+0x28],r12b
0x00409683: mov    DWORD PTR [rax],0x9
0x00409689: mov    eax,0xffff8ad0
0x0040968e: mov    WORD PTR [rbx+0x20],ax
0x00409692: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00409699: call   0x140406860
0x0040969e: mov    rdx,QWORD PTR [rip+0x2292583]        # 0x14269bc28
0x004096a5: cmp    rdx,QWORD PTR [rip+0x2292584]        # 0x14269bc30
0x004096ac: je     0x1404096bb
0x004096ae: mov    QWORD PTR [rdx],rbx
0x004096b1: add    QWORD PTR [rip+0x229256f],0x8        # 0x14269bc28
0x004096b9: jmp    0x1404096c4
0x004096bb: lea    r8,[rbp-0x9]
0x004096bf: call   0x140420e40
0x004096c4: mov    rdx,QWORD PTR [r15+0x108]
0x004096cb: inc    esi
0x004096cd: mov    rcx,QWORD PTR [r15+0x110]
0x004096d4: add    rdi,0x8
0x004096d8: movzx  r9d,WORD PTR [rbp+0x7f]
0x004096dd: sub    rcx,rdx
0x004096e0: sar    rcx,0x3
0x004096e4: movsxd rax,esi
0x004096e7: cmp    rax,rcx
0x004096ea: jb     0x140409640
0x004096f0: mov    rdx,QWORD PTR [r15+0xd8]
0x004096f7: mov    esi,r12d
0x004096fa: mov    rax,QWORD PTR [r15+0xe0]
0x00409701: sub    rax,rdx
0x00409704: sar    rax,0x3
0x00409708: test   rax,rax
0x0040970b: je     0x1404097c2
0x00409711: mov    rdi,r12
0x00409714: mov    rax,QWORD PTR [rdx+rdi*1]
0x00409718: cmp    WORD PTR [rax],r14w
0x0040971c: jne    0x14040979b
0x0040971e: cmp    WORD PTR [rax+0x2],r13w
0x00409723: jne    0x14040979b
0x00409725: movzx  ecx,WORD PTR [rbp+0x7f]
0x00409729: cmp    WORD PTR [rax+0x4],cx
0x0040972d: jne    0x14040979b
0x0040972f: mov    ecx,0x50
0x00409734: call   0x141539690
0x00409739: mov    rbx,rax
0x0040973c: mov    QWORD PTR [rbp-0x9],rax
0x00409740: xorps  xmm0,xmm0
0x00409743: mov    rcx,rbx
0x00409746: movups XMMWORD PTR [rax+0x28],xmm0
0x0040974a: mov    QWORD PTR [rax+0x38],r12
0x0040974e: mov    QWORD PTR [rax+0x40],0xf
0x00409756: mov    BYTE PTR [rax+0x28],r12b
0x0040975a: mov    DWORD PTR [rax],0x6
0x00409760: mov    eax,0xffff8ad0
0x00409765: mov    WORD PTR [rbx+0x20],ax
0x00409769: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00409770: call   0x140406860
0x00409775: mov    rdx,QWORD PTR [rip+0x22924ac]        # 0x14269bc28
0x0040977c: cmp    rdx,QWORD PTR [rip+0x22924ad]        # 0x14269bc30
0x00409783: je     0x140409792
0x00409785: mov    QWORD PTR [rdx],rbx
0x00409788: add    QWORD PTR [rip+0x2292498],0x8        # 0x14269bc28
0x00409790: jmp    0x14040979b
0x00409792: lea    r8,[rbp-0x9]
0x00409796: call   0x140420e40
0x0040979b: mov    rdx,QWORD PTR [r15+0xd8]
0x004097a2: inc    esi
0x004097a4: mov    rcx,QWORD PTR [r15+0xe0]
0x004097ab: add    rdi,0x8
0x004097af: sub    rcx,rdx
0x004097b2: movsxd rax,esi
0x004097b5: sar    rcx,0x3
0x004097b9: cmp    rax,rcx
0x004097bc: jb     0x140409714
0x004097c2: mov    ecx,0x50
0x004097c7: call   0x141539690
0x004097cc: xorps  xmm0,xmm0
0x004097cf: mov    QWORD PTR [rbp-0x9],rax
0x004097d3: mov    rcx,rax
0x004097d6: mov    rbx,rax
0x004097d9: movups XMMWORD PTR [rax+0x28],xmm0
0x004097dd: mov    QWORD PTR [rax+0x38],r12
0x004097e1: mov    QWORD PTR [rax+0x40],0xf
0x004097e9: mov    BYTE PTR [rax+0x28],r12b
0x004097ed: movsx  r12,WORD PTR [rbp+0x7f]
0x004097f2: mov    WORD PTR [rax+0x20],r12w
0x004097f7: mov    DWORD PTR [rax],0x1
0x004097fd: mov    WORD PTR [rax+0x1c],r14w
0x00409802: mov    WORD PTR [rax+0x1e],r13w
0x00409807: call   0x140406860
0x0040980c: mov    rdx,QWORD PTR [rip+0x2292415]        # 0x14269bc28
0x00409813: cmp    rdx,QWORD PTR [rip+0x2292416]        # 0x14269bc30
0x0040981a: je     0x140409829
0x0040981c: mov    QWORD PTR [rdx],rbx
0x0040981f: add    QWORD PTR [rip+0x2292401],0x8        # 0x14269bc28
0x00409827: jmp    0x140409832
0x00409829: lea    r8,[rbp-0x9]
0x0040982d: call   0x140420e40
0x00409832: movzx  r9d,r12w
0x00409836: movzx  r8d,r13w
0x0040983a: movzx  edx,r14w
0x0040983e: mov    rcx,r15
0x00409841: call   0x140141920
0x00409846: test   al,al
0x00409848: jle    0x140409b76
0x0040984e: test   r14w,r14w
0x00409852: js     0x1404099d3
0x00409858: movsx  eax,r14w
0x0040985c: cmp    eax,DWORD PTR [r15+0x116bec]
0x00409863: jge    0x1404099d3
0x00409869: test   r13w,r13w
0x0040986d: js     0x1404099d3
0x00409873: movsx  eax,r13w
0x00409877: mov    edi,eax
0x00409879: cmp    eax,DWORD PTR [r15+0x116bf0]
0x00409880: jge    0x1404099d3
0x00409886: test   r12w,r12w
0x0040988a: js     0x1404099d3
0x00409890: cmp    r12d,DWORD PTR [r15+0x116bf4]
0x00409897: jge    0x1404099d3
0x0040989d: mov    rcx,QWORD PTR [r15+0x116bb8]
0x004098a4: test   rcx,rcx
0x004098a7: je     0x1404099d7
0x004098ad: movsx  rax,r14w
0x004098b1: shr    rax,0x4
0x004098b5: movsx  rdx,r13w
0x004098b9: shr    rdx,0x4
0x004098bd: mov    rax,QWORD PTR [rcx+rax*8]
0x004098c1: mov    rax,QWORD PTR [rax+rdx*8]
0x004098c5: mov    rdx,QWORD PTR [rax+r12*8]
0x004098c9: test   rdx,rdx
0x004098cc: je     0x1404099d7
0x004098d2: mov    eax,edi
0x004098d4: movsx  esi,r14w
0x004098d8: mov    ecx,esi
0x004098da: and    eax,0xf
0x004098dd: and    ecx,0xf
0x004098e0: shl    rcx,0x4
0x004098e4: add    rcx,rax
0x004098e7: test   DWORD PTR [rdx+rcx*4+0x2a0],0x200000
0x004098f2: je     0x1404099db
0x004098f8: mov    ecx,0x50
0x004098fd: call   0x141539690
0x00409902: xor    ecx,ecx
0x00409904: mov    QWORD PTR [rbp-0x9],rax
0x00409908: mov    rbx,rax
0x0040990b: xorps  xmm0,xmm0
0x0040990e: movups XMMWORD PTR [rax+0x28],xmm0
0x00409912: mov    QWORD PTR [rax+0x38],rcx
0x00409916: mov    QWORD PTR [rax+0x40],0xf
0x0040991e: mov    BYTE PTR [rax+0x28],cl
0x00409921: mov    QWORD PTR [rax],0xb
0x00409928: mov    WORD PTR [rax+0x8],0x1
0x0040992e: mov    eax,0xffff8ad0
0x00409933: mov    WORD PTR [rbx+0x20],ax
0x00409937: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x0040993e: cmp    esi,DWORD PTR [rip+0x20de798]        # 0x1424e80dc
0x00409944: jge    0x1404099b3
0x00409946: movsx  eax,r13w
0x0040994a: cmp    eax,DWORD PTR [rip+0x20de790]        # 0x1424e80e0
0x00409950: mov    r8d,eax
0x00409953: jge    0x1404099b3
0x00409955: cmp    r12d,DWORD PTR [rip+0x20de788]        # 0x1424e80e4
0x0040995c: jge    0x1404099b3
0x0040995e: mov    r9,QWORD PTR [rip+0x20de743]        # 0x1424e80a8
0x00409965: movzx  eax,r14w
0x00409969: movzx  ecx,r13w
0x0040996d: shr    ax,0x4
0x00409971: shr    cx,0x4
0x00409975: test   r9,r9
0x00409978: je     0x1404099b3
0x0040997a: movzx  eax,ax
0x0040997d: movzx  edx,cx
0x00409980: mov    rax,QWORD PTR [r9+rax*8]
0x00409984: mov    rax,QWORD PTR [rax+rdx*8]
0x00409988: mov    rdx,QWORD PTR [rax+r12*8]
0x0040998c: test   rdx,rdx
0x0040998f: je     0x1404099b3
0x00409991: mov    ecx,r14d
0x00409994: and    r8d,0xf
0x00409998: and    ecx,0xf
0x0040999b: shl    rcx,0x4
0x0040999f: add    rcx,r8
0x004099a2: test   DWORD PTR [rdx+rcx*4+0x2a0],0x8000
0x004099ad: je     0x1404099b3
0x004099af: or     DWORD PTR [rbx+0x4],0x1
0x004099b3: movzx  r9d,r12w
0x004099b7: movzx  r8d,r13w
0x004099bb: movzx  edx,r14w
0x004099bf: mov    rcx,r15
0x004099c2: call   0x140141920
0x004099c7: movsx  ecx,al
0x004099ca: mov    WORD PTR [rbx+0x8],cx
0x004099ce: jmp    0x140409b48
0x004099d3: movsx  edi,r13w
0x004099d7: movsx  esi,r14w
0x004099db: mov    ecx,0x50
0x004099e0: call   0x141539690
0x004099e5: xor    ecx,ecx
0x004099e7: mov    QWORD PTR [rbp-0x9],rax
0x004099eb: mov    rbx,rax
0x004099ee: xorps  xmm0,xmm0
0x004099f1: movzx  r9d,r12w
0x004099f5: movzx  r8d,r13w
0x004099f9: movups XMMWORD PTR [rax+0x28],xmm0
0x004099fd: mov    QWORD PTR [rax+0x38],rcx
0x00409a01: movzx  edx,r14w
0x00409a05: mov    QWORD PTR [rax+0x40],0xf
0x00409a0d: mov    BYTE PTR [rax+0x28],cl
0x00409a10: mov    rcx,r15
0x00409a13: mov    QWORD PTR [rax],0xa
0x00409a1a: mov    WORD PTR [rax+0x8],0x1
0x00409a20: mov    eax,0xffff8ad0
0x00409a25: mov    WORD PTR [rbx+0x20],ax
0x00409a29: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00409a30: call   0x140141920
0x00409a35: movsx  ecx,al
0x00409a38: mov    WORD PTR [rbx+0x8],cx
0x00409a3c: test   r14w,r14w
0x00409a40: js     0x140409ac1
0x00409a42: cmp    esi,DWORD PTR [r15+0x116bec]
0x00409a49: jge    0x140409ac1
0x00409a4b: test   r13w,r13w
0x00409a4f: js     0x140409ac1
0x00409a51: cmp    edi,DWORD PTR [r15+0x116bf0]
0x00409a58: jge    0x140409ac1
0x00409a5a: test   r12w,r12w
0x00409a5e: js     0x140409ac1
0x00409a60: cmp    r12d,DWORD PTR [r15+0x116bf4]
0x00409a67: jge    0x140409ac1
0x00409a69: mov    rcx,QWORD PTR [r15+0x116bb8]
0x00409a70: test   rcx,rcx
0x00409a73: je     0x140409ac1
0x00409a75: movsx  rax,r14w
0x00409a79: shr    rax,0x4
0x00409a7d: movsx  rdx,r13w
0x00409a81: shr    rdx,0x4
0x00409a85: mov    rax,QWORD PTR [rcx+rax*8]
0x00409a89: mov    rax,QWORD PTR [rax+rdx*8]
0x00409a8d: mov    r9,QWORD PTR [rax+r12*8]
0x00409a91: test   r9,r9
0x00409a94: je     0x140409ac1
0x00409a96: movsx  edx,r14w
0x00409a9a: mov    ecx,edx
0x00409a9c: movsx  r8d,r13w
0x00409aa0: and    ecx,0xf
0x00409aa3: mov    eax,r8d
0x00409aa6: shl    rcx,0x4
0x00409aaa: and    eax,0xf
0x00409aad: add    rcx,rax
0x00409ab0: cmp    DWORD PTR [r9+rcx*4+0x2a0],0x0
0x00409ab9: jge    0x140409acf
0x00409abb: or     DWORD PTR [rbx+0x4],0x2
0x00409abf: jmp    0x140409acf
0x00409ac1: movsx  edx,r14w
0x00409ac5: movsx  r8d,r13w
0x00409ac9: test   r14w,r14w
0x00409acd: js     0x140409b48
0x00409acf: cmp    edx,DWORD PTR [r15+0x116bec]
0x00409ad6: jge    0x140409b48
0x00409ad8: test   r13w,r13w
0x00409adc: js     0x140409b48
0x00409ade: cmp    r8d,DWORD PTR [r15+0x116bf0]
0x00409ae5: jge    0x140409b48
0x00409ae7: test   r12w,r12w
0x00409aeb: js     0x140409b48
0x00409aed: cmp    r12d,DWORD PTR [r15+0x116bf4]
0x00409af4: jge    0x140409b48
0x00409af6: mov    rcx,QWORD PTR [r15+0x116bb8]
0x00409afd: test   rcx,rcx
0x00409b00: je     0x140409b48
0x00409b02: movsx  rax,r14w
0x00409b06: shr    rax,0x4
0x00409b0a: movsx  rdx,r13w
0x00409b0e: shr    rdx,0x4
0x00409b12: mov    rax,QWORD PTR [rcx+rax*8]
0x00409b16: mov    rax,QWORD PTR [rax+rdx*8]
0x00409b1a: mov    r8,QWORD PTR [rax+r12*8]
0x00409b1e: test   r8,r8
0x00409b21: je     0x140409b48
0x00409b23: mov    edx,r14d
0x00409b26: mov    ecx,r13d
0x00409b29: and    edx,0xf
0x00409b2c: and    ecx,0xf
0x00409b2f: shl    rdx,0x4
0x00409b33: add    rdx,rcx
0x00409b36: test   DWORD PTR [r8+rdx*4+0x2a0],0x40000000
0x00409b42: je     0x140409b48
0x00409b44: or     DWORD PTR [rbx+0x4],0x1
0x00409b48: mov    rcx,rbx
0x00409b4b: call   0x140406860
0x00409b50: mov    rdx,QWORD PTR [rip+0x22920d1]        # 0x14269bc28
0x00409b57: cmp    rdx,QWORD PTR [rip+0x22920d2]        # 0x14269bc30
0x00409b5e: je     0x140409b6d
0x00409b60: mov    QWORD PTR [rdx],rbx
0x00409b63: add    QWORD PTR [rip+0x22920bd],0x8        # 0x14269bc28
0x00409b6b: jmp    0x140409b76
0x00409b6d: lea    r8,[rbp-0x9]
0x00409b71: call   0x140420e40
0x00409b76: mov    rbx,QWORD PTR [rbp-0x1]
0x00409b7a: test   rbx,rbx
0x00409b7d: je     0x140409de8
0x00409b83: movsx  r13d,r14w
0x00409b87: and    r13d,0x8000000f
0x00409b8e: jge    0x140409b9a
0x00409b90: dec    r13d
0x00409b93: or     r13d,0xfffffff0
0x00409b97: inc    r13d
0x00409b9a: movsx  eax,WORD PTR [rbp+0x77]
0x00409b9e: and    eax,0x8000000f
0x00409ba3: mov    DWORD PTR [rbp-0x15],eax
0x00409ba6: jge    0x140409bb2
0x00409ba8: dec    eax
0x00409baa: or     eax,0xfffffff0
0x00409bad: inc    eax
0x00409baf: mov    DWORD PTR [rbp-0x15],eax
0x00409bb2: mov    r12d,DWORD PTR [rbx+0x10]
0x00409bb6: sub    r12d,DWORD PTR [rbx+0x8]
0x00409bba: sar    r12,0x3
0x00409bbe: sub    r12w,0x1
0x00409bc3: js     0x140409dde
0x00409bc9: movsxd r15,DWORD PTR [rbp-0x15]
0x00409bcd: movsx  rdi,r12w
0x00409bd1: shl    rdi,0x3
0x00409bd5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00409be0: mov    rax,QWORD PTR [rbx+0x8]
0x00409be4: mov    rcx,QWORD PTR [rdi+rax*1]
0x00409be8: mov    rax,QWORD PTR [rcx]
0x00409beb: call   QWORD PTR [rax]
0x00409bed: cmp    ax,0x3
0x00409bf1: jne    0x140409ccd
0x00409bf7: mov    rax,QWORD PTR [rbx+0x8]
0x00409bfb: movsx  r14,r15w
0x00409bff: mov    rsi,QWORD PTR [rdi+rax*1]
0x00409c03: movsx  rax,r13w
0x00409c07: shl    rax,0x4
0x00409c0b: add    rax,rsi
0x00409c0e: add    r14,rax
0x00409c11: cmp    BYTE PTR [r14+0x12],0x0
0x00409c16: jbe    0x140409ccd
0x00409c1c: mov    ecx,0x50
0x00409c21: call   0x141539690
0x00409c26: mov    rbx,rax
0x00409c29: xorps  xmm0,xmm0
0x00409c2c: mov    QWORD PTR [rbp-0x9],rbx
0x00409c30: movups XMMWORD PTR [rax+0x28],xmm0
0x00409c34: mov    QWORD PTR [rbx+0x40],0xf
0x00409c3c: xor    eax,eax
0x00409c3e: mov    QWORD PTR [rbx+0x38],rax
0x00409c42: mov    BYTE PTR [rbx+0x28],al
0x00409c45: mov    eax,0xffff8ad0
0x00409c4a: mov    DWORD PTR [rbx],0x7
0x00409c50: mov    QWORD PTR [rbx+0x4],0xffffffffffffffff
0x00409c58: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00409c5f: mov    WORD PTR [rbx+0x20],ax
0x00409c63: movsx  eax,WORD PTR [rsi+0x8]
0x00409c67: mov    DWORD PTR [rbx+0xc],eax
0x00409c6a: mov    eax,DWORD PTR [rsi+0xc]
0x00409c6d: mov    DWORD PTR [rbx+0x10],eax
0x00409c70: movsx  eax,WORD PTR [rsi+0x10]
0x00409c74: mov    DWORD PTR [rbx+0x14],eax
0x00409c77: movzx  eax,BYTE PTR [r14+0x12]
0x00409c7c: cmp    al,0x64
0x00409c7e: jb     0x140409c89
0x00409c80: mov    eax,DWORD PTR [rbp-0x11]
0x00409c83: mov    WORD PTR [rbx+0x18],ax
0x00409c87: jmp    0x140409c9b
0x00409c89: cmp    al,0x32
0x00409c8b: jb     0x140409c95
0x00409c8d: mov    WORD PTR [rbx+0x18],0x2
0x00409c93: jmp    0x140409c9b
0x00409c95: mov    WORD PTR [rbx+0x18],0x1
0x00409c9b: mov    rcx,rbx
0x00409c9e: call   0x140406860
0x00409ca3: mov    rdx,QWORD PTR [rip+0x2291f7e]        # 0x14269bc28
0x00409caa: cmp    rdx,QWORD PTR [rip+0x2291f7f]        # 0x14269bc30
0x00409cb1: je     0x140409cc0
0x00409cb3: mov    QWORD PTR [rdx],rbx
0x00409cb6: add    QWORD PTR [rip+0x2291f6a],0x8        # 0x14269bc28
0x00409cbe: jmp    0x140409cc9
0x00409cc0: lea    r8,[rbp-0x9]
0x00409cc4: call   0x140420e40
0x00409cc9: mov    rbx,QWORD PTR [rbp-0x1]
0x00409ccd: mov    rax,QWORD PTR [rbx+0x8]
0x00409cd1: mov    rcx,QWORD PTR [rdi+rax*1]
0x00409cd5: mov    rax,QWORD PTR [rcx]
0x00409cd8: call   QWORD PTR [rax]
0x00409cda: cmp    ax,0x6
0x00409cde: jne    0x140409dc6
0x00409ce4: mov    rax,QWORD PTR [rbx+0x8]
0x00409ce8: movsx  rcx,r13w
0x00409cec: shl    rcx,0x4
0x00409cf0: mov    rsi,QWORD PTR [rdi+rax*1]
0x00409cf4: movsx  rax,r15w
0x00409cf8: add    rcx,rax
0x00409cfb: cmp    DWORD PTR [rsi+rcx*4+0x18],0x0
0x00409d00: lea    r14,[rsi+rcx*4]
0x00409d04: jle    0x140409dc6
0x00409d0a: mov    ecx,0x50
0x00409d0f: call   0x141539690
0x00409d14: mov    rbx,rax
0x00409d17: mov    QWORD PTR [rbp-0x9],rax
0x00409d1b: xor    ecx,ecx
0x00409d1d: xorps  xmm0,xmm0
0x00409d20: movups XMMWORD PTR [rax+0x28],xmm0
0x00409d24: mov    QWORD PTR [rax+0x38],rcx
0x00409d28: mov    QWORD PTR [rax+0x40],0xf
0x00409d30: mov    BYTE PTR [rax+0x28],cl
0x00409d33: mov    DWORD PTR [rax],0x7
0x00409d39: mov    QWORD PTR [rax+0x4],0xffffffffffffffff
0x00409d41: mov    eax,0xffff8ad0
0x00409d46: mov    WORD PTR [rbx+0x20],ax
0x00409d4a: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00409d51: movsx  eax,WORD PTR [rsi+0x8]
0x00409d55: mov    DWORD PTR [rbx+0x4],eax
0x00409d58: movsx  eax,WORD PTR [rsi+0xa]
0x00409d5c: mov    DWORD PTR [rbx+0x8],eax
0x00409d5f: movsx  eax,WORD PTR [rsi+0xc]
0x00409d63: mov    DWORD PTR [rbx+0xc],eax
0x00409d66: mov    eax,DWORD PTR [rsi+0x10]
0x00409d69: mov    DWORD PTR [rbx+0x10],eax
0x00409d6c: mov    DWORD PTR [rbx+0x14],ecx
0x00409d6f: mov    eax,DWORD PTR [r14+0x18]
0x00409d73: cmp    eax,0x64
0x00409d76: jl     0x140409d81
0x00409d78: mov    eax,DWORD PTR [rbp-0x11]
0x00409d7b: mov    WORD PTR [rbx+0x18],ax
0x00409d7f: jmp    0x140409d94
0x00409d81: cmp    eax,0x32
0x00409d84: jl     0x140409d8e
0x00409d86: mov    WORD PTR [rbx+0x18],0x2
0x00409d8c: jmp    0x140409d94
0x00409d8e: mov    WORD PTR [rbx+0x18],0x1
0x00409d94: mov    rcx,rbx
0x00409d97: call   0x140406860
0x00409d9c: mov    rdx,QWORD PTR [rip+0x2291e85]        # 0x14269bc28
0x00409da3: cmp    rdx,QWORD PTR [rip+0x2291e86]        # 0x14269bc30
0x00409daa: je     0x140409db9
0x00409dac: mov    QWORD PTR [rdx],rbx
0x00409daf: add    QWORD PTR [rip+0x2291e71],0x8        # 0x14269bc28
0x00409db7: jmp    0x140409dc2
0x00409db9: lea    r8,[rbp-0x9]
0x00409dbd: call   0x140420e40
0x00409dc2: mov    rbx,QWORD PTR [rbp-0x1]
0x00409dc6: sub    rdi,0x8
0x00409dca: sub    r12w,0x1
0x00409dcf: jns    0x140409be0
0x00409dd5: mov    r15,QWORD PTR [rbp+0x67]
0x00409dd9: movzx  r14d,WORD PTR [rbp+0x6f]
0x00409dde: movzx  r12d,WORD PTR [rbp+0x7f]
0x00409de3: movzx  r13d,WORD PTR [rbp+0x77]
0x00409de8: test   r14w,r14w
0x00409dec: js     0x140409f48
0x00409df2: movsx  eax,r14w
0x00409df6: cmp    eax,DWORD PTR [r15+0x116bec]
0x00409dfd: jge    0x140409f48
0x00409e03: test   r13w,r13w
0x00409e07: js     0x140409f48
0x00409e0d: movsx  eax,r13w
0x00409e11: mov    r8d,eax
0x00409e14: cmp    eax,DWORD PTR [r15+0x116bf0]
0x00409e1b: jge    0x140409f48
0x00409e21: test   r12w,r12w
0x00409e25: js     0x140409f48
0x00409e2b: movsx  eax,r12w
0x00409e2f: cmp    eax,DWORD PTR [r15+0x116bf4]
0x00409e36: jge    0x140409f48
0x00409e3c: mov    r9,QWORD PTR [r15+0x116bb8]
0x00409e43: movzx  eax,r14w
0x00409e47: movzx  ecx,r13w
0x00409e4b: shr    ax,0x4
0x00409e4f: shr    cx,0x4
0x00409e53: test   r9,r9
0x00409e56: je     0x140409f48
0x00409e5c: movzx  edx,cx
0x00409e5f: movzx  eax,ax
0x00409e62: movsx  rcx,r12w
0x00409e66: mov    rax,QWORD PTR [r9+rax*8]
0x00409e6a: mov    rax,QWORD PTR [rax+rdx*8]
0x00409e6e: mov    rdx,QWORD PTR [rax+rcx*8]
0x00409e72: test   rdx,rdx
0x00409e75: je     0x140409f48
0x00409e7b: mov    ecx,r14d
0x00409e7e: and    r8d,0xf
0x00409e82: and    ecx,0xf
0x00409e85: shl    rcx,0x4
0x00409e89: add    rcx,r8
0x00409e8c: test   BYTE PTR [rdx+rcx*4+0x2a0],0x8
0x00409e94: je     0x140409f48
0x00409e9a: movzx  r8d,r13w
0x00409e9e: movzx  ecx,r14w
0x00409ea2: shr    rcx,0x4
0x00409ea6: and    r8w,0xf
0x00409eab: movzx  edx,r13w
0x00409eaf: shr    rdx,0x4
0x00409eb3: movsx  esi,r14w
0x00409eb7: mov    rax,QWORD PTR [r9+rcx*8]
0x00409ebb: movsx  rcx,r12w
0x00409ebf: mov    rax,QWORD PTR [rax+rdx*8]
0x00409ec3: movzx  edx,si
0x00409ec6: and    dx,0xf
0x00409eca: mov    rcx,QWORD PTR [rax+rcx*8]
0x00409ece: call   0x1405317f0
0x00409ed3: mov    r14,rax
0x00409ed6: test   rax,rax
0x00409ed9: je     0x140409f48
0x00409edb: mov    ecx,DWORD PTR [rip+0x20de207]        # 0x1424e80e8
0x00409ee1: lea    r11,[rip+0x2238d2c]        # 0x142642c14
0x00409ee8: mov    r10d,DWORD PTR [rip+0x20de201]        # 0x1424e80f0
0x00409eef: lea    r8d,[rcx+rcx*2]
0x00409ef3: mov    ecx,DWORD PTR [rip+0x20de1f3]        # 0x1424e80ec
0x00409ef9: shl    r8d,0x4
0x00409efd: lea    r9d,[rcx+rcx*2]
0x00409f01: shl    r9d,0x4
0x00409f05: lea    rcx,[rip+0x2237d68]        # 0x142641c74
0x00409f0c: nop    DWORD PTR [rax+0x0]
0x00409f10: mov    edi,DWORD PTR [rcx-0xfa0]
0x00409f16: mov    ebx,DWORD PTR [rcx]
0x00409f18: sub    edi,r8d
0x00409f1b: mov    edx,DWORD PTR [rcx+0xfa0]
0x00409f21: sub    ebx,r9d
0x00409f24: sub    edx,r10d
0x00409f27: cmp    esi,edi
0x00409f29: jne    0x140409f3f
0x00409f2b: movsx  eax,r13w
0x00409f2f: cmp    eax,ebx
0x00409f31: jne    0x140409f3f
0x00409f33: movsx  eax,r12w
0x00409f37: cmp    eax,edx
0x00409f39: je     0x14040a094
0x00409f3f: add    rcx,0x4
0x00409f43: cmp    rcx,r11
0x00409f46: jl     0x140409f10
0x00409f48: movzx  edi,WORD PTR [rbp+0x6f]
0x00409f4c: mov    r12d,0xffff8ad0
0x00409f52: mov    rax,QWORD PTR [rbp-0x1]
0x00409f56: test   rax,rax
0x00409f59: je     0x14040a1bc
0x00409f5f: mov    rdx,QWORD PTR [rax+0x50]
0x00409f63: xor    ecx,ecx
0x00409f65: mov    rax,QWORD PTR [rax+0x58]
0x00409f69: mov    r14d,ecx
0x00409f6c: sub    rax,rdx
0x00409f6f: sar    rax,0x2
0x00409f73: test   rax,rax
0x00409f76: je     0x14040a1bc
0x00409f7c: mov    esi,ecx
0x00409f7e: xchg   ax,ax
0x00409f80: mov    r11,QWORD PTR [r15+0x13f60]
0x00409f87: mov    rax,QWORD PTR [r15+0x13f68]
0x00409f8e: mov    r9d,DWORD PTR [rdx+rsi*1]
0x00409f92: sub    rax,r11
0x00409f95: sar    rax,0x3
0x00409f99: test   eax,eax
0x00409f9b: je     0x14040a18d
0x00409fa1: cmp    r9d,0xffffffff
0x00409fa5: je     0x14040a18d
0x00409fab: sub    eax,0x1
0x00409fae: mov    edx,ecx
0x00409fb0: js     0x140409fe8
0x00409fb2: nop    DWORD PTR [rax+0x0]
0x00409fb6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00409fc0: lea    ecx,[rdx+rax*1]
0x00409fc3: mov    r10d,eax
0x00409fc6: sar    ecx,1
0x00409fc8: movsxd rax,ecx
0x00409fcb: mov    rbx,QWORD PTR [r11+rax*8]
0x00409fcf: cmp    DWORD PTR [rbx+0x1c],r9d
0x00409fd3: je     0x140409feb
0x00409fd5: lea    eax,[rcx+0x1]
0x00409fd8: cmovle edx,eax
0x00409fdb: lea    eax,[rcx-0x1]
0x00409fde: cmovle eax,r10d
0x00409fe2: cmp    edx,eax
0x00409fe4: jle    0x140409fc0
0x00409fe6: xor    ecx,ecx
0x00409fe8: mov    rbx,rcx
0x00409feb: test   rbx,rbx
0x00409fee: je     0x14040a18d
0x00409ff4: test   DWORD PTR [rbx+0x10],0x1000000
0x00409ffb: je     0x14040a18d
0x0040a001: cmp    WORD PTR [rbx+0x8],di
0x0040a005: jne    0x14040a18d
0x0040a00b: cmp    WORD PTR [rbx+0xa],r13w
0x0040a010: jne    0x14040a18d
0x0040a016: movzx  eax,WORD PTR [rbp+0x7f]
0x0040a01a: cmp    WORD PTR [rbx+0xc],ax
0x0040a01e: jne    0x14040a18d
0x0040a024: mov    ecx,0x50
0x0040a029: call   0x141539690
0x0040a02e: mov    rdi,rax
0x0040a031: xorps  xmm0,xmm0
0x0040a034: mov    rcx,rdi
0x0040a037: mov    QWORD PTR [rbp-0x9],rdi
0x0040a03b: movups XMMWORD PTR [rax+0x28],xmm0
0x0040a03f: mov    QWORD PTR [rdi+0x40],0xf
0x0040a047: xor    eax,eax
0x0040a049: mov    QWORD PTR [rdi+0x38],rax
0x0040a04d: mov    BYTE PTR [rdi+0x28],al
0x0040a050: mov    DWORD PTR [rdi+0x4],0xffffffff
0x0040a057: mov    DWORD PTR [rdi],eax
0x0040a059: mov    DWORD PTR [rdi+0x1c],0x8ad08ad0
0x0040a060: mov    WORD PTR [rdi+0x20],r12w
0x0040a065: mov    eax,DWORD PTR [rbx+0x1c]
0x0040a068: mov    DWORD PTR [rdi+0x4],eax
0x0040a06b: call   0x140406860
0x0040a070: mov    rdx,QWORD PTR [rip+0x2291bb1]        # 0x14269bc28
0x0040a077: cmp    rdx,QWORD PTR [rip+0x2291bb2]        # 0x14269bc30
0x0040a07e: je     0x14040a184
0x0040a084: mov    QWORD PTR [rdx],rdi
0x0040a087: add    QWORD PTR [rip+0x2291b99],0x8        # 0x14269bc28
0x0040a08f: jmp    0x14040a18d
0x0040a094: and    edi,0x8000000f
0x0040a09a: jge    0x14040a0a3
0x0040a09c: dec    edi
0x0040a09e: or     edi,0xfffffff0
0x0040a0a1: inc    edi
0x0040a0a3: and    ebx,0x8000000f
0x0040a0a9: jge    0x14040a0b2
0x0040a0ab: dec    ebx
0x0040a0ad: or     ebx,0xfffffff0
0x0040a0b0: inc    ebx
0x0040a0b2: mov    ecx,0x50
0x0040a0b7: call   0x141539690
0x0040a0bc: mov    rsi,rax
0x0040a0bf: movsx  rdx,di
0x0040a0c3: movzx  edi,WORD PTR [rbp+0x6f]
0x0040a0c7: xorps  xmm0,xmm0
0x0040a0ca: shl    rdx,0x4
0x0040a0ce: mov    r12d,0xffff8ad0
0x0040a0d4: movups XMMWORD PTR [rax+0x28],xmm0
0x0040a0d8: mov    QWORD PTR [rsi+0x40],0xf
0x0040a0e0: xor    eax,eax
0x0040a0e2: mov    QWORD PTR [rsi+0x38],rax
0x0040a0e6: mov    rcx,rsi
0x0040a0e9: mov    BYTE PTR [rsi+0x28],al
0x0040a0ec: mov    DWORD PTR [rsi],0xc
0x0040a0f2: mov    DWORD PTR [rsi+0x1c],0x8ad08ad0
0x0040a0f9: mov    WORD PTR [rsi+0x20],r12w
0x0040a0fe: movsx  rax,bx
0x0040a102: add    rdx,rax
0x0040a105: mov    QWORD PTR [rbp-0x9],rsi
0x0040a109: movzx  eax,WORD PTR [r14+rdx*2+0x8]
0x0040a10f: mov    WORD PTR [rsi+0x4],ax
0x0040a113: movzx  eax,BYTE PTR [r14+rdx*1+0x208]
0x0040a11c: mov    BYTE PTR [rsi+0x6],al
0x0040a11f: mov    eax,DWORD PTR [r14+rdx*4+0x308]
0x0040a127: mov    DWORD PTR [rsi+0x8],eax
0x0040a12a: mov    eax,DWORD PTR [r14+rdx*4+0x708]
0x0040a132: mov    DWORD PTR [rsi+0xc],eax
0x0040a135: mov    eax,DWORD PTR [r14+rdx*4+0xb08]
0x0040a13d: mov    DWORD PTR [rsi+0x10],eax
0x0040a140: movzx  eax,WORD PTR [rbp+0x7f]
0x0040a144: mov    WORD PTR [rsi+0x1c],di
0x0040a148: mov    WORD PTR [rsi+0x1e],r13w
0x0040a14d: mov    WORD PTR [rsi+0x20],ax
0x0040a151: call   0x140406860
0x0040a156: mov    rdx,QWORD PTR [rip+0x2291acb]        # 0x14269bc28
0x0040a15d: cmp    rdx,QWORD PTR [rip+0x2291acc]        # 0x14269bc30
0x0040a164: je     0x14040a176
0x0040a166: mov    QWORD PTR [rdx],rsi
0x0040a169: add    QWORD PTR [rip+0x2291ab7],0x8        # 0x14269bc28
0x0040a171: jmp    0x140409f52
0x0040a176: lea    r8,[rbp-0x9]
0x0040a17a: call   0x140420e40
0x0040a17f: jmp    0x140409f52
0x0040a184: lea    r8,[rbp-0x9]
0x0040a188: call   0x140420e40
0x0040a18d: mov    rax,QWORD PTR [rbp-0x1]
0x0040a191: inc    r14d
0x0040a194: movzx  edi,WORD PTR [rbp+0x6f]
0x0040a198: add    rsi,0x4
0x0040a19c: mov    rdx,QWORD PTR [rax+0x50]
0x0040a1a0: mov    rcx,QWORD PTR [rax+0x58]
0x0040a1a4: sub    rcx,rdx
0x0040a1a7: movsxd rax,r14d
0x0040a1aa: sar    rcx,0x2
0x0040a1ae: cmp    rax,rcx
0x0040a1b1: mov    ecx,0x0
0x0040a1b6: jb     0x140409f80
0x0040a1bc: mov    rsi,QWORD PTR [rsp+0x80]
0x0040a1c4: mov    rdi,QWORD PTR [rsp+0x78]
0x0040a1c9: add    rsp,0x88
0x0040a1d0: pop    r15
0x0040a1d2: pop    r14
0x0040a1d4: pop    r13
0x0040a1d6: pop    r12
0x0040a1d8: pop    rbx
0x0040a1d9: pop    rbp
0x0040a1da: ret
