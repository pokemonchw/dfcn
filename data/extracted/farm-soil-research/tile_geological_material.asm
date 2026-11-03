0x14014e100: mov    QWORD PTR [rsp+0x8],rbx
0x14014e105: mov    QWORD PTR [rsp+0x18],rbp
0x14014e10a: mov    QWORD PTR [rsp+0x20],rsi
0x14014e10f: push   rdi
0x14014e110: sub    rsp,0x40
0x14014e114: mov    rbx,rcx
0x14014e117: test   dx,dx
0x14014e11a: js     0x14014e23f
0x14014e120: movsx  r10d,dx
0x14014e124: cmp    r10d,DWORD PTR [rcx+0x116bec]
0x14014e12b: jge    0x14014e23f
0x14014e131: test   r8w,r8w
0x14014e135: js     0x14014e23f
0x14014e13b: movsx  r11d,r8w
0x14014e13f: cmp    r11d,DWORD PTR [rcx+0x116bf0]
0x14014e146: jge    0x14014e23f
0x14014e14c: test   r9w,r9w
0x14014e150: js     0x14014e23f
0x14014e156: movsx  eax,r9w
0x14014e15a: cmp    eax,DWORD PTR [rcx+0x116bf4]
0x14014e160: jge    0x14014e23f
0x14014e166: mov    rcx,QWORD PTR [rcx+0x116bb8]
0x14014e16d: test   rcx,rcx
0x14014e170: je     0x14014e23f
0x14014e176: movsx  rax,dx
0x14014e17a: shr    rax,0x4
0x14014e17e: movsx  rdx,r8w
0x14014e182: shr    rdx,0x4
0x14014e186: mov    rax,QWORD PTR [rcx+rax*8]
0x14014e18a: movsx  rcx,r9w
0x14014e18e: mov    rax,QWORD PTR [rax+rdx*8]
0x14014e192: mov    rsi,QWORD PTR [rax+rcx*8]
0x14014e196: test   rsi,rsi
0x14014e199: je     0x14014e23f
0x14014e19f: and    r10w,0xf
0x14014e1a4: lea    r8,[rsp+0x58]
0x14014e1a9: and    r11w,0xf
0x14014e1ae: movzx  r9d,r10w
0x14014e1b2: movzx  edx,r11w
0x14014e1b6: mov    eax,r9d
0x14014e1b9: shl    rax,0x4
0x14014e1bd: add    rax,rdx
0x14014e1c0: mov    WORD PTR [rsp+0x20],dx
0x14014e1c5: lea    rdx,[rsp+0x30]
0x14014e1ca: mov    ebp,DWORD PTR [rsi+rax*4+0x2a0]
0x14014e1d1: mov    ecx,ebp
0x14014e1d3: shr    ecx,0xa
0x14014e1d6: and    ecx,0x1
0x14014e1d9: bt     ebp,0xb
0x14014e1dd: lea    eax,[rcx+0x2]
0x14014e1e0: cmovae eax,ecx
0x14014e1e3: bt     ebp,0xc
0x14014e1e7: mov    rcx,rsi
0x14014e1ea: lea    edi,[rax+0x4]
0x14014e1ed: cmovae edi,eax
0x14014e1f0: and    ebp,0x2000
0x14014e1f6: call   0x14053faa0
0x14014e1fb: movsx  r8d,WORD PTR [rsp+0x58]
0x14014e201: movsx  edx,WORD PTR [rsp+0x30]
0x14014e206: mov    rcx,QWORD PTR [rbx+0x11a668]
0x14014e20d: call   0x14014dfd0
0x14014e212: test   rax,rax
0x14014e215: je     0x14014e23f
0x14014e217: mov    rdx,QWORD PTR [rax+0x8]
0x14014e21b: lea    ecx,[rdi+0x8]
0x14014e21e: mov    rax,QWORD PTR [rax+0x10]
0x14014e222: test   ebp,ebp
0x14014e224: cmove  ecx,edi
0x14014e227: sub    rax,rdx
0x14014e22a: sar    rax,0x3
0x14014e22e: mov    r8d,ecx
0x14014e231: cmp    r8,rax
0x14014e234: jae    0x14014e23f
0x14014e236: mov    rax,QWORD PTR [rdx+rcx*8]
0x14014e23a: mov    eax,DWORD PTR [rax+0x4]
0x14014e23d: jmp    0x14014e292
0x14014e23f: mov    rdi,QWORD PTR [rbx+0x11b3e0]
0x14014e246: sub    rdi,QWORD PTR [rbx+0x11b3d8]
0x14014e24d: sar    rdi,0x3
0x14014e251: cmp    edi,0x1
0x14014e254: ja     0x14014e25a
0x14014e256: xor    eax,eax
0x14014e258: jmp    0x14014e292
0x14014e25a: call   0x140eb68b0
0x14014e25f: mov    r8d,eax
0x14014e262: mov    eax,0x3
0x14014e267: mul    r8d
0x14014e26a: mov    ecx,r8d
0x14014e26d: mov    eax,0x7fffffff
0x14014e272: sub    ecx,edx
0x14014e274: shr    ecx,1
0x14014e276: add    ecx,edx
0x14014e278: xor    edx,edx
0x14014e27a: div    edi
0x14014e27c: shr    ecx,0x1e
0x14014e27f: xor    edx,edx
0x14014e281: imul   ecx,ecx,0x7fffffff
0x14014e287: sub    r8d,ecx
0x14014e28a: lea    ecx,[rax+0x1]
0x14014e28d: mov    eax,r8d
0x14014e290: div    ecx
0x14014e292: mov    rbx,QWORD PTR [rsp+0x50]
0x14014e297: mov    rbp,QWORD PTR [rsp+0x60]
0x14014e29c: mov    rsi,QWORD PTR [rsp+0x68]
0x14014e2a1: add    rsp,0x40
0x14014e2a5: pop    rdi
0x14014e2a6: ret
