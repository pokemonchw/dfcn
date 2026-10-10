# classic PE:6a70b91c:0270a000; category-tree-builder; RVA 0x27d150..0x27db61
0x0027d150: mov    QWORD PTR [rsp+0x8],rcx
0x0027d155: push   rdi
0x0027d156: push   r12
0x0027d158: push   r14
0x0027d15a: sub    rsp,0x70
0x0027d15e: lea    r12,[rcx+0x28]
0x0027d162: mov    QWORD PTR [rcx+0xc0],0x0
0x0027d16d: mov    rax,QWORD PTR [r12]
0x0027d171: mov    rdi,rcx
0x0027d174: mov    QWORD PTR [rsp+0x20],r12
0x0027d179: cmp    rax,QWORD PTR [r12+0x8]
0x0027d17e: je     0x14027d185
0x0027d180: mov    QWORD PTR [r12+0x8],rax
0x0027d185: mov    QWORD PTR [rsp+0x68],rbx
0x0027d18a: lea    r14,[rcx+0x40]
0x0027d18e: mov    QWORD PTR [rsp+0x60],rbp
0x0027d193: mov    rcx,r14
0x0027d196: mov    QWORD PTR [rsp+0x58],rsi
0x0027d19b: mov    QWORD PTR [rsp+0x50],r13
0x0027d1a0: mov    QWORD PTR [rsp+0x48],r15
0x0027d1a5: mov    QWORD PTR [rsp+0x28],r14
0x0027d1aa: call   0x1400bb940
0x0027d1af: cmp    QWORD PTR [rdi+0x68],0x0
0x0027d1b4: jne    0x14027d6b8
0x0027d1ba: mov    rdx,QWORD PTR [r12+0x8]
0x0027d1bf: mov    QWORD PTR [rsp+0x98],0x0
0x0027d1cb: cmp    rdx,QWORD PTR [r12+0x10]
0x0027d1d0: je     0x14027d1e1
0x0027d1d2: mov    QWORD PTR [rdx],0x0
0x0027d1d9: add    QWORD PTR [r12+0x8],0x8
0x0027d1df: jmp    0x14027d1f1
0x0027d1e1: lea    r8,[rsp+0x98]
0x0027d1e9: mov    rcx,r12
0x0027d1ec: call   0x1400bacc0
0x0027d1f1: mov    ecx,0x20 ; inline_fragment=" "
0x0027d1f6: call   0x141534600
0x0027d1fb: xorps  xmm0,xmm0
0x0027d1fe: mov    QWORD PTR [rsp+0x98],rax
0x0027d206: xor    r8d,r8d
0x0027d209: lea    rdx,[rip+0x13692a0]        # 0x1415e64b0
0x0027d210: mov    rcx,rax
0x0027d213: mov    rbx,rax
0x0027d216: movups XMMWORD PTR [rax],xmm0
0x0027d219: mov    QWORD PTR [rax+0x10],0x0
0x0027d221: mov    QWORD PTR [rax+0x18],0xf
0x0027d229: mov    BYTE PTR [rax],0x0
0x0027d22c: call   0x14006f860
0x0027d231: mov    rdx,QWORD PTR [r14+0x8]
0x0027d235: cmp    rdx,QWORD PTR [r14+0x10]
0x0027d239: je     0x14027d245
0x0027d23b: mov    QWORD PTR [rdx],rbx
0x0027d23e: add    QWORD PTR [r14+0x8],0x8
0x0027d243: jmp    0x14027d255
0x0027d245: lea    r8,[rsp+0x98]
0x0027d24d: mov    rcx,r14
0x0027d250: call   0x1400bacc0
0x0027d255: mov    rax,QWORD PTR [rip+0x2273f04]        # 0x1424f1160
0x0027d25c: xor    ecx,ecx
0x0027d25e: sub    rax,QWORD PTR [rip+0x2273ef3]        # 0x1424f1158
0x0027d265: sar    rax,0x3
0x0027d269: cdqe
0x0027d26b: mov    QWORD PTR [rsp+0xa8],rcx
0x0027d273: mov    QWORD PTR [rsp+0x38],rax
0x0027d278: test   rax,rax
0x0027d27b: jle    0x14027da9a
0x0027d281: nop    DWORD PTR [rax+0x0]
0x0027d285: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x0027d290: mov    rax,QWORD PTR [rip+0x2273ec1]        # 0x1424f1158
0x0027d297: mov    r13,QWORD PTR [rax+rcx*8]
0x0027d29b: mov    QWORD PTR [rsp+0x30],r13
0x0027d2a0: cmp    DWORD PTR [r13+0x48],0x0
0x0027d2a5: jle    0x14027d5f4
0x0027d2ab: mov    rax,QWORD PTR [r13+0x40]
0x0027d2af: test   BYTE PTR [rax],0x4
0x0027d2b2: je     0x14027d5f4
0x0027d2b8: mov    rax,QWORD PTR [r13+0xc0]
0x0027d2bf: sub    rax,QWORD PTR [r13+0xb8]
0x0027d2c6: sar    rax,0x2
0x0027d2ca: test   rax,rax
0x0027d2cd: je     0x14027d443
0x0027d2d3: mov    BYTE PTR [rsp+0x98],0x0
0x0027d2db: xor    r12d,r12d
0x0027d2de: mov    DWORD PTR [rsp+0xa0],0x0
0x0027d2e9: nop    DWORD PTR [rax+0x0]
0x0027d2f0: mov    rbx,QWORD PTR [rip+0x216ab21]        # 0x1423e7e18
0x0027d2f7: mov    rdi,QWORD PTR [rip+0x216ab22]        # 0x1423e7e20
0x0027d2fe: xchg   ax,ax
0x0027d300: cmp    rbx,rdi
0x0027d303: jae    0x14027d3f0
0x0027d309: mov    rcx,QWORD PTR [rbx]
0x0027d30c: mov    rsi,QWORD PTR [r13+0xb8]
0x0027d313: mov    rax,QWORD PTR [rcx]
0x0027d316: call   QWORD PTR [rax+0xd0]
0x0027d31c: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027d320: jne    0x14027d3e7
0x0027d326: mov    rcx,QWORD PTR [rbx]
0x0027d329: mov    rsi,QWORD PTR [r13+0xd0]
0x0027d330: mov    rax,QWORD PTR [rcx]
0x0027d333: call   QWORD PTR [rax+0xd8]
0x0027d339: movsx  ecx,ax
0x0027d33c: cmp    ecx,DWORD PTR [rsi+r12*1]
0x0027d340: jne    0x14027d3e7
0x0027d346: mov    rcx,QWORD PTR [rbx]
0x0027d349: mov    rsi,QWORD PTR [r13+0xe8]
0x0027d350: mov    rax,QWORD PTR [rcx]
0x0027d353: call   QWORD PTR [rax]
0x0027d355: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027d359: jne    0x14027d3e7
0x0027d35f: mov    rax,QWORD PTR [rip+0x2161c9a]        # 0x1423df000
0x0027d366: mov    rsi,QWORD PTR [rbx]
0x0027d369: mov    rcx,rsi
0x0027d36c: movsx  ebp,WORD PTR [rax+0xac]
0x0027d373: movsx  r15d,WORD PTR [rax+0xaa]
0x0027d37b: movsx  r14d,WORD PTR [rax+0xa8]
0x0027d383: mov    rax,QWORD PTR [rsi]
0x0027d386: call   QWORD PTR [rax+0x130]
0x0027d38c: test   al,al
0x0027d38e: je     0x14027d3e7
0x0027d390: cmp    ebp,DWORD PTR [rsi+0x20]
0x0027d393: jne    0x14027d3e7
0x0027d395: mov    rax,QWORD PTR [rsi]
0x0027d398: mov    rcx,rsi
0x0027d39b: call   QWORD PTR [rax+0x140]
0x0027d3a1: test   al,al
0x0027d3a3: je     0x14027d3cf
0x0027d3a5: cmp    QWORD PTR [rsi+0x30],0x0
0x0027d3aa: je     0x14027d3cf
0x0027d3ac: movzx  r9d,bp
0x0027d3b0: movzx  r8d,r15w
0x0027d3b4: movzx  edx,r14w
0x0027d3b8: mov    rcx,rsi
0x0027d3bb: call   0x1405561d0
0x0027d3c0: test   al,al
0x0027d3c2: je     0x14027d3e7
0x0027d3c4: mov    dl,0x1
0x0027d3c6: mov    BYTE PTR [rsp+0x98],dl
0x0027d3cd: jmp    0x14027d3f8
0x0027d3cf: cmp    r14d,DWORD PTR [rsi+0x8]
0x0027d3d3: jl     0x14027d3e7
0x0027d3d5: cmp    r14d,DWORD PTR [rsi+0x14]
0x0027d3d9: jg     0x14027d3e7
0x0027d3db: cmp    r15d,DWORD PTR [rsi+0xc]
0x0027d3df: jl     0x14027d3e7
0x0027d3e1: cmp    r15d,DWORD PTR [rsi+0x18]
0x0027d3e5: jle    0x14027d3c4
0x0027d3e7: add    rbx,0x8
0x0027d3eb: jmp    0x14027d300
0x0027d3f0: movzx  edx,BYTE PTR [rsp+0x98]
0x0027d3f8: mov    eax,DWORD PTR [rsp+0xa0]
0x0027d3ff: add    r12,0x4
0x0027d403: mov    rcx,QWORD PTR [r13+0xc0]
0x0027d40a: inc    eax
0x0027d40c: sub    rcx,QWORD PTR [r13+0xb8]
0x0027d413: mov    DWORD PTR [rsp+0xa0],eax
0x0027d41a: cdqe
0x0027d41c: sar    rcx,0x2
0x0027d420: cmp    rax,rcx
0x0027d423: jb     0x14027d2f0
0x0027d429: mov    r14,QWORD PTR [rsp+0x28]
0x0027d42e: test   dl,dl
0x0027d430: je     0x14027d5ec
0x0027d436: mov    r12,QWORD PTR [rsp+0x20]
0x0027d43b: mov    rdi,QWORD PTR [rsp+0x90]
0x0027d443: cmp    QWORD PTR [r13+0x150],0x0
0x0027d44b: jne    0x14027d4e1
0x0027d451: mov    rdx,QWORD PTR [r12+0x8]
0x0027d456: cmp    rdx,QWORD PTR [r12+0x10]
0x0027d45b: je     0x14027d468
0x0027d45d: mov    QWORD PTR [rdx],r13
0x0027d460: add    QWORD PTR [r12+0x8],0x8
0x0027d466: jmp    0x14027d475
0x0027d468: lea    r8,[rsp+0x30]
0x0027d46d: mov    rcx,r12
0x0027d470: call   0x1400bacc0
0x0027d475: mov    ecx,0x20 ; inline_fragment=" "
0x0027d47a: call   0x141534600
0x0027d47f: xorps  xmm0,xmm0
0x0027d482: mov    QWORD PTR [rsp+0x98],rax
0x0027d48a: xor    r8d,r8d
0x0027d48d: lea    rdx,[rip+0x136901c]        # 0x1415e64b0
0x0027d494: mov    rcx,rax
0x0027d497: mov    rbx,rax
0x0027d49a: movups XMMWORD PTR [rax],xmm0
0x0027d49d: mov    QWORD PTR [rax+0x10],0x0
0x0027d4a5: mov    QWORD PTR [rax+0x18],0xf
0x0027d4ad: mov    BYTE PTR [rax],0x0
0x0027d4b0: call   0x14006f860
0x0027d4b5: mov    rdx,QWORD PTR [r14+0x8]
0x0027d4b9: cmp    rdx,QWORD PTR [r14+0x10]
0x0027d4bd: je     0x14027d4cc
0x0027d4bf: mov    QWORD PTR [rdx],rbx
0x0027d4c2: add    QWORD PTR [r14+0x8],0x8
0x0027d4c7: jmp    0x14027d5ec
0x0027d4cc: lea    r8,[rsp+0x98]
0x0027d4d4: mov    rcx,r14
0x0027d4d7: call   0x1400bacc0
0x0027d4dc: jmp    0x14027d5ec
0x0027d4e1: mov    rsi,QWORD PTR [r14]
0x0027d4e4: mov    rbp,QWORD PTR [rdi+0x48]
0x0027d4e8: mov    rbx,rsi
0x0027d4eb: nop    DWORD PTR [rax+rax*1+0x0]
0x0027d4f0: cmp    rbx,rbp
0x0027d4f3: jae    0x14027d533
0x0027d4f5: mov    rcx,QWORD PTR [rbx]
0x0027d4f8: lea    rdx,[r13+0x140]
0x0027d4ff: cmp    QWORD PTR [rdx+0x18],0xf
0x0027d504: mov    rax,QWORD PTR [rdx+0x10]
0x0027d508: jbe    0x14027d50d
0x0027d50a: mov    rdx,QWORD PTR [rdx]
0x0027d50d: cmp    QWORD PTR [rcx+0x18],0xf
0x0027d512: mov    r8,QWORD PTR [rcx+0x10]
0x0027d516: jbe    0x14027d51b
0x0027d518: mov    rcx,QWORD PTR [rcx]
0x0027d51b: cmp    r8,rax
0x0027d51e: jne    0x14027d52d
0x0027d520: call   0x141535d84
0x0027d525: test   eax,eax
0x0027d527: je     0x14027d5ec
0x0027d52d: add    rbx,0x8
0x0027d531: jmp    0x14027d4f0
0x0027d533: mov    rbx,QWORD PTR [rip+0x2273c36]        # 0x1424f1170
0x0027d53a: mov    rdi,QWORD PTR [rip+0x2273c37]        # 0x1424f1178
0x0027d541: cmp    rbx,rdi
0x0027d544: jae    0x14027d5ec
0x0027d54a: mov    r15,QWORD PTR [rbx]
0x0027d54d: lea    rdx,[r13+0x140]
0x0027d554: cmp    QWORD PTR [rdx+0x18],0xf
0x0027d559: mov    rax,QWORD PTR [rdx+0x10]
0x0027d55d: jbe    0x14027d562
0x0027d55f: mov    rdx,QWORD PTR [rdx]
0x0027d562: cmp    QWORD PTR [r15+0x18],0xf
0x0027d567: mov    rcx,r15
0x0027d56a: mov    r8,QWORD PTR [r15+0x10]
0x0027d56e: jbe    0x14027d573
0x0027d570: mov    rcx,QWORD PTR [r15]
0x0027d573: cmp    r8,rax
0x0027d576: jne    0x14027d581
0x0027d578: call   0x141535d84
0x0027d57d: test   eax,eax
0x0027d57f: je     0x14027d587
0x0027d581: add    rbx,0x8
0x0027d585: jmp    0x14027d541
0x0027d587: test   r15,r15
0x0027d58a: je     0x14027d5ec
0x0027d58c: mov    rdi,QWORD PTR [rip+0x2273be5]        # 0x1424f1178
0x0027d593: mov    rbx,QWORD PTR [rip+0x2273bd6]        # 0x1424f1170
0x0027d59a: nop    WORD PTR [rax+rax*1+0x0]
0x0027d5a0: cmp    rbx,rdi
0x0027d5a3: jae    0x14027d61c
0x0027d5a5: cmp    QWORD PTR [r15+0x38],0xf
0x0027d5aa: lea    rdx,[r15+0x20]
0x0027d5ae: mov    r14,QWORD PTR [rbx]
0x0027d5b1: mov    rax,QWORD PTR [rdx+0x10]
0x0027d5b5: jbe    0x14027d5ba
0x0027d5b7: mov    rdx,QWORD PTR [rdx]
0x0027d5ba: cmp    QWORD PTR [r14+0x18],0xf
0x0027d5bf: mov    rcx,r14
0x0027d5c2: mov    r8,QWORD PTR [r14+0x10]
0x0027d5c6: jbe    0x14027d5cb
0x0027d5c8: mov    rcx,QWORD PTR [r14]
0x0027d5cb: cmp    r8,rax
0x0027d5ce: jne    0x14027d5d9
0x0027d5d0: call   0x141535d84
0x0027d5d5: test   eax,eax
0x0027d5d7: je     0x14027d5df
0x0027d5d9: add    rbx,0x8
0x0027d5dd: jmp    0x14027d5a0
0x0027d5df: mov    r15,r14
0x0027d5e2: test   r14,r14
0x0027d5e5: jne    0x14027d593
0x0027d5e7: mov    r14,QWORD PTR [rsp+0x28]
0x0027d5ec: mov    rcx,QWORD PTR [rsp+0xa8]
0x0027d5f4: mov    r12,QWORD PTR [rsp+0x20]
0x0027d5f9: inc    rcx
0x0027d5fc: mov    rdi,QWORD PTR [rsp+0x90]
0x0027d604: mov    QWORD PTR [rsp+0xa8],rcx
0x0027d60c: cmp    rcx,QWORD PTR [rsp+0x38]
0x0027d611: jl     0x14027d290
0x0027d617: jmp    0x14027da9a
0x0027d61c: test   r15,r15
0x0027d61f: je     0x14027d5e7
0x0027d621: cmp    rsi,rbp
0x0027d624: jae    0x14027d659
0x0027d626: cmp    QWORD PTR [r15+0x18],0xf
0x0027d62b: mov    rdx,r15
0x0027d62e: mov    rcx,QWORD PTR [rsi]
0x0027d631: jbe    0x14027d636
0x0027d633: mov    rdx,QWORD PTR [r15]
0x0027d636: cmp    QWORD PTR [rcx+0x18],0xf
0x0027d63b: mov    r8,QWORD PTR [rcx+0x10]
0x0027d63f: jbe    0x14027d644
0x0027d641: mov    rcx,QWORD PTR [rcx]
0x0027d644: cmp    r8,QWORD PTR [r15+0x10]
0x0027d648: jne    0x14027d653
0x0027d64a: call   0x141535d84
0x0027d64f: test   eax,eax
0x0027d651: je     0x14027d5e7
0x0027d653: add    rsi,0x8
0x0027d657: jmp    0x14027d621
0x0027d659: mov    rdx,QWORD PTR [r12+0x8]
0x0027d65e: mov    QWORD PTR [rsp+0x98],0x0
0x0027d66a: cmp    rdx,QWORD PTR [r12+0x10]
0x0027d66f: je     0x14027d693
0x0027d671: mov    r14,QWORD PTR [rsp+0x28]
0x0027d676: mov    QWORD PTR [rdx],0x0
0x0027d67d: mov    rcx,r14
0x0027d680: add    QWORD PTR [r12+0x8],0x8
0x0027d686: mov    rdx,r15
0x0027d689: call   0x1400bb700
0x0027d68e: jmp    0x14027d5ec
0x0027d693: lea    r8,[rsp+0x98]
0x0027d69b: mov    rcx,r12
0x0027d69e: call   0x1400bacc0
0x0027d6a3: mov    r14,QWORD PTR [rsp+0x28]
0x0027d6a8: mov    rdx,r15
0x0027d6ab: mov    rcx,r14
0x0027d6ae: call   0x1400bb700
0x0027d6b3: jmp    0x14027d5ec
0x0027d6b8: mov    rax,QWORD PTR [rip+0x2273aa1]        # 0x1424f1160
0x0027d6bf: xor    edi,edi
0x0027d6c1: sub    rax,QWORD PTR [rip+0x2273a90]        # 0x1424f1158
0x0027d6c8: sar    rax,0x3
0x0027d6cc: cdqe
0x0027d6ce: mov    QWORD PTR [rsp+0xa8],rdi
0x0027d6d6: mov    QWORD PTR [rsp+0x30],rax
0x0027d6db: test   rax,rax
0x0027d6de: jle    0x14027da9a
0x0027d6e4: nop    DWORD PTR [rax+0x0]
0x0027d6e8: nop    DWORD PTR [rax+rax*1+0x0]
0x0027d6f0: mov    rax,QWORD PTR [rip+0x2273a61]        # 0x1424f1158
0x0027d6f7: mov    r13,QWORD PTR [rax+rdi*8]
0x0027d6fb: mov    QWORD PTR [rsp+0x38],r13
0x0027d700: cmp    DWORD PTR [r13+0x48],0x0
0x0027d705: jle    0x14027da84
0x0027d70b: mov    rax,QWORD PTR [r13+0x40]
0x0027d70f: test   BYTE PTR [rax],0x4
0x0027d712: je     0x14027da84
0x0027d718: mov    rax,QWORD PTR [r13+0xc0]
0x0027d71f: sub    rax,QWORD PTR [r13+0xb8]
0x0027d726: sar    rax,0x2
0x0027d72a: test   rax,rax
0x0027d72d: je     0x14027d89e
0x0027d733: mov    BYTE PTR [rsp+0x98],0x0
0x0027d73b: xor    r12d,r12d
0x0027d73e: mov    DWORD PTR [rsp+0xa0],0x0
0x0027d749: nop    DWORD PTR [rax+0x0]
0x0027d750: mov    rbx,QWORD PTR [rip+0x216a6c1]        # 0x1423e7e18
0x0027d757: mov    rdi,QWORD PTR [rip+0x216a6c2]        # 0x1423e7e20
0x0027d75e: xchg   ax,ax
0x0027d760: cmp    rbx,rdi
0x0027d763: jae    0x14027d850
0x0027d769: mov    rcx,QWORD PTR [rbx]
0x0027d76c: mov    rsi,QWORD PTR [r13+0xb8]
0x0027d773: mov    rax,QWORD PTR [rcx]
0x0027d776: call   QWORD PTR [rax+0xd0]
0x0027d77c: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027d780: jne    0x14027d847
0x0027d786: mov    rcx,QWORD PTR [rbx]
0x0027d789: mov    rsi,QWORD PTR [r13+0xd0]
0x0027d790: mov    rax,QWORD PTR [rcx]
0x0027d793: call   QWORD PTR [rax+0xd8]
0x0027d799: movsx  ecx,ax
0x0027d79c: cmp    ecx,DWORD PTR [rsi+r12*1]
0x0027d7a0: jne    0x14027d847
0x0027d7a6: mov    rcx,QWORD PTR [rbx]
0x0027d7a9: mov    rsi,QWORD PTR [r13+0xe8]
0x0027d7b0: mov    rax,QWORD PTR [rcx]
0x0027d7b3: call   QWORD PTR [rax]
0x0027d7b5: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027d7b9: jne    0x14027d847
0x0027d7bf: mov    rax,QWORD PTR [rip+0x216183a]        # 0x1423df000
0x0027d7c6: mov    rsi,QWORD PTR [rbx]
0x0027d7c9: mov    rcx,rsi
0x0027d7cc: movsx  ebp,WORD PTR [rax+0xac]
0x0027d7d3: movsx  r15d,WORD PTR [rax+0xaa]
0x0027d7db: movsx  r14d,WORD PTR [rax+0xa8]
0x0027d7e3: mov    rax,QWORD PTR [rsi]
0x0027d7e6: call   QWORD PTR [rax+0x130]
0x0027d7ec: test   al,al
0x0027d7ee: je     0x14027d847
0x0027d7f0: cmp    ebp,DWORD PTR [rsi+0x20]
0x0027d7f3: jne    0x14027d847
0x0027d7f5: mov    rax,QWORD PTR [rsi]
0x0027d7f8: mov    rcx,rsi
0x0027d7fb: call   QWORD PTR [rax+0x140]
0x0027d801: test   al,al
0x0027d803: je     0x14027d82f
0x0027d805: cmp    QWORD PTR [rsi+0x30],0x0
0x0027d80a: je     0x14027d82f
0x0027d80c: movzx  r9d,bp
0x0027d810: movzx  r8d,r15w
0x0027d814: movzx  edx,r14w
0x0027d818: mov    rcx,rsi
0x0027d81b: call   0x1405561d0
0x0027d820: test   al,al
0x0027d822: je     0x14027d847
0x0027d824: mov    dl,0x1
0x0027d826: mov    BYTE PTR [rsp+0x98],dl
0x0027d82d: jmp    0x14027d858
0x0027d82f: cmp    r14d,DWORD PTR [rsi+0x8]
0x0027d833: jl     0x14027d847
0x0027d835: cmp    r14d,DWORD PTR [rsi+0x14]
0x0027d839: jg     0x14027d847
0x0027d83b: cmp    r15d,DWORD PTR [rsi+0xc]
0x0027d83f: jl     0x14027d847
0x0027d841: cmp    r15d,DWORD PTR [rsi+0x18]
0x0027d845: jle    0x14027d824
0x0027d847: add    rbx,0x8
0x0027d84b: jmp    0x14027d760
0x0027d850: movzx  edx,BYTE PTR [rsp+0x98]
0x0027d858: mov    eax,DWORD PTR [rsp+0xa0]
0x0027d85f: add    r12,0x4
0x0027d863: mov    rcx,QWORD PTR [r13+0xc0]
0x0027d86a: inc    eax
0x0027d86c: sub    rcx,QWORD PTR [r13+0xb8]
0x0027d873: mov    DWORD PTR [rsp+0xa0],eax
0x0027d87a: cdqe
0x0027d87c: sar    rcx,0x2
0x0027d880: cmp    rax,rcx
0x0027d883: jb     0x14027d750
0x0027d889: mov    rdi,QWORD PTR [rsp+0xa8]
0x0027d891: mov    r12,QWORD PTR [rsp+0x20]
0x0027d896: test   dl,dl
0x0027d898: je     0x14027da84
0x0027d89e: mov    rdx,QWORD PTR [rsp+0x90]
0x0027d8a6: lea    r14,[r13+0x140]
0x0027d8ad: add    rdx,0x58
0x0027d8b1: cmp    QWORD PTR [rdx+0x18],0xf
0x0027d8b6: mov    rax,QWORD PTR [rdx+0x10]
0x0027d8ba: jbe    0x14027d8bf
0x0027d8bc: mov    rdx,QWORD PTR [rdx]
0x0027d8bf: mov    r15,QWORD PTR [r14+0x18]
0x0027d8c3: mov    rcx,r14
0x0027d8c6: mov    rbp,QWORD PTR [r14+0x10]
0x0027d8ca: cmp    r15,0xf
0x0027d8ce: jbe    0x14027d8d3
0x0027d8d0: mov    rcx,QWORD PTR [r14]
0x0027d8d3: cmp    rbp,rax
0x0027d8d6: jne    0x14027d981
0x0027d8dc: mov    r8,rbp
0x0027d8df: call   0x141535d84
0x0027d8e4: test   eax,eax
0x0027d8e6: jne    0x14027d981
0x0027d8ec: mov    rdx,QWORD PTR [r12+0x8]
0x0027d8f1: cmp    rdx,QWORD PTR [r12+0x10]
0x0027d8f6: je     0x14027d903
0x0027d8f8: mov    QWORD PTR [rdx],r13
0x0027d8fb: add    QWORD PTR [r12+0x8],0x8
0x0027d901: jmp    0x14027d910
0x0027d903: lea    r8,[rsp+0x38]
0x0027d908: mov    rcx,r12
0x0027d90b: call   0x1400bacc0
0x0027d910: mov    ecx,0x20 ; inline_fragment=" "
0x0027d915: call   0x141534600
0x0027d91a: xorps  xmm0,xmm0
0x0027d91d: mov    QWORD PTR [rsp+0x98],rax
0x0027d925: xor    r8d,r8d
0x0027d928: lea    rdx,[rip+0x1368b81]        # 0x1415e64b0
0x0027d92f: mov    rcx,rax
0x0027d932: mov    rbx,rax
0x0027d935: movups XMMWORD PTR [rax],xmm0
0x0027d938: mov    QWORD PTR [rax+0x10],0x0
0x0027d940: mov    QWORD PTR [rax+0x18],0xf
0x0027d948: mov    BYTE PTR [rax],0x0
0x0027d94b: call   0x14006f860
0x0027d950: mov    r14,QWORD PTR [rsp+0x28]
0x0027d955: mov    rdx,QWORD PTR [r14+0x8]
0x0027d959: cmp    rdx,QWORD PTR [r14+0x10]
0x0027d95d: je     0x14027d96c
0x0027d95f: mov    QWORD PTR [rdx],rbx
0x0027d962: add    QWORD PTR [r14+0x8],0x8
0x0027d967: jmp    0x14027da84
0x0027d96c: lea    r8,[rsp+0x98]
0x0027d974: mov    rcx,r14
0x0027d977: call   0x1400bacc0
0x0027d97c: jmp    0x14027da84
0x0027d981: mov    rbx,QWORD PTR [rip+0x22737e8]        # 0x1424f1170
0x0027d988: mov    rdi,QWORD PTR [rip+0x22737e9]        # 0x1424f1178
0x0027d98f: nop
0x0027d990: cmp    rbx,rdi
0x0027d993: jae    0x14027da7c
0x0027d999: mov    rcx,QWORD PTR [rbx]
0x0027d99c: mov    rdx,r14
0x0027d99f: mov    rax,rcx
0x0027d9a2: cmp    r15,0xf
0x0027d9a6: jbe    0x14027d9ab
0x0027d9a8: mov    rdx,QWORD PTR [r14]
0x0027d9ab: cmp    QWORD PTR [rcx+0x18],0xf
0x0027d9b0: mov    rsi,rcx
0x0027d9b3: mov    r8,QWORD PTR [rcx+0x10]
0x0027d9b7: jbe    0x14027d9bf
0x0027d9b9: mov    rcx,QWORD PTR [rcx]
0x0027d9bc: mov    rsi,rax
0x0027d9bf: cmp    r8,rbp
0x0027d9c2: jne    0x14027d9cd
0x0027d9c4: call   0x141535d84
0x0027d9c9: test   eax,eax
0x0027d9cb: je     0x14027d9d3
0x0027d9cd: add    rbx,0x8
0x0027d9d1: jmp    0x14027d990
0x0027d9d3: test   rsi,rsi
0x0027d9d6: je     0x14027da7c
0x0027d9dc: mov    r15,QWORD PTR [rsp+0x90]
0x0027d9e4: mov    rbp,QWORD PTR [r15+0x68]
0x0027d9e8: mov    r12,QWORD PTR [r15+0x70]
0x0027d9ec: nop    DWORD PTR [rax+0x0]
0x0027d9f0: lea    r14,[rsi+0x20]
0x0027d9f4: lea    rdx,[r15+0x58]
0x0027d9f8: cmp    r12,0xf
0x0027d9fc: jbe    0x14027da02
0x0027d9fe: mov    rdx,QWORD PTR [r15+0x58]
0x0027da02: cmp    QWORD PTR [r14+0x18],0xf
0x0027da07: mov    rcx,r14
0x0027da0a: mov    r8,QWORD PTR [r14+0x10]
0x0027da0e: jbe    0x14027da13
0x0027da10: mov    rcx,QWORD PTR [r14]
0x0027da13: cmp    r8,rbp
0x0027da16: jne    0x14027da25
0x0027da18: call   0x141535d84
0x0027da1d: test   eax,eax
0x0027da1f: je     0x14027dabd
0x0027da25: mov    rbx,QWORD PTR [rip+0x2273744]        # 0x1424f1170
0x0027da2c: mov    rdi,QWORD PTR [rip+0x2273745]        # 0x1424f1178
0x0027da33: cmp    rbx,rdi
0x0027da36: jae    0x14027da77
0x0027da38: cmp    QWORD PTR [r14+0x18],0xf
0x0027da3d: mov    rdx,r14
0x0027da40: mov    rsi,QWORD PTR [rbx]
0x0027da43: jbe    0x14027da48
0x0027da45: mov    rdx,QWORD PTR [r14]
0x0027da48: cmp    QWORD PTR [rsi+0x18],0xf
0x0027da4d: mov    rcx,rsi
0x0027da50: mov    r8,QWORD PTR [rsi+0x10]
0x0027da54: jbe    0x14027da59
0x0027da56: mov    rcx,QWORD PTR [rsi]
0x0027da59: cmp    r8,QWORD PTR [r14+0x10]
0x0027da5d: jne    0x14027da68
0x0027da5f: call   0x141535d84
0x0027da64: test   eax,eax
0x0027da66: je     0x14027da6e
0x0027da68: add    rbx,0x8
0x0027da6c: jmp    0x14027da33
0x0027da6e: test   rsi,rsi
0x0027da71: jne    0x14027d9f0
0x0027da77: mov    r12,QWORD PTR [rsp+0x20]
0x0027da7c: mov    rdi,QWORD PTR [rsp+0xa8]
0x0027da84: inc    rdi
0x0027da87: mov    QWORD PTR [rsp+0xa8],rdi
0x0027da8f: cmp    rdi,QWORD PTR [rsp+0x30]
0x0027da94: jl     0x14027d6f0
0x0027da9a: mov    r15,QWORD PTR [rsp+0x48]
0x0027da9f: mov    r13,QWORD PTR [rsp+0x50]
0x0027daa4: mov    rsi,QWORD PTR [rsp+0x58]
0x0027daa9: mov    rbp,QWORD PTR [rsp+0x60]
0x0027daae: mov    rbx,QWORD PTR [rsp+0x68]
0x0027dab3: add    rsp,0x70
0x0027dab7: pop    r14
0x0027dab9: pop    r12
0x0027dabb: pop    rdi
0x0027dabc: ret
0x0027dabd: mov    r14,QWORD PTR [rsp+0x28]
0x0027dac2: mov    rax,QWORD PTR [rsp+0x90]
0x0027daca: mov    rbx,QWORD PTR [r14]
0x0027dacd: mov    rdi,QWORD PTR [rax+0x48]
0x0027dad1: cmp    rbx,rdi
0x0027dad4: jae    0x14027db0d
0x0027dad6: cmp    QWORD PTR [rsi+0x18],0xf
0x0027dadb: mov    rdx,rsi
0x0027dade: mov    rcx,QWORD PTR [rbx]
0x0027dae1: jbe    0x14027dae6
0x0027dae3: mov    rdx,QWORD PTR [rsi]
0x0027dae6: cmp    QWORD PTR [rcx+0x18],0xf
0x0027daeb: mov    r8,QWORD PTR [rcx+0x10]
0x0027daef: jbe    0x14027daf4
0x0027daf1: mov    rcx,QWORD PTR [rcx]
0x0027daf4: cmp    r8,QWORD PTR [rsi+0x10]
0x0027daf8: jne    0x14027db07
0x0027dafa: call   0x141535d84
0x0027daff: test   eax,eax
0x0027db01: je     0x14027da77
0x0027db07: add    rbx,0x8
0x0027db0b: jmp    0x14027dad1
0x0027db0d: mov    r12,QWORD PTR [rsp+0x20]
0x0027db12: xor    eax,eax
0x0027db14: mov    QWORD PTR [rsp+0x98],rax
0x0027db1c: mov    rdx,QWORD PTR [r12+0x8]
0x0027db21: cmp    rdx,QWORD PTR [r12+0x10]
0x0027db26: je     0x14027db41
0x0027db28: mov    QWORD PTR [rdx],rax
0x0027db2b: mov    rcx,r14
0x0027db2e: add    QWORD PTR [r12+0x8],0x8
0x0027db34: mov    rdx,rsi
0x0027db37: call   0x1400bb700
0x0027db3c: jmp    0x14027da7c
0x0027db41: lea    r8,[rsp+0x98]
0x0027db49: mov    rcx,r12
0x0027db4c: call   0x1400bacc0
0x0027db51: mov    rdx,rsi
0x0027db54: mov    rcx,r14
0x0027db57: call   0x1400bb700
0x0027db5c: jmp    0x14027da7c
