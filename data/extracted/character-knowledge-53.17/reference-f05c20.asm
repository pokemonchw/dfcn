; reference PE:6aea05a1:02734000; reference-description:general_ref_historical_eventst; RVA 0xf05c20..0xf05c91; code ends 0xf05c91
0x00f05c20: rex push rbx
0x00f05c22: sub    rsp,0x100
0x00f05c29: mov    QWORD PTR [rdx+0x10],0x0
0x00f05c31: mov    rbx,rdx
0x00f05c34: cmp    QWORD PTR [rdx+0x18],0xf
0x00f05c39: mov    r9,rcx
0x00f05c3c: mov    rax,rdx
0x00f05c3f: jbe    0x140f05c44
0x00f05c41: mov    rax,QWORD PTR [rdx]
0x00f05c44: lea    rcx,[rsp+0x30]
0x00f05c49: mov    BYTE PTR [rax],0x0
0x00f05c4c: call   0x1400736b0
0x00f05c51: mov    edx,DWORD PTR [r9+0x8]
0x00f05c55: lea    rcx,[rip+0x16164dc]        # 0x14251c138
0x00f05c5c: mov    DWORD PTR [rsp+0x30],r8d
0x00f05c61: call   0x14007f060
0x00f05c66: test   rax,rax
0x00f05c69: je     0x140f05c88
0x00f05c6b: mov    r10,QWORD PTR [rax]
0x00f05c6e: lea    r8,[rsp+0x30]
0x00f05c73: mov    r9b,0x1
0x00f05c76: mov    BYTE PTR [rsp+0x20],0x0
0x00f05c7b: mov    rdx,rbx
0x00f05c7e: mov    rcx,rax
0x00f05c81: call   QWORD PTR [r10+0xd8]
0x00f05c88: add    rsp,0x100
0x00f05c8f: pop    rbx
0x00f05c90: ret
