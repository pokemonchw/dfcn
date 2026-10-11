# steam PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; RVA 0xc3a4f0..0xc3a588
0x00c3a4f0: rex push rdi
0x00c3a4f2: mov    r11d,DWORD PTR [rcx+0x88]
0x00c3a4f9: mov    rdi,rcx
0x00c3a4fc: cmp    r11d,0xffffffff
0x00c3a500: je     0x140c3a582
0x00c3a506: mov    r10,QWORD PTR [rip+0x18bf813]        # 0x1424f9d20
0x00c3a50d: mov    QWORD PTR [rsp+0x10],rbx
0x00c3a512: mov    rbx,QWORD PTR [rip+0x18bf7ff]        # 0x1424f9d18
0x00c3a519: sub    r10,rbx
0x00c3a51c: sar    r10,0x3
0x00c3a520: test   r10,r10
0x00c3a523: je     0x140c3a561
0x00c3a525: xor    r8d,r8d
0x00c3a528: sub    r10d,0x1
0x00c3a52c: js     0x140c3a561
0x00c3a52e: xchg   ax,ax
0x00c3a530: lea    eax,[r10+r8*1]
0x00c3a534: sar    eax,1
0x00c3a536: movsxd rcx,eax
0x00c3a539: mov    rdx,QWORD PTR [rbx+rcx*8]
0x00c3a53d: mov    r9d,DWORD PTR [rdx+0xe0]
0x00c3a544: cmp    r9d,r11d
0x00c3a547: je     0x140c3a563
0x00c3a549: lea    ecx,[rax-0x1]
0x00c3a54c: cmovle ecx,r10d
0x00c3a550: inc    eax
0x00c3a552: cmp    r9d,r11d
0x00c3a555: mov    r10d,ecx
0x00c3a558: cmovle r8d,eax
0x00c3a55c: cmp    r8d,ecx
0x00c3a55f: jle    0x140c3a530
0x00c3a561: xor    edx,edx
0x00c3a563: mov    rbx,QWORD PTR [rsp+0x10]
0x00c3a568: test   rdx,rdx
0x00c3a56b: je     0x140c3a582
0x00c3a56d: cmp    BYTE PTR [rdx+0xaa],0x0
0x00c3a574: lea    rcx,[rdx+0x38]
0x00c3a578: lea    rax,[rdi+0x8]
0x00c3a57c: cmovne rax,rcx
0x00c3a580: pop    rdi
0x00c3a581: ret
0x00c3a582: lea    rax,[rdi+0x8]
0x00c3a586: pop    rdi
0x00c3a587: ret
