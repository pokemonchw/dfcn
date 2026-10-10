; classic; PE:6a70b91c:0270a000; look vector 0x2695b10; owner 0x15dcf50..0x15dcfb6
0x015dcf50: sub    rsp,0x28
0x015dcf54: mov    rcx,QWORD PTR [rip+0x10b8bb5]        # 0x142695b10
0x015dcf5b: test   rcx,rcx
0x015dcf5e: je     0x1415dcfaa
0x015dcf60: mov    rdx,QWORD PTR [rip+0x10b8bb9]        # 0x142695b20
0x015dcf67: sub    rdx,rcx
0x015dcf6a: and    rdx,0xfffffffffffffff8
0x015dcf6e: cmp    rdx,0x1000
0x015dcf75: jb     0x1415dcf8f
0x015dcf77: mov    r8,QWORD PTR [rcx-0x8]
0x015dcf7b: add    rdx,0x27
0x015dcf7f: sub    rcx,r8
0x015dcf82: lea    rax,[rcx-0x8]
0x015dcf86: cmp    rax,0x1f
0x015dcf8a: ja     0x1415dcfaf
0x015dcf8c: mov    rcx,r8
0x015dcf8f: call   0x1415345f0
0x015dcf94: xorps  xmm0,xmm0
0x015dcf97: mov    QWORD PTR [rip+0x10b8b6e],0x0        # 0x142695b10
0x015dcfa2: movdqu XMMWORD PTR [rip+0x10b8b6e],xmm0        # 0x142695b18
0x015dcfaa: add    rsp,0x28
0x015dcfae: ret
0x015dcfaf: call   QWORD PTR [rip+0x3aeb]        # 0x1415e0aa0
0x015dcfb5: int3
