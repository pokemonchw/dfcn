# classic PE:6a70b91c:0270a000; caste-field; RVA 0xaa07f0..0xaa08e8
0x00aa07f0: rex push rdi
0x00aa07f2: sub    rsp,0x20
0x00aa07f6: mov    QWORD PTR [rdx+0x10],0x0
0x00aa07fe: mov    rdi,rdx
0x00aa0801: cmp    QWORD PTR [rdx+0x18],0xf
0x00aa0806: mov    rax,rdx
0x00aa0809: movsx  r10,r8w
0x00aa080d: jbe    0x140aa0812
0x00aa080f: mov    rax,QWORD PTR [rdx]
0x00aa0812: mov    BYTE PTR [rax],0x0
0x00aa0815: mov    r8,QWORD PTR [rip+0x1a46144]        # 0x1424e6960
0x00aa081c: mov    r9,QWORD PTR [rip+0x1a46135]        # 0x1424e6958
0x00aa0823: mov    QWORD PTR [rsp+0x30],rbx
0x00aa0828: movsx  rbx,cx
0x00aa082c: cmp    r10w,0xffff
0x00aa0831: je     0x140aa08a9
0x00aa0833: test   cx,cx
0x00aa0836: js     0x140aa08dd
0x00aa083c: mov    rax,r8
0x00aa083f: sub    rax,r9
0x00aa0842: sar    rax,0x3
0x00aa0846: cmp    rbx,rax
0x00aa0849: jae    0x140aa08a9
0x00aa084b: test   r10w,r10w
0x00aa084f: js     0x140aa08ae
0x00aa0851: mov    rax,QWORD PTR [r9+rbx*8]
0x00aa0855: mov    rdx,QWORD PTR [rax+0x178]
0x00aa085c: mov    rax,QWORD PTR [rax+0x180]
0x00aa0863: sub    rax,rdx
0x00aa0866: sar    rax,0x3
0x00aa086a: cmp    r10,rax
0x00aa086d: jae    0x140aa08ae
0x00aa086f: mov    rdx,QWORD PTR [rdx+r10*8]
0x00aa0873: add    rdx,0x60
0x00aa0877: cmp    rdi,rdx
0x00aa087a: je     0x140aa08a0
0x00aa087c: cmp    QWORD PTR [rdx+0x18],0xf
0x00aa0881: mov    r8,QWORD PTR [rdx+0x10]
0x00aa0885: jbe    0x140aa088a
0x00aa0887: mov    rdx,QWORD PTR [rdx]
0x00aa088a: mov    rcx,rdi
0x00aa088d: call   0x14006f860
0x00aa0892: mov    r8,QWORD PTR [rip+0x1a460c7]        # 0x1424e6960
0x00aa0899: mov    r9,QWORD PTR [rip+0x1a460b8]        # 0x1424e6958
0x00aa08a0: cmp    QWORD PTR [rdi+0x10],0x0
0x00aa08a5: ja     0x140aa08dd
0x00aa08a7: jmp    0x140aa08ae
0x00aa08a9: test   cx,cx
0x00aa08ac: js     0x140aa08dd
0x00aa08ae: sub    r8,r9
0x00aa08b1: sar    r8,0x3
0x00aa08b5: cmp    rbx,r8
0x00aa08b8: jae    0x140aa08dd
0x00aa08ba: mov    rdx,QWORD PTR [r9+rbx*8]
0x00aa08be: add    rdx,0x60
0x00aa08c2: cmp    rdi,rdx
0x00aa08c5: je     0x140aa08dd
0x00aa08c7: cmp    QWORD PTR [rdx+0x18],0xf
0x00aa08cc: mov    r8,QWORD PTR [rdx+0x10]
0x00aa08d0: jbe    0x140aa08d5
0x00aa08d2: mov    rdx,QWORD PTR [rdx]
0x00aa08d5: mov    rcx,rdi
0x00aa08d8: call   0x14006f860
0x00aa08dd: mov    rbx,QWORD PTR [rsp+0x30]
0x00aa08e2: add    rsp,0x20
0x00aa08e6: pop    rdi
0x00aa08e7: ret
