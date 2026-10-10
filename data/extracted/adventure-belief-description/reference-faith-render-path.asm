# reference PE:6a70a6d9:02711000; faith-render-path; RVA 0x62cb94..0x62d820
0x0062cb94: cmp    DWORD PTR [r13+0x1298],0x2
0x0062cb9c: jne    0x14062d323
0x0062cba2: cmp    DWORD PTR [r13+0x5a0],0xffffffff
0x0062cbaa: je     0x14062cd64
0x0062cbb0: mov    r14d,DWORD PTR [rbp-0x80]
0x0062cbb4: lea    r15d,[r14+0xb]
0x0062cbb8: lea    r13d,[r14+0xd]
0x0062cbbc: lea    r12d,[r14+0x18]
0x0062cbc0: mov    ebx,DWORD PTR [rip+0x1da0bc2]        # 0x1423cd788
0x0062cbc6: add    ebx,0xfffffff8
0x0062cbc9: mov    DWORD PTR [rsp+0x7c],ebx
0x0062cbcd: cmp    r14d,r15d
0x0062cbd0: jg     0x14062cc3f
0x0062cbd2: mov    edi,r14d
0x0062cbd5: mov    r13d,ebx
0x0062cbd8: lea    r12,[rip+0x201d811]        # 0x14264a3f0
0x0062cbdf: nop
0x0062cbe0: mov    esi,r13d
0x0062cbe3: lea    rbx,[rip+0x201f262]        # 0x14264be4c
0x0062cbea: lea    r13,[rip+0x201f267]        # 0x14264be58
0x0062cbf1: mov    r8d,edi
0x0062cbf4: mov    edx,esi
0x0062cbf6: mov    rcx,r12
0x0062cbf9: call   0x1400bb120
0x0062cbfe: cmp    edi,r14d
0x0062cc01: jne    0x14062cc08
0x0062cc03: mov    edx,DWORD PTR [rbx-0x18]
0x0062cc06: jmp    0x14062cc14
0x0062cc08: cmp    edi,r15d
0x0062cc0b: jne    0x14062cc11
0x0062cc0d: mov    edx,DWORD PTR [rbx]
0x0062cc0f: jmp    0x14062cc14
0x0062cc11: mov    edx,DWORD PTR [rbx-0xc]
0x0062cc14: mov    rcx,r12
0x0062cc17: call   0x140adaad0
0x0062cc1c: inc    esi
0x0062cc1e: add    rbx,0x4
0x0062cc22: cmp    rbx,r13
0x0062cc25: jl     0x14062cbf1
0x0062cc27: inc    edi
0x0062cc29: cmp    edi,r15d
0x0062cc2c: mov    r13d,DWORD PTR [rsp+0x7c]
0x0062cc31: jle    0x14062cbe0
0x0062cc33: lea    r12d,[r14+0x18]
0x0062cc37: lea    r13d,[r14+0xd]
0x0062cc3b: mov    ebx,DWORD PTR [rsp+0x7c]
0x0062cc3f: xor    r8d,r8d
0x0062cc42: mov    edx,0x7
0x0062cc47: mov    r9b,0x1
0x0062cc4a: lea    r15,[rip+0x201d79f]        # 0x14264a3f0
0x0062cc51: mov    rcx,r15
0x0062cc54: call   0x1400bb130
0x0062cc59: lea    r8d,[r14+0x2]
0x0062cc5d: lea    edx,[rbx+0x1]
0x0062cc60: mov    rcx,r15
0x0062cc63: call   0x1400bb120
0x0062cc68: lea    rdx,[rip+0x1034321]        # 0x141660f90 ; literal="Believe"
0x0062cc6f: lea    rcx,[rbp+0x2520]
0x0062cc76: call   0x140068150
0x0062cc7b: nop
0x0062cc7c: xor    r9d,r9d
0x0062cc7f: xor    r8d,r8d
0x0062cc82: lea    rdx,[rbp+0x2520]
0x0062cc89: mov    rcx,r15
0x0062cc8c: call   0x140ad9960
0x0062cc91: nop
0x0062cc92: lea    rcx,[rbp+0x2520]
0x0062cc99: call   0x140067e30
0x0062cc9e: mov    edi,r13d
0x0062cca1: cmp    r13d,r12d
0x0062cca4: jg     0x14062cd08
0x0062cca6: data16 nop WORD PTR [rax+rax*1+0x0]
0x0062ccb0: mov    esi,ebx
0x0062ccb2: lea    rbx,[rip+0x201f193]        # 0x14264be4c
0x0062ccb9: nop    DWORD PTR [rax+0x0]
0x0062ccc0: mov    r8d,edi
0x0062ccc3: mov    edx,esi
0x0062ccc5: mov    rcx,r15
0x0062ccc8: call   0x1400bb120
0x0062cccd: cmp    edi,r13d
0x0062ccd0: jne    0x14062ccd7
0x0062ccd2: mov    edx,DWORD PTR [rbx-0x18]
0x0062ccd5: jmp    0x14062cce3
0x0062ccd7: cmp    edi,r12d
0x0062ccda: jne    0x14062cce0
0x0062ccdc: mov    edx,DWORD PTR [rbx]
0x0062ccde: jmp    0x14062cce3
0x0062cce0: mov    edx,DWORD PTR [rbx-0xc]
0x0062cce3: mov    rcx,r15
0x0062cce6: call   0x140adaad0
0x0062cceb: inc    esi
0x0062cced: add    rbx,0x4
0x0062ccf1: lea    rax,[rip+0x201f160]        # 0x14264be58
0x0062ccf8: cmp    rbx,rax
0x0062ccfb: jl     0x14062ccc0
0x0062ccfd: inc    edi
0x0062ccff: cmp    edi,r12d
0x0062cd02: mov    ebx,DWORD PTR [rsp+0x7c]
0x0062cd06: jle    0x14062ccb0
0x0062cd08: xor    r8d,r8d
0x0062cd0b: mov    edx,0x7
0x0062cd10: mov    r9b,0x1
0x0062cd13: mov    rcx,r15
0x0062cd16: call   0x1400bb130
0x0062cd1b: lea    r8d,[r13+0x3]
0x0062cd1f: lea    edx,[rbx+0x1]
0x0062cd22: mov    rcx,r15
0x0062cd25: call   0x1400bb120
0x0062cd2a: lea    rdx,[rip+0x1034267]        # 0x141660f98 ; literal="Doubt"
0x0062cd31: lea    rcx,[rbp+0x2540]
0x0062cd38: call   0x140068150
0x0062cd3d: nop
0x0062cd3e: xor    r9d,r9d
0x0062cd41: xor    r8d,r8d
0x0062cd44: lea    rdx,[rbp+0x2540]
0x0062cd4b: mov    rcx,r15
0x0062cd4e: call   0x140ad9960
0x0062cd53: nop
0x0062cd54: lea    rcx,[rbp+0x2540]
0x0062cd5b: call   0x140067e30
0x0062cd60: mov    r13,QWORD PTR [rbp-0x78]
0x0062cd64: mov    r15d,DWORD PTR [rbp-0x80]
0x0062cd68: lea    ebx,[r15+0x32]
0x0062cd6c: mov    ecx,DWORD PTR [rip+0x1da0a16]        # 0x1423cd788
0x0062cd72: add    ecx,0xffffffde
0x0062cd75: mov    eax,0x55555556
0x0062cd7a: imul   ecx
0x0062cd7c: mov    r12d,edx
0x0062cd7f: shr    r12d,0x1f
0x0062cd83: add    r12d,edx
0x0062cd86: mov    DWORD PTR [rbp-0x2c],r12d
0x0062cd8a: lea    rdi,[r13+0x12e8]
0x0062cd91: mov    QWORD PTR [rbp-0x38],rdi
0x0062cd95: mov    rcx,rdi
0x0062cd98: call   0x14006f370
0x0062cd9d: mov    QWORD PTR [rbp-0x70],rax
0x0062cda1: lea    r14d,[rbx-0x2]
0x0062cda5: cmp    eax,r12d
0x0062cda8: cmovle r14d,ebx
0x0062cdac: mov    DWORD PTR [rbp-0x5c],r14d
0x0062cdb0: mov    ecx,DWORD PTR [r13+0x1364]
0x0062cdb7: mov    edx,eax
0x0062cdb9: sub    edx,r12d
0x0062cdbc: cmp    ecx,edx
0x0062cdbe: cmovle edx,ecx
0x0062cdc1: xor    ecx,ecx
0x0062cdc3: mov    esi,ecx
0x0062cdc5: test   edx,edx
0x0062cdc7: cmovns esi,edx
0x0062cdca: mov    DWORD PTR [rbp-0x68],esi
0x0062cdcd: lea    ecx,[r12+rsi*1]
0x0062cdd1: mov    DWORD PTR [rbp-0x64],ecx
0x0062cdd4: cmp    esi,ecx
0x0062cdd6: jge    0x14062d2b0
0x0062cddc: mov    r13d,0x1b
0x0062cde2: mov    DWORD PTR [rsp+0x74],r13d
0x0062cde7: cmp    esi,eax
0x0062cde9: jge    0x14062d2a8
0x0062cdef: xor    r12b,r12b
0x0062cdf2: movsxd rbx,esi
0x0062cdf5: mov    rdx,rbx
0x0062cdf8: mov    rcx,rdi
0x0062cdfb: call   0x14006f360
0x0062ce00: mov    ecx,DWORD PTR [rax]
0x0062ce02: cmp    ecx,0xffffffff
0x0062ce05: je     0x14062ce5c
0x0062ce07: test   ecx,ecx
0x0062ce09: je     0x14062ce31
0x0062ce0b: cmp    ecx,0x1
0x0062ce0e: jne    0x14062ce7d
0x0062ce10: mov    rdi,QWORD PTR [rbp-0x78]
0x0062ce14: lea    rcx,[rdi+0x1300]
0x0062ce1b: mov    rdx,rbx
0x0062ce1e: call   0x14006f360
0x0062ce23: mov    ecx,DWORD PTR [rax]
0x0062ce25: cmp    DWORD PTR [rdi+0x5a4],ecx
0x0062ce2b: sete   r12b
0x0062ce2f: jmp    0x14062ce7d
0x0062ce31: mov    rdi,QWORD PTR [rbp-0x78]
0x0062ce35: lea    rcx,[rdi+0x1300]
0x0062ce3c: mov    rdx,rbx
0x0062ce3f: call   0x14006f360
0x0062ce44: mov    ecx,DWORD PTR [rax]
0x0062ce46: cmp    DWORD PTR [rdi+0x5a0],ecx
0x0062ce4c: jne    0x14062ce7d
0x0062ce4e: cmp    DWORD PTR [rdi+0x5a4],0xffffffff
0x0062ce55: jne    0x14062ce7d
0x0062ce57: mov    r12b,0x1
0x0062ce5a: jmp    0x14062ce7d
0x0062ce5c: mov    rax,QWORD PTR [rbp-0x78]
0x0062ce60: cmp    DWORD PTR [rax+0x5a0],0xffffffff
0x0062ce67: jne    0x14062ce7d
0x0062ce69: movzx  r12d,r12b
0x0062ce6d: cmp    DWORD PTR [rax+0x5a4],0xffffffff
0x0062ce74: mov    eax,0x1
0x0062ce79: cmove  r12d,eax
0x0062ce7d: xor    r8d,r8d
0x0062ce80: mov    edx,0x7
0x0062ce85: mov    r9b,0x1
0x0062ce88: lea    rbx,[rip+0x201d561]        # 0x14264a3f0
0x0062ce8f: mov    rcx,rbx
0x0062ce92: call   0x1400bb130
0x0062ce97: mov    edi,r15d
0x0062ce9a: cmp    r15d,r14d
0x0062ce9d: jg     0x14062cf6b
0x0062cea3: inc    r13d
0x0062cea6: mov    eax,DWORD PTR [rsp+0x74]
0x0062ceaa: add    eax,0xfffffffe
0x0062cead: mov    DWORD PTR [rsp+0x78],eax
0x0062ceb1: mov    esi,eax
0x0062ceb3: cmp    eax,r13d
0x0062ceb6: jge    0x14062cf51
0x0062cebc: lea    rbx,[rip+0x201efd1]        # 0x14264be94
0x0062cec3: mov    r8d,edi
0x0062cec6: mov    edx,esi
0x0062cec8: lea    rcx,[rip+0x201d521]        # 0x14264a3f0
0x0062cecf: call   0x1400bb120
0x0062ced4: test   r12b,r12b
0x0062ced7: je     0x14062cef8
0x0062ced9: cmp    edi,r15d
0x0062cedc: jne    0x14062cee3
0x0062cede: mov    edx,DWORD PTR [rbx-0x18]
0x0062cee1: jmp    0x14062cf0f
0x0062cee3: lea    rcx,[rip+0x201d506]        # 0x14264a3f0
0x0062ceea: cmp    edi,r14d
0x0062ceed: jne    0x14062cef3
0x0062ceef: mov    edx,DWORD PTR [rbx]
0x0062cef1: jmp    0x14062cf16
0x0062cef3: mov    edx,DWORD PTR [rbx-0xc]
0x0062cef6: jmp    0x14062cf16
0x0062cef8: cmp    edi,r15d
0x0062cefb: jne    0x14062cf02
0x0062cefd: mov    edx,DWORD PTR [rbx-0x60]
0x0062cf00: jmp    0x14062cf0f
0x0062cf02: cmp    edi,r14d
0x0062cf05: jne    0x14062cf0c
0x0062cf07: mov    edx,DWORD PTR [rbx-0x48]
0x0062cf0a: jmp    0x14062cf0f
0x0062cf0c: mov    edx,DWORD PTR [rbx-0x54]
0x0062cf0f: lea    rcx,[rip+0x201d4da]        # 0x14264a3f0
0x0062cf16: call   0x140adaad0
0x0062cf1b: xor    edx,edx
0x0062cf1d: lea    rcx,[rip+0x1da084c]        # 0x1423cd770
0x0062cf24: call   0x140071f90
0x0062cf29: test   al,al
0x0062cf2b: je     0x14062cf3e
0x0062cf2d: mov    r8b,0x1
0x0062cf30: xor    edx,edx
0x0062cf32: lea    rcx,[rip+0x201d4b7]        # 0x14264a3f0
0x0062cf39: call   0x1400bb190
0x0062cf3e: inc    esi
0x0062cf40: add    rbx,0x4
0x0062cf44: cmp    esi,r13d
0x0062cf47: jl     0x14062cec3
0x0062cf4d: mov    eax,DWORD PTR [rsp+0x78]
0x0062cf51: inc    edi
0x0062cf53: cmp    edi,r14d
0x0062cf56: jle    0x14062ceb1
0x0062cf5c: mov    esi,DWORD PTR [rbp-0x68]
0x0062cf5f: mov    r13d,DWORD PTR [rsp+0x74]
0x0062cf64: lea    rbx,[rip+0x201d485]        # 0x14264a3f0
0x0062cf6b: xor    r8d,r8d
0x0062cf6e: mov    edx,0x7
0x0062cf73: mov    rcx,rbx
0x0062cf76: test   r12b,r12b
0x0062cf79: je     0x14062cf80
0x0062cf7b: mov    r9b,0x1
0x0062cf7e: jmp    0x14062cf83
0x0062cf80: xor    r9d,r9d
0x0062cf83: call   0x1400bb130
0x0062cf88: lea    r8d,[r15+0x2]
0x0062cf8c: lea    edx,[r13-0x1]
0x0062cf90: mov    rcx,rbx
0x0062cf93: call   0x1400bb120
0x0062cf98: lea    rcx,[rbp+0x1360]
0x0062cf9f: call   0x14006f690
0x0062cfa4: nop
0x0062cfa5: movsxd rdx,esi
0x0062cfa8: mov    rdi,QWORD PTR [rbp-0x38]
0x0062cfac: mov    rcx,rdi
0x0062cfaf: call   0x14006f360
0x0062cfb4: mov    ecx,DWORD PTR [rax]
0x0062cfb6: cmp    ecx,0xffffffff
0x0062cfb9: je     0x14062d048
0x0062cfbf: test   ecx,ecx
0x0062cfc1: je     0x14062cffb
0x0062cfc3: mov    r12,QWORD PTR [rbp-0x78]
0x0062cfc7: cmp    ecx,0x1
0x0062cfca: jne    0x14062d05f
0x0062cfd0: lea    rcx,[r12+0x1300]
0x0062cfd8: movsxd rdx,esi
0x0062cfdb: call   0x14006f360
0x0062cfe0: xor    r9d,r9d
0x0062cfe3: mov    r8d,DWORD PTR [rax]
0x0062cfe6: lea    rdx,[rbp+0x1360]
0x0062cfed: lea    rcx,[rip+0x1ecccc4]        # 0x1424f9cb8
0x0062cff4: call   0x140b92900
0x0062cff9: jmp    0x14062d05f
0x0062cffb: lea    rcx,[rbp+0x450]
0x0062d002: call   0x140072080
0x0062d007: mov    r12,QWORD PTR [rbp-0x78]
0x0062d00b: lea    rcx,[r12+0x1300]
0x0062d013: movsxd rdx,esi
0x0062d016: call   0x14006f360
0x0062d01b: mov    WORD PTR [rsp+0x28],0x1
0x0062d022: xor    ecx,ecx
0x0062d024: mov    WORD PTR [rsp+0x20],cx
0x0062d029: lea    r9,[rbp+0x450]
0x0062d030: mov    r8d,DWORD PTR [rax]
0x0062d033: lea    rdx,[rbp+0x1360]
0x0062d03a: lea    rcx,[rip+0x1eccc77]        # 0x1424f9cb8
0x0062d041: call   0x140b92f10
0x0062d046: jmp    0x14062d05f
0x0062d048: lea    rdx,[rip+0xfd2715]        # 0x1415ff764 ; literal="None"
0x0062d04f: lea    rcx,[rbp+0x1360]
0x0062d056: call   0x14006f580
0x0062d05b: mov    r12,QWORD PTR [rbp-0x78]
0x0062d05f: lea    rcx,[rbp+0x1360]
0x0062d066: call   0x14052d650
0x0062d06b: xor    r9d,r9d
0x0062d06e: xor    r8d,r8d
0x0062d071: lea    rdx,[rbp+0x1360]
0x0062d078: mov    rcx,rbx
0x0062d07b: call   0x140ad9960
0x0062d080: movsxd rdx,esi
0x0062d083: mov    rcx,rdi
0x0062d086: call   0x14006f360
0x0062d08b: cmp    DWORD PTR [rax],0xffffffff
0x0062d08e: je     0x14062d24a
0x0062d094: lea    r8d,[r15+0x4]
0x0062d098: mov    edx,r13d
0x0062d09b: mov    rcx,rbx
0x0062d09e: call   0x1400bb120
0x0062d0a3: lea    rcx,[rbp+0x1140]
0x0062d0aa: call   0x14006f690
0x0062d0af: nop
0x0062d0b0: movsxd rdx,esi
0x0062d0b3: mov    rcx,rdi
0x0062d0b6: call   0x14006f360
0x0062d0bb: mov    edx,DWORD PTR [rax]
0x0062d0bd: test   edx,edx
0x0062d0bf: je     0x14062d536
0x0062d0c5: cmp    edx,0x1
0x0062d0c8: jne    0x14062d1a2
0x0062d0ce: lea    rdx,[rip+0xfbf803]        # 0x1415ec8d8 ; literal="Religion"
0x0062d0d5: lea    rcx,[rbp+0x1140]
0x0062d0dc: call   0x14006f580
0x0062d0e1: lea    rcx,[r12+0x1300]
0x0062d0e9: movsxd rdx,esi
0x0062d0ec: call   0x14006f360
0x0062d0f1: mov    edx,DWORD PTR [rax]
0x0062d0f3: lea    rcx,[rip+0x1da46fe]        # 0x1423d17f8
0x0062d0fa: call   0x14007daf0
0x0062d0ff: mov    r13,rax
0x0062d102: test   rax,rax
0x0062d105: je     0x14062d19d
0x0062d10b: lea    rdx,[rbp+0xa8]
0x0062d112: lea    rcx,[r12+0x1280]
0x0062d11a: call   0x14006f240
0x0062d11f: lea    rdx,[rbp+0x168]
0x0062d126: lea    rcx,[r12+0x1280]
0x0062d12e: call   0x14006f230
0x0062d133: lea    rdx,[rbp+0x168]
0x0062d13a: lea    rcx,[rbp+0xa8]
0x0062d141: call   0x1400b9970
0x0062d146: test   al,al
0x0062d148: jne    0x14062d196
0x0062d14a: nop    WORD PTR [rax+rax*1+0x0]
0x0062d150: lea    rcx,[rbp+0xa8]
0x0062d157: call   0x14006ee10
0x0062d15c: mov    rbx,QWORD PTR [rax]
0x0062d15f: mov    eax,DWORD PTR [r12+0x340]
0x0062d167: cmp    DWORD PTR [rbx+0x88],eax
0x0062d16d: je     0x14062d3d7
0x0062d173: lea    rcx,[rbp+0xa8]
0x0062d17a: call   0x14006ee00
0x0062d17f: lea    rdx,[rbp+0x168]
0x0062d186: lea    rcx,[rbp+0xa8]
0x0062d18d: call   0x1400b9970
0x0062d192: test   al,al
0x0062d194: je     0x14062d150
0x0062d196: lea    rbx,[rip+0x201d253]        # 0x14264a3f0
0x0062d19d: mov    r13d,DWORD PTR [rsp+0x74]
0x0062d1a2: mov    edi,r14d
0x0062d1a5: sub    edi,r15d
0x0062d1a8: lea    rcx,[rbp+0x1140]
0x0062d1af: call   0x14006f330
0x0062d1b4: lea    ecx,[rdi-0x8]
0x0062d1b7: movsxd rdx,ecx
0x0062d1ba: cmp    rax,rdx
0x0062d1bd: jb     0x14062d221
0x0062d1bf: lea    ebx,[rdi-0x9]
0x0062d1c2: movsxd rsi,edi
0x0062d1c5: lea    rdx,[rsi-0x9]
0x0062d1c9: xor    r8d,r8d
0x0062d1cc: lea    rcx,[rbp+0x1140]
0x0062d1d3: call   0x1400e1230
0x0062d1d8: cmp    ebx,0x3
0x0062d1db: jle    0x14062d21a
0x0062d1dd: lea    rdx,[rsi-0xc]
0x0062d1e1: lea    rcx,[rbp+0x1140]
0x0062d1e8: call   0x1400fb540
0x0062d1ed: mov    BYTE PTR [rax],0x2e
0x0062d1f0: lea    eax,[rdi-0xb]
0x0062d1f3: movsxd rdx,eax
0x0062d1f6: lea    rcx,[rbp+0x1140]
0x0062d1fd: call   0x1400fb540
0x0062d202: mov    BYTE PTR [rax],0x2e
0x0062d205: lea    eax,[rdi-0xa]
0x0062d208: movsxd rdx,eax
0x0062d20b: lea    rcx,[rbp+0x1140]
0x0062d212: call   0x1400fb540
0x0062d217: mov    BYTE PTR [rax],0x2e
0x0062d21a: lea    rbx,[rip+0x201d1cf]        # 0x14264a3f0
0x0062d221: xor    r9d,r9d
0x0062d224: xor    r8d,r8d
0x0062d227: lea    rdx,[rbp+0x1140]
0x0062d22e: mov    rcx,rbx
0x0062d231: call   0x140ad9960
0x0062d236: nop
0x0062d237: lea    rcx,[rbp+0x1140]
0x0062d23e: call   0x140067e30
0x0062d243: mov    esi,DWORD PTR [rbp-0x68]
0x0062d246: mov    rdi,QWORD PTR [rbp-0x38]
0x0062d24a: mov    eax,DWORD PTR [rbp-0x60]
0x0062d24d: cmp    eax,r15d
0x0062d250: jl     0x14062d281
0x0062d252: cmp    eax,r14d
0x0062d255: jg     0x14062d281
0x0062d257: lea    eax,[r13-0x2]
0x0062d25b: mov    ecx,DWORD PTR [rbp-0x58]
0x0062d25e: cmp    ecx,eax
0x0062d260: jl     0x14062d281
0x0062d262: cmp    ecx,r13d
0x0062d265: jg     0x14062d281
0x0062d267: mov    r9d,esi
0x0062d26a: mov    eax,0xffffffff
0x0062d26f: mov    r8d,eax
0x0062d272: mov    edx,eax
0x0062d274: mov    rcx,QWORD PTR [rbp-0x78]
0x0062d278: call   0x14063dd90
0x0062d27d: mov    BYTE PTR [rbp-0x3c],0x1
0x0062d281: add    r13d,0x3
0x0062d285: mov    DWORD PTR [rsp+0x74],r13d
0x0062d28a: lea    rcx,[rbp+0x1360]
0x0062d291: call   0x140067e30
0x0062d296: inc    esi
0x0062d298: mov    DWORD PTR [rbp-0x68],esi
0x0062d29b: cmp    esi,DWORD PTR [rbp-0x64]
0x0062d29e: mov    rax,QWORD PTR [rbp-0x70]
0x0062d2a2: jl     0x14062cde7
0x0062d2a8: mov    r12d,DWORD PTR [rbp-0x2c]
0x0062d2ac: mov    r13,QWORD PTR [rbp-0x78]
0x0062d2b0: cmp    eax,r12d
0x0062d2b3: jle    0x14062d323
0x0062d2b5: lea    ebx,[r12*2+0x17]
0x0062d2bd: add    ebx,r12d
0x0062d2c0: lea    rcx,[rbp+0x270]
0x0062d2c7: call   0x1400bb360
0x0062d2cc: mov    r9,QWORD PTR [rbp-0x70]
0x0062d2d0: dec    r9d
0x0062d2d3: mov    DWORD PTR [rsp+0x30],ebx
0x0062d2d7: mov    DWORD PTR [rsp+0x28],0x1a
0x0062d2df: mov    DWORD PTR [rsp+0x20],r12d
0x0062d2e4: xor    r8d,r8d
0x0062d2e7: mov    edx,DWORD PTR [r13+0x1364]
0x0062d2ee: lea    rcx,[rbp+0x270]
0x0062d2f5: call   0x1400bb380
0x0062d2fa: lea    r9d,[r14+0x1]
0x0062d2fe: xor    eax,eax
0x0062d300: mov    DWORD PTR [rsp+0x28],eax
0x0062d304: movzx  eax,BYTE PTR [r13+0x1368]
0x0062d30c: mov    BYTE PTR [rsp+0x20],al
0x0062d310: mov    r8d,DWORD PTR [rbp-0x58]
0x0062d314: mov    edx,DWORD PTR [rbp-0x60]
0x0062d317: lea    rcx,[rbp+0x270]
0x0062d31e: call   0x14140f4d0
0x0062d323: cmp    BYTE PTR [rbp-0x3c],0x0
0x0062d327: je     0x14062d747
0x0062d32d: lea    rcx,[r13+0x1330]
0x0062d334: call   0x14006ee50
0x0062d339: test   rax,rax
0x0062d33c: je     0x14062d747
0x0062d342: mov    ebx,DWORD PTR [rip+0x1da0440]        # 0x1423cd788
0x0062d348: add    ebx,0xffffffec
0x0062d34b: lea    rcx,[r13+0x1330]
0x0062d352: call   0x14006ee50
0x0062d357: mov    esi,DWORD PTR [rbp-0x80]
0x0062d35a: add    esi,0x35
0x0062d35d: lea    edi,[rsi+0x1f]
0x0062d360: mov    r15d,DWORD PTR [rip+0x1da0421]        # 0x1423cd788
0x0062d367: add    r15d,0xfffffffa
0x0062d36b: cmp    eax,ebx
0x0062d36d: cmovl  ebx,eax
0x0062d370: mov    r13d,r15d
0x0062d373: sub    r13d,ebx
0x0062d376: mov    DWORD PTR [rsp+0x78],r13d
0x0062d37b: lea    r12d,[r13-0x1]
0x0062d37f: mov    r14d,r12d
0x0062d382: cmp    r12d,r15d
0x0062d385: jg     0x14062d66e
0x0062d38b: lea    r13,[rip+0x201d05e]        # 0x14264a3f0
0x0062d392: mov    ebx,esi
0x0062d394: cmp    esi,edi
0x0062d396: jg     0x14062d65d
0x0062d39c: nop    DWORD PTR [rax+0x0]
0x0062d3a0: mov    r8d,ebx
0x0062d3a3: mov    edx,r14d
0x0062d3a6: mov    rcx,r13
0x0062d3a9: call   0x1400bb120
0x0062d3ae: xor    r8d,r8d
0x0062d3b1: xor    edx,edx
0x0062d3b3: mov    rcx,r13
0x0062d3b6: call   0x1400bb190
0x0062d3bb: cmp    r14d,r12d
0x0062d3be: jne    0x14062d607
0x0062d3c4: cmp    ebx,esi
0x0062d3c6: jne    0x14062d5f0
0x0062d3cc: mov    edx,DWORD PTR [rip+0x201e942]        # 0x14264bd14
0x0062d3d2: jmp    0x14062d64b
0x0062d3d7: xor    eax,eax
0x0062d3d9: mov    r12d,eax
0x0062d3dc: mov    esi,eax
0x0062d3de: lea    rdx,[rbp+0x20]
0x0062d3e2: lea    rcx,[rbx+0x2b0]
0x0062d3e9: call   0x14006f240
0x0062d3ee: lea    rdx,[rbp+0x170]
0x0062d3f5: lea    rcx,[rbx+0x2b0]
0x0062d3fc: call   0x14006f230
0x0062d401: lea    r8,[rbp+0x170]
0x0062d408: lea    rdx,[rbp-0x6]
0x0062d40c: lea    rcx,[rbp+0x20]
0x0062d410: call   0x14006ee20
0x0062d415: xor    edx,edx
0x0062d417: movzx  ecx,BYTE PTR [rax]
0x0062d41a: call   0x1400657b0
0x0062d41f: test   al,al
0x0062d421: je     0x14062d196
0x0062d427: mov    r14d,0x1
0x0062d42d: nop    DWORD PTR [rax]
0x0062d430: lea    rcx,[rbp+0x20]
0x0062d434: call   0x14006ee10
0x0062d439: mov    rcx,QWORD PTR [rax]
0x0062d43c: add    rcx,0x28
0x0062d440: mov    edx,r14d
0x0062d443: call   0x140071f90
0x0062d448: test   al,al
0x0062d44a: jne    0x14062d4c5
0x0062d44c: lea    rcx,[rbp+0x20]
0x0062d450: call   0x14006ee10
0x0062d455: mov    rcx,QWORD PTR [rax]
0x0062d458: add    rcx,0x28
0x0062d45c: xor    edx,edx
0x0062d45e: call   0x140071f90
0x0062d463: movzx  edi,al
0x0062d466: lea    rcx,[rbp+0x20]
0x0062d46a: call   0x14006ee10
0x0062d46f: mov    rcx,QWORD PTR [rax]
0x0062d472: add    rcx,0x28
0x0062d476: mov    edx,0x3
0x0062d47b: call   0x140071f90
0x0062d480: test   al,al
0x0062d482: cmovne edi,r14d
0x0062d486: lea    rcx,[rbp+0x20]
0x0062d48a: call   0x14006ee10
0x0062d48f: mov    rcx,QWORD PTR [rax]
0x0062d492: mov    rax,QWORD PTR [rcx]
0x0062d495: call   QWORD PTR [rax]
0x0062d497: cmp    ax,0x2
0x0062d49b: jne    0x14062d4c5
0x0062d49d: lea    rcx,[rbp+0x20]
0x0062d4a1: call   0x14006ee10
0x0062d4a6: mov    rbx,QWORD PTR [rax]
0x0062d4a9: mov    rax,QWORD PTR [rbx]
0x0062d4ac: mov    rcx,rbx
0x0062d4af: call   QWORD PTR [rax+0x38]
0x0062d4b2: cmp    eax,DWORD PTR [r13+0x4]
0x0062d4b6: jne    0x14062d4c5
0x0062d4b8: test   dil,dil
0x0062d4bb: je     0x14062d4c2
0x0062d4bd: mov    r12,rbx
0x0062d4c0: jmp    0x14062d4c5
0x0062d4c2: mov    rsi,rbx
0x0062d4c5: lea    rcx,[rbp+0x20]
0x0062d4c9: call   0x14006ee00
0x0062d4ce: lea    r8,[rbp+0x170]
0x0062d4d5: lea    rdx,[rbp-0x6]
0x0062d4d9: lea    rcx,[rbp+0x20]
0x0062d4dd: call   0x14006ee20
0x0062d4e2: xor    edx,edx
0x0062d4e4: movzx  ecx,BYTE PTR [rax]
0x0062d4e7: call   0x1400657b0
0x0062d4ec: test   al,al
0x0062d4ee: jne    0x14062d430
0x0062d4f4: test   rsi,rsi
0x0062d4f7: mov    r14d,DWORD PTR [rbp-0x5c]
0x0062d4fb: je     0x14062d515
0x0062d4fd: lea    rdx,[rip+0x10339ac]        # 0x141660eb0 ; literal=" with temple"
0x0062d504: lea    rcx,[rbp+0x1140]
0x0062d50b: call   0x14006f560
0x0062d510: jmp    0x14062d196
0x0062d515: test   r12,r12
0x0062d518: je     0x14062d196
0x0062d51e: lea    rdx,[rip+0x103399b]        # 0x141660ec0 ; literal=" with ruined temple"
0x0062d525: lea    rcx,[rbp+0x1140]
0x0062d52c: call   0x14006f560
0x0062d531: jmp    0x14062d196
0x0062d536: lea    rcx,[r12+0x1300]
0x0062d53e: movsxd rdx,esi
0x0062d541: call   0x14006f360
0x0062d546: mov    edx,DWORD PTR [rax]
0x0062d548: lea    rcx,[rip+0x1ecc769]        # 0x1424f9cb8
0x0062d54f: call   0x140067dc0
0x0062d554: test   rax,rax
0x0062d557: je     0x14062d5d8
0x0062d559: lea    rbx,[rax+0xc8]
0x0062d560: mov    edx,0x2
0x0062d565: mov    rcx,rbx
0x0062d568: call   0x140071f90
0x0062d56d: test   al,al
0x0062d56f: je     0x14062d590
0x0062d571: lea    rdx,[rip+0xfd2bcc]        # 0x141600144 ; literal="Deity"
0x0062d578: lea    rcx,[rbp+0x1140]
0x0062d57f: call   0x14006f580
0x0062d584: lea    rbx,[rip+0x201ce65]        # 0x14264a3f0
0x0062d58b: jmp    0x14062d1a2
0x0062d590: mov    edx,0x3
0x0062d595: mov    rcx,rbx
0x0062d598: call   0x140071f90
0x0062d59d: lea    rcx,[rbp+0x1140]
0x0062d5a4: test   al,al
0x0062d5a6: je     0x14062d5c0
0x0062d5a8: lea    rdx,[rip+0xfbfab9]        # 0x1415ed068 ; literal="Force"
0x0062d5af: call   0x14006f580
0x0062d5b4: lea    rbx,[rip+0x201ce35]        # 0x14264a3f0
0x0062d5bb: jmp    0x14062d1a2
0x0062d5c0: lea    rdx,[rip+0xfd2b69]        # 0x141600130 ; literal="Object of worship"
0x0062d5c7: call   0x14006f580
0x0062d5cc: lea    rbx,[rip+0x201ce1d]        # 0x14264a3f0
0x0062d5d3: jmp    0x14062d1a2
0x0062d5d8: lea    rdx,[rip+0xfd2b51]        # 0x141600130 ; literal="Object of worship"
0x0062d5df: lea    rcx,[rbp+0x1140]
0x0062d5e6: call   0x14006f580
0x0062d5eb: jmp    0x14062d1a2
0x0062d5f0: mov    rcx,r13
0x0062d5f3: cmp    ebx,edi
0x0062d5f5: jne    0x14062d5ff
0x0062d5f7: mov    edx,DWORD PTR [rip+0x201e72f]        # 0x14264bd2c
0x0062d5fd: jmp    0x14062d64e
0x0062d5ff: mov    edx,DWORD PTR [rip+0x201e71b]        # 0x14264bd20
0x0062d605: jmp    0x14062d64e
0x0062d607: cmp    r14d,r15d
0x0062d60a: jne    0x14062d62f
0x0062d60c: cmp    ebx,esi
0x0062d60e: jne    0x14062d618
0x0062d610: mov    edx,DWORD PTR [rip+0x201e706]        # 0x14264bd1c
0x0062d616: jmp    0x14062d64b
0x0062d618: mov    rcx,r13
0x0062d61b: cmp    ebx,edi
0x0062d61d: jne    0x14062d627
0x0062d61f: mov    edx,DWORD PTR [rip+0x201e70f]        # 0x14264bd34
0x0062d625: jmp    0x14062d64e
0x0062d627: mov    edx,DWORD PTR [rip+0x201e6fb]        # 0x14264bd28
0x0062d62d: jmp    0x14062d64e
0x0062d62f: cmp    ebx,esi
0x0062d631: jne    0x14062d63b
0x0062d633: mov    edx,DWORD PTR [rip+0x201e6df]        # 0x14264bd18
0x0062d639: jmp    0x14062d64b
0x0062d63b: cmp    ebx,edi
0x0062d63d: mov    edx,DWORD PTR [rip+0x201e6ed]        # 0x14264bd30
0x0062d643: je     0x14062d64b
0x0062d645: mov    edx,DWORD PTR [rip+0x201e6d9]        # 0x14264bd24
0x0062d64b: mov    rcx,r13
0x0062d64e: call   0x140adaad0
0x0062d653: inc    ebx
0x0062d655: cmp    ebx,edi
0x0062d657: jle    0x14062d3a0
0x0062d65d: inc    r14d
0x0062d660: cmp    r14d,r15d
0x0062d663: jle    0x14062d392
0x0062d669: mov    r13d,DWORD PTR [rsp+0x78]
0x0062d66e: xor    r8d,r8d
0x0062d671: mov    edx,0x6
0x0062d676: mov    r9b,0x1
0x0062d679: lea    rbx,[rip+0x201cd70]        # 0x14264a3f0
0x0062d680: mov    rcx,rbx
0x0062d683: call   0x1400bb130
0x0062d688: mov    r12,QWORD PTR [rbp-0x78]
0x0062d68c: lea    rcx,[r12+0x1330]
0x0062d694: lea    rdx,[rbp+0xb0]
0x0062d69b: call   0x14006f240
0x0062d6a0: lea    rcx,[r12+0x1330]
0x0062d6a8: lea    rdx,[rbp+0x178]
0x0062d6af: call   0x14006f230
0x0062d6b4: lea    r8,[rbp+0x178]
0x0062d6bb: lea    rdx,[rbp-0x5]
0x0062d6bf: lea    rcx,[rbp+0xb0]
0x0062d6c6: call   0x14006ee20
0x0062d6cb: xor    edx,edx
0x0062d6cd: movzx  ecx,BYTE PTR [rax]
0x0062d6d0: call   0x1400657b0
0x0062d6d5: test   al,al
0x0062d6d7: je     0x14062d74b
0x0062d6d9: nop    DWORD PTR [rax+0x0]
0x0062d6e0: cmp    r13d,r15d
0x0062d6e3: jge    0x14062d74b
0x0062d6e5: lea    r8d,[rsi+0x2]
0x0062d6e9: mov    edx,r13d
0x0062d6ec: mov    rcx,rbx
0x0062d6ef: call   0x1400bb120
0x0062d6f4: lea    rcx,[rbp+0xb0]
0x0062d6fb: call   0x14006ee10
0x0062d700: xor    r9d,r9d
0x0062d703: xor    r8d,r8d
0x0062d706: mov    rdx,QWORD PTR [rax]
0x0062d709: mov    rcx,rbx
0x0062d70c: call   0x140ad9960
0x0062d711: lea    rcx,[rbp+0xb0]
0x0062d718: call   0x14006ee00
0x0062d71d: inc    r13d
0x0062d720: lea    r8,[rbp+0x178]
0x0062d727: lea    rdx,[rbp-0x5]
0x0062d72b: lea    rcx,[rbp+0xb0]
0x0062d732: call   0x14006ee20
0x0062d737: xor    edx,edx
0x0062d739: movzx  ecx,BYTE PTR [rax]
0x0062d73c: call   0x1400657b0
0x0062d741: test   al,al
0x0062d743: jne    0x14062d6e0
0x0062d745: jmp    0x14062d74b
0x0062d747: mov    r12,QWORD PTR [rbp-0x78]
0x0062d74b: mov    edx,DWORD PTR [r12+0x340]
0x0062d753: mov    rcx,QWORD PTR [rip+0x1ebe3fe]        # 0x1424ebb58
0x0062d75a: call   0x14007db20
0x0062d75f: mov    rbx,rax
0x0062d762: cmp    BYTE PTR [rbp-0x3c],0x0
0x0062d766: je     0x14062d79a
0x0062d768: lea    rcx,[r12+0x1280]
0x0062d770: call   0x14006ee50
0x0062d775: test   rax,rax
0x0062d778: je     0x14062d79a
0x0062d77a: movsxd rax,DWORD PTR [r12+0x1348]
0x0062d782: cmp    eax,0xffffffff
0x0062d785: je     0x14062d79a
0x0062d787: mov    rdx,rax
0x0062d78a: lea    rcx,[r12+0x1280]
0x0062d792: call   0x14006f220
0x0062d797: mov    rbx,QWORD PTR [rax]
0x0062d79a: test   rbx,rbx
0x0062d79d: je     0x14062d8bc
0x0062d7a3: mov    rcx,rbx
0x0062d7a6: call   0x1409b4e70
0x0062d7ab: mov    rdi,rax
0x0062d7ae: xor    edx,edx
0x0062d7b0: lea    rcx,[rip+0x1d9ffb9]        # 0x1423cd770
0x0062d7b7: call   0x140071f90
0x0062d7bc: test   al,al
0x0062d7be: je     0x14062d83d
0x0062d7c0: lea    rcx,[rbp+0x3c00]
0x0062d7c7: call   0x1400bbf90
0x0062d7cc: mov    ecx,DWORD PTR [rbx+0x88]
0x0062d7d2: mov    DWORD PTR [rbp+0x3d88],ecx
0x0062d7d8: test   rdi,rdi
0x0062d7db: je     0x14062d7e2
0x0062d7dd: mov    eax,DWORD PTR [rdi+0x4]
0x0062d7e0: jmp    0x14062d7e7
0x0062d7e2: mov    eax,0xffffffff
0x0062d7e7: movsx  r9d,WORD PTR [rbx+0x84]
0x0062d7ef: movsx  r8d,WORD PTR [rbx+0x82]
0x0062d7f7: xor    ecx,ecx
0x0062d7f9: mov    DWORD PTR [rsp+0x58],ecx
0x0062d7fd: mov    DWORD PTR [rsp+0x50],ecx
0x0062d801: lea    rcx,[rbp+0x3c00]
0x0062d808: mov    QWORD PTR [rsp+0x48],rcx
0x0062d80d: mov    BYTE PTR [rsp+0x40],0x1
0x0062d812: mov    BYTE PTR [rsp+0x38],0x0
0x0062d817: mov    DWORD PTR [rsp+0x30],eax
0x0062d81b: .byte 0xc7
0x0062d81c: rex.R and al,0x28
0x0062d81f: .byte 0x3
