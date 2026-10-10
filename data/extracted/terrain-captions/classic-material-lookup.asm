; classic; PE:6a70b91c:0270a000; material-lookup; RVA 0x14a8ce0..0x14a8e0f
0x014a8ce0: rex push rbx
0x014a8ce2: sub    rsp,0x20
0x014a8ce6: mov    rbx,rcx
0x014a8ce9: mov    eax,0x1a3
0x014a8cee: movzx  ecx,dx
0x014a8cf1: mov    r9d,0xc7
0x014a8cf7: sub    cx,ax
0x014a8cfa: cmp    cx,r9w
0x014a8cfe: ja     0x1414a8d6a
0x014a8d00: test   r8d,r8d
0x014a8d03: js     0x1414a8d5d
0x014a8d05: mov    r9,QWORD PTR [rbx+0x11b408]
0x014a8d0c: mov    rax,QWORD PTR [rbx+0x11b410]
0x014a8d13: sub    rax,r9
0x014a8d16: movsxd r10,r8d
0x014a8d19: sar    rax,0x3
0x014a8d1d: cmp    r10,rax
0x014a8d20: jae    0x1414a8d5d
0x014a8d22: test   cx,cx
0x014a8d25: js     0x1414a8d5d
0x014a8d27: mov    rcx,QWORD PTR [r9+r10*8]
0x014a8d2b: movsx  rdx,dx
0x014a8d2f: add    rdx,0xfffffffffffffe5d
0x014a8d36: mov    r8,QWORD PTR [rcx+0x2a0]
0x014a8d3d: mov    rax,QWORD PTR [rcx+0x2a8]
0x014a8d44: sub    rax,r8
0x014a8d47: sar    rax,0x3
0x014a8d4b: cmp    rdx,rax
0x014a8d4e: jae    0x1414a8d5d
0x014a8d50: mov    rax,QWORD PTR [r8+rdx*8]
0x014a8d54: test   rax,rax
0x014a8d57: jne    0x1414a8e09
0x014a8d5d: mov    rax,QWORD PTR [rbx+0x127950]
0x014a8d64: add    rsp,0x20
0x014a8d68: pop    rbx
0x014a8d69: ret
0x014a8d6a: lea    eax,[rdx-0x13]
0x014a8d6d: cmp    ax,r9w
0x014a8d71: jbe    0x1414a8df1
0x014a8d73: mov    ecx,0xdb
0x014a8d78: movzx  eax,dx
0x014a8d7b: sub    ax,cx
0x014a8d7e: cmp    ax,r9w
0x014a8d82: jbe    0x1414a8df1
0x014a8d84: test   dx,dx
0x014a8d87: jne    0x1414a8dcd
0x014a8d89: test   r8d,r8d
0x014a8d8c: js     0x1414a8dc0
0x014a8d8e: mov    rcx,QWORD PTR [rbx+0x11b3d8]
0x014a8d95: mov    rax,QWORD PTR [rbx+0x11b3e0]
0x014a8d9c: sub    rax,rcx
0x014a8d9f: movsxd rdx,r8d
0x014a8da2: sar    rax,0x3
0x014a8da6: cmp    rdx,rax
0x014a8da9: jae    0x1414a8dc0
0x014a8dab: mov    rax,QWORD PTR [rcx+rdx*8]
0x014a8daf: test   rax,rax
0x014a8db2: je     0x1414a8dc0
0x014a8db4: add    rax,0x1a8
0x014a8dba: add    rsp,0x20
0x014a8dbe: pop    rbx
0x014a8dbf: ret
0x014a8dc0: mov    rax,QWORD PTR [rbx+0x126c38]
0x014a8dc7: add    rsp,0x20
0x014a8dcb: pop    rbx
0x014a8dcc: ret
0x014a8dcd: mov    eax,0x292
0x014a8dd2: cmp    dx,ax
0x014a8dd5: ja     0x1414a8de9
0x014a8dd7: movsx  rax,dx
0x014a8ddb: mov    rax,QWORD PTR [rbx+rax*8+0x126c38]
0x014a8de3: add    rsp,0x20
0x014a8de7: pop    rbx
0x014a8de8: ret
0x014a8de9: xor    eax,eax
0x014a8deb: add    rsp,0x20
0x014a8def: pop    rbx
0x014a8df0: ret
0x014a8df1: lea    rcx,[rbx+0x11b558]
0x014a8df8: call   0x1406ff890
0x014a8dfd: test   rax,rax
0x014a8e00: jne    0x1414a8e09
0x014a8e02: mov    rax,QWORD PTR [rbx+0x126cd0]
0x014a8e09: add    rsp,0x20
0x014a8e0d: pop    rbx
0x014a8e0e: ret
