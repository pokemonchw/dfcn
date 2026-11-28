; classic PE:6aea11a5:0272d000; reference-description:general_ref_historical_eventst; RVA 0xf00970..0xf009e1; code ends 0xf009e1
0x00f00970: rex push rbx
0x00f00972: sub    rsp,0x100
0x00f00979: mov    QWORD PTR [rdx+0x10],0x0
0x00f00981: mov    rbx,rdx
0x00f00984: cmp    QWORD PTR [rdx+0x18],0xf
0x00f00989: mov    r9,rcx
0x00f0098c: mov    rax,rdx
0x00f0098f: jbe    0x140f00994
0x00f00991: mov    rax,QWORD PTR [rdx]
0x00f00994: lea    rcx,[rsp+0x30]
0x00f00999: mov    BYTE PTR [rax],0x0
0x00f0099c: call   0x140073640
0x00f009a1: mov    edx,DWORD PTR [r9+0x8]
0x00f009a5: lea    rcx,[rip+0x161568c]        # 0x142516038
0x00f009ac: mov    DWORD PTR [rsp+0x30],r8d
0x00f009b1: call   0x14007eff0
0x00f009b6: test   rax,rax
0x00f009b9: je     0x140f009d8
0x00f009bb: mov    r10,QWORD PTR [rax]
0x00f009be: lea    r8,[rsp+0x30]
0x00f009c3: mov    r9b,0x1
0x00f009c6: mov    BYTE PTR [rsp+0x20],0x0
0x00f009cb: mov    rdx,rbx
0x00f009ce: mov    rcx,rax
0x00f009d1: call   QWORD PTR [r10+0xd8]
0x00f009d8: add    rsp,0x100
0x00f009df: pop    rbx
0x00f009e0: ret
