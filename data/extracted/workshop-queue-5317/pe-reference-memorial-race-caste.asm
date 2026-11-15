; reference; PE:6aea05a1:02734000; 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16; memorial-race-caste; complete unwind owner
0xabd670: mov    QWORD PTR [rsp+0x10],rsi
0xabd675: push   rdi
0xabd676: sub    rsp,0x20
0xabd67a: mov    QWORD PTR [rdx+0x10],0x0
0xabd682: mov    rdi,rdx
0xabd685: cmp    QWORD PTR [rdx+0x18],0xf
0xabd68a: mov    rax,rdx
0xabd68d: movsx  rsi,cx
0xabd691: jbe    0x140abd696
0xabd693: mov    rax,QWORD PTR [rdx]
0xabd696: mov    BYTE PTR [rax],0x0
0xabd699: mov    rcx,QWORD PTR [rip+0x1a51848]        # 0x14250eee8
0xabd6a0: mov    QWORD PTR [rsp+0x30],rbx
0xabd6a5: cmp    r9w,0xffff
0xabd6aa: je     0x140abd809
0xabd6b0: test   r8b,r8b
0xabd6b3: je     0x140abd74a
0xabd6b9: test   si,si
0xabd6bc: js     0x140abd742
0xabd6c2: mov    rax,QWORD PTR [rip+0x1a51827]        # 0x14250eef0
0xabd6c9: mov    rbx,rsi
0xabd6cc: sub    rax,rcx
0xabd6cf: sar    rax,0x3
0xabd6d3: cmp    rsi,rax
0xabd6d6: jae    0x140abd742
0xabd6d8: test   r9w,r9w
0xabd6dc: js     0x140abd811
0xabd6e2: mov    rax,QWORD PTR [rcx+rsi*8]
0xabd6e6: movsx  r8,r9w
0xabd6ea: mov    rdx,QWORD PTR [rax+0x178]
0xabd6f1: mov    rax,QWORD PTR [rax+0x180]
0xabd6f8: sub    rax,rdx
0xabd6fb: sar    rax,0x3
0xabd6ff: cmp    r8,rax
0xabd702: jae    0x140abd811
0xabd708: mov    rdx,QWORD PTR [rdx+r8*8]
0xabd70c: add    rdx,0x40
0xabd710: cmp    rdi,rdx
0xabd713: je     0x140abd732
0xabd715: cmp    QWORD PTR [rdx+0x18],0xf
0xabd71a: mov    r8,QWORD PTR [rdx+0x10]
0xabd71e: jbe    0x140abd723
0xabd720: mov    rdx,QWORD PTR [rdx]
0xabd723: mov    rcx,rdi
0xabd726: call   0x140070f00
0xabd72b: mov    rcx,QWORD PTR [rip+0x1a517b6]        # 0x14250eee8
0xabd732: cmp    QWORD PTR [rdi+0x10],0x0
0xabd737: ja     0x140abd7f9
0xabd73d: jmp    0x140abd811
0xabd742: mov    rbx,rsi
0xabd745: jmp    0x140abd811
0xabd74a: test   si,si
0xabd74d: js     0x140abd7bb
0xabd74f: mov    rax,QWORD PTR [rip+0x1a5179a]        # 0x14250eef0
0xabd756: sub    rax,rcx
0xabd759: sar    rax,0x3
0xabd75d: cmp    rsi,rax
0xabd760: jae    0x140abd7bb
0xabd762: test   r9w,r9w
0xabd766: js     0x140abd7bb
0xabd768: mov    rax,QWORD PTR [rcx+rsi*8]
0xabd76c: movsx  r8,r9w
0xabd770: mov    rdx,QWORD PTR [rax+0x178]
0xabd777: mov    rax,QWORD PTR [rax+0x180]
0xabd77e: sub    rax,rdx
0xabd781: sar    rax,0x3
0xabd785: cmp    r8,rax
0xabd788: jae    0x140abd7bb
0xabd78a: mov    rdx,QWORD PTR [rdx+r8*8]
0xabd78e: add    rdx,0x20
0xabd792: cmp    rdi,rdx
0xabd795: je     0x140abd7b4
0xabd797: cmp    QWORD PTR [rdx+0x18],0xf
0xabd79c: mov    r8,QWORD PTR [rdx+0x10]
0xabd7a0: jbe    0x140abd7a5
0xabd7a2: mov    rdx,QWORD PTR [rdx]
0xabd7a5: mov    rcx,rdi
0xabd7a8: call   0x140070f00
0xabd7ad: mov    rcx,QWORD PTR [rip+0x1a51734]        # 0x14250eee8
0xabd7b4: cmp    QWORD PTR [rdi+0x10],0x0
0xabd7b9: ja     0x140abd7f9
0xabd7bb: mov    rbx,rsi
0xabd7be: test   si,si
0xabd7c1: js     0x140abd7f9
0xabd7c3: mov    rax,QWORD PTR [rip+0x1a51726]        # 0x14250eef0
0xabd7ca: sub    rax,rcx
0xabd7cd: sar    rax,0x3
0xabd7d1: cmp    rbx,rax
0xabd7d4: jae    0x140abd7f9
0xabd7d6: mov    rdx,QWORD PTR [rcx+rbx*8]
0xabd7da: add    rdx,0x20
0xabd7de: cmp    rdi,rdx
0xabd7e1: je     0x140abd7f9
0xabd7e3: cmp    QWORD PTR [rdx+0x18],0xf
0xabd7e8: mov    r8,QWORD PTR [rdx+0x10]
0xabd7ec: jbe    0x140abd7f1
0xabd7ee: mov    rdx,QWORD PTR [rdx]
0xabd7f1: mov    rcx,rdi
0xabd7f4: call   0x140070f00
0xabd7f9: mov    rbx,QWORD PTR [rsp+0x30]
0xabd7fe: mov    rsi,QWORD PTR [rsp+0x38]
0xabd803: add    rsp,0x20
0xabd807: pop    rdi
0xabd808: ret
0xabd809: mov    rbx,rsi
0xabd80c: test   r8b,r8b
0xabd80f: je     0x140abd7be
0xabd811: test   si,si
0xabd814: js     0x140abd7f9
0xabd816: mov    rax,QWORD PTR [rip+0x1a516d3]        # 0x14250eef0
0xabd81d: sub    rax,rcx
0xabd820: sar    rax,0x3
0xabd824: cmp    rbx,rax
0xabd827: jae    0x140abd7f9
0xabd829: mov    rdx,QWORD PTR [rcx+rbx*8]
0xabd82d: add    rdx,0x40
0xabd831: jmp    0x140abd7de
