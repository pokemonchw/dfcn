; reference; PE:6a70a6d9:02711000; look vector 0x269bc20; owner 0x420e40..0x420fb4
0x00420e40: rex push rsi
0x00420e42: push   rdi
0x00420e43: push   r15
0x00420e45: sub    rsp,0x20
0x00420e49: mov    rax,QWORD PTR [rip+0x227add8]        # 0x14269bc28
0x00420e50: mov    rsi,rdx
0x00420e53: mov    rdx,QWORD PTR [rip+0x227adc6]        # 0x14269bc20
0x00420e5a: mov    rdi,rsi
0x00420e5d: sub    rdi,rdx
0x00420e60: sub    rax,rdx
0x00420e63: mov    r15,r8
0x00420e66: sar    rdi,0x3
0x00420e6a: sar    rax,0x3
0x00420e6e: movabs r8,0x1fffffffffffffff
0x00420e78: cmp    rax,r8
0x00420e7b: je     0x140420fa8
0x00420e81: mov    rcx,QWORD PTR [rip+0x227ada8]        # 0x14269bc30
0x00420e88: sub    rcx,rdx
0x00420e8b: mov    QWORD PTR [rsp+0x48],rbp
0x00420e90: sar    rcx,0x3
0x00420e94: lea    rbp,[rax+0x1]
0x00420e98: mov    rdx,rcx
0x00420e9b: mov    rax,r8
0x00420e9e: shr    rdx,1
0x00420ea1: sub    rax,rdx
0x00420ea4: cmp    rcx,rax
0x00420ea7: jbe    0x140420eef
0x00420ea9: mov    rcx,r8
0x00420eac: mov    QWORD PTR [rsp+0x40],rbx
0x00420eb1: mov    QWORD PTR [rsp+0x50],r14
0x00420eb6: lea    r14,[rcx*8+0x0]
0x00420ebe: mov    rcx,r14
0x00420ec1: call   0x1400707d0
0x00420ec6: mov    rcx,QWORD PTR [r15]
0x00420ec9: mov    rbx,rax
0x00420ecc: mov    QWORD PTR [rax+rdi*8],rcx
0x00420ed0: mov    rcx,rax
0x00420ed3: mov    r8,QWORD PTR [rip+0x227ad4e]        # 0x14269bc28
0x00420eda: mov    rdx,QWORD PTR [rip+0x227ad3f]        # 0x14269bc20
0x00420ee1: lea    rdi,[rax+rdi*8]
0x00420ee5: cmp    rsi,r8
0x00420ee8: jne    0x140420f08
0x00420eea: sub    r8,rdx
0x00420eed: jmp    0x140420f24
0x00420eef: lea    rax,[rdx+rcx*1]
0x00420ef3: mov    rcx,rbp
0x00420ef6: cmp    rax,rbp
0x00420ef9: cmovae rcx,rax
0x00420efd: cmp    rcx,r8
0x00420f00: ja     0x140420fae
0x00420f06: jmp    0x140420eac
0x00420f08: mov    r8,rsi
0x00420f0b: sub    r8,rdx
0x00420f0e: call   0x14153ae1a
0x00420f13: mov    r8,QWORD PTR [rip+0x227ad0e]        # 0x14269bc28
0x00420f1a: lea    rcx,[rdi+0x8]
0x00420f1e: sub    r8,rsi
0x00420f21: mov    rdx,rsi
0x00420f24: call   0x14153ae1a
0x00420f29: mov    rcx,QWORD PTR [rip+0x227acf0]        # 0x14269bc20
0x00420f30: test   rcx,rcx
0x00420f33: je     0x140420f69
0x00420f35: mov    rdx,QWORD PTR [rip+0x227acf4]        # 0x14269bc30
0x00420f3c: sub    rdx,rcx
0x00420f3f: and    rdx,0xfffffffffffffff8
0x00420f43: cmp    rdx,0x1000
0x00420f4a: jb     0x140420f64
0x00420f4c: mov    r8,QWORD PTR [rcx-0x8]
0x00420f50: add    rdx,0x27
0x00420f54: sub    rcx,r8
0x00420f57: lea    rax,[rcx-0x8]
0x00420f5b: cmp    rax,0x1f
0x00420f5f: ja     0x140420fa1
0x00420f61: mov    rcx,r8
0x00420f64: call   0x141539680
0x00420f69: lea    rcx,[rbx+rbp*8]
0x00420f6d: mov    QWORD PTR [rip+0x227acac],rbx        # 0x14269bc20
0x00420f74: mov    rbp,QWORD PTR [rsp+0x48]
0x00420f79: mov    rax,rdi
0x00420f7c: mov    QWORD PTR [rip+0x227aca5],rcx        # 0x14269bc28
0x00420f83: lea    rcx,[r14+rbx*1]
0x00420f87: mov    rbx,QWORD PTR [rsp+0x40]
0x00420f8c: mov    r14,QWORD PTR [rsp+0x50]
0x00420f91: mov    QWORD PTR [rip+0x227ac98],rcx        # 0x14269bc30
0x00420f98: add    rsp,0x20
0x00420f9c: pop    r15
0x00420f9e: pop    rdi
0x00420f9f: pop    rsi
0x00420fa0: ret
0x00420fa1: call   QWORD PTR [rip+0x11c4b81]        # 0x1415e5b28
0x00420fa7: int3
0x00420fa8: call   0x140070900
0x00420fad: int3
0x00420fae: call   0x1400657c0
0x00420fb3: int3
