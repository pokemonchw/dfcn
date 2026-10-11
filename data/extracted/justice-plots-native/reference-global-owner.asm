# reference; PE:6a70a6d9:02711000; global info/justice ownership in fortress renderer; RVA 0x3fa503..0x3fa54b
0x003fa503: cmp    BYTE PTR [rip+0x14a87ee],0x0        # 0x1418a2cf8
0x003fa50a: jne    0x1403fa54b
0x003fa50c: cmp    BYTE PTR [rip+0x14a8a35],0x0        # 0x1418a2f48
0x003fa513: jne    0x1403fa54b
0x003fa515: cmp    BYTE PTR [rip+0x14a753c],0x0        # 0x1418a1a58
0x003fa51c: jne    0x1403fa54b
0x003fa522: cmp    BYTE PTR [rip+0x14abe4f],0x0        # 0x1418a6378
0x003fa529: je     0x1403fa54b
0x003fa52f: mov    r9d,DWORD PTR [rbp+0xb4]
0x003fa536: mov    r8d,DWORD PTR [rbp+0xb8]
0x003fa53d: mov    edx,ebx
0x003fa53f: lea    rcx,[rip+0x14abc7a]        # 0x1418a61c0
0x003fa546: call   0x140396010
