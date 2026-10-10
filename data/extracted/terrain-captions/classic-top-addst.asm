; classic; PE:6a70b91c:0270a000; top-addst; RVA 0xad6a80..0xad6b3c
0x00ad6a80: mov    QWORD PTR [rsp+0x18],rbx
0x00ad6a85: mov    QWORD PTR [rsp+0x20],rsi
0x00ad6a8a: push   rdi
0x00ad6a8b: sub    rsp,0x50
0x00ad6a8f: mov    rax,QWORD PTR [rip+0xdbf5aa]        # 0x141896040
0x00ad6a96: xor    rax,rsp
0x00ad6a99: mov    QWORD PTR [rsp+0x40],rax
0x00ad6a9e: mov    rdi,rcx
0x00ad6aa1: cmp    QWORD PTR [rdx+0x10],0x0
0x00ad6aa6: je     0x140ad6b1f
0x00ad6aa8: lea    rcx,[rsp+0x20]
0x00ad6aad: call   0x14006f560
0x00ad6ab2: nop
0x00ad6ab3: xor    esi,esi
0x00ad6ab5: mov    ebx,esi
0x00ad6ab7: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad6abc: test   rcx,rcx
0x00ad6abf: je     0x140ad6b15
0x00ad6ac1: mov    eax,DWORD PTR [rdi+0x84]
0x00ad6ac7: cmp    eax,DWORD PTR [rip+0x18f0ba7]        # 0x1423c7674
0x00ad6acd: jge    0x140ad6b15
0x00ad6acf: test   eax,eax
0x00ad6ad1: jns    0x140ad6ae3
0x00ad6ad3: sub    ebx,eax
0x00ad6ad5: mov    DWORD PTR [rdi+0x84],esi
0x00ad6adb: movsxd rax,ebx
0x00ad6ade: cmp    rax,rcx
0x00ad6ae1: jae    0x140ad6b15
0x00ad6ae3: lea    rax,[rsp+0x20]
0x00ad6ae8: cmp    QWORD PTR [rsp+0x38],0xf
0x00ad6aee: cmova  rax,QWORD PTR [rsp+0x20]
0x00ad6af4: movsxd rdx,ebx
0x00ad6af7: mov    r8b,0x1
0x00ad6afa: movzx  edx,BYTE PTR [rdx+rax*1]
0x00ad6afe: mov    rcx,rdi
0x00ad6b01: call   0x1401baf90
0x00ad6b06: inc    ebx
0x00ad6b08: movsxd rax,ebx
0x00ad6b0b: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad6b10: cmp    rax,rcx
0x00ad6b13: jb     0x140ad6ac1
0x00ad6b15: lea    rcx,[rsp+0x20]
0x00ad6b1a: call   0x14006f7e0
0x00ad6b1f: mov    rcx,QWORD PTR [rsp+0x40]
0x00ad6b24: xor    rcx,rsp
0x00ad6b27: call   0x1415345d0
0x00ad6b2c: mov    rbx,QWORD PTR [rsp+0x70]
0x00ad6b31: mov    rsi,QWORD PTR [rsp+0x78]
0x00ad6b36: add    rsp,0x50
0x00ad6b3a: pop    rdi
0x00ad6b3b: ret
