140102e00: movzx  r10d,WORD PTR [rcx+0x28]
140102e05: cmp    r10w,0x10
140102e0a: jne    0x140102e1d
140102e0c: cmp    edx,DWORD PTR [rcx+0x30]
140102e0f: jne    0x140102e58
140102e11: cmp    r8d,DWORD PTR [rcx+0x2c]
140102e15: jne    0x140102e58
140102e17: mov    eax,0xffffffec
140102e1c: ret
140102e1d: mov    eax,DWORD PTR [rcx+0x2c]
140102e20: cmp    edx,eax
140102e22: jne    0x140102e2a
140102e24: cmp    r8d,DWORD PTR [rcx+0x30]
140102e28: je     0x140102e3b
140102e2a: cmp    r10w,0x9
140102e2f: jne    0x140102e41
140102e31: cmp    r8d,eax
140102e34: jne    0x140102e58
140102e36: cmp    edx,DWORD PTR [rcx+0x30]
140102e39: jne    0x140102e58
140102e3b: mov    eax,0xffffffff
140102e40: ret
140102e41: cmp    r10w,0xa
140102e46: jne    0x140102e58
140102e48: cmp    r8d,eax
140102e4b: jne    0x140102e58
140102e4d: xor    eax,eax
140102e4f: cmp    edx,DWORD PTR [rcx+0x30]
140102e52: setne  al
140102e55: dec    eax
140102e57: ret
140102e58: xor    eax,eax
140102e5a: ret