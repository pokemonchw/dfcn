# classic PE:6a70b91c:0270a000; C:\Users\WIN11\Downloads\df_53_16_win\Dwarf Fortress.exe; RVA 0x72500..0x72598
0x00072500: mov    QWORD PTR [rsp+0x8],rbx
0x00072505: mov    QWORD PTR [rsp+0x10],rdi
0x0007250a: mov    r11,QWORD PTR [rcx]
0x0007250d: xor    edi,edi
0x0007250f: mov    r10,QWORD PTR [rcx+0x8]
0x00072513: mov    ebx,edx
0x00072515: sub    r10,r11
0x00072518: sar    r10,0x3
0x0007251c: test   r10d,r10d
0x0007251f: je     0x140072578
0x00072521: mov    eax,edi
0x00072523: cmp    r10d,0x40
0x00072527: jle    0x140072553
0x00072529: nop    DWORD PTR [rax+0x0]
0x00072530: mov    r9d,r10d
0x00072533: shr    r9d,1
0x00072536: lea    r8d,[r9+rax*1]
0x0007253a: movsxd rcx,r8d
0x0007253d: mov    rdx,QWORD PTR [r11+rcx*8]
0x00072541: cmp    ebx,DWORD PTR [rdx]
0x00072543: cmovl  r8d,eax
0x00072547: sub    r10d,r9d
0x0007254a: mov    eax,r8d
0x0007254d: cmp    r10d,0x40
0x00072551: jg     0x140072530
0x00072553: lea    ecx,[rax+r10*1]
0x00072557: cmp    ecx,0xffffffff
0x0007255a: je     0x140072578
0x0007255c: cmp    eax,ecx
0x0007255e: jge    0x140072578
0x00072560: movsxd rdx,eax
0x00072563: movsxd r8,ecx
0x00072566: mov    rcx,QWORD PTR [r11+rdx*8]
0x0007256a: cmp    ebx,DWORD PTR [rcx]
0x0007256c: je     0x140072586
0x0007256e: inc    eax
0x00072570: inc    rdx
0x00072573: cmp    rdx,r8
0x00072576: jl     0x140072566
0x00072578: mov    rax,rdi
0x0007257b: mov    rbx,QWORD PTR [rsp+0x8]
0x00072580: mov    rdi,QWORD PTR [rsp+0x10]
0x00072585: ret
0x00072586: mov    rbx,QWORD PTR [rsp+0x8]
0x0007258b: mov    rdi,QWORD PTR [rsp+0x10]
0x00072590: movsxd rcx,eax
0x00072593: mov    rax,QWORD PTR [r11+rcx*8]
0x00072597: ret
