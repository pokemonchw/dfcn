140102db0: mov    eax,DWORD PTR [rcx+0x2c]
140102db3: lea    r9,[rcx+0x30]
140102db7: cmp    edx,eax
140102db9: jne    0x140102dc6
140102dbb: cmp    r8d,DWORD PTR [r9]
140102dbe: jne    0x140102dc6
140102dc0: mov    eax,0x3
140102dc5: ret
140102dc6: movzx  ecx,WORD PTR [rcx+0x28]
140102dca: cmp    cx,0x9
140102dce: jne    0x140102de0
140102dd0: cmp    r8d,eax
140102dd3: jne    0x140102df9
140102dd5: cmp    edx,DWORD PTR [r9]
140102dd8: jne    0x140102df9
140102dda: mov    eax,0x5
140102ddf: ret
140102de0: cmp    cx,0xa
140102de4: jne    0x140102df9
140102de6: cmp    r8d,eax
140102de9: jne    0x140102df9
140102deb: xor    eax,eax
140102ded: mov    ecx,0x5
140102df2: cmp    edx,DWORD PTR [r9]
140102df5: cmove  eax,ecx
140102df8: ret
140102df9: xor    eax,eax
140102dfb: ret