140abd3a0: mov    QWORD PTR [rsp+0x8],rbx
140abd3a5: mov    QWORD PTR [rsp+0x18],rbp
140abd3aa: mov    QWORD PTR [rsp+0x20],rsi
140abd3af: mov    WORD PTR [rsp+0x10],dx
140abd3b4: push   rdi
140abd3b5: push   r12
140abd3b7: push   r13
140abd3b9: push   r14
140abd3bb: push   r15
140abd3bd: sub    rsp,0x20
140abd3c1: mov    esi,DWORD PTR [rsp+0x70]
140abd3c5: mov    ebp,r9d
140abd3c8: movzx  r13d,r8b
140abd3cc: test   cx,cx
140abd3cf: js     0x140abd4d6
140abd3d5: mov    rax,QWORD PTR [rip+0x1a2f694]        # 0x1424eca70
140abd3dc: mov    r10,QWORD PTR [rip+0x1a2f685]        # 0x1424eca68
140abd3e3: sub    rax,r10
140abd3e6: movsx  rcx,cx
140abd3ea: sar    rax,0x3
140abd3ee: cmp    rcx,rax
140abd3f1: jae    0x140abd4d6
140abd3f7: mov    r14,QWORD PTR [r10+rcx*8]
140abd3fb: test   r14,r14
140abd3fe: je     0x140abd4d6
140abd404: mov    rax,QWORD PTR [r14+0x178]
140abd40b: mov    rdi,QWORD PTR [r14+0x180]
140abd412: sub    rdi,rax
140abd415: sar    rdi,0x3
140abd419: sub    di,0x1
140abd41d: js     0x140abd4d6
140abd423: mov    r12d,r9d
140abd426: mov    r15d,esi
140abd429: and    r12d,0x7
140abd42d: and    r15d,0x7
140abd431: movsx  rbx,di
140abd435: test   r13b,r13b
140abd438: je     0x140abd447
140abd43a: mov    rcx,QWORD PTR [rax+rbx*8]
140abd43e: call   0x140702630
140abd443: test   al,al
140abd445: jne    0x140abd4bb
140abd447: cmp    ebp,0xffffffff
140abd44a: je     0x140abd481
140abd44c: mov    rax,QWORD PTR [r14+0x178]
140abd453: mov    rax,QWORD PTR [rax+rbx*8]
140abd457: test   ebp,ebp
140abd459: js     0x140abd4bb
140abd45b: mov    ecx,ebp
140abd45d: shr    ecx,0x3
140abd460: cmp    ecx,DWORD PTR [rax+0x6b0]
140abd466: jge    0x140abd4bb
140abd468: mov    rax,QWORD PTR [rax+0x6a8]
140abd46f: movzx  edx,BYTE PTR [rcx+rax*1]
140abd473: mov    ecx,r12d
140abd476: mov    eax,0x1
140abd47b: shl    eax,cl
140abd47d: test   al,dl
140abd47f: je     0x140abd4bb
140abd481: cmp    esi,0xffffffff
140abd484: je     0x140abd4d2
140abd486: mov    rax,QWORD PTR [r14+0x178]
140abd48d: mov    rax,QWORD PTR [rax+rbx*8]
140abd491: test   esi,esi
140abd493: js     0x140abd4d2
140abd495: mov    ecx,esi
140abd497: shr    ecx,0x3
140abd49a: cmp    ecx,DWORD PTR [rax+0x6b0]
140abd4a0: jge    0x140abd4d2
140abd4a2: mov    rax,QWORD PTR [rax+0x6a8]
140abd4a9: movzx  edx,BYTE PTR [rcx+rax*1]
140abd4ad: mov    ecx,r15d
140abd4b0: mov    eax,0x1
140abd4b5: shl    eax,cl
140abd4b7: test   al,dl
140abd4b9: je     0x140abd4d2
140abd4bb: sub    di,0x1
140abd4bf: js     0x140abd4d6
140abd4c1: mov    rax,QWORD PTR [r14+0x178]
140abd4c8: movzx  edx,WORD PTR [rsp+0x58]
140abd4cd: jmp    0x140abd431
140abd4d2: xor    al,al
140abd4d4: jmp    0x140abd4d8
140abd4d6: mov    al,0x1
140abd4d8: mov    rbx,QWORD PTR [rsp+0x50]
140abd4dd: mov    rbp,QWORD PTR [rsp+0x60]
140abd4e2: mov    rsi,QWORD PTR [rsp+0x68]
140abd4e7: add    rsp,0x20
140abd4eb: pop    r15
140abd4ed: pop    r14
140abd4ef: pop    r13
140abd4f1: pop    r12
140abd4f3: pop    rdi
140abd4f4: ret
