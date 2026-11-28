; classic PE:6aea11a5:0272d000; reference-description:general_ref_languagest; RVA 0xef2ee0..0xef2fa2; code ends 0xef2fa2
0x00ef2ee0: mov    QWORD PTR [rsp+0x18],rbx
0x00ef2ee5: push   rdi
0x00ef2ee6: sub    rsp,0x50
0x00ef2eea: mov    rax,QWORD PTR [rip+0x9c514f]        # 0x1418b8040
0x00ef2ef1: xor    rax,rsp
0x00ef2ef4: mov    QWORD PTR [rsp+0x40],rax
0x00ef2ef9: mov    rdi,rdx
0x00ef2efc: mov    rbx,rcx
0x00ef2eff: cmp    DWORD PTR [rcx+0x8],0xffffffff
0x00ef2f03: je     0x140ef2f8a
0x00ef2f09: mov    r8d,0x4
0x00ef2f0f: lea    rdx,[rip+0x70c162]        # 0x1415ff078 ; literal="the "
0x00ef2f16: mov    rcx,rdi
0x00ef2f19: call   0x140070e90
0x00ef2f1e: movsxd rax,DWORD PTR [rbx+0x8]
0x00ef2f22: mov    rdx,QWORD PTR [rip+0x1616bf7]        # 0x142509b20
0x00ef2f29: mov    rdx,QWORD PTR [rdx+rax*8]
0x00ef2f2d: lea    rcx,[rsp+0x20]
0x00ef2f32: call   0x140070b90
0x00ef2f37: nop
0x00ef2f38: lea    rcx,[rsp+0x20]
0x00ef2f3d: call   0x140543d60
0x00ef2f42: lea    rcx,[rsp+0x20]
0x00ef2f47: call   0x1405440a0
0x00ef2f4c: lea    rdx,[rsp+0x20]
0x00ef2f51: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef2f57: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef2f5d: mov    r8,QWORD PTR [rsp+0x30]
0x00ef2f62: mov    rcx,rdi
0x00ef2f65: call   0x140070fd0
0x00ef2f6a: mov    r8d,0x9
0x00ef2f70: lea    rdx,[rip+0x860131]        # 0x1417530a8 ; literal=" language"
0x00ef2f77: mov    rcx,rdi
0x00ef2f7a: call   0x140070fd0
0x00ef2f7f: nop
0x00ef2f80: lea    rcx,[rsp+0x20]
0x00ef2f85: call   0x140070e10
0x00ef2f8a: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef2f8f: xor    rcx,rsp
0x00ef2f92: call   0x14154de00
0x00ef2f97: mov    rbx,QWORD PTR [rsp+0x70]
0x00ef2f9c: add    rsp,0x50
0x00ef2fa0: pop    rdi
0x00ef2fa1: ret
