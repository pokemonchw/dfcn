0x140ebf240: mov    rax,rsp
0x140ebf243: mov    QWORD PTR [rax+0x8],rbx
0x140ebf247: mov    QWORD PTR [rax+0x10],rbp
0x140ebf24b: mov    QWORD PTR [rax+0x18],rsi
0x140ebf24f: push   rdi
0x140ebf250: sub    rsp,0x50
0x140ebf254: movzx  r9d,WORD PTR [rcx+0x30]
0x140ebf259: mov    rdi,rcx
0x140ebf25c: movzx  r8d,WORD PTR [rcx+0x2e]
0x140ebf261: movzx  edx,WORD PTR [rcx+0x2c]
0x140ebf265: lea    rcx,[rip+0x1534704]        # 0x1423f3970
0x140ebf26c: mov    DWORD PTR [rax-0x18],0x0
0x140ebf273: mov    BYTE PTR [rax-0x20],0x0
0x140ebf277: mov    BYTE PTR [rax-0x28],0x0
0x140ebf27b: mov    BYTE PTR [rax-0x30],0x0
0x140ebf27f: mov    BYTE PTR [rax-0x38],0x0
0x140ebf283: call   0x141460470
0x140ebf288: test   al,al
0x140ebf28a: je     0x140ebf45a
0x140ebf290: movzx  r9d,WORD PTR [rdi+0x30]
0x140ebf295: movzx  r8d,WORD PTR [rdi+0x2c]
0x140ebf29a: dec    r9w
0x140ebf29e: movzx  ebx,WORD PTR [rdi+0x2e]
0x140ebf2a2: test   r8w,r8w
0x140ebf2a6: js     0x140ebf45a
0x140ebf2ac: mov    ebp,DWORD PTR [rip+0x164b2aa]        # 0x14250a55c
0x140ebf2b2: movsx  eax,r8w
0x140ebf2b6: cmp    eax,ebp
0x140ebf2b8: jge    0x140ebf45a
0x140ebf2be: test   bx,bx
0x140ebf2c1: js     0x140ebf45a
0x140ebf2c7: mov    r11d,DWORD PTR [rip+0x164b292]        # 0x14250a560
0x140ebf2ce: movsx  eax,bx
0x140ebf2d1: cmp    eax,r11d
0x140ebf2d4: jge    0x140ebf45a
0x140ebf2da: test   r9w,r9w
0x140ebf2de: js     0x140ebf45a
0x140ebf2e4: mov    r10d,DWORD PTR [rip+0x164b279]        # 0x14250a564
0x140ebf2eb: movsx  eax,r9w
0x140ebf2ef: cmp    eax,r10d
0x140ebf2f2: jge    0x140ebf45a
0x140ebf2f8: mov    rcx,QWORD PTR [rip+0x164b229]        # 0x14250a528
0x140ebf2ff: test   rcx,rcx
0x140ebf302: je     0x140ebf45a
0x140ebf308: movsx  rax,r8w
0x140ebf30c: sar    rax,0x4
0x140ebf310: movsx  rdx,bx
0x140ebf314: sar    rdx,0x4
0x140ebf318: mov    rax,QWORD PTR [rcx+rax*8]
0x140ebf31c: movsx  rcx,r9w
0x140ebf320: mov    rax,QWORD PTR [rax+rdx*8]
0x140ebf324: cmp    QWORD PTR [rax+rcx*8],0x0
0x140ebf329: je     0x140ebf45a
0x140ebf32f: mov    esi,r8d
0x140ebf332: cmp    r8d,ebp
0x140ebf335: jge    0x140ebf45a
0x140ebf33b: cmp    ebx,r11d
0x140ebf33e: jge    0x140ebf45a
0x140ebf344: movsx  eax,r9w
0x140ebf348: cmp    eax,r10d
0x140ebf34b: jge    0x140ebf45a
0x140ebf351: movzx  r8d,bx
0x140ebf355: lea    rcx,[rip+0x1534614]        # 0x1423f3970
0x140ebf35c: movzx  edx,si
0x140ebf35f: call   0x1414c3aa0
0x140ebf364: test   al,al
0x140ebf366: je     0x140ebf45a
0x140ebf36c: movzx  edx,si
0x140ebf36f: lea    rcx,[rip+0x15345fa]        # 0x1423f3970
0x140ebf376: call   0x140069640
0x140ebf37b: and    eax,0x7
0x140ebf37e: sub    eax,0x6
0x140ebf381: je     0x140ebf45a
0x140ebf387: cmp    eax,0x1
0x140ebf38a: jne    0x140ebf3a7
0x140ebf38c: movzx  r8d,bx
0x140ebf390: lea    rcx,[rip+0x1550ff1]        # 0x142410388
0x140ebf397: movzx  edx,si
0x140ebf39a: call   0x1405c17f0
0x140ebf39f: test   al,al
0x140ebf3a1: jne    0x140ebf45a
0x140ebf3a7: call   0x140ece790
0x140ebf3ac: movzx  esi,WORD PTR [rdi+0x2e]
0x140ebf3b0: lea    rcx,[rip+0x15345b9]        # 0x1423f3970
0x140ebf3b7: movzx  ebp,WORD PTR [rdi+0x2c]
0x140ebf3bb: movzx  r8d,si
0x140ebf3bf: movzx  r9d,WORD PTR [rdi+0x30]
0x140ebf3c4: movzx  edx,bp
0x140ebf3c7: mov    ebx,eax
0x140ebf3c9: call   0x1400695b0
0x140ebf3ce: movzx  ecx,ax
0x140ebf3d1: call   0x140ebefe0
0x140ebf3d6: mov    r8d,eax
0x140ebf3d9: mov    ecx,ebx
0x140ebf3db: mov    eax,0x3
0x140ebf3e0: mul    ebx
0x140ebf3e2: mov    eax,0xc7ffffaf
0x140ebf3e7: sub    ecx,edx
0x140ebf3e9: shr    ecx,1
0x140ebf3eb: add    ecx,edx
0x140ebf3ed: shr    ecx,0x1e
0x140ebf3f0: imul   ecx,ecx,0x7fffffff
0x140ebf3f6: sub    ebx,ecx
0x140ebf3f8: mul    ebx
0x140ebf3fa: shr    edx,0x18
0x140ebf3fd: cmp    edx,r8d
0x140ebf400: jl     0x140ebf45a
0x140ebf402: mov    WORD PTR [rdi+0x36],r9w
0x140ebf407: mov    al,0x1
0x140ebf409: mov    WORD PTR [rdi+0x24],r9w
0x140ebf40e: dec    r9w
0x140ebf412: or     DWORD PTR [rdi+0x48],0x1
0x140ebf416: mov    WORD PTR [rdi+0x2a],r9w
0x140ebf41b: mov    WORD PTR [rdi+0x32],bp
0x140ebf41f: mov    WORD PTR [rdi+0x34],si
0x140ebf423: mov    WORD PTR [rdi+0x20],bp
0x140ebf427: mov    WORD PTR [rdi+0x22],si
0x140ebf42b: mov    WORD PTR [rdi+0x26],bp
0x140ebf42f: mov    WORD PTR [rdi+0x28],si
0x140ebf433: mov    DWORD PTR [rdi+0x38],0x0
0x140ebf43a: mov    QWORD PTR [rdi+0x40],0xffffffffffffffff
0x140ebf442: mov    DWORD PTR [rdi+0x3c],0x64
0x140ebf449: mov    QWORD PTR [rdi+0x18],0x0
0x140ebf451: mov    DWORD PTR [rdi+0x4c],0x50005
0x140ebf458: jmp    0x140ebf45c
0x140ebf45a: xor    al,al
0x140ebf45c: mov    rbx,QWORD PTR [rsp+0x60]
0x140ebf461: mov    rbp,QWORD PTR [rsp+0x68]
0x140ebf466: mov    rsi,QWORD PTR [rsp+0x70]
0x140ebf46b: add    rsp,0x50
0x140ebf46f: pop    rdi
0x140ebf470: ret
