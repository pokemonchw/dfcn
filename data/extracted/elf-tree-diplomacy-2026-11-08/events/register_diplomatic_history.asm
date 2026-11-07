140994330: cmp    r8d,0xffffffff
140994334: je     0x1409943fd
14099433a: mov    QWORD PTR [rsp+0x18],rbx
14099433f: mov    QWORD PTR [rsp+0x20],rsi
140994344: push   r14
140994346: sub    rsp,0x20
14099434a: mov    ebx,r9d
14099434d: mov    esi,r8d
140994350: mov    r14d,edx
140994353: cmp    ebx,0xffffffff
140994356: je     0x1409943ed
14099435c: mov    rax,QWORD PTR [rip+0x1a3d49d]        # 0x1423d1800
140994363: sub    rax,QWORD PTR [rip+0x1a3d48e]        # 0x1423d17f8
14099436a: test   rax,0xfffffffffffffff8
140994370: je     0x1409943ed
140994372: mov    QWORD PTR [rsp+0x30],rbp
140994377: lea    rdx,[rip+0x1a3d47a]        # 0x1423d17f8
14099437e: mov    ecx,r8d
140994381: mov    QWORD PTR [rsp+0x38],rdi
140994386: call   0x1400ba0a0
14099438b: lea    rdx,[rip+0x1a3d466]        # 0x1423d17f8
140994392: mov    ecx,ebx
140994394: mov    rdi,rax
140994397: call   0x1400ba0a0
14099439c: mov    rbp,rax
14099439f: test   rdi,rdi
1409943a2: je     0x1409943e3
1409943a4: test   rax,rax
1409943a7: je     0x1409943e3
1409943a9: lea    rcx,[rdi+0x1028]
1409943b0: mov    edx,ebx
1409943b2: call   0x1400ff950
1409943b7: lea    rcx,[rbp+0x1028]
1409943be: mov    edx,esi
1409943c0: mov    rdi,rax
1409943c3: call   0x1400ff950
1409943c8: lea    rdx,[rdi+0x10]
1409943cc: mov    ecx,r14d
1409943cf: mov    rbx,rax
1409943d2: call   0x1400b9e70
1409943d7: lea    rdx,[rbx+0x10]
1409943db: mov    ecx,r14d
1409943de: call   0x1400b9e70
1409943e3: mov    rbp,QWORD PTR [rsp+0x30]
1409943e8: mov    rdi,QWORD PTR [rsp+0x38]
1409943ed: mov    rbx,QWORD PTR [rsp+0x40]
1409943f2: mov    rsi,QWORD PTR [rsp+0x48]
1409943f7: add    rsp,0x20
1409943fb: pop    r14
1409943fd: ret