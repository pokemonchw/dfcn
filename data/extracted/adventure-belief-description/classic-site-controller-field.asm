# classic PE:6a70b91c:0270a000; site-controller-field; RVA 0x9b26a0..0x9b26fd
0x009b26a0: mov    rax,QWORD PTR [rcx+0x428]
0x009b26a7: mov    rcx,QWORD PTR [rcx+0x430]
0x009b26ae: xchg   ax,ax
0x009b26b0: cmp    rax,rcx
0x009b26b3: jae    0x1409b26fa
0x009b26b5: mov    rdx,QWORD PTR [rax]
0x009b26b8: test   BYTE PTR [rdx+0x1c],0x1
0x009b26bc: je     0x1409b26ca
0x009b26be: cmp    DWORD PTR [rdx+0x10],0x0
0x009b26c2: jne    0x1409b26ca
0x009b26c4: cmp    DWORD PTR [rdx+0x14],0xffffffff
0x009b26c8: je     0x1409b26d0
0x009b26ca: add    rax,0x8
0x009b26ce: jmp    0x1409b26b0
0x009b26d0: mov    rax,QWORD PTR [rip+0x1a19019]        # 0x1423cb6f0
0x009b26d7: sub    rax,QWORD PTR [rip+0x1a1900a]        # 0x1423cb6e8
0x009b26de: test   rax,0xfffffffffffffff8
0x009b26e4: je     0x1409b26fa
0x009b26e6: mov    ecx,DWORD PTR [rdx+0x4]
0x009b26e9: cmp    ecx,0xffffffff
0x009b26ec: je     0x1409b26fa
0x009b26ee: lea    rdx,[rip+0x1a18ff3]        # 0x1423cb6e8
0x009b26f5: jmp    0x1400ba030
0x009b26fa: xor    eax,eax
0x009b26fc: ret
