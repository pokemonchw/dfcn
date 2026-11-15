0x14134d520: mov    QWORD PTR [rsp+0x20],r9
0x14134d525: mov    BYTE PTR [rsp+0x10],dl
0x14134d529: push   rbx
0x14134d52a: push   rsi
0x14134d52b: push   r14
0x14134d52d: sub    rsp,0x50
0x14134d531: cmp    BYTE PTR [rip+0x5abda5],0x0        # 0x1418f92dd
0x14134d538: mov    r14,r9
0x14134d53b: movzx  ebx,r8b
0x14134d53f: mov    rsi,rcx
0x14134d542: je     0x14134d556
0x14134d544: mov    QWORD PTR [r9],0x0
0x14134d54b: xor    eax,eax
0x14134d54d: add    rsp,0x50
0x14134d551: pop    r14
0x14134d553: pop    rsi
0x14134d554: pop    rbx
0x14134d555: ret
0x14134d556: mov    QWORD PTR [rsp+0x70],rbp
0x14134d55b: mov    QWORD PTR [rsp+0x48],rdi
0x14134d560: mov    QWORD PTR [rsp+0x38],r13
0x14134d565: call   0x14139e410
0x14134d56a: xor    r13d,r13d
0x14134d56d: mov    eax,0xffff8ad0
0x14134d572: mov    edi,0x384
0x14134d577: mov    ebp,r13d
0x14134d57a: cmp    WORD PTR [rsi+0x4cc],ax
0x14134d581: jne    0x14134d5ce
0x14134d583: cmp    DWORD PTR [rsi+0x4d4],0xffffffff
0x14134d58a: jne    0x14134d5ce
0x14134d58c: test   BYTE PTR [rsi+0x114],0x1
0x14134d593: jne    0x14134d5c7
0x14134d595: test   DWORD PTR [rsi+0x118],0x40000
0x14134d59f: jne    0x14134d5c7
0x14134d5a1: test   DWORD PTR [rsi+0x110],0x8000
0x14134d5ab: je     0x14134d5b4
0x14134d5ad: mov    ebp,0x3
0x14134d5b2: jmp    0x14134d5d3
0x14134d5b4: mov    rcx,rsi
0x14134d5b7: call   0x1407f9da0
0x14134d5bc: test   al,al
0x14134d5be: je     0x14134d5d3
0x14134d5c0: mov    ebp,0x1
0x14134d5c5: jmp    0x14134d5d3
0x14134d5c7: mov    ebp,0x2
0x14134d5cc: jmp    0x14134d5d3
0x14134d5ce: mov    ebp,0x4
0x14134d5d3: mov    eax,ebp
0x14134d5d5: mov    r8,r13
0x14134d5d8: movsxd rdx,DWORD PTR [rsi+rax*4+0xde8]
0x14134d5e0: mov    QWORD PTR [r14],r13
0x14134d5e3: test   edx,edx
0x14134d5e5: js     0x14134d618
0x14134d5e7: mov    r10,rdx
0x14134d5ea: lea    rcx,[rax+rax*2]
0x14134d5ee: mov    rax,QWORD PTR [rsi+0x5f8]
0x14134d5f5: mov    r9,QWORD PTR [rax+rcx*8+0xe8]
0x14134d5fd: mov    rdx,QWORD PTR [rax+rcx*8+0xf0]
0x14134d605: sub    rdx,r9
0x14134d608: sar    rdx,0x3
0x14134d60c: cmp    r10,rdx
0x14134d60f: jae    0x14134d618
0x14134d611: mov    r8,QWORD PTR [r9+r10*8]
0x14134d615: mov    QWORD PTR [r14],r8
0x14134d618: test   r8,r8
0x14134d61b: je     0x14134d652
0x14134d61d: test   bl,bl
0x14134d61f: je     0x14134d64e
0x14134d621: mov    r9d,DWORD PTR [r8+0x8]
0x14134d625: test   r9d,r9d
0x14134d628: jle    0x14134d64e
0x14134d62a: mov    ecx,DWORD PTR [rsi+0x4c8]
0x14134d630: cmp    ecx,r9d
0x14134d633: jge    0x14134d64e
0x14134d635: mov    eax,r9d
0x14134d638: sub    eax,ecx
0x14134d63a: imul   ecx,DWORD PTR [r8+0x4]
0x14134d63f: imul   eax,DWORD PTR [r8+0x10]
0x14134d644: add    eax,ecx
0x14134d646: cdq
0x14134d647: idiv   r9d
0x14134d64a: mov    edi,eax
0x14134d64c: jmp    0x14134d652
0x14134d64e: mov    edi,DWORD PTR [r8+0x4]
0x14134d652: test   DWORD PTR [rsi+0x118],0x1000
0x14134d65c: je     0x14134d665
0x14134d65e: mov    eax,edi
0x14134d660: jmp    0x14134dfb2
0x14134d665: mov    ecx,DWORD PTR [rsi+0x8e4]
0x14134d66b: mov    QWORD PTR [rsp+0x40],r12
0x14134d670: cmp    ecx,0x64
0x14134d673: je     0x14134d68c
0x14134d675: imul   edi,edi,0x64
0x14134d678: cmp    ecx,0x64
0x14134d67b: jg     0x14134d685
0x14134d67d: lea    eax,[rcx-0x1]
0x14134d680: cmp    eax,0x62
0x14134d683: ja     0x14134d68c
0x14134d685: mov    eax,edi
0x14134d687: cdq
0x14134d688: idiv   ecx
0x14134d68a: mov    edi,eax
0x14134d68c: mov    eax,DWORD PTR [rsi+0x8e0]
0x14134d692: lea    r8,[rsi+0x114]
0x14134d699: test   eax,eax
0x14134d69b: lea    ebx,[rax+rdi*1]
0x14134d69e: cmove  ebx,edi
0x14134d6a1: test   BYTE PTR [r8],0x1
0x14134d6a5: je     0x14134d749
0x14134d6ab: mov    rcx,rsi
0x14134d6ae: call   0x1413c6e10
0x14134d6b3: mov    edx,ebx
0x14134d6b5: cmp    eax,0x2
0x14134d6b8: jl     0x14134d740
0x14134d6be: add    eax,0xfffffffe
0x14134d6c1: cmp    eax,0xc
0x14134d6c4: ja     0x14134d72a
0x14134d6c6: lea    rdx,[rip+0xfffffffffecb2933]        # 0x140000000
0x14134d6cd: cdqe
0x14134d6cf: mov    ecx,DWORD PTR [rdx+rax*4+0x134dfcc]
0x14134d6d6: add    rcx,rdx
0x14134d6d9: jmp    rcx
0x14134d6db: imul   ecx,ebx,0x13
0x14134d6de: jmp    0x14134d72f
0x14134d6e0: lea    ecx,[rbx+rbx*8]
0x14134d6e3: jmp    0x14134d72d
0x14134d6e5: imul   ecx,ebx,0x11
0x14134d6e8: jmp    0x14134d72f
0x14134d6ea: shl    ebx,0x4
0x14134d6ed: mov    eax,0x66666667
0x14134d6f2: imul   ebx
0x14134d6f4: jmp    0x14134d736
0x14134d6f6: imul   ecx,ebx,0xf
0x14134d6f9: jmp    0x14134d72f
0x14134d6fb: imul   ecx,ebx,0xe
0x14134d6fe: jmp    0x14134d72f
0x14134d700: imul   ecx,ebx,0xd
0x14134d703: jmp    0x14134d72f
0x14134d705: lea    ecx,[rbx+rbx*2]
0x14134d708: shl    ecx,0x2
0x14134d70b: jmp    0x14134d72f
0x14134d70d: imul   ecx,ebx,0xb
0x14134d710: jmp    0x14134d72f
0x14134d712: lea    ecx,[rbx+rbx*4]
0x14134d715: jmp    0x14134d72d
0x14134d717: lea    ecx,[rbx+rbx*8]
0x14134d71a: jmp    0x14134d72f
0x14134d71c: lea    ecx,[rbx*8+0x0]
0x14134d723: jmp    0x14134d72f
0x14134d725: imul   ecx,ebx,0x7
0x14134d728: jmp    0x14134d72f
0x14134d72a: lea    ecx,[rbx+rbx*2]
0x14134d72d: add    ecx,ecx
0x14134d72f: mov    eax,0x66666667
0x14134d734: imul   ecx
0x14134d736: sar    edx,0x3
0x14134d739: mov    eax,edx
0x14134d73b: shr    eax,0x1f
0x14134d73e: add    edx,eax
0x14134d740: lea    r8,[rsi+0x114]
0x14134d747: jmp    0x14134d77a
0x14134d749: mov    eax,DWORD PTR [rsi+0xc64]
0x14134d74f: test   eax,eax
0x14134d751: je     0x14134d76b
0x14134d753: mov    edx,ebx
0x14134d755: cmp    eax,0x200000
0x14134d75a: jne    0x14134d77a
0x14134d75c: movsx  eax,BYTE PTR [rsi+0xc68]
0x14134d763: imul   edx,eax,0x12c
0x14134d769: jmp    0x14134d778
0x14134d76b: movsx  eax,BYTE PTR [rsi+0xc68]
0x14134d772: imul   edx,eax,0x96
0x14134d778: add    edx,ebx
0x14134d77a: cmp    WORD PTR [rsi+0xa0],0x68
0x14134d782: lea    ecx,[rdx+0xbb8]
0x14134d788: cmovne ecx,edx
0x14134d78b: test   DWORD PTR [rsi+0x118],0x8000
0x14134d795: je     0x14134d7aa
0x14134d797: mov    eax,0x66666667
0x14134d79c: imul   ecx
0x14134d79e: mov    ecx,edx
0x14134d7a0: sar    ecx,0x3
0x14134d7a3: mov    eax,ecx
0x14134d7a5: shr    eax,0x1f
0x14134d7a8: add    ecx,eax
0x14134d7aa: mov    edx,DWORD PTR [rsi+0x984]
0x14134d7b0: lea    eax,[rcx+0xc8]
0x14134d7b6: cmp    edx,0x7d0
0x14134d7bc: cmovl  eax,ecx
0x14134d7bf: cmp    edx,0xfa0
0x14134d7c5: lea    ecx,[rax+0xc8]
0x14134d7cb: cmovl  ecx,eax
0x14134d7ce: cmp    edx,0x1770
0x14134d7d4: lea    eax,[rcx+0xc8]
0x14134d7da: cmovl  eax,ecx
0x14134d7dd: test   DWORD PTR [r8],0x4000
0x14134d7e4: lea    ecx,[rax+0x7d0]
0x14134d7ea: cmove  ecx,eax
0x14134d7ed: mov    edx,ecx
0x14134d7ef: cmp    DWORD PTR [rsi+0x81c],r13d
0x14134d7f6: jle    0x14134d808
0x14134d7f8: cmp    WORD PTR [rsi+0x814],0xffff
0x14134d800: jne    0x14134d808
0x14134d802: lea    edx,[rcx+0x3e8]
0x14134d808: mov    edi,0x3e8
0x14134d80d: cmp    WORD PTR [rsi+0x7fc],r13w
0x14134d815: jle    0x14134d823
0x14134d817: cmp    WORD PTR [rsi+0x814],0xffff
0x14134d81f: jne    0x14134d823
0x14134d821: add    edx,edi
0x14134d823: cmp    WORD PTR [rsi+0x7fe],r13w
0x14134d82b: jle    0x14134d839
0x14134d82d: cmp    WORD PTR [rsi+0x814],0xffff
0x14134d835: jne    0x14134d839
0x14134d837: add    edx,edi
0x14134d839: cmp    DWORD PTR [rsi+0x820],r13d
0x14134d840: jle    0x14134d84e
0x14134d842: cmp    WORD PTR [rsi+0x814],0xffff
0x14134d84a: jne    0x14134d84e
0x14134d84c: add    edx,edi
0x14134d84e: cmp    DWORD PTR [rsi+0x818],0x64
0x14134d855: jl     0x14134d86d
0x14134d857: cmp    WORD PTR [rsi+0x814],r13w
0x14134d85f: je     0x14134d86d
0x14134d861: cmp    WORD PTR [rsi+0x360],0xffff
0x14134d869: jne    0x14134d86d
0x14134d86b: add    edx,edi
0x14134d86d: cmp    DWORD PTR [rsi+0x980],r13d
0x14134d874: jle    0x14134d882
0x14134d876: cmp    WORD PTR [rsi+0x814],0xffff
0x14134d87e: jne    0x14134d882
0x14134d880: add    edx,edi
0x14134d882: cmp    DWORD PTR [rsi+0x1280],0x14
0x14134d889: jle    0x14134d8aa
0x14134d88b: mov    rax,QWORD PTR [rsi+0x1278]
0x14134d892: test   BYTE PTR [rax+0x14],0x4
0x14134d896: je     0x14134d8aa
0x14134d898: test   DWORD PTR [rsi+0x82c],0x10000000
0x14134d8a2: jne    0x14134d92d
0x14134d8a8: jmp    0x14134d8c2
0x14134d8aa: test   DWORD PTR [rsi+0x82c],0x10000000
0x14134d8b4: jne    0x14134d92d
0x14134d8b6: test   DWORD PTR [rsi+0x828],0x10000000
0x14134d8c0: je     0x14134d92d
0x14134d8c2: mov    rax,QWORD PTR [rsi+0x9a8]
0x14134d8c9: mov    rcx,QWORD PTR [rsi+0x9b0]
0x14134d8d0: cmp    rax,rcx
0x14134d8d3: jae    0x14134d8f2
0x14134d8d5: mov    r8,QWORD PTR [rax]
0x14134d8d8: cmp    WORD PTR [r8],0x2e
0x14134d8dd: je     0x14134d8e5
0x14134d8df: add    rax,0x8
0x14134d8e3: jmp    0x14134d8d0
0x14134d8e5: lea    rax,[r8+0x4]
0x14134d8e9: test   rax,rax
0x14134d8ec: je     0x14134d8f2
0x14134d8ee: mov    eax,DWORD PTR [rax]
0x14134d8f0: jmp    0x14134d8f5
0x14134d8f2: mov    eax,r13d
0x14134d8f5: cmp    DWORD PTR [rip+0x57093c],0x1        # 0x1418be238
0x14134d8fc: jne    0x14134d914
0x14134d8fe: cmp    eax,0x24ea00
0x14134d903: jl     0x14134d90d
0x14134d905: add    edx,0xc8
0x14134d90b: jmp    0x14134d92d
0x14134d90d: cmp    eax,0x127500
0x14134d912: jmp    0x14134d928
0x14134d914: cmp    eax,0x62700
0x14134d919: jl     0x14134d923
0x14134d91b: add    edx,0xc8
0x14134d921: jmp    0x14134d92d
0x14134d923: cmp    eax,0x49d40
0x14134d928: jl     0x14134d92d
0x14134d92a: add    edx,0x64
0x14134d92d: cmp    DWORD PTR [rip+0x570904],r13d        # 0x1418be238
0x14134d934: mov    ecx,DWORD PTR [rsi+0x98c]
0x14134d93a: jne    0x14134d979
0x14134d93c: cmp    ecx,0xc350
0x14134d942: lea    eax,[rdx+0x64]
0x14134d945: cmovl  eax,edx
0x14134d948: cmp    DWORD PTR [rsi+0x988],0x124f8
0x14134d952: lea    edx,[rax+0x64]
0x14134d955: cmovl  edx,eax
0x14134d958: mov    eax,DWORD PTR [rsi+0x990]
0x14134d95e: cmp    eax,0x249f0
0x14134d963: jl     0x14134d96d
0x14134d965: add    edx,0xc8
0x14134d96b: jmp    0x14134d9ea
0x14134d96d: cmp    eax,0xe100
0x14134d972: jl     0x14134d9ea
0x14134d974: add    edx,0x64
0x14134d977: jmp    0x14134d9ea
0x14134d979: cmp    ecx,0x54600
0x14134d97f: jl     0x14134d989
0x14134d981: add    edx,0xc8
0x14134d987: jmp    0x14134d994
0x14134d989: cmp    ecx,0x2a300
0x14134d98f: jl     0x14134d994
0x14134d991: add    edx,0x64
0x14134d994: mov    eax,DWORD PTR [rsi+0x988]
0x14134d99a: cmp    eax,0x278d00
0x14134d99f: jl     0x14134d9a9
0x14134d9a1: add    edx,0xc8
0x14134d9a7: jmp    0x14134d9b3
0x14134d9a9: cmp    eax,0x127500
0x14134d9ae: jl     0x14134d9b3
0x14134d9b0: add    edx,0x64
0x14134d9b3: mov    eax,DWORD PTR [rsi+0x990]
0x14134d9b9: cmp    eax,0xd2f00
0x14134d9be: jl     0x14134d9c8
0x14134d9c0: add    edx,0xc8
0x14134d9c6: jmp    0x14134d9ea
0x14134d9c8: cmp    eax,0x54600
0x14134d9cd: jl     0x14134d9d4
0x14134d9cf: add    edx,0x64
0x14134d9d2: jmp    0x14134d9ea
0x14134d9d4: cmp    eax,0x3f480
0x14134d9d9: jl     0x14134d9e0
0x14134d9db: add    edx,0x4b
0x14134d9de: jmp    0x14134d9ea
0x14134d9e0: cmp    eax,0x2a300
0x14134d9e5: jl     0x14134d9ea
0x14134d9e7: add    edx,0x32
0x14134d9ea: cmp    DWORD PTR [rsi+0x3d4],0xffffffff
0x14134d9f1: lea    eax,[rdx+0x3e8]
0x14134d9f7: cmove  eax,edx
0x14134d9fa: mov    ebx,eax
0x14134d9fc: test   ebp,ebp
0x14134d9fe: jne    0x14134da2b
0x14134da00: test   BYTE PTR [rsi+0x118],0x40
0x14134da07: je     0x14134da2b
0x14134da09: mov    edx,0x3e
0x14134da0e: lea    ebx,[rax+0x7d0]
0x14134da14: mov    rcx,rsi
0x14134da17: call   0x1413570b0
0x14134da1c: mov    ecx,0x14
0x14134da21: cmp    eax,ecx
0x14134da23: cmovg  eax,ecx
0x14134da26: imul   eax,eax,0xffffff9c
0x14134da29: add    ebx,eax
0x14134da2b: mov    ecx,DWORD PTR [rsi+0x978]
0x14134da31: lea    eax,[rcx-0x1]
0x14134da34: cmp    eax,0x62
0x14134da37: ja     0x14134da3f
0x14134da39: lea    eax,[rcx+rcx*4]
0x14134da3c: lea    ebx,[rbx+rax*2]
0x14134da3f: movsx  ecx,WORD PTR [rsi+0x804]
0x14134da46: lea    eax,[rcx-0x1]
0x14134da49: cmp    ax,0x8
0x14134da4d: ja     0x14134da54
0x14134da4f: imul   ecx,ecx,0x64
0x14134da52: add    ebx,ecx
0x14134da54: mov    r9,QWORD PTR [r14]
0x14134da57: mov    QWORD PTR [rsp+0x30],r15
0x14134da5c: test   r9,r9
0x14134da5f: je     0x14134da6c
0x14134da61: movzx  r15d,BYTE PTR [r9+0x18]
0x14134da66: and    r15b,0x1
0x14134da6a: jmp    0x14134da6f
0x14134da6c: mov    r15b,0x1
0x14134da6f: mov    ecx,DWORD PTR [rsi+0x604]
0x14134da75: sub    ecx,DWORD PTR [rsi+0x614]
0x14134da7b: mov    r8,QWORD PTR [rsi+0x8e8]
0x14134da82: test   r8,r8
0x14134da85: je     0x14134daa2
0x14134da87: imul   ecx,DWORD PTR [r8]
0x14134da8b: mov    eax,0x51eb851f
0x14134da90: imul   ecx
0x14134da92: mov    ecx,edx
0x14134da94: sar    ecx,0x5
0x14134da97: mov    eax,ecx
0x14134da99: shr    eax,0x1f
0x14134da9c: add    ecx,eax
0x14134da9e: add    ecx,DWORD PTR [r8+0x18]
0x14134daa2: test   ecx,ecx
0x14134daa4: mov    r12d,r13d
0x14134daa7: cmovns r12d,ecx
0x14134daab: mov    DWORD PTR [rsp+0x20],r12d
0x14134dab0: test   r9,r9
0x14134dab3: je     0x14134daca
0x14134dab5: mov    r14d,DWORD PTR [r9+0x18]
0x14134dab9: and    r14d,0x6
0x14134dabd: jne    0x14134dad0
0x14134dabf: test   r15b,r15b
0x14134dac2: je     0x14134dc3c
0x14134dac8: jmp    0x14134dad0
0x14134daca: mov    r14d,0x6
0x14134dad0: mov    ecx,DWORD PTR [rsi+0x620]
0x14134dad6: sub    ecx,DWORD PTR [rsi+0x630]
0x14134dadc: test   r8,r8
0x14134dadf: je     0x14134dafd
0x14134dae1: imul   ecx,DWORD PTR [r8+0x4]
0x14134dae6: mov    eax,0x51eb851f
0x14134daeb: imul   ecx
0x14134daed: mov    ecx,edx
0x14134daef: sar    ecx,0x5
0x14134daf2: mov    eax,ecx
0x14134daf4: shr    eax,0x1f
0x14134daf7: add    ecx,eax
0x14134daf9: add    ecx,DWORD PTR [r8+0x1c]
0x14134dafd: test   ecx,ecx
0x14134daff: mov    ebp,r13d
0x14134db02: cmovns ebp,ecx
0x14134db05: test   r14d,r14d
0x14134db08: je     0x14134db52
0x14134db0a: cmp    QWORD PTR [rsi+0x490],r13
0x14134db11: jne    0x14134db52
0x14134db13: mov    rcx,rsi
0x14134db16: call   0x1413cc010
0x14134db1b: test   rax,rax
0x14134db1e: je     0x14134db52
0x14134db20: cmp    DWORD PTR [rax+0x90],r13d
0x14134db27: jne    0x14134db52
0x14134db29: mov    eax,DWORD PTR [rsi+0x604]
0x14134db2f: sub    eax,DWORD PTR [rsi+0x614]
0x14134db35: mov    ecx,DWORD PTR [rsi+0x620]
0x14134db3b: sub    ecx,DWORD PTR [rsi+0x630]
0x14134db41: cmp    eax,r12d
0x14134db44: cmovl  r12d,eax
0x14134db48: cmp    ecx,ebp
0x14134db4a: mov    DWORD PTR [rsp+0x20],r12d
0x14134db4f: cmovl  ebp,ecx
0x14134db52: mov    r10d,r13d
0x14134db55: mov    r11d,r13d
0x14134db58: mov    r8d,r13d
0x14134db5b: mov    r9d,0x76c
0x14134db61: test   r14b,0x2
0x14134db65: je     0x14134db7a
0x14134db67: cmp    r12d,r9d
0x14134db6a: mov    r8d,r9d
0x14134db6d: mov    r10d,0x64
0x14134db73: mov    r11d,r9d
0x14134db76: cmovl  r8d,r12d
0x14134db7a: test   r14b,0x4
0x14134db7e: je     0x14134db94
0x14134db80: cmp    ebp,r9d
0x14134db83: jge    0x14134db8a
0x14134db85: add    r8d,ebp
0x14134db88: jmp    0x14134db8d
0x14134db8a: add    r8d,r9d
0x14134db8d: add    r10d,0x64
0x14134db91: add    r11d,r9d
0x14134db94: test   r15b,r15b
0x14134db97: je     0x14134dbef
0x14134db99: movsxd rcx,DWORD PTR [rsi+0x6ac]
0x14134dba0: add    r10d,0x64
0x14134dba4: movsxd rax,DWORD PTR [rsi+0x6b0]
0x14134dbab: add    r11d,r9d
0x14134dbae: cmp    ecx,eax
0x14134dbb0: je     0x14134dbec
0x14134dbb2: test   ecx,ecx
0x14134dbb4: je     0x14134dbec
0x14134dbb6: cmp    eax,0x186a0
0x14134dbbb: jle    0x14134dbce
0x14134dbbd: imul   rax,rax,0x3e8
0x14134dbc4: cqo
0x14134dbc6: idiv   rcx
0x14134dbc9: mov    rdi,rax
0x14134dbcc: jmp    0x14134dbd9
0x14134dbce: imul   eax,eax,0x3e8
0x14134dbd4: cdq
0x14134dbd5: idiv   ecx
0x14134dbd7: mov    edi,eax
0x14134dbd9: cmp    edi,0x64
0x14134dbdc: jge    0x14134dbe5
0x14134dbde: mov    edi,0x64
0x14134dbe3: jmp    0x14134dbec
0x14134dbe5: cmp    edi,r9d
0x14134dbe8: cmovg  edi,r9d
0x14134dbec: add    r8d,edi
0x14134dbef: test   r10d,r10d
0x14134dbf2: je     0x14134dc3c
0x14134dbf4: cmp    r8d,r10d
0x14134dbf7: lea    ecx,[rbx*4+0x0]
0x14134dbfe: mov    r9d,r11d
0x14134dc01: mov    eax,r10d
0x14134dc04: cmovge eax,r8d
0x14134dc08: mov    r8d,r11d
0x14134dc0b: cmp    eax,r11d
0x14134dc0e: cmovle r9d,eax
0x14134dc12: sar    ebx,1
0x14134dc14: sub    r8d,r9d
0x14134dc17: mov    eax,0x55555556
0x14134dc1c: imul   ecx
0x14134dc1e: sub    r9d,r10d
0x14134dc21: sub    r11d,r10d
0x14134dc24: mov    eax,edx
0x14134dc26: imul   r9d,ebx
0x14134dc2a: shr    eax,0x1f
0x14134dc2d: add    eax,edx
0x14134dc2f: imul   eax,r8d
0x14134dc33: add    eax,r9d
0x14134dc36: cdq
0x14134dc37: idiv   r11d
0x14134dc3a: mov    ebx,eax
0x14134dc3c: mov    r8d,DWORD PTR [rsi+0x110]
0x14134dc43: bt     r8d,0x12
0x14134dc48: jae    0x14134dc7c
0x14134dc4a: mov    rax,QWORD PTR [rsp+0x88]
0x14134dc52: mov    rcx,QWORD PTR [rax]
0x14134dc55: test   rcx,rcx
0x14134dc58: je     0x14134dc7c
0x14134dc5a: cmp    DWORD PTR [rcx+0x1c],r13d
0x14134dc5e: jle    0x14134dc7c
0x14134dc60: mov    rax,rcx
0x14134dc63: mov    ecx,ebx
0x14134dc65: imul   ecx,DWORD PTR [rax+0x1c]
0x14134dc69: mov    eax,0x51eb851f
0x14134dc6e: imul   ecx
0x14134dc70: sar    edx,0x5
0x14134dc73: mov    eax,edx
0x14134dc75: shr    eax,0x1f
0x14134dc78: add    edx,eax
0x14134dc7a: add    ebx,edx
0x14134dc7c: bt     r8d,0xf
0x14134dc81: jb     0x14134dcc6
0x14134dc83: movsx  eax,WORD PTR [rsi+0xc38]
0x14134dc8a: cmp    eax,0x3
0x14134dc8d: jl     0x14134dcc6
0x14134dc8f: mov    r8d,eax
0x14134dc92: movsx  eax,WORD PTR [rsi+0xc3a]
0x14134dc99: mov    ecx,r8d
0x14134dc9c: sub    ecx,eax
0x14134dc9e: test   BYTE PTR [rsi+0x118],0x40
0x14134dca5: lea    eax,[rcx-0x1]
0x14134dca8: cmove  eax,ecx
0x14134dcab: mov    ecx,r8d
0x14134dcae: imul   eax,eax,0x1f4
0x14134dcb4: sar    ecx,1
0x14134dcb6: sub    r8d,ecx
0x14134dcb9: dec    r8d
0x14134dcbc: cdq
0x14134dcbd: idiv   r8d
0x14134dcc0: test   eax,eax
0x14134dcc2: jle    0x14134dcc6
0x14134dcc4: add    ebx,eax
0x14134dcc6: cmp    WORD PTR [rsi+0x360],0x5
0x14134dcce: lea    r14d,[rbx+0x1f40]
0x14134dcd5: mov    eax,DWORD PTR [rsi+0x118]
0x14134dcdb: cmovne r14d,ebx
0x14134dcdf: shr    eax,0xa
0x14134dce2: mov    DWORD PTR [rsp+0x28],r14d
0x14134dce7: mov    ebx,r14d
0x14134dcea: test   al,0x1
0x14134dcec: jne    0x14134df42
0x14134dcf2: mov    edx,0x2d
0x14134dcf7: mov    rcx,rsi
0x14134dcfa: mov    r12d,r13d
0x14134dcfd: mov    ebp,r13d
0x14134dd00: call   0x1413570b0
0x14134dd05: mov    rbx,QWORD PTR [rsi+0x408]
0x14134dd0c: mov    rdi,QWORD PTR [rsi+0x410]
0x14134dd13: mov    DWORD PTR [rsp+0x24],eax
0x14134dd17: cmp    rbx,rdi
0x14134dd1a: jae    0x14134de0e
0x14134dd20: mov    r13,QWORD PTR [rbx]
0x14134dd23: mov    r15,QWORD PTR [r13+0x0]
0x14134dd27: test   DWORD PTR [r15+0x10],0x20000000
0x14134dd2f: jne    0x14134dd39
0x14134dd31: mov    rcx,r15
0x14134dd34: call   0x140c7dc00
0x14134dd39: movzx  eax,WORD PTR [r13+0x8]
0x14134dd3e: mov    r14d,DWORD PTR [r15+0x74]
0x14134dd42: mov    r15d,DWORD PTR [r15+0x78]
0x14134dd46: cmp    ax,0x2
0x14134dd4a: je     0x14134dd52
0x14134dd4c: cmp    ax,0x5
0x14134dd50: jne    0x14134dd93
0x14134dd52: mov    rcx,QWORD PTR [r13+0x0]
0x14134dd56: mov    rax,QWORD PTR [rcx]
0x14134dd59: call   QWORD PTR [rax+0x6c8]
0x14134dd5f: test   al,al
0x14134dd61: je     0x14134dd93
0x14134dd63: mov    ecx,DWORD PTR [rsp+0x24]
0x14134dd67: cmp    ecx,0xf
0x14134dd6a: jl     0x14134dd77
0x14134dd6c: xor    r13d,r13d
0x14134dd6f: mov    r14d,r13d
0x14134dd72: mov    r15d,r13d
0x14134dd75: jmp    0x14134dd96
0x14134dd77: cmp    ecx,0x1
0x14134dd7a: jle    0x14134dd93
0x14134dd7c: mov    eax,0xf
0x14134dd81: sub    eax,ecx
0x14134dd83: imul   r14d,eax
0x14134dd87: imul   r15d,eax
0x14134dd8b: sar    r14d,0x4
0x14134dd8f: sar    r15d,0x4
0x14134dd93: xor    r13d,r13d
0x14134dd96: add    r12d,r14d
0x14134dd99: add    ebp,r15d
0x14134dd9c: cmp    ebp,0xf4240
0x14134dda2: jle    0x14134ddc9
0x14134dda4: mov    eax,0x431bde83
0x14134dda9: imul   ebp
0x14134ddab: sar    edx,0x12
0x14134ddae: mov    eax,edx
0x14134ddb0: shr    eax,0x1f
0x14134ddb3: add    edx,eax
0x14134ddb5: imul   eax,edx,0xf4240
0x14134ddbb: add    r12d,edx
0x14134ddbe: sub    ebp,eax
0x14134ddc0: add    rbx,0x8
0x14134ddc4: jmp    0x14134dd17
0x14134ddc9: test   ebp,ebp
0x14134ddcb: jns    0x14134de05
0x14134ddcd: mov    eax,0x431bde83
0x14134ddd2: imul   ebp
0x14134ddd4: sar    edx,0x12
0x14134ddd7: mov    eax,edx
0x14134ddd9: shr    eax,0x1f
0x14134dddc: add    edx,eax
0x14134ddde: mov    eax,0x431bde83
0x14134dde3: add    r12d,edx
0x14134dde6: imul   ebp
0x14134dde8: sar    edx,0x12
0x14134ddeb: mov    eax,edx
0x14134dded: shr    eax,0x1f
0x14134ddf0: add    edx,eax
0x14134ddf2: imul   eax,edx,0xf4240
0x14134ddf8: sub    ebp,eax
0x14134ddfa: jns    0x14134de05
0x14134ddfc: dec    r12d
0x14134ddff: add    ebp,0xf4240
0x14134de05: add    rbx,0x8
0x14134de09: jmp    0x14134dd17
0x14134de0e: mov    ecx,DWORD PTR [rsi+0x6ac]
0x14134de14: mov    eax,0x10624dd3
0x14134de19: cmp    ecx,0x493e0
0x14134de1f: jl     0x14134de3b
0x14134de21: imul   ecx
0x14134de23: mov    r8d,edx
0x14134de26: sar    r8d,0x6
0x14134de2a: mov    eax,r8d
0x14134de2d: shr    eax,0x1f
0x14134de30: add    r8d,eax
0x14134de33: imul   r8d,DWORD PTR [rsp+0x20]
0x14134de39: jmp    0x14134de52
0x14134de3b: imul   ecx,DWORD PTR [rsp+0x20]
0x14134de40: imul   ecx
0x14134de42: mov    r8d,edx
0x14134de45: sar    r8d,0x6
0x14134de49: mov    eax,r8d
0x14134de4c: shr    eax,0x1f
0x14134de4f: add    r8d,eax
0x14134de52: mov    r14d,DWORD PTR [rsp+0x28]
0x14134de57: test   r8d,r8d
0x14134de5a: mov    edi,0x1
0x14134de5f: mov    eax,0x68db8bad
0x14134de64: cmovle r8d,edi
0x14134de68: mov    ebx,r14d
0x14134de6b: imul   ebp
0x14134de6d: imul   ecx,r12d,0x64
0x14134de71: sar    edx,0xc
0x14134de74: mov    eax,edx
0x14134de76: shr    eax,0x1f
0x14134de79: add    edx,ecx
0x14134de7b: add    eax,edx
0x14134de7d: cmp    eax,r8d
0x14134de80: jle    0x14134df42
0x14134de86: sub    eax,r8d
0x14134de89: cmp    eax,0xf4240
0x14134de8e: jl     0x14134de9c
0x14134de90: cdq
0x14134de91: idiv   r8d
0x14134de94: imul   eax,eax,0x7d0
0x14134de9a: jmp    0x14134dea6
0x14134de9c: imul   eax,eax,0x7d0
0x14134dea2: cdq
0x14134dea3: idiv   r8d
0x14134dea6: cmp    eax,edi
0x14134dea8: jge    0x14134deae
0x14134deaa: mov    eax,edi
0x14134deac: jmp    0x14134dec1
0x14134deae: mov    ecx,0x1388
0x14134deb3: cmp    eax,ecx
0x14134deb5: jle    0x14134dec1
0x14134deb7: cmp    DWORD PTR [rip+0x57037a],0x0        # 0x1418be238
0x14134debe: cmove  eax,ecx
0x14134dec1: cmp    BYTE PTR [rsp+0x78],0x0
0x14134dec6: lea    ebx,[r14+rax*1]
0x14134deca: je     0x14134df42
0x14134decc: call   0x140ece790
0x14134ded1: mov    ecx,eax
0x14134ded3: mov    eax,0x3
0x14134ded8: mul    ecx
0x14134deda: mov    eax,ecx
0x14134dedc: sub    eax,edx
0x14134dede: shr    eax,1
0x14134dee0: add    eax,edx
0x14134dee2: shr    eax,0x1e
0x14134dee5: imul   eax,eax,0x7fffffff
0x14134deeb: sub    ecx,eax
0x14134deed: cmp    ecx,0xccccccd
0x14134def3: jae    0x14134df42
0x14134def5: mov    r8d,edi
0x14134def8: xor    edx,edx
0x14134defa: mov    rcx,rsi
0x14134defd: call   0x1413e3c90
0x14134df02: mov    r8d,edi
0x14134df05: mov    edx,0x2
0x14134df0a: mov    rcx,rsi
0x14134df0d: call   0x1413e3c90
0x14134df12: mov    r8d,edi
0x14134df15: mov    edx,0x3
0x14134df1a: mov    rcx,rsi
0x14134df1d: call   0x1413e3c90
0x14134df22: mov    r8d,edi
0x14134df25: mov    edx,0x2
0x14134df2a: mov    rcx,rsi
0x14134df2d: call   0x1413e3da0
0x14134df32: mov    r8d,edi
0x14134df35: mov    edx,0xa
0x14134df3a: mov    rcx,rsi
0x14134df3d: call   0x1413e3da0
0x14134df42: cmp    DWORD PTR [rip+0x5702ef],0x1        # 0x1418be238
0x14134df49: mov    r15,QWORD PTR [rsp+0x30]
0x14134df4e: mov    r12,QWORD PTR [rsp+0x40]
0x14134df53: jne    0x14134df9f
0x14134df55: mov    rax,QWORD PTR [rip+0x10b95f4]        # 0x142407550
0x14134df5c: sub    rax,QWORD PTR [rip+0x10b95e5]        # 0x142407548
0x14134df63: sar    rax,0x3
0x14134df67: test   rax,rax
0x14134df6a: je     0x14134df9f
0x14134df6c: mov    rcx,QWORD PTR [rip+0x10b961d]        # 0x142407590
0x14134df73: test   rcx,rcx
0x14134df76: je     0x14134df9f
0x14134df78: cmp    rsi,rcx
0x14134df7b: je     0x14134df9f
0x14134df7d: mov    eax,DWORD PTR [rcx+0x130]
0x14134df83: cmp    DWORD PTR [rsi+0x3d0],eax
0x14134df89: jne    0x14134df9f
0x14134df8b: lea    r9,[rsp+0x28]
0x14134df90: mov    r8b,0x1
0x14134df93: xor    edx,edx
0x14134df95: call   0x14134d520
0x14134df9a: cmp    eax,ebx
0x14134df9c: cmovl  ebx,eax
0x14134df9f: mov    eax,0x270f
0x14134dfa4: cmp    ebx,eax
0x14134dfa6: cmovg  ebx,eax
0x14134dfa9: test   ebx,ebx
0x14134dfab: cmovns r13d,ebx
0x14134dfaf: mov    eax,r13d
0x14134dfb2: mov    rdi,QWORD PTR [rsp+0x48]
0x14134dfb7: mov    rbp,QWORD PTR [rsp+0x70]
0x14134dfbc: mov    r13,QWORD PTR [rsp+0x38]
0x14134dfc1: add    rsp,0x50
0x14134dfc5: pop    r14
0x14134dfc7: pop    rsi
0x14134dfc8: pop    rbx
0x14134dfc9: ret
