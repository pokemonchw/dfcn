140c8e1d0: mov    QWORD PTR [rsp+0x10],rbx
140c8e1d5: mov    QWORD PTR [rsp+0x18],rbp
140c8e1da: push   rsi
140c8e1db: push   rdi
140c8e1dc: push   r14
140c8e1de: sub    rsp,0x20
140c8e1e2: mov    eax,DWORD PTR [rcx+0x10]
140c8e1e5: mov    r14,rdx
140c8e1e8: mov    rsi,rcx
140c8e1eb: test   eax,0x400832
140c8e1f0: jne    0x140c8e2a6
140c8e1f6: test   BYTE PTR [rcx+0x14],0x8
140c8e1fa: jne    0x140c8e2a6
140c8e200: test   eax,0xa80408
140c8e205: jne    0x140c8e2a6
140c8e20b: mov    rbx,QWORD PTR [rcx+0x38]
140c8e20f: mov    rdi,QWORD PTR [rcx+0x40]
140c8e213: cmp    rbx,rdi
140c8e216: jae    0x140c8e252
140c8e218: mov    rcx,QWORD PTR [rbx]
140c8e21b: mov    rax,QWORD PTR [rcx]
140c8e21e: call   QWORD PTR [rax+0x10]
140c8e221: cmp    eax,0x24
140c8e224: jne    0x140c8e248
140c8e226: mov    rcx,QWORD PTR [rbx]
140c8e229: mov    rax,QWORD PTR [rcx]
140c8e22c: call   QWORD PTR [rax+0x30]
140c8e22f: test   rax,rax
140c8e232: je     0x140c8e248
140c8e234: lea    r8,[rsp+0x40]
140c8e239: mov    rdx,r14
140c8e23c: mov    rcx,rax
140c8e23f: call   0x140559180
140c8e244: cmp    al,0x2
140c8e246: je     0x140c8e24e
140c8e248: add    rbx,0x8
140c8e24c: jmp    0x140c8e213
140c8e24e: mov    al,0x2
140c8e250: jmp    0x140c8e2a8
140c8e252: test   BYTE PTR [rsi+0x10],0x1
140c8e256: je     0x140c8e2a6
140c8e258: mov    rbx,QWORD PTR [r14+0x450]
140c8e25f: mov    rdi,QWORD PTR [r14+0x458]
140c8e266: cmp    rbx,rdi
140c8e269: jae    0x140c8e2a6
140c8e26b: mov    rbp,QWORD PTR [rbx]
140c8e26e: lea    r8,[rsp+0x40]
140c8e273: mov    rcx,rbp
140c8e276: mov    rdx,r14
140c8e279: call   0x140559180
140c8e27e: cmp    al,0x2
140c8e280: jne    0x140c8e29c
140c8e282: movzx  r9d,WORD PTR [rsi+0xc]
140c8e287: mov    rcx,rbp
140c8e28a: movzx  r8d,WORD PTR [rsi+0xa]
140c8e28f: movzx  edx,WORD PTR [rsi+0x8]
140c8e293: call   0x1405587b0
140c8e298: test   al,al
140c8e29a: jne    0x140c8e2a2
140c8e29c: add    rbx,0x8
140c8e2a0: jmp    0x140c8e266
140c8e2a2: mov    al,0x1
140c8e2a4: jmp    0x140c8e2a8
140c8e2a6: xor    al,al
140c8e2a8: mov    rbx,QWORD PTR [rsp+0x48]
140c8e2ad: mov    rbp,QWORD PTR [rsp+0x50]
140c8e2b2: add    rsp,0x20
140c8e2b6: pop    r14
140c8e2b8: pop    rdi
140c8e2b9: pop    rsi
140c8e2ba: ret