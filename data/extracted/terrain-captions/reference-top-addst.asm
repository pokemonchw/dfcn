; reference; PE:6a70a6d9:02711000; top-addst; RVA 0xad9a40..0xad9afc
0x00ad9a40: mov    QWORD PTR [rsp+0x18],rbx
0x00ad9a45: mov    QWORD PTR [rsp+0x20],rsi
0x00ad9a4a: push   rdi
0x00ad9a4b: sub    rsp,0x50
0x00ad9a4f: mov    rax,QWORD PTR [rip+0xdc25ea]        # 0x14189c040
0x00ad9a56: xor    rax,rsp
0x00ad9a59: mov    QWORD PTR [rsp+0x40],rax
0x00ad9a5e: mov    rdi,rcx
0x00ad9a61: cmp    QWORD PTR [rdx+0x10],0x0
0x00ad9a66: je     0x140ad9adf
0x00ad9a68: lea    rcx,[rsp+0x20]
0x00ad9a6d: call   0x14006f5d0
0x00ad9a72: nop
0x00ad9a73: xor    esi,esi
0x00ad9a75: mov    ebx,esi
0x00ad9a77: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad9a7c: test   rcx,rcx
0x00ad9a7f: je     0x140ad9ad5
0x00ad9a81: mov    eax,DWORD PTR [rdi+0x84]
0x00ad9a87: cmp    eax,DWORD PTR [rip+0x18f3cf7]        # 0x1423cd784
0x00ad9a8d: jge    0x140ad9ad5
0x00ad9a8f: test   eax,eax
0x00ad9a91: jns    0x140ad9aa3
0x00ad9a93: sub    ebx,eax
0x00ad9a95: mov    DWORD PTR [rdi+0x84],esi
0x00ad9a9b: movsxd rax,ebx
0x00ad9a9e: cmp    rax,rcx
0x00ad9aa1: jae    0x140ad9ad5
0x00ad9aa3: lea    rax,[rsp+0x20]
0x00ad9aa8: cmp    QWORD PTR [rsp+0x38],0xf
0x00ad9aae: cmova  rax,QWORD PTR [rsp+0x20]
0x00ad9ab4: movsxd rdx,ebx
0x00ad9ab7: mov    r8b,0x1
0x00ad9aba: movzx  edx,BYTE PTR [rdx+rax*1]
0x00ad9abe: mov    rcx,rdi
0x00ad9ac1: call   0x1401bb000
0x00ad9ac6: inc    ebx
0x00ad9ac8: movsxd rax,ebx
0x00ad9acb: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad9ad0: cmp    rax,rcx
0x00ad9ad3: jb     0x140ad9a81
0x00ad9ad5: lea    rcx,[rsp+0x20]
0x00ad9ada: call   0x14006f850
0x00ad9adf: mov    rcx,QWORD PTR [rsp+0x40]
0x00ad9ae4: xor    rcx,rsp
0x00ad9ae7: call   0x141539660
0x00ad9aec: mov    rbx,QWORD PTR [rsp+0x70]
0x00ad9af1: mov    rsi,QWORD PTR [rsp+0x78]
0x00ad9af6: add    rsp,0x50
0x00ad9afa: pop    rdi
0x00ad9afb: ret
