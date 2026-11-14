; classic PE:6aea11a5:0272d000; new-game-load-renderer; complete PE unwind owner RVA 0x7d7a10..0x7d9444
0x7d7a10: mov    QWORD PTR [rsp+0x8],rbx
0x7d7a15: mov    QWORD PTR [rsp+0x10],rsi
0x7d7a1a: mov    QWORD PTR [rsp+0x18],rdi
0x7d7a1f: push   rbp
0x7d7a20: push   r12
0x7d7a22: push   r13
0x7d7a24: push   r14
0x7d7a26: push   r15
0x7d7a28: mov    rbp,rsp
0x7d7a2b: sub    rsp,0x60
0x7d7a2f: mov    rax,QWORD PTR [rip+0x10e060a]        # 0x1418b8040
0x7d7a36: xor    rax,rsp
0x7d7a39: mov    QWORD PTR [rbp-0x10],rax
0x7d7a3d: mov    r13,rcx
0x7d7a40: cmp    DWORD PTR [rip+0x1c120b1],0x0        # 0x1423e9af8
0x7d7a47: jle    0x1407d7a63
0x7d7a49: mov    rax,QWORD PTR [rip+0x1c120a0]        # 0x1423e9af0
0x7d7a50: test   BYTE PTR [rax],0x1
0x7d7a53: je     0x1407d7a63
0x7d7a55: mov    eax,DWORD PTR [rip+0x1e8ef85]        # 0x1426669e0
0x7d7a5b: mov    DWORD PTR [rip+0x1e8ef7b],eax        # 0x1426669dc
0x7d7a61: jmp    0x1407d7a6d
0x7d7a63: mov    DWORD PTR [rip+0x1e8ef6f],0xffffffff        # 0x1426669dc
0x7d7a6d: mov    BYTE PTR [rip+0x1e8ef64],0x0        # 0x1426669d8
0x7d7a74: lea    rdx,[rbp-0x40]
0x7d7a78: lea    rcx,[rbp-0x3c]
0x7d7a7c: call   0x140c47e50
0x7d7a81: xor    r8d,r8d
0x7d7a84: mov    dl,0xff
0x7d7a86: xor    ecx,ecx
0x7d7a88: call   0x1408d57c0
0x7d7a8d: mov    r14d,DWORD PTR [rip+0x1c12074]        # 0x1423e9b08
0x7d7a94: dec    r14d
0x7d7a97: xor    r12d,r12d
0x7d7a9a: mov    ebx,DWORD PTR [rbp-0x40]
0x7d7a9d: mov    esi,DWORD PTR [rbp-0x3c]
0x7d7aa0: cmp    DWORD PTR [rip+0x1e8ef35],0xffffffff        # 0x1426669dc
0x7d7aa7: jne    0x1407d7b79
0x7d7aad: mov    DWORD PTR [rip+0x1e8ed45],0x1000006        # 0x1426667fc
0x7d7ab7: mov    edi,r12d
0x7d7aba: test   r14d,r14d
0x7d7abd: js     0x1407d7b79
0x7d7ac3: mov    r11d,esi
0x7d7ac6: cmp    esi,ebx
0x7d7ac8: jg     0x1407d7b6e
0x7d7ace: xchg   ax,ax
0x7d7ad0: mov    DWORD PTR [rip+0x1e8ed1d],r11d        # 0x1426667f4
0x7d7ad7: mov    DWORD PTR [rip+0x1e8ed1b],edi        # 0x1426667f8
0x7d7add: test   edi,edi
0x7d7adf: jne    0x1407d7b0a
0x7d7ae1: cmp    r11d,esi
0x7d7ae4: jne    0x1407d7aee
0x7d7ae6: mov    edx,DWORD PTR [rip+0x1c15540]        # 0x1423ed02c
0x7d7aec: jmp    0x1407d7b56
0x7d7aee: lea    rcx,[rip+0x1e8ec7b]        # 0x142666770
0x7d7af5: cmp    r11d,ebx
0x7d7af8: jne    0x1407d7b02
0x7d7afa: mov    edx,DWORD PTR [rip+0x1c15534]        # 0x1423ed034
0x7d7b00: jmp    0x1407d7b5d
0x7d7b02: mov    edx,DWORD PTR [rip+0x1c15528]        # 0x1423ed030
0x7d7b08: jmp    0x1407d7b5d
0x7d7b0a: cmp    edi,r14d
0x7d7b0d: jne    0x1407d7b38
0x7d7b0f: cmp    r11d,esi
0x7d7b12: jne    0x1407d7b1c
0x7d7b14: mov    edx,DWORD PTR [rip+0x1c1552a]        # 0x1423ed044
0x7d7b1a: jmp    0x1407d7b56
0x7d7b1c: lea    rcx,[rip+0x1e8ec4d]        # 0x142666770
0x7d7b23: cmp    r11d,ebx
0x7d7b26: jne    0x1407d7b30
0x7d7b28: mov    edx,DWORD PTR [rip+0x1c1551e]        # 0x1423ed04c
0x7d7b2e: jmp    0x1407d7b5d
0x7d7b30: mov    edx,DWORD PTR [rip+0x1c15512]        # 0x1423ed048
0x7d7b36: jmp    0x1407d7b5d
0x7d7b38: cmp    r11d,esi
0x7d7b3b: jne    0x1407d7b45
0x7d7b3d: mov    edx,DWORD PTR [rip+0x1c154f5]        # 0x1423ed038
0x7d7b43: jmp    0x1407d7b56
0x7d7b45: cmp    r11d,ebx
0x7d7b48: mov    edx,DWORD PTR [rip+0x1c154f2]        # 0x1423ed040
0x7d7b4e: je     0x1407d7b56
0x7d7b50: mov    edx,DWORD PTR [rip+0x1c154e6]        # 0x1423ed03c
0x7d7b56: lea    rcx,[rip+0x1e8ec13]        # 0x142666770
0x7d7b5d: call   0x140af1390
0x7d7b62: inc    r11d
0x7d7b65: cmp    r11d,ebx
0x7d7b68: jle    0x1407d7ad0
0x7d7b6e: inc    edi
0x7d7b70: cmp    edi,r14d
0x7d7b73: jle    0x1407d7ac3
0x7d7b79: mov    DWORD PTR [rip+0x1e8ec79],0x1010007        # 0x1426667fc
0x7d7b83: mov    r9d,DWORD PTR [rip+0x1e8324e]        # 0x14265add8
0x7d7b8a: add    r9d,DWORD PTR [rip+0x1e83243]        # 0x14265add4
0x7d7b91: add    r9d,DWORD PTR [r13+0x2e0]
0x7d7b98: mov    rcx,QWORD PTR [rip+0x1e83249]        # 0x14265ade8
0x7d7b9f: sub    rcx,QWORD PTR [rip+0x1e8323a]        # 0x14265ade0
0x7d7ba6: sar    rcx,0x3
0x7d7baa: lea    r8d,[rcx*2+0x24]
0x7d7bb2: lea    r15d,[rsi+0x5]
0x7d7bb6: lea    edi,[rbx-0x6]
0x7d7bb9: mov    eax,edi
0x7d7bbb: sub    eax,r15d
0x7d7bbe: test   r9d,r9d
0x7d7bc1: cmovns r12d,r9d
0x7d7bc5: imul   eax,r12d
0x7d7bc9: cdq
0x7d7bca: idiv   r8d
0x7d7bcd: add    eax,r15d
0x7d7bd0: mov    ecx,r15d
0x7d7bd3: cmp    eax,r15d
0x7d7bd6: cmovge ecx,eax
0x7d7bd9: lea    r12d,[rdi-0x1]
0x7d7bdd: cmp    ecx,r12d
0x7d7be0: cmovle r12d,ecx
0x7d7be4: mov    eax,0x66666667
0x7d7be9: imul   r14d
0x7d7bec: sar    edx,1
0x7d7bee: mov    r14d,edx
0x7d7bf1: shr    r14d,0x1f
0x7d7bf5: add    r14d,0x6
0x7d7bf9: add    r14d,edx
0x7d7bfc: mov    r11d,r15d
0x7d7bff: cmp    r15d,edi
0x7d7c02: jg     0x1407d7c84
0x7d7c08: nop    DWORD PTR [rax+rax*1+0x0]
0x7d7c10: mov    DWORD PTR [rip+0x1e8ebdd],r11d        # 0x1426667f4
0x7d7c17: mov    DWORD PTR [rip+0x1e8ebda],r14d        # 0x1426667f8
0x7d7c1e: cmp    r11d,r12d
0x7d7c21: jg     0x1407d7c4f
0x7d7c23: cmp    r11d,r15d
0x7d7c26: jne    0x1407d7c30
0x7d7c28: mov    edx,DWORD PTR [rip+0x1c14fea]        # 0x1423ecc18
0x7d7c2e: jmp    0x1407d7c6d
0x7d7c30: xor    r8d,r8d
0x7d7c33: lea    rcx,[rip+0x1e8eb36]        # 0x142666770
0x7d7c3a: cmp    r11d,edi
0x7d7c3d: jne    0x1407d7c47
0x7d7c3f: mov    edx,DWORD PTR [rip+0x1c14fdb]        # 0x1423ecc20
0x7d7c45: jmp    0x1407d7c77
0x7d7c47: mov    edx,DWORD PTR [rip+0x1c14fcf]        # 0x1423ecc1c
0x7d7c4d: jmp    0x1407d7c77
0x7d7c4f: cmp    r11d,r15d
0x7d7c52: jne    0x1407d7c5c
0x7d7c54: mov    edx,DWORD PTR [rip+0x1c14fca]        # 0x1423ecc24
0x7d7c5a: jmp    0x1407d7c6d
0x7d7c5c: cmp    r11d,edi
0x7d7c5f: mov    edx,DWORD PTR [rip+0x1c14fc7]        # 0x1423ecc2c
0x7d7c65: je     0x1407d7c6d
0x7d7c67: mov    edx,DWORD PTR [rip+0x1c14fbb]        # 0x1423ecc28
0x7d7c6d: xor    r8d,r8d
0x7d7c70: lea    rcx,[rip+0x1e8eaf9]        # 0x142666770
0x7d7c77: call   0x140af19c0
0x7d7c7c: inc    r11d
0x7d7c7f: cmp    r11d,edi
0x7d7c82: jle    0x1407d7c10
0x7d7c84: mov    DWORD PTR [rip+0x1e8eb6e],0x1010007        # 0x1426667fc
0x7d7c8e: mov    DWORD PTR [rip+0x1e8eb5f],r15d        # 0x1426667f4
0x7d7c95: lea    eax,[r14-0x5]
0x7d7c99: mov    DWORD PTR [rip+0x1e8eb59],eax        # 0x1426667f8
0x7d7c9f: xorps  xmm0,xmm0
0x7d7ca2: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d7ca6: mov    ecx,0x20
0x7d7cab: call   0x140071d90
0x7d7cb0: mov    rdx,rax
0x7d7cb3: mov    QWORD PTR [rbp-0x38],rax
0x7d7cb7: movdqa xmm0,XMMWORD PTR [rip+0xfce851]        # 0x1417a6510
0x7d7cbf: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d7cc4: movups xmm0,XMMWORD PTR [rip+0xef07cd]        # 0x1416c8498 ; vector='Loading world to'
0x7d7ccb: movups XMMWORD PTR [rax],xmm0
0x7d7cce: movsd  xmm0,QWORD PTR [rip+0xef07d2]        # 0x1416c84a8 ; cstring=' start new game'
0x7d7cd6: movsd  QWORD PTR [rax+0x10],xmm0
0x7d7cdb: mov    ecx,DWORD PTR [rip+0xef07cf]        # 0x1416c84b0 ; cstring='ew game'
0x7d7ce1: mov    DWORD PTR [rax+0x18],ecx
0x7d7ce4: movzx  eax,WORD PTR [rip+0xef07c9]        # 0x1416c84b4 ; cstring='ame'
0x7d7ceb: mov    WORD PTR [rdx+0x1c],ax
0x7d7cef: movzx  eax,BYTE PTR [rip+0xef07c0]        # 0x1416c84b6 ; cstring='e'
0x7d7cf6: mov    BYTE PTR [rdx+0x1e],al
0x7d7cf9: mov    BYTE PTR [rdx+0x1f],0x0
0x7d7cfd: xor    r9d,r9d
0x7d7d00: lea    rdx,[rbp-0x38]
0x7d7d04: lea    rcx,[rip+0x1e8ea65]        # 0x142666770
0x7d7d0b: call   0x140af0220
0x7d7d10: nop
0x7d7d11: lea    rcx,[rbp-0x38]
0x7d7d15: call   0x140070e10
0x7d7d1a: mov    DWORD PTR [rip+0x1e8ead8],0x1010007        # 0x1426667fc
0x7d7d24: mov    DWORD PTR [rip+0x1e8eac9],r15d        # 0x1426667f4
0x7d7d2b: lea    eax,[r14-0x2]
0x7d7d2f: mov    DWORD PTR [rip+0x1e8eac3],eax        # 0x1426667f8
0x7d7d35: movsxd rax,DWORD PTR [r13+0x2e0]
0x7d7d3c: cmp    eax,0x23
0x7d7d3f: ja     0x1407d7dea
0x7d7d45: lea    rdx,[rip+0xffffffffff8282b4]        # 0x140000000
0x7d7d4c: mov    eax,DWORD PTR [rdx+rax*4+0x7d92cc]
0x7d7d53: add    rax,rdx
0x7d7d56: jmp    rax
0x7d7d58: xorps  xmm0,xmm0
0x7d7d5b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d7d5f: movdqa xmm1,XMMWORD PTR [rip+0xfce6a9]        # 0x1417a6410
0x7d7d67: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7d7d6c: movsd  xmm0,QWORD PTR [rip+0xe43b6c]        # 0x14161b8e0 ; cstring='Opening file...'
0x7d7d74: movsd  QWORD PTR [rbp-0x38],xmm0
0x7d7d79: mov    eax,DWORD PTR [rip+0xe43b69]        # 0x14161b8e8 ; cstring='file...'
0x7d7d7f: mov    DWORD PTR [rbp-0x30],eax
0x7d7d82: movzx  eax,WORD PTR [rip+0xe43b63]        # 0x14161b8ec ; cstring='...'
0x7d7d89: mov    WORD PTR [rbp-0x2c],ax
0x7d7d8d: movzx  eax,BYTE PTR [rip+0xe43b5a]        # 0x14161b8ee ; cstring='.'
0x7d7d94: mov    BYTE PTR [rbp-0x2a],al
0x7d7d97: mov    BYTE PTR [rbp-0x29],0x0
0x7d7d9b: xor    r9d,r9d
0x7d7d9e: lea    rdx,[rbp-0x38]
0x7d7da2: lea    rcx,[rip+0x1e8e9c7]        # 0x142666770
0x7d7da9: call   0x140af0220
0x7d7dae: nop
0x7d7daf: mov    rdx,QWORD PTR [rbp-0x20]
0x7d7db3: cmp    rdx,0xf
0x7d7db7: jbe    0x1407d7dea
0x7d7db9: inc    rdx
0x7d7dbc: mov    rcx,QWORD PTR [rbp-0x38]
0x7d7dc0: mov    rax,rcx
0x7d7dc3: cmp    rdx,0x1000
0x7d7dca: jb     0x1407d7de5
0x7d7dcc: add    rdx,0x27
0x7d7dd0: mov    rcx,QWORD PTR [rcx-0x8]
0x7d7dd4: sub    rax,rcx
0x7d7dd7: add    rax,0xfffffffffffffff8
0x7d7ddb: cmp    rax,0x1f
0x7d7ddf: ja     0x1407d92c3
0x7d7de5: call   0x14154de20
0x7d7dea: mov    rcx,QWORD PTR [rbp-0x10]
0x7d7dee: xor    rcx,rsp
0x7d7df1: call   0x14154de00
0x7d7df6: lea    r11,[rsp+0x60]
0x7d7dfb: mov    rbx,QWORD PTR [r11+0x30]
0x7d7dff: mov    rsi,QWORD PTR [r11+0x38]
0x7d7e03: mov    rdi,QWORD PTR [r11+0x40]
0x7d7e07: mov    rsp,r11
0x7d7e0a: pop    r15
0x7d7e0c: pop    r14
0x7d7e0e: pop    r13
0x7d7e10: pop    r12
0x7d7e12: pop    rbp
0x7d7e13: ret
0x7d7e14: mov    eax,DWORD PTR [rip+0x1e82f66]        # 0x14265ad80
0x7d7e1a: dec    eax
0x7d7e1c: cmp    eax,0x39
0x7d7e1f: ja     0x1407d87e0
0x7d7e25: cdqe
0x7d7e27: mov    ecx,DWORD PTR [rdx+rax*4+0x7d935c]
0x7d7e2e: add    rcx,rdx
0x7d7e31: jmp    rcx
0x7d7e33: movsxd rax,DWORD PTR [rip+0x1e82f9a]        # 0x14265add4
0x7d7e3a: test   eax,eax
0x7d7e3c: js     0x1407d7ea9
0x7d7e3e: mov    rcx,QWORD PTR [rip+0x1e83023]        # 0x14265ae68
0x7d7e45: sub    rcx,QWORD PTR [rip+0x1e83014]        # 0x14265ae60
0x7d7e4c: sar    rcx,0x3
0x7d7e50: cmp    rax,rcx
0x7d7e53: jae    0x1407d7ea9
0x7d7e55: lea    rdx,[rip+0xef06e4]        # 0x1416c8540 ; cstring='Loading object files...  '
0x7d7e5c: lea    rcx,[rbp-0x38]
0x7d7e60: call   0x140069710
0x7d7e65: nop
0x7d7e66: xor    r9d,r9d
0x7d7e69: lea    rdx,[rbp-0x38]
0x7d7e6d: lea    rcx,[rip+0x1e8e8fc]        # 0x142666770
0x7d7e74: call   0x140af0220
0x7d7e79: nop
0x7d7e7a: lea    rcx,[rbp-0x38]
0x7d7e7e: call   0x140070e10
0x7d7e83: movsxd rax,DWORD PTR [rip+0x1e82f4a]        # 0x14265add4
0x7d7e8a: xor    r9d,r9d
0x7d7e8d: mov    rdx,QWORD PTR [rip+0x1e82fcc]        # 0x14265ae60
0x7d7e94: mov    rdx,QWORD PTR [rdx+rax*8]
0x7d7e98: lea    rcx,[rip+0x1e8e8d1]        # 0x142666770
0x7d7e9f: call   0x140af0220
0x7d7ea4: jmp    0x1407d87e0
0x7d7ea9: lea    rdx,[rip+0xef0690]        # 0x1416c8540 ; cstring='Loading object files...  '
0x7d7eb0: lea    rcx,[rbp-0x38]
0x7d7eb4: call   0x140069710
0x7d7eb9: nop
0x7d7eba: xor    r9d,r9d
0x7d7ebd: lea    rdx,[rbp-0x38]
0x7d7ec1: lea    rcx,[rip+0x1e8e8a8]        # 0x142666770
0x7d7ec8: call   0x140af0220
0x7d7ecd: nop
0x7d7ece: jmp    0x1407d87d7
0x7d7ed3: lea    rdx,[rip+0xef0686]        # 0x1416c8560 ; cstring='Sorting text...'
0x7d7eda: lea    rcx,[rbp-0x38]
0x7d7ede: call   0x140069710
0x7d7ee3: nop
0x7d7ee4: xor    r9d,r9d
0x7d7ee7: lea    rdx,[rbp-0x38]
0x7d7eeb: lea    rcx,[rip+0x1e8e87e]        # 0x142666770
0x7d7ef2: call   0x140af0220
0x7d7ef7: nop
0x7d7ef8: jmp    0x1407d87d7
0x7d7efd: lea    rdx,[rip+0xef0604]        # 0x1416c8508 ; cstring='Sorting material templates...'
0x7d7f04: lea    rcx,[rbp-0x38]
0x7d7f08: call   0x140069710
0x7d7f0d: nop
0x7d7f0e: xor    r9d,r9d
0x7d7f11: lea    rdx,[rbp-0x38]
0x7d7f15: lea    rcx,[rip+0x1e8e854]        # 0x142666770
0x7d7f1c: call   0x140af0220
0x7d7f21: nop
0x7d7f22: jmp    0x1407d87d7
0x7d7f27: lea    rdx,[rip+0xef05fa]        # 0x1416c8528 ; cstring='Sorting inorganics...'
0x7d7f2e: lea    rcx,[rbp-0x38]
0x7d7f32: call   0x140069710
0x7d7f37: nop
0x7d7f38: xor    r9d,r9d
0x7d7f3b: lea    rdx,[rbp-0x38]
0x7d7f3f: lea    rcx,[rip+0x1e8e82a]        # 0x142666770
0x7d7f46: call   0x140af0220
0x7d7f4b: nop
0x7d7f4c: jmp    0x1407d87d7
0x7d7f51: lea    rdx,[rip+0xef0648]        # 0x1416c85a0 ; cstring='Sorting plants...'
0x7d7f58: lea    rcx,[rbp-0x38]
0x7d7f5c: call   0x140069710
0x7d7f61: nop
0x7d7f62: xor    r9d,r9d
0x7d7f65: lea    rdx,[rbp-0x38]
0x7d7f69: lea    rcx,[rip+0x1e8e800]        # 0x142666770
0x7d7f70: call   0x140af0220
0x7d7f75: nop
0x7d7f76: jmp    0x1407d87d7
0x7d7f7b: lea    rdx,[rip+0xef0636]        # 0x1416c85b8 ; cstring='Sorting tissue templates...'
0x7d7f82: lea    rcx,[rbp-0x38]
0x7d7f86: call   0x140069710
0x7d7f8b: nop
0x7d7f8c: xor    r9d,r9d
0x7d7f8f: lea    rdx,[rbp-0x38]
0x7d7f93: lea    rcx,[rip+0x1e8e7d6]        # 0x142666770
0x7d7f9a: call   0x140af0220
0x7d7f9f: nop
0x7d7fa0: jmp    0x1407d87d7
0x7d7fa5: lea    rdx,[rip+0xef05c4]        # 0x1416c8570 ; cstring='Sorting items...'
0x7d7fac: lea    rcx,[rbp-0x38]
0x7d7fb0: call   0x140069710
0x7d7fb5: nop
0x7d7fb6: xor    r9d,r9d
0x7d7fb9: lea    rdx,[rbp-0x38]
0x7d7fbd: lea    rcx,[rip+0x1e8e7ac]        # 0x142666770
0x7d7fc4: call   0x140af0220
0x7d7fc9: nop
0x7d7fca: jmp    0x1407d87d7
0x7d7fcf: lea    rdx,[rip+0xef05b2]        # 0x1416c8588 ; cstring='Sorting buildings...'
0x7d7fd6: lea    rcx,[rbp-0x38]
0x7d7fda: call   0x140069710
0x7d7fdf: nop
0x7d7fe0: xor    r9d,r9d
0x7d7fe3: lea    rdx,[rbp-0x38]
0x7d7fe7: lea    rcx,[rip+0x1e8e782]        # 0x142666770
0x7d7fee: call   0x140af0220
0x7d7ff3: nop
0x7d7ff4: jmp    0x1407d87d7
0x7d7ff9: lea    rdx,[rip+0xef01f8]        # 0x1416c81f8 ; cstring='Sorting body detail plans...'
0x7d8000: lea    rcx,[rbp-0x38]
0x7d8004: call   0x140069710
0x7d8009: nop
0x7d800a: xor    r9d,r9d
0x7d800d: lea    rdx,[rbp-0x38]
0x7d8011: lea    rcx,[rip+0x1e8e758]        # 0x142666770
0x7d8018: call   0x140af0220
0x7d801d: nop
0x7d801e: jmp    0x1407d87d7
0x7d8023: lea    rdx,[rip+0xef01ee]        # 0x1416c8218 ; cstring='Sorting creature bodies...'
0x7d802a: lea    rcx,[rbp-0x38]
0x7d802e: call   0x140069710
0x7d8033: nop
0x7d8034: xor    r9d,r9d
0x7d8037: lea    rdx,[rbp-0x38]
0x7d803b: lea    rcx,[rip+0x1e8e72e]        # 0x142666770
0x7d8042: call   0x140af0220
0x7d8047: nop
0x7d8048: jmp    0x1407d87d7
0x7d804d: lea    rdx,[rip+0xef016c]        # 0x1416c81c0 ; cstring='Sorting creature variations...'
0x7d8054: lea    rcx,[rbp-0x38]
0x7d8058: call   0x140069710
0x7d805d: nop
0x7d805e: xor    r9d,r9d
0x7d8061: lea    rdx,[rbp-0x38]
0x7d8065: lea    rcx,[rip+0x1e8e704]        # 0x142666770
0x7d806c: call   0x140af0220
0x7d8071: nop
0x7d8072: jmp    0x1407d87d7
0x7d8077: lea    rdx,[rip+0xef0162]        # 0x1416c81e0 ; cstring='Sorting creatures...'
0x7d807e: lea    rcx,[rbp-0x38]
0x7d8082: call   0x140069710
0x7d8087: nop
0x7d8088: xor    r9d,r9d
0x7d808b: lea    rdx,[rbp-0x38]
0x7d808f: lea    rcx,[rip+0x1e8e6da]        # 0x142666770
0x7d8096: call   0x140af0220
0x7d809b: nop
0x7d809c: jmp    0x1407d87d7
0x7d80a1: lea    rdx,[rip+0xef01c0]        # 0x1416c8268 ; cstring='Sorting entities...'
0x7d80a8: lea    rcx,[rbp-0x38]
0x7d80ac: call   0x140069710
0x7d80b1: nop
0x7d80b2: xor    r9d,r9d
0x7d80b5: lea    rdx,[rbp-0x38]
0x7d80b9: lea    rcx,[rip+0x1e8e6b0]        # 0x142666770
0x7d80c0: call   0x140af0220
0x7d80c5: nop
0x7d80c6: jmp    0x1407d87d7
0x7d80cb: lea    rdx,[rip+0xef01ae]        # 0x1416c8280 ; cstring='Sorting languages...'
0x7d80d2: lea    rcx,[rbp-0x38]
0x7d80d6: call   0x140069710
0x7d80db: nop
0x7d80dc: xor    r9d,r9d
0x7d80df: lea    rdx,[rbp-0x38]
0x7d80e3: lea    rcx,[rip+0x1e8e686]        # 0x142666770
0x7d80ea: call   0x140af0220
0x7d80ef: nop
0x7d80f0: jmp    0x1407d87d7
0x7d80f5: lea    rdx,[rip+0xef013c]        # 0x1416c8238 ; cstring='Sorting descriptors...'
0x7d80fc: lea    rcx,[rbp-0x38]
0x7d8100: call   0x140069710
0x7d8105: nop
0x7d8106: xor    r9d,r9d
0x7d8109: lea    rdx,[rbp-0x38]
0x7d810d: lea    rcx,[rip+0x1e8e65c]        # 0x142666770
0x7d8114: call   0x140af0220
0x7d8119: nop
0x7d811a: jmp    0x1407d87d7
0x7d811f: lea    rdx,[rip+0xef012a]        # 0x1416c8250 ; cstring='Sorting reactions...'
0x7d8126: lea    rcx,[rbp-0x38]
0x7d812a: call   0x140069710
0x7d812f: nop
0x7d8130: xor    r9d,r9d
0x7d8133: lea    rdx,[rbp-0x38]
0x7d8137: lea    rcx,[rip+0x1e8e632]        # 0x142666770
0x7d813e: call   0x140af0220
0x7d8143: nop
0x7d8144: jmp    0x1407d87d7
0x7d8149: lea    rdx,[rip+0xef0178]        # 0x1416c82c8 ; cstring='Sorting interactions...'
0x7d8150: lea    rcx,[rbp-0x38]
0x7d8154: call   0x140069710
0x7d8159: nop
0x7d815a: xor    r9d,r9d
0x7d815d: lea    rdx,[rbp-0x38]
0x7d8161: lea    rcx,[rip+0x1e8e608]        # 0x142666770
0x7d8168: call   0x140af0220
0x7d816d: nop
0x7d816e: jmp    0x1407d87d7
0x7d8173: lea    rdx,[rip+0xef0166]        # 0x1416c82e0 ; cstring='Sorting music...'
0x7d817a: lea    rcx,[rbp-0x38]
0x7d817e: call   0x140069710
0x7d8183: nop
0x7d8184: xor    r9d,r9d
0x7d8187: lea    rdx,[rbp-0x38]
0x7d818b: lea    rcx,[rip+0x1e8e5de]        # 0x142666770
0x7d8192: call   0x140af0220
0x7d8197: nop
0x7d8198: jmp    0x1407d87d7
0x7d819d: lea    rdx,[rip+0xef00f4]        # 0x1416c8298 ; cstring='Sorting sounds...'
0x7d81a4: lea    rcx,[rbp-0x38]
0x7d81a8: call   0x140069710
0x7d81ad: nop
0x7d81ae: xor    r9d,r9d
0x7d81b1: lea    rdx,[rbp-0x38]
0x7d81b5: lea    rcx,[rip+0x1e8e5b4]        # 0x142666770
0x7d81bc: call   0x140af0220
0x7d81c1: nop
0x7d81c2: jmp    0x1407d87d7
0x7d81c7: lea    rdx,[rip+0xef00e2]        # 0x1416c82b0 ; cstring='Processing languages...'
0x7d81ce: lea    rcx,[rbp-0x38]
0x7d81d2: call   0x140069710
0x7d81d7: nop
0x7d81d8: xor    r9d,r9d
0x7d81db: lea    rdx,[rbp-0x38]
0x7d81df: lea    rcx,[rip+0x1e8e58a]        # 0x142666770
0x7d81e6: call   0x140af0220
0x7d81eb: nop
0x7d81ec: jmp    0x1407d87d7
0x7d81f1: lea    rdx,[rip+0xef0130]        # 0x1416c8328 ; cstring='Processing inorganics...'
0x7d81f8: lea    rcx,[rbp-0x38]
0x7d81fc: call   0x140069710
0x7d8201: nop
0x7d8202: xor    r9d,r9d
0x7d8205: lea    rdx,[rbp-0x38]
0x7d8209: lea    rcx,[rip+0x1e8e560]        # 0x142666770
0x7d8210: call   0x140af0220
0x7d8215: nop
0x7d8216: jmp    0x1407d87d7
0x7d821b: lea    rdx,[rip+0xef0126]        # 0x1416c8348 ; cstring='Processing plants...'
0x7d8222: lea    rcx,[rbp-0x38]
0x7d8226: call   0x140069710
0x7d822b: nop
0x7d822c: xor    r9d,r9d
0x7d822f: lea    rdx,[rbp-0x38]
0x7d8233: lea    rcx,[rip+0x1e8e536]        # 0x142666770
0x7d823a: call   0x140af0220
0x7d823f: nop
0x7d8240: jmp    0x1407d87d7
0x7d8245: lea    rdx,[rip+0xef00ac]        # 0x1416c82f8 ; cstring='Processing items...'
0x7d824c: lea    rcx,[rbp-0x38]
0x7d8250: call   0x140069710
0x7d8255: nop
0x7d8256: xor    r9d,r9d
0x7d8259: lea    rdx,[rbp-0x38]
0x7d825d: lea    rcx,[rip+0x1e8e50c]        # 0x142666770
0x7d8264: call   0x140af0220
0x7d8269: nop
0x7d826a: jmp    0x1407d87d7
0x7d826f: lea    rdx,[rip+0xef009a]        # 0x1416c8310 ; cstring='Processing creatures...'
0x7d8276: lea    rcx,[rbp-0x38]
0x7d827a: call   0x140069710
0x7d827f: nop
0x7d8280: xor    r9d,r9d
0x7d8283: lea    rdx,[rbp-0x38]
0x7d8287: lea    rcx,[rip+0x1e8e4e2]        # 0x142666770
0x7d828e: call   0x140af0220
0x7d8293: nop
0x7d8294: jmp    0x1407d87d7
0x7d8299: lea    rdx,[rip+0xeefdb8]        # 0x1416c8058 ; cstring='Processing entities...'
0x7d82a0: lea    rcx,[rbp-0x38]
0x7d82a4: call   0x140069710
0x7d82a9: nop
0x7d82aa: xor    r9d,r9d
0x7d82ad: lea    rdx,[rbp-0x38]
0x7d82b1: lea    rcx,[rip+0x1e8e4b8]        # 0x142666770
0x7d82b8: call   0x140af0220
0x7d82bd: nop
0x7d82be: jmp    0x1407d87d7
0x7d82c3: lea    rdx,[rip+0xeefda6]        # 0x1416c8070 ; cstring='Processing reactions...'
0x7d82ca: lea    rcx,[rbp-0x38]
0x7d82ce: call   0x140069710
0x7d82d3: nop
0x7d82d4: xor    r9d,r9d
0x7d82d7: lea    rdx,[rbp-0x38]
0x7d82db: lea    rcx,[rip+0x1e8e48e]        # 0x142666770
0x7d82e2: call   0x140af0220
0x7d82e7: nop
0x7d82e8: jmp    0x1407d87d7
0x7d82ed: lea    rdx,[rip+0xeefd2c]        # 0x1416c8020 ; cstring='Processing interactions...'
0x7d82f4: lea    rcx,[rbp-0x38]
0x7d82f8: call   0x140069710
0x7d82fd: nop
0x7d82fe: xor    r9d,r9d
0x7d8301: lea    rdx,[rbp-0x38]
0x7d8305: lea    rcx,[rip+0x1e8e464]        # 0x142666770
0x7d830c: call   0x140af0220
0x7d8311: nop
0x7d8312: jmp    0x1407d87d7
0x7d8317: lea    rdx,[rip+0xeefd22]        # 0x1416c8040 ; cstring='Processing music...'
0x7d831e: lea    rcx,[rbp-0x38]
0x7d8322: call   0x140069710
0x7d8327: nop
0x7d8328: xor    r9d,r9d
0x7d832b: lea    rdx,[rbp-0x38]
0x7d832f: lea    rcx,[rip+0x1e8e43a]        # 0x142666770
0x7d8336: call   0x140af0220
0x7d833b: nop
0x7d833c: jmp    0x1407d87d7
0x7d8341: lea    rdx,[rip+0xeefd70]        # 0x1416c80b8 ; cstring='Processing sounds...'
0x7d8348: lea    rcx,[rbp-0x38]
0x7d834c: call   0x140069710
0x7d8351: nop
0x7d8352: xor    r9d,r9d
0x7d8355: lea    rdx,[rbp-0x38]
0x7d8359: lea    rcx,[rip+0x1e8e410]        # 0x142666770
0x7d8360: call   0x140af0220
0x7d8365: nop
0x7d8366: jmp    0x1407d87d7
0x7d836b: lea    rdx,[rip+0xe57c7e]        # 0x14162fff0 ; cstring='Finalizing languages...'
0x7d8372: lea    rcx,[rbp-0x38]
0x7d8376: call   0x140069710
0x7d837b: nop
0x7d837c: xor    r9d,r9d
0x7d837f: lea    rdx,[rbp-0x38]
0x7d8383: lea    rcx,[rip+0x1e8e3e6]        # 0x142666770
0x7d838a: call   0x140af0220
0x7d838f: nop
0x7d8390: jmp    0x1407d87d7
0x7d8395: lea    rdx,[rip+0xe57c6c]        # 0x141630008 ; cstring='Finalizing descriptors...'
0x7d839c: lea    rcx,[rbp-0x38]
0x7d83a0: call   0x140069710
0x7d83a5: nop
0x7d83a6: xor    r9d,r9d
0x7d83a9: lea    rdx,[rbp-0x38]
0x7d83ad: lea    rcx,[rip+0x1e8e3bc]        # 0x142666770
0x7d83b4: call   0x140af0220
0x7d83b9: nop
0x7d83ba: jmp    0x1407d87d7
0x7d83bf: lea    rdx,[rip+0xe57c62]        # 0x141630028 ; cstring='Finalizing material templates...'
0x7d83c6: lea    rcx,[rbp-0x38]
0x7d83ca: call   0x140069710
0x7d83cf: nop
0x7d83d0: xor    r9d,r9d
0x7d83d3: lea    rdx,[rbp-0x38]
0x7d83d7: lea    rcx,[rip+0x1e8e392]        # 0x142666770
0x7d83de: call   0x140af0220
0x7d83e3: nop
0x7d83e4: jmp    0x1407d87d7
0x7d83e9: lea    rdx,[rip+0xe57c60]        # 0x141630050 ; cstring='Finalizing inorganics...'
0x7d83f0: lea    rcx,[rbp-0x38]
0x7d83f4: call   0x140069710
0x7d83f9: nop
0x7d83fa: xor    r9d,r9d
0x7d83fd: lea    rdx,[rbp-0x38]
0x7d8401: lea    rcx,[rip+0x1e8e368]        # 0x142666770
0x7d8408: call   0x140af0220
0x7d840d: nop
0x7d840e: jmp    0x1407d87d7
0x7d8413: lea    rdx,[rip+0xe57b6e]        # 0x14162ff88 ; cstring='Finalizing plants...'
0x7d841a: lea    rcx,[rbp-0x38]
0x7d841e: call   0x140069710
0x7d8423: nop
0x7d8424: xor    r9d,r9d
0x7d8427: lea    rdx,[rbp-0x38]
0x7d842b: lea    rcx,[rip+0x1e8e33e]        # 0x142666770
0x7d8432: call   0x140af0220
0x7d8437: nop
0x7d8438: jmp    0x1407d87d7
0x7d843d: lea    rdx,[rip+0xe57b5c]        # 0x14162ffa0 ; cstring='Finalizing tissue templates...'
0x7d8444: lea    rcx,[rbp-0x38]
0x7d8448: call   0x140069710
0x7d844d: nop
0x7d844e: xor    r9d,r9d
0x7d8451: lea    rdx,[rbp-0x38]
0x7d8455: lea    rcx,[rip+0x1e8e314]        # 0x142666770
0x7d845c: call   0x140af0220
0x7d8461: nop
0x7d8462: jmp    0x1407d87d7
0x7d8467: lea    rdx,[rip+0xe57b52]        # 0x14162ffc0 ; cstring='Finalizing items...'
0x7d846e: lea    rcx,[rbp-0x38]
0x7d8472: call   0x140069710
0x7d8477: nop
0x7d8478: xor    r9d,r9d
0x7d847b: lea    rdx,[rbp-0x38]
0x7d847f: lea    rcx,[rip+0x1e8e2ea]        # 0x142666770
0x7d8486: call   0x140af0220
0x7d848b: nop
0x7d848c: jmp    0x1407d87d7
0x7d8491: lea    rdx,[rip+0xe57b40]        # 0x14162ffd8 ; cstring='Finalizing buildings...'
0x7d8498: lea    rcx,[rbp-0x38]
0x7d849c: call   0x140069710
0x7d84a1: nop
0x7d84a2: xor    r9d,r9d
0x7d84a5: lea    rdx,[rbp-0x38]
0x7d84a9: lea    rcx,[rip+0x1e8e2c0]        # 0x142666770
0x7d84b0: call   0x140af0220
0x7d84b5: nop
0x7d84b6: jmp    0x1407d87d7
0x7d84bb: lea    rdx,[rip+0xe57c26]        # 0x1416300e8 ; cstring='Finalizing body detail plans...'
0x7d84c2: lea    rcx,[rbp-0x38]
0x7d84c6: call   0x140069710
0x7d84cb: nop
0x7d84cc: xor    r9d,r9d
0x7d84cf: lea    rdx,[rbp-0x38]
0x7d84d3: lea    rcx,[rip+0x1e8e296]        # 0x142666770
0x7d84da: call   0x140af0220
0x7d84df: nop
0x7d84e0: jmp    0x1407d87d7
0x7d84e5: lea    rdx,[rip+0xe57c1c]        # 0x141630108 ; cstring='Finalizing creature variations...'
0x7d84ec: lea    rcx,[rbp-0x38]
0x7d84f0: call   0x140069710
0x7d84f5: nop
0x7d84f6: xor    r9d,r9d
0x7d84f9: lea    rdx,[rbp-0x38]
0x7d84fd: lea    rcx,[rip+0x1e8e26c]        # 0x142666770
0x7d8504: call   0x140af0220
0x7d8509: nop
0x7d850a: jmp    0x1407d87d7
0x7d850f: lea    rdx,[rip+0xe57c1a]        # 0x141630130 ; cstring='Finalizing creatures...'
0x7d8516: lea    rcx,[rbp-0x38]
0x7d851a: call   0x140069710
0x7d851f: nop
0x7d8520: xor    r9d,r9d
0x7d8523: lea    rdx,[rbp-0x38]
0x7d8527: lea    rcx,[rip+0x1e8e242]        # 0x142666770
0x7d852e: call   0x140af0220
0x7d8533: nop
0x7d8534: jmp    0x1407d87d7
0x7d8539: lea    rdx,[rip+0xe57c08]        # 0x141630148 ; cstring='Finalizing entities...'
0x7d8540: lea    rcx,[rbp-0x38]
0x7d8544: call   0x140069710
0x7d8549: nop
0x7d854a: xor    r9d,r9d
0x7d854d: lea    rdx,[rbp-0x38]
0x7d8551: lea    rcx,[rip+0x1e8e218]        # 0x142666770
0x7d8558: call   0x140af0220
0x7d855d: nop
0x7d855e: jmp    0x1407d87d7
0x7d8563: lea    rdx,[rip+0xe57b06]        # 0x141630070 ; cstring='Finalizing reactions...'
0x7d856a: lea    rcx,[rbp-0x38]
0x7d856e: call   0x140069710
0x7d8573: nop
0x7d8574: xor    r9d,r9d
0x7d8577: lea    rdx,[rbp-0x38]
0x7d857b: lea    rcx,[rip+0x1e8e1ee]        # 0x142666770
0x7d8582: call   0x140af0220
0x7d8587: nop
0x7d8588: jmp    0x1407d87d7
0x7d858d: lea    rdx,[rip+0xe57af4]        # 0x141630088 ; cstring='Finalizing interactions...'
0x7d8594: lea    rcx,[rbp-0x38]
0x7d8598: call   0x140069710
0x7d859d: nop
0x7d859e: xor    r9d,r9d
0x7d85a1: lea    rdx,[rbp-0x38]
0x7d85a5: lea    rcx,[rip+0x1e8e1c4]        # 0x142666770
0x7d85ac: call   0x140af0220
0x7d85b1: nop
0x7d85b2: jmp    0x1407d87d7
0x7d85b7: lea    rdx,[rip+0xe57aea]        # 0x1416300a8 ; cstring='Preparing material data...'
0x7d85be: lea    rcx,[rbp-0x38]
0x7d85c2: call   0x140069710
0x7d85c7: nop
0x7d85c8: xor    r9d,r9d
0x7d85cb: lea    rdx,[rbp-0x38]
0x7d85cf: lea    rcx,[rip+0x1e8e19a]        # 0x142666770
0x7d85d6: call   0x140af0220
0x7d85db: nop
0x7d85dc: jmp    0x1407d87d7
0x7d85e1: lea    rdx,[rip+0xeefae8]        # 0x1416c80d0 ; cstring='Generating inorganics...'
0x7d85e8: lea    rcx,[rbp-0x38]
0x7d85ec: call   0x140069710
0x7d85f1: nop
0x7d85f2: xor    r9d,r9d
0x7d85f5: lea    rdx,[rbp-0x38]
0x7d85f9: lea    rcx,[rip+0x1e8e170]        # 0x142666770
0x7d8600: call   0x140af0220
0x7d8605: nop
0x7d8606: jmp    0x1407d87d7
0x7d860b: lea    rdx,[rip+0xeefa76]        # 0x1416c8088 ; cstring='Generating plants...'
0x7d8612: lea    rcx,[rbp-0x38]
0x7d8616: call   0x140069710
0x7d861b: nop
0x7d861c: xor    r9d,r9d
0x7d861f: lea    rdx,[rbp-0x38]
0x7d8623: lea    rcx,[rip+0x1e8e146]        # 0x142666770
0x7d862a: call   0x140af0220
0x7d862f: nop
0x7d8630: jmp    0x1407d87d7
0x7d8635: lea    rdx,[rip+0xeefa64]        # 0x1416c80a0 ; cstring='Generating items...'
0x7d863c: lea    rcx,[rbp-0x38]
0x7d8640: call   0x140069710
0x7d8645: nop
0x7d8646: xor    r9d,r9d
0x7d8649: lea    rdx,[rbp-0x38]
0x7d864d: lea    rcx,[rip+0x1e8e11c]        # 0x142666770
0x7d8654: call   0x140af0220
0x7d8659: nop
0x7d865a: jmp    0x1407d87d7
0x7d865f: lea    rdx,[rip+0xeefac2]        # 0x1416c8128 ; cstring='Generating creatures...'
0x7d8666: lea    rcx,[rbp-0x38]
0x7d866a: call   0x140069710
0x7d866f: nop
0x7d8670: xor    r9d,r9d
0x7d8673: lea    rdx,[rbp-0x38]
0x7d8677: lea    rcx,[rip+0x1e8e0f2]        # 0x142666770
0x7d867e: call   0x140af0220
0x7d8683: nop
0x7d8684: jmp    0x1407d87d7
0x7d8689: lea    rdx,[rip+0xeefab0]        # 0x1416c8140 ; cstring='Generating entities...'
0x7d8690: lea    rcx,[rbp-0x38]
0x7d8694: call   0x140069710
0x7d8699: nop
0x7d869a: xor    r9d,r9d
0x7d869d: lea    rdx,[rbp-0x38]
0x7d86a1: lea    rcx,[rip+0x1e8e0c8]        # 0x142666770
0x7d86a8: call   0x140af0220
0x7d86ad: nop
0x7d86ae: jmp    0x1407d87d7
0x7d86b3: lea    rdx,[rip+0xeefa36]        # 0x1416c80f0 ; cstring='Generating reactions...'
0x7d86ba: lea    rcx,[rbp-0x38]
0x7d86be: call   0x140069710
0x7d86c3: nop
0x7d86c4: xor    r9d,r9d
0x7d86c7: lea    rdx,[rbp-0x38]
0x7d86cb: lea    rcx,[rip+0x1e8e09e]        # 0x142666770
0x7d86d2: call   0x140af0220
0x7d86d7: nop
0x7d86d8: jmp    0x1407d87d7
0x7d86dd: lea    rdx,[rip+0xeefa24]        # 0x1416c8108 ; cstring='Generating interactions...'
0x7d86e4: lea    rcx,[rbp-0x38]
0x7d86e8: call   0x140069710
0x7d86ed: nop
0x7d86ee: xor    r9d,r9d
0x7d86f1: lea    rdx,[rbp-0x38]
0x7d86f5: lea    rcx,[rip+0x1e8e074]        # 0x142666770
0x7d86fc: call   0x140af0220
0x7d8701: nop
0x7d8702: jmp    0x1407d87d7
0x7d8707: lea    rdx,[rip+0xeefa7a]        # 0x1416c8188 ; cstring='Finalizing generated objects...'
0x7d870e: lea    rcx,[rbp-0x38]
0x7d8712: call   0x140069710
0x7d8717: nop
0x7d8718: xor    r9d,r9d
0x7d871b: lea    rdx,[rbp-0x38]
0x7d871f: lea    rcx,[rip+0x1e8e04a]        # 0x142666770
0x7d8726: call   0x140af0220
0x7d872b: nop
0x7d872c: jmp    0x1407d87d7
0x7d8731: mov    ecx,DWORD PTR [rip+0x1e826a1]        # 0x14265add8
0x7d8737: test   ecx,ecx
0x7d8739: js     0x1407d878b
0x7d873b: mov    rax,QWORD PTR [rip+0x1e82726]        # 0x14265ae68
0x7d8742: sub    rax,QWORD PTR [rip+0x1e82717]        # 0x14265ae60
0x7d8749: sar    rax,0x3
0x7d874d: cmp    ecx,eax
0x7d874f: jge    0x1407d878b
0x7d8751: lea    rdx,[rip+0xeefa50]        # 0x1416c81a8 ; cstring='Preparing graphics...  '
0x7d8758: lea    rcx,[rbp-0x38]
0x7d875c: call   0x140069710
0x7d8761: nop
0x7d8762: xor    r9d,r9d
0x7d8765: lea    rdx,[rbp-0x38]
0x7d8769: lea    rcx,[rip+0x1e8e000]        # 0x142666770
0x7d8770: call   0x140af0220
0x7d8775: nop
0x7d8776: lea    rcx,[rbp-0x38]
0x7d877a: call   0x140070e10
0x7d877f: movsxd rax,DWORD PTR [rip+0x1e82652]        # 0x14265add8
0x7d8786: jmp    0x1407d7e8a
0x7d878b: lea    rdx,[rip+0xeefa16]        # 0x1416c81a8 ; cstring='Preparing graphics...  '
0x7d8792: lea    rcx,[rbp-0x38]
0x7d8796: call   0x140069710
0x7d879b: nop
0x7d879c: xor    r9d,r9d
0x7d879f: lea    rdx,[rbp-0x38]
0x7d87a3: lea    rcx,[rip+0x1e8dfc6]        # 0x142666770
0x7d87aa: call   0x140af0220
0x7d87af: nop
0x7d87b0: jmp    0x1407d87d7
0x7d87b2: lea    rdx,[rip+0xe43267]        # 0x14161ba20 ; cstring='Finishing...'
0x7d87b9: lea    rcx,[rbp-0x38]
0x7d87bd: call   0x140069710
0x7d87c2: nop
0x7d87c3: xor    r9d,r9d
0x7d87c6: lea    rdx,[rbp-0x38]
0x7d87ca: lea    rcx,[rip+0x1e8df9f]        # 0x142666770
0x7d87d1: call   0x140af0220
0x7d87d6: nop
0x7d87d7: lea    rcx,[rbp-0x38]
0x7d87db: call   0x140070e10
0x7d87e0: cmp    BYTE PTR [rip+0x1e825a5],0x0        # 0x14265ad8c
0x7d87e7: jne    0x1407d87f6
0x7d87e9: cmp    BYTE PTR [rip+0x1e8259d],0x0        # 0x14265ad8d
0x7d87f0: je     0x1407d7dea
0x7d87f6: mov    r9d,r14d
0x7d87f9: mov    r8d,ebx
0x7d87fc: mov    edx,esi
0x7d87fe: lea    rcx,[rip+0x1e8257b]        # 0x14265ad80
0x7d8805: call   0x1407ddab0
0x7d880a: jmp    0x1407d7dea
0x7d880f: xorps  xmm0,xmm0
0x7d8812: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8816: mov    ecx,0x20
0x7d881b: call   0x140071d90
0x7d8820: mov    QWORD PTR [rbp-0x38],rax
0x7d8824: movdqa xmm0,XMMWORD PTR [rip+0xfcdc24]        # 0x1417a6450
0x7d882c: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8831: movups xmm0,XMMWORD PTR [rip+0xe430d8]        # 0x14161b910 ; vector='Allocating space'
0x7d8838: movups XMMWORD PTR [rax],xmm0
0x7d883b: movzx  ecx,WORD PTR [rip+0xe430de]        # 0x14161b920 ; cstring='...'
0x7d8842: mov    WORD PTR [rax+0x10],cx
0x7d8846: movzx  ecx,BYTE PTR [rip+0xe430d5]        # 0x14161b922 ; cstring='.'
0x7d884d: mov    BYTE PTR [rax+0x12],cl
0x7d8850: mov    BYTE PTR [rax+0x13],0x0
0x7d8854: xor    r9d,r9d
0x7d8857: lea    rdx,[rbp-0x38]
0x7d885b: lea    rcx,[rip+0x1e8df0e]        # 0x142666770
0x7d8862: call   0x140af0220
0x7d8867: nop
0x7d8868: jmp    0x1407d7daf
0x7d886d: xorps  xmm0,xmm0
0x7d8870: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8874: mov    ecx,0x20
0x7d8879: call   0x140071d90
0x7d887e: mov    QWORD PTR [rbp-0x38],rax
0x7d8882: movdqa xmm0,XMMWORD PTR [rip+0xfcdb96]        # 0x1417a6420
0x7d888a: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d888f: movups xmm0,XMMWORD PTR [rip+0xeef8c2]        # 0x1416c8158 ; vector='Loading items...'
0x7d8896: movups XMMWORD PTR [rax],xmm0
0x7d8899: mov    BYTE PTR [rax+0x10],0x0
0x7d889d: xor    r9d,r9d
0x7d88a0: lea    rdx,[rbp-0x38]
0x7d88a4: lea    rcx,[rip+0x1e8dec5]        # 0x142666770
0x7d88ab: call   0x140af0220
0x7d88b0: nop
0x7d88b1: jmp    0x1407d7daf
0x7d88b6: xorps  xmm0,xmm0
0x7d88b9: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d88bd: mov    ecx,0x20
0x7d88c2: call   0x140071d90
0x7d88c7: mov    QWORD PTR [rbp-0x38],rax
0x7d88cb: movdqa xmm0,XMMWORD PTR [rip+0xfcdb8d]        # 0x1417a6460
0x7d88d3: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d88d8: movups xmm0,XMMWORD PTR [rip+0xeef891]        # 0x1416c8170 ; vector='Loading building'
0x7d88df: movups XMMWORD PTR [rax],xmm0
0x7d88e2: mov    ecx,DWORD PTR [rip+0xeef898]        # 0x1416c8180 ; cstring='s...'
0x7d88e8: mov    DWORD PTR [rax+0x10],ecx
0x7d88eb: mov    BYTE PTR [rax+0x14],0x0
0x7d88ef: xor    r9d,r9d
0x7d88f2: lea    rdx,[rbp-0x38]
0x7d88f6: lea    rcx,[rip+0x1e8de73]        # 0x142666770
0x7d88fd: call   0x140af0220
0x7d8902: nop
0x7d8903: jmp    0x1407d7daf
0x7d8908: xorps  xmm0,xmm0
0x7d890b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d890f: mov    ecx,0x20
0x7d8914: call   0x140071d90
0x7d8919: mov    QWORD PTR [rbp-0x38],rax
0x7d891d: movdqa xmm0,XMMWORD PTR [rip+0xfcdb2b]        # 0x1417a6450
0x7d8925: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d892a: movups xmm0,XMMWORD PTR [rip+0xeef57f]        # 0x1416c7eb0 ; vector='Loading entities'
0x7d8931: movups XMMWORD PTR [rax],xmm0
0x7d8934: movzx  ecx,WORD PTR [rip+0xeef585]        # 0x1416c7ec0 ; cstring='...'
0x7d893b: mov    WORD PTR [rax+0x10],cx
0x7d893f: movzx  ecx,BYTE PTR [rip+0xeef57c]        # 0x1416c7ec2 ; cstring='.'
0x7d8946: mov    BYTE PTR [rax+0x12],cl
0x7d8949: mov    BYTE PTR [rax+0x13],0x0
0x7d894d: xor    r9d,r9d
0x7d8950: lea    rdx,[rbp-0x38]
0x7d8954: lea    rcx,[rip+0x1e8de15]        # 0x142666770
0x7d895b: call   0x140af0220
0x7d8960: nop
0x7d8961: jmp    0x1407d7daf
0x7d8966: xorps  xmm0,xmm0
0x7d8969: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d896d: mov    ecx,0x20
0x7d8972: call   0x140071d90
0x7d8977: mov    rdx,rax
0x7d897a: mov    QWORD PTR [rbp-0x38],rax
0x7d897e: movdqa xmm0,XMMWORD PTR [rip+0xfcdb4a]        # 0x1417a64d0
0x7d8986: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d898b: movups xmm0,XMMWORD PTR [rip+0xeef536]        # 0x1416c7ec8 ; vector='Loading coin inf'
0x7d8992: movups XMMWORD PTR [rax],xmm0
0x7d8995: movsd  xmm0,QWORD PTR [rip+0xeef53b]        # 0x1416c7ed8 ; cstring='ormation...'
0x7d899d: movsd  QWORD PTR [rax+0x10],xmm0
0x7d89a2: movzx  ecx,WORD PTR [rip+0xeef537]        # 0x1416c7ee0 ; cstring='...'
0x7d89a9: mov    WORD PTR [rax+0x18],cx
0x7d89ad: movzx  eax,BYTE PTR [rip+0xeef52e]        # 0x1416c7ee2 ; cstring='.'
0x7d89b4: mov    BYTE PTR [rdx+0x1a],al
0x7d89b7: mov    BYTE PTR [rdx+0x1b],0x0
0x7d89bb: xor    r9d,r9d
0x7d89be: lea    rdx,[rbp-0x38]
0x7d89c2: lea    rcx,[rip+0x1e8dda7]        # 0x142666770
0x7d89c9: call   0x140af0220
0x7d89ce: nop
0x7d89cf: jmp    0x1407d7daf
0x7d89d4: xorps  xmm0,xmm0
0x7d89d7: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d89db: mov    ecx,0x20
0x7d89e0: call   0x140071d90
0x7d89e5: mov    QWORD PTR [rbp-0x38],rax
0x7d89e9: movdqa xmm0,XMMWORD PTR [rip+0xfcda5f]        # 0x1417a6450
0x7d89f1: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d89f6: movups xmm0,XMMWORD PTR [rip+0xeef473]        # 0x1416c7e70 ; vector='Loading map data'
0x7d89fd: movups XMMWORD PTR [rax],xmm0
0x7d8a00: movzx  ecx,WORD PTR [rip+0xeef479]        # 0x1416c7e80 ; cstring='...'
0x7d8a07: mov    WORD PTR [rax+0x10],cx
0x7d8a0b: movzx  ecx,BYTE PTR [rip+0xeef470]        # 0x1416c7e82 ; cstring='.'
0x7d8a12: mov    BYTE PTR [rax+0x12],cl
0x7d8a15: mov    BYTE PTR [rax+0x13],0x0
0x7d8a19: xor    r9d,r9d
0x7d8a1c: lea    rdx,[rbp-0x38]
0x7d8a20: lea    rcx,[rip+0x1e8dd49]        # 0x142666770
0x7d8a27: call   0x140af0220
0x7d8a2c: nop
0x7d8a2d: jmp    0x1407d7daf
0x7d8a32: xorps  xmm0,xmm0
0x7d8a35: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8a39: mov    ecx,0x30
0x7d8a3e: call   0x140071d90
0x7d8a43: mov    QWORD PTR [rbp-0x38],rax
0x7d8a47: movdqa xmm0,XMMWORD PTR [rip+0xfcdad1]        # 0x1417a6520
0x7d8a4f: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8a54: movups xmm0,XMMWORD PTR [rip+0xeef42d]        # 0x1416c7e88 ; vector='Loading civilize'
0x7d8a5b: movups XMMWORD PTR [rax],xmm0
0x7d8a5e: movups xmm1,XMMWORD PTR [rip+0xeef433]        # 0x1416c7e98 ; vector='d populations...'
0x7d8a65: movups XMMWORD PTR [rax+0x10],xmm1
0x7d8a69: mov    BYTE PTR [rax+0x20],0x0
0x7d8a6d: xor    r9d,r9d
0x7d8a70: lea    rdx,[rbp-0x38]
0x7d8a74: lea    rcx,[rip+0x1e8dcf5]        # 0x142666770
0x7d8a7b: call   0x140af0220
0x7d8a80: nop
0x7d8a81: jmp    0x1407d7daf
0x7d8a86: xorps  xmm0,xmm0
0x7d8a89: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8a8d: mov    ecx,0x20
0x7d8a92: call   0x140071d90
0x7d8a97: mov    QWORD PTR [rbp-0x38],rax
0x7d8a9b: movdqa xmm0,XMMWORD PTR [rip+0xfcd99d]        # 0x1417a6440
0x7d8aa3: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8aa8: movups xmm0,XMMWORD PTR [rip+0xeef479]        # 0x1416c7f28 ; vector='Loading history.'
0x7d8aaf: movups XMMWORD PTR [rax],xmm0
0x7d8ab2: movzx  ecx,WORD PTR [rip+0xeef47f]        # 0x1416c7f38 ; cstring='..'
0x7d8ab9: mov    WORD PTR [rax+0x10],cx
0x7d8abd: mov    BYTE PTR [rax+0x12],0x0
0x7d8ac1: xor    r9d,r9d
0x7d8ac4: lea    rdx,[rbp-0x38]
0x7d8ac8: lea    rcx,[rip+0x1e8dca1]        # 0x142666770
0x7d8acf: call   0x140af0220
0x7d8ad4: nop
0x7d8ad5: jmp    0x1407d7daf
0x7d8ada: xorps  xmm0,xmm0
0x7d8add: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8ae1: mov    ecx,0x20
0x7d8ae6: call   0x140071d90
0x7d8aeb: mov    QWORD PTR [rbp-0x38],rax
0x7d8aef: movdqa xmm0,XMMWORD PTR [rip+0xfcd979]        # 0x1417a6470
0x7d8af7: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8afc: movups xmm0,XMMWORD PTR [rip+0xeef43d]        # 0x1416c7f40 ; vector='Loading paramete'
0x7d8b03: movups XMMWORD PTR [rax],xmm0
0x7d8b06: mov    ecx,DWORD PTR [rip+0xeef444]        # 0x1416c7f50 ; cstring='rs...'
0x7d8b0c: mov    DWORD PTR [rax+0x10],ecx
0x7d8b0f: movzx  ecx,BYTE PTR [rip+0xeef43e]        # 0x1416c7f54 ; cstring='.'
0x7d8b16: mov    BYTE PTR [rax+0x14],cl
0x7d8b19: mov    BYTE PTR [rax+0x15],0x0
0x7d8b1d: xor    r9d,r9d
0x7d8b20: lea    rdx,[rbp-0x38]
0x7d8b24: lea    rcx,[rip+0x1e8dc45]        # 0x142666770
0x7d8b2b: call   0x140af0220
0x7d8b30: nop
0x7d8b31: jmp    0x1407d7daf
0x7d8b36: xorps  xmm0,xmm0
0x7d8b39: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8b3d: mov    ecx,0x20
0x7d8b42: call   0x140071d90
0x7d8b47: mov    QWORD PTR [rbp-0x38],rax
0x7d8b4b: movdqa xmm0,XMMWORD PTR [rip+0xfcd90d]        # 0x1417a6460
0x7d8b53: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8b58: movups xmm0,XMMWORD PTR [rip+0xeef389]        # 0x1416c7ee8 ; vector='Loading artifact'
0x7d8b5f: movups XMMWORD PTR [rax],xmm0
0x7d8b62: mov    ecx,DWORD PTR [rip+0xeef390]        # 0x1416c7ef8 ; cstring='s...'
0x7d8b68: mov    DWORD PTR [rax+0x10],ecx
0x7d8b6b: mov    BYTE PTR [rax+0x14],0x0
0x7d8b6f: xor    r9d,r9d
0x7d8b72: lea    rdx,[rbp-0x38]
0x7d8b76: lea    rcx,[rip+0x1e8dbf3]        # 0x142666770
0x7d8b7d: call   0x140af0220
0x7d8b82: nop
0x7d8b83: jmp    0x1407d7daf
0x7d8b88: xorps  xmm0,xmm0
0x7d8b8b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8b8f: mov    ecx,0x30
0x7d8b94: call   0x140071d90
0x7d8b99: mov    QWORD PTR [rbp-0x38],rax
0x7d8b9d: movdqa xmm0,XMMWORD PTR [rip+0xfcd9bb]        # 0x1417a6560
0x7d8ba5: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8baa: movups xmm0,XMMWORD PTR [rip+0xeef34f]        # 0x1416c7f00 ; vector='Loading active h'
0x7d8bb1: movups XMMWORD PTR [rax],xmm0
0x7d8bb4: movups xmm1,XMMWORD PTR [rip+0xeef355]        # 0x1416c7f10 ; vector='istorical figure'
0x7d8bbb: movups XMMWORD PTR [rax+0x10],xmm1
0x7d8bbf: mov    ecx,DWORD PTR [rip+0xeef35b]        # 0x1416c7f20 ; cstring='s...'
0x7d8bc5: mov    DWORD PTR [rax+0x20],ecx
0x7d8bc8: mov    BYTE PTR [rax+0x24],0x0
0x7d8bcc: xor    r9d,r9d
0x7d8bcf: lea    rdx,[rbp-0x38]
0x7d8bd3: lea    rcx,[rip+0x1e8db96]        # 0x142666770
0x7d8bda: call   0x140af0220
0x7d8bdf: nop
0x7d8be0: jmp    0x1407d7daf
0x7d8be5: xorps  xmm0,xmm0
0x7d8be8: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8bec: mov    ecx,0x20
0x7d8bf1: call   0x140071d90
0x7d8bf6: mov    QWORD PTR [rbp-0x38],rax
0x7d8bfa: movdqa xmm0,XMMWORD PTR [rip+0xfcd82e]        # 0x1417a6430
0x7d8c02: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8c07: movups xmm0,XMMWORD PTR [rip+0xeef37a]        # 0x1416c7f88 ; vector='Loading squads..'
0x7d8c0e: movups XMMWORD PTR [rax],xmm0
0x7d8c11: movzx  ecx,BYTE PTR [rip+0xeef380]        # 0x1416c7f98 ; cstring='.'
0x7d8c18: mov    BYTE PTR [rax+0x10],cl
0x7d8c1b: mov    BYTE PTR [rax+0x11],0x0
0x7d8c1f: xor    r9d,r9d
0x7d8c22: lea    rdx,[rbp-0x38]
0x7d8c26: lea    rcx,[rip+0x1e8db43]        # 0x142666770
0x7d8c2d: call   0x140af0220
0x7d8c32: nop
0x7d8c33: jmp    0x1407d7daf
0x7d8c38: xorps  xmm0,xmm0
0x7d8c3b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8c3f: mov    ecx,0x20
0x7d8c44: call   0x140071d90
0x7d8c49: mov    QWORD PTR [rbp-0x38],rax
0x7d8c4d: movdqa xmm0,XMMWORD PTR [rip+0xfcd81b]        # 0x1417a6470
0x7d8c55: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8c5a: movups xmm0,XMMWORD PTR [rip+0xeef33f]        # 0x1416c7fa0 ; vector='Loading formatio'
0x7d8c61: movups XMMWORD PTR [rax],xmm0
0x7d8c64: mov    ecx,DWORD PTR [rip+0xeef346]        # 0x1416c7fb0 ; cstring='ns...'
0x7d8c6a: mov    DWORD PTR [rax+0x10],ecx
0x7d8c6d: movzx  ecx,BYTE PTR [rip+0xeef340]        # 0x1416c7fb4 ; cstring='.'
0x7d8c74: mov    BYTE PTR [rax+0x14],cl
0x7d8c77: mov    BYTE PTR [rax+0x15],0x0
0x7d8c7b: xor    r9d,r9d
0x7d8c7e: lea    rdx,[rbp-0x38]
0x7d8c82: lea    rcx,[rip+0x1e8dae7]        # 0x142666770
0x7d8c89: call   0x140af0220
0x7d8c8e: nop
0x7d8c8f: jmp    0x1407d7daf
0x7d8c94: xorps  xmm0,xmm0
0x7d8c97: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8c9b: mov    ecx,0x20
0x7d8ca0: call   0x140071d90
0x7d8ca5: mov    QWORD PTR [rbp-0x38],rax
0x7d8ca9: movdqa xmm0,XMMWORD PTR [rip+0xfcd7bf]        # 0x1417a6470
0x7d8cb1: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8cb6: movups xmm0,XMMWORD PTR [rip+0xeef29b]        # 0x1416c7f58 ; vector='Loading activiti'
0x7d8cbd: movups XMMWORD PTR [rax],xmm0
0x7d8cc0: mov    ecx,DWORD PTR [rip+0xeef2a2]        # 0x1416c7f68 ; cstring='es...'
0x7d8cc6: mov    DWORD PTR [rax+0x10],ecx
0x7d8cc9: movzx  ecx,BYTE PTR [rip+0xeef29c]        # 0x1416c7f6c ; cstring='.'
0x7d8cd0: mov    BYTE PTR [rax+0x14],cl
0x7d8cd3: mov    BYTE PTR [rax+0x15],0x0
0x7d8cd7: xor    r9d,r9d
0x7d8cda: lea    rdx,[rbp-0x38]
0x7d8cde: lea    rcx,[rip+0x1e8da8b]        # 0x142666770
0x7d8ce5: call   0x140af0220
0x7d8cea: nop
0x7d8ceb: jmp    0x1407d7daf
0x7d8cf0: xorps  xmm0,xmm0
0x7d8cf3: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8cf7: mov    ecx,0x20
0x7d8cfc: call   0x140071d90
0x7d8d01: mov    rdx,rax
0x7d8d04: mov    QWORD PTR [rbp-0x38],rax
0x7d8d08: movdqa xmm0,XMMWORD PTR [rip+0xfcd780]        # 0x1417a6490
0x7d8d10: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8d15: movups xmm0,XMMWORD PTR [rip+0xeef254]        # 0x1416c7f70 ; vector='Loading interact'
0x7d8d1c: movups XMMWORD PTR [rax],xmm0
0x7d8d1f: mov    ecx,DWORD PTR [rip+0xeef25b]        # 0x1416c7f80 ; cstring='ions...'
0x7d8d25: mov    DWORD PTR [rax+0x10],ecx
0x7d8d28: movzx  ecx,WORD PTR [rip+0xeef255]        # 0x1416c7f84 ; cstring='...'
0x7d8d2f: mov    WORD PTR [rax+0x14],cx
0x7d8d33: movzx  eax,BYTE PTR [rip+0xeef24c]        # 0x1416c7f86 ; cstring='.'
0x7d8d3a: mov    BYTE PTR [rdx+0x16],al
0x7d8d3d: mov    BYTE PTR [rdx+0x17],0x0
0x7d8d41: xor    r9d,r9d
0x7d8d44: lea    rdx,[rbp-0x38]
0x7d8d48: lea    rcx,[rip+0x1e8da21]        # 0x142666770
0x7d8d4f: call   0x140af0220
0x7d8d54: nop
0x7d8d55: jmp    0x1407d7daf
0x7d8d5a: xorps  xmm0,xmm0
0x7d8d5d: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8d61: mov    ecx,0x20
0x7d8d66: call   0x140071d90
0x7d8d6b: mov    QWORD PTR [rbp-0x38],rax
0x7d8d6f: movdqa xmm0,XMMWORD PTR [rip+0xfcd749]        # 0x1417a64c0
0x7d8d77: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8d7c: movups xmm0,XMMWORD PTR [rip+0xeef265]        # 0x1416c7fe8 ; vector='Loading written '
0x7d8d83: movups XMMWORD PTR [rax],xmm0
0x7d8d86: movsd  xmm0,QWORD PTR [rip+0xeef26a]        # 0x1416c7ff8 ; cstring='content...'
0x7d8d8e: movsd  QWORD PTR [rax+0x10],xmm0
0x7d8d93: movzx  ecx,WORD PTR [rip+0xeef266]        # 0x1416c8000 ; cstring='..'
0x7d8d9a: mov    WORD PTR [rax+0x18],cx
0x7d8d9e: mov    BYTE PTR [rax+0x1a],0x0
0x7d8da2: xor    r9d,r9d
0x7d8da5: lea    rdx,[rbp-0x38]
0x7d8da9: lea    rcx,[rip+0x1e8d9c0]        # 0x142666770
0x7d8db0: call   0x140af0220
0x7d8db5: nop
0x7d8db6: jmp    0x1407d7daf
0x7d8dbb: xorps  xmm0,xmm0
0x7d8dbe: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8dc2: mov    ecx,0x20
0x7d8dc7: call   0x140071d90
0x7d8dcc: mov    QWORD PTR [rbp-0x38],rax
0x7d8dd0: movdqa xmm0,XMMWORD PTR [rip+0xfcd698]        # 0x1417a6470
0x7d8dd8: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8ddd: movups xmm0,XMMWORD PTR [rip+0xeef224]        # 0x1416c8008 ; vector='Loading identiti'
0x7d8de4: movups XMMWORD PTR [rax],xmm0
0x7d8de7: mov    ecx,DWORD PTR [rip+0xeef22b]        # 0x1416c8018 ; cstring='es...'
0x7d8ded: mov    DWORD PTR [rax+0x10],ecx
0x7d8df0: movzx  ecx,BYTE PTR [rip+0xeef225]        # 0x1416c801c ; cstring='.'
0x7d8df7: mov    BYTE PTR [rax+0x14],cl
0x7d8dfa: mov    BYTE PTR [rax+0x15],0x0
0x7d8dfe: xor    r9d,r9d
0x7d8e01: lea    rdx,[rbp-0x38]
0x7d8e05: lea    rcx,[rip+0x1e8d964]        # 0x142666770
0x7d8e0c: call   0x140af0220
0x7d8e11: nop
0x7d8e12: jmp    0x1407d7daf
0x7d8e17: xorps  xmm0,xmm0
0x7d8e1a: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8e1e: mov    ecx,0x20
0x7d8e23: call   0x140071d90
0x7d8e28: mov    QWORD PTR [rbp-0x38],rax
0x7d8e2c: movdqa xmm0,XMMWORD PTR [rip+0xfcd62c]        # 0x1417a6460
0x7d8e34: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8e39: movups xmm0,XMMWORD PTR [rip+0xeef178]        # 0x1416c7fb8 ; vector='Loading incident'
0x7d8e40: movups XMMWORD PTR [rax],xmm0
0x7d8e43: mov    ecx,DWORD PTR [rip+0xeef17f]        # 0x1416c7fc8 ; cstring='s...'
0x7d8e49: mov    DWORD PTR [rax+0x10],ecx
0x7d8e4c: mov    BYTE PTR [rax+0x14],0x0
0x7d8e50: xor    r9d,r9d
0x7d8e53: lea    rdx,[rbp-0x38]
0x7d8e57: lea    rcx,[rip+0x1e8d912]        # 0x142666770
0x7d8e5e: call   0x140af0220
0x7d8e63: nop
0x7d8e64: jmp    0x1407d7daf
0x7d8e69: xorps  xmm0,xmm0
0x7d8e6c: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8e70: mov    ecx,0x20
0x7d8e75: call   0x140071d90
0x7d8e7a: mov    QWORD PTR [rbp-0x38],rax
0x7d8e7e: movdqa xmm0,XMMWORD PTR [rip+0xfcd5aa]        # 0x1417a6430
0x7d8e86: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8e8b: movups xmm0,XMMWORD PTR [rip+0xeef13e]        # 0x1416c7fd0 ; vector='Loading crimes..'
0x7d8e92: movups XMMWORD PTR [rax],xmm0
0x7d8e95: movzx  ecx,BYTE PTR [rip+0xeef144]        # 0x1416c7fe0 ; cstring='.'
0x7d8e9c: mov    BYTE PTR [rax+0x10],cl
0x7d8e9f: mov    BYTE PTR [rax+0x11],0x0
0x7d8ea3: xor    r9d,r9d
0x7d8ea6: lea    rdx,[rbp-0x38]
0x7d8eaa: lea    rcx,[rip+0x1e8d8bf]        # 0x142666770
0x7d8eb1: call   0x140af0220
0x7d8eb6: nop
0x7d8eb7: lea    rcx,[rbp-0x38]
0x7d8ebb: call   0x140070e10
0x7d8ec0: jmp    0x1407d7dea
0x7d8ec5: lea    rdx,[rip+0xeefa5c]        # 0x1416c8928 ; cstring='Loading vehicles...'
0x7d8ecc: lea    rcx,[rbp-0x38]
0x7d8ed0: call   0x140069710
0x7d8ed5: nop
0x7d8ed6: xor    r9d,r9d
0x7d8ed9: lea    rdx,[rbp-0x38]
0x7d8edd: lea    rcx,[rip+0x1e8d88c]        # 0x142666770
0x7d8ee4: call   0x140af0220
0x7d8ee9: nop
0x7d8eea: lea    rcx,[rbp-0x38]
0x7d8eee: call   0x140070e10
0x7d8ef3: jmp    0x1407d7dea
0x7d8ef8: xorps  xmm0,xmm0
0x7d8efb: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d8eff: mov    ecx,0x20
0x7d8f04: call   0x140071d90
0x7d8f09: mov    QWORD PTR [rbp-0x38],rax
0x7d8f0d: movdqa xmm0,XMMWORD PTR [rip+0xfcd51b]        # 0x1417a6430
0x7d8f15: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d8f1a: movups xmm0,XMMWORD PTR [rip+0xeefa1f]        # 0x1416c8940 ; vector='Loading armies..'
0x7d8f21: movups XMMWORD PTR [rax],xmm0
0x7d8f24: movzx  ecx,BYTE PTR [rip+0xeefa25]        # 0x1416c8950 ; cstring='.'
0x7d8f2b: mov    BYTE PTR [rax+0x10],cl
0x7d8f2e: mov    BYTE PTR [rax+0x11],0x0
0x7d8f32: xor    r9d,r9d
0x7d8f35: lea    rdx,[rbp-0x38]
0x7d8f39: lea    rcx,[rip+0x1e8d830]        # 0x142666770
0x7d8f40: call   0x140af0220
0x7d8f45: nop
0x7d8f46: lea    rcx,[rbp-0x38]
0x7d8f4a: call   0x140070e10
0x7d8f4f: jmp    0x1407d7dea
0x7d8f54: lea    rdx,[rip+0xeef98d]        # 0x1416c88e8 ; cstring='Loading army controllers...'
0x7d8f5b: lea    rcx,[rbp-0x38]
0x7d8f5f: call   0x140069710
0x7d8f64: nop
0x7d8f65: xor    r9d,r9d
0x7d8f68: lea    rdx,[rbp-0x38]
0x7d8f6c: lea    rcx,[rip+0x1e8d7fd]        # 0x142666770
0x7d8f73: call   0x140af0220
0x7d8f78: nop
0x7d8f79: lea    rcx,[rbp-0x38]
0x7d8f7d: call   0x140070e10
0x7d8f82: jmp    0x1407d7dea
0x7d8f87: lea    rdx,[rip+0xeef97a]        # 0x1416c8908 ; cstring='Loading tracking information...'
0x7d8f8e: lea    rcx,[rbp-0x38]
0x7d8f92: call   0x140069710
0x7d8f97: nop
0x7d8f98: xor    r9d,r9d
0x7d8f9b: lea    rdx,[rbp-0x38]
0x7d8f9f: lea    rcx,[rip+0x1e8d7ca]        # 0x142666770
0x7d8fa6: call   0x140af0220
0x7d8fab: nop
0x7d8fac: lea    rcx,[rbp-0x38]
0x7d8fb0: call   0x140070e10
0x7d8fb5: jmp    0x1407d7dea
0x7d8fba: lea    rdx,[rip+0xeef9c7]        # 0x1416c8988 ; cstring='Loading cultural identities...'
0x7d8fc1: lea    rcx,[rbp-0x38]
0x7d8fc5: call   0x140069710
0x7d8fca: nop
0x7d8fcb: xor    r9d,r9d
0x7d8fce: lea    rdx,[rbp-0x38]
0x7d8fd2: lea    rcx,[rip+0x1e8d797]        # 0x142666770
0x7d8fd9: call   0x140af0220
0x7d8fde: nop
0x7d8fdf: lea    rcx,[rbp-0x38]
0x7d8fe3: call   0x140070e10
0x7d8fe8: jmp    0x1407d7dea
0x7d8fed: lea    rdx,[rip+0xeef9b4]        # 0x1416c89a8 ; cstring='Loading agreements...'
0x7d8ff4: lea    rcx,[rbp-0x38]
0x7d8ff8: call   0x140069710
0x7d8ffd: nop
0x7d8ffe: xor    r9d,r9d
0x7d9001: lea    rdx,[rbp-0x38]
0x7d9005: lea    rcx,[rip+0x1e8d764]        # 0x142666770
0x7d900c: call   0x140af0220
0x7d9011: nop
0x7d9012: lea    rcx,[rbp-0x38]
0x7d9016: call   0x140070e10
0x7d901b: jmp    0x1407d7dea
0x7d9020: lea    rdx,[rip+0xeef931]        # 0x1416c8958 ; cstring='Loading art forms...'
0x7d9027: lea    rcx,[rbp-0x38]
0x7d902b: call   0x140069710
0x7d9030: nop
0x7d9031: xor    r9d,r9d
0x7d9034: lea    rdx,[rbp-0x38]
0x7d9038: lea    rcx,[rip+0x1e8d731]        # 0x142666770
0x7d903f: call   0x140af0220
0x7d9044: nop
0x7d9045: lea    rcx,[rbp-0x38]
0x7d9049: call   0x140070e10
0x7d904e: jmp    0x1407d7dea
0x7d9053: lea    rdx,[rip+0xeef916]        # 0x1416c8970 ; cstring='Loading occupations...'
0x7d905a: lea    rcx,[rbp-0x38]
0x7d905e: call   0x140069710
0x7d9063: nop
0x7d9064: xor    r9d,r9d
0x7d9067: lea    rdx,[rbp-0x38]
0x7d906b: lea    rcx,[rip+0x1e8d6fe]        # 0x142666770
0x7d9072: call   0x140af0220
0x7d9077: nop
0x7d9078: lea    rcx,[rbp-0x38]
0x7d907c: call   0x140070e10
0x7d9081: jmp    0x1407d7dea
0x7d9086: lea    rdx,[rip+0xeef97b]        # 0x1416c8a08 ; cstring='Loading belief systems...'
0x7d908d: lea    rcx,[rbp-0x38]
0x7d9091: call   0x140069710
0x7d9096: nop
0x7d9097: xor    r9d,r9d
0x7d909a: lea    rdx,[rbp-0x38]
0x7d909e: lea    rcx,[rip+0x1e8d6cb]        # 0x142666770
0x7d90a5: call   0x140af0220
0x7d90aa: nop
0x7d90ab: lea    rcx,[rbp-0x38]
0x7d90af: call   0x140070e10
0x7d90b4: jmp    0x1407d7dea
0x7d90b9: lea    rdx,[rip+0xeef968]        # 0x1416c8a28 ; cstring='Loading image sets...'
0x7d90c0: lea    rcx,[rbp-0x38]
0x7d90c4: call   0x140069710
0x7d90c9: nop
0x7d90ca: xor    r9d,r9d
0x7d90cd: lea    rdx,[rbp-0x38]
0x7d90d1: lea    rcx,[rip+0x1e8d698]        # 0x142666770
0x7d90d8: call   0x140af0220
0x7d90dd: nop
0x7d90de: lea    rcx,[rbp-0x38]
0x7d90e2: call   0x140070e10
0x7d90e7: jmp    0x1407d7dea
0x7d90ec: lea    rdx,[rip+0xeef8cd]        # 0x1416c89c0 ; cstring='Loading divination sets...'
0x7d90f3: lea    rcx,[rbp-0x38]
0x7d90f7: call   0x140069710
0x7d90fc: nop
0x7d90fd: xor    r9d,r9d
0x7d9100: lea    rdx,[rbp-0x38]
0x7d9104: lea    rcx,[rip+0x1e8d665]        # 0x142666770
0x7d910b: call   0x140af0220
0x7d9110: nop
0x7d9111: lea    rcx,[rbp-0x38]
0x7d9115: call   0x140070e10
0x7d911a: jmp    0x1407d7dea
0x7d911f: xorps  xmm0,xmm0
0x7d9122: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d9126: movdqa xmm1,XMMWORD PTR [rip+0xfcd2e2]        # 0x1417a6410
0x7d912e: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7d9133: movsd  xmm0,QWORD PTR [rip+0xe428d5]        # 0x14161ba10 ; cstring='Closing file...'
0x7d913b: movsd  QWORD PTR [rbp-0x38],xmm0
0x7d9140: mov    eax,DWORD PTR [rip+0xe428d2]        # 0x14161ba18 ; cstring='file...'
0x7d9146: mov    DWORD PTR [rbp-0x30],eax
0x7d9149: movzx  eax,WORD PTR [rip+0xe428cc]        # 0x14161ba1c ; cstring='...'
0x7d9150: mov    WORD PTR [rbp-0x2c],ax
0x7d9154: movzx  eax,BYTE PTR [rip+0xe428c3]        # 0x14161ba1e ; cstring='.'
0x7d915b: mov    BYTE PTR [rbp-0x2a],al
0x7d915e: mov    BYTE PTR [rbp-0x29],0x0
0x7d9162: xor    r9d,r9d
0x7d9165: lea    rdx,[rbp-0x38]
0x7d9169: lea    rcx,[rip+0x1e8d600]        # 0x142666770
0x7d9170: call   0x140af0220
0x7d9175: nop
0x7d9176: jmp    0x1407d7daf
0x7d917b: xorps  xmm0,xmm0
0x7d917e: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d9182: mov    ecx,0x30
0x7d9187: call   0x140071d90
0x7d918c: mov    rdx,rax
0x7d918f: mov    QWORD PTR [rbp-0x38],rax
0x7d9193: movdqa xmm0,XMMWORD PTR [rip+0xfcd3b5]        # 0x1417a6550
0x7d919b: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d91a0: movups xmm0,XMMWORD PTR [rip+0xeef839]        # 0x1416c89e0 ; vector='Rebuilding tempo'
0x7d91a7: movups XMMWORD PTR [rax],xmm0
0x7d91aa: movups xmm1,XMMWORD PTR [rip+0xeef83f]        # 0x1416c89f0 ; vector='rary information'
0x7d91b1: movups XMMWORD PTR [rax+0x10],xmm1
0x7d91b5: movzx  ecx,WORD PTR [rip+0xeef844]        # 0x1416c8a00 ; cstring='...'
0x7d91bc: mov    WORD PTR [rax+0x20],cx
0x7d91c0: movzx  eax,BYTE PTR [rip+0xeef83b]        # 0x1416c8a02 ; cstring='.'
0x7d91c7: mov    BYTE PTR [rdx+0x22],al
0x7d91ca: mov    BYTE PTR [rdx+0x23],0x0
0x7d91ce: xor    r9d,r9d
0x7d91d1: lea    rdx,[rbp-0x38]
0x7d91d5: lea    rcx,[rip+0x1e8d594]        # 0x142666770
0x7d91dc: call   0x140af0220
0x7d91e1: nop
0x7d91e2: jmp    0x1407d7daf
0x7d91e7: xorps  xmm0,xmm0
0x7d91ea: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d91ee: mov    ecx,0x20
0x7d91f3: call   0x140071d90
0x7d91f8: mov    QWORD PTR [rbp-0x38],rax
0x7d91fc: movdqa xmm0,XMMWORD PTR [rip+0xfcd22c]        # 0x1417a6430
0x7d9204: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d9209: movups xmm0,XMMWORD PTR [rip+0xeef878]        # 0x1416c8a88 ; vector='Preparing game..'
0x7d9210: movups XMMWORD PTR [rax],xmm0
0x7d9213: movzx  ecx,BYTE PTR [rip+0xeef87e]        # 0x1416c8a98 ; cstring='.'
0x7d921a: mov    BYTE PTR [rax+0x10],cl
0x7d921d: mov    BYTE PTR [rax+0x11],0x0
0x7d9221: xor    r9d,r9d
0x7d9224: lea    rdx,[rbp-0x38]
0x7d9228: lea    rcx,[rip+0x1e8d541]        # 0x142666770
0x7d922f: call   0x140af0220
0x7d9234: nop
0x7d9235: jmp    0x1407d7daf
0x7d923a: xorps  xmm0,xmm0
0x7d923d: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d9241: movdqa xmm1,XMMWORD PTR [rip+0xfcd147]        # 0x1417a6390
0x7d9249: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7d924e: mov    rax,QWORD PTR [rip+0xeef84b]        # 0x1416c8aa0 ; cstring='Failed!'
0x7d9255: mov    DWORD PTR [rbp-0x38],eax
0x7d9258: movzx  eax,WORD PTR [rip+0xeef845]        # 0x1416c8aa4 ; cstring='ed!'
0x7d925f: mov    WORD PTR [rbp-0x34],ax
0x7d9263: movzx  eax,BYTE PTR [rip+0xeef83c]        # 0x1416c8aa6 ; cstring='!'
0x7d926a: mov    BYTE PTR [rbp-0x32],al
0x7d926d: mov    BYTE PTR [rbp-0x31],0x0
0x7d9271: xor    r9d,r9d
0x7d9274: lea    rdx,[rbp-0x38]
0x7d9278: lea    rcx,[rip+0x1e8d4f1]        # 0x142666770
0x7d927f: call   0x140af0220
0x7d9284: nop
0x7d9285: mov    rdx,QWORD PTR [rbp-0x20]
0x7d9289: cmp    rdx,0xf
0x7d928d: jbe    0x1407d7dea
0x7d9293: inc    rdx
0x7d9296: mov    rcx,QWORD PTR [rbp-0x38]
0x7d929a: mov    rax,rcx
0x7d929d: cmp    rdx,0x1000
0x7d92a4: jb     0x1407d7de5
0x7d92aa: add    rdx,0x27
0x7d92ae: mov    rcx,QWORD PTR [rcx-0x8]
0x7d92b2: sub    rax,rcx
0x7d92b5: add    rax,0xfffffffffffffff8
0x7d92b9: cmp    rax,0x1f
0x7d92bd: jbe    0x1407d7de5
0x7d92c3: call   QWORD PTR [rip+0xe227ff]        # 0x1415fbac8
0x7d92c9: int3
0x7d92ca: xchg   ax,ax
