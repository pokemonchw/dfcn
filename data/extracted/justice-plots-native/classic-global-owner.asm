# classic; PE:6a70b91c:0270a000; global info/justice ownership in fortress renderer; RVA 0x3f80c3..0x3f810b
0x003f80c3: cmp    BYTE PTR [rip+0x14a4bfe],0x0        # 0x14189ccc8
0x003f80ca: jne    0x1403f810b
0x003f80cc: cmp    BYTE PTR [rip+0x14a4e45],0x0        # 0x14189cf18
0x003f80d3: jne    0x1403f810b
0x003f80d5: cmp    BYTE PTR [rip+0x14a394c],0x0        # 0x14189ba28
0x003f80dc: jne    0x1403f810b
0x003f80e2: cmp    BYTE PTR [rip+0x14a825f],0x0        # 0x1418a0348
0x003f80e9: je     0x1403f810b
0x003f80ef: mov    r9d,DWORD PTR [rbp+0xb4]
0x003f80f6: mov    r8d,DWORD PTR [rbp+0xb8]
0x003f80fd: mov    edx,ebx
0x003f80ff: lea    rcx,[rip+0x14a808a]        # 0x1418a0190
0x003f8106: call   0x140393bd0
