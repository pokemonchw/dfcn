# classic PE:6a70b91c:0270a000; reaction-start; RVA 0x27df20..0x27e068
0x0027df20: mov    QWORD PTR [rsp+0x8],rbx
0x0027df25: push   rdi
0x0027df26: sub    rsp,0x70
0x0027df2a: mov    r9,QWORD PTR [rip+0x21610cf]        # 0x1423df000
0x0027df31: lea    rdi,[rcx+0xec]
0x0027df38: test   BYTE PTR [rdi],0x1
0x0027df3b: mov    rbx,rcx
0x0027df3e: je     0x14027df5f
0x0027df40: mov    DWORD PTR [rcx+0x4],0x5
0x0027df47: mov    DWORD PTR [rcx+0xe8],0xffffffff
0x0027df51: mov    rbx,QWORD PTR [rsp+0x80]
0x0027df59: add    rsp,0x70
0x0027df5d: pop    rdi
0x0027df5e: ret
0x0027df5f: mov    edx,DWORD PTR [rcx+0xe8]
0x0027df65: inc    edx
0x0027df67: mov    DWORD PTR [rcx+0xe8],edx
0x0027df6d: mov    r8,QWORD PTR [rcx+0xd0]
0x0027df74: mov    rcx,QWORD PTR [rcx+0xd8]
0x0027df7b: sub    rcx,r8
0x0027df7e: movsxd rax,edx
0x0027df81: sar    rcx,0x3
0x0027df85: cmp    rax,rcx
0x0027df88: jae    0x14027dfb8
0x0027df8a: nop    WORD PTR [rax+rax*1+0x0]
0x0027df90: movsxd rax,edx
0x0027df93: cmp    QWORD PTR [r8+rax*8],0x0
0x0027df98: jne    0x14027dfd7
0x0027df9a: inc    edx
0x0027df9c: mov    DWORD PTR [rbx+0xe8],edx
0x0027dfa2: mov    rcx,QWORD PTR [rbx+0xd8]
0x0027dfa9: sub    rcx,r8
0x0027dfac: movsxd rax,edx
0x0027dfaf: sar    rcx,0x3
0x0027dfb3: cmp    rax,rcx
0x0027dfb6: jb     0x14027df90
0x0027dfb8: mov    DWORD PTR [rbx+0xe8],0xffffffff
0x0027dfc2: mov    DWORD PTR [rbx+0x4],0x5
0x0027dfc9: mov    rbx,QWORD PTR [rsp+0x80]
0x0027dfd1: add    rsp,0x70
0x0027dfd5: pop    rdi
0x0027dfd6: ret
0x0027dfd7: mov    edx,DWORD PTR [r9+0xc30]
0x0027dfde: lea    r8,[r9+0x1274]
0x0027dfe5: lea    rcx,[rip+0x2275bbc]        # 0x1424f3ba8
0x0027dfec: call   0x140b500f0
0x0027dff1: mov    rdx,rax
0x0027dff4: test   rax,rax
0x0027dff7: je     0x14027dfb8
0x0027dff9: movsxd rcx,DWORD PTR [rbx+0xe8]
0x0027e000: lea    r8,[rsp+0x20]
0x0027e005: mov    DWORD PTR [rbx+0x4],0x4
0x0027e00c: xorps  xmm0,xmm0
0x0027e00f: mov    rax,QWORD PTR [rbx+0xd0]
0x0027e016: xorps  xmm1,xmm1
0x0027e019: mov    QWORD PTR [rsp+0x50],rdx
0x0027e01e: mov    edx,0x4
0x0027e023: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x0027e029: movdqa XMMWORD PTR [rsp+0x30],xmm1
0x0027e02f: mov    rcx,QWORD PTR [rax+rcx*8]
0x0027e033: mov    QWORD PTR [rsp+0x48],rcx
0x0027e038: lea    rcx,[rip+0x161eed9]        # 0x14189cf18
0x0027e03f: mov    QWORD PTR [rsp+0x40],0x0
0x0027e048: mov    QWORD PTR [rsp+0x58],rdi
0x0027e04d: mov    DWORD PTR [rsp+0x60],0x1
0x0027e055: call   0x1401ffa70
0x0027e05a: mov    rbx,QWORD PTR [rsp+0x80]
0x0027e062: add    rsp,0x70
0x0027e066: pop    rdi
0x0027e067: ret
