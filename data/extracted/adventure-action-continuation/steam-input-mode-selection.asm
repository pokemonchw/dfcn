# steam PE:6a70a6d9:02711000; input-mode-selection; RVA 0x7f75fe..0x7f7643
0x007f75fe: movzx  eax,WORD PTR [rip+0x1e4956b]        # 0x142640b70
0x007f7605: sub    ax,0x19
0x007f7609: cmp    ax,r14w
0x007f760d: jbe    0x1408019c4
0x007f7613: mov    rcx,QWORD PTR [rip+0x1bedaf6]        # 0x1423e5110
0x007f761a: call   0x1407eeb70
0x007f761f: mov    BYTE PTR [rsp+0x76],al
0x007f7623: cmp    DWORD PTR [rip+0x1e51fd6],0x0        # 0x142649600
0x007f762a: jg     0x1408019d3
0x007f7630: cmp    BYTE PTR [rip+0x1e51f01],r14b        # 0x142649538
0x007f7637: je     0x1408019d3
0x007f763d: mov    ecx,DWORD PTR [rip+0x1e51ef1]        # 0x142649534
