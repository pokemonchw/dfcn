; reference; PE:6a70a6d9:02711000; addst; RVA 0xad9960..0xad9a33
0x00ad9960: rex push rbx
0x00ad9962: push   rsi
0x00ad9963: push   rdi
0x00ad9964: sub    rsp,0x50
0x00ad9968: mov    rax,QWORD PTR [rip+0xdc26d1]        # 0x14189c040
0x00ad996f: xor    rax,rsp
0x00ad9972: mov    QWORD PTR [rsp+0x40],rax
0x00ad9977: movsxd rbx,r9d
0x00ad997a: mov    rdi,rcx
0x00ad997d: cmp    QWORD PTR [rdx+0x10],0x0
0x00ad9982: je     0x140ad9a1e
0x00ad9988: lea    rcx,[rsp+0x20]
0x00ad998d: call   0x14006f5d0
0x00ad9992: nop
0x00ad9993: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad9998: test   ebx,ebx
0x00ad999a: je     0x140ad99b2
0x00ad999c: cmp    rcx,rbx
0x00ad999f: jbe    0x140ad99b2
0x00ad99a1: mov    edx,ebx
0x00ad99a3: lea    rcx,[rsp+0x20]
0x00ad99a8: call   0x14052d910
0x00ad99ad: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad99b2: xor    esi,esi
0x00ad99b4: mov    ebx,esi
0x00ad99b6: test   rcx,rcx
0x00ad99b9: je     0x140ad9a14
0x00ad99bb: nop    DWORD PTR [rax+rax*1+0x0]
0x00ad99c0: mov    eax,DWORD PTR [rdi+0x84]
0x00ad99c6: cmp    eax,DWORD PTR [rip+0x18f3db8]        # 0x1423cd784
0x00ad99cc: jge    0x140ad9a14
0x00ad99ce: test   eax,eax
0x00ad99d0: jns    0x140ad99e2
0x00ad99d2: sub    ebx,eax
0x00ad99d4: mov    DWORD PTR [rdi+0x84],esi
0x00ad99da: movsxd rax,ebx
0x00ad99dd: cmp    rax,rcx
0x00ad99e0: jae    0x140ad9a14
0x00ad99e2: lea    rax,[rsp+0x20]
0x00ad99e7: cmp    QWORD PTR [rsp+0x38],0xf
0x00ad99ed: cmova  rax,QWORD PTR [rsp+0x20]
0x00ad99f3: movsxd rdx,ebx
0x00ad99f6: mov    r8b,0x1
0x00ad99f9: movzx  edx,BYTE PTR [rdx+rax*1]
0x00ad99fd: mov    rcx,rdi
0x00ad9a00: call   0x1400bb190
0x00ad9a05: inc    ebx
0x00ad9a07: movsxd rax,ebx
0x00ad9a0a: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad9a0f: cmp    rax,rcx
0x00ad9a12: jb     0x140ad99c0
0x00ad9a14: lea    rcx,[rsp+0x20]
0x00ad9a19: call   0x14006f850
0x00ad9a1e: mov    rcx,QWORD PTR [rsp+0x40]
0x00ad9a23: xor    rcx,rsp
0x00ad9a26: call   0x141539660
0x00ad9a2b: add    rsp,0x50
0x00ad9a2f: pop    rdi
0x00ad9a30: pop    rsi
0x00ad9a31: pop    rbx
0x00ad9a32: ret
