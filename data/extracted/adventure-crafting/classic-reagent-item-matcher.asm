# classic PE:6a70b91c:0270a000; reagent-item-matcher; RVA 0x27dbd0..0x27dd5e
0x0027dbd0: rex push rbx
0x0027dbd2: push   rbp
0x0027dbd3: sub    rsp,0x28
0x0027dbd7: mov    rax,QWORD PTR [rcx+0x78]
0x0027dbdb: mov    rbp,rcx
0x0027dbde: cmp    rax,QWORD PTR [rcx+0x80]
0x0027dbe5: je     0x14027dbee
0x0027dbe7: mov    QWORD PTR [rcx+0x80],rax
0x0027dbee: mov    rax,QWORD PTR [rcx+0xc0]
0x0027dbf5: mov    DWORD PTR [rcx+0xcc],0x0
0x0027dbff: test   rax,rax
0x0027dc02: je     0x14027dd57
0x0027dc08: movsxd rcx,DWORD PTR [rcx+0xc8]
0x0027dc0f: test   ecx,ecx
0x0027dc11: js     0x14027dd57
0x0027dc17: mov    rdx,QWORD PTR [rax+0x50]
0x0027dc1b: mov    rax,QWORD PTR [rax+0x58]
0x0027dc1f: sub    rax,rdx
0x0027dc22: sar    rax,0x3
0x0027dc26: cmp    rcx,rax
0x0027dc29: jae    0x14027dd57
0x0027dc2f: mov    QWORD PTR [rsp+0x50],rdi
0x0027dc34: mov    QWORD PTR [rsp+0x20],r14
0x0027dc39: mov    r14,QWORD PTR [rdx+rcx*8]
0x0027dc3d: mov    QWORD PTR [rsp+0x48],rsi
0x0027dc42: mov    eax,DWORD PTR [r14+0x28]
0x0027dc46: mov    DWORD PTR [rbp+0xcc],eax
0x0027dc4c: mov    rax,QWORD PTR [rbp+0x10]
0x0027dc50: sub    rax,QWORD PTR [rbp+0x8]
0x0027dc54: sar    rax,0x3
0x0027dc58: sub    eax,0x1
0x0027dc5b: movsxd rdi,eax
0x0027dc5e: js     0x14027dcbc
0x0027dc60: mov    rax,QWORD PTR [rbp+0x8]
0x0027dc64: mov    rcx,r14
0x0027dc67: mov    r8,QWORD PTR [rbp+0xc0]
0x0027dc6e: mov    rsi,QWORD PTR [rax+rdi*8]
0x0027dc72: mov    rax,QWORD PTR [r14]
0x0027dc75: mov    rdx,rsi
0x0027dc78: mov    r8d,DWORD PTR [r8+0x118]
0x0027dc7f: mov    QWORD PTR [rsp+0x40],rsi
0x0027dc84: call   QWORD PTR [rax+0x28]
0x0027dc87: test   al,al
0x0027dc89: je     0x14027dcb6
0x0027dc8b: mov    rdx,QWORD PTR [rbp+0x80]
0x0027dc92: cmp    rdx,QWORD PTR [rbp+0x88]
0x0027dc99: je     0x14027dca8
0x0027dc9b: mov    QWORD PTR [rdx],rsi
0x0027dc9e: add    QWORD PTR [rbp+0x80],0x8
0x0027dca6: jmp    0x14027dcb6
0x0027dca8: lea    r8,[rsp+0x40]
0x0027dcad: lea    rcx,[rbp+0x78]
0x0027dcb1: call   0x1400bacc0
0x0027dcb6: sub    rdi,0x1
0x0027dcba: jns    0x14027dc60
0x0027dcbc: mov    rdi,QWORD PTR [rbp+0x80]
0x0027dcc3: sub    rdi,QWORD PTR [rbp+0x78]
0x0027dcc7: sar    rdi,0x3
0x0027dccb: sub    edi,0x1
0x0027dcce: js     0x14027dd48
0x0027dcd4: movsxd rax,edi
0x0027dcd7: lea    rsi,[rax*8+0x0]
0x0027dcdf: mov    r14,rsi
0x0027dce2: mov    r9,QWORD PTR [rbp+0x78]
0x0027dce6: mov    rax,QWORD PTR [rbp+0x90]
0x0027dced: mov    rcx,QWORD PTR [rbp+0x98]
0x0027dcf4: mov    rdx,rax
0x0027dcf7: mov    r8,QWORD PTR [rsi+r9*1]
0x0027dcfb: nop    DWORD PTR [rax+rax*1+0x0]
0x0027dd00: cmp    rax,rcx
0x0027dd03: jae    0x14027dd3b
0x0027dd05: cmp    QWORD PTR [rax],r8
0x0027dd08: je     0x14027dd10
0x0027dd0a: add    rax,0x8
0x0027dd0e: jmp    0x14027dd00
0x0027dd10: sub    rax,rdx
0x0027dd13: sar    rax,0x3
0x0027dd17: cmp    eax,0xffffffff
0x0027dd1a: je     0x14027dd3b
0x0027dd1c: mov    r8,QWORD PTR [rbp+0x80]
0x0027dd23: lea    rcx,[r14+r9*1]
0x0027dd27: lea    rdx,[rcx+0x8]
0x0027dd2b: sub    r8,rdx
0x0027dd2e: call   0x141535d8a
0x0027dd33: add    QWORD PTR [rbp+0x80],0xfffffffffffffff8
0x0027dd3b: sub    r14,0x8
0x0027dd3f: sub    rsi,0x8
0x0027dd43: sub    edi,0x1
0x0027dd46: jns    0x14027dce2
0x0027dd48: mov    rsi,QWORD PTR [rsp+0x48]
0x0027dd4d: mov    rdi,QWORD PTR [rsp+0x50]
0x0027dd52: mov    r14,QWORD PTR [rsp+0x20]
0x0027dd57: add    rsp,0x28
0x0027dd5b: pop    rbp
0x0027dd5c: pop    rbx
0x0027dd5d: ret
