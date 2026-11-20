0x140ec00e7: mov    BYTE PTR [rsp+0xb0],0x1
0x140ec00ef: call   QWORD PTR [rax]
0x140ec00f1: cmp    ax,0x4
0x140ec00f5: jne    0x140ec0398
0x140ec00fb: mov    r15,QWORD PTR [rsi+0x98]
0x140ec0102: mov    rax,QWORD PTR [r15]
0x140ec0105: mov    rcx,r15
0x140ec0108: call   QWORD PTR [rax+0x38]
0x140ec010b: movzx  ebx,ax
0x140ec010e: mov    WORD PTR [rsp+0xc0],ax
0x140ec0116: mov    rcx,QWORD PTR [rsi+0x98]
0x140ec011d: mov    rdx,QWORD PTR [rcx]
0x140ec0120: call   QWORD PTR [rdx+0x40]
0x140ec0123: mov    DWORD PTR [rsp+0xc8],eax
0x140ec012a: mov    r8d,eax
0x140ec012d: movzx  edx,bx
0x140ec0130: lea    rcx,[rip+0x1533839]        # 0x1423f3970
0x140ec0137: call   0x1414c6fe0
0x140ec013c: mov    r13,rax
0x140ec013f: mov    QWORD PTR [rsp+0x58],0xa
0x140ec0148: xor    ebp,ebp
0x140ec014a: mov    r12d,0x1
0x140ec0150: mov    ecx,0xc8
0x140ec0155: call   0x1415530e0
0x140ec015a: mov    rdi,rax
0x140ec015d: mov    QWORD PTR [rsp+0x50],rax
0x140ec0162: xor    edx,edx
0x140ec0164: mov    rcx,rax
0x140ec0167: call   0x1400fddc0
0x140ec016c: lea    rax,[rip+0x853aed]        # 0x141713c60
0x140ec0173: mov    QWORD PTR [rdi],rax
0x140ec0176: mov    QWORD PTR [rdi+0xbc],rbp
0x140ec017d: mov    DWORD PTR [rdi+0xc4],ebp
0x140ec0183: mov    WORD PTR [rdi+0xb8],bx
0x140ec018a: mov    eax,DWORD PTR [rsp+0xc8]
0x140ec0191: mov    DWORD PTR [rdi+0xbc],eax
0x140ec0197: mov    DWORD PTR [rdi+0x80],r12d
0x140ec019e: movzx  eax,WORD PTR [r15+0xa0]
0x140ec01a6: mov    WORD PTR [rdi+0xa0],ax
0x140ec01ad: movzx  eax,WORD PTR [r15+0xa2]
0x140ec01b5: mov    WORD PTR [rdi+0xa2],ax
0x140ec01bc: test   r13,r13
0x140ec01bf: je     0x140ec01ca
0x140ec01c1: mov    eax,DWORD PTR [r13+0x284]
0x140ec01c8: jmp    0x140ec01cd
0x140ec01ca: mov    eax,r12d
0x140ec01cd: mov    DWORD PTR [rdi+0xc0],eax
0x140ec01d3: mov    rax,QWORD PTR [rdi]
0x140ec01d6: mov    dl,0x1
0x140ec01d8: mov    rcx,rdi
0x140ec01db: call   QWORD PTR [rax+0x328]
0x140ec01e1: mov    ecx,0xa0
0x140ec01e6: call   0x1415530e0
0x140ec01eb: mov    rbx,rax
0x140ec01ee: mov    QWORD PTR [rsp+0x60],rax
0x140ec01f3: xor    edx,edx
0x140ec01f5: mov    rcx,rax
0x140ec01f8: call   0x140ebf110
0x140ec01fd: lea    rax,[rip+0x7b821c]        # 0x141678420
0x140ec0204: mov    QWORD PTR [rbx],rax
0x140ec0207: movzx  ecx,WORD PTR [rsi+0x2c]
0x140ec020b: mov    WORD PTR [rbx+0x20],cx
0x140ec020f: movzx  ecx,WORD PTR [rsi+0x2e]
0x140ec0213: mov    WORD PTR [rbx+0x22],cx
0x140ec0217: movzx  ecx,WORD PTR [rsi+0x30]
0x140ec021b: mov    WORD PTR [rbx+0x24],cx
0x140ec021f: movzx  eax,WORD PTR [rsi+0x2c]
0x140ec0223: mov    WORD PTR [rbx+0x32],ax
0x140ec0227: movzx  eax,WORD PTR [rsi+0x2e]
0x140ec022b: mov    WORD PTR [rbx+0x34],ax
0x140ec022f: movzx  eax,WORD PTR [rsi+0x30]
0x140ec0233: mov    WORD PTR [rbx+0x36],ax
0x140ec0237: call   0x140ece790
0x140ec023c: mov    r8d,eax
0x140ec023f: mov    eax,0x3
0x140ec0244: mul    r8d
0x140ec0247: mov    ecx,r8d
0x140ec024a: sub    ecx,edx
0x140ec024c: shr    ecx,1
0x140ec024e: add    ecx,edx
0x140ec0250: shr    ecx,0x1e
0x140ec0253: imul   ecx,ecx,0x7fffffff
0x140ec0259: sub    r8d,ecx
0x140ec025c: mov    eax,0xeffffff3
0x140ec0261: mul    r8d
0x140ec0264: shr    edx,0x1b
0x140ec0267: sub    dx,0x7
0x140ec026b: add    dx,WORD PTR [rsi+0x2c]
0x140ec026f: mov    WORD PTR [rbx+0x26],dx
0x140ec0273: call   0x140ece790
0x140ec0278: mov    r8d,eax
0x140ec027b: mov    eax,0x3
0x140ec0280: mul    r8d
0x140ec0283: mov    ecx,r8d
0x140ec0286: sub    ecx,edx
0x140ec0288: shr    ecx,1
0x140ec028a: add    ecx,edx
0x140ec028c: shr    ecx,0x1e
0x140ec028f: imul   ecx,ecx,0x7fffffff
0x140ec0295: sub    r8d,ecx
0x140ec0298: mov    eax,0xeffffff3
0x140ec029d: mul    r8d
0x140ec02a0: shr    edx,0x1b
0x140ec02a3: sub    dx,0x7
0x140ec02a7: add    dx,WORD PTR [rsi+0x2e]
0x140ec02ab: mov    WORD PTR [rbx+0x28],dx
0x140ec02af: movzx  eax,WORD PTR [rsi+0x30]
0x140ec02b3: mov    WORD PTR [rbx+0x2a],ax
0x140ec02b7: movzx  eax,WORD PTR [rsi+0x2c]
0x140ec02bb: cmp    WORD PTR [rbx+0x26],ax
0x140ec02bf: jne    0x140ec02cb
0x140ec02c1: cmp    dx,WORD PTR [rsi+0x2e]
0x140ec02c5: je     0x140ec0237
0x140ec02cb: mov    DWORD PTR [rbx+0x38],ebp
0x140ec02ce: mov    DWORD PTR [rbx+0x40],ebp
0x140ec02d1: mov    DWORD PTR [rbx+0x44],0xffffffff
0x140ec02d8: call   0x140ece790
0x140ec02dd: mov    r8d,eax
0x140ec02e0: mov    eax,0x3
0x140ec02e5: mul    r8d
0x140ec02e8: mov    ecx,r8d
0x140ec02eb: sub    ecx,edx
0x140ec02ed: shr    ecx,1
0x140ec02ef: add    ecx,edx
0x140ec02f1: shr    ecx,0x1e
0x140ec02f4: imul   ecx,ecx,0x7fffffff
0x140ec02fa: sub    r8d,ecx
0x140ec02fd: mov    eax,0x4fffffff
0x140ec0302: mul    r8d
0x140ec0305: shr    edx,0x1a
0x140ec0308: add    edx,0x2
0x140ec030b: mov    DWORD PTR [rbx+0x3c],edx
0x140ec030e: movzx  ecx,WORD PTR [rbx+0x20]
0x140ec0312: mov    WORD PTR [rbx+0x2c],cx
0x140ec0316: movzx  eax,WORD PTR [rbx+0x22]
0x140ec031a: mov    WORD PTR [rbx+0x2e],ax
0x140ec031e: movzx  eax,WORD PTR [rbx+0x24]
0x140ec0322: mov    WORD PTR [rbx+0x30],ax
0x140ec0326: mov    QWORD PTR [rbx+0x98],rdi
0x140ec032d: mov    WORD PTR [rdi+0x8],cx
0x140ec0331: mov    rcx,QWORD PTR [rbx+0x98]
0x140ec0338: movzx  eax,WORD PTR [rbx+0x2e]
0x140ec033c: mov    WORD PTR [rcx+0xa],ax
0x140ec0340: mov    rcx,QWORD PTR [rbx+0x98]
0x140ec0347: movzx  eax,WORD PTR [rbx+0x30]
0x140ec034b: mov    WORD PTR [rcx+0xc],ax
0x140ec034f: mov    r8d,DWORD PTR [rbx+0x10]
0x140ec0353: mov    edx,0xc
0x140ec0358: mov    rcx,QWORD PTR [rbx+0x98]
0x140ec035f: call   0x140073c90
0x140ec0364: mov    QWORD PTR [rbx+0x18],rbp
0x140ec0368: mov    DWORD PTR [rbx+0x4c],ebp
0x140ec036b: mov    DWORD PTR [rbx+0x58],0x12c
0x140ec0372: mov    DWORD PTR [rbx+0x50],0x1f4
0x140ec0379: mov    rcx,QWORD PTR [rsi+0x98]
0x140ec0380: or     DWORD PTR [rcx+0x10],0x2
0x140ec0384: sub    QWORD PTR [rsp+0x58],0x1
0x140ec038a: movzx  ebx,WORD PTR [rsp+0xc0]
0x140ec0392: jne    0x140ec0150
