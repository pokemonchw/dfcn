; classic PE:6aea11a5:0272d000; reference-description:general_ref_abstract_buildingst; RVA 0xefffe0..0xf0044c; code ends 0xf00414
0x00efffe0: mov    QWORD PTR [rsp+0x18],rbx
0x00efffe5: push   rbp
0x00efffe6: push   rsi
0x00efffe7: push   rdi
0x00efffe8: push   r14
0x00efffea: push   r15
0x00efffec: sub    rsp,0x50
0x00effff0: mov    rax,QWORD PTR [rip+0x9b8049]        # 0x1418b8040
0x00effff7: xor    rax,rsp
0x00effffa: mov    QWORD PTR [rsp+0x40],rax
0x00efffff: mov    esi,r8d
0x00f00002: mov    rbx,rdx
0x00f00005: mov    rbp,rcx
0x00f00008: mov    QWORD PTR [rdx+0x10],0x0
0x00f00010: mov    rax,rdx
0x00f00013: cmp    QWORD PTR [rdx+0x18],0xf
0x00f00018: jbe    0x140f0001d
0x00f0001a: mov    rax,QWORD PTR [rdx]
0x00f0001d: mov    BYTE PTR [rax],0x0
0x00f00020: mov    edx,DWORD PTR [rcx+0x8]
0x00f00023: mov    rcx,QWORD PTR [rip+0x1607eae]        # 0x142507ed8
0x00f0002a: call   0x14007f0e0
0x00f0002f: mov    rdi,rax
0x00f00032: test   rax,rax
0x00f00035: je     0x140f003f0
0x00f0003b: lea    rdx,[rax+0x2b0]
0x00f00042: mov    ecx,DWORD PTR [rbp+0xc]
0x00f00045: call   0x1400714c0
0x00f0004a: mov    r14,rax
0x00f0004d: test   rax,rax
0x00f00050: je     0x140f003f0
0x00f00056: mov    rdx,QWORD PTR [rax]
0x00f00059: mov    rcx,rax
0x00f0005c: call   QWORD PTR [rdx+0x10]
0x00f0005f: mov    rbp,rax
0x00f00062: mov    r8d,0x2
0x00f00068: mov    r15d,0x4
0x00f0006e: test   rax,rax
0x00f00071: cmovne r8d,r15d
0x00f00075: lea    rax,[rip+0x6feffc]        # 0x1415ff078 ; literal="the "
0x00f0007c: lea    rdx,[rip+0x703805]        # 0x141603888 ; literal="a "
0x00f00083: test   rbp,rbp
0x00f00086: cmovne rdx,rax
0x00f0008a: mov    rcx,rbx
0x00f0008d: call   0x140070fd0
0x00f00092: mov    rax,QWORD PTR [r14]
0x00f00095: mov    rcx,r14
0x00f00098: call   QWORD PTR [rax]
0x00f0009a: movsx  rcx,ax
0x00f0009e: cmp    ecx,0xd
0x00f000a1: ja     0x140f001c0
0x00f000a7: lea    rdx,[rip+0xffffffffff0fff52]        # 0x140000000
0x00f000ae: mov    ecx,DWORD PTR [rdx+rcx*4+0xf00414]
0x00f000b5: add    rcx,rdx
0x00f000b8: jmp    rcx
0x00f000ba: mov    r8d,0xe
0x00f000c0: lea    rdx,[rip+0x82d579]        # 0x14172d640 ; literal="counting house"
0x00f000c7: jmp    0x140f001b8
0x00f000cc: mov    r8d,0x8
0x00f000d2: lea    rdx,[rip+0x82d597]        # 0x14172d670 ; literal="hospital"
0x00f000d9: jmp    0x140f001b8
0x00f000de: mov    r8d,0x9
0x00f000e4: lea    rdx,[rip+0x7434a5]        # 0x141643590 ; literal="guildhall"
0x00f000eb: jmp    0x140f001b8
0x00f000f0: mov    r8d,0x9
0x00f000f6: lea    rdx,[rip+0x82d563]        # 0x14172d660 ; literal="mead hall"
0x00f000fd: jmp    0x140f001b8
0x00f00102: mov    r8,r15
0x00f00105: lea    rdx,[rip+0x82d57c]        # 0x14172d688 ; literal="keep"
0x00f0010c: jmp    0x140f001b8
0x00f00111: mov    r8d,0x6
0x00f00117: lea    rdx,[rip+0x7433de]        # 0x1416434fc ; literal="temple"
0x00f0011e: jmp    0x140f001b8
0x00f00123: mov    r8d,0x7
0x00f00129: lea    rdx,[rip+0x82d550]        # 0x14172d680 ; literal="library"
0x00f00130: jmp    0x140f001b8
0x00f00135: mov    r8d,0x6
0x00f0013b: lea    rdx,[rip+0x767d12]        # 0x141667e54 ; literal="tavern"
0x00f00142: jmp    0x140f001b8
0x00f00144: lea    rdx,[rip+0x858b1d]        # 0x141758c68 ; literal="spire"
0x00f0014b: jmp    0x140f001b2
0x00f0014d: mov    r8d,0x6
0x00f00153: lea    rdx,[rip+0x82db86]        # 0x14172dce0 ; literal="market"
0x00f0015a: jmp    0x140f001b8
0x00f0015c: mov    r8,r15
0x00f0015f: lea    rdx,[rip+0x7467be]        # 0x141646924 ; literal="tomb"
0x00f00166: jmp    0x140f001b8
0x00f00168: movsx  ecx,WORD PTR [r14+0x130]
0x00f00170: test   ecx,ecx
0x00f00172: je     0x140f0019c
0x00f00174: sub    ecx,0x1
0x00f00177: je     0x140f0018d
0x00f00179: cmp    ecx,0x1
0x00f0017c: jne    0x140f001c0
0x00f0017e: mov    r8d,0x9
0x00f00184: lea    rdx,[rip+0x82db5d]        # 0x14172dce8 ; literal="catacombs"
0x00f0018b: jmp    0x140f001b8
0x00f0018d: mov    r8d,0x6
0x00f00193: lea    rdx,[rip+0x82db5a]        # 0x14172dcf4 ; literal="sewers"
0x00f0019a: jmp    0x140f001b8
0x00f0019c: mov    r8d,0x7
0x00f001a2: lea    rdx,[rip+0x82db2f]        # 0x14172dcd8 ; literal="dungeon"
0x00f001a9: jmp    0x140f001b8
0x00f001ab: lea    rdx,[rip+0x82db62]        # 0x14172dd14 ; literal="tower"
0x00f001b2: mov    r8d,0x5
0x00f001b8: mov    rcx,rbx
0x00f001bb: call   0x140070fd0
0x00f001c0: test   rbp,rbp
0x00f001c3: je     0x140f002ed
0x00f001c9: mov    r8d,0x1
0x00f001cf: lea    rdx,[rip+0x6fe796]        # 0x1415fe96c ; literal=" "
0x00f001d6: mov    rcx,rbx
0x00f001d9: call   0x140070fd0
0x00f001de: and    esi,0x2
0x00f001e1: je     0x140f0023c
0x00f001e3: mov    r8d,0xa
0x00f001e9: lea    rdx,[rip+0x7ff1e0]        # 0x1416ff3d0 ; literal="[LPAGE:AB:"
0x00f001f0: mov    rcx,rbx
0x00f001f3: call   0x140070fd0
0x00f001f8: mov    rdx,rbx
0x00f001fb: mov    ecx,DWORD PTR [rdi+0x88]
0x00f00201: call   0x140542fb0
0x00f00206: mov    r8d,0x1
0x00f0020c: lea    rdx,[rip+0x72f27d]        # 0x14162f490 ; literal=":"
0x00f00213: mov    rcx,rbx
0x00f00216: call   0x140070fd0
0x00f0021b: mov    rdx,rbx
0x00f0021e: mov    ecx,DWORD PTR [r14+0x8]
0x00f00222: call   0x140542fb0
0x00f00227: mov    r8d,0x1
0x00f0022d: lea    rdx,[rip+0x714164]        # 0x141614398 ; literal="]"
0x00f00234: mov    rcx,rbx
0x00f00237: call   0x140070fd0
0x00f0023c: xorps  xmm0,xmm0
0x00f0023f: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f00244: mov    QWORD PTR [rsp+0x30],0x0
0x00f0024d: mov    QWORD PTR [rsp+0x38],0xf
0x00f00256: mov    BYTE PTR [rsp+0x20],0x0
0x00f0025b: xor    r9d,r9d
0x00f0025e: mov    r8b,0x1
0x00f00261: lea    rdx,[rsp+0x20]
0x00f00266: mov    rcx,rbp
0x00f00269: call   0x140aaafe0
0x00f0026e: lea    rdx,[rsp+0x20]
0x00f00273: cmp    QWORD PTR [rsp+0x38],0xf
0x00f00279: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f0027f: mov    r8,QWORD PTR [rsp+0x30]
0x00f00284: mov    rcx,rbx
0x00f00287: call   0x140070fd0
0x00f0028c: test   esi,esi
0x00f0028e: je     0x140f002a6
0x00f00290: mov    r8d,0x8
0x00f00296: lea    rdx,[rip+0x71461b]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f0029d: mov    rcx,rbx
0x00f002a0: call   0x140070fd0
0x00f002a5: nop
0x00f002a6: mov    rdx,QWORD PTR [rsp+0x38]
0x00f002ab: cmp    rdx,0xf
0x00f002af: jbe    0x140f003f0
0x00f002b5: inc    rdx
0x00f002b8: mov    rcx,QWORD PTR [rsp+0x20]
0x00f002bd: mov    rax,rcx
0x00f002c0: cmp    rdx,0x1000
0x00f002c7: jb     0x140f003eb
0x00f002cd: add    rdx,0x27
0x00f002d1: mov    rcx,QWORD PTR [rcx-0x8]
0x00f002d5: sub    rax,rcx
0x00f002d8: add    rax,0xfffffffffffffff8
0x00f002dc: cmp    rax,0x1f
0x00f002e0: jbe    0x140f003eb
0x00f002e6: call   QWORD PTR [rip+0x6fb7dc]        # 0x1415fbac8
0x00f002ec: int3
0x00f002ed: cmp    BYTE PTR [rdi+0x72],0x0
0x00f002f1: je     0x140f003f0
0x00f002f7: mov    r8,r15
0x00f002fa: lea    rdx,[rip+0x702ea3]        # 0x1416031a4 ; literal=" in "
0x00f00301: mov    rcx,rbx
0x00f00304: call   0x140070fd0
0x00f00309: and    esi,0x2
0x00f0030c: je     0x140f00346
0x00f0030e: mov    r8d,0xc
0x00f00314: lea    rdx,[rip+0x7ff2d5]        # 0x1416ff5f0 ; literal="[LPAGE:SITE:"
0x00f0031b: mov    rcx,rbx
0x00f0031e: call   0x140070fd0
0x00f00323: mov    rdx,rbx
0x00f00326: mov    ecx,DWORD PTR [rdi+0x88]
0x00f0032c: call   0x140542fb0
0x00f00331: mov    r8d,0x1
0x00f00337: lea    rdx,[rip+0x71405a]        # 0x141614398 ; literal="]"
0x00f0033e: mov    rcx,rbx
0x00f00341: call   0x140070fd0
0x00f00346: xorps  xmm0,xmm0
0x00f00349: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f0034e: mov    QWORD PTR [rsp+0x30],0x0
0x00f00357: mov    QWORD PTR [rsp+0x38],0xf
0x00f00360: mov    BYTE PTR [rsp+0x20],0x0
0x00f00365: xor    r9d,r9d
0x00f00368: mov    r8b,0x1
0x00f0036b: lea    rdx,[rsp+0x20]
0x00f00370: mov    rcx,rdi
0x00f00373: call   0x140aaafe0
0x00f00378: lea    rdx,[rsp+0x20]
0x00f0037d: cmp    QWORD PTR [rsp+0x38],0xf
0x00f00383: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f00389: mov    r8,QWORD PTR [rsp+0x30]
0x00f0038e: mov    rcx,rbx
0x00f00391: call   0x140070fd0
0x00f00396: test   esi,esi
0x00f00398: je     0x140f003b0
0x00f0039a: mov    r8d,0x8
0x00f003a0: lea    rdx,[rip+0x714511]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f003a7: mov    rcx,rbx
0x00f003aa: call   0x140070fd0
0x00f003af: nop
0x00f003b0: mov    rdx,QWORD PTR [rsp+0x38]
0x00f003b5: cmp    rdx,0xf
0x00f003b9: jbe    0x140f003f0
0x00f003bb: inc    rdx
0x00f003be: mov    rcx,QWORD PTR [rsp+0x20]
0x00f003c3: mov    rax,rcx
0x00f003c6: cmp    rdx,0x1000
0x00f003cd: jb     0x140f003eb
0x00f003cf: add    rdx,0x27
0x00f003d3: mov    rcx,QWORD PTR [rcx-0x8]
0x00f003d7: sub    rax,rcx
0x00f003da: add    rax,0xfffffffffffffff8
0x00f003de: cmp    rax,0x1f
0x00f003e2: jbe    0x140f003eb
0x00f003e4: call   QWORD PTR [rip+0x6fb6de]        # 0x1415fbac8
0x00f003ea: int3
0x00f003eb: call   0x14154de20
0x00f003f0: mov    rcx,QWORD PTR [rsp+0x40]
0x00f003f5: xor    rcx,rsp
0x00f003f8: call   0x14154de00
0x00f003fd: mov    rbx,QWORD PTR [rsp+0x90]
0x00f00405: add    rsp,0x50
0x00f00409: pop    r15
0x00f0040b: pop    r14
0x00f0040d: pop    rdi
0x00f0040e: pop    rsi
0x00f0040f: pop    rbp
0x00f00410: ret
0x00f00411: nop    DWORD PTR [rax]
