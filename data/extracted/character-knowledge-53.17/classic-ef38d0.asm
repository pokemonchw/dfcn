; classic PE:6aea11a5:0272d000; reference-description:general_ref_knowledge_scholar_flagst; RVA 0xef38d0..0xef6190; code ends 0xef5c9c
0x00ef38d0: mov    QWORD PTR [rdx+0x10],0x0
0x00ef38d8: mov    r9,rdx
0x00ef38db: cmp    QWORD PTR [rdx+0x18],0xf
0x00ef38e0: mov    rax,rdx
0x00ef38e3: jbe    0x140ef38e8
0x00ef38e5: mov    rax,QWORD PTR [rdx]
0x00ef38e8: mov    BYTE PTR [rax],0x0
0x00ef38eb: movsxd rax,DWORD PTR [rcx+0x8]
0x00ef38ef: cmp    eax,0xd
0x00ef38f2: ja     0x140ef5c99
0x00ef38f8: lea    rdx,[rip+0xffffffffff10c701]        # 0x140000000
0x00ef38ff: mov    eax,DWORD PTR [rdx+rax*4+0xef5c9c]
0x00ef3906: add    rax,rdx
0x00ef3909: jmp    rax
0x00ef390b: mov    eax,DWORD PTR [rcx+0xc]
0x00ef390e: cmp    eax,0x10000
0x00ef3913: ja     0x140ef3aef
0x00ef3919: je     0x140ef3ada
0x00ef391f: cmp    eax,0x100
0x00ef3924: ja     0x140ef3a0c
0x00ef392a: je     0x140ef39f7
0x00ef3930: dec    eax
0x00ef3932: cmp    eax,0x7f
0x00ef3935: ja     0x140ef5c99
0x00ef393b: movzx  eax,BYTE PTR [rdx+rax*1+0xef5cf8]
0x00ef3943: mov    ecx,DWORD PTR [rdx+rax*4+0xef5cd4]
0x00ef394a: add    rcx,rdx
0x00ef394d: jmp    rcx
0x00ef394f: mov    r8d,0x10
0x00ef3955: lea    rdx,[rip+0x85f17c]        # 0x141752ad8 ; literal="formal reasoning"
0x00ef395c: mov    rcx,r9
0x00ef395f: jmp    0x140070e90
0x00ef3964: mov    r8d,0x13
0x00ef396a: lea    rdx,[rip+0x85f337]        # 0x141752ca8 ; literal="deductive reasoning"
0x00ef3971: mov    rcx,r9
0x00ef3974: jmp    0x140070e90
0x00ef3979: mov    r8d,0x11
0x00ef397f: lea    rdx,[rip+0x85f33a]        # 0x141752cc0 ; literal="syllogistic logic"
0x00ef3986: mov    rcx,r9
0x00ef3989: jmp    0x140070e90
0x00ef398e: mov    r8d,0x17
0x00ef3994: lea    rdx,[rip+0x85f2dd]        # 0x141752c78 ; literal="hypothetical syllogisms"
0x00ef399b: mov    rcx,r9
0x00ef399e: jmp    0x140070e90
0x00ef39a3: mov    r8d,0x13
0x00ef39a9: lea    rdx,[rip+0x85f2e0]        # 0x141752c90 ; literal="propositional logic"
0x00ef39b0: mov    rcx,r9
0x00ef39b3: jmp    0x140070e90
0x00ef39b8: mov    r8d,0x13
0x00ef39be: lea    rdx,[rip+0x85f283]        # 0x141752c48 ; literal="dialectic reasoning"
0x00ef39c5: mov    rcx,r9
0x00ef39c8: jmp    0x140070e90
0x00ef39cd: mov    r8d,0x14
0x00ef39d3: lea    rdx,[rip+0x85f286]        # 0x141752c60 ; literal="analogical inference"
0x00ef39da: mov    rcx,r9
0x00ef39dd: jmp    0x140070e90
0x00ef39e2: mov    r8d,0xe
0x00ef39e8: lea    rdx,[rip+0x85f221]        # 0x141752c10 ; literal="medical ethics"
0x00ef39ef: mov    rcx,r9
0x00ef39f2: jmp    0x140070e90
0x00ef39f7: mov    r8d,0x23
0x00ef39fd: lea    rdx,[rip+0x85f21c]        # 0x141752c20 ; literal="the meaning of individual happiness"
0x00ef3a04: mov    rcx,r9
0x00ef3a07: jmp    0x140070e90
0x00ef3a0c: cmp    eax,0x1000
0x00ef3a11: ja     0x140ef3a82
0x00ef3a13: je     0x140ef3a6d
0x00ef3a15: cmp    eax,0x200
0x00ef3a1a: je     0x140ef3a58
0x00ef3a1c: cmp    eax,0x400
0x00ef3a21: je     0x140ef3a43
0x00ef3a23: cmp    eax,0x800
0x00ef3a28: jne    0x140ef5c99
0x00ef3a2e: mov    r8d,0x18
0x00ef3a34: lea    rdx,[rip+0x85f305]        # 0x141752d40 ; literal="the nature of perception"
0x00ef3a3b: mov    rcx,r9
0x00ef3a3e: jmp    0x140070e90
0x00ef3a43: mov    r8d,0x13
0x00ef3a49: lea    rdx,[rip+0x85f360]        # 0x141752db0 ; literal="the nature of truth"
0x00ef3a50: mov    rcx,r9
0x00ef3a53: jmp    0x140070e90
0x00ef3a58: mov    r8d,0x2d
0x00ef3a5e: lea    rdx,[rip+0x85f31b]        # 0x141752d80 ; literal="ethics as it regards the benefit of the state"
0x00ef3a65: mov    rcx,r9
0x00ef3a68: jmp    0x140070e90
0x00ef3a6d: mov    r8d,0x1b
0x00ef3a73: lea    rdx,[rip+0x85f2e6]        # 0x141752d60 ; literal="the nature of justification"
0x00ef3a7a: mov    rcx,r9
0x00ef3a7d: jmp    0x140070e90
0x00ef3a82: cmp    eax,0x2000
0x00ef3a87: je     0x140ef3ac5
0x00ef3a89: cmp    eax,0x4000
0x00ef3a8e: je     0x140ef3ab0
0x00ef3a90: cmp    eax,0x8000
0x00ef3a95: jne    0x140ef5c99
0x00ef3a9b: mov    r8d,0x12
0x00ef3aa1: lea    rdx,[rip+0x85f230]        # 0x141752cd8 ; literal="the nature of time"
0x00ef3aa8: mov    rcx,r9
0x00ef3aab: jmp    0x140070e90
0x00ef3ab0: mov    r8d,0x17
0x00ef3ab6: lea    rdx,[rip+0x85f26b]        # 0x141752d28 ; literal="the nature of existence"
0x00ef3abd: mov    rcx,r9
0x00ef3ac0: jmp    0x140070e90
0x00ef3ac5: mov    r8d,0x14
0x00ef3acb: lea    rdx,[rip+0x85f23e]        # 0x141752d10 ; literal="the nature of belief"
0x00ef3ad2: mov    rcx,r9
0x00ef3ad5: jmp    0x140070e90
0x00ef3ada: mov    r8d,0x1b
0x00ef3ae0: lea    rdx,[rip+0x85f209]        # 0x141752cf0 ; literal="the nature of mind and body"
0x00ef3ae7: mov    rcx,r9
0x00ef3aea: jmp    0x140070e90
0x00ef3aef: cmp    eax,0x1000000
0x00ef3af4: ja     0x140ef3be3
0x00ef3afa: je     0x140ef3bce
0x00ef3b00: cmp    eax,0x100000
0x00ef3b05: ja     0x140ef3b76
0x00ef3b07: je     0x140ef3b61
0x00ef3b09: cmp    eax,0x20000
0x00ef3b0e: je     0x140ef3b4c
0x00ef3b10: cmp    eax,0x40000
0x00ef3b15: je     0x140ef3b37
0x00ef3b17: cmp    eax,0x80000
0x00ef3b1c: jne    0x140ef5c99
0x00ef3b22: mov    r8d,0x14
0x00ef3b28: lea    rdx,[rip+0x85f329]        # 0x141752e58 ; literal="the nature of events"
0x00ef3b2f: mov    rcx,r9
0x00ef3b32: jmp    0x140070e90
0x00ef3b37: mov    r8d,0x29
0x00ef3b3d: lea    rdx,[rip+0x85f37c]        # 0x141752ec0 ; literal="the relationship between wholes and parts"
0x00ef3b44: mov    rcx,r9
0x00ef3b47: jmp    0x140070e90
0x00ef3b4c: mov    r8d,0x35
0x00ef3b52: lea    rdx,[rip+0x85f32f]        # 0x141752e88 ; literal="the relationship between objects and their properties"
0x00ef3b59: mov    rcx,r9
0x00ef3b5c: jmp    0x140070e90
0x00ef3b61: mov    r8d,0x17
0x00ef3b67: lea    rdx,[rip+0x85f302]        # 0x141752e70 ; literal="the nature of processes"
0x00ef3b6e: mov    rcx,r9
0x00ef3b71: jmp    0x140070e90
0x00ef3b76: cmp    eax,0x200000
0x00ef3b7b: je     0x140ef3bb9
0x00ef3b7d: cmp    eax,0x400000
0x00ef3b82: je     0x140ef3ba4
0x00ef3b84: cmp    eax,0x800000
0x00ef3b89: jne    0x140ef5c99
0x00ef3b8f: mov    r8d,0x2a
0x00ef3b95: lea    rdx,[rip+0x85f22c]        # 0x141752dc8 ; literal="ethics as applied to interpersonal conduct"
0x00ef3b9c: mov    rcx,r9
0x00ef3b9f: jmp    0x140070e90
0x00ef3ba4: mov    r8d,0x18
0x00ef3baa: lea    rdx,[rip+0x85f287]        # 0x141752e38 ; literal="ethics as applied to war"
0x00ef3bb1: mov    rcx,r9
0x00ef3bb4: jmp    0x140070e90
0x00ef3bb9: mov    r8d,0x17
0x00ef3bbf: lea    rdx,[rip+0x85f25a]        # 0x141752e20 ; literal="the nature of causation"
0x00ef3bc6: mov    rcx,r9
0x00ef3bc9: jmp    0x140070e90
0x00ef3bce: mov    r8d,0x22
0x00ef3bd4: lea    rdx,[rip+0x85f21d]        # 0x141752df8 ; literal="law, its forms and recommendations"
0x00ef3bdb: mov    rcx,r9
0x00ef3bde: jmp    0x140070e90
0x00ef3be3: cmp    eax,0x10000000
0x00ef3be8: ja     0x140ef3c59
0x00ef3bea: je     0x140ef3c44
0x00ef3bec: cmp    eax,0x2000000
0x00ef3bf1: je     0x140ef3c2f
0x00ef3bf3: cmp    eax,0x4000000
0x00ef3bf8: je     0x140ef3c1a
0x00ef3bfa: cmp    eax,0x8000000
0x00ef3bff: jne    0x140ef5c99
0x00ef3c05: mov    r8d,0x9
0x00ef3c0b: lea    rdx,[rip+0x85f386]        # 0x141752f98 ; literal="etymology"
0x00ef3c12: mov    rcx,r9
0x00ef3c15: jmp    0x140070e90
0x00ef3c1a: mov    r8d,0x7
0x00ef3c20: lea    rdx,[rip+0x85f3e1]        # 0x141753008 ; literal="grammar"
0x00ef3c27: mov    rcx,r9
0x00ef3c2a: jmp    0x140070e90
0x00ef3c2f: mov    r8d,0x28
0x00ef3c35: lea    rdx,[rip+0x85f39c]        # 0x141752fd8 ; literal="education, its forms and recommendations"
0x00ef3c3c: mov    rcx,r9
0x00ef3c3f: jmp    0x140070e90
0x00ef3c44: mov    r8d,0x28
0x00ef3c4a: lea    rdx,[rip+0x85f357]        # 0x141752fa8 ; literal="diplomacy, its forms and recommendations"
0x00ef3c51: mov    rcx,r9
0x00ef3c54: jmp    0x140070e90
0x00ef3c59: cmp    eax,0x20000000
0x00ef3c5e: je     0x140ef3c9c
0x00ef3c60: cmp    eax,0x40000000
0x00ef3c65: je     0x140ef3c87
0x00ef3c67: cmp    eax,0x80000000
0x00ef3c6c: jne    0x140ef5c99
0x00ef3c72: mov    r8d,0x2d
0x00ef3c78: lea    rdx,[rip+0x85f271]        # 0x141752ef0 ; literal="social welfare, its forms and recommendations"
0x00ef3c7f: mov    rcx,r9
0x00ef3c82: jmp    0x140070e90
0x00ef3c87: mov    r8d,0x2e
0x00ef3c8d: lea    rdx,[rip+0x85f2d4]        # 0x141752f68 ; literal="economic policy, its forms and recommendations"
0x00ef3c94: mov    rcx,r9
0x00ef3c97: jmp    0x140070e90
0x00ef3c9c: mov    r8d,0x29
0x00ef3ca2: lea    rdx,[rip+0x85f28f]        # 0x141752f38 ; literal="government, its forms and recommendations"
0x00ef3ca9: mov    rcx,r9
0x00ef3cac: jmp    0x140070e90
0x00ef3cb1: mov    edx,DWORD PTR [rcx+0xc]
0x00ef3cb4: sub    edx,0x1
0x00ef3cb7: je     0x140ef3d25
0x00ef3cb9: sub    edx,0x1
0x00ef3cbc: je     0x140ef3d10
0x00ef3cbe: sub    edx,0x2
0x00ef3cc1: je     0x140ef3cfb
0x00ef3cc3: sub    edx,0x4
0x00ef3cc6: je     0x140ef3ce6
0x00ef3cc8: cmp    edx,0x8
0x00ef3ccb: jne    0x140ef5c99
0x00ef3cd1: mov    r8d,0xc
0x00ef3cd7: lea    rdx,[rip+0x86024a]        # 0x141753f28 ; literal="dictionaries"
0x00ef3cde: mov    rcx,r9
0x00ef3ce1: jmp    0x140070e90
0x00ef3ce6: mov    r8d,0x10
0x00ef3cec: lea    rdx,[rip+0x86021d]        # 0x141753f10 ; literal="the value of art"
0x00ef3cf3: mov    rcx,r9
0x00ef3cf6: jmp    0x140070e90
0x00ef3cfb: mov    r8d,0x14
0x00ef3d01: lea    rdx,[rip+0x860248]        # 0x141753f50 ; literal="the nature of beauty"
0x00ef3d08: mov    rcx,r9
0x00ef3d0b: jmp    0x140070e90
0x00ef3d10: mov    r8d,0x10
0x00ef3d16: lea    rdx,[rip+0x86021b]        # 0x141753f38 ; literal="direct inference"
0x00ef3d1d: mov    rcx,r9
0x00ef3d20: jmp    0x140070e90
0x00ef3d25: mov    r8d,0x13
0x00ef3d2b: lea    rdx,[rip+0x85f1ee]        # 0x141752f20 ; literal="inductive reasoning"
0x00ef3d32: mov    rcx,r9
0x00ef3d35: jmp    0x140070e90
0x00ef3d3a: mov    eax,DWORD PTR [rcx+0xc]
0x00ef3d3d: cmp    eax,0x10000
0x00ef3d42: ja     0x140ef3f1e
0x00ef3d48: je     0x140ef3f09
0x00ef3d4e: cmp    eax,0x100
0x00ef3d53: ja     0x140ef3e3b
0x00ef3d59: je     0x140ef3e26
0x00ef3d5f: dec    eax
0x00ef3d61: cmp    eax,0x7f
0x00ef3d64: ja     0x140ef5c99
0x00ef3d6a: movzx  eax,BYTE PTR [rdx+rax*1+0xef5d9c]
0x00ef3d72: mov    ecx,DWORD PTR [rdx+rax*4+0xef5d78]
0x00ef3d79: add    rcx,rdx
0x00ef3d7c: jmp    rcx
0x00ef3d7e: mov    r8d,0x24
0x00ef3d84: lea    rdx,[rip+0x86013d]        # 0x141753ec8 ; literal="the method of proof by contradiction"
0x00ef3d8b: mov    rcx,r9
0x00ef3d8e: jmp    0x140070e90
0x00ef3d93: mov    r8d,0x18
0x00ef3d99: lea    rdx,[rip+0x860150]        # 0x141753ef0 ; literal="a symbol for nothingness"
0x00ef3da0: mov    rcx,r9
0x00ef3da3: jmp    0x140070e90
0x00ef3da8: mov    r8d,0x20
0x00ef3dae: lea    rdx,[rip+0x8600cb]        # 0x141753e80 ; literal="notation for negative quantities"
0x00ef3db5: mov    rcx,r9
0x00ef3db8: jmp    0x140070e90
0x00ef3dbd: mov    r8d,0x1f
0x00ef3dc3: lea    rdx,[rip+0x8600de]        # 0x141753ea8 ; literal="notation for very large numbers"
0x00ef3dca: mov    rcx,r9
0x00ef3dcd: jmp    0x140070e90
0x00ef3dd2: mov    r8d,0x13
0x00ef3dd8: lea    rdx,[rip+0x860371]        # 0x141754150 ; literal="positional notation"
0x00ef3ddf: mov    rcx,r9
0x00ef3de2: jmp    0x140070e90
0x00ef3de7: mov    r8d,0x40
0x00ef3ded: lea    rdx,[rip+0x86037c]        # 0x141754170 ; literal="geometric objects:  points, lines, circles, triangles, and so on"
0x00ef3df4: mov    rcx,r9
0x00ef3df7: jmp    0x140070e90
0x00ef3dfc: mov    r8d,0x18
0x00ef3e02: lea    rdx,[rip+0x8602ef]        # 0x1417540f8 ; literal="the method of exhaustion"
0x00ef3e09: mov    rcx,r9
0x00ef3e0c: jmp    0x140070e90
0x00ef3e11: mov    r8d,0x31
0x00ef3e17: lea    rdx,[rip+0x8602fa]        # 0x141754118 ; literal="the properties of similar and congruent triangles"
0x00ef3e1e: mov    rcx,r9
0x00ef3e21: jmp    0x140070e90
0x00ef3e26: mov    r8d,0x8c
0x00ef3e2c: lea    rdx,[rip+0x8601fd]        # 0x141754030 ; literal="the relationship between the length of the altitude of a right triangle and the lengths of the segments into which it divides the hypotenuse"
0x00ef3e33: mov    rcx,r9
0x00ef3e36: jmp    0x140070e90
0x00ef3e3b: cmp    eax,0x1000
0x00ef3e40: ja     0x140ef3eb1
0x00ef3e42: je     0x140ef3e9c
0x00ef3e44: cmp    eax,0x200
0x00ef3e49: je     0x140ef3e87
0x00ef3e4b: cmp    eax,0x400
0x00ef3e50: je     0x140ef3e72
0x00ef3e52: cmp    eax,0x800
0x00ef3e57: jne    0x140ef5c99
0x00ef3e5d: mov    r8d,0x62
0x00ef3e63: lea    rdx,[rip+0x860156]        # 0x141753fc0 ; literal="the relationship between the lengths of the hypotenuse of a right triangle and the other two sides"
0x00ef3e6a: mov    rcx,r9
0x00ef3e6d: jmp    0x140070e90
0x00ef3e72: mov    r8d,0x4b
0x00ef3e78: lea    rdx,[rip+0x8600f1]        # 0x141753f70 ; literal="the angles of triangles inscribed in a circle with one edge on the diameter"
0x00ef3e7f: mov    rcx,r9
0x00ef3e82: jmp    0x140070e90
0x00ef3e87: mov    r8d,0x35
0x00ef3e8d: lea    rdx,[rip+0x86022c]        # 0x1417540c0 ; literal="the equality of the base angle of isosceles triangles"
0x00ef3e94: mov    rcx,r9
0x00ef3e97: jmp    0x140070e90
0x00ef3e9c: mov    r8d,0x77
0x00ef3ea2: lea    rdx,[rip+0x8604b7]        # 0x141754360 ; literal="examples of triples of small whole numbers which, when taken together, are the lengths of the sides of a right triangle"
0x00ef3ea9: mov    rcx,r9
0x00ef3eac: jmp    0x140070e90
0x00ef3eb1: cmp    eax,0x2000
0x00ef3eb6: je     0x140ef3ef4
0x00ef3eb8: cmp    eax,0x4000
0x00ef3ebd: je     0x140ef3edf
0x00ef3ebf: cmp    eax,0x8000
0x00ef3ec4: jne    0x140ef5c99
0x00ef3eca: mov    r8d,0x27
0x00ef3ed0: lea    rdx,[rip+0x860459]        # 0x141754330 ; literal="the existence of incommensurable ratios"
0x00ef3ed7: mov    rcx,r9
0x00ef3eda: jmp    0x140070e90
0x00ef3edf: mov    r8d,0x7c
0x00ef3ee5: lea    rdx,[rip+0x8603c4]        # 0x1417542b0 ; literal="examples of triples of very large whole numbers which, when taken together, are the lengths of the sides of a right triangle"
0x00ef3eec: mov    rcx,r9
0x00ef3eef: jmp    0x140070e90
0x00ef3ef4: mov    r8d,0x77
0x00ef3efa: lea    rdx,[rip+0x8604df]        # 0x1417543e0 ; literal="examples of triples of large whole numbers which, when taken together, are the lengths of the sides of a right triangle"
0x00ef3f01: mov    rcx,r9
0x00ef3f04: jmp    0x140070e90
0x00ef3f09: mov    r8d,0x13
0x00ef3f0f: lea    rdx,[rip+0x86032a]        # 0x141754240 ; literal="axiomatic reasoning"
0x00ef3f16: mov    rcx,r9
0x00ef3f19: jmp    0x140070e90
0x00ef3f1e: cmp    eax,0x1000000
0x00ef3f23: ja     0x140ef4012
0x00ef3f29: je     0x140ef3ffd
0x00ef3f2f: cmp    eax,0x100000
0x00ef3f34: ja     0x140ef3fa5
0x00ef3f36: je     0x140ef3f90
0x00ef3f38: cmp    eax,0x20000
0x00ef3f3d: je     0x140ef3f7b
0x00ef3f3f: cmp    eax,0x40000
0x00ef3f44: je     0x140ef3f66
0x00ef3f46: cmp    eax,0x80000
0x00ef3f4b: jne    0x140ef5c99
0x00ef3f51: mov    r8d,0x33
0x00ef3f57: lea    rdx,[rip+0x8602aa]        # 0x141754208 ; literal="the computation of the volume of different pyramids"
0x00ef3f5e: mov    rcx,r9
0x00ef3f61: jmp    0x140070e90
0x00ef3f66: mov    r8d,0x45
0x00ef3f6c: lea    rdx,[rip+0x86024d]        # 0x1417541c0 ; literal="an algorithm for computing the greatest common divisor of two numbers"
0x00ef3f73: mov    rcx,r9
0x00ef3f76: jmp    0x140070e90
0x00ef3f7b: mov    r8d,0x48
0x00ef3f81: lea    rdx,[rip+0x8602d8]        # 0x141754260 ; literal="the unique decomposition of a number into products of its prime divisors"
0x00ef3f88: mov    rcx,r9
0x00ef3f8b: jmp    0x140070e90
0x00ef3f90: mov    r8d,0x27
0x00ef3f96: lea    rdx,[rip+0x86075b]        # 0x1417546f8 ; literal="the computation of the volume of a cone"
0x00ef3f9d: mov    rcx,r9
0x00ef3fa0: jmp    0x140070e90
0x00ef3fa5: cmp    eax,0x200000
0x00ef3faa: je     0x140ef3fe8
0x00ef3fac: cmp    eax,0x400000
0x00ef3fb1: je     0x140ef3fd3
0x00ef3fb3: cmp    eax,0x800000
0x00ef3fb8: jne    0x140ef5c99
0x00ef3fbe: mov    r8d,0x50
0x00ef3fc4: lea    rdx,[rip+0x8606d5]        # 0x1417546a0 ; literal="an algorithm for dividing one number into another, possibly yielding a remainder"
0x00ef3fcb: mov    rcx,r9
0x00ef3fce: jmp    0x140070e90
0x00ef3fd3: mov    r8d,0x94
0x00ef3fd9: lea    rdx,[rip+0x860620]        # 0x141754600 ; literal="an approximate value of the ratio of the circumference of a circle to its diameter, using the circumference of polygons and the method of exhaustion"
0x00ef3fe0: mov    rcx,r9
0x00ef3fe3: jmp    0x140070e90
0x00ef3fe8: mov    r8d,0x29
0x00ef3fee: lea    rdx,[rip+0x86072b]        # 0x141754720 ; literal="the computation of the volume of a sphere"
0x00ef3ff5: mov    rcx,r9
0x00ef3ff8: jmp    0x140070e90
0x00ef3ffd: mov    r8d,0x29
0x00ef4003: lea    rdx,[rip+0x86056e]        # 0x141754578 ; literal="a table of chord lengths indexed by angle"
0x00ef400a: mov    rcx,r9
0x00ef400d: jmp    0x140070e90
0x00ef4012: cmp    eax,0x10000000
0x00ef4017: ja     0x140ef4088
0x00ef4019: je     0x140ef4073
0x00ef401b: cmp    eax,0x2000000
0x00ef4020: je     0x140ef405e
0x00ef4022: cmp    eax,0x4000000
0x00ef4027: je     0x140ef4049
0x00ef4029: cmp    eax,0x8000000
0x00ef402e: jne    0x140ef5c99
0x00ef4034: mov    r8d,0x87
0x00ef403a: lea    rdx,[rip+0x8604af]        # 0x1417544f0 ; literal="an approximation of the ratio of the circumference of a circle to its diameter, using the area of polygons and the method of exhaustion"
0x00ef4041: mov    rcx,r9
0x00ef4044: jmp    0x140070e90
0x00ef4049: mov    r8d,0x84
0x00ef404f: lea    rdx,[rip+0x86040a]        # 0x141754460 ; literal="the relationship between the area of a circle and its radius, involving the ratio of the circumference of the circle to its diameter"
0x00ef4056: mov    rcx,r9
0x00ef4059: jmp    0x140070e90
0x00ef405e: mov    r8d,0x4b
0x00ef4064: lea    rdx,[rip+0x860545]        # 0x1417545b0 ; literal="the computation of the area of a triangle from its three side lengths alone"
0x00ef406b: mov    rcx,r9
0x00ef406e: jmp    0x140070e90
0x00ef4073: mov    r8d,0x33
0x00ef4079: lea    rdx,[rip+0x860830]        # 0x1417548b0 ; literal="the categorization and properties of conic sections"
0x00ef4080: mov    rcx,r9
0x00ef4083: jmp    0x140070e90
0x00ef4088: cmp    eax,0x20000000
0x00ef408d: je     0x140ef40cb
0x00ef408f: cmp    eax,0x40000000
0x00ef4094: je     0x140ef40b6
0x00ef4096: cmp    eax,0x80000000
0x00ef409b: jne    0x140ef5c99
0x00ef40a1: mov    r8d,0x2a
0x00ef40a7: lea    rdx,[rip+0x8607d2]        # 0x141754880 ; literal="an algorithm for calculating prime numbers"
0x00ef40ae: mov    rcx,r9
0x00ef40b1: jmp    0x140070e90
0x00ef40b6: mov    r8d,0x2a
0x00ef40bc: lea    rdx,[rip+0x86078d]        # 0x141754850 ; literal="the area enclosed by a parabola and a line"
0x00ef40c3: mov    rcx,r9
0x00ef40c6: jmp    0x140070e90
0x00ef40cb: mov    r8d,0x63
0x00ef40d1: lea    rdx,[rip+0x860818]        # 0x1417548f0 ; literal="an algorithm for computing a number which has given remainders when divided by several given primes"
0x00ef40d8: mov    rcx,r9
0x00ef40db: jmp    0x140070e90
0x00ef40e0: mov    eax,DWORD PTR [rcx+0xc]
0x00ef40e3: cmp    eax,0x100
0x00ef40e8: ja     0x140ef41d0
0x00ef40ee: je     0x140ef41bb
0x00ef40f4: dec    eax
0x00ef40f6: cmp    eax,0x7f
0x00ef40f9: ja     0x140ef5c99
0x00ef40ff: movzx  eax,BYTE PTR [rdx+rax*1+0xef5e40]
0x00ef4107: mov    ecx,DWORD PTR [rdx+rax*4+0xef5e1c]
0x00ef410e: add    rcx,rdx
0x00ef4111: jmp    rcx
0x00ef4113: mov    r8d,0x3b
0x00ef4119: lea    rdx,[rip+0x8606b8]        # 0x1417547d8 ; literal="an approximation for the length of the diagonal of a square"
0x00ef4120: mov    rcx,r9
0x00ef4123: jmp    0x140070e90
0x00ef4128: mov    r8d,0x34
0x00ef412e: lea    rdx,[rip+0x8606e3]        # 0x141754818 ; literal="a proof that there are infinitely many prime numbers"
0x00ef4135: mov    rcx,r9
0x00ef4138: jmp    0x140070e90
0x00ef413d: mov    r8d,0x54
0x00ef4143: lea    rdx,[rip+0x860606]        # 0x141754750 ; literal="a proof that the length of the diagonal of a square is incommensurable with its edge"
0x00ef414a: mov    rcx,r9
0x00ef414d: jmp    0x140070e90
0x00ef4152: mov    r8d,0x2f
0x00ef4158: lea    rdx,[rip+0x860649]        # 0x1417547a8 ; literal="the computation of the surface area of a sphere"
0x00ef415f: mov    rcx,r9
0x00ef4162: jmp    0x140070e90
0x00ef4167: mov    r8d,0x32
0x00ef416d: lea    rdx,[rip+0x860a04]        # 0x141754b78 ; literal="simple formulas for certain arbitrarily large sums"
0x00ef4174: mov    rcx,r9
0x00ef4177: jmp    0x140070e90
0x00ef417c: mov    r8d,0x28
0x00ef4182: lea    rdx,[rip+0x860a27]        # 0x141754bb0 ; literal="methods for solving systems of equations"
0x00ef4189: mov    rcx,r9
0x00ef418c: jmp    0x140070e90
0x00ef4191: mov    r8d,0x40
0x00ef4197: lea    rdx,[rip+0x860952]        # 0x141754af0 ; literal="the techniques of balancing and completion for solving equations"
0x00ef419e: mov    rcx,r9
0x00ef41a1: jmp    0x140070e90
0x00ef41a6: mov    r8d,0x3e
0x00ef41ac: lea    rdx,[rip+0x860985]        # 0x141754b38 ; literal="the solving of quadratic equations by completion of the square"
0x00ef41b3: mov    rcx,r9
0x00ef41b6: jmp    0x140070e90
0x00ef41bb: mov    r8d,0x2a
0x00ef41c1: lea    rdx,[rip+0x860880]        # 0x141754a48 ; literal="a formula which solves quadratic equations"
0x00ef41c8: mov    rcx,r9
0x00ef41cb: jmp    0x140070e90
0x00ef41d0: cmp    eax,0x2000
0x00ef41d5: ja     0x140ef4266
0x00ef41db: je     0x140ef4251
0x00ef41dd: cmp    eax,0x200
0x00ef41e2: je     0x140ef423c
0x00ef41e4: cmp    eax,0x400
0x00ef41e9: je     0x140ef4227
0x00ef41eb: cmp    eax,0x800
0x00ef41f0: je     0x140ef4212
0x00ef41f2: cmp    eax,0x1000
0x00ef41f7: jne    0x140ef5c99
0x00ef41fd: mov    r8d,0x52
0x00ef4203: lea    rdx,[rip+0x860ad6]        # 0x141754ce0 ; literal="a triangular configuration of numbers relating to the successive powers of any sum"
0x00ef420a: mov    rcx,r9
0x00ef420d: jmp    0x140070e90
0x00ef4212: mov    r8d,0x47
0x00ef4218: lea    rdx,[rip+0x8607e1]        # 0x141754a00 ; literal="trigonometric identities relating to the sums and differences of angles"
0x00ef421f: mov    rcx,r9
0x00ef4222: jmp    0x140070e90
0x00ef4227: mov    r8d,0x93
0x00ef422d: lea    rdx,[rip+0x86072c]        # 0x141754960 ; literal="the relationship between the half chords of a triangle's angles, the opposite side lengths, and the diameter of the triangle's circumscribed circle"
0x00ef4234: mov    rcx,r9
0x00ef4237: jmp    0x140070e90
0x00ef423c: mov    r8d,0x6a
0x00ef4242: lea    rdx,[rip+0x860837]        # 0x141754a80 ; literal="notation for abbreviating the unknown and other elements of an equation in a systematic and useful fashion"
0x00ef4249: mov    rcx,r9
0x00ef424c: jmp    0x140070e90
0x00ef4251: mov    r8d,0x50
0x00ef4257: lea    rdx,[rip+0x860ae2]        # 0x141754d40 ; literal="methods for solving certain equations involving powers higher than the quadratic"
0x00ef425e: mov    rcx,r9
0x00ef4261: jmp    0x140070e90
0x00ef4266: cmp    eax,0x4000
0x00ef426b: je     0x140ef42a9
0x00ef426d: cmp    eax,0x8000
0x00ef4272: je     0x140ef4294
0x00ef4274: cmp    eax,0x10000
0x00ef4279: jne    0x140ef5c99
0x00ef427f: mov    r8d,0x18
0x00ef4285: lea    rdx,[rip+0x8609b4]        # 0x141754c40 ; literal="the properties of chords"
0x00ef428c: mov    rcx,r9
0x00ef428f: jmp    0x140070e90
0x00ef4294: mov    r8d,0x25
0x00ef429a: lea    rdx,[rip+0x860a0f]        # 0x141754cb0 ; literal="the divergence of the harmonic series"
0x00ef42a1: mov    rcx,r9
0x00ef42a4: jmp    0x140070e90
0x00ef42a9: mov    r8d,0x2f
0x00ef42af: lea    rdx,[rip+0x8609ca]        # 0x141754c80 ; literal="experiments with symbolic notation for addition"
0x00ef42b6: mov    rcx,r9
0x00ef42b9: jmp    0x140070e90
0x00ef42be: mov    eax,DWORD PTR [rcx+0xc]
0x00ef42c1: cmp    eax,0x400
0x00ef42c6: ja     0x140ef4401
0x00ef42cc: je     0x140ef43ec
0x00ef42d2: cmp    eax,0x20
0x00ef42d5: ja     0x140ef437c
0x00ef42db: je     0x140ef4367
0x00ef42e1: sub    eax,0x1
0x00ef42e4: je     0x140ef4352
0x00ef42e6: sub    eax,0x1
0x00ef42e9: je     0x140ef433d
0x00ef42eb: sub    eax,0x2
0x00ef42ee: je     0x140ef4328
0x00ef42f0: sub    eax,0x4
0x00ef42f3: je     0x140ef4313
0x00ef42f5: cmp    eax,0x8
0x00ef42f8: jne    0x140ef5c99
0x00ef42fe: mov    r8d,0x1f
0x00ef4304: lea    rdx,[rip+0x860c3d]        # 0x141754f48 ; literal="the causes of historical events"
0x00ef430b: mov    rcx,r9
0x00ef430e: jmp    0x140070e90
0x00ef4313: mov    r8d,0x24
0x00ef4319: lea    rdx,[rip+0x860c00]        # 0x141754f20 ; literal="using personal interviews as sources"
0x00ef4320: mov    rcx,r9
0x00ef4323: jmp    0x140070e90
0x00ef4328: mov    r8d,0x30
0x00ef432e: lea    rdx,[rip+0x8608d3]        # 0x141754c08 ; literal="the role of state bias and propaganda in sources"
0x00ef4335: mov    rcx,r9
0x00ef4338: jmp    0x140070e90
0x00ef433d: mov    r8d,0x24
0x00ef4343: lea    rdx,[rip+0x860896]        # 0x141754be0 ; literal="the role of systemic bias in sources"
0x00ef434a: mov    rcx,r9
0x00ef434d: jmp    0x140070e90
0x00ef4352: mov    r8d,0x1a
0x00ef4358: lea    rdx,[rip+0x860901]        # 0x141754c60 ; literal="the reliability of sources"
0x00ef435f: mov    rcx,r9
0x00ef4362: jmp    0x140070e90
0x00ef4367: mov    r8d,0x2a
0x00ef436d: lea    rdx,[rip+0x860b54]        # 0x141754ec8 ; literal="historical, governmental and social cycles"
0x00ef4374: mov    rcx,r9
0x00ef4377: jmp    0x140070e90
0x00ef437c: sub    eax,0x40
0x00ef437f: je     0x140ef43d7
0x00ef4381: sub    eax,0x40
0x00ef4384: je     0x140ef43c2
0x00ef4386: sub    eax,0x80
0x00ef438b: je     0x140ef43ad
0x00ef438d: cmp    eax,0x100
0x00ef4392: jne    0x140ef5c99
0x00ef4398: mov    r8d,0x7c
0x00ef439e: lea    rdx,[rip+0x8609fb]        # 0x141754da0 ; literal="the method of compiling several biographies to compare and contrast the subjects' character and to gain insight into history"
0x00ef43a5: mov    rcx,r9
0x00ef43a8: jmp    0x140070e90
0x00ef43ad: mov    r8d,0x38
0x00ef43b3: lea    rdx,[rip+0x860ace]        # 0x141754e88 ; literal="the method of writing the history of a single individual"
0x00ef43ba: mov    rcx,r9
0x00ef43bd: jmp    0x140070e90
0x00ef43c2: mov    r8d,0x27
0x00ef43c8: lea    rdx,[rip+0x860a91]        # 0x141754e60 ; literal="conflict between members of a community"
0x00ef43cf: mov    rcx,r9
0x00ef43d2: jmp    0x140070e90
0x00ef43d7: mov    r8d,0x24
0x00ef43dd: lea    rdx,[rip+0x860b14]        # 0x141754ef8 ; literal="bonds between members of a community"
0x00ef43e4: mov    rcx,r9
0x00ef43e7: jmp    0x140070e90
0x00ef43ec: mov    r8d,0x3e
0x00ef43f2: lea    rdx,[rip+0x860a27]        # 0x141754e20 ; literal="the compilation of brief biographies into one large collection"
0x00ef43f9: mov    rcx,r9
0x00ef43fc: jmp    0x140070e90
0x00ef4401: cmp    eax,0x8000
0x00ef4406: ja     0x140ef4497
0x00ef440c: je     0x140ef4482
0x00ef440e: cmp    eax,0x800
0x00ef4413: je     0x140ef446d
0x00ef4415: cmp    eax,0x1000
0x00ef441a: je     0x140ef4458
0x00ef441c: cmp    eax,0x2000
0x00ef4421: je     0x140ef4443
0x00ef4423: cmp    eax,0x4000
0x00ef4428: jne    0x140ef5c99
0x00ef442e: mov    r8d,0x52
0x00ef4434: lea    rdx,[rip+0x85ee55]        # 0x141753290 ; literal="the method of accurately and comprehensively describing cultures and civilizations"
0x00ef443b: mov    rcx,r9
0x00ef443e: jmp    0x140070e90
0x00ef4443: mov    r8d,0x34
0x00ef4449: lea    rdx,[rip+0x85ee00]        # 0x141753250 ; literal="the compilation of many summaries into a single text"
0x00ef4450: mov    rcx,r9
0x00ef4453: jmp    0x140070e90
0x00ef4458: mov    r8d,0x4a
0x00ef445e: lea    rdx,[rip+0x85eefb]        # 0x141753360 ; literal="the compilation of family lineages and methods of displaying them artfully"
0x00ef4465: mov    rcx,r9
0x00ef4468: jmp    0x140070e90
0x00ef446d: mov    r8d,0x6a
0x00ef4473: lea    rdx,[rip+0x85ee76]        # 0x1417532f0 ; literal="the method of writing a biography of oneself, particularly as it concerns a military campaign or adventure"
0x00ef447a: mov    rcx,r9
0x00ef447d: jmp    0x140070e90
0x00ef4482: mov    r8d,0x3a
0x00ef4488: lea    rdx,[rip+0x85ed29]        # 0x1417531b8 ; literal="the method of comparing and contrasting different cultures"
0x00ef448f: mov    rcx,r9
0x00ef4492: jmp    0x140070e90
0x00ef4497: cmp    eax,0x10000
0x00ef449c: je     0x140ef44f6
0x00ef449e: cmp    eax,0x20000
0x00ef44a3: je     0x140ef44e1
0x00ef44a5: cmp    eax,0x40000
0x00ef44aa: je     0x140ef44cc
0x00ef44ac: cmp    eax,0x80000
0x00ef44b1: jne    0x140ef5c99
0x00ef44b7: mov    r8d,0x54
0x00ef44bd: lea    rdx,[rip+0x85effc]        # 0x1417534c0 ; literal="the method of examining artifacts to determine how techniques have changed over time"
0x00ef44c4: mov    rcx,r9
0x00ef44c7: jmp    0x140070e90
0x00ef44cc: mov    r8d,0x54
0x00ef44d2: lea    rdx,[rip+0x85ec87]        # 0x141753160 ; literal="the method of collecting and evaluating artifacts to learn about history and culture"
0x00ef44d9: mov    rcx,r9
0x00ef44dc: jmp    0x140070e90
0x00ef44e1: mov    r8d,0x64
0x00ef44e7: lea    rdx,[rip+0x85ec02]        # 0x1417530f0 ; literal="the exploration of how history would be different if some key past events had transpired differently"
0x00ef44ee: mov    rcx,r9
0x00ef44f1: jmp    0x140070e90
0x00ef44f6: mov    r8d,0x49
0x00ef44fc: lea    rdx,[rip+0x85ecfd]        # 0x141753200 ; literal="the role of cultural differences in source reliability and interpretation"
0x00ef4503: mov    rcx,r9
0x00ef4506: jmp    0x140070e90
0x00ef450b: mov    eax,DWORD PTR [rcx+0xc]
0x00ef450e: cmp    eax,0x400
0x00ef4513: ja     0x140ef464e
0x00ef4519: je     0x140ef4639
0x00ef451f: cmp    eax,0x20
0x00ef4522: ja     0x140ef45c9
0x00ef4528: je     0x140ef45b4
0x00ef452e: sub    eax,0x1
0x00ef4531: je     0x140ef459f
0x00ef4533: sub    eax,0x1
0x00ef4536: je     0x140ef458a
0x00ef4538: sub    eax,0x2
0x00ef453b: je     0x140ef4575
0x00ef453d: sub    eax,0x4
0x00ef4540: je     0x140ef4560
0x00ef4542: cmp    eax,0x8
0x00ef4545: jne    0x140ef5c99
0x00ef454b: mov    r8d,0x2d
0x00ef4551: lea    rdx,[rip+0x85eef0]        # 0x141753448 ; literal="the height of the tides, the moon and the sun"
0x00ef4558: mov    rcx,r9
0x00ef455b: jmp    0x140070e90
0x00ef4560: mov    r8d,0x2f
0x00ef4566: lea    rdx,[rip+0x85eeab]        # 0x141753418 ; literal="the relationship between the moon and the tides"
0x00ef456d: mov    rcx,r9
0x00ef4570: jmp    0x140070e90
0x00ef4575: mov    r8d,0x14
0x00ef457b: lea    rdx,[rip+0x85ef26]        # 0x1417534a8 ; literal="the path of the moon"
0x00ef4582: mov    rcx,r9
0x00ef4585: jmp    0x140070e90
0x00ef458a: mov    r8d,0x2c
0x00ef4590: lea    rdx,[rip+0x85eee1]        # 0x141753478 ; literal="the rise of the moon according to the season"
0x00ef4597: mov    rcx,r9
0x00ef459a: jmp    0x140070e90
0x00ef459f: mov    r8d,0x16
0x00ef45a5: lea    rdx,[rip+0x85ef6c]        # 0x141753518 ; literal="the phases of the moon"
0x00ef45ac: mov    rcx,r9
0x00ef45af: jmp    0x140070e90
0x00ef45b4: lea    rdx,[rip+0x85edf5]        # 0x1417533b0 ; literal="the rise of the sun according to the season"
0x00ef45bb: mov    r8d,0x2b
0x00ef45c1: mov    rcx,r9
0x00ef45c4: jmp    0x140070e90
0x00ef45c9: sub    eax,0x40
0x00ef45cc: je     0x140ef4624
0x00ef45ce: sub    eax,0x40
0x00ef45d1: je     0x140ef460f
0x00ef45d3: sub    eax,0x80
0x00ef45d8: je     0x140ef45fa
0x00ef45da: cmp    eax,0x100
0x00ef45df: jne    0x140ef5c99
0x00ef45e5: mov    r8d,0x2e
0x00ef45eb: lea    rdx,[rip+0x85eff6]        # 0x1417535e8 ; literal="the theory that the world moves around the sun"
0x00ef45f2: mov    rcx,r9
0x00ef45f5: jmp    0x140070e90
0x00ef45fa: mov    r8d,0x2e
0x00ef4600: lea    rdx,[rip+0x85f069]        # 0x141753670 ; literal="the theory that the sun moves around the world"
0x00ef4607: mov    rcx,r9
0x00ef460a: jmp    0x140070e90
0x00ef460f: mov    r8d,0x29
0x00ef4615: lea    rdx,[rip+0x85f024]        # 0x141753640 ; literal="the variation of daylight with the season"
0x00ef461c: mov    rcx,r9
0x00ef461f: jmp    0x140070e90
0x00ef4624: mov    r8d,0x31
0x00ef462a: lea    rdx,[rip+0x85edaf]        # 0x1417533e0 ; literal="the relationship between the lunar and solar year"
0x00ef4631: mov    rcx,r9
0x00ef4634: jmp    0x140070e90
0x00ef4639: mov    r8d,0x25
0x00ef463f: lea    rdx,[rip+0x85efd2]        # 0x141753618 ; literal="the dates of lunar and solar eclipses"
0x00ef4646: mov    rcx,r9
0x00ef4649: jmp    0x140070e90
0x00ef464e: cmp    eax,0x8000
0x00ef4653: ja     0x140ef46e4
0x00ef4659: je     0x140ef46cf
0x00ef465b: cmp    eax,0x800
0x00ef4660: je     0x140ef46ba
0x00ef4662: cmp    eax,0x1000
0x00ef4667: je     0x140ef46a5
0x00ef4669: cmp    eax,0x2000
0x00ef466e: je     0x140ef4690
0x00ef4670: cmp    eax,0x4000
0x00ef4675: jne    0x140ef5c99
0x00ef467b: mov    r8d,0x2e
0x00ef4681: lea    rdx,[rip+0x85eee0]        # 0x141753568 ; literal="the classification of stars according to color"
0x00ef4688: mov    rcx,r9
0x00ef468b: jmp    0x140070e90
0x00ef4690: mov    r8d,0x32
0x00ef4696: lea    rdx,[rip+0x85ee93]        # 0x141753530 ; literal="the precise compilation of information about stars"
0x00ef469d: mov    rcx,r9
0x00ef46a0: jmp    0x140070e90
0x00ef46a5: mov    r8d,0x2a
0x00ef46ab: lea    rdx,[rip+0x85ef06]        # 0x1417535b8 ; literal="the compilation of information about stars"
0x00ef46b2: mov    rcx,r9
0x00ef46b5: jmp    0x140070e90
0x00ef46ba: mov    r8d,0x1b
0x00ef46c0: lea    rdx,[rip+0x85eed1]        # 0x141753598 ; literal="the creation of star charts"
0x00ef46c7: mov    rcx,r9
0x00ef46ca: jmp    0x140070e90
0x00ef46cf: mov    r8d,0x33
0x00ef46d5: lea    rdx,[rip+0x85f104]        # 0x1417537e0 ; literal="the classification of stars according to brightness"
0x00ef46dc: mov    rcx,r9
0x00ef46df: jmp    0x140070e90
0x00ef46e4: cmp    eax,0x10000
0x00ef46e9: je     0x140ef4743
0x00ef46eb: cmp    eax,0x20000
0x00ef46f0: je     0x140ef472e
0x00ef46f2: cmp    eax,0x40000
0x00ef46f7: je     0x140ef4719
0x00ef46f9: cmp    eax,0x80000
0x00ef46fe: jne    0x140ef5c99
0x00ef4704: mov    r8d,0x4a
0x00ef470a: lea    rdx,[rip+0x85efef]        # 0x141753700 ; literal="the method of forming precise models for the paths of astronomical objects"
0x00ef4711: mov    rcx,r9
0x00ef4714: jmp    0x140070e90
0x00ef4719: mov    r8d,0x2d
0x00ef471f: lea    rdx,[rip+0x85f08a]        # 0x1417537b0 ; literal="methods of empirical observation in astronomy"
0x00ef4726: mov    rcx,r9
0x00ef4729: jmp    0x140070e90
0x00ef472e: mov    r8d,0x3a
0x00ef4734: lea    rdx,[rip+0x85f035]        # 0x141753770 ; literal="the precession of the equinoxes over great periods of time"
0x00ef473b: mov    rcx,r9
0x00ef473e: jmp    0x140070e90
0x00ef4743: mov    r8d,0x16
0x00ef4749: lea    rdx,[rip+0x85f0c8]        # 0x141753818 ; literal="the shape of the world"
0x00ef4750: mov    rcx,r9
0x00ef4753: jmp    0x140070e90
0x00ef4758: mov    eax,DWORD PTR [rcx+0xc]
0x00ef475b: cmp    eax,0x40
0x00ef475e: ja     0x140ef481c
0x00ef4764: je     0x140ef4807
0x00ef476a: dec    eax
0x00ef476c: cmp    eax,0x1f
0x00ef476f: ja     0x140ef5c99
0x00ef4775: movzx  eax,BYTE PTR [rdx+rax*1+0xef5edc]
0x00ef477d: mov    ecx,DWORD PTR [rdx+rax*4+0xef5ec0]
0x00ef4784: add    rcx,rdx
0x00ef4787: jmp    rcx
0x00ef4789: mov    r8d,0x1b
0x00ef478f: lea    rdx,[rip+0x85efba]        # 0x141753750 ; literal="the dissection of creatures"
0x00ef4796: mov    rcx,r9
0x00ef4799: jmp    0x140070e90
0x00ef479e: mov    r8d,0x21
0x00ef47a4: lea    rdx,[rip+0x85eef5]        # 0x1417536a0 ; literal="the anatomical study of creatures"
0x00ef47ab: mov    rcx,r9
0x00ef47ae: jmp    0x140070e90
0x00ef47b3: mov    r8d,0x2a
0x00ef47b9: lea    rdx,[rip+0x85ef08]        # 0x1417536c8 ; literal="the comparison of the anatomy of creatures"
0x00ef47c0: mov    rcx,r9
0x00ef47c3: jmp    0x140070e90
0x00ef47c8: mov    r8d,0x3a
0x00ef47ce: lea    rdx,[rip+0x85f17b]        # 0x141753950 ; literal="the classification of creatures by their physical features"
0x00ef47d5: mov    rcx,r9
0x00ef47d8: jmp    0x140070e90
0x00ef47dd: mov    r8d,0x23
0x00ef47e3: lea    rdx,[rip+0x85f1a6]        # 0x141753990 ; literal="the migratory patterns of creatures"
0x00ef47ea: mov    rcx,r9
0x00ef47ed: jmp    0x140070e90
0x00ef47f2: mov    r8d,0x26
0x00ef47f8: lea    rdx,[rip+0x85f0f9]        # 0x1417538f8 ; literal="the reproductive behavior of creatures"
0x00ef47ff: mov    rcx,r9
0x00ef4802: jmp    0x140070e90
0x00ef4807: lea    rdx,[rip+0x85f112]        # 0x141753920 ; literal="the foraging behavior and diet of creatures"
0x00ef480e: mov    r8d,0x2b
0x00ef4814: mov    rcx,r9
0x00ef4817: jmp    0x140070e90
0x00ef481c: cmp    eax,0x400
0x00ef4821: ja     0x140ef4892
0x00ef4823: je     0x140ef487d
0x00ef4825: cmp    eax,0x80
0x00ef482a: je     0x140ef4868
0x00ef482c: cmp    eax,0x100
0x00ef4831: je     0x140ef4853
0x00ef4833: cmp    eax,0x200
0x00ef4838: jne    0x140ef5c99
0x00ef483e: mov    r8d,0x19
0x00ef4844: lea    rdx,[rip+0x85efe5]        # 0x141753830 ; literal="the diseases of creatures"
0x00ef484b: mov    rcx,r9
0x00ef484e: jmp    0x140070e90
0x00ef4853: mov    r8d,0x20
0x00ef4859: lea    rdx,[rip+0x85f070]        # 0x1417538d0 ; literal="the social behavior of creatures"
0x00ef4860: mov    rcx,r9
0x00ef4863: jmp    0x140070e90
0x00ef4868: mov    r8d,0x32
0x00ef486e: lea    rdx,[rip+0x85f023]        # 0x141753898 ; literal="the links between the diets of different creatures"
0x00ef4875: mov    rcx,r9
0x00ef4878: jmp    0x140070e90
0x00ef487d: mov    r8d,0x45
0x00ef4883: lea    rdx,[rip+0x85efc6]        # 0x141753850 ; literal="the ways that creatures are suited to the climates in which they live"
0x00ef488a: mov    rcx,r9
0x00ef488d: jmp    0x140070e90
0x00ef4892: cmp    eax,0x800
0x00ef4897: je     0x140ef48b9
0x00ef4899: cmp    eax,0x1000
0x00ef489e: jne    0x140ef5c99
0x00ef48a4: mov    r8d,0x29
0x00ef48aa: lea    rdx,[rip+0x85f297]        # 0x141753b48 ; literal="the struggle for survival among creatures"
0x00ef48b1: mov    rcx,r9
0x00ef48b4: jmp    0x140070e90
0x00ef48b9: mov    r8d,0x2a
0x00ef48bf: lea    rdx,[rip+0x85f252]        # 0x141753b18 ; literal="the embriological development of creatures"
0x00ef48c6: mov    rcx,r9
0x00ef48c9: jmp    0x140070e90
0x00ef48ce: mov    eax,DWORD PTR [rcx+0xc]
0x00ef48d1: cmp    eax,0x1000
0x00ef48d6: ja     0x140ef4a48
0x00ef48dc: je     0x140ef4a33
0x00ef48e2: cmp    eax,0x40
0x00ef48e5: ja     0x140ef49a3
0x00ef48eb: je     0x140ef498e
0x00ef48f1: dec    eax
0x00ef48f3: cmp    eax,0x1f
0x00ef48f6: ja     0x140ef5c99
0x00ef48fc: movzx  eax,BYTE PTR [rdx+rax*1+0xef5f18]
0x00ef4904: mov    ecx,DWORD PTR [rdx+rax*4+0xef5efc]
0x00ef490b: add    rcx,rdx
0x00ef490e: jmp    rcx
0x00ef4910: lea    rdx,[rip+0x85f1b1]        # 0x141753ac8 ; literal="the classification of combustible materials"
0x00ef4917: mov    r8d,0x2b
0x00ef491d: mov    rcx,r9
0x00ef4920: jmp    0x140070e90
0x00ef4925: mov    r8d,0x1a
0x00ef492b: lea    rdx,[rip+0x85f1c6]        # 0x141753af8 ; literal="the classification of ores"
0x00ef4932: mov    rcx,r9
0x00ef4935: jmp    0x140070e90
0x00ef493a: mov    r8d,0x27
0x00ef4940: lea    rdx,[rip+0x85f101]        # 0x141753a48 ; literal="the mixture of metals to produce alloys"
0x00ef4947: mov    rcx,r9
0x00ef494a: jmp    0x140070e90
0x00ef494f: mov    r8d,0x54
0x00ef4955: lea    rdx,[rip+0x85f114]        # 0x141753a70 ; literal="a method of classify the hardness of materials by scratching them against each other"
0x00ef495c: mov    rcx,r9
0x00ef495f: jmp    0x140070e90
0x00ef4964: mov    r8d,0x52
0x00ef496a: lea    rdx,[rip+0x85f04f]        # 0x1417539c0 ; literal="the classification of materials based on which elemental materials might form them"
0x00ef4971: mov    rcx,r9
0x00ef4974: jmp    0x140070e90
0x00ef4979: mov    r8d,0x2d
0x00ef497f: lea    rdx,[rip+0x85f092]        # 0x141753a18 ; literal="the preparation and use of adhesive materials"
0x00ef4986: mov    rcx,r9
0x00ef4989: jmp    0x140070e90
0x00ef498e: mov    r8d,0x2d
0x00ef4994: lea    rdx,[rip+0x85f34d]        # 0x141753ce8 ; literal="the construction and use of the blast furnace"
0x00ef499b: mov    rcx,r9
0x00ef499e: jmp    0x140070e90
0x00ef49a3: cmp    eax,0x80
0x00ef49a8: je     0x140ef4a1e
0x00ef49aa: cmp    eax,0x100
0x00ef49af: je     0x140ef4a09
0x00ef49b1: cmp    eax,0x200
0x00ef49b6: je     0x140ef49f4
0x00ef49b8: cmp    eax,0x400
0x00ef49bd: je     0x140ef49df
0x00ef49bf: cmp    eax,0x800
0x00ef49c4: jne    0x140ef5c99
0x00ef49ca: mov    r8d,0x26
0x00ef49d0: lea    rdx,[rip+0x85f249]        # 0x141753c20 ; literal="the classification of alkali and acids"
0x00ef49d7: mov    rcx,r9
0x00ef49da: jmp    0x140070e90
0x00ef49df: mov    r8d,0x2e
0x00ef49e5: lea    rdx,[rip+0x85f204]        # 0x141753bf0 ; literal="the theory and methods involved in evaporation"
0x00ef49ec: mov    rcx,r9
0x00ef49ef: jmp    0x140070e90
0x00ef49f4: mov    r8d,0x2f
0x00ef49fa: lea    rdx,[rip+0x85f2b7]        # 0x141753cb8 ; literal="the theory and methods involved in distillation"
0x00ef4a01: mov    rcx,r9
0x00ef4a04: jmp    0x140070e90
0x00ef4a09: mov    r8d,0x66
0x00ef4a0f: lea    rdx,[rip+0x85f23a]        # 0x141753c50 ; literal="the theory and methods involved in the extraction of a constituent liquid from one solution to another"
0x00ef4a16: mov    rcx,r9
0x00ef4a19: jmp    0x140070e90
0x00ef4a1e: mov    r8d,0x27
0x00ef4a24: lea    rdx,[rip+0x85f2ed]        # 0x141753d18 ; literal="the construction and use of the alembic"
0x00ef4a2b: mov    rcx,r9
0x00ef4a2e: jmp    0x140070e90
0x00ef4a33: mov    r8d,0x43
0x00ef4a39: lea    rdx,[rip+0x85f140]        # 0x141753b80 ; literal="methods for performing experiments systematically in the laboratory"
0x00ef4a40: mov    rcx,r9
0x00ef4a43: jmp    0x140070e90
0x00ef4a48: cmp    eax,0x40000
0x00ef4a4d: ja     0x140ef4afe
0x00ef4a53: je     0x140ef4ae9
0x00ef4a59: cmp    eax,0x2000
0x00ef4a5e: je     0x140ef4ad4
0x00ef4a60: cmp    eax,0x4000
0x00ef4a65: je     0x140ef4abf
0x00ef4a67: cmp    eax,0x8000
0x00ef4a6c: je     0x140ef4aaa
0x00ef4a6e: cmp    eax,0x10000
0x00ef4a73: je     0x140ef4a95
0x00ef4a75: cmp    eax,0x20000
0x00ef4a7a: jne    0x140ef5c99
0x00ef4a80: mov    r8d,0x28
0x00ef4a86: lea    rdx,[rip+0x85f373]        # 0x141753e00 ; literal="the construction and use of the crucible"
0x00ef4a8d: mov    rcx,r9
0x00ef4a90: jmp    0x140070e90
0x00ef4a95: mov    r8d,0x26
0x00ef4a9b: lea    rdx,[rip+0x85f336]        # 0x141753dd8 ; literal="the construction and use of the funnel"
0x00ef4aa2: mov    rcx,r9
0x00ef4aa5: jmp    0x140070e90
0x00ef4aaa: mov    r8d,0x24
0x00ef4ab0: lea    rdx,[rip+0x85f3a1]        # 0x141753e58 ; literal="the construction and use of the vial"
0x00ef4ab7: mov    rcx,r9
0x00ef4aba: jmp    0x140070e90
0x00ef4abf: mov    r8d,0x26
0x00ef4ac5: lea    rdx,[rip+0x85f364]        # 0x141753e30 ; literal="the construction and use of the beaker"
0x00ef4acc: mov    rcx,r9
0x00ef4acf: jmp    0x140070e90
0x00ef4ad4: mov    r8d,0x25
0x00ef4ada: lea    rdx,[rip+0x85f0e7]        # 0x141753bc8 ; literal="the construction and use of the flask"
0x00ef4ae1: mov    rcx,r9
0x00ef4ae4: jmp    0x140070e90
0x00ef4ae9: mov    r8d,0x22
0x00ef4aef: lea    rdx,[rip+0x85f292]        # 0x141753d88 ; literal="the preparation of spirit of niter"
0x00ef4af6: mov    rcx,r9
0x00ef4af9: jmp    0x140070e90
0x00ef4afe: cmp    eax,0x80000
0x00ef4b03: je     0x140ef4b79
0x00ef4b05: cmp    eax,0x100000
0x00ef4b0a: je     0x140ef4b64
0x00ef4b0c: cmp    eax,0x200000
0x00ef4b11: je     0x140ef4b4f
0x00ef4b13: cmp    eax,0x400000
0x00ef4b18: je     0x140ef4b3a
0x00ef4b1a: cmp    eax,0x800000
0x00ef4b1f: jne    0x140ef5c99
0x00ef4b25: mov    r8d,0x2c
0x00ef4b2b: lea    rdx,[rip+0x8610c6]        # 0x141755bf8 ; literal="the construction and use of laboratory ovens"
0x00ef4b32: mov    rcx,r9
0x00ef4b35: jmp    0x140070e90
0x00ef4b3a: mov    r8d,0x26
0x00ef4b40: lea    rdx,[rip+0x861089]        # 0x141755bd0 ; literal="the construction and use of the retort"
0x00ef4b47: mov    rcx,r9
0x00ef4b4a: jmp    0x140070e90
0x00ef4b4f: mov    r8d,0x27
0x00ef4b55: lea    rdx,[rip+0x85f204]        # 0x141753d60 ; literal="the construction and use of the ampoule"
0x00ef4b5c: mov    rcx,r9
0x00ef4b5f: jmp    0x140070e90
0x00ef4b64: mov    r8d,0x1d
0x00ef4b6a: lea    rdx,[rip+0x85f1cf]        # 0x141753d40 ; literal="the preparation of aqua regia"
0x00ef4b71: mov    rcx,r9
0x00ef4b74: jmp    0x140070e90
0x00ef4b79: mov    r8d,0x21
0x00ef4b7f: lea    rdx,[rip+0x85f22a]        # 0x141753db0 ; literal="the preparation of oil of vitriol"
0x00ef4b86: mov    rcx,r9
0x00ef4b89: jmp    0x140070e90
0x00ef4b8e: mov    eax,DWORD PTR [rcx+0xc]
0x00ef4b91: cmp    eax,0x800
0x00ef4b96: ja     0x140ef4ced
0x00ef4b9c: je     0x140ef4cd8
0x00ef4ba2: cmp    eax,0x20
0x00ef4ba5: ja     0x140ef4c4c
0x00ef4bab: je     0x140ef4c37
0x00ef4bb1: sub    eax,0x1
0x00ef4bb4: je     0x140ef4c22
0x00ef4bb6: sub    eax,0x1
0x00ef4bb9: je     0x140ef4c0d
0x00ef4bbb: sub    eax,0x2
0x00ef4bbe: je     0x140ef4bf8
0x00ef4bc0: sub    eax,0x4
0x00ef4bc3: je     0x140ef4be3
0x00ef4bc5: cmp    eax,0x8
0x00ef4bc8: jne    0x140ef5c99
0x00ef4bce: mov    r8d,0x3b
0x00ef4bd4: lea    rdx,[rip+0x860edd]        # 0x141755ab8 ; literal="surveying by triangulation for the purpose of creating maps"
0x00ef4bdb: mov    rcx,r9
0x00ef4bde: jmp    0x140070e90
0x00ef4be3: mov    r8d,0x1a
0x00ef4be9: lea    rdx,[rip+0x860f70]        # 0x141755b60 ; literal="surveying by triangulation"
0x00ef4bf0: mov    rcx,r9
0x00ef4bf3: jmp    0x140070e90
0x00ef4bf8: mov    r8d,0x25
0x00ef4bfe: lea    rdx,[rip+0x860f33]        # 0x141755b38 ; literal="the process involved in creating maps"
0x00ef4c05: mov    rcx,r9
0x00ef4c08: jmp    0x140070e90
0x00ef4c0d: mov    r8d,0x2f
0x00ef4c13: lea    rdx,[rip+0x860f86]        # 0x141755ba0 ; literal="the construction and use of the surveying staff"
0x00ef4c1a: mov    rcx,r9
0x00ef4c1d: jmp    0x140070e90
0x00ef4c22: mov    r8d,0x1d
0x00ef4c28: lea    rdx,[rip+0x860f51]        # 0x141755b80 ; literal="the process of surveying land"
0x00ef4c2f: mov    rcx,r9
0x00ef4c32: jmp    0x140070e90
0x00ef4c37: mov    r8d,0x3d
0x00ef4c3d: lea    rdx,[rip+0x860eb4]        # 0x141755af8 ; literal="surveying by triangulation for the purpose of allocating land"
0x00ef4c44: mov    rcx,r9
0x00ef4c47: jmp    0x140070e90
0x00ef4c4c: sub    eax,0x40
0x00ef4c4f: je     0x140ef4cc3
0x00ef4c51: sub    eax,0x40
0x00ef4c54: je     0x140ef4cae
0x00ef4c56: sub    eax,0x80
0x00ef4c5b: je     0x140ef4c99
0x00ef4c5d: sub    eax,0x100
0x00ef4c62: je     0x140ef4c84
0x00ef4c64: cmp    eax,0x200
0x00ef4c69: jne    0x140ef5c99
0x00ef4c6f: mov    r8d,0x33
0x00ef4c75: lea    rdx,[rip+0x861004]        # 0x141755c80 ; literal="the use of a distance scale in the creation of maps"
0x00ef4c7c: mov    rcx,r9
0x00ef4c7f: jmp    0x140070e90
0x00ef4c84: mov    r8d,0x30
0x00ef4c8a: lea    rdx,[rip+0x861087]        # 0x141755d18 ; literal="the use of a grid system in the creation of maps"
0x00ef4c91: mov    rcx,r9
0x00ef4c94: jmp    0x140070e90
0x00ef4c99: mov    r8d,0x2f
0x00ef4c9f: lea    rdx,[rip+0x861042]        # 0x141755ce8 ; literal="the placement of geological information on maps"
0x00ef4ca6: mov    rcx,r9
0x00ef4ca9: jmp    0x140070e90
0x00ef4cae: mov    r8d,0x33
0x00ef4cb4: lea    rdx,[rip+0x8610cd]        # 0x141755d88 ; literal="surveying by triangulation for engineering projects"
0x00ef4cbb: mov    rcx,r9
0x00ef4cbe: jmp    0x140070e90
0x00ef4cc3: mov    r8d,0x30
0x00ef4cc9: lea    rdx,[rip+0x861080]        # 0x141755d50 ; literal="surveying by triangulation for military purposes"
0x00ef4cd0: mov    rcx,r9
0x00ef4cd3: jmp    0x140070e90
0x00ef4cd8: mov    r8d,0x2f
0x00ef4cde: lea    rdx,[rip+0x860fd3]        # 0x141755cb8 ; literal="the measurement of the heights of land features"
0x00ef4ce5: mov    rcx,r9
0x00ef4ce8: jmp    0x140070e90
0x00ef4ced: cmp    eax,0x20000
0x00ef4cf2: ja     0x140ef4da3
0x00ef4cf8: je     0x140ef4d8e
0x00ef4cfe: cmp    eax,0x1000
0x00ef4d03: je     0x140ef4d79
0x00ef4d05: cmp    eax,0x2000
0x00ef4d0a: je     0x140ef4d64
0x00ef4d0c: cmp    eax,0x4000
0x00ef4d11: je     0x140ef4d4f
0x00ef4d13: cmp    eax,0x8000
0x00ef4d18: je     0x140ef4d3a
0x00ef4d1a: cmp    eax,0x10000
0x00ef4d1f: jne    0x140ef5c99
0x00ef4d25: mov    r8d,0x24
0x00ef4d2b: lea    rdx,[rip+0x861176]        # 0x141755ea8 ; literal="the forces that govern wind patterns"
0x00ef4d32: mov    rcx,r9
0x00ef4d35: jmp    0x140070e90
0x00ef4d3a: mov    r8d,0x3e
0x00ef4d40: lea    rdx,[rip+0x861209]        # 0x141755f50 ; literal="the process of the formation of deltas at the mouths of rivers"
0x00ef4d47: mov    rcx,r9
0x00ef4d4a: jmp    0x140070e90
0x00ef4d4f: mov    r8d,0x3f
0x00ef4d55: lea    rdx,[rip+0x8611b4]        # 0x141755f10 ; literal="the collection of maps and other information into a single text"
0x00ef4d5c: mov    rcx,r9
0x00ef4d5f: jmp    0x140070e90
0x00ef4d64: mov    r8d,0x2d
0x00ef4d6a: lea    rdx,[rip+0x860edf]        # 0x141755c50 ; literal="the placement of economic information on maps"
0x00ef4d71: mov    rcx,r9
0x00ef4d74: jmp    0x140070e90
0x00ef4d79: mov    r8d,0x27
0x00ef4d7f: lea    rdx,[rip+0x860ea2]        # 0x141755c28 ; literal="the process of economic data collection"
0x00ef4d86: mov    rcx,r9
0x00ef4d89: jmp    0x140070e90
0x00ef4d8e: mov    r8d,0x3b
0x00ef4d94: lea    rdx,[rip+0x861135]        # 0x141755ed0 ; literal="the origin of rainfall through evaporation and condensation"
0x00ef4d9b: mov    rcx,r9
0x00ef4d9e: jmp    0x140070e90
0x00ef4da3: cmp    eax,0x40000
0x00ef4da8: je     0x140ef4e02
0x00ef4daa: cmp    eax,0x80000
0x00ef4daf: je     0x140ef4ded
0x00ef4db1: cmp    eax,0x100000
0x00ef4db6: je     0x140ef4dd8
0x00ef4db8: cmp    eax,0x200000
0x00ef4dbd: jne    0x140ef5c99
0x00ef4dc3: mov    r8d,0x3f
0x00ef4dc9: lea    rdx,[rip+0x861010]        # 0x141755de0 ; literal="methods of adjusting maps to account for the shape of the world"
0x00ef4dd0: mov    rcx,r9
0x00ef4dd3: jmp    0x140070e90
0x00ef4dd8: mov    r8d,0x1d
0x00ef4dde: lea    rdx,[rip+0x860fdb]        # 0x141755dc0 ; literal="the creation of accurate maps"
0x00ef4de5: mov    rcx,r9
0x00ef4de8: jmp    0x140070e90
0x00ef4ded: mov    r8d,0x2c
0x00ef4df3: lea    rdx,[rip+0x86107e]        # 0x141755e78 ; literal="the division of the world into climate zones"
0x00ef4dfa: mov    rcx,r9
0x00ef4dfd: jmp    0x140070e90
0x00ef4e02: mov    r8d,0x53
0x00ef4e08: lea    rdx,[rip+0x861011]        # 0x141755e20 ; literal="a world-wide cycle involving precipitation, oceans, rivers and other forms of water"
0x00ef4e0f: mov    rcx,r9
0x00ef4e12: jmp    0x140070e90
0x00ef4e17: mov    eax,DWORD PTR [rcx+0xc]
0x00ef4e1a: cmp    eax,0x10000
0x00ef4e1f: ja     0x140ef4ffb
0x00ef4e25: je     0x140ef4fe6
0x00ef4e2b: cmp    eax,0x100
0x00ef4e30: ja     0x140ef4f18
0x00ef4e36: je     0x140ef4f03
0x00ef4e3c: dec    eax
0x00ef4e3e: cmp    eax,0x7f
0x00ef4e41: ja     0x140ef5c99
0x00ef4e47: movzx  eax,BYTE PTR [rdx+rax*1+0xef5f5c]
0x00ef4e4f: mov    ecx,DWORD PTR [rdx+rax*4+0xef5f38]
0x00ef4e56: add    rcx,rdx
0x00ef4e59: jmp    rcx
0x00ef4e5b: mov    r8d,0x2f
0x00ef4e61: lea    rdx,[rip+0x8611e8]        # 0x141756050 ; literal="the connection between disease and fouled water"
0x00ef4e68: mov    rcx,r9
0x00ef4e6b: jmp    0x140070e90
0x00ef4e70: mov    r8d,0x38
0x00ef4e76: lea    rdx,[rip+0x861203]        # 0x141756080 ; literal="the method of physical examination in diagnosing illness"
0x00ef4e7d: mov    rcx,r9
0x00ef4e80: jmp    0x140070e90
0x00ef4e85: mov    r8d,0x15
0x00ef4e8b: lea    rdx,[rip+0x861166]        # 0x141755ff8 ; literal="the method of autopsy"
0x00ef4e92: mov    rcx,r9
0x00ef4e95: jmp    0x140070e90
0x00ef4e9a: mov    r8d,0x3f
0x00ef4ea0: lea    rdx,[rip+0x861169]        # 0x141756010 ; literal="determining the likely outcome given a patient's current status"
0x00ef4ea7: mov    rcx,r9
0x00ef4eaa: jmp    0x140070e90
0x00ef4eaf: mov    r8d,0xf
0x00ef4eb5: lea    rdx,[rip+0x86110c]        # 0x141755fc8 ; literal="herbal remedies"
0x00ef4ebc: mov    rcx,r9
0x00ef4ebf: jmp    0x140070e90
0x00ef4ec4: mov    r8d,0x1e
0x00ef4eca: lea    rdx,[rip+0x861107]        # 0x141755fd8 ; literal="remedies prepared from animals"
0x00ef4ed1: mov    rcx,r9
0x00ef4ed4: jmp    0x140070e90
0x00ef4ed9: mov    r8d,0x10
0x00ef4edf: lea    rdx,[rip+0x8610aa]        # 0x141755f90 ; literal="mineral remedies"
0x00ef4ee6: mov    rcx,r9
0x00ef4ee9: jmp    0x140070e90
0x00ef4eee: mov    r8d,0x1e
0x00ef4ef4: lea    rdx,[rip+0x8610ad]        # 0x141755fa8 ; literal="the method of bandaging wounds"
0x00ef4efb: mov    rcx,r9
0x00ef4efe: jmp    0x140070e90
0x00ef4f03: mov    r8d,0x1d
0x00ef4f09: lea    rdx,[rip+0x861290]        # 0x1417561a0 ; literal="the classification of disease"
0x00ef4f10: mov    rcx,r9
0x00ef4f13: jmp    0x140070e90
0x00ef4f18: cmp    eax,0x1000
0x00ef4f1d: ja     0x140ef4f8e
0x00ef4f1f: je     0x140ef4f79
0x00ef4f21: cmp    eax,0x200
0x00ef4f26: je     0x140ef4f64
0x00ef4f28: cmp    eax,0x400
0x00ef4f2d: je     0x140ef4f4f
0x00ef4f2f: cmp    eax,0x800
0x00ef4f34: jne    0x140ef5c99
0x00ef4f3a: mov    r8d,0x1d
0x00ef4f40: lea    rdx,[rip+0x861239]        # 0x141756180 ; literal="the theory of endemic disease"
0x00ef4f47: mov    rcx,r9
0x00ef4f4a: jmp    0x140070e90
0x00ef4f4f: mov    r8d,0x34
0x00ef4f55: lea    rdx,[rip+0x8611ec]        # 0x141756148 ; literal="the distinction between acute and chronic conditions"
0x00ef4f5c: mov    rcx,r9
0x00ef4f5f: jmp    0x140070e90
0x00ef4f64: mov    r8d,0x26
0x00ef4f6a: lea    rdx,[rip+0x86124f]        # 0x1417561c0 ; literal="the classification of toxic substances"
0x00ef4f71: mov    rcx,r9
0x00ef4f74: jmp    0x140070e90
0x00ef4f79: mov    r8d,0x1e
0x00ef4f7f: lea    rdx,[rip+0x86116a]        # 0x1417560f0 ; literal="the theory of epidemic disease"
0x00ef4f86: mov    rcx,r9
0x00ef4f89: jmp    0x140070e90
0x00ef4f8e: cmp    eax,0x2000
0x00ef4f93: je     0x140ef4fd1
0x00ef4f95: cmp    eax,0x4000
0x00ef4f9a: je     0x140ef4fbc
0x00ef4f9c: cmp    eax,0x8000
0x00ef4fa1: jne    0x140ef5c99
0x00ef4fa7: mov    r8d,0x15
0x00ef4fad: lea    rdx,[rip+0x861124]        # 0x1417560d8 ; literal="the notion of relapse"
0x00ef4fb4: mov    rcx,r9
0x00ef4fb7: jmp    0x140070e90
0x00ef4fbc: mov    r8d,0x16
0x00ef4fc2: lea    rdx,[rip+0x8610f7]        # 0x1417560c0 ; literal="the notion of paroxysm"
0x00ef4fc9: mov    rcx,r9
0x00ef4fcc: jmp    0x140070e90
0x00ef4fd1: mov    r8d,0x37
0x00ef4fd7: lea    rdx,[rip+0x861132]        # 0x141756110 ; literal="the notion of the exacerbation of a patient's condition"
0x00ef4fde: mov    rcx,r9
0x00ef4fe1: jmp    0x140070e90
0x00ef4fe6: mov    r8d,0x1b
0x00ef4fec: lea    rdx,[rip+0x8612dd]        # 0x1417562d0 ; literal="the theory of convalescence"
0x00ef4ff3: mov    rcx,r9
0x00ef4ff6: jmp    0x140070e90
0x00ef4ffb: cmp    eax,0x1000000
0x00ef5000: ja     0x140ef50ef
0x00ef5006: je     0x140ef50da
0x00ef500c: cmp    eax,0x100000
0x00ef5011: ja     0x140ef5082
0x00ef5013: je     0x140ef506d
0x00ef5015: cmp    eax,0x20000
0x00ef501a: je     0x140ef5058
0x00ef501c: cmp    eax,0x40000
0x00ef5021: je     0x140ef5043
0x00ef5023: cmp    eax,0x80000
0x00ef5028: jne    0x140ef5c99
0x00ef502e: mov    r8d,0x1f
0x00ef5034: lea    rdx,[rip+0x861275]        # 0x1417562b0 ; literal="the classification of fractures"
0x00ef503b: mov    rcx,r9
0x00ef503e: jmp    0x140070e90
0x00ef5043: mov    r8d,0x1a
0x00ef5049: lea    rdx,[rip+0x861240]        # 0x141756290 ; literal="the treatment of fractures"
0x00ef5050: mov    rcx,r9
0x00ef5053: jmp    0x140070e90
0x00ef5058: mov    r8d,0x23
0x00ef505e: lea    rdx,[rip+0x86128b]        # 0x1417562f0 ; literal="the treatment of traumatic injuries"
0x00ef5065: mov    rcx,r9
0x00ef5068: jmp    0x140070e90
0x00ef506d: mov    r8d,0x2e
0x00ef5073: lea    rdx,[rip+0x8611be]        # 0x141756238 ; literal="the construction and use of the traction bench"
0x00ef507a: mov    rcx,r9
0x00ef507d: jmp    0x140070e90
0x00ef5082: cmp    eax,0x200000
0x00ef5087: je     0x140ef50c5
0x00ef5089: cmp    eax,0x400000
0x00ef508e: je     0x140ef50b0
0x00ef5090: cmp    eax,0x800000
0x00ef5095: jne    0x140ef5c99
0x00ef509b: mov    r8d,0x1f
0x00ef50a1: lea    rdx,[rip+0x861170]        # 0x141756218 ; literal="the surgical method of excision"
0x00ef50a8: mov    rcx,r9
0x00ef50ab: jmp    0x140070e90
0x00ef50b0: lea    rdx,[rip+0x861131]        # 0x1417561e8 ; literal="the creation and use of the orthopedic cast"
0x00ef50b7: mov    r8d,0x2b
0x00ef50bd: mov    rcx,r9
0x00ef50c0: jmp    0x140070e90
0x00ef50c5: mov    r8d,0x25
0x00ef50cb: lea    rdx,[rip+0x861196]        # 0x141756268 ; literal="the method of fracture immobilization"
0x00ef50d2: mov    rcx,r9
0x00ef50d5: jmp    0x140070e90
0x00ef50da: mov    r8d,0x1f
0x00ef50e0: lea    rdx,[rip+0x8612e1]        # 0x1417563c8 ; literal="the surgical method of incision"
0x00ef50e7: mov    rcx,r9
0x00ef50ea: jmp    0x140070e90
0x00ef50ef: cmp    eax,0x10000000
0x00ef50f4: ja     0x140ef5165
0x00ef50f6: je     0x140ef5150
0x00ef50f8: cmp    eax,0x2000000
0x00ef50fd: je     0x140ef513b
0x00ef50ff: cmp    eax,0x4000000
0x00ef5104: je     0x140ef5126
0x00ef5106: cmp    eax,0x8000000
0x00ef510b: jne    0x140ef5c99
0x00ef5111: mov    r8d,0x15
0x00ef5117: lea    rdx,[rip+0x861292]        # 0x1417563b0 ; literal="the lithotomy surgery"
0x00ef511e: mov    rcx,r9
0x00ef5121: jmp    0x140070e90
0x00ef5126: mov    r8d,0x17
0x00ef512c: lea    rdx,[rip+0x861265]        # 0x141756398 ; literal="the tracheotomy surgery"
0x00ef5133: mov    rcx,r9
0x00ef5136: jmp    0x140070e90
0x00ef513b: mov    r8d,0xe
0x00ef5141: lea    rdx,[rip+0x8612a0]        # 0x1417563e8 ; literal="hernia surgery"
0x00ef5148: mov    rcx,r9
0x00ef514b: jmp    0x140070e90
0x00ef5150: mov    r8d,0x1f
0x00ef5156: lea    rdx,[rip+0x8611fb]        # 0x141756358 ; literal="the surgical method of scraping"
0x00ef515d: mov    rcx,r9
0x00ef5160: jmp    0x140070e90
0x00ef5165: cmp    eax,0x20000000
0x00ef516a: je     0x140ef51a8
0x00ef516c: cmp    eax,0x40000000
0x00ef5171: je     0x140ef5193
0x00ef5173: cmp    eax,0x80000000
0x00ef5178: jne    0x140ef5c99
0x00ef517e: mov    r8d,0x1f
0x00ef5184: lea    rdx,[rip+0x8611ad]        # 0x141756338 ; literal="the surgical method of suturing"
0x00ef518b: mov    rcx,r9
0x00ef518e: jmp    0x140070e90
0x00ef5193: mov    r8d,0x1e
0x00ef5199: lea    rdx,[rip+0x861178]        # 0x141756318 ; literal="the surgical method of probing"
0x00ef51a0: mov    rcx,r9
0x00ef51a3: jmp    0x140070e90
0x00ef51a8: mov    r8d,0x1f
0x00ef51ae: lea    rdx,[rip+0x8611c3]        # 0x141756378 ; literal="the surgical method of draining"
0x00ef51b5: mov    rcx,r9
0x00ef51b8: jmp    0x140070e90
0x00ef51bd: mov    eax,DWORD PTR [rcx+0xc]
0x00ef51c0: cmp    eax,0x10000
0x00ef51c5: ja     0x140ef53a1
0x00ef51cb: je     0x140ef538c
0x00ef51d1: cmp    eax,0x100
0x00ef51d6: ja     0x140ef52be
0x00ef51dc: je     0x140ef52a9
0x00ef51e2: dec    eax
0x00ef51e4: cmp    eax,0x7f
0x00ef51e7: ja     0x140ef5c99
0x00ef51ed: movzx  eax,BYTE PTR [rdx+rax*1+0xef6000]
0x00ef51f5: mov    ecx,DWORD PTR [rdx+rax*4+0xef5fdc]
0x00ef51fc: add    rcx,rdx
0x00ef51ff: jmp    rcx
0x00ef5201: mov    r8d,0x1f
0x00ef5207: lea    rdx,[rip+0x8612e2]        # 0x1417564f0 ; literal="the surgical method of ligature"
0x00ef520e: mov    rcx,r9
0x00ef5211: jmp    0x140070e90
0x00ef5216: mov    r8d,0x25
0x00ef521c: lea    rdx,[rip+0x8612ed]        # 0x141756510 ; literal="the use of practice models in surgery"
0x00ef5223: mov    rcx,r9
0x00ef5226: jmp    0x140070e90
0x00ef522b: mov    r8d,0x26
0x00ef5231: lea    rdx,[rip+0x861268]        # 0x1417564a0 ; literal="the use of mud bags as surgical models"
0x00ef5238: mov    rcx,r9
0x00ef523b: jmp    0x140070e90
0x00ef5240: mov    r8d,0x24
0x00ef5246: lea    rdx,[rip+0x86127b]        # 0x1417564c8 ; literal="the use of plants as surgical models"
0x00ef524d: mov    rcx,r9
0x00ef5250: jmp    0x140070e90
0x00ef5255: mov    r8d,0x25
0x00ef525b: lea    rdx,[rip+0x8611e6]        # 0x141756448 ; literal="the use of animals as surgical models"
0x00ef5262: mov    rcx,r9
0x00ef5265: jmp    0x140070e90
0x00ef526a: lea    rdx,[rip+0x8611ff]        # 0x141756470 ; literal="the use of specialized surgical instruments"
0x00ef5271: mov    r8d,0x2b
0x00ef5277: mov    rcx,r9
0x00ef527a: jmp    0x140070e90
0x00ef527f: mov    r8d,0x23
0x00ef5285: lea    rdx,[rip+0x86116c]        # 0x1417563f8 ; literal="the construction and use of forceps"
0x00ef528c: mov    rcx,r9
0x00ef528f: jmp    0x140070e90
0x00ef5294: mov    r8d,0x27
0x00ef529a: lea    rdx,[rip+0x86117f]        # 0x141756420 ; literal="the construction and use of the scalpel"
0x00ef52a1: mov    rcx,r9
0x00ef52a4: jmp    0x140070e90
0x00ef52a9: mov    r8d,0x2d
0x00ef52af: lea    rdx,[rip+0x85fd5a]        # 0x141755010 ; literal="the construction and use of surgical scissors"
0x00ef52b6: mov    rcx,r9
0x00ef52b9: jmp    0x140070e90
0x00ef52be: cmp    eax,0x1000
0x00ef52c3: ja     0x140ef5334
0x00ef52c5: je     0x140ef531f
0x00ef52c7: cmp    eax,0x200
0x00ef52cc: je     0x140ef530a
0x00ef52ce: cmp    eax,0x400
0x00ef52d3: je     0x140ef52f5
0x00ef52d5: cmp    eax,0x800
0x00ef52da: jne    0x140ef5c99
0x00ef52e0: mov    r8d,0xd
0x00ef52e6: lea    rdx,[rip+0x85fd13]        # 0x141755000 ; literal="cauterization"
0x00ef52ed: mov    rcx,r9
0x00ef52f0: jmp    0x140070e90
0x00ef52f5: mov    r8d,0x10
0x00ef52fb: lea    rdx,[rip+0x85fce6]        # 0x141754fe8 ; literal="cataract surgery"
0x00ef5302: mov    rcx,r9
0x00ef5305: jmp    0x140070e90
0x00ef530a: mov    r8d,0x2c
0x00ef5310: lea    rdx,[rip+0x85fd29]        # 0x141755040 ; literal="the construction and use of surgical needles"
0x00ef5317: mov    rcx,r9
0x00ef531a: jmp    0x140070e90
0x00ef531f: mov    r8d,0xa
0x00ef5325: lea    rdx,[rip+0x85fc94]        # 0x141754fc0 ; literal="anesthesia"
0x00ef532c: mov    rcx,r9
0x00ef532f: jmp    0x140070e90
0x00ef5334: cmp    eax,0x2000
0x00ef5339: je     0x140ef5377
0x00ef533b: cmp    eax,0x4000
0x00ef5340: je     0x140ef5362
0x00ef5342: cmp    eax,0x8000
0x00ef5347: jne    0x140ef5c99
0x00ef534d: mov    r8d,0x23
0x00ef5353: lea    rdx,[rip+0x85fc3e]        # 0x141754f98 ; literal="the classification of bodily fluids"
0x00ef535a: mov    rcx,r9
0x00ef535d: jmp    0x140070e90
0x00ef5362: mov    r8d,0x2a
0x00ef5368: lea    rdx,[rip+0x85fbf9]        # 0x141754f68 ; literal="anatomical studies for medical edification"
0x00ef536f: mov    rcx,r9
0x00ef5372: jmp    0x140070e90
0x00ef5377: mov    r8d,0x12
0x00ef537d: lea    rdx,[rip+0x85fc4c]        # 0x141754fd0 ; literal="pulmonary medicine"
0x00ef5384: mov    rcx,r9
0x00ef5387: jmp    0x140070e90
0x00ef538c: mov    r8d,0x16
0x00ef5392: lea    rdx,[rip+0x85fdb7]        # 0x141755150 ; literal="the anatomy of the eye"
0x00ef5399: mov    rcx,r9
0x00ef539c: jmp    0x140070e90
0x00ef53a1: cmp    eax,0x1000000
0x00ef53a6: ja     0x140ef5495
0x00ef53ac: je     0x140ef5480
0x00ef53b2: cmp    eax,0x100000
0x00ef53b7: ja     0x140ef5428
0x00ef53b9: je     0x140ef5413
0x00ef53bb: cmp    eax,0x20000
0x00ef53c0: je     0x140ef53fe
0x00ef53c2: cmp    eax,0x40000
0x00ef53c7: je     0x140ef53e9
0x00ef53c9: cmp    eax,0x80000
0x00ef53ce: jne    0x140ef5c99
0x00ef53d4: mov    r8d,0x1a
0x00ef53da: lea    rdx,[rip+0x85fd4f]        # 0x141755130 ; literal="the study of reaction time"
0x00ef53e1: mov    rcx,r9
0x00ef53e4: jmp    0x140070e90
0x00ef53e9: mov    r8d,0x22
0x00ef53ef: lea    rdx,[rip+0x85fd12]        # 0x141755108 ; literal="the function of the nervous system"
0x00ef53f6: mov    rcx,r9
0x00ef53f9: jmp    0x140070e90
0x00ef53fe: mov    r8d,0x30
0x00ef5404: lea    rdx,[rip+0x85fd5d]        # 0x141755168 ; literal="the distinction between motor and sensory nerves"
0x00ef540b: mov    rcx,r9
0x00ef540e: jmp    0x140070e90
0x00ef5413: mov    r8d,0x2a
0x00ef5419: lea    rdx,[rip+0x85fca0]        # 0x1417550c0 ; literal="the distinction between veins and arteries"
0x00ef5420: mov    rcx,r9
0x00ef5423: jmp    0x140070e90
0x00ef5428: cmp    eax,0x200000
0x00ef542d: je     0x140ef546b
0x00ef542f: cmp    eax,0x400000
0x00ef5434: je     0x140ef5456
0x00ef5436: cmp    eax,0x800000
0x00ef543b: jne    0x140ef5c99
0x00ef5441: mov    r8d,0x17
0x00ef5447: lea    rdx,[rip+0x85fc5a]        # 0x1417550a8 ; literal="the source of the voice"
0x00ef544e: mov    rcx,r9
0x00ef5451: jmp    0x140070e90
0x00ef5456: mov    r8d,0x32
0x00ef545c: lea    rdx,[rip+0x85fc0d]        # 0x141755070 ; literal="comparative anatomical studies for use in medicine"
0x00ef5463: mov    rcx,r9
0x00ef5466: jmp    0x140070e90
0x00ef546b: mov    r8d,0x15
0x00ef5471: lea    rdx,[rip+0x85fc78]        # 0x1417550f0 ; literal="pulmonary circulation"
0x00ef5478: mov    rcx,r9
0x00ef547b: jmp    0x140070e90
0x00ef5480: mov    r8d,0x1d
0x00ef5486: lea    rdx,[rip+0x85fe23]        # 0x1417552b0 ; literal="the classification of muscles"
0x00ef548d: mov    rcx,r9
0x00ef5490: jmp    0x140070e90
0x00ef5495: cmp    eax,0x10000000
0x00ef549a: ja     0x140ef550b
0x00ef549c: je     0x140ef54f6
0x00ef549e: cmp    eax,0x2000000
0x00ef54a3: je     0x140ef54e1
0x00ef54a5: cmp    eax,0x4000000
0x00ef54aa: je     0x140ef54cc
0x00ef54ac: cmp    eax,0x8000000
0x00ef54b1: jne    0x140ef5c99
0x00ef54b7: mov    r8d,0x2e
0x00ef54bd: lea    rdx,[rip+0x85fdbc]        # 0x141755280 ; literal="the preparation and use of dedicated hospitals"
0x00ef54c4: mov    rcx,r9
0x00ef54c7: jmp    0x140070e90
0x00ef54cc: mov    r8d,0x21
0x00ef54d2: lea    rdx,[rip+0x85fd7f]        # 0x141755258 ; literal="the treatment of mental illnesses"
0x00ef54d9: mov    rcx,r9
0x00ef54dc: jmp    0x140070e90
0x00ef54e1: mov    r8d,0x26
0x00ef54e7: lea    rdx,[rip+0x85fde2]        # 0x1417552d0 ; literal="the classification of mental illnesses"
0x00ef54ee: mov    rcx,r9
0x00ef54f1: jmp    0x140070e90
0x00ef54f6: mov    r8d,0x26
0x00ef54fc: lea    rdx,[rip+0x85fcfd]        # 0x141755200 ; literal="the use of professional hospital staff"
0x00ef5503: mov    rcx,r9
0x00ef5506: jmp    0x140070e90
0x00ef550b: cmp    eax,0x20000000
0x00ef5510: je     0x140ef554e
0x00ef5512: cmp    eax,0x40000000
0x00ef5517: je     0x140ef5539
0x00ef5519: cmp    eax,0x80000000
0x00ef551e: jne    0x140ef5c99
0x00ef5524: mov    r8d,0x13
0x00ef552a: lea    rdx,[rip+0x85fcb7]        # 0x1417551e8 ; literal="schools of medicine"
0x00ef5531: mov    rcx,r9
0x00ef5534: jmp    0x140070e90
0x00ef5539: mov    r8d,0x41
0x00ef553f: lea    rdx,[rip+0x85fc5a]        # 0x1417551a0 ; literal="the use of a laboratory for preparation of remedies in a hospital"
0x00ef5546: mov    rcx,r9
0x00ef5549: jmp    0x140070e90
0x00ef554e: mov    r8d,0x29
0x00ef5554: lea    rdx,[rip+0x85fccd]        # 0x141755228 ; literal="the use of specialized wards in hospitals"
0x00ef555b: mov    rcx,r9
0x00ef555e: jmp    0x140070e90
0x00ef5563: cmp    DWORD PTR [rcx+0xc],0x1
0x00ef5567: jne    0x140ef5c99
0x00ef556d: mov    r8d,0x2c
0x00ef5573: lea    rdx,[rip+0x85fee6]        # 0x141755460 ; literal="the creation of asylums for the mentally ill"
0x00ef557a: mov    rcx,r9
0x00ef557d: jmp    0x140070e90
0x00ef5582: mov    eax,DWORD PTR [rcx+0xc]
0x00ef5585: cmp    eax,0x10000
0x00ef558a: ja     0x140ef5766
0x00ef5590: je     0x140ef5751
0x00ef5596: cmp    eax,0x100
0x00ef559b: ja     0x140ef5683
0x00ef55a1: je     0x140ef566e
0x00ef55a7: dec    eax
0x00ef55a9: cmp    eax,0x7f
0x00ef55ac: ja     0x140ef5c99
0x00ef55b2: movzx  eax,BYTE PTR [rdx+rax*1+0xef60a4]
0x00ef55ba: mov    ecx,DWORD PTR [rdx+rax*4+0xef6080]
0x00ef55c1: add    rcx,rdx
0x00ef55c4: jmp    rcx
0x00ef55c6: mov    r8d,0x2d
0x00ef55cc: lea    rdx,[rip+0x85febd]        # 0x141755490 ; literal="the use of shadows to tell direction and time"
0x00ef55d3: mov    rcx,r9
0x00ef55d6: jmp    0x140070e90
0x00ef55db: lea    rdx,[rip+0x85fdf6]        # 0x1417553d8 ; literal="the use of water-based devices to tell time"
0x00ef55e2: mov    r8d,0x2b
0x00ef55e8: mov    rcx,r9
0x00ef55eb: jmp    0x140070e90
0x00ef55f0: mov    r8d,0x49
0x00ef55f6: lea    rdx,[rip+0x85fe13]        # 0x141755410 ; literal="the use of conical shapes in water-based clocks to improve their accuracy"
0x00ef55fd: mov    rcx,r9
0x00ef5600: jmp    0x140070e90
0x00ef5605: mov    r8d,0x45
0x00ef560b: lea    rdx,[rip+0x85fd4e]        # 0x141755360 ; literal="the use of reservoirs in water-based clocks to improve their accuracy"
0x00ef5612: mov    rcx,r9
0x00ef5615: jmp    0x140070e90
0x00ef561a: mov    r8d,0x29
0x00ef5620: lea    rdx,[rip+0x85fd81]        # 0x1417553a8 ; literal="the construction and use of the astrarium"
0x00ef5627: mov    rcx,r9
0x00ef562a: jmp    0x140070e90
0x00ef562f: mov    r8d,0x29
0x00ef5635: lea    rdx,[rip+0x85fcbc]        # 0x1417552f8 ; literal="the construction and use of the hourglass"
0x00ef563c: mov    rcx,r9
0x00ef563f: jmp    0x140070e90
0x00ef5644: mov    r8d,0x2d
0x00ef564a: lea    rdx,[rip+0x85fcd7]        # 0x141755328 ; literal="the construction and use of mechanical clocks"
0x00ef5651: mov    rcx,r9
0x00ef5654: jmp    0x140070e90
0x00ef5659: mov    r8d,0x25
0x00ef565f: lea    rdx,[rip+0x85ff6a]        # 0x1417555d0 ; literal="the reasons why pulleys are effective"
0x00ef5666: mov    rcx,r9
0x00ef5669: jmp    0x140070e90
0x00ef566e: mov    r8d,0x26
0x00ef5674: lea    rdx,[rip+0x85ff7d]        # 0x1417555f8 ; literal="the construction and use of the pulley"
0x00ef567b: mov    rcx,r9
0x00ef567e: jmp    0x140070e90
0x00ef5683: cmp    eax,0x1000
0x00ef5688: ja     0x140ef56f9
0x00ef568a: je     0x140ef56e4
0x00ef568c: cmp    eax,0x200
0x00ef5691: je     0x140ef56cf
0x00ef5693: cmp    eax,0x400
0x00ef5698: je     0x140ef56ba
0x00ef569a: cmp    eax,0x800
0x00ef569f: jne    0x140ef5c99
0x00ef56a5: mov    r8d,0x3c
0x00ef56ab: lea    rdx,[rip+0x85fe5e]        # 0x141755510 ; literal="the reasons why the wheel-and-axle construction is effective"
0x00ef56b2: mov    rcx,r9
0x00ef56b5: jmp    0x140070e90
0x00ef56ba: mov    r8d,0x25
0x00ef56c0: lea    rdx,[rip+0x85fee1]        # 0x1417555a8 ; literal="the construction and use of the screw"
0x00ef56c7: mov    rcx,r9
0x00ef56ca: jmp    0x140070e90
0x00ef56cf: mov    r8d,0x24
0x00ef56d5: lea    rdx,[rip+0x85fea4]        # 0x141755580 ; literal="the reasons why screws are effective"
0x00ef56dc: mov    rcx,r9
0x00ef56df: jmp    0x140070e90
0x00ef56e4: mov    r8d,0x28
0x00ef56ea: lea    rdx,[rip+0x85fe5f]        # 0x141755550 ; literal="the construction and use of the windlass"
0x00ef56f1: mov    rcx,r9
0x00ef56f4: jmp    0x140070e90
0x00ef56f9: cmp    eax,0x2000
0x00ef56fe: je     0x140ef573c
0x00ef5700: cmp    eax,0x4000
0x00ef5705: je     0x140ef5727
0x00ef5707: cmp    eax,0x8000
0x00ef570c: jne    0x140ef5c99
0x00ef5712: mov    r8d,0x25
0x00ef5718: lea    rdx,[rip+0x860011]        # 0x141755730 ; literal="the construction and use of the lever"
0x00ef571f: mov    rcx,r9
0x00ef5722: jmp    0x140070e90
0x00ef5727: mov    r8d,0x26
0x00ef572d: lea    rdx,[rip+0x85fdb4]        # 0x1417554e8 ; literal="the reasons why the lever is effective"
0x00ef5734: mov    rcx,r9
0x00ef5737: jmp    0x140070e90
0x00ef573c: mov    r8d,0x26
0x00ef5742: lea    rdx,[rip+0x85fd77]        # 0x1417554c0 ; literal="the reasons why the wedge is effective"
0x00ef5749: mov    rcx,r9
0x00ef574c: jmp    0x140070e90
0x00ef5751: mov    r8d,0x35
0x00ef5757: lea    rdx,[rip+0x85fffa]        # 0x141755758 ; literal="the construction and use of the straight-beam balance"
0x00ef575e: mov    rcx,r9
0x00ef5761: jmp    0x140070e90
0x00ef5766: cmp    eax,0x1000000
0x00ef576b: ja     0x140ef585a
0x00ef5771: je     0x140ef5845
0x00ef5777: cmp    eax,0x100000
0x00ef577c: ja     0x140ef57ed
0x00ef577e: je     0x140ef57d8
0x00ef5780: cmp    eax,0x20000
0x00ef5785: je     0x140ef57c3
0x00ef5787: cmp    eax,0x40000
0x00ef578c: je     0x140ef57ae
0x00ef578e: cmp    eax,0x80000
0x00ef5793: jne    0x140ef5c99
0x00ef5799: mov    r8d,0x2c
0x00ef579f: lea    rdx,[rip+0x85feda]        # 0x141755680 ; literal="the construction and use of the tumbler lock"
0x00ef57a6: mov    rcx,r9
0x00ef57a9: jmp    0x140070e90
0x00ef57ae: lea    rdx,[rip+0x85ff4b]        # 0x141755700 ; literal="the construction and use of the warded lock"
0x00ef57b5: mov    r8d,0x2b
0x00ef57bb: mov    rcx,r9
0x00ef57be: jmp    0x140070e90
0x00ef57c3: mov    r8d,0x23
0x00ef57c9: lea    rdx,[rip+0x85ff08]        # 0x1417556d8 ; literal="the reasons why gears are effective"
0x00ef57d0: mov    rcx,r9
0x00ef57d3: jmp    0x140070e90
0x00ef57d8: mov    r8d,0x27
0x00ef57de: lea    rdx,[rip+0x85fecb]        # 0x1417556b0 ; literal="the construction and use of the padlock"
0x00ef57e5: mov    rcx,r9
0x00ef57e8: jmp    0x140070e90
0x00ef57ed: cmp    eax,0x200000
0x00ef57f2: je     0x140ef5830
0x00ef57f4: cmp    eax,0x400000
0x00ef57f9: je     0x140ef581b
0x00ef57fb: cmp    eax,0x800000
0x00ef5800: jne    0x140ef5c99
0x00ef5806: mov    r8d,0x35
0x00ef580c: lea    rdx,[rip+0x8600b5]        # 0x1417558c8 ; literal="the construction and use of the water-powered sawmill"
0x00ef5813: mov    rcx,r9
0x00ef5816: jmp    0x140070e90
0x00ef581b: mov    r8d,0x2a
0x00ef5821: lea    rdx,[rip+0x85fe28]        # 0x141755650 ; literal="the construction and use of the crankshaft"
0x00ef5828: mov    rcx,r9
0x00ef582b: jmp    0x140070e90
0x00ef5830: mov    r8d,0x28
0x00ef5836: lea    rdx,[rip+0x85fde3]        # 0x141755620 ; literal="the construction and use of the camshaft"
0x00ef583d: mov    rcx,r9
0x00ef5840: jmp    0x140070e90
0x00ef5845: mov    r8d,0x30
0x00ef584b: lea    rdx,[rip+0x8600ae]        # 0x141755900 ; literal="the construction and use of the chariot odometer"
0x00ef5852: mov    rcx,r9
0x00ef5855: jmp    0x140070e90
0x00ef585a: cmp    eax,0x10000000
0x00ef585f: ja     0x140ef58d0
0x00ef5861: je     0x140ef58bb
0x00ef5863: cmp    eax,0x2000000
0x00ef5868: je     0x140ef58a6
0x00ef586a: cmp    eax,0x4000000
0x00ef586f: je     0x140ef5891
0x00ef5871: cmp    eax,0x8000000
0x00ef5876: jne    0x140ef5c99
0x00ef587c: mov    r8d,0x31
0x00ef5882: lea    rdx,[rip+0x85ff6f]        # 0x1417557f8 ; literal="the construction and use of the differential gear"
0x00ef5889: mov    rcx,r9
0x00ef588c: jmp    0x140070e90
0x00ef5891: mov    r8d,0x32
0x00ef5897: lea    rdx,[rip+0x85fff2]        # 0x141755890 ; literal="the construction and use of the mechanical compass"
0x00ef589e: mov    rcx,r9
0x00ef58a1: jmp    0x140070e90
0x00ef58a6: mov    r8d,0x28
0x00ef58ac: lea    rdx,[rip+0x85ffad]        # 0x141755860 ; literal="the construction and use of chain drives"
0x00ef58b3: mov    rcx,r9
0x00ef58b6: jmp    0x140070e90
0x00ef58bb: mov    r8d,0x2d
0x00ef58c1: lea    rdx,[rip+0x85ff68]        # 0x141755830 ; literal="the construction and use of combination locks"
0x00ef58c8: mov    rcx,r9
0x00ef58cb: jmp    0x140070e90
0x00ef58d0: cmp    eax,0x20000000
0x00ef58d5: je     0x140ef5913
0x00ef58d7: cmp    eax,0x40000000
0x00ef58dc: je     0x140ef58fe
0x00ef58de: cmp    eax,0x80000000
0x00ef58e3: jne    0x140ef5c99
0x00ef58e9: mov    r8d,0x18
0x00ef58ef: lea    rdx,[rip+0x86017a]        # 0x141755a70 ; literal="the action of the siphon"
0x00ef58f6: mov    rcx,r9
0x00ef58f9: jmp    0x140070e90
0x00ef58fe: mov    r8d,0x2d
0x00ef5904: lea    rdx,[rip+0x85febd]        # 0x1417557c8 ; literal="the construction and use of the balance wheel"
0x00ef590b: mov    rcx,r9
0x00ef590e: jmp    0x140070e90
0x00ef5913: mov    r8d,0x30
0x00ef5919: lea    rdx,[rip+0x85fe70]        # 0x141755790 ; literal="the construction and use of the verge escapement"
0x00ef5920: mov    rcx,r9
0x00ef5923: jmp    0x140070e90
0x00ef5928: mov    eax,DWORD PTR [rcx+0xc]
0x00ef592b: cmp    eax,0x8000
0x00ef5930: ja     0x140ef5af7
0x00ef5936: je     0x140ef5ae2
0x00ef593c: cmp    eax,0x80
0x00ef5941: ja     0x140ef5a14
0x00ef5947: je     0x140ef59ff
0x00ef594d: dec    eax
0x00ef594f: cmp    eax,0x3f
0x00ef5952: ja     0x140ef5c99
0x00ef5958: movzx  eax,BYTE PTR [rdx+rax*1+0xef6144]
0x00ef5960: mov    ecx,DWORD PTR [rdx+rax*4+0xef6124]
0x00ef5967: add    rcx,rdx
0x00ef596a: jmp    rcx
0x00ef596c: mov    r8d,0x22
0x00ef5972: lea    rdx,[rip+0x860117]        # 0x141755a90 ; literal="the construction and use of valves"
0x00ef5979: mov    rcx,r9
0x00ef597c: jmp    0x140070e90
0x00ef5981: mov    r8d,0x2a
0x00ef5987: lea    rdx,[rip+0x860082]        # 0x141755a10 ; literal="the construction and use of the force pump"
0x00ef598e: mov    rcx,r9
0x00ef5991: jmp    0x140070e90
0x00ef5996: mov    r8d,0x2c
0x00ef599c: lea    rdx,[rip+0x86009d]        # 0x141755a40 ; literal="the construction and use of the crystal lens"
0x00ef59a3: mov    rcx,r9
0x00ef59a6: jmp    0x140070e90
0x00ef59ab: mov    r8d,0x39
0x00ef59b1: lea    rdx,[rip+0x85ffe8]        # 0x1417559a0 ; literal="the construction and use of water-filled sphere as a lens"
0x00ef59b8: mov    rcx,r9
0x00ef59bb: jmp    0x140070e90
0x00ef59c0: mov    r8d,0x2a
0x00ef59c6: lea    rdx,[rip+0x860013]        # 0x1417559e0 ; literal="the construction and use of the glass lens"
0x00ef59cd: mov    rcx,r9
0x00ef59d0: jmp    0x140070e90
0x00ef59d5: mov    r8d,0x2e
0x00ef59db: lea    rdx,[rip+0x85ff56]        # 0x141755938 ; literal="the construction and use of the camera obscura"
0x00ef59e2: mov    rcx,r9
0x00ef59e5: jmp    0x140070e90
0x00ef59ea: mov    r8d,0x30
0x00ef59f0: lea    rdx,[rip+0x85ff71]        # 0x141755968 ; literal="the construction and use of the parabolic mirror"
0x00ef59f7: mov    rcx,r9
0x00ef59fa: jmp    0x140070e90
0x00ef59ff: mov    r8d,0x1d
0x00ef5a05: lea    rdx,[rip+0x860f34]        # 0x141756940 ; literal="the theory of light and color"
0x00ef5a0c: mov    rcx,r9
0x00ef5a0f: jmp    0x140070e90
0x00ef5a14: cmp    eax,0x800
0x00ef5a19: ja     0x140ef5a8a
0x00ef5a1b: je     0x140ef5a75
0x00ef5a1d: cmp    eax,0x100
0x00ef5a22: je     0x140ef5a60
0x00ef5a24: cmp    eax,0x200
0x00ef5a29: je     0x140ef5a4b
0x00ef5a2b: cmp    eax,0x400
0x00ef5a30: jne    0x140ef5c99
0x00ef5a36: mov    r8d,0x2e
0x00ef5a3c: lea    rdx,[rip+0x860ecd]        # 0x141756910 ; literal="the use of models and templates in engineering"
0x00ef5a43: mov    rcx,r9
0x00ef5a46: jmp    0x140070e90
0x00ef5a4b: mov    r8d,0x32
0x00ef5a51: lea    rdx,[rip+0x860e80]        # 0x1417568d8 ; literal="the relation between refraction and the half chord"
0x00ef5a58: mov    rcx,r9
0x00ef5a5b: jmp    0x140070e90
0x00ef5a60: mov    r8d,0x34
0x00ef5a66: lea    rdx,[rip+0x860ef3]        # 0x141756960 ; literal="the appearance of rainbows based on optical theories"
0x00ef5a6d: mov    rcx,r9
0x00ef5a70: jmp    0x140070e90
0x00ef5a75: mov    r8d,0x15
0x00ef5a7b: lea    rdx,[rip+0x860e16]        # 0x141756898 ; literal="the use of lamination"
0x00ef5a82: mov    rcx,r9
0x00ef5a85: jmp    0x140070e90
0x00ef5a8a: cmp    eax,0x1000
0x00ef5a8f: je     0x140ef5acd
0x00ef5a91: cmp    eax,0x2000
0x00ef5a96: je     0x140ef5ab8
0x00ef5a98: cmp    eax,0x4000
0x00ef5a9d: jne    0x140ef5c99
0x00ef5aa3: mov    r8d,0x30
0x00ef5aa9: lea    rdx,[rip+0x860db0]        # 0x141756860 ; literal="the construction and use of the armillary sphere"
0x00ef5ab0: mov    rcx,r9
0x00ef5ab3: jmp    0x140070e90
0x00ef5ab8: mov    r8d,0x29
0x00ef5abe: lea    rdx,[rip+0x860d6b]        # 0x141756830 ; literal="the construction and use of the astrolabe"
0x00ef5ac5: mov    rcx,r9
0x00ef5ac8: jmp    0x140070e90
0x00ef5acd: mov    r8d,0x27
0x00ef5ad3: lea    rdx,[rip+0x860dd6]        # 0x1417568b0 ; literal="the construction and use of the dioptra"
0x00ef5ada: mov    rcx,r9
0x00ef5add: jmp    0x140070e90
0x00ef5ae2: mov    r8d,0x33
0x00ef5ae8: lea    rdx,[rip+0x860ff9]        # 0x141756ae8 ; literal="the construction and use of the spherical astrolabe"
0x00ef5aef: mov    rcx,r9
0x00ef5af2: jmp    0x140070e90
0x00ef5af7: cmp    eax,0x800000
0x00ef5afc: ja     0x140ef5beb
0x00ef5b02: je     0x140ef5bd6
0x00ef5b08: cmp    eax,0x80000
0x00ef5b0d: ja     0x140ef5b7e
0x00ef5b0f: je     0x140ef5b69
0x00ef5b11: cmp    eax,0x10000
0x00ef5b16: je     0x140ef5b54
0x00ef5b18: cmp    eax,0x20000
0x00ef5b1d: je     0x140ef5b3f
0x00ef5b1f: cmp    eax,0x40000
0x00ef5b24: jne    0x140ef5c99
0x00ef5b2a: mov    r8d,0x39
0x00ef5b30: lea    rdx,[rip+0x860f71]        # 0x141756aa8 ; literal="the construction and use of the water-powered trip hammer"
0x00ef5b37: mov    rcx,r9
0x00ef5b3a: jmp    0x140070e90
0x00ef5b3f: mov    r8d,0x26
0x00ef5b45: lea    rdx,[rip+0x860f34]        # 0x141756a80 ; literal="the construction and use of the orrery"
0x00ef5b4c: mov    rcx,r9
0x00ef5b4f: jmp    0x140070e90
0x00ef5b54: mov    r8d,0x2d
0x00ef5b5a: lea    rdx,[rip+0x860fbf]        # 0x141756b20 ; literal="the construction and use of mural instruments"
0x00ef5b61: mov    rcx,r9
0x00ef5b64: jmp    0x140070e90
0x00ef5b69: mov    r8d,0x38
0x00ef5b6f: lea    rdx,[rip+0x860e8a]        # 0x141756a00 ; literal="the construction and use of double-acting piston bellows"
0x00ef5b76: mov    rcx,r9
0x00ef5b79: jmp    0x140070e90
0x00ef5b7e: cmp    eax,0x100000
0x00ef5b83: je     0x140ef5bc1
0x00ef5b85: cmp    eax,0x200000
0x00ef5b8a: je     0x140ef5bac
0x00ef5b8c: cmp    eax,0x400000
0x00ef5b91: jne    0x140ef5c99
0x00ef5b97: mov    r8d,0x4f
0x00ef5b9d: lea    rdx,[rip+0x860e0c]        # 0x1417569b0 ; literal="a precise explanation of the cause of twilight involving atmospheric refraction"
0x00ef5ba4: mov    rcx,r9
0x00ef5ba7: jmp    0x140070e90
0x00ef5bac: mov    r8d,0x16
0x00ef5bb2: lea    rdx,[rip+0x860ddf]        # 0x141756998 ; literal="atmospheric refraction"
0x00ef5bb9: mov    rcx,r9
0x00ef5bbc: jmp    0x140070e90
0x00ef5bc1: mov    r8d,0x38
0x00ef5bc7: lea    rdx,[rip+0x860e72]        # 0x141756a40 ; literal="a precise description of buoyancy and water displacement"
0x00ef5bce: mov    rcx,r9
0x00ef5bd1: jmp    0x140070e90
0x00ef5bd6: mov    r8d,0x4f
0x00ef5bdc: lea    rdx,[rip+0x86106d]        # 0x141756c50 ; literal="the calculation of the height of the atmosphere based on atmospheric refraction"
0x00ef5be3: mov    rcx,r9
0x00ef5be6: jmp    0x140070e90
0x00ef5beb: cmp    eax,0x8000000
0x00ef5bf0: ja     0x140ef5c61
0x00ef5bf2: je     0x140ef5c4c
0x00ef5bf4: cmp    eax,0x1000000
0x00ef5bf9: je     0x140ef5c37
0x00ef5bfb: cmp    eax,0x2000000
0x00ef5c00: je     0x140ef5c22
0x00ef5c02: cmp    eax,0x4000000
0x00ef5c07: jne    0x140ef5c99
0x00ef5c0d: mov    r8d,0x27
0x00ef5c13: lea    rdx,[rip+0x861006]        # 0x141756c20 ; literal="the construction and use of the bellows"
0x00ef5c1a: mov    rcx,r9
0x00ef5c1d: jmp    0x140070e90
0x00ef5c22: mov    r8d,0x25
0x00ef5c28: lea    rdx,[rip+0x860fc9]        # 0x141756bf8 ; literal="the construction and use of the crank"
0x00ef5c2f: mov    rcx,r9
0x00ef5c32: jmp    0x140070e90
0x00ef5c37: mov    r8d,0x26
0x00ef5c3d: lea    rdx,[rip+0x86105c]        # 0x141756ca0 ; literal="the construction and use of the piston"
0x00ef5c44: mov    rcx,r9
0x00ef5c47: jmp    0x140070e90
0x00ef5c4c: mov    r8d,0x3c
0x00ef5c52: lea    rdx,[rip+0x860f2f]        # 0x141756b88 ; literal="the construction and use of the water-powered piston bellows"
0x00ef5c59: mov    rcx,r9
0x00ef5c5c: jmp    0x140070e90
0x00ef5c61: cmp    eax,0x10000000
0x00ef5c66: je     0x140ef5c84
0x00ef5c68: cmp    eax,0x20000000
0x00ef5c6d: jne    0x140ef5c99
0x00ef5c6f: lea    rdx,[rip+0x860eda]        # 0x141756b50 ; literal="the construction and use of the trip hammer"
0x00ef5c76: mov    r8d,0x2b
0x00ef5c7c: mov    rcx,r9
0x00ef5c7f: jmp    0x140070e90
0x00ef5c84: lea    rdx,[rip+0x860f3d]        # 0x141756bc8 ; literal="the construction and use of the water wheel"
0x00ef5c8b: mov    r8d,0x2b
0x00ef5c91: mov    rcx,r9
0x00ef5c94: jmp    0x140070e90
0x00ef5c99: ret
0x00ef5c9a: xchg   ax,ax
