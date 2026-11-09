14006bae0: movzx  eax,cx
14006bae3: cmp    eax,0x12f
14006bae8: ja     0x14006bb13
14006baea: je     0x14006bb64
14006baec: sub    eax,0x2b
14006baef: cmp    eax,0xbe
14006baf4: ja     0x14006bb67
14006baf6: lea    rdx,[rip+0xfffffffffff94503]        # 0x140000000
14006bafd: cdqe
14006baff: movzx  eax,BYTE PTR [rdx+rax*1+0x6bb74]
14006bb07: mov    ecx,DWORD PTR [rdx+rax*4+0x6bb6c]
14006bb0e: add    rcx,rdx
14006bb11: jmp    rcx
14006bb13: cmp    eax,0x25d
14006bb18: ja     0x14006bb45
14006bb1a: je     0x14006bb64
14006bb1c: sub    eax,0x130
14006bb21: cmp    eax,0xe1
14006bb26: ja     0x14006bb67
14006bb28: lea    rdx,[rip+0xfffffffffff944d1]        # 0x140000000
14006bb2f: cdqe
14006bb31: movzx  eax,BYTE PTR [rdx+rax*1+0x6bc3c]
14006bb39: mov    ecx,DWORD PTR [rdx+rax*4+0x6bc34]
14006bb40: add    rcx,rdx
14006bb43: jmp    rcx
14006bb45: sub    eax,0x25e
14006bb4a: cmp    eax,0xd
14006bb4d: ja     0x14006bb67
14006bb4f: cdqe
14006bb51: lea    rdx,[rip+0xfffffffffff944a8]        # 0x140000000
14006bb58: mov    eax,DWORD PTR [rdx+rax*4+0x6bd20]
14006bb5f: add    rax,rdx
14006bb62: jmp    rax
14006bb64: mov    al,0x1
14006bb66: ret
14006bb67: xor    al,al
14006bb69: ret
