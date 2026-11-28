; classic PE:6aea11a5:0272d000; reference-description:general_ref_interactionst; RVA 0xef6190..0xef6216; code ends 0xef6216
0x00ef6190: rex push rbx
0x00ef6192: sub    rsp,0x20
0x00ef6196: mov    QWORD PTR [rdx+0x10],0x0
0x00ef619e: mov    rbx,rdx
0x00ef61a1: cmp    QWORD PTR [rdx+0x18],0xf
0x00ef61a6: mov    rax,rdx
0x00ef61a9: jbe    0x140ef61ae
0x00ef61ab: mov    rax,QWORD PTR [rdx]
0x00ef61ae: mov    BYTE PTR [rax],0x0
0x00ef61b1: movsxd rax,DWORD PTR [rcx+0x8]
0x00ef61b5: cmp    eax,0xffffffff
0x00ef61b8: je     0x140ef6210
0x00ef61ba: movsxd rdx,DWORD PTR [rcx+0xc]
0x00ef61be: cmp    edx,0xffffffff
0x00ef61c1: je     0x140ef6210
0x00ef61c3: mov    rcx,rax
0x00ef61c6: mov    QWORD PTR [rsp+0x30],rdi
0x00ef61cb: mov    rax,QWORD PTR [rip+0x161d676]        # 0x142513848
0x00ef61d2: mov    rax,QWORD PTR [rax+rcx*8]
0x00ef61d6: mov    rax,QWORD PTR [rax+0x50]
0x00ef61da: mov    rdi,QWORD PTR [rax+rdx*8]
0x00ef61de: mov    rcx,rdi
0x00ef61e1: mov    rax,QWORD PTR [rdi]
0x00ef61e4: call   QWORD PTR [rax]
0x00ef61e6: cmp    ax,0x1
0x00ef61ea: jne    0x140ef620b
0x00ef61ec: lea    rdx,[rdi+0x10]
0x00ef61f0: cmp    rbx,rdx
0x00ef61f3: je     0x140ef620b
0x00ef61f5: cmp    QWORD PTR [rdx+0x18],0xf
0x00ef61fa: mov    r8,QWORD PTR [rdx+0x10]
0x00ef61fe: jbe    0x140ef6203
0x00ef6200: mov    rdx,QWORD PTR [rdx]
0x00ef6203: mov    rcx,rbx
0x00ef6206: call   0x140070e90
0x00ef620b: mov    rdi,QWORD PTR [rsp+0x30]
0x00ef6210: add    rsp,0x20
0x00ef6214: pop    rbx
0x00ef6215: ret
