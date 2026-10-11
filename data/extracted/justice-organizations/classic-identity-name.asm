# classic PE:6a70b91c:0270a000; identity-name; RVA 0xc37530..0xc375c8
0x00c37530: rex push rdi
0x00c37532: mov    r11d,DWORD PTR [rcx+0x88]
0x00c37539: mov    rdi,rcx
0x00c3753c: cmp    r11d,0xffffffff
0x00c37540: je     0x140c375c2
0x00c37546: mov    r10,QWORD PTR [rip+0x18bc6c3]        # 0x1424f3c10
0x00c3754d: mov    QWORD PTR [rsp+0x10],rbx
0x00c37552: mov    rbx,QWORD PTR [rip+0x18bc6af]        # 0x1424f3c08
0x00c37559: sub    r10,rbx
0x00c3755c: sar    r10,0x3
0x00c37560: test   r10,r10
0x00c37563: je     0x140c375a1
0x00c37565: xor    r8d,r8d
0x00c37568: sub    r10d,0x1
0x00c3756c: js     0x140c375a1
0x00c3756e: xchg   ax,ax
0x00c37570: lea    eax,[r10+r8*1]
0x00c37574: sar    eax,1
0x00c37576: movsxd rcx,eax
0x00c37579: mov    rdx,QWORD PTR [rbx+rcx*8]
0x00c3757d: mov    r9d,DWORD PTR [rdx+0xe0]
0x00c37584: cmp    r9d,r11d
0x00c37587: je     0x140c375a3
0x00c37589: lea    ecx,[rax-0x1]
0x00c3758c: cmovle ecx,r10d
0x00c37590: inc    eax
0x00c37592: cmp    r9d,r11d
0x00c37595: mov    r10d,ecx
0x00c37598: cmovle r8d,eax
0x00c3759c: cmp    r8d,ecx
0x00c3759f: jle    0x140c37570
0x00c375a1: xor    edx,edx
0x00c375a3: mov    rbx,QWORD PTR [rsp+0x10]
0x00c375a8: test   rdx,rdx
0x00c375ab: je     0x140c375c2
0x00c375ad: cmp    BYTE PTR [rdx+0xaa],0x0
0x00c375b4: lea    rcx,[rdx+0x38]
0x00c375b8: lea    rax,[rdi+0x8]
0x00c375bc: cmovne rax,rcx
0x00c375c0: pop    rdi
0x00c375c1: ret
0x00c375c2: lea    rax,[rdi+0x8]
0x00c375c6: pop    rdi
0x00c375c7: ret
