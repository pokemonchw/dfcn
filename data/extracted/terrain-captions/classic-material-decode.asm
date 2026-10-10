; classic; PE:6a70b91c:0270a000; material-decode; RVA 0x14cbbe0..0x14cc09f
0x014cbbe0: mov    QWORD PTR [rsp+0x18],rbx
0x014cbbe5: push   rbp
0x014cbbe6: push   rsi
0x014cbbe7: push   rdi
0x014cbbe8: push   r13
0x014cbbea: push   r15
0x014cbbec: sub    rsp,0x40
0x014cbbf0: movsx  esi,r8w
0x014cbbf4: movzx  ebp,r9w
0x014cbbf8: movsx  edi,dx
0x014cbbfb: movzx  r8d,si
0x014cbbff: movzx  edx,di
0x014cbc02: mov    rbx,rcx
0x014cbc05: call   0x140067f10
0x014cbc0a: movzx  r15d,ax
0x014cbc0e: xor    r13d,r13d
0x014cbc11: mov    ecx,r15d
0x014cbc14: mov    r8d,0x3
0x014cbc1a: cmp    r15d,0x15c
0x014cbc21: ja     0x1414cbc55
0x014cbc23: je     0x1414cbc76
0x014cbc25: sub    ecx,0x27
0x014cbc28: cmp    ecx,0xe0
0x014cbc2e: ja     0x1414cbc7c
0x014cbc30: movsxd rax,ecx
0x014cbc33: lea    rdx,[rip+0xfffffffffeb343c6]        # 0x140000000
0x014cbc3a: movzx  eax,BYTE PTR [rdx+rax*1+0x14cc0ac]
0x014cbc42: mov    ecx,DWORD PTR [rdx+rax*4+0x14cc0a0]
0x014cbc49: add    rcx,rdx
0x014cbc4c: jmp    rcx
0x014cbc4e: mov    ecx,0x1
0x014cbc53: jmp    0x1414cbc80
0x014cbc55: sub    ecx,0x15d
0x014cbc5b: cmp    ecx,0x6
0x014cbc5e: ja     0x1414cbc7c
0x014cbc60: lea    rdx,[rip+0xfffffffffeb34399]        # 0x140000000
0x014cbc67: movsxd rax,ecx
0x014cbc6a: mov    eax,DWORD PTR [rdx+rax*4+0x14cc190]
0x014cbc71: add    rax,rdx
0x014cbc74: jmp    rax
0x014cbc76: movzx  ecx,r8w
0x014cbc7a: jmp    0x1414cbc80
0x014cbc7c: movzx  ecx,r13w
0x014cbc80: mov    rax,QWORD PTR [rsp+0xb0]
0x014cbc88: mov    WORD PTR [rax],cx
0x014cbc8b: movzx  ecx,r15w
0x014cbc8f: call   0x1402471a0
0x014cbc94: test   al,al
0x014cbc96: je     0x1414cbd08
0x014cbc98: mov    rax,QWORD PTR [rbx+0x158]
0x014cbc9f: movzx  r8d,si
0x014cbca3: sub    rax,QWORD PTR [rbx+0x150]
0x014cbcaa: movzx  edx,di
0x014cbcad: sar    rax,0x3
0x014cbcb1: mov    rcx,rbx
0x014cbcb4: dec    eax
0x014cbcb6: mov    DWORD PTR [rsp+0x28],eax
0x014cbcba: mov    DWORD PTR [rsp+0x20],r13d
0x014cbcbf: call   0x140a445c0
0x014cbcc4: test   rax,rax
0x014cbcc7: je     0x1414cbd08
0x014cbcc9: movzx  edx,WORD PTR [rax+0x6]
0x014cbccd: mov    rcx,QWORD PTR [rsp+0x90]
0x014cbcd5: mov    WORD PTR [rcx],dx
0x014cbcd8: movzx  edx,WORD PTR [rax+0x8]
0x014cbcdc: mov    rcx,QWORD PTR [rsp+0x98]
0x014cbce4: mov    WORD PTR [rcx],dx
0x014cbce7: movzx  edx,WORD PTR [rax+0xa]
0x014cbceb: mov    rcx,QWORD PTR [rsp+0xa0]
0x014cbcf3: mov    WORD PTR [rcx],dx
0x014cbcf6: mov    ecx,DWORD PTR [rax+0xc]
0x014cbcf9: mov    rax,QWORD PTR [rsp+0xa8]
0x014cbd01: mov    DWORD PTR [rax],ecx
0x014cbd03: jmp    0x1414cc08b
0x014cbd08: mov    rax,QWORD PTR [rsp+0x90]
0x014cbd10: mov    r8d,0xffffffff
0x014cbd16: mov    QWORD PTR [rsp+0x70],r12
0x014cbd1b: movzx  ecx,r15w
0x014cbd1f: mov    r12,QWORD PTR [rsp+0xa0]
0x014cbd27: mov    QWORD PTR [rsp+0x78],r14
0x014cbd2c: mov    WORD PTR [rax],0x4
0x014cbd31: mov    rax,QWORD PTR [rsp+0x98]
0x014cbd39: mov    WORD PTR [rax],r8w
0x014cbd3d: mov    WORD PTR [r12],r13w
0x014cbd42: call   0x1402472c0
0x014cbd47: mov    r14,QWORD PTR [rsp+0xa8]
0x014cbd4f: test   al,al
0x014cbd51: je     0x1414cbde2
0x014cbd57: movzx  r8d,si
0x014cbd5b: movzx  edx,di
0x014cbd5e: mov    rcx,rbx
0x014cbd61: call   0x1414cc230
0x014cbd66: mov    r8,rax
0x014cbd69: test   rax,rax
0x014cbd6c: je     0x1414cbdd2
0x014cbd6e: mov    ecx,edi
0x014cbd70: and    ecx,0x8000000f
0x014cbd76: jge    0x1414cbd7f
0x014cbd78: dec    ecx
0x014cbd7a: or     ecx,0xfffffff0
0x014cbd7d: inc    ecx
0x014cbd7f: movsxd rdx,ecx
0x014cbd82: mov    eax,esi
0x014cbd84: add    rdx,rdx
0x014cbd87: and    eax,0x8000000f
0x014cbd8c: jge    0x1414cbd95
0x014cbd8e: dec    eax
0x014cbd90: or     eax,0xfffffff0
0x014cbd93: inc    eax
0x014cbd95: movsxd rcx,eax
0x014cbd98: lea    rax,[r8+rdx*8]
0x014cbd9c: movzx  edx,BYTE PTR [rcx+rax*1+0x208]
0x014cbda4: shl    edx,0x15
0x014cbda7: test   edx,edx
0x014cbda9: je     0x1414cbdd2
0x014cbdab: cmp    edx,0x200000
0x014cbdb1: jne    0x1414cbe51
0x014cbdb7: movzx  r9d,bp
0x014cbdbb: movzx  r8d,si
0x014cbdbf: movzx  edx,di
0x014cbdc2: mov    rcx,rbx
0x014cbdc5: call   0x1414cbb50
0x014cbdca: movsx  ecx,ax
0x014cbdcd: mov    DWORD PTR [r14],ecx
0x014cbdd0: jmp    0x1414cbe51
0x014cbdd2: mov    WORD PTR [r12],0x6
0x014cbdd9: mov    DWORD PTR [r14],0xffffffff
0x014cbde0: jmp    0x1414cbe51
0x014cbde2: movzx  ecx,r15w
0x014cbde6: call   0x140286670
0x014cbdeb: test   al,al
0x014cbded: jne    0x1414cbdbb
0x014cbdef: movzx  ecx,r15w
0x014cbdf3: call   0x140286920
0x014cbdf8: test   al,al
0x014cbdfa: je     0x1414cbe2a
0x014cbdfc: mov    WORD PTR [r12],r8w
0x014cbe01: movzx  edx,di
0x014cbe04: mov    DWORD PTR [r14],r8d
0x014cbe07: mov    rcx,rbx
0x014cbe0a: movzx  r8d,si
0x014cbe0e: call   0x14149d8e0
0x014cbe13: test   rax,rax
0x014cbe16: je     0x1414cbe51
0x014cbe18: mov    r9,QWORD PTR [rax]
0x014cbe1b: mov    r8,r14
0x014cbe1e: mov    rdx,r12
0x014cbe21: mov    rcx,rax
0x014cbe24: call   QWORD PTR [r9+0x40]
0x014cbe28: jmp    0x1414cbe51
0x014cbe2a: movzx  ecx,r15w
0x014cbe2e: call   0x140286ab0
0x014cbe33: movzx  r8d,si
0x014cbe37: movzx  edx,di
0x014cbe3a: mov    rcx,rbx
0x014cbe3d: test   al,al
0x014cbe3f: je     0x1414cbebf
0x014cbe41: call   0x1414cc1b0
0x014cbe46: test   rax,rax
0x014cbe49: je     0x1414cbeaa
0x014cbe4b: mov    eax,DWORD PTR [rax+0x8]
0x014cbe4e: mov    DWORD PTR [r14],eax
0x014cbe51: mov    esi,0x3
0x014cbe56: mov    rbx,QWORD PTR [rsp+0x90]
0x014cbe5e: cmp    WORD PTR [rbx],0x4
0x014cbe62: jne    0x1414cc081
0x014cbe68: mov    r8d,DWORD PTR [r14]
0x014cbe6b: lea    rcx,[rip+0xeff56e]        # 0x1423cb3e0
0x014cbe72: movzx  edx,WORD PTR [r12]
0x014cbe77: call   0x1414a8ce0
0x014cbe7c: test   rax,rax
0x014cbe7f: je     0x1414cc081
0x014cbe85: cmp    DWORD PTR [rax+0x298],0x6
0x014cbe8c: jle    0x1414cc078
0x014cbe92: mov    rax,QWORD PTR [rax+0x290]
0x014cbe99: test   BYTE PTR [rax+0x6],0x1
0x014cbe9d: je     0x1414cc078
0x014cbea3: mov    al,0x1
0x014cbea5: jmp    0x1414cc07a
0x014cbeaa: movzx  r9d,bp
0x014cbeae: movzx  r8d,si
0x014cbeb2: movzx  edx,di
0x014cbeb5: mov    rcx,rbx
0x014cbeb8: call   0x14014e090
0x014cbebd: jmp    0x1414cbe4e
0x014cbebf: call   0x14014e090
0x014cbec4: mov    DWORD PTR [r14],eax
0x014cbec7: test   eax,eax
0x014cbec9: js     0x1414cbf32
0x014cbecb: mov    rcx,QWORD PTR [rbx+0x11b3d8]
0x014cbed2: movsxd rdx,eax
0x014cbed5: mov    rax,QWORD PTR [rbx+0x11b3e0]
0x014cbedc: sub    rax,rcx
0x014cbedf: sar    rax,0x3
0x014cbee3: cmp    rdx,rax
0x014cbee6: jae    0x1414cbf32
0x014cbee8: mov    rax,QWORD PTR [rcx+rdx*8]
0x014cbeec: cmp    DWORD PTR [rax+0x40],0x1
0x014cbef0: jle    0x1414cbf01
0x014cbef2: mov    rax,QWORD PTR [rax+0x38]
0x014cbef6: test   BYTE PTR [rax+0x1],0x8
0x014cbefa: je     0x1414cbf01
0x014cbefc: mov    r8b,0x1
0x014cbeff: jmp    0x1414cbf04
0x014cbf01: xor    r8b,r8b
0x014cbf04: movzx  ecx,r15w
0x014cbf08: call   0x140065cc0
0x014cbf0d: test   r8b,r8b
0x014cbf10: je     0x1414cbf3b
0x014cbf12: test   al,al
0x014cbf14: je     0x1414cbe51
0x014cbf1a: movzx  r9d,bp
0x014cbf1e: movzx  r8d,si
0x014cbf22: movzx  edx,di
0x014cbf25: mov    rcx,rbx
0x014cbf28: call   0x141498c50
0x014cbf2d: jmp    0x1414cbe4e
0x014cbf32: movzx  ecx,r15w
0x014cbf36: call   0x140065cc0
0x014cbf3b: test   al,al
0x014cbf3d: jne    0x1414cbe51
0x014cbf43: mov    WORD PTR [rsp+0x28],bp
0x014cbf48: lea    r8,[rsp+0xb0]
0x014cbf50: movzx  r9d,di
0x014cbf54: mov    WORD PTR [rsp+0x20],si
0x014cbf59: lea    rdx,[rsp+0x30]
0x014cbf5e: mov    rcx,rbx
0x014cbf61: call   0x14007dc60
0x014cbf66: movsx  r8d,WORD PTR [rsp+0xb0]
0x014cbf6f: movsx  edx,WORD PTR [rsp+0x30]
0x014cbf74: mov    rcx,QWORD PTR [rbx+0x11a668]
0x014cbf7b: call   0x14014df60
0x014cbf80: mov    rdi,rax
0x014cbf83: test   rax,rax
0x014cbf86: je     0x1414cbff3
0x014cbf88: mov    r8,QWORD PTR [rax+0x8]
0x014cbf8c: mov    rcx,QWORD PTR [rax+0x10]
0x014cbf90: sub    rcx,r8
0x014cbf93: sar    rcx,0x3
0x014cbf97: sub    ecx,0x1
0x014cbf9a: js     0x1414cbff3
0x014cbf9c: movsxd rdx,ecx
0x014cbf9f: lea    r8,[r8+rdx*8]
0x014cbfa3: mov    rax,QWORD PTR [r8]
0x014cbfa6: movsxd r9,DWORD PTR [rax+0x4]
0x014cbfaa: test   r9d,r9d
0x014cbfad: js     0x1414cbfe7
0x014cbfaf: mov    r10,QWORD PTR [rbx+0x11b3d8]
0x014cbfb6: mov    rax,QWORD PTR [rbx+0x11b3e0]
0x014cbfbd: sub    rax,r10
0x014cbfc0: sar    rax,0x3
0x014cbfc4: cmp    r9,rax
0x014cbfc7: jae    0x1414cbfe7
0x014cbfc9: mov    rax,QWORD PTR [r10+r9*8]
0x014cbfcd: cmp    DWORD PTR [rax+0x40],0x1
0x014cbfd1: jle    0x1414cbfe1
0x014cbfd3: mov    rax,QWORD PTR [rax+0x38]
0x014cbfd7: test   BYTE PTR [rax+0x1],0x8
0x014cbfdb: je     0x1414cbfe1
0x014cbfdd: mov    al,0x1
0x014cbfdf: jmp    0x1414cbfe3
0x014cbfe1: xor    al,al
0x014cbfe3: test   al,al
0x014cbfe5: jne    0x1414cc017
0x014cbfe7: dec    ecx
0x014cbfe9: sub    r8,0x8
0x014cbfed: sub    rdx,0x1
0x014cbff1: jns    0x1414cbfa3
0x014cbff3: mov    rdi,QWORD PTR [rbx+0x11b3e0]
0x014cbffa: sub    rdi,QWORD PTR [rbx+0x11b3d8]
0x014cc001: sar    rdi,0x3
0x014cc005: cmp    edi,0x1
0x014cc008: ja     0x1414cc033
0x014cc00a: mov    esi,0x3
0x014cc00f: mov    DWORD PTR [r14],r13d
0x014cc012: jmp    0x1414cbe56
0x014cc017: mov    rax,QWORD PTR [rdi+0x8]
0x014cc01b: mov    esi,0x3
0x014cc020: movsxd rcx,ecx
0x014cc023: mov    rcx,QWORD PTR [rax+rcx*8]
0x014cc027: mov    r13d,DWORD PTR [rcx+0x4]
0x014cc02b: mov    DWORD PTR [r14],r13d
0x014cc02e: jmp    0x1414cbe56
0x014cc033: call   0x140eb1820
0x014cc038: mov    r8d,eax
0x014cc03b: mov    esi,0x3
0x014cc040: mov    ecx,r8d
0x014cc043: mov    eax,esi
0x014cc045: mul    r8d
0x014cc048: mov    eax,0x7fffffff
0x014cc04d: sub    ecx,edx
0x014cc04f: shr    ecx,1
0x014cc051: add    ecx,edx
0x014cc053: xor    edx,edx
0x014cc055: div    edi
0x014cc057: shr    ecx,0x1e
0x014cc05a: xor    edx,edx
0x014cc05c: imul   ecx,ecx,0x7fffffff
0x014cc062: sub    r8d,ecx
0x014cc065: lea    ecx,[rax+0x1]
0x014cc068: mov    eax,r8d
0x014cc06b: div    ecx
0x014cc06d: mov    r13d,eax
0x014cc070: mov    DWORD PTR [r14],eax
0x014cc073: jmp    0x1414cbe56
0x014cc078: xor    al,al
0x014cc07a: test   al,al
0x014cc07c: je     0x1414cc081
0x014cc07e: mov    WORD PTR [rbx],si
0x014cc081: mov    r12,QWORD PTR [rsp+0x70]
0x014cc086: mov    r14,QWORD PTR [rsp+0x78]
0x014cc08b: mov    rbx,QWORD PTR [rsp+0x80]
0x014cc093: add    rsp,0x40
0x014cc097: pop    r15
0x014cc099: pop    r13
0x014cc09b: pop    rdi
0x014cc09c: pop    rsi
0x014cc09d: pop    rbp
0x014cc09e: ret
