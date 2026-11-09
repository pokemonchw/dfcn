140a464c0: mov    QWORD PTR [rsp+0x8],rbx
140a464c5: mov    QWORD PTR [rsp+0x10],rsi
140a464ca: push   rdi
140a464cb: sub    rsp,0x50
140a464cf: mov    rbx,rcx
140a464d2: xorps  xmm0,xmm0
140a464d5: movdqu XMMWORD PTR [rsp+0x30],xmm0
140a464db: xor    esi,esi
140a464dd: mov    QWORD PTR [rsp+0x40],rsi
140a464e2: mov    r8,rdx
140a464e5: lea    rdx,[rsp+0x30]
140a464ea: call   0x140a462c0
140a464ef: mov    rdi,QWORD PTR [rsp+0x38]
140a464f4: mov    rcx,QWORD PTR [rsp+0x30]
140a464f9: sub    rdi,rcx
140a464fc: sar    rdi,0x3
140a46500: test   rdi,rdi
140a46503: je     0x140a465ce
140a46509: cmp    edi,0x1
140a4650c: jbe    0x140a4654d
140a4650e: call   0x140eb68b0
140a46513: mov    r8d,eax
140a46516: mov    eax,0x3
140a4651b: mul    r8d
140a4651e: mov    eax,r8d
140a46521: sub    eax,edx
140a46523: shr    eax,1
140a46525: add    eax,edx
140a46527: shr    eax,0x1e
140a4652a: imul   eax,eax,0x80000001
140a46530: add    r8d,eax
140a46533: xor    edx,edx
140a46535: mov    eax,0x7fffffff
140a4653a: div    edi
140a4653c: lea    ecx,[rax+0x1]
140a4653f: xor    edx,edx
140a46541: mov    eax,r8d
140a46544: div    ecx
140a46546: mov    esi,eax
140a46548: mov    rcx,QWORD PTR [rsp+0x30]
140a4654d: cmp    WORD PTR [rbx+0xc],0x0
140a46552: jl     0x140a4655a
140a46554: mov    WORD PTR [rbx+0xc],0x12c
140a4655a: movsxd rax,esi
140a4655d: lea    rdi,[rax*8+0x0]
140a46565: mov    rcx,QWORD PTR [rdi+rcx*1]
140a46569: mov    rax,QWORD PTR [rcx]
140a4656c: call   QWORD PTR [rax]
140a4656e: cmp    ax,0x17
140a46572: je     0x140a4658b
140a46574: mov    rax,QWORD PTR [rsp+0x30]
140a46579: mov    rcx,QWORD PTR [rdi+rax*1]
140a4657d: mov    rax,QWORD PTR [rcx]
140a46580: mov    edx,0xffffffff
140a46585: call   QWORD PTR [rax+0x480]
140a4658b: mov    rax,QWORD PTR [rsp+0x30]
140a46590: mov    rcx,QWORD PTR [rdi+rax*1]
140a46594: mov    rax,QWORD PTR [rcx]
140a46597: call   QWORD PTR [rax+0x478]
140a4659d: test   eax,eax
140a4659f: jg     0x140a465c9
140a465a1: movzx  edx,WORD PTR [rbx+0x8]
140a465a5: mov    rax,QWORD PTR [rsp+0x30]
140a465aa: mov    BYTE PTR [rsp+0x28],0x1
140a465af: mov    WORD PTR [rsp+0x20],dx
140a465b4: movzx  r9d,WORD PTR [rbx+0x6]
140a465b9: movzx  r8d,WORD PTR [rbx+0x4]
140a465be: xor    edx,edx
140a465c0: mov    rcx,QWORD PTR [rdi+rax*1]
140a465c4: call   0x140ab52d0
140a465c9: mov    rcx,QWORD PTR [rsp+0x30]
140a465ce: test   rcx,rcx
140a465d1: je     0x140a4660c
140a465d3: mov    rdx,QWORD PTR [rsp+0x40]
140a465d8: sub    rdx,rcx
140a465db: and    rdx,0xfffffffffffffff8
140a465df: mov    rax,rcx
140a465e2: cmp    rdx,0x1000
140a465e9: jb     0x140a46607
140a465eb: add    rdx,0x27
140a465ef: mov    rcx,QWORD PTR [rcx-0x8]
140a465f3: sub    rax,rcx
140a465f6: add    rax,0xfffffffffffffff8
140a465fa: cmp    rax,0x1f
140a465fe: jbe    0x140a46607
140a46600: call   QWORD PTR [rip+0xb9f522]        # 0x1415e5b28
140a46606: int3
140a46607: call   0x141539680
140a4660c: mov    rbx,QWORD PTR [rsp+0x60]
140a46611: mov    rsi,QWORD PTR [rsp+0x68]
140a46616: add    rsp,0x50
140a4661a: pop    rdi
140a4661b: ret