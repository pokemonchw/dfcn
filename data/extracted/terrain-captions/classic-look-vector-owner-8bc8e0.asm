; classic; PE:6a70b91c:0270a000; look vector 0x2695b10; owner 0x8bc8e0..0x8bc979
0x008bc8e0: sub    rsp,0x28
0x008bc8e4: mov    r8,QWORD PTR [rip+0x1dd922d]        # 0x142695b18
0x008bc8eb: mov    rdx,QWORD PTR [rip+0x1dd921e]        # 0x142695b10
0x008bc8f2: mov    rax,r8
0x008bc8f5: sub    rax,rdx
0x008bc8f8: mov    QWORD PTR [rsp+0x38],rsi
0x008bc8fd: sar    rax,0x3
0x008bc901: xor    esi,esi
0x008bc903: test   rax,rax
0x008bc906: je     0x1408bc963
0x008bc908: mov    QWORD PTR [rsp+0x30],rbx
0x008bc90d: mov    QWORD PTR [rsp+0x20],rdi
0x008bc912: mov    edi,esi
0x008bc914: mov    rbx,QWORD PTR [rdi+rdx*1]
0x008bc918: test   rbx,rbx
0x008bc91b: je     0x1408bc941
0x008bc91d: lea    rcx,[rbx+0x28]
0x008bc921: call   0x14006f7e0
0x008bc926: mov    edx,0x50
0x008bc92b: mov    rcx,rbx
0x008bc92e: call   0x1415345f0
0x008bc933: mov    r8,QWORD PTR [rip+0x1dd91de]        # 0x142695b18
0x008bc93a: mov    rdx,QWORD PTR [rip+0x1dd91cf]        # 0x142695b10
0x008bc941: inc    esi
0x008bc943: mov    rcx,r8
0x008bc946: sub    rcx,rdx
0x008bc949: movsxd rax,esi
0x008bc94c: sar    rcx,0x3
0x008bc950: add    rdi,0x8
0x008bc954: cmp    rax,rcx
0x008bc957: jb     0x1408bc914
0x008bc959: mov    rdi,QWORD PTR [rsp+0x20]
0x008bc95e: mov    rbx,QWORD PTR [rsp+0x30]
0x008bc963: mov    rsi,QWORD PTR [rsp+0x38]
0x008bc968: cmp    rdx,r8
0x008bc96b: je     0x1408bc974
0x008bc96d: mov    QWORD PTR [rip+0x1dd91a4],rdx        # 0x142695b18
0x008bc974: add    rsp,0x28
0x008bc978: ret
