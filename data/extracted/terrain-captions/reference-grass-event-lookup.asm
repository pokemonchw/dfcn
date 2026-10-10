; reference; PE:6a70a6d9:02711000; grass-event-lookup; RVA 0x14d1330..0x14d143b
0x014d1330: mov    QWORD PTR [rsp+0x18],rbp
0x014d1335: mov    QWORD PTR [rsp+0x20],rdi
0x014d133a: push   r14
0x014d133c: sub    rsp,0x20
0x014d1340: movsx  r14,dx
0x014d1344: movsx  rbp,r8w
0x014d1348: test   r14w,r14w
0x014d134c: js     0x1414d1428
0x014d1352: cmp    r14d,DWORD PTR [rcx+0x116bec]
0x014d1359: jge    0x1414d1428
0x014d135f: test   bp,bp
0x014d1362: js     0x1414d1428
0x014d1368: cmp    ebp,DWORD PTR [rcx+0x116bf0]
0x014d136e: jge    0x1414d1428
0x014d1374: test   r9w,r9w
0x014d1378: js     0x1414d1428
0x014d137e: movsx  eax,r9w
0x014d1382: cmp    eax,DWORD PTR [rcx+0x116bf4]
0x014d1388: jge    0x1414d1428
0x014d138e: mov    r8,QWORD PTR [rcx+0x116bb8]
0x014d1395: test   r8,r8
0x014d1398: je     0x1414d1428
0x014d139e: mov    rax,r14
0x014d13a1: movsx  rcx,r9w
0x014d13a5: shr    rax,0x4
0x014d13a9: mov    rdx,rbp
0x014d13ac: shr    rdx,0x4
0x014d13b0: mov    rax,QWORD PTR [r8+rax*8]
0x014d13b4: mov    rax,QWORD PTR [rax+rdx*8]
0x014d13b8: mov    rdi,QWORD PTR [rax+rcx*8]
0x014d13bc: test   rdi,rdi
0x014d13bf: je     0x1414d1428
0x014d13c1: mov    QWORD PTR [rsp+0x30],rbx
0x014d13c6: mov    rbx,QWORD PTR [rdi+0x8]
0x014d13ca: mov    rdi,QWORD PTR [rdi+0x10]
0x014d13ce: mov    QWORD PTR [rsp+0x38],rsi
0x014d13d3: cmp    rbx,rdi
0x014d13d6: jae    0x1414d1408
0x014d13d8: mov    rsi,QWORD PTR [rbx]
0x014d13db: mov    rcx,rsi
0x014d13de: mov    rax,QWORD PTR [rsi]
0x014d13e1: call   QWORD PTR [rax]
0x014d13e3: cmp    ax,0x4
0x014d13e7: jne    0x1414d1402
0x014d13e9: mov    eax,r14d
0x014d13ec: mov    ecx,ebp
0x014d13ee: and    eax,0xf
0x014d13f1: and    ecx,0xf
0x014d13f4: shl    rax,0x4
0x014d13f8: add    rax,rsi
0x014d13fb: cmp    BYTE PTR [rcx+rax*1+0xc],0x0
0x014d1400: ja     0x1414d140a
0x014d1402: add    rbx,0x8
0x014d1406: jmp    0x1414d13d3
0x014d1408: xor    esi,esi
0x014d140a: mov    rbx,QWORD PTR [rsp+0x30]
0x014d140f: mov    rax,rsi
0x014d1412: mov    rsi,QWORD PTR [rsp+0x38]
0x014d1417: mov    rbp,QWORD PTR [rsp+0x40]
0x014d141c: mov    rdi,QWORD PTR [rsp+0x48]
0x014d1421: add    rsp,0x20
0x014d1425: pop    r14
0x014d1427: ret
0x014d1428: mov    rbp,QWORD PTR [rsp+0x40]
0x014d142d: xor    eax,eax
0x014d142f: mov    rdi,QWORD PTR [rsp+0x48]
0x014d1434: add    rsp,0x20
0x014d1438: pop    r14
0x014d143a: ret
