0x13797d0: mov    QWORD PTR [rsp+0x8],rbx
0x13797d5: mov    QWORD PTR [rsp+0x10],rbp
0x13797da: mov    QWORD PTR [rsp+0x18],rsi
0x13797df: mov    QWORD PTR [rsp+0x20],rdi
0x13797e4: mov    r10,QWORD PTR [rip+0x1195705]        # 0x14250eef0
0x13797eb: xor    ebp,ebp
0x13797ed: mov    ebx,0x1b58
0x13797f2: movzx  edi,dx
0x13797f5: mov    rdx,QWORD PTR [rip+0x11956ec]        # 0x14250eee8
0x13797fc: mov    esi,ebx
0x13797fe: test   r9w,r9w
0x1379802: js     0x14137982e
0x1379804: mov    r11,r10
0x1379807: movsx  eax,r9w
0x137980b: sub    r11,rdx
0x137980e: sar    r11,0x3
0x1379812: cmp    eax,r11d
0x1379815: jge    0x14137982e
0x1379817: movsx  rax,r9w
0x137981b: cmp    rax,r11
0x137981e: jae    0x14137982c
0x1379820: mov    rax,QWORD PTR [rdx+rax*8]
0x1379824: mov    esi,DWORD PTR [rax+0x144]
0x137982a: jmp    0x14137982e
0x137982c: mov    esi,ebp
0x137982e: test   r8w,r8w
0x1379832: js     0x14137985b
0x1379834: sub    r10,rdx
0x1379837: movsx  eax,r8w
0x137983b: sar    r10,0x3
0x137983f: cmp    eax,r10d
0x1379842: jge    0x14137985b
0x1379844: movsx  rax,r8w
0x1379848: cmp    rax,r10
0x137984b: jae    0x141379859
0x137984d: mov    rax,QWORD PTR [rdx+rax*8]
0x1379851: mov    ebx,DWORD PTR [rax+0x144]
0x1379857: jmp    0x14137985b
0x1379859: mov    ebx,ebp
0x137985b: movsx  eax,cx
0x137985e: add    eax,0xffffffe8
0x1379861: cmp    eax,0x24
0x1379864: ja     0x1413798b2
0x1379866: lea    rdx,[rip+0xfffffffffec86793]        # 0x140000000
0x137986d: cdqe
0x137986f: movzx  eax,BYTE PTR [rdx+rax*1+0x1379934]
0x1379877: mov    ecx,DWORD PTR [rdx+rax*4+0x1379928]
0x137987e: add    rcx,rdx
0x1379881: jmp    rcx
0x1379883: mov    r8,QWORD PTR [rip+0x119571e]        # 0x14250efa8
0x137988a: mov    rcx,QWORD PTR [rip+0x119571f]        # 0x14250efb0
0x1379891: sub    rcx,r8
0x1379894: sar    rcx,0x3
0x1379898: sub    ecx,0x1
0x137989b: js     0x1413798b2
0x137989d: movsxd rdx,ecx
0x13798a0: mov    rax,QWORD PTR [r8+rdx*8]
0x13798a4: cmp    WORD PTR [rax+0x28],di
0x13798a8: je     0x1413798c9
0x13798aa: dec    ecx
0x13798ac: sub    rdx,0x1
0x13798b0: jns    0x1413798a0
0x13798b2: xor    eax,eax
0x13798b4: mov    rbx,QWORD PTR [rsp+0x8]
0x13798b9: mov    rbp,QWORD PTR [rsp+0x10]
0x13798be: mov    rsi,QWORD PTR [rsp+0x18]
0x13798c3: mov    rdi,QWORD PTR [rsp+0x20]
0x13798c8: ret
0x13798c9: movsxd rax,ecx
0x13798cc: mov    rcx,QWORD PTR [r8+rax*8]
0x13798d0: test   rcx,rcx
0x13798d3: je     0x1413798b2
0x13798d5: cmp    esi,DWORD PTR [rcx+0xfc]
0x13798db: jl     0x1413798fb
0x13798dd: jmp    0x1413798b2
0x13798df: lea    ecx,[rbx+rbx*2]
0x13798e2: mov    eax,0x92492493
0x13798e7: add    ecx,ecx
0x13798e9: imul   ecx
0x13798eb: add    edx,ecx
0x13798ed: sar    edx,0x2
0x13798f0: mov    eax,edx
0x13798f2: shr    eax,0x1f
0x13798f5: add    edx,eax
0x13798f7: cmp    esi,edx
0x13798f9: jg     0x141379902
0x13798fb: mov    eax,0x2
0x1379900: jmp    0x1413798b4
0x1379902: lea    ecx,[rbx*8+0x0]
0x1379909: mov    eax,0x92492493
0x137990e: imul   ecx
0x1379910: add    edx,ecx
0x1379912: sar    edx,0x2
0x1379915: mov    ecx,edx
0x1379917: shr    ecx,0x1f
0x137991a: add    edx,ecx
0x137991c: cmp    esi,edx
0x137991e: setge  bpl
0x1379922: mov    eax,ebp
0x1379924: jmp    0x1413798b4
