# reference PE:6a70a6d9:02711000; site-controller-field; RVA 0x9b4e70..0x9b4ecd
0x009b4e70: mov    rax,QWORD PTR [rcx+0x428]
0x009b4e77: mov    rcx,QWORD PTR [rcx+0x430]
0x009b4e7e: xchg   ax,ax
0x009b4e80: cmp    rax,rcx
0x009b4e83: jae    0x1409b4eca
0x009b4e85: mov    rdx,QWORD PTR [rax]
0x009b4e88: test   BYTE PTR [rdx+0x1c],0x1
0x009b4e8c: je     0x1409b4e9a
0x009b4e8e: cmp    DWORD PTR [rdx+0x10],0x0
0x009b4e92: jne    0x1409b4e9a
0x009b4e94: cmp    DWORD PTR [rdx+0x14],0xffffffff
0x009b4e98: je     0x1409b4ea0
0x009b4e9a: add    rax,0x8
0x009b4e9e: jmp    0x1409b4e80
0x009b4ea0: mov    rax,QWORD PTR [rip+0x1a1c959]        # 0x1423d1800
0x009b4ea7: sub    rax,QWORD PTR [rip+0x1a1c94a]        # 0x1423d17f8
0x009b4eae: test   rax,0xfffffffffffffff8
0x009b4eb4: je     0x1409b4eca
0x009b4eb6: mov    ecx,DWORD PTR [rdx+0x4]
0x009b4eb9: cmp    ecx,0xffffffff
0x009b4ebc: je     0x1409b4eca
0x009b4ebe: lea    rdx,[rip+0x1a1c933]        # 0x1423d17f8
0x009b4ec5: jmp    0x1400ba0a0
0x009b4eca: xor    eax,eax
0x009b4ecc: ret
