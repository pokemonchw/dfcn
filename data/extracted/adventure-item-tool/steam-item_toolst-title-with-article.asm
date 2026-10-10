# steam PE:6a70a6d9:02711000; item_toolst-title-with-article;item_weaponst-title-with-article;item_instrumentst-title-with-article; RVA 0xc653e0..0xc65445
0x00c653e0: rex push rbx
0x00c653e2: sub    rsp,0x20
0x00c653e6: mov    rbx,rdx
0x00c653e9: cmp    r8d,0x1
0x00c653ed: jne    0x140c65409
0x00c653ef: mov    r8d,0x4
0x00c653f5: lea    rdx,[rip+0x983a4c]        # 0x1415e8e48 ; literal="the "
0x00c653fc: mov    rcx,rbx
0x00c653ff: add    rsp,0x20
0x00c65403: pop    rbx
0x00c65404: jmp    0x14006fa10
0x00c65409: test   r8d,r8d
0x00c6540c: jne    0x140c6543f
0x00c6540e: test   DWORD PTR [rcx+0x10],0x40000
0x00c65415: jne    0x140c6543f
0x00c65417: mov    rax,QWORD PTR [rcx]
0x00c6541a: call   QWORD PTR [rax+0x478]
0x00c65420: cmp    eax,0x1
0x00c65423: jne    0x140c6543f
0x00c65425: mov    r8d,0x2
0x00c6542b: lea    rdx,[rip+0x9881ee]        # 0x1415ed620 ; literal="a "
0x00c65432: mov    rcx,rbx
0x00c65435: add    rsp,0x20
0x00c65439: pop    rbx
0x00c6543a: jmp    0x14006fa10
0x00c6543f: add    rsp,0x20
0x00c65443: pop    rbx
0x00c65444: ret
