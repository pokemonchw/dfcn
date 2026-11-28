; classic PE:6aea11a5:0272d000; reference-description:general_ref_subregionst; RVA 0xf05990..0xf05ae8; code ends 0xf05ae8
0x00f05990: mov    QWORD PTR [rsp+0x18],rbx
0x00f05995: mov    QWORD PTR [rsp+0x20],rsi
0x00f0599a: push   rdi
0x00f0599b: sub    rsp,0x50
0x00f0599f: mov    rax,QWORD PTR [rip+0x9b269a]        # 0x1418b8040
0x00f059a6: xor    rax,rsp
0x00f059a9: mov    QWORD PTR [rsp+0x40],rax
0x00f059ae: mov    edi,r8d
0x00f059b1: mov    rbx,rdx
0x00f059b4: mov    QWORD PTR [rdx+0x10],0x0
0x00f059bc: mov    rax,rdx
0x00f059bf: cmp    QWORD PTR [rdx+0x18],0xf
0x00f059c4: jbe    0x140f059c9
0x00f059c6: mov    rax,QWORD PTR [rdx]
0x00f059c9: mov    BYTE PTR [rax],0x0
0x00f059cc: mov    edx,DWORD PTR [rcx+0x8]
0x00f059cf: mov    rcx,QWORD PTR [rip+0x1602502]        # 0x142507ed8
0x00f059d6: call   0x1400bd640
0x00f059db: mov    rsi,rax
0x00f059de: test   rax,rax
0x00f059e1: je     0x140f05acb
0x00f059e7: and    edi,0x2
0x00f059ea: je     0x140f05a21
0x00f059ec: mov    r8d,0xa
0x00f059f2: lea    rdx,[rip+0x7f992f]        # 0x1416ff328 ; literal="[LPAGE:SR:"
0x00f059f9: mov    rcx,rbx
0x00f059fc: call   0x140070fd0
0x00f05a01: mov    rdx,rbx
0x00f05a04: mov    ecx,DWORD PTR [rsi+0x78]
0x00f05a07: call   0x140542fb0
0x00f05a0c: mov    r8d,0x1
0x00f05a12: lea    rdx,[rip+0x70e97f]        # 0x141614398 ; literal="]"
0x00f05a19: mov    rcx,rbx
0x00f05a1c: call   0x140070fd0
0x00f05a21: xorps  xmm0,xmm0
0x00f05a24: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f05a29: mov    QWORD PTR [rsp+0x30],0x0
0x00f05a32: mov    QWORD PTR [rsp+0x38],0xf
0x00f05a3b: mov    BYTE PTR [rsp+0x20],0x0
0x00f05a40: xor    r9d,r9d
0x00f05a43: mov    r8b,0x1
0x00f05a46: lea    rdx,[rsp+0x20]
0x00f05a4b: mov    rcx,rsi
0x00f05a4e: call   0x140aaafe0
0x00f05a53: lea    rdx,[rsp+0x20]
0x00f05a58: cmp    QWORD PTR [rsp+0x38],0xf
0x00f05a5e: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f05a64: mov    r8,QWORD PTR [rsp+0x30]
0x00f05a69: mov    rcx,rbx
0x00f05a6c: call   0x140070fd0
0x00f05a71: test   edi,edi
0x00f05a73: je     0x140f05a8b
0x00f05a75: mov    r8d,0x8
0x00f05a7b: lea    rdx,[rip+0x70ee36]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f05a82: mov    rcx,rbx
0x00f05a85: call   0x140070fd0
0x00f05a8a: nop
0x00f05a8b: mov    rdx,QWORD PTR [rsp+0x38]
0x00f05a90: cmp    rdx,0xf
0x00f05a94: jbe    0x140f05acb
0x00f05a96: inc    rdx
0x00f05a99: mov    rcx,QWORD PTR [rsp+0x20]
0x00f05a9e: mov    rax,rcx
0x00f05aa1: cmp    rdx,0x1000
0x00f05aa8: jb     0x140f05ac6
0x00f05aaa: add    rdx,0x27
0x00f05aae: mov    rcx,QWORD PTR [rcx-0x8]
0x00f05ab2: sub    rax,rcx
0x00f05ab5: add    rax,0xfffffffffffffff8
0x00f05ab9: cmp    rax,0x1f
0x00f05abd: jbe    0x140f05ac6
0x00f05abf: call   QWORD PTR [rip+0x6f6003]        # 0x1415fbac8
0x00f05ac5: int3
0x00f05ac6: call   0x14154de20
0x00f05acb: mov    rcx,QWORD PTR [rsp+0x40]
0x00f05ad0: xor    rcx,rsp
0x00f05ad3: call   0x14154de00
0x00f05ad8: mov    rbx,QWORD PTR [rsp+0x70]
0x00f05add: mov    rsi,QWORD PTR [rsp+0x78]
0x00f05ae2: add    rsp,0x50
0x00f05ae6: pop    rdi
0x00f05ae7: ret
