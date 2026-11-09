14145e0f0: mov    QWORD PTR [rsp+0x18],rbx
14145e0f5: push   rbp
14145e0f6: push   rsi
14145e0f7: push   rdi
14145e0f8: push   r13
14145e0fa: push   r15
14145e0fc: sub    rsp,0x40
14145e100: movsx  esi,r8w
14145e104: movzx  ebp,r9w
14145e108: movsx  edi,dx
14145e10b: movzx  r8d,si
14145e10f: movzx  edx,di
14145e112: mov    rbx,rcx
14145e115: call   0x14006dd30
14145e11a: movzx  r15d,ax
14145e11e: xor    r13d,r13d
14145e121: mov    ecx,r15d
14145e124: mov    r8d,0x3
14145e12a: cmp    r15d,0x15c
14145e131: ja     0x14145e165
14145e133: je     0x14145e186
14145e135: sub    ecx,0x27
14145e138: cmp    ecx,0xe0
14145e13e: ja     0x14145e18c
14145e140: movsxd rax,ecx
14145e143: lea    rdx,[rip+0xfffffffffeba1eb6]        # 0x140000000
14145e14a: movzx  eax,BYTE PTR [rdx+rax*1+0x145e5bc]
14145e152: mov    ecx,DWORD PTR [rdx+rax*4+0x145e5b0]
14145e159: add    rcx,rdx
14145e15c: jmp    rcx
14145e15e: mov    ecx,0x1
14145e163: jmp    0x14145e190
14145e165: sub    ecx,0x15d
14145e16b: cmp    ecx,0x6
14145e16e: ja     0x14145e18c
14145e170: lea    rdx,[rip+0xfffffffffeba1e89]        # 0x140000000
14145e177: movsxd rax,ecx
14145e17a: mov    eax,DWORD PTR [rdx+rax*4+0x145e6a0]
14145e181: add    rax,rdx
14145e184: jmp    rax
14145e186: movzx  ecx,r8w
14145e18a: jmp    0x14145e190
14145e18c: movzx  ecx,r13w
14145e190: mov    rax,QWORD PTR [rsp+0xb0]
14145e198: mov    WORD PTR [rax],cx
14145e19b: movzx  ecx,r15w
14145e19f: call   0x14023d4c0
14145e1a4: test   al,al
14145e1a6: je     0x14145e218
14145e1a8: mov    rax,QWORD PTR [rbx+0x158]
14145e1af: movzx  r8d,si
14145e1b3: sub    rax,QWORD PTR [rbx+0x150]
14145e1ba: movzx  edx,di
14145e1bd: sar    rax,0x3
14145e1c1: mov    rcx,rbx
14145e1c4: dec    eax
14145e1c6: mov    DWORD PTR [rsp+0x28],eax
14145e1ca: mov    DWORD PTR [rsp+0x20],r13d
14145e1cf: call   0x140a08a10
14145e1d4: test   rax,rax
14145e1d7: je     0x14145e218
14145e1d9: movzx  edx,WORD PTR [rax+0x6]
14145e1dd: mov    rcx,QWORD PTR [rsp+0x90]
14145e1e5: mov    WORD PTR [rcx],dx
14145e1e8: movzx  edx,WORD PTR [rax+0x8]
14145e1ec: mov    rcx,QWORD PTR [rsp+0x98]
14145e1f4: mov    WORD PTR [rcx],dx
14145e1f7: movzx  edx,WORD PTR [rax+0xa]
14145e1fb: mov    rcx,QWORD PTR [rsp+0xa0]
14145e203: mov    WORD PTR [rcx],dx
14145e206: mov    ecx,DWORD PTR [rax+0xc]
14145e209: mov    rax,QWORD PTR [rsp+0xa8]
14145e211: mov    DWORD PTR [rax],ecx
14145e213: jmp    0x14145e59b
14145e218: mov    rax,QWORD PTR [rsp+0x90]
14145e220: mov    r8d,0xffffffff
14145e226: mov    QWORD PTR [rsp+0x70],r12
14145e22b: movzx  ecx,r15w
14145e22f: mov    r12,QWORD PTR [rsp+0xa0]
14145e237: mov    QWORD PTR [rsp+0x78],r14
14145e23c: mov    WORD PTR [rax],0x4
14145e241: mov    rax,QWORD PTR [rsp+0x98]
14145e249: mov    WORD PTR [rax],r8w
14145e24d: mov    WORD PTR [r12],r13w
14145e252: call   0x14023d5d0
14145e257: mov    r14,QWORD PTR [rsp+0xa8]
14145e25f: test   al,al
14145e261: je     0x14145e2f2
14145e267: movzx  r8d,si
14145e26b: movzx  edx,di
14145e26e: mov    rcx,rbx
14145e271: call   0x14145e740
14145e276: mov    r8,rax
14145e279: test   rax,rax
14145e27c: je     0x14145e2e2
14145e27e: mov    ecx,edi
14145e280: and    ecx,0x8000000f
14145e286: jge    0x14145e28f
14145e288: dec    ecx
14145e28a: or     ecx,0xfffffff0
14145e28d: inc    ecx
14145e28f: movsxd rdx,ecx
14145e292: mov    eax,esi
14145e294: add    rdx,rdx
14145e297: and    eax,0x8000000f
14145e29c: jge    0x14145e2a5
14145e29e: dec    eax
14145e2a0: or     eax,0xfffffff0
14145e2a3: inc    eax
14145e2a5: movsxd rcx,eax
14145e2a8: lea    rax,[r8+rdx*8]
14145e2ac: movzx  edx,BYTE PTR [rcx+rax*1+0x208]
14145e2b4: shl    edx,0x15
14145e2b7: test   edx,edx
14145e2b9: je     0x14145e2e2
14145e2bb: cmp    edx,0x200000
14145e2c1: jne    0x14145e361
14145e2c7: movzx  r9d,bp
14145e2cb: movzx  r8d,si
14145e2cf: movzx  edx,di
14145e2d2: mov    rcx,rbx
14145e2d5: call   0x14145e060
14145e2da: movsx  ecx,ax
14145e2dd: mov    DWORD PTR [r14],ecx
14145e2e0: jmp    0x14145e361
14145e2e2: mov    WORD PTR [r12],0x6
14145e2e9: mov    DWORD PTR [r14],0xffffffff
14145e2f0: jmp    0x14145e361
14145e2f2: movzx  ecx,r15w
14145e2f6: call   0x14027df00
14145e2fb: test   al,al
14145e2fd: jne    0x14145e2cb
14145e2ff: movzx  ecx,r15w
14145e303: call   0x14027e1b0
14145e308: test   al,al
14145e30a: je     0x14145e33a
14145e30c: mov    WORD PTR [r12],r8w
14145e311: movzx  edx,di
14145e314: mov    DWORD PTR [r14],r8d
14145e317: mov    rcx,rbx
14145e31a: movzx  r8d,si
14145e31e: call   0x1414305a0
14145e323: test   rax,rax
14145e326: je     0x14145e361
14145e328: mov    r9,QWORD PTR [rax]
14145e32b: mov    r8,r14
14145e32e: mov    rdx,r12
14145e331: mov    rcx,rax
14145e334: call   QWORD PTR [r9+0x40]
14145e338: jmp    0x14145e361
14145e33a: movzx  ecx,r15w
14145e33e: call   0x14027e340
14145e343: movzx  r8d,si
14145e347: movzx  edx,di
14145e34a: mov    rcx,rbx
14145e34d: test   al,al
14145e34f: je     0x14145e3cf
14145e351: call   0x14145e6c0
14145e356: test   rax,rax
14145e359: je     0x14145e3ba
14145e35b: mov    eax,DWORD PTR [rax+0x8]
14145e35e: mov    DWORD PTR [r14],eax
14145e361: mov    esi,0x3
14145e366: mov    rbx,QWORD PTR [rsp+0x90]
14145e36e: cmp    WORD PTR [rbx],0x4
14145e372: jne    0x14145e591
14145e378: mov    r8d,DWORD PTR [r14]
14145e37b: lea    rcx,[rip+0xedb42e]        # 0x1423397b0
14145e382: movzx  edx,WORD PTR [r12]
14145e387: call   0x14143b820
14145e38c: test   rax,rax
14145e38f: je     0x14145e591
14145e395: cmp    DWORD PTR [rax+0x298],0x6
14145e39c: jle    0x14145e588
14145e3a2: mov    rax,QWORD PTR [rax+0x290]
14145e3a9: test   BYTE PTR [rax+0x6],0x1
14145e3ad: je     0x14145e588
14145e3b3: mov    al,0x1
14145e3b5: jmp    0x14145e58a
14145e3ba: movzx  r9d,bp
14145e3be: movzx  r8d,si
14145e3c2: movzx  edx,di
14145e3c5: mov    rcx,rbx
14145e3c8: call   0x14014ba60
14145e3cd: jmp    0x14145e35e
14145e3cf: call   0x14014ba60
14145e3d4: mov    DWORD PTR [r14],eax
14145e3d7: test   eax,eax
14145e3d9: js     0x14145e442
14145e3db: mov    rcx,QWORD PTR [rbx+0x11b3a8]
14145e3e2: movsxd rdx,eax
14145e3e5: mov    rax,QWORD PTR [rbx+0x11b3b0]
14145e3ec: sub    rax,rcx
14145e3ef: sar    rax,0x3
14145e3f3: cmp    rdx,rax
14145e3f6: jae    0x14145e442
14145e3f8: mov    rax,QWORD PTR [rcx+rdx*8]
14145e3fc: cmp    DWORD PTR [rax+0x40],0x1
14145e400: jle    0x14145e411
14145e402: mov    rax,QWORD PTR [rax+0x38]
14145e406: test   BYTE PTR [rax+0x1],0x8
14145e40a: je     0x14145e411
14145e40c: mov    r8b,0x1
14145e40f: jmp    0x14145e414
14145e411: xor    r8b,r8b
14145e414: movzx  ecx,r15w
14145e418: call   0x14006bae0
14145e41d: test   r8b,r8b
14145e420: je     0x14145e44b
14145e422: test   al,al
14145e424: je     0x14145e361
14145e42a: movzx  r9d,bp
14145e42e: movzx  r8d,si
14145e432: movzx  edx,di
14145e435: mov    rcx,rbx
14145e438: call   0x14142b930
14145e43d: jmp    0x14145e35e
14145e442: movzx  ecx,r15w
14145e446: call   0x14006bae0
14145e44b: test   al,al
14145e44d: jne    0x14145e361
14145e453: mov    WORD PTR [rsp+0x28],bp
14145e458: lea    r8,[rsp+0xb0]
14145e460: movzx  r9d,di
14145e464: mov    WORD PTR [rsp+0x20],si
14145e469: lea    rdx,[rsp+0x30]
14145e46e: mov    rcx,rbx
14145e471: call   0x1400838a0
14145e476: movsx  r8d,WORD PTR [rsp+0xb0]
14145e47f: movsx  edx,WORD PTR [rsp+0x30]
14145e484: mov    rcx,QWORD PTR [rbx+0x11a638]
14145e48b: call   0x14014b930
14145e490: mov    rdi,rax
14145e493: test   rax,rax
14145e496: je     0x14145e503
14145e498: mov    r8,QWORD PTR [rax+0x8]
14145e49c: mov    rcx,QWORD PTR [rax+0x10]
14145e4a0: sub    rcx,r8
14145e4a3: sar    rcx,0x3
14145e4a7: sub    ecx,0x1
14145e4aa: js     0x14145e503
14145e4ac: movsxd rdx,ecx
14145e4af: lea    r8,[r8+rdx*8]
14145e4b3: mov    rax,QWORD PTR [r8]
14145e4b6: movsxd r9,DWORD PTR [rax+0x4]
14145e4ba: test   r9d,r9d
14145e4bd: js     0x14145e4f7
14145e4bf: mov    r10,QWORD PTR [rbx+0x11b3a8]
14145e4c6: mov    rax,QWORD PTR [rbx+0x11b3b0]
14145e4cd: sub    rax,r10
14145e4d0: sar    rax,0x3
14145e4d4: cmp    r9,rax
14145e4d7: jae    0x14145e4f7
14145e4d9: mov    rax,QWORD PTR [r10+r9*8]
14145e4dd: cmp    DWORD PTR [rax+0x40],0x1
14145e4e1: jle    0x14145e4f1
14145e4e3: mov    rax,QWORD PTR [rax+0x38]
14145e4e7: test   BYTE PTR [rax+0x1],0x8
14145e4eb: je     0x14145e4f1
14145e4ed: mov    al,0x1
14145e4ef: jmp    0x14145e4f3
14145e4f1: xor    al,al
14145e4f3: test   al,al
14145e4f5: jne    0x14145e527
14145e4f7: dec    ecx
14145e4f9: sub    r8,0x8
14145e4fd: sub    rdx,0x1
14145e501: jns    0x14145e4b3
14145e503: mov    rdi,QWORD PTR [rbx+0x11b3b0]
14145e50a: sub    rdi,QWORD PTR [rbx+0x11b3a8]
14145e511: sar    rdi,0x3
14145e515: cmp    edi,0x1
14145e518: ja     0x14145e543
14145e51a: mov    esi,0x3
14145e51f: mov    DWORD PTR [r14],r13d
14145e522: jmp    0x14145e366
14145e527: mov    rax,QWORD PTR [rdi+0x8]
14145e52b: mov    esi,0x3
14145e530: movsxd rcx,ecx
14145e533: mov    rcx,QWORD PTR [rax+rcx*8]
14145e537: mov    r13d,DWORD PTR [rcx+0x4]
14145e53b: mov    DWORD PTR [r14],r13d
14145e53e: jmp    0x14145e366
14145e543: call   0x140e5e1e0
14145e548: mov    r8d,eax
14145e54b: mov    esi,0x3
14145e550: mov    ecx,r8d
14145e553: mov    eax,esi
14145e555: mul    r8d
14145e558: mov    eax,0x7fffffff
14145e55d: sub    ecx,edx
14145e55f: shr    ecx,1
14145e561: add    ecx,edx
14145e563: xor    edx,edx
14145e565: div    edi
14145e567: shr    ecx,0x1e
14145e56a: xor    edx,edx
14145e56c: imul   ecx,ecx,0x7fffffff
14145e572: sub    r8d,ecx
14145e575: lea    ecx,[rax+0x1]
14145e578: mov    eax,r8d
14145e57b: div    ecx
14145e57d: mov    r13d,eax
14145e580: mov    DWORD PTR [r14],eax
14145e583: jmp    0x14145e366
14145e588: xor    al,al
14145e58a: test   al,al
14145e58c: je     0x14145e591
14145e58e: mov    WORD PTR [rbx],si
14145e591: mov    r12,QWORD PTR [rsp+0x70]
14145e596: mov    r14,QWORD PTR [rsp+0x78]
14145e59b: mov    rbx,QWORD PTR [rsp+0x80]
14145e5a3: add    rsp,0x40
14145e5a7: pop    r15
14145e5a9: pop    r13
14145e5ab: pop    rdi
14145e5ac: pop    rsi
14145e5ad: pop    rbp
14145e5ae: ret
