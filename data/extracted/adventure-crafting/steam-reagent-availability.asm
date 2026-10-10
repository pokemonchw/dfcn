# steam PE:6a70a6d9:02711000; reagent-availability; RVA 0x27f230..0x27f389
0x0027f230: mov    QWORD PTR [rsp+0x18],rbx
0x0027f235: push   rbp
0x0027f236: mov    rbp,rsp
0x0027f239: sub    rsp,0x40
0x0027f23d: cmp    DWORD PTR [rcx+0x4],0x1
0x0027f241: mov    rbx,rcx
0x0027f244: je     0x14027f37e
0x0027f24a: cmp    BYTE PTR [rcx+0x90],0x0
0x0027f251: je     0x14027f37e
0x0027f257: cmp    BYTE PTR [rip+0x2111377],0x0        # 0x1423905d5
0x0027f25e: je     0x14027f377
0x0027f264: cmp    BYTE PTR [rip+0x2111363],0x0        # 0x1423905ce
0x0027f26b: je     0x14027f377
0x0027f271: mov    ecx,DWORD PTR [rip+0x214e511]        # 0x1423cd788
0x0027f277: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027f27c: add    ecx,0xffffffe0
0x0027f27f: mov    QWORD PTR [rsp+0x50],rsi
0x0027f284: imul   ecx
0x0027f286: xor    esi,esi
0x0027f288: mov    QWORD PTR [rsp+0x58],rdi
0x0027f28d: mov    edi,DWORD PTR [rip+0x23cb321]        # 0x14264a5b4
0x0027f293: lea    rcx,[rbp-0x20]
0x0027f297: mov    eax,edx
0x0027f299: mov    QWORD PTR [rbp-0x8],rsi
0x0027f29d: shr    eax,0x1f
0x0027f2a0: add    edx,eax
0x0027f2a2: mov    DWORD PTR [rbp-0x1c],esi
0x0027f2a5: mov    eax,DWORD PTR [rbx+0x8c]
0x0027f2ab: mov    DWORD PTR [rbp-0x20],eax
0x0027f2ae: mov    rax,QWORD PTR [rbx+0xb8]
0x0027f2b5: sub    rax,QWORD PTR [rbx+0xb0]
0x0027f2bc: sar    rax,0x3
0x0027f2c0: dec    eax
0x0027f2c2: mov    DWORD PTR [rbp-0x10],0x1c
0x0027f2c9: mov    DWORD PTR [rbp-0x18],eax
0x0027f2cc: lea    eax,[rdx*2+0x19]
0x0027f2d3: add    eax,edx
0x0027f2d5: mov    DWORD PTR [rbp-0x14],edx
0x0027f2d8: mov    DWORD PTR [rbp-0xc],eax
0x0027f2db: call   0x1400bb3b0
0x0027f2e0: mov    eax,DWORD PTR [rbp-0x10]
0x0027f2e3: cmp    edi,eax
0x0027f2e5: jg     0x14027f2ec
0x0027f2e7: mov    eax,DWORD PTR [rbp-0x1c]
0x0027f2ea: jmp    0x14027f34d
0x0027f2ec: mov    r10d,DWORD PTR [rbp-0xc]
0x0027f2f0: cmp    edi,r10d
0x0027f2f3: jl     0x14027f30c
0x0027f2f5: mov    eax,DWORD PTR [rbp-0x18]
0x0027f2f8: sub    eax,DWORD PTR [rbp-0x14]
0x0027f2fb: mov    ecx,DWORD PTR [rbp-0x1c]
0x0027f2fe: inc    eax
0x0027f300: mov    DWORD PTR [rbp-0x20],eax
0x0027f303: cmp    eax,ecx
0x0027f305: jge    0x14027f350
0x0027f307: mov    DWORD PTR [rbp-0x20],ecx
0x0027f30a: jmp    0x14027f350
0x0027f30c: cmp    r10d,eax
0x0027f30f: jle    0x14027f350
0x0027f311: mov    r9d,DWORD PTR [rbp-0x1c]
0x0027f315: mov    r8d,DWORD PTR [rbp-0x18]
0x0027f319: sub    r8d,DWORD PTR [rbp-0x14]
0x0027f31d: mov    ecx,r8d
0x0027f320: sub    ecx,r9d
0x0027f323: add    ecx,0x1
0x0027f326: cmovns esi,ecx
0x0027f329: sub    edi,eax
0x0027f32b: sub    r10d,eax
0x0027f32e: imul   esi,edi
0x0027f331: inc    r10d
0x0027f334: lea    ecx,[r8+0x1]
0x0027f338: mov    eax,esi
0x0027f33a: cdq
0x0027f33b: idiv   r10d
0x0027f33e: add    eax,r9d
0x0027f341: cmp    eax,ecx
0x0027f343: cmovg  eax,ecx
0x0027f346: cmp    eax,r9d
0x0027f349: cmovl  eax,r9d
0x0027f34d: mov    DWORD PTR [rbp-0x20],eax
0x0027f350: lea    rcx,[rbp-0x20]
0x0027f354: call   0x1400bb3b0
0x0027f359: mov    eax,DWORD PTR [rbp-0x20]
0x0027f35c: mov    rdi,QWORD PTR [rsp+0x58]
0x0027f361: mov    rsi,QWORD PTR [rsp+0x50]
0x0027f366: mov    DWORD PTR [rbx+0x8c],eax
0x0027f36c: mov    rbx,QWORD PTR [rsp+0x60]
0x0027f371: add    rsp,0x40
0x0027f375: pop    rbp
0x0027f376: ret
0x0027f377: mov    BYTE PTR [rcx+0x90],0x0
0x0027f37e: mov    rbx,QWORD PTR [rsp+0x60]
0x0027f383: add    rsp,0x40
0x0027f387: pop    rbp
0x0027f388: ret
