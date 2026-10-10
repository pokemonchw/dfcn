# steam PE:6a70a6d9:02711000; reaction-completion; RVA 0x2804b0..0x281091
0x002804b0: mov    QWORD PTR [rsp+0x10],rbx
0x002804b5: mov    QWORD PTR [rsp+0x18],rsi
0x002804ba: mov    QWORD PTR [rsp+0x20],rdi
0x002804bf: push   rbp
0x002804c0: push   r12
0x002804c2: push   r13
0x002804c4: push   r14
0x002804c6: push   r15
0x002804c8: lea    rbp,[rsp-0x80]
0x002804cd: sub    rsp,0x180
0x002804d4: mov    rax,QWORD PTR [rip+0x161bb65]        # 0x14189c040
0x002804db: xor    rax,rsp
0x002804de: mov    QWORD PTR [rbp+0x78],rax
0x002804e2: mov    r13,rcx
0x002804e5: mov    r15,QWORD PTR [rip+0x2164c24]        # 0x1423e5110
0x002804ec: or     DWORD PTR [rip+0x226771d],0x5        # 0x1424e7c10
0x002804f3: xorps  xmm0,xmm0
0x002804f6: movdqu XMMWORD PTR [rbp-0x10],xmm0
0x002804fb: xor    r12d,r12d
0x002804fe: mov    QWORD PTR [rbp+0x0],r12
0x00280502: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x00280507: mov    QWORD PTR [rbp-0x30],r12
0x0028050b: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x00280510: mov    QWORD PTR [rbp-0x18],r12
0x00280514: mov    rcx,QWORD PTR [rcx+0xc0]
0x0028051b: lea    rax,[r13+0xd0]
0x00280522: lea    r8,[r13+0xa8]
0x00280529: lea    rdx,[r13+0x90]
0x00280530: lea    r9,[rbp-0x28]
0x00280534: mov    QWORD PTR [rsp+0x50],r9
0x00280539: mov    QWORD PTR [rsp+0x48],rax
0x0028053e: mov    QWORD PTR [rsp+0x40],r12
0x00280543: mov    QWORD PTR [rsp+0x38],r12
0x00280548: movzx  eax,WORD PTR [rcx+0x80]
0x0028054f: mov    WORD PTR [rsp+0x30],ax
0x00280554: mov    QWORD PTR [rsp+0x28],r15
0x00280559: lea    rax,[rbp-0x40]
0x0028055d: mov    QWORD PTR [rsp+0x20],rax
0x00280562: lea    r9,[rbp-0x10]
0x00280566: call   0x140ed9630
0x0028056b: mov    BYTE PTR [rsp+0x68],r12b
0x00280570: mov    rsi,QWORD PTR [rbp-0x38]
0x00280574: mov    rax,rsi
0x00280577: mov    rbx,QWORD PTR [rbp-0x40]
0x0028057b: sub    rax,rbx
0x0028057e: sar    rax,0x3
0x00280582: test   rax,rax
0x00280585: je     0x14028097d
0x0028058b: xorps  xmm0,xmm0
0x0028058e: movdqu XMMWORD PTR [rbp+0x38],xmm0
0x00280593: mov    edi,r12d
0x00280596: mov    QWORD PTR [rbp+0x48],r12
0x0028059a: mov    r14,QWORD PTR [rbp+0x40]
0x0028059e: xchg   ax,ax
0x002805a0: cmp    rbx,rsi
0x002805a3: jae    0x1402805ed
0x002805a5: mov    rcx,QWORD PTR [rbx]
0x002805a8: mov    rax,QWORD PTR [rcx]
0x002805ab: call   QWORD PTR [rax+0x508]
0x002805b1: cmp    ax,0x4
0x002805b5: jg     0x1402805e7
0x002805b7: cmp    r14,rdi
0x002805ba: je     0x1402805d0
0x002805bc: mov    rax,QWORD PTR [rbx]
0x002805bf: mov    QWORD PTR [r14],rax
0x002805c2: add    r14,0x8
0x002805c6: mov    QWORD PTR [rbp+0x40],r14
0x002805ca: add    rbx,0x8
0x002805ce: jmp    0x1402805a0
0x002805d0: mov    r8,rbx
0x002805d3: mov    rdx,r14
0x002805d6: lea    rcx,[rbp+0x38]
0x002805da: call   0x1400bad30
0x002805df: mov    rdi,QWORD PTR [rbp+0x48]
0x002805e3: mov    r14,QWORD PTR [rbp+0x40]
0x002805e7: add    rbx,0x8
0x002805eb: jmp    0x1402805a0
0x002805ed: mov    rsi,QWORD PTR [rbp+0x38]
0x002805f1: sub    r14,rsi
0x002805f4: sar    r14,0x3
0x002805f8: test   r14,r14
0x002805fb: je     0x14028089d
0x00280601: mov    ecx,0xffff8ad0
0x00280606: mov    WORD PTR [rsp+0x68],cx
0x0028060b: test   DWORD PTR [r15+0x110],0x2000000
0x00280616: je     0x14028066b
0x00280618: mov    rbx,QWORD PTR [r15+0x1d8]
0x0028061f: mov    rdi,QWORD PTR [r15+0x1e0]
0x00280626: cmp    rbx,rdi
0x00280629: jae    0x140280664
0x0028062b: mov    rcx,QWORD PTR [rbx]
0x0028062e: mov    rax,QWORD PTR [rcx]
0x00280631: call   QWORD PTR [rax+0x10]
0x00280634: cmp    eax,0xb
0x00280637: jne    0x140280647
0x00280639: mov    rcx,QWORD PTR [rbx]
0x0028063c: mov    rax,QWORD PTR [rcx]
0x0028063f: call   QWORD PTR [rax+0x18]
0x00280642: test   rax,rax
0x00280645: jne    0x14028064d
0x00280647: add    rbx,0x8
0x0028064b: jmp    0x140280626
0x0028064d: lea    r9,[rsp+0x64]
0x00280652: lea    r8,[rsp+0x60]
0x00280657: lea    rdx,[rsp+0x68]
0x0028065c: mov    rcx,rax
0x0028065f: call   0x140c8baa0
0x00280664: mov    ecx,0xffff8ad0
0x00280669: jmp    0x140280692
0x0028066b: movzx  eax,WORD PTR [r15+0xa8]
0x00280673: mov    WORD PTR [rsp+0x68],ax
0x00280678: movzx  eax,WORD PTR [r15+0xaa]
0x00280680: mov    WORD PTR [rsp+0x60],ax
0x00280685: movzx  eax,WORD PTR [r15+0xac]
0x0028068d: mov    WORD PTR [rsp+0x64],ax
0x00280692: mov    DWORD PTR [rsp+0x7c],r12d
0x00280697: mov    DWORD PTR [rbp-0x80],0x8ad08ad0
0x0028069e: mov    WORD PTR [rbp-0x7c],cx
0x002806a2: mov    DWORD PTR [rbp-0x78],r12d
0x002806a6: xorps  xmm0,xmm0
0x002806a9: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x002806ae: mov    QWORD PTR [rbp-0x60],0xffffffffffffffff
0x002806b6: mov    DWORD PTR [rbp-0x58],0xffffffff
0x002806bd: mov    DWORD PTR [rbp-0x54],r12d
0x002806c1: mov    DWORD PTR [rbp-0x50],0xffffffff
0x002806c8: mov    DWORD PTR [rsp+0x70],0x60087
0x002806d0: mov    BYTE PTR [rsp+0x74],0x1
0x002806d5: mov    WORD PTR [rbp-0x74],r12w
0x002806da: movzx  eax,WORD PTR [rsp+0x68]
0x002806df: mov    WORD PTR [rsp+0x76],ax
0x002806e4: movzx  eax,WORD PTR [rsp+0x60]
0x002806e9: mov    WORD PTR [rsp+0x78],ax
0x002806ee: movzx  eax,WORD PTR [rsp+0x64]
0x002806f3: mov    WORD PTR [rsp+0x7a],ax
0x002806f8: movups XMMWORD PTR [rbp+0x58],xmm0
0x002806fc: movdqa xmm1,XMMWORD PTR [rip+0x150aaac]        # 0x14178b1b0
0x00280704: movdqu XMMWORD PTR [rbp+0x68],xmm1
0x00280709: movsd  xmm0,QWORD PTR [rip+0x139ba9f]        # 0x14161c1b0 ; literal="You make "
0x00280711: movsd  QWORD PTR [rbp+0x58],xmm0
0x00280716: movzx  eax,BYTE PTR [rip+0x139ba9b]        # 0x14161c1b8 ; literal=" "
0x0028071d: mov    BYTE PTR [rbp+0x60],al
0x00280720: mov    BYTE PTR [rbp+0x61],0x0
0x00280724: xorps  xmm0,xmm0
0x00280727: movups XMMWORD PTR [rbp+0x8],xmm0
0x0028072b: mov    QWORD PTR [rbp+0x18],r12
0x0028072f: mov    QWORD PTR [rbp+0x20],0xf
0x00280737: mov    BYTE PTR [rbp+0x8],0x0
0x0028073b: xor    r9d,r9d
0x0028073e: xor    r8d,r8d
0x00280741: lea    rdx,[rbp+0x8]
0x00280745: mov    rcx,QWORD PTR [rsi]
0x00280748: call   0x140c65450
0x0028074d: lea    rdx,[rbp+0x8]
0x00280751: cmp    QWORD PTR [rbp+0x20],0xf
0x00280756: cmova  rdx,QWORD PTR [rbp+0x8]
0x0028075b: mov    r8,QWORD PTR [rbp+0x18]
0x0028075f: lea    rcx,[rbp+0x58]
0x00280763: call   0x14006fa10
0x00280768: nop
0x00280769: lea    rcx,[rbp+0x8]
0x0028076d: call   0x14006f850
0x00280772: cmp    r14,0x2
0x00280776: jbe    0x140280793
0x00280778: mov    r8d,0x9
0x0028077e: lea    rdx,[rip+0x139ba3b]        # 0x14161c1c0 ; literal=" and more"
0x00280785: lea    rcx,[rbp+0x58]
0x00280789: call   0x14006fa10
0x0028078e: jmp    0x140280833
0x00280793: jne    0x140280833
0x00280799: mov    r8d,0x5
0x0028079f: lea    rdx,[rip+0x136896a]        # 0x1415e9110 ; literal=" and "
0x002807a6: lea    rcx,[rbp+0x58]
0x002807aa: call   0x14006fa10
0x002807af: xorps  xmm0,xmm0
0x002807b2: movups XMMWORD PTR [rbp+0x8],xmm0
0x002807b6: mov    QWORD PTR [rbp+0x18],r12
0x002807ba: mov    QWORD PTR [rbp+0x20],0xf
0x002807c2: mov    BYTE PTR [rbp+0x8],0x0
0x002807c6: xor    r9d,r9d
0x002807c9: xor    r8d,r8d
0x002807cc: lea    rdx,[rbp+0x8]
0x002807d0: mov    rcx,QWORD PTR [rsi+0x8]
0x002807d4: call   0x140c65450
0x002807d9: lea    rdx,[rbp+0x8]
0x002807dd: cmp    QWORD PTR [rbp+0x20],0xf
0x002807e2: cmova  rdx,QWORD PTR [rbp+0x8]
0x002807e7: mov    r8,QWORD PTR [rbp+0x18]
0x002807eb: lea    rcx,[rbp+0x58]
0x002807ef: call   0x14006fa10
0x002807f4: nop
0x002807f5: mov    rdx,QWORD PTR [rbp+0x20]
0x002807f9: cmp    rdx,0xf
0x002807fd: jbe    0x140280833
0x002807ff: inc    rdx
0x00280802: mov    rcx,QWORD PTR [rbp+0x8]
0x00280806: mov    rax,rcx
0x00280809: cmp    rdx,0x1000
0x00280810: jb     0x14028082e
0x00280812: add    rdx,0x27
0x00280816: mov    rcx,QWORD PTR [rcx-0x8]
0x0028081a: sub    rax,rcx
0x0028081d: add    rax,0xfffffffffffffff8
0x00280821: cmp    rax,0x1f
0x00280825: jbe    0x14028082e
0x00280827: call   QWORD PTR [rip+0x13652fb]        # 0x1415e5b28
0x0028082d: int3
0x0028082e: call   0x141539680
0x00280833: mov    r8d,0x1
0x00280839: lea    rdx,[rip+0x1367d74]        # 0x1415e85b4 ; literal="."
0x00280840: lea    rcx,[rbp+0x58]
0x00280844: call   0x14006fa10
0x00280849: lea    r8,[rsp+0x70]
0x0028084e: lea    rdx,[rbp+0x58]
0x00280852: lea    rcx,[rip+0x2262ff7]        # 0x1424e3850
0x00280859: call   0x1400e3c20
0x0028085e: nop
0x0028085f: mov    rdx,QWORD PTR [rbp+0x70]
0x00280863: cmp    rdx,0xf
0x00280867: jbe    0x14028089d
0x00280869: inc    rdx
0x0028086c: mov    rcx,QWORD PTR [rbp+0x58]
0x00280870: mov    rax,rcx
0x00280873: cmp    rdx,0x1000
0x0028087a: jb     0x140280898
0x0028087c: add    rdx,0x27
0x00280880: mov    rcx,QWORD PTR [rcx-0x8]
0x00280884: sub    rax,rcx
0x00280887: add    rax,0xfffffffffffffff8
0x0028088b: cmp    rax,0x1f
0x0028088f: jbe    0x140280898
0x00280891: call   QWORD PTR [rip+0x1365291]        # 0x1415e5b28
0x00280897: int3
0x00280898: call   0x141539680
0x0028089d: mov    QWORD PTR [rbp+0xc],0xd1
0x002808a5: mov    QWORD PTR [rbp+0x14],0x32 ; inline_fragment="2"
0x002808ad: xorps  xmm0,xmm0
0x002808b0: movdqu XMMWORD PTR [rbp+0x20],xmm0
0x002808b5: mov    QWORD PTR [rbp+0x30],r12
0x002808b9: mov    DWORD PTR [rbp+0x8],0x70 ; inline_fragment="p"
0x002808c0: mov    rcx,QWORD PTR [r15+0xa98]
0x002808c7: test   rcx,rcx
0x002808ca: je     0x140280967
0x002808d0: mov    eax,DWORD PTR [r15+0x110]
0x002808d7: and    eax,0x502
0x002808dc: cmp    eax,0x2
0x002808df: je     0x140280967
0x002808e5: mov    eax,DWORD PTR [r15+0x118]
0x002808ec: bt     eax,0xc
0x002808f0: jb     0x140280967
0x002808f2: add    rcx,0x248
0x002808f9: shr    eax,0xa
0x002808fc: test   al,0x1
0x002808fe: je     0x140280905
0x00280900: xor    r8b,r8b
0x00280903: jmp    0x14028095e
0x00280905: cmp    QWORD PTR [r15+0xd80],0x0
0x0028090d: je     0x140280914
0x0028090f: xor    r8b,r8b
0x00280912: jmp    0x14028095e
0x00280914: cmp    DWORD PTR [r15+0x1280],0x8
0x0028091c: jle    0x14028093c
0x0028091e: mov    rax,QWORD PTR [r15+0x1278]
0x00280925: cmp    BYTE PTR [rax+0x8],0x0
0x00280929: jge    0x14028093c
0x0028092b: mov    r8d,DWORD PTR [r15+0x82c]
0x00280932: shr    r8d,0xc
0x00280936: and    r8b,0x1
0x0028093a: jmp    0x14028095e
0x0028093c: test   DWORD PTR [r15+0x82c],0x1000
0x00280947: jne    0x14028095b
0x00280949: test   DWORD PTR [r15+0x828],0x1000
0x00280954: je     0x14028095b
0x00280956: xor    r8b,r8b
0x00280959: jmp    0x14028095e
0x0028095b: mov    r8b,0x1
0x0028095e: lea    rdx,[rbp+0x8]
0x00280962: call   0x140e198e0
0x00280967: mov    BYTE PTR [rsp+0x68],0x1
0x0028096c: lea    rcx,[rbp+0x38]
0x00280970: call   0x140066b70
0x00280975: mov    rsi,QWORD PTR [rbp-0x38]
0x00280979: mov    rbx,QWORD PTR [rbp-0x40]
0x0028097d: mov    r12,QWORD PTR [rbp-0x20]
0x00280981: mov    rax,r12
0x00280984: mov    rdi,QWORD PTR [rbp-0x28]
0x00280988: sub    rax,rdi
0x0028098b: sar    rax,0x3
0x0028098f: test   rax,rax
0x00280992: je     0x140280d98
0x00280998: xorps  xmm0,xmm0
0x0028099b: movdqu XMMWORD PTR [rbp+0x38],xmm0
0x002809a0: xor    r14d,r14d
0x002809a3: mov    r8d,r14d
0x002809a6: mov    QWORD PTR [rbp+0x48],r14
0x002809aa: mov    r9d,0xff
0x002809b0: mov    r14,QWORD PTR [rbp+0x40]
0x002809b4: cmp    rdi,r12
0x002809b7: jae    0x140280a38
0x002809bd: mov    rdx,QWORD PTR [rdi]
0x002809c0: mov    rax,rbx
0x002809c3: cmp    rax,rsi
0x002809c6: je     0x1402809ec
0x002809c8: mov    ecx,0x1
0x002809cd: cmovb  ecx,r9d
0x002809d1: test   cl,cl
0x002809d3: jns    0x1402809ec
0x002809d5: cmp    QWORD PTR [rax],rdx
0x002809d8: je     0x1402809e0
0x002809da: add    rax,0x8
0x002809de: jmp    0x1402809c3
0x002809e0: sub    rax,rbx
0x002809e3: sar    rax,0x3
0x002809e7: cmp    eax,0xffffffff
0x002809ea: jne    0x140280a2f
0x002809ec: cmp    r14,r8
0x002809ef: je     0x140280a0a
0x002809f1: mov    QWORD PTR [r14],rdx
0x002809f4: add    r14,0x8
0x002809f8: mov    QWORD PTR [rbp+0x40],r14
0x002809fc: mov    rbx,QWORD PTR [rbp-0x40]
0x00280a00: mov    rsi,QWORD PTR [rbp-0x38]
0x00280a04: add    rdi,0x8
0x00280a08: jmp    0x1402809b4
0x00280a0a: mov    r8,rdi
0x00280a0d: mov    rdx,r14
0x00280a10: lea    rcx,[rbp+0x38]
0x00280a14: call   0x1400bad30
0x00280a19: mov    r8,QWORD PTR [rbp+0x48]
0x00280a1d: mov    r14,QWORD PTR [rbp+0x40]
0x00280a21: mov    r9d,0xff
0x00280a27: mov    rbx,QWORD PTR [rbp-0x40]
0x00280a2b: mov    rsi,QWORD PTR [rbp-0x38]
0x00280a2f: add    rdi,0x8
0x00280a33: jmp    0x1402809b4
0x00280a38: mov    rsi,QWORD PTR [rbp+0x38]
0x00280a3c: sub    r14,rsi
0x00280a3f: sar    r14,0x3
0x00280a43: test   r14,r14
0x00280a46: je     0x140280ca7
0x00280a4c: mov    ecx,0xffff8ad0
0x00280a51: mov    WORD PTR [rsp+0x60],cx
0x00280a56: test   DWORD PTR [r15+0x110],0x2000000
0x00280a61: je     0x140280ab6
0x00280a63: mov    rbx,QWORD PTR [r15+0x1d8]
0x00280a6a: mov    rdi,QWORD PTR [r15+0x1e0]
0x00280a71: cmp    rbx,rdi
0x00280a74: jae    0x140280aaf
0x00280a76: mov    rcx,QWORD PTR [rbx]
0x00280a79: mov    rax,QWORD PTR [rcx]
0x00280a7c: call   QWORD PTR [rax+0x10]
0x00280a7f: cmp    eax,0xb
0x00280a82: jne    0x140280a92
0x00280a84: mov    rcx,QWORD PTR [rbx]
0x00280a87: mov    rax,QWORD PTR [rcx]
0x00280a8a: call   QWORD PTR [rax+0x18]
0x00280a8d: test   rax,rax
0x00280a90: jne    0x140280a98
0x00280a92: add    rbx,0x8
0x00280a96: jmp    0x140280a71
0x00280a98: lea    r9,[rsp+0x6c]
0x00280a9d: lea    r8,[rsp+0x64]
0x00280aa2: lea    rdx,[rsp+0x60]
0x00280aa7: mov    rcx,rax
0x00280aaa: call   0x140c8baa0
0x00280aaf: mov    ecx,0xffff8ad0
0x00280ab4: jmp    0x140280add
0x00280ab6: movzx  eax,WORD PTR [r15+0xa8]
0x00280abe: mov    WORD PTR [rsp+0x60],ax
0x00280ac3: movzx  eax,WORD PTR [r15+0xaa]
0x00280acb: mov    WORD PTR [rsp+0x64],ax
0x00280ad0: movzx  eax,WORD PTR [r15+0xac]
0x00280ad8: mov    WORD PTR [rsp+0x6c],ax
0x00280add: xor    ebx,ebx
0x00280adf: mov    DWORD PTR [rsp+0x7c],ebx
0x00280ae3: mov    DWORD PTR [rbp-0x80],0x8ad08ad0
0x00280aea: mov    WORD PTR [rbp-0x7c],cx
0x00280aee: mov    DWORD PTR [rbp-0x78],ebx
0x00280af1: xorps  xmm0,xmm0
0x00280af4: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x00280af9: mov    QWORD PTR [rbp-0x60],0xffffffffffffffff
0x00280b01: mov    DWORD PTR [rbp-0x58],0xffffffff
0x00280b08: mov    DWORD PTR [rbp-0x54],ebx
0x00280b0b: mov    DWORD PTR [rbp-0x50],0xffffffff
0x00280b12: mov    DWORD PTR [rsp+0x70],0x60087
0x00280b1a: mov    BYTE PTR [rsp+0x74],0x1
0x00280b1f: mov    WORD PTR [rbp-0x74],bx
0x00280b23: movzx  eax,WORD PTR [rsp+0x60]
0x00280b28: mov    WORD PTR [rsp+0x76],ax
0x00280b2d: movzx  eax,WORD PTR [rsp+0x64]
0x00280b32: mov    WORD PTR [rsp+0x78],ax
0x00280b37: movzx  eax,WORD PTR [rsp+0x6c]
0x00280b3c: mov    WORD PTR [rsp+0x7a],ax
0x00280b41: movups XMMWORD PTR [rbp+0x8],xmm0
0x00280b45: xorps  xmm1,xmm1
0x00280b48: movdqu XMMWORD PTR [rbp+0x18],xmm1
0x00280b4d: mov    ecx,0x20 ; inline_fragment=" "
0x00280b52: call   0x1400707d0
0x00280b57: mov    rdx,rax
0x00280b5a: mov    QWORD PTR [rbp+0x8],rax
0x00280b5e: movdqa xmm0,XMMWORD PTR [rip+0x150a78a]        # 0x14178b2f0
0x00280b66: movdqu XMMWORD PTR [rbp+0x18],xmm0
0x00280b6b: movups xmm0,XMMWORD PTR [rip+0x139b65e]        # 0x14161c1d0 ; literal="You have finished working on "
0x00280b72: movups XMMWORD PTR [rax],xmm0
0x00280b75: movsd  xmm0,QWORD PTR [rip+0x139b663]        # 0x14161c1e0 ; literal="d working on "
0x00280b7d: movsd  QWORD PTR [rax+0x10],xmm0
0x00280b82: mov    ecx,DWORD PTR [rip+0x139b660]        # 0x14161c1e8 ; literal="g on "
0x00280b88: mov    DWORD PTR [rax+0x18],ecx
0x00280b8b: movzx  eax,BYTE PTR [rip+0x139b65a]        # 0x14161c1ec ; literal=" "
0x00280b92: mov    BYTE PTR [rdx+0x1c],al
0x00280b95: mov    BYTE PTR [rdx+0x1d],bl
0x00280b98: xorps  xmm0,xmm0
0x00280b9b: movups XMMWORD PTR [rbp+0x58],xmm0
0x00280b9f: mov    QWORD PTR [rbp+0x68],rbx
0x00280ba3: mov    QWORD PTR [rbp+0x70],0xf
0x00280bab: mov    BYTE PTR [rbp+0x58],bl
0x00280bae: mov    r9d,0x1
0x00280bb4: xor    r8d,r8d
0x00280bb7: lea    rdx,[rbp+0x58]
0x00280bbb: mov    rcx,QWORD PTR [rsi]
0x00280bbe: call   0x140c65450
0x00280bc3: lea    rdx,[rbp+0x58]
0x00280bc7: cmp    QWORD PTR [rbp+0x70],0xf
0x00280bcc: cmova  rdx,QWORD PTR [rbp+0x58]
0x00280bd1: mov    r8,QWORD PTR [rbp+0x68]
0x00280bd5: lea    rcx,[rbp+0x8]
0x00280bd9: call   0x14006fa10
0x00280bde: nop
0x00280bdf: lea    rcx,[rbp+0x58]
0x00280be3: call   0x14006f850
0x00280be8: cmp    r14,0x2
0x00280bec: jbe    0x140280c06
0x00280bee: mov    r8d,0x9
0x00280bf4: lea    rdx,[rip+0x139b5c5]        # 0x14161c1c0 ; literal=" and more"
0x00280bfb: lea    rcx,[rbp+0x8]
0x00280bff: call   0x14006fa10
0x00280c04: jmp    0x140280c70
0x00280c06: jne    0x140280c70
0x00280c08: mov    r8d,0x5
0x00280c0e: lea    rdx,[rip+0x13684fb]        # 0x1415e9110 ; literal=" and "
0x00280c15: lea    rcx,[rbp+0x8]
0x00280c19: call   0x14006fa10
0x00280c1e: xorps  xmm0,xmm0
0x00280c21: movups XMMWORD PTR [rbp+0x58],xmm0
0x00280c25: mov    QWORD PTR [rbp+0x68],rbx
0x00280c29: mov    QWORD PTR [rbp+0x70],0xf
0x00280c31: mov    BYTE PTR [rbp+0x58],0x0
0x00280c35: mov    r9d,0x1
0x00280c3b: xor    r8d,r8d
0x00280c3e: lea    rdx,[rbp+0x58]
0x00280c42: mov    rcx,QWORD PTR [rsi+0x8]
0x00280c46: call   0x140c65450
0x00280c4b: lea    rdx,[rbp+0x58]
0x00280c4f: cmp    QWORD PTR [rbp+0x70],0xf
0x00280c54: cmova  rdx,QWORD PTR [rbp+0x58]
0x00280c59: mov    r8,QWORD PTR [rbp+0x68]
0x00280c5d: lea    rcx,[rbp+0x8]
0x00280c61: call   0x14006fa10
0x00280c66: nop
0x00280c67: lea    rcx,[rbp+0x58]
0x00280c6b: call   0x14006f850
0x00280c70: mov    r8d,0x1
0x00280c76: lea    rdx,[rip+0x1367937]        # 0x1415e85b4 ; literal="."
0x00280c7d: lea    rcx,[rbp+0x8]
0x00280c81: call   0x14006fa10
0x00280c86: lea    r8,[rsp+0x70]
0x00280c8b: lea    rdx,[rbp+0x8]
0x00280c8f: lea    rcx,[rip+0x2262bba]        # 0x1424e3850
0x00280c96: call   0x1400e3c20
0x00280c9b: nop
0x00280c9c: lea    rcx,[rbp+0x8]
0x00280ca0: call   0x14006f850
0x00280ca5: jmp    0x140280ca9
0x00280ca7: xor    ebx,ebx
0x00280ca9: cmp    BYTE PTR [rsp+0x68],0x0
0x00280cae: jne    0x140280d7f
0x00280cb4: mov    QWORD PTR [rbp+0xc],0xd1
0x00280cbc: mov    QWORD PTR [rbp+0x14],0x32 ; inline_fragment="2"
0x00280cc4: xorps  xmm0,xmm0
0x00280cc7: movdqu XMMWORD PTR [rbp+0x20],xmm0
0x00280ccc: mov    QWORD PTR [rbp+0x30],rbx
0x00280cd0: mov    DWORD PTR [rbp+0x8],0x70 ; inline_fragment="p"
0x00280cd7: mov    rcx,QWORD PTR [r15+0xa98]
0x00280cde: test   rcx,rcx
0x00280ce1: je     0x140280d7f
0x00280ce7: mov    eax,DWORD PTR [r15+0x110]
0x00280cee: and    eax,0x502
0x00280cf3: cmp    eax,0x2
0x00280cf6: je     0x140280d7f
0x00280cfc: mov    eax,DWORD PTR [r15+0x118]
0x00280d03: bt     eax,0xc
0x00280d07: jb     0x140280d7f
0x00280d09: add    rcx,0x248
0x00280d10: shr    eax,0xa
0x00280d13: test   al,0x1
0x00280d15: je     0x140280d1c
0x00280d17: xor    r8b,r8b
0x00280d1a: jmp    0x140280d75
0x00280d1c: cmp    QWORD PTR [r15+0xd80],0x0
0x00280d24: je     0x140280d2b
0x00280d26: xor    r8b,r8b
0x00280d29: jmp    0x140280d75
0x00280d2b: cmp    DWORD PTR [r15+0x1280],0x8
0x00280d33: jle    0x140280d53
0x00280d35: mov    rax,QWORD PTR [r15+0x1278]
0x00280d3c: cmp    BYTE PTR [rax+0x8],0x0
0x00280d40: jge    0x140280d53
0x00280d42: mov    r8d,DWORD PTR [r15+0x82c]
0x00280d49: shr    r8d,0xc
0x00280d4d: and    r8b,0x1
0x00280d51: jmp    0x140280d75
0x00280d53: test   DWORD PTR [r15+0x82c],0x1000
0x00280d5e: jne    0x140280d72
0x00280d60: test   DWORD PTR [r15+0x828],0x1000
0x00280d6b: je     0x140280d72
0x00280d6d: xor    r8b,r8b
0x00280d70: jmp    0x140280d75
0x00280d72: mov    r8b,0x1
0x00280d75: lea    rdx,[rbp+0x8]
0x00280d79: call   0x140e198e0
0x00280d7e: nop
0x00280d7f: lea    rcx,[rbp+0x38]
0x00280d83: call   0x140066b70
0x00280d88: mov    rsi,QWORD PTR [rbp-0x38]
0x00280d8c: mov    rbx,QWORD PTR [rbp-0x40]
0x00280d90: mov    r12,QWORD PTR [rbp-0x20]
0x00280d94: mov    rdi,QWORD PTR [rbp-0x28]
0x00280d98: sub    rsi,rbx
0x00280d9b: test   rsi,0xfffffffffffffff8
0x00280da2: jne    0x140280ffa
0x00280da8: sub    r12,rdi
0x00280dab: test   r12,0xfffffffffffffff8
0x00280db2: jne    0x140280ffa
0x00280db8: mov    esi,0xffff8ad0
0x00280dbd: mov    WORD PTR [rsp+0x60],si
0x00280dc2: test   DWORD PTR [r15+0x110],0x2000000
0x00280dcd: je     0x140280e20
0x00280dcf: mov    rbx,QWORD PTR [r15+0x1d8]
0x00280dd6: mov    rdi,QWORD PTR [r15+0x1e0]
0x00280ddd: nop    DWORD PTR [rax]
0x00280de0: cmp    rbx,rdi
0x00280de3: jae    0x140280e47
0x00280de5: mov    rcx,QWORD PTR [rbx]
0x00280de8: mov    rax,QWORD PTR [rcx]
0x00280deb: call   QWORD PTR [rax+0x10]
0x00280dee: cmp    eax,0xb
0x00280df1: jne    0x140280e01
0x00280df3: mov    rcx,QWORD PTR [rbx]
0x00280df6: mov    rax,QWORD PTR [rcx]
0x00280df9: call   QWORD PTR [rax+0x18]
0x00280dfc: test   rax,rax
0x00280dff: jne    0x140280e07
0x00280e01: add    rbx,0x8
0x00280e05: jmp    0x140280de0
0x00280e07: lea    r9,[rsp+0x64]
0x00280e0c: lea    r8,[rsp+0x6c]
0x00280e11: lea    rdx,[rsp+0x60]
0x00280e16: mov    rcx,rax
0x00280e19: call   0x140c8baa0
0x00280e1e: jmp    0x140280e47
0x00280e20: movzx  eax,WORD PTR [r15+0xa8]
0x00280e28: mov    WORD PTR [rsp+0x60],ax
0x00280e2d: movzx  eax,WORD PTR [r15+0xaa]
0x00280e35: mov    WORD PTR [rsp+0x6c],ax
0x00280e3a: movzx  eax,WORD PTR [r15+0xac]
0x00280e42: mov    WORD PTR [rsp+0x64],ax
0x00280e47: xor    r14d,r14d
0x00280e4a: mov    DWORD PTR [rsp+0x7c],r14d
0x00280e4f: mov    DWORD PTR [rbp-0x80],0x8ad08ad0
0x00280e56: mov    WORD PTR [rbp-0x7c],si
0x00280e5a: mov    DWORD PTR [rbp-0x78],r14d
0x00280e5e: xorps  xmm0,xmm0
0x00280e61: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x00280e66: mov    QWORD PTR [rbp-0x60],0xffffffffffffffff
0x00280e6e: mov    DWORD PTR [rbp-0x58],0xffffffff
0x00280e75: mov    DWORD PTR [rbp-0x54],r14d
0x00280e79: mov    DWORD PTR [rbp-0x50],0xffffffff
0x00280e80: mov    DWORD PTR [rsp+0x70],0x60087
0x00280e88: mov    BYTE PTR [rsp+0x74],r14b
0x00280e8d: mov    WORD PTR [rbp-0x74],r14w
0x00280e92: movzx  eax,WORD PTR [rsp+0x60]
0x00280e97: mov    WORD PTR [rsp+0x76],ax
0x00280e9c: movzx  eax,WORD PTR [rsp+0x6c]
0x00280ea1: mov    WORD PTR [rsp+0x78],ax
0x00280ea6: movzx  eax,WORD PTR [rsp+0x64]
0x00280eab: mov    WORD PTR [rsp+0x7a],ax
0x00280eb0: movups XMMWORD PTR [rbp+0x38],xmm0
0x00280eb4: mov    QWORD PTR [rbp+0x48],r14
0x00280eb8: mov    QWORD PTR [rbp+0x50],0xf
0x00280ec0: mov    BYTE PTR [rbp+0x38],r14b
0x00280ec4: mov    rax,QWORD PTR [r13+0xc0]
0x00280ecb: mov    ecx,0x20 ; inline_fragment=" "
0x00280ed0: cmp    WORD PTR [rax+0x80],0xffff
0x00280ed8: je     0x140280faa
0x00280ede: call   0x1400707d0
0x00280ee3: mov    QWORD PTR [rbp+0x48],0x12
0x00280eeb: mov    QWORD PTR [rbp+0x50],0x1f
0x00280ef3: movups xmm0,XMMWORD PTR [rip+0x139b23e]        # 0x14161c138 ; literal="You practice your "
0x00280efa: movups XMMWORD PTR [rax],xmm0
0x00280efd: movzx  ecx,WORD PTR [rip+0x139b244]        # 0x14161c148 ; literal="r "
0x00280f04: mov    WORD PTR [rax+0x10],cx
0x00280f08: mov    BYTE PTR [rax+0x12],r14b
0x00280f0c: mov    QWORD PTR [rbp+0x38],rax
0x00280f10: xorps  xmm0,xmm0
0x00280f13: movups XMMWORD PTR [rbp+0x8],xmm0
0x00280f17: mov    QWORD PTR [rbp+0x18],r14
0x00280f1b: mov    QWORD PTR [rbp+0x20],0xf
0x00280f23: mov    BYTE PTR [rbp+0x8],r14b
0x00280f27: mov    rdx,QWORD PTR [r13+0xc0]
0x00280f2e: movzx  edx,WORD PTR [rdx+0x80]
0x00280f35: lea    rcx,[rbp+0x8]
0x00280f39: call   0x140773990
0x00280f3e: lea    rcx,[rbp+0x8]
0x00280f42: call   0x14052d080
0x00280f47: lea    rdx,[rbp+0x8]
0x00280f4b: cmp    QWORD PTR [rbp+0x20],0xf
0x00280f50: cmova  rdx,QWORD PTR [rbp+0x8]
0x00280f55: mov    r8,QWORD PTR [rbp+0x18]
0x00280f59: lea    rcx,[rbp+0x38]
0x00280f5d: call   0x14006fa10
0x00280f62: mov    rcx,QWORD PTR [r13+0xc0]
0x00280f69: mov    rax,QWORD PTR [rcx+0x70]
0x00280f6d: sub    rax,QWORD PTR [rcx+0x68]
0x00280f71: lea    rcx,[rbp+0x38]
0x00280f75: test   rax,0xfffffffffffffff8
0x00280f7b: jne    0x140280f8c
0x00280f7d: mov    r8d,0x1
0x00280f83: lea    rdx,[rip+0x136762a]        # 0x1415e85b4 ; literal="."
0x00280f8a: jmp    0x140280f99
0x00280f8c: mov    r8d,0x1a
0x00280f92: lea    rdx,[rip+0x139b1b7]        # 0x14161c150 ; literal=" but make nothing of note."
0x00280f99: call   0x14006fa10
0x00280f9e: nop
0x00280f9f: lea    rcx,[rbp+0x8]
0x00280fa3: call   0x14006f850
0x00280fa8: jmp    0x140280fdb
0x00280faa: call   0x1400707d0
0x00280faf: mov    QWORD PTR [rbp+0x48],0x11
0x00280fb7: mov    QWORD PTR [rbp+0x50],0x1f
0x00280fbf: movups xmm0,XMMWORD PTR [rip+0x139b1aa]        # 0x14161c170 ; literal="You make nothing."
0x00280fc6: movups XMMWORD PTR [rax],xmm0
0x00280fc9: movzx  edx,BYTE PTR [rip+0x139b1b0]        # 0x14161c180 ; literal="."
0x00280fd0: mov    BYTE PTR [rax+0x10],dl
0x00280fd3: mov    BYTE PTR [rax+0x11],0x0
0x00280fd7: mov    QWORD PTR [rbp+0x38],rax
0x00280fdb: lea    r8,[rsp+0x70]
0x00280fe0: lea    rdx,[rbp+0x38]
0x00280fe4: lea    rcx,[rip+0x2262865]        # 0x1424e3850
0x00280feb: call   0x1400e3c20
0x00280ff0: nop
0x00280ff1: lea    rcx,[rbp+0x38]
0x00280ff5: call   0x14006f850
0x00280ffa: mov    rbx,QWORD PTR [r13+0xd0]
0x00281001: mov    rdi,QWORD PTR [r13+0xd8]
0x00281008: cmp    rbx,rdi
0x0028100b: jae    0x140281030
0x0028100d: mov    rsi,QWORD PTR [rbx]
0x00281010: test   rsi,rsi
0x00281013: je     0x14028102a
0x00281015: mov    rcx,rsi
0x00281018: call   0x14006f850
0x0028101d: mov    edx,0x30 ; inline_fragment="0"
0x00281022: mov    rcx,rsi
0x00281025: call   0x141539680
0x0028102a: add    rbx,0x8
0x0028102e: jmp    0x140281008
0x00281030: mov    rax,QWORD PTR [r13+0xd0]
0x00281037: cmp    rax,QWORD PTR [r13+0xd8]
0x0028103e: je     0x140281047
0x00281040: mov    QWORD PTR [r13+0xd8],rax
0x00281047: lea    rcx,[rbp-0x28]
0x0028104b: call   0x140066b70
0x00281050: nop
0x00281051: lea    rcx,[rbp-0x40]
0x00281055: call   0x140066b70
0x0028105a: nop
0x0028105b: lea    rcx,[rbp-0x10]
0x0028105f: call   0x140066b70
0x00281064: mov    rcx,QWORD PTR [rbp+0x78]
0x00281068: xor    rcx,rsp
0x0028106b: call   0x141539660
0x00281070: lea    r11,[rsp+0x180]
0x00281078: mov    rbx,QWORD PTR [r11+0x38]
0x0028107c: mov    rsi,QWORD PTR [r11+0x40]
0x00281080: mov    rdi,QWORD PTR [r11+0x48]
0x00281084: mov    rsp,r11
0x00281087: pop    r15
0x00281089: pop    r14
0x0028108b: pop    r13
0x0028108d: pop    r12
0x0028108f: pop    rbp
0x00281090: ret
