# steam PE:6a70a6d9:02711000; reagent-choice; RVA 0x2801a0..0x280355
0x002801a0: mov    QWORD PTR [rsp+0x20],rbx
0x002801a5: push   rdi
0x002801a6: push   r14
0x002801a8: push   r15
0x002801aa: sub    rsp,0x20
0x002801ae: lea    r14,[rcx+0xd0]
0x002801b5: mov    QWORD PTR [rsp+0x50],rsi
0x002801ba: mov    rbx,QWORD PTR [r14]
0x002801bd: mov    r15,rcx
0x002801c0: mov    rdi,QWORD PTR [r14+0x8]
0x002801c4: cmp    rbx,rdi
0x002801c7: jae    0x1402801ec
0x002801c9: mov    rsi,QWORD PTR [rbx]
0x002801cc: test   rsi,rsi
0x002801cf: je     0x1402801e6
0x002801d1: mov    rcx,rsi
0x002801d4: call   0x14006f850
0x002801d9: mov    edx,0x30 ; inline_fragment="0"
0x002801de: mov    rcx,rsi
0x002801e1: call   0x141539680
0x002801e6: add    rbx,0x8
0x002801ea: jmp    0x1402801c4
0x002801ec: mov    rax,QWORD PTR [r14]
0x002801ef: cmp    rax,QWORD PTR [r14+0x8]
0x002801f3: je     0x1402801f9
0x002801f5: mov    QWORD PTR [r14+0x8],rax
0x002801f9: mov    rax,QWORD PTR [r15+0xc0]
0x00280200: mov    DWORD PTR [r15+0xe8],0xffffffff
0x0028020b: mov    r8,QWORD PTR [rax+0x70]
0x0028020f: sub    r8,QWORD PTR [rax+0x68]
0x00280213: sar    r8,0x3
0x00280217: test   r8,r8
0x0028021a: je     0x14028033a
0x00280220: mov    r9,QWORD PTR [r14+0x8]
0x00280224: mov    rdx,QWORD PTR [r14]
0x00280227: mov    rcx,r9
0x0028022a: sub    rcx,rdx
0x0028022d: sar    rcx,0x3
0x00280231: cmp    r8,rcx
0x00280234: jae    0x140280240
0x00280236: lea    rax,[rdx+r8*8]
0x0028023a: mov    QWORD PTR [r14+0x8],rax
0x0028023e: jmp    0x14028027c
0x00280240: jbe    0x14028027c
0x00280242: mov    rax,QWORD PTR [r14+0x10]
0x00280246: sub    rax,rdx
0x00280249: sar    rax,0x3
0x0028024d: cmp    r8,rax
0x00280250: jbe    0x14028025f
0x00280252: mov    rdx,r8
0x00280255: mov    rcx,r14
0x00280258: call   0x1401fa110
0x0028025d: jmp    0x14028027c
0x0028025f: sub    r8,rcx
0x00280262: xor    edx,edx
0x00280264: mov    rcx,r9
0x00280267: lea    r8,[r8*8+0x0]
0x0028026f: lea    rbx,[r8+r9*1]
0x00280273: call   0x14153aa96
0x00280278: mov    QWORD PTR [r14+0x8],rbx
0x0028027c: mov    rbx,QWORD PTR [r14]
0x0028027f: mov    rdi,QWORD PTR [r14+0x8]
0x00280283: xor    r14d,r14d
0x00280286: mov    esi,r14d
0x00280289: mov    QWORD PTR [rsp+0x48],rbp
0x0028028e: xchg   ax,ax
0x00280290: cmp    rbx,rdi
0x00280293: jae    0x140280335
0x00280299: mov    QWORD PTR [rbx],r14
0x0028029c: mov    rax,QWORD PTR [r15+0xc0]
0x002802a3: mov    rax,QWORD PTR [rax+0x68]
0x002802a7: mov    rcx,QWORD PTR [rsi+rax*1]
0x002802ab: mov    rax,QWORD PTR [rcx]
0x002802ae: call   QWORD PTR [rax]
0x002802b0: test   eax,eax
0x002802b2: jne    0x140280328
0x002802b4: mov    rax,QWORD PTR [r15+0xc0]
0x002802bb: mov    rax,QWORD PTR [rax+0x68]
0x002802bf: mov    rbp,QWORD PTR [rsi+rax*1]
0x002802c3: movzx  eax,WORD PTR [rbp+0x48]
0x002802c7: cmp    ax,0x16
0x002802cb: je     0x1402802d3
0x002802cd: cmp    ax,0x24
0x002802d1: jne    0x140280328
0x002802d3: mov    ecx,0x30 ; inline_fragment="0"
0x002802d8: call   0x141539690
0x002802dd: xorps  xmm0,xmm0
0x002802e0: mov    QWORD PTR [rsp+0x40],rax
0x002802e5: lea    rdx,[rbp+0x8]
0x002802e9: movups XMMWORD PTR [rax],xmm0
0x002802ec: mov    QWORD PTR [rax+0x10],r14
0x002802f0: mov    QWORD PTR [rax+0x18],0xf
0x002802f8: mov    BYTE PTR [rax],r14b
0x002802fb: mov    QWORD PTR [rax+0x20],0xffffffffffffffff
0x00280303: mov    DWORD PTR [rax+0x28],0xffffffff
0x0028030a: mov    QWORD PTR [rbx],rax
0x0028030d: cmp    rax,rdx
0x00280310: je     0x140280328
0x00280312: cmp    QWORD PTR [rdx+0x18],0xf
0x00280317: mov    r8,QWORD PTR [rdx+0x10]
0x0028031b: jbe    0x140280320
0x0028031d: mov    rdx,QWORD PTR [rdx]
0x00280320: mov    rcx,rax
0x00280323: call   0x14006f8d0
0x00280328: add    rbx,0x8
0x0028032c: add    rsi,0x8
0x00280330: jmp    0x140280290
0x00280335: mov    rbp,QWORD PTR [rsp+0x48]
0x0028033a: mov    rcx,r15
0x0028033d: mov    rsi,QWORD PTR [rsp+0x50]
0x00280342: mov    rbx,QWORD PTR [rsp+0x58]
0x00280347: add    rsp,0x20
0x0028034b: pop    r15
0x0028034d: pop    r14
0x0028034f: pop    rdi
0x00280350: jmp    0x140280360
