; reference PE:6aea05a1:02734000; knowledge-musical-form; RVA 0xded9d0..0xdf5154; code ends 0xdf49f4
0x00ded9d0: mov    QWORD PTR [rsp+0x18],rbx
0x00ded9d5: push   rbp
0x00ded9d6: push   rsi
0x00ded9d7: push   rdi
0x00ded9d8: push   r12
0x00ded9da: push   r13
0x00ded9dc: push   r14
0x00ded9de: push   r15
0x00ded9e0: lea    rbp,[rsp-0x280]
0x00ded9e8: sub    rsp,0x380
0x00ded9ef: mov    rax,QWORD PTR [rip+0xad064a]        # 0x1418be040
0x00ded9f6: xor    rax,rsp
0x00ded9f9: mov    QWORD PTR [rbp+0x270],rax
0x00deda00: mov    rdi,rdx
0x00deda03: mov    QWORD PTR [rbp-0x28],rdx
0x00deda07: mov    r13,rcx
0x00deda0a: mov    QWORD PTR [rbp-0x38],rcx
0x00deda0e: lea    rcx,[rbp+0x1f0]
0x00deda15: call   0x140070cc0
0x00deda1a: nop
0x00deda1b: lea    rcx,[r13+0x8]
0x00deda1f: xor    r9d,r9d
0x00deda22: mov    r8b,0x1
0x00deda25: lea    rdx,[rbp+0x1f0]
0x00deda2c: call   0x140aae180
0x00deda31: lea    rdx,[rbp+0x1f0]
0x00deda38: mov    rcx,rdi
0x00deda3b: call   0x1400bb340
0x00deda40: lea    rdx,[rip+0x877acd]        # 0x141665514 ; literal=" is a "
0x00deda47: mov    rcx,rdi
0x00deda4a: call   0x140070b90
0x00deda4f: mov    ecx,DWORD PTR [r13+0x118]
0x00deda56: xor    ebx,ebx
0x00deda58: mov    esi,0x1
0x00deda5d: test   ecx,ecx
0x00deda5f: je     0x140dedadc
0x00deda61: sub    ecx,esi
0x00deda63: je     0x140dedad3
0x00deda65: sub    ecx,esi
0x00deda67: je     0x140deda76
0x00deda69: cmp    ecx,esi
0x00deda6b: jne    0x140dedaeb
0x00deda6d: lea    rdx,[rip+0x94d56c]        # 0x14173afe0 ; literal="form of music used during marches and military engagements"
0x00deda74: jmp    0x140dedae3
0x00deda76: lea    rdx,[rip+0x94d5fb]        # 0x14173b078 ; literal="devotional form of music"
0x00deda7d: mov    rcx,rdi
0x00deda80: call   0x140070b90
0x00deda85: cmp    DWORD PTR [r13+0x11c],0xffffffff
0x00deda8d: je     0x140dedaeb
0x00deda8f: lea    rdx,[rip+0x94d602]        # 0x14173b098 ; literal=" directed toward the worship of "
0x00deda96: mov    rcx,rdi
0x00deda99: call   0x140070b90
0x00deda9e: lea    rcx,[rbp+0xc0]
0x00dedaa5: call   0x1400736b0
0x00dedaaa: mov    WORD PTR [rsp+0x28],bx
0x00dedaaf: mov    WORD PTR [rsp+0x20],si
0x00dedab4: lea    r9,[rbp+0xc0]
0x00dedabb: mov    r8d,DWORD PTR [r13+0x11c]
0x00dedac2: mov    rdx,rdi
0x00dedac5: lea    rcx,[rip+0x172e66c]        # 0x14251c138
0x00dedacc: call   0x140baabd0
0x00dedad1: jmp    0x140dedaeb
0x00dedad3: lea    rdx,[rip+0x94d546]        # 0x14173b020 ; literal="form of music used to commemorate important events"
0x00dedada: jmp    0x140dedae3
0x00dedadc: lea    rdx,[rip+0x94d4d5]        # 0x14173afb8 ; literal="form of music used for entertainment"
0x00dedae3: mov    rcx,rdi
0x00dedae6: call   0x140070b90
0x00dedaeb: mov    edx,DWORD PTR [r13+0x80]
0x00dedaf2: cmp    edx,0xffffffff
0x00dedaf5: je     0x140dedb48
0x00dedaf7: lea    rcx,[rip+0x160617a]        # 0x1423f3c78
0x00dedafe: call   0x14007f120
0x00dedb03: mov    ecx,ebx
0x00dedb05: test   rax,rax
0x00dedb08: je     0x140dedb11
0x00dedb0a: cmp    WORD PTR [rax],0x8
0x00dedb0e: sete   cl
0x00dedb11: lea    rax,[rip+0x878040]        # 0x141665b58 ; literal=" originating in "
0x00dedb18: lea    rdx,[rip+0x878011]        # 0x141665b30 ; literal=" which grew out of the performances of "
0x00dedb1f: test   ecx,ecx
0x00dedb21: cmove  rdx,rax
0x00dedb25: mov    rcx,rdi
0x00dedb28: call   0x140070b90
0x00dedb2d: xor    r9d,r9d
0x00dedb30: mov    r8d,DWORD PTR [r13+0x80]
0x00dedb37: mov    rdx,rdi
0x00dedb3a: lea    rcx,[rip+0x172e5f7]        # 0x14251c138
0x00dedb41: call   0x140baa5c0
0x00dedb46: jmp    0x140dedb94
0x00dedb48: cmp    DWORD PTR [r13+0x84],0xffffffff
0x00dedb50: je     0x140dedb94
0x00dedb52: lea    rcx,[rbp+0xc0]
0x00dedb59: call   0x1400736b0
0x00dedb5e: lea    rdx,[rip+0x87800b]        # 0x141665b70 ; literal=" originally devised by "
0x00dedb65: mov    rcx,rdi
0x00dedb68: call   0x140070b90
0x00dedb6d: mov    WORD PTR [rsp+0x28],bx
0x00dedb72: mov    WORD PTR [rsp+0x20],si
0x00dedb77: lea    r9,[rbp+0xc0]
0x00dedb7e: mov    r8d,DWORD PTR [r13+0x84]
0x00dedb85: mov    rdx,rdi
0x00dedb88: lea    rcx,[rip+0x172e5a9]        # 0x14251c138
0x00dedb8f: call   0x140baabd0
0x00dedb94: lea    rdx,[rip+0x82b9fd]        # 0x141619598 ; literal=".  "
0x00dedb9b: mov    rcx,rdi
0x00dedb9e: call   0x140070b90
0x00dedba3: test   BYTE PTR [r13+0x120],sil
0x00dedbaa: lea    rax,[rip+0x94d57f]        # 0x14173b130 ; literal="The form guides musicians during improvised performances.  "
0x00dedbb1: lea    rdx,[rip+0x94d508]        # 0x14173b0c0 ; literal="The rules of the form are applied by composers to produce individual pieces of music which can be performed.  "
0x00dedbb8: cmove  rdx,rax
0x00dedbbc: mov    rcx,rdi
0x00dedbbf: call   0x140070b90
0x00dedbc4: xor    r15b,r15b
0x00dedbc7: lea    r12,[r13+0xa0]
0x00dedbce: mov    rcx,r12
0x00dedbd1: call   0x140070480
0x00dedbd6: mov    rsi,rax
0x00dedbd9: lea    rdx,[rsp+0x40]
0x00dedbde: mov    rcx,r12
0x00dedbe1: call   0x140070870
0x00dedbe6: lea    rdx,[rbp+0x30]
0x00dedbea: mov    rcx,r12
0x00dedbed: call   0x140070860
0x00dedbf2: lea    r8,[rbp+0x30]
0x00dedbf6: lea    rdx,[rsp+0x30]
0x00dedbfb: lea    rcx,[rsp+0x40]
0x00dedc00: call   0x140070450
0x00dedc05: xor    edx,edx
0x00dedc07: movzx  ecx,BYTE PTR [rax]
0x00dedc0a: call   0x140066de0
0x00dedc0f: test   al,al
0x00dedc11: je     0x140dee13f
0x00dedc17: lea    r14,[rip+0x94d5ca]        # 0x14173b1e8 ; literal="recites"
0x00dedc1e: lea    rbx,[rip+0x94d54b]        # 0x14173b170 ; literal="while the"
0x00dedc25: lea    rcx,[rsp+0x40]
0x00dedc2a: call   0x140070440
0x00dedc2f: mov    rcx,QWORD PTR [rax]
0x00dedc32: test   BYTE PTR [rcx+0x4],0x7
0x00dedc36: lea    rcx,[rsp+0x40]
0x00dedc3b: je     0x140dedf56
0x00dedc41: call   0x140070440
0x00dedc46: movsxd rbx,esi
0x00dedc49: mov    rax,QWORD PTR [rax]
0x00dedc4c: cmp    DWORD PTR [rax+0x10],0x1
0x00dedc50: jne    0x140dedc7c
0x00dedc52: mov    rcx,r12
0x00dedc55: call   0x140070480
0x00dedc5a: lea    rdx,[rip+0x897313]        # 0x141684f74 ; literal="A"
0x00dedc61: cmp    rbx,rax
0x00dedc64: lea    rax,[rip+0x830e81]        # 0x14161eaec ; literal="a"
0x00dedc6b: cmovne rdx,rax
0x00dedc6f: mov    rcx,rdi
0x00dedc72: call   0x140070b90
0x00dedc77: jmp    0x140dedd50
0x00dedc7c: lea    rcx,[rbp+0x1b0]
0x00dedc83: call   0x140070cc0
0x00dedc88: nop
0x00dedc89: lea    rcx,[rsp+0x40]
0x00dedc8e: call   0x140070440
0x00dedc93: mov    rcx,QWORD PTR [rax]
0x00dedc96: lea    rdx,[rbp+0x1b0]
0x00dedc9d: mov    ecx,DWORD PTR [rcx+0xc]
0x00dedca0: call   0x140547840
0x00dedca5: mov    rcx,r12
0x00dedca8: call   0x140070480
0x00dedcad: cmp    rbx,rax
0x00dedcb0: jne    0x140dedcbe
0x00dedcb2: lea    rcx,[rbp+0x1b0]
0x00dedcb9: call   0x140546b30
0x00dedcbe: lea    rdx,[rbp+0x1b0]
0x00dedcc5: mov    rcx,rdi
0x00dedcc8: call   0x1400bb340
0x00dedccd: nop
0x00dedcce: lea    rcx,[rbp+0x1b0]
0x00dedcd5: call   0x140069460
0x00dedcda: lea    rcx,[rsp+0x40]
0x00dedcdf: call   0x140070440
0x00dedce4: mov    rbx,QWORD PTR [rax]
0x00dedce7: lea    rcx,[rsp+0x40]
0x00dedcec: call   0x140070440
0x00dedcf1: mov    rcx,QWORD PTR [rax]
0x00dedcf4: mov    eax,DWORD PTR [rcx+0xc]
0x00dedcf7: cmp    DWORD PTR [rbx+0x10],eax
0x00dedcfa: jle    0x140dedd50
0x00dedcfc: lea    rdx,[rip+0x81ab31]        # 0x141608834 ; literal=" to "
0x00dedd03: mov    rcx,rdi
0x00dedd06: call   0x140070b90
0x00dedd0b: lea    rcx,[rbp+0x190]
0x00dedd12: call   0x140070cc0
0x00dedd17: nop
0x00dedd18: lea    rcx,[rsp+0x40]
0x00dedd1d: call   0x140070440
0x00dedd22: mov    rcx,QWORD PTR [rax]
0x00dedd25: lea    rdx,[rbp+0x190]
0x00dedd2c: mov    ecx,DWORD PTR [rcx+0x10]
0x00dedd2f: call   0x140547840
0x00dedd34: lea    rdx,[rbp+0x190]
0x00dedd3b: mov    rcx,rdi
0x00dedd3e: call   0x1400bb340
0x00dedd43: nop
0x00dedd44: lea    rcx,[rbp+0x190]
0x00dedd4b: call   0x140069460
0x00dedd50: lea    rdx,[rip+0x815c99]        # 0x1416039f0 ; literal=" "
0x00dedd57: mov    rcx,rdi
0x00dedd5a: call   0x140070b90
0x00dedd5f: lea    rcx,[rsp+0x40]
0x00dedd64: call   0x140070440
0x00dedd69: mov    rcx,QWORD PTR [rax]
0x00dedd6c: test   BYTE PTR [rcx+0x4],0x1
0x00dedd70: je     0x140dedd7b
0x00dedd72: lea    rdx,[rip+0x94d2db]        # 0x14173b054 ; literal="singer"
0x00dedd79: jmp    0x140deddb1
0x00dedd7b: lea    rcx,[rsp+0x40]
0x00dedd80: call   0x140070440
0x00dedd85: mov    rcx,QWORD PTR [rax]
0x00dedd88: test   BYTE PTR [rcx+0x4],0x2
0x00dedd8c: je     0x140dedd97
0x00dedd8e: lea    rdx,[rip+0x94d2cb]        # 0x14173b060 ; literal="speaker"
0x00dedd95: jmp    0x140deddb1
0x00dedd97: lea    rcx,[rsp+0x40]
0x00dedd9c: call   0x140070440
0x00dedda1: mov    rcx,QWORD PTR [rax]
0x00dedda4: test   BYTE PTR [rcx+0x4],0x4
0x00dedda8: je     0x140deddb9
0x00deddaa: lea    rdx,[rip+0x94d2b7]        # 0x14173b068 ; literal="chanter"
0x00deddb1: mov    rcx,rdi
0x00deddb4: call   0x140070b90
0x00deddb9: lea    rcx,[rsp+0x40]
0x00deddbe: call   0x140070440
0x00deddc3: mov    rcx,QWORD PTR [rax]
0x00deddc6: cmp    DWORD PTR [rcx+0x10],0x2
0x00deddca: jl     0x140dedddb
0x00deddcc: lea    rdx,[rip+0x81671d]        # 0x1416044f0 ; literal="s"
0x00deddd3: mov    rcx,rdi
0x00deddd6: call   0x140070b90
0x00dedddb: lea    rdx,[rip+0x815c0e]        # 0x1416039f0 ; literal=" "
0x00dedde2: mov    rcx,rdi
0x00dedde5: call   0x140070b90
0x00deddea: mov    edx,DWORD PTR [r13+0xf8]
0x00deddf1: cmp    edx,0xffffffff
0x00deddf4: je     0x140dede52
0x00deddf6: lea    rcx,[rip+0x171c33b]        # 0x14250a138
0x00deddfd: call   0x140073ba0
0x00dede02: mov    rbx,rax
0x00dede05: test   rax,rax
0x00dede08: je     0x140dedf39
0x00dede0e: lea    rcx,[rsp+0x40]
0x00dede13: call   0x140070440
0x00dede18: mov    rcx,QWORD PTR [rax]
0x00dede1b: lea    rdx,[rip+0x94d24e]        # 0x14173b070 ; literal="recite"
0x00dede22: cmp    DWORD PTR [rcx+0x10],0x2
0x00dede26: cmovl  rdx,r14
0x00dede2a: mov    rcx,rdi
0x00dede2d: call   0x140070b90
0x00dede32: lea    rdx,[rip+0x94d3b7]        # 0x14173b1f0 ; literal=" the words of "
0x00dede39: mov    rcx,rdi
0x00dede3c: call   0x140070b90
0x00dede41: lea    rdx,[rbx+0x8]
0x00dede45: mov    rcx,rdi
0x00dede48: call   0x1400bb340
0x00dede4d: jmp    0x140dedf39
0x00dede52: mov    edx,DWORD PTR [r13+0xf4]
0x00dede59: cmp    edx,0xffffffff
0x00dede5c: je     0x140dedf06
0x00dede62: lea    rcx,[rip+0x171c4df]        # 0x14250a348
0x00dede69: call   0x140073ba0
0x00dede6e: mov    rbx,rax
0x00dede71: test   rax,rax
0x00dede74: je     0x140dedf39
0x00dede7a: lea    rcx,[rsp+0x40]
0x00dede7f: call   0x140070440
0x00dede84: mov    rcx,QWORD PTR [rax]
0x00dede87: lea    rdx,[rip+0x94d1e2]        # 0x14173b070 ; literal="recite"
0x00dede8e: cmp    DWORD PTR [rcx+0x10],0x2
0x00dede92: cmovl  rdx,r14
0x00dede96: mov    rcx,rdi
0x00dede99: call   0x140070b90
0x00dede9e: test   BYTE PTR [rbx+0x8c],0x2
0x00dedea5: je     0x140dedeb6
0x00dedea7: lea    rdx,[rip+0x94d352]        # 0x14173b200 ; literal=" a composition of"
0x00dedeae: mov    rcx,rdi
0x00dedeb1: call   0x140070b90
0x00dedeb6: lea    rdx,[rip+0x815b33]        # 0x1416039f0 ; literal=" "
0x00dedebd: mov    rcx,rdi
0x00dedec0: call   0x140070b90
0x00dedec5: lea    rcx,[rbp+0x190]
0x00dedecc: call   0x140070cc0
0x00deded1: nop
0x00deded2: lea    rcx,[rbx+0x8]
0x00deded6: xor    r9d,r9d
0x00deded9: mov    r8b,0x1
0x00dededc: lea    rdx,[rbp+0x190]
0x00dedee3: call   0x140aae180
0x00dedee8: lea    rdx,[rbp+0x190]
0x00dedeef: mov    rcx,rdi
0x00dedef2: call   0x1400bb340
0x00dedef7: nop
0x00dedef8: lea    rcx,[rbp+0x190]
0x00dedeff: call   0x140069460
0x00dedf04: jmp    0x140dedf39
0x00dedf06: lea    rcx,[rsp+0x40]
0x00dedf0b: call   0x140070440
0x00dedf10: mov    rcx,QWORD PTR [rax]
0x00dedf13: lea    rdx,[rip+0x94d156]        # 0x14173b070 ; literal="recite"
0x00dedf1a: cmp    DWORD PTR [rcx+0x10],0x2
0x00dedf1e: cmovl  rdx,r14
0x00dedf22: mov    rcx,rdi
0x00dedf25: call   0x140070b90
0x00dedf2a: lea    rdx,[rip+0x94d2e7]        # 0x14173b218 ; literal=" nonsensical words and sounds"
0x00dedf31: mov    rcx,rdi
0x00dedf34: call   0x140070b90
0x00dedf39: cmp    esi,0x2
0x00dedf3c: jl     0x140dee107
0x00dedf42: lea    rdx,[rip+0x815aa7]        # 0x1416039f0 ; literal=" "
0x00dedf49: mov    rcx,rdi
0x00dedf4c: call   0x140070b90
0x00dedf51: jmp    0x140dee107
0x00dedf56: call   0x140070440
0x00dedf5b: mov    rcx,QWORD PTR [rax]
0x00dedf5e: cmp    DWORD PTR [rcx],0xffffffff
0x00dedf61: je     0x140dee107
0x00dedf67: lea    rcx,[rsp+0x40]
0x00dedf6c: call   0x140070440
0x00dedf71: mov    rcx,QWORD PTR [rax]
0x00dedf74: movsxd rdx,DWORD PTR [rcx]
0x00dedf77: lea    rcx,[rip+0x17212fa]        # 0x14250f278
0x00dedf7e: call   0x140070850
0x00dedf83: mov    r14,QWORD PTR [rax]
0x00dedf86: test   r14,r14
0x00dedf89: je     0x140dee0de
0x00dedf8f: test   r15b,r15b
0x00dedf92: jne    0x140dedfc7
0x00dedf94: mov    rcx,r12
0x00dedf97: call   0x140070480
0x00dedf9c: movsxd rcx,esi
0x00dedf9f: lea    rdx,[rip+0x877b42]        # 0x141665ae8 ; literal="The"
0x00dedfa6: cmp    rcx,rax
0x00dedfa9: cmovne rdx,rbx
0x00dedfad: mov    rcx,rdi
0x00dedfb0: call   0x140070b90
0x00dedfb5: lea    rdx,[rip+0x94d1c4]        # 0x14173b180 ; literal=" music is played on "
0x00dedfbc: mov    rcx,rdi
0x00dedfbf: call   0x140070b90
0x00dedfc4: mov    r15b,0x1
0x00dedfc7: lea    rcx,[rsp+0x40]
0x00dedfcc: call   0x140070440
0x00dedfd1: mov    rcx,QWORD PTR [rax]
0x00dedfd4: cmp    DWORD PTR [rcx+0x10],0x1
0x00dedfd8: jne    0x140dedfee
0x00dedfda: lea    rdx,[rip+0x830b0b]        # 0x14161eaec ; literal="a"
0x00dedfe1: mov    rcx,rdi
0x00dedfe4: call   0x140070b90
0x00dedfe9: jmp    0x140dee0a9
0x00dedfee: lea    rcx,[rbp+0x190]
0x00dedff5: call   0x140070cc0
0x00dedffa: nop
0x00dedffb: lea    rcx,[rsp+0x40]
0x00dee000: call   0x140070440
0x00dee005: mov    rcx,QWORD PTR [rax]
0x00dee008: lea    rdx,[rbp+0x190]
0x00dee00f: mov    ecx,DWORD PTR [rcx+0xc]
0x00dee012: call   0x140547840
0x00dee017: lea    rdx,[rbp+0x190]
0x00dee01e: mov    rcx,rdi
0x00dee021: call   0x1400bb340
0x00dee026: nop
0x00dee027: lea    rcx,[rbp+0x190]
0x00dee02e: call   0x140069460
0x00dee033: lea    rcx,[rsp+0x40]
0x00dee038: call   0x140070440
0x00dee03d: mov    rbx,QWORD PTR [rax]
0x00dee040: lea    rcx,[rsp+0x40]
0x00dee045: call   0x140070440
0x00dee04a: mov    rcx,QWORD PTR [rax]
0x00dee04d: mov    eax,DWORD PTR [rcx+0xc]
0x00dee050: cmp    DWORD PTR [rbx+0x10],eax
0x00dee053: jle    0x140dee0a9
0x00dee055: lea    rdx,[rip+0x81a7d8]        # 0x141608834 ; literal=" to "
0x00dee05c: mov    rcx,rdi
0x00dee05f: call   0x140070b90
0x00dee064: lea    rcx,[rbp+0x190]
0x00dee06b: call   0x140070cc0
0x00dee070: nop
0x00dee071: lea    rcx,[rsp+0x40]
0x00dee076: call   0x140070440
0x00dee07b: mov    rcx,QWORD PTR [rax]
0x00dee07e: lea    rdx,[rbp+0x190]
0x00dee085: mov    ecx,DWORD PTR [rcx+0x10]
0x00dee088: call   0x140547840
0x00dee08d: lea    rdx,[rbp+0x190]
0x00dee094: mov    rcx,rdi
0x00dee097: call   0x1400bb340
0x00dee09c: nop
0x00dee09d: lea    rcx,[rbp+0x190]
0x00dee0a4: call   0x140069460
0x00dee0a9: lea    rdx,[rip+0x815940]        # 0x1416039f0 ; literal=" "
0x00dee0b0: mov    rcx,rdi
0x00dee0b3: call   0x140070b90
0x00dee0b8: lea    rcx,[rsp+0x40]
0x00dee0bd: call   0x140070440
0x00dee0c2: mov    rcx,QWORD PTR [rax]
0x00dee0c5: cmp    DWORD PTR [rcx+0x10],0x2
0x00dee0c9: mov    rcx,rdi
0x00dee0cc: lea    rdx,[r14+0x88]
0x00dee0d3: jge    0x140dee0d9
0x00dee0d5: lea    rdx,[r14+0x68]
0x00dee0d9: call   0x1400bb340
0x00dee0de: cmp    esi,0x3
0x00dee0e1: jl     0x140dee0ec
0x00dee0e3: lea    rdx,[rip+0x8162aa]        # 0x141604394 ; literal=", "
0x00dee0ea: jmp    0x140dee0f8
0x00dee0ec: cmp    esi,0x2
0x00dee0ef: jne    0x140dee100
0x00dee0f1: lea    rdx,[rip+0x816294]        # 0x14160438c ; literal=" and "
0x00dee0f8: mov    rcx,rdi
0x00dee0fb: call   0x140070b90
0x00dee100: lea    r14,[rip+0x94d0e1]        # 0x14173b1e8 ; literal="recites"
0x00dee107: lea    rcx,[rsp+0x40]
0x00dee10c: call   0x140070430
0x00dee111: dec    esi
0x00dee113: lea    r8,[rbp+0x30]
0x00dee117: lea    rdx,[rsp+0x30]
0x00dee11c: lea    rcx,[rsp+0x40]
0x00dee121: call   0x140070450
0x00dee126: xor    edx,edx
0x00dee128: movzx  ecx,BYTE PTR [rax]
0x00dee12b: call   0x140066de0
0x00dee130: test   al,al
0x00dee132: lea    rbx,[rip+0x94d037]        # 0x14173b170 ; literal="while the"
0x00dee139: jne    0x140dedc25
0x00dee13f: lea    rdx,[rip+0x82b452]        # 0x141619598 ; literal=".  "
0x00dee146: mov    rcx,rdi
0x00dee149: call   0x140070b90
0x00dee14e: xor    sil,sil
0x00dee151: xor    r15b,r15b
0x00dee154: xor    bl,bl
0x00dee156: xor    r14b,r14b
0x00dee159: add    r13,0x88
0x00dee160: lea    rdx,[rsp+0x58]
0x00dee165: mov    rcx,r13
0x00dee168: call   0x140070870
0x00dee16d: lea    rdx,[rbp-0x78]
0x00dee171: mov    rcx,r13
0x00dee174: call   0x140070860
0x00dee179: lea    r8,[rbp-0x78]
0x00dee17d: lea    rdx,[rsp+0x34]
0x00dee182: lea    rcx,[rsp+0x58]
0x00dee187: call   0x140070450
0x00dee18c: xor    edx,edx
0x00dee18e: movzx  ecx,BYTE PTR [rax]
0x00dee191: call   0x140066de0
0x00dee196: test   al,al
0x00dee198: je     0x140dee348
0x00dee19e: xchg   ax,ax
0x00dee1a0: lea    rcx,[rsp+0x58]
0x00dee1a5: call   0x140070440
0x00dee1aa: mov    rcx,QWORD PTR [rax]
0x00dee1ad: add    rcx,0x48
0x00dee1b1: lea    rdx,[rbp-0x68]
0x00dee1b5: call   0x140070870
0x00dee1ba: lea    rcx,[rsp+0x58]
0x00dee1bf: call   0x140070440
0x00dee1c4: mov    rcx,QWORD PTR [rax]
0x00dee1c7: add    rcx,0x48
0x00dee1cb: lea    rdx,[rsp+0x78]
0x00dee1d0: call   0x140070860
0x00dee1d5: lea    r8,[rsp+0x78]
0x00dee1da: lea    rdx,[rsp+0x30]
0x00dee1df: lea    rcx,[rbp-0x68]
0x00dee1e3: call   0x140070450
0x00dee1e8: xor    edx,edx
0x00dee1ea: movzx  ecx,BYTE PTR [rax]
0x00dee1ed: call   0x140066de0
0x00dee1f2: test   al,al
0x00dee1f4: je     0x140dee250
0x00dee1f6: lea    rcx,[rbp-0x68]
0x00dee1fa: call   0x140070440
0x00dee1ff: mov    edx,DWORD PTR [rax]
0x00dee201: test   edx,edx
0x00dee203: je     0x140dee223
0x00dee205: sub    edx,0x1
0x00dee208: je     0x140dee21e
0x00dee20a: sub    edx,0x1
0x00dee20d: je     0x140dee21a
0x00dee20f: cmp    edx,0x1
0x00dee212: jne    0x140dee226
0x00dee214: movzx  r14d,dl
0x00dee218: jmp    0x140dee226
0x00dee21a: mov    bl,0x1
0x00dee21c: jmp    0x140dee226
0x00dee21e: mov    r15b,0x1
0x00dee221: jmp    0x140dee226
0x00dee223: mov    sil,0x1
0x00dee226: lea    rcx,[rbp-0x68]
0x00dee22a: call   0x140070980
0x00dee22f: lea    r8,[rsp+0x78]
0x00dee234: lea    rdx,[rsp+0x30]
0x00dee239: lea    rcx,[rbp-0x68]
0x00dee23d: call   0x140070450
0x00dee242: xor    edx,edx
0x00dee244: movzx  ecx,BYTE PTR [rax]
0x00dee247: call   0x140066de0
0x00dee24c: test   al,al
0x00dee24e: jne    0x140dee1f6
0x00dee250: lea    rcx,[rsp+0x58]
0x00dee255: call   0x140070430
0x00dee25a: lea    r8,[rbp-0x78]
0x00dee25e: lea    rdx,[rsp+0x34]
0x00dee263: lea    rcx,[rsp+0x58]
0x00dee268: call   0x140070450
0x00dee26d: xor    edx,edx
0x00dee26f: movzx  ecx,BYTE PTR [rax]
0x00dee272: call   0x140066de0
0x00dee277: test   al,al
0x00dee279: jne    0x140dee1a0
0x00dee27f: test   sil,sil
0x00dee282: jne    0x140dee28d
0x00dee284: test   r14b,r14b
0x00dee287: je     0x140dee348
0x00dee28d: mov    rcx,r12
0x00dee290: call   0x140070480
0x00dee295: cmp    rax,0x2
0x00dee299: jb     0x140dee348
0x00dee29f: test   sil,sil
0x00dee2a2: je     0x140dee32a
0x00dee2a8: mov    rcx,rdi
0x00dee2ab: test   r14b,r14b
0x00dee2ae: je     0x140dee2ed
0x00dee2b0: lea    rdx,[rip+0x94cee1]        # 0x14173b198 ; literal="The music"
0x00dee2b7: call   0x140070b90
0x00dee2bc: test   r15b,r15b
0x00dee2bf: je     0x140dee2d7
0x00dee2c1: lea    rdx,[rip+0x94cee0]        # 0x14173b1a8 ; literal="al voices join in melody and counterpoint, harmony and rhythm"
0x00dee2c8: lea    rax,[rip+0x94cff1]        # 0x14173b2c0 ; literal="al voices bring melody, counterpoint and rhythm"
0x00dee2cf: test   bl,bl
0x00dee2d1: cmove  rdx,rax
0x00dee2d5: jmp    0x140dee331
0x00dee2d7: lea    rdx,[rip+0x94d012]        # 0x14173b2f0 ; literal="al voices cover melody, harmony and rhythm"
0x00dee2de: lea    rax,[rip+0x94d03b]        # 0x14173b320 ; literal=" is melody and rhythm without harmony"
0x00dee2e5: test   bl,bl
0x00dee2e7: cmove  rdx,rax
0x00dee2eb: jmp    0x140dee331
0x00dee2ed: lea    rdx,[rip+0x94d054]        # 0x14173b348 ; literal="The musical voices "
0x00dee2f4: call   0x140070b90
0x00dee2f9: test   r15b,r15b
0x00dee2fc: je     0x140dee314
0x00dee2fe: lea    rdx,[rip+0x94cf33]        # 0x14173b238 ; literal="join in melody, counterpoint and harmony"
0x00dee305: lea    rax,[rip+0x94cf5c]        # 0x14173b268 ; literal="bring melody and counterpoint"
0x00dee30c: test   bl,bl
0x00dee30e: cmove  rdx,rax
0x00dee312: jmp    0x140dee331
0x00dee314: lea    rdx,[rip+0x94cf6d]        # 0x14173b288 ; literal="bring melody with harmony"
0x00dee31b: lea    rax,[rip+0x94cf86]        # 0x14173b2a8 ; literal="are joined in melody"
0x00dee322: test   bl,bl
0x00dee324: cmove  rdx,rax
0x00dee328: jmp    0x140dee331
0x00dee32a: lea    rdx,[rip+0x94d077]        # 0x14173b3a8 ; literal="The musical voices are purely rhythmic"
0x00dee331: mov    rcx,rdi
0x00dee334: call   0x140070b90
0x00dee339: lea    rdx,[rip+0x82b258]        # 0x141619598 ; literal=".  "
0x00dee340: mov    rcx,rdi
0x00dee343: call   0x140070b90
0x00dee348: lea    rbx,[rip+0xffffffffff211cb1]        # 0x140000000
0x00dee34f: mov    r12,QWORD PTR [rbp-0x38]
0x00dee353: cmp    DWORD PTR [r12+0xe8],0xffffffff
0x00dee35c: jne    0x140dee378
0x00dee35e: cmp    DWORD PTR [r12+0xec],0xffffffff
0x00dee367: jne    0x140dee378
0x00dee369: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00dee372: je     0x140dee733
0x00dee378: lea    rdx,[rip+0x94d051]        # 0x14173b3d0 ; literal="The entire performance "
0x00dee37f: mov    rcx,rdi
0x00dee382: call   0x140070b90
0x00dee387: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00dee390: je     0x140dee568
0x00dee396: lea    rdx,[rip+0x94d04b]        # 0x14173b3e8 ; literal="should "
0x00dee39d: mov    rcx,rdi
0x00dee3a0: call   0x140070b90
0x00dee3a5: mov    eax,DWORD PTR [r12+0xf0]
0x00dee3ad: add    eax,0xffffffde
0x00dee3b0: cmp    eax,0x26
0x00dee3b3: ja     0x140dee568
0x00dee3b9: cdqe
0x00dee3bb: mov    ecx,DWORD PTR [rbx+rax*4+0xdf49f4]
0x00dee3c2: add    rcx,rbx
0x00dee3c5: jmp    rcx
0x00dee3c7: lea    rdx,[rip+0x94d022]        # 0x14173b3f0 ; literal="stress the rhythm"
0x00dee3ce: jmp    0x140dee560
0x00dee3d3: lea    rdx,[rip+0x94cf86]        # 0x14173b360 ; literal="be stately"
0x00dee3da: jmp    0x140dee560
0x00dee3df: lea    rdx,[rip+0x94cf8a]        # 0x14173b370 ; literal="be bright"
0x00dee3e6: jmp    0x140dee560
0x00dee3eb: lea    rdx,[rip+0x94cf8e]        # 0x14173b380 ; literal="be lively"
0x00dee3f2: jmp    0x140dee560
0x00dee3f7: lea    rdx,[rip+0x94cf92]        # 0x14173b390 ; literal="be made with skill"
0x00dee3fe: jmp    0x140dee560
0x00dee403: lea    rdx,[rip+0x94d04e]        # 0x14173b458 ; literal="be vigorous"
0x00dee40a: jmp    0x140dee560
0x00dee40f: lea    rdx,[rip+0x94d052]        # 0x14173b468 ; literal="be spirited"
0x00dee416: jmp    0x140dee560
0x00dee41b: lea    rdx,[rip+0x94d056]        # 0x14173b478 ; literal="be delicate"
0x00dee422: jmp    0x140dee560
0x00dee427: lea    rdx,[rip+0x94cfda]        # 0x14173b408 ; literal="bring a sense of motion"
0x00dee42e: jmp    0x140dee560
0x00dee433: lea    rdx,[rip+0x94d04e]        # 0x14173b488 ; literal="be fiery"
0x00dee43a: jmp    0x140dee560
0x00dee43f: lea    rdx,[rip+0x94cfda]        # 0x14173b420 ; literal="be made with feeling"
0x00dee446: jmp    0x140dee560
0x00dee44b: lea    rdx,[rip+0x94cfe6]        # 0x14173b438 ; literal="feel agitated"
0x00dee452: jmp    0x140dee560
0x00dee457: lea    rdx,[rip+0x94cfea]        # 0x14173b448 ; literal="be passionate"
0x00dee45e: jmp    0x140dee560
0x00dee463: lea    rdx,[rip+0x94c63e]        # 0x14173aaa8 ; literal="sparkle"
0x00dee46a: jmp    0x140dee560
0x00dee46f: lea    rdx,[rip+0x94c63a]        # 0x14173aab0 ; literal="be broad"
0x00dee476: jmp    0x140dee560
0x00dee47b: lea    rdx,[rip+0x94c63e]        # 0x14173aac0 ; literal="be made sweetly"
0x00dee482: jmp    0x140dee560
0x00dee487: lea    rdx,[rip+0x94c642]        # 0x14173aad0 ; literal="be strong"
0x00dee48e: jmp    0x140dee560
0x00dee493: lea    rdx,[rip+0x94c5c6]        # 0x14173aa60 ; literal="be energetic"
0x00dee49a: jmp    0x140dee560
0x00dee49f: lea    rdx,[rip+0x94c5ca]        # 0x14173aa70 ; literal="be forceful"
0x00dee4a6: jmp    0x140dee560
0x00dee4ab: lea    rdx,[rip+0x94c5ce]        # 0x14173aa80 ; literal="feel heroic"
0x00dee4b2: jmp    0x140dee560
0x00dee4b7: lea    rdx,[rip+0x94c5d2]        # 0x14173aa90 ; literal="be made expressively"
0x00dee4be: jmp    0x140dee560
0x00dee4c3: lea    rdx,[rip+0x94c65e]        # 0x14173ab28 ; literal="feel furious"
0x00dee4ca: jmp    0x140dee560
0x00dee4cf: lea    rdx,[rip+0x94c662]        # 0x14173ab38 ; literal="be joyful"
0x00dee4d6: jmp    0x140dee560
0x00dee4db: lea    rdx,[rip+0x94c666]        # 0x14173ab48 ; literal="be grand"
0x00dee4e2: jmp    0x140dee560
0x00dee4e4: lea    rdx,[rip+0x94c66d]        # 0x14173ab58 ; literal="be merry"
0x00dee4eb: jmp    0x140dee560
0x00dee4ed: lea    rdx,[rip+0x94c5ec]        # 0x14173aae0 ; literal="be graceful"
0x00dee4f4: jmp    0x140dee560
0x00dee4f6: lea    rdx,[rip+0x94c5f3]        # 0x14173aaf0 ; literal="build as it proceeds"
0x00dee4fd: jmp    0x140dee560
0x00dee4ff: lea    rdx,[rip+0x94c602]        # 0x14173ab08 ; literal="evoke tears"
0x00dee506: jmp    0x140dee560
0x00dee508: lea    rdx,[rip+0x94c609]        # 0x14173ab18 ; literal="be melancholic"
0x00dee50f: jmp    0x140dee560
0x00dee511: lea    rdx,[rip+0x94c690]        # 0x14173aba8 ; literal="feel mournful"
0x00dee518: jmp    0x140dee560
0x00dee51a: lea    rdx,[rip+0x94c697]        # 0x14173abb8 ; literal="be made with a light touch"
0x00dee521: jmp    0x140dee560
0x00dee523: lea    rdx,[rip+0x94c6ae]        # 0x14173abd8 ; literal="feel heavy"
0x00dee52a: jmp    0x140dee560
0x00dee52c: lea    rdx,[rip+0x94c6b5]        # 0x14173abe8 ; literal="feel mysterious"
0x00dee533: jmp    0x140dee560
0x00dee535: lea    rdx,[rip+0x94c62c]        # 0x14173ab68 ; literal="be jumpy"
0x00dee53c: jmp    0x140dee560
0x00dee53e: lea    rdx,[rip+0x94c633]        # 0x14173ab78 ; literal="feel playful"
0x00dee545: jmp    0x140dee560
0x00dee547: lea    rdx,[rip+0x94c63a]        # 0x14173ab88 ; literal="feel tender"
0x00dee54e: jmp    0x140dee560
0x00dee550: lea    rdx,[rip+0x94c641]        # 0x14173ab98 ; literal="feel calm"
0x00dee557: jmp    0x140dee560
0x00dee559: lea    rdx,[rip+0x94c6e8]        # 0x14173ac48 ; literal="be triumphant"
0x00dee560: mov    rcx,rdi
0x00dee563: call   0x140070b90
0x00dee568: cmp    DWORD PTR [r12+0xe8],0xffffffff
0x00dee571: je     0x140dee653
0x00dee577: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00dee580: je     0x140dee591
0x00dee582: lea    rdx,[rip+0x815e03]        # 0x14160438c ; literal=" and "
0x00dee589: mov    rcx,rdi
0x00dee58c: call   0x140070b90
0x00dee591: movsxd rax,DWORD PTR [r12+0xe8]
0x00dee599: cmp    eax,0x21
0x00dee59c: ja     0x140dee653
0x00dee5a2: mov    ecx,DWORD PTR [rbx+rax*4+0xdf4a90]
0x00dee5a9: add    rcx,rbx
0x00dee5ac: jmp    rcx
0x00dee5ae: lea    rdx,[rip+0x94c6a3]        # 0x14173ac58 ; literal="is at a free tempo"
0x00dee5b5: jmp    0x140dee64b
0x00dee5ba: lea    rdx,[rip+0x94c6af]        # 0x14173ac70 ; literal="is very slow"
0x00dee5c1: jmp    0x140dee64b
0x00dee5c6: lea    rdx,[rip+0x94c6b3]        # 0x14173ac80 ; literal="is slow"
0x00dee5cd: jmp    0x140dee64b
0x00dee5cf: lea    rdx,[rip+0x94c622]        # 0x14173abf8 ; literal="is at a walking pace"
0x00dee5d6: jmp    0x140dee64b
0x00dee5d8: lea    rdx,[rip+0x94c631]        # 0x14173ac10 ; literal="is moderately paced"
0x00dee5df: jmp    0x140dee64b
0x00dee5e1: lea    rdx,[rip+0x94c640]        # 0x14173ac28 ; literal="is moderately fast"
0x00dee5e8: jmp    0x140dee64b
0x00dee5ea: lea    rdx,[rip+0x94c64f]        # 0x14173ac40 ; literal="is fast"
0x00dee5f1: jmp    0x140dee64b
0x00dee5f3: lea    rdx,[rip+0x94c716]        # 0x14173ad10 ; literal="is very fast"
0x00dee5fa: jmp    0x140dee64b
0x00dee5fc: lea    rdx,[rip+0x94c71d]        # 0x14173ad20 ; literal="is extremely fast"
0x00dee603: jmp    0x140dee64b
0x00dee605: lea    rdx,[rip+0x94c72c]        # 0x14173ad38 ; literal="accelerates as it proceeds"
0x00dee60c: jmp    0x140dee64b
0x00dee60e: lea    rdx,[rip+0x94c743]        # 0x14173ad58 ; literal="slows and broadens"
0x00dee615: jmp    0x140dee64b
0x00dee617: lea    rdx,[rip+0x94c66a]        # 0x14173ac88 ; literal="is consistently slowing"
0x00dee61e: jmp    0x140dee64b
0x00dee620: lea    rdx,[rip+0x94c679]        # 0x14173aca0 ; literal="is at a hurried pace"
0x00dee627: jmp    0x140dee64b
0x00dee629: lea    rdx,[rip+0x94c688]        # 0x14173acb8 ; literal="gradually slows as it comes to an end"
0x00dee630: jmp    0x140dee64b
0x00dee632: lea    rdx,[rip+0x94c6a7]        # 0x14173ace0 ; literal="slows down and dies away as it draws to a close"
0x00dee639: jmp    0x140dee64b
0x00dee63b: lea    rdx,[rip+0x94c77e]        # 0x14173adc0 ; literal="becomes calmer as the end is approached"
0x00dee642: jmp    0x140dee64b
0x00dee644: lea    rdx,[rip+0x94c79d]        # 0x14173ade8 ; literal="becomes frenzied as it proceeds"
0x00dee64b: mov    rcx,rdi
0x00dee64e: call   0x140070b90
0x00dee653: cmp    DWORD PTR [r12+0xec],0xffffffff
0x00dee65c: je     0x140dee724
0x00dee662: cmp    DWORD PTR [r12+0xe8],0xffffffff
0x00dee66b: jne    0x140dee67f
0x00dee66d: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00dee676: lea    rdx,[rip+0x94c78b]        # 0x14173ae08 ; literal="is to"
0x00dee67d: je     0x140dee686
0x00dee67f: lea    rdx,[rip+0x94c78a]        # 0x14173ae10 ; literal=", and it is to"
0x00dee686: mov    rcx,rdi
0x00dee689: call   0x140070b90
0x00dee68e: lea    rdx,[rip+0x81535b]        # 0x1416039f0 ; literal=" "
0x00dee695: mov    rcx,rdi
0x00dee698: call   0x140070b90
0x00dee69d: mov    eax,DWORD PTR [r12+0xec]
0x00dee6a5: add    eax,0xffffffec
0x00dee6a8: cmp    eax,0xa
0x00dee6ab: ja     0x140dee724
0x00dee6ad: cdqe
0x00dee6af: mov    ecx,DWORD PTR [rbx+rax*4+0xdf4b18]
0x00dee6b6: add    rcx,rbx
0x00dee6b9: jmp    rcx
0x00dee6bb: lea    rdx,[rip+0x94c6ae]        # 0x14173ad70 ; literal="be in whispered undertones"
0x00dee6c2: jmp    0x140dee71c
0x00dee6c4: lea    rdx,[rip+0x94c6c5]        # 0x14173ad90 ; literal="be very soft"
0x00dee6cb: jmp    0x140dee71c
0x00dee6cd: lea    rdx,[rip+0x94c6cc]        # 0x14173ada0 ; literal="be soft"
0x00dee6d4: jmp    0x140dee71c
0x00dee6d6: lea    rdx,[rip+0x94c6cb]        # 0x14173ada8 ; literal="be moderately soft"
0x00dee6dd: jmp    0x140dee71c
0x00dee6df: lea    rdx,[rip+0x94c7c2]        # 0x14173aea8 ; literal="be moderately loud"
0x00dee6e6: jmp    0x140dee71c
0x00dee6e8: lea    rdx,[rip+0x94c7d1]        # 0x14173aec0 ; literal="be loud"
0x00dee6ef: jmp    0x140dee71c
0x00dee6f1: lea    rdx,[rip+0x94c7d0]        # 0x14173aec8 ; literal="be very loud"
0x00dee6f8: jmp    0x140dee71c
0x00dee6fa: lea    rdx,[rip+0x94c7d7]        # 0x14173aed8 ; literal="become louder and louder"
0x00dee701: jmp    0x140dee71c
0x00dee703: lea    rdx,[rip+0x94c716]        # 0x14173ae20 ; literal="become softer and softer"
0x00dee70a: jmp    0x140dee71c
0x00dee70c: lea    rdx,[rip+0x94c72d]        # 0x14173ae40 ; literal="fade into silence"
0x00dee713: jmp    0x140dee71c
0x00dee715: lea    rdx,[rip+0x94c73c]        # 0x14173ae58 ; literal="start loud then be immediately soft"
0x00dee71c: mov    rcx,rdi
0x00dee71f: call   0x140070b90
0x00dee724: lea    rdx,[rip+0x82ae6d]        # 0x141619598 ; literal=".  "
0x00dee72b: mov    rcx,rdi
0x00dee72e: call   0x140070b90
0x00dee733: mov    r14d,0xffffffff
0x00dee739: mov    ebx,r14d
0x00dee73c: mov    DWORD PTR [rbp-0x80],ebx
0x00dee73f: mov    esi,r14d
0x00dee742: mov    DWORD PTR [rbp+0x28],r14d
0x00dee746: lea    rdx,[rsp+0x68]
0x00dee74b: mov    rcx,r13
0x00dee74e: call   0x140070870
0x00dee753: lea    rdx,[rbp-0x78]
0x00dee757: mov    rcx,r13
0x00dee75a: call   0x140070860
0x00dee75f: lea    r8,[rbp-0x78]
0x00dee763: lea    rdx,[rsp+0x34]
0x00dee768: lea    rcx,[rsp+0x68]
0x00dee76d: call   0x140070450
0x00dee772: xor    edx,edx
0x00dee774: movzx  ecx,BYTE PTR [rax]
0x00dee777: call   0x140066de0
0x00dee77c: test   al,al
0x00dee77e: je     0x140deea0c
0x00dee784: lea    rcx,[rsp+0x68]
0x00dee789: call   0x140070440
0x00dee78e: mov    rcx,QWORD PTR [rax]
0x00dee791: add    rcx,0x48
0x00dee795: lea    rdx,[rsp+0x70]
0x00dee79a: call   0x140070870
0x00dee79f: lea    rcx,[rsp+0x68]
0x00dee7a4: call   0x140070440
0x00dee7a9: mov    rcx,QWORD PTR [rax]
0x00dee7ac: add    rcx,0x48
0x00dee7b0: lea    rdx,[rsp+0x78]
0x00dee7b5: call   0x140070860
0x00dee7ba: lea    rcx,[rsp+0x68]
0x00dee7bf: call   0x140070440
0x00dee7c4: mov    rcx,QWORD PTR [rax]
0x00dee7c7: add    rcx,0x60
0x00dee7cb: lea    rdx,[rsp+0x58]
0x00dee7d0: call   0x140070870
0x00dee7d5: lea    rcx,[rsp+0x68]
0x00dee7da: call   0x140070440
0x00dee7df: mov    rcx,QWORD PTR [rax]
0x00dee7e2: add    rcx,0x60
0x00dee7e6: lea    rdx,[rbp-0x18]
0x00dee7ea: call   0x140070860
0x00dee7ef: lea    r8,[rsp+0x78]
0x00dee7f4: lea    rdx,[rsp+0x30]
0x00dee7f9: lea    rcx,[rsp+0x70]
0x00dee7fe: call   0x140070450
0x00dee803: xor    edx,edx
0x00dee805: movzx  ecx,BYTE PTR [rax]
0x00dee808: call   0x140066de0
0x00dee80d: test   al,al
0x00dee80f: je     0x140dee8b9
0x00dee815: lea    rcx,[rsp+0x70]
0x00dee81a: call   0x140070440
0x00dee81f: cmp    DWORD PTR [rax],0x0
0x00dee822: jne    0x140dee84a
0x00dee824: lea    rcx,[rsp+0x58]
0x00dee829: call   0x140070440
0x00dee82e: cmp    ebx,DWORD PTR [rax]
0x00dee830: je     0x140dee84a
0x00dee832: cmp    ebx,r14d
0x00dee835: jne    0x140dee845
0x00dee837: lea    rcx,[rsp+0x58]
0x00dee83c: call   0x140070440
0x00dee841: mov    ebx,DWORD PTR [rax]
0x00dee843: jmp    0x140dee84a
0x00dee845: mov    ebx,0xfffffffe
0x00dee84a: lea    rcx,[rsp+0x70]
0x00dee84f: call   0x140070440
0x00dee854: cmp    DWORD PTR [rax],0x1
0x00dee857: jne    0x140dee87f
0x00dee859: lea    rcx,[rsp+0x58]
0x00dee85e: call   0x140070440
0x00dee863: cmp    esi,DWORD PTR [rax]
0x00dee865: je     0x140dee87f
0x00dee867: cmp    esi,r14d
0x00dee86a: jne    0x140dee87a
0x00dee86c: lea    rcx,[rsp+0x58]
0x00dee871: call   0x140070440
0x00dee876: mov    esi,DWORD PTR [rax]
0x00dee878: jmp    0x140dee87f
0x00dee87a: mov    esi,0xfffffffe
0x00dee87f: lea    rcx,[rsp+0x70]
0x00dee884: call   0x140070980
0x00dee889: lea    rcx,[rsp+0x58]
0x00dee88e: call   0x140070980
0x00dee893: lea    r8,[rsp+0x78]
0x00dee898: lea    rdx,[rsp+0x30]
0x00dee89d: lea    rcx,[rsp+0x70]
0x00dee8a2: call   0x140070450
0x00dee8a7: xor    edx,edx
0x00dee8a9: movzx  ecx,BYTE PTR [rax]
0x00dee8ac: call   0x140066de0
0x00dee8b1: test   al,al
0x00dee8b3: jne    0x140dee815
0x00dee8b9: lea    rcx,[rsp+0x68]
0x00dee8be: call   0x140070430
0x00dee8c3: lea    r8,[rbp-0x78]
0x00dee8c7: lea    rdx,[rsp+0x34]
0x00dee8cc: lea    rcx,[rsp+0x68]
0x00dee8d1: call   0x140070450
0x00dee8d6: xor    edx,edx
0x00dee8d8: movzx  ecx,BYTE PTR [rax]
0x00dee8db: call   0x140066de0
0x00dee8e0: test   al,al
0x00dee8e2: jne    0x140dee784
0x00dee8e8: cmp    ebx,0xfffffffe
0x00dee8eb: cmove  ebx,r14d
0x00dee8ef: mov    DWORD PTR [rbp-0x80],ebx
0x00dee8f2: cmp    esi,0xfffffffe
0x00dee8f5: cmove  esi,r14d
0x00dee8f9: mov    DWORD PTR [rbp+0x28],esi
0x00dee8fc: cmp    ebx,r14d
0x00dee8ff: je     0x140dee9d1
0x00dee905: mov    rcx,rdi
0x00dee908: cmp    esi,r14d
0x00dee90b: je     0x140dee9c5
0x00dee911: cmp    ebx,esi
0x00dee913: jne    0x140dee962
0x00dee915: lea    rdx,[rip+0x94c564]        # 0x14173ae80 ; literal="The melody and counterpoint both have "
0x00dee91c: call   0x140070b90
0x00dee921: test   ebx,ebx
0x00dee923: mov    ecx,ebx
0x00dee925: je     0x140dee9ee
0x00dee92b: sub    ecx,0x1
0x00dee92e: je     0x140dee956
0x00dee930: sub    ecx,0x1
0x00dee933: je     0x140dee94a
0x00dee935: cmp    ecx,0x1
0x00dee938: jne    0x140dee9fd
0x00dee93e: lea    rdx,[rip+0x94c653]        # 0x14173af98 ; literal="phrases of varied length"
0x00dee945: jmp    0x140dee9f5
0x00dee94a: lea    rdx,[rip+0x94c637]        # 0x14173af88 ; literal="long phrases"
0x00dee951: jmp    0x140dee9f5
0x00dee956: lea    rdx,[rip+0x94c613]        # 0x14173af70 ; literal="mid-length phrases"
0x00dee95d: jmp    0x140dee9f5
0x00dee962: lea    rdx,[rip+0x94c58f]        # 0x14173aef8 ; literal="The melody has "
0x00dee969: call   0x140070b90
0x00dee96e: mov    ecx,ebx
0x00dee970: test   ebx,ebx
0x00dee972: je     0x140dee99e
0x00dee974: sub    ecx,0x1
0x00dee977: je     0x140dee995
0x00dee979: sub    ecx,0x1
0x00dee97c: je     0x140dee98c
0x00dee97e: cmp    ecx,0x1
0x00dee981: jne    0x140dee9ad
0x00dee983: lea    rdx,[rip+0x94c60e]        # 0x14173af98 ; literal="phrases of varied length"
0x00dee98a: jmp    0x140dee9a5
0x00dee98c: lea    rdx,[rip+0x94c5f5]        # 0x14173af88 ; literal="long phrases"
0x00dee993: jmp    0x140dee9a5
0x00dee995: lea    rdx,[rip+0x94c5d4]        # 0x14173af70 ; literal="mid-length phrases"
0x00dee99c: jmp    0x140dee9a5
0x00dee99e: lea    rdx,[rip+0x94c5bb]        # 0x14173af60 ; literal="short phrases"
0x00dee9a5: mov    rcx,rdi
0x00dee9a8: call   0x140070b90
0x00dee9ad: lea    rdx,[rip+0x94c554]        # 0x14173af08 ; literal=", while the counterpoint has "
0x00dee9b4: mov    rcx,rdi
0x00dee9b7: call   0x140070b90
0x00dee9bc: mov    ecx,esi
0x00dee9be: test   esi,esi
0x00dee9c0: jmp    0x140dee925
0x00dee9c5: lea    rdx,[rip+0x94c52c]        # 0x14173aef8 ; literal="The melody has "
0x00dee9cc: jmp    0x140dee91c
0x00dee9d1: cmp    esi,r14d
0x00dee9d4: je     0x140deea0c
0x00dee9d6: lea    rdx,[rip+0x94c563]        # 0x14173af40 ; literal="The counterpoint melody has "
0x00dee9dd: mov    rcx,rdi
0x00dee9e0: call   0x140070b90
0x00dee9e5: mov    ecx,esi
0x00dee9e7: test   esi,esi
0x00dee9e9: jmp    0x140dee925
0x00dee9ee: lea    rdx,[rip+0x94c56b]        # 0x14173af60 ; literal="short phrases"
0x00dee9f5: mov    rcx,rdi
0x00dee9f8: call   0x140070b90
0x00dee9fd: lea    rdx,[rip+0x94c524]        # 0x14173af28 ; literal=" throughout the form.  "
0x00deea04: mov    rcx,rdi
0x00deea07: call   0x140070b90
0x00deea0c: mov    ecx,DWORD PTR [r12+0x114]
0x00deea14: test   ecx,ecx
0x00deea16: je     0x140deea50
0x00deea18: sub    ecx,0x1
0x00deea1b: je     0x140deea47
0x00deea1d: sub    ecx,0x1
0x00deea20: je     0x140deea3e
0x00deea22: sub    ecx,0x1
0x00deea25: je     0x140deea35
0x00deea27: cmp    ecx,0x1
0x00deea2a: jne    0x140deea5f
0x00deea2c: lea    rdx,[rip+0x94cf65]        # 0x14173b998 ; literal="The music is broadly layered with chords spanning the range.  "
0x00deea33: jmp    0x140deea57
0x00deea35: lea    rdx,[rip+0x94d0b4]        # 0x14173baf0 ; literal="Pitches are densely packed in clusters as music moves from chord to chord.  "
0x00deea3c: jmp    0x140deea57
0x00deea3e: lea    rdx,[rip+0x94d05b]        # 0x14173baa0 ; literal="Chords, seldom-used, are sparse -- intervals and single pitches are favored.  "
0x00deea45: jmp    0x140deea57
0x00deea47: lea    rdx,[rip+0x94d022]        # 0x14173ba70 ; literal="Never more than an interval sounds at once.  "
0x00deea4e: jmp    0x140deea57
0x00deea50: lea    rdx,[rip+0x94cfe9]        # 0x14173ba40 ; literal="Only one pitch is ever played at a time.  "
0x00deea57: mov    rcx,rdi
0x00deea5a: call   0x140070b90
0x00deea5f: test   BYTE PTR [r12+0x120],0x2
0x00deea68: je     0x140deea79
0x00deea6a: lea    rdx,[rip+0x94cf67]        # 0x14173b9d8 ; literal="The music repeats for as long as necessary.  "
0x00deea71: mov    rcx,rdi
0x00deea74: call   0x140070b90
0x00deea79: xor    r14b,r14b
0x00deea7c: xor    bl,bl
0x00deea7e: xor    sil,sil
0x00deea81: lea    rdx,[rbp+0x20]
0x00deea85: mov    rcx,r13
0x00deea88: call   0x140070870
0x00deea8d: lea    rdx,[rbp+0x48]
0x00deea91: mov    rcx,r13
0x00deea94: call   0x140070860
0x00deea99: lea    r8,[rbp+0x48]
0x00deea9d: lea    rdx,[rsp+0x30]
0x00deeaa2: lea    rcx,[rbp+0x20]
0x00deeaa6: call   0x140070450
0x00deeaab: xor    edx,edx
0x00deeaad: movzx  ecx,BYTE PTR [rax]
0x00deeab0: call   0x140066de0
0x00deeab5: test   al,al
0x00deeab7: je     0x140deeb18
0x00deeab9: mov    r15d,0x1
0x00deeabf: nop
0x00deeac0: lea    rcx,[rbp+0x20]
0x00deeac4: call   0x140070440
0x00deeac9: mov    rcx,QWORD PTR [rax]
0x00deeacc: movzx  ebx,bl
0x00deeacf: cmp    DWORD PTR [rcx+0x1c],0xffffffff
0x00deead3: cmovne ebx,r15d
0x00deead7: lea    rcx,[rbp+0x20]
0x00deeadb: call   0x140070440
0x00deeae0: mov    rcx,QWORD PTR [rax]
0x00deeae3: movzx  esi,sil
0x00deeae7: cmp    DWORD PTR [rcx+0x24],0xffffffff
0x00deeaeb: cmovne esi,r15d
0x00deeaef: lea    rcx,[rbp+0x20]
0x00deeaf3: call   0x140070430
0x00deeaf8: lea    r8,[rbp+0x48]
0x00deeafc: lea    rdx,[rsp+0x30]
0x00deeb01: lea    rcx,[rbp+0x20]
0x00deeb05: call   0x140070450
0x00deeb0a: xor    edx,edx
0x00deeb0c: movzx  ecx,BYTE PTR [rax]
0x00deeb0f: call   0x140066de0
0x00deeb14: test   al,al
0x00deeb16: jne    0x140deeac0
0x00deeb18: mov    edx,DWORD PTR [r12+0xfc]
0x00deeb20: cmp    edx,0xffffffff
0x00deeb23: jne    0x140deeb48
0x00deeb25: test   bl,bl
0x00deeb27: jne    0x140deebcf
0x00deeb2d: lea    rdx,[rip+0x94ced4]        # 0x14173ba08 ; literal="It is performed "
0x00deeb34: mov    rcx,rdi
0x00deeb37: call   0x140070b90
0x00deeb3c: mov    r14b,0x1
0x00deeb3f: lea    rdx,[rip+0x94ceda]        # 0x14173ba20 ; literal="without preference for a scale"
0x00deeb46: jmp    0x140deebc7
0x00deeb48: lea    rcx,[rip+0x171b889]        # 0x14250a3d8
0x00deeb4f: call   0x140073ba0
0x00deeb54: test   rax,rax
0x00deeb57: je     0x140deebcf
0x00deeb59: cmp    DWORD PTR [r12+0x100],0x0
0x00deeb62: jl     0x140deebcf
0x00deeb64: lea    r15,[rax+0x90]
0x00deeb6b: mov    rcx,r15
0x00deeb6e: call   0x140070480
0x00deeb73: movsxd rdx,DWORD PTR [r12+0x100]
0x00deeb7b: cmp    rdx,rax
0x00deeb7e: jae    0x140deebcf
0x00deeb80: lea    rdx,[rip+0x94ce81]        # 0x14173ba08 ; literal="It is performed "
0x00deeb87: mov    rcx,rdi
0x00deeb8a: call   0x140070b90
0x00deeb8f: mov    r14b,0x1
0x00deeb92: lea    rdx,[rip+0x94d03f]        # 0x14173bbd8 ; literal="using the "
0x00deeb99: mov    rcx,rdi
0x00deeb9c: call   0x140070b90
0x00deeba1: movsxd rdx,DWORD PTR [r12+0x100]
0x00deeba9: mov    rcx,r15
0x00deebac: call   0x140070850
0x00deebb1: mov    rdx,QWORD PTR [rax]
0x00deebb4: add    rdx,0x8
0x00deebb8: mov    rcx,rdi
0x00deebbb: call   0x1400bb340
0x00deebc0: lea    rdx,[rip+0x94d01d]        # 0x14173bbe4 ; literal=" scale"
0x00deebc7: mov    rcx,rdi
0x00deebca: call   0x140070b90
0x00deebcf: cmp    DWORD PTR [r12+0x104],0xffffffff
0x00deebd8: jne    0x140deebe3
0x00deebda: test   sil,sil
0x00deebdd: jne    0x140deece2
0x00deebe3: test   r14b,r14b
0x00deebe6: jne    0x140deebfa
0x00deebe8: lea    rdx,[rip+0x94ce19]        # 0x14173ba08 ; literal="It is performed "
0x00deebef: mov    rcx,rdi
0x00deebf2: call   0x140070b90
0x00deebf7: mov    r14b,0x1
0x00deebfa: cmp    DWORD PTR [r12+0xfc],0xffffffff
0x00deec03: jne    0x140deec10
0x00deec05: test   bl,bl
0x00deec07: lea    rdx,[rip+0x819616]        # 0x141608224 ; literal="in "
0x00deec0e: jne    0x140deec17
0x00deec10: lea    rdx,[rip+0x94cfd9]        # 0x14173bbf0 ; literal=" and in "
0x00deec17: mov    rcx,rdi
0x00deec1a: call   0x140070b90
0x00deec1f: cmp    DWORD PTR [r12+0x104],0xffffffff
0x00deec28: jne    0x140deec3f
0x00deec2a: test   sil,sil
0x00deec2d: jne    0x140deece2
0x00deec33: lea    rdx,[rip+0x94cfc6]        # 0x14173bc00 ; literal="free rhythm"
0x00deec3a: jmp    0x140deecda
0x00deec3f: lea    rdx,[rip+0x8154be]        # 0x141604104 ; literal="the "
0x00deec46: mov    rcx,rdi
0x00deec49: call   0x140070b90
0x00deec4e: mov    edx,DWORD PTR [r12+0x104]
0x00deec56: lea    rcx,[rip+0x171b7ab]        # 0x14250a408
0x00deec5d: call   0x140073ba0
0x00deec62: mov    rbx,rax
0x00deec65: test   rax,rax
0x00deec68: je     0x140deecd3
0x00deec6a: cmp    DWORD PTR [r12+0x108],0x0
0x00deec73: jl     0x140deec99
0x00deec75: movsxd rsi,DWORD PTR [r12+0x108]
0x00deec7d: lea    rcx,[rax+0x20]
0x00deec81: call   0x140070480
0x00deec86: cmp    rsi,rax
0x00deec89: jae    0x140deec99
0x00deec8b: mov    rdx,rsi
0x00deec8e: lea    rcx,[rbx+0x20]
0x00deec92: call   0x140070850
0x00deec97: jmp    0x140deecc8
0x00deec99: cmp    DWORD PTR [r12+0x10c],0x0
0x00deeca2: jl     0x140deecd3
0x00deeca4: lea    rsi,[rbx+0x8]
0x00deeca8: movsxd rbx,DWORD PTR [r12+0x10c]
0x00deecb0: mov    rcx,rsi
0x00deecb3: call   0x140070480
0x00deecb8: cmp    rbx,rax
0x00deecbb: jae    0x140deecd3
0x00deecbd: mov    rdx,rbx
0x00deecc0: mov    rcx,rsi
0x00deecc3: call   0x140070850
0x00deecc8: mov    rdx,QWORD PTR [rax]
0x00deeccb: mov    rcx,rdi
0x00deecce: call   0x1400bb340
0x00deecd3: lea    rdx,[rip+0x876b16]        # 0x1416657f0 ; literal=" rhythm"
0x00deecda: mov    rcx,rdi
0x00deecdd: call   0x140070b90
0x00deece2: test   r14b,r14b
0x00deece5: je     0x140deecf6
0x00deece7: lea    rdx,[rip+0x82a8aa]        # 0x141619598 ; literal=".  "
0x00deecee: mov    rcx,rdi
0x00deecf1: call   0x140070b90
0x00deecf6: cmp    DWORD PTR [r12+0x110],0x0
0x00deecff: je     0x140deefe5
0x00deed05: mov    rcx,rdi
0x00deed08: test   BYTE PTR [r12+0x120],0x1
0x00deed11: lea    rdx,[rip+0x94ce28]        # 0x14173bb40 ; literal="Throughout, when possible, composers and performers are to "
0x00deed18: jne    0x140deed21
0x00deed1a: lea    rdx,[rip+0x94ce5f]        # 0x14173bb80 ; literal="Throughout, when possible, performers are to "
0x00deed21: call   0x140070b90
0x00deed26: xor    r13d,r13d
0x00deed29: mov    esi,r13d
0x00deed2c: mov    r8d,r13d
0x00deed2f: mov    r9d,DWORD PTR [r12+0x110]
0x00deed37: mov    edx,DWORD PTR [rsp+0x50]
0x00deed3b: lea    rdi,[rip+0xffffffffff2112be]        # 0x140000000
0x00deed42: mov    r13d,0x1
0x00deed48: cmp    r8d,0xf
0x00deed4c: ja     0x140deedc9
0x00deed4e: movsxd rax,r8d
0x00deed51: mov    ecx,DWORD PTR [rdi+rax*4+0xdf4b44]
0x00deed58: add    rcx,rdi
0x00deed5b: jmp    rcx
0x00deed5d: mov    edx,r13d
0x00deed60: jmp    0x140deedc9
0x00deed62: mov    edx,0x2
0x00deed67: jmp    0x140deedc9
0x00deed69: mov    edx,0x4
0x00deed6e: jmp    0x140deedc9
0x00deed70: mov    edx,0x8
0x00deed75: jmp    0x140deedc9
0x00deed77: mov    edx,0x10
0x00deed7c: jmp    0x140deedc9
0x00deed7e: mov    edx,0x80
0x00deed83: jmp    0x140deedc9
0x00deed85: mov    edx,0x100
0x00deed8a: jmp    0x140deedc9
0x00deed8c: mov    edx,0x200
0x00deed91: jmp    0x140deedc9
0x00deed93: mov    edx,0x400
0x00deed98: jmp    0x140deedc9
0x00deed9a: mov    edx,0x800
0x00deed9f: jmp    0x140deedc9
0x00deeda1: mov    edx,0x1000
0x00deeda6: jmp    0x140deedc9
0x00deeda8: mov    edx,0x2000
0x00deedad: jmp    0x140deedc9
0x00deedaf: mov    edx,0x4000
0x00deedb4: jmp    0x140deedc9
0x00deedb6: mov    edx,0x8000
0x00deedbb: jmp    0x140deedc9
0x00deedbd: mov    edx,0x20
0x00deedc2: jmp    0x140deedc9
0x00deedc4: mov    edx,0x40
0x00deedc9: test   r9d,edx
0x00deedcc: je     0x140deedd0
0x00deedce: inc    esi
0x00deedd0: inc    r8d
0x00deedd3: cmp    r8d,0x10
0x00deedd7: jl     0x140deed48
0x00deeddd: xor    r13d,r13d
0x00deede0: mov    r14d,r13d
0x00deede3: mov    ebx,DWORD PTR [rsp+0x50]
0x00deede7: mov    rdi,QWORD PTR [rbp-0x28]
0x00deedeb: mov    r13d,0x1
0x00deedf1: lea    rdx,[rip+0xffffffffff211208]        # 0x140000000
0x00deedf8: cmp    r14d,0xf
0x00deedfc: ja     0x140deee7d
0x00deee02: movsxd rax,r14d
0x00deee05: mov    ecx,DWORD PTR [rdx+rax*4+0xdf4b84]
0x00deee0c: add    rcx,rdx
0x00deee0f: jmp    rcx
0x00deee11: mov    ebx,r13d
0x00deee14: jmp    0x140deee7d
0x00deee16: mov    ebx,0x2
0x00deee1b: jmp    0x140deee7d
0x00deee1d: mov    ebx,0x4
0x00deee22: jmp    0x140deee7d
0x00deee24: mov    ebx,0x8
0x00deee29: jmp    0x140deee7d
0x00deee2b: mov    ebx,0x10
0x00deee30: jmp    0x140deee7d
0x00deee32: mov    ebx,0x80
0x00deee37: jmp    0x140deee7d
0x00deee39: mov    ebx,0x100
0x00deee3e: jmp    0x140deee7d
0x00deee40: mov    ebx,0x200
0x00deee45: jmp    0x140deee7d
0x00deee47: mov    ebx,0x400
0x00deee4c: jmp    0x140deee7d
0x00deee4e: mov    ebx,0x800
0x00deee53: jmp    0x140deee7d
0x00deee55: mov    ebx,0x1000
0x00deee5a: jmp    0x140deee7d
0x00deee5c: mov    ebx,0x2000
0x00deee61: jmp    0x140deee7d
0x00deee63: mov    ebx,0x4000
0x00deee68: jmp    0x140deee7d
0x00deee6a: mov    ebx,0x8000
0x00deee6f: jmp    0x140deee7d
0x00deee71: mov    ebx,0x20
0x00deee76: jmp    0x140deee7d
0x00deee78: mov    ebx,0x40
0x00deee7d: test   DWORD PTR [r12+0x110],ebx
0x00deee85: je     0x140deefc9
0x00deee8b: cmp    ebx,0x100
0x00deee91: ja     0x140deef26
0x00deee97: je     0x140deef1d
0x00deee9d: lea    eax,[rbx-0x1]
0x00deeea0: cmp    eax,0x7f
0x00deeea3: ja     0x140deefa5
0x00deeea9: movzx  eax,BYTE PTR [rdx+rax*1+0xdf4be8]
0x00deeeb1: mov    ecx,DWORD PTR [rdx+rax*4+0xdf4bc4]
0x00deeeb8: add    rcx,rdx
0x00deeebb: jmp    rcx
0x00deeebd: lea    rdx,[rip+0x94ccec]        # 0x14173bbb0 ; literal="glide from note to note"
0x00deeec4: jmp    0x140deef9d
0x00deeec9: lea    rdx,[rip+0x94ccf8]        # 0x14173bbc8 ; literal="use grace notes"
0x00deeed0: jmp    0x140deef9d
0x00deeed5: lea    rdx,[rip+0x94cd8c]        # 0x14173bc68 ; literal="use mordents"
0x00deeedc: jmp    0x140deef9d
0x00deeee1: lea    rdx,[rip+0x94cd90]        # 0x14173bc78 ; literal="make trills"
0x00deeee8: jmp    0x140deef9d
0x00deeeed: lea    rdx,[rip+0x94cd94]        # 0x14173bc88 ; literal="play rapid runs"
0x00deeef4: jmp    0x140deef9d
0x00deeef9: lea    rdx,[rip+0x94cd98]        # 0x14173bc98 ; literal="locally improvise"
0x00deef00: jmp    0x140deef9d
0x00deef05: lea    rdx,[rip+0x94cda4]        # 0x14173bcb0 ; literal="spread syllables over many notes"
0x00deef0c: jmp    0x140deef9d
0x00deef11: lea    rdx,[rip+0x94cdc0]        # 0x14173bcd8 ; literal="match notes and syllables"
0x00deef18: jmp    0x140deef9d
0x00deef1d: lea    rdx,[rip+0x94ccec]        # 0x14173bc10 ; literal="syncopate"
0x00deef24: jmp    0x140deef9d
0x00deef26: cmp    ebx,0x1000
0x00deef2c: ja     0x140deef6c
0x00deef2e: je     0x140deef63
0x00deef30: cmp    ebx,0x200
0x00deef36: je     0x140deef5a
0x00deef38: cmp    ebx,0x400
0x00deef3e: je     0x140deef51
0x00deef40: cmp    ebx,0x800
0x00deef46: jne    0x140deefa5
0x00deef48: lea    rdx,[rip+0x94cd01]        # 0x14173bc50 ; literal="modulate frequently"
0x00deef4f: jmp    0x140deef9d
0x00deef51: lea    rdx,[rip+0x94ccd8]        # 0x14173bc30 ; literal="alternate tension and repose"
0x00deef58: jmp    0x140deef9d
0x00deef5a: lea    rdx,[rip+0x94ccbf]        # 0x14173bc20 ; literal="add fills"
0x00deef61: jmp    0x140deef9d
0x00deef63: lea    rdx,[rip+0x94cdc6]        # 0x14173bd30 ; literal="play arpeggios"
0x00deef6a: jmp    0x140deef9d
0x00deef6c: cmp    ebx,0x2000
0x00deef72: je     0x140deef96
0x00deef74: cmp    ebx,0x4000
0x00deef7a: je     0x140deef8d
0x00deef7c: cmp    ebx,0x8000
0x00deef82: jne    0x140deefa5
0x00deef84: lea    rdx,[rip+0x94cdd5]        # 0x14173bd60 ; literal="freely adjust the beats"
0x00deef8b: jmp    0x140deef9d
0x00deef8d: lea    rdx,[rip+0x94cdbc]        # 0x14173bd50 ; literal="play legato"
0x00deef94: jmp    0x140deef9d
0x00deef96: lea    rdx,[rip+0x94cda3]        # 0x14173bd40 ; literal="play staccato"
0x00deef9d: mov    rcx,rdi
0x00deefa0: call   0x140070b90
0x00deefa5: cmp    esi,0x3
0x00deefa8: jl     0x140deefb3
0x00deefaa: lea    rdx,[rip+0x8153e3]        # 0x141604394 ; literal=", "
0x00deefb1: jmp    0x140deefbf
0x00deefb3: cmp    esi,0x2
0x00deefb6: jne    0x140deefc7
0x00deefb8: lea    rdx,[rip+0x8153cd]        # 0x14160438c ; literal=" and "
0x00deefbf: mov    rcx,rdi
0x00deefc2: call   0x140070b90
0x00deefc7: dec    esi
0x00deefc9: inc    r14d
0x00deefcc: cmp    r14d,0x10
0x00deefd0: jl     0x140deedf1
0x00deefd6: lea    rdx,[rip+0x82a5bb]        # 0x141619598 ; literal=".  "
0x00deefdd: mov    rcx,rdi
0x00deefe0: call   0x140070b90
0x00deefe5: xor    r13d,r13d
0x00deefe8: lea    rbx,[r12+0xb8]
0x00deeff0: mov    rcx,rbx
0x00deeff3: call   0x140070480
0x00deeff8: test   rax,rax
0x00deeffb: je     0x140def59c
0x00def001: lea    rdx,[rip+0x94ccf0]        # 0x14173bcf8 ; literal="From beginning to end, when improvising"
0x00def008: mov    rcx,rdi
0x00def00b: call   0x140070b90
0x00def010: test   BYTE PTR [r12+0x120],0x1
0x00def019: je     0x140def02a
0x00def01b: lea    rdx,[rip+0x94ccfe]        # 0x14173bd20 ; literal=" or composing"
0x00def022: mov    rcx,rdi
0x00def025: call   0x140070b90
0x00def02a: lea    rdx,[rip+0x94cd7f]        # 0x14173bdb0 ; literal=", artists should "
0x00def031: mov    rcx,rdi
0x00def034: call   0x140070b90
0x00def039: mov    rcx,rbx
0x00def03c: call   0x140070480
0x00def041: mov    r12,rax
0x00def044: mov    QWORD PTR [rbp-0x78],rax
0x00def048: lea    rdx,[rsp+0x50]
0x00def04d: mov    rcx,rbx
0x00def050: call   0x140070870
0x00def055: lea    rdx,[rbp-0x50]
0x00def059: mov    rcx,rbx
0x00def05c: call   0x140070860
0x00def061: lea    r8,[rbp-0x50]
0x00def065: lea    rdx,[rsp+0x34]
0x00def06a: lea    rcx,[rsp+0x50]
0x00def06f: call   0x140070450
0x00def074: xor    edx,edx
0x00def076: movzx  ecx,BYTE PTR [rax]
0x00def079: call   0x140066de0
0x00def07e: test   al,al
0x00def080: je     0x140def589
0x00def086: mov    r15d,DWORD PTR [rsp+0x50]
0x00def08b: mov    esi,DWORD PTR [rsp+0x50]
0x00def08f: nop
0x00def090: lea    rcx,[rsp+0x50]
0x00def095: call   0x140070440
0x00def09a: mov    rcx,QWORD PTR [rax]
0x00def09d: mov    edx,DWORD PTR [rcx+0x4]
0x00def0a0: test   edx,edx
0x00def0a2: je     0x140def0c0
0x00def0a4: sub    edx,0x1
0x00def0a7: je     0x140def0b7
0x00def0a9: cmp    edx,0x1
0x00def0ac: jne    0x140def0cf
0x00def0ae: lea    rdx,[rip+0x94cd23]        # 0x14173bdd8 ; literal="sometimes"
0x00def0b5: jmp    0x140def0c7
0x00def0b7: lea    rdx,[rip+0x94cd0e]        # 0x14173bdcc ; literal="often"
0x00def0be: jmp    0x140def0c7
0x00def0c0: lea    rdx,[rip+0x94ccfd]        # 0x14173bdc4 ; literal="always"
0x00def0c7: mov    rcx,rdi
0x00def0ca: call   0x140070b90
0x00def0cf: lea    rdx,[rip+0x94cca2]        # 0x14173bd78 ; literal=" include a "
0x00def0d6: mov    rcx,rdi
0x00def0d9: call   0x140070b90
0x00def0de: lea    rcx,[rsp+0x50]
0x00def0e3: call   0x140070440
0x00def0e8: mov    rcx,QWORD PTR [rax]
0x00def0eb: mov    edx,DWORD PTR [rcx]
0x00def0ed: test   edx,edx
0x00def0ef: je     0x140def11b
0x00def0f1: sub    edx,0x1
0x00def0f4: je     0x140def112
0x00def0f6: sub    edx,0x1
0x00def0f9: je     0x140def109
0x00def0fb: cmp    edx,0x1
0x00def0fe: jne    0x140def12a
0x00def100: lea    rdx,[rip+0x94cc99]        # 0x14173bda0 ; literal="falling-rising"
0x00def107: jmp    0x140def122
0x00def109: lea    rdx,[rip+0x94cc80]        # 0x14173bd90 ; literal="rising-falling"
0x00def110: jmp    0x140def122
0x00def112: lea    rdx,[rip+0x82a65f]        # 0x141619778 ; literal="falling"
0x00def119: jmp    0x140def122
0x00def11b: lea    rdx,[rip+0x94cc62]        # 0x14173bd84 ; literal="rising"
0x00def122: mov    rcx,rdi
0x00def125: call   0x140070b90
0x00def12a: lea    rdx,[rip+0x94ccef]        # 0x14173be20 ; literal=" melody pattern"
0x00def131: mov    rcx,rdi
0x00def134: call   0x140070b90
0x00def139: lea    rcx,[rsp+0x50]
0x00def13e: call   0x140070440
0x00def143: mov    rcx,QWORD PTR [rax]
0x00def146: add    rcx,0x8
0x00def14a: call   0x140070480
0x00def14f: test   rax,rax
0x00def152: je     0x140def336
0x00def158: lea    rdx,[rip+0x81a6e9]        # 0x141609848 ; literal=" with "
0x00def15f: mov    rcx,rdi
0x00def162: call   0x140070b90
0x00def167: lea    rcx,[rsp+0x50]
0x00def16c: call   0x140070440
0x00def171: mov    rcx,QWORD PTR [rax]
0x00def174: add    rcx,0x8
0x00def178: call   0x140070480
0x00def17d: mov    rbx,rax
0x00def180: lea    rcx,[rsp+0x50]
0x00def185: call   0x140070440
0x00def18a: mov    rcx,QWORD PTR [rax]
0x00def18d: add    rcx,0x8
0x00def191: lea    rdx,[rsp+0x68]
0x00def196: call   0x140070870
0x00def19b: lea    rcx,[rsp+0x50]
0x00def1a0: call   0x140070440
0x00def1a5: mov    rcx,QWORD PTR [rax]
0x00def1a8: add    rcx,0x8
0x00def1ac: lea    rdx,[rsp+0x78]
0x00def1b1: call   0x140070860
0x00def1b6: lea    r8,[rsp+0x78]
0x00def1bb: lea    rdx,[rsp+0x30]
0x00def1c0: lea    rcx,[rsp+0x68]
0x00def1c5: call   0x140070450
0x00def1ca: xor    edx,edx
0x00def1cc: movzx  ecx,BYTE PTR [rax]
0x00def1cf: call   0x140066de0
0x00def1d4: test   al,al
0x00def1d6: je     0x140def336
0x00def1dc: nop    DWORD PTR [rax+0x0]
0x00def1e0: lea    rcx,[rsp+0x68]
0x00def1e5: call   0x140070440
0x00def1ea: mov    rcx,QWORD PTR [rax]
0x00def1ed: test   BYTE PTR [rcx+0x4],0x2
0x00def1f1: je     0x140def202
0x00def1f3: lea    rdx,[rip+0x8b5fd6]        # 0x1416a51d0 ; literal="flattened"
0x00def1fa: mov    rcx,rdi
0x00def1fd: call   0x140070b90
0x00def202: lea    rcx,[rsp+0x68]
0x00def207: call   0x140070440
0x00def20c: mov    rcx,QWORD PTR [rax]
0x00def20f: test   BYTE PTR [rcx+0x4],0x4
0x00def213: je     0x140def224
0x00def215: lea    rdx,[rip+0x94cc14]        # 0x14173be30 ; literal="sharpened"
0x00def21c: mov    rcx,rdi
0x00def21f: call   0x140070b90
0x00def224: lea    rdx,[rip+0x8147c5]        # 0x1416039f0 ; literal=" "
0x00def22b: mov    rcx,rdi
0x00def22e: call   0x140070b90
0x00def233: lea    rcx,[rbp+0x1b0]
0x00def23a: call   0x140070cc0
0x00def23f: nop
0x00def240: lea    rcx,[rsp+0x68]
0x00def245: call   0x140070440
0x00def24a: mov    rcx,QWORD PTR [rax]
0x00def24d: xor    r8d,r8d
0x00def250: lea    rdx,[rbp+0x1b0]
0x00def257: mov    ecx,DWORD PTR [rcx]
0x00def259: call   0x140548050
0x00def25e: lea    rcx,[rbp+0x1b0]
0x00def265: call   0x140546560
0x00def26a: lea    rdx,[rbp+0x1b0]
0x00def271: mov    rcx,rdi
0x00def274: call   0x1400bb340
0x00def279: lea    rdx,[rip+0x94cbc0]        # 0x14173be40 ; literal=" degree"
0x00def280: mov    rcx,rdi
0x00def283: call   0x140070b90
0x00def288: lea    rcx,[rsp+0x50]
0x00def28d: call   0x140070440
0x00def292: mov    rcx,QWORD PTR [rax]
0x00def295: cmp    DWORD PTR [rcx],0x2
0x00def298: je     0x140def2ac
0x00def29a: lea    rcx,[rsp+0x50]
0x00def29f: call   0x140070440
0x00def2a4: mov    rcx,QWORD PTR [rax]
0x00def2a7: cmp    DWORD PTR [rcx],0x3
0x00def2aa: jne    0x140def2d5
0x00def2ac: lea    rcx,[rsp+0x68]
0x00def2b1: call   0x140070440
0x00def2b6: mov    rcx,QWORD PTR [rax]
0x00def2b9: test   BYTE PTR [rcx+0x4],0x1
0x00def2bd: mov    rcx,rdi
0x00def2c0: lea    rdx,[rip+0x94cb81]        # 0x14173be48 ; literal=" on the rise"
0x00def2c7: jne    0x140def2d0
0x00def2c9: lea    rdx,[rip+0x94cb18]        # 0x14173bde8 ; literal=" on the fall"
0x00def2d0: call   0x140070b90
0x00def2d5: cmp    ebx,0x3
0x00def2d8: jl     0x140def2e3
0x00def2da: lea    rdx,[rip+0x8150b3]        # 0x141604394 ; literal=", "
0x00def2e1: jmp    0x140def2ef
0x00def2e3: cmp    ebx,0x2
0x00def2e6: jne    0x140def2f8
0x00def2e8: lea    rdx,[rip+0x81509d]        # 0x14160438c ; literal=" and "
0x00def2ef: mov    rcx,rdi
0x00def2f2: call   0x140070b90
0x00def2f7: nop
0x00def2f8: lea    rcx,[rbp+0x1b0]
0x00def2ff: call   0x140069460
0x00def304: lea    rcx,[rsp+0x68]
0x00def309: call   0x140070430
0x00def30e: dec    ebx
0x00def310: lea    r8,[rsp+0x78]
0x00def315: lea    rdx,[rsp+0x30]
0x00def31a: lea    rcx,[rsp+0x68]
0x00def31f: call   0x140070450
0x00def324: xor    edx,edx
0x00def326: movzx  ecx,BYTE PTR [rax]
0x00def329: call   0x140066de0
0x00def32e: test   al,al
0x00def330: jne    0x140def1e0
0x00def336: lea    rcx,[rsp+0x50]
0x00def33b: call   0x140070440
0x00def340: mov    rcx,QWORD PTR [rax]
0x00def343: cmp    DWORD PTR [rcx+0x20],0x0
0x00def347: je     0x140def52f
0x00def34d: lea    rcx,[rsp+0x50]
0x00def352: call   0x140070440
0x00def357: mov    rcx,QWORD PTR [rax]
0x00def35a: add    rcx,0x8
0x00def35e: call   0x140070480
0x00def363: mov    rcx,rdi
0x00def366: test   rax,rax
0x00def369: lea    rdx,[rip+0x94ca88]        # 0x14173bdf8 ; literal=" as well as "
0x00def370: jne    0x140def379
0x00def372: lea    rdx,[rip+0x81a4cf]        # 0x141609848 ; literal=" with "
0x00def379: call   0x140070b90
0x00def37e: mov    r14d,r13d
0x00def381: mov    ebx,r13d
0x00def384: lea    rdi,[rip+0xffffffffff210c75]        # 0x140000000
0x00def38b: mov    r13d,0x1
0x00def391: cmp    ebx,0x7
0x00def394: ja     0x140def3e0
0x00def396: movsxd rax,ebx
0x00def399: mov    ecx,DWORD PTR [rdi+rax*4+0xdf4c68]
0x00def3a0: add    rcx,rdi
0x00def3a3: jmp    rcx
0x00def3a5: mov    r15d,r13d
0x00def3a8: jmp    0x140def3e0
0x00def3aa: mov    r15d,0x2
0x00def3b0: jmp    0x140def3e0
0x00def3b2: mov    r15d,0x4
0x00def3b8: jmp    0x140def3e0
0x00def3ba: mov    r15d,0x8
0x00def3c0: jmp    0x140def3e0
0x00def3c2: mov    r15d,0x10
0x00def3c8: jmp    0x140def3e0
0x00def3ca: mov    r15d,0x1000
0x00def3d0: jmp    0x140def3e0
0x00def3d2: mov    r15d,0x2000
0x00def3d8: jmp    0x140def3e0
0x00def3da: mov    r15d,0x4000
0x00def3e0: lea    rcx,[rsp+0x50]
0x00def3e5: call   0x140070440
0x00def3ea: mov    rcx,QWORD PTR [rax]
0x00def3ed: test   DWORD PTR [rcx+0x20],r15d
0x00def3f1: je     0x140def3f6
0x00def3f3: inc    r14d
0x00def3f6: inc    ebx
0x00def3f8: cmp    ebx,0x8
0x00def3fb: jl     0x140def391
0x00def3fd: xor    r13d,r13d
0x00def400: mov    ebx,r13d
0x00def403: mov    rdi,QWORD PTR [rbp-0x28]
0x00def407: lea    r12,[rip+0xffffffffff210bf2]        # 0x140000000
0x00def40e: mov    r13d,0x1
0x00def414: cmp    ebx,0x7
0x00def417: ja     0x140def45d
0x00def419: movsxd rax,ebx
0x00def41c: mov    ecx,DWORD PTR [r12+rax*4+0xdf4c88]
0x00def424: add    rcx,r12
0x00def427: jmp    rcx
0x00def429: mov    esi,r13d
0x00def42c: jmp    0x140def45d
0x00def42e: mov    esi,0x2
0x00def433: jmp    0x140def45d
0x00def435: mov    esi,0x4
0x00def43a: jmp    0x140def45d
0x00def43c: mov    esi,0x8
0x00def441: jmp    0x140def45d
0x00def443: mov    esi,0x10
0x00def448: jmp    0x140def45d
0x00def44a: mov    esi,0x1000
0x00def44f: jmp    0x140def45d
0x00def451: mov    esi,0x2000
0x00def456: jmp    0x140def45d
0x00def458: mov    esi,0x4000
0x00def45d: lea    rcx,[rsp+0x50]
0x00def462: call   0x140070440
0x00def467: mov    rcx,QWORD PTR [rax]
0x00def46a: test   DWORD PTR [rcx+0x20],esi
0x00def46d: je     0x140def51d
0x00def473: cmp    esi,0x10
0x00def476: ja     0x140def4bd
0x00def478: je     0x140def4b4
0x00def47a: mov    eax,esi
0x00def47c: sub    eax,r13d
0x00def47f: je     0x140def4ab
0x00def481: sub    eax,r13d
0x00def484: je     0x140def4a2
0x00def486: sub    eax,0x2
0x00def489: je     0x140def499
0x00def48b: cmp    eax,0x4
0x00def48e: jne    0x140def4f6
0x00def490: lea    rdx,[rip+0x94c9fd]        # 0x14173be94 ; literal="trills"
0x00def497: jmp    0x140def4ee
0x00def499: lea    rdx,[rip+0x94c9e8]        # 0x14173be88 ; literal="mordents"
0x00def4a0: jmp    0x140def4ee
0x00def4a2: lea    rdx,[rip+0x94c967]        # 0x14173be10 ; literal="grace notes"
0x00def4a9: jmp    0x140def4ee
0x00def4ab: lea    rdx,[rip+0x94c956]        # 0x14173be08 ; literal="glides"
0x00def4b2: jmp    0x140def4ee
0x00def4b4: lea    rdx,[rip+0x94c9e5]        # 0x14173bea0 ; literal="rapid runs"
0x00def4bb: jmp    0x140def4ee
0x00def4bd: cmp    esi,0x1000
0x00def4c3: je     0x140def4e7
0x00def4c5: cmp    esi,0x2000
0x00def4cb: je     0x140def4de
0x00def4cd: cmp    esi,0x4000
0x00def4d3: jne    0x140def4f6
0x00def4d5: lea    rdx,[rip+0x94c988]        # 0x14173be64 ; literal="legato"
0x00def4dc: jmp    0x140def4ee
0x00def4de: lea    rdx,[rip+0x94c973]        # 0x14173be58 ; literal="staccato"
0x00def4e5: jmp    0x140def4ee
0x00def4e7: lea    rdx,[rip+0x94c9c2]        # 0x14173beb0 ; literal="arpeggios"
0x00def4ee: mov    rcx,rdi
0x00def4f1: call   0x140070b90
0x00def4f6: cmp    r14d,0x3
0x00def4fa: jl     0x140def505
0x00def4fc: lea    rdx,[rip+0x814e91]        # 0x141604394 ; literal=", "
0x00def503: jmp    0x140def512
0x00def505: cmp    r14d,0x2
0x00def509: jne    0x140def51a
0x00def50b: lea    rdx,[rip+0x814e7a]        # 0x14160438c ; literal=" and "
0x00def512: mov    rcx,rdi
0x00def515: call   0x140070b90
0x00def51a: dec    r14d
0x00def51d: inc    ebx
0x00def51f: cmp    ebx,0x8
0x00def522: jl     0x140def414
0x00def528: mov    r12,QWORD PTR [rbp-0x78]
0x00def52c: xor    r13d,r13d
0x00def52f: cmp    r12d,0x3
0x00def533: jl     0x140def53e
0x00def535: lea    rdx,[rip+0x814e58]        # 0x141604394 ; literal=", "
0x00def53c: jmp    0x140def54b
0x00def53e: cmp    r12d,0x2
0x00def542: jne    0x140def553
0x00def544: lea    rdx,[rip+0x814e41]        # 0x14160438c ; literal=" and "
0x00def54b: mov    rcx,rdi
0x00def54e: call   0x140070b90
0x00def553: lea    rcx,[rsp+0x50]
0x00def558: call   0x140070430
0x00def55d: dec    r12d
0x00def560: mov    QWORD PTR [rbp-0x78],r12
0x00def564: lea    r8,[rbp-0x50]
0x00def568: lea    rdx,[rsp+0x34]
0x00def56d: lea    rcx,[rsp+0x50]
0x00def572: call   0x140070450
0x00def577: xor    edx,edx
0x00def579: movzx  ecx,BYTE PTR [rax]
0x00def57c: call   0x140066de0
0x00def581: test   al,al
0x00def583: jne    0x140def090
0x00def589: lea    rdx,[rip+0x82a008]        # 0x141619598 ; literal=".  "
0x00def590: mov    rcx,rdi
0x00def593: call   0x140070b90
0x00def598: mov    r12,QWORD PTR [rbp-0x38]
0x00def59c: mov    BYTE PTR [rsp+0x34],0x1
0x00def5a1: mov    BYTE PTR [rbp-0x60],0x1
0x00def5a5: mov    r14d,r13d
0x00def5a8: mov    DWORD PTR [rsp+0x64],r13d
0x00def5ad: lea    rcx,[r12+0xa0]
0x00def5b5: lea    rdx,[rbp-0x18]
0x00def5b9: call   0x140070870
0x00def5be: mov    rcx,QWORD PTR [rax]
0x00def5c1: mov    QWORD PTR [rsp+0x40],rcx
0x00def5c6: lea    r8,[rbp+0x30]
0x00def5ca: lea    rdx,[rsp+0x35]
0x00def5cf: lea    rcx,[rsp+0x40]
0x00def5d4: call   0x140070450
0x00def5d9: xor    edx,edx
0x00def5db: movzx  ecx,BYTE PTR [rax]
0x00def5de: call   0x140066de0
0x00def5e3: test   al,al
0x00def5e5: je     0x140df064b
0x00def5eb: lea    rbx,[r12+0x88]
0x00def5f3: mov    QWORD PTR [rbp-0x78],rbx
0x00def5f7: nop    WORD PTR [rax+rax*1+0x0]
0x00def600: mov    r12b,0x1
0x00def603: mov    BYTE PTR [rsp+0x33],r12b
0x00def608: mov    r15d,0xffffffff
0x00def60e: lea    rdx,[rsp+0x50]
0x00def613: mov    rcx,rbx
0x00def616: call   0x140070870
0x00def61b: lea    rdx,[rsp+0x68]
0x00def620: mov    rcx,rbx
0x00def623: call   0x140070860
0x00def628: lea    r8,[rsp+0x68]
0x00def62d: lea    rdx,[rsp+0x32]
0x00def632: lea    rcx,[rsp+0x50]
0x00def637: call   0x140070450
0x00def63c: xor    edx,edx
0x00def63e: movzx  ecx,BYTE PTR [rax]
0x00def641: call   0x140066de0
0x00def646: test   al,al
0x00def648: je     0x140def79e
0x00def64e: xchg   ax,ax
0x00def650: lea    rcx,[rsp+0x50]
0x00def655: call   0x140070440
0x00def65a: mov    rcx,QWORD PTR [rax]
0x00def65d: add    rcx,0x30
0x00def661: lea    rdx,[rsp+0x58]
0x00def666: call   0x140070870
0x00def66b: lea    rcx,[rsp+0x50]
0x00def670: call   0x140070440
0x00def675: mov    rcx,QWORD PTR [rax]
0x00def678: add    rcx,0x30
0x00def67c: lea    rdx,[rbp+0x0]
0x00def680: call   0x140070860
0x00def685: lea    rcx,[rsp+0x50]
0x00def68a: call   0x140070440
0x00def68f: mov    rcx,QWORD PTR [rax]
0x00def692: add    rcx,0x48
0x00def696: lea    rdx,[rbp-0x50]
0x00def69a: call   0x140070870
0x00def69f: lea    rcx,[rsp+0x50]
0x00def6a4: call   0x140070440
0x00def6a9: mov    rcx,QWORD PTR [rax]
0x00def6ac: add    rcx,0x48
0x00def6b0: lea    rdx,[rbp-0x18]
0x00def6b4: call   0x140070860
0x00def6b9: lea    r8,[rbp+0x0]
0x00def6bd: lea    rdx,[rsp+0x30]
0x00def6c2: lea    rcx,[rsp+0x58]
0x00def6c7: call   0x140070450
0x00def6cc: xor    edx,edx
0x00def6ce: movzx  ecx,BYTE PTR [rax]
0x00def6d1: call   0x140066de0
0x00def6d6: test   al,al
0x00def6d8: je     0x140def73e
0x00def6da: nop    WORD PTR [rax+rax*1+0x0]
0x00def6e0: lea    rcx,[rsp+0x58]
0x00def6e5: call   0x140070440
0x00def6ea: cmp    DWORD PTR [rax],r14d
0x00def6ed: je     0x140def725
0x00def6ef: lea    rcx,[rsp+0x58]
0x00def6f4: call   0x140070980
0x00def6f9: lea    rcx,[rbp-0x50]
0x00def6fd: call   0x140070980
0x00def702: lea    r8,[rbp+0x0]
0x00def706: lea    rdx,[rsp+0x30]
0x00def70b: lea    rcx,[rsp+0x58]
0x00def710: call   0x140070450
0x00def715: xor    edx,edx
0x00def717: movzx  ecx,BYTE PTR [rax]
0x00def71a: call   0x140066de0
0x00def71f: test   al,al
0x00def721: jne    0x140def6e0
0x00def723: jmp    0x140def73e
0x00def725: lea    rcx,[rbp-0x50]
0x00def729: call   0x140070440
0x00def72e: cmp    r15d,0xffffffff
0x00def732: jne    0x140def739
0x00def734: mov    r15d,DWORD PTR [rax]
0x00def737: jmp    0x140def73e
0x00def739: cmp    r15d,DWORD PTR [rax]
0x00def73c: jne    0x140def791
0x00def73e: lea    r8,[rbp+0x0]
0x00def742: lea    rdx,[rsp+0x4a]
0x00def747: lea    rcx,[rsp+0x58]
0x00def74c: call   0x140070450
0x00def751: xor    edx,edx
0x00def753: movzx  ecx,BYTE PTR [rax]
0x00def756: call   0x140073490
0x00def75b: test   al,al
0x00def75d: jne    0x140def791
0x00def75f: lea    rcx,[rsp+0x50]
0x00def764: call   0x140070430
0x00def769: lea    r8,[rsp+0x68]
0x00def76e: lea    rdx,[rsp+0x32]
0x00def773: lea    rcx,[rsp+0x50]
0x00def778: call   0x140070450
0x00def77d: xor    edx,edx
0x00def77f: movzx  ecx,BYTE PTR [rax]
0x00def782: call   0x140066de0
0x00def787: test   al,al
0x00def789: jne    0x140def650
0x00def78f: jmp    0x140def79e
0x00def791: xor    r12b,r12b
0x00def794: mov    BYTE PTR [rsp+0x33],r12b
0x00def799: mov    BYTE PTR [rsp+0x34],r12b
0x00def79e: mov    sil,0x1
0x00def7a1: mov    BYTE PTR [rsp+0x31],sil
0x00def7a6: mov    r13d,0xfffffffe
0x00def7ac: mov    DWORD PTR [rsp+0x3c],r13d
0x00def7b1: mov    ebx,r13d
0x00def7b4: mov    DWORD PTR [rsp+0x60],ebx
0x00def7b8: lea    rdx,[rbp+0x40]
0x00def7bc: mov    rcx,QWORD PTR [rbp-0x78]
0x00def7c0: call   0x140070870
0x00def7c5: mov    rcx,QWORD PTR [rax]
0x00def7c8: mov    QWORD PTR [rsp+0x50],rcx
0x00def7cd: lea    r8,[rsp+0x68]
0x00def7d2: lea    rdx,[rsp+0x49]
0x00def7d7: lea    rcx,[rsp+0x50]
0x00def7dc: call   0x140070450
0x00def7e1: xor    edx,edx
0x00def7e3: movzx  ecx,BYTE PTR [rax]
0x00def7e6: call   0x140066de0
0x00def7eb: test   al,al
0x00def7ed: je     0x140def99b
0x00def7f3: lea    rcx,[rsp+0x50]
0x00def7f8: call   0x140070440
0x00def7fd: mov    rcx,QWORD PTR [rax]
0x00def800: add    rcx,0x30
0x00def804: lea    rdx,[rbp-0x68]
0x00def808: call   0x140070870
0x00def80d: lea    rcx,[rsp+0x50]
0x00def812: call   0x140070440
0x00def817: mov    rcx,QWORD PTR [rax]
0x00def81a: add    rcx,0x30
0x00def81e: lea    rdx,[rsp+0x78]
0x00def823: call   0x140070860
0x00def828: lea    rcx,[rsp+0x50]
0x00def82d: call   0x140070440
0x00def832: mov    rcx,QWORD PTR [rax]
0x00def835: add    rcx,0x78
0x00def839: lea    rdx,[rbp-0x8]
0x00def83d: call   0x140070870
0x00def842: lea    rcx,[rsp+0x50]
0x00def847: call   0x140070440
0x00def84c: mov    rcx,QWORD PTR [rax]
0x00def84f: add    rcx,0x78
0x00def853: lea    rdx,[rbp-0x20]
0x00def857: call   0x140070860
0x00def85c: lea    rcx,[rsp+0x50]
0x00def861: call   0x140070440
0x00def866: mov    rcx,QWORD PTR [rax]
0x00def869: add    rcx,0x90
0x00def870: lea    rdx,[rbp-0x10]
0x00def874: call   0x140070870
0x00def879: lea    rcx,[rsp+0x50]
0x00def87e: call   0x140070440
0x00def883: mov    rcx,QWORD PTR [rax]
0x00def886: add    rcx,0x90
0x00def88d: lea    rdx,[rbp+0x8]
0x00def891: call   0x140070860
0x00def896: lea    r8,[rsp+0x78]
0x00def89b: lea    rdx,[rsp+0x48]
0x00def8a0: lea    rcx,[rbp-0x68]
0x00def8a4: call   0x140070450
0x00def8a9: xor    edx,edx
0x00def8ab: movzx  ecx,BYTE PTR [rax]
0x00def8ae: call   0x140066de0
0x00def8b3: test   al,al
0x00def8b5: je     0x140def952
0x00def8bb: nop    DWORD PTR [rax+rax*1+0x0]
0x00def8c0: lea    rcx,[rbp-0x68]
0x00def8c4: call   0x140070440
0x00def8c9: cmp    DWORD PTR [rax],r14d
0x00def8cc: jne    0x140def908
0x00def8ce: lea    rcx,[rbp-0x8]
0x00def8d2: call   0x140070440
0x00def8d7: cmp    r13d,0xfffffffe
0x00def8db: jne    0x140def8f6
0x00def8dd: mov    r13d,DWORD PTR [rax]
0x00def8e0: mov    DWORD PTR [rsp+0x3c],r13d
0x00def8e5: lea    rcx,[rbp-0x10]
0x00def8e9: call   0x140070440
0x00def8ee: mov    ebx,DWORD PTR [rax]
0x00def8f0: mov    DWORD PTR [rsp+0x60],ebx
0x00def8f4: jmp    0x140def908
0x00def8f6: cmp    r13d,DWORD PTR [rax]
0x00def8f9: jne    0x140def94f
0x00def8fb: lea    rcx,[rbp-0x10]
0x00def8ff: call   0x140070440
0x00def904: cmp    ebx,DWORD PTR [rax]
0x00def906: jne    0x140def94f
0x00def908: test   sil,sil
0x00def90b: je     0x140def952
0x00def90d: lea    rcx,[rbp-0x68]
0x00def911: call   0x140070980
0x00def916: lea    rcx,[rbp-0x8]
0x00def91a: call   0x140070980
0x00def91f: lea    rcx,[rbp-0x10]
0x00def923: call   0x140070980
0x00def928: lea    r8,[rsp+0x78]
0x00def92d: lea    rdx,[rsp+0x48]
0x00def932: lea    rcx,[rbp-0x68]
0x00def936: call   0x140070450
0x00def93b: xor    edx,edx
0x00def93d: movzx  ecx,BYTE PTR [rax]
0x00def940: call   0x140066de0
0x00def945: test   al,al
0x00def947: jne    0x140def8c0
0x00def94d: jmp    0x140def952
0x00def94f: xor    sil,sil
0x00def952: lea    rcx,[rsp+0x50]
0x00def957: call   0x140070430
0x00def95c: lea    r8,[rsp+0x68]
0x00def961: lea    rdx,[rsp+0x49]
0x00def966: lea    rcx,[rsp+0x50]
0x00def96b: call   0x140070450
0x00def970: xor    edx,edx
0x00def972: movzx  ecx,BYTE PTR [rax]
0x00def975: call   0x140066de0
0x00def97a: test   al,al
0x00def97c: jne    0x140def7f3
0x00def982: mov    BYTE PTR [rsp+0x31],sil
0x00def987: mov    eax,DWORD PTR [rbp-0x60]
0x00def98a: movzx  eax,al
0x00def98d: test   sil,sil
0x00def990: mov    ecx,0x0
0x00def995: cmove  eax,ecx
0x00def998: mov    DWORD PTR [rbp-0x60],eax
0x00def99b: lea    rcx,[rsp+0x40]
0x00def9a0: call   0x140070440
0x00def9a5: mov    rcx,QWORD PTR [rax]
0x00def9a8: cmp    DWORD PTR [rcx+0x8],0x0
0x00def9ac: jne    0x140def9e7
0x00def9ae: lea    rcx,[rsp+0x40]
0x00def9b3: call   0x140070440
0x00def9b8: mov    rcx,QWORD PTR [rax]
0x00def9bb: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x00def9bf: jne    0x140def9e7
0x00def9c1: lea    rcx,[rsp+0x40]
0x00def9c6: call   0x140070440
0x00def9cb: mov    rcx,QWORD PTR [rax]
0x00def9ce: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00def9d2: jne    0x140def9e7
0x00def9d4: test   r12b,r12b
0x00def9d7: je     0x140df0182
0x00def9dd: cmp    r15d,0x4
0x00def9e1: je     0x140df0182
0x00def9e7: lea    rdx,[rip+0x8294e2]        # 0x141618ed0 ; literal="[B]"
0x00def9ee: mov    rcx,rdi
0x00def9f1: call   0x140070b90
0x00def9f6: lea    rcx,[rsp+0x40]
0x00def9fb: call   0x140070440
0x00defa00: mov    rcx,QWORD PTR [rax]
0x00defa03: cmp    DWORD PTR [rcx+0x10],0x2
0x00defa07: mov    rcx,rdi
0x00defa0a: lea    rdx,[rip+0x94c45b]        # 0x14173be6c ; literal="Each "
0x00defa11: jge    0x140defa1a
0x00defa13: lea    rdx,[rip+0x819222]        # 0x141608c3c ; literal="The "
0x00defa1a: call   0x140070b90
0x00defa1f: lea    rcx,[rsp+0x40]
0x00defa24: call   0x140070440
0x00defa29: mov    rcx,QWORD PTR [rax]
0x00defa2c: test   BYTE PTR [rcx+0x4],0x1
0x00defa30: je     0x140defa41
0x00defa32: lea    rdx,[rip+0x94b61b]        # 0x14173b054 ; literal="singer"
0x00defa39: mov    rcx,rdi
0x00defa3c: call   0x140070b90
0x00defa41: lea    rcx,[rsp+0x40]
0x00defa46: call   0x140070440
0x00defa4b: mov    rcx,QWORD PTR [rax]
0x00defa4e: test   BYTE PTR [rcx+0x4],0x2
0x00defa52: je     0x140defa63
0x00defa54: lea    rdx,[rip+0x94b605]        # 0x14173b060 ; literal="speaker"
0x00defa5b: mov    rcx,rdi
0x00defa5e: call   0x140070b90
0x00defa63: lea    rcx,[rsp+0x40]
0x00defa68: call   0x140070440
0x00defa6d: mov    rcx,QWORD PTR [rax]
0x00defa70: test   BYTE PTR [rcx+0x4],0x4
0x00defa74: je     0x140defa85
0x00defa76: lea    rdx,[rip+0x94b5eb]        # 0x14173b068 ; literal="chanter"
0x00defa7d: mov    rcx,rdi
0x00defa80: call   0x140070b90
0x00defa85: lea    rcx,[rsp+0x40]
0x00defa8a: call   0x140070440
0x00defa8f: mov    rcx,QWORD PTR [rax]
0x00defa92: cmp    DWORD PTR [rcx],0xffffffff
0x00defa95: je     0x140defae1
0x00defa97: lea    rcx,[rsp+0x40]
0x00defa9c: call   0x140070440
0x00defaa1: mov    rcx,QWORD PTR [rax]
0x00defaa4: movsxd rdx,DWORD PTR [rcx]
0x00defaa7: lea    rcx,[rip+0x171f7ca]        # 0x14250f278
0x00defaae: call   0x140070850
0x00defab3: mov    rbx,QWORD PTR [rax]
0x00defab6: test   rbx,rbx
0x00defab9: je     0x140defae1
0x00defabb: lea    rcx,[rsp+0x40]
0x00defac0: call   0x140070440
0x00defac5: mov    rcx,QWORD PTR [rax]
0x00defac8: cmp    DWORD PTR [rcx+0x10],0x2
0x00defacc: mov    rcx,rdi
0x00defacf: lea    rdx,[rbx+0x88]
0x00defad6: jge    0x140defadc
0x00defad8: lea    rdx,[rbx+0x68]
0x00defadc: call   0x1400bb340
0x00defae1: xor    r14d,r14d
0x00defae4: mov    esi,r14d
0x00defae7: test   r12b,r12b
0x00defaea: je     0x140defaf8
0x00defaec: cmp    r15d,0x4
0x00defaf0: mov    eax,0x1
0x00defaf5: cmovne esi,eax
0x00defaf8: lea    rcx,[rsp+0x40]
0x00defafd: call   0x140070440
0x00defb02: mov    rcx,QWORD PTR [rax]
0x00defb05: lea    ebx,[rsi+0x1]
0x00defb08: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00defb0c: cmove  ebx,esi
0x00defb0f: lea    rcx,[rsp+0x40]
0x00defb14: call   0x140070440
0x00defb19: mov    esi,r14d
0x00defb1c: mov    rax,QWORD PTR [rax]
0x00defb1f: lea    r14d,[rbx+0x1]
0x00defb23: cmp    DWORD PTR [rax+0x14],0xffffffff
0x00defb27: cmove  r14d,ebx
0x00defb2b: mov    edi,DWORD PTR [rsp+0x38]
0x00defb2f: lea    r12,[rip+0xffffffffff2104ca]        # 0x140000000
0x00defb36: mov    r13d,0x1
0x00defb3c: nop    DWORD PTR [rax+0x0]
0x00defb40: cmp    esi,0xd
0x00defb43: ja     0x140defbb3
0x00defb45: movsxd rax,esi
0x00defb48: mov    ecx,DWORD PTR [r12+rax*4+0xdf4ca8]
0x00defb50: add    rcx,r12
0x00defb53: jmp    rcx
0x00defb55: mov    edi,r13d
0x00defb58: jmp    0x140defbb3
0x00defb5a: mov    edi,0x2
0x00defb5f: jmp    0x140defbb3
0x00defb61: mov    edi,0x4
0x00defb66: jmp    0x140defbb3
0x00defb68: mov    edi,0x8
0x00defb6d: jmp    0x140defbb3
0x00defb6f: mov    edi,0x10
0x00defb74: jmp    0x140defbb3
0x00defb76: mov    edi,0x20
0x00defb7b: jmp    0x140defbb3
0x00defb7d: mov    edi,0x40
0x00defb82: jmp    0x140defbb3
0x00defb84: mov    edi,0x80
0x00defb89: jmp    0x140defbb3
0x00defb8b: mov    edi,0x800
0x00defb90: jmp    0x140defbb3
0x00defb92: mov    edi,0x1000
0x00defb97: jmp    0x140defbb3
0x00defb99: mov    edi,0x100
0x00defb9e: jmp    0x140defbb3
0x00defba0: mov    edi,0x200
0x00defba5: jmp    0x140defbb3
0x00defba7: mov    edi,0x2000
0x00defbac: jmp    0x140defbb3
0x00defbae: mov    edi,0x4000
0x00defbb3: lea    rcx,[rsp+0x40]
0x00defbb8: call   0x140070440
0x00defbbd: mov    rcx,QWORD PTR [rax]
0x00defbc0: test   DWORD PTR [rcx+0x8],edi
0x00defbc3: je     0x140defbc8
0x00defbc5: inc    r14d
0x00defbc8: inc    esi
0x00defbca: cmp    esi,0xe
0x00defbcd: jl     0x140defb40
0x00defbd3: mov    DWORD PTR [rsp+0x38],edi
0x00defbd7: lea    rdx,[rip+0x94c29a]        # 0x14173be78 ; literal=" always "
0x00defbde: mov    rdi,QWORD PTR [rbp-0x28]
0x00defbe2: mov    rcx,rdi
0x00defbe5: call   0x140070b90
0x00defbea: cmp    BYTE PTR [rsp+0x33],0x0
0x00defbef: mov    r13d,DWORD PTR [rsp+0x3c]
0x00defbf4: je     0x140defc64
0x00defbf6: cmp    r15d,0x4
0x00defbfa: je     0x140defc64
0x00defbfc: test   r15d,r15d
0x00defbff: je     0x140defc2e
0x00defc01: sub    r15d,0x1
0x00defc05: je     0x140defc25
0x00defc07: sub    r15d,0x1
0x00defc0b: je     0x140defc1c
0x00defc0d: cmp    r15d,0x1
0x00defc11: jne    0x140defc3d
0x00defc13: lea    rdx,[rip+0x94c346]        # 0x14173bf60 ; literal="provides the rhythm"
0x00defc1a: jmp    0x140defc35
0x00defc1c: lea    rdx,[rip+0x94c32d]        # 0x14173bf50 ; literal="does harmony"
0x00defc23: jmp    0x140defc35
0x00defc25: lea    rdx,[rip+0x94c304]        # 0x14173bf30 ; literal="does the counterpoint melody"
0x00defc2c: jmp    0x140defc35
0x00defc2e: lea    rdx,[rip+0x94c2e3]        # 0x14173bf18 ; literal="does the main melody"
0x00defc35: mov    rcx,rdi
0x00defc38: call   0x140070b90
0x00defc3d: cmp    r14d,0x3
0x00defc41: jl     0x140defc4c
0x00defc43: lea    rdx,[rip+0x81474a]        # 0x141604394 ; literal=", "
0x00defc4a: jmp    0x140defc59
0x00defc4c: cmp    r14d,0x2
0x00defc50: jne    0x140defc61
0x00defc52: lea    rdx,[rip+0x814733]        # 0x14160438c ; literal=" and "
0x00defc59: mov    rcx,rdi
0x00defc5c: call   0x140070b90
0x00defc61: dec    r14d
0x00defc64: lea    rcx,[rsp+0x40]
0x00defc69: call   0x140070440
0x00defc6e: mov    rcx,QWORD PTR [rax]
0x00defc71: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00defc75: je     0x140defe90
0x00defc7b: lea    rdx,[rip+0x94b766]        # 0x14173b3e8 ; literal="should "
0x00defc82: mov    rcx,rdi
0x00defc85: call   0x140070b90
0x00defc8a: lea    rcx,[rsp+0x40]
0x00defc8f: call   0x140070440
0x00defc94: mov    rcx,QWORD PTR [rax]
0x00defc97: mov    eax,DWORD PTR [rcx+0x18]
0x00defc9a: add    eax,0xffffffde
0x00defc9d: lea    rbx,[rip+0xffffffffff21035c]        # 0x140000000
0x00defca4: cmp    eax,0x26
0x00defca7: ja     0x140defe5c
0x00defcad: cdqe
0x00defcaf: mov    ecx,DWORD PTR [rbx+rax*4+0xdf4ce0]
0x00defcb6: add    rcx,rbx
0x00defcb9: jmp    rcx
0x00defcbb: lea    rdx,[rip+0x94b72e]        # 0x14173b3f0 ; literal="stress the rhythm"
0x00defcc2: jmp    0x140defe54
0x00defcc7: lea    rdx,[rip+0x94b692]        # 0x14173b360 ; literal="be stately"
0x00defcce: jmp    0x140defe54
0x00defcd3: lea    rdx,[rip+0x94b696]        # 0x14173b370 ; literal="be bright"
0x00defcda: jmp    0x140defe54
0x00defcdf: lea    rdx,[rip+0x94b69a]        # 0x14173b380 ; literal="be lively"
0x00defce6: jmp    0x140defe54
0x00defceb: lea    rdx,[rip+0x94c1ce]        # 0x14173bec0 ; literal="perform with skill"
0x00defcf2: jmp    0x140defe54
0x00defcf7: lea    rdx,[rip+0x94b75a]        # 0x14173b458 ; literal="be vigorous"
0x00defcfe: jmp    0x140defe54
0x00defd03: lea    rdx,[rip+0x94b75e]        # 0x14173b468 ; literal="be spirited"
0x00defd0a: jmp    0x140defe54
0x00defd0f: lea    rdx,[rip+0x94b762]        # 0x14173b478 ; literal="be delicate"
0x00defd16: jmp    0x140defe54
0x00defd1b: lea    rdx,[rip+0x94b6e6]        # 0x14173b408 ; literal="bring a sense of motion"
0x00defd22: jmp    0x140defe54
0x00defd27: lea    rdx,[rip+0x94b75a]        # 0x14173b488 ; literal="be fiery"
0x00defd2e: jmp    0x140defe54
0x00defd33: lea    rdx,[rip+0x94c19e]        # 0x14173bed8 ; literal="perform with feeling"
0x00defd3a: jmp    0x140defe54
0x00defd3f: lea    rdx,[rip+0x94b6f2]        # 0x14173b438 ; literal="feel agitated"
0x00defd46: jmp    0x140defe54
0x00defd4b: lea    rdx,[rip+0x94b6f6]        # 0x14173b448 ; literal="be passionate"
0x00defd52: jmp    0x140defe54
0x00defd57: lea    rdx,[rip+0x94ad4a]        # 0x14173aaa8 ; literal="sparkle"
0x00defd5e: jmp    0x140defe54
0x00defd63: lea    rdx,[rip+0x94ad46]        # 0x14173aab0 ; literal="be broad"
0x00defd6a: jmp    0x140defe54
0x00defd6f: lea    rdx,[rip+0x94c17a]        # 0x14173bef0 ; literal="perform sweetly"
0x00defd76: jmp    0x140defe54
0x00defd7b: lea    rdx,[rip+0x94ad4e]        # 0x14173aad0 ; literal="be strong"
0x00defd82: jmp    0x140defe54
0x00defd87: lea    rdx,[rip+0x94acd2]        # 0x14173aa60 ; literal="be energetic"
0x00defd8e: jmp    0x140defe54
0x00defd93: lea    rdx,[rip+0x94acd6]        # 0x14173aa70 ; literal="be forceful"
0x00defd9a: jmp    0x140defe54
0x00defd9f: lea    rdx,[rip+0x94acda]        # 0x14173aa80 ; literal="feel heroic"
0x00defda6: jmp    0x140defe54
0x00defdab: lea    rdx,[rip+0x94c14e]        # 0x14173bf00 ; literal="perform expressively"
0x00defdb2: jmp    0x140defe54
0x00defdb7: lea    rdx,[rip+0x94ad6a]        # 0x14173ab28 ; literal="feel furious"
0x00defdbe: jmp    0x140defe54
0x00defdc3: lea    rdx,[rip+0x94ad6e]        # 0x14173ab38 ; literal="be joyful"
0x00defdca: jmp    0x140defe54
0x00defdcf: lea    rdx,[rip+0x94ad72]        # 0x14173ab48 ; literal="be grand"
0x00defdd6: jmp    0x140defe54
0x00defdd8: lea    rdx,[rip+0x94ad79]        # 0x14173ab58 ; literal="be merry"
0x00defddf: jmp    0x140defe54
0x00defde1: lea    rdx,[rip+0x94acf8]        # 0x14173aae0 ; literal="be graceful"
0x00defde8: jmp    0x140defe54
0x00defdea: lea    rdx,[rip+0x94b6f7]        # 0x14173b4e8 ; literal="build as the performance proceeds"
0x00defdf1: jmp    0x140defe54
0x00defdf3: lea    rdx,[rip+0x94ad0e]        # 0x14173ab08 ; literal="evoke tears"
0x00defdfa: jmp    0x140defe54
0x00defdfc: lea    rdx,[rip+0x94ad15]        # 0x14173ab18 ; literal="be melancholic"
0x00defe03: jmp    0x140defe54
0x00defe05: lea    rdx,[rip+0x94ad9c]        # 0x14173aba8 ; literal="feel mournful"
0x00defe0c: jmp    0x140defe54
0x00defe0e: lea    rdx,[rip+0x94b6fb]        # 0x14173b510 ; literal="perform with a light touch"
0x00defe15: jmp    0x140defe54
0x00defe17: lea    rdx,[rip+0x94adba]        # 0x14173abd8 ; literal="feel heavy"
0x00defe1e: jmp    0x140defe54
0x00defe20: lea    rdx,[rip+0x94adc1]        # 0x14173abe8 ; literal="feel mysterious"
0x00defe27: jmp    0x140defe54
0x00defe29: lea    rdx,[rip+0x94ad38]        # 0x14173ab68 ; literal="be jumpy"
0x00defe30: jmp    0x140defe54
0x00defe32: lea    rdx,[rip+0x94ad3f]        # 0x14173ab78 ; literal="feel playful"
0x00defe39: jmp    0x140defe54
0x00defe3b: lea    rdx,[rip+0x94ad46]        # 0x14173ab88 ; literal="feel tender"
0x00defe42: jmp    0x140defe54
0x00defe44: lea    rdx,[rip+0x94ad4d]        # 0x14173ab98 ; literal="feel calm"
0x00defe4b: jmp    0x140defe54
0x00defe4d: lea    rdx,[rip+0x94adf4]        # 0x14173ac48 ; literal="be triumphant"
0x00defe54: mov    rcx,rdi
0x00defe57: call   0x140070b90
0x00defe5c: cmp    r14d,0x3
0x00defe60: jl     0x140defe76
0x00defe62: lea    rdx,[rip+0x81452b]        # 0x141604394 ; literal=", "
0x00defe69: mov    rcx,rdi
0x00defe6c: call   0x140070b90
0x00defe71: dec    r14d
0x00defe74: jmp    0x140defe97
0x00defe76: cmp    r14d,0x2
0x00defe7a: jne    0x140defe8b
0x00defe7c: lea    rdx,[rip+0x814509]        # 0x14160438c ; literal=" and "
0x00defe83: mov    rcx,rdi
0x00defe86: call   0x140070b90
0x00defe8b: dec    r14d
0x00defe8e: jmp    0x140defe97
0x00defe90: lea    rbx,[rip+0xffffffffff210169]        # 0x140000000
0x00defe97: lea    rcx,[rsp+0x40]
0x00defe9c: call   0x140070440
0x00defea1: mov    rcx,QWORD PTR [rax]
0x00defea4: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x00defea8: je     0x140deff73
0x00defeae: lea    rdx,[rip+0x94b677]        # 0x14173b52c ; literal="is to "
0x00defeb5: mov    rcx,rdi
0x00defeb8: call   0x140070b90
0x00defebd: lea    rcx,[rsp+0x40]
0x00defec2: call   0x140070440
0x00defec7: mov    rcx,QWORD PTR [rax]
0x00defeca: mov    eax,DWORD PTR [rcx+0x14]
0x00defecd: add    eax,0xffffffec
0x00defed0: cmp    eax,0xa
0x00defed3: ja     0x140deff4c
0x00defed5: cdqe
0x00defed7: mov    ecx,DWORD PTR [rbx+rax*4+0xdf4d7c]
0x00defede: add    rcx,rbx
0x00defee1: jmp    rcx
0x00defee3: lea    rdx,[rip+0x94ae86]        # 0x14173ad70 ; literal="be in whispered undertones"
0x00defeea: jmp    0x140deff44
0x00defeec: lea    rdx,[rip+0x94ae9d]        # 0x14173ad90 ; literal="be very soft"
0x00defef3: jmp    0x140deff44
0x00defef5: lea    rdx,[rip+0x94aea4]        # 0x14173ada0 ; literal="be soft"
0x00defefc: jmp    0x140deff44
0x00defefe: lea    rdx,[rip+0x94aea3]        # 0x14173ada8 ; literal="be moderately soft"
0x00deff05: jmp    0x140deff44
0x00deff07: lea    rdx,[rip+0x94af9a]        # 0x14173aea8 ; literal="be moderately loud"
0x00deff0e: jmp    0x140deff44
0x00deff10: lea    rdx,[rip+0x94afa9]        # 0x14173aec0 ; literal="be loud"
0x00deff17: jmp    0x140deff44
0x00deff19: lea    rdx,[rip+0x94afa8]        # 0x14173aec8 ; literal="be very loud"
0x00deff20: jmp    0x140deff44
0x00deff22: lea    rdx,[rip+0x94afaf]        # 0x14173aed8 ; literal="become louder and louder"
0x00deff29: jmp    0x140deff44
0x00deff2b: lea    rdx,[rip+0x94aeee]        # 0x14173ae20 ; literal="become softer and softer"
0x00deff32: jmp    0x140deff44
0x00deff34: lea    rdx,[rip+0x94af05]        # 0x14173ae40 ; literal="fade into silence"
0x00deff3b: jmp    0x140deff44
0x00deff3d: lea    rdx,[rip+0x94af14]        # 0x14173ae58 ; literal="start loud then be immediately soft"
0x00deff44: mov    rcx,rdi
0x00deff47: call   0x140070b90
0x00deff4c: cmp    r14d,0x3
0x00deff50: jl     0x140deff5b
0x00deff52: lea    rdx,[rip+0x81443b]        # 0x141604394 ; literal=", "
0x00deff59: jmp    0x140deff68
0x00deff5b: cmp    r14d,0x2
0x00deff5f: jne    0x140deff70
0x00deff61: lea    rdx,[rip+0x814424]        # 0x14160438c ; literal=" and "
0x00deff68: mov    rcx,rdi
0x00deff6b: call   0x140070b90
0x00deff70: dec    r14d
0x00deff73: lea    rcx,[rsp+0x40]
0x00deff78: call   0x140070440
0x00deff7d: mov    rcx,QWORD PTR [rax]
0x00deff80: cmp    DWORD PTR [rcx+0x8],0x0
0x00deff84: je     0x140df0169
0x00deff8a: xor    eax,eax
0x00deff8c: mov    ebx,eax
0x00deff8e: mov    r13d,DWORD PTR [rsp+0x38]
0x00deff93: lea    rsi,[rip+0xffffffffff210066]        # 0x140000000
0x00deff9a: cmp    ebx,0xd
0x00deff9d: ja     0x140df001c
0x00deff9f: movsxd rax,ebx
0x00deffa2: mov    ecx,DWORD PTR [rsi+rax*4+0xdf4da8]
0x00deffa9: add    rcx,rsi
0x00deffac: jmp    rcx
0x00deffae: mov    r13d,0x1
0x00deffb4: jmp    0x140df001c
0x00deffb6: mov    r13d,0x2
0x00deffbc: jmp    0x140df001c
0x00deffbe: mov    r13d,0x4
0x00deffc4: jmp    0x140df001c
0x00deffc6: mov    r13d,0x8
0x00deffcc: jmp    0x140df001c
0x00deffce: mov    r13d,0x10
0x00deffd4: jmp    0x140df001c
0x00deffd6: mov    r13d,0x20
0x00deffdc: jmp    0x140df001c
0x00deffde: mov    r13d,0x40
0x00deffe4: jmp    0x140df001c
0x00deffe6: mov    r13d,0x80
0x00deffec: jmp    0x140df001c
0x00deffee: mov    r13d,0x800
0x00defff4: jmp    0x140df001c
0x00defff6: mov    r13d,0x1000
0x00defffc: jmp    0x140df001c
0x00defffe: mov    r13d,0x100
0x00df0004: jmp    0x140df001c
0x00df0006: mov    r13d,0x200
0x00df000c: jmp    0x140df001c
0x00df000e: mov    r13d,0x2000
0x00df0014: jmp    0x140df001c
0x00df0016: mov    r13d,0x4000
0x00df001c: lea    rcx,[rsp+0x40]
0x00df0021: call   0x140070440
0x00df0026: mov    rcx,QWORD PTR [rax]
0x00df0029: test   DWORD PTR [rcx+0x8],r13d
0x00df002d: je     0x140df0154
0x00df0033: cmp    r13d,0x80
0x00df003a: ja     0x140df00b9
0x00df003c: je     0x140df00b0
0x00df003e: lea    eax,[r13-0x1]
0x00df0042: cmp    eax,0x3f
0x00df0045: ja     0x140df012d
0x00df004b: movzx  eax,BYTE PTR [rsi+rax*1+0xdf4e00]
0x00df0053: mov    ecx,DWORD PTR [rsi+rax*4+0xdf4de0]
0x00df005a: add    rcx,rsi
0x00df005d: jmp    rcx
0x00df005f: lea    rdx,[rip+0x94b4d2]        # 0x14173b538 ; literal="glides from note to note"
0x00df0066: jmp    0x140df0125
0x00df006b: lea    rdx,[rip+0x94b426]        # 0x14173b498 ; literal="uses grace notes"
0x00df0072: jmp    0x140df0125
0x00df0077: lea    rdx,[rip+0x94b432]        # 0x14173b4b0 ; literal="uses mordents"
0x00df007e: jmp    0x140df0125
0x00df0083: lea    rdx,[rip+0x94b436]        # 0x14173b4c0 ; literal="makes trills"
0x00df008a: jmp    0x140df0125
0x00df008f: lea    rdx,[rip+0x94b43a]        # 0x14173b4d0 ; literal="plays rapid runs"
0x00df0096: jmp    0x140df0125
0x00df009b: lea    rdx,[rip+0x94b4e6]        # 0x14173b588 ; literal="spreads syllables over many notes"
0x00df00a2: jmp    0x140df0125
0x00df00a7: lea    rdx,[rip+0x94b5d2]        # 0x14173b680 ; literal="matches notes and syllables"
0x00df00ae: jmp    0x140df0125
0x00df00b0: lea    rdx,[rip+0x94b4f9]        # 0x14173b5b0 ; literal="locally improvises"
0x00df00b7: jmp    0x140df0125
0x00df00b9: cmp    r13d,0x1000
0x00df00c0: ja     0x140df0103
0x00df00c2: je     0x140df00fa
0x00df00c4: cmp    r13d,0x100
0x00df00cb: je     0x140df00f1
0x00df00cd: cmp    r13d,0x200
0x00df00d4: je     0x140df00e8
0x00df00d6: cmp    r13d,0x800
0x00df00dd: jne    0x140df012d
0x00df00df: lea    rdx,[rip+0x94b502]        # 0x14173b5e8 ; literal="modulates frequently"
0x00df00e6: jmp    0x140df0125
0x00df00e8: lea    rdx,[rip+0x94b4e9]        # 0x14173b5d8 ; literal="adds fills"
0x00df00ef: jmp    0x140df0125
0x00df00f1: lea    rdx,[rip+0x94b4d0]        # 0x14173b5c8 ; literal="syncopates"
0x00df00f8: jmp    0x140df0125
0x00df00fa: lea    rdx,[rip+0x94b457]        # 0x14173b558 ; literal="plays arpeggios"
0x00df0101: jmp    0x140df0125
0x00df0103: cmp    r13d,0x2000
0x00df010a: je     0x140df011e
0x00df010c: cmp    r13d,0x4000
0x00df0113: jne    0x140df012d
0x00df0115: lea    rdx,[rip+0x94b45c]        # 0x14173b578 ; literal="plays legato"
0x00df011c: jmp    0x140df0125
0x00df011e: lea    rdx,[rip+0x94b443]        # 0x14173b568 ; literal="plays staccato"
0x00df0125: mov    rcx,rdi
0x00df0128: call   0x140070b90
0x00df012d: cmp    r14d,0x3
0x00df0131: jl     0x140df013c
0x00df0133: lea    rdx,[rip+0x81425a]        # 0x141604394 ; literal=", "
0x00df013a: jmp    0x140df0149
0x00df013c: cmp    r14d,0x2
0x00df0140: jne    0x140df0151
0x00df0142: lea    rdx,[rip+0x814243]        # 0x14160438c ; literal=" and "
0x00df0149: mov    rcx,rdi
0x00df014c: call   0x140070b90
0x00df0151: dec    r14d
0x00df0154: inc    ebx
0x00df0156: cmp    ebx,0xe
0x00df0159: jl     0x140deff93
0x00df015f: mov    DWORD PTR [rsp+0x38],r13d
0x00df0164: mov    r13d,DWORD PTR [rsp+0x3c]
0x00df0169: lea    rdx,[rip+0x829428]        # 0x141619598 ; literal=".  "
0x00df0170: mov    rcx,rdi
0x00df0173: call   0x140070b90
0x00df0178: movzx  esi,BYTE PTR [rsp+0x31]
0x00df017d: mov    r14d,DWORD PTR [rsp+0x64]
0x00df0182: test   sil,sil
0x00df0185: je     0x140df0609
0x00df018b: test   r13d,r13d
0x00df018e: js     0x140df0609
0x00df0194: lea    rcx,[rsp+0x40]
0x00df0199: call   0x140070440
0x00df019e: mov    rbx,QWORD PTR [rax]
0x00df01a1: movsxd rax,DWORD PTR [rbx]
0x00df01a4: cmp    eax,0xffffffff
0x00df01a7: jne    0x140df02a2
0x00df01ad: mov    ebx,DWORD PTR [rsp+0x60]
0x00df01b1: cmp    r13d,ebx
0x00df01b4: jne    0x140df01f6
0x00df01b6: lea    rdx,[rip+0x94b4e3]        # 0x14173b6a0 ; literal="The voice stays in the "
0x00df01bd: mov    rcx,rdi
0x00df01c0: call   0x140070b90
0x00df01c5: test   r13d,r13d
0x00df01c8: je     0x140df027f
0x00df01ce: sub    r13d,0x1
0x00df01d2: je     0x140df01ea
0x00df01d4: cmp    r13d,0x1
0x00df01d8: jne    0x140df028e
0x00df01de: lea    rdx,[rip+0x875f2b]        # 0x141666110 ; literal="high"
0x00df01e5: jmp    0x140df0286
0x00df01ea: lea    rdx,[rip+0x94b4c7]        # 0x14173b6b8 ; literal="middle"
0x00df01f1: jmp    0x140df0286
0x00df01f6: test   r13d,r13d
0x00df01f9: jne    0x140df0214
0x00df01fb: cmp    ebx,0x2
0x00df01fe: jne    0x140df0214
0x00df0200: lea    rdx,[rip+0x94b3f9]        # 0x14173b600 ; literal="The voice uses its entire range.  "
0x00df0207: mov    rcx,rdi
0x00df020a: call   0x140070b90
0x00df020f: jmp    0x140df0609
0x00df0214: lea    rdx,[rip+0x94b40d]        # 0x14173b628 ; literal="The voice ranges from the "
0x00df021b: mov    rcx,rdi
0x00df021e: call   0x140070b90
0x00df0223: test   r13d,r13d
0x00df0226: je     0x140df0246
0x00df0228: sub    r13d,0x1
0x00df022c: je     0x140df023d
0x00df022e: cmp    r13d,0x1
0x00df0232: jne    0x140df0255
0x00df0234: lea    rdx,[rip+0x875ed5]        # 0x141666110 ; literal="high"
0x00df023b: jmp    0x140df024d
0x00df023d: lea    rdx,[rip+0x94b474]        # 0x14173b6b8 ; literal="middle"
0x00df0244: jmp    0x140df024d
0x00df0246: lea    rdx,[rip+0x875ecb]        # 0x141666118 ; literal="low"
0x00df024d: mov    rcx,rdi
0x00df0250: call   0x140070b90
0x00df0255: lea    rdx,[rip+0x94b3ec]        # 0x14173b648 ; literal=" register to the "
0x00df025c: mov    rcx,rdi
0x00df025f: call   0x140070b90
0x00df0264: test   ebx,ebx
0x00df0266: je     0x140df027f
0x00df0268: sub    ebx,0x1
0x00df026b: je     0x140df01ea
0x00df0271: cmp    ebx,0x1
0x00df0274: jne    0x140df028e
0x00df0276: lea    rdx,[rip+0x875e93]        # 0x141666110 ; literal="high"
0x00df027d: jmp    0x140df0286
0x00df027f: lea    rdx,[rip+0x875e92]        # 0x141666118 ; literal="low"
0x00df0286: mov    rcx,rdi
0x00df0289: call   0x140070b90
0x00df028e: lea    rdx,[rip+0x94b42b]        # 0x14173b6c0 ; literal=" register.  "
0x00df0295: mov    rcx,rdi
0x00df0298: call   0x140070b90
0x00df029d: jmp    0x140df0609
0x00df02a2: mov    rdx,rax
0x00df02a5: lea    rcx,[rip+0x171efcc]        # 0x14250f278
0x00df02ac: call   0x140070850
0x00df02b1: mov    rcx,QWORD PTR [rax]
0x00df02b4: add    rcx,0x248
0x00df02bb: call   0x140070480
0x00df02c0: mov    r15,rax
0x00df02c3: movsxd r14,DWORD PTR [rsp+0x60]
0x00df02c8: cmp    r13d,r14d
0x00df02cb: jne    0x140df0380
0x00df02d1: mov    rcx,rdi
0x00df02d4: cmp    r15d,0x4
0x00df02d8: lea    rdx,[rip+0x94b381]        # 0x14173b660 ; literal="The voice is confined to the "
0x00df02df: jge    0x140df02e8
0x00df02e1: lea    rdx,[rip+0x94b3b8]        # 0x14173b6a0 ; literal="The voice stays in the "
0x00df02e8: call   0x140070b90
0x00df02ed: movsxd rdx,DWORD PTR [rbx]
0x00df02f0: lea    rcx,[rip+0x171ef81]        # 0x14250f278
0x00df02f7: call   0x140070850
0x00df02fc: mov    rcx,QWORD PTR [rax]
0x00df02ff: add    rcx,0x248
0x00df0306: movsxd rdx,r13d
0x00df0309: call   0x140070850
0x00df030e: mov    rcx,QWORD PTR [rax]
0x00df0311: call   0x140decaa0
0x00df0316: cmp    eax,0xffffffff
0x00df0319: je     0x140df0334
0x00df031b: mov    rdx,rdi
0x00df031e: mov    ecx,eax
0x00df0320: call   0x140796510
0x00df0325: lea    rdx,[rip+0x8136c4]        # 0x1416039f0 ; literal=" "
0x00df032c: mov    rcx,rdi
0x00df032f: call   0x140070b90
0x00df0334: test   r13d,r13d
0x00df0337: jne    0x140df0345
0x00df0339: lea    rdx,[rip+0x875dd8]        # 0x141666118 ; literal="low"
0x00df0340: jmp    0x140df05ed
0x00df0345: cmp    r13d,0x1
0x00df0349: jne    0x140df035d
0x00df034b: cmp    r15d,0x3
0x00df034f: jl     0x140df035d
0x00df0351: lea    rdx,[rip+0x94b360]        # 0x14173b6b8 ; literal="middle"
0x00df0358: jmp    0x140df05ed
0x00df035d: lea    eax,[r15-0x1]
0x00df0361: cmp    r13d,eax
0x00df0364: jne    0x140df05e6
0x00df036a: cmp    r15d,0x4
0x00df036e: jl     0x140df05e6
0x00df0374: lea    rdx,[rip+0x94b3d5]        # 0x14173b750 ; literal="top"
0x00df037b: jmp    0x140df05ed
0x00df0380: movsxd rdx,DWORD PTR [rbx]
0x00df0383: lea    rcx,[rip+0x171eeee]        # 0x14250f278
0x00df038a: call   0x140070850
0x00df038f: mov    rcx,QWORD PTR [rax]
0x00df0392: add    rcx,0x248
0x00df0399: movsxd rdx,r13d
0x00df039c: call   0x140070850
0x00df03a1: mov    rcx,QWORD PTR [rax]
0x00df03a4: call   0x140decaa0
0x00df03a9: mov    esi,eax
0x00df03ab: movsxd rdx,DWORD PTR [rbx]
0x00df03ae: lea    rcx,[rip+0x171eec3]        # 0x14250f278
0x00df03b5: call   0x140070850
0x00df03ba: mov    rcx,QWORD PTR [rax]
0x00df03bd: add    rcx,0x248
0x00df03c4: mov    rdx,r14
0x00df03c7: call   0x140070850
0x00df03cc: mov    rcx,QWORD PTR [rax]
0x00df03cf: call   0x140decaa0
0x00df03d4: mov    r12d,eax
0x00df03d7: lea    ebx,[r15-0x1]
0x00df03db: test   r13d,r13d
0x00df03de: jne    0x140df042d
0x00df03e0: cmp    r14d,ebx
0x00df03e3: jne    0x140df042d
0x00df03e5: cmp    esi,0xffffffff
0x00df03e8: jne    0x140df03fa
0x00df03ea: cmp    eax,esi
0x00df03ec: jne    0x140df03fa
0x00df03ee: lea    rdx,[rip+0x94b20b]        # 0x14173b600 ; literal="The voice uses its entire range.  "
0x00df03f5: jmp    0x140df05fc
0x00df03fa: cmp    r14d,ebx
0x00df03fd: jne    0x140df042d
0x00df03ff: cmp    esi,r12d
0x00df0402: jne    0x140df04ef
0x00df0408: lea    rdx,[rip+0x81882d]        # 0x141608c3c ; literal="The "
0x00df040f: mov    rcx,rdi
0x00df0412: call   0x140070b90
0x00df0417: mov    rdx,rdi
0x00df041a: mov    ecx,esi
0x00df041c: call   0x140796510
0x00df0421: lea    rdx,[rip+0x94b330]        # 0x14173b758 ; literal=" voice uses its entire range.  "
0x00df0428: jmp    0x140df05fc
0x00df042d: cmp    esi,r12d
0x00df0430: jne    0x140df04ea
0x00df0436: lea    rdx,[rip+0x8187ff]        # 0x141608c3c ; literal="The "
0x00df043d: mov    rcx,rdi
0x00df0440: call   0x140070b90
0x00df0445: mov    rdx,rdi
0x00df0448: mov    ecx,esi
0x00df044a: call   0x140796510
0x00df044f: lea    rdx,[rip+0x94b322]        # 0x14173b778 ; literal=" voice ranges from the "
0x00df0456: mov    rcx,rdi
0x00df0459: call   0x140070b90
0x00df045e: test   r13d,r13d
0x00df0461: jne    0x140df046c
0x00df0463: lea    rdx,[rip+0x875cae]        # 0x141666118 ; literal="low"
0x00df046a: jmp    0x140df049e
0x00df046c: cmp    r13d,0x1
0x00df0470: jne    0x140df0481
0x00df0472: cmp    r15d,0x3
0x00df0476: jl     0x140df0481
0x00df0478: lea    rdx,[rip+0x94b239]        # 0x14173b6b8 ; literal="middle"
0x00df047f: jmp    0x140df049e
0x00df0481: lea    eax,[r15-0x1]
0x00df0485: cmp    r13d,eax
0x00df0488: jne    0x140df0497
0x00df048a: cmp    r15d,0x4
0x00df048e: lea    rdx,[rip+0x94b2bb]        # 0x14173b750 ; literal="top"
0x00df0495: jge    0x140df049e
0x00df0497: lea    rdx,[rip+0x875c72]        # 0x141666110 ; literal="high"
0x00df049e: mov    rcx,rdi
0x00df04a1: call   0x140070b90
0x00df04a6: lea    rdx,[rip+0x94b19b]        # 0x14173b648 ; literal=" register to the "
0x00df04ad: mov    rcx,rdi
0x00df04b0: call   0x140070b90
0x00df04b5: test   r14d,r14d
0x00df04b8: jne    0x140df04c6
0x00df04ba: lea    rdx,[rip+0x875c57]        # 0x141666118 ; literal="low"
0x00df04c1: jmp    0x140df05ed
0x00df04c6: cmp    r14d,0x1
0x00df04ca: jne    0x140df04de
0x00df04cc: cmp    r15d,0x3
0x00df04d0: jl     0x140df04de
0x00df04d2: lea    rdx,[rip+0x94b1df]        # 0x14173b6b8 ; literal="middle"
0x00df04d9: jmp    0x140df05ed
0x00df04de: lea    eax,[r15-0x1]
0x00df04e2: cmp    r14d,eax
0x00df04e5: jmp    0x140df0364
0x00df04ea: test   r13d,r13d
0x00df04ed: jne    0x140df0509
0x00df04ef: mov    r14d,ebx
0x00df04f2: cmp    DWORD PTR [rsp+0x60],ebx
0x00df04f6: jne    0x140df0509
0x00df04f8: lea    rdx,[rip+0x94b291]        # 0x14173b790 ; literal="The voice uses its entire range from the "
0x00df04ff: mov    rcx,rdi
0x00df0502: call   0x140070b90
0x00df0507: jmp    0x140df051b
0x00df0509: lea    rdx,[rip+0x94b118]        # 0x14173b628 ; literal="The voice ranges from the "
0x00df0510: mov    rcx,rdi
0x00df0513: call   0x140070b90
0x00df0518: mov    r14d,ebx
0x00df051b: cmp    esi,0xffffffff
0x00df051e: je     0x140df0539
0x00df0520: mov    rdx,rdi
0x00df0523: mov    ecx,esi
0x00df0525: call   0x140796510
0x00df052a: lea    rdx,[rip+0x8134bf]        # 0x1416039f0 ; literal=" "
0x00df0531: mov    rcx,rdi
0x00df0534: call   0x140070b90
0x00df0539: test   r13d,r13d
0x00df053c: jne    0x140df0547
0x00df053e: lea    rdx,[rip+0x875bd3]        # 0x141666118 ; literal="low"
0x00df0545: jmp    0x140df0575
0x00df0547: cmp    r13d,0x1
0x00df054b: jne    0x140df055c
0x00df054d: cmp    r15d,0x3
0x00df0551: jl     0x140df055c
0x00df0553: lea    rdx,[rip+0x94b15e]        # 0x14173b6b8 ; literal="middle"
0x00df055a: jmp    0x140df0575
0x00df055c: cmp    r13d,r14d
0x00df055f: jne    0x140df056e
0x00df0561: cmp    r15d,0x4
0x00df0565: lea    rdx,[rip+0x94b1e4]        # 0x14173b750 ; literal="top"
0x00df056c: jge    0x140df0575
0x00df056e: lea    rdx,[rip+0x875b9b]        # 0x141666110 ; literal="high"
0x00df0575: mov    rcx,rdi
0x00df0578: call   0x140070b90
0x00df057d: lea    rdx,[rip+0x94b0c4]        # 0x14173b648 ; literal=" register to the "
0x00df0584: mov    rcx,rdi
0x00df0587: call   0x140070b90
0x00df058c: cmp    r12d,0xffffffff
0x00df0590: je     0x140df05ac
0x00df0592: mov    rdx,rdi
0x00df0595: mov    ecx,r12d
0x00df0598: call   0x140796510
0x00df059d: lea    rdx,[rip+0x81344c]        # 0x1416039f0 ; literal=" "
0x00df05a4: mov    rcx,rdi
0x00df05a7: call   0x140070b90
0x00df05ac: mov    ecx,DWORD PTR [rsp+0x60]
0x00df05b0: test   ecx,ecx
0x00df05b2: jne    0x140df05bd
0x00df05b4: lea    rdx,[rip+0x875b5d]        # 0x141666118 ; literal="low"
0x00df05bb: jmp    0x140df05ed
0x00df05bd: cmp    ecx,0x1
0x00df05c0: jne    0x140df05d1
0x00df05c2: cmp    r15d,0x3
0x00df05c6: jl     0x140df05d1
0x00df05c8: lea    rdx,[rip+0x94b0e9]        # 0x14173b6b8 ; literal="middle"
0x00df05cf: jmp    0x140df05ed
0x00df05d1: lea    eax,[r15-0x1]
0x00df05d5: cmp    ecx,eax
0x00df05d7: jne    0x140df05e6
0x00df05d9: cmp    r15d,0x4
0x00df05dd: lea    rdx,[rip+0x94b16c]        # 0x14173b750 ; literal="top"
0x00df05e4: jge    0x140df05ed
0x00df05e6: lea    rdx,[rip+0x875b23]        # 0x141666110 ; literal="high"
0x00df05ed: mov    rcx,rdi
0x00df05f0: call   0x140070b90
0x00df05f5: lea    rdx,[rip+0x94b0c4]        # 0x14173b6c0 ; literal=" register.  "
0x00df05fc: mov    rcx,rdi
0x00df05ff: call   0x140070b90
0x00df0604: mov    r14d,DWORD PTR [rsp+0x64]
0x00df0609: lea    rcx,[rsp+0x40]
0x00df060e: call   0x140070430
0x00df0613: inc    r14d
0x00df0616: mov    DWORD PTR [rsp+0x64],r14d
0x00df061b: lea    r8,[rbp+0x30]
0x00df061f: lea    rdx,[rsp+0x35]
0x00df0624: lea    rcx,[rsp+0x40]
0x00df0629: call   0x140070450
0x00df062e: xor    edx,edx
0x00df0630: movzx  ecx,BYTE PTR [rax]
0x00df0633: call   0x140066de0
0x00df0638: test   al,al
0x00df063a: mov    rbx,QWORD PTR [rbp-0x78]
0x00df063e: jne    0x140def600
0x00df0644: mov    r12,QWORD PTR [rbp-0x38]
0x00df0648: xor    r13d,r13d
0x00df064b: mov    r15d,r13d
0x00df064e: mov    DWORD PTR [rbp-0x48],r13d
0x00df0652: mov    r14d,r13d
0x00df0655: mov    DWORD PTR [rsp+0x64],r13d
0x00df065a: mov    esi,0xffffffff
0x00df065f: mov    DWORD PTR [rsp+0x60],esi
0x00df0663: xor    eax,eax
0x00df0665: mov    r13d,esi
0x00df0668: mov    ebx,eax
0x00df066a: lea    rcx,[r12+0x88]
0x00df0672: lea    rdx,[rsp+0x58]
0x00df0677: call   0x140070870
0x00df067c: lea    rcx,[r12+0x88]
0x00df0684: lea    rdx,[rsp+0x78]
0x00df0689: call   0x140070860
0x00df068e: lea    r8,[rsp+0x78]
0x00df0693: lea    rdx,[rsp+0x35]
0x00df0698: lea    rcx,[rsp+0x58]
0x00df069d: call   0x140070450
0x00df06a2: xor    edx,edx
0x00df06a4: movzx  ecx,BYTE PTR [rax]
0x00df06a7: call   0x140066de0
0x00df06ac: test   al,al
0x00df06ae: je     0x140df0730
0x00df06b4: lea    rcx,[rsp+0x58]
0x00df06b9: call   0x140070440
0x00df06be: mov    rcx,QWORD PTR [rax]
0x00df06c1: lea    eax,[r15+0x1]
0x00df06c5: cmp    DWORD PTR [rcx],0x0
0x00df06c8: cmovne eax,r15d
0x00df06cc: mov    r15d,eax
0x00df06cf: lea    rcx,[rsp+0x58]
0x00df06d4: call   0x140070440
0x00df06d9: mov    rcx,QWORD PTR [rax]
0x00df06dc: cmp    DWORD PTR [rcx],0xa
0x00df06df: jne    0x140df06f5
0x00df06e1: inc    r14d
0x00df06e4: cmp    esi,0xffffffff
0x00df06e7: jne    0x140df06ed
0x00df06e9: mov    esi,ebx
0x00df06eb: jmp    0x140df06f5
0x00df06ed: cmp    r13d,0xffffffff
0x00df06f1: cmove  r13d,ebx
0x00df06f5: lea    rcx,[rsp+0x58]
0x00df06fa: call   0x140070430
0x00df06ff: inc    ebx
0x00df0701: lea    r8,[rsp+0x78]
0x00df0706: lea    rdx,[rsp+0x35]
0x00df070b: lea    rcx,[rsp+0x58]
0x00df0710: call   0x140070450
0x00df0715: xor    edx,edx
0x00df0717: movzx  ecx,BYTE PTR [rax]
0x00df071a: call   0x140066de0
0x00df071f: test   al,al
0x00df0721: jne    0x140df06b4
0x00df0723: mov    DWORD PTR [rsp+0x64],r14d
0x00df0728: mov    DWORD PTR [rsp+0x60],esi
0x00df072c: mov    DWORD PTR [rbp-0x48],r15d
0x00df0730: lea    rdx,[rip+0x828799]        # 0x141618ed0 ; literal="[B]"
0x00df0737: mov    rcx,rdi
0x00df073a: call   0x140070b90
0x00df073f: lea    rcx,[rbp+0x1b0]
0x00df0746: call   0x140070cc0
0x00df074b: nop
0x00df074c: lea    rcx,[r12+0x8]
0x00df0751: xor    r9d,r9d
0x00df0754: mov    r8b,0x1
0x00df0757: lea    rdx,[rbp+0x1b0]
0x00df075e: call   0x140aae180
0x00df0763: lea    rcx,[rbp+0x1b0]
0x00df076a: call   0x140546b30
0x00df076f: lea    rdx,[rbp+0x1b0]
0x00df0776: mov    rcx,rdi
0x00df0779: call   0x1400bb340
0x00df077e: nop
0x00df077f: lea    rcx,[rbp+0x1b0]
0x00df0786: call   0x140069460
0x00df078b: lea    rcx,[r12+0x88]
0x00df0793: call   0x140070480
0x00df0798: cmp    rax,0x1
0x00df079c: jne    0x140df07a7
0x00df079e: lea    rdx,[rip+0x94af2b]        # 0x14173b6d0 ; literal=" has a simple structure: "
0x00df07a5: jmp    0x140df07c8
0x00df07a7: lea    rcx,[r12+0x88]
0x00df07af: call   0x140070480
0x00df07b4: cmp    rax,0x2
0x00df07b8: lea    rdx,[rip+0x94af31]        # 0x14173b6f0 ; literal=" has the following structure: "
0x00df07bf: je     0x140df07c8
0x00df07c1: lea    rdx,[rip+0x94af48]        # 0x14173b710 ; literal=" has a well-defined multi-passage structure: "
0x00df07c8: mov    rcx,rdi
0x00df07cb: call   0x140070b90
0x00df07d0: xor    r15d,r15d
0x00df07d3: mov    DWORD PTR [rsp+0x3c],r15d
0x00df07d8: lea    rcx,[r12+0xd0]
0x00df07e0: call   0x140070480
0x00df07e5: mov    rsi,rax
0x00df07e8: mov    QWORD PTR [rsp+0x78],rax
0x00df07ed: lea    rdx,[rbp-0x70]
0x00df07f1: lea    rcx,[r12+0xd0]
0x00df07f9: call   0x140070870
0x00df07fe: lea    rdx,[rbp+0x50]
0x00df0802: lea    rcx,[r12+0xd0]
0x00df080a: call   0x140070860
0x00df080f: lea    r8,[rbp+0x50]
0x00df0813: lea    rdx,[rsp+0x35]
0x00df0818: lea    rcx,[rbp-0x70]
0x00df081c: call   0x140070450
0x00df0821: xor    edx,edx
0x00df0823: movzx  ecx,BYTE PTR [rax]
0x00df0826: call   0x140066de0
0x00df082b: test   al,al
0x00df082d: je     0x140df0fd8
0x00df0833: lea    rbx,[r12+0x88]
0x00df083b: mov    QWORD PTR [rbp-0x78],rbx
0x00df083f: nop
0x00df0840: lea    rcx,[rbp-0x70]
0x00df0844: call   0x140070440
0x00df0849: mov    rcx,QWORD PTR [rax]
0x00df084c: mov    r14d,DWORD PTR [rcx+0xc]
0x00df0850: mov    r12d,r15d
0x00df0853: lea    rcx,[rbp-0x70]
0x00df0857: call   0x140070440
0x00df085c: mov    rcx,QWORD PTR [rax]
0x00df085f: cmp    DWORD PTR [rcx+0xc],0x0
0x00df0863: jle    0x140df0d1a
0x00df0869: nop    DWORD PTR [rax+0x0]
0x00df0870: lea    rcx,[rbp-0x70]
0x00df0874: call   0x140070440
0x00df0879: mov    rcx,QWORD PTR [rax]
0x00df087c: movsxd rdx,DWORD PTR [r15+rcx*1]
0x00df0880: mov    rcx,rbx
0x00df0883: call   0x140070850
0x00df0888: mov    rbx,QWORD PTR [rax]
0x00df088b: xor    sil,sil
0x00df088e: cmp    DWORD PTR [rbx],0x0
0x00df0891: jne    0x140df097d
0x00df0897: cmp    DWORD PTR [rsp+0x3c],0x1
0x00df089c: jl     0x140df097d
0x00df08a2: mov    eax,DWORD PTR [rbx+0x10]
0x00df08a5: mov    rcx,rdi
0x00df08a8: cmp    eax,0x1
0x00df08ab: jne    0x140df08be
0x00df08ad: lea    rdx,[rip+0x94ae8c]        # 0x14173b740 ; literal="an additional"
0x00df08b4: call   0x140070b90
0x00df08b9: jmp    0x140df0a47
0x00df08be: lea    rdx,[rip+0x94af3b]        # 0x14173b800 ; literal="another "
0x00df08c5: cmp    DWORD PTR [rbx+0xc],eax
0x00df08c8: jne    0x140df0900
0x00df08ca: call   0x140070b90
0x00df08cf: lea    rcx,[rbp+0x190]
0x00df08d6: call   0x140070cc0
0x00df08db: nop
0x00df08dc: lea    rdx,[rbp+0x190]
0x00df08e3: mov    ecx,DWORD PTR [rbx+0xc]
0x00df08e6: call   0x140547840
0x00df08eb: lea    rdx,[rbp+0x190]
0x00df08f2: mov    rcx,rdi
0x00df08f5: call   0x1400bb340
0x00df08fa: nop
0x00df08fb: jmp    0x140df0a3b
0x00df0900: call   0x140070b90
0x00df0905: lea    rcx,[rbp+0x190]
0x00df090c: call   0x140070cc0
0x00df0911: nop
0x00df0912: lea    rdx,[rbp+0x190]
0x00df0919: mov    ecx,DWORD PTR [rbx+0xc]
0x00df091c: call   0x140547840
0x00df0921: lea    rdx,[rbp+0x190]
0x00df0928: mov    rcx,rdi
0x00df092b: call   0x1400bb340
0x00df0930: nop
0x00df0931: lea    rcx,[rbp+0x190]
0x00df0938: call   0x140069460
0x00df093d: lea    rdx,[rip+0x817ef0]        # 0x141608834 ; literal=" to "
0x00df0944: mov    rcx,rdi
0x00df0947: call   0x140070b90
0x00df094c: lea    rcx,[rbp+0x190]
0x00df0953: call   0x140070cc0
0x00df0958: nop
0x00df0959: lea    rdx,[rbp+0x190]
0x00df0960: mov    ecx,DWORD PTR [rbx+0x10]
0x00df0963: call   0x140547840
0x00df0968: lea    rdx,[rbp+0x190]
0x00df096f: mov    rcx,rdi
0x00df0972: call   0x1400bb340
0x00df0977: nop
0x00df0978: jmp    0x140df0a3b
0x00df097d: mov    eax,DWORD PTR [rbx+0x10]
0x00df0980: cmp    eax,0x1
0x00df0983: jne    0x140df099c
0x00df0985: lea    rdx,[rip+0x82e160]        # 0x14161eaec ; literal="a"
0x00df098c: mov    rcx,rdi
0x00df098f: call   0x140070b90
0x00df0994: mov    sil,0x1
0x00df0997: jmp    0x140df0a47
0x00df099c: lea    rcx,[rbp+0x190]
0x00df09a3: cmp    DWORD PTR [rbx+0xc],eax
0x00df09a6: jne    0x140df09cf
0x00df09a8: call   0x140070cc0
0x00df09ad: nop
0x00df09ae: lea    rdx,[rbp+0x190]
0x00df09b5: mov    ecx,DWORD PTR [rbx+0xc]
0x00df09b8: call   0x140547840
0x00df09bd: lea    rdx,[rbp+0x190]
0x00df09c4: mov    rcx,rdi
0x00df09c7: call   0x1400bb340
0x00df09cc: nop
0x00df09cd: jmp    0x140df0a3b
0x00df09cf: call   0x140070cc0
0x00df09d4: nop
0x00df09d5: lea    rdx,[rbp+0x190]
0x00df09dc: mov    ecx,DWORD PTR [rbx+0xc]
0x00df09df: call   0x140547840
0x00df09e4: lea    rdx,[rbp+0x190]
0x00df09eb: mov    rcx,rdi
0x00df09ee: call   0x1400bb340
0x00df09f3: nop
0x00df09f4: lea    rcx,[rbp+0x190]
0x00df09fb: call   0x140069460
0x00df0a00: lea    rdx,[rip+0x817e2d]        # 0x141608834 ; literal=" to "
0x00df0a07: mov    rcx,rdi
0x00df0a0a: call   0x140070b90
0x00df0a0f: lea    rcx,[rbp+0x190]
0x00df0a16: call   0x140070cc0
0x00df0a1b: nop
0x00df0a1c: lea    rdx,[rbp+0x190]
0x00df0a23: mov    ecx,DWORD PTR [rbx+0x10]
0x00df0a26: call   0x140547840
0x00df0a2b: lea    rdx,[rbp+0x190]
0x00df0a32: mov    rcx,rdi
0x00df0a35: call   0x1400bb340
0x00df0a3a: nop
0x00df0a3b: lea    rcx,[rbp+0x190]
0x00df0a42: call   0x140069460
0x00df0a47: mov    eax,DWORD PTR [rbx+0xd8]
0x00df0a4d: cmp    eax,0xffffffff
0x00df0a50: je     0x140df0a77
0x00df0a52: cmp    eax,0x14
0x00df0a55: jl     0x140df0a60
0x00df0a57: lea    rdx,[rip+0x94adb2]        # 0x14173b810 ; literal=" lengthy"
0x00df0a5e: jmp    0x140df0a6c
0x00df0a60: cmp    eax,0x4
0x00df0a63: jg     0x140df0a77
0x00df0a65: lea    rdx,[rip+0x94adb0]        # 0x14173b81c ; literal=" brief"
0x00df0a6c: mov    rcx,rdi
0x00df0a6f: call   0x140070b90
0x00df0a74: xor    sil,sil
0x00df0a77: movsxd rax,DWORD PTR [rbx]
0x00df0a7a: cmp    eax,0xb
0x00df0a7d: ja     0x140df0cca
0x00df0a83: lea    rdx,[rip+0xffffffffff20f576]        # 0x140000000
0x00df0a8a: mov    ecx,DWORD PTR [rdx+rax*4+0xdf4e40]
0x00df0a91: add    rcx,rdx
0x00df0a94: jmp    rcx
0x00df0a96: cmp    DWORD PTR [rbp-0x48],0x1
0x00df0a9a: jne    0x140df0ab1
0x00df0a9c: cmp    DWORD PTR [rbx+0x10],0x2
0x00df0aa0: jl     0x140df0ab1
0x00df0aa2: lea    rdx,[rip+0x94ad7f]        # 0x14173b828 ; literal=" unrelated"
0x00df0aa9: mov    rcx,rdi
0x00df0aac: call   0x140070b90
0x00df0ab1: lea    rdx,[rip+0x94ad08]        # 0x14173b7c0 ; literal=" passage"
0x00df0ab8: mov    rcx,rdi
0x00df0abb: call   0x140070b90
0x00df0ac0: cmp    DWORD PTR [rbx+0x10],0x2
0x00df0ac4: jl     0x140df0ad5
0x00df0ac6: lea    rdx,[rip+0x813a23]        # 0x1416044f0 ; literal="s"
0x00df0acd: mov    rcx,rdi
0x00df0ad0: call   0x140070b90
0x00df0ad5: inc    DWORD PTR [rsp+0x3c]
0x00df0ad9: jmp    0x140df0cca
0x00df0ade: test   sil,sil
0x00df0ae1: je     0x140df0af2
0x00df0ae3: lea    rdx,[rip+0x87486a]        # 0x141665354 ; literal="n"
0x00df0aea: mov    rcx,rdi
0x00df0aed: call   0x140070b90
0x00df0af2: lea    rdx,[rip+0x94acd7]        # 0x14173b7d0 ; literal=" introduction"
0x00df0af9: jmp    0x140df0cc2
0x00df0afe: test   sil,sil
0x00df0b01: je     0x140df0b12
0x00df0b03: lea    rdx,[rip+0x87484a]        # 0x141665354 ; literal="n"
0x00df0b0a: mov    rcx,rdi
0x00df0b0d: call   0x140070b90
0x00df0b12: lea    rdx,[rip+0x94acc7]        # 0x14173b7e0 ; literal=" exposition"
0x00df0b19: mov    rcx,rdi
0x00df0b1c: call   0x140070b90
0x00df0b21: mov    eax,DWORD PTR [rbx+0x4]
0x00df0b24: cmp    eax,DWORD PTR [rsp+0x60]
0x00df0b28: jne    0x140df0b4c
0x00df0b2a: mov    rcx,rdi
0x00df0b2d: cmp    DWORD PTR [rsp+0x64],0x1
0x00df0b32: jne    0x140df0b40
0x00df0b34: lea    rdx,[rip+0x8136f5]        # 0x141604230 ; literal=" of the theme"
0x00df0b3b: jmp    0x140df0cc5
0x00df0b40: lea    rdx,[rip+0x8136d1]        # 0x141604218 ; literal=" of the first theme"
0x00df0b47: jmp    0x140df0cc5
0x00df0b4c: mov    rcx,rdi
0x00df0b4f: cmp    eax,r13d
0x00df0b52: jne    0x140df0b60
0x00df0b54: lea    rdx,[rip+0x813705]        # 0x141604260 ; literal=" of the second theme"
0x00df0b5b: jmp    0x140df0cc5
0x00df0b60: lea    rdx,[rip+0x8136d9]        # 0x141604240 ; literal=" of the previous passage"
0x00df0b67: jmp    0x140df0cc5
0x00df0b6c: lea    rdx,[rip+0x94ac7d]        # 0x14173b7f0 ; literal=" recapitulation"
0x00df0b73: mov    rcx,rdi
0x00df0b76: call   0x140070b90
0x00df0b7b: mov    eax,DWORD PTR [rbx+0x4]
0x00df0b7e: cmp    eax,DWORD PTR [rsp+0x60]
0x00df0b82: jne    0x140df0b4c
0x00df0b84: mov    rcx,rdi
0x00df0b87: cmp    DWORD PTR [rsp+0x64],0x1
0x00df0b8c: jne    0x140df0b40
0x00df0b8e: lea    rdx,[rip+0x81369b]        # 0x141604230 ; literal=" of the theme"
0x00df0b95: jmp    0x140df0cc5
0x00df0b9a: lea    rdx,[rip+0x94acbf]        # 0x14173b860 ; literal=" synthesis"
0x00df0ba1: mov    rcx,rdi
0x00df0ba4: call   0x140070b90
0x00df0ba9: mov    eax,DWORD PTR [rbx+0x4]
0x00df0bac: cmp    eax,DWORD PTR [rsp+0x60]
0x00df0bb0: jne    0x140df0bc3
0x00df0bb2: cmp    eax,r13d
0x00df0bb5: jne    0x140df0bc3
0x00df0bb7: lea    rdx,[rip+0x8136fa]        # 0x1416042b8 ; literal=" of the two themes"
0x00df0bbe: jmp    0x140df0cc2
0x00df0bc3: lea    rdx,[rip+0x8136d6]        # 0x1416042a0 ; literal=" of previous passages"
0x00df0bca: jmp    0x140df0cc2
0x00df0bcf: lea    rdx,[rip+0x94ac96]        # 0x14173b86c ; literal=" verse"
0x00df0bd6: mov    rcx,rdi
0x00df0bd9: call   0x140070b90
0x00df0bde: cmp    DWORD PTR [rbx+0x10],0x2
0x00df0be2: jl     0x140df0cca
0x00df0be8: lea    rdx,[rip+0x813901]        # 0x1416044f0 ; literal="s"
0x00df0bef: jmp    0x140df0cc2
0x00df0bf4: lea    rdx,[rip+0x94ac7d]        # 0x14173b878 ; literal=" chorus"
0x00df0bfb: jmp    0x140df0cc2
0x00df0c00: lea    rdx,[rip+0x94ac79]        # 0x14173b880 ; literal=" finale"
0x00df0c07: jmp    0x140df0cc2
0x00df0c0c: lea    rdx,[rip+0x94ac21]        # 0x14173b834 ; literal=" coda"
0x00df0c13: jmp    0x140df0cc2
0x00df0c18: lea    rdx,[rip+0x94ac21]        # 0x14173b840 ; literal=" bridge-passage"
0x00df0c1f: jmp    0x140df0bd6
0x00df0c21: cmp    r13d,0xffffffff
0x00df0c25: je     0x140df0c76
0x00df0c27: lea    rcx,[rbp-0x70]
0x00df0c2b: call   0x140070440
0x00df0c30: mov    rcx,QWORD PTR [rax]
0x00df0c33: mov    eax,DWORD PTR [rsp+0x60]
0x00df0c37: cmp    DWORD PTR [r15+rcx*1],eax
0x00df0c3b: jne    0x140df0c55
0x00df0c3d: lea    rdx,[rip+0x94ac0c]        # 0x14173b850 ; literal=" first"
0x00df0c44: mov    rcx,rdi
0x00df0c47: call   0x140070b90
0x00df0c4c: lea    rdx,[rip+0x94ac65]        # 0x14173b8b8 ; literal=" theme"
0x00df0c53: jmp    0x140df0bd6
0x00df0c55: lea    rcx,[rbp-0x70]
0x00df0c59: call   0x140070440
0x00df0c5e: mov    rcx,QWORD PTR [rax]
0x00df0c61: cmp    DWORD PTR [r15+rcx*1],r13d
0x00df0c65: jne    0x140df0c76
0x00df0c67: lea    rdx,[rip+0x94abea]        # 0x14173b858 ; literal=" second"
0x00df0c6e: mov    rcx,rdi
0x00df0c71: call   0x140070b90
0x00df0c76: lea    rdx,[rip+0x94ac3b]        # 0x14173b8b8 ; literal=" theme"
0x00df0c7d: jmp    0x140df0bd6
0x00df0c82: lea    rdx,[rip+0x94ac37]        # 0x14173b8c0 ; literal=" series of variations"
0x00df0c89: mov    rcx,rdi
0x00df0c8c: call   0x140070b90
0x00df0c91: mov    eax,DWORD PTR [rbx+0x4]
0x00df0c94: cmp    eax,DWORD PTR [rsp+0x60]
0x00df0c98: jne    0x140df0cb6
0x00df0c9a: mov    rcx,rdi
0x00df0c9d: cmp    DWORD PTR [rsp+0x64],0x1
0x00df0ca2: jne    0x140df0cad
0x00df0ca4: lea    rdx,[rip+0x81368d]        # 0x141604338 ; literal=" on the theme"
0x00df0cab: jmp    0x140df0cc5
0x00df0cad: lea    rdx,[rip+0x8136c4]        # 0x141604378 ; literal=" on the first theme"
0x00df0cb4: jmp    0x140df0cc5
0x00df0cb6: cmp    eax,r13d
0x00df0cb9: jne    0x140df0cca
0x00df0cbb: lea    rdx,[rip+0x81369e]        # 0x141604360 ; literal=" on the second theme"
0x00df0cc2: mov    rcx,rdi
0x00df0cc5: call   0x140070b90
0x00df0cca: cmp    r14d,0x3
0x00df0cce: jl     0x140df0cd9
0x00df0cd0: lea    rdx,[rip+0x8136bd]        # 0x141604394 ; literal=", "
0x00df0cd7: jmp    0x140df0ce6
0x00df0cd9: cmp    r14d,0x2
0x00df0cdd: jne    0x140df0cee
0x00df0cdf: lea    rdx,[rip+0x8136a6]        # 0x14160438c ; literal=" and "
0x00df0ce6: mov    rcx,rdi
0x00df0ce9: call   0x140070b90
0x00df0cee: dec    r14d
0x00df0cf1: inc    r12d
0x00df0cf4: add    r15,0x4
0x00df0cf8: lea    rcx,[rbp-0x70]
0x00df0cfc: call   0x140070440
0x00df0d01: mov    rcx,QWORD PTR [rax]
0x00df0d04: cmp    r12d,DWORD PTR [rcx+0xc]
0x00df0d08: mov    rbx,QWORD PTR [rbp-0x78]
0x00df0d0c: jl     0x140df0870
0x00df0d12: mov    rsi,QWORD PTR [rsp+0x78]
0x00df0d17: xor    r15d,r15d
0x00df0d1a: lea    rcx,[rbp-0x70]
0x00df0d1e: call   0x140070440
0x00df0d23: mov    rcx,QWORD PTR [rax]
0x00df0d26: cmp    DWORD PTR [rcx+0x14],0x2
0x00df0d2a: jl     0x140df0f7a
0x00df0d30: lea    rdx,[rip+0x812cb9]        # 0x1416039f0 ; literal=" "
0x00df0d37: mov    rcx,rdi
0x00df0d3a: call   0x140070b90
0x00df0d3f: lea    rcx,[rbp-0x70]
0x00df0d43: call   0x140070440
0x00df0d48: mov    rcx,QWORD PTR [rax]
0x00df0d4b: cmp    DWORD PTR [rcx+0x10],0x1
0x00df0d4f: jne    0x140df0d72
0x00df0d51: lea    rcx,[rbp-0x70]
0x00df0d55: call   0x140070440
0x00df0d5a: mov    rcx,QWORD PTR [rax]
0x00df0d5d: cmp    DWORD PTR [rcx+0x14],0x2
0x00df0d61: jne    0x140df0d72
0x00df0d63: lea    rdx,[rip+0x94ab6e]        # 0x14173b8d8 ; literal="possibly "
0x00df0d6a: mov    rcx,rdi
0x00df0d6d: call   0x140070b90
0x00df0d72: lea    rcx,[rbp-0x70]
0x00df0d76: call   0x140070440
0x00df0d7b: mov    rcx,QWORD PTR [rax]
0x00df0d7e: cmp    DWORD PTR [rcx+0xc],0x2
0x00df0d82: mov    rcx,rdi
0x00df0d85: lea    rdx,[rip+0x94ab5c]        # 0x14173b8e8 ; literal="all repeated"
0x00df0d8c: jge    0x140df0d95
0x00df0d8e: lea    rdx,[rip+0x94aaf3]        # 0x14173b888 ; literal="repeated"
0x00df0d95: call   0x140070b90
0x00df0d9a: lea    rcx,[rbp-0x70]
0x00df0d9e: call   0x140070440
0x00df0da3: mov    rcx,QWORD PTR [rax]
0x00df0da6: cmp    DWORD PTR [rcx+0x10],0x1
0x00df0daa: jne    0x140df0e22
0x00df0dac: lea    rcx,[rbp-0x70]
0x00df0db0: call   0x140070440
0x00df0db5: mov    rcx,QWORD PTR [rax]
0x00df0db8: cmp    DWORD PTR [rcx+0x14],0x3
0x00df0dbc: jl     0x140df0e22
0x00df0dbe: lea    rdx,[rip+0x94aad3]        # 0x14173b898 ; literal=" up to "
0x00df0dc5: mov    rcx,rdi
0x00df0dc8: call   0x140070b90
0x00df0dcd: lea    rcx,[rbp+0x190]
0x00df0dd4: call   0x140070cc0
0x00df0dd9: nop
0x00df0dda: lea    rcx,[rbp-0x70]
0x00df0dde: call   0x140070440
0x00df0de3: mov    rcx,QWORD PTR [rax]
0x00df0de6: mov    ecx,DWORD PTR [rcx+0x14]
0x00df0de9: dec    ecx
0x00df0deb: lea    rdx,[rbp+0x190]
0x00df0df2: call   0x140547840
0x00df0df7: lea    rdx,[rbp+0x190]
0x00df0dfe: mov    rcx,rdi
0x00df0e01: call   0x1400bb340
0x00df0e06: lea    rdx,[rip+0x94aa93]        # 0x14173b8a0 ; literal=" times"
0x00df0e0d: mov    rcx,rdi
0x00df0e10: call   0x140070b90
0x00df0e15: nop
0x00df0e16: lea    rcx,[rbp+0x190]
0x00df0e1d: call   0x140069460
0x00df0e22: lea    rcx,[rbp-0x70]
0x00df0e26: call   0x140070440
0x00df0e2b: mov    rbx,QWORD PTR [rax]
0x00df0e2e: lea    rcx,[rbp-0x70]
0x00df0e32: call   0x140070440
0x00df0e37: mov    rcx,QWORD PTR [rax]
0x00df0e3a: mov    eax,DWORD PTR [rbx+0x14]
0x00df0e3d: cmp    DWORD PTR [rcx+0x10],eax
0x00df0e40: jne    0x140df0eab
0x00df0e42: lea    rdx,[rip+0x812ba7]        # 0x1416039f0 ; literal=" "
0x00df0e49: mov    rcx,rdi
0x00df0e4c: call   0x140070b90
0x00df0e51: lea    rcx,[rbp+0x190]
0x00df0e58: call   0x140070cc0
0x00df0e5d: nop
0x00df0e5e: lea    rcx,[rbp-0x70]
0x00df0e62: call   0x140070440
0x00df0e67: mov    rcx,QWORD PTR [rax]
0x00df0e6a: mov    ecx,DWORD PTR [rcx+0x14]
0x00df0e6d: dec    ecx
0x00df0e6f: lea    rdx,[rbp+0x190]
0x00df0e76: call   0x140547840
0x00df0e7b: lea    rdx,[rbp+0x190]
0x00df0e82: mov    rcx,rdi
0x00df0e85: call   0x1400bb340
0x00df0e8a: lea    rdx,[rip+0x94aa0f]        # 0x14173b8a0 ; literal=" times"
0x00df0e91: mov    rcx,rdi
0x00df0e94: call   0x140070b90
0x00df0e99: nop
0x00df0e9a: lea    rcx,[rbp+0x190]
0x00df0ea1: call   0x140069460
0x00df0ea6: jmp    0x140df0f7a
0x00df0eab: lea    rcx,[rbp-0x70]
0x00df0eaf: call   0x140070440
0x00df0eb4: mov    rcx,QWORD PTR [rax]
0x00df0eb7: cmp    DWORD PTR [rcx+0x10],0x2
0x00df0ebb: jl     0x140df0f7a
0x00df0ec1: lea    rdx,[rip+0x812b28]        # 0x1416039f0 ; literal=" "
0x00df0ec8: mov    rcx,rdi
0x00df0ecb: call   0x140070b90
0x00df0ed0: lea    rcx,[rbp+0x190]
0x00df0ed7: call   0x140070cc0
0x00df0edc: nop
0x00df0edd: lea    rcx,[rbp-0x70]
0x00df0ee1: call   0x140070440
0x00df0ee6: mov    rcx,QWORD PTR [rax]
0x00df0ee9: mov    ecx,DWORD PTR [rcx+0x10]
0x00df0eec: dec    ecx
0x00df0eee: lea    rdx,[rbp+0x190]
0x00df0ef5: call   0x140547840
0x00df0efa: lea    rdx,[rbp+0x190]
0x00df0f01: mov    rcx,rdi
0x00df0f04: call   0x1400bb340
0x00df0f09: nop
0x00df0f0a: lea    rcx,[rbp+0x190]
0x00df0f11: call   0x140069460
0x00df0f16: lea    rdx,[rip+0x817917]        # 0x141608834 ; literal=" to "
0x00df0f1d: mov    rcx,rdi
0x00df0f20: call   0x140070b90
0x00df0f25: lea    rcx,[rbp+0x190]
0x00df0f2c: call   0x140070cc0
0x00df0f31: nop
0x00df0f32: lea    rcx,[rbp-0x70]
0x00df0f36: call   0x140070440
0x00df0f3b: mov    rcx,QWORD PTR [rax]
0x00df0f3e: mov    ecx,DWORD PTR [rcx+0x14]
0x00df0f41: dec    ecx
0x00df0f43: lea    rdx,[rbp+0x190]
0x00df0f4a: call   0x140547840
0x00df0f4f: lea    rdx,[rbp+0x190]
0x00df0f56: mov    rcx,rdi
0x00df0f59: call   0x1400bb340
0x00df0f5e: nop
0x00df0f5f: lea    rcx,[rbp+0x190]
0x00df0f66: call   0x140069460
0x00df0f6b: lea    rdx,[rip+0x94a92e]        # 0x14173b8a0 ; literal=" times"
0x00df0f72: mov    rcx,rdi
0x00df0f75: call   0x140070b90
0x00df0f7a: cmp    esi,0x3
0x00df0f7d: jl     0x140df0f88
0x00df0f7f: lea    rdx,[rip+0x81340e]        # 0x141604394 ; literal=", "
0x00df0f86: jmp    0x140df0f94
0x00df0f88: cmp    esi,0x2
0x00df0f8b: jne    0x140df0f9c
0x00df0f8d: lea    rdx,[rip+0x8133f8]        # 0x14160438c ; literal=" and "
0x00df0f94: mov    rcx,rdi
0x00df0f97: call   0x140070b90
0x00df0f9c: dec    esi
0x00df0f9e: mov    QWORD PTR [rsp+0x78],rsi
0x00df0fa3: lea    rcx,[rbp-0x70]
0x00df0fa7: call   0x140070430
0x00df0fac: lea    r8,[rbp+0x50]
0x00df0fb0: lea    rdx,[rsp+0x35]
0x00df0fb5: lea    rcx,[rbp-0x70]
0x00df0fb9: call   0x140070450
0x00df0fbe: xor    edx,edx
0x00df0fc0: movzx  ecx,BYTE PTR [rax]
0x00df0fc3: call   0x140066de0
0x00df0fc8: test   al,al
0x00df0fca: mov    rbx,QWORD PTR [rbp-0x78]
0x00df0fce: jne    0x140df0840
0x00df0fd4: mov    r12,QWORD PTR [rbp-0x38]
0x00df0fd8: lea    rdx,[rip+0x8285b9]        # 0x141619598 ; literal=".  "
0x00df0fdf: mov    rcx,rdi
0x00df0fe2: call   0x140070b90
0x00df0fe7: mov    bl,0x1
0x00df0fe9: mov    BYTE PTR [rsp+0x33],bl
0x00df0fed: movzx  esi,bl
0x00df0ff0: mov    BYTE PTR [rsp+0x31],bl
0x00df0ff4: xorps  xmm0,xmm0
0x00df0ff7: movups XMMWORD PTR [rbp+0x210],xmm0
0x00df0ffe: movups XMMWORD PTR [rbp+0x220],xmm0
0x00df1005: movups XMMWORD PTR [rbp+0x230],xmm0
0x00df100c: xorps  xmm1,xmm1
0x00df100f: movups XMMWORD PTR [rbp+0x240],xmm1
0x00df1016: movups XMMWORD PTR [rbp+0x250],xmm1
0x00df101d: movups XMMWORD PTR [rbp+0x260],xmm1
0x00df1024: lea    rcx,[r12+0x88]
0x00df102c: lea    rdx,[rbp-0x30]
0x00df1030: call   0x140070870
0x00df1035: lea    rcx,[r12+0x88]
0x00df103d: lea    rdx,[rbp-0x78]
0x00df1041: call   0x140070860
0x00df1046: lea    r8,[rbp-0x78]
0x00df104a: lea    rdx,[rsp+0x35]
0x00df104f: lea    rcx,[rbp-0x30]
0x00df1053: call   0x140070450
0x00df1058: xor    edx,edx
0x00df105a: movzx  ecx,BYTE PTR [rax]
0x00df105d: call   0x140066de0
0x00df1062: test   al,al
0x00df1064: je     0x140df10f1
0x00df106a: nop    WORD PTR [rax+rax*1+0x0]
0x00df1070: lea    rcx,[rbp-0x30]
0x00df1074: call   0x140070440
0x00df1079: mov    rcx,QWORD PTR [rax]
0x00df107c: movsxd rax,DWORD PTR [rcx]
0x00df107f: inc    DWORD PTR [rbp+rax*4+0x210]
0x00df1086: lea    rcx,[rbp-0x30]
0x00df108a: call   0x140070440
0x00df108f: mov    rcx,QWORD PTR [rax]
0x00df1092: mov    edx,r15d
0x00df1095: movzx  eax,bl
0x00df1098: cmp    DWORD PTR [rcx+0x1c],0xffffffff
0x00df109c: cmove  edx,eax
0x00df109f: movzx  ebx,dl
0x00df10a2: lea    rcx,[rbp-0x30]
0x00df10a6: call   0x140070440
0x00df10ab: mov    rcx,QWORD PTR [rax]
0x00df10ae: mov    edx,r15d
0x00df10b1: movzx  eax,sil
0x00df10b5: cmp    DWORD PTR [rcx+0x24],0xffffffff
0x00df10b9: cmove  edx,eax
0x00df10bc: movzx  esi,dl
0x00df10bf: lea    rcx,[rbp-0x30]
0x00df10c3: call   0x140070430
0x00df10c8: lea    r8,[rbp-0x78]
0x00df10cc: lea    rdx,[rsp+0x35]
0x00df10d1: lea    rcx,[rbp-0x30]
0x00df10d5: call   0x140070450
0x00df10da: xor    edx,edx
0x00df10dc: movzx  ecx,BYTE PTR [rax]
0x00df10df: call   0x140066de0
0x00df10e4: test   al,al
0x00df10e6: jne    0x140df1070
0x00df10e8: mov    BYTE PTR [rsp+0x33],bl
0x00df10ec: mov    BYTE PTR [rsp+0x31],sil
0x00df10f1: lea    rcx,[r12+0x88]
0x00df10f9: lea    rdx,[rbp-0x18]
0x00df10fd: call   0x140070870
0x00df1102: mov    rcx,QWORD PTR [rax]
0x00df1105: lea    rax,[r12+0xa0]
0x00df110d: mov    QWORD PTR [rbp+0x8],rax
0x00df1111: movzx  ebx,BYTE PTR [rsp+0x31]
0x00df1116: mov    r8d,0xff
0x00df111c: movsxd r13,DWORD PTR [rbp-0x80]
0x00df1120: mov    QWORD PTR [rbp-0x30],rcx
0x00df1124: cmp    rcx,QWORD PTR [rbp-0x78]
0x00df1128: jne    0x140df112e
0x00df112a: xor    dl,dl
0x00df112c: jmp    0x140df1137
0x00df112e: mov    edx,0x1
0x00df1133: cmovb  edx,r8d
0x00df1137: test   dl,dl
0x00df1139: jns    0x140df33a4
0x00df113f: lea    rcx,[rbp-0x30]
0x00df1143: call   0x140070440
0x00df1148: mov    r12,QWORD PTR [rax]
0x00df114b: mov    QWORD PTR [rbp-0x50],r12
0x00df114f: mov    r14d,0xffffffff
0x00df1155: mov    DWORD PTR [rsp+0x50],r14d
0x00df115a: mov    r15d,r14d
0x00df115d: mov    DWORD PTR [rbp-0x48],r14d
0x00df1161: lea    rdx,[rbp-0x68]
0x00df1165: lea    rcx,[r12+0x48]
0x00df116a: call   0x140070870
0x00df116f: lea    rdx,[rbp+0x58]
0x00df1173: lea    rcx,[r12+0x48]
0x00df1178: call   0x140070860
0x00df117d: lea    rdx,[rsp+0x78]
0x00df1182: lea    rcx,[r12+0x60]
0x00df1187: call   0x140070870
0x00df118c: lea    rdx,[rbp+0xa0]
0x00df1193: lea    rcx,[r12+0x60]
0x00df1198: call   0x140070860
0x00df119d: lea    r8,[rbp+0x58]
0x00df11a1: lea    rdx,[rsp+0x35]
0x00df11a6: lea    rcx,[rbp-0x68]
0x00df11aa: call   0x140070450
0x00df11af: xor    edx,edx
0x00df11b1: movzx  ecx,BYTE PTR [rax]
0x00df11b4: call   0x140066de0
0x00df11b9: test   al,al
0x00df11bb: je     0x140df1248
0x00df11c1: movsxd rbx,DWORD PTR [rbp+0x28]
0x00df11c5: lea    rcx,[rbp-0x68]
0x00df11c9: call   0x140070440
0x00df11ce: cmp    DWORD PTR [rax],0x0
0x00df11d1: jne    0x140df11e6
0x00df11d3: cmp    r13,0xffffffffffffffff
0x00df11d7: jne    0x140df11e6
0x00df11d9: lea    rcx,[rsp+0x78]
0x00df11de: call   0x140070440
0x00df11e3: mov    r14d,DWORD PTR [rax]
0x00df11e6: lea    rcx,[rbp-0x68]
0x00df11ea: call   0x140070440
0x00df11ef: cmp    DWORD PTR [rax],0x1
0x00df11f2: jne    0x140df1207
0x00df11f4: cmp    rbx,0xffffffffffffffff
0x00df11f8: jne    0x140df1207
0x00df11fa: lea    rcx,[rsp+0x78]
0x00df11ff: call   0x140070440
0x00df1204: mov    r15d,DWORD PTR [rax]
0x00df1207: lea    rcx,[rbp-0x68]
0x00df120b: call   0x140070980
0x00df1210: lea    rcx,[rsp+0x78]
0x00df1215: call   0x140070980
0x00df121a: lea    r8,[rbp+0x58]
0x00df121e: lea    rdx,[rsp+0x35]
0x00df1223: lea    rcx,[rbp-0x68]
0x00df1227: call   0x140070450
0x00df122c: xor    edx,edx
0x00df122e: movzx  ecx,BYTE PTR [rax]
0x00df1231: call   0x140066de0
0x00df1236: test   al,al
0x00df1238: jne    0x140df11c5
0x00df123a: mov    DWORD PTR [rbp-0x48],r15d
0x00df123e: mov    DWORD PTR [rsp+0x50],r14d
0x00df1243: movzx  ebx,BYTE PTR [rsp+0x31]
0x00df1248: lea    rcx,[r12+0x30]
0x00df124d: call   0x1400709a0
0x00df1252: mov    r13,rax
0x00df1255: mov    QWORD PTR [rbp-0x40],rax
0x00df1259: lea    rdx,[rsp+0x68]
0x00df125e: lea    rcx,[r12+0x78]
0x00df1263: call   0x140070870
0x00df1268: lea    rdx,[rbp+0x38]
0x00df126c: lea    rcx,[r12+0x78]
0x00df1271: call   0x140070860
0x00df1276: lea    rdx,[rbp-0x8]
0x00df127a: lea    rcx,[r12+0x90]
0x00df1282: call   0x140070870
0x00df1287: lea    rdx,[rbp+0xa8]
0x00df128e: lea    rcx,[r12+0x90]
0x00df1296: call   0x140070860
0x00df129b: lea    r8,[rbp+0x38]
0x00df129f: lea    rdx,[rsp+0x49]
0x00df12a4: lea    rcx,[rsp+0x68]
0x00df12a9: call   0x140070450
0x00df12ae: xor    edx,edx
0x00df12b0: movzx  ecx,BYTE PTR [rax]
0x00df12b3: call   0x140066de0
0x00df12b8: test   al,al
0x00df12ba: je     0x140df1310
0x00df12bc: nop    DWORD PTR [rax+0x0]
0x00df12c0: lea    rcx,[rsp+0x68]
0x00df12c5: call   0x140070440
0x00df12ca: lea    esi,[r13-0x1]
0x00df12ce: cmp    DWORD PTR [rax],0xffffffff
0x00df12d1: cmovne esi,r13d
0x00df12d5: lea    rcx,[rsp+0x68]
0x00df12da: call   0x140070980
0x00df12df: lea    rcx,[rbp-0x8]
0x00df12e3: call   0x140070980
0x00df12e8: lea    r8,[rbp+0x38]
0x00df12ec: lea    rdx,[rsp+0x49]
0x00df12f1: lea    rcx,[rsp+0x68]
0x00df12f6: call   0x140070450
0x00df12fb: mov    r13d,esi
0x00df12fe: xor    edx,edx
0x00df1300: movzx  ecx,BYTE PTR [rax]
0x00df1303: call   0x140066de0
0x00df1308: test   al,al
0x00df130a: jne    0x140df12c0
0x00df130c: mov    QWORD PTR [rbp-0x40],r13
0x00df1310: movzx  esi,BYTE PTR [rsp+0x34]
0x00df1315: test   sil,sil
0x00df1318: je     0x140df13a7
0x00df131e: cmp    BYTE PTR [rbp-0x60],0x0
0x00df1322: jne    0x140df1329
0x00df1324: test   r13d,r13d
0x00df1327: jg     0x140df13a7
0x00df1329: cmp    r14d,0xffffffff
0x00df132d: jne    0x140df13a7
0x00df132f: cmp    r15d,r14d
0x00df1332: jne    0x140df13a7
0x00df1334: cmp    DWORD PTR [r12+0x18],r14d
0x00df1339: jne    0x140df13a7
0x00df133b: cmp    DWORD PTR [r12+0x14],r14d
0x00df1340: jne    0x140df13a7
0x00df1342: cmp    DWORD PTR [r12+0xa8],r14d
0x00df134a: jne    0x140df13a7
0x00df134c: cmp    DWORD PTR [r12+0xac],r14d
0x00df1354: jne    0x140df13a7
0x00df1356: cmp    DWORD PTR [r12+0xb0],r14d
0x00df135e: jne    0x140df13a7
0x00df1360: cmp    DWORD PTR [r12+0x1c],r14d
0x00df1365: jne    0x140df13a7
0x00df1367: cmp    BYTE PTR [rsp+0x33],0x0
0x00df136c: je     0x140df13a7
0x00df136e: cmp    DWORD PTR [r12+0x24],r14d
0x00df1373: jne    0x140df13a7
0x00df1375: cmp    BYTE PTR [rsp+0x31],0x0
0x00df137a: je     0x140df13a7
0x00df137c: cmp    DWORD PTR [r12+0xb8],r14d
0x00df1384: jne    0x140df13a7
0x00df1386: cmp    DWORD PTR [r12+0xb4],0x0
0x00df138f: jne    0x140df13a7
0x00df1391: lea    rcx,[r12+0xc0]
0x00df1399: call   0x140070480
0x00df139e: test   rax,rax
0x00df13a1: je     0x140df3397
0x00df13a7: lea    rdx,[rip+0x827b22]        # 0x141618ed0 ; literal="[B]"
0x00df13ae: mov    rcx,rdi
0x00df13b1: call   0x140070b90
0x00df13b6: lea    rcx,[rbp+0x1b0]
0x00df13bd: call   0x140070cc0
0x00df13c2: nop
0x00df13c3: lea    rcx,[rbp+0x1b0]
0x00df13ca: cmp    DWORD PTR [r12+0x10],0x2
0x00df13d0: lea    rdx,[rip+0x94a4d1]        # 0x14173b8a8 ; literal="Each of the "
0x00df13d7: jge    0x140df13e0
0x00df13d9: lea    rdx,[rip+0x81785c]        # 0x141608c3c ; literal="The "
0x00df13e0: call   0x140070b90
0x00df13e5: movsxd rax,DWORD PTR [r12]
0x00df13e9: cmp    DWORD PTR [rbp+rax*4+0x210],0x2
0x00df13f1: jl     0x140df145b
0x00df13f3: lea    rcx,[rbp+0x1d0]
0x00df13fa: call   0x140070cc0
0x00df13ff: nop
0x00df1400: movsxd rax,DWORD PTR [r12]
0x00df1404: mov    ecx,DWORD PTR [rbp+rax*4+0x240]
0x00df140b: inc    ecx
0x00df140d: xor    r8d,r8d
0x00df1410: lea    rdx,[rbp+0x1d0]
0x00df1417: call   0x140548050
0x00df141c: lea    rcx,[rbp+0x1d0]
0x00df1423: call   0x140546560
0x00df1428: lea    rdx,[rbp+0x1d0]
0x00df142f: lea    rcx,[rbp+0x1b0]
0x00df1436: call   0x1400bb340
0x00df143b: lea    rdx,[rip+0x8125ae]        # 0x1416039f0 ; literal=" "
0x00df1442: lea    rcx,[rbp+0x1b0]
0x00df1449: call   0x140070b90
0x00df144e: nop
0x00df144f: lea    rcx,[rbp+0x1d0]
0x00df1456: call   0x140069460
0x00df145b: movsxd rax,DWORD PTR [r12]
0x00df145f: cmp    eax,0xb
0x00df1462: ja     0x140df150c
0x00df1468: lea    rdx,[rip+0xffffffffff20eb91]        # 0x140000000
0x00df146f: mov    ecx,DWORD PTR [rdx+rax*4+0xdf4e70]
0x00df1476: add    rcx,rdx
0x00df1479: jmp    rcx
0x00df147b: lea    rdx,[rip+0x94a4ce]        # 0x14173b950 ; literal="simple passage"
0x00df1482: lea    rcx,[rbp+0x1b0]
0x00df1489: call   0x140070b90
0x00df148e: cmp    DWORD PTR [r12+0x10],0x2
0x00df1494: jl     0x140df150c
0x00df1496: lea    rdx,[rip+0x813053]        # 0x1416044f0 ; literal="s"
0x00df149d: jmp    0x140df1500
0x00df149f: lea    rdx,[rip+0x875072]        # 0x141666518 ; literal="introduction"
0x00df14a6: jmp    0x140df1482
0x00df14a8: lea    rdx,[rip+0x875079]        # 0x141666528 ; literal="exposition"
0x00df14af: jmp    0x140df1482
0x00df14b1: lea    rdx,[rip+0x874d18]        # 0x1416661d0 ; literal="recapitulation"
0x00df14b8: jmp    0x140df1482
0x00df14ba: lea    rdx,[rip+0x874d1f]        # 0x1416661e0 ; literal="synthesis"
0x00df14c1: jmp    0x140df1500
0x00df14c3: lea    rdx,[rip+0x874d22]        # 0x1416661ec ; literal="verse"
0x00df14ca: jmp    0x140df1482
0x00df14cc: lea    rdx,[rip+0x874d21]        # 0x1416661f4 ; literal="chorus"
0x00df14d3: jmp    0x140df1500
0x00df14d5: lea    rdx,[rip+0x874d20]        # 0x1416661fc ; literal="finale"
0x00df14dc: jmp    0x140df1500
0x00df14de: lea    rdx,[rip+0x874d1f]        # 0x141666204 ; literal="coda"
0x00df14e5: jmp    0x140df1500
0x00df14e7: lea    rdx,[rip+0x874d22]        # 0x141666210 ; literal="bridge-passage"
0x00df14ee: jmp    0x140df1482
0x00df14f0: lea    rdx,[rip+0x812e2d]        # 0x141604324 ; literal="theme"
0x00df14f7: jmp    0x140df1482
0x00df14f9: lea    rdx,[rip+0x94a460]        # 0x14173b960 ; literal="series of variations"
0x00df1500: lea    rcx,[rbp+0x1b0]
0x00df1507: call   0x140070b90
0x00df150c: movsxd rax,DWORD PTR [r12]
0x00df1510: inc    DWORD PTR [rbp+rax*4+0x240]
0x00df1517: xor    r14b,r14b
0x00df151a: mov    BYTE PTR [rsp+0x32],r14b
0x00df151f: test   sil,sil
0x00df1522: jne    0x140df1896
0x00df1528: lea    rdx,[rbp+0x1b0]
0x00df152f: mov    rcx,rdi
0x00df1532: call   0x1400bb340
0x00df1537: mov    r14b,0x1
0x00df153a: mov    BYTE PTR [rsp+0x32],r14b
0x00df153f: lea    rdx,[rip+0x94a3b2]        # 0x14173b8f8 ; literal=" is voiced by "
0x00df1546: mov    rcx,rdi
0x00df1549: call   0x140070b90
0x00df154e: lea    rcx,[r12+0x30]
0x00df1553: call   0x1400709a0
0x00df1558: mov    r12,rax
0x00df155b: mov    rsi,QWORD PTR [rbp-0x50]
0x00df155f: lea    rcx,[rsi+0x30]
0x00df1563: lea    rdx,[rbp-0x10]
0x00df1567: call   0x140070870
0x00df156c: lea    rcx,[rsi+0x30]
0x00df1570: lea    rdx,[rbp+0x18]
0x00df1574: call   0x140070860
0x00df1579: lea    rcx,[rsi+0x48]
0x00df157d: lea    rdx,[rbp+0x10]
0x00df1581: call   0x140070870
0x00df1586: lea    rcx,[rsi+0x48]
0x00df158a: lea    rdx,[rbp+0xb0]
0x00df1591: call   0x140070860
0x00df1596: lea    r8,[rbp+0x18]
0x00df159a: lea    rdx,[rsp+0x48]
0x00df159f: lea    rcx,[rbp-0x10]
0x00df15a3: call   0x140070450
0x00df15a8: xor    edx,edx
0x00df15aa: movzx  ecx,BYTE PTR [rax]
0x00df15ad: call   0x140066de0
0x00df15b2: test   al,al
0x00df15b4: je     0x140df1883
0x00df15ba: mov    rbx,QWORD PTR [rbp+0x8]
0x00df15be: mov    r13,QWORD PTR [rbp-0x38]
0x00df15c2: lea    rcx,[rbp+0x10]
0x00df15c6: call   0x140070440
0x00df15cb: mov    edx,DWORD PTR [rax]
0x00df15cd: test   edx,edx
0x00df15cf: je     0x140df1609
0x00df15d1: sub    edx,0x1
0x00df15d4: je     0x140df1600
0x00df15d6: sub    edx,0x1
0x00df15d9: je     0x140df15f7
0x00df15db: sub    edx,0x1
0x00df15de: je     0x140df15ee
0x00df15e0: cmp    edx,0x1
0x00df15e3: jne    0x140df1618
0x00df15e5: lea    rdx,[rip+0x8a3c78]        # 0x141695264 ; literal="the"
0x00df15ec: jmp    0x140df1610
0x00df15ee: lea    rdx,[rip+0x94b22b]        # 0x14173c820 ; literal="the rhythm of the"
0x00df15f5: jmp    0x140df1610
0x00df15f7: lea    rdx,[rip+0x94a33a]        # 0x14173b938 ; literal="the harmony of the"
0x00df15fe: jmp    0x140df1610
0x00df1600: lea    rdx,[rip+0x94a319]        # 0x14173b920 ; literal="the counterpoint of the"
0x00df1607: jmp    0x140df1610
0x00df1609: lea    rdx,[rip+0x94a2f8]        # 0x14173b908 ; literal="the melody of the"
0x00df1610: mov    rcx,rdi
0x00df1613: call   0x140070b90
0x00df1618: lea    rdx,[rip+0x8123d1]        # 0x1416039f0 ; literal=" "
0x00df161f: mov    rcx,rdi
0x00df1622: call   0x140070b90
0x00df1627: xor    r14b,r14b
0x00df162a: lea    rcx,[rbp-0x10]
0x00df162e: call   0x140070440
0x00df1633: movsxd rdx,DWORD PTR [rax]
0x00df1636: mov    rcx,rbx
0x00df1639: call   0x140070850
0x00df163e: mov    r15,QWORD PTR [rax]
0x00df1641: test   BYTE PTR [r15+0x4],0x1
0x00df1646: je     0x140df1670
0x00df1648: lea    rdx,[rip+0x949a05]        # 0x14173b054 ; literal="singer"
0x00df164f: mov    rcx,rdi
0x00df1652: call   0x140070b90
0x00df1657: cmp    DWORD PTR [r15+0x10],0x2
0x00df165c: jl     0x140df166d
0x00df165e: lea    rdx,[rip+0x812e8b]        # 0x1416044f0 ; literal="s"
0x00df1665: mov    rcx,rdi
0x00df1668: call   0x140070b90
0x00df166d: mov    r14b,0x1
0x00df1670: test   BYTE PTR [r15+0x4],0x2
0x00df1675: je     0x140df169f
0x00df1677: lea    rdx,[rip+0x9499e2]        # 0x14173b060 ; literal="speaker"
0x00df167e: mov    rcx,rdi
0x00df1681: call   0x140070b90
0x00df1686: cmp    DWORD PTR [r15+0x10],0x2
0x00df168b: jl     0x140df169c
0x00df168d: lea    rdx,[rip+0x812e5c]        # 0x1416044f0 ; literal="s"
0x00df1694: mov    rcx,rdi
0x00df1697: call   0x140070b90
0x00df169c: mov    r14b,0x1
0x00df169f: test   BYTE PTR [r15+0x4],0x4
0x00df16a4: je     0x140df16ce
0x00df16a6: lea    rdx,[rip+0x9499bb]        # 0x14173b068 ; literal="chanter"
0x00df16ad: mov    rcx,rdi
0x00df16b0: call   0x140070b90
0x00df16b5: cmp    DWORD PTR [r15+0x10],0x2
0x00df16ba: jl     0x140df16cb
0x00df16bc: lea    rdx,[rip+0x812e2d]        # 0x1416044f0 ; literal="s"
0x00df16c3: mov    rcx,rdi
0x00df16c6: call   0x140070b90
0x00df16cb: mov    r14b,0x1
0x00df16ce: movsxd rax,DWORD PTR [r15]
0x00df16d1: cmp    eax,0xffffffff
0x00df16d4: je     0x140df170c
0x00df16d6: mov    rdx,rax
0x00df16d9: lea    rcx,[rip+0x171db98]        # 0x14250f278
0x00df16e0: cmp    DWORD PTR [r15+0x10],0x2
0x00df16e5: jl     0x140df16f8
0x00df16e7: call   0x140070850
0x00df16ec: mov    rdx,QWORD PTR [rax]
0x00df16ef: add    rdx,0x88
0x00df16f6: jmp    0x140df1704
0x00df16f8: call   0x140070850
0x00df16fd: mov    rdx,QWORD PTR [rax]
0x00df1700: add    rdx,0x68
0x00df1704: mov    rcx,rdi
0x00df1707: call   0x1400bb340
0x00df170c: test   r14b,r14b
0x00df170f: je     0x140df1817
0x00df1715: mov    rsi,QWORD PTR [rbp-0x50]
0x00df1719: mov    edx,DWORD PTR [rsi+0x18]
0x00df171c: cmp    edx,0xffffffff
0x00df171f: je     0x140df1759
0x00df1721: lea    rcx,[rip+0x1718a10]        # 0x14250a138
0x00df1728: call   0x140073ba0
0x00df172d: mov    rsi,rax
0x00df1730: test   rax,rax
0x00df1733: je     0x140df1817
0x00df1739: lea    rdx,[rip+0x94b0f8]        # 0x14173c838 ; literal=" reciting the words of "
0x00df1740: mov    rcx,rdi
0x00df1743: call   0x140070b90
0x00df1748: lea    rdx,[rsi+0x8]
0x00df174c: mov    rcx,rdi
0x00df174f: call   0x1400bb340
0x00df1754: jmp    0x140df1817
0x00df1759: mov    edx,DWORD PTR [rsi+0x14]
0x00df175c: cmp    edx,0xffffffff
0x00df175f: je     0x140df17f4
0x00df1765: lea    rcx,[rip+0x1718bdc]        # 0x14250a348
0x00df176c: call   0x140073ba0
0x00df1771: mov    rsi,rax
0x00df1774: test   rax,rax
0x00df1777: je     0x140df1817
0x00df177d: lea    rdx,[rip+0x94b0cc]        # 0x14173c850 ; literal=" reciting"
0x00df1784: mov    rcx,rdi
0x00df1787: call   0x140070b90
0x00df178c: test   BYTE PTR [rsi+0x8c],0x2
0x00df1793: je     0x140df17a4
0x00df1795: lea    rdx,[rip+0x949a64]        # 0x14173b200 ; literal=" a composition of"
0x00df179c: mov    rcx,rdi
0x00df179f: call   0x140070b90
0x00df17a4: lea    rdx,[rip+0x812245]        # 0x1416039f0 ; literal=" "
0x00df17ab: mov    rcx,rdi
0x00df17ae: call   0x140070b90
0x00df17b3: lea    rcx,[rbp+0x190]
0x00df17ba: call   0x140070cc0
0x00df17bf: nop
0x00df17c0: lea    rcx,[rsi+0x8]
0x00df17c4: xor    r9d,r9d
0x00df17c7: mov    r8b,0x1
0x00df17ca: lea    rdx,[rbp+0x190]
0x00df17d1: call   0x140aae180
0x00df17d6: lea    rdx,[rbp+0x190]
0x00df17dd: mov    rcx,rdi
0x00df17e0: call   0x1400bb340
0x00df17e5: nop
0x00df17e6: lea    rcx,[rbp+0x190]
0x00df17ed: call   0x140069460
0x00df17f2: jmp    0x140df1817
0x00df17f4: cmp    DWORD PTR [r13+0xf4],0xffffffff
0x00df17fc: jne    0x140df1817
0x00df17fe: cmp    DWORD PTR [r13+0xf8],0xffffffff
0x00df1806: jne    0x140df1817
0x00df1808: lea    rdx,[rip+0x94b051]        # 0x14173c860 ; literal=" reciting nonsensical words and sounds"
0x00df180f: mov    rcx,rdi
0x00df1812: call   0x140070b90
0x00df1817: cmp    r12d,0x3
0x00df181b: jl     0x140df1826
0x00df181d: lea    rdx,[rip+0x812b70]        # 0x141604394 ; literal=", "
0x00df1824: jmp    0x140df1833
0x00df1826: cmp    r12d,0x2
0x00df182a: jne    0x140df183b
0x00df182c: lea    rdx,[rip+0x812b59]        # 0x14160438c ; literal=" and "
0x00df1833: mov    rcx,rdi
0x00df1836: call   0x140070b90
0x00df183b: lea    rcx,[rbp-0x10]
0x00df183f: call   0x140070980
0x00df1844: lea    rcx,[rbp+0x10]
0x00df1848: call   0x140070980
0x00df184d: dec    r12d
0x00df1850: lea    r8,[rbp+0x18]
0x00df1854: lea    rdx,[rsp+0x48]
0x00df1859: lea    rcx,[rbp-0x10]
0x00df185d: call   0x140070450
0x00df1862: xor    edx,edx
0x00df1864: movzx  ecx,BYTE PTR [rax]
0x00df1867: call   0x140066de0
0x00df186c: test   al,al
0x00df186e: jne    0x140df15c2
0x00df1874: movzx  ebx,BYTE PTR [rsp+0x31]
0x00df1879: mov    r13,QWORD PTR [rbp-0x40]
0x00df187d: movzx  r14d,BYTE PTR [rsp+0x32]
0x00df1883: lea    rdx,[rip+0x827d0e]        # 0x141619598 ; literal=".  "
0x00df188a: mov    rcx,rdi
0x00df188d: call   0x140070b90
0x00df1892: mov    r12,QWORD PTR [rbp-0x50]
0x00df1896: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x00df189f: jne    0x140df18bb
0x00df18a1: cmp    DWORD PTR [r12+0xac],0xffffffff
0x00df18aa: jne    0x140df18bb
0x00df18ac: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00df18b5: je     0x140df1e4e
0x00df18bb: mov    rcx,rdi
0x00df18be: test   r14b,r14b
0x00df18c1: je     0x140df18e7
0x00df18c3: cmp    DWORD PTR [r12+0x10],0x2
0x00df18c9: jl     0x140df18d9
0x00df18cb: lea    rdx,[rip+0x94a0a6]        # 0x14173b978 ; literal="Each passage"
0x00df18d2: call   0x140070b90
0x00df18d7: jmp    0x140df18fb
0x00df18d9: lea    rdx,[rip+0x94a0a8]        # 0x14173b988 ; literal="The passage"
0x00df18e0: call   0x140070b90
0x00df18e5: jmp    0x140df18fb
0x00df18e7: lea    rdx,[rbp+0x1b0]
0x00df18ee: call   0x1400bb340
0x00df18f3: mov    r14b,0x1
0x00df18f6: mov    BYTE PTR [rsp+0x32],r14b
0x00df18fb: lea    rdx,[rip+0x8120ee]        # 0x1416039f0 ; literal=" "
0x00df1902: mov    rcx,rdi
0x00df1905: call   0x140070b90
0x00df190a: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00df1913: je     0x140df1c34
0x00df1919: lea    rdx,[rip+0x949ac8]        # 0x14173b3e8 ; literal="should "
0x00df1920: mov    rcx,rdi
0x00df1923: call   0x140070b90
0x00df1928: mov    eax,DWORD PTR [r12+0xb0]
0x00df1930: add    eax,0xffffffde
0x00df1933: lea    rsi,[rip+0xffffffffff20e6c6]        # 0x140000000
0x00df193a: cmp    eax,0x26
0x00df193d: ja     0x140df1c3b
0x00df1943: cdqe
0x00df1945: mov    ecx,DWORD PTR [rsi+rax*4+0xdf4ea0]
0x00df194c: add    rcx,rsi
0x00df194f: jmp    rcx
0x00df1951: lea    rdx,[rip+0x949a98]        # 0x14173b3f0 ; literal="stress the rhythm"
0x00df1958: mov    rcx,rdi
0x00df195b: call   0x140070b90
0x00df1960: jmp    0x140df1c3b
0x00df1965: lea    rdx,[rip+0x9499f4]        # 0x14173b360 ; literal="be stately"
0x00df196c: mov    rcx,rdi
0x00df196f: call   0x140070b90
0x00df1974: jmp    0x140df1c3b
0x00df1979: lea    rdx,[rip+0x9499f0]        # 0x14173b370 ; literal="be bright"
0x00df1980: mov    rcx,rdi
0x00df1983: call   0x140070b90
0x00df1988: jmp    0x140df1c3b
0x00df198d: lea    rdx,[rip+0x9499ec]        # 0x14173b380 ; literal="be lively"
0x00df1994: mov    rcx,rdi
0x00df1997: call   0x140070b90
0x00df199c: jmp    0x140df1c3b
0x00df19a1: lea    rdx,[rip+0x9499e8]        # 0x14173b390 ; literal="be made with skill"
0x00df19a8: mov    rcx,rdi
0x00df19ab: call   0x140070b90
0x00df19b0: jmp    0x140df1c3b
0x00df19b5: lea    rdx,[rip+0x949a9c]        # 0x14173b458 ; literal="be vigorous"
0x00df19bc: mov    rcx,rdi
0x00df19bf: call   0x140070b90
0x00df19c4: jmp    0x140df1c3b
0x00df19c9: lea    rdx,[rip+0x949a98]        # 0x14173b468 ; literal="be spirited"
0x00df19d0: mov    rcx,rdi
0x00df19d3: call   0x140070b90
0x00df19d8: jmp    0x140df1c3b
0x00df19dd: lea    rdx,[rip+0x949a94]        # 0x14173b478 ; literal="be delicate"
0x00df19e4: mov    rcx,rdi
0x00df19e7: call   0x140070b90
0x00df19ec: jmp    0x140df1c3b
0x00df19f1: lea    rdx,[rip+0x949a10]        # 0x14173b408 ; literal="bring a sense of motion"
0x00df19f8: mov    rcx,rdi
0x00df19fb: call   0x140070b90
0x00df1a00: jmp    0x140df1c3b
0x00df1a05: lea    rdx,[rip+0x949a7c]        # 0x14173b488 ; literal="be fiery"
0x00df1a0c: mov    rcx,rdi
0x00df1a0f: call   0x140070b90
0x00df1a14: jmp    0x140df1c3b
0x00df1a19: lea    rdx,[rip+0x949a00]        # 0x14173b420 ; literal="be made with feeling"
0x00df1a20: mov    rcx,rdi
0x00df1a23: call   0x140070b90
0x00df1a28: jmp    0x140df1c3b
0x00df1a2d: lea    rdx,[rip+0x949a04]        # 0x14173b438 ; literal="feel agitated"
0x00df1a34: mov    rcx,rdi
0x00df1a37: call   0x140070b90
0x00df1a3c: jmp    0x140df1c3b
0x00df1a41: lea    rdx,[rip+0x949a00]        # 0x14173b448 ; literal="be passionate"
0x00df1a48: mov    rcx,rdi
0x00df1a4b: call   0x140070b90
0x00df1a50: jmp    0x140df1c3b
0x00df1a55: lea    rdx,[rip+0x94904c]        # 0x14173aaa8 ; literal="sparkle"
0x00df1a5c: mov    rcx,rdi
0x00df1a5f: call   0x140070b90
0x00df1a64: jmp    0x140df1c3b
0x00df1a69: lea    rdx,[rip+0x949040]        # 0x14173aab0 ; literal="be broad"
0x00df1a70: mov    rcx,rdi
0x00df1a73: call   0x140070b90
0x00df1a78: jmp    0x140df1c3b
0x00df1a7d: lea    rdx,[rip+0x94903c]        # 0x14173aac0 ; literal="be made sweetly"
0x00df1a84: mov    rcx,rdi
0x00df1a87: call   0x140070b90
0x00df1a8c: jmp    0x140df1c3b
0x00df1a91: lea    rdx,[rip+0x949038]        # 0x14173aad0 ; literal="be strong"
0x00df1a98: mov    rcx,rdi
0x00df1a9b: call   0x140070b90
0x00df1aa0: jmp    0x140df1c3b
0x00df1aa5: lea    rdx,[rip+0x948fb4]        # 0x14173aa60 ; literal="be energetic"
0x00df1aac: mov    rcx,rdi
0x00df1aaf: call   0x140070b90
0x00df1ab4: jmp    0x140df1c3b
0x00df1ab9: lea    rdx,[rip+0x948fb0]        # 0x14173aa70 ; literal="be forceful"
0x00df1ac0: mov    rcx,rdi
0x00df1ac3: call   0x140070b90
0x00df1ac8: jmp    0x140df1c3b
0x00df1acd: lea    rdx,[rip+0x948fac]        # 0x14173aa80 ; literal="feel heroic"
0x00df1ad4: mov    rcx,rdi
0x00df1ad7: call   0x140070b90
0x00df1adc: jmp    0x140df1c3b
0x00df1ae1: lea    rdx,[rip+0x948fa8]        # 0x14173aa90 ; literal="be made expressively"
0x00df1ae8: mov    rcx,rdi
0x00df1aeb: call   0x140070b90
0x00df1af0: jmp    0x140df1c3b
0x00df1af5: lea    rdx,[rip+0x94902c]        # 0x14173ab28 ; literal="feel furious"
0x00df1afc: mov    rcx,rdi
0x00df1aff: call   0x140070b90
0x00df1b04: jmp    0x140df1c3b
0x00df1b09: lea    rdx,[rip+0x949028]        # 0x14173ab38 ; literal="be joyful"
0x00df1b10: mov    rcx,rdi
0x00df1b13: call   0x140070b90
0x00df1b18: jmp    0x140df1c3b
0x00df1b1d: lea    rdx,[rip+0x949024]        # 0x14173ab48 ; literal="be grand"
0x00df1b24: mov    rcx,rdi
0x00df1b27: call   0x140070b90
0x00df1b2c: jmp    0x140df1c3b
0x00df1b31: lea    rdx,[rip+0x949020]        # 0x14173ab58 ; literal="be merry"
0x00df1b38: mov    rcx,rdi
0x00df1b3b: call   0x140070b90
0x00df1b40: jmp    0x140df1c3b
0x00df1b45: lea    rdx,[rip+0x948f94]        # 0x14173aae0 ; literal="be graceful"
0x00df1b4c: mov    rcx,rdi
0x00df1b4f: call   0x140070b90
0x00df1b54: jmp    0x140df1c3b
0x00df1b59: lea    rdx,[rip+0x948f90]        # 0x14173aaf0 ; literal="build as it proceeds"
0x00df1b60: mov    rcx,rdi
0x00df1b63: call   0x140070b90
0x00df1b68: jmp    0x140df1c3b
0x00df1b6d: lea    rdx,[rip+0x948f94]        # 0x14173ab08 ; literal="evoke tears"
0x00df1b74: mov    rcx,rdi
0x00df1b77: call   0x140070b90
0x00df1b7c: jmp    0x140df1c3b
0x00df1b81: lea    rdx,[rip+0x948f90]        # 0x14173ab18 ; literal="be melancholic"
0x00df1b88: mov    rcx,rdi
0x00df1b8b: call   0x140070b90
0x00df1b90: jmp    0x140df1c3b
0x00df1b95: lea    rdx,[rip+0x94900c]        # 0x14173aba8 ; literal="feel mournful"
0x00df1b9c: mov    rcx,rdi
0x00df1b9f: call   0x140070b90
0x00df1ba4: jmp    0x140df1c3b
0x00df1ba9: lea    rdx,[rip+0x949008]        # 0x14173abb8 ; literal="be made with a light touch"
0x00df1bb0: mov    rcx,rdi
0x00df1bb3: call   0x140070b90
0x00df1bb8: jmp    0x140df1c3b
0x00df1bbd: lea    rdx,[rip+0x949014]        # 0x14173abd8 ; literal="feel heavy"
0x00df1bc4: mov    rcx,rdi
0x00df1bc7: call   0x140070b90
0x00df1bcc: jmp    0x140df1c3b
0x00df1bce: lea    rdx,[rip+0x949013]        # 0x14173abe8 ; literal="feel mysterious"
0x00df1bd5: mov    rcx,rdi
0x00df1bd8: call   0x140070b90
0x00df1bdd: jmp    0x140df1c3b
0x00df1bdf: lea    rdx,[rip+0x948f82]        # 0x14173ab68 ; literal="be jumpy"
0x00df1be6: mov    rcx,rdi
0x00df1be9: call   0x140070b90
0x00df1bee: jmp    0x140df1c3b
0x00df1bf0: lea    rdx,[rip+0x948f81]        # 0x14173ab78 ; literal="feel playful"
0x00df1bf7: mov    rcx,rdi
0x00df1bfa: call   0x140070b90
0x00df1bff: jmp    0x140df1c3b
0x00df1c01: lea    rdx,[rip+0x948f80]        # 0x14173ab88 ; literal="feel tender"
0x00df1c08: mov    rcx,rdi
0x00df1c0b: call   0x140070b90
0x00df1c10: jmp    0x140df1c3b
0x00df1c12: lea    rdx,[rip+0x948f7f]        # 0x14173ab98 ; literal="feel calm"
0x00df1c19: mov    rcx,rdi
0x00df1c1c: call   0x140070b90
0x00df1c21: jmp    0x140df1c3b
0x00df1c23: lea    rdx,[rip+0x94901e]        # 0x14173ac48 ; literal="be triumphant"
0x00df1c2a: mov    rcx,rdi
0x00df1c2d: call   0x140070b90
0x00df1c32: jmp    0x140df1c3b
0x00df1c34: lea    rsi,[rip+0xffffffffff20e3c5]        # 0x140000000
0x00df1c3b: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x00df1c44: je     0x140df1d6e
0x00df1c4a: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00df1c53: je     0x140df1c64
0x00df1c55: lea    rdx,[rip+0x812730]        # 0x14160438c ; literal=" and "
0x00df1c5c: mov    rcx,rdi
0x00df1c5f: call   0x140070b90
0x00df1c64: movsxd rax,DWORD PTR [r12+0xa8]
0x00df1c6c: cmp    eax,0x21
0x00df1c6f: ja     0x140df1d6e
0x00df1c75: mov    ecx,DWORD PTR [rsi+rax*4+0xdf4f3c]
0x00df1c7c: add    rcx,rsi
0x00df1c7f: jmp    rcx
0x00df1c81: lea    rdx,[rip+0x94aaf8]        # 0x14173c780 ; literal="is twice the tempo of the last passage"
0x00df1c88: jmp    0x140df1d66
0x00df1c8d: lea    rdx,[rip+0x94ab14]        # 0x14173c7a8 ; literal="is half the tempo of the last passage"
0x00df1c94: jmp    0x140df1d66
0x00df1c99: lea    rdx,[rip+0x94ab30]        # 0x14173c7d0 ; literal="moves more quickly than the last passage"
0x00df1ca0: jmp    0x140df1d66
0x00df1ca5: lea    rdx,[rip+0x94ab54]        # 0x14173c800 ; literal="is slower than the last passage"
0x00df1cac: jmp    0x140df1d66
0x00df1cb1: lea    rdx,[rip+0x94ac10]        # 0x14173c8c8 ; literal="resumes the previous tempo"
0x00df1cb8: jmp    0x140df1d66
0x00df1cbd: lea    rdx,[rip+0x94ac24]        # 0x14173c8e8 ; literal="resumes the original tempo"
0x00df1cc4: jmp    0x140df1d66
0x00df1cc9: lea    rdx,[rip+0x948f88]        # 0x14173ac58 ; literal="is at a free tempo"
0x00df1cd0: jmp    0x140df1d66
0x00df1cd5: lea    rdx,[rip+0x948f94]        # 0x14173ac70 ; literal="is very slow"
0x00df1cdc: jmp    0x140df1d66
0x00df1ce1: lea    rdx,[rip+0x948f98]        # 0x14173ac80 ; literal="is slow"
0x00df1ce8: jmp    0x140df1d66
0x00df1cea: lea    rdx,[rip+0x948f07]        # 0x14173abf8 ; literal="is at a walking pace"
0x00df1cf1: jmp    0x140df1d66
0x00df1cf3: lea    rdx,[rip+0x948f16]        # 0x14173ac10 ; literal="is moderately paced"
0x00df1cfa: jmp    0x140df1d66
0x00df1cfc: lea    rdx,[rip+0x948f25]        # 0x14173ac28 ; literal="is moderately fast"
0x00df1d03: jmp    0x140df1d66
0x00df1d05: lea    rdx,[rip+0x948f34]        # 0x14173ac40 ; literal="is fast"
0x00df1d0c: jmp    0x140df1d66
0x00df1d0e: lea    rdx,[rip+0x948ffb]        # 0x14173ad10 ; literal="is very fast"
0x00df1d15: jmp    0x140df1d66
0x00df1d17: lea    rdx,[rip+0x949002]        # 0x14173ad20 ; literal="is extremely fast"
0x00df1d1e: jmp    0x140df1d66
0x00df1d20: lea    rdx,[rip+0x949011]        # 0x14173ad38 ; literal="accelerates as it proceeds"
0x00df1d27: jmp    0x140df1d66
0x00df1d29: lea    rdx,[rip+0x949028]        # 0x14173ad58 ; literal="slows and broadens"
0x00df1d30: jmp    0x140df1d66
0x00df1d32: lea    rdx,[rip+0x948f4f]        # 0x14173ac88 ; literal="is consistently slowing"
0x00df1d39: jmp    0x140df1d66
0x00df1d3b: lea    rdx,[rip+0x948f5e]        # 0x14173aca0 ; literal="is at a hurried pace"
0x00df1d42: jmp    0x140df1d66
0x00df1d44: lea    rdx,[rip+0x948f6d]        # 0x14173acb8 ; literal="gradually slows as it comes to an end"
0x00df1d4b: jmp    0x140df1d66
0x00df1d4d: lea    rdx,[rip+0x948f8c]        # 0x14173ace0 ; literal="slows down and dies away as it draws to a close"
0x00df1d54: jmp    0x140df1d66
0x00df1d56: lea    rdx,[rip+0x949063]        # 0x14173adc0 ; literal="becomes calmer as the end is approached"
0x00df1d5d: jmp    0x140df1d66
0x00df1d5f: lea    rdx,[rip+0x949082]        # 0x14173ade8 ; literal="becomes frenzied as it proceeds"
0x00df1d66: mov    rcx,rdi
0x00df1d69: call   0x140070b90
0x00df1d6e: cmp    DWORD PTR [r12+0xac],0xffffffff
0x00df1d77: je     0x140df1e3f
0x00df1d7d: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x00df1d86: jne    0x140df1d9a
0x00df1d88: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00df1d91: lea    rdx,[rip+0x949070]        # 0x14173ae08 ; literal="is to"
0x00df1d98: je     0x140df1da1
0x00df1d9a: lea    rdx,[rip+0x94906f]        # 0x14173ae10 ; literal=", and it is to"
0x00df1da1: mov    rcx,rdi
0x00df1da4: call   0x140070b90
0x00df1da9: lea    rdx,[rip+0x811c40]        # 0x1416039f0 ; literal=" "
0x00df1db0: mov    rcx,rdi
0x00df1db3: call   0x140070b90
0x00df1db8: mov    eax,DWORD PTR [r12+0xac]
0x00df1dc0: add    eax,0xffffffec
0x00df1dc3: cmp    eax,0xa
0x00df1dc6: ja     0x140df1e3f
0x00df1dc8: cdqe
0x00df1dca: mov    ecx,DWORD PTR [rsi+rax*4+0xdf4fc4]
0x00df1dd1: add    rcx,rsi
0x00df1dd4: jmp    rcx
0x00df1dd6: lea    rdx,[rip+0x948f93]        # 0x14173ad70 ; literal="be in whispered undertones"
0x00df1ddd: jmp    0x140df1e37
0x00df1ddf: lea    rdx,[rip+0x948faa]        # 0x14173ad90 ; literal="be very soft"
0x00df1de6: jmp    0x140df1e37
0x00df1de8: lea    rdx,[rip+0x948fb1]        # 0x14173ada0 ; literal="be soft"
0x00df1def: jmp    0x140df1e37
0x00df1df1: lea    rdx,[rip+0x948fb0]        # 0x14173ada8 ; literal="be moderately soft"
0x00df1df8: jmp    0x140df1e37
0x00df1dfa: lea    rdx,[rip+0x9490a7]        # 0x14173aea8 ; literal="be moderately loud"
0x00df1e01: jmp    0x140df1e37
0x00df1e03: lea    rdx,[rip+0x9490b6]        # 0x14173aec0 ; literal="be loud"
0x00df1e0a: jmp    0x140df1e37
0x00df1e0c: lea    rdx,[rip+0x9490b5]        # 0x14173aec8 ; literal="be very loud"
0x00df1e13: jmp    0x140df1e37
0x00df1e15: lea    rdx,[rip+0x9490bc]        # 0x14173aed8 ; literal="become louder and louder"
0x00df1e1c: jmp    0x140df1e37
0x00df1e1e: lea    rdx,[rip+0x948ffb]        # 0x14173ae20 ; literal="become softer and softer"
0x00df1e25: jmp    0x140df1e37
0x00df1e27: lea    rdx,[rip+0x949012]        # 0x14173ae40 ; literal="fade into silence"
0x00df1e2e: jmp    0x140df1e37
0x00df1e30: lea    rdx,[rip+0x949021]        # 0x14173ae58 ; literal="start loud then be immediately soft"
0x00df1e37: mov    rcx,rdi
0x00df1e3a: call   0x140070b90
0x00df1e3f: lea    rdx,[rip+0x827752]        # 0x141619598 ; literal=".  "
0x00df1e46: mov    rcx,rdi
0x00df1e49: call   0x140070b90
0x00df1e4e: cmp    BYTE PTR [rbp-0x60],0x0
0x00df1e52: jne    0x140df25d8
0x00df1e58: test   r13d,r13d
0x00df1e5b: jle    0x140df25d8
0x00df1e61: mov    BYTE PTR [rsp+0x30],0x1
0x00df1e66: test   r14b,r14b
0x00df1e69: jne    0x140df1eaf
0x00df1e6b: lea    rcx,[rbp+0x1b0]
0x00df1e72: call   0x140546560
0x00df1e77: lea    rdx,[rip+0x8280f2]        # 0x141619f70 ; literal="In "
0x00df1e7e: mov    rcx,rdi
0x00df1e81: call   0x140070b90
0x00df1e86: lea    rdx,[rbp+0x1b0]
0x00df1e8d: mov    rcx,rdi
0x00df1e90: call   0x1400bb340
0x00df1e95: lea    rdx,[rip+0x8124f8]        # 0x141604394 ; literal=", "
0x00df1e9c: mov    rcx,rdi
0x00df1e9f: call   0x140070b90
0x00df1ea4: xor    al,al
0x00df1ea6: mov    BYTE PTR [rsp+0x30],al
0x00df1eaa: mov    BYTE PTR [rsp+0x32],0x1
0x00df1eaf: lea    rcx,[r12+0x30]
0x00df1eb4: lea    rdx,[rbp+0x0]
0x00df1eb8: call   0x140070870
0x00df1ebd: lea    rcx,[r12+0x30]
0x00df1ec2: lea    rdx,[rbp-0x20]
0x00df1ec6: call   0x140070860
0x00df1ecb: lea    rcx,[r12+0x78]
0x00df1ed0: lea    rdx,[rbp+0x60]
0x00df1ed4: call   0x140070870
0x00df1ed9: mov    rcx,QWORD PTR [rax]
0x00df1edc: mov    QWORD PTR [rsp+0x68],rcx
0x00df1ee1: lea    rcx,[r12+0x90]
0x00df1ee9: lea    rdx,[rbp+0x68]
0x00df1eed: call   0x140070870
0x00df1ef2: mov    rcx,QWORD PTR [rax]
0x00df1ef5: mov    QWORD PTR [rbp-0x8],rcx
0x00df1ef9: lea    r8,[rbp-0x20]
0x00df1efd: lea    rdx,[rsp+0x4a]
0x00df1f02: lea    rcx,[rbp+0x0]
0x00df1f06: call   0x140070450
0x00df1f0b: xor    edx,edx
0x00df1f0d: movzx  ecx,BYTE PTR [rax]
0x00df1f10: call   0x140066de0
0x00df1f15: test   al,al
0x00df1f17: je     0x140df25c9
0x00df1f1d: movzx  ebx,BYTE PTR [rsp+0x30]
0x00df1f22: lea    rcx,[rsp+0x68]
0x00df1f27: call   0x140070440
0x00df1f2c: cmp    DWORD PTR [rax],0xffffffff
0x00df1f2f: je     0x140df2580
0x00df1f35: lea    rcx,[rbp+0x0]
0x00df1f39: call   0x140070440
0x00df1f3e: movsxd rdx,DWORD PTR [rax]
0x00df1f41: mov    rcx,QWORD PTR [rbp+0x8]
0x00df1f45: call   0x140070850
0x00df1f4a: mov    r14,QWORD PTR [rax]
0x00df1f4d: mov    eax,DWORD PTR [r14+0x10]
0x00df1f51: mov    rcx,rdi
0x00df1f54: test   bl,bl
0x00df1f56: je     0x140df1f74
0x00df1f58: cmp    eax,0x2
0x00df1f5b: lea    rdx,[rip+0x949946]        # 0x14173b8a8 ; literal="Each of the "
0x00df1f62: jge    0x140df1f6b
0x00df1f64: lea    rdx,[rip+0x816cd1]        # 0x141608c3c ; literal="The "
0x00df1f6b: call   0x140070b90
0x00df1f70: xor    bl,bl
0x00df1f72: jmp    0x140df1f8c
0x00df1f74: cmp    eax,0x2
0x00df1f77: lea    rdx,[rip+0x94a98a]        # 0x14173c908 ; literal="each of the "
0x00df1f7e: jge    0x140df1f87
0x00df1f80: lea    rdx,[rip+0x81217d]        # 0x141604104 ; literal="the "
0x00df1f87: call   0x140070b90
0x00df1f8c: test   BYTE PTR [r14+0x4],0x1
0x00df1f91: je     0x140df1fe4
0x00df1f93: lea    rdx,[rip+0x9490ba]        # 0x14173b054 ; literal="singer"
0x00df1f9a: mov    rcx,rdi
0x00df1f9d: call   0x140070b90
0x00df1fa2: mov    rcx,rdi
0x00df1fa5: cmp    DWORD PTR [r14+0x10],0x2
0x00df1faa: lea    rdx,[rip+0x94a967]        # 0x14173c918 ; literal="s'"
0x00df1fb1: jge    0x140df1fba
0x00df1fb3: lea    rdx,[rip+0x81252a]        # 0x1416044e4 ; literal="'s"
0x00df1fba: call   0x140070b90
0x00df1fbf: lea    rdx,[rip+0x94a8c2]        # 0x14173c888 ; literal=" voice"
0x00df1fc6: mov    rcx,rdi
0x00df1fc9: call   0x140070b90
0x00df1fce: cmp    DWORD PTR [r14+0x10],0x2
0x00df1fd3: jl     0x140df1fe4
0x00df1fd5: lea    rdx,[rip+0x812514]        # 0x1416044f0 ; literal="s"
0x00df1fdc: mov    rcx,rdi
0x00df1fdf: call   0x140070b90
0x00df1fe4: test   BYTE PTR [r14+0x4],0x2
0x00df1fe9: je     0x140df203c
0x00df1feb: lea    rdx,[rip+0x94906e]        # 0x14173b060 ; literal="speaker"
0x00df1ff2: mov    rcx,rdi
0x00df1ff5: call   0x140070b90
0x00df1ffa: mov    rcx,rdi
0x00df1ffd: cmp    DWORD PTR [r14+0x10],0x2
0x00df2002: lea    rdx,[rip+0x94a90f]        # 0x14173c918 ; literal="s'"
0x00df2009: jge    0x140df2012
0x00df200b: lea    rdx,[rip+0x8124d2]        # 0x1416044e4 ; literal="'s"
0x00df2012: call   0x140070b90
0x00df2017: lea    rdx,[rip+0x94a86a]        # 0x14173c888 ; literal=" voice"
0x00df201e: mov    rcx,rdi
0x00df2021: call   0x140070b90
0x00df2026: cmp    DWORD PTR [r14+0x10],0x2
0x00df202b: jl     0x140df203c
0x00df202d: lea    rdx,[rip+0x8124bc]        # 0x1416044f0 ; literal="s"
0x00df2034: mov    rcx,rdi
0x00df2037: call   0x140070b90
0x00df203c: test   BYTE PTR [r14+0x4],0x4
0x00df2041: je     0x140df2094
0x00df2043: lea    rdx,[rip+0x94901e]        # 0x14173b068 ; literal="chanter"
0x00df204a: mov    rcx,rdi
0x00df204d: call   0x140070b90
0x00df2052: mov    rcx,rdi
0x00df2055: cmp    DWORD PTR [r14+0x10],0x2
0x00df205a: lea    rdx,[rip+0x94a8b7]        # 0x14173c918 ; literal="s'"
0x00df2061: jge    0x140df206a
0x00df2063: lea    rdx,[rip+0x81247a]        # 0x1416044e4 ; literal="'s"
0x00df206a: call   0x140070b90
0x00df206f: lea    rdx,[rip+0x94a812]        # 0x14173c888 ; literal=" voice"
0x00df2076: mov    rcx,rdi
0x00df2079: call   0x140070b90
0x00df207e: cmp    DWORD PTR [r14+0x10],0x2
0x00df2083: jl     0x140df2094
0x00df2085: lea    rdx,[rip+0x812464]        # 0x1416044f0 ; literal="s"
0x00df208c: mov    rcx,rdi
0x00df208f: call   0x140070b90
0x00df2094: movsxd rax,DWORD PTR [r14]
0x00df2097: cmp    eax,0xffffffff
0x00df209a: je     0x140df20d2
0x00df209c: mov    rdx,rax
0x00df209f: lea    rcx,[rip+0x171d1d2]        # 0x14250f278
0x00df20a6: cmp    DWORD PTR [r14+0x10],0x2
0x00df20ab: jl     0x140df20be
0x00df20ad: call   0x140070850
0x00df20b2: mov    rdx,QWORD PTR [rax]
0x00df20b5: add    rdx,0x88
0x00df20bc: jmp    0x140df20ca
0x00df20be: call   0x140070850
0x00df20c3: mov    rdx,QWORD PTR [rax]
0x00df20c6: add    rdx,0x68
0x00df20ca: mov    rcx,rdi
0x00df20cd: call   0x1400bb340
0x00df20d2: lea    rdx,[rip+0x811917]        # 0x1416039f0 ; literal=" "
0x00df20d9: mov    rcx,rdi
0x00df20dc: call   0x140070b90
0x00df20e1: lea    rcx,[rsp+0x68]
0x00df20e6: call   0x140070440
0x00df20eb: movsxd rsi,DWORD PTR [rax]
0x00df20ee: lea    rcx,[rbp-0x8]
0x00df20f2: call   0x140070440
0x00df20f7: movsxd r15,DWORD PTR [rax]
0x00df20fa: mov    DWORD PTR [rbp-0x5c],r15d
0x00df20fe: movsxd rax,DWORD PTR [r14]
0x00df2101: cmp    eax,0xffffffff
0x00df2104: jne    0x140df21f0
0x00df210a: cmp    esi,r15d
0x00df210d: jne    0x140df215c
0x00df210f: lea    rdx,[rip+0x94a77a]        # 0x14173c890 ; literal="stays in the "
0x00df2116: mov    rcx,rdi
0x00df2119: call   0x140070b90
0x00df211e: test   esi,esi
0x00df2120: je     0x140df2286
0x00df2126: sub    esi,0x1
0x00df2129: je     0x140df2148
0x00df212b: cmp    esi,0x1
0x00df212e: jne    0x140df2546
0x00df2134: lea    rdx,[rip+0x873fd5]        # 0x141666110 ; literal="high"
0x00df213b: mov    rcx,rdi
0x00df213e: call   0x140070b90
0x00df2143: jmp    0x140df2546
0x00df2148: lea    rdx,[rip+0x949569]        # 0x14173b6b8 ; literal="middle"
0x00df214f: mov    rcx,rdi
0x00df2152: call   0x140070b90
0x00df2157: jmp    0x140df2546
0x00df215c: test   esi,esi
0x00df215e: jne    0x140df2172
0x00df2160: cmp    r15d,0x2
0x00df2164: jne    0x140df2172
0x00df2166: lea    rdx,[rip+0x94a743]        # 0x14173c8b0 ; literal="covers its entire range"
0x00df216d: jmp    0x140df254d
0x00df2172: lea    rdx,[rip+0x94a84f]        # 0x14173c9c8 ; literal="ranges from the "
0x00df2179: mov    rcx,rdi
0x00df217c: call   0x140070b90
0x00df2181: test   esi,esi
0x00df2183: je     0x140df21a1
0x00df2185: sub    esi,0x1
0x00df2188: je     0x140df2198
0x00df218a: cmp    esi,0x1
0x00df218d: jne    0x140df21b0
0x00df218f: lea    rdx,[rip+0x873f7a]        # 0x141666110 ; literal="high"
0x00df2196: jmp    0x140df21a8
0x00df2198: lea    rdx,[rip+0x949519]        # 0x14173b6b8 ; literal="middle"
0x00df219f: jmp    0x140df21a8
0x00df21a1: lea    rdx,[rip+0x873f70]        # 0x141666118 ; literal="low"
0x00df21a8: mov    rcx,rdi
0x00df21ab: call   0x140070b90
0x00df21b0: lea    rdx,[rip+0x949491]        # 0x14173b648 ; literal=" register to the "
0x00df21b7: mov    rcx,rdi
0x00df21ba: call   0x140070b90
0x00df21bf: test   r15d,r15d
0x00df21c2: je     0x140df2286
0x00df21c8: sub    r15d,0x1
0x00df21cc: je     0x140df2148
0x00df21d2: cmp    r15d,0x1
0x00df21d6: jne    0x140df2546
0x00df21dc: lea    rdx,[rip+0x873f2d]        # 0x141666110 ; literal="high"
0x00df21e3: mov    rcx,rdi
0x00df21e6: call   0x140070b90
0x00df21eb: jmp    0x140df2546
0x00df21f0: mov    rdx,rax
0x00df21f3: lea    rcx,[rip+0x171d07e]        # 0x14250f278
0x00df21fa: call   0x140070850
0x00df21ff: mov    rcx,QWORD PTR [rax]
0x00df2202: add    rcx,0x248
0x00df2209: call   0x140070480
0x00df220e: mov    r12,rax
0x00df2211: mov    QWORD PTR [rsp+0x70],rax
0x00df2216: cmp    esi,r15d
0x00df2219: jne    0x140df22f0
0x00df221f: mov    rcx,rdi
0x00df2222: cmp    r12d,0x4
0x00df2226: lea    rdx,[rip+0x94a7b3]        # 0x14173c9e0 ; literal="is confined to the "
0x00df222d: jge    0x140df2236
0x00df222f: lea    rdx,[rip+0x94a65a]        # 0x14173c890 ; literal="stays in the "
0x00df2236: call   0x140070b90
0x00df223b: movsxd rdx,DWORD PTR [r14]
0x00df223e: lea    rcx,[rip+0x171d033]        # 0x14250f278
0x00df2245: call   0x140070850
0x00df224a: mov    rcx,QWORD PTR [rax]
0x00df224d: add    rcx,0x248
0x00df2254: mov    rdx,rsi
0x00df2257: call   0x140070850
0x00df225c: mov    rcx,QWORD PTR [rax]
0x00df225f: call   0x140decaa0
0x00df2264: cmp    eax,0xffffffff
0x00df2267: je     0x140df2282
0x00df2269: mov    rdx,rdi
0x00df226c: mov    ecx,eax
0x00df226e: call   0x140796510
0x00df2273: lea    rdx,[rip+0x811776]        # 0x1416039f0 ; literal=" "
0x00df227a: mov    rcx,rdi
0x00df227d: call   0x140070b90
0x00df2282: test   esi,esi
0x00df2284: jne    0x140df229a
0x00df2286: lea    rdx,[rip+0x873e8b]        # 0x141666118 ; literal="low"
0x00df228d: mov    rcx,rdi
0x00df2290: call   0x140070b90
0x00df2295: jmp    0x140df2546
0x00df229a: cmp    esi,0x1
0x00df229d: jne    0x140df22b9
0x00df229f: cmp    r12d,0x3
0x00df22a3: jl     0x140df22b9
0x00df22a5: lea    rdx,[rip+0x94940c]        # 0x14173b6b8 ; literal="middle"
0x00df22ac: mov    rcx,rdi
0x00df22af: call   0x140070b90
0x00df22b4: jmp    0x140df2546
0x00df22b9: lea    eax,[r12-0x1]
0x00df22be: cmp    esi,eax
0x00df22c0: jne    0x140df22dc
0x00df22c2: cmp    r12d,0x4
0x00df22c6: jl     0x140df22dc
0x00df22c8: lea    rdx,[rip+0x949481]        # 0x14173b750 ; literal="top"
0x00df22cf: mov    rcx,rdi
0x00df22d2: call   0x140070b90
0x00df22d7: jmp    0x140df2546
0x00df22dc: lea    rdx,[rip+0x873e2d]        # 0x141666110 ; literal="high"
0x00df22e3: mov    rcx,rdi
0x00df22e6: call   0x140070b90
0x00df22eb: jmp    0x140df2546
0x00df22f0: movsxd rdx,DWORD PTR [r14]
0x00df22f3: lea    rcx,[rip+0x171cf7e]        # 0x14250f278
0x00df22fa: call   0x140070850
0x00df22ff: mov    rcx,QWORD PTR [rax]
0x00df2302: add    rcx,0x248
0x00df2309: mov    rdx,rsi
0x00df230c: call   0x140070850
0x00df2311: mov    rcx,QWORD PTR [rax]
0x00df2314: call   0x140decaa0
0x00df2319: mov    r12d,eax
0x00df231c: movsxd rdx,DWORD PTR [r14]
0x00df231f: lea    rcx,[rip+0x171cf52]        # 0x14250f278
0x00df2326: call   0x140070850
0x00df232b: mov    rcx,QWORD PTR [rax]
0x00df232e: add    rcx,0x248
0x00df2335: mov    rdx,r15
0x00df2338: call   0x140070850
0x00df233d: mov    rcx,QWORD PTR [rax]
0x00df2340: call   0x140decaa0
0x00df2345: mov    r13d,eax
0x00df2348: mov    r14,QWORD PTR [rsp+0x70]
0x00df234d: dec    r14d
0x00df2350: test   esi,esi
0x00df2352: jne    0x140df237a
0x00df2354: cmp    r15d,r14d
0x00df2357: jne    0x140df237a
0x00df2359: cmp    r12d,eax
0x00df235c: jne    0x140df2438
0x00df2362: lea    rdx,[rip+0x94a547]        # 0x14173c8b0 ; literal="covers its entire range"
0x00df2369: mov    rcx,rdi
0x00df236c: call   0x140070b90
0x00df2371: mov    r13,QWORD PTR [rbp-0x40]
0x00df2375: jmp    0x140df2555
0x00df237a: cmp    r12d,r13d
0x00df237d: jne    0x140df2434
0x00df2383: lea    rdx,[rip+0x94a63e]        # 0x14173c9c8 ; literal="ranges from the "
0x00df238a: mov    rcx,rdi
0x00df238d: call   0x140070b90
0x00df2392: test   esi,esi
0x00df2394: jne    0x140df239f
0x00df2396: lea    rdx,[rip+0x873d7b]        # 0x141666118 ; literal="low"
0x00df239d: jmp    0x140df23cf
0x00df239f: mov    rax,QWORD PTR [rsp+0x70]
0x00df23a4: cmp    esi,0x1
0x00df23a7: jne    0x140df23b7
0x00df23a9: cmp    eax,0x3
0x00df23ac: jl     0x140df23b7
0x00df23ae: lea    rdx,[rip+0x949303]        # 0x14173b6b8 ; literal="middle"
0x00df23b5: jmp    0x140df23cf
0x00df23b7: cmp    esi,r14d
0x00df23ba: jne    0x140df23c8
0x00df23bc: cmp    eax,0x4
0x00df23bf: lea    rdx,[rip+0x94938a]        # 0x14173b750 ; literal="top"
0x00df23c6: jge    0x140df23cf
0x00df23c8: lea    rdx,[rip+0x873d41]        # 0x141666110 ; literal="high"
0x00df23cf: mov    rcx,rdi
0x00df23d2: call   0x140070b90
0x00df23d7: lea    rdx,[rip+0x94926a]        # 0x14173b648 ; literal=" register to the "
0x00df23de: mov    rcx,rdi
0x00df23e1: call   0x140070b90
0x00df23e6: test   r15d,r15d
0x00df23e9: jne    0x140df23f7
0x00df23eb: lea    rdx,[rip+0x873d26]        # 0x141666118 ; literal="low"
0x00df23f2: jmp    0x140df253a
0x00df23f7: mov    rcx,QWORD PTR [rsp+0x70]
0x00df23fc: cmp    r15d,0x1
0x00df2400: jne    0x140df2413
0x00df2402: cmp    ecx,0x3
0x00df2405: jl     0x140df2413
0x00df2407: lea    rdx,[rip+0x9492aa]        # 0x14173b6b8 ; literal="middle"
0x00df240e: jmp    0x140df253a
0x00df2413: lea    eax,[rcx-0x1]
0x00df2416: cmp    r15d,eax
0x00df2419: jne    0x140df2533
0x00df241f: cmp    ecx,0x4
0x00df2422: jl     0x140df2533
0x00df2428: lea    rdx,[rip+0x949321]        # 0x14173b750 ; literal="top"
0x00df242f: jmp    0x140df253a
0x00df2434: test   esi,esi
0x00df2436: jne    0x140df2452
0x00df2438: mov    r15d,r14d
0x00df243b: cmp    DWORD PTR [rbp-0x5c],r14d
0x00df243f: jne    0x140df2452
0x00df2441: lea    rdx,[rip+0x94a5b0]        # 0x14173c9f8 ; literal="covers its entire range from the "
0x00df2448: mov    rcx,rdi
0x00df244b: call   0x140070b90
0x00df2450: jmp    0x140df2464
0x00df2452: lea    rdx,[rip+0x94a56f]        # 0x14173c9c8 ; literal="ranges from the "
0x00df2459: mov    rcx,rdi
0x00df245c: call   0x140070b90
0x00df2461: mov    r15d,r14d
0x00df2464: cmp    r12d,0xffffffff
0x00df2468: je     0x140df2484
0x00df246a: mov    rdx,rdi
0x00df246d: mov    ecx,r12d
0x00df2470: call   0x140796510
0x00df2475: lea    rdx,[rip+0x811574]        # 0x1416039f0 ; literal=" "
0x00df247c: mov    rcx,rdi
0x00df247f: call   0x140070b90
0x00df2484: test   esi,esi
0x00df2486: jne    0x140df2491
0x00df2488: lea    rdx,[rip+0x873c89]        # 0x141666118 ; literal="low"
0x00df248f: jmp    0x140df24c1
0x00df2491: mov    rax,QWORD PTR [rsp+0x70]
0x00df2496: cmp    esi,0x1
0x00df2499: jne    0x140df24a9
0x00df249b: cmp    eax,0x3
0x00df249e: jl     0x140df24a9
0x00df24a0: lea    rdx,[rip+0x949211]        # 0x14173b6b8 ; literal="middle"
0x00df24a7: jmp    0x140df24c1
0x00df24a9: cmp    esi,r15d
0x00df24ac: jne    0x140df24ba
0x00df24ae: cmp    eax,0x4
0x00df24b1: lea    rdx,[rip+0x949298]        # 0x14173b750 ; literal="top"
0x00df24b8: jge    0x140df24c1
0x00df24ba: lea    rdx,[rip+0x873c4f]        # 0x141666110 ; literal="high"
0x00df24c1: mov    rcx,rdi
0x00df24c4: call   0x140070b90
0x00df24c9: lea    rdx,[rip+0x949178]        # 0x14173b648 ; literal=" register to the "
0x00df24d0: mov    rcx,rdi
0x00df24d3: call   0x140070b90
0x00df24d8: cmp    r13d,0xffffffff
0x00df24dc: je     0x140df24f8
0x00df24de: mov    rdx,rdi
0x00df24e1: mov    ecx,r13d
0x00df24e4: call   0x140796510
0x00df24e9: lea    rdx,[rip+0x811500]        # 0x1416039f0 ; literal=" "
0x00df24f0: mov    rcx,rdi
0x00df24f3: call   0x140070b90
0x00df24f8: mov    ecx,DWORD PTR [rbp-0x5c]
0x00df24fb: test   ecx,ecx
0x00df24fd: jne    0x140df2508
0x00df24ff: lea    rdx,[rip+0x873c12]        # 0x141666118 ; literal="low"
0x00df2506: jmp    0x140df253a
0x00df2508: mov    rdx,QWORD PTR [rsp+0x70]
0x00df250d: cmp    ecx,0x1
0x00df2510: jne    0x140df2520
0x00df2512: cmp    edx,0x3
0x00df2515: jl     0x140df2520
0x00df2517: lea    rdx,[rip+0x94919a]        # 0x14173b6b8 ; literal="middle"
0x00df251e: jmp    0x140df253a
0x00df2520: lea    eax,[rdx-0x1]
0x00df2523: cmp    ecx,eax
0x00df2525: jne    0x140df2533
0x00df2527: cmp    edx,0x4
0x00df252a: lea    rdx,[rip+0x94921f]        # 0x14173b750 ; literal="top"
0x00df2531: jge    0x140df253a
0x00df2533: lea    rdx,[rip+0x873bd6]        # 0x141666110 ; literal="high"
0x00df253a: mov    rcx,rdi
0x00df253d: call   0x140070b90
0x00df2542: mov    r13,QWORD PTR [rbp-0x40]
0x00df2546: lea    rdx,[rip+0x94a353]        # 0x14173c8a0 ; literal=" register"
0x00df254d: mov    rcx,rdi
0x00df2550: call   0x140070b90
0x00df2555: cmp    r13d,0x3
0x00df2559: jl     0x140df2564
0x00df255b: lea    rdx,[rip+0x811e32]        # 0x141604394 ; literal=", "
0x00df2562: jmp    0x140df2571
0x00df2564: cmp    r13d,0x2
0x00df2568: jne    0x140df2579
0x00df256a: lea    rdx,[rip+0x811e1b]        # 0x14160438c ; literal=" and "
0x00df2571: mov    rcx,rdi
0x00df2574: call   0x140070b90
0x00df2579: dec    r13d
0x00df257c: mov    QWORD PTR [rbp-0x40],r13
0x00df2580: lea    rcx,[rbp+0x0]
0x00df2584: call   0x140070980
0x00df2589: lea    rcx,[rsp+0x68]
0x00df258e: call   0x140070980
0x00df2593: lea    rcx,[rbp-0x8]
0x00df2597: call   0x140070980
0x00df259c: lea    r8,[rbp-0x20]
0x00df25a0: lea    rdx,[rsp+0x4a]
0x00df25a5: lea    rcx,[rbp+0x0]
0x00df25a9: call   0x140070450
0x00df25ae: xor    edx,edx
0x00df25b0: movzx  ecx,BYTE PTR [rax]
0x00df25b3: call   0x140066de0
0x00df25b8: test   al,al
0x00df25ba: jne    0x140df1f22
0x00df25c0: movzx  ebx,BYTE PTR [rsp+0x31]
0x00df25c5: mov    r12,QWORD PTR [rbp-0x50]
0x00df25c9: lea    rdx,[rip+0x826fc8]        # 0x141619598 ; literal=".  "
0x00df25d0: mov    rcx,rdi
0x00df25d3: call   0x140070b90
0x00df25d8: mov    esi,DWORD PTR [rsp+0x50]
0x00df25dc: mov    r14d,DWORD PTR [rbp-0x48]
0x00df25e0: cmp    esi,0xffffffff
0x00df25e3: jne    0x140df25ee
0x00df25e5: cmp    r14d,esi
0x00df25e8: je     0x140df2833
0x00df25ee: movzx  r13d,BYTE PTR [rsp+0x32]
0x00df25f4: mov    rcx,rdi
0x00df25f7: test   r13b,r13b
0x00df25fa: je     0x140df2620
0x00df25fc: cmp    DWORD PTR [r12+0x10],0x2
0x00df2602: jl     0x140df2612
0x00df2604: lea    rdx,[rip+0x94936d]        # 0x14173b978 ; literal="Each passage"
0x00df260b: call   0x140070b90
0x00df2610: jmp    0x140df2637
0x00df2612: lea    rdx,[rip+0x94936f]        # 0x14173b988 ; literal="The passage"
0x00df2619: call   0x140070b90
0x00df261e: jmp    0x140df2637
0x00df2620: lea    rdx,[rbp+0x1b0]
0x00df2627: call   0x1400bb340
0x00df262c: mov    BYTE PTR [rsp+0x32],0x1
0x00df2631: movzx  r13d,BYTE PTR [rsp+0x32]
0x00df2637: cmp    esi,0xffffffff
0x00df263a: je     0x140df27cc
0x00df2640: lea    rdx,[rip+0x898135]        # 0x14168a77c ; literal=" has "
0x00df2647: mov    rcx,rdi
0x00df264a: call   0x140070b90
0x00df264f: cmp    r14d,0xffffffff
0x00df2653: je     0x140df277e
0x00df2659: cmp    esi,r14d
0x00df265c: jne    0x140df26dd
0x00df265e: test   esi,esi
0x00df2660: je     0x140df26c2
0x00df2662: sub    esi,0x1
0x00df2665: je     0x140df26a7
0x00df2667: sub    esi,0x1
0x00df266a: je     0x140df268c
0x00df266c: cmp    esi,0x1
0x00df266f: jne    0x140df26d1
0x00df2671: lea    rdx,[rip+0x948920]        # 0x14173af98 ; literal="phrases of varied length"
0x00df2678: mov    rcx,rdi
0x00df267b: call   0x140070b90
0x00df2680: lea    rdx,[rip+0x94a399]        # 0x14173ca20 ; literal=" in the melody and counterpoint"
0x00df2687: jmp    0x140df2762
0x00df268c: lea    rdx,[rip+0x9488f5]        # 0x14173af88 ; literal="long phrases"
0x00df2693: mov    rcx,rdi
0x00df2696: call   0x140070b90
0x00df269b: lea    rdx,[rip+0x94a37e]        # 0x14173ca20 ; literal=" in the melody and counterpoint"
0x00df26a2: jmp    0x140df2762
0x00df26a7: lea    rdx,[rip+0x9488c2]        # 0x14173af70 ; literal="mid-length phrases"
0x00df26ae: mov    rcx,rdi
0x00df26b1: call   0x140070b90
0x00df26b6: lea    rdx,[rip+0x94a363]        # 0x14173ca20 ; literal=" in the melody and counterpoint"
0x00df26bd: jmp    0x140df2762
0x00df26c2: lea    rdx,[rip+0x948897]        # 0x14173af60 ; literal="short phrases"
0x00df26c9: mov    rcx,rdi
0x00df26cc: call   0x140070b90
0x00df26d1: lea    rdx,[rip+0x94a348]        # 0x14173ca20 ; literal=" in the melody and counterpoint"
0x00df26d8: jmp    0x140df2762
0x00df26dd: test   esi,esi
0x00df26df: je     0x140df270b
0x00df26e1: sub    esi,0x1
0x00df26e4: je     0x140df2702
0x00df26e6: sub    esi,0x1
0x00df26e9: je     0x140df26f9
0x00df26eb: cmp    esi,0x1
0x00df26ee: jne    0x140df271a
0x00df26f0: lea    rdx,[rip+0x9488a1]        # 0x14173af98 ; literal="phrases of varied length"
0x00df26f7: jmp    0x140df2712
0x00df26f9: lea    rdx,[rip+0x948888]        # 0x14173af88 ; literal="long phrases"
0x00df2700: jmp    0x140df2712
0x00df2702: lea    rdx,[rip+0x948867]        # 0x14173af70 ; literal="mid-length phrases"
0x00df2709: jmp    0x140df2712
0x00df270b: lea    rdx,[rip+0x94884e]        # 0x14173af60 ; literal="short phrases"
0x00df2712: mov    rcx,rdi
0x00df2715: call   0x140070b90
0x00df271a: lea    rdx,[rip+0x94a1ff]        # 0x14173c920 ; literal=" in the melody, while the counterpoint has "
0x00df2721: mov    rcx,rdi
0x00df2724: call   0x140070b90
0x00df2729: test   r14d,r14d
0x00df272c: je     0x140df275b
0x00df272e: sub    r14d,0x1
0x00df2732: je     0x140df2752
0x00df2734: sub    r14d,0x1
0x00df2738: je     0x140df2749
0x00df273a: cmp    r14d,0x1
0x00df273e: jne    0x140df276a
0x00df2740: lea    rdx,[rip+0x948851]        # 0x14173af98 ; literal="phrases of varied length"
0x00df2747: jmp    0x140df2762
0x00df2749: lea    rdx,[rip+0x948838]        # 0x14173af88 ; literal="long phrases"
0x00df2750: jmp    0x140df2762
0x00df2752: lea    rdx,[rip+0x948817]        # 0x14173af70 ; literal="mid-length phrases"
0x00df2759: jmp    0x140df2762
0x00df275b: lea    rdx,[rip+0x9487fe]        # 0x14173af60 ; literal="short phrases"
0x00df2762: mov    rcx,rdi
0x00df2765: call   0x140070b90
0x00df276a: lea    rdx,[rip+0x826e27]        # 0x141619598 ; literal=".  "
0x00df2771: mov    rcx,rdi
0x00df2774: call   0x140070b90
0x00df2779: jmp    0x140df2839
0x00df277e: test   esi,esi
0x00df2780: je     0x140df27ac
0x00df2782: sub    esi,0x1
0x00df2785: je     0x140df27a3
0x00df2787: sub    esi,0x1
0x00df278a: je     0x140df279a
0x00df278c: cmp    esi,0x1
0x00df278f: jne    0x140df27bb
0x00df2791: lea    rdx,[rip+0x948800]        # 0x14173af98 ; literal="phrases of varied length"
0x00df2798: jmp    0x140df27b3
0x00df279a: lea    rdx,[rip+0x9487e7]        # 0x14173af88 ; literal="long phrases"
0x00df27a1: jmp    0x140df27b3
0x00df27a3: lea    rdx,[rip+0x9487c6]        # 0x14173af70 ; literal="mid-length phrases"
0x00df27aa: jmp    0x140df27b3
0x00df27ac: lea    rdx,[rip+0x9487ad]        # 0x14173af60 ; literal="short phrases"
0x00df27b3: mov    rcx,rdi
0x00df27b6: call   0x140070b90
0x00df27bb: lea    rdx,[rip+0x94a18e]        # 0x14173c950 ; literal=" in the melody.  "
0x00df27c2: mov    rcx,rdi
0x00df27c5: call   0x140070b90
0x00df27ca: jmp    0x140df2839
0x00df27cc: cmp    r14d,0xffffffff
0x00df27d0: je     0x140df2839
0x00df27d2: lea    rdx,[rip+0x897fa3]        # 0x14168a77c ; literal=" has "
0x00df27d9: mov    rcx,rdi
0x00df27dc: call   0x140070b90
0x00df27e1: test   r14d,r14d
0x00df27e4: je     0x140df2813
0x00df27e6: sub    r14d,0x1
0x00df27ea: je     0x140df280a
0x00df27ec: sub    r14d,0x1
0x00df27f0: je     0x140df2801
0x00df27f2: cmp    r14d,0x1
0x00df27f6: jne    0x140df2822
0x00df27f8: lea    rdx,[rip+0x948799]        # 0x14173af98 ; literal="phrases of varied length"
0x00df27ff: jmp    0x140df281a
0x00df2801: lea    rdx,[rip+0x948780]        # 0x14173af88 ; literal="long phrases"
0x00df2808: jmp    0x140df281a
0x00df280a: lea    rdx,[rip+0x94875f]        # 0x14173af70 ; literal="mid-length phrases"
0x00df2811: jmp    0x140df281a
0x00df2813: lea    rdx,[rip+0x948746]        # 0x14173af60 ; literal="short phrases"
0x00df281a: mov    rcx,rdi
0x00df281d: call   0x140070b90
0x00df2822: lea    rdx,[rip+0x94a13f]        # 0x14173c968 ; literal=" in the counterpoint melody.  "
0x00df2829: mov    rcx,rdi
0x00df282c: call   0x140070b90
0x00df2831: jmp    0x140df2839
0x00df2833: movzx  r13d,BYTE PTR [rsp+0x32]
0x00df2839: mov    ecx,DWORD PTR [r12+0xb8]
0x00df2841: test   ecx,ecx
0x00df2843: je     0x140df287d
0x00df2845: sub    ecx,0x1
0x00df2848: je     0x140df2874
0x00df284a: sub    ecx,0x1
0x00df284d: je     0x140df286b
0x00df284f: sub    ecx,0x1
0x00df2852: je     0x140df2862
0x00df2854: cmp    ecx,0x1
0x00df2857: jne    0x140df288c
0x00df2859: lea    rdx,[rip+0x94a320]        # 0x14173cb80 ; literal="This passage is richly layered with full chords making use of the available range.  "
0x00df2860: jmp    0x140df2884
0x00df2862: lea    rdx,[rip+0x94a2c7]        # 0x14173cb30 ; literal="Chords are packed close together in dense clusters in this passage.  "
0x00df2869: jmp    0x140df2884
0x00df286b: lea    rdx,[rip+0x94a286]        # 0x14173caf8 ; literal="This passage typically has some sparse chords.  "
0x00df2872: jmp    0x140df2884
0x00df2874: lea    rdx,[rip+0x94a23d]        # 0x14173cab8 ; literal="This passage features only melodic tones and intervals.  "
0x00df287b: jmp    0x140df2884
0x00df287d: lea    rdx,[rip+0x94a104]        # 0x14173c988 ; literal="Only one pitch is ever played at a time in this passage.  "
0x00df2884: mov    rcx,rdi
0x00df2887: call   0x140070b90
0x00df288c: movzx  r14d,BYTE PTR [rsp+0x33]
0x00df2892: movzx  r15d,BYTE PTR [rsp+0x31]
0x00df2898: cmp    DWORD PTR [r12+0x1c],0xffffffff
0x00df289e: jne    0x140df28b6
0x00df28a0: test   r14b,r14b
0x00df28a3: je     0x140df28b6
0x00df28a5: cmp    DWORD PTR [r12+0x24],0xffffffff
0x00df28ab: jne    0x140df28b6
0x00df28ad: test   r15b,r15b
0x00df28b0: jne    0x140df2a7e
0x00df28b6: mov    rcx,rdi
0x00df28b9: test   r13b,r13b
0x00df28bc: je     0x140df28e2
0x00df28be: cmp    DWORD PTR [r12+0x10],0x2
0x00df28c4: jl     0x140df28d4
0x00df28c6: lea    rdx,[rip+0x9490ab]        # 0x14173b978 ; literal="Each passage"
0x00df28cd: call   0x140070b90
0x00df28d2: jmp    0x140df28f9
0x00df28d4: lea    rdx,[rip+0x9490ad]        # 0x14173b988 ; literal="The passage"
0x00df28db: call   0x140070b90
0x00df28e0: jmp    0x140df28f9
0x00df28e2: lea    rdx,[rbp+0x1b0]
0x00df28e9: call   0x1400bb340
0x00df28ee: mov    BYTE PTR [rsp+0x32],0x1
0x00df28f3: movzx  r13d,BYTE PTR [rsp+0x32]
0x00df28f9: lea    rdx,[rip+0x94a140]        # 0x14173ca40 ; literal=" is performed "
0x00df2900: mov    rcx,rdi
0x00df2903: call   0x140070b90
0x00df2908: mov    edx,DWORD PTR [r12+0x1c]
0x00df290d: cmp    edx,0xffffffff
0x00df2910: jne    0x140df2920
0x00df2912: test   r14b,r14b
0x00df2915: jne    0x140df298c
0x00df2917: lea    rdx,[rip+0x949102]        # 0x14173ba20 ; literal="without preference for a scale"
0x00df291e: jmp    0x140df2984
0x00df2920: lea    rcx,[rip+0x1717ab1]        # 0x14250a3d8
0x00df2927: call   0x140073ba0
0x00df292c: test   rax,rax
0x00df292f: je     0x140df298c
0x00df2931: cmp    DWORD PTR [r12+0x20],0x0
0x00df2937: jl     0x140df298c
0x00df2939: lea    rsi,[rax+0x90]
0x00df2940: mov    rcx,rsi
0x00df2943: call   0x140070480
0x00df2948: movsxd rdx,DWORD PTR [r12+0x20]
0x00df294d: cmp    rdx,rax
0x00df2950: jae    0x140df298c
0x00df2952: lea    rdx,[rip+0x94927f]        # 0x14173bbd8 ; literal="using the "
0x00df2959: mov    rcx,rdi
0x00df295c: call   0x140070b90
0x00df2961: movsxd rdx,DWORD PTR [r12+0x20]
0x00df2966: mov    rcx,rsi
0x00df2969: call   0x140070850
0x00df296e: mov    rdx,QWORD PTR [rax]
0x00df2971: add    rdx,0x8
0x00df2975: mov    rcx,rdi
0x00df2978: call   0x1400bb340
0x00df297d: lea    rdx,[rip+0x949260]        # 0x14173bbe4 ; literal=" scale"
0x00df2984: mov    rcx,rdi
0x00df2987: call   0x140070b90
0x00df298c: cmp    DWORD PTR [r12+0x24],0xffffffff
0x00df2992: jne    0x140df299d
0x00df2994: test   r15b,r15b
0x00df2997: jne    0x140df2a6f
0x00df299d: cmp    DWORD PTR [r12+0x1c],0xffffffff
0x00df29a3: jne    0x140df29b1
0x00df29a5: test   r14b,r14b
0x00df29a8: lea    rdx,[rip+0x815875]        # 0x141608224 ; literal="in "
0x00df29af: jne    0x140df29b8
0x00df29b1: lea    rdx,[rip+0x949238]        # 0x14173bbf0 ; literal=" and in "
0x00df29b8: mov    rcx,rdi
0x00df29bb: call   0x140070b90
0x00df29c0: cmp    DWORD PTR [r12+0x24],0xffffffff
0x00df29c6: jne    0x140df29dd
0x00df29c8: test   r15b,r15b
0x00df29cb: jne    0x140df2a6f
0x00df29d1: lea    rdx,[rip+0x949228]        # 0x14173bc00 ; literal="free rhythm"
0x00df29d8: jmp    0x140df2a67
0x00df29dd: lea    rdx,[rip+0x811720]        # 0x141604104 ; literal="the "
0x00df29e4: mov    rcx,rdi
0x00df29e7: call   0x140070b90
0x00df29ec: mov    edx,DWORD PTR [r12+0x24]
0x00df29f1: lea    rcx,[rip+0x1717a10]        # 0x14250a408
0x00df29f8: call   0x140073ba0
0x00df29fd: mov    r15,rax
0x00df2a00: test   rax,rax
0x00df2a03: je     0x140df2a60
0x00df2a05: cmp    DWORD PTR [r12+0x28],0x0
0x00df2a0b: jl     0x140df2a2e
0x00df2a0d: movsxd rsi,DWORD PTR [r12+0x28]
0x00df2a12: lea    rcx,[rax+0x20]
0x00df2a16: call   0x140070480
0x00df2a1b: cmp    rsi,rax
0x00df2a1e: jae    0x140df2a2e
0x00df2a20: mov    rdx,rsi
0x00df2a23: lea    rcx,[r15+0x20]
0x00df2a27: call   0x140070850
0x00df2a2c: jmp    0x140df2a55
0x00df2a2e: cmp    DWORD PTR [r12+0x2c],0x0
0x00df2a34: jl     0x140df2a60
0x00df2a36: movsxd rsi,DWORD PTR [r12+0x2c]
0x00df2a3b: lea    rcx,[r15+0x8]
0x00df2a3f: call   0x140070480
0x00df2a44: cmp    rsi,rax
0x00df2a47: jae    0x140df2a60
0x00df2a49: mov    rdx,rsi
0x00df2a4c: lea    rcx,[r15+0x8]
0x00df2a50: call   0x140070850
0x00df2a55: mov    rdx,QWORD PTR [rax]
0x00df2a58: mov    rcx,rdi
0x00df2a5b: call   0x1400bb340
0x00df2a60: lea    rdx,[rip+0x872d89]        # 0x1416657f0 ; literal=" rhythm"
0x00df2a67: mov    rcx,rdi
0x00df2a6a: call   0x140070b90
0x00df2a6f: lea    rdx,[rip+0x826b22]        # 0x141619598 ; literal=".  "
0x00df2a76: mov    rcx,rdi
0x00df2a79: call   0x140070b90
0x00df2a7e: cmp    DWORD PTR [r12+0xb4],0x0
0x00df2a87: je     0x140df2e11
0x00df2a8d: mov    rcx,rdi
0x00df2a90: test   r13b,r13b
0x00df2a93: je     0x140df2ab9
0x00df2a95: cmp    DWORD PTR [r12+0x10],0x2
0x00df2a9b: jl     0x140df2aab
0x00df2a9d: lea    rdx,[rip+0x948ed4]        # 0x14173b978 ; literal="Each passage"
0x00df2aa4: call   0x140070b90
0x00df2aa9: jmp    0x140df2aca
0x00df2aab: lea    rdx,[rip+0x948ed6]        # 0x14173b988 ; literal="The passage"
0x00df2ab2: call   0x140070b90
0x00df2ab7: jmp    0x140df2aca
0x00df2ab9: lea    rdx,[rbp+0x1b0]
0x00df2ac0: call   0x1400bb340
0x00df2ac5: mov    BYTE PTR [rsp+0x32],0x1
0x00df2aca: mov    rax,QWORD PTR [rbp-0x38]
0x00df2ace: mov    rcx,rdi
0x00df2ad1: test   BYTE PTR [rax+0x120],0x1
0x00df2ad8: lea    rdx,[rip+0x949f71]        # 0x14173ca50 ; literal=" should be composed and performed using "
0x00df2adf: jne    0x140df2ae8
0x00df2ae1: lea    rdx,[rip+0x949f98]        # 0x14173ca80 ; literal=" should be performed using "
0x00df2ae8: call   0x140070b90
0x00df2aed: xor    r9d,r9d
0x00df2af0: mov    r14d,r9d
0x00df2af3: mov    edx,r9d
0x00df2af6: mov    r8d,DWORD PTR [r12+0xb4]
0x00df2afe: mov    eax,DWORD PTR [rsp+0x38]
0x00df2b02: lea    r13,[rip+0xffffffffff20d4f7]        # 0x140000000
0x00df2b09: mov    r9d,0x1
0x00df2b0f: nop
0x00df2b10: cmp    edx,0xf
0x00df2b13: ja     0x140df2be7
0x00df2b19: movsxd rax,edx
0x00df2b1c: mov    ecx,DWORD PTR [r13+rax*4+0xdf4ff0]
0x00df2b24: add    rcx,r13
0x00df2b27: jmp    rcx
0x00df2b29: mov    eax,r9d
0x00df2b2c: mov    DWORD PTR [rsp+0x38],eax
0x00df2b30: jmp    0x140df2be7
0x00df2b35: mov    eax,0x2
0x00df2b3a: mov    DWORD PTR [rsp+0x38],eax
0x00df2b3e: jmp    0x140df2be7
0x00df2b43: mov    eax,0x4
0x00df2b48: mov    DWORD PTR [rsp+0x38],eax
0x00df2b4c: jmp    0x140df2be7
0x00df2b51: mov    eax,0x8
0x00df2b56: mov    DWORD PTR [rsp+0x38],eax
0x00df2b5a: jmp    0x140df2be7
0x00df2b5f: mov    eax,0x10
0x00df2b64: mov    DWORD PTR [rsp+0x38],eax
0x00df2b68: jmp    0x140df2be7
0x00df2b6a: mov    eax,0x80
0x00df2b6f: mov    DWORD PTR [rsp+0x38],eax
0x00df2b73: jmp    0x140df2be7
0x00df2b75: mov    eax,0x100
0x00df2b7a: mov    DWORD PTR [rsp+0x38],eax
0x00df2b7e: jmp    0x140df2be7
0x00df2b80: mov    eax,0x200
0x00df2b85: mov    DWORD PTR [rsp+0x38],eax
0x00df2b89: jmp    0x140df2be7
0x00df2b8b: mov    eax,0x400
0x00df2b90: mov    DWORD PTR [rsp+0x38],eax
0x00df2b94: jmp    0x140df2be7
0x00df2b96: mov    eax,0x800
0x00df2b9b: mov    DWORD PTR [rsp+0x38],eax
0x00df2b9f: jmp    0x140df2be7
0x00df2ba1: mov    eax,0x1000
0x00df2ba6: mov    DWORD PTR [rsp+0x38],eax
0x00df2baa: jmp    0x140df2be7
0x00df2bac: mov    eax,0x2000
0x00df2bb1: mov    DWORD PTR [rsp+0x38],eax
0x00df2bb5: jmp    0x140df2be7
0x00df2bb7: mov    eax,0x4000
0x00df2bbc: mov    DWORD PTR [rsp+0x38],eax
0x00df2bc0: jmp    0x140df2be7
0x00df2bc2: mov    eax,0x8000
0x00df2bc7: mov    DWORD PTR [rsp+0x38],eax
0x00df2bcb: jmp    0x140df2be7
0x00df2bcd: mov    eax,0x20
0x00df2bd2: mov    DWORD PTR [rsp+0x38],eax
0x00df2bd6: jmp    0x140df2be7
0x00df2bd8: mov    eax,0x40
0x00df2bdd: mov    DWORD PTR [rsp+0x38],eax
0x00df2be1: jmp    0x140df2be7
0x00df2be3: mov    eax,DWORD PTR [rsp+0x38]
0x00df2be7: test   r8d,eax
0x00df2bea: je     0x140df2bef
0x00df2bec: inc    r14d
0x00df2bef: inc    edx
0x00df2bf1: cmp    edx,0x10
0x00df2bf4: jl     0x140df2b10
0x00df2bfa: xor    r9d,r9d
0x00df2bfd: mov    esi,r9d
0x00df2c00: movzx  r13d,BYTE PTR [rsp+0x32]
0x00df2c06: mov    ebx,DWORD PTR [rsp+0x3c]
0x00df2c0a: nop    WORD PTR [rax+rax*1+0x0]
0x00df2c10: lea    rdx,[rip+0xffffffffff20d3e9]        # 0x140000000
0x00df2c17: cmp    esi,0xf
0x00df2c1a: ja     0x140df2c99
0x00df2c1c: movsxd rax,esi
0x00df2c1f: mov    ecx,DWORD PTR [rdx+rax*4+0xdf5030]
0x00df2c26: add    rcx,rdx
0x00df2c29: jmp    rcx
0x00df2c2b: mov    ebx,0x1
0x00df2c30: jmp    0x140df2c99
0x00df2c32: mov    ebx,0x2
0x00df2c37: jmp    0x140df2c99
0x00df2c39: mov    ebx,0x4
0x00df2c3e: jmp    0x140df2c99
0x00df2c40: mov    ebx,0x8
0x00df2c45: jmp    0x140df2c99
0x00df2c47: mov    ebx,0x10
0x00df2c4c: jmp    0x140df2c99
0x00df2c4e: mov    ebx,0x80
0x00df2c53: jmp    0x140df2c99
0x00df2c55: mov    ebx,0x100
0x00df2c5a: jmp    0x140df2c99
0x00df2c5c: mov    ebx,0x200
0x00df2c61: jmp    0x140df2c99
0x00df2c63: mov    ebx,0x400
0x00df2c68: jmp    0x140df2c99
0x00df2c6a: mov    ebx,0x800
0x00df2c6f: jmp    0x140df2c99
0x00df2c71: mov    ebx,0x1000
0x00df2c76: jmp    0x140df2c99
0x00df2c78: mov    ebx,0x2000
0x00df2c7d: jmp    0x140df2c99
0x00df2c7f: mov    ebx,0x4000
0x00df2c84: jmp    0x140df2c99
0x00df2c86: mov    ebx,0x8000
0x00df2c8b: jmp    0x140df2c99
0x00df2c8d: mov    ebx,0x20
0x00df2c92: jmp    0x140df2c99
0x00df2c94: mov    ebx,0x40
0x00df2c99: test   DWORD PTR [r12+0xb4],ebx
0x00df2ca1: je     0x140df2de8
0x00df2ca7: cmp    ebx,0x100
0x00df2cad: ja     0x140df2d42
0x00df2cb3: je     0x140df2d39
0x00df2cb9: lea    eax,[rbx-0x1]
0x00df2cbc: cmp    eax,0x7f
0x00df2cbf: ja     0x140df2dc1
0x00df2cc5: movzx  eax,BYTE PTR [rdx+rax*1+0xdf5094]
0x00df2ccd: mov    ecx,DWORD PTR [rdx+rax*4+0xdf5070]
0x00df2cd4: add    rcx,rdx
0x00df2cd7: jmp    rcx
0x00df2cd9: lea    rdx,[rip+0x949128]        # 0x14173be08 ; literal="glides"
0x00df2ce0: jmp    0x140df2db9
0x00df2ce5: lea    rdx,[rip+0x949124]        # 0x14173be10 ; literal="grace notes"
0x00df2cec: jmp    0x140df2db9
0x00df2cf1: lea    rdx,[rip+0x949190]        # 0x14173be88 ; literal="mordents"
0x00df2cf8: jmp    0x140df2db9
0x00df2cfd: lea    rdx,[rip+0x949190]        # 0x14173be94 ; literal="trills"
0x00df2d04: jmp    0x140df2db9
0x00df2d09: lea    rdx,[rip+0x949190]        # 0x14173bea0 ; literal="rapid runs"
0x00df2d10: jmp    0x140df2db9
0x00df2d15: lea    rdx,[rip+0x949d84]        # 0x14173caa0 ; literal="locally improvisation"
0x00df2d1c: jmp    0x140df2db9
0x00df2d21: lea    rdx,[rip+0x949ed0]        # 0x14173cbf8 ; literal="melismatic phrasing"
0x00df2d28: jmp    0x140df2db9
0x00df2d2d: lea    rdx,[rip+0x949edc]        # 0x14173cc10 ; literal="syllabic phrasing"
0x00df2d34: jmp    0x140df2db9
0x00df2d39: lea    rdx,[rip+0x949ef8]        # 0x14173cc38 ; literal="syncopation"
0x00df2d40: jmp    0x140df2db9
0x00df2d42: cmp    ebx,0x1000
0x00df2d48: ja     0x140df2d88
0x00df2d4a: je     0x140df2d7f
0x00df2d4c: cmp    ebx,0x200
0x00df2d52: je     0x140df2d76
0x00df2d54: cmp    ebx,0x400
0x00df2d5a: je     0x140df2d6d
0x00df2d5c: cmp    ebx,0x800
0x00df2d62: jne    0x140df2dc1
0x00df2d64: lea    rdx,[rip+0x949f0d]        # 0x14173cc78 ; literal="frequent modulation"
0x00df2d6b: jmp    0x140df2db9
0x00df2d6d: lea    rdx,[rip+0x949edc]        # 0x14173cc50 ; literal="alternation between tension and repose"
0x00df2d74: jmp    0x140df2db9
0x00df2d76: lea    rdx,[rip+0x949ec7]        # 0x14173cc44 ; literal="fills"
0x00df2d7d: jmp    0x140df2db9
0x00df2d7f: lea    rdx,[rip+0x94912a]        # 0x14173beb0 ; literal="arpeggios"
0x00df2d86: jmp    0x140df2db9
0x00df2d88: cmp    ebx,0x2000
0x00df2d8e: je     0x140df2db2
0x00df2d90: cmp    ebx,0x4000
0x00df2d96: je     0x140df2da9
0x00df2d98: cmp    ebx,0x8000
0x00df2d9e: jne    0x140df2dc1
0x00df2da0: lea    rdx,[rip+0x949e31]        # 0x14173cbd8 ; literal="free adjustment of the beats"
0x00df2da7: jmp    0x140df2db9
0x00df2da9: lea    rdx,[rip+0x9490b4]        # 0x14173be64 ; literal="legato"
0x00df2db0: jmp    0x140df2db9
0x00df2db2: lea    rdx,[rip+0x94909f]        # 0x14173be58 ; literal="staccato"
0x00df2db9: mov    rcx,rdi
0x00df2dbc: call   0x140070b90
0x00df2dc1: cmp    r14d,0x3
0x00df2dc5: jl     0x140df2dd0
0x00df2dc7: lea    rdx,[rip+0x8115c6]        # 0x141604394 ; literal=", "
0x00df2dce: jmp    0x140df2ddd
0x00df2dd0: cmp    r14d,0x2
0x00df2dd4: jne    0x140df2de5
0x00df2dd6: lea    rdx,[rip+0x8115af]        # 0x14160438c ; literal=" and "
0x00df2ddd: mov    rcx,rdi
0x00df2de0: call   0x140070b90
0x00df2de5: dec    r14d
0x00df2de8: inc    esi
0x00df2dea: cmp    esi,0x10
0x00df2ded: jl     0x140df2c10
0x00df2df3: mov    DWORD PTR [rsp+0x3c],ebx
0x00df2df7: mov    r8d,0x3
0x00df2dfd: lea    rdx,[rip+0x826794]        # 0x141619598 ; literal=".  "
0x00df2e04: mov    rcx,rdi
0x00df2e07: call   0x140071040
0x00df2e0c: movzx  ebx,BYTE PTR [rsp+0x31]
0x00df2e11: mov    rax,QWORD PTR [r12+0xc8]
0x00df2e19: sub    rax,QWORD PTR [r12+0xc0]
0x00df2e21: sar    rax,0x3
0x00df2e25: test   rax,rax
0x00df2e28: je     0x140df338b
0x00df2e2e: mov    rcx,rdi
0x00df2e31: test   r13b,r13b
0x00df2e34: je     0x140df2e5a
0x00df2e36: cmp    DWORD PTR [r12+0x10],0x2
0x00df2e3c: jl     0x140df2e4c
0x00df2e3e: lea    rdx,[rip+0x948b33]        # 0x14173b978 ; literal="Each passage"
0x00df2e45: call   0x140070b90
0x00df2e4a: jmp    0x140df2e66
0x00df2e4c: lea    rdx,[rip+0x948b35]        # 0x14173b988 ; literal="The passage"
0x00df2e53: call   0x140070b90
0x00df2e58: jmp    0x140df2e66
0x00df2e5a: lea    rdx,[rbp+0x1b0]
0x00df2e61: call   0x1400bb340
0x00df2e66: lea    rdx,[rip+0x949dbb]        # 0x14173cc28 ; literal=" should "
0x00df2e6d: mov    rcx,rdi
0x00df2e70: call   0x140070b90
0x00df2e75: lea    rcx,[r12+0xc0]
0x00df2e7d: call   0x140070480
0x00df2e82: mov    r15,rax
0x00df2e85: mov    QWORD PTR [rbp-0x50],rax
0x00df2e89: lea    rdx,[rbp-0x58]
0x00df2e8d: lea    rcx,[r12+0xc0]
0x00df2e95: call   0x140070870
0x00df2e9a: lea    rdx,[rbp+0x40]
0x00df2e9e: lea    rcx,[r12+0xc0]
0x00df2ea6: call   0x140070860
0x00df2eab: mov    r13d,0x1
0x00df2eb1: mov    rcx,QWORD PTR [rbp-0x58]
0x00df2eb5: cmp    rcx,QWORD PTR [rbp+0x40]
0x00df2eb9: je     0x140df337b
0x00df2ebf: mov    eax,r13d
0x00df2ec2: mov    r14d,0xff
0x00df2ec8: cmovb  eax,r14d
0x00df2ecc: test   al,al
0x00df2ece: jns    0x140df337b
0x00df2ed4: lea    rcx,[rbp-0x58]
0x00df2ed8: call   0x140070440
0x00df2edd: mov    rcx,QWORD PTR [rax]
0x00df2ee0: mov    edx,DWORD PTR [rcx+0x4]
0x00df2ee3: test   edx,edx
0x00df2ee5: je     0x140df2f03
0x00df2ee7: sub    edx,0x1
0x00df2eea: je     0x140df2efa
0x00df2eec: cmp    edx,0x1
0x00df2eef: jne    0x140df2f12
0x00df2ef1: lea    rdx,[rip+0x948ee0]        # 0x14173bdd8 ; literal="sometimes"
0x00df2ef8: jmp    0x140df2f0a
0x00df2efa: lea    rdx,[rip+0x948ecb]        # 0x14173bdcc ; literal="often"
0x00df2f01: jmp    0x140df2f0a
0x00df2f03: lea    rdx,[rip+0x948eba]        # 0x14173bdc4 ; literal="always"
0x00df2f0a: mov    rcx,rdi
0x00df2f0d: call   0x140070b90
0x00df2f12: lea    rdx,[rip+0x948e5f]        # 0x14173bd78 ; literal=" include a "
0x00df2f19: mov    rcx,rdi
0x00df2f1c: call   0x140070b90
0x00df2f21: lea    rcx,[rbp-0x58]
0x00df2f25: call   0x140070440
0x00df2f2a: mov    rcx,QWORD PTR [rax]
0x00df2f2d: mov    edx,DWORD PTR [rcx]
0x00df2f2f: test   edx,edx
0x00df2f31: je     0x140df2f5d
0x00df2f33: sub    edx,0x1
0x00df2f36: je     0x140df2f54
0x00df2f38: sub    edx,0x1
0x00df2f3b: je     0x140df2f4b
0x00df2f3d: cmp    edx,0x1
0x00df2f40: jne    0x140df2f6c
0x00df2f42: lea    rdx,[rip+0x948e57]        # 0x14173bda0 ; literal="falling-rising"
0x00df2f49: jmp    0x140df2f64
0x00df2f4b: lea    rdx,[rip+0x948e3e]        # 0x14173bd90 ; literal="rising-falling"
0x00df2f52: jmp    0x140df2f64
0x00df2f54: lea    rdx,[rip+0x82681d]        # 0x141619778 ; literal="falling"
0x00df2f5b: jmp    0x140df2f64
0x00df2f5d: lea    rdx,[rip+0x948e20]        # 0x14173bd84 ; literal="rising"
0x00df2f64: mov    rcx,rdi
0x00df2f67: call   0x140070b90
0x00df2f6c: lea    rdx,[rip+0x948ead]        # 0x14173be20 ; literal=" melody pattern"
0x00df2f73: mov    rcx,rdi
0x00df2f76: call   0x140070b90
0x00df2f7b: lea    rcx,[rbp-0x58]
0x00df2f7f: call   0x140070440
0x00df2f84: mov    rcx,QWORD PTR [rax]
0x00df2f87: add    rcx,0x8
0x00df2f8b: call   0x140070480
0x00df2f90: test   rax,rax
0x00df2f93: je     0x140df3153
0x00df2f99: lea    rdx,[rip+0x8168a8]        # 0x141609848 ; literal=" with "
0x00df2fa0: mov    rcx,rdi
0x00df2fa3: call   0x140070b90
0x00df2fa8: lea    rcx,[rbp-0x58]
0x00df2fac: call   0x140070440
0x00df2fb1: mov    rcx,QWORD PTR [rax]
0x00df2fb4: add    rcx,0x8
0x00df2fb8: call   0x140070480
0x00df2fbd: mov    rsi,rax
0x00df2fc0: lea    rcx,[rbp-0x58]
0x00df2fc4: call   0x140070440
0x00df2fc9: mov    rcx,QWORD PTR [rax]
0x00df2fcc: add    rcx,0x8
0x00df2fd0: lea    rdx,[rsp+0x58]
0x00df2fd5: call   0x140070870
0x00df2fda: lea    rcx,[rbp-0x58]
0x00df2fde: call   0x140070440
0x00df2fe3: mov    rcx,QWORD PTR [rax]
0x00df2fe6: add    rcx,0x8
0x00df2fea: lea    rdx,[rbp-0x18]
0x00df2fee: call   0x140070860
0x00df2ff3: mov    rax,QWORD PTR [rsp+0x58]
0x00df2ff8: cmp    rax,QWORD PTR [rbp-0x18]
0x00df2ffc: jne    0x140df3002
0x00df2ffe: xor    dl,dl
0x00df3000: jmp    0x140df3009
0x00df3002: mov    edx,r13d
0x00df3005: cmovb  edx,r14d
0x00df3009: test   dl,dl
0x00df300b: jns    0x140df3153
0x00df3011: lea    rcx,[rsp+0x58]
0x00df3016: call   0x140070440
0x00df301b: mov    rcx,QWORD PTR [rax]
0x00df301e: test   BYTE PTR [rcx+0x4],0x2
0x00df3022: je     0x140df3033
0x00df3024: lea    rdx,[rip+0x8b21a5]        # 0x1416a51d0 ; literal="flattened"
0x00df302b: mov    rcx,rdi
0x00df302e: call   0x140070b90
0x00df3033: lea    rcx,[rsp+0x58]
0x00df3038: call   0x140070440
0x00df303d: mov    rcx,QWORD PTR [rax]
0x00df3040: test   BYTE PTR [rcx+0x4],0x4
0x00df3044: je     0x140df3055
0x00df3046: lea    rdx,[rip+0x948de3]        # 0x14173be30 ; literal="sharpened"
0x00df304d: mov    rcx,rdi
0x00df3050: call   0x140070b90
0x00df3055: lea    rdx,[rip+0x810994]        # 0x1416039f0 ; literal=" "
0x00df305c: mov    rcx,rdi
0x00df305f: call   0x140070b90
0x00df3064: nop
0x00df3065: movzx  edx,bl
0x00df3068: lea    rcx,[rbp+0x1d0]
0x00df306f: call   0x1400697c0
0x00df3074: lea    rcx,[rbp+0x1d0]
0x00df307b: call   0x1400711b0
0x00df3080: nop
0x00df3081: mov    rax,QWORD PTR [rsp+0x58]
0x00df3086: mov    rcx,QWORD PTR [rax]
0x00df3089: xor    r8d,r8d
0x00df308c: lea    rdx,[rbp+0x1d0]
0x00df3093: mov    ecx,DWORD PTR [rcx]
0x00df3095: call   0x140548050
0x00df309a: lea    rcx,[rbp+0x1d0]
0x00df30a1: call   0x140546560
0x00df30a6: lea    rdx,[rbp+0x1d0]
0x00df30ad: mov    rcx,rdi
0x00df30b0: call   0x1400bb340
0x00df30b5: lea    rdx,[rip+0x948d84]        # 0x14173be40 ; literal=" degree"
0x00df30bc: mov    rcx,rdi
0x00df30bf: call   0x140070b90
0x00df30c4: lea    rcx,[rbp-0x58]
0x00df30c8: call   0x140070440
0x00df30cd: mov    rcx,QWORD PTR [rax]
0x00df30d0: cmp    DWORD PTR [rcx],0x2
0x00df30d3: je     0x140df30e6
0x00df30d5: lea    rcx,[rbp-0x58]
0x00df30d9: call   0x140070440
0x00df30de: mov    rcx,QWORD PTR [rax]
0x00df30e1: cmp    DWORD PTR [rcx],0x3
0x00df30e4: jne    0x140df310f
0x00df30e6: lea    rcx,[rsp+0x58]
0x00df30eb: call   0x140070440
0x00df30f0: mov    rcx,QWORD PTR [rax]
0x00df30f3: test   BYTE PTR [rcx+0x4],0x1
0x00df30f7: mov    rcx,rdi
0x00df30fa: lea    rdx,[rip+0x948d47]        # 0x14173be48 ; literal=" on the rise"
0x00df3101: jne    0x140df310a
0x00df3103: lea    rdx,[rip+0x948cde]        # 0x14173bde8 ; literal=" on the fall"
0x00df310a: call   0x140070b90
0x00df310f: cmp    esi,0x3
0x00df3112: jl     0x140df311d
0x00df3114: lea    rdx,[rip+0x811279]        # 0x141604394 ; literal=", "
0x00df311b: jmp    0x140df3129
0x00df311d: cmp    esi,0x2
0x00df3120: jne    0x140df3132
0x00df3122: lea    rdx,[rip+0x811263]        # 0x14160438c ; literal=" and "
0x00df3129: mov    rcx,rdi
0x00df312c: call   0x140070b90
0x00df3131: nop
0x00df3132: lea    rcx,[rbp+0x1d0]
0x00df3139: call   0x140069460
0x00df313e: mov    rax,QWORD PTR [rsp+0x58]
0x00df3143: add    rax,0x8
0x00df3147: mov    QWORD PTR [rsp+0x58],rax
0x00df314c: dec    esi
0x00df314e: jmp    0x140df2ff8
0x00df3153: mov    rax,QWORD PTR [rbp-0x58]
0x00df3157: mov    rcx,QWORD PTR [rax]
0x00df315a: cmp    DWORD PTR [rcx+0x20],0x0
0x00df315e: je     0x140df3342
0x00df3164: lea    rcx,[rbp-0x58]
0x00df3168: call   0x140070440
0x00df316d: mov    rcx,QWORD PTR [rax]
0x00df3170: add    rcx,0x8
0x00df3174: call   0x140070480
0x00df3179: mov    rcx,rdi
0x00df317c: test   rax,rax
0x00df317f: lea    rdx,[rip+0x948c72]        # 0x14173bdf8 ; literal=" as well as "
0x00df3186: jne    0x140df318f
0x00df3188: lea    rdx,[rip+0x8166b9]        # 0x141609848 ; literal=" with "
0x00df318f: call   0x140070b90
0x00df3194: xor    r12d,r12d
0x00df3197: mov    r14d,r12d
0x00df319a: mov    esi,r12d
0x00df319d: mov    edi,DWORD PTR [rsp+0x64]
0x00df31a1: lea    r15,[rip+0xffffffffff20ce58]        # 0x140000000
0x00df31a8: cmp    esi,0x7
0x00df31ab: ja     0x140df31f1
0x00df31ad: movsxd rax,esi
0x00df31b0: mov    ecx,DWORD PTR [r15+rax*4+0xdf5114]
0x00df31b8: add    rcx,r15
0x00df31bb: jmp    rcx
0x00df31bd: mov    edi,r13d
0x00df31c0: jmp    0x140df31f1
0x00df31c2: mov    edi,0x2
0x00df31c7: jmp    0x140df31f1
0x00df31c9: mov    edi,0x4
0x00df31ce: jmp    0x140df31f1
0x00df31d0: mov    edi,0x8
0x00df31d5: jmp    0x140df31f1
0x00df31d7: mov    edi,0x10
0x00df31dc: jmp    0x140df31f1
0x00df31de: mov    edi,0x1000
0x00df31e3: jmp    0x140df31f1
0x00df31e5: mov    edi,0x2000
0x00df31ea: jmp    0x140df31f1
0x00df31ec: mov    edi,0x4000
0x00df31f1: lea    rcx,[rbp-0x58]
0x00df31f5: call   0x140070440
0x00df31fa: mov    rcx,QWORD PTR [rax]
0x00df31fd: test   DWORD PTR [rcx+0x20],edi
0x00df3200: je     0x140df3205
0x00df3202: inc    r14d
0x00df3205: inc    esi
0x00df3207: cmp    esi,0x8
0x00df320a: jl     0x140df31a8
0x00df320c: mov    DWORD PTR [rsp+0x64],edi
0x00df3210: mov    esi,r12d
0x00df3213: mov    rdi,QWORD PTR [rbp-0x28]
0x00df3217: mov    r15,QWORD PTR [rbp-0x50]
0x00df321b: mov    ebx,DWORD PTR [rsp+0x60]
0x00df321f: nop
0x00df3220: cmp    esi,0x7
0x00df3223: ja     0x140df326f
0x00df3225: movsxd rax,esi
0x00df3228: lea    rdx,[rip+0xffffffffff20cdd1]        # 0x140000000
0x00df322f: mov    ecx,DWORD PTR [rdx+rax*4+0xdf5134]
0x00df3236: add    rcx,rdx
0x00df3239: jmp    rcx
0x00df323b: mov    ebx,r13d
0x00df323e: jmp    0x140df326f
0x00df3240: mov    ebx,0x2
0x00df3245: jmp    0x140df326f
0x00df3247: mov    ebx,0x4
0x00df324c: jmp    0x140df326f
0x00df324e: mov    ebx,0x8
0x00df3253: jmp    0x140df326f
0x00df3255: mov    ebx,0x10
0x00df325a: jmp    0x140df326f
0x00df325c: mov    ebx,0x1000
0x00df3261: jmp    0x140df326f
0x00df3263: mov    ebx,0x2000
0x00df3268: jmp    0x140df326f
0x00df326a: mov    ebx,0x4000
0x00df326f: lea    rcx,[rbp-0x58]
0x00df3273: call   0x140070440
0x00df3278: mov    rcx,QWORD PTR [rax]
0x00df327b: test   DWORD PTR [rcx+0x20],ebx
0x00df327e: je     0x140df332e
0x00df3284: cmp    ebx,0x10
0x00df3287: ja     0x140df32ce
0x00df3289: je     0x140df32c5
0x00df328b: mov    eax,ebx
0x00df328d: sub    eax,0x1
0x00df3290: je     0x140df32bc
0x00df3292: sub    eax,0x1
0x00df3295: je     0x140df32b3
0x00df3297: sub    eax,0x2
0x00df329a: je     0x140df32aa
0x00df329c: cmp    eax,0x4
0x00df329f: jne    0x140df3307
0x00df32a1: lea    rdx,[rip+0x948bec]        # 0x14173be94 ; literal="trills"
0x00df32a8: jmp    0x140df32ff
0x00df32aa: lea    rdx,[rip+0x948bd7]        # 0x14173be88 ; literal="mordents"
0x00df32b1: jmp    0x140df32ff
0x00df32b3: lea    rdx,[rip+0x948b56]        # 0x14173be10 ; literal="grace notes"
0x00df32ba: jmp    0x140df32ff
0x00df32bc: lea    rdx,[rip+0x948b45]        # 0x14173be08 ; literal="glides"
0x00df32c3: jmp    0x140df32ff
0x00df32c5: lea    rdx,[rip+0x948bd4]        # 0x14173bea0 ; literal="rapid runs"
0x00df32cc: jmp    0x140df32ff
0x00df32ce: cmp    ebx,0x1000
0x00df32d4: je     0x140df32f8
0x00df32d6: cmp    ebx,0x2000
0x00df32dc: je     0x140df32ef
0x00df32de: cmp    ebx,0x4000
0x00df32e4: jne    0x140df3307
0x00df32e6: lea    rdx,[rip+0x948b77]        # 0x14173be64 ; literal="legato"
0x00df32ed: jmp    0x140df32ff
0x00df32ef: lea    rdx,[rip+0x948b62]        # 0x14173be58 ; literal="staccato"
0x00df32f6: jmp    0x140df32ff
0x00df32f8: lea    rdx,[rip+0x948bb1]        # 0x14173beb0 ; literal="arpeggios"
0x00df32ff: mov    rcx,rdi
0x00df3302: call   0x140070b90
0x00df3307: cmp    r14d,0x3
0x00df330b: jl     0x140df3316
0x00df330d: lea    rdx,[rip+0x811080]        # 0x141604394 ; literal=", "
0x00df3314: jmp    0x140df3323
0x00df3316: cmp    r14d,0x2
0x00df331a: jne    0x140df332b
0x00df331c: lea    rdx,[rip+0x811069]        # 0x14160438c ; literal=" and "
0x00df3323: mov    rcx,rdi
0x00df3326: call   0x140070b90
0x00df332b: dec    r14d
0x00df332e: inc    esi
0x00df3330: cmp    esi,0x8
0x00df3333: jl     0x140df3220
0x00df3339: mov    DWORD PTR [rsp+0x60],ebx
0x00df333d: movzx  ebx,BYTE PTR [rsp+0x31]
0x00df3342: cmp    r15d,0x3
0x00df3346: jl     0x140df3351
0x00df3348: lea    rdx,[rip+0x811045]        # 0x141604394 ; literal=", "
0x00df334f: jmp    0x140df335e
0x00df3351: cmp    r15d,0x2
0x00df3355: jne    0x140df3366
0x00df3357: lea    rdx,[rip+0x81102e]        # 0x14160438c ; literal=" and "
0x00df335e: mov    rcx,rdi
0x00df3361: call   0x140070b90
0x00df3366: lea    rcx,[rbp-0x58]
0x00df336a: call   0x140070430
0x00df336f: dec    r15d
0x00df3372: mov    QWORD PTR [rbp-0x50],r15
0x00df3376: jmp    0x140df2eb1
0x00df337b: lea    rdx,[rip+0x826216]        # 0x141619598 ; literal=".  "
0x00df3382: mov    rcx,rdi
0x00df3385: call   0x140070b90
0x00df338a: nop
0x00df338b: lea    rcx,[rbp+0x1b0]
0x00df3392: call   0x140070e80
0x00df3397: mov    rcx,QWORD PTR [rbp-0x30]
0x00df339b: add    rcx,0x8
0x00df339f: jmp    0x140df1116
0x00df33a4: lea    rcx,[rbp+0x88]
0x00df33ab: call   0x140067130
0x00df33b0: nop
0x00df33b1: mov    esi,0xffffffff
0x00df33b6: mov    DWORD PTR [rbp-0x5c],esi
0x00df33b9: mov    r12,QWORD PTR [rbp-0x38]
0x00df33bd: lea    rcx,[r12+0x88]
0x00df33c5: call   0x140070480
0x00df33ca: cmp    eax,esi
0x00df33cc: jle    0x140df3e70
0x00df33d2: lea    r14,[r12+0x88]
0x00df33da: mov    QWORD PTR [rbp-0x20],r14
0x00df33de: movzx  ebx,BYTE PTR [rsp+0x4a]
0x00df33e3: cmp    esi,0xffffffff
0x00df33e6: jne    0x140df33f2
0x00df33e8: mov    r12d,DWORD PTR [r12+0xfc]
0x00df33f0: jmp    0x140df3404
0x00df33f2: movsxd rdx,esi
0x00df33f5: mov    rcx,r14
0x00df33f8: call   0x140070850
0x00df33fd: mov    rcx,QWORD PTR [rax]
0x00df3400: mov    r12d,DWORD PTR [rcx+0x1c]
0x00df3404: mov    DWORD PTR [rbp-0x80],r12d
0x00df3408: cmp    r12d,0xffffffff
0x00df340c: je     0x140df3e57
0x00df3412: lea    rdx,[rbp+0x88]
0x00df3419: mov    ecx,r12d
0x00df341c: call   0x1400bb5a0
0x00df3421: cmp    eax,0xffffffff
0x00df3424: jne    0x140df3e57
0x00df342a: lea    rdx,[rbp+0x88]
0x00df3431: mov    ecx,r12d
0x00df3434: call   0x1400bb4a0
0x00df3439: mov    edx,r12d
0x00df343c: lea    rcx,[rip+0x1716f95]        # 0x14250a3d8
0x00df3443: call   0x140073ba0
0x00df3448: mov    r15,rax
0x00df344b: test   rax,rax
0x00df344e: je     0x140df3e57
0x00df3454: lea    rdx,[rip+0x825a75]        # 0x141618ed0 ; literal="[B]"
0x00df345b: mov    rcx,rdi
0x00df345e: call   0x140070b90
0x00df3463: mov    eax,DWORD PTR [r15+0x8]
0x00df3467: test   eax,eax
0x00df3469: je     0x140df35cd
0x00df346f: sub    eax,0x1
0x00df3472: je     0x140df34d4
0x00df3474: cmp    eax,0x1
0x00df3477: jne    0x140df3624
0x00df347d: lea    rdx,[rip+0x94985c]        # 0x14173cce0 ; literal="Scales are conceived of as two chords built using a division of the perfect fourth interval into "
0x00df3484: mov    rcx,rdi
0x00df3487: call   0x140070b90
0x00df348c: lea    rcx,[rbp+0x190]
0x00df3493: call   0x140070cc0
0x00df3498: nop
0x00df3499: lea    rdx,[rbp+0x190]
0x00df34a0: mov    ecx,DWORD PTR [r15+0x70]
0x00df34a4: call   0x140547840
0x00df34a9: lea    rdx,[rbp+0x190]
0x00df34b0: mov    rcx,rdi
0x00df34b3: call   0x1400bb340
0x00df34b8: lea    rdx,[rip+0x949889]        # 0x14173cd48 ; literal=" notes.  "
0x00df34bf: mov    rcx,rdi
0x00df34c2: call   0x140070b90
0x00df34c7: nop
0x00df34c8: lea    rcx,[rbp+0x190]
0x00df34cf: jmp    0x140df361f
0x00df34d4: lea    rdx,[rip+0x9498bd]        # 0x14173cd98 ; literal="Scales are constructed from "
0x00df34db: mov    rcx,rdi
0x00df34de: call   0x140070b90
0x00df34e3: lea    rcx,[rbp+0x210]
0x00df34ea: call   0x140070cc0
0x00df34ef: nop
0x00df34f0: lea    rdx,[rbp+0x210]
0x00df34f7: mov    ecx,DWORD PTR [r15+0x70]
0x00df34fb: call   0x140547840
0x00df3500: lea    rdx,[rbp+0x210]
0x00df3507: mov    rcx,rdi
0x00df350a: call   0x1400bb340
0x00df350f: lea    rdx,[rip+0x9498d2]        # 0x14173cde8 ; literal=" notes dividing the octave.  "
0x00df3516: mov    rcx,rdi
0x00df3519: call   0x140070b90
0x00df351e: lea    rdx,[rip+0x9498e3]        # 0x14173ce08 ; literal="In quartertones, their spacing is roughly "
0x00df3525: mov    rcx,rdi
0x00df3528: call   0x140070b90
0x00df352d: movdqa xmm0,XMMWORD PTR [rip+0x9b946b]        # 0x1417ac9a0
0x00df3535: movups XMMWORD PTR [rbp+0x240],xmm0
0x00df353c: movq   QWORD PTR [rbp+0x250],xmm0
0x00df3544: mov    BYTE PTR [rbp+0x240],0x31
0x00df354b: mov    BYTE PTR [rbp+0x258],0x4f
0x00df3552: movsxd rdx,DWORD PTR [r15+0x70]
0x00df3556: cmp    rdx,0x1
0x00df355a: jle    0x140df3585
0x00df355c: lea    rcx,[r15+0x10]
0x00df3560: dec    rdx
0x00df3563: nop    DWORD PTR [rax+0x0]
0x00df3567: nop    WORD PTR [rax+rax*1+0x0]
0x00df3570: movsxd rax,DWORD PTR [rcx]
0x00df3573: mov    BYTE PTR [rbp+rax*1+0x240],0x78
0x00df357b: lea    rcx,[rcx+0x4]
0x00df357f: sub    rdx,0x1
0x00df3583: jne    0x140df3570
0x00df3585: xor    r13d,r13d
0x00df3588: mov    esi,r13d
0x00df358b: nop    DWORD PTR [rax+rax*1+0x0]
0x00df3590: movzx  edx,BYTE PTR [rbp+rsi*1+0x240]
0x00df3598: mov    rcx,rdi
0x00df359b: call   0x1400bb1b0
0x00df35a0: inc    rsi
0x00df35a3: cmp    rsi,0x19
0x00df35a7: jl     0x140df3590
0x00df35a9: mov    r8d,0x45
0x00df35af: lea    rdx,[rip+0x9496da]        # 0x14173cc90 ; literal=", where 1 is the tonic, O marks the octave and x marks other notes.  "
0x00df35b6: mov    rcx,rdi
0x00df35b9: call   0x140071040
0x00df35be: nop
0x00df35bf: lea    rcx,[rbp+0x210]
0x00df35c6: call   0x140070e80
0x00df35cb: jmp    0x140df3627
0x00df35cd: lea    rdx,[rip+0x9497c4]        # 0x14173cd98 ; literal="Scales are constructed from "
0x00df35d4: mov    rcx,rdi
0x00df35d7: call   0x140070b90
0x00df35dc: lea    rcx,[rbp+0x210]
0x00df35e3: call   0x140070cc0
0x00df35e8: nop
0x00df35e9: lea    rdx,[rbp+0x210]
0x00df35f0: mov    ecx,DWORD PTR [r15+0x70]
0x00df35f4: call   0x140547840
0x00df35f9: lea    rdx,[rbp+0x210]
0x00df3600: mov    rcx,rdi
0x00df3603: call   0x1400bb340
0x00df3608: lea    rdx,[rip+0x9497a9]        # 0x14173cdb8 ; literal=" notes spaced evenly throughout the octave.  "
0x00df360f: mov    rcx,rdi
0x00df3612: call   0x140070b90
0x00df3617: nop
0x00df3618: lea    rcx,[rbp+0x210]
0x00df361f: call   0x140069460
0x00df3624: xor    r13d,r13d
0x00df3627: mov    rcx,rdi
0x00df362a: test   BYTE PTR [r15+0x4],0x1
0x00df362f: lea    rdx,[rip+0x949722]        # 0x14173cd58 ; literal="The tonic note is fixed only at the time of performance.  "
0x00df3636: jne    0x140df363f
0x00df3638: lea    rdx,[rip+0x9498c1]        # 0x14173cf00 ; literal="The tonic note is a fixed tone passed from teacher to student.  "
0x00df363f: call   0x140070b90
0x00df3644: mov    ecx,DWORD PTR [r15+0xa8]
0x00df364b: cmp    ecx,0xffffffff
0x00df364e: je     0x140df3805
0x00df3654: mov    edx,DWORD PTR [r15+0x754]
0x00df365b: test   edx,edx
0x00df365d: jle    0x140df3805
0x00df3663: test   ecx,ecx
0x00df3665: je     0x140df36a2
0x00df3667: sub    ecx,0x1
0x00df366a: je     0x140df3688
0x00df366c: sub    ecx,0x1
0x00df366f: je     0x140df367f
0x00df3671: cmp    ecx,0x1
0x00df3674: jne    0x140df36b1
0x00df3676: lea    rdx,[rip+0x949813]        # 0x14173ce90 ; literal="After a scale is constructed, the root note of chords are named.  "
0x00df367d: jmp    0x140df36a9
0x00df367f: lea    rdx,[rip+0x9497ba]        # 0x14173ce40 ; literal="After a scale is constructed, notes are named according to degree.  "
0x00df3686: jmp    0x140df36a9
0x00df3688: mov    rcx,rdi
0x00df368b: cmp    edx,0x1
0x00df368e: jne    0x140df3699
0x00df3690: lea    rdx,[rip+0x9498c9]        # 0x14173cf60 ; literal="A single note in the fundamental scale is named.  "
0x00df3697: jmp    0x140df36ac
0x00df3699: lea    rdx,[rip+0x9498f8]        # 0x14173cf98 ; literal="Preferred notes in the fundamental scale are named.  "
0x00df36a0: jmp    0x140df36ac
0x00df36a2: lea    rdx,[rip+0x94989f]        # 0x14173cf48 ; literal="Every note is named.  "
0x00df36a9: mov    rcx,rdi
0x00df36ac: call   0x140070b90
0x00df36b1: mov    rcx,rdi
0x00df36b4: cmp    DWORD PTR [r15+0x754],0x1
0x00df36bc: lea    rdx,[rip+0x949815]        # 0x14173ced8 ; literal="It is called "
0x00df36c3: je     0x140df36cc
0x00df36c5: lea    rdx,[rip+0x94981c]        # 0x14173cee8 ; literal="The names are "
0x00df36cc: call   0x140070b90
0x00df36d1: mov    esi,r13d
0x00df36d4: cmp    DWORD PTR [r15+0x754],0x0
0x00df36dc: jle    0x140df37f6
0x00df36e2: lea    r12,[r15+0x6f0]
0x00df36e9: nop    DWORD PTR [rax+0x0]
0x00df36f0: movsxd r14,esi
0x00df36f3: shl    r14,0x5
0x00df36f7: lea    rdx,[r14+0xb0]
0x00df36fe: add    rdx,r15
0x00df3701: mov    rcx,rdi
0x00df3704: call   0x1400bb340
0x00df3709: lea    rdx,[rip+0x83dbe0]        # 0x1416312f0 ; literal=" ("
0x00df3710: mov    rcx,rdi
0x00df3713: call   0x140070b90
0x00df3718: test   esi,esi
0x00df371a: jne    0x140df372b
0x00df371c: lea    rdx,[rip+0x94997d]        # 0x14173d0a0 ; literal="spoken "
0x00df3723: mov    rcx,rdi
0x00df3726: call   0x140070b90
0x00df372b: lea    rdx,[r15+0x3d0]
0x00df3732: add    rdx,r14
0x00df3735: mov    rcx,rdi
0x00df3738: call   0x1400bb340
0x00df373d: cmp    DWORD PTR [r15+0xa8],0x1
0x00df3745: jne    0x140df3792
0x00df3747: lea    rdx,[rip+0x810c46]        # 0x141604394 ; literal=", "
0x00df374e: mov    rcx,rdi
0x00df3751: call   0x140070b90
0x00df3756: lea    rcx,[rbp+0x210]
0x00df375d: call   0x140070cc0
0x00df3762: nop
0x00df3763: mov    r8b,0x1
0x00df3766: lea    rdx,[rbp+0x210]
0x00df376d: mov    ecx,DWORD PTR [r12]
0x00df3771: call   0x140548050
0x00df3776: lea    rdx,[rbp+0x210]
0x00df377d: mov    rcx,rdi
0x00df3780: call   0x1400bb340
0x00df3785: nop
0x00df3786: lea    rcx,[rbp+0x210]
0x00df378d: call   0x140069460
0x00df3792: lea    rdx,[rip+0x83db97]        # 0x141631330 ; literal=")"
0x00df3799: mov    rcx,rdi
0x00df379c: call   0x140070b90
0x00df37a1: mov    eax,DWORD PTR [r15+0x754]
0x00df37a8: sub    eax,0x3
0x00df37ab: cmp    esi,eax
0x00df37ad: jg     0x140df37be
0x00df37af: lea    rdx,[rip+0x810bde]        # 0x141604394 ; literal=", "
0x00df37b6: mov    rcx,rdi
0x00df37b9: call   0x140070b90
0x00df37be: mov    eax,DWORD PTR [r15+0x754]
0x00df37c5: sub    eax,0x2
0x00df37c8: cmp    esi,eax
0x00df37ca: jne    0x140df37db
0x00df37cc: lea    rdx,[rip+0x810bb9]        # 0x14160438c ; literal=" and "
0x00df37d3: mov    rcx,rdi
0x00df37d6: call   0x140070b90
0x00df37db: inc    esi
0x00df37dd: add    r12,0x4
0x00df37e1: cmp    esi,DWORD PTR [r15+0x754]
0x00df37e8: jl     0x140df36f0
0x00df37ee: mov    r14,QWORD PTR [rbp-0x20]
0x00df37f2: mov    r12d,DWORD PTR [rbp-0x80]
0x00df37f6: lea    rdx,[rip+0x825d9b]        # 0x141619598 ; literal=".  "
0x00df37fd: mov    rcx,rdi
0x00df3800: call   0x140070b90
0x00df3805: lea    rcx,[rbp+0x1b0]
0x00df380c: call   0x140067130
0x00df3811: nop
0x00df3812: lea    rcx,[rbp+0x1d0]
0x00df3819: call   0x140067130
0x00df381e: nop
0x00df381f: mov    r13d,0xffffffff
0x00df3825: mov    DWORD PTR [rsp+0x50],r13d
0x00df382a: mov    rax,QWORD PTR [r14+0x8]
0x00df382e: sub    rax,QWORD PTR [r14]
0x00df3831: sar    rax,0x3
0x00df3835: cmp    eax,r13d
0x00df3838: jle    0x140df3e3b
0x00df383e: xchg   ax,ax
0x00df3840: cmp    r13d,0xffffffff
0x00df3844: jne    0x140df385f
0x00df3846: mov    rax,QWORD PTR [rbp-0x38]
0x00df384a: cmp    DWORD PTR [rax+0xfc],r12d
0x00df3851: jne    0x140df3e1f
0x00df3857: mov    esi,DWORD PTR [rax+0x100]
0x00df385d: jmp    0x140df388b
0x00df385f: movsxd rsi,r13d
0x00df3862: mov    rdx,rsi
0x00df3865: mov    rcx,r14
0x00df3868: call   0x140070850
0x00df386d: mov    rcx,QWORD PTR [rax]
0x00df3870: cmp    DWORD PTR [rcx+0x1c],r12d
0x00df3874: jne    0x140df3e1f
0x00df387a: mov    rdx,rsi
0x00df387d: mov    rcx,r14
0x00df3880: call   0x140070850
0x00df3885: mov    rcx,QWORD PTR [rax]
0x00df3888: mov    esi,DWORD PTR [rcx+0x20]
0x00df388b: cmp    esi,0xffffffff
0x00df388e: je     0x140df3e1f
0x00df3894: lea    rdx,[rbp+0x1b0]
0x00df389b: mov    ecx,esi
0x00df389d: call   0x1400bb5a0
0x00df38a2: cmp    eax,0xffffffff
0x00df38a5: jne    0x140df3e1f
0x00df38ab: lea    rdx,[rbp+0x1b0]
0x00df38b2: mov    ecx,esi
0x00df38b4: call   0x1400bb4a0
0x00df38b9: lea    rcx,[r15+0x90]
0x00df38c0: movsxd rdx,esi
0x00df38c3: call   0x140070850
0x00df38c8: mov    r14,QWORD PTR [rax]
0x00df38cb: lea    rdx,[rip+0x8255fe]        # 0x141618ed0 ; literal="[B]"
0x00df38d2: mov    rcx,rdi
0x00df38d5: call   0x140070b90
0x00df38da: mov    rcx,rdi
0x00df38dd: cmp    DWORD PTR [r15+0x8],0x2
0x00df38e2: lea    rdx,[rip+0x9497bf]        # 0x14173d0a8 ; literal="As always, the "
0x00df38e9: je     0x140df38f2
0x00df38eb: lea    rdx,[rip+0x81534a]        # 0x141608c3c ; literal="The "
0x00df38f2: call   0x140070b90
0x00df38f7: lea    rdx,[r14+0x8]
0x00df38fb: mov    rcx,rdi
0x00df38fe: call   0x1400bb340
0x00df3903: cmp    DWORD PTR [r14],0x0
0x00df3907: jne    0x140df390f
0x00df3909: mov    r12d,DWORD PTR [r14+0x44]
0x00df390d: jmp    0x140df3957
0x00df390f: movsxd rax,DWORD PTR [r14+0x48]
0x00df3913: cmp    eax,0xffffffff
0x00df3916: je     0x140df398c
0x00df3918: cmp    DWORD PTR [r14+0x4c],0xffffffff
0x00df391d: je     0x140df398c
0x00df391f: mov    rdx,rax
0x00df3922: lea    rcx,[r15+0x78]
0x00df3926: call   0x140070850
0x00df392b: mov    rdx,QWORD PTR [rax]
0x00df392e: mov    r12d,DWORD PTR [rdx+0x34]
0x00df3932: movsxd rdx,DWORD PTR [r14+0x4c]
0x00df3936: lea    rcx,[r15+0x78]
0x00df393a: call   0x140070850
0x00df393f: xor    ecx,ecx
0x00df3941: mov    edx,ecx
0x00df3943: cmp    DWORD PTR [r14],0x1
0x00df3947: sete   dl
0x00df394a: inc    edx
0x00df394c: mov    rax,QWORD PTR [rax]
0x00df394f: mov    ecx,DWORD PTR [rax+0x34]
0x00df3952: sub    ecx,edx
0x00df3954: add    r12d,ecx
0x00df3957: lea    rdx,[rip+0x810092]        # 0x1416039f0 ; literal=" "
0x00df395e: mov    rcx,rdi
0x00df3961: call   0x140070b90
0x00df3966: sub    r12d,0x5
0x00df396a: je     0x140df3983
0x00df396c: sub    r12d,0x1
0x00df3970: je     0x140df397a
0x00df3972: cmp    r12d,0x1
0x00df3976: je     0x140df399b
0x00df3978: jmp    0x140df39aa
0x00df397a: lea    rdx,[rip+0x949747]        # 0x14173d0c8 ; literal="hexatonic"
0x00df3981: jmp    0x140df39a2
0x00df3983: lea    rdx,[rip+0x94972e]        # 0x14173d0b8 ; literal="pentatonic"
0x00df398a: jmp    0x140df39a2
0x00df398c: lea    rdx,[rip+0x81005d]        # 0x1416039f0 ; literal=" "
0x00df3993: mov    rcx,rdi
0x00df3996: call   0x140070b90
0x00df399b: lea    rdx,[rip+0x94962e]        # 0x14173cfd0 ; literal="heptatonic"
0x00df39a2: mov    rcx,rdi
0x00df39a5: call   0x140070b90
0x00df39aa: lea    rdx,[rip+0x94962f]        # 0x14173cfe0 ; literal=" scale is "
0x00df39b1: mov    rcx,rdi
0x00df39b4: call   0x140070b90
0x00df39b9: mov    ecx,DWORD PTR [r14]
0x00df39bc: test   ecx,ecx
0x00df39be: je     0x140df3a44
0x00df39c4: sub    ecx,0x1
0x00df39c7: je     0x140df3a30
0x00df39c9: sub    ecx,0x1
0x00df39cc: je     0x140df3a1c
0x00df39ce: sub    ecx,0x1
0x00df39d1: je     0x140df3a08
0x00df39d3: cmp    ecx,0x1
0x00df39d6: jne    0x140df3b01
0x00df39dc: mov    rcx,rdi
0x00df39df: cmp    DWORD PTR [r15+0x8],0x2
0x00df39e4: jne    0x140df39f7
0x00df39e6: lea    rdx,[rip+0x948673]        # 0x14173c060 ; literal="thought of as two disjoint chords drawn from the fundamental division of the perfect fourth"
0x00df39ed: call   0x140070b90
0x00df39f2: jmp    0x140df3b01
0x00df39f7: lea    rdx,[rip+0x9486c2]        # 0x14173c0c0 ; literal="thought of as two disjoint chords spanning two perfect fourths"
0x00df39fe: call   0x140070b90
0x00df3a03: jmp    0x140df3b01
0x00df3a08: lea    rdx,[rip+0x948601]        # 0x14173c010 ; literal="thought of as two disjoint chords spanning a tritone and a perfect fourth"
0x00df3a0f: mov    rcx,rdi
0x00df3a12: call   0x140070b90
0x00df3a17: jmp    0x140df3b01
0x00df3a1c: lea    rdx,[rip+0x94859d]        # 0x14173bfc0 ; literal="thought of as two disjoint chords spanning a perfect fifth and a major third"
0x00df3a23: mov    rcx,rdi
0x00df3a26: call   0x140070b90
0x00df3a2b: jmp    0x140df3b01
0x00df3a30: lea    rdx,[rip+0x949619]        # 0x14173d050 ; literal="thought of as joined chords spanning a perfect fifth and a perfect fourth"
0x00df3a37: mov    rcx,rdi
0x00df3a3a: call   0x140070b90
0x00df3a3f: jmp    0x140df3b01
0x00df3a44: lea    rdx,[rip+0x9495a5]        # 0x14173cff0 ; literal="constructed by selection of degrees from the fundamental scale.  The degrees selected are "
0x00df3a4b: mov    rcx,rdi
0x00df3a4e: call   0x140070b90
0x00df3a53: xor    eax,eax
0x00df3a55: mov    esi,eax
0x00df3a57: cmp    DWORD PTR [r14+0x44],eax
0x00df3a5b: jle    0x140df3b01
0x00df3a61: lea    r12,[r14+0x28]
0x00df3a65: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00df3a70: lea    rdx,[rip+0x81068d]        # 0x141604104 ; literal="the "
0x00df3a77: mov    rcx,rdi
0x00df3a7a: call   0x140070b90
0x00df3a7f: lea    rcx,[rbp+0x210]
0x00df3a86: call   0x140070cc0
0x00df3a8b: nop
0x00df3a8c: mov    ecx,DWORD PTR [r12]
0x00df3a90: inc    ecx
0x00df3a92: mov    r8b,0x1
0x00df3a95: lea    rdx,[rbp+0x210]
0x00df3a9c: call   0x140548050
0x00df3aa1: lea    rdx,[rbp+0x210]
0x00df3aa8: mov    rcx,rdi
0x00df3aab: call   0x1400bb340
0x00df3ab0: mov    eax,DWORD PTR [r14+0x44]
0x00df3ab4: sub    eax,0x3
0x00df3ab7: cmp    esi,eax
0x00df3ab9: jg     0x140df3aca
0x00df3abb: lea    rdx,[rip+0x8108d2]        # 0x141604394 ; literal=", "
0x00df3ac2: mov    rcx,rdi
0x00df3ac5: call   0x140070b90
0x00df3aca: mov    eax,DWORD PTR [r14+0x44]
0x00df3ace: sub    eax,0x2
0x00df3ad1: cmp    esi,eax
0x00df3ad3: jne    0x140df3ae5
0x00df3ad5: lea    rdx,[rip+0x8108b0]        # 0x14160438c ; literal=" and "
0x00df3adc: mov    rcx,rdi
0x00df3adf: call   0x140070b90
0x00df3ae4: nop
0x00df3ae5: lea    rcx,[rbp+0x210]
0x00df3aec: call   0x140069460
0x00df3af1: inc    esi
0x00df3af3: add    r12,0x4
0x00df3af7: cmp    esi,DWORD PTR [r14+0x44]
0x00df3afb: jl     0x140df3a70
0x00df3b01: lea    rdx,[rip+0x825a90]        # 0x141619598 ; literal=".  "
0x00df3b08: mov    rcx,rdi
0x00df3b0b: call   0x140070b90
0x00df3b10: cmp    DWORD PTR [r14+0x48],0xffffffff
0x00df3b15: je     0x140df3b7b
0x00df3b17: cmp    DWORD PTR [r14+0x4c],0xffffffff
0x00df3b1c: je     0x140df3b7b
0x00df3b1e: lea    rdx,[rip+0x948453]        # 0x14173bf78 ; literal="These chords are named "
0x00df3b25: mov    rcx,rdi
0x00df3b28: call   0x140070b90
0x00df3b2d: movsxd rdx,DWORD PTR [r14+0x48]
0x00df3b31: lea    rcx,[r15+0x78]
0x00df3b35: call   0x140070850
0x00df3b3a: mov    rdx,QWORD PTR [rax]
0x00df3b3d: mov    rcx,rdi
0x00df3b40: call   0x1400bb340
0x00df3b45: lea    rdx,[rip+0x810840]        # 0x14160438c ; literal=" and "
0x00df3b4c: mov    rcx,rdi
0x00df3b4f: call   0x140070b90
0x00df3b54: movsxd rdx,DWORD PTR [r14+0x4c]
0x00df3b58: lea    rcx,[r15+0x78]
0x00df3b5c: call   0x140070850
0x00df3b61: mov    rdx,QWORD PTR [rax]
0x00df3b64: mov    rcx,rdi
0x00df3b67: call   0x1400bb340
0x00df3b6c: lea    rdx,[rip+0x825a25]        # 0x141619598 ; literal=".  "
0x00df3b73: mov    rcx,rdi
0x00df3b76: call   0x140070b90
0x00df3b7b: lea    rcx,[rbp+0x240]
0x00df3b82: call   0x140067130
0x00df3b87: nop
0x00df3b88: cmp    DWORD PTR [r14+0x48],0xffffffff
0x00df3b8d: je     0x140df3b9f
0x00df3b8f: lea    rdx,[r14+0x48]
0x00df3b93: lea    rcx,[rbp+0x240]
0x00df3b9a: call   0x140070a40
0x00df3b9f: lea    rdx,[r14+0x4c]
0x00df3ba3: cmp    DWORD PTR [rdx],0xffffffff
0x00df3ba6: je     0x140df3bb4
0x00df3ba8: lea    rcx,[rbp+0x240]
0x00df3baf: call   0x140070a40
0x00df3bb4: lea    rdx,[rsp+0x58]
0x00df3bb9: lea    rcx,[rbp+0x240]
0x00df3bc0: call   0x140070870
0x00df3bc5: lea    rdx,[rbp-0x18]
0x00df3bc9: lea    rcx,[rbp+0x240]
0x00df3bd0: call   0x140070860
0x00df3bd5: mov    rax,QWORD PTR [rsp+0x58]
0x00df3bda: mov    r12d,0x1
0x00df3be0: cmp    rax,QWORD PTR [rbp-0x18]
0x00df3be4: je     0x140df3e06
0x00df3bea: mov    edx,r12d
0x00df3bed: mov    eax,0xff
0x00df3bf2: cmovb  edx,eax
0x00df3bf5: test   dl,dl
0x00df3bf7: jns    0x140df3e06
0x00df3bfd: lea    rcx,[rsp+0x58]
0x00df3c02: call   0x140070440
0x00df3c07: lea    rdx,[rbp+0x1d0]
0x00df3c0e: mov    ecx,DWORD PTR [rax]
0x00df3c10: call   0x1400bb5a0
0x00df3c15: cmp    eax,0xffffffff
0x00df3c18: jne    0x140df3df3
0x00df3c1e: lea    rcx,[rsp+0x58]
0x00df3c23: call   0x140070440
0x00df3c28: lea    rdx,[rbp+0x1d0]
0x00df3c2f: mov    ecx,DWORD PTR [rax]
0x00df3c31: call   0x1400bb4a0
0x00df3c36: lea    rcx,[rsp+0x58]
0x00df3c3b: call   0x140070440
0x00df3c40: movsxd rdx,DWORD PTR [rax]
0x00df3c43: lea    rcx,[r15+0x78]
0x00df3c47: call   0x140070850
0x00df3c4c: mov    r13,QWORD PTR [rax]
0x00df3c4f: lea    rdx,[rip+0x94833a]        # 0x14173bf90 ; literal="[B]The "
0x00df3c56: mov    rcx,rdi
0x00df3c59: call   0x140070b90
0x00df3c5e: mov    rdx,r13
0x00df3c61: mov    rcx,rdi
0x00df3c64: call   0x1400bb340
0x00df3c69: lea    rdx,[rip+0x80fd80]        # 0x1416039f0 ; literal=" "
0x00df3c70: mov    rcx,rdi
0x00df3c73: call   0x140070b90
0x00df3c78: mov    ecx,DWORD PTR [r13+0x34]
0x00df3c7c: sub    ecx,0x3
0x00df3c7f: je     0x140df3c9d
0x00df3c81: sub    ecx,0x1
0x00df3c84: je     0x140df3c94
0x00df3c86: cmp    ecx,0x1
0x00df3c89: jne    0x140df3cac
0x00df3c8b: lea    rdx,[rip+0x948766]        # 0x14173c3f8 ; literal="pentachord"
0x00df3c92: jmp    0x140df3ca4
0x00df3c94: lea    rdx,[rip+0x94830d]        # 0x14173bfa8 ; literal="tetrachord"
0x00df3c9b: jmp    0x140df3ca4
0x00df3c9d: lea    rdx,[rip+0x9482f4]        # 0x14173bf98 ; literal="trichord"
0x00df3ca4: mov    rcx,rdi
0x00df3ca7: call   0x140070b90
0x00df3cac: lea    rdx,[rip+0x81f241]        # 0x141612ef4 ; literal=" is "
0x00df3cb3: mov    rcx,rdi
0x00df3cb6: call   0x140070b90
0x00df3cbb: xor    eax,eax
0x00df3cbd: mov    esi,eax
0x00df3cbf: cmp    DWORD PTR [r13+0x34],eax
0x00df3cc3: jle    0x140df3d8b
0x00df3cc9: lea    r14,[r13+0x20]
0x00df3ccd: nop    DWORD PTR [rax]
0x00df3cd0: mov    r8d,0x4
0x00df3cd6: lea    rdx,[rip+0x810427]        # 0x141604104 ; literal="the "
0x00df3cdd: mov    rcx,rdi
0x00df3ce0: call   0x140071040
0x00df3ce5: nop
0x00df3ce6: movzx  edx,bl
0x00df3ce9: lea    rcx,[rbp+0x190]
0x00df3cf0: call   0x1400697c0
0x00df3cf5: lea    rcx,[rbp+0x190]
0x00df3cfc: call   0x1400711b0
0x00df3d01: nop
0x00df3d02: mov    ecx,DWORD PTR [r14]
0x00df3d05: inc    ecx
0x00df3d07: mov    r8b,0x1
0x00df3d0a: lea    rdx,[rbp+0x190]
0x00df3d11: call   0x140548050
0x00df3d16: lea    rdx,[rbp+0x190]
0x00df3d1d: mov    rcx,rdi
0x00df3d20: call   0x1400bb340
0x00df3d25: cmp    DWORD PTR [r15+0x8],0x0
0x00df3d2a: jne    0x140df3d44
0x00df3d2c: mov    eax,DWORD PTR [r15+0x70]
0x00df3d30: cmp    DWORD PTR [r14],eax
0x00df3d33: jne    0x140df3d44
0x00df3d35: lea    rdx,[rip+0x9486cc]        # 0x14173c408 ; literal=" (completing the octave)"
0x00df3d3c: mov    rcx,rdi
0x00df3d3f: call   0x140070b90
0x00df3d44: mov    ecx,DWORD PTR [r13+0x34]
0x00df3d48: lea    eax,[rcx-0x3]
0x00df3d4b: cmp    esi,eax
0x00df3d4d: jg     0x140df3d58
0x00df3d4f: lea    rdx,[rip+0x81063e]        # 0x141604394 ; literal=", "
0x00df3d56: jmp    0x140df3d66
0x00df3d58: lea    eax,[rcx-0x2]
0x00df3d5b: cmp    esi,eax
0x00df3d5d: jne    0x140df3d6f
0x00df3d5f: lea    rdx,[rip+0x810626]        # 0x14160438c ; literal=" and "
0x00df3d66: mov    rcx,rdi
0x00df3d69: call   0x140070b90
0x00df3d6e: nop
0x00df3d6f: lea    rcx,[rbp+0x190]
0x00df3d76: call   0x140070e80
0x00df3d7b: inc    esi
0x00df3d7d: add    r14,0x4
0x00df3d81: cmp    esi,DWORD PTR [r13+0x34]
0x00df3d85: jl     0x140df3cd0
0x00df3d8b: mov    r8,r12
0x00df3d8e: lea    rdx,[rip+0x80fc5b]        # 0x1416039f0 ; literal=" "
0x00df3d95: mov    rcx,rdi
0x00df3d98: call   0x140071040
0x00df3d9d: mov    ecx,DWORD PTR [r15+0x8]
0x00df3da1: test   ecx,ecx
0x00df3da3: je     0x140df3dc1
0x00df3da5: sub    ecx,0x1
0x00df3da8: je     0x140df3db8
0x00df3daa: cmp    ecx,0x1
0x00df3dad: jne    0x140df3dde
0x00df3daf: lea    rdx,[rip+0x94836a]        # 0x14173c120 ; literal="degrees of the fundamental perfect fourth division"
0x00df3db6: jmp    0x140df3dd6
0x00df3db8: lea    rdx,[rip+0x948341]        # 0x14173c100 ; literal="degrees of the octave scale"
0x00df3dbf: jmp    0x140df3dd6
0x00df3dc1: cmp    DWORD PTR [r15+0x70],0xc
0x00df3dc6: lea    rdx,[rip+0x94865b]        # 0x14173c428 ; literal="degrees of the semitone octave scale"
0x00df3dcd: je     0x140df3dd6
0x00df3dcf: lea    rdx,[rip+0x94867a]        # 0x14173c450 ; literal="degrees of the quartertone octave scale"
0x00df3dd6: mov    rcx,rdi
0x00df3dd9: call   0x140070b90
0x00df3dde: mov    r8d,0x3
0x00df3de4: lea    rdx,[rip+0x8257ad]        # 0x141619598 ; literal=".  "
0x00df3deb: mov    rcx,rdi
0x00df3dee: call   0x140071040
0x00df3df3: mov    rax,QWORD PTR [rsp+0x58]
0x00df3df8: add    rax,0x4
0x00df3dfc: mov    QWORD PTR [rsp+0x58],rax
0x00df3e01: jmp    0x140df3be0
0x00df3e06: lea    rcx,[rbp+0x240]
0x00df3e0d: call   0x140067150
0x00df3e12: mov    r13d,DWORD PTR [rsp+0x50]
0x00df3e17: mov    r14,QWORD PTR [rbp-0x20]
0x00df3e1b: mov    r12d,DWORD PTR [rbp-0x80]
0x00df3e1f: inc    r13d
0x00df3e22: mov    DWORD PTR [rsp+0x50],r13d
0x00df3e27: mov    rax,QWORD PTR [r14+0x8]
0x00df3e2b: sub    rax,QWORD PTR [r14]
0x00df3e2e: sar    rax,0x3
0x00df3e32: cmp    r13d,eax
0x00df3e35: jl     0x140df3840
0x00df3e3b: lea    rcx,[rbp+0x1d0]
0x00df3e42: call   0x140067150
0x00df3e47: nop
0x00df3e48: lea    rcx,[rbp+0x1b0]
0x00df3e4f: call   0x140067150
0x00df3e54: mov    esi,DWORD PTR [rbp-0x5c]
0x00df3e57: inc    esi
0x00df3e59: mov    DWORD PTR [rbp-0x5c],esi
0x00df3e5c: mov    rcx,r14
0x00df3e5f: call   0x140070480
0x00df3e64: cmp    esi,eax
0x00df3e66: mov    r12,QWORD PTR [rbp-0x38]
0x00df3e6a: jl     0x140df33e3
0x00df3e70: lea    rcx,[rbp+0x70]
0x00df3e74: call   0x140067130
0x00df3e79: nop
0x00df3e7a: mov    r13d,0xffffffff
0x00df3e80: mov    DWORD PTR [rbp-0x5c],r13d
0x00df3e84: lea    rcx,[r12+0x88]
0x00df3e8c: call   0x140070480
0x00df3e91: cmp    eax,r13d
0x00df3e94: jle    0x140df499a
0x00df3e9a: add    r12,0x88
0x00df3ea1: mov    QWORD PTR [rbp+0x38],r12
0x00df3ea5: movzx  ebx,BYTE PTR [rsp+0x30]
0x00df3eaa: nop    WORD PTR [rax+rax*1+0x0]
0x00df3eb0: cmp    r13d,0xffffffff
0x00df3eb4: jne    0x140df3ec2
0x00df3eb6: mov    rax,QWORD PTR [rbp-0x38]
0x00df3eba: mov    esi,DWORD PTR [rax+0x104]
0x00df3ec0: jmp    0x140df3ed3
0x00df3ec2: movsxd rdx,r13d
0x00df3ec5: mov    rcx,r12
0x00df3ec8: call   0x140070850
0x00df3ecd: mov    rcx,QWORD PTR [rax]
0x00df3ed0: mov    esi,DWORD PTR [rcx+0x24]
0x00df3ed3: mov    DWORD PTR [rbp-0x80],esi
0x00df3ed6: cmp    esi,0xffffffff
0x00df3ed9: je     0x140df4982
0x00df3edf: lea    rdx,[rbp+0x70]
0x00df3ee3: mov    ecx,esi
0x00df3ee5: call   0x1400bb5a0
0x00df3eea: cmp    eax,0xffffffff
0x00df3eed: jne    0x140df4982
0x00df3ef3: lea    rdx,[rbp+0x70]
0x00df3ef7: mov    ecx,esi
0x00df3ef9: call   0x1400bb4a0
0x00df3efe: mov    edx,esi
0x00df3f00: lea    rcx,[rip+0x1716501]        # 0x14250a408
0x00df3f07: call   0x140073ba0
0x00df3f0c: mov    r15,rax
0x00df3f0f: mov    QWORD PTR [rbp-0x68],rax
0x00df3f13: test   rax,rax
0x00df3f16: je     0x140df4982
0x00df3f1c: test   BYTE PTR [rax+0x38],0x1
0x00df3f20: je     0x140df3f31
0x00df3f22: lea    rdx,[rip+0x948237]        # 0x14173c160 ; literal="[B]The rhythm system is fundamentally polyrhythmic.  There are always multiple rhythm lines, and each of their bars is played over the same period of time, regardless of the number of beats.  The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named.  "
0x00df3f29: mov    rcx,rdi
0x00df3f2c: call   0x140070b90
0x00df3f31: test   BYTE PTR [r15+0x38],0x2
0x00df3f36: je     0x140df3f47
0x00df3f38: lea    rdx,[rip+0x948361]        # 0x14173c2a0 ; literal="[B]The rhythm system is fundamentally polymetric.  There are always multiple rhythm lines, and the beats are always played together, even if one rhythm line completes (and then repeats) before the other is finished.  The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named.  "
0x00df3f3f: mov    rcx,rdi
0x00df3f42: call   0x140070b90
0x00df3f47: lea    rcx,[rbp+0x1d0]
0x00df3f4e: call   0x140067130
0x00df3f53: nop
0x00df3f54: lea    rcx,[rbp+0x1b0]
0x00df3f5b: call   0x140067130
0x00df3f60: nop
0x00df3f61: mov    r14d,0xffffffff
0x00df3f67: mov    DWORD PTR [rbp-0x60],r14d
0x00df3f6b: mov    rcx,r12
0x00df3f6e: call   0x140070480
0x00df3f73: cmp    eax,r14d
0x00df3f76: jle    0x140df4969
0x00df3f7c: nop    DWORD PTR [rax+0x0]
0x00df3f80: cmp    r14d,0xffffffff
0x00df3f84: jne    0x140df3fa4
0x00df3f86: mov    rax,QWORD PTR [rbp-0x38]
0x00df3f8a: cmp    DWORD PTR [rax+0x104],esi
0x00df3f90: jne    0x140df494d
0x00df3f96: mov    esi,DWORD PTR [rax+0x108]
0x00df3f9c: mov    eax,DWORD PTR [rax+0x10c]
0x00df3fa2: jmp    0x140df3fe4
0x00df3fa4: movsxd r14,r14d
0x00df3fa7: mov    rdx,r14
0x00df3faa: mov    rcx,r12
0x00df3fad: call   0x140070850
0x00df3fb2: mov    rcx,QWORD PTR [rax]
0x00df3fb5: cmp    DWORD PTR [rcx+0x24],esi
0x00df3fb8: jne    0x140df49e7
0x00df3fbe: mov    rdx,r14
0x00df3fc1: mov    rcx,r12
0x00df3fc4: call   0x140070850
0x00df3fc9: mov    rcx,QWORD PTR [rax]
0x00df3fcc: mov    esi,DWORD PTR [rcx+0x28]
0x00df3fcf: mov    rdx,r14
0x00df3fd2: mov    rcx,r12
0x00df3fd5: call   0x140070850
0x00df3fda: mov    rcx,QWORD PTR [rax]
0x00df3fdd: mov    eax,DWORD PTR [rcx+0x2c]
0x00df3fe0: mov    r14d,DWORD PTR [rbp-0x60]
0x00df3fe4: mov    DWORD PTR [rsp+0x50],eax
0x00df3fe8: cmp    esi,0xffffffff
0x00df3feb: je     0x140df4012
0x00df3fed: lea    rdx,[rbp+0x1d0]
0x00df3ff4: mov    ecx,esi
0x00df3ff6: call   0x1400bb5a0
0x00df3ffb: cmp    eax,0xffffffff
0x00df3ffe: jne    0x140df494a
0x00df4004: lea    rdx,[rbp+0x1d0]
0x00df400b: mov    ecx,esi
0x00df400d: call   0x1400bb4a0
0x00df4012: lea    rcx,[rbp+0x240]
0x00df4019: call   0x140067130
0x00df401e: nop
0x00df401f: cmp    DWORD PTR [rsp+0x50],0xffffffff
0x00df4024: je     0x140df4037
0x00df4026: lea    rdx,[rsp+0x50]
0x00df402b: lea    rcx,[rbp+0x240]
0x00df4032: call   0x140070a40
0x00df4037: cmp    esi,0xffffffff
0x00df403a: je     0x140df4333
0x00df4040: lea    rcx,[r15+0x20]
0x00df4044: movsxd rdx,esi
0x00df4047: call   0x140070850
0x00df404c: mov    r13,QWORD PTR [rax]
0x00df404f: mov    QWORD PTR [rbp-0x18],r13
0x00df4053: lea    rdx,[rip+0x947f36]        # 0x14173bf90 ; literal="[B]The "
0x00df405a: mov    rcx,rdi
0x00df405d: call   0x140070b90
0x00df4062: mov    rdx,r13
0x00df4065: mov    rcx,rdi
0x00df4068: call   0x1400bb340
0x00df406d: lea    rdx,[rip+0x94853c]        # 0x14173c5b0 ; literal=" rhythm is made from "
0x00df4074: mov    rcx,rdi
0x00df4077: call   0x140070b90
0x00df407c: lea    rcx,[rbp+0x210]
0x00df4083: call   0x140070cc0
0x00df4088: nop
0x00df4089: lea    rcx,[r13+0x20]
0x00df408d: call   0x1400709a0
0x00df4092: mov    rcx,rax
0x00df4095: lea    rdx,[rbp+0x210]
0x00df409c: call   0x140547840
0x00df40a1: lea    rdx,[rbp+0x210]
0x00df40a8: mov    rcx,rdi
0x00df40ab: call   0x1400bb340
0x00df40b0: nop
0x00df40b1: lea    rcx,[rbp+0x210]
0x00df40b8: call   0x140069460
0x00df40bd: lea    rdx,[rip+0x948504]        # 0x14173c5c8 ; literal=" patterns: "
0x00df40c4: mov    rcx,rdi
0x00df40c7: call   0x140070b90
0x00df40cc: xor    r14b,r14b
0x00df40cf: mov    r12d,0xffffffff
0x00df40d5: lea    rcx,[r13+0x20]
0x00df40d9: call   0x1400709a0
0x00df40de: mov    r15,rax
0x00df40e1: lea    rdx,[rsp+0x58]
0x00df40e6: lea    rcx,[r13+0x20]
0x00df40ea: call   0x140070870
0x00df40ef: lea    rdx,[rbp+0x18]
0x00df40f3: lea    rcx,[r13+0x20]
0x00df40f7: call   0x140070860
0x00df40fc: lea    rdx,[rbp+0x8]
0x00df4100: lea    rcx,[r13+0x38]
0x00df4104: call   0x140070870
0x00df4109: lea    rdx,[rbp+0x68]
0x00df410d: lea    rcx,[r13+0x38]
0x00df4111: call   0x140070860
0x00df4116: lea    r8,[rbp+0x18]
0x00df411a: lea    rdx,[rsp+0x35]
0x00df411f: lea    rcx,[rsp+0x58]
0x00df4124: call   0x140070450
0x00df4129: xor    edx,edx
0x00df412b: movzx  ecx,BYTE PTR [rax]
0x00df412e: call   0x140066de0
0x00df4133: test   al,al
0x00df4135: je     0x140df42e0
0x00df413b: mov    r13,QWORD PTR [rbp-0x68]
0x00df413f: add    r13,0x8
0x00df4143: xor    ebx,ebx
0x00df4145: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00df4150: lea    rdx,[rip+0x80ffad]        # 0x141604104 ; literal="the "
0x00df4157: mov    rcx,rdi
0x00df415a: call   0x140070b90
0x00df415f: lea    rcx,[rsp+0x58]
0x00df4164: call   0x140070440
0x00df4169: movsxd rdx,DWORD PTR [rax]
0x00df416c: mov    rcx,r13
0x00df416f: call   0x140070850
0x00df4174: mov    rdx,QWORD PTR [rax]
0x00df4177: mov    rcx,rdi
0x00df417a: call   0x1400bb340
0x00df417f: lea    rcx,[rbp+0x8]
0x00df4183: call   0x140070440
0x00df4188: test   BYTE PTR [rax],0x1
0x00df418b: je     0x140df419c
0x00df418d: lea    rdx,[rip+0x948444]        # 0x14173c5d8 ; literal=" (considered the primary)"
0x00df4194: mov    rcx,rdi
0x00df4197: call   0x140070b90
0x00df419c: cmp    r15d,0x3
0x00df41a0: jl     0x140df41ab
0x00df41a2: lea    rdx,[rip+0x8101eb]        # 0x141604394 ; literal=", "
0x00df41a9: jmp    0x140df41b8
0x00df41ab: cmp    r15d,0x2
0x00df41af: jne    0x140df41c0
0x00df41b1: lea    rdx,[rip+0x8101d4]        # 0x14160438c ; literal=" and "
0x00df41b8: mov    rcx,rdi
0x00df41bb: call   0x140070b90
0x00df41c0: mov    esi,ebx
0x00df41c2: lea    rcx,[rsp+0x58]
0x00df41c7: call   0x140070440
0x00df41cc: movsxd rdx,DWORD PTR [rax]
0x00df41cf: mov    rcx,r13
0x00df41d2: call   0x140070850
0x00df41d7: mov    rcx,QWORD PTR [rax]
0x00df41da: add    rcx,0x20
0x00df41de: lea    rdx,[rbp-0x28]
0x00df41e2: call   0x140070870
0x00df41e7: lea    rcx,[rsp+0x58]
0x00df41ec: call   0x140070440
0x00df41f1: movsxd rdx,DWORD PTR [rax]
0x00df41f4: mov    rcx,r13
0x00df41f7: call   0x140070850
0x00df41fc: mov    rcx,QWORD PTR [rax]
0x00df41ff: add    rcx,0x20
0x00df4203: lea    rdx,[rbp-0x20]
0x00df4207: call   0x140070860
0x00df420c: lea    r8,[rbp-0x20]
0x00df4210: lea    rdx,[rsp+0x4a]
0x00df4215: lea    rcx,[rbp-0x28]
0x00df4219: call   0x140070450
0x00df421e: xor    edx,edx
0x00df4220: movzx  ecx,BYTE PTR [rax]
0x00df4223: call   0x140066de0
0x00df4228: test   al,al
0x00df422a: je     0x140df4268
0x00df422c: nop    DWORD PTR [rax+0x0]
0x00df4230: lea    rcx,[rbp-0x28]
0x00df4234: call   0x140070440
0x00df4239: mov    rcx,QWORD PTR [rax]
0x00df423c: add    esi,DWORD PTR [rcx+0x8]
0x00df423f: lea    rcx,[rbp-0x28]
0x00df4243: call   0x140070430
0x00df4248: lea    r8,[rbp-0x20]
0x00df424c: lea    rdx,[rsp+0x4a]
0x00df4251: lea    rcx,[rbp-0x28]
0x00df4255: call   0x140070450
0x00df425a: xor    edx,edx
0x00df425c: movzx  ecx,BYTE PTR [rax]
0x00df425f: call   0x140066de0
0x00df4264: test   al,al
0x00df4266: jne    0x140df4230
0x00df4268: cmp    r12d,0xffffffff
0x00df426c: jne    0x140df4273
0x00df426e: mov    r12d,esi
0x00df4271: jmp    0x140df4283
0x00df4273: movzx  r14d,r14b
0x00df4277: cmp    r12d,esi
0x00df427a: mov    eax,0x1
0x00df427f: cmovne r14d,eax
0x00df4283: lea    rcx,[rsp+0x58]
0x00df4288: call   0x140070440
0x00df428d: mov    rdx,rax
0x00df4290: lea    rcx,[rbp+0x240]
0x00df4297: call   0x140070a40
0x00df429c: lea    rcx,[rsp+0x58]
0x00df42a1: call   0x140070980
0x00df42a6: lea    rcx,[rbp+0x8]
0x00df42aa: call   0x140070980
0x00df42af: dec    r15d
0x00df42b2: lea    r8,[rbp+0x18]
0x00df42b6: lea    rdx,[rsp+0x35]
0x00df42bb: lea    rcx,[rsp+0x58]
0x00df42c0: call   0x140070450
0x00df42c5: xor    edx,edx
0x00df42c7: movzx  ecx,BYTE PTR [rax]
0x00df42ca: call   0x140066de0
0x00df42cf: test   al,al
0x00df42d1: jne    0x140df4150
0x00df42d7: movzx  ebx,BYTE PTR [rsp+0x30]
0x00df42dc: mov    r13,QWORD PTR [rbp-0x18]
0x00df42e0: lea    rdx,[rip+0x8252b1]        # 0x141619598 ; literal=".  "
0x00df42e7: mov    rcx,rdi
0x00df42ea: call   0x140070b90
0x00df42ef: mov    r15,QWORD PTR [rbp-0x68]
0x00df42f3: test   r14b,r14b
0x00df42f6: je     0x140df4333
0x00df42f8: mov    eax,DWORD PTR [r15+0x38]
0x00df42fc: mov    rcx,rdi
0x00df42ff: test   al,0x1
0x00df4301: je     0x140df430c
0x00df4303: lea    rdx,[rip+0x9482ee]        # 0x14173c5f8 ; literal="As stated above, they are to be played in polyrhythm.  "
0x00df430a: jmp    0x140df432e
0x00df430c: test   al,0x2
0x00df430e: je     0x140df4319
0x00df4310: lea    rdx,[rip+0x948161]        # 0x14173c478 ; literal="As stated above, they are to be played in polymeter.  "
0x00df4317: jmp    0x140df432e
0x00df4319: test   BYTE PTR [r13+0x50],0x1
0x00df431e: lea    rdx,[rip+0x94818b]        # 0x14173c4b0 ; literal="The patterns are to be played in the same beat, allowing one to repeat before the other is concluded.  "
0x00df4325: jne    0x140df432e
0x00df4327: lea    rdx,[rip+0x9481f2]        # 0x14173c520 ; literal="The patterns are to be played over the same period of time, concluding together regardless of beat number.  "
0x00df432e: call   0x140070b90
0x00df4333: lea    rdx,[rsp+0x68]
0x00df4338: lea    rcx,[rbp+0x240]
0x00df433f: call   0x140070870
0x00df4344: lea    rdx,[rbp+0x10]
0x00df4348: lea    rcx,[rbp+0x240]
0x00df434f: call   0x140070860
0x00df4354: lea    r8,[rbp+0x10]
0x00df4358: lea    rdx,[rsp+0x48]
0x00df435d: lea    rcx,[rsp+0x68]
0x00df4362: call   0x140070450
0x00df4367: xor    edx,edx
0x00df4369: movzx  ecx,BYTE PTR [rax]
0x00df436c: call   0x140066de0
0x00df4371: test   al,al
0x00df4373: je     0x140df4932
0x00df4379: nop    DWORD PTR [rax+0x0]
0x00df4380: lea    rcx,[rsp+0x68]
0x00df4385: call   0x140070440
0x00df438a: lea    rdx,[rbp+0x1b0]
0x00df4391: mov    ecx,DWORD PTR [rax]
0x00df4393: call   0x1400bb5a0
0x00df4398: cmp    eax,0xffffffff
0x00df439b: jne    0x140df48ff
0x00df43a1: lea    rcx,[rsp+0x68]
0x00df43a6: call   0x140070440
0x00df43ab: lea    rdx,[rbp+0x1b0]
0x00df43b2: mov    ecx,DWORD PTR [rax]
0x00df43b4: call   0x1400bb4a0
0x00df43b9: lea    rcx,[rsp+0x68]
0x00df43be: call   0x140070440
0x00df43c3: movsxd rdx,DWORD PTR [rax]
0x00df43c6: lea    rcx,[r15+0x8]
0x00df43ca: call   0x140070850
0x00df43cf: mov    r14,QWORD PTR [rax]
0x00df43d2: xor    r13d,r13d
0x00df43d5: mov    r15d,r13d
0x00df43d8: lea    rdx,[rsp+0x70]
0x00df43dd: lea    rcx,[r14+0x20]
0x00df43e1: call   0x140070870
0x00df43e6: lea    rdx,[rbp-0x78]
0x00df43ea: lea    rcx,[r14+0x20]
0x00df43ee: call   0x140070860
0x00df43f3: mov    rcx,QWORD PTR [rbp-0x78]
0x00df43f7: mov    rax,QWORD PTR [rsp+0x70]
0x00df43fc: mov    r12d,0xff
0x00df4402: mov    r13d,0x1
0x00df4408: cmp    rax,rcx
0x00df440b: je     0x140df442a
0x00df440d: mov    edx,r13d
0x00df4410: cmovb  edx,r12d
0x00df4414: test   dl,dl
0x00df4416: jns    0x140df442a
0x00df4418: mov    rdx,QWORD PTR [rax]
0x00df441b: add    r15d,DWORD PTR [rdx+0x8]
0x00df441f: add    rax,0x8
0x00df4423: mov    QWORD PTR [rsp+0x70],rax
0x00df4428: jmp    0x140df4408
0x00df442a: mov    r8d,0x7
0x00df4430: lea    rdx,[rip+0x947b59]        # 0x14173bf90 ; literal="[B]The "
0x00df4437: mov    rcx,rdi
0x00df443a: call   0x140071040
0x00df443f: mov    rdx,r14
0x00df4442: mov    rcx,rdi
0x00df4445: call   0x1400bb340
0x00df444a: mov    r8d,0x1e
0x00df4450: lea    rdx,[rip+0x948139]        # 0x14173c590 ; literal=" rhythm is a single line with "
0x00df4457: mov    rcx,rdi
0x00df445a: call   0x140071040
0x00df445f: nop
0x00df4460: movzx  edx,bl
0x00df4463: lea    rcx,[rbp+0x190]
0x00df446a: call   0x1400697c0
0x00df446f: lea    rcx,[rbp+0x190]
0x00df4476: call   0x1400711b0
0x00df447b: nop
0x00df447c: lea    rdx,[rbp+0x190]
0x00df4483: mov    ecx,r15d
0x00df4486: call   0x140547840
0x00df448b: lea    rdx,[rbp+0x190]
0x00df4492: mov    rcx,rdi
0x00df4495: call   0x1400bb340
0x00df449a: nop
0x00df449b: lea    rcx,[rbp+0x190]
0x00df44a2: call   0x140070e80
0x00df44a7: mov    r8d,0x6
0x00df44ad: lea    rdx,[rip+0x9481c0]        # 0x14173c674 ; literal=" beats"
0x00df44b4: mov    rcx,rdi
0x00df44b7: call   0x140071040
0x00df44bc: mov    rax,QWORD PTR [r14+0x28]
0x00df44c0: sub    rax,QWORD PTR [r14+0x20]
0x00df44c4: sar    rax,0x3
0x00df44c8: cmp    rax,0x2
0x00df44cc: mov    r13d,0x0
0x00df44d2: jb     0x140df45d1
0x00df44d8: lea    rdx,[rip+0x9481a1]        # 0x14173c680 ; literal=" divided into "
0x00df44df: mov    rcx,rdi
0x00df44e2: call   0x140070b90
0x00df44e7: lea    rcx,[rbp+0x210]
0x00df44ee: call   0x140070cc0
0x00df44f3: nop
0x00df44f4: lea    rcx,[r14+0x20]
0x00df44f8: call   0x140070480
0x00df44fd: mov    rcx,rax
0x00df4500: lea    rdx,[rbp+0x210]
0x00df4507: call   0x140547840
0x00df450c: lea    rdx,[rbp+0x210]
0x00df4513: mov    rcx,rdi
0x00df4516: call   0x1400bb340
0x00df451b: nop
0x00df451c: lea    rcx,[rbp+0x210]
0x00df4523: call   0x140069460
0x00df4528: lea    rdx,[rip+0x948161]        # 0x14173c690 ; literal=" bars in a "
0x00df452f: mov    rcx,rdi
0x00df4532: call   0x140070b90
0x00df4537: mov    esi,r13d
0x00df453a: lea    rcx,[r14+0x20]
0x00df453e: lea    rdx,[rsp+0x78]
0x00df4543: call   0x140070870
0x00df4548: lea    rcx,[r14+0x20]
0x00df454c: lea    rdx,[rbp+0x40]
0x00df4550: call   0x140070860
0x00df4555: mov    r13d,0x1
0x00df455b: nop    DWORD PTR [rax+rax*1+0x0]
0x00df4560: mov    rax,QWORD PTR [rsp+0x78]
0x00df4565: cmp    rax,QWORD PTR [rbp+0x40]
0x00df4569: je     0x140df45bf
0x00df456b: mov    edx,r13d
0x00df456e: cmovb  edx,r12d
0x00df4572: test   dl,dl
0x00df4574: jns    0x140df45bf
0x00df4576: lea    rcx,[rsp+0x78]
0x00df457b: call   0x140070440
0x00df4580: mov    rcx,QWORD PTR [rax]
0x00df4583: mov    rdx,rdi
0x00df4586: mov    ecx,DWORD PTR [rcx+0x8]
0x00df4589: call   0x140545610
0x00df458e: lea    rcx,[r14+0x20]
0x00df4592: call   0x140070480
0x00df4597: dec    rax
0x00df459a: movsxd rcx,esi
0x00df459d: cmp    rcx,rax
0x00df45a0: je     0x140df45b1
0x00df45a2: lea    rdx,[rip+0x875183]        # 0x14166972c ; literal="-"
0x00df45a9: mov    rcx,rdi
0x00df45ac: call   0x140070b90
0x00df45b1: lea    rcx,[rsp+0x78]
0x00df45b6: call   0x140070430
0x00df45bb: inc    esi
0x00df45bd: jmp    0x140df4560
0x00df45bf: lea    rdx,[rip+0x9480da]        # 0x14173c6a0 ; literal=" pattern"
0x00df45c6: mov    rcx,rdi
0x00df45c9: call   0x140070b90
0x00df45ce: xor    r13d,r13d
0x00df45d1: mov    r8d,0x3
0x00df45d7: lea    rdx,[rip+0x824fba]        # 0x141619598 ; literal=".  "
0x00df45de: mov    rcx,rdi
0x00df45e1: call   0x140071040
0x00df45e6: cmp    DWORD PTR [r14+0x48],0x0
0x00df45eb: jle    0x140df46a6
0x00df45f1: lea    rdx,[rip+0x948038]        # 0x14173c630 ; literal="The beats are named "
0x00df45f8: mov    rcx,rdi
0x00df45fb: call   0x140070b90
0x00df4600: mov    esi,r13d
0x00df4603: cmp    DWORD PTR [r14+0x48],0x0
0x00df4608: jle    0x140df4697
0x00df460e: xchg   ax,ax
0x00df4610: movsxd r15,esi
0x00df4613: shl    r15,0x5
0x00df4617: mov    rdx,QWORD PTR [r14+0x38]
0x00df461b: add    rdx,r15
0x00df461e: mov    rcx,rdi
0x00df4621: call   0x1400bb340
0x00df4626: lea    rdx,[rip+0x83ccc3]        # 0x1416312f0 ; literal=" ("
0x00df462d: mov    rcx,rdi
0x00df4630: call   0x140070b90
0x00df4635: test   esi,esi
0x00df4637: jne    0x140df4648
0x00df4639: lea    rdx,[rip+0x948a60]        # 0x14173d0a0 ; literal="spoken "
0x00df4640: mov    rcx,rdi
0x00df4643: call   0x140070b90
0x00df4648: mov    rdx,QWORD PTR [r14+0x40]
0x00df464c: add    rdx,r15
0x00df464f: mov    rcx,rdi
0x00df4652: call   0x1400bb340
0x00df4657: lea    rdx,[rip+0x83ccd2]        # 0x141631330 ; literal=")"
0x00df465e: mov    rcx,rdi
0x00df4661: call   0x140070b90
0x00df4666: mov    eax,DWORD PTR [r14+0x48]
0x00df466a: add    eax,0xfffffffe
0x00df466d: cmp    esi,eax
0x00df466f: jge    0x140df467a
0x00df4671: lea    rdx,[rip+0x80fd1c]        # 0x141604394 ; literal=", "
0x00df4678: jmp    0x140df4683
0x00df467a: jne    0x140df468b
0x00df467c: lea    rdx,[rip+0x80fd09]        # 0x14160438c ; literal=" and "
0x00df4683: mov    rcx,rdi
0x00df4686: call   0x140070b90
0x00df468b: inc    esi
0x00df468d: cmp    esi,DWORD PTR [r14+0x48]
0x00df4691: jl     0x140df4610
0x00df4697: lea    rdx,[rip+0x824efa]        # 0x141619598 ; literal=".  "
0x00df469e: mov    rcx,rdi
0x00df46a1: call   0x140070b90
0x00df46a6: lea    rdx,[rip+0x947f9b]        # 0x14173c648 ; literal="The beat is stressed as follows:"
0x00df46ad: mov    rcx,rdi
0x00df46b0: call   0x140070b90
0x00df46b5: lea    rdx,[rip+0x824814]        # 0x141618ed0 ; literal="[B]"
0x00df46bc: mov    rcx,rdi
0x00df46bf: call   0x140070b90
0x00df46c4: xor    r12b,r12b
0x00df46c7: xor    r13b,r13b
0x00df46ca: xor    sil,sil
0x00df46cd: mov    BYTE PTR [rsp+0x33],sil
0x00df46d2: xor    r15b,r15b
0x00df46d5: mov    BYTE PTR [rsp+0x30],r15b
0x00df46da: mov    BYTE PTR [rsp+0x34],sil
0x00df46df: lea    rdx,[rip+0x947f86]        # 0x14173c66c ; literal="| "
0x00df46e6: mov    rcx,rdi
0x00df46e9: call   0x140070b90
0x00df46ee: lea    rcx,[r14+0x20]
0x00df46f2: lea    rdx,[rbp+0x60]
0x00df46f6: call   0x140070870
0x00df46fb: mov    rcx,QWORD PTR [rax]
0x00df46fe: mov    QWORD PTR [rsp+0x70],rcx
0x00df4703: lea    r8,[rbp-0x78]
0x00df4707: lea    rdx,[rsp+0x49]
0x00df470c: lea    rcx,[rsp+0x70]
0x00df4711: call   0x140070450
0x00df4716: xor    edx,edx
0x00df4718: movzx  ecx,BYTE PTR [rax]
0x00df471b: call   0x140066de0
0x00df4720: test   al,al
0x00df4722: je     0x140df486c
0x00df4728: xor    ebx,ebx
0x00df472a: nop    WORD PTR [rax+rax*1+0x0]
0x00df4730: mov    r15d,ebx
0x00df4733: lea    rcx,[rsp+0x70]
0x00df4738: call   0x140070440
0x00df473d: mov    rcx,QWORD PTR [rax]
0x00df4740: cmp    DWORD PTR [rcx+0x8],ebx
0x00df4743: jle    0x140df4823
0x00df4749: mov    r14,rbx
0x00df474c: nop    DWORD PTR [rax+0x0]
0x00df4750: lea    rcx,[rsp+0x70]
0x00df4755: call   0x140070440
0x00df475a: mov    rcx,QWORD PTR [rax]
0x00df475d: mov    rax,QWORD PTR [rcx]
0x00df4760: mov    esi,DWORD PTR [r14+rax*1]
0x00df4764: mov    eax,esi
0x00df4766: and    eax,0x3
0x00df4769: mov    rcx,rdi
0x00df476c: cmp    eax,0x3
0x00df476f: jne    0x140df4782
0x00df4771: lea    rdx,[rip+0x814f40]        # 0x1416096b8 ; literal="!"
0x00df4778: call   0x140070b90
0x00df477d: mov    r12b,0x1
0x00df4780: jmp    0x140df47bc
0x00df4782: cmp    eax,0x1
0x00df4785: jne    0x140df4798
0x00df4787: lea    rdx,[rip+0x8eb72e]        # 0x1416dfebc ; literal="X"
0x00df478e: call   0x140070b90
0x00df4793: mov    r13b,0x1
0x00df4796: jmp    0x140df47bc
0x00df4798: cmp    eax,0x2
0x00df479b: jne    0x140df47ab
0x00df479d: lea    rdx,[rip+0x825c40]        # 0x14161a3e4 ; literal="x"
0x00df47a4: call   0x140070b90
0x00df47a9: jmp    0x140df47bc
0x00df47ab: lea    rdx,[rip+0x874f7a]        # 0x14166972c ; literal="-"
0x00df47b2: call   0x140070b90
0x00df47b7: mov    BYTE PTR [rsp+0x34],0x1
0x00df47bc: mov    rcx,rdi
0x00df47bf: test   sil,0x4
0x00df47c3: je     0x140df47db
0x00df47c5: lea    rdx,[rip+0x947ea4]        # 0x14173c670 ; literal="`"
0x00df47cc: call   0x140070b90
0x00df47d1: mov    sil,0x1
0x00df47d4: mov    BYTE PTR [rsp+0x33],sil
0x00df47d9: jmp    0x140df4805
0x00df47db: test   sil,0x8
0x00df47df: je     0x140df47f4
0x00df47e1: lea    rdx,[rip+0x87b5e8]        # 0x14166fdd0 ; literal="'"
0x00df47e8: call   0x140070b90
0x00df47ed: mov    BYTE PTR [rsp+0x30],0x1
0x00df47f2: jmp    0x140df4800
0x00df47f4: lea    rdx,[rip+0x80f1f5]        # 0x1416039f0 ; literal=" "
0x00df47fb: call   0x140070b90
0x00df4800: movzx  esi,BYTE PTR [rsp+0x33]
0x00df4805: inc    r15d
0x00df4808: add    r14,0x4
0x00df480c: lea    rcx,[rsp+0x70]
0x00df4811: call   0x140070440
0x00df4816: mov    rcx,QWORD PTR [rax]
0x00df4819: cmp    r15d,DWORD PTR [rcx+0x8]
0x00df481d: jl     0x140df4750
0x00df4823: lea    rdx,[rip+0x947e42]        # 0x14173c66c ; literal="| "
0x00df482a: mov    rcx,rdi
0x00df482d: call   0x140070b90
0x00df4832: lea    rcx,[rsp+0x70]
0x00df4837: call   0x140070430
0x00df483c: lea    r8,[rbp-0x78]
0x00df4840: lea    rdx,[rsp+0x49]
0x00df4845: lea    rcx,[rsp+0x70]
0x00df484a: call   0x140070450
0x00df484f: xor    edx,edx
0x00df4851: movzx  ecx,BYTE PTR [rax]
0x00df4854: call   0x140066de0
0x00df4859: test   al,al
0x00df485b: jne    0x140df4730
0x00df4861: movzx  ebx,BYTE PTR [rsp+0x30]
0x00df4866: movzx  r15d,BYTE PTR [rsp+0x30]
0x00df486c: lea    rdx,[rip+0x947e9d]        # 0x14173c710 ; literal="[B]where "
0x00df4873: mov    rcx,rdi
0x00df4876: call   0x140070b90
0x00df487b: test   r12b,r12b
0x00df487e: je     0x140df488f
0x00df4880: lea    rdx,[rip+0x947e99]        # 0x14173c720 ; literal="! marks the primary accent, "
0x00df4887: mov    rcx,rdi
0x00df488a: call   0x140070b90
0x00df488f: test   r13b,r13b
0x00df4892: je     0x140df48a3
0x00df4894: lea    rdx,[rip+0x947ea5]        # 0x14173c740 ; literal="X marks an accented beat, "
0x00df489b: mov    rcx,rdi
0x00df489e: call   0x140070b90
0x00df48a3: test   sil,sil
0x00df48a6: je     0x140df48b7
0x00df48a8: lea    rdx,[rip+0x947eb1]        # 0x14173c760 ; literal="` marks a beat as early, "
0x00df48af: mov    rcx,rdi
0x00df48b2: call   0x140070b90
0x00df48b7: test   r15b,r15b
0x00df48ba: je     0x140df48cb
0x00df48bc: lea    rdx,[rip+0x947ded]        # 0x14173c6b0 ; literal="' marks a beat as late, "
0x00df48c3: mov    rcx,rdi
0x00df48c6: call   0x140070b90
0x00df48cb: lea    rdx,[rip+0x947dfe]        # 0x14173c6d0 ; literal="x is a beat"
0x00df48d2: mov    rcx,rdi
0x00df48d5: call   0x140070b90
0x00df48da: cmp    BYTE PTR [rsp+0x34],0x0
0x00df48df: je     0x140df48f0
0x00df48e1: lea    rdx,[rip+0x947df8]        # 0x14173c6e0 ; literal=", - is silent"
0x00df48e8: mov    rcx,rdi
0x00df48eb: call   0x140070b90
0x00df48f0: lea    rdx,[rip+0x947df9]        # 0x14173c6f0 ; literal=" and | indicates a bar.  "
0x00df48f7: mov    rcx,rdi
0x00df48fa: call   0x140070b90
0x00df48ff: lea    rcx,[rsp+0x68]
0x00df4904: call   0x140070980
0x00df4909: lea    r8,[rbp+0x10]
0x00df490d: lea    rdx,[rsp+0x48]
0x00df4912: lea    rcx,[rsp+0x68]
0x00df4917: call   0x140070450
0x00df491c: xor    edx,edx
0x00df491e: movzx  ecx,BYTE PTR [rax]
0x00df4921: call   0x140066de0
0x00df4926: test   al,al
0x00df4928: mov    r15,QWORD PTR [rbp-0x68]
0x00df492c: jne    0x140df4380
0x00df4932: lea    rcx,[rbp+0x240]
0x00df4939: call   0x140067150
0x00df493e: mov    r15,QWORD PTR [rbp-0x68]
0x00df4942: mov    r14d,DWORD PTR [rbp-0x60]
0x00df4946: mov    r12,QWORD PTR [rbp+0x38]
0x00df494a: mov    esi,DWORD PTR [rbp-0x80]
0x00df494d: inc    r14d
0x00df4950: mov    DWORD PTR [rbp-0x60],r14d
0x00df4954: mov    rcx,r12
0x00df4957: call   0x140070480
0x00df495c: cmp    r14d,eax
0x00df495f: jl     0x140df3f80
0x00df4965: mov    r13d,DWORD PTR [rbp-0x5c]
0x00df4969: lea    rcx,[rbp+0x1b0]
0x00df4970: call   0x140067150
0x00df4975: nop
0x00df4976: lea    rcx,[rbp+0x1d0]
0x00df497d: call   0x140067150
0x00df4982: inc    r13d
0x00df4985: mov    DWORD PTR [rbp-0x5c],r13d
0x00df4989: mov    rcx,r12
0x00df498c: call   0x140070480
0x00df4991: cmp    r13d,eax
0x00df4994: jl     0x140df3eb0
0x00df499a: lea    rcx,[rbp+0x70]
0x00df499e: call   0x140067150
0x00df49a3: nop
0x00df49a4: lea    rcx,[rbp+0x88]
0x00df49ab: call   0x140067150
0x00df49b0: nop
0x00df49b1: lea    rcx,[rbp+0x1f0]
0x00df49b8: call   0x140069460
0x00df49bd: mov    rcx,QWORD PTR [rbp+0x270]
0x00df49c4: xor    rcx,rsp
0x00df49c7: call   0x1415530b0
0x00df49cc: mov    rbx,QWORD PTR [rsp+0x3d0]
0x00df49d4: add    rsp,0x380
0x00df49db: pop    r15
0x00df49dd: pop    r14
0x00df49df: pop    r13
0x00df49e1: pop    r12
0x00df49e3: pop    rdi
0x00df49e4: pop    rsi
0x00df49e5: pop    rbp
0x00df49e6: ret
0x00df49e7: mov    r14d,DWORD PTR [rbp-0x60]
0x00df49eb: jmp    0x140df494d
0x00df49f0: int3
0x00df49f1: nop    DWORD PTR [rax]
