# reference PE:6a70a6d9:02711000; structure-field; RVA 0xb94090..0xb943f8
0x00b94090: mov    QWORD PTR [rsp+0x8],rbx
0x00b94095: push   rbp
0x00b94096: push   rsi
0x00b94097: push   rdi
0x00b94098: sub    rsp,0x50
0x00b9409c: mov    rax,QWORD PTR [rip+0xd07f9d]        # 0x14189c040
0x00b940a3: xor    rax,rsp
0x00b940a6: mov    QWORD PTR [rsp+0x40],rax
0x00b940ab: mov    edi,r9d
0x00b940ae: mov    rbx,rdx
0x00b940b1: mov    edx,r8d
0x00b940b4: mov    rcx,QWORD PTR [rip+0x1957a9d]        # 0x1424ebb58
0x00b940bb: call   0x14007db20
0x00b940c0: mov    rbp,rax
0x00b940c3: test   rax,rax
0x00b940c6: je     0x140b94391
0x00b940cc: lea    rdx,[rax+0x2b0]
0x00b940d3: mov    ecx,edi
0x00b940d5: call   0x14006ff00
0x00b940da: mov    rdi,rax
0x00b940dd: test   rax,rax
0x00b940e0: je     0x140b94391
0x00b940e6: mov    esi,DWORD PTR [rsp+0x98]
0x00b940ed: and    esi,0x2
0x00b940f0: je     0x140b9414a
0x00b940f2: mov    r8d,0xa
0x00b940f8: lea    rdx,[rip+0xb4b5d9]        # 0x1416df6d8 ; literal="[LPAGE:AB:"
0x00b940ff: mov    rcx,rbx
0x00b94102: call   0x14006fa10
0x00b94107: mov    rdx,rbx
0x00b9410a: mov    ecx,DWORD PTR [rbp+0x88]
0x00b94110: call   0x14052c130
0x00b94115: mov    r8d,0x1
0x00b9411b: lea    rdx,[rip+0xa84312]        # 0x141618434 ; literal=":"
0x00b94122: mov    rcx,rbx
0x00b94125: call   0x14006fa10
0x00b9412a: mov    rdx,rbx
0x00b9412d: mov    ecx,DWORD PTR [rdi+0x8]
0x00b94130: call   0x14052c130
0x00b94135: mov    r8d,0x1
0x00b9413b: lea    rdx,[rip+0xa6954e]        # 0x1415fd690 ; literal="]"
0x00b94142: mov    rcx,rbx
0x00b94145: call   0x14006fa10
0x00b9414a: cmp    BYTE PTR [rsp+0x90],0x0
0x00b94152: je     0x140b94227
0x00b94158: mov    rax,QWORD PTR [rdi]
0x00b9415b: mov    rcx,rdi
0x00b9415e: call   QWORD PTR [rax+0x10]
0x00b94161: test   rax,rax
0x00b94164: je     0x140b94227
0x00b9416a: cmp    BYTE PTR [rax+0x72],0x0
0x00b9416e: je     0x140b94227
0x00b94174: xorps  xmm0,xmm0
0x00b94177: movups XMMWORD PTR [rsp+0x20],xmm0
0x00b9417c: mov    QWORD PTR [rsp+0x30],0x0
0x00b94185: mov    QWORD PTR [rsp+0x38],0xf
0x00b9418e: mov    BYTE PTR [rsp+0x20],0x0
0x00b94193: xor    r9d,r9d
0x00b94196: mov    r8b,0x1
0x00b94199: lea    rdx,[rsp+0x20]
0x00b9419e: mov    rcx,rax
0x00b941a1: call   0x140a946e0
0x00b941a6: lea    rdx,[rsp+0x20]
0x00b941ab: cmp    QWORD PTR [rsp+0x38],0xf
0x00b941b1: cmova  rdx,QWORD PTR [rsp+0x20]
0x00b941b7: mov    r8,QWORD PTR [rsp+0x30]
0x00b941bc: mov    rcx,rbx
0x00b941bf: call   0x14006fa10
0x00b941c4: test   esi,esi
0x00b941c6: je     0x140b941de
0x00b941c8: mov    r8d,0x8
0x00b941ce: lea    rdx,[rip+0xa698b3]        # 0x1415fda88 ; literal="[/LPAGE]"
0x00b941d5: mov    rcx,rbx
0x00b941d8: call   0x14006fa10
0x00b941dd: nop
0x00b941de: mov    rdx,QWORD PTR [rsp+0x38]
0x00b941e3: cmp    rdx,0xf
0x00b941e7: jbe    0x140b943a6
0x00b941ed: inc    rdx
0x00b941f0: mov    rcx,QWORD PTR [rsp+0x20]
0x00b941f5: mov    rax,rcx
0x00b941f8: cmp    rdx,0x1000
0x00b941ff: jb     0x140b9421d
0x00b94201: add    rdx,0x27
0x00b94205: mov    rcx,QWORD PTR [rcx-0x8]
0x00b94209: sub    rax,rcx
0x00b9420c: add    rax,0xfffffffffffffff8
0x00b94210: cmp    rax,0x1f
0x00b94214: jbe    0x140b9421d
0x00b94216: call   QWORD PTR [rip+0xa5190c]        # 0x1415e5b28
0x00b9421c: int3
0x00b9421d: call   0x141539680
0x00b94222: jmp    0x140b943a6
0x00b94227: mov    rax,QWORD PTR [rdi]
0x00b9422a: mov    rcx,rdi
0x00b9422d: call   QWORD PTR [rax]
0x00b9422f: movsx  rcx,ax
0x00b94233: cmp    ecx,0xd
0x00b94236: ja     0x140b94369
0x00b9423c: lea    rdx,[rip+0xffffffffff46bdbd]        # 0x140000000
0x00b94243: mov    ecx,DWORD PTR [rdx+rcx*4+0xb943c0]
0x00b9424a: add    rcx,rdx
0x00b9424d: jmp    rcx
0x00b9424f: mov    r8d,0x10
0x00b94255: lea    rdx,[rip+0xacf56c]        # 0x1416637c8 ; literal="a counting house"
0x00b9425c: jmp    0x140b94376
0x00b94261: mov    r8d,0xa
0x00b94267: lea    rdx,[rip+0xacf572]        # 0x1416637e0 ; literal="a hospital"
0x00b9426e: jmp    0x140b94376
0x00b94273: mov    r8d,0xb
0x00b94279: lea    rdx,[rip+0xa948d0]        # 0x141628b50 ; literal="a guildhall"
0x00b94280: jmp    0x140b94376
0x00b94285: mov    r8d,0xb
0x00b9428b: lea    rdx,[rip+0xacf7a6]        # 0x141663a38 ; literal="a mead hall"
0x00b94292: jmp    0x140b94376
0x00b94297: mov    r8d,0x6
0x00b9429d: lea    rdx,[rip+0xacf7a0]        # 0x141663a44 ; literal="a keep"
0x00b942a4: jmp    0x140b94376
0x00b942a9: mov    r8d,0x8
0x00b942af: lea    rdx,[rip+0xa94872]        # 0x141628b28 ; literal="a temple"
0x00b942b6: jmp    0x140b94376
0x00b942bb: mov    r8d,0x9
0x00b942c1: lea    rdx,[rip+0xacf750]        # 0x141663a18 ; literal="a library"
0x00b942c8: jmp    0x140b94376
0x00b942cd: mov    r8d,0x8
0x00b942d3: lea    rdx,[rip+0xacf74e]        # 0x141663a28 ; literal="a tavern"
0x00b942da: jmp    0x140b94376
0x00b942df: mov    r8d,0xc
0x00b942e5: lea    rdx,[rip+0xadead4]        # 0x141672dc0 ; literal="a dark tower"
0x00b942ec: jmp    0x140b94376
0x00b942f1: lea    rdx,[rip+0xacf6f0]        # 0x1416639e8 ; literal="an underworld spire"
0x00b942f8: jmp    0x140b94370
0x00b942fa: mov    r8d,0x8
0x00b94300: lea    rdx,[rip+0xacf701]        # 0x141663a08 ; literal="a market"
0x00b94307: jmp    0x140b94376
0x00b94309: mov    r8d,0x6
0x00b9430f: lea    rdx,[rip+0xacf6c6]        # 0x1416639dc ; literal="a tomb"
0x00b94316: jmp    0x140b94376
0x00b94318: movsx  ecx,WORD PTR [rdi+0x130]
0x00b9431f: test   ecx,ecx
0x00b94321: je     0x140b9434b
0x00b94323: sub    ecx,0x1
0x00b94326: je     0x140b9433c
0x00b94328: cmp    ecx,0x1
0x00b9432b: jne    0x140b9437e
0x00b9432d: mov    r8d,0xd
0x00b94333: lea    rdx,[rip+0xacf65e]        # 0x141663998 ; literal="the catacombs"
0x00b9433a: jmp    0x140b94376
0x00b9433c: mov    r8d,0xa
0x00b94342: lea    rdx,[rip+0xacf687]        # 0x1416639d0 ; literal="the sewers"
0x00b94349: jmp    0x140b94376
0x00b9434b: mov    r8d,0x9
0x00b94351: lea    rdx,[rip+0xacf668]        # 0x1416639c0 ; literal="a dungeon"
0x00b94358: jmp    0x140b94376
0x00b9435a: mov    r8d,0x7
0x00b94360: lea    rdx,[rip+0xacf699]        # 0x141663a00 ; literal="a tower"
0x00b94367: jmp    0x140b94376
0x00b94369: lea    rdx,[rip+0xb4b378]        # 0x1416df6e8 ; literal="an unknown building"
0x00b94370: mov    r8d,0x13
0x00b94376: mov    rcx,rbx
0x00b94379: call   0x14006fa10
0x00b9437e: test   esi,esi
0x00b94380: je     0x140b943a6
0x00b94382: mov    r8d,0x8
0x00b94388: lea    rdx,[rip+0xa696f9]        # 0x1415fda88 ; literal="[/LPAGE]"
0x00b9438f: jmp    0x140b9439e
0x00b94391: mov    r8d,0x13
0x00b94397: lea    rdx,[rip+0xb4b34a]        # 0x1416df6e8 ; literal="an unknown building"
0x00b9439e: mov    rcx,rbx
0x00b943a1: call   0x14006fa10
0x00b943a6: mov    rcx,QWORD PTR [rsp+0x40]
0x00b943ab: xor    rcx,rsp
0x00b943ae: call   0x141539660
0x00b943b3: mov    rbx,QWORD PTR [rsp+0x70]
0x00b943b8: add    rsp,0x50
0x00b943bc: pop    rdi
0x00b943bd: pop    rsi
0x00b943be: pop    rbp
0x00b943bf: ret
0x00b943c0: test   DWORD PTR [rdx-0x47],eax
0x00b943c3: add    BYTE PTR [rdi-0x56ff46be],dl
0x00b943c9: rex.X mov ecx,0xb942df00
0x00b943cf: add    dl,bh
0x00b943d1: rex.X mov ecx,0xb9430900
0x00b943d7: add    BYTE PTR [rax],bl
0x00b943d9: rex.XB mov r9d,0xb942f100
0x00b943df: add    ch,cl
0x00b943e1: rex.X mov ecx,0xb942bb00
0x00b943e7: add    BYTE PTR [rdi+0x42],cl
0x00b943ea: mov    ecx,0xb9427300
0x00b943ef: add    BYTE PTR [rdx+0x43],bl
0x00b943f2: mov    ecx,0xb9426100
