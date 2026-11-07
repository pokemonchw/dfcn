1400ff950: mov    QWORD PTR [rsp+0x20],rbp
1400ff955: push   rsi
1400ff956: sub    rsp,0x20
1400ff95a: mov    ebp,edx
1400ff95c: mov    rsi,rcx
1400ff95f: mov    rdx,rcx
1400ff962: mov    ecx,ebp
1400ff964: call   0x1400b9dc0
1400ff969: test   rax,rax
1400ff96c: jne    0x1400ffa71
1400ff972: mov    QWORD PTR [rsp+0x38],rbx
1400ff977: mov    ecx,0x48
1400ff97c: mov    QWORD PTR [rsp+0x40],rdi
1400ff981: call   0x141539690
1400ff986: mov    QWORD PTR [rsp+0x30],rax
1400ff98b: mov    rdi,rax
1400ff98e: xor    eax,eax
1400ff990: mov    QWORD PTR [rsp+0x30],rdi
1400ff995: mov    QWORD PTR [rdi+0x10],rax
1400ff999: mov    QWORD PTR [rdi+0x18],rax
1400ff99d: mov    QWORD PTR [rdi+0x20],rax
1400ff9a1: mov    QWORD PTR [rdi+0x28],rax
1400ff9a5: mov    QWORD PTR [rdi+0x30],rax
1400ff9a9: mov    QWORD PTR [rdi+0x38],rax
1400ff9ad: mov    WORD PTR [rdi+0x4],ax
1400ff9b1: mov    DWORD PTR [rdi+0x8],0xffffffff
1400ff9b8: mov    QWORD PTR [rdi+0x40],rax
1400ff9bc: mov    DWORD PTR [rdi],ebp
1400ff9be: mov    r9,QWORD PTR [rsi+0x8]
1400ff9c2: mov    rbx,QWORD PTR [rsi]
1400ff9c5: mov    rdx,r9
1400ff9c8: sub    rdx,rbx
1400ff9cb: sar    rdx,0x3
1400ff9cf: test   rdx,rdx
1400ff9d2: jle    0x1400ffa0d
1400ff9d4: nop    DWORD PTR [rax+0x0]
1400ff9d8: nop    DWORD PTR [rax+rax*1+0x0]
1400ff9e0: mov    rax,rdx
1400ff9e3: shr    rax,1
1400ff9e6: mov    rcx,QWORD PTR [rbx+rax*8]
1400ff9ea: lea    r8,[rbx+rax*8]
1400ff9ee: cmp    DWORD PTR [rcx],ebp
1400ff9f0: jge    0x1400ffa05
1400ff9f2: mov    rcx,0xffffffffffffffff
1400ff9f9: lea    rbx,[r8+0x8]
1400ff9fd: sub    rcx,rax
1400ffa00: add    rdx,rcx
1400ffa03: jmp    0x1400ffa08
1400ffa05: mov    rdx,rax
1400ffa08: test   rdx,rdx
1400ffa0b: jg     0x1400ff9e0
1400ffa0d: cmp    rbx,r9
1400ffa10: je     0x1400ffa19
1400ffa12: mov    rdx,QWORD PTR [rbx]
1400ffa15: cmp    DWORD PTR [rdx],ebp
1400ffa17: je     0x1400ffa64
1400ffa19: cmp    r9,QWORD PTR [rsi+0x10]
1400ffa1d: je     0x1400ffa54
1400ffa1f: cmp    rbx,r9
1400ffa22: jne    0x1400ffa2e
1400ffa24: mov    QWORD PTR [r9],rdi
1400ffa27: add    QWORD PTR [rsi+0x8],0x8
1400ffa2c: jmp    0x1400ffa64
1400ffa2e: mov    rax,QWORD PTR [r9-0x8]
1400ffa32: lea    r8,[r9-0x8]
1400ffa36: mov    QWORD PTR [r9],rax
1400ffa39: sub    r8,rbx
1400ffa3c: add    QWORD PTR [rsi+0x8],0x8
1400ffa41: sub    r9,r8
1400ffa44: mov    rcx,r9
1400ffa47: mov    rdx,rbx
1400ffa4a: call   0x14153ae1a
1400ffa4f: mov    QWORD PTR [rbx],rdi
1400ffa52: jmp    0x1400ffa64
1400ffa54: lea    r8,[rsp+0x30]
1400ffa59: mov    rdx,rbx
1400ffa5c: mov    rcx,rsi
1400ffa5f: call   0x1400bad30
1400ffa64: mov    rbx,QWORD PTR [rsp+0x38]
1400ffa69: mov    rax,rdi
1400ffa6c: mov    rdi,QWORD PTR [rsp+0x40]
1400ffa71: mov    rbp,QWORD PTR [rsp+0x48]
1400ffa76: add    rsp,0x20
1400ffa7a: pop    rsi
1400ffa7b: ret