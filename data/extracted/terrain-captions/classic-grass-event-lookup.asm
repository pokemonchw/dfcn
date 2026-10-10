; classic; PE:6a70b91c:0270a000; grass-event-lookup; RVA 0x14cc2a0..0x14cc3ab
0x014cc2a0: mov    QWORD PTR [rsp+0x18],rbp
0x014cc2a5: mov    QWORD PTR [rsp+0x20],rdi
0x014cc2aa: push   r14
0x014cc2ac: sub    rsp,0x20
0x014cc2b0: movsx  r14,dx
0x014cc2b4: movsx  rbp,r8w
0x014cc2b8: test   r14w,r14w
0x014cc2bc: js     0x1414cc398
0x014cc2c2: cmp    r14d,DWORD PTR [rcx+0x116bec]
0x014cc2c9: jge    0x1414cc398
0x014cc2cf: test   bp,bp
0x014cc2d2: js     0x1414cc398
0x014cc2d8: cmp    ebp,DWORD PTR [rcx+0x116bf0]
0x014cc2de: jge    0x1414cc398
0x014cc2e4: test   r9w,r9w
0x014cc2e8: js     0x1414cc398
0x014cc2ee: movsx  eax,r9w
0x014cc2f2: cmp    eax,DWORD PTR [rcx+0x116bf4]
0x014cc2f8: jge    0x1414cc398
0x014cc2fe: mov    r8,QWORD PTR [rcx+0x116bb8]
0x014cc305: test   r8,r8
0x014cc308: je     0x1414cc398
0x014cc30e: mov    rax,r14
0x014cc311: movsx  rcx,r9w
0x014cc315: shr    rax,0x4
0x014cc319: mov    rdx,rbp
0x014cc31c: shr    rdx,0x4
0x014cc320: mov    rax,QWORD PTR [r8+rax*8]
0x014cc324: mov    rax,QWORD PTR [rax+rdx*8]
0x014cc328: mov    rdi,QWORD PTR [rax+rcx*8]
0x014cc32c: test   rdi,rdi
0x014cc32f: je     0x1414cc398
0x014cc331: mov    QWORD PTR [rsp+0x30],rbx
0x014cc336: mov    rbx,QWORD PTR [rdi+0x8]
0x014cc33a: mov    rdi,QWORD PTR [rdi+0x10]
0x014cc33e: mov    QWORD PTR [rsp+0x38],rsi
0x014cc343: cmp    rbx,rdi
0x014cc346: jae    0x1414cc378
0x014cc348: mov    rsi,QWORD PTR [rbx]
0x014cc34b: mov    rcx,rsi
0x014cc34e: mov    rax,QWORD PTR [rsi]
0x014cc351: call   QWORD PTR [rax]
0x014cc353: cmp    ax,0x4
0x014cc357: jne    0x1414cc372
0x014cc359: mov    eax,r14d
0x014cc35c: mov    ecx,ebp
0x014cc35e: and    eax,0xf
0x014cc361: and    ecx,0xf
0x014cc364: shl    rax,0x4
0x014cc368: add    rax,rsi
0x014cc36b: cmp    BYTE PTR [rcx+rax*1+0xc],0x0
0x014cc370: ja     0x1414cc37a
0x014cc372: add    rbx,0x8
0x014cc376: jmp    0x1414cc343
0x014cc378: xor    esi,esi
0x014cc37a: mov    rbx,QWORD PTR [rsp+0x30]
0x014cc37f: mov    rax,rsi
0x014cc382: mov    rsi,QWORD PTR [rsp+0x38]
0x014cc387: mov    rbp,QWORD PTR [rsp+0x40]
0x014cc38c: mov    rdi,QWORD PTR [rsp+0x48]
0x014cc391: add    rsp,0x20
0x014cc395: pop    r14
0x014cc397: ret
0x014cc398: mov    rbp,QWORD PTR [rsp+0x40]
0x014cc39d: xor    eax,eax
0x014cc39f: mov    rdi,QWORD PTR [rsp+0x48]
0x014cc3a4: add    rsp,0x20
0x014cc3a8: pop    r14
0x014cc3aa: ret
