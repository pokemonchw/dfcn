# steam PE:6a70a6d9:02711000; reaction_reagent_itemst-description; RVA 0xedc660..0xedc7fe
0x00edc660: rex push rbp
0x00edc662: push   rbx
0x00edc663: push   rsi
0x00edc664: push   rdi
0x00edc665: push   r14
0x00edc667: lea    rbp,[rsp-0x40]
0x00edc66c: sub    rsp,0x140
0x00edc673: mov    rax,QWORD PTR [rip+0x9bf9c6]        # 0x14189c040
0x00edc67a: xor    rax,rsp
0x00edc67d: mov    QWORD PTR [rbp+0x30],rax
0x00edc681: mov    r14d,r8d
0x00edc684: mov    rsi,rdx
0x00edc687: mov    rbx,rcx
0x00edc68a: lea    rcx,[rsp+0x20]
0x00edc68f: call   0x1401fb050
0x00edc694: nop
0x00edc695: movzx  eax,WORD PTR [rbx+0x30]
0x00edc699: mov    WORD PTR [rsp+0x20],ax
0x00edc69e: movzx  eax,WORD PTR [rbx+0x32]
0x00edc6a2: mov    WORD PTR [rsp+0x22],ax
0x00edc6a7: movzx  eax,WORD PTR [rbx+0x34]
0x00edc6ab: mov    WORD PTR [rsp+0x24],ax
0x00edc6b0: movsx  eax,WORD PTR [rbx+0x36]
0x00edc6b4: mov    DWORD PTR [rsp+0x28],eax
0x00edc6b8: mov    eax,DWORD PTR [rbx+0x78]
0x00edc6bb: mov    DWORD PTR [rsp+0x2c],eax
0x00edc6bf: mov    eax,DWORD PTR [rbx+0x7c]
0x00edc6c2: mov    DWORD PTR [rsp+0x3c],eax
0x00edc6c6: mov    eax,DWORD PTR [rbx+0x80]
0x00edc6cc: mov    DWORD PTR [rsp+0x44],eax
0x00edc6d0: mov    eax,DWORD PTR [rbx+0x84]
0x00edc6d6: mov    DWORD PTR [rsp+0x4c],eax
0x00edc6da: mov    eax,DWORD PTR [rbx+0x88]
0x00edc6e0: mov    DWORD PTR [rsp+0x54],eax
0x00edc6e4: lea    rdx,[rbx+0x38]
0x00edc6e8: lea    rax,[rsp+0x60]
0x00edc6ed: cmp    rax,rdx
0x00edc6f0: je     0x140edc70a
0x00edc6f2: mov    r8,QWORD PTR [rdx+0x10]
0x00edc6f6: cmp    QWORD PTR [rdx+0x18],0xf
0x00edc6fb: jbe    0x140edc700
0x00edc6fd: mov    rdx,QWORD PTR [rdx]
0x00edc700: lea    rcx,[rsp+0x60]
0x00edc705: call   0x14006f8d0
0x00edc70a: cmp    QWORD PTR [rbx+0x48],0x0
0x00edc70f: setne  BYTE PTR [rbp-0x5b]
0x00edc713: lea    rdx,[rbx+0x58]
0x00edc717: lea    rax,[rbp-0x80]
0x00edc71b: cmp    rax,rdx
0x00edc71e: je     0x140edc737
0x00edc720: mov    r8,QWORD PTR [rdx+0x10]
0x00edc724: cmp    QWORD PTR [rdx+0x18],0xf
0x00edc729: jbe    0x140edc72e
0x00edc72b: mov    rdx,QWORD PTR [rdx]
0x00edc72e: lea    rcx,[rbp-0x80]
0x00edc732: call   0x14006f8d0
0x00edc737: cmp    QWORD PTR [rbx+0x68],0x0
0x00edc73c: setne  BYTE PTR [rbp-0x5a]
0x00edc740: mov    eax,DWORD PTR [rbx+0x8c]
0x00edc746: mov    DWORD PTR [rbp-0x60],eax
0x00edc749: mov    eax,DWORD PTR [rbx+0x90]
0x00edc74f: mov    DWORD PTR [rbp-0x58],eax
0x00edc752: lea    rdi,[rbx+0x98]
0x00edc759: lea    rax,[rbp-0x50]
0x00edc75d: cmp    rax,rdi
0x00edc760: je     0x140edc779
0x00edc762: mov    rdx,QWORD PTR [rdi]
0x00edc765: mov    r8,QWORD PTR [rdi+0x8]
0x00edc769: sub    r8,rdx
0x00edc76c: sar    r8,0x2
0x00edc770: lea    rcx,[rbp-0x50]
0x00edc774: call   0x1400ba940
0x00edc779: mov    rax,QWORD PTR [rdi+0x8]
0x00edc77d: sub    rax,QWORD PTR [rdi]
0x00edc780: sar    rax,0x2
0x00edc784: test   rax,rax
0x00edc787: setne  BYTE PTR [rbp-0x38]
0x00edc78b: mov    DWORD PTR [rbp-0x54],r14d
0x00edc78f: movzx  eax,WORD PTR [rbx+0xb0]
0x00edc796: mov    WORD PTR [rbp-0x36],ax
0x00edc79a: mov    eax,DWORD PTR [rbx+0xb4]
0x00edc7a0: mov    DWORD PTR [rbp-0x34],eax
0x00edc7a3: mov    r8d,0x1
0x00edc7a9: mov    rdx,rsi
0x00edc7ac: lea    rcx,[rsp+0x20]
0x00edc7b1: call   0x140a2adb0
0x00edc7b6: mov    rcx,rsi
0x00edc7b9: call   0x14052d650
0x00edc7be: nop
0x00edc7bf: lea    rcx,[rbp+0x8]
0x00edc7c3: call   0x14006f750
0x00edc7c8: lea    rcx,[rbp-0x50]
0x00edc7cc: call   0x14006f750
0x00edc7d1: lea    rcx,[rbp-0x80]
0x00edc7d5: call   0x14006f850
0x00edc7da: lea    rcx,[rsp+0x60]
0x00edc7df: call   0x14006f850
0x00edc7e4: mov    rcx,QWORD PTR [rbp+0x30]
0x00edc7e8: xor    rcx,rsp
0x00edc7eb: call   0x141539660
0x00edc7f0: add    rsp,0x140
0x00edc7f7: pop    r14
0x00edc7f9: pop    rdi
0x00edc7fa: pop    rsi
0x00edc7fb: pop    rbx
0x00edc7fc: pop    rbp
0x00edc7fd: ret
