# classic PE:6a70b91c:0270a000; reagent-choice; RVA 0x27dd60..0x27df15
0x0027dd60: mov    QWORD PTR [rsp+0x20],rbx
0x0027dd65: push   rdi
0x0027dd66: push   r14
0x0027dd68: push   r15
0x0027dd6a: sub    rsp,0x20
0x0027dd6e: lea    r14,[rcx+0xd0]
0x0027dd75: mov    QWORD PTR [rsp+0x50],rsi
0x0027dd7a: mov    rbx,QWORD PTR [r14]
0x0027dd7d: mov    r15,rcx
0x0027dd80: mov    rdi,QWORD PTR [r14+0x8]
0x0027dd84: cmp    rbx,rdi
0x0027dd87: jae    0x14027ddac
0x0027dd89: mov    rsi,QWORD PTR [rbx]
0x0027dd8c: test   rsi,rsi
0x0027dd8f: je     0x14027dda6
0x0027dd91: mov    rcx,rsi
0x0027dd94: call   0x14006f7e0
0x0027dd99: mov    edx,0x30 ; inline_fragment="0"
0x0027dd9e: mov    rcx,rsi
0x0027dda1: call   0x1415345f0
0x0027dda6: add    rbx,0x8
0x0027ddaa: jmp    0x14027dd84
0x0027ddac: mov    rax,QWORD PTR [r14]
0x0027ddaf: cmp    rax,QWORD PTR [r14+0x8]
0x0027ddb3: je     0x14027ddb9
0x0027ddb5: mov    QWORD PTR [r14+0x8],rax
0x0027ddb9: mov    rax,QWORD PTR [r15+0xc0]
0x0027ddc0: mov    DWORD PTR [r15+0xe8],0xffffffff
0x0027ddcb: mov    r8,QWORD PTR [rax+0x70]
0x0027ddcf: sub    r8,QWORD PTR [rax+0x68]
0x0027ddd3: sar    r8,0x3
0x0027ddd7: test   r8,r8
0x0027ddda: je     0x14027defa
0x0027dde0: mov    r9,QWORD PTR [r14+0x8]
0x0027dde4: mov    rdx,QWORD PTR [r14]
0x0027dde7: mov    rcx,r9
0x0027ddea: sub    rcx,rdx
0x0027dded: sar    rcx,0x3
0x0027ddf1: cmp    r8,rcx
0x0027ddf4: jae    0x14027de00
0x0027ddf6: lea    rax,[rdx+r8*8]
0x0027ddfa: mov    QWORD PTR [r14+0x8],rax
0x0027ddfe: jmp    0x14027de3c
0x0027de00: jbe    0x14027de3c
0x0027de02: mov    rax,QWORD PTR [r14+0x10]
0x0027de06: sub    rax,rdx
0x0027de09: sar    rax,0x3
0x0027de0d: cmp    r8,rax
0x0027de10: jbe    0x14027de1f
0x0027de12: mov    rdx,r8
0x0027de15: mov    rcx,r14
0x0027de18: call   0x1401fa0a0
0x0027de1d: jmp    0x14027de3c
0x0027de1f: sub    r8,rcx
0x0027de22: xor    edx,edx
0x0027de24: mov    rcx,r9
0x0027de27: lea    r8,[r8*8+0x0]
0x0027de2f: lea    rbx,[r8+r9*1]
0x0027de33: call   0x141535a06
0x0027de38: mov    QWORD PTR [r14+0x8],rbx
0x0027de3c: mov    rbx,QWORD PTR [r14]
0x0027de3f: mov    rdi,QWORD PTR [r14+0x8]
0x0027de43: xor    r14d,r14d
0x0027de46: mov    esi,r14d
0x0027de49: mov    QWORD PTR [rsp+0x48],rbp
0x0027de4e: xchg   ax,ax
0x0027de50: cmp    rbx,rdi
0x0027de53: jae    0x14027def5
0x0027de59: mov    QWORD PTR [rbx],r14
0x0027de5c: mov    rax,QWORD PTR [r15+0xc0]
0x0027de63: mov    rax,QWORD PTR [rax+0x68]
0x0027de67: mov    rcx,QWORD PTR [rsi+rax*1]
0x0027de6b: mov    rax,QWORD PTR [rcx]
0x0027de6e: call   QWORD PTR [rax]
0x0027de70: test   eax,eax
0x0027de72: jne    0x14027dee8
0x0027de74: mov    rax,QWORD PTR [r15+0xc0]
0x0027de7b: mov    rax,QWORD PTR [rax+0x68]
0x0027de7f: mov    rbp,QWORD PTR [rsi+rax*1]
0x0027de83: movzx  eax,WORD PTR [rbp+0x48]
0x0027de87: cmp    ax,0x16
0x0027de8b: je     0x14027de93
0x0027de8d: cmp    ax,0x24
0x0027de91: jne    0x14027dee8
0x0027de93: mov    ecx,0x30 ; inline_fragment="0"
0x0027de98: call   0x141534600
0x0027de9d: xorps  xmm0,xmm0
0x0027dea0: mov    QWORD PTR [rsp+0x40],rax
0x0027dea5: lea    rdx,[rbp+0x8]
0x0027dea9: movups XMMWORD PTR [rax],xmm0
0x0027deac: mov    QWORD PTR [rax+0x10],r14
0x0027deb0: mov    QWORD PTR [rax+0x18],0xf
0x0027deb8: mov    BYTE PTR [rax],r14b
0x0027debb: mov    QWORD PTR [rax+0x20],0xffffffffffffffff
0x0027dec3: mov    DWORD PTR [rax+0x28],0xffffffff
0x0027deca: mov    QWORD PTR [rbx],rax
0x0027decd: cmp    rax,rdx
0x0027ded0: je     0x14027dee8
0x0027ded2: cmp    QWORD PTR [rdx+0x18],0xf
0x0027ded7: mov    r8,QWORD PTR [rdx+0x10]
0x0027dedb: jbe    0x14027dee0
0x0027dedd: mov    rdx,QWORD PTR [rdx]
0x0027dee0: mov    rcx,rax
0x0027dee3: call   0x14006f860
0x0027dee8: add    rbx,0x8
0x0027deec: add    rsi,0x8
0x0027def0: jmp    0x14027de50
0x0027def5: mov    rbp,QWORD PTR [rsp+0x48]
0x0027defa: mov    rcx,r15
0x0027defd: mov    rsi,QWORD PTR [rsp+0x50]
0x0027df02: mov    rbx,QWORD PTR [rsp+0x58]
0x0027df07: add    rsp,0x20
0x0027df0b: pop    r15
0x0027df0d: pop    r14
0x0027df0f: pop    rdi
0x0027df10: jmp    0x14027df20
