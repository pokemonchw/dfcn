1401030a0: cmp    WORD PTR [rcx+0x28],0xd
1401030a5: mov    eax,DWORD PTR [rcx+0x2c]
1401030a8: jne    0x1401030c4
1401030aa: cmp    edx,eax
1401030ac: jne    0x1401030b4
1401030ae: cmp    r8d,DWORD PTR [rcx+0x30]
1401030b2: je     0x1401030be
1401030b4: cmp    r8d,eax
1401030b7: jne    0x1401030e2
1401030b9: cmp    edx,DWORD PTR [rcx+0x30]
1401030bc: jne    0x1401030e2
1401030be: mov    eax,0xfffffffb
1401030c3: ret
1401030c4: cmp    edx,eax
1401030c6: jne    0x1401030d4
1401030c8: cmp    r8d,DWORD PTR [rcx+0x30]
1401030cc: jne    0x1401030d4
1401030ce: mov    eax,0x1
1401030d3: ret
1401030d4: cmp    r8d,eax
1401030d7: jne    0x1401030e2
1401030d9: xor    eax,eax
1401030db: cmp    edx,DWORD PTR [rcx+0x30]
1401030de: sete   al
1401030e1: ret
1401030e2: xor    eax,eax
1401030e4: ret