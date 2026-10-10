# classic PE:6a70b91c:0270a000; reagent-candidates; RVA 0x27cf50..0x27d148
0x0027cf50: mov    QWORD PTR [rsp+0x20],rbx
0x0027cf55: push   rbp
0x0027cf56: mov    rbp,rsp
0x0027cf59: sub    rsp,0x40
0x0027cf5d: mov    eax,DWORD PTR [rcx+0x4]
0x0027cf60: mov    rbx,rcx
0x0027cf63: cmp    eax,0x4
0x0027cf66: jne    0x14027cfcc
0x0027cf68: mov    rax,QWORD PTR [rcx+0xd8]
0x0027cf6f: sub    rax,QWORD PTR [rcx+0xd0]
0x0027cf76: sar    rax,0x3
0x0027cf7a: test   rax,rax
0x0027cf7d: je     0x14027cfc7
0x0027cf7f: call   0x14027df20
0x0027cf84: cmp    DWORD PTR [rbx+0x4],0x5
0x0027cf88: jne    0x14027d13d
0x0027cf8e: test   BYTE PTR [rbx+0xec],0x1
0x0027cf95: jne    0x14027cf9f
0x0027cf97: mov    rcx,rbx
0x0027cf9a: call   0x14027e070
0x0027cf9f: mov    BYTE PTR [rbx],0x0
0x0027cfa2: cmp    WORD PTR [rip+0x23c7a3e],0x2        # 0x1426449e8
0x0027cfaa: jge    0x14027d13d
0x0027cfb0: mov    eax,0x2
0x0027cfb5: mov    WORD PTR [rip+0x23c7a2c],ax        # 0x1426449e8
0x0027cfbc: mov    rbx,QWORD PTR [rsp+0x68]
0x0027cfc1: add    rsp,0x40
0x0027cfc5: pop    rbp
0x0027cfc6: ret
0x0027cfc7: mov    BYTE PTR [rcx],0x0
0x0027cfca: jmp    0x14027cfa2
0x0027cfcc: cmp    eax,0x5
0x0027cfcf: jne    0x14027cfdc
0x0027cfd1: test   BYTE PTR [rcx+0xec],0x1
0x0027cfd8: jne    0x14027cf9f
0x0027cfda: jmp    0x14027cf9a
0x0027cfdc: movzx  r11d,BYTE PTR [rip+0x210d4e1]        # 0x14238a4c5
0x0027cfe4: mov    r8d,0x14
0x0027cfea: mov    r10d,DWORD PTR [rip+0x214a687]        # 0x1423c7678
0x0027cff1: test   r11b,r11b
0x0027cff4: mov    QWORD PTR [rsp+0x58],rdi
0x0027cff9: mov    edi,0xffffffff
0x0027cffe: cmovne edi,DWORD PTR [rip+0x23c749f]        # 0x1426444a4
0x0027d005: add    r10d,0xfffffffb
0x0027d009: mov    QWORD PTR [rsp+0x60],r14
0x0027d00e: call   0x14027db70
0x0027d013: mov    r9d,0x27 ; inline_fragment="'"
0x0027d019: mov    r14d,eax
0x0027d01c: lea    ecx,[rax+0x2]
0x0027d01f: lea    edx,[rcx+rcx*2]
0x0027d022: cmp    edx,r9d
0x0027d025: lea    ecx,[r10-0x13]
0x0027d029: cmovl  r9d,edx
0x0027d02d: cmp    ecx,r9d
0x0027d030: jle    0x14027d03b
0x0027d032: mov    r8d,r10d
0x0027d035: sub    r8d,r9d
0x0027d038: inc    r8d
0x0027d03b: cmp    BYTE PTR [rbx+0x20],0x0
0x0027d03f: je     0x14027d133
0x0027d045: test   r11b,r11b
0x0027d048: je     0x14027d12f
0x0027d04e: cmp    BYTE PTR [rip+0x210d469],0x0        # 0x14238a4be
0x0027d055: je     0x14027d12f
0x0027d05b: lea    ecx,[r8+0x4]
0x0027d05f: mov    QWORD PTR [rsp+0x50],rsi
0x0027d064: sub    r10d,ecx
0x0027d067: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027d06c: imul   r10d
0x0027d06f: xor    esi,esi
0x0027d071: mov    eax,edx
0x0027d073: mov    QWORD PTR [rbp-0x8],rsi
0x0027d077: shr    eax,0x1f
0x0027d07a: add    edx,eax
0x0027d07c: mov    DWORD PTR [rbp-0x1c],esi
0x0027d07f: mov    eax,DWORD PTR [rbx+0x24]
0x0027d082: mov    DWORD PTR [rbp-0x20],eax
0x0027d085: lea    eax,[r14-0x1]
0x0027d089: mov    DWORD PTR [rbp-0x18],eax
0x0027d08c: lea    eax,[rcx+0x1]
0x0027d08f: lea    ecx,[rcx+rdx*2]
0x0027d092: mov    DWORD PTR [rbp-0x10],eax
0x0027d095: add    ecx,0xfffffffe
0x0027d098: mov    DWORD PTR [rbp-0x14],edx
0x0027d09b: add    ecx,edx
0x0027d09d: mov    DWORD PTR [rbp-0xc],ecx
0x0027d0a0: lea    rcx,[rbp-0x20]
0x0027d0a4: call   0x1400bb340
0x0027d0a9: mov    eax,DWORD PTR [rbp-0x10]
0x0027d0ac: cmp    edi,eax
0x0027d0ae: jg     0x14027d0b5
0x0027d0b0: mov    eax,DWORD PTR [rbp-0x1c]
0x0027d0b3: jmp    0x14027d116
0x0027d0b5: mov    r10d,DWORD PTR [rbp-0xc]
0x0027d0b9: cmp    edi,r10d
0x0027d0bc: jl     0x14027d0d5
0x0027d0be: mov    eax,DWORD PTR [rbp-0x18]
0x0027d0c1: sub    eax,DWORD PTR [rbp-0x14]
0x0027d0c4: mov    ecx,DWORD PTR [rbp-0x1c]
0x0027d0c7: inc    eax
0x0027d0c9: mov    DWORD PTR [rbp-0x20],eax
0x0027d0cc: cmp    eax,ecx
0x0027d0ce: jge    0x14027d119
0x0027d0d0: mov    DWORD PTR [rbp-0x20],ecx
0x0027d0d3: jmp    0x14027d119
0x0027d0d5: cmp    r10d,eax
0x0027d0d8: jle    0x14027d119
0x0027d0da: mov    r9d,DWORD PTR [rbp-0x1c]
0x0027d0de: mov    r8d,DWORD PTR [rbp-0x18]
0x0027d0e2: sub    r8d,DWORD PTR [rbp-0x14]
0x0027d0e6: mov    ecx,r8d
0x0027d0e9: sub    ecx,r9d
0x0027d0ec: add    ecx,0x1
0x0027d0ef: cmovns esi,ecx
0x0027d0f2: sub    edi,eax
0x0027d0f4: sub    r10d,eax
0x0027d0f7: imul   esi,edi
0x0027d0fa: inc    r10d
0x0027d0fd: lea    ecx,[r8+0x1]
0x0027d101: mov    eax,esi
0x0027d103: cdq
0x0027d104: idiv   r10d
0x0027d107: add    eax,r9d
0x0027d10a: cmp    eax,ecx
0x0027d10c: cmovg  eax,ecx
0x0027d10f: cmp    eax,r9d
0x0027d112: cmovl  eax,r9d
0x0027d116: mov    DWORD PTR [rbp-0x20],eax
0x0027d119: lea    rcx,[rbp-0x20]
0x0027d11d: call   0x1400bb340
0x0027d122: mov    eax,DWORD PTR [rbp-0x20]
0x0027d125: mov    rsi,QWORD PTR [rsp+0x50]
0x0027d12a: mov    DWORD PTR [rbx+0x24],eax
0x0027d12d: jmp    0x14027d133
0x0027d12f: mov    BYTE PTR [rbx+0x20],0x0
0x0027d133: mov    rdi,QWORD PTR [rsp+0x58]
0x0027d138: mov    r14,QWORD PTR [rsp+0x60]
0x0027d13d: mov    rbx,QWORD PTR [rsp+0x68]
0x0027d142: add    rsp,0x40
0x0027d146: pop    rbp
0x0027d147: ret
