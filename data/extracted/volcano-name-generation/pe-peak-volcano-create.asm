0x140f67700: mov    rax,rsp
0x140f67703: mov    QWORD PTR [rax+0x10],rbx
0x140f67707: mov    QWORD PTR [rax+0x18],rsi
0x140f6770b: mov    QWORD PTR [rax+0x20],rdi
0x140f6770f: push   rbp
0x140f67710: push   r12
0x140f67712: push   r13
0x140f67714: push   r14
0x140f67716: push   r15
0x140f67718: lea    rbp,[rax-0x3a8]
0x140f6771f: sub    rsp,0x480
0x140f67726: movaps XMMWORD PTR [rax-0x38],xmm6
0x140f6772a: movaps XMMWORD PTR [rax-0x48],xmm7
0x140f6772e: movaps XMMWORD PTR [rax-0x58],xmm8
0x140f67733: movaps XMMWORD PTR [rax-0x68],xmm9
0x140f67738: mov    rax,QWORD PTR [rip+0x956901]        # 0x1418be040
0x140f6773f: xor    rax,rsp
0x140f67742: mov    QWORD PTR [rbp+0x330],rax
0x140f67749: mov    r15,rcx
0x140f6774c: mov    QWORD PTR [rbp-0x68],rcx
0x140f67750: mov    r14d,0x1
0x140f67756: mov    r12d,0xffffffff
0x140f6775c: mov    DWORD PTR [rsp+0x78],r12d
0x140f67761: xor    r13d,r13d
0x140f67764: movzx  r10d,WORD PTR [rip+0x15a6874]        # 0x14250dfe0
0x140f6776c: cmp    r10w,r14w
0x140f67770: jne    0x140f67a6f
0x140f67776: mov    DWORD PTR [rip+0x11fffd7],r14d        # 0x142167754
0x140f6777d: mov    DWORD PTR [rip+0x1442bc4],r12d        # 0x1423aa348
0x140f67784: mov    BYTE PTR [rip+0x991b0b],r12b        # 0x1418f9296
0x140f6778b: mov    DWORD PTR [rip+0x11ec732],r12d        # 0x142153ec4
0x140f67792: mov    BYTE PTR [rcx+0x4844c],r14b
0x140f67799: mov    DWORD PTR [rcx+0x48448],r14d
0x140f677a0: mov    BYTE PTR [rcx+0x48454],r14b
0x140f677a7: mov    DWORD PTR [rcx+0x48458],r13d
0x140f677ae: lea    rcx,[rip+0x15a682b]        # 0x14250dfe0
0x140f677b5: call   0x141456460
0x140f677ba: mov    WORD PTR [rip+0x16f96b6],r13w        # 0x142660e78
0x140f677c2: lea    rcx,[rip+0x16f9d8f]        # 0x142661558
0x140f677c9: call   0x1400708c0
0x140f677ce: mov    eax,DWORD PTR [rip+0x11fff7c]        # 0x142167750
0x140f677d4: mov    DWORD PTR [rip+0x15b4446],eax        # 0x14251bc20
0x140f677da: mov    DWORD PTR [rip+0x16f95f0],eax        # 0x142660dd0
0x140f677e0: lea    rcx,[r15+0x48460]
0x140f677e7: call   0x140070480
0x140f677ec: mov    rbx,rax
0x140f677ef: sub    ebx,r14d
0x140f677f2: js     0x140f67827
0x140f677f4: movsxd rdi,ebx
0x140f677f7: nop    WORD PTR [rax+rax*1+0x0]
0x140f67800: mov    rdx,rdi
0x140f67803: lea    rcx,[r15+0x48460]
0x140f6780a: call   0x140070850
0x140f6780f: mov    rcx,QWORD PTR [rax]
0x140f67812: test   rcx,rcx
0x140f67815: je     0x140f6781f
0x140f67817: mov    edx,r14d
0x140f6781a: call   0x140291bf0
0x140f6781f: dec    rdi
0x140f67822: sub    ebx,r14d
0x140f67825: jns    0x140f67800
0x140f67827: lea    rcx,[r15+0x48460]
0x140f6782e: call   0x1400708c0
0x140f67833: lea    rcx,[rip+0x15b48fe]        # 0x14251c138
0x140f6783a: call   0x1409105d0
0x140f6783f: lea    rcx,[rip+0x15b4f5a]        # 0x14251c7a0
0x140f67846: call   0x140070480
0x140f6784b: mov    rbx,rax
0x140f6784e: sub    ebx,r14d
0x140f67851: js     0x140f67887
0x140f67853: movsxd rdi,ebx
0x140f67856: data16 nop WORD PTR [rax+rax*1+0x0]
0x140f67860: mov    rdx,rdi
0x140f67863: lea    rcx,[rip+0x15b4f36]        # 0x14251c7a0
0x140f6786a: call   0x140070850
0x140f6786f: mov    rcx,QWORD PTR [rax]
0x140f67872: test   rcx,rcx
0x140f67875: je     0x140f6787f
0x140f67877: mov    edx,r14d
0x140f6787a: call   0x140f6d7b0
0x140f6787f: dec    rdi
0x140f67882: sub    ebx,r14d
0x140f67885: jns    0x140f67860
0x140f67887: lea    rcx,[rip+0x15b4f12]        # 0x14251c7a0
0x140f6788e: call   0x1400708c0
0x140f67893: mov    r8d,DWORD PTR [rip+0x15a68fe]        # 0x14250e198
0x140f6789a: mov    edx,DWORD PTR [rip+0x15a68f4]        # 0x14250e194
0x140f678a0: mov    rcx,r15
0x140f678a3: call   0x140fa65c0
0x140f678a8: lea    rcx,[r15+0x158]
0x140f678af: cmp    QWORD PTR [rcx],r13
0x140f678b2: jne    0x140f678c9
0x140f678b4: movzx  r8d,WORD PTR [r15+0xa4]
0x140f678bc: movzx  edx,WORD PTR [r15+0xa0]
0x140f678c4: call   0x140f18380
0x140f678c9: lea    rcx,[r15+0x168]
0x140f678d0: cmp    QWORD PTR [rcx],r13
0x140f678d3: jne    0x140f678ea
0x140f678d5: movzx  r8d,WORD PTR [r15+0xa4]
0x140f678dd: movzx  edx,WORD PTR [r15+0xa0]
0x140f678e5: call   0x140f18380
0x140f678ea: cmp    QWORD PTR [r15+0x130],r13
0x140f678f1: jne    0x140f6790f
0x140f678f3: lea    rcx,[r15+0x128]
0x140f678fa: movzx  r8d,WORD PTR [r15+0xa4]
0x140f67902: movzx  edx,WORD PTR [r15+0xa0]
0x140f6790a: call   0x140f14a90
0x140f6790f: lea    rcx,[r15+0xc0]
0x140f67916: mov    r8d,DWORD PTR [r15+0xa4]
0x140f6791d: mov    edx,DWORD PTR [r15+0xa0]
0x140f67924: call   0x140f9b580
0x140f67929: cmp    QWORD PTR [r15+0x2c8],r13
0x140f67930: je     0x140f67977
0x140f67932: mov    ecx,DWORD PTR [r15+0xa4]
0x140f67939: add    ecx,0xf
0x140f6793c: sar    ecx,0x4
0x140f6793f: mov    eax,DWORD PTR [r15+0xa0]
0x140f67946: add    eax,0xf
0x140f67949: sar    eax,0x4
0x140f6794c: imul   ecx,eax
0x140f6794f: mov    rbx,r13
0x140f67952: movsxd rdi,ecx
0x140f67955: test   ecx,ecx
0x140f67957: jle    0x140f67977
0x140f67959: nop    DWORD PTR [rax+0x0]
0x140f67960: call   0x140ece790
0x140f67965: mov    rcx,QWORD PTR [r15+0x2c8]
0x140f6796c: mov    DWORD PTR [rcx+rbx*4],eax
0x140f6796f: inc    rbx
0x140f67972: cmp    rbx,rdi
0x140f67975: jl     0x140f67960
0x140f67977: mov    rbx,QWORD PTR [r15+0x2b8]
0x140f6797e: test   rbx,rbx
0x140f67981: je     0x140f679f1
0x140f67983: mov    edi,DWORD PTR [r15+0xa4]
0x140f6798a: imul   edi,DWORD PTR [r15+0xa0]
0x140f67992: test   edi,edi
0x140f67994: jle    0x140f679f1
0x140f67996: mov    ecx,0x5
0x140f6799b: call   0x140073560
0x140f679a0: or     WORD PTR [rbx],ax
0x140f679a3: mov    ecx,0x5
0x140f679a8: call   0x140073560
0x140f679ad: shl    ax,0x3
0x140f679b1: or     WORD PTR [rbx],ax
0x140f679b4: mov    ecx,0x5
0x140f679b9: call   0x140073560
0x140f679be: shl    ax,0x6
0x140f679c2: or     WORD PTR [rbx],ax
0x140f679c5: mov    ecx,0x5
0x140f679ca: call   0x140073560
0x140f679cf: shl    ax,0x9
0x140f679d3: or     WORD PTR [rbx],ax
0x140f679d6: mov    ecx,0x5
0x140f679db: call   0x140073560
0x140f679e0: shl    ax,0xc
0x140f679e4: or     WORD PTR [rbx],ax
0x140f679e7: lea    rbx,[rbx+0x2]
0x140f679eb: dec    edi
0x140f679ed: test   edi,edi
0x140f679ef: jg     0x140f67996
0x140f679f1: mov    rbx,QWORD PTR [r15+0x2c0]
0x140f679f8: test   rbx,rbx
0x140f679fb: je     0x140f67a26
0x140f679fd: mov    edi,DWORD PTR [r15+0xa4]
0x140f67a04: imul   edi,DWORD PTR [r15+0xa0]
0x140f67a0c: test   edi,edi
0x140f67a0e: jle    0x140f67a26
0x140f67a10: mov    ecx,0x5
0x140f67a15: call   0x140073560
0x140f67a1a: or     BYTE PTR [rbx],al
0x140f67a1c: lea    rbx,[rbx+0x1]
0x140f67a20: dec    edi
0x140f67a22: test   edi,edi
0x140f67a24: jg     0x140f67a10
0x140f67a26: lea    rcx,[rbp+0x40]
0x140f67a2a: call   0x1402919e0
0x140f67a2f: nop
0x140f67a30: lea    rdx,[rip+0x15b4241]        # 0x14251bc78
0x140f67a37: lea    rcx,[rbp+0x40]
0x140f67a3b: call   0x140070bd0
0x140f67a40: mov    BYTE PTR [rbp+0x144],0x1
0x140f67a47: mov    DWORD PTR [rsp+0x4c],r12d
0x140f67a4c: lea    r8,[rsp+0x4c]
0x140f67a51: lea    rdx,[rbp+0x40]
0x140f67a55: mov    rcx,r15
0x140f67a58: call   0x140ee7310
0x140f67a5d: nop
0x140f67a5e: lea    rcx,[rbp+0x40]
0x140f67a62: call   0x14029cde0
0x140f67a67: movzx  r10d,WORD PTR [rip+0x15a6571]        # 0x14250dfe0
0x140f67a6f: mov    r14d,0x3
0x140f67a75: cmp    r10w,0x2
0x140f67a7a: jne    0x140f699dc
0x140f67a80: mov    esi,r13d
0x140f67a83: mov    r11d,0xffff8ad0
0x140f67a89: cmp    DWORD PTR [r15+0xa0],r13d
0x140f67a90: jle    0x140f67d4e
0x140f67a96: data16 nop WORD PTR [rax+rax*1+0x0]
0x140f67aa0: mov    edi,r13d
0x140f67aa3: cmp    DWORD PTR [r15+0xa4],r13d
0x140f67aaa: jle    0x140f67d3f
0x140f67ab0: movsxd rbx,esi
0x140f67ab3: movsxd r10,edi
0x140f67ab6: mov    r9d,0x10
0x140f67abc: imul   r8,r10,0x70
0x140f67ac0: add    r8,0x34
0x140f67ac4: mov    rax,QWORD PTR [rip+0x15b461d]        # 0x14251c0e8
0x140f67acb: test   rax,rax
0x140f67ace: je     0x140f67af6
0x140f67ad0: mov    rdx,QWORD PTR [r9+rax*1-0x8]
0x140f67ad5: test   rdx,rdx
0x140f67ad8: je     0x140f67af6
0x140f67ada: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67ade: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67ae5: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67ae9: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67aee: mov    WORD PTR [rcx+r8*1-0x4],ax
0x140f67af4: jmp    0x140f67b07
0x140f67af6: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67afd: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67b01: mov    WORD PTR [rcx+r8*1-0x4],r11w
0x140f67b07: mov    rax,QWORD PTR [rip+0x15b45da]        # 0x14251c0e8
0x140f67b0e: test   rax,rax
0x140f67b11: je     0x140f67b38
0x140f67b13: mov    rdx,QWORD PTR [r9+rax*1]
0x140f67b17: test   rdx,rdx
0x140f67b1a: je     0x140f67b38
0x140f67b1c: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67b20: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67b27: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67b2b: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67b30: mov    WORD PTR [rcx+r8*1-0x2],ax
0x140f67b36: jmp    0x140f67b49
0x140f67b38: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67b3f: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67b43: mov    WORD PTR [rcx+r8*1-0x2],r11w
0x140f67b49: mov    rax,QWORD PTR [rip+0x15b4598]        # 0x14251c0e8
0x140f67b50: test   rax,rax
0x140f67b53: je     0x140f67b7a
0x140f67b55: mov    rdx,QWORD PTR [r9+rax*1+0x8]
0x140f67b5a: test   rdx,rdx
0x140f67b5d: je     0x140f67b7a
0x140f67b5f: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67b63: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67b6a: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67b6e: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67b73: mov    WORD PTR [r8+rcx*1],ax
0x140f67b78: jmp    0x140f67b8a
0x140f67b7a: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67b81: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67b85: mov    WORD PTR [r8+rcx*1],r11w
0x140f67b8a: mov    rax,QWORD PTR [rip+0x15b4557]        # 0x14251c0e8
0x140f67b91: test   rax,rax
0x140f67b94: je     0x140f67bbc
0x140f67b96: mov    rdx,QWORD PTR [r9+rax*1+0x10]
0x140f67b9b: test   rdx,rdx
0x140f67b9e: je     0x140f67bbc
0x140f67ba0: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67ba4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67bab: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67baf: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67bb4: mov    WORD PTR [rcx+r8*1+0x2],ax
0x140f67bba: jmp    0x140f67bcd
0x140f67bbc: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67bc3: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67bc7: mov    WORD PTR [rcx+r8*1+0x2],r11w
0x140f67bcd: mov    rax,QWORD PTR [rip+0x15b4514]        # 0x14251c0e8
0x140f67bd4: test   rax,rax
0x140f67bd7: je     0x140f67bff
0x140f67bd9: mov    rdx,QWORD PTR [r9+rax*1+0x18]
0x140f67bde: test   rdx,rdx
0x140f67be1: je     0x140f67bff
0x140f67be3: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67be7: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67bee: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67bf2: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67bf7: mov    WORD PTR [rcx+r8*1+0x4],ax
0x140f67bfd: jmp    0x140f67c10
0x140f67bff: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67c06: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67c0a: mov    WORD PTR [rcx+r8*1+0x4],r11w
0x140f67c10: mov    rax,QWORD PTR [rip+0x15b44d1]        # 0x14251c0e8
0x140f67c17: test   rax,rax
0x140f67c1a: je     0x140f67c42
0x140f67c1c: mov    rdx,QWORD PTR [r9+rax*1+0x20]
0x140f67c21: test   rdx,rdx
0x140f67c24: je     0x140f67c42
0x140f67c26: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67c2a: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67c31: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67c35: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67c3a: mov    WORD PTR [rcx+r8*1+0x6],ax
0x140f67c40: jmp    0x140f67c53
0x140f67c42: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67c49: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67c4d: mov    WORD PTR [rcx+r8*1+0x6],r11w
0x140f67c53: mov    rax,QWORD PTR [rip+0x15b448e]        # 0x14251c0e8
0x140f67c5a: test   rax,rax
0x140f67c5d: je     0x140f67c85
0x140f67c5f: mov    rdx,QWORD PTR [r9+rax*1+0x28]
0x140f67c64: test   rdx,rdx
0x140f67c67: je     0x140f67c85
0x140f67c69: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67c6d: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67c74: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67c78: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67c7d: mov    WORD PTR [rcx+r8*1+0x8],ax
0x140f67c83: jmp    0x140f67c96
0x140f67c85: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67c8c: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67c90: mov    WORD PTR [rcx+r8*1+0x8],r11w
0x140f67c96: mov    rax,QWORD PTR [rip+0x15b444b]        # 0x14251c0e8
0x140f67c9d: test   rax,rax
0x140f67ca0: je     0x140f67cc8
0x140f67ca2: mov    rdx,QWORD PTR [r9+rax*1+0x30]
0x140f67ca7: test   rdx,rdx
0x140f67caa: je     0x140f67cc8
0x140f67cac: mov    rdx,QWORD PTR [rdx+rbx*8]
0x140f67cb0: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67cb7: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67cbb: movzx  eax,WORD PTR [rdx+r10*2]
0x140f67cc0: mov    WORD PTR [rcx+r8*1+0xa],ax
0x140f67cc6: jmp    0x140f67cd9
0x140f67cc8: mov    rax,QWORD PTR [r15+0x2b0]
0x140f67ccf: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f67cd3: mov    WORD PTR [rcx+r8*1+0xa],r11w
0x140f67cd9: add    r8,0x10
0x140f67cdd: add    r9,0x40
0x140f67ce1: cmp    r9,0xd0
0x140f67ce8: jl     0x140f67ac4
0x140f67cee: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f67cf5: movsxd rax,edi
0x140f67cf8: imul   rcx,rax,0x70
0x140f67cfc: mov    rax,QWORD PTR [rdx+rbx*8]
0x140f67d00: add    rax,0x20
0x140f67d04: add    rcx,rax
0x140f67d07: call   0x140144de0
0x140f67d0c: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f67d13: movsxd rax,edi
0x140f67d16: imul   rcx,rax,0x70
0x140f67d1a: mov    rax,QWORD PTR [rdx+rbx*8]
0x140f67d1e: add    rax,0x8
0x140f67d22: add    rcx,rax
0x140f67d25: call   0x1400708c0
0x140f67d2a: inc    edi
0x140f67d2c: cmp    edi,DWORD PTR [r15+0xa4]
0x140f67d33: mov    r11d,0xffff8ad0
0x140f67d39: jl     0x140f67ab3
0x140f67d3f: inc    esi
0x140f67d41: cmp    esi,DWORD PTR [r15+0xa0]
0x140f67d48: jl     0x140f67aa0
0x140f67d4e: lea    rcx,[r15+0xe8]
0x140f67d55: call   0x1409137b0
0x140f67d5a: mov    rcx,r15
0x140f67d5d: call   0x140fa1320
0x140f67d62: mov    edi,r13d
0x140f67d65: lea    rcx,[r15+0x220]
0x140f67d6c: call   0x140070480
0x140f67d71: test   rax,rax
0x140f67d74: je     0x140f67db7
0x140f67d76: mov    rbx,r13
0x140f67d79: nop    DWORD PTR [rax+0x0]
0x140f67d80: mov    rdx,rbx
0x140f67d83: lea    rcx,[r15+0x220]
0x140f67d8a: call   0x140070850
0x140f67d8f: mov    rcx,QWORD PTR [rax]
0x140f67d92: test   rcx,rcx
0x140f67d95: je     0x140f67da1
0x140f67d97: mov    edx,0x1
0x140f67d9c: call   0x140f6d880
0x140f67da1: inc    edi
0x140f67da3: movsxd rbx,edi
0x140f67da6: lea    rcx,[r15+0x220]
0x140f67dad: call   0x140070480
0x140f67db2: cmp    rbx,rax
0x140f67db5: jb     0x140f67d80
0x140f67db7: lea    rcx,[r15+0x220]
0x140f67dbe: call   0x1400708c0
0x140f67dc3: mov    edi,r13d
0x140f67dc6: lea    rcx,[r15+0x268]
0x140f67dcd: call   0x140070480
0x140f67dd2: test   rax,rax
0x140f67dd5: je     0x140f67e17
0x140f67dd7: mov    rbx,r13
0x140f67dda: nop    WORD PTR [rax+rax*1+0x0]
0x140f67de0: mov    rdx,rbx
0x140f67de3: lea    rcx,[r15+0x268]
0x140f67dea: call   0x140070850
0x140f67def: mov    rcx,QWORD PTR [rax]
0x140f67df2: test   rcx,rcx
0x140f67df5: je     0x140f67e01
0x140f67df7: mov    edx,0x1
0x140f67dfc: call   0x140f6d8d0
0x140f67e01: inc    edi
0x140f67e03: movsxd rbx,edi
0x140f67e06: lea    rcx,[r15+0x268]
0x140f67e0d: call   0x140070480
0x140f67e12: cmp    rbx,rax
0x140f67e15: jb     0x140f67de0
0x140f67e17: lea    rcx,[r15+0x268]
0x140f67e1e: call   0x1400708c0
0x140f67e23: mov    edi,r13d
0x140f67e26: lea    rcx,[r15+0x238]
0x140f67e2d: call   0x140070480
0x140f67e32: test   rax,rax
0x140f67e35: je     0x140f67e77
0x140f67e37: mov    rbx,r13
0x140f67e3a: nop    WORD PTR [rax+rax*1+0x0]
0x140f67e40: mov    rdx,rbx
0x140f67e43: lea    rcx,[r15+0x238]
0x140f67e4a: call   0x140070850
0x140f67e4f: mov    rcx,QWORD PTR [rax]
0x140f67e52: test   rcx,rcx
0x140f67e55: je     0x140f67e61
0x140f67e57: mov    edx,0x1
0x140f67e5c: call   0x140f6d9a0
0x140f67e61: inc    edi
0x140f67e63: movsxd rbx,edi
0x140f67e66: lea    rcx,[r15+0x238]
0x140f67e6d: call   0x140070480
0x140f67e72: cmp    rbx,rax
0x140f67e75: jb     0x140f67e40
0x140f67e77: lea    rcx,[r15+0x238]
0x140f67e7e: call   0x1400708c0
0x140f67e83: mov    edi,r13d
0x140f67e86: lea    rcx,[r15+0x250]
0x140f67e8d: call   0x140070480
0x140f67e92: test   rax,rax
0x140f67e95: je     0x140f67ed7
0x140f67e97: mov    rbx,r13
0x140f67e9a: nop    WORD PTR [rax+rax*1+0x0]
0x140f67ea0: mov    rdx,rbx
0x140f67ea3: lea    rcx,[r15+0x250]
0x140f67eaa: call   0x140070850
0x140f67eaf: mov    rcx,QWORD PTR [rax]
0x140f67eb2: test   rcx,rcx
0x140f67eb5: je     0x140f67ec1
0x140f67eb7: mov    edx,0x1
0x140f67ebc: call   0x140f6daa0
0x140f67ec1: inc    edi
0x140f67ec3: movsxd rbx,edi
0x140f67ec6: lea    rcx,[r15+0x250]
0x140f67ecd: call   0x140070480
0x140f67ed2: cmp    rbx,rax
0x140f67ed5: jb     0x140f67ea0
0x140f67ed7: lea    rcx,[r15+0x250]
0x140f67ede: call   0x1400708c0
0x140f67ee3: mov    edi,r13d
0x140f67ee6: lea    rcx,[r15+0x280]
0x140f67eed: call   0x140070480
0x140f67ef2: test   rax,rax
0x140f67ef5: je     0x140f67f37
0x140f67ef7: mov    rbx,r13
0x140f67efa: nop    WORD PTR [rax+rax*1+0x0]
0x140f67f00: mov    rdx,rbx
0x140f67f03: lea    rcx,[r15+0x280]
0x140f67f0a: call   0x140070850
0x140f67f0f: mov    rcx,QWORD PTR [rax]
0x140f67f12: test   rcx,rcx
0x140f67f15: je     0x140f67f21
0x140f67f17: mov    edx,0x1
0x140f67f1c: call   0x140f6db40
0x140f67f21: inc    edi
0x140f67f23: movsxd rbx,edi
0x140f67f26: lea    rcx,[r15+0x280]
0x140f67f2d: call   0x140070480
0x140f67f32: cmp    rbx,rax
0x140f67f35: jb     0x140f67f00
0x140f67f37: lea    rcx,[r15+0x280]
0x140f67f3e: call   0x1400708c0
0x140f67f43: mov    edi,r13d
0x140f67f46: lea    rcx,[r15+0x298]
0x140f67f4d: call   0x140070480
0x140f67f52: test   rax,rax
0x140f67f55: je     0x140f67f97
0x140f67f57: mov    rbx,r13
0x140f67f5a: nop    WORD PTR [rax+rax*1+0x0]
0x140f67f60: mov    rdx,rbx
0x140f67f63: lea    rcx,[r15+0x298]
0x140f67f6a: call   0x140070850
0x140f67f6f: mov    rcx,QWORD PTR [rax]
0x140f67f72: test   rcx,rcx
0x140f67f75: je     0x140f67f81
0x140f67f77: mov    edx,0x1
0x140f67f7c: call   0x140f6db90
0x140f67f81: inc    edi
0x140f67f83: movsxd rbx,edi
0x140f67f86: lea    rcx,[r15+0x298]
0x140f67f8d: call   0x140070480
0x140f67f92: cmp    rbx,rax
0x140f67f95: jb     0x140f67f60
0x140f67f97: lea    rcx,[r15+0x298]
0x140f67f9e: call   0x1400708c0
0x140f67fa3: movsxd rax,DWORD PTR [rip+0x15b4166]        # 0x14251c110
0x140f67faa: cmp    eax,0x5
0x140f67fad: ja     0x140f68012
0x140f67faf: lea    rdx,[rip+0xffffffffff09804a]        # 0x140000000
0x140f67fb6: mov    ecx,DWORD PTR [rdx+rax*4+0xf6d6f8]
0x140f67fbd: add    rcx,rdx
0x140f67fc0: jmp    rcx
0x140f67fc2: mov    WORD PTR [r15+0xb0],r12w
0x140f67fca: jmp    0x140f68012
0x140f67fcc: mov    ecx,0x2
0x140f67fd1: call   0x140073560
0x140f67fd6: mov    WORD PTR [r15+0xb0],ax
0x140f67fde: jmp    0x140f68012
0x140f67fe0: mov    ecx,r14d
0x140f67fe3: call   0x140073560
0x140f67fe8: mov    WORD PTR [r15+0xb0],ax
0x140f67ff0: jmp    0x140f68012
0x140f67ff2: mov    WORD PTR [r15+0xb0],r13w
0x140f67ffa: jmp    0x140f68012
0x140f67ffc: mov    WORD PTR [r15+0xb0],0x1
0x140f68006: jmp    0x140f68012
0x140f68008: mov    WORD PTR [r15+0xb0],0x2
0x140f68012: mov    WORD PTR [r15+0xb2],r13w
0x140f6801a: mov    r11d,r13d
0x140f6801d: lea    rdi,[rbp+0x42]
0x140f68021: lea    rsi,[rip+0x15b3e78]        # 0x14251bea0
0x140f68028: mov    rbx,r13
0x140f6802b: mov    r12d,0x41
0x140f68031: lea    r14,[rip+0xffffffffff097fc8]        # 0x140000000
0x140f68038: nop    DWORD PTR [rax+rax*1+0x0]
0x140f68040: cmp    r11d,0x7
0x140f68044: ja     0x140f68101
0x140f6804a: movsxd rax,r11d
0x140f6804d: mov    ecx,DWORD PTR [r14+rax*4+0xf6d710]
0x140f68055: add    rcx,r14
0x140f68058: jmp    rcx
0x140f6805a: movsx  ecx,WORD PTR [rsi-0x60]
0x140f6805e: mov    WORD PTR [rbp+rbx*1+0x240],cx
0x140f68066: movsx  r10d,WORD PTR [rsi]
0x140f6806a: mov    WORD PTR [rbp+rbx*1+0x2a0],r10w
0x140f68073: movzx  eax,WORD PTR [rsi+0x60]
0x140f68077: mov    WORD PTR [rbp+rbx*1+0x2d0],ax
0x140f6807f: movzx  eax,WORD PTR [rsi+0xc0]
0x140f68086: mov    WORD PTR [rbp+rbx*1+0x300],ax
0x140f6808e: mov    WORD PTR [rdi-0x2],cx
0x140f68092: mov    r9d,ecx
0x140f68095: lea    ecx,[r10+rcx*4]
0x140f68099: mov    eax,0x66666667
0x140f6809e: imul   ecx
0x140f680a0: sar    edx,1
0x140f680a2: mov    eax,edx
0x140f680a4: shr    eax,0x1f
0x140f680a7: add    edx,eax
0x140f680a9: mov    WORD PTR [rdi],dx
0x140f680ac: lea    eax,[r9+r9*2]
0x140f680b0: lea    ecx,[rax+r10*2]
0x140f680b4: mov    eax,0x66666667
0x140f680b9: imul   ecx
0x140f680bb: sar    edx,1
0x140f680bd: mov    eax,edx
0x140f680bf: shr    eax,0x1f
0x140f680c2: add    edx,eax
0x140f680c4: mov    WORD PTR [rdi+0x2],dx
0x140f680c8: lea    eax,[r10+r10*2]
0x140f680cc: lea    ecx,[rax+r9*2]
0x140f680d0: mov    eax,0x66666667
0x140f680d5: imul   ecx
0x140f680d7: sar    edx,1
0x140f680d9: mov    eax,edx
0x140f680db: shr    eax,0x1f
0x140f680de: add    edx,eax
0x140f680e0: mov    WORD PTR [rdi+0x4],dx
0x140f680e4: lea    ecx,[r9+r10*4]
0x140f680e8: mov    eax,0x66666667
0x140f680ed: imul   ecx
0x140f680ef: sar    edx,1
0x140f680f1: mov    eax,edx
0x140f680f3: shr    eax,0x1f
0x140f680f6: add    edx,eax
0x140f680f8: mov    WORD PTR [rdi+0x6],dx
0x140f680fc: mov    WORD PTR [rdi+0x8],r10w
0x140f68101: inc    r11d
0x140f68104: add    rsi,0x4
0x140f68108: add    rdi,0xc
0x140f6810c: add    rbx,0x2
0x140f68110: cmp    r11d,0x18
0x140f68114: jl     0x140f68040
0x140f6811a: mov    ecx,DWORD PTR [r15+0xa0]
0x140f68121: dec    ecx
0x140f68123: mov    DWORD PTR [rsp+0x74],ecx
0x140f68127: mov    eax,DWORD PTR [r15+0xa4]
0x140f6812e: dec    eax
0x140f68130: cmp    ecx,eax
0x140f68132: jle    0x140f681c8
0x140f68138: mov    DWORD PTR [rsp+0x74],eax
0x140f6813c: movups xmm7,XMMWORD PTR [rbp+0x300]
0x140f68143: movups xmm8,XMMWORD PTR [rbp+0x310]
0x140f6814b: movups xmm9,XMMWORD PTR [rbp+0x320]
0x140f68153: jmp    0x140f681df
0x140f68158: mov    eax,0x21
0x140f6815d: mov    WORD PTR [rbp+rbx*1+0x240],ax
0x140f68165: mov    WORD PTR [rbp+rbx*1+0x2a0],r12w
0x140f6816e: imul   ecx,DWORD PTR [r15+0xa0],0xc8
0x140f68179: mov    eax,0x7f807f81
0x140f6817e: imul   ecx
0x140f68180: sar    edx,0x7
0x140f68183: mov    eax,edx
0x140f68185: shr    eax,0x1f
0x140f68188: add    edx,eax
0x140f6818a: mov    WORD PTR [rbp+0x2d8],dx
0x140f68191: imul   ecx,DWORD PTR [r15+0xa4],0xc8
0x140f6819c: mov    eax,0x7f807f81
0x140f681a1: imul   ecx
0x140f681a3: sar    edx,0x7
0x140f681a6: mov    eax,edx
0x140f681a8: shr    eax,0x1f
0x140f681ab: add    edx,eax
0x140f681ad: mov    WORD PTR [rbp+0x308],dx
0x140f681b4: inc    r11d
0x140f681b7: add    rsi,0x4
0x140f681bb: add    rdi,0xc
0x140f681bf: add    rbx,0x2
0x140f681c3: jmp    0x140f68040
0x140f681c8: movups xmm7,XMMWORD PTR [rbp+0x2d0]
0x140f681cf: movups xmm8,XMMWORD PTR [rbp+0x2e0]
0x140f681d7: movups xmm9,XMMWORD PTR [rbp+0x2f0]
0x140f681df: mov    ebx,0x1
0x140f681e4: cmp    DWORD PTR [rip+0x15b3e6e],ebx        # 0x14251c058
0x140f681ea: cmovg  ebx,DWORD PTR [rip+0x15b3e67]        # 0x14251c058
0x140f681f1: cmp    DWORD PTR [rip+0x15b3e79],ebx        # 0x14251c070
0x140f681f7: cmovg  ebx,DWORD PTR [rip+0x15b3e72]        # 0x14251c070
0x140f681fe: cmp    DWORD PTR [rip+0x15b3e84],ebx        # 0x14251c088
0x140f68204: cmovg  ebx,DWORD PTR [rip+0x15b3e7d]        # 0x14251c088
0x140f6820b: cmp    DWORD PTR [rip+0x15b3e8f],ebx        # 0x14251c0a0
0x140f68211: cmovg  ebx,DWORD PTR [rip+0x15b3e88]        # 0x14251c0a0
0x140f68218: cmp    DWORD PTR [rip+0x15b3e9a],ebx        # 0x14251c0b8
0x140f6821e: cmovg  ebx,DWORD PTR [rip+0x15b3e93]        # 0x14251c0b8
0x140f68225: cmp    DWORD PTR [rip+0x15b3ea5],ebx        # 0x14251c0d0
0x140f6822b: cmovg  ebx,DWORD PTR [rip+0x15b3e9e]        # 0x14251c0d0
0x140f68232: lea    rcx,[rbp-0x8]
0x140f68236: call   0x140067130
0x140f6823b: nop
0x140f6823c: lea    rdx,[rsp+0x74]
0x140f68241: lea    rcx,[rbp-0x8]
0x140f68245: call   0x140070a40
0x140f6824a: dec    ebx
0x140f6824c: mov    eax,DWORD PTR [rsp+0x74]
0x140f68250: cmp    eax,0x8
0x140f68253: mov    r14d,0x3
0x140f68259: jle    0x140f68283
0x140f6825b: nop    DWORD PTR [rax+rax*1+0x0]
0x140f68260: test   ebx,ebx
0x140f68262: jle    0x140f68283
0x140f68264: sar    eax,1
0x140f68266: mov    DWORD PTR [rsp+0x74],eax
0x140f6826a: lea    rdx,[rsp+0x74]
0x140f6826f: lea    rcx,[rbp-0x8]
0x140f68273: call   0x140070a40
0x140f68278: dec    ebx
0x140f6827a: mov    eax,DWORD PTR [rsp+0x74]
0x140f6827e: cmp    eax,0x8
0x140f68281: jg     0x140f68260
0x140f68283: mov    esi,r13d
0x140f68286: lea    rdx,[rbp+0x1d0]
0x140f6828d: lea    r15,[rip+0xffffffffff097d6c]        # 0x140000000
0x140f68294: cmp    esi,0x7
0x140f68297: ja     0x140f6831f
0x140f6829d: movsxd rax,esi
0x140f682a0: mov    ecx,DWORD PTR [r15+rax*4+0xf6d730]
0x140f682a8: add    rcx,r15
0x140f682ab: jmp    rcx
0x140f682ad: lea    r8,[rip+0x15b3da8]        # 0x14251c05c
0x140f682b4: mov    ecx,DWORD PTR [rip+0x15b3da2]        # 0x14251c05c
0x140f682ba: jmp    0x140f68305
0x140f682bc: lea    r8,[rip+0x15b3db1]        # 0x14251c074
0x140f682c3: mov    ecx,DWORD PTR [rip+0x15b3dab]        # 0x14251c074
0x140f682c9: jmp    0x140f68305
0x140f682cb: lea    r8,[rip+0x15b3dea]        # 0x14251c0bc
0x140f682d2: mov    ecx,DWORD PTR [rip+0x15b3de4]        # 0x14251c0bc
0x140f682d8: jmp    0x140f68305
0x140f682da: lea    r8,[rip+0x15b3dab]        # 0x14251c08c
0x140f682e1: mov    ecx,DWORD PTR [rip+0x15b3da5]        # 0x14251c08c
0x140f682e7: jmp    0x140f68305
0x140f682e9: lea    r8,[rip+0x15b3de4]        # 0x14251c0d4
0x140f682f0: mov    ecx,DWORD PTR [rip+0x15b3dde]        # 0x14251c0d4
0x140f682f6: jmp    0x140f68305
0x140f682f8: lea    r8,[rip+0x15b3da5]        # 0x14251c0a4
0x140f682ff: mov    ecx,DWORD PTR [rip+0x15b3d9f]        # 0x14251c0a4
0x140f68305: mov    QWORD PTR [rbp-0x80],r8
0x140f68309: mov    eax,DWORD PTR [r8+0x10]
0x140f6830d: add    eax,DWORD PTR [r8+0xc]
0x140f68311: add    eax,DWORD PTR [r8+0x8]
0x140f68315: add    eax,DWORD PTR [r8+0x4]
0x140f68319: add    eax,ecx
0x140f6831b: mov    DWORD PTR [rdx],eax
0x140f6831d: jmp    0x140f68323
0x140f6831f: mov    QWORD PTR [rbp-0x80],r13
0x140f68323: inc    esi
0x140f68325: add    rdx,0x4
0x140f68329: cmp    esi,0x18
0x140f6832c: jl     0x140f68294
0x140f68332: mov    DWORD PTR [rsp+0x40],esi
0x140f68336: movdqa xmm6,XMMWORD PTR [rip+0x844642]        # 0x1417ac980
0x140f6833e: mov    r11,QWORD PTR [rip+0x15b3da3]        # 0x14251c0e8
0x140f68345: mov    r15,QWORD PTR [rbp-0x68]
0x140f68349: jmp    0x140f68353
0x140f6834b: nop    DWORD PTR [rax+rax*1+0x0]
0x140f68350: xor    r13d,r13d
0x140f68353: movups XMMWORD PTR [rbp+0x270],xmm7
0x140f6835a: movups XMMWORD PTR [rbp+0x280],xmm8
0x140f68362: movups XMMWORD PTR [rbp+0x290],xmm9
0x140f6836a: mov    edi,r13d
0x140f6836d: mov    r12d,0x2
0x140f68373: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6837b: jle    0x140f68707
0x140f68381: mov    DWORD PTR [rsp+0x40],0x18
0x140f68389: mov    esi,0xffff8ad0
0x140f6838e: xchg   ax,ax
0x140f68390: mov    r10,r12
0x140f68393: mov    ebx,0x34
0x140f68398: mov    r9d,0x10
0x140f6839e: xchg   ax,ax
0x140f683a0: test   r11,r11
0x140f683a3: je     0x140f683ad
0x140f683a5: cmp    QWORD PTR [r9+r11*1-0x8],0x0
0x140f683ab: jne    0x140f683e5
0x140f683ad: movsxd r8,edi
0x140f683b0: mov    rax,QWORD PTR [r15+0x2b0]
0x140f683b7: mov    rcx,QWORD PTR [rax+r8*8]
0x140f683bb: mov    WORD PTR [rcx+rbx*1-0x4],si
0x140f683c0: movsxd rax,DWORD PTR [r15+0xa4]
0x140f683c7: imul   rdx,rax,0x38
0x140f683cb: add    rdx,r10
0x140f683ce: mov    rax,QWORD PTR [r15+0x2b0]
0x140f683d5: mov    rcx,QWORD PTR [rax+r8*8]
0x140f683d9: mov    WORD PTR [rcx+rdx*2-0x44],si
0x140f683de: mov    r11,QWORD PTR [rip+0x15b3d03]        # 0x14251c0e8
0x140f683e5: test   r11,r11
0x140f683e8: je     0x140f683f1
0x140f683ea: cmp    QWORD PTR [r9+r11*1],0x0
0x140f683ef: jne    0x140f68429
0x140f683f1: movsxd r8,edi
0x140f683f4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f683fb: mov    rcx,QWORD PTR [rax+r8*8]
0x140f683ff: mov    WORD PTR [rcx+rbx*1-0x2],si
0x140f68404: movsxd rax,DWORD PTR [r15+0xa4]
0x140f6840b: imul   rdx,rax,0x38
0x140f6840f: add    rdx,r10
0x140f68412: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68419: mov    rcx,QWORD PTR [rax+r8*8]
0x140f6841d: mov    WORD PTR [rcx+rdx*2-0x42],si
0x140f68422: mov    r11,QWORD PTR [rip+0x15b3cbf]        # 0x14251c0e8
0x140f68429: test   r11,r11
0x140f6842c: je     0x140f68436
0x140f6842e: cmp    QWORD PTR [r9+r11*1+0x8],0x0
0x140f68434: jne    0x140f6846d
0x140f68436: movsxd r8,edi
0x140f68439: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68440: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68444: mov    WORD PTR [rbx+rcx*1],si
0x140f68448: movsxd rax,DWORD PTR [r15+0xa4]
0x140f6844f: imul   rdx,rax,0x38
0x140f68453: add    rdx,r10
0x140f68456: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6845d: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68461: mov    WORD PTR [rcx+rdx*2-0x40],si
0x140f68466: mov    r11,QWORD PTR [rip+0x15b3c7b]        # 0x14251c0e8
0x140f6846d: test   r11,r11
0x140f68470: je     0x140f6847a
0x140f68472: cmp    QWORD PTR [r9+r11*1+0x10],0x0
0x140f68478: jne    0x140f684b2
0x140f6847a: movsxd r8,edi
0x140f6847d: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68484: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68488: mov    WORD PTR [rcx+rbx*1+0x2],si
0x140f6848d: movsxd rax,DWORD PTR [r15+0xa4]
0x140f68494: imul   rdx,rax,0x38
0x140f68498: add    rdx,r10
0x140f6849b: mov    rax,QWORD PTR [r15+0x2b0]
0x140f684a2: mov    rcx,QWORD PTR [rax+r8*8]
0x140f684a6: mov    WORD PTR [rcx+rdx*2-0x3e],si
0x140f684ab: mov    r11,QWORD PTR [rip+0x15b3c36]        # 0x14251c0e8
0x140f684b2: test   r11,r11
0x140f684b5: je     0x140f684bf
0x140f684b7: cmp    QWORD PTR [r9+r11*1+0x18],0x0
0x140f684bd: jne    0x140f684f7
0x140f684bf: movsxd r8,edi
0x140f684c2: mov    rax,QWORD PTR [r15+0x2b0]
0x140f684c9: mov    rcx,QWORD PTR [rax+r8*8]
0x140f684cd: mov    WORD PTR [rcx+rbx*1+0x4],si
0x140f684d2: movsxd rax,DWORD PTR [r15+0xa4]
0x140f684d9: imul   rdx,rax,0x38
0x140f684dd: add    rdx,r10
0x140f684e0: mov    rax,QWORD PTR [r15+0x2b0]
0x140f684e7: mov    rcx,QWORD PTR [rax+r8*8]
0x140f684eb: mov    WORD PTR [rcx+rdx*2-0x3c],si
0x140f684f0: mov    r11,QWORD PTR [rip+0x15b3bf1]        # 0x14251c0e8
0x140f684f7: test   r11,r11
0x140f684fa: je     0x140f68504
0x140f684fc: cmp    QWORD PTR [r9+r11*1+0x20],0x0
0x140f68502: jne    0x140f6853c
0x140f68504: movsxd r8,edi
0x140f68507: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6850e: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68512: mov    WORD PTR [rcx+rbx*1+0x6],si
0x140f68517: movsxd rax,DWORD PTR [r15+0xa4]
0x140f6851e: imul   rdx,rax,0x38
0x140f68522: add    rdx,r10
0x140f68525: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6852c: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68530: mov    WORD PTR [rcx+rdx*2-0x3a],si
0x140f68535: mov    r11,QWORD PTR [rip+0x15b3bac]        # 0x14251c0e8
0x140f6853c: test   r11,r11
0x140f6853f: je     0x140f68549
0x140f68541: cmp    QWORD PTR [r9+r11*1+0x28],0x0
0x140f68547: jne    0x140f68581
0x140f68549: movsxd r8,edi
0x140f6854c: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68553: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68557: mov    WORD PTR [rcx+rbx*1+0x8],si
0x140f6855c: movsxd rax,DWORD PTR [r15+0xa4]
0x140f68563: imul   rdx,rax,0x38
0x140f68567: add    rdx,r10
0x140f6856a: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68571: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68575: mov    WORD PTR [rcx+rdx*2-0x38],si
0x140f6857a: mov    r11,QWORD PTR [rip+0x15b3b67]        # 0x14251c0e8
0x140f68581: test   r11,r11
0x140f68584: je     0x140f6858e
0x140f68586: cmp    QWORD PTR [r9+r11*1+0x30],0x0
0x140f6858c: jne    0x140f685c6
0x140f6858e: movsxd r8,edi
0x140f68591: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68598: mov    rcx,QWORD PTR [rax+r8*8]
0x140f6859c: mov    WORD PTR [rcx+rbx*1+0xa],si
0x140f685a1: movsxd rax,DWORD PTR [r15+0xa4]
0x140f685a8: imul   rdx,rax,0x38
0x140f685ac: add    rdx,r10
0x140f685af: mov    rax,QWORD PTR [r15+0x2b0]
0x140f685b6: mov    rcx,QWORD PTR [rax+r8*8]
0x140f685ba: mov    WORD PTR [rcx+rdx*2-0x36],si
0x140f685bf: mov    r11,QWORD PTR [rip+0x15b3b22]        # 0x14251c0e8
0x140f685c6: test   r11,r11
0x140f685c9: je     0x140f685d3
0x140f685cb: cmp    QWORD PTR [r9+r11*1+0x38],0x0
0x140f685d1: jne    0x140f6860b
0x140f685d3: movsxd r8,edi
0x140f685d6: mov    rax,QWORD PTR [r15+0x2b0]
0x140f685dd: mov    rcx,QWORD PTR [rax+r8*8]
0x140f685e1: mov    WORD PTR [rcx+rbx*1+0xc],si
0x140f685e6: movsxd rax,DWORD PTR [r15+0xa4]
0x140f685ed: imul   rdx,rax,0x38
0x140f685f1: add    rdx,r10
0x140f685f4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f685fb: mov    rcx,QWORD PTR [rax+r8*8]
0x140f685ff: mov    WORD PTR [rcx+rdx*2-0x34],si
0x140f68604: mov    r11,QWORD PTR [rip+0x15b3add]        # 0x14251c0e8
0x140f6860b: test   r11,r11
0x140f6860e: je     0x140f68618
0x140f68610: cmp    QWORD PTR [r9+r11*1+0x40],0x0
0x140f68616: jne    0x140f68650
0x140f68618: movsxd r8,edi
0x140f6861b: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68622: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68626: mov    WORD PTR [rcx+rbx*1+0xe],si
0x140f6862b: movsxd rax,DWORD PTR [r15+0xa4]
0x140f68632: imul   rdx,rax,0x38
0x140f68636: add    rdx,r10
0x140f68639: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68640: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68644: mov    WORD PTR [rcx+rdx*2-0x32],si
0x140f68649: mov    r11,QWORD PTR [rip+0x15b3a98]        # 0x14251c0e8
0x140f68650: test   r11,r11
0x140f68653: je     0x140f6865d
0x140f68655: cmp    QWORD PTR [r9+r11*1+0x48],0x0
0x140f6865b: jne    0x140f68695
0x140f6865d: movsxd r8,edi
0x140f68660: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68667: mov    rcx,QWORD PTR [rax+r8*8]
0x140f6866b: mov    WORD PTR [rcx+rbx*1+0x10],si
0x140f68670: movsxd rax,DWORD PTR [r15+0xa4]
0x140f68677: imul   rdx,rax,0x38
0x140f6867b: add    rdx,r10
0x140f6867e: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68685: mov    rcx,QWORD PTR [rax+r8*8]
0x140f68689: mov    WORD PTR [rcx+rdx*2-0x30],si
0x140f6868e: mov    r11,QWORD PTR [rip+0x15b3a53]        # 0x14251c0e8
0x140f68695: test   r11,r11
0x140f68698: je     0x140f686a2
0x140f6869a: cmp    QWORD PTR [r9+r11*1+0x50],0x0
0x140f686a0: jne    0x140f686da
0x140f686a2: movsxd r8,edi
0x140f686a5: mov    rax,QWORD PTR [r15+0x2b0]
0x140f686ac: mov    rcx,QWORD PTR [rax+r8*8]
0x140f686b0: mov    WORD PTR [rcx+rbx*1+0x12],si
0x140f686b5: movsxd rax,DWORD PTR [r15+0xa4]
0x140f686bc: imul   rdx,rax,0x38
0x140f686c0: add    rdx,r10
0x140f686c3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f686ca: mov    rcx,QWORD PTR [rax+r8*8]
0x140f686ce: mov    WORD PTR [rcx+rdx*2-0x2e],si
0x140f686d3: mov    r11,QWORD PTR [rip+0x15b3a0e]        # 0x14251c0e8
0x140f686da: add    rbx,0x18
0x140f686de: add    r9,0x60
0x140f686e2: add    r10,0xc
0x140f686e6: lea    rax,[r10-0x2]
0x140f686ea: cmp    rax,0x18
0x140f686ee: jl     0x140f683a0
0x140f686f4: inc    edi
0x140f686f6: cmp    edi,DWORD PTR [r15+0xa0]
0x140f686fd: jl     0x140f68390
0x140f68703: mov    esi,DWORD PTR [rsp+0x40]
0x140f68707: mov    ebx,r13d
0x140f6870a: cmp    DWORD PTR [r15+0xa4],0x0
0x140f68712: jle    0x140f68abc
0x140f68718: mov    DWORD PTR [rsp+0x40],0x18
0x140f68720: mov    esi,0xffff8ad0
0x140f68725: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140f68730: mov    r10,r12
0x140f68733: mov    r9d,0x10
0x140f68739: nop    DWORD PTR [rax+0x0]
0x140f68740: test   r11,r11
0x140f68743: je     0x140f6874d
0x140f68745: cmp    QWORD PTR [r9+r11*1-0x8],0x0
0x140f6874b: jne    0x140f68787
0x140f6874d: movsxd rax,ebx
0x140f68750: imul   r8,rax,0x38
0x140f68754: add    r8,r10
0x140f68757: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6875e: mov    rcx,QWORD PTR [rax]
0x140f68761: mov    WORD PTR [rcx+r8*2+0x2c],si
0x140f68767: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f6876e: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68775: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f6877a: mov    WORD PTR [rdx+r8*2+0x2c],si
0x140f68780: mov    r11,QWORD PTR [rip+0x15b3961]        # 0x14251c0e8
0x140f68787: test   r11,r11
0x140f6878a: je     0x140f68793
0x140f6878c: cmp    QWORD PTR [r9+r11*1],0x0
0x140f68791: jne    0x140f687cd
0x140f68793: movsxd rax,ebx
0x140f68796: imul   r8,rax,0x38
0x140f6879a: add    r8,r10
0x140f6879d: mov    rax,QWORD PTR [r15+0x2b0]
0x140f687a4: mov    rcx,QWORD PTR [rax]
0x140f687a7: mov    WORD PTR [rcx+r8*2+0x2e],si
0x140f687ad: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f687b4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f687bb: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f687c0: mov    WORD PTR [rdx+r8*2+0x2e],si
0x140f687c6: mov    r11,QWORD PTR [rip+0x15b391b]        # 0x14251c0e8
0x140f687cd: test   r11,r11
0x140f687d0: je     0x140f687da
0x140f687d2: cmp    QWORD PTR [r9+r11*1+0x8],0x0
0x140f687d8: jne    0x140f68814
0x140f687da: movsxd rax,ebx
0x140f687dd: imul   r8,rax,0x38
0x140f687e1: add    r8,r10
0x140f687e4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f687eb: mov    rcx,QWORD PTR [rax]
0x140f687ee: mov    WORD PTR [rcx+r8*2+0x30],si
0x140f687f4: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f687fb: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68802: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f68807: mov    WORD PTR [rdx+r8*2+0x30],si
0x140f6880d: mov    r11,QWORD PTR [rip+0x15b38d4]        # 0x14251c0e8
0x140f68814: test   r11,r11
0x140f68817: je     0x140f68821
0x140f68819: cmp    QWORD PTR [r9+r11*1+0x10],0x0
0x140f6881f: jne    0x140f6885b
0x140f68821: movsxd rax,ebx
0x140f68824: imul   r8,rax,0x38
0x140f68828: add    r8,r10
0x140f6882b: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68832: mov    rcx,QWORD PTR [rax]
0x140f68835: mov    WORD PTR [rcx+r8*2+0x32],si
0x140f6883b: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f68842: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68849: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f6884e: mov    WORD PTR [rdx+r8*2+0x32],si
0x140f68854: mov    r11,QWORD PTR [rip+0x15b388d]        # 0x14251c0e8
0x140f6885b: test   r11,r11
0x140f6885e: je     0x140f68868
0x140f68860: cmp    QWORD PTR [r9+r11*1+0x18],0x0
0x140f68866: jne    0x140f688a2
0x140f68868: movsxd rax,ebx
0x140f6886b: imul   r8,rax,0x38
0x140f6886f: add    r8,r10
0x140f68872: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68879: mov    rcx,QWORD PTR [rax]
0x140f6887c: mov    WORD PTR [rcx+r8*2+0x34],si
0x140f68882: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f68889: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68890: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f68895: mov    WORD PTR [rdx+r8*2+0x34],si
0x140f6889b: mov    r11,QWORD PTR [rip+0x15b3846]        # 0x14251c0e8
0x140f688a2: test   r11,r11
0x140f688a5: je     0x140f688af
0x140f688a7: cmp    QWORD PTR [r9+r11*1+0x20],0x0
0x140f688ad: jne    0x140f688e9
0x140f688af: movsxd rax,ebx
0x140f688b2: imul   r8,rax,0x38
0x140f688b6: add    r8,r10
0x140f688b9: mov    rax,QWORD PTR [r15+0x2b0]
0x140f688c0: mov    rcx,QWORD PTR [rax]
0x140f688c3: mov    WORD PTR [rcx+r8*2+0x36],si
0x140f688c9: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f688d0: mov    rax,QWORD PTR [r15+0x2b0]
0x140f688d7: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f688dc: mov    WORD PTR [rdx+r8*2+0x36],si
0x140f688e2: mov    r11,QWORD PTR [rip+0x15b37ff]        # 0x14251c0e8
0x140f688e9: test   r11,r11
0x140f688ec: je     0x140f688f6
0x140f688ee: cmp    QWORD PTR [r9+r11*1+0x28],0x0
0x140f688f4: jne    0x140f68930
0x140f688f6: movsxd rax,ebx
0x140f688f9: imul   r8,rax,0x38
0x140f688fd: add    r8,r10
0x140f68900: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68907: mov    rcx,QWORD PTR [rax]
0x140f6890a: mov    WORD PTR [rcx+r8*2+0x38],si
0x140f68910: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f68917: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6891e: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f68923: mov    WORD PTR [rdx+r8*2+0x38],si
0x140f68929: mov    r11,QWORD PTR [rip+0x15b37b8]        # 0x14251c0e8
0x140f68930: test   r11,r11
0x140f68933: je     0x140f6893d
0x140f68935: cmp    QWORD PTR [r9+r11*1+0x30],0x0
0x140f6893b: jne    0x140f68977
0x140f6893d: movsxd rax,ebx
0x140f68940: imul   r8,rax,0x38
0x140f68944: add    r8,r10
0x140f68947: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6894e: mov    rcx,QWORD PTR [rax]
0x140f68951: mov    WORD PTR [rcx+r8*2+0x3a],si
0x140f68957: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f6895e: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68965: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f6896a: mov    WORD PTR [rdx+r8*2+0x3a],si
0x140f68970: mov    r11,QWORD PTR [rip+0x15b3771]        # 0x14251c0e8
0x140f68977: test   r11,r11
0x140f6897a: je     0x140f68984
0x140f6897c: cmp    QWORD PTR [r9+r11*1+0x38],0x0
0x140f68982: jne    0x140f689be
0x140f68984: movsxd rax,ebx
0x140f68987: imul   r8,rax,0x38
0x140f6898b: add    r8,r10
0x140f6898e: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68995: mov    rcx,QWORD PTR [rax]
0x140f68998: mov    WORD PTR [rcx+r8*2+0x3c],si
0x140f6899e: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f689a5: mov    rax,QWORD PTR [r15+0x2b0]
0x140f689ac: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f689b1: mov    WORD PTR [rdx+r8*2+0x3c],si
0x140f689b7: mov    r11,QWORD PTR [rip+0x15b372a]        # 0x14251c0e8
0x140f689be: test   r11,r11
0x140f689c1: je     0x140f689cb
0x140f689c3: cmp    QWORD PTR [r9+r11*1+0x40],0x0
0x140f689c9: jne    0x140f68a05
0x140f689cb: movsxd rax,ebx
0x140f689ce: imul   r8,rax,0x38
0x140f689d2: add    r8,r10
0x140f689d5: mov    rax,QWORD PTR [r15+0x2b0]
0x140f689dc: mov    rcx,QWORD PTR [rax]
0x140f689df: mov    WORD PTR [rcx+r8*2+0x3e],si
0x140f689e5: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f689ec: mov    rax,QWORD PTR [r15+0x2b0]
0x140f689f3: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f689f8: mov    WORD PTR [rdx+r8*2+0x3e],si
0x140f689fe: mov    r11,QWORD PTR [rip+0x15b36e3]        # 0x14251c0e8
0x140f68a05: test   r11,r11
0x140f68a08: je     0x140f68a12
0x140f68a0a: cmp    QWORD PTR [r9+r11*1+0x48],0x0
0x140f68a10: jne    0x140f68a4c
0x140f68a12: movsxd rax,ebx
0x140f68a15: imul   r8,rax,0x38
0x140f68a19: add    r8,r10
0x140f68a1c: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68a23: mov    rcx,QWORD PTR [rax]
0x140f68a26: mov    WORD PTR [rcx+r8*2+0x40],si
0x140f68a2c: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f68a33: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68a3a: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f68a3f: mov    WORD PTR [rdx+r8*2+0x40],si
0x140f68a45: mov    r11,QWORD PTR [rip+0x15b369c]        # 0x14251c0e8
0x140f68a4c: test   r11,r11
0x140f68a4f: je     0x140f68a59
0x140f68a51: cmp    QWORD PTR [r9+r11*1+0x50],0x0
0x140f68a57: jne    0x140f68a93
0x140f68a59: movsxd rax,ebx
0x140f68a5c: imul   r8,rax,0x38
0x140f68a60: add    r8,r10
0x140f68a63: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68a6a: mov    rcx,QWORD PTR [rax]
0x140f68a6d: mov    WORD PTR [rcx+r8*2+0x42],si
0x140f68a73: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f68a7a: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68a81: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f68a86: mov    WORD PTR [rdx+r8*2+0x42],si
0x140f68a8c: mov    r11,QWORD PTR [rip+0x15b3655]        # 0x14251c0e8
0x140f68a93: add    r9,0x60
0x140f68a97: add    r10,0xc
0x140f68a9b: lea    rax,[r10-0x2]
0x140f68a9f: cmp    rax,0x18
0x140f68aa3: jl     0x140f68740
0x140f68aa9: inc    ebx
0x140f68aab: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f68ab2: jl     0x140f68730
0x140f68ab8: mov    esi,DWORD PTR [rsp+0x40]
0x140f68abc: mov    ebx,r13d
0x140f68abf: mov    DWORD PTR [rsp+0x70],ebx
0x140f68ac3: lea    rcx,[rbp-0x8]
0x140f68ac7: call   0x1400709a0
0x140f68acc: test   rax,rax
0x140f68acf: je     0x140f6918e
0x140f68ad5: xor    ecx,ecx
0x140f68ad7: mov    r14d,ecx
0x140f68ada: mov    QWORD PTR [rsp+0x58],rcx
0x140f68adf: nop
0x140f68ae0: mov    edi,ecx
0x140f68ae2: mov    DWORD PTR [rsp+0x6c],ecx
0x140f68ae6: movsxd r12,esi
0x140f68ae9: mov    QWORD PTR [rbp-0x70],r12
0x140f68aed: nop    DWORD PTR [rax]
0x140f68af0: test   ebx,ebx
0x140f68af2: jne    0x140f68afd
0x140f68af4: cmp    edi,0x1
0x140f68af7: je     0x140f690f1
0x140f68afd: mov    r13d,ecx
0x140f68b00: mov    DWORD PTR [rsp+0x68],ecx
0x140f68b04: mov    eax,ecx
0x140f68b06: mov    DWORD PTR [rsp+0x4c],ecx
0x140f68b0a: cmp    DWORD PTR [r15+0xa4],0x0
0x140f68b12: jle    0x140f690e2
0x140f68b18: test   ebx,ebx
0x140f68b1a: jne    0x140f68b31
0x140f68b1c: mov    edi,ecx
0x140f68b1e: mov    DWORD PTR [rsp+0x48],ecx
0x140f68b22: xor    edx,edx
0x140f68b24: lea    rcx,[rbp-0x8]
0x140f68b28: call   0x140070990
0x140f68b2d: mov    eax,DWORD PTR [rax]
0x140f68b2f: jmp    0x140f68b79
0x140f68b31: and    eax,0x80000001
0x140f68b36: jge    0x140f68b3f
0x140f68b38: dec    eax
0x140f68b3a: or     eax,0xfffffffe
0x140f68b3d: inc    eax
0x140f68b3f: cmp    eax,0x1
0x140f68b42: jne    0x140f68b4f
0x140f68b44: mov    rdx,r14
0x140f68b47: test   edi,edi
0x140f68b49: jne    0x140f68b5a
0x140f68b4b: mov    edi,ecx
0x140f68b4d: jmp    0x140f68b68
0x140f68b4f: test   edi,edi
0x140f68b51: jne    0x140f690b2
0x140f68b57: mov    rdx,r14
0x140f68b5a: lea    rcx,[rbp-0x8]
0x140f68b5e: call   0x140070990
0x140f68b63: mov    rdx,r14
0x140f68b66: mov    edi,DWORD PTR [rax]
0x140f68b68: mov    DWORD PTR [rsp+0x48],edi
0x140f68b6c: lea    rcx,[rbp-0x8]
0x140f68b70: call   0x140070990
0x140f68b75: mov    eax,DWORD PTR [rax]
0x140f68b77: add    eax,eax
0x140f68b79: mov    DWORD PTR [rsp+0x54],eax
0x140f68b7d: mov    ebx,edi
0x140f68b7f: mov    DWORD PTR [rsp+0x44],ebx
0x140f68b83: cmp    edi,DWORD PTR [r15+0xa0]
0x140f68b8a: jge    0x140f690aa
0x140f68b90: movsxd r13,r13d
0x140f68b93: mov    QWORD PTR [rsp+0x60],r13
0x140f68b98: imul   r14,r13,0x70
0x140f68b9c: mov    QWORD PTR [rbp+0x230],r14
0x140f68ba3: nop    DWORD PTR [rax+0x0]
0x140f68ba7: nop    WORD PTR [rax+rax*1+0x0]
0x140f68bb0: movsx  ecx,WORD PTR [rbp+0x2a8]
0x140f68bb7: movsx  eax,WORD PTR [rbp+0x248]
0x140f68bbe: sub    ecx,eax
0x140f68bc0: inc    ecx
0x140f68bc2: call   0x140073560
0x140f68bc7: add    ax,WORD PTR [rbp+0x248]
0x140f68bce: movsxd rdi,ebx
0x140f68bd1: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f68bd8: mov    rdx,QWORD PTR [rcx+rdi*8]
0x140f68bdc: mov    WORD PTR [rdx+r14*1+0x38],ax
0x140f68be2: xor    r9d,r9d
0x140f68be5: mov    r14d,r9d
0x140f68be8: mov    DWORD PTR [rsp+0x50],r9d
0x140f68bed: nop    DWORD PTR [rax]
0x140f68bf0: lea    rdx,[rip+0xffffffffff097409]        # 0x140000000
0x140f68bf7: cmp    r14d,0x5
0x140f68bfb: ja     0x140f68c63
0x140f68bfd: movsxd rax,r14d
0x140f68c00: mov    ecx,DWORD PTR [rdx+rax*4+0xf6d750]
0x140f68c07: add    rcx,rdx
0x140f68c0a: jmp    rcx
0x140f68c0c: mov    esi,r9d
0x140f68c0f: mov    DWORD PTR [rsp+0x40],r9d
0x140f68c14: mov    r12,r9
0x140f68c17: mov    QWORD PTR [rbp-0x70],r9
0x140f68c1b: jmp    0x140f68c63
0x140f68c1d: mov    eax,0x1
0x140f68c22: mov    esi,eax
0x140f68c24: mov    DWORD PTR [rsp+0x40],eax
0x140f68c28: mov    r12d,eax
0x140f68c2b: mov    QWORD PTR [rbp-0x70],rax
0x140f68c2f: jmp    0x140f68c63
0x140f68c31: mov    eax,0x3
0x140f68c36: mov    esi,eax
0x140f68c38: mov    DWORD PTR [rsp+0x40],eax
0x140f68c3c: mov    r12d,eax
0x140f68c3f: mov    QWORD PTR [rbp-0x70],rax
0x140f68c43: jmp    0x140f68c63
0x140f68c45: mov    esi,0x5
0x140f68c4a: jmp    0x140f68c58
0x140f68c4c: mov    esi,0x6
0x140f68c51: jmp    0x140f68c58
0x140f68c53: mov    esi,0x7
0x140f68c58: mov    DWORD PTR [rsp+0x40],esi
0x140f68c5c: mov    r12,rsi
0x140f68c5f: mov    QWORD PTR [rbp-0x70],rsi
0x140f68c63: mov    rax,QWORD PTR [rip+0x15b347e]        # 0x14251c0e8
0x140f68c6a: test   rax,rax
0x140f68c6d: je     0x140f68c7b
0x140f68c6f: cmp    QWORD PTR [rax+r12*8+0x8],0x0
0x140f68c75: jne    0x140f69072
0x140f68c7b: cmp    esi,0x7
0x140f68c7e: ja     0x140f68d26
0x140f68c84: movsxd rax,esi
0x140f68c87: mov    ecx,DWORD PTR [rdx+rax*4+0xf6d768]
0x140f68c8e: add    rcx,rdx
0x140f68c91: jmp    rcx
0x140f68c93: lea    rax,[rip+0x15b33be]        # 0x14251c058
0x140f68c9a: mov    QWORD PTR [rbp-0x78],rax
0x140f68c9e: lea    rbx,[rip+0x15b33b7]        # 0x14251c05c
0x140f68ca5: mov    QWORD PTR [rbp-0x80],rbx
0x140f68ca9: jmp    0x140f68d2e
0x140f68cae: lea    rax,[rip+0x15b33bb]        # 0x14251c070
0x140f68cb5: mov    QWORD PTR [rbp-0x78],rax
0x140f68cb9: lea    rbx,[rip+0x15b33b4]        # 0x14251c074
0x140f68cc0: mov    QWORD PTR [rbp-0x80],rbx
0x140f68cc4: jmp    0x140f68d2e
0x140f68cc6: lea    rax,[rip+0x15b33eb]        # 0x14251c0b8
0x140f68ccd: mov    QWORD PTR [rbp-0x78],rax
0x140f68cd1: lea    rbx,[rip+0x15b33e4]        # 0x14251c0bc
0x140f68cd8: mov    QWORD PTR [rbp-0x80],rbx
0x140f68cdc: jmp    0x140f68d2e
0x140f68cde: lea    rax,[rip+0x15b33a3]        # 0x14251c088
0x140f68ce5: mov    QWORD PTR [rbp-0x78],rax
0x140f68ce9: lea    rbx,[rip+0x15b339c]        # 0x14251c08c
0x140f68cf0: mov    QWORD PTR [rbp-0x80],rbx
0x140f68cf4: jmp    0x140f68d2e
0x140f68cf6: lea    rax,[rip+0x15b33d3]        # 0x14251c0d0
0x140f68cfd: mov    QWORD PTR [rbp-0x78],rax
0x140f68d01: lea    rbx,[rip+0x15b33cc]        # 0x14251c0d4
0x140f68d08: mov    QWORD PTR [rbp-0x80],rbx
0x140f68d0c: jmp    0x140f68d2e
0x140f68d0e: lea    rax,[rip+0x15b338b]        # 0x14251c0a0
0x140f68d15: mov    QWORD PTR [rbp-0x78],rax
0x140f68d19: lea    rbx,[rip+0x15b3384]        # 0x14251c0a4
0x140f68d20: mov    QWORD PTR [rbp-0x80],rbx
0x140f68d24: jmp    0x140f68d2e
0x140f68d26: mov    rbx,QWORD PTR [rbp-0x80]
0x140f68d2a: mov    rax,QWORD PTR [rbp-0x78]
0x140f68d2e: mov    eax,DWORD PTR [rax]
0x140f68d30: mov    edx,DWORD PTR [rsp+0x70]
0x140f68d34: cmp    eax,edx
0x140f68d36: jle    0x140f68dca
0x140f68d3c: cmp    eax,0x1
0x140f68d3f: je     0x140f68dca
0x140f68d45: mov    ecx,DWORD PTR [rbp+r12*4+0x1d0]
0x140f68d4d: test   ecx,ecx
0x140f68d4f: jle    0x140f68dca
0x140f68d51: call   0x140073560
0x140f68d56: xor    r9d,r9d
0x140f68d59: mov    ecx,r9d
0x140f68d5c: mov    edx,r9d
0x140f68d5f: nop
0x140f68d60: cmp    ecx,0x4
0x140f68d63: je     0x140f68d84
0x140f68d65: mov    r8d,DWORD PTR [rbx+rdx*4]
0x140f68d69: cmp    eax,r8d
0x140f68d6c: jl     0x140f68d84
0x140f68d6e: sub    eax,r8d
0x140f68d71: inc    ecx
0x140f68d73: inc    rdx
0x140f68d76: cmp    ecx,0x5
0x140f68d79: jl     0x140f68d60
0x140f68d7b: mov    ebx,DWORD PTR [rsp+0x44]
0x140f68d7f: jmp    0x140f69072
0x140f68d84: lea    rcx,[r12+r12*2]
0x140f68d88: add    rcx,rcx
0x140f68d8b: lea    rax,[rdx+rcx*1]
0x140f68d8f: movsx  ebx,WORD PTR [rbp+rax*2+0x40]
0x140f68d94: lea    rax,[rdx+rcx*1]
0x140f68d98: movsx  ecx,WORD PTR [rbp+rax*2+0x42]
0x140f68d9d: sub    ecx,ebx
0x140f68d9f: inc    ecx
0x140f68da1: call   0x140073560
0x140f68da6: add    ax,bx
0x140f68da9: imul   r8,r13,0x38
0x140f68dad: add    r8,r12
0x140f68db0: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f68db7: mov    rdx,QWORD PTR [rcx+rdi*8]
0x140f68dbb: mov    WORD PTR [rdx+r8*2+0x30],ax
0x140f68dc1: mov    ebx,DWORD PTR [rsp+0x44]
0x140f68dc5: jmp    0x140f6906f
0x140f68dca: test   edx,edx
0x140f68dcc: jne    0x140f68df4
0x140f68dce: movsx  ecx,WORD PTR [rbp+r12*2+0x2a0]
0x140f68dd7: movsx  eax,WORD PTR [rbp+r12*2+0x240]
0x140f68de0: sub    ecx,eax
0x140f68de2: inc    ecx
0x140f68de4: call   0x140073560
0x140f68de9: add    ax,WORD PTR [rbp+r12*2+0x240]
0x140f68df2: jmp    0x140f68da9
0x140f68df4: movsx  ecx,WORD PTR [rbp+r12*2+0x270]
0x140f68dfd: lea    ecx,[rcx*2+0x1]
0x140f68e04: call   0x140073560
0x140f68e09: mov    r13d,eax
0x140f68e0c: sub    r13w,WORD PTR [rbp+r12*2+0x270]
0x140f68e15: mov    DWORD PTR [rsp+0x7c],r13d
0x140f68e1a: cmp    DWORD PTR [rsp+0x48],0x0
0x140f68e1f: je     0x140f68e76
0x140f68e21: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f68e28: imul   rdi,QWORD PTR [rsp+0x60],0x38
0x140f68e2e: add    rdi,r12
0x140f68e31: mov    ecx,0x2
0x140f68e36: call   0x140073560
0x140f68e3b: mov    r8d,DWORD PTR [rsp+0x44]
0x140f68e40: mov    ecx,r8d
0x140f68e43: mov    r9d,DWORD PTR [rsp+0x48]
0x140f68e48: sub    ecx,r9d
0x140f68e4b: movsxd rcx,ecx
0x140f68e4e: mov    rdx,QWORD PTR [rbx+rcx*8]
0x140f68e52: movsx  ecx,WORD PTR [rdx+rdi*2+0x30]
0x140f68e57: add    eax,ecx
0x140f68e59: lea    ecx,[r9+r8*1]
0x140f68e5d: movsxd rdx,ecx
0x140f68e60: mov    rcx,QWORD PTR [rbx+rdx*8]
0x140f68e64: movsx  edx,WORD PTR [rcx+rdi*2+0x30]
0x140f68e69: add    edx,eax
0x140f68e6b: sar    edx,1
0x140f68e6d: add    r13w,dx
0x140f68e71: jmp    0x140f68ff0
0x140f68e76: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68e7d: lea    rcx,[rbp-0x8]
0x140f68e81: cmp    DWORD PTR [rsp+0x6c],0x0
0x140f68e86: jne    0x140f68ef3
0x140f68e88: mov    r14,QWORD PTR [rax+rdi*8]
0x140f68e8c: mov    rdx,QWORD PTR [rsp+0x58]
0x140f68e91: call   0x140070990
0x140f68e96: mov    ecx,DWORD PTR [rsp+0x68]
0x140f68e9a: sub    ecx,DWORD PTR [rax]
0x140f68e9c: movsxd rax,ecx
0x140f68e9f: imul   rsi,rax,0x70
0x140f68ea3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68eaa: mov    rdi,QWORD PTR [rax+rdi*8]
0x140f68eae: mov    rdx,QWORD PTR [rsp+0x58]
0x140f68eb3: lea    rcx,[rbp-0x8]
0x140f68eb7: call   0x140070990
0x140f68ebc: mov    eax,DWORD PTR [rax]
0x140f68ebe: add    eax,DWORD PTR [rsp+0x68]
0x140f68ec2: cdqe
0x140f68ec4: imul   rbx,rax,0x70
0x140f68ec8: mov    ecx,0x2
0x140f68ecd: call   0x140073560
0x140f68ed2: lea    rcx,[rdi+r12*2]
0x140f68ed6: movsx  edx,WORD PTR [rcx+rbx*1+0x30]
0x140f68edb: add    eax,edx
0x140f68edd: lea    rcx,[r14+r12*2]
0x140f68ee1: movsx  edx,WORD PTR [rcx+rsi*1+0x30]
0x140f68ee6: add    edx,eax
0x140f68ee8: sar    edx,1
0x140f68eea: add    r13w,dx
0x140f68eee: jmp    0x140f68fe2
0x140f68ef3: mov    rax,QWORD PTR [rax+rdi*8]
0x140f68ef7: mov    QWORD PTR [rbp-0x18],rax
0x140f68efb: mov    rbx,QWORD PTR [rsp+0x58]
0x140f68f00: mov    rdx,rbx
0x140f68f03: call   0x140070990
0x140f68f08: mov    ecx,DWORD PTR [rsp+0x68]
0x140f68f0c: sub    ecx,DWORD PTR [rax]
0x140f68f0e: movsxd rax,ecx
0x140f68f11: imul   rax,rax,0x70
0x140f68f15: mov    QWORD PTR [rbp-0x10],rax
0x140f68f19: mov    rax,QWORD PTR [r15+0x2b0]
0x140f68f20: mov    r13,QWORD PTR [rax+rdi*8]
0x140f68f24: mov    rdx,rbx
0x140f68f27: lea    rcx,[rbp-0x8]
0x140f68f2b: call   0x140070990
0x140f68f30: mov    eax,DWORD PTR [rax]
0x140f68f32: add    eax,DWORD PTR [rsp+0x68]
0x140f68f36: cdqe
0x140f68f38: imul   r12,rax,0x70
0x140f68f3c: mov    r15,QWORD PTR [r15+0x2b0]
0x140f68f43: mov    rdx,rbx
0x140f68f46: lea    rcx,[rbp-0x8]
0x140f68f4a: call   0x140070990
0x140f68f4f: mov    ecx,DWORD PTR [rsp+0x44]
0x140f68f53: sub    ecx,DWORD PTR [rax]
0x140f68f55: movsxd r14,ecx
0x140f68f58: mov    rsi,QWORD PTR [rbp-0x68]
0x140f68f5c: mov    rsi,QWORD PTR [rsi+0x2b0]
0x140f68f63: mov    rdx,rbx
0x140f68f66: lea    rcx,[rbp-0x8]
0x140f68f6a: call   0x140070990
0x140f68f6f: mov    eax,DWORD PTR [rax]
0x140f68f71: add    eax,DWORD PTR [rsp+0x44]
0x140f68f75: movsxd rbx,eax
0x140f68f78: imul   rdi,QWORD PTR [rsp+0x60],0x38
0x140f68f7e: add    rdi,QWORD PTR [rbp-0x70]
0x140f68f82: mov    ecx,0x4
0x140f68f87: call   0x140073560
0x140f68f8c: mov    rcx,QWORD PTR [rsi+rbx*8]
0x140f68f90: movsx  edx,WORD PTR [rcx+rdi*2+0x30]
0x140f68f95: add    eax,edx
0x140f68f97: mov    rcx,QWORD PTR [r15+r14*8]
0x140f68f9b: movsx  r8d,WORD PTR [rcx+rdi*2+0x30]
0x140f68fa1: mov    rcx,QWORD PTR [rbp-0x70]
0x140f68fa5: lea    rcx,[rcx*2+0x0]
0x140f68fad: add    rcx,r13
0x140f68fb0: movsx  edx,WORD PTR [rcx+r12*1+0x30]
0x140f68fb6: add    edx,eax
0x140f68fb8: mov    rax,QWORD PTR [rbp-0x18]
0x140f68fbc: mov    r12,QWORD PTR [rbp-0x70]
0x140f68fc0: lea    rax,[rax+r12*2]
0x140f68fc4: mov    rcx,QWORD PTR [rbp-0x10]
0x140f68fc8: movsx  ecx,WORD PTR [rax+rcx*1+0x30]
0x140f68fcd: add    edx,r8d
0x140f68fd0: add    ecx,edx
0x140f68fd2: sar    ecx,0x2
0x140f68fd5: mov    r13d,DWORD PTR [rsp+0x7c]
0x140f68fda: add    r13w,cx
0x140f68fde: mov    r15,QWORD PTR [rbp-0x68]
0x140f68fe2: mov    r14d,DWORD PTR [rsp+0x50]
0x140f68fe7: mov    esi,DWORD PTR [rsp+0x40]
0x140f68feb: nop    DWORD PTR [rax+rax*1+0x0]
0x140f68ff0: xor    dl,dl
0x140f68ff2: movsx  ecx,WORD PTR [rbp+r12*2+0x240]
0x140f68ffb: cmp    r13w,cx
0x140f68fff: jge    0x140f6901b
0x140f69001: movsx  eax,r13w
0x140f69005: sub    ecx,eax
0x140f69007: call   0x140073560
0x140f6900c: add    ax,WORD PTR [rbp+r12*2+0x240]
0x140f69015: movzx  r13d,ax
0x140f69019: mov    dl,0x1
0x140f6901b: movsx  eax,WORD PTR [rbp+r12*2+0x2a0]
0x140f69024: cmp    r13w,ax
0x140f69028: jle    0x140f69044
0x140f6902a: movsx  ecx,r13w
0x140f6902e: sub    ecx,eax
0x140f69030: call   0x140073560
0x140f69035: movzx  r13d,WORD PTR [rbp+r12*2+0x2a0]
0x140f6903e: sub    r13w,ax
0x140f69042: jmp    0x140f68ff0
0x140f69044: test   dl,dl
0x140f69046: jne    0x140f68ff0
0x140f69048: imul   rdx,QWORD PTR [rsp+0x60],0x38
0x140f6904e: add    rdx,r12
0x140f69051: mov    rax,QWORD PTR [r15+0x2b0]
0x140f69058: movsxd rbx,DWORD PTR [rsp+0x44]
0x140f6905d: mov    rdi,rbx
0x140f69060: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f69064: mov    WORD PTR [rcx+rdx*2+0x30],r13w
0x140f6906a: mov    r13,QWORD PTR [rsp+0x60]
0x140f6906f: xor    r9d,r9d
0x140f69072: inc    r14d
0x140f69075: mov    DWORD PTR [rsp+0x50],r14d
0x140f6907a: cmp    r14d,0x6
0x140f6907e: jl     0x140f68bf0
0x140f69084: add    ebx,DWORD PTR [rsp+0x54]
0x140f69088: mov    DWORD PTR [rsp+0x44],ebx
0x140f6908c: cmp    ebx,DWORD PTR [r15+0xa0]
0x140f69093: mov    r14,QWORD PTR [rbp+0x230]
0x140f6909a: jl     0x140f68bb0
0x140f690a0: mov    r14,QWORD PTR [rsp+0x58]
0x140f690a5: mov    r13d,DWORD PTR [rsp+0x68]
0x140f690aa: mov    edi,DWORD PTR [rsp+0x6c]
0x140f690ae: mov    ebx,DWORD PTR [rsp+0x70]
0x140f690b2: mov    rdx,r14
0x140f690b5: lea    rcx,[rbp-0x8]
0x140f690b9: call   0x140070990
0x140f690be: add    r13d,DWORD PTR [rax]
0x140f690c1: mov    DWORD PTR [rsp+0x68],r13d
0x140f690c6: mov    eax,DWORD PTR [rsp+0x4c]
0x140f690ca: inc    eax
0x140f690cc: mov    DWORD PTR [rsp+0x4c],eax
0x140f690d0: cmp    r13d,DWORD PTR [r15+0xa4]
0x140f690d7: mov    ecx,0x0
0x140f690dc: jl     0x140f68b18
0x140f690e2: inc    edi
0x140f690e4: mov    DWORD PTR [rsp+0x6c],edi
0x140f690e8: cmp    edi,0x2
0x140f690eb: jl     0x140f68af0
0x140f690f1: lea    rcx,[rbp-0x8]
0x140f690f5: call   0x1400709a0
0x140f690fa: dec    eax
0x140f690fc: cmp    ebx,eax
0x140f690fe: je     0x140f69160
0x140f69100: movdqu xmm1,XMMWORD PTR [rbp+0x270]
0x140f69108: psraw  xmm1,0x1
0x140f6910d: movdqa xmm0,xmm6
0x140f69111: pmaxsw xmm0,xmm1
0x140f69115: movdqu XMMWORD PTR [rbp+0x270],xmm0
0x140f6911d: movdqu xmm1,XMMWORD PTR [rbp+0x280]
0x140f69125: psraw  xmm1,0x1
0x140f6912a: movdqa xmm0,xmm6
0x140f6912e: pmaxsw xmm0,xmm1
0x140f69132: movdqu XMMWORD PTR [rbp+0x280],xmm0
0x140f6913a: movdqu xmm1,XMMWORD PTR [rbp+0x290]
0x140f69142: psraw  xmm1,0x1
0x140f69147: movdqa xmm0,xmm6
0x140f6914b: pmaxsw xmm0,xmm1
0x140f6914f: movdqu XMMWORD PTR [rbp+0x290],xmm0
0x140f69157: mov    esi,0x18
0x140f6915c: mov    DWORD PTR [rsp+0x40],esi
0x140f69160: inc    ebx
0x140f69162: mov    DWORD PTR [rsp+0x70],ebx
0x140f69166: movsxd r14,ebx
0x140f69169: mov    QWORD PTR [rsp+0x58],r14
0x140f6916e: lea    rcx,[rbp-0x8]
0x140f69172: call   0x1400709a0
0x140f69177: cmp    r14,rax
0x140f6917a: mov    ecx,0x0
0x140f6917f: jb     0x140f68ae0
0x140f69185: mov    r14d,0x3
0x140f6918b: xor    r13d,r13d
0x140f6918e: mov    edi,0x32
0x140f69193: cmp    DWORD PTR [rip+0x15b2b96],0x3        # 0x14251bd30
0x140f6919a: jl     0x140f691fe
0x140f6919c: mov    rax,QWORD PTR [r15+0x2b0]
0x140f691a3: mov    rcx,QWORD PTR [rax]
0x140f691a6: mov    WORD PTR [rcx+0x30],di
0x140f691aa: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f691b1: mov    rax,QWORD PTR [r15+0x2b0]
0x140f691b8: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f691bd: mov    WORD PTR [rdx+0x30],di
0x140f691c1: movsxd rax,DWORD PTR [r15+0xa4]
0x140f691c8: imul   rdx,rax,0x70
0x140f691cc: mov    rax,QWORD PTR [r15+0x2b0]
0x140f691d3: mov    rcx,QWORD PTR [rax]
0x140f691d6: mov    WORD PTR [rdx+rcx*1-0x40],di
0x140f691db: movsxd r8,DWORD PTR [r15+0xa0]
0x140f691e2: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f691e9: movsxd rax,DWORD PTR [r15+0xa4]
0x140f691f0: imul   rdx,rax,0x70
0x140f691f4: mov    rax,QWORD PTR [rcx+r8*8-0x8]
0x140f691f9: mov    WORD PTR [rax+rdx*1-0x40],di
0x140f691fe: xor    r9d,r9d
0x140f69201: movzx  r8d,WORD PTR [r15+0xa0]
0x140f69209: dec    r8w
0x140f6920d: xor    edx,edx
0x140f6920f: lea    rax,[rbp+0x2d0]
0x140f69216: mov    QWORD PTR [rsp+0x38],rax
0x140f6921b: lea    rax,[rbp+0x2a0]
0x140f69222: mov    QWORD PTR [rsp+0x30],rax
0x140f69227: lea    rax,[rbp+0x240]
0x140f6922e: mov    QWORD PTR [rsp+0x28],rax
0x140f69233: mov    WORD PTR [rsp+0x20],r13w
0x140f69239: mov    rcx,r15
0x140f6923c: call   0x140f72410
0x140f69241: movzx  r9d,WORD PTR [r15+0xa4]
0x140f69249: dec    r9w
0x140f6924d: movzx  r8d,WORD PTR [r15+0xa0]
0x140f69255: dec    r8w
0x140f69259: xor    edx,edx
0x140f6925b: lea    rax,[rbp+0x2d0]
0x140f69262: mov    QWORD PTR [rsp+0x38],rax
0x140f69267: lea    rax,[rbp+0x2a0]
0x140f6926e: mov    QWORD PTR [rsp+0x30],rax
0x140f69273: lea    rax,[rbp+0x240]
0x140f6927a: mov    QWORD PTR [rsp+0x28],rax
0x140f6927f: mov    WORD PTR [rsp+0x20],r9w
0x140f69285: mov    rcx,r15
0x140f69288: call   0x140f72410
0x140f6928d: movzx  eax,WORD PTR [r15+0xa4]
0x140f69295: dec    ax
0x140f69298: xor    r9d,r9d
0x140f6929b: xor    r8d,r8d
0x140f6929e: xor    edx,edx
0x140f692a0: lea    rcx,[rbp+0x300]
0x140f692a7: mov    QWORD PTR [rsp+0x38],rcx
0x140f692ac: lea    rcx,[rbp+0x2a0]
0x140f692b3: mov    QWORD PTR [rsp+0x30],rcx
0x140f692b8: lea    rcx,[rbp+0x240]
0x140f692bf: mov    QWORD PTR [rsp+0x28],rcx
0x140f692c4: mov    WORD PTR [rsp+0x20],ax
0x140f692c9: mov    rcx,r15
0x140f692cc: call   0x140f72410
0x140f692d1: movzx  edx,WORD PTR [r15+0xa0]
0x140f692d9: dec    dx
0x140f692dc: movzx  eax,WORD PTR [r15+0xa4]
0x140f692e4: dec    ax
0x140f692e7: xor    r9d,r9d
0x140f692ea: lea    rcx,[rbp+0x300]
0x140f692f1: mov    QWORD PTR [rsp+0x38],rcx
0x140f692f6: lea    rcx,[rbp+0x2a0]
0x140f692fd: mov    QWORD PTR [rsp+0x30],rcx
0x140f69302: lea    rcx,[rbp+0x240]
0x140f69309: mov    QWORD PTR [rsp+0x28],rcx
0x140f6930e: mov    WORD PTR [rsp+0x20],ax
0x140f69313: movzx  r8d,dx
0x140f69317: mov    rcx,r15
0x140f6931a: call   0x140f72410
0x140f6931f: cmp    DWORD PTR [rip+0x15b2a0a],0x4        # 0x14251bd30
0x140f69326: jne    0x140f693cc
0x140f6932c: mov    r9d,r13d
0x140f6932f: cmp    DWORD PTR [r15+0xa0],0x0
0x140f69337: jle    0x140f69379
0x140f69339: nop    DWORD PTR [rax+0x0]
0x140f69340: movsxd r8,r9d
0x140f69343: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6934a: mov    rcx,QWORD PTR [rax+r8*8]
0x140f6934e: mov    WORD PTR [rcx+0x30],di
0x140f69352: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f69359: movsxd rax,DWORD PTR [r15+0xa4]
0x140f69360: imul   rdx,rax,0x70
0x140f69364: mov    rax,QWORD PTR [rcx+r8*8]
0x140f69368: mov    WORD PTR [rax+rdx*1-0x40],di
0x140f6936d: inc    r9d
0x140f69370: cmp    r9d,DWORD PTR [r15+0xa0]
0x140f69377: jl     0x140f69340
0x140f69379: mov    r9d,r13d
0x140f6937c: cmp    DWORD PTR [r15+0xa4],0x0
0x140f69384: jle    0x140f693cc
0x140f69386: data16 nop WORD PTR [rax+rax*1+0x0]
0x140f69390: movsxd rax,r9d
0x140f69393: imul   r8,rax,0x70
0x140f69397: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6939e: mov    rcx,QWORD PTR [rax]
0x140f693a1: mov    WORD PTR [rcx+r8*1+0x30],di
0x140f693a7: movsxd rcx,DWORD PTR [r15+0xa0]
0x140f693ae: mov    rax,QWORD PTR [r15+0x2b0]
0x140f693b5: mov    rdx,QWORD PTR [rax+rcx*8-0x8]
0x140f693ba: mov    WORD PTR [rdx+r8*1+0x30],di
0x140f693c0: inc    r9d
0x140f693c3: cmp    r9d,DWORD PTR [r15+0xa4]
0x140f693ca: jl     0x140f69390
0x140f693cc: cmp    DWORD PTR [rip+0x15b295d],0x3        # 0x14251bd30
0x140f693d3: jne    0x140f69491
0x140f693d9: mov    ecx,0x4
0x140f693de: call   0x140073560
0x140f693e3: mov    r10d,eax
0x140f693e6: mov    r9d,r13d
0x140f693e9: cmp    DWORD PTR [r15+0xa0],0x0
0x140f693f1: jle    0x140f69437
0x140f693f3: movsxd r8,r9d
0x140f693f6: test   r10d,r10d
0x140f693f9: je     0x140f6940a
0x140f693fb: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f69402: mov    rdx,QWORD PTR [rcx+r8*8]
0x140f69406: mov    WORD PTR [rdx+0x30],di
0x140f6940a: cmp    r10d,0x1
0x140f6940e: je     0x140f6942b
0x140f69410: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f69417: movsxd rax,DWORD PTR [r15+0xa4]
0x140f6941e: imul   rdx,rax,0x70
0x140f69422: mov    rax,QWORD PTR [rcx+r8*8]
0x140f69426: mov    WORD PTR [rax+rdx*1-0x40],di
0x140f6942b: inc    r9d
0x140f6942e: cmp    r9d,DWORD PTR [r15+0xa0]
0x140f69435: jl     0x140f693f3
0x140f69437: mov    r9d,r13d
0x140f6943a: cmp    DWORD PTR [r15+0xa4],0x0
0x140f69442: jle    0x140f69491
0x140f69444: cmp    r10d,0x2
0x140f69448: je     0x140f69466
0x140f6944a: movsxd rax,r9d
0x140f6944d: imul   rdx,rax,0x70
0x140f69451: mov    rax,QWORD PTR [r15+0x2b0]
0x140f69458: mov    rcx,QWORD PTR [rax]
0x140f6945b: mov    WORD PTR [rdx+rcx*1+0x30],di
0x140f69460: cmp    r10d,0x3
0x140f69464: je     0x140f69485
0x140f69466: movsxd r8,DWORD PTR [r15+0xa0]
0x140f6946d: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f69474: movsxd rax,r9d
0x140f69477: imul   rdx,rax,0x70
0x140f6947b: mov    rax,QWORD PTR [rcx+r8*8-0x8]
0x140f69480: mov    WORD PTR [rax+rdx*1+0x30],di
0x140f69485: inc    r9d
0x140f69488: cmp    r9d,DWORD PTR [r15+0xa4]
0x140f6948f: jl     0x140f69444
0x140f69491: cmp    DWORD PTR [rip+0x15b2898],0x2        # 0x14251bd30
0x140f69498: jne    0x140f695cb
0x140f6949e: mov    ecx,0x4
0x140f694a3: call   0x140073560
0x140f694a8: mov    ebx,eax
0x140f694aa: mov    ecx,r14d
0x140f694ad: call   0x140073560
0x140f694b2: lea    r10d,[rbx+0x1]
0x140f694b6: add    r10d,eax
0x140f694b9: and    r10d,0x80000003
0x140f694c0: jge    0x140f694cc
0x140f694c2: dec    r10d
0x140f694c5: or     r10d,0xfffffffc
0x140f694c9: inc    r10d
0x140f694cc: test   ebx,ebx
0x140f694ce: je     0x140f694d5
0x140f694d0: test   r10d,r10d
0x140f694d3: jne    0x140f69500
0x140f694d5: mov    r8d,r13d
0x140f694d8: cmp    DWORD PTR [r15+0xa0],0x0
0x140f694e0: jle    0x140f69500
0x140f694e2: movsxd rcx,r8d
0x140f694e5: mov    rax,QWORD PTR [r15+0x2b0]
0x140f694ec: mov    rdx,QWORD PTR [rax+rcx*8]
0x140f694f0: mov    WORD PTR [rdx+0x30],di
0x140f694f4: inc    r8d
0x140f694f7: cmp    r8d,DWORD PTR [r15+0xa0]
0x140f694fe: jl     0x140f694e2
0x140f69500: cmp    ebx,0x1
0x140f69503: je     0x140f6950b
0x140f69505: cmp    r10d,0x1
0x140f69509: jne    0x140f6954a
0x140f6950b: mov    r9d,r13d
0x140f6950e: cmp    DWORD PTR [r15+0xa0],0x0
0x140f69516: jle    0x140f6954a
0x140f69518: nop    DWORD PTR [rax+rax*1+0x0]
0x140f69520: movsxd r8,r9d
0x140f69523: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6952a: movsxd rax,DWORD PTR [r15+0xa4]
0x140f69531: imul   rdx,rax,0x70
0x140f69535: mov    rax,QWORD PTR [rcx+r8*8]
0x140f69539: mov    WORD PTR [rax+rdx*1-0x40],di
0x140f6953e: inc    r9d
0x140f69541: cmp    r9d,DWORD PTR [r15+0xa0]
0x140f69548: jl     0x140f69520
0x140f6954a: cmp    ebx,0x2
0x140f6954d: je     0x140f69555
0x140f6954f: cmp    r10d,0x2
0x140f69553: jne    0x140f69584
0x140f69555: mov    r8d,r13d
0x140f69558: cmp    DWORD PTR [r15+0xa4],0x0
0x140f69560: jle    0x140f69584
0x140f69562: movsxd rax,r8d
0x140f69565: imul   rdx,rax,0x70
0x140f69569: mov    rax,QWORD PTR [r15+0x2b0]
0x140f69570: mov    rcx,QWORD PTR [rax]
0x140f69573: mov    WORD PTR [rdx+rcx*1+0x30],di
0x140f69578: inc    r8d
0x140f6957b: cmp    r8d,DWORD PTR [r15+0xa4]
0x140f69582: jl     0x140f69562
0x140f69584: cmp    ebx,0x3
0x140f69587: je     0x140f6958f
0x140f69589: cmp    r10d,0x3
0x140f6958d: jne    0x140f695cb
0x140f6958f: mov    r9d,r13d
0x140f69592: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6959a: jle    0x140f695cb
0x140f6959c: nop    DWORD PTR [rax+0x0]
0x140f695a0: movsxd r8,DWORD PTR [r15+0xa0]
0x140f695a7: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f695ae: movsxd rax,r9d
0x140f695b1: imul   rdx,rax,0x70
0x140f695b5: mov    rax,QWORD PTR [rcx+r8*8-0x8]
0x140f695ba: mov    WORD PTR [rax+rdx*1+0x30],di
0x140f695bf: inc    r9d
0x140f695c2: cmp    r9d,DWORD PTR [r15+0xa4]
0x140f695c9: jl     0x140f695a0
0x140f695cb: cmp    DWORD PTR [rip+0x15b275e],0x1        # 0x14251bd30
0x140f695d2: jne    0x140f696ee
0x140f695d8: mov    ecx,0x4
0x140f695dd: call   0x140073560
0x140f695e2: test   eax,eax
0x140f695e4: je     0x140f696bd
0x140f695ea: sub    eax,0x1
0x140f695ed: je     0x140f69684
0x140f695f3: sub    eax,0x1
0x140f695f6: je     0x140f69642
0x140f695f8: cmp    eax,0x1
0x140f695fb: jne    0x140f696ee
0x140f69601: mov    r9d,r13d
0x140f69604: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6960c: jle    0x140f696ee
0x140f69612: movsxd r8,DWORD PTR [r15+0xa0]
0x140f69619: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f69620: movsxd rax,r9d
0x140f69623: imul   rdx,rax,0x70
0x140f69627: mov    rax,QWORD PTR [rcx+r8*8-0x8]
0x140f6962c: mov    WORD PTR [rax+rdx*1+0x30],di
0x140f69631: inc    r9d
0x140f69634: cmp    r9d,DWORD PTR [r15+0xa4]
0x140f6963b: jl     0x140f69612
0x140f6963d: jmp    0x140f696ee
0x140f69642: mov    r8d,r13d
0x140f69645: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6964d: jle    0x140f696ee
0x140f69653: nop    DWORD PTR [rax+0x0]
0x140f69657: nop    WORD PTR [rax+rax*1+0x0]
0x140f69660: movsxd rax,r8d
0x140f69663: imul   rdx,rax,0x70
0x140f69667: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6966e: mov    rcx,QWORD PTR [rax]
0x140f69671: mov    WORD PTR [rdx+rcx*1+0x30],di
0x140f69676: inc    r8d
0x140f69679: cmp    r8d,DWORD PTR [r15+0xa4]
0x140f69680: jl     0x140f69660
0x140f69682: jmp    0x140f696ee
0x140f69684: mov    r9d,r13d
0x140f69687: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6968f: jle    0x140f696ee
0x140f69691: movsxd r8,r9d
0x140f69694: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6969b: movsxd rax,DWORD PTR [r15+0xa4]
0x140f696a2: imul   rdx,rax,0x70
0x140f696a6: mov    rax,QWORD PTR [rcx+r8*8]
0x140f696aa: mov    WORD PTR [rax+rdx*1-0x40],di
0x140f696af: inc    r9d
0x140f696b2: cmp    r9d,DWORD PTR [r15+0xa0]
0x140f696b9: jl     0x140f69691
0x140f696bb: jmp    0x140f696ee
0x140f696bd: mov    r8d,r13d
0x140f696c0: cmp    DWORD PTR [r15+0xa0],0x0
0x140f696c8: jle    0x140f696ee
0x140f696ca: nop    WORD PTR [rax+rax*1+0x0]
0x140f696d0: movsxd rcx,r8d
0x140f696d3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f696da: mov    rdx,QWORD PTR [rax+rcx*8]
0x140f696de: mov    WORD PTR [rdx+0x30],di
0x140f696e2: inc    r8d
0x140f696e5: cmp    r8d,DWORD PTR [r15+0xa0]
0x140f696ec: jl     0x140f696d0
0x140f696ee: mov    r11,QWORD PTR [rip+0x15b29f3]        # 0x14251c0e8
0x140f696f5: test   r11,r11
0x140f696f8: je     0x140f69705
0x140f696fa: cmp    QWORD PTR [r11+0x8],0x0
0x140f696ff: jne    0x140f69898
0x140f69705: cmp    DWORD PTR [rip+0x15b294c],0x1        # 0x14251c058
0x140f6970c: jg     0x140f69898
0x140f69712: cmp    DWORD PTR [rip+0x15b2727],0x64        # 0x14251be40
0x140f69719: jge    0x140f69898
0x140f6971f: mov    edi,r13d
0x140f69722: mov    r12d,r13d
0x140f69725: mov    r14d,r13d
0x140f69728: mov    ebx,r13d
0x140f6972b: mov    ecx,DWORD PTR [r15+0xa0]
0x140f69732: test   ecx,ecx
0x140f69734: jle    0x140f69775
0x140f69736: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6973d: movsxd rax,DWORD PTR [r15+0xa4]
0x140f69744: imul   r9,rax,0x70
0x140f69748: mov    r8d,ecx
0x140f6974b: nop    DWORD PTR [rax+rax*1+0x0]
0x140f69750: mov    eax,ebx
0x140f69752: mov    rcx,QWORD PTR [rdx]
0x140f69755: inc    ebx
0x140f69757: cmp    WORD PTR [rcx+0x30],0x64
0x140f6975c: cmovge ebx,eax
0x140f6975f: cmp    WORD PTR [rcx+r9*1-0x40],0x64
0x140f69766: jge    0x140f6976b
0x140f69768: inc    r14d
0x140f6976b: add    rdx,0x8
0x140f6976f: sub    r8,0x1
0x140f69773: jne    0x140f69750
0x140f69775: mov    r9d,DWORD PTR [r15+0xa4]
0x140f6977c: test   r9d,r9d
0x140f6977f: jle    0x140f697d3
0x140f69781: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f69788: movsxd rax,DWORD PTR [r15+0xa0]
0x140f6978f: mov    rdx,QWORD PTR [rcx+rax*8-0x8]
0x140f69794: add    rdx,0x30
0x140f69798: mov    r8,QWORD PTR [rcx]
0x140f6979b: add    r8,0x30
0x140f6979f: mov    ecx,r9d
0x140f697a2: nop    DWORD PTR [rax+0x0]
0x140f697a6: data16 nop WORD PTR [rax+rax*1+0x0]
0x140f697b0: mov    eax,edi
0x140f697b2: inc    edi
0x140f697b4: cmp    WORD PTR [r8],0x64
0x140f697b9: cmovge edi,eax
0x140f697bc: cmp    WORD PTR [rdx],0x64
0x140f697c0: jge    0x140f697c5
0x140f697c2: inc    r12d
0x140f697c5: add    r8,0x70
0x140f697c9: add    rdx,0x70
0x140f697cd: sub    rcx,0x1
0x140f697d1: jne    0x140f697b0
0x140f697d3: mov    r9d,DWORD PTR [r15+0xa4]
0x140f697da: cmp    edi,r9d
0x140f697dd: sete   dl
0x140f697e0: lea    eax,[rdx+0x1]
0x140f697e3: movzx  ecx,al
0x140f697e6: movzx  eax,dl
0x140f697e9: cmp    r12d,r9d
0x140f697ec: cmovne ecx,eax
0x140f697ef: movzx  r8d,cl
0x140f697f3: mov    r10d,DWORD PTR [r15+0xa0]
0x140f697fa: lea    ecx,[r8+0x1]
0x140f697fe: movzx  edx,cl
0x140f69801: cmp    r14d,r10d
0x140f69804: cmovne edx,r8d
0x140f69808: movzx  r8d,dl
0x140f6980c: lea    ecx,[r8+0x1]
0x140f69810: movzx  r13d,cl
0x140f69814: cmp    ebx,r10d
0x140f69817: cmovne r13d,r8d
0x140f6981b: mov    eax,r9d
0x140f6981e: cdq
0x140f6981f: and    edx,0x7
0x140f69822: add    eax,edx
0x140f69824: sar    eax,0x3
0x140f69827: cmp    edi,eax
0x140f69829: setge  r8b
0x140f6982d: lea    ecx,[r8+0x1]
0x140f69831: movzx  edx,cl
0x140f69834: movzx  ecx,r8b
0x140f69838: cmp    r12d,eax
0x140f6983b: cmovl  edx,ecx
0x140f6983e: movzx  r8d,dl
0x140f69842: mov    eax,r10d
0x140f69845: cdq
0x140f69846: and    edx,0x7
0x140f69849: add    eax,edx
0x140f6984b: sar    eax,0x3
0x140f6984e: lea    ecx,[r8+0x1]
0x140f69852: movzx  edx,cl
0x140f69855: cmp    r14d,eax
0x140f69858: cmovl  edx,r8d
0x140f6985c: movzx  r8d,dl
0x140f69860: lea    ecx,[r8+0x1]
0x140f69864: movzx  edx,cl
0x140f69867: cmp    ebx,eax
0x140f69869: cmovl  edx,r8d
0x140f6986d: movzx  eax,dl
0x140f69870: cmp    eax,DWORD PTR [rip+0x15b24b6]        # 0x14251bd2c
0x140f69876: mov    r14d,0x3
0x140f6987c: jl     0x140f68350
0x140f69882: movzx  eax,r13b
0x140f69886: cmp    eax,DWORD PTR [rip+0x15b24a4]        # 0x14251bd30
0x140f6988c: mov    r13d,0x0
0x140f69892: jl     0x140f68353
0x140f69898: test   r11,r11
0x140f6989b: je     0x140f698a8
0x140f6989d: cmp    QWORD PTR [r11+0x38],0x0
0x140f698a2: jne    0x140f69938
0x140f698a8: cmp    DWORD PTR [rip+0x15b2821],0x1        # 0x14251c0d0
0x140f698af: jne    0x140f69938
0x140f698b5: mov    esi,0xf
0x140f698ba: nop    WORD PTR [rax+rax*1+0x0]
0x140f698c0: movzx  edi,WORD PTR [rbp+0x2ac]
0x140f698c7: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f698ce: mov    ecx,DWORD PTR [r15+0xa0]
0x140f698d5: call   0x140073560
0x140f698da: movsxd rcx,eax
0x140f698dd: mov    rbx,QWORD PTR [rbx+rcx*8]
0x140f698e1: mov    ecx,DWORD PTR [r15+0xa4]
0x140f698e8: call   0x140073560
0x140f698ed: movsxd rcx,eax
0x140f698f0: imul   rax,rcx,0x70
0x140f698f4: mov    WORD PTR [rbx+rax*1+0x3c],di
0x140f698f9: movzx  edi,WORD PTR [rbp+0x24c]
0x140f69900: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f69907: mov    ecx,DWORD PTR [r15+0xa0]
0x140f6990e: call   0x140073560
0x140f69913: movsxd rcx,eax
0x140f69916: mov    rbx,QWORD PTR [rbx+rcx*8]
0x140f6991a: mov    ecx,DWORD PTR [r15+0xa4]
0x140f69921: call   0x140073560
0x140f69926: movsxd rcx,eax
0x140f69929: imul   rax,rcx,0x70
0x140f6992d: mov    WORD PTR [rbx+rax*1+0x3c],di
0x140f69932: sub    rsi,0x1
0x140f69936: jne    0x140f698c0
0x140f69938: mov    DWORD PTR [rsp+0x40],r13d
0x140f6993d: mov    eax,DWORD PTR [r15+0xa0]
0x140f69944: mov    ecx,DWORD PTR [rsp+0x74]
0x140f69948: sub    eax,ecx
0x140f6994a: test   eax,eax
0x140f6994c: jle    0x140f699c9
0x140f6994e: xchg   ax,ax
0x140f69950: xor    ebx,ebx
0x140f69952: mov    eax,DWORD PTR [r15+0xa4]
0x140f69959: sub    eax,ecx
0x140f6995b: test   eax,eax
0x140f6995d: jle    0x140f699b3
0x140f6995f: nop
0x140f69960: lea    eax,[rcx+rbx*1]
0x140f69963: lea    r8d,[rcx+r13*1]
0x140f69967: lea    rcx,[rbp+0x270]
0x140f6996e: mov    QWORD PTR [rsp+0x38],rcx
0x140f69973: lea    rcx,[rbp+0x2a0]
0x140f6997a: mov    QWORD PTR [rsp+0x30],rcx
0x140f6997f: lea    rcx,[rbp+0x240]
0x140f69986: mov    QWORD PTR [rsp+0x28],rcx
0x140f6998b: mov    WORD PTR [rsp+0x20],ax
0x140f69990: movzx  r9d,bx
0x140f69994: movzx  edx,r13w
0x140f69998: mov    rcx,r15
0x140f6999b: call   0x140f72410
0x140f699a0: mov    ecx,DWORD PTR [rsp+0x74]
0x140f699a4: add    ebx,ecx
0x140f699a6: mov    eax,DWORD PTR [r15+0xa4]
0x140f699ad: sub    eax,ecx
0x140f699af: cmp    ebx,eax
0x140f699b1: jl     0x140f69960
0x140f699b3: add    r13d,ecx
0x140f699b6: mov    eax,DWORD PTR [r15+0xa0]
0x140f699bd: sub    eax,ecx
0x140f699bf: cmp    r13d,eax
0x140f699c2: jl     0x140f69950
0x140f699c4: mov    DWORD PTR [rsp+0x40],r13d
0x140f699c9: lea    rcx,[rbp-0x8]
0x140f699cd: call   0x140067150
0x140f699d2: movzx  r10d,WORD PTR [rip+0x15a4606]        # 0x14250dfe0
0x140f699da: jmp    0x140f699e6
0x140f699dc: mov    r13d,DWORD PTR [rsp+0x7c]
0x140f699e1: mov    DWORD PTR [rsp+0x40],r13d
0x140f699e6: mov    r14d,0x64
0x140f699ec: cmp    r10w,0x3
0x140f699f1: jne    0x140f6b134
0x140f699f7: mov    r9d,DWORD PTR [r15+0xa4]
0x140f699fe: mov    r8d,r9d
0x140f69a01: imul   r8d,r9d
0x140f69a05: imul   ecx,r8d,0xc8
0x140f69a0c: mov    eax,0x7f017e03
0x140f69a11: imul   ecx
0x140f69a13: mov    r12d,edx
0x140f69a16: sar    r12d,0xf
0x140f69a1a: mov    ecx,r12d
0x140f69a1d: shr    ecx,0x1f
0x140f69a20: add    r12d,ecx
0x140f69a23: imul   ecx,r8d,0x96
0x140f69a2a: mov    eax,0x7f017e03
0x140f69a2f: imul   ecx
0x140f69a31: mov    r14d,edx
0x140f69a34: sar    r14d,0xf
0x140f69a38: mov    eax,r14d
0x140f69a3b: shr    eax,0x1f
0x140f69a3e: add    r14d,eax
0x140f69a41: cmp    r12d,0x1
0x140f69a45: mov    eax,0x1
0x140f69a4a: cmovl  r12d,eax
0x140f69a4e: cmp    r14d,eax
0x140f69a51: cmovl  r14d,eax
0x140f69a55: movsx  ecx,WORD PTR [r15+0xb0]
0x140f69a5d: test   ecx,ecx
0x140f69a5f: je     0x140f69bff
0x140f69a65: sub    ecx,eax
0x140f69a67: je     0x140f69b41
0x140f69a6d: xor    r13d,r13d
0x140f69a70: cmp    ecx,eax
0x140f69a72: jne    0x140f69c78
0x140f69a78: mov    esi,r13d
0x140f69a7b: test   r9d,r9d
0x140f69a7e: jle    0x140f69c78
0x140f69a84: mov    eax,r9d
0x140f69a87: cdq
0x140f69a88: sub    eax,edx
0x140f69a8a: sar    eax,1
0x140f69a8c: movsx  ecx,si
0x140f69a8f: cmp    ecx,eax
0x140f69a91: jl     0x140f69ab8
0x140f69a93: sub    ax,si
0x140f69a96: add    ax,ax
0x140f69a99: add    ax,r9w
0x140f69a9d: sub    ax,0x1
0x140f69aa1: mov    ecx,r13d
0x140f69aa4: cmovns cx,ax
0x140f69aa8: movsx  eax,cx
0x140f69aab: lea    edx,[r9-0x1]
0x140f69aaf: cmp    eax,r9d
0x140f69ab2: cmovl  dx,cx
0x140f69ab6: jmp    0x140f69abe
0x140f69ab8: movzx  edx,si
0x140f69abb: add    dx,dx
0x140f69abe: mov    r9d,r13d
0x140f69ac1: cmp    DWORD PTR [r15+0xa0],r13d
0x140f69ac8: jle    0x140f69b2a
0x140f69aca: movsx  ebx,dx
0x140f69acd: movsxd rax,esi
0x140f69ad0: imul   r10,rax,0x70
0x140f69ad4: mov    eax,DWORD PTR [r15+0xa4]
0x140f69adb: movsxd r8,r9d
0x140f69ade: mov    r11,QWORD PTR [r15+0x2b0]
0x140f69ae5: mov    ecx,eax
0x140f69ae7: sar    ecx,1
0x140f69ae9: mov    rdi,QWORD PTR [r11+r8*8]
0x140f69aed: sar    eax,1
0x140f69aef: sub    ecx,ebx
0x140f69af1: imul   ecx,ecx
0x140f69af4: cmp    ebx,eax
0x140f69af6: mov    eax,ecx
0x140f69af8: cdq
0x140f69af9: jge    0x140f69b0f
0x140f69afb: idiv   r12d
0x140f69afe: movzx  ecx,WORD PTR [rdi+r10*1+0x36]
0x140f69b04: sub    cx,ax
0x140f69b07: mov    WORD PTR [r10+rdi*1+0x36],cx
0x140f69b0d: jmp    0x140f69b1e
0x140f69b0f: idiv   r14d
0x140f69b12: add    ax,WORD PTR [rdi+r10*1+0x36]
0x140f69b18: mov    WORD PTR [r10+rdi*1+0x36],ax
0x140f69b1e: inc    r9d
0x140f69b21: cmp    r9d,DWORD PTR [r15+0xa0]
0x140f69b28: jl     0x140f69ad4
0x140f69b2a: inc    esi
0x140f69b2c: mov    r9d,DWORD PTR [r15+0xa4]
0x140f69b33: cmp    esi,r9d
0x140f69b36: jl     0x140f69a84
0x140f69b3c: jmp    0x140f69c78
0x140f69b41: xor    r13d,r13d
0x140f69b44: mov    r10d,r13d
0x140f69b47: test   r9d,r9d
0x140f69b4a: jle    0x140f69c78
0x140f69b50: mov    ebx,r13d
0x140f69b53: cmp    DWORD PTR [r15+0xa0],r13d
0x140f69b5a: jle    0x140f69bed
0x140f69b60: mov    r9d,DWORD PTR [r15+0xa4]
0x140f69b67: mov    edx,r9d
0x140f69b6a: sar    edx,1
0x140f69b6c: movsxd r11,ebx
0x140f69b6f: mov    rdi,QWORD PTR [r15+0x2b0]
0x140f69b76: mov    rsi,QWORD PTR [rdi+r11*8]
0x140f69b7a: cmp    r10d,edx
0x140f69b7d: jge    0x140f69bb0
0x140f69b7f: sub    edx,r10d
0x140f69b82: mov    eax,r9d
0x140f69b85: sub    eax,r10d
0x140f69b88: cdqe
0x140f69b8a: imul   rcx,rax,0x70
0x140f69b8e: imul   edx,edx
0x140f69b91: mov    eax,edx
0x140f69b93: cdq
0x140f69b94: idiv   r12d
0x140f69b97: movzx  edx,WORD PTR [rcx+rsi*1-0x3a]
0x140f69b9c: sub    dx,ax
0x140f69b9f: sub    r9d,r10d
0x140f69ba2: movsxd rax,r9d
0x140f69ba5: imul   rcx,rax,0x70
0x140f69ba9: mov    WORD PTR [rcx+rsi*1-0x3a],dx
0x140f69bae: jmp    0x140f69bde
0x140f69bb0: sub    edx,r10d
0x140f69bb3: mov    ecx,r9d
0x140f69bb6: sub    ecx,r10d
0x140f69bb9: movsxd rcx,ecx
0x140f69bbc: imul   r8,rcx,0x70
0x140f69bc0: imul   edx,edx
0x140f69bc3: mov    eax,edx
0x140f69bc5: cdq
0x140f69bc6: idiv   r14d
0x140f69bc9: add    ax,WORD PTR [r8+rsi*1-0x3a]
0x140f69bcf: sub    r9d,r10d
0x140f69bd2: movsxd rcx,r9d
0x140f69bd5: imul   rdx,rcx,0x70
0x140f69bd9: mov    WORD PTR [rdx+rsi*1-0x3a],ax
0x140f69bde: inc    ebx
0x140f69be0: cmp    ebx,DWORD PTR [r15+0xa0]
0x140f69be7: jl     0x140f69b60
0x140f69bed: inc    r10d
0x140f69bf0: cmp    r10d,DWORD PTR [r15+0xa4]
0x140f69bf7: jl     0x140f69b50
0x140f69bfd: jmp    0x140f69c78
0x140f69bff: xor    r13d,r13d
0x140f69c02: mov    r10d,r13d
0x140f69c05: test   r9d,r9d
0x140f69c08: jle    0x140f69c78
0x140f69c0a: nop    WORD PTR [rax+rax*1+0x0]
0x140f69c10: mov    r9d,r13d
0x140f69c13: cmp    DWORD PTR [r15+0xa0],r13d
0x140f69c1a: jle    0x140f69c6c
0x140f69c1c: movsxd rax,r10d
0x140f69c1f: imul   r11,rax,0x70
0x140f69c23: mov    eax,DWORD PTR [r15+0xa4]
0x140f69c2a: movsxd r8,r9d
0x140f69c2d: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f69c34: mov    ecx,eax
0x140f69c36: sar    ecx,1
0x140f69c38: mov    rdi,QWORD PTR [rbx+r8*8]
0x140f69c3c: sar    eax,1
0x140f69c3e: sub    ecx,r10d
0x140f69c41: imul   ecx,ecx
0x140f69c44: cmp    r10d,eax
0x140f69c47: mov    eax,ecx
0x140f69c49: cdq
0x140f69c4a: jge    0x140f69c57
0x140f69c4c: idiv   r12d
0x140f69c4f: sub    WORD PTR [rdi+r11*1+0x36],ax
0x140f69c55: jmp    0x140f69c60
0x140f69c57: idiv   r14d
0x140f69c5a: add    WORD PTR [rdi+r11*1+0x36],ax
0x140f69c60: inc    r9d
0x140f69c63: cmp    r9d,DWORD PTR [r15+0xa0]
0x140f69c6a: jl     0x140f69c23
0x140f69c6c: inc    r10d
0x140f69c6f: cmp    r10d,DWORD PTR [r15+0xa4]
0x140f69c76: jl     0x140f69c10
0x140f69c78: lea    rcx,[rbp-0x60]
0x140f69c7c: call   0x140067130
0x140f69c81: nop
0x140f69c82: lea    rcx,[rbp-0x30]
0x140f69c86: call   0x140067130
0x140f69c8b: nop
0x140f69c8c: mov    esi,r13d
0x140f69c8f: mov    r13d,0x190
0x140f69c95: mov    r8d,0x18f
0x140f69c9b: cmp    DWORD PTR [r15+0xa0],0x0
0x140f69ca3: jle    0x140f69d39
0x140f69ca9: mov    r14d,0x17c
0x140f69caf: nop
0x140f69cb0: xor    ebx,ebx
0x140f69cb2: cmp    DWORD PTR [r15+0xa4],ebx
0x140f69cb9: jle    0x140f69d2a
0x140f69cbb: movsxd rdi,esi
0x140f69cbe: xchg   ax,ax
0x140f69cc0: movsxd rax,ebx
0x140f69cc3: imul   rdx,rax,0x70
0x140f69cc7: mov    rax,QWORD PTR [r15+0x2b0]
0x140f69cce: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f69cd2: cmp    WORD PTR [rcx+rdx*1+0x30],r13w
0x140f69cd8: jl     0x140f69ce0
0x140f69cda: mov    WORD PTR [rcx+rdx*1+0x30],r8w
0x140f69ce0: mov    rax,QWORD PTR [r15+0x2b0]
0x140f69ce7: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f69ceb: cmp    WORD PTR [rcx+rdx*1+0x30],r14w
0x140f69cf1: jl     0x140f69d1f
0x140f69cf3: mov    WORD PTR [rsp+0x40],si
0x140f69cf8: lea    rdx,[rsp+0x40]
0x140f69cfd: lea    rcx,[rbp-0x60]
0x140f69d01: call   0x140070b20
0x140f69d06: mov    WORD PTR [rsp+0x40],bx
0x140f69d0b: lea    rdx,[rsp+0x40]
0x140f69d10: lea    rcx,[rbp-0x30]
0x140f69d14: call   0x140070b20
0x140f69d19: mov    r8d,0x18f
0x140f69d1f: inc    ebx
0x140f69d21: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f69d28: jl     0x140f69cc0
0x140f69d2a: inc    esi
0x140f69d2c: cmp    esi,DWORD PTR [r15+0xa0]
0x140f69d33: jl     0x140f69cb0
0x140f69d39: lea    rcx,[rbp-0x60]
0x140f69d3d: call   0x140070a80
0x140f69d42: movsxd r12,DWORD PTR [rip+0x15b1fdf]        # 0x14251bd28
0x140f69d49: mov    QWORD PTR [rsp+0x58],r12
0x140f69d4e: cmp    rax,r12
0x140f69d51: jae    0x140f69dbb
0x140f69d53: cmp    DWORD PTR [rip+0x15a428e],0x0        # 0x14250dfe8
0x140f69d5a: jne    0x140f69dbb
0x140f69d5c: lea    rdx,[rip+0x7fbe4d]        # 0x141765bb0 ; 'Not enough peaks: '
0x140f69d63: lea    rcx,[rbp-0x8]
0x140f69d67: call   0x140069780
0x140f69d6c: nop
0x140f69d6d: lea    rcx,[rbp-0x60]
0x140f69d71: call   0x140070a80
0x140f69d76: mov    rcx,rax
0x140f69d79: lea    rdx,[rbp-0x8]
0x140f69d7d: call   0x140545610
0x140f69d82: lea    rdx,[rip+0x7fbe3b]        # 0x141765bc4 ; '<'
0x140f69d89: lea    rcx,[rbp-0x8]
0x140f69d8d: call   0x140070b90
0x140f69d92: lea    rdx,[rbp-0x8]
0x140f69d96: mov    ecx,DWORD PTR [rip+0x15b1f8c]        # 0x14251bd28
0x140f69d9c: call   0x140545610
0x140f69da1: xor    edx,edx
0x140f69da3: lea    rcx,[rbp-0x8]
0x140f69da7: call   0x140762ed0
0x140f69dac: nop
0x140f69dad: lea    rcx,[rbp-0x8]
0x140f69db1: call   0x140069460
0x140f69db6: jmp    0x140f6afab
0x140f69dbb: lea    rcx,[rbp-0x60]
0x140f69dbf: call   0x140070a80
0x140f69dc4: cmp    r12,rax
0x140f69dc7: jbe    0x140f69dda
0x140f69dc9: lea    rcx,[rbp-0x60]
0x140f69dcd: call   0x140070a80
0x140f69dd2: mov    r12,rax
0x140f69dd5: mov    QWORD PTR [rsp+0x58],rax
0x140f69dda: test   r12d,r12d
0x140f69ddd: je     0x140f6a074
0x140f69de3: lea    r14,[r15+0x280]
0x140f69dea: nop    WORD PTR [rax+rax*1+0x0]
0x140f69df0: mov    rcx,r14
0x140f69df3: call   0x140070480
0x140f69df8: lea    rcx,[rbp-0x60]
0x140f69dfc: test   rax,rax
0x140f69dff: jne    0x140f69e15
0x140f69e01: call   0x140070a80
0x140f69e06: mov    rcx,rax
0x140f69e09: call   0x140073560
0x140f69e0e: mov    esi,eax
0x140f69e10: jmp    0x140f69f47
0x140f69e15: mov    r13d,0xffffffff
0x140f69e1b: mov    edi,r13d
0x140f69e1e: mov    DWORD PTR [rsp+0x54],r13d
0x140f69e23: mov    esi,r13d
0x140f69e26: mov    DWORD PTR [rsp+0x4c],r13d
0x140f69e2b: xor    ebx,ebx
0x140f69e2d: mov    DWORD PTR [rsp+0x50],ebx
0x140f69e31: call   0x140070a80
0x140f69e36: test   rax,rax
0x140f69e39: je     0x140f6a05f
0x140f69e3f: xor    ecx,ecx
0x140f69e41: mov    r15d,ecx
0x140f69e44: nop    DWORD PTR [rax+0x0]
0x140f69e48: nop    DWORD PTR [rax+rax*1+0x0]
0x140f69e50: mov    r12d,r13d
0x140f69e53: mov    r13d,ecx
0x140f69e56: mov    rax,QWORD PTR [r14+0x8]
0x140f69e5a: sub    rax,QWORD PTR [r14]
0x140f69e5d: sar    rax,0x3
0x140f69e61: test   rax,rax
0x140f69e64: je     0x140f69efa
0x140f69e6a: mov    rbx,rcx
0x140f69e6d: nop    DWORD PTR [rax]
0x140f69e70: mov    rdx,rbx
0x140f69e73: mov    rcx,r14
0x140f69e76: call   0x140070850
0x140f69e7b: mov    rcx,QWORD PTR [rax]
0x140f69e7e: movsx  esi,WORD PTR [rcx+0x7a]
0x140f69e82: mov    rdx,r15
0x140f69e85: lea    rcx,[rbp-0x30]
0x140f69e89: call   0x140070a70
0x140f69e8e: movsx  edi,WORD PTR [rax]
0x140f69e91: mov    rdx,rbx
0x140f69e94: mov    rcx,r14
0x140f69e97: call   0x140070850
0x140f69e9c: mov    rcx,QWORD PTR [rax]
0x140f69e9f: movsx  ebx,WORD PTR [rcx+0x78]
0x140f69ea3: mov    rdx,r15
0x140f69ea6: lea    rcx,[rbp-0x60]
0x140f69eaa: call   0x140070a70
0x140f69eaf: mov    ecx,ebx
0x140f69eb1: movsx  eax,WORD PTR [rax]
0x140f69eb4: sub    ecx,eax
0x140f69eb6: mov    edx,ecx
0x140f69eb8: neg    edx
0x140f69eba: cmovs  edx,ecx
0x140f69ebd: mov    ecx,esi
0x140f69ebf: sub    ecx,edi
0x140f69ec1: mov    eax,ecx
0x140f69ec3: neg    eax
0x140f69ec5: cmovs  eax,ecx
0x140f69ec8: add    edx,eax
0x140f69eca: cmp    r12d,0xffffffff
0x140f69ece: je     0x140f69ed5
0x140f69ed0: cmp    edx,r12d
0x140f69ed3: jge    0x140f69ed8
0x140f69ed5: mov    r12d,edx
0x140f69ed8: inc    r13d
0x140f69edb: movsxd rbx,r13d
0x140f69ede: mov    rax,QWORD PTR [r14+0x8]
0x140f69ee2: sub    rax,QWORD PTR [r14]
0x140f69ee5: sar    rax,0x3
0x140f69ee9: cmp    rbx,rax
0x140f69eec: jb     0x140f69e70
0x140f69eee: mov    ebx,DWORD PTR [rsp+0x50]
0x140f69ef2: mov    edi,DWORD PTR [rsp+0x54]
0x140f69ef6: mov    esi,DWORD PTR [rsp+0x4c]
0x140f69efa: cmp    edi,0xffffffff
0x140f69efd: je     0x140f69f04
0x140f69eff: cmp    r12d,edi
0x140f69f02: jle    0x140f69f12
0x140f69f04: mov    esi,ebx
0x140f69f06: mov    DWORD PTR [rsp+0x4c],ebx
0x140f69f0a: mov    edi,r12d
0x140f69f0d: mov    DWORD PTR [rsp+0x54],r12d
0x140f69f12: inc    ebx
0x140f69f14: mov    DWORD PTR [rsp+0x50],ebx
0x140f69f18: movsxd r15,ebx
0x140f69f1b: lea    rcx,[rbp-0x60]
0x140f69f1f: call   0x140070a80
0x140f69f24: cmp    r15,rax
0x140f69f27: mov    ecx,0x0
0x140f69f2c: mov    r13d,0xffffffff
0x140f69f32: jb     0x140f69e50
0x140f69f38: mov    r15,QWORD PTR [rbp-0x68]
0x140f69f3c: mov    r12,QWORD PTR [rsp+0x58]
0x140f69f41: mov    r13d,0x190
0x140f69f47: cmp    esi,0xffffffff
0x140f69f4a: je     0x140f6a05f
0x140f69f50: mov    ecx,0x98
0x140f69f55: call   0x1415530e0
0x140f69f5a: mov    QWORD PTR [rbp+0x230],rax
0x140f69f61: mov    rcx,rax
0x140f69f64: call   0x140f180b0
0x140f69f69: nop
0x140f69f6a: mov    QWORD PTR [rsp+0x60],rax
0x140f69f6f: mov    r9d,0x13
0x140f69f75: mov    DWORD PTR [rsp+0x20],0x24
0x140f69f7d: mov    r8d,0xffffffff
0x140f69f83: mov    rdx,rax
0x140f69f86: lea    rcx,[rip+0x15a5c63]        # 0x14250fbf0
0x140f69f8d: call   0x140aac2a0
0x140f69f92: movsxd rdi,esi
0x140f69f95: mov    rdx,rdi
0x140f69f98: lea    rcx,[rbp-0x60]
0x140f69f9c: call   0x140070a70
0x140f69fa1: movzx  ecx,WORD PTR [rax]
0x140f69fa4: mov    rax,QWORD PTR [rsp+0x60]
0x140f69fa9: mov    WORD PTR [rax+0x78],cx
0x140f69fad: mov    rdx,rdi
0x140f69fb0: lea    rcx,[rbp-0x30]
0x140f69fb4: call   0x140070a70
0x140f69fb9: movzx  ecx,WORD PTR [rax]
0x140f69fbc: mov    rax,QWORD PTR [rsp+0x60]
0x140f69fc1: mov    WORD PTR [rax+0x7a],cx
0x140f69fc5: lea    rdx,[rsp+0x60]
0x140f69fca: mov    rcx,r14
0x140f69fcd: call   0x1400bafb0
0x140f69fd2: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f69fd9: mov    rdx,rdi
0x140f69fdc: lea    rcx,[rbp-0x60]
0x140f69fe0: call   0x140070a70
0x140f69fe5: movsx  rcx,WORD PTR [rax]
0x140f69fe9: mov    rbx,QWORD PTR [rbx+rcx*8]
0x140f69fed: mov    rdx,rdi
0x140f69ff0: lea    rcx,[rbp-0x30]
0x140f69ff4: call   0x140070a70
0x140f69ff9: movsx  rcx,WORD PTR [rax]
0x140f69ffd: imul   rax,rcx,0x70
0x140f6a001: mov    WORD PTR [rbx+rax*1+0x30],r13w
0x140f6a007: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f6a00e: mov    rdx,rdi
0x140f6a011: lea    rcx,[rbp-0x60]
0x140f6a015: call   0x140070a70
0x140f6a01a: movsx  rcx,WORD PTR [rax]
0x140f6a01e: mov    rbx,QWORD PTR [rbx+rcx*8]
0x140f6a022: mov    rdx,rdi
0x140f6a025: lea    rcx,[rbp-0x30]
0x140f6a029: call   0x140070a70
0x140f6a02e: movsx  rcx,WORD PTR [rax]
0x140f6a032: imul   rcx,rcx,0x70
0x140f6a036: add    rcx,0x20
0x140f6a03a: add    rcx,rbx
0x140f6a03d: mov    edx,0xd
0x140f6a042: call   0x1400fcef0
0x140f6a047: mov    rdx,rdi
0x140f6a04a: lea    rcx,[rbp-0x60]
0x140f6a04e: call   0x1400fcbb0
0x140f6a053: mov    rdx,rdi
0x140f6a056: lea    rcx,[rbp-0x30]
0x140f6a05a: call   0x1400fcbb0
0x140f6a05f: sub    r12d,0x1
0x140f6a063: mov    QWORD PTR [rsp+0x58],r12
0x140f6a068: mov    r13d,0x190
0x140f6a06e: jne    0x140f69df0
0x140f6a074: mov    r12d,0x12c
0x140f6a07a: mov    rax,QWORD PTR [rip+0x15b2067]        # 0x14251c0e8
0x140f6a081: test   rax,rax
0x140f6a084: je     0x140f6a091
0x140f6a086: cmp    QWORD PTR [rax+0x8],0x0
0x140f6a08b: jne    0x140f6a607
0x140f6a091: xor    r11d,r11d
0x140f6a094: mov    r9d,r11d
0x140f6a097: mov    r10d,r11d
0x140f6a09a: mov    eax,DWORD PTR [r15+0xa0]
0x140f6a0a1: test   eax,eax
0x140f6a0a3: jle    0x140f6a0f4
0x140f6a0a5: mov    ebx,DWORD PTR [r15+0xa4]
0x140f6a0ac: mov    edi,eax
0x140f6a0ae: xchg   ax,ax
0x140f6a0b0: test   ebx,ebx
0x140f6a0b2: jle    0x140f6a0e7
0x140f6a0b4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a0bb: mov    rcx,QWORD PTR [r11+rax*1]
0x140f6a0bf: add    rcx,0x30
0x140f6a0c3: mov    r8,rbx
0x140f6a0c6: movzx  edx,WORD PTR [rcx]
0x140f6a0c9: cmp    dx,r12w
0x140f6a0cd: jl     0x140f6a0d4
0x140f6a0cf: inc    r9d
0x140f6a0d2: jmp    0x140f6a0dd
0x140f6a0d4: cmp    dx,0x64
0x140f6a0d8: jge    0x140f6a0dd
0x140f6a0da: inc    r10d
0x140f6a0dd: add    rcx,0x70
0x140f6a0e1: sub    r8,0x1
0x140f6a0e5: jne    0x140f6a0c6
0x140f6a0e7: add    r11,0x8
0x140f6a0eb: sub    rdi,0x1
0x140f6a0ef: jne    0x140f6a0b0
0x140f6a0f1: xor    r11d,r11d
0x140f6a0f4: mov    ecx,DWORD PTR [r15+0xa4]
0x140f6a0fb: mov    r8d,DWORD PTR [r15+0xa0]
0x140f6a102: mov    eax,r8d
0x140f6a105: imul   eax,ecx
0x140f6a108: sub    eax,r10d
0x140f6a10b: sub    eax,r9d
0x140f6a10e: mov    edi,DWORD PTR [rip+0x15b1ec0]        # 0x14251bfd4
0x140f6a114: cmp    eax,edi
0x140f6a116: jge    0x140f6a14f
0x140f6a118: cmp    DWORD PTR [rip+0x15a3ecd],0x0        # 0x14250dfec
0x140f6a11f: jne    0x140f6a14f
0x140f6a121: lea    rdx,[rip+0x7fba38]        # 0x141765b60 ; 'Not enough medium altitudes'
0x140f6a128: lea    rcx,[rbp-0x8]
0x140f6a12c: call   0x140069780
0x140f6a131: nop
0x140f6a132: mov    edx,0x1
0x140f6a137: lea    rcx,[rbp-0x8]
0x140f6a13b: call   0x140762ed0
0x140f6a140: nop
0x140f6a141: lea    rcx,[rbp-0x8]
0x140f6a145: call   0x140069460
0x140f6a14a: jmp    0x140f6afab
0x140f6a14f: mov    r14d,0x3
0x140f6a155: movzx  esi,r14w
0x140f6a159: mov    edx,DWORD PTR [rip+0x15b1e79]        # 0x14251bfd8
0x140f6a15f: cmp    r10d,edx
0x140f6a162: jge    0x140f6a2d6
0x140f6a168: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6a170: mov    eax,ecx
0x140f6a172: test   si,si
0x140f6a175: jle    0x140f6a2d6
0x140f6a17b: dec    si
0x140f6a17e: mov    r9d,r11d
0x140f6a181: mov    ebx,r11d
0x140f6a184: test   r8d,r8d
0x140f6a187: jle    0x140f6a230
0x140f6a18d: nop    DWORD PTR [rax]
0x140f6a190: mov    ecx,eax
0x140f6a192: xor    r8d,r8d
0x140f6a195: test   eax,eax
0x140f6a197: jle    0x140f6a209
0x140f6a199: movsxd r10,r11d
0x140f6a19c: nop    DWORD PTR [rax+0x0]
0x140f6a1a0: movsxd rax,r8d
0x140f6a1a3: imul   rdx,rax,0x70
0x140f6a1a7: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a1ae: mov    rcx,QWORD PTR [rax+r10*8]
0x140f6a1b2: movzx  eax,WORD PTR [rcx+rdx*1+0x30]
0x140f6a1b7: cmp    ax,r12w
0x140f6a1bb: jl     0x140f6a1c2
0x140f6a1bd: inc    r9d
0x140f6a1c0: jmp    0x140f6a1e5
0x140f6a1c2: sub    ax,0xa
0x140f6a1c6: mov    WORD PTR [rcx+rdx*1+0x30],ax
0x140f6a1cb: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a1d2: mov    rcx,QWORD PTR [rax+r10*8]
0x140f6a1d6: cmp    WORD PTR [rcx+rdx*1+0x30],0x1
0x140f6a1dc: jge    0x140f6a1e5
0x140f6a1de: mov    WORD PTR [rcx+rdx*1+0x30],0x1
0x140f6a1e5: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a1ec: mov    rcx,QWORD PTR [rax+r10*8]
0x140f6a1f0: cmp    WORD PTR [rcx+rdx*1+0x30],0x64
0x140f6a1f6: jge    0x140f6a1fa
0x140f6a1f8: inc    ebx
0x140f6a1fa: inc    r8d
0x140f6a1fd: mov    ecx,DWORD PTR [r15+0xa4]
0x140f6a204: cmp    r8d,ecx
0x140f6a207: jl     0x140f6a1a0
0x140f6a209: inc    r11d
0x140f6a20c: mov    r8d,DWORD PTR [r15+0xa0]
0x140f6a213: mov    eax,ecx
0x140f6a215: cmp    r11d,r8d
0x140f6a218: jl     0x140f6a190
0x140f6a21e: mov    r13d,0x190
0x140f6a224: mov    edx,DWORD PTR [rip+0x15b1dae]        # 0x14251bfd8
0x140f6a22a: mov    edi,DWORD PTR [rip+0x15b1da4]        # 0x14251bfd4
0x140f6a230: mov    eax,r8d
0x140f6a233: imul   eax,ecx
0x140f6a236: sub    eax,ebx
0x140f6a238: sub    eax,r9d
0x140f6a23b: cmp    eax,edi
0x140f6a23d: jge    0x140f6a24d
0x140f6a23f: test   si,si
0x140f6a242: jne    0x140f6a24d
0x140f6a244: cmp    DWORD PTR [rip+0x15a3da5],0x0        # 0x14250dff0
0x140f6a24b: je     0x140f6a26b
0x140f6a24d: cmp    ebx,edx
0x140f6a24f: jge    0x140f6a2d6
0x140f6a255: test   si,si
0x140f6a258: jne    0x140f6a263
0x140f6a25a: cmp    DWORD PTR [rip+0x15a3d93],0x0        # 0x14250dff4
0x140f6a261: je     0x140f6a299
0x140f6a263: xor    r11d,r11d
0x140f6a266: jmp    0x140f6a170
0x140f6a26b: lea    rdx,[rip+0x7fb90e]        # 0x141765b80 ; 'Not enough medium altitudes after shift down'
0x140f6a272: lea    rcx,[rbp-0x8]
0x140f6a276: call   0x140069780
0x140f6a27b: nop
0x140f6a27c: mov    edx,0x2
0x140f6a281: lea    rcx,[rbp-0x8]
0x140f6a285: call   0x140762ed0
0x140f6a28a: nop
0x140f6a28b: lea    rcx,[rbp-0x8]
0x140f6a28f: call   0x140069460
0x140f6a294: jmp    0x140f6afab
0x140f6a299: lea    rdx,[rip+0x7fba80]        # 0x141765d20 ; 'Not enough low altitudes after shift down: '
0x140f6a2a0: lea    rcx,[rbp-0x8]
0x140f6a2a4: call   0x140069780
0x140f6a2a9: nop
0x140f6a2aa: sub    ebx,DWORD PTR [rip+0x15b1d28]        # 0x14251bfd8
0x140f6a2b0: lea    rdx,[rbp-0x8]
0x140f6a2b4: mov    ecx,ebx
0x140f6a2b6: call   0x140545610
0x140f6a2bb: mov    edx,r14d
0x140f6a2be: lea    rcx,[rbp-0x8]
0x140f6a2c2: call   0x140762ed0
0x140f6a2c7: nop
0x140f6a2c8: lea    rcx,[rbp-0x8]
0x140f6a2cc: call   0x140069460
0x140f6a2d1: jmp    0x140f6afab
0x140f6a2d6: mov    edx,DWORD PTR [rip+0x15b1d00]        # 0x14251bfdc
0x140f6a2dc: cmp    r9d,edx
0x140f6a2df: jge    0x140f6a448
0x140f6a2e5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140f6a2f0: mov    eax,ecx
0x140f6a2f2: test   r14w,r14w
0x140f6a2f6: jle    0x140f6a448
0x140f6a2fc: dec    r14w
0x140f6a300: xor    ecx,ecx
0x140f6a302: mov    r10d,ecx
0x140f6a305: mov    r11d,ecx
0x140f6a308: mov    ebx,ecx
0x140f6a30a: mov    ecx,eax
0x140f6a30c: test   r8d,r8d
0x140f6a30f: jle    0x140f6a3b1
0x140f6a315: mov    ecx,eax
0x140f6a317: xor    r8d,r8d
0x140f6a31a: test   eax,eax
0x140f6a31c: jle    0x140f6a391
0x140f6a31e: movsxd r9,ebx
0x140f6a321: movsxd rax,r8d
0x140f6a324: imul   rdx,rax,0x70
0x140f6a328: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a32f: mov    rcx,QWORD PTR [rax+r9*8]
0x140f6a333: movzx  eax,WORD PTR [rcx+rdx*1+0x30]
0x140f6a338: cmp    ax,0x64
0x140f6a33c: jge    0x140f6a343
0x140f6a33e: inc    r11d
0x140f6a341: jmp    0x140f6a36c
0x140f6a343: cmp    ax,r13w
0x140f6a347: jge    0x140f6a36c
0x140f6a349: add    ax,0xa
0x140f6a34d: mov    WORD PTR [rcx+rdx*1+0x30],ax
0x140f6a352: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a359: mov    rcx,QWORD PTR [rax+r9*8]
0x140f6a35d: cmp    WORD PTR [rcx+rdx*1+0x30],r13w
0x140f6a363: jl     0x140f6a36c
0x140f6a365: mov    WORD PTR [rcx+rdx*1+0x30],0x18f
0x140f6a36c: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a373: mov    rcx,QWORD PTR [rax+r9*8]
0x140f6a377: cmp    WORD PTR [rcx+rdx*1+0x30],r12w
0x140f6a37d: jl     0x140f6a382
0x140f6a37f: inc    r10d
0x140f6a382: inc    r8d
0x140f6a385: mov    ecx,DWORD PTR [r15+0xa4]
0x140f6a38c: cmp    r8d,ecx
0x140f6a38f: jl     0x140f6a321
0x140f6a391: inc    ebx
0x140f6a393: mov    r8d,DWORD PTR [r15+0xa0]
0x140f6a39a: mov    eax,ecx
0x140f6a39c: cmp    ebx,r8d
0x140f6a39f: jl     0x140f6a315
0x140f6a3a5: mov    edx,DWORD PTR [rip+0x15b1c31]        # 0x14251bfdc
0x140f6a3ab: mov    edi,DWORD PTR [rip+0x15b1c23]        # 0x14251bfd4
0x140f6a3b1: mov    eax,r8d
0x140f6a3b4: imul   eax,ecx
0x140f6a3b7: sub    eax,r11d
0x140f6a3ba: sub    eax,r10d
0x140f6a3bd: cmp    eax,edi
0x140f6a3bf: jge    0x140f6a3d0
0x140f6a3c1: test   r14w,r14w
0x140f6a3c5: jne    0x140f6a3d0
0x140f6a3c7: cmp    DWORD PTR [rip+0x15a3c2a],0x0        # 0x14250dff8
0x140f6a3ce: je     0x140f6a41a
0x140f6a3d0: cmp    r10d,edx
0x140f6a3d3: jge    0x140f6a448
0x140f6a3d5: test   r14w,r14w
0x140f6a3d9: jne    0x140f6a2f0
0x140f6a3df: cmp    DWORD PTR [rip+0x15a3c16],0x0        # 0x14250dffc
0x140f6a3e6: jne    0x140f6a2f0
0x140f6a3ec: lea    rdx,[rip+0x7fb8dd]        # 0x141765cd0 ; 'Not enough high altitudes after shift up'
0x140f6a3f3: lea    rcx,[rbp-0x8]
0x140f6a3f7: call   0x140069780
0x140f6a3fc: nop
0x140f6a3fd: mov    edx,0x5
0x140f6a402: lea    rcx,[rbp-0x8]
0x140f6a406: call   0x140762ed0
0x140f6a40b: nop
0x140f6a40c: lea    rcx,[rbp-0x8]
0x140f6a410: call   0x140069460
0x140f6a415: jmp    0x140f6afab
0x140f6a41a: lea    rdx,[rip+0x7fb92f]        # 0x141765d50 ; 'Not enough medium altitudes after shift up'
0x140f6a421: lea    rcx,[rbp-0x8]
0x140f6a425: call   0x140069780
0x140f6a42a: nop
0x140f6a42b: mov    edx,0x4
0x140f6a430: lea    rcx,[rbp-0x8]
0x140f6a434: call   0x140762ed0
0x140f6a439: nop
0x140f6a43a: lea    rcx,[rbp-0x8]
0x140f6a43e: call   0x140069460
0x140f6a443: jmp    0x140f6afab
0x140f6a448: xor    eax,eax
0x140f6a44a: mov    ebx,eax
0x140f6a44c: mov    esi,eax
0x140f6a44e: mov    r11d,eax
0x140f6a451: mov    edi,eax
0x140f6a453: test   r8d,r8d
0x140f6a456: jle    0x140f6a497
0x140f6a458: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6a45f: movsxd rax,ecx
0x140f6a462: imul   r10,rax,0x70
0x140f6a466: mov    r9d,r8d
0x140f6a469: nop    DWORD PTR [rax+0x0]
0x140f6a470: mov    eax,r11d
0x140f6a473: mov    rcx,QWORD PTR [rdx]
0x140f6a476: inc    r11d
0x140f6a479: cmp    WORD PTR [rcx+0x30],0x64
0x140f6a47e: cmovge r11d,eax
0x140f6a482: cmp    WORD PTR [r10+rcx*1-0x40],0x64
0x140f6a489: jge    0x140f6a48d
0x140f6a48b: inc    edi
0x140f6a48d: add    rdx,0x8
0x140f6a491: sub    r9,0x1
0x140f6a495: jne    0x140f6a470
0x140f6a497: mov    r9d,DWORD PTR [r15+0xa4]
0x140f6a49e: test   r9d,r9d
0x140f6a4a1: jle    0x140f6a4f2
0x140f6a4a3: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6a4aa: movsxd rax,DWORD PTR [r15+0xa0]
0x140f6a4b1: mov    rdx,QWORD PTR [rcx+rax*8-0x8]
0x140f6a4b6: add    rdx,0x30
0x140f6a4ba: mov    r8,QWORD PTR [rcx]
0x140f6a4bd: add    r8,0x30
0x140f6a4c1: mov    ecx,r9d
0x140f6a4c4: nop    DWORD PTR [rax+0x0]
0x140f6a4c8: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6a4d0: mov    eax,ebx
0x140f6a4d2: inc    ebx
0x140f6a4d4: cmp    WORD PTR [r8],0x64
0x140f6a4d9: cmovge ebx,eax
0x140f6a4dc: cmp    WORD PTR [rdx],0x64
0x140f6a4e0: jge    0x140f6a4e4
0x140f6a4e2: inc    esi
0x140f6a4e4: add    r8,0x70
0x140f6a4e8: add    rdx,0x70
0x140f6a4ec: sub    rcx,0x1
0x140f6a4f0: jne    0x140f6a4d0
0x140f6a4f2: cmp    ebx,r9d
0x140f6a4f5: sete   dl
0x140f6a4f8: lea    eax,[rdx+0x1]
0x140f6a4fb: movzx  ecx,al
0x140f6a4fe: movzx  eax,dl
0x140f6a501: cmp    esi,r9d
0x140f6a504: cmovne ecx,eax
0x140f6a507: movzx  r8d,cl
0x140f6a50b: mov    r10d,DWORD PTR [r15+0xa0]
0x140f6a512: lea    ecx,[r8+0x1]
0x140f6a516: movzx  edx,cl
0x140f6a519: cmp    edi,r10d
0x140f6a51c: cmovne edx,r8d
0x140f6a520: movzx  r8d,dl
0x140f6a524: lea    ecx,[r8+0x1]
0x140f6a528: movzx  r14d,cl
0x140f6a52c: cmp    r11d,r10d
0x140f6a52f: cmovne r14d,r8d
0x140f6a533: mov    eax,r9d
0x140f6a536: cdq
0x140f6a537: and    edx,0x7
0x140f6a53a: add    eax,edx
0x140f6a53c: sar    eax,0x3
0x140f6a53f: cmp    ebx,eax
0x140f6a541: setge  r8b
0x140f6a545: lea    ecx,[r8+0x1]
0x140f6a549: movzx  edx,cl
0x140f6a54c: movzx  ecx,r8b
0x140f6a550: cmp    esi,eax
0x140f6a552: cmovl  edx,ecx
0x140f6a555: movzx  r8d,dl
0x140f6a559: mov    eax,r10d
0x140f6a55c: cdq
0x140f6a55d: and    edx,0x7
0x140f6a560: add    eax,edx
0x140f6a562: sar    eax,0x3
0x140f6a565: lea    ecx,[r8+0x1]
0x140f6a569: movzx  edx,cl
0x140f6a56c: cmp    edi,eax
0x140f6a56e: cmovl  edx,r8d
0x140f6a572: movzx  r9d,dl
0x140f6a576: lea    ecx,[r9+0x1]
0x140f6a57a: movzx  r8d,cl
0x140f6a57e: cmp    r11d,eax
0x140f6a581: cmovl  r8d,r9d
0x140f6a585: movzx  eax,r8b
0x140f6a589: mov    ecx,DWORD PTR [rip+0x15a3a71]        # 0x14250e000
0x140f6a58f: cmp    eax,DWORD PTR [rip+0x15b1797]        # 0x14251bd2c
0x140f6a595: jge    0x140f6a5c9
0x140f6a597: test   ecx,ecx
0x140f6a599: jne    0x140f6a5c9
0x140f6a59b: lea    rdx,[rip+0x7fb75e]        # 0x141765d00 ; 'Not enough partial edge oceans'
0x140f6a5a2: lea    rcx,[rbp-0x8]
0x140f6a5a6: call   0x140069780
0x140f6a5ab: nop
0x140f6a5ac: mov    edx,0x6
0x140f6a5b1: lea    rcx,[rbp-0x8]
0x140f6a5b5: call   0x140762ed0
0x140f6a5ba: nop
0x140f6a5bb: lea    rcx,[rbp-0x8]
0x140f6a5bf: call   0x140069460
0x140f6a5c4: jmp    0x140f6afab
0x140f6a5c9: movzx  eax,r14b
0x140f6a5cd: cmp    eax,DWORD PTR [rip+0x15b175d]        # 0x14251bd30
0x140f6a5d3: jge    0x140f6a607
0x140f6a5d5: test   ecx,ecx
0x140f6a5d7: jne    0x140f6a607
0x140f6a5d9: lea    rdx,[rip+0x7fb6a8]        # 0x141765c88 ; 'Not enough complete edge oceans'
0x140f6a5e0: lea    rcx,[rbp-0x8]
0x140f6a5e4: call   0x140069780
0x140f6a5e9: nop
0x140f6a5ea: mov    edx,0x6
0x140f6a5ef: lea    rcx,[rbp-0x8]
0x140f6a5f3: call   0x140762ed0
0x140f6a5f8: nop
0x140f6a5f9: lea    rcx,[rbp-0x8]
0x140f6a5fd: call   0x140069460
0x140f6a602: jmp    0x140f6afab
0x140f6a607: xor    r11d,r11d
0x140f6a60a: mov    ebx,r11d
0x140f6a60d: mov    DWORD PTR [rsp+0x54],ebx
0x140f6a611: mov    r14d,r11d
0x140f6a614: mov    r13d,r11d
0x140f6a617: mov    DWORD PTR [rsp+0x70],r11d
0x140f6a61c: mov    edi,r11d
0x140f6a61f: mov    r8d,r11d
0x140f6a622: mov    DWORD PTR [rsp+0x68],r11d
0x140f6a627: mov    r12d,r11d
0x140f6a62a: mov    edx,r11d
0x140f6a62d: mov    DWORD PTR [rsp+0x50],edx
0x140f6a631: mov    esi,r11d
0x140f6a634: xorps  xmm0,xmm0
0x140f6a637: xor    r10d,r10d
0x140f6a63a: mov    QWORD PTR [rsp+0x60],r10
0x140f6a63f: movups XMMWORD PTR [rbp+0x1a0],xmm0
0x140f6a646: movups XMMWORD PTR [rbp+0x1b0],xmm0
0x140f6a64d: mov    QWORD PTR [rbp+0x1c0],r10
0x140f6a654: mov    eax,r11d
0x140f6a657: mov    DWORD PTR [rsp+0x6c],eax
0x140f6a65b: mov    ecx,DWORD PTR [r15+0xa0]
0x140f6a662: test   ecx,ecx
0x140f6a664: jle    0x140f6a7be
0x140f6a66a: nop    WORD PTR [rax+rax*1+0x0]
0x140f6a670: mov    ebx,r11d
0x140f6a673: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6a67b: jle    0x140f6a790
0x140f6a681: movsxd rcx,eax
0x140f6a684: mov    QWORD PTR [rbp+0x230],rcx
0x140f6a68b: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6a690: movzx  r8d,bx
0x140f6a694: movzx  edx,ax
0x140f6a697: mov    rcx,r15
0x140f6a69a: call   0x140f94210
0x140f6a69f: movsxd rcx,ebx
0x140f6a6a2: imul   r8,rcx,0x70
0x140f6a6a6: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6a6ad: mov    r9,QWORD PTR [rbp+0x230]
0x140f6a6b4: mov    rdx,QWORD PTR [rcx+r9*8]
0x140f6a6b8: mov    WORD PTR [rdx+r8*1+0x34],ax
0x140f6a6be: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6a6c5: mov    rdx,QWORD PTR [rax+r9*8]
0x140f6a6c9: movzx  eax,WORD PTR [r8+rdx*1+0x32]
0x140f6a6cf: cmp    ax,0x42
0x140f6a6d3: jl     0x140f6a6da
0x140f6a6d5: inc    r14d
0x140f6a6d8: jmp    0x140f6a6e4
0x140f6a6da: cmp    ax,0x21
0x140f6a6de: jge    0x140f6a6e4
0x140f6a6e0: inc    DWORD PTR [rsp+0x54]
0x140f6a6e4: movzx  eax,WORD PTR [r8+rdx*1+0x3a]
0x140f6a6ea: cmp    ax,0x42
0x140f6a6ee: jl     0x140f6a70e
0x140f6a6f0: inc    edi
0x140f6a6f2: mov    r13d,DWORD PTR [rsp+0x70]
0x140f6a6f7: movsxd rax,ebx
0x140f6a6fa: imul   rcx,rax,0x70
0x140f6a6fe: movzx  eax,WORD PTR [rcx+rdx*1+0x3e]
0x140f6a703: cmp    ax,0x42
0x140f6a707: jl     0x140f6a725
0x140f6a709: inc    r12d
0x140f6a70c: jmp    0x140f6a732
0x140f6a70e: mov    ecx,edi
0x140f6a710: cmp    ax,0x21
0x140f6a714: jge    0x140f6a6f2
0x140f6a716: mov    r13d,DWORD PTR [rsp+0x70]
0x140f6a71b: inc    r13d
0x140f6a71e: mov    DWORD PTR [rsp+0x70],r13d
0x140f6a723: jmp    0x140f6a6f7
0x140f6a725: mov    ecx,r12d
0x140f6a728: cmp    ax,0x21
0x140f6a72c: jge    0x140f6a732
0x140f6a72e: inc    DWORD PTR [rsp+0x68]
0x140f6a732: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6a739: movsxd rax,ebx
0x140f6a73c: imul   rcx,rax,0x70
0x140f6a740: mov    rax,QWORD PTR [rdx+r9*8]
0x140f6a744: movzx  edx,WORD PTR [rax+rcx*1+0x3c]
0x140f6a749: cmp    dx,0x42
0x140f6a74d: jl     0x140f6a753
0x140f6a74f: inc    esi
0x140f6a751: jmp    0x140f6a75f
0x140f6a753: mov    eax,esi
0x140f6a755: cmp    dx,0x21
0x140f6a759: jge    0x140f6a75f
0x140f6a75b: inc    DWORD PTR [rsp+0x50]
0x140f6a75f: movzx  r8d,bx
0x140f6a763: movzx  edx,WORD PTR [rsp+0x6c]
0x140f6a768: mov    rcx,r15
0x140f6a76b: call   0x140f6ee60
0x140f6a770: movsxd rcx,eax
0x140f6a773: inc    DWORD PTR [rbp+rcx*4+0x1a0]
0x140f6a77a: inc    ebx
0x140f6a77c: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6a783: mov    eax,DWORD PTR [rsp+0x6c]
0x140f6a787: jl     0x140f6a690
0x140f6a78d: xor    r11d,r11d
0x140f6a790: inc    eax
0x140f6a792: mov    DWORD PTR [rsp+0x6c],eax
0x140f6a796: mov    ecx,DWORD PTR [r15+0xa0]
0x140f6a79d: cmp    eax,ecx
0x140f6a79f: jl     0x140f6a670
0x140f6a7a5: mov    r10,QWORD PTR [rbp+0x1c0]
0x140f6a7ac: mov    QWORD PTR [rsp+0x60],r10
0x140f6a7b1: mov    ebx,DWORD PTR [rsp+0x54]
0x140f6a7b5: mov    edx,DWORD PTR [rsp+0x50]
0x140f6a7b9: mov    r8d,DWORD PTR [rsp+0x68]
0x140f6a7be: mov    r9,QWORD PTR [rip+0x15b1923]        # 0x14251c0e8
0x140f6a7c5: test   r9,r9
0x140f6a7c8: je     0x140f6a7d5
0x140f6a7ca: cmp    QWORD PTR [r9+0x10],0x0
0x140f6a7cf: jne    0x140f6a890
0x140f6a7d5: mov    eax,ecx
0x140f6a7d7: imul   eax,DWORD PTR [r15+0xa4]
0x140f6a7df: sub    eax,r14d
0x140f6a7e2: sub    eax,ebx
0x140f6a7e4: cmp    eax,DWORD PTR [rip+0x15b1626]        # 0x14251be10
0x140f6a7ea: jl     0x140f6a801
0x140f6a7ec: cmp    ebx,DWORD PTR [rip+0x15b1622]        # 0x14251be14
0x140f6a7f2: jl     0x140f6a801
0x140f6a7f4: cmp    r14d,DWORD PTR [rip+0x15b161d]        # 0x14251be18
0x140f6a7fb: jge    0x140f6a890
0x140f6a801: cmp    DWORD PTR [rip+0x15a37fc],0x0        # 0x14250e004
0x140f6a808: jne    0x140f6a890
0x140f6a80e: lea    rdx,[rip+0x7fb493]        # 0x141765ca8 ; 'Rainfall not evenly distributed: '
0x140f6a815: lea    rcx,[rbp-0x8]
0x140f6a819: call   0x140069780
0x140f6a81e: nop
0x140f6a81f: lea    rdx,[rbp-0x8]
0x140f6a823: mov    ecx,ebx
0x140f6a825: call   0x140545610
0x140f6a82a: lea    rdx,[rip+0x6feefb]        # 0x14166972c ; '-'
0x140f6a831: lea    rcx,[rbp-0x8]
0x140f6a835: call   0x140070b90
0x140f6a83a: mov    ecx,DWORD PTR [r15+0xa4]
0x140f6a841: imul   ecx,DWORD PTR [r15+0xa0]
0x140f6a849: sub    ecx,r14d
0x140f6a84c: sub    ecx,ebx
0x140f6a84e: lea    rdx,[rbp-0x8]
0x140f6a852: call   0x140545610
0x140f6a857: lea    rdx,[rip+0x6feece]        # 0x14166972c ; '-'
0x140f6a85e: lea    rcx,[rbp-0x8]
0x140f6a862: call   0x140070b90
0x140f6a867: lea    rdx,[rbp-0x8]
0x140f6a86b: mov    ecx,r14d
0x140f6a86e: call   0x140545610
0x140f6a873: mov    edx,0x7
0x140f6a878: lea    rcx,[rbp-0x8]
0x140f6a87c: call   0x140762ed0
0x140f6a881: nop
0x140f6a882: lea    rcx,[rbp-0x8]
0x140f6a886: call   0x140069460
0x140f6a88b: jmp    0x140f6afab
0x140f6a890: test   r9,r9
0x140f6a893: je     0x140f6a8a0
0x140f6a895: cmp    QWORD PTR [r9+0x30],0x0
0x140f6a89a: jne    0x140f6a95b
0x140f6a8a0: mov    eax,ecx
0x140f6a8a2: imul   eax,DWORD PTR [r15+0xa4]
0x140f6a8aa: sub    eax,edi
0x140f6a8ac: sub    eax,r13d
0x140f6a8af: cmp    eax,DWORD PTR [rip+0x15b1567]        # 0x14251be1c
0x140f6a8b5: jl     0x140f6a8cc
0x140f6a8b7: cmp    r13d,DWORD PTR [rip+0x15b1562]        # 0x14251be20
0x140f6a8be: jl     0x140f6a8cc
0x140f6a8c0: cmp    edi,DWORD PTR [rip+0x15b155e]        # 0x14251be24
0x140f6a8c6: jge    0x140f6a95b
0x140f6a8cc: cmp    DWORD PTR [rip+0x15a3735],0x0        # 0x14250e008
0x140f6a8d3: jne    0x140f6a95b
0x140f6a8d9: lea    rdx,[rip+0x7fb358]        # 0x141765c38 ; 'Flat/rough areas not evenly distributed: '
0x140f6a8e0: lea    rcx,[rbp-0x8]
0x140f6a8e4: call   0x140069780
0x140f6a8e9: nop
0x140f6a8ea: lea    rdx,[rbp-0x8]
0x140f6a8ee: mov    ecx,r13d
0x140f6a8f1: call   0x140545610
0x140f6a8f6: lea    rdx,[rip+0x6fee2f]        # 0x14166972c ; '-'
0x140f6a8fd: lea    rcx,[rbp-0x8]
0x140f6a901: call   0x140070b90
0x140f6a906: mov    ecx,DWORD PTR [r15+0xa4]
0x140f6a90d: imul   ecx,DWORD PTR [r15+0xa0]
0x140f6a915: sub    ecx,edi
0x140f6a917: sub    ecx,r13d
0x140f6a91a: lea    rdx,[rbp-0x8]
0x140f6a91e: call   0x140545610
0x140f6a923: lea    rdx,[rip+0x6fee02]        # 0x14166972c ; '-'
0x140f6a92a: lea    rcx,[rbp-0x8]
0x140f6a92e: call   0x140070b90
0x140f6a933: lea    rdx,[rbp-0x8]
0x140f6a937: mov    ecx,edi
0x140f6a939: call   0x140545610
0x140f6a93e: mov    edx,0x8
0x140f6a943: lea    rcx,[rbp-0x8]
0x140f6a947: call   0x140762ed0
0x140f6a94c: nop
0x140f6a94d: lea    rcx,[rbp-0x8]
0x140f6a951: call   0x140069460
0x140f6a956: jmp    0x140f6afab
0x140f6a95b: test   r9,r9
0x140f6a95e: je     0x140f6a967
0x140f6a960: cmp    QWORD PTR [r9+0x40],0x0
0x140f6a965: jne    0x140f6a9c8
0x140f6a967: mov    eax,ecx
0x140f6a969: imul   eax,DWORD PTR [r15+0xa4]
0x140f6a971: sub    eax,r12d
0x140f6a974: sub    eax,r8d
0x140f6a977: cmp    eax,DWORD PTR [rip+0x15b14ab]        # 0x14251be28
0x140f6a97d: jl     0x140f6a991
0x140f6a97f: cmp    r8d,DWORD PTR [rip+0x15b14a6]        # 0x14251be2c
0x140f6a986: jl     0x140f6a991
0x140f6a988: cmp    r12d,DWORD PTR [rip+0x15b14a1]        # 0x14251be30
0x140f6a98f: jge    0x140f6a9c8
0x140f6a991: cmp    DWORD PTR [rip+0x15a3674],0x0        # 0x14250e00c
0x140f6a998: jne    0x140f6a9c8
0x140f6a99a: lea    rdx,[rip+0x7fb2c7]        # 0x141765c68 ; 'Savagery not evenly distributed'
0x140f6a9a1: lea    rcx,[rbp-0x8]
0x140f6a9a5: call   0x140069780
0x140f6a9aa: nop
0x140f6a9ab: mov    edx,0x9
0x140f6a9b0: lea    rcx,[rbp-0x8]
0x140f6a9b4: call   0x140762ed0
0x140f6a9b9: nop
0x140f6a9ba: lea    rcx,[rbp-0x8]
0x140f6a9be: call   0x140069460
0x140f6a9c3: jmp    0x140f6afab
0x140f6a9c8: test   r9,r9
0x140f6a9cb: je     0x140f6a9d4
0x140f6a9cd: cmp    QWORD PTR [r9+0x38],0x0
0x140f6a9d2: jne    0x140f6aa2f
0x140f6a9d4: imul   ecx,DWORD PTR [r15+0xa4]
0x140f6a9dc: sub    ecx,esi
0x140f6a9de: sub    ecx,edx
0x140f6a9e0: cmp    ecx,DWORD PTR [rip+0x15b144e]        # 0x14251be34
0x140f6a9e6: jl     0x140f6a9f8
0x140f6a9e8: cmp    edx,DWORD PTR [rip+0x15b144a]        # 0x14251be38
0x140f6a9ee: jl     0x140f6a9f8
0x140f6a9f0: cmp    esi,DWORD PTR [rip+0x15b1446]        # 0x14251be3c
0x140f6a9f6: jge    0x140f6aa2f
0x140f6a9f8: cmp    DWORD PTR [rip+0x15a3611],0x0        # 0x14250e010
0x140f6a9ff: jne    0x140f6aa2f
0x140f6aa01: lea    rdx,[rip+0x7fb468]        # 0x141765e70 ; 'Volcanism not evenly distributed'
0x140f6aa08: lea    rcx,[rbp-0x8]
0x140f6aa0c: call   0x140069780
0x140f6aa11: nop
0x140f6aa12: mov    edx,0xa
0x140f6aa17: lea    rcx,[rbp-0x8]
0x140f6aa1b: call   0x140762ed0
0x140f6aa20: nop
0x140f6aa21: lea    rcx,[rbp-0x8]
0x140f6aa25: call   0x140069460
0x140f6aa2a: jmp    0x140f6afab
0x140f6aa2f: test   r9,r9
0x140f6aa32: je     0x140f6aa54
0x140f6aa34: cmp    QWORD PTR [r9+0x8],0x0
0x140f6aa39: je     0x140f6aa54
0x140f6aa3b: cmp    QWORD PTR [r9+0x10],0x0
0x140f6aa40: je     0x140f6aa54
0x140f6aa42: cmp    QWORD PTR [r9+0x20],0x0
0x140f6aa47: je     0x140f6aa54
0x140f6aa49: cmp    QWORD PTR [r9+0x30],0x0
0x140f6aa4e: jne    0x140f6ad58
0x140f6aa54: mov    ebx,DWORD PTR [rbp+0x1a0]
0x140f6aa5a: cmp    ebx,DWORD PTR [rip+0x15b12d8]        # 0x14251bd38
0x140f6aa60: jge    0x140f6aaaa
0x140f6aa62: cmp    DWORD PTR [rip+0x15a35ab],0x0        # 0x14250e014
0x140f6aa69: jne    0x140f6aaaa
0x140f6aa6b: lea    rdx,[rip+0x7fb426]        # 0x141765e98 ; 'Initial swamp square count fails by '
0x140f6aa72: lea    rcx,[rbp-0x8]
0x140f6aa76: call   0x140069780
0x140f6aa7b: nop
0x140f6aa7c: sub    ebx,DWORD PTR [rip+0x15b12b6]        # 0x14251bd38
0x140f6aa82: lea    rdx,[rbp-0x8]
0x140f6aa86: mov    ecx,ebx
0x140f6aa88: call   0x140545610
0x140f6aa8d: mov    edx,0xb
0x140f6aa92: lea    rcx,[rbp-0x8]
0x140f6aa96: call   0x140762ed0
0x140f6aa9b: nop
0x140f6aa9c: lea    rcx,[rbp-0x8]
0x140f6aaa0: call   0x140069460
0x140f6aaa5: jmp    0x140f6afab
0x140f6aaaa: mov    ebx,DWORD PTR [rbp+0x1a4]
0x140f6aab0: cmp    ebx,DWORD PTR [rip+0x15b1286]        # 0x14251bd3c
0x140f6aab6: jge    0x140f6ab00
0x140f6aab8: cmp    DWORD PTR [rip+0x15a3559],0x0        # 0x14250e018
0x140f6aabf: jne    0x140f6ab00
0x140f6aac1: lea    rdx,[rip+0x7fb358]        # 0x141765e20 ; 'Initial desert square count fails by '
0x140f6aac8: lea    rcx,[rbp-0x8]
0x140f6aacc: call   0x140069780
0x140f6aad1: nop
0x140f6aad2: sub    ebx,DWORD PTR [rip+0x15b1264]        # 0x14251bd3c
0x140f6aad8: lea    rdx,[rbp-0x8]
0x140f6aadc: mov    ecx,ebx
0x140f6aade: call   0x140545610
0x140f6aae3: mov    edx,0xc
0x140f6aae8: lea    rcx,[rbp-0x8]
0x140f6aaec: call   0x140762ed0
0x140f6aaf1: nop
0x140f6aaf2: lea    rcx,[rbp-0x8]
0x140f6aaf6: call   0x140069460
0x140f6aafb: jmp    0x140f6afab
0x140f6ab00: mov    ebx,DWORD PTR [rbp+0x1a8]
0x140f6ab06: cmp    ebx,DWORD PTR [rip+0x15b1234]        # 0x14251bd40
0x140f6ab0c: jge    0x140f6ab56
0x140f6ab0e: cmp    DWORD PTR [rip+0x15a3507],0x0        # 0x14250e01c
0x140f6ab15: jne    0x140f6ab56
0x140f6ab17: lea    rdx,[rip+0x7fb32a]        # 0x141765e48 ; 'Initial forest square count fails by '
0x140f6ab1e: lea    rcx,[rbp-0x8]
0x140f6ab22: call   0x140069780
0x140f6ab27: nop
0x140f6ab28: sub    ebx,DWORD PTR [rip+0x15b1212]        # 0x14251bd40
0x140f6ab2e: lea    rdx,[rbp-0x8]
0x140f6ab32: mov    ecx,ebx
0x140f6ab34: call   0x140545610
0x140f6ab39: mov    edx,0xd
0x140f6ab3e: lea    rcx,[rbp-0x8]
0x140f6ab42: call   0x140762ed0
0x140f6ab47: nop
0x140f6ab48: lea    rcx,[rbp-0x8]
0x140f6ab4c: call   0x140069460
0x140f6ab51: jmp    0x140f6afab
0x140f6ab56: mov    ebx,DWORD PTR [rbp+0x1ac]
0x140f6ab5c: cmp    ebx,DWORD PTR [rip+0x15b11e2]        # 0x14251bd44
0x140f6ab62: jge    0x140f6abac
0x140f6ab64: cmp    DWORD PTR [rip+0x15a34b5],0x0        # 0x14250e020
0x140f6ab6b: jne    0x140f6abac
0x140f6ab6d: lea    rdx,[rip+0x7fb25c]        # 0x141765dd0 ; 'Initial mountain square count fails by '
0x140f6ab74: lea    rcx,[rbp-0x8]
0x140f6ab78: call   0x140069780
0x140f6ab7d: nop
0x140f6ab7e: sub    ebx,DWORD PTR [rip+0x15b11c0]        # 0x14251bd44
0x140f6ab84: lea    rdx,[rbp-0x8]
0x140f6ab88: mov    ecx,ebx
0x140f6ab8a: call   0x140545610
0x140f6ab8f: mov    edx,0xe
0x140f6ab94: lea    rcx,[rbp-0x8]
0x140f6ab98: call   0x140762ed0
0x140f6ab9d: nop
0x140f6ab9e: lea    rcx,[rbp-0x8]
0x140f6aba2: call   0x140069460
0x140f6aba7: jmp    0x140f6afab
0x140f6abac: mov    ebx,DWORD PTR [rbp+0x1b0]
0x140f6abb2: cmp    ebx,DWORD PTR [rip+0x15b1190]        # 0x14251bd48
0x140f6abb8: jge    0x140f6ac02
0x140f6abba: cmp    DWORD PTR [rip+0x15a3463],0x0        # 0x14250e024
0x140f6abc1: jne    0x140f6ac02
0x140f6abc3: lea    rdx,[rip+0x7fb22e]        # 0x141765df8 ; 'Initial ocean square count fails by '
0x140f6abca: lea    rcx,[rbp-0x8]
0x140f6abce: call   0x140069780
0x140f6abd3: nop
0x140f6abd4: sub    ebx,DWORD PTR [rip+0x15b116e]        # 0x14251bd48
0x140f6abda: lea    rdx,[rbp-0x8]
0x140f6abde: mov    ecx,ebx
0x140f6abe0: call   0x140545610
0x140f6abe5: mov    edx,0xf
0x140f6abea: lea    rcx,[rbp-0x8]
0x140f6abee: call   0x140762ed0
0x140f6abf3: nop
0x140f6abf4: lea    rcx,[rbp-0x8]
0x140f6abf8: call   0x140069460
0x140f6abfd: jmp    0x140f6afab
0x140f6ac02: mov    ebx,DWORD PTR [rbp+0x1b8]
0x140f6ac08: cmp    ebx,DWORD PTR [rip+0x15b1142]        # 0x14251bd50
0x140f6ac0e: jge    0x140f6ac58
0x140f6ac10: cmp    DWORD PTR [rip+0x15a3411],0x0        # 0x14250e028
0x140f6ac17: jne    0x140f6ac58
0x140f6ac19: lea    rdx,[rip+0x7fb160]        # 0x141765d80 ; 'Initial glacier square count fails by '
0x140f6ac20: lea    rcx,[rbp-0x8]
0x140f6ac24: call   0x140069780
0x140f6ac29: nop
0x140f6ac2a: sub    ebx,DWORD PTR [rip+0x15b1120]        # 0x14251bd50
0x140f6ac30: lea    rdx,[rbp-0x8]
0x140f6ac34: mov    ecx,ebx
0x140f6ac36: call   0x140545610
0x140f6ac3b: mov    edx,0x10
0x140f6ac40: lea    rcx,[rbp-0x8]
0x140f6ac44: call   0x140762ed0
0x140f6ac49: nop
0x140f6ac4a: lea    rcx,[rbp-0x8]
0x140f6ac4e: call   0x140069460
0x140f6ac53: jmp    0x140f6afab
0x140f6ac58: mov    ebx,DWORD PTR [rbp+0x1bc]
0x140f6ac5e: cmp    ebx,DWORD PTR [rip+0x15b10f0]        # 0x14251bd54
0x140f6ac64: jge    0x140f6acae
0x140f6ac66: cmp    DWORD PTR [rip+0x15a33bf],0x0        # 0x14250e02c
0x140f6ac6d: jne    0x140f6acae
0x140f6ac6f: lea    rdx,[rip+0x7fb132]        # 0x141765da8 ; 'Initial tundra square count fails by '
0x140f6ac76: lea    rcx,[rbp-0x8]
0x140f6ac7a: call   0x140069780
0x140f6ac7f: nop
0x140f6ac80: sub    ebx,DWORD PTR [rip+0x15b10ce]        # 0x14251bd54
0x140f6ac86: lea    rdx,[rbp-0x8]
0x140f6ac8a: mov    ecx,ebx
0x140f6ac8c: call   0x140545610
0x140f6ac91: mov    edx,0x11
0x140f6ac96: lea    rcx,[rbp-0x8]
0x140f6ac9a: call   0x140762ed0
0x140f6ac9f: nop
0x140f6aca0: lea    rcx,[rbp-0x8]
0x140f6aca4: call   0x140069460
0x140f6aca9: jmp    0x140f6afab
0x140f6acae: cmp    r10d,DWORD PTR [rip+0x15b10a3]        # 0x14251bd58
0x140f6acb5: jge    0x140f6ad02
0x140f6acb7: cmp    DWORD PTR [rip+0x15a3372],0x0        # 0x14250e030
0x140f6acbe: jne    0x140f6ad02
0x140f6acc0: lea    rdx,[rip+0x7fb2b1]        # 0x141765f78 ; 'Initial grassland square count fails by '
0x140f6acc7: lea    rcx,[rbp-0x8]
0x140f6accb: call   0x140069780
0x140f6acd0: nop
0x140f6acd1: mov    rcx,QWORD PTR [rsp+0x60]
0x140f6acd6: sub    ecx,DWORD PTR [rip+0x15b107c]        # 0x14251bd58
0x140f6acdc: lea    rdx,[rbp-0x8]
0x140f6ace0: call   0x140545610
0x140f6ace5: mov    edx,0x12
0x140f6acea: lea    rcx,[rbp-0x8]
0x140f6acee: call   0x140762ed0
0x140f6acf3: nop
0x140f6acf4: lea    rcx,[rbp-0x8]
0x140f6acf8: call   0x140069460
0x140f6acfd: jmp    0x140f6afab
0x140f6ad02: mov    ebx,DWORD PTR [rbp+0x1c4]
0x140f6ad08: cmp    ebx,DWORD PTR [rip+0x15b104e]        # 0x14251bd5c
0x140f6ad0e: jge    0x140f6ad58
0x140f6ad10: cmp    DWORD PTR [rip+0x15a331d],0x0        # 0x14250e034
0x140f6ad17: jne    0x140f6ad58
0x140f6ad19: lea    rdx,[rip+0x7fb288]        # 0x141765fa8 ; 'Initial hill square count fails by '
0x140f6ad20: lea    rcx,[rbp-0x8]
0x140f6ad24: call   0x140069780
0x140f6ad29: nop
0x140f6ad2a: sub    ebx,DWORD PTR [rip+0x15b102c]        # 0x14251bd5c
0x140f6ad30: lea    rdx,[rbp-0x8]
0x140f6ad34: mov    ecx,ebx
0x140f6ad36: call   0x140545610
0x140f6ad3b: mov    edx,0x13
0x140f6ad40: lea    rcx,[rbp-0x8]
0x140f6ad44: call   0x140762ed0
0x140f6ad49: nop
0x140f6ad4a: lea    rcx,[rbp-0x8]
0x140f6ad4e: call   0x140069460
0x140f6ad53: jmp    0x140f6afab
0x140f6ad58: mov    esi,r11d
0x140f6ad5b: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6ad63: jle    0x140f6aeb9
0x140f6ad69: movss  xmm6,DWORD PTR [rip+0x840323]        # 0x1417ab094
0x140f6ad71: mov    r14d,0x12c
0x140f6ad77: nop    WORD PTR [rax+rax*1+0x0]
0x140f6ad80: mov    edi,r11d
0x140f6ad83: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6ad8b: jle    0x140f6aeaa
0x140f6ad91: movsxd rax,esi
0x140f6ad94: imul   rbx,rax,0x70
0x140f6ad98: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6ada0: movsxd rdx,edi
0x140f6ada3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6adaa: mov    r8,QWORD PTR [rax+rdx*8]
0x140f6adae: movzx  ecx,WORD PTR [r8+rbx*1+0x30]
0x140f6adb4: cmp    cx,r14w
0x140f6adb8: jl     0x140f6adcd
0x140f6adba: movzx  eax,cx
0x140f6adbd: mov    ecx,0x96
0x140f6adc2: sub    ax,cx
0x140f6adc5: mov    WORD PTR [r8+rbx*1+0x30],ax
0x140f6adcb: jmp    0x140f6ae4a
0x140f6adcd: cmp    cx,0x64
0x140f6add1: jl     0x140f6ae4a
0x140f6add3: sub    cx,0x64
0x140f6add7: mov    WORD PTR [r8+rbx*1+0x30],cx
0x140f6addd: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6ade4: mov    rcx,QWORD PTR [rax+rdx*8]
0x140f6ade8: movsx  eax,WORD PTR [rcx+rbx*1+0x30]
0x140f6aded: movd   xmm0,eax
0x140f6adf1: cvtdq2ps xmm0,xmm0
0x140f6adf4: mulss  xmm0,xmm6
0x140f6adf8: cvttss2si eax,xmm0
0x140f6adfc: mov    WORD PTR [rcx+rbx*1+0x30],ax
0x140f6ae01: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6ae08: mov    rcx,QWORD PTR [rax+rdx*8]
0x140f6ae0c: add    WORD PTR [rcx+rbx*1+0x30],0x64
0x140f6ae12: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6ae19: mov    rcx,QWORD PTR [rax+rdx*8]
0x140f6ae1d: mov    eax,0x96
0x140f6ae22: cmp    WORD PTR [rcx+rbx*1+0x30],ax
0x140f6ae27: jl     0x140f6ae30
0x140f6ae29: mov    WORD PTR [rcx+rbx*1+0x30],0x95
0x140f6ae30: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6ae37: mov    rcx,QWORD PTR [rax+rdx*8]
0x140f6ae3b: cmp    WORD PTR [rcx+rbx*1+0x30],0x64
0x140f6ae41: jge    0x140f6ae4a
0x140f6ae43: mov    WORD PTR [rcx+rbx*1+0x30],0x64
0x140f6ae4a: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6ae51: mov    rcx,QWORD PTR [rax+rdx*8]
0x140f6ae55: add    rcx,0x20
0x140f6ae59: add    rcx,rbx
0x140f6ae5c: mov    edx,0xd
0x140f6ae61: call   0x1400735c0
0x140f6ae66: test   al,al
0x140f6ae68: je     0x140f6ae98
0x140f6ae6a: movzx  r8d,si
0x140f6ae6e: movzx  edx,di
0x140f6ae71: mov    rcx,r15
0x140f6ae74: call   0x140fa1160
0x140f6ae79: test   rax,rax
0x140f6ae7c: je     0x140f6ae98
0x140f6ae7e: movsxd rdx,edi
0x140f6ae81: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6ae88: mov    rdx,QWORD PTR [rcx+rdx*8]
0x140f6ae8c: movzx  ecx,WORD PTR [rdx+rbx*1+0x30]
0x140f6ae91: mov    WORD PTR [rax+0x90],cx
0x140f6ae98: inc    edi
0x140f6ae9a: cmp    edi,DWORD PTR [r15+0xa0]
0x140f6aea1: jl     0x140f6ada0
0x140f6aea7: xor    r11d,r11d
0x140f6aeaa: inc    esi
0x140f6aeac: cmp    esi,DWORD PTR [r15+0xa4]
0x140f6aeb3: jl     0x140f6ad80
0x140f6aeb9: lea    rcx,[rbp-0x48]
0x140f6aebd: call   0x140067130
0x140f6aec2: nop
0x140f6aec3: lea    rcx,[rbp+0x18]
0x140f6aec7: call   0x140067130
0x140f6aecc: nop
0x140f6aecd: xor    eax,eax
0x140f6aecf: mov    r13d,eax
0x140f6aed2: mov    DWORD PTR [rsp+0x40],eax
0x140f6aed6: cmp    DWORD PTR [r15+0xa0],eax
0x140f6aedd: jle    0x140f6af4f
0x140f6aedf: nop
0x140f6aee0: mov    ebx,eax
0x140f6aee2: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6aeea: jle    0x140f6af3e
0x140f6aeec: movsxd rdi,r13d
0x140f6aeef: nop
0x140f6aef0: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6aef7: movsxd rax,ebx
0x140f6aefa: imul   rcx,rax,0x70
0x140f6aefe: mov    rax,QWORD PTR [rdx+rdi*8]
0x140f6af02: cmp    WORD PTR [rax+rcx*1+0x3c],0x64
0x140f6af08: jl     0x140f6af31
0x140f6af0a: mov    WORD PTR [rsp+0x40],r13w
0x140f6af10: lea    rdx,[rsp+0x40]
0x140f6af15: lea    rcx,[rbp-0x48]
0x140f6af19: call   0x140070b20
0x140f6af1e: mov    WORD PTR [rsp+0x40],bx
0x140f6af23: lea    rdx,[rsp+0x40]
0x140f6af28: lea    rcx,[rbp+0x18]
0x140f6af2c: call   0x140070b20
0x140f6af31: inc    ebx
0x140f6af33: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6af3a: jl     0x140f6aef0
0x140f6af3c: xor    eax,eax
0x140f6af3e: inc    r13d
0x140f6af41: cmp    r13d,DWORD PTR [r15+0xa0]
0x140f6af48: jl     0x140f6aee0
0x140f6af4a: mov    DWORD PTR [rsp+0x40],r13d
0x140f6af4f: lea    rcx,[rbp-0x48]
0x140f6af53: call   0x140070a80
0x140f6af58: movsxd r12,DWORD PTR [rip+0x15b0dd5]        # 0x14251bd34
0x140f6af5f: cmp    rax,r12
0x140f6af62: jae    0x140f6afc5
0x140f6af64: cmp    DWORD PTR [rip+0x15a30cd],0x0        # 0x14250e038
0x140f6af6b: jne    0x140f6afc5
0x140f6af6d: lea    rdx,[rip+0x7fafcc]        # 0x141765f40 ; 'Not enough volcanos'
0x140f6af74: lea    rcx,[rbp-0x8]
0x140f6af78: call   0x140069780
0x140f6af7d: nop
0x140f6af7e: mov    edx,0x14
0x140f6af83: lea    rcx,[rbp-0x8]
0x140f6af87: call   0x140762ed0
0x140f6af8c: nop
0x140f6af8d: lea    rcx,[rbp-0x8]
0x140f6af91: call   0x140069460
0x140f6af96: nop
0x140f6af97: lea    rcx,[rbp+0x18]
0x140f6af9b: call   0x140067610
0x140f6afa0: nop
0x140f6afa1: lea    rcx,[rbp-0x48]
0x140f6afa5: call   0x140067610
0x140f6afaa: nop
0x140f6afab: lea    rcx,[rbp-0x30]
0x140f6afaf: call   0x140070de0
0x140f6afb4: nop
0x140f6afb5: lea    rcx,[rbp-0x60]
0x140f6afb9: call   0x140070de0
0x140f6afbe: mov    al,0x1
0x140f6afc0: jmp    0x140f6d6b2
0x140f6afc5: lea    rcx,[rbp-0x48]
0x140f6afc9: call   0x140070a80
0x140f6afce: cmp    r12,rax
0x140f6afd1: jbe    0x140f6afdf
0x140f6afd3: lea    rcx,[rbp-0x48]
0x140f6afd7: call   0x140070a80
0x140f6afdc: mov    r12,rax
0x140f6afdf: test   r12d,r12d
0x140f6afe2: jle    0x140f6b0ff
0x140f6afe8: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6aff0: lea    rcx,[rbp-0x48]
0x140f6aff4: call   0x140070a80
0x140f6aff9: mov    rcx,rax
0x140f6affc: call   0x140073560
0x140f6b001: movsxd rbx,eax
0x140f6b004: mov    rdx,rbx
0x140f6b007: lea    rcx,[rbp-0x48]
0x140f6b00b: call   0x140070a70
0x140f6b010: movsx  r14,WORD PTR [rax]
0x140f6b014: mov    rdx,rbx
0x140f6b017: lea    rcx,[rbp+0x18]
0x140f6b01b: call   0x140070a70
0x140f6b020: movsx  rsi,WORD PTR [rax]
0x140f6b024: mov    rdx,rbx
0x140f6b027: lea    rcx,[rbp-0x48]
0x140f6b02b: call   0x1400fcbb0
0x140f6b030: mov    rdx,rbx
0x140f6b033: lea    rcx,[rbp+0x18]
0x140f6b037: call   0x1400fcbb0
0x140f6b03c: imul   rbx,rsi,0x70
0x140f6b040: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6b047: mov    rcx,QWORD PTR [rax+r14*8]
0x140f6b04b: add    rcx,0x20
0x140f6b04f: add    rcx,rbx
0x140f6b052: mov    edx,0xd
0x140f6b057: call   0x1400fcef0
0x140f6b05c: mov    ecx,0x98
0x140f6b061: call   0x1415530e0
0x140f6b066: mov    QWORD PTR [rbp+0x230],rax
0x140f6b06d: mov    rcx,rax
0x140f6b070: call   0x140f180b0
0x140f6b075: nop
0x140f6b076: mov    QWORD PTR [rsp+0x58],rax
0x140f6b07b: mov    r9d,0x13
0x140f6b081: mov    DWORD PTR [rsp+0x20],0x26
0x140f6b089: mov    r8d,0xffffffff
0x140f6b08f: mov    rdx,rax
0x140f6b092: lea    rcx,[rip+0x15a4b57]        # 0x14250fbf0
0x140f6b099: call   0x140aac2a0
0x140f6b09e: mov    rax,QWORD PTR [rsp+0x58]
0x140f6b0a3: mov    WORD PTR [rax+0x78],r14w
0x140f6b0a8: mov    rax,QWORD PTR [rsp+0x58]
0x140f6b0ad: mov    WORD PTR [rax+0x7a],si
0x140f6b0b1: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6b0b8: mov    rcx,QWORD PTR [rax+r14*8]
0x140f6b0bc: movzx  edx,WORD PTR [rcx+rbx*1+0x30]
0x140f6b0c1: mov    rax,QWORD PTR [rsp+0x58]
0x140f6b0c6: mov    WORD PTR [rax+0x90],dx
0x140f6b0cd: mov    rcx,QWORD PTR [rsp+0x58]
0x140f6b0d2: sub    rcx,0xffffffffffffff80
0x140f6b0d6: xor    edx,edx
0x140f6b0d8: call   0x1400fcef0
0x140f6b0dd: lea    rdx,[rsp+0x58]
0x140f6b0e2: lea    rcx,[r15+0x280]
0x140f6b0e9: call   0x1400bafb0
0x140f6b0ee: dec    r12d
0x140f6b0f1: test   r12d,r12d
0x140f6b0f4: jg     0x140f6aff0
0x140f6b0fa: mov    r13d,DWORD PTR [rsp+0x40]
0x140f6b0ff: lea    rcx,[rbp+0x18]
0x140f6b103: call   0x140067610
0x140f6b108: nop
0x140f6b109: lea    rcx,[rbp-0x48]
0x140f6b10d: call   0x140067610
0x140f6b112: nop
0x140f6b113: lea    rcx,[rbp-0x30]
0x140f6b117: call   0x140067610
0x140f6b11c: nop
0x140f6b11d: lea    rcx,[rbp-0x60]
0x140f6b121: call   0x140067610
0x140f6b126: movzx  r10d,WORD PTR [rip+0x15a2eb2]        # 0x14250dfe0
0x140f6b12e: mov    r14d,0x64
0x140f6b134: cmp    r10w,0x4
0x140f6b139: jne    0x140f6c02a
0x140f6b13f: mov    r13d,0xfa
0x140f6b145: cmp    DWORD PTR [rip+0x15a352c],0x0        # 0x14250e678
0x140f6b14c: jne    0x140f6b8cf
0x140f6b152: mov    eax,DWORD PTR [rip+0x15b0fa0]        # 0x14251c0f8
0x140f6b158: inc    eax
0x140f6b15a: mov    DWORD PTR [rip+0x15a3518],eax        # 0x14250e678
0x140f6b160: xor    r14d,r14d
0x140f6b163: mov    DWORD PTR [rip+0x15a3512],r14d        # 0x14250e67c
0x140f6b16a: mov    rcx,r15
0x140f6b16d: call   0x140f6f070
0x140f6b172: xor    eax,eax
0x140f6b174: mov    QWORD PTR [rbp+0x230],rax
0x140f6b17b: mov    WORD PTR [rbp+0x238],ax
0x140f6b182: mov    esi,r14d
0x140f6b185: lea    rdi,[r15+0x238]
0x140f6b18c: mov    rcx,rdi
0x140f6b18f: call   0x140070480
0x140f6b194: test   rax,rax
0x140f6b197: je     0x140f6b233
0x140f6b19d: mov    ebx,r14d
0x140f6b1a0: lea    r15,[rip+0xffffffffff094e59]        # 0x140000000
0x140f6b1a7: nop    WORD PTR [rax+rax*1+0x0]
0x140f6b1b0: mov    rdx,rbx
0x140f6b1b3: mov    rcx,rdi
0x140f6b1b6: call   0x140070850
0x140f6b1bb: mov    rcx,QWORD PTR [rax]
0x140f6b1be: movsx  rax,WORD PTR [rcx+0x7c]
0x140f6b1c3: cmp    eax,0x9
0x140f6b1c6: ja     0x140f6b21d
0x140f6b1c8: mov    ecx,DWORD PTR [r15+rax*4+0xf6d788]
0x140f6b1d0: add    rcx,r15
0x140f6b1d3: jmp    rcx
0x140f6b1d5: mov    rdx,rbx
0x140f6b1d8: mov    rcx,rdi
0x140f6b1db: call   0x140070850
0x140f6b1e0: mov    rcx,QWORD PTR [rax]
0x140f6b1e3: cmp    DWORD PTR [rcx+0xb8],0x14
0x140f6b1ea: jmp    0x140f6b201
0x140f6b1ec: mov    rdx,rbx
0x140f6b1ef: mov    rcx,rdi
0x140f6b1f2: call   0x140070850
0x140f6b1f7: mov    rcx,QWORD PTR [rax]
0x140f6b1fa: cmp    DWORD PTR [rcx+0xb0],0x23
0x140f6b201: jl     0x140f6b21d
0x140f6b203: mov    rdx,rbx
0x140f6b206: mov    rcx,rdi
0x140f6b209: call   0x140070850
0x140f6b20e: mov    rcx,QWORD PTR [rax]
0x140f6b211: movsx  rax,WORD PTR [rcx+0x7c]
0x140f6b216: inc    BYTE PTR [rbp+rax*1+0x230]
0x140f6b21d: inc    esi
0x140f6b21f: movsxd rbx,esi
0x140f6b222: mov    rcx,rdi
0x140f6b225: call   0x140070480
0x140f6b22a: cmp    rbx,rax
0x140f6b22d: jb     0x140f6b1b0
0x140f6b22f: mov    r15,QWORD PTR [rbp-0x68]
0x140f6b233: mov    rax,QWORD PTR [rip+0x15b0eae]        # 0x14251c0e8
0x140f6b23a: test   rax,rax
0x140f6b23d: je     0x140f6b25b
0x140f6b23f: cmp    QWORD PTR [rax+0x8],r14
0x140f6b243: je     0x140f6b25b
0x140f6b245: cmp    QWORD PTR [rax+0x10],r14
0x140f6b249: je     0x140f6b25b
0x140f6b24b: cmp    QWORD PTR [rax+0x20],r14
0x140f6b24f: je     0x140f6b25b
0x140f6b251: cmp    QWORD PTR [rax+0x30],r14
0x140f6b255: jne    0x140f6b57c
0x140f6b25b: movsx  ebx,BYTE PTR [rbp+0x230]
0x140f6b262: cmp    ebx,DWORD PTR [rip+0x15b0af8]        # 0x14251bd60
0x140f6b268: jge    0x140f6b2b4
0x140f6b26a: cmp    DWORD PTR [rip+0x15a2dcb],r14d        # 0x14250e03c
0x140f6b271: jne    0x140f6b2b4
0x140f6b273: lea    rdx,[rip+0x7facde]        # 0x141765f58 ; 'Swamp region count fails by '
0x140f6b27a: lea    rcx,[rbp+0x18]
0x140f6b27e: call   0x140069780
0x140f6b283: nop
0x140f6b284: sub    ebx,DWORD PTR [rip+0x15b0ad6]        # 0x14251bd60
0x140f6b28a: lea    rdx,[rbp+0x18]
0x140f6b28e: mov    ecx,ebx
0x140f6b290: call   0x140545610
0x140f6b295: mov    edx,0x15
0x140f6b29a: lea    rcx,[rbp+0x18]
0x140f6b29e: call   0x140762ed0
0x140f6b2a3: nop
0x140f6b2a4: lea    rcx,[rbp+0x18]
0x140f6b2a8: call   0x140069460
0x140f6b2ad: mov    al,0x1
0x140f6b2af: jmp    0x140f6d6b2
0x140f6b2b4: movsx  ebx,BYTE PTR [rbp+0x231]
0x140f6b2bb: cmp    ebx,DWORD PTR [rip+0x15b0aa3]        # 0x14251bd64
0x140f6b2c1: jge    0x140f6b30d
0x140f6b2c3: cmp    DWORD PTR [rip+0x15a2d76],r14d        # 0x14250e040
0x140f6b2ca: jne    0x140f6b30d
0x140f6b2cc: lea    rdx,[rip+0x7fac2d]        # 0x141765f00 ; 'Desert region count fails by '
0x140f6b2d3: lea    rcx,[rbp+0x18]
0x140f6b2d7: call   0x140069780
0x140f6b2dc: nop
0x140f6b2dd: sub    ebx,DWORD PTR [rip+0x15b0a81]        # 0x14251bd64
0x140f6b2e3: lea    rdx,[rbp+0x18]
0x140f6b2e7: mov    ecx,ebx
0x140f6b2e9: call   0x140545610
0x140f6b2ee: mov    edx,0x16
0x140f6b2f3: lea    rcx,[rbp+0x18]
0x140f6b2f7: call   0x140762ed0
0x140f6b2fc: nop
0x140f6b2fd: lea    rcx,[rbp+0x18]
0x140f6b301: call   0x140069460
0x140f6b306: mov    al,0x1
0x140f6b308: jmp    0x140f6d6b2
0x140f6b30d: movsx  ebx,BYTE PTR [rbp+0x232]
0x140f6b314: cmp    ebx,DWORD PTR [rip+0x15b0a4e]        # 0x14251bd68
0x140f6b31a: jge    0x140f6b366
0x140f6b31c: cmp    DWORD PTR [rip+0x15a2d21],r14d        # 0x14250e044
0x140f6b323: jne    0x140f6b366
0x140f6b325: lea    rdx,[rip+0x7fabf4]        # 0x141765f20 ; 'Forest region count fails by '
0x140f6b32c: lea    rcx,[rbp+0x18]
0x140f6b330: call   0x140069780
0x140f6b335: nop
0x140f6b336: sub    ebx,DWORD PTR [rip+0x15b0a2c]        # 0x14251bd68
0x140f6b33c: lea    rdx,[rbp+0x18]
0x140f6b340: mov    ecx,ebx
0x140f6b342: call   0x140545610
0x140f6b347: mov    edx,0x17
0x140f6b34c: lea    rcx,[rbp+0x18]
0x140f6b350: call   0x140762ed0
0x140f6b355: nop
0x140f6b356: lea    rcx,[rbp+0x18]
0x140f6b35a: call   0x140069460
0x140f6b35f: mov    al,0x1
0x140f6b361: jmp    0x140f6d6b2
0x140f6b366: movsx  ebx,BYTE PTR [rbp+0x233]
0x140f6b36d: cmp    ebx,DWORD PTR [rip+0x15b09f9]        # 0x14251bd6c
0x140f6b373: jge    0x140f6b3bf
0x140f6b375: cmp    DWORD PTR [rip+0x15a2ccc],r14d        # 0x14250e048
0x140f6b37c: jne    0x140f6b3bf
0x140f6b37e: lea    rdx,[rip+0x7fab3b]        # 0x141765ec0 ; 'Mountain region count fails by '
0x140f6b385: lea    rcx,[rbp+0x18]
0x140f6b389: call   0x140069780
0x140f6b38e: nop
0x140f6b38f: sub    ebx,DWORD PTR [rip+0x15b09d7]        # 0x14251bd6c
0x140f6b395: lea    rdx,[rbp+0x18]
0x140f6b399: mov    ecx,ebx
0x140f6b39b: call   0x140545610
0x140f6b3a0: mov    edx,0x18
0x140f6b3a5: lea    rcx,[rbp+0x18]
0x140f6b3a9: call   0x140762ed0
0x140f6b3ae: nop
0x140f6b3af: lea    rcx,[rbp+0x18]
0x140f6b3b3: call   0x140069460
0x140f6b3b8: mov    al,0x1
0x140f6b3ba: jmp    0x140f6d6b2
0x140f6b3bf: movsx  ebx,BYTE PTR [rbp+0x234]
0x140f6b3c6: cmp    ebx,DWORD PTR [rip+0x15b09a4]        # 0x14251bd70
0x140f6b3cc: jge    0x140f6b418
0x140f6b3ce: cmp    DWORD PTR [rip+0x15a2c77],r14d        # 0x14250e04c
0x140f6b3d5: jne    0x140f6b418
0x140f6b3d7: lea    rdx,[rip+0x7fab02]        # 0x141765ee0 ; 'Ocean region count fails by '
0x140f6b3de: lea    rcx,[rbp+0x18]
0x140f6b3e2: call   0x140069780
0x140f6b3e7: nop
0x140f6b3e8: sub    ebx,DWORD PTR [rip+0x15b0982]        # 0x14251bd70
0x140f6b3ee: lea    rdx,[rbp+0x18]
0x140f6b3f2: mov    ecx,ebx
0x140f6b3f4: call   0x140545610
0x140f6b3f9: mov    edx,0x19
0x140f6b3fe: lea    rcx,[rbp+0x18]
0x140f6b402: call   0x140762ed0
0x140f6b407: nop
0x140f6b408: lea    rcx,[rbp+0x18]
0x140f6b40c: call   0x140069460
0x140f6b411: mov    al,0x1
0x140f6b413: jmp    0x140f6d6b2
0x140f6b418: movsx  ebx,BYTE PTR [rbp+0x236]
0x140f6b41f: cmp    ebx,DWORD PTR [rip+0x15b0953]        # 0x14251bd78
0x140f6b425: jge    0x140f6b471
0x140f6b427: cmp    DWORD PTR [rip+0x15a2c22],r14d        # 0x14250e050
0x140f6b42e: jne    0x140f6b471
0x140f6b430: lea    rdx,[rip+0x7fac81]        # 0x1417660b8 ; 'Glacier region count fails by '
0x140f6b437: lea    rcx,[rbp+0x18]
0x140f6b43b: call   0x140069780
0x140f6b440: nop
0x140f6b441: sub    ebx,DWORD PTR [rip+0x15b0931]        # 0x14251bd78
0x140f6b447: lea    rdx,[rbp+0x18]
0x140f6b44b: mov    ecx,ebx
0x140f6b44d: call   0x140545610
0x140f6b452: mov    edx,0x1a
0x140f6b457: lea    rcx,[rbp+0x18]
0x140f6b45b: call   0x140762ed0
0x140f6b460: nop
0x140f6b461: lea    rcx,[rbp+0x18]
0x140f6b465: call   0x140069460
0x140f6b46a: mov    al,0x1
0x140f6b46c: jmp    0x140f6d6b2
0x140f6b471: movsx  ebx,BYTE PTR [rbp+0x237]
0x140f6b478: cmp    ebx,DWORD PTR [rip+0x15b08fe]        # 0x14251bd7c
0x140f6b47e: jge    0x140f6b4ca
0x140f6b480: cmp    DWORD PTR [rip+0x15a2bcd],r14d        # 0x14250e054
0x140f6b487: jne    0x140f6b4ca
0x140f6b489: lea    rdx,[rip+0x7fac48]        # 0x1417660d8 ; 'Tundra region count fails by '
0x140f6b490: lea    rcx,[rbp+0x18]
0x140f6b494: call   0x140069780
0x140f6b499: nop
0x140f6b49a: sub    ebx,DWORD PTR [rip+0x15b08dc]        # 0x14251bd7c
0x140f6b4a0: lea    rdx,[rbp+0x18]
0x140f6b4a4: mov    ecx,ebx
0x140f6b4a6: call   0x140545610
0x140f6b4ab: mov    edx,0x1b
0x140f6b4b0: lea    rcx,[rbp+0x18]
0x140f6b4b4: call   0x140762ed0
0x140f6b4b9: nop
0x140f6b4ba: lea    rcx,[rbp+0x18]
0x140f6b4be: call   0x140069460
0x140f6b4c3: mov    al,0x1
0x140f6b4c5: jmp    0x140f6d6b2
0x140f6b4ca: movsx  ebx,BYTE PTR [rbp+0x238]
0x140f6b4d1: cmp    ebx,DWORD PTR [rip+0x15b08a9]        # 0x14251bd80
0x140f6b4d7: jge    0x140f6b523
0x140f6b4d9: cmp    DWORD PTR [rip+0x15a2b78],r14d        # 0x14250e058
0x140f6b4e0: jne    0x140f6b523
0x140f6b4e2: lea    rdx,[rip+0x7fab87]        # 0x141766070 ; 'Grassland region count fails by '
0x140f6b4e9: lea    rcx,[rbp+0x18]
0x140f6b4ed: call   0x140069780
0x140f6b4f2: nop
0x140f6b4f3: sub    ebx,DWORD PTR [rip+0x15b0887]        # 0x14251bd80
0x140f6b4f9: lea    rdx,[rbp+0x18]
0x140f6b4fd: mov    ecx,ebx
0x140f6b4ff: call   0x140545610
0x140f6b504: mov    edx,0x1c
0x140f6b509: lea    rcx,[rbp+0x18]
0x140f6b50d: call   0x140762ed0
0x140f6b512: nop
0x140f6b513: lea    rcx,[rbp+0x18]
0x140f6b517: call   0x140069460
0x140f6b51c: mov    al,0x1
0x140f6b51e: jmp    0x140f6d6b2
0x140f6b523: movsx  ebx,BYTE PTR [rbp+0x239]
0x140f6b52a: cmp    ebx,DWORD PTR [rip+0x15b0854]        # 0x14251bd84
0x140f6b530: jge    0x140f6b57c
0x140f6b532: cmp    DWORD PTR [rip+0x15a2b23],r14d        # 0x14250e05c
0x140f6b539: jne    0x140f6b57c
0x140f6b53b: lea    rdx,[rip+0x7fab56]        # 0x141766098 ; 'Hill region count fails by '
0x140f6b542: lea    rcx,[rbp+0x18]
0x140f6b546: call   0x140069780
0x140f6b54b: nop
0x140f6b54c: sub    ebx,DWORD PTR [rip+0x15b0832]        # 0x14251bd84
0x140f6b552: lea    rdx,[rbp+0x18]
0x140f6b556: mov    ecx,ebx
0x140f6b558: call   0x140545610
0x140f6b55d: mov    edx,0x1d
0x140f6b562: lea    rcx,[rbp+0x18]
0x140f6b566: call   0x140762ed0
0x140f6b56b: nop
0x140f6b56c: lea    rcx,[rbp+0x18]
0x140f6b570: call   0x140069460
0x140f6b575: mov    al,0x1
0x140f6b577: jmp    0x140f6d6b2
0x140f6b57c: test   rax,rax
0x140f6b57f: je     0x140f6b587
0x140f6b581: cmp    QWORD PTR [rax+0x8],r14
0x140f6b585: jne    0x140f6b58f
0x140f6b587: mov    rcx,r15
0x140f6b58a: call   0x140f904c0
0x140f6b58f: mov    edi,r14d
0x140f6b592: lea    rsi,[r15+0x220]
0x140f6b599: mov    rcx,rsi
0x140f6b59c: call   0x140070480
0x140f6b5a1: test   rax,rax
0x140f6b5a4: je     0x140f6b5e1
0x140f6b5a6: mov    rbx,r14
0x140f6b5a9: mov    r15d,0x1
0x140f6b5af: nop
0x140f6b5b0: mov    rdx,rbx
0x140f6b5b3: mov    rcx,rsi
0x140f6b5b6: call   0x140070850
0x140f6b5bb: mov    rcx,QWORD PTR [rax]
0x140f6b5be: test   rcx,rcx
0x140f6b5c1: je     0x140f6b5cb
0x140f6b5c3: mov    edx,r15d
0x140f6b5c6: call   0x140f6d880
0x140f6b5cb: inc    edi
0x140f6b5cd: movsxd rbx,edi
0x140f6b5d0: mov    rcx,rsi
0x140f6b5d3: call   0x140070480
0x140f6b5d8: cmp    rbx,rax
0x140f6b5db: jb     0x140f6b5b0
0x140f6b5dd: mov    r15,QWORD PTR [rbp-0x68]
0x140f6b5e1: lea    rcx,[r15+0x220]
0x140f6b5e8: call   0x1400708c0
0x140f6b5ed: mov    edi,r14d
0x140f6b5f0: lea    rsi,[r15+0x268]
0x140f6b5f7: mov    rcx,rsi
0x140f6b5fa: call   0x140070480
0x140f6b5ff: test   rax,rax
0x140f6b602: je     0x140f6b641
0x140f6b604: mov    rbx,r14
0x140f6b607: mov    r15d,0x1
0x140f6b60d: nop    DWORD PTR [rax]
0x140f6b610: mov    rdx,rbx
0x140f6b613: mov    rcx,rsi
0x140f6b616: call   0x140070850
0x140f6b61b: mov    rcx,QWORD PTR [rax]
0x140f6b61e: test   rcx,rcx
0x140f6b621: je     0x140f6b62b
0x140f6b623: mov    edx,r15d
0x140f6b626: call   0x140f6d8d0
0x140f6b62b: inc    edi
0x140f6b62d: movsxd rbx,edi
0x140f6b630: mov    rcx,rsi
0x140f6b633: call   0x140070480
0x140f6b638: cmp    rbx,rax
0x140f6b63b: jb     0x140f6b610
0x140f6b63d: mov    r15,QWORD PTR [rbp-0x68]
0x140f6b641: lea    rcx,[r15+0x268]
0x140f6b648: call   0x1400708c0
0x140f6b64d: mov    edi,r14d
0x140f6b650: lea    rcx,[r15+0x238]
0x140f6b657: call   0x140070480
0x140f6b65c: test   rax,rax
0x140f6b65f: je     0x140f6b6a2
0x140f6b661: mov    rbx,r14
0x140f6b664: lea    rsi,[r15+0x238]
0x140f6b66b: mov    r15d,0x1
0x140f6b671: mov    rdx,rbx
0x140f6b674: mov    rcx,rsi
0x140f6b677: call   0x140070850
0x140f6b67c: mov    rcx,QWORD PTR [rax]
0x140f6b67f: test   rcx,rcx
0x140f6b682: je     0x140f6b68c
0x140f6b684: mov    edx,r15d
0x140f6b687: call   0x140f6d9a0
0x140f6b68c: inc    edi
0x140f6b68e: movsxd rbx,edi
0x140f6b691: mov    rcx,rsi
0x140f6b694: call   0x140070480
0x140f6b699: cmp    rbx,rax
0x140f6b69c: jb     0x140f6b671
0x140f6b69e: mov    r15,QWORD PTR [rbp-0x68]
0x140f6b6a2: lea    rcx,[r15+0x238]
0x140f6b6a9: call   0x1400708c0
0x140f6b6ae: mov    edi,r14d
0x140f6b6b1: lea    rsi,[r15+0x250]
0x140f6b6b8: mov    rcx,rsi
0x140f6b6bb: call   0x140070480
0x140f6b6c0: test   rax,rax
0x140f6b6c3: je     0x140f6b701
0x140f6b6c5: mov    rbx,r14
0x140f6b6c8: mov    r15d,0x1
0x140f6b6ce: xchg   ax,ax
0x140f6b6d0: mov    rdx,rbx
0x140f6b6d3: mov    rcx,rsi
0x140f6b6d6: call   0x140070850
0x140f6b6db: mov    rcx,QWORD PTR [rax]
0x140f6b6de: test   rcx,rcx
0x140f6b6e1: je     0x140f6b6eb
0x140f6b6e3: mov    edx,r15d
0x140f6b6e6: call   0x140f6daa0
0x140f6b6eb: inc    edi
0x140f6b6ed: movsxd rbx,edi
0x140f6b6f0: mov    rcx,rsi
0x140f6b6f3: call   0x140070480
0x140f6b6f8: cmp    rbx,rax
0x140f6b6fb: jb     0x140f6b6d0
0x140f6b6fd: mov    r15,QWORD PTR [rbp-0x68]
0x140f6b701: lea    rcx,[r15+0x250]
0x140f6b708: call   0x1400708c0
0x140f6b70d: lea    rcx,[rip+0x15a2f34]        # 0x14250e648
0x140f6b714: call   0x1400708c0
0x140f6b719: lea    rcx,[rip+0x15a2f40]        # 0x14250e660
0x140f6b720: call   0x1400708c0
0x140f6b725: mov    r12d,r13d
0x140f6b728: mov    esi,r14d
0x140f6b72b: mov    eax,DWORD PTR [r15+0xa0]
0x140f6b732: test   eax,eax
0x140f6b734: jle    0x140f6b846
0x140f6b73a: mov    r13d,DWORD PTR [rsp+0x7c]
0x140f6b73f: nop
0x140f6b740: mov    ebx,r14d
0x140f6b743: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6b74b: jle    0x140f6b82e
0x140f6b751: movsxd r14,esi
0x140f6b754: nop    DWORD PTR [rax+0x0]
0x140f6b758: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6b760: movsxd rax,ebx
0x140f6b763: imul   rdi,rax,0x70
0x140f6b767: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6b76e: mov    rcx,QWORD PTR [rax+r14*8]
0x140f6b772: mov    eax,0x96
0x140f6b777: cmp    WORD PTR [rcx+rdi*1+0x30],ax
0x140f6b77c: jl     0x140f6b81c
0x140f6b782: mov    WORD PTR [rsp+0x40],si
0x140f6b787: lea    rdx,[rsp+0x40]
0x140f6b78c: lea    rcx,[rip+0x15a2eb5]        # 0x14250e648
0x140f6b793: call   0x140070b20
0x140f6b798: mov    WORD PTR [rsp+0x40],bx
0x140f6b79d: lea    rdx,[rsp+0x40]
0x140f6b7a2: lea    rcx,[rip+0x15a2eb7]        # 0x14250e660
0x140f6b7a9: call   0x140070b20
0x140f6b7ae: mov    eax,DWORD PTR [r15+0xa0]
0x140f6b7b5: mov    ecx,eax
0x140f6b7b7: sar    ecx,0x2
0x140f6b7ba: cmp    esi,ecx
0x140f6b7bc: jle    0x140f6b81c
0x140f6b7be: sub    eax,ecx
0x140f6b7c0: cmp    esi,eax
0x140f6b7c2: jge    0x140f6b81c
0x140f6b7c4: mov    eax,DWORD PTR [r15+0xa4]
0x140f6b7cb: mov    ecx,eax
0x140f6b7cd: sar    ecx,0x2
0x140f6b7d0: cmp    ebx,ecx
0x140f6b7d2: jle    0x140f6b81c
0x140f6b7d4: sub    eax,ecx
0x140f6b7d6: cmp    ebx,eax
0x140f6b7d8: jge    0x140f6b81c
0x140f6b7da: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6b7e1: mov    rcx,QWORD PTR [rax+r14*8]
0x140f6b7e5: movsx  eax,WORD PTR [rcx+rdi*1+0x30]
0x140f6b7ea: cmp    eax,r12d
0x140f6b7ed: jge    0x140f6b81c
0x140f6b7ef: add    rcx,0x20
0x140f6b7f3: add    rcx,rdi
0x140f6b7f6: mov    edx,0xd
0x140f6b7fb: call   0x1400735c0
0x140f6b800: test   al,al
0x140f6b802: jne    0x140f6b81c
0x140f6b804: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6b80b: mov    rcx,QWORD PTR [rax+r14*8]
0x140f6b80f: movsx  r12d,WORD PTR [rcx+rdi*1+0x30]
0x140f6b815: mov    DWORD PTR [rsp+0x78],esi
0x140f6b819: mov    r13d,ebx
0x140f6b81c: inc    ebx
0x140f6b81e: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6b825: jl     0x140f6b760
0x140f6b82b: xor    r14d,r14d
0x140f6b82e: inc    esi
0x140f6b830: mov    eax,DWORD PTR [r15+0xa0]
0x140f6b837: cmp    esi,eax
0x140f6b839: jl     0x140f6b740
0x140f6b83f: cmp    DWORD PTR [rsp+0x78],0xffffffff
0x140f6b844: jne    0x140f6b854
0x140f6b846: sar    eax,1
0x140f6b848: mov    r13d,DWORD PTR [r15+0xa4]
0x140f6b84f: sar    r13d,1
0x140f6b852: jmp    0x140f6b858
0x140f6b854: mov    eax,DWORD PTR [rsp+0x78]
0x140f6b858: mov    DWORD PTR [rip+0x15a2de2],eax        # 0x14250e640
0x140f6b85e: mov    DWORD PTR [rip+0x15a2ddf],r13d        # 0x14250e644
0x140f6b865: mov    rax,QWORD PTR [rip+0x15b087c]        # 0x14251c0e8
0x140f6b86c: test   rax,rax
0x140f6b86f: je     0x140f6b878
0x140f6b871: cmp    QWORD PTR [rax+0x8],0x0
0x140f6b876: jne    0x140f6b8c9
0x140f6b878: lea    rcx,[rip+0x15a2dc9]        # 0x14250e648
0x140f6b87f: call   0x140070a80
0x140f6b884: movsxd rcx,DWORD PTR [rip+0x15b0525]        # 0x14251bdb0
0x140f6b88b: cmp    rax,rcx
0x140f6b88e: jae    0x140f6b8c9
0x140f6b890: cmp    DWORD PTR [rip+0x15a27c9],0x0        # 0x14250e060
0x140f6b897: jne    0x140f6b8c9
0x140f6b899: lea    rdx,[rip+0x7fa778]        # 0x141766018 ; 'Not enough river start points before erosion'
0x140f6b8a0: lea    rcx,[rbp+0x18]
0x140f6b8a4: call   0x140069780
0x140f6b8a9: nop
0x140f6b8aa: mov    edx,0x1e
0x140f6b8af: lea    rcx,[rbp+0x18]
0x140f6b8b3: call   0x140762ed0
0x140f6b8b8: nop
0x140f6b8b9: lea    rcx,[rbp+0x18]
0x140f6b8bd: call   0x140069460
0x140f6b8c2: mov    al,0x1
0x140f6b8c4: jmp    0x140f6d6b2
0x140f6b8c9: mov    r13d,0xfa
0x140f6b8cf: mov    r12d,DWORD PTR [rip+0x15a2da6]        # 0x14250e67c
0x140f6b8d6: movsxd r14,DWORD PTR [rip+0x15b04d7]        # 0x14251bdb4
0x140f6b8dd: lea    rcx,[rip+0x15a2d64]        # 0x14250e648
0x140f6b8e4: call   0x140070a80
0x140f6b8e9: cmp    r14,rax
0x140f6b8ec: jbe    0x140f6b8fd
0x140f6b8ee: lea    rcx,[rip+0x15a2d53]        # 0x14250e648
0x140f6b8f5: call   0x140070a80
0x140f6b8fa: mov    r14,rax
0x140f6b8fd: mov    ecx,DWORD PTR [rip+0x15a2d75]        # 0x14250e678
0x140f6b903: dec    ecx
0x140f6b905: cmp    r12d,ecx
0x140f6b908: jne    0x140f6bf7a
0x140f6b90e: movzx  r14d,WORD PTR [rip+0x15b058a]        # 0x14251bea0
0x140f6b916: cmp    r14w,r13w
0x140f6b91a: jl     0x140f6b924
0x140f6b91c: mov    r14d,0xf9
0x140f6b922: jmp    0x140f6b930
0x140f6b924: cmp    r14w,0x64
0x140f6b929: jle    0x140f6bade
0x140f6b92f: nop
0x140f6b930: mov    r13b,0x1
0x140f6b933: mov    BYTE PTR [rsp+0x48],r13b
0x140f6b938: xor    ebx,ebx
0x140f6b93a: mov    edi,ebx
0x140f6b93c: lea    rcx,[rip+0x15a2d05]        # 0x14250e648
0x140f6b943: call   0x1400708c0
0x140f6b948: lea    rcx,[rip+0x15a2d11]        # 0x14250e660
0x140f6b94f: call   0x1400708c0
0x140f6b954: mov    esi,ebx
0x140f6b956: cmp    DWORD PTR [r15+0xa0],ebx
0x140f6b95d: jle    0x140f6ba03
0x140f6b963: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6b96b: jle    0x140f6b9ea
0x140f6b96d: movsxd r12,esi
0x140f6b970: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6b977: movsxd rax,ebx
0x140f6b97a: imul   rdx,rax,0x70
0x140f6b97e: mov    rax,QWORD PTR [rcx+r12*8]
0x140f6b982: cmp    WORD PTR [rax+rdx*1+0x30],r14w
0x140f6b988: jne    0x140f6b9d2
0x140f6b98a: lea    rcx,[rax+0x20]
0x140f6b98e: add    rcx,rdx
0x140f6b991: xor    edx,edx
0x140f6b993: call   0x1400735c0
0x140f6b998: test   al,al
0x140f6b99a: jne    0x140f6b9d2
0x140f6b99c: mov    WORD PTR [rsp+0x40],si
0x140f6b9a1: lea    rdx,[rsp+0x40]
0x140f6b9a6: lea    rcx,[rip+0x15a2c9b]        # 0x14250e648
0x140f6b9ad: call   0x140070b20
0x140f6b9b2: mov    WORD PTR [rsp+0x40],bx
0x140f6b9b7: lea    rdx,[rsp+0x40]
0x140f6b9bc: lea    rcx,[rip+0x15a2c9d]        # 0x14250e660
0x140f6b9c3: call   0x140070b20
0x140f6b9c8: inc    edi
0x140f6b9ca: cmp    edi,0x3e8
0x140f6b9d0: jg     0x140f6b9df
0x140f6b9d2: inc    ebx
0x140f6b9d4: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6b9db: jl     0x140f6b970
0x140f6b9dd: jmp    0x140f6b9e2
0x140f6b9df: xor    r13b,r13b
0x140f6b9e2: cmp    edi,0x3e8
0x140f6b9e8: jg     0x140f6b9fe
0x140f6b9ea: inc    esi
0x140f6b9ec: cmp    esi,DWORD PTR [r15+0xa0]
0x140f6b9f3: mov    ebx,0x0
0x140f6b9f8: jl     0x140f6b963
0x140f6b9fe: mov    BYTE PTR [rsp+0x48],r13b
0x140f6ba03: lea    rcx,[rip+0x15a2c3e]        # 0x14250e648
0x140f6ba0a: call   0x140070a80
0x140f6ba0f: test   rax,rax
0x140f6ba12: je     0x140f6baca
0x140f6ba18: mov    r13d,0x64
0x140f6ba1e: xchg   ax,ax
0x140f6ba20: lea    rcx,[rip+0x15a2c21]        # 0x14250e648
0x140f6ba27: call   0x140070a80
0x140f6ba2c: mov    rcx,rax
0x140f6ba2f: call   0x140073560
0x140f6ba34: movsxd rbx,eax
0x140f6ba37: mov    rdx,rbx
0x140f6ba3a: lea    rcx,[rip+0x15a2c07]        # 0x14250e648
0x140f6ba41: call   0x140070a70
0x140f6ba46: movsx  rsi,WORD PTR [rax]
0x140f6ba4a: mov    rdx,rbx
0x140f6ba4d: lea    rcx,[rip+0x15a2c0c]        # 0x14250e660
0x140f6ba54: call   0x140070a70
0x140f6ba59: movsx  rdi,WORD PTR [rax]
0x140f6ba5d: mov    rdx,rbx
0x140f6ba60: lea    rcx,[rip+0x15a2be1]        # 0x14250e648
0x140f6ba67: call   0x1400fcbb0
0x140f6ba6c: mov    rdx,rbx
0x140f6ba6f: lea    rcx,[rip+0x15a2bea]        # 0x14250e660
0x140f6ba76: call   0x1400fcbb0
0x140f6ba7b: mov    r9,QWORD PTR [r15+0x2b0]
0x140f6ba82: imul   rcx,rdi,0x70
0x140f6ba86: add    rcx,0x20
0x140f6ba8a: add    rcx,QWORD PTR [r9+rsi*8]
0x140f6ba8e: mov    edx,0x11
0x140f6ba93: call   0x1400fcef0
0x140f6ba98: mov    r9d,r13d
0x140f6ba9b: mov    BYTE PTR [rsp+0x20],0x1
0x140f6baa0: movzx  r8d,di
0x140f6baa4: movzx  edx,si
0x140f6baa7: mov    rcx,r15
0x140f6baaa: call   0x140f71920
0x140f6baaf: lea    rcx,[rip+0x15a2b92]        # 0x14250e648
0x140f6bab6: call   0x140070a80
0x140f6babb: test   rax,rax
0x140f6babe: jne    0x140f6ba20
0x140f6bac4: movzx  r13d,BYTE PTR [rsp+0x48]
0x140f6baca: test   r13b,r13b
0x140f6bacd: je     0x140f6bad3
0x140f6bacf: dec    r14w
0x140f6bad3: cmp    r14w,0x64
0x140f6bad8: jg     0x140f6b930
0x140f6bade: mov    r13d,0x64
0x140f6bae4: xor    ebx,ebx
0x140f6bae6: cmp    DWORD PTR [rip+0x15b0610],ebx        # 0x14251c0fc
0x140f6baec: je     0x140f6bd4d
0x140f6baf2: mov    r14d,ebx
0x140f6baf5: cmp    DWORD PTR [r15+0xa0],ebx
0x140f6bafc: jle    0x140f6bd4d
0x140f6bb02: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6bb0a: jle    0x140f6bd38
0x140f6bb10: movsxd rdi,r14d
0x140f6bb13: nop    DWORD PTR [rax+0x0]
0x140f6bb17: nop    WORD PTR [rax+rax*1+0x0]
0x140f6bb20: movsxd rax,ebx
0x140f6bb23: imul   rsi,rax,0x70
0x140f6bb27: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bb2e: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6bb32: cmp    WORD PTR [rcx+rsi*1+0x30],0x64
0x140f6bb38: jl     0x140f6bd29
0x140f6bb3e: test   r14d,r14d
0x140f6bb41: jle    0x140f6bba6
0x140f6bb43: mov    ecx,r13d
0x140f6bb46: call   0x140073560
0x140f6bb4b: test   eax,eax
0x140f6bb4d: jne    0x140f6bba6
0x140f6bb4f: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bb56: movsxd r12,r14d
0x140f6bb59: mov    rdx,QWORD PTR [rax+r12*8-0x8]
0x140f6bb5e: mov    rax,QWORD PTR [rax+rdi*8]
0x140f6bb62: movsx  ecx,WORD PTR [rax+rsi*1+0x30]
0x140f6bb67: add    ecx,0xf
0x140f6bb6a: movsx  eax,WORD PTR [rdx+rsi*1+0x30]
0x140f6bb6f: cmp    eax,ecx
0x140f6bb71: jle    0x140f6bba6
0x140f6bb73: lea    rcx,[rsi+0x20]
0x140f6bb77: add    rcx,rdx
0x140f6bb7a: mov    edx,0xd
0x140f6bb7f: call   0x1400735c0
0x140f6bb84: test   al,al
0x140f6bb86: jne    0x140f6bba6
0x140f6bb88: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6bb8f: mov    rax,QWORD PTR [rdx+rdi*8]
0x140f6bb93: movzx  ecx,WORD PTR [rax+rsi*1+0x30]
0x140f6bb98: add    cx,0xf
0x140f6bb9c: mov    rax,QWORD PTR [rdx+r12*8-0x8]
0x140f6bba1: mov    WORD PTR [rax+rsi*1+0x30],cx
0x140f6bba6: mov    eax,DWORD PTR [r15+0xa0]
0x140f6bbad: dec    eax
0x140f6bbaf: cmp    r14d,eax
0x140f6bbb2: jge    0x140f6bc38
0x140f6bbb8: mov    ecx,r13d
0x140f6bbbb: call   0x140073560
0x140f6bbc0: test   eax,eax
0x140f6bbc2: jne    0x140f6bc38
0x140f6bbc4: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6bbcb: movsxd rsi,r14d
0x140f6bbce: movsxd rax,ebx
0x140f6bbd1: imul   r8,rax,0x70
0x140f6bbd5: mov    r9,QWORD PTR [rdx+rsi*8+0x8]
0x140f6bbda: movsxd rax,ebx
0x140f6bbdd: imul   rcx,rax,0x70
0x140f6bbe1: mov    rax,QWORD PTR [rdx+rdi*8]
0x140f6bbe5: movsx  edx,WORD PTR [rax+rcx*1+0x30]
0x140f6bbea: add    edx,0xf
0x140f6bbed: movsx  eax,WORD PTR [r9+r8*1+0x30]
0x140f6bbf3: cmp    eax,edx
0x140f6bbf5: jle    0x140f6bc38
0x140f6bbf7: lea    rcx,[r8+0x20]
0x140f6bbfb: add    rcx,r9
0x140f6bbfe: mov    edx,0xd
0x140f6bc03: call   0x1400735c0
0x140f6bc08: test   al,al
0x140f6bc0a: jne    0x140f6bc38
0x140f6bc0c: mov    r8,QWORD PTR [r15+0x2b0]
0x140f6bc13: movsxd rax,ebx
0x140f6bc16: imul   rcx,rax,0x70
0x140f6bc1a: mov    rax,QWORD PTR [r8+rdi*8]
0x140f6bc1e: movzx  edx,WORD PTR [rax+rcx*1+0x30]
0x140f6bc23: add    dx,0xf
0x140f6bc27: movsxd rax,ebx
0x140f6bc2a: imul   rcx,rax,0x70
0x140f6bc2e: mov    rax,QWORD PTR [r8+rsi*8+0x8]
0x140f6bc33: mov    WORD PTR [rax+rcx*1+0x30],dx
0x140f6bc38: test   ebx,ebx
0x140f6bc3a: jle    0x140f6bcac
0x140f6bc3c: mov    ecx,r13d
0x140f6bc3f: call   0x140073560
0x140f6bc44: test   eax,eax
0x140f6bc46: jne    0x140f6bcac
0x140f6bc48: lea    eax,[rbx-0x1]
0x140f6bc4b: movsxd rcx,eax
0x140f6bc4e: imul   rsi,rcx,0x70
0x140f6bc52: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bc59: mov    r8,QWORD PTR [rax+rdi*8]
0x140f6bc5d: movsxd rax,ebx
0x140f6bc60: imul   rcx,rax,0x70
0x140f6bc64: movsx  edx,WORD PTR [rcx+r8*1+0x30]
0x140f6bc6a: add    edx,0xf
0x140f6bc6d: movsx  eax,WORD PTR [rsi+r8*1+0x30]
0x140f6bc73: cmp    eax,edx
0x140f6bc75: jle    0x140f6bcac
0x140f6bc77: lea    rcx,[r8+0x20]
0x140f6bc7b: add    rcx,rsi
0x140f6bc7e: mov    edx,0xd
0x140f6bc83: call   0x1400735c0
0x140f6bc88: test   al,al
0x140f6bc8a: jne    0x140f6bcac
0x140f6bc8c: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bc93: mov    rdx,QWORD PTR [rax+rdi*8]
0x140f6bc97: movsxd rax,ebx
0x140f6bc9a: imul   rcx,rax,0x70
0x140f6bc9e: movzx  eax,WORD PTR [rcx+rdx*1+0x30]
0x140f6bca3: add    ax,0xf
0x140f6bca7: mov    WORD PTR [rsi+rdx*1+0x30],ax
0x140f6bcac: mov    eax,DWORD PTR [r15+0xa4]
0x140f6bcb3: dec    eax
0x140f6bcb5: cmp    ebx,eax
0x140f6bcb7: jge    0x140f6bd29
0x140f6bcb9: mov    ecx,r13d
0x140f6bcbc: call   0x140073560
0x140f6bcc1: test   eax,eax
0x140f6bcc3: jne    0x140f6bd29
0x140f6bcc5: movsxd rax,ebx
0x140f6bcc8: inc    rax
0x140f6bccb: imul   rsi,rax,0x70
0x140f6bccf: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bcd6: mov    r8,QWORD PTR [rax+rdi*8]
0x140f6bcda: movsxd rax,ebx
0x140f6bcdd: imul   rcx,rax,0x70
0x140f6bce1: movsx  edx,WORD PTR [rcx+r8*1+0x30]
0x140f6bce7: add    edx,0xf
0x140f6bcea: movsx  eax,WORD PTR [r8+rsi*1+0x30]
0x140f6bcf0: cmp    eax,edx
0x140f6bcf2: jle    0x140f6bd29
0x140f6bcf4: lea    rcx,[r8+0x20]
0x140f6bcf8: add    rcx,rsi
0x140f6bcfb: mov    edx,0xd
0x140f6bd00: call   0x1400735c0
0x140f6bd05: test   al,al
0x140f6bd07: jne    0x140f6bd29
0x140f6bd09: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bd10: mov    rdx,QWORD PTR [rax+rdi*8]
0x140f6bd14: movsxd rax,ebx
0x140f6bd17: imul   rcx,rax,0x70
0x140f6bd1b: movzx  eax,WORD PTR [rcx+rdx*1+0x30]
0x140f6bd20: add    ax,0xf
0x140f6bd24: mov    WORD PTR [rsi+rdx*1+0x30],ax
0x140f6bd29: inc    ebx
0x140f6bd2b: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6bd32: jl     0x140f6bb20
0x140f6bd38: inc    r14d
0x140f6bd3b: cmp    r14d,DWORD PTR [r15+0xa0]
0x140f6bd42: mov    ebx,0x0
0x140f6bd47: jl     0x140f6bb02
0x140f6bd4d: mov    eax,DWORD PTR [rip+0x15a2929]        # 0x14250e67c
0x140f6bd53: inc    eax
0x140f6bd55: mov    DWORD PTR [rip+0x15a2921],eax        # 0x14250e67c
0x140f6bd5b: cmp    eax,DWORD PTR [rip+0x15a2917]        # 0x14250e678
0x140f6bd61: jne    0x140f6d6b0
0x140f6bd67: mov    r14d,ebx
0x140f6bd6a: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6bd72: jle    0x140f6bf6e
0x140f6bd78: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6bd80: mov    esi,ebx
0x140f6bd82: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6bd8a: jle    0x140f6bf5e
0x140f6bd90: movsxd rdi,r14d
0x140f6bd93: nop    DWORD PTR [rax+0x0]
0x140f6bd97: nop    WORD PTR [rax+rax*1+0x0]
0x140f6bda0: movsxd rax,esi
0x140f6bda3: imul   rbx,rax,0x70
0x140f6bda7: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bdae: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6bdb2: add    rcx,0x20
0x140f6bdb6: add    rcx,rbx
0x140f6bdb9: mov    edx,0x4
0x140f6bdbe: call   0x1400735c0
0x140f6bdc3: test   al,al
0x140f6bdc5: je     0x140f6bde3
0x140f6bdc7: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bdce: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6bdd2: add    rcx,0x20
0x140f6bdd6: add    rcx,rbx
0x140f6bdd9: mov    edx,0x4
0x140f6bdde: call   0x1400fcf20
0x140f6bde3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bdea: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6bdee: mov    eax,0x96
0x140f6bdf3: cmp    WORD PTR [rcx+rbx*1+0x30],ax
0x140f6bdf8: jl     0x140f6bf4d
0x140f6bdfe: add    rcx,0x20
0x140f6be02: add    rcx,rbx
0x140f6be05: xor    edx,edx
0x140f6be07: call   0x1400735c0
0x140f6be0c: test   al,al
0x140f6be0e: je     0x140f6bf4d
0x140f6be14: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6be1b: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6be1f: add    rcx,0x20
0x140f6be23: add    rcx,rbx
0x140f6be26: xor    edx,edx
0x140f6be28: call   0x1400fcf20
0x140f6be2d: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6be34: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6be38: add    rcx,0x20
0x140f6be3c: add    rcx,rbx
0x140f6be3f: mov    edx,0x5
0x140f6be44: call   0x1400fcf20
0x140f6be49: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6be50: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6be54: add    rcx,0x20
0x140f6be58: add    rcx,rbx
0x140f6be5b: mov    edx,0x6
0x140f6be60: call   0x1400fcf20
0x140f6be65: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6be6c: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6be70: add    rcx,0x20
0x140f6be74: add    rcx,rbx
0x140f6be77: mov    edx,0x7
0x140f6be7c: call   0x1400fcf20
0x140f6be81: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6be88: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6be8c: add    rcx,0x20
0x140f6be90: add    rcx,rbx
0x140f6be93: mov    edx,0x8
0x140f6be98: call   0x1400fcf20
0x140f6be9d: test   r14d,r14d
0x140f6bea0: jle    0x140f6bec2
0x140f6bea2: movsxd rcx,r14d
0x140f6bea5: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6beac: mov    rcx,QWORD PTR [rax+rcx*8-0x8]
0x140f6beb1: add    rcx,0x20
0x140f6beb5: add    rcx,rbx
0x140f6beb8: mov    edx,0x7
0x140f6bebd: call   0x1400fcf20
0x140f6bec2: mov    eax,DWORD PTR [r15+0xa0]
0x140f6bec9: dec    eax
0x140f6becb: cmp    r14d,eax
0x140f6bece: jge    0x140f6bef0
0x140f6bed0: movsxd rcx,r14d
0x140f6bed3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6beda: mov    rcx,QWORD PTR [rax+rcx*8+0x8]
0x140f6bedf: add    rcx,0x20
0x140f6bee3: add    rcx,rbx
0x140f6bee6: mov    edx,0x8
0x140f6beeb: call   0x1400fcf20
0x140f6bef0: test   esi,esi
0x140f6bef2: jle    0x140f6bf1a
0x140f6bef4: lea    eax,[rsi-0x1]
0x140f6bef7: movsxd rcx,eax
0x140f6befa: imul   rdx,rcx,0x70
0x140f6befe: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bf05: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6bf09: add    rcx,0x20
0x140f6bf0d: add    rcx,rdx
0x140f6bf10: mov    edx,0x6
0x140f6bf15: call   0x1400fcf20
0x140f6bf1a: mov    eax,DWORD PTR [r15+0xa4]
0x140f6bf21: dec    eax
0x140f6bf23: cmp    esi,eax
0x140f6bf25: jge    0x140f6bf4d
0x140f6bf27: lea    eax,[rsi+0x1]
0x140f6bf2a: movsxd rcx,eax
0x140f6bf2d: imul   rdx,rcx,0x70
0x140f6bf31: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6bf38: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6bf3c: add    rcx,0x20
0x140f6bf40: add    rcx,rdx
0x140f6bf43: mov    edx,0x5
0x140f6bf48: call   0x1400fcf20
0x140f6bf4d: inc    esi
0x140f6bf4f: cmp    esi,DWORD PTR [r15+0xa4]
0x140f6bf56: jl     0x140f6bda0
0x140f6bf5c: xor    ebx,ebx
0x140f6bf5e: inc    r14d
0x140f6bf61: cmp    r14d,DWORD PTR [r15+0xa0]
0x140f6bf68: jl     0x140f6bd80
0x140f6bf6e: inc    WORD PTR [rip+0x15a206b]        # 0x14250dfe0
0x140f6bf75: jmp    0x140f6d6b0
0x140f6bf7a: test   r14d,r14d
0x140f6bf7d: jle    0x140f6bade
0x140f6bf83: mov    r13d,0x64
0x140f6bf89: nop    DWORD PTR [rax+0x0]
0x140f6bf90: lea    rcx,[rip+0x15a26b1]        # 0x14250e648
0x140f6bf97: call   0x140070a80
0x140f6bf9c: mov    rcx,rax
0x140f6bf9f: call   0x140073560
0x140f6bfa4: mov    ecx,DWORD PTR [rip+0x15a26ce]        # 0x14250e678
0x140f6bfaa: dec    ecx
0x140f6bfac: cmp    r12d,ecx
0x140f6bfaf: sete   dil
0x140f6bfb3: movsxd rsi,eax
0x140f6bfb6: mov    rdx,rsi
0x140f6bfb9: lea    rcx,[rip+0x15a26a0]        # 0x14250e660
0x140f6bfc0: call   0x140070a70
0x140f6bfc5: movzx  ebx,WORD PTR [rax]
0x140f6bfc8: mov    rdx,rsi
0x140f6bfcb: lea    rcx,[rip+0x15a2676]        # 0x14250e648
0x140f6bfd2: call   0x140070a70
0x140f6bfd7: mov    r9d,r13d
0x140f6bfda: mov    BYTE PTR [rsp+0x20],dil
0x140f6bfdf: movzx  r8d,bx
0x140f6bfe3: movzx  edx,WORD PTR [rax]
0x140f6bfe6: mov    rcx,r15
0x140f6bfe9: call   0x140f71920
0x140f6bfee: mov    eax,DWORD PTR [rip+0x15a2684]        # 0x14250e678
0x140f6bff4: dec    eax
0x140f6bff6: cmp    r12d,eax
0x140f6bff9: jne    0x140f6c019
0x140f6bffb: mov    rdx,rsi
0x140f6bffe: lea    rcx,[rip+0x15a2643]        # 0x14250e648
0x140f6c005: call   0x1400fcbb0
0x140f6c00a: mov    rdx,rsi
0x140f6c00d: lea    rcx,[rip+0x15a264c]        # 0x14250e660
0x140f6c014: call   0x1400fcbb0
0x140f6c019: dec    r14d
0x140f6c01c: test   r14d,r14d
0x140f6c01f: jg     0x140f6bf90
0x140f6c025: jmp    0x140f6bae4
0x140f6c02a: xor    r12d,r12d
0x140f6c02d: cmp    r10w,0x5
0x140f6c032: jne    0x140f6c159
0x140f6c038: movsxd rdi,DWORD PTR [rip+0x15a215d]        # 0x14250e19c
0x140f6c03f: mov    ebx,r12d
0x140f6c042: cmp    DWORD PTR [r15+0xa4],r12d
0x140f6c049: jle    0x140f6c096
0x140f6c04b: mov    r14d,0x2
0x140f6c051: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6c058: movsxd rax,ebx
0x140f6c05b: imul   rcx,rax,0x70
0x140f6c05f: mov    rax,QWORD PTR [rdx+rdi*8]
0x140f6c063: add    rax,0x20
0x140f6c067: add    rcx,rax
0x140f6c06a: mov    edx,r14d
0x140f6c06d: call   0x1400735c0
0x140f6c072: test   al,al
0x140f6c074: je     0x140f6c085
0x140f6c076: movzx  r8d,bx
0x140f6c07a: movzx  edx,di
0x140f6c07d: mov    rcx,r15
0x140f6c080: call   0x140f706c0
0x140f6c085: inc    ebx
0x140f6c087: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6c08e: jl     0x140f6c051
0x140f6c090: mov    edi,DWORD PTR [rip+0x15a2106]        # 0x14250e19c
0x140f6c096: inc    edi
0x140f6c098: mov    DWORD PTR [rip+0x15a20fe],edi        # 0x14250e19c
0x140f6c09e: cmp    edi,DWORD PTR [rip+0x15a20f0]        # 0x14250e194
0x140f6c0a4: jne    0x140f6d6b0
0x140f6c0aa: mov    r14d,0x1
0x140f6c0b0: xor    dil,dil
0x140f6c0b3: mov    r13d,r12d
0x140f6c0b6: mov    DWORD PTR [rsp+0x40],r12d
0x140f6c0bb: cmp    DWORD PTR [r15+0xa0],r12d
0x140f6c0c2: jle    0x140f6c143
0x140f6c0c4: mov    ebx,r12d
0x140f6c0c7: cmp    DWORD PTR [r15+0xa4],r12d
0x140f6c0ce: jle    0x140f6c129
0x140f6c0d0: movsxd rsi,r13d
0x140f6c0d3: nop    DWORD PTR [rax+0x0]
0x140f6c0d7: nop    WORD PTR [rax+rax*1+0x0]
0x140f6c0e0: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6c0e7: movsxd rax,ebx
0x140f6c0ea: imul   rcx,rax,0x70
0x140f6c0ee: mov    rax,QWORD PTR [rdx+rsi*8]
0x140f6c0f2: add    rax,0x20
0x140f6c0f6: add    rcx,rax
0x140f6c0f9: xor    edx,edx
0x140f6c0fb: call   0x1400735c0
0x140f6c100: test   al,al
0x140f6c102: je     0x140f6c11e
0x140f6c104: movzx  r8d,bx
0x140f6c108: movzx  edx,r13w
0x140f6c10c: mov    rcx,r15
0x140f6c10f: call   0x140f70060
0x140f6c114: movzx  edi,dil
0x140f6c118: test   al,al
0x140f6c11a: cmovne edi,r14d
0x140f6c11e: inc    ebx
0x140f6c120: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6c127: jl     0x140f6c0e0
0x140f6c129: inc    r13d
0x140f6c12c: cmp    r13d,DWORD PTR [r15+0xa0]
0x140f6c133: jl     0x140f6c0c4
0x140f6c135: mov    DWORD PTR [rsp+0x40],r13d
0x140f6c13a: test   dil,dil
0x140f6c13d: jne    0x140f6c0b0
0x140f6c143: mov    rcx,r15
0x140f6c146: call   0x140f94260
0x140f6c14b: movzx  r10d,WORD PTR [rip+0x15a1e8d]        # 0x14250dfe0
0x140f6c153: mov    r14d,0x64
0x140f6c159: cmp    r10w,0x6
0x140f6c15e: jne    0x140f6d1a9
0x140f6c164: mov    eax,DWORD PTR [rip+0x15a2036]        # 0x14250e1a0
0x140f6c16a: test   eax,eax
0x140f6c16c: jne    0x140f6d191
0x140f6c172: mov    rcx,r15
0x140f6c175: call   0x140fada10
0x140f6c17a: mov    DWORD PTR [rsp+0x4c],r12d
0x140f6c17f: lea    rdi,[r15+0x280]
0x140f6c186: mov    rcx,rdi
0x140f6c189: call   0x140070480
0x140f6c18e: test   rax,rax
0x140f6c191: je     0x140f6c475
0x140f6c197: mov    r13,r12
0x140f6c19a: nop    WORD PTR [rax+rax*1+0x0]
0x140f6c1a0: mov    rdx,r13
0x140f6c1a3: mov    rcx,rdi
0x140f6c1a6: call   0x140070850
0x140f6c1ab: mov    rcx,QWORD PTR [rax]
0x140f6c1ae: movzx  ebx,WORD PTR [rcx+0x78]
0x140f6c1b2: mov    WORD PTR [rsp+0x44],bx
0x140f6c1b7: mov    rdx,r13
0x140f6c1ba: mov    rcx,rdi
0x140f6c1bd: call   0x140070850
0x140f6c1c2: mov    rcx,QWORD PTR [rax]
0x140f6c1c5: movzx  edx,WORD PTR [rcx+0x7a]
0x140f6c1c9: mov    WORD PTR [rsp+0x48],dx
0x140f6c1ce: mov    eax,0xffffffff
0x140f6c1d3: movzx  r12d,ax
0x140f6c1d7: movzx  esi,ax
0x140f6c1da: nop    WORD PTR [rax+rax*1+0x0]
0x140f6c1e0: test   r12w,r12w
0x140f6c1e4: jne    0x140f6c1ef
0x140f6c1e6: test   si,si
0x140f6c1e9: je     0x140f6c33f
0x140f6c1ef: movsx  edi,r12w
0x140f6c1f3: movsx  eax,bx
0x140f6c1f6: add    edi,eax
0x140f6c1f8: js     0x140f6c33f
0x140f6c1fe: cmp    edi,DWORD PTR [r15+0xa0]
0x140f6c205: jge    0x140f6c33f
0x140f6c20b: movsx  ebx,si
0x140f6c20e: movsx  eax,dx
0x140f6c211: add    ebx,eax
0x140f6c213: js     0x140f6c33a
0x140f6c219: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6c220: jge    0x140f6c33a
0x140f6c226: mov    rdx,r13
0x140f6c229: lea    rcx,[r15+0x280]
0x140f6c230: call   0x140070850
0x140f6c235: mov    rcx,QWORD PTR [rax]
0x140f6c238: sub    rcx,0xffffffffffffff80
0x140f6c23c: xor    edx,edx
0x140f6c23e: call   0x1400735c0
0x140f6c243: test   al,al
0x140f6c245: je     0x140f6c2f8
0x140f6c24b: movsxd rdi,edi
0x140f6c24e: movsxd rax,ebx
0x140f6c251: imul   rbx,rax,0x70
0x140f6c255: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c25c: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c260: add    rcx,0x20
0x140f6c264: add    rcx,rbx
0x140f6c267: xor    edx,edx
0x140f6c269: call   0x1400735c0
0x140f6c26e: test   al,al
0x140f6c270: je     0x140f6c292
0x140f6c272: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c279: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c27d: add    rcx,0x20
0x140f6c281: add    rcx,rbx
0x140f6c284: mov    edx,0xf
0x140f6c289: call   0x1400735c0
0x140f6c28e: test   al,al
0x140f6c290: je     0x140f6c2f8
0x140f6c292: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c299: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c29d: cmp    WORD PTR [rcx+rbx*1+0x30],0x64
0x140f6c2a3: jl     0x140f6c2f8
0x140f6c2a5: mov    ecx,0x5
0x140f6c2aa: call   0x140073560
0x140f6c2af: add    eax,0xa
0x140f6c2b2: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6c2b9: mov    rdx,QWORD PTR [rcx+rdi*8]
0x140f6c2bd: add    WORD PTR [rdx+rbx*1+0x30],ax
0x140f6c2c2: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c2c9: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c2cd: cmp    WORD PTR [rcx+rbx*1+0x3c],0x5a
0x140f6c2d3: jge    0x140f6c2dc
0x140f6c2d5: mov    WORD PTR [rcx+rbx*1+0x3c],0x5a
0x140f6c2dc: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c2e3: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c2e7: mov    edi,0xf9
0x140f6c2ec: cmp    WORD PTR [rcx+rbx*1+0x30],di
0x140f6c2f1: jle    0x140f6c2f8
0x140f6c2f3: mov    WORD PTR [rcx+rbx*1+0x30],di
0x140f6c2f8: movsx  r8,r12w
0x140f6c2fc: movsx  rbx,WORD PTR [rsp+0x44]
0x140f6c302: add    r8,rbx
0x140f6c305: mov    r8d,r8d
0x140f6c308: mov    rdx,QWORD PTR [r15+0x2b0]
0x140f6c30f: movsx  rcx,WORD PTR [rsp+0x48]
0x140f6c315: movsx  rax,si
0x140f6c319: add    rax,rcx
0x140f6c31c: mov    eax,eax
0x140f6c31e: imul   rcx,rax,0x70
0x140f6c322: mov    rax,QWORD PTR [rdx+r8*8]
0x140f6c326: cmp    WORD PTR [rax+rcx*1+0x30],r14w
0x140f6c32c: cmovg  r14w,WORD PTR [rax+rcx*1+0x30]
0x140f6c333: movzx  edx,WORD PTR [rsp+0x48]
0x140f6c338: jmp    0x140f6c33f
0x140f6c33a: movzx  ebx,WORD PTR [rsp+0x44]
0x140f6c33f: inc    si
0x140f6c342: cmp    si,0x1
0x140f6c346: jle    0x140f6c1e0
0x140f6c34c: inc    r12w
0x140f6c350: cmp    r12w,0x1
0x140f6c355: mov    eax,0xffffffff
0x140f6c35a: jle    0x140f6c1d7
0x140f6c360: mov    rdx,r13
0x140f6c363: lea    rcx,[r15+0x280]
0x140f6c36a: call   0x140070850
0x140f6c36f: mov    rcx,QWORD PTR [rax]
0x140f6c372: movzx  r12d,WORD PTR [rcx+0x90]
0x140f6c37a: mov    ecx,0x5
0x140f6c37f: call   0x140073560
0x140f6c384: add    ax,0xa
0x140f6c388: add    ax,r14w
0x140f6c38c: movsx  rsi,bx
0x140f6c390: movsx  rcx,WORD PTR [rsp+0x48]
0x140f6c396: imul   rdi,rcx,0x70
0x140f6c39a: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6c3a1: mov    rdx,QWORD PTR [rcx+rsi*8]
0x140f6c3a5: mov    WORD PTR [rdx+rdi*1+0x30],ax
0x140f6c3aa: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c3b1: mov    rcx,QWORD PTR [rax+rsi*8]
0x140f6c3b5: cmp    WORD PTR [rcx+rdi*1+0x30],r12w
0x140f6c3bb: jge    0x140f6c3c3
0x140f6c3bd: mov    WORD PTR [rcx+rdi*1+0x30],r12w
0x140f6c3c3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c3ca: mov    rcx,QWORD PTR [rax+rsi*8]
0x140f6c3ce: mov    eax,0xfa
0x140f6c3d3: cmp    WORD PTR [rcx+rdi*1+0x30],ax
0x140f6c3d8: jle    0x140f6c3df
0x140f6c3da: mov    WORD PTR [rcx+rdi*1+0x30],ax
0x140f6c3df: mov    ecx,0x15
0x140f6c3e4: call   0x140073560
0x140f6c3e9: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6c3f0: mov    rdx,QWORD PTR [rcx+rsi*8]
0x140f6c3f4: lea    ebx,[rax+0xa]
0x140f6c3f7: add    bx,WORD PTR [rdx+rdi*1+0x30]
0x140f6c3fc: mov    rdx,r13
0x140f6c3ff: lea    rdi,[r15+0x280]
0x140f6c406: mov    rcx,rdi
0x140f6c409: call   0x140070850
0x140f6c40e: mov    rcx,QWORD PTR [rax]
0x140f6c411: mov    WORD PTR [rcx+0x90],bx
0x140f6c418: mov    rdx,r13
0x140f6c41b: mov    rcx,rdi
0x140f6c41e: call   0x140070850
0x140f6c423: mov    rcx,QWORD PTR [rax]
0x140f6c426: mov    ebx,0x118
0x140f6c42b: cmp    WORD PTR [rcx+0x90],bx
0x140f6c432: jle    0x140f6c449
0x140f6c434: mov    rdx,r13
0x140f6c437: mov    rcx,rdi
0x140f6c43a: call   0x140070850
0x140f6c43f: mov    rcx,QWORD PTR [rax]
0x140f6c442: mov    WORD PTR [rcx+0x90],bx
0x140f6c449: mov    esi,DWORD PTR [rsp+0x4c]
0x140f6c44d: inc    esi
0x140f6c44f: mov    DWORD PTR [rsp+0x4c],esi
0x140f6c453: movsxd r13,esi
0x140f6c456: mov    rcx,rdi
0x140f6c459: call   0x140070480
0x140f6c45e: cmp    r13,rax
0x140f6c461: mov    r14d,0x64
0x140f6c467: jb     0x140f6c1a0
0x140f6c46d: mov    r13d,DWORD PTR [rsp+0x40]
0x140f6c472: xor    r12d,r12d
0x140f6c475: mov    edi,r12d
0x140f6c478: mov    DWORD PTR [rsp+0x78],r12d
0x140f6c47d: mov    eax,DWORD PTR [r15+0xa4]
0x140f6c484: test   eax,eax
0x140f6c486: jle    0x140f6c659
0x140f6c48c: nop    DWORD PTR [rax+0x0]
0x140f6c490: mov    r13d,r12d
0x140f6c493: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6c49b: jle    0x140f6c644
0x140f6c4a1: movsxd rax,edi
0x140f6c4a4: imul   rsi,rax,0x70
0x140f6c4a8: mov    QWORD PTR [rsp+0x60],rsi
0x140f6c4ad: nop    DWORD PTR [rax]
0x140f6c4b0: movsxd rbx,r13d
0x140f6c4b3: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c4ba: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f6c4be: add    rcx,0x20
0x140f6c4c2: add    rcx,rsi
0x140f6c4c5: xor    edx,edx
0x140f6c4c7: call   0x1400735c0
0x140f6c4cc: test   al,al
0x140f6c4ce: je     0x140f6c634
0x140f6c4d4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c4db: mov    rcx,QWORD PTR [rax+rbx*8]
0x140f6c4df: add    rcx,0x20
0x140f6c4e3: add    rcx,rsi
0x140f6c4e6: mov    edx,0xf
0x140f6c4eb: call   0x1400735c0
0x140f6c4f0: test   al,al
0x140f6c4f2: jne    0x140f6c634
0x140f6c4f8: xor    eax,eax
0x140f6c4fa: mov    WORD PTR [rsp+0x44],ax
0x140f6c4ff: mov    ecx,0xffffffff
0x140f6c504: movzx  r14d,cx
0x140f6c508: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6c510: movzx  ebx,cx
0x140f6c513: test   r14w,r14w
0x140f6c517: jne    0x140f6c522
0x140f6c519: test   bx,bx
0x140f6c51c: je     0x140f6c5bf
0x140f6c522: movsx  edx,r14w
0x140f6c526: add    edx,r13d
0x140f6c529: js     0x140f6c5af
0x140f6c52f: cmp    edx,DWORD PTR [r15+0xa0]
0x140f6c536: jge    0x140f6c5af
0x140f6c538: movsx  ecx,bx
0x140f6c53b: add    ecx,edi
0x140f6c53d: js     0x140f6c5af
0x140f6c53f: cmp    ecx,DWORD PTR [r15+0xa4]
0x140f6c546: jge    0x140f6c5af
0x140f6c548: movsxd rdi,edx
0x140f6c54b: movsxd rax,ecx
0x140f6c54e: imul   rsi,rax,0x70
0x140f6c552: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c559: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c55d: add    rcx,0x20
0x140f6c561: add    rcx,rsi
0x140f6c564: xor    edx,edx
0x140f6c566: call   0x1400735c0
0x140f6c56b: test   al,al
0x140f6c56d: je     0x140f6c58f
0x140f6c56f: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c576: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c57a: add    rcx,0x20
0x140f6c57e: add    rcx,rsi
0x140f6c581: mov    edx,0xf
0x140f6c586: call   0x1400735c0
0x140f6c58b: test   al,al
0x140f6c58d: je     0x140f6c5b6
0x140f6c58f: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c596: mov    rcx,QWORD PTR [rax+rdi*8]
0x140f6c59a: movzx  eax,WORD PTR [rsp+0x44]
0x140f6c59f: add    ax,WORD PTR [rcx+rsi*1+0x30]
0x140f6c5a4: mov    WORD PTR [rsp+0x44],ax
0x140f6c5a9: inc    r12w
0x140f6c5ad: jmp    0x140f6c5bb
0x140f6c5af: movzx  eax,WORD PTR [rsp+0x44]
0x140f6c5b4: jmp    0x140f6c5bf
0x140f6c5b6: movzx  eax,WORD PTR [rsp+0x44]
0x140f6c5bb: mov    edi,DWORD PTR [rsp+0x78]
0x140f6c5bf: inc    bx
0x140f6c5c2: cmp    bx,0x1
0x140f6c5c6: jle    0x140f6c513
0x140f6c5cc: inc    r14w
0x140f6c5d0: cmp    r14w,0x1
0x140f6c5d5: mov    ecx,0xffffffff
0x140f6c5da: jle    0x140f6c510
0x140f6c5e0: test   r12w,r12w
0x140f6c5e4: jle    0x140f6c62c
0x140f6c5e6: cwde
0x140f6c5e7: movsx  ecx,r12w
0x140f6c5eb: cdq
0x140f6c5ec: idiv   ecx
0x140f6c5ee: mov    r8d,eax
0x140f6c5f1: mov    eax,0x96
0x140f6c5f6: cmp    r8w,ax
0x140f6c5fa: jl     0x140f6c604
0x140f6c5fc: mov    r8d,0x95
0x140f6c602: jmp    0x140f6c611
0x140f6c604: cmp    r8w,0x64
0x140f6c609: jge    0x140f6c611
0x140f6c60b: mov    r8d,0x64
0x140f6c611: movsxd rcx,r13d
0x140f6c614: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c61b: mov    rcx,QWORD PTR [rax+rcx*8]
0x140f6c61f: mov    rsi,QWORD PTR [rsp+0x60]
0x140f6c624: mov    WORD PTR [rcx+rsi*1+0x30],r8w
0x140f6c62a: jmp    0x140f6c631
0x140f6c62c: mov    rsi,QWORD PTR [rsp+0x60]
0x140f6c631: xor    r12d,r12d
0x140f6c634: inc    r13d
0x140f6c637: cmp    r13d,DWORD PTR [r15+0xa0]
0x140f6c63e: jl     0x140f6c4b0
0x140f6c644: inc    edi
0x140f6c646: mov    DWORD PTR [rsp+0x78],edi
0x140f6c64a: mov    eax,DWORD PTR [r15+0xa4]
0x140f6c651: cmp    edi,eax
0x140f6c653: jl     0x140f6c490
0x140f6c659: cmp    DWORD PTR [rip+0x15afaa0],0x0        # 0x14251c100
0x140f6c660: je     0x140f6c7cb
0x140f6c666: mov    esi,r12d
0x140f6c669: mov    DWORD PTR [rsp+0x4c],r12d
0x140f6c66e: test   eax,eax
0x140f6c670: jle    0x140f6c7cb
0x140f6c676: data16 nop WORD PTR [rax+rax*1+0x0]
0x140f6c680: movzx  edx,si
0x140f6c683: mov    rcx,r15
0x140f6c686: call   0x140671ad0
0x140f6c68b: movzx  r8d,r12w
0x140f6c68f: test   ax,ax
0x140f6c692: je     0x140f6c7b8
0x140f6c698: cwde
0x140f6c699: mov    ebx,eax
0x140f6c69b: neg    ebx
0x140f6c69d: cmovs  ebx,eax
0x140f6c6a0: cdq
0x140f6c6a1: idiv   ebx
0x140f6c6a3: mov    r9d,eax
0x140f6c6a6: movzx  r11d,WORD PTR [r15+0xa0]
0x140f6c6ae: cmp    ax,0x1
0x140f6c6b2: jne    0x140f6c6b9
0x140f6c6b4: mov    r13d,r12d
0x140f6c6b7: jmp    0x140f6c6ca
0x140f6c6b9: cmp    r9w,0xffff
0x140f6c6be: jne    0x140f6c6ca
0x140f6c6c0: mov    r13d,DWORD PTR [r15+0xa0]
0x140f6c6c7: dec    r13d
0x140f6c6ca: movsxd rax,esi
0x140f6c6cd: imul   rdx,rax,0x70
0x140f6c6d1: movsxd rcx,r13d
0x140f6c6d4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c6db: mov    rcx,QWORD PTR [rax+rcx*8]
0x140f6c6df: movzx  edi,WORD PTR [rcx+rdx*1+0x30]
0x140f6c6e4: test   r11w,r11w
0x140f6c6e8: je     0x140f6c7b8
0x140f6c6ee: movsx  r14d,r9w
0x140f6c6f2: movsx  eax,r11w
0x140f6c6f6: cmp    eax,DWORD PTR [r15+0xa0]
0x140f6c6fd: jge    0x140f6c7a6
0x140f6c703: movsxd r10,r13d
0x140f6c706: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c70d: mov    r9,QWORD PTR [rax+r10*8]
0x140f6c711: movzx  eax,WORD PTR [r9+rdx*1+0x30]
0x140f6c717: cmp    di,ax
0x140f6c71a: jge    0x140f6c771
0x140f6c71c: mov    ecx,0x96
0x140f6c721: cmp    ax,cx
0x140f6c724: jge    0x140f6c72f
0x140f6c726: cmp    WORD PTR [r9+rdx*1+0x3a],0x32
0x140f6c72d: jl     0x140f6c771
0x140f6c72f: movzx  edi,ax
0x140f6c732: movzx  eax,r8w
0x140f6c736: shl    ax,0x2
0x140f6c73a: lea    ecx,[rax+r8*1]
0x140f6c73e: add    cx,cx
0x140f6c741: add    WORD PTR [r9+rdx*1+0x32],cx
0x140f6c747: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c74e: mov    rcx,QWORD PTR [rax+r10*8]
0x140f6c752: cmp    WORD PTR [rcx+rdx*1+0x32],0x64
0x140f6c758: jle    0x140f6c761
0x140f6c75a: mov    WORD PTR [rcx+rdx*1+0x32],0x64
0x140f6c761: inc    r8w
0x140f6c765: cmp    r8w,bx
0x140f6c769: jle    0x140f6c7a6
0x140f6c76b: movzx  r8d,bx
0x140f6c76f: jmp    0x140f6c7a6
0x140f6c771: test   r8w,r8w
0x140f6c775: jle    0x140f6c7a3
0x140f6c777: movsx  eax,r8w
0x140f6c77b: imul   ecx,eax,0xfffffff6
0x140f6c77e: add    WORD PTR [r9+rdx*1+0x32],cx
0x140f6c784: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c78b: mov    rcx,QWORD PTR [rax+r10*8]
0x140f6c78f: cmp    WORD PTR [rcx+rdx*1+0x32],0x0
0x140f6c795: jge    0x140f6c79d
0x140f6c797: mov    WORD PTR [rcx+rdx*1+0x32],r12w
0x140f6c79d: dec    r8w
0x140f6c7a1: jmp    0x140f6c7a6
0x140f6c7a3: mov    edi,r12d
0x140f6c7a6: add    r13d,r14d
0x140f6c7a9: sub    r11w,0x1
0x140f6c7ae: jne    0x140f6c6f2
0x140f6c7b4: mov    esi,DWORD PTR [rsp+0x4c]
0x140f6c7b8: inc    esi
0x140f6c7ba: mov    DWORD PTR [rsp+0x4c],esi
0x140f6c7be: cmp    esi,DWORD PTR [r15+0xa4]
0x140f6c7c5: jl     0x140f6c680
0x140f6c7cb: mov    rcx,r15
0x140f6c7ce: call   0x140fada10
0x140f6c7d3: mov    esi,r12d
0x140f6c7d6: cmp    DWORD PTR [r15+0xa4],0x0
0x140f6c7de: jle    0x140f6cb09
0x140f6c7e4: mov    r14d,0x19
0x140f6c7ea: nop    WORD PTR [rax+rax*1+0x0]
0x140f6c7f0: mov    edi,r12d
0x140f6c7f3: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6c7fb: jle    0x140f6c91b
0x140f6c801: movsxd rax,esi
0x140f6c804: imul   rbx,rax,0x70
0x140f6c808: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6c810: movsxd r8,edi
0x140f6c813: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c81a: mov    r9,QWORD PTR [rax+r8*8]
0x140f6c81e: movsx  eax,WORD PTR [r9+rbx*1+0x30]
0x140f6c824: cmp    eax,0x64
0x140f6c827: jl     0x140f6c846
0x140f6c829: lea    ecx,[rax-0x64]
0x140f6c82c: imul   ecx,ecx
0x140f6c82f: mov    eax,0x10624dd3
0x140f6c834: imul   ecx
0x140f6c836: sar    edx,0x6
0x140f6c839: mov    eax,edx
0x140f6c83b: shr    eax,0x1f
0x140f6c83e: add    edx,eax
0x140f6c840: sub    WORD PTR [r9+rbx*1+0x36],dx
0x140f6c846: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c84d: mov    r9,QWORD PTR [rax+r8*8]
0x140f6c851: movsx  eax,WORD PTR [r9+rbx*1+0x36]
0x140f6c857: mov    ecx,DWORD PTR [rip+0x15af64f]        # 0x14251beac
0x140f6c85d: cmp    eax,ecx
0x140f6c85f: jle    0x140f6c87d
0x140f6c861: test   ecx,ecx
0x140f6c863: jle    0x140f6c87d
0x140f6c865: sub    eax,ecx
0x140f6c867: imul   eax,eax,0x19
0x140f6c86a: cdq
0x140f6c86b: idiv   ecx
0x140f6c86d: cmp    eax,r14d
0x140f6c870: cmovg  eax,r14d
0x140f6c874: add    ax,cx
0x140f6c877: mov    WORD PTR [r9+rbx*1+0x36],ax
0x140f6c87d: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c884: mov    r8,QWORD PTR [rax+r8*8]
0x140f6c888: movsx  edx,WORD PTR [r8+rbx*1+0x32]
0x140f6c88e: cmp    edx,0x42
0x140f6c891: jl     0x140f6c8be
0x140f6c893: movsx  r9d,WORD PTR [r8+rbx*1+0x36]
0x140f6c899: mov    eax,0x96
0x140f6c89e: cmp    r9w,ax
0x140f6c8a2: jge    0x140f6c8be
0x140f6c8a4: mov    ecx,0xa6
0x140f6c8a9: sub    ecx,edx
0x140f6c8ab: cmp    r9d,ecx
0x140f6c8ae: jl     0x140f6c8be
0x140f6c8b0: mov    eax,0xa6
0x140f6c8b5: sub    ax,dx
0x140f6c8b8: mov    WORD PTR [r8+rbx*1+0x36],ax
0x140f6c8be: movzx  r8d,si
0x140f6c8c2: movzx  edx,di
0x140f6c8c5: mov    rcx,r15
0x140f6c8c8: call   0x140f94210
0x140f6c8cd: movsxd rdx,edi
0x140f6c8d0: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6c8d7: mov    rdx,QWORD PTR [rcx+rdx*8]
0x140f6c8db: mov    WORD PTR [rdx+rbx*1+0x34],ax
0x140f6c8e0: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6c8e7: movsxd rax,edi
0x140f6c8ea: mov    rdx,QWORD PTR [rcx+rax*8]
0x140f6c8ee: movsxd rax,edi
0x140f6c8f1: mov    rcx,QWORD PTR [rcx+rax*8]
0x140f6c8f5: cmp    WORD PTR [rcx+rbx*1+0x30],0x64
0x140f6c8fb: jge    0x140f6c906
0x140f6c8fd: mov    WORD PTR [rdx+rbx*1+0x4c],0x64
0x140f6c904: jmp    0x140f6c90c
0x140f6c906: mov    WORD PTR [rdx+rbx*1+0x4c],r12w
0x140f6c90c: inc    edi
0x140f6c90e: cmp    edi,DWORD PTR [r15+0xa0]
0x140f6c915: jl     0x140f6c810
0x140f6c91b: inc    esi
0x140f6c91d: mov    eax,DWORD PTR [r15+0xa4]
0x140f6c924: cmp    esi,eax
0x140f6c926: jl     0x140f6c7f0
0x140f6c92c: mov    ebx,r12d
0x140f6c92f: test   eax,eax
0x140f6c931: jle    0x140f6cb09
0x140f6c937: nop    WORD PTR [rax+rax*1+0x0]
0x140f6c940: mov    r11d,r12d
0x140f6c943: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6c94b: jle    0x140f6ca0a
0x140f6c951: movsxd rax,ebx
0x140f6c954: imul   rdi,rax,0x70
0x140f6c958: mov    QWORD PTR [rbp+0x230],rdi
0x140f6c95f: nop
0x140f6c960: movsxd rcx,r11d
0x140f6c963: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6c96a: mov    rcx,QWORD PTR [rax+rcx*8]
0x140f6c96e: cmp    WORD PTR [rcx+rdi*1+0x4c],0x64
0x140f6c974: jne    0x140f6c9fa
0x140f6c97a: mov    edi,0xffffffff
0x140f6c97f: movzx  r10d,di
0x140f6c983: movzx  r8d,di
0x140f6c987: test   r10w,r10w
0x140f6c98b: jne    0x140f6c993
0x140f6c98d: test   r8w,r8w
0x140f6c991: je     0x140f6c9dd
0x140f6c993: movsx  ecx,r10w
0x140f6c997: add    ecx,r11d
0x140f6c99a: js     0x140f6c9dd
0x140f6c99c: cmp    ecx,DWORD PTR [r15+0xa0]
0x140f6c9a3: jge    0x140f6c9dd
0x140f6c9a5: movsx  r9d,r8w
0x140f6c9a9: add    r9d,ebx
0x140f6c9ac: js     0x140f6c9dd
0x140f6c9ae: cmp    r9d,DWORD PTR [r15+0xa4]
0x140f6c9b5: jge    0x140f6c9dd
0x140f6c9b7: movsxd rdx,ecx
0x140f6c9ba: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6c9c1: movsxd rax,r9d
0x140f6c9c4: imul   r9,rax,0x70
0x140f6c9c8: mov    rax,QWORD PTR [rcx+rdx*8]
0x140f6c9cc: cmp    WORD PTR [rax+r9*1+0x4c],0x0
0x140f6c9d3: jne    0x140f6c9dd
0x140f6c9d5: mov    WORD PTR [rax+r9*1+0x4c],0x42
0x140f6c9dd: inc    r8w
0x140f6c9e1: cmp    r8w,0x1
0x140f6c9e6: jle    0x140f6c987
0x140f6c9e8: inc    r10w
0x140f6c9ec: cmp    r10w,0x1
0x140f6c9f1: jle    0x140f6c983
0x140f6c9f3: mov    rdi,QWORD PTR [rbp+0x230]
0x140f6c9fa: inc    r11d
0x140f6c9fd: cmp    r11d,DWORD PTR [r15+0xa0]
0x140f6ca04: jl     0x140f6c960
0x140f6ca0a: inc    ebx
0x140f6ca0c: mov    eax,DWORD PTR [r15+0xa4]
0x140f6ca13: cmp    ebx,eax
0x140f6ca15: jl     0x140f6c940
0x140f6ca1b: mov    ebx,r12d
0x140f6ca1e: test   eax,eax
0x140f6ca20: jle    0x140f6cb09
0x140f6ca26: data16 nop WORD PTR [rax+rax*1+0x0]
0x140f6ca30: mov    r11d,r12d
0x140f6ca33: cmp    DWORD PTR [r15+0xa0],0x0
0x140f6ca3b: jle    0x140f6cafa
0x140f6ca41: movsxd rax,ebx
0x140f6ca44: imul   rdi,rax,0x70
0x140f6ca48: mov    QWORD PTR [rbp+0x230],rdi
0x140f6ca4f: nop
0x140f6ca50: movsxd rcx,r11d
0x140f6ca53: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6ca5a: mov    rcx,QWORD PTR [rax+rcx*8]
0x140f6ca5e: cmp    WORD PTR [rcx+rdi*1+0x4c],0x42
0x140f6ca64: jne    0x140f6caea
0x140f6ca6a: mov    edi,0xffffffff
0x140f6ca6f: movzx  r10d,di
0x140f6ca73: movzx  r8d,di
0x140f6ca77: test   r10w,r10w
0x140f6ca7b: jne    0x140f6ca83
0x140f6ca7d: test   r8w,r8w
0x140f6ca81: je     0x140f6cacd
0x140f6ca83: movsx  ecx,r10w
0x140f6ca87: add    ecx,r11d
0x140f6ca8a: js     0x140f6cacd
0x140f6ca8c: cmp    ecx,DWORD PTR [r15+0xa0]
0x140f6ca93: jge    0x140f6cacd
0x140f6ca95: movsx  r9d,r8w
0x140f6ca99: add    r9d,ebx
0x140f6ca9c: js     0x140f6cacd
0x140f6ca9e: cmp    r9d,DWORD PTR [r15+0xa4]
0x140f6caa5: jge    0x140f6cacd
0x140f6caa7: movsxd rdx,ecx
0x140f6caaa: mov    rcx,QWORD PTR [r15+0x2b0]
0x140f6cab1: movsxd rax,r9d
0x140f6cab4: imul   r9,rax,0x70
0x140f6cab8: mov    rax,QWORD PTR [rcx+rdx*8]
0x140f6cabc: cmp    WORD PTR [rax+r9*1+0x4c],0x0
0x140f6cac3: jne    0x140f6cacd
0x140f6cac5: mov    WORD PTR [rax+r9*1+0x4c],0x21
0x140f6cacd: inc    r8w
0x140f6cad1: cmp    r8w,0x1
0x140f6cad6: jle    0x140f6ca77
0x140f6cad8: inc    r10w
0x140f6cadc: cmp    r10w,0x1
0x140f6cae1: jle    0x140f6ca73
0x140f6cae3: mov    rdi,QWORD PTR [rbp+0x230]
0x140f6caea: inc    r11d
0x140f6caed: cmp    r11d,DWORD PTR [r15+0xa0]
0x140f6caf4: jl     0x140f6ca50
0x140f6cafa: inc    ebx
0x140f6cafc: cmp    ebx,DWORD PTR [r15+0xa4]
0x140f6cb03: jl     0x140f6ca30
0x140f6cb09: mov    rcx,r15
0x140f6cb0c: call   0x140f6f070
0x140f6cb11: mov    rax,QWORD PTR [rip+0x15af5d0]        # 0x14251c0e8
0x140f6cb18: test   rax,rax
0x140f6cb1b: je     0x140f6cb39
0x140f6cb1d: cmp    QWORD PTR [rax+0x8],0x0
0x140f6cb22: je     0x140f6cb39
0x140f6cb24: cmp    QWORD PTR [rax+0x10],0x0
0x140f6cb29: je     0x140f6cb39
0x140f6cb2b: cmp    QWORD PTR [rax+0x20],0x0
0x140f6cb30: je     0x140f6cb39
0x140f6cb32: cmp    QWORD PTR [rax+0x30],0x0
0x140f6cb37: jne    0x140f6cbb7
0x140f6cb39: lea    rcx,[r15+0x238]
0x140f6cb40: call   0x140070480
0x140f6cb45: movsxd rcx,DWORD PTR [rip+0x15af26c]        # 0x14251bdb8
0x140f6cb4c: cmp    rax,rcx
0x140f6cb4f: jb     0x140f6cbb7
0x140f6cb51: cmp    DWORD PTR [rip+0x15a150c],0x0        # 0x14250e064
0x140f6cb58: jne    0x140f6cbb7
0x140f6cb5a: lea    rdx,[rip+0x7f94e7]        # 0x141766048 ; 'Too many distinct subregions (over by '
0x140f6cb61: lea    rcx,[rbp+0x18]
0x140f6cb65: call   0x140069780
0x140f6cb6a: nop
0x140f6cb6b: lea    rcx,[r15+0x238]
0x140f6cb72: call   0x140070480
0x140f6cb77: sub    eax,DWORD PTR [rip+0x15af23b]        # 0x14251bdb8
0x140f6cb7d: lea    rdx,[rbp+0x18]
0x140f6cb81: mov    ecx,eax
0x140f6cb83: call   0x140545610
0x140f6cb88: lea    rdx,[rip+0x6c47a1]        # 0x141631330 ; ')'
0x140f6cb8f: lea    rcx,[rbp+0x18]
0x140f6cb93: call   0x140070b90
0x140f6cb98: mov    edx,0x1f
0x140f6cb9d: lea    rcx,[rbp+0x18]
0x140f6cba1: call   0x140762ed0
0x140f6cba6: nop
0x140f6cba7: lea    rcx,[rbp+0x18]
0x140f6cbab: call   0x140069460
0x140f6cbb0: mov    al,0x1
0x140f6cbb2: jmp    0x140f6d6b2
0x140f6cbb7: mov    rcx,r15
0x140f6cbba: call   0x140fc6b10
0x140f6cbbf: lea    rcx,[r15+0xc0]
0x140f6cbc6: mov    r8d,DWORD PTR [r15+0xa4]
0x140f6cbcd: mov    edx,DWORD PTR [r15+0xa0]
0x140f6cbd4: call   0x140fc6970
0x140f6cbd9: lea    rdx,[rsp+0x58]
0x140f6cbde: lea    rcx,[r15+0x238]
0x140f6cbe5: call   0x140070870
0x140f6cbea: lea    rdx,[rbp-0x70]
0x140f6cbee: lea    rcx,[r15+0x238]
0x140f6cbf5: call   0x140070860
0x140f6cbfa: lea    r8,[rbp-0x70]
0x140f6cbfe: lea    rdx,[rsp+0x44]
0x140f6cc03: lea    rcx,[rsp+0x58]
0x140f6cc08: call   0x140070450
0x140f6cc0d: xor    edx,edx
0x140f6cc0f: movzx  ecx,BYTE PTR [rax]
0x140f6cc12: call   0x140066de0
0x140f6cc17: test   al,al
0x140f6cc19: je     0x140f6cd95
0x140f6cc1f: nop
0x140f6cc20: lea    rcx,[rsp+0x58]
0x140f6cc25: call   0x140070440
0x140f6cc2a: mov    rdi,QWORD PTR [rax]
0x140f6cc2d: mov    QWORD PTR [rdi+0xb4],0x0
0x140f6cc38: lea    rdx,[rbp-0x78]
0x140f6cc3c: lea    rcx,[rdi+0x80]
0x140f6cc43: call   0x140070870
0x140f6cc48: lea    rdx,[rbp-0x68]
0x140f6cc4c: lea    rcx,[rdi+0x80]
0x140f6cc53: call   0x140070860
0x140f6cc58: lea    rdx,[rsp+0x60]
0x140f6cc5d: lea    rcx,[rdi+0x98]
0x140f6cc64: call   0x140070870
0x140f6cc69: lea    rdx,[rbp+0x230]
0x140f6cc70: lea    rcx,[rdi+0x98]
0x140f6cc77: call   0x140070860
0x140f6cc7c: lea    r8,[rbp-0x68]
0x140f6cc80: lea    rdx,[rsp+0x48]
0x140f6cc85: lea    rcx,[rbp-0x78]
0x140f6cc89: call   0x140070450
0x140f6cc8e: xor    edx,edx
0x140f6cc90: movzx  ecx,BYTE PTR [rax]
0x140f6cc93: call   0x140066de0
0x140f6cc98: test   al,al
0x140f6cc9a: je     0x140f6cd66
0x140f6cca0: lea    rcx,[rsp+0x60]
0x140f6cca5: call   0x140070440
0x140f6ccaa: movzx  ebx,WORD PTR [rax]
0x140f6ccad: lea    rcx,[rbp-0x78]
0x140f6ccb1: call   0x140070440
0x140f6ccb6: movzx  r8d,bx
0x140f6ccba: movzx  edx,WORD PTR [rax]
0x140f6ccbd: mov    rcx,r15
0x140f6ccc0: call   0x140f6ff80
0x140f6ccc5: test   al,al
0x140f6ccc7: je     0x140f6cd2f
0x140f6ccc9: lea    rcx,[rsp+0x60]
0x140f6ccce: call   0x140070440
0x140f6ccd3: movsx  ebx,WORD PTR [rax]
0x140f6ccd6: lea    rcx,[rbp-0x78]
0x140f6ccda: call   0x140070440
0x140f6ccdf: movsx  edx,WORD PTR [rax]
0x140f6cce2: mov    r8d,ebx
0x140f6cce5: mov    rcx,r15
0x140f6cce8: call   0x140fcc000
0x140f6cced: test   al,al
0x140f6ccef: je     0x140f6cd2f
0x140f6ccf1: inc    DWORD PTR [rdi+0xb8]
0x140f6ccf7: mov    rbx,QWORD PTR [r15+0x2b0]
0x140f6ccfe: lea    rcx,[rbp-0x78]
0x140f6cd02: call   0x140070440
0x140f6cd07: movsx  rcx,WORD PTR [rax]
0x140f6cd0b: mov    rbx,QWORD PTR [rbx+rcx*8]
0x140f6cd0f: lea    rcx,[rsp+0x60]
0x140f6cd14: call   0x140070440
0x140f6cd19: movsx  rcx,WORD PTR [rax]
0x140f6cd1d: imul   rax,rcx,0x70
0x140f6cd21: cmp    WORD PTR [rbx+rax*1+0x3e],0x42
0x140f6cd27: jl     0x140f6cd2f
0x140f6cd29: inc    DWORD PTR [rdi+0xb4]
0x140f6cd2f: lea    rcx,[rbp-0x78]
0x140f6cd33: call   0x140070a60
0x140f6cd38: lea    rcx,[rsp+0x60]
0x140f6cd3d: call   0x140070a60
0x140f6cd42: lea    r8,[rbp-0x68]
0x140f6cd46: lea    rdx,[rsp+0x48]
0x140f6cd4b: lea    rcx,[rbp-0x78]
0x140f6cd4f: call   0x140070450
0x140f6cd54: xor    edx,edx
0x140f6cd56: movzx  ecx,BYTE PTR [rax]
0x140f6cd59: call   0x140066de0
0x140f6cd5e: test   al,al
0x140f6cd60: jne    0x140f6cca0
0x140f6cd66: lea    rcx,[rsp+0x58]
0x140f6cd6b: call   0x140070430
0x140f6cd70: lea    r8,[rbp-0x70]
0x140f6cd74: lea    rdx,[rsp+0x44]
0x140f6cd79: lea    rcx,[rsp+0x58]
0x140f6cd7e: call   0x140070450
0x140f6cd83: xor    edx,edx
0x140f6cd85: movzx  ecx,BYTE PTR [rax]
0x140f6cd88: call   0x140066de0
0x140f6cd8d: test   al,al
0x140f6cd8f: jne    0x140f6cc20
0x140f6cd95: movzx  ebx,r12w
0x140f6cd99: mov    WORD PTR [rsp+0x40],bx
0x140f6cd9e: lea    rdi,[r15+0x298]
0x140f6cda5: movzx  esi,WORD PTR [rsp+0x40]
0x140f6cdaa: nop    WORD PTR [rax+rax*1+0x0]
0x140f6cdb0: cmp    bx,0x1
0x140f6cdb4: sete   dl
0x140f6cdb7: mov    rcx,r15
0x140f6cdba: call   0x140fa6bb0
0x140f6cdbf: mov    WORD PTR [rsp+0x48],r12w
0x140f6cdc5: mov    rcx,rdi
0x140f6cdc8: call   0x140070480
0x140f6cdcd: test   rax,rax
0x140f6cdd0: je     0x140f6d165
0x140f6cdd6: mov    r14,r12
0x140f6cdd9: nop    DWORD PTR [rax+0x0]
0x140f6cde0: test   bx,bx
0x140f6cde3: jne    0x140f6ce19
0x140f6cde5: mov    rdx,r14
0x140f6cde8: mov    rcx,rdi
0x140f6cdeb: call   0x140070850
0x140f6cdf0: mov    rbx,QWORD PTR [rax]
0x140f6cdf3: mov    rdx,r14
0x140f6cdf6: mov    rcx,rdi
0x140f6cdf9: call   0x140070850
0x140f6cdfe: mov    rcx,QWORD PTR [rax]
0x140f6ce01: add    rcx,0x78
0x140f6ce05: call   0x140070a80
0x140f6ce0a: mov    rdx,rax
0x140f6ce0d: lea    rcx,[rbx+0xd8]
0x140f6ce14: call   0x140070a90
0x140f6ce19: mov    rdx,r14
0x140f6ce1c: mov    rcx,rdi
0x140f6ce1f: call   0x140070850
0x140f6ce24: mov    rcx,QWORD PTR [rax]
0x140f6ce27: add    rcx,0xd8
0x140f6ce2e: call   0x140070a80
0x140f6ce33: test   rax,rax
0x140f6ce36: je     0x140f6cf34
0x140f6ce3c: xor    eax,eax
0x140f6ce3e: mov    r13d,eax
0x140f6ce41: mov    rdx,r14
0x140f6ce44: mov    rcx,rdi
0x140f6ce47: call   0x140070850
0x140f6ce4c: mov    rcx,QWORD PTR [rax]
0x140f6ce4f: add    rcx,0x78
0x140f6ce53: mov    rdx,r13
0x140f6ce56: call   0x140070a70
0x140f6ce5b: movzx  ebx,WORD PTR [rax]
0x140f6ce5e: mov    rdx,r14
0x140f6ce61: mov    rcx,rdi
0x140f6ce64: call   0x140070850
0x140f6ce69: mov    rcx,QWORD PTR [rax]
0x140f6ce6c: add    rcx,0x90
0x140f6ce73: mov    rdx,r13
0x140f6ce76: call   0x140070a70
0x140f6ce7b: xor    r9d,r9d
0x140f6ce7e: movzx  r8d,WORD PTR [rax]
0x140f6ce82: movzx  edx,bx
0x140f6ce85: mov    rcx,r15
0x140f6ce88: call   0x140f97fa0
0x140f6ce8d: movzx  esi,ax
0x140f6ce90: cmp    ax,0x63
0x140f6ce94: jge    0x140f6ce9b
0x140f6ce96: mov    esi,0x63
0x140f6ce9b: test   r12w,r12w
0x140f6ce9f: jle    0x140f6cee9
0x140f6cea1: mov    rdx,r14
0x140f6cea4: mov    rcx,rdi
0x140f6cea7: call   0x140070850
0x140f6ceac: mov    rcx,QWORD PTR [rax]
0x140f6ceaf: add    rcx,0xd8
0x140f6ceb6: movsx  rbx,r12w
0x140f6ceba: lea    rdx,[rbx-0x1]
0x140f6cebe: call   0x140070a70
0x140f6cec3: cmp    si,WORD PTR [rax]
0x140f6cec6: jle    0x140f6cee9
0x140f6cec8: mov    rdx,r14
0x140f6cecb: mov    rcx,rdi
0x140f6cece: call   0x140070850
0x140f6ced3: mov    rcx,QWORD PTR [rax]
0x140f6ced6: add    rcx,0xd8
0x140f6cedd: lea    rdx,[rbx-0x1]
0x140f6cee1: call   0x140070a70
0x140f6cee6: movzx  esi,WORD PTR [rax]
0x140f6cee9: mov    rdx,r14
0x140f6ceec: mov    rcx,rdi
0x140f6ceef: call   0x140070850
0x140f6cef4: mov    rcx,QWORD PTR [rax]
0x140f6cef7: add    rcx,0xd8
0x140f6cefe: mov    rdx,r13
0x140f6cf01: call   0x140070a70
0x140f6cf06: mov    WORD PTR [rax],si
0x140f6cf09: inc    r12w
0x140f6cf0d: mov    rdx,r14
0x140f6cf10: mov    rcx,rdi
0x140f6cf13: call   0x140070850
0x140f6cf18: movsx  r13,r12w
0x140f6cf1c: mov    rcx,QWORD PTR [rax]
0x140f6cf1f: add    rcx,0xd8
0x140f6cf26: call   0x140070a80
0x140f6cf2b: cmp    r13,rax
0x140f6cf2e: jb     0x140f6ce41
0x140f6cf34: mov    rdx,r14
0x140f6cf37: mov    rcx,rdi
0x140f6cf3a: call   0x140070850
0x140f6cf3f: mov    rcx,QWORD PTR [rax]
0x140f6cf42: movzx  ebx,WORD PTR [rcx+0xf2]
0x140f6cf49: mov    rdx,r14
0x140f6cf4c: mov    rcx,rdi
0x140f6cf4f: call   0x140070850
0x140f6cf54: mov    rcx,QWORD PTR [rax]
0x140f6cf57: lea    r9,[rsp+0x44]
0x140f6cf5c: movzx  r8d,bx
0x140f6cf60: movzx  edx,WORD PTR [rcx+0xf0]
0x140f6cf67: mov    rcx,r15
0x140f6cf6a: call   0x140fa11e0
0x140f6cf6f: mov    r13,rax
0x140f6cf72: test   rax,rax
0x140f6cf75: je     0x140f6d13b
0x140f6cf7b: lea    rcx,[rax+0xd8]
0x140f6cf82: call   0x140070a80
0x140f6cf87: test   rax,rax
0x140f6cf8a: jne    0x140f6d0d4
0x140f6cf90: cmp    BYTE PTR [rip+0x15a165e],al        # 0x14250e5f4
0x140f6cf96: jne    0x140f6d046
0x140f6cf9c: mov    DWORD PTR [rsp+0x20],0x1
0x140f6cfa4: mov    r9d,0x40
0x140f6cfaa: mov    r8d,0xa
0x140f6cfb0: lea    rdx,[rip+0x705069]        # 0x141672020 ; 'errorlog.txt'
0x140f6cfb7: lea    rcx,[rbp+0x40]
0x140f6cfbb: call   0x140288040
0x140f6cfc0: nop
0x140f6cfc1: lea    rcx,[rbp+0x40]
0x140f6cfc5: call   0x140548570
0x140f6cfca: test   al,al
0x140f6cfcc: je     0x140f6d02d
0x140f6cfce: lea    rdx,[rip+0x7f9023]        # 0x141765ff8 ; 'A world gen error from DF '
0x140f6cfd5: lea    rcx,[rbp+0x40]
0x140f6cfd9: call   0x1400716d0
0x140f6cfde: mov    rcx,rax
0x140f6cfe1: lea    rdx,[rip+0x15aec40]        # 0x14251bc28
0x140f6cfe8: call   0x1400716b0
0x140f6cfed: mov    rcx,rax
0x140f6cff0: lea    rdx,[rip+0x7f8fd9]        # 0x141765fd0 ; ' will be logged after parameter dump.'
0x140f6cff7: call   0x1400716d0
0x140f6cffc: lea    rdx,[rip+0xffffffffff1048ad]        # 0x1400718b0
0x140f6d003: mov    rcx,rax
0x140f6d006: call   QWORD PTR [rip+0x6934d4]        # 0x1416004e0
0x140f6d00c: lea    rdx,[rip+0xffffffffff10489d]        # 0x1400718b0
0x140f6d013: lea    rcx,[rbp+0x40]
0x140f6d017: call   QWORD PTR [rip+0x6934c3]        # 0x1416004e0
0x140f6d01d: lea    rdx,[rbp+0x40]
0x140f6d021: lea    rcx,[rip+0x15aec30]        # 0x14251bc58
0x140f6d028: call   0x140f9d2a0
0x140f6d02d: lea    rcx,[rbp+0x40]
0x140f6d031: call   0x1402473a0
0x140f6d036: mov    BYTE PTR [rip+0x15a15b7],0x1        # 0x14250e5f4
0x140f6d03d: lea    rcx,[rbp+0x40]
0x140f6d041: call   0x1402443d0
0x140f6d046: lea    rdx,[rip+0x7f97fb]        # 0x141766848 ; 'Error sorting rivers: working with '
0x140f6d04d: lea    rcx,[rbp+0x18]
0x140f6d051: call   0x140069780
0x140f6d056: nop
0x140f6d057: movsx  ecx,WORD PTR [rsp+0x48]
0x140f6d05c: lea    rdx,[rbp+0x18]
0x140f6d060: call   0x140545610
0x140f6d065: lea    rdx,[rip+0x7f9804]        # 0x141766870 ; ' ran into '
0x140f6d06c: lea    rcx,[rbp+0x18]
0x140f6d070: call   0x140070b90
0x140f6d075: xor    r12d,r12d
0x140f6d078: mov    ebx,r12d
0x140f6d07b: mov    rcx,rdi
0x140f6d07e: call   0x140070480
0x140f6d083: test   rax,rax
0x140f6d086: je     0x140f6d0bf
0x140f6d088: mov    r14d,r12d
0x140f6d08b: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6d090: mov    rdx,r14
0x140f6d093: mov    rcx,rdi
0x140f6d096: call   0x140070850
0x140f6d09b: cmp    QWORD PTR [rax],r13
0x140f6d09e: je     0x140f6d0b4
0x140f6d0a0: inc    ebx
0x140f6d0a2: movsxd r14,ebx
0x140f6d0a5: mov    rcx,rdi
0x140f6d0a8: call   0x140070480
0x140f6d0ad: cmp    r14,rax
0x140f6d0b0: jb     0x140f6d090
0x140f6d0b2: jmp    0x140f6d0bf
0x140f6d0b4: lea    rdx,[rbp+0x18]
0x140f6d0b8: mov    ecx,ebx
0x140f6d0ba: call   0x140545610
0x140f6d0bf: lea    rcx,[rbp+0x18]
0x140f6d0c3: call   0x140544f90
0x140f6d0c8: nop
0x140f6d0c9: lea    rcx,[rbp+0x18]
0x140f6d0cd: call   0x140069460
0x140f6d0d2: jmp    0x140f6d13e
0x140f6d0d4: movsx  rdx,WORD PTR [rsp+0x44]
0x140f6d0da: lea    rcx,[r13+0xd8]
0x140f6d0e1: call   0x140070a70
0x140f6d0e6: cmp    WORD PTR [rax],si
0x140f6d0e9: jle    0x140f6d13b
0x140f6d0eb: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6d0f0: movsx  rdx,WORD PTR [rsp+0x44]
0x140f6d0f6: lea    rcx,[r13+0xd8]
0x140f6d0fd: call   0x140070a70
0x140f6d102: mov    WORD PTR [rax],si
0x140f6d105: movzx  eax,WORD PTR [rsp+0x44]
0x140f6d10a: inc    ax
0x140f6d10d: mov    WORD PTR [rsp+0x44],ax
0x140f6d112: movsx  r14,ax
0x140f6d116: lea    rcx,[r13+0xd8]
0x140f6d11d: call   0x140070a80
0x140f6d122: cmp    r14,rax
0x140f6d125: jae    0x140f6d13b
0x140f6d127: mov    rdx,r14
0x140f6d12a: lea    rcx,[r13+0xd8]
0x140f6d131: call   0x140070a70
0x140f6d136: cmp    WORD PTR [rax],si
0x140f6d139: jg     0x140f6d0f0
0x140f6d13b: xor    r12d,r12d
0x140f6d13e: movzx  ebx,WORD PTR [rsp+0x48]
0x140f6d143: inc    bx
0x140f6d146: mov    WORD PTR [rsp+0x48],bx
0x140f6d14b: movsx  r14,bx
0x140f6d14f: mov    rcx,rdi
0x140f6d152: call   0x140070480
0x140f6d157: cmp    r14,rax
0x140f6d15a: movzx  ebx,WORD PTR [rsp+0x40]
0x140f6d15f: jb     0x140f6cde0
0x140f6d165: inc    bx
0x140f6d168: mov    WORD PTR [rsp+0x40],bx
0x140f6d16d: cmp    bx,0x2
0x140f6d171: jl     0x140f6cdb0
0x140f6d177: mov    rcx,r15
0x140f6d17a: call   0x140fa6ac0
0x140f6d17f: mov    rcx,r15
0x140f6d182: call   0x140fa6870
0x140f6d187: mov    eax,DWORD PTR [rip+0x15a1013]        # 0x14250e1a0
0x140f6d18d: test   eax,eax
0x140f6d18f: je     0x140f6d204
0x140f6d191: cmp    eax,DWORD PTR [rip+0x15a100d]        # 0x14250e1a4
0x140f6d197: jl     0x140f6d204
0x140f6d199: mov    rcx,r15
0x140f6d19c: call   0x140fa6f90
0x140f6d1a1: movzx  r10d,WORD PTR [rip+0x15a0e37]        # 0x14250dfe0
0x140f6d1a9: cmp    r10w,0x7
0x140f6d1ae: jne    0x140f6d37e
0x140f6d1b4: mov    edx,r12d
0x140f6d1b7: mov    ebx,r12d
0x140f6d1ba: mov    eax,DWORD PTR [r15+0xa0]
0x140f6d1c1: test   eax,eax
0x140f6d1c3: jle    0x140f6d266
0x140f6d1c9: mov    esi,DWORD PTR [r15+0xa4]
0x140f6d1d0: mov    r11,r12
0x140f6d1d3: mov    edi,eax
0x140f6d1d5: mov    r14d,0x96
0x140f6d1db: nop    DWORD PTR [rax+rax*1+0x0]
0x140f6d1e0: test   esi,esi
0x140f6d1e2: jle    0x140f6d258
0x140f6d1e4: mov    rax,QWORD PTR [r15+0x2b0]
0x140f6d1eb: mov    rcx,QWORD PTR [r11+rax*1]
0x140f6d1ef: add    rcx,0x30
0x140f6d1f3: mov    r9,rsi
0x140f6d1f6: movzx  r8d,WORD PTR [rcx]
0x140f6d1fa: cmp    r8w,r14w
0x140f6d1fe: jl     0x140f6d245
0x140f6d200: inc    edx
0x140f6d202: jmp    0x140f6d24e
0x140f6d204: lea    rcx,[rbp+0x230]
0x140f6d20b: call   0x140fd05e0
0x140f6d210: mov    rcx,r15
0x140f6d213: call   0x140fa8730
0x140f6d218: lea    rcx,[rbp+0x230]
0x140f6d21f: call   0x140fd0660
0x140f6d224: cmp    rax,0x32
0x140f6d228: jge    0x140f6d6b0
0x140f6d22e: mov    eax,DWORD PTR [rip+0x15a0f6c]        # 0x14250e1a0
0x140f6d234: test   eax,eax
0x140f6d236: je     0x140f6d210
0x140f6d238: cmp    eax,DWORD PTR [rip+0x15a0f66]        # 0x14250e1a4
0x140f6d23e: jl     0x140f6d210
0x140f6d240: jmp    0x140f6d6b0
0x140f6d245: cmp    r8w,0x64
0x140f6d24a: jge    0x140f6d24e
0x140f6d24c: inc    ebx
0x140f6d24e: add    rcx,0x70
0x140f6d252: sub    r9,0x1
0x140f6d256: jne    0x140f6d1f6
0x140f6d258: add    r11,0x8
0x140f6d25c: sub    rdi,0x1
0x140f6d260: jne    0x140f6d1e0
0x140f6d266: mov    rax,QWORD PTR [rip+0x15aee7b]        # 0x14251c0e8
0x140f6d26d: test   rax,rax
0x140f6d270: je     0x140f6d27d
0x140f6d272: cmp    QWORD PTR [rax+0x8],0x0
0x140f6d277: jne    0x140f6d65b
0x140f6d27d: mov    eax,DWORD PTR [r15+0xa4]
0x140f6d284: imul   eax,DWORD PTR [r15+0xa0]
0x140f6d28c: sub    eax,ebx
0x140f6d28e: sub    eax,edx
0x140f6d290: cmp    eax,DWORD PTR [rip+0x15aed3e]        # 0x14251bfd4
0x140f6d296: jge    0x140f6d2d1
0x140f6d298: cmp    DWORD PTR [rip+0x15a0dc9],0x0        # 0x14250e068
0x140f6d29f: jne    0x140f6d2d1
0x140f6d2a1: lea    rdx,[rip+0x7f9530]        # 0x1417667d8 ; 'Not enough medium altitude locations after erosion'
0x140f6d2a8: lea    rcx,[rbp+0x18]
0x140f6d2ac: call   0x140069780
0x140f6d2b1: nop
0x140f6d2b2: mov    edx,0x20
0x140f6d2b7: lea    rcx,[rbp+0x18]
0x140f6d2bb: call   0x140762ed0
0x140f6d2c0: nop
0x140f6d2c1: lea    rcx,[rbp+0x18]
0x140f6d2c5: call   0x140069460
0x140f6d2ca: mov    al,0x1
0x140f6d2cc: jmp    0x140f6d6b2
0x140f6d2d1: cmp    DWORD PTR [rip+0x15aea54],0x0        # 0x14251bd2c
0x140f6d2d8: jg     0x140f6d2e3
0x140f6d2da: cmp    DWORD PTR [rip+0x15aea4f],0x0        # 0x14251bd30
0x140f6d2e1: jle    0x140f6d335
0x140f6d2e3: cmp    ebx,DWORD PTR [rip+0x15aecef]        # 0x14251bfd8
0x140f6d2e9: jge    0x140f6d335
0x140f6d2eb: cmp    DWORD PTR [rip+0x15a0d7a],0x0        # 0x14250e06c
0x140f6d2f2: jne    0x140f6d335
0x140f6d2f4: lea    rdx,[rip+0x7f9515]        # 0x141766810 ; 'Not enough low altitude locations after erosion: '
0x140f6d2fb: lea    rcx,[rbp+0x18]
0x140f6d2ff: call   0x140069780
0x140f6d304: nop
0x140f6d305: sub    ebx,DWORD PTR [rip+0x15aeccd]        # 0x14251bfd8
0x140f6d30b: lea    rdx,[rbp+0x18]
0x140f6d30f: mov    ecx,ebx
0x140f6d311: call   0x140545610
0x140f6d316: mov    edx,0x21
0x140f6d31b: lea    rcx,[rbp+0x18]
0x140f6d31f: call   0x140762ed0
0x140f6d324: nop
0x140f6d325: lea    rcx,[rbp+0x18]
0x140f6d329: call   0x140069460
0x140f6d32e: mov    al,0x1
0x140f6d330: jmp    0x140f6d6b2
0x140f6d335: cmp    edx,DWORD PTR [rip+0x15aeca1]        # 0x14251bfdc
0x140f6d33b: jge    0x140f6d65b
0x140f6d341: cmp    DWORD PTR [rip+0x15a0d28],0x0        # 0x14250e070
0x140f6d348: jne    0x140f6d65b
0x140f6d34e: lea    rdx,[rip+0x7f9423]        # 0x141766778 ; 'Not enough high altitude locations after erosion'
0x140f6d355: lea    rcx,[rbp+0x18]
0x140f6d359: call   0x140069780
0x140f6d35e: nop
0x140f6d35f: mov    edx,0x22
0x140f6d364: lea    rcx,[rbp+0x18]
0x140f6d368: call   0x140762ed0
0x140f6d36d: nop
0x140f6d36e: lea    rcx,[rbp+0x18]
0x140f6d372: call   0x140069460
0x140f6d377: mov    al,0x1
0x140f6d379: jmp    0x140f6d6b2
0x140f6d37e: cmp    r10w,0x8
0x140f6d383: jne    0x140f6d39d
0x140f6d385: mov    rcx,r15
0x140f6d388: call   0x140f79300
0x140f6d38d: mov    rcx,r15
0x140f6d390: call   0x140f91c20
0x140f6d395: movzx  r10d,WORD PTR [rip+0x15a0c43]        # 0x14250dfe0
0x140f6d39d: cmp    r10w,0x9
0x140f6d3a2: jne    0x140f6d65b
0x140f6d3a8: mov    BYTE PTR [rsp+0x48],0x0
0x140f6d3ad: cmp    BYTE PTR [rip+0x16f3ac4],0x0        # 0x142660e78
0x140f6d3b4: je     0x140f6d508
0x140f6d3ba: movsxd rbx,DWORD PTR [rip+0x15a1237]        # 0x14250e5f8
0x140f6d3c1: lea    rcx,[rip+0x15a1248]        # 0x14250e610
0x140f6d3c8: call   0x140070480
0x140f6d3cd: cmp    rbx,rax
0x140f6d3d0: jae    0x140f6d3ff
0x140f6d3d2: mov    rdx,rbx
0x140f6d3d5: lea    rcx,[rip+0x15a1234]        # 0x14250e610
0x140f6d3dc: call   0x140070850
0x140f6d3e1: mov    rbx,QWORD PTR [rax]
0x140f6d3e4: mov    rcx,rbx
0x140f6d3e7: call   0x1409262c0
0x140f6d3ec: mov    rcx,rbx
0x140f6d3ef: call   0x1409260d0
0x140f6d3f4: inc    DWORD PTR [rip+0x15a11fe]        # 0x14250e5f8
0x140f6d3fa: jmp    0x140f6d6b0
0x140f6d3ff: movsxd rbx,DWORD PTR [rip+0x15a11f6]        # 0x14250e5fc
0x140f6d406: lea    rcx,[rip+0x148686b]        # 0x1423f3c78
0x140f6d40d: call   0x140070480
0x140f6d412: lea    rcx,[rip+0x148685f]        # 0x1423f3c78
0x140f6d419: cmp    rbx,rax
0x140f6d41c: jae    0x140f6d439
0x140f6d41e: mov    rdx,rbx
0x140f6d421: call   0x140070850
0x140f6d426: mov    rcx,QWORD PTR [rax]
0x140f6d429: call   0x14096e3a0
0x140f6d42e: inc    DWORD PTR [rip+0x15a11c8]        # 0x14250e5fc
0x140f6d434: jmp    0x140f6d6b0
0x140f6d439: movsxd rbx,DWORD PTR [rip+0x15a11c0]        # 0x14250e600
0x140f6d440: call   0x140070480
0x140f6d445: cmp    rbx,rax
0x140f6d448: jae    0x140f6d46c
0x140f6d44a: mov    rdx,rbx
0x140f6d44d: lea    rcx,[rip+0x1486824]        # 0x1423f3c78
0x140f6d454: call   0x140070850
0x140f6d459: mov    rcx,QWORD PTR [rax]
0x140f6d45c: call   0x14096d620
0x140f6d461: inc    DWORD PTR [rip+0x15a1199]        # 0x14250e600
0x140f6d467: jmp    0x140f6d6b0
0x140f6d46c: lea    rcx,[r15+0x178]
0x140f6d473: call   0x140070480
0x140f6d478: movsxd rdx,DWORD PTR [rip+0x15a1185]        # 0x14250e604
0x140f6d47f: cmp    rdx,rax
0x140f6d482: jae    0x140f6d497
0x140f6d484: mov    rcx,r15
0x140f6d487: call   0x140f8e770
0x140f6d48c: inc    DWORD PTR [rip+0x15a1172]        # 0x14250e604
0x140f6d492: jmp    0x140f6d6b0
0x140f6d497: lea    rcx,[rip+0x14864d2]        # 0x1423f3970
0x140f6d49e: call   0x14145c4d0
0x140f6d4a3: lea    rcx,[rip+0x14864c6]        # 0x1423f3970
0x140f6d4aa: call   0x14145a1a0
0x140f6d4af: lea    rcx,[rip+0x14864ba]        # 0x1423f3970
0x140f6d4b6: call   0x14145a760
0x140f6d4bb: lea    rcx,[rip+0x14864ae]        # 0x1423f3970
0x140f6d4c2: call   0x14145c0a0
0x140f6d4c7: lea    rcx,[rip+0x14864a2]        # 0x1423f3970
0x140f6d4ce: call   0x14145c320
0x140f6d4d3: lea    rcx,[rip+0x1486496]        # 0x1423f3970
0x140f6d4da: call   0x141528190
0x140f6d4df: lea    rcx,[rip+0x148648a]        # 0x1423f3970
0x140f6d4e6: call   0x141526ee0
0x140f6d4eb: lea    rcx,[rip+0x148647e]        # 0x1423f3970
0x140f6d4f2: call   0x141526bd0
0x140f6d4f7: call   0x140eceb30
0x140f6d4fc: inc    WORD PTR [rip+0x15a0add]        # 0x14250dfe0
0x140f6d503: jmp    0x140f6d6b0
0x140f6d508: call   QWORD PTR [rip+0x692b82]        # 0x141600090
0x140f6d50e: mov    edi,eax
0x140f6d510: mov    ebx,eax
0x140f6d512: lea    rdx,[rsp+0x48]
0x140f6d517: mov    rcx,r15
0x140f6d51a: call   0x140f885d0
0x140f6d51f: test   al,al
0x140f6d521: jne    0x140f6d53a
0x140f6d523: call   QWORD PTR [rip+0x692b67]        # 0x141600090
0x140f6d529: mov    ebx,eax
0x140f6d52b: mov    ecx,eax
0x140f6d52d: sub    ecx,edi
0x140f6d52f: cmp    ecx,0x64
0x140f6d532: jb     0x140f6d512
0x140f6d534: cmp    eax,edi
0x140f6d536: jb     0x140f6d512
0x140f6d538: jmp    0x140f6d550
0x140f6d53a: cmp    BYTE PTR [rsp+0x48],0x0
0x140f6d53f: je     0x140f6d548
0x140f6d541: mov    al,0x2
0x140f6d543: jmp    0x140f6d6b2
0x140f6d548: mov    rcx,r15
0x140f6d54b: call   0x140f6dc20
0x140f6d550: mov    eax,ebx
0x140f6d552: mov    ecx,DWORD PTR [rip+0x15a17b0]        # 0x14250ed08
0x140f6d558: sub    eax,ecx
0x140f6d55a: cmp    eax,0x3e8
0x140f6d55f: ja     0x140f6d569
0x140f6d561: cmp    ebx,ecx
0x140f6d563: jae    0x140f6d6b0
0x140f6d569: mov    DWORD PTR [rip+0x15a1799],ebx        # 0x14250ed08
0x140f6d56f: mov    r14,r12
0x140f6d572: mov    esi,r12d
0x140f6d575: lea    rcx,[rip+0x15aebbc]        # 0x14251c138
0x140f6d57c: call   0x140070480
0x140f6d581: lea    ebx,[rax-0x1]
0x140f6d584: lea    r15d,[rax-0x3e8]
0x140f6d58b: cmp    ebx,r15d
0x140f6d58e: jl     0x140f6d6b0
0x140f6d594: test   ebx,ebx
0x140f6d596: js     0x140f6d5d1
0x140f6d598: movsxd rdx,ebx
0x140f6d59b: lea    rcx,[rip+0x15aeb96]        # 0x14251c138
0x140f6d5a2: call   0x140070850
0x140f6d5a7: mov    rdi,QWORD PTR [rax]
0x140f6d5aa: mov    eax,DWORD PTR [rip+0x15a175c]        # 0x14250ed0c
0x140f6d5b0: cmp    DWORD PTR [rdi+0x20],eax
0x140f6d5b3: jle    0x140f6d5d1
0x140f6d5b5: mov    rax,QWORD PTR [rdi]
0x140f6d5b8: mov    rcx,rdi
0x140f6d5bb: call   QWORD PTR [rax+0xf0]
0x140f6d5c1: cmp    eax,esi
0x140f6d5c3: jle    0x140f6d5ca
0x140f6d5c5: mov    esi,eax
0x140f6d5c7: mov    r14,rdi
0x140f6d5ca: dec    ebx
0x140f6d5cc: cmp    ebx,r15d
0x140f6d5cf: jge    0x140f6d594
0x140f6d5d1: test   r14,r14
0x140f6d5d4: je     0x140f6d6b0
0x140f6d5da: mov    eax,DWORD PTR [r14+0x20]
0x140f6d5de: mov    DWORD PTR [rip+0x15a1728],eax        # 0x14250ed0c
0x140f6d5e4: lea    rcx,[rbp+0x18]
0x140f6d5e8: call   0x140070cc0
0x140f6d5ed: nop
0x140f6d5ee: lea    rcx,[rbp+0x40]
0x140f6d5f2: call   0x1400736b0
0x140f6d5f7: or     DWORD PTR [rbp+0x40],0x2
0x140f6d5fb: mov    rax,QWORD PTR [r14]
0x140f6d5fe: mov    BYTE PTR [rsp+0x20],0x0
0x140f6d603: mov    r9b,0x1
0x140f6d606: lea    r8,[rbp+0x40]
0x140f6d60a: lea    rdx,[rbp+0x18]
0x140f6d60e: mov    rcx,r14
0x140f6d611: call   QWORD PTR [rax+0xd0]
0x140f6d617: lea    rdx,[rip+0x6eeebe]        # 0x14165c4dc ; '[R]'
0x140f6d61e: lea    rcx,[rbp+0x18]
0x140f6d622: call   0x140070b90
0x140f6d627: lea    rdx,[rbp+0x18]
0x140f6d62b: lea    rcx,[rip+0x15a1696]        # 0x14250ecc8
0x140f6d632: call   0x140d69ba0
0x140f6d637: mov    DWORD PTR [rip+0x15a16ba],r12d        # 0x14250ecf8
0x140f6d63e: mov    edx,0x4e
0x140f6d643: lea    rcx,[rip+0x15a167e]        # 0x14250ecc8
0x140f6d64a: call   0x140d69970
0x140f6d64f: nop
0x140f6d650: lea    rcx,[rbp+0x18]
0x140f6d654: call   0x140069460
0x140f6d659: jmp    0x140f6d6b0
0x140f6d65b: inc    r10w
0x140f6d65f: mov    WORD PTR [rip+0x15a0979],r10w        # 0x14250dfe0
0x140f6d667: cmp    r10w,0x9
0x140f6d66c: jne    0x140f6d6b0
0x140f6d66e: mov    QWORD PTR [rip+0x15a10af],0x0        # 0x14250e728
0x140f6d679: lea    rcx,[rip+0x15a10b0]        # 0x14250e730
0x140f6d680: call   0x1400708c0
0x140f6d685: lea    rcx,[rip+0x15a1684]        # 0x14250ed10
0x140f6d68c: call   0x1400708c0
0x140f6d691: lea    rcx,[rip+0x15a10b0]        # 0x14250e748
0x140f6d698: call   0x1400708c0
0x140f6d69d: lea    rcx,[rip+0x15a10bc]        # 0x14250e760
0x140f6d6a4: call   0x1400708c0
0x140f6d6a9: mov    DWORD PTR [rip+0x15a10c8],r12d        # 0x14250e778
0x140f6d6b0: xor    al,al
0x140f6d6b2: mov    rcx,QWORD PTR [rbp+0x330]
0x140f6d6b9: xor    rcx,rsp
0x140f6d6bc: call   0x1415530b0
0x140f6d6c1: lea    r11,[rsp+0x480]
0x140f6d6c9: mov    rbx,QWORD PTR [r11+0x38]
0x140f6d6cd: mov    rsi,QWORD PTR [r11+0x40]
0x140f6d6d1: mov    rdi,QWORD PTR [r11+0x48]
0x140f6d6d5: movaps xmm6,XMMWORD PTR [r11-0x10]
0x140f6d6da: movaps xmm7,XMMWORD PTR [r11-0x20]
0x140f6d6df: movaps xmm8,XMMWORD PTR [r11-0x30]
0x140f6d6e4: movaps xmm9,XMMWORD PTR [r11-0x40]
0x140f6d6e9: mov    rsp,r11
0x140f6d6ec: pop    r15
0x140f6d6ee: pop    r14
0x140f6d6f0: pop    r13
0x140f6d6f2: pop    r12
0x140f6d6f4: pop    rbp
0x140f6d6f5: ret
0x140f6d6f6: xchg   ax,ax
0x140f6d6f8: ret    0xf67f
0x140f6d6fb: add    ah,cl
0x140f6d6fd: jg     0x140f6d6f5
0x140f6d6ff: add    al,ah
0x140f6d701: jg     0x140f6d6f9
0x140f6d703: add    dl,dh
0x140f6d705: jg     0x140f6d6fd
0x140f6d707: add    ah,bh
0x140f6d709: jg     0x140f6d701
0x140f6d70b: add    BYTE PTR [rax],cl
0x140f6d70d: xor    dh,0x0
0x140f6d710: pop    rdx
0x140f6d711: xor    dh,0x0
0x140f6d714: pop    rdx
0x140f6d715: xor    dh,0x0
0x140f6d718: add    DWORD PTR [rcx-0x7fa5ff0a],eax
0x140f6d71e: test   BYTE PTR [rax],0x58
0x140f6d721: xor    esi,0xf6805a00
0x140f6d727: add    BYTE PTR [rdx-0x80],bl
0x140f6d72a: test   BYTE PTR [rax],0x5a
0x140f6d72d: xor    dh,0x0
0x140f6d730: lods   eax,DWORD PTR [rsi]
0x140f6d731: (bad)
0x140f6d732: test   BYTE PTR [rax],0xbc
0x140f6d735: (bad)
0x140f6d736: test   BYTE PTR [rax],0x1f
0x140f6d739: xor    esi,0x0
0x140f6d73c: retf
0x140f6d73d: (bad)
0x140f6d73e: test   BYTE PTR [rax],0x1f
0x140f6d741: xor    esi,0x0
0x140f6d744: fiadd  DWORD PTR [rdx-0x7d16ff0a]
0x140f6d74a: test   BYTE PTR [rax],0xf8
0x140f6d74d: (bad)
0x140f6d74e: test   BYTE PTR [rax],0xc
0x140f6d751: mov    esi,?
0x140f6d753: add    BYTE PTR [rip+0x3100f68c],bl        # 0x171f7cde5
0x140f6d759: mov    esi,?
0x140f6d75b: add    BYTE PTR [rbp-0x74],al
0x140f6d75e: test   BYTE PTR [rax],0x4c
0x140f6d761: mov    esi,?
0x140f6d763: add    BYTE PTR [rbx-0x74],dl
0x140f6d766: test   BYTE PTR [rax],0x93
0x140f6d769: mov    esi,?
0x140f6d76b: add    BYTE PTR [rsi+0x2600f68c],ch
0x140f6d771: lea    esi,(bad)
0x140f6d772: test   BYTE PTR [rax],0xc6
0x140f6d775: mov    esi,?
0x140f6d777: add    BYTE PTR [rsi],ah
0x140f6d779: lea    esi,(bad)
0x140f6d77a: test   BYTE PTR [rax],0xde
0x140f6d77d: mov    esi,?
0x140f6d77f: add    dh,dh
0x140f6d781: mov    esi,?
0x140f6d783: add    BYTE PTR [rsi],cl
0x140f6d785: lea    esi,(bad)
0x140f6d786: test   BYTE PTR [rax],0xec
0x140f6d789: mov    cl,0xf6
0x140f6d78b: add    ah,ch
0x140f6d78d: mov    cl,0xf6
0x140f6d78f: add    ah,ch
0x140f6d791: mov    cl,0xf6
0x140f6d793: add    ch,dl
0x140f6d795: mov    cl,0xf6
0x140f6d797: add    ah,ch
0x140f6d799: mov    cl,0xf6
0x140f6d79b: add    BYTE PTR [rip+0xffffffffec00f6b2],bl        # 0x12cf7ce53
0x140f6d7a1: mov    cl,0xf6
0x140f6d7a3: add    ah,ch
0x140f6d7a5: mov    cl,0xf6
0x140f6d7a7: add    ah,ch
0x140f6d7a9: mov    cl,0xf6
0x140f6d7ab: add    ah,ch
0x140f6d7ad: mov    cl,0xf6
