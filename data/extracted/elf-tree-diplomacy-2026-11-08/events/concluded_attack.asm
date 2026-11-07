140a6ac00: mov    r9d,DWORD PTR [rcx+0x28]
140a6ac04: cmp    edx,r9d
140a6ac07: jne    0x140a6ac0f
140a6ac09: cmp    r8d,DWORD PTR [rcx+0x2c]
140a6ac0d: je     0x140a6ac19
140a6ac0f: cmp    edx,DWORD PTR [rcx+0x2c]
140a6ac12: jne    0x140a6ac5d
140a6ac14: cmp    r8d,r9d
140a6ac17: jne    0x140a6ac5d
140a6ac19: mov    eax,DWORD PTR [rcx+0x38]
140a6ac1c: add    eax,0x3
140a6ac1f: cmp    eax,0x5
140a6ac22: ja     0x140a6ac5d
140a6ac24: lea    rdx,[rip+0xffffffffff5953d5]        # 0x140000000
140a6ac2b: cdqe
140a6ac2d: mov    ecx,DWORD PTR [rdx+rax*4+0xa6ac60]
140a6ac34: add    rcx,rdx
140a6ac37: jmp    rcx
140a6ac39: mov    eax,0xfffffffb
140a6ac3e: ret
140a6ac3f: mov    eax,0xfffffffd
140a6ac44: ret
140a6ac45: mov    eax,0xffffffff
140a6ac4a: ret
140a6ac4b: mov    eax,0x1
140a6ac50: ret
140a6ac51: mov    eax,0x3
140a6ac56: ret
140a6ac57: mov    eax,0x5
140a6ac5c: ret
140a6ac5d: xor    eax,eax
140a6ac5f: ret
140a6ac60: push   rdi
140a6ac61: lods   al,BYTE PTR [rsi]
140a6ac62: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6ac63: add    BYTE PTR [rcx-0x54],dl
140a6ac66: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6ac67: add    BYTE PTR [rbx-0x54],cl
140a6ac6a: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6ac6b: add    BYTE PTR [rbp-0x54],al
140a6ac6e: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6ac6f: add    BYTE PTR [rdi],bh
140a6ac71: lods   al,BYTE PTR [rsi]
140a6ac72: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6ac73: add    BYTE PTR [rcx],bh
140a6ac75: lods   al,BYTE PTR [rsi]
140a6ac76: cmps   BYTE PTR [rsi],BYTE PTR [rdi]