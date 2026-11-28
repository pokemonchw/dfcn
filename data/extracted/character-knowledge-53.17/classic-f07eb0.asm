; classic PE:6aea11a5:0272d000; reference-description:general_ref_entityst; RVA 0xf07eb0..0xf08050; code ends 0xf08050
0x00f07eb0: mov    QWORD PTR [rsp+0x18],rbx
0x00f07eb5: mov    QWORD PTR [rsp+0x20],rsi
0x00f07eba: push   rdi
0x00f07ebb: sub    rsp,0x50
0x00f07ebf: mov    rax,QWORD PTR [rip+0x9b017a]        # 0x1418b8040
0x00f07ec6: xor    rax,rsp
0x00f07ec9: mov    QWORD PTR [rsp+0x40],rax
0x00f07ece: mov    esi,r8d
0x00f07ed1: mov    rbx,rdx
0x00f07ed4: mov    QWORD PTR [rdx+0x10],0x0
0x00f07edc: mov    rax,rdx
0x00f07edf: cmp    QWORD PTR [rdx+0x18],0xf
0x00f07ee4: jbe    0x140f07ee9
0x00f07ee6: mov    rax,QWORD PTR [rdx]
0x00f07ee9: mov    BYTE PTR [rax],0x0
0x00f07eec: mov    ecx,DWORD PTR [rcx+0x8]
0x00f07eef: mov    rax,QWORD PTR [rip+0x14e5c8a]        # 0x1423edb80
0x00f07ef6: sub    rax,QWORD PTR [rip+0x14e5c7b]        # 0x1423edb78
0x00f07efd: test   rax,0xfffffffffffffff8
0x00f07f03: je     0x140f08033
0x00f07f09: cmp    ecx,0xffffffff
0x00f07f0c: je     0x140f08033
0x00f07f12: lea    rdx,[rip+0x14e5c5f]        # 0x1423edb78
0x00f07f19: call   0x1400bb660
0x00f07f1e: mov    rdi,rax
0x00f07f21: test   rax,rax
0x00f07f24: je     0x140f08033
0x00f07f2a: cmp    BYTE PTR [rax+0x92],0x0
0x00f07f31: je     0x140f0801e
0x00f07f37: and    esi,0x2
0x00f07f3a: je     0x140f07f71
0x00f07f3c: mov    r8d,0xb
0x00f07f42: lea    rdx,[rip+0x771d4f]        # 0x141679c98 ; literal="[LPAGE:ENT:"
0x00f07f49: mov    rcx,rbx
0x00f07f4c: call   0x140070fd0
0x00f07f51: mov    rdx,rbx
0x00f07f54: mov    ecx,DWORD PTR [rdi+0x4]
0x00f07f57: call   0x140542fb0
0x00f07f5c: mov    r8d,0x1
0x00f07f62: lea    rdx,[rip+0x70c42f]        # 0x141614398 ; literal="]"
0x00f07f69: mov    rcx,rbx
0x00f07f6c: call   0x140070fd0
0x00f07f71: xorps  xmm0,xmm0
0x00f07f74: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f07f79: mov    QWORD PTR [rsp+0x30],0x0
0x00f07f82: mov    QWORD PTR [rsp+0x38],0xf
0x00f07f8b: mov    BYTE PTR [rsp+0x20],0x0
0x00f07f90: lea    rcx,[rdi+0x20]
0x00f07f94: xor    r9d,r9d
0x00f07f97: mov    r8b,0x1
0x00f07f9a: lea    rdx,[rsp+0x20]
0x00f07f9f: call   0x140aaafe0
0x00f07fa4: lea    rdx,[rsp+0x20]
0x00f07fa9: cmp    QWORD PTR [rsp+0x38],0xf
0x00f07faf: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f07fb5: mov    r8,QWORD PTR [rsp+0x30]
0x00f07fba: mov    rcx,rbx
0x00f07fbd: call   0x140070fd0
0x00f07fc2: test   esi,esi
0x00f07fc4: je     0x140f07fdc
0x00f07fc6: mov    r8d,0x8
0x00f07fcc: lea    rdx,[rip+0x70c8e5]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f07fd3: mov    rcx,rbx
0x00f07fd6: call   0x140070fd0
0x00f07fdb: nop
0x00f07fdc: mov    rdx,QWORD PTR [rsp+0x38]
0x00f07fe1: cmp    rdx,0xf
0x00f07fe5: jbe    0x140f08033
0x00f07fe7: inc    rdx
0x00f07fea: mov    rcx,QWORD PTR [rsp+0x20]
0x00f07fef: mov    rax,rcx
0x00f07ff2: cmp    rdx,0x1000
0x00f07ff9: jb     0x140f08017
0x00f07ffb: add    rdx,0x27
0x00f07fff: mov    rcx,QWORD PTR [rcx-0x8]
0x00f08003: sub    rax,rcx
0x00f08006: add    rax,0xfffffffffffffff8
0x00f0800a: cmp    rax,0x1f
0x00f0800e: jbe    0x140f08017
0x00f08010: call   QWORD PTR [rip+0x6f3ab2]        # 0x1415fbac8
0x00f08016: int3
0x00f08017: call   0x14154de20
0x00f0801c: jmp    0x140f08033
0x00f0801e: mov    r8d,0x10
0x00f08024: lea    rdx,[rip+0x851abd]        # 0x141759ae8 ; literal="an unnamed group"
0x00f0802b: mov    rcx,rbx
0x00f0802e: call   0x140070e90
0x00f08033: mov    rcx,QWORD PTR [rsp+0x40]
0x00f08038: xor    rcx,rsp
0x00f0803b: call   0x14154de00
0x00f08040: mov    rbx,QWORD PTR [rsp+0x70]
0x00f08045: mov    rsi,QWORD PTR [rsp+0x78]
0x00f0804a: add    rsp,0x50
0x00f0804e: pop    rdi
0x00f0804f: ret
