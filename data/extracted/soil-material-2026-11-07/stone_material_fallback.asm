14142b930: mov    QWORD PTR [rsp+0x10],rbx
14142b935: mov    QWORD PTR [rsp+0x18],rsi
14142b93a: push   rdi
14142b93b: sub    rsp,0x40
14142b93f: mov    WORD PTR [rsp+0x28],r9w
14142b945: mov    rbx,rcx
14142b948: mov    WORD PTR [rsp+0x20],r8w
14142b94e: movzx  r9d,dx
14142b952: lea    r8,[rsp+0x50]
14142b957: lea    rdx,[rsp+0x30]
14142b95c: call   0x1400838a0
14142b961: movsx  r8d,WORD PTR [rsp+0x50]
14142b967: movsx  edx,WORD PTR [rsp+0x30]
14142b96c: mov    rcx,QWORD PTR [rbx+0x11a638]
14142b973: call   0x14014b930
14142b978: xor    esi,esi
14142b97a: test   rax,rax
14142b97d: je     0x14142b9ef
14142b97f: mov    rdi,QWORD PTR [rax+0x8]
14142b983: mov    edx,esi
14142b985: mov    r11,QWORD PTR [rax+0x10]
14142b989: sub    r11,rdi
14142b98c: sar    r11,0x3
14142b990: test   r11,r11
14142b993: je     0x14142b9ef
14142b995: mov    r8,rdi
14142b998: nop    DWORD PTR [rax+rax*1+0x0]
14142b9a0: mov    rax,QWORD PTR [r8]
14142b9a3: movsxd rcx,DWORD PTR [rax+0x4]
14142b9a7: test   ecx,ecx
14142b9a9: js     0x14142ba52
14142b9af: mov    r9,QWORD PTR [rbx+0x11b3a8]
14142b9b6: mov    rax,QWORD PTR [rbx+0x11b3b0]
14142b9bd: sub    rax,r9
14142b9c0: sar    rax,0x3
14142b9c4: cmp    rcx,rax
14142b9c7: jae    0x14142ba52
14142b9cd: mov    rax,QWORD PTR [r9+rcx*8]
14142b9d1: cmp    DWORD PTR [rax+0x40],0x1
14142b9d5: jle    0x14142ba52
14142b9d7: mov    rcx,QWORD PTR [rax+0x38]
14142b9db: test   BYTE PTR [rcx+0x1],0x8
14142b9df: je     0x14142ba52
14142b9e1: inc    edx
14142b9e3: add    r8,0x8
14142b9e7: movsxd rax,edx
14142b9ea: cmp    rax,r11
14142b9ed: jb     0x14142b9a0
14142b9ef: mov    rdi,QWORD PTR [rbx+0x11b3b0]
14142b9f6: sub    rdi,QWORD PTR [rbx+0x11b3a8]
14142b9fd: sar    rdi,0x3
14142ba01: cmp    edi,0x1
14142ba04: jbe    0x14142ba40
14142ba06: call   0x140e5e1e0
14142ba0b: mov    r8d,eax
14142ba0e: mov    eax,0x3
14142ba13: mul    r8d
14142ba16: mov    ecx,r8d
14142ba19: mov    eax,0x7fffffff
14142ba1e: sub    ecx,edx
14142ba20: shr    ecx,1
14142ba22: add    ecx,edx
14142ba24: xor    edx,edx
14142ba26: div    edi
14142ba28: shr    ecx,0x1e
14142ba2b: xor    edx,edx
14142ba2d: imul   ecx,ecx,0x7fffffff
14142ba33: sub    r8d,ecx
14142ba36: lea    ecx,[rax+0x1]
14142ba39: mov    eax,r8d
14142ba3c: div    ecx
14142ba3e: mov    esi,eax
14142ba40: mov    eax,esi
14142ba42: mov    rbx,QWORD PTR [rsp+0x58]
14142ba47: mov    rsi,QWORD PTR [rsp+0x60]
14142ba4c: add    rsp,0x40
14142ba50: pop    rdi
14142ba51: ret
14142ba52: mov    rbx,QWORD PTR [rsp+0x58]
14142ba57: mov    rsi,QWORD PTR [rsp+0x60]
14142ba5c: movsxd rax,edx
14142ba5f: mov    rax,QWORD PTR [rdi+rax*8]
14142ba63: mov    eax,DWORD PTR [rax+0x4]
14142ba66: add    rsp,0x40
14142ba6a: pop    rdi
14142ba6b: ret
