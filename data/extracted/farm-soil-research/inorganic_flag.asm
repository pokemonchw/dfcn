0x14014d7f0: mov    r9d,r8d
0x14014d7f3: test   edx,edx
0x14014d7f5: js     0x14014d847
0x14014d7f7: mov    r8,QWORD PTR [rcx]
0x14014d7fa: mov    rax,QWORD PTR [rcx+0x8]
0x14014d7fe: sub    rax,r8
0x14014d801: movsxd rdx,edx
0x14014d804: sar    rax,0x3
0x14014d808: cmp    rdx,rax
0x14014d80b: jae    0x14014d847
0x14014d80d: cmp    r9d,0xffffffff
0x14014d811: jne    0x14014d816
0x14014d813: mov    al,0x1
0x14014d815: ret
