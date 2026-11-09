140c6c8e0: mov    QWORD PTR [rsp+0x10],rbx
140c6c8e5: push   rdi
140c6c8e6: sub    rsp,0x20
140c6c8ea: mov    rdi,rcx
140c6c8ed: call   0x140c67cc0
140c6c8f2: mov    r9,QWORD PTR [rip+0x17793ff]        # 0x1423e5cf8
140c6c8f9: mov    rbx,QWORD PTR [rip+0x17793f0]        # 0x1423e5cf0
140c6c900: mov    rdx,r9
140c6c903: sub    rdx,rbx
140c6c906: mov    QWORD PTR [rsp+0x30],rdi
140c6c90b: sar    rdx,0x3
140c6c90f: test   rdx,rdx
140c6c912: jle    0x140c6c94f
140c6c914: mov    r11d,DWORD PTR [rdi+0x1c]
140c6c918: nop    DWORD PTR [rax+rax*1+0x0]
140c6c920: mov    rcx,rdx
140c6c923: shr    rcx,1
140c6c926: mov    rax,QWORD PTR [rbx+rcx*8]
140c6c92a: lea    r8,[rbx+rcx*8]
140c6c92e: cmp    DWORD PTR [rax+0x1c],r11d
140c6c932: jge    0x140c6c947
140c6c934: mov    rax,0xffffffffffffffff
140c6c93b: lea    rbx,[r8+0x8]
140c6c93f: sub    rax,rcx
140c6c942: add    rdx,rax
140c6c945: jmp    0x140c6c94a
140c6c947: mov    rdx,rcx
140c6c94a: test   rdx,rdx
140c6c94d: jg     0x140c6c920
140c6c94f: cmp    rbx,r9
140c6c952: je     0x140c6c95f
140c6c954: mov    rcx,QWORD PTR [rbx]
140c6c957: mov    eax,DWORD PTR [rdi+0x1c]
140c6c95a: cmp    DWORD PTR [rcx+0x1c],eax
140c6c95d: je     0x140c6c9b7
140c6c95f: cmp    r9,QWORD PTR [rip+0x177939a]        # 0x1423e5d00
140c6c966: je     0x140c6c9a3
140c6c968: cmp    rbx,r9
140c6c96b: jne    0x140c6c97a
140c6c96d: mov    QWORD PTR [r9],rdi
140c6c970: add    QWORD PTR [rip+0x1779380],0x8        # 0x1423e5cf8
140c6c978: jmp    0x140c6c9b7
140c6c97a: mov    rax,QWORD PTR [r9-0x8]
140c6c97e: lea    r8,[r9-0x8]
140c6c982: mov    QWORD PTR [r9],rax
140c6c985: sub    r8,rbx
140c6c988: add    QWORD PTR [rip+0x1779368],0x8        # 0x1423e5cf8
140c6c990: sub    r9,r8
140c6c993: mov    rcx,r9
140c6c996: mov    rdx,rbx
140c6c999: call   0x14153ae1a
140c6c99e: mov    QWORD PTR [rbx],rdi
140c6c9a1: jmp    0x140c6c9b7
140c6c9a3: lea    r8,[rsp+0x30]
140c6c9a8: mov    rdx,rbx
140c6c9ab: lea    rcx,[rip+0x177933e]        # 0x1423e5cf0
140c6c9b2: call   0x140070bd0
140c6c9b7: lea    rdx,[rip+0x1778dc2]        # 0x1423e5780
140c6c9be: mov    rcx,rdi
140c6c9c1: call   0x14013ce00
140c6c9c6: mov    rax,QWORD PTR [rdi]
140c6c9c9: mov    rcx,rdi
140c6c9cc: call   QWORD PTR [rax+0x18]
140c6c9cf: mov    rdx,QWORD PTR [rdi]
140c6c9d2: mov    rcx,rdi
140c6c9d5: mov    ebx,eax
140c6c9d7: call   QWORD PTR [rdx+0x10]
140c6c9da: mov    r8d,ebx
140c6c9dd: lea    rcx,[rip+0x1764b0c]        # 0x1423d14f0
140c6c9e4: movzx  edx,ax
140c6c9e7: call   0x1414add70
140c6c9ec: test   rax,rax
140c6c9ef: je     0x140c6ca29
140c6c9f1: cmp    DWORD PTR [rax+0x298],0x0
140c6c9f8: jle    0x140c6ca0a
140c6c9fa: mov    rax,QWORD PTR [rax+0x290]
140c6ca01: test   BYTE PTR [rax],0x10
140c6ca04: je     0x140c6ca0a
140c6ca06: mov    al,0x1
140c6ca08: jmp    0x140c6ca0c
140c6ca0a: xor    al,al
140c6ca0c: test   al,al
140c6ca0e: je     0x140c6ca29
140c6ca10: lea    rdx,[rip+0x1779249]        # 0x1423e5c60
140c6ca17: mov    rcx,rdi
140c6ca1a: mov    rbx,QWORD PTR [rsp+0x38]
140c6ca1f: add    rsp,0x20
140c6ca23: pop    rdi
140c6ca24: jmp    0x14013ce00
140c6ca29: mov    rax,QWORD PTR [rdi]
140c6ca2c: mov    rcx,rdi
140c6ca2f: call   QWORD PTR [rax+0x18]
140c6ca32: mov    rdx,QWORD PTR [rdi]
140c6ca35: mov    rcx,rdi
140c6ca38: mov    ebx,eax
140c6ca3a: call   QWORD PTR [rdx+0x10]
140c6ca3d: mov    r8d,ebx
140c6ca40: lea    rcx,[rip+0x1764aa9]        # 0x1423d14f0
140c6ca47: movzx  edx,ax
140c6ca4a: call   0x1414add70
140c6ca4f: test   rax,rax
140c6ca52: je     0x140c6ca74
140c6ca54: cmp    DWORD PTR [rax+0x298],0x8
140c6ca5b: jle    0x140c6ca6e
140c6ca5d: mov    rax,QWORD PTR [rax+0x290]
140c6ca64: test   BYTE PTR [rax+0x8],0x4
140c6ca68: je     0x140c6ca6e
140c6ca6a: mov    al,0x1
140c6ca6c: jmp    0x140c6ca70
140c6ca6e: xor    al,al
140c6ca70: test   al,al
140c6ca72: jne    0x140c6ca92
140c6ca74: lea    rdx,[rip+0x1778c15]        # 0x1423e5690
140c6ca7b: mov    rcx,rdi
140c6ca7e: call   0x14013ce00
140c6ca83: lea    rdx,[rip+0x1778bd6]        # 0x1423e5660
140c6ca8a: mov    rcx,rdi
140c6ca8d: call   0x14013ce00
140c6ca92: mov    rbx,QWORD PTR [rsp+0x38]
140c6ca97: add    rsp,0x20
140c6ca9b: pop    rdi
140c6ca9c: ret
