0x1e160: mov    QWORD PTR [rsp+0x8],rbx
0x1e165: mov    QWORD PTR [rsp+0x10],rbp
0x1e16a: mov    QWORD PTR [rsp+0x18],rsi
0x1e16f: push   rdi
0x1e170: push   r12
0x1e172: push   r13
0x1e174: push   r14
0x1e176: push   r15
0x1e178: sub    rsp,0x30
0x1e17c: mov    rbp,rcx
0x1e17f: mov    rax,QWORD PTR [rip+0x2a4da]        # 0x180048660
0x1e186: mov    rdx,QWORD PTR [rax]
0x1e189: mov    r15,QWORD PTR [rdx+0x14cd8]
0x1e190: test   r15,r15
0x1e193: je     0x18001e37a
0x1e199: movabs rbx,0x7ffffffffffffff
0x1e1a3: mov    rdi,QWORD PTR [r15]
0x1e1a6: movzx  ecx,WORD PTR [rdi+0x14]
0x1e1aa: call   QWORD PTR [rip+0x2a718]        # 0x1800488c8
0x1e1b0: cmp    DWORD PTR [rax+0x8],0x1
0x1e1b4: jne    0x18001e36d
0x1e1ba: lea    rdx,[rdi+0x1c]
0x1e1be: mov    rcx,rbp
0x1e1c1: call   0x180003350
0x1e1c6: mov    r13,rax
0x1e1c9: mov    rdx,rax
0x1e1cc: and    rdx,QWORD PTR [rbp+0x30]
0x1e1d0: add    rdx,rdx
0x1e1d3: mov    r8,QWORD PTR [rbp+0x18]
0x1e1d7: mov    rcx,QWORD PTR [r8+rdx*8+0x8]
0x1e1dc: lea    r12,[rbp+0x8]
0x1e1e0: mov    rsi,QWORD PTR [r12]
0x1e1e4: cmp    rcx,rsi
0x1e1e7: je     0x18001e21d
0x1e1e9: mov    r8,QWORD PTR [r8+rdx*8]
0x1e1ed: movzx  edx,WORD PTR [rdi+0x1c]
0x1e1f1: cmp    dx,WORD PTR [rcx+0x10]
0x1e1f5: jne    0x18001e20f
0x1e1f7: movzx  eax,WORD PTR [rcx+0x12]
0x1e1fb: cmp    WORD PTR [rdi+0x1e],ax
0x1e1ff: jne    0x18001e20f
0x1e201: movzx  eax,WORD PTR [rcx+0x14]
0x1e205: cmp    WORD PTR [rdi+0x20],ax
0x1e209: je     0x18001e36d
0x1e20f: cmp    rcx,r8
0x1e212: je     0x18001e21a
0x1e214: mov    rcx,QWORD PTR [rcx+0x8]
0x1e218: jmp    0x18001e1f1
0x1e21a: mov    rsi,rcx
0x1e21d: cmp    QWORD PTR [rbp+0x10],rbx
0x1e221: je     0x18001e397
0x1e227: mov    QWORD PTR [rsp+0x20],r12
0x1e22c: mov    QWORD PTR [rsp+0x28],0x0
0x1e235: mov    ecx,0x20
0x1e23a: call   0x1800437d8
0x1e23f: mov    rbx,rax
0x1e242: mov    QWORD PTR [rsp+0x28],rax
0x1e247: mov    ecx,DWORD PTR [rdi+0x1c]
0x1e24a: mov    DWORD PTR [rax+0x10],ecx
0x1e24d: movzx  ecx,WORD PTR [rdi+0x20]
0x1e251: mov    WORD PTR [rax+0x14],cx
0x1e255: mov    QWORD PTR [rax+0x18],rdi
0x1e259: mov    rcx,QWORD PTR [rbp+0x10]
0x1e25d: add    rcx,0x1
0x1e261: xorps  xmm0,xmm0
0x1e264: js     0x18001e26d
0x1e266: cvtsi2ss xmm0,rcx
0x1e26b: jmp    0x18001e282
0x1e26d: mov    rax,rcx
0x1e270: shr    rax,1
0x1e273: and    ecx,0x1
0x1e276: or     rax,rcx
0x1e279: cvtsi2ss xmm0,rax
0x1e27e: addss  xmm0,xmm0
0x1e282: mov    rcx,QWORD PTR [rbp+0x38]
0x1e286: xorps  xmm1,xmm1
0x1e289: test   rcx,rcx
0x1e28c: js     0x18001e295
0x1e28e: cvtsi2ss xmm1,rcx
0x1e293: jmp    0x18001e2aa
0x1e295: mov    rax,rcx
0x1e298: shr    rax,1
0x1e29b: and    ecx,0x1
0x1e29e: or     rax,rcx
0x1e2a1: cvtsi2ss xmm1,rax
0x1e2a6: addss  xmm1,xmm1
0x1e2aa: divss  xmm0,xmm1
0x1e2ae: comiss xmm0,DWORD PTR [rbp+0x0]
0x1e2b2: jbe    0x18001e30f
0x1e2b4: mov    rcx,rbp
0x1e2b7: call   0x1800165d0
0x1e2bc: mov    rax,QWORD PTR [rbp+0x30]
0x1e2c0: and    rax,r13
0x1e2c3: add    rax,rax
0x1e2c6: mov    rdx,QWORD PTR [rbp+0x18]
0x1e2ca: mov    rcx,QWORD PTR [rdx+rax*8+0x8]
0x1e2cf: mov    rsi,QWORD PTR [r12]
0x1e2d3: cmp    rcx,rsi
0x1e2d6: je     0x18001e30f
0x1e2d8: mov    rdx,QWORD PTR [rdx+rax*8]
0x1e2dc: movzx  r8d,WORD PTR [rbx+0x10]
0x1e2e1: cmp    r8w,WORD PTR [rcx+0x10]
0x1e2e6: jne    0x18001e2fc
0x1e2e8: movzx  eax,WORD PTR [rcx+0x12]
0x1e2ec: cmp    WORD PTR [rbx+0x12],ax
0x1e2f0: jne    0x18001e2fc
0x1e2f2: movzx  eax,WORD PTR [rcx+0x14]
0x1e2f6: cmp    WORD PTR [rbx+0x14],ax
0x1e2fa: je     0x18001e307
0x1e2fc: cmp    rcx,rdx
0x1e2ff: je     0x18001e30c
0x1e301: mov    rcx,QWORD PTR [rcx+0x8]
0x1e305: jmp    0x18001e2e1
0x1e307: mov    rsi,QWORD PTR [rcx]
0x1e30a: jmp    0x18001e30f
0x1e30c: mov    rsi,rcx
0x1e30f: mov    QWORD PTR [rsp+0x28],0x0
0x1e318: mov    rdx,QWORD PTR [rsi+0x8]
0x1e31c: inc    QWORD PTR [rbp+0x10]
0x1e320: mov    QWORD PTR [rbx],rsi
0x1e323: mov    QWORD PTR [rbx+0x8],rdx
0x1e327: mov    QWORD PTR [rdx],rbx
0x1e32a: mov    QWORD PTR [rsi+0x8],rbx
0x1e32e: mov    rax,QWORD PTR [rbp+0x30]
0x1e332: and    rax,r13
0x1e335: add    rax,rax
0x1e338: mov    rcx,QWORD PTR [rbp+0x18]
0x1e33c: mov    r8,QWORD PTR [rcx+rax*8]
0x1e340: cmp    r8,QWORD PTR [r12]
0x1e344: jne    0x18001e34c
0x1e346: mov    QWORD PTR [rcx+rax*8],rbx
0x1e34a: jmp    0x18001e35e
0x1e34c: cmp    r8,rsi
0x1e34f: jne    0x18001e357
0x1e351: mov    QWORD PTR [rcx+rax*8],rbx
0x1e355: jmp    0x18001e363
0x1e357: cmp    QWORD PTR [rcx+rax*8+0x8],rdx
0x1e35c: jne    0x18001e363
0x1e35e: mov    QWORD PTR [rcx+rax*8+0x8],rbx
0x1e363: movabs rbx,0x7ffffffffffffff
0x1e36d: mov    r15,QWORD PTR [r15+0x10]
0x1e371: test   r15,r15
0x1e374: jne    0x18001e1a3
0x1e37a: mov    rbx,QWORD PTR [rsp+0x60]
0x1e37f: mov    rbp,QWORD PTR [rsp+0x68]
0x1e384: mov    rsi,QWORD PTR [rsp+0x70]
0x1e389: add    rsp,0x30
0x1e38d: pop    r15
0x1e38f: pop    r14
0x1e391: pop    r13
0x1e393: pop    r12
0x1e395: pop    rdi
0x1e396: ret
0x1e397: lea    rcx,[rip+0x2bf72]        # 0x18004a310
0x1e39e: call   0x180041949
0x1e3a3: int3
