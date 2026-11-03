0x14007dc40: movsx  r11,r8w
0x14007dc44: test   dx,dx
0x14007dc47: js     0x14007dcc3
0x14007dc49: movsx  eax,dx
0x14007dc4c: mov    r10d,eax
0x14007dc4f: cmp    eax,DWORD PTR [rcx+0x116bec]
0x14007dc55: jge    0x14007dcc3
0x14007dc57: test   r11w,r11w
0x14007dc5b: js     0x14007dcc3
0x14007dc5d: mov    r8d,r11d
0x14007dc60: cmp    r11d,DWORD PTR [rcx+0x116bf0]
0x14007dc67: jge    0x14007dcc3
0x14007dc69: test   r9w,r9w
0x14007dc6d: js     0x14007dcc3
0x14007dc6f: movsx  eax,r9w
0x14007dc73: cmp    eax,DWORD PTR [rcx+0x116bf4]
0x14007dc79: jge    0x14007dcc3
0x14007dc7b: mov    rcx,QWORD PTR [rcx+0x116bb8]
0x14007dc82: test   rcx,rcx
0x14007dc85: je     0x14007dcc3
0x14007dc87: movsx  rax,dx
0x14007dc8b: mov    rdx,r11
0x14007dc8e: shr    rax,0x4
0x14007dc92: shr    rdx,0x4
0x14007dc96: mov    rax,QWORD PTR [rcx+rax*8]
0x14007dc9a: movsx  rcx,r9w
0x14007dc9e: mov    rax,QWORD PTR [rax+rdx*8]
0x14007dca2: mov    rax,QWORD PTR [rax+rcx*8]
0x14007dca6: test   rax,rax
0x14007dca9: je     0x14007dcc3
0x14007dcab: and    r10d,0xf
0x14007dcaf: and    r8d,0xf
0x14007dcb3: shl    r10,0x4
0x14007dcb7: add    r10,r8
0x14007dcba: mov    eax,DWORD PTR [rax+r10*4+0x2a0]
0x14007dcc2: ret
0x14007dcc3: xor    eax,eax
0x14007dcc5: ret
