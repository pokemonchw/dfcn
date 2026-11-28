; reference PE:6aea05a1:02734000; reference-description:general_ref_entityst; RVA 0xf0d160..0xf0d300; code ends 0xf0d300
0x00f0d160: mov    QWORD PTR [rsp+0x18],rbx
0x00f0d165: mov    QWORD PTR [rsp+0x20],rsi
0x00f0d16a: push   rdi
0x00f0d16b: sub    rsp,0x50
0x00f0d16f: mov    rax,QWORD PTR [rip+0x9b0eca]        # 0x1418be040
0x00f0d176: xor    rax,rsp
0x00f0d179: mov    QWORD PTR [rsp+0x40],rax
0x00f0d17e: mov    esi,r8d
0x00f0d181: mov    rbx,rdx
0x00f0d184: mov    QWORD PTR [rdx+0x10],0x0
0x00f0d18c: mov    rax,rdx
0x00f0d18f: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0d194: jbe    0x140f0d199
0x00f0d196: mov    rax,QWORD PTR [rdx]
0x00f0d199: mov    BYTE PTR [rax],0x0
0x00f0d19c: mov    ecx,DWORD PTR [rcx+0x8]
0x00f0d19f: mov    rax,QWORD PTR [rip+0x14e6ada]        # 0x1423f3c80
0x00f0d1a6: sub    rax,QWORD PTR [rip+0x14e6acb]        # 0x1423f3c78
0x00f0d1ad: test   rax,0xfffffffffffffff8
0x00f0d1b3: je     0x140f0d2e3
0x00f0d1b9: cmp    ecx,0xffffffff
0x00f0d1bc: je     0x140f0d2e3
0x00f0d1c2: lea    rdx,[rip+0x14e6aaf]        # 0x1423f3c78
0x00f0d1c9: call   0x1400bb6d0
0x00f0d1ce: mov    rdi,rax
0x00f0d1d1: test   rax,rax
0x00f0d1d4: je     0x140f0d2e3
0x00f0d1da: cmp    BYTE PTR [rax+0x92],0x0
0x00f0d1e1: je     0x140f0d2ce
0x00f0d1e7: and    esi,0x2
0x00f0d1ea: je     0x140f0d221
0x00f0d1ec: mov    r8d,0xb
0x00f0d1f2: lea    rdx,[rip+0x771c27]        # 0x14167ee20 ; literal="[LPAGE:ENT:"
0x00f0d1f9: mov    rcx,rbx
0x00f0d1fc: call   0x140071040
0x00f0d201: mov    rdx,rbx
0x00f0d204: mov    ecx,DWORD PTR [rdi+0x4]
0x00f0d207: call   0x140545610
0x00f0d20c: mov    r8d,0x1
0x00f0d212: lea    rdx,[rip+0x70c1ef]        # 0x141619408 ; literal="]"
0x00f0d219: mov    rcx,rbx
0x00f0d21c: call   0x140071040
0x00f0d221: xorps  xmm0,xmm0
0x00f0d224: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f0d229: mov    QWORD PTR [rsp+0x30],0x0
0x00f0d232: mov    QWORD PTR [rsp+0x38],0xf
0x00f0d23b: mov    BYTE PTR [rsp+0x20],0x0
0x00f0d240: lea    rcx,[rdi+0x20]
0x00f0d244: xor    r9d,r9d
0x00f0d247: mov    r8b,0x1
0x00f0d24a: lea    rdx,[rsp+0x20]
0x00f0d24f: call   0x140aae180
0x00f0d254: lea    rdx,[rsp+0x20]
0x00f0d259: cmp    QWORD PTR [rsp+0x38],0xf
0x00f0d25f: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f0d265: mov    r8,QWORD PTR [rsp+0x30]
0x00f0d26a: mov    rcx,rbx
0x00f0d26d: call   0x140071040
0x00f0d272: test   esi,esi
0x00f0d274: je     0x140f0d28c
0x00f0d276: mov    r8d,0x8
0x00f0d27c: lea    rdx,[rip+0x70c695]        # 0x141619918 ; literal="[/LPAGE]"
0x00f0d283: mov    rcx,rbx
0x00f0d286: call   0x140071040
0x00f0d28b: nop
0x00f0d28c: mov    rdx,QWORD PTR [rsp+0x38]
0x00f0d291: cmp    rdx,0xf
0x00f0d295: jbe    0x140f0d2e3
0x00f0d297: inc    rdx
0x00f0d29a: mov    rcx,QWORD PTR [rsp+0x20]
0x00f0d29f: mov    rax,rcx
0x00f0d2a2: cmp    rdx,0x1000
0x00f0d2a9: jb     0x140f0d2c7
0x00f0d2ab: add    rdx,0x27
0x00f0d2af: mov    rcx,QWORD PTR [rcx-0x8]
0x00f0d2b3: sub    rax,rcx
0x00f0d2b6: add    rax,0xfffffffffffffff8
0x00f0d2ba: cmp    rax,0x1f
0x00f0d2be: jbe    0x140f0d2c7
0x00f0d2c0: call   QWORD PTR [rip+0x6f387a]        # 0x141600b40
0x00f0d2c6: int3
0x00f0d2c7: call   0x1415530d0
0x00f0d2cc: jmp    0x140f0d2e3
0x00f0d2ce: mov    r8d,0x10
0x00f0d2d4: lea    rdx,[rip+0x852c7d]        # 0x14175ff58 ; literal="an unnamed group"
0x00f0d2db: mov    rcx,rbx
0x00f0d2de: call   0x140070f00
0x00f0d2e3: mov    rcx,QWORD PTR [rsp+0x40]
0x00f0d2e8: xor    rcx,rsp
0x00f0d2eb: call   0x1415530b0
0x00f0d2f0: mov    rbx,QWORD PTR [rsp+0x70]
0x00f0d2f5: mov    rsi,QWORD PTR [rsp+0x78]
0x00f0d2fa: add    rsp,0x50
0x00f0d2fe: pop    rdi
0x00f0d2ff: ret
