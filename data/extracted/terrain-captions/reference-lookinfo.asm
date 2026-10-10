; reference; PE:6a70a6d9:02711000; lookinfo; RVA 0x406860..0x4084de
0x00406860: mov    QWORD PTR [rsp+0x10],rbx
0x00406865: mov    QWORD PTR [rsp+0x18],rsi
0x0040686a: mov    QWORD PTR [rsp+0x20],rdi
0x0040686f: push   rbp
0x00406870: push   r12
0x00406872: push   r13
0x00406874: push   r14
0x00406876: push   r15
0x00406878: lea    rbp,[rsp-0x90]
0x00406880: sub    rsp,0x190
0x00406887: mov    rax,QWORD PTR [rip+0x14957b2]        # 0x14189c040
0x0040688e: xor    rax,rsp
0x00406891: mov    QWORD PTR [rbp+0x88],rax
0x00406898: mov    rsi,rcx
0x0040689b: lea    rbx,[rcx+0x28]
0x0040689f: xor    r12d,r12d
0x004068a2: mov    QWORD PTR [rbx+0x10],r12
0x004068a6: mov    rax,rbx
0x004068a9: cmp    QWORD PTR [rbx+0x18],0xf
0x004068ae: jbe    0x1404068b3
0x004068b0: mov    rax,QWORD PTR [rbx]
0x004068b3: mov    BYTE PTR [rax],r12b
0x004068b6: movsxd rax,DWORD PTR [rcx]
0x004068b9: cmp    eax,0xf
0x004068bc: ja     0x1404084ae
0x004068c2: lea    r15,[rip+0xffffffffffbf9737]        # 0x140000000
0x004068c9: mov    ecx,DWORD PTR [r15+rax*4+0x4084e0]
0x004068d1: add    rcx,r15
0x004068d4: mov    r13d,0x1
0x004068da: mov    r14d,0x2
0x004068e0: jmp    rcx
0x004068e2: mov    r11d,DWORD PTR [rsi+0x4]
0x004068e6: mov    r8,QWORD PTR [rip+0x1fdeb6b]        # 0x1423e5458
0x004068ed: mov    rdi,QWORD PTR [rip+0x1fdeb5c]        # 0x1423e5450
0x004068f4: sub    r8,rdi
0x004068f7: sar    r8,0x3
0x004068fb: test   r8d,r8d
0x004068fe: je     0x140407704
0x00406904: cmp    r11d,0xffffffff
0x00406908: je     0x140407704
0x0040690e: sub    r8d,r13d
0x00406911: mov    edx,r12d
0x00406914: js     0x140406947
0x00406916: data16 nop WORD PTR [rax+rax*1+0x0]
0x00406920: lea    ecx,[rdx+r8*1]
0x00406924: sar    ecx,1
0x00406926: movsxd rax,ecx
0x00406929: mov    r10,QWORD PTR [rdi+rax*8]
0x0040692d: cmp    DWORD PTR [r10+0x1c],r11d
0x00406931: je     0x14040694a
0x00406933: lea    eax,[rcx+0x1]
0x00406936: cmovle edx,eax
0x00406939: lea    eax,[rcx-0x1]
0x0040693c: cmovle eax,r8d
0x00406940: mov    r8d,eax
0x00406943: cmp    edx,eax
0x00406945: jle    0x140406920
0x00406947: mov    r10,r12
0x0040694a: test   r10,r10
0x0040694d: je     0x140407704
0x00406953: mov    r9d,0xffffffff
0x00406959: xor    r8d,r8d
0x0040695c: mov    rdx,rbx
0x0040695f: mov    rcx,r10
0x00406962: call   0x140c65450
0x00406967: mov    DWORD PTR [rsi+0x48],0x6
0x0040696e: jmp    0x1404084a9
0x00406973: mov    BYTE PTR [rsp+0x28],r13b
0x00406978: movzx  eax,WORD PTR [rsi+0x20]
0x0040697c: mov    WORD PTR [rsp+0x20],ax
0x00406981: movzx  r9d,WORD PTR [rsi+0x1e]
0x00406986: movzx  r8d,WORD PTR [rsi+0x1c]
0x0040698b: mov    rdx,rbx
0x0040698e: lea    rcx,[rip+0x1fcab5b]        # 0x1423d14f0
0x00406995: call   0x140e7d330
0x0040699a: mov    DWORD PTR [rsi+0x48],r13d
0x0040699e: jmp    0x1404084a9
0x004069a3: movsxd rax,DWORD PTR [rsi+0x4]
0x004069a7: mov    edi,0x7
0x004069ac: cmp    eax,0x8
0x004069af: ja     0x140406ab0
0x004069b5: mov    ecx,DWORD PTR [r15+rax*4+0x408520]
0x004069bd: add    rcx,r15
0x004069c0: jmp    rcx
0x004069c2: mov    r8,r12
0x004069c5: cmp    WORD PTR [rsi+0x8],0xa
0x004069ca: setl   r8b
0x004069ce: add    r8,0xd
0x004069d2: lea    rcx,[rip+0x123347f]        # 0x141639e58 ; literal="Quiet movement"
0x004069d9: lea    rdx,[rip+0x1233468]        # 0x141639e48 ; literal="Loud movement"
0x004069e0: cmp    WORD PTR [rsi+0x8],0xa
0x004069e5: cmovl  rdx,rcx
0x004069e9: jmp    0x140406aa8
0x004069ee: lea    rax,[rip+0x1233443]        # 0x141639e38 ; literal="Light combat"
0x004069f5: lea    rdx,[rip+0x123342c]        # 0x141639e28 ; literal="Heavy combat"
0x004069fc: cmp    WORD PTR [rsi+0x8],0xa
0x00406a01: cmovl  rdx,rax
0x00406a05: mov    r8d,0xc
0x00406a0b: jmp    0x140406aa8
0x00406a10: mov    r8,r12
0x00406a13: cmp    WORD PTR [rsi+0x8],0xa
0x00406a18: setl   r8b
0x00406a1c: add    r8,0x11
0x00406a20: lea    rcx,[rip+0x1233331]        # 0x141639d58 ; literal="Quiet vocalization"
0x00406a27: lea    rdx,[rip+0x1233312]        # 0x141639d40 ; literal="Loud vocalization"
0x00406a2e: cmp    WORD PTR [rsi+0x8],0xa
0x00406a33: cmovl  rdx,rcx
0x00406a37: jmp    0x140406aa8
0x00406a39: mov    r8,r12
0x00406a3c: cmp    WORD PTR [rsi+0x8],0xa
0x00406a41: setl   r8b
0x00406a45: add    r8,0xd
0x00406a49: lea    rcx,[rip+0x12332e0]        # 0x141639d30 ; literal="Quiet grinding"
0x00406a50: lea    rdx,[rip+0x12332c9]        # 0x141639d20 ; literal="Loud grinding"
0x00406a57: cmp    WORD PTR [rsi+0x8],0xa
0x00406a5c: cmovl  rdx,rcx
0x00406a60: jmp    0x140406aa8
0x00406a62: mov    r8d,0xc
0x00406a68: lea    rdx,[rip+0x1233321]        # 0x141639d90 ; literal="Storytelling"
0x00406a6f: jmp    0x140406aa8
0x00406a71: mov    r8d,0x9
0x00406a77: lea    rdx,[rip+0x1233322]        # 0x141639da0 ; literal="Preaching"
0x00406a7e: jmp    0x140406aa8
0x00406a80: mov    r8d,0xf
0x00406a86: lea    rdx,[rip+0x12332e3]        # 0x141639d70 ; literal="Poem recitation"
0x00406a8d: jmp    0x140406aa8
0x00406a8f: mov    r8d,0xd
0x00406a95: lea    rdx,[rip+0x12332e4]        # 0x141639d80 ; literal="Musical voice"
0x00406a9c: jmp    0x140406aa8
0x00406a9e: mov    r8,rdi
0x00406aa1: lea    rdx,[rip+0x1233748]        # 0x14163a1f0 ; literal="Dancing"
0x00406aa8: mov    rcx,rbx
0x00406aab: call   0x14006f8d0
0x00406ab0: mov    r8,rdi
0x00406ab3: lea    rdx,[rip+0x123373e]        # 0x14163a1f8 ; literal=" (heard"
0x00406aba: mov    rcx,rbx
0x00406abd: call   0x14006fa10
0x00406ac2: cmp    DWORD PTR [rsi+0xc],0x4b
0x00406ac6: jl     0x140406add
0x00406ac8: mov    r8d,0x9
0x00406ace: lea    rdx,[rip+0x12336f3]        # 0x14163a1c8 ; literal=" recently"
0x00406ad5: mov    rcx,rbx
0x00406ad8: call   0x14006fa10
0x00406add: mov    r8,r13
0x00406ae0: lea    rdx,[rip+0x120ea99]        # 0x141615580 ; literal=")"
0x00406ae7: mov    rcx,rbx
0x00406aea: call   0x14006fa10
0x00406aef: mov    DWORD PTR [rsi+0x48],0x3
0x00406af6: jmp    0x1404084a9
0x00406afb: movsxd rax,DWORD PTR [rsi+0x4]
0x00406aff: cmp    eax,0xa
0x00406b02: ja     0x140406c44
0x00406b08: mov    ecx,DWORD PTR [r15+rax*4+0x408544]
0x00406b10: add    rcx,r15
0x00406b13: jmp    rcx
0x00406b15: lea    rdx,[rip+0x12336bc]        # 0x14163a1d8 ; literal="Creature (remembered)"
0x00406b1c: jmp    0x140406c36
0x00406b21: mov    r8d,0x13
0x00406b27: lea    rdx,[rip+0x123370a]        # 0x14163a238 ; literal="Object (remembered)"
0x00406b2e: mov    rcx,rbx
0x00406b31: call   0x14006f8d0
0x00406b36: mov    DWORD PTR [rsi+0x48],r12d
0x00406b3a: jmp    0x1404084a9
0x00406b3f: mov    r8d,0x16
0x00406b45: lea    rdx,[rip+0x1233704]        # 0x14163a250 ; literal="Structure (remembered)"
0x00406b4c: mov    rcx,rbx
0x00406b4f: call   0x14006f8d0
0x00406b54: mov    DWORD PTR [rsi+0x48],r12d
0x00406b58: jmp    0x1404084a9
0x00406b5d: mov    r8d,0x11
0x00406b63: lea    rdx,[rip+0x1233696]        # 0x14163a200 ; literal="Wall (remembered)"
0x00406b6a: mov    rcx,rbx
0x00406b6d: call   0x14006f8d0
0x00406b72: mov    DWORD PTR [rsi+0x48],r12d
0x00406b76: jmp    0x1404084a9
0x00406b7b: mov    r8d,0x19
0x00406b81: lea    rdx,[rip+0x1233690]        # 0x14163a218 ; literal="Upward stair (remembered)"
0x00406b88: mov    rcx,rbx
0x00406b8b: call   0x14006f8d0
0x00406b90: mov    DWORD PTR [rsi+0x48],r12d
0x00406b94: jmp    0x1404084a9
0x00406b99: mov    r8d,0x1b
0x00406b9f: lea    rdx,[rip+0x1233582]        # 0x14163a128 ; literal="Downward stair (remembered)"
0x00406ba6: mov    rcx,rbx
0x00406ba9: call   0x14006f8d0
0x00406bae: mov    DWORD PTR [rsi+0x48],r12d
0x00406bb2: jmp    0x1404084a9
0x00406bb7: mov    r8d,0x19
0x00406bbd: lea    rdx,[rip+0x1233584]        # 0x14163a148 ; literal="Updown stair (remembered)"
0x00406bc4: mov    rcx,rbx
0x00406bc7: call   0x14006f8d0
0x00406bcc: mov    DWORD PTR [rsi+0x48],r12d
0x00406bd0: jmp    0x1404084a9
0x00406bd5: mov    r8d,0x18
0x00406bdb: lea    rdx,[rip+0x1233506]        # 0x14163a0e8 ; literal="Upward ramp (remembered)"
0x00406be2: mov    rcx,rbx
0x00406be5: call   0x14006f8d0
0x00406bea: mov    DWORD PTR [rsi+0x48],r12d
0x00406bee: jmp    0x1404084a9
0x00406bf3: mov    r8d,0x1a
0x00406bf9: lea    rdx,[rip+0x1233508]        # 0x14163a108 ; literal="Downward ramp (remembered)"
0x00406c00: mov    rcx,rbx
0x00406c03: call   0x14006f8d0
0x00406c08: mov    DWORD PTR [rsi+0x48],r12d
0x00406c0c: jmp    0x1404084a9
0x00406c11: mov    r8d,0x12
0x00406c17: lea    rdx,[rip+0x123357a]        # 0x14163a198 ; literal="Floor (remembered)"
0x00406c1e: mov    rcx,rbx
0x00406c21: call   0x14006f8d0
0x00406c26: mov    DWORD PTR [rsi+0x48],r12d
0x00406c2a: jmp    0x1404084a9
0x00406c2f: lea    rdx,[rip+0x123357a]        # 0x14163a1b0 ; literal="Open air (remembered)"
0x00406c36: mov    r8d,0x15
0x00406c3c: mov    rcx,rbx
0x00406c3f: call   0x14006f8d0
0x00406c44: mov    DWORD PTR [rsi+0x48],r12d
0x00406c48: jmp    0x1404084a9
0x00406c4d: mov    r8d,0x1c
0x00406c53: lea    rdx,[rip+0x123350e]        # 0x14163a168 ; literal="Blood of the living (sensed)"
0x00406c5a: mov    rcx,rbx
0x00406c5d: call   0x14006f8d0
0x00406c62: movzx  eax,WORD PTR [rsi+0x6]
0x00406c66: mov    WORD PTR [rsi+0x48],ax
0x00406c6a: movzx  eax,WORD PTR [rsi+0x8]
0x00406c6e: mov    WORD PTR [rsi+0x4a],ax
0x00406c72: movzx  eax,WORD PTR [rsi+0xa]
0x00406c76: mov    WORD PTR [rsi+0x4c],ax
0x00406c7a: jmp    0x1404084ae
0x00406c7f: mov    r11d,DWORD PTR [rsi+0x4]
0x00406c83: mov    r8,QWORD PTR [rip+0x1fde42e]        # 0x1423e50b8
0x00406c8a: mov    rdi,QWORD PTR [rip+0x1fde41f]        # 0x1423e50b0
0x00406c91: sub    r8,rdi
0x00406c94: sar    r8,0x3
0x00406c98: test   r8d,r8d
0x00406c9b: je     0x140406d22
0x00406ca1: cmp    r11d,0xffffffff
0x00406ca5: je     0x140406d22
0x00406ca7: sub    r8d,r13d
0x00406caa: mov    edx,r12d
0x00406cad: js     0x140406cda
0x00406caf: nop
0x00406cb0: lea    ecx,[rdx+r8*1]
0x00406cb4: sar    ecx,1
0x00406cb6: movsxd rax,ecx
0x00406cb9: mov    r10,QWORD PTR [rdi+rax*8]
0x00406cbd: cmp    DWORD PTR [r10+0x130],r11d
0x00406cc4: je     0x140406cdd
0x00406cc6: lea    eax,[rcx+0x1]
0x00406cc9: cmovle edx,eax
0x00406ccc: lea    eax,[rcx-0x1]
0x00406ccf: cmovle eax,r8d
0x00406cd3: mov    r8d,eax
0x00406cd6: cmp    edx,eax
0x00406cd8: jle    0x140406cb0
0x00406cda: mov    r10,r12
0x00406cdd: test   r10,r10
0x00406ce0: je     0x140406d22
0x00406ce2: mov    eax,DWORD PTR [rip+0x14955b0]        # 0x14189c298
0x00406ce8: test   eax,eax
0x00406cea: jne    0x140406d06
0x00406cec: xor    r8d,r8d
0x00406cef: mov    rdx,rbx
0x00406cf2: mov    rcx,r10
0x00406cf5: call   0x141330c30
0x00406cfa: mov    DWORD PTR [rsi+0x48],0x7
0x00406d01: jmp    0x1404084a9
0x00406d06: cmp    eax,r13d
0x00406d09: jne    0x140406d22
0x00406d0b: mov    BYTE PTR [rsp+0x20],r13b
0x00406d10: movzx  r9d,r13b
0x00406d14: xor    r8d,r8d
0x00406d17: mov    rdx,rbx
0x00406d1a: mov    rcx,r10
0x00406d1d: call   0x14132e430
0x00406d22: mov    DWORD PTR [rsi+0x48],0x7
0x00406d29: jmp    0x1404084a9
0x00406d2e: mov    r11d,DWORD PTR [rsi+0x4]
0x00406d32: mov    rdi,QWORD PTR [rip+0x1fe71d7]        # 0x1423edf10
0x00406d39: mov    r8,QWORD PTR [rip+0x1fe71d8]        # 0x1423edf18
0x00406d40: sub    r8,rdi
0x00406d43: sar    r8,0x3
0x00406d47: test   r8,r8
0x00406d4a: je     0x140406d9e
0x00406d4c: cmp    r11d,0xffffffff
0x00406d50: je     0x140406d9e
0x00406d52: sub    r8d,r13d
0x00406d55: mov    edx,r12d
0x00406d58: js     0x140406d87
0x00406d5a: nop    WORD PTR [rax+rax*1+0x0]
0x00406d60: lea    ecx,[rdx+r8*1]
0x00406d64: sar    ecx,1
0x00406d66: movsxd rax,ecx
0x00406d69: mov    r10,QWORD PTR [rdi+rax*8]
0x00406d6d: cmp    DWORD PTR [r10+0x50],r11d
0x00406d71: je     0x140406d8a
0x00406d73: lea    eax,[rcx+0x1]
0x00406d76: cmovle edx,eax
0x00406d79: lea    eax,[rcx-0x1]
0x00406d7c: cmovle eax,r8d
0x00406d80: mov    r8d,eax
0x00406d83: cmp    edx,eax
0x00406d85: jle    0x140406d60
0x00406d87: mov    r10,r12
0x00406d8a: test   r10,r10
0x00406d8d: je     0x140406d9e
0x00406d8f: mov    rax,QWORD PTR [r10]
0x00406d92: mov    rdx,rbx
0x00406d95: mov    rcx,r10
0x00406d98: call   QWORD PTR [rax+0x188]
0x00406d9e: mov    DWORD PTR [rsi+0x48],0x3
0x00406da5: jmp    0x1404084a9
0x00406daa: mov    r11d,DWORD PTR [rsi+0x8]
0x00406dae: cmp    r11d,0xffffffff
0x00406db2: je     0x140406e2c
0x00406db4: mov    rdi,QWORD PTR [rip+0x1fde695]        # 0x1423e5450
0x00406dbb: mov    r8,QWORD PTR [rip+0x1fde696]        # 0x1423e5458
0x00406dc2: sub    r8,rdi
0x00406dc5: sar    r8,0x3
0x00406dc9: test   r8d,r8d
0x00406dcc: je     0x1404084a2
0x00406dd2: sub    r8d,r13d
0x00406dd5: mov    edx,r12d
0x00406dd8: js     0x140406e07
0x00406dda: nop    WORD PTR [rax+rax*1+0x0]
0x00406de0: lea    ecx,[r8+rdx*1]
0x00406de4: sar    ecx,1
0x00406de6: movsxd rax,ecx
0x00406de9: mov    r10,QWORD PTR [rdi+rax*8]
0x00406ded: cmp    DWORD PTR [r10+0x1c],r11d
0x00406df1: je     0x140406e0a
0x00406df3: lea    eax,[rcx+0x1]
0x00406df6: cmovle edx,eax
0x00406df9: lea    eax,[rcx-0x1]
0x00406dfc: cmovle eax,r8d
0x00406e00: mov    r8d,eax
0x00406e03: cmp    edx,eax
0x00406e05: jle    0x140406de0
0x00406e07: mov    r10,r12
0x00406e0a: test   r10,r10
0x00406e0d: je     0x1404084a2
0x00406e13: mov    r9d,0xffffffff
0x00406e19: xor    r8d,r8d
0x00406e1c: mov    rdx,rbx
0x00406e1f: mov    rcx,r10
0x00406e22: call   0x140c65450
0x00406e27: jmp    0x1404084a2
0x00406e2c: test   BYTE PTR [rsi+0xc],r14b
0x00406e30: je     0x140406ee9
0x00406e36: mov    r8d,0xc
0x00406e3c: lea    rdx,[rip+0x1233345]        # 0x14163a188 ; literal="a colony of "
0x00406e43: mov    rcx,rbx
0x00406e46: call   0x14006f8d0
0x00406e4b: xorps  xmm0,xmm0
0x00406e4e: movups XMMWORD PTR [rbp+0x8],xmm0
0x00406e52: mov    ecx,0xf
0x00406e57: mov    QWORD PTR [rbp+0x20],rcx
0x00406e5b: movsx  rax,WORD PTR [rsi+0x4]
0x00406e60: mov    r8,r12
0x00406e63: mov    QWORD PTR [rbp+0x18],r12
0x00406e67: mov    BYTE PTR [rbp+0x8],r8b
0x00406e6b: test   ax,ax
0x00406e6e: js     0x140406ebc
0x00406e70: mov    rdx,QWORD PTR [rip+0x20e5bf1]        # 0x1424eca68
0x00406e77: mov    r9,rax
0x00406e7a: mov    rax,QWORD PTR [rip+0x20e5bef]        # 0x1424eca70
0x00406e81: sub    rax,rdx
0x00406e84: sar    rax,0x3
0x00406e88: cmp    r9,rax
0x00406e8b: jae    0x140406ebc
0x00406e8d: mov    rdx,QWORD PTR [rdx+r9*8]
0x00406e91: add    rdx,0x40
0x00406e95: lea    rax,[rbp+0x8]
0x00406e99: cmp    rax,rdx
0x00406e9c: je     0x140406ebc
0x00406e9e: mov    r8,QWORD PTR [rdx+0x10]
0x00406ea2: cmp    QWORD PTR [rdx+0x18],rcx
0x00406ea6: jbe    0x140406eab
0x00406ea8: mov    rdx,QWORD PTR [rdx]
0x00406eab: lea    rcx,[rbp+0x8]
0x00406eaf: call   0x14006f8d0
0x00406eb4: mov    rcx,QWORD PTR [rbp+0x20]
0x00406eb8: mov    r8,QWORD PTR [rbp+0x18]
0x00406ebc: lea    rdx,[rbp+0x8]
0x00406ec0: cmp    rcx,0xf
0x00406ec4: cmova  rdx,QWORD PTR [rbp+0x8]
0x00406ec9: mov    rcx,rbx
0x00406ecc: call   0x14006fa10
0x00406ed1: nop
0x00406ed2: mov    rdx,QWORD PTR [rbp+0x20]
0x00406ed6: cmp    rdx,0xf
0x00406eda: jbe    0x1404084a2
0x00406ee0: mov    rcx,QWORD PTR [rbp+0x8]
0x00406ee4: jmp    0x1404070e7
0x00406ee9: mov    eax,DWORD PTR [rsi+0x10]
0x00406eec: cmp    eax,r13d
0x00406eef: ja     0x140406f0a
0x00406ef1: movzx  r9d,WORD PTR [rsi+0x6]
0x00406ef6: xor    r8d,r8d
0x00406ef9: mov    rdx,rbx
0x00406efc: movzx  ecx,WORD PTR [rsi+0x4]
0x00406f00: call   0x140aa3bd0
0x00406f05: jmp    0x1404084a2
0x00406f0a: cmp    eax,0xa
0x00406f0d: jae    0x140406f7e
0x00406f0f: movsx  rcx,WORD PTR [rsi+0x4]
0x00406f14: mov    QWORD PTR [rbx+0x10],r12
0x00406f18: mov    rax,rbx
0x00406f1b: cmp    QWORD PTR [rbx+0x18],0xf
0x00406f20: jbe    0x140406f25
0x00406f22: mov    rax,QWORD PTR [rbx]
0x00406f25: mov    BYTE PTR [rax],r12b
0x00406f28: test   cx,cx
0x00406f2b: js     0x1404084a2
0x00406f31: mov    rdx,rcx
0x00406f34: mov    rax,QWORD PTR [rip+0x20e5b35]        # 0x1424eca70
0x00406f3b: mov    rcx,QWORD PTR [rip+0x20e5b26]        # 0x1424eca68
0x00406f42: sub    rax,rcx
0x00406f45: sar    rax,0x3
0x00406f49: cmp    rdx,rax
0x00406f4c: jae    0x1404084a2
0x00406f52: mov    rdx,QWORD PTR [rcx+rdx*8]
0x00406f56: add    rdx,0x40
0x00406f5a: cmp    rbx,rdx
0x00406f5d: je     0x1404084a2
0x00406f63: mov    r8,QWORD PTR [rdx+0x10]
0x00406f67: cmp    QWORD PTR [rdx+0x18],0xf
0x00406f6c: jbe    0x140406f71
0x00406f6e: mov    rdx,QWORD PTR [rdx]
0x00406f71: mov    rcx,rbx
0x00406f74: call   0x14006f8d0
0x00406f79: jmp    0x1404084a2
0x00406f7e: mov    rcx,rbx
0x00406f81: cmp    eax,0x32
0x00406f84: jae    0x14040703b
0x00406f8a: mov    r8d,0x5
0x00406f90: lea    rdx,[rip+0x12330fd]        # 0x14163a094 ; literal="many "
0x00406f97: call   0x14006f8d0
0x00406f9c: xorps  xmm0,xmm0
0x00406f9f: movups XMMWORD PTR [rbp+0x28],xmm0
0x00406fa3: mov    ecx,0xf
0x00406fa8: mov    QWORD PTR [rbp+0x40],rcx
0x00406fac: movsx  rax,WORD PTR [rsi+0x4]
0x00406fb1: mov    r8,r12
0x00406fb4: mov    QWORD PTR [rbp+0x38],r12
0x00406fb8: mov    BYTE PTR [rbp+0x28],r8b
0x00406fbc: test   ax,ax
0x00406fbf: js     0x14040700d
0x00406fc1: mov    rdx,QWORD PTR [rip+0x20e5aa0]        # 0x1424eca68
0x00406fc8: mov    r9,rax
0x00406fcb: mov    rax,QWORD PTR [rip+0x20e5a9e]        # 0x1424eca70
0x00406fd2: sub    rax,rdx
0x00406fd5: sar    rax,0x3
0x00406fd9: cmp    r9,rax
0x00406fdc: jae    0x14040700d
0x00406fde: mov    rdx,QWORD PTR [rdx+r9*8]
0x00406fe2: add    rdx,0x40
0x00406fe6: lea    rax,[rbp+0x28]
0x00406fea: cmp    rax,rdx
0x00406fed: je     0x14040700d
0x00406fef: mov    r8,QWORD PTR [rdx+0x10]
0x00406ff3: cmp    QWORD PTR [rdx+0x18],rcx
0x00406ff7: jbe    0x140406ffc
0x00406ff9: mov    rdx,QWORD PTR [rdx]
0x00406ffc: lea    rcx,[rbp+0x28]
0x00407000: call   0x14006f8d0
0x00407005: mov    rcx,QWORD PTR [rbp+0x40]
0x00407009: mov    r8,QWORD PTR [rbp+0x38]
0x0040700d: lea    rdx,[rbp+0x28]
0x00407011: cmp    rcx,0xf
0x00407015: cmova  rdx,QWORD PTR [rbp+0x28]
0x0040701a: lea    rcx,[rsi+0x28]
0x0040701e: call   0x14006fa10
0x00407023: nop
0x00407024: mov    rdx,QWORD PTR [rbp+0x40]
0x00407028: cmp    rdx,0xf
0x0040702c: jbe    0x1404084a2
0x00407032: mov    rcx,QWORD PTR [rbp+0x28]
0x00407036: jmp    0x1404070e7
0x0040703b: mov    r8d,0xb
0x00407041: lea    rdx,[rip+0x1233058]        # 0x14163a0a0 ; literal="a swarm of "
0x00407048: call   0x14006f8d0
0x0040704d: xorps  xmm0,xmm0
0x00407050: movups XMMWORD PTR [rbp+0x48],xmm0
0x00407054: mov    ecx,0xf
0x00407059: mov    QWORD PTR [rbp+0x60],rcx
0x0040705d: movsx  rax,WORD PTR [rsi+0x4]
0x00407062: mov    r8,r12
0x00407065: mov    QWORD PTR [rbp+0x58],r12
0x00407069: mov    BYTE PTR [rbp+0x48],r8b
0x0040706d: test   ax,ax
0x00407070: js     0x1404070be
0x00407072: mov    rdx,QWORD PTR [rip+0x20e59ef]        # 0x1424eca68
0x00407079: mov    r9,rax
0x0040707c: mov    rax,QWORD PTR [rip+0x20e59ed]        # 0x1424eca70
0x00407083: sub    rax,rdx
0x00407086: sar    rax,0x3
0x0040708a: cmp    r9,rax
0x0040708d: jae    0x1404070be
0x0040708f: mov    rdx,QWORD PTR [rdx+r9*8]
0x00407093: add    rdx,0x40
0x00407097: lea    rax,[rbp+0x48]
0x0040709b: cmp    rax,rdx
0x0040709e: je     0x1404070be
0x004070a0: mov    r8,QWORD PTR [rdx+0x10]
0x004070a4: cmp    QWORD PTR [rdx+0x18],rcx
0x004070a8: jbe    0x1404070ad
0x004070aa: mov    rdx,QWORD PTR [rdx]
0x004070ad: lea    rcx,[rbp+0x48]
0x004070b1: call   0x14006f8d0
0x004070b6: mov    rcx,QWORD PTR [rbp+0x60]
0x004070ba: mov    r8,QWORD PTR [rbp+0x58]
0x004070be: lea    rdx,[rbp+0x48]
0x004070c2: cmp    rcx,0xf
0x004070c6: cmova  rdx,QWORD PTR [rbp+0x48]
0x004070cb: lea    rcx,[rsi+0x28]
0x004070cf: call   0x14006fa10
0x004070d4: nop
0x004070d5: mov    rdx,QWORD PTR [rbp+0x60]
0x004070d9: cmp    rdx,0xf
0x004070dd: jbe    0x1404084a2
0x004070e3: mov    rcx,QWORD PTR [rbp+0x48]
0x004070e7: inc    rdx
0x004070ea: mov    rax,rcx
0x004070ed: cmp    rdx,0x1000
0x004070f4: jb     0x14040710f
0x004070f6: add    rdx,0x27
0x004070fa: mov    rcx,QWORD PTR [rcx-0x8]
0x004070fe: sub    rax,rcx
0x00407101: add    rax,0xfffffffffffffff8
0x00407105: cmp    rax,0x1f
0x00407109: ja     0x140408406
0x0040710f: call   0x141539680
0x00407114: jmp    0x1404084a2
0x00407119: movsx  rax,WORD PTR [rsi+0x4]
0x0040711e: mov    edi,0x5
0x00407123: cmp    eax,0xd
0x00407126: ja     0x140407436
0x0040712c: mov    ecx,DWORD PTR [r15+rax*4+0x408570]
0x00407134: add    rcx,r15
0x00407137: jmp    rcx
0x00407139: mov    r8d,0x6
0x0040713f: lea    rdx,[rip+0x1232f3e]        # 0x14163a084 ; literal="Miasma"
0x00407146: lea    rcx,[rsi+0x28]
0x0040714a: call   0x14006f8d0
0x0040714f: mov    DWORD PTR [rsi+0x48],edi
0x00407152: jmp    0x1404084a9
0x00407157: mov    r8,r12
0x0040715a: cmp    WORD PTR [rsi+0x6],r13w
0x0040715f: sete   r8b
0x00407163: add    r8,0x4
0x00407167: lea    r9,[rip+0x1232f5e]        # 0x14163a0cc ; literal="Mist"
0x0040716e: lea    rdx,[rip+0x1232f17]        # 0x14163a08c ; literal="Steam"
0x00407175: cmp    WORD PTR [rsi+0x6],r13w
0x0040717a: cmovne rdx,r9
0x0040717e: lea    rcx,[rsi+0x28]
0x00407182: call   0x14006f8d0
0x00407187: mov    DWORD PTR [rsi+0x48],edi
0x0040718a: jmp    0x1404084a9
0x0040718f: mov    r8d,0x4
0x00407195: lea    rdx,[rip+0x1232f30]        # 0x14163a0cc ; literal="Mist"
0x0040719c: lea    rcx,[rsi+0x28]
0x004071a0: call   0x14006f8d0
0x004071a5: mov    DWORD PTR [rsi+0x48],edi
0x004071a8: jmp    0x1404084a9
0x004071ad: mov    WORD PTR [rsp+0x30],0x3
0x004071b4: lea    rdx,[rsi+0x28]
0x004071b8: mov    BYTE PTR [rsp+0x28],r12b
0x004071bd: mov    DWORD PTR [rsp+0x20],r12d
0x004071c2: mov    r9d,DWORD PTR [rsi+0x8]
0x004071c6: movzx  r8d,WORD PTR [rsi+0x6]
0x004071cb: lea    rcx,[rip+0x1fca31e]        # 0x1423d14f0
0x004071d2: call   0x1414d1920
0x004071d7: mov    DWORD PTR [rsi+0x48],edi
0x004071da: jmp    0x1404084a9
0x004071df: mov    ebx,DWORD PTR [rsi+0xc]
0x004071e2: mov    r11,QWORD PTR [rip+0x1fe7f4f]        # 0x1423ef138
0x004071e9: mov    r10,QWORD PTR [rip+0x1fe7f50]        # 0x1423ef140
0x004071f0: sub    r10,r11
0x004071f3: sar    r10,0x3
0x004071f7: test   r10d,r10d
0x004071fa: je     0x1404072e4
0x00407200: mov    r9d,r12d
0x00407203: cmp    r10d,0x40
0x00407207: jle    0x140407234
0x00407209: nop    DWORD PTR [rax+0x0]
0x00407210: mov    r8d,r10d
0x00407213: shr    r8d,1
0x00407216: lea    edx,[r8+r9*1]
0x0040721a: movsxd rax,edx
0x0040721d: mov    rcx,QWORD PTR [r11+rax*8]
0x00407221: cmp    ebx,DWORD PTR [rcx+0x8]
0x00407224: cmovl  edx,r9d
0x00407228: mov    r9d,edx
0x0040722b: sub    r10d,r8d
0x0040722e: cmp    r10d,0x40
0x00407232: jg     0x140407210
0x00407234: lea    eax,[r9+r10*1]
0x00407238: cmp    eax,0xffffffff
0x0040723b: je     0x1404072e4
0x00407241: cmp    r9d,eax
0x00407244: jge    0x1404072e4
0x0040724a: movsxd rcx,r9d
0x0040724d: movsxd rdx,eax
0x00407250: mov    rax,QWORD PTR [r11+rcx*8]
0x00407254: cmp    ebx,DWORD PTR [rax+0x8]
0x00407257: je     0x140407266
0x00407259: inc    r9d
0x0040725c: inc    rcx
0x0040725f: cmp    rcx,rdx
0x00407262: jl     0x140407250
0x00407264: jmp    0x1404072e4
0x00407266: mov    DWORD PTR [rbp-0x70],r9d
0x0040726a: movsxd rax,r9d
0x0040726d: mov    rbx,QWORD PTR [r11+rax*8]
0x00407271: mov    QWORD PTR [rbp-0x68],rbx
0x00407275: movaps xmm0,XMMWORD PTR [rbp-0x70]
0x00407279: test   rbx,rbx
0x0040727c: je     0x1404072e4
0x0040727e: psrldq xmm0,0x8
0x00407283: movq   rcx,xmm0
0x00407288: mov    rax,QWORD PTR [rcx]
0x0040728b: call   QWORD PTR [rax]
0x0040728d: cmp    ax,r13w
0x00407291: jne    0x1404072e4
0x00407293: lea    rcx,[rsi+0x28]
0x00407297: mov    DWORD PTR [rsp+0x68],r12d
0x0040729c: mov    DWORD PTR [rsp+0x60],r12d
0x004072a1: mov    BYTE PTR [rsp+0x58],r12b
0x004072a6: mov    r15d,0xffffffff
0x004072ac: mov    DWORD PTR [rsp+0x50],r15d
0x004072b1: mov    DWORD PTR [rsp+0x48],r15d
0x004072b6: mov    QWORD PTR [rsp+0x40],r12
0x004072bb: mov    BYTE PTR [rsp+0x38],r12b
0x004072c0: mov    DWORD PTR [rsp+0x30],r12d
0x004072c5: mov    DWORD PTR [rsp+0x28],r15d
0x004072ca: mov    eax,DWORD PTR [rbx+0x18]
0x004072cd: mov    DWORD PTR [rsp+0x20],eax
0x004072d1: movzx  r9d,WORD PTR [rbx+0x14]
0x004072d6: movzx  r8d,WORD PTR [rbx+0x12]
0x004072db: movzx  edx,WORD PTR [rbx+0x10]
0x004072df: call   0x140a82c10
0x004072e4: cmp    QWORD PTR [rsi+0x38],r12
0x004072e8: jne    0x140407436
0x004072ee: mov    r8d,0xa
0x004072f4: lea    rdx,[rip+0x1232ddd]        # 0x14163a0d8 ; literal="Item Cloud"
0x004072fb: lea    rcx,[rsi+0x28]
0x004072ff: call   0x14006f8d0
0x00407304: mov    DWORD PTR [rsi+0x48],edi
0x00407307: jmp    0x1404084a9
0x0040730c: mov    r8d,0xd
0x00407312: lea    rdx,[rip+0x1232d97]        # 0x14163a0b0 ; literal="An Ocean Wave"
0x00407319: lea    rcx,[rsi+0x28]
0x0040731d: call   0x14006f8d0
0x00407322: mov    DWORD PTR [rsi+0x48],edi
0x00407325: jmp    0x1404084a9
0x0040732a: mov    r8d,0x8
0x00407330: lea    rdx,[rip+0x1232d89]        # 0x14163a0c0 ; literal="Sea Foam"
0x00407337: lea    rcx,[rsi+0x28]
0x0040733b: call   0x14006f8d0
0x00407340: mov    DWORD PTR [rsi+0x48],edi
0x00407343: jmp    0x1404084a9
0x00407348: mov    eax,DWORD PTR [rsi+0x10]
0x0040734b: and    eax,r13d
0x0040734e: mov    ecx,eax
0x00407350: lea    r8,[rax+0x9]
0x00407354: lea    rax,[rip+0x1232cdd]        # 0x14163a038 ; literal="Lava Mist"
0x0040735b: lea    rdx,[rip+0x1232cc6]        # 0x14163a028 ; literal="Magma Mist"
0x00407362: test   ecx,ecx
0x00407364: cmove  rdx,rax
0x00407368: lea    rcx,[rsi+0x28]
0x0040736c: call   0x14006f8d0
0x00407371: mov    DWORD PTR [rsi+0x48],edi
0x00407374: jmp    0x1404084a9
0x00407379: lea    rdx,[rsi+0x28]
0x0040737d: mov    WORD PTR [rsp+0x30],r13w
0x00407383: mov    BYTE PTR [rsp+0x28],r12b
0x00407388: mov    DWORD PTR [rsp+0x20],r12d
0x0040738d: mov    r9d,DWORD PTR [rsi+0x8]
0x00407391: movzx  r8d,WORD PTR [rsi+0x6]
0x00407396: lea    rcx,[rip+0x1fca153]        # 0x1423d14f0
0x0040739d: call   0x1414d1920
0x004073a2: lea    rcx,[rsi+0x28]
0x004073a6: mov    r8d,0x6
0x004073ac: lea    rdx,[rip+0x1232c65]        # 0x14163a018 ; literal=" vapor"
0x004073b3: call   0x14006fa10
0x004073b8: mov    DWORD PTR [rsi+0x48],edi
0x004073bb: jmp    0x1404084a9
0x004073c0: mov    WORD PTR [rsp+0x30],0x2
0x004073c7: jmp    0x1404071b4
0x004073cc: lea    rdx,[rip+0x1232c4d]        # 0x14163a020 ; literal="Smoke"
0x004073d3: mov    r8,rdi
0x004073d6: lea    rcx,[rsi+0x28]
0x004073da: call   0x14006f8d0
0x004073df: mov    DWORD PTR [rsi+0x48],edi
0x004073e2: jmp    0x1404084a9
0x004073e7: mov    r8d,0xa
0x004073ed: lea    rdx,[rip+0x11effbc]        # 0x1415f73b0 ; literal="Dragonfire"
0x004073f4: lea    rcx,[rsi+0x28]
0x004073f8: call   0x14006f8d0
0x004073fd: mov    DWORD PTR [rsi+0x48],edi
0x00407400: jmp    0x1404084a9
0x00407405: mov    r8d,0x4
0x0040740b: lea    rdx,[rip+0x11eff8a]        # 0x1415f739c ; literal="Fire"
0x00407412: lea    rcx,[rsi+0x28]
0x00407416: call   0x14006f8d0
0x0040741b: mov    DWORD PTR [rsi+0x48],edi
0x0040741e: jmp    0x1404084a9
0x00407423: lea    rdx,[rip+0x1232c42]        # 0x14163a06c ; literal="A Web"
0x0040742a: mov    r8,rdi
0x0040742d: lea    rcx,[rsi+0x28]
0x00407431: call   0x14006f8d0
0x00407436: mov    DWORD PTR [rsi+0x48],edi
0x00407439: jmp    0x1404084a9
0x0040743e: mov    r8d,0xa
0x00407444: lea    rdx,[rip+0x1232c2d]        # 0x14163a078 ; literal="A Campfire"
0x0040744b: mov    rcx,rbx
0x0040744e: call   0x14006f8d0
0x00407453: mov    DWORD PTR [rsi+0x48],0x4
0x0040745a: jmp    0x1404084a9
0x0040745f: mov    edx,DWORD PTR [rsi+0x4]
0x00407462: mov    r8d,DWORD PTR [rsi+0x10]
0x00407466: movzx  eax,WORD PTR [rsi+0xc]
0x0040746a: cmp    edx,0xffffffff
0x0040746d: je     0x1404074c9
0x0040746f: mov    DWORD PTR [rsp+0x68],r12d
0x00407474: mov    DWORD PTR [rsp+0x60],r12d
0x00407479: mov    BYTE PTR [rsp+0x58],r12b
0x0040747e: mov    r15d,0xffffffff
0x00407484: mov    DWORD PTR [rsp+0x50],r15d
0x00407489: mov    DWORD PTR [rsp+0x48],r15d
0x0040748e: mov    QWORD PTR [rsp+0x40],r12
0x00407493: mov    BYTE PTR [rsp+0x38],r12b
0x00407498: mov    DWORD PTR [rsp+0x30],r12d
0x0040749d: mov    DWORD PTR [rsp+0x28],r15d
0x004074a2: mov    DWORD PTR [rsp+0x20],r8d
0x004074a7: movzx  r9d,ax
0x004074ab: movzx  r8d,WORD PTR [rsi+0x8]
0x004074b0: mov    rcx,rbx
0x004074b3: call   0x140a82c10
0x004074b8: mov    rcx,rbx
0x004074bb: call   0x14052d650
0x004074c0: mov    DWORD PTR [rsi+0x48],r14d
0x004074c4: jmp    0x1404084a9
0x004074c9: movsx  rbx,WORD PTR [rsi+0x14]
0x004074ce: movzx  edx,ax
0x004074d1: lea    rcx,[rip+0x1fca018]        # 0x1423d14f0
0x004074d8: call   0x1414add70
0x004074dd: test   rax,rax
0x004074e0: je     0x14040753c
0x004074e2: movsxd rax,DWORD PTR [rax+rbx*4+0x9c]
0x004074ea: test   eax,eax
0x004074ec: js     0x14040753c
0x004074ee: mov    rcx,rax
0x004074f1: mov    rax,QWORD PTR [rip+0x20efbf8]        # 0x1424f70f0
0x004074f8: mov    rdx,QWORD PTR [rip+0x20efbe9]        # 0x1424f70e8
0x004074ff: sub    rax,rdx
0x00407502: sar    rax,0x3
0x00407506: cmp    rcx,rax
0x00407509: jae    0x14040753c
0x0040750b: mov    rax,QWORD PTR [rdx+rcx*8]
0x0040750f: mov    rcx,QWORD PTR [rax+0x20]
0x00407513: movsx  rdx,WORD PTR [rcx]
0x00407517: mov    rax,QWORD PTR [rip+0x20efb9a]        # 0x1424f70b8
0x0040751e: mov    rcx,QWORD PTR [rax+rdx*8]
0x00407522: movsx  eax,BYTE PTR [rcx+0x70]
0x00407526: mov    WORD PTR [rsi+0x48],ax
0x0040752a: mov    WORD PTR [rsi+0x4a],r12w
0x0040752f: cmp    BYTE PTR [rcx+0x70],r12b
0x00407533: je     0x140407543
0x00407535: movsx  r13d,BYTE PTR [rcx+0x71]
0x0040753a: jmp    0x140407543
0x0040753c: mov    DWORD PTR [rsi+0x48],0x4
0x00407543: mov    eax,0x4c
0x00407548: mov    rcx,rsi
0x0040754b: mov    WORD PTR [rax+rcx*1],r13w
0x00407550: movsx  edx,WORD PTR [rsi+0x18]
0x00407554: cmp    DWORD PTR [rsi+0x14],0x1
0x00407558: je     0x140407590
0x0040755a: sub    edx,0x1
0x0040755d: je     0x140407581
0x0040755f: sub    edx,0x1
0x00407562: je     0x140407578
0x00407564: cmp    edx,0x1
0x00407567: jne    0x1404075d3
0x00407569: mov    r8d,0xa
0x0040756f: lea    rdx,[rip+0x1232e6a]        # 0x14163a3e0 ; literal="A pile of "
0x00407576: jmp    0x1404075ca
0x00407578: lea    rdx,[rip+0x1232e49]        # 0x14163a3c8 ; literal="A small pile of "
0x0040757f: jmp    0x1404075c4
0x00407581: mov    r8d,0xd
0x00407587: lea    rdx,[rip+0x1232e72]        # 0x14163a400 ; literal="A dusting of "
0x0040758e: jmp    0x1404075ca
0x00407590: sub    edx,0x1
0x00407593: je     0x1404075bd
0x00407595: sub    edx,0x1
0x00407598: je     0x1404075ae
0x0040759a: cmp    edx,0x1
0x0040759d: jne    0x1404075d3
0x0040759f: mov    r8d,0xa
0x004075a5: lea    rdx,[rip+0x1232e44]        # 0x14163a3f0 ; literal="A pool of "
0x004075ac: jmp    0x1404075ca
0x004075ae: mov    r8d,0xb
0x004075b4: lea    rdx,[rip+0x1232aa5]        # 0x14163a060 ; literal="A smear of "
0x004075bb: jmp    0x1404075ca
0x004075bd: lea    rdx,[rip+0x1232a84]        # 0x14163a048 ; literal="A spattering of "
0x004075c4: mov    r8d,0x10
0x004075ca: lea    rcx,[rsi+0x28]
0x004075ce: call   0x14006f8d0
0x004075d3: xorps  xmm0,xmm0
0x004075d6: movups XMMWORD PTR [rbp-0x58],xmm0
0x004075da: mov    QWORD PTR [rbp-0x48],r12
0x004075de: mov    eax,0xf
0x004075e3: mov    QWORD PTR [rbp-0x40],rax
0x004075e7: mov    BYTE PTR [rbp-0x58],r12b
0x004075eb: movzx  eax,WORD PTR [rsi+0x14]
0x004075ef: mov    WORD PTR [rsp+0x30],ax
0x004075f4: mov    BYTE PTR [rsp+0x28],0x0
0x004075f9: mov    DWORD PTR [rsp+0x20],r12d
0x004075fe: mov    r9d,DWORD PTR [rsi+0x10]
0x00407602: movzx  r8d,WORD PTR [rsi+0xc]
0x00407607: lea    rdx,[rbp-0x58]
0x0040760b: lea    rcx,[rip+0x1fc9ede]        # 0x1423d14f0
0x00407612: call   0x1414d1920
0x00407617: lea    rdx,[rbp-0x58]
0x0040761b: cmp    QWORD PTR [rbp-0x40],0xf
0x00407620: cmova  rdx,QWORD PTR [rbp-0x58]
0x00407625: lea    rcx,[rsi+0x28]
0x00407629: mov    r8,QWORD PTR [rbp-0x48]
0x0040762d: call   0x14006fa10
0x00407632: nop
0x00407633: lea    rcx,[rbp-0x58]
0x00407637: call   0x14006f850
0x0040763c: jmp    0x1404084ae
0x00407641: mov    r10d,DWORD PTR [rsi+0x4]
0x00407645: mov    r8,QWORD PTR [rip+0x1fdde0c]        # 0x1423e5458
0x0040764c: mov    r11,QWORD PTR [rip+0x1fdddfd]        # 0x1423e5450
0x00407653: sub    r8,r11
0x00407656: sar    r8,0x3
0x0040765a: test   r8d,r8d
0x0040765d: je     0x140407697
0x0040765f: cmp    r10d,0xffffffff
0x00407663: je     0x140407697
0x00407665: sub    r8d,r13d
0x00407668: mov    edx,r12d
0x0040766b: js     0x140407697
0x0040766d: nop    DWORD PTR [rax]
0x00407670: lea    ecx,[rdx+r8*1]
0x00407674: sar    ecx,1
0x00407676: movsxd rax,ecx
0x00407679: mov    rbx,QWORD PTR [r11+rax*8]
0x0040767d: cmp    DWORD PTR [rbx+0x1c],r10d
0x00407681: je     0x14040769a
0x00407683: lea    eax,[rcx+0x1]
0x00407686: cmovle edx,eax
0x00407689: lea    eax,[rcx-0x1]
0x0040768c: cmovle eax,r8d
0x00407690: mov    r8d,eax
0x00407693: cmp    edx,eax
0x00407695: jle    0x140407670
0x00407697: mov    rbx,r12
0x0040769a: test   rbx,rbx
0x0040769d: je     0x140407704
0x0040769f: lea    rcx,[rsi+0x28]
0x004076a3: mov    r8,r13
0x004076a6: lea    rdx,[rip+0x11e108f]        # 0x1415e873c ; literal=" "
0x004076ad: call   0x14006fa10
0x004076b2: xorps  xmm0,xmm0
0x004076b5: movups XMMWORD PTR [rbp-0x58],xmm0
0x004076b9: mov    QWORD PTR [rbp-0x48],r12
0x004076bd: mov    eax,0xf
0x004076c2: mov    QWORD PTR [rbp-0x40],rax
0x004076c6: mov    BYTE PTR [rbp-0x58],r12b
0x004076ca: mov    r9d,0xffffffff
0x004076d0: xor    r8d,r8d
0x004076d3: lea    rdx,[rbp-0x58]
0x004076d7: mov    rcx,rbx
0x004076da: call   0x140c65450
0x004076df: lea    rdx,[rbp-0x58]
0x004076e3: cmp    QWORD PTR [rbp-0x40],0xf
0x004076e8: cmova  rdx,QWORD PTR [rbp-0x58]
0x004076ed: lea    rcx,[rsi+0x28]
0x004076f1: mov    r8,QWORD PTR [rbp-0x48]
0x004076f5: call   0x14006fa10
0x004076fa: nop
0x004076fb: lea    rcx,[rbp-0x58]
0x004076ff: call   0x14006f850
0x00407704: mov    DWORD PTR [rsi+0x48],0x6
0x0040770b: jmp    0x1404084a9
0x00407710: mov    r8d,0x6
0x00407716: lea    rdx,[rip+0x1232d1b]        # 0x14163a438 ; literal="A Fire"
0x0040771d: mov    rcx,rbx
0x00407720: call   0x14006f8d0
0x00407725: mov    DWORD PTR [rsi+0x48],0x4
0x0040772c: jmp    0x1404084a9
0x00407731: mov    ecx,DWORD PTR [rsi+0x4]
0x00407734: mov    eax,ecx
0x00407736: and    eax,0x3
0x00407739: cmp    al,0x3
0x0040773b: jne    0x14040774c
0x0040773d: lea    rdx,[rip+0x1232cfc]        # 0x14163a440 ; literal="Stagnant salt water ["
0x00407744: mov    r8d,0x15
0x0040774a: jmp    0x140407781
0x0040774c: test   r13b,cl
0x0040774f: je     0x140407760
0x00407751: lea    rdx,[rip+0x1232cb8]        # 0x14163a410 ; literal="Stagnant water ["
0x00407758: mov    r8d,0x10
0x0040775e: jmp    0x140407781
0x00407760: test   r14b,cl
0x00407763: je     0x140407774
0x00407765: lea    rdx,[rip+0x1232cbc]        # 0x14163a428 ; literal="Salt water ["
0x0040776c: mov    r8d,0xc
0x00407772: jmp    0x140407781
0x00407774: lea    rdx,[rip+0x1232bfd]        # 0x14163a378 ; literal="Water ["
0x0040777b: mov    r8d,0x7
0x00407781: mov    rcx,rbx
0x00407784: call   0x14006f8d0
0x00407789: xorps  xmm0,xmm0
0x0040778c: movups XMMWORD PTR [rbp-0x38],xmm0
0x00407790: mov    QWORD PTR [rbp-0x28],r12
0x00407794: mov    eax,0xf
0x00407799: mov    QWORD PTR [rbp-0x20],rax
0x0040779d: mov    BYTE PTR [rbp-0x38],r12b
0x004077a1: movsx  ecx,WORD PTR [rsi+0x8]
0x004077a5: lea    rdx,[rbp-0x38]
0x004077a9: call   0x14052c2b0
0x004077ae: lea    rdx,[rbp-0x38]
0x004077b2: cmp    QWORD PTR [rbp-0x20],0xf
0x004077b7: cmova  rdx,QWORD PTR [rbp-0x38]
0x004077bc: lea    rcx,[rsi+0x28]
0x004077c0: mov    r8,QWORD PTR [rbp-0x28]
0x004077c4: call   0x14006fa10
0x004077c9: lea    rcx,[rsi+0x28]
0x004077cd: mov    r8d,0x3
0x004077d3: lea    rdx,[rip+0x1232ba6]        # 0x14163a380 ; literal="/7]"
0x004077da: call   0x14006fa10
0x004077df: mov    DWORD PTR [rsi+0x48],0x1
0x004077e6: mov    WORD PTR [rsi+0x4c],r13w
0x004077eb: mov    rdx,QWORD PTR [rbp-0x20]
0x004077ef: cmp    rdx,0xf
0x004077f3: jbe    0x1404084ae
0x004077f9: inc    rdx
0x004077fc: mov    rcx,QWORD PTR [rbp-0x38]
0x00407800: mov    rax,rcx
0x00407803: cmp    rdx,0x1000
0x0040780a: jb     0x140407825
0x0040780c: add    rdx,0x27
0x00407810: mov    rcx,QWORD PTR [rcx-0x8]
0x00407814: sub    rax,rcx
0x00407817: add    rax,0xfffffffffffffff8
0x0040781b: cmp    rax,0x1f
0x0040781f: ja     0x140408406
0x00407825: call   0x141539680
0x0040782a: jmp    0x1404084ae
0x0040782f: mov    eax,DWORD PTR [rsi+0x4]
0x00407832: and    eax,r13d
0x00407835: mov    r9d,eax
0x00407838: lea    r8,[rax+0x6]
0x0040783c: lea    rax,[rip+0x1232b2d]        # 0x14163a370 ; literal="Lava ["
0x00407843: lea    rdx,[rip+0x1232b1e]        # 0x14163a368 ; literal="Magma ["
0x0040784a: test   r9d,r9d
0x0040784d: cmove  rdx,rax
0x00407851: mov    rcx,rbx
0x00407854: call   0x14006f8d0
0x00407859: xorps  xmm0,xmm0
0x0040785c: movups XMMWORD PTR [rbp-0x58],xmm0
0x00407860: mov    QWORD PTR [rbp-0x48],r12
0x00407864: mov    eax,0xf
0x00407869: mov    QWORD PTR [rbp-0x40],rax
0x0040786d: mov    BYTE PTR [rbp-0x58],r12b
0x00407871: movsx  ecx,WORD PTR [rsi+0x8]
0x00407875: lea    rdx,[rbp-0x58]
0x00407879: call   0x14052c2b0
0x0040787e: lea    rdx,[rbp-0x58]
0x00407882: cmp    QWORD PTR [rbp-0x40],0xf
0x00407887: cmova  rdx,QWORD PTR [rbp-0x58]
0x0040788c: lea    rcx,[rsi+0x28]
0x00407890: mov    r8,QWORD PTR [rbp-0x48]
0x00407894: call   0x14006fa10
0x00407899: lea    rcx,[rsi+0x28]
0x0040789d: mov    r8d,0x3
0x004078a3: lea    rdx,[rip+0x1232ad6]        # 0x14163a380 ; literal="/7]"
0x004078aa: call   0x14006fa10
0x004078af: mov    DWORD PTR [rsi+0x48],0x4
0x004078b6: mov    WORD PTR [rsi+0x4c],r13w
0x004078bb: lea    rcx,[rbp-0x58]
0x004078bf: call   0x14006f850
0x004078c4: jmp    0x1404084ae
0x004078c9: mov    eax,DWORD PTR [rip+0x14949c9]        # 0x14189c298
0x004078cf: test   eax,eax
0x004078d1: jne    0x1404078ed
0x004078d3: mov    r8d,0xb
0x004078d9: lea    rdx,[rip+0x1232ac8]        # 0x14163a3a8 ; literal="Track/Spoor"
0x004078e0: mov    rcx,rbx
0x004078e3: call   0x14006f8d0
0x004078e8: jmp    0x1404084a2
0x004078ed: cmp    eax,r13d
0x004078f0: jne    0x1404084a2
0x004078f6: lea    rcx,[rsi+0x28]
0x004078fa: mov    r8d,0xd
0x00407900: lea    rdx,[rip+0x1232ab1]        # 0x14163a3b8 ; literal="Track/Spoor: "
0x00407907: call   0x14006f8d0
0x0040790c: movzx  ecx,BYTE PTR [rsi+0x6]
0x00407910: mov    ebx,0x3
0x00407915: test   ecx,ecx
0x00407917: je     0x14040840d
0x0040791d: sub    ecx,r13d
0x00407920: je     0x140407f24
0x00407926: sub    ecx,r13d
0x00407929: je     0x14040794f
0x0040792b: cmp    ecx,r13d
0x0040792e: jne    0x140407ee8
0x00407934: lea    rcx,[rsi+0x28]
0x00407938: mov    r8d,0xe
0x0040793e: lea    rdx,[rip+0x12329eb]        # 0x14163a330 ; literal="unintelligible"
0x00407945: call   0x14006fa10
0x0040794a: jmp    0x140407ee8
0x0040794f: mov    r12d,DWORD PTR [rsi+0x8]
0x00407953: mov    DWORD PTR [rbp-0x80],r12d
0x00407957: mov    eax,DWORD PTR [rsi+0xc]
0x0040795a: mov    DWORD PTR [rbp-0x70],eax
0x0040795d: mov    eax,DWORD PTR [rsi+0x10]
0x00407960: mov    DWORD PTR [rbp-0x60],eax
0x00407963: mov    ebx,0x6
0x00407968: mov    r15d,0xffffffff
0x0040796e: mov    r14d,0xf
0x00407974: test   BYTE PTR [rsi+0x4],0x40
0x00407978: je     0x140407dd4
0x0040797e: movsx  rcx,WORD PTR [rsi+0x20]
0x00407983: movsx  r8d,WORD PTR [rsi+0x1e]
0x00407988: movsx  r9d,WORD PTR [rsi+0x1c]
0x0040798d: test   r9w,r9w
0x00407991: js     0x140407ae2
0x00407997: mov    eax,r9d
0x0040799a: cmp    r9d,DWORD PTR [rip+0x20e073b]        # 0x1424e80dc
0x004079a1: jge    0x140407ae2
0x004079a7: test   r8w,r8w
0x004079ab: js     0x140407ae2
0x004079b1: mov    eax,r8d
0x004079b4: cmp    r8d,DWORD PTR [rip+0x20e0725]        # 0x1424e80e0
0x004079bb: jge    0x140407ae2
0x004079c1: test   cx,cx
0x004079c4: js     0x140407ae2
0x004079ca: mov    eax,ecx
0x004079cc: cmp    ecx,DWORD PTR [rip+0x20e0712]        # 0x1424e80e4
0x004079d2: jge    0x140407ae2
0x004079d8: movzx  eax,r9w
0x004079dc: sar    ax,0x4
0x004079e0: movzx  edx,r8w
0x004079e4: sar    dx,0x4
0x004079e8: mov    r10,QWORD PTR [rip+0x20e06b9]        # 0x1424e80a8
0x004079ef: test   r10,r10
0x004079f2: je     0x140407ae2
0x004079f8: movsx  rax,ax
0x004079fc: movsx  rdx,dx
0x00407a00: mov    rax,QWORD PTR [r10+rax*8]
0x00407a04: mov    rax,QWORD PTR [rax+rdx*8]
0x00407a08: mov    rdi,QWORD PTR [rax+rcx*8]
0x00407a0c: test   rdi,rdi
0x00407a0f: je     0x140407ae2
0x00407a15: mov    r13d,r8d
0x00407a18: and    r13d,0x8000000f
0x00407a1f: jge    0x140407a2b
0x00407a21: dec    r13d
0x00407a24: or     r13d,0xfffffff0
0x00407a28: inc    r13d
0x00407a2b: mov    r12d,r9d
0x00407a2e: and    r12d,0x8000000f
0x00407a35: jge    0x140407a41
0x00407a37: dec    r12d
0x00407a3a: or     r12d,0xfffffff0
0x00407a3e: inc    r12d
0x00407a41: movzx  eax,r15w
0x00407a45: mov    DWORD PTR [rsp+0x78],eax
0x00407a49: xor    r8b,r8b
0x00407a4c: mov    BYTE PTR [rsp+0x70],r8b
0x00407a51: mov    rbx,QWORD PTR [rdi+0x8]
0x00407a55: mov    rdi,QWORD PTR [rdi+0x10]
0x00407a59: movzx  ecx,WORD PTR [rsp+0x70]
0x00407a5e: mov    DWORD PTR [rsp+0x74],ecx
0x00407a62: mov    r10d,DWORD PTR [rbp-0x80]
0x00407a66: mov    DWORD PTR [rsp+0x7c],r10d
0x00407a6b: nop    DWORD PTR [rax+rax*1+0x0]
0x00407a70: cmp    rbx,rdi
0x00407a73: jae    0x140407b01
0x00407a79: mov    r14,QWORD PTR [rbx]
0x00407a7c: mov    rax,QWORD PTR [r14]
0x00407a7f: mov    rcx,r14
0x00407a82: call   QWORD PTR [rax]
0x00407a84: cmp    ax,0x3
0x00407a88: jne    0x140407ad3
0x00407a8a: movzx  edx,WORD PTR [r14+0x10]
0x00407a8f: cmp    dx,0x1
0x00407a93: jne    0x140407ad3
0x00407a95: movsx  rax,r12w
0x00407a99: shl    rax,0x4
0x00407a9d: movsx  rcx,r13w
0x00407aa1: add    rax,r14
0x00407aa4: movzx  r8d,BYTE PTR [rcx+rax*1+0x12]
0x00407aaa: cmp    r8b,BYTE PTR [rsp+0x70]
0x00407aaf: jbe    0x140407ad3
0x00407ab1: movzx  eax,WORD PTR [r14+0x8]
0x00407ab6: mov    DWORD PTR [rsp+0x78],eax
0x00407aba: mov    r10d,DWORD PTR [r14+0xc]
0x00407abe: mov    DWORD PTR [rsp+0x7c],r10d
0x00407ac3: mov    WORD PTR [rsp+0x74],dx
0x00407ac8: mov    BYTE PTR [rsp+0x70],r8b
0x00407acd: add    rbx,0x8
0x00407ad1: jmp    0x140407a70
0x00407ad3: mov    r10d,DWORD PTR [rsp+0x7c]
0x00407ad8: mov    eax,DWORD PTR [rsp+0x78]
0x00407adc: add    rbx,0x8
0x00407ae0: jmp    0x140407a70
0x00407ae2: movzx  r12d,WORD PTR [rsp+0x70]
0x00407ae8: mov    DWORD PTR [rsp+0x74],r12d
0x00407aed: mov    r10d,DWORD PTR [rbp-0x80]
0x00407af1: mov    DWORD PTR [rsp+0x7c],r10d
0x00407af6: movzx  eax,WORD PTR [rsp+0x74]
0x00407afb: mov    DWORD PTR [rsp+0x78],eax
0x00407aff: jmp    0x140407b17
0x00407b01: mov    r12d,DWORD PTR [rsp+0x74]
0x00407b06: mov    r13d,0x1
0x00407b0c: mov    r14d,0xf
0x00407b12: mov    ebx,0x6
0x00407b17: cmp    ax,r15w
0x00407b1b: jne    0x140407b2b
0x00407b1d: mov    eax,ebx
0x00407b1f: mov    DWORD PTR [rsp+0x78],ebx
0x00407b23: mov    r12d,r13d
0x00407b26: mov    DWORD PTR [rsp+0x74],r13d
0x00407b2b: xorps  xmm0,xmm0
0x00407b2e: movups XMMWORD PTR [rbp-0x38],xmm0
0x00407b32: mov    QWORD PTR [rbp-0x20],r14
0x00407b36: mov    QWORD PTR [rbp-0x28],0x0
0x00407b3e: mov    BYTE PTR [rbp-0x38],0x0
0x00407b42: mov    ecx,0xdb
0x00407b47: sub    ax,cx
0x00407b4a: mov    ecx,0xc7
0x00407b4f: cmp    ax,cx
0x00407b52: ja     0x140407ccb
0x00407b58: mov    r9,QWORD PTR [rip+0x20f21c1]        # 0x1424f9d20
0x00407b5f: mov    r11,QWORD PTR [rip+0x20f21b2]        # 0x1424f9d18
0x00407b66: sub    r9,r11
0x00407b69: sar    r9,0x3
0x00407b6d: test   r9,r9
0x00407b70: je     0x140407ccb
0x00407b76: cmp    r10d,0xffffffff
0x00407b7a: je     0x140407ccb
0x00407b80: xor    edx,edx
0x00407b82: sub    r9d,0x1
0x00407b86: js     0x140407ccb
0x00407b8c: nop    DWORD PTR [rax+0x0]
0x00407b90: lea    ecx,[r9+rdx*1]
0x00407b94: sar    ecx,1
0x00407b96: movsxd rax,ecx
0x00407b99: mov    rbx,QWORD PTR [r11+rax*8]
0x00407b9d: cmp    DWORD PTR [rbx+0xe0],r10d
0x00407ba4: je     0x140407bc0
0x00407ba6: lea    eax,[rcx-0x1]
0x00407ba9: cmovle eax,r9d
0x00407bad: mov    r9d,eax
0x00407bb0: lea    eax,[rcx+0x1]
0x00407bb3: cmovle edx,eax
0x00407bb6: cmp    edx,r9d
0x00407bb9: jle    0x140407b90
0x00407bbb: jmp    0x140407ccb
0x00407bc0: test   rbx,rbx
0x00407bc3: je     0x140407ccb
0x00407bc9: cmp    BYTE PTR [rbx+0xaa],0x0
0x00407bd0: je     0x140407ccb
0x00407bd6: xorps  xmm0,xmm0
0x00407bd9: movups XMMWORD PTR [rbp+0x68],xmm0
0x00407bdd: xor    edi,edi
0x00407bdf: mov    QWORD PTR [rbp+0x78],rdi
0x00407be3: mov    r12,r14
0x00407be6: mov    QWORD PTR [rbp+0x80],r14
0x00407bed: mov    BYTE PTR [rbp+0x68],dil
0x00407bf1: mov    rax,QWORD PTR [rbx+0x130]
0x00407bf8: test   rax,rax
0x00407bfb: je     0x140407c29
0x00407bfd: mov    rcx,QWORD PTR [rax+0x58]
0x00407c01: test   rcx,rcx
0x00407c04: je     0x140407c29
0x00407c06: mov    edx,DWORD PTR [rcx+0x30]
0x00407c09: cmp    edx,0xffffffff
0x00407c0c: je     0x140407c29
0x00407c0e: lea    rcx,[rip+0x20e00d3]        # 0x1424e7ce8
0x00407c15: call   0x140072570
0x00407c1a: test   rax,rax
0x00407c1d: je     0x140407c29
0x00407c1f: mov    rcx,rax
0x00407c22: call   0x140c3a4f0
0x00407c27: jmp    0x140407c2d
0x00407c29: lea    rax,[rbx+0x38]
0x00407c2d: test   rax,rax
0x00407c30: je     0x140407c55
0x00407c32: cmp    BYTE PTR [rax+0x72],0x0
0x00407c36: je     0x140407c55
0x00407c38: xor    r9d,r9d
0x00407c3b: mov    r8b,0x1
0x00407c3e: lea    rdx,[rbp+0x68]
0x00407c42: mov    rcx,rax
0x00407c45: call   0x140a946e0
0x00407c4a: mov    r12,QWORD PTR [rbp+0x80]
0x00407c51: mov    rdi,QWORD PTR [rbp+0x78]
0x00407c55: lea    rdx,[rbp+0x68]
0x00407c59: cmp    r12,0xf
0x00407c5d: cmova  rdx,QWORD PTR [rbp+0x68]
0x00407c62: mov    r8,rdi
0x00407c65: lea    rcx,[rbp-0x38]
0x00407c69: call   0x14006fa10
0x00407c6e: mov    r8d,0x3
0x00407c74: lea    rdx,[rip+0x11e5ea9]        # 0x1415edb24 ; literal="'s "
0x00407c7b: lea    rcx,[rbp-0x38]
0x00407c7f: call   0x14006fa10
0x00407c84: nop
0x00407c85: mov    rdx,QWORD PTR [rbp+0x80]
0x00407c8c: cmp    rdx,0xf
0x00407c90: jbe    0x140407cc6
0x00407c92: inc    rdx
0x00407c95: mov    rcx,QWORD PTR [rbp+0x68]
0x00407c99: mov    rax,rcx
0x00407c9c: cmp    rdx,0x1000
0x00407ca3: jb     0x140407cc1
0x00407ca5: add    rdx,0x27
0x00407ca9: mov    rcx,QWORD PTR [rcx-0x8]
0x00407cad: sub    rax,rcx
0x00407cb0: add    rax,0xfffffffffffffff8
0x00407cb4: cmp    rax,0x1f
0x00407cb8: jbe    0x140407cc1
0x00407cba: call   QWORD PTR [rip+0x11dde68]        # 0x1415e5b28
0x00407cc0: int3
0x00407cc1: call   0x141539680
0x00407cc6: mov    r12d,DWORD PTR [rsp+0x74]
0x00407ccb: mov    r8d,DWORD PTR [rsp+0x7c]
0x00407cd0: movzx  edx,WORD PTR [rsp+0x78]
0x00407cd5: lea    rcx,[rip+0x1fc9814]        # 0x1423d14f0
0x00407cdc: call   0x1414add70
0x00407ce1: mov    rbx,rax
0x00407ce4: lea    rdi,[rip+0x11e0a51]        # 0x1415e873c ; literal=" "
0x00407ceb: test   rax,rax
0x00407cee: je     0x140407d49
0x00407cf0: cmp    QWORD PTR [rax+0x530],0x0
0x00407cf8: je     0x140407d27
0x00407cfa: lea    rdx,[rax+0x520]
0x00407d01: mov    r8,QWORD PTR [rdx+0x10]
0x00407d05: cmp    QWORD PTR [rdx+0x18],0xf
0x00407d0a: jbe    0x140407d0f
0x00407d0c: mov    rdx,QWORD PTR [rdx]
0x00407d0f: lea    rcx,[rbp-0x38]
0x00407d13: call   0x14006fa10
0x00407d18: mov    r8,r13
0x00407d1b: mov    rdx,rdi
0x00407d1e: lea    rcx,[rbp-0x38]
0x00407d22: call   0x14006fa10
0x00407d27: movsx  rdx,r12w
0x00407d2b: shl    rdx,0x5
0x00407d2f: add    rdx,0x178
0x00407d36: add    rdx,rbx
0x00407d39: mov    r8,QWORD PTR [rdx+0x10]
0x00407d3d: cmp    QWORD PTR [rdx+0x18],0xf
0x00407d42: jbe    0x140407d56
0x00407d44: mov    rdx,QWORD PTR [rdx]
0x00407d47: jmp    0x140407d56
0x00407d49: lea    rdx,[rip+0x13813b8]        # 0x141789108 ; literal="unknown material"
0x00407d50: mov    r8d,0x10
0x00407d56: lea    rcx,[rbp-0x38]
0x00407d5a: call   0x14006fa10
0x00407d5f: lea    rdx,[rbp-0x38]
0x00407d63: cmp    QWORD PTR [rbp-0x20],0xf
0x00407d68: cmova  rdx,QWORD PTR [rbp-0x38]
0x00407d6d: lea    rcx,[rsi+0x28]
0x00407d71: mov    r8,QWORD PTR [rbp-0x28]
0x00407d75: call   0x14006fa10
0x00407d7a: lea    rcx,[rsi+0x28]
0x00407d7e: mov    r8,r13
0x00407d81: mov    rdx,rdi
0x00407d84: call   0x14006fa10
0x00407d89: nop
0x00407d8a: mov    rdx,QWORD PTR [rbp-0x20]
0x00407d8e: cmp    rdx,0xf
0x00407d92: jbe    0x140407dc8
0x00407d94: inc    rdx
0x00407d97: mov    rcx,QWORD PTR [rbp-0x38]
0x00407d9b: mov    rax,rcx
0x00407d9e: cmp    rdx,0x1000
0x00407da5: jb     0x140407dc3
0x00407da7: add    rdx,0x27
0x00407dab: mov    rcx,QWORD PTR [rcx-0x8]
0x00407daf: sub    rax,rcx
0x00407db2: add    rax,0xfffffffffffffff8
0x00407db6: cmp    rax,0x1f
0x00407dba: jbe    0x140407dc3
0x00407dbc: call   QWORD PTR [rip+0x11ddd66]        # 0x1415e5b28
0x00407dc2: int3
0x00407dc3: call   0x141539680
0x00407dc8: mov    r12d,DWORD PTR [rbp-0x80]
0x00407dcc: mov    eax,DWORD PTR [rbp-0x60]
0x00407dcf: mov    ebx,0x6
0x00407dd4: test   al,0x1
0x00407dd6: je     0x140407de4
0x00407dd8: mov    r8,rbx
0x00407ddb: lea    rdx,[rip+0x123256a]        # 0x14163a34c ; literal="right "
0x00407de2: jmp    0x140407df5
0x00407de4: test   al,0x2
0x00407de6: je     0x140407dfe
0x00407de8: mov    r8d,0x5
0x00407dee: lea    rdx,[rip+0x123252f]        # 0x14163a324 ; literal="left "
0x00407df5: lea    rcx,[rsi+0x28]
0x00407df9: call   0x14006fa10
0x00407dfe: xorps  xmm0,xmm0
0x00407e01: movups XMMWORD PTR [rbp-0x58],xmm0
0x00407e05: xor    eax,eax
0x00407e07: mov    QWORD PTR [rbp-0x48],rax
0x00407e0b: mov    QWORD PTR [rbp-0x40],r14
0x00407e0f: mov    BYTE PTR [rbp-0x58],al
0x00407e12: mov    r9d,r15d
0x00407e15: mov    DWORD PTR [rsp+0x68],eax
0x00407e19: mov    DWORD PTR [rsp+0x60],eax
0x00407e1d: mov    BYTE PTR [rsp+0x58],al
0x00407e21: mov    DWORD PTR [rsp+0x50],r15d
0x00407e26: mov    DWORD PTR [rsp+0x48],r15d
0x00407e2b: mov    QWORD PTR [rsp+0x40],rax
0x00407e30: mov    BYTE PTR [rsp+0x38],al
0x00407e34: mov    DWORD PTR [rsp+0x30],eax
0x00407e38: mov    DWORD PTR [rsp+0x28],r13d
0x00407e3d: mov    DWORD PTR [rsp+0x20],r15d
0x00407e42: movzx  r8d,WORD PTR [rbp-0x70]
0x00407e47: movzx  edx,r12w
0x00407e4b: lea    rcx,[rbp-0x58]
0x00407e4f: call   0x140a82c10
0x00407e54: lea    rdx,[rbp-0x58]
0x00407e58: cmp    QWORD PTR [rbp-0x40],0xf
0x00407e5d: cmova  rdx,QWORD PTR [rbp-0x58]
0x00407e62: lea    rcx,[rsi+0x28]
0x00407e66: mov    r8,QWORD PTR [rbp-0x48]
0x00407e6a: call   0x14006fa10
0x00407e6f: lea    rcx,[rsi+0x28]
0x00407e73: test   BYTE PTR [rsi+0x4],0x40
0x00407e77: je     0x140407e85
0x00407e79: mov    r8,rbx
0x00407e7c: lea    rdx,[rip+0x1232519]        # 0x14163a39c ; literal=" print"
0x00407e83: jmp    0x140407e92
0x00407e85: mov    r8d,0x8
0x00407e8b: lea    rdx,[rip+0x12324ae]        # 0x14163a340 ; literal=" imprint"
0x00407e92: call   0x14006fa10
0x00407e97: nop
0x00407e98: mov    rdx,QWORD PTR [rbp-0x40]
0x00407e9c: cmp    rdx,0xf
0x00407ea0: jbe    0x140407ed6
0x00407ea2: inc    rdx
0x00407ea5: mov    rcx,QWORD PTR [rbp-0x58]
0x00407ea9: mov    rax,rcx
0x00407eac: cmp    rdx,0x1000
0x00407eb3: jb     0x140407ed1
0x00407eb5: add    rdx,0x27
0x00407eb9: mov    rcx,QWORD PTR [rcx-0x8]
0x00407ebd: sub    rax,rcx
0x00407ec0: add    rax,0xfffffffffffffff8
0x00407ec4: cmp    rax,0x1f
0x00407ec8: jbe    0x140407ed1
0x00407eca: call   QWORD PTR [rip+0x11ddc58]        # 0x1415e5b28
0x00407ed0: int3
0x00407ed1: call   0x141539680
0x00407ed6: mov    r14d,0x2
0x00407edc: lea    r15,[rip+0xffffffffffbf811d]        # 0x140000000
0x00407ee3: mov    ebx,0x3
0x00407ee8: lea    rcx,[rsi+0x28]
0x00407eec: cmp    QWORD PTR [rcx+0x10],0x32
0x00407ef1: jbe    0x140407efd
0x00407ef3: mov    edx,0x32
0x00407ef8: call   0x14052d910
0x00407efd: movzx  eax,WORD PTR [rsi+0x4]
0x00407f01: test   al,0x2
0x00407f03: je     0x140408486
0x00407f09: and    eax,0x1c
0x00407f0c: cdqe
0x00407f0e: movzx  eax,BYTE PTR [r15+rax*1+0x4085cc]
0x00407f17: mov    ecx,DWORD PTR [r15+rax*4+0x4085a8]
0x00407f1f: add    rcx,r15
0x00407f22: jmp    rcx
0x00407f24: movsxd rax,DWORD PTR [rsi+0xc]
0x00407f28: lea    rcx,[rax*4+0x0]
0x00407f30: mov    rax,QWORD PTR [rip+0x20e4b51]        # 0x1424eca88
0x00407f37: movsxd rdi,DWORD PTR [rcx+rax*1]
0x00407f3b: mov    rax,QWORD PTR [rip+0x20e4b5e]        # 0x1424ecaa0
0x00407f42: movsxd rdx,DWORD PTR [rcx+rax*1]
0x00407f46: movzx  eax,WORD PTR [rsi+0x10]
0x00407f4a: mov    WORD PTR [rsp+0x74],ax
0x00407f4f: mov    rcx,QWORD PTR [rip+0x20e4b1a]        # 0x1424eca70
0x00407f56: mov    r8,QWORD PTR [rip+0x20e4b0b]        # 0x1424eca68
0x00407f5d: test   di,di
0x00407f60: js     0x140407fa6
0x00407f62: movsx  r9,di
0x00407f66: mov    rax,rcx
0x00407f69: sub    rax,r8
0x00407f6c: sar    rax,0x3
0x00407f70: cmp    r9,rax
0x00407f73: jae    0x140407fa6
0x00407f75: test   dx,dx
0x00407f78: js     0x140407fa6
0x00407f7a: mov    rax,QWORD PTR [r8+r9*8]
0x00407f7e: mov    r9,QWORD PTR [rax+0x178]
0x00407f85: movsx  r10,dx
0x00407f89: mov    rax,QWORD PTR [rax+0x180]
0x00407f90: sub    rax,r9
0x00407f93: sar    rax,0x3
0x00407f97: cmp    r10,rax
0x00407f9a: jae    0x140407fa6
0x00407f9c: mov    rax,QWORD PTR [r9+r10*8]
0x00407fa0: mov    QWORD PTR [rbp-0x70],rax
0x00407fa4: jmp    0x140407faa
0x00407fa6: mov    QWORD PTR [rbp-0x70],r12
0x00407faa: xorps  xmm0,xmm0
0x00407fad: movups XMMWORD PTR [rbp-0x18],xmm0
0x00407fb1: mov    ebx,0xf
0x00407fb6: mov    QWORD PTR [rbp+0x0],rbx
0x00407fba: mov    r9,r12
0x00407fbd: mov    QWORD PTR [rbp-0x8],r12
0x00407fc1: mov    BYTE PTR [rbp-0x18],r9b
0x00407fc5: cmp    dx,0xffff
0x00407fc9: je     0x140408052
0x00407fcf: test   di,di
0x00407fd2: js     0x140408093
0x00407fd8: movzx  r10d,di
0x00407fdc: mov    rax,rcx
0x00407fdf: sub    rax,r8
0x00407fe2: sar    rax,0x3
0x00407fe6: cmp    r10,rax
0x00407fe9: jae    0x140408057
0x00407feb: test   dx,dx
0x00407fee: js     0x140408057
0x00407ff0: mov    rax,QWORD PTR [r8+r10*8]
0x00407ff4: mov    r10,QWORD PTR [rax+0x178]
0x00407ffb: movsx  rdx,dx
0x00407fff: mov    rax,QWORD PTR [rax+0x180]
0x00408006: sub    rax,r10
0x00408009: sar    rax,0x3
0x0040800d: cmp    rdx,rax
0x00408010: jae    0x140408057
0x00408012: mov    rdx,QWORD PTR [r10+rdx*8]
0x00408016: add    rdx,0x20
0x0040801a: lea    rax,[rbp-0x18]
0x0040801e: cmp    rax,rdx
0x00408021: je     0x140408057
0x00408023: mov    r8,QWORD PTR [rdx+0x10]
0x00408027: cmp    QWORD PTR [rdx+0x18],rbx
0x0040802b: jbe    0x140408030
0x0040802d: mov    rdx,QWORD PTR [rdx]
0x00408030: lea    rcx,[rbp-0x18]
0x00408034: call   0x14006f8d0
0x00408039: mov    r9,QWORD PTR [rbp-0x8]
0x0040803d: test   r9,r9
0x00408040: jne    0x140408093
0x00408042: mov    rcx,QWORD PTR [rip+0x20e4a27]        # 0x1424eca70
0x00408049: mov    r8,QWORD PTR [rip+0x20e4a18]        # 0x1424eca68
0x00408050: jmp    0x140408057
0x00408052: test   di,di
0x00408055: js     0x140408093
0x00408057: movsx  rdx,di
0x0040805b: sub    rcx,r8
0x0040805e: sar    rcx,0x3
0x00408062: cmp    rdx,rcx
0x00408065: jae    0x140408093
0x00408067: mov    rdx,QWORD PTR [r8+rdx*8]
0x0040806b: add    rdx,0x20
0x0040806f: lea    rax,[rbp-0x18]
0x00408073: cmp    rax,rdx
0x00408076: je     0x140408093
0x00408078: mov    r8,QWORD PTR [rdx+0x10]
0x0040807c: cmp    QWORD PTR [rdx+0x18],0xf
0x00408081: jbe    0x140408086
0x00408083: mov    rdx,QWORD PTR [rdx]
0x00408086: lea    rcx,[rbp-0x18]
0x0040808a: call   0x14006f8d0
0x0040808f: mov    r9,QWORD PTR [rbp-0x8]
0x00408093: lea    rdx,[rbp-0x18]
0x00408097: cmp    QWORD PTR [rbp+0x0],0xf
0x0040809c: cmova  rdx,QWORD PTR [rbp-0x18]
0x004080a1: lea    rcx,[rsi+0x28]
0x004080a5: mov    r8,r9
0x004080a8: call   0x14006fa10
0x004080ad: xor    r14b,r14b
0x004080b0: mov    r12d,0x6
0x004080b6: lea    r11,[rip+0x11e5a67]        # 0x1415edb24 ; literal="'s "
0x004080bd: test   BYTE PTR [rsi+0x4],0x40
0x004080c1: je     0x1404082ce
0x004080c7: movsx  rcx,WORD PTR [rsi+0x20]
0x004080cc: movsx  r8d,WORD PTR [rsi+0x1e]
0x004080d1: movsx  r9d,WORD PTR [rsi+0x1c]
0x004080d6: test   r9w,r9w
0x004080da: js     0x140408219
0x004080e0: cmp    r9d,DWORD PTR [rip+0x20dfff5]        # 0x1424e80dc
0x004080e7: jge    0x140408219
0x004080ed: test   r8w,r8w
0x004080f1: js     0x140408219
0x004080f7: cmp    r8d,DWORD PTR [rip+0x20dffe2]        # 0x1424e80e0
0x004080fe: jge    0x140408219
0x00408104: test   cx,cx
0x00408107: js     0x140408219
0x0040810d: cmp    ecx,DWORD PTR [rip+0x20dffd1]        # 0x1424e80e4
0x00408113: jge    0x140408219
0x00408119: movzx  eax,r9w
0x0040811d: sar    ax,0x4
0x00408121: movzx  edx,r8w
0x00408125: sar    dx,0x4
0x00408129: mov    r10,QWORD PTR [rip+0x20dff78]        # 0x1424e80a8
0x00408130: test   r10,r10
0x00408133: je     0x140408219
0x00408139: movsx  rax,ax
0x0040813d: movsx  rdx,dx
0x00408141: mov    rax,QWORD PTR [r10+rax*8]
0x00408145: mov    rax,QWORD PTR [rax+rdx*8]
0x00408149: mov    rdi,QWORD PTR [rax+rcx*8]
0x0040814d: test   rdi,rdi
0x00408150: je     0x140408219
0x00408156: mov    r13d,r8d
0x00408159: and    r13d,0x8000000f
0x00408160: jge    0x14040816c
0x00408162: dec    r13d
0x00408165: or     r13d,0xfffffff0
0x00408169: inc    r13d
0x0040816c: mov    r12d,r9d
0x0040816f: and    r12d,0x8000000f
0x00408176: jge    0x140408182
0x00408178: dec    r12d
0x0040817b: or     r12d,0xfffffff0
0x0040817f: inc    r12d
0x00408182: mov    r15d,0xffffffff
0x00408188: xor    r8b,r8b
0x0040818b: mov    BYTE PTR [rsp+0x70],r8b
0x00408190: mov    rbx,QWORD PTR [rdi+0x8]
0x00408194: mov    rdi,QWORD PTR [rdi+0x10]
0x00408198: movzx  r14d,WORD PTR [rsp+0x70]
0x0040819e: mov    DWORD PTR [rsp+0x7c],r14d
0x004081a3: mov    eax,DWORD PTR [rbp-0x70]
0x004081a6: mov    DWORD PTR [rsp+0x78],eax
0x004081aa: nop    WORD PTR [rax+rax*1+0x0]
0x004081b0: cmp    rbx,rdi
0x004081b3: jae    0x14040822a
0x004081b5: mov    r14,QWORD PTR [rbx]
0x004081b8: mov    rax,QWORD PTR [r14]
0x004081bb: mov    rcx,r14
0x004081be: call   QWORD PTR [rax]
0x004081c0: cmp    ax,0x3
0x004081c4: jne    0x14040820e
0x004081c6: movzx  edx,WORD PTR [r14+0x10]
0x004081cb: cmp    dx,0x1
0x004081cf: jne    0x14040820e
0x004081d1: movsx  rax,r12w
0x004081d5: shl    rax,0x4
0x004081d9: movsx  rcx,r13w
0x004081dd: add    rax,r14
0x004081e0: movzx  r8d,BYTE PTR [rcx+rax*1+0x12]
0x004081e6: cmp    r8b,BYTE PTR [rsp+0x70]
0x004081eb: jbe    0x14040820e
0x004081ed: movzx  r15d,WORD PTR [r14+0x8]
0x004081f2: mov    eax,DWORD PTR [r14+0xc]
0x004081f6: mov    DWORD PTR [rsp+0x78],eax
0x004081fa: movzx  r14d,dx
0x004081fe: mov    DWORD PTR [rsp+0x7c],r14d
0x00408203: mov    BYTE PTR [rsp+0x70],r8b
0x00408208: add    rbx,0x8
0x0040820c: jmp    0x1404081b0
0x0040820e: mov    r14d,DWORD PTR [rsp+0x7c]
0x00408213: add    rbx,0x8
0x00408217: jmp    0x1404081b0
0x00408219: movzx  r14d,WORD PTR [rsp+0x70]
0x0040821f: mov    edi,DWORD PTR [rbp-0x70]
0x00408222: movzx  r15d,WORD PTR [rsp+0x74]
0x00408228: jmp    0x140408246
0x0040822a: lea    r11,[rip+0x11e58f3]        # 0x1415edb24 ; literal="'s "
0x00408231: mov    r13d,0x1
0x00408237: mov    r12d,0x6
0x0040823d: mov    edi,DWORD PTR [rsp+0x78]
0x00408241: mov    ebx,0xf
0x00408246: cmp    r15w,0xffff
0x0040824b: jne    0x140408254
0x0040824d: movzx  r15d,r12w
0x00408251: mov    r14d,r13d
0x00408254: lea    rcx,[rsi+0x28]
0x00408258: mov    r8d,0x3
0x0040825e: mov    rdx,r11
0x00408261: call   0x14006fa10
0x00408266: xorps  xmm0,xmm0
0x00408269: movups XMMWORD PTR [rbp-0x58],xmm0
0x0040826d: xor    eax,eax
0x0040826f: mov    QWORD PTR [rbp-0x48],rax
0x00408273: mov    QWORD PTR [rbp-0x40],rbx
0x00408277: mov    BYTE PTR [rbp-0x58],al
0x0040827a: mov    WORD PTR [rsp+0x30],r14w
0x00408280: mov    BYTE PTR [rsp+0x28],0x1
0x00408285: mov    DWORD PTR [rsp+0x20],eax
0x00408289: mov    r9d,edi
0x0040828c: movzx  r8d,r15w
0x00408290: lea    rdx,[rbp-0x58]
0x00408294: lea    rcx,[rip+0x1fc9255]        # 0x1423d14f0
0x0040829b: call   0x1414d1920
0x004082a0: lea    rdx,[rbp-0x58]
0x004082a4: cmp    QWORD PTR [rbp-0x40],0xf
0x004082a9: cmova  rdx,QWORD PTR [rbp-0x58]
0x004082ae: lea    rcx,[rsi+0x28]
0x004082b2: mov    r8,QWORD PTR [rbp-0x48]
0x004082b6: call   0x14006fa10
0x004082bb: mov    r14b,0x1
0x004082be: lea    rcx,[rbp-0x58]
0x004082c2: call   0x14006f850
0x004082c7: lea    r11,[rip+0x11e5856]        # 0x1415edb24 ; literal="'s "
0x004082ce: movzx  eax,WORD PTR [rsp+0x74]
0x004082d3: test   ax,ax
0x004082d6: js     0x14040839f
0x004082dc: mov    r15,QWORD PTR [rbp-0x70]
0x004082e0: mov    rcx,QWORD PTR [r15+0x6c0]
0x004082e7: movsx  rdx,ax
0x004082eb: mov    rax,QWORD PTR [r15+0x6c8]
0x004082f2: sub    rax,rcx
0x004082f5: sar    rax,0x3
0x004082f9: cmp    rdx,rax
0x004082fc: jae    0x14040839f
0x00408302: lea    rbx,[rdx*8+0x0]
0x0040830a: mov    rcx,QWORD PTR [rbx+rcx*1]
0x0040830e: mov    rax,QWORD PTR [rcx+0x98]
0x00408315: sub    rax,QWORD PTR [rcx+0x90]
0x0040831c: sar    rax,0x3
0x00408320: test   rax,rax
0x00408323: je     0x14040839f
0x00408325: movzx  r8d,r14b
0x00408329: xor    r8,0x1
0x0040832d: lea    r8,[r8*2+0x1]
0x00408335: lea    rdi,[rip+0x11e0400]        # 0x1415e873c ; literal=" "
0x0040833c: test   r14b,r14b
0x0040833f: cmovne r11,rdi
0x00408343: lea    rcx,[rsi+0x28]
0x00408347: mov    rdx,r11
0x0040834a: call   0x14006fa10
0x0040834f: mov    rax,QWORD PTR [r15+0x6c0]
0x00408356: mov    rax,QWORD PTR [rax+rbx*1]
0x0040835a: mov    rax,QWORD PTR [rax+0x90]
0x00408361: mov    rdx,QWORD PTR [rax]
0x00408364: lea    rax,[rbp-0x18]
0x00408368: cmp    rax,rdx
0x0040836b: je     0x140408384
0x0040836d: mov    r8,QWORD PTR [rdx+0x10]
0x00408371: cmp    QWORD PTR [rdx+0x18],0xf
0x00408376: jbe    0x14040837b
0x00408378: mov    rdx,QWORD PTR [rdx]
0x0040837b: lea    rcx,[rbp-0x18]
0x0040837f: call   0x14006f8d0
0x00408384: lea    rdx,[rbp-0x18]
0x00408388: cmp    QWORD PTR [rbp+0x0],0xf
0x0040838d: cmova  rdx,QWORD PTR [rbp-0x18]
0x00408392: lea    rcx,[rsi+0x28]
0x00408396: mov    r8,QWORD PTR [rbp-0x8]
0x0040839a: call   0x14006fa10
0x0040839f: lea    rcx,[rsi+0x28]
0x004083a3: test   BYTE PTR [rsi+0x4],0x40
0x004083a7: je     0x1404083b5
0x004083a9: mov    r8,r12
0x004083ac: lea    rdx,[rip+0x1231fe9]        # 0x14163a39c ; literal=" print"
0x004083b3: jmp    0x1404083c2
0x004083b5: mov    r8d,0x8
0x004083bb: lea    rdx,[rip+0x1231f7e]        # 0x14163a340 ; literal=" imprint"
0x004083c2: call   0x14006fa10
0x004083c7: nop
0x004083c8: mov    rdx,QWORD PTR [rbp+0x0]
0x004083cc: cmp    rdx,0xf
0x004083d0: jbe    0x140407ed6
0x004083d6: inc    rdx
0x004083d9: mov    rcx,QWORD PTR [rbp-0x18]
0x004083dd: mov    rax,rcx
0x004083e0: cmp    rdx,0x1000
0x004083e7: jb     0x140407ed1
0x004083ed: add    rdx,0x27
0x004083f1: mov    rcx,QWORD PTR [rcx-0x8]
0x004083f5: sub    rax,rcx
0x004083f8: add    rax,0xfffffffffffffff8
0x004083fc: cmp    rax,0x1f
0x00408400: jbe    0x140407ed1
0x00408406: call   QWORD PTR [rip+0x11dd71c]        # 0x1415e5b28
0x0040840c: int3
0x0040840d: lea    rcx,[rsi+0x28]
0x00408411: mov    r8d,0x11
0x00408417: lea    rdx,[rip+0x1231f6a]        # 0x14163a388 ; literal="broken vegetation"
0x0040841e: call   0x14006fa10
0x00408423: jmp    0x140407ee8
0x00408428: mov    r8,r14
0x0040842b: lea    rdx,[rip+0x1231f2a]        # 0x14163a35c ; literal="/N"
0x00408432: jmp    0x14040847d
0x00408434: mov    r8,r14
0x00408437: lea    rdx,[rip+0x1231f22]        # 0x14163a360 ; literal="/S"
0x0040843e: jmp    0x14040847d
0x00408440: mov    r8,r14
0x00408443: lea    rdx,[rip+0x1231f0a]        # 0x14163a354 ; literal="/E"
0x0040844a: jmp    0x14040847d
0x0040844c: mov    r8,r14
0x0040844f: lea    rdx,[rip+0x1231f02]        # 0x14163a358 ; literal="/W"
0x00408456: jmp    0x14040847d
0x00408458: lea    rdx,[rip+0x1231e11]        # 0x14163a270 ; literal="/NE"
0x0040845f: jmp    0x14040847a
0x00408461: lea    rdx,[rip+0x1231e0c]        # 0x14163a274 ; literal="/NW"
0x00408468: jmp    0x14040847a
0x0040846a: lea    rdx,[rip+0x1231df7]        # 0x14163a268 ; literal="/SE"
0x00408471: jmp    0x14040847a
0x00408473: lea    rdx,[rip+0x1231df2]        # 0x14163a26c ; literal="/SW"
0x0040847a: mov    r8,rbx
0x0040847d: lea    rcx,[rsi+0x28]
0x00408481: call   0x14006fa10
0x00408486: test   BYTE PTR [rsi+0x4],0x20
0x0040848a: je     0x1404084a2
0x0040848c: lea    rcx,[rsi+0x28]
0x00408490: mov    r8d,0x15
0x00408496: lea    rdx,[rip+0x1231e2b]        # 0x14163a2c8 ; literal="/yours or companion's"
0x0040849d: call   0x14006fa10
0x004084a2: mov    DWORD PTR [rsi+0x48],0x2
0x004084a9: mov    WORD PTR [rsi+0x4c],r13w
0x004084ae: mov    rcx,QWORD PTR [rbp+0x88]
0x004084b5: xor    rcx,rsp
0x004084b8: call   0x141539660
0x004084bd: lea    r11,[rsp+0x190]
0x004084c5: mov    rbx,QWORD PTR [r11+0x38]
0x004084c9: mov    rsi,QWORD PTR [r11+0x40]
0x004084cd: mov    rdi,QWORD PTR [r11+0x48]
0x004084d1: mov    rsp,r11
0x004084d4: pop    r15
0x004084d6: pop    r14
0x004084d8: pop    r13
0x004084da: pop    r12
0x004084dc: pop    rbp
0x004084dd: ret
