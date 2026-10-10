# classic PE:6a70b91c:0270a000; structure-field; RVA 0xb910d0..0xb91438
0x00b910d0: mov    QWORD PTR [rsp+0x8],rbx
0x00b910d5: push   rbp
0x00b910d6: push   rsi
0x00b910d7: push   rdi
0x00b910d8: sub    rsp,0x50
0x00b910dc: mov    rax,QWORD PTR [rip+0xd04f5d]        # 0x141896040
0x00b910e3: xor    rax,rsp
0x00b910e6: mov    QWORD PTR [rsp+0x40],rax
0x00b910eb: mov    edi,r9d
0x00b910ee: mov    rbx,rdx
0x00b910f1: mov    edx,r8d
0x00b910f4: mov    rcx,QWORD PTR [rip+0x195494d]        # 0x1424e5a48
0x00b910fb: call   0x14007dab0
0x00b91100: mov    rbp,rax
0x00b91103: test   rax,rax
0x00b91106: je     0x140b913d1
0x00b9110c: lea    rdx,[rax+0x2b0]
0x00b91113: mov    ecx,edi
0x00b91115: call   0x14006fe90
0x00b9111a: mov    rdi,rax
0x00b9111d: test   rax,rax
0x00b91120: je     0x140b913d1
0x00b91126: mov    esi,DWORD PTR [rsp+0x98]
0x00b9112d: and    esi,0x2
0x00b91130: je     0x140b9118a
0x00b91132: mov    r8d,0xa
0x00b91138: lea    rdx,[rip+0xb49409]        # 0x1416da548 ; literal="[LPAGE:AB:"
0x00b9113f: mov    rcx,rbx
0x00b91142: call   0x14006f9a0
0x00b91147: mov    rdx,rbx
0x00b9114a: mov    ecx,DWORD PTR [rbp+0x88]
0x00b91150: call   0x140529cf0
0x00b91155: mov    r8d,0x1
0x00b9115b: lea    rdx,[rip+0xa822a2]        # 0x141613404 ; literal=":"
0x00b91162: mov    rcx,rbx
0x00b91165: call   0x14006f9a0
0x00b9116a: mov    rdx,rbx
0x00b9116d: mov    ecx,DWORD PTR [rdi+0x8]
0x00b91170: call   0x140529cf0
0x00b91175: mov    r8d,0x1
0x00b9117b: lea    rdx,[rip+0xa674e2]        # 0x1415f8664 ; literal="]"
0x00b91182: mov    rcx,rbx
0x00b91185: call   0x14006f9a0
0x00b9118a: cmp    BYTE PTR [rsp+0x90],0x0
0x00b91192: je     0x140b91267
0x00b91198: mov    rax,QWORD PTR [rdi]
0x00b9119b: mov    rcx,rdi
0x00b9119e: call   QWORD PTR [rax+0x10]
0x00b911a1: test   rax,rax
0x00b911a4: je     0x140b91267
0x00b911aa: cmp    BYTE PTR [rax+0x72],0x0
0x00b911ae: je     0x140b91267
0x00b911b4: xorps  xmm0,xmm0
0x00b911b7: movups XMMWORD PTR [rsp+0x20],xmm0
0x00b911bc: mov    QWORD PTR [rsp+0x30],0x0
0x00b911c5: mov    QWORD PTR [rsp+0x38],0xf
0x00b911ce: mov    BYTE PTR [rsp+0x20],0x0
0x00b911d3: xor    r9d,r9d
0x00b911d6: mov    r8b,0x1
0x00b911d9: lea    rdx,[rsp+0x20]
0x00b911de: mov    rcx,rax
0x00b911e1: call   0x140a91760
0x00b911e6: lea    rdx,[rsp+0x20]
0x00b911eb: cmp    QWORD PTR [rsp+0x38],0xf
0x00b911f1: cmova  rdx,QWORD PTR [rsp+0x20]
0x00b911f7: mov    r8,QWORD PTR [rsp+0x30]
0x00b911fc: mov    rcx,rbx
0x00b911ff: call   0x14006f9a0
0x00b91204: test   esi,esi
0x00b91206: je     0x140b9121e
0x00b91208: mov    r8d,0x8
0x00b9120e: lea    rdx,[rip+0xa6793b]        # 0x1415f8b50 ; literal="[/LPAGE]"
0x00b91215: mov    rcx,rbx
0x00b91218: call   0x14006f9a0
0x00b9121d: nop
0x00b9121e: mov    rdx,QWORD PTR [rsp+0x38]
0x00b91223: cmp    rdx,0xf
0x00b91227: jbe    0x140b913e6
0x00b9122d: inc    rdx
0x00b91230: mov    rcx,QWORD PTR [rsp+0x20]
0x00b91235: mov    rax,rcx
0x00b91238: cmp    rdx,0x1000
0x00b9123f: jb     0x140b9125d
0x00b91241: add    rdx,0x27
0x00b91245: mov    rcx,QWORD PTR [rcx-0x8]
0x00b91249: sub    rax,rcx
0x00b9124c: add    rax,0xfffffffffffffff8
0x00b91250: cmp    rax,0x1f
0x00b91254: jbe    0x140b9125d
0x00b91256: call   QWORD PTR [rip+0xa4f844]        # 0x1415e0aa0
0x00b9125c: int3
0x00b9125d: call   0x1415345f0
0x00b91262: jmp    0x140b913e6
0x00b91267: mov    rax,QWORD PTR [rdi]
0x00b9126a: mov    rcx,rdi
0x00b9126d: call   QWORD PTR [rax]
0x00b9126f: movsx  rcx,ax
0x00b91273: cmp    ecx,0xd
0x00b91276: ja     0x140b913a9
0x00b9127c: lea    rdx,[rip+0xffffffffff46ed7d]        # 0x140000000
0x00b91283: mov    ecx,DWORD PTR [rdx+rcx*4+0xb91400]
0x00b9128a: add    rcx,rdx
0x00b9128d: jmp    rcx
0x00b9128f: mov    r8d,0x10
0x00b91295: lea    rdx,[rip+0xacd60c]        # 0x14165e8a8 ; literal="a counting house"
0x00b9129c: jmp    0x140b913b6
0x00b912a1: mov    r8d,0xa
0x00b912a7: lea    rdx,[rip+0xacd5ca]        # 0x14165e878 ; literal="a hospital"
0x00b912ae: jmp    0x140b913b6
0x00b912b3: mov    r8d,0xb
0x00b912b9: lea    rdx,[rip+0xa92a00]        # 0x141623cc0 ; literal="a guildhall"
0x00b912c0: jmp    0x140b913b6
0x00b912c5: mov    r8d,0xb
0x00b912cb: lea    rdx,[rip+0xacd5b6]        # 0x14165e888 ; literal="a mead hall"
0x00b912d2: jmp    0x140b913b6
0x00b912d7: mov    r8d,0x6
0x00b912dd: lea    rdx,[rip+0xacd57c]        # 0x14165e860 ; literal="a keep"
0x00b912e4: jmp    0x140b913b6
0x00b912e9: mov    r8d,0x8
0x00b912ef: lea    rdx,[rip+0xa929a2]        # 0x141623c98 ; literal="a temple"
0x00b912f6: jmp    0x140b913b6
0x00b912fb: mov    r8d,0x9
0x00b91301: lea    rdx,[rip+0xacd560]        # 0x14165e868 ; literal="a library"
0x00b91308: jmp    0x140b913b6
0x00b9130d: mov    r8d,0x8
0x00b91313: lea    rdx,[rip+0xacd52e]        # 0x14165e848 ; literal="a tavern"
0x00b9131a: jmp    0x140b913b6
0x00b9131f: mov    r8d,0xc
0x00b91325: lea    rdx,[rip+0xadc8ec]        # 0x14166dc18 ; literal="a dark tower"
0x00b9132c: jmp    0x140b913b6
0x00b91331: lea    rdx,[rip+0xacd4d0]        # 0x14165e808 ; literal="an underworld spire"
0x00b91338: jmp    0x140b913b0
0x00b9133a: mov    r8d,0x8
0x00b91340: lea    rdx,[rip+0xacd4e9]        # 0x14165e830 ; literal="a market"
0x00b91347: jmp    0x140b913b6
0x00b91349: mov    r8d,0x6
0x00b9134f: lea    rdx,[rip+0xacd4e6]        # 0x14165e83c ; literal="a tomb"
0x00b91356: jmp    0x140b913b6
0x00b91358: movsx  ecx,WORD PTR [rdi+0x130]
0x00b9135f: test   ecx,ecx
0x00b91361: je     0x140b9138b
0x00b91363: sub    ecx,0x1
0x00b91366: je     0x140b9137c
0x00b91368: cmp    ecx,0x1
0x00b9136b: jne    0x140b913be
0x00b9136d: mov    r8d,0xd
0x00b91373: lea    rdx,[rip+0xacd47e]        # 0x14165e7f8 ; literal="the catacombs"
0x00b9137a: jmp    0x140b913b6
0x00b9137c: mov    r8d,0xa
0x00b91382: lea    rdx,[rip+0xacd45f]        # 0x14165e7e8 ; literal="the sewers"
0x00b91389: jmp    0x140b913b6
0x00b9138b: mov    r8d,0x9
0x00b91391: lea    rdx,[rip+0xacd488]        # 0x14165e820 ; literal="a dungeon"
0x00b91398: jmp    0x140b913b6
0x00b9139a: mov    r8d,0x7
0x00b913a0: lea    rdx,[rip+0xacd4b1]        # 0x14165e858 ; literal="a tower"
0x00b913a7: jmp    0x140b913b6
0x00b913a9: lea    rdx,[rip+0xb491a8]        # 0x1416da558 ; literal="an unknown building"
0x00b913b0: mov    r8d,0x13
0x00b913b6: mov    rcx,rbx
0x00b913b9: call   0x14006f9a0
0x00b913be: test   esi,esi
0x00b913c0: je     0x140b913e6
0x00b913c2: mov    r8d,0x8
0x00b913c8: lea    rdx,[rip+0xa67781]        # 0x1415f8b50 ; literal="[/LPAGE]"
0x00b913cf: jmp    0x140b913de
0x00b913d1: mov    r8d,0x13
0x00b913d7: lea    rdx,[rip+0xb4917a]        # 0x1416da558 ; literal="an unknown building"
0x00b913de: mov    rcx,rbx
0x00b913e1: call   0x14006f9a0
0x00b913e6: mov    rcx,QWORD PTR [rsp+0x40]
0x00b913eb: xor    rcx,rsp
0x00b913ee: call   0x1415345d0
0x00b913f3: mov    rbx,QWORD PTR [rsp+0x70]
0x00b913f8: add    rsp,0x50
0x00b913fc: pop    rdi
0x00b913fd: pop    rsi
0x00b913fe: pop    rbp
0x00b913ff: ret
0x00b91400: (bad)
0x00b91403: add    bh,dl
0x00b91405: adc    bh,BYTE PTR [rcx-0x46ed1700]
0x00b9140b: add    BYTE PTR [rdi],bl
0x00b9140d: adc    edi,DWORD PTR [rcx-0x46ecc600]
0x00b91413: add    BYTE PTR [rcx+0x13],cl
0x00b91416: mov    ecx,0xb9135800
0x00b9141b: add    BYTE PTR [rcx],dh
0x00b9141d: adc    edi,DWORD PTR [rcx-0x46ecf300]
0x00b91423: add    bl,bh
0x00b91425: adc    bh,BYTE PTR [rcx-0x46ed7100]
0x00b9142b: add    BYTE PTR [rbx-0x65ff46ee],dh
0x00b91431: adc    edi,DWORD PTR [rcx-0x46ed5f00]
