; reference; PE:6a70a6d9:02711000; look vector 0x269bc20; owner 0x15e2420..0x15e2486
0x015e2420: sub    rsp,0x28
0x015e2424: mov    rcx,QWORD PTR [rip+0x10b97f5]        # 0x14269bc20
0x015e242b: test   rcx,rcx
0x015e242e: je     0x1415e247a
0x015e2430: mov    rdx,QWORD PTR [rip+0x10b97f9]        # 0x14269bc30
0x015e2437: sub    rdx,rcx
0x015e243a: and    rdx,0xfffffffffffffff8
0x015e243e: cmp    rdx,0x1000
0x015e2445: jb     0x1415e245f
0x015e2447: mov    r8,QWORD PTR [rcx-0x8]
0x015e244b: add    rdx,0x27
0x015e244f: sub    rcx,r8
0x015e2452: lea    rax,[rcx-0x8]
0x015e2456: cmp    rax,0x1f
0x015e245a: ja     0x1415e247f
0x015e245c: mov    rcx,r8
0x015e245f: call   0x141539680
0x015e2464: xorps  xmm0,xmm0
0x015e2467: mov    QWORD PTR [rip+0x10b97ae],0x0        # 0x14269bc20
0x015e2472: movdqu XMMWORD PTR [rip+0x10b97ae],xmm0        # 0x14269bc28
0x015e247a: add    rsp,0x28
0x015e247e: ret
0x015e247f: call   QWORD PTR [rip+0x36a3]        # 0x1415e5b28
0x015e2485: int3
