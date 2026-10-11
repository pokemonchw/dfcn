# reference PE:6a70a6d9:02711000; uppercase-name-fragment; RVA 0x52d3c0..0x52d5fe
0x0052d3c0: mov    QWORD PTR [rsp+0x10],rbx
0x0052d3c5: push   rdi
0x0052d3c6: xor    r11d,r11d
0x0052d3c9: mov    bl,0x1
0x0052d3cb: mov    edi,r11d
0x0052d3ce: cmp    QWORD PTR [rcx+0x10],rdi
0x0052d3d2: jbe    0x14052d5f7
0x0052d3d8: mov    QWORD PTR [rsp+0x10],rsi
0x0052d3dd: mov    r8d,r11d
0x0052d3e0: lea    rsi,[rip+0xffffffffffad2c19]        # 0x140000000
0x0052d3e7: nop    WORD PTR [rax+rax*1+0x0]
0x0052d3f0: mov    rax,QWORD PTR [rcx+0x18]
0x0052d3f4: mov    r9,rcx
0x0052d3f7: mov    rdx,rax
0x0052d3fa: cmp    rax,0xf
0x0052d3fe: jbe    0x14052d403
0x0052d400: mov    r9,QWORD PTR [rcx]
0x0052d403: cmp    BYTE PTR [r8+r9*1],0x5b
0x0052d408: jne    0x14052d412
0x0052d40a: inc    r11d
0x0052d40d: jmp    0x14052d5e0
0x0052d412: mov    r9,rcx
0x0052d415: cmp    rax,0xf
0x0052d419: jbe    0x14052d41e
0x0052d41b: mov    r9,QWORD PTR [rcx]
0x0052d41e: cmp    BYTE PTR [r8+r9*1],0x5d
0x0052d423: jne    0x14052d42d
0x0052d425: dec    r11d
0x0052d428: jmp    0x14052d5e0
0x0052d42d: test   r11d,r11d
0x0052d430: jg     0x14052d5e0
0x0052d436: xor    r10b,r10b
0x0052d439: test   bl,bl
0x0052d43b: jne    0x14052d4c5
0x0052d441: mov    r9,rcx
0x0052d444: cmp    rax,0xf
0x0052d448: jbe    0x14052d44d
0x0052d44a: mov    r9,QWORD PTR [rcx]
0x0052d44d: cmp    BYTE PTR [r8+r9*1-0x1],0x20
0x0052d453: je     0x14052d469
0x0052d455: mov    rax,rcx
0x0052d458: cmp    rdx,0xf
0x0052d45c: jbe    0x14052d461
0x0052d45e: mov    rax,QWORD PTR [rcx]
0x0052d461: cmp    BYTE PTR [rax+r8*1-0x1],0x22
0x0052d467: jne    0x14052d46c
0x0052d469: mov    r10b,0x1
0x0052d46c: mov    r9,rcx
0x0052d46f: cmp    rdx,0xf
0x0052d473: jbe    0x14052d478
0x0052d475: mov    r9,QWORD PTR [rcx]
0x0052d478: cmp    BYTE PTR [r9+r8*1-0x1],0x27
0x0052d47e: mov    rax,rdx
0x0052d481: jne    0x14052d4bc
0x0052d483: test   edi,edi
0x0052d485: jle    0x14052d4c5
0x0052d487: cmp    edi,0x2
0x0052d48a: jl     0x14052d4bc
0x0052d48c: mov    rax,rcx
0x0052d48f: cmp    rdx,0xf
0x0052d493: jbe    0x14052d498
0x0052d495: mov    rax,QWORD PTR [rcx]
0x0052d498: cmp    BYTE PTR [rax+r8*1-0x2],0x20
0x0052d49e: je     0x14052d4b7
0x0052d4a0: mov    r9,rcx
0x0052d4a3: cmp    rdx,0xf
0x0052d4a7: jbe    0x14052d4ac
0x0052d4a9: mov    r9,QWORD PTR [rcx]
0x0052d4ac: cmp    BYTE PTR [r9+r8*1-0x2],0x2c
0x0052d4b2: mov    rax,rdx
0x0052d4b5: jne    0x14052d4bc
0x0052d4b7: mov    rax,rdx
0x0052d4ba: jmp    0x14052d4c5
0x0052d4bc: test   r10b,r10b
0x0052d4bf: je     0x14052d5e0
0x0052d4c5: mov    rdx,rcx
0x0052d4c8: cmp    rax,0xf
0x0052d4cc: jbe    0x14052d4d1
0x0052d4ce: mov    rdx,QWORD PTR [rcx]
0x0052d4d1: cmp    BYTE PTR [r8+rdx*1],0x61
0x0052d4d6: jl     0x14052d50e
0x0052d4d8: mov    rdx,rcx
0x0052d4db: cmp    rax,0xf
0x0052d4df: jbe    0x14052d4e4
0x0052d4e1: mov    rdx,QWORD PTR [rcx]
0x0052d4e4: cmp    BYTE PTR [rdx+r8*1],0x7a
0x0052d4e9: jg     0x14052d50e
0x0052d4eb: mov    rdx,rcx
0x0052d4ee: cmp    rax,0xf
0x0052d4f2: jbe    0x14052d4f7
0x0052d4f4: mov    rdx,QWORD PTR [rcx]
0x0052d4f7: add    BYTE PTR [rdx+r8*1],0x9f
0x0052d4fc: mov    rax,rcx
0x0052d4ff: cmp    QWORD PTR [rcx+0x18],0xf
0x0052d504: jbe    0x14052d509
0x0052d506: mov    rax,QWORD PTR [rcx]
0x0052d509: add    BYTE PTR [rax+r8*1],0x41
0x0052d50e: mov    r9,QWORD PTR [rcx+0x18]
0x0052d512: mov    rax,rcx
0x0052d515: cmp    r9,0xf
0x0052d519: jbe    0x14052d51e
0x0052d51b: mov    rax,QWORD PTR [rcx]
0x0052d51e: movsx  eax,BYTE PTR [r8+rax*1]
0x0052d523: add    eax,0x7f
0x0052d526: cmp    eax,0x23
0x0052d529: ja     0x14052d5de
0x0052d52f: cdqe
0x0052d531: movzx  eax,BYTE PTR [rsi+rax*1+0x52d624]
0x0052d539: mov    edx,DWORD PTR [rsi+rax*4+0x52d600]
0x0052d540: add    rdx,rsi
0x0052d543: jmp    rdx
0x0052d545: mov    rax,rcx
0x0052d548: cmp    r9,0xf
0x0052d54c: jbe    0x14052d551
0x0052d54e: mov    rax,QWORD PTR [rcx]
0x0052d551: mov    BYTE PTR [rax+r8*1],0x9a
0x0052d556: jmp    0x14052d5de
0x0052d55b: mov    rax,rcx
0x0052d55e: cmp    r9,0xf
0x0052d562: jbe    0x14052d567
0x0052d564: mov    rax,QWORD PTR [rcx]
0x0052d567: mov    BYTE PTR [rax+r8*1],0xa5
0x0052d56c: jmp    0x14052d5de
0x0052d56e: mov    rax,rcx
0x0052d571: cmp    r9,0xf
0x0052d575: jbe    0x14052d57a
0x0052d577: mov    rax,QWORD PTR [rcx]
0x0052d57a: mov    BYTE PTR [rax+r8*1],0x8e
0x0052d57f: jmp    0x14052d5de
0x0052d581: mov    rax,rcx
0x0052d584: cmp    r9,0xf
0x0052d588: jbe    0x14052d58d
0x0052d58a: mov    rax,QWORD PTR [rcx]
0x0052d58d: mov    BYTE PTR [rax+r8*1],0x8f
0x0052d592: jmp    0x14052d5de
0x0052d594: mov    rax,rcx
0x0052d597: cmp    r9,0xf
0x0052d59b: jbe    0x14052d5a0
0x0052d59d: mov    rax,QWORD PTR [rcx]
0x0052d5a0: mov    BYTE PTR [rax+r8*1],0x90
0x0052d5a5: jmp    0x14052d5de
0x0052d5a7: mov    rax,rcx
0x0052d5aa: cmp    r9,0xf
0x0052d5ae: jbe    0x14052d5b3
0x0052d5b0: mov    rax,QWORD PTR [rcx]
0x0052d5b3: mov    BYTE PTR [rax+r8*1],0x99
0x0052d5b8: jmp    0x14052d5de
0x0052d5ba: mov    rax,rcx
0x0052d5bd: cmp    r9,0xf
0x0052d5c1: jbe    0x14052d5c6
0x0052d5c3: mov    rax,QWORD PTR [rcx]
0x0052d5c6: mov    BYTE PTR [rax+r8*1],0x80
0x0052d5cb: jmp    0x14052d5de
0x0052d5cd: mov    rax,rcx
0x0052d5d0: cmp    r9,0xf
0x0052d5d4: jbe    0x14052d5d9
0x0052d5d6: mov    rax,QWORD PTR [rcx]
0x0052d5d9: mov    BYTE PTR [rax+r8*1],0x92
0x0052d5de: xor    bl,bl
0x0052d5e0: inc    edi
0x0052d5e2: inc    r8
0x0052d5e5: movsxd rax,edi
0x0052d5e8: cmp    rax,QWORD PTR [rcx+0x10]
0x0052d5ec: jb     0x14052d3f0
0x0052d5f2: mov    rsi,QWORD PTR [rsp+0x10]
0x0052d5f7: mov    rbx,QWORD PTR [rsp+0x18]
0x0052d5fc: pop    rdi
0x0052d5fd: ret
