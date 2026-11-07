; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x1409e4100..0x1409e41d5
0x1409e4100: mov    QWORD PTR [rsp+0x10],rbx
0x1409e4105: mov    QWORD PTR [rsp+0x18],rbp
0x1409e410a: mov    QWORD PTR [rsp+0x20],rdi
0x1409e410f: push   r12
0x1409e4111: push   r14
0x1409e4113: push   r15
0x1409e4115: sub    rsp,0x20
0x1409e4119: mov    rbx,QWORD PTR [rcx+0x1028]
0x1409e4120: mov    r14d,edx
0x1409e4123: mov    rdi,QWORD PTR [rcx+0x1030]
0x1409e412a: xor    ebp,ebp
0x1409e412c: mov    r15,QWORD PTR [rip+0x19ed6cd]        # 0x1423d1800
0x1409e4133: mov    r12,QWORD PTR [rip+0x19ed6be]        # 0x1423d17f8
0x1409e413a: mov    QWORD PTR [rsp+0x40],rsi
0x1409e413f: nop
0x1409e4140: cmp    rbx,rdi
0x1409e4143: jae    0x1409e41b4
0x1409e4145: mov    rcx,QWORD PTR [rbx]
0x1409e4148: test   BYTE PTR [rcx+0x40],0x4
0x1409e414c: je     0x1409e41ae
0x1409e414e: mov    ecx,DWORD PTR [rcx]
0x1409e4150: cmp    ecx,r14d
0x1409e4153: je     0x1409e41ae
0x1409e4155: mov    rax,r15
0x1409e4158: sub    rax,r12
0x1409e415b: test   rax,0xfffffffffffffff8
0x1409e4161: je     0x1409e41ae
0x1409e4163: cmp    ecx,0xffffffff
0x1409e4166: je     0x1409e41ae
0x1409e4168: lea    rdx,[rip+0x19ed689]        # 0x1423d17f8
0x1409e416f: call   0x1400ba0a0
0x1409e4174: mov    rsi,rax
0x1409e4177: test   rax,rax
0x1409e417a: je     0x1409e41ae
0x1409e417c: cmp    DWORD PTR [rax+0x1d40],0x0
0x1409e4183: jg     0x1409e41ae
0x1409e4185: cmp    DWORD PTR [rax+0x1d44],0x0
0x1409e418c: jg     0x1409e41ae
0x1409e418e: lea    rdx,[rax+0x1028]
0x1409e4195: mov    ecx,r14d
0x1409e4198: call   0x1400b9dc0
0x1409e419d: test   rax,rax
0x1409e41a0: je     0x1409e41a8
0x1409e41a2: test   BYTE PTR [rax+0x40],0x4
0x1409e41a6: jne    0x1409e41ae
0x1409e41a8: add    ebp,DWORD PTR [rsi+0x1d00]
0x1409e41ae: add    rbx,0x8
0x1409e41b2: jmp    0x1409e4140
0x1409e41b4: mov    rsi,QWORD PTR [rsp+0x40]
0x1409e41b9: mov    eax,ebp
0x1409e41bb: mov    rbp,QWORD PTR [rsp+0x50]
0x1409e41c0: mov    rbx,QWORD PTR [rsp+0x48]
0x1409e41c5: mov    rdi,QWORD PTR [rsp+0x58]
0x1409e41ca: add    rsp,0x20
0x1409e41ce: pop    r15
0x1409e41d0: pop    r14
0x1409e41d2: pop    r12
0x1409e41d4: ret
