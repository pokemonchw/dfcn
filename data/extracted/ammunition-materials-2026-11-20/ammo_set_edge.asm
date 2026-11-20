0x140ccadd0: mov    QWORD PTR [rsp+0x8],rbx
0x140ccadd5: push   rdi
0x140ccadd6: sub    rsp,0x20
0x140ccadda: mov    rax,QWORD PTR [rcx+0xe8]
0x140ccade1: mov    rbx,rcx
0x140ccade4: movsx  edi,dx
0x140ccade7: cmp    DWORD PTR [rax+0xf0],0x0
0x140ccadee: jle    0x140ccaeb3
0x140ccadf4: mov    rax,QWORD PTR [rax+0xe8]
0x140ccadfb: test   BYTE PTR [rax],0x1
0x140ccadfe: je     0x140ccaeb3
0x140ccae04: mov    r8d,DWORD PTR [rcx+0xbc]
0x140ccae0b: movzx  edx,WORD PTR [rcx+0xb8]
0x140ccae12: lea    rcx,[rip+0x1728b57]        # 0x1423f3970
0x140ccae19: call   0x1414c6fe0
0x140ccae1e: test   rax,rax
0x140ccae21: je     0x140ccae9c
0x140ccae23: mov    edx,DWORD PTR [rax+0x284]
0x140ccae29: mov    ecx,edi
0x140ccae2b: sub    ecx,0x1
0x140ccae2e: je     0x140ccae73
0x140ccae30: sub    ecx,0x1
0x140ccae33: je     0x140ccae6e
0x140ccae35: sub    ecx,0x1
0x140ccae38: je     0x140ccae65
0x140ccae3a: sub    ecx,0x1
0x140ccae3d: je     0x140ccae60
0x140ccae3f: cmp    ecx,0x1
0x140ccae42: je     0x140ccae89
0x140ccae44: mov    eax,edx
0x140ccae46: cdq
0x140ccae47: sub    eax,edx
0x140ccae49: sar    eax,1
0x140ccae4b: mov    edx,eax
0x140ccae4d: mov    eax,0xf0
0x140ccae52: mov    DWORD PTR [rbx+rax*1],edx
0x140ccae55: mov    rbx,QWORD PTR [rsp+0x30]
0x140ccae5a: add    rsp,0x20
0x140ccae5e: pop    rdi
0x140ccae5f: ret
0x140ccae60: lea    ecx,[rdx+rdx*8]
0x140ccae63: jmp    0x140ccae78
0x140ccae65: lea    ecx,[rdx*8+0x0]
0x140ccae6c: jmp    0x140ccae78
0x140ccae6e: imul   ecx,edx,0x7
0x140ccae71: jmp    0x140ccae78
0x140ccae73: lea    ecx,[rdx+rdx*2]
0x140ccae76: add    ecx,ecx
0x140ccae78: mov    eax,0x66666667
0x140ccae7d: imul   ecx
0x140ccae7f: sar    edx,0x2
0x140ccae82: mov    eax,edx
0x140ccae84: shr    eax,0x1f
0x140ccae87: add    edx,eax
0x140ccae89: mov    eax,0xf0
0x140ccae8e: mov    DWORD PTR [rbx+rax*1],edx
0x140ccae91: mov    rbx,QWORD PTR [rsp+0x30]
0x140ccae96: add    rsp,0x20
0x140ccae9a: pop    rdi
0x140ccae9b: ret
0x140ccae9c: mov    eax,0xf0
0x140ccaea1: mov    DWORD PTR [rbx+rax*1],0x0
0x140ccaea8: mov    rbx,QWORD PTR [rsp+0x30]
0x140ccaead: add    rsp,0x20
0x140ccaeb1: pop    rdi
0x140ccaeb2: ret
0x140ccaeb3: mov    eax,0xf0
0x140ccaeb8: mov    DWORD PTR [rcx+rax*1],0x0
0x140ccaebf: mov    rbx,QWORD PTR [rsp+0x30]
0x140ccaec4: add    rsp,0x20
0x140ccaec8: pop    rdi
0x140ccaec9: ret
