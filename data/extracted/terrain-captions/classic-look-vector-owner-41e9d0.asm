; classic; PE:6a70b91c:0270a000; look vector 0x2695b10; owner 0x41e9d0..0x41e9f7; leaf, no .pdata
0x0041e9d0: mov    r8,rdx
0x0041e9d3: mov    rdx,QWORD PTR [rip+0x227713e]        # 0x142695b18
0x0041e9da: cmp    rdx,QWORD PTR [rip+0x227713f]        # 0x142695b20
0x0041e9e1: je     0x14041e9f2
0x0041e9e3: mov    rax,QWORD PTR [r8]
0x0041e9e6: mov    QWORD PTR [rdx],rax
0x0041e9e9: add    QWORD PTR [rip+0x2277127],0x8        # 0x142695b18
0x0041e9f1: ret
0x0041e9f2: jmp    0x14041ea00
