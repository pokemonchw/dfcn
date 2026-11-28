; reference PE:6aea05a1:02734000; reference-description:general_ref_knowledge_scholar_flagst; RVA 0xef8b80..0xefb440; code ends 0xefaf4c
0x00ef8b80: mov    QWORD PTR [rdx+0x10],0x0
0x00ef8b88: mov    r9,rdx
0x00ef8b8b: cmp    QWORD PTR [rdx+0x18],0xf
0x00ef8b90: mov    rax,rdx
0x00ef8b93: jbe    0x140ef8b98
0x00ef8b95: mov    rax,QWORD PTR [rdx]
0x00ef8b98: mov    BYTE PTR [rax],0x0
0x00ef8b9b: movsxd rax,DWORD PTR [rcx+0x8]
0x00ef8b9f: cmp    eax,0xd
0x00ef8ba2: ja     0x140efaf49
0x00ef8ba8: lea    rdx,[rip+0xffffffffff107451]        # 0x140000000
0x00ef8baf: mov    eax,DWORD PTR [rdx+rax*4+0xefaf4c]
0x00ef8bb6: add    rax,rdx
0x00ef8bb9: jmp    rax
0x00ef8bbb: mov    eax,DWORD PTR [rcx+0xc]
0x00ef8bbe: cmp    eax,0x10000
0x00ef8bc3: ja     0x140ef8d9f
0x00ef8bc9: je     0x140ef8d8a
0x00ef8bcf: cmp    eax,0x100
0x00ef8bd4: ja     0x140ef8cbc
0x00ef8bda: je     0x140ef8ca7
0x00ef8be0: dec    eax
0x00ef8be2: cmp    eax,0x7f
0x00ef8be5: ja     0x140efaf49
0x00ef8beb: movzx  eax,BYTE PTR [rdx+rax*1+0xefafa8]
0x00ef8bf3: mov    ecx,DWORD PTR [rdx+rax*4+0xefaf84]
0x00ef8bfa: add    rcx,rdx
0x00ef8bfd: jmp    rcx
0x00ef8bff: mov    r8d,0x10
0x00ef8c05: lea    rdx,[rip+0x860664]        # 0x141759270 ; literal="formal reasoning"
0x00ef8c0c: mov    rcx,r9
0x00ef8c0f: jmp    0x140070f00
0x00ef8c14: mov    r8d,0x13
0x00ef8c1a: lea    rdx,[rip+0x860667]        # 0x141759288 ; literal="deductive reasoning"
0x00ef8c21: mov    rcx,r9
0x00ef8c24: jmp    0x140070f00
0x00ef8c29: mov    r8d,0x11
0x00ef8c2f: lea    rdx,[rip+0x860852]        # 0x141759488 ; literal="syllogistic logic"
0x00ef8c36: mov    rcx,r9
0x00ef8c39: jmp    0x140070f00
0x00ef8c3e: mov    r8d,0x17
0x00ef8c44: lea    rdx,[rip+0x860855]        # 0x1417594a0 ; literal="hypothetical syllogisms"
0x00ef8c4b: mov    rcx,r9
0x00ef8c4e: jmp    0x140070f00
0x00ef8c53: mov    r8d,0x13
0x00ef8c59: lea    rdx,[rip+0x8607f8]        # 0x141759458 ; literal="propositional logic"
0x00ef8c60: mov    rcx,r9
0x00ef8c63: jmp    0x140070f00
0x00ef8c68: mov    r8d,0x13
0x00ef8c6e: lea    rdx,[rip+0x8607fb]        # 0x141759470 ; literal="dialectic reasoning"
0x00ef8c75: mov    rcx,r9
0x00ef8c78: jmp    0x140070f00
0x00ef8c7d: mov    r8d,0x14
0x00ef8c83: lea    rdx,[rip+0x8607a6]        # 0x141759430 ; literal="analogical inference"
0x00ef8c8a: mov    rcx,r9
0x00ef8c8d: jmp    0x140070f00
0x00ef8c92: mov    r8d,0xe
0x00ef8c98: lea    rdx,[rip+0x8607a9]        # 0x141759448 ; literal="medical ethics"
0x00ef8c9f: mov    rcx,r9
0x00ef8ca2: jmp    0x140070f00
0x00ef8ca7: mov    r8d,0x23
0x00ef8cad: lea    rdx,[rip+0x860724]        # 0x1417593d8 ; literal="the meaning of individual happiness"
0x00ef8cb4: mov    rcx,r9
0x00ef8cb7: jmp    0x140070f00
0x00ef8cbc: cmp    eax,0x1000
0x00ef8cc1: ja     0x140ef8d32
0x00ef8cc3: je     0x140ef8d1d
0x00ef8cc5: cmp    eax,0x200
0x00ef8cca: je     0x140ef8d08
0x00ef8ccc: cmp    eax,0x400
0x00ef8cd1: je     0x140ef8cf3
0x00ef8cd3: cmp    eax,0x800
0x00ef8cd8: jne    0x140efaf49
0x00ef8cde: mov    r8d,0x18
0x00ef8ce4: lea    rdx,[rip+0x8608a5]        # 0x141759590 ; literal="the nature of perception"
0x00ef8ceb: mov    rcx,r9
0x00ef8cee: jmp    0x140070f00
0x00ef8cf3: mov    r8d,0x13
0x00ef8cf9: lea    rdx,[rip+0x860878]        # 0x141759578 ; literal="the nature of truth"
0x00ef8d00: mov    rcx,r9
0x00ef8d03: jmp    0x140070f00
0x00ef8d08: mov    r8d,0x2d
0x00ef8d0e: lea    rdx,[rip+0x8606eb]        # 0x141759400 ; literal="ethics as it regards the benefit of the state"
0x00ef8d15: mov    rcx,r9
0x00ef8d18: jmp    0x140070f00
0x00ef8d1d: mov    r8d,0x1b
0x00ef8d23: lea    rdx,[rip+0x860816]        # 0x141759540 ; literal="the nature of justification"
0x00ef8d2a: mov    rcx,r9
0x00ef8d2d: jmp    0x140070f00
0x00ef8d32: cmp    eax,0x2000
0x00ef8d37: je     0x140ef8d75
0x00ef8d39: cmp    eax,0x4000
0x00ef8d3e: je     0x140ef8d60
0x00ef8d40: cmp    eax,0x8000
0x00ef8d45: jne    0x140efaf49
0x00ef8d4b: mov    r8d,0x12
0x00ef8d51: lea    rdx,[rip+0x8607d0]        # 0x141759528 ; literal="the nature of time"
0x00ef8d58: mov    rcx,r9
0x00ef8d5b: jmp    0x140070f00
0x00ef8d60: mov    r8d,0x17
0x00ef8d66: lea    rdx,[rip+0x8607a3]        # 0x141759510 ; literal="the nature of existence"
0x00ef8d6d: mov    rcx,r9
0x00ef8d70: jmp    0x140070f00
0x00ef8d75: mov    r8d,0x14
0x00ef8d7b: lea    rdx,[rip+0x8607de]        # 0x141759560 ; literal="the nature of belief"
0x00ef8d82: mov    rcx,r9
0x00ef8d85: jmp    0x140070f00
0x00ef8d8a: mov    r8d,0x1b
0x00ef8d90: lea    rdx,[rip+0x860721]        # 0x1417594b8 ; literal="the nature of mind and body"
0x00ef8d97: mov    rcx,r9
0x00ef8d9a: jmp    0x140070f00
0x00ef8d9f: cmp    eax,0x1000000
0x00ef8da4: ja     0x140ef8e93
0x00ef8daa: je     0x140ef8e7e
0x00ef8db0: cmp    eax,0x100000
0x00ef8db5: ja     0x140ef8e26
0x00ef8db7: je     0x140ef8e11
0x00ef8db9: cmp    eax,0x20000
0x00ef8dbe: je     0x140ef8dfc
0x00ef8dc0: cmp    eax,0x40000
0x00ef8dc5: je     0x140ef8de7
0x00ef8dc7: cmp    eax,0x80000
0x00ef8dcc: jne    0x140efaf49
0x00ef8dd2: mov    r8d,0x14
0x00ef8dd8: lea    rdx,[rip+0x8608d9]        # 0x1417596b8 ; literal="the nature of events"
0x00ef8ddf: mov    rcx,r9
0x00ef8de2: jmp    0x140070f00
0x00ef8de7: mov    r8d,0x29
0x00ef8ded: lea    rdx,[rip+0x860894]        # 0x141759688 ; literal="the relationship between wholes and parts"
0x00ef8df4: mov    rcx,r9
0x00ef8df7: jmp    0x140070f00
0x00ef8dfc: mov    r8d,0x35
0x00ef8e02: lea    rdx,[rip+0x8606cf]        # 0x1417594d8 ; literal="the relationship between objects and their properties"
0x00ef8e09: mov    rcx,r9
0x00ef8e0c: jmp    0x140070f00
0x00ef8e11: mov    r8d,0x17
0x00ef8e17: lea    rdx,[rip+0x86083a]        # 0x141759658 ; literal="the nature of processes"
0x00ef8e1e: mov    rcx,r9
0x00ef8e21: jmp    0x140070f00
0x00ef8e26: cmp    eax,0x200000
0x00ef8e2b: je     0x140ef8e69
0x00ef8e2d: cmp    eax,0x400000
0x00ef8e32: je     0x140ef8e54
0x00ef8e34: cmp    eax,0x800000
0x00ef8e39: jne    0x140efaf49
0x00ef8e3f: mov    r8d,0x2a
0x00ef8e45: lea    rdx,[rip+0x8607dc]        # 0x141759628 ; literal="ethics as applied to interpersonal conduct"
0x00ef8e4c: mov    rcx,r9
0x00ef8e4f: jmp    0x140070f00
0x00ef8e54: mov    r8d,0x18
0x00ef8e5a: lea    rdx,[rip+0x8607a7]        # 0x141759608 ; literal="ethics as applied to war"
0x00ef8e61: mov    rcx,r9
0x00ef8e64: jmp    0x140070f00
0x00ef8e69: mov    r8d,0x17
0x00ef8e6f: lea    rdx,[rip+0x8607fa]        # 0x141759670 ; literal="the nature of causation"
0x00ef8e76: mov    rcx,r9
0x00ef8e79: jmp    0x140070f00
0x00ef8e7e: mov    r8d,0x22
0x00ef8e84: lea    rdx,[rip+0x860725]        # 0x1417595b0 ; literal="law, its forms and recommendations"
0x00ef8e8b: mov    rcx,r9
0x00ef8e8e: jmp    0x140070f00
0x00ef8e93: cmp    eax,0x10000000
0x00ef8e98: ja     0x140ef8f09
0x00ef8e9a: je     0x140ef8ef4
0x00ef8e9c: cmp    eax,0x2000000
0x00ef8ea1: je     0x140ef8edf
0x00ef8ea3: cmp    eax,0x4000000
0x00ef8ea8: je     0x140ef8eca
0x00ef8eaa: cmp    eax,0x8000000
0x00ef8eaf: jne    0x140efaf49
0x00ef8eb5: mov    r8d,0x9
0x00ef8ebb: lea    rdx,[rip+0x85eff6]        # 0x141757eb8 ; literal="etymology"
0x00ef8ec2: mov    rcx,r9
0x00ef8ec5: jmp    0x140070f00
0x00ef8eca: mov    r8d,0x7
0x00ef8ed0: lea    rdx,[rip+0x85efd9]        # 0x141757eb0 ; literal="grammar"
0x00ef8ed7: mov    rcx,r9
0x00ef8eda: jmp    0x140070f00
0x00ef8edf: mov    r8d,0x28
0x00ef8ee5: lea    rdx,[rip+0x8606ec]        # 0x1417595d8 ; literal="education, its forms and recommendations"
0x00ef8eec: mov    rcx,r9
0x00ef8eef: jmp    0x140070f00
0x00ef8ef4: mov    r8d,0x28
0x00ef8efa: lea    rdx,[rip+0x85ef4f]        # 0x141757e50 ; literal="diplomacy, its forms and recommendations"
0x00ef8f01: mov    rcx,r9
0x00ef8f04: jmp    0x140070f00
0x00ef8f09: cmp    eax,0x20000000
0x00ef8f0e: je     0x140ef8f4c
0x00ef8f10: cmp    eax,0x40000000
0x00ef8f15: je     0x140ef8f37
0x00ef8f17: cmp    eax,0x80000000
0x00ef8f1c: jne    0x140efaf49
0x00ef8f22: mov    r8d,0x2d
0x00ef8f28: lea    rdx,[rip+0x85eef1]        # 0x141757e20 ; literal="social welfare, its forms and recommendations"
0x00ef8f2f: mov    rcx,r9
0x00ef8f32: jmp    0x140070f00
0x00ef8f37: mov    r8d,0x2e
0x00ef8f3d: lea    rdx,[rip+0x85eeac]        # 0x141757df0 ; literal="economic policy, its forms and recommendations"
0x00ef8f44: mov    rcx,r9
0x00ef8f47: jmp    0x140070f00
0x00ef8f4c: mov    r8d,0x29
0x00ef8f52: lea    rdx,[rip+0x85ef27]        # 0x141757e80 ; literal="government, its forms and recommendations"
0x00ef8f59: mov    rcx,r9
0x00ef8f5c: jmp    0x140070f00
0x00ef8f61: mov    edx,DWORD PTR [rcx+0xc]
0x00ef8f64: sub    edx,0x1
0x00ef8f67: je     0x140ef8fd5
0x00ef8f69: sub    edx,0x1
0x00ef8f6c: je     0x140ef8fc0
0x00ef8f6e: sub    edx,0x2
0x00ef8f71: je     0x140ef8fab
0x00ef8f73: sub    edx,0x4
0x00ef8f76: je     0x140ef8f96
0x00ef8f78: cmp    edx,0x8
0x00ef8f7b: jne    0x140efaf49
0x00ef8f81: mov    r8d,0xc
0x00ef8f87: lea    rdx,[rip+0x85efba]        # 0x141757f48 ; literal="dictionaries"
0x00ef8f8e: mov    rcx,r9
0x00ef8f91: jmp    0x140070f00
0x00ef8f96: mov    r8d,0x10
0x00ef8f9c: lea    rdx,[rip+0x85eff5]        # 0x141757f98 ; literal="the value of art"
0x00ef8fa3: mov    rcx,r9
0x00ef8fa6: jmp    0x140070f00
0x00ef8fab: mov    r8d,0x14
0x00ef8fb1: lea    rdx,[rip+0x85efc8]        # 0x141757f80 ; literal="the nature of beauty"
0x00ef8fb8: mov    rcx,r9
0x00ef8fbb: jmp    0x140070f00
0x00ef8fc0: mov    r8d,0x10
0x00ef8fc6: lea    rdx,[rip+0x85ee0b]        # 0x141757dd8 ; literal="direct inference"
0x00ef8fcd: mov    rcx,r9
0x00ef8fd0: jmp    0x140070f00
0x00ef8fd5: mov    r8d,0x13
0x00ef8fdb: lea    rdx,[rip+0x85edde]        # 0x141757dc0 ; literal="inductive reasoning"
0x00ef8fe2: mov    rcx,r9
0x00ef8fe5: jmp    0x140070f00
0x00ef8fea: mov    eax,DWORD PTR [rcx+0xc]
0x00ef8fed: cmp    eax,0x10000
0x00ef8ff2: ja     0x140ef91ce
0x00ef8ff8: je     0x140ef91b9
0x00ef8ffe: cmp    eax,0x100
0x00ef9003: ja     0x140ef90eb
0x00ef9009: je     0x140ef90d6
0x00ef900f: dec    eax
0x00ef9011: cmp    eax,0x7f
0x00ef9014: ja     0x140efaf49
0x00ef901a: movzx  eax,BYTE PTR [rdx+rax*1+0xefb04c]
0x00ef9022: mov    ecx,DWORD PTR [rdx+rax*4+0xefb028]
0x00ef9029: add    rcx,rdx
0x00ef902c: jmp    rcx
0x00ef902e: mov    r8d,0x24
0x00ef9034: lea    rdx,[rip+0x85ef1d]        # 0x141757f58 ; literal="the method of proof by contradiction"
0x00ef903b: mov    rcx,r9
0x00ef903e: jmp    0x140070f00
0x00ef9043: mov    r8d,0x18
0x00ef9049: lea    rdx,[rip+0x85eeb0]        # 0x141757f00 ; literal="a symbol for nothingness"
0x00ef9050: mov    rcx,r9
0x00ef9053: jmp    0x140070f00
0x00ef9058: mov    r8d,0x20
0x00ef905e: lea    rdx,[rip+0x85eebb]        # 0x141757f20 ; literal="notation for negative quantities"
0x00ef9065: mov    rcx,r9
0x00ef9068: jmp    0x140070f00
0x00ef906d: mov    r8d,0x1f
0x00ef9073: lea    rdx,[rip+0x85ee4e]        # 0x141757ec8 ; literal="notation for very large numbers"
0x00ef907a: mov    rcx,r9
0x00ef907d: jmp    0x140070f00
0x00ef9082: mov    r8d,0x13
0x00ef9088: lea    rdx,[rip+0x85ee59]        # 0x141757ee8 ; literal="positional notation"
0x00ef908f: mov    rcx,r9
0x00ef9092: jmp    0x140070f00
0x00ef9097: mov    r8d,0x40
0x00ef909d: lea    rdx,[rip+0x85f14c]        # 0x1417581f0 ; literal="geometric objects:  points, lines, circles, triangles, and so on"
0x00ef90a4: mov    rcx,r9
0x00ef90a7: jmp    0x140070f00
0x00ef90ac: mov    r8d,0x18
0x00ef90b2: lea    rdx,[rip+0x85f17f]        # 0x141758238 ; literal="the method of exhaustion"
0x00ef90b9: mov    rcx,r9
0x00ef90bc: jmp    0x140070f00
0x00ef90c1: mov    r8d,0x31
0x00ef90c7: lea    rdx,[rip+0x85f052]        # 0x141758120 ; literal="the properties of similar and congruent triangles"
0x00ef90ce: mov    rcx,r9
0x00ef90d1: jmp    0x140070f00
0x00ef90d6: mov    r8d,0x8c
0x00ef90dc: lea    rdx,[rip+0x85f07d]        # 0x141758160 ; literal="the relationship between the length of the altitude of a right triangle and the lengths of the segments into which it divides the hypotenuse"
0x00ef90e3: mov    rcx,r9
0x00ef90e6: jmp    0x140070f00
0x00ef90eb: cmp    eax,0x1000
0x00ef90f0: ja     0x140ef9161
0x00ef90f2: je     0x140ef914c
0x00ef90f4: cmp    eax,0x200
0x00ef90f9: je     0x140ef9137
0x00ef90fb: cmp    eax,0x400
0x00ef9100: je     0x140ef9122
0x00ef9102: cmp    eax,0x800
0x00ef9107: jne    0x140efaf49
0x00ef910d: mov    r8d,0x62
0x00ef9113: lea    rdx,[rip+0x85ee96]        # 0x141757fb0 ; literal="the relationship between the lengths of the hypotenuse of a right triangle and the other two sides"
0x00ef911a: mov    rcx,r9
0x00ef911d: jmp    0x140070f00
0x00ef9122: mov    r8d,0x4b
0x00ef9128: lea    rdx,[rip+0x85efa1]        # 0x1417580d0 ; literal="the angles of triangles inscribed in a circle with one edge on the diameter"
0x00ef912f: mov    rcx,r9
0x00ef9132: jmp    0x140070f00
0x00ef9137: mov    r8d,0x35
0x00ef913d: lea    rdx,[rip+0x85ef54]        # 0x141758098 ; literal="the equality of the base angle of isosceles triangles"
0x00ef9144: mov    rcx,r9
0x00ef9147: jmp    0x140070f00
0x00ef914c: mov    r8d,0x77
0x00ef9152: lea    rdx,[rip+0x85eec7]        # 0x141758020 ; literal="examples of triples of small whole numbers which, when taken together, are the lengths of the sides of a right triangle"
0x00ef9159: mov    rcx,r9
0x00ef915c: jmp    0x140070f00
0x00ef9161: cmp    eax,0x2000
0x00ef9166: je     0x140ef91a4
0x00ef9168: cmp    eax,0x4000
0x00ef916d: je     0x140ef918f
0x00ef916f: cmp    eax,0x8000
0x00ef9174: jne    0x140efaf49
0x00ef917a: mov    r8d,0x27
0x00ef9180: lea    rdx,[rip+0x85f1d1]        # 0x141758358 ; literal="the existence of incommensurable ratios"
0x00ef9187: mov    rcx,r9
0x00ef918a: jmp    0x140070f00
0x00ef918f: mov    r8d,0x7c
0x00ef9195: lea    rdx,[rip+0x85f284]        # 0x141758420 ; literal="examples of triples of very large whole numbers which, when taken together, are the lengths of the sides of a right triangle"
0x00ef919c: mov    rcx,r9
0x00ef919f: jmp    0x140070f00
0x00ef91a4: mov    r8d,0x77
0x00ef91aa: lea    rdx,[rip+0x85f1ef]        # 0x1417583a0 ; literal="examples of triples of large whole numbers which, when taken together, are the lengths of the sides of a right triangle"
0x00ef91b1: mov    rcx,r9
0x00ef91b4: jmp    0x140070f00
0x00ef91b9: mov    r8d,0x13
0x00ef91bf: lea    rdx,[rip+0x85f1ba]        # 0x141758380 ; literal="axiomatic reasoning"
0x00ef91c6: mov    rcx,r9
0x00ef91c9: jmp    0x140070f00
0x00ef91ce: cmp    eax,0x1000000
0x00ef91d3: ja     0x140ef92c2
0x00ef91d9: je     0x140ef92ad
0x00ef91df: cmp    eax,0x100000
0x00ef91e4: ja     0x140ef9255
0x00ef91e6: je     0x140ef9240
0x00ef91e8: cmp    eax,0x20000
0x00ef91ed: je     0x140ef922b
0x00ef91ef: cmp    eax,0x40000
0x00ef91f4: je     0x140ef9216
0x00ef91f6: cmp    eax,0x80000
0x00ef91fb: jne    0x140efaf49
0x00ef9201: mov    r8d,0x33
0x00ef9207: lea    rdx,[rip+0x85f04a]        # 0x141758258 ; literal="the computation of the volume of different pyramids"
0x00ef920e: mov    rcx,r9
0x00ef9211: jmp    0x140070f00
0x00ef9216: mov    r8d,0x45
0x00ef921c: lea    rdx,[rip+0x85f0ed]        # 0x141758310 ; literal="an algorithm for computing the greatest common divisor of two numbers"
0x00ef9223: mov    rcx,r9
0x00ef9226: jmp    0x140070f00
0x00ef922b: mov    r8d,0x48
0x00ef9231: lea    rdx,[rip+0x85f088]        # 0x1417582c0 ; literal="the unique decomposition of a number into products of its prime divisors"
0x00ef9238: mov    rcx,r9
0x00ef923b: jmp    0x140070f00
0x00ef9240: mov    r8d,0x27
0x00ef9246: lea    rdx,[rip+0x85f043]        # 0x141758290 ; literal="the computation of the volume of a cone"
0x00ef924d: mov    rcx,r9
0x00ef9250: jmp    0x140070f00
0x00ef9255: cmp    eax,0x200000
0x00ef925a: je     0x140ef9298
0x00ef925c: cmp    eax,0x400000
0x00ef9261: je     0x140ef9283
0x00ef9263: cmp    eax,0x800000
0x00ef9268: jne    0x140efaf49
0x00ef926e: mov    r8d,0x50
0x00ef9274: lea    rdx,[rip+0x85f3c5]        # 0x141758640 ; literal="an algorithm for dividing one number into another, possibly yielding a remainder"
0x00ef927b: mov    rcx,r9
0x00ef927e: jmp    0x140070f00
0x00ef9283: mov    r8d,0x94
0x00ef9289: lea    rdx,[rip+0x85f470]        # 0x141758700 ; literal="an approximate value of the ratio of the circumference of a circle to its diameter, using the circumference of polygons and the method of exhaustion"
0x00ef9290: mov    rcx,r9
0x00ef9293: jmp    0x140070f00
0x00ef9298: mov    r8d,0x29
0x00ef929e: lea    rdx,[rip+0x85f423]        # 0x1417586c8 ; literal="the computation of the volume of a sphere"
0x00ef92a5: mov    rcx,r9
0x00ef92a8: jmp    0x140070f00
0x00ef92ad: mov    r8d,0x29
0x00ef92b3: lea    rdx,[rip+0x85f3de]        # 0x141758698 ; literal="a table of chord lengths indexed by angle"
0x00ef92ba: mov    rcx,r9
0x00ef92bd: jmp    0x140070f00
0x00ef92c2: cmp    eax,0x10000000
0x00ef92c7: ja     0x140ef9338
0x00ef92c9: je     0x140ef9323
0x00ef92cb: cmp    eax,0x2000000
0x00ef92d0: je     0x140ef930e
0x00ef92d2: cmp    eax,0x4000000
0x00ef92d7: je     0x140ef92f9
0x00ef92d9: cmp    eax,0x8000000
0x00ef92de: jne    0x140efaf49
0x00ef92e4: mov    r8d,0x87
0x00ef92ea: lea    rdx,[rip+0x85f1af]        # 0x1417584a0 ; literal="an approximation of the ratio of the circumference of a circle to its diameter, using the area of polygons and the method of exhaustion"
0x00ef92f1: mov    rcx,r9
0x00ef92f4: jmp    0x140070f00
0x00ef92f9: mov    r8d,0x84
0x00ef92ff: lea    rdx,[rip+0x85f2aa]        # 0x1417585b0 ; literal="the relationship between the area of a circle and its radius, involving the ratio of the circumference of the circle to its diameter"
0x00ef9306: mov    rcx,r9
0x00ef9309: jmp    0x140070f00
0x00ef930e: mov    r8d,0x4b
0x00ef9314: lea    rdx,[rip+0x85f245]        # 0x141758560 ; literal="the computation of the area of a triangle from its three side lengths alone"
0x00ef931b: mov    rcx,r9
0x00ef931e: jmp    0x140070f00
0x00ef9323: mov    r8d,0x33
0x00ef9329: lea    rdx,[rip+0x85f1f8]        # 0x141758528 ; literal="the categorization and properties of conic sections"
0x00ef9330: mov    rcx,r9
0x00ef9333: jmp    0x140070f00
0x00ef9338: cmp    eax,0x20000000
0x00ef933d: je     0x140ef937b
0x00ef933f: cmp    eax,0x40000000
0x00ef9344: je     0x140ef9366
0x00ef9346: cmp    eax,0x80000000
0x00ef934b: jne    0x140efaf49
0x00ef9351: mov    r8d,0x2a
0x00ef9357: lea    rdx,[rip+0x85f53a]        # 0x141758898 ; literal="an algorithm for calculating prime numbers"
0x00ef935e: mov    rcx,r9
0x00ef9361: jmp    0x140070f00
0x00ef9366: mov    r8d,0x2a
0x00ef936c: lea    rdx,[rip+0x85f605]        # 0x141758978 ; literal="the area enclosed by a parabola and a line"
0x00ef9373: mov    rcx,r9
0x00ef9376: jmp    0x140070f00
0x00ef937b: mov    r8d,0x63
0x00ef9381: lea    rdx,[rip+0x85f588]        # 0x141758910 ; literal="an algorithm for computing a number which has given remainders when divided by several given primes"
0x00ef9388: mov    rcx,r9
0x00ef938b: jmp    0x140070f00
0x00ef9390: mov    eax,DWORD PTR [rcx+0xc]
0x00ef9393: cmp    eax,0x100
0x00ef9398: ja     0x140ef9480
0x00ef939e: je     0x140ef946b
0x00ef93a4: dec    eax
0x00ef93a6: cmp    eax,0x7f
0x00ef93a9: ja     0x140efaf49
0x00ef93af: movzx  eax,BYTE PTR [rdx+rax*1+0xefb0f0]
0x00ef93b7: mov    ecx,DWORD PTR [rdx+rax*4+0xefb0cc]
0x00ef93be: add    rcx,rdx
0x00ef93c1: jmp    rcx
0x00ef93c3: mov    r8d,0x3b
0x00ef93c9: lea    rdx,[rip+0x85f4f8]        # 0x1417588c8 ; literal="an approximation for the length of the diagonal of a square"
0x00ef93d0: mov    rcx,r9
0x00ef93d3: jmp    0x140070f00
0x00ef93d8: mov    r8d,0x34
0x00ef93de: lea    rdx,[rip+0x85f41b]        # 0x141758800 ; literal="a proof that there are infinitely many prime numbers"
0x00ef93e5: mov    rcx,r9
0x00ef93e8: jmp    0x140070f00
0x00ef93ed: mov    r8d,0x54
0x00ef93f3: lea    rdx,[rip+0x85f446]        # 0x141758840 ; literal="a proof that the length of the diagonal of a square is incommensurable with its edge"
0x00ef93fa: mov    rcx,r9
0x00ef93fd: jmp    0x140070f00
0x00ef9402: mov    r8d,0x2f
0x00ef9408: lea    rdx,[rip+0x85f389]        # 0x141758798 ; literal="the computation of the surface area of a sphere"
0x00ef940f: mov    rcx,r9
0x00ef9412: jmp    0x140070f00
0x00ef9417: mov    r8d,0x32
0x00ef941d: lea    rdx,[rip+0x85f3a4]        # 0x1417587c8 ; literal="simple formulas for certain arbitrarily large sums"
0x00ef9424: mov    rcx,r9
0x00ef9427: jmp    0x140070f00
0x00ef942c: mov    r8d,0x28
0x00ef9432: lea    rdx,[rip+0x85f79f]        # 0x141758bd8 ; literal="methods for solving systems of equations"
0x00ef9439: mov    rcx,r9
0x00ef943c: jmp    0x140070f00
0x00ef9441: mov    r8d,0x40
0x00ef9447: lea    rdx,[rip+0x85f7c2]        # 0x141758c10 ; literal="the techniques of balancing and completion for solving equations"
0x00ef944e: mov    rcx,r9
0x00ef9451: jmp    0x140070f00
0x00ef9456: mov    r8d,0x3e
0x00ef945c: lea    rdx,[rip+0x85f705]        # 0x141758b68 ; literal="the solving of quadratic equations by completion of the square"
0x00ef9463: mov    rcx,r9
0x00ef9466: jmp    0x140070f00
0x00ef946b: mov    r8d,0x2a
0x00ef9471: lea    rdx,[rip+0x85f730]        # 0x141758ba8 ; literal="a formula which solves quadratic equations"
0x00ef9478: mov    rcx,r9
0x00ef947b: jmp    0x140070f00
0x00ef9480: cmp    eax,0x2000
0x00ef9485: ja     0x140ef9516
0x00ef948b: je     0x140ef9501
0x00ef948d: cmp    eax,0x200
0x00ef9492: je     0x140ef94ec
0x00ef9494: cmp    eax,0x400
0x00ef9499: je     0x140ef94d7
0x00ef949b: cmp    eax,0x800
0x00ef94a0: je     0x140ef94c2
0x00ef94a2: cmp    eax,0x1000
0x00ef94a7: jne    0x140efaf49
0x00ef94ad: mov    r8d,0x52
0x00ef94b3: lea    rdx,[rip+0x85f546]        # 0x141758a00 ; literal="a triangular configuration of numbers relating to the successive powers of any sum"
0x00ef94ba: mov    rcx,r9
0x00ef94bd: jmp    0x140070f00
0x00ef94c2: mov    r8d,0x47
0x00ef94c8: lea    rdx,[rip+0x85f4e1]        # 0x1417589b0 ; literal="trigonometric identities relating to the sums and differences of angles"
0x00ef94cf: mov    rcx,r9
0x00ef94d2: jmp    0x140070f00
0x00ef94d7: mov    r8d,0x93
0x00ef94dd: lea    rdx,[rip+0x85f5ec]        # 0x141758ad0 ; literal="the relationship between the half chords of a triangle's angles, the opposite side lengths, and the diameter of the triangle's circumscribed circle"
0x00ef94e4: mov    rcx,r9
0x00ef94e7: jmp    0x140070f00
0x00ef94ec: mov    r8d,0x6a
0x00ef94f2: lea    rdx,[rip+0x85f567]        # 0x141758a60 ; literal="notation for abbreviating the unknown and other elements of an equation in a systematic and useful fashion"
0x00ef94f9: mov    rcx,r9
0x00ef94fc: jmp    0x140070f00
0x00ef9501: mov    r8d,0x50
0x00ef9507: lea    rdx,[rip+0x85f842]        # 0x141758d50 ; literal="methods for solving certain equations involving powers higher than the quadratic"
0x00ef950e: mov    rcx,r9
0x00ef9511: jmp    0x140070f00
0x00ef9516: cmp    eax,0x4000
0x00ef951b: je     0x140ef9559
0x00ef951d: cmp    eax,0x8000
0x00ef9522: je     0x140ef9544
0x00ef9524: cmp    eax,0x10000
0x00ef9529: jne    0x140efaf49
0x00ef952f: mov    r8d,0x18
0x00ef9535: lea    rdx,[rip+0x85f7ec]        # 0x141758d28 ; literal="the properties of chords"
0x00ef953c: mov    rcx,r9
0x00ef953f: jmp    0x140070f00
0x00ef9544: mov    r8d,0x25
0x00ef954a: lea    rdx,[rip+0x85f7af]        # 0x141758d00 ; literal="the divergence of the harmonic series"
0x00ef9551: mov    rcx,r9
0x00ef9554: jmp    0x140070f00
0x00ef9559: mov    r8d,0x2f
0x00ef955f: lea    rdx,[rip+0x85f842]        # 0x141758da8 ; literal="experiments with symbolic notation for addition"
0x00ef9566: mov    rcx,r9
0x00ef9569: jmp    0x140070f00
0x00ef956e: mov    eax,DWORD PTR [rcx+0xc]
0x00ef9571: cmp    eax,0x400
0x00ef9576: ja     0x140ef96b1
0x00ef957c: je     0x140ef969c
0x00ef9582: cmp    eax,0x20
0x00ef9585: ja     0x140ef962c
0x00ef958b: je     0x140ef9617
0x00ef9591: sub    eax,0x1
0x00ef9594: je     0x140ef9602
0x00ef9596: sub    eax,0x1
0x00ef9599: je     0x140ef95ed
0x00ef959b: sub    eax,0x2
0x00ef959e: je     0x140ef95d8
0x00ef95a0: sub    eax,0x4
0x00ef95a3: je     0x140ef95c3
0x00ef95a5: cmp    eax,0x8
0x00ef95a8: jne    0x140efaf49
0x00ef95ae: mov    r8d,0x1f
0x00ef95b4: lea    rdx,[rip+0x860d55]        # 0x14175a310 ; literal="the causes of historical events"
0x00ef95bb: mov    rcx,r9
0x00ef95be: jmp    0x140070f00
0x00ef95c3: mov    r8d,0x24
0x00ef95c9: lea    rdx,[rip+0x85f6c0]        # 0x141758c90 ; literal="using personal interviews as sources"
0x00ef95d0: mov    rcx,r9
0x00ef95d3: jmp    0x140070f00
0x00ef95d8: mov    r8d,0x30
0x00ef95de: lea    rdx,[rip+0x85f673]        # 0x141758c58 ; literal="the role of state bias and propaganda in sources"
0x00ef95e5: mov    rcx,r9
0x00ef95e8: jmp    0x140070f00
0x00ef95ed: mov    r8d,0x24
0x00ef95f3: lea    rdx,[rip+0x85f6de]        # 0x141758cd8 ; literal="the role of systemic bias in sources"
0x00ef95fa: mov    rcx,r9
0x00ef95fd: jmp    0x140070f00
0x00ef9602: mov    r8d,0x1a
0x00ef9608: lea    rdx,[rip+0x85f6a9]        # 0x141758cb8 ; literal="the reliability of sources"
0x00ef960f: mov    rcx,r9
0x00ef9612: jmp    0x140070f00
0x00ef9617: mov    r8d,0x2a
0x00ef961d: lea    rdx,[rip+0x860d0c]        # 0x14175a330 ; literal="historical, governmental and social cycles"
0x00ef9624: mov    rcx,r9
0x00ef9627: jmp    0x140070f00
0x00ef962c: sub    eax,0x40
0x00ef962f: je     0x140ef9687
0x00ef9631: sub    eax,0x40
0x00ef9634: je     0x140ef9672
0x00ef9636: sub    eax,0x80
0x00ef963b: je     0x140ef965d
0x00ef963d: cmp    eax,0x100
0x00ef9642: jne    0x140efaf49
0x00ef9648: mov    r8d,0x7c
0x00ef964e: lea    rdx,[rip+0x860beb]        # 0x14175a240 ; literal="the method of compiling several biographies to compare and contrast the subjects' character and to gain insight into history"
0x00ef9655: mov    rcx,r9
0x00ef9658: jmp    0x140070f00
0x00ef965d: mov    r8d,0x38
0x00ef9663: lea    rdx,[rip+0x860b96]        # 0x14175a200 ; literal="the method of writing the history of a single individual"
0x00ef966a: mov    rcx,r9
0x00ef966d: jmp    0x140070f00
0x00ef9672: mov    r8d,0x27
0x00ef9678: lea    rdx,[rip+0x860c69]        # 0x14175a2e8 ; literal="conflict between members of a community"
0x00ef967f: mov    rcx,r9
0x00ef9682: jmp    0x140070f00
0x00ef9687: mov    r8d,0x24
0x00ef968d: lea    rdx,[rip+0x860c2c]        # 0x14175a2c0 ; literal="bonds between members of a community"
0x00ef9694: mov    rcx,r9
0x00ef9697: jmp    0x140070f00
0x00ef969c: mov    r8d,0x3e
0x00ef96a2: lea    rdx,[rip+0x860aa7]        # 0x14175a150 ; literal="the compilation of brief biographies into one large collection"
0x00ef96a9: mov    rcx,r9
0x00ef96ac: jmp    0x140070f00
0x00ef96b1: cmp    eax,0x8000
0x00ef96b6: ja     0x140ef9747
0x00ef96bc: je     0x140ef9732
0x00ef96be: cmp    eax,0x800
0x00ef96c3: je     0x140ef971d
0x00ef96c5: cmp    eax,0x1000
0x00ef96ca: je     0x140ef9708
0x00ef96cc: cmp    eax,0x2000
0x00ef96d1: je     0x140ef96f3
0x00ef96d3: cmp    eax,0x4000
0x00ef96d8: jne    0x140efaf49
0x00ef96de: mov    r8d,0x52
0x00ef96e4: lea    rdx,[rip+0x860df5]        # 0x14175a4e0 ; literal="the method of accurately and comprehensively describing cultures and civilizations"
0x00ef96eb: mov    rcx,r9
0x00ef96ee: jmp    0x140070f00
0x00ef96f3: mov    r8d,0x34
0x00ef96f9: lea    rdx,[rip+0x860ed0]        # 0x14175a5d0 ; literal="the compilation of many summaries into a single text"
0x00ef9700: mov    rcx,r9
0x00ef9703: jmp    0x140070f00
0x00ef9708: mov    r8d,0x4a
0x00ef970e: lea    rdx,[rip+0x860e6b]        # 0x14175a580 ; literal="the compilation of family lineages and methods of displaying them artfully"
0x00ef9715: mov    rcx,r9
0x00ef9718: jmp    0x140070f00
0x00ef971d: mov    r8d,0x6a
0x00ef9723: lea    rdx,[rip+0x860a66]        # 0x14175a190 ; literal="the method of writing a biography of oneself, particularly as it concerns a military campaign or adventure"
0x00ef972a: mov    rcx,r9
0x00ef972d: jmp    0x140070f00
0x00ef9732: mov    r8d,0x3a
0x00ef9738: lea    rdx,[rip+0x860df9]        # 0x14175a538 ; literal="the method of comparing and contrasting different cultures"
0x00ef973f: mov    rcx,r9
0x00ef9742: jmp    0x140070f00
0x00ef9747: cmp    eax,0x10000
0x00ef974c: je     0x140ef97a6
0x00ef974e: cmp    eax,0x20000
0x00ef9753: je     0x140ef9791
0x00ef9755: cmp    eax,0x40000
0x00ef975a: je     0x140ef977c
0x00ef975c: cmp    eax,0x80000
0x00ef9761: jne    0x140efaf49
0x00ef9767: mov    r8d,0x54
0x00ef976d: lea    rdx,[rip+0x860c4c]        # 0x14175a3c0 ; literal="the method of examining artifacts to determine how techniques have changed over time"
0x00ef9774: mov    rcx,r9
0x00ef9777: jmp    0x140070f00
0x00ef977c: mov    r8d,0x54
0x00ef9782: lea    rdx,[rip+0x860bd7]        # 0x14175a360 ; literal="the method of collecting and evaluating artifacts to learn about history and culture"
0x00ef9789: mov    rcx,r9
0x00ef978c: jmp    0x140070f00
0x00ef9791: mov    r8d,0x64
0x00ef9797: lea    rdx,[rip+0x860cd2]        # 0x14175a470 ; literal="the exploration of how history would be different if some key past events had transpired differently"
0x00ef979e: mov    rcx,r9
0x00ef97a1: jmp    0x140070f00
0x00ef97a6: mov    r8d,0x49
0x00ef97ac: lea    rdx,[rip+0x860c6d]        # 0x14175a420 ; literal="the role of cultural differences in source reliability and interpretation"
0x00ef97b3: mov    rcx,r9
0x00ef97b6: jmp    0x140070f00
0x00ef97bb: mov    eax,DWORD PTR [rcx+0xc]
0x00ef97be: cmp    eax,0x400
0x00ef97c3: ja     0x140ef98fe
0x00ef97c9: je     0x140ef98e9
0x00ef97cf: cmp    eax,0x20
0x00ef97d2: ja     0x140ef9879
0x00ef97d8: je     0x140ef9864
0x00ef97de: sub    eax,0x1
0x00ef97e1: je     0x140ef984f
0x00ef97e3: sub    eax,0x1
0x00ef97e6: je     0x140ef983a
0x00ef97e8: sub    eax,0x2
0x00ef97eb: je     0x140ef9825
0x00ef97ed: sub    eax,0x4
0x00ef97f0: je     0x140ef9810
0x00ef97f2: cmp    eax,0x8
0x00ef97f5: jne    0x140efaf49
0x00ef97fb: mov    r8d,0x2d
0x00ef9801: lea    rdx,[rip+0x860e68]        # 0x14175a670 ; literal="the height of the tides, the moon and the sun"
0x00ef9808: mov    rcx,r9
0x00ef980b: jmp    0x140070f00
0x00ef9810: mov    r8d,0x2f
0x00ef9816: lea    rdx,[rip+0x860ecb]        # 0x14175a6e8 ; literal="the relationship between the moon and the tides"
0x00ef981d: mov    rcx,r9
0x00ef9820: jmp    0x140070f00
0x00ef9825: mov    r8d,0x14
0x00ef982b: lea    rdx,[rip+0x860e9e]        # 0x14175a6d0 ; literal="the path of the moon"
0x00ef9832: mov    rcx,r9
0x00ef9835: jmp    0x140070f00
0x00ef983a: mov    r8d,0x2c
0x00ef9840: lea    rdx,[rip+0x860ee9]        # 0x14175a730 ; literal="the rise of the moon according to the season"
0x00ef9847: mov    rcx,r9
0x00ef984a: jmp    0x140070f00
0x00ef984f: mov    r8d,0x16
0x00ef9855: lea    rdx,[rip+0x860ebc]        # 0x14175a718 ; literal="the phases of the moon"
0x00ef985c: mov    rcx,r9
0x00ef985f: jmp    0x140070f00
0x00ef9864: lea    rdx,[rip+0x860e35]        # 0x14175a6a0 ; literal="the rise of the sun according to the season"
0x00ef986b: mov    r8d,0x2b
0x00ef9871: mov    rcx,r9
0x00ef9874: jmp    0x140070f00
0x00ef9879: sub    eax,0x40
0x00ef987c: je     0x140ef98d4
0x00ef987e: sub    eax,0x40
0x00ef9881: je     0x140ef98bf
0x00ef9883: sub    eax,0x80
0x00ef9888: je     0x140ef98aa
0x00ef988a: cmp    eax,0x100
0x00ef988f: jne    0x140efaf49
0x00ef9895: mov    r8d,0x2e
0x00ef989b: lea    rdx,[rip+0x861006]        # 0x14175a8a8 ; literal="the theory that the world moves around the sun"
0x00ef98a2: mov    rcx,r9
0x00ef98a5: jmp    0x140070f00
0x00ef98aa: mov    r8d,0x2e
0x00ef98b0: lea    rdx,[rip+0x860fc1]        # 0x14175a878 ; literal="the theory that the sun moves around the world"
0x00ef98b7: mov    rcx,r9
0x00ef98ba: jmp    0x140070f00
0x00ef98bf: mov    r8d,0x29
0x00ef98c5: lea    rdx,[rip+0x860d74]        # 0x14175a640 ; literal="the variation of daylight with the season"
0x00ef98cc: mov    rcx,r9
0x00ef98cf: jmp    0x140070f00
0x00ef98d4: mov    r8d,0x31
0x00ef98da: lea    rdx,[rip+0x860d27]        # 0x14175a608 ; literal="the relationship between the lunar and solar year"
0x00ef98e1: mov    rcx,r9
0x00ef98e4: jmp    0x140070f00
0x00ef98e9: mov    r8d,0x25
0x00ef98ef: lea    rdx,[rip+0x860f3a]        # 0x14175a830 ; literal="the dates of lunar and solar eclipses"
0x00ef98f6: mov    rcx,r9
0x00ef98f9: jmp    0x140070f00
0x00ef98fe: cmp    eax,0x8000
0x00ef9903: ja     0x140ef9994
0x00ef9909: je     0x140ef997f
0x00ef990b: cmp    eax,0x800
0x00ef9910: je     0x140ef996a
0x00ef9912: cmp    eax,0x1000
0x00ef9917: je     0x140ef9955
0x00ef9919: cmp    eax,0x2000
0x00ef991e: je     0x140ef9940
0x00ef9920: cmp    eax,0x4000
0x00ef9925: jne    0x140efaf49
0x00ef992b: mov    r8d,0x2e
0x00ef9931: lea    rdx,[rip+0x860e28]        # 0x14175a760 ; literal="the classification of stars according to color"
0x00ef9938: mov    rcx,r9
0x00ef993b: jmp    0x140070f00
0x00ef9940: mov    r8d,0x32
0x00ef9946: lea    rdx,[rip+0x860eab]        # 0x14175a7f8 ; literal="the precise compilation of information about stars"
0x00ef994d: mov    rcx,r9
0x00ef9950: jmp    0x140070f00
0x00ef9955: mov    r8d,0x2a
0x00ef995b: lea    rdx,[rip+0x860e66]        # 0x14175a7c8 ; literal="the compilation of information about stars"
0x00ef9962: mov    rcx,r9
0x00ef9965: jmp    0x140070f00
0x00ef996a: mov    r8d,0x1b
0x00ef9970: lea    rdx,[rip+0x860ee1]        # 0x14175a858 ; literal="the creation of star charts"
0x00ef9977: mov    rcx,r9
0x00ef997a: jmp    0x140070f00
0x00ef997f: mov    r8d,0x33
0x00ef9985: lea    rdx,[rip+0x860e04]        # 0x14175a790 ; literal="the classification of stars according to brightness"
0x00ef998c: mov    rcx,r9
0x00ef998f: jmp    0x140070f00
0x00ef9994: cmp    eax,0x10000
0x00ef9999: je     0x140ef99f3
0x00ef999b: cmp    eax,0x20000
0x00ef99a0: je     0x140ef99de
0x00ef99a2: cmp    eax,0x40000
0x00ef99a7: je     0x140ef99c9
0x00ef99a9: cmp    eax,0x80000
0x00ef99ae: jne    0x140efaf49
0x00ef99b4: mov    r8d,0x4a
0x00ef99ba: lea    rdx,[rip+0x860fff]        # 0x14175a9c0 ; literal="the method of forming precise models for the paths of astronomical objects"
0x00ef99c1: mov    rcx,r9
0x00ef99c4: jmp    0x140070f00
0x00ef99c9: mov    r8d,0x2d
0x00ef99cf: lea    rdx,[rip+0x860fba]        # 0x14175a990 ; literal="methods of empirical observation in astronomy"
0x00ef99d6: mov    rcx,r9
0x00ef99d9: jmp    0x140070f00
0x00ef99de: mov    r8d,0x3a
0x00ef99e4: lea    rdx,[rip+0x86103d]        # 0x14175aa28 ; literal="the precession of the equinoxes over great periods of time"
0x00ef99eb: mov    rcx,r9
0x00ef99ee: jmp    0x140070f00
0x00ef99f3: mov    r8d,0x16
0x00ef99f9: lea    rdx,[rip+0x861010]        # 0x14175aa10 ; literal="the shape of the world"
0x00ef9a00: mov    rcx,r9
0x00ef9a03: jmp    0x140070f00
0x00ef9a08: mov    eax,DWORD PTR [rcx+0xc]
0x00ef9a0b: cmp    eax,0x40
0x00ef9a0e: ja     0x140ef9acc
0x00ef9a14: je     0x140ef9ab7
0x00ef9a1a: dec    eax
0x00ef9a1c: cmp    eax,0x1f
0x00ef9a1f: ja     0x140efaf49
0x00ef9a25: movzx  eax,BYTE PTR [rdx+rax*1+0xefb18c]
0x00ef9a2d: mov    ecx,DWORD PTR [rdx+rax*4+0xefb170]
0x00ef9a34: add    rcx,rdx
0x00ef9a37: jmp    rcx
0x00ef9a39: mov    r8d,0x1b
0x00ef9a3f: lea    rdx,[rip+0x860f02]        # 0x14175a948 ; literal="the dissection of creatures"
0x00ef9a46: mov    rcx,r9
0x00ef9a49: jmp    0x140070f00
0x00ef9a4e: mov    r8d,0x21
0x00ef9a54: lea    rdx,[rip+0x860f0d]        # 0x14175a968 ; literal="the anatomical study of creatures"
0x00ef9a5b: mov    rcx,r9
0x00ef9a5e: jmp    0x140070f00
0x00ef9a63: mov    r8d,0x2a
0x00ef9a69: lea    rdx,[rip+0x860e68]        # 0x14175a8d8 ; literal="the comparison of the anatomy of creatures"
0x00ef9a70: mov    rcx,r9
0x00ef9a73: jmp    0x140070f00
0x00ef9a78: mov    r8d,0x3a
0x00ef9a7e: lea    rdx,[rip+0x860e83]        # 0x14175a908 ; literal="the classification of creatures by their physical features"
0x00ef9a85: mov    rcx,r9
0x00ef9a88: jmp    0x140070f00
0x00ef9a8d: mov    r8d,0x23
0x00ef9a93: lea    rdx,[rip+0x8610fe]        # 0x14175ab98 ; literal="the migratory patterns of creatures"
0x00ef9a9a: mov    rcx,r9
0x00ef9a9d: jmp    0x140070f00
0x00ef9aa2: mov    r8d,0x26
0x00ef9aa8: lea    rdx,[rip+0x861111]        # 0x14175abc0 ; literal="the reproductive behavior of creatures"
0x00ef9aaf: mov    rcx,r9
0x00ef9ab2: jmp    0x140070f00
0x00ef9ab7: lea    rdx,[rip+0x861072]        # 0x14175ab30 ; literal="the foraging behavior and diet of creatures"
0x00ef9abe: mov    r8d,0x2b
0x00ef9ac4: mov    rcx,r9
0x00ef9ac7: jmp    0x140070f00
0x00ef9acc: cmp    eax,0x400
0x00ef9ad1: ja     0x140ef9b42
0x00ef9ad3: je     0x140ef9b2d
0x00ef9ad5: cmp    eax,0x80
0x00ef9ada: je     0x140ef9b18
0x00ef9adc: cmp    eax,0x100
0x00ef9ae1: je     0x140ef9b03
0x00ef9ae3: cmp    eax,0x200
0x00ef9ae8: jne    0x140efaf49
0x00ef9aee: mov    r8d,0x19
0x00ef9af4: lea    rdx,[rip+0x861015]        # 0x14175ab10 ; literal="the diseases of creatures"
0x00ef9afb: mov    rcx,r9
0x00ef9afe: jmp    0x140070f00
0x00ef9b03: mov    r8d,0x20
0x00ef9b09: lea    rdx,[rip+0x860fd8]        # 0x14175aae8 ; literal="the social behavior of creatures"
0x00ef9b10: mov    rcx,r9
0x00ef9b13: jmp    0x140070f00
0x00ef9b18: mov    r8d,0x32
0x00ef9b1e: lea    rdx,[rip+0x86103b]        # 0x14175ab60 ; literal="the links between the diets of different creatures"
0x00ef9b25: mov    rcx,r9
0x00ef9b28: jmp    0x140070f00
0x00ef9b2d: mov    r8d,0x45
0x00ef9b33: lea    rdx,[rip+0x860f36]        # 0x14175aa70 ; literal="the ways that creatures are suited to the climates in which they live"
0x00ef9b3a: mov    rcx,r9
0x00ef9b3d: jmp    0x140070f00
0x00ef9b42: cmp    eax,0x800
0x00ef9b47: je     0x140ef9b69
0x00ef9b49: cmp    eax,0x1000
0x00ef9b4e: jne    0x140efaf49
0x00ef9b54: mov    r8d,0x29
0x00ef9b5a: lea    rdx,[rip+0x8611ef]        # 0x14175ad50 ; literal="the struggle for survival among creatures"
0x00ef9b61: mov    rcx,r9
0x00ef9b64: jmp    0x140070f00
0x00ef9b69: mov    r8d,0x2a
0x00ef9b6f: lea    rdx,[rip+0x860f42]        # 0x14175aab8 ; literal="the embriological development of creatures"
0x00ef9b76: mov    rcx,r9
0x00ef9b79: jmp    0x140070f00
0x00ef9b7e: mov    eax,DWORD PTR [rcx+0xc]
0x00ef9b81: cmp    eax,0x1000
0x00ef9b86: ja     0x140ef9cf8
0x00ef9b8c: je     0x140ef9ce3
0x00ef9b92: cmp    eax,0x40
0x00ef9b95: ja     0x140ef9c53
0x00ef9b9b: je     0x140ef9c3e
0x00ef9ba1: dec    eax
0x00ef9ba3: cmp    eax,0x1f
0x00ef9ba6: ja     0x140efaf49
0x00ef9bac: movzx  eax,BYTE PTR [rdx+rax*1+0xefb1c8]
0x00ef9bb4: mov    ecx,DWORD PTR [rdx+rax*4+0xefb1ac]
0x00ef9bbb: add    rcx,rdx
0x00ef9bbe: jmp    rcx
0x00ef9bc0: lea    rdx,[rip+0x8611b9]        # 0x14175ad80 ; literal="the classification of combustible materials"
0x00ef9bc7: mov    r8d,0x2b
0x00ef9bcd: mov    rcx,r9
0x00ef9bd0: jmp    0x140070f00
0x00ef9bd5: mov    r8d,0x1a
0x00ef9bdb: lea    rdx,[rip+0x861126]        # 0x14175ad08 ; literal="the classification of ores"
0x00ef9be2: mov    rcx,r9
0x00ef9be5: jmp    0x140070f00
0x00ef9bea: mov    r8d,0x27
0x00ef9bf0: lea    rdx,[rip+0x861131]        # 0x14175ad28 ; literal="the mixture of metals to produce alloys"
0x00ef9bf7: mov    rcx,r9
0x00ef9bfa: jmp    0x140070f00
0x00ef9bff: mov    r8d,0x54
0x00ef9c05: lea    rdx,[rip+0x861044]        # 0x14175ac50 ; literal="a method of classify the hardness of materials by scratching them against each other"
0x00ef9c0c: mov    rcx,r9
0x00ef9c0f: jmp    0x140070f00
0x00ef9c14: mov    r8d,0x52
0x00ef9c1a: lea    rdx,[rip+0x86108f]        # 0x14175acb0 ; literal="the classification of materials based on which elemental materials might form them"
0x00ef9c21: mov    rcx,r9
0x00ef9c24: jmp    0x140070f00
0x00ef9c29: mov    r8d,0x2d
0x00ef9c2f: lea    rdx,[rip+0x860fb2]        # 0x14175abe8 ; literal="the preparation and use of adhesive materials"
0x00ef9c36: mov    rcx,r9
0x00ef9c39: jmp    0x140070f00
0x00ef9c3e: mov    r8d,0x2d
0x00ef9c44: lea    rdx,[rip+0x860fcd]        # 0x14175ac18 ; literal="the construction and use of the blast furnace"
0x00ef9c4b: mov    rcx,r9
0x00ef9c4e: jmp    0x140070f00
0x00ef9c53: cmp    eax,0x80
0x00ef9c58: je     0x140ef9cce
0x00ef9c5a: cmp    eax,0x100
0x00ef9c5f: je     0x140ef9cb9
0x00ef9c61: cmp    eax,0x200
0x00ef9c66: je     0x140ef9ca4
0x00ef9c68: cmp    eax,0x400
0x00ef9c6d: je     0x140ef9c8f
0x00ef9c6f: cmp    eax,0x800
0x00ef9c74: jne    0x140efaf49
0x00ef9c7a: mov    r8d,0x26
0x00ef9c80: lea    rdx,[rip+0x861179]        # 0x14175ae00 ; literal="the classification of alkali and acids"
0x00ef9c87: mov    rcx,r9
0x00ef9c8a: jmp    0x140070f00
0x00ef9c8f: mov    r8d,0x2e
0x00ef9c95: lea    rdx,[rip+0x86120c]        # 0x14175aea8 ; literal="the theory and methods involved in evaporation"
0x00ef9c9c: mov    rcx,r9
0x00ef9c9f: jmp    0x140070f00
0x00ef9ca4: mov    r8d,0x2f
0x00ef9caa: lea    rdx,[rip+0x8611c7]        # 0x14175ae78 ; literal="the theory and methods involved in distillation"
0x00ef9cb1: mov    rcx,r9
0x00ef9cb4: jmp    0x140070f00
0x00ef9cb9: mov    r8d,0x66
0x00ef9cbf: lea    rdx,[rip+0x86123a]        # 0x14175af00 ; literal="the theory and methods involved in the extraction of a constituent liquid from one solution to another"
0x00ef9cc6: mov    rcx,r9
0x00ef9cc9: jmp    0x140070f00
0x00ef9cce: mov    r8d,0x27
0x00ef9cd4: lea    rdx,[rip+0x8611fd]        # 0x14175aed8 ; literal="the construction and use of the alembic"
0x00ef9cdb: mov    rcx,r9
0x00ef9cde: jmp    0x140070f00
0x00ef9ce3: mov    r8d,0x43
0x00ef9ce9: lea    rdx,[rip+0x861140]        # 0x14175ae30 ; literal="methods for performing experiments systematically in the laboratory"
0x00ef9cf0: mov    rcx,r9
0x00ef9cf3: jmp    0x140070f00
0x00ef9cf8: cmp    eax,0x40000
0x00ef9cfd: ja     0x140ef9dae
0x00ef9d03: je     0x140ef9d99
0x00ef9d09: cmp    eax,0x2000
0x00ef9d0e: je     0x140ef9d84
0x00ef9d10: cmp    eax,0x4000
0x00ef9d15: je     0x140ef9d6f
0x00ef9d17: cmp    eax,0x8000
0x00ef9d1c: je     0x140ef9d5a
0x00ef9d1e: cmp    eax,0x10000
0x00ef9d23: je     0x140ef9d45
0x00ef9d25: cmp    eax,0x20000
0x00ef9d2a: jne    0x140efaf49
0x00ef9d30: mov    r8d,0x28
0x00ef9d36: lea    rdx,[rip+0x85fa2b]        # 0x141759768 ; literal="the construction and use of the crucible"
0x00ef9d3d: mov    rcx,r9
0x00ef9d40: jmp    0x140070f00
0x00ef9d45: mov    r8d,0x26
0x00ef9d4b: lea    rdx,[rip+0x85fa96]        # 0x1417597e8 ; literal="the construction and use of the funnel"
0x00ef9d52: mov    rcx,r9
0x00ef9d55: jmp    0x140070f00
0x00ef9d5a: mov    r8d,0x24
0x00ef9d60: lea    rdx,[rip+0x85fa59]        # 0x1417597c0 ; literal="the construction and use of the vial"
0x00ef9d67: mov    rcx,r9
0x00ef9d6a: jmp    0x140070f00
0x00ef9d6f: mov    r8d,0x26
0x00ef9d75: lea    rdx,[rip+0x86105c]        # 0x14175add8 ; literal="the construction and use of the beaker"
0x00ef9d7c: mov    rcx,r9
0x00ef9d7f: jmp    0x140070f00
0x00ef9d84: mov    r8d,0x25
0x00ef9d8a: lea    rdx,[rip+0x86101f]        # 0x14175adb0 ; literal="the construction and use of the flask"
0x00ef9d91: mov    rcx,r9
0x00ef9d94: jmp    0x140070f00
0x00ef9d99: mov    r8d,0x22
0x00ef9d9f: lea    rdx,[rip+0x85f9f2]        # 0x141759798 ; literal="the preparation of spirit of niter"
0x00ef9da6: mov    rcx,r9
0x00ef9da9: jmp    0x140070f00
0x00ef9dae: cmp    eax,0x80000
0x00ef9db3: je     0x140ef9e29
0x00ef9db5: cmp    eax,0x100000
0x00ef9dba: je     0x140ef9e14
0x00ef9dbc: cmp    eax,0x200000
0x00ef9dc1: je     0x140ef9dff
0x00ef9dc3: cmp    eax,0x400000
0x00ef9dc8: je     0x140ef9dea
0x00ef9dca: cmp    eax,0x800000
0x00ef9dcf: jne    0x140efaf49
0x00ef9dd5: mov    r8d,0x2c
0x00ef9ddb: lea    rdx,[rip+0x85fb5e]        # 0x141759940 ; literal="the construction and use of laboratory ovens"
0x00ef9de2: mov    rcx,r9
0x00ef9de5: jmp    0x140070f00
0x00ef9dea: mov    r8d,0x26
0x00ef9df0: lea    rdx,[rip+0x85f901]        # 0x1417596f8 ; literal="the construction and use of the retort"
0x00ef9df7: mov    rcx,r9
0x00ef9dfa: jmp    0x140070f00
0x00ef9dff: mov    r8d,0x27
0x00ef9e05: lea    rdx,[rip+0x85f8c4]        # 0x1417596d0 ; literal="the construction and use of the ampoule"
0x00ef9e0c: mov    rcx,r9
0x00ef9e0f: jmp    0x140070f00
0x00ef9e14: mov    r8d,0x1d
0x00ef9e1a: lea    rdx,[rip+0x85f927]        # 0x141759748 ; literal="the preparation of aqua regia"
0x00ef9e21: mov    rcx,r9
0x00ef9e24: jmp    0x140070f00
0x00ef9e29: mov    r8d,0x21
0x00ef9e2f: lea    rdx,[rip+0x85f8ea]        # 0x141759720 ; literal="the preparation of oil of vitriol"
0x00ef9e36: mov    rcx,r9
0x00ef9e39: jmp    0x140070f00
0x00ef9e3e: mov    eax,DWORD PTR [rcx+0xc]
0x00ef9e41: cmp    eax,0x800
0x00ef9e46: ja     0x140ef9f9d
0x00ef9e4c: je     0x140ef9f88
0x00ef9e52: cmp    eax,0x20
0x00ef9e55: ja     0x140ef9efc
0x00ef9e5b: je     0x140ef9ee7
0x00ef9e61: sub    eax,0x1
0x00ef9e64: je     0x140ef9ed2
0x00ef9e66: sub    eax,0x1
0x00ef9e69: je     0x140ef9ebd
0x00ef9e6b: sub    eax,0x2
0x00ef9e6e: je     0x140ef9ea8
0x00ef9e70: sub    eax,0x4
0x00ef9e73: je     0x140ef9e93
0x00ef9e75: cmp    eax,0x8
0x00ef9e78: jne    0x140efaf49
0x00ef9e7e: mov    r8d,0x3b
0x00ef9e84: lea    rdx,[rip+0x85fa1d]        # 0x1417598a8 ; literal="surveying by triangulation for the purpose of creating maps"
0x00ef9e8b: mov    rcx,r9
0x00ef9e8e: jmp    0x140070f00
0x00ef9e93: mov    r8d,0x1a
0x00ef9e99: lea    rdx,[rip+0x85f9e8]        # 0x141759888 ; literal="surveying by triangulation"
0x00ef9ea0: mov    rcx,r9
0x00ef9ea3: jmp    0x140070f00
0x00ef9ea8: mov    r8d,0x25
0x00ef9eae: lea    rdx,[rip+0x85fa63]        # 0x141759918 ; literal="the process involved in creating maps"
0x00ef9eb5: mov    rcx,r9
0x00ef9eb8: jmp    0x140070f00
0x00ef9ebd: mov    r8d,0x2f
0x00ef9ec3: lea    rdx,[rip+0x85fa1e]        # 0x1417598e8 ; literal="the construction and use of the surveying staff"
0x00ef9eca: mov    rcx,r9
0x00ef9ecd: jmp    0x140070f00
0x00ef9ed2: mov    r8d,0x1d
0x00ef9ed8: lea    rdx,[rip+0x85fa91]        # 0x141759970 ; literal="the process of surveying land"
0x00ef9edf: mov    rcx,r9
0x00ef9ee2: jmp    0x140070f00
0x00ef9ee7: mov    r8d,0x3d
0x00ef9eed: lea    rdx,[rip+0x85f91c]        # 0x141759810 ; literal="surveying by triangulation for the purpose of allocating land"
0x00ef9ef4: mov    rcx,r9
0x00ef9ef7: jmp    0x140070f00
0x00ef9efc: sub    eax,0x40
0x00ef9eff: je     0x140ef9f73
0x00ef9f01: sub    eax,0x40
0x00ef9f04: je     0x140ef9f5e
0x00ef9f06: sub    eax,0x80
0x00ef9f0b: je     0x140ef9f49
0x00ef9f0d: sub    eax,0x100
0x00ef9f12: je     0x140ef9f34
0x00ef9f14: cmp    eax,0x200
0x00ef9f19: jne    0x140efaf49
0x00ef9f1f: mov    r8d,0x33
0x00ef9f25: lea    rdx,[rip+0x85fb64]        # 0x141759a90 ; literal="the use of a distance scale in the creation of maps"
0x00ef9f2c: mov    rcx,r9
0x00ef9f2f: jmp    0x140070f00
0x00ef9f34: mov    r8d,0x30
0x00ef9f3a: lea    rdx,[rip+0x85fb17]        # 0x141759a58 ; literal="the use of a grid system in the creation of maps"
0x00ef9f41: mov    rcx,r9
0x00ef9f44: jmp    0x140070f00
0x00ef9f49: mov    r8d,0x2f
0x00ef9f4f: lea    rdx,[rip+0x85fbaa]        # 0x141759b00 ; literal="the placement of geological information on maps"
0x00ef9f56: mov    rcx,r9
0x00ef9f59: jmp    0x140070f00
0x00ef9f5e: mov    r8d,0x33
0x00ef9f64: lea    rdx,[rip+0x85fb5d]        # 0x141759ac8 ; literal="surveying by triangulation for engineering projects"
0x00ef9f6b: mov    rcx,r9
0x00ef9f6e: jmp    0x140070f00
0x00ef9f73: mov    r8d,0x30
0x00ef9f79: lea    rdx,[rip+0x85f8d0]        # 0x141759850 ; literal="surveying by triangulation for military purposes"
0x00ef9f80: mov    rcx,r9
0x00ef9f83: jmp    0x140070f00
0x00ef9f88: mov    r8d,0x2f
0x00ef9f8e: lea    rdx,[rip+0x85fa6b]        # 0x141759a00 ; literal="the measurement of the heights of land features"
0x00ef9f95: mov    rcx,r9
0x00ef9f98: jmp    0x140070f00
0x00ef9f9d: cmp    eax,0x20000
0x00ef9fa2: ja     0x140efa053
0x00ef9fa8: je     0x140efa03e
0x00ef9fae: cmp    eax,0x1000
0x00ef9fb3: je     0x140efa029
0x00ef9fb5: cmp    eax,0x2000
0x00ef9fba: je     0x140efa014
0x00ef9fbc: cmp    eax,0x4000
0x00ef9fc1: je     0x140ef9fff
0x00ef9fc3: cmp    eax,0x8000
0x00ef9fc8: je     0x140ef9fea
0x00ef9fca: cmp    eax,0x10000
0x00ef9fcf: jne    0x140efaf49
0x00ef9fd5: mov    r8d,0x24
0x00ef9fdb: lea    rdx,[rip+0x85fce6]        # 0x141759cc8 ; literal="the forces that govern wind patterns"
0x00ef9fe2: mov    rcx,r9
0x00ef9fe5: jmp    0x140070f00
0x00ef9fea: mov    r8d,0x3e
0x00ef9ff0: lea    rdx,[rip+0x85fc91]        # 0x141759c88 ; literal="the process of the formation of deltas at the mouths of rivers"
0x00ef9ff7: mov    rcx,r9
0x00ef9ffa: jmp    0x140070f00
0x00ef9fff: mov    r8d,0x3f
0x00efa005: lea    rdx,[rip+0x85f9b4]        # 0x1417599c0 ; literal="the collection of maps and other information into a single text"
0x00efa00c: mov    rcx,r9
0x00efa00f: jmp    0x140070f00
0x00efa014: mov    r8d,0x2d
0x00efa01a: lea    rdx,[rip+0x85f96f]        # 0x141759990 ; literal="the placement of economic information on maps"
0x00efa021: mov    rcx,r9
0x00efa024: jmp    0x140070f00
0x00efa029: mov    r8d,0x27
0x00efa02f: lea    rdx,[rip+0x85f9fa]        # 0x141759a30 ; literal="the process of economic data collection"
0x00efa036: mov    rcx,r9
0x00efa039: jmp    0x140070f00
0x00efa03e: mov    r8d,0x3b
0x00efa044: lea    rdx,[rip+0x85fba5]        # 0x141759bf0 ; literal="the origin of rainfall through evaporation and condensation"
0x00efa04b: mov    rcx,r9
0x00efa04e: jmp    0x140070f00
0x00efa053: cmp    eax,0x40000
0x00efa058: je     0x140efa0b2
0x00efa05a: cmp    eax,0x80000
0x00efa05f: je     0x140efa09d
0x00efa061: cmp    eax,0x100000
0x00efa066: je     0x140efa088
0x00efa068: cmp    eax,0x200000
0x00efa06d: jne    0x140efaf49
0x00efa073: mov    r8d,0x3f
0x00efa079: lea    rdx,[rip+0x85fab0]        # 0x141759b30 ; literal="methods of adjusting maps to account for the shape of the world"
0x00efa080: mov    rcx,r9
0x00efa083: jmp    0x140070f00
0x00efa088: mov    r8d,0x1d
0x00efa08e: lea    rdx,[rip+0x85fb3b]        # 0x141759bd0 ; literal="the creation of accurate maps"
0x00efa095: mov    rcx,r9
0x00efa098: jmp    0x140070f00
0x00efa09d: mov    r8d,0x2c
0x00efa0a3: lea    rdx,[rip+0x85faf6]        # 0x141759ba0 ; literal="the division of the world into climate zones"
0x00efa0aa: mov    rcx,r9
0x00efa0ad: jmp    0x140070f00
0x00efa0b2: mov    r8d,0x53
0x00efa0b8: lea    rdx,[rip+0x85fb71]        # 0x141759c30 ; literal="a world-wide cycle involving precipitation, oceans, rivers and other forms of water"
0x00efa0bf: mov    rcx,r9
0x00efa0c2: jmp    0x140070f00
0x00efa0c7: mov    eax,DWORD PTR [rcx+0xc]
0x00efa0ca: cmp    eax,0x10000
0x00efa0cf: ja     0x140efa2ab
0x00efa0d5: je     0x140efa296
0x00efa0db: cmp    eax,0x100
0x00efa0e0: ja     0x140efa1c8
0x00efa0e6: je     0x140efa1b3
0x00efa0ec: dec    eax
0x00efa0ee: cmp    eax,0x7f
0x00efa0f1: ja     0x140efaf49
0x00efa0f7: movzx  eax,BYTE PTR [rdx+rax*1+0xefb20c]
0x00efa0ff: mov    ecx,DWORD PTR [rdx+rax*4+0xefb1e8]
0x00efa106: add    rcx,rdx
0x00efa109: jmp    rcx
0x00efa10b: mov    r8d,0x2f
0x00efa111: lea    rdx,[rip+0x85fa58]        # 0x141759b70 ; literal="the connection between disease and fouled water"
0x00efa118: mov    rcx,r9
0x00efa11b: jmp    0x140070f00
0x00efa120: mov    r8d,0x38
0x00efa126: lea    rdx,[rip+0x85fc93]        # 0x141759dc0 ; literal="the method of physical examination in diagnosing illness"
0x00efa12d: mov    rcx,r9
0x00efa130: jmp    0x140070f00
0x00efa135: mov    r8d,0x15
0x00efa13b: lea    rdx,[rip+0x85fcbe]        # 0x141759e00 ; literal="the method of autopsy"
0x00efa142: mov    rcx,r9
0x00efa145: jmp    0x140070f00
0x00efa14a: mov    r8d,0x3f
0x00efa150: lea    rdx,[rip+0x85fc19]        # 0x141759d70 ; literal="determining the likely outcome given a patient's current status"
0x00efa157: mov    rcx,r9
0x00efa15a: jmp    0x140070f00
0x00efa15f: mov    r8d,0xf
0x00efa165: lea    rdx,[rip+0x85fc44]        # 0x141759db0 ; literal="herbal remedies"
0x00efa16c: mov    rcx,r9
0x00efa16f: jmp    0x140070f00
0x00efa174: mov    r8d,0x1e
0x00efa17a: lea    rdx,[rip+0x85fbaf]        # 0x141759d30 ; literal="remedies prepared from animals"
0x00efa181: mov    rcx,r9
0x00efa184: jmp    0x140070f00
0x00efa189: mov    r8d,0x10
0x00efa18f: lea    rdx,[rip+0x85fbba]        # 0x141759d50 ; literal="mineral remedies"
0x00efa196: mov    rcx,r9
0x00efa199: jmp    0x140070f00
0x00efa19e: mov    r8d,0x1e
0x00efa1a4: lea    rdx,[rip+0x85fb45]        # 0x141759cf0 ; literal="the method of bandaging wounds"
0x00efa1ab: mov    rcx,r9
0x00efa1ae: jmp    0x140070f00
0x00efa1b3: mov    r8d,0x1d
0x00efa1b9: lea    rdx,[rip+0x85fb50]        # 0x141759d10 ; literal="the classification of disease"
0x00efa1c0: mov    rcx,r9
0x00efa1c3: jmp    0x140070f00
0x00efa1c8: cmp    eax,0x1000
0x00efa1cd: ja     0x140efa23e
0x00efa1cf: je     0x140efa229
0x00efa1d1: cmp    eax,0x200
0x00efa1d6: je     0x140efa214
0x00efa1d8: cmp    eax,0x400
0x00efa1dd: je     0x140efa1ff
0x00efa1df: cmp    eax,0x800
0x00efa1e4: jne    0x140efaf49
0x00efa1ea: mov    r8d,0x1d
0x00efa1f0: lea    rdx,[rip+0x85fca9]        # 0x141759ea0 ; literal="the theory of endemic disease"
0x00efa1f7: mov    rcx,r9
0x00efa1fa: jmp    0x140070f00
0x00efa1ff: mov    r8d,0x34
0x00efa205: lea    rdx,[rip+0x85fcfc]        # 0x141759f08 ; literal="the distinction between acute and chronic conditions"
0x00efa20c: mov    rcx,r9
0x00efa20f: jmp    0x140070f00
0x00efa214: mov    r8d,0x26
0x00efa21a: lea    rdx,[rip+0x85fcbf]        # 0x141759ee0 ; literal="the classification of toxic substances"
0x00efa221: mov    rcx,r9
0x00efa224: jmp    0x140070f00
0x00efa229: mov    r8d,0x1e
0x00efa22f: lea    rdx,[rip+0x85fc8a]        # 0x141759ec0 ; literal="the theory of epidemic disease"
0x00efa236: mov    rcx,r9
0x00efa239: jmp    0x140070f00
0x00efa23e: cmp    eax,0x2000
0x00efa243: je     0x140efa281
0x00efa245: cmp    eax,0x4000
0x00efa24a: je     0x140efa26c
0x00efa24c: cmp    eax,0x8000
0x00efa251: jne    0x140efaf49
0x00efa257: mov    r8d,0x15
0x00efa25d: lea    rdx,[rip+0x85fbb4]        # 0x141759e18 ; literal="the notion of relapse"
0x00efa264: mov    rcx,r9
0x00efa267: jmp    0x140070f00
0x00efa26c: mov    r8d,0x16
0x00efa272: lea    rdx,[rip+0x85fc0f]        # 0x141759e88 ; literal="the notion of paroxysm"
0x00efa279: mov    rcx,r9
0x00efa27c: jmp    0x140070f00
0x00efa281: mov    r8d,0x37
0x00efa287: lea    rdx,[rip+0x85fbc2]        # 0x141759e50 ; literal="the notion of the exacerbation of a patient's condition"
0x00efa28e: mov    rcx,r9
0x00efa291: jmp    0x140070f00
0x00efa296: mov    r8d,0x1b
0x00efa29c: lea    rdx,[rip+0x85fb8d]        # 0x141759e30 ; literal="the theory of convalescence"
0x00efa2a3: mov    rcx,r9
0x00efa2a6: jmp    0x140070f00
0x00efa2ab: cmp    eax,0x1000000
0x00efa2b0: ja     0x140efa39f
0x00efa2b6: je     0x140efa38a
0x00efa2bc: cmp    eax,0x100000
0x00efa2c1: ja     0x140efa332
0x00efa2c3: je     0x140efa31d
0x00efa2c5: cmp    eax,0x20000
0x00efa2ca: je     0x140efa308
0x00efa2cc: cmp    eax,0x40000
0x00efa2d1: je     0x140efa2f3
0x00efa2d3: cmp    eax,0x80000
0x00efa2d8: jne    0x140efaf49
0x00efa2de: mov    r8d,0x1f
0x00efa2e4: lea    rdx,[rip+0x85fced]        # 0x141759fd8 ; literal="the classification of fractures"
0x00efa2eb: mov    rcx,r9
0x00efa2ee: jmp    0x140070f00
0x00efa2f3: mov    r8d,0x1a
0x00efa2f9: lea    rdx,[rip+0x85fd50]        # 0x14175a050 ; literal="the treatment of fractures"
0x00efa300: mov    rcx,r9
0x00efa303: jmp    0x140070f00
0x00efa308: mov    r8d,0x23
0x00efa30e: lea    rdx,[rip+0x85fd13]        # 0x14175a028 ; literal="the treatment of traumatic injuries"
0x00efa315: mov    rcx,r9
0x00efa318: jmp    0x140070f00
0x00efa31d: mov    r8d,0x2e
0x00efa323: lea    rdx,[rip+0x85fcce]        # 0x141759ff8 ; literal="the construction and use of the traction bench"
0x00efa32a: mov    rcx,r9
0x00efa32d: jmp    0x140070f00
0x00efa332: cmp    eax,0x200000
0x00efa337: je     0x140efa375
0x00efa339: cmp    eax,0x400000
0x00efa33e: je     0x140efa360
0x00efa340: cmp    eax,0x800000
0x00efa345: jne    0x140efaf49
0x00efa34b: mov    r8d,0x1f
0x00efa351: lea    rdx,[rip+0x85fbe8]        # 0x141759f40 ; literal="the surgical method of excision"
0x00efa358: mov    rcx,r9
0x00efa35b: jmp    0x140070f00
0x00efa360: lea    rdx,[rip+0x85fc41]        # 0x141759fa8 ; literal="the creation and use of the orthopedic cast"
0x00efa367: mov    r8d,0x2b
0x00efa36d: mov    rcx,r9
0x00efa370: jmp    0x140070f00
0x00efa375: mov    r8d,0x25
0x00efa37b: lea    rdx,[rip+0x85fbfe]        # 0x141759f80 ; literal="the method of fracture immobilization"
0x00efa382: mov    rcx,r9
0x00efa385: jmp    0x140070f00
0x00efa38a: mov    r8d,0x1f
0x00efa390: lea    rdx,[rip+0x85fbc9]        # 0x141759f60 ; literal="the surgical method of incision"
0x00efa397: mov    rcx,r9
0x00efa39a: jmp    0x140070f00
0x00efa39f: cmp    eax,0x10000000
0x00efa3a4: ja     0x140efa415
0x00efa3a6: je     0x140efa400
0x00efa3a8: cmp    eax,0x2000000
0x00efa3ad: je     0x140efa3eb
0x00efa3af: cmp    eax,0x4000000
0x00efa3b4: je     0x140efa3d6
0x00efa3b6: cmp    eax,0x8000000
0x00efa3bb: jne    0x140efaf49
0x00efa3c1: mov    r8d,0x15
0x00efa3c7: lea    rdx,[rip+0x85fd22]        # 0x14175a0f0 ; literal="the lithotomy surgery"
0x00efa3ce: mov    rcx,r9
0x00efa3d1: jmp    0x140070f00
0x00efa3d6: mov    r8d,0x17
0x00efa3dc: lea    rdx,[rip+0x85fd55]        # 0x14175a138 ; literal="the tracheotomy surgery"
0x00efa3e3: mov    rcx,r9
0x00efa3e6: jmp    0x140070f00
0x00efa3eb: mov    r8d,0xe
0x00efa3f1: lea    rdx,[rip+0x85fd30]        # 0x14175a128 ; literal="hernia surgery"
0x00efa3f8: mov    rcx,r9
0x00efa3fb: jmp    0x140070f00
0x00efa400: mov    r8d,0x1f
0x00efa406: lea    rdx,[rip+0x85fcfb]        # 0x14175a108 ; literal="the surgical method of scraping"
0x00efa40d: mov    rcx,r9
0x00efa410: jmp    0x140070f00
0x00efa415: cmp    eax,0x20000000
0x00efa41a: je     0x140efa458
0x00efa41c: cmp    eax,0x40000000
0x00efa421: je     0x140efa443
0x00efa423: cmp    eax,0x80000000
0x00efa428: jne    0x140efaf49
0x00efa42e: mov    r8d,0x1f
0x00efa434: lea    rdx,[rip+0x85fc35]        # 0x14175a070 ; literal="the surgical method of suturing"
0x00efa43b: mov    rcx,r9
0x00efa43e: jmp    0x140070f00
0x00efa443: mov    r8d,0x1e
0x00efa449: lea    rdx,[rip+0x85fc80]        # 0x14175a0d0 ; literal="the surgical method of probing"
0x00efa450: mov    rcx,r9
0x00efa453: jmp    0x140070f00
0x00efa458: mov    r8d,0x1f
0x00efa45e: lea    rdx,[rip+0x85fc4b]        # 0x14175a0b0 ; literal="the surgical method of draining"
0x00efa465: mov    rcx,r9
0x00efa468: jmp    0x140070f00
0x00efa46d: mov    eax,DWORD PTR [rcx+0xc]
0x00efa470: cmp    eax,0x10000
0x00efa475: ja     0x140efa651
0x00efa47b: je     0x140efa63c
0x00efa481: cmp    eax,0x100
0x00efa486: ja     0x140efa56e
0x00efa48c: je     0x140efa559
0x00efa492: dec    eax
0x00efa494: cmp    eax,0x7f
0x00efa497: ja     0x140efaf49
0x00efa49d: movzx  eax,BYTE PTR [rdx+rax*1+0xefb2b0]
0x00efa4a5: mov    ecx,DWORD PTR [rdx+rax*4+0xefb28c]
0x00efa4ac: add    rcx,rdx
0x00efa4af: jmp    rcx
0x00efa4b1: mov    r8d,0x1f
0x00efa4b7: lea    rdx,[rip+0x85fbd2]        # 0x14175a090 ; literal="the surgical method of ligature"
0x00efa4be: mov    rcx,r9
0x00efa4c1: jmp    0x140070f00
0x00efa4c6: mov    r8d,0x25
0x00efa4cc: lea    rdx,[rip+0x8612dd]        # 0x14175b7b0 ; literal="the use of practice models in surgery"
0x00efa4d3: mov    rcx,r9
0x00efa4d6: jmp    0x140070f00
0x00efa4db: mov    r8d,0x26
0x00efa4e1: lea    rdx,[rip+0x8612f0]        # 0x14175b7d8 ; literal="the use of mud bags as surgical models"
0x00efa4e8: mov    rcx,r9
0x00efa4eb: jmp    0x140070f00
0x00efa4f0: mov    r8d,0x24
0x00efa4f6: lea    rdx,[rip+0x861263]        # 0x14175b760 ; literal="the use of plants as surgical models"
0x00efa4fd: mov    rcx,r9
0x00efa500: jmp    0x140070f00
0x00efa505: mov    r8d,0x25
0x00efa50b: lea    rdx,[rip+0x861276]        # 0x14175b788 ; literal="the use of animals as surgical models"
0x00efa512: mov    rcx,r9
0x00efa515: jmp    0x140070f00
0x00efa51a: lea    rdx,[rip+0x8611e7]        # 0x14175b708 ; literal="the use of specialized surgical instruments"
0x00efa521: mov    r8d,0x2b
0x00efa527: mov    rcx,r9
0x00efa52a: jmp    0x140070f00
0x00efa52f: mov    r8d,0x23
0x00efa535: lea    rdx,[rip+0x8611fc]        # 0x14175b738 ; literal="the construction and use of forceps"
0x00efa53c: mov    rcx,r9
0x00efa53f: jmp    0x140070f00
0x00efa544: mov    r8d,0x27
0x00efa54a: lea    rdx,[rip+0x86115f]        # 0x14175b6b0 ; literal="the construction and use of the scalpel"
0x00efa551: mov    rcx,r9
0x00efa554: jmp    0x140070f00
0x00efa559: mov    r8d,0x2d
0x00efa55f: lea    rdx,[rip+0x861172]        # 0x14175b6d8 ; literal="the construction and use of surgical scissors"
0x00efa566: mov    rcx,r9
0x00efa569: jmp    0x140070f00
0x00efa56e: cmp    eax,0x1000
0x00efa573: ja     0x140efa5e4
0x00efa575: je     0x140efa5cf
0x00efa577: cmp    eax,0x200
0x00efa57c: je     0x140efa5ba
0x00efa57e: cmp    eax,0x400
0x00efa583: je     0x140efa5a5
0x00efa585: cmp    eax,0x800
0x00efa58a: jne    0x140efaf49
0x00efa590: mov    r8d,0xd
0x00efa596: lea    rdx,[rip+0x8612eb]        # 0x14175b888 ; literal="cauterization"
0x00efa59d: mov    rcx,r9
0x00efa5a0: jmp    0x140070f00
0x00efa5a5: mov    r8d,0x10
0x00efa5ab: lea    rdx,[rip+0x861326]        # 0x14175b8d8 ; literal="cataract surgery"
0x00efa5b2: mov    rcx,r9
0x00efa5b5: jmp    0x140070f00
0x00efa5ba: mov    r8d,0x2c
0x00efa5c0: lea    rdx,[rip+0x8612e1]        # 0x14175b8a8 ; literal="the construction and use of surgical needles"
0x00efa5c7: mov    rcx,r9
0x00efa5ca: jmp    0x140070f00
0x00efa5cf: mov    r8d,0xa
0x00efa5d5: lea    rdx,[rip+0x8612bc]        # 0x14175b898 ; literal="anesthesia"
0x00efa5dc: mov    rcx,r9
0x00efa5df: jmp    0x140070f00
0x00efa5e4: cmp    eax,0x2000
0x00efa5e9: je     0x140efa627
0x00efa5eb: cmp    eax,0x4000
0x00efa5f0: je     0x140efa612
0x00efa5f2: cmp    eax,0x8000
0x00efa5f7: jne    0x140efaf49
0x00efa5fd: mov    r8d,0x23
0x00efa603: lea    rdx,[rip+0x8611f6]        # 0x14175b800 ; literal="the classification of bodily fluids"
0x00efa60a: mov    rcx,r9
0x00efa60d: jmp    0x140070f00
0x00efa612: mov    r8d,0x2a
0x00efa618: lea    rdx,[rip+0x861239]        # 0x14175b858 ; literal="anatomical studies for medical edification"
0x00efa61f: mov    rcx,r9
0x00efa622: jmp    0x140070f00
0x00efa627: mov    r8d,0x12
0x00efa62d: lea    rdx,[rip+0x86120c]        # 0x14175b840 ; literal="pulmonary medicine"
0x00efa634: mov    rcx,r9
0x00efa637: jmp    0x140070f00
0x00efa63c: mov    r8d,0x16
0x00efa642: lea    rdx,[rip+0x8611df]        # 0x14175b828 ; literal="the anatomy of the eye"
0x00efa649: mov    rcx,r9
0x00efa64c: jmp    0x140070f00
0x00efa651: cmp    eax,0x1000000
0x00efa656: ja     0x140efa745
0x00efa65c: je     0x140efa730
0x00efa662: cmp    eax,0x100000
0x00efa667: ja     0x140efa6d8
0x00efa669: je     0x140efa6c3
0x00efa66b: cmp    eax,0x20000
0x00efa670: je     0x140efa6ae
0x00efa672: cmp    eax,0x40000
0x00efa677: je     0x140efa699
0x00efa679: cmp    eax,0x80000
0x00efa67e: jne    0x140efaf49
0x00efa684: mov    r8d,0x1a
0x00efa68a: lea    rdx,[rip+0x8612e7]        # 0x14175b978 ; literal="the study of reaction time"
0x00efa691: mov    rcx,r9
0x00efa694: jmp    0x140070f00
0x00efa699: mov    r8d,0x22
0x00efa69f: lea    rdx,[rip+0x86135a]        # 0x14175ba00 ; literal="the function of the nervous system"
0x00efa6a6: mov    rcx,r9
0x00efa6a9: jmp    0x140070f00
0x00efa6ae: mov    r8d,0x30
0x00efa6b4: lea    rdx,[rip+0x86130d]        # 0x14175b9c8 ; literal="the distinction between motor and sensory nerves"
0x00efa6bb: mov    rcx,r9
0x00efa6be: jmp    0x140070f00
0x00efa6c3: mov    r8d,0x2a
0x00efa6c9: lea    rdx,[rip+0x8612c8]        # 0x14175b998 ; literal="the distinction between veins and arteries"
0x00efa6d0: mov    rcx,r9
0x00efa6d3: jmp    0x140070f00
0x00efa6d8: cmp    eax,0x200000
0x00efa6dd: je     0x140efa71b
0x00efa6df: cmp    eax,0x400000
0x00efa6e4: je     0x140efa706
0x00efa6e6: cmp    eax,0x800000
0x00efa6eb: jne    0x140efaf49
0x00efa6f1: mov    r8d,0x17
0x00efa6f7: lea    rdx,[rip+0x8611f2]        # 0x14175b8f0 ; literal="the source of the voice"
0x00efa6fe: mov    rcx,r9
0x00efa701: jmp    0x140070f00
0x00efa706: mov    r8d,0x32
0x00efa70c: lea    rdx,[rip+0x86122d]        # 0x14175b940 ; literal="comparative anatomical studies for use in medicine"
0x00efa713: mov    rcx,r9
0x00efa716: jmp    0x140070f00
0x00efa71b: mov    r8d,0x15
0x00efa721: lea    rdx,[rip+0x861200]        # 0x14175b928 ; literal="pulmonary circulation"
0x00efa728: mov    rcx,r9
0x00efa72b: jmp    0x140070f00
0x00efa730: mov    r8d,0x1d
0x00efa736: lea    rdx,[rip+0x8611cb]        # 0x14175b908 ; literal="the classification of muscles"
0x00efa73d: mov    rcx,r9
0x00efa740: jmp    0x140070f00
0x00efa745: cmp    eax,0x10000000
0x00efa74a: ja     0x140efa7bb
0x00efa74c: je     0x140efa7a6
0x00efa74e: cmp    eax,0x2000000
0x00efa753: je     0x140efa791
0x00efa755: cmp    eax,0x4000000
0x00efa75a: je     0x140efa77c
0x00efa75c: cmp    eax,0x8000000
0x00efa761: jne    0x140efaf49
0x00efa767: mov    r8d,0x2e
0x00efa76d: lea    rdx,[rip+0x861374]        # 0x14175bae8 ; literal="the preparation and use of dedicated hospitals"
0x00efa774: mov    rcx,r9
0x00efa777: jmp    0x140070f00
0x00efa77c: mov    r8d,0x21
0x00efa782: lea    rdx,[rip+0x8613df]        # 0x14175bb68 ; literal="the treatment of mental illnesses"
0x00efa789: mov    rcx,r9
0x00efa78c: jmp    0x140070f00
0x00efa791: mov    r8d,0x26
0x00efa797: lea    rdx,[rip+0x8613a2]        # 0x14175bb40 ; literal="the classification of mental illnesses"
0x00efa79e: mov    rcx,r9
0x00efa7a1: jmp    0x140070f00
0x00efa7a6: mov    r8d,0x26
0x00efa7ac: lea    rdx,[rip+0x861365]        # 0x14175bb18 ; literal="the use of professional hospital staff"
0x00efa7b3: mov    rcx,r9
0x00efa7b6: jmp    0x140070f00
0x00efa7bb: cmp    eax,0x20000000
0x00efa7c0: je     0x140efa7fe
0x00efa7c2: cmp    eax,0x40000000
0x00efa7c7: je     0x140efa7e9
0x00efa7c9: cmp    eax,0x80000000
0x00efa7ce: jne    0x140efaf49
0x00efa7d4: mov    r8d,0x13
0x00efa7da: lea    rdx,[rip+0x861247]        # 0x14175ba28 ; literal="schools of medicine"
0x00efa7e1: mov    rcx,r9
0x00efa7e4: jmp    0x140070f00
0x00efa7e9: mov    r8d,0x41
0x00efa7ef: lea    rdx,[rip+0x8612aa]        # 0x14175baa0 ; literal="the use of a laboratory for preparation of remedies in a hospital"
0x00efa7f6: mov    rcx,r9
0x00efa7f9: jmp    0x140070f00
0x00efa7fe: mov    r8d,0x29
0x00efa804: lea    rdx,[rip+0x861265]        # 0x14175ba70 ; literal="the use of specialized wards in hospitals"
0x00efa80b: mov    rcx,r9
0x00efa80e: jmp    0x140070f00
0x00efa813: cmp    DWORD PTR [rcx+0xc],0x1
0x00efa817: jne    0x140efaf49
0x00efa81d: mov    r8d,0x2c
0x00efa823: lea    rdx,[rip+0x861216]        # 0x14175ba40 ; literal="the creation of asylums for the mentally ill"
0x00efa82a: mov    rcx,r9
0x00efa82d: jmp    0x140070f00
0x00efa832: mov    eax,DWORD PTR [rcx+0xc]
0x00efa835: cmp    eax,0x10000
0x00efa83a: ja     0x140efaa16
0x00efa840: je     0x140efaa01
0x00efa846: cmp    eax,0x100
0x00efa84b: ja     0x140efa933
0x00efa851: je     0x140efa91e
0x00efa857: dec    eax
0x00efa859: cmp    eax,0x7f
0x00efa85c: ja     0x140efaf49
0x00efa862: movzx  eax,BYTE PTR [rdx+rax*1+0xefb354]
0x00efa86a: mov    ecx,DWORD PTR [rdx+rax*4+0xefb330]
0x00efa871: add    rcx,rdx
0x00efa874: jmp    rcx
0x00efa876: mov    r8d,0x2d
0x00efa87c: lea    rdx,[rip+0x861465]        # 0x14175bce8 ; literal="the use of shadows to tell direction and time"
0x00efa883: mov    rcx,r9
0x00efa886: jmp    0x140070f00
0x00efa88b: lea    rdx,[rip+0x861486]        # 0x14175bd18 ; literal="the use of water-based devices to tell time"
0x00efa892: mov    r8d,0x2b
0x00efa898: mov    rcx,r9
0x00efa89b: jmp    0x140070f00
0x00efa8a0: mov    r8d,0x49
0x00efa8a6: lea    rdx,[rip+0x8613a3]        # 0x14175bc50 ; literal="the use of conical shapes in water-based clocks to improve their accuracy"
0x00efa8ad: mov    rcx,r9
0x00efa8b0: jmp    0x140070f00
0x00efa8b5: mov    r8d,0x45
0x00efa8bb: lea    rdx,[rip+0x8613de]        # 0x14175bca0 ; literal="the use of reservoirs in water-based clocks to improve their accuracy"
0x00efa8c2: mov    rcx,r9
0x00efa8c5: jmp    0x140070f00
0x00efa8ca: mov    r8d,0x29
0x00efa8d0: lea    rdx,[rip+0x861311]        # 0x14175bbe8 ; literal="the construction and use of the astrarium"
0x00efa8d7: mov    rcx,r9
0x00efa8da: jmp    0x140070f00
0x00efa8df: mov    r8d,0x29
0x00efa8e5: lea    rdx,[rip+0x86132c]        # 0x14175bc18 ; literal="the construction and use of the hourglass"
0x00efa8ec: mov    rcx,r9
0x00efa8ef: jmp    0x140070f00
0x00efa8f4: mov    r8d,0x2d
0x00efa8fa: lea    rdx,[rip+0x86128f]        # 0x14175bb90 ; literal="the construction and use of mechanical clocks"
0x00efa901: mov    rcx,r9
0x00efa904: jmp    0x140070f00
0x00efa909: mov    r8d,0x25
0x00efa90f: lea    rdx,[rip+0x8612aa]        # 0x14175bbc0 ; literal="the reasons why pulleys are effective"
0x00efa916: mov    rcx,r9
0x00efa919: jmp    0x140070f00
0x00efa91e: mov    r8d,0x26
0x00efa924: lea    rdx,[rip+0x86152d]        # 0x14175be58 ; literal="the construction and use of the pulley"
0x00efa92b: mov    rcx,r9
0x00efa92e: jmp    0x140070f00
0x00efa933: cmp    eax,0x1000
0x00efa938: ja     0x140efa9a9
0x00efa93a: je     0x140efa994
0x00efa93c: cmp    eax,0x200
0x00efa941: je     0x140efa97f
0x00efa943: cmp    eax,0x400
0x00efa948: je     0x140efa96a
0x00efa94a: cmp    eax,0x800
0x00efa94f: jne    0x140efaf49
0x00efa955: mov    r8d,0x3c
0x00efa95b: lea    rdx,[rip+0x8614b6]        # 0x14175be18 ; literal="the reasons why the wheel-and-axle construction is effective"
0x00efa962: mov    rcx,r9
0x00efa965: jmp    0x140070f00
0x00efa96a: mov    r8d,0x25
0x00efa970: lea    rdx,[rip+0x861479]        # 0x14175bdf0 ; literal="the construction and use of the screw"
0x00efa977: mov    rcx,r9
0x00efa97a: jmp    0x140070f00
0x00efa97f: mov    r8d,0x24
0x00efa985: lea    rdx,[rip+0x8614f4]        # 0x14175be80 ; literal="the reasons why screws are effective"
0x00efa98c: mov    rcx,r9
0x00efa98f: jmp    0x140070f00
0x00efa994: mov    r8d,0x28
0x00efa99a: lea    rdx,[rip+0x8613f7]        # 0x14175bd98 ; literal="the construction and use of the windlass"
0x00efa9a1: mov    rcx,r9
0x00efa9a4: jmp    0x140070f00
0x00efa9a9: cmp    eax,0x2000
0x00efa9ae: je     0x140efa9ec
0x00efa9b0: cmp    eax,0x4000
0x00efa9b5: je     0x140efa9d7
0x00efa9b7: cmp    eax,0x8000
0x00efa9bc: jne    0x140efaf49
0x00efa9c2: mov    r8d,0x25
0x00efa9c8: lea    rdx,[rip+0x8613a1]        # 0x14175bd70 ; literal="the construction and use of the lever"
0x00efa9cf: mov    rcx,r9
0x00efa9d2: jmp    0x140070f00
0x00efa9d7: mov    r8d,0x26
0x00efa9dd: lea    rdx,[rip+0x861364]        # 0x14175bd48 ; literal="the reasons why the lever is effective"
0x00efa9e4: mov    rcx,r9
0x00efa9e7: jmp    0x140070f00
0x00efa9ec: mov    r8d,0x26
0x00efa9f2: lea    rdx,[rip+0x8613cf]        # 0x14175bdc8 ; literal="the reasons why the wedge is effective"
0x00efa9f9: mov    rcx,r9
0x00efa9fc: jmp    0x140070f00
0x00efaa01: mov    r8d,0x35
0x00efaa07: lea    rdx,[rip+0x8615ba]        # 0x14175bfc8 ; literal="the construction and use of the straight-beam balance"
0x00efaa0e: mov    rcx,r9
0x00efaa11: jmp    0x140070f00
0x00efaa16: cmp    eax,0x1000000
0x00efaa1b: ja     0x140efab0a
0x00efaa21: je     0x140efaaf5
0x00efaa27: cmp    eax,0x100000
0x00efaa2c: ja     0x140efaa9d
0x00efaa2e: je     0x140efaa88
0x00efaa30: cmp    eax,0x20000
0x00efaa35: je     0x140efaa73
0x00efaa37: cmp    eax,0x40000
0x00efaa3c: je     0x140efaa5e
0x00efaa3e: cmp    eax,0x80000
0x00efaa43: jne    0x140efaf49
0x00efaa49: mov    r8d,0x2c
0x00efaa4f: lea    rdx,[rip+0x861542]        # 0x14175bf98 ; literal="the construction and use of the tumbler lock"
0x00efaa56: mov    rcx,r9
0x00efaa59: jmp    0x140070f00
0x00efaa5e: lea    rdx,[rip+0x861503]        # 0x14175bf68 ; literal="the construction and use of the warded lock"
0x00efaa65: mov    r8d,0x2b
0x00efaa6b: mov    rcx,r9
0x00efaa6e: jmp    0x140070f00
0x00efaa73: mov    r8d,0x23
0x00efaa79: lea    rdx,[rip+0x861580]        # 0x14175c000 ; literal="the reasons why gears are effective"
0x00efaa80: mov    rcx,r9
0x00efaa83: jmp    0x140070f00
0x00efaa88: mov    r8d,0x27
0x00efaa8e: lea    rdx,[rip+0x86147b]        # 0x14175bf10 ; literal="the construction and use of the padlock"
0x00efaa95: mov    rcx,r9
0x00efaa98: jmp    0x140070f00
0x00efaa9d: cmp    eax,0x200000
0x00efaaa2: je     0x140efaae0
0x00efaaa4: cmp    eax,0x400000
0x00efaaa9: je     0x140efaacb
0x00efaaab: cmp    eax,0x800000
0x00efaab0: jne    0x140efaf49
0x00efaab6: mov    r8d,0x35
0x00efaabc: lea    rdx,[rip+0x861415]        # 0x14175bed8 ; literal="the construction and use of the water-powered sawmill"
0x00efaac3: mov    rcx,r9
0x00efaac6: jmp    0x140070f00
0x00efaacb: mov    r8d,0x2a
0x00efaad1: lea    rdx,[rip+0x8613d0]        # 0x14175bea8 ; literal="the construction and use of the crankshaft"
0x00efaad8: mov    rcx,r9
0x00efaadb: jmp    0x140070f00
0x00efaae0: mov    r8d,0x28
0x00efaae6: lea    rdx,[rip+0x86144b]        # 0x14175bf38 ; literal="the construction and use of the camshaft"
0x00efaaed: mov    rcx,r9
0x00efaaf0: jmp    0x140070f00
0x00efaaf5: mov    r8d,0x30
0x00efaafb: lea    rdx,[rip+0x86164e]        # 0x14175c150 ; literal="the construction and use of the chariot odometer"
0x00efab02: mov    rcx,r9
0x00efab05: jmp    0x140070f00
0x00efab0a: cmp    eax,0x10000000
0x00efab0f: ja     0x140efab80
0x00efab11: je     0x140efab6b
0x00efab13: cmp    eax,0x2000000
0x00efab18: je     0x140efab56
0x00efab1a: cmp    eax,0x4000000
0x00efab1f: je     0x140efab41
0x00efab21: cmp    eax,0x8000000
0x00efab26: jne    0x140efaf49
0x00efab2c: mov    r8d,0x31
0x00efab32: lea    rdx,[rip+0x8615df]        # 0x14175c118 ; literal="the construction and use of the differential gear"
0x00efab39: mov    rcx,r9
0x00efab3c: jmp    0x140070f00
0x00efab41: mov    r8d,0x32
0x00efab47: lea    rdx,[rip+0x861592]        # 0x14175c0e0 ; literal="the construction and use of the mechanical compass"
0x00efab4e: mov    rcx,r9
0x00efab51: jmp    0x140070f00
0x00efab56: mov    r8d,0x28
0x00efab5c: lea    rdx,[rip+0x861625]        # 0x14175c188 ; literal="the construction and use of chain drives"
0x00efab63: mov    rcx,r9
0x00efab66: jmp    0x140070f00
0x00efab6b: mov    r8d,0x2d
0x00efab71: lea    rdx,[rip+0x861500]        # 0x14175c078 ; literal="the construction and use of combination locks"
0x00efab78: mov    rcx,r9
0x00efab7b: jmp    0x140070f00
0x00efab80: cmp    eax,0x20000000
0x00efab85: je     0x140efabc3
0x00efab87: cmp    eax,0x40000000
0x00efab8c: je     0x140efabae
0x00efab8e: cmp    eax,0x80000000
0x00efab93: jne    0x140efaf49
0x00efab99: mov    r8d,0x18
0x00efab9f: lea    rdx,[rip+0x8614b2]        # 0x14175c058 ; literal="the action of the siphon"
0x00efaba6: mov    rcx,r9
0x00efaba9: jmp    0x140070f00
0x00efabae: mov    r8d,0x2d
0x00efabb4: lea    rdx,[rip+0x86146d]        # 0x14175c028 ; literal="the construction and use of the balance wheel"
0x00efabbb: mov    rcx,r9
0x00efabbe: jmp    0x140070f00
0x00efabc3: mov    r8d,0x30
0x00efabc9: lea    rdx,[rip+0x8614d8]        # 0x14175c0a8 ; literal="the construction and use of the verge escapement"
0x00efabd0: mov    rcx,r9
0x00efabd3: jmp    0x140070f00
0x00efabd8: mov    eax,DWORD PTR [rcx+0xc]
0x00efabdb: cmp    eax,0x8000
0x00efabe0: ja     0x140efada7
0x00efabe6: je     0x140efad92
0x00efabec: cmp    eax,0x80
0x00efabf1: ja     0x140efacc4
0x00efabf7: je     0x140efacaf
0x00efabfd: dec    eax
0x00efabff: cmp    eax,0x3f
0x00efac02: ja     0x140efaf49
0x00efac08: movzx  eax,BYTE PTR [rdx+rax*1+0xefb3f4]
0x00efac10: mov    ecx,DWORD PTR [rdx+rax*4+0xefb3d4]
0x00efac17: add    rcx,rdx
0x00efac1a: jmp    rcx
0x00efac1c: mov    r8d,0x22
0x00efac22: lea    rdx,[rip+0x860467]        # 0x14175b090 ; literal="the construction and use of valves"
0x00efac29: mov    rcx,r9
0x00efac2c: jmp    0x140070f00
0x00efac31: mov    r8d,0x2a
0x00efac37: lea    rdx,[rip+0x86047a]        # 0x14175b0b8 ; literal="the construction and use of the force pump"
0x00efac3e: mov    rcx,r9
0x00efac41: jmp    0x140070f00
0x00efac46: mov    r8d,0x2c
0x00efac4c: lea    rdx,[rip+0x8603cd]        # 0x14175b020 ; literal="the construction and use of the crystal lens"
0x00efac53: mov    rcx,r9
0x00efac56: jmp    0x140070f00
0x00efac5b: mov    r8d,0x39
0x00efac61: lea    rdx,[rip+0x8603e8]        # 0x14175b050 ; literal="the construction and use of water-filled sphere as a lens"
0x00efac68: mov    rcx,r9
0x00efac6b: jmp    0x140070f00
0x00efac70: mov    r8d,0x2a
0x00efac76: lea    rdx,[rip+0x860343]        # 0x14175afc0 ; literal="the construction and use of the glass lens"
0x00efac7d: mov    rcx,r9
0x00efac80: jmp    0x140070f00
0x00efac85: mov    r8d,0x2e
0x00efac8b: lea    rdx,[rip+0x86035e]        # 0x14175aff0 ; literal="the construction and use of the camera obscura"
0x00efac92: mov    rcx,r9
0x00efac95: jmp    0x140070f00
0x00efac9a: mov    r8d,0x30
0x00efaca0: lea    rdx,[rip+0x8602c1]        # 0x14175af68 ; literal="the construction and use of the parabolic mirror"
0x00efaca7: mov    rcx,r9
0x00efacaa: jmp    0x140070f00
0x00efacaf: mov    r8d,0x1d
0x00efacb5: lea    rdx,[rip+0x8602e4]        # 0x14175afa0 ; literal="the theory of light and color"
0x00efacbc: mov    rcx,r9
0x00efacbf: jmp    0x140070f00
0x00efacc4: cmp    eax,0x800
0x00efacc9: ja     0x140efad3a
0x00efaccb: je     0x140efad25
0x00efaccd: cmp    eax,0x100
0x00efacd2: je     0x140efad10
0x00efacd4: cmp    eax,0x200
0x00efacd9: je     0x140efacfb
0x00efacdb: cmp    eax,0x400
0x00eface0: jne    0x140efaf49
0x00eface6: mov    r8d,0x2e
0x00efacec: lea    rdx,[rip+0x8604bd]        # 0x14175b1b0 ; literal="the use of models and templates in engineering"
0x00efacf3: mov    rcx,r9
0x00efacf6: jmp    0x140070f00
0x00efacfb: mov    r8d,0x32
0x00efad01: lea    rdx,[rip+0x860528]        # 0x14175b230 ; literal="the relation between refraction and the half chord"
0x00efad08: mov    rcx,r9
0x00efad0b: jmp    0x140070f00
0x00efad10: mov    r8d,0x34
0x00efad16: lea    rdx,[rip+0x8604db]        # 0x14175b1f8 ; literal="the appearance of rainbows based on optical theories"
0x00efad1d: mov    rcx,r9
0x00efad20: jmp    0x140070f00
0x00efad25: mov    r8d,0x15
0x00efad2b: lea    rdx,[rip+0x8604ae]        # 0x14175b1e0 ; literal="the use of lamination"
0x00efad32: mov    rcx,r9
0x00efad35: jmp    0x140070f00
0x00efad3a: cmp    eax,0x1000
0x00efad3f: je     0x140efad7d
0x00efad41: cmp    eax,0x2000
0x00efad46: je     0x140efad68
0x00efad48: cmp    eax,0x4000
0x00efad4d: jne    0x140efaf49
0x00efad53: mov    r8d,0x30
0x00efad59: lea    rdx,[rip+0x860388]        # 0x14175b0e8 ; literal="the construction and use of the armillary sphere"
0x00efad60: mov    rcx,r9
0x00efad63: jmp    0x140070f00
0x00efad68: mov    r8d,0x29
0x00efad6e: lea    rdx,[rip+0x86040b]        # 0x14175b180 ; literal="the construction and use of the astrolabe"
0x00efad75: mov    rcx,r9
0x00efad78: jmp    0x140070f00
0x00efad7d: mov    r8d,0x27
0x00efad83: lea    rdx,[rip+0x8603ce]        # 0x14175b158 ; literal="the construction and use of the dioptra"
0x00efad8a: mov    rcx,r9
0x00efad8d: jmp    0x140070f00
0x00efad92: mov    r8d,0x33
0x00efad98: lea    rdx,[rip+0x860381]        # 0x14175b120 ; literal="the construction and use of the spherical astrolabe"
0x00efad9f: mov    rcx,r9
0x00efada2: jmp    0x140070f00
0x00efada7: cmp    eax,0x800000
0x00efadac: ja     0x140efae9b
0x00efadb2: je     0x140efae86
0x00efadb8: cmp    eax,0x80000
0x00efadbd: ja     0x140efae2e
0x00efadbf: je     0x140efae19
0x00efadc1: cmp    eax,0x10000
0x00efadc6: je     0x140efae04
0x00efadc8: cmp    eax,0x20000
0x00efadcd: je     0x140efadef
0x00efadcf: cmp    eax,0x40000
0x00efadd4: jne    0x140efaf49
0x00efadda: mov    r8d,0x39
0x00efade0: lea    rdx,[rip+0x860581]        # 0x14175b368 ; literal="the construction and use of the water-powered trip hammer"
0x00efade7: mov    rcx,r9
0x00efadea: jmp    0x140070f00
0x00efadef: mov    r8d,0x26
0x00efadf5: lea    rdx,[rip+0x86061c]        # 0x14175b418 ; literal="the construction and use of the orrery"
0x00efadfc: mov    rcx,r9
0x00efadff: jmp    0x140070f00
0x00efae04: mov    r8d,0x2d
0x00efae0a: lea    rdx,[rip+0x8605d7]        # 0x14175b3e8 ; literal="the construction and use of mural instruments"
0x00efae11: mov    rcx,r9
0x00efae14: jmp    0x140070f00
0x00efae19: mov    r8d,0x38
0x00efae1f: lea    rdx,[rip+0x860582]        # 0x14175b3a8 ; literal="the construction and use of double-acting piston bellows"
0x00efae26: mov    rcx,r9
0x00efae29: jmp    0x140070f00
0x00efae2e: cmp    eax,0x100000
0x00efae33: je     0x140efae71
0x00efae35: cmp    eax,0x200000
0x00efae3a: je     0x140efae5c
0x00efae3c: cmp    eax,0x400000
0x00efae41: jne    0x140efaf49
0x00efae47: mov    r8d,0x4f
0x00efae4d: lea    rdx,[rip+0x86041c]        # 0x14175b270 ; literal="a precise explanation of the cause of twilight involving atmospheric refraction"
0x00efae54: mov    rcx,r9
0x00efae57: jmp    0x140070f00
0x00efae5c: mov    r8d,0x16
0x00efae62: lea    rdx,[rip+0x8604e7]        # 0x14175b350 ; literal="atmospheric refraction"
0x00efae69: mov    rcx,r9
0x00efae6c: jmp    0x140070f00
0x00efae71: mov    r8d,0x38
0x00efae77: lea    rdx,[rip+0x860492]        # 0x14175b310 ; literal="a precise description of buoyancy and water displacement"
0x00efae7e: mov    rcx,r9
0x00efae81: jmp    0x140070f00
0x00efae86: mov    r8d,0x4f
0x00efae8c: lea    rdx,[rip+0x86042d]        # 0x14175b2c0 ; literal="the calculation of the height of the atmosphere based on atmospheric refraction"
0x00efae93: mov    rcx,r9
0x00efae96: jmp    0x140070f00
0x00efae9b: cmp    eax,0x8000000
0x00efaea0: ja     0x140efaf11
0x00efaea2: je     0x140efaefc
0x00efaea4: cmp    eax,0x1000000
0x00efaea9: je     0x140efaee7
0x00efaeab: cmp    eax,0x2000000
0x00efaeb0: je     0x140efaed2
0x00efaeb2: cmp    eax,0x4000000
0x00efaeb7: jne    0x140efaf49
0x00efaebd: mov    r8d,0x27
0x00efaec3: lea    rdx,[rip+0x8605ee]        # 0x14175b4b8 ; literal="the construction and use of the bellows"
0x00efaeca: mov    rcx,r9
0x00efaecd: jmp    0x140070f00
0x00efaed2: mov    r8d,0x25
0x00efaed8: lea    rdx,[rip+0x860669]        # 0x14175b548 ; literal="the construction and use of the crank"
0x00efaedf: mov    rcx,r9
0x00efaee2: jmp    0x140070f00
0x00efaee7: mov    r8d,0x26
0x00efaeed: lea    rdx,[rip+0x86062c]        # 0x14175b520 ; literal="the construction and use of the piston"
0x00efaef4: mov    rcx,r9
0x00efaef7: jmp    0x140070f00
0x00efaefc: mov    r8d,0x3c
0x00efaf02: lea    rdx,[rip+0x8605d7]        # 0x14175b4e0 ; literal="the construction and use of the water-powered piston bellows"
0x00efaf09: mov    rcx,r9
0x00efaf0c: jmp    0x140070f00
0x00efaf11: cmp    eax,0x10000000
0x00efaf16: je     0x140efaf34
0x00efaf18: cmp    eax,0x20000000
0x00efaf1d: jne    0x140efaf49
0x00efaf1f: lea    rdx,[rip+0x860562]        # 0x14175b488 ; literal="the construction and use of the trip hammer"
0x00efaf26: mov    r8d,0x2b
0x00efaf2c: mov    rcx,r9
0x00efaf2f: jmp    0x140070f00
0x00efaf34: lea    rdx,[rip+0x86051d]        # 0x14175b458 ; literal="the construction and use of the water wheel"
0x00efaf3b: mov    r8d,0x2b
0x00efaf41: mov    rcx,r9
0x00efaf44: jmp    0x140070f00
0x00efaf49: ret
0x00efaf4a: xchg   ax,ax
