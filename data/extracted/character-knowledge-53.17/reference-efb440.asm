; reference PE:6aea05a1:02734000; reference-description:general_ref_interactionst; RVA 0xefb440..0xefb4c6; code ends 0xefb4c6
0x00efb440: rex push rbx
0x00efb442: sub    rsp,0x20
0x00efb446: mov    QWORD PTR [rdx+0x10],0x0
0x00efb44e: mov    rbx,rdx
0x00efb451: cmp    QWORD PTR [rdx+0x18],0xf
0x00efb456: mov    rax,rdx
0x00efb459: jbe    0x140efb45e
0x00efb45b: mov    rax,QWORD PTR [rdx]
0x00efb45e: mov    BYTE PTR [rax],0x0
0x00efb461: movsxd rax,DWORD PTR [rcx+0x8]
0x00efb465: cmp    eax,0xffffffff
0x00efb468: je     0x140efb4c0
0x00efb46a: movsxd rdx,DWORD PTR [rcx+0xc]
0x00efb46e: cmp    edx,0xffffffff
0x00efb471: je     0x140efb4c0
0x00efb473: mov    rcx,rax
0x00efb476: mov    QWORD PTR [rsp+0x30],rdi
0x00efb47b: mov    rax,QWORD PTR [rip+0x161e4c6]        # 0x142519948
0x00efb482: mov    rax,QWORD PTR [rax+rcx*8]
0x00efb486: mov    rax,QWORD PTR [rax+0x50]
0x00efb48a: mov    rdi,QWORD PTR [rax+rdx*8]
0x00efb48e: mov    rcx,rdi
0x00efb491: mov    rax,QWORD PTR [rdi]
0x00efb494: call   QWORD PTR [rax]
0x00efb496: cmp    ax,0x1
0x00efb49a: jne    0x140efb4bb
0x00efb49c: lea    rdx,[rdi+0x10]
0x00efb4a0: cmp    rbx,rdx
0x00efb4a3: je     0x140efb4bb
0x00efb4a5: cmp    QWORD PTR [rdx+0x18],0xf
0x00efb4aa: mov    r8,QWORD PTR [rdx+0x10]
0x00efb4ae: jbe    0x140efb4b3
0x00efb4b0: mov    rdx,QWORD PTR [rdx]
0x00efb4b3: mov    rcx,rbx
0x00efb4b6: call   0x140070f00
0x00efb4bb: mov    rdi,QWORD PTR [rsp+0x30]
0x00efb4c0: add    rsp,0x20
0x00efb4c4: pop    rbx
0x00efb4c5: ret
