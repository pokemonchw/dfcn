140a462c0: mov    QWORD PTR [rsp+0x18],r8
140a462c5: push   rbx
140a462c6: push   rsi
140a462c7: push   r14
140a462c9: sub    rsp,0x20
140a462cd: mov    rax,QWORD PTR [r8]
140a462d0: mov    r14,rcx
140a462d3: mov    rcx,r8
140a462d6: mov    rbx,r8
140a462d9: mov    rsi,rdx
140a462dc: call   QWORD PTR [rax+0x638]
140a462e2: test   al,al
140a462e4: je     0x140a46321
140a462e6: test   BYTE PTR [rbx+0x10],0x20
140a462ea: jne    0x140a464a9
140a462f0: mov    rdx,QWORD PTR [rsi+0x8]
140a462f4: cmp    rdx,QWORD PTR [rsi+0x10]
140a462f8: je     0x140a4630b
140a462fa: mov    QWORD PTR [rdx],rbx
140a462fd: add    QWORD PTR [rsi+0x8],0x8
140a46302: add    rsp,0x20
140a46306: pop    r14
140a46308: pop    rsi
140a46309: pop    rbx
140a4630a: ret
140a4630b: lea    r8,[rsp+0x50]
140a46310: mov    rcx,rsi
140a46313: call   0x1400bad30
140a46318: add    rsp,0x20
140a4631c: pop    r14
140a4631e: pop    rsi
140a4631f: pop    rbx
140a46320: ret
140a46321: mov    rax,QWORD PTR [rbx]
140a46324: mov    rcx,rbx
140a46327: call   QWORD PTR [rax+0x90]
140a4632d: test   al,al
140a4632f: jne    0x140a46343
140a46331: mov    rax,QWORD PTR [rbx]
140a46334: mov    rcx,rbx
140a46337: call   QWORD PTR [rax]
140a46339: cmp    ax,0x1f
140a4633d: jne    0x140a464a9
140a46343: test   BYTE PTR [rbx+0x10],0x40
140a46347: je     0x140a464a9
140a4634d: movsx  rax,WORD PTR [r14]
140a46351: mov    QWORD PTR [rsp+0x40],rbp
140a46356: mov    QWORD PTR [rsp+0x48],rdi
140a4635b: xor    edi,edi
140a4635d: mov    QWORD PTR [rsp+0x58],r15
140a46362: test   ax,ax
140a46365: js     0x140a463bd
140a46367: mov    r8,QWORD PTR [rip+0x1aa66fa]        # 0x1424eca68
140a4636e: mov    rdx,rax
140a46371: mov    rax,QWORD PTR [rip+0x1aa66f8]        # 0x1424eca70
140a46378: sub    rax,r8
140a4637b: sar    rax,0x3
140a4637f: cmp    rdx,rax
140a46382: jae    0x140a463bd
140a46384: movsx  rcx,WORD PTR [r14+0x2]
140a46389: test   cx,cx
140a4638c: js     0x140a463b9
140a4638e: mov    rax,QWORD PTR [r8+rdx*8]
140a46392: mov    rdx,QWORD PTR [rax+0x178]
140a46399: mov    rax,QWORD PTR [rax+0x180]
140a463a0: sub    rax,rdx
140a463a3: sar    rax,0x3
140a463a7: cmp    rcx,rax
140a463aa: jae    0x140a463b9
140a463ac: mov    rax,QWORD PTR [rdx+rcx*8]
140a463b0: movzx  ebp,WORD PTR [rax+0x478]
140a463b7: jmp    0x140a463c0
140a463b9: mov    ebp,edi
140a463bb: jmp    0x140a463c0
140a463bd: movzx  ebp,di
140a463c0: mov    rax,QWORD PTR [rbx]
140a463c3: mov    rcx,rbx
140a463c6: call   QWORD PTR [rax+0x18]
140a463c9: mov    rdx,QWORD PTR [rbx]
140a463cc: mov    rcx,rbx
140a463cf: mov    r15d,eax
140a463d2: call   QWORD PTR [rdx+0x10]
140a463d5: test   bp,bp
140a463d8: jle    0x140a4649a
140a463de: mov    r8d,r15d
140a463e1: movzx  edx,ax
140a463e4: call   0x1414d1d80
140a463e9: mov    ecx,0x64
140a463ee: sub    cx,ax
140a463f1: mov    eax,edi
140a463f3: cmovns ax,cx
140a463f7: movsx  r15d,ax
140a463fb: inc    r15d
140a463fe: cmp    r15d,0x1
140a46402: jbe    0x140a4643f
140a46404: call   0x140eb68b0
140a46409: mov    r8d,eax
140a4640c: mov    eax,0x3
140a46411: mul    r8d
140a46414: mov    ecx,r8d
140a46417: mov    eax,0x7fffffff
140a4641c: sub    ecx,edx
140a4641e: shr    ecx,1
140a46420: add    ecx,edx
140a46422: xor    edx,edx
140a46424: div    r15d
140a46427: shr    ecx,0x1e
140a4642a: xor    edx,edx
140a4642c: imul   ecx,ecx,0x7fffffff
140a46432: sub    r8d,ecx
140a46435: lea    ecx,[rax+0x1]
140a46438: mov    eax,r8d
140a4643b: div    ecx
140a4643d: mov    edi,eax
140a4643f: movsx  ecx,bp
140a46442: cmp    edi,ecx
140a46444: jg     0x140a4649a
140a46446: mov    rax,QWORD PTR [rbx+0x40]
140a4644a: sub    rax,QWORD PTR [rbx+0x38]
140a4644e: sar    rax,0x3
140a46452: sub    eax,0x1
140a46455: movsxd rdi,eax
140a46458: js     0x140a4649a
140a4645a: nop    WORD PTR [rax+rax*1+0x0]
140a46460: mov    rax,QWORD PTR [rbx+0x38]
140a46464: mov    rcx,QWORD PTR [rax+rdi*8]
140a46468: mov    rax,QWORD PTR [rcx]
140a4646b: call   QWORD PTR [rax+0x10]
140a4646e: cmp    eax,0xa
140a46471: jne    0x140a46494
140a46473: mov    rax,QWORD PTR [rbx+0x38]
140a46477: mov    rcx,QWORD PTR [rax+rdi*8]
140a4647b: mov    rax,QWORD PTR [rcx]
140a4647e: call   QWORD PTR [rax+0x18]
140a46481: test   rax,rax
140a46484: je     0x140a46494
140a46486: mov    r8,rax
140a46489: mov    rdx,rsi
140a4648c: mov    rcx,r14
140a4648f: call   0x140a462c0
140a46494: sub    rdi,0x1
140a46498: jns    0x140a46460
140a4649a: mov    rdi,QWORD PTR [rsp+0x48]
140a4649f: mov    rbp,QWORD PTR [rsp+0x40]
140a464a4: mov    r15,QWORD PTR [rsp+0x58]
140a464a9: add    rsp,0x20
140a464ad: pop    r14
140a464af: pop    rsi
140a464b0: pop    rbx
140a464b1: ret