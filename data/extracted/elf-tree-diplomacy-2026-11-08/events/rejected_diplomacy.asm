140102d60: mov    eax,DWORD PTR [rcx+0x2c]
140102d63: lea    r9,[rcx+0x30]
140102d67: cmp    edx,eax
140102d69: jne    0x140102d76
140102d6b: cmp    r8d,DWORD PTR [r9]
140102d6e: jne    0x140102d76
140102d70: mov    eax,0xfffffffd
140102d75: ret
140102d76: movzx  ecx,WORD PTR [rcx+0x28]
140102d7a: cmp    cx,0x9
140102d7e: jne    0x140102d90
140102d80: cmp    r8d,eax
140102d83: jne    0x140102da9
140102d85: cmp    edx,DWORD PTR [r9]
140102d88: jne    0x140102da9
140102d8a: mov    eax,0xfffffffb
140102d8f: ret
140102d90: cmp    cx,0xa
140102d94: jne    0x140102da9
140102d96: cmp    r8d,eax
140102d99: jne    0x140102da9
140102d9b: xor    eax,eax
140102d9d: mov    ecx,0xfffffffb
140102da2: cmp    edx,DWORD PTR [r9]
140102da5: cmove  eax,ecx
140102da8: ret
140102da9: xor    eax,eax
140102dab: ret