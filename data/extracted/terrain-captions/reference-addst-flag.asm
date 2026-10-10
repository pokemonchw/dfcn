; reference; PE:6a70a6d9:02711000; addst-flag; RVA 0xad9870..0xad995b
0x00ad9870: mov    QWORD PTR [rsp+0x18],rbx
0x00ad9875: push   rbp
0x00ad9876: push   rsi
0x00ad9877: push   rdi
0x00ad9878: sub    rsp,0x50
0x00ad987c: mov    rax,QWORD PTR [rip+0xdc27bd]        # 0x14189c040
0x00ad9883: xor    rax,rsp
0x00ad9886: mov    QWORD PTR [rsp+0x40],rax
0x00ad988b: movsxd rbx,r9d
0x00ad988e: mov    rdi,rcx
0x00ad9891: cmp    QWORD PTR [rdx+0x10],0x0
0x00ad9896: je     0x140ad993e
0x00ad989c: lea    rcx,[rsp+0x20]
0x00ad98a1: call   0x14006f5d0
0x00ad98a6: nop
0x00ad98a7: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad98ac: test   ebx,ebx
0x00ad98ae: je     0x140ad98c6
0x00ad98b0: cmp    rcx,rbx
0x00ad98b3: jbe    0x140ad98c6
0x00ad98b5: mov    edx,ebx
0x00ad98b7: lea    rcx,[rsp+0x20]
0x00ad98bc: call   0x14052d910
0x00ad98c1: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad98c6: xor    ebp,ebp
0x00ad98c8: mov    ebx,ebp
0x00ad98ca: test   rcx,rcx
0x00ad98cd: je     0x140ad9934
0x00ad98cf: mov    esi,DWORD PTR [rsp+0x90]
0x00ad98d6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ad98e0: mov    eax,DWORD PTR [rdi+0x84]
0x00ad98e6: cmp    eax,DWORD PTR [rip+0x18f3e98]        # 0x1423cd784
0x00ad98ec: jge    0x140ad9934
0x00ad98ee: test   eax,eax
0x00ad98f0: jns    0x140ad9902
0x00ad98f2: sub    ebx,eax
0x00ad98f4: mov    DWORD PTR [rdi+0x84],ebp
0x00ad98fa: movsxd rax,ebx
0x00ad98fd: cmp    rax,rcx
0x00ad9900: jae    0x140ad9934
0x00ad9902: lea    rax,[rsp+0x20]
0x00ad9907: cmp    QWORD PTR [rsp+0x38],0xf
0x00ad990d: cmova  rax,QWORD PTR [rsp+0x20]
0x00ad9913: movsxd rdx,ebx
0x00ad9916: mov    r9d,esi
0x00ad9919: movzx  edx,BYTE PTR [rdx+rax*1]
0x00ad991d: mov    rcx,rdi
0x00ad9920: call   0x140ad8b80
0x00ad9925: inc    ebx
0x00ad9927: movsxd rax,ebx
0x00ad992a: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad992f: cmp    rax,rcx
0x00ad9932: jb     0x140ad98e0
0x00ad9934: lea    rcx,[rsp+0x20]
0x00ad9939: call   0x14006f850
0x00ad993e: mov    rcx,QWORD PTR [rsp+0x40]
0x00ad9943: xor    rcx,rsp
0x00ad9946: call   0x141539660
0x00ad994b: mov    rbx,QWORD PTR [rsp+0x80]
0x00ad9953: add    rsp,0x50
0x00ad9957: pop    rdi
0x00ad9958: pop    rsi
0x00ad9959: pop    rbp
0x00ad995a: ret
