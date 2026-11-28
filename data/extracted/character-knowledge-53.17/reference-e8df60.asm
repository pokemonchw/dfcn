; reference PE:6aea05a1:02734000; poetic-topic; RVA 0xe8df60..0xe8e2dc; code ends 0xe8e288
0x00e8df60: cmp    edx,0x14
0x00e8df63: ja     0x140e8e284
0x00e8df69: push   rbx
0x00e8df6a: sub    rsp,0x130
0x00e8df71: mov    rax,QWORD PTR [rip+0xa300c8]        # 0x1418be040
0x00e8df78: xor    rax,rsp
0x00e8df7b: mov    QWORD PTR [rsp+0x120],rax
0x00e8df83: mov    rbx,rcx
0x00e8df86: movsxd rax,edx
0x00e8df89: lea    rcx,[rip+0xffffffffff172070]        # 0x140000000
0x00e8df90: mov    edx,DWORD PTR [rcx+rax*4+0xe8e288]
0x00e8df97: add    rdx,rcx
0x00e8df9a: jmp    rdx
0x00e8df9c: mov    r8d,0x8
0x00e8dfa2: lea    rdx,[rip+0x8c279f]        # 0x141750748 ; literal="the past"
0x00e8dfa9: jmp    0x140e8e264
0x00e8dfae: mov    r8d,0xe
0x00e8dfb4: lea    rdx,[rip+0x8c280d]        # 0x1417507c8 ; literal="current events"
0x00e8dfbb: jmp    0x140e8e264
0x00e8dfc0: mov    r8d,0xa
0x00e8dfc6: lea    rdx,[rip+0x8c27eb]        # 0x1417507b8 ; literal="the future"
0x00e8dfcd: jmp    0x140e8e264
0x00e8dfd2: mov    r8d,0x19
0x00e8dfd8: lea    rdx,[rip+0x8c2819]        # 0x1417507f8 ; literal="someone recently deceased"
0x00e8dfdf: jmp    0x140e8e264
0x00e8dfe4: mov    r8d,0x18
0x00e8dfea: lea    rdx,[rip+0x8c27e7]        # 0x1417507d8 ; literal="someone recently retired"
0x00e8dff1: jmp    0x140e8e264
0x00e8dff6: mov    r8d,0x8
0x00e8dffc: lea    rdx,[rip+0x7a3425]        # 0x141631428 ; literal="religion"
0x00e8e003: jmp    0x140e8e264
0x00e8e008: cmp    r8d,0xffffffff
0x00e8e00c: je     0x140e8e151
0x00e8e012: cmp    r8d,0x15
0x00e8e016: je     0x140e8e13f
0x00e8e01c: cmp    r8d,0x1e
0x00e8e020: je     0x140e8e12d
0x00e8e026: cmp    r8d,0x30
0x00e8e02a: je     0x140e8e11b
0x00e8e030: cmp    r8d,0x4b
0x00e8e034: je     0x140e8e109
0x00e8e03a: cmp    r8d,0x7a
0x00e8e03e: je     0x140e8e0f7
0x00e8e044: xorps  xmm0,xmm0
0x00e8e047: movups XMMWORD PTR [rsp+0x100],xmm0
0x00e8e04f: xor    eax,eax
0x00e8e051: mov    QWORD PTR [rsp+0x110],rax
0x00e8e059: mov    QWORD PTR [rsp+0x118],0xf
0x00e8e065: mov    BYTE PTR [rsp+0x100],al
0x00e8e06c: lea    rdx,[rsp+0x100]
0x00e8e074: movzx  ecx,r8w
0x00e8e078: call   0x14076fc80
0x00e8e07d: lea    rdx,[rsp+0x100]
0x00e8e085: cmp    QWORD PTR [rsp+0x118],0xf
0x00e8e08e: cmova  rdx,QWORD PTR [rsp+0x100]
0x00e8e097: mov    r8,QWORD PTR [rsp+0x110]
0x00e8e09f: mov    rcx,rbx
0x00e8e0a2: call   0x140071040
0x00e8e0a7: nop
0x00e8e0a8: mov    rdx,QWORD PTR [rsp+0x118]
0x00e8e0b0: cmp    rdx,0xf
0x00e8e0b4: jbe    0x140e8e26c
0x00e8e0ba: inc    rdx
0x00e8e0bd: mov    rcx,QWORD PTR [rsp+0x100]
0x00e8e0c5: mov    rax,rcx
0x00e8e0c8: cmp    rdx,0x1000
0x00e8e0cf: jb     0x140e8e0ed
0x00e8e0d1: add    rdx,0x27
0x00e8e0d5: mov    rcx,QWORD PTR [rcx-0x8]
0x00e8e0d9: sub    rax,rcx
0x00e8e0dc: add    rax,0xfffffffffffffff8
0x00e8e0e0: cmp    rax,0x1f
0x00e8e0e4: jbe    0x140e8e0ed
0x00e8e0e6: call   QWORD PTR [rip+0x772a54]        # 0x141600b40
0x00e8e0ec: int3
0x00e8e0ed: call   0x1415530d0
0x00e8e0f2: jmp    0x140e8e26c
0x00e8e0f7: mov    r8d,0x12
0x00e8e0fd: lea    rdx,[rip+0x8c277c]        # 0x141750880 ; literal="the concept of war"
0x00e8e104: jmp    0x140e8e264
0x00e8e109: mov    r8d,0x15
0x00e8e10f: lea    rdx,[rip+0x8c2672]        # 0x141750788 ; literal="the concept of nature"
0x00e8e116: jmp    0x140e8e264
0x00e8e11b: mov    r8d,0x16
0x00e8e121: lea    rdx,[rip+0x8c2678]        # 0x1417507a0 ; literal="the concept of hunting"
0x00e8e128: jmp    0x140e8e264
0x00e8e12d: mov    r8d,0x15
0x00e8e133: lea    rdx,[rip+0x8c261e]        # 0x141750758 ; literal="the concept of family"
0x00e8e13a: jmp    0x140e8e264
0x00e8e13f: mov    r8d,0x14
0x00e8e145: lea    rdx,[rip+0x8c2624]        # 0x141750770 ; literal="the concept of death"
0x00e8e14c: jmp    0x140e8e264
0x00e8e151: lea    rdx,[rip+0x8c2710]        # 0x141750868 ; literal="an abstract concept"
0x00e8e158: jmp    0x140e8e25e
0x00e8e15d: cmp    r8d,0xffffffff
0x00e8e161: je     0x140e8e194
0x00e8e163: lea    rcx,[rsp+0x30]
0x00e8e168: call   0x1400736b0
0x00e8e16d: xor    eax,eax
0x00e8e16f: mov    WORD PTR [rsp+0x28],ax
0x00e8e174: mov    WORD PTR [rsp+0x20],0x1
0x00e8e17b: lea    r9,[rsp+0x30]
0x00e8e180: mov    rdx,rbx
0x00e8e183: lea    rcx,[rip+0x168dfae]        # 0x14251c138
0x00e8e18a: call   0x140baabd0
0x00e8e18f: jmp    0x140e8e26c
0x00e8e194: lea    rdx,[rip+0x8c2715]        # 0x1417508b0 ; literal="a historical figure"
0x00e8e19b: jmp    0x140e8e25e
0x00e8e1a0: mov    r8d,0x10
0x00e8e1a6: lea    rdx,[rip+0x8c26eb]        # 0x141750898 ; literal="a specific place"
0x00e8e1ad: jmp    0x140e8e264
0x00e8e1b2: mov    r8d,0x1c
0x00e8e1b8: lea    rdx,[rip+0x8c2671]        # 0x141750830 ; literal="a specific wilderness region"
0x00e8e1bf: jmp    0x140e8e264
0x00e8e1c4: mov    r8d,0x6
0x00e8e1ca: lea    rdx,[rip+0x7cf7e7]        # 0x14165d9b8 ; literal="nature"
0x00e8e1d1: jmp    0x140e8e264
0x00e8e1d6: mov    r8d,0x7
0x00e8e1dc: lea    rdx,[rip+0x8bf4ed]        # 0x14174d6d0 ; literal="a lover"
0x00e8e1e3: jmp    0x140e8e264
0x00e8e1e5: mov    r8d,0x6
0x00e8e1eb: lea    rdx,[rip+0x7cf59e]        # 0x14165d790 ; literal="family"
0x00e8e1f2: jmp    0x140e8e264
0x00e8e1f4: lea    rdx,[rip+0x8c261d]        # 0x141750818 ; literal="alcoholic beverages"
0x00e8e1fb: jmp    0x140e8e25e
0x00e8e1fd: mov    r8d,0x9
0x00e8e203: lea    rdx,[rip+0x7d13c6]        # 0x14165f5d0 ; literal="a journey"
0x00e8e20a: jmp    0x140e8e264
0x00e8e20c: mov    r8d,0x3
0x00e8e212: lea    rdx,[rip+0x7d7363]        # 0x14166557c ; literal="war"
0x00e8e219: jmp    0x140e8e264
0x00e8e21b: mov    r8d,0x8
0x00e8e221: lea    rdx,[rip+0x8c2630]        # 0x141750858 ; literal="the hunt"
0x00e8e228: jmp    0x140e8e264
0x00e8e22a: mov    r8d,0x6
0x00e8e230: lea    rdx,[rip+0x8c2619]        # 0x141750850 ; literal="mining"
0x00e8e237: jmp    0x140e8e264
0x00e8e239: mov    r8d,0x5
0x00e8e23f: lea    rdx,[rip+0x77adee]        # 0x141609034 ; literal="death"
0x00e8e246: jmp    0x140e8e264
0x00e8e248: mov    r8d,0xb
0x00e8e24e: lea    rdx,[rip+0x878673]        # 0x1417068c8 ; literal="immortality"
0x00e8e255: jmp    0x140e8e264
0x00e8e257: lea    rdx,[rip+0x8c206a]        # 0x1417502c8 ; literal="someone's character"
0x00e8e25e: mov    r8d,0x13
0x00e8e264: mov    rcx,rbx
0x00e8e267: call   0x140071040
0x00e8e26c: mov    rcx,QWORD PTR [rsp+0x120]
0x00e8e274: xor    rcx,rsp
0x00e8e277: call   0x1415530b0
0x00e8e27c: add    rsp,0x130
0x00e8e283: pop    rbx
0x00e8e284: ret
0x00e8e285: nop    DWORD PTR [rax]
