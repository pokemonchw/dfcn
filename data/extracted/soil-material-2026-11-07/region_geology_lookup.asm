14014b930: mov    r10,QWORD PTR [rcx+0x2b0]
14014b937: mov    r9,rcx
14014b93a: test   r10,r10
14014b93d: je     0x14014b991
14014b93f: test   edx,edx
14014b941: js     0x14014b991
14014b943: cmp    edx,DWORD PTR [rcx+0xa0]
14014b949: jge    0x14014b991
14014b94b: test   r8d,r8d
14014b94e: js     0x14014b991
14014b950: cmp    r8d,DWORD PTR [rcx+0xa4]
14014b957: jge    0x14014b991
14014b959: movsxd rax,r8d
14014b95c: imul   rcx,rax,0x70
14014b960: movsxd rdx,edx
14014b963: mov    rax,QWORD PTR [r10+rdx*8]
14014b967: movsx  rdx,WORD PTR [rax+rcx*1+0x68]
14014b96d: test   dx,dx
14014b970: js     0x14014b991
14014b972: mov    rax,QWORD PTR [r9+0x268]
14014b979: mov    rcx,QWORD PTR [r9+0x270]
14014b980: sub    rcx,rax
14014b983: sar    rcx,0x3
14014b987: cmp    rdx,rcx
14014b98a: jae    0x14014b991
14014b98c: mov    rax,QWORD PTR [rax+rdx*8]
14014b990: ret
14014b991: xor    eax,eax
14014b993: ret
