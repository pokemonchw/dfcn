; reference; PE:6a70a6d9:02711000; material-lookup; RVA 0x14add70..0x14ade9f
0x014add70: rex push rbx
0x014add72: sub    rsp,0x20
0x014add76: mov    rbx,rcx
0x014add79: mov    eax,0x1a3
0x014add7e: movzx  ecx,dx
0x014add81: mov    r9d,0xc7
0x014add87: sub    cx,ax
0x014add8a: cmp    cx,r9w
0x014add8e: ja     0x1414addfa
0x014add90: test   r8d,r8d
0x014add93: js     0x1414added
0x014add95: mov    r9,QWORD PTR [rbx+0x11b408]
0x014add9c: mov    rax,QWORD PTR [rbx+0x11b410]
0x014adda3: sub    rax,r9
0x014adda6: movsxd r10,r8d
0x014adda9: sar    rax,0x3
0x014addad: cmp    r10,rax
0x014addb0: jae    0x1414added
0x014addb2: test   cx,cx
0x014addb5: js     0x1414added
0x014addb7: mov    rcx,QWORD PTR [r9+r10*8]
0x014addbb: movsx  rdx,dx
0x014addbf: add    rdx,0xfffffffffffffe5d
0x014addc6: mov    r8,QWORD PTR [rcx+0x2a0]
0x014addcd: mov    rax,QWORD PTR [rcx+0x2a8]
0x014addd4: sub    rax,r8
0x014addd7: sar    rax,0x3
0x014adddb: cmp    rdx,rax
0x014addde: jae    0x1414added
0x014adde0: mov    rax,QWORD PTR [r8+rdx*8]
0x014adde4: test   rax,rax
0x014adde7: jne    0x1414ade99
0x014added: mov    rax,QWORD PTR [rbx+0x127950]
0x014addf4: add    rsp,0x20
0x014addf8: pop    rbx
0x014addf9: ret
0x014addfa: lea    eax,[rdx-0x13]
0x014addfd: cmp    ax,r9w
0x014ade01: jbe    0x1414ade81
0x014ade03: mov    ecx,0xdb
0x014ade08: movzx  eax,dx
0x014ade0b: sub    ax,cx
0x014ade0e: cmp    ax,r9w
0x014ade12: jbe    0x1414ade81
0x014ade14: test   dx,dx
0x014ade17: jne    0x1414ade5d
0x014ade19: test   r8d,r8d
0x014ade1c: js     0x1414ade50
0x014ade1e: mov    rcx,QWORD PTR [rbx+0x11b3d8]
0x014ade25: mov    rax,QWORD PTR [rbx+0x11b3e0]
0x014ade2c: sub    rax,rcx
0x014ade2f: movsxd rdx,r8d
0x014ade32: sar    rax,0x3
0x014ade36: cmp    rdx,rax
0x014ade39: jae    0x1414ade50
0x014ade3b: mov    rax,QWORD PTR [rcx+rdx*8]
0x014ade3f: test   rax,rax
0x014ade42: je     0x1414ade50
0x014ade44: add    rax,0x1a8
0x014ade4a: add    rsp,0x20
0x014ade4e: pop    rbx
0x014ade4f: ret
0x014ade50: mov    rax,QWORD PTR [rbx+0x126c38]
0x014ade57: add    rsp,0x20
0x014ade5b: pop    rbx
0x014ade5c: ret
0x014ade5d: mov    eax,0x292
0x014ade62: cmp    dx,ax
0x014ade65: ja     0x1414ade79
0x014ade67: movsx  rax,dx
0x014ade6b: mov    rax,QWORD PTR [rbx+rax*8+0x126c38]
0x014ade73: add    rsp,0x20
0x014ade77: pop    rbx
0x014ade78: ret
0x014ade79: xor    eax,eax
0x014ade7b: add    rsp,0x20
0x014ade7f: pop    rbx
0x014ade80: ret
0x014ade81: lea    rcx,[rbx+0x11b558]
0x014ade88: call   0x140701e70
0x014ade8d: test   rax,rax
0x014ade90: jne    0x1414ade99
0x014ade92: mov    rax,QWORD PTR [rbx+0x126cd0]
0x014ade99: add    rsp,0x20
0x014ade9d: pop    rbx
0x014ade9e: ret
