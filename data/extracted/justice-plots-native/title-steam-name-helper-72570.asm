# steam PE:6a70a6d9:02711000; source D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; function RVA 0x72570..0x72608
0x00072570: mov    QWORD PTR [rsp+0x8],rbx
0x00072575: mov    QWORD PTR [rsp+0x10],rdi
0x0007257a: mov    r11,QWORD PTR [rcx]
0x0007257d: xor    edi,edi
0x0007257f: mov    r10,QWORD PTR [rcx+0x8]
0x00072583: mov    ebx,edx
0x00072585: sub    r10,r11
0x00072588: sar    r10,0x3
0x0007258c: test   r10d,r10d
0x0007258f: je     0x1400725e8
0x00072591: mov    eax,edi
0x00072593: cmp    r10d,0x40
0x00072597: jle    0x1400725c3
0x00072599: nop    DWORD PTR [rax+0x0]
0x000725a0: mov    r9d,r10d
0x000725a3: shr    r9d,1
0x000725a6: lea    r8d,[r9+rax*1]
0x000725aa: movsxd rcx,r8d
0x000725ad: mov    rdx,QWORD PTR [r11+rcx*8]
0x000725b1: cmp    ebx,DWORD PTR [rdx]
0x000725b3: cmovl  r8d,eax
0x000725b7: sub    r10d,r9d
0x000725ba: mov    eax,r8d
0x000725bd: cmp    r10d,0x40
0x000725c1: jg     0x1400725a0
0x000725c3: lea    ecx,[rax+r10*1]
0x000725c7: cmp    ecx,0xffffffff
0x000725ca: je     0x1400725e8
0x000725cc: cmp    eax,ecx
0x000725ce: jge    0x1400725e8
0x000725d0: movsxd rdx,eax
0x000725d3: movsxd r8,ecx
0x000725d6: mov    rcx,QWORD PTR [r11+rdx*8]
0x000725da: cmp    ebx,DWORD PTR [rcx]
0x000725dc: je     0x1400725f6
0x000725de: inc    eax
0x000725e0: inc    rdx
0x000725e3: cmp    rdx,r8
0x000725e6: jl     0x1400725d6
0x000725e8: mov    rax,rdi
0x000725eb: mov    rbx,QWORD PTR [rsp+0x8]
0x000725f0: mov    rdi,QWORD PTR [rsp+0x10]
0x000725f5: ret
0x000725f6: mov    rbx,QWORD PTR [rsp+0x8]
0x000725fb: mov    rdi,QWORD PTR [rsp+0x10]
0x00072600: movsxd rcx,eax
0x00072603: mov    rax,QWORD PTR [r11+rcx*8]
0x00072607: ret
