# steam PE:6a70a6d9:02711000; put-target-options-builder; RVA 0x899370..0x899c0f
0x00899370: mov    QWORD PTR [rsp+0x10],rbx
0x00899375: mov    QWORD PTR [rsp+0x18],r8
0x0089937a: mov    QWORD PTR [rsp+0x8],rcx
0x0089937f: push   rbp
0x00899380: push   rsi
0x00899381: push   rdi
0x00899382: push   r12
0x00899384: push   r13
0x00899386: push   r14
0x00899388: push   r15
0x0089938a: mov    rbp,rsp
0x0089938d: sub    rsp,0x60
0x00899391: mov    r9,QWORD PTR [rip+0x1b4bd78]        # 0x1423e5110
0x00899398: mov    eax,0xffff8ad0
0x0089939d: mov    WORD PTR [rbp+0x58],ax
0x008993a1: mov    rsi,r8
0x008993a4: mov    r13,rdx
0x008993a7: test   DWORD PTR [r9+0x110],0x2000000
0x008993b2: je     0x1408993ff
0x008993b4: mov    rbx,QWORD PTR [r9+0x1d8]
0x008993bb: mov    rdi,QWORD PTR [r9+0x1e0]
0x008993c2: cmp    rbx,rdi
0x008993c5: jae    0x140899423
0x008993c7: mov    rcx,QWORD PTR [rbx]
0x008993ca: mov    rax,QWORD PTR [rcx]
0x008993cd: call   QWORD PTR [rax+0x10]
0x008993d0: cmp    eax,0xb
0x008993d3: jne    0x1408993e3
0x008993d5: mov    rcx,QWORD PTR [rbx]
0x008993d8: mov    rax,QWORD PTR [rcx]
0x008993db: call   QWORD PTR [rax+0x18]
0x008993de: test   rax,rax
0x008993e1: jne    0x1408993e9
0x008993e3: add    rbx,0x8
0x008993e7: jmp    0x1408993c2
0x008993e9: lea    r9,[rbp-0x1c]
0x008993ed: mov    rcx,rax
0x008993f0: lea    r8,[rbp-0x20]
0x008993f4: lea    rdx,[rbp+0x58]
0x008993f8: call   0x140c8baa0
0x008993fd: jmp    0x140899423
0x008993ff: movzx  eax,WORD PTR [r9+0xa8]
0x00899407: mov    WORD PTR [rbp+0x58],ax
0x0089940b: movzx  eax,WORD PTR [r9+0xaa]
0x00899413: mov    WORD PTR [rbp-0x20],ax
0x00899417: movzx  eax,WORD PTR [r9+0xac]
0x0089941f: mov    WORD PTR [rbp-0x1c],ax
0x00899423: mov    rax,QWORD PTR [rip+0x1b4bce6]        # 0x1423e5110
0x0089942a: xor    r8d,r8d
0x0089942d: mov    r12d,r8d
0x00899430: mov    rcx,QWORD PTR [rax+0x410]
0x00899437: sub    rcx,QWORD PTR [rax+0x408]
0x0089943e: sar    rcx,0x3
0x00899442: test   rcx,rcx
0x00899445: je     0x14089962e
0x0089944b: mov    r15d,r8d
0x0089944e: xchg   ax,ax
0x00899450: mov    rcx,QWORD PTR [rip+0x1b4bcb9]        # 0x1423e5110
0x00899457: mov    rax,QWORD PTR [rcx+0x408]
0x0089945e: mov    rdx,QWORD PTR [r15+rax*1]
0x00899462: mov    rdx,QWORD PTR [rdx]
0x00899465: call   0x1413610f0
0x0089946a: mov    rdx,QWORD PTR [rip+0x1b4bc9f]        # 0x1423e5110
0x00899471: test   al,al
0x00899473: sete   r10b
0x00899477: mov    rax,QWORD PTR [rdx+0x408]
0x0089947e: mov    rcx,QWORD PTR [r15+rax*1]
0x00899482: mov    rdi,QWORD PTR [rcx]
0x00899485: test   rdi,rdi
0x00899488: je     0x1408994cb
0x0089948a: mov    r8,QWORD PTR [rdx+0xb18]
0x00899491: mov    rax,QWORD PTR [rdx+0xb20]
0x00899498: sub    rax,r8
0x0089949b: sar    rax,0x4
0x0089949f: sub    eax,0x1
0x008994a2: js     0x1408994cb
0x008994a4: mov    r9d,DWORD PTR [rdi+0x1c]
0x008994a8: movsxd rdx,eax
0x008994ab: mov    rcx,rdx
0x008994ae: shl    rcx,0x4
0x008994b2: mov    rax,QWORD PTR [r8+rcx*1]
0x008994b6: cmp    DWORD PTR [rax+0x14],r9d
0x008994ba: je     0x1408994c8
0x008994bc: sub    rcx,0x10
0x008994c0: sub    rdx,0x1
0x008994c4: jns    0x1408994b2
0x008994c6: jmp    0x1408994cb
0x008994c8: xor    r10b,r10b
0x008994cb: mov    rbx,QWORD PTR [rdi+0x38]
0x008994cf: xor    r14d,r14d
0x008994d2: cmp    rdi,rsi
0x008994d5: movzx  eax,r10b
0x008994d9: mov    esi,DWORD PTR [rsi+0x1c]
0x008994dc: mov    rdi,QWORD PTR [rdi+0x40]
0x008994e0: cmovne r14d,eax
0x008994e4: cmp    rbx,rdi
0x008994e7: jae    0x14089950d
0x008994e9: mov    rcx,QWORD PTR [rbx]
0x008994ec: mov    rax,QWORD PTR [rcx]
0x008994ef: call   QWORD PTR [rax+0x10]
0x008994f2: cmp    eax,0xa
0x008994f5: jne    0x140899504
0x008994f7: mov    rcx,QWORD PTR [rbx]
0x008994fa: mov    rax,QWORD PTR [rcx]
0x008994fd: call   QWORD PTR [rax+0x60]
0x00899500: cmp    eax,esi
0x00899502: je     0x14089950a
0x00899504: add    rbx,0x8
0x00899508: jmp    0x1408994e4
0x0089950a: xor    r14b,r14b
0x0089950d: mov    rax,QWORD PTR [rip+0x1b4bbfc]        # 0x1423e5110
0x00899514: xor    edx,edx
0x00899516: mov    rax,QWORD PTR [rax+0x408]
0x0089951d: mov    rcx,QWORD PTR [r15+rax*1]
0x00899521: mov    rcx,QWORD PTR [rcx]
0x00899524: call   0x140c8a580
0x00899529: mov    rsi,QWORD PTR [rbp+0x50]
0x0089952d: mov    ebx,eax
0x0089952f: mov    rcx,rsi
0x00899532: mov    rdx,QWORD PTR [rsi]
0x00899535: call   QWORD PTR [rdx+0x2c0]
0x0089953b: cmp    ebx,eax
0x0089953d: jl     0x1408995d6
0x00899543: test   r14b,r14b
0x00899546: je     0x1408995d6
0x0089954c: mov    ecx,0x30
0x00899551: call   0x141539690
0x00899556: mov    QWORD PTR [rbp-0x8],rax
0x0089955a: mov    rdx,rax
0x0089955d: xor    r8d,r8d
0x00899560: mov    QWORD PTR [rbp-0x8],rdx
0x00899564: mov    DWORD PTR [rax+0x8],r8d
0x00899568: mov    DWORD PTR [rax+0xc],0xffffffff
0x0089956f: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00899576: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0089957d: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00899584: lea    rax,[rip+0xe1dc05]        # 0x1416b7190
0x0089958b: mov    QWORD PTR [rdx+0x28],r8
0x0089958f: mov    QWORD PTR [rdx],rax
0x00899592: mov    QWORD PTR [rdx+0x20],rsi
0x00899596: mov    rax,QWORD PTR [rip+0x1b4bb73]        # 0x1423e5110
0x0089959d: mov    rax,QWORD PTR [rax+0x408]
0x008995a4: mov    rcx,QWORD PTR [r15+rax*1]
0x008995a8: mov    rax,QWORD PTR [rcx]
0x008995ab: mov    QWORD PTR [rdx+0x28],rax
0x008995af: mov    DWORD PTR [rdx+0x8],r8d
0x008995b3: mov    rax,QWORD PTR [r13+0x8]
0x008995b7: cmp    rax,QWORD PTR [r13+0x10]
0x008995bb: je     0x1408995c7
0x008995bd: mov    QWORD PTR [rax],rdx
0x008995c0: add    QWORD PTR [r13+0x8],0x8
0x008995c5: jmp    0x1408995d6
0x008995c7: lea    r8,[rbp-0x8]
0x008995cb: mov    rdx,rax
0x008995ce: mov    rcx,r13
0x008995d1: call   0x1400bad30
0x008995d6: mov    rax,QWORD PTR [rip+0x1b4bb33]        # 0x1423e5110
0x008995dd: mov    r8,rsi
0x008995e0: mov    rcx,QWORD PTR [rbp+0x40]
0x008995e4: mov    rdx,r13
0x008995e7: mov    DWORD PTR [rsp+0x20],0x1
0x008995ef: mov    rax,QWORD PTR [rax+0x408]
0x008995f6: mov    r9,QWORD PTR [r15+rax*1]
0x008995fa: mov    r9,QWORD PTR [r9]
0x008995fd: call   0x140899c10
0x00899602: mov    rax,QWORD PTR [rip+0x1b4bb07]        # 0x1423e5110
0x00899609: inc    r12d
0x0089960c: add    r15,0x8
0x00899610: mov    rcx,QWORD PTR [rax+0x410]
0x00899617: sub    rcx,QWORD PTR [rax+0x408]
0x0089961e: sar    rcx,0x3
0x00899622: movsxd rax,r12d
0x00899625: cmp    rax,rcx
0x00899628: jb     0x140899450
0x0089962e: mov    rsi,QWORD PTR [rip+0x1b4ba93]        # 0x1423e50c8
0x00899635: lea    rbx,[rip+0xe1c844]        # 0x1416b5e80
0x0089963c: mov    r14,QWORD PTR [rip+0x1b4ba8d]        # 0x1423e50d0
0x00899643: mov    r12,QWORD PTR [rbp+0x50]
0x00899647: cmp    rsi,r14
0x0089964a: jae    0x140899908
0x00899650: mov    r15,QWORD PTR [rsi]
0x00899653: test   BYTE PTR [r15+0x110],0x2
0x0089965b: jne    0x1408998ff
0x00899661: movzx  eax,WORD PTR [r15+0xa0]
0x00899669: cmp    ax,0x67
0x0089966d: je     0x1408998ff
0x00899673: cmp    ax,0x68
0x00899677: je     0x1408998ff
0x0089967d: cmp    r15,QWORD PTR [rip+0x1b4ba8c]        # 0x1423e5110
0x00899684: je     0x1408998ff
0x0089968a: mov    edi,0xffff8ad0
0x0089968f: mov    WORD PTR [rbp-0x18],di
0x00899693: test   DWORD PTR [r15+0x110],0x2000000
0x0089969e: je     0x1408996f4
0x008996a0: mov    rbx,QWORD PTR [r15+0x1d8]
0x008996a7: mov    rdi,QWORD PTR [r15+0x1e0]
0x008996ae: xchg   ax,ax
0x008996b0: cmp    rbx,rdi
0x008996b3: jae    0x1408996eb
0x008996b5: mov    rcx,QWORD PTR [rbx]
0x008996b8: mov    rax,QWORD PTR [rcx]
0x008996bb: call   QWORD PTR [rax+0x10]
0x008996be: cmp    eax,0xb
0x008996c1: jne    0x1408996d1
0x008996c3: mov    rcx,QWORD PTR [rbx]
0x008996c6: mov    rax,QWORD PTR [rcx]
0x008996c9: call   QWORD PTR [rax+0x18]
0x008996cc: test   rax,rax
0x008996cf: jne    0x1408996d7
0x008996d1: add    rbx,0x8
0x008996d5: jmp    0x1408996b0
0x008996d7: lea    r9,[rbp-0x10]
0x008996db: mov    rcx,rax
0x008996de: lea    r8,[rbp-0x14]
0x008996e2: lea    rdx,[rbp-0x18]
0x008996e6: call   0x140c8baa0
0x008996eb: lea    rbx,[rip+0xe1c78e]        # 0x1416b5e80
0x008996f2: jmp    0x140899718
0x008996f4: movzx  eax,WORD PTR [r15+0xa8]
0x008996fc: mov    WORD PTR [rbp-0x18],ax
0x00899700: movzx  eax,WORD PTR [r15+0xaa]
0x00899708: mov    WORD PTR [rbp-0x14],ax
0x0089970c: movzx  eax,WORD PTR [r15+0xac]
0x00899714: mov    WORD PTR [rbp-0x10],ax
0x00899718: movzx  eax,WORD PTR [rbp-0x10]
0x0089971c: lea    rcx,[rip+0x1b37dcd]        # 0x1423d14f0
0x00899723: movzx  r9d,WORD PTR [rbp-0x1c]
0x00899728: movzx  r8d,WORD PTR [rbp-0x20]
0x0089972d: movzx  edx,WORD PTR [rbp+0x58]
0x00899731: mov    WORD PTR [rsp+0x30],ax
0x00899736: movzx  eax,WORD PTR [rbp-0x14]
0x0089973a: mov    WORD PTR [rsp+0x28],ax
0x0089973f: movzx  eax,WORD PTR [rbp-0x18]
0x00899743: mov    WORD PTR [rsp+0x20],ax
0x00899748: call   0x14144ca60
0x0089974d: test   al,al
0x0089974f: je     0x1408998ff
0x00899755: test   DWORD PTR [r15+0x110],0x4000000
0x00899760: jne    0x140899846
0x00899766: mov    rax,QWORD PTR [rip+0x1dafe9b]        # 0x142649608
0x0089976d: mov    r8d,DWORD PTR [r15+0xc30]
0x00899774: mov    rdx,rax
0x00899777: mov    rcx,QWORD PTR [rip+0x1dafe92]        # 0x142649610
0x0089977e: xchg   ax,ax
0x00899780: cmp    rax,rcx
0x00899783: jae    0x1408997a0
0x00899785: cmp    DWORD PTR [rax],r8d
0x00899788: je     0x140899790
0x0089978a: add    rax,0x4
0x0089978e: jmp    0x140899780
0x00899790: sub    rax,rdx
0x00899793: sar    rax,0x2
0x00899797: cmp    eax,0xffffffff
0x0089979a: jne    0x140899846
0x008997a0: mov    rax,QWORD PTR [rip+0x1dafe91]        # 0x142649638
0x008997a7: mov    rcx,QWORD PTR [rip+0x1dafe92]        # 0x142649640
0x008997ae: mov    rdx,rax
0x008997b1: cmp    rax,rcx
0x008997b4: jae    0x1408997cd
0x008997b6: cmp    DWORD PTR [rax],r8d
0x008997b9: je     0x1408997c1
0x008997bb: add    rax,0x4
0x008997bf: jmp    0x1408997b1
0x008997c1: sub    rax,rdx
0x008997c4: sar    rax,0x2
0x008997c8: cmp    eax,0xffffffff
0x008997cb: jne    0x140899846
0x008997cd: mov    rax,QWORD PTR [rip+0x1dafe7c]        # 0x142649650
0x008997d4: mov    rcx,QWORD PTR [rip+0x1dafe7d]        # 0x142649658
0x008997db: mov    rdx,rax
0x008997de: xchg   ax,ax
0x008997e0: cmp    rax,rcx
0x008997e3: jae    0x1408997fc
0x008997e5: cmp    DWORD PTR [rax],r8d
0x008997e8: je     0x1408997f0
0x008997ea: add    rax,0x4
0x008997ee: jmp    0x1408997e0
0x008997f0: sub    rax,rdx
0x008997f3: sar    rax,0x2
0x008997f7: cmp    eax,0xffffffff
0x008997fa: jne    0x140899846
0x008997fc: mov    rax,QWORD PTR [rip+0x1dafe1d]        # 0x142649620
0x00899803: mov    rcx,QWORD PTR [rip+0x1dafe1e]        # 0x142649628
0x0089980a: mov    rdx,rax
0x0089980d: nop    DWORD PTR [rax]
0x00899810: cmp    rax,rcx
0x00899813: jae    0x14089982c
0x00899815: cmp    DWORD PTR [rax],r8d
0x00899818: je     0x140899820
0x0089981a: add    rax,0x4
0x0089981e: jmp    0x140899810
0x00899820: sub    rax,rdx
0x00899823: sar    rax,0x2
0x00899827: cmp    eax,0xffffffff
0x0089982a: jne    0x140899846
0x0089982c: mov    rax,QWORD PTR [rip+0x1b4b8dd]        # 0x1423e5110
0x00899833: mov    ecx,DWORD PTR [rax+0x130]
0x00899839: cmp    DWORD PTR [r15+0x3d0],ecx
0x00899840: jne    0x1408998ff
0x00899846: cmp    DWORD PTR [r15+0x1280],0x2
0x0089984e: jle    0x1408998ff
0x00899854: mov    rax,QWORD PTR [r15+0x1278]
0x0089985b: test   BYTE PTR [rax+0x2],0x4
0x0089985f: je     0x1408998ff
0x00899865: mov    ecx,0x30
0x0089986a: call   0x141539690
0x0089986f: mov    QWORD PTR [rbp-0x8],rax
0x00899873: mov    rcx,rax
0x00899876: xor    r8d,r8d
0x00899879: mov    QWORD PTR [rbp-0x8],rcx
0x0089987d: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00899884: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0089988b: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00899892: mov    DWORD PTR [rax+0x8],r8d
0x00899896: mov    DWORD PTR [rax+0xc],0xffffffff
0x0089989d: mov    QWORD PTR [rax],rbx
0x008998a0: mov    QWORD PTR [rax+0x20],r12
0x008998a4: mov    QWORD PTR [rax+0x28],r15
0x008998a8: movzx  eax,WORD PTR [rbp-0x18]
0x008998ac: mov    WORD PTR [rcx+0x10],ax
0x008998b0: movzx  eax,WORD PTR [rbp-0x14]
0x008998b4: mov    WORD PTR [rcx+0x12],ax
0x008998b8: movzx  eax,WORD PTR [rbp-0x10]
0x008998bc: mov    WORD PTR [rcx+0x14],ax
0x008998c0: movzx  eax,WORD PTR [rbp+0x58]
0x008998c4: mov    WORD PTR [rcx+0x16],ax
0x008998c8: movzx  eax,WORD PTR [rbp-0x20]
0x008998cc: mov    WORD PTR [rcx+0x18],ax
0x008998d0: movzx  eax,WORD PTR [rbp-0x1c]
0x008998d4: mov    WORD PTR [rcx+0x1a],ax
0x008998d8: mov    rdx,QWORD PTR [r13+0x8]
0x008998dc: cmp    rdx,QWORD PTR [r13+0x10]
0x008998e0: je     0x1408998f3
0x008998e2: mov    QWORD PTR [rdx],rcx
0x008998e5: add    QWORD PTR [r13+0x8],0x8
0x008998ea: add    rsi,0x8
0x008998ee: jmp    0x140899647
0x008998f3: lea    r8,[rbp-0x8]
0x008998f7: mov    rcx,r13
0x008998fa: call   0x1400bad30
0x008998ff: add    rsi,0x8
0x00899903: jmp    0x140899647
0x00899908: mov    rbx,QWORD PTR [rip+0x1b54619]        # 0x1423edf28
0x0089990f: lea    r15,[rip+0xe21aca]        # 0x1416bb3e0
0x00899916: mov    rdi,QWORD PTR [rip+0x1b54613]        # 0x1423edf30
0x0089991d: nop    DWORD PTR [rax]
0x00899920: cmp    rbx,rdi
0x00899923: jae    0x140899a6b
0x00899929: mov    rdx,QWORD PTR [rbx]
0x0089992c: movzx  r9d,WORD PTR [rbp-0x1c]
0x00899931: movzx  r8d,WORD PTR [rbp-0x20]
0x00899936: movzx  ecx,WORD PTR [rdx+0x1c]
0x0089993a: movzx  eax,WORD PTR [rdx+0x20]
0x0089993e: movzx  edx,WORD PTR [rdx+0x10]
0x00899942: mov    WORD PTR [rsp+0x30],ax
0x00899947: mov    WORD PTR [rsp+0x28],cx
0x0089994c: lea    rcx,[rip+0x1b37b9d]        # 0x1423d14f0
0x00899953: mov    WORD PTR [rsp+0x20],dx
0x00899958: movzx  edx,WORD PTR [rbp+0x58]
0x0089995c: call   0x14144ca60
0x00899961: test   al,al
0x00899963: je     0x140899a62
0x00899969: mov    r14,QWORD PTR [rbx]
0x0089996c: mov    rcx,r14
0x0089996f: mov    rax,QWORD PTR [r14]
0x00899972: call   QWORD PTR [rax+0x120]
0x00899978: mov    rdx,QWORD PTR [r14]
0x0089997b: mov    rcx,r14
0x0089997e: mov    esi,eax
0x00899980: call   QWORD PTR [rdx+0x118]
0x00899986: cmp    eax,esi
0x00899988: jne    0x140899a62
0x0089998e: mov    rcx,QWORD PTR [rbx]
0x00899991: mov    rax,QWORD PTR [rcx]
0x00899994: call   QWORD PTR [rax+0xd0]
0x0089999a: sub    eax,0x2
0x0089999d: je     0x1408999b7
0x0089999f: sub    eax,0x1
0x008999a2: je     0x1408999b7
0x008999a4: sub    eax,0x7
0x008999a7: je     0x1408999b7
0x008999a9: sub    eax,0x4
0x008999ac: je     0x1408999b7
0x008999ae: cmp    eax,0x27
0x008999b1: jne    0x140899a62
0x008999b7: mov    ecx,0x30
0x008999bc: call   0x141539690
0x008999c1: mov    QWORD PTR [rbp-0x8],rax
0x008999c5: mov    rdx,rax
0x008999c8: xor    ecx,ecx
0x008999ca: mov    QWORD PTR [rbp-0x8],rdx
0x008999ce: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x008999d5: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008999dc: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008999e3: mov    QWORD PTR [rax+0x28],rcx
0x008999e7: mov    DWORD PTR [rax+0x8],ecx
0x008999ea: mov    DWORD PTR [rax+0xc],0xffffffff
0x008999f1: mov    QWORD PTR [rax],r15
0x008999f4: mov    QWORD PTR [rax+0x20],r12
0x008999f8: mov    rax,QWORD PTR [rbx]
0x008999fb: mov    QWORD PTR [rdx+0x28],rax
0x008999ff: mov    rax,QWORD PTR [rbx]
0x00899a02: movzx  ecx,WORD PTR [rax+0x10]
0x00899a06: mov    WORD PTR [rdx+0x10],cx
0x00899a0a: mov    rax,QWORD PTR [rbx]
0x00899a0d: movzx  ecx,WORD PTR [rax+0x1c]
0x00899a11: mov    WORD PTR [rdx+0x12],cx
0x00899a15: mov    rax,QWORD PTR [rbx]
0x00899a18: movzx  ecx,WORD PTR [rax+0x20]
0x00899a1c: mov    WORD PTR [rdx+0x14],cx
0x00899a20: movzx  eax,WORD PTR [rbp+0x58]
0x00899a24: mov    WORD PTR [rdx+0x16],ax
0x00899a28: movzx  eax,WORD PTR [rbp-0x20]
0x00899a2c: mov    WORD PTR [rdx+0x18],ax
0x00899a30: movzx  eax,WORD PTR [rbp-0x1c]
0x00899a34: mov    WORD PTR [rdx+0x1a],ax
0x00899a38: mov    rax,QWORD PTR [r13+0x8]
0x00899a3c: cmp    rax,QWORD PTR [r13+0x10]
0x00899a40: je     0x140899a53
0x00899a42: mov    QWORD PTR [rax],rdx
0x00899a45: add    QWORD PTR [r13+0x8],0x8
0x00899a4a: add    rbx,0x8
0x00899a4e: jmp    0x140899920
0x00899a53: lea    r8,[rbp-0x8]
0x00899a57: mov    rdx,rax
0x00899a5a: mov    rcx,r13
0x00899a5d: call   0x1400bad30
0x00899a62: add    rbx,0x8
0x00899a66: jmp    0x140899920
0x00899a6b: mov    rsi,QWORD PTR [rip+0x1b4b9f6]        # 0x1423e5468
0x00899a72: mov    r14,QWORD PTR [rip+0x1b4b9f7]        # 0x1423e5470
0x00899a79: nop    DWORD PTR [rax+0x0]
0x00899a80: cmp    rsi,r14
0x00899a83: jae    0x140899bf7
0x00899a89: mov    rdx,QWORD PTR [rsi]
0x00899a8c: test   BYTE PTR [rdx+0x10],0x1
0x00899a90: je     0x140899bee
0x00899a96: movzx  ecx,WORD PTR [rdx+0xa]
0x00899a9a: movzx  eax,WORD PTR [rdx+0xc]
0x00899a9e: movzx  edx,WORD PTR [rdx+0x8]
0x00899aa2: movzx  r9d,WORD PTR [rbp-0x1c]
0x00899aa7: movzx  r8d,WORD PTR [rbp-0x20]
0x00899aac: mov    WORD PTR [rsp+0x30],ax
0x00899ab1: mov    WORD PTR [rsp+0x28],cx
0x00899ab6: lea    rcx,[rip+0x1b37a33]        # 0x1423d14f0
0x00899abd: mov    WORD PTR [rsp+0x20],dx
0x00899ac2: movzx  edx,WORD PTR [rbp+0x58]
0x00899ac6: call   0x14144ca60
0x00899acb: test   al,al
0x00899acd: je     0x140899bee
0x00899ad3: mov    rdi,QWORD PTR [rsi]
0x00899ad6: cmp    rdi,r12
0x00899ad9: je     0x140899bee
0x00899adf: mov    rbx,QWORD PTR [rdi+0x38]
0x00899ae3: mov    rdi,QWORD PTR [rdi+0x40]
0x00899ae7: mov    r15d,DWORD PTR [r12+0x1c]
0x00899aec: nop    DWORD PTR [rax+0x0]
0x00899af0: cmp    rbx,rdi
0x00899af3: jae    0x140899b1b
0x00899af5: mov    rcx,QWORD PTR [rbx]
0x00899af8: mov    rax,QWORD PTR [rcx]
0x00899afb: call   QWORD PTR [rax+0x10]
0x00899afe: cmp    eax,0xa
0x00899b01: jne    0x140899b15
0x00899b03: mov    rcx,QWORD PTR [rbx]
0x00899b06: mov    rax,QWORD PTR [rcx]
0x00899b09: call   QWORD PTR [rax+0x60]
0x00899b0c: cmp    eax,r15d
0x00899b0f: je     0x140899bee
0x00899b15: add    rbx,0x8
0x00899b19: jmp    0x140899af0
0x00899b1b: mov    rcx,QWORD PTR [rsi]
0x00899b1e: xor    edx,edx
0x00899b20: call   0x140c8a580
0x00899b25: mov    rdx,QWORD PTR [r12]
0x00899b29: mov    rcx,r12
0x00899b2c: mov    ebx,eax
0x00899b2e: call   QWORD PTR [rdx+0x2c0]
0x00899b34: cmp    ebx,eax
0x00899b36: jl     0x140899bee
0x00899b3c: mov    ecx,0x30
0x00899b41: call   0x141539690
0x00899b46: mov    QWORD PTR [rbp-0x8],rax
0x00899b4a: mov    rdx,rax
0x00899b4d: xor    ecx,ecx
0x00899b4f: mov    QWORD PTR [rbp-0x8],rdx
0x00899b53: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00899b5a: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x00899b61: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00899b68: mov    DWORD PTR [rax+0x8],ecx
0x00899b6b: mov    DWORD PTR [rax+0xc],0xffffffff
0x00899b72: lea    rax,[rip+0xe1d617]        # 0x1416b7190
0x00899b79: mov    QWORD PTR [rdx+0x28],rcx
0x00899b7d: mov    QWORD PTR [rdx],rax
0x00899b80: mov    QWORD PTR [rdx+0x20],r12
0x00899b84: mov    rax,QWORD PTR [rsi]
0x00899b87: mov    QWORD PTR [rdx+0x28],rax
0x00899b8b: mov    rax,QWORD PTR [rsi]
0x00899b8e: movzx  ecx,WORD PTR [rax+0x8]
0x00899b92: mov    WORD PTR [rdx+0x10],cx
0x00899b96: mov    rax,QWORD PTR [rsi]
0x00899b99: movzx  ecx,WORD PTR [rax+0xa]
0x00899b9d: mov    WORD PTR [rdx+0x12],cx
0x00899ba1: mov    rax,QWORD PTR [rsi]
0x00899ba4: movzx  ecx,WORD PTR [rax+0xc]
0x00899ba8: mov    WORD PTR [rdx+0x14],cx
0x00899bac: movzx  eax,WORD PTR [rbp+0x58]
0x00899bb0: mov    WORD PTR [rdx+0x16],ax
0x00899bb4: movzx  eax,WORD PTR [rbp-0x20]
0x00899bb8: mov    WORD PTR [rdx+0x18],ax
0x00899bbc: movzx  eax,WORD PTR [rbp-0x1c]
0x00899bc0: mov    WORD PTR [rdx+0x1a],ax
0x00899bc4: mov    rax,QWORD PTR [r13+0x8]
0x00899bc8: cmp    rax,QWORD PTR [r13+0x10]
0x00899bcc: je     0x140899bdf
0x00899bce: mov    QWORD PTR [rax],rdx
0x00899bd1: add    QWORD PTR [r13+0x8],0x8
0x00899bd6: add    rsi,0x8
0x00899bda: jmp    0x140899a80
0x00899bdf: lea    r8,[rbp-0x8]
0x00899be3: mov    rdx,rax
0x00899be6: mov    rcx,r13
0x00899be9: call   0x1400bad30
0x00899bee: add    rsi,0x8
0x00899bf2: jmp    0x140899a80
0x00899bf7: mov    rbx,QWORD PTR [rsp+0xa8]
0x00899bff: add    rsp,0x60
0x00899c03: pop    r15
0x00899c05: pop    r14
0x00899c07: pop    r13
0x00899c09: pop    r12
0x00899c0b: pop    rdi
0x00899c0c: pop    rsi
0x00899c0d: pop    rbp
0x00899c0e: ret
