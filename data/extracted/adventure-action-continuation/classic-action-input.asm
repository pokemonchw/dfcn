# classic PE:6a70b91c:0270a000; action-input; RVA 0x7f45e0..0x7f4896
0x007f45e0: mov    QWORD PTR [rsp+0x8],rbx
0x007f45e5: mov    QWORD PTR [rsp+0x10],rbp
0x007f45ea: mov    QWORD PTR [rsp+0x18],rsi
0x007f45ef: mov    QWORD PTR [rsp+0x20],rdi
0x007f45f4: push   r12
0x007f45f6: push   r14
0x007f45f8: push   r15
0x007f45fa: sub    rsp,0x20
0x007f45fe: mov    ebx,DWORD PTR [rip+0x1bd3074]        # 0x1423c7678
0x007f4604: lea    eax,[r8+r9*1]
0x007f4608: add    r8d,0x1c
0x007f460c: mov    r14,rdx
0x007f460f: cdq
0x007f4610: xor    r11b,r11b
0x007f4613: sub    eax,edx
0x007f4615: xor    r10b,r10b
0x007f4618: sar    eax,1
0x007f461a: lea    edi,[rbx-0x5]
0x007f461d: xor    r15b,r15b
0x007f4620: lea    esi,[rbx-0x4]
0x007f4623: mov    r12,rcx
0x007f4626: lea    ebp,[rbx-0x2]
0x007f4629: mov    ecx,DWORD PTR [rip+0x1e4fe75]        # 0x1426444a4
0x007f462f: lea    r9d,[rax-0x18]
0x007f4633: mov    eax,r9d
0x007f4636: sub    eax,r8d
0x007f4639: add    r8d,0xc
0x007f463d: cmp    eax,0xc
0x007f4640: mov    eax,DWORD PTR [rip+0x1e4fe5a]        # 0x1426444a0
0x007f4646: cmovge r8d,r9d
0x007f464a: cmp    BYTE PTR [rip+0x1b95e74],r10b        # 0x14238a4c5
0x007f4651: lea    r9d,[rbx-0x7]
0x007f4655: lea    edx,[r8+0x2e]
0x007f4659: je     0x1407f46aa
0x007f465b: cmp    BYTE PTR [rip+0x1b95e5a],r10b        # 0x14238a4bc
0x007f4662: je     0x1407f46aa
0x007f4664: cmp    eax,r8d
0x007f4667: jl     0x1407f46aa
0x007f4669: cmp    eax,edx
0x007f466b: jg     0x1407f46aa
0x007f466d: lea    eax,[rbx-0xa]
0x007f4670: cmp    ecx,eax
0x007f4672: jl     0x1407f4685
0x007f4674: lea    eax,[rbx-0x8]
0x007f4677: cmp    ecx,eax
0x007f4679: jg     0x1407f4685
0x007f467b: mov    BYTE PTR [rip+0x1b95e3a],r10b        # 0x14238a4bc
0x007f4682: mov    r11b,0x1
0x007f4685: cmp    ecx,r9d
0x007f4688: jl     0x1407f4698
0x007f468a: cmp    ecx,edi
0x007f468c: jg     0x1407f4698
0x007f468e: mov    BYTE PTR [rip+0x1b95e27],r10b        # 0x14238a4bc
0x007f4695: mov    r10b,0x1
0x007f4698: cmp    ecx,esi
0x007f469a: jl     0x1407f46aa
0x007f469c: cmp    ecx,ebp
0x007f469e: jg     0x1407f46aa
0x007f46a0: mov    BYTE PTR [rip+0x1b95e15],r15b        # 0x14238a4bc
0x007f46a7: mov    r15b,0x1
0x007f46aa: mov    rdx,QWORD PTR [r14]
0x007f46ad: mov    r8,rdx
0x007f46b0: mov    rax,QWORD PTR [rdx+0x8]
0x007f46b4: movzx  r9d,BYTE PTR [rax+0x19]
0x007f46b9: test   r9b,r9b
0x007f46bc: jne    0x1407f46d9
0x007f46be: mov    rcx,rax
0x007f46c1: cmp    DWORD PTR [rcx+0x1c],0x52
0x007f46c5: jge    0x1407f46cd
0x007f46c7: mov    rcx,QWORD PTR [rcx+0x10]
0x007f46cb: jmp    0x1407f46d3
0x007f46cd: mov    r8,rcx
0x007f46d0: mov    rcx,QWORD PTR [rcx]
0x007f46d3: cmp    BYTE PTR [rcx+0x19],0x0
0x007f46d7: je     0x1407f46c1
0x007f46d9: cmp    BYTE PTR [r8+0x19],0x0
0x007f46de: mov    ebx,0x1
0x007f46e3: jne    0x1407f46f2
0x007f46e5: cmp    DWORD PTR [r8+0x1c],0x52
0x007f46ea: movzx  r11d,r11b
0x007f46ee: cmovle r11d,ebx
0x007f46f2: mov    r8,rdx
0x007f46f5: test   r9b,r9b
0x007f46f8: jne    0x1407f4718
0x007f46fa: mov    rcx,rax
0x007f46fd: nop    DWORD PTR [rax]
0x007f4700: cmp    DWORD PTR [rcx+0x1c],0x53
0x007f4704: jge    0x1407f470c
0x007f4706: mov    rcx,QWORD PTR [rcx+0x10]
0x007f470a: jmp    0x1407f4712
0x007f470c: mov    r8,rcx
0x007f470f: mov    rcx,QWORD PTR [rcx]
0x007f4712: cmp    BYTE PTR [rcx+0x19],0x0
0x007f4716: je     0x1407f4700
0x007f4718: cmp    BYTE PTR [r8+0x19],0x0
0x007f471d: jne    0x1407f472c
0x007f471f: cmp    DWORD PTR [r8+0x1c],0x53
0x007f4724: movzx  r10d,r10b
0x007f4728: cmovle r10d,ebx
0x007f472c: test   r9b,r9b
0x007f472f: jne    0x1407f4749
0x007f4731: cmp    DWORD PTR [rax+0x1c],0x54
0x007f4735: jge    0x1407f473d
0x007f4737: mov    rax,QWORD PTR [rax+0x10]
0x007f473b: jmp    0x1407f4743
0x007f473d: mov    rdx,rax
0x007f4740: mov    rax,QWORD PTR [rax]
0x007f4743: cmp    BYTE PTR [rax+0x19],0x0
0x007f4747: je     0x1407f4731
0x007f4749: cmp    BYTE PTR [rdx+0x19],0x0
0x007f474d: jne    0x1407f4755
0x007f474f: cmp    DWORD PTR [rdx+0x1c],0x54
0x007f4753: jle    0x1407f475a
0x007f4755: test   r15b,r15b
0x007f4758: je     0x1407f47b0
0x007f475a: mov    rax,QWORD PTR [rip+0x1bea89f]        # 0x1423df000
0x007f4761: mov    rdx,r14
0x007f4764: mov    rcx,r12
0x007f4767: mov    WORD PTR [rax+0xbe0],bx
0x007f476e: call   0x1407f44b0
0x007f4773: mov    rax,QWORD PTR [rip+0x1bea886]        # 0x1423df000
0x007f477a: cmp    BYTE PTR [rax+0x143c],bl
0x007f4780: jne    0x1407f47a3
0x007f4782: mov    rcx,rax
0x007f4785: call   0x140641820
0x007f478a: test   al,al
0x007f478c: mov    rax,QWORD PTR [rip+0x1bea86d]        # 0x1423df000
0x007f4793: je     0x1407f47a3
0x007f4795: mov    BYTE PTR [rax+0x143c],0x2
0x007f479c: mov    al,0x1
0x007f479e: jmp    0x1407f4877
0x007f47a3: mov    BYTE PTR [rax+0x143c],bl
0x007f47a9: mov    al,0x1
0x007f47ab: jmp    0x1407f4877
0x007f47b0: test   r11b,r11b
0x007f47b3: je     0x1407f47d6
0x007f47b5: mov    rax,QWORD PTR [rip+0x1bea844]        # 0x1423df000
0x007f47bc: mov    rdx,r14
0x007f47bf: mov    rcx,r12
0x007f47c2: mov    WORD PTR [rax+0xbe0],bx
0x007f47c9: call   0x1407f44b0
0x007f47ce: movzx  eax,bl
0x007f47d1: jmp    0x1407f4877
0x007f47d6: test   r10b,r10b
0x007f47d9: je     0x1407f4875
0x007f47df: mov    rbx,QWORD PTR [rip+0x1bea81a]        # 0x1423df000
0x007f47e6: mov    rcx,rbx
0x007f47e9: call   0x140a3e5c0
0x007f47ee: mov    rcx,rbx
0x007f47f1: call   0x1400739f0
0x007f47f6: mov    r8,QWORD PTR [rip+0x1bea7ab]        # 0x1423defa8
0x007f47fd: mov    r11,QWORD PTR [rip+0x1bea79c]        # 0x1423defa0
0x007f4804: mov    rcx,QWORD PTR [rip+0x1bea7f5]        # 0x1423df000
0x007f480b: sub    r8,r11
0x007f480e: sar    r8,0x3
0x007f4812: mov    r10d,DWORD PTR [rcx+0x3dc]
0x007f4819: test   r8d,r8d
0x007f481c: je     0x1407f4871
0x007f481e: cmp    r10d,0xffffffff
0x007f4822: je     0x1407f4871
0x007f4824: xor    edx,edx
0x007f4826: sub    r8d,0x1
0x007f482a: js     0x1407f485a
0x007f482c: nop    DWORD PTR [rax+0x0]
0x007f4830: lea    ecx,[rdx+r8*1]
0x007f4834: sar    ecx,1
0x007f4836: movsxd rax,ecx
0x007f4839: mov    rbx,QWORD PTR [r11+rax*8]
0x007f483d: cmp    DWORD PTR [rbx+0x130],r10d
0x007f4844: je     0x1407f485c
0x007f4846: lea    eax,[rcx+0x1]
0x007f4849: cmovle edx,eax
0x007f484c: lea    eax,[rcx-0x1]
0x007f484f: cmovle eax,r8d
0x007f4853: mov    r8d,eax
0x007f4856: cmp    edx,eax
0x007f4858: jle    0x1407f4830
0x007f485a: xor    ebx,ebx
0x007f485c: test   rbx,rbx
0x007f485f: je     0x1407f4871
0x007f4861: mov    rcx,rbx
0x007f4864: call   0x140a3e5c0
0x007f4869: mov    rcx,rbx
0x007f486c: call   0x1400739f0
0x007f4871: mov    al,0x1
0x007f4873: jmp    0x1407f4877
0x007f4875: xor    al,al
0x007f4877: mov    rbx,QWORD PTR [rsp+0x40]
0x007f487c: mov    rbp,QWORD PTR [rsp+0x48]
0x007f4881: mov    rsi,QWORD PTR [rsp+0x50]
0x007f4886: mov    rdi,QWORD PTR [rsp+0x58]
0x007f488b: add    rsp,0x20
0x007f488f: pop    r15
0x007f4891: pop    r14
0x007f4893: pop    r12
0x007f4895: ret
