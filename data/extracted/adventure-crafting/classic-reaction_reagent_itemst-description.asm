# classic PE:6a70b91c:0270a000; reaction_reagent_itemst-description; RVA 0xed75d0..0xed776e
0x00ed75d0: rex push rbp
0x00ed75d2: push   rbx
0x00ed75d3: push   rsi
0x00ed75d4: push   rdi
0x00ed75d5: push   r14
0x00ed75d7: lea    rbp,[rsp-0x40]
0x00ed75dc: sub    rsp,0x140
0x00ed75e3: mov    rax,QWORD PTR [rip+0x9bea56]        # 0x141896040
0x00ed75ea: xor    rax,rsp
0x00ed75ed: mov    QWORD PTR [rbp+0x30],rax
0x00ed75f1: mov    r14d,r8d
0x00ed75f4: mov    rsi,rdx
0x00ed75f7: mov    rbx,rcx
0x00ed75fa: lea    rcx,[rsp+0x20]
0x00ed75ff: call   0x1401fafe0
0x00ed7604: nop
0x00ed7605: movzx  eax,WORD PTR [rbx+0x30]
0x00ed7609: mov    WORD PTR [rsp+0x20],ax
0x00ed760e: movzx  eax,WORD PTR [rbx+0x32]
0x00ed7612: mov    WORD PTR [rsp+0x22],ax
0x00ed7617: movzx  eax,WORD PTR [rbx+0x34]
0x00ed761b: mov    WORD PTR [rsp+0x24],ax
0x00ed7620: movsx  eax,WORD PTR [rbx+0x36]
0x00ed7624: mov    DWORD PTR [rsp+0x28],eax
0x00ed7628: mov    eax,DWORD PTR [rbx+0x78]
0x00ed762b: mov    DWORD PTR [rsp+0x2c],eax
0x00ed762f: mov    eax,DWORD PTR [rbx+0x7c]
0x00ed7632: mov    DWORD PTR [rsp+0x3c],eax
0x00ed7636: mov    eax,DWORD PTR [rbx+0x80]
0x00ed763c: mov    DWORD PTR [rsp+0x44],eax
0x00ed7640: mov    eax,DWORD PTR [rbx+0x84]
0x00ed7646: mov    DWORD PTR [rsp+0x4c],eax
0x00ed764a: mov    eax,DWORD PTR [rbx+0x88]
0x00ed7650: mov    DWORD PTR [rsp+0x54],eax
0x00ed7654: lea    rdx,[rbx+0x38]
0x00ed7658: lea    rax,[rsp+0x60]
0x00ed765d: cmp    rax,rdx
0x00ed7660: je     0x140ed767a
0x00ed7662: mov    r8,QWORD PTR [rdx+0x10]
0x00ed7666: cmp    QWORD PTR [rdx+0x18],0xf
0x00ed766b: jbe    0x140ed7670
0x00ed766d: mov    rdx,QWORD PTR [rdx]
0x00ed7670: lea    rcx,[rsp+0x60]
0x00ed7675: call   0x14006f860
0x00ed767a: cmp    QWORD PTR [rbx+0x48],0x0
0x00ed767f: setne  BYTE PTR [rbp-0x5b]
0x00ed7683: lea    rdx,[rbx+0x58]
0x00ed7687: lea    rax,[rbp-0x80]
0x00ed768b: cmp    rax,rdx
0x00ed768e: je     0x140ed76a7
0x00ed7690: mov    r8,QWORD PTR [rdx+0x10]
0x00ed7694: cmp    QWORD PTR [rdx+0x18],0xf
0x00ed7699: jbe    0x140ed769e
0x00ed769b: mov    rdx,QWORD PTR [rdx]
0x00ed769e: lea    rcx,[rbp-0x80]
0x00ed76a2: call   0x14006f860
0x00ed76a7: cmp    QWORD PTR [rbx+0x68],0x0
0x00ed76ac: setne  BYTE PTR [rbp-0x5a]
0x00ed76b0: mov    eax,DWORD PTR [rbx+0x8c]
0x00ed76b6: mov    DWORD PTR [rbp-0x60],eax
0x00ed76b9: mov    eax,DWORD PTR [rbx+0x90]
0x00ed76bf: mov    DWORD PTR [rbp-0x58],eax
0x00ed76c2: lea    rdi,[rbx+0x98]
0x00ed76c9: lea    rax,[rbp-0x50]
0x00ed76cd: cmp    rax,rdi
0x00ed76d0: je     0x140ed76e9
0x00ed76d2: mov    rdx,QWORD PTR [rdi]
0x00ed76d5: mov    r8,QWORD PTR [rdi+0x8]
0x00ed76d9: sub    r8,rdx
0x00ed76dc: sar    r8,0x2
0x00ed76e0: lea    rcx,[rbp-0x50]
0x00ed76e4: call   0x1400ba8d0
0x00ed76e9: mov    rax,QWORD PTR [rdi+0x8]
0x00ed76ed: sub    rax,QWORD PTR [rdi]
0x00ed76f0: sar    rax,0x2
0x00ed76f4: test   rax,rax
0x00ed76f7: setne  BYTE PTR [rbp-0x38]
0x00ed76fb: mov    DWORD PTR [rbp-0x54],r14d
0x00ed76ff: movzx  eax,WORD PTR [rbx+0xb0]
0x00ed7706: mov    WORD PTR [rbp-0x36],ax
0x00ed770a: mov    eax,DWORD PTR [rbx+0xb4]
0x00ed7710: mov    DWORD PTR [rbp-0x34],eax
0x00ed7713: mov    r8d,0x1
0x00ed7719: mov    rdx,rsi
0x00ed771c: lea    rcx,[rsp+0x20]
0x00ed7721: call   0x140a285e0
0x00ed7726: mov    rcx,rsi
0x00ed7729: call   0x14052b070
0x00ed772e: nop
0x00ed772f: lea    rcx,[rbp+0x8]
0x00ed7733: call   0x14006f6e0
0x00ed7738: lea    rcx,[rbp-0x50]
0x00ed773c: call   0x14006f6e0
0x00ed7741: lea    rcx,[rbp-0x80]
0x00ed7745: call   0x14006f7e0
0x00ed774a: lea    rcx,[rsp+0x60]
0x00ed774f: call   0x14006f7e0
0x00ed7754: mov    rcx,QWORD PTR [rbp+0x30]
0x00ed7758: xor    rcx,rsp
0x00ed775b: call   0x1415345d0
0x00ed7760: add    rsp,0x140
0x00ed7767: pop    r14
0x00ed7769: pop    rdi
0x00ed776a: pop    rsi
0x00ed776b: pop    rbx
0x00ed776c: pop    rbp
0x00ed776d: ret
