; Original current disk PE PE:6a70a6d9:02711000
0x140915c30: rex push rbx
0x140915c32: sub    rsp,0x20
0x140915c36: mov    edx,DWORD PTR [rip+0x1a7da34]        # 0x142393670
0x140915c3c: mov    rbx,rcx
0x140915c3f: call   0x140915c70
0x140915c44: cmp    eax,0xa
0x140915c47: jge    0x140915c63
0x140915c49: mov    edx,DWORD PTR [rip+0x1a7da29]        # 0x142393678
0x140915c4f: mov    rcx,rbx
0x140915c52: call   0x140915c70
0x140915c57: cmp    eax,0xa
0x140915c5a: setge  al
0x140915c5d: add    rsp,0x20
0x140915c61: pop    rbx
0x140915c62: ret
0x140915c63: mov    al,0x1
0x140915c65: add    rsp,0x20
0x140915c69: pop    rbx
0x140915c6a: ret
