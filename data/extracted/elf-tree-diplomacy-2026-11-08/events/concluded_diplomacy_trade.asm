140a6ab80: mov    r9d,DWORD PTR [rcx+0x28]
140a6ab84: cmp    edx,r9d
140a6ab87: jne    0x140a6ab8f
140a6ab89: cmp    r8d,DWORD PTR [rcx+0x2c]
140a6ab8d: je     0x140a6ab99
140a6ab8f: cmp    edx,DWORD PTR [rcx+0x2c]
140a6ab92: jne    0x140a6abdd
140a6ab94: cmp    r8d,r9d
140a6ab97: jne    0x140a6abdd
140a6ab99: mov    eax,DWORD PTR [rcx+0x38]
140a6ab9c: add    eax,0x3
140a6ab9f: cmp    eax,0x5
140a6aba2: ja     0x140a6abdd
140a6aba4: lea    rdx,[rip+0xffffffffff595455]        # 0x140000000
140a6abab: cdqe
140a6abad: mov    ecx,DWORD PTR [rdx+rax*4+0xa6abe0]
140a6abb4: add    rcx,rdx
140a6abb7: jmp    rcx
140a6abb9: mov    eax,0x5
140a6abbe: ret
140a6abbf: mov    eax,0x3
140a6abc4: ret
140a6abc5: mov    eax,0x1
140a6abca: ret
140a6abcb: mov    eax,0xffffffff
140a6abd0: ret
140a6abd1: mov    eax,0xfffffffd
140a6abd6: ret
140a6abd7: mov    eax,0xfffffffb
140a6abdc: ret
140a6abdd: xor    eax,eax
140a6abdf: ret
140a6abe0: xlat   BYTE PTR [rbx]
140a6abe1: stos   DWORD PTR [rdi],eax
140a6abe2: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6abe3: add    cl,dl
140a6abe5: stos   DWORD PTR [rdi],eax
140a6abe6: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6abe7: add    bl,cl
140a6abe9: stos   DWORD PTR [rdi],eax
140a6abea: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6abeb: add    ch,al
140a6abed: stos   DWORD PTR [rdi],eax
140a6abee: cmps   BYTE PTR [rsi],BYTE PTR [rdi]
140a6abef: add    BYTE PTR [rdi-0x46ff5955],bh
140a6abf5: stos   DWORD PTR [rdi],eax
140a6abf6: cmps   BYTE PTR [rsi],BYTE PTR [rdi]