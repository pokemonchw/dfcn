# steam PE:6a70a6d9:02711000; put-nested-container-options-builder; RVA 0x899c10..0x899dcf
0x00899c10: mov    r11,rsp
0x00899c13: mov    QWORD PTR [r11+0x20],r9
0x00899c17: mov    QWORD PTR [r11+0x8],rcx
0x00899c1b: push   rbx
0x00899c1c: push   r14
0x00899c1e: push   r15
0x00899c20: sub    rsp,0x60
0x00899c24: test   BYTE PTR [r9+0x10],0x40
0x00899c29: mov    rbx,r9
0x00899c2c: mov    r15,r8
0x00899c2f: mov    r14,rdx
0x00899c32: je     0x140899dd9
0x00899c38: mov    rdx,QWORD PTR [r9+0x38]
0x00899c3c: mov    rax,QWORD PTR [r9+0x40]
0x00899c40: sub    rax,rdx
0x00899c43: mov    QWORD PTR [r11-0x28],rdi
0x00899c47: mov    QWORD PTR [r11-0x30],r12
0x00899c4b: xor    r12d,r12d
0x00899c4e: sar    rax,0x3
0x00899c52: mov    edi,r12d
0x00899c55: mov    DWORD PTR [rsp+0x30],r12d
0x00899c5a: test   rax,rax
0x00899c5d: je     0x140899dcf
0x00899c63: mov    QWORD PTR [r11+0x10],rbp
0x00899c67: mov    QWORD PTR [r11-0x38],r13
0x00899c6b: mov    r13d,r12d
0x00899c6e: mov    QWORD PTR [r11-0x20],rsi
0x00899c72: mov    rcx,QWORD PTR [rdx+r13*1]
0x00899c76: mov    rax,QWORD PTR [rcx]
0x00899c79: call   QWORD PTR [rax+0x10]
0x00899c7c: cmp    eax,0xa
0x00899c7f: jne    0x140899d98
0x00899c85: mov    rax,QWORD PTR [rbx+0x38]
0x00899c89: mov    rcx,QWORD PTR [rax+r13*1]
0x00899c8d: mov    rax,QWORD PTR [rcx]
0x00899c90: call   QWORD PTR [rax+0x18]
0x00899c93: mov    rsi,rax
0x00899c96: test   rax,rax
0x00899c99: je     0x140899d98
0x00899c9f: mov    ebp,DWORD PTR [r15+0x1c]
0x00899ca3: cmp    rax,r15
0x00899ca6: mov    rbx,QWORD PTR [rax+0x38]
0x00899caa: mov    rdi,QWORD PTR [rax+0x40]
0x00899cae: setne  r12b
0x00899cb2: cmp    rbx,rdi
0x00899cb5: jae    0x140899cdb
0x00899cb7: mov    rcx,QWORD PTR [rbx]
0x00899cba: mov    rax,QWORD PTR [rcx]
0x00899cbd: call   QWORD PTR [rax+0x10]
0x00899cc0: cmp    eax,0xa
0x00899cc3: jne    0x140899cd2
0x00899cc5: mov    rcx,QWORD PTR [rbx]
0x00899cc8: mov    rax,QWORD PTR [rcx]
0x00899ccb: call   QWORD PTR [rax+0x60]
0x00899cce: cmp    eax,ebp
0x00899cd0: je     0x140899cd8
0x00899cd2: add    rbx,0x8
0x00899cd6: jmp    0x140899cb2
0x00899cd8: xor    r12b,r12b
0x00899cdb: mov    rax,QWORD PTR [r15]
0x00899cde: mov    rcx,r15
0x00899ce1: call   QWORD PTR [rax+0x2c0]
0x00899ce7: xor    edx,edx
0x00899ce9: mov    rcx,rsi
0x00899cec: mov    ebx,eax
0x00899cee: call   0x140c8a580
0x00899cf3: cmp    eax,ebx
0x00899cf5: jl     0x140899d69
0x00899cf7: test   r12b,r12b
0x00899cfa: je     0x140899d69
0x00899cfc: mov    ecx,0x30
0x00899d01: call   0x141539690
0x00899d06: mov    QWORD PTR [rsp+0x38],rax
0x00899d0b: lea    rcx,[rip+0xe1d47e]        # 0x1416b7190
0x00899d12: mov    QWORD PTR [rsp+0x38],rax
0x00899d17: mov    QWORD PTR [rax],rcx
0x00899d1a: mov    ecx,DWORD PTR [rsp+0xa0]
0x00899d21: mov    DWORD PTR [rax+0x8],ecx
0x00899d24: mov    DWORD PTR [rax+0xc],0xffffffff
0x00899d2b: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00899d32: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x00899d39: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00899d40: mov    QWORD PTR [rax+0x20],r15
0x00899d44: mov    QWORD PTR [rax+0x28],rsi
0x00899d48: mov    rdx,QWORD PTR [r14+0x8]
0x00899d4c: cmp    rdx,QWORD PTR [r14+0x10]
0x00899d50: je     0x140899d5c
0x00899d52: mov    QWORD PTR [rdx],rax
0x00899d55: add    QWORD PTR [r14+0x8],0x8
0x00899d5a: jmp    0x140899d69
0x00899d5c: lea    r8,[rsp+0x38]
0x00899d61: mov    rcx,r14
0x00899d64: call   0x1400bad30
0x00899d69: mov    eax,DWORD PTR [rsp+0xa0]
0x00899d70: mov    r9,rsi
0x00899d73: mov    rcx,QWORD PTR [rsp+0x80]
0x00899d7b: inc    eax
0x00899d7d: mov    r8,r15
0x00899d80: mov    DWORD PTR [rsp+0x20],eax
0x00899d84: mov    rdx,r14
0x00899d87: call   0x140899c10
0x00899d8c: mov    rbx,QWORD PTR [rsp+0x98]
0x00899d94: mov    edi,DWORD PTR [rsp+0x30]
0x00899d98: mov    rdx,QWORD PTR [rbx+0x38]
0x00899d9c: inc    edi
0x00899d9e: mov    rcx,QWORD PTR [rbx+0x40]
0x00899da2: add    r13,0x8
0x00899da6: sub    rcx,rdx
0x00899da9: movsxd rax,edi
0x00899dac: sar    rcx,0x3
0x00899db0: mov    DWORD PTR [rsp+0x30],edi
0x00899db4: cmp    rax,rcx
0x00899db7: jb     0x140899c72
0x00899dbd: mov    r13,QWORD PTR [rsp+0x40]
0x00899dc2: mov    rsi,QWORD PTR [rsp+0x58]
0x00899dc7: mov    rbp,QWORD PTR [rsp+0x88]
