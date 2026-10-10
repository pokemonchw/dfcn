# classic PE:6a70b91c:0270a000; input-mode-selection; RVA 0x7f4e7e..0x7f4ec3
0x007f4e7e: movzx  eax,WORD PTR [rip+0x1e45bdb]        # 0x14263aa60
0x007f4e85: sub    ax,0x19
0x007f4e89: cmp    ax,r14w
0x007f4e8d: jbe    0x1407ff244
0x007f4e93: mov    rcx,QWORD PTR [rip+0x1bea166]        # 0x1423df000
0x007f4e9a: call   0x1407ec3f0
0x007f4e9f: mov    BYTE PTR [rsp+0x76],al
0x007f4ea3: cmp    DWORD PTR [rip+0x1e4e646],0x0        # 0x1426434f0
0x007f4eaa: jg     0x1407ff253
0x007f4eb0: cmp    BYTE PTR [rip+0x1e4e571],r14b        # 0x142643428
0x007f4eb7: je     0x1407ff253
0x007f4ebd: mov    ecx,DWORD PTR [rip+0x1e4e561]        # 0x142643424
