# steam PE:6a70a6d9:02711000; reaction-start; RVA 0x280360..0x2804a8
0x00280360: mov    QWORD PTR [rsp+0x8],rbx
0x00280365: push   rdi
0x00280366: sub    rsp,0x70
0x0028036a: mov    r9,QWORD PTR [rip+0x2164d9f]        # 0x1423e5110
0x00280371: lea    rdi,[rcx+0xec]
0x00280378: test   BYTE PTR [rdi],0x1
0x0028037b: mov    rbx,rcx
0x0028037e: je     0x14028039f
0x00280380: mov    DWORD PTR [rcx+0x4],0x5
0x00280387: mov    DWORD PTR [rcx+0xe8],0xffffffff
0x00280391: mov    rbx,QWORD PTR [rsp+0x80]
0x00280399: add    rsp,0x70
0x0028039d: pop    rdi
0x0028039e: ret
0x0028039f: mov    edx,DWORD PTR [rcx+0xe8]
0x002803a5: inc    edx
0x002803a7: mov    DWORD PTR [rcx+0xe8],edx
0x002803ad: mov    r8,QWORD PTR [rcx+0xd0]
0x002803b4: mov    rcx,QWORD PTR [rcx+0xd8]
0x002803bb: sub    rcx,r8
0x002803be: movsxd rax,edx
0x002803c1: sar    rcx,0x3
0x002803c5: cmp    rax,rcx
0x002803c8: jae    0x1402803f8
0x002803ca: nop    WORD PTR [rax+rax*1+0x0]
0x002803d0: movsxd rax,edx
0x002803d3: cmp    QWORD PTR [r8+rax*8],0x0
0x002803d8: jne    0x140280417
0x002803da: inc    edx
0x002803dc: mov    DWORD PTR [rbx+0xe8],edx
0x002803e2: mov    rcx,QWORD PTR [rbx+0xd8]
0x002803e9: sub    rcx,r8
0x002803ec: movsxd rax,edx
0x002803ef: sar    rcx,0x3
0x002803f3: cmp    rax,rcx
0x002803f6: jb     0x1402803d0
0x002803f8: mov    DWORD PTR [rbx+0xe8],0xffffffff
0x00280402: mov    DWORD PTR [rbx+0x4],0x5
0x00280409: mov    rbx,QWORD PTR [rsp+0x80]
0x00280411: add    rsp,0x70
0x00280415: pop    rdi
0x00280416: ret
0x00280417: mov    edx,DWORD PTR [r9+0xc30]
0x0028041e: lea    r8,[r9+0x1274]
0x00280425: lea    rcx,[rip+0x227988c]        # 0x1424f9cb8
0x0028042c: call   0x140b530b0
0x00280431: mov    rdx,rax
0x00280434: test   rax,rax
0x00280437: je     0x1402803f8
0x00280439: movsxd rcx,DWORD PTR [rbx+0xe8]
0x00280440: lea    r8,[rsp+0x20]
0x00280445: mov    DWORD PTR [rbx+0x4],0x4
0x0028044c: xorps  xmm0,xmm0
0x0028044f: mov    rax,QWORD PTR [rbx+0xd0]
0x00280456: xorps  xmm1,xmm1
0x00280459: mov    QWORD PTR [rsp+0x50],rdx
0x0028045e: mov    edx,0x4
0x00280463: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x00280469: movdqa XMMWORD PTR [rsp+0x30],xmm1
0x0028046f: mov    rcx,QWORD PTR [rax+rcx*8]
0x00280473: mov    QWORD PTR [rsp+0x48],rcx
0x00280478: lea    rcx,[rip+0x1622ac9]        # 0x1418a2f48
0x0028047f: mov    QWORD PTR [rsp+0x40],0x0
0x00280488: mov    QWORD PTR [rsp+0x58],rdi
0x0028048d: mov    DWORD PTR [rsp+0x60],0x1
0x00280495: call   0x1401ffae0
0x0028049a: mov    rbx,QWORD PTR [rsp+0x80]
0x002804a2: add    rsp,0x70
0x002804a6: pop    rdi
0x002804a7: ret
