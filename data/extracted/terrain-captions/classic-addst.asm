; classic; PE:6a70b91c:0270a000; addst; RVA 0xad69a0..0xad6a73
0x00ad69a0: rex push rbx
0x00ad69a2: push   rsi
0x00ad69a3: push   rdi
0x00ad69a4: sub    rsp,0x50
0x00ad69a8: mov    rax,QWORD PTR [rip+0xdbf691]        # 0x141896040
0x00ad69af: xor    rax,rsp
0x00ad69b2: mov    QWORD PTR [rsp+0x40],rax
0x00ad69b7: movsxd rbx,r9d
0x00ad69ba: mov    rdi,rcx
0x00ad69bd: cmp    QWORD PTR [rdx+0x10],0x0
0x00ad69c2: je     0x140ad6a5e
0x00ad69c8: lea    rcx,[rsp+0x20]
0x00ad69cd: call   0x14006f560
0x00ad69d2: nop
0x00ad69d3: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad69d8: test   ebx,ebx
0x00ad69da: je     0x140ad69f2
0x00ad69dc: cmp    rcx,rbx
0x00ad69df: jbe    0x140ad69f2
0x00ad69e1: mov    edx,ebx
0x00ad69e3: lea    rcx,[rsp+0x20]
0x00ad69e8: call   0x14052b330
0x00ad69ed: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad69f2: xor    esi,esi
0x00ad69f4: mov    ebx,esi
0x00ad69f6: test   rcx,rcx
0x00ad69f9: je     0x140ad6a54
0x00ad69fb: nop    DWORD PTR [rax+rax*1+0x0]
0x00ad6a00: mov    eax,DWORD PTR [rdi+0x84]
0x00ad6a06: cmp    eax,DWORD PTR [rip+0x18f0c68]        # 0x1423c7674
0x00ad6a0c: jge    0x140ad6a54
0x00ad6a0e: test   eax,eax
0x00ad6a10: jns    0x140ad6a22
0x00ad6a12: sub    ebx,eax
0x00ad6a14: mov    DWORD PTR [rdi+0x84],esi
0x00ad6a1a: movsxd rax,ebx
0x00ad6a1d: cmp    rax,rcx
0x00ad6a20: jae    0x140ad6a54
0x00ad6a22: lea    rax,[rsp+0x20]
0x00ad6a27: cmp    QWORD PTR [rsp+0x38],0xf
0x00ad6a2d: cmova  rax,QWORD PTR [rsp+0x20]
0x00ad6a33: movsxd rdx,ebx
0x00ad6a36: mov    r8b,0x1
0x00ad6a39: movzx  edx,BYTE PTR [rdx+rax*1]
0x00ad6a3d: mov    rcx,rdi
0x00ad6a40: call   0x1400bb120
0x00ad6a45: inc    ebx
0x00ad6a47: movsxd rax,ebx
0x00ad6a4a: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad6a4f: cmp    rax,rcx
0x00ad6a52: jb     0x140ad6a00
0x00ad6a54: lea    rcx,[rsp+0x20]
0x00ad6a59: call   0x14006f7e0
0x00ad6a5e: mov    rcx,QWORD PTR [rsp+0x40]
0x00ad6a63: xor    rcx,rsp
0x00ad6a66: call   0x1415345d0
0x00ad6a6b: add    rsp,0x50
0x00ad6a6f: pop    rdi
0x00ad6a70: pop    rsi
0x00ad6a71: pop    rbx
0x00ad6a72: ret
