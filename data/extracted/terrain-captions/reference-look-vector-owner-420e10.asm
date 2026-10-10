; reference; PE:6a70a6d9:02711000; look vector 0x269bc20; owner 0x420e10..0x420e37; leaf, no .pdata
0x00420e10: mov    r8,rdx
0x00420e13: mov    rdx,QWORD PTR [rip+0x227ae0e]        # 0x14269bc28
0x00420e1a: cmp    rdx,QWORD PTR [rip+0x227ae0f]        # 0x14269bc30
0x00420e21: je     0x140420e32
0x00420e23: mov    rax,QWORD PTR [r8]
0x00420e26: mov    QWORD PTR [rdx],rax
0x00420e29: add    QWORD PTR [rip+0x227adf7],0x8        # 0x14269bc28
0x00420e31: ret
0x00420e32: jmp    0x140420e40
