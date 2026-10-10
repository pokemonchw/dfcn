# classic PE:6a70b91c:0270a000; item_toolst-title-with-article;item_weaponst-title-with-article;item_instrumentst-title-with-article; RVA 0xc62420..0xc62485
0x00c62420: rex push rbx
0x00c62422: sub    rsp,0x20
0x00c62426: mov    rbx,rdx
0x00c62429: cmp    r8d,0x1
0x00c6242d: jne    0x140c62449
0x00c6242f: mov    r8d,0x4
0x00c62435: lea    rdx,[rip+0x9819f8]        # 0x1415e3e34 ; literal="the "
0x00c6243c: mov    rcx,rbx
0x00c6243f: add    rsp,0x20
0x00c62443: pop    rbx
0x00c62444: jmp    0x14006f9a0
0x00c62449: test   r8d,r8d
0x00c6244c: jne    0x140c6247f
0x00c6244e: test   DWORD PTR [rcx+0x10],0x40000
0x00c62455: jne    0x140c6247f
0x00c62457: mov    rax,QWORD PTR [rcx]
0x00c6245a: call   QWORD PTR [rax+0x478]
0x00c62460: cmp    eax,0x1
0x00c62463: jne    0x140c6247f
0x00c62465: mov    r8d,0x2
0x00c6246b: lea    rdx,[rip+0x9861a6]        # 0x1415e8618 ; literal="a "
0x00c62472: mov    rcx,rbx
0x00c62475: add    rsp,0x20
0x00c62479: pop    rbx
0x00c6247a: jmp    0x14006f9a0
0x00c6247f: add    rsp,0x20
0x00c62483: pop    rbx
0x00c62484: ret
