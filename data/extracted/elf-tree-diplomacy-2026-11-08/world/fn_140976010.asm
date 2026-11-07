140976010: test   rdx,rdx
140976013: je     0x1409761c5
140976019: push   rbp
14097601a: push   rsi
14097601b: push   r12
14097601d: push   r13
14097601f: sub    rsp,0x28
140976023: mov    r12,r9
140976026: mov    rsi,r8
140976029: mov    rbp,rdx
14097602c: mov    r13,rcx
14097602f: test   r8,r8
140976032: je     0x1409761bb
140976038: movzx  eax,WORD PTR [r8+0x4]
14097603d: mov    ecx,0xfffb
140976042: dec    ax
140976045: test   cx,ax
140976048: je     0x1409761bb
14097604e: mov    QWORD PTR [rsp+0x50],rbx
140976053: mov    QWORD PTR [rsp+0x58],rdi
140976058: mov    QWORD PTR [rsp+0x60],r14
14097605d: mov    QWORD PTR [rsp+0x20],r15
140976062: call   0x1408f6410
140976067: mov    rcx,rax
14097606a: mov    rdi,rax
14097606d: mov    rdx,QWORD PTR [rax]
140976070: call   QWORD PTR [rdx+0x20]
140976073: mov    rdx,QWORD PTR [rdi+0xe0]
14097607a: lea    rcx,[rdi+0xd8]
140976081: cmp    rdx,QWORD PTR [rdi+0xe8]
140976088: je     0x14097609a
14097608a: mov    eax,DWORD PTR [r13+0x4]
14097608e: mov    DWORD PTR [rdx],eax
140976090: add    QWORD PTR [rdi+0xe0],0x4
140976098: jmp    0x1409760a3
14097609a: lea    r8,[r13+0x4]
14097609e: call   0x140070e20
1409760a3: mov    rdx,QWORD PTR [rdi+0xf8]
1409760aa: lea    rcx,[rdi+0xf0]
1409760b1: cmp    rdx,QWORD PTR [rdi+0x100]
1409760b8: je     0x1409760c9
1409760ba: mov    eax,DWORD PTR [rbp+0x4]
1409760bd: mov    DWORD PTR [rdx],eax
1409760bf: add    QWORD PTR [rdi+0xf8],0x4
1409760c7: jmp    0x1409760d2
1409760c9: lea    r8,[rbp+0x4]
1409760cd: call   0x140070e20
1409760d2: mov    ecx,DWORD PTR [r13+0x4]
1409760d6: lea    rdx,[rdi+0x108]
1409760dd: call   0x1400b9e70
1409760e2: mov    ecx,DWORD PTR [rbp+0x4]
1409760e5: lea    rdx,[rdi+0x108]
1409760ec: call   0x1400b9e70
1409760f1: mov    r14,QWORD PTR [rsp+0x60]
1409760f6: test   r12,r12
1409760f9: je     0x14097610a
1409760fb: lea    rcx,[rdi+0x120]
140976102: mov    rdx,r12
140976105: call   0x140975e30
14097610a: mov    r8d,0x1d
140976110: lea    rdx,[rdi+0x60]
140976114: mov    rcx,r13
140976117: call   0x140931860
14097611c: mov    eax,DWORD PTR [rip+0x19fe5d2]        # 0x1423746f4
140976122: mov    DWORD PTR [rdi+0x38],eax
140976125: mov    eax,DWORD PTR [rip+0x1a11e99]        # 0x142387fc4
14097612b: mov    DWORD PTR [rdi+0x40],eax
14097612e: call   0x140eb68b0
140976133: mov    r8d,eax
140976136: mov    eax,0x3
14097613b: mul    r8d
14097613e: mov    ecx,r8d
140976141: sub    ecx,edx
140976143: shr    ecx,1
140976145: add    ecx,edx
140976147: shr    ecx,0x1e
14097614a: imul   ecx,ecx,0x7fffffff
140976150: sub    r8d,ecx
140976153: cmp    r8d,0x1999999a
14097615a: jae    0x140976176
14097615c: cmp    DWORD PTR [r13+0x1d3c],0x64
140976164: jl     0x14097616f
140976166: cmp    DWORD PTR [rbp+0x1d3c],0x64
14097616d: jge    0x140976176
14097616f: mov    ebx,0x1
140976174: jmp    0x14097617b
140976176: mov    ebx,0x5
14097617b: mov    WORD PTR [rsi+0x4],bx
14097617f: lea    rcx,[rbp+0x1028]
140976186: mov    eax,DWORD PTR [rdi+0x58]
140976189: and    DWORD PTR [rsi+0x40],0xfffffffb
14097618d: mov    DWORD PTR [rsi+0x8],eax
140976190: mov    edx,DWORD PTR [r13+0x4]
140976194: call   0x1400ff950
140976199: mov    r15,QWORD PTR [rsp+0x20]
14097619e: test   rax,rax
1409761a1: je     0x1409761b1
1409761a3: mov    WORD PTR [rax+0x4],bx
1409761a7: mov    ecx,DWORD PTR [rdi+0x58]
1409761aa: and    DWORD PTR [rax+0x40],0xfffffffb
1409761ae: mov    DWORD PTR [rax+0x8],ecx
1409761b1: mov    rbx,QWORD PTR [rsp+0x50]
1409761b6: mov    rdi,QWORD PTR [rsp+0x58]
1409761bb: add    rsp,0x28
1409761bf: pop    r13
1409761c1: pop    r12
1409761c3: pop    rsi
1409761c4: pop    rbp
1409761c5: ret