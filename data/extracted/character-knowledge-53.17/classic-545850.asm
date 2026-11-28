; classic PE:6aea11a5:0272d000; chapter-ordinal; RVA 0x545850..0x545d70; code ends 0x545d20
0x00545850: mov    QWORD PTR [rsp+0x8],rbx
0x00545855: push   rdi
0x00545856: sub    rsp,0x20
0x0054585a: mov    QWORD PTR [rdx+0x10],0x0
0x00545862: mov    rbx,rdx
0x00545865: cmp    QWORD PTR [rdx+0x18],0xf
0x0054586a: mov    edi,ecx
0x0054586c: mov    rax,rdx
0x0054586f: jbe    0x140545874
0x00545871: mov    rax,QWORD PTR [rdx]
0x00545874: mov    BYTE PTR [rax],0x0
0x00545877: test   r8b,r8b
0x0054587a: je     0x14054596a
0x00545880: test   edi,edi
0x00545882: jns    0x14054589b
0x00545884: neg    edi
0x00545886: lea    rdx,[rip+0x111ed2f]        # 0x1416645bc ; literal="-"
0x0054588d: mov    r8d,0x1
0x00545893: mov    rcx,rbx
0x00545896: call   0x140070e90
0x0054589b: mov    rdx,rbx
0x0054589e: mov    ecx,edi
0x005458a0: call   0x140542fb0
0x005458a5: mov    eax,0x66666667
0x005458aa: mov    ecx,edi
0x005458ac: imul   edi
0x005458ae: sar    edx,0x2
0x005458b1: mov    eax,edx
0x005458b3: shr    eax,0x1f
0x005458b6: add    edx,eax
0x005458b8: lea    eax,[rdx+rdx*4]
0x005458bb: add    eax,eax
0x005458bd: sub    ecx,eax
0x005458bf: sub    ecx,0x1
0x005458c2: je     0x14054593a
0x005458c4: sub    ecx,0x1
0x005458c7: je     0x14054590a
0x005458c9: cmp    ecx,0x1
0x005458cc: je     0x1405458da
0x005458ce: lea    rdx,[rip+0x10bcfff]        # 0x1416028d4 ; literal="th"
0x005458d5: jmp    0x140545d06
0x005458da: mov    eax,0x51eb851f
0x005458df: imul   edi
0x005458e1: sar    edx,0x5
0x005458e4: mov    eax,edx
0x005458e6: shr    eax,0x1f
0x005458e9: add    edx,eax
0x005458eb: imul   eax,edx,0x64
0x005458ee: lea    rdx,[rip+0x10bcfdf]        # 0x1416028d4 ; literal="th"
0x005458f5: sub    edi,eax
0x005458f7: lea    rax,[rip+0x10bcfd2]        # 0x1416028d0 ; literal="rd"
0x005458fe: cmp    edi,0xd
0x00545901: cmovne rdx,rax
0x00545905: jmp    0x140545d06
0x0054590a: mov    eax,0x51eb851f
0x0054590f: imul   edi
0x00545911: sar    edx,0x5
0x00545914: mov    eax,edx
0x00545916: shr    eax,0x1f
0x00545919: add    edx,eax
0x0054591b: imul   eax,edx,0x64
0x0054591e: lea    rdx,[rip+0x10bcfaf]        # 0x1416028d4 ; literal="th"
0x00545925: sub    edi,eax
0x00545927: lea    rax,[rip+0x10bcfae]        # 0x1416028dc ; literal="nd"
0x0054592e: cmp    edi,0xc
0x00545931: cmovne rdx,rax
0x00545935: jmp    0x140545d06
0x0054593a: mov    eax,0x51eb851f
0x0054593f: imul   edi
0x00545941: sar    edx,0x5
0x00545944: mov    eax,edx
0x00545946: shr    eax,0x1f
0x00545949: add    edx,eax
0x0054594b: imul   eax,edx,0x64
0x0054594e: lea    rdx,[rip+0x10bcf7f]        # 0x1416028d4 ; literal="th"
0x00545955: sub    edi,eax
0x00545957: lea    rax,[rip+0x10bcf7a]        # 0x1416028d8 ; literal="st"
0x0054595e: cmp    edi,0xb
0x00545961: cmovne rdx,rax
0x00545965: jmp    0x140545d06
0x0054596a: test   edi,edi
0x0054596c: jns    0x140545985
0x0054596e: neg    edi
0x00545970: lea    rdx,[rip+0x1127679]        # 0x14166cff0 ; literal="Negative "
0x00545977: mov    r8d,0x9
0x0054597d: mov    rcx,rbx
0x00545980: call   0x140070e90
0x00545985: cmp    edi,0x13
0x00545988: ja     0x140545c10
0x0054598e: lea    rdx,[rip+0xffffffffffaba66b]        # 0x140000000
0x00545995: movsxd rax,edi
0x00545998: mov    ecx,DWORD PTR [rdx+rax*4+0x545d20]
0x0054599f: add    rcx,rdx
0x005459a2: jmp    rcx
0x005459a4: mov    r8d,0x6
0x005459aa: lea    rdx,[rip+0x112764b]        # 0x14166cffc ; literal="Zeroth"
0x005459b1: mov    rcx,rbx
0x005459b4: mov    rbx,QWORD PTR [rsp+0x30]
0x005459b9: add    rsp,0x20
0x005459bd: pop    rdi
0x005459be: jmp    0x140070e90
0x005459c3: mov    r8d,0x5
0x005459c9: lea    rdx,[rip+0x1127610]        # 0x14166cfe0 ; literal="First"
0x005459d0: mov    rcx,rbx
0x005459d3: mov    rbx,QWORD PTR [rsp+0x30]
0x005459d8: add    rsp,0x20
0x005459dc: pop    rdi
0x005459dd: jmp    0x140070e90
0x005459e2: mov    r8d,0x6
0x005459e8: lea    rdx,[rip+0x11275f9]        # 0x14166cfe8 ; literal="Second"
0x005459ef: mov    rcx,rbx
0x005459f2: mov    rbx,QWORD PTR [rsp+0x30]
0x005459f7: add    rsp,0x20
0x005459fb: pop    rdi
0x005459fc: jmp    0x140070e90
0x00545a01: mov    r8d,0x5
0x00545a07: lea    rdx,[rip+0x112764a]        # 0x14166d058 ; literal="Third"
0x00545a0e: mov    rcx,rbx
0x00545a11: mov    rbx,QWORD PTR [rsp+0x30]
0x00545a16: add    rsp,0x20
0x00545a1a: pop    rdi
0x00545a1b: jmp    0x140070e90
0x00545a20: mov    r8d,0x6
0x00545a26: lea    rdx,[rip+0x1127633]        # 0x14166d060 ; literal="Fourth"
0x00545a2d: mov    rcx,rbx
0x00545a30: mov    rbx,QWORD PTR [rsp+0x30]
0x00545a35: add    rsp,0x20
0x00545a39: pop    rdi
0x00545a3a: jmp    0x140070e90
0x00545a3f: mov    r8d,0x5
0x00545a45: lea    rdx,[rip+0x11275fc]        # 0x14166d048 ; literal="Fifth"
0x00545a4c: mov    rcx,rbx
0x00545a4f: mov    rbx,QWORD PTR [rsp+0x30]
0x00545a54: add    rsp,0x20
0x00545a58: pop    rdi
0x00545a59: jmp    0x140070e90
0x00545a5e: mov    r8d,0x5
0x00545a64: lea    rdx,[rip+0x11275e5]        # 0x14166d050 ; literal="Sixth"
0x00545a6b: mov    rcx,rbx
0x00545a6e: mov    rbx,QWORD PTR [rsp+0x30]
0x00545a73: add    rsp,0x20
0x00545a77: pop    rdi
0x00545a78: jmp    0x140070e90
0x00545a7d: mov    r8d,0x7
0x00545a83: lea    rdx,[rip+0x11275ae]        # 0x14166d038 ; literal="Seventh"
0x00545a8a: mov    rcx,rbx
0x00545a8d: mov    rbx,QWORD PTR [rsp+0x30]
0x00545a92: add    rsp,0x20
0x00545a96: pop    rdi
0x00545a97: jmp    0x140070e90
0x00545a9c: mov    r8d,0x6
0x00545aa2: lea    rdx,[rip+0x1127597]        # 0x14166d040 ; literal="Eighth"
0x00545aa9: mov    rcx,rbx
0x00545aac: mov    rbx,QWORD PTR [rsp+0x30]
0x00545ab1: add    rsp,0x20
0x00545ab5: pop    rdi
0x00545ab6: jmp    0x140070e90
0x00545abb: mov    r8d,0x5
0x00545ac1: lea    rdx,[rip+0x1127560]        # 0x14166d028 ; literal="Ninth"
0x00545ac8: mov    rcx,rbx
0x00545acb: mov    rbx,QWORD PTR [rsp+0x30]
0x00545ad0: add    rsp,0x20
0x00545ad4: pop    rdi
0x00545ad5: jmp    0x140070e90
0x00545ada: mov    r8d,0x5
0x00545ae0: lea    rdx,[rip+0x1127549]        # 0x14166d030 ; literal="Tenth"
0x00545ae7: mov    rcx,rbx
0x00545aea: mov    rbx,QWORD PTR [rsp+0x30]
0x00545aef: add    rsp,0x20
0x00545af3: pop    rdi
0x00545af4: jmp    0x140070e90
0x00545af9: mov    r8d,0x8
0x00545aff: lea    rdx,[rip+0x11275c2]        # 0x14166d0c8 ; literal="Eleventh"
0x00545b06: mov    rcx,rbx
0x00545b09: mov    rbx,QWORD PTR [rsp+0x30]
0x00545b0e: add    rsp,0x20
0x00545b12: pop    rdi
0x00545b13: jmp    0x140070e90
0x00545b18: mov    r8d,0x7
0x00545b1e: lea    rdx,[rip+0x11275b3]        # 0x14166d0d8 ; literal="Twelfth"
0x00545b25: mov    rcx,rbx
0x00545b28: mov    rbx,QWORD PTR [rsp+0x30]
0x00545b2d: add    rsp,0x20
0x00545b31: pop    rdi
0x00545b32: jmp    0x140070e90
0x00545b37: mov    r8d,0xa
0x00545b3d: lea    rdx,[rip+0x1127564]        # 0x14166d0a8 ; literal="Thirteenth"
0x00545b44: mov    rcx,rbx
0x00545b47: mov    rbx,QWORD PTR [rsp+0x30]
0x00545b4c: add    rsp,0x20
0x00545b50: pop    rdi
0x00545b51: jmp    0x140070e90
0x00545b56: mov    r8d,0xa
0x00545b5c: lea    rdx,[rip+0x1127555]        # 0x14166d0b8 ; literal="Fourteenth"
0x00545b63: mov    rcx,rbx
0x00545b66: mov    rbx,QWORD PTR [rsp+0x30]
0x00545b6b: add    rsp,0x20
0x00545b6f: pop    rdi
0x00545b70: jmp    0x140070e90
0x00545b75: mov    r8d,0x9
0x00545b7b: lea    rdx,[rip+0x1127506]        # 0x14166d088 ; literal="Fifteenth"
0x00545b82: mov    rcx,rbx
0x00545b85: mov    rbx,QWORD PTR [rsp+0x30]
0x00545b8a: add    rsp,0x20
0x00545b8e: pop    rdi
0x00545b8f: jmp    0x140070e90
0x00545b94: mov    r8d,0x9
0x00545b9a: lea    rdx,[rip+0x11274f7]        # 0x14166d098 ; literal="Sixteenth"
0x00545ba1: mov    rcx,rbx
0x00545ba4: mov    rbx,QWORD PTR [rsp+0x30]
0x00545ba9: add    rsp,0x20
0x00545bad: pop    rdi
0x00545bae: jmp    0x140070e90
0x00545bb3: mov    r8d,0xb
0x00545bb9: lea    rdx,[rip+0x11274a8]        # 0x14166d068 ; literal="Seventeenth"
0x00545bc0: mov    rcx,rbx
0x00545bc3: mov    rbx,QWORD PTR [rsp+0x30]
0x00545bc8: add    rsp,0x20
0x00545bcc: pop    rdi
0x00545bcd: jmp    0x140070e90
0x00545bd2: mov    r8d,0xa
0x00545bd8: lea    rdx,[rip+0x1127499]        # 0x14166d078 ; literal="Eighteenth"
0x00545bdf: mov    rcx,rbx
0x00545be2: mov    rbx,QWORD PTR [rsp+0x30]
0x00545be7: add    rsp,0x20
0x00545beb: pop    rdi
0x00545bec: jmp    0x140070e90
0x00545bf1: mov    r8d,0xa
0x00545bf7: lea    rdx,[rip+0x11274e2]        # 0x14166d0e0 ; literal="Nineteenth"
0x00545bfe: mov    rcx,rbx
0x00545c01: mov    rbx,QWORD PTR [rsp+0x30]
0x00545c06: add    rsp,0x20
0x00545c0a: pop    rdi
0x00545c0b: jmp    0x140070e90
0x00545c10: mov    rdx,rbx
0x00545c13: mov    ecx,edi
0x00545c15: call   0x140542fb0
0x00545c1a: mov    eax,0x66666667
0x00545c1f: mov    ecx,edi
0x00545c21: imul   edi
0x00545c23: sar    edx,0x2
0x00545c26: mov    eax,edx
0x00545c28: shr    eax,0x1f
0x00545c2b: add    edx,eax
0x00545c2d: lea    eax,[rdx+rdx*4]
0x00545c30: add    eax,eax
0x00545c32: sub    ecx,eax
0x00545c34: sub    ecx,0x1
0x00545c37: je     0x140545cdd
0x00545c3d: mov    r8d,0x2
0x00545c43: sub    ecx,0x1
0x00545c46: je     0x140545ca0
0x00545c48: cmp    ecx,0x1
0x00545c4b: mov    rcx,rbx
0x00545c4e: je     0x140545c66
0x00545c50: lea    rdx,[rip+0x10bcc7d]        # 0x1416028d4 ; literal="th"
0x00545c57: mov    rbx,QWORD PTR [rsp+0x30]
0x00545c5c: add    rsp,0x20
0x00545c60: pop    rdi
0x00545c61: jmp    0x140070fd0
0x00545c66: mov    eax,0x51eb851f
0x00545c6b: imul   edi
0x00545c6d: sar    edx,0x5
0x00545c70: mov    eax,edx
0x00545c72: shr    eax,0x1f
0x00545c75: add    edx,eax
0x00545c77: imul   eax,edx,0x64
0x00545c7a: lea    rdx,[rip+0x10bcc53]        # 0x1416028d4 ; literal="th"
0x00545c81: sub    edi,eax
0x00545c83: lea    rax,[rip+0x10bcc46]        # 0x1416028d0 ; literal="rd"
0x00545c8a: cmp    edi,0xd
0x00545c8d: cmovne rdx,rax
0x00545c91: mov    rbx,QWORD PTR [rsp+0x30]
0x00545c96: add    rsp,0x20
0x00545c9a: pop    rdi
0x00545c9b: jmp    0x140070fd0
0x00545ca0: mov    eax,0x51eb851f
0x00545ca5: mov    rcx,rbx
0x00545ca8: imul   edi
0x00545caa: sar    edx,0x5
0x00545cad: mov    eax,edx
0x00545caf: shr    eax,0x1f
0x00545cb2: add    edx,eax
0x00545cb4: imul   eax,edx,0x64
0x00545cb7: lea    rdx,[rip+0x10bcc16]        # 0x1416028d4 ; literal="th"
0x00545cbe: sub    edi,eax
0x00545cc0: lea    rax,[rip+0x10bcc15]        # 0x1416028dc ; literal="nd"
0x00545cc7: cmp    edi,0xc
0x00545cca: cmovne rdx,rax
0x00545cce: mov    rbx,QWORD PTR [rsp+0x30]
0x00545cd3: add    rsp,0x20
0x00545cd7: pop    rdi
0x00545cd8: jmp    0x140070fd0
0x00545cdd: mov    eax,0x51eb851f
0x00545ce2: imul   edi
0x00545ce4: sar    edx,0x5
0x00545ce7: mov    eax,edx
0x00545ce9: shr    eax,0x1f
0x00545cec: add    edx,eax
0x00545cee: imul   eax,edx,0x64
0x00545cf1: lea    rdx,[rip+0x10bcbdc]        # 0x1416028d4 ; literal="th"
0x00545cf8: sub    edi,eax
0x00545cfa: cmp    edi,0xb
0x00545cfd: je     0x140545d06
0x00545cff: lea    rdx,[rip+0x10bcbd2]        # 0x1416028d8 ; literal="st"
0x00545d06: mov    r8d,0x2
0x00545d0c: mov    rcx,rbx
0x00545d0f: mov    rbx,QWORD PTR [rsp+0x30]
0x00545d14: add    rsp,0x20
0x00545d18: pop    rdi
0x00545d19: jmp    0x140070fd0
0x00545d1e: xchg   ax,ax
