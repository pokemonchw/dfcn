0x14151a570: movsx  r11,r8w
0x14151a574: test   dx,dx
0x14151a577: js     0x14151a600
0x14151a57d: movsx  eax,dx
0x14151a580: mov    r10d,eax
0x14151a583: cmp    eax,DWORD PTR [rcx+0x116bec]
0x14151a589: jge    0x14151a600
0x14151a58b: test   r11w,r11w
0x14151a58f: js     0x14151a600
0x14151a591: mov    r8d,r11d
0x14151a594: cmp    r11d,DWORD PTR [rcx+0x116bf0]
0x14151a59b: jge    0x14151a600
0x14151a59d: test   r9w,r9w
0x14151a5a1: js     0x14151a600
0x14151a5a3: movsx  eax,r9w
0x14151a5a7: cmp    eax,DWORD PTR [rcx+0x116bf4]
0x14151a5ad: jge    0x14151a600
0x14151a5af: mov    rcx,QWORD PTR [rcx+0x116bb8]
0x14151a5b6: test   rcx,rcx
0x14151a5b9: je     0x14151a600
0x14151a5bb: movsx  rax,dx
0x14151a5bf: mov    rdx,r11
0x14151a5c2: shr    rax,0x4
0x14151a5c6: shr    rdx,0x4
0x14151a5ca: mov    rax,QWORD PTR [rcx+rax*8]
0x14151a5ce: movsx  rcx,r9w
0x14151a5d2: mov    rax,QWORD PTR [rax+rdx*8]
0x14151a5d6: mov    rax,QWORD PTR [rax+rcx*8]
0x14151a5da: test   rax,rax
0x14151a5dd: je     0x14151a600
0x14151a5df: and    r10d,0xf
0x14151a5e3: and    r8d,0xf
0x14151a5e7: shl    r10,0x4
0x14151a5eb: add    r10,r8
0x14151a5ee: test   DWORD PTR [rax+r10*4+0x2a0],0x20000000
0x14151a5fa: je     0x14151a600
0x14151a5fc: mov    eax,DWORD PTR [rax+0x3c]
0x14151a5ff: ret
0x14151a600: mov    eax,0xffffffff
0x14151a605: ret
