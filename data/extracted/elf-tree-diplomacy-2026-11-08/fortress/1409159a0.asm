; Original current disk PE PE:6a70a6d9:02711000
0x1409159a0: mov    rax,rsp
0x1409159a3: mov    QWORD PTR [rax+0x8],rcx
0x1409159a7: push   r13
0x1409159a9: push   r14
0x1409159ab: sub    rsp,0x48
0x1409159af: test   BYTE PTR [rcx+0x9c],0x1
0x1409159b6: je     0x140915c19
0x1409159bc: mov    QWORD PTR [rax+0x18],rbx
0x1409159c0: mov    QWORD PTR [rax-0x18],rbp
0x1409159c4: mov    QWORD PTR [rax-0x20],rsi
0x1409159c8: mov    QWORD PTR [rax-0x28],rdi
0x1409159cc: mov    QWORD PTR [rax-0x30],r12
0x1409159d0: mov    QWORD PTR [rax-0x38],r15
0x1409159d4: lea    rax,[rcx+0x1028]
0x1409159db: xor    r15b,r15b
0x1409159de: mov    QWORD PTR [rsp+0x68],rax
0x1409159e3: xor    r14d,r14d
0x1409159e6: mov    r13,rax
0x1409159e9: mov    r12d,r14d
0x1409159ec: nop    DWORD PTR [rax+0x0]
0x1409159f0: mov    ecx,DWORD PTR [rip+0x1a7dc7a]        # 0x142393670
0x1409159f6: mov    rdx,r13
0x1409159f9: test   r12d,r12d
0x1409159fc: je     0x140915a04
0x1409159fe: mov    ecx,DWORD PTR [rip+0x1a7dc74]        # 0x142393678
0x140915a04: call   0x1400b9dc0
0x140915a09: mov    rbp,rax
0x140915a0c: test   rax,rax
0x140915a0f: je     0x140915b06
0x140915a15: mov    rax,QWORD PTR [rax+0x18]
0x140915a19: sub    rax,QWORD PTR [rbp+0x10]
0x140915a1d: sar    rax,0x2
0x140915a21: sub    eax,0x1
0x140915a24: movsxd rsi,eax
0x140915a27: js     0x140915b06
0x140915a2d: mov    r13d,0x1
0x140915a33: nop    DWORD PTR [rax+0x0]
0x140915a37: nop    WORD PTR [rax+rax*1+0x0]
0x140915a40: mov    rdx,QWORD PTR [rbp+0x10]
0x140915a44: lea    rcx,[rip+0x1be426d]        # 0x1424f9cb8
0x140915a4b: mov    edx,DWORD PTR [rdx+rsi*4]
0x140915a4e: call   0x14007da30
0x140915a53: mov    rdi,rax
0x140915a56: test   rax,rax
0x140915a59: je     0x140915af8
0x140915a5f: mov    rdx,QWORD PTR [rax]
0x140915a62: mov    rcx,rax
0x140915a65: call   QWORD PTR [rdx]
0x140915a67: mov    rdx,QWORD PTR [rdi]
0x140915a6a: mov    ebx,0x2
0x140915a6f: cmp    ax,0xb
0x140915a73: mov    rcx,rdi
0x140915a76: cmovne ebx,r14d
0x140915a7a: call   QWORD PTR [rdx]
0x140915a7c: cmp    ax,0xa
0x140915a80: jne    0x140915aa0
0x140915a82: movzx  eax,WORD PTR [rdi+0x28]
0x140915a86: cmp    ax,0xa
0x140915a8a: jne    0x140915a93
0x140915a8c: mov    ebx,0x5
0x140915a91: jmp    0x140915aa4
0x140915a93: cmp    ax,r13w
0x140915a97: jne    0x140915aa0
0x140915a99: mov    ebx,0x2
0x140915a9e: jmp    0x140915aa4
0x140915aa0: test   ebx,ebx
0x140915aa2: je     0x140915af8
0x140915aa4: mov    ecx,DWORD PTR [rdi+0x20]
0x140915aa7: lea    rdx,[rip+0x1be44f2]        # 0x1424f9fa0
0x140915aae: call   0x1400b9dc0
0x140915ab3: test   rax,rax
0x140915ab6: je     0x140915ac5
0x140915ab8: mov    rax,QWORD PTR [rax+0x8]
0x140915abc: mov    ecx,DWORD PTR [rax+0x24]
0x140915abf: test   ecx,ecx
0x140915ac1: jle    0x140915ac5
0x140915ac3: add    ebx,ecx
0x140915ac5: mov    eax,DWORD PTR [rip+0x1a5ec29]        # 0x1423746f4
0x140915acb: sub    eax,DWORD PTR [rdi+0x8]
0x140915ace: imul   ecx,eax,0x62700
0x140915ad4: mov    eax,0x299c335d
0x140915ad9: movzx  r15d,r15b
0x140915add: sub    ecx,DWORD PTR [rdi+0xc]
0x140915ae0: add    ecx,DWORD PTR [rip+0x1a724de]        # 0x142387fc4
0x140915ae6: imul   ecx
0x140915ae8: sar    edx,0x10
0x140915aeb: mov    eax,edx
0x140915aed: shr    eax,0x1f
0x140915af0: add    edx,eax
0x140915af2: cmp    edx,ebx
0x140915af4: cmovle r15d,r13d
0x140915af8: sub    rsi,r13
0x140915afb: jns    0x140915a40
0x140915b01: mov    r13,QWORD PTR [rsp+0x68]
0x140915b06: inc    r12d
0x140915b09: cmp    r12d,0x2
0x140915b0d: jl     0x1409159f0
0x140915b13: mov    r12,QWORD PTR [rsp+0x28]
0x140915b18: test   r15b,r15b
0x140915b1b: mov    r15,QWORD PTR [rsp+0x20]
0x140915b20: mov    rdi,QWORD PTR [rsp+0x30]
0x140915b25: mov    rsi,QWORD PTR [rsp+0x38]
0x140915b2a: mov    rbp,QWORD PTR [rsp+0x40]
0x140915b2f: mov    rbx,QWORD PTR [rsp+0x70]
0x140915b34: mov    r13,QWORD PTR [rsp+0x60]
0x140915b39: jne    0x140915c19
0x140915b3f: mov    rax,QWORD PTR [rip+0x1bd22c2]        # 0x1424e7e08
0x140915b46: mov    rcx,QWORD PTR [rip+0x1bd22c3]        # 0x1424e7e10
0x140915b4d: mov    r10d,DWORD PTR [rip+0x1a7db20]        # 0x142393674
0x140915b54: cmp    rax,rcx
0x140915b57: jae    0x140915ba1
0x140915b59: mov    r9,QWORD PTR [rax]
0x140915b5c: mov    edx,DWORD PTR [r13+0x4]
0x140915b60: cmp    DWORD PTR [r9+0x4],edx
0x140915b64: jne    0x140915b9b
0x140915b66: cmp    DWORD PTR [r9+0x138],0x2
0x140915b6e: jne    0x140915b9b
0x140915b70: cmp    DWORD PTR [r9+0x8],r10d
0x140915b74: jne    0x140915b9b
0x140915b76: mov    edx,DWORD PTR [rip+0x1a5eb78]        # 0x1423746f4
0x140915b7c: sub    edx,DWORD PTR [r9+0x38]
0x140915b80: imul   r8d,edx,0x62700
0x140915b87: sub    r8d,DWORD PTR [r9+0x3c]
0x140915b8b: add    r8d,DWORD PTR [rip+0x1a72432]        # 0x142387fc4
0x140915b92: cmp    r8d,0x31380
0x140915b99: jl     0x140915c19
0x140915b9b: add    rax,0x8
0x140915b9f: jmp    0x140915b54
0x140915ba1: mov    r8,QWORD PTR [rip+0x1a7d980]        # 0x142393528
0x140915ba8: mov    edx,r14d
0x140915bab: mov    rcx,QWORD PTR [rip+0x1a7d96e]        # 0x142393520
0x140915bb2: sub    r8,rcx
0x140915bb5: sar    r8,0x3
0x140915bb9: test   r8,r8
0x140915bbc: je     0x140915bd8
0x140915bbe: mov    r9d,DWORD PTR [r13+0x4]
0x140915bc2: mov    rax,QWORD PTR [rcx]
0x140915bc5: cmp    DWORD PTR [rax],r9d
0x140915bc8: je     0x140915c19
0x140915bca: inc    edx
0x140915bcc: add    rcx,0x8
0x140915bd0: movsxd rax,edx
0x140915bd3: cmp    rax,r8
0x140915bd6: jb     0x140915bc2
0x140915bd8: mov    rdx,QWORD PTR [rip+0x1a7b6e1]        # 0x1423912c0
0x140915bdf: mov    rcx,QWORD PTR [rip+0x1a7b6d2]        # 0x1423912b8
0x140915be6: sub    rdx,rcx
0x140915be9: sar    rdx,0x3
0x140915bed: test   rdx,rdx
0x140915bf0: je     0x140915c0e
0x140915bf2: mov    r8d,DWORD PTR [r13+0x4]
0x140915bf6: mov    rax,QWORD PTR [rcx]
0x140915bf9: cmp    DWORD PTR [rax+0xc],r8d
0x140915bfd: je     0x140915c19
0x140915bff: inc    r14d
0x140915c02: add    rcx,0x8
0x140915c06: movsxd rax,r14d
0x140915c09: cmp    rax,rdx
0x140915c0c: jb     0x140915bf6
0x140915c0e: mov    al,0x1
0x140915c10: add    rsp,0x48
0x140915c14: pop    r14
0x140915c16: pop    r13
0x140915c18: ret
0x140915c19: xor    al,al
0x140915c1b: add    rsp,0x48
0x140915c1f: pop    r14
0x140915c21: pop    r13
0x140915c23: ret
