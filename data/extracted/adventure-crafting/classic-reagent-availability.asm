# classic PE:6a70b91c:0270a000; reagent-availability; RVA 0x27cdf0..0x27cf49
0x0027cdf0: mov    QWORD PTR [rsp+0x18],rbx
0x0027cdf5: push   rbp
0x0027cdf6: mov    rbp,rsp
0x0027cdf9: sub    rsp,0x40
0x0027cdfd: cmp    DWORD PTR [rcx+0x4],0x1
0x0027ce01: mov    rbx,rcx
0x0027ce04: je     0x14027cf3e
0x0027ce0a: cmp    BYTE PTR [rcx+0x90],0x0
0x0027ce11: je     0x14027cf3e
0x0027ce17: cmp    BYTE PTR [rip+0x210d6a7],0x0        # 0x14238a4c5
0x0027ce1e: je     0x14027cf37
0x0027ce24: cmp    BYTE PTR [rip+0x210d693],0x0        # 0x14238a4be
0x0027ce2b: je     0x14027cf37
0x0027ce31: mov    ecx,DWORD PTR [rip+0x214a841]        # 0x1423c7678
0x0027ce37: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027ce3c: add    ecx,0xffffffe0
0x0027ce3f: mov    QWORD PTR [rsp+0x50],rsi
0x0027ce44: imul   ecx
0x0027ce46: xor    esi,esi
0x0027ce48: mov    QWORD PTR [rsp+0x58],rdi
0x0027ce4d: mov    edi,DWORD PTR [rip+0x23c7651]        # 0x1426444a4
0x0027ce53: lea    rcx,[rbp-0x20]
0x0027ce57: mov    eax,edx
0x0027ce59: mov    QWORD PTR [rbp-0x8],rsi
0x0027ce5d: shr    eax,0x1f
0x0027ce60: add    edx,eax
0x0027ce62: mov    DWORD PTR [rbp-0x1c],esi
0x0027ce65: mov    eax,DWORD PTR [rbx+0x8c]
0x0027ce6b: mov    DWORD PTR [rbp-0x20],eax
0x0027ce6e: mov    rax,QWORD PTR [rbx+0xb8]
0x0027ce75: sub    rax,QWORD PTR [rbx+0xb0]
0x0027ce7c: sar    rax,0x3
0x0027ce80: dec    eax
0x0027ce82: mov    DWORD PTR [rbp-0x10],0x1c
0x0027ce89: mov    DWORD PTR [rbp-0x18],eax
0x0027ce8c: lea    eax,[rdx*2+0x19]
0x0027ce93: add    eax,edx
0x0027ce95: mov    DWORD PTR [rbp-0x14],edx
0x0027ce98: mov    DWORD PTR [rbp-0xc],eax
0x0027ce9b: call   0x1400bb340
0x0027cea0: mov    eax,DWORD PTR [rbp-0x10]
0x0027cea3: cmp    edi,eax
0x0027cea5: jg     0x14027ceac
0x0027cea7: mov    eax,DWORD PTR [rbp-0x1c]
0x0027ceaa: jmp    0x14027cf0d
0x0027ceac: mov    r10d,DWORD PTR [rbp-0xc]
0x0027ceb0: cmp    edi,r10d
0x0027ceb3: jl     0x14027cecc
0x0027ceb5: mov    eax,DWORD PTR [rbp-0x18]
0x0027ceb8: sub    eax,DWORD PTR [rbp-0x14]
0x0027cebb: mov    ecx,DWORD PTR [rbp-0x1c]
0x0027cebe: inc    eax
0x0027cec0: mov    DWORD PTR [rbp-0x20],eax
0x0027cec3: cmp    eax,ecx
0x0027cec5: jge    0x14027cf10
0x0027cec7: mov    DWORD PTR [rbp-0x20],ecx
0x0027ceca: jmp    0x14027cf10
0x0027cecc: cmp    r10d,eax
0x0027cecf: jle    0x14027cf10
0x0027ced1: mov    r9d,DWORD PTR [rbp-0x1c]
0x0027ced5: mov    r8d,DWORD PTR [rbp-0x18]
0x0027ced9: sub    r8d,DWORD PTR [rbp-0x14]
0x0027cedd: mov    ecx,r8d
0x0027cee0: sub    ecx,r9d
0x0027cee3: add    ecx,0x1
0x0027cee6: cmovns esi,ecx
0x0027cee9: sub    edi,eax
0x0027ceeb: sub    r10d,eax
0x0027ceee: imul   esi,edi
0x0027cef1: inc    r10d
0x0027cef4: lea    ecx,[r8+0x1]
0x0027cef8: mov    eax,esi
0x0027cefa: cdq
0x0027cefb: idiv   r10d
0x0027cefe: add    eax,r9d
0x0027cf01: cmp    eax,ecx
0x0027cf03: cmovg  eax,ecx
0x0027cf06: cmp    eax,r9d
0x0027cf09: cmovl  eax,r9d
0x0027cf0d: mov    DWORD PTR [rbp-0x20],eax
0x0027cf10: lea    rcx,[rbp-0x20]
0x0027cf14: call   0x1400bb340
0x0027cf19: mov    eax,DWORD PTR [rbp-0x20]
0x0027cf1c: mov    rdi,QWORD PTR [rsp+0x58]
0x0027cf21: mov    rsi,QWORD PTR [rsp+0x50]
0x0027cf26: mov    DWORD PTR [rbx+0x8c],eax
0x0027cf2c: mov    rbx,QWORD PTR [rsp+0x60]
0x0027cf31: add    rsp,0x40
0x0027cf35: pop    rbp
0x0027cf36: ret
0x0027cf37: mov    BYTE PTR [rcx+0x90],0x0
0x0027cf3e: mov    rbx,QWORD PTR [rsp+0x60]
0x0027cf43: add    rsp,0x40
0x0027cf47: pop    rbp
0x0027cf48: ret
