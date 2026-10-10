; reference; PE:6a70a6d9:02711000; spoor-shorten; RVA 0x52d910..0x52ded4
0x0052d910: mov    QWORD PTR [rsp+0x8],rbx
0x0052d915: mov    QWORD PTR [rsp+0x10],rbp
0x0052d91a: mov    QWORD PTR [rsp+0x18],rsi
0x0052d91f: mov    QWORD PTR [rsp+0x20],rdi
0x0052d924: push   r14
0x0052d926: sub    rsp,0x20
0x0052d92a: cmp    QWORD PTR [rcx+0x10],0x2
0x0052d92f: mov    rbx,rcx
0x0052d932: movsxd r14,edx
0x0052d935: jb     0x14052dd3a
0x0052d93b: mov    rax,QWORD PTR [rcx+0x18]
0x0052d93f: cmp    rax,0xf
0x0052d943: jbe    0x14052d948
0x0052d945: mov    rcx,QWORD PTR [rcx]
0x0052d948: xor    ebp,ebp
0x0052d94a: cmp    BYTE PTR [rcx],0x41
0x0052d94d: je     0x14052d964
0x0052d94f: mov    rcx,rbx
0x0052d952: cmp    rax,0xf
0x0052d956: jbe    0x14052d95b
0x0052d958: mov    rcx,QWORD PTR [rbx]
0x0052d95b: cmp    BYTE PTR [rcx],0x61
0x0052d95e: jne    0x14052da15
0x0052d964: mov    rcx,rbx
0x0052d967: cmp    rax,0xf
0x0052d96b: jbe    0x14052d970
0x0052d96d: mov    rcx,QWORD PTR [rbx]
0x0052d970: cmp    BYTE PTR [rcx+0x1],0x20
0x0052d974: jne    0x14052da15
0x0052d97a: cmp    QWORD PTR [rbx+0x18],0xf
0x0052d97f: mov    rdi,QWORD PTR [rbx+0x10]
0x0052d983: jbe    0x14052d99d
0x0052d985: lea    rax,[rdi-0x1]
0x0052d989: mov    edx,0x1
0x0052d98e: cmp    rax,rdx
0x0052d991: mov    r9d,edx
0x0052d994: cmovb  rdx,rax
0x0052d998: mov    rax,QWORD PTR [rbx]
0x0052d99b: jmp    0x14052d9b6
0x0052d99d: mov    r9d,0x1
0x0052d9a3: mov    rax,rdi
0x0052d9a6: sub    rax,r9
0x0052d9a9: mov    edx,r9d
0x0052d9ac: cmp    rax,rdx
0x0052d9af: cmovb  rdx,rax
0x0052d9b3: mov    rax,rbx
0x0052d9b6: sub    rdi,rdx
0x0052d9b9: lea    rcx,[rax+r9*1]
0x0052d9bd: mov    r8,rdi
0x0052d9c0: add    rdx,rcx
0x0052d9c3: sub    r8,r9
0x0052d9c6: inc    r8
0x0052d9c9: call   0x14153ae1a
0x0052d9ce: mov    QWORD PTR [rbx+0x10],rdi
0x0052d9d2: mov    rdx,rbp
0x0052d9d5: cmp    QWORD PTR [rbx+0x18],0xf
0x0052d9da: mov    eax,0x1
0x0052d9df: jbe    0x14052d9e6
0x0052d9e1: mov    rcx,QWORD PTR [rbx]
0x0052d9e4: jmp    0x14052d9e9
0x0052d9e6: mov    rcx,rbx
0x0052d9e9: cmp    rdi,rax
0x0052d9ec: cmovb  rax,rdi
0x0052d9f0: add    rcx,rdx
0x0052d9f3: sub    rdi,rax
0x0052d9f6: mov    r8,rdi
0x0052d9f9: sub    r8,rdx
0x0052d9fc: inc    r8
0x0052d9ff: lea    rdx,[rcx+rax*1]
0x0052da03: call   0x14153ae1a
0x0052da08: mov    QWORD PTR [rbx+0x10],rdi
0x0052da0c: cmp    rdi,r14
0x0052da0f: jbe    0x14052deb9
0x0052da15: cmp    QWORD PTR [rbx+0x10],0x3
0x0052da1a: jb     0x14052dd3a
0x0052da20: mov    rax,QWORD PTR [rbx+0x18]
0x0052da24: mov    rcx,rbx
0x0052da27: cmp    rax,0xf
0x0052da2b: jbe    0x14052da30
0x0052da2d: mov    rcx,QWORD PTR [rbx]
0x0052da30: cmp    BYTE PTR [rcx],0x41
0x0052da33: mov    esi,0x2
0x0052da38: je     0x14052da4f
0x0052da3a: mov    rcx,rbx
0x0052da3d: cmp    rax,0xf
0x0052da41: jbe    0x14052da46
0x0052da43: mov    rcx,QWORD PTR [rbx]
0x0052da46: cmp    BYTE PTR [rcx],0x61
0x0052da49: jne    0x14052db73
0x0052da4f: mov    rcx,rbx
0x0052da52: cmp    rax,0xf
0x0052da56: jbe    0x14052da5b
0x0052da58: mov    rcx,QWORD PTR [rbx]
0x0052da5b: cmp    BYTE PTR [rcx+0x1],0x4e
0x0052da5f: je     0x14052da78
0x0052da61: cmp    QWORD PTR [rbx+0x18],0xf
0x0052da66: mov    rax,rbx
0x0052da69: jbe    0x14052da6e
0x0052da6b: mov    rax,QWORD PTR [rbx]
0x0052da6e: cmp    BYTE PTR [rax+0x1],0x6e
0x0052da72: jne    0x14052db73
0x0052da78: mov    rcx,QWORD PTR [rbx+0x18]
0x0052da7c: mov    rax,rbx
0x0052da7f: cmp    rcx,0xf
0x0052da83: jbe    0x14052da88
0x0052da85: mov    rax,QWORD PTR [rbx]
0x0052da88: cmp    BYTE PTR [rax+0x2],0x20
0x0052da8c: jne    0x14052db73
0x0052da92: mov    rdi,QWORD PTR [rbx+0x10]
0x0052da96: mov    r9,rsi
0x0052da99: mov    rax,rdi
0x0052da9c: mov    edx,0x1
0x0052daa1: sub    rax,rsi
0x0052daa4: cmp    rcx,0xf
0x0052daa8: jbe    0x14052dab6
0x0052daaa: cmp    rax,rdx
0x0052daad: cmovb  rdx,rax
0x0052dab1: mov    rax,QWORD PTR [rbx]
0x0052dab4: jmp    0x14052dac0
0x0052dab6: cmp    rax,rdx
0x0052dab9: cmovb  rdx,rax
0x0052dabd: mov    rax,rbx
0x0052dac0: sub    rdi,rdx
0x0052dac3: lea    rcx,[rax+r9*1]
0x0052dac7: mov    r8,rdi
0x0052daca: add    rdx,rcx
0x0052dacd: sub    r8,r9
0x0052dad0: inc    r8
0x0052dad3: call   0x14153ae1a
0x0052dad8: mov    QWORD PTR [rbx+0x10],rdi
0x0052dadc: cmp    QWORD PTR [rbx+0x18],0xf
0x0052dae1: jbe    0x14052dafb
0x0052dae3: lea    rax,[rdi-0x1]
0x0052dae7: mov    edx,0x1
0x0052daec: cmp    rax,rdx
0x0052daef: mov    r9d,edx
0x0052daf2: cmovb  rdx,rax
0x0052daf6: mov    rax,QWORD PTR [rbx]
0x0052daf9: jmp    0x14052db14
0x0052dafb: mov    r9d,0x1
0x0052db01: mov    rax,rdi
0x0052db04: sub    rax,r9
0x0052db07: mov    edx,r9d
0x0052db0a: cmp    rax,rdx
0x0052db0d: cmovb  rdx,rax
0x0052db11: mov    rax,rbx
0x0052db14: sub    rdi,rdx
0x0052db17: lea    rcx,[rax+r9*1]
0x0052db1b: mov    r8,rdi
0x0052db1e: add    rdx,rcx
0x0052db21: sub    r8,r9
0x0052db24: inc    r8
0x0052db27: call   0x14153ae1a
0x0052db2c: mov    QWORD PTR [rbx+0x10],rdi
0x0052db30: mov    rdx,rbp
0x0052db33: cmp    QWORD PTR [rbx+0x18],0xf
0x0052db38: mov    eax,0x1
0x0052db3d: jbe    0x14052db44
0x0052db3f: mov    rcx,QWORD PTR [rbx]
0x0052db42: jmp    0x14052db47
0x0052db44: mov    rcx,rbx
0x0052db47: cmp    rdi,rax
0x0052db4a: cmovb  rax,rdi
0x0052db4e: add    rcx,rdx
0x0052db51: sub    rdi,rax
0x0052db54: mov    r8,rdi
0x0052db57: sub    r8,rdx
0x0052db5a: inc    r8
0x0052db5d: lea    rdx,[rcx+rax*1]
0x0052db61: call   0x14153ae1a
0x0052db66: mov    QWORD PTR [rbx+0x10],rdi
0x0052db6a: cmp    rdi,r14
0x0052db6d: jbe    0x14052deb9
0x0052db73: cmp    QWORD PTR [rbx+0x10],0x4
0x0052db78: jb     0x14052dd3a
0x0052db7e: mov    rax,QWORD PTR [rbx+0x18]
0x0052db82: mov    rcx,rbx
0x0052db85: cmp    rax,0xf
0x0052db89: jbe    0x14052db8e
0x0052db8b: mov    rcx,QWORD PTR [rbx]
0x0052db8e: cmp    BYTE PTR [rcx],0x54
0x0052db91: je     0x14052dba8
0x0052db93: mov    rcx,rbx
0x0052db96: cmp    rax,0xf
0x0052db9a: jbe    0x14052db9f
0x0052db9c: mov    rcx,QWORD PTR [rbx]
0x0052db9f: cmp    BYTE PTR [rcx],0x74
0x0052dba2: jne    0x14052dd3a
0x0052dba8: mov    rcx,rbx
0x0052dbab: cmp    rax,0xf
0x0052dbaf: jbe    0x14052dbb4
0x0052dbb1: mov    rcx,QWORD PTR [rbx]
0x0052dbb4: cmp    BYTE PTR [rcx+0x1],0x48
0x0052dbb8: je     0x14052dbd1
0x0052dbba: cmp    QWORD PTR [rbx+0x18],0xf
0x0052dbbf: mov    rax,rbx
0x0052dbc2: jbe    0x14052dbc7
0x0052dbc4: mov    rax,QWORD PTR [rbx]
0x0052dbc7: cmp    BYTE PTR [rax+0x1],0x68
0x0052dbcb: jne    0x14052dd3a
0x0052dbd1: mov    rax,QWORD PTR [rbx+0x18]
0x0052dbd5: mov    rcx,rbx
0x0052dbd8: cmp    rax,0xf
0x0052dbdc: jbe    0x14052dbe1
0x0052dbde: mov    rcx,QWORD PTR [rbx]
0x0052dbe1: cmp    BYTE PTR [rcx+0x2],0x45
0x0052dbe5: je     0x14052dbfd
0x0052dbe7: mov    rcx,rbx
0x0052dbea: cmp    rax,0xf
0x0052dbee: jbe    0x14052dbf3
0x0052dbf0: mov    rcx,QWORD PTR [rbx]
0x0052dbf3: cmp    BYTE PTR [rcx+0x2],0x65
0x0052dbf7: jne    0x14052dd3a
0x0052dbfd: mov    rcx,rbx
0x0052dc00: cmp    rax,0xf
0x0052dc04: jbe    0x14052dc09
0x0052dc06: mov    rcx,QWORD PTR [rbx]
0x0052dc09: cmp    BYTE PTR [rcx+0x3],0x20
0x0052dc0d: jne    0x14052dd3a
0x0052dc13: mov    rdi,QWORD PTR [rbx+0x10]
0x0052dc17: mov    edx,0x3
0x0052dc1c: mov    rax,rdi
0x0052dc1f: mov    r9d,0x1
0x0052dc25: sub    rax,rdx
0x0052dc28: cmp    QWORD PTR [rbx+0x18],0xf
0x0052dc2d: jbe    0x14052dc3b
0x0052dc2f: cmp    rax,r9
0x0052dc32: cmovb  r9,rax
0x0052dc36: mov    rax,QWORD PTR [rbx]
0x0052dc39: jmp    0x14052dc45
0x0052dc3b: cmp    rax,r9
0x0052dc3e: cmovb  r9,rax
0x0052dc42: mov    rax,rbx
0x0052dc45: sub    rdi,r9
0x0052dc48: lea    rcx,[rax+rdx*1]
0x0052dc4c: mov    r8,rdi
0x0052dc4f: sub    r8,rdx
0x0052dc52: lea    rdx,[rcx+r9*1]
0x0052dc56: inc    r8
0x0052dc59: call   0x14153ae1a
0x0052dc5e: mov    rax,rdi
0x0052dc61: mov    QWORD PTR [rbx+0x10],rdi
0x0052dc65: sub    rax,rsi
0x0052dc68: mov    edx,0x1
0x0052dc6d: cmp    QWORD PTR [rbx+0x18],0xf
0x0052dc72: jbe    0x14052dc80
0x0052dc74: cmp    rax,rdx
0x0052dc77: cmovb  rdx,rax
0x0052dc7b: mov    rax,QWORD PTR [rbx]
0x0052dc7e: jmp    0x14052dc8a
0x0052dc80: cmp    rax,rdx
0x0052dc83: cmovb  rdx,rax
0x0052dc87: mov    rax,rbx
0x0052dc8a: sub    rdi,rdx
0x0052dc8d: lea    rcx,[rax+rsi*1]
0x0052dc91: mov    r8,rdi
0x0052dc94: add    rdx,rcx
0x0052dc97: sub    r8,rsi
0x0052dc9a: inc    r8
0x0052dc9d: call   0x14153ae1a
0x0052dca2: mov    QWORD PTR [rbx+0x10],rdi
0x0052dca6: cmp    QWORD PTR [rbx+0x18],0xf
0x0052dcab: jbe    0x14052dcc5
0x0052dcad: lea    rax,[rdi-0x1]
0x0052dcb1: mov    edx,0x1
0x0052dcb6: cmp    rax,rdx
0x0052dcb9: mov    r9d,edx
0x0052dcbc: cmovb  rdx,rax
0x0052dcc0: mov    rax,QWORD PTR [rbx]
0x0052dcc3: jmp    0x14052dcde
0x0052dcc5: mov    r9d,0x1
0x0052dccb: mov    rax,rdi
0x0052dcce: sub    rax,r9
0x0052dcd1: mov    edx,r9d
0x0052dcd4: cmp    rax,rdx
0x0052dcd7: cmovb  rdx,rax
0x0052dcdb: mov    rax,rbx
0x0052dcde: sub    rdi,rdx
0x0052dce1: lea    rcx,[rax+r9*1]
0x0052dce5: mov    r8,rdi
0x0052dce8: add    rdx,rcx
0x0052dceb: sub    r8,r9
0x0052dcee: inc    r8
0x0052dcf1: call   0x14153ae1a
0x0052dcf6: mov    QWORD PTR [rbx+0x10],rdi
0x0052dcfa: mov    eax,0x1
0x0052dcff: cmp    QWORD PTR [rbx+0x18],0xf
0x0052dd04: jbe    0x14052dd0b
0x0052dd06: mov    rcx,QWORD PTR [rbx]
0x0052dd09: jmp    0x14052dd0e
0x0052dd0b: mov    rcx,rbx
0x0052dd0e: cmp    rdi,rax
0x0052dd11: cmovb  rax,rdi
0x0052dd15: add    rcx,rbp
0x0052dd18: sub    rdi,rax
0x0052dd1b: mov    r8,rdi
0x0052dd1e: sub    r8,rbp
0x0052dd21: inc    r8
0x0052dd24: lea    rdx,[rcx+rax*1]
0x0052dd28: call   0x14153ae1a
0x0052dd2d: mov    QWORD PTR [rbx+0x10],rdi
0x0052dd31: cmp    rdi,r14
0x0052dd34: jbe    0x14052deb9
0x0052dd3a: mov    esi,DWORD PTR [rbx+0x10]
0x0052dd3d: dec    esi
0x0052dd3f: cmp    esi,0x1
0x0052dd42: jl     0x14052dea0
0x0052dd48: movsxd rdi,esi
0x0052dd4b: nop    DWORD PTR [rax+rax*1+0x0]
0x0052dd50: mov    rax,QWORD PTR [rbx+0x18]
0x0052dd54: mov    rcx,rbx
0x0052dd57: cmp    rax,0xf
0x0052dd5b: jbe    0x14052dd60
0x0052dd5d: mov    rcx,QWORD PTR [rbx]
0x0052dd60: cmp    BYTE PTR [rdi+rcx*1-0x1],0x20
0x0052dd65: je     0x14052de92
0x0052dd6b: mov    rcx,rbx
0x0052dd6e: cmp    rax,0xf
0x0052dd72: jbe    0x14052dd77
0x0052dd74: mov    rcx,QWORD PTR [rbx]
0x0052dd77: cmp    BYTE PTR [rdi+rcx*1],0x61
0x0052dd7b: je     0x14052de37
0x0052dd81: mov    rcx,rbx
0x0052dd84: cmp    rax,0xf
0x0052dd88: jbe    0x14052dd8d
0x0052dd8a: mov    rcx,QWORD PTR [rbx]
0x0052dd8d: cmp    BYTE PTR [rdi+rcx*1],0x65
0x0052dd91: je     0x14052de37
0x0052dd97: mov    rax,QWORD PTR [rbx+0x18]
0x0052dd9b: mov    rcx,rbx
0x0052dd9e: cmp    rax,0xf
0x0052dda2: jbe    0x14052dda7
0x0052dda4: mov    rcx,QWORD PTR [rbx]
0x0052dda7: cmp    BYTE PTR [rdi+rcx*1],0x69
0x0052ddab: je     0x14052de37
0x0052ddb1: mov    rcx,rbx
0x0052ddb4: cmp    rax,0xf
0x0052ddb8: jbe    0x14052ddbd
0x0052ddba: mov    rcx,QWORD PTR [rbx]
0x0052ddbd: cmp    BYTE PTR [rdi+rcx*1],0x6f
0x0052ddc1: je     0x14052de37
0x0052ddc3: mov    rcx,rbx
0x0052ddc6: cmp    rax,0xf
0x0052ddca: jbe    0x14052ddcf
0x0052ddcc: mov    rcx,QWORD PTR [rbx]
0x0052ddcf: cmp    BYTE PTR [rdi+rcx*1],0x75
0x0052ddd3: je     0x14052de37
0x0052ddd5: mov    rax,QWORD PTR [rbx+0x18]
0x0052ddd9: mov    rcx,rbx
0x0052dddc: cmp    rax,0xf
0x0052dde0: jbe    0x14052dde5
0x0052dde2: mov    rcx,QWORD PTR [rbx]
0x0052dde5: cmp    BYTE PTR [rdi+rcx*1],0x41
0x0052dde9: je     0x14052de37
0x0052ddeb: mov    rcx,rbx
0x0052ddee: cmp    rax,0xf
0x0052ddf2: jbe    0x14052ddf7
0x0052ddf4: mov    rcx,QWORD PTR [rbx]
0x0052ddf7: cmp    BYTE PTR [rdi+rcx*1],0x45
0x0052ddfb: je     0x14052de37
0x0052ddfd: mov    rcx,rbx
0x0052de00: cmp    rax,0xf
0x0052de04: jbe    0x14052de09
0x0052de06: mov    rcx,QWORD PTR [rbx]
0x0052de09: cmp    BYTE PTR [rdi+rcx*1],0x49
0x0052de0d: je     0x14052de37
0x0052de0f: mov    rcx,QWORD PTR [rbx+0x18]
0x0052de13: mov    rax,rbx
0x0052de16: cmp    rcx,0xf
0x0052de1a: jbe    0x14052de1f
0x0052de1c: mov    rax,QWORD PTR [rbx]
0x0052de1f: cmp    BYTE PTR [rdi+rax*1],0x4f
0x0052de23: je     0x14052de37
0x0052de25: mov    rax,rbx
0x0052de28: cmp    rcx,0xf
0x0052de2c: jbe    0x14052de31
0x0052de2e: mov    rax,QWORD PTR [rbx]
0x0052de31: cmp    BYTE PTR [rdi+rax*1],0x55
0x0052de35: jne    0x14052de92
0x0052de37: mov    rbp,QWORD PTR [rbx+0x10]
0x0052de3b: mov    r9d,0x1
0x0052de41: mov    rcx,QWORD PTR [rbx+0x18]
0x0052de45: mov    rax,rbp
0x0052de48: movsxd rdx,esi
0x0052de4b: sub    rax,rdx
0x0052de4e: cmp    rcx,0xf
0x0052de52: jbe    0x14052de5d
0x0052de54: cmp    rax,r9
0x0052de57: cmovb  r9,rax
0x0052de5b: jmp    0x14052de6d
0x0052de5d: cmp    rax,r9
0x0052de60: cmovb  r9,rax
0x0052de64: mov    rax,rbx
0x0052de67: cmp    rcx,0xf
0x0052de6b: jbe    0x14052de70
0x0052de6d: mov    rax,QWORD PTR [rbx]
0x0052de70: sub    rbp,r9
0x0052de73: lea    rcx,[rax+rdx*1]
0x0052de77: mov    r8,rbp
0x0052de7a: sub    r8,rdx
0x0052de7d: lea    rdx,[rcx+r9*1]
0x0052de81: inc    r8
0x0052de84: call   0x14153ae1a
0x0052de89: mov    QWORD PTR [rbx+0x10],rbp
0x0052de8d: cmp    rbp,r14
0x0052de90: jbe    0x14052deb9
0x0052de92: dec    esi
0x0052de94: dec    rdi
0x0052de97: cmp    esi,0x1
0x0052de9a: jge    0x14052dd50
0x0052dea0: cmp    QWORD PTR [rbx+0x10],r14
0x0052dea4: jbe    0x14052deb9
0x0052dea6: mov    QWORD PTR [rbx+0x10],r14
0x0052deaa: cmp    QWORD PTR [rbx+0x18],0xf
0x0052deaf: jbe    0x14052deb4
0x0052deb1: mov    rbx,QWORD PTR [rbx]
0x0052deb4: mov    BYTE PTR [rbx+r14*1],0x0
0x0052deb9: mov    rbx,QWORD PTR [rsp+0x30]
0x0052debe: mov    rbp,QWORD PTR [rsp+0x38]
0x0052dec3: mov    rsi,QWORD PTR [rsp+0x40]
0x0052dec8: mov    rdi,QWORD PTR [rsp+0x48]
0x0052decd: add    rsp,0x20
0x0052ded1: pop    r14
0x0052ded3: ret
