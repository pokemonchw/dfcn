; reference PE:6aea05a1:02734000; reference-description:general_ref_languagest; RVA 0xef8190..0xef8252; code ends 0xef8252
0x00ef8190: mov    QWORD PTR [rsp+0x18],rbx
0x00ef8195: push   rdi
0x00ef8196: sub    rsp,0x50
0x00ef819a: mov    rax,QWORD PTR [rip+0x9c5e9f]        # 0x1418be040
0x00ef81a1: xor    rax,rsp
0x00ef81a4: mov    QWORD PTR [rsp+0x40],rax
0x00ef81a9: mov    rdi,rdx
0x00ef81ac: mov    rbx,rcx
0x00ef81af: cmp    DWORD PTR [rcx+0x8],0xffffffff
0x00ef81b3: je     0x140ef823a
0x00ef81b9: mov    r8d,0x4
0x00ef81bf: lea    rdx,[rip+0x70bf3e]        # 0x141604104 ; literal="the "
0x00ef81c6: mov    rcx,rdi
0x00ef81c9: call   0x140070f00
0x00ef81ce: movsxd rax,DWORD PTR [rbx+0x8]
0x00ef81d2: mov    rdx,QWORD PTR [rip+0x1617a47]        # 0x14250fc20
0x00ef81d9: mov    rdx,QWORD PTR [rdx+rax*8]
0x00ef81dd: lea    rcx,[rsp+0x20]
0x00ef81e2: call   0x140070c00
0x00ef81e7: nop
0x00ef81e8: lea    rcx,[rsp+0x20]
0x00ef81ed: call   0x140546560
0x00ef81f2: lea    rcx,[rsp+0x20]
0x00ef81f7: call   0x1405468a0
0x00ef81fc: lea    rdx,[rsp+0x20]
0x00ef8201: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef8207: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef820d: mov    r8,QWORD PTR [rsp+0x30]
0x00ef8212: mov    rcx,rdi
0x00ef8215: call   0x140071040
0x00ef821a: mov    r8d,0x9
0x00ef8220: lea    rdx,[rip+0x860c59]        # 0x141758e80 ; literal=" language"
0x00ef8227: mov    rcx,rdi
0x00ef822a: call   0x140071040
0x00ef822f: nop
0x00ef8230: lea    rcx,[rsp+0x20]
0x00ef8235: call   0x140070e80
0x00ef823a: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef823f: xor    rcx,rsp
0x00ef8242: call   0x1415530b0
0x00ef8247: mov    rbx,QWORD PTR [rsp+0x70]
0x00ef824c: add    rsp,0x50
0x00ef8250: pop    rdi
0x00ef8251: ret
