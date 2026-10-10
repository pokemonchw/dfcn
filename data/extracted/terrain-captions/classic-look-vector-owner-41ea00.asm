; classic; PE:6a70b91c:0270a000; look vector 0x2695b10; owner 0x41ea00..0x41eb74
0x0041ea00: rex push rsi
0x0041ea02: push   rdi
0x0041ea03: push   r15
0x0041ea05: sub    rsp,0x20
0x0041ea09: mov    rax,QWORD PTR [rip+0x2277108]        # 0x142695b18
0x0041ea10: mov    rsi,rdx
0x0041ea13: mov    rdx,QWORD PTR [rip+0x22770f6]        # 0x142695b10
0x0041ea1a: mov    rdi,rsi
0x0041ea1d: sub    rdi,rdx
0x0041ea20: sub    rax,rdx
0x0041ea23: mov    r15,r8
0x0041ea26: sar    rdi,0x3
0x0041ea2a: sar    rax,0x3
0x0041ea2e: movabs r8,0x1fffffffffffffff
0x0041ea38: cmp    rax,r8
0x0041ea3b: je     0x14041eb68
0x0041ea41: mov    rcx,QWORD PTR [rip+0x22770d8]        # 0x142695b20
0x0041ea48: sub    rcx,rdx
0x0041ea4b: mov    QWORD PTR [rsp+0x48],rbp
0x0041ea50: sar    rcx,0x3
0x0041ea54: lea    rbp,[rax+0x1]
0x0041ea58: mov    rdx,rcx
0x0041ea5b: mov    rax,r8
0x0041ea5e: shr    rdx,1
0x0041ea61: sub    rax,rdx
0x0041ea64: cmp    rcx,rax
0x0041ea67: jbe    0x14041eaaf
0x0041ea69: mov    rcx,r8
0x0041ea6c: mov    QWORD PTR [rsp+0x40],rbx
0x0041ea71: mov    QWORD PTR [rsp+0x50],r14
0x0041ea76: lea    r14,[rcx*8+0x0]
0x0041ea7e: mov    rcx,r14
0x0041ea81: call   0x140070760
0x0041ea86: mov    rcx,QWORD PTR [r15]
0x0041ea89: mov    rbx,rax
0x0041ea8c: mov    QWORD PTR [rax+rdi*8],rcx
0x0041ea90: mov    rcx,rax
0x0041ea93: mov    r8,QWORD PTR [rip+0x227707e]        # 0x142695b18
0x0041ea9a: mov    rdx,QWORD PTR [rip+0x227706f]        # 0x142695b10
0x0041eaa1: lea    rdi,[rax+rdi*8]
0x0041eaa5: cmp    rsi,r8
0x0041eaa8: jne    0x14041eac8
0x0041eaaa: sub    r8,rdx
0x0041eaad: jmp    0x14041eae4
0x0041eaaf: lea    rax,[rdx+rcx*1]
0x0041eab3: mov    rcx,rbp
0x0041eab6: cmp    rax,rbp
0x0041eab9: cmovae rcx,rax
0x0041eabd: cmp    rcx,r8
0x0041eac0: ja     0x14041eb6e
0x0041eac6: jmp    0x14041ea6c
0x0041eac8: mov    r8,rsi
0x0041eacb: sub    r8,rdx
0x0041eace: call   0x141535d8a
0x0041ead3: mov    r8,QWORD PTR [rip+0x227703e]        # 0x142695b18
0x0041eada: lea    rcx,[rdi+0x8]
0x0041eade: sub    r8,rsi
0x0041eae1: mov    rdx,rsi
0x0041eae4: call   0x141535d8a
0x0041eae9: mov    rcx,QWORD PTR [rip+0x2277020]        # 0x142695b10
0x0041eaf0: test   rcx,rcx
0x0041eaf3: je     0x14041eb29
0x0041eaf5: mov    rdx,QWORD PTR [rip+0x2277024]        # 0x142695b20
0x0041eafc: sub    rdx,rcx
0x0041eaff: and    rdx,0xfffffffffffffff8
0x0041eb03: cmp    rdx,0x1000
0x0041eb0a: jb     0x14041eb24
0x0041eb0c: mov    r8,QWORD PTR [rcx-0x8]
0x0041eb10: add    rdx,0x27
0x0041eb14: sub    rcx,r8
0x0041eb17: lea    rax,[rcx-0x8]
0x0041eb1b: cmp    rax,0x1f
0x0041eb1f: ja     0x14041eb61
0x0041eb21: mov    rcx,r8
0x0041eb24: call   0x1415345f0
0x0041eb29: lea    rcx,[rbx+rbp*8]
0x0041eb2d: mov    QWORD PTR [rip+0x2276fdc],rbx        # 0x142695b10
0x0041eb34: mov    rbp,QWORD PTR [rsp+0x48]
0x0041eb39: mov    rax,rdi
0x0041eb3c: mov    QWORD PTR [rip+0x2276fd5],rcx        # 0x142695b18
0x0041eb43: lea    rcx,[r14+rbx*1]
0x0041eb47: mov    rbx,QWORD PTR [rsp+0x40]
0x0041eb4c: mov    r14,QWORD PTR [rsp+0x50]
0x0041eb51: mov    QWORD PTR [rip+0x2276fc8],rcx        # 0x142695b20
0x0041eb58: add    rsp,0x20
0x0041eb5c: pop    r15
0x0041eb5e: pop    rdi
0x0041eb5f: pop    rsi
0x0041eb60: ret
0x0041eb61: call   QWORD PTR [rip+0x11c1f39]        # 0x1415e0aa0
0x0041eb67: int3
0x0041eb68: call   0x140070890
0x0041eb6d: int3
0x0041eb6e: call   0x140065750
0x0041eb73: int3
